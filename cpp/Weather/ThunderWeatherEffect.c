// Type: Weather.ThunderWeatherEffect
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Weather/ThunderWeatherEffect.cs
// Prior real C# source (older reference): Assets/Scripts/Weather/ThunderWeatherEffect.cs
// --------------------------------

// Weather.ThunderWeatherEffect$$get__positionOffset
// il2cpp: UnityEngine_Vector3_o Weather_ThunderWeatherEffect__get__positionOffset (Weather_ThunderWeatherEffect_o* __this, const MethodInfo* method);
// 0x406ccd0

UnityEngine_Vector3_o
Weather_ThunderWeatherEffect__get__positionOffset(Weather_ThunderWeatherEffect_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  UnityEngine_Vector3_o UVar2;
  
  if (g_data_057a6844 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057a6844 = '\x01';
  }
  uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
  UVar2.fields.x = (float)uVar1 * 0.0;
  UVar2.fields.y = (float)((ulong)uVar1 >> 0x20) * 0.0;
  UVar2.fields.z = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20) * 0.0;
  return (UnityEngine_Vector3_o)UVar2.fields;
}


// Weather.ThunderWeatherEffect$$OnFinishInit
// il2cpp: void Weather_ThunderWeatherEffect__OnFinishInit (const MethodInfo* method);
// 0x406cd20

void Weather_ThunderWeatherEffect__OnFinishInit(MethodInfo *method)

{
  int32_t *piVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  System_String_o *pSVar7;
  System_Object_array *pSVar8;
  System_Collections_Generic_List_object__o *__this;
  long lVar9;
  System_Collections_Generic_List_object__o *__this_00;
  UnityEngine_GameObject_o *pUVar10;
  MethodInfo *__this_01;
  UnityEngine_Object_o *pUVar11;
  Weather_LightningParticle_o *__this_02;
  MethodInfo *method_00;
  MethodInfo *method_01;
  int iVar12;
  MethodInfo *pMVar13;
  uint unaff_R12D;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  UnityEngine_Vector3_o start;
  UnityEngine_Vector3_o start_00;
  UnityEngine_Vector3_o end;
  UnityEngine_Vector3_o end_00;
  float local_a8;
  float local_a4;
  undefined8 local_88;
  undefined8 local_78;
  float local_68;
  float fStack_64;
  float local_48;
  float fStack_44;
  
  if (g_data_057ac2f3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_LightningParticle_AddComponent_LightningParticle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Weather_LightningParticle);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_LightningParticle);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ThunderWeatherEffect);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0();
    g_data_057ac2f3 = '\x01';
  }
  iVar12 = 0;
  while( true ) {
    if (g_data_057a6844 == '\0') {
      il2cpp_runtime_helper_023445d0();
      g_data_057a6844 = '\x01';
    }
    lVar9 = *(long *)(TypeInfo_Vector3 + 0xb8);
    local_78 = *(undefined8 *)(lVar9 + 0x18);
    local_a4 = *(float *)(lVar9 + 0x20);
    if (g_data_057abfed == '\0') {
      il2cpp_runtime_helper_023445d0();
      g_data_057abfed = '\x01';
      lVar9 = *(long *)(TypeInfo_Vector3 + 0xb8);
    }
    uVar3 = *(undefined8 *)(lVar9 + 0x3c);
    fVar18 = *(float *)(lVar9 + 0x44);
    fVar15 = UnityEngine_Random__Range(-1000.0,1000.0,(MethodInfo *)0x0);
    if (g_data_057ac31b == '\0') {
      il2cpp_runtime_helper_023445d0();
      g_data_057ac31b = '\x01';
    }
    lVar9 = *(long *)(TypeInfo_Vector3 + 0xb8);
    local_88 = *(undefined8 *)(lVar9 + 0x24);
    local_a8 = *(float *)(lVar9 + 0x2c);
    if (g_data_057abfed == '\0') {
      il2cpp_runtime_helper_023445d0();
      g_data_057abfed = '\x01';
      lVar9 = *(long *)(TypeInfo_Vector3 + 0xb8);
    }
    uVar4 = *(undefined8 *)(lVar9 + 0x3c);
    fVar2 = *(float *)(lVar9 + 0x44);
    fVar16 = UnityEngine_Random__Range(-1000.0,1000.0,(MethodInfo *)0x0);
    if (g_data_057a68cb == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a68cb = '\x01';
      iVar5 = *(int *)(TypeInfo_Math + 0xe4);
    }
    else {
      iVar5 = *(int *)(TypeInfo_Math + 0xe4);
    }
    if (iVar5 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar9 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x18);
    if ((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0x98), lVar9 == 0)) break;
    local_48 = (float)uVar3;
    fStack_44 = (float)((ulong)uVar3 >> 0x20);
    local_68 = (float)uVar4;
    fStack_64 = (float)((ulong)uVar4 >> 0x20);
    local_78._4_4_ = (float)((ulong)local_78 >> 0x20);
    fVar17 = (float)local_78 * 1500.0 + local_48 * fVar15;
    fVar19 = local_78._4_4_ * 1500.0 + fStack_44 * fVar15;
    local_78 = CONCAT44(fVar19,fVar17);
    local_a4 = local_a4 * 1500.0 + fVar18 * fVar15;
    local_88._4_4_ = (float)((ulong)local_88 >> 0x20);
    fVar18 = (float)local_88 * 300.0 + local_68 * fVar16;
    fVar15 = local_88._4_4_ * 300.0 + fStack_64 * fVar16;
    local_88 = CONCAT44(fVar15,fVar18);
    local_a8 = local_a8 * 300.0 + fVar2 * fVar16;
    unaff_R12D = *(int *)(lVar9 + 0x14) == 2 ^ 9;
    __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_LightningParticle);
    System_Collections_Generic_List_object____ctor(__this_00,MethodInfo_List_1_Weather_LightningParticle);
    if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
      if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar7 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 0x58);
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pUVar10 = (UnityEngine_GameObject_o *)
                ApplicationManagers_ResourceManager__InstantiateAsset_object_
                          (pSVar7,"Prefabs/LightningParticle",0,MethodInfo_GameObject_InstantiateAsset_GameObject);
      if ((pUVar10 != (UnityEngine_GameObject_o *)0x0) &&
         (__this_02 = (Weather_LightningParticle_o *)
                      UnityEngine_GameObject__AddComponent_object_(pUVar10,MethodInfo_LightningParticle_AddComponent_LightningParticle),
         __this_02 != (Weather_LightningParticle_o *)0x0)) goto label_0406d30d;
      break;
    }
    iVar14 = 4;
    iVar5 = *(int *)(TypeInfo_ResourcePaths + 0xe4);
    while( true ) {
      if (iVar5 == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar7 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 0x58);
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pUVar10 = (UnityEngine_GameObject_o *)
                ApplicationManagers_ResourceManager__InstantiateAsset_object_
                          (pSVar7,"Prefabs/LightningParticle",0,MethodInfo_GameObject_InstantiateAsset_GameObject);
      if ((pUVar10 == (UnityEngine_GameObject_o *)0x0) ||
         (__this_01 = (MethodInfo *)UnityEngine_GameObject__AddComponent_object_(pUVar10,MethodInfo_LightningParticle_AddComponent_LightningParticle),
         __this_01 == (MethodInfo *)0x0)) goto label_0406d308;
      pUVar11 = (UnityEngine_Object_o *)
                UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Object__DontDestroyOnLoad(pUVar11,(MethodInfo *)0x0);
      start.fields.z = local_a4;
      start.fields.x = fVar17;
      start.fields.y = fVar19;
      end.fields.z = local_a8;
      end.fields.x = fVar18;
      end.fields.y = fVar15;
      Weather_LightningParticle__Setup
                ((Weather_LightningParticle_o *)__this_01,start,end,unaff_R12D,method_00);
      lVar9 = MethodInfo_Void_Add;
      piVar1 = &(__this_00->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar8 = (__this_00->fields)._items;
      if (pSVar8 == (System_Object_array *)0x0) goto label_0406d308;
      uVar6 = (__this_00->fields)._size;
      if (uVar6 < (uint)pSVar8->max_length) {
        (__this_00->fields)._size = uVar6 + 1;
        pSVar8->m_Items[(int)uVar6] = (Il2CppObject *)__this_01;
        pMVar13 = __this_01;
        il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar6);
        Weather_LightningParticle__Disable((Weather_LightningParticle_o *)__this_01,pMVar13);
      }
      else {
        pMVar13 = __this_01;
        System_Collections_Generic_List_object___AddWithResize
                  (__this_00,(Il2CppObject *)__this_01,
                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
        Weather_LightningParticle__Disable((Weather_LightningParticle_o *)__this_01,pMVar13);
      }
      if (iVar14 == 1) break;
      iVar14 = iVar14 + -1;
      iVar5 = *(int *)(TypeInfo_ResourcePaths + 0xe4);
    }
    if (*(int *)(TypeInfo_ThunderWeatherEffect + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar9 = MethodInfo_Void_Add;
    __this = (System_Collections_Generic_List_object__o *)**(undefined8 **)(TypeInfo_ThunderWeatherEffect + 0xb8);
    if (__this == (System_Collections_Generic_List_object__o *)0x0) break;
    piVar1 = &(__this->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar8 = (__this->fields)._items;
    if (pSVar8 == (System_Object_array *)0x0) break;
    uVar6 = (__this->fields)._size;
    if (uVar6 < (uint)pSVar8->max_length) {
      (__this->fields)._size = uVar6 + 1;
      pSVar8->m_Items[(int)uVar6] = (Il2CppObject *)__this_00;
      il2cpp_runtime_helper_022b4080();
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                (__this,(Il2CppObject *)__this_00,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
    }
    iVar12 = iVar12 + 1;
    if (iVar12 == 10) {
      return;
    }
  }
label_0406d308:
  __this_02 = (Weather_LightningParticle_o *)il2cpp_runtime_helper_022b2c90();
label_0406d30d:
  pUVar11 = (UnityEngine_Object_o *)
            UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  UnityEngine_Object__DontDestroyOnLoad(pUVar11,(MethodInfo *)0x0);
  start_00.fields.z = local_a4;
  start_00.fields.x = (float)local_78;
  start_00.fields.y = local_78._4_4_;
  end_00.fields.z = local_a8;
  end_00.fields.x = (float)local_88;
  end_00.fields.y = local_88._4_4_;
  Weather_LightningParticle__Setup(__this_02,start_00,end_00,unaff_R12D,method_01);
  il2cpp_runtime_helper_022b2c90();
  return;
}


// Weather.ThunderWeatherEffect$$Randomize
// il2cpp: void Weather_ThunderWeatherEffect__Randomize (Weather_ThunderWeatherEffect_o* __this, const MethodInfo* method);
// 0x406d370

void Weather_ThunderWeatherEffect__Randomize(Weather_ThunderWeatherEffect_o *__this,MethodInfo *method)

{
  return;
}


// Weather.ThunderWeatherEffect$$Setup
// il2cpp: void Weather_ThunderWeatherEffect__Setup (Weather_ThunderWeatherEffect_o* __this, UnityEngine_Transform_o* parent, const MethodInfo* method);
// 0x406d380

void Weather_ThunderWeatherEffect__Setup
               (Weather_ThunderWeatherEffect_o *__this,UnityEngine_Transform_o *parent,MethodInfo *method)

{
  Weather_BaseWeatherEffect__Setup(__this,parent,method);
  return;
}


// Weather.ThunderWeatherEffect$$SetLevel
// il2cpp: void Weather_ThunderWeatherEffect__SetLevel (Weather_ThunderWeatherEffect_o* __this, float level, const MethodInfo* method);
// 0x406d390

void Weather_ThunderWeatherEffect__SetLevel
               (Weather_ThunderWeatherEffect_o *__this,float level,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  
  (__this->fields)._level = level;
  if (0.0 < level) {
    vtableDispatch = (__this->klass->vtable)._14_SetActiveAudio.methodPtr;
    (*vtableDispatch)
              (0x3f800000,__this,(ulong)(0.5 <= level),(__this->klass->vtable)._14_SetActiveAudio.method,
               vtableDispatch);
    return;
  }
  return;
}


// Weather.ThunderWeatherEffect$$FixedUpdate
// il2cpp: void Weather_ThunderWeatherEffect__FixedUpdate (Weather_ThunderWeatherEffect_o* __this, const MethodInfo* method);
// 0x406d3d0

void Weather_ThunderWeatherEffect__FixedUpdate(Weather_ThunderWeatherEffect_o *__this,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_List_AudioSource__c *__this_00;
  long lVar2;
  UnityEngine_Camera_o *__this_01;
  UnityEngine_LineRenderer_o *__this_02;
  int32_t index;
  uint uVar3;
  Weather_ThunderWeatherEffect_o *__this_03;
  Weather_ThunderWeatherEffect_o *pWVar4;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_GameObject_o *__this_04;
  UnityEngine_MonoBehaviour_o *__this_05;
  uint index_00;
  Weather_ThunderWeatherEffect_o *__this_06;
  float fVar6;
  undefined4 extraout_XMM0_Dc;
  undefined4 uVar7;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 uVar8;
  undefined4 extraout_XMM0_Dd_00;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  UnityEngine_Vector3_o UVar12;
  UnityEngine_Vector3_o UVar13;
  UnityEngine_Quaternion_o rotation;
  UnityEngine_Color_o start;
  float local_60;
  undefined8 local_58;
  undefined8 uVar14;
  
  fVar9 = (__this->fields)._lightningWaitTime;
  fVar6 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
  fVar9 = fVar9 - fVar6;
  (__this->fields)._lightningWaitTime = fVar9;
  if (0.0 < fVar9) {
    return;
  }
  fVar9 = (__this->fields)._level * -15.0 + 20.0;
  (__this->fields)._lightningWaitTime = fVar9;
  fVar9 = UnityEngine_Random__Range(fVar9 * 0.5,fVar9 * 1.5,(MethodInfo *)0x0);
  (__this->fields)._lightningWaitTime = fVar9;
  if (g_data_057ac2f4 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LightningParticle_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Weather_LightningParticle_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ThunderWeatherEffect);
    g_data_057ac2f4 = '\x01';
    if (*(int32_t *)((long)&TypeInfo_ThunderWeatherEffect[2].klass + 4) != 0) goto label_0406d47d;
label_0406d4e7:
    il2cpp_runtime_helper_02337ed0();
    __this_00 = (TypeInfo_ThunderWeatherEffect[1].fields._audioSources)->klass;
    __this_06 = TypeInfo_ThunderWeatherEffect;
  }
  else {
    if (*(int32_t *)((long)&TypeInfo_ThunderWeatherEffect[2].klass + 4) == 0) goto label_0406d4e7;
label_0406d47d:
    __this_00 = (TypeInfo_ThunderWeatherEffect[1].fields._audioSources)->klass;
    __this_06 = TypeInfo_ThunderWeatherEffect;
  }
  TypeInfo_ThunderWeatherEffect = __this_06;
  if (__this_00 == (System_Collections_Generic_List_AudioSource__c *)0x0) goto label_0406d943;
  index = UnityEngine_Random__Range_4df2410(0,*(int32_t *)&(__this_00->_1).namespaze,(MethodInfo *)0x0);
  __this_03 = (Weather_ThunderWeatherEffect_o *)
              System_Collections_Generic_List_object___get_Item
                        ((System_Collections_Generic_List_object__o *)__this_00,index,MethodInfo_List_1_Weather_LightningParticle_get_Item);
  __this_06 = (Weather_ThunderWeatherEffect_o *)0x1;
  method = (MethodInfo *)&g_data_00000004;
  uVar3 = UnityEngine_Random__Range_4df2410(1,4,(MethodInfo *)0x0);
  lVar2 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (lVar2 == 0) goto label_0406d943;
  __this_01 = *(UnityEngine_Camera_o **)(lVar2 + 0x20);
  __this_06 = (Weather_ThunderWeatherEffect_o *)0x0;
  if (__this_01 == (UnityEngine_Camera_o *)0x0) goto label_0406d943;
  method = (MethodInfo *)0x0;
  fVar9 = UnityEngine_Camera__get_fieldOfView(__this_01,(MethodInfo *)0x0);
  pUVar5 = (__this->fields)._parent;
  __this_06 = (Weather_ThunderWeatherEffect_o *)0x0;
  if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto label_0406d943;
  method = (MethodInfo *)0x0;
  UVar12 = UnityEngine_Transform__get_forward(pUVar5,(MethodInfo *)0x0);
  pUVar5 = (__this->fields)._parent;
  __this_06 = (Weather_ThunderWeatherEffect_o *)0x0;
  if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto label_0406d943;
  UVar13 = UnityEngine_Transform__get_forward(pUVar5,(MethodInfo *)0x0);
  local_60 = UVar13.fields.z;
  if (g_data_057a6845 == '\0') {
    il2cpp_runtime_helper_023445d0(UVar13.fields.x,&TypeInfo_Math);
    g_data_057a6845 = '\x01';
    iVar1 = *(int *)(TypeInfo_Math + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Math + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  local_58._0_4_ = UVar12.fields.x;
  uVar7 = 0;
  uVar8 = 0;
  fVar6 = local_60 * local_60 + (float)local_58 * (float)local_58 + 0.0;
  if (fVar6 < 0.0) {
    fVar6 = sqrtf(fVar6);
    uVar7 = extraout_XMM0_Dc_00;
    uVar8 = extraout_XMM0_Dd_00;
    if (fVar6 <= 1e-05) goto label_0406d5fc;
label_0406d64d:
    auVar10._0_8_ = UVar12.fields._0_8_ & 0xffffffff;
    auVar10._8_4_ = extraout_XMM0_Dc;
    auVar10._12_4_ = extraout_XMM0_Dd;
    local_60 = local_60 / fVar6;
    auVar11._4_4_ = fVar6;
    auVar11._0_4_ = fVar6;
    auVar11._8_4_ = uVar7;
    auVar11._12_4_ = uVar8;
    auVar11 = divps(auVar10,auVar11);
    local_58 = auVar11._0_8_;
  }
  else {
    fVar6 = SQRT(fVar6);
    if (1e-05 < fVar6) goto label_0406d64d;
label_0406d5fc:
    if (g_data_057a65d5 == '\0') {
      il2cpp_runtime_helper_023445d0();
      g_data_057a65d5 = '\x01';
    }
    local_58 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    local_60 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  }
  fVar9 = UnityEngine_Random__Range(fVar9 * -0.5,fVar9 * 0.5,(MethodInfo *)0x0);
  if (g_data_057a6844 == '\0') {
    il2cpp_runtime_helper_023445d0();
    g_data_057a6844 = '\x01';
  }
  rotation = UnityEngine_Quaternion__AngleAxis
                       (fVar9,(UnityEngine_Vector3_o)
                              *(UnityEngine_Vector3_Fields *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18),
                        (MethodInfo *)0x0);
  UVar12.fields.z = local_60;
  UVar12.fields.x = (float)local_58;
  UVar12.fields.y = local_58._4_4_;
  UnityEngine_Quaternion__op_Multiply_4debdf0(rotation,UVar12,(MethodInfo *)0x0);
  fVar9 = UnityEngine_Random__Range(900.0,1400.0,(MethodInfo *)0x0);
  method = (MethodInfo *)0x0;
  __this_06 = __this;
  pWVar4 = (Weather_ThunderWeatherEffect_o *)
           UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pWVar4 == (Weather_ThunderWeatherEffect_o *)0x0) {
label_0406d943:
    il2cpp_runtime_helper_022b2c90();
    (__this_06->fields)._lightningWaitTime = 15.0;
    Weather_BaseWeatherEffect___ctor((Weather_SnowWeatherEffect_o *)__this_06,method);
    return;
  }
  method = (MethodInfo *)0x0;
  UVar12 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)pWVar4,(MethodInfo *)0x0);
  if (0 < (int)uVar3) {
    __this_06 = pWVar4;
    if (__this_03 == (Weather_ThunderWeatherEffect_o *)0x0) goto label_0406d943;
    index_00 = 0;
    do {
      method = (MethodInfo *)(ulong)index_00;
      __this_06 = __this_03;
      pWVar4 = (Weather_ThunderWeatherEffect_o *)
               System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)__this_03,index_00,MethodInfo_LightningParticle_get_Item);
      if (pWVar4 == (Weather_ThunderWeatherEffect_o *)0x0) goto label_0406d943;
      method = (MethodInfo *)0x0;
      pUVar5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pWVar4,(MethodInfo *)0x0);
      __this_06 = pWVar4;
      if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto label_0406d943;
      UVar13.fields.z = local_60 * fVar9 + UVar12.fields.z;
      UVar13.fields.x = (float)local_58 * fVar9 + UVar12.fields.x;
      UVar13.fields.y = local_58._4_4_ * fVar9 + UVar12.fields.y;
      UnityEngine_Transform__set_position(pUVar5,UVar13,(MethodInfo *)0x0);
      method = (MethodInfo *)(ulong)index_00;
      __this_06 = __this_03;
      pWVar4 = (Weather_ThunderWeatherEffect_o *)
               System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)__this_03,index_00,MethodInfo_LightningParticle_get_Item);
      if (pWVar4 == (Weather_ThunderWeatherEffect_o *)0x0) goto label_0406d943;
      method = (MethodInfo *)0x0;
      pUVar5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pWVar4,(MethodInfo *)0x0);
      __this_06 = pWVar4;
      if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto label_0406d943;
      UnityEngine_Transform__LookAt(pUVar5,(__this->fields)._parent,(MethodInfo *)0x0);
      method = (MethodInfo *)(ulong)index_00;
      __this_06 = __this_03;
      pWVar4 = (Weather_ThunderWeatherEffect_o *)
               System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)__this_03,index_00,MethodInfo_LightningParticle_get_Item);
      if (pWVar4 == (Weather_ThunderWeatherEffect_o *)0x0) goto label_0406d943;
      __this_02 = *(UnityEngine_LineRenderer_o **)&(pWVar4->fields)._level;
      __this_06 = (Weather_ThunderWeatherEffect_o *)0x0;
      if (__this_02 == (UnityEngine_LineRenderer_o *)0x0) goto label_0406d943;
      start.fields.a = 0.0;
      start.fields.r = 0.0;
      uVar14._4_4_ = 0.0;
      start.fields.b = 0.0;
      UnityEngine_LineRenderer__SetColors(__this_02,start,(UnityEngine_Color_o)ZEXT816(0),(MethodInfo *)0x0);
      method = (MethodInfo *)0x0;
      __this_04 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pWVar4,(MethodInfo *)0x0);
      __this_06 = pWVar4;
      if (__this_04 == (UnityEngine_GameObject_o *)0x0) goto label_0406d943;
      UnityEngine_GameObject__SetActive(__this_04,1,(MethodInfo *)0x0);
      method = (MethodInfo *)(ulong)index_00;
      __this_06 = __this_03;
      __this_05 = (UnityEngine_MonoBehaviour_o *)
                  System_Collections_Generic_List_object___get_Item
                            ((System_Collections_Generic_List_object__o *)__this_03,index_00,MethodInfo_LightningParticle_get_Item);
      if (__this_05 == (UnityEngine_MonoBehaviour_o *)0x0) goto label_0406d943;
      if (g_data_057ac2ea == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_StrikeCoroutine_d__20);
        g_data_057ac2ea = '\x01';
      }
      pWVar4 = (Weather_ThunderWeatherEffect_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StrikeCoroutine_d__20);
      method = (MethodInfo *)0x0;
      __this_06 = pWVar4;
      System_Object___ctor((Il2CppObject *)pWVar4,(MethodInfo *)0x0);
      *(undefined4 *)&(pWVar4->fields).m_CachedPtr = 0;
      if (pWVar4 == (Weather_ThunderWeatherEffect_o *)0x0) goto label_0406d943;
      (pWVar4->fields)._parent = (UnityEngine_Transform_o *)__this_05;
      il2cpp_runtime_helper_022b4080(&(pWVar4->fields)._parent,__this_05);
      *(bool *)&(pWVar4->fields)._transform = index_00 == 0;
      UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                (__this_05,(System_Collections_IEnumerator_o *)pWVar4,(MethodInfo *)0x0);
      index_00 = index_00 + 1;
    } while (uVar3 != index_00);
  }
  return;
}


// Weather.ThunderWeatherEffect$$CreateLightning
// il2cpp: void Weather_ThunderWeatherEffect__CreateLightning (Weather_ThunderWeatherEffect_o* __this, const MethodInfo* method);
// 0x406d450

void Weather_ThunderWeatherEffect__CreateLightning(Weather_ThunderWeatherEffect_o *__this,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_List_AudioSource__c *__this_00;
  long lVar2;
  UnityEngine_Camera_o *__this_01;
  UnityEngine_LineRenderer_o *__this_02;
  int32_t index;
  uint uVar3;
  Weather_ThunderWeatherEffect_o *__this_03;
  Weather_ThunderWeatherEffect_o *pWVar4;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_GameObject_o *__this_04;
  UnityEngine_MonoBehaviour_o *__this_05;
  uint index_00;
  Weather_ThunderWeatherEffect_o *__this_06;
  float fVar6;
  float fVar7;
  undefined4 extraout_XMM0_Dc;
  undefined4 uVar8;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 uVar9;
  undefined4 extraout_XMM0_Dd_00;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  UnityEngine_Vector3_o UVar12;
  UnityEngine_Vector3_o UVar13;
  UnityEngine_Quaternion_o rotation;
  UnityEngine_Color_o start;
  float fStack_60;
  undefined8 uStack_58;
  undefined8 uVar14;
  
  if (g_data_057ac2f4 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LightningParticle_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Weather_LightningParticle_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ThunderWeatherEffect);
    g_data_057ac2f4 = '\x01';
    if (*(int32_t *)((long)&TypeInfo_ThunderWeatherEffect[2].klass + 4) != 0) goto label_0406d47d;
label_0406d4e7:
    il2cpp_runtime_helper_02337ed0();
    __this_00 = (TypeInfo_ThunderWeatherEffect[1].fields._audioSources)->klass;
    __this_06 = TypeInfo_ThunderWeatherEffect;
  }
  else {
    if (*(int32_t *)((long)&TypeInfo_ThunderWeatherEffect[2].klass + 4) == 0) goto label_0406d4e7;
label_0406d47d:
    __this_00 = (TypeInfo_ThunderWeatherEffect[1].fields._audioSources)->klass;
    __this_06 = TypeInfo_ThunderWeatherEffect;
  }
  TypeInfo_ThunderWeatherEffect = __this_06;
  if (__this_00 == (System_Collections_Generic_List_AudioSource__c *)0x0) goto label_0406d943;
  index = UnityEngine_Random__Range_4df2410(0,*(int32_t *)&(__this_00->_1).namespaze,(MethodInfo *)0x0);
  __this_03 = (Weather_ThunderWeatherEffect_o *)
              System_Collections_Generic_List_object___get_Item
                        ((System_Collections_Generic_List_object__o *)__this_00,index,MethodInfo_List_1_Weather_LightningParticle_get_Item);
  __this_06 = (Weather_ThunderWeatherEffect_o *)0x1;
  method = (MethodInfo *)&g_data_00000004;
  uVar3 = UnityEngine_Random__Range_4df2410(1,4,(MethodInfo *)0x0);
  lVar2 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (lVar2 == 0) goto label_0406d943;
  __this_01 = *(UnityEngine_Camera_o **)(lVar2 + 0x20);
  __this_06 = (Weather_ThunderWeatherEffect_o *)0x0;
  if (__this_01 == (UnityEngine_Camera_o *)0x0) goto label_0406d943;
  method = (MethodInfo *)0x0;
  fVar6 = UnityEngine_Camera__get_fieldOfView(__this_01,(MethodInfo *)0x0);
  pUVar5 = (__this->fields)._parent;
  __this_06 = (Weather_ThunderWeatherEffect_o *)0x0;
  if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto label_0406d943;
  method = (MethodInfo *)0x0;
  UVar12 = UnityEngine_Transform__get_forward(pUVar5,(MethodInfo *)0x0);
  pUVar5 = (__this->fields)._parent;
  __this_06 = (Weather_ThunderWeatherEffect_o *)0x0;
  if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto label_0406d943;
  UVar13 = UnityEngine_Transform__get_forward(pUVar5,(MethodInfo *)0x0);
  fStack_60 = UVar13.fields.z;
  if (g_data_057a6845 == '\0') {
    il2cpp_runtime_helper_023445d0(UVar13.fields.x,&TypeInfo_Math);
    g_data_057a6845 = '\x01';
    iVar1 = *(int *)(TypeInfo_Math + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Math + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_58._0_4_ = UVar12.fields.x;
  uVar8 = 0;
  uVar9 = 0;
  fVar7 = fStack_60 * fStack_60 + (float)uStack_58 * (float)uStack_58 + 0.0;
  if (fVar7 < 0.0) {
    fVar7 = sqrtf(fVar7);
    uVar8 = extraout_XMM0_Dc_00;
    uVar9 = extraout_XMM0_Dd_00;
    if (fVar7 <= 1e-05) goto label_0406d5fc;
label_0406d64d:
    auVar10._0_8_ = UVar12.fields._0_8_ & 0xffffffff;
    auVar10._8_4_ = extraout_XMM0_Dc;
    auVar10._12_4_ = extraout_XMM0_Dd;
    fStack_60 = fStack_60 / fVar7;
    auVar11._4_4_ = fVar7;
    auVar11._0_4_ = fVar7;
    auVar11._8_4_ = uVar8;
    auVar11._12_4_ = uVar9;
    auVar11 = divps(auVar10,auVar11);
    uStack_58 = auVar11._0_8_;
  }
  else {
    fVar7 = SQRT(fVar7);
    if (1e-05 < fVar7) goto label_0406d64d;
label_0406d5fc:
    if (g_data_057a65d5 == '\0') {
      il2cpp_runtime_helper_023445d0();
      g_data_057a65d5 = '\x01';
    }
    uStack_58 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    fStack_60 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  }
  fVar6 = UnityEngine_Random__Range(fVar6 * -0.5,fVar6 * 0.5,(MethodInfo *)0x0);
  if (g_data_057a6844 == '\0') {
    il2cpp_runtime_helper_023445d0();
    g_data_057a6844 = '\x01';
  }
  rotation = UnityEngine_Quaternion__AngleAxis
                       (fVar6,(UnityEngine_Vector3_o)
                              *(UnityEngine_Vector3_Fields *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18),
                        (MethodInfo *)0x0);
  UVar12.fields.z = fStack_60;
  UVar12.fields.x = (float)uStack_58;
  UVar12.fields.y = uStack_58._4_4_;
  UnityEngine_Quaternion__op_Multiply_4debdf0(rotation,UVar12,(MethodInfo *)0x0);
  fVar6 = UnityEngine_Random__Range(900.0,1400.0,(MethodInfo *)0x0);
  method = (MethodInfo *)0x0;
  __this_06 = __this;
  pWVar4 = (Weather_ThunderWeatherEffect_o *)
           UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pWVar4 == (Weather_ThunderWeatherEffect_o *)0x0) {
label_0406d943:
    il2cpp_runtime_helper_022b2c90();
    (__this_06->fields)._lightningWaitTime = 15.0;
    Weather_BaseWeatherEffect___ctor((Weather_SnowWeatherEffect_o *)__this_06,method);
    return;
  }
  method = (MethodInfo *)0x0;
  UVar12 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)pWVar4,(MethodInfo *)0x0);
  if (0 < (int)uVar3) {
    __this_06 = pWVar4;
    if (__this_03 == (Weather_ThunderWeatherEffect_o *)0x0) goto label_0406d943;
    index_00 = 0;
    do {
      method = (MethodInfo *)(ulong)index_00;
      __this_06 = __this_03;
      pWVar4 = (Weather_ThunderWeatherEffect_o *)
               System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)__this_03,index_00,MethodInfo_LightningParticle_get_Item);
      if (pWVar4 == (Weather_ThunderWeatherEffect_o *)0x0) goto label_0406d943;
      method = (MethodInfo *)0x0;
      pUVar5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pWVar4,(MethodInfo *)0x0);
      __this_06 = pWVar4;
      if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto label_0406d943;
      UVar13.fields.z = fStack_60 * fVar6 + UVar12.fields.z;
      UVar13.fields.x = (float)uStack_58 * fVar6 + UVar12.fields.x;
      UVar13.fields.y = uStack_58._4_4_ * fVar6 + UVar12.fields.y;
      UnityEngine_Transform__set_position(pUVar5,UVar13,(MethodInfo *)0x0);
      method = (MethodInfo *)(ulong)index_00;
      __this_06 = __this_03;
      pWVar4 = (Weather_ThunderWeatherEffect_o *)
               System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)__this_03,index_00,MethodInfo_LightningParticle_get_Item);
      if (pWVar4 == (Weather_ThunderWeatherEffect_o *)0x0) goto label_0406d943;
      method = (MethodInfo *)0x0;
      pUVar5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pWVar4,(MethodInfo *)0x0);
      __this_06 = pWVar4;
      if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto label_0406d943;
      UnityEngine_Transform__LookAt(pUVar5,(__this->fields)._parent,(MethodInfo *)0x0);
      method = (MethodInfo *)(ulong)index_00;
      __this_06 = __this_03;
      pWVar4 = (Weather_ThunderWeatherEffect_o *)
               System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)__this_03,index_00,MethodInfo_LightningParticle_get_Item);
      if (pWVar4 == (Weather_ThunderWeatherEffect_o *)0x0) goto label_0406d943;
      __this_02 = *(UnityEngine_LineRenderer_o **)&(pWVar4->fields)._level;
      __this_06 = (Weather_ThunderWeatherEffect_o *)0x0;
      if (__this_02 == (UnityEngine_LineRenderer_o *)0x0) goto label_0406d943;
      start.fields.a = 0.0;
      start.fields.r = 0.0;
      uVar14._4_4_ = 0.0;
      start.fields.b = 0.0;
      UnityEngine_LineRenderer__SetColors(__this_02,start,(UnityEngine_Color_o)ZEXT816(0),(MethodInfo *)0x0);
      method = (MethodInfo *)0x0;
      __this_04 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pWVar4,(MethodInfo *)0x0);
      __this_06 = pWVar4;
      if (__this_04 == (UnityEngine_GameObject_o *)0x0) goto label_0406d943;
      UnityEngine_GameObject__SetActive(__this_04,1,(MethodInfo *)0x0);
      method = (MethodInfo *)(ulong)index_00;
      __this_06 = __this_03;
      __this_05 = (UnityEngine_MonoBehaviour_o *)
                  System_Collections_Generic_List_object___get_Item
                            ((System_Collections_Generic_List_object__o *)__this_03,index_00,MethodInfo_LightningParticle_get_Item);
      if (__this_05 == (UnityEngine_MonoBehaviour_o *)0x0) goto label_0406d943;
      if (g_data_057ac2ea == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_StrikeCoroutine_d__20);
        g_data_057ac2ea = '\x01';
      }
      pWVar4 = (Weather_ThunderWeatherEffect_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StrikeCoroutine_d__20);
      method = (MethodInfo *)0x0;
      __this_06 = pWVar4;
      System_Object___ctor((Il2CppObject *)pWVar4,(MethodInfo *)0x0);
      *(undefined4 *)&(pWVar4->fields).m_CachedPtr = 0;
      if (pWVar4 == (Weather_ThunderWeatherEffect_o *)0x0) goto label_0406d943;
      (pWVar4->fields)._parent = (UnityEngine_Transform_o *)__this_05;
      il2cpp_runtime_helper_022b4080(&(pWVar4->fields)._parent,__this_05);
      *(bool *)&(pWVar4->fields)._transform = index_00 == 0;
      UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                (__this_05,(System_Collections_IEnumerator_o *)pWVar4,(MethodInfo *)0x0);
      index_00 = index_00 + 1;
    } while (uVar3 != index_00);
  }
  return;
}


// Weather.ThunderWeatherEffect$$.ctor
// il2cpp: void Weather_ThunderWeatherEffect___ctor (Weather_ThunderWeatherEffect_o* __this, const MethodInfo* method);
// 0x406d950

void Weather_ThunderWeatherEffect___ctor(Weather_ThunderWeatherEffect_o *__this,MethodInfo *method)

{
  (__this->fields)._lightningWaitTime = 15.0;
  Weather_BaseWeatherEffect___ctor((Weather_SnowWeatherEffect_o *)__this,method);
  return;
}


// Weather.ThunderWeatherEffect$$.cctor
// il2cpp: void Weather_ThunderWeatherEffect___cctor (const MethodInfo* method);
// 0x406d960

void Weather_ThunderWeatherEffect___cctor(MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this;
  
  if (g_data_057ac2f5 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_List_1_Weather_LightningParticle);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_List_LightningParticle);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ThunderWeatherEffect);
    g_data_057ac2f5 = '\x01';
  }
  __this = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_List_LightningParticle);
  System_Collections_Generic_List_object____ctor(__this,MethodInfo_List_1_List_1_Weather_LightningParticle);
  **(undefined8 **)(TypeInfo_ThunderWeatherEffect + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_ThunderWeatherEffect + 0xb8),__this);
  return;
}


