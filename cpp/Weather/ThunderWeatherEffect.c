// Type: Weather.ThunderWeatherEffect
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Weather/ThunderWeatherEffect.cs
// Prior real C# source (older reference): Assets/Scripts/Weather/ThunderWeatherEffect.cs
// --------------------------------

// Weather.ThunderWeatherEffect$$get__positionOffset
// il2cpp: UnityEngine_Vector3_o Weather_ThunderWeatherEffect__get__positionOffset (Weather_ThunderWeatherEffect_o* __this, const MethodInfo* method);
// 0x181da1240

UnityEngine_Vector3_o
Weather_ThunderWeatherEffect__get__positionOffset(Weather_ThunderWeatherEffect_o* __this, MethodInfo* method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  UnityEngine_Vector3_StaticFields *pUVar3;
  
  if (Il2CppMethodInitialized_18433de5c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433de5c = '\x01';
  }
  pUVar3 = TypeInfo_UnityEngine_Vector3->static_fields;
  uVar1 = (pUVar3->upVector).fields.y;
  uVar2 = (pUVar3->upVector).fields.z;
  (__return_storage_ptr__->fields).x = (pUVar3->upVector).fields.x * 0.0;
  (__return_storage_ptr__->fields).y = (float)uVar1 * 0.0;
  (__return_storage_ptr__->fields).z = (float)uVar2 * 0.0;
  return __return_storage_ptr__;
}


// Weather.ThunderWeatherEffect$$OnFinishInit
// il2cpp: void Weather_ThunderWeatherEffect__OnFinishInit (const MethodInfo* method);
// 0x181daf9b0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181dafabf: nop 

void Weather_ThunderWeatherEffect__OnFinishInit(MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int iVar13;
  UnityEngine_Vector3_StaticFields *pUVar14;
  Settings_GraphicsSettings_o *pSVar15;
  Settings_IntSetting_o *pSVar16;
  System_String_o *path;
  System_Collections_Generic_List_List_LightningParticle___o *pSVar17;
  System_Collections_Generic_List_LightningParticle__o *__this;
  UnityEngine_GameObject_o *__this_00;
  Weather_LightningParticle_o *__this_01;
  UnityEngine_Object_o *target;
  int iVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  UnityEngine_Vector3_o local_f8;
  UnityEngine_Vector3_Fields local_e8 [14];
  
  if (Il2CppMethodInitialized_184344923 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_LightningParticle);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_LightningParticle_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_List_LightningParticle_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_LightningParticle_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_LightningParticle);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_ThunderWeatherEffect);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/LightningParticle");
    Il2CppMethodInitialized_184344923 = '\x01';
  }
  iVar19 = 0;
  while( true ) {
    if (Il2CppMethodInitialized_18433de5c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_18433de5c = '\x01';
    }
    pUVar14 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar1 = (pUVar14->upVector).fields.x;
    fVar2 = (pUVar14->upVector).fields.y;
    fVar3 = (pUVar14->upVector).fields.z;
    if (Il2CppMethodInitialized_1843445b8 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_1843445b8 = '\x01';
    }
    pUVar14 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar4 = (pUVar14->rightVector).fields.x;
    fVar5 = (pUVar14->rightVector).fields.y;
    fVar6 = (pUVar14->rightVector).fields.z;
    fVar20 = UnityEngine_Random__Range(-1000.0,1000.0,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_18434494b == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_18434494b = '\x01';
    }
    pUVar14 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar7 = (pUVar14->downVector).fields.x;
    fVar8 = (pUVar14->downVector).fields.y;
    fVar9 = (pUVar14->downVector).fields.z;
    if (Il2CppMethodInitialized_1843445b8 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_1843445b8 = '\x01';
    }
    pUVar14 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar10 = (pUVar14->rightVector).fields.x;
    fVar11 = (pUVar14->rightVector).fields.y;
    fVar12 = (pUVar14->rightVector).fields.z;
    fVar21 = UnityEngine_Random__Range(-1000.0,1000.0,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_18433dee7 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
      Il2CppMethodInitialized_18433dee7 = '\x01';
    }
    if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    }
    pSVar15 = TypeInfo_Settings_SettingsManager->static_fields->GraphicsSettings;
    if ((pSVar15 == (Settings_GraphicsSettings_o *)0x0) ||
       (pSVar16 = (pSVar15->fields).WeatherEffects, pSVar16 == (Settings_IntSetting_o *)0x0)) break;
    iVar13 = (pSVar16->fields)._value;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_LightningParticle);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_LowLevelList_T__o *)__this,
               (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_LightningParticle_ctor);
    iVar18 = 0;
    do {
      if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
      }
      path = TypeInfo_Utility_ResourcePaths->static_fields->Weather;
      if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
      }
      __this_00 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                            (path,"Prefabs/LightningParticle",false,
                             (MethodInfo_795F00 *)
                             MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
      if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto label_181dafec8;
      __this_01 = UnityEngine_GameObject__AddComponent_object_
                            (__this_00,
                             (MethodInfo_6F4D60 *)
                             MethodInfo_UnityEngine_GameObject_AddComponent_LightningParticle);
      if (__this_01 == (Weather_LightningParticle_o *)0x0) goto label_181dafec8;
      target = (UnityEngine_Object_o *)
               UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      UnityEngine_Object__DontDestroyOnLoad(target,(MethodInfo *)0x0);
      local_e8[0].y = fVar5 * fVar20 + fVar2 * 1500.0;
      local_e8[0].x = fVar4 * fVar20 + fVar1 * 1500.0;
      local_f8.fields.x = fVar10 * fVar21 + fVar7 * 300.0;
      local_f8.fields.y = fVar11 * fVar21 + fVar8 * 300.0;
      local_f8.fields.z = fVar12 * fVar21 + fVar9 * 300.0;
      local_e8[0].z = fVar6 * fVar20 + fVar3 * 1500.0;
      Weather_LightningParticle__Setup
                (__this_01,(UnityEngine_Vector3_o *)local_e8,&local_f8,(iVar13 != 2) + 8,(MethodInfo *)0x0);
      if (__this == (System_Collections_Generic_List_LightningParticle__o *)0x0) goto label_181dafec8;
      il2cpp_runtime_helper_180012890(__this);
      Weather_LightningParticle__Disable(__this_01,(MethodInfo *)0x0);
      iVar18 = iVar18 + 1;
    } while (iVar18 < 4);
    if ((TypeInfo_Weather_ThunderWeatherEffect->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_ThunderWeatherEffect);
    }
    pSVar17 = TypeInfo_Weather_ThunderWeatherEffect->static_fields->LightningPool;
    if (pSVar17 == (System_Collections_Generic_List_List_LightningParticle___o *)0x0) break;
    il2cpp_runtime_helper_180012890(pSVar17,__this);
    iVar19 = iVar19 + 1;
    if (9 < iVar19) {
      return;
    }
  }
label_181dafec8:
  ThrowNullReferenceException();
}


// Weather.ThunderWeatherEffect$$Randomize
// il2cpp: void Weather_ThunderWeatherEffect__Randomize (Weather_ThunderWeatherEffect_o* __this, const MethodInfo* method);
// 0x180547020

void
Weather_ThunderWeatherEffect__Randomize(Weather_ThunderWeatherEffect_o* __this, MethodInfo* method)

{
  return;
}


// Weather.ThunderWeatherEffect$$Setup
// il2cpp: void Weather_ThunderWeatherEffect__Setup (Weather_ThunderWeatherEffect_o* __this, UnityEngine_Transform_o* parent, const MethodInfo* method);
// 0x181dae3a0

void
Weather_ThunderWeatherEffect__Setup(Weather_ThunderWeatherEffect_o* __this, UnityEngine_Transform_o* parent, MethodInfo* method)

{
  Weather_BaseWeatherEffect__Setup((Weather_BaseWeatherEffect_o *)__this,parent,(MethodInfo *)0x0);
  return;
}


// Weather.ThunderWeatherEffect$$SetLevel
// il2cpp: void Weather_ThunderWeatherEffect__SetLevel (Weather_ThunderWeatherEffect_o* __this, float level, const MethodInfo* method);
// 0x181dafed0

void Weather_ThunderWeatherEffect__SetLevel
               (Weather_ThunderWeatherEffect_o *__this,float level,MethodInfo *method)

{
  MethodInfo *pMVar1;
  _func_36 *UNRECOVERED_JUMPTABLE_00;
  
  (__this->fields)._level = level;
  if (level <= 0.0) {
    return;
  }
  pMVar1 = (__this->klass->vtable)._14_SetActiveAudio.method;
  UNRECOVERED_JUMPTABLE_00 = (__this->klass->vtable)._14_SetActiveAudio.methodPtr;
  if (0.5 <= level) {
    (*UNRECOVERED_JUMPTABLE_00)(__this,1,1.0,pMVar1);
    return;
  }
  (*UNRECOVERED_JUMPTABLE_00)(__this,0,1.0,pMVar1);
  return;
}


// Weather.ThunderWeatherEffect$$FixedUpdate
// il2cpp: void Weather_ThunderWeatherEffect__FixedUpdate (Weather_ThunderWeatherEffect_o* __this, const MethodInfo* method);
// 0x181daf930

void Weather_ThunderWeatherEffect__FixedUpdate(Weather_ThunderWeatherEffect_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  fVar2 = (__this->fields)._lightningWaitTime;
  fVar1 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
  fVar2 = fVar2 - fVar1;
  (__this->fields)._lightningWaitTime = fVar2;
  if (fVar2 <= 0.0) {
    fVar2 = 20.0 - (__this->fields)._level * 15.0;
    (__this->fields)._lightningWaitTime = fVar2;
    fVar2 = UnityEngine_Random__Range(fVar2 * 0.5,fVar2 * 1.5,(MethodInfo *)0x0);
    (__this->fields)._lightningWaitTime = fVar2;
    Weather_ThunderWeatherEffect__CreateLightning(__this,(MethodInfo *)0x0);
  }
  return;
}


// Weather.ThunderWeatherEffect$$CreateLightning
// il2cpp: void Weather_ThunderWeatherEffect__CreateLightning (Weather_ThunderWeatherEffect_o* __this, const MethodInfo* method);
// 0x181daf440
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181daf74b: nop dword ptr [rax + rax]

void Weather_ThunderWeatherEffect__CreateLightning(Weather_ThunderWeatherEffect_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  System_Collections_Generic_List_List_LightningParticle___o *__this_00;
  Cameras_BaseCamera_o *pCVar3;
  UnityEngine_Camera_o *__this_01;
  UnityEngine_Vector3_StaticFields *pUVar4;
  UnityEngine_LineRenderer_o *__this_02;
  int32_t iVar5;
  System_Collections_Generic_List_object__o *__this_03;
  UnityEngine_Vector3_o *pUVar6;
  UnityEngine_Quaternion_o *pUVar7;
  UnityEngine_Transform_o *pUVar8;
  Weather_LightningParticle_o *pWVar9;
  UnityEngine_GameObject_o *__this_04;
  Weather_LightningParticle__StrikeCoroutine_d__20_o *routine;
  int32_t index;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  UnityEngine_Vector3_o local_98;
  UnityEngine_Color_Fields local_88;
  UnityEngine_Color_Fields local_78 [5];
  
  if (Il2CppMethodInitialized_184344924 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_List_LightningParticle_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_LightningParticle_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_List_LightningParticle_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_ThunderWeatherEffect);
    Il2CppMethodInitialized_184344924 = '\x01';
  }
  if ((TypeInfo_Weather_ThunderWeatherEffect->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_ThunderWeatherEffect);
  }
  __this_00 = TypeInfo_Weather_ThunderWeatherEffect->static_fields->LightningPool;
  if (__this_00 != (System_Collections_Generic_List_List_LightningParticle___o *)0x0) {
    iVar5 = UnityEngine_Random__RandomRangeInt(0,(__this_00->fields)._size,(MethodInfo *)0x0);
    __this_03 = (System_Collections_Generic_List_object__o *)
                System_Collections_Generic_List_object___System_Collections_IList_get_Item
                          ((System_Collections_Generic_List_object__o *)__this_00,iVar5,
                           (MethodInfo_92B830 *)
                           MethodInfo_System_Collections_Generic_List_List_LightningParticle_get_Item);
    iVar5 = UnityEngine_Random__RandomRangeInt(1,4,(MethodInfo *)0x0);
    pCVar3 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
    if ((pCVar3 != (Cameras_BaseCamera_o *)0x0) &&
       (__this_01 = (pCVar3->fields).Camera, __this_01 != (UnityEngine_Camera_o *)0x0)) {
      fVar10 = UnityEngine_Camera__get_fieldOfView(__this_01,(MethodInfo *)0x0);
      pUVar8 = (__this->fields)._parent;
      if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
        pUVar6 = UnityEngine_Transform__get_forward
                           ((UnityEngine_Vector3_o *)&local_88,pUVar8,(MethodInfo *)0x0);
        pUVar8 = (__this->fields)._parent;
        if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
          fVar12 = (pUVar6->fields).x;
          pUVar6 = UnityEngine_Transform__get_forward
                             ((UnityEngine_Vector3_o *)&local_88,pUVar8,(MethodInfo *)0x0);
          local_98.fields.y = 0.0;
          fVar13 = (pUVar6->fields).z;
          local_98.fields.x = fVar12;
          local_98.fields.z = fVar13;
          if (Il2CppMethodInitialized_18433de5f == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
            Il2CppMethodInitialized_18433de5f = '\x01';
          }
          fVar11 = (float)il2cpp_runtime_helper_180546a40(&local_98,0);
          if (fVar11 <= 1e-05) {
            pUVar4 = TypeInfo_UnityEngine_Vector3->static_fields;
            fVar12 = (pUVar4->zeroVector).fields.x;
            fVar14 = (pUVar4->zeroVector).fields.y;
            fVar13 = (pUVar4->zeroVector).fields.z;
          }
          else {
            fVar12 = fVar12 / fVar11;
            fVar14 = 0.0 / fVar11;
            fVar13 = fVar13 / fVar11;
          }
          fVar10 = UnityEngine_Random__Range(-fVar10 * 0.5,fVar10 * 0.5,(MethodInfo *)0x0);
          if (Il2CppMethodInitialized_18433de5c == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
            Il2CppMethodInitialized_18433de5c = '\x01';
          }
          pUVar4 = TypeInfo_UnityEngine_Vector3->static_fields;
          local_88.r = (pUVar4->upVector).fields.x;
          local_88.g = (pUVar4->upVector).fields.y;
          local_88.b = (pUVar4->upVector).fields.z;
          pUVar7 = UnityEngine_Quaternion__Internal_AngleAxis
                             ((UnityEngine_Quaternion_o *)local_78,fVar10,(UnityEngine_Vector3_o *)&local_88,
                              (MethodInfo *)0x0);
          local_78[0].r = (pUVar7->fields).x;
          local_78[0].g = (pUVar7->fields).y;
          local_78[0].b = (pUVar7->fields).z;
          local_78[0].a = (pUVar7->fields).w;
          local_98.fields.x = fVar12;
          local_98.fields.y = fVar14;
          local_98.fields.z = fVar13;
          UnityEngine_Quaternion__op_Multiply_2f08cb0
                    ((UnityEngine_Vector3_o *)&local_88,(UnityEngine_Quaternion_o *)local_78,&local_98,
                     (MethodInfo *)0x0);
          fVar10 = UnityEngine_Random__Range(900.0,1400.0,(MethodInfo *)0x0);
          pUVar8 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
            pUVar6 = UnityEngine_Transform__get_position
                               ((UnityEngine_Vector3_o *)&local_88,pUVar8,(MethodInfo *)0x0);
            fVar11 = (pUVar6->fields).x;
            fVar1 = (pUVar6->fields).y;
            fVar2 = (pUVar6->fields).z;
            if (0 < iVar5) {
              index = 0;
              if (__this_03 == (System_Collections_Generic_List_object__o *)0x0) goto label_181daf920;
              do {
                pWVar9 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                   (__this_03,index,
                                    (MethodInfo_92B830 *)
                                    MethodInfo_System_Collections_Generic_List_LightningParticle_get_Item);
                if ((pWVar9 == (Weather_LightningParticle_o *)0x0) ||
                   (pUVar8 = UnityEngine_Component__get_transform
                                       ((UnityEngine_Component_o *)pWVar9,(MethodInfo *)0x0),
                   pUVar8 == (UnityEngine_Transform_o *)0x0)) goto label_181daf920;
                local_98.fields.x = fVar12 * fVar10 + fVar11;
                local_98.fields.y = fVar14 * fVar10 + fVar1;
                local_98.fields.z = fVar13 * fVar10 + fVar2;
                UnityEngine_Transform__set_position(pUVar8,&local_98,(MethodInfo *)0x0);
                pWVar9 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                   (__this_03,index,
                                    (MethodInfo_92B830 *)
                                    MethodInfo_System_Collections_Generic_List_LightningParticle_get_Item);
                if ((pWVar9 == (Weather_LightningParticle_o *)0x0) ||
                   (pUVar8 = UnityEngine_Component__get_transform
                                       ((UnityEngine_Component_o *)pWVar9,(MethodInfo *)0x0),
                   pUVar8 == (UnityEngine_Transform_o *)0x0)) goto label_181daf920;
                UnityEngine_Transform__LookAt(pUVar8,(__this->fields)._parent,(MethodInfo *)0x0);
                pWVar9 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                   (__this_03,index,
                                    (MethodInfo_92B830 *)
                                    MethodInfo_System_Collections_Generic_List_LightningParticle_get_Item);
                if ((pWVar9 == (Weather_LightningParticle_o *)0x0) ||
                   (__this_02 = (pWVar9->fields)._lineRenderer, __this_02 == (UnityEngine_LineRenderer_o *)0x0
                   )) goto label_181daf920;
                local_78[0].r = 0.0;
                local_78[0].g = 0.0;
                local_78[0].b = 0.0;
                local_78[0].a = 0.0;
                local_88.r = 0.0;
                local_88.g = 0.0;
                local_88.b = 0.0;
                local_88.a = 0.0;
                UnityEngine_LineRenderer__SetColors
                          (__this_02,(UnityEngine_Color_o *)&local_88,(UnityEngine_Color_o *)local_78,
                           (MethodInfo *)0x0);
                __this_04 = UnityEngine_Component__get_gameObject
                                      ((UnityEngine_Component_o *)pWVar9,(MethodInfo *)0x0);
                if (__this_04 == (UnityEngine_GameObject_o *)0x0) goto label_181daf920;
                UnityEngine_GameObject__SetActive(__this_04,true,(MethodInfo *)0x0);
                pWVar9 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                   (__this_03,index,
                                    (MethodInfo_92B830 *)
                                    MethodInfo_System_Collections_Generic_List_LightningParticle_get_Item);
                if (pWVar9 == (Weather_LightningParticle_o *)0x0) goto label_181daf920;
                if (Il2CppMethodInitialized_18434491a == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata
                            (&TypeInfo_Weather_LightningParticle_StrikeCoroutine_d__20);
                  Il2CppMethodInitialized_18434491a = '\x01';
                }
                routine = il2cpp_codegen_object_new
                                    ((Il2CppClass *)TypeInfo_Weather_LightningParticle_StrikeCoroutine_d__20);
                System_Object___ctor
                          ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)routine,
                           (MethodInfo *)0x0);
                (routine->fields).__1__state = 0;
                (routine->fields).__4__this = pWVar9;
                Il2CppCodeGenWriteBarrier(&(routine->fields).__4__this,pWVar9);
                (routine->fields).sound = index == 0;
                UnityEngine_MonoBehaviour__StartCoroutine_Auto
                          ((UnityEngine_MonoBehaviour_o *)pWVar9,(System_Collections_IEnumerator_o *)routine,
                           (MethodInfo *)0x0);
                index = index + 1;
              } while (index < iVar5);
            }
            return;
          }
        }
      }
    }
  }
label_181daf920:
  ThrowNullReferenceException();
}


// Weather.ThunderWeatherEffect$$.ctor
// il2cpp: void Weather_ThunderWeatherEffect___ctor (Weather_ThunderWeatherEffect_o* __this, const MethodInfo* method);
// 0x181daffb0

void Weather_ThunderWeatherEffect___ctor(Weather_ThunderWeatherEffect_o *__this,MethodInfo *method)

{
  (__this->fields)._lightningWaitTime = 15.0;
  Weather_BaseWeatherEffect___ctor((Weather_BaseWeatherEffect_o *)__this,(MethodInfo *)0x0);
  return;
}


// Weather.ThunderWeatherEffect$$.cctor
// il2cpp: void Weather_ThunderWeatherEffect___cctor (const MethodInfo* method);
// 0x181daff20

void Weather_ThunderWeatherEffect___cctor(MethodInfo *method)

{
  System_Collections_Generic_List_List_LightningParticle___o *__this;
  
  if (Il2CppMethodInitialized_184344925 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_List_LightningParticle_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_List_LightningParticle);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_ThunderWeatherEffect);
    Il2CppMethodInitialized_184344925 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_List_LightningParticle);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_List_LightningParticle_ctor);
  TypeInfo_Weather_ThunderWeatherEffect->static_fields->LightningPool = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Weather_ThunderWeatherEffect->static_fields->LightningPool,__this);
  return;
}


