// Type: UI.CursorManager
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp_body_deref/Scripts/UI/CursorManager.cs
// Prior real C# source (older reference): Assets/Scripts/UI/CursorManager.cs
// --------------------------------

// UI.CursorManager$$UpdateGameplayCursorLock
// il2cpp: void UI_CursorManager__UpdateGameplayCursorLock (const MethodInfo* method);
// 0x5ce4f80
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ce503e: jmp 0x5ce510d
// asm:   0x5ce5073: jmp 0x5ce510d
// asm:   0x5ce50b0: jmp 0x5ce50cb
// asm:   0x5ce515d: cmp byte ptr [rip + 0x1862ab3], 0
// asm:   0x5ce5164: jne 0x5ce5185
// asm:   0x5ce5298: jmp 0x5ce5185

void UI_CursorManager__UpdateGameplayCursorLock(MethodInfo *method)

{
  byte bVar1;
  uint32_t uVar2;
  Cameras_InGameCamera_o *__this;
  UI_CursorManager_StaticFields *pUVar3;
  Cameras_BaseCamera_o *pCVar4;
  Il2CppClass *klass;
  bool bVar5;
  int32_t iVar6;
  CustomLogic_CustomLogicManager_StaticFields *pCVar7;
  byte bVar8;
  int value;
  MethodInfo *method_00;
  UI_CursorManager_c *method_01;
  
  if (Il2CppMethodInitialized_07547c13 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CursorManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_InGameCamera);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_07547c13 = '\x01';
  }
  __this = (Cameras_InGameCamera_o *)TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
  if (__this != (Cameras_InGameCamera_o *)0x0) {
    bVar8 = (TypeInfo_Cameras_InGameCamera->_2).typeHierarchyDepth;
    if (((__this->klass->_2).typeHierarchyDepth < bVar8) ||
       ((__this->klass->_2).typeHierarchy[(ulong)bVar8 - 1] != (Il2CppClass *)TypeInfo_Cameras_InGameCamera))
    {
      il2cpp_codegen_raise_invalid_cast_exception(__this);
    }
  }
  if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
    method_01 = TypeInfo_UI_CursorManager;
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
    bVar5 = UI_CursorManager__get_UsesWOWCursor((MethodInfo *)method_01);
    if (bVar5) goto label_05ce5055;
label_05ce510d:
    if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
      if (Il2CppMethodInitialized_07547c14 != '\0') goto label_05ce512b;
label_05ce5216:
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CursorManager);
      Il2CppMethodInitialized_07547c14 = '\x01';
      uVar2 = (TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor;
    }
    else {
      if (Il2CppMethodInitialized_07547c14 == '\0') goto label_05ce5216;
label_05ce512b:
      uVar2 = (TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor;
    }
    if (uVar2 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
    }
    klass = (Il2CppClass *)TypeInfo_UI_CursorManager;
    pUVar3 = TypeInfo_UI_CursorManager->static_fields;
    pUVar3->_wowCursorFrame = -1;
    pUVar3->_wowVirtualCursorActive = false;
    bVar8 = 0;
    uVar2 = (((UI_CursorManager_c *)klass)->_2).cctor_finished_or_no_cctor;
  }
  else {
    bVar5 = UI_CursorManager__get_UsesWOWCursor((MethodInfo *)TypeInfo_UI_CursorManager);
    if (!bVar5) goto label_05ce510d;
label_05ce5055:
    if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
      bVar5 = UnityEngine_Application__get_isFocused((MethodInfo *)0x0);
      if (bVar5) goto label_05ce508c;
      goto label_05ce510d;
    }
    bVar5 = UnityEngine_Application__get_isFocused((MethodInfo *)0x0);
    if (!bVar5) goto label_05ce510d;
label_05ce508c:
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      pCVar7 = TypeInfo_CustomLogic_CustomLogicManager->static_fields;
      if (pCVar7->CameraLocked == false) goto label_05ce50cb;
      goto label_05ce510d;
    }
    pCVar7 = TypeInfo_CustomLogic_CustomLogicManager->static_fields;
    if (pCVar7->CameraLocked != false) goto label_05ce510d;
label_05ce50cb:
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      pCVar7 = TypeInfo_CustomLogic_CustomLogicManager->static_fields;
    }
    if (pCVar7->Cutscene != false) goto label_05ce510d;
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      pCVar7 = TypeInfo_CustomLogic_CustomLogicManager->static_fields;
    }
    if (pCVar7->ManualCamera != false) goto label_05ce510d;
    if (__this == (Cameras_InGameCamera_o *)0x0) goto label_05ce52aa;
    method_00 = (MethodInfo *)0x0;
    bVar5 = Cameras_InGameCamera__get_UsesMouseLook(__this,(MethodInfo *)0x0);
    if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
    }
    UI_CursorManager__UpdateWOWCursorPosition(bVar5,method_00);
    bVar8 = 1;
    uVar2 = (TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_UI_CursorManager;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init(klass);
  }
  if (Il2CppMethodInitialized_07547c17 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_InGameCamera);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_07547c17 = '\x01';
  }
  pCVar4 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
  if (pCVar4 != (Cameras_BaseCamera_o *)0x0) {
    bVar1 = (TypeInfo_Cameras_InGameCamera->_2).typeHierarchyDepth;
    if (((pCVar4->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pCVar4->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Cameras_InGameCamera))
    {
      il2cpp_codegen_raise_invalid_cast_exception();
    }
    value = 2 - (uint)(bVar8 | ((ulong)(*(uint64_t *)((char *)pCVar4 + 0x68)) & 0xfffffffd) == 0);
    iVar6 = UnityEngine_Cursor__get_lockState((MethodInfo *)0x0);
    if (iVar6 == value) {
      return;
    }
    UnityEngine_Cursor__set_lockState(value,(MethodInfo *)0x0);
    return;
  }
label_05ce52aa:
  ThrowNullReferenceException();
}


// UI.CursorManager$$ResetWOWCursor
// il2cpp: void UI_CursorManager__ResetWOWCursor (const MethodInfo* method);
// 0x5ce5640

void UI_CursorManager__ResetWOWCursor(MethodInfo *method)

{
  UI_CursorManager_StaticFields *pUVar1;
  
  if (Il2CppMethodInitialized_07547c14 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CursorManager);
    Il2CppMethodInitialized_07547c14 = '\x01';
  }
  if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
  }
  pUVar1 = TypeInfo_UI_CursorManager->static_fields;
  pUVar1->_wowCursorFrame = -1;
  pUVar1->_wowVirtualCursorActive = false;
  return;
}


// UI.CursorManager$$UpdateWOWCursorPosition
// il2cpp: void UI_CursorManager__UpdateWOWCursorPosition (bool rotating, const MethodInfo* method);
// 0x5ce5390
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ce5633: jmp 0x5ce542c

void UI_CursorManager__UpdateWOWCursorPosition(bool rotating,MethodInfo *method)

{
  float fVar1;
  uint32_t uVar2;
  int iVar3;
  UI_CursorManager_c *pUVar4;
  int32_t iVar5;
  UI_CursorManager_StaticFields *pUVar6;
  Il2CppClass *pIVar7;
  float fVar8;
  UnityEngine_Vector3_o UVar9;
  
  if (Il2CppMethodInitialized_07547c15 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CursorManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Mouse Y");
    il2cpp_codegen_initialize_runtime_metadata(&"Mouse X");
    Il2CppMethodInitialized_07547c15 = '\x01';
    if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) goto label_05ce54fb;
label_05ce53c1:
    if (TypeInfo_UI_CursorManager->static_fields->_wowVirtualCursorActive != false) goto label_05ce53d2;
label_05ce5514:
    UVar9 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
    if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
    }
    pUVar4 = TypeInfo_UI_CursorManager;
    pUVar6 = TypeInfo_UI_CursorManager->static_fields;
    (pUVar6->_wowCursorPosition).fields.x = UVar9.fields.x;
    (pUVar6->_wowCursorPosition).fields.y = UVar9.fields.y;
    (pUVar6->_wowCursorPosition).fields.z = UVar9.fields.z;
    pUVar4->static_fields->_wowVirtualCursorActive = true;
    iVar5 = UnityEngine_Time__get_frameCount((MethodInfo *)0x0);
    pIVar7 = (Il2CppClass *)TypeInfo_UI_CursorManager;
    TypeInfo_UI_CursorManager->static_fields->_wowCursorFrame = iVar5;
    uVar2 = (((UI_CursorManager_c *)pIVar7)->_2).cctor_finished_or_no_cctor;
  }
  else {
    if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor != 0) goto label_05ce53c1;
label_05ce54fb:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
    if (TypeInfo_UI_CursorManager->static_fields->_wowVirtualCursorActive == false) goto label_05ce5514;
label_05ce53d2:
    uVar2 = (TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor;
    pIVar7 = (Il2CppClass *)TypeInfo_UI_CursorManager;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init(pIVar7);
    pIVar7 = (Il2CppClass *)TypeInfo_UI_CursorManager;
  }
  iVar3 = *(int *)((long)pIVar7->static_fields + 0x24);
  iVar5 = UnityEngine_Time__get_frameCount((MethodInfo *)0x0);
  if (iVar3 != iVar5) {
    iVar5 = UnityEngine_Time__get_frameCount((MethodInfo *)0x0);
    pIVar7 = (Il2CppClass *)TypeInfo_UI_CursorManager;
    if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
      pIVar7 = (Il2CppClass *)TypeInfo_UI_CursorManager;
      pUVar6 = TypeInfo_UI_CursorManager->static_fields;
      pUVar6->_wowCursorFrame = iVar5;
    }
    else {
      pUVar6 = TypeInfo_UI_CursorManager->static_fields;
      pUVar6->_wowCursorFrame = iVar5;
    }
    if (!rotating) {
      if ((pIVar7->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(pIVar7);
        pUVar6 = TypeInfo_UI_CursorManager->static_fields;
      }
      fVar1 = (pUVar6->_wowCursorPosition).fields.x;
      fVar8 = UnityEngine_Input__GetAxisRaw("Mouse X",(MethodInfo *)0x0);
      (pUVar6->_wowCursorPosition).fields.x = fVar8 / 0.1 + fVar1;
      pUVar6 = TypeInfo_UI_CursorManager->static_fields;
      fVar1 = (pUVar6->_wowCursorPosition).fields.y;
      fVar8 = UnityEngine_Input__GetAxisRaw("Mouse Y",(MethodInfo *)0x0);
      (pUVar6->_wowCursorPosition).fields.y = fVar8 / 0.1 + fVar1;
      uVar2 = (TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor;
      goto joined_r0x05ce542a;
    }
  }
  uVar2 = (TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor;
joined_r0x05ce542a:
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
  }
  fVar1 = (TypeInfo_UI_CursorManager->static_fields->_wowCursorPosition).fields.x;
  iVar5 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
  fVar8 = (float)iVar5;
  if (fVar1 <= (float)iVar5) {
    fVar8 = fVar1;
  }
  pUVar6 = TypeInfo_UI_CursorManager->static_fields;
  (pUVar6->_wowCursorPosition).fields.x = (float)(-(uint)(0.0 <= fVar1) & (uint)fVar8);
  fVar1 = (pUVar6->_wowCursorPosition).fields.y;
  iVar5 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
  fVar8 = (float)iVar5;
  if (fVar1 <= (float)iVar5) {
    fVar8 = fVar1;
  }
  (TypeInfo_UI_CursorManager->static_fields->_wowCursorPosition).fields.y =
       (float)(-(uint)(0.0 <= fVar1) & (uint)fVar8);
  return;
}


// UI.CursorManager$$get_UsesWOWCursor
// il2cpp: bool UI_CursorManager__get_UsesWOWCursor (const MethodInfo* method);
// 0x5ce52b0

bool UI_CursorManager__get_UsesWOWCursor(MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  Cameras_BaseCamera_o *pCVar3;
  Settings_GeneralSettings_o *pSVar4;
  Settings_BoolSetting_o *pSVar5;
  
  if (Il2CppMethodInitialized_07547c16 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_InGameCamera);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_07547c16 = '\x01';
  }
  pCVar3 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
  if (pCVar3 != (Cameras_BaseCamera_o *)0x0) {
    bVar1 = (TypeInfo_Cameras_InGameCamera->_2).typeHierarchyDepth;
    if (((pCVar3->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pCVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Cameras_InGameCamera))
    {
      il2cpp_codegen_raise_invalid_cast_exception();
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
      return (pSVar5->fields)._value != false;
    }
  }
  ThrowNullReferenceException();
}


// UI.CursorManager$$get_UsesCenteredCursor
// il2cpp: bool UI_CursorManager__get_UsesCenteredCursor (const MethodInfo* method);
// 0x5ce5690

bool UI_CursorManager__get_UsesCenteredCursor(MethodInfo *method)

{
  byte bVar1;
  Cameras_BaseCamera_o *pCVar2;
  
  if (Il2CppMethodInitialized_07547c17 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_InGameCamera);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_07547c17 = '\x01';
  }
  pCVar2 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
  if (pCVar2 == (Cameras_BaseCamera_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = (TypeInfo_Cameras_InGameCamera->_2).typeHierarchyDepth;
  if (((pCVar2->klass->_2).typeHierarchyDepth < bVar1) ||
     ((pCVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Cameras_InGameCamera)) {
    il2cpp_codegen_raise_invalid_cast_exception();
  }
  return ((ulong)(*(uint64_t *)((char *)pCVar2 + 0x68)) & 0xfffffffd) == 0;
}


// UI.CursorManager$$Init
// il2cpp: void UI_CursorManager__Init (const MethodInfo* method);
// 0x5ce5720
// eh: try 0x5ce58ff..0x5ce5bc8 -> pad 0x5ce5be5 (+11 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x5ce5c01..0x5ce5c06 -> pad 0x5ce5c0b cleanup
// eh: try 0x5ce5c0e..0x5ce5c18 -> pad 0x5ce5c20 catch (...) [compiler noexcept guard]
// asm: 33 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ce58ba: lea r14, [rip + 0x1593b37]  ; TypeInfo_System_Collections_IEnumerator
// asm:   0x5ce58c1: lea r13, [rip + 0x15912a8]  ; TypeInfo_UI_CrosshairStyle
// asm:   0x5ce58c8: lea r15, [rip + 0x1596ca9]  ; TypeInfo_Utility_ResourcePaths
// asm:   0x5ce58cf: nop 
// asm:   0x5ce5b29: nop dword ptr [rax]
// asm:   0x5ce5bcd: mov rdi, r14
// asm:   0x5ce5bd0: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5ce5bd5: jmp 0x5ce5be9
// asm:   0x5ce5bd7: jmp 0x5ce5be9
// asm:   0x5ce5bd9: jmp 0x5ce5be9
// asm:   0x5ce5bdb: jmp 0x5ce5be9
// asm:   0x5ce5bdd: jmp 0x5ce5be9
// asm:   0x5ce5bdf: jmp 0x5ce5be9
// asm:   0x5ce5be1: jmp 0x5ce5be9
// asm:   0x5ce5be3: jmp 0x5ce5be9
// asm:   0x5ce5be5: jmp 0x5ce5be9
// asm:   0x5ce5be7: jmp 0x5ce5be9
// asm:   0x5ce5be9: mov rbx, rax
// asm:   0x5ce5bec: cmp edx, 1
// asm:   0x5ce5bef: jne 0x5ce5c0e
// asm:   0x5ce5bf1: mov rdi, rbx
// asm:   0x5ce5bf4: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5ce5bf9: mov r14, qword ptr [rax]
// asm:   0x5ce5bfc: mov qword ptr [rsp + 0x18], r14
// asm:   0x5ce5c01: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5ce5c06: jmp 0x5ce5ae7
// asm:   0x5ce5c0b: mov rbx, rax
// asm:   0x5ce5c0e: lea rdi, [rsp + 0x18]
// asm:   0x5ce5c13: call 0x2fdb8c0  ; il2cpp_runtime_helper_02fdb8c0()
// asm:   0x5ce5c18: mov rdi, rbx
// asm:   0x5ce5c1b: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5ce5c20: mov rdi, rax
// asm:   0x5ce5c23: call 0x2ab61e0  ; __clang_call_terminate()

void UI_CursorManager__Init(MethodInfo *method)

{
  int32_t key;
  UI_CursorManager_StaticFields *pUVar1;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  System_String_o *path;
  System_Collections_Generic_Dictionary_CrosshairStyle__Texture2D__o *__this;
  Il2CppType *handle;
  char cVar4;
  UI_CursorManager_o *pUVar5;
  System_Type_o *enumType;
  System_Array_o *__this_00;
  Il2CppObject *pIVar6;
  VirtualInvokeData *pVVar7;
  int32_t *piVar8;
  System_String_o *pSVar9;
  UnityEngine_Object_o *value;
  ulong uVar10;
  long lVar11;
  Il2CppObject *local_70;
  Il2CppObject *local_68;
  undefined8 local_60;
  Il2CppObject **local_58;
  Il2CppObject **local_50;
  System_Enum_o local_48;
  int32_t local_38;
  
  if (Il2CppMethodInitialized_07547c18 == '\0') {
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
    Il2CppMethodInitialized_07547c18 = '\x01';
  }
  local_70 = (Il2CppObject *)0x0;
  local_68 = (Il2CppObject *)0x0;
  if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
  }
  pUVar5 = Utility_SingletonFactory__CreateSingleton_object_
                     ((Il2CppObject *)TypeInfo_UI_CursorManager->static_fields->_instance,
                      (MethodInfo_3680650 *)MethodInfo_Utility_SingletonFactory_CreateSingleton_CursorManager)
  ;
  pUVar1 = TypeInfo_UI_CursorManager->static_fields;
  pUVar1->_instance = pUVar5;
  Il2CppCodeGenWriteBarrier(&pUVar1->_instance);
  handle = TypeRef_UI_CrosshairStyle;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  enumType = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if ((g_data_07556760->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_07556760);
  }
  __this_00 = System_Enum__GetValues(enumType,(MethodInfo *)0x0);
  if (__this_00 != (System_Array_o *)0x0) {
    pIVar6 = (Il2CppObject *)System_Array__GetEnumerator(__this_00,(MethodInfo *)0x0);
    local_60 = 0;
    local_58 = &local_70;
    local_50 = &local_68;
    do {
      local_70 = pIVar6;
      if (pIVar6 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar2 = pIVar6->klass;
      uVar10 = (ulong)(pIVar2->_2).interface_offsets_count;
      if (uVar10 != 0) {
        pIVar3 = (pIVar2->_1).interfaceOffsets;
        lVar11 = 0;
        do {
          if (*(Il2CppClass **)((long)&pIVar3->interfaceType + lVar11) ==
              (Il2CppClass *)TypeInfo_System_Collections_IEnumerator) {
            pVVar7 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar11);
            goto label_05ce5923;
          }
          lVar11 = lVar11 + 0x10;
        } while (uVar10 * 0x10 != lVar11);
      }
      pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                         (pIVar6,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_05ce5923:
      cVar4 = (*pVVar7->methodPtr)(pIVar6,pVVar7->method);
      pIVar6 = local_70;
      if (cVar4 == '\0') {
        pIVar6 = il2cpp_vm_Object_IsInst(local_70,(Il2CppClass *)TypeInfo_System_IDisposable);
        local_68 = pIVar6;
        if (pIVar6 == (Il2CppObject *)0x0) goto label_05ce5b66;
        pIVar2 = pIVar6->klass;
        uVar10 = (ulong)(pIVar2->_2).interface_offsets_count;
        if (uVar10 == 0) goto label_05ce5b3f;
        pIVar3 = (pIVar2->_1).interfaceOffsets;
        lVar11 = 0;
        goto label_05ce5b30;
      }
      if (local_70 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar2 = local_70->klass;
      uVar10 = (ulong)(pIVar2->_2).interface_offsets_count;
      if (uVar10 != 0) {
        pIVar3 = (pIVar2->_1).interfaceOffsets;
        lVar11 = 0;
        do {
          if (*(System_Collections_IEnumerator_c **)((long)&pIVar3->interfaceType + lVar11) ==
              TypeInfo_System_Collections_IEnumerator) {
            pVVar7 = pIVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar11) + 1);
            goto label_05ce59b7;
          }
          lVar11 = lVar11 + 0x10;
        } while (uVar10 * 0x10 != lVar11);
      }
      pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                         (local_70,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,1);
label_05ce59b7:
      pIVar6 = (*pVVar7->methodPtr)(pIVar6,pVVar7->method);
      if (pIVar6 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      if ((pIVar6->klass->_1).element_class != (TypeInfo_UI_CrosshairStyle->_1).element_class) {
        il2cpp_codegen_raise_invalid_cast_exception(pIVar6);
      }
      piVar8 = il2cpp_vm_Object_Unbox(pIVar6);
      key = *piVar8;
      if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
      }
      path = TypeInfo_Utility_ResourcePaths->static_fields->UI;
      local_48.klass = (System_Enum_c *)TypeInfo_UI_CrosshairStyle;
      local_48.monitor = (void *)0xffffffffffffffff;
      local_38 = key;
      pSVar9 = System_Enum__ToString(&local_48,(MethodInfo *)0x0);
      pSVar9 = System_String__Concat_52f0320("Cursors/Cursor",pSVar9,(MethodInfo *)0x0);
      if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
      }
      value = ApplicationManagers_ResourceManager__LoadAsset(path,pSVar9,false,false,(MethodInfo *)0x0);
      if ((value != (UnityEngine_Object_o *)0x0) &&
         ((UnityEngine_Texture2D_c *)value->klass != TypeInfo_UnityEngine_Texture2D)) {
        il2cpp_codegen_raise_invalid_cast_exception(value);
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
                 (MethodInfo_4A54FE0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_CrosshairStyle_Texture2D_Add);
      pIVar6 = local_70;
    } while( true );
  }
  goto label_05ce5bc8;
  while (lVar11 = lVar11 + 0x10, uVar10 * 0x10 != lVar11) {
label_05ce5b30:
    if (*(System_IDisposable_c **)((long)&pIVar3->interfaceType + lVar11) == TypeInfo_System_IDisposable) {
      pVVar7 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar11);
      goto label_05ce5b5d;
    }
  }
label_05ce5b3f:
  pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar6,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05ce5b5d:
  (*pVVar7->methodPtr)(pIVar6,pVVar7->method);
label_05ce5b66:
  if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
  }
  pUVar5 = TypeInfo_UI_CursorManager->static_fields->_instance;
  if (pUVar5 != (UI_CursorManager_o *)0x0) {
    (pUVar5->fields)._ready = true;
    return;
  }
label_05ce5bc8:
  ThrowNullReferenceException();
}


// UI.CursorManager$$Update
// il2cpp: void UI_CursorManager__Update (UI_CursorManager_o* __this, const MethodInfo* method);
// 0x5ce5c30

void UI_CursorManager__Update(UI_CursorManager_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppClass *klass;
  
  if (Il2CppMethodInitialized_07547c19 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CursorManager);
    Il2CppMethodInitialized_07547c19 = '\x01';
    uVar1 = (TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_UI_CursorManager;
  }
  else {
    uVar1 = (TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_UI_CursorManager;
  }
  TypeInfo_UI_CursorManager = (UI_CursorManager_c *)klass;
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init(klass);
    UI_CursorManager__UpdateCursorState((MethodInfo *)klass);
    return;
  }
  UI_CursorManager__UpdateCursorState((MethodInfo *)klass);
  return;
}


// UI.CursorManager$$UpdateCursorState
// il2cpp: void UI_CursorManager__UpdateCursorState (const MethodInfo* method);
// 0x5ce5c90

void UI_CursorManager__UpdateCursorState(MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  UI_BaseMenu_o *pUVar3;
  UI_BaseMenu_c *pUVar4;
  Il2CppClass *pIVar5;
  void *pvVar6;
  bool bVar7;
  char cVar8;
  Il2CppObject *pIVar9;
  Il2CppObject *pIVar10;
  Controllers_BasePlayerController_o *x;
  UI_InGameMenu_c *in_RSI;
  Characters_BasicTitan_c *method_00;
  
  if (Il2CppMethodInitialized_07547c1a == '\0') {
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
    Il2CppMethodInitialized_07547c1a = '\x01';
    if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor != 0) goto label_05ce5cb9;
label_05ce5db4:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
    bVar7 = UnityEngine_Application__get_isFocused((MethodInfo *)0x0);
  }
  else {
    if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) goto label_05ce5db4;
label_05ce5cb9:
    bVar7 = UnityEngine_Application__get_isFocused((MethodInfo *)0x0);
  }
  if (!bVar7) {
    if ((((Il2CppClass *)TypeInfo_UI_CursorManager)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
    }
    bVar7 = true;
    goto label_05ce5de5;
  }
  uVar2 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->SceneName;
  if ((6 < uVar2) || ((0x73U >> (uVar2 & 0x1f) & 1) == 0)) {
    if ((((Il2CppClass *)TypeInfo_UI_UIManager)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pUVar3 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    in_RSI = (UI_InGameMenu_c *)0x0;
    bVar7 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar7) {
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pUVar3 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
      if (pUVar3 != (UI_BaseMenu_o *)0x0) {
        pUVar4 = pUVar3->klass;
        bVar1 = (TypeInfo_UI_InGameMenu->_2).typeHierarchyDepth;
        if ((bVar1 <= (pUVar4->_2).typeHierarchyDepth) &&
           ((pUVar4->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_UI_InGameMenu)) {
          pIVar9 = il2cpp_codegen_is_inst_class
                             ((Il2CppObject *)
                              TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager,
                              (Il2CppClass *)TypeInfo_GameManagers_InGameManager);
          if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
          }
          pUVar3 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
          pIVar10 = il2cpp_codegen_is_inst_class((Il2CppObject *)pUVar3,(Il2CppClass *)TypeInfo_UI_InGameMenu)
          ;
          if (pIVar10 == (Il2CppObject *)0x0) goto label_05ce612e;
          in_RSI = TypeInfo_UI_InGameMenu;
          pIVar10 = il2cpp_codegen_is_inst_class((Il2CppObject *)pUVar3,(Il2CppClass *)TypeInfo_UI_InGameMenu)
          ;
          pIVar5 = pIVar10[0xd].klass;
          bVar7 = UI_InGameMenu__InMenu((MethodInfo *)0x0);
          if (!bVar7) {
            if (pIVar9 == (Il2CppObject *)0x0) goto label_05ce612e;
            in_RSI = (UI_InGameMenu_c *)pIVar9->klass->vtable[0x38].method;
            cVar8 = (*pIVar9->klass->vtable[0x38].methodPtr)(pIVar9);
            if (((cVar8 != '\0') && (*(char *)((long)&pIVar9[9].monitor + 1) == '\0')) &&
               (*(char *)((long)&pIVar9[9].monitor + 2) == '\0')) {
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              in_RSI = (UI_InGameMenu_c *)0x0;
              bVar7 = UnityEngine_Object__op_Inequality
                                ((UnityEngine_Object_o *)pIVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
              ;
              if (bVar7) {
                if (pIVar5 == (Il2CppClass *)0x0) goto label_05ce612e;
                in_RSI = (UI_InGameMenu_c *)0x0;
                bVar7 = UI_ChatPanel__IsInputActive((UI_ChatPanel_o *)pIVar5,(MethodInfo *)0x0);
                if (!bVar7) {
                  in_RSI = (UI_InGameMenu_c *)0x0;
                  bVar7 = UI_ChatPanel__IsPointerOverChatUI((UI_ChatPanel_o *)pIVar5,(MethodInfo *)0x0);
                  if (!bVar7) goto label_05ce5fa6;
                }
              }
              else {
label_05ce5fa6:
                if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
                }
                if (TypeInfo_CustomLogic_CustomLogicManager->static_fields->CursorVisible == false) {
                  pIVar5 = pIVar9[8].klass;
                  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                  }
                  method_00 = (Characters_BasicTitan_c *)0x0;
                  bVar7 = UnityEngine_Object__op_Inequality
                                    ((UnityEngine_Object_o *)pIVar5,(UnityEngine_Object_o *)0x0,
                                     (MethodInfo *)0x0);
                  if ((bVar7) && (pIVar5 = pIVar9[8].klass, pIVar5 != (Il2CppClass *)0x0)) {
                    pvVar6 = (pIVar5->_1).image;
                    bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
                    if ((((bVar1 <= *(byte *)((long)pvVar6 + 0x130)) &&
                         (method_00 = (Characters_BasicTitan_c *)TypeInfo_Characters_Human,
                         *(Characters_Human_c **)(*(long *)((long)pvVar6 + 200) + -8 + (ulong)bVar1 * 8) ==
                         TypeInfo_Characters_Human)) ||
                        ((bVar1 = (TypeInfo_Characters_BasicTitan->_2).typeHierarchyDepth,
                         method_00 = TypeInfo_Characters_BasicTitan, bVar1 <= *(byte *)((long)pvVar6 + 0x130)
                         && (*(Characters_BasicTitan_c **)
                              (*(long *)((long)pvVar6 + 200) + -8 + (ulong)bVar1 * 8) ==
                             TypeInfo_Characters_BasicTitan)))) && (*(char *)&(pIVar5->_1).klass == '\0')) {
                      if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init
                                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
                      }
                      if (TypeInfo_CustomLogic_CustomLogicManager->static_fields->Cutscene == false) {
                        if (pIVar9[8].klass == (Il2CppClass *)0x0) {
label_05ce612e:
                          ThrowNullReferenceException();
                        }
                        x = UnityEngine_Component__GetComponent_object_
                                      ((UnityEngine_Component_o *)pIVar9[8].klass,
                                       (MethodInfo_34B0830 *)
                                       MethodInfo_UnityEngine_Component_GetComponent_BasePlayerController);
                        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                        }
                        method_00 = (Characters_BasicTitan_c *)0x0;
                        bVar7 = UnityEngine_Object__op_Inequality
                                          ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,
                                           (MethodInfo *)0x0);
                        if (bVar7) {
                          if (x == (Controllers_BasePlayerController_o *)0x0) goto label_05ce612e;
                          if ((x->fields).HideCursor == false) {
                            if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
                              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
                            }
                            UI_CursorManager__SetCrosshair(false,(MethodInfo *)method_00);
                            return;
                          }
                        }
                      }
                    }
                  }
                  if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
                  }
                  UI_CursorManager__SetHidden(false,(MethodInfo *)method_00);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
  }
  bVar7 = false;
label_05ce5de5:
  UI_CursorManager__SetPointer(bVar7,(MethodInfo *)in_RSI);
  return;
}


// UI.CursorManager$$RefreshCursorLock
// il2cpp: void UI_CursorManager__RefreshCursorLock (const MethodInfo* method);
// 0x5ce65c0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ce65e8: cmp byte ptr [rip + 0x1861625], 0

void UI_CursorManager__RefreshCursorLock(MethodInfo *method)

{
  uint32_t uVar1;
  UI_CursorManager_StaticFields *pUVar2;
  UI_CursorManager_o *pUVar3;
  bool bVar4;
  UI_CursorManager_c *method_00;
  
  if (Il2CppMethodInitialized_07547c1b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CursorManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547c1b = '\x01';
    uVar1 = (TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
  }
  if (Il2CppMethodInitialized_07547c14 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CursorManager);
    Il2CppMethodInitialized_07547c14 = '\x01';
    uVar1 = (TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_UI_CursorManager)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
  }
  pUVar2 = TypeInfo_UI_CursorManager->static_fields;
  pUVar2->_wowCursorFrame = -1;
  pUVar2->_wowVirtualCursorActive = false;
  pUVar3 = pUVar2->_instance;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
    }
    pUVar3 = TypeInfo_UI_CursorManager->static_fields->_instance;
    if (pUVar3 == (UI_CursorManager_o *)0x0) {
      ThrowNullReferenceException();
    }
    if ((pUVar3->fields)._ready != false) {
      if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
        method_00 = TypeInfo_UI_CursorManager;
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
        UI_CursorManager__UpdateCursorState((MethodInfo *)method_00);
        return;
      }
      UI_CursorManager__UpdateCursorState((MethodInfo *)TypeInfo_UI_CursorManager);
      return;
    }
  }
  return;
}


// UI.CursorManager$$OnApplicationFocus
// il2cpp: void UI_CursorManager__OnApplicationFocus (UI_CursorManager_o* __this, bool focused, const MethodInfo* method);
// 0x5ce6720
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ce672c: test bl, bl
// asm:   0x5ce672e: je 0x5ce6749

void UI_CursorManager__OnApplicationFocus(UI_CursorManager_o *__this,bool focused,MethodInfo *method)

{
  undefined3 in_register_00000031;
  undefined4 uVar1;
  undefined4 in_register_00000034;
  
  uVar1 = CONCAT31(in_register_00000031,focused);
  if (Il2CppMethodInitialized_07547c1c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CursorManager);
    Il2CppMethodInitialized_07547c1c = '\x01';
  }
  if (focused) {
    return;
  }
  if ((((Il2CppClass *)TypeInfo_UI_CursorManager)->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
    UI_CursorManager__SetPointer(true,(MethodInfo *)CONCAT44(in_register_00000034,uVar1));
    return;
  }
  UI_CursorManager__SetPointer(true,(MethodInfo *)CONCAT44(in_register_00000034,uVar1));
  return;
}


// UI.CursorManager$$SetPointer
// il2cpp: void UI_CursorManager__SetPointer (bool force, const MethodInfo* method);
// 0x5ce6140
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ce614c: test bl, bl
// asm:   0x5ce614e: je 0x5ce616c
// asm:   0x5ce6150: jmp 0x5ce61e4
// asm:   0x5ce6198: cmp byte ptr [rip + 0x1861a75], 0

void UI_CursorManager__SetPointer(bool force,MethodInfo *method)

{
  int iVar1;
  uint32_t uVar2;
  UI_CursorManager_StaticFields *pUVar3;
  Il2CppClass *klass;
  
  if (Il2CppMethodInitialized_07547c1d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CursorManager);
    Il2CppMethodInitialized_07547c1d = '\x01';
  }
  if (!force) {
    if ((((Il2CppClass *)TypeInfo_UI_CursorManager)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
      iVar1 = TypeInfo_UI_CursorManager->static_fields->State;
    }
    else {
      iVar1 = *(int *)((Il2CppClass *)TypeInfo_UI_CursorManager)->static_fields;
    }
    if (iVar1 == 0) {
      uVar2 = (((Il2CppClass *)TypeInfo_UI_CursorManager)->_2).cctor_finished_or_no_cctor;
      klass = (Il2CppClass *)TypeInfo_UI_CursorManager;
      goto joined_r0x05ce6228;
    }
  }
  UnityEngine_Cursor__set_visible(true,(MethodInfo *)0x0);
  UnityEngine_Cursor__set_lockState(0,(MethodInfo *)0x0);
  if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
  }
  klass = (Il2CppClass *)TypeInfo_UI_CursorManager;
  TypeInfo_UI_CursorManager->static_fields->State = 0;
  uVar2 = (((UI_CursorManager_c *)klass)->_2).cctor_finished_or_no_cctor;
joined_r0x05ce6228:
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init(klass);
  }
  if (Il2CppMethodInitialized_07547c14 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CursorManager);
    Il2CppMethodInitialized_07547c14 = '\x01';
    uVar2 = (TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (((Il2CppClass *)TypeInfo_UI_CursorManager)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
  }
  pUVar3 = TypeInfo_UI_CursorManager->static_fields;
  pUVar3->_wowCursorFrame = -1;
  pUVar3->_wowVirtualCursorActive = false;
  return;
}


// UI.CursorManager$$SetHidden
// il2cpp: void UI_CursorManager__SetHidden (bool force, const MethodInfo* method);
// 0x5ce6420
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ce6489: jmp 0x5ce6583
// asm:   0x5ce64fa: jmp 0x5ce6583

void UI_CursorManager__SetHidden(bool force,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  UI_BaseMenu_o *pUVar3;
  UI_ConfirmPopup_o *x;
  UI_ChatPanel_o *__this;
  bool bVar4;
  UI_CursorManager_c *method_00;
  
  if (Il2CppMethodInitialized_07547c1e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CursorManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_07547c1e = '\x01';
  }
  if (!force) {
    if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
      iVar2 = TypeInfo_UI_CursorManager->static_fields->State;
    }
    else {
      iVar2 = TypeInfo_UI_CursorManager->static_fields->State;
    }
    if (iVar2 == 2) goto label_05ce6583;
  }
  UnityEngine_Cursor__set_visible(false,(MethodInfo *)0x0);
  if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
  }
  TypeInfo_UI_CursorManager->static_fields->State = 2;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    pUVar3 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  }
  else {
    pUVar3 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  }
  if (pUVar3 != (UI_BaseMenu_o *)0x0) {
    bVar1 = (((Il2CppClass *)TypeInfo_UI_InGameMenu)->_2).typeHierarchyDepth;
    if ((bVar1 <= (pUVar3->klass->_2).typeHierarchyDepth) &&
       ((pUVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_UI_InGameMenu)) {
      x = (*(uint64_t *)((char *)pUVar3 + 0xd0));
      if ((((Il2CppClass *)TypeInfo_UnityEngine_Object)->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar4 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar4) {
        __this = (UI_ChatPanel_o *)(*(uint64_t *)((char *)pUVar3 + 0xd0));
        if (__this == (UI_ChatPanel_o *)0x0) {
          ThrowNullReferenceException();
        }
        UI_ChatPanel__CloseEmojiPanel(__this,(MethodInfo *)0x0);
      }
    }
  }
label_05ce6583:
  if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
    method_00 = TypeInfo_UI_CursorManager;
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
    UI_CursorManager__UpdateGameplayCursorLock((MethodInfo *)method_00);
    return;
  }
  UI_CursorManager__UpdateGameplayCursorLock((MethodInfo *)TypeInfo_UI_CursorManager);
  return;
}


// UI.CursorManager$$SetCrosshair
// il2cpp: void UI_CursorManager__SetCrosshair (bool force, const MethodInfo* method);
// 0x5ce6280
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ce62e9: jmp 0x5ce63e3
// asm:   0x5ce635a: jmp 0x5ce63e3

void UI_CursorManager__SetCrosshair(bool force,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  UI_BaseMenu_o *pUVar3;
  UI_ConfirmPopup_o *x;
  UI_ChatPanel_o *__this;
  bool bVar4;
  UI_CursorManager_c *method_00;
  
  if (Il2CppMethodInitialized_07547c1f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CursorManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_07547c1f = '\x01';
  }
  if (!force) {
    if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
      iVar2 = TypeInfo_UI_CursorManager->static_fields->State;
    }
    else {
      iVar2 = TypeInfo_UI_CursorManager->static_fields->State;
    }
    if (iVar2 == 1) goto label_05ce63e3;
  }
  UnityEngine_Cursor__set_visible(false,(MethodInfo *)0x0);
  if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
  }
  TypeInfo_UI_CursorManager->static_fields->State = 1;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    pUVar3 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  }
  else {
    pUVar3 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  }
  if (pUVar3 != (UI_BaseMenu_o *)0x0) {
    bVar1 = (((Il2CppClass *)TypeInfo_UI_InGameMenu)->_2).typeHierarchyDepth;
    if ((bVar1 <= (pUVar3->klass->_2).typeHierarchyDepth) &&
       ((pUVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_UI_InGameMenu)) {
      x = (*(uint64_t *)((char *)pUVar3 + 0xd0));
      if ((((Il2CppClass *)TypeInfo_UnityEngine_Object)->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar4 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar4) {
        __this = (UI_ChatPanel_o *)(*(uint64_t *)((char *)pUVar3 + 0xd0));
        if (__this == (UI_ChatPanel_o *)0x0) {
          ThrowNullReferenceException();
        }
        UI_ChatPanel__CloseEmojiPanel(__this,(MethodInfo *)0x0);
      }
    }
  }
label_05ce63e3:
  if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
    method_00 = TypeInfo_UI_CursorManager;
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
    UI_CursorManager__UpdateGameplayCursorLock((MethodInfo *)method_00);
    return;
  }
  UI_CursorManager__UpdateGameplayCursorLock((MethodInfo *)TypeInfo_UI_CursorManager);
  return;
}


// UI.CursorManager$$SetCrosshairColor
// il2cpp: void UI_CursorManager__SetCrosshairColor (bool white, const MethodInfo* method);
// 0x5ce6780
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ce67b2: jmp 0x5ce6823

void UI_CursorManager__SetCrosshairColor(bool white,MethodInfo *method)

{
  UI_CursorManager_o *pUVar1;
  
  if (Il2CppMethodInitialized_07547c20 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CursorManager);
    Il2CppMethodInitialized_07547c20 = '\x01';
    if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) goto label_05ce67da;
label_05ce67a2:
    pUVar1 = TypeInfo_UI_CursorManager->static_fields->_instance;
  }
  else {
    if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor != 0) goto label_05ce67a2;
label_05ce67da:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
    pUVar1 = TypeInfo_UI_CursorManager->static_fields->_instance;
  }
  if (pUVar1 == (UI_CursorManager_o *)0x0) {
label_05ce6823:
    ThrowNullReferenceException();
  }
  if ((pUVar1->fields)._crosshairWhite != white) {
    if ((((Il2CppClass *)TypeInfo_UI_CursorManager)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
      pUVar1 = TypeInfo_UI_CursorManager->static_fields->_instance;
      if (pUVar1 == (UI_CursorManager_o *)0x0) goto label_05ce6823;
    }
    (pUVar1->fields)._crosshairWhite = white;
  }
  return;
}


// UI.CursorManager$$SetCrosshairText
// il2cpp: void UI_CursorManager__SetCrosshairText (System_String_o* text, const MethodInfo* method);
// 0x5ce6830

void UI_CursorManager__SetCrosshairText(System_String_o *text,MethodInfo *method)

{
  uint32_t uVar1;
  UI_CursorManager_o *pUVar2;
  
  if (Il2CppMethodInitialized_07547c21 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CursorManager);
    Il2CppMethodInitialized_07547c21 = '\x01';
    uVar1 = (TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
    pUVar2 = TypeInfo_UI_CursorManager->static_fields->_instance;
  }
  else {
    pUVar2 = *(UI_CursorManager_o **)((long)((Il2CppClass *)TypeInfo_UI_CursorManager)->static_fields + 8);
  }
  if (pUVar2 == (UI_CursorManager_o *)0x0) {
    ThrowNullReferenceException();
  }
  (pUVar2->fields)._crosshairText = text;
  Il2CppCodeGenWriteBarrier(&(pUVar2->fields)._crosshairText);
  return;
}


// UI.CursorManager$$SetHookArrow
// il2cpp: void UI_CursorManager__SetHookArrow (bool left, UnityEngine_Vector3_o position, UnityEngine_Quaternion_o rotation, bool white, const MethodInfo* method);
// 0x5ce68c0

void UI_CursorManager__SetHookArrow
               (bool left,UnityEngine_Vector3_o position,UnityEngine_Quaternion_o rotation,bool white,
               MethodInfo *method)

{
  uint32_t uVar1;
  UI_CursorManager_o *pUVar2;
  UnityEngine_Quaternion_o *pUVar3;
  UI_CursorManager_c *pUVar4;
  
  if (Il2CppMethodInitialized_07547c22 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CursorManager);
    Il2CppMethodInitialized_07547c22 = '\x01';
  }
  uVar1 = (TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor;
  if (left) {
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
    }
    pUVar4 = TypeInfo_UI_CursorManager;
    pUVar2 = TypeInfo_UI_CursorManager->static_fields->_instance;
    if (pUVar2 != (UI_CursorManager_o *)0x0) {
      (pUVar2->fields)._arrowLeftPosition.fields.x = position.fields.x;
      (pUVar2->fields)._arrowLeftPosition.fields.y = position.fields.y;
      (pUVar2->fields)._arrowLeftPosition.fields.z = position.fields.z;
      pUVar2 = pUVar4->static_fields->_instance;
      if (pUVar2 != (UI_CursorManager_o *)0x0) {
        (pUVar2->fields)._arrowLeftWhite = white;
        (pUVar2->fields)._arrowLeftRotation.fields.x = rotation.fields.x;
        (pUVar2->fields)._arrowLeftRotation.fields.y = rotation.fields.y;
        pUVar3 = &(pUVar2->fields)._arrowLeftRotation;
label_05ce6a08:
        (pUVar3->fields).z = rotation.fields.z;
        (pUVar3->fields).w = rotation.fields.w;
        return;
      }
    }
  }
  else {
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
    }
    pUVar4 = TypeInfo_UI_CursorManager;
    pUVar2 = TypeInfo_UI_CursorManager->static_fields->_instance;
    if (pUVar2 != (UI_CursorManager_o *)0x0) {
      (pUVar2->fields)._arrowRightPosition.fields.x = position.fields.x;
      (pUVar2->fields)._arrowRightPosition.fields.y = position.fields.y;
      (pUVar2->fields)._arrowRightPosition.fields.z = position.fields.z;
      pUVar2 = pUVar4->static_fields->_instance;
      if (pUVar2 != (UI_CursorManager_o *)0x0) {
        (pUVar2->fields)._arrowRightWhite = white;
        (pUVar2->fields)._arrowRightRotation.fields.x = rotation.fields.x;
        (pUVar2->fields)._arrowRightRotation.fields.y = rotation.fields.y;
        pUVar3 = &(pUVar2->fields)._arrowRightRotation;
        goto label_05ce6a08;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.CursorManager$$UpdateHookArrows
// il2cpp: void UI_CursorManager__UpdateHookArrows (UnityEngine_UI_Image_o* hookArrowLeft, UnityEngine_UI_Image_o* hookArrowRight, const MethodInfo* method);
// 0x5ce6a20
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ce6a64: jmp 0x5ce6f25
// asm:   0x5ce6b11: jmp 0x5ce6c21
// asm:   0x5ce6e94: movaps xmm0, xmm1
// asm:   0x5ce6e97: jmp 0x5ce6ea1
// asm:   0x5ce6ef0: movaps xmm0, xmm1
// asm:   0x5ce6ef3: jmp 0x5ce6efd

void UI_CursorManager__UpdateHookArrows
               (UnityEngine_UI_Image_o *hookArrowLeft,UnityEngine_UI_Image_o *hookArrowRight,
               MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  UI_CursorManager_StaticFields *pUVar3;
  UI_CursorManager_o *pUVar4;
  GameManagers_BaseGameManager_o *pGVar5;
  Settings_UISettings_o *pSVar6;
  Settings_BoolSetting_o *pSVar7;
  UnityEngine_Object_o *x;
  long lVar8;
  undefined8 uVar9;
  bool bVar10;
  UnityEngine_GameObject_o *pUVar11;
  UnityEngine_Transform_o *pUVar12;
  undefined8 uVar13;
  UnityEngine_Color_o UVar14;
  UnityEngine_Color_o UVar15;
  
  if (Il2CppMethodInitialized_07547c23 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CursorManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_07547c23 = '\x01';
    if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) goto label_05ce6adc;
label_05ce6a50:
    pUVar3 = TypeInfo_UI_CursorManager->static_fields;
    pUVar4 = pUVar3->_instance;
  }
  else {
    if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor != 0) goto label_05ce6a50;
label_05ce6adc:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
    pUVar3 = TypeInfo_UI_CursorManager->static_fields;
    pUVar4 = pUVar3->_instance;
  }
  if (pUVar4 != (UI_CursorManager_o *)0x0) {
    if ((pUVar4->fields)._ready == false) {
      return;
    }
    if ((((Il2CppClass *)TypeInfo_UI_CursorManager)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
      iVar2 = TypeInfo_UI_CursorManager->static_fields->State;
    }
    else {
      iVar2 = pUVar3->State;
    }
    if (iVar2 == 1) {
      pGVar5 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
      if (pGVar5 != (GameManagers_BaseGameManager_o *)0x0) {
        bVar1 = (((Il2CppClass *)TypeInfo_GameManagers_InGameManager)->_2).typeHierarchyDepth;
        if (((pGVar5->klass->_2).typeHierarchyDepth < bVar1) ||
           ((pGVar5->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
          il2cpp_codegen_raise_invalid_cast_exception(pGVar5);
        }
      }
      pSVar6 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
      if ((pSVar6 == (Settings_UISettings_o *)0x0) ||
         (pSVar7 = (pSVar6->fields).ShowCrosshairArrows, pSVar7 == (Settings_BoolSetting_o *)0x0))
      goto label_05ce6f25;
      if ((pSVar7->fields)._value != false) {
        if (pGVar5 == (GameManagers_BaseGameManager_o *)0x0) goto label_05ce6f25;
        x = (*(uint64_t *)((char *)pGVar5 + 0x80));
        if ((((Il2CppClass *)TypeInfo_UnityEngine_Object)->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar10 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((bVar10) && ((*(uint64_t *)((char *)pGVar5 + 0x80)) != (long *)0x0)) {
          lVar8 = *(long *)(*(uint64_t *)((char *)pGVar5 + 0x80));
          bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
          if ((bVar1 <= *(byte *)(lVar8 + 0x130)) &&
             (*(Characters_Human_c **)(*(long *)(lVar8 + 200) + -8 + (ulong)bVar1 * 8) ==
              TypeInfo_Characters_Human)) {
            if ((hookArrowLeft != (UnityEngine_UI_Image_o *)0x0) &&
               (pUVar11 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)hookArrowLeft,(MethodInfo *)0x0),
               pUVar11 != (UnityEngine_GameObject_o *)0x0)) {
              bVar10 = UnityEngine_GameObject__get_activeSelf(pUVar11,(MethodInfo *)0x0);
              if (!bVar10) {
                pUVar11 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)hookArrowLeft,(MethodInfo *)0x0);
                if (pUVar11 == (UnityEngine_GameObject_o *)0x0) goto label_05ce6f25;
                UnityEngine_GameObject__SetActive(pUVar11,true,(MethodInfo *)0x0);
              }
              if ((hookArrowRight != (UnityEngine_UI_Image_o *)0x0) &&
                 (pUVar11 = UnityEngine_Component__get_gameObject
                                      ((UnityEngine_Component_o *)hookArrowRight,(MethodInfo *)0x0),
                 pUVar11 != (UnityEngine_GameObject_o *)0x0)) {
                bVar10 = UnityEngine_GameObject__get_activeSelf(pUVar11,(MethodInfo *)0x0);
                if (!bVar10) {
                  pUVar11 = UnityEngine_Component__get_gameObject
                                      ((UnityEngine_Component_o *)hookArrowRight,(MethodInfo *)0x0);
                  if (pUVar11 == (UnityEngine_GameObject_o *)0x0) goto label_05ce6f25;
                  UnityEngine_GameObject__SetActive(pUVar11,true,(MethodInfo *)0x0);
                }
                pUVar12 = UnityEngine_Component__get_transform
                                    ((UnityEngine_Component_o *)hookArrowLeft,(MethodInfo *)0x0);
                if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
                }
                pUVar4 = TypeInfo_UI_CursorManager->static_fields->_instance;
                if ((pUVar4 != (UI_CursorManager_o *)0x0) && (pUVar12 != (UnityEngine_Transform_o *)0x0)) {
                  UnityEngine_Transform__set_position
                            (pUVar12,(UnityEngine_Vector3_o)(pUVar4->fields)._arrowLeftPosition.fields,
                             (MethodInfo *)0x0);
                  pUVar12 = UnityEngine_Component__get_transform
                                      ((UnityEngine_Component_o *)hookArrowRight,(MethodInfo *)0x0);
                  pUVar4 = TypeInfo_UI_CursorManager->static_fields->_instance;
                  if ((pUVar4 != (UI_CursorManager_o *)0x0) && (pUVar12 != (UnityEngine_Transform_o *)0x0)) {
                    UnityEngine_Transform__set_position
                              (pUVar12,(UnityEngine_Vector3_o)(pUVar4->fields)._arrowRightPosition.fields,
                               (MethodInfo *)0x0);
                    pUVar12 = UnityEngine_Component__get_transform
                                        ((UnityEngine_Component_o *)hookArrowLeft,(MethodInfo *)0x0);
                    pUVar4 = TypeInfo_UI_CursorManager->static_fields->_instance;
                    if ((pUVar4 != (UI_CursorManager_o *)0x0) && (pUVar12 != (UnityEngine_Transform_o *)0x0))
                    {
                      UnityEngine_Transform__set_rotation
                                (pUVar12,(UnityEngine_Quaternion_o)(pUVar4->fields)._arrowLeftRotation.fields,
                                 (MethodInfo *)0x0);
                      pUVar12 = UnityEngine_Component__get_transform
                                          ((UnityEngine_Component_o *)hookArrowRight,(MethodInfo *)0x0);
                      pUVar4 = TypeInfo_UI_CursorManager->static_fields->_instance;
                      if ((pUVar4 != (UI_CursorManager_o *)0x0) && (pUVar12 != (UnityEngine_Transform_o *)0x0)
                         ) {
                        UnityEngine_Transform__set_rotation
                                  (pUVar12,(UnityEngine_Quaternion_o)
                                           (pUVar4->fields)._arrowRightRotation.fields,(MethodInfo *)0x0);
                        pUVar4 = TypeInfo_UI_CursorManager->static_fields->_instance;
                        if (pUVar4 != (UI_CursorManager_o *)0x0) {
                          uVar13 = 0x3f8000003f800000;
                          uVar9 = uVar13;
                          if ((pUVar4->fields)._arrowLeftWhite == false) {
                            uVar13 = 0x3f80000000000000;
                            uVar9 = 0x3f800000;
                          }
                          UVar14.fields.b = (float)(int)uVar13;
                          UVar14.fields.a = (float)(int)((ulong)uVar13 >> 0x20);
                          UVar14.fields.r = (float)(int)uVar9;
                          UVar14.fields.g = (float)(int)((ulong)uVar9 >> 0x20);
                          (*(hookArrowLeft->klass->vtable)._23_set_color.methodPtr)
                                    (hookArrowLeft,UVar14,(hookArrowLeft->klass->vtable)._23_set_color.method)
                          ;
                          if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
                            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
                          }
                          pUVar4 = TypeInfo_UI_CursorManager->static_fields->_instance;
                          if (pUVar4 != (UI_CursorManager_o *)0x0) {
                            uVar13 = 0x3f8000003f800000;
                            uVar9 = uVar13;
                            if ((pUVar4->fields)._arrowRightWhite == false) {
                              uVar13 = 0x3f80000000000000;
                              uVar9 = 0x3f800000;
                            }
                            UVar15.fields.b = (float)(int)uVar13;
                            UVar15.fields.a = (float)(int)((ulong)uVar13 >> 0x20);
                            UVar15.fields.r = (float)(int)uVar9;
                            UVar15.fields.g = (float)(int)((ulong)uVar9 >> 0x20);
                            (*(hookArrowRight->klass->vtable)._23_set_color.methodPtr)
                                      (hookArrowRight,UVar15,
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
            goto label_05ce6f25;
          }
        }
      }
    }
    if ((hookArrowLeft != (UnityEngine_UI_Image_o *)0x0) &&
       (pUVar11 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)hookArrowLeft,(MethodInfo *)0x0),
       pUVar11 != (UnityEngine_GameObject_o *)0x0)) {
      bVar10 = UnityEngine_GameObject__get_activeSelf(pUVar11,(MethodInfo *)0x0);
      if (bVar10) {
        pUVar11 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)hookArrowLeft,(MethodInfo *)0x0);
        if (pUVar11 == (UnityEngine_GameObject_o *)0x0) goto label_05ce6f25;
        UnityEngine_GameObject__SetActive(pUVar11,false,(MethodInfo *)0x0);
      }
      if ((hookArrowRight != (UnityEngine_UI_Image_o *)0x0) &&
         (pUVar11 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)hookArrowRight,(MethodInfo *)0x0),
         pUVar11 != (UnityEngine_GameObject_o *)0x0)) {
        bVar10 = UnityEngine_GameObject__get_activeSelf(pUVar11,(MethodInfo *)0x0);
        if (!bVar10) {
          return;
        }
        pUVar11 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)hookArrowRight,(MethodInfo *)0x0);
        if (pUVar11 != (UnityEngine_GameObject_o *)0x0) {
          UnityEngine_GameObject__SetActive(pUVar11,false,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
label_05ce6f25:
  ThrowNullReferenceException();
}


// UI.CursorManager$$UpdateCrosshair
// il2cpp: void UI_CursorManager__UpdateCrosshair (UnityEngine_UI_RawImage_o* crosshairImageWhite, UnityEngine_UI_RawImage_o* crosshairImageRed, UnityEngine_UI_Text_o* crosshairLabelWhite, UnityEngine_UI_Text_o* crosshairLabelRed, bool force, const MethodInfo* method);
// 0x5ce6f40
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ce6f8e: jmp 0x5ce7505
// asm:   0x5ce7154: jmp 0x5ce7505

void UI_CursorManager__UpdateCrosshair
               (UnityEngine_UI_RawImage_o *crosshairImageWhite,UnityEngine_UI_RawImage_o *crosshairImageRed,
               UnityEngine_UI_Text_o *crosshairLabelWhite,UnityEngine_UI_Text_o *crosshairLabelRed,bool force,
               MethodInfo *method)

{
  int iVar1;
  UI_CursorManager_StaticFields *pUVar2;
  Settings_UISettings_o *pSVar3;
  Settings_StringSetting_o *pSVar4;
  Settings_IntSetting_o *pSVar5;
  System_Collections_Generic_Dictionary_CrosshairStyle__Texture2D__o *pSVar6;
  bool bVar7;
  UnityEngine_Texture_o *pUVar8;
  UnityEngine_GameObject_o *pUVar9;
  UnityEngine_Transform_o *__this;
  UI_CursorManager_o *pUVar10;
  Il2CppClass *klass;
  float fVar11;
  float fVar12;
  float fVar13;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o UVar14;
  
  if (Il2CppMethodInitialized_07547c24 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CursorManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_CrosshairStyle_Texture2D_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547c24 = '\x01';
    if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) goto label_05ce6ff6;
label_05ce6f7a:
    pUVar2 = TypeInfo_UI_CursorManager->static_fields;
    pUVar10 = pUVar2->_instance;
  }
  else {
    if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor != 0) goto label_05ce6f7a;
label_05ce6ff6:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
    pUVar2 = TypeInfo_UI_CursorManager->static_fields;
    pUVar10 = pUVar2->_instance;
  }
  if (pUVar10 == (UI_CursorManager_o *)0x0) goto label_05ce7505;
  if ((pUVar10->fields)._ready == false) {
    return;
  }
  if ((((Il2CppClass *)TypeInfo_UI_CursorManager)->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
    iVar1 = TypeInfo_UI_CursorManager->static_fields->State;
  }
  else {
    iVar1 = pUVar2->State;
  }
  if (iVar1 != 1) {
    if ((crosshairImageRed != (UnityEngine_UI_RawImage_o *)0x0) &&
       (pUVar9 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)crosshairImageRed,(MethodInfo *)0x0),
       pUVar9 != (UnityEngine_GameObject_o *)0x0)) {
      bVar7 = UnityEngine_GameObject__get_activeSelf(pUVar9,(MethodInfo *)0x0);
      if (bVar7) {
        pUVar9 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)crosshairImageRed,(MethodInfo *)0x0);
        if (pUVar9 == (UnityEngine_GameObject_o *)0x0) goto label_05ce7505;
        UnityEngine_GameObject__SetActive(pUVar9,false,(MethodInfo *)0x0);
      }
      if ((crosshairImageWhite == (UnityEngine_UI_RawImage_o *)0x0) ||
         (pUVar9 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)crosshairImageWhite,(MethodInfo *)0x0),
         pUVar9 == (UnityEngine_GameObject_o *)0x0)) goto label_05ce7505;
      bVar7 = UnityEngine_GameObject__get_activeSelf(pUVar9,(MethodInfo *)0x0);
      if (bVar7) {
        pUVar9 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)crosshairImageWhite,(MethodInfo *)0x0);
        if (pUVar9 == (UnityEngine_GameObject_o *)0x0) goto label_05ce7505;
        UnityEngine_GameObject__SetActive(pUVar9,false,(MethodInfo *)0x0);
      }
      if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
      }
      pUVar10 = TypeInfo_UI_CursorManager->static_fields->_instance;
      bVar7 = true;
      if (pUVar10 == (UI_CursorManager_o *)0x0) goto label_05ce7505;
      goto label_05ce74bd;
    }
    goto label_05ce7505;
  }
  pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
  if ((pSVar3 == (Settings_UISettings_o *)0x0) ||
     (pSVar4 = (pSVar3->fields).CrosshairSkin, pSVar4 == (Settings_StringSetting_o *)0x0)) goto label_05ce7505;
  bVar7 = System_String__op_Inequality((pSVar4->fields)._value,"",(MethodInfo *)0x0);
  if (bVar7) {
    klass = (Il2CppClass *)TypeInfo_UI_CursorManager;
  }
  else {
    pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
    if ((pSVar3 == (Settings_UISettings_o *)0x0) ||
       (pSVar5 = (pSVar3->fields).CrosshairStyle, pSVar5 == (Settings_IntSetting_o *)0x0)) goto label_05ce7505;
    iVar1 = (pSVar5->fields)._value;
    if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
    }
    pUVar10 = TypeInfo_UI_CursorManager->static_fields->_instance;
    if (pUVar10 == (UI_CursorManager_o *)0x0) goto label_05ce7505;
    if (((pUVar10->fields)._lastCrosshairStyle == iVar1) && (!force)) {
      if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
        pUVar10 = TypeInfo_UI_CursorManager->static_fields->_instance;
        if (pUVar10 == (UI_CursorManager_o *)0x0) goto label_05ce7505;
      }
      klass = (Il2CppClass *)TypeInfo_UI_CursorManager;
      if ((pUVar10->fields)._forceNextCrosshairUpdate == false) goto label_05ce728f;
    }
    if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
    }
    pSVar6 = TypeInfo_UI_CursorManager->static_fields->_crosshairs;
    if ((pSVar6 == (System_Collections_Generic_Dictionary_CrosshairStyle__Texture2D__o *)0x0) ||
       (pUVar8 = (UnityEngine_Texture_o *)
                 System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                           ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar6,iVar1,
                            (MethodInfo_4A54F30 *)
                            MethodInfo_System_Collections_Generic_Dictionary_CrosshairStyle_Texture2D_get_Item
                           ), crosshairImageWhite == (UnityEngine_UI_RawImage_o *)0x0)) goto label_05ce7505;
    UnityEngine_UI_RawImage__set_texture(crosshairImageWhite,pUVar8,(MethodInfo *)0x0);
    pSVar6 = TypeInfo_UI_CursorManager->static_fields->_crosshairs;
    if ((pSVar6 == (System_Collections_Generic_Dictionary_CrosshairStyle__Texture2D__o *)0x0) ||
       (pUVar8 = (UnityEngine_Texture_o *)
                 System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                           ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar6,iVar1,
                            (MethodInfo_4A54F30 *)
                            MethodInfo_System_Collections_Generic_Dictionary_CrosshairStyle_Texture2D_get_Item
                           ), crosshairImageRed == (UnityEngine_UI_RawImage_o *)0x0)) goto label_05ce7505;
    UnityEngine_UI_RawImage__set_texture(crosshairImageRed,pUVar8,(MethodInfo *)0x0);
    klass = (Il2CppClass *)TypeInfo_UI_CursorManager;
    pUVar10 = TypeInfo_UI_CursorManager->static_fields->_instance;
    if (pUVar10 == (UI_CursorManager_o *)0x0) goto label_05ce7505;
    (pUVar10->fields)._lastCrosshairStyle = iVar1;
  }
label_05ce728f:
  if ((klass->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(klass);
    klass = (Il2CppClass *)TypeInfo_UI_CursorManager;
  }
  pUVar10 = *(UI_CursorManager_o **)((long)klass->static_fields + 8);
  if (pUVar10 == (UI_CursorManager_o *)0x0) goto label_05ce7505;
  if (((pUVar10->fields)._crosshairWhite != (pUVar10->fields)._lastCrosshairWhite) || (force)) {
label_05ce72f7:
    if (crosshairImageWhite == (UnityEngine_UI_RawImage_o *)0x0) goto label_05ce7505;
    pUVar9 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)crosshairImageWhite,(MethodInfo *)0x0);
    if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
    }
    pUVar10 = TypeInfo_UI_CursorManager->static_fields->_instance;
    if (((pUVar10 == (UI_CursorManager_o *)0x0) || (pUVar9 == (UnityEngine_GameObject_o *)0x0)) ||
       (UnityEngine_GameObject__SetActive(pUVar9,(pUVar10->fields)._crosshairWhite,(MethodInfo *)0x0),
       crosshairImageRed == (UnityEngine_UI_RawImage_o *)0x0)) goto label_05ce7505;
    pUVar9 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)crosshairImageRed,(MethodInfo *)0x0);
    pUVar10 = TypeInfo_UI_CursorManager->static_fields->_instance;
    if ((pUVar10 == (UI_CursorManager_o *)0x0) || (pUVar9 == (UnityEngine_GameObject_o *)0x0))
    goto label_05ce7505;
    UnityEngine_GameObject__SetActive(pUVar9,(pUVar10->fields)._crosshairWhite == false,(MethodInfo *)0x0);
    klass = (Il2CppClass *)TypeInfo_UI_CursorManager;
    pUVar10 = TypeInfo_UI_CursorManager->static_fields->_instance;
    if (pUVar10 == (UI_CursorManager_o *)0x0) goto label_05ce7505;
    (pUVar10->fields)._lastCrosshairWhite = (pUVar10->fields)._crosshairWhite;
  }
  else {
    if ((klass->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(klass);
      pUVar10 = TypeInfo_UI_CursorManager->static_fields->_instance;
      klass = (Il2CppClass *)TypeInfo_UI_CursorManager;
      if (pUVar10 == (UI_CursorManager_o *)0x0) goto label_05ce7505;
    }
    if ((pUVar10->fields)._forceNextCrosshairUpdate != false) goto label_05ce72f7;
  }
  if ((klass->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(klass);
    klass = (Il2CppClass *)TypeInfo_UI_CursorManager;
  }
  pUVar10 = *(UI_CursorManager_o **)((long)klass->static_fields + 8);
  if (pUVar10 == (UI_CursorManager_o *)0x0) goto label_05ce7505;
  if ((pUVar10->fields)._crosshairWhite == false) {
    crosshairLabelWhite = crosshairLabelRed;
    crosshairImageWhite = crosshairImageRed;
  }
  if ((klass->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(klass);
    pUVar10 = TypeInfo_UI_CursorManager->static_fields->_instance;
    if (pUVar10 == (UI_CursorManager_o *)0x0) goto label_05ce7505;
  }
  if ((crosshairLabelWhite == (UnityEngine_UI_Text_o *)0x0) ||
     ((*(crosshairLabelWhite->klass->vtable)._75_set_text.methodPtr)
                (crosshairLabelWhite,(pUVar10->fields)._crosshairText,
                 (crosshairLabelWhite->klass->vtable)._75_set_text.method),
     crosshairImageWhite == (UnityEngine_UI_RawImage_o *)0x0)) goto label_05ce7505;
  __this = UnityEngine_Component__get_transform
                     ((UnityEngine_Component_o *)crosshairImageWhite,(MethodInfo *)0x0);
  value = UI_CursorManager__GetInGameMousePosition((MethodInfo *)crosshairImageWhite);
  if (__this == (UnityEngine_Transform_o *)0x0) goto label_05ce7505;
  UVar14 = UnityEngine_Transform__get_position(__this,(MethodInfo *)0x0);
  fVar11 = UVar14.fields.y - value.fields.y;
  fVar12 = UVar14.fields.z - value.fields.z;
  fVar13 = UVar14.fields.x - value.fields.x;
  if (9.9999994e-11 <= fVar11 * fVar11 + fVar13 * fVar13 + fVar12 * fVar12) {
    UnityEngine_Transform__set_position(__this,value,(MethodInfo *)0x0);
    if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) goto label_05ce74ec;
label_05ce74ab:
    pUVar10 = TypeInfo_UI_CursorManager->static_fields->_instance;
  }
  else {
    if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor != 0) goto label_05ce74ab;
label_05ce74ec:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
    pUVar10 = TypeInfo_UI_CursorManager->static_fields->_instance;
  }
  if (pUVar10 != (UI_CursorManager_o *)0x0) {
    bVar7 = false;
label_05ce74bd:
    (pUVar10->fields)._forceNextCrosshairUpdate = bVar7;
    return;
  }
label_05ce7505:
  ThrowNullReferenceException();
}


// UI.CursorManager$$GetInGameMousePosition
// il2cpp: UnityEngine_Vector3_o UI_CursorManager__GetInGameMousePosition (const MethodInfo* method);
// 0x5ce7510
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ce7539: jmp 0x5ce76e7
// asm:   0x5ce75a6: jmp 0x5ce76e7
// asm:   0x5ce7666: jmp 0x5ce76e7

UnityEngine_Vector3_o UI_CursorManager__GetInGameMousePosition(MethodInfo *method)

{
  byte bVar1;
  uint32_t uVar2;
  int iVar3;
  Cameras_BaseCamera_o *pCVar4;
  bool bVar5;
  int32_t iVar6;
  int32_t iVar7;
  UI_CursorManager_StaticFields *pUVar8;
  UI_CursorManager_c *method_00;
  UnityEngine_Vector3_o UVar9;
  UnityEngine_Vector3_Fields UVar10;
  
  if (Il2CppMethodInitialized_07547c25 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CursorManager);
    Il2CppMethodInitialized_07547c25 = '\x01';
    uVar2 = (TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
    iVar3 = TypeInfo_UI_CursorManager->static_fields->State;
  }
  else {
    iVar3 = *(int *)((Il2CppClass *)TypeInfo_UI_CursorManager)->static_fields;
  }
  if (iVar3 != 0) {
    if ((((Il2CppClass *)TypeInfo_UnityEngine_Application)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
      bVar5 = UnityEngine_Application__get_isFocused((MethodInfo *)0x0);
    }
    else {
      bVar5 = UnityEngine_Application__get_isFocused((MethodInfo *)0x0);
    }
    if (bVar5) {
      if ((((Il2CppClass *)TypeInfo_UI_CursorManager)->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
      }
      if (Il2CppMethodInitialized_07547c17 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_InGameCamera);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
        Il2CppMethodInitialized_07547c17 = '\x01';
      }
      pCVar4 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
      if (pCVar4 == (Cameras_BaseCamera_o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar1 = (TypeInfo_Cameras_InGameCamera->_2).typeHierarchyDepth;
      if (((pCVar4->klass->_2).typeHierarchyDepth < bVar1) ||
         ((pCVar4->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Cameras_InGameCamera)
         ) {
        il2cpp_codegen_raise_invalid_cast_exception();
      }
      if (((ulong)(*(uint64_t *)((char *)pCVar4 + 0x68)) & 0xfffffffd) == 0) {
        iVar6 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
        iVar7 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
        UVar9.fields.x = (float)iVar6 * 0.5;
        UVar9.fields.y = (float)iVar7 * 0.5;
        UVar9.fields.z = 0.0;
        return (UnityEngine_Vector3_o)UVar9.fields;
      }
      if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
        method_00 = TypeInfo_UI_CursorManager;
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
        bVar5 = UI_CursorManager__get_UsesWOWCursor((MethodInfo *)method_00);
      }
      else {
        bVar5 = UI_CursorManager__get_UsesWOWCursor((MethodInfo *)TypeInfo_UI_CursorManager);
      }
      if (bVar5) {
        if ((((Il2CppClass *)TypeInfo_UI_CursorManager)->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
        }
        pUVar8 = TypeInfo_UI_CursorManager->static_fields;
        if (pUVar8->_wowVirtualCursorActive != false) {
          if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
            pUVar8 = TypeInfo_UI_CursorManager->static_fields;
          }
          return (UnityEngine_Vector3_o)(pUVar8->_wowCursorPosition).fields;
        }
      }
    }
  }
  UVar10 = (UnityEngine_Vector3_Fields)UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
  return (UnityEngine_Vector3_o)UVar10;
}


// UI.CursorManager$$.ctor
// il2cpp: void UI_CursorManager___ctor (UI_CursorManager_o* __this, const MethodInfo* method);
// 0x5ce7700

void UI_CursorManager___ctor(UI_CursorManager_o *__this,MethodInfo *method)

{
  (__this->fields)._crosshairWhite = true;
  (__this->fields)._crosshairText = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  Il2CppCodeGenWriteBarrier(&(__this->fields)._crosshairText);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CursorManager$$.cctor
// il2cpp: void UI_CursorManager___cctor (const MethodInfo* method);
// 0x5ce7740

void UI_CursorManager___cctor(MethodInfo *method)

{
  UI_CursorManager_StaticFields *pUVar1;
  System_Collections_Generic_Dictionary_CrosshairStyle__Texture2D__o *__this;
  
  if (Il2CppMethodInitialized_07547c26 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CursorManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_CrosshairStyle_Texture2D_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_CrosshairStyle_Texture2D);
    Il2CppMethodInitialized_07547c26 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_CrosshairStyle_Texture2D);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
             (MethodInfo_4A543B0 *)
             MethodInfo_System_Collections_Generic_Dictionary_CrosshairStyle_Texture2D_ctor);
  pUVar1 = TypeInfo_UI_CursorManager->static_fields;
  pUVar1->_crosshairs = __this;
  Il2CppCodeGenWriteBarrier(&pUVar1->_crosshairs);
  TypeInfo_UI_CursorManager->static_fields->_wowCursorFrame = -1;
  return;
}


