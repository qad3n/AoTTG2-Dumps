// Type: Weather.ThunderWeatherEffect
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Weather/ThunderWeatherEffect.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Weather/ThunderWeatherEffect.cs  [CHANGED since prior version]
// --------------------------------

// Weather.ThunderWeatherEffect$$get__positionOffset
// il2cpp: UnityEngine_Vector3_o Weather_ThunderWeatherEffect__get__positionOffset (Weather_ThunderWeatherEffect_o* __this, const MethodInfo* method);
// 0x3d77380

UnityEngine_Vector3_o
Weather_ThunderWeatherEffect__get__positionOffset
          (Weather_ThunderWeatherEffect_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  UnityEngine_Vector3_o UVar2;
  
  if (DAT_056fde1f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_056fde1f = '\x01';
  }
  uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
  UVar2.fields.x = (float)uVar1 * 0.0;
  UVar2.fields.y = (float)((ulong)uVar1 >> 0x20) * 0.0;
  UVar2.fields.z = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20) * 0.0;
  return (UnityEngine_Vector3_o)UVar2.fields;
}


// Weather.ThunderWeatherEffect$$OnFinishInit
// il2cpp: void Weather_ThunderWeatherEffect__OnFinishInit (const MethodInfo* method);
// 0x3d773d0

void Weather_ThunderWeatherEffect__OnFinishInit(MethodInfo *method)

{
  int32_t *piVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  uint uVar9;
  System_String_o *pSVar10;
  System_Object_array *pSVar11;
  System_Collections_Generic_List_object__o *__this;
  long lVar12;
  System_Collections_Generic_List_object__o *__this_00;
  UnityEngine_GameObject_o *pUVar13;
  MethodInfo *__this_01;
  UnityEngine_Object_o *pUVar14;
  Weather_LightningParticle_o *__this_02;
  MethodInfo *method_00;
  MethodInfo *method_01;
  int iVar15;
  MethodInfo *pMVar16;
  uint uVar17;
  int iVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  UnityEngine_Vector3_o start;
  UnityEngine_Vector3_o start_00;
  UnityEngine_Vector3_o end;
  UnityEngine_Vector3_o end_00;
  undefined8 local_88;
  undefined8 local_78;
  float local_68;
  float fStack_64;
  float local_48;
  float fStack_44;
  
  if (DAT_05702643 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_LightningParticle_AddComponent_LightningParticle);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Weather_LightningParticle);
    il2cpp_init_method_metadata(&TypeInfo_List_LightningParticle);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    il2cpp_init_method_metadata(&TypeInfo_ResourcePaths);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&TypeInfo_ThunderWeatherEffect);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata();
    DAT_05702643 = '\x01';
  }
  iVar15 = 0;
  while( true ) {
    if (DAT_056fde1f == '\0') {
      il2cpp_init_method_metadata();
      DAT_056fde1f = '\x01';
    }
    lVar12 = *(long *)(TypeInfo_Vector3 + 0xb8);
    uVar4 = *(undefined8 *)(lVar12 + 0x18);
    fVar22 = *(float *)(lVar12 + 0x20);
    if (DAT_0570222a == '\0') {
      il2cpp_init_method_metadata();
      DAT_0570222a = '\x01';
      lVar12 = *(long *)(TypeInfo_Vector3 + 0xb8);
    }
    uVar5 = *(undefined8 *)(lVar12 + 0x3c);
    fVar23 = *(float *)(lVar12 + 0x44);
    fVar19 = UnityEngine_Random__Range(-1000.0,1000.0,(MethodInfo *)0x0);
    if (DAT_0570266b == '\0') {
      il2cpp_init_method_metadata();
      DAT_0570266b = '\x01';
    }
    lVar12 = *(long *)(TypeInfo_Vector3 + 0xb8);
    uVar6 = *(undefined8 *)(lVar12 + 0x24);
    fVar2 = *(float *)(lVar12 + 0x2c);
    if (DAT_0570222a == '\0') {
      il2cpp_init_method_metadata();
      DAT_0570222a = '\x01';
      lVar12 = *(long *)(TypeInfo_Vector3 + 0xb8);
    }
    uVar7 = *(undefined8 *)(lVar12 + 0x3c);
    fVar3 = *(float *)(lVar12 + 0x44);
    fVar20 = UnityEngine_Random__Range(-1000.0,1000.0,(MethodInfo *)0x0);
    if (DAT_056fdea6 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Math);
      DAT_056fdea6 = '\x01';
      iVar8 = *(int *)(TypeInfo_Math + 0xe4);
    }
    else {
      iVar8 = *(int *)(TypeInfo_Math + 0xe4);
    }
    if (iVar8 == 0) {
      il2cpp_init_class();
    }
    lVar12 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x18);
    if ((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x98), lVar12 == 0)) break;
    local_48 = (float)uVar5;
    fStack_44 = (float)((ulong)uVar5 >> 0x20);
    local_68 = (float)uVar7;
    fStack_64 = (float)((ulong)uVar7 >> 0x20);
    local_78._0_4_ = (float)uVar4;
    local_78._4_4_ = (float)((ulong)uVar4 >> 0x20);
    fVar21 = (float)local_78 * 1500.0 + local_48 * fVar19;
    fVar24 = local_78._4_4_ * 1500.0 + fStack_44 * fVar19;
    fVar22 = fVar22 * 1500.0 + fVar23 * fVar19;
    local_88._0_4_ = (float)uVar6;
    local_88._4_4_ = (float)((ulong)uVar6 >> 0x20);
    fVar23 = (float)local_88 * 300.0 + local_68 * fVar20;
    fVar25 = local_88._4_4_ * 300.0 + fStack_64 * fVar20;
    fVar19 = fVar2 * 300.0 + fVar3 * fVar20;
    uVar17 = *(int *)(lVar12 + 0x14) == 2 ^ 9;
    __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_LightningParticle);
    System_Collections_Generic_List<object>___ctor(__this_00,MethodInfo_List_1_Weather_LightningParticle);
    if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
      if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar10 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 0x58);
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pUVar13 = (UnityEngine_GameObject_o *)
                ApplicationManagers_ResourceManager__InstantiateAsset<object>
                          (pSVar10,"Prefabs/LightningParticle",0,MethodInfo_GameObject_InstantiateAsset_GameObject);
      if ((pUVar13 != (UnityEngine_GameObject_o *)0x0) &&
         (__this_02 = (Weather_LightningParticle_o *)
                      UnityEngine_GameObject__AddComponent<object>(pUVar13,MethodInfo_LightningParticle_AddComponent_LightningParticle),
         __this_02 != (Weather_LightningParticle_o *)0x0)) {
        pUVar14 = (UnityEngine_Object_o *)
                  UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        UnityEngine_Object__DontDestroyOnLoad(pUVar14,(MethodInfo *)0x0);
        start_00.fields.z = fVar22;
        start_00.fields.x = fVar21;
        start_00.fields.y = fVar24;
        end_00.fields.z = fVar19;
        end_00.fields.x = fVar23;
        end_00.fields.y = fVar25;
        Weather_LightningParticle__Setup(__this_02,start_00,end_00,uVar17,method_01);
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      break;
    }
    iVar18 = 4;
    iVar8 = *(int *)(TypeInfo_ResourcePaths + 0xe4);
    while( true ) {
      if (iVar8 == 0) {
        il2cpp_init_class();
      }
      pSVar10 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 0x58);
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pUVar13 = (UnityEngine_GameObject_o *)
                ApplicationManagers_ResourceManager__InstantiateAsset<object>
                          (pSVar10,"Prefabs/LightningParticle",0,MethodInfo_GameObject_InstantiateAsset_GameObject);
      if ((pUVar13 == (UnityEngine_GameObject_o *)0x0) ||
         (__this_01 = (MethodInfo *)
                      UnityEngine_GameObject__AddComponent<object>(pUVar13,MethodInfo_LightningParticle_AddComponent_LightningParticle),
         __this_01 == (MethodInfo *)0x0)) goto LAB_03d779b8;
      pUVar14 = (UnityEngine_Object_o *)
                UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      UnityEngine_Object__DontDestroyOnLoad(pUVar14,(MethodInfo *)0x0);
      start.fields.z = fVar22;
      start.fields.x = fVar21;
      start.fields.y = fVar24;
      end.fields.z = fVar19;
      end.fields.x = fVar23;
      end.fields.y = fVar25;
      Weather_LightningParticle__Setup
                ((Weather_LightningParticle_o *)__this_01,start,end,uVar17,method_00);
      lVar12 = MethodInfo_Void_Add;
      piVar1 = &(__this_00->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar11 = (__this_00->fields)._items;
      if (pSVar11 == (System_Object_array *)0x0) goto LAB_03d779b8;
      uVar9 = (__this_00->fields)._size;
      if (uVar9 < (uint)pSVar11->max_length) {
        (__this_00->fields)._size = uVar9 + 1;
        pSVar11->m_Items[(int)uVar9] = (Il2CppObject *)__this_01;
        pMVar16 = __this_01;
        il2cpp_runtime_glue(pSVar11->m_Items + (int)uVar9);
        Weather_LightningParticle__Disable((Weather_LightningParticle_o *)__this_01,pMVar16);
      }
      else {
        pMVar16 = __this_01;
        System_Collections_Generic_List<object>__AddWithResize
                  (__this_00,(Il2CppObject *)__this_01,
                   *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
        Weather_LightningParticle__Disable((Weather_LightningParticle_o *)__this_01,pMVar16);
      }
      if (iVar18 == 1) break;
      iVar18 = iVar18 + -1;
      iVar8 = *(int *)(TypeInfo_ResourcePaths + 0xe4);
    }
    if (*(int *)(TypeInfo_ThunderWeatherEffect + 0xe4) == 0) {
      il2cpp_init_class();
    }
    lVar12 = MethodInfo_Void_Add;
    __this = (System_Collections_Generic_List_object__o *)**(undefined8 **)(TypeInfo_ThunderWeatherEffect + 0xb8);
    if (__this == (System_Collections_Generic_List_object__o *)0x0) break;
    piVar1 = &(__this->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar11 = (__this->fields)._items;
    if (pSVar11 == (System_Object_array *)0x0) break;
    uVar17 = (__this->fields)._size;
    if (uVar17 < (uint)pSVar11->max_length) {
      (__this->fields)._size = uVar17 + 1;
      pSVar11->m_Items[(int)uVar17] = (Il2CppObject *)__this_00;
      il2cpp_runtime_glue(pSVar11->m_Items + (int)uVar17,__this_00);
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                (__this,(Il2CppObject *)__this_00,
                 *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
    }
    iVar15 = iVar15 + 1;
    if (iVar15 == 10) {
      return;
    }
  }
LAB_03d779b8:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Weather.ThunderWeatherEffect$$Randomize
// il2cpp: void Weather_ThunderWeatherEffect__Randomize (Weather_ThunderWeatherEffect_o* __this, const MethodInfo* method);
// 0x3d77a20

void Weather_ThunderWeatherEffect__Randomize
               (Weather_ThunderWeatherEffect_o *__this,MethodInfo *method)

{
  return;
}


// Weather.ThunderWeatherEffect$$Setup
// il2cpp: void Weather_ThunderWeatherEffect__Setup (Weather_ThunderWeatherEffect_o* __this, UnityEngine_Transform_o* parent, const MethodInfo* method);
// 0x3d77a30

void Weather_ThunderWeatherEffect__Setup
               (Weather_ThunderWeatherEffect_o *__this,UnityEngine_Transform_o *parent,
               MethodInfo *method)

{
  Weather_BaseWeatherEffect__Setup(__this,parent,method);
  return;
}


// Weather.ThunderWeatherEffect$$SetLevel
// il2cpp: void Weather_ThunderWeatherEffect__SetLevel (Weather_ThunderWeatherEffect_o* __this, float level, const MethodInfo* method);
// 0x3d77a40

void Weather_ThunderWeatherEffect__SetLevel
               (Weather_ThunderWeatherEffect_o *__this,float level,MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  
  (__this->fields)._level = level;
  if (0.0 < level) {
    vtable_dispatch = (__this->klass->vtable)._14_SetActiveAudio.methodPtr;
    (*vtable_dispatch)
              (0x3f800000,__this,(ulong)(0.5 <= level),
               (__this->klass->vtable)._14_SetActiveAudio.method,vtable_dispatch);
    return;
  }
  return;
}


// Weather.ThunderWeatherEffect$$FixedUpdate
// il2cpp: void Weather_ThunderWeatherEffect__FixedUpdate (Weather_ThunderWeatherEffect_o* __this, const MethodInfo* method);
// 0x3d77a80

void Weather_ThunderWeatherEffect__FixedUpdate
               (Weather_ThunderWeatherEffect_o *__this,MethodInfo *method)

{
  long lVar1;
  UnityEngine_Camera_o *__this_00;
  int32_t iVar2;
  System_Collections_Generic_List_object__o *pSVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_Component_o *pUVar5;
  UnityEngine_GameObject_o *__this_01;
  Il2CppClass *__this_02;
  Il2CppObject *__this_03;
  int iVar6;
  float fVar7;
  undefined4 extraout_XMM0_Dc;
  undefined4 uVar8;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 uVar9;
  undefined4 extraout_XMM0_Dd_00;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  UnityEngine_Vector3_o UVar13;
  UnityEngine_Vector3_o UVar14;
  UnityEngine_Quaternion_o rotation;
  UnityEngine_Color_o start;
  float local_60;
  undefined8 local_58;
  undefined8 uVar15;
  
  fVar10 = (__this->fields)._lightningWaitTime;
  fVar7 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
  fVar10 = fVar10 - fVar7;
  (__this->fields)._lightningWaitTime = fVar10;
  if (0.0 < fVar10) {
    return;
  }
  fVar10 = (__this->fields)._level * -15.0 + 20.0;
  (__this->fields)._lightningWaitTime = fVar10;
  fVar10 = UnityEngine_Random__Range(fVar10 * 0.5,fVar10 * 1.5,(MethodInfo *)0x0);
  (__this->fields)._lightningWaitTime = fVar10;
  if (DAT_05702644 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_LightningParticle_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Weather_LightningParticle__get_Item);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    il2cpp_init_method_metadata(&TypeInfo_ThunderWeatherEffect);
    DAT_05702644 = '\x01';
    if (*(int *)(TypeInfo_ThunderWeatherEffect + 0xe4) != 0) goto LAB_03d77b2d;
LAB_03d77b97:
    il2cpp_init_class();
    pSVar3 = (System_Collections_Generic_List_object__o *)**(undefined8 **)(TypeInfo_ThunderWeatherEffect + 0xb8);
  }
  else {
    if (*(int *)(TypeInfo_ThunderWeatherEffect + 0xe4) == 0) goto LAB_03d77b97;
LAB_03d77b2d:
    pSVar3 = (System_Collections_Generic_List_object__o *)**(undefined8 **)(TypeInfo_ThunderWeatherEffect + 0xb8);
  }
  if (pSVar3 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03d77ff3;
  iVar2 = UnityEngine_Random__Range(0,(pSVar3->fields)._size,(MethodInfo *)0x0);
  pSVar3 = (System_Collections_Generic_List_object__o *)
           System_Collections_Generic_List<object>__get_Item(pSVar3,iVar2,MethodInfo_List_1_Weather_LightningParticle__get_Item);
  iVar2 = UnityEngine_Random__Range(1,4,(MethodInfo *)0x0);
  lVar1 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if ((lVar1 == 0) ||
     (__this_00 = *(UnityEngine_Camera_o **)(lVar1 + 0x20), __this_00 == (UnityEngine_Camera_o *)0x0
     )) goto LAB_03d77ff3;
  fVar10 = UnityEngine_Camera__get_fieldOfView(__this_00,(MethodInfo *)0x0);
  pUVar4 = (__this->fields)._parent;
  if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto LAB_03d77ff3;
  UVar13 = UnityEngine_Transform__get_forward(pUVar4,(MethodInfo *)0x0);
  pUVar4 = (__this->fields)._parent;
  if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto LAB_03d77ff3;
  UVar14 = UnityEngine_Transform__get_forward(pUVar4,(MethodInfo *)0x0);
  local_60 = UVar14.fields.z;
  if (DAT_056fde20 == '\0') {
    il2cpp_init_method_metadata(UVar14.fields.x,&TypeInfo_Math);
    DAT_056fde20 = '\x01';
    iVar6 = *(int *)(TypeInfo_Math + 0xe4);
  }
  else {
    iVar6 = *(int *)(TypeInfo_Math + 0xe4);
  }
  if (iVar6 == 0) {
    il2cpp_init_class();
  }
  local_58._0_4_ = UVar13.fields.x;
  uVar8 = 0;
  uVar9 = 0;
  fVar7 = local_60 * local_60 + (float)local_58 * (float)local_58 + 0.0;
  if (fVar7 < 0.0) {
    fVar7 = sqrtf(fVar7);
    uVar8 = extraout_XMM0_Dc_00;
    uVar9 = extraout_XMM0_Dd_00;
    if (fVar7 <= 1e-05) goto LAB_03d77cac;
LAB_03d77cfd:
    auVar11._0_8_ = UVar13.fields._0_8_ & 0xffffffff;
    auVar11._8_4_ = extraout_XMM0_Dc;
    auVar11._12_4_ = extraout_XMM0_Dd;
    local_60 = local_60 / fVar7;
    auVar12._4_4_ = fVar7;
    auVar12._0_4_ = fVar7;
    auVar12._8_4_ = uVar8;
    auVar12._12_4_ = uVar9;
    auVar12 = divps(auVar11,auVar12);
    local_58 = auVar12._0_8_;
  }
  else {
    fVar7 = SQRT(fVar7);
    if (1e-05 < fVar7) goto LAB_03d77cfd;
LAB_03d77cac:
    if (DAT_056fdd15 == '\0') {
      il2cpp_init_method_metadata();
      DAT_056fdd15 = '\x01';
    }
    local_58 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    local_60 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  }
  fVar10 = UnityEngine_Random__Range(fVar10 * -0.5,fVar10 * 0.5,(MethodInfo *)0x0);
  if (DAT_056fde1f == '\0') {
    il2cpp_init_method_metadata();
    DAT_056fde1f = '\x01';
  }
  rotation = UnityEngine_Quaternion__AngleAxis
                       (fVar10,(UnityEngine_Vector3_o)
                               *(UnityEngine_Vector3_Fields *)
                                (*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18),(MethodInfo *)0x0);
  UVar13.fields.z = local_60;
  UVar13.fields.x = (float)local_58;
  UVar13.fields.y = local_58._4_4_;
  UnityEngine_Quaternion__op_Multiply(rotation,UVar13,(MethodInfo *)0x0);
  fVar10 = UnityEngine_Random__Range(900.0,1400.0,(MethodInfo *)0x0);
  pUVar4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if (pUVar4 == (UnityEngine_Transform_o *)0x0) {
LAB_03d77ff3:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  UVar13 = UnityEngine_Transform__get_position(pUVar4,(MethodInfo *)0x0);
  if (0 < iVar2) {
    if (pSVar3 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03d77ff3;
    iVar6 = 0;
    do {
      pUVar5 = (UnityEngine_Component_o *)
               System_Collections_Generic_List<object>__get_Item(pSVar3,iVar6,MethodInfo_LightningParticle_get_Item);
      if ((pUVar5 == (UnityEngine_Component_o *)0x0) ||
         (pUVar4 = UnityEngine_Component__get_transform(pUVar5,(MethodInfo *)0x0),
         pUVar4 == (UnityEngine_Transform_o *)0x0)) goto LAB_03d77ff3;
      UVar14.fields.z = local_60 * fVar10 + UVar13.fields.z;
      UVar14.fields.x = (float)local_58 * fVar10 + UVar13.fields.x;
      UVar14.fields.y = local_58._4_4_ * fVar10 + UVar13.fields.y;
      UnityEngine_Transform__set_position(pUVar4,UVar14,(MethodInfo *)0x0);
      pUVar5 = (UnityEngine_Component_o *)
               System_Collections_Generic_List<object>__get_Item(pSVar3,iVar6,MethodInfo_LightningParticle_get_Item);
      if ((pUVar5 == (UnityEngine_Component_o *)0x0) ||
         (pUVar4 = UnityEngine_Component__get_transform(pUVar5,(MethodInfo *)0x0),
         pUVar4 == (UnityEngine_Transform_o *)0x0)) goto LAB_03d77ff3;
      UnityEngine_Transform__LookAt(pUVar4,(__this->fields)._parent,(MethodInfo *)0x0);
      pUVar5 = (UnityEngine_Component_o *)
               System_Collections_Generic_List<object>__get_Item(pSVar3,iVar6,MethodInfo_LightningParticle_get_Item);
      if ((pUVar5 == (UnityEngine_Component_o *)0x0) ||
         (pUVar5[2].klass == (UnityEngine_Component_c *)0x0)) goto LAB_03d77ff3;
      start.fields.a = 0.0;
      start.fields.r = 0.0;
      uVar15._4_4_ = 0.0;
      start.fields.b = 0.0;
      UnityEngine_LineRenderer__SetColors
                ((UnityEngine_LineRenderer_o *)pUVar5[2].klass,start,(UnityEngine_Color_o)ZEXT816(0)
                 ,(MethodInfo *)0x0);
      __this_01 = UnityEngine_Component__get_gameObject(pUVar5,(MethodInfo *)0x0);
      if (__this_01 == (UnityEngine_GameObject_o *)0x0) goto LAB_03d77ff3;
      UnityEngine_GameObject__SetActive(__this_01,1,(MethodInfo *)0x0);
      __this_02 = (Il2CppClass *)
                  System_Collections_Generic_List<object>__get_Item(pSVar3,iVar6,MethodInfo_LightningParticle_get_Item);
      if (__this_02 == (Il2CppClass *)0x0) goto LAB_03d77ff3;
      if (DAT_0570263a == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_StrikeCoroutine_d__20);
        DAT_0570263a = '\x01';
      }
      __this_03 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_StrikeCoroutine_d__20);
      System_Object___ctor(__this_03,(MethodInfo *)0x0);
      *(undefined4 *)&__this_03[1].klass = 0;
      if (__this_03 == (Il2CppObject *)0x0) goto LAB_03d77ff3;
      __this_03[2].klass = __this_02;
      il2cpp_runtime_glue(__this_03 + 2,__this_02);
      *(bool *)&__this_03[2].monitor = iVar6 == 0;
      UnityEngine_MonoBehaviour__StartCoroutine
                ((UnityEngine_MonoBehaviour_o *)__this_02,
                 (System_Collections_IEnumerator_o *)__this_03,(MethodInfo *)0x0);
      iVar6 = iVar6 + 1;
    } while (iVar2 != iVar6);
  }
  return;
}


// Weather.ThunderWeatherEffect$$CreateLightning
// il2cpp: void Weather_ThunderWeatherEffect__CreateLightning (Weather_ThunderWeatherEffect_o* __this, const MethodInfo* method);
// 0x3d77b00

void Weather_ThunderWeatherEffect__CreateLightning
               (Weather_ThunderWeatherEffect_o *__this,MethodInfo *method)

{
  long lVar1;
  UnityEngine_Camera_o *__this_00;
  int32_t iVar2;
  System_Collections_Generic_List_object__o *pSVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_Component_o *pUVar5;
  UnityEngine_GameObject_o *__this_01;
  Il2CppClass *__this_02;
  Il2CppObject *__this_03;
  int iVar6;
  float fVar7;
  float fVar8;
  undefined4 extraout_XMM0_Dc;
  undefined4 uVar9;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 uVar10;
  undefined4 extraout_XMM0_Dd_00;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  UnityEngine_Vector3_o UVar13;
  UnityEngine_Vector3_o UVar14;
  UnityEngine_Quaternion_o rotation;
  UnityEngine_Color_o start;
  float fStack_60;
  undefined8 uStack_58;
  undefined8 uVar15;
  
  if (DAT_05702644 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_LightningParticle_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Weather_LightningParticle__get_Item);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    il2cpp_init_method_metadata(&TypeInfo_ThunderWeatherEffect);
    DAT_05702644 = '\x01';
    if (*(int *)(TypeInfo_ThunderWeatherEffect + 0xe4) != 0) goto LAB_03d77b2d;
LAB_03d77b97:
    il2cpp_init_class();
    pSVar3 = (System_Collections_Generic_List_object__o *)**(undefined8 **)(TypeInfo_ThunderWeatherEffect + 0xb8);
  }
  else {
    if (*(int *)(TypeInfo_ThunderWeatherEffect + 0xe4) == 0) goto LAB_03d77b97;
LAB_03d77b2d:
    pSVar3 = (System_Collections_Generic_List_object__o *)**(undefined8 **)(TypeInfo_ThunderWeatherEffect + 0xb8);
  }
  if (pSVar3 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03d77ff3;
  iVar2 = UnityEngine_Random__Range(0,(pSVar3->fields)._size,(MethodInfo *)0x0);
  pSVar3 = (System_Collections_Generic_List_object__o *)
           System_Collections_Generic_List<object>__get_Item(pSVar3,iVar2,MethodInfo_List_1_Weather_LightningParticle__get_Item);
  iVar2 = UnityEngine_Random__Range(1,4,(MethodInfo *)0x0);
  lVar1 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if ((lVar1 == 0) ||
     (__this_00 = *(UnityEngine_Camera_o **)(lVar1 + 0x20), __this_00 == (UnityEngine_Camera_o *)0x0
     )) goto LAB_03d77ff3;
  fVar7 = UnityEngine_Camera__get_fieldOfView(__this_00,(MethodInfo *)0x0);
  pUVar4 = (__this->fields)._parent;
  if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto LAB_03d77ff3;
  UVar13 = UnityEngine_Transform__get_forward(pUVar4,(MethodInfo *)0x0);
  pUVar4 = (__this->fields)._parent;
  if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto LAB_03d77ff3;
  UVar14 = UnityEngine_Transform__get_forward(pUVar4,(MethodInfo *)0x0);
  fStack_60 = UVar14.fields.z;
  if (DAT_056fde20 == '\0') {
    il2cpp_init_method_metadata(UVar14.fields.x,&TypeInfo_Math);
    DAT_056fde20 = '\x01';
    iVar6 = *(int *)(TypeInfo_Math + 0xe4);
  }
  else {
    iVar6 = *(int *)(TypeInfo_Math + 0xe4);
  }
  if (iVar6 == 0) {
    il2cpp_init_class();
  }
  uStack_58._0_4_ = UVar13.fields.x;
  uVar9 = 0;
  uVar10 = 0;
  fVar8 = fStack_60 * fStack_60 + (float)uStack_58 * (float)uStack_58 + 0.0;
  if (fVar8 < 0.0) {
    fVar8 = sqrtf(fVar8);
    uVar9 = extraout_XMM0_Dc_00;
    uVar10 = extraout_XMM0_Dd_00;
    if (fVar8 <= 1e-05) goto LAB_03d77cac;
LAB_03d77cfd:
    auVar11._0_8_ = UVar13.fields._0_8_ & 0xffffffff;
    auVar11._8_4_ = extraout_XMM0_Dc;
    auVar11._12_4_ = extraout_XMM0_Dd;
    fStack_60 = fStack_60 / fVar8;
    auVar12._4_4_ = fVar8;
    auVar12._0_4_ = fVar8;
    auVar12._8_4_ = uVar9;
    auVar12._12_4_ = uVar10;
    auVar12 = divps(auVar11,auVar12);
    uStack_58 = auVar12._0_8_;
  }
  else {
    fVar8 = SQRT(fVar8);
    if (1e-05 < fVar8) goto LAB_03d77cfd;
LAB_03d77cac:
    if (DAT_056fdd15 == '\0') {
      il2cpp_init_method_metadata();
      DAT_056fdd15 = '\x01';
    }
    uStack_58 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    fStack_60 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  }
  fVar7 = UnityEngine_Random__Range(fVar7 * -0.5,fVar7 * 0.5,(MethodInfo *)0x0);
  if (DAT_056fde1f == '\0') {
    il2cpp_init_method_metadata();
    DAT_056fde1f = '\x01';
  }
  rotation = UnityEngine_Quaternion__AngleAxis
                       (fVar7,(UnityEngine_Vector3_o)
                              *(UnityEngine_Vector3_Fields *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18)
                        ,(MethodInfo *)0x0);
  UVar13.fields.z = fStack_60;
  UVar13.fields.x = (float)uStack_58;
  UVar13.fields.y = uStack_58._4_4_;
  UnityEngine_Quaternion__op_Multiply(rotation,UVar13,(MethodInfo *)0x0);
  fVar7 = UnityEngine_Random__Range(900.0,1400.0,(MethodInfo *)0x0);
  pUVar4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if (pUVar4 == (UnityEngine_Transform_o *)0x0) {
LAB_03d77ff3:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  UVar13 = UnityEngine_Transform__get_position(pUVar4,(MethodInfo *)0x0);
  if (0 < iVar2) {
    if (pSVar3 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03d77ff3;
    iVar6 = 0;
    do {
      pUVar5 = (UnityEngine_Component_o *)
               System_Collections_Generic_List<object>__get_Item(pSVar3,iVar6,MethodInfo_LightningParticle_get_Item);
      if ((pUVar5 == (UnityEngine_Component_o *)0x0) ||
         (pUVar4 = UnityEngine_Component__get_transform(pUVar5,(MethodInfo *)0x0),
         pUVar4 == (UnityEngine_Transform_o *)0x0)) goto LAB_03d77ff3;
      UVar14.fields.z = fStack_60 * fVar7 + UVar13.fields.z;
      UVar14.fields.x = (float)uStack_58 * fVar7 + UVar13.fields.x;
      UVar14.fields.y = uStack_58._4_4_ * fVar7 + UVar13.fields.y;
      UnityEngine_Transform__set_position(pUVar4,UVar14,(MethodInfo *)0x0);
      pUVar5 = (UnityEngine_Component_o *)
               System_Collections_Generic_List<object>__get_Item(pSVar3,iVar6,MethodInfo_LightningParticle_get_Item);
      if ((pUVar5 == (UnityEngine_Component_o *)0x0) ||
         (pUVar4 = UnityEngine_Component__get_transform(pUVar5,(MethodInfo *)0x0),
         pUVar4 == (UnityEngine_Transform_o *)0x0)) goto LAB_03d77ff3;
      UnityEngine_Transform__LookAt(pUVar4,(__this->fields)._parent,(MethodInfo *)0x0);
      pUVar5 = (UnityEngine_Component_o *)
               System_Collections_Generic_List<object>__get_Item(pSVar3,iVar6,MethodInfo_LightningParticle_get_Item);
      if ((pUVar5 == (UnityEngine_Component_o *)0x0) ||
         (pUVar5[2].klass == (UnityEngine_Component_c *)0x0)) goto LAB_03d77ff3;
      start.fields.a = 0.0;
      start.fields.r = 0.0;
      uVar15._4_4_ = 0.0;
      start.fields.b = 0.0;
      UnityEngine_LineRenderer__SetColors
                ((UnityEngine_LineRenderer_o *)pUVar5[2].klass,start,(UnityEngine_Color_o)ZEXT816(0)
                 ,(MethodInfo *)0x0);
      __this_01 = UnityEngine_Component__get_gameObject(pUVar5,(MethodInfo *)0x0);
      if (__this_01 == (UnityEngine_GameObject_o *)0x0) goto LAB_03d77ff3;
      UnityEngine_GameObject__SetActive(__this_01,1,(MethodInfo *)0x0);
      __this_02 = (Il2CppClass *)
                  System_Collections_Generic_List<object>__get_Item(pSVar3,iVar6,MethodInfo_LightningParticle_get_Item);
      if (__this_02 == (Il2CppClass *)0x0) goto LAB_03d77ff3;
      if (DAT_0570263a == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_StrikeCoroutine_d__20);
        DAT_0570263a = '\x01';
      }
      __this_03 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_StrikeCoroutine_d__20);
      System_Object___ctor(__this_03,(MethodInfo *)0x0);
      *(undefined4 *)&__this_03[1].klass = 0;
      if (__this_03 == (Il2CppObject *)0x0) goto LAB_03d77ff3;
      __this_03[2].klass = __this_02;
      il2cpp_runtime_glue(__this_03 + 2,__this_02);
      *(bool *)&__this_03[2].monitor = iVar6 == 0;
      UnityEngine_MonoBehaviour__StartCoroutine
                ((UnityEngine_MonoBehaviour_o *)__this_02,
                 (System_Collections_IEnumerator_o *)__this_03,(MethodInfo *)0x0);
      iVar6 = iVar6 + 1;
    } while (iVar2 != iVar6);
  }
  return;
}


// Weather.ThunderWeatherEffect$$.ctor
// il2cpp: void Weather_ThunderWeatherEffect___ctor (Weather_ThunderWeatherEffect_o* __this, const MethodInfo* method);
// 0x3d78000

void Weather_ThunderWeatherEffect___ctor(Weather_ThunderWeatherEffect_o *__this,MethodInfo *method)

{
  (__this->fields)._lightningWaitTime = 15.0;
  Weather_BaseWeatherEffect___ctor((Weather_SnowWeatherEffect_o *)__this,method);
  return;
}


// Weather.ThunderWeatherEffect$$.cctor
// il2cpp: void Weather_ThunderWeatherEffect___cctor (const MethodInfo* method);
// 0x3d78010

void Weather_ThunderWeatherEffect___cctor(MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this;
  
  if (DAT_05702645 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_List_1_List_1_Weather_LightningParticle);
    il2cpp_init_method_metadata(&TypeInfo_List_List_LightningParticle);
    il2cpp_init_method_metadata(&TypeInfo_ThunderWeatherEffect);
    DAT_05702645 = '\x01';
  }
  __this = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_List_LightningParticle);
  System_Collections_Generic_List<object>___ctor(__this,MethodInfo_List_1_List_1_Weather_LightningParticle);
  **(undefined8 **)(TypeInfo_ThunderWeatherEffect + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_ThunderWeatherEffect + 0xb8),__this);
  return;
}


