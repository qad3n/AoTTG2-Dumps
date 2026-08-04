// Type: Characters.Horse
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/Horse.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Horse/Horse.cs
// --------------------------------

// Characters.Horse$$get_Gravity
// il2cpp: UnityEngine_Vector3_o Characters_Horse__get_Gravity (Characters_Horse_o* __this, const MethodInfo* method);
// 0x42b6a00

UnityEngine_Vector3_o Characters_Horse__get_Gravity(Characters_Horse_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  UnityEngine_Vector3_o UVar2;
  
  if (g_data_057ac31b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057ac31b = '\x01';
  }
  uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x24);
  UVar2.fields.x = (float)uVar1 * 30.0;
  UVar2.fields.y = (float)((ulong)uVar1 >> 0x20) * 30.0;
  UVar2.fields.z = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x2c) * 30.0;
  return (UnityEngine_Vector3_o)UVar2.fields;
}


// Characters.Horse$$Init
// il2cpp: void Characters_Horse__Init (Characters_Horse_o* __this, Characters_Human_o* human, const MethodInfo* method);
// 0x42b6a50

void Characters_Horse__Init(Characters_Horse_o *__this,Characters_Human_o *human,MethodInfo *method)

{
  bool_conflict *pbVar1;
  UnityEngine_GameObject_o *pUVar2;
  System_Action_Hashtable__o *pSVar3;
  Utility_BaseComponentCache_o *__this_00;
  MethodInfo *in_RCX;
  
  if (human != (Characters_Human_o *)0x0) {
    Characters_BaseCharacter__Init
              ((Characters_BaseCharacter_o *)__this,1,*(System_String_o **)&(human->fields).AI,in_RCX);
    (__this->fields).OutlineComponent = (Outline_o *)human;
    il2cpp_runtime_helper_022b4080(&(__this->fields).OutlineComponent,human);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057addc8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HorseComponentCache);
    g_data_057addc8 = '\x01';
  }
  pUVar2 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pSVar3 = (System_Action_Hashtable__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HorseComponentCache);
  Characters_HorseComponentCache___ctor((Characters_HorseComponentCache_o *)pSVar3,pUVar2,(MethodInfo *)0x0);
  (__this->fields).OnPlayerPropertiesChanged = pSVar3;
  il2cpp_runtime_helper_022b4080(&(__this->fields).OnPlayerPropertiesChanged,pSVar3);
  pSVar3 = (__this->fields).OnPlayerPropertiesChanged;
  if (g_data_057add3a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseComponentCache);
    g_data_057add3a = '\x01';
  }
  pbVar1 = &(__this->fields).Dead;
  *(System_Action_Hashtable__o **)&(__this->fields).Dead = pSVar3;
  il2cpp_runtime_helper_022b4080(pbVar1);
  if (pSVar3 != (System_Action_Hashtable__o *)0x0) {
    return;
  }
  pUVar2 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  __this_00 = (Utility_BaseComponentCache_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BaseComponentCache);
  Utility_BaseComponentCache___ctor(__this_00,pUVar2,(MethodInfo *)0x0);
  *(Utility_BaseComponentCache_o **)&(__this->fields).Dead = __this_00;
  il2cpp_runtime_helper_022b4080(pbVar1,__this_00);
  return;
}


// Characters.Horse$$CreateCache
// il2cpp: void Characters_Horse__CreateCache (Characters_Horse_o* __this, Utility_BaseComponentCache_o* cache, const MethodInfo* method);
// 0x42b6aa0

void Characters_Horse__CreateCache
               (Characters_Horse_o *__this,Utility_BaseComponentCache_o *cache,MethodInfo *method)

{
  bool_conflict *pbVar1;
  UnityEngine_GameObject_o *pUVar2;
  System_Action_Hashtable__o *pSVar3;
  Utility_BaseComponentCache_o *__this_00;
  
  if (g_data_057addc8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HorseComponentCache);
    g_data_057addc8 = '\x01';
  }
  pUVar2 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pSVar3 = (System_Action_Hashtable__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HorseComponentCache);
  Characters_HorseComponentCache___ctor((Characters_HorseComponentCache_o *)pSVar3,pUVar2,(MethodInfo *)0x0);
  (__this->fields).OnPlayerPropertiesChanged = pSVar3;
  il2cpp_runtime_helper_022b4080(&(__this->fields).OnPlayerPropertiesChanged,pSVar3);
  pSVar3 = (__this->fields).OnPlayerPropertiesChanged;
  if (g_data_057add3a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseComponentCache);
    g_data_057add3a = '\x01';
  }
  pbVar1 = &(__this->fields).Dead;
  *(System_Action_Hashtable__o **)&(__this->fields).Dead = pSVar3;
  il2cpp_runtime_helper_022b4080(pbVar1);
  if (pSVar3 != (System_Action_Hashtable__o *)0x0) {
    return;
  }
  pUVar2 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  __this_00 = (Utility_BaseComponentCache_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BaseComponentCache);
  Utility_BaseComponentCache___ctor(__this_00,pUVar2,(MethodInfo *)0x0);
  *(Utility_BaseComponentCache_o **)&(__this->fields).Dead = __this_00;
  il2cpp_runtime_helper_022b4080(pbVar1,__this_00);
  return;
}


// Characters.Horse$$Jump
// il2cpp: void Characters_Horse__Jump (Characters_Horse_o* __this, const MethodInfo* method);
// 0x42b6ba0

void Characters_Horse__Jump(Characters_Horse_o *__this,MethodInfo *method)

{
  ulong uVar1;
  long lVar2;
  UnityEngine_Rigidbody_o *__this_00;
  System_Action_Hashtable__o *pSVar3;
  UnityEngine_ParticleSystem_o *pUVar4;
  Outline_o *pOVar5;
  Outline_c *pOVar6;
  UnityEngine_Transform_o *pUVar7;
  UnityEngine_RaycastHit_o __this_01;
  UnityEngine_RaycastHit_o __this_02;
  bool_conflict bVar8;
  UnityEngine_LayerMask_o UVar9;
  int32_t iVar10;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  char cVar11;
  System_String_o *animation;
  Characters_Horse_o *pCVar12;
  Characters_Horse_o *__this_03;
  Characters_Horse_o *method_01;
  undefined8 unaff_R14;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dd;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  UnityEngine_Vector3_o UVar23;
  UnityEngine_Vector3_o origin;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o origin_00;
  UnityEngine_Vector3_o direction;
  UnityEngine_Vector3_o direction_00;
  undefined1 in_stack_fffffffffffffe98 [12];
  Il2CppMethodPointer pIStack_128;
  Il2CppMethodPointer pIStack_120;
  InvokerMethod pIStack_118;
  uint32_t uStack_110;
  float fStack_10c;
  float fStack_108;
  undefined8 uStack_104;
  Characters_Horse_o *pCStack_f8;
  undefined1 in_stack_ffffffffffffff10 [12];
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  int32_t iVar27;
  float fStack_c0;
  float fStack_bc;
  undefined1 auStack_90 [64];
  UnityEngine_ParticleSystem_EmissionModule_Fields UStack_40;
  Characters_Horse_o *pCStack_38;
  UnityEngine_ParticleSystem_EmissionModule_Fields local_30;
  Characters_Horse_o *pCStack_28;
  undefined8 uStack_20;
  
  uVar17 = 0.0;
  if ((0.0 < (__this->fields).RunCloseSpeed) || (*(char *)((long)&(__this->fields).Animation + 4) == '\0')) {
    return;
  }
  lVar2 = *(long *)&(__this->fields).Dead;
  pCVar12 = __this;
  if (lVar2 != 0) {
    __this_00 = *(UnityEngine_Rigidbody_o **)(lVar2 + 0x18);
    if (g_data_057a6844 == '\0') {
      pCVar12 = (Characters_Horse_o *)&TypeInfo_Vector3;
      uStack_20._0_4_ = 0x42b6be6;
      uStack_20._4_4_ = 0;
      il2cpp_runtime_helper_023445d0();
      g_data_057a6844 = '\x01';
    }
    unaff_R14._0_4_ = 0;
    unaff_R14._4_4_ = 0;
    if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
      fVar18 = *(float *)((long)&(__this->fields).HorseCache + 4);
      uVar16 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
      UVar23.fields.x = fVar18 * (float)uVar16;
      UVar23.fields.y = fVar18 * (float)((ulong)uVar16 >> 0x20);
      UVar23.fields.z = fVar18 * *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
      uStack_20._0_4_ = 0x42b6c2e;
      uStack_20._4_4_ = 0;
      UnityEngine_Rigidbody__AddForce(__this_00,UVar23,2,(MethodInfo *)0x0);
      (__this->fields).RunCloseSpeed = 0.0;
      return;
    }
  }
  uStack_20._0_4_ = 0x42b6c45;
  uStack_20._4_4_ = 0;
  local_30.m_ParticleSystem = (UnityEngine_ParticleSystem_o *)il2cpp_runtime_helper_022b2c90();
  pCStack_28 = __this;
  uStack_20 = unaff_R14;
  if (g_data_057addc9 == '\0') {
    pCStack_38 = (Characters_Horse_o *)0x42b6c6c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HorseAnimations);
    g_data_057addc9 = '\x01';
  }
  pCStack_38 = (Characters_Horse_o *)0x42b6c7b;
  __this_03 = pCVar12;
  Characters_BaseCharacter__Awake((Characters_BaseCharacter_o *)pCVar12,method);
  cVar11 = (char)method;
  lVar2 = *(long *)&(pCVar12->fields).Dead;
  if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x20), lVar2 != 0)) {
    if (*(char *)(lVar2 + 0x68) != '\0') {
      method_00 = extraout_RDX;
      if (*(int *)(TypeInfo_HorseAnimations + 0xe4) == 0) {
        pCStack_38 = (Characters_Horse_o *)0x42b6cb3;
        il2cpp_runtime_helper_02337ed0();
        method_00 = extraout_RDX_00;
      }
      animation = (System_String_o *)**(undefined8 **)(TypeInfo_HorseAnimations + 0xb8);
      uVar17 = 0.0;
      pCStack_38 = (Characters_Horse_o *)0x42b6cd3;
      __this_03 = pCVar12;
      Characters_BaseCharacter__CrossFade((Characters_BaseCharacter_o *)pCVar12,animation,0.1,0.0,method_00);
      cVar11 = (char)animation;
    }
    pSVar3 = (pCVar12->fields).OnPlayerPropertiesChanged;
    if ((pSVar3 != (System_Action_Hashtable__o *)0x0) &&
       (__this_03 = (Characters_Horse_o *)(pSVar3->fields).extra_arg, __this_03 != (Characters_Horse_o *)0x0))
    {
      cVar11 = '\0';
      pCStack_38 = (Characters_Horse_o *)0x42b6cef;
      UnityEngine_ParticleSystem__Play_4e728d0((UnityEngine_ParticleSystem_o *)__this_03,(MethodInfo *)0x0);
      local_30.m_ParticleSystem = (UnityEngine_ParticleSystem_o *)0x0;
      pSVar3 = (pCVar12->fields).OnPlayerPropertiesChanged;
      if (pSVar3 != (System_Action_Hashtable__o *)0x0) {
        pUVar4 = (UnityEngine_ParticleSystem_o *)(pSVar3->fields).extra_arg;
        __this_03 = (Characters_Horse_o *)0x0;
        if (pUVar4 != (UnityEngine_ParticleSystem_o *)0x0) {
          pCStack_38 = (Characters_Horse_o *)0x42b6d13;
          local_30.m_ParticleSystem =
               (UnityEngine_ParticleSystem_o *)
               UnityEngine_ParticleSystem__get_emission(pUVar4,(MethodInfo *)0x0);
          pCStack_38 = (Characters_Horse_o *)0x42b6d21;
          bVar8 = UnityEngine_ParticleSystem_EmissionModule__get_enabled
                            ((UnityEngine_ParticleSystem_EmissionModule_o)&local_30,(MethodInfo *)0x0);
          if ((char)bVar8 != '\0') {
            pCStack_38 = (Characters_Horse_o *)0x42b6d31;
            UnityEngine_ParticleSystem_EmissionModule__set_enabled
                      ((UnityEngine_ParticleSystem_EmissionModule_o)&local_30,0,(MethodInfo *)0x0);
          }
          return;
        }
      }
    }
  }
  pCStack_38 = (Characters_Horse_o *)0x42b6d3e;
  il2cpp_runtime_helper_022b2c90();
  UStack_40.m_ParticleSystem = (UnityEngine_ParticleSystem_o *)0x0;
  pSVar3 = (__this_03->fields).OnPlayerPropertiesChanged;
  pCStack_38 = pCVar12;
  if (pSVar3 != (System_Action_Hashtable__o *)0x0) {
    pUVar4 = (UnityEngine_ParticleSystem_o *)(pSVar3->fields).extra_arg;
    __this_03 = (Characters_Horse_o *)0x0;
    if (pUVar4 != (UnityEngine_ParticleSystem_o *)0x0) {
      UStack_40.m_ParticleSystem =
           (UnityEngine_ParticleSystem_o *)UnityEngine_ParticleSystem__get_emission(pUVar4,(MethodInfo *)0x0);
      bVar8 = UnityEngine_ParticleSystem_EmissionModule__get_enabled
                        ((UnityEngine_ParticleSystem_EmissionModule_o)&UStack_40,(MethodInfo *)0x0);
      if (cVar11 == '\0') {
        if ((char)bVar8 == '\0') {
          return;
        }
        bVar8 = 0;
      }
      else {
        if ((char)bVar8 != '\0') {
          return;
        }
        bVar8 = 1;
      }
      UnityEngine_ParticleSystem_EmissionModule__set_enabled
                ((UnityEngine_ParticleSystem_EmissionModule_o)&UStack_40,bVar8,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pOVar5 = (__this_03->fields).OutlineComponent;
  method_01 = __this_03;
  auStack_90._56_8_ = pCVar12;
  if ((pOVar5 != (Outline_o *)0x0) && (pOVar6 = pOVar5[1].klass, pOVar6 != (Outline_c *)0x0)) {
    pUVar7 = (UnityEngine_Transform_o *)(pOVar6->_1).name;
    method_01 = (Characters_Horse_o *)0x0;
    pCVar12 = __this_03;
    if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
      pCStack_f8 = (Characters_Horse_o *)0x42b6ded;
      UVar23 = UnityEngine_Transform__get_position(pUVar7,(MethodInfo *)0x0);
      uVar17 = UVar23.fields.z;
      if (g_data_057abfed == '\0') {
        pCStack_f8 = (Characters_Horse_o *)0x42b6e0d;
        il2cpp_runtime_helper_023445d0();
        g_data_057abfed = '\x01';
      }
      uVar16 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x3c);
      fVar19 = (float)uVar16;
      fVar14 = (float)((ulong)uVar16 >> 0x20);
      fVar18 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x44);
      pCStack_f8 = (Characters_Horse_o *)0x42b6e52;
      fVar13 = UnityEngine_Random__Range(-2.0,2.0,(MethodInfo *)0x0);
      fVar18 = fVar18 * fVar13;
      fVar19 = fVar13 * fVar19;
      fVar13 = fVar13 * fVar14;
      if (g_data_057a6846 == '\0') {
        pCStack_f8 = (Characters_Horse_o *)0x42b6e88;
        il2cpp_runtime_helper_023445d0();
        g_data_057a6846 = '\x01';
      }
      fStack_c0 = UVar23.fields.x;
      fStack_bc = UVar23.fields.y;
      uVar17 = (float)uVar17 + fVar18;
      uVar16 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x48);
      fVar15 = (float)uVar16;
      fVar20 = (float)((ulong)uVar16 >> 0x20);
      fVar18 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x50);
      pCStack_f8 = (Characters_Horse_o *)0x42b6eee;
      fVar14 = UnityEngine_Random__Range(-2.0,2.0,(MethodInfo *)0x0);
      fVar18 = fVar18 * fVar14;
      fVar15 = fVar14 * fVar15;
      fVar14 = fVar14 * fVar20;
      if (g_data_057addca == '\0') {
        pCStack_f8 = (Characters_Horse_o *)0x42b6f21;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Physics);
        g_data_057addca = '\x01';
      }
      fVar15 = fStack_c0 + fVar19 + fVar15;
      uVar17 = (float)uVar17 + fVar18;
      auStack_90._32_4_ = 0;
      auStack_90._36_8_ = 0;
      auStack_90._16_8_ = 0;
      auStack_90._24_4_ = 0;
      auStack_90._28_4_ = 0;
      auStack_90._0_8_ = (Characters_Horse_c *)0x0;
      auStack_90._8_8_ = (void *)0x0;
      if (g_data_057a6844 == '\0') {
        pCStack_f8 = (Characters_Horse_o *)0x42b6f73;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a6844 = '\x01';
      }
      uVar16 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
      fVar19 = (float)uVar16;
      fVar21 = (float)((ulong)uVar16 >> 0x20);
      fVar18 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
      origin.fields.z = (float)uVar17 + fVar18;
      fVar20 = -fVar19;
      fVar22 = -fVar21;
      iVar27 = -0x80000000;
      fVar18 = -fVar18;
      uVar24._0_2_ = 0;
      uVar24._2_2_ = 0x8000;
      uVar25._0_2_ = 0;
      uVar25._2_1_ = '\0';
      uVar25._3_1_ = 0x80;
      uVar26 = 0x80000000;
      pCStack_f8 = (Characters_Horse_o *)0x42b6fd6;
      UVar9.fields.m_Mask =
           (UnityEngine_LayerMask_Fields)
           (**(code **)(*(long *)&(((UnityEngine_RaycastHit_Fields *)&__this_03->klass)->m_Point).fields +
                       0x4f8))(__this_03);
      pCStack_f8 = (Characters_Horse_o *)0x42b6fdf;
      iVar10 = UnityEngine_LayerMask__op_Implicit(UVar9,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
        pCStack_f8 = (Characters_Horse_o *)0x42b6ff9;
        il2cpp_runtime_helper_02337ed0();
      }
      method_01 = (Characters_Horse_o *)auStack_90;
      origin.fields.y = fStack_bc + fVar13 + fVar14 + fVar21;
      origin.fields.x = fVar15 + fVar19;
      direction.fields.y = fVar22;
      direction.fields.x = fVar20;
      pCStack_f8 = (Characters_Horse_o *)0x42b7024;
      direction.fields.z = fVar18;
      bVar8 = UnityEngine_Physics__Raycast_4e776c0
                        (origin,direction,(UnityEngine_RaycastHit_o *)method_01,1000.0,iVar10,
                         (MethodInfo *)0x0);
      if ((char)bVar8 == '\0') {
        fVar18 = 1.0;
      }
      else {
        method_01 = (Characters_Horse_o *)auStack_90;
        pCStack_f8 = (Characters_Horse_o *)0x42b7034;
        __this_02.fields.m_Normal.fields.x = (float)uVar17;
        __this_02.fields.m_Point.fields.x = (float)in_stack_ffffffffffffff10._0_4_;
        __this_02.fields.m_Point.fields.y = (float)in_stack_ffffffffffffff10._4_4_;
        __this_02.fields.m_Point.fields.z = (float)in_stack_ffffffffffffff10._8_4_;
        __this_02.fields.m_Normal.fields.y = fVar18;
        __this_02.fields.m_Normal.fields.z = (float)uVar24;
        __this_02.fields.m_FaceID._0_2_ = (uint16_t)uVar25;
        __this_02.fields.m_FaceID._2_1_ = SUB41(uVar25,2);
        __this_02.fields.m_FaceID._3_1_ = SUB41(uVar25,3);
        __this_02.fields.m_Distance = (float)uVar26;
        __this_02.fields.m_UV.fields.x = fVar20;
        __this_02.fields.m_UV.fields.y = fVar22;
        __this_02.fields.m_Collider = iVar27;
        UVar23 = UnityEngine_RaycastHit__get_point(__this_02,(MethodInfo *)method_01);
        fVar18 = UVar23.fields.y + 1.0;
      }
      lVar2 = *(long *)&(__this_03->fields).Dead;
      if (lVar2 != 0) {
        pUVar7 = *(UnityEngine_Transform_o **)(lVar2 + 0x10);
        method_01 = (Characters_Horse_o *)0x0;
        if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
          pCStack_f8 = (Characters_Horse_o *)0x42b7076;
          value.fields.y = fVar18;
          value.fields.x = fVar15;
          value.fields.z = (float)uVar17;
          UnityEngine_Transform__set_position(pUVar7,value,(MethodInfo *)0x0);
          (__this_03->fields).WalkSpeed = *(float *)&(__this_03->fields).HorseCache;
          return;
        }
      }
    }
  }
  pCStack_f8 = (Characters_Horse_o *)0x42b7091;
  uVar16 = il2cpp_runtime_helper_022b2c90();
  fVar18 = extraout_XMM0_Dc;
  fVar13 = extraout_XMM0_Dd;
  pCStack_f8 = pCVar12;
  if (g_data_057addca == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Physics);
    g_data_057addca = '\x01';
  }
  fStack_108 = 0.0;
  uStack_104 = 0;
  pIStack_118 = (InvokerMethod)0x0;
  uStack_110 = 0;
  fStack_10c = 0.0;
  pIStack_128 = (Il2CppMethodPointer)0x0;
  pIStack_120 = (Il2CppMethodPointer)0x0;
  if (g_data_057a6844 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057a6844 = '\x01';
  }
  uVar1 = *(ulong *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
  fVar19 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
  fVar14 = (float)uVar16 + (float)uVar1;
  fVar15 = (float)((ulong)uVar16 >> 0x20) + (float)(uVar1 >> 0x20);
  fVar18 = fVar18 + 0.0;
  fVar13 = fVar13 + 0.0;
  fVar20 = (float)uVar17 + fVar19;
  fVar19 = -fVar19;
  uVar17 = 0x80000000;
  iVar27 = -0x80000000;
  UVar9.fields.m_Mask =
       (UnityEngine_LayerMask_Fields)
       (**(code **)(*(long *)&(((UnityEngine_RaycastHit_Fields *)&method_01->klass)->m_Point).fields + 0x4f8))
                 (method_01);
  iVar10 = UnityEngine_LayerMask__op_Implicit(UVar9,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  origin_00.fields.y = fVar15;
  origin_00.fields.x = fVar14;
  origin_00.fields.z = fVar20;
  direction_00.fields.z = fVar19;
  direction_00.fields.x = (float)(int)(uVar1 ^ 0x8000000080000000);
  direction_00.fields.y = (float)(int)((uVar1 ^ 0x8000000080000000) >> 0x20);
  bVar8 = UnityEngine_Physics__Raycast_4e776c0
                    (origin_00,direction_00,(UnityEngine_RaycastHit_o *)&pIStack_128,1000.0,iVar10,
                     (MethodInfo *)0x0);
  if ((char)bVar8 != '\0') {
    __this_01.fields.m_Normal.fields.x = fVar20;
    __this_01.fields.m_Point.fields.x = (float)in_stack_fffffffffffffe98._0_4_;
    __this_01.fields.m_Point.fields.y = (float)in_stack_fffffffffffffe98._4_4_;
    __this_01.fields.m_Point.fields.z = (float)in_stack_fffffffffffffe98._8_4_;
    __this_01.fields.m_Normal.fields.y = fVar14;
    __this_01.fields.m_Normal.fields.z = fVar15;
    __this_01.fields.m_FaceID = (uint32_t)fVar18;
    __this_01.fields.m_Distance = fVar13;
    __this_01.fields.m_UV.fields.x = fVar19;
    __this_01.fields.m_UV.fields.y = (float)uVar17;
    __this_01.fields.m_Collider = iVar27;
    UnityEngine_RaycastHit__get_point(__this_01,(MethodInfo *)&pIStack_128);
  }
  return;
}


// Characters.Horse$$Awake
// il2cpp: void Characters_Horse__Awake (Characters_Horse_o* __this, const MethodInfo* method);
// 0x42b6c50

void Characters_Horse__Awake(Characters_Horse_o *__this,MethodInfo *method)

{
  ulong uVar1;
  long lVar2;
  System_Action_Hashtable__o *pSVar3;
  UnityEngine_ParticleSystem_o *pUVar4;
  Outline_o *pOVar5;
  Outline_c *pOVar6;
  UnityEngine_Transform_o *pUVar7;
  UnityEngine_RaycastHit_o __this_00;
  UnityEngine_RaycastHit_o __this_01;
  bool_conflict bVar8;
  UnityEngine_LayerMask_o UVar9;
  int32_t iVar10;
  System_String_o *in_RAX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  Characters_Horse_o *pCVar11;
  char cVar12;
  System_String_o *animation;
  Characters_Horse_o *__this_02;
  Characters_Horse_o *method_01;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dd;
  undefined4 in_XMM1_Da;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  UnityEngine_Vector3_o UVar22;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o origin;
  UnityEngine_Vector3_o direction;
  UnityEngine_Vector3_o direction_00;
  undefined1 in_stack_fffffffffffffeb0 [12];
  undefined4 uVar23;
  Il2CppMethodPointer pIStack_110;
  Il2CppMethodPointer pIStack_108;
  InvokerMethod pIStack_100;
  uint32_t uStack_f8;
  float fStack_f4;
  float fStack_f0;
  undefined8 uStack_ec;
  Characters_Horse_o *pCStack_e0;
  undefined1 in_stack_ffffffffffffff28 [12];
  undefined4 uVar24;
  undefined4 uVar25;
  int32_t iVar26;
  float fStack_a8;
  float fStack_a4;
  undefined1 auStack_78 [64];
  UnityEngine_ParticleSystem_EmissionModule_Fields UStack_28;
  Characters_Horse_o *pCStack_20;
  UnityEngine_ParticleSystem_EmissionModule_Fields UStack_18;
  
  UStack_18.m_ParticleSystem = (UnityEngine_ParticleSystem_o *)in_RAX;
  if (g_data_057addc9 == '\0') {
    pCStack_20 = (Characters_Horse_o *)0x42b6c6c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HorseAnimations);
    g_data_057addc9 = '\x01';
  }
  pCStack_20 = (Characters_Horse_o *)0x42b6c7b;
  __this_02 = __this;
  Characters_BaseCharacter__Awake((Characters_BaseCharacter_o *)__this,method);
  cVar12 = (char)method;
  lVar2 = *(long *)&(__this->fields).Dead;
  if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x20), lVar2 != 0)) {
    if (*(char *)(lVar2 + 0x68) != '\0') {
      method_00 = extraout_RDX;
      if (*(int *)(TypeInfo_HorseAnimations + 0xe4) == 0) {
        pCStack_20 = (Characters_Horse_o *)0x42b6cb3;
        il2cpp_runtime_helper_02337ed0();
        method_00 = extraout_RDX_00;
      }
      animation = (System_String_o *)**(undefined8 **)(TypeInfo_HorseAnimations + 0xb8);
      in_XMM1_Da = 0.0;
      pCStack_20 = (Characters_Horse_o *)0x42b6cd3;
      __this_02 = __this;
      Characters_BaseCharacter__CrossFade((Characters_BaseCharacter_o *)__this,animation,0.1,0.0,method_00);
      cVar12 = (char)animation;
    }
    pSVar3 = (__this->fields).OnPlayerPropertiesChanged;
    if ((pSVar3 != (System_Action_Hashtable__o *)0x0) &&
       (__this_02 = (Characters_Horse_o *)(pSVar3->fields).extra_arg, __this_02 != (Characters_Horse_o *)0x0))
    {
      cVar12 = '\0';
      pCStack_20 = (Characters_Horse_o *)0x42b6cef;
      UnityEngine_ParticleSystem__Play_4e728d0((UnityEngine_ParticleSystem_o *)__this_02,(MethodInfo *)0x0);
      UStack_18.m_ParticleSystem = (UnityEngine_ParticleSystem_o *)0x0;
      pSVar3 = (__this->fields).OnPlayerPropertiesChanged;
      if (pSVar3 != (System_Action_Hashtable__o *)0x0) {
        pUVar4 = (UnityEngine_ParticleSystem_o *)(pSVar3->fields).extra_arg;
        __this_02 = (Characters_Horse_o *)0x0;
        if (pUVar4 != (UnityEngine_ParticleSystem_o *)0x0) {
          pCStack_20 = (Characters_Horse_o *)0x42b6d13;
          UStack_18.m_ParticleSystem =
               (UnityEngine_ParticleSystem_o *)
               UnityEngine_ParticleSystem__get_emission(pUVar4,(MethodInfo *)0x0);
          pCStack_20 = (Characters_Horse_o *)0x42b6d21;
          bVar8 = UnityEngine_ParticleSystem_EmissionModule__get_enabled
                            ((UnityEngine_ParticleSystem_EmissionModule_o)&UStack_18,(MethodInfo *)0x0);
          if ((char)bVar8 != '\0') {
            pCStack_20 = (Characters_Horse_o *)0x42b6d31;
            UnityEngine_ParticleSystem_EmissionModule__set_enabled
                      ((UnityEngine_ParticleSystem_EmissionModule_o)&UStack_18,0,(MethodInfo *)0x0);
          }
          return;
        }
      }
    }
  }
  pCStack_20 = (Characters_Horse_o *)0x42b6d3e;
  il2cpp_runtime_helper_022b2c90();
  UStack_28.m_ParticleSystem = (UnityEngine_ParticleSystem_o *)0x0;
  pSVar3 = (__this_02->fields).OnPlayerPropertiesChanged;
  pCStack_20 = __this;
  if (pSVar3 != (System_Action_Hashtable__o *)0x0) {
    pUVar4 = (UnityEngine_ParticleSystem_o *)(pSVar3->fields).extra_arg;
    __this_02 = (Characters_Horse_o *)0x0;
    if (pUVar4 != (UnityEngine_ParticleSystem_o *)0x0) {
      UStack_28.m_ParticleSystem =
           (UnityEngine_ParticleSystem_o *)UnityEngine_ParticleSystem__get_emission(pUVar4,(MethodInfo *)0x0);
      bVar8 = UnityEngine_ParticleSystem_EmissionModule__get_enabled
                        ((UnityEngine_ParticleSystem_EmissionModule_o)&UStack_28,(MethodInfo *)0x0);
      if (cVar12 == '\0') {
        if ((char)bVar8 == '\0') {
          return;
        }
        bVar8 = 0;
      }
      else {
        if ((char)bVar8 != '\0') {
          return;
        }
        bVar8 = 1;
      }
      UnityEngine_ParticleSystem_EmissionModule__set_enabled
                ((UnityEngine_ParticleSystem_EmissionModule_o)&UStack_28,bVar8,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pOVar5 = (__this_02->fields).OutlineComponent;
  pCVar11 = __this;
  method_01 = __this_02;
  auStack_78._56_8_ = __this;
  if ((pOVar5 != (Outline_o *)0x0) && (pOVar6 = pOVar5[1].klass, pOVar6 != (Outline_c *)0x0)) {
    pUVar7 = (UnityEngine_Transform_o *)(pOVar6->_1).name;
    method_01 = (Characters_Horse_o *)0x0;
    pCVar11 = __this_02;
    if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
      pCStack_e0 = (Characters_Horse_o *)0x42b6ded;
      UVar22 = UnityEngine_Transform__get_position(pUVar7,(MethodInfo *)0x0);
      in_XMM1_Da = UVar22.fields.z;
      if (g_data_057abfed == '\0') {
        pCStack_e0 = (Characters_Horse_o *)0x42b6e0d;
        il2cpp_runtime_helper_023445d0();
        g_data_057abfed = '\x01';
      }
      uVar16 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x3c);
      fVar18 = (float)uVar16;
      fVar14 = (float)((ulong)uVar16 >> 0x20);
      fVar17 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x44);
      pCStack_e0 = (Characters_Horse_o *)0x42b6e52;
      fVar13 = UnityEngine_Random__Range(-2.0,2.0,(MethodInfo *)0x0);
      fVar17 = fVar17 * fVar13;
      fVar18 = fVar13 * fVar18;
      fVar13 = fVar13 * fVar14;
      if (g_data_057a6846 == '\0') {
        pCStack_e0 = (Characters_Horse_o *)0x42b6e88;
        il2cpp_runtime_helper_023445d0();
        g_data_057a6846 = '\x01';
      }
      fStack_a8 = UVar22.fields.x;
      fStack_a4 = UVar22.fields.y;
      in_XMM1_Da = (float)in_XMM1_Da + fVar17;
      uVar16 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x48);
      fVar15 = (float)uVar16;
      fVar19 = (float)((ulong)uVar16 >> 0x20);
      fVar17 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x50);
      pCStack_e0 = (Characters_Horse_o *)0x42b6eee;
      fVar14 = UnityEngine_Random__Range(-2.0,2.0,(MethodInfo *)0x0);
      fVar17 = fVar17 * fVar14;
      fVar15 = fVar14 * fVar15;
      fVar14 = fVar14 * fVar19;
      if (g_data_057addca == '\0') {
        pCStack_e0 = (Characters_Horse_o *)0x42b6f21;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Physics);
        g_data_057addca = '\x01';
      }
      fVar15 = fStack_a8 + fVar18 + fVar15;
      in_XMM1_Da = (float)in_XMM1_Da + fVar17;
      auStack_78._32_4_ = 0;
      auStack_78._36_8_ = 0;
      auStack_78._16_8_ = 0;
      auStack_78._24_4_ = 0;
      auStack_78._28_4_ = 0;
      auStack_78._0_8_ = (Characters_Horse_c *)0x0;
      auStack_78._8_8_ = (void *)0x0;
      if (g_data_057a6844 == '\0') {
        pCStack_e0 = (Characters_Horse_o *)0x42b6f73;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a6844 = '\x01';
      }
      uVar16 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
      fVar18 = (float)uVar16;
      fVar20 = (float)((ulong)uVar16 >> 0x20);
      fVar17 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
      UVar22.fields.z = (float)in_XMM1_Da + fVar17;
      fVar19 = -fVar18;
      fVar21 = -fVar20;
      iVar26 = -0x80000000;
      fVar17 = -fVar17;
      uVar23._0_2_ = 0;
      uVar23._2_2_ = 0x8000;
      uVar24._0_2_ = 0;
      uVar24._2_1_ = '\0';
      uVar24._3_1_ = 0x80;
      uVar25 = 0x80000000;
      pCStack_e0 = (Characters_Horse_o *)0x42b6fd6;
      UVar9.fields.m_Mask =
           (UnityEngine_LayerMask_Fields)
           (**(code **)(*(long *)&(((UnityEngine_RaycastHit_Fields *)&__this_02->klass)->m_Point).fields +
                       0x4f8))(__this_02);
      pCStack_e0 = (Characters_Horse_o *)0x42b6fdf;
      iVar10 = UnityEngine_LayerMask__op_Implicit(UVar9,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
        pCStack_e0 = (Characters_Horse_o *)0x42b6ff9;
        il2cpp_runtime_helper_02337ed0();
      }
      method_01 = (Characters_Horse_o *)auStack_78;
      UVar22.fields.y = fStack_a4 + fVar13 + fVar14 + fVar20;
      UVar22.fields.x = fVar15 + fVar18;
      direction.fields.y = fVar21;
      direction.fields.x = fVar19;
      pCStack_e0 = (Characters_Horse_o *)0x42b7024;
      direction.fields.z = fVar17;
      bVar8 = UnityEngine_Physics__Raycast_4e776c0
                        (UVar22,direction,(UnityEngine_RaycastHit_o *)method_01,1000.0,iVar10,
                         (MethodInfo *)0x0);
      if ((char)bVar8 == '\0') {
        fVar17 = 1.0;
      }
      else {
        method_01 = (Characters_Horse_o *)auStack_78;
        pCStack_e0 = (Characters_Horse_o *)0x42b7034;
        __this_01.fields.m_Normal.fields.x = (float)in_XMM1_Da;
        __this_01.fields.m_Point.fields.x = (float)in_stack_ffffffffffffff28._0_4_;
        __this_01.fields.m_Point.fields.y = (float)in_stack_ffffffffffffff28._4_4_;
        __this_01.fields.m_Point.fields.z = (float)in_stack_ffffffffffffff28._8_4_;
        __this_01.fields.m_Normal.fields.y = fVar17;
        __this_01.fields.m_Normal.fields.z = (float)uVar23;
        __this_01.fields.m_FaceID._0_2_ = (uint16_t)uVar24;
        __this_01.fields.m_FaceID._2_1_ = SUB41(uVar24,2);
        __this_01.fields.m_FaceID._3_1_ = SUB41(uVar24,3);
        __this_01.fields.m_Distance = (float)uVar25;
        __this_01.fields.m_UV.fields.x = fVar19;
        __this_01.fields.m_UV.fields.y = fVar21;
        __this_01.fields.m_Collider = iVar26;
        UVar22 = UnityEngine_RaycastHit__get_point(__this_01,(MethodInfo *)method_01);
        fVar17 = UVar22.fields.y + 1.0;
      }
      lVar2 = *(long *)&(__this_02->fields).Dead;
      if (lVar2 != 0) {
        pUVar7 = *(UnityEngine_Transform_o **)(lVar2 + 0x10);
        method_01 = (Characters_Horse_o *)0x0;
        if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
          pCStack_e0 = (Characters_Horse_o *)0x42b7076;
          value.fields.y = fVar17;
          value.fields.x = fVar15;
          value.fields.z = (float)in_XMM1_Da;
          UnityEngine_Transform__set_position(pUVar7,value,(MethodInfo *)0x0);
          (__this_02->fields).WalkSpeed = *(float *)&(__this_02->fields).HorseCache;
          return;
        }
      }
    }
  }
  pCStack_e0 = (Characters_Horse_o *)0x42b7091;
  uVar16 = il2cpp_runtime_helper_022b2c90();
  fVar17 = extraout_XMM0_Dc;
  fVar13 = extraout_XMM0_Dd;
  pCStack_e0 = pCVar11;
  if (g_data_057addca == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Physics);
    g_data_057addca = '\x01';
  }
  fStack_f0 = 0.0;
  uStack_ec = 0;
  pIStack_100 = (InvokerMethod)0x0;
  uStack_f8 = 0;
  fStack_f4 = 0.0;
  pIStack_110 = (Il2CppMethodPointer)0x0;
  pIStack_108 = (Il2CppMethodPointer)0x0;
  if (g_data_057a6844 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057a6844 = '\x01';
  }
  uVar1 = *(ulong *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
  fVar18 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
  fVar14 = (float)uVar16 + (float)uVar1;
  fVar15 = (float)((ulong)uVar16 >> 0x20) + (float)(uVar1 >> 0x20);
  fVar17 = fVar17 + 0.0;
  fVar13 = fVar13 + 0.0;
  fVar19 = (float)in_XMM1_Da + fVar18;
  fVar18 = -fVar18;
  uVar23 = 0x80000000;
  iVar26 = -0x80000000;
  UVar9.fields.m_Mask =
       (UnityEngine_LayerMask_Fields)
       (**(code **)(*(long *)&(((UnityEngine_RaycastHit_Fields *)&method_01->klass)->m_Point).fields + 0x4f8))
                 (method_01);
  iVar10 = UnityEngine_LayerMask__op_Implicit(UVar9,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  origin.fields.y = fVar15;
  origin.fields.x = fVar14;
  origin.fields.z = fVar19;
  direction_00.fields.z = fVar18;
  direction_00.fields.x = (float)(int)(uVar1 ^ 0x8000000080000000);
  direction_00.fields.y = (float)(int)((uVar1 ^ 0x8000000080000000) >> 0x20);
  bVar8 = UnityEngine_Physics__Raycast_4e776c0
                    (origin,direction_00,(UnityEngine_RaycastHit_o *)&pIStack_110,1000.0,iVar10,
                     (MethodInfo *)0x0);
  if ((char)bVar8 != '\0') {
    __this_00.fields.m_Normal.fields.x = fVar19;
    __this_00.fields.m_Point.fields.x = (float)in_stack_fffffffffffffeb0._0_4_;
    __this_00.fields.m_Point.fields.y = (float)in_stack_fffffffffffffeb0._4_4_;
    __this_00.fields.m_Point.fields.z = (float)in_stack_fffffffffffffeb0._8_4_;
    __this_00.fields.m_Normal.fields.y = fVar14;
    __this_00.fields.m_Normal.fields.z = fVar15;
    __this_00.fields.m_FaceID = (uint32_t)fVar17;
    __this_00.fields.m_Distance = fVar13;
    __this_00.fields.m_UV.fields.x = fVar18;
    __this_00.fields.m_UV.fields.y = (float)uVar23;
    __this_00.fields.m_Collider = iVar26;
    UnityEngine_RaycastHit__get_point(__this_00,(MethodInfo *)&pIStack_110);
  }
  return;
}


// Characters.Horse$$ToggleDust
// il2cpp: void Characters_Horse__ToggleDust (Characters_Horse_o* __this, bool toggle, const MethodInfo* method);
// 0x42b6d40

void Characters_Horse__ToggleDust(Characters_Horse_o *__this,bool_conflict toggle,MethodInfo *method)

{
  ulong uVar1;
  System_Action_Hashtable__o *pSVar2;
  UnityEngine_ParticleSystem_o *__this_00;
  Outline_o *pOVar3;
  Outline_c *pOVar4;
  UnityEngine_Transform_o *pUVar5;
  long lVar6;
  UnityEngine_RaycastHit_o __this_01;
  UnityEngine_RaycastHit_o __this_02;
  bool_conflict bVar7;
  UnityEngine_LayerMask_o UVar8;
  int32_t iVar9;
  Characters_Horse_o *unaff_RBX;
  Characters_Horse_o *method_00;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dd;
  undefined4 in_XMM1_Da;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  UnityEngine_Vector3_o UVar19;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o origin;
  UnityEngine_Vector3_o direction;
  UnityEngine_Vector3_o direction_00;
  undefined1 in_stack_fffffffffffffec8 [12];
  undefined4 uVar20;
  Il2CppMethodPointer pIStack_f8;
  Il2CppMethodPointer pIStack_f0;
  InvokerMethod pIStack_e8;
  uint32_t uStack_e0;
  float fStack_dc;
  float fStack_d8;
  undefined8 uStack_d4;
  Characters_Horse_o *pCStack_c8;
  undefined1 in_stack_ffffffffffffff40 [12];
  undefined4 uVar21;
  undefined4 uVar22;
  int32_t iVar23;
  float fStack_90;
  float fStack_8c;
  undefined1 auStack_60 [56];
  undefined8 local_10;
  
  local_10._0_4_ = 0;
  local_10._4_4_ = 0;
  pSVar2 = (__this->fields).OnPlayerPropertiesChanged;
  if (pSVar2 != (System_Action_Hashtable__o *)0x0) {
    __this_00 = (UnityEngine_ParticleSystem_o *)(pSVar2->fields).extra_arg;
    __this = (Characters_Horse_o *)0x0;
    if (__this_00 != (UnityEngine_ParticleSystem_o *)0x0) {
      local_10 = UnityEngine_ParticleSystem__get_emission(__this_00,(MethodInfo *)0x0);
      bVar7 = UnityEngine_ParticleSystem_EmissionModule__get_enabled
                        ((UnityEngine_ParticleSystem_EmissionModule_o)&local_10,(MethodInfo *)0x0);
      if ((char)toggle == '\0') {
        if ((char)bVar7 == '\0') {
          return;
        }
        bVar7 = 0;
      }
      else {
        if ((char)bVar7 != '\0') {
          return;
        }
        bVar7 = 1;
      }
      UnityEngine_ParticleSystem_EmissionModule__set_enabled
                ((UnityEngine_ParticleSystem_EmissionModule_o)&local_10,bVar7,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pOVar3 = (__this->fields).OutlineComponent;
  method_00 = __this;
  if ((pOVar3 != (Outline_o *)0x0) && (pOVar4 = pOVar3[1].klass, pOVar4 != (Outline_c *)0x0)) {
    pUVar5 = (UnityEngine_Transform_o *)(pOVar4->_1).name;
    method_00 = (Characters_Horse_o *)0x0;
    unaff_RBX = __this;
    if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
      pCStack_c8 = (Characters_Horse_o *)0x42b6ded;
      UVar19 = UnityEngine_Transform__get_position(pUVar5,(MethodInfo *)0x0);
      in_XMM1_Da = UVar19.fields.z;
      if (g_data_057abfed == '\0') {
        pCStack_c8 = (Characters_Horse_o *)0x42b6e0d;
        il2cpp_runtime_helper_023445d0();
        g_data_057abfed = '\x01';
      }
      uVar13 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x3c);
      fVar15 = (float)uVar13;
      fVar11 = (float)((ulong)uVar13 >> 0x20);
      fVar14 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x44);
      pCStack_c8 = (Characters_Horse_o *)0x42b6e52;
      fVar10 = UnityEngine_Random__Range(-2.0,2.0,(MethodInfo *)0x0);
      fVar14 = fVar14 * fVar10;
      fVar15 = fVar10 * fVar15;
      fVar10 = fVar10 * fVar11;
      if (g_data_057a6846 == '\0') {
        pCStack_c8 = (Characters_Horse_o *)0x42b6e88;
        il2cpp_runtime_helper_023445d0();
        g_data_057a6846 = '\x01';
      }
      fStack_90 = UVar19.fields.x;
      fStack_8c = UVar19.fields.y;
      in_XMM1_Da = (float)in_XMM1_Da + fVar14;
      uVar13 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x48);
      fVar12 = (float)uVar13;
      fVar16 = (float)((ulong)uVar13 >> 0x20);
      fVar14 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x50);
      pCStack_c8 = (Characters_Horse_o *)0x42b6eee;
      fVar11 = UnityEngine_Random__Range(-2.0,2.0,(MethodInfo *)0x0);
      fVar14 = fVar14 * fVar11;
      fVar12 = fVar11 * fVar12;
      fVar11 = fVar11 * fVar16;
      if (g_data_057addca == '\0') {
        pCStack_c8 = (Characters_Horse_o *)0x42b6f21;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Physics);
        g_data_057addca = '\x01';
      }
      fVar12 = fStack_90 + fVar15 + fVar12;
      in_XMM1_Da = (float)in_XMM1_Da + fVar14;
      auStack_60._32_4_ = 0;
      auStack_60._36_8_ = 0;
      auStack_60._16_8_ = 0;
      auStack_60._24_4_ = 0;
      auStack_60._28_4_ = 0;
      auStack_60._0_8_ = (Characters_Horse_c *)0x0;
      auStack_60._8_8_ = (void *)0x0;
      if (g_data_057a6844 == '\0') {
        pCStack_c8 = (Characters_Horse_o *)0x42b6f73;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a6844 = '\x01';
      }
      uVar13 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
      fVar15 = (float)uVar13;
      fVar17 = (float)((ulong)uVar13 >> 0x20);
      fVar14 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
      UVar19.fields.z = (float)in_XMM1_Da + fVar14;
      fVar16 = -fVar15;
      fVar18 = -fVar17;
      iVar23 = -0x80000000;
      fVar14 = -fVar14;
      uVar20._0_2_ = 0;
      uVar20._2_2_ = 0x8000;
      uVar21._0_2_ = 0;
      uVar21._2_1_ = '\0';
      uVar21._3_1_ = 0x80;
      uVar22 = 0x80000000;
      pCStack_c8 = (Characters_Horse_o *)0x42b6fd6;
      UVar8.fields.m_Mask =
           (UnityEngine_LayerMask_Fields)
           (**(code **)(*(long *)&(((UnityEngine_RaycastHit_Fields *)&__this->klass)->m_Point).fields + 0x4f8)
           )(__this);
      pCStack_c8 = (Characters_Horse_o *)0x42b6fdf;
      iVar9 = UnityEngine_LayerMask__op_Implicit(UVar8,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
        pCStack_c8 = (Characters_Horse_o *)0x42b6ff9;
        il2cpp_runtime_helper_02337ed0();
      }
      method_00 = (Characters_Horse_o *)auStack_60;
      UVar19.fields.y = fStack_8c + fVar10 + fVar11 + fVar17;
      UVar19.fields.x = fVar12 + fVar15;
      direction.fields.y = fVar18;
      direction.fields.x = fVar16;
      pCStack_c8 = (Characters_Horse_o *)0x42b7024;
      direction.fields.z = fVar14;
      bVar7 = UnityEngine_Physics__Raycast_4e776c0
                        (UVar19,direction,(UnityEngine_RaycastHit_o *)method_00,1000.0,iVar9,(MethodInfo *)0x0
                        );
      if ((char)bVar7 == '\0') {
        fVar14 = 1.0;
      }
      else {
        method_00 = (Characters_Horse_o *)auStack_60;
        pCStack_c8 = (Characters_Horse_o *)0x42b7034;
        __this_02.fields.m_Normal.fields.x = (float)in_XMM1_Da;
        __this_02.fields.m_Point.fields.x = (float)in_stack_ffffffffffffff40._0_4_;
        __this_02.fields.m_Point.fields.y = (float)in_stack_ffffffffffffff40._4_4_;
        __this_02.fields.m_Point.fields.z = (float)in_stack_ffffffffffffff40._8_4_;
        __this_02.fields.m_Normal.fields.y = fVar14;
        __this_02.fields.m_Normal.fields.z = (float)uVar20;
        __this_02.fields.m_FaceID._0_2_ = (uint16_t)uVar21;
        __this_02.fields.m_FaceID._2_1_ = SUB41(uVar21,2);
        __this_02.fields.m_FaceID._3_1_ = SUB41(uVar21,3);
        __this_02.fields.m_Distance = (float)uVar22;
        __this_02.fields.m_UV.fields.x = fVar16;
        __this_02.fields.m_UV.fields.y = fVar18;
        __this_02.fields.m_Collider = iVar23;
        UVar19 = UnityEngine_RaycastHit__get_point(__this_02,(MethodInfo *)method_00);
        fVar14 = UVar19.fields.y + 1.0;
      }
      lVar6 = *(long *)&(__this->fields).Dead;
      if (lVar6 != 0) {
        pUVar5 = *(UnityEngine_Transform_o **)(lVar6 + 0x10);
        method_00 = (Characters_Horse_o *)0x0;
        if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
          pCStack_c8 = (Characters_Horse_o *)0x42b7076;
          value.fields.y = fVar14;
          value.fields.x = fVar12;
          value.fields.z = (float)in_XMM1_Da;
          UnityEngine_Transform__set_position(pUVar5,value,(MethodInfo *)0x0);
          (__this->fields).WalkSpeed = *(float *)&(__this->fields).HorseCache;
          return;
        }
      }
    }
  }
  pCStack_c8 = (Characters_Horse_o *)0x42b7091;
  uVar13 = il2cpp_runtime_helper_022b2c90();
  fVar14 = extraout_XMM0_Dc;
  fVar10 = extraout_XMM0_Dd;
  pCStack_c8 = unaff_RBX;
  if (g_data_057addca == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Physics);
    g_data_057addca = '\x01';
  }
  fStack_d8 = 0.0;
  uStack_d4 = 0;
  pIStack_e8 = (InvokerMethod)0x0;
  uStack_e0 = 0;
  fStack_dc = 0.0;
  pIStack_f8 = (Il2CppMethodPointer)0x0;
  pIStack_f0 = (Il2CppMethodPointer)0x0;
  if (g_data_057a6844 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057a6844 = '\x01';
  }
  uVar1 = *(ulong *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
  fVar15 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
  fVar11 = (float)uVar13 + (float)uVar1;
  fVar12 = (float)((ulong)uVar13 >> 0x20) + (float)(uVar1 >> 0x20);
  fVar14 = fVar14 + 0.0;
  fVar10 = fVar10 + 0.0;
  fVar16 = (float)in_XMM1_Da + fVar15;
  fVar15 = -fVar15;
  uVar20 = 0x80000000;
  iVar23 = -0x80000000;
  UVar8.fields.m_Mask =
       (UnityEngine_LayerMask_Fields)
       (**(code **)(*(long *)&(((UnityEngine_RaycastHit_Fields *)&method_00->klass)->m_Point).fields + 0x4f8))
                 (method_00);
  iVar9 = UnityEngine_LayerMask__op_Implicit(UVar8,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  origin.fields.y = fVar12;
  origin.fields.x = fVar11;
  origin.fields.z = fVar16;
  direction_00.fields.z = fVar15;
  direction_00.fields.x = (float)(int)(uVar1 ^ 0x8000000080000000);
  direction_00.fields.y = (float)(int)((uVar1 ^ 0x8000000080000000) >> 0x20);
  bVar7 = UnityEngine_Physics__Raycast_4e776c0
                    (origin,direction_00,(UnityEngine_RaycastHit_o *)&pIStack_f8,1000.0,iVar9,
                     (MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
    __this_01.fields.m_Normal.fields.x = fVar16;
    __this_01.fields.m_Point.fields.x = (float)in_stack_fffffffffffffec8._0_4_;
    __this_01.fields.m_Point.fields.y = (float)in_stack_fffffffffffffec8._4_4_;
    __this_01.fields.m_Point.fields.z = (float)in_stack_fffffffffffffec8._8_4_;
    __this_01.fields.m_Normal.fields.y = fVar11;
    __this_01.fields.m_Normal.fields.z = fVar12;
    __this_01.fields.m_FaceID = (uint32_t)fVar14;
    __this_01.fields.m_Distance = fVar10;
    __this_01.fields.m_UV.fields.x = fVar15;
    __this_01.fields.m_UV.fields.y = (float)uVar20;
    __this_01.fields.m_Collider = iVar23;
    UnityEngine_RaycastHit__get_point(__this_01,(MethodInfo *)&pIStack_f8);
  }
  return;
}


// Characters.Horse$$TeleportToHuman
// il2cpp: void Characters_Horse__TeleportToHuman (Characters_Horse_o* __this, const MethodInfo* method);
// 0x42b6db0

void Characters_Horse__TeleportToHuman(Characters_Horse_o *__this,MethodInfo *method)

{
  ulong uVar1;
  Outline_o *pOVar2;
  Outline_c *pOVar3;
  UnityEngine_Transform_o *pUVar4;
  long lVar5;
  UnityEngine_RaycastHit_o __this_00;
  UnityEngine_RaycastHit_o __this_01;
  UnityEngine_LayerMask_o UVar6;
  int32_t iVar7;
  bool_conflict bVar8;
  Characters_Horse_o *unaff_RBX;
  Characters_Horse_o *method_00;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dd;
  undefined4 in_XMM1_Da;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  UnityEngine_Vector3_o UVar18;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o origin;
  UnityEngine_Vector3_o direction;
  UnityEngine_Vector3_o direction_00;
  undefined1 in_stack_fffffffffffffee0 [12];
  undefined4 uVar19;
  Il2CppMethodPointer pIStack_e0;
  Il2CppMethodPointer pIStack_d8;
  InvokerMethod pIStack_d0;
  uint32_t uStack_c8;
  float fStack_c4;
  float fStack_c0;
  undefined8 uStack_bc;
  Characters_Horse_o *pCStack_b0;
  undefined1 in_stack_ffffffffffffff58 [12];
  undefined4 uVar20;
  undefined4 uVar21;
  int32_t iVar22;
  float local_78;
  float fStack_74;
  Characters_Horse_c *local_48;
  void *pvStack_40;
  intptr_t iStack_38;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined8 uStack_24;
  
  pOVar2 = (__this->fields).OutlineComponent;
  method_00 = __this;
  if (((pOVar2 != (Outline_o *)0x0) && (pOVar3 = pOVar2[1].klass, pOVar3 != (Outline_c *)0x0)) &&
     (pUVar4 = (UnityEngine_Transform_o *)(pOVar3->_1).name, method_00 = (Characters_Horse_o *)0x0,
     unaff_RBX = __this, pUVar4 != (UnityEngine_Transform_o *)0x0)) {
    pCStack_b0 = (Characters_Horse_o *)0x42b6ded;
    UVar18 = UnityEngine_Transform__get_position(pUVar4,(MethodInfo *)0x0);
    in_XMM1_Da = UVar18.fields.z;
    if (g_data_057abfed == '\0') {
      pCStack_b0 = (Characters_Horse_o *)0x42b6e0d;
      il2cpp_runtime_helper_023445d0();
      g_data_057abfed = '\x01';
    }
    uVar12 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x3c);
    fVar14 = (float)uVar12;
    fVar10 = (float)((ulong)uVar12 >> 0x20);
    fVar13 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x44);
    pCStack_b0 = (Characters_Horse_o *)0x42b6e52;
    fVar9 = UnityEngine_Random__Range(-2.0,2.0,(MethodInfo *)0x0);
    fVar13 = fVar13 * fVar9;
    fVar14 = fVar9 * fVar14;
    fVar9 = fVar9 * fVar10;
    if (g_data_057a6846 == '\0') {
      pCStack_b0 = (Characters_Horse_o *)0x42b6e88;
      il2cpp_runtime_helper_023445d0();
      g_data_057a6846 = '\x01';
    }
    local_78 = UVar18.fields.x;
    fStack_74 = UVar18.fields.y;
    in_XMM1_Da = (float)in_XMM1_Da + fVar13;
    uVar12 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x48);
    fVar11 = (float)uVar12;
    fVar15 = (float)((ulong)uVar12 >> 0x20);
    fVar13 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x50);
    pCStack_b0 = (Characters_Horse_o *)0x42b6eee;
    fVar10 = UnityEngine_Random__Range(-2.0,2.0,(MethodInfo *)0x0);
    fVar13 = fVar13 * fVar10;
    fVar11 = fVar10 * fVar11;
    fVar10 = fVar10 * fVar15;
    if (g_data_057addca == '\0') {
      pCStack_b0 = (Characters_Horse_o *)0x42b6f21;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Physics);
      g_data_057addca = '\x01';
    }
    fVar11 = local_78 + fVar14 + fVar11;
    in_XMM1_Da = (float)in_XMM1_Da + fVar13;
    uStack_28 = 0;
    uStack_24 = 0;
    iStack_38 = 0;
    uStack_30 = 0;
    local_2c = 0;
    local_48 = (Characters_Horse_c *)0x0;
    pvStack_40 = (void *)0x0;
    if (g_data_057a6844 == '\0') {
      pCStack_b0 = (Characters_Horse_o *)0x42b6f73;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057a6844 = '\x01';
    }
    uVar12 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
    fVar14 = (float)uVar12;
    fVar16 = (float)((ulong)uVar12 >> 0x20);
    fVar13 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
    UVar18.fields.z = (float)in_XMM1_Da + fVar13;
    fVar15 = -fVar14;
    fVar17 = -fVar16;
    iVar22 = -0x80000000;
    fVar13 = -fVar13;
    uVar19._0_2_ = 0;
    uVar19._2_2_ = 0x8000;
    uVar20._0_2_ = 0;
    uVar20._2_1_ = '\0';
    uVar20._3_1_ = 0x80;
    uVar21 = 0x80000000;
    pCStack_b0 = (Characters_Horse_o *)0x42b6fd6;
    UVar6.fields.m_Mask =
         (UnityEngine_LayerMask_Fields)(*(__this->klass->vtable)._60_get_GroundMask.methodPtr)(__this);
    pCStack_b0 = (Characters_Horse_o *)0x42b6fdf;
    iVar7 = UnityEngine_LayerMask__op_Implicit(UVar6,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
      pCStack_b0 = (Characters_Horse_o *)0x42b6ff9;
      il2cpp_runtime_helper_02337ed0();
    }
    method_00 = (Characters_Horse_o *)&stack0xffffffffffffffb8;
    UVar18.fields.y = fStack_74 + fVar9 + fVar10 + fVar16;
    UVar18.fields.x = fVar11 + fVar14;
    direction.fields.y = fVar17;
    direction.fields.x = fVar15;
    pCStack_b0 = (Characters_Horse_o *)0x42b7024;
    direction.fields.z = fVar13;
    bVar8 = UnityEngine_Physics__Raycast_4e776c0
                      (UVar18,direction,(UnityEngine_RaycastHit_o *)method_00,1000.0,iVar7,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      fVar13 = 1.0;
    }
    else {
      method_00 = (Characters_Horse_o *)&stack0xffffffffffffffb8;
      pCStack_b0 = (Characters_Horse_o *)0x42b7034;
      __this_01.fields.m_Normal.fields.x = (float)in_XMM1_Da;
      __this_01.fields.m_Point.fields.x = (float)in_stack_ffffffffffffff58._0_4_;
      __this_01.fields.m_Point.fields.y = (float)in_stack_ffffffffffffff58._4_4_;
      __this_01.fields.m_Point.fields.z = (float)in_stack_ffffffffffffff58._8_4_;
      __this_01.fields.m_Normal.fields.y = fVar13;
      __this_01.fields.m_Normal.fields.z = (float)uVar19;
      __this_01.fields.m_FaceID._0_2_ = (uint16_t)uVar20;
      __this_01.fields.m_FaceID._2_1_ = SUB41(uVar20,2);
      __this_01.fields.m_FaceID._3_1_ = SUB41(uVar20,3);
      __this_01.fields.m_Distance = (float)uVar21;
      __this_01.fields.m_UV.fields.x = fVar15;
      __this_01.fields.m_UV.fields.y = fVar17;
      __this_01.fields.m_Collider = iVar22;
      UVar18 = UnityEngine_RaycastHit__get_point(__this_01,(MethodInfo *)method_00);
      fVar13 = UVar18.fields.y + 1.0;
    }
    lVar5 = *(long *)&(__this->fields).Dead;
    if ((lVar5 != 0) &&
       (pUVar4 = *(UnityEngine_Transform_o **)(lVar5 + 0x10), method_00 = (Characters_Horse_o *)0x0,
       pUVar4 != (UnityEngine_Transform_o *)0x0)) {
      pCStack_b0 = (Characters_Horse_o *)0x42b7076;
      value.fields.y = fVar13;
      value.fields.x = fVar11;
      value.fields.z = (float)in_XMM1_Da;
      UnityEngine_Transform__set_position(pUVar4,value,(MethodInfo *)0x0);
      (__this->fields).WalkSpeed = *(float *)&(__this->fields).HorseCache;
      return;
    }
  }
  pCStack_b0 = (Characters_Horse_o *)0x42b7091;
  uVar12 = il2cpp_runtime_helper_022b2c90();
  fVar13 = extraout_XMM0_Dc;
  fVar9 = extraout_XMM0_Dd;
  pCStack_b0 = unaff_RBX;
  if (g_data_057addca == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Physics);
    g_data_057addca = '\x01';
  }
  fStack_c0 = 0.0;
  uStack_bc = 0;
  pIStack_d0 = (InvokerMethod)0x0;
  uStack_c8 = 0;
  fStack_c4 = 0.0;
  pIStack_e0 = (Il2CppMethodPointer)0x0;
  pIStack_d8 = (Il2CppMethodPointer)0x0;
  if (g_data_057a6844 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057a6844 = '\x01';
  }
  uVar1 = *(ulong *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
  fVar14 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
  fVar10 = (float)uVar12 + (float)uVar1;
  fVar11 = (float)((ulong)uVar12 >> 0x20) + (float)(uVar1 >> 0x20);
  fVar13 = fVar13 + 0.0;
  fVar9 = fVar9 + 0.0;
  fVar15 = (float)in_XMM1_Da + fVar14;
  fVar14 = -fVar14;
  uVar19 = 0x80000000;
  iVar22 = -0x80000000;
  UVar6.fields.m_Mask =
       (UnityEngine_LayerMask_Fields)
       (**(code **)(*(long *)&(((UnityEngine_RaycastHit_Fields *)&method_00->klass)->m_Point).fields + 0x4f8))
                 (method_00);
  iVar7 = UnityEngine_LayerMask__op_Implicit(UVar6,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  origin.fields.y = fVar11;
  origin.fields.x = fVar10;
  origin.fields.z = fVar15;
  direction_00.fields.z = fVar14;
  direction_00.fields.x = (float)(int)(uVar1 ^ 0x8000000080000000);
  direction_00.fields.y = (float)(int)((uVar1 ^ 0x8000000080000000) >> 0x20);
  bVar8 = UnityEngine_Physics__Raycast_4e776c0
                    (origin,direction_00,(UnityEngine_RaycastHit_o *)&pIStack_e0,1000.0,iVar7,
                     (MethodInfo *)0x0);
  if ((char)bVar8 != '\0') {
    __this_00.fields.m_Normal.fields.x = fVar15;
    __this_00.fields.m_Point.fields.x = (float)in_stack_fffffffffffffee0._0_4_;
    __this_00.fields.m_Point.fields.y = (float)in_stack_fffffffffffffee0._4_4_;
    __this_00.fields.m_Point.fields.z = (float)in_stack_fffffffffffffee0._8_4_;
    __this_00.fields.m_Normal.fields.y = fVar10;
    __this_00.fields.m_Normal.fields.z = fVar11;
    __this_00.fields.m_FaceID = (uint32_t)fVar13;
    __this_00.fields.m_Distance = fVar9;
    __this_00.fields.m_UV.fields.x = fVar14;
    __this_00.fields.m_UV.fields.y = (float)uVar19;
    __this_00.fields.m_Collider = iVar22;
    UnityEngine_RaycastHit__get_point(__this_00,(MethodInfo *)&pIStack_e0);
  }
  return;
}


// Characters.Horse$$GetHeight
// il2cpp: float Characters_Horse__GetHeight (Characters_Horse_o* __this, UnityEngine_Vector3_o pt, const MethodInfo* method);
// 0x42b70a0

float Characters_Horse__GetHeight(Characters_Horse_o *__this,UnityEngine_Vector3_o pt,MethodInfo *method)

{
  ulong uVar1;
  UnityEngine_RaycastHit_o __this_00;
  UnityEngine_LayerMask_o mask;
  int32_t layerMask;
  bool_conflict bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float in_XMM0_Dc;
  float fVar6;
  float in_XMM0_Dd;
  float fVar7;
  float fVar8;
  float fVar9;
  UnityEngine_Vector3_o UVar10;
  UnityEngine_Vector3_o direction;
  undefined1 in_stack_ffffffffffffff88 [12];
  undefined4 uVar11;
  int32_t iVar12;
  undefined1 local_38 [32];
  float fStack_18;
  undefined8 uStack_14;
  
  fVar8 = pt.fields.z;
  fVar3 = pt.fields.x;
  fVar5 = pt.fields.y;
  if (g_data_057addca == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Physics);
    g_data_057addca = '\x01';
  }
  fStack_18 = 0.0;
  uStack_14 = 0;
  local_38._16_8_ = (InvokerMethod)0x0;
  local_38._24_4_ = 0;
  local_38._28_4_ = 0.0;
  local_38._0_8_ = (Il2CppMethodPointer)0x0;
  local_38._8_8_ = (Il2CppMethodPointer)0x0;
  if (g_data_057a6844 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057a6844 = '\x01';
  }
  uVar1 = *(ulong *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
  fVar9 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
  fVar3 = fVar3 + (float)uVar1;
  fVar5 = fVar5 + (float)(uVar1 >> 0x20);
  fVar6 = in_XMM0_Dc + 0.0;
  fVar7 = in_XMM0_Dd + 0.0;
  fVar8 = fVar8 + fVar9;
  fVar9 = -fVar9;
  uVar11 = 0x80000000;
  iVar12 = -0x80000000;
  mask.fields.m_Mask =
       (UnityEngine_LayerMask_Fields)(*(__this->klass->vtable)._60_get_GroundMask.methodPtr)(__this);
  layerMask = UnityEngine_LayerMask__op_Implicit(mask,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  UVar10.fields.y = fVar5;
  UVar10.fields.x = fVar3;
  UVar10.fields.z = fVar8;
  direction.fields.z = fVar9;
  direction.fields.x = (float)(int)(uVar1 ^ 0x8000000080000000);
  direction.fields.y = (float)(int)((uVar1 ^ 0x8000000080000000) >> 0x20);
  bVar2 = UnityEngine_Physics__Raycast_4e776c0
                    (UVar10,direction,(UnityEngine_RaycastHit_o *)local_38,1000.0,layerMask,(MethodInfo *)0x0)
  ;
  fVar4 = 0.0;
  if ((char)bVar2 != '\0') {
    __this_00.fields.m_Normal.fields.x = fVar8;
    __this_00.fields.m_Point.fields.x = (float)in_stack_ffffffffffffff88._0_4_;
    __this_00.fields.m_Point.fields.y = (float)in_stack_ffffffffffffff88._4_4_;
    __this_00.fields.m_Point.fields.z = (float)in_stack_ffffffffffffff88._8_4_;
    __this_00.fields.m_Normal.fields.y = fVar3;
    __this_00.fields.m_Normal.fields.z = fVar5;
    __this_00.fields.m_FaceID = (uint32_t)fVar6;
    __this_00.fields.m_Distance = fVar7;
    __this_00.fields.m_UV.fields.x = fVar9;
    __this_00.fields.m_UV.fields.y = (float)uVar11;
    __this_00.fields.m_Collider = iVar12;
    UVar10 = UnityEngine_RaycastHit__get_point(__this_00,(MethodInfo *)local_38);
    fVar4 = UVar10.fields.y;
  }
  return fVar4;
}


// Characters.Horse$$UpdateIdle
// il2cpp: void Characters_Horse__UpdateIdle (Characters_Horse_o* __this, const MethodInfo* method);
// 0x42b71e0

void Characters_Horse__UpdateIdle(Characters_Horse_o *__this,MethodInfo *method)

{
  uint uVar1;
  Characters_AnimationHandler_o *__this_00;
  void *pvVar2;
  UnityEngine_Rigidbody_o *pUVar3;
  UnityEngine_ParticleSystem_o *pUVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  UnityEngine_Vector3_Fields fromDirection;
  undefined2 uVar8;
  char cVar9;
  bool_conflict bVar10;
  int32_t iVar11;
  UnityEngine_GameObject_o *targetGo;
  uint32_t *puVar12;
  void *pvVar13;
  UnityEngine_Transform_o *pUVar14;
  Il2CppRuntimeInterfaceOffsetPair *pIVar15;
  long lVar16;
  undefined8 uVar17;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *method_01;
  MethodInfo *extraout_RDX_05;
  MethodInfo *extraout_RDX_06;
  MethodInfo *extraout_RDX_07;
  MethodInfo *method_02;
  MethodInfo *extraout_RDX_08;
  MethodInfo *extraout_RDX_09;
  MethodInfo *pMVar18;
  MethodInfo *method_03;
  MethodInfo *extraout_RDX_10;
  MethodInfo *extraout_RDX_11;
  MethodInfo *method_04;
  MethodInfo *method_05;
  MethodInfo *extraout_RDX_12;
  MethodInfo *extraout_RDX_13;
  MethodInfo *extraout_RDX_14;
  MethodInfo *extraout_RDX_15;
  undefined8 uVar19;
  MethodInfo *extraout_RDX_16;
  MethodInfo *extraout_RDX_17;
  MethodInfo *extraout_RDX_18;
  MethodInfo *extraout_RDX_19;
  Il2CppClass **__this_01;
  Il2CppClass **unaff_RBP;
  System_String_o *sound;
  Il2CppClass *pIVar20;
  Il2CppClass *pIVar21;
  undefined8 uVar22;
  long *plVar23;
  long *plVar24;
  UnityEngine_ParticleSystem_EmissionModule_o __this_02;
  Il2CppClass *__this_03;
  undefined1 uVar25;
  Il2CppClass **__this_04;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dc_03;
  undefined4 extraout_XMM0_Dc_04;
  undefined4 extraout_XMM0_Dc_05;
  undefined4 extraout_XMM0_Dc_06;
  undefined4 extraout_XMM0_Dc_07;
  undefined4 extraout_XMM0_Dc_08;
  float extraout_XMM0_Dc_09;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  undefined4 extraout_XMM0_Dd_03;
  undefined4 extraout_XMM0_Dd_04;
  undefined4 extraout_XMM0_Dd_05;
  undefined4 extraout_XMM0_Dd_06;
  undefined4 extraout_XMM0_Dd_07;
  undefined4 extraout_XMM0_Dd_08;
  float extraout_XMM0_Dd_09;
  float fVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  float fVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float fVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar42;
  float fVar43;
  float fVar44;
  UnityEngine_Quaternion_o UVar45;
  UnityEngine_Quaternion_o UVar46;
  UnityEngine_Quaternion_o a;
  UnityEngine_Vector3_o UVar47;
  UnityEngine_Vector3_o force;
  UnityEngine_Vector3_o force_00;
  UnityEngine_Vector3_o force_01;
  UnityEngine_Vector3_o UVar48;
  UnityEngine_Vector3_o origin;
  UnityEngine_Vector3_o direction;
  undefined4 local_1f8 [2];
  undefined1 local_1f0 [8];
  float fStack_1e8;
  float fStack_1e4;
  float local_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  UnityEngine_RaycastHit_o local_1c0;
  Il2CppClass *pIStack_190;
  Il2CppClass *pIStack_188;
  Il2CppClass **ppIStack_180;
  float local_174;
  UnityEngine_ParticleSystem_EmissionModule_Fields local_170;
  undefined1 local_168 [8];
  undefined4 uStack_160;
  undefined4 uStack_15c;
  Il2CppClass *pIStack_158;
  float local_130;
  float fStack_12c;
  float local_100;
  float fStack_fc;
  float local_a8;
  float fStack_a4;
  undefined8 local_98;
  undefined8 local_88;
  float local_68;
  
  if (g_data_057addcb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HorseAnimations);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HorseSounds);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0();
    g_data_057addcb = '\x01';
  }
  fVar30 = (float)(__this->fields).FollowingEnabled;
  fVar26 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  fVar30 = fVar30 - fVar26;
  (__this->fields).FollowingEnabled = (bool_conflict)fVar30;
  if (0.0 < fVar30) {
    return;
  }
  lVar16 = *(long *)&(__this->fields)._cameraFPS;
  if (*(int *)&(TypeInfo_HorseAnimations->_2).field_0x1c == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_04 = (Il2CppClass **)method;
  __this_01 = (Il2CppClass **)TypeInfo_HorseAnimations;
  if (lVar16 != 0) {
    __this_04 = *(Il2CppClass ***)TypeInfo_HorseAnimations->static_fields;
    if (*(char *)(lVar16 + 0x3c) == '\0') {
      bVar10 = System_String__op_Equality
                         (*(System_String_o **)(lVar16 + 0x30),(System_String_o *)__this_04,(MethodInfo *)0x0)
      ;
      cVar9 = (char)bVar10;
      pMVar18 = extraout_RDX_02;
    }
    else {
      __this_01 = (Il2CppClass **)0x0;
      if (*(UnityEngine_Animation_o **)(lVar16 + 0x10) == (UnityEngine_Animation_o *)0x0) goto label_042b75d9;
      bVar10 = UnityEngine_Animation__IsPlaying
                         (*(UnityEngine_Animation_o **)(lVar16 + 0x10),(System_String_o *)__this_04,
                          (MethodInfo *)0x0);
      cVar9 = (char)bVar10;
      pMVar18 = extraout_RDX;
    }
    if (cVar9 == '\0') {
      if (*(int *)&(TypeInfo_HorseAnimations->_2).field_0x1c == 0) {
        il2cpp_runtime_helper_02337ed0();
        pMVar18 = extraout_RDX_03;
      }
      Characters_BaseCharacter__CrossFade
                ((Characters_BaseCharacter_o *)__this,*(System_String_o **)TypeInfo_HorseAnimations->static_fields,0.1,0.0
                 ,pMVar18);
      fVar30 = UnityEngine_Random__Range(6.0,9.0,(MethodInfo *)0x0);
label_042b7389:
      (__this->fields).FollowingEnabled = (bool_conflict)fVar30;
      return;
    }
    fVar30 = UnityEngine_Random__Range(0.0,1.0,(MethodInfo *)0x0);
    if (0.25 <= fVar30) {
      if (0.5 <= fVar30) {
        pMVar18 = extraout_RDX_00;
        if (*(int *)&(TypeInfo_HorseAnimations->_2).field_0x1c == 0) {
          il2cpp_runtime_helper_02337ed0();
          pMVar18 = extraout_RDX_07;
        }
        if (0.75 <= fVar30) {
          pIVar21 = *(Il2CppClass **)((long)TypeInfo_HorseAnimations->static_fields + 0x20);
          __this_04 = (Il2CppClass **)pIVar21;
          Characters_BaseCharacter__CrossFade
                    ((Characters_BaseCharacter_o *)__this,(System_String_o *)pIVar21,0.1,0.0,pMVar18);
          __this_01 = *(Il2CppClass ***)&(__this->fields)._cameraFPS;
          if ((Il2CppClass *)__this_01 != (Il2CppClass *)0x0) {
            fVar30 = Characters_AnimationHandler__GetLength
                               ((Characters_AnimationHandler_o *)__this_01,(System_String_o *)pIVar21,
                                method_03);
            (__this->fields).FollowingEnabled = (bool_conflict)fVar30;
            lVar16 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
            __this_04 = (Il2CppClass **)pIVar21;
            if ((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x78), lVar16 != 0)) {
              if (*(char *)(lVar16 + 0x11) == '\0') {
                return;
              }
              pMVar18 = extraout_RDX_10;
              if (*(int *)(TypeInfo_HorseSounds + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
                pMVar18 = extraout_RDX_11;
              }
              sound = *(System_String_o **)(*(long *)(TypeInfo_HorseSounds + 0xb8) + 0x10);
              goto label_042b75c8;
            }
          }
        }
        else {
          pIVar21 = *(Il2CppClass **)((long)TypeInfo_HorseAnimations->static_fields + 0x18);
          __this_04 = (Il2CppClass **)pIVar21;
          Characters_BaseCharacter__CrossFade
                    ((Characters_BaseCharacter_o *)__this,(System_String_o *)pIVar21,0.1,0.0,pMVar18);
          __this_01 = *(Il2CppClass ***)&(__this->fields)._cameraFPS;
          if ((Il2CppClass *)__this_01 != (Il2CppClass *)0x0) {
            fVar30 = Characters_AnimationHandler__GetLength
                               ((Characters_AnimationHandler_o *)__this_01,(System_String_o *)pIVar21,
                                method_02);
            (__this->fields).FollowingEnabled = (bool_conflict)fVar30;
            lVar16 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
            __this_04 = (Il2CppClass **)pIVar21;
            if ((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x78), lVar16 != 0)) {
              if (*(char *)(lVar16 + 0x11) == '\0') {
                return;
              }
              pMVar18 = extraout_RDX_08;
              if (*(int *)(TypeInfo_HorseSounds + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
                pMVar18 = extraout_RDX_09;
              }
              sound = *(System_String_o **)(*(long *)(TypeInfo_HorseSounds + 0xb8) + 8);
label_042b75c8:
              Characters_BaseCharacter__PlaySound((Characters_BaseCharacter_o *)__this,sound,pMVar18);
              return;
            }
          }
        }
      }
      else {
        pMVar18 = extraout_RDX_00;
        if (*(int *)&(TypeInfo_HorseAnimations->_2).field_0x1c == 0) {
          il2cpp_runtime_helper_02337ed0();
          pMVar18 = extraout_RDX_04;
        }
        pIVar21 = *(Il2CppClass **)((long)TypeInfo_HorseAnimations->static_fields + 0x10);
        __this_04 = (Il2CppClass **)pIVar21;
        Characters_BaseCharacter__CrossFade
                  ((Characters_BaseCharacter_o *)__this,(System_String_o *)pIVar21,0.1,0.0,pMVar18);
        __this_01 = *(Il2CppClass ***)&(__this->fields)._cameraFPS;
        if ((Il2CppClass *)__this_01 != (Il2CppClass *)0x0) {
          fVar30 = Characters_AnimationHandler__GetLength
                             ((Characters_AnimationHandler_o *)__this_01,(System_String_o *)pIVar21,method_01)
          ;
          (__this->fields).FollowingEnabled = (bool_conflict)fVar30;
          lVar16 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
          __this_04 = (Il2CppClass **)pIVar21;
          if ((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x78), lVar16 != 0)) {
            if (*(char *)(lVar16 + 0x11) == '\0') {
              return;
            }
            pMVar18 = extraout_RDX_05;
            if (*(int *)(TypeInfo_HorseSounds + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
              pMVar18 = extraout_RDX_06;
            }
            sound = (System_String_o *)**(undefined8 **)(TypeInfo_HorseSounds + 0xb8);
            goto label_042b75c8;
          }
        }
      }
    }
    else {
      pMVar18 = extraout_RDX_00;
      if (*(int *)&(TypeInfo_HorseAnimations->_2).field_0x1c == 0) {
        il2cpp_runtime_helper_02337ed0();
        pMVar18 = extraout_RDX_01;
      }
      pIVar21 = *(Il2CppClass **)((long)TypeInfo_HorseAnimations->static_fields + 8);
      __this_04 = (Il2CppClass **)pIVar21;
      Characters_BaseCharacter__CrossFade
                ((Characters_BaseCharacter_o *)__this,(System_String_o *)pIVar21,0.1,0.0,pMVar18);
      __this_00 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
      __this_01 = (Il2CppClass **)0x0;
      if (__this_00 != (Characters_AnimationHandler_o *)0x0) {
        fVar30 = Characters_AnimationHandler__GetLength(__this_00,(System_String_o *)pIVar21,method_00);
        goto label_042b7389;
      }
    }
  }
label_042b75d9:
  il2cpp_runtime_helper_022b2c90();
  uVar31 = 0;
  uVar32 = 0;
  pIVar20 = (Il2CppClass *)__this_04;
  Characters_BaseCharacter__CrossFade
            ((Characters_BaseCharacter_o *)__this_01,(System_String_o *)__this_04,0.1,0.0,method_04);
  pIVar21 = (Il2CppClass *)(((Il2CppClass *)__this_01)->_1).interfaceOffsets;
  if (pIVar21 != (Il2CppClass *)0x0) {
    fVar30 = Characters_AnimationHandler__GetLength
                       ((Characters_AnimationHandler_o *)pIVar21,(System_String_o *)__this_04,method_05);
    *(float *)&(((Il2CppClass *)__this_01)->_2).method_count = fVar30;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  plVar23 = (long *)pIVar21;
  if (g_data_057addcc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    plVar23 = &TypeInfo_Util;
    il2cpp_runtime_helper_023445d0();
    g_data_057addcc = '\x01';
  }
  pvVar13 = (pIVar21->_1).interopData;
  if ((pvVar13 == (void *)0x0) || (lVar16 = *(long *)((long)pvVar13 + 0x20), lVar16 == 0)) goto label_042b7ca8;
  if (*(char *)(lVar16 + 0x68) == '\0') {
    return;
  }
  fVar30 = *(float *)&(pIVar21->_2).nested_type_count;
  fVar26 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  uVar31 = 0;
  uVar32 = 0;
  *(float *)&(pIVar21->_2).nested_type_count = fVar30 - fVar26;
  __this_01 = (pIVar21->_2).genericContainerHandle;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar20 = (Il2CppClass *)0x0;
  plVar23 = (long *)__this_01;
  bVar10 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar10 != '\0') {
label_042b7700:
    targetGo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pIVar21,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    Photon_Pun_PhotonNetwork__Destroy_3eec3a0(targetGo,(MethodInfo *)0x0);
    return;
  }
  pvVar13 = (pIVar21->_2).genericContainerHandle;
  if (pvVar13 == (void *)0x0) goto label_042b7ca8;
  if (*(char *)((long)pvVar13 + 0x68) != '\0') goto label_042b7700;
  if (*(int *)((long)pvVar13 + 0x118) == 1) {
    if (*(char *)((long)pvVar13 + 0xcc) == '\0') {
      (pIVar21->_2).element_size = 3;
      return;
    }
    pvVar13 = (pIVar21->_1).interopData;
    if ((pvVar13 != (void *)0x0) &&
       (__this_04 = *(Il2CppClass ***)((long)pvVar13 + 0x18), (Il2CppClass *)__this_04 != (Il2CppClass *)0x0))
    {
      pIVar20 = (Il2CppClass *)0x0;
      UVar45 = UnityEngine_Rigidbody__get_rotation((UnityEngine_Rigidbody_o *)__this_04,(MethodInfo *)0x0);
      fVar30 = UVar45.fields.z;
      fVar26 = UVar45.fields.w;
      plVar24 = (pIVar21->_2).genericContainerHandle;
      plVar23 = (long *)0x0;
      if (plVar24 != (long *)0x0) {
        local_98 = (**(code **)(*plVar24 + 0x718))();
        fVar27 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
        UVar46.fields.z = fVar30;
        UVar46.fields.w = fVar26;
        UVar46.fields.x = (float)(undefined4)local_98;
        UVar46.fields.y = (float)local_98._4_4_;
        UVar45 = UnityEngine_Quaternion__Lerp(UVar45,UVar46,fVar27 * 5.0,(MethodInfo *)0x0);
        pIVar20 = (Il2CppClass *)0x0;
        plVar23 = (long *)__this_04;
        UnityEngine_Rigidbody__MoveRotation((UnityEngine_Rigidbody_o *)__this_04,UVar45,(MethodInfo *)0x0);
        pvVar13 = (pIVar21->_2).genericContainerHandle;
        if (pvVar13 != (void *)0x0) {
          if (*(char *)((long)pvVar13 + 0x21c) == '\0') {
            (pIVar21->_2).element_size = 4;
            return;
          }
          (pIVar21->_2).element_size = 5;
          return;
        }
      }
    }
  }
  else {
    if ((char)(pIVar21->_2).native_size == '\0') {
      return;
    }
    fVar30 = *(float *)&(pIVar21->_2).field_count;
    plVar23 = (long *)0x0;
    fVar26 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    uVar31 = 0;
    uVar32 = 0;
    *(float *)&(pIVar21->_2).field_count = fVar30 - fVar26;
    pvVar13 = (pIVar21->_2).genericContainerHandle;
    if (((pvVar13 != (void *)0x0) && (lVar16 = *(long *)((long)pvVar13 + 0x70), lVar16 != 0)) &&
       (plVar23 = *(long **)(lVar16 + 0x10), (Il2CppClass *)plVar23 != (Il2CppClass *)0x0)) {
      pIVar20 = (Il2CppClass *)0x0;
      UVar48 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)plVar23,(MethodInfo *)0x0);
      pvVar13 = (pIVar21->_1).interopData;
      if (pvVar13 != (void *)0x0) {
        pUVar14 = *(UnityEngine_Transform_o **)((long)pvVar13 + 0x10);
        plVar23 = (long *)0x0;
        if (pUVar14 != (UnityEngine_Transform_o *)0x0) {
          pIVar20 = (Il2CppClass *)0x0;
          UVar47 = UnityEngine_Transform__get_position(pUVar14,(MethodInfo *)0x0);
          if (g_data_057a68cb == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
            g_data_057a68cb = '\x01';
          }
          fVar26 = UVar48.fields.x - UVar47.fields.x;
          fStack_a4 = UVar48.fields.y;
          fStack_a4 = fStack_a4 - UVar47.fields.y;
          fVar30 = UVar48.fields.z - UVar47.fields.z;
          __this_04 = &TypeInfo_Math;
          plVar23 = (long *)TypeInfo_Math;
          if (*(int *)&(TypeInfo_Math->_2).field_0x1c == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          fVar30 = fVar30 * fVar30 + fStack_a4 * fStack_a4 + fVar26 * fVar26;
          uVar31 = 0;
          uVar32 = 0;
          if (fVar30 < 0.0) {
            fVar30 = sqrtf(fVar30);
            pvVar13 = (pIVar21->_2).genericContainerHandle;
          }
          else {
            fVar30 = SQRT(fVar30);
            pvVar13 = (pIVar21->_2).genericContainerHandle;
          }
          if (((pvVar13 != (void *)0x0) && (*(long *)((long)pvVar13 + 0x70) != 0)) &&
             (plVar23 = *(long **)(*(long *)((long)pvVar13 + 0x70) + 0x10),
             (Il2CppClass *)plVar23 != (Il2CppClass *)0x0)) {
            pIVar20 = (Il2CppClass *)0x0;
            UVar48 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)plVar23,(MethodInfo *)0x0)
            ;
            pvVar13 = (pIVar21->_1).interopData;
            if (pvVar13 != (void *)0x0) {
              pUVar14 = *(UnityEngine_Transform_o **)((long)pvVar13 + 0x10);
              plVar23 = (long *)0x0;
              if (pUVar14 != (UnityEngine_Transform_o *)0x0) {
                pIVar20 = (Il2CppClass *)0x0;
                UVar47 = UnityEngine_Transform__get_position(pUVar14,(MethodInfo *)0x0);
                if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                plVar23 = (long *)0x0;
                fVar26 = Utility_Util__DistanceIgnoreY(UVar48,UVar47,(MethodInfo *)0x0);
                if (fVar30 <= 20.0) {
label_042b7a39:
                  if (fVar26 < 5.0) {
                    (pIVar21->_2).element_size = 0;
                    uVar8 = *(undefined2 *)((long)&(pIVar21->_2).thread_static_fields_offset + 2);
                    (pIVar21->_2).field_count = *(undefined2 *)&(pIVar21->_2).thread_static_fields_offset;
                    (pIVar21->_2).event_count = uVar8;
                    return;
                  }
                  uVar31 = 0;
                  uVar32 = 0;
                  if (20.0 <= fVar26) {
                    (pIVar21->_2).element_size = 2;
                    goto label_042b7ad1;
                  }
                  (pIVar21->_2).element_size = 1;
                  uVar8 = *(undefined2 *)((long)&(pIVar21->_2).thread_static_fields_offset + 2);
                  (pIVar21->_2).field_count = *(undefined2 *)&(pIVar21->_2).thread_static_fields_offset;
                  (pIVar21->_2).event_count = uVar8;
                  pvVar13 = (pIVar21->_2).genericContainerHandle;
                }
                else {
                  uVar31 = 0;
                  uVar32 = 0;
                  if (0.0 < *(float *)&(pIVar21->_2).field_count) goto label_042b7a39;
                  plVar23 = (long *)pIVar21;
                  Characters_Horse__TeleportToHuman((Characters_Horse_o *)pIVar21,(MethodInfo *)pIVar20);
                  if (1 < (pIVar21->_2).element_size - 1) {
                    return;
                  }
label_042b7ad1:
                  pvVar13 = (pIVar21->_2).genericContainerHandle;
                }
                if (((pvVar13 != (void *)0x0) && (*(long *)((long)pvVar13 + 0x70) != 0)) &&
                   (plVar23 = *(long **)(*(long *)((long)pvVar13 + 0x70) + 0x10),
                   (Il2CppClass *)plVar23 != (Il2CppClass *)0x0)) {
                  pIVar20 = (Il2CppClass *)0x0;
                  UVar48 = UnityEngine_Transform__get_position
                                     ((UnityEngine_Transform_o *)plVar23,(MethodInfo *)0x0);
                  pvVar13 = (pIVar21->_1).interopData;
                  if ((pvVar13 != (void *)0x0) &&
                     (plVar23 = *(long **)((long)pvVar13 + 0x10), (Il2CppClass *)plVar23 != (Il2CppClass *)0x0
                     )) {
                    pIVar20 = (Il2CppClass *)0x0;
                    UVar47 = UnityEngine_Transform__get_position
                                       ((UnityEngine_Transform_o *)plVar23,(MethodInfo *)0x0);
                    pvVar13 = (pIVar21->_1).interopData;
                    if (pvVar13 != (void *)0x0) {
                      pUVar3 = *(UnityEngine_Rigidbody_o **)((long)pvVar13 + 0x18);
                      __this_01 = (Il2CppClass **)0x0;
                      if (pUVar3 != (UnityEngine_Rigidbody_o *)0x0) {
                        UVar45 = UnityEngine_Rigidbody__get_rotation(pUVar3,(MethodInfo *)0x0);
                        if (g_data_057a6845 == '\0') {
                          il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                          g_data_057a6845 = '\x01';
                        }
                        local_a8 = UVar48.fields.x;
                        local_68 = UVar47.fields.x;
                        local_a8 = local_a8 - local_68;
                        fVar30 = UVar48.fields.z - UVar47.fields.z;
                        if (*(int *)&(TypeInfo_Math->_2).field_0x1c == 0) {
                          il2cpp_runtime_helper_02337ed0();
                        }
                        uVar31 = 0;
                        uVar32 = 0;
                        fVar26 = fVar30 * fVar30 + local_a8 * local_a8 + 0.0;
                        if (fVar26 < 0.0) {
                          fVar26 = sqrtf(fVar26);
                          uVar31 = extraout_XMM0_Dc;
                          uVar32 = extraout_XMM0_Dd;
                        }
                        else {
                          fVar26 = SQRT(fVar26);
                        }
                        if (1e-05 < fVar26) {
                          fVar30 = fVar30 / fVar26;
                          auVar37._4_4_ = fVar26;
                          auVar37._0_4_ = fVar26;
                          auVar37._8_4_ = uVar31;
                          auVar37._12_4_ = uVar32;
                          auVar37 = divps(ZEXT416((uint)local_a8),auVar37);
                          uVar22 = auVar37._0_8_;
                        }
                        else {
                          if (g_data_057a65d5 == '\0') {
                            il2cpp_runtime_helper_023445d0();
                            g_data_057a65d5 = '\x01';
                          }
                          uVar22 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
                          fVar30 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
                        }
                        UVar48.fields.z = fVar30;
                        UVar48.fields.x = (float)(int)uVar22;
                        UVar48.fields.y = (float)(int)((ulong)uVar22 >> 0x20);
                        UVar46 = UnityEngine_Quaternion__LookRotation_4debb20(UVar48,(MethodInfo *)0x0);
                        fVar30 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
                        UVar45 = UnityEngine_Quaternion__Lerp(UVar45,UVar46,fVar30 * 10.0,(MethodInfo *)0x0);
                        UnityEngine_Rigidbody__MoveRotation(pUVar3,UVar45,(MethodInfo *)0x0);
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
label_042b7ca8:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057addcd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057addcd = '\x01';
  }
  plVar24 = plVar23;
  Characters_BaseCharacter__FixedUpdate((Characters_BaseCharacter_o *)plVar23,(MethodInfo *)pIVar20);
  pvVar13 = (((Il2CppClass *)plVar23)->_1).interopData;
  if ((pvVar13 != (void *)0x0) && (lVar16 = *(long *)((long)pvVar13 + 0x20), lVar16 != 0)) {
    if (*(char *)(lVar16 + 0x68) == '\0') {
      return;
    }
    __this_01 = (((Il2CppClass *)plVar23)->_2).genericContainerHandle;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    plVar24 = (long *)__this_01;
    bVar10 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar10 != '\0') {
      return;
    }
    pvVar13 = (((Il2CppClass *)plVar23)->_2).genericContainerHandle;
    if (pvVar13 != (void *)0x0) {
      if (*(char *)((long)pvVar13 + 0x68) != '\0') {
        return;
      }
      plVar24 = plVar23;
      (**(code **)((long)(((Il2CppClass *)plVar23)->_1).image + 0x738))();
      pvVar13 = (((Il2CppClass *)plVar23)->_1).interopData;
      if ((pvVar13 != (void *)0x0) &&
         (plVar24 = *(long **)((long)pvVar13 + 0x18), (Il2CppClass *)plVar24 != (Il2CppClass *)0x0)) {
        UnityEngine_Rigidbody__set_angularDrag((UnityEngine_Rigidbody_o *)plVar24,6.0,(MethodInfo *)0x0);
        if ((*(char *)((long)&((Il2CppClass *)plVar23)->rgctx_data + 4) == '\0') ||
           (uVar1 = (((Il2CppClass *)plVar23)->_2).element_size, 5 < uVar1)) {
joined_r0x042b81df:
          if (g_data_057a6844 == '\0') {
            plVar24 = &TypeInfo_Vector3;
            il2cpp_runtime_helper_023445d0();
            g_data_057a6844 = '\x01';
          }
          pvVar13 = (((Il2CppClass *)plVar23)->_1).interopData;
          if ((pvVar13 != (void *)0x0) &&
             (plVar24 = *(long **)((long)pvVar13 + 0x18), (Il2CppClass *)plVar24 != (Il2CppClass *)0x0)) {
            fromDirection = *(UnityEngine_Vector3_Fields *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
            pUVar14 = UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)plVar24,(MethodInfo *)0x0);
            if (pUVar14 != (UnityEngine_Transform_o *)0x0) {
              UVar48 = UnityEngine_Transform__get_up(pUVar14,(MethodInfo *)0x0);
              plVar24 = (long *)0x0;
              UVar45 = UnityEngine_Quaternion__FromToRotation
                                 ((UnityEngine_Vector3_o)fromDirection,UVar48,(MethodInfo *)0x0);
              fVar30 = UVar45.fields.z;
              if (g_data_057a6843 == '\0') {
                plVar24 = &TypeInfo_Quaternion;
                il2cpp_runtime_helper_023445d0();
                g_data_057a6843 = '\x01';
              }
              uVar22 = **(undefined8 **)(TypeInfo_Quaternion + 0xb8);
              uVar17 = (*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
              fVar26 = ABS((float)((ulong)uVar17 >> 0x20) * UVar45.fields.w +
                           (float)((ulong)uVar22 >> 0x20) * UVar45.fields.y + (float)uVar22 * UVar45.fields.x
                           + (float)uVar17 * fVar30);
              if (1.0 <= fVar26) {
                fVar26 = 1.0;
              }
              fVar27 = 0.0;
              if (fVar26 <= 0.999999) {
                fVar26 = acosf(fVar26);
                fVar27 = (fVar26 + fVar26) * 57.29578;
              }
              puVar12 = &(((Il2CppClass *)plVar23)->_2).token;
              if (fVar27 < (float)*puVar12 || fVar27 == (float)*puVar12) {
label_042b89f8:
                pvVar13 = (((Il2CppClass *)plVar23)->_1).interopData;
                if (pvVar13 != (void *)0x0) {
                  pUVar3 = *(UnityEngine_Rigidbody_o **)((long)pvVar13 + 0x18);
                  pvVar13 = (((Il2CppClass *)plVar23)->_1).image;
                  uVar22 = (**(code **)((long)pvVar13 + 0x4d8))
                                     (plVar23,*(undefined8 *)((long)pvVar13 + 0x4e0));
                  __this_01 = (Il2CppClass **)0x0;
                  plVar24 = plVar23;
                  if (pUVar3 != (UnityEngine_Rigidbody_o *)0x0) {
                    force_01.fields.z = fVar30;
                    force_01.fields.x = (float)(int)uVar22;
                    force_01.fields.y = (float)(int)((ulong)uVar22 >> 0x20);
                    UnityEngine_Rigidbody__AddForce(pUVar3,force_01,5,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
              else {
                plVar24 = (long *)0x0;
                UVar45 = UnityEngine_Quaternion__Inverse(UVar45,(MethodInfo *)0x0);
                pvVar13 = (((Il2CppClass *)plVar23)->_1).interopData;
                if ((pvVar13 != (void *)0x0) &&
                   (plVar24 = *(long **)((long)pvVar13 + 0x18), (Il2CppClass *)plVar24 != (Il2CppClass *)0x0))
                {
                  UVar46 = UnityEngine_Rigidbody__get_rotation
                                     ((UnityEngine_Rigidbody_o *)plVar24,(MethodInfo *)0x0);
                  fVar27 = UVar46.fields.z;
                  fVar28 = UVar46.fields.w;
                  fVar30 = UVar46.fields.x;
                  fVar26 = UVar46.fields.y;
                  pvVar13 = (((Il2CppClass *)plVar23)->_1).interopData;
                  if ((pvVar13 != (void *)0x0) &&
                     (plVar24 = *(long **)((long)pvVar13 + 0x18), (Il2CppClass *)plVar24 != (Il2CppClass *)0x0
                     )) {
                    local_130 = UVar45.fields.z;
                    fStack_12c = UVar45.fields.w;
                    local_100 = UVar45.fields.x;
                    fStack_fc = UVar45.fields.y;
                    fVar44 = (fStack_fc * fVar27 + local_100 * fVar28 + fStack_12c * fVar30) -
                             local_130 * fVar26;
                    fVar42 = (local_130 * fVar30 + fStack_fc * fVar28 + fVar26 * fStack_12c) -
                             fVar27 * local_100;
                    fVar43 = (local_100 * fVar26 + local_130 * fVar28 + fVar27 * fStack_12c) -
                             fVar30 * fStack_fc;
                    fVar33 = ((fVar28 * fStack_12c - fVar30 * local_100) - fVar26 * fStack_fc) -
                             local_130 * fVar27;
                    UVar45 = UnityEngine_Rigidbody__get_rotation
                                       ((UnityEngine_Rigidbody_o *)plVar24,(MethodInfo *)0x0);
                    fVar30 = UVar45.fields.z;
                    fVar28 = UVar45.fields.w;
                    fVar26 = UVar45.fields.x;
                    fVar27 = UVar45.fields.y;
                    fVar29 = ABS(fVar28 * fVar33 + fVar30 * fVar43 + fVar44 * fVar26 + fVar27 * fVar42);
                    if (1.0 <= fVar29) {
                      fVar29 = 1.0;
                    }
                    if (0.999999 < fVar29) {
label_042b89dc:
                      pvVar13 = (((Il2CppClass *)plVar23)->_1).interopData;
                    }
                    else {
                      fVar39 = (float)(((Il2CppClass *)plVar23)->_2).token;
                      fVar29 = acosf(fVar29);
                      fVar29 = (fVar29 + fVar29) * 57.29578;
                      if ((fVar29 == 0.0) && (!NAN(fVar29))) goto label_042b89dc;
                      fVar39 = fVar39 / fVar29;
                      fVar30 = 1.0;
                      if (fVar39 <= 1.0) {
                        fVar30 = fVar39;
                      }
                      plVar24 = (long *)0x0;
                      a.fields.y = fVar42;
                      a.fields.x = fVar44;
                      a.fields.w = fVar33;
                      a.fields.z = fVar43;
                      UVar45 = UnityEngine_Quaternion__SlerpUnclamped(a,UVar45,fVar30,(MethodInfo *)0x0);
                      fVar30 = UVar45.fields.z;
                      fVar28 = UVar45.fields.w;
                      fVar26 = UVar45.fields.x;
                      fVar27 = UVar45.fields.y;
                      pvVar13 = (((Il2CppClass *)plVar23)->_1).interopData;
                    }
                    if ((pvVar13 != (void *)0x0) &&
                       (plVar24 = *(long **)((long)pvVar13 + 0x18),
                       (Il2CppClass *)plVar24 != (Il2CppClass *)0x0)) {
                      UVar45.fields.y = fVar27;
                      UVar45.fields.x = fVar26;
                      UVar45.fields.w = fVar28;
                      UVar45.fields.z = fVar30;
                      UnityEngine_Rigidbody__MoveRotation
                                ((UnityEngine_Rigidbody_o *)plVar24,UVar45,(MethodInfo *)0x0);
                      goto label_042b89f8;
                    }
                  }
                }
              }
            }
          }
        }
        else if ((0x36U >> (uVar1 & 0x1f) & 1) == 0) {
          pvVar13 = (((Il2CppClass *)plVar23)->_1).interopData;
          if (pvVar13 != (void *)0x0) {
            pUVar3 = *(UnityEngine_Rigidbody_o **)((long)pvVar13 + 0x18);
            plVar24 = (long *)0x0;
            if (pUVar3 != (UnityEngine_Rigidbody_o *)0x0) {
              UVar48 = UnityEngine_Rigidbody__get_velocity(pUVar3,(MethodInfo *)0x0);
              if (g_data_057a6841 == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                g_data_057a6841 = '\x01';
              }
              __this_01 = &TypeInfo_Math;
              plVar24 = (long *)TypeInfo_Math;
              if (*(int *)&(TypeInfo_Math->_2).field_0x1c == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              fVar30 = UVar48.fields.z * UVar48.fields.z +
                       UVar48.fields.y * UVar48.fields.y + UVar48.fields.x * UVar48.fields.x;
              if (fVar30 < 0.0) {
                fVar30 = sqrtf(fVar30);
                pvVar13 = (((Il2CppClass *)plVar23)->_1).interopData;
              }
              else {
                fVar30 = SQRT(fVar30);
                pvVar13 = (((Il2CppClass *)plVar23)->_1).interopData;
              }
              if (pvVar13 != (void *)0x0) {
                uVar31 = 0;
                uVar32 = 0;
                __this_04 = *(Il2CppClass ***)((long)pvVar13 + 0x18);
                if (1.0 <= fVar30) {
                  if ((Il2CppClass *)__this_04 != (Il2CppClass *)0x0) {
                    UVar48 = UnityEngine_Rigidbody__get_velocity
                                       ((UnityEngine_Rigidbody_o *)__this_04,(MethodInfo *)0x0);
                    fVar30 = UVar48.fields.z;
                    auVar35._0_8_ = UVar48.fields._0_8_;
                    auVar35._8_4_ = extraout_XMM0_Dc_02;
                    auVar35._12_4_ = extraout_XMM0_Dd_02;
                    auVar38._8_4_ = extraout_XMM0_Dc_02;
                    auVar38._0_8_ = auVar35._0_8_;
                    auVar38._12_4_ = extraout_XMM0_Dd_02;
                    if (g_data_057a6845 == '\0') {
                      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                      g_data_057a6845 = '\x01';
                      auVar35 = auVar38;
                    }
                    plVar24 = (long *)TypeInfo_Math;
                    if (*(int *)&(TypeInfo_Math->_2).field_0x1c == 0) {
                      il2cpp_runtime_helper_02337ed0();
                      auVar35 = auVar38;
                    }
                    fVar26 = fVar30 * fVar30 + auVar35._4_4_ * auVar35._4_4_ + auVar35._0_4_ * auVar35._0_4_;
                    if (fVar26 < 0.0) {
                      fVar26 = sqrtf(fVar26);
                      uVar31 = extraout_XMM0_Dc_05;
                      uVar32 = extraout_XMM0_Dd_05;
                      if (fVar26 <= 1e-05) goto label_042b84c6;
label_042b84aa:
                      fVar30 = fVar30 / fVar26;
                      auVar7._4_4_ = fVar26;
                      auVar7._0_4_ = fVar26;
                      auVar7._8_4_ = uVar31;
                      auVar7._12_4_ = uVar32;
                      auVar37 = divps(auVar38,auVar7);
                      uVar22 = auVar37._0_8_;
                      pvVar13 = (((Il2CppClass *)plVar23)->_2).genericContainerHandle;
                    }
                    else {
                      fVar26 = SQRT(fVar26);
                      auVar38 = auVar35;
                      if (1e-05 < fVar26) goto label_042b84aa;
label_042b84c6:
                      if (g_data_057a65d5 == '\0') {
                        plVar24 = &TypeInfo_Vector3;
                        il2cpp_runtime_helper_023445d0();
                        g_data_057a65d5 = '\x01';
                      }
                      uVar22 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
                      fVar30 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
                      pvVar13 = (((Il2CppClass *)plVar23)->_2).genericContainerHandle;
                    }
                    if (((pvVar13 != (void *)0x0) && (*(long *)((long)pvVar13 + 0x138) != 0)) &&
                       (pvVar2 = (((Il2CppClass *)plVar23)->_1).interopData, pvVar2 != (void *)0x0)) {
                      pUVar3 = *(UnityEngine_Rigidbody_o **)((long)pvVar2 + 0x18);
                      plVar24 = (long *)0x0;
                      if (pUVar3 != (UnityEngine_Rigidbody_o *)0x0) {
                        fVar26 = *(float *)(*(long *)((long)pvVar13 + 0x138) + 0x34);
                        UVar48 = UnityEngine_Rigidbody__get_velocity(pUVar3,(MethodInfo *)0x0);
                        if (g_data_057a6841 == '\0') {
                          il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                          g_data_057a6841 = '\x01';
                        }
                        if (*(int *)&(TypeInfo_Math->_2).field_0x1c == 0) {
                          il2cpp_runtime_helper_02337ed0();
                        }
                        fVar27 = UVar48.fields.z * UVar48.fields.z +
                                 UVar48.fields.y * UVar48.fields.y + UVar48.fields.x * UVar48.fields.x;
                        if (fVar27 < 0.0) {
                          fVar27 = sqrtf(fVar27);
                        }
                        else {
                          fVar27 = SQRT(fVar27);
                        }
                        local_130 = (float)uVar22;
                        fStack_12c = (float)((ulong)uVar22 >> 0x20);
                        if (fVar27 * 0.5 <= fVar26) {
                          fVar26 = fVar27 * 0.5;
                        }
                        fVar27 = -(local_130 * fVar26);
                        fVar28 = -(fStack_12c * fVar26);
                        fVar30 = -(fVar30 * fVar26);
                        iVar11 = 5;
                        goto label_042b86a3;
                      }
                    }
                  }
                }
                else {
                  if (g_data_057a6844 == '\0') {
                    plVar24 = &TypeInfo_Vector3;
                    il2cpp_runtime_helper_023445d0();
                    g_data_057a6844 = '\x01';
                    pvVar13 = (((Il2CppClass *)plVar23)->_1).interopData;
                  }
                  if ((pvVar13 != (void *)0x0) &&
                     (plVar24 = *(long **)((long)pvVar13 + 0x18), (Il2CppClass *)plVar24 != (Il2CppClass *)0x0
                     )) {
                    uVar22 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
                    fVar30 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
                    UVar48 = UnityEngine_Rigidbody__get_velocity
                                       ((UnityEngine_Rigidbody_o *)plVar24,(MethodInfo *)0x0);
                    fVar26 = UVar48.fields.y;
                    if ((Il2CppClass *)__this_04 != (Il2CppClass *)0x0) {
                      local_130 = (float)uVar22;
                      fStack_12c = (float)((ulong)uVar22 >> 0x20);
                      UVar47.fields.y = fStack_12c * fVar26;
                      UVar47.fields.x = local_130 * fVar26;
                      UVar47.fields.z = fVar30 * fVar26;
                      plVar24 = (long *)__this_04;
                      UnityEngine_Rigidbody__set_velocity
                                ((UnityEngine_Rigidbody_o *)__this_04,UVar47,(MethodInfo *)0x0);
                      goto joined_r0x042b81df;
                    }
                  }
                }
              }
            }
          }
        }
        else {
          pvVar13 = (((Il2CppClass *)plVar23)->_2).genericContainerHandle;
          if ((pvVar13 != (void *)0x0) && (lVar16 = *(long *)((long)pvVar13 + 0x138), lVar16 != 0)) {
            if (uVar1 == 1) {
              puVar12 = &(((Il2CppClass *)plVar23)->_2).thread_static_fields_size;
              pvVar13 = (((Il2CppClass *)plVar23)->_1).interopData;
            }
            else if (uVar1 == 5) {
              puVar12 = &(((Il2CppClass *)plVar23)->_2).static_fields_size;
              pvVar13 = (((Il2CppClass *)plVar23)->_1).interopData;
            }
            else {
              puVar12 = (uint32_t *)(lVar16 + 0x34);
              pvVar13 = (((Il2CppClass *)plVar23)->_1).interopData;
            }
            if ((pvVar13 != (void *)0x0) &&
               (plVar24 = *(long **)((long)pvVar13 + 0x10), (Il2CppClass *)plVar24 != (Il2CppClass *)0x0)) {
              fVar30 = (float)*puVar12;
              __this_04 = *(Il2CppClass ***)((long)pvVar13 + 0x18);
              UVar48 = UnityEngine_Transform__get_forward
                                 ((UnityEngine_Transform_o *)plVar24,(MethodInfo *)0x0);
              pvVar13 = (((Il2CppClass *)plVar23)->_2).genericContainerHandle;
              if ((pvVar13 != (void *)0x0) &&
                 ((lVar16 = *(long *)((long)pvVar13 + 0x138), lVar16 != 0 &&
                  ((Il2CppClass *)__this_04 != (Il2CppClass *)0x0)))) {
                fVar26 = *(float *)(lVar16 + 0x34);
                force.fields.z = UVar48.fields.z * fVar26;
                force.fields.x = UVar48.fields.x * fVar26;
                force.fields.y = UVar48.fields.y * fVar26;
                plVar24 = (long *)__this_04;
                UnityEngine_Rigidbody__AddForce
                          ((UnityEngine_Rigidbody_o *)__this_04,force,5,(MethodInfo *)0x0);
                pvVar13 = (((Il2CppClass *)plVar23)->_1).interopData;
                if (pvVar13 != (void *)0x0) {
                  pUVar3 = *(UnityEngine_Rigidbody_o **)((long)pvVar13 + 0x18);
                  plVar24 = (long *)(Il2CppClass *)0x0;
                  if (pUVar3 != (UnityEngine_Rigidbody_o *)0x0) {
                    UVar48 = UnityEngine_Rigidbody__get_velocity(pUVar3,(MethodInfo *)0x0);
                    if (g_data_057a6841 == '\0') {
                      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                      uVar31 = 0;
                      uVar32 = 0;
                      g_data_057a6841 = '\x01';
                    }
                    __this_01 = &TypeInfo_Math;
                    plVar24 = (long *)TypeInfo_Math;
                    if (*(int *)&(TypeInfo_Math->_2).field_0x1c == 0) {
                      il2cpp_runtime_helper_02337ed0();
                      uVar31 = 0;
                      uVar32 = 0;
                    }
                    fVar26 = UVar48.fields.z * UVar48.fields.z +
                             UVar48.fields.y * UVar48.fields.y + UVar48.fields.x * UVar48.fields.x;
                    if (0.0 <= fVar26) {
                      fVar26 = SQRT(fVar26);
                    }
                    else {
                      fVar26 = sqrtf(fVar26);
                    }
                    if (fVar26 < fVar30) goto joined_r0x042b81df;
                    pvVar13 = (((Il2CppClass *)plVar23)->_1).interopData;
                    if ((pvVar13 == (void *)0x0) ||
                       (plVar24 = *(long **)((long)pvVar13 + 0x18),
                       (Il2CppClass *)plVar24 == (Il2CppClass *)0x0)) goto label_042b8a35;
                    UnityEngine_Rigidbody__set_angularDrag
                              ((UnityEngine_Rigidbody_o *)plVar24,1.0,(MethodInfo *)0x0);
                    pvVar13 = (((Il2CppClass *)plVar23)->_2).genericContainerHandle;
                    if ((pvVar13 == (void *)0x0) ||
                       (((lVar16 = *(long *)((long)pvVar13 + 0x138), lVar16 == 0 ||
                         (pvVar13 = (((Il2CppClass *)plVar23)->_1).interopData, pvVar13 == (void *)0x0)) ||
                        (__this_04 = *(Il2CppClass ***)((long)pvVar13 + 0x18),
                        (Il2CppClass *)__this_04 == (Il2CppClass *)0x0)))) goto label_042b8a35;
                    fVar26 = *(float *)(lVar16 + 0x34);
                    UVar48 = UnityEngine_Rigidbody__get_velocity
                                       ((UnityEngine_Rigidbody_o *)__this_04,(MethodInfo *)0x0);
                    if (g_data_057a6841 == '\0') {
                      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                      uVar31 = 0;
                      uVar32 = 0;
                      g_data_057a6841 = '\x01';
                    }
                    plVar24 = (long *)TypeInfo_Math;
                    if (*(int *)&(TypeInfo_Math->_2).field_0x1c == 0) {
                      il2cpp_runtime_helper_02337ed0();
                      uVar31 = 0;
                      uVar32 = 0;
                    }
                    fVar27 = UVar48.fields.z * UVar48.fields.z +
                             UVar48.fields.y * UVar48.fields.y + UVar48.fields.x * UVar48.fields.x;
                    if (fVar27 < 0.0) {
                      fVar27 = sqrtf(fVar27);
                      uVar31 = extraout_XMM0_Dc_00;
                      uVar32 = extraout_XMM0_Dd_00;
                    }
                    else {
                      fVar27 = SQRT(fVar27);
                    }
                    if ((fVar30 != fVar26) || (NAN(fVar30) || NAN(fVar26))) {
                      pvVar13 = (((Il2CppClass *)plVar23)->_1).interopData;
                      if (pvVar13 != (void *)0x0) {
                        pUVar3 = *(UnityEngine_Rigidbody_o **)((long)pvVar13 + 0x18);
                        plVar24 = (long *)0x0;
                        if (pUVar3 != (UnityEngine_Rigidbody_o *)0x0) {
                          UVar48 = UnityEngine_Rigidbody__get_velocity(pUVar3,(MethodInfo *)0x0);
                          fVar26 = UVar48.fields.z;
                          auVar40._0_8_ = UVar48.fields._0_8_;
                          auVar40._8_4_ = extraout_XMM0_Dc_03;
                          auVar40._12_4_ = extraout_XMM0_Dd_03;
                          auVar41._8_4_ = extraout_XMM0_Dc_03;
                          auVar41._0_8_ = auVar40._0_8_;
                          auVar41._12_4_ = extraout_XMM0_Dd_03;
                          if (g_data_057a6845 == '\0') {
                            il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                            uVar31 = 0;
                            uVar32 = 0;
                            g_data_057a6845 = '\x01';
                            auVar40 = auVar41;
                          }
                          if (*(int *)&(TypeInfo_Math->_2).field_0x1c == 0) {
                            il2cpp_runtime_helper_02337ed0();
                            uVar31 = 0;
                            uVar32 = 0;
                            auVar40 = auVar41;
                          }
                          fVar30 = fVar30 - fVar27;
                          fVar27 = fVar26 * fVar26 +
                                   auVar40._4_4_ * auVar40._4_4_ + auVar40._0_4_ * auVar40._0_4_;
                          if (fVar27 < 0.0) {
                            fVar27 = sqrtf(fVar27);
                            uVar31 = extraout_XMM0_Dc_06;
                            uVar32 = extraout_XMM0_Dd_06;
                          }
                          else {
                            fVar27 = SQRT(fVar27);
                            auVar41 = auVar40;
                          }
                          if (fVar30 <= -1.0) {
                            fVar30 = -1.0;
                          }
                          if (fVar27 <= 1e-05) {
                            if (g_data_057a65d5 == '\0') {
                              il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
                              g_data_057a65d5 = '\x01';
                            }
                            uVar22 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
                            fVar26 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
                          }
                          else {
                            fVar26 = fVar26 / fVar27;
                            auVar6._4_4_ = fVar27;
                            auVar6._0_4_ = fVar27;
                            auVar6._8_4_ = uVar31;
                            auVar6._12_4_ = uVar32;
                            auVar37 = divps(auVar41,auVar6);
                            uVar22 = auVar37._0_8_;
                          }
                          fVar27 = fVar30 * (float)uVar22;
                          fVar28 = fVar30 * (float)((ulong)uVar22 >> 0x20);
                          fVar30 = fVar26 * fVar30;
                          goto label_042b869e;
                        }
                      }
                      goto label_042b8a35;
                    }
                    pvVar13 = (((Il2CppClass *)plVar23)->_1).interopData;
                    if (pvVar13 == (void *)0x0) goto label_042b8a35;
                    pUVar3 = *(UnityEngine_Rigidbody_o **)((long)pvVar13 + 0x18);
                    plVar24 = (long *)0x0;
                    if (pUVar3 == (UnityEngine_Rigidbody_o *)0x0) goto label_042b8a35;
                    UVar48 = UnityEngine_Rigidbody__get_velocity(pUVar3,(MethodInfo *)0x0);
                    fVar26 = UVar48.fields.z;
                    auVar34._0_8_ = UVar48.fields._0_8_;
                    auVar34._8_4_ = extraout_XMM0_Dc_01;
                    auVar34._12_4_ = extraout_XMM0_Dd_01;
                    auVar36._8_4_ = extraout_XMM0_Dc_01;
                    auVar36._0_8_ = auVar34._0_8_;
                    auVar36._12_4_ = extraout_XMM0_Dd_01;
                    if (g_data_057a6845 == '\0') {
                      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                      uVar31 = 0;
                      uVar32 = 0;
                      g_data_057a6845 = '\x01';
                      auVar34 = auVar36;
                    }
                    if (*(int *)&(TypeInfo_Math->_2).field_0x1c == 0) {
                      il2cpp_runtime_helper_02337ed0();
                      uVar31 = 0;
                      uVar32 = 0;
                      auVar34 = auVar36;
                    }
                    fVar28 = fVar26 * fVar26 + auVar34._4_4_ * auVar34._4_4_ + auVar34._0_4_ * auVar34._0_4_;
                    if (fVar28 < 0.0) {
                      fVar28 = sqrtf(fVar28);
                      uVar31 = extraout_XMM0_Dc_04;
                      uVar32 = extraout_XMM0_Dd_04;
                      if (fVar28 <= 1e-05) goto label_042b843d;
label_042b8430:
                      fVar26 = fVar26 / fVar28;
                      auVar5._4_4_ = fVar28;
                      auVar5._0_4_ = fVar28;
                      auVar5._8_4_ = uVar31;
                      auVar5._12_4_ = uVar32;
                      auVar37 = divps(auVar36,auVar5);
                      uVar22 = auVar37._0_8_;
                    }
                    else {
                      fVar28 = SQRT(fVar28);
                      auVar36 = auVar34;
                      if (1e-05 < fVar28) goto label_042b8430;
label_042b843d:
                      if (g_data_057a65d5 == '\0') {
                        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
                        g_data_057a65d5 = '\x01';
                      }
                      uVar22 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
                      fVar26 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
                    }
                    fVar30 = fVar30 - fVar27;
                    fVar27 = fVar30 * (float)uVar22;
                    fVar28 = fVar30 * (float)((ulong)uVar22 >> 0x20);
                    fVar30 = fVar30 * fVar26;
label_042b869e:
                    iVar11 = 2;
label_042b86a3:
                    __this_01 = &TypeInfo_Math;
                    force_00.fields.y = fVar28;
                    force_00.fields.x = fVar27;
                    force_00.fields.z = fVar30;
                    plVar24 = (long *)__this_04;
                    UnityEngine_Rigidbody__AddForce
                              ((UnityEngine_Rigidbody_o *)__this_04,force_00,iVar11,(MethodInfo *)0x0);
                    goto joined_r0x042b81df;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
label_042b8a35:
  il2cpp_runtime_helper_022b2c90();
  pIStack_158 = (Il2CppClass *)__this_01;
  if (g_data_057addce == '\0') {
    ppIStack_180 = (Il2CppClass **)0x42b8a64;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HorseAnimations);
    ppIStack_180 = (Il2CppClass **)0x42b8a70;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HorseSounds);
    ppIStack_180 = (Il2CppClass **)0x42b8a7c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    ppIStack_180 = (Il2CppClass **)0x42b8a88;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    ppIStack_180 = (Il2CppClass **)0x42b8a94;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    ppIStack_180 = (Il2CppClass **)0x42b8aa0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    g_data_057addce = '\x01';
  }
  pvVar13 = (((Il2CppClass *)plVar24)->_1).image;
  ppIStack_180 = (Il2CppClass **)0x42b8abb;
  (**(code **)((long)pvVar13 + 0x7b8))(plVar24,*(undefined8 *)((long)pvVar13 + 0x7c0));
  pvVar13 = (((Il2CppClass *)plVar24)->_1).image;
  pIVar21 = *(Il2CppClass **)((long)pvVar13 + 2000);
  ppIStack_180 = (Il2CppClass **)0x42b8acf;
  __this_02.fields.m_ParticleSystem =
       (UnityEngine_ParticleSystem_EmissionModule_Fields)
       (UnityEngine_ParticleSystem_EmissionModule_Fields)plVar24;
  (**(code **)((long)pvVar13 + 0x7c8))();
  pvVar13 = (((Il2CppClass *)plVar24)->_1).interopData;
  if ((pvVar13 == (void *)0x0) || (lVar16 = *(long *)((long)pvVar13 + 0x20), lVar16 == 0)) goto label_042b9203;
  if (*(char *)(lVar16 + 0x68) != '\0') {
    __this_01 = (((Il2CppClass *)plVar24)->_2).genericContainerHandle;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      ppIStack_180 = (Il2CppClass **)0x42b8b14;
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar21 = (Il2CppClass *)0x0;
    ppIStack_180 = (Il2CppClass **)0x42b8b20;
    __this_02.fields.m_ParticleSystem =
         (UnityEngine_ParticleSystem_EmissionModule_Fields)
         (UnityEngine_ParticleSystem_EmissionModule_Fields)__this_01;
    bVar10 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar10 != '\0') {
      return;
    }
    pvVar13 = (((Il2CppClass *)plVar24)->_2).genericContainerHandle;
    if (pvVar13 == (void *)0x0) goto label_042b9203;
    if (*(char *)((long)pvVar13 + 0x68) != '\0') {
      return;
    }
    pvVar2 = (((Il2CppClass *)plVar24)->_1).interopData;
    if (pvVar2 == (void *)0x0) goto label_042b9203;
    pUVar3 = *(UnityEngine_Rigidbody_o **)((long)pvVar2 + 0x18);
    __this_02.fields.m_ParticleSystem =
         (UnityEngine_ParticleSystem_EmissionModule_Fields)
         (UnityEngine_ParticleSystem_EmissionModule_Fields)(Il2CppClass *)0x0;
    if (pUVar3 == (UnityEngine_Rigidbody_o *)0x0) goto label_042b9203;
    uVar1 = *(uint *)((long)pvVar13 + 0x158);
    unaff_RBP = (Il2CppClass **)(ulong)uVar1;
    pIVar21 = (Il2CppClass *)0x0;
    ppIStack_180 = (Il2CppClass **)0x42b8b6b;
    UVar48 = UnityEngine_Rigidbody__get_velocity(pUVar3,(MethodInfo *)0x0);
    fVar30 = UVar48.fields.x;
    fVar26 = UVar48.fields.y;
    uVar31 = extraout_XMM0_Dc_07;
    uVar32 = extraout_XMM0_Dd_07;
    fVar27 = UVar48.fields.z;
    if (g_data_057a6841 == '\0') {
      uStack_160 = extraout_XMM0_Dc_07;
      local_168 = (undefined1  [8])UVar48.fields._0_8_;
      uStack_15c = extraout_XMM0_Dd_07;
      ppIStack_180 = (Il2CppClass **)0x42b8b8b;
      local_174 = UVar48.fields.z;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a6841 = '\x01';
      fVar30 = (float)local_168._0_4_;
      fVar26 = (float)local_168._4_4_;
      uVar31 = uStack_160;
      uVar32 = uStack_15c;
      fVar27 = local_174;
    }
    __this_01 = &TypeInfo_Math;
    __this_02.fields.m_ParticleSystem =
         (UnityEngine_ParticleSystem_EmissionModule_Fields)
         (UnityEngine_ParticleSystem_EmissionModule_Fields)TypeInfo_Math;
    if (*(int *)&(TypeInfo_Math->_2).field_0x1c == 0) {
      local_168._4_4_ = fVar26;
      local_168._0_4_ = fVar30;
      uStack_160 = uVar31;
      uStack_15c = uVar32;
      ppIStack_180 = (Il2CppClass **)0x42b8bc0;
      local_174 = fVar27;
      il2cpp_runtime_helper_02337ed0();
      fVar30 = (float)local_168._0_4_;
      fVar26 = (float)local_168._4_4_;
      fVar27 = local_174;
    }
    fVar30 = fVar27 * fVar27 + fVar26 * fVar26 + fVar30 * fVar30;
    if (fVar30 < 0.0) {
      ppIStack_180 = (Il2CppClass **)0x42b8d4d;
      fVar30 = sqrtf(fVar30);
      if (fVar30 <= 8.0) goto label_042b8c01;
label_042b8d5a:
      __this_01 = &TypeInfo_HorseAnimations;
      if (*(int *)&(TypeInfo_HorseAnimations->_2).field_0x1c == 0) {
        ppIStack_180 = (Il2CppClass **)0x42b8d72;
        il2cpp_runtime_helper_02337ed0();
      }
      pIVar15 = (((Il2CppClass *)plVar24)->_1).interfaceOffsets;
      __this_02.fields.m_ParticleSystem =
           (UnityEngine_ParticleSystem_EmissionModule_Fields)
           (UnityEngine_ParticleSystem_EmissionModule_Fields)TypeInfo_HorseAnimations;
      if (pIVar15 == (Il2CppRuntimeInterfaceOffsetPair *)0x0) goto label_042b9203;
      __this_04 = *(Il2CppClass ***)((long)TypeInfo_HorseAnimations->static_fields + 0x28);
      if (pIVar15[3].field_0xc == '\0') {
        __this_02.fields.m_ParticleSystem =
             (UnityEngine_ParticleSystem_EmissionModule_Fields)pIVar15[3].interfaceType;
        ppIStack_180 = (Il2CppClass **)0x42b918f;
        pIVar21 = (Il2CppClass *)__this_04;
        bVar10 = System_String__op_Equality
                           ((System_String_o *)__this_02.fields.m_ParticleSystem,(System_String_o *)__this_04,
                            (MethodInfo *)0x0);
        cVar9 = (char)bVar10;
        pMVar18 = extraout_RDX_16;
      }
      else {
        __this_02.fields.m_ParticleSystem =
             (UnityEngine_ParticleSystem_EmissionModule_Fields)pIVar15[1].interfaceType;
        if (__this_02.fields.m_ParticleSystem == (UnityEngine_ParticleSystem_o *)0x0) goto label_042b9203;
        ppIStack_180 = (Il2CppClass **)0x42b8db2;
        pIVar21 = (Il2CppClass *)__this_04;
        bVar10 = UnityEngine_Animation__IsPlaying
                           ((UnityEngine_Animation_o *)__this_02.fields.m_ParticleSystem,
                            (System_String_o *)__this_04,(MethodInfo *)0x0);
        cVar9 = (char)bVar10;
        pMVar18 = extraout_RDX_13;
      }
      if (cVar9 == '\0') {
        ppIStack_180 = (Il2CppClass **)0x42b8dcc;
        __this_02.fields.m_ParticleSystem =
             (UnityEngine_ParticleSystem_EmissionModule_Fields)
             (UnityEngine_ParticleSystem_EmissionModule_Fields)plVar24;
        Characters_BaseCharacter__CrossFade
                  ((Characters_BaseCharacter_o *)plVar24,(System_String_o *)__this_04,0.1,0.0,pMVar18);
        pIVar21 = (Il2CppClass *)__this_04;
      }
      __this_04 = (((Il2CppClass *)plVar24)->_2).genericContainerHandle;
      if ((Il2CppClass *)__this_04 == (Il2CppClass *)0x0) goto label_042b9203;
      if ((uVar1 == 0) && ((((Il2CppClass *)__this_04)->_2).token == 1)) {
        __this_01 = &TypeInfo_HumanAnimations;
        if (*(int *)&(TypeInfo_HumanAnimations->_2).field_0x1c == 0) {
          ppIStack_180 = (Il2CppClass **)0x42b8e0b;
          il2cpp_runtime_helper_02337ed0();
        }
        pIVar15 = (((Il2CppClass *)__this_04)->_1).interfaceOffsets;
        __this_02.fields.m_ParticleSystem =
             (UnityEngine_ParticleSystem_EmissionModule_Fields)
             (UnityEngine_ParticleSystem_EmissionModule_Fields)TypeInfo_HumanAnimations;
        if (pIVar15 == (Il2CppRuntimeInterfaceOffsetPair *)0x0) goto label_042b9203;
        pIVar20 = *(Il2CppClass **)((long)TypeInfo_HumanAnimations->static_fields + 0x18);
        if (pIVar15[3].field_0xc == '\0') {
label_042b919c:
          ppIStack_180 = (Il2CppClass **)0x42b91aa;
          pIVar21 = pIVar20;
          bVar10 = System_String__op_Equality
                             ((System_String_o *)pIVar15[3].interfaceType,(System_String_o *)pIVar20,
                              (MethodInfo *)0x0);
          cVar9 = (char)bVar10;
          pMVar18 = extraout_RDX_17;
        }
        else {
          __this_03 = pIVar15[1].interfaceType;
          if (__this_03 == (Il2CppClass *)0x0) {
            __this_02.fields.m_ParticleSystem =
                 (UnityEngine_ParticleSystem_EmissionModule_Fields)(UnityEngine_ParticleSystem_o *)0x0;
            goto label_042b9203;
          }
label_042b8f38:
          ppIStack_180 = (Il2CppClass **)0x42b8f42;
          pIVar21 = pIVar20;
          bVar10 = UnityEngine_Animation__IsPlaying
                             ((UnityEngine_Animation_o *)__this_03,(System_String_o *)pIVar20,
                              (MethodInfo *)0x0);
          cVar9 = (char)bVar10;
          pMVar18 = extraout_RDX_15;
        }
        if (cVar9 == '\0') {
          ppIStack_180 = (Il2CppClass **)0x42b8f5c;
          Characters_BaseCharacter__CrossFade
                    ((Characters_BaseCharacter_o *)__this_04,(System_String_o *)pIVar20,0.1,0.0,pMVar18);
          pIVar21 = pIVar20;
        }
      }
    }
    else {
      if (8.0 < SQRT(fVar30)) goto label_042b8d5a;
label_042b8c01:
      pvVar13 = (((Il2CppClass *)plVar24)->_1).interopData;
      if (pvVar13 == (void *)0x0) goto label_042b9203;
      pUVar3 = *(UnityEngine_Rigidbody_o **)((long)pvVar13 + 0x18);
      __this_02.fields.m_ParticleSystem =
           (UnityEngine_ParticleSystem_EmissionModule_Fields)
           (UnityEngine_ParticleSystem_EmissionModule_Fields)(Il2CppClass *)0x0;
      if (pUVar3 == (UnityEngine_Rigidbody_o *)0x0) goto label_042b9203;
      pIVar21 = (Il2CppClass *)0x0;
      ppIStack_180 = (Il2CppClass **)0x42b8c23;
      UVar48 = UnityEngine_Rigidbody__get_velocity(pUVar3,(MethodInfo *)0x0);
      fVar30 = UVar48.fields.x;
      fVar26 = UVar48.fields.y;
      uVar31 = extraout_XMM0_Dc_08;
      uVar32 = extraout_XMM0_Dd_08;
      fVar27 = UVar48.fields.z;
      if (g_data_057a6841 == '\0') {
        uStack_160 = extraout_XMM0_Dc_08;
        local_168 = (undefined1  [8])UVar48.fields._0_8_;
        uStack_15c = extraout_XMM0_Dd_08;
        ppIStack_180 = (Il2CppClass **)0x42b8c43;
        local_174 = UVar48.fields.z;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
        g_data_057a6841 = '\x01';
        fVar30 = (float)local_168._0_4_;
        fVar26 = (float)local_168._4_4_;
        uVar31 = uStack_160;
        uVar32 = uStack_15c;
        fVar27 = local_174;
      }
      if (*(int *)&(TypeInfo_Math->_2).field_0x1c == 0) {
        local_168._4_4_ = fVar26;
        local_168._0_4_ = fVar30;
        uStack_160 = uVar31;
        uStack_15c = uVar32;
        ppIStack_180 = (Il2CppClass **)0x42b8c71;
        local_174 = fVar27;
        il2cpp_runtime_helper_02337ed0();
        fVar30 = (float)local_168._0_4_;
        fVar26 = (float)local_168._4_4_;
        fVar27 = local_174;
      }
      fVar30 = fVar27 * fVar27 + fVar26 * fVar26 + fVar30 * fVar30;
      if (0.0 <= fVar30) {
        fVar30 = SQRT(fVar30);
      }
      else {
        ppIStack_180 = (Il2CppClass **)0x42b8e4d;
        fVar30 = sqrtf(fVar30);
      }
      if (fVar30 <= 1.0) {
        ppIStack_180 = (Il2CppClass **)0x42b8cba;
        __this_02.fields.m_ParticleSystem =
             (UnityEngine_ParticleSystem_EmissionModule_Fields)
             (UnityEngine_ParticleSystem_EmissionModule_Fields)plVar24;
        Characters_Horse__UpdateIdle((Characters_Horse_o *)plVar24,(MethodInfo *)pIVar21);
        __this_04 = (((Il2CppClass *)plVar24)->_2).genericContainerHandle;
        if ((Il2CppClass *)__this_04 == (Il2CppClass *)0x0) goto label_042b9203;
        if ((uVar1 == 0) && ((((Il2CppClass *)__this_04)->_2).token == 1)) {
          __this_01 = &TypeInfo_HumanAnimations;
          if (*(int *)&(TypeInfo_HumanAnimations->_2).field_0x1c == 0) {
            ppIStack_180 = (Il2CppClass **)0x42b8cf9;
            il2cpp_runtime_helper_02337ed0();
          }
          pIVar15 = (((Il2CppClass *)__this_04)->_1).interfaceOffsets;
          __this_02.fields.m_ParticleSystem =
               (UnityEngine_ParticleSystem_EmissionModule_Fields)
               (UnityEngine_ParticleSystem_EmissionModule_Fields)TypeInfo_HumanAnimations;
          if (pIVar15 == (Il2CppRuntimeInterfaceOffsetPair *)0x0) goto label_042b9203;
          pIVar20 = *(Il2CppClass **)((long)TypeInfo_HumanAnimations->static_fields + 0x10);
          if (pIVar15[3].field_0xc == '\0') {
            ppIStack_180 = (Il2CppClass **)0x42b91e0;
            pIVar21 = pIVar20;
            bVar10 = System_String__op_Equality
                               ((System_String_o *)pIVar15[3].interfaceType,(System_String_o *)pIVar20,
                                (MethodInfo *)0x0);
            cVar9 = (char)bVar10;
            pMVar18 = extraout_RDX_19;
          }
          else {
            __this_02.fields.m_ParticleSystem =
                 (UnityEngine_ParticleSystem_EmissionModule_Fields)
                 (UnityEngine_ParticleSystem_EmissionModule_Fields)(Il2CppClass *)0x0;
            if (pIVar15[1].interfaceType == (Il2CppClass *)0x0) goto label_042b9203;
            ppIStack_180 = (Il2CppClass **)0x42b8d38;
            pIVar21 = pIVar20;
            bVar10 = UnityEngine_Animation__IsPlaying
                               ((UnityEngine_Animation_o *)pIVar15[1].interfaceType,(System_String_o *)pIVar20
                                ,(MethodInfo *)0x0);
            cVar9 = (char)bVar10;
            pMVar18 = extraout_RDX_12;
          }
          if (cVar9 == '\0') {
            ppIStack_180 = (Il2CppClass **)0x42b91fe;
            Characters_BaseCharacter__CrossFade
                      ((Characters_BaseCharacter_o *)__this_04,(System_String_o *)pIVar20,0.1,0.0,pMVar18);
            pIVar21 = pIVar20;
          }
        }
        goto label_042b8f68;
      }
      __this_01 = &TypeInfo_HorseAnimations;
      if (*(int *)&(TypeInfo_HorseAnimations->_2).field_0x1c == 0) {
        ppIStack_180 = (Il2CppClass **)0x42b8e72;
        il2cpp_runtime_helper_02337ed0();
      }
      pIVar15 = (((Il2CppClass *)plVar24)->_1).interfaceOffsets;
      __this_02.fields.m_ParticleSystem =
           (UnityEngine_ParticleSystem_EmissionModule_Fields)
           (UnityEngine_ParticleSystem_EmissionModule_Fields)TypeInfo_HorseAnimations;
      if (pIVar15 == (Il2CppRuntimeInterfaceOffsetPair *)0x0) goto label_042b9203;
      __this_04 = *(Il2CppClass ***)((long)TypeInfo_HorseAnimations->static_fields + 0x30);
      if (pIVar15[3].field_0xc == '\0') {
        __this_02.fields.m_ParticleSystem =
             (UnityEngine_ParticleSystem_EmissionModule_Fields)pIVar15[3].interfaceType;
        ppIStack_180 = (Il2CppClass **)0x42b91c5;
        pIVar21 = (Il2CppClass *)__this_04;
        bVar10 = System_String__op_Equality
                           ((System_String_o *)__this_02.fields.m_ParticleSystem,(System_String_o *)__this_04,
                            (MethodInfo *)0x0);
        cVar9 = (char)bVar10;
        pMVar18 = extraout_RDX_18;
      }
      else {
        __this_02.fields.m_ParticleSystem =
             (UnityEngine_ParticleSystem_EmissionModule_Fields)pIVar15[1].interfaceType;
        if (__this_02.fields.m_ParticleSystem == (UnityEngine_ParticleSystem_o *)0x0) goto label_042b9203;
        ppIStack_180 = (Il2CppClass **)0x42b8eb2;
        pIVar21 = (Il2CppClass *)__this_04;
        bVar10 = UnityEngine_Animation__IsPlaying
                           ((UnityEngine_Animation_o *)__this_02.fields.m_ParticleSystem,
                            (System_String_o *)__this_04,(MethodInfo *)0x0);
        cVar9 = (char)bVar10;
        pMVar18 = extraout_RDX_14;
      }
      if (cVar9 == '\0') {
        ppIStack_180 = (Il2CppClass **)0x42b8ecc;
        __this_02.fields.m_ParticleSystem =
             (UnityEngine_ParticleSystem_EmissionModule_Fields)
             (UnityEngine_ParticleSystem_EmissionModule_Fields)plVar24;
        Characters_BaseCharacter__CrossFade
                  ((Characters_BaseCharacter_o *)plVar24,(System_String_o *)__this_04,0.1,0.0,pMVar18);
        pIVar21 = (Il2CppClass *)__this_04;
      }
      __this_04 = (((Il2CppClass *)plVar24)->_2).genericContainerHandle;
      if ((Il2CppClass *)__this_04 == (Il2CppClass *)0x0) goto label_042b9203;
      if ((uVar1 == 0) && ((((Il2CppClass *)__this_04)->_2).token == 1)) {
        __this_01 = &TypeInfo_HumanAnimations;
        if (*(int *)&(TypeInfo_HumanAnimations->_2).field_0x1c == 0) {
          ppIStack_180 = (Il2CppClass **)0x42b8f03;
          il2cpp_runtime_helper_02337ed0();
        }
        pIVar15 = (((Il2CppClass *)__this_04)->_1).interfaceOffsets;
        __this_02.fields.m_ParticleSystem =
             (UnityEngine_ParticleSystem_EmissionModule_Fields)
             (UnityEngine_ParticleSystem_EmissionModule_Fields)TypeInfo_HumanAnimations;
        if (pIVar15 == (Il2CppRuntimeInterfaceOffsetPair *)0x0) goto label_042b9203;
        pIVar20 = *(Il2CppClass **)((long)TypeInfo_HumanAnimations->static_fields + 0x10);
        if (pIVar15[3].field_0xc != '\0') {
          __this_03 = pIVar15[1].interfaceType;
          __this_02.fields.m_ParticleSystem =
               (UnityEngine_ParticleSystem_EmissionModule_Fields)
               (UnityEngine_ParticleSystem_EmissionModule_Fields)(Il2CppClass *)0x0;
          if (__this_03 == (Il2CppClass *)0x0) goto label_042b9203;
          goto label_042b8f38;
        }
        goto label_042b919c;
      }
    }
    (((Il2CppClass *)plVar24)->_2).method_count = 0;
    (((Il2CppClass *)plVar24)->_2).property_count = 0;
  }
label_042b8f68:
  __this_01 = &((((Il2CppClass *)plVar24)->_1).interfaceOffsets)->interfaceType;
  unaff_RBP = &TypeInfo_HorseAnimations;
  if (*(int *)&(TypeInfo_HorseAnimations->_2).field_0x1c == 0) {
    ppIStack_180 = (Il2CppClass **)0x42b8f89;
    il2cpp_runtime_helper_02337ed0();
  }
  __this_02.fields.m_ParticleSystem =
       (UnityEngine_ParticleSystem_EmissionModule_Fields)
       (UnityEngine_ParticleSystem_EmissionModule_Fields)TypeInfo_HorseAnimations;
  if ((Il2CppClass *)__this_01 != (Il2CppClass *)0x0) {
    pIVar21 = *(Il2CppClass **)((long)TypeInfo_HorseAnimations->static_fields + 0x28);
    if ((((Il2CppClass *)__this_01)->_1).this_arg.field_0xc == '\0') {
      __this_02.fields.m_ParticleSystem =
           (UnityEngine_ParticleSystem_EmissionModule_Fields)(((Il2CppClass *)__this_01)->_1).this_arg.data;
      ppIStack_180 = (Il2CppClass **)0x42b90ab;
      bVar10 = System_String__op_Equality
                         ((System_String_o *)__this_02.fields.m_ParticleSystem,(System_String_o *)pIVar21,
                          (MethodInfo *)0x0);
      cVar9 = (char)bVar10;
    }
    else {
      __this_02.fields.m_ParticleSystem =
           (UnityEngine_ParticleSystem_EmissionModule_Fields)
           ((Characters_BaseCharacter_Fields *)&(((Il2CppClass *)__this_01)->_1).name)->m_CachedPtr;
      if (__this_02.fields.m_ParticleSystem == (UnityEngine_ParticleSystem_o *)0x0) goto label_042b9203;
      ppIStack_180 = (Il2CppClass **)0x42b8fbf;
      bVar10 = UnityEngine_Animation__IsPlaying
                         ((UnityEngine_Animation_o *)__this_02.fields.m_ParticleSystem,
                          (System_String_o *)pIVar21,(MethodInfo *)0x0);
      cVar9 = (char)bVar10;
    }
    if ((cVar9 == '\0') || (*(char *)((long)&((Il2CppClass *)plVar24)->rgctx_data + 4) == '\0')) {
      local_170.m_ParticleSystem = (UnityEngine_ParticleSystem_o *)0x0;
      lVar16 = *(long *)&(((Il2CppClass *)plVar24)->_2).instance_size;
      if (lVar16 != 0) {
        pUVar4 = *(UnityEngine_ParticleSystem_o **)(lVar16 + 0x38);
        __this_02.fields.m_ParticleSystem =
             (UnityEngine_ParticleSystem_EmissionModule_Fields)
             (UnityEngine_ParticleSystem_EmissionModule_Fields)(Il2CppClass *)0x0;
        if (pUVar4 != (UnityEngine_ParticleSystem_o *)0x0) {
          ppIStack_180 = (Il2CppClass **)0x42b90e1;
          local_170.m_ParticleSystem =
               (UnityEngine_ParticleSystem_o *)
               UnityEngine_ParticleSystem__get_emission(pUVar4,(MethodInfo *)0x0);
          __this_02.fields.m_ParticleSystem = (UnityEngine_ParticleSystem_EmissionModule_Fields)&local_170;
          pIVar21 = (Il2CppClass *)0x0;
          ppIStack_180 = (Il2CppClass **)0x42b90f2;
          bVar10 = UnityEngine_ParticleSystem_EmissionModule__get_enabled(__this_02,(MethodInfo *)0x0);
          if ((char)bVar10 != '\0') {
            __this_02.fields.m_ParticleSystem = (UnityEngine_ParticleSystem_EmissionModule_Fields)&local_170;
            pIVar21 = (Il2CppClass *)0x0;
            ppIStack_180 = (Il2CppClass **)0x42b9104;
            UnityEngine_ParticleSystem_EmissionModule__set_enabled(__this_02,0,(MethodInfo *)0x0);
          }
          lVar16 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
          if ((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x78), lVar16 != 0)) {
            if (*(char *)(lVar16 + 0x11) == '\0') {
              return;
            }
            if (*(int *)(TypeInfo_HorseSounds + 0xe4) == 0) {
              ppIStack_180 = (Il2CppClass **)0x42b9150;
              il2cpp_runtime_helper_02337ed0();
            }
            uVar22 = *(undefined8 *)(*(long *)(TypeInfo_HorseSounds + 0xb8) + 0x18);
            pvVar13 = (((Il2CppClass *)plVar24)->_1).image;
            uVar17 = *(undefined8 *)((long)pvVar13 + 0x780);
            uVar19 = 0;
            goto label_042b916e;
          }
        }
      }
    }
    else {
      local_170.m_ParticleSystem = (UnityEngine_ParticleSystem_o *)0x0;
      lVar16 = *(long *)&(((Il2CppClass *)plVar24)->_2).instance_size;
      if (lVar16 != 0) {
        pUVar4 = *(UnityEngine_ParticleSystem_o **)(lVar16 + 0x38);
        __this_02.fields.m_ParticleSystem =
             (UnityEngine_ParticleSystem_EmissionModule_Fields)
             (UnityEngine_ParticleSystem_EmissionModule_Fields)(Il2CppClass *)0x0;
        if (pUVar4 != (UnityEngine_ParticleSystem_o *)0x0) {
          ppIStack_180 = (Il2CppClass **)0x42b9004;
          local_170.m_ParticleSystem =
               (UnityEngine_ParticleSystem_o *)
               UnityEngine_ParticleSystem__get_emission(pUVar4,(MethodInfo *)0x0);
          __this_02.fields.m_ParticleSystem = (UnityEngine_ParticleSystem_EmissionModule_Fields)&local_170;
          pIVar21 = (Il2CppClass *)0x0;
          ppIStack_180 = (Il2CppClass **)0x42b9015;
          bVar10 = UnityEngine_ParticleSystem_EmissionModule__get_enabled(__this_02,(MethodInfo *)0x0);
          if ((char)bVar10 == '\0') {
            __this_02.fields.m_ParticleSystem = (UnityEngine_ParticleSystem_EmissionModule_Fields)&local_170;
            pIVar21 = (Il2CppClass *)0x1;
            ppIStack_180 = (Il2CppClass **)0x42b902a;
            UnityEngine_ParticleSystem_EmissionModule__set_enabled(__this_02,1,(MethodInfo *)0x0);
          }
          lVar16 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
          if ((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x78), lVar16 != 0)) {
            if (*(char *)(lVar16 + 0x11) == '\0') {
              return;
            }
            if (*(int *)(TypeInfo_HorseSounds + 0xe4) == 0) {
              ppIStack_180 = (Il2CppClass **)0x42b907a;
              il2cpp_runtime_helper_02337ed0();
            }
            uVar22 = *(undefined8 *)(*(long *)(TypeInfo_HorseSounds + 0xb8) + 0x18);
            pvVar13 = (((Il2CppClass *)plVar24)->_1).image;
            uVar17 = *(undefined8 *)((long)pvVar13 + 0x780);
            uVar19 = 1;
label_042b916e:
            ppIStack_180 = (Il2CppClass **)0x42b9174;
            (**(code **)((long)pvVar13 + 0x778))(plVar24,uVar22,uVar19,uVar17);
            return;
          }
        }
      }
    }
  }
label_042b9203:
  ppIStack_180 = (Il2CppClass **)0x42b9208;
  il2cpp_runtime_helper_022b2c90();
  plVar23 = (long *)__this_02.fields.m_ParticleSystem;
  pIStack_190 = (Il2CppClass *)__this_01;
  pIStack_188 = (Il2CppClass *)__this_04;
  ppIStack_180 = unaff_RBP;
  if (g_data_057addcf == '\0') {
    plVar23 = &TypeInfo_Physics;
    il2cpp_runtime_helper_023445d0();
    g_data_057addcf = '\x01';
  }
  local_1c0.fields.m_UV.fields.x = 0.0;
  local_1c0.fields.m_UV.fields.y = 0.0;
  local_1c0.fields.m_Collider = 0;
  local_1c0.fields.m_Normal.fields.y = 0.0;
  local_1c0.fields.m_Normal.fields.z = 0.0;
  local_1c0.fields.m_FaceID = 0;
  local_1c0.fields.m_Distance = 0.0;
  local_1c0.fields.m_Point.fields.x = 0.0;
  local_1c0.fields.m_Point.fields.y = 0.0;
  local_1c0.fields.m_Point.fields.z = 0.0;
  local_1c0.fields.m_Normal.fields.x = 0.0;
  local_1f8[0] = 0;
  *(undefined1 *)((long)&((Il2CppClass *)__this_02.fields.m_ParticleSystem)->rgctx_data + 5) = 0;
  pvVar13 = (((Il2CppClass *)__this_02.fields.m_ParticleSystem)->_1).interopData;
  if (pvVar13 != (void *)0x0) {
    pUVar14 = *(UnityEngine_Transform_o **)((long)pvVar13 + 0x10);
    plVar23 = (long *)0x0;
    if (pUVar14 != (UnityEngine_Transform_o *)0x0) {
      UVar48 = UnityEngine_Transform__get_position(pUVar14,(MethodInfo *)0x0);
      local_1f0._0_4_ = UVar48.fields.x;
      local_1f0._4_4_ = UVar48.fields.y;
      fStack_1e8 = extraout_XMM0_Dc_09;
      fStack_1e4 = extraout_XMM0_Dd_09;
      if (g_data_057a6844 == '\0') {
        local_1f0 = (undefined1  [8])UVar48.fields._0_8_;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a6844 = '\x01';
      }
      lVar16 = *(long *)(TypeInfo_Vector3 + 0xb8);
      local_1e0 = (float)*(undefined8 *)(lVar16 + 0x18) * 0.8;
      fVar30 = (float)((ulong)*(undefined8 *)(lVar16 + 0x18) >> 0x20) * 0.8;
      local_1d0._0_4_ = *(float *)(lVar16 + 0x20) * 0.8;
      fVar26 = 0.0;
      fVar27 = 0.0;
      if (g_data_057ac31b == '\0') {
        fStack_1dc = fVar30;
        fStack_1d8 = 0.0;
        fStack_1d4 = 0.0;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057ac31b = '\x01';
        lVar16 = *(long *)(TypeInfo_Vector3 + 0xb8);
        fVar30 = fStack_1dc;
        fVar26 = fStack_1d8;
        fVar27 = fStack_1d4;
      }
      local_1f0._4_4_ = (float)local_1f0._4_4_ + fVar30;
      local_1f0._0_4_ = (float)local_1f0._0_4_ + local_1e0;
      fStack_1e8 = fStack_1e8 + fVar26;
      fStack_1e4 = fStack_1e4 + fVar27;
      origin.fields.z = UVar48.fields.z + (float)local_1d0;
      local_1d0 = *(undefined8 *)(lVar16 + 0x24);
      uStack_1c8 = 0;
      local_1e0 = *(float *)(lVar16 + 0x2c);
      local_1f8[0] = (*(((((Il2CppClass *)__this_02.fields.m_ParticleSystem)->_1).image)->vtable).
                       _60_get_GroundMask.methodPtr)(__this_02.fields.m_ParticleSystem);
      iVar11 = UnityEngine_LayerMask__get_value
                         ((UnityEngine_LayerMask_Fields)(int32_t)local_1f8,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      auVar37 = _local_1f0;
      uVar25 = 0;
      origin.fields.x = (float)local_1f0._0_4_;
      origin.fields.y = (float)local_1f0._4_4_;
      direction.fields.z = local_1e0;
      direction.fields.x = (float)local_1d0;
      direction.fields.y = (float)local_1d0._4_4_;
      _local_1f0 = auVar37;
      bVar10 = UnityEngine_Physics__SphereCast_4e78cf0
                         (origin,0.6,direction,&local_1c0,0.8,iVar11,(MethodInfo *)0x0);
      if ((char)bVar10 != '\0') {
        if (*(char *)((long)&((Il2CppClass *)__this_02.fields.m_ParticleSystem)->rgctx_data + 4) != '\0') {
          return;
        }
        *(undefined1 *)((long)&((Il2CppClass *)__this_02.fields.m_ParticleSystem)->rgctx_data + 5) = 1;
        uVar25 = 1;
      }
      *(undefined1 *)((long)&((Il2CppClass *)__this_02.fields.m_ParticleSystem)->rgctx_data + 4) = uVar25;
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  *(undefined1 *)&(((Il2CppClass *)plVar23)->_2).native_size = 1;
  (((Il2CppClass *)plVar23)->_2).static_fields_size = 0x41700000;
  (((Il2CppClass *)plVar23)->_2).thread_static_fields_size = 0x41a00000;
  (((Il2CppClass *)plVar23)->_2).thread_static_fields_offset = 0x41200000;
  (((Il2CppClass *)plVar23)->_2).flags = 0x41f00000;
  (((Il2CppClass *)plVar23)->_2).token = 0x42340000;
  Characters_BaseCharacter___ctor((Characters_BaseCharacter_o *)plVar23,(MethodInfo *)pIVar21);
  return;
}


// Characters.Horse$$IdleOneShot
// il2cpp: void Characters_Horse__IdleOneShot (Characters_Horse_o* __this, System_String_o* animation, const MethodInfo* method);
// 0x42b75e0

void Characters_Horse__IdleOneShot(Characters_Horse_o *__this,System_String_o *animation,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  Outline_o *pOVar3;
  Outline_c *pOVar4;
  UnityEngine_Material_o *pUVar5;
  UnityEngine_Rigidbody_o *pUVar6;
  System_Action_Hashtable__o *pSVar7;
  UnityEngine_ParticleSystem_o *pUVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  UnityEngine_Vector3_Fields fromDirection;
  long lVar12;
  long lVar13;
  char cVar14;
  bool_conflict bVar15;
  int32_t iVar16;
  UnityEngine_GameObject_o *targetGo;
  Characters_Human_o **ppCVar17;
  UnityEngine_Transform_o *pUVar18;
  Characters_Horse_c *pCVar19;
  long lVar20;
  MethodInfo *pMVar21;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  undefined8 uVar22;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  MethodInfo *extraout_RDX_06;
  Characters_Horse_o **x;
  Characters_Horse_o **unaff_RBP;
  Characters_Horse_o *pCVar23;
  Characters_Horse_o *pCVar24;
  undefined8 uVar25;
  long *plVar26;
  long *__this_00;
  UnityEngine_ParticleSystem_EmissionModule_o __this_01;
  UnityEngine_Animation_o *__this_02;
  undefined1 uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dc_03;
  undefined4 extraout_XMM0_Dc_04;
  undefined4 extraout_XMM0_Dc_05;
  undefined4 extraout_XMM0_Dc_06;
  undefined4 extraout_XMM0_Dc_07;
  undefined4 extraout_XMM0_Dc_08;
  float extraout_XMM0_Dc_09;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  undefined4 extraout_XMM0_Dd_03;
  undefined4 extraout_XMM0_Dd_04;
  undefined4 extraout_XMM0_Dd_05;
  undefined4 extraout_XMM0_Dd_06;
  undefined4 extraout_XMM0_Dd_07;
  undefined4 extraout_XMM0_Dd_08;
  float extraout_XMM0_Dd_09;
  undefined4 uVar33;
  undefined4 uVar34;
  float fVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float fVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  float fVar44;
  float fVar45;
  float fVar46;
  UnityEngine_Quaternion_o UVar47;
  UnityEngine_Quaternion_o UVar48;
  UnityEngine_Quaternion_o a;
  UnityEngine_Vector3_o UVar49;
  UnityEngine_Vector3_o force;
  UnityEngine_Vector3_o force_00;
  UnityEngine_Vector3_o force_01;
  UnityEngine_Vector3_o UVar50;
  UnityEngine_Vector3_o origin;
  UnityEngine_Vector3_o direction;
  undefined4 auStack_1d0 [2];
  undefined1 auStack_1c8 [8];
  float fStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  UnityEngine_RaycastHit_o UStack_198;
  Characters_Horse_o *pCStack_168;
  Characters_Horse_o *pCStack_160;
  Characters_Horse_o **ppCStack_158;
  float fStack_14c;
  UnityEngine_ParticleSystem_EmissionModule_Fields UStack_148;
  undefined1 auStack_140 [8];
  undefined4 uStack_138;
  undefined4 uStack_134;
  Characters_Horse_o *pCStack_130;
  float fStack_108;
  float fStack_104;
  float fStack_d8;
  float fStack_d4;
  float fStack_80;
  float fStack_7c;
  undefined8 uStack_70;
  undefined8 uStack_60;
  float fStack_40;
  
  uVar33 = 0;
  uVar34 = 0;
  pMVar21 = (MethodInfo *)animation;
  Characters_BaseCharacter__CrossFade((Characters_BaseCharacter_o *)__this,animation,0.1,0.0,method);
  pCVar24 = *(Characters_Horse_o **)&(__this->fields)._cameraFPS;
  if (pCVar24 != (Characters_Horse_o *)0x0) {
    fVar28 = Characters_AnimationHandler__GetLength
                       ((Characters_AnimationHandler_o *)pCVar24,animation,method_00);
    (__this->fields).FollowingEnabled = (bool_conflict)fVar28;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  plVar26 = (long *)pCVar24;
  if (g_data_057addcc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    plVar26 = &TypeInfo_Util;
    il2cpp_runtime_helper_023445d0();
    g_data_057addcc = '\x01';
  }
  lVar20 = *(long *)&(pCVar24->fields).Dead;
  if ((lVar20 == 0) || (lVar20 = *(long *)(lVar20 + 0x20), lVar20 == 0)) goto label_042b7ca8;
  if (*(char *)(lVar20 + 0x68) == '\0') {
    return;
  }
  fVar28 = (pCVar24->fields).RunCloseSpeed;
  fVar29 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  uVar33 = 0;
  uVar34 = 0;
  (pCVar24->fields).RunCloseSpeed = fVar28 - fVar29;
  __this = (Characters_Horse_o *)(pCVar24->fields).OutlineComponent;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar21 = (MethodInfo *)0x0;
  plVar26 = (long *)__this;
  bVar15 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar15 != '\0') {
label_042b7700:
    targetGo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pCVar24,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    Photon_Pun_PhotonNetwork__Destroy_3eec3a0(targetGo,(MethodInfo *)0x0);
    return;
  }
  pOVar3 = (pCVar24->fields).OutlineComponent;
  if (pOVar3 == (Outline_o *)0x0) goto label_042b7ca8;
  if (*(char *)&(pOVar3->fields)._namesToIgnore != '\0') goto label_042b7700;
  if (pOVar3[2].fields.precomputeOutline == 1) {
    if (*(char *)((long)&pOVar3[1].fields.outlineMaskAndFillMaterial + 4) == '\0') {
      *(undefined4 *)&(pCVar24->fields).crossfadeCache = 3;
      return;
    }
    lVar20 = *(long *)&(pCVar24->fields).Dead;
    if ((lVar20 != 0) &&
       (animation = *(System_String_o **)(lVar20 + 0x18),
       (Characters_Horse_o *)animation != (Characters_Horse_o *)0x0)) {
      pMVar21 = (MethodInfo *)0x0;
      UVar47 = UnityEngine_Rigidbody__get_rotation((UnityEngine_Rigidbody_o *)animation,(MethodInfo *)0x0);
      fVar28 = UVar47.fields.z;
      fVar29 = UVar47.fields.w;
      pOVar3 = (pCVar24->fields).OutlineComponent;
      plVar26 = (long *)0x0;
      if (pOVar3 != (Outline_o *)0x0) {
        uStack_70 = (*pOVar3->klass[4].vtable._0_Equals.methodPtr)();
        fVar30 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
        UVar48.fields.z = fVar28;
        UVar48.fields.w = fVar29;
        UVar48.fields.x = (float)(undefined4)uStack_70;
        UVar48.fields.y = (float)uStack_70._4_4_;
        UVar47 = UnityEngine_Quaternion__Lerp(UVar47,UVar48,fVar30 * 5.0,(MethodInfo *)0x0);
        pMVar21 = (MethodInfo *)0x0;
        plVar26 = (long *)animation;
        UnityEngine_Rigidbody__MoveRotation((UnityEngine_Rigidbody_o *)animation,UVar47,(MethodInfo *)0x0);
        pOVar3 = (pCVar24->fields).OutlineComponent;
        if (pOVar3 != (Outline_o *)0x0) {
          if (*(char *)((long)&pOVar3[4].fields.outlineMaskAndFillMaterial + 4) != '\0') {
            *(undefined4 *)&(pCVar24->fields).crossfadeCache = 5;
            return;
          }
          *(undefined4 *)&(pCVar24->fields).crossfadeCache = 4;
          return;
        }
      }
    }
  }
  else {
    if (*(char *)((long)&(pCVar24->fields).crossfadeCache + 4) == '\0') {
      return;
    }
    fVar28 = (pCVar24->fields).WalkSpeed;
    plVar26 = (long *)0x0;
    fVar29 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    uVar33 = 0;
    uVar34 = 0;
    (pCVar24->fields).WalkSpeed = fVar28 - fVar29;
    pOVar3 = (pCVar24->fields).OutlineComponent;
    if (((pOVar3 != (Outline_o *)0x0) && (pOVar4 = pOVar3[1].klass, pOVar4 != (Outline_c *)0x0)) &&
       (plVar26 = (long *)(pOVar4->_1).name, (Characters_Horse_o *)plVar26 != (Characters_Horse_o *)0x0)) {
      pMVar21 = (MethodInfo *)0x0;
      UVar50 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)plVar26,(MethodInfo *)0x0);
      lVar20 = *(long *)&(pCVar24->fields).Dead;
      if (lVar20 != 0) {
        pUVar18 = *(UnityEngine_Transform_o **)(lVar20 + 0x10);
        plVar26 = (long *)0x0;
        if (pUVar18 != (UnityEngine_Transform_o *)0x0) {
          pMVar21 = (MethodInfo *)0x0;
          UVar49 = UnityEngine_Transform__get_position(pUVar18,(MethodInfo *)0x0);
          if (g_data_057a68cb == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
            g_data_057a68cb = '\x01';
          }
          fVar29 = UVar50.fields.x - UVar49.fields.x;
          fStack_7c = UVar50.fields.y;
          fStack_7c = fStack_7c - UVar49.fields.y;
          fVar28 = UVar50.fields.z - UVar49.fields.z;
          plVar26 = (long *)TypeInfo_Math;
          if ((TypeInfo_Math->fields)._stepPhase == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          fVar28 = fVar28 * fVar28 + fStack_7c * fStack_7c + fVar29 * fVar29;
          uVar33 = 0;
          uVar34 = 0;
          if (fVar28 < 0.0) {
            fVar28 = sqrtf(fVar28);
            pOVar3 = (pCVar24->fields).OutlineComponent;
          }
          else {
            fVar28 = SQRT(fVar28);
            pOVar3 = (pCVar24->fields).OutlineComponent;
          }
          animation = (System_String_o *)&TypeInfo_Math;
          if (((pOVar3 != (Outline_o *)0x0) && (pOVar3[1].klass != (Outline_c *)0x0)) &&
             (plVar26 = (long *)((pOVar3[1].klass)->_1).name,
             (Characters_Horse_o *)plVar26 != (Characters_Horse_o *)0x0)) {
            pMVar21 = (MethodInfo *)0x0;
            UVar50 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)plVar26,(MethodInfo *)0x0)
            ;
            lVar20 = *(long *)&(pCVar24->fields).Dead;
            if (lVar20 != 0) {
              pUVar18 = *(UnityEngine_Transform_o **)(lVar20 + 0x10);
              plVar26 = (long *)0x0;
              if (pUVar18 != (UnityEngine_Transform_o *)0x0) {
                pMVar21 = (MethodInfo *)0x0;
                UVar49 = UnityEngine_Transform__get_position(pUVar18,(MethodInfo *)0x0);
                if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                plVar26 = (long *)0x0;
                fVar29 = Utility_Util__DistanceIgnoreY(UVar50,UVar49,(MethodInfo *)0x0);
                if (fVar28 <= 20.0) {
label_042b7a39:
                  if (fVar29 < 5.0) {
                    *(undefined4 *)&(pCVar24->fields).crossfadeCache = 0;
                    (pCVar24->fields).WalkSpeed = *(float *)&(pCVar24->fields).HorseCache;
                    return;
                  }
                  uVar33 = 0;
                  uVar34 = 0;
                  if (20.0 <= fVar29) {
                    *(undefined4 *)&(pCVar24->fields).crossfadeCache = 2;
                    goto label_042b7ad1;
                  }
                  *(undefined4 *)&(pCVar24->fields).crossfadeCache = 1;
                  (pCVar24->fields).WalkSpeed = *(float *)&(pCVar24->fields).HorseCache;
                  pOVar3 = (pCVar24->fields).OutlineComponent;
                }
                else {
                  uVar33 = 0;
                  uVar34 = 0;
                  if (0.0 < (pCVar24->fields).WalkSpeed) goto label_042b7a39;
                  plVar26 = (long *)pCVar24;
                  Characters_Horse__TeleportToHuman(pCVar24,pMVar21);
                  if (1 < *(int *)&(pCVar24->fields).crossfadeCache - 1U) {
                    return;
                  }
label_042b7ad1:
                  pOVar3 = (pCVar24->fields).OutlineComponent;
                }
                if (((pOVar3 != (Outline_o *)0x0) && (pOVar3[1].klass != (Outline_c *)0x0)) &&
                   (plVar26 = (long *)((pOVar3[1].klass)->_1).name,
                   (Characters_Horse_o *)plVar26 != (Characters_Horse_o *)0x0)) {
                  pMVar21 = (MethodInfo *)0x0;
                  UVar50 = UnityEngine_Transform__get_position
                                     ((UnityEngine_Transform_o *)plVar26,(MethodInfo *)0x0);
                  lVar20 = *(long *)&(pCVar24->fields).Dead;
                  if ((lVar20 != 0) &&
                     (plVar26 = *(long **)(lVar20 + 0x10),
                     (Characters_Horse_o *)plVar26 != (Characters_Horse_o *)0x0)) {
                    pMVar21 = (MethodInfo *)0x0;
                    UVar49 = UnityEngine_Transform__get_position
                                       ((UnityEngine_Transform_o *)plVar26,(MethodInfo *)0x0);
                    lVar20 = *(long *)&(pCVar24->fields).Dead;
                    if (lVar20 != 0) {
                      pUVar6 = *(UnityEngine_Rigidbody_o **)(lVar20 + 0x18);
                      __this = (Characters_Horse_o *)0x0;
                      if (pUVar6 != (UnityEngine_Rigidbody_o *)0x0) {
                        UVar47 = UnityEngine_Rigidbody__get_rotation(pUVar6,(MethodInfo *)0x0);
                        if (g_data_057a6845 == '\0') {
                          il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                          g_data_057a6845 = '\x01';
                        }
                        fStack_80 = UVar50.fields.x;
                        fStack_40 = UVar49.fields.x;
                        fStack_80 = fStack_80 - fStack_40;
                        fVar28 = UVar50.fields.z - UVar49.fields.z;
                        if ((TypeInfo_Math->fields)._stepPhase == 0) {
                          il2cpp_runtime_helper_02337ed0();
                        }
                        uVar33 = 0;
                        uVar34 = 0;
                        fVar29 = fVar28 * fVar28 + fStack_80 * fStack_80 + 0.0;
                        if (fVar29 < 0.0) {
                          fVar29 = sqrtf(fVar29);
                          uVar33 = extraout_XMM0_Dc;
                          uVar34 = extraout_XMM0_Dd;
                        }
                        else {
                          fVar29 = SQRT(fVar29);
                        }
                        if (1e-05 < fVar29) {
                          fVar28 = fVar28 / fVar29;
                          auVar39._4_4_ = fVar29;
                          auVar39._0_4_ = fVar29;
                          auVar39._8_4_ = uVar33;
                          auVar39._12_4_ = uVar34;
                          auVar39 = divps(ZEXT416((uint)fStack_80),auVar39);
                          uVar25 = auVar39._0_8_;
                        }
                        else {
                          if (g_data_057a65d5 == '\0') {
                            il2cpp_runtime_helper_023445d0();
                            g_data_057a65d5 = '\x01';
                          }
                          uVar25 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
                          fVar28 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
                        }
                        UVar50.fields.z = fVar28;
                        UVar50.fields.x = (float)(int)uVar25;
                        UVar50.fields.y = (float)(int)((ulong)uVar25 >> 0x20);
                        UVar48 = UnityEngine_Quaternion__LookRotation_4debb20(UVar50,(MethodInfo *)0x0);
                        fVar28 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
                        UVar47 = UnityEngine_Quaternion__Lerp(UVar47,UVar48,fVar28 * 10.0,(MethodInfo *)0x0);
                        UnityEngine_Rigidbody__MoveRotation(pUVar6,UVar47,(MethodInfo *)0x0);
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
label_042b7ca8:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057addcd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057addcd = '\x01';
  }
  __this_00 = plVar26;
  Characters_BaseCharacter__FixedUpdate((Characters_BaseCharacter_o *)plVar26,pMVar21);
  lVar20 = *(long *)&(((Characters_Horse_o *)plVar26)->fields).Dead;
  x = (Characters_Horse_o **)__this;
  if ((lVar20 != 0) && (lVar20 = *(long *)(lVar20 + 0x20), lVar20 != 0)) {
    if (*(char *)(lVar20 + 0x68) == '\0') {
      return;
    }
    x = (Characters_Horse_o **)(((Characters_Horse_o *)plVar26)->fields).OutlineComponent;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_00 = (long *)x;
    bVar15 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar15 != '\0') {
      return;
    }
    pOVar3 = (((Characters_Horse_o *)plVar26)->fields).OutlineComponent;
    if (pOVar3 != (Outline_o *)0x0) {
      if (*(char *)&(pOVar3->fields)._namesToIgnore != '\0') {
        return;
      }
      __this_00 = plVar26;
      (*(((Characters_Horse_o *)plVar26)->klass->vtable)._96_CheckGround.methodPtr)();
      lVar20 = *(long *)&(((Characters_Horse_o *)plVar26)->fields).Dead;
      if ((lVar20 != 0) &&
         (__this_00 = *(long **)(lVar20 + 0x18), (Characters_Horse_o *)__this_00 != (Characters_Horse_o *)0x0)
         ) {
        UnityEngine_Rigidbody__set_angularDrag((UnityEngine_Rigidbody_o *)__this_00,6.0,(MethodInfo *)0x0);
        if ((*(char *)((long)&(((Characters_Horse_o *)plVar26)->fields).Animation + 4) == '\0') ||
           (uVar2 = *(uint *)&(((Characters_Horse_o *)plVar26)->fields).crossfadeCache, 5 < uVar2)) {
joined_r0x042b81df:
          if (g_data_057a6844 == '\0') {
            __this_00 = &TypeInfo_Vector3;
            il2cpp_runtime_helper_023445d0();
            g_data_057a6844 = '\x01';
          }
          lVar20 = *(long *)&(((Characters_Horse_o *)plVar26)->fields).Dead;
          if ((lVar20 != 0) &&
             (__this_00 = *(long **)(lVar20 + 0x18),
             (Characters_Horse_o *)__this_00 != (Characters_Horse_o *)0x0)) {
            fromDirection = *(UnityEngine_Vector3_Fields *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
            pUVar18 = UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
            if (pUVar18 != (UnityEngine_Transform_o *)0x0) {
              UVar50 = UnityEngine_Transform__get_up(pUVar18,(MethodInfo *)0x0);
              __this_00 = (long *)0x0;
              UVar47 = UnityEngine_Quaternion__FromToRotation
                                 ((UnityEngine_Vector3_o)fromDirection,UVar50,(MethodInfo *)0x0);
              fVar28 = UVar47.fields.z;
              if (g_data_057a6843 == '\0') {
                __this_00 = &TypeInfo_Quaternion;
                il2cpp_runtime_helper_023445d0();
                g_data_057a6843 = '\x01';
              }
              uVar25 = **(undefined8 **)(TypeInfo_Quaternion + 0xb8);
              uVar22 = (*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
              fVar29 = ABS((float)((ulong)uVar22 >> 0x20) * UVar47.fields.w +
                           (float)((ulong)uVar25 >> 0x20) * UVar47.fields.y + (float)uVar25 * UVar47.fields.x
                           + (float)uVar22 * fVar28);
              if (1.0 <= fVar29) {
                fVar29 = 1.0;
              }
              fVar30 = 0.0;
              if (fVar29 <= 0.999999) {
                fVar29 = acosf(fVar29);
                fVar30 = (fVar29 + fVar29) * 57.29578;
              }
              piVar1 = &(((Characters_Horse_o *)plVar26)->fields).State;
              if (fVar30 < (float)*piVar1 || fVar30 == (float)*piVar1) {
label_042b89f8:
                lVar20 = *(long *)&(((Characters_Horse_o *)plVar26)->fields).Dead;
                if (lVar20 != 0) {
                  pUVar6 = *(UnityEngine_Rigidbody_o **)(lVar20 + 0x18);
                  uVar25 = (*(((Characters_Horse_o *)plVar26)->klass->vtable)._58_get_Gravity.methodPtr)
                                     (plVar26,(((Characters_Horse_o *)plVar26)->klass->vtable)._58_get_Gravity
                                              .method);
                  x = (Characters_Horse_o **)0x0;
                  __this_00 = plVar26;
                  if (pUVar6 != (UnityEngine_Rigidbody_o *)0x0) {
                    force_01.fields.z = fVar28;
                    force_01.fields.x = (float)(int)uVar25;
                    force_01.fields.y = (float)(int)((ulong)uVar25 >> 0x20);
                    UnityEngine_Rigidbody__AddForce(pUVar6,force_01,5,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
              else {
                __this_00 = (long *)0x0;
                UVar47 = UnityEngine_Quaternion__Inverse(UVar47,(MethodInfo *)0x0);
                lVar20 = *(long *)&(((Characters_Horse_o *)plVar26)->fields).Dead;
                if ((lVar20 != 0) &&
                   (__this_00 = *(long **)(lVar20 + 0x18),
                   (Characters_Horse_o *)__this_00 != (Characters_Horse_o *)0x0)) {
                  UVar48 = UnityEngine_Rigidbody__get_rotation
                                     ((UnityEngine_Rigidbody_o *)__this_00,(MethodInfo *)0x0);
                  fVar30 = UVar48.fields.z;
                  fVar31 = UVar48.fields.w;
                  fVar28 = UVar48.fields.x;
                  fVar29 = UVar48.fields.y;
                  lVar20 = *(long *)&(((Characters_Horse_o *)plVar26)->fields).Dead;
                  if ((lVar20 != 0) &&
                     (__this_00 = *(long **)(lVar20 + 0x18),
                     (Characters_Horse_o *)__this_00 != (Characters_Horse_o *)0x0)) {
                    fStack_108 = UVar47.fields.z;
                    fStack_104 = UVar47.fields.w;
                    fStack_d8 = UVar47.fields.x;
                    fStack_d4 = UVar47.fields.y;
                    fVar46 = (fStack_d4 * fVar30 + fStack_d8 * fVar31 + fStack_104 * fVar28) -
                             fStack_108 * fVar29;
                    fVar44 = (fStack_108 * fVar28 + fStack_d4 * fVar31 + fVar29 * fStack_104) -
                             fVar30 * fStack_d8;
                    fVar45 = (fStack_d8 * fVar29 + fStack_108 * fVar31 + fVar30 * fStack_104) -
                             fVar28 * fStack_d4;
                    fVar35 = ((fVar31 * fStack_104 - fVar28 * fStack_d8) - fVar29 * fStack_d4) -
                             fStack_108 * fVar30;
                    UVar47 = UnityEngine_Rigidbody__get_rotation
                                       ((UnityEngine_Rigidbody_o *)__this_00,(MethodInfo *)0x0);
                    fVar28 = UVar47.fields.z;
                    fVar31 = UVar47.fields.w;
                    fVar29 = UVar47.fields.x;
                    fVar30 = UVar47.fields.y;
                    fVar32 = ABS(fVar31 * fVar35 + fVar28 * fVar45 + fVar46 * fVar29 + fVar30 * fVar44);
                    if (1.0 <= fVar32) {
                      fVar32 = 1.0;
                    }
                    if (0.999999 < fVar32) {
label_042b89dc:
                      lVar12._0_4_ = (((Characters_Horse_o *)plVar26)->fields).Dead;
                      lVar12._4_4_ = (((Characters_Horse_o *)plVar26)->fields).CustomDamageEnabled;
                    }
                    else {
                      fVar41 = (float)(((Characters_Horse_o *)plVar26)->fields).State;
                      fVar32 = acosf(fVar32);
                      fVar32 = (fVar32 + fVar32) * 57.29578;
                      if ((fVar32 == 0.0) && (!NAN(fVar32))) goto label_042b89dc;
                      fVar41 = fVar41 / fVar32;
                      fVar28 = 1.0;
                      if (fVar41 <= 1.0) {
                        fVar28 = fVar41;
                      }
                      __this_00 = (long *)0x0;
                      a.fields.y = fVar44;
                      a.fields.x = fVar46;
                      a.fields.w = fVar35;
                      a.fields.z = fVar45;
                      UVar47 = UnityEngine_Quaternion__SlerpUnclamped(a,UVar47,fVar28,(MethodInfo *)0x0);
                      fVar28 = UVar47.fields.z;
                      fVar31 = UVar47.fields.w;
                      fVar29 = UVar47.fields.x;
                      fVar30 = UVar47.fields.y;
                      lVar12._0_4_ = (((Characters_Horse_o *)plVar26)->fields).Dead;
                      lVar12._4_4_ = (((Characters_Horse_o *)plVar26)->fields).CustomDamageEnabled;
                    }
                    if ((lVar12 != 0) &&
                       (__this_00 = *(long **)(lVar12 + 0x18),
                       (Characters_Horse_o *)__this_00 != (Characters_Horse_o *)0x0)) {
                      UVar47.fields.y = fVar30;
                      UVar47.fields.x = fVar29;
                      UVar47.fields.w = fVar31;
                      UVar47.fields.z = fVar28;
                      UnityEngine_Rigidbody__MoveRotation
                                ((UnityEngine_Rigidbody_o *)__this_00,UVar47,(MethodInfo *)0x0);
                      goto label_042b89f8;
                    }
                  }
                }
              }
            }
          }
        }
        else if ((0x36U >> (uVar2 & 0x1f) & 1) == 0) {
          lVar20 = *(long *)&(((Characters_Horse_o *)plVar26)->fields).Dead;
          if (lVar20 != 0) {
            pUVar6 = *(UnityEngine_Rigidbody_o **)(lVar20 + 0x18);
            __this_00 = (long *)0x0;
            if (pUVar6 != (UnityEngine_Rigidbody_o *)0x0) {
              UVar50 = UnityEngine_Rigidbody__get_velocity(pUVar6,(MethodInfo *)0x0);
              if (g_data_057a6841 == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                g_data_057a6841 = '\x01';
              }
              x = &TypeInfo_Math;
              __this_00 = (long *)TypeInfo_Math;
              if ((TypeInfo_Math->fields)._stepPhase == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              fVar28 = UVar50.fields.z * UVar50.fields.z +
                       UVar50.fields.y * UVar50.fields.y + UVar50.fields.x * UVar50.fields.x;
              if (fVar28 < 0.0) {
                fVar28 = sqrtf(fVar28);
                lVar20._0_4_ = (((Characters_Horse_o *)plVar26)->fields).Dead;
                lVar20._4_4_ = (((Characters_Horse_o *)plVar26)->fields).CustomDamageEnabled;
              }
              else {
                fVar28 = SQRT(fVar28);
                lVar20._0_4_ = (((Characters_Horse_o *)plVar26)->fields).Dead;
                lVar20._4_4_ = (((Characters_Horse_o *)plVar26)->fields).CustomDamageEnabled;
              }
              if (lVar20 != 0) {
                uVar33 = 0;
                uVar34 = 0;
                animation = *(System_String_o **)(lVar20 + 0x18);
                if (1.0 <= fVar28) {
                  if ((Characters_Horse_o *)animation != (Characters_Horse_o *)0x0) {
                    UVar50 = UnityEngine_Rigidbody__get_velocity
                                       ((UnityEngine_Rigidbody_o *)animation,(MethodInfo *)0x0);
                    fVar28 = UVar50.fields.z;
                    auVar37._0_8_ = UVar50.fields._0_8_;
                    auVar37._8_4_ = extraout_XMM0_Dc_02;
                    auVar37._12_4_ = extraout_XMM0_Dd_02;
                    auVar40._8_4_ = extraout_XMM0_Dc_02;
                    auVar40._0_8_ = auVar37._0_8_;
                    auVar40._12_4_ = extraout_XMM0_Dd_02;
                    if (g_data_057a6845 == '\0') {
                      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                      g_data_057a6845 = '\x01';
                      auVar37 = auVar40;
                    }
                    __this_00 = (long *)TypeInfo_Math;
                    if ((TypeInfo_Math->fields)._stepPhase == 0) {
                      il2cpp_runtime_helper_02337ed0();
                      auVar37 = auVar40;
                    }
                    fVar29 = fVar28 * fVar28 + auVar37._4_4_ * auVar37._4_4_ + auVar37._0_4_ * auVar37._0_4_;
                    if (fVar29 < 0.0) {
                      fVar29 = sqrtf(fVar29);
                      uVar33 = extraout_XMM0_Dc_05;
                      uVar34 = extraout_XMM0_Dd_05;
                      if (1e-05 < fVar29) goto label_042b84aa;
label_042b84c6:
                      if (g_data_057a65d5 == '\0') {
                        __this_00 = &TypeInfo_Vector3;
                        il2cpp_runtime_helper_023445d0();
                        g_data_057a65d5 = '\x01';
                      }
                      uVar25 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
                      fVar28 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
                      pOVar3 = (((Characters_Horse_o *)plVar26)->fields).OutlineComponent;
                    }
                    else {
                      fVar29 = SQRT(fVar29);
                      auVar40 = auVar37;
                      if (fVar29 <= 1e-05) goto label_042b84c6;
label_042b84aa:
                      fVar28 = fVar28 / fVar29;
                      auVar11._4_4_ = fVar29;
                      auVar11._0_4_ = fVar29;
                      auVar11._8_4_ = uVar33;
                      auVar11._12_4_ = uVar34;
                      auVar39 = divps(auVar40,auVar11);
                      uVar25 = auVar39._0_8_;
                      pOVar3 = (((Characters_Horse_o *)plVar26)->fields).OutlineComponent;
                    }
                    if (((pOVar3 != (Outline_o *)0x0) &&
                        (pUVar5 = pOVar3[2].fields.outlineMaskAndFillMaterial,
                        pUVar5 != (UnityEngine_Material_o *)0x0)) &&
                       (lVar20 = *(long *)&(((Characters_Horse_o *)plVar26)->fields).Dead, lVar20 != 0)) {
                      pUVar6 = *(UnityEngine_Rigidbody_o **)(lVar20 + 0x18);
                      __this_00 = (long *)0x0;
                      if (pUVar6 != (UnityEngine_Rigidbody_o *)0x0) {
                        fVar29 = *(float *)((long)&pUVar5[2].klass + 4);
                        UVar50 = UnityEngine_Rigidbody__get_velocity(pUVar6,(MethodInfo *)0x0);
                        if (g_data_057a6841 == '\0') {
                          il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                          g_data_057a6841 = '\x01';
                        }
                        if ((TypeInfo_Math->fields)._stepPhase == 0) {
                          il2cpp_runtime_helper_02337ed0();
                        }
                        fVar30 = UVar50.fields.z * UVar50.fields.z +
                                 UVar50.fields.y * UVar50.fields.y + UVar50.fields.x * UVar50.fields.x;
                        if (fVar30 < 0.0) {
                          fVar30 = sqrtf(fVar30);
                        }
                        else {
                          fVar30 = SQRT(fVar30);
                        }
                        fStack_108 = (float)uVar25;
                        fStack_104 = (float)((ulong)uVar25 >> 0x20);
                        if (fVar30 * 0.5 <= fVar29) {
                          fVar29 = fVar30 * 0.5;
                        }
                        fVar30 = -(fStack_108 * fVar29);
                        fVar31 = -(fStack_104 * fVar29);
                        fVar28 = -(fVar28 * fVar29);
                        iVar16 = 5;
                        goto label_042b86a3;
                      }
                    }
                  }
                }
                else {
                  if (g_data_057a6844 == '\0') {
                    __this_00 = &TypeInfo_Vector3;
                    il2cpp_runtime_helper_023445d0();
                    g_data_057a6844 = '\x01';
                    lVar20._0_4_ = (((Characters_Horse_o *)plVar26)->fields).Dead;
                    lVar20._4_4_ = (((Characters_Horse_o *)plVar26)->fields).CustomDamageEnabled;
                  }
                  if ((lVar20 != 0) &&
                     (__this_00 = *(long **)(lVar20 + 0x18),
                     (Characters_Horse_o *)__this_00 != (Characters_Horse_o *)0x0)) {
                    uVar25 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
                    fVar28 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
                    UVar50 = UnityEngine_Rigidbody__get_velocity
                                       ((UnityEngine_Rigidbody_o *)__this_00,(MethodInfo *)0x0);
                    fVar29 = UVar50.fields.y;
                    if ((Characters_Horse_o *)animation != (Characters_Horse_o *)0x0) {
                      fStack_108 = (float)uVar25;
                      fStack_104 = (float)((ulong)uVar25 >> 0x20);
                      UVar49.fields.y = fStack_104 * fVar29;
                      UVar49.fields.x = fStack_108 * fVar29;
                      UVar49.fields.z = fVar28 * fVar29;
                      __this_00 = (long *)animation;
                      UnityEngine_Rigidbody__set_velocity
                                ((UnityEngine_Rigidbody_o *)animation,UVar49,(MethodInfo *)0x0);
                      goto joined_r0x042b81df;
                    }
                  }
                }
              }
            }
          }
        }
        else {
          pOVar3 = (((Characters_Horse_o *)plVar26)->fields).OutlineComponent;
          if ((pOVar3 != (Outline_o *)0x0) &&
             (pUVar5 = pOVar3[2].fields.outlineMaskAndFillMaterial, pUVar5 != (UnityEngine_Material_o *)0x0))
          {
            if (uVar2 == 1) {
              ppCVar17 = (Characters_Human_o **)((long)&(((Characters_Horse_o *)plVar26)->fields)._owner + 4);
              lVar13._0_4_ = (((Characters_Horse_o *)plVar26)->fields).Dead;
              lVar13._4_4_ = (((Characters_Horse_o *)plVar26)->fields).CustomDamageEnabled;
            }
            else if (uVar2 == 5) {
              ppCVar17 = &(((Characters_Horse_o *)plVar26)->fields)._owner;
              lVar13._0_4_ = (((Characters_Horse_o *)plVar26)->fields).Dead;
              lVar13._4_4_ = (((Characters_Horse_o *)plVar26)->fields).CustomDamageEnabled;
            }
            else {
              ppCVar17 = (Characters_Human_o **)((long)&pUVar5[2].klass + 4);
              lVar13._0_4_ = (((Characters_Horse_o *)plVar26)->fields).Dead;
              lVar13._4_4_ = (((Characters_Horse_o *)plVar26)->fields).CustomDamageEnabled;
            }
            if ((lVar13 != 0) &&
               (__this_00 = *(long **)(lVar13 + 0x10),
               (Characters_Horse_o *)__this_00 != (Characters_Horse_o *)0x0)) {
              fVar28 = *(float *)ppCVar17;
              animation = *(System_String_o **)(lVar13 + 0x18);
              UVar50 = UnityEngine_Transform__get_forward
                                 ((UnityEngine_Transform_o *)__this_00,(MethodInfo *)0x0);
              pOVar3 = (((Characters_Horse_o *)plVar26)->fields).OutlineComponent;
              if ((pOVar3 != (Outline_o *)0x0) &&
                 ((pUVar5 = pOVar3[2].fields.outlineMaskAndFillMaterial,
                  pUVar5 != (UnityEngine_Material_o *)0x0 &&
                  ((Characters_Horse_o *)animation != (Characters_Horse_o *)0x0)))) {
                fVar29 = *(float *)((long)&pUVar5[2].klass + 4);
                force.fields.z = UVar50.fields.z * fVar29;
                force.fields.x = UVar50.fields.x * fVar29;
                force.fields.y = UVar50.fields.y * fVar29;
                __this_00 = (long *)animation;
                UnityEngine_Rigidbody__AddForce
                          ((UnityEngine_Rigidbody_o *)animation,force,5,(MethodInfo *)0x0);
                lVar20 = *(long *)&(((Characters_Horse_o *)plVar26)->fields).Dead;
                if (lVar20 != 0) {
                  pUVar6 = *(UnityEngine_Rigidbody_o **)(lVar20 + 0x18);
                  __this_00 = (long *)(Characters_Horse_o *)0x0;
                  if (pUVar6 != (UnityEngine_Rigidbody_o *)0x0) {
                    UVar50 = UnityEngine_Rigidbody__get_velocity(pUVar6,(MethodInfo *)0x0);
                    if (g_data_057a6841 == '\0') {
                      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                      uVar33 = 0;
                      uVar34 = 0;
                      g_data_057a6841 = '\x01';
                    }
                    x = &TypeInfo_Math;
                    __this_00 = (long *)TypeInfo_Math;
                    if ((TypeInfo_Math->fields)._stepPhase == 0) {
                      il2cpp_runtime_helper_02337ed0();
                      uVar33 = 0;
                      uVar34 = 0;
                    }
                    fVar29 = UVar50.fields.z * UVar50.fields.z +
                             UVar50.fields.y * UVar50.fields.y + UVar50.fields.x * UVar50.fields.x;
                    if (0.0 <= fVar29) {
                      fVar29 = SQRT(fVar29);
                    }
                    else {
                      fVar29 = sqrtf(fVar29);
                    }
                    if (fVar29 < fVar28) goto joined_r0x042b81df;
                    lVar20 = *(long *)&(((Characters_Horse_o *)plVar26)->fields).Dead;
                    if ((lVar20 == 0) ||
                       (__this_00 = *(long **)(lVar20 + 0x18),
                       (Characters_Horse_o *)__this_00 == (Characters_Horse_o *)0x0)) goto label_042b8a35;
                    UnityEngine_Rigidbody__set_angularDrag
                              ((UnityEngine_Rigidbody_o *)__this_00,1.0,(MethodInfo *)0x0);
                    pOVar3 = (((Characters_Horse_o *)plVar26)->fields).OutlineComponent;
                    if ((pOVar3 == (Outline_o *)0x0) ||
                       (((pUVar5 = pOVar3[2].fields.outlineMaskAndFillMaterial,
                         pUVar5 == (UnityEngine_Material_o *)0x0 ||
                         (lVar20 = *(long *)&(((Characters_Horse_o *)plVar26)->fields).Dead, lVar20 == 0)) ||
                        (animation = *(System_String_o **)(lVar20 + 0x18),
                        (Characters_Horse_o *)animation == (Characters_Horse_o *)0x0)))) goto label_042b8a35;
                    fVar29 = *(float *)((long)&pUVar5[2].klass + 4);
                    UVar50 = UnityEngine_Rigidbody__get_velocity
                                       ((UnityEngine_Rigidbody_o *)animation,(MethodInfo *)0x0);
                    if (g_data_057a6841 == '\0') {
                      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                      uVar33 = 0;
                      uVar34 = 0;
                      g_data_057a6841 = '\x01';
                    }
                    __this_00 = (long *)TypeInfo_Math;
                    if ((TypeInfo_Math->fields)._stepPhase == 0) {
                      il2cpp_runtime_helper_02337ed0();
                      uVar33 = 0;
                      uVar34 = 0;
                    }
                    fVar30 = UVar50.fields.z * UVar50.fields.z +
                             UVar50.fields.y * UVar50.fields.y + UVar50.fields.x * UVar50.fields.x;
                    if (fVar30 < 0.0) {
                      fVar30 = sqrtf(fVar30);
                      uVar33 = extraout_XMM0_Dc_00;
                      uVar34 = extraout_XMM0_Dd_00;
                    }
                    else {
                      fVar30 = SQRT(fVar30);
                    }
                    if ((fVar28 != fVar29) || (NAN(fVar28) || NAN(fVar29))) {
                      lVar20 = *(long *)&(((Characters_Horse_o *)plVar26)->fields).Dead;
                      if (lVar20 != 0) {
                        pUVar6 = *(UnityEngine_Rigidbody_o **)(lVar20 + 0x18);
                        __this_00 = (long *)0x0;
                        if (pUVar6 != (UnityEngine_Rigidbody_o *)0x0) {
                          UVar50 = UnityEngine_Rigidbody__get_velocity(pUVar6,(MethodInfo *)0x0);
                          fVar29 = UVar50.fields.z;
                          auVar42._0_8_ = UVar50.fields._0_8_;
                          auVar42._8_4_ = extraout_XMM0_Dc_03;
                          auVar42._12_4_ = extraout_XMM0_Dd_03;
                          auVar43._8_4_ = extraout_XMM0_Dc_03;
                          auVar43._0_8_ = auVar42._0_8_;
                          auVar43._12_4_ = extraout_XMM0_Dd_03;
                          if (g_data_057a6845 == '\0') {
                            il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                            uVar33 = 0;
                            uVar34 = 0;
                            g_data_057a6845 = '\x01';
                            auVar42 = auVar43;
                          }
                          if ((TypeInfo_Math->fields)._stepPhase == 0) {
                            il2cpp_runtime_helper_02337ed0();
                            uVar33 = 0;
                            uVar34 = 0;
                            auVar42 = auVar43;
                          }
                          fVar28 = fVar28 - fVar30;
                          fVar30 = fVar29 * fVar29 +
                                   auVar42._4_4_ * auVar42._4_4_ + auVar42._0_4_ * auVar42._0_4_;
                          if (fVar30 < 0.0) {
                            fVar30 = sqrtf(fVar30);
                            uVar33 = extraout_XMM0_Dc_06;
                            uVar34 = extraout_XMM0_Dd_06;
                          }
                          else {
                            fVar30 = SQRT(fVar30);
                            auVar43 = auVar42;
                          }
                          if (fVar28 <= -1.0) {
                            fVar28 = -1.0;
                          }
                          if (fVar30 <= 1e-05) {
                            if (g_data_057a65d5 == '\0') {
                              il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
                              g_data_057a65d5 = '\x01';
                            }
                            uVar25 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
                            fVar29 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
                          }
                          else {
                            fVar29 = fVar29 / fVar30;
                            auVar10._4_4_ = fVar30;
                            auVar10._0_4_ = fVar30;
                            auVar10._8_4_ = uVar33;
                            auVar10._12_4_ = uVar34;
                            auVar39 = divps(auVar43,auVar10);
                            uVar25 = auVar39._0_8_;
                          }
                          fVar30 = fVar28 * (float)uVar25;
                          fVar31 = fVar28 * (float)((ulong)uVar25 >> 0x20);
                          fVar28 = fVar29 * fVar28;
                          goto label_042b869e;
                        }
                      }
                      goto label_042b8a35;
                    }
                    lVar20 = *(long *)&(((Characters_Horse_o *)plVar26)->fields).Dead;
                    if (lVar20 == 0) goto label_042b8a35;
                    pUVar6 = *(UnityEngine_Rigidbody_o **)(lVar20 + 0x18);
                    __this_00 = (long *)0x0;
                    if (pUVar6 == (UnityEngine_Rigidbody_o *)0x0) goto label_042b8a35;
                    UVar50 = UnityEngine_Rigidbody__get_velocity(pUVar6,(MethodInfo *)0x0);
                    fVar29 = UVar50.fields.z;
                    auVar36._0_8_ = UVar50.fields._0_8_;
                    auVar36._8_4_ = extraout_XMM0_Dc_01;
                    auVar36._12_4_ = extraout_XMM0_Dd_01;
                    auVar38._8_4_ = extraout_XMM0_Dc_01;
                    auVar38._0_8_ = auVar36._0_8_;
                    auVar38._12_4_ = extraout_XMM0_Dd_01;
                    if (g_data_057a6845 == '\0') {
                      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                      uVar33 = 0;
                      uVar34 = 0;
                      g_data_057a6845 = '\x01';
                      auVar36 = auVar38;
                    }
                    if ((TypeInfo_Math->fields)._stepPhase == 0) {
                      il2cpp_runtime_helper_02337ed0();
                      uVar33 = 0;
                      uVar34 = 0;
                      auVar36 = auVar38;
                    }
                    fVar31 = fVar29 * fVar29 + auVar36._4_4_ * auVar36._4_4_ + auVar36._0_4_ * auVar36._0_4_;
                    if (fVar31 < 0.0) {
                      fVar31 = sqrtf(fVar31);
                      uVar33 = extraout_XMM0_Dc_04;
                      uVar34 = extraout_XMM0_Dd_04;
                      if (1e-05 < fVar31) goto label_042b8430;
label_042b843d:
                      if (g_data_057a65d5 == '\0') {
                        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
                        g_data_057a65d5 = '\x01';
                      }
                      uVar25 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
                      fVar29 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
                    }
                    else {
                      fVar31 = SQRT(fVar31);
                      auVar38 = auVar36;
                      if (fVar31 <= 1e-05) goto label_042b843d;
label_042b8430:
                      fVar29 = fVar29 / fVar31;
                      auVar9._4_4_ = fVar31;
                      auVar9._0_4_ = fVar31;
                      auVar9._8_4_ = uVar33;
                      auVar9._12_4_ = uVar34;
                      auVar39 = divps(auVar38,auVar9);
                      uVar25 = auVar39._0_8_;
                    }
                    fVar28 = fVar28 - fVar30;
                    fVar30 = fVar28 * (float)uVar25;
                    fVar31 = fVar28 * (float)((ulong)uVar25 >> 0x20);
                    fVar28 = fVar28 * fVar29;
label_042b869e:
                    iVar16 = 2;
label_042b86a3:
                    x = &TypeInfo_Math;
                    force_00.fields.y = fVar31;
                    force_00.fields.x = fVar30;
                    force_00.fields.z = fVar28;
                    __this_00 = (long *)animation;
                    UnityEngine_Rigidbody__AddForce
                              ((UnityEngine_Rigidbody_o *)animation,force_00,iVar16,(MethodInfo *)0x0);
                    goto joined_r0x042b81df;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
label_042b8a35:
  il2cpp_runtime_helper_022b2c90();
  pCStack_130 = (Characters_Horse_o *)x;
  if (g_data_057addce == '\0') {
    ppCStack_158 = (Characters_Horse_o **)0x42b8a64;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HorseAnimations);
    ppCStack_158 = (Characters_Horse_o **)0x42b8a70;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HorseSounds);
    ppCStack_158 = (Characters_Horse_o **)0x42b8a7c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    ppCStack_158 = (Characters_Horse_o **)0x42b8a88;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    ppCStack_158 = (Characters_Horse_o **)0x42b8a94;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    ppCStack_158 = (Characters_Horse_o **)0x42b8aa0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    g_data_057addce = '\x01';
  }
  ppCStack_158 = (Characters_Horse_o **)0x42b8abb;
  (*(((Characters_Horse_o *)__this_00)->klass->vtable)._104_LateUpdateFootstep.methodPtr)
            (__this_00,(((Characters_Horse_o *)__this_00)->klass->vtable)._104_LateUpdateFootstep.method);
  pCVar24 = (Characters_Horse_o *)(((Characters_Horse_o *)__this_00)->klass->vtable)._105_LateUpdateFPS.method
  ;
  ppCStack_158 = (Characters_Horse_o **)0x42b8acf;
  __this_01.fields.m_ParticleSystem =
       (UnityEngine_ParticleSystem_EmissionModule_Fields)
       (UnityEngine_ParticleSystem_EmissionModule_Fields)__this_00;
  (*(((Characters_Horse_o *)__this_00)->klass->vtable)._105_LateUpdateFPS.methodPtr)();
  lVar20 = *(long *)&(((Characters_Horse_o *)__this_00)->fields).Dead;
  if ((lVar20 == 0) || (lVar20 = *(long *)(lVar20 + 0x20), lVar20 == 0)) goto label_042b9203;
  if (*(char *)(lVar20 + 0x68) != '\0') {
    x = (Characters_Horse_o **)(((Characters_Horse_o *)__this_00)->fields).OutlineComponent;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      ppCStack_158 = (Characters_Horse_o **)0x42b8b14;
      il2cpp_runtime_helper_02337ed0();
    }
    pCVar24 = (Characters_Horse_o *)0x0;
    ppCStack_158 = (Characters_Horse_o **)0x42b8b20;
    __this_01.fields.m_ParticleSystem =
         (UnityEngine_ParticleSystem_EmissionModule_Fields)(UnityEngine_ParticleSystem_EmissionModule_Fields)x
    ;
    bVar15 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar15 != '\0') {
      return;
    }
    pOVar3 = (((Characters_Horse_o *)__this_00)->fields).OutlineComponent;
    if (pOVar3 == (Outline_o *)0x0) goto label_042b9203;
    if (*(char *)&(pOVar3->fields)._namesToIgnore != '\0') {
      return;
    }
    lVar20 = *(long *)&(((Characters_Horse_o *)__this_00)->fields).Dead;
    if (lVar20 == 0) goto label_042b9203;
    pUVar6 = *(UnityEngine_Rigidbody_o **)(lVar20 + 0x18);
    __this_01.fields.m_ParticleSystem =
         (UnityEngine_ParticleSystem_EmissionModule_Fields)
         (UnityEngine_ParticleSystem_EmissionModule_Fields)(Characters_Horse_o *)0x0;
    if (pUVar6 == (UnityEngine_Rigidbody_o *)0x0) goto label_042b9203;
    uVar2 = *(uint *)&pOVar3[3].monitor;
    unaff_RBP = (Characters_Horse_o **)(ulong)uVar2;
    pCVar24 = (Characters_Horse_o *)0x0;
    ppCStack_158 = (Characters_Horse_o **)0x42b8b6b;
    UVar50 = UnityEngine_Rigidbody__get_velocity(pUVar6,(MethodInfo *)0x0);
    fVar28 = UVar50.fields.x;
    fVar29 = UVar50.fields.y;
    uVar33 = extraout_XMM0_Dc_07;
    uVar34 = extraout_XMM0_Dd_07;
    fVar30 = UVar50.fields.z;
    if (g_data_057a6841 == '\0') {
      uStack_138 = extraout_XMM0_Dc_07;
      auStack_140 = (undefined1  [8])UVar50.fields._0_8_;
      uStack_134 = extraout_XMM0_Dd_07;
      ppCStack_158 = (Characters_Horse_o **)0x42b8b8b;
      fStack_14c = UVar50.fields.z;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a6841 = '\x01';
      fVar28 = (float)auStack_140._0_4_;
      fVar29 = (float)auStack_140._4_4_;
      uVar33 = uStack_138;
      uVar34 = uStack_134;
      fVar30 = fStack_14c;
    }
    x = &TypeInfo_Math;
    __this_01.fields.m_ParticleSystem =
         (UnityEngine_ParticleSystem_EmissionModule_Fields)
         (UnityEngine_ParticleSystem_EmissionModule_Fields)TypeInfo_Math;
    if ((TypeInfo_Math->fields)._stepPhase == 0) {
      auStack_140._4_4_ = fVar29;
      auStack_140._0_4_ = fVar28;
      uStack_138 = uVar33;
      uStack_134 = uVar34;
      ppCStack_158 = (Characters_Horse_o **)0x42b8bc0;
      fStack_14c = fVar30;
      il2cpp_runtime_helper_02337ed0();
      fVar28 = (float)auStack_140._0_4_;
      fVar29 = (float)auStack_140._4_4_;
      fVar30 = fStack_14c;
    }
    fVar28 = fVar30 * fVar30 + fVar29 * fVar29 + fVar28 * fVar28;
    if (fVar28 < 0.0) {
      ppCStack_158 = (Characters_Horse_o **)0x42b8d4d;
      fVar28 = sqrtf(fVar28);
      if (8.0 < fVar28) goto label_042b8d5a;
label_042b8c01:
      lVar20 = *(long *)&(((Characters_Horse_o *)__this_00)->fields).Dead;
      if (lVar20 == 0) goto label_042b9203;
      pUVar6 = *(UnityEngine_Rigidbody_o **)(lVar20 + 0x18);
      __this_01.fields.m_ParticleSystem =
           (UnityEngine_ParticleSystem_EmissionModule_Fields)
           (UnityEngine_ParticleSystem_EmissionModule_Fields)(Characters_Horse_o *)0x0;
      if (pUVar6 == (UnityEngine_Rigidbody_o *)0x0) goto label_042b9203;
      pCVar24 = (Characters_Horse_o *)0x0;
      ppCStack_158 = (Characters_Horse_o **)0x42b8c23;
      UVar50 = UnityEngine_Rigidbody__get_velocity(pUVar6,(MethodInfo *)0x0);
      fVar28 = UVar50.fields.x;
      fVar29 = UVar50.fields.y;
      uVar33 = extraout_XMM0_Dc_08;
      uVar34 = extraout_XMM0_Dd_08;
      fVar30 = UVar50.fields.z;
      if (g_data_057a6841 == '\0') {
        uStack_138 = extraout_XMM0_Dc_08;
        auStack_140 = (undefined1  [8])UVar50.fields._0_8_;
        uStack_134 = extraout_XMM0_Dd_08;
        ppCStack_158 = (Characters_Horse_o **)0x42b8c43;
        fStack_14c = UVar50.fields.z;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
        g_data_057a6841 = '\x01';
        fVar28 = (float)auStack_140._0_4_;
        fVar29 = (float)auStack_140._4_4_;
        uVar33 = uStack_138;
        uVar34 = uStack_134;
        fVar30 = fStack_14c;
      }
      if ((TypeInfo_Math->fields)._stepPhase == 0) {
        auStack_140._4_4_ = fVar29;
        auStack_140._0_4_ = fVar28;
        uStack_138 = uVar33;
        uStack_134 = uVar34;
        ppCStack_158 = (Characters_Horse_o **)0x42b8c71;
        fStack_14c = fVar30;
        il2cpp_runtime_helper_02337ed0();
        fVar28 = (float)auStack_140._0_4_;
        fVar29 = (float)auStack_140._4_4_;
        fVar30 = fStack_14c;
      }
      fVar28 = fVar30 * fVar30 + fVar29 * fVar29 + fVar28 * fVar28;
      if (0.0 <= fVar28) {
        fVar28 = SQRT(fVar28);
      }
      else {
        ppCStack_158 = (Characters_Horse_o **)0x42b8e4d;
        fVar28 = sqrtf(fVar28);
      }
      if (fVar28 <= 1.0) {
        ppCStack_158 = (Characters_Horse_o **)0x42b8cba;
        __this_01.fields.m_ParticleSystem =
             (UnityEngine_ParticleSystem_EmissionModule_Fields)
             (UnityEngine_ParticleSystem_EmissionModule_Fields)__this_00;
        Characters_Horse__UpdateIdle((Characters_Horse_o *)__this_00,(MethodInfo *)pCVar24);
        animation = (System_String_o *)(((Characters_Horse_o *)__this_00)->fields).OutlineComponent;
        if ((Characters_Horse_o *)animation == (Characters_Horse_o *)0x0) goto label_042b9203;
        if ((uVar2 == 0) && ((((Characters_Horse_o *)animation)->fields).State == 1)) {
          x = &TypeInfo_HumanAnimations;
          if ((TypeInfo_HumanAnimations->fields)._stepPhase == 0) {
            ppCStack_158 = (Characters_Horse_o **)0x42b8cf9;
            il2cpp_runtime_helper_02337ed0();
          }
          lVar20 = *(long *)&(((Characters_Horse_o *)animation)->fields)._cameraFPS;
          __this_01.fields.m_ParticleSystem =
               (UnityEngine_ParticleSystem_EmissionModule_Fields)
               (UnityEngine_ParticleSystem_EmissionModule_Fields)TypeInfo_HumanAnimations;
          if (lVar20 == 0) goto label_042b9203;
          pCVar23 = (Characters_Horse_o *)(((TypeInfo_HumanAnimations->fields).MovementSync)->fields).m_CachedPtr;
          if (*(char *)(lVar20 + 0x3c) == '\0') {
            ppCStack_158 = (Characters_Horse_o **)0x42b91e0;
            pCVar24 = pCVar23;
            bVar15 = System_String__op_Equality
                               (*(System_String_o **)(lVar20 + 0x30),(System_String_o *)pCVar23,
                                (MethodInfo *)0x0);
            cVar14 = (char)bVar15;
            pMVar21 = extraout_RDX_06;
          }
          else {
            __this_01.fields.m_ParticleSystem =
                 (UnityEngine_ParticleSystem_EmissionModule_Fields)
                 (UnityEngine_ParticleSystem_EmissionModule_Fields)(Characters_Horse_o *)0x0;
            if (*(UnityEngine_Animation_o **)(lVar20 + 0x10) == (UnityEngine_Animation_o *)0x0)
            goto label_042b9203;
            ppCStack_158 = (Characters_Horse_o **)0x42b8d38;
            pCVar24 = pCVar23;
            bVar15 = UnityEngine_Animation__IsPlaying
                               (*(UnityEngine_Animation_o **)(lVar20 + 0x10),(System_String_o *)pCVar23,
                                (MethodInfo *)0x0);
            cVar14 = (char)bVar15;
            pMVar21 = extraout_RDX;
          }
          if (cVar14 == '\0') {
            ppCStack_158 = (Characters_Horse_o **)0x42b91fe;
            Characters_BaseCharacter__CrossFade
                      ((Characters_BaseCharacter_o *)animation,(System_String_o *)pCVar23,0.1,0.0,pMVar21);
            pCVar24 = pCVar23;
          }
        }
        goto label_042b8f68;
      }
      x = &TypeInfo_HorseAnimations;
      if ((TypeInfo_HorseAnimations->fields)._stepPhase == 0) {
        ppCStack_158 = (Characters_Horse_o **)0x42b8e72;
        il2cpp_runtime_helper_02337ed0();
      }
      lVar20 = *(long *)&(((Characters_Horse_o *)__this_00)->fields)._cameraFPS;
      __this_01.fields.m_ParticleSystem =
           (UnityEngine_ParticleSystem_EmissionModule_Fields)
           (UnityEngine_ParticleSystem_EmissionModule_Fields)TypeInfo_HorseAnimations;
      if (lVar20 == 0) goto label_042b9203;
      animation = *(System_String_o **)
                   &(((TypeInfo_HorseAnimations->fields).MovementSync)->fields)._correctPosition.fields.y;
      if (*(char *)(lVar20 + 0x3c) == '\0') {
        __this_01.fields.m_ParticleSystem =
             *(UnityEngine_ParticleSystem_EmissionModule_Fields *)(lVar20 + 0x30);
        ppCStack_158 = (Characters_Horse_o **)0x42b91c5;
        pCVar24 = (Characters_Horse_o *)animation;
        bVar15 = System_String__op_Equality
                           ((System_String_o *)__this_01.fields.m_ParticleSystem,animation,(MethodInfo *)0x0);
        cVar14 = (char)bVar15;
        pMVar21 = extraout_RDX_05;
      }
      else {
        __this_01.fields.m_ParticleSystem =
             *(UnityEngine_ParticleSystem_EmissionModule_Fields *)(lVar20 + 0x10);
        if (__this_01.fields.m_ParticleSystem == (UnityEngine_ParticleSystem_o *)0x0) goto label_042b9203;
        ppCStack_158 = (Characters_Horse_o **)0x42b8eb2;
        pCVar24 = (Characters_Horse_o *)animation;
        bVar15 = UnityEngine_Animation__IsPlaying
                           ((UnityEngine_Animation_o *)__this_01.fields.m_ParticleSystem,animation,
                            (MethodInfo *)0x0);
        cVar14 = (char)bVar15;
        pMVar21 = extraout_RDX_01;
      }
      if (cVar14 == '\0') {
        ppCStack_158 = (Characters_Horse_o **)0x42b8ecc;
        __this_01.fields.m_ParticleSystem =
             (UnityEngine_ParticleSystem_EmissionModule_Fields)
             (UnityEngine_ParticleSystem_EmissionModule_Fields)__this_00;
        Characters_BaseCharacter__CrossFade((Characters_BaseCharacter_o *)__this_00,animation,0.1,0.0,pMVar21)
        ;
        pCVar24 = (Characters_Horse_o *)animation;
      }
      animation = (System_String_o *)(((Characters_Horse_o *)__this_00)->fields).OutlineComponent;
      if ((Characters_Horse_o *)animation == (Characters_Horse_o *)0x0) goto label_042b9203;
      if ((uVar2 == 0) && ((((Characters_Horse_o *)animation)->fields).State == 1)) {
        x = &TypeInfo_HumanAnimations;
        if ((TypeInfo_HumanAnimations->fields)._stepPhase == 0) {
          ppCStack_158 = (Characters_Horse_o **)0x42b8f03;
          il2cpp_runtime_helper_02337ed0();
        }
        lVar20 = *(long *)&(((Characters_Horse_o *)animation)->fields)._cameraFPS;
        __this_01.fields.m_ParticleSystem =
             (UnityEngine_ParticleSystem_EmissionModule_Fields)
             (UnityEngine_ParticleSystem_EmissionModule_Fields)TypeInfo_HumanAnimations;
        if (lVar20 == 0) goto label_042b9203;
        pCVar23 = (Characters_Horse_o *)(((TypeInfo_HumanAnimations->fields).MovementSync)->fields).m_CachedPtr;
        if (*(char *)(lVar20 + 0x3c) == '\0') goto label_042b919c;
        __this_02 = *(UnityEngine_Animation_o **)(lVar20 + 0x10);
        __this_01.fields.m_ParticleSystem =
             (UnityEngine_ParticleSystem_EmissionModule_Fields)
             (UnityEngine_ParticleSystem_EmissionModule_Fields)(Characters_Horse_o *)0x0;
        if (__this_02 == (UnityEngine_Animation_o *)0x0) goto label_042b9203;
label_042b8f38:
        ppCStack_158 = (Characters_Horse_o **)0x42b8f42;
        pCVar24 = pCVar23;
        bVar15 = UnityEngine_Animation__IsPlaying(__this_02,(System_String_o *)pCVar23,(MethodInfo *)0x0);
        cVar14 = (char)bVar15;
        pMVar21 = extraout_RDX_02;
        goto joined_r0x042b8f44;
      }
    }
    else {
      if (SQRT(fVar28) <= 8.0) goto label_042b8c01;
label_042b8d5a:
      x = &TypeInfo_HorseAnimations;
      if ((TypeInfo_HorseAnimations->fields)._stepPhase == 0) {
        ppCStack_158 = (Characters_Horse_o **)0x42b8d72;
        il2cpp_runtime_helper_02337ed0();
      }
      lVar20 = *(long *)&(((Characters_Horse_o *)__this_00)->fields)._cameraFPS;
      __this_01.fields.m_ParticleSystem =
           (UnityEngine_ParticleSystem_EmissionModule_Fields)
           (UnityEngine_ParticleSystem_EmissionModule_Fields)TypeInfo_HorseAnimations;
      if (lVar20 == 0) goto label_042b9203;
      animation = *(System_String_o **)&(((TypeInfo_HorseAnimations->fields).MovementSync)->fields).Disabled;
      if (*(char *)(lVar20 + 0x3c) == '\0') {
        __this_01.fields.m_ParticleSystem =
             *(UnityEngine_ParticleSystem_EmissionModule_Fields *)(lVar20 + 0x30);
        ppCStack_158 = (Characters_Horse_o **)0x42b918f;
        pCVar24 = (Characters_Horse_o *)animation;
        bVar15 = System_String__op_Equality
                           ((System_String_o *)__this_01.fields.m_ParticleSystem,animation,(MethodInfo *)0x0);
        cVar14 = (char)bVar15;
        pMVar21 = extraout_RDX_03;
      }
      else {
        __this_01.fields.m_ParticleSystem =
             *(UnityEngine_ParticleSystem_EmissionModule_Fields *)(lVar20 + 0x10);
        if (__this_01.fields.m_ParticleSystem == (UnityEngine_ParticleSystem_o *)0x0) goto label_042b9203;
        ppCStack_158 = (Characters_Horse_o **)0x42b8db2;
        pCVar24 = (Characters_Horse_o *)animation;
        bVar15 = UnityEngine_Animation__IsPlaying
                           ((UnityEngine_Animation_o *)__this_01.fields.m_ParticleSystem,animation,
                            (MethodInfo *)0x0);
        cVar14 = (char)bVar15;
        pMVar21 = extraout_RDX_00;
      }
      if (cVar14 == '\0') {
        ppCStack_158 = (Characters_Horse_o **)0x42b8dcc;
        __this_01.fields.m_ParticleSystem =
             (UnityEngine_ParticleSystem_EmissionModule_Fields)
             (UnityEngine_ParticleSystem_EmissionModule_Fields)__this_00;
        Characters_BaseCharacter__CrossFade((Characters_BaseCharacter_o *)__this_00,animation,0.1,0.0,pMVar21)
        ;
        pCVar24 = (Characters_Horse_o *)animation;
      }
      animation = (System_String_o *)(((Characters_Horse_o *)__this_00)->fields).OutlineComponent;
      if ((Characters_Horse_o *)animation == (Characters_Horse_o *)0x0) goto label_042b9203;
      if ((uVar2 == 0) && ((((Characters_Horse_o *)animation)->fields).State == 1)) {
        x = &TypeInfo_HumanAnimations;
        if ((TypeInfo_HumanAnimations->fields)._stepPhase == 0) {
          ppCStack_158 = (Characters_Horse_o **)0x42b8e0b;
          il2cpp_runtime_helper_02337ed0();
        }
        lVar20 = *(long *)&(((Characters_Horse_o *)animation)->fields)._cameraFPS;
        __this_01.fields.m_ParticleSystem =
             (UnityEngine_ParticleSystem_EmissionModule_Fields)
             (UnityEngine_ParticleSystem_EmissionModule_Fields)TypeInfo_HumanAnimations;
        if (lVar20 == 0) goto label_042b9203;
        pCVar23 = (Characters_Horse_o *)
                  (((TypeInfo_HumanAnimations->fields).MovementSync)->fields).m_CancellationTokenSource;
        if (*(char *)(lVar20 + 0x3c) != '\0') {
          __this_02 = *(UnityEngine_Animation_o **)(lVar20 + 0x10);
          if (__this_02 == (UnityEngine_Animation_o *)0x0) {
            __this_01.fields.m_ParticleSystem =
                 (UnityEngine_ParticleSystem_EmissionModule_Fields)(UnityEngine_ParticleSystem_o *)0x0;
            goto label_042b9203;
          }
          goto label_042b8f38;
        }
label_042b919c:
        ppCStack_158 = (Characters_Horse_o **)0x42b91aa;
        pCVar24 = pCVar23;
        bVar15 = System_String__op_Equality
                           (*(System_String_o **)(lVar20 + 0x30),(System_String_o *)pCVar23,(MethodInfo *)0x0)
        ;
        cVar14 = (char)bVar15;
        pMVar21 = extraout_RDX_04;
joined_r0x042b8f44:
        if (cVar14 == '\0') {
          ppCStack_158 = (Characters_Horse_o **)0x42b8f5c;
          Characters_BaseCharacter__CrossFade
                    ((Characters_BaseCharacter_o *)animation,(System_String_o *)pCVar23,0.1,0.0,pMVar21);
          pCVar24 = pCVar23;
        }
      }
    }
    (((Characters_Horse_o *)__this_00)->fields).FollowingEnabled = 0;
  }
label_042b8f68:
  x = *(Characters_Horse_o ***)&(((Characters_Horse_o *)__this_00)->fields)._cameraFPS;
  unaff_RBP = &TypeInfo_HorseAnimations;
  if ((TypeInfo_HorseAnimations->fields)._stepPhase == 0) {
    ppCStack_158 = (Characters_Horse_o **)0x42b8f89;
    il2cpp_runtime_helper_02337ed0();
  }
  __this_01.fields.m_ParticleSystem =
       (UnityEngine_ParticleSystem_EmissionModule_Fields)
       (UnityEngine_ParticleSystem_EmissionModule_Fields)TypeInfo_HorseAnimations;
  if ((Characters_Horse_o *)x != (Characters_Horse_o *)0x0) {
    pCVar24 = *(Characters_Horse_o **)&(((TypeInfo_HorseAnimations->fields).MovementSync)->fields).Disabled;
    if ((((Characters_Horse_o *)x)->fields).field_0x2c == '\0') {
      __this_01.fields.m_ParticleSystem =
           *(UnityEngine_ParticleSystem_EmissionModule_Fields *)
            &(((Characters_Horse_o *)x)->fields).MaxFootstepDistance;
      ppCStack_158 = (Characters_Horse_o **)0x42b90ab;
      bVar15 = System_String__op_Equality
                         ((System_String_o *)__this_01.fields.m_ParticleSystem,(System_String_o *)pCVar24,
                          (MethodInfo *)0x0);
      cVar14 = (char)bVar15;
    }
    else {
      __this_01.fields.m_ParticleSystem =
           (UnityEngine_ParticleSystem_EmissionModule_Fields)(((Characters_Horse_o *)x)->fields).m_CachedPtr;
      if (__this_01.fields.m_ParticleSystem == (UnityEngine_ParticleSystem_o *)0x0) goto label_042b9203;
      ppCStack_158 = (Characters_Horse_o **)0x42b8fbf;
      bVar15 = UnityEngine_Animation__IsPlaying
                         ((UnityEngine_Animation_o *)__this_01.fields.m_ParticleSystem,
                          (System_String_o *)pCVar24,(MethodInfo *)0x0);
      cVar14 = (char)bVar15;
    }
    if ((cVar14 == '\0') ||
       (*(char *)((long)&(((Characters_Horse_o *)__this_00)->fields).Animation + 4) == '\0')) {
      UStack_148.m_ParticleSystem = (UnityEngine_ParticleSystem_o *)0x0;
      pSVar7 = (((Characters_Horse_o *)__this_00)->fields).OnPlayerPropertiesChanged;
      if (pSVar7 != (System_Action_Hashtable__o *)0x0) {
        pUVar8 = (UnityEngine_ParticleSystem_o *)(pSVar7->fields).extra_arg;
        __this_01.fields.m_ParticleSystem =
             (UnityEngine_ParticleSystem_EmissionModule_Fields)
             (UnityEngine_ParticleSystem_EmissionModule_Fields)(Characters_Horse_o *)0x0;
        if (pUVar8 != (UnityEngine_ParticleSystem_o *)0x0) {
          ppCStack_158 = (Characters_Horse_o **)0x42b90e1;
          UStack_148.m_ParticleSystem =
               (UnityEngine_ParticleSystem_o *)
               UnityEngine_ParticleSystem__get_emission(pUVar8,(MethodInfo *)0x0);
          __this_01.fields.m_ParticleSystem = (UnityEngine_ParticleSystem_EmissionModule_Fields)&UStack_148;
          pCVar24 = (Characters_Horse_o *)0x0;
          ppCStack_158 = (Characters_Horse_o **)0x42b90f2;
          bVar15 = UnityEngine_ParticleSystem_EmissionModule__get_enabled(__this_01,(MethodInfo *)0x0);
          if ((char)bVar15 != '\0') {
            __this_01.fields.m_ParticleSystem = (UnityEngine_ParticleSystem_EmissionModule_Fields)&UStack_148;
            pCVar24 = (Characters_Horse_o *)0x0;
            ppCStack_158 = (Characters_Horse_o **)0x42b9104;
            UnityEngine_ParticleSystem_EmissionModule__set_enabled(__this_01,0,(MethodInfo *)0x0);
          }
          lVar20 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
          if ((lVar20 != 0) && (lVar20 = *(long *)(lVar20 + 0x78), lVar20 != 0)) {
            if (*(char *)(lVar20 + 0x11) == '\0') {
              return;
            }
            if (*(int *)(TypeInfo_HorseSounds + 0xe4) == 0) {
              ppCStack_158 = (Characters_Horse_o **)0x42b9150;
              il2cpp_runtime_helper_02337ed0();
            }
            uVar25 = *(undefined8 *)(*(long *)(TypeInfo_HorseSounds + 0xb8) + 0x18);
            pCVar19 = ((Characters_Horse_o *)__this_00)->klass;
            pMVar21 = (pCVar19->vtable)._100_ToggleSoundLocal.method;
            uVar22 = 0;
            goto label_042b916e;
          }
        }
      }
    }
    else {
      UStack_148.m_ParticleSystem = (UnityEngine_ParticleSystem_o *)0x0;
      pSVar7 = (((Characters_Horse_o *)__this_00)->fields).OnPlayerPropertiesChanged;
      if (pSVar7 != (System_Action_Hashtable__o *)0x0) {
        pUVar8 = (UnityEngine_ParticleSystem_o *)(pSVar7->fields).extra_arg;
        __this_01.fields.m_ParticleSystem =
             (UnityEngine_ParticleSystem_EmissionModule_Fields)
             (UnityEngine_ParticleSystem_EmissionModule_Fields)(Characters_Horse_o *)0x0;
        if (pUVar8 != (UnityEngine_ParticleSystem_o *)0x0) {
          ppCStack_158 = (Characters_Horse_o **)0x42b9004;
          UStack_148.m_ParticleSystem =
               (UnityEngine_ParticleSystem_o *)
               UnityEngine_ParticleSystem__get_emission(pUVar8,(MethodInfo *)0x0);
          __this_01.fields.m_ParticleSystem = (UnityEngine_ParticleSystem_EmissionModule_Fields)&UStack_148;
          pCVar24 = (Characters_Horse_o *)0x0;
          ppCStack_158 = (Characters_Horse_o **)0x42b9015;
          bVar15 = UnityEngine_ParticleSystem_EmissionModule__get_enabled(__this_01,(MethodInfo *)0x0);
          if ((char)bVar15 == '\0') {
            __this_01.fields.m_ParticleSystem = (UnityEngine_ParticleSystem_EmissionModule_Fields)&UStack_148;
            pCVar24 = (Characters_Horse_o *)0x1;
            ppCStack_158 = (Characters_Horse_o **)0x42b902a;
            UnityEngine_ParticleSystem_EmissionModule__set_enabled(__this_01,1,(MethodInfo *)0x0);
          }
          lVar20 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
          if ((lVar20 != 0) && (lVar20 = *(long *)(lVar20 + 0x78), lVar20 != 0)) {
            if (*(char *)(lVar20 + 0x11) == '\0') {
              return;
            }
            if (*(int *)(TypeInfo_HorseSounds + 0xe4) == 0) {
              ppCStack_158 = (Characters_Horse_o **)0x42b907a;
              il2cpp_runtime_helper_02337ed0();
            }
            uVar25 = *(undefined8 *)(*(long *)(TypeInfo_HorseSounds + 0xb8) + 0x18);
            pCVar19 = ((Characters_Horse_o *)__this_00)->klass;
            pMVar21 = (pCVar19->vtable)._100_ToggleSoundLocal.method;
            uVar22 = 1;
label_042b916e:
            ppCStack_158 = (Characters_Horse_o **)0x42b9174;
            (*(pCVar19->vtable)._100_ToggleSoundLocal.methodPtr)(__this_00,uVar25,uVar22,pMVar21);
            return;
          }
        }
      }
    }
  }
label_042b9203:
  ppCStack_158 = (Characters_Horse_o **)0x42b9208;
  il2cpp_runtime_helper_022b2c90();
  plVar26 = (long *)__this_01.fields.m_ParticleSystem;
  pCStack_168 = (Characters_Horse_o *)x;
  pCStack_160 = (Characters_Horse_o *)animation;
  ppCStack_158 = unaff_RBP;
  if (g_data_057addcf == '\0') {
    plVar26 = &TypeInfo_Physics;
    il2cpp_runtime_helper_023445d0();
    g_data_057addcf = '\x01';
  }
  UStack_198.fields.m_UV.fields.x = 0.0;
  UStack_198.fields.m_UV.fields.y = 0.0;
  UStack_198.fields.m_Collider = 0;
  UStack_198.fields.m_Normal.fields.y = 0.0;
  UStack_198.fields.m_Normal.fields.z = 0.0;
  UStack_198.fields.m_FaceID = 0;
  UStack_198.fields.m_Distance = 0.0;
  UStack_198.fields.m_Point.fields.x = 0.0;
  UStack_198.fields.m_Point.fields.y = 0.0;
  UStack_198.fields.m_Point.fields.z = 0.0;
  UStack_198.fields.m_Normal.fields.x = 0.0;
  auStack_1d0[0] = 0;
  *(undefined1 *)((long)&(((Characters_Horse_o *)__this_01.fields.m_ParticleSystem)->fields).Animation + 5) =
       0;
  lVar20 = *(long *)&(((Characters_Horse_o *)__this_01.fields.m_ParticleSystem)->fields).Dead;
  if (lVar20 != 0) {
    pUVar18 = *(UnityEngine_Transform_o **)(lVar20 + 0x10);
    plVar26 = (long *)0x0;
    if (pUVar18 != (UnityEngine_Transform_o *)0x0) {
      UVar50 = UnityEngine_Transform__get_position(pUVar18,(MethodInfo *)0x0);
      auStack_1c8._0_4_ = UVar50.fields.x;
      auStack_1c8._4_4_ = UVar50.fields.y;
      fStack_1c0 = extraout_XMM0_Dc_09;
      fStack_1bc = extraout_XMM0_Dd_09;
      if (g_data_057a6844 == '\0') {
        auStack_1c8 = (undefined1  [8])UVar50.fields._0_8_;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a6844 = '\x01';
      }
      lVar20 = *(long *)(TypeInfo_Vector3 + 0xb8);
      fStack_1b8 = (float)*(undefined8 *)(lVar20 + 0x18) * 0.8;
      fVar28 = (float)((ulong)*(undefined8 *)(lVar20 + 0x18) >> 0x20) * 0.8;
      uStack_1a8._0_4_ = *(float *)(lVar20 + 0x20) * 0.8;
      fVar29 = 0.0;
      fVar30 = 0.0;
      if (g_data_057ac31b == '\0') {
        fStack_1b4 = fVar28;
        fStack_1b0 = 0.0;
        fStack_1ac = 0.0;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057ac31b = '\x01';
        lVar20 = *(long *)(TypeInfo_Vector3 + 0xb8);
        fVar28 = fStack_1b4;
        fVar29 = fStack_1b0;
        fVar30 = fStack_1ac;
      }
      auStack_1c8._4_4_ = (float)auStack_1c8._4_4_ + fVar28;
      auStack_1c8._0_4_ = (float)auStack_1c8._0_4_ + fStack_1b8;
      fStack_1c0 = fStack_1c0 + fVar29;
      fStack_1bc = fStack_1bc + fVar30;
      origin.fields.z = UVar50.fields.z + (float)uStack_1a8;
      uStack_1a8 = *(undefined8 *)(lVar20 + 0x24);
      uStack_1a0 = 0;
      fStack_1b8 = *(float *)(lVar20 + 0x2c);
      auStack_1d0[0] =
           (*(((Characters_BaseCharacter_c *)((Characters_Horse_o *)__this_01.fields.m_ParticleSystem)->klass)
             ->vtable)._60_get_GroundMask.methodPtr)(__this_01.fields.m_ParticleSystem);
      iVar16 = UnityEngine_LayerMask__get_value
                         ((UnityEngine_LayerMask_Fields)(int32_t)auStack_1d0,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      auVar39 = _auStack_1c8;
      uVar27 = 0;
      origin.fields.x = (float)auStack_1c8._0_4_;
      origin.fields.y = (float)auStack_1c8._4_4_;
      direction.fields.z = fStack_1b8;
      direction.fields.x = (float)uStack_1a8;
      direction.fields.y = (float)uStack_1a8._4_4_;
      _auStack_1c8 = auVar39;
      bVar15 = UnityEngine_Physics__SphereCast_4e78cf0
                         (origin,0.6,direction,&UStack_198,0.8,iVar16,(MethodInfo *)0x0);
      if ((char)bVar15 != '\0') {
        if (*(char *)((long)&(((Characters_Horse_o *)__this_01.fields.m_ParticleSystem)->fields).Animation + 4
                     ) != '\0') {
          return;
        }
        *(undefined1 *)
         ((long)&(((Characters_Horse_o *)__this_01.fields.m_ParticleSystem)->fields).Animation + 5) = 1;
        uVar27 = 1;
      }
      *(undefined1 *)
       ((long)&(((Characters_Horse_o *)__this_01.fields.m_ParticleSystem)->fields).Animation + 4) = uVar27;
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  *(undefined1 *)((long)&(((Characters_Horse_o *)plVar26)->fields).crossfadeCache + 4) = 1;
  (((Characters_Horse_o *)plVar26)->fields)._owner = (Characters_Human_o *)0x41a0000041700000;
  (((Characters_Horse_o *)plVar26)->fields).HorseCache =
       (Characters_HorseComponentCache_o *)0x41f0000041200000;
  (((Characters_Horse_o *)plVar26)->fields).State = 0x42340000;
  Characters_BaseCharacter___ctor((Characters_BaseCharacter_o *)plVar26,(MethodInfo *)pCVar24);
  return;
}


// Characters.Horse$$Update
// il2cpp: void Characters_Horse__Update (Characters_Horse_o* __this, const MethodInfo* method);
// 0x42b7630

void Characters_Horse__Update(Characters_Horse_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  Outline_o *pOVar3;
  Outline_c *pOVar4;
  UnityEngine_Material_o *pUVar5;
  UnityEngine_Rigidbody_o *pUVar6;
  System_Action_Hashtable__o *pSVar7;
  UnityEngine_ParticleSystem_o *pUVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  UnityEngine_Vector3_Fields fromDirection;
  long lVar12;
  long lVar13;
  char cVar14;
  bool_conflict bVar15;
  int32_t iVar16;
  UnityEngine_GameObject_o *targetGo;
  Characters_Human_o **ppCVar17;
  UnityEngine_Transform_o *pUVar18;
  Characters_Horse_c *pCVar19;
  long lVar20;
  MethodInfo *pMVar21;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  undefined8 uVar22;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  MethodInfo *extraout_RDX_06;
  Characters_Horse_o **unaff_RBX;
  Characters_Horse_o **unaff_RBP;
  Characters_Horse_o *pCVar23;
  Characters_Horse_o *method_00;
  undefined8 uVar24;
  long *plVar25;
  long *__this_00;
  UnityEngine_ParticleSystem_EmissionModule_o __this_01;
  UnityEngine_Animation_o *__this_02;
  undefined1 uVar26;
  Characters_Horse_o **unaff_R14;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dc_03;
  undefined4 extraout_XMM0_Dc_04;
  undefined4 extraout_XMM0_Dc_05;
  undefined4 extraout_XMM0_Dc_06;
  undefined4 extraout_XMM0_Dc_07;
  undefined4 extraout_XMM0_Dc_08;
  float extraout_XMM0_Dc_09;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  undefined4 extraout_XMM0_Dd_03;
  undefined4 extraout_XMM0_Dd_04;
  undefined4 extraout_XMM0_Dd_05;
  undefined4 extraout_XMM0_Dd_06;
  undefined4 extraout_XMM0_Dd_07;
  undefined4 extraout_XMM0_Dd_08;
  float extraout_XMM0_Dd_09;
  undefined4 in_XMM1_Dc;
  undefined4 uVar32;
  undefined4 in_XMM1_Dd;
  undefined4 uVar33;
  float fVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  float fVar43;
  float fVar44;
  float fVar45;
  UnityEngine_Quaternion_o UVar46;
  UnityEngine_Quaternion_o UVar47;
  UnityEngine_Quaternion_o a;
  UnityEngine_Vector3_o UVar48;
  UnityEngine_Vector3_o force;
  UnityEngine_Vector3_o force_00;
  UnityEngine_Vector3_o force_01;
  UnityEngine_Vector3_o UVar49;
  UnityEngine_Vector3_o origin;
  UnityEngine_Vector3_o direction;
  undefined4 auStack_1b8 [2];
  undefined1 auStack_1b0 [8];
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  undefined8 uStack_190;
  undefined8 uStack_188;
  UnityEngine_RaycastHit_o UStack_180;
  Characters_Horse_o *pCStack_150;
  Characters_Horse_o *pCStack_148;
  Characters_Horse_o **ppCStack_140;
  float fStack_134;
  UnityEngine_ParticleSystem_EmissionModule_Fields UStack_130;
  undefined1 auStack_128 [8];
  undefined4 uStack_120;
  undefined4 uStack_11c;
  Characters_Horse_o *pCStack_118;
  float fStack_f0;
  float fStack_ec;
  float fStack_c0;
  float fStack_bc;
  float fStack_68;
  float fStack_64;
  undefined8 uStack_58;
  undefined8 uStack_48;
  float fStack_28;
  
  plVar25 = (long *)__this;
  if (g_data_057addcc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    plVar25 = &TypeInfo_Util;
    il2cpp_runtime_helper_023445d0();
    g_data_057addcc = '\x01';
  }
  lVar20 = *(long *)&(__this->fields).Dead;
  if ((lVar20 == 0) || (lVar20 = *(long *)(lVar20 + 0x20), lVar20 == 0)) goto label_042b7ca8;
  if (*(char *)(lVar20 + 0x68) == '\0') {
    return;
  }
  fVar31 = (__this->fields).RunCloseSpeed;
  fVar27 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  in_XMM1_Dc = 0;
  in_XMM1_Dd = 0;
  (__this->fields).RunCloseSpeed = fVar31 - fVar27;
  unaff_RBX = (Characters_Horse_o **)(__this->fields).OutlineComponent;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  method = (MethodInfo *)0x0;
  plVar25 = (long *)unaff_RBX;
  bVar15 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar15 != '\0') {
label_042b7700:
    targetGo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    Photon_Pun_PhotonNetwork__Destroy_3eec3a0(targetGo,(MethodInfo *)0x0);
    return;
  }
  pOVar3 = (__this->fields).OutlineComponent;
  if (pOVar3 == (Outline_o *)0x0) goto label_042b7ca8;
  if (*(char *)&(pOVar3->fields)._namesToIgnore != '\0') goto label_042b7700;
  if (pOVar3[2].fields.precomputeOutline == 1) {
    if (*(char *)((long)&pOVar3[1].fields.outlineMaskAndFillMaterial + 4) == '\0') {
      *(undefined4 *)&(__this->fields).crossfadeCache = 3;
      return;
    }
    lVar20 = *(long *)&(__this->fields).Dead;
    if ((lVar20 != 0) &&
       (unaff_R14 = *(Characters_Horse_o ***)(lVar20 + 0x18),
       (Characters_Horse_o *)unaff_R14 != (Characters_Horse_o *)0x0)) {
      method = (MethodInfo *)0x0;
      UVar46 = UnityEngine_Rigidbody__get_rotation((UnityEngine_Rigidbody_o *)unaff_R14,(MethodInfo *)0x0);
      fVar31 = UVar46.fields.z;
      fVar27 = UVar46.fields.w;
      pOVar3 = (__this->fields).OutlineComponent;
      plVar25 = (long *)0x0;
      if (pOVar3 != (Outline_o *)0x0) {
        uStack_58 = (*pOVar3->klass[4].vtable._0_Equals.methodPtr)();
        fVar28 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
        UVar47.fields.z = fVar31;
        UVar47.fields.w = fVar27;
        UVar47.fields.x = (float)(undefined4)uStack_58;
        UVar47.fields.y = (float)uStack_58._4_4_;
        UVar46 = UnityEngine_Quaternion__Lerp(UVar46,UVar47,fVar28 * 5.0,(MethodInfo *)0x0);
        method = (MethodInfo *)0x0;
        plVar25 = (long *)unaff_R14;
        UnityEngine_Rigidbody__MoveRotation((UnityEngine_Rigidbody_o *)unaff_R14,UVar46,(MethodInfo *)0x0);
        pOVar3 = (__this->fields).OutlineComponent;
        if (pOVar3 != (Outline_o *)0x0) {
          if (*(char *)((long)&pOVar3[4].fields.outlineMaskAndFillMaterial + 4) != '\0') {
            *(undefined4 *)&(__this->fields).crossfadeCache = 5;
            return;
          }
          *(undefined4 *)&(__this->fields).crossfadeCache = 4;
          return;
        }
      }
    }
  }
  else {
    if (*(char *)((long)&(__this->fields).crossfadeCache + 4) == '\0') {
      return;
    }
    fVar31 = (__this->fields).WalkSpeed;
    plVar25 = (long *)0x0;
    fVar27 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    in_XMM1_Dc = 0;
    in_XMM1_Dd = 0;
    (__this->fields).WalkSpeed = fVar31 - fVar27;
    pOVar3 = (__this->fields).OutlineComponent;
    if (((pOVar3 != (Outline_o *)0x0) && (pOVar4 = pOVar3[1].klass, pOVar4 != (Outline_c *)0x0)) &&
       (plVar25 = (long *)(pOVar4->_1).name, (Characters_Horse_o *)plVar25 != (Characters_Horse_o *)0x0)) {
      method = (MethodInfo *)0x0;
      UVar49 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)plVar25,(MethodInfo *)0x0);
      lVar20 = *(long *)&(__this->fields).Dead;
      if (lVar20 != 0) {
        pUVar18 = *(UnityEngine_Transform_o **)(lVar20 + 0x10);
        plVar25 = (long *)0x0;
        if (pUVar18 != (UnityEngine_Transform_o *)0x0) {
          method = (MethodInfo *)0x0;
          UVar48 = UnityEngine_Transform__get_position(pUVar18,(MethodInfo *)0x0);
          if (g_data_057a68cb == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
            g_data_057a68cb = '\x01';
          }
          fVar27 = UVar49.fields.x - UVar48.fields.x;
          fStack_64 = UVar49.fields.y;
          fStack_64 = fStack_64 - UVar48.fields.y;
          fVar31 = UVar49.fields.z - UVar48.fields.z;
          unaff_R14 = &TypeInfo_Math;
          plVar25 = (long *)TypeInfo_Math;
          if ((TypeInfo_Math->fields)._stepPhase == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          fVar31 = fVar31 * fVar31 + fStack_64 * fStack_64 + fVar27 * fVar27;
          in_XMM1_Dc = 0;
          in_XMM1_Dd = 0;
          if (fVar31 < 0.0) {
            fVar31 = sqrtf(fVar31);
            pOVar3 = (__this->fields).OutlineComponent;
          }
          else {
            fVar31 = SQRT(fVar31);
            pOVar3 = (__this->fields).OutlineComponent;
          }
          if (((pOVar3 != (Outline_o *)0x0) && (pOVar3[1].klass != (Outline_c *)0x0)) &&
             (plVar25 = (long *)((pOVar3[1].klass)->_1).name,
             (Characters_Horse_o *)plVar25 != (Characters_Horse_o *)0x0)) {
            method = (MethodInfo *)0x0;
            UVar49 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)plVar25,(MethodInfo *)0x0)
            ;
            lVar20 = *(long *)&(__this->fields).Dead;
            if (lVar20 != 0) {
              pUVar18 = *(UnityEngine_Transform_o **)(lVar20 + 0x10);
              plVar25 = (long *)0x0;
              if (pUVar18 != (UnityEngine_Transform_o *)0x0) {
                method = (MethodInfo *)0x0;
                UVar48 = UnityEngine_Transform__get_position(pUVar18,(MethodInfo *)0x0);
                if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                plVar25 = (long *)0x0;
                fVar27 = Utility_Util__DistanceIgnoreY(UVar49,UVar48,(MethodInfo *)0x0);
                if (fVar31 <= 20.0) {
label_042b7a39:
                  if (fVar27 < 5.0) {
                    *(undefined4 *)&(__this->fields).crossfadeCache = 0;
                    (__this->fields).WalkSpeed = *(float *)&(__this->fields).HorseCache;
                    return;
                  }
                  in_XMM1_Dc = 0;
                  in_XMM1_Dd = 0;
                  if (20.0 <= fVar27) {
                    *(undefined4 *)&(__this->fields).crossfadeCache = 2;
                    goto label_042b7ad1;
                  }
                  *(undefined4 *)&(__this->fields).crossfadeCache = 1;
                  (__this->fields).WalkSpeed = *(float *)&(__this->fields).HorseCache;
                  pOVar3 = (__this->fields).OutlineComponent;
                }
                else {
                  in_XMM1_Dc = 0;
                  in_XMM1_Dd = 0;
                  if (0.0 < (__this->fields).WalkSpeed) goto label_042b7a39;
                  plVar25 = (long *)__this;
                  Characters_Horse__TeleportToHuman(__this,method);
                  if (1 < *(int *)&(__this->fields).crossfadeCache - 1U) {
                    return;
                  }
label_042b7ad1:
                  pOVar3 = (__this->fields).OutlineComponent;
                }
                if (((pOVar3 != (Outline_o *)0x0) && (pOVar3[1].klass != (Outline_c *)0x0)) &&
                   (plVar25 = (long *)((pOVar3[1].klass)->_1).name,
                   (Characters_Horse_o *)plVar25 != (Characters_Horse_o *)0x0)) {
                  method = (MethodInfo *)0x0;
                  UVar49 = UnityEngine_Transform__get_position
                                     ((UnityEngine_Transform_o *)plVar25,(MethodInfo *)0x0);
                  lVar20 = *(long *)&(__this->fields).Dead;
                  if ((lVar20 != 0) &&
                     (plVar25 = *(long **)(lVar20 + 0x10),
                     (Characters_Horse_o *)plVar25 != (Characters_Horse_o *)0x0)) {
                    method = (MethodInfo *)0x0;
                    UVar48 = UnityEngine_Transform__get_position
                                       ((UnityEngine_Transform_o *)plVar25,(MethodInfo *)0x0);
                    lVar20 = *(long *)&(__this->fields).Dead;
                    if (lVar20 != 0) {
                      pUVar6 = *(UnityEngine_Rigidbody_o **)(lVar20 + 0x18);
                      unaff_RBX = (Characters_Horse_o **)0x0;
                      if (pUVar6 != (UnityEngine_Rigidbody_o *)0x0) {
                        UVar46 = UnityEngine_Rigidbody__get_rotation(pUVar6,(MethodInfo *)0x0);
                        if (g_data_057a6845 == '\0') {
                          il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                          g_data_057a6845 = '\x01';
                        }
                        fStack_68 = UVar49.fields.x;
                        fStack_28 = UVar48.fields.x;
                        fStack_68 = fStack_68 - fStack_28;
                        fVar31 = UVar49.fields.z - UVar48.fields.z;
                        if ((TypeInfo_Math->fields)._stepPhase == 0) {
                          il2cpp_runtime_helper_02337ed0();
                        }
                        uVar32 = 0;
                        uVar33 = 0;
                        fVar27 = fVar31 * fVar31 + fStack_68 * fStack_68 + 0.0;
                        if (fVar27 < 0.0) {
                          fVar27 = sqrtf(fVar27);
                          uVar32 = extraout_XMM0_Dc;
                          uVar33 = extraout_XMM0_Dd;
                        }
                        else {
                          fVar27 = SQRT(fVar27);
                        }
                        if (1e-05 < fVar27) {
                          fVar31 = fVar31 / fVar27;
                          auVar38._4_4_ = fVar27;
                          auVar38._0_4_ = fVar27;
                          auVar38._8_4_ = uVar32;
                          auVar38._12_4_ = uVar33;
                          auVar38 = divps(ZEXT416((uint)fStack_68),auVar38);
                          uVar24 = auVar38._0_8_;
                        }
                        else {
                          if (g_data_057a65d5 == '\0') {
                            il2cpp_runtime_helper_023445d0();
                            g_data_057a65d5 = '\x01';
                          }
                          uVar24 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
                          fVar31 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
                        }
                        UVar49.fields.z = fVar31;
                        UVar49.fields.x = (float)(int)uVar24;
                        UVar49.fields.y = (float)(int)((ulong)uVar24 >> 0x20);
                        UVar47 = UnityEngine_Quaternion__LookRotation_4debb20(UVar49,(MethodInfo *)0x0);
                        fVar31 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
                        UVar46 = UnityEngine_Quaternion__Lerp(UVar46,UVar47,fVar31 * 10.0,(MethodInfo *)0x0);
                        UnityEngine_Rigidbody__MoveRotation(pUVar6,UVar46,(MethodInfo *)0x0);
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
label_042b7ca8:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057addcd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057addcd = '\x01';
  }
  __this_00 = plVar25;
  Characters_BaseCharacter__FixedUpdate((Characters_BaseCharacter_o *)plVar25,method);
  lVar20 = *(long *)&(((Characters_Horse_o *)plVar25)->fields).Dead;
  if ((lVar20 != 0) && (lVar20 = *(long *)(lVar20 + 0x20), lVar20 != 0)) {
    if (*(char *)(lVar20 + 0x68) == '\0') {
      return;
    }
    unaff_RBX = (Characters_Horse_o **)(((Characters_Horse_o *)plVar25)->fields).OutlineComponent;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_00 = (long *)unaff_RBX;
    bVar15 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar15 != '\0') {
      return;
    }
    pOVar3 = (((Characters_Horse_o *)plVar25)->fields).OutlineComponent;
    if (pOVar3 != (Outline_o *)0x0) {
      if (*(char *)&(pOVar3->fields)._namesToIgnore != '\0') {
        return;
      }
      __this_00 = plVar25;
      (*(((Characters_Horse_o *)plVar25)->klass->vtable)._96_CheckGround.methodPtr)();
      lVar20 = *(long *)&(((Characters_Horse_o *)plVar25)->fields).Dead;
      if ((lVar20 != 0) &&
         (__this_00 = *(long **)(lVar20 + 0x18), (Characters_Horse_o *)__this_00 != (Characters_Horse_o *)0x0)
         ) {
        UnityEngine_Rigidbody__set_angularDrag((UnityEngine_Rigidbody_o *)__this_00,6.0,(MethodInfo *)0x0);
        if ((*(char *)((long)&(((Characters_Horse_o *)plVar25)->fields).Animation + 4) == '\0') ||
           (uVar2 = *(uint *)&(((Characters_Horse_o *)plVar25)->fields).crossfadeCache, 5 < uVar2)) {
joined_r0x042b81df:
          if (g_data_057a6844 == '\0') {
            __this_00 = &TypeInfo_Vector3;
            il2cpp_runtime_helper_023445d0();
            g_data_057a6844 = '\x01';
          }
          lVar20 = *(long *)&(((Characters_Horse_o *)plVar25)->fields).Dead;
          if ((lVar20 != 0) &&
             (__this_00 = *(long **)(lVar20 + 0x18),
             (Characters_Horse_o *)__this_00 != (Characters_Horse_o *)0x0)) {
            fromDirection = *(UnityEngine_Vector3_Fields *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
            pUVar18 = UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
            if (pUVar18 != (UnityEngine_Transform_o *)0x0) {
              UVar49 = UnityEngine_Transform__get_up(pUVar18,(MethodInfo *)0x0);
              __this_00 = (long *)0x0;
              UVar46 = UnityEngine_Quaternion__FromToRotation
                                 ((UnityEngine_Vector3_o)fromDirection,UVar49,(MethodInfo *)0x0);
              fVar31 = UVar46.fields.z;
              if (g_data_057a6843 == '\0') {
                __this_00 = &TypeInfo_Quaternion;
                il2cpp_runtime_helper_023445d0();
                g_data_057a6843 = '\x01';
              }
              uVar24 = **(undefined8 **)(TypeInfo_Quaternion + 0xb8);
              uVar22 = (*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
              fVar27 = ABS((float)((ulong)uVar22 >> 0x20) * UVar46.fields.w +
                           (float)((ulong)uVar24 >> 0x20) * UVar46.fields.y + (float)uVar24 * UVar46.fields.x
                           + (float)uVar22 * fVar31);
              if (1.0 <= fVar27) {
                fVar27 = 1.0;
              }
              fVar28 = 0.0;
              if (fVar27 <= 0.999999) {
                fVar27 = acosf(fVar27);
                fVar28 = (fVar27 + fVar27) * 57.29578;
              }
              piVar1 = &(((Characters_Horse_o *)plVar25)->fields).State;
              if (fVar28 < (float)*piVar1 || fVar28 == (float)*piVar1) {
label_042b89f8:
                lVar20 = *(long *)&(((Characters_Horse_o *)plVar25)->fields).Dead;
                if (lVar20 != 0) {
                  pUVar6 = *(UnityEngine_Rigidbody_o **)(lVar20 + 0x18);
                  uVar24 = (*(((Characters_Horse_o *)plVar25)->klass->vtable)._58_get_Gravity.methodPtr)
                                     (plVar25,(((Characters_Horse_o *)plVar25)->klass->vtable)._58_get_Gravity
                                              .method);
                  unaff_RBX = (Characters_Horse_o **)0x0;
                  __this_00 = plVar25;
                  if (pUVar6 != (UnityEngine_Rigidbody_o *)0x0) {
                    force_01.fields.z = fVar31;
                    force_01.fields.x = (float)(int)uVar24;
                    force_01.fields.y = (float)(int)((ulong)uVar24 >> 0x20);
                    UnityEngine_Rigidbody__AddForce(pUVar6,force_01,5,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
              else {
                __this_00 = (long *)0x0;
                UVar46 = UnityEngine_Quaternion__Inverse(UVar46,(MethodInfo *)0x0);
                lVar20 = *(long *)&(((Characters_Horse_o *)plVar25)->fields).Dead;
                if ((lVar20 != 0) &&
                   (__this_00 = *(long **)(lVar20 + 0x18),
                   (Characters_Horse_o *)__this_00 != (Characters_Horse_o *)0x0)) {
                  UVar47 = UnityEngine_Rigidbody__get_rotation
                                     ((UnityEngine_Rigidbody_o *)__this_00,(MethodInfo *)0x0);
                  fVar28 = UVar47.fields.z;
                  fVar29 = UVar47.fields.w;
                  fVar31 = UVar47.fields.x;
                  fVar27 = UVar47.fields.y;
                  lVar20 = *(long *)&(((Characters_Horse_o *)plVar25)->fields).Dead;
                  if ((lVar20 != 0) &&
                     (__this_00 = *(long **)(lVar20 + 0x18),
                     (Characters_Horse_o *)__this_00 != (Characters_Horse_o *)0x0)) {
                    fStack_f0 = UVar46.fields.z;
                    fStack_ec = UVar46.fields.w;
                    fStack_c0 = UVar46.fields.x;
                    fStack_bc = UVar46.fields.y;
                    fVar45 = (fStack_bc * fVar28 + fStack_c0 * fVar29 + fStack_ec * fVar31) -
                             fStack_f0 * fVar27;
                    fVar43 = (fStack_f0 * fVar31 + fStack_bc * fVar29 + fVar27 * fStack_ec) -
                             fVar28 * fStack_c0;
                    fVar44 = (fStack_c0 * fVar27 + fStack_f0 * fVar29 + fVar28 * fStack_ec) -
                             fVar31 * fStack_bc;
                    fVar34 = ((fVar29 * fStack_ec - fVar31 * fStack_c0) - fVar27 * fStack_bc) -
                             fStack_f0 * fVar28;
                    UVar46 = UnityEngine_Rigidbody__get_rotation
                                       ((UnityEngine_Rigidbody_o *)__this_00,(MethodInfo *)0x0);
                    fVar31 = UVar46.fields.z;
                    fVar29 = UVar46.fields.w;
                    fVar27 = UVar46.fields.x;
                    fVar28 = UVar46.fields.y;
                    fVar30 = ABS(fVar29 * fVar34 + fVar31 * fVar44 + fVar45 * fVar27 + fVar28 * fVar43);
                    if (1.0 <= fVar30) {
                      fVar30 = 1.0;
                    }
                    if (0.999999 < fVar30) {
label_042b89dc:
                      lVar12._0_4_ = (((Characters_Horse_o *)plVar25)->fields).Dead;
                      lVar12._4_4_ = (((Characters_Horse_o *)plVar25)->fields).CustomDamageEnabled;
                    }
                    else {
                      fVar40 = (float)(((Characters_Horse_o *)plVar25)->fields).State;
                      fVar30 = acosf(fVar30);
                      fVar30 = (fVar30 + fVar30) * 57.29578;
                      if ((fVar30 == 0.0) && (!NAN(fVar30))) goto label_042b89dc;
                      fVar40 = fVar40 / fVar30;
                      fVar31 = 1.0;
                      if (fVar40 <= 1.0) {
                        fVar31 = fVar40;
                      }
                      __this_00 = (long *)0x0;
                      a.fields.y = fVar43;
                      a.fields.x = fVar45;
                      a.fields.w = fVar34;
                      a.fields.z = fVar44;
                      UVar46 = UnityEngine_Quaternion__SlerpUnclamped(a,UVar46,fVar31,(MethodInfo *)0x0);
                      fVar31 = UVar46.fields.z;
                      fVar29 = UVar46.fields.w;
                      fVar27 = UVar46.fields.x;
                      fVar28 = UVar46.fields.y;
                      lVar12._0_4_ = (((Characters_Horse_o *)plVar25)->fields).Dead;
                      lVar12._4_4_ = (((Characters_Horse_o *)plVar25)->fields).CustomDamageEnabled;
                    }
                    if ((lVar12 != 0) &&
                       (__this_00 = *(long **)(lVar12 + 0x18),
                       (Characters_Horse_o *)__this_00 != (Characters_Horse_o *)0x0)) {
                      UVar46.fields.y = fVar28;
                      UVar46.fields.x = fVar27;
                      UVar46.fields.w = fVar29;
                      UVar46.fields.z = fVar31;
                      UnityEngine_Rigidbody__MoveRotation
                                ((UnityEngine_Rigidbody_o *)__this_00,UVar46,(MethodInfo *)0x0);
                      goto label_042b89f8;
                    }
                  }
                }
              }
            }
          }
        }
        else if ((0x36U >> (uVar2 & 0x1f) & 1) == 0) {
          lVar20 = *(long *)&(((Characters_Horse_o *)plVar25)->fields).Dead;
          if (lVar20 != 0) {
            pUVar6 = *(UnityEngine_Rigidbody_o **)(lVar20 + 0x18);
            __this_00 = (long *)0x0;
            if (pUVar6 != (UnityEngine_Rigidbody_o *)0x0) {
              UVar49 = UnityEngine_Rigidbody__get_velocity(pUVar6,(MethodInfo *)0x0);
              if (g_data_057a6841 == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                g_data_057a6841 = '\x01';
              }
              unaff_RBX = &TypeInfo_Math;
              __this_00 = (long *)TypeInfo_Math;
              if ((TypeInfo_Math->fields)._stepPhase == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              fVar31 = UVar49.fields.z * UVar49.fields.z +
                       UVar49.fields.y * UVar49.fields.y + UVar49.fields.x * UVar49.fields.x;
              if (fVar31 < 0.0) {
                fVar31 = sqrtf(fVar31);
                lVar20._0_4_ = (((Characters_Horse_o *)plVar25)->fields).Dead;
                lVar20._4_4_ = (((Characters_Horse_o *)plVar25)->fields).CustomDamageEnabled;
              }
              else {
                fVar31 = SQRT(fVar31);
                lVar20._0_4_ = (((Characters_Horse_o *)plVar25)->fields).Dead;
                lVar20._4_4_ = (((Characters_Horse_o *)plVar25)->fields).CustomDamageEnabled;
              }
              if (lVar20 != 0) {
                uVar32 = 0;
                uVar33 = 0;
                unaff_R14 = *(Characters_Horse_o ***)(lVar20 + 0x18);
                if (1.0 <= fVar31) {
                  if ((Characters_Horse_o *)unaff_R14 != (Characters_Horse_o *)0x0) {
                    UVar49 = UnityEngine_Rigidbody__get_velocity
                                       ((UnityEngine_Rigidbody_o *)unaff_R14,(MethodInfo *)0x0);
                    fVar31 = UVar49.fields.z;
                    auVar36._0_8_ = UVar49.fields._0_8_;
                    auVar36._8_4_ = extraout_XMM0_Dc_02;
                    auVar36._12_4_ = extraout_XMM0_Dd_02;
                    auVar39._8_4_ = extraout_XMM0_Dc_02;
                    auVar39._0_8_ = auVar36._0_8_;
                    auVar39._12_4_ = extraout_XMM0_Dd_02;
                    if (g_data_057a6845 == '\0') {
                      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                      g_data_057a6845 = '\x01';
                      auVar36 = auVar39;
                    }
                    __this_00 = (long *)TypeInfo_Math;
                    if ((TypeInfo_Math->fields)._stepPhase == 0) {
                      il2cpp_runtime_helper_02337ed0();
                      auVar36 = auVar39;
                    }
                    fVar27 = fVar31 * fVar31 + auVar36._4_4_ * auVar36._4_4_ + auVar36._0_4_ * auVar36._0_4_;
                    if (fVar27 < 0.0) {
                      fVar27 = sqrtf(fVar27);
                      uVar32 = extraout_XMM0_Dc_05;
                      uVar33 = extraout_XMM0_Dd_05;
                      if (1e-05 < fVar27) goto label_042b84aa;
label_042b84c6:
                      if (g_data_057a65d5 == '\0') {
                        __this_00 = &TypeInfo_Vector3;
                        il2cpp_runtime_helper_023445d0();
                        g_data_057a65d5 = '\x01';
                      }
                      uVar24 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
                      fVar31 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
                      pOVar3 = (((Characters_Horse_o *)plVar25)->fields).OutlineComponent;
                    }
                    else {
                      fVar27 = SQRT(fVar27);
                      auVar39 = auVar36;
                      if (fVar27 <= 1e-05) goto label_042b84c6;
label_042b84aa:
                      fVar31 = fVar31 / fVar27;
                      auVar11._4_4_ = fVar27;
                      auVar11._0_4_ = fVar27;
                      auVar11._8_4_ = uVar32;
                      auVar11._12_4_ = uVar33;
                      auVar38 = divps(auVar39,auVar11);
                      uVar24 = auVar38._0_8_;
                      pOVar3 = (((Characters_Horse_o *)plVar25)->fields).OutlineComponent;
                    }
                    if (((pOVar3 != (Outline_o *)0x0) &&
                        (pUVar5 = pOVar3[2].fields.outlineMaskAndFillMaterial,
                        pUVar5 != (UnityEngine_Material_o *)0x0)) &&
                       (lVar20 = *(long *)&(((Characters_Horse_o *)plVar25)->fields).Dead, lVar20 != 0)) {
                      pUVar6 = *(UnityEngine_Rigidbody_o **)(lVar20 + 0x18);
                      __this_00 = (long *)0x0;
                      if (pUVar6 != (UnityEngine_Rigidbody_o *)0x0) {
                        fVar27 = *(float *)((long)&pUVar5[2].klass + 4);
                        UVar49 = UnityEngine_Rigidbody__get_velocity(pUVar6,(MethodInfo *)0x0);
                        if (g_data_057a6841 == '\0') {
                          il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                          g_data_057a6841 = '\x01';
                        }
                        if ((TypeInfo_Math->fields)._stepPhase == 0) {
                          il2cpp_runtime_helper_02337ed0();
                        }
                        fVar28 = UVar49.fields.z * UVar49.fields.z +
                                 UVar49.fields.y * UVar49.fields.y + UVar49.fields.x * UVar49.fields.x;
                        if (fVar28 < 0.0) {
                          fVar28 = sqrtf(fVar28);
                        }
                        else {
                          fVar28 = SQRT(fVar28);
                        }
                        fStack_f0 = (float)uVar24;
                        fStack_ec = (float)((ulong)uVar24 >> 0x20);
                        if (fVar28 * 0.5 <= fVar27) {
                          fVar27 = fVar28 * 0.5;
                        }
                        fVar28 = -(fStack_f0 * fVar27);
                        fVar29 = -(fStack_ec * fVar27);
                        fVar31 = -(fVar31 * fVar27);
                        iVar16 = 5;
                        goto label_042b86a3;
                      }
                    }
                  }
                }
                else {
                  if (g_data_057a6844 == '\0') {
                    __this_00 = &TypeInfo_Vector3;
                    il2cpp_runtime_helper_023445d0();
                    g_data_057a6844 = '\x01';
                    lVar20._0_4_ = (((Characters_Horse_o *)plVar25)->fields).Dead;
                    lVar20._4_4_ = (((Characters_Horse_o *)plVar25)->fields).CustomDamageEnabled;
                  }
                  if ((lVar20 != 0) &&
                     (__this_00 = *(long **)(lVar20 + 0x18),
                     (Characters_Horse_o *)__this_00 != (Characters_Horse_o *)0x0)) {
                    uVar24 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
                    fVar31 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
                    UVar49 = UnityEngine_Rigidbody__get_velocity
                                       ((UnityEngine_Rigidbody_o *)__this_00,(MethodInfo *)0x0);
                    fVar27 = UVar49.fields.y;
                    if ((Characters_Horse_o *)unaff_R14 != (Characters_Horse_o *)0x0) {
                      fStack_f0 = (float)uVar24;
                      fStack_ec = (float)((ulong)uVar24 >> 0x20);
                      UVar48.fields.y = fStack_ec * fVar27;
                      UVar48.fields.x = fStack_f0 * fVar27;
                      UVar48.fields.z = fVar31 * fVar27;
                      __this_00 = (long *)unaff_R14;
                      UnityEngine_Rigidbody__set_velocity
                                ((UnityEngine_Rigidbody_o *)unaff_R14,UVar48,(MethodInfo *)0x0);
                      goto joined_r0x042b81df;
                    }
                  }
                }
              }
            }
          }
        }
        else {
          pOVar3 = (((Characters_Horse_o *)plVar25)->fields).OutlineComponent;
          if ((pOVar3 != (Outline_o *)0x0) &&
             (pUVar5 = pOVar3[2].fields.outlineMaskAndFillMaterial, pUVar5 != (UnityEngine_Material_o *)0x0))
          {
            if (uVar2 == 1) {
              ppCVar17 = (Characters_Human_o **)((long)&(((Characters_Horse_o *)plVar25)->fields)._owner + 4);
              lVar13._0_4_ = (((Characters_Horse_o *)plVar25)->fields).Dead;
              lVar13._4_4_ = (((Characters_Horse_o *)plVar25)->fields).CustomDamageEnabled;
            }
            else if (uVar2 == 5) {
              ppCVar17 = &(((Characters_Horse_o *)plVar25)->fields)._owner;
              lVar13._0_4_ = (((Characters_Horse_o *)plVar25)->fields).Dead;
              lVar13._4_4_ = (((Characters_Horse_o *)plVar25)->fields).CustomDamageEnabled;
            }
            else {
              ppCVar17 = (Characters_Human_o **)((long)&pUVar5[2].klass + 4);
              lVar13._0_4_ = (((Characters_Horse_o *)plVar25)->fields).Dead;
              lVar13._4_4_ = (((Characters_Horse_o *)plVar25)->fields).CustomDamageEnabled;
            }
            if ((lVar13 != 0) &&
               (__this_00 = *(long **)(lVar13 + 0x10),
               (Characters_Horse_o *)__this_00 != (Characters_Horse_o *)0x0)) {
              fVar31 = *(float *)ppCVar17;
              unaff_R14 = *(Characters_Horse_o ***)(lVar13 + 0x18);
              UVar49 = UnityEngine_Transform__get_forward
                                 ((UnityEngine_Transform_o *)__this_00,(MethodInfo *)0x0);
              pOVar3 = (((Characters_Horse_o *)plVar25)->fields).OutlineComponent;
              if ((pOVar3 != (Outline_o *)0x0) &&
                 ((pUVar5 = pOVar3[2].fields.outlineMaskAndFillMaterial,
                  pUVar5 != (UnityEngine_Material_o *)0x0 &&
                  ((Characters_Horse_o *)unaff_R14 != (Characters_Horse_o *)0x0)))) {
                fVar27 = *(float *)((long)&pUVar5[2].klass + 4);
                force.fields.z = UVar49.fields.z * fVar27;
                force.fields.x = UVar49.fields.x * fVar27;
                force.fields.y = UVar49.fields.y * fVar27;
                __this_00 = (long *)unaff_R14;
                UnityEngine_Rigidbody__AddForce
                          ((UnityEngine_Rigidbody_o *)unaff_R14,force,5,(MethodInfo *)0x0);
                lVar20 = *(long *)&(((Characters_Horse_o *)plVar25)->fields).Dead;
                if (lVar20 != 0) {
                  pUVar6 = *(UnityEngine_Rigidbody_o **)(lVar20 + 0x18);
                  __this_00 = (long *)(Characters_Horse_o *)0x0;
                  if (pUVar6 != (UnityEngine_Rigidbody_o *)0x0) {
                    UVar49 = UnityEngine_Rigidbody__get_velocity(pUVar6,(MethodInfo *)0x0);
                    if (g_data_057a6841 == '\0') {
                      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                      in_XMM1_Dc = 0;
                      in_XMM1_Dd = 0;
                      g_data_057a6841 = '\x01';
                    }
                    unaff_RBX = &TypeInfo_Math;
                    __this_00 = (long *)TypeInfo_Math;
                    if ((TypeInfo_Math->fields)._stepPhase == 0) {
                      il2cpp_runtime_helper_02337ed0();
                      in_XMM1_Dc = 0;
                      in_XMM1_Dd = 0;
                    }
                    fVar27 = UVar49.fields.z * UVar49.fields.z +
                             UVar49.fields.y * UVar49.fields.y + UVar49.fields.x * UVar49.fields.x;
                    if (0.0 <= fVar27) {
                      fVar27 = SQRT(fVar27);
                    }
                    else {
                      fVar27 = sqrtf(fVar27);
                    }
                    if (fVar27 < fVar31) goto joined_r0x042b81df;
                    lVar20 = *(long *)&(((Characters_Horse_o *)plVar25)->fields).Dead;
                    if ((lVar20 == 0) ||
                       (__this_00 = *(long **)(lVar20 + 0x18),
                       (Characters_Horse_o *)__this_00 == (Characters_Horse_o *)0x0)) goto label_042b8a35;
                    UnityEngine_Rigidbody__set_angularDrag
                              ((UnityEngine_Rigidbody_o *)__this_00,1.0,(MethodInfo *)0x0);
                    pOVar3 = (((Characters_Horse_o *)plVar25)->fields).OutlineComponent;
                    if ((pOVar3 == (Outline_o *)0x0) ||
                       (((pUVar5 = pOVar3[2].fields.outlineMaskAndFillMaterial,
                         pUVar5 == (UnityEngine_Material_o *)0x0 ||
                         (lVar20 = *(long *)&(((Characters_Horse_o *)plVar25)->fields).Dead, lVar20 == 0)) ||
                        (unaff_R14 = *(Characters_Horse_o ***)(lVar20 + 0x18),
                        (Characters_Horse_o *)unaff_R14 == (Characters_Horse_o *)0x0)))) goto label_042b8a35;
                    fVar27 = *(float *)((long)&pUVar5[2].klass + 4);
                    UVar49 = UnityEngine_Rigidbody__get_velocity
                                       ((UnityEngine_Rigidbody_o *)unaff_R14,(MethodInfo *)0x0);
                    if (g_data_057a6841 == '\0') {
                      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                      in_XMM1_Dc = 0;
                      in_XMM1_Dd = 0;
                      g_data_057a6841 = '\x01';
                    }
                    __this_00 = (long *)TypeInfo_Math;
                    if ((TypeInfo_Math->fields)._stepPhase == 0) {
                      il2cpp_runtime_helper_02337ed0();
                      in_XMM1_Dc = 0;
                      in_XMM1_Dd = 0;
                    }
                    fVar28 = UVar49.fields.z * UVar49.fields.z +
                             UVar49.fields.y * UVar49.fields.y + UVar49.fields.x * UVar49.fields.x;
                    if (fVar28 < 0.0) {
                      fVar28 = sqrtf(fVar28);
                      in_XMM1_Dc = extraout_XMM0_Dc_00;
                      in_XMM1_Dd = extraout_XMM0_Dd_00;
                    }
                    else {
                      fVar28 = SQRT(fVar28);
                    }
                    if ((fVar31 != fVar27) || (NAN(fVar31) || NAN(fVar27))) {
                      lVar20 = *(long *)&(((Characters_Horse_o *)plVar25)->fields).Dead;
                      if (lVar20 != 0) {
                        pUVar6 = *(UnityEngine_Rigidbody_o **)(lVar20 + 0x18);
                        __this_00 = (long *)0x0;
                        if (pUVar6 != (UnityEngine_Rigidbody_o *)0x0) {
                          UVar49 = UnityEngine_Rigidbody__get_velocity(pUVar6,(MethodInfo *)0x0);
                          fVar27 = UVar49.fields.z;
                          auVar41._0_8_ = UVar49.fields._0_8_;
                          auVar41._8_4_ = extraout_XMM0_Dc_03;
                          auVar41._12_4_ = extraout_XMM0_Dd_03;
                          auVar42._8_4_ = extraout_XMM0_Dc_03;
                          auVar42._0_8_ = auVar41._0_8_;
                          auVar42._12_4_ = extraout_XMM0_Dd_03;
                          if (g_data_057a6845 == '\0') {
                            il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                            in_XMM1_Dc = 0;
                            in_XMM1_Dd = 0;
                            g_data_057a6845 = '\x01';
                            auVar41 = auVar42;
                          }
                          if ((TypeInfo_Math->fields)._stepPhase == 0) {
                            il2cpp_runtime_helper_02337ed0();
                            in_XMM1_Dc = 0;
                            in_XMM1_Dd = 0;
                            auVar41 = auVar42;
                          }
                          fVar31 = fVar31 - fVar28;
                          fVar28 = fVar27 * fVar27 +
                                   auVar41._4_4_ * auVar41._4_4_ + auVar41._0_4_ * auVar41._0_4_;
                          if (fVar28 < 0.0) {
                            fVar28 = sqrtf(fVar28);
                            in_XMM1_Dc = extraout_XMM0_Dc_06;
                            in_XMM1_Dd = extraout_XMM0_Dd_06;
                          }
                          else {
                            fVar28 = SQRT(fVar28);
                            auVar42 = auVar41;
                          }
                          if (fVar31 <= -1.0) {
                            fVar31 = -1.0;
                          }
                          if (fVar28 <= 1e-05) {
                            if (g_data_057a65d5 == '\0') {
                              il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
                              g_data_057a65d5 = '\x01';
                            }
                            uVar24 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
                            fVar27 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
                          }
                          else {
                            fVar27 = fVar27 / fVar28;
                            auVar10._4_4_ = fVar28;
                            auVar10._0_4_ = fVar28;
                            auVar10._8_4_ = in_XMM1_Dc;
                            auVar10._12_4_ = in_XMM1_Dd;
                            auVar38 = divps(auVar42,auVar10);
                            uVar24 = auVar38._0_8_;
                          }
                          fVar28 = fVar31 * (float)uVar24;
                          fVar29 = fVar31 * (float)((ulong)uVar24 >> 0x20);
                          fVar31 = fVar27 * fVar31;
                          goto label_042b869e;
                        }
                      }
                      goto label_042b8a35;
                    }
                    lVar20 = *(long *)&(((Characters_Horse_o *)plVar25)->fields).Dead;
                    if (lVar20 == 0) goto label_042b8a35;
                    pUVar6 = *(UnityEngine_Rigidbody_o **)(lVar20 + 0x18);
                    __this_00 = (long *)0x0;
                    if (pUVar6 == (UnityEngine_Rigidbody_o *)0x0) goto label_042b8a35;
                    UVar49 = UnityEngine_Rigidbody__get_velocity(pUVar6,(MethodInfo *)0x0);
                    fVar27 = UVar49.fields.z;
                    auVar35._0_8_ = UVar49.fields._0_8_;
                    auVar35._8_4_ = extraout_XMM0_Dc_01;
                    auVar35._12_4_ = extraout_XMM0_Dd_01;
                    auVar37._8_4_ = extraout_XMM0_Dc_01;
                    auVar37._0_8_ = auVar35._0_8_;
                    auVar37._12_4_ = extraout_XMM0_Dd_01;
                    if (g_data_057a6845 == '\0') {
                      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                      in_XMM1_Dc = 0;
                      in_XMM1_Dd = 0;
                      g_data_057a6845 = '\x01';
                      auVar35 = auVar37;
                    }
                    if ((TypeInfo_Math->fields)._stepPhase == 0) {
                      il2cpp_runtime_helper_02337ed0();
                      in_XMM1_Dc = 0;
                      in_XMM1_Dd = 0;
                      auVar35 = auVar37;
                    }
                    fVar29 = fVar27 * fVar27 + auVar35._4_4_ * auVar35._4_4_ + auVar35._0_4_ * auVar35._0_4_;
                    if (fVar29 < 0.0) {
                      fVar29 = sqrtf(fVar29);
                      in_XMM1_Dc = extraout_XMM0_Dc_04;
                      in_XMM1_Dd = extraout_XMM0_Dd_04;
                      if (1e-05 < fVar29) goto label_042b8430;
label_042b843d:
                      if (g_data_057a65d5 == '\0') {
                        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
                        g_data_057a65d5 = '\x01';
                      }
                      uVar24 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
                      fVar27 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
                    }
                    else {
                      fVar29 = SQRT(fVar29);
                      auVar37 = auVar35;
                      if (fVar29 <= 1e-05) goto label_042b843d;
label_042b8430:
                      fVar27 = fVar27 / fVar29;
                      auVar9._4_4_ = fVar29;
                      auVar9._0_4_ = fVar29;
                      auVar9._8_4_ = in_XMM1_Dc;
                      auVar9._12_4_ = in_XMM1_Dd;
                      auVar38 = divps(auVar37,auVar9);
                      uVar24 = auVar38._0_8_;
                    }
                    fVar31 = fVar31 - fVar28;
                    fVar28 = fVar31 * (float)uVar24;
                    fVar29 = fVar31 * (float)((ulong)uVar24 >> 0x20);
                    fVar31 = fVar31 * fVar27;
label_042b869e:
                    iVar16 = 2;
label_042b86a3:
                    unaff_RBX = &TypeInfo_Math;
                    force_00.fields.y = fVar29;
                    force_00.fields.x = fVar28;
                    force_00.fields.z = fVar31;
                    __this_00 = (long *)unaff_R14;
                    UnityEngine_Rigidbody__AddForce
                              ((UnityEngine_Rigidbody_o *)unaff_R14,force_00,iVar16,(MethodInfo *)0x0);
                    goto joined_r0x042b81df;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
label_042b8a35:
  il2cpp_runtime_helper_022b2c90();
  pCStack_118 = (Characters_Horse_o *)unaff_RBX;
  if (g_data_057addce == '\0') {
    ppCStack_140 = (Characters_Horse_o **)0x42b8a64;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HorseAnimations);
    ppCStack_140 = (Characters_Horse_o **)0x42b8a70;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HorseSounds);
    ppCStack_140 = (Characters_Horse_o **)0x42b8a7c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    ppCStack_140 = (Characters_Horse_o **)0x42b8a88;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    ppCStack_140 = (Characters_Horse_o **)0x42b8a94;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    ppCStack_140 = (Characters_Horse_o **)0x42b8aa0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    g_data_057addce = '\x01';
  }
  ppCStack_140 = (Characters_Horse_o **)0x42b8abb;
  (*(((Characters_Horse_o *)__this_00)->klass->vtable)._104_LateUpdateFootstep.methodPtr)
            (__this_00,(((Characters_Horse_o *)__this_00)->klass->vtable)._104_LateUpdateFootstep.method);
  method_00 = (Characters_Horse_o *)
              (((Characters_Horse_o *)__this_00)->klass->vtable)._105_LateUpdateFPS.method;
  ppCStack_140 = (Characters_Horse_o **)0x42b8acf;
  __this_01.fields.m_ParticleSystem =
       (UnityEngine_ParticleSystem_EmissionModule_Fields)
       (UnityEngine_ParticleSystem_EmissionModule_Fields)__this_00;
  (*(((Characters_Horse_o *)__this_00)->klass->vtable)._105_LateUpdateFPS.methodPtr)();
  lVar20 = *(long *)&(((Characters_Horse_o *)__this_00)->fields).Dead;
  if ((lVar20 == 0) || (lVar20 = *(long *)(lVar20 + 0x20), lVar20 == 0)) goto label_042b9203;
  if (*(char *)(lVar20 + 0x68) != '\0') {
    unaff_RBX = (Characters_Horse_o **)(((Characters_Horse_o *)__this_00)->fields).OutlineComponent;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      ppCStack_140 = (Characters_Horse_o **)0x42b8b14;
      il2cpp_runtime_helper_02337ed0();
    }
    method_00 = (Characters_Horse_o *)0x0;
    ppCStack_140 = (Characters_Horse_o **)0x42b8b20;
    __this_01.fields.m_ParticleSystem =
         (UnityEngine_ParticleSystem_EmissionModule_Fields)
         (UnityEngine_ParticleSystem_EmissionModule_Fields)unaff_RBX;
    bVar15 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar15 != '\0') {
      return;
    }
    pOVar3 = (((Characters_Horse_o *)__this_00)->fields).OutlineComponent;
    if (pOVar3 == (Outline_o *)0x0) goto label_042b9203;
    if (*(char *)&(pOVar3->fields)._namesToIgnore != '\0') {
      return;
    }
    lVar20 = *(long *)&(((Characters_Horse_o *)__this_00)->fields).Dead;
    if (lVar20 == 0) goto label_042b9203;
    pUVar6 = *(UnityEngine_Rigidbody_o **)(lVar20 + 0x18);
    __this_01.fields.m_ParticleSystem =
         (UnityEngine_ParticleSystem_EmissionModule_Fields)
         (UnityEngine_ParticleSystem_EmissionModule_Fields)(Characters_Horse_o *)0x0;
    if (pUVar6 == (UnityEngine_Rigidbody_o *)0x0) goto label_042b9203;
    uVar2 = *(uint *)&pOVar3[3].monitor;
    unaff_RBP = (Characters_Horse_o **)(ulong)uVar2;
    method_00 = (Characters_Horse_o *)0x0;
    ppCStack_140 = (Characters_Horse_o **)0x42b8b6b;
    UVar49 = UnityEngine_Rigidbody__get_velocity(pUVar6,(MethodInfo *)0x0);
    fVar31 = UVar49.fields.x;
    fVar27 = UVar49.fields.y;
    uVar32 = extraout_XMM0_Dc_07;
    uVar33 = extraout_XMM0_Dd_07;
    fVar28 = UVar49.fields.z;
    if (g_data_057a6841 == '\0') {
      uStack_120 = extraout_XMM0_Dc_07;
      auStack_128 = (undefined1  [8])UVar49.fields._0_8_;
      uStack_11c = extraout_XMM0_Dd_07;
      ppCStack_140 = (Characters_Horse_o **)0x42b8b8b;
      fStack_134 = UVar49.fields.z;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a6841 = '\x01';
      fVar31 = (float)auStack_128._0_4_;
      fVar27 = (float)auStack_128._4_4_;
      uVar32 = uStack_120;
      uVar33 = uStack_11c;
      fVar28 = fStack_134;
    }
    unaff_RBX = &TypeInfo_Math;
    __this_01.fields.m_ParticleSystem =
         (UnityEngine_ParticleSystem_EmissionModule_Fields)
         (UnityEngine_ParticleSystem_EmissionModule_Fields)TypeInfo_Math;
    if ((TypeInfo_Math->fields)._stepPhase == 0) {
      auStack_128._4_4_ = fVar27;
      auStack_128._0_4_ = fVar31;
      uStack_120 = uVar32;
      uStack_11c = uVar33;
      ppCStack_140 = (Characters_Horse_o **)0x42b8bc0;
      fStack_134 = fVar28;
      il2cpp_runtime_helper_02337ed0();
      fVar31 = (float)auStack_128._0_4_;
      fVar27 = (float)auStack_128._4_4_;
      fVar28 = fStack_134;
    }
    fVar31 = fVar28 * fVar28 + fVar27 * fVar27 + fVar31 * fVar31;
    if (fVar31 < 0.0) {
      ppCStack_140 = (Characters_Horse_o **)0x42b8d4d;
      fVar31 = sqrtf(fVar31);
      if (8.0 < fVar31) goto label_042b8d5a;
label_042b8c01:
      lVar20 = *(long *)&(((Characters_Horse_o *)__this_00)->fields).Dead;
      if (lVar20 == 0) goto label_042b9203;
      pUVar6 = *(UnityEngine_Rigidbody_o **)(lVar20 + 0x18);
      __this_01.fields.m_ParticleSystem =
           (UnityEngine_ParticleSystem_EmissionModule_Fields)
           (UnityEngine_ParticleSystem_EmissionModule_Fields)(Characters_Horse_o *)0x0;
      if (pUVar6 == (UnityEngine_Rigidbody_o *)0x0) goto label_042b9203;
      method_00 = (Characters_Horse_o *)0x0;
      ppCStack_140 = (Characters_Horse_o **)0x42b8c23;
      UVar49 = UnityEngine_Rigidbody__get_velocity(pUVar6,(MethodInfo *)0x0);
      fVar31 = UVar49.fields.x;
      fVar27 = UVar49.fields.y;
      uVar32 = extraout_XMM0_Dc_08;
      uVar33 = extraout_XMM0_Dd_08;
      fVar28 = UVar49.fields.z;
      if (g_data_057a6841 == '\0') {
        uStack_120 = extraout_XMM0_Dc_08;
        auStack_128 = (undefined1  [8])UVar49.fields._0_8_;
        uStack_11c = extraout_XMM0_Dd_08;
        ppCStack_140 = (Characters_Horse_o **)0x42b8c43;
        fStack_134 = UVar49.fields.z;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
        g_data_057a6841 = '\x01';
        fVar31 = (float)auStack_128._0_4_;
        fVar27 = (float)auStack_128._4_4_;
        uVar32 = uStack_120;
        uVar33 = uStack_11c;
        fVar28 = fStack_134;
      }
      if ((TypeInfo_Math->fields)._stepPhase == 0) {
        auStack_128._4_4_ = fVar27;
        auStack_128._0_4_ = fVar31;
        uStack_120 = uVar32;
        uStack_11c = uVar33;
        ppCStack_140 = (Characters_Horse_o **)0x42b8c71;
        fStack_134 = fVar28;
        il2cpp_runtime_helper_02337ed0();
        fVar31 = (float)auStack_128._0_4_;
        fVar27 = (float)auStack_128._4_4_;
        fVar28 = fStack_134;
      }
      fVar31 = fVar28 * fVar28 + fVar27 * fVar27 + fVar31 * fVar31;
      if (0.0 <= fVar31) {
        fVar31 = SQRT(fVar31);
      }
      else {
        ppCStack_140 = (Characters_Horse_o **)0x42b8e4d;
        fVar31 = sqrtf(fVar31);
      }
      if (fVar31 <= 1.0) {
        ppCStack_140 = (Characters_Horse_o **)0x42b8cba;
        __this_01.fields.m_ParticleSystem =
             (UnityEngine_ParticleSystem_EmissionModule_Fields)
             (UnityEngine_ParticleSystem_EmissionModule_Fields)__this_00;
        Characters_Horse__UpdateIdle((Characters_Horse_o *)__this_00,(MethodInfo *)method_00);
        unaff_R14 = (Characters_Horse_o **)(((Characters_Horse_o *)__this_00)->fields).OutlineComponent;
        if ((Characters_Horse_o *)unaff_R14 == (Characters_Horse_o *)0x0) goto label_042b9203;
        if ((uVar2 == 0) && ((((Characters_Horse_o *)unaff_R14)->fields).State == 1)) {
          unaff_RBX = &TypeInfo_HumanAnimations;
          if ((TypeInfo_HumanAnimations->fields)._stepPhase == 0) {
            ppCStack_140 = (Characters_Horse_o **)0x42b8cf9;
            il2cpp_runtime_helper_02337ed0();
          }
          lVar20 = *(long *)&(((Characters_Horse_o *)unaff_R14)->fields)._cameraFPS;
          __this_01.fields.m_ParticleSystem =
               (UnityEngine_ParticleSystem_EmissionModule_Fields)
               (UnityEngine_ParticleSystem_EmissionModule_Fields)TypeInfo_HumanAnimations;
          if (lVar20 == 0) goto label_042b9203;
          pCVar23 = (Characters_Horse_o *)(((TypeInfo_HumanAnimations->fields).MovementSync)->fields).m_CachedPtr;
          if (*(char *)(lVar20 + 0x3c) == '\0') {
            ppCStack_140 = (Characters_Horse_o **)0x42b91e0;
            method_00 = pCVar23;
            bVar15 = System_String__op_Equality
                               (*(System_String_o **)(lVar20 + 0x30),(System_String_o *)pCVar23,
                                (MethodInfo *)0x0);
            cVar14 = (char)bVar15;
            pMVar21 = extraout_RDX_06;
          }
          else {
            __this_01.fields.m_ParticleSystem =
                 (UnityEngine_ParticleSystem_EmissionModule_Fields)
                 (UnityEngine_ParticleSystem_EmissionModule_Fields)(Characters_Horse_o *)0x0;
            if (*(UnityEngine_Animation_o **)(lVar20 + 0x10) == (UnityEngine_Animation_o *)0x0)
            goto label_042b9203;
            ppCStack_140 = (Characters_Horse_o **)0x42b8d38;
            method_00 = pCVar23;
            bVar15 = UnityEngine_Animation__IsPlaying
                               (*(UnityEngine_Animation_o **)(lVar20 + 0x10),(System_String_o *)pCVar23,
                                (MethodInfo *)0x0);
            cVar14 = (char)bVar15;
            pMVar21 = extraout_RDX;
          }
          if (cVar14 == '\0') {
            ppCStack_140 = (Characters_Horse_o **)0x42b91fe;
            Characters_BaseCharacter__CrossFade
                      ((Characters_BaseCharacter_o *)unaff_R14,(System_String_o *)pCVar23,0.1,0.0,pMVar21);
            method_00 = pCVar23;
          }
        }
        goto label_042b8f68;
      }
      unaff_RBX = &TypeInfo_HorseAnimations;
      if ((TypeInfo_HorseAnimations->fields)._stepPhase == 0) {
        ppCStack_140 = (Characters_Horse_o **)0x42b8e72;
        il2cpp_runtime_helper_02337ed0();
      }
      lVar20 = *(long *)&(((Characters_Horse_o *)__this_00)->fields)._cameraFPS;
      __this_01.fields.m_ParticleSystem =
           (UnityEngine_ParticleSystem_EmissionModule_Fields)
           (UnityEngine_ParticleSystem_EmissionModule_Fields)TypeInfo_HorseAnimations;
      if (lVar20 == 0) goto label_042b9203;
      unaff_R14 = *(Characters_Horse_o ***)
                   &(((TypeInfo_HorseAnimations->fields).MovementSync)->fields)._correctPosition.fields.y;
      if (*(char *)(lVar20 + 0x3c) == '\0') {
        __this_01.fields.m_ParticleSystem =
             *(UnityEngine_ParticleSystem_EmissionModule_Fields *)(lVar20 + 0x30);
        ppCStack_140 = (Characters_Horse_o **)0x42b91c5;
        method_00 = (Characters_Horse_o *)unaff_R14;
        bVar15 = System_String__op_Equality
                           ((System_String_o *)__this_01.fields.m_ParticleSystem,(System_String_o *)unaff_R14,
                            (MethodInfo *)0x0);
        cVar14 = (char)bVar15;
        pMVar21 = extraout_RDX_05;
      }
      else {
        __this_01.fields.m_ParticleSystem =
             *(UnityEngine_ParticleSystem_EmissionModule_Fields *)(lVar20 + 0x10);
        if (__this_01.fields.m_ParticleSystem == (UnityEngine_ParticleSystem_o *)0x0) goto label_042b9203;
        ppCStack_140 = (Characters_Horse_o **)0x42b8eb2;
        method_00 = (Characters_Horse_o *)unaff_R14;
        bVar15 = UnityEngine_Animation__IsPlaying
                           ((UnityEngine_Animation_o *)__this_01.fields.m_ParticleSystem,
                            (System_String_o *)unaff_R14,(MethodInfo *)0x0);
        cVar14 = (char)bVar15;
        pMVar21 = extraout_RDX_01;
      }
      if (cVar14 == '\0') {
        ppCStack_140 = (Characters_Horse_o **)0x42b8ecc;
        __this_01.fields.m_ParticleSystem =
             (UnityEngine_ParticleSystem_EmissionModule_Fields)
             (UnityEngine_ParticleSystem_EmissionModule_Fields)__this_00;
        Characters_BaseCharacter__CrossFade
                  ((Characters_BaseCharacter_o *)__this_00,(System_String_o *)unaff_R14,0.1,0.0,pMVar21);
        method_00 = (Characters_Horse_o *)unaff_R14;
      }
      unaff_R14 = (Characters_Horse_o **)(((Characters_Horse_o *)__this_00)->fields).OutlineComponent;
      if ((Characters_Horse_o *)unaff_R14 == (Characters_Horse_o *)0x0) goto label_042b9203;
      if ((uVar2 == 0) && ((((Characters_Horse_o *)unaff_R14)->fields).State == 1)) {
        unaff_RBX = &TypeInfo_HumanAnimations;
        if ((TypeInfo_HumanAnimations->fields)._stepPhase == 0) {
          ppCStack_140 = (Characters_Horse_o **)0x42b8f03;
          il2cpp_runtime_helper_02337ed0();
        }
        lVar20 = *(long *)&(((Characters_Horse_o *)unaff_R14)->fields)._cameraFPS;
        __this_01.fields.m_ParticleSystem =
             (UnityEngine_ParticleSystem_EmissionModule_Fields)
             (UnityEngine_ParticleSystem_EmissionModule_Fields)TypeInfo_HumanAnimations;
        if (lVar20 == 0) goto label_042b9203;
        pCVar23 = (Characters_Horse_o *)(((TypeInfo_HumanAnimations->fields).MovementSync)->fields).m_CachedPtr;
        if (*(char *)(lVar20 + 0x3c) == '\0') goto label_042b919c;
        __this_02 = *(UnityEngine_Animation_o **)(lVar20 + 0x10);
        __this_01.fields.m_ParticleSystem =
             (UnityEngine_ParticleSystem_EmissionModule_Fields)
             (UnityEngine_ParticleSystem_EmissionModule_Fields)(Characters_Horse_o *)0x0;
        if (__this_02 == (UnityEngine_Animation_o *)0x0) goto label_042b9203;
label_042b8f38:
        ppCStack_140 = (Characters_Horse_o **)0x42b8f42;
        method_00 = pCVar23;
        bVar15 = UnityEngine_Animation__IsPlaying(__this_02,(System_String_o *)pCVar23,(MethodInfo *)0x0);
        cVar14 = (char)bVar15;
        pMVar21 = extraout_RDX_02;
        goto joined_r0x042b8f44;
      }
    }
    else {
      if (SQRT(fVar31) <= 8.0) goto label_042b8c01;
label_042b8d5a:
      unaff_RBX = &TypeInfo_HorseAnimations;
      if ((TypeInfo_HorseAnimations->fields)._stepPhase == 0) {
        ppCStack_140 = (Characters_Horse_o **)0x42b8d72;
        il2cpp_runtime_helper_02337ed0();
      }
      lVar20 = *(long *)&(((Characters_Horse_o *)__this_00)->fields)._cameraFPS;
      __this_01.fields.m_ParticleSystem =
           (UnityEngine_ParticleSystem_EmissionModule_Fields)
           (UnityEngine_ParticleSystem_EmissionModule_Fields)TypeInfo_HorseAnimations;
      if (lVar20 == 0) goto label_042b9203;
      unaff_R14 = *(Characters_Horse_o ***)&(((TypeInfo_HorseAnimations->fields).MovementSync)->fields).Disabled;
      if (*(char *)(lVar20 + 0x3c) == '\0') {
        __this_01.fields.m_ParticleSystem =
             *(UnityEngine_ParticleSystem_EmissionModule_Fields *)(lVar20 + 0x30);
        ppCStack_140 = (Characters_Horse_o **)0x42b918f;
        method_00 = (Characters_Horse_o *)unaff_R14;
        bVar15 = System_String__op_Equality
                           ((System_String_o *)__this_01.fields.m_ParticleSystem,(System_String_o *)unaff_R14,
                            (MethodInfo *)0x0);
        cVar14 = (char)bVar15;
        pMVar21 = extraout_RDX_03;
      }
      else {
        __this_01.fields.m_ParticleSystem =
             *(UnityEngine_ParticleSystem_EmissionModule_Fields *)(lVar20 + 0x10);
        if (__this_01.fields.m_ParticleSystem == (UnityEngine_ParticleSystem_o *)0x0) goto label_042b9203;
        ppCStack_140 = (Characters_Horse_o **)0x42b8db2;
        method_00 = (Characters_Horse_o *)unaff_R14;
        bVar15 = UnityEngine_Animation__IsPlaying
                           ((UnityEngine_Animation_o *)__this_01.fields.m_ParticleSystem,
                            (System_String_o *)unaff_R14,(MethodInfo *)0x0);
        cVar14 = (char)bVar15;
        pMVar21 = extraout_RDX_00;
      }
      if (cVar14 == '\0') {
        ppCStack_140 = (Characters_Horse_o **)0x42b8dcc;
        __this_01.fields.m_ParticleSystem =
             (UnityEngine_ParticleSystem_EmissionModule_Fields)
             (UnityEngine_ParticleSystem_EmissionModule_Fields)__this_00;
        Characters_BaseCharacter__CrossFade
                  ((Characters_BaseCharacter_o *)__this_00,(System_String_o *)unaff_R14,0.1,0.0,pMVar21);
        method_00 = (Characters_Horse_o *)unaff_R14;
      }
      unaff_R14 = (Characters_Horse_o **)(((Characters_Horse_o *)__this_00)->fields).OutlineComponent;
      if ((Characters_Horse_o *)unaff_R14 == (Characters_Horse_o *)0x0) goto label_042b9203;
      if ((uVar2 == 0) && ((((Characters_Horse_o *)unaff_R14)->fields).State == 1)) {
        unaff_RBX = &TypeInfo_HumanAnimations;
        if ((TypeInfo_HumanAnimations->fields)._stepPhase == 0) {
          ppCStack_140 = (Characters_Horse_o **)0x42b8e0b;
          il2cpp_runtime_helper_02337ed0();
        }
        lVar20 = *(long *)&(((Characters_Horse_o *)unaff_R14)->fields)._cameraFPS;
        __this_01.fields.m_ParticleSystem =
             (UnityEngine_ParticleSystem_EmissionModule_Fields)
             (UnityEngine_ParticleSystem_EmissionModule_Fields)TypeInfo_HumanAnimations;
        if (lVar20 == 0) goto label_042b9203;
        pCVar23 = (Characters_Horse_o *)
                  (((TypeInfo_HumanAnimations->fields).MovementSync)->fields).m_CancellationTokenSource;
        if (*(char *)(lVar20 + 0x3c) != '\0') {
          __this_02 = *(UnityEngine_Animation_o **)(lVar20 + 0x10);
          if (__this_02 == (UnityEngine_Animation_o *)0x0) {
            __this_01.fields.m_ParticleSystem =
                 (UnityEngine_ParticleSystem_EmissionModule_Fields)(UnityEngine_ParticleSystem_o *)0x0;
            goto label_042b9203;
          }
          goto label_042b8f38;
        }
label_042b919c:
        ppCStack_140 = (Characters_Horse_o **)0x42b91aa;
        method_00 = pCVar23;
        bVar15 = System_String__op_Equality
                           (*(System_String_o **)(lVar20 + 0x30),(System_String_o *)pCVar23,(MethodInfo *)0x0)
        ;
        cVar14 = (char)bVar15;
        pMVar21 = extraout_RDX_04;
joined_r0x042b8f44:
        if (cVar14 == '\0') {
          ppCStack_140 = (Characters_Horse_o **)0x42b8f5c;
          Characters_BaseCharacter__CrossFade
                    ((Characters_BaseCharacter_o *)unaff_R14,(System_String_o *)pCVar23,0.1,0.0,pMVar21);
          method_00 = pCVar23;
        }
      }
    }
    (((Characters_Horse_o *)__this_00)->fields).FollowingEnabled = 0;
  }
label_042b8f68:
  unaff_RBX = *(Characters_Horse_o ***)&(((Characters_Horse_o *)__this_00)->fields)._cameraFPS;
  unaff_RBP = &TypeInfo_HorseAnimations;
  if ((TypeInfo_HorseAnimations->fields)._stepPhase == 0) {
    ppCStack_140 = (Characters_Horse_o **)0x42b8f89;
    il2cpp_runtime_helper_02337ed0();
  }
  __this_01.fields.m_ParticleSystem =
       (UnityEngine_ParticleSystem_EmissionModule_Fields)
       (UnityEngine_ParticleSystem_EmissionModule_Fields)TypeInfo_HorseAnimations;
  if ((Characters_Horse_o *)unaff_RBX != (Characters_Horse_o *)0x0) {
    method_00 = *(Characters_Horse_o **)&(((TypeInfo_HorseAnimations->fields).MovementSync)->fields).Disabled;
    if ((((Characters_Horse_o *)unaff_RBX)->fields).field_0x2c == '\0') {
      __this_01.fields.m_ParticleSystem =
           *(UnityEngine_ParticleSystem_EmissionModule_Fields *)
            &(((Characters_Horse_o *)unaff_RBX)->fields).MaxFootstepDistance;
      ppCStack_140 = (Characters_Horse_o **)0x42b90ab;
      bVar15 = System_String__op_Equality
                         ((System_String_o *)__this_01.fields.m_ParticleSystem,(System_String_o *)method_00,
                          (MethodInfo *)0x0);
      cVar14 = (char)bVar15;
    }
    else {
      __this_01.fields.m_ParticleSystem =
           (UnityEngine_ParticleSystem_EmissionModule_Fields)
           (((Characters_Horse_o *)unaff_RBX)->fields).m_CachedPtr;
      if (__this_01.fields.m_ParticleSystem == (UnityEngine_ParticleSystem_o *)0x0) goto label_042b9203;
      ppCStack_140 = (Characters_Horse_o **)0x42b8fbf;
      bVar15 = UnityEngine_Animation__IsPlaying
                         ((UnityEngine_Animation_o *)__this_01.fields.m_ParticleSystem,
                          (System_String_o *)method_00,(MethodInfo *)0x0);
      cVar14 = (char)bVar15;
    }
    if ((cVar14 == '\0') ||
       (*(char *)((long)&(((Characters_Horse_o *)__this_00)->fields).Animation + 4) == '\0')) {
      UStack_130.m_ParticleSystem = (UnityEngine_ParticleSystem_o *)0x0;
      pSVar7 = (((Characters_Horse_o *)__this_00)->fields).OnPlayerPropertiesChanged;
      if (pSVar7 != (System_Action_Hashtable__o *)0x0) {
        pUVar8 = (UnityEngine_ParticleSystem_o *)(pSVar7->fields).extra_arg;
        __this_01.fields.m_ParticleSystem =
             (UnityEngine_ParticleSystem_EmissionModule_Fields)
             (UnityEngine_ParticleSystem_EmissionModule_Fields)(Characters_Horse_o *)0x0;
        if (pUVar8 != (UnityEngine_ParticleSystem_o *)0x0) {
          ppCStack_140 = (Characters_Horse_o **)0x42b90e1;
          UStack_130.m_ParticleSystem =
               (UnityEngine_ParticleSystem_o *)
               UnityEngine_ParticleSystem__get_emission(pUVar8,(MethodInfo *)0x0);
          __this_01.fields.m_ParticleSystem = (UnityEngine_ParticleSystem_EmissionModule_Fields)&UStack_130;
          method_00 = (Characters_Horse_o *)0x0;
          ppCStack_140 = (Characters_Horse_o **)0x42b90f2;
          bVar15 = UnityEngine_ParticleSystem_EmissionModule__get_enabled(__this_01,(MethodInfo *)0x0);
          if ((char)bVar15 != '\0') {
            __this_01.fields.m_ParticleSystem = (UnityEngine_ParticleSystem_EmissionModule_Fields)&UStack_130;
            method_00 = (Characters_Horse_o *)0x0;
            ppCStack_140 = (Characters_Horse_o **)0x42b9104;
            UnityEngine_ParticleSystem_EmissionModule__set_enabled(__this_01,0,(MethodInfo *)0x0);
          }
          lVar20 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
          if ((lVar20 != 0) && (lVar20 = *(long *)(lVar20 + 0x78), lVar20 != 0)) {
            if (*(char *)(lVar20 + 0x11) == '\0') {
              return;
            }
            if (*(int *)(TypeInfo_HorseSounds + 0xe4) == 0) {
              ppCStack_140 = (Characters_Horse_o **)0x42b9150;
              il2cpp_runtime_helper_02337ed0();
            }
            uVar24 = *(undefined8 *)(*(long *)(TypeInfo_HorseSounds + 0xb8) + 0x18);
            pCVar19 = ((Characters_Horse_o *)__this_00)->klass;
            pMVar21 = (pCVar19->vtable)._100_ToggleSoundLocal.method;
            uVar22 = 0;
            goto label_042b916e;
          }
        }
      }
    }
    else {
      UStack_130.m_ParticleSystem = (UnityEngine_ParticleSystem_o *)0x0;
      pSVar7 = (((Characters_Horse_o *)__this_00)->fields).OnPlayerPropertiesChanged;
      if (pSVar7 != (System_Action_Hashtable__o *)0x0) {
        pUVar8 = (UnityEngine_ParticleSystem_o *)(pSVar7->fields).extra_arg;
        __this_01.fields.m_ParticleSystem =
             (UnityEngine_ParticleSystem_EmissionModule_Fields)
             (UnityEngine_ParticleSystem_EmissionModule_Fields)(Characters_Horse_o *)0x0;
        if (pUVar8 != (UnityEngine_ParticleSystem_o *)0x0) {
          ppCStack_140 = (Characters_Horse_o **)0x42b9004;
          UStack_130.m_ParticleSystem =
               (UnityEngine_ParticleSystem_o *)
               UnityEngine_ParticleSystem__get_emission(pUVar8,(MethodInfo *)0x0);
          __this_01.fields.m_ParticleSystem = (UnityEngine_ParticleSystem_EmissionModule_Fields)&UStack_130;
          method_00 = (Characters_Horse_o *)0x0;
          ppCStack_140 = (Characters_Horse_o **)0x42b9015;
          bVar15 = UnityEngine_ParticleSystem_EmissionModule__get_enabled(__this_01,(MethodInfo *)0x0);
          if ((char)bVar15 == '\0') {
            __this_01.fields.m_ParticleSystem = (UnityEngine_ParticleSystem_EmissionModule_Fields)&UStack_130;
            method_00 = (Characters_Horse_o *)0x1;
            ppCStack_140 = (Characters_Horse_o **)0x42b902a;
            UnityEngine_ParticleSystem_EmissionModule__set_enabled(__this_01,1,(MethodInfo *)0x0);
          }
          lVar20 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
          if ((lVar20 != 0) && (lVar20 = *(long *)(lVar20 + 0x78), lVar20 != 0)) {
            if (*(char *)(lVar20 + 0x11) == '\0') {
              return;
            }
            if (*(int *)(TypeInfo_HorseSounds + 0xe4) == 0) {
              ppCStack_140 = (Characters_Horse_o **)0x42b907a;
              il2cpp_runtime_helper_02337ed0();
            }
            uVar24 = *(undefined8 *)(*(long *)(TypeInfo_HorseSounds + 0xb8) + 0x18);
            pCVar19 = ((Characters_Horse_o *)__this_00)->klass;
            pMVar21 = (pCVar19->vtable)._100_ToggleSoundLocal.method;
            uVar22 = 1;
label_042b916e:
            ppCStack_140 = (Characters_Horse_o **)0x42b9174;
            (*(pCVar19->vtable)._100_ToggleSoundLocal.methodPtr)(__this_00,uVar24,uVar22,pMVar21);
            return;
          }
        }
      }
    }
  }
label_042b9203:
  ppCStack_140 = (Characters_Horse_o **)0x42b9208;
  il2cpp_runtime_helper_022b2c90();
  plVar25 = (long *)__this_01.fields.m_ParticleSystem;
  pCStack_150 = (Characters_Horse_o *)unaff_RBX;
  pCStack_148 = (Characters_Horse_o *)unaff_R14;
  ppCStack_140 = unaff_RBP;
  if (g_data_057addcf == '\0') {
    plVar25 = &TypeInfo_Physics;
    il2cpp_runtime_helper_023445d0();
    g_data_057addcf = '\x01';
  }
  UStack_180.fields.m_UV.fields.x = 0.0;
  UStack_180.fields.m_UV.fields.y = 0.0;
  UStack_180.fields.m_Collider = 0;
  UStack_180.fields.m_Normal.fields.y = 0.0;
  UStack_180.fields.m_Normal.fields.z = 0.0;
  UStack_180.fields.m_FaceID = 0;
  UStack_180.fields.m_Distance = 0.0;
  UStack_180.fields.m_Point.fields.x = 0.0;
  UStack_180.fields.m_Point.fields.y = 0.0;
  UStack_180.fields.m_Point.fields.z = 0.0;
  UStack_180.fields.m_Normal.fields.x = 0.0;
  auStack_1b8[0] = 0;
  *(undefined1 *)((long)&(((Characters_Horse_o *)__this_01.fields.m_ParticleSystem)->fields).Animation + 5) =
       0;
  lVar20 = *(long *)&(((Characters_Horse_o *)__this_01.fields.m_ParticleSystem)->fields).Dead;
  if (lVar20 != 0) {
    pUVar18 = *(UnityEngine_Transform_o **)(lVar20 + 0x10);
    plVar25 = (long *)0x0;
    if (pUVar18 != (UnityEngine_Transform_o *)0x0) {
      UVar49 = UnityEngine_Transform__get_position(pUVar18,(MethodInfo *)0x0);
      auStack_1b0._0_4_ = UVar49.fields.x;
      auStack_1b0._4_4_ = UVar49.fields.y;
      fStack_1a8 = extraout_XMM0_Dc_09;
      fStack_1a4 = extraout_XMM0_Dd_09;
      if (g_data_057a6844 == '\0') {
        auStack_1b0 = (undefined1  [8])UVar49.fields._0_8_;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a6844 = '\x01';
      }
      lVar20 = *(long *)(TypeInfo_Vector3 + 0xb8);
      fStack_1a0 = (float)*(undefined8 *)(lVar20 + 0x18) * 0.8;
      fVar31 = (float)((ulong)*(undefined8 *)(lVar20 + 0x18) >> 0x20) * 0.8;
      uStack_190._0_4_ = *(float *)(lVar20 + 0x20) * 0.8;
      fVar27 = 0.0;
      fVar28 = 0.0;
      if (g_data_057ac31b == '\0') {
        fStack_19c = fVar31;
        fStack_198 = 0.0;
        fStack_194 = 0.0;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057ac31b = '\x01';
        lVar20 = *(long *)(TypeInfo_Vector3 + 0xb8);
        fVar31 = fStack_19c;
        fVar27 = fStack_198;
        fVar28 = fStack_194;
      }
      auStack_1b0._4_4_ = (float)auStack_1b0._4_4_ + fVar31;
      auStack_1b0._0_4_ = (float)auStack_1b0._0_4_ + fStack_1a0;
      fStack_1a8 = fStack_1a8 + fVar27;
      fStack_1a4 = fStack_1a4 + fVar28;
      origin.fields.z = UVar49.fields.z + (float)uStack_190;
      uStack_190 = *(undefined8 *)(lVar20 + 0x24);
      uStack_188 = 0;
      fStack_1a0 = *(float *)(lVar20 + 0x2c);
      auStack_1b8[0] =
           (*(((Characters_BaseCharacter_c *)((Characters_Horse_o *)__this_01.fields.m_ParticleSystem)->klass)
             ->vtable)._60_get_GroundMask.methodPtr)(__this_01.fields.m_ParticleSystem);
      iVar16 = UnityEngine_LayerMask__get_value
                         ((UnityEngine_LayerMask_Fields)(int32_t)auStack_1b8,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      auVar38 = _auStack_1b0;
      uVar26 = 0;
      origin.fields.x = (float)auStack_1b0._0_4_;
      origin.fields.y = (float)auStack_1b0._4_4_;
      direction.fields.z = fStack_1a0;
      direction.fields.x = (float)uStack_190;
      direction.fields.y = (float)uStack_190._4_4_;
      _auStack_1b0 = auVar38;
      bVar15 = UnityEngine_Physics__SphereCast_4e78cf0
                         (origin,0.6,direction,&UStack_180,0.8,iVar16,(MethodInfo *)0x0);
      if ((char)bVar15 != '\0') {
        if (*(char *)((long)&(((Characters_Horse_o *)__this_01.fields.m_ParticleSystem)->fields).Animation + 4
                     ) != '\0') {
          return;
        }
        *(undefined1 *)
         ((long)&(((Characters_Horse_o *)__this_01.fields.m_ParticleSystem)->fields).Animation + 5) = 1;
        uVar26 = 1;
      }
      *(undefined1 *)
       ((long)&(((Characters_Horse_o *)__this_01.fields.m_ParticleSystem)->fields).Animation + 4) = uVar26;
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  *(undefined1 *)((long)&(((Characters_Horse_o *)plVar25)->fields).crossfadeCache + 4) = 1;
  (((Characters_Horse_o *)plVar25)->fields)._owner = (Characters_Human_o *)0x41a0000041700000;
  (((Characters_Horse_o *)plVar25)->fields).HorseCache =
       (Characters_HorseComponentCache_o *)0x41f0000041200000;
  (((Characters_Horse_o *)plVar25)->fields).State = 0x42340000;
  Characters_BaseCharacter___ctor((Characters_BaseCharacter_o *)plVar25,(MethodInfo *)method_00);
  return;
}


// Characters.Horse$$FixedUpdate
// il2cpp: void Characters_Horse__FixedUpdate (Characters_Horse_o* __this, const MethodInfo* method);
// 0x42b7cb0

void Characters_Horse__FixedUpdate(Characters_Horse_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  Outline_o *pOVar3;
  UnityEngine_Material_o *pUVar4;
  UnityEngine_Rigidbody_o *pUVar5;
  System_Action_Hashtable__o *pSVar6;
  UnityEngine_ParticleSystem_o *pUVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  UnityEngine_Vector3_Fields fromDirection;
  long lVar11;
  long lVar12;
  char cVar13;
  bool_conflict bVar14;
  int32_t iVar15;
  Characters_Human_o **ppCVar16;
  UnityEngine_Transform_o *pUVar17;
  Characters_Horse_c *pCVar18;
  long lVar19;
  MethodInfo *pMVar20;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  undefined8 uVar21;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  MethodInfo *extraout_RDX_06;
  Characters_Horse_o **unaff_RBX;
  Characters_Horse_o **unaff_RBP;
  Characters_Horse_o *pCVar22;
  Characters_Horse_o *method_00;
  undefined8 uVar23;
  UnityEngine_ParticleSystem_EmissionModule_o __this_00;
  UnityEngine_Animation_o *__this_01;
  long *plVar24;
  undefined1 uVar25;
  Characters_Horse_o *unaff_R14;
  float fVar26;
  float fVar27;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dc_03;
  undefined4 extraout_XMM0_Dc_04;
  undefined4 extraout_XMM0_Dc_05;
  undefined4 extraout_XMM0_Dc_06;
  undefined4 extraout_XMM0_Dc_07;
  float extraout_XMM0_Dc_08;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  undefined4 extraout_XMM0_Dd_03;
  undefined4 extraout_XMM0_Dd_04;
  undefined4 extraout_XMM0_Dd_05;
  undefined4 extraout_XMM0_Dd_06;
  undefined4 extraout_XMM0_Dd_07;
  float extraout_XMM0_Dd_08;
  float fVar28;
  float fVar29;
  undefined4 in_XMM1_Dc;
  undefined4 uVar30;
  undefined4 in_XMM1_Dd;
  undefined4 uVar31;
  float fVar32;
  float fVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float fVar41;
  float fVar42;
  float fVar43;
  UnityEngine_Quaternion_o UVar44;
  UnityEngine_Quaternion_o UVar45;
  UnityEngine_Vector3_o force;
  UnityEngine_Vector3_o force_00;
  UnityEngine_Vector3_o force_01;
  UnityEngine_Vector3_o UVar46;
  UnityEngine_Vector3_o origin;
  UnityEngine_Vector3_o direction;
  undefined4 auStack_140 [2];
  undefined1 auStack_138 [8];
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  undefined8 uStack_118;
  undefined8 uStack_110;
  UnityEngine_RaycastHit_o UStack_108;
  Characters_Horse_o *pCStack_d8;
  Characters_Horse_o *pCStack_d0;
  Characters_Horse_o **ppCStack_c8;
  float fStack_bc;
  UnityEngine_ParticleSystem_EmissionModule_Fields UStack_b8;
  undefined1 auStack_b0 [8];
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  Characters_Horse_o *pCStack_a0;
  float fStack_78;
  float fStack_74;
  float fStack_48;
  float fStack_44;
  
  if (g_data_057addcd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057addcd = '\x01';
  }
  plVar24 = (long *)__this;
  Characters_BaseCharacter__FixedUpdate((Characters_BaseCharacter_o *)__this,method);
  lVar19 = *(long *)&(__this->fields).Dead;
  if ((lVar19 != 0) && (lVar19 = *(long *)(lVar19 + 0x20), lVar19 != 0)) {
    if (*(char *)(lVar19 + 0x68) == '\0') {
      return;
    }
    unaff_RBX = (Characters_Horse_o **)(__this->fields).OutlineComponent;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    plVar24 = (long *)unaff_RBX;
    bVar14 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar14 != '\0') {
      return;
    }
    pOVar3 = (__this->fields).OutlineComponent;
    if (pOVar3 != (Outline_o *)0x0) {
      if (*(char *)&(pOVar3->fields)._namesToIgnore != '\0') {
        return;
      }
      plVar24 = (long *)__this;
      (*(__this->klass->vtable)._96_CheckGround.methodPtr)();
      lVar19 = *(long *)&(__this->fields).Dead;
      if ((lVar19 != 0) &&
         (plVar24 = *(long **)(lVar19 + 0x18), (Characters_Horse_o *)plVar24 != (Characters_Horse_o *)0x0)) {
        UnityEngine_Rigidbody__set_angularDrag((UnityEngine_Rigidbody_o *)plVar24,6.0,(MethodInfo *)0x0);
        if ((*(char *)((long)&(__this->fields).Animation + 4) == '\0') ||
           (uVar2 = *(uint *)&(__this->fields).crossfadeCache, 5 < uVar2)) {
joined_r0x042b81df:
          if (g_data_057a6844 == '\0') {
            plVar24 = &TypeInfo_Vector3;
            il2cpp_runtime_helper_023445d0();
            g_data_057a6844 = '\x01';
          }
          lVar19 = *(long *)&(__this->fields).Dead;
          if ((lVar19 != 0) &&
             (plVar24 = *(long **)(lVar19 + 0x18), (Characters_Horse_o *)plVar24 != (Characters_Horse_o *)0x0)
             ) {
            fromDirection = *(UnityEngine_Vector3_Fields *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
            pUVar17 = UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)plVar24,(MethodInfo *)0x0);
            if (pUVar17 != (UnityEngine_Transform_o *)0x0) {
              UVar46 = UnityEngine_Transform__get_up(pUVar17,(MethodInfo *)0x0);
              plVar24 = (long *)0x0;
              UVar44 = UnityEngine_Quaternion__FromToRotation
                                 ((UnityEngine_Vector3_o)fromDirection,UVar46,(MethodInfo *)0x0);
              fVar29 = UVar44.fields.z;
              if (g_data_057a6843 == '\0') {
                plVar24 = &TypeInfo_Quaternion;
                il2cpp_runtime_helper_023445d0();
                g_data_057a6843 = '\x01';
              }
              uVar23 = **(undefined8 **)(TypeInfo_Quaternion + 0xb8);
              uVar21 = (*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
              fVar28 = ABS((float)((ulong)uVar21 >> 0x20) * UVar44.fields.w +
                           (float)((ulong)uVar23 >> 0x20) * UVar44.fields.y + (float)uVar23 * UVar44.fields.x
                           + (float)uVar21 * fVar29);
              if (1.0 <= fVar28) {
                fVar28 = 1.0;
              }
              fVar32 = 0.0;
              if (fVar28 <= 0.999999) {
                fVar28 = acosf(fVar28);
                fVar32 = (fVar28 + fVar28) * 57.29578;
              }
              piVar1 = &(__this->fields).State;
              if (fVar32 < (float)*piVar1 || fVar32 == (float)*piVar1) {
label_042b89f8:
                lVar19 = *(long *)&(__this->fields).Dead;
                if (lVar19 != 0) {
                  pUVar5 = *(UnityEngine_Rigidbody_o **)(lVar19 + 0x18);
                  uVar23 = (*(__this->klass->vtable)._58_get_Gravity.methodPtr)
                                     (__this,(__this->klass->vtable)._58_get_Gravity.method);
                  unaff_RBX = (Characters_Horse_o **)0x0;
                  plVar24 = (long *)__this;
                  if (pUVar5 != (UnityEngine_Rigidbody_o *)0x0) {
                    force_01.fields.z = fVar29;
                    force_01.fields.x = (float)(int)uVar23;
                    force_01.fields.y = (float)(int)((ulong)uVar23 >> 0x20);
                    UnityEngine_Rigidbody__AddForce(pUVar5,force_01,5,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
              else {
                plVar24 = (long *)0x0;
                UVar44 = UnityEngine_Quaternion__Inverse(UVar44,(MethodInfo *)0x0);
                lVar19 = *(long *)&(__this->fields).Dead;
                if ((lVar19 != 0) &&
                   (plVar24 = *(long **)(lVar19 + 0x18),
                   (Characters_Horse_o *)plVar24 != (Characters_Horse_o *)0x0)) {
                  UVar45 = UnityEngine_Rigidbody__get_rotation
                                     ((UnityEngine_Rigidbody_o *)plVar24,(MethodInfo *)0x0);
                  fVar32 = UVar45.fields.z;
                  fVar26 = UVar45.fields.w;
                  fVar29 = UVar45.fields.x;
                  fVar28 = UVar45.fields.y;
                  lVar19 = *(long *)&(__this->fields).Dead;
                  if ((lVar19 != 0) &&
                     (plVar24 = *(long **)(lVar19 + 0x18),
                     (Characters_Horse_o *)plVar24 != (Characters_Horse_o *)0x0)) {
                    fStack_78 = UVar44.fields.z;
                    fStack_74 = UVar44.fields.w;
                    fStack_48 = UVar44.fields.x;
                    fStack_44 = UVar44.fields.y;
                    fVar43 = (fStack_44 * fVar32 + fStack_48 * fVar26 + fStack_74 * fVar29) -
                             fStack_78 * fVar28;
                    fVar41 = (fStack_78 * fVar29 + fStack_44 * fVar26 + fVar28 * fStack_74) -
                             fVar32 * fStack_48;
                    fVar42 = (fStack_48 * fVar28 + fStack_78 * fVar26 + fVar32 * fStack_74) -
                             fVar29 * fStack_44;
                    fVar33 = ((fVar26 * fStack_74 - fVar29 * fStack_48) - fVar28 * fStack_44) -
                             fStack_78 * fVar32;
                    UVar44 = UnityEngine_Rigidbody__get_rotation
                                       ((UnityEngine_Rigidbody_o *)plVar24,(MethodInfo *)0x0);
                    fVar29 = UVar44.fields.z;
                    fVar26 = UVar44.fields.w;
                    fVar28 = UVar44.fields.x;
                    fVar32 = UVar44.fields.y;
                    fVar27 = ABS(fVar26 * fVar33 + fVar29 * fVar42 + fVar43 * fVar28 + fVar32 * fVar41);
                    if (1.0 <= fVar27) {
                      fVar27 = 1.0;
                    }
                    if (0.999999 < fVar27) {
label_042b89dc:
                      lVar11._0_4_ = (__this->fields).Dead;
                      lVar11._4_4_ = (__this->fields).CustomDamageEnabled;
                    }
                    else {
                      fVar38 = (float)(__this->fields).State;
                      fVar27 = acosf(fVar27);
                      fVar27 = (fVar27 + fVar27) * 57.29578;
                      if ((fVar27 == 0.0) && (!NAN(fVar27))) goto label_042b89dc;
                      fVar38 = fVar38 / fVar27;
                      fVar29 = 1.0;
                      if (fVar38 <= 1.0) {
                        fVar29 = fVar38;
                      }
                      plVar24 = (long *)0x0;
                      UVar45.fields.y = fVar41;
                      UVar45.fields.x = fVar43;
                      UVar45.fields.w = fVar33;
                      UVar45.fields.z = fVar42;
                      UVar44 = UnityEngine_Quaternion__SlerpUnclamped(UVar45,UVar44,fVar29,(MethodInfo *)0x0);
                      fVar29 = UVar44.fields.z;
                      fVar26 = UVar44.fields.w;
                      fVar28 = UVar44.fields.x;
                      fVar32 = UVar44.fields.y;
                      lVar11._0_4_ = (__this->fields).Dead;
                      lVar11._4_4_ = (__this->fields).CustomDamageEnabled;
                    }
                    if ((lVar11 != 0) &&
                       (plVar24 = *(long **)(lVar11 + 0x18),
                       (Characters_Horse_o *)plVar24 != (Characters_Horse_o *)0x0)) {
                      UVar44.fields.y = fVar32;
                      UVar44.fields.x = fVar28;
                      UVar44.fields.w = fVar26;
                      UVar44.fields.z = fVar29;
                      UnityEngine_Rigidbody__MoveRotation
                                ((UnityEngine_Rigidbody_o *)plVar24,UVar44,(MethodInfo *)0x0);
                      goto label_042b89f8;
                    }
                  }
                }
              }
            }
          }
        }
        else if ((0x36U >> (uVar2 & 0x1f) & 1) == 0) {
          lVar19 = *(long *)&(__this->fields).Dead;
          if (lVar19 != 0) {
            pUVar5 = *(UnityEngine_Rigidbody_o **)(lVar19 + 0x18);
            plVar24 = (long *)0x0;
            if (pUVar5 != (UnityEngine_Rigidbody_o *)0x0) {
              UVar46 = UnityEngine_Rigidbody__get_velocity(pUVar5,(MethodInfo *)0x0);
              if (g_data_057a6841 == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                g_data_057a6841 = '\x01';
              }
              unaff_RBX = &TypeInfo_Math;
              plVar24 = (long *)TypeInfo_Math;
              if ((TypeInfo_Math->fields)._stepPhase == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              fVar29 = UVar46.fields.z * UVar46.fields.z +
                       UVar46.fields.y * UVar46.fields.y + UVar46.fields.x * UVar46.fields.x;
              if (fVar29 < 0.0) {
                fVar29 = sqrtf(fVar29);
                lVar19._0_4_ = (__this->fields).Dead;
                lVar19._4_4_ = (__this->fields).CustomDamageEnabled;
              }
              else {
                fVar29 = SQRT(fVar29);
                lVar19._0_4_ = (__this->fields).Dead;
                lVar19._4_4_ = (__this->fields).CustomDamageEnabled;
              }
              if (lVar19 != 0) {
                uVar30 = 0;
                uVar31 = 0;
                unaff_R14 = *(Characters_Horse_o **)(lVar19 + 0x18);
                if (1.0 <= fVar29) {
                  if (unaff_R14 != (Characters_Horse_o *)0x0) {
                    UVar46 = UnityEngine_Rigidbody__get_velocity
                                       ((UnityEngine_Rigidbody_o *)unaff_R14,(MethodInfo *)0x0);
                    fVar29 = UVar46.fields.z;
                    auVar35._0_8_ = UVar46.fields._0_8_;
                    auVar35._8_4_ = extraout_XMM0_Dc_01;
                    auVar35._12_4_ = extraout_XMM0_Dd_01;
                    auVar37._8_4_ = extraout_XMM0_Dc_01;
                    auVar37._0_8_ = auVar35._0_8_;
                    auVar37._12_4_ = extraout_XMM0_Dd_01;
                    if (g_data_057a6845 == '\0') {
                      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                      g_data_057a6845 = '\x01';
                      auVar35 = auVar37;
                    }
                    plVar24 = (long *)TypeInfo_Math;
                    if ((TypeInfo_Math->fields)._stepPhase == 0) {
                      il2cpp_runtime_helper_02337ed0();
                      auVar35 = auVar37;
                    }
                    fVar28 = fVar29 * fVar29 + auVar35._4_4_ * auVar35._4_4_ + auVar35._0_4_ * auVar35._0_4_;
                    if (fVar28 < 0.0) {
                      fVar28 = sqrtf(fVar28);
                      uVar30 = extraout_XMM0_Dc_04;
                      uVar31 = extraout_XMM0_Dd_04;
                      if (1e-05 < fVar28) goto label_042b84aa;
label_042b84c6:
                      if (g_data_057a65d5 == '\0') {
                        plVar24 = &TypeInfo_Vector3;
                        il2cpp_runtime_helper_023445d0();
                        g_data_057a65d5 = '\x01';
                      }
                      uVar23 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
                      fVar29 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
                      pOVar3 = (__this->fields).OutlineComponent;
                    }
                    else {
                      fVar28 = SQRT(fVar28);
                      auVar37 = auVar35;
                      if (fVar28 <= 1e-05) goto label_042b84c6;
label_042b84aa:
                      fVar29 = fVar29 / fVar28;
                      auVar10._4_4_ = fVar28;
                      auVar10._0_4_ = fVar28;
                      auVar10._8_4_ = uVar30;
                      auVar10._12_4_ = uVar31;
                      auVar37 = divps(auVar37,auVar10);
                      uVar23 = auVar37._0_8_;
                      pOVar3 = (__this->fields).OutlineComponent;
                    }
                    if (((pOVar3 != (Outline_o *)0x0) &&
                        (pUVar4 = pOVar3[2].fields.outlineMaskAndFillMaterial,
                        pUVar4 != (UnityEngine_Material_o *)0x0)) &&
                       (lVar19 = *(long *)&(__this->fields).Dead, lVar19 != 0)) {
                      pUVar5 = *(UnityEngine_Rigidbody_o **)(lVar19 + 0x18);
                      plVar24 = (long *)0x0;
                      if (pUVar5 != (UnityEngine_Rigidbody_o *)0x0) {
                        fVar28 = *(float *)((long)&pUVar4[2].klass + 4);
                        UVar46 = UnityEngine_Rigidbody__get_velocity(pUVar5,(MethodInfo *)0x0);
                        if (g_data_057a6841 == '\0') {
                          il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                          g_data_057a6841 = '\x01';
                        }
                        if ((TypeInfo_Math->fields)._stepPhase == 0) {
                          il2cpp_runtime_helper_02337ed0();
                        }
                        fVar32 = UVar46.fields.z * UVar46.fields.z +
                                 UVar46.fields.y * UVar46.fields.y + UVar46.fields.x * UVar46.fields.x;
                        if (fVar32 < 0.0) {
                          fVar32 = sqrtf(fVar32);
                        }
                        else {
                          fVar32 = SQRT(fVar32);
                        }
                        fStack_78 = (float)uVar23;
                        fStack_74 = (float)((ulong)uVar23 >> 0x20);
                        if (fVar32 * 0.5 <= fVar28) {
                          fVar28 = fVar32 * 0.5;
                        }
                        fVar32 = -(fStack_78 * fVar28);
                        fVar26 = -(fStack_74 * fVar28);
                        fVar29 = -(fVar29 * fVar28);
                        iVar15 = 5;
                        goto label_042b86a3;
                      }
                    }
                  }
                }
                else {
                  if (g_data_057a6844 == '\0') {
                    plVar24 = &TypeInfo_Vector3;
                    il2cpp_runtime_helper_023445d0();
                    g_data_057a6844 = '\x01';
                    lVar19._0_4_ = (__this->fields).Dead;
                    lVar19._4_4_ = (__this->fields).CustomDamageEnabled;
                  }
                  if ((lVar19 != 0) &&
                     (plVar24 = *(long **)(lVar19 + 0x18),
                     (Characters_Horse_o *)plVar24 != (Characters_Horse_o *)0x0)) {
                    uVar23 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
                    fVar29 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
                    UVar46 = UnityEngine_Rigidbody__get_velocity
                                       ((UnityEngine_Rigidbody_o *)plVar24,(MethodInfo *)0x0);
                    fVar28 = UVar46.fields.y;
                    if (unaff_R14 != (Characters_Horse_o *)0x0) {
                      fStack_78 = (float)uVar23;
                      fStack_74 = (float)((ulong)uVar23 >> 0x20);
                      UVar46.fields.y = fStack_74 * fVar28;
                      UVar46.fields.x = fStack_78 * fVar28;
                      UVar46.fields.z = fVar29 * fVar28;
                      plVar24 = (long *)unaff_R14;
                      UnityEngine_Rigidbody__set_velocity
                                ((UnityEngine_Rigidbody_o *)unaff_R14,UVar46,(MethodInfo *)0x0);
                      goto joined_r0x042b81df;
                    }
                  }
                }
              }
            }
          }
        }
        else {
          pOVar3 = (__this->fields).OutlineComponent;
          if ((pOVar3 != (Outline_o *)0x0) &&
             (pUVar4 = pOVar3[2].fields.outlineMaskAndFillMaterial, pUVar4 != (UnityEngine_Material_o *)0x0))
          {
            if (uVar2 == 1) {
              ppCVar16 = (Characters_Human_o **)((long)&(__this->fields)._owner + 4);
              lVar12._0_4_ = (__this->fields).Dead;
              lVar12._4_4_ = (__this->fields).CustomDamageEnabled;
            }
            else if (uVar2 == 5) {
              ppCVar16 = &(__this->fields)._owner;
              lVar12._0_4_ = (__this->fields).Dead;
              lVar12._4_4_ = (__this->fields).CustomDamageEnabled;
            }
            else {
              ppCVar16 = (Characters_Human_o **)((long)&pUVar4[2].klass + 4);
              lVar12._0_4_ = (__this->fields).Dead;
              lVar12._4_4_ = (__this->fields).CustomDamageEnabled;
            }
            if ((lVar12 != 0) &&
               (plVar24 = *(long **)(lVar12 + 0x10),
               (Characters_Horse_o *)plVar24 != (Characters_Horse_o *)0x0)) {
              fVar29 = *(float *)ppCVar16;
              unaff_R14 = *(Characters_Horse_o **)(lVar12 + 0x18);
              UVar46 = UnityEngine_Transform__get_forward
                                 ((UnityEngine_Transform_o *)plVar24,(MethodInfo *)0x0);
              pOVar3 = (__this->fields).OutlineComponent;
              if ((pOVar3 != (Outline_o *)0x0) &&
                 ((pUVar4 = pOVar3[2].fields.outlineMaskAndFillMaterial,
                  pUVar4 != (UnityEngine_Material_o *)0x0 && (unaff_R14 != (Characters_Horse_o *)0x0)))) {
                fVar28 = *(float *)((long)&pUVar4[2].klass + 4);
                force.fields.z = UVar46.fields.z * fVar28;
                force.fields.x = UVar46.fields.x * fVar28;
                force.fields.y = UVar46.fields.y * fVar28;
                plVar24 = (long *)unaff_R14;
                UnityEngine_Rigidbody__AddForce
                          ((UnityEngine_Rigidbody_o *)unaff_R14,force,5,(MethodInfo *)0x0);
                lVar19 = *(long *)&(__this->fields).Dead;
                if (lVar19 != 0) {
                  pUVar5 = *(UnityEngine_Rigidbody_o **)(lVar19 + 0x18);
                  plVar24 = (long *)(Characters_Horse_o *)0x0;
                  if (pUVar5 != (UnityEngine_Rigidbody_o *)0x0) {
                    UVar46 = UnityEngine_Rigidbody__get_velocity(pUVar5,(MethodInfo *)0x0);
                    if (g_data_057a6841 == '\0') {
                      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                      in_XMM1_Dc = 0;
                      in_XMM1_Dd = 0;
                      g_data_057a6841 = '\x01';
                    }
                    unaff_RBX = &TypeInfo_Math;
                    plVar24 = (long *)TypeInfo_Math;
                    if ((TypeInfo_Math->fields)._stepPhase == 0) {
                      il2cpp_runtime_helper_02337ed0();
                      in_XMM1_Dc = 0;
                      in_XMM1_Dd = 0;
                    }
                    fVar28 = UVar46.fields.z * UVar46.fields.z +
                             UVar46.fields.y * UVar46.fields.y + UVar46.fields.x * UVar46.fields.x;
                    if (0.0 <= fVar28) {
                      fVar28 = SQRT(fVar28);
                    }
                    else {
                      fVar28 = sqrtf(fVar28);
                    }
                    if (fVar28 < fVar29) goto joined_r0x042b81df;
                    lVar19 = *(long *)&(__this->fields).Dead;
                    if ((lVar19 == 0) ||
                       (plVar24 = *(long **)(lVar19 + 0x18),
                       (Characters_Horse_o *)plVar24 == (Characters_Horse_o *)0x0)) goto label_042b8a35;
                    UnityEngine_Rigidbody__set_angularDrag
                              ((UnityEngine_Rigidbody_o *)plVar24,1.0,(MethodInfo *)0x0);
                    pOVar3 = (__this->fields).OutlineComponent;
                    if ((pOVar3 == (Outline_o *)0x0) ||
                       (((pUVar4 = pOVar3[2].fields.outlineMaskAndFillMaterial,
                         pUVar4 == (UnityEngine_Material_o *)0x0 ||
                         (lVar19 = *(long *)&(__this->fields).Dead, lVar19 == 0)) ||
                        (unaff_R14 = *(Characters_Horse_o **)(lVar19 + 0x18),
                        unaff_R14 == (Characters_Horse_o *)0x0)))) goto label_042b8a35;
                    fVar28 = *(float *)((long)&pUVar4[2].klass + 4);
                    UVar46 = UnityEngine_Rigidbody__get_velocity
                                       ((UnityEngine_Rigidbody_o *)unaff_R14,(MethodInfo *)0x0);
                    if (g_data_057a6841 == '\0') {
                      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                      in_XMM1_Dc = 0;
                      in_XMM1_Dd = 0;
                      g_data_057a6841 = '\x01';
                    }
                    plVar24 = (long *)TypeInfo_Math;
                    if ((TypeInfo_Math->fields)._stepPhase == 0) {
                      il2cpp_runtime_helper_02337ed0();
                      in_XMM1_Dc = 0;
                      in_XMM1_Dd = 0;
                    }
                    fVar32 = UVar46.fields.z * UVar46.fields.z +
                             UVar46.fields.y * UVar46.fields.y + UVar46.fields.x * UVar46.fields.x;
                    if (fVar32 < 0.0) {
                      fVar32 = sqrtf(fVar32);
                      in_XMM1_Dc = extraout_XMM0_Dc;
                      in_XMM1_Dd = extraout_XMM0_Dd;
                    }
                    else {
                      fVar32 = SQRT(fVar32);
                    }
                    if ((fVar29 != fVar28) || (NAN(fVar29) || NAN(fVar28))) {
                      lVar19 = *(long *)&(__this->fields).Dead;
                      if (lVar19 != 0) {
                        pUVar5 = *(UnityEngine_Rigidbody_o **)(lVar19 + 0x18);
                        plVar24 = (long *)0x0;
                        if (pUVar5 != (UnityEngine_Rigidbody_o *)0x0) {
                          UVar46 = UnityEngine_Rigidbody__get_velocity(pUVar5,(MethodInfo *)0x0);
                          fVar28 = UVar46.fields.z;
                          auVar39._0_8_ = UVar46.fields._0_8_;
                          auVar39._8_4_ = extraout_XMM0_Dc_02;
                          auVar39._12_4_ = extraout_XMM0_Dd_02;
                          auVar40._8_4_ = extraout_XMM0_Dc_02;
                          auVar40._0_8_ = auVar39._0_8_;
                          auVar40._12_4_ = extraout_XMM0_Dd_02;
                          if (g_data_057a6845 == '\0') {
                            il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                            in_XMM1_Dc = 0;
                            in_XMM1_Dd = 0;
                            g_data_057a6845 = '\x01';
                            auVar39 = auVar40;
                          }
                          if ((TypeInfo_Math->fields)._stepPhase == 0) {
                            il2cpp_runtime_helper_02337ed0();
                            in_XMM1_Dc = 0;
                            in_XMM1_Dd = 0;
                            auVar39 = auVar40;
                          }
                          fVar29 = fVar29 - fVar32;
                          fVar32 = fVar28 * fVar28 +
                                   auVar39._4_4_ * auVar39._4_4_ + auVar39._0_4_ * auVar39._0_4_;
                          if (fVar32 < 0.0) {
                            fVar32 = sqrtf(fVar32);
                            in_XMM1_Dc = extraout_XMM0_Dc_05;
                            in_XMM1_Dd = extraout_XMM0_Dd_05;
                          }
                          else {
                            fVar32 = SQRT(fVar32);
                            auVar40 = auVar39;
                          }
                          if (fVar29 <= -1.0) {
                            fVar29 = -1.0;
                          }
                          if (fVar32 <= 1e-05) {
                            if (g_data_057a65d5 == '\0') {
                              il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
                              g_data_057a65d5 = '\x01';
                            }
                            uVar23 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
                            fVar28 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
                          }
                          else {
                            fVar28 = fVar28 / fVar32;
                            auVar9._4_4_ = fVar32;
                            auVar9._0_4_ = fVar32;
                            auVar9._8_4_ = in_XMM1_Dc;
                            auVar9._12_4_ = in_XMM1_Dd;
                            auVar37 = divps(auVar40,auVar9);
                            uVar23 = auVar37._0_8_;
                          }
                          fVar32 = fVar29 * (float)uVar23;
                          fVar26 = fVar29 * (float)((ulong)uVar23 >> 0x20);
                          fVar29 = fVar28 * fVar29;
                          goto label_042b869e;
                        }
                      }
                      goto label_042b8a35;
                    }
                    lVar19 = *(long *)&(__this->fields).Dead;
                    if (lVar19 == 0) goto label_042b8a35;
                    pUVar5 = *(UnityEngine_Rigidbody_o **)(lVar19 + 0x18);
                    plVar24 = (long *)0x0;
                    if (pUVar5 == (UnityEngine_Rigidbody_o *)0x0) goto label_042b8a35;
                    UVar46 = UnityEngine_Rigidbody__get_velocity(pUVar5,(MethodInfo *)0x0);
                    fVar28 = UVar46.fields.z;
                    auVar34._0_8_ = UVar46.fields._0_8_;
                    auVar34._8_4_ = extraout_XMM0_Dc_00;
                    auVar34._12_4_ = extraout_XMM0_Dd_00;
                    auVar36._8_4_ = extraout_XMM0_Dc_00;
                    auVar36._0_8_ = auVar34._0_8_;
                    auVar36._12_4_ = extraout_XMM0_Dd_00;
                    if (g_data_057a6845 == '\0') {
                      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                      in_XMM1_Dc = 0;
                      in_XMM1_Dd = 0;
                      g_data_057a6845 = '\x01';
                      auVar34 = auVar36;
                    }
                    if ((TypeInfo_Math->fields)._stepPhase == 0) {
                      il2cpp_runtime_helper_02337ed0();
                      in_XMM1_Dc = 0;
                      in_XMM1_Dd = 0;
                      auVar34 = auVar36;
                    }
                    fVar26 = fVar28 * fVar28 + auVar34._4_4_ * auVar34._4_4_ + auVar34._0_4_ * auVar34._0_4_;
                    if (fVar26 < 0.0) {
                      fVar26 = sqrtf(fVar26);
                      in_XMM1_Dc = extraout_XMM0_Dc_03;
                      in_XMM1_Dd = extraout_XMM0_Dd_03;
                      if (1e-05 < fVar26) goto label_042b8430;
label_042b843d:
                      if (g_data_057a65d5 == '\0') {
                        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
                        g_data_057a65d5 = '\x01';
                      }
                      uVar23 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
                      fVar28 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
                    }
                    else {
                      fVar26 = SQRT(fVar26);
                      auVar36 = auVar34;
                      if (fVar26 <= 1e-05) goto label_042b843d;
label_042b8430:
                      fVar28 = fVar28 / fVar26;
                      auVar8._4_4_ = fVar26;
                      auVar8._0_4_ = fVar26;
                      auVar8._8_4_ = in_XMM1_Dc;
                      auVar8._12_4_ = in_XMM1_Dd;
                      auVar37 = divps(auVar36,auVar8);
                      uVar23 = auVar37._0_8_;
                    }
                    fVar29 = fVar29 - fVar32;
                    fVar32 = fVar29 * (float)uVar23;
                    fVar26 = fVar29 * (float)((ulong)uVar23 >> 0x20);
                    fVar29 = fVar29 * fVar28;
label_042b869e:
                    iVar15 = 2;
label_042b86a3:
                    unaff_RBX = &TypeInfo_Math;
                    force_00.fields.y = fVar26;
                    force_00.fields.x = fVar32;
                    force_00.fields.z = fVar29;
                    plVar24 = (long *)unaff_R14;
                    UnityEngine_Rigidbody__AddForce
                              ((UnityEngine_Rigidbody_o *)unaff_R14,force_00,iVar15,(MethodInfo *)0x0);
                    goto joined_r0x042b81df;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
label_042b8a35:
  il2cpp_runtime_helper_022b2c90();
  pCStack_a0 = (Characters_Horse_o *)unaff_RBX;
  if (g_data_057addce == '\0') {
    ppCStack_c8 = (Characters_Horse_o **)0x42b8a64;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HorseAnimations);
    ppCStack_c8 = (Characters_Horse_o **)0x42b8a70;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HorseSounds);
    ppCStack_c8 = (Characters_Horse_o **)0x42b8a7c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    ppCStack_c8 = (Characters_Horse_o **)0x42b8a88;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    ppCStack_c8 = (Characters_Horse_o **)0x42b8a94;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    ppCStack_c8 = (Characters_Horse_o **)0x42b8aa0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    g_data_057addce = '\x01';
  }
  ppCStack_c8 = (Characters_Horse_o **)0x42b8abb;
  (*(((Characters_Horse_o *)plVar24)->klass->vtable)._104_LateUpdateFootstep.methodPtr)
            (plVar24,(((Characters_Horse_o *)plVar24)->klass->vtable)._104_LateUpdateFootstep.method);
  method_00 = (Characters_Horse_o *)(((Characters_Horse_o *)plVar24)->klass->vtable)._105_LateUpdateFPS.method
  ;
  ppCStack_c8 = (Characters_Horse_o **)0x42b8acf;
  __this_00.fields.m_ParticleSystem =
       (UnityEngine_ParticleSystem_EmissionModule_Fields)
       (UnityEngine_ParticleSystem_EmissionModule_Fields)plVar24;
  (*(((Characters_Horse_o *)plVar24)->klass->vtable)._105_LateUpdateFPS.methodPtr)();
  lVar19 = *(long *)&(((Characters_Horse_o *)plVar24)->fields).Dead;
  if ((lVar19 == 0) || (lVar19 = *(long *)(lVar19 + 0x20), lVar19 == 0)) goto label_042b9203;
  if (*(char *)(lVar19 + 0x68) != '\0') {
    unaff_RBX = (Characters_Horse_o **)(((Characters_Horse_o *)plVar24)->fields).OutlineComponent;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      ppCStack_c8 = (Characters_Horse_o **)0x42b8b14;
      il2cpp_runtime_helper_02337ed0();
    }
    method_00 = (Characters_Horse_o *)0x0;
    ppCStack_c8 = (Characters_Horse_o **)0x42b8b20;
    __this_00.fields.m_ParticleSystem =
         (UnityEngine_ParticleSystem_EmissionModule_Fields)
         (UnityEngine_ParticleSystem_EmissionModule_Fields)unaff_RBX;
    bVar14 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar14 != '\0') {
      return;
    }
    pOVar3 = (((Characters_Horse_o *)plVar24)->fields).OutlineComponent;
    if (pOVar3 == (Outline_o *)0x0) goto label_042b9203;
    if (*(char *)&(pOVar3->fields)._namesToIgnore != '\0') {
      return;
    }
    lVar19 = *(long *)&(((Characters_Horse_o *)plVar24)->fields).Dead;
    if (lVar19 == 0) goto label_042b9203;
    pUVar5 = *(UnityEngine_Rigidbody_o **)(lVar19 + 0x18);
    __this_00.fields.m_ParticleSystem =
         (UnityEngine_ParticleSystem_EmissionModule_Fields)
         (UnityEngine_ParticleSystem_EmissionModule_Fields)(Characters_Horse_o *)0x0;
    if (pUVar5 == (UnityEngine_Rigidbody_o *)0x0) goto label_042b9203;
    uVar2 = *(uint *)&pOVar3[3].monitor;
    unaff_RBP = (Characters_Horse_o **)(ulong)uVar2;
    method_00 = (Characters_Horse_o *)0x0;
    ppCStack_c8 = (Characters_Horse_o **)0x42b8b6b;
    UVar46 = UnityEngine_Rigidbody__get_velocity(pUVar5,(MethodInfo *)0x0);
    fVar29 = UVar46.fields.x;
    fVar28 = UVar46.fields.y;
    uVar30 = extraout_XMM0_Dc_06;
    uVar31 = extraout_XMM0_Dd_06;
    fVar32 = UVar46.fields.z;
    if (g_data_057a6841 == '\0') {
      uStack_a8 = extraout_XMM0_Dc_06;
      auStack_b0 = (undefined1  [8])UVar46.fields._0_8_;
      uStack_a4 = extraout_XMM0_Dd_06;
      ppCStack_c8 = (Characters_Horse_o **)0x42b8b8b;
      fStack_bc = UVar46.fields.z;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a6841 = '\x01';
      fVar29 = (float)auStack_b0._0_4_;
      fVar28 = (float)auStack_b0._4_4_;
      uVar30 = uStack_a8;
      uVar31 = uStack_a4;
      fVar32 = fStack_bc;
    }
    unaff_RBX = &TypeInfo_Math;
    __this_00.fields.m_ParticleSystem =
         (UnityEngine_ParticleSystem_EmissionModule_Fields)
         (UnityEngine_ParticleSystem_EmissionModule_Fields)TypeInfo_Math;
    if ((TypeInfo_Math->fields)._stepPhase == 0) {
      auStack_b0._4_4_ = fVar28;
      auStack_b0._0_4_ = fVar29;
      uStack_a8 = uVar30;
      uStack_a4 = uVar31;
      ppCStack_c8 = (Characters_Horse_o **)0x42b8bc0;
      fStack_bc = fVar32;
      il2cpp_runtime_helper_02337ed0();
      fVar29 = (float)auStack_b0._0_4_;
      fVar28 = (float)auStack_b0._4_4_;
      fVar32 = fStack_bc;
    }
    fVar29 = fVar32 * fVar32 + fVar28 * fVar28 + fVar29 * fVar29;
    if (fVar29 < 0.0) {
      ppCStack_c8 = (Characters_Horse_o **)0x42b8d4d;
      fVar29 = sqrtf(fVar29);
      if (8.0 < fVar29) goto label_042b8d5a;
label_042b8c01:
      lVar19 = *(long *)&(((Characters_Horse_o *)plVar24)->fields).Dead;
      if (lVar19 == 0) goto label_042b9203;
      pUVar5 = *(UnityEngine_Rigidbody_o **)(lVar19 + 0x18);
      __this_00.fields.m_ParticleSystem =
           (UnityEngine_ParticleSystem_EmissionModule_Fields)
           (UnityEngine_ParticleSystem_EmissionModule_Fields)(Characters_Horse_o *)0x0;
      if (pUVar5 == (UnityEngine_Rigidbody_o *)0x0) goto label_042b9203;
      method_00 = (Characters_Horse_o *)0x0;
      ppCStack_c8 = (Characters_Horse_o **)0x42b8c23;
      UVar46 = UnityEngine_Rigidbody__get_velocity(pUVar5,(MethodInfo *)0x0);
      fVar29 = UVar46.fields.x;
      fVar28 = UVar46.fields.y;
      uVar30 = extraout_XMM0_Dc_07;
      uVar31 = extraout_XMM0_Dd_07;
      fVar32 = UVar46.fields.z;
      if (g_data_057a6841 == '\0') {
        uStack_a8 = extraout_XMM0_Dc_07;
        auStack_b0 = (undefined1  [8])UVar46.fields._0_8_;
        uStack_a4 = extraout_XMM0_Dd_07;
        ppCStack_c8 = (Characters_Horse_o **)0x42b8c43;
        fStack_bc = UVar46.fields.z;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
        g_data_057a6841 = '\x01';
        fVar29 = (float)auStack_b0._0_4_;
        fVar28 = (float)auStack_b0._4_4_;
        uVar30 = uStack_a8;
        uVar31 = uStack_a4;
        fVar32 = fStack_bc;
      }
      if ((TypeInfo_Math->fields)._stepPhase == 0) {
        auStack_b0._4_4_ = fVar28;
        auStack_b0._0_4_ = fVar29;
        uStack_a8 = uVar30;
        uStack_a4 = uVar31;
        ppCStack_c8 = (Characters_Horse_o **)0x42b8c71;
        fStack_bc = fVar32;
        il2cpp_runtime_helper_02337ed0();
        fVar29 = (float)auStack_b0._0_4_;
        fVar28 = (float)auStack_b0._4_4_;
        fVar32 = fStack_bc;
      }
      fVar29 = fVar32 * fVar32 + fVar28 * fVar28 + fVar29 * fVar29;
      if (0.0 <= fVar29) {
        fVar29 = SQRT(fVar29);
      }
      else {
        ppCStack_c8 = (Characters_Horse_o **)0x42b8e4d;
        fVar29 = sqrtf(fVar29);
      }
      if (fVar29 <= 1.0) {
        ppCStack_c8 = (Characters_Horse_o **)0x42b8cba;
        __this_00.fields.m_ParticleSystem =
             (UnityEngine_ParticleSystem_EmissionModule_Fields)
             (UnityEngine_ParticleSystem_EmissionModule_Fields)plVar24;
        Characters_Horse__UpdateIdle((Characters_Horse_o *)plVar24,(MethodInfo *)method_00);
        unaff_R14 = (Characters_Horse_o *)(((Characters_Horse_o *)plVar24)->fields).OutlineComponent;
        if (unaff_R14 == (Characters_Horse_o *)0x0) goto label_042b9203;
        if ((uVar2 == 0) && ((unaff_R14->fields).State == 1)) {
          unaff_RBX = &TypeInfo_HumanAnimations;
          if ((TypeInfo_HumanAnimations->fields)._stepPhase == 0) {
            ppCStack_c8 = (Characters_Horse_o **)0x42b8cf9;
            il2cpp_runtime_helper_02337ed0();
          }
          lVar19 = *(long *)&(unaff_R14->fields)._cameraFPS;
          __this_00.fields.m_ParticleSystem =
               (UnityEngine_ParticleSystem_EmissionModule_Fields)
               (UnityEngine_ParticleSystem_EmissionModule_Fields)TypeInfo_HumanAnimations;
          if (lVar19 == 0) goto label_042b9203;
          pCVar22 = (Characters_Horse_o *)(((TypeInfo_HumanAnimations->fields).MovementSync)->fields).m_CachedPtr;
          if (*(char *)(lVar19 + 0x3c) == '\0') {
            ppCStack_c8 = (Characters_Horse_o **)0x42b91e0;
            method_00 = pCVar22;
            bVar14 = System_String__op_Equality
                               (*(System_String_o **)(lVar19 + 0x30),(System_String_o *)pCVar22,
                                (MethodInfo *)0x0);
            cVar13 = (char)bVar14;
            pMVar20 = extraout_RDX_06;
          }
          else {
            __this_00.fields.m_ParticleSystem =
                 (UnityEngine_ParticleSystem_EmissionModule_Fields)
                 (UnityEngine_ParticleSystem_EmissionModule_Fields)(Characters_Horse_o *)0x0;
            if (*(UnityEngine_Animation_o **)(lVar19 + 0x10) == (UnityEngine_Animation_o *)0x0)
            goto label_042b9203;
            ppCStack_c8 = (Characters_Horse_o **)0x42b8d38;
            method_00 = pCVar22;
            bVar14 = UnityEngine_Animation__IsPlaying
                               (*(UnityEngine_Animation_o **)(lVar19 + 0x10),(System_String_o *)pCVar22,
                                (MethodInfo *)0x0);
            cVar13 = (char)bVar14;
            pMVar20 = extraout_RDX;
          }
          if (cVar13 == '\0') {
            ppCStack_c8 = (Characters_Horse_o **)0x42b91fe;
            Characters_BaseCharacter__CrossFade
                      ((Characters_BaseCharacter_o *)unaff_R14,(System_String_o *)pCVar22,0.1,0.0,pMVar20);
            method_00 = pCVar22;
          }
        }
        goto label_042b8f68;
      }
      unaff_RBX = &TypeInfo_HorseAnimations;
      if ((TypeInfo_HorseAnimations->fields)._stepPhase == 0) {
        ppCStack_c8 = (Characters_Horse_o **)0x42b8e72;
        il2cpp_runtime_helper_02337ed0();
      }
      lVar19 = *(long *)&(((Characters_Horse_o *)plVar24)->fields)._cameraFPS;
      __this_00.fields.m_ParticleSystem =
           (UnityEngine_ParticleSystem_EmissionModule_Fields)
           (UnityEngine_ParticleSystem_EmissionModule_Fields)TypeInfo_HorseAnimations;
      if (lVar19 == 0) goto label_042b9203;
      unaff_R14 = *(Characters_Horse_o **)
                   &(((TypeInfo_HorseAnimations->fields).MovementSync)->fields)._correctPosition.fields.y;
      if (*(char *)(lVar19 + 0x3c) == '\0') {
        __this_00.fields.m_ParticleSystem =
             *(UnityEngine_ParticleSystem_EmissionModule_Fields *)(lVar19 + 0x30);
        ppCStack_c8 = (Characters_Horse_o **)0x42b91c5;
        method_00 = unaff_R14;
        bVar14 = System_String__op_Equality
                           ((System_String_o *)__this_00.fields.m_ParticleSystem,(System_String_o *)unaff_R14,
                            (MethodInfo *)0x0);
        cVar13 = (char)bVar14;
        pMVar20 = extraout_RDX_05;
      }
      else {
        __this_00.fields.m_ParticleSystem =
             *(UnityEngine_ParticleSystem_EmissionModule_Fields *)(lVar19 + 0x10);
        if (__this_00.fields.m_ParticleSystem == (UnityEngine_ParticleSystem_o *)0x0) goto label_042b9203;
        ppCStack_c8 = (Characters_Horse_o **)0x42b8eb2;
        method_00 = unaff_R14;
        bVar14 = UnityEngine_Animation__IsPlaying
                           ((UnityEngine_Animation_o *)__this_00.fields.m_ParticleSystem,
                            (System_String_o *)unaff_R14,(MethodInfo *)0x0);
        cVar13 = (char)bVar14;
        pMVar20 = extraout_RDX_01;
      }
      if (cVar13 == '\0') {
        ppCStack_c8 = (Characters_Horse_o **)0x42b8ecc;
        __this_00.fields.m_ParticleSystem =
             (UnityEngine_ParticleSystem_EmissionModule_Fields)
             (UnityEngine_ParticleSystem_EmissionModule_Fields)plVar24;
        Characters_BaseCharacter__CrossFade
                  ((Characters_BaseCharacter_o *)plVar24,(System_String_o *)unaff_R14,0.1,0.0,pMVar20);
        method_00 = unaff_R14;
      }
      unaff_R14 = (Characters_Horse_o *)(((Characters_Horse_o *)plVar24)->fields).OutlineComponent;
      if (unaff_R14 == (Characters_Horse_o *)0x0) goto label_042b9203;
      if ((uVar2 == 0) && ((unaff_R14->fields).State == 1)) {
        unaff_RBX = &TypeInfo_HumanAnimations;
        if ((TypeInfo_HumanAnimations->fields)._stepPhase == 0) {
          ppCStack_c8 = (Characters_Horse_o **)0x42b8f03;
          il2cpp_runtime_helper_02337ed0();
        }
        lVar19 = *(long *)&(unaff_R14->fields)._cameraFPS;
        __this_00.fields.m_ParticleSystem =
             (UnityEngine_ParticleSystem_EmissionModule_Fields)
             (UnityEngine_ParticleSystem_EmissionModule_Fields)TypeInfo_HumanAnimations;
        if (lVar19 == 0) goto label_042b9203;
        pCVar22 = (Characters_Horse_o *)(((TypeInfo_HumanAnimations->fields).MovementSync)->fields).m_CachedPtr;
        if (*(char *)(lVar19 + 0x3c) == '\0') goto label_042b919c;
        __this_01 = *(UnityEngine_Animation_o **)(lVar19 + 0x10);
        __this_00.fields.m_ParticleSystem =
             (UnityEngine_ParticleSystem_EmissionModule_Fields)
             (UnityEngine_ParticleSystem_EmissionModule_Fields)(Characters_Horse_o *)0x0;
        if (__this_01 == (UnityEngine_Animation_o *)0x0) goto label_042b9203;
label_042b8f38:
        ppCStack_c8 = (Characters_Horse_o **)0x42b8f42;
        method_00 = pCVar22;
        bVar14 = UnityEngine_Animation__IsPlaying(__this_01,(System_String_o *)pCVar22,(MethodInfo *)0x0);
        cVar13 = (char)bVar14;
        pMVar20 = extraout_RDX_02;
        goto joined_r0x042b8f44;
      }
    }
    else {
      if (SQRT(fVar29) <= 8.0) goto label_042b8c01;
label_042b8d5a:
      unaff_RBX = &TypeInfo_HorseAnimations;
      if ((TypeInfo_HorseAnimations->fields)._stepPhase == 0) {
        ppCStack_c8 = (Characters_Horse_o **)0x42b8d72;
        il2cpp_runtime_helper_02337ed0();
      }
      lVar19 = *(long *)&(((Characters_Horse_o *)plVar24)->fields)._cameraFPS;
      __this_00.fields.m_ParticleSystem =
           (UnityEngine_ParticleSystem_EmissionModule_Fields)
           (UnityEngine_ParticleSystem_EmissionModule_Fields)TypeInfo_HorseAnimations;
      if (lVar19 == 0) goto label_042b9203;
      unaff_R14 = *(Characters_Horse_o **)&(((TypeInfo_HorseAnimations->fields).MovementSync)->fields).Disabled;
      if (*(char *)(lVar19 + 0x3c) == '\0') {
        __this_00.fields.m_ParticleSystem =
             *(UnityEngine_ParticleSystem_EmissionModule_Fields *)(lVar19 + 0x30);
        ppCStack_c8 = (Characters_Horse_o **)0x42b918f;
        method_00 = unaff_R14;
        bVar14 = System_String__op_Equality
                           ((System_String_o *)__this_00.fields.m_ParticleSystem,(System_String_o *)unaff_R14,
                            (MethodInfo *)0x0);
        cVar13 = (char)bVar14;
        pMVar20 = extraout_RDX_03;
      }
      else {
        __this_00.fields.m_ParticleSystem =
             *(UnityEngine_ParticleSystem_EmissionModule_Fields *)(lVar19 + 0x10);
        if (__this_00.fields.m_ParticleSystem == (UnityEngine_ParticleSystem_o *)0x0) goto label_042b9203;
        ppCStack_c8 = (Characters_Horse_o **)0x42b8db2;
        method_00 = unaff_R14;
        bVar14 = UnityEngine_Animation__IsPlaying
                           ((UnityEngine_Animation_o *)__this_00.fields.m_ParticleSystem,
                            (System_String_o *)unaff_R14,(MethodInfo *)0x0);
        cVar13 = (char)bVar14;
        pMVar20 = extraout_RDX_00;
      }
      if (cVar13 == '\0') {
        ppCStack_c8 = (Characters_Horse_o **)0x42b8dcc;
        __this_00.fields.m_ParticleSystem =
             (UnityEngine_ParticleSystem_EmissionModule_Fields)
             (UnityEngine_ParticleSystem_EmissionModule_Fields)plVar24;
        Characters_BaseCharacter__CrossFade
                  ((Characters_BaseCharacter_o *)plVar24,(System_String_o *)unaff_R14,0.1,0.0,pMVar20);
        method_00 = unaff_R14;
      }
      unaff_R14 = (Characters_Horse_o *)(((Characters_Horse_o *)plVar24)->fields).OutlineComponent;
      if (unaff_R14 == (Characters_Horse_o *)0x0) goto label_042b9203;
      if ((uVar2 == 0) && ((unaff_R14->fields).State == 1)) {
        unaff_RBX = &TypeInfo_HumanAnimations;
        if ((TypeInfo_HumanAnimations->fields)._stepPhase == 0) {
          ppCStack_c8 = (Characters_Horse_o **)0x42b8e0b;
          il2cpp_runtime_helper_02337ed0();
        }
        lVar19 = *(long *)&(unaff_R14->fields)._cameraFPS;
        __this_00.fields.m_ParticleSystem =
             (UnityEngine_ParticleSystem_EmissionModule_Fields)
             (UnityEngine_ParticleSystem_EmissionModule_Fields)TypeInfo_HumanAnimations;
        if (lVar19 == 0) goto label_042b9203;
        pCVar22 = (Characters_Horse_o *)
                  (((TypeInfo_HumanAnimations->fields).MovementSync)->fields).m_CancellationTokenSource;
        if (*(char *)(lVar19 + 0x3c) != '\0') {
          __this_01 = *(UnityEngine_Animation_o **)(lVar19 + 0x10);
          if (__this_01 == (UnityEngine_Animation_o *)0x0) {
            __this_00.fields.m_ParticleSystem =
                 (UnityEngine_ParticleSystem_EmissionModule_Fields)(UnityEngine_ParticleSystem_o *)0x0;
            goto label_042b9203;
          }
          goto label_042b8f38;
        }
label_042b919c:
        ppCStack_c8 = (Characters_Horse_o **)0x42b91aa;
        method_00 = pCVar22;
        bVar14 = System_String__op_Equality
                           (*(System_String_o **)(lVar19 + 0x30),(System_String_o *)pCVar22,(MethodInfo *)0x0)
        ;
        cVar13 = (char)bVar14;
        pMVar20 = extraout_RDX_04;
joined_r0x042b8f44:
        if (cVar13 == '\0') {
          ppCStack_c8 = (Characters_Horse_o **)0x42b8f5c;
          Characters_BaseCharacter__CrossFade
                    ((Characters_BaseCharacter_o *)unaff_R14,(System_String_o *)pCVar22,0.1,0.0,pMVar20);
          method_00 = pCVar22;
        }
      }
    }
    (((Characters_Horse_o *)plVar24)->fields).FollowingEnabled = 0;
  }
label_042b8f68:
  unaff_RBX = *(Characters_Horse_o ***)&(((Characters_Horse_o *)plVar24)->fields)._cameraFPS;
  unaff_RBP = &TypeInfo_HorseAnimations;
  if ((TypeInfo_HorseAnimations->fields)._stepPhase == 0) {
    ppCStack_c8 = (Characters_Horse_o **)0x42b8f89;
    il2cpp_runtime_helper_02337ed0();
  }
  __this_00.fields.m_ParticleSystem =
       (UnityEngine_ParticleSystem_EmissionModule_Fields)
       (UnityEngine_ParticleSystem_EmissionModule_Fields)TypeInfo_HorseAnimations;
  if ((Characters_Horse_o *)unaff_RBX != (Characters_Horse_o *)0x0) {
    method_00 = *(Characters_Horse_o **)&(((TypeInfo_HorseAnimations->fields).MovementSync)->fields).Disabled;
    if ((((Characters_Horse_o *)unaff_RBX)->fields).field_0x2c == '\0') {
      __this_00.fields.m_ParticleSystem =
           *(UnityEngine_ParticleSystem_EmissionModule_Fields *)
            &(((Characters_Horse_o *)unaff_RBX)->fields).MaxFootstepDistance;
      ppCStack_c8 = (Characters_Horse_o **)0x42b90ab;
      bVar14 = System_String__op_Equality
                         ((System_String_o *)__this_00.fields.m_ParticleSystem,(System_String_o *)method_00,
                          (MethodInfo *)0x0);
      cVar13 = (char)bVar14;
    }
    else {
      __this_00.fields.m_ParticleSystem =
           (UnityEngine_ParticleSystem_EmissionModule_Fields)
           (((Characters_Horse_o *)unaff_RBX)->fields).m_CachedPtr;
      if (__this_00.fields.m_ParticleSystem == (UnityEngine_ParticleSystem_o *)0x0) goto label_042b9203;
      ppCStack_c8 = (Characters_Horse_o **)0x42b8fbf;
      bVar14 = UnityEngine_Animation__IsPlaying
                         ((UnityEngine_Animation_o *)__this_00.fields.m_ParticleSystem,
                          (System_String_o *)method_00,(MethodInfo *)0x0);
      cVar13 = (char)bVar14;
    }
    if ((cVar13 == '\0') ||
       (*(char *)((long)&(((Characters_Horse_o *)plVar24)->fields).Animation + 4) == '\0')) {
      UStack_b8.m_ParticleSystem = (UnityEngine_ParticleSystem_o *)0x0;
      pSVar6 = (((Characters_Horse_o *)plVar24)->fields).OnPlayerPropertiesChanged;
      if (pSVar6 != (System_Action_Hashtable__o *)0x0) {
        pUVar7 = (UnityEngine_ParticleSystem_o *)(pSVar6->fields).extra_arg;
        __this_00.fields.m_ParticleSystem =
             (UnityEngine_ParticleSystem_EmissionModule_Fields)
             (UnityEngine_ParticleSystem_EmissionModule_Fields)(Characters_Horse_o *)0x0;
        if (pUVar7 != (UnityEngine_ParticleSystem_o *)0x0) {
          ppCStack_c8 = (Characters_Horse_o **)0x42b90e1;
          UStack_b8.m_ParticleSystem =
               (UnityEngine_ParticleSystem_o *)
               UnityEngine_ParticleSystem__get_emission(pUVar7,(MethodInfo *)0x0);
          __this_00.fields.m_ParticleSystem = (UnityEngine_ParticleSystem_EmissionModule_Fields)&UStack_b8;
          method_00 = (Characters_Horse_o *)0x0;
          ppCStack_c8 = (Characters_Horse_o **)0x42b90f2;
          bVar14 = UnityEngine_ParticleSystem_EmissionModule__get_enabled(__this_00,(MethodInfo *)0x0);
          if ((char)bVar14 != '\0') {
            __this_00.fields.m_ParticleSystem = (UnityEngine_ParticleSystem_EmissionModule_Fields)&UStack_b8;
            method_00 = (Characters_Horse_o *)0x0;
            ppCStack_c8 = (Characters_Horse_o **)0x42b9104;
            UnityEngine_ParticleSystem_EmissionModule__set_enabled(__this_00,0,(MethodInfo *)0x0);
          }
          lVar19 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
          if ((lVar19 != 0) && (lVar19 = *(long *)(lVar19 + 0x78), lVar19 != 0)) {
            if (*(char *)(lVar19 + 0x11) == '\0') {
              return;
            }
            if (*(int *)(TypeInfo_HorseSounds + 0xe4) == 0) {
              ppCStack_c8 = (Characters_Horse_o **)0x42b9150;
              il2cpp_runtime_helper_02337ed0();
            }
            uVar23 = *(undefined8 *)(*(long *)(TypeInfo_HorseSounds + 0xb8) + 0x18);
            pCVar18 = ((Characters_Horse_o *)plVar24)->klass;
            pMVar20 = (pCVar18->vtable)._100_ToggleSoundLocal.method;
            uVar21 = 0;
            goto label_042b916e;
          }
        }
      }
    }
    else {
      UStack_b8.m_ParticleSystem = (UnityEngine_ParticleSystem_o *)0x0;
      pSVar6 = (((Characters_Horse_o *)plVar24)->fields).OnPlayerPropertiesChanged;
      if (pSVar6 != (System_Action_Hashtable__o *)0x0) {
        pUVar7 = (UnityEngine_ParticleSystem_o *)(pSVar6->fields).extra_arg;
        __this_00.fields.m_ParticleSystem =
             (UnityEngine_ParticleSystem_EmissionModule_Fields)
             (UnityEngine_ParticleSystem_EmissionModule_Fields)(Characters_Horse_o *)0x0;
        if (pUVar7 != (UnityEngine_ParticleSystem_o *)0x0) {
          ppCStack_c8 = (Characters_Horse_o **)0x42b9004;
          UStack_b8.m_ParticleSystem =
               (UnityEngine_ParticleSystem_o *)
               UnityEngine_ParticleSystem__get_emission(pUVar7,(MethodInfo *)0x0);
          __this_00.fields.m_ParticleSystem = (UnityEngine_ParticleSystem_EmissionModule_Fields)&UStack_b8;
          method_00 = (Characters_Horse_o *)0x0;
          ppCStack_c8 = (Characters_Horse_o **)0x42b9015;
          bVar14 = UnityEngine_ParticleSystem_EmissionModule__get_enabled(__this_00,(MethodInfo *)0x0);
          if ((char)bVar14 == '\0') {
            __this_00.fields.m_ParticleSystem = (UnityEngine_ParticleSystem_EmissionModule_Fields)&UStack_b8;
            method_00 = (Characters_Horse_o *)0x1;
            ppCStack_c8 = (Characters_Horse_o **)0x42b902a;
            UnityEngine_ParticleSystem_EmissionModule__set_enabled(__this_00,1,(MethodInfo *)0x0);
          }
          lVar19 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
          if ((lVar19 != 0) && (lVar19 = *(long *)(lVar19 + 0x78), lVar19 != 0)) {
            if (*(char *)(lVar19 + 0x11) == '\0') {
              return;
            }
            if (*(int *)(TypeInfo_HorseSounds + 0xe4) == 0) {
              ppCStack_c8 = (Characters_Horse_o **)0x42b907a;
              il2cpp_runtime_helper_02337ed0();
            }
            uVar23 = *(undefined8 *)(*(long *)(TypeInfo_HorseSounds + 0xb8) + 0x18);
            pCVar18 = ((Characters_Horse_o *)plVar24)->klass;
            pMVar20 = (pCVar18->vtable)._100_ToggleSoundLocal.method;
            uVar21 = 1;
label_042b916e:
            ppCStack_c8 = (Characters_Horse_o **)0x42b9174;
            (*(pCVar18->vtable)._100_ToggleSoundLocal.methodPtr)(plVar24,uVar23,uVar21,pMVar20);
            return;
          }
        }
      }
    }
  }
label_042b9203:
  ppCStack_c8 = (Characters_Horse_o **)0x42b9208;
  il2cpp_runtime_helper_022b2c90();
  plVar24 = (long *)__this_00.fields.m_ParticleSystem;
  pCStack_d8 = (Characters_Horse_o *)unaff_RBX;
  pCStack_d0 = unaff_R14;
  ppCStack_c8 = unaff_RBP;
  if (g_data_057addcf == '\0') {
    plVar24 = &TypeInfo_Physics;
    il2cpp_runtime_helper_023445d0();
    g_data_057addcf = '\x01';
  }
  UStack_108.fields.m_UV.fields.x = 0.0;
  UStack_108.fields.m_UV.fields.y = 0.0;
  UStack_108.fields.m_Collider = 0;
  UStack_108.fields.m_Normal.fields.y = 0.0;
  UStack_108.fields.m_Normal.fields.z = 0.0;
  UStack_108.fields.m_FaceID = 0;
  UStack_108.fields.m_Distance = 0.0;
  UStack_108.fields.m_Point.fields.x = 0.0;
  UStack_108.fields.m_Point.fields.y = 0.0;
  UStack_108.fields.m_Point.fields.z = 0.0;
  UStack_108.fields.m_Normal.fields.x = 0.0;
  auStack_140[0] = 0;
  *(undefined1 *)((long)&(((Characters_Horse_o *)__this_00.fields.m_ParticleSystem)->fields).Animation + 5) =
       0;
  lVar19 = *(long *)&(((Characters_Horse_o *)__this_00.fields.m_ParticleSystem)->fields).Dead;
  if (lVar19 != 0) {
    pUVar17 = *(UnityEngine_Transform_o **)(lVar19 + 0x10);
    plVar24 = (long *)0x0;
    if (pUVar17 != (UnityEngine_Transform_o *)0x0) {
      UVar46 = UnityEngine_Transform__get_position(pUVar17,(MethodInfo *)0x0);
      auStack_138._0_4_ = UVar46.fields.x;
      auStack_138._4_4_ = UVar46.fields.y;
      fStack_130 = extraout_XMM0_Dc_08;
      fStack_12c = extraout_XMM0_Dd_08;
      if (g_data_057a6844 == '\0') {
        auStack_138 = (undefined1  [8])UVar46.fields._0_8_;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a6844 = '\x01';
      }
      lVar19 = *(long *)(TypeInfo_Vector3 + 0xb8);
      fStack_128 = (float)*(undefined8 *)(lVar19 + 0x18) * 0.8;
      fVar29 = (float)((ulong)*(undefined8 *)(lVar19 + 0x18) >> 0x20) * 0.8;
      uStack_118._0_4_ = *(float *)(lVar19 + 0x20) * 0.8;
      fVar28 = 0.0;
      fVar32 = 0.0;
      if (g_data_057ac31b == '\0') {
        fStack_124 = fVar29;
        fStack_120 = 0.0;
        fStack_11c = 0.0;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057ac31b = '\x01';
        lVar19 = *(long *)(TypeInfo_Vector3 + 0xb8);
        fVar29 = fStack_124;
        fVar28 = fStack_120;
        fVar32 = fStack_11c;
      }
      auStack_138._4_4_ = (float)auStack_138._4_4_ + fVar29;
      auStack_138._0_4_ = (float)auStack_138._0_4_ + fStack_128;
      fStack_130 = fStack_130 + fVar28;
      fStack_12c = fStack_12c + fVar32;
      origin.fields.z = UVar46.fields.z + (float)uStack_118;
      uStack_118 = *(undefined8 *)(lVar19 + 0x24);
      uStack_110 = 0;
      fStack_128 = *(float *)(lVar19 + 0x2c);
      auStack_140[0] =
           (*(((Characters_BaseCharacter_c *)((Characters_Horse_o *)__this_00.fields.m_ParticleSystem)->klass)
             ->vtable)._60_get_GroundMask.methodPtr)(__this_00.fields.m_ParticleSystem);
      iVar15 = UnityEngine_LayerMask__get_value
                         ((UnityEngine_LayerMask_Fields)(int32_t)auStack_140,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      auVar37 = _auStack_138;
      uVar25 = 0;
      origin.fields.x = (float)auStack_138._0_4_;
      origin.fields.y = (float)auStack_138._4_4_;
      direction.fields.z = fStack_128;
      direction.fields.x = (float)uStack_118;
      direction.fields.y = (float)uStack_118._4_4_;
      _auStack_138 = auVar37;
      bVar14 = UnityEngine_Physics__SphereCast_4e78cf0
                         (origin,0.6,direction,&UStack_108,0.8,iVar15,(MethodInfo *)0x0);
      if ((char)bVar14 != '\0') {
        if (*(char *)((long)&(((Characters_Horse_o *)__this_00.fields.m_ParticleSystem)->fields).Animation + 4
                     ) != '\0') {
          return;
        }
        *(undefined1 *)
         ((long)&(((Characters_Horse_o *)__this_00.fields.m_ParticleSystem)->fields).Animation + 5) = 1;
        uVar25 = 1;
      }
      *(undefined1 *)
       ((long)&(((Characters_Horse_o *)__this_00.fields.m_ParticleSystem)->fields).Animation + 4) = uVar25;
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  *(undefined1 *)((long)&(((Characters_Horse_o *)plVar24)->fields).crossfadeCache + 4) = 1;
  (((Characters_Horse_o *)plVar24)->fields)._owner = (Characters_Human_o *)0x41a0000041700000;
  (((Characters_Horse_o *)plVar24)->fields).HorseCache =
       (Characters_HorseComponentCache_o *)0x41f0000041200000;
  (((Characters_Horse_o *)plVar24)->fields).State = 0x42340000;
  Characters_BaseCharacter___ctor((Characters_BaseCharacter_o *)plVar24,(MethodInfo *)method_00);
  return;
}


// Characters.Horse$$LateUpdate
// il2cpp: void Characters_Horse__LateUpdate (Characters_Horse_o* __this, const MethodInfo* method);
// 0x42b8a40

void Characters_Horse__LateUpdate(Characters_Horse_o *__this,MethodInfo *method)

{
  uint uVar1;
  Outline_o *pOVar2;
  UnityEngine_Rigidbody_o *pUVar3;
  System_Action_Hashtable__o *pSVar4;
  UnityEngine_ParticleSystem_o *pUVar5;
  UnityEngine_Transform_o *__this_00;
  undefined1 auVar6 [16];
  char cVar7;
  bool_conflict bVar8;
  int32_t layerMask;
  Characters_Horse_c *pCVar9;
  long lVar10;
  MethodInfo *pMVar11;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  undefined8 uVar12;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  MethodInfo *extraout_RDX_06;
  Characters_Horse_o **unaff_RBX;
  Characters_Horse_o **unaff_RBP;
  Characters_BaseCharacter_o *pCVar13;
  Characters_BaseCharacter_o *method_00;
  undefined8 uVar14;
  UnityEngine_ParticleSystem_EmissionModule_o __this_01;
  UnityEngine_Animation_o *__this_02;
  long *__this_03;
  undefined1 uVar15;
  Characters_BaseCharacter_o *unaff_R14;
  float fVar16;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 uVar17;
  float extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 uVar18;
  float extraout_XMM0_Dd_01;
  float fVar19;
  float fVar20;
  UnityEngine_Vector3_o UVar21;
  UnityEngine_Vector3_o direction;
  undefined4 auStack_c8 [2];
  undefined1 auStack_c0 [8];
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  UnityEngine_RaycastHit_o UStack_90;
  Characters_Horse_o *pCStack_60;
  Characters_BaseCharacter_o *pCStack_58;
  Characters_Horse_o **ppCStack_50;
  float fStack_44;
  UnityEngine_ParticleSystem_EmissionModule_Fields UStack_40;
  undefined1 auStack_38 [8];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (g_data_057addce == '\0') {
    ppCStack_50 = (Characters_Horse_o **)0x42b8a64;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HorseAnimations);
    ppCStack_50 = (Characters_Horse_o **)0x42b8a70;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HorseSounds);
    ppCStack_50 = (Characters_Horse_o **)0x42b8a7c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    ppCStack_50 = (Characters_Horse_o **)0x42b8a88;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    ppCStack_50 = (Characters_Horse_o **)0x42b8a94;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    ppCStack_50 = (Characters_Horse_o **)0x42b8aa0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    g_data_057addce = '\x01';
  }
  ppCStack_50 = (Characters_Horse_o **)0x42b8abb;
  (*(__this->klass->vtable)._104_LateUpdateFootstep.methodPtr)
            (__this,(__this->klass->vtable)._104_LateUpdateFootstep.method);
  method_00 = (Characters_BaseCharacter_o *)(__this->klass->vtable)._105_LateUpdateFPS.method;
  ppCStack_50 = (Characters_Horse_o **)0x42b8acf;
  __this_01.fields.m_ParticleSystem =
       (UnityEngine_ParticleSystem_EmissionModule_Fields)
       (UnityEngine_ParticleSystem_EmissionModule_Fields)__this;
  (*(__this->klass->vtable)._105_LateUpdateFPS.methodPtr)();
  lVar10 = *(long *)&(__this->fields).Dead;
  if ((lVar10 == 0) || (lVar10 = *(long *)(lVar10 + 0x20), lVar10 == 0)) goto label_042b9203;
  if (*(char *)(lVar10 + 0x68) != '\0') {
    unaff_RBX = (Characters_Horse_o **)(__this->fields).OutlineComponent;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      ppCStack_50 = (Characters_Horse_o **)0x42b8b14;
      il2cpp_runtime_helper_02337ed0();
    }
    method_00 = (Characters_BaseCharacter_o *)0x0;
    ppCStack_50 = (Characters_Horse_o **)0x42b8b20;
    __this_01.fields.m_ParticleSystem =
         (UnityEngine_ParticleSystem_EmissionModule_Fields)
         (UnityEngine_ParticleSystem_EmissionModule_Fields)unaff_RBX;
    bVar8 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      return;
    }
    pOVar2 = (__this->fields).OutlineComponent;
    if (pOVar2 == (Outline_o *)0x0) goto label_042b9203;
    if (*(char *)&(pOVar2->fields)._namesToIgnore != '\0') {
      return;
    }
    lVar10 = *(long *)&(__this->fields).Dead;
    if (lVar10 == 0) goto label_042b9203;
    pUVar3 = *(UnityEngine_Rigidbody_o **)(lVar10 + 0x18);
    __this_01.fields.m_ParticleSystem =
         (UnityEngine_ParticleSystem_EmissionModule_Fields)
         (UnityEngine_ParticleSystem_EmissionModule_Fields)(Characters_Horse_o *)0x0;
    if (pUVar3 == (UnityEngine_Rigidbody_o *)0x0) goto label_042b9203;
    uVar1 = *(uint *)&pOVar2[3].monitor;
    unaff_RBP = (Characters_Horse_o **)(ulong)uVar1;
    method_00 = (Characters_BaseCharacter_o *)0x0;
    ppCStack_50 = (Characters_Horse_o **)0x42b8b6b;
    UVar21 = UnityEngine_Rigidbody__get_velocity(pUVar3,(MethodInfo *)0x0);
    fVar19 = UVar21.fields.x;
    fVar16 = UVar21.fields.y;
    uVar17 = extraout_XMM0_Dc;
    uVar18 = extraout_XMM0_Dd;
    fVar20 = UVar21.fields.z;
    if (g_data_057a6841 == '\0') {
      uStack_30 = extraout_XMM0_Dc;
      auStack_38 = (undefined1  [8])UVar21.fields._0_8_;
      uStack_2c = extraout_XMM0_Dd;
      ppCStack_50 = (Characters_Horse_o **)0x42b8b8b;
      fStack_44 = UVar21.fields.z;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a6841 = '\x01';
      fVar19 = (float)auStack_38._0_4_;
      fVar16 = (float)auStack_38._4_4_;
      uVar17 = uStack_30;
      uVar18 = uStack_2c;
      fVar20 = fStack_44;
    }
    unaff_RBX = &TypeInfo_Math;
    __this_01.fields.m_ParticleSystem =
         (UnityEngine_ParticleSystem_EmissionModule_Fields)
         (UnityEngine_ParticleSystem_EmissionModule_Fields)TypeInfo_Math;
    if ((TypeInfo_Math->fields)._stepPhase == 0) {
      auStack_38._4_4_ = fVar16;
      auStack_38._0_4_ = fVar19;
      uStack_30 = uVar17;
      uStack_2c = uVar18;
      ppCStack_50 = (Characters_Horse_o **)0x42b8bc0;
      fStack_44 = fVar20;
      il2cpp_runtime_helper_02337ed0();
      fVar19 = (float)auStack_38._0_4_;
      fVar16 = (float)auStack_38._4_4_;
      fVar20 = fStack_44;
    }
    fVar19 = fVar20 * fVar20 + fVar16 * fVar16 + fVar19 * fVar19;
    if (fVar19 < 0.0) {
      ppCStack_50 = (Characters_Horse_o **)0x42b8d4d;
      fVar19 = sqrtf(fVar19);
      if (8.0 < fVar19) goto label_042b8d5a;
label_042b8c01:
      lVar10 = *(long *)&(__this->fields).Dead;
      if (lVar10 == 0) goto label_042b9203;
      pUVar3 = *(UnityEngine_Rigidbody_o **)(lVar10 + 0x18);
      __this_01.fields.m_ParticleSystem =
           (UnityEngine_ParticleSystem_EmissionModule_Fields)
           (UnityEngine_ParticleSystem_EmissionModule_Fields)(Characters_Horse_o *)0x0;
      if (pUVar3 == (UnityEngine_Rigidbody_o *)0x0) goto label_042b9203;
      method_00 = (Characters_BaseCharacter_o *)0x0;
      ppCStack_50 = (Characters_Horse_o **)0x42b8c23;
      UVar21 = UnityEngine_Rigidbody__get_velocity(pUVar3,(MethodInfo *)0x0);
      fVar19 = UVar21.fields.x;
      fVar16 = UVar21.fields.y;
      uVar17 = extraout_XMM0_Dc_00;
      uVar18 = extraout_XMM0_Dd_00;
      fVar20 = UVar21.fields.z;
      if (g_data_057a6841 == '\0') {
        uStack_30 = extraout_XMM0_Dc_00;
        auStack_38 = (undefined1  [8])UVar21.fields._0_8_;
        uStack_2c = extraout_XMM0_Dd_00;
        ppCStack_50 = (Characters_Horse_o **)0x42b8c43;
        fStack_44 = UVar21.fields.z;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
        g_data_057a6841 = '\x01';
        fVar19 = (float)auStack_38._0_4_;
        fVar16 = (float)auStack_38._4_4_;
        uVar17 = uStack_30;
        uVar18 = uStack_2c;
        fVar20 = fStack_44;
      }
      if ((TypeInfo_Math->fields)._stepPhase == 0) {
        auStack_38._4_4_ = fVar16;
        auStack_38._0_4_ = fVar19;
        uStack_30 = uVar17;
        uStack_2c = uVar18;
        ppCStack_50 = (Characters_Horse_o **)0x42b8c71;
        fStack_44 = fVar20;
        il2cpp_runtime_helper_02337ed0();
        fVar19 = (float)auStack_38._0_4_;
        fVar16 = (float)auStack_38._4_4_;
        fVar20 = fStack_44;
      }
      fVar19 = fVar20 * fVar20 + fVar16 * fVar16 + fVar19 * fVar19;
      if (0.0 <= fVar19) {
        fVar19 = SQRT(fVar19);
      }
      else {
        ppCStack_50 = (Characters_Horse_o **)0x42b8e4d;
        fVar19 = sqrtf(fVar19);
      }
      if (fVar19 <= 1.0) {
        ppCStack_50 = (Characters_Horse_o **)0x42b8cba;
        __this_01.fields.m_ParticleSystem =
             (UnityEngine_ParticleSystem_EmissionModule_Fields)
             (UnityEngine_ParticleSystem_EmissionModule_Fields)__this;
        Characters_Horse__UpdateIdle(__this,(MethodInfo *)method_00);
        unaff_R14 = (Characters_BaseCharacter_o *)(__this->fields).OutlineComponent;
        if (unaff_R14 == (Characters_BaseCharacter_o *)0x0) goto label_042b9203;
        if ((uVar1 == 0) && ((int)unaff_R14[1].fields.m_CachedPtr == 1)) {
          unaff_RBX = &TypeInfo_HumanAnimations;
          if ((TypeInfo_HumanAnimations->fields)._stepPhase == 0) {
            ppCStack_50 = (Characters_Horse_o **)0x42b8cf9;
            il2cpp_runtime_helper_02337ed0();
          }
          lVar10 = *(long *)&(unaff_R14->fields)._cameraFPS;
          __this_01.fields.m_ParticleSystem =
               (UnityEngine_ParticleSystem_EmissionModule_Fields)
               (UnityEngine_ParticleSystem_EmissionModule_Fields)TypeInfo_HumanAnimations;
          if (lVar10 == 0) goto label_042b9203;
          pCVar13 = (Characters_BaseCharacter_o *)(((TypeInfo_HumanAnimations->fields).MovementSync)->fields).m_CachedPtr;
          if (*(char *)(lVar10 + 0x3c) == '\0') {
            ppCStack_50 = (Characters_Horse_o **)0x42b91e0;
            method_00 = pCVar13;
            bVar8 = System_String__op_Equality
                              (*(System_String_o **)(lVar10 + 0x30),(System_String_o *)pCVar13,
                               (MethodInfo *)0x0);
            cVar7 = (char)bVar8;
            pMVar11 = extraout_RDX_06;
          }
          else {
            __this_01.fields.m_ParticleSystem =
                 (UnityEngine_ParticleSystem_EmissionModule_Fields)
                 (UnityEngine_ParticleSystem_EmissionModule_Fields)(Characters_Horse_o *)0x0;
            if (*(UnityEngine_Animation_o **)(lVar10 + 0x10) == (UnityEngine_Animation_o *)0x0)
            goto label_042b9203;
            ppCStack_50 = (Characters_Horse_o **)0x42b8d38;
            method_00 = pCVar13;
            bVar8 = UnityEngine_Animation__IsPlaying
                              (*(UnityEngine_Animation_o **)(lVar10 + 0x10),(System_String_o *)pCVar13,
                               (MethodInfo *)0x0);
            cVar7 = (char)bVar8;
            pMVar11 = extraout_RDX;
          }
          if (cVar7 == '\0') {
            ppCStack_50 = (Characters_Horse_o **)0x42b91fe;
            Characters_BaseCharacter__CrossFade(unaff_R14,(System_String_o *)pCVar13,0.1,0.0,pMVar11);
            method_00 = pCVar13;
          }
        }
        goto label_042b8f68;
      }
      unaff_RBX = &TypeInfo_HorseAnimations;
      if ((TypeInfo_HorseAnimations->fields)._stepPhase == 0) {
        ppCStack_50 = (Characters_Horse_o **)0x42b8e72;
        il2cpp_runtime_helper_02337ed0();
      }
      lVar10 = *(long *)&(__this->fields)._cameraFPS;
      __this_01.fields.m_ParticleSystem =
           (UnityEngine_ParticleSystem_EmissionModule_Fields)
           (UnityEngine_ParticleSystem_EmissionModule_Fields)TypeInfo_HorseAnimations;
      if (lVar10 == 0) goto label_042b9203;
      unaff_R14 = *(Characters_BaseCharacter_o **)
                   &(((TypeInfo_HorseAnimations->fields).MovementSync)->fields)._correctPosition.fields.y;
      if (*(char *)(lVar10 + 0x3c) == '\0') {
        __this_01.fields.m_ParticleSystem =
             *(UnityEngine_ParticleSystem_EmissionModule_Fields *)(lVar10 + 0x30);
        ppCStack_50 = (Characters_Horse_o **)0x42b91c5;
        method_00 = unaff_R14;
        bVar8 = System_String__op_Equality
                          ((System_String_o *)__this_01.fields.m_ParticleSystem,(System_String_o *)unaff_R14,
                           (MethodInfo *)0x0);
        cVar7 = (char)bVar8;
        pMVar11 = extraout_RDX_05;
      }
      else {
        __this_01.fields.m_ParticleSystem =
             *(UnityEngine_ParticleSystem_EmissionModule_Fields *)(lVar10 + 0x10);
        if (__this_01.fields.m_ParticleSystem == (UnityEngine_ParticleSystem_o *)0x0) goto label_042b9203;
        ppCStack_50 = (Characters_Horse_o **)0x42b8eb2;
        method_00 = unaff_R14;
        bVar8 = UnityEngine_Animation__IsPlaying
                          ((UnityEngine_Animation_o *)__this_01.fields.m_ParticleSystem,
                           (System_String_o *)unaff_R14,(MethodInfo *)0x0);
        cVar7 = (char)bVar8;
        pMVar11 = extraout_RDX_01;
      }
      if (cVar7 == '\0') {
        ppCStack_50 = (Characters_Horse_o **)0x42b8ecc;
        __this_01.fields.m_ParticleSystem =
             (UnityEngine_ParticleSystem_EmissionModule_Fields)
             (UnityEngine_ParticleSystem_EmissionModule_Fields)__this;
        Characters_BaseCharacter__CrossFade
                  ((Characters_BaseCharacter_o *)__this,(System_String_o *)unaff_R14,0.1,0.0,pMVar11);
        method_00 = unaff_R14;
      }
      unaff_R14 = (Characters_BaseCharacter_o *)(__this->fields).OutlineComponent;
      if (unaff_R14 == (Characters_BaseCharacter_o *)0x0) goto label_042b9203;
      if ((uVar1 == 0) && ((int)unaff_R14[1].fields.m_CachedPtr == 1)) {
        unaff_RBX = &TypeInfo_HumanAnimations;
        if ((TypeInfo_HumanAnimations->fields)._stepPhase == 0) {
          ppCStack_50 = (Characters_Horse_o **)0x42b8f03;
          il2cpp_runtime_helper_02337ed0();
        }
        lVar10 = *(long *)&(unaff_R14->fields)._cameraFPS;
        __this_01.fields.m_ParticleSystem =
             (UnityEngine_ParticleSystem_EmissionModule_Fields)
             (UnityEngine_ParticleSystem_EmissionModule_Fields)TypeInfo_HumanAnimations;
        if (lVar10 == 0) goto label_042b9203;
        pCVar13 = (Characters_BaseCharacter_o *)(((TypeInfo_HumanAnimations->fields).MovementSync)->fields).m_CachedPtr;
        if (*(char *)(lVar10 + 0x3c) == '\0') goto label_042b919c;
        __this_02 = *(UnityEngine_Animation_o **)(lVar10 + 0x10);
        __this_01.fields.m_ParticleSystem =
             (UnityEngine_ParticleSystem_EmissionModule_Fields)
             (UnityEngine_ParticleSystem_EmissionModule_Fields)(Characters_Horse_o *)0x0;
        if (__this_02 == (UnityEngine_Animation_o *)0x0) goto label_042b9203;
label_042b8f38:
        ppCStack_50 = (Characters_Horse_o **)0x42b8f42;
        method_00 = pCVar13;
        bVar8 = UnityEngine_Animation__IsPlaying(__this_02,(System_String_o *)pCVar13,(MethodInfo *)0x0);
        cVar7 = (char)bVar8;
        pMVar11 = extraout_RDX_02;
        goto joined_r0x042b8f44;
      }
    }
    else {
      if (SQRT(fVar19) <= 8.0) goto label_042b8c01;
label_042b8d5a:
      unaff_RBX = &TypeInfo_HorseAnimations;
      if ((TypeInfo_HorseAnimations->fields)._stepPhase == 0) {
        ppCStack_50 = (Characters_Horse_o **)0x42b8d72;
        il2cpp_runtime_helper_02337ed0();
      }
      lVar10 = *(long *)&(__this->fields)._cameraFPS;
      __this_01.fields.m_ParticleSystem =
           (UnityEngine_ParticleSystem_EmissionModule_Fields)
           (UnityEngine_ParticleSystem_EmissionModule_Fields)TypeInfo_HorseAnimations;
      if (lVar10 == 0) goto label_042b9203;
      unaff_R14 = *(Characters_BaseCharacter_o **)&(((TypeInfo_HorseAnimations->fields).MovementSync)->fields).Disabled;
      if (*(char *)(lVar10 + 0x3c) == '\0') {
        __this_01.fields.m_ParticleSystem =
             *(UnityEngine_ParticleSystem_EmissionModule_Fields *)(lVar10 + 0x30);
        ppCStack_50 = (Characters_Horse_o **)0x42b918f;
        method_00 = unaff_R14;
        bVar8 = System_String__op_Equality
                          ((System_String_o *)__this_01.fields.m_ParticleSystem,(System_String_o *)unaff_R14,
                           (MethodInfo *)0x0);
        cVar7 = (char)bVar8;
        pMVar11 = extraout_RDX_03;
      }
      else {
        __this_01.fields.m_ParticleSystem =
             *(UnityEngine_ParticleSystem_EmissionModule_Fields *)(lVar10 + 0x10);
        if (__this_01.fields.m_ParticleSystem == (UnityEngine_ParticleSystem_o *)0x0) goto label_042b9203;
        ppCStack_50 = (Characters_Horse_o **)0x42b8db2;
        method_00 = unaff_R14;
        bVar8 = UnityEngine_Animation__IsPlaying
                          ((UnityEngine_Animation_o *)__this_01.fields.m_ParticleSystem,
                           (System_String_o *)unaff_R14,(MethodInfo *)0x0);
        cVar7 = (char)bVar8;
        pMVar11 = extraout_RDX_00;
      }
      if (cVar7 == '\0') {
        ppCStack_50 = (Characters_Horse_o **)0x42b8dcc;
        __this_01.fields.m_ParticleSystem =
             (UnityEngine_ParticleSystem_EmissionModule_Fields)
             (UnityEngine_ParticleSystem_EmissionModule_Fields)__this;
        Characters_BaseCharacter__CrossFade
                  ((Characters_BaseCharacter_o *)__this,(System_String_o *)unaff_R14,0.1,0.0,pMVar11);
        method_00 = unaff_R14;
      }
      unaff_R14 = (Characters_BaseCharacter_o *)(__this->fields).OutlineComponent;
      if (unaff_R14 == (Characters_BaseCharacter_o *)0x0) goto label_042b9203;
      if ((uVar1 == 0) && ((int)unaff_R14[1].fields.m_CachedPtr == 1)) {
        unaff_RBX = &TypeInfo_HumanAnimations;
        if ((TypeInfo_HumanAnimations->fields)._stepPhase == 0) {
          ppCStack_50 = (Characters_Horse_o **)0x42b8e0b;
          il2cpp_runtime_helper_02337ed0();
        }
        lVar10 = *(long *)&(unaff_R14->fields)._cameraFPS;
        __this_01.fields.m_ParticleSystem =
             (UnityEngine_ParticleSystem_EmissionModule_Fields)
             (UnityEngine_ParticleSystem_EmissionModule_Fields)TypeInfo_HumanAnimations;
        if (lVar10 == 0) goto label_042b9203;
        pCVar13 = (Characters_BaseCharacter_o *)
                  (((TypeInfo_HumanAnimations->fields).MovementSync)->fields).m_CancellationTokenSource;
        if (*(char *)(lVar10 + 0x3c) != '\0') {
          __this_02 = *(UnityEngine_Animation_o **)(lVar10 + 0x10);
          if (__this_02 == (UnityEngine_Animation_o *)0x0) {
            __this_01.fields.m_ParticleSystem =
                 (UnityEngine_ParticleSystem_EmissionModule_Fields)(UnityEngine_ParticleSystem_o *)0x0;
            goto label_042b9203;
          }
          goto label_042b8f38;
        }
label_042b919c:
        ppCStack_50 = (Characters_Horse_o **)0x42b91aa;
        method_00 = pCVar13;
        bVar8 = System_String__op_Equality
                          (*(System_String_o **)(lVar10 + 0x30),(System_String_o *)pCVar13,(MethodInfo *)0x0);
        cVar7 = (char)bVar8;
        pMVar11 = extraout_RDX_04;
joined_r0x042b8f44:
        if (cVar7 == '\0') {
          ppCStack_50 = (Characters_Horse_o **)0x42b8f5c;
          Characters_BaseCharacter__CrossFade(unaff_R14,(System_String_o *)pCVar13,0.1,0.0,pMVar11);
          method_00 = pCVar13;
        }
      }
    }
    (__this->fields).FollowingEnabled = 0;
  }
label_042b8f68:
  unaff_RBX = *(Characters_Horse_o ***)&(__this->fields)._cameraFPS;
  unaff_RBP = &TypeInfo_HorseAnimations;
  if ((TypeInfo_HorseAnimations->fields)._stepPhase == 0) {
    ppCStack_50 = (Characters_Horse_o **)0x42b8f89;
    il2cpp_runtime_helper_02337ed0();
  }
  __this_01.fields.m_ParticleSystem =
       (UnityEngine_ParticleSystem_EmissionModule_Fields)
       (UnityEngine_ParticleSystem_EmissionModule_Fields)TypeInfo_HorseAnimations;
  if ((Characters_Horse_o *)unaff_RBX != (Characters_Horse_o *)0x0) {
    method_00 = *(Characters_BaseCharacter_o **)&(((TypeInfo_HorseAnimations->fields).MovementSync)->fields).Disabled;
    if ((((Characters_Horse_o *)unaff_RBX)->fields).field_0x2c == '\0') {
      __this_01.fields.m_ParticleSystem =
           *(UnityEngine_ParticleSystem_EmissionModule_Fields *)
            &(((Characters_Horse_o *)unaff_RBX)->fields).MaxFootstepDistance;
      ppCStack_50 = (Characters_Horse_o **)0x42b90ab;
      bVar8 = System_String__op_Equality
                        ((System_String_o *)__this_01.fields.m_ParticleSystem,(System_String_o *)method_00,
                         (MethodInfo *)0x0);
      cVar7 = (char)bVar8;
    }
    else {
      __this_01.fields.m_ParticleSystem =
           *(UnityEngine_ParticleSystem_EmissionModule_Fields *)&((Characters_Horse_o *)unaff_RBX)->fields;
      if (__this_01.fields.m_ParticleSystem == (UnityEngine_ParticleSystem_o *)0x0) goto label_042b9203;
      ppCStack_50 = (Characters_Horse_o **)0x42b8fbf;
      bVar8 = UnityEngine_Animation__IsPlaying
                        ((UnityEngine_Animation_o *)__this_01.fields.m_ParticleSystem,
                         (System_String_o *)method_00,(MethodInfo *)0x0);
      cVar7 = (char)bVar8;
    }
    if ((cVar7 == '\0') || (*(char *)((long)&(__this->fields).Animation + 4) == '\0')) {
      UStack_40.m_ParticleSystem = (UnityEngine_ParticleSystem_o *)0x0;
      pSVar4 = (__this->fields).OnPlayerPropertiesChanged;
      if (pSVar4 != (System_Action_Hashtable__o *)0x0) {
        pUVar5 = (UnityEngine_ParticleSystem_o *)(pSVar4->fields).extra_arg;
        __this_01.fields.m_ParticleSystem =
             (UnityEngine_ParticleSystem_EmissionModule_Fields)
             (UnityEngine_ParticleSystem_EmissionModule_Fields)(Characters_Horse_o *)0x0;
        if (pUVar5 != (UnityEngine_ParticleSystem_o *)0x0) {
          ppCStack_50 = (Characters_Horse_o **)0x42b90e1;
          UStack_40.m_ParticleSystem =
               (UnityEngine_ParticleSystem_o *)
               UnityEngine_ParticleSystem__get_emission(pUVar5,(MethodInfo *)0x0);
          __this_01.fields.m_ParticleSystem = (UnityEngine_ParticleSystem_EmissionModule_Fields)&UStack_40;
          method_00 = (Characters_BaseCharacter_o *)0x0;
          ppCStack_50 = (Characters_Horse_o **)0x42b90f2;
          bVar8 = UnityEngine_ParticleSystem_EmissionModule__get_enabled(__this_01,(MethodInfo *)0x0);
          if ((char)bVar8 != '\0') {
            __this_01.fields.m_ParticleSystem = (UnityEngine_ParticleSystem_EmissionModule_Fields)&UStack_40;
            method_00 = (Characters_BaseCharacter_o *)0x0;
            ppCStack_50 = (Characters_Horse_o **)0x42b9104;
            UnityEngine_ParticleSystem_EmissionModule__set_enabled(__this_01,0,(MethodInfo *)0x0);
          }
          lVar10 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
          if ((lVar10 != 0) && (lVar10 = *(long *)(lVar10 + 0x78), lVar10 != 0)) {
            if (*(char *)(lVar10 + 0x11) == '\0') {
              return;
            }
            if (*(int *)(TypeInfo_HorseSounds + 0xe4) == 0) {
              ppCStack_50 = (Characters_Horse_o **)0x42b9150;
              il2cpp_runtime_helper_02337ed0();
            }
            uVar14 = *(undefined8 *)(*(long *)(TypeInfo_HorseSounds + 0xb8) + 0x18);
            pCVar9 = __this->klass;
            pMVar11 = (pCVar9->vtable)._100_ToggleSoundLocal.method;
            uVar12 = 0;
            goto label_042b916e;
          }
        }
      }
    }
    else {
      UStack_40.m_ParticleSystem = (UnityEngine_ParticleSystem_o *)0x0;
      pSVar4 = (__this->fields).OnPlayerPropertiesChanged;
      if (pSVar4 != (System_Action_Hashtable__o *)0x0) {
        pUVar5 = (UnityEngine_ParticleSystem_o *)(pSVar4->fields).extra_arg;
        __this_01.fields.m_ParticleSystem =
             (UnityEngine_ParticleSystem_EmissionModule_Fields)
             (UnityEngine_ParticleSystem_EmissionModule_Fields)(Characters_Horse_o *)0x0;
        if (pUVar5 != (UnityEngine_ParticleSystem_o *)0x0) {
          ppCStack_50 = (Characters_Horse_o **)0x42b9004;
          UStack_40.m_ParticleSystem =
               (UnityEngine_ParticleSystem_o *)
               UnityEngine_ParticleSystem__get_emission(pUVar5,(MethodInfo *)0x0);
          __this_01.fields.m_ParticleSystem = (UnityEngine_ParticleSystem_EmissionModule_Fields)&UStack_40;
          method_00 = (Characters_BaseCharacter_o *)0x0;
          ppCStack_50 = (Characters_Horse_o **)0x42b9015;
          bVar8 = UnityEngine_ParticleSystem_EmissionModule__get_enabled(__this_01,(MethodInfo *)0x0);
          if ((char)bVar8 == '\0') {
            __this_01.fields.m_ParticleSystem = (UnityEngine_ParticleSystem_EmissionModule_Fields)&UStack_40;
            method_00 = (Characters_BaseCharacter_o *)0x1;
            ppCStack_50 = (Characters_Horse_o **)0x42b902a;
            UnityEngine_ParticleSystem_EmissionModule__set_enabled(__this_01,1,(MethodInfo *)0x0);
          }
          lVar10 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
          if ((lVar10 != 0) && (lVar10 = *(long *)(lVar10 + 0x78), lVar10 != 0)) {
            if (*(char *)(lVar10 + 0x11) == '\0') {
              return;
            }
            if (*(int *)(TypeInfo_HorseSounds + 0xe4) == 0) {
              ppCStack_50 = (Characters_Horse_o **)0x42b907a;
              il2cpp_runtime_helper_02337ed0();
            }
            uVar14 = *(undefined8 *)(*(long *)(TypeInfo_HorseSounds + 0xb8) + 0x18);
            pCVar9 = __this->klass;
            pMVar11 = (pCVar9->vtable)._100_ToggleSoundLocal.method;
            uVar12 = 1;
label_042b916e:
            ppCStack_50 = (Characters_Horse_o **)0x42b9174;
            (*(pCVar9->vtable)._100_ToggleSoundLocal.methodPtr)(__this,uVar14,uVar12,pMVar11);
            return;
          }
        }
      }
    }
  }
label_042b9203:
  ppCStack_50 = (Characters_Horse_o **)0x42b9208;
  il2cpp_runtime_helper_022b2c90();
  __this_03 = (long *)__this_01.fields.m_ParticleSystem;
  pCStack_60 = (Characters_Horse_o *)unaff_RBX;
  pCStack_58 = unaff_R14;
  ppCStack_50 = unaff_RBP;
  if (g_data_057addcf == '\0') {
    __this_03 = &TypeInfo_Physics;
    il2cpp_runtime_helper_023445d0();
    g_data_057addcf = '\x01';
  }
  UStack_90.fields.m_UV.fields.x = 0.0;
  UStack_90.fields.m_UV.fields.y = 0.0;
  UStack_90.fields.m_Collider = 0;
  UStack_90.fields.m_Normal.fields.y = 0.0;
  UStack_90.fields.m_Normal.fields.z = 0.0;
  UStack_90.fields.m_FaceID = 0;
  UStack_90.fields.m_Distance = 0.0;
  UStack_90.fields.m_Point.fields.x = 0.0;
  UStack_90.fields.m_Point.fields.y = 0.0;
  UStack_90.fields.m_Point.fields.z = 0.0;
  UStack_90.fields.m_Normal.fields.x = 0.0;
  auStack_c8[0] = 0;
  *(undefined1 *)((long)&(((Characters_Horse_o *)__this_01.fields.m_ParticleSystem)->fields).Animation + 5) =
       0;
  lVar10 = *(long *)&(((Characters_Horse_o *)__this_01.fields.m_ParticleSystem)->fields).Dead;
  if (lVar10 != 0) {
    __this_00 = *(UnityEngine_Transform_o **)(lVar10 + 0x10);
    __this_03 = (long *)0x0;
    if (__this_00 != (UnityEngine_Transform_o *)0x0) {
      UVar21 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
      auStack_c0._0_4_ = UVar21.fields.x;
      auStack_c0._4_4_ = UVar21.fields.y;
      fStack_b8 = extraout_XMM0_Dc_01;
      fStack_b4 = extraout_XMM0_Dd_01;
      if (g_data_057a6844 == '\0') {
        auStack_c0 = (undefined1  [8])UVar21.fields._0_8_;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a6844 = '\x01';
      }
      lVar10 = *(long *)(TypeInfo_Vector3 + 0xb8);
      fStack_b0 = (float)*(undefined8 *)(lVar10 + 0x18) * 0.8;
      fVar19 = (float)((ulong)*(undefined8 *)(lVar10 + 0x18) >> 0x20) * 0.8;
      uStack_a0._0_4_ = *(float *)(lVar10 + 0x20) * 0.8;
      fVar16 = 0.0;
      fVar20 = 0.0;
      if (g_data_057ac31b == '\0') {
        fStack_ac = fVar19;
        fStack_a8 = 0.0;
        fStack_a4 = 0.0;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057ac31b = '\x01';
        lVar10 = *(long *)(TypeInfo_Vector3 + 0xb8);
        fVar19 = fStack_ac;
        fVar16 = fStack_a8;
        fVar20 = fStack_a4;
      }
      auStack_c0._4_4_ = (float)auStack_c0._4_4_ + fVar19;
      auStack_c0._0_4_ = (float)auStack_c0._0_4_ + fStack_b0;
      fStack_b8 = fStack_b8 + fVar16;
      fStack_b4 = fStack_b4 + fVar20;
      UVar21.fields.z = UVar21.fields.z + (float)uStack_a0;
      uStack_a0 = *(undefined8 *)(lVar10 + 0x24);
      uStack_98 = 0;
      fStack_b0 = *(float *)(lVar10 + 0x2c);
      auStack_c8[0] =
           (*(code *)(((Characters_Horse_o *)__this_01.fields.m_ParticleSystem)->klass->vtable).
                     _60_get_GroundMask.methodPtr)(__this_01.fields.m_ParticleSystem);
      layerMask = UnityEngine_LayerMask__get_value
                            ((UnityEngine_LayerMask_Fields)(int32_t)auStack_c8,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      auVar6 = _auStack_c0;
      uVar15 = 0;
      UVar21.fields.x = (float)auStack_c0._0_4_;
      UVar21.fields.y = (float)auStack_c0._4_4_;
      direction.fields.z = fStack_b0;
      direction.fields.x = (float)uStack_a0;
      direction.fields.y = (float)uStack_a0._4_4_;
      _auStack_c0 = auVar6;
      bVar8 = UnityEngine_Physics__SphereCast_4e78cf0
                        (UVar21,0.6,direction,&UStack_90,0.8,layerMask,(MethodInfo *)0x0);
      if ((char)bVar8 != '\0') {
        if (*(char *)((long)&(((Characters_Horse_o *)__this_01.fields.m_ParticleSystem)->fields).Animation + 4
                     ) != '\0') {
          return;
        }
        *(undefined1 *)
         ((long)&(((Characters_Horse_o *)__this_01.fields.m_ParticleSystem)->fields).Animation + 5) = 1;
        uVar15 = 1;
      }
      *(undefined1 *)
       ((long)&(((Characters_Horse_o *)__this_01.fields.m_ParticleSystem)->fields).Animation + 4) = uVar15;
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  *(undefined1 *)((long)&(((Characters_Horse_o *)__this_03)->fields).crossfadeCache + 4) = 1;
  (((Characters_Horse_o *)__this_03)->fields)._owner = (Characters_Human_o *)0x41a0000041700000;
  (((Characters_Horse_o *)__this_03)->fields).HorseCache =
       (Characters_HorseComponentCache_o *)0x41f0000041200000;
  (((Characters_Horse_o *)__this_03)->fields).State = 0x42340000;
  Characters_BaseCharacter___ctor((Characters_BaseCharacter_o *)__this_03,(MethodInfo *)method_00);
  return;
}


// Characters.Horse$$CheckGround
// il2cpp: void Characters_Horse__CheckGround (Characters_Horse_o* __this, const MethodInfo* method);
// 0x42b9210

void Characters_Horse__CheckGround(Characters_Horse_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  undefined1 auVar1 [16];
  int32_t layerMask;
  bool_conflict bVar2;
  long lVar3;
  long *__this_01;
  undefined1 uVar4;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dd;
  float fVar5;
  float fVar6;
  float fVar7;
  UnityEngine_Vector3_o UVar8;
  UnityEngine_Vector3_o direction;
  undefined4 auStack_80 [2];
  undefined1 auStack_78 [8];
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  undefined8 uStack_58;
  undefined8 uStack_50;
  UnityEngine_RaycastHit_o UStack_48;
  
  __this_01 = (long *)__this;
  if (g_data_057addcf == '\0') {
    __this_01 = &TypeInfo_Physics;
    il2cpp_runtime_helper_023445d0();
    g_data_057addcf = '\x01';
  }
  UStack_48.fields.m_UV.fields.x = 0.0;
  UStack_48.fields.m_UV.fields.y = 0.0;
  UStack_48.fields.m_Collider = 0;
  UStack_48.fields.m_Normal.fields.y = 0.0;
  UStack_48.fields.m_Normal.fields.z = 0.0;
  UStack_48.fields.m_FaceID = 0;
  UStack_48.fields.m_Distance = 0.0;
  UStack_48.fields.m_Point.fields.x = 0.0;
  UStack_48.fields.m_Point.fields.y = 0.0;
  UStack_48.fields.m_Point.fields.z = 0.0;
  UStack_48.fields.m_Normal.fields.x = 0.0;
  auStack_80[0] = 0;
  *(undefined1 *)((long)&(__this->fields).Animation + 5) = 0;
  lVar3 = *(long *)&(__this->fields).Dead;
  if (lVar3 != 0) {
    __this_00 = *(UnityEngine_Transform_o **)(lVar3 + 0x10);
    __this_01 = (long *)0x0;
    if (__this_00 != (UnityEngine_Transform_o *)0x0) {
      UVar8 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
      auStack_78._0_4_ = UVar8.fields.x;
      auStack_78._4_4_ = UVar8.fields.y;
      fStack_70 = extraout_XMM0_Dc;
      fStack_6c = extraout_XMM0_Dd;
      if (g_data_057a6844 == '\0') {
        auStack_78 = (undefined1  [8])UVar8.fields._0_8_;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a6844 = '\x01';
      }
      lVar3 = *(long *)(TypeInfo_Vector3 + 0xb8);
      fStack_68 = (float)*(undefined8 *)(lVar3 + 0x18) * 0.8;
      fVar5 = (float)((ulong)*(undefined8 *)(lVar3 + 0x18) >> 0x20) * 0.8;
      uStack_58._0_4_ = *(float *)(lVar3 + 0x20) * 0.8;
      fVar6 = 0.0;
      fVar7 = 0.0;
      if (g_data_057ac31b == '\0') {
        fStack_64 = fVar5;
        fStack_60 = 0.0;
        fStack_5c = 0.0;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057ac31b = '\x01';
        lVar3 = *(long *)(TypeInfo_Vector3 + 0xb8);
        fVar5 = fStack_64;
        fVar6 = fStack_60;
        fVar7 = fStack_5c;
      }
      auStack_78._4_4_ = (float)auStack_78._4_4_ + fVar5;
      auStack_78._0_4_ = (float)auStack_78._0_4_ + fStack_68;
      fStack_70 = fStack_70 + fVar6;
      fStack_6c = fStack_6c + fVar7;
      UVar8.fields.z = UVar8.fields.z + (float)uStack_58;
      uStack_58 = *(undefined8 *)(lVar3 + 0x24);
      uStack_50 = 0;
      fStack_68 = *(float *)(lVar3 + 0x2c);
      auStack_80[0] = (*(__this->klass->vtable)._60_get_GroundMask.methodPtr)(__this);
      layerMask = UnityEngine_LayerMask__get_value
                            ((UnityEngine_LayerMask_Fields)(int32_t)auStack_80,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      auVar1 = _auStack_78;
      uVar4 = 0;
      UVar8.fields.x = (float)auStack_78._0_4_;
      UVar8.fields.y = (float)auStack_78._4_4_;
      direction.fields.z = fStack_68;
      direction.fields.x = (float)uStack_58;
      direction.fields.y = (float)uStack_58._4_4_;
      _auStack_78 = auVar1;
      bVar2 = UnityEngine_Physics__SphereCast_4e78cf0
                        (UVar8,0.6,direction,&UStack_48,0.8,layerMask,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(char *)((long)&(__this->fields).Animation + 4) != '\0') {
          return;
        }
        *(undefined1 *)((long)&(__this->fields).Animation + 5) = 1;
        uVar4 = 1;
      }
      *(undefined1 *)((long)&(__this->fields).Animation + 4) = uVar4;
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  *(undefined1 *)((long)&(((Characters_Horse_o *)__this_01)->fields).crossfadeCache + 4) = 1;
  (((Characters_Horse_o *)__this_01)->fields)._owner = (Characters_Human_o *)0x41a0000041700000;
  (((Characters_Horse_o *)__this_01)->fields).HorseCache =
       (Characters_HorseComponentCache_o *)0x41f0000041200000;
  (((Characters_Horse_o *)__this_01)->fields).State = 0x42340000;
  Characters_BaseCharacter___ctor((Characters_BaseCharacter_o *)__this_01,method);
  return;
}


// Characters.Horse$$.ctor
// il2cpp: void Characters_Horse___ctor (Characters_Horse_o* __this, const MethodInfo* method);
// 0x42b93f0

void Characters_Horse___ctor(Characters_Horse_o *__this,MethodInfo *method)

{
  *(undefined1 *)((long)&(__this->fields).crossfadeCache + 4) = 1;
  (__this->fields)._owner = (Characters_Human_o *)0x41a0000041700000;
  (__this->fields).HorseCache = (Characters_HorseComponentCache_o *)0x41f0000041200000;
  (__this->fields).State = 0x42340000;
  Characters_BaseCharacter___ctor((Characters_BaseCharacter_o *)__this,method);
  return;
}


