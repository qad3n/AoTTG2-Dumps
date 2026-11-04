// Type: UI.CursorManager
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/UI/CursorManager.cs
// Prior real C# source (older reference): Assets/Scripts/UI/CursorManager.cs
// --------------------------------

// UI.CursorManager$$UpdateGameplayCursorLock
// il2cpp: void UI_CursorManager__UpdateGameplayCursorLock (const MethodInfo* method);
// 0x182208c60

void UI_CursorManager__UpdateGameplayCursorLock(MethodInfo *method)

{
  byte bVar1;
  Cameras_InGameCamera_o *__this;
  bool bVar2;
  bool bVar3;
  int32_t iVar4;
  int value;
  
  if (Il2CppMethodInitialized_1843470a7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CursorManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_InGameCamera);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_1843470a7 = '\x01';
  }
  __this = (Cameras_InGameCamera_o *)TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
  if (__this != (Cameras_InGameCamera_o *)0x0) {
    bVar1 = (TypeInfo_Cameras_InGameCamera->_2).typeHierarchyDepth;
    if (((__this->klass->_2).typeHierarchyDepth < bVar1) ||
       ((__this->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_Cameras_InGameCamera)) {
      il2cpp_codegen_raise_invalid_cast_exception(__this);
    }
  }
  if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
  }
  bVar2 = UI_CursorManager__get_UsesWOWCursor((MethodInfo *)0x0);
  if (bVar2) {
    if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
    }
    bVar2 = UnityEngine_Application__get_isFocused((MethodInfo *)0x0);
    if (bVar2) {
      if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      }
      if (TypeInfo_CustomLogic_CustomLogicManager->static_fields->CameraLocked == false) {
        if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
        }
        if (TypeInfo_CustomLogic_CustomLogicManager->static_fields->Cutscene == false) {
          if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
          }
          bVar2 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->ManualCamera == false;
          goto label_182208dbd;
        }
      }
    }
  }
  bVar2 = false;
label_182208dbd:
  if (bVar2 == false) {
    if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
    }
    UI_CursorManager__ResetWOWCursor((MethodInfo *)0x0);
  }
  else {
    if (__this == (Cameras_InGameCamera_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar3 = Cameras_InGameCamera__get_UsesMouseLook(__this,(MethodInfo *)0x0);
    if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
    }
    UI_CursorManager__UpdateWOWCursorPosition(bVar3,(MethodInfo *)0x0);
  }
  if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
  }
  bVar3 = UI_CursorManager__get_UsesCenteredCursor((MethodInfo *)0x0);
  value = (byte)((bVar3 | bVar2) ^ 1) + 1;
  iVar4 = UnityEngine_Cursor__get_lockState((MethodInfo *)0x0);
  if (iVar4 != value) {
    UnityEngine_Cursor__set_lockState(value,(MethodInfo *)0x0);
  }
  return;
}


// UI.CursorManager$$ResetWOWCursor
// il2cpp: void UI_CursorManager__ResetWOWCursor (const MethodInfo* method);
// 0x182207750

void UI_CursorManager__ResetWOWCursor(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843470a8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CursorManager);
    Il2CppMethodInitialized_1843470a8 = '\x01';
  }
  if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
  }
  TypeInfo_UI_CursorManager->static_fields->_wowCursorFrame = -1;
  TypeInfo_UI_CursorManager->static_fields->_wowVirtualCursorActive = false;
  return;
}


// UI.CursorManager$$UpdateWOWCursorPosition
// il2cpp: void UI_CursorManager__UpdateWOWCursorPosition (bool rotating, const MethodInfo* method);
// 0x1822093d0

void UI_CursorManager__UpdateWOWCursorPosition(bool rotating,MethodInfo *method)

{
  int iVar1;
  UI_CursorManager_StaticFields *pUVar2;
  float fVar3;
  int32_t iVar4;
  UnityEngine_Vector3_o *pUVar5;
  float fVar6;
  float fVar7;
  UnityEngine_Vector3_o local_38 [4];
  
  if (Il2CppMethodInitialized_1843470a9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CursorManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Mouse Y");
    il2cpp_codegen_initialize_runtime_metadata(&"Mouse X");
    Il2CppMethodInitialized_1843470a9 = '\x01';
  }
  if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
  }
  if (TypeInfo_UI_CursorManager->static_fields->_wowVirtualCursorActive == false) {
    pUVar5 = UnityEngine_Input__get_mousePosition(local_38,(MethodInfo *)0x0);
    fVar6 = (pUVar5->fields).x;
    fVar3 = (pUVar5->fields).y;
    fVar7 = (pUVar5->fields).z;
    if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
    }
    pUVar2 = TypeInfo_UI_CursorManager->static_fields;
    (pUVar2->_wowCursorPosition).fields.x = fVar6;
    (pUVar2->_wowCursorPosition).fields.y = fVar3;
    (pUVar2->_wowCursorPosition).fields.z = fVar7;
    TypeInfo_UI_CursorManager->static_fields->_wowVirtualCursorActive = true;
    iVar4 = UnityEngine_Time__get_frameCount((MethodInfo *)0x0);
    TypeInfo_UI_CursorManager->static_fields->_wowCursorFrame = iVar4;
  }
  if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
  }
  iVar1 = TypeInfo_UI_CursorManager->static_fields->_wowCursorFrame;
  iVar4 = UnityEngine_Time__get_frameCount((MethodInfo *)0x0);
  if (iVar1 != iVar4) {
    iVar4 = UnityEngine_Time__get_frameCount((MethodInfo *)0x0);
    if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
    }
    TypeInfo_UI_CursorManager->static_fields->_wowCursorFrame = iVar4;
    if (!rotating) {
      if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
      }
      pUVar2 = TypeInfo_UI_CursorManager->static_fields;
      fVar7 = (pUVar2->_wowCursorPosition).fields.x;
      fVar6 = UnityEngine_Input__GetAxisRaw("Mouse X",(MethodInfo *)0x0);
      (pUVar2->_wowCursorPosition).fields.x = fVar6 / 0.05 + fVar7;
      pUVar2 = TypeInfo_UI_CursorManager->static_fields;
      fVar7 = (pUVar2->_wowCursorPosition).fields.y;
      fVar6 = UnityEngine_Input__GetAxisRaw("Mouse Y",(MethodInfo *)0x0);
      (pUVar2->_wowCursorPosition).fields.y = fVar6 / 0.05 + fVar7;
    }
  }
  if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
  }
  fVar7 = (TypeInfo_UI_CursorManager->static_fields->_wowCursorPosition).fields.x;
  iVar4 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
  if (fVar7 < 0.0) {
    fVar6 = 0.0;
  }
  else {
    fVar6 = (float)iVar4;
    if (fVar7 <= (float)iVar4) {
      fVar6 = fVar7;
    }
  }
  (TypeInfo_UI_CursorManager->static_fields->_wowCursorPosition).fields.x = fVar6;
  fVar7 = (TypeInfo_UI_CursorManager->static_fields->_wowCursorPosition).fields.y;
  iVar4 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
  if (fVar7 < 0.0) {
    fVar7 = 0.0;
  }
  else if ((float)iVar4 < fVar7) {
    (TypeInfo_UI_CursorManager->static_fields->_wowCursorPosition).fields.y = (float)iVar4;
    return;
  }
  (TypeInfo_UI_CursorManager->static_fields->_wowCursorPosition).fields.y = fVar7;
  return;
}


// UI.CursorManager$$get_UsesWOWCursor
// il2cpp: bool UI_CursorManager__get_UsesWOWCursor (const MethodInfo* method);
// 0x182209820

bool UI_CursorManager__get_UsesWOWCursor(MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  Cameras_BaseCamera_o *pCVar3;
  Settings_GeneralSettings_o *pSVar4;
  Settings_BoolSetting_o *pSVar5;
  
  if (Il2CppMethodInitialized_1843470aa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_InGameCamera);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_1843470aa = '\x01';
  }
  pCVar3 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
  if (pCVar3 != (Cameras_BaseCamera_o *)0x0) {
    bVar1 = (TypeInfo_Cameras_InGameCamera->_2).typeHierarchyDepth;
    if (((pCVar3->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pCVar3->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_Cameras_InGameCamera)) {
      il2cpp_codegen_raise_invalid_cast_exception(pCVar3);
    }
    iVar2 = *(int *)&(*(uint64_t *)((char *)pCVar3 + 0x68));
    if (iVar2 == 3) {
      return true;
    }
    if (iVar2 != 1) {
      return false;
    }
    pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->GeneralSettings;
    if ((pSVar4 != (Settings_GeneralSettings_o *)0x0) &&
       (pSVar5 = (pSVar4->fields).OriginalCameraWOWRotation, pSVar5 != (Settings_BoolSetting_o *)0x0)) {
      return (pSVar5->fields)._value;
    }
  }
  ThrowNullReferenceException();
}


// UI.CursorManager$$get_UsesCenteredCursor
// il2cpp: bool UI_CursorManager__get_UsesCenteredCursor (const MethodInfo* method);
// 0x182209780

bool UI_CursorManager__get_UsesCenteredCursor(MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  Cameras_BaseCamera_o *pCVar3;
  
  if (Il2CppMethodInitialized_1843470ab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_InGameCamera);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_1843470ab = '\x01';
  }
  pCVar3 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
  if (pCVar3 != (Cameras_BaseCamera_o *)0x0) {
    bVar1 = (TypeInfo_Cameras_InGameCamera->_2).typeHierarchyDepth;
    if ((bVar1 <= (pCVar3->klass->_2).typeHierarchyDepth) &&
       ((pCVar3->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_Cameras_InGameCamera)) {
      iVar2 = *(int *)&(*(uint64_t *)((char *)pCVar3 + 0x68));
      if (iVar2 == 0) {
        return true;
      }
      return iVar2 == 2;
    }
    il2cpp_codegen_raise_invalid_cast_exception(pCVar3);
  }
  ThrowNullReferenceException();
}


// UI.CursorManager$$Init
// il2cpp: void UI_CursorManager__Init (const MethodInfo* method);
// 0x182207150
// eh: try 0x1822072f0..0x1822075ad -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 17 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182207527: lea rcx, [rsp + 0x30]
// asm:   0x18220752c: call 0x1818789e0  ; il2cpp_runtime_helper_1818789e0()
// asm:   0x182207531: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x182207536: test rcx, rcx
// asm:   0x182207539: jne 0x1822075ad
// asm:   0x1822075ad: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

void UI_CursorManager__Init(MethodInfo *method)

{
  ushort uVar1;
  int32_t key;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  System_String_o *path;
  System_Collections_Generic_Dictionary_CrosshairStyle__Texture2D__o *__this;
  Il2CppType *handle;
  bool bVar4;
  UI_CursorManager_o *pUVar5;
  System_Type_o *enumType;
  System_Array_o *__this_00;
  VirtualInvokeData *pVVar6;
  Il2CppObject *pIVar7;
  int32_t *piVar8;
  System_String_o *pSVar9;
  UnityEngine_Object_o *pUVar10;
  ushort uVar11;
  UnityEngine_Object_o *value;
  Il2CppObject *local_res10;
  undefined8 local_res18;
  Il2CppObject **local_38;
  undefined8 *local_30;
  System_Enum_o local_28;
  int32_t local_18;
  
  if (Il2CppMethodInitialized_1843470ac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UI_CrosshairStyle);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CrosshairStyle);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CursorManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_CrosshairStyle_Texture2D_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Utility_SingletonFactory_CreateSingleton_CursorManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Texture2D);
    il2cpp_codegen_initialize_runtime_metadata(&"Cursors/Cursor");
    Il2CppMethodInitialized_1843470ac = '\x01';
  }
  local_res10 = (Il2CppObject *)0x0;
  local_res18 = 0;
  if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
  }
  pUVar5 = Utility_SingletonFactory__CreateSingleton_object_
                     ((Il2CppObject *)TypeInfo_UI_CursorManager->static_fields->_instance,
                      (MethodInfo_798ED0 *)MethodInfo_Utility_SingletonFactory_CreateSingleton_CursorManager);
  TypeInfo_UI_CursorManager->static_fields->_instance = pUVar5;
  Il2CppCodeGenWriteBarrier(&TypeInfo_UI_CursorManager->static_fields->_instance,pUVar5);
  handle = TypeRef_UI_CrosshairStyle;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  enumType = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if ((g_data_184354e58->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354e58);
  }
  __this_00 = System_Enum__GetValues(enumType,(MethodInfo *)0x0);
  if (__this_00 == (System_Array_o *)0x0) {
label_182207581:
    ThrowNullReferenceException();
  }
  local_res10 = (Il2CppObject *)System_Array__GetEnumerator(__this_00,(MethodInfo *)0x0);
  local_38 = &local_res10;
  local_30 = &local_res18;
  do {
    pIVar7 = local_res10;
    if (local_res10 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar2 = local_res10->klass;
    uVar1 = (pIVar2->_2).interface_offsets_count;
    if (uVar1 != 0) {
      uVar11 = 0;
      pIVar3 = (pIVar2->_1).interfaceOffsets;
      do {
        if (pIVar3[uVar11].interfaceType == (Il2CppClass *)TypeInfo_System_Collections_IEnumerator) {
          pVVar6 = pIVar2->vtable + pIVar3[uVar11].offset;
          goto label_182207346;
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < uVar1);
    }
    pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                       (local_res10,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_182207346:
    bVar4 = (*pVVar6->methodPtr)(pIVar7,pVVar6->method);
    pIVar7 = local_res10;
    if (!bVar4) {
      il2cpp_runtime_helper_1818789e0(&local_38);
      if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
      }
      pUVar5 = TypeInfo_UI_CursorManager->static_fields->_instance;
      if (pUVar5 != (UI_CursorManager_o *)0x0) {
        (pUVar5->fields)._ready = true;
        return;
      }
      goto label_182207581;
    }
    if (local_res10 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar2 = local_res10->klass;
    uVar1 = (pIVar2->_2).interface_offsets_count;
    if (uVar1 != 0) {
      uVar11 = 0;
      pIVar3 = (pIVar2->_1).interfaceOffsets;
      do {
        if (pIVar3[uVar11].interfaceType == (Il2CppClass *)TypeInfo_System_Collections_IEnumerator) {
          pVVar6 = pIVar2->vtable + (pIVar3[uVar11].offset + 1);
          goto label_1822073b9;
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < uVar1);
    }
    pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                       (local_res10,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,1);
label_1822073b9:
    pIVar7 = (*pVVar6->methodPtr)(pIVar7,pVVar6->method);
    if (pIVar7 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    if ((pIVar7->klass->_1).element_class != (TypeInfo_UI_CrosshairStyle->_1).element_class) {
      il2cpp_codegen_raise_invalid_cast_exception(pIVar7,TypeInfo_UI_CrosshairStyle);
    }
    piVar8 = il2cpp_object_unbox(pIVar7);
    key = *piVar8;
    if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
    }
    path = TypeInfo_Utility_ResourcePaths->static_fields->UI;
    local_28.klass = (System_Enum_c *)TypeInfo_UI_CrosshairStyle;
    local_28.monitor = &g_data_ffffffffffffffff;
    local_18 = key;
    pSVar9 = System_Enum__ToString(&local_28,(MethodInfo *)0x0);
    pSVar9 = System_String__Concat_1969e50("Cursors/Cursor",pSVar9,(MethodInfo *)0x0);
    if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
    }
    pUVar10 = ApplicationManagers_ResourceManager__LoadAsset(path,pSVar9,false,(MethodInfo *)0x0);
    value = (UnityEngine_Object_o *)0x0;
    if (pUVar10 != (UnityEngine_Object_o *)0x0) {
      if ((UnityEngine_Texture2D_c *)pUVar10->klass == TypeInfo_UnityEngine_Texture2D) {
        value = pUVar10;
      }
      if (value == (UnityEngine_Object_o *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(pUVar10);
      }
    }
    if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
    }
    __this = TypeInfo_UI_CursorManager->static_fields->_crosshairs;
    if (__this == (System_Collections_Generic_Dictionary_CrosshairStyle__Texture2D__o *)0x0) {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_Dictionary_Int32Enum__object___Add
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,key,(Il2CppObject *)value,
               (MethodInfo_1443C70 *)
               MethodInfo_System_Collections_Generic_Dictionary_CrosshairStyle_Texture2D_Add);
  } while( true );
}


// UI.CursorManager$$Update
// il2cpp: void UI_CursorManager__Update (UI_CursorManager_o* __this, const MethodInfo* method);
// 0x182209660

void UI_CursorManager__Update(UI_CursorManager_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843470ad == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CursorManager);
    Il2CppMethodInitialized_1843470ad = '\x01';
  }
  if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
  }
  UI_CursorManager__UpdateCursorState((MethodInfo *)0x0);
  return;
}


// UI.CursorManager$$UpdateCursorState
// il2cpp: void UI_CursorManager__UpdateCursorState (const MethodInfo* method);
// 0x1822085c0

void UI_CursorManager__UpdateCursorState(MethodInfo *method)

{
  byte bVar1;
  ApplicationManagers_SceneLoader_StaticFields *pAVar2;
  UI_BaseMenu_o *pUVar3;
  UI_BaseMenu_c *pUVar4;
  GameManagers_BaseGameManager_o *pGVar5;
  UI_ChatPanel_o *pUVar6;
  GameManagers_BaseGameManager_c *x;
  void *pvVar7;
  UI_ConfirmPopup_o *x_00;
  bool bVar8;
  Controllers_BasePlayerController_o *x_01;
  
  if (Il2CppMethodInitialized_1843470ae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BasicTitan);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_BasePlayerController);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CursorManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_1843470ae = '\x01';
  }
  if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
  }
  bVar8 = UnityEngine_Application__get_isFocused((MethodInfo *)0x0);
  if (!bVar8) {
    if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
    }
    UI_CursorManager__SetPointer(true,(MethodInfo *)0x0);
    return;
  }
  pAVar2 = TypeInfo_ApplicationManagers_SceneLoader->static_fields;
  if (((((pAVar2->SceneName != 0) && (pAVar2->SceneName != 1)) && (pAVar2->SceneName != 4)) &&
      ((pAVar2->SceneName != 5 && (pAVar2->SceneName != 6)))) && (pAVar2->SceneName != 7)) {
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pUVar3 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar8 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar8) {
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pUVar3 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
      if (pUVar3 != (UI_BaseMenu_o *)0x0) {
        pUVar4 = pUVar3->klass;
        bVar1 = (TypeInfo_UI_InGameMenu->_2).typeHierarchyDepth;
        if ((bVar1 <= (pUVar4->_2).typeHierarchyDepth) &&
           ((pUVar4->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_UI_InGameMenu)) {
          pGVar5 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
          if (pGVar5 != (GameManagers_BaseGameManager_o *)0x0) {
            bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
            if (((pGVar5->klass->_2).typeHierarchyDepth < bVar1) ||
               ((pGVar5->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
                (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
              il2cpp_codegen_raise_invalid_cast_exception(pGVar5,TypeInfo_GameManagers_InGameManager);
            }
          }
          if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
          }
          pUVar3 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
          if (pUVar3 == (UI_BaseMenu_o *)0x0) goto label_182208c4b;
          bVar1 = (TypeInfo_UI_InGameMenu->_2).typeHierarchyDepth;
          if (((pUVar3->klass->_2).typeHierarchyDepth < bVar1) ||
             ((pUVar3->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UI_InGameMenu
             )) {
            il2cpp_codegen_raise_invalid_cast_exception(pUVar3,TypeInfo_UI_InGameMenu);
          }
          pUVar6 = (UI_ChatPanel_o *)(*(uint64_t *)((char *)pUVar3 + 0xd0));
          bVar8 = UI_InGameMenu__InMenu((MethodInfo *)0x0);
          if (bVar8) goto label_182208bf1;
          if (pGVar5 == (GameManagers_BaseGameManager_o *)0x0) goto label_182208c4b;
          bVar8 = (*(pGVar5->klass->vtable)._56_IsFinishedLoading.methodPtr)
                            (pGVar5,(pGVar5->klass->vtable)._56_IsFinishedLoading.method);
          if (((!bVar8) || (*(char *)((longlong)&(*(uint64_t *)((char *)pGVar5 + 0x80)) + 2) != '\0')) ||
             (*(char *)((longlong)&(*(uint64_t *)((char *)pGVar5 + 0x80)) + 3) != '\0')) goto label_182208bf1;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar8 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar8) {
            if (pUVar6 == (UI_ChatPanel_o *)0x0) goto label_182208c4b;
            bVar8 = UI_ChatPanel__IsInputActive(pUVar6,(MethodInfo *)0x0);
            if (bVar8) goto label_182208bf1;
            bVar8 = UI_ChatPanel__IsPointerOverChatUI(pUVar6,(MethodInfo *)0x0);
            if (bVar8) goto label_182208bf1;
          }
          if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
          }
          if (TypeInfo_CustomLogic_CustomLogicManager->static_fields->CursorVisible == false) {
            x = (*(uint64_t *)((char *)pGVar5 + 0x78));
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar8 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if ((bVar8) && ((*(uint64_t *)((char *)pGVar5 + 0x78)) != (GameManagers_BaseGameManager_c *)0x0)) {
              pvVar7 = (((*(Il2CppClass **)((char *)pGVar5 + 0x78)))->_1).image;
              bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
              if ((*(byte *)((longlong)pvVar7 + 0x130) < bVar1) ||
                 (*(Characters_Human_c **)(*(longlong *)((longlong)pvVar7 + 200) + -8 + (ulonglong)bVar1 * 8)
                  != TypeInfo_Characters_Human)) {
                pvVar7 = (((*(Il2CppClass **)((char *)pGVar5 + 0x78)))->_1).image;
                bVar1 = (TypeInfo_Characters_BasicTitan->_2).typeHierarchyDepth;
                if ((*(byte *)((longlong)pvVar7 + 0x130) < bVar1) ||
                   (*(Characters_BasicTitan_c **)
                     (*(longlong *)((longlong)pvVar7 + 200) + -8 + (ulonglong)bVar1 * 8) !=
                    TypeInfo_Characters_BasicTitan)) goto label_182208bc5;
              }
              if (*(char *)&(((*(Il2CppClass **)((char *)pGVar5 + 0x78)))->_1).interopData == '\0') {
                if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
                }
                if (TypeInfo_CustomLogic_CustomLogicManager->static_fields->Cutscene == false) {
                  if ((*(uint64_t *)((char *)pGVar5 + 0x78)) == (GameManagers_BaseGameManager_c *)0x0) {
label_182208c4b:
                    ThrowNullReferenceException();
                  }
                  x_01 = UnityEngine_Component__GetComponent_object_
                                   ((UnityEngine_Component_o *)(*(uint64_t *)((char *)pGVar5 + 0x78)),
                                    (MethodInfo_6651A0 *)
                                    MethodInfo_UnityEngine_Component_GetComponent_BasePlayerController);
                  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                  }
                  bVar8 = UnityEngine_Object__op_Inequality
                                    ((UnityEngine_Object_o *)x_01,(UnityEngine_Object_o *)0x0,
                                     (MethodInfo *)0x0);
                  if (bVar8) {
                    if (x_01 == (Controllers_BasePlayerController_o *)0x0) goto label_182208c4b;
                    if ((x_01->fields).HideCursor == false) {
                      if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
                      }
                      if (Il2CppMethodInitialized_1843470b3 == '\0') {
                        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CursorManager);
                        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
                        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
                        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
                        Il2CppMethodInitialized_1843470b3 = '\x01';
                      }
                      if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
                      }
                      if (TypeInfo_UI_CursorManager->static_fields->State != 1) {
                        UnityEngine_Cursor__set_visible(false,(MethodInfo *)0x0);
                        if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
                          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
                        }
                        TypeInfo_UI_CursorManager->static_fields->State = 1;
                        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
                        }
                        pUVar3 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
                        if (pUVar3 != (UI_BaseMenu_o *)0x0) {
                          bVar1 = (TypeInfo_UI_InGameMenu->_2).typeHierarchyDepth;
                          if ((bVar1 <= (pUVar3->klass->_2).typeHierarchyDepth) &&
                             ((pUVar3->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
                              (Il2CppClass *)TypeInfo_UI_InGameMenu)) {
                            x_00 = (*(uint64_t *)((char *)pUVar3 + 0xd0));
                            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                            }
                            bVar8 = UnityEngine_Object__op_Inequality
                                              ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,
                                               (MethodInfo *)0x0);
                            if (bVar8) {
                              pUVar6 = (UI_ChatPanel_o *)(*(uint64_t *)((char *)pUVar3 + 0xd0));
                              if (pUVar6 == (UI_ChatPanel_o *)0x0) goto label_182208c4b;
                              UI_ChatPanel__CloseEmojiPanel(pUVar6,(MethodInfo *)0x0);
                            }
                          }
                        }
                      }
                      if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
                      }
                      UI_CursorManager__UpdateGameplayCursorLock((MethodInfo *)0x0);
                      return;
                    }
                  }
                }
              }
            }
label_182208bc5:
            if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
            }
            UI_CursorManager__SetHidden(false,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
label_182208bf1:
  if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
  }
  UI_CursorManager__SetPointer(false,(MethodInfo *)0x0);
  return;
}


// UI.CursorManager$$RefreshCursorLock
// il2cpp: void UI_CursorManager__RefreshCursorLock (const MethodInfo* method);
// 0x182207620

void UI_CursorManager__RefreshCursorLock(MethodInfo *method)

{
  UI_CursorManager_o *pUVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_1843470af == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CursorManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843470af = '\x01';
  }
  if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
  }
  if (Il2CppMethodInitialized_1843470a8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CursorManager);
    Il2CppMethodInitialized_1843470a8 = '\x01';
  }
  if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
  }
  TypeInfo_UI_CursorManager->static_fields->_wowCursorFrame = -1;
  TypeInfo_UI_CursorManager->static_fields->_wowVirtualCursorActive = false;
  pUVar1 = TypeInfo_UI_CursorManager->static_fields->_instance;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
    }
    pUVar1 = TypeInfo_UI_CursorManager->static_fields->_instance;
    if (pUVar1 == (UI_CursorManager_o *)0x0) {
      ThrowNullReferenceException();
    }
    if ((pUVar1->fields)._ready != false) {
      if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
      }
      UI_CursorManager__UpdateCursorState((MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// UI.CursorManager$$OnApplicationFocus
// il2cpp: void UI_CursorManager__OnApplicationFocus (UI_CursorManager_o* __this, bool focused, const MethodInfo* method);
// 0x1822075c0

void UI_CursorManager__OnApplicationFocus(UI_CursorManager_o *__this,bool focused,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843470b0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CursorManager);
    Il2CppMethodInitialized_1843470b0 = '\x01';
  }
  if (!focused) {
    if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
    }
    UI_CursorManager__SetPointer(true,(MethodInfo *)0x0);
    return;
  }
  return;
}


// UI.CursorManager$$SetPointer
// il2cpp: void UI_CursorManager__SetPointer (bool force, const MethodInfo* method);
// 0x182207d10

void UI_CursorManager__SetPointer(bool force,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843470b1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CursorManager);
    Il2CppMethodInitialized_1843470b1 = '\x01';
  }
  if (!force) {
    if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
    }
    if (TypeInfo_UI_CursorManager->static_fields->State == 0) goto label_182207d9f;
  }
  UnityEngine_Cursor__set_visible(true,(MethodInfo *)0x0);
  UnityEngine_Cursor__set_lockState(0,(MethodInfo *)0x0);
  if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
  }
  TypeInfo_UI_CursorManager->static_fields->State = 0;
label_182207d9f:
  if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
  }
  if (Il2CppMethodInitialized_1843470a8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CursorManager);
    Il2CppMethodInitialized_1843470a8 = '\x01';
  }
  if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
  }
  TypeInfo_UI_CursorManager->static_fields->_wowCursorFrame = -1;
  TypeInfo_UI_CursorManager->static_fields->_wowVirtualCursorActive = false;
  return;
}


// UI.CursorManager$$SetHidden
// il2cpp: void UI_CursorManager__SetHidden (bool force, const MethodInfo* method);
// 0x182207a40

void UI_CursorManager__SetHidden(bool force,MethodInfo *method)

{
  byte bVar1;
  UI_BaseMenu_o *pUVar2;
  UI_ConfirmPopup_o *x;
  UI_ChatPanel_o *__this;
  bool bVar3;
  
  if (Il2CppMethodInitialized_1843470b2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CursorManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_1843470b2 = '\x01';
  }
  if (!force) {
    if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
    }
    if (TypeInfo_UI_CursorManager->static_fields->State == 2) goto label_182207b92;
  }
  UnityEngine_Cursor__set_visible(false,(MethodInfo *)0x0);
  if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
  }
  TypeInfo_UI_CursorManager->static_fields->State = 2;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pUVar2 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  if (pUVar2 != (UI_BaseMenu_o *)0x0) {
    bVar1 = (TypeInfo_UI_InGameMenu->_2).typeHierarchyDepth;
    if ((bVar1 <= (pUVar2->klass->_2).typeHierarchyDepth) &&
       ((pUVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_UI_InGameMenu)) {
      x = (*(uint64_t *)((char *)pUVar2 + 0xd0));
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar3) {
        __this = (UI_ChatPanel_o *)(*(uint64_t *)((char *)pUVar2 + 0xd0));
        if (__this == (UI_ChatPanel_o *)0x0) {
          ThrowNullReferenceException();
        }
        UI_ChatPanel__CloseEmojiPanel(__this,(MethodInfo *)0x0);
      }
    }
  }
label_182207b92:
  if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
  }
  UI_CursorManager__UpdateGameplayCursorLock((MethodInfo *)0x0);
  return;
}


// UI.CursorManager$$SetCrosshair
// il2cpp: void UI_CursorManager__SetCrosshair (bool force, const MethodInfo* method);
// 0x1822078c0

void UI_CursorManager__SetCrosshair(bool force,MethodInfo *method)

{
  byte bVar1;
  UI_BaseMenu_o *pUVar2;
  UI_ConfirmPopup_o *x;
  UI_ChatPanel_o *__this;
  bool bVar3;
  
  if (Il2CppMethodInitialized_1843470b3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CursorManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_1843470b3 = '\x01';
  }
  if (!force) {
    if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
    }
    if (TypeInfo_UI_CursorManager->static_fields->State == 1) goto label_182207a12;
  }
  UnityEngine_Cursor__set_visible(false,(MethodInfo *)0x0);
  if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
  }
  TypeInfo_UI_CursorManager->static_fields->State = 1;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pUVar2 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  if (pUVar2 != (UI_BaseMenu_o *)0x0) {
    bVar1 = (TypeInfo_UI_InGameMenu->_2).typeHierarchyDepth;
    if ((bVar1 <= (pUVar2->klass->_2).typeHierarchyDepth) &&
       ((pUVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_UI_InGameMenu)) {
      x = (*(uint64_t *)((char *)pUVar2 + 0xd0));
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar3) {
        __this = (UI_ChatPanel_o *)(*(uint64_t *)((char *)pUVar2 + 0xd0));
        if (__this == (UI_ChatPanel_o *)0x0) {
          ThrowNullReferenceException();
        }
        UI_ChatPanel__CloseEmojiPanel(__this,(MethodInfo *)0x0);
      }
    }
  }
label_182207a12:
  if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
  }
  UI_CursorManager__UpdateGameplayCursorLock((MethodInfo *)0x0);
  return;
}


// UI.CursorManager$$SetCrosshairColor
// il2cpp: void UI_CursorManager__SetCrosshairColor (bool white, const MethodInfo* method);
// 0x1822077c0

void UI_CursorManager__SetCrosshairColor(bool white,MethodInfo *method)

{
  UI_CursorManager_o *pUVar1;
  
  if (Il2CppMethodInitialized_1843470b4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CursorManager);
    Il2CppMethodInitialized_1843470b4 = '\x01';
  }
  if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
  }
  pUVar1 = TypeInfo_UI_CursorManager->static_fields->_instance;
  if (pUVar1 != (UI_CursorManager_o *)0x0) {
    if ((pUVar1->fields)._crosshairWhite != white) {
      if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
      }
      pUVar1 = TypeInfo_UI_CursorManager->static_fields->_instance;
      if (pUVar1 == (UI_CursorManager_o *)0x0) goto label_182207844;
      (pUVar1->fields)._crosshairWhite = white;
    }
    return;
  }
label_182207844:
  ThrowNullReferenceException();
}


// UI.CursorManager$$SetCrosshairText
// il2cpp: void UI_CursorManager__SetCrosshairText (System_String_o* text, const MethodInfo* method);
// 0x182207850

void UI_CursorManager__SetCrosshairText(System_String_o *text,MethodInfo *method)

{
  UI_CursorManager_o *pUVar1;
  
  if (Il2CppMethodInitialized_1843470b5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CursorManager);
    Il2CppMethodInitialized_1843470b5 = '\x01';
  }
  if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
  }
  pUVar1 = TypeInfo_UI_CursorManager->static_fields->_instance;
  if (pUVar1 != (UI_CursorManager_o *)0x0) {
    (pUVar1->fields)._crosshairText = text;
    Il2CppCodeGenWriteBarrier(&(pUVar1->fields)._crosshairText,text);
    return;
  }
  ThrowNullReferenceException();
}


// UI.CursorManager$$SetHookArrow
// il2cpp: void UI_CursorManager__SetHookArrow (bool left, UnityEngine_Vector3_o position, UnityEngine_Quaternion_o rotation, bool white, const MethodInfo* method);
// 0x182207bc0

void UI_CursorManager__SetHookArrow
               (bool left,UnityEngine_Vector3_o *position,UnityEngine_Quaternion_o *rotation,bool white,
               MethodInfo *method)

{
  float fVar1;
  UI_CursorManager_o *pUVar2;
  float fVar3;
  float fVar4;
  
  if (Il2CppMethodInitialized_1843470b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CursorManager);
    Il2CppMethodInitialized_1843470b6 = '\x01';
  }
  if (left) {
    if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
    }
    pUVar2 = TypeInfo_UI_CursorManager->static_fields->_instance;
    if (pUVar2 != (UI_CursorManager_o *)0x0) {
      fVar1 = (position->fields).z;
      fVar3 = (position->fields).y;
      (pUVar2->fields)._arrowLeftPosition.fields.x = (position->fields).x;
      (pUVar2->fields)._arrowLeftPosition.fields.y = fVar3;
      (pUVar2->fields)._arrowLeftPosition.fields.z = fVar1;
      pUVar2 = TypeInfo_UI_CursorManager->static_fields->_instance;
      if (pUVar2 != (UI_CursorManager_o *)0x0) {
        (pUVar2->fields)._arrowLeftWhite = white;
        pUVar2 = TypeInfo_UI_CursorManager->static_fields->_instance;
        if (pUVar2 != (UI_CursorManager_o *)0x0) {
          fVar1 = (rotation->fields).y;
          fVar3 = (rotation->fields).z;
          fVar4 = (rotation->fields).w;
          (pUVar2->fields)._arrowLeftRotation.fields.x = (rotation->fields).x;
          (pUVar2->fields)._arrowLeftRotation.fields.y = fVar1;
          (pUVar2->fields)._arrowLeftRotation.fields.z = fVar3;
          (pUVar2->fields)._arrowLeftRotation.fields.w = fVar4;
          return;
        }
      }
    }
  }
  else {
    if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
    }
    pUVar2 = TypeInfo_UI_CursorManager->static_fields->_instance;
    if (pUVar2 != (UI_CursorManager_o *)0x0) {
      fVar1 = (position->fields).z;
      fVar3 = (position->fields).y;
      (pUVar2->fields)._arrowRightPosition.fields.x = (position->fields).x;
      (pUVar2->fields)._arrowRightPosition.fields.y = fVar3;
      (pUVar2->fields)._arrowRightPosition.fields.z = fVar1;
      pUVar2 = TypeInfo_UI_CursorManager->static_fields->_instance;
      if (pUVar2 != (UI_CursorManager_o *)0x0) {
        (pUVar2->fields)._arrowRightWhite = white;
        pUVar2 = TypeInfo_UI_CursorManager->static_fields->_instance;
        if (pUVar2 != (UI_CursorManager_o *)0x0) {
          fVar1 = (rotation->fields).y;
          fVar3 = (rotation->fields).z;
          fVar4 = (rotation->fields).w;
          (pUVar2->fields)._arrowRightRotation.fields.x = (rotation->fields).x;
          (pUVar2->fields)._arrowRightRotation.fields.y = fVar1;
          (pUVar2->fields)._arrowRightRotation.fields.z = fVar3;
          (pUVar2->fields)._arrowRightRotation.fields.w = fVar4;
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.CursorManager$$UpdateHookArrows
// il2cpp: void UI_CursorManager__UpdateHookArrows (UnityEngine_UI_Image_o* hookArrowLeft, UnityEngine_UI_Image_o* hookArrowRight, const MethodInfo* method);
// 0x182208e70

void UI_CursorManager__UpdateHookArrows
               (UnityEngine_UI_Image_o *hookArrowLeft,UnityEngine_UI_Image_o *hookArrowRight,
               MethodInfo *method)

{
  byte bVar1;
  UI_CursorManager_o *pUVar2;
  GameManagers_BaseGameManager_o *pGVar3;
  Settings_UISettings_o *pSVar4;
  Settings_BoolSetting_o *pSVar5;
  GameManagers_BaseGameManager_c *x;
  void *pvVar6;
  bool bVar7;
  UnityEngine_GameObject_o *pUVar8;
  UnityEngine_Transform_o *pUVar9;
  float fVar10;
  float fVar11;
  UnityEngine_Quaternion_Fields local_38 [3];
  
  if (Il2CppMethodInitialized_1843470b7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CursorManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_1843470b7 = '\x01';
  }
  if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
  }
  pUVar2 = TypeInfo_UI_CursorManager->static_fields->_instance;
  if (pUVar2 != (UI_CursorManager_o *)0x0) {
    if ((pUVar2->fields)._ready == false) {
      return;
    }
    if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
    }
    if (TypeInfo_UI_CursorManager->static_fields->State == 1) {
      pGVar3 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
      if (pGVar3 != (GameManagers_BaseGameManager_o *)0x0) {
        bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
        if (((pGVar3->klass->_2).typeHierarchyDepth < bVar1) ||
           ((pGVar3->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
          il2cpp_codegen_raise_invalid_cast_exception(pGVar3);
        }
      }
      pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
      if ((pSVar4 == (Settings_UISettings_o *)0x0) ||
         (pSVar5 = (pSVar4->fields).ShowCrosshairArrows, pSVar5 == (Settings_BoolSetting_o *)0x0))
      goto label_1822093b2;
      if ((pSVar5->fields)._value != false) {
        if (pGVar3 == (GameManagers_BaseGameManager_o *)0x0) goto label_1822093b2;
        x = (*(uint64_t *)((char *)pGVar3 + 0x78));
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar7 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((bVar7) && ((*(uint64_t *)((char *)pGVar3 + 0x78)) != (GameManagers_BaseGameManager_c *)0x0)) {
          pvVar6 = (((*(Il2CppClass **)((char *)pGVar3 + 0x78)))->_1).image;
          bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
          if ((bVar1 <= *(byte *)((longlong)pvVar6 + 0x130)) &&
             (*(Characters_Human_c **)(*(longlong *)((longlong)pvVar6 + 200) + -8 + (ulonglong)bVar1 * 8) ==
              TypeInfo_Characters_Human)) {
            if ((hookArrowLeft != (UnityEngine_UI_Image_o *)0x0) &&
               (pUVar8 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)hookArrowLeft,(MethodInfo *)0x0),
               pUVar8 != (UnityEngine_GameObject_o *)0x0)) {
              bVar7 = UnityEngine_GameObject__get_activeSelf(pUVar8,(MethodInfo *)0x0);
              if (!bVar7) {
                pUVar8 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)hookArrowLeft,(MethodInfo *)0x0);
                if (pUVar8 == (UnityEngine_GameObject_o *)0x0) goto label_1822093b2;
                UnityEngine_GameObject__SetActive(pUVar8,true,(MethodInfo *)0x0);
              }
              if ((hookArrowRight != (UnityEngine_UI_Image_o *)0x0) &&
                 (pUVar8 = UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)hookArrowRight,(MethodInfo *)0x0),
                 pUVar8 != (UnityEngine_GameObject_o *)0x0)) {
                bVar7 = UnityEngine_GameObject__get_activeSelf(pUVar8,(MethodInfo *)0x0);
                if (!bVar7) {
                  pUVar8 = UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)hookArrowRight,(MethodInfo *)0x0);
                  if (pUVar8 == (UnityEngine_GameObject_o *)0x0) goto label_1822093b2;
                  UnityEngine_GameObject__SetActive(pUVar8,true,(MethodInfo *)0x0);
                }
                pUVar9 = UnityEngine_Component__get_transform
                                   ((UnityEngine_Component_o *)hookArrowLeft,(MethodInfo *)0x0);
                if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
                }
                pUVar2 = TypeInfo_UI_CursorManager->static_fields->_instance;
                if ((pUVar2 != (UI_CursorManager_o *)0x0) && (pUVar9 != (UnityEngine_Transform_o *)0x0)) {
                  local_38[0].x = (pUVar2->fields)._arrowLeftPosition.fields.x;
                  local_38[0].y = (pUVar2->fields)._arrowLeftPosition.fields.y;
                  local_38[0].z = (pUVar2->fields)._arrowLeftPosition.fields.z;
                  UnityEngine_Transform__set_position
                            (pUVar9,(UnityEngine_Vector3_o *)local_38,(MethodInfo *)0x0);
                  pUVar9 = UnityEngine_Component__get_transform
                                     ((UnityEngine_Component_o *)hookArrowRight,(MethodInfo *)0x0);
                  pUVar2 = TypeInfo_UI_CursorManager->static_fields->_instance;
                  if ((pUVar2 != (UI_CursorManager_o *)0x0) && (pUVar9 != (UnityEngine_Transform_o *)0x0)) {
                    local_38[0].x = (pUVar2->fields)._arrowRightPosition.fields.x;
                    local_38[0].y = (pUVar2->fields)._arrowRightPosition.fields.y;
                    local_38[0].z = (pUVar2->fields)._arrowRightPosition.fields.z;
                    UnityEngine_Transform__set_position
                              (pUVar9,(UnityEngine_Vector3_o *)local_38,(MethodInfo *)0x0);
                    pUVar9 = UnityEngine_Component__get_transform
                                       ((UnityEngine_Component_o *)hookArrowLeft,(MethodInfo *)0x0);
                    pUVar2 = TypeInfo_UI_CursorManager->static_fields->_instance;
                    if ((pUVar2 != (UI_CursorManager_o *)0x0) && (pUVar9 != (UnityEngine_Transform_o *)0x0)) {
                      local_38[0].x = (pUVar2->fields)._arrowLeftRotation.fields.x;
                      local_38[0].y = (pUVar2->fields)._arrowLeftRotation.fields.y;
                      local_38[0].z = (pUVar2->fields)._arrowLeftRotation.fields.z;
                      local_38[0].w = (pUVar2->fields)._arrowLeftRotation.fields.w;
                      UnityEngine_Transform__set_rotation
                                (pUVar9,(UnityEngine_Quaternion_o *)local_38,(MethodInfo *)0x0);
                      pUVar9 = UnityEngine_Component__get_transform
                                         ((UnityEngine_Component_o *)hookArrowRight,(MethodInfo *)0x0);
                      pUVar2 = TypeInfo_UI_CursorManager->static_fields->_instance;
                      if ((pUVar2 != (UI_CursorManager_o *)0x0) && (pUVar9 != (UnityEngine_Transform_o *)0x0))
                      {
                        local_38[0].x = (pUVar2->fields)._arrowRightRotation.fields.x;
                        local_38[0].y = (pUVar2->fields)._arrowRightRotation.fields.y;
                        local_38[0].z = (pUVar2->fields)._arrowRightRotation.fields.z;
                        local_38[0].w = (pUVar2->fields)._arrowRightRotation.fields.w;
                        UnityEngine_Transform__set_rotation
                                  (pUVar9,(UnityEngine_Quaternion_o *)local_38,(MethodInfo *)0x0);
                        pUVar2 = TypeInfo_UI_CursorManager->static_fields->_instance;
                        if (pUVar2 != (UI_CursorManager_o *)0x0) {
                          fVar11 = 0.0;
                          fVar10 = 1.0;
                          if ((pUVar2->fields)._arrowLeftWhite == false) {
                            local_38[0].y = 0.0;
                            local_38[0].z = 0.0;
                          }
                          else {
                            local_38[0].y = 1.0;
                            local_38[0].z = 1.0;
                          }
                          local_38[0].x = 1.0;
                          local_38[0].w = 1.0;
                          (*(hookArrowLeft->klass->vtable)._23_set_color.methodPtr)
                                    (hookArrowLeft,(UnityEngine_Color_o *)local_38,
                                     (hookArrowLeft->klass->vtable)._23_set_color.method);
                          if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
                            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
                          }
                          pUVar2 = TypeInfo_UI_CursorManager->static_fields->_instance;
                          if (pUVar2 != (UI_CursorManager_o *)0x0) {
                            if ((pUVar2->fields)._arrowRightWhite == false) {
                              fVar10 = 0.0;
                            }
                            else {
                              fVar11 = 1.0;
                            }
                            local_38[0].y = fVar10;
                            local_38[0].x = 1.0;
                            local_38[0].w = 1.0;
                            local_38[0].z = fVar11;
                            (*(hookArrowRight->klass->vtable)._23_set_color.methodPtr)
                                      (hookArrowRight,(UnityEngine_Color_o *)local_38,
                                       (hookArrowRight->klass->vtable)._23_set_color.method);
                            return;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            goto label_1822093b2;
          }
        }
      }
    }
    if ((hookArrowLeft != (UnityEngine_UI_Image_o *)0x0) &&
       (pUVar8 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)hookArrowLeft,(MethodInfo *)0x0),
       pUVar8 != (UnityEngine_GameObject_o *)0x0)) {
      bVar7 = UnityEngine_GameObject__get_activeSelf(pUVar8,(MethodInfo *)0x0);
      if (bVar7) {
        pUVar8 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)hookArrowLeft,(MethodInfo *)0x0);
        if (pUVar8 == (UnityEngine_GameObject_o *)0x0) goto label_1822093b2;
        UnityEngine_GameObject__SetActive(pUVar8,false,(MethodInfo *)0x0);
      }
      if ((hookArrowRight != (UnityEngine_UI_Image_o *)0x0) &&
         (pUVar8 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)hookArrowRight,(MethodInfo *)0x0),
         pUVar8 != (UnityEngine_GameObject_o *)0x0)) {
        bVar7 = UnityEngine_GameObject__get_activeSelf(pUVar8,(MethodInfo *)0x0);
        if (bVar7) {
          pUVar8 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)hookArrowRight,(MethodInfo *)0x0);
          if (pUVar8 == (UnityEngine_GameObject_o *)0x0) goto label_1822093b2;
          UnityEngine_GameObject__SetActive(pUVar8,false,(MethodInfo *)0x0);
        }
        return;
      }
    }
  }
label_1822093b2:
  ThrowNullReferenceException();
}


// UI.CursorManager$$UpdateCrosshair
// il2cpp: void UI_CursorManager__UpdateCrosshair (UnityEngine_UI_RawImage_o* crosshairImageWhite, UnityEngine_UI_RawImage_o* crosshairImageRed, UnityEngine_UI_Text_o* crosshairLabelWhite, UnityEngine_UI_Text_o* crosshairLabelRed, bool force, const MethodInfo* method);
// 0x182207e20
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822080b2: mov rdx, qword ptr [rip + 0x1ee19af]  ; TypeInfo_UI_CursorManager
// asm:   0x1822085a3: mov byte ptr [rcx + 0x30], 1
// asm:   0x1822085a7: jmp 0x1822084ba

void UI_CursorManager__UpdateCrosshair
               (UnityEngine_UI_RawImage_o *crosshairImageWhite,UnityEngine_UI_RawImage_o *crosshairImageRed,
               UnityEngine_UI_Text_o *crosshairLabelWhite,UnityEngine_UI_Text_o *crosshairLabelRed,bool force,
               MethodInfo *method)

{
  int key;
  UI_CursorManager_o *pUVar1;
  Settings_UISettings_o *pSVar2;
  Settings_StringSetting_o *pSVar3;
  Settings_IntSetting_o *pSVar4;
  System_Collections_Generic_Dictionary_CrosshairStyle__Texture2D__o *pSVar5;
  UI_CursorManager_StaticFields *pUVar6;
  bool bVar7;
  int32_t iVar8;
  UnityEngine_Texture_o *pUVar9;
  UnityEngine_GameObject_o *pUVar10;
  UnityEngine_Transform_o *__this;
  UnityEngine_Vector3_o *pUVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  UnityEngine_Vector3_o local_58 [5];
  
  if (Il2CppMethodInitialized_1843470b8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CursorManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_CrosshairStyle_Texture2D_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_1843470b8 = '\x01';
  }
  if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
  }
  pUVar1 = TypeInfo_UI_CursorManager->static_fields->_instance;
  if (pUVar1 == (UI_CursorManager_o *)0x0) goto label_1822085ac;
  if ((pUVar1->fields)._ready == false) {
    return;
  }
  if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
  }
  if (TypeInfo_UI_CursorManager->static_fields->State != 1) {
    if ((crosshairImageRed != (UnityEngine_UI_RawImage_o *)0x0) &&
       (pUVar10 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)crosshairImageRed,(MethodInfo *)0x0),
       pUVar10 != (UnityEngine_GameObject_o *)0x0)) {
      bVar7 = UnityEngine_GameObject__get_activeSelf(pUVar10,(MethodInfo *)0x0);
      if (bVar7) {
        pUVar10 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)crosshairImageRed,(MethodInfo *)0x0);
        if (pUVar10 == (UnityEngine_GameObject_o *)0x0) goto label_1822085ac;
        UnityEngine_GameObject__SetActive(pUVar10,false,(MethodInfo *)0x0);
      }
      if ((crosshairImageWhite != (UnityEngine_UI_RawImage_o *)0x0) &&
         (pUVar10 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)crosshairImageWhite,(MethodInfo *)0x0),
         pUVar10 != (UnityEngine_GameObject_o *)0x0)) {
        bVar7 = UnityEngine_GameObject__get_activeSelf(pUVar10,(MethodInfo *)0x0);
        if (bVar7) {
          pUVar10 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)crosshairImageWhite,(MethodInfo *)0x0);
          if (pUVar10 == (UnityEngine_GameObject_o *)0x0) goto label_1822085ac;
          UnityEngine_GameObject__SetActive(pUVar10,false,(MethodInfo *)0x0);
        }
        if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
        }
        pUVar1 = TypeInfo_UI_CursorManager->static_fields->_instance;
        if (pUVar1 != (UI_CursorManager_o *)0x0) {
          (pUVar1->fields)._forceNextCrosshairUpdate = true;
          return;
        }
      }
    }
    goto label_1822085ac;
  }
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
  if ((pSVar2 == (Settings_UISettings_o *)0x0) ||
     (pSVar3 = (pSVar2->fields).CrosshairSkin, pSVar3 == (Settings_StringSetting_o *)0x0)) goto label_1822085ac;
  bVar7 = System_String__op_Inequality((pSVar3->fields)._value,"",(MethodInfo *)0x0);
  if (!bVar7) {
    pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
    if ((pSVar2 == (Settings_UISettings_o *)0x0) ||
       (pSVar4 = (pSVar2->fields).CrosshairStyle, pSVar4 == (Settings_IntSetting_o *)0x0)) goto label_1822085ac;
    key = (pSVar4->fields)._value;
    if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
    }
    pUVar1 = TypeInfo_UI_CursorManager->static_fields->_instance;
    if (pUVar1 == (UI_CursorManager_o *)0x0) goto label_1822085ac;
    bVar7 = force;
    if ((pUVar1->fields)._lastCrosshairStyle != key) {
      bVar7 = true;
    }
    if (bVar7 == false) {
      if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
      }
      pUVar1 = TypeInfo_UI_CursorManager->static_fields->_instance;
      if (pUVar1 == (UI_CursorManager_o *)0x0) goto label_1822085ac;
      if ((pUVar1->fields)._forceNextCrosshairUpdate == false) goto label_1822080b9;
    }
    if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
    }
    pSVar5 = TypeInfo_UI_CursorManager->static_fields->_crosshairs;
    if ((pSVar5 == (System_Collections_Generic_Dictionary_CrosshairStyle__Texture2D__o *)0x0) ||
       (pUVar9 = (UnityEngine_Texture_o *)
                 System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                           ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar5,key,
                            (MethodInfo_1454ED0 *)
                            MethodInfo_System_Collections_Generic_Dictionary_CrosshairStyle_Texture2D_get_Item
                           ), crosshairImageWhite == (UnityEngine_UI_RawImage_o *)0x0)) goto label_1822085ac;
    UnityEngine_UI_RawImage__set_texture(crosshairImageWhite,pUVar9,(MethodInfo *)0x0);
    pSVar5 = TypeInfo_UI_CursorManager->static_fields->_crosshairs;
    if ((pSVar5 == (System_Collections_Generic_Dictionary_CrosshairStyle__Texture2D__o *)0x0) ||
       (pUVar9 = (UnityEngine_Texture_o *)
                 System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                           ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar5,key,
                            (MethodInfo_1454ED0 *)
                            MethodInfo_System_Collections_Generic_Dictionary_CrosshairStyle_Texture2D_get_Item
                           ), crosshairImageRed == (UnityEngine_UI_RawImage_o *)0x0)) goto label_1822085ac;
    UnityEngine_UI_RawImage__set_texture(crosshairImageRed,pUVar9,(MethodInfo *)0x0);
    pUVar1 = TypeInfo_UI_CursorManager->static_fields->_instance;
    if (pUVar1 == (UI_CursorManager_o *)0x0) goto label_1822085ac;
    (pUVar1->fields)._lastCrosshairStyle = key;
  }
label_1822080b9:
  if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
  }
  pUVar1 = TypeInfo_UI_CursorManager->static_fields->_instance;
  if (pUVar1 == (UI_CursorManager_o *)0x0) goto label_1822085ac;
  if ((pUVar1->fields)._crosshairWhite != (pUVar1->fields)._lastCrosshairWhite) {
    force = true;
  }
  if (force == false) {
    if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
    }
    pUVar1 = TypeInfo_UI_CursorManager->static_fields->_instance;
    if (pUVar1 == (UI_CursorManager_o *)0x0) goto label_1822085ac;
    if ((pUVar1->fields)._forceNextCrosshairUpdate != false) goto label_182208133;
  }
  else {
label_182208133:
    if (crosshairImageWhite == (UnityEngine_UI_RawImage_o *)0x0) goto label_1822085ac;
    pUVar10 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)crosshairImageWhite,(MethodInfo *)0x0);
    if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
    }
    pUVar1 = TypeInfo_UI_CursorManager->static_fields->_instance;
    if (((pUVar1 == (UI_CursorManager_o *)0x0) || (pUVar10 == (UnityEngine_GameObject_o *)0x0)) ||
       (UnityEngine_GameObject__SetActive(pUVar10,(pUVar1->fields)._crosshairWhite,(MethodInfo *)0x0),
       crosshairImageRed == (UnityEngine_UI_RawImage_o *)0x0)) goto label_1822085ac;
    pUVar10 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)crosshairImageRed,(MethodInfo *)0x0);
    pUVar1 = TypeInfo_UI_CursorManager->static_fields->_instance;
    if ((pUVar1 == (UI_CursorManager_o *)0x0) || (pUVar10 == (UnityEngine_GameObject_o *)0x0))
    goto label_1822085ac;
    UnityEngine_GameObject__SetActive(pUVar10,(pUVar1->fields)._crosshairWhite == false,(MethodInfo *)0x0);
    pUVar1 = TypeInfo_UI_CursorManager->static_fields->_instance;
    if (pUVar1 == (UI_CursorManager_o *)0x0) goto label_1822085ac;
    (pUVar1->fields)._lastCrosshairWhite = (pUVar1->fields)._crosshairWhite;
  }
  if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
  }
  pUVar1 = TypeInfo_UI_CursorManager->static_fields->_instance;
  if (pUVar1 == (UI_CursorManager_o *)0x0) goto label_1822085ac;
  if ((pUVar1->fields)._crosshairWhite != false) {
    crosshairLabelRed = crosshairLabelWhite;
    crosshairImageRed = crosshairImageWhite;
  }
  if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
  }
  pUVar1 = TypeInfo_UI_CursorManager->static_fields->_instance;
  if (((pUVar1 == (UI_CursorManager_o *)0x0) || (crosshairLabelRed == (UnityEngine_UI_Text_o *)0x0)) ||
     ((*(crosshairLabelRed->klass->vtable)._75_set_text.methodPtr)
                (crosshairLabelRed,(pUVar1->fields)._crosshairText,
                 (crosshairLabelRed->klass->vtable)._75_set_text.method),
     crosshairImageRed == (UnityEngine_UI_RawImage_o *)0x0)) goto label_1822085ac;
  __this = UnityEngine_Component__get_transform
                     ((UnityEngine_Component_o *)crosshairImageRed,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_1843470b9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CursorManager);
    Il2CppMethodInitialized_1843470b9 = '\x01';
  }
  if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
  }
  if (TypeInfo_UI_CursorManager->static_fields->State == 0) {
label_1822083e9:
    pUVar11 = UnityEngine_Input__get_mousePosition(local_58,(MethodInfo *)0x0);
    fVar15 = (pUVar11->fields).z;
    fVar17 = (pUVar11->fields).y;
    fVar16 = (pUVar11->fields).x;
  }
  else {
    if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
    }
    bVar7 = UnityEngine_Application__get_isFocused((MethodInfo *)0x0);
    if (!bVar7) goto label_1822083e9;
    if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
    }
    bVar7 = UI_CursorManager__get_UsesCenteredCursor((MethodInfo *)0x0);
    if (!bVar7) {
      if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
      }
      bVar7 = UI_CursorManager__get_UsesWOWCursor((MethodInfo *)0x0);
      if (bVar7) {
        if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
        }
        if (TypeInfo_UI_CursorManager->static_fields->_wowVirtualCursorActive != false) {
          if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
          }
          pUVar6 = TypeInfo_UI_CursorManager->static_fields;
          fVar16 = (pUVar6->_wowCursorPosition).fields.x;
          fVar17 = (pUVar6->_wowCursorPosition).fields.y;
          fVar15 = (pUVar6->_wowCursorPosition).fields.z;
          goto label_182208404;
        }
      }
      goto label_1822083e9;
    }
    iVar8 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
    fVar16 = (float)iVar8 * 0.5;
    iVar8 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
    fVar17 = (float)iVar8 * 0.5;
    fVar15 = 0.0;
  }
label_182208404:
  if (__this != (UnityEngine_Transform_o *)0x0) {
    pUVar11 = UnityEngine_Transform__get_position(local_58,__this,(MethodInfo *)0x0);
    fVar13 = (pUVar11->fields).x - fVar16;
    fVar14 = (pUVar11->fields).y - fVar17;
    fVar12 = (pUVar11->fields).z - fVar15;
    if (9.9999994e-11 <= fVar14 * fVar14 + fVar13 * fVar13 + fVar12 * fVar12) {
      local_58[0].fields.x = fVar16;
      local_58[0].fields.y = fVar17;
      local_58[0].fields.z = fVar15;
      UnityEngine_Transform__set_position(__this,local_58,(MethodInfo *)0x0);
    }
    if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
    }
    pUVar1 = TypeInfo_UI_CursorManager->static_fields->_instance;
    if (pUVar1 != (UI_CursorManager_o *)0x0) {
      (pUVar1->fields)._forceNextCrosshairUpdate = false;
      return;
    }
  }
label_1822085ac:
  ThrowNullReferenceException();
}


// UI.CursorManager$$GetInGameMousePosition
// il2cpp: UnityEngine_Vector3_o UI_CursorManager__GetInGameMousePosition (const MethodInfo* method);
// 0x182206fa0

UnityEngine_Vector3_o *
UI_CursorManager__GetInGameMousePosition(UnityEngine_Vector3_o *__return_storage_ptr__,MethodInfo *method)

{
  float fVar1;
  UI_CursorManager_StaticFields *pUVar2;
  float fVar3;
  bool bVar4;
  int32_t iVar5;
  int32_t iVar6;
  UnityEngine_Vector3_o *pUVar7;
  UnityEngine_Vector3_o local_18;
  
  if (Il2CppMethodInitialized_1843470b9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CursorManager);
    Il2CppMethodInitialized_1843470b9 = '\x01';
  }
  if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
  }
  if (TypeInfo_UI_CursorManager->static_fields->State != 0) {
    if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
    }
    bVar4 = UnityEngine_Application__get_isFocused((MethodInfo *)0x0);
    if (bVar4) {
      if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
      }
      bVar4 = UI_CursorManager__get_UsesCenteredCursor((MethodInfo *)0x0);
      if (bVar4) {
        iVar5 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
        iVar6 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
        (__return_storage_ptr__->fields).z = 0.0;
        (__return_storage_ptr__->fields).x = (float)iVar5 * 0.5;
        (__return_storage_ptr__->fields).y = (float)iVar6 * 0.5;
        return __return_storage_ptr__;
      }
      if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
      }
      bVar4 = UI_CursorManager__get_UsesWOWCursor((MethodInfo *)0x0);
      if (bVar4) {
        if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
        }
        if (TypeInfo_UI_CursorManager->static_fields->_wowVirtualCursorActive != false) {
          if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
          }
          pUVar2 = TypeInfo_UI_CursorManager->static_fields;
          fVar3 = (pUVar2->_wowCursorPosition).fields.y;
          fVar1 = (pUVar2->_wowCursorPosition).fields.z;
          (__return_storage_ptr__->fields).x = (pUVar2->_wowCursorPosition).fields.x;
          (__return_storage_ptr__->fields).y = fVar3;
          (__return_storage_ptr__->fields).z = fVar1;
          return __return_storage_ptr__;
        }
      }
    }
  }
  pUVar7 = UnityEngine_Input__get_mousePosition(&local_18,(MethodInfo *)0x0);
  fVar3 = (pUVar7->fields).y;
  fVar1 = (pUVar7->fields).z;
  (__return_storage_ptr__->fields).x = (pUVar7->fields).x;
  (__return_storage_ptr__->fields).y = fVar3;
  (__return_storage_ptr__->fields).z = fVar1;
  return __return_storage_ptr__;
}


// UI.CursorManager$$.ctor
// il2cpp: void UI_CursorManager___ctor (UI_CursorManager_o* __this, const MethodInfo* method);
// 0x182209740

void UI_CursorManager___ctor(UI_CursorManager_o *__this,MethodInfo *method)

{
  System_String_o *value;
  
  (__this->fields)._crosshairWhite = true;
  value = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  (__this->fields)._crosshairText = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._crosshairText,value);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CursorManager$$.cctor
// il2cpp: void UI_CursorManager___cctor (const MethodInfo* method);
// 0x1822096a0

void UI_CursorManager___cctor(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_CrosshairStyle__Texture2D__o *__this;
  
  if (Il2CppMethodInitialized_1843470ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CursorManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_CrosshairStyle_Texture2D_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_CrosshairStyle_Texture2D);
    Il2CppMethodInitialized_1843470ba = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_CrosshairStyle_Texture2D);
  System_Collections_Generic_Dictionary_Int32Enum__float____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
             (MethodInfo_14421B0 *)
             MethodInfo_System_Collections_Generic_Dictionary_CrosshairStyle_Texture2D_ctor);
  TypeInfo_UI_CursorManager->static_fields->_crosshairs = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_UI_CursorManager->static_fields->_crosshairs,__this);
  TypeInfo_UI_CursorManager->static_fields->_wowCursorFrame = -1;
  return;
}


