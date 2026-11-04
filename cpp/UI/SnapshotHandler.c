// Type: UI.SnapshotHandler
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/SnapshotHandler.cs
// Prior real C# source (older reference): Assets/Scripts/Cameras/SnapshotHandler.cs
// --------------------------------

// UI.SnapshotHandler.<TakeSnapshotCoroutine>d__4$$.ctor
// il2cpp: void UI_SnapshotHandler__TakeSnapshotCoroutine_d__4___ctor (UI_SnapshotHandler__TakeSnapshotCoroutine_d__4_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
UI_SnapshotHandler__TakeSnapshotCoroutine_d__4___ctor(UI_SnapshotHandler__TakeSnapshotCoroutine_d__4_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.SnapshotHandler.<TakeSnapshotCoroutine>d__4$$System.IDisposable.Dispose
// il2cpp: void UI_SnapshotHandler__TakeSnapshotCoroutine_d__4__System_IDisposable_Dispose (UI_SnapshotHandler__TakeSnapshotCoroutine_d__4_o* __this, const MethodInfo* method);
// 0x180547020

void
UI_SnapshotHandler__TakeSnapshotCoroutine_d__4__System_IDisposable_Dispose(UI_SnapshotHandler__TakeSnapshotCoroutine_d__4_o* __this, MethodInfo* method)

{
  return;
}


// UI.SnapshotHandler.<TakeSnapshotCoroutine>d__4$$MoveNext
// il2cpp: bool UI_SnapshotHandler__TakeSnapshotCoroutine_d__4__MoveNext (UI_SnapshotHandler__TakeSnapshotCoroutine_d__4_o* __this, const MethodInfo* method);
// 0x1821d0060

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
  Photon_Voice_Unity_UtilityScripts_MicAmplifierShort_o *pPVar8;
  UnityEngine_Vector3_Fields local_18;
  
  if (Il2CppMethodInitialized_184346eb2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SnapshotManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForEndOfFrame);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForSeconds);
    Il2CppMethodInitialized_184346eb2 = '\x01';
  }
  switch((__this->fields).__1__state) {
  case 0:
    (__this->fields).__1__state = -1;
    pIVar7 = (Il2CppObject *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame);
    UnityEngine_WaitForEndOfFrame___ctor
              ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pIVar7,(MethodInfo *)0x0);
    (__this->fields).__2__current = pIVar7;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pIVar7);
    (__this->fields).__1__state = 1;
    return true;
  case 1:
    __this_00 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (((__this_00 != (UI_SnapshotHandler_o *)0x0) &&
        (pCVar2 = (__this_00->fields).SnapshotCamera, pCVar2 != (Cameras_BaseCamera_o *)0x0)) &&
       (pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pCVar2,(MethodInfo *)0x0),
       pUVar5 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar5,true,(MethodInfo *)0x0);
      local_18.x = (__this->fields).position.fields.x;
      local_18.y = (__this->fields).position.fields.y;
      local_18.z = (__this->fields).position.fields.z;
      UI_SnapshotHandler__SetSnapshotPosition(__this_00,(UnityEngine_Vector3_o *)&local_18,(MethodInfo *)0x0);
      pUVar6 = UI_SnapshotHandler__RTImage(__this_00,(MethodInfo *)0x0);
      (__this->fields)._snapshot_5__2 = pUVar6;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._snapshot_5__2,pUVar6);
      pCVar2 = (__this_00->fields).SnapshotCamera;
      if ((pCVar2 != (Cameras_BaseCamera_o *)0x0) &&
         (pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pCVar2,(MethodInfo *)0x0),
         pUVar5 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar5,false,(MethodInfo *)0x0);
        pIVar7 = (Il2CppObject *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame);
        UnityEngine_WaitForEndOfFrame___ctor
                  ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pIVar7,(MethodInfo *)0x0);
        (__this->fields).__2__current = pIVar7;
        Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pIVar7);
        (__this->fields).__1__state = 2;
        return true;
      }
    }
    break;
  case 2:
    (__this->fields).__1__state = -1;
    pIVar7 = (Il2CppObject *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame);
    UnityEngine_WaitForEndOfFrame___ctor
              ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pIVar7,(MethodInfo *)0x0);
    (__this->fields).__2__current = pIVar7;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pIVar7);
    (__this->fields).__1__state = 3;
    return true;
  case 3:
    pUVar6 = (__this->fields)._snapshot_5__2;
    (__this->fields).__1__state = -1;
    if (pUVar6 != (UnityEngine_Texture2D_o *)0x0) {
      UnityEngine_Texture2D__Apply_2ef9fd0(pUVar6,(MethodInfo *)0x0);
      pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->GeneralSettings;
      if ((pSVar3 != (Settings_GeneralSettings_o *)0x0) &&
         (pSVar4 = (pSVar3->fields).SnapshotsShowInGame, pSVar4 != (Settings_BoolSetting_o *)0x0)) {
        if ((pSVar4->fields)._value != false) {
          if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
          }
          __this_01 = (UI_InGameMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
          if (__this_01 == (UI_InGameMenu_o *)0x0) break;
          bVar1 = (TypeInfo_UI_InGameMenu->_2).typeHierarchyDepth;
          if (((__this_01->klass->_2).typeHierarchyDepth < bVar1) ||
             ((__this_01->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
              (Il2CppClass *)TypeInfo_UI_InGameMenu)) {
            il2cpp_codegen_raise_invalid_cast_exception(__this_01,TypeInfo_UI_InGameMenu);
          }
          UI_InGameMenu__ShowSnapshot(__this_01,(__this->fields)._snapshot_5__2,(MethodInfo *)0x0);
        }
        pPVar8 = (Photon_Voice_Unity_UtilityScripts_MicAmplifierShort_o *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
        UnityEngine_WaitForSeconds___ctor(pPVar8,0.5,(MethodInfo *)0x0);
        (__this->fields).__2__current = (Il2CppObject *)pPVar8;
        Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pPVar8);
        (__this->fields).__1__state = 4;
        return true;
      }
    }
    break;
  case 4:
    pUVar6 = (__this->fields)._snapshot_5__2;
    (__this->fields).__1__state = -1;
    damage = (__this->fields).damage;
    if ((TypeInfo_ApplicationManagers_SnapshotManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_SnapshotManager);
    }
    ApplicationManagers_SnapshotManager__AddSnapshot(pUVar6,damage,(MethodInfo *)0x0);
    pPVar8 = (Photon_Voice_Unity_UtilityScripts_MicAmplifierShort_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
    UnityEngine_WaitForSeconds___ctor(pPVar8,2.0,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)pPVar8;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pPVar8);
    (__this->fields).__1__state = 5;
    return true;
  case 5:
    pUVar6 = (__this->fields)._snapshot_5__2;
    (__this->fields).__1__state = -1;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_2f1ff70((UnityEngine_Object_o *)pUVar6,(MethodInfo *)0x0);
  default:
    return false;
  }
  ThrowNullReferenceException();
}


// UI.SnapshotHandler.<TakeSnapshotCoroutine>d__4$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_SnapshotHandler__TakeSnapshotCoroutine_d__4__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_SnapshotHandler__TakeSnapshotCoroutine_d__4_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
UI_SnapshotHandler__TakeSnapshotCoroutine_d__4__System_Collections_Generic_IEnumerator_System_Object__get_Current(UI_SnapshotHandler__TakeSnapshotCoroutine_d__4_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// UI.SnapshotHandler.<TakeSnapshotCoroutine>d__4$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_SnapshotHandler__TakeSnapshotCoroutine_d__4__System_Collections_IEnumerator_Reset (UI_SnapshotHandler__TakeSnapshotCoroutine_d__4_o* __this, const MethodInfo* method);
// 0x1821d0450

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
// 0x180573e90

Il2CppObject*
UI_SnapshotHandler__TakeSnapshotCoroutine_d__4__System_Collections_IEnumerator_get_Current(UI_SnapshotHandler__TakeSnapshotCoroutine_d__4_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// UI.SnapshotHandler$$Awake
// il2cpp: void UI_SnapshotHandler__Awake (UI_SnapshotHandler_o* __this, const MethodInfo* method);
// 0x1821cb920

void UI_SnapshotHandler__Awake(UI_SnapshotHandler_o *__this,MethodInfo *method)

{
  System_String_o *path;
  UnityEngine_GameObject_o *pUVar1;
  Cameras_BaseCamera_o *pCVar2;
  Cameras_InGameCamera_o *value;
  
  if (Il2CppMethodInitialized_184346eae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_InGameCamera);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_BaseCamera);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Snapshot/SnapshotCamera");
    Il2CppMethodInitialized_184346eae = '\x01';
  }
  if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
  }
  path = TypeInfo_Utility_ResourcePaths->static_fields->UI;
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  pUVar1 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                     (path,"Prefabs/Snapshot/SnapshotCamera",false,
                      (MethodInfo_795F00 *)
                      MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
  if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
    pCVar2 = UnityEngine_GameObject__AddComponent_object_
                       (pUVar1,(MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_BaseCamera)
    ;
    (__this->fields).SnapshotCamera = pCVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields).SnapshotCamera,pCVar2);
    value = UnityEngine_Component__GetComponent_object_
                      ((UnityEngine_Component_o *)__this,
                       (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_InGameCamera);
    (__this->fields).InGameCamera = value;
    Il2CppCodeGenWriteBarrier(&(__this->fields).InGameCamera,value);
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
// 0x1821cbfc0

void UI_SnapshotHandler__TakeSnapshot
               (UI_SnapshotHandler_o *__this,UnityEngine_Vector3_o *position,int32_t damage,MethodInfo *method
               )

{
  float fVar1;
  Settings_GeneralSettings_o *pSVar2;
  Settings_IntSetting_o *pSVar3;
  float fVar4;
  UI_SnapshotHandler__TakeSnapshotCoroutine_d__4_o *routine;
  
  if (Il2CppMethodInitialized_184346eaf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_184346eaf = '\x01';
  }
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->GeneralSettings;
  if ((pSVar2 != (Settings_GeneralSettings_o *)0x0) &&
     (pSVar3 = (pSVar2->fields).SnapshotsMinimumDamage, pSVar3 != (Settings_IntSetting_o *)0x0)) {
    if ((pSVar3->fields)._value <= damage) {
      if (Il2CppMethodInitialized_184346eb0 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_SnapshotHandler_TakeSnapshotCoroutine_d__4);
        Il2CppMethodInitialized_184346eb0 = '\x01';
      }
      routine = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_UI_SnapshotHandler_TakeSnapshotCoroutine_d__4);
      System_Object___ctor
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)routine,(MethodInfo *)0x0);
      (routine->fields).__1__state = 0;
      (routine->fields).__4__this = __this;
      Il2CppCodeGenWriteBarrier(&(routine->fields).__4__this,__this);
      fVar4 = (position->fields).y;
      fVar1 = (position->fields).z;
      (routine->fields).position.fields.x = (position->fields).x;
      (routine->fields).position.fields.y = fVar4;
      (routine->fields).position.fields.z = fVar1;
      (routine->fields).damage = damage;
      UnityEngine_MonoBehaviour__StartCoroutine_Auto
                ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)routine,
                 (MethodInfo *)0x0);
    }
    return;
  }
  ThrowNullReferenceException();
}


// UI.SnapshotHandler$$TakeSnapshotCoroutine
// il2cpp: System_Collections_IEnumerator_o* UI_SnapshotHandler__TakeSnapshotCoroutine (UI_SnapshotHandler_o* __this, UnityEngine_Vector3_o position, int32_t damage, const MethodInfo* method);
// 0x1821cbf40

System_Collections_IEnumerator_o *
UI_SnapshotHandler__TakeSnapshotCoroutine
          (UI_SnapshotHandler_o *__this,UnityEngine_Vector3_o *position,int32_t damage,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  UI_SnapshotHandler__TakeSnapshotCoroutine_d__4_o *__this_00;
  
  if (Il2CppMethodInitialized_184346eb0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_SnapshotHandler_TakeSnapshotCoroutine_d__4);
    Il2CppMethodInitialized_184346eb0 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_SnapshotHandler_TakeSnapshotCoroutine_d__4)
  ;
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
  fVar2 = (position->fields).y;
  fVar1 = (position->fields).z;
  (__this_00->fields).position.fields.x = (position->fields).x;
  (__this_00->fields).position.fields.y = fVar2;
  (__this_00->fields).position.fields.z = fVar1;
  (__this_00->fields).damage = damage;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// UI.SnapshotHandler$$SetSnapshotPosition
// il2cpp: void UI_SnapshotHandler__SetSnapshotPosition (UI_SnapshotHandler_o* __this, UnityEngine_Vector3_o position, const MethodInfo* method);
// 0x1821cbd40

void UI_SnapshotHandler__SetSnapshotPosition
               (UI_SnapshotHandler_o *__this,UnityEngine_Vector3_o *position,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  Cameras_BaseCamera_o *pCVar5;
  Utility_BaseComponentCache_o *pUVar6;
  Cameras_InGameCamera_o *pCVar7;
  UnityEngine_Camera_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Vector3_StaticFields *pUVar8;
  UnityEngine_Skybox_o *__this_02;
  UnityEngine_Skybox_o *__this_03;
  UnityEngine_Transform_o *__this_04;
  UnityEngine_Vector3_o *pUVar9;
  UnityEngine_Material_o *value;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  UnityEngine_Vector3_Fields local_58 [6];
  
  pCVar5 = (__this->fields).SnapshotCamera;
  if ((((pCVar5 != (Cameras_BaseCamera_o *)0x0) &&
       (pUVar6 = (pCVar5->fields).Cache, pUVar6 != (Utility_BaseComponentCache_o *)0x0)) &&
      (pCVar7 = (__this->fields).InGameCamera, pCVar7 != (Cameras_InGameCamera_o *)0x0)) &&
     (__this_00 = (pCVar7->fields).Camera, __this_00 != (UnityEngine_Camera_o *)0x0)) {
    __this_01 = (pUVar6->fields).Transform;
    __this_04 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    if (__this_04 != (UnityEngine_Transform_o *)0x0) {
      pUVar9 = UnityEngine_Transform__get_position
                         ((UnityEngine_Vector3_o *)local_58,__this_04,(MethodInfo *)0x0);
      uVar1 = (position->fields).x;
      uVar3 = (position->fields).y;
      uVar2 = (pUVar9->fields).x;
      uVar4 = (pUVar9->fields).y;
      fVar13 = (pUVar9->fields).z - (position->fields).z;
      local_58[0].y = (float)uVar4 - (float)uVar3;
      local_58[0].x = (float)uVar2 - (float)uVar1;
      local_58[0].z = fVar13;
      fVar10 = (float)il2cpp_runtime_helper_180546a40(local_58,0);
      if (Il2CppMethodInitialized_18433de5f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_18433de5f = '\x01';
      }
      fVar11 = (float)il2cpp_runtime_helper_180546a40(local_58,0);
      if (fVar11 <= 1e-05) {
        pUVar8 = TypeInfo_UnityEngine_Vector3->static_fields;
        fVar12 = (pUVar8->zeroVector).fields.x;
        fVar14 = (pUVar8->zeroVector).fields.y;
        fVar13 = (pUVar8->zeroVector).fields.z;
      }
      else {
        fVar12 = ((float)uVar2 - (float)uVar1) / fVar11;
        fVar14 = ((float)uVar4 - (float)uVar3) / fVar11;
        fVar13 = fVar13 / fVar11;
      }
      if (__this_01 != (UnityEngine_Transform_o *)0x0) {
        fVar11 = 20.0;
        if (20.0 <= fVar10) {
          fVar11 = fVar10;
        }
        local_58[0].z = fVar13 * fVar11 + (position->fields).z;
        local_58[0].y = fVar14 * fVar11 + (position->fields).y;
        local_58[0].x = fVar12 * fVar11 + (position->fields).x;
        UnityEngine_Transform__set_position(__this_01,(UnityEngine_Vector3_o *)local_58,(MethodInfo *)0x0);
        local_58[0].x = (position->fields).x;
        local_58[0].y = (position->fields).y;
        local_58[0].z = (position->fields).z;
        UnityEngine_Transform__LookAt_2f599f0(__this_01,(UnityEngine_Vector3_o *)local_58,(MethodInfo *)0x0);
        pCVar5 = (__this->fields).SnapshotCamera;
        if (((pCVar5 != (Cameras_BaseCamera_o *)0x0) &&
            (pCVar7 = (__this->fields).InGameCamera, pCVar7 != (Cameras_InGameCamera_o *)0x0)) &&
           (__this_02 = (pCVar7->fields).Skybox, __this_02 != (UnityEngine_Skybox_o *)0x0)) {
          __this_03 = (pCVar5->fields).Skybox;
          value = UnityEngine_Skybox__get_material(__this_02,(MethodInfo *)0x0);
          if (__this_03 != (UnityEngine_Skybox_o *)0x0) {
            UnityEngine_Skybox__set_material(__this_03,value,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.SnapshotHandler$$RTImage
// il2cpp: UnityEngine_Texture2D_o* UI_SnapshotHandler__RTImage (UI_SnapshotHandler_o* __this, const MethodInfo* method);
// 0x1821cba60
// eh: try 0x1821cbbce..0x1821cbd3b -> pad 0x1833318f0 (+1 call sites) catch Il2CppExceptionWrapper [managed catch: runtime default class]
// asm: 45 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821cbcc8: lea rcx, [rip + 0x1eb2891]  ; TypeInfo_UnityEngine_Texture2D
// asm:   0x1821cbccf: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1821cbcd4: mov rcx, rax
// asm:   0x1821cbcd7: call 0x1804170d0  ; il2cpp_runtime_helper_1804170d0()
// asm:   0x1821cbcdc: mov rbx, rax
// asm:   0x1821cbcdf: xor r9d, r9d
// asm:   0x1821cbce2: mov edx, 1
// asm:   0x1821cbce7: mov r8d, edx
// asm:   0x1821cbcea: mov rcx, rax
// asm:   0x1821cbced: call 0x182efbf30  ; UnityEngine_Texture2D___ctor()
// asm:   0x1821cbcf2: test rbx, rbx
// asm:   0x1821cbcf5: je 0x1821cbd24
// asm:   0x1821cbcf7: movdqa xmm0, xmmword ptr [rip + 0x118dbd1]
// asm:   0x1821cbcff: movaps xmmword ptr [rsp + 0x40], xmm0
// asm:   0x1821cbd04: mov qword ptr [rsp + 0x20], 0
// asm:   0x1821cbd0d: lea r9, [rsp + 0x40]
// asm:   0x1821cbd12: xor r8d, r8d
// asm:   0x1821cbd15: xor edx, edx
// asm:   0x1821cbd17: mov rcx, rbx
// asm:   0x1821cbd1a: call 0x182efb610  ; UnityEngine_Texture2D__SetPixel()
// asm:   0x1821cbd1f: mov rax, rbx
// asm:   0x1821cbd22: jmp 0x1821cbcb5
// asm:   0x1833318f0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x1833318f5: push rbx
// asm:   0x1833318f6: push rbp
// asm:   0x1833318f7: sub rsp, 0x38
// asm:   0x1833318fb: mov rbp, rdx
// asm:   0x1833318fe: mov rbx, qword ptr [rbp + 0x38]
// asm:   0x183331902: mov rdx, qword ptr [rbx]
// asm:   0x183331905: mov rdx, qword ptr [rdx]
// asm:   0x183331908: mov rcx, qword ptr [rip + 0x10234c1]
// asm:   0x18333190f: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x183331914: test al, al
// asm:   0x183331916: je 0x183331924
// asm:   0x183331918: movabs rax, 0
// asm:   0x183331922: jmp 0x18333193c
// asm:   0x183331924: mov rax, qword ptr [rbx]
// asm:   0x183331927: mov qword ptr [rbp + 0x30], rax
// asm:   0x18333192b: lea rdx, [rip + 0xcaa656]
// asm:   0x183331932: lea rcx, [rbp + 0x30]
// asm:   0x183331936: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x18333193c: add rsp, 0x38
// asm:   0x183331940: pop rbp
// asm:   0x183331941: pop rbx
// asm:   0x183331942: ret 

UnityEngine_Texture2D_o * UI_SnapshotHandler__RTImage(UI_SnapshotHandler_o *__this,MethodInfo *method)

{
  Cameras_BaseCamera_o *pCVar1;
  UnityEngine_Camera_o *__this_00;
  int32_t iVar2;
  int32_t iVar3;
  int32_t iVar4;
  UnityEngine_RenderTexture_o *value;
  UnityEngine_RenderTexture_o *pUVar5;
  UnityEngine_Texture2D_o *__this_01;
  int iVar6;
  UnityEngine_Rect_Fields local_58 [2];
  
  if (Il2CppMethodInitialized_184346eb1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Texture2D);
    Il2CppMethodInitialized_184346eb1 = '\x01';
  }
  pCVar1 = (__this->fields).SnapshotCamera;
  if (pCVar1 != (Cameras_BaseCamera_o *)0x0) {
    __this_00 = (pCVar1->fields).Camera;
    value = UnityEngine_RenderTexture__get_active((MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_Camera_o *)0x0) {
      pUVar5 = UnityEngine_Camera__get_targetTexture(__this_00,(MethodInfo *)0x0);
      UnityEngine_RenderTexture__set_active(pUVar5,(MethodInfo *)0x0);
      UnityEngine_Camera__Render(__this_00,(MethodInfo *)0x0);
      pUVar5 = UnityEngine_Camera__get_targetTexture(__this_00,(MethodInfo *)0x0);
      if (pUVar5 != (UnityEngine_RenderTexture_o *)0x0) {
        iVar2 = (*(pUVar5->klass->vtable)._5_get_width.methodPtr)
                          (pUVar5,(pUVar5->klass->vtable)._5_get_width.method);
        pUVar5 = UnityEngine_Camera__get_targetTexture(__this_00,(MethodInfo *)0x0);
        if (pUVar5 != (UnityEngine_RenderTexture_o *)0x0) {
          iVar3 = (*(pUVar5->klass->vtable)._7_get_height.methodPtr)
                            (pUVar5,(pUVar5->klass->vtable)._7_get_height.method);
          __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Texture2D);
          UnityEngine_Texture2D___ctor_2efc630(__this_01,iVar2,iVar3,3,false,(MethodInfo *)0x0);
          pUVar5 = UnityEngine_Camera__get_targetTexture(__this_00,(MethodInfo *)0x0);
          if (pUVar5 != (UnityEngine_RenderTexture_o *)0x0) {
            iVar2 = (*(pUVar5->klass->vtable)._5_get_width.methodPtr)
                              (pUVar5,(pUVar5->klass->vtable)._5_get_width.method);
            pUVar5 = UnityEngine_Camera__get_targetTexture(__this_00,(MethodInfo *)0x0);
            if (pUVar5 != (UnityEngine_RenderTexture_o *)0x0) {
              iVar6 = (int)((float)iVar2 * 0.04);
              iVar2 = (*(pUVar5->klass->vtable)._5_get_width.methodPtr)
                                (pUVar5,(pUVar5->klass->vtable)._5_get_width.method);
              if (__this_01 == (UnityEngine_Texture2D_o *)0x0) {
                ThrowNullReferenceException();
              }
              local_58[0].m_XMin = 1.0;
              local_58[0].m_YMin = 1.0;
              local_58[0].m_Width = 1.0;
              local_58[0].m_Height = 1.0;
              UnityEngine_Texture2D__SetPixel(__this_01,0,0,(UnityEngine_Color_o *)local_58,(MethodInfo *)0x0)
              ;
              pUVar5 = UnityEngine_Camera__get_targetTexture(__this_00,(MethodInfo *)0x0);
              if (pUVar5 != (UnityEngine_RenderTexture_o *)0x0) {
                iVar3 = (*(pUVar5->klass->vtable)._5_get_width.methodPtr)
                                  (pUVar5,(pUVar5->klass->vtable)._5_get_width.method);
                pUVar5 = UnityEngine_Camera__get_targetTexture(__this_00,(MethodInfo *)0x0);
                if (pUVar5 != (UnityEngine_RenderTexture_o *)0x0) {
                  iVar4 = (*(pUVar5->klass->vtable)._7_get_height.methodPtr)
                                    (pUVar5,(pUVar5->klass->vtable)._7_get_height.method);
                  local_58[0].m_YMin = (float)iVar6;
                  local_58[0].m_XMin = (float)iVar6;
                  local_58[0].m_Height = (float)(iVar4 - iVar6);
                  local_58[0].m_Width = (float)(iVar3 - iVar6);
                  UnityEngine_Texture2D__ReadPixels_2efaf30
                            (__this_01,(UnityEngine_Rect_o *)local_58,(int)((float)iVar2 * 0.02),
                             (int)((float)iVar2 * 0.02),(MethodInfo *)0x0);
                  UnityEngine_RenderTexture__set_active(value,(MethodInfo *)0x0);
                  return __this_01;
                }
                ThrowNullReferenceException();
              }
              ThrowNullReferenceException();
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
// 0x180528540

void
UI_SnapshotHandler___ctor(UI_SnapshotHandler_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


