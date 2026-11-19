// Type: Weather.ThunderWeatherEffect
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Weather/ThunderWeatherEffect.cs
// Prior real C# source (older reference): Assets/Scripts/Weather/ThunderWeatherEffect.cs
// --------------------------------

// Weather.ThunderWeatherEffect$$get__positionOffset
// il2cpp: UnityEngine_Vector3_o Weather_ThunderWeatherEffect__get__positionOffset (Weather_ThunderWeatherEffect_o* __this, const MethodInfo* method);
// 0x58568e0

UnityEngine_Vector3_o
Weather_ThunderWeatherEffect__get__positionOffset(Weather_ThunderWeatherEffect_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  UnityEngine_Vector3_StaticFields *pUVar3;
  UnityEngine_Vector3_o UVar4;
  
  if (Il2CppMethodInitialized_0753e72c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e72c = '\x01';
  }
  pUVar3 = TypeInfo_UnityEngine_Vector3->static_fields;
  uVar1 = (pUVar3->upVector).fields.x;
  uVar2 = (pUVar3->upVector).fields.y;
  UVar4.fields.x = (float)uVar1 * 0.0;
  UVar4.fields.y = (float)uVar2 * 0.0;
  UVar4.fields.z = (pUVar3->upVector).fields.z * 0.0;
  return (UnityEngine_Vector3_o)UVar4.fields;
}


// Weather.ThunderWeatherEffect$$OnFinishInit
// il2cpp: void Weather_ThunderWeatherEffect__OnFinishInit (const MethodInfo* method);
// 0x5856930
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5856ef7: jmp 0x5856f48

void Weather_ThunderWeatherEffect__OnFinishInit(MethodInfo *method)

{
  int32_t *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint32_t uVar14;
  uint uVar15;
  Settings_GraphicsSettings_o *pSVar16;
  Settings_IntSetting_o *pSVar17;
  System_String_o *path;
  UnityEngine_LineRenderer_o *__this;
  Weather_LightningParticle_array *pWVar18;
  System_Collections_Generic_List_List_LightningParticle___o *__this_00;
  System_Collections_Generic_List_LightningParticle__array *pSVar19;
  int iVar20;
  UnityEngine_Vector3_StaticFields *pUVar21;
  System_Collections_Generic_List_LightningParticle__o *__this_01;
  UnityEngine_GameObject_o *__this_02;
  MethodInfo *pMVar22;
  UnityEngine_Object_o *target;
  System_Collections_Generic_List_Vector3__o *__this_03;
  int iVar23;
  MethodInfo *pMVar24;
  MethodInfo *pMVar25;
  int32_t index;
  float fVar26;
  float fVar27;
  UnityEngine_Vector3_o start;
  UnityEngine_Vector3_o UVar28;
  float local_98;
  float fStack_94;
  float local_58;
  float fStack_54;
  
  if (Il2CppMethodInitialized_0754507b == '\0') {
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
    Il2CppMethodInitialized_0754507b = '\x01';
  }
  iVar20 = 0;
  while( true ) {
    if (Il2CppMethodInitialized_0753e72c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_0753e72c = '\x01';
    }
    pUVar21 = TypeInfo_UnityEngine_Vector3->static_fields;
    uVar6 = (pUVar21->upVector).fields.x;
    uVar10 = (pUVar21->upVector).fields.y;
    fVar2 = (pUVar21->upVector).fields.z;
    if (Il2CppMethodInitialized_07544d56 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_07544d56 = '\x01';
      pUVar21 = TypeInfo_UnityEngine_Vector3->static_fields;
    }
    uVar7 = (pUVar21->rightVector).fields.x;
    uVar11 = (pUVar21->rightVector).fields.y;
    fVar3 = (pUVar21->rightVector).fields.z;
    fVar26 = UnityEngine_Random__Range(-1000.0,1000.0,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_075450a5 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_075450a5 = '\x01';
    }
    pUVar21 = TypeInfo_UnityEngine_Vector3->static_fields;
    uVar8 = (pUVar21->downVector).fields.x;
    uVar12 = (pUVar21->downVector).fields.y;
    fVar4 = (pUVar21->downVector).fields.z;
    if (Il2CppMethodInitialized_07544d56 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_07544d56 = '\x01';
      pUVar21 = TypeInfo_UnityEngine_Vector3->static_fields;
    }
    uVar9 = (pUVar21->rightVector).fields.x;
    uVar13 = (pUVar21->rightVector).fields.y;
    fVar5 = (pUVar21->rightVector).fields.z;
    fVar27 = UnityEngine_Random__Range(-1000.0,1000.0,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_0753e7b7 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
      Il2CppMethodInitialized_0753e7b7 = '\x01';
      uVar14 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
    }
    else {
      uVar14 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
    }
    if (uVar14 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    }
    pSVar16 = TypeInfo_Settings_SettingsManager->static_fields->GraphicsSettings;
    if ((pSVar16 == (Settings_GraphicsSettings_o *)0x0) ||
       (pSVar17 = (pSVar16->fields).WeatherEffects, pSVar17 == (Settings_IntSetting_o *)0x0)) break;
    start.fields.x = (float)uVar6 * 1500.0 + (float)uVar7 * fVar26;
    start.fields.y = (float)uVar10 * 1500.0 + (float)uVar11 * fVar26;
    local_98 = (float)((pSVar17->fields)._value == 2 ^ 9);
    __this_01 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_LightningParticle);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)__this_01,
               (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_LightningParticle_ctor);
    iVar23 = 0;
    do {
      if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
      }
      path = TypeInfo_Utility_ResourcePaths->static_fields->Weather;
      if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
      }
      __this_02 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                            (path,"Prefabs/LightningParticle",false,false,
                             (MethodInfo_3665790 *)
                             MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
      if ((__this_02 == (UnityEngine_GameObject_o *)0x0) ||
         (pMVar22 = (MethodInfo *)
                    UnityEngine_GameObject__AddComponent_object_
                              (__this_02,
                               (MethodInfo_353B6A0 *)
                               MethodInfo_UnityEngine_GameObject_AddComponent_LightningParticle),
         pMVar22 == (MethodInfo *)0x0)) goto label_05856f5a;
      target = (UnityEngine_Object_o *)
               UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pMVar22,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      pMVar25 = (MethodInfo *)0x0;
      UnityEngine_Object__DontDestroyOnLoad(target,(MethodInfo *)0x0);
      if (Il2CppMethodInitialized_07545071 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_LightningParticle);
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_List_Vector3_get_Count);
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
        Il2CppMethodInitialized_07545071 = '\x01';
      }
      if ((TypeInfo_Weather_LightningParticle->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_LightningParticle);
      }
      UVar28.fields.y = (float)uVar12 * 300.0 + (float)uVar13 * fVar27;
      UVar28.fields.x = (float)uVar8 * 300.0 + (float)uVar9 * fVar27;
      start.fields.z = fVar2 * 1500.0 + fVar3 * fVar26;
      UVar28.fields.z = fVar4 * 300.0 + fVar5 * fVar27;
      __this_03 = Weather_LightningParticle__GenerateLightningBoltPositions
                            (start,UVar28,(int32_t)local_98,0.0,pMVar25);
      if ((__this_03 == (System_Collections_Generic_List_Vector3__o *)0x0) ||
         ((UnityEngine_LineRenderer_o *)pMVar22->parameters == (UnityEngine_LineRenderer_o *)0x0))
      goto label_05856f5a;
      UnityEngine_LineRenderer__SetVertexCount
                ((UnityEngine_LineRenderer_o *)pMVar22->parameters,(__this_03->fields)._size,(MethodInfo *)0x0
                );
      if (0 < (__this_03->fields)._size) {
        index = 0;
        do {
          __this = (UnityEngine_LineRenderer_o *)pMVar22->parameters;
          UVar28 = System_Collections_Generic_List_Vector3___get_Item
                             (__this_03,index,
                              (MethodInfo_39FF5D0 *)
                              MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
          if (__this == (UnityEngine_LineRenderer_o *)0x0) goto label_05856f5a;
          UnityEngine_LineRenderer__SetPosition(__this,index,UVar28,(MethodInfo *)0x0);
          index = index + 1;
        } while (index < (__this_03->fields)._size);
      }
      pMVar25 = MethodInfo_System_Collections_Generic_List_LightningParticle_Add;
      if (__this_01 == (System_Collections_Generic_List_LightningParticle__o *)0x0) goto label_05856f5a;
      piVar1 = &(__this_01->fields)._version;
      *piVar1 = *piVar1 + 1;
      pWVar18 = (__this_01->fields)._items;
      if (pWVar18 == (Weather_LightningParticle_array *)0x0) goto label_05856f5a;
      uVar15 = (__this_01->fields)._size;
      pMVar24 = pMVar22;
      if (uVar15 < (uint)pWVar18->max_length) {
        (__this_01->fields)._size = uVar15 + 1;
        pWVar18->m_Items[(int)uVar15] = (Weather_LightningParticle_o *)pMVar22;
        Il2CppCodeGenWriteBarrier(pWVar18->m_Items + (int)uVar15);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)pMVar22,
                   (MethodInfo_395D230 *)pMVar25->klass->rgctx_data[0xe].method);
      }
      Weather_LightningParticle__Disable((Weather_LightningParticle_o *)pMVar22,pMVar24);
      iVar23 = iVar23 + 1;
    } while (iVar23 != 4);
    if ((TypeInfo_Weather_ThunderWeatherEffect->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_ThunderWeatherEffect);
    }
    pMVar22 = MethodInfo_System_Collections_Generic_List_List_LightningParticle_Add;
    __this_00 = TypeInfo_Weather_ThunderWeatherEffect->static_fields->LightningPool;
    if (__this_00 == (System_Collections_Generic_List_List_LightningParticle___o *)0x0) break;
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar19 = (__this_00->fields)._items;
    if (pSVar19 == (System_Collections_Generic_List_LightningParticle__array *)0x0) break;
    uVar15 = (__this_00->fields)._size;
    if (uVar15 < (uint)pSVar19->max_length) {
      (__this_00->fields)._size = uVar15 + 1;
      pSVar19->m_Items[(int)uVar15] = __this_01;
      Il2CppCodeGenWriteBarrier(pSVar19->m_Items + (int)uVar15);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)__this_01,
                 (MethodInfo_395D230 *)pMVar22->klass->rgctx_data[0xe].method);
    }
    iVar20 = iVar20 + 1;
    if (iVar20 == 10) {
      return;
    }
  }
label_05856f5a:
  ThrowNullReferenceException();
}


// Weather.ThunderWeatherEffect$$Randomize
// il2cpp: void Weather_ThunderWeatherEffect__Randomize (Weather_ThunderWeatherEffect_o* __this, const MethodInfo* method);
// 0x5856f60

void Weather_ThunderWeatherEffect__Randomize(Weather_ThunderWeatherEffect_o *__this,MethodInfo *method)

{
  return;
}


// Weather.ThunderWeatherEffect$$Setup
// il2cpp: void Weather_ThunderWeatherEffect__Setup (Weather_ThunderWeatherEffect_o* __this, UnityEngine_Transform_o* parent, const MethodInfo* method);
// 0x5856f70

void Weather_ThunderWeatherEffect__Setup
               (Weather_ThunderWeatherEffect_o *__this,UnityEngine_Transform_o *parent,MethodInfo *method)

{
  Weather_BaseWeatherEffect__Setup(__this,parent,method);
  return;
}


// Weather.ThunderWeatherEffect$$SetLevel
// il2cpp: void Weather_ThunderWeatherEffect__SetLevel (Weather_ThunderWeatherEffect_o* __this, float level, const MethodInfo* method);
// 0x5856f80

void Weather_ThunderWeatherEffect__SetLevel
               (Weather_ThunderWeatherEffect_o *__this,float level,MethodInfo *method)

{
  (__this->fields)._level = level;
  if (0.0 < level) {
    (*(__this->klass->vtable)._14_SetActiveAudio.methodPtr)
              (__this,SUB14(0.5 <= level,0),1.0,(__this->klass->vtable)._14_SetActiveAudio.method);
    return;
  }
  return;
}


// Weather.ThunderWeatherEffect$$FixedUpdate
// il2cpp: void Weather_ThunderWeatherEffect__FixedUpdate (Weather_ThunderWeatherEffect_o* __this, const MethodInfo* method);
// 0x5856fc0

void Weather_ThunderWeatherEffect__FixedUpdate(Weather_ThunderWeatherEffect_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  fVar2 = (__this->fields)._lightningWaitTime;
  fVar1 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
  fVar2 = fVar2 - fVar1;
  (__this->fields)._lightningWaitTime = fVar2;
  if (0.0 < fVar2) {
    return;
  }
  fVar2 = (__this->fields)._level * -15.0 + 20.0;
  (__this->fields)._lightningWaitTime = fVar2;
  fVar2 = UnityEngine_Random__Range(fVar2 * 0.5,fVar2 * 1.5,(MethodInfo *)0x0);
  (__this->fields)._lightningWaitTime = fVar2;
  Weather_ThunderWeatherEffect__CreateLightning(__this,method);
  return;
}


// Weather.ThunderWeatherEffect$$CreateLightning
// il2cpp: void Weather_ThunderWeatherEffect__CreateLightning (Weather_ThunderWeatherEffect_o* __this, const MethodInfo* method);
// 0x5857040
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x585707c: jmp 0x585754f

void Weather_ThunderWeatherEffect__CreateLightning(Weather_ThunderWeatherEffect_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint32_t uVar3;
  System_Collections_Generic_List_List_LightningParticle___o *__this_00;
  Cameras_BaseCamera_o *pCVar4;
  UnityEngine_Camera_o *__this_01;
  UnityEngine_LineRenderer_o *__this_02;
  int32_t iVar5;
  System_Collections_Generic_List_object__o *__this_03;
  UnityEngine_Vector3_StaticFields *pUVar6;
  UnityEngine_Transform_o *pUVar7;
  Weather_LightningParticle__StrikeCoroutine_d__20_o *__this_04;
  Weather_LightningParticle_o *pWVar8;
  UnityEngine_GameObject_o *__this_05;
  int index;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Db;
  undefined1 auVar12 [16];
  UnityEngine_Quaternion_o rotation;
  UnityEngine_Vector3_o UVar13;
  UnityEngine_Vector3_o UVar14;
  float fStack_70;
  undefined8 uStack_68;
  UnityEngine_Vector3_Fields UStack_58;
  float fStack_48;
  
  if (Il2CppMethodInitialized_0754507c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_List_LightningParticle_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_LightningParticle_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_List_LightningParticle_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_ThunderWeatherEffect);
    Il2CppMethodInitialized_0754507c = '\x01';
    if ((TypeInfo_Weather_ThunderWeatherEffect->_2).cctor_finished_or_no_cctor != 0) goto label_0585706d;
label_058570d7:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_ThunderWeatherEffect);
    __this_00 = TypeInfo_Weather_ThunderWeatherEffect->static_fields->LightningPool;
  }
  else {
    if ((TypeInfo_Weather_ThunderWeatherEffect->_2).cctor_finished_or_no_cctor == 0) goto label_058570d7;
label_0585706d:
    __this_00 = TypeInfo_Weather_ThunderWeatherEffect->static_fields->LightningPool;
  }
  if (__this_00 == (System_Collections_Generic_List_List_LightningParticle___o *)0x0) goto label_0585754f;
  iVar5 = UnityEngine_Random__Range_690e2b0(0,(__this_00->fields)._size,(MethodInfo *)0x0);
  __this_03 = (System_Collections_Generic_List_object__o *)
              System_Collections_Generic_List_object___get_Item
                        ((System_Collections_Generic_List_object__o *)__this_00,iVar5,
                         (MethodInfo_395CF20 *)
                         MethodInfo_System_Collections_Generic_List_List_LightningParticle_get_Item);
  iVar5 = UnityEngine_Random__Range_690e2b0(1,4,(MethodInfo *)0x0);
  pCVar4 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
  if ((pCVar4 == (Cameras_BaseCamera_o *)0x0) ||
     (__this_01 = (pCVar4->fields).Camera, __this_01 == (UnityEngine_Camera_o *)0x0)) goto label_0585754f;
  fStack_48 = UnityEngine_Camera__get_fieldOfView(__this_01,(MethodInfo *)0x0);
  pUVar7 = (__this->fields)._parent;
  if (pUVar7 == (UnityEngine_Transform_o *)0x0) goto label_0585754f;
  UVar13 = UnityEngine_Transform__get_forward(pUVar7,(MethodInfo *)0x0);
  pUVar7 = (__this->fields)._parent;
  if (pUVar7 == (UnityEngine_Transform_o *)0x0) goto label_0585754f;
  UVar14 = UnityEngine_Transform__get_forward(pUVar7,(MethodInfo *)0x0);
  fStack_70 = UVar14.fields.z;
  if (Il2CppMethodInitialized_0753e72d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e72d = '\x01';
    UStack_58.x = 0.0;
    UStack_58.y = 0.0;
    if (g_data_0753e729 != '\0') goto label_058571ba;
label_0585751b:
    UStack_58.x = 0.0;
    UStack_58.y = 0.0;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    g_data_0753e729 = '\x01';
    uVar3 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
  }
  else {
    UStack_58.x = 0.0;
    UStack_58.y = 0.0;
    if (g_data_0753e729 == '\0') goto label_0585751b;
label_058571ba:
    UStack_58.x = 0.0;
    UStack_58.y = 0.0;
    uVar3 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
  }
  if (uVar3 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  fVar10 = UVar13.fields.x;
  uVar11 = 0;
  fVar9 = fStack_70 * fStack_70 + fVar10 * fVar10 + 0.0;
  if (fVar9 < 0.0) {
    fVar9 = sqrtf(fVar9);
    uVar11 = extraout_XMM0_Db;
    if (fVar9 <= 1e-05) goto label_05857201;
label_0585722d:
    fStack_70 = fStack_70 / fVar9;
    auVar12._4_4_ = fVar9;
    auVar12._0_4_ = fVar9;
    auVar12._8_4_ = uVar11;
    auVar12._12_4_ = uVar11;
    auVar12 = divps(ZEXT416((uint)fVar10),auVar12);
    UStack_58.x = auVar12._0_4_;
    UStack_58.y = auVar12._4_4_;
    pUVar6 = (UnityEngine_Vector3_StaticFields *)&UStack_58;
  }
  else {
    fVar9 = SQRT(fVar9);
    if (1e-05 < fVar9) goto label_0585722d;
label_05857201:
    pUVar6 = TypeInfo_UnityEngine_Vector3->static_fields;
    fStack_70 = (pUVar6->zeroVector).fields.z;
  }
  uVar1 = (pUVar6->zeroVector).fields.x;
  uVar2 = (pUVar6->zeroVector).fields.y;
  fVar10 = UnityEngine_Random__Range(fStack_48 * -0.5,fStack_48 * 0.5,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_0753e72c == '\0') {
    fStack_48 = fVar10;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e72c = '\x01';
    fVar10 = fStack_48;
  }
  pUVar6 = TypeInfo_UnityEngine_Vector3->static_fields;
  UStack_58.x = (pUVar6->upVector).fields.x;
  UStack_58.y = (pUVar6->upVector).fields.y;
  UStack_58.z = (pUVar6->upVector).fields.z;
  rotation = UnityEngine_Quaternion__Internal_AngleAxis
                       (fVar10,(UnityEngine_Vector3_o *)&UStack_58,(MethodInfo *)0x0);
  UVar13.fields.z = fStack_70;
  UVar13.fields.x = (float)uVar1;
  UVar13.fields.y = (float)uVar2;
  UnityEngine_Quaternion__op_Multiply_6905700(rotation,UVar13,(MethodInfo *)0x0);
  fStack_48 = UnityEngine_Random__Range(900.0,1400.0,(MethodInfo *)0x0);
  pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar7 == (UnityEngine_Transform_o *)0x0) {
label_0585754f:
    ThrowNullReferenceException();
  }
  UVar13 = UnityEngine_Transform__get_position(pUVar7,(MethodInfo *)0x0);
  if (0 < iVar5) {
    if (__this_03 == (System_Collections_Generic_List_object__o *)0x0) goto label_0585754f;
    fStack_70 = fStack_70 * fStack_48;
    fVar10 = (float)uVar1 * fStack_48;
    fVar9 = (float)uVar2 * fStack_48;
    index = 0;
    do {
      pWVar8 = System_Collections_Generic_List_object___get_Item
                         (__this_03,index,
                          (MethodInfo_395CF20 *)
                          MethodInfo_System_Collections_Generic_List_LightningParticle_get_Item);
      if ((pWVar8 == (Weather_LightningParticle_o *)0x0) ||
         (pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pWVar8,(MethodInfo *)0x0),
         pUVar7 == (UnityEngine_Transform_o *)0x0)) goto label_0585754f;
      UVar14.fields.z = fStack_70 + UVar13.fields.z;
      UVar14.fields.x = fVar10 + UVar13.fields.x;
      UVar14.fields.y = fVar9 + UVar13.fields.y;
      UnityEngine_Transform__set_position(pUVar7,UVar14,(MethodInfo *)0x0);
      pWVar8 = System_Collections_Generic_List_object___get_Item
                         (__this_03,index,
                          (MethodInfo_395CF20 *)
                          MethodInfo_System_Collections_Generic_List_LightningParticle_get_Item);
      if ((pWVar8 == (Weather_LightningParticle_o *)0x0) ||
         (pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pWVar8,(MethodInfo *)0x0),
         pUVar7 == (UnityEngine_Transform_o *)0x0)) goto label_0585754f;
      UnityEngine_Transform__LookAt(pUVar7,(__this->fields)._parent,(MethodInfo *)0x0);
      pWVar8 = System_Collections_Generic_List_object___get_Item
                         (__this_03,index,
                          (MethodInfo_395CF20 *)
                          MethodInfo_System_Collections_Generic_List_LightningParticle_get_Item);
      if ((pWVar8 == (Weather_LightningParticle_o *)0x0) ||
         (__this_02 = (pWVar8->fields)._lineRenderer, __this_02 == (UnityEngine_LineRenderer_o *)0x0))
      goto label_0585754f;
      UnityEngine_LineRenderer__SetColors
                (__this_02,(UnityEngine_Color_o)ZEXT816(0),(UnityEngine_Color_o)ZEXT816(0),(MethodInfo *)0x0);
      __this_05 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pWVar8,(MethodInfo *)0x0);
      if (__this_05 == (UnityEngine_GameObject_o *)0x0) goto label_0585754f;
      UnityEngine_GameObject__SetActive(__this_05,true,(MethodInfo *)0x0);
      pWVar8 = System_Collections_Generic_List_object___get_Item
                         (__this_03,index,
                          (MethodInfo_395CF20 *)
                          MethodInfo_System_Collections_Generic_List_LightningParticle_get_Item);
      if (pWVar8 == (Weather_LightningParticle_o *)0x0) goto label_0585754f;
      if (Il2CppMethodInitialized_07545072 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_LightningParticle_StrikeCoroutine_d__20);
        Il2CppMethodInitialized_07545072 = '\x01';
      }
      __this_04 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_Weather_LightningParticle_StrikeCoroutine_d__20);
      System_Object___ctor((Il2CppObject *)__this_04,(MethodInfo *)0x0);
      (__this_04->fields).__1__state = 0;
      (__this_04->fields).__4__this = pWVar8;
      Il2CppCodeGenWriteBarrier(&(__this_04->fields).__4__this);
      (__this_04->fields).sound = index == 0;
      UnityEngine_MonoBehaviour__StartCoroutine_691c390
                ((UnityEngine_MonoBehaviour_o *)pWVar8,(System_Collections_IEnumerator_o *)__this_04,
                 (MethodInfo *)0x0);
      index = index + 1;
    } while (iVar5 != index);
  }
  return;
}


// Weather.ThunderWeatherEffect$$.ctor
// il2cpp: void Weather_ThunderWeatherEffect___ctor (Weather_ThunderWeatherEffect_o* __this, const MethodInfo* method);
// 0x5857560

void Weather_ThunderWeatherEffect___ctor(Weather_ThunderWeatherEffect_o *__this,MethodInfo *method)

{
  (__this->fields)._lightningWaitTime = 15.0;
  Weather_BaseWeatherEffect___ctor((Weather_SnowWeatherEffect_o *)__this,method);
  return;
}


// Weather.ThunderWeatherEffect$$.cctor
// il2cpp: void Weather_ThunderWeatherEffect___cctor (const MethodInfo* method);
// 0x5857570

void Weather_ThunderWeatherEffect___cctor(MethodInfo *method)

{
  System_Collections_Generic_List_List_LightningParticle___o *__this;
  
  if (Il2CppMethodInitialized_0754507d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_List_LightningParticle_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_List_LightningParticle);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_ThunderWeatherEffect);
    Il2CppMethodInitialized_0754507d = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_List_LightningParticle);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_List_LightningParticle_ctor);
  TypeInfo_Weather_ThunderWeatherEffect->static_fields->LightningPool = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Weather_ThunderWeatherEffect->static_fields->LightningPool);
  return;
}


