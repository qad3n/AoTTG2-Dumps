// Type: UI.SnapshotHandler
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/UI/SnapshotHandler.cs
// Prior real C# source (older reference): Assets/Scripts/Cameras/SnapshotHandler.cs
// --------------------------------

// UI.SnapshotHandler.<TakeSnapshotCoroutine>d__4$$.ctor
// il2cpp: void UI_SnapshotHandler__TakeSnapshotCoroutine_d__4___ctor (UI_SnapshotHandler__TakeSnapshotCoroutine_d__4_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5c62b90

void UI_SnapshotHandler__TakeSnapshotCoroutine_d__4___ctor
               (UI_SnapshotHandler__TakeSnapshotCoroutine_d__4_o *__this,int32_t __1__state,MethodInfo *method
               )

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.SnapshotHandler.<TakeSnapshotCoroutine>d__4$$System.IDisposable.Dispose
// il2cpp: void UI_SnapshotHandler__TakeSnapshotCoroutine_d__4__System_IDisposable_Dispose (UI_SnapshotHandler__TakeSnapshotCoroutine_d__4_o* __this, const MethodInfo* method);
// 0x5c63150

void UI_SnapshotHandler__TakeSnapshotCoroutine_d__4__System_IDisposable_Dispose
               (UI_SnapshotHandler__TakeSnapshotCoroutine_d__4_o *__this,MethodInfo *method)

{
  return;
}


// UI.SnapshotHandler.<TakeSnapshotCoroutine>d__4$$MoveNext
// il2cpp: bool UI_SnapshotHandler__TakeSnapshotCoroutine_d__4__MoveNext (UI_SnapshotHandler__TakeSnapshotCoroutine_d__4_o* __this, const MethodInfo* method);
// 0x5c63160

bool UI_SnapshotHandler__TakeSnapshotCoroutine_d__4__MoveNext
               (UI_SnapshotHandler__TakeSnapshotCoroutine_d__4_o *__this,MethodInfo *method)

{
  byte bVar1;
  int32_t damage;
  UI_SnapshotHandler_o *__this_00;
  Cameras_BaseCamera_o *pCVar2;
  Settings_GeneralSettings_o *pSVar3;
  Settings_BoolSetting_o *pSVar4;
  UI_InGameMenu_o *__this_01;
  UnityEngine_GameObject_o *pUVar5;
  UnityEngine_Texture2D_o *pUVar6;
  Il2CppObject *pIVar7;
  UnityEngine_WaitForSeconds_o *pUVar8;
  bool bVar9;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075478a4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SnapshotManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForEndOfFrame);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForSeconds);
    Il2CppMethodInitialized_075478a4 = '\x01';
  }
  switch((__this->fields).__1__state) {
  case 0:
    (__this->fields).__1__state = -1;
    pIVar7 = (Il2CppObject *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame);
    UnityEngine_WaitForEndOfFrame___ctor((UnityEngine_WaitForEndOfFrame_o *)pIVar7,(MethodInfo *)0x0);
    (__this->fields).__2__current = pIVar7;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
    (__this->fields).__1__state = 1;
    bVar9 = true;
    break;
  case 1:
    __this_00 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (((__this_00 != (UI_SnapshotHandler_o *)0x0) &&
        (pCVar2 = (__this_00->fields).SnapshotCamera, pCVar2 != (Cameras_BaseCamera_o *)0x0)) &&
       (pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pCVar2,(MethodInfo *)0x0),
       pUVar5 != (UnityEngine_GameObject_o *)0x0)) {
      method_00 = (MethodInfo *)0x1;
      UnityEngine_GameObject__SetActive(pUVar5,true,(MethodInfo *)0x0);
      UI_SnapshotHandler__SetSnapshotPosition
                (__this_00,(UnityEngine_Vector3_o)(__this->fields).position.fields,method_00);
      pUVar6 = UI_SnapshotHandler__RTImage(__this_00,method_00);
      (__this->fields)._snapshot_5__2 = pUVar6;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._snapshot_5__2);
      pCVar2 = (__this_00->fields).SnapshotCamera;
      if ((pCVar2 != (Cameras_BaseCamera_o *)0x0) &&
         (pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pCVar2,(MethodInfo *)0x0),
         pUVar5 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar5,false,(MethodInfo *)0x0);
        pIVar7 = (Il2CppObject *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame);
        UnityEngine_WaitForEndOfFrame___ctor((UnityEngine_WaitForEndOfFrame_o *)pIVar7,(MethodInfo *)0x0);
        (__this->fields).__2__current = pIVar7;
        Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
        (__this->fields).__1__state = 2;
        return true;
      }
    }
    goto label_05c634e9;
  case 2:
    (__this->fields).__1__state = -1;
    pIVar7 = (Il2CppObject *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame);
    UnityEngine_WaitForEndOfFrame___ctor((UnityEngine_WaitForEndOfFrame_o *)pIVar7,(MethodInfo *)0x0);
    (__this->fields).__2__current = pIVar7;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
    (__this->fields).__1__state = 3;
    bVar9 = true;
    break;
  case 3:
    (__this->fields).__1__state = -1;
    pUVar6 = (__this->fields)._snapshot_5__2;
    if (pUVar6 != (UnityEngine_Texture2D_o *)0x0) {
      UnityEngine_Texture2D__Apply_68f05d0(pUVar6,(MethodInfo *)0x0);
      pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->GeneralSettings;
      if ((pSVar3 != (Settings_GeneralSettings_o *)0x0) &&
         (pSVar4 = (pSVar3->fields).SnapshotsShowInGame, pSVar4 != (Settings_BoolSetting_o *)0x0)) {
        if ((pSVar4->fields)._value != false) {
          if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
          }
          __this_01 = (UI_InGameMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
          if (__this_01 == (UI_InGameMenu_o *)0x0) goto label_05c634e9;
          bVar1 = (TypeInfo_UI_InGameMenu->_2).typeHierarchyDepth;
          if (((__this_01->klass->_2).typeHierarchyDepth < bVar1) ||
             ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UI_InGameMenu)
             ) {
            il2cpp_codegen_raise_invalid_cast_exception();
          }
          UI_InGameMenu__ShowSnapshot(__this_01,(__this->fields)._snapshot_5__2,(MethodInfo *)0x0);
        }
        pUVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
        UnityEngine_WaitForSeconds___ctor(pUVar8,0.5,(MethodInfo *)0x0);
        (__this->fields).__2__current = (Il2CppObject *)pUVar8;
        Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
        (__this->fields).__1__state = 4;
        return true;
      }
    }
label_05c634e9:
    ThrowNullReferenceException();
  case 4:
    (__this->fields).__1__state = -1;
    pUVar6 = (__this->fields)._snapshot_5__2;
    damage = (__this->fields).damage;
    if ((TypeInfo_ApplicationManagers_SnapshotManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_SnapshotManager);
    }
    ApplicationManagers_SnapshotManager__AddSnapshot(pUVar6,damage,(MethodInfo *)0x0);
    pUVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
    UnityEngine_WaitForSeconds___ctor(pUVar8,2.0,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)pUVar8;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
    (__this->fields).__1__state = 5;
    bVar9 = true;
    break;
  case 5:
    (__this->fields).__1__state = -1;
    pUVar6 = (__this->fields)._snapshot_5__2;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar9 = false;
    UnityEngine_Object__Destroy_69214e0((UnityEngine_Object_o *)pUVar6,(MethodInfo *)0x0);
    break;
  default:
    bVar9 = false;
  }
  return bVar9;
}


// UI.SnapshotHandler.<TakeSnapshotCoroutine>d__4$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_SnapshotHandler__TakeSnapshotCoroutine_d__4__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_SnapshotHandler__TakeSnapshotCoroutine_d__4_o* __this, const MethodInfo* method);
// 0x5c63500

Il2CppObject *
UI_SnapshotHandler__TakeSnapshotCoroutine_d__4__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (UI_SnapshotHandler__TakeSnapshotCoroutine_d__4_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.SnapshotHandler.<TakeSnapshotCoroutine>d__4$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_SnapshotHandler__TakeSnapshotCoroutine_d__4__System_Collections_IEnumerator_Reset (UI_SnapshotHandler__TakeSnapshotCoroutine_d__4_o* __this, const MethodInfo* method);
// 0x5c63510

void UI_SnapshotHandler__TakeSnapshotCoroutine_d__4__System_Collections_IEnumerator_Reset
               (UI_SnapshotHandler__TakeSnapshotCoroutine_d__4_o *__this,MethodInfo *method)

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
                  MethodInfo_UI_SnapshotHandler_TakeSnapshotCoroutine_d__4_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// UI.SnapshotHandler.<TakeSnapshotCoroutine>d__4$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_SnapshotHandler__TakeSnapshotCoroutine_d__4__System_Collections_IEnumerator_get_Current (UI_SnapshotHandler__TakeSnapshotCoroutine_d__4_o* __this, const MethodInfo* method);
// 0x5c63550

Il2CppObject *
UI_SnapshotHandler__TakeSnapshotCoroutine_d__4__System_Collections_IEnumerator_get_Current
          (UI_SnapshotHandler__TakeSnapshotCoroutine_d__4_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.SnapshotHandler$$Awake
// il2cpp: void UI_SnapshotHandler__Awake (UI_SnapshotHandler_o* __this, const MethodInfo* method);
// 0x5c628c0

void UI_SnapshotHandler__Awake(UI_SnapshotHandler_o *__this,MethodInfo *method)

{
  System_String_o *path;
  UnityEngine_GameObject_o *pUVar1;
  Cameras_BaseCamera_o *pCVar2;
  Cameras_InGameCamera_o *pCVar3;
  
  if (Il2CppMethodInitialized_075478a0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_InGameCamera);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_BaseCamera);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Snapshot/SnapshotCamera");
    Il2CppMethodInitialized_075478a0 = '\x01';
  }
  if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
  }
  path = TypeInfo_Utility_ResourcePaths->static_fields->UI;
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  pUVar1 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                     (path,"Prefabs/Snapshot/SnapshotCamera",false,false,
                      (MethodInfo_3665790 *)
                      MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
  if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
    pCVar2 = UnityEngine_GameObject__AddComponent_object_
                       (pUVar1,(MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_BaseCamera
                       );
    (__this->fields).SnapshotCamera = pCVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields).SnapshotCamera);
    pCVar3 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)__this,
                        (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_InGameCamera);
    (__this->fields).InGameCamera = pCVar3;
    Il2CppCodeGenWriteBarrier(&(__this->fields).InGameCamera);
    pCVar2 = (__this->fields).SnapshotCamera;
    if (pCVar2 != (Cameras_BaseCamera_o *)0x0) {
      pUVar1 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pCVar2,(MethodInfo *)0x0);
      if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(pUVar1,false,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.SnapshotHandler$$TakeSnapshot
// il2cpp: void UI_SnapshotHandler__TakeSnapshot (UI_SnapshotHandler_o* __this, UnityEngine_Vector3_o position, int32_t damage, const MethodInfo* method);
// 0x5c62a00

void UI_SnapshotHandler__TakeSnapshot
               (UI_SnapshotHandler_o *__this,UnityEngine_Vector3_o position,int32_t damage,MethodInfo *method)

{
  Settings_GeneralSettings_o *pSVar1;
  Settings_IntSetting_o *pSVar2;
  UI_SnapshotHandler__TakeSnapshotCoroutine_d__4_o *__this_00;
  
  if (Il2CppMethodInitialized_075478a1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_075478a1 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->GeneralSettings;
  if ((pSVar1 == (Settings_GeneralSettings_o *)0x0) ||
     (pSVar2 = (pSVar1->fields).SnapshotsMinimumDamage, pSVar2 == (Settings_IntSetting_o *)0x0)) {
    ThrowNullReferenceException();
  }
  if (damage < (pSVar2->fields)._value) {
    return;
  }
  if (Il2CppMethodInitialized_075478a2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_SnapshotHandler_TakeSnapshotCoroutine_d__4);
    Il2CppMethodInitialized_075478a2 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_SnapshotHandler_TakeSnapshotCoroutine_d__4)
  ;
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  (__this_00->fields).position.fields.x = position.fields.x;
  (__this_00->fields).position.fields.y = position.fields.y;
  (__this_00->fields).position.fields.z = position.fields.z;
  (__this_00->fields).damage = damage;
  UnityEngine_MonoBehaviour__StartCoroutine_691c390
            ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
             (MethodInfo *)0x0);
  return;
}


// UI.SnapshotHandler$$TakeSnapshotCoroutine
// il2cpp: System_Collections_IEnumerator_o* UI_SnapshotHandler__TakeSnapshotCoroutine (UI_SnapshotHandler_o* __this, UnityEngine_Vector3_o position, int32_t damage, const MethodInfo* method);
// 0x5c62b00

System_Collections_IEnumerator_o *
UI_SnapshotHandler__TakeSnapshotCoroutine
          (UI_SnapshotHandler_o *__this,UnityEngine_Vector3_o position,int32_t damage,MethodInfo *method)

{
  UI_SnapshotHandler__TakeSnapshotCoroutine_d__4_o *__this_00;
  
  if (Il2CppMethodInitialized_075478a2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_SnapshotHandler_TakeSnapshotCoroutine_d__4);
    Il2CppMethodInitialized_075478a2 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_SnapshotHandler_TakeSnapshotCoroutine_d__4)
  ;
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  (__this_00->fields).position.fields.x = position.fields.x;
  (__this_00->fields).position.fields.y = position.fields.y;
  (__this_00->fields).position.fields.z = position.fields.z;
  (__this_00->fields).damage = damage;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// UI.SnapshotHandler$$SetSnapshotPosition
// il2cpp: void UI_SnapshotHandler__SetSnapshotPosition (UI_SnapshotHandler_o* __this, UnityEngine_Vector3_o position, const MethodInfo* method);
// 0x5c62bb0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c62cbe: jmp 0x5c62cd7

void UI_SnapshotHandler__SetSnapshotPosition
               (UI_SnapshotHandler_o *__this,UnityEngine_Vector3_o position,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint32_t uVar3;
  Cameras_BaseCamera_o *pCVar4;
  Utility_BaseComponentCache_o *pUVar5;
  Cameras_InGameCamera_o *pCVar6;
  UnityEngine_Camera_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Skybox_o *__this_02;
  UnityEngine_Skybox_o *__this_03;
  UnityEngine_Transform_o *__this_04;
  UnityEngine_Vector3_StaticFields *pUVar7;
  UnityEngine_Material_o *value;
  float fVar8;
  undefined4 uVar9;
  undefined4 extraout_XMM0_Db;
  undefined4 in_XMM0_Dc;
  float extraout_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  float extraout_XMM0_Dd;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  UnityEngine_Vector3_o UVar13;
  UnityEngine_Vector3_o worldPosition;
  undefined1 local_40 [12];
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  undefined1 local_28 [8];
  float fStack_20;
  float fStack_1c;
  
  worldPosition.fields.z = position.fields.z;
  fStack_20 = (float)in_XMM0_Dc;
  local_28 = position.fields._0_8_;
  fStack_1c = (float)in_XMM0_Dd;
  pCVar4 = (__this->fields).SnapshotCamera;
  if ((((pCVar4 == (Cameras_BaseCamera_o *)0x0) ||
       (pUVar5 = (pCVar4->fields).Cache, pUVar5 == (Utility_BaseComponentCache_o *)0x0)) ||
      (pCVar6 = (__this->fields).InGameCamera, pCVar6 == (Cameras_InGameCamera_o *)0x0)) ||
     (__this_00 = (pCVar6->fields).Camera, __this_00 == (UnityEngine_Camera_o *)0x0)) goto label_05c62e37;
  __this_01 = (pUVar5->fields).Transform;
  __this_04 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
  if (__this_04 == (UnityEngine_Transform_o *)0x0) goto label_05c62e37;
  UVar13 = UnityEngine_Transform__get_position(__this_04,(MethodInfo *)0x0);
  local_40._8_4_ = UVar13.fields.x;
  fStack_34 = UVar13.fields.y;
  fStack_30 = extraout_XMM0_Dc;
  fStack_2c = extraout_XMM0_Dd;
  if (Il2CppMethodInitialized_0753e729 == '\0') {
    unique0x100000b2 = UVar13.fields._0_8_;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e729 = '\x01';
  }
  local_40._8_4_ = (float)local_40._8_4_ - (float)local_28._0_4_;
  fStack_34 = fStack_34 - (float)local_28._4_4_;
  fVar10 = UVar13.fields.z - worldPosition.fields.z;
  fStack_30 = fStack_30 - fStack_20;
  fStack_2c = fStack_2c - fStack_1c;
  fVar11 = (float)local_40._8_4_;
  fVar8 = fStack_34;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    fVar11 = (float)local_40._8_4_;
    fVar8 = fStack_34;
  }
  fVar11 = fVar10 * fVar10 + fVar8 * fVar8 + fVar11 * fVar11;
  if (fVar11 < 0.0) {
    fVar8 = sqrtf(fVar11);
  }
  else {
    fVar8 = SQRT(fVar11);
  }
  if (Il2CppMethodInitialized_0753e72d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e72d = '\x01';
  }
  local_40._0_4_ = 0.0;
  local_40._4_4_ = 0.0;
  if (Il2CppMethodInitialized_0753e729 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e729 = '\x01';
    uVar3 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar3 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
  }
  if (uVar3 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  uVar9 = 0;
  if (fVar11 < 0.0) {
    fVar11 = sqrtf(fVar11);
    uVar9 = extraout_XMM0_Db;
    if (fVar11 <= 1e-05) goto label_05c62d34;
label_05c62d60:
    fVar10 = fVar10 / fVar11;
    auVar12._4_4_ = fVar11;
    auVar12._0_4_ = fVar11;
    auVar12._8_4_ = uVar9;
    auVar12._12_4_ = uVar9;
    auVar12 = divps(stack0xffffffffffffffc8,auVar12);
    local_40._0_4_ = auVar12._0_4_;
    local_40._4_4_ = auVar12._4_4_;
    pUVar7 = (UnityEngine_Vector3_StaticFields *)local_40;
  }
  else {
    fVar11 = SQRT(fVar11);
    if (1e-05 < fVar11) goto label_05c62d60;
label_05c62d34:
    pUVar7 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar10 = (pUVar7->zeroVector).fields.z;
  }
  if (__this_01 != (UnityEngine_Transform_o *)0x0) {
    fVar11 = 20.0;
    if (20.0 <= fVar8) {
      fVar11 = fVar8;
    }
    uVar1 = (pUVar7->zeroVector).fields.x;
    uVar2 = (pUVar7->zeroVector).fields.y;
    UVar13.fields.z = fVar10 * fVar11 + worldPosition.fields.z;
    UVar13.fields.x = fVar11 * (float)uVar1 + (float)local_28._0_4_;
    UVar13.fields.y = fVar11 * (float)uVar2 + (float)local_28._4_4_;
    UnityEngine_Transform__set_position(__this_01,UVar13,(MethodInfo *)0x0);
    worldPosition.fields.x = (float)local_28._0_4_;
    worldPosition.fields.y = (float)local_28._4_4_;
    UnityEngine_Transform__LookAt_692e330(__this_01,worldPosition,(MethodInfo *)0x0);
    pCVar4 = (__this->fields).SnapshotCamera;
    if (((pCVar4 != (Cameras_BaseCamera_o *)0x0) &&
        (pCVar6 = (__this->fields).InGameCamera, pCVar6 != (Cameras_InGameCamera_o *)0x0)) &&
       (__this_02 = (pCVar6->fields).Skybox, __this_02 != (UnityEngine_Skybox_o *)0x0)) {
      __this_03 = (pCVar4->fields).Skybox;
      value = UnityEngine_Skybox__get_material(__this_02,(MethodInfo *)0x0);
      if (__this_03 != (UnityEngine_Skybox_o *)0x0) {
        UnityEngine_Skybox__set_material(__this_03,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_05c62e37:
  ThrowNullReferenceException();
}


// UI.SnapshotHandler$$RTImage
// il2cpp: UnityEngine_Texture2D_o* UI_SnapshotHandler__RTImage (UI_SnapshotHandler_o* __this, const MethodInfo* method);
// 0x5c62e40
// eh: try 0x5c62f7f..0x5c6306e -> pad 0x5c6307a (+9 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: runtime default class]
// eh: try 0x5c630a2..0x5c63123 -> pad 0x5c63123 (+1 call sites) cleanup
// eh: try 0x5c63126..0x5c6312b -> pad 0x5c63133 catch (...) [compiler noexcept guard]
// asm: 54 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c6306e: jmp 0x5c6307a
// asm:   0x5c63070: jmp 0x5c6307a
// asm:   0x5c63072: jmp 0x5c6307a
// asm:   0x5c63074: jmp 0x5c6307a
// asm:   0x5c63076: jmp 0x5c6307a
// asm:   0x5c63078: jmp 0x5c6307a
// asm:   0x5c6307a: mov rbx, rax
// asm:   0x5c6307d: cmp edx, 1
// asm:   0x5c63080: jne 0x5c6312b
// asm:   0x5c63086: mov rdi, rbx
// asm:   0x5c63089: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c6308e: mov rbx, rax
// asm:   0x5c63091: lea rax, [rip + 0x18f3630]
// asm:   0x5c63098: mov rdi, qword ptr [rax + 0x10]
// asm:   0x5c6309c: mov rax, qword ptr [rbx]
// asm:   0x5c6309f: mov rsi, qword ptr [rax]
// asm:   0x5c630a2: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5c630a7: test al, al
// asm:   0x5c630a9: je 0x5c63102
// asm:   0x5c630ab: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c630b0: lea rdi, [rip + 0x161a871]  ; TypeInfo_UnityEngine_Texture2D
// asm:   0x5c630b7: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5c630bc: mov rdi, rax
// asm:   0x5c630bf: call 0x30d6370  ; il2cpp_runtime_helper_030d6370()
// asm:   0x5c630c4: mov r15, rax
// asm:   0x5c630c7: mov rdi, rax
// asm:   0x5c630ca: mov esi, 1
// asm:   0x5c630cf: mov edx, 1
// asm:   0x5c630d4: xor ecx, ecx
// asm:   0x5c630d6: call 0x69efee0  ; UnityEngine_Texture2D___ctor()
// asm:   0x5c630db: test r15, r15
// asm:   0x5c630de: je 0x5c630fd
// asm:   0x5c630e0: movaps xmm0, xmmword ptr [rip - 0x4c5d877]
// asm:   0x5c630e7: mov rdi, r15
// asm:   0x5c630ea: xor esi, esi
// asm:   0x5c630ec: xor edx, edx
// asm:   0x5c630ee: movaps xmm1, xmm0
// asm:   0x5c630f1: xor ecx, ecx
// asm:   0x5c630f3: call 0x69f00e0  ; UnityEngine_Texture2D__SetPixel()
// asm:   0x5c630f8: jmp 0x5c6304d
// asm:   0x5c63102: mov edi, 8
// asm:   0x5c63107: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5c6310c: mov rcx, qword ptr [rbx]
// asm:   0x5c6310f: mov qword ptr [rax], rcx
// asm:   0x5c63112: lea rsi, [rip + 0x11ca3e7]
// asm:   0x5c63119: mov rdi, rax
// asm:   0x5c6311c: xor edx, edx
// asm:   0x5c6311e: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5c63123: mov rbx, rax
// asm:   0x5c63126: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c6312b: mov rdi, rbx
// asm:   0x5c6312e: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5c63133: mov rdi, rax
// asm:   0x5c63136: call 0x2ab61e0  ; __clang_call_terminate()

UnityEngine_Texture2D_o * UI_SnapshotHandler__RTImage(UI_SnapshotHandler_o *__this,MethodInfo *method)

{
  Cameras_BaseCamera_o *pCVar1;
  UnityEngine_Camera_o *__this_00;
  int32_t iVar2;
  int32_t iVar3;
  int32_t iVar4;
  int32_t iVar5;
  UnityEngine_RenderTexture_o *value;
  UnityEngine_RenderTexture_o *pUVar6;
  UnityEngine_Texture2D_o *__this_01;
  int iVar7;
  UnityEngine_Color_o color;
  UnityEngine_Rect_o source;
  
  if (Il2CppMethodInitialized_075478a3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Texture2D);
    Il2CppMethodInitialized_075478a3 = '\x01';
  }
  pCVar1 = (__this->fields).SnapshotCamera;
  if (pCVar1 != (Cameras_BaseCamera_o *)0x0) {
    __this_00 = (pCVar1->fields).Camera;
    value = UnityEngine_RenderTexture__get_active((MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_Camera_o *)0x0) {
      pUVar6 = UnityEngine_Camera__get_targetTexture(__this_00,(MethodInfo *)0x0);
      UnityEngine_RenderTexture__set_active(pUVar6,(MethodInfo *)0x0);
      UnityEngine_Camera__Render(__this_00,(MethodInfo *)0x0);
      pUVar6 = UnityEngine_Camera__get_targetTexture(__this_00,(MethodInfo *)0x0);
      if (pUVar6 != (UnityEngine_RenderTexture_o *)0x0) {
        iVar2 = (*(pUVar6->klass->vtable)._5_get_width.methodPtr)
                          (pUVar6,(pUVar6->klass->vtable)._5_get_width.method);
        pUVar6 = UnityEngine_Camera__get_targetTexture(__this_00,(MethodInfo *)0x0);
        if (pUVar6 != (UnityEngine_RenderTexture_o *)0x0) {
          iVar3 = (*(pUVar6->klass->vtable)._7_get_height.methodPtr)
                            (pUVar6,(pUVar6->klass->vtable)._7_get_height.method);
          __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Texture2D);
          UnityEngine_Texture2D___ctor_68efe30(__this_01,iVar2,iVar3,3,false,(MethodInfo *)0x0);
          pUVar6 = UnityEngine_Camera__get_targetTexture(__this_00,(MethodInfo *)0x0);
          if (pUVar6 != (UnityEngine_RenderTexture_o *)0x0) {
            iVar2 = (*(pUVar6->klass->vtable)._5_get_width.methodPtr)
                              (pUVar6,(pUVar6->klass->vtable)._5_get_width.method);
            pUVar6 = UnityEngine_Camera__get_targetTexture(__this_00,(MethodInfo *)0x0);
            if (pUVar6 != (UnityEngine_RenderTexture_o *)0x0) {
              iVar3 = (*(pUVar6->klass->vtable)._5_get_width.methodPtr)
                                (pUVar6,(pUVar6->klass->vtable)._5_get_width.method);
              if (__this_01 == (UnityEngine_Texture2D_o *)0x0) {
                ThrowNullReferenceException();
              }
              color.fields.b = 1.0;
              color.fields.a = 1.0;
              color.fields.r = 1.0;
              color.fields.g = 1.0;
              UnityEngine_Texture2D__SetPixel(__this_01,0,0,color,(MethodInfo *)0x0);
              pUVar6 = UnityEngine_Camera__get_targetTexture(__this_00,(MethodInfo *)0x0);
              if (pUVar6 == (UnityEngine_RenderTexture_o *)0x0) {
                ThrowNullReferenceException();
              }
              iVar4 = (*(pUVar6->klass->vtable)._5_get_width.methodPtr)
                                (pUVar6,(pUVar6->klass->vtable)._5_get_width.method);
              pUVar6 = UnityEngine_Camera__get_targetTexture(__this_00,(MethodInfo *)0x0);
              if (pUVar6 == (UnityEngine_RenderTexture_o *)0x0) {
                ThrowNullReferenceException();
              }
              iVar5 = (*(pUVar6->klass->vtable)._7_get_height.methodPtr)
                                (pUVar6,(pUVar6->klass->vtable)._7_get_height.method);
              iVar7 = (int)((float)iVar2 * 0.04);
              source.fields.m_XMin = (float)iVar7;
              source.fields.m_Width = (float)(iVar4 - iVar7);
              source.fields.m_Height = (float)(iVar5 - iVar7);
              source.fields.m_YMin = source.fields.m_XMin;
              UnityEngine_Texture2D__ReadPixels_68f0830
                        (__this_01,source,(int)((float)iVar3 * 0.02),(int)((float)iVar3 * 0.02),
                         (MethodInfo *)0x0);
              UnityEngine_RenderTexture__set_active(value,(MethodInfo *)0x0);
              return __this_01;
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.SnapshotHandler$$.ctor
// il2cpp: void UI_SnapshotHandler___ctor (UI_SnapshotHandler_o* __this, const MethodInfo* method);
// 0x5c63140

void UI_SnapshotHandler___ctor(UI_SnapshotHandler_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


