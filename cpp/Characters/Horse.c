// Type: Characters.Horse
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Characters/Horse.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Characters/Human/Horse/Horse.cs  [CHANGED since prior version]
// --------------------------------

// Characters.Horse$$get_Gravity
// il2cpp: UnityEngine_Vector3_o Characters_Horse__get_Gravity (Characters_Horse_o* __this, const MethodInfo* method);
// 0x3faa160

UnityEngine_Vector3_o Characters_Horse__get_Gravity(Characters_Horse_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  UnityEngine_Vector3_o UVar2;
  
  if (DAT_0570266b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_0570266b = '\x01';
  }
  uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x24);
  UVar2.fields.x = (float)uVar1 * 30.0;
  UVar2.fields.y = (float)((ulong)uVar1 >> 0x20) * 30.0;
  UVar2.fields.z = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x2c) * 30.0;
  return (UnityEngine_Vector3_o)UVar2.fields;
}


// Characters.Horse$$Init
// il2cpp: void Characters_Horse__Init (Characters_Horse_o* __this, Characters_Human_o* human, const MethodInfo* method);
// 0x3faa1b0

void Characters_Horse__Init(Characters_Horse_o *__this,Characters_Human_o *human,MethodInfo *method)

{
  MethodInfo *in_RCX;
  
  if (human != (Characters_Human_o *)0x0) {
    Characters_BaseCharacter__Init
              ((Characters_BaseCharacter_o *)__this,1,*(System_String_o **)&(human->fields).AI,
               in_RCX);
    (__this->fields).OutlineComponent = (Outline_o *)human;
    il2cpp_runtime_glue(&(__this->fields).OutlineComponent,human);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.Horse$$CreateCache
// il2cpp: void Characters_Horse__CreateCache (Characters_Horse_o* __this, Utility_BaseComponentCache_o* cache, const MethodInfo* method);
// 0x3faa200

void Characters_Horse__CreateCache
               (Characters_Horse_o *__this,Utility_BaseComponentCache_o *cache,MethodInfo *method)

{
  bool_conflict *pbVar1;
  UnityEngine_GameObject_o *pUVar2;
  System_Action_Hashtable__o *pSVar3;
  Utility_BaseComponentCache_o *__this_00;
  
  if (DAT_0570405a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HorseComponentCache);
    DAT_0570405a = '\x01';
  }
  pUVar2 = UnityEngine_Component__get_gameObject
                     ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pSVar3 = (System_Action_Hashtable__o *)il2cpp_runtime_glue(TypeInfo_HorseComponentCache);
  Characters_HorseComponentCache___ctor
            ((Characters_HorseComponentCache_o *)pSVar3,pUVar2,(MethodInfo *)0x0);
  (__this->fields).OnPlayerPropertiesChanged = pSVar3;
  il2cpp_runtime_glue(&(__this->fields).OnPlayerPropertiesChanged,pSVar3);
  pSVar3 = (__this->fields).OnPlayerPropertiesChanged;
  if (DAT_05703fcd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BaseComponentCache);
    DAT_05703fcd = '\x01';
  }
  pbVar1 = &(__this->fields).Dead;
  *(System_Action_Hashtable__o **)&(__this->fields).Dead = pSVar3;
  il2cpp_runtime_glue(pbVar1);
  if (pSVar3 != (System_Action_Hashtable__o *)0x0) {
    return;
  }
  pUVar2 = UnityEngine_Component__get_gameObject
                     ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  __this_00 = (Utility_BaseComponentCache_o *)il2cpp_runtime_glue(TypeInfo_BaseComponentCache);
  Utility_BaseComponentCache___ctor(__this_00,pUVar2,(MethodInfo *)0x0);
  *(Utility_BaseComponentCache_o **)&(__this->fields).Dead = __this_00;
  il2cpp_runtime_glue(pbVar1,__this_00);
  return;
}


// Characters.Horse$$Jump
// il2cpp: void Characters_Horse__Jump (Characters_Horse_o* __this, const MethodInfo* method);
// 0x3faa300

void Characters_Horse__Jump(Characters_Horse_o *__this,MethodInfo *method)

{
  float fVar1;
  undefined8 uVar2;
  long lVar3;
  UnityEngine_Rigidbody_o *__this_00;
  UnityEngine_Vector3_o force;
  
  if ((0.0 < (__this->fields).RunCloseSpeed) ||
     (*(char *)((long)&(__this->fields).Animation + 4) == '\0')) {
    return;
  }
  lVar3 = *(long *)&(__this->fields).Dead;
  if (lVar3 != 0) {
    __this_00 = *(UnityEngine_Rigidbody_o **)(lVar3 + 0x18);
    if (DAT_056fde1f == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fde1f = '\x01';
    }
    if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
      fVar1 = *(float *)((long)&(__this->fields).HorseCache + 4);
      uVar2 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
      force.fields.x = fVar1 * (float)uVar2;
      force.fields.y = fVar1 * (float)((ulong)uVar2 >> 0x20);
      force.fields.z = fVar1 * *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
      UnityEngine_Rigidbody__AddForce(__this_00,force,2,(MethodInfo *)0x0);
      (__this->fields).RunCloseSpeed = 0.0;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.Horse$$Awake
// il2cpp: void Characters_Horse__Awake (Characters_Horse_o* __this, const MethodInfo* method);
// 0x3faa3b0

void Characters_Horse__Awake(Characters_Horse_o *__this,MethodInfo *method)

{
  long lVar1;
  System_Action_Hashtable__o *pSVar2;
  UnityEngine_ParticleSystem_o *pUVar3;
  bool_conflict bVar4;
  undefined8 in_RAX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  UnityEngine_ParticleSystem_EmissionModule_Fields UStack_18;
  
  UStack_18.m_ParticleSystem = (UnityEngine_ParticleSystem_o *)in_RAX;
  if (DAT_0570405b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HorseAnimations);
    DAT_0570405b = '\x01';
  }
  Characters_BaseCharacter__Awake((Characters_BaseCharacter_o *)__this,method);
  lVar1 = *(long *)&(__this->fields).Dead;
  if ((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x20), lVar1 != 0)) {
    if (*(char *)(lVar1 + 0x68) != '\0') {
      method_00 = extraout_RDX;
      if (*(int *)(TypeInfo_HorseAnimations + 0xe4) == 0) {
        il2cpp_init_class();
        method_00 = extraout_RDX_00;
      }
      Characters_BaseCharacter__CrossFade
                ((Characters_BaseCharacter_o *)__this,
                 (System_String_o *)**(undefined8 **)(TypeInfo_HorseAnimations + 0xb8),0.1,0.0,method_00);
    }
    pSVar2 = (__this->fields).OnPlayerPropertiesChanged;
    if ((pSVar2 != (System_Action_Hashtable__o *)0x0) &&
       (pUVar3 = (UnityEngine_ParticleSystem_o *)(pSVar2->fields).extra_arg,
       pUVar3 != (UnityEngine_ParticleSystem_o *)0x0)) {
      UnityEngine_ParticleSystem__Play(pUVar3,(MethodInfo *)0x0);
      UStack_18.m_ParticleSystem = (UnityEngine_ParticleSystem_o *)0x0;
      pSVar2 = (__this->fields).OnPlayerPropertiesChanged;
      if ((pSVar2 != (System_Action_Hashtable__o *)0x0) &&
         (pUVar3 = (UnityEngine_ParticleSystem_o *)(pSVar2->fields).extra_arg,
         pUVar3 != (UnityEngine_ParticleSystem_o *)0x0)) {
        UStack_18.m_ParticleSystem =
             (UnityEngine_ParticleSystem_o *)
             UnityEngine_ParticleSystem__get_emission(pUVar3,(MethodInfo *)0x0);
        bVar4 = UnityEngine_ParticleSystem_EmissionModule__get_enabled
                          ((UnityEngine_ParticleSystem_EmissionModule_o)&UStack_18,(MethodInfo *)0x0
                          );
        if ((char)bVar4 != '\0') {
          UnityEngine_ParticleSystem_EmissionModule__set_enabled
                    ((UnityEngine_ParticleSystem_EmissionModule_o)&UStack_18,0,(MethodInfo *)0x0);
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.Horse$$ToggleDust
// il2cpp: void Characters_Horse__ToggleDust (Characters_Horse_o* __this, bool toggle, const MethodInfo* method);
// 0x3faa4a0

void Characters_Horse__ToggleDust
               (Characters_Horse_o *__this,bool_conflict toggle,MethodInfo *method)

{
  System_Action_Hashtable__o *pSVar1;
  UnityEngine_ParticleSystem_o *__this_00;
  bool_conflict bVar2;
  UnityEngine_ParticleSystem_EmissionModule_Fields local_10;
  
  local_10.m_ParticleSystem = (UnityEngine_ParticleSystem_o *)0x0;
  pSVar1 = (__this->fields).OnPlayerPropertiesChanged;
  if ((pSVar1 != (System_Action_Hashtable__o *)0x0) &&
     (__this_00 = (UnityEngine_ParticleSystem_o *)(pSVar1->fields).extra_arg,
     __this_00 != (UnityEngine_ParticleSystem_o *)0x0)) {
    local_10.m_ParticleSystem =
         (UnityEngine_ParticleSystem_o *)
         UnityEngine_ParticleSystem__get_emission(__this_00,(MethodInfo *)0x0);
    bVar2 = UnityEngine_ParticleSystem_EmissionModule__get_enabled
                      ((UnityEngine_ParticleSystem_EmissionModule_o)&local_10,(MethodInfo *)0x0);
    if ((char)toggle == '\0') {
      if ((char)bVar2 == '\0') {
        return;
      }
      bVar2 = 0;
    }
    else {
      if ((char)bVar2 != '\0') {
        return;
      }
      bVar2 = 1;
    }
    UnityEngine_ParticleSystem_EmissionModule__set_enabled
              ((UnityEngine_ParticleSystem_EmissionModule_o)&local_10,bVar2,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.Horse$$TeleportToHuman
// il2cpp: void Characters_Horse__TeleportToHuman (Characters_Horse_o* __this, const MethodInfo* method);
// 0x3faa510

void Characters_Horse__TeleportToHuman(Characters_Horse_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  Outline_o *pOVar2;
  Outline_c *pOVar3;
  UnityEngine_Transform_o *pUVar4;
  long lVar5;
  UnityEngine_RaycastHit_o __this_00;
  UnityEngine_LayerMask_o mask;
  int32_t layerMask;
  bool_conflict bVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  UnityEngine_Vector3_o UVar16;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o direction;
  undefined1 in_stack_ffffffffffffff58 [12];
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  int32_t iVar20;
  float local_78;
  float fStack_74;
  undefined1 local_48 [32];
  float fStack_28;
  undefined8 uStack_24;
  
  pOVar2 = (__this->fields).OutlineComponent;
  if (((pOVar2 != (Outline_o *)0x0) && (pOVar3 = pOVar2[1].klass, pOVar3 != (Outline_c *)0x0)) &&
     (pUVar4 = (UnityEngine_Transform_o *)(pOVar3->_1).name,
     pUVar4 != (UnityEngine_Transform_o *)0x0)) {
    UVar16 = UnityEngine_Transform__get_position(pUVar4,(MethodInfo *)0x0);
    fVar8 = UVar16.fields.z;
    if (DAT_0570222a == '\0') {
      il2cpp_init_method_metadata();
      DAT_0570222a = '\x01';
    }
    uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x3c);
    fVar12 = (float)uVar1;
    fVar9 = (float)((ulong)uVar1 >> 0x20);
    fVar11 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x44);
    fVar7 = UnityEngine_Random__Range(-2.0,2.0,(MethodInfo *)0x0);
    fVar11 = fVar11 * fVar7;
    fVar12 = fVar7 * fVar12;
    fVar7 = fVar7 * fVar9;
    if (DAT_056fde21 == '\0') {
      il2cpp_init_method_metadata();
      DAT_056fde21 = '\x01';
    }
    local_78 = UVar16.fields.x;
    fStack_74 = UVar16.fields.y;
    fVar8 = fVar8 + fVar11;
    uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x48);
    fVar10 = (float)uVar1;
    fVar13 = (float)((ulong)uVar1 >> 0x20);
    fVar11 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x50);
    fVar9 = UnityEngine_Random__Range(-2.0,2.0,(MethodInfo *)0x0);
    fVar11 = fVar11 * fVar9;
    fVar10 = fVar9 * fVar10;
    fVar9 = fVar9 * fVar13;
    if (DAT_0570405c == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Physics);
      DAT_0570405c = '\x01';
    }
    fVar10 = local_78 + fVar12 + fVar10;
    fVar8 = fVar8 + fVar11;
    fStack_28 = 0.0;
    uStack_24 = 0;
    local_48._16_8_ = (InvokerMethod)0x0;
    local_48._24_4_ = 0;
    local_48._28_4_ = 0.0;
    local_48._0_8_ = (Il2CppMethodPointer)0x0;
    local_48._8_8_ = (Il2CppMethodPointer)0x0;
    if (DAT_056fde1f == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fde1f = '\x01';
    }
    uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
    fVar12 = (float)uVar1;
    fVar14 = (float)((ulong)uVar1 >> 0x20);
    fVar11 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
    UVar16.fields.z = fVar8 + fVar11;
    fVar13 = -fVar12;
    fVar15 = -fVar14;
    iVar20 = -0x80000000;
    fVar11 = -fVar11;
    uVar17 = 0x80000000;
    uVar18 = 0x80000000;
    uVar19 = 0x80000000;
    mask.fields.m_Mask =
         (UnityEngine_LayerMask_Fields)
         (*(__this->klass->vtable)._60_get_GroundMask.methodPtr)(__this);
    layerMask = UnityEngine_LayerMask__op_Implicit(mask,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UVar16.fields.y = fStack_74 + fVar7 + fVar9 + fVar14;
    UVar16.fields.x = fVar10 + fVar12;
    direction.fields.y = fVar15;
    direction.fields.x = fVar13;
    direction.fields.z = fVar11;
    bVar6 = UnityEngine_Physics__Raycast
                      (UVar16,direction,(UnityEngine_RaycastHit_o *)local_48,1000.0,layerMask,
                       (MethodInfo *)0x0);
    if ((char)bVar6 == '\0') {
      fVar11 = 1.0;
    }
    else {
      __this_00.fields.m_Normal.fields.x = fVar8;
      __this_00.fields.m_Point.fields.x = (float)in_stack_ffffffffffffff58._0_4_;
      __this_00.fields.m_Point.fields.y = (float)in_stack_ffffffffffffff58._4_4_;
      __this_00.fields.m_Point.fields.z = (float)in_stack_ffffffffffffff58._8_4_;
      __this_00.fields.m_Normal.fields.y = fVar11;
      __this_00.fields.m_Normal.fields.z = (float)uVar17;
      __this_00.fields.m_FaceID = uVar18;
      __this_00.fields.m_Distance = (float)uVar19;
      __this_00.fields.m_UV.fields.x = fVar13;
      __this_00.fields.m_UV.fields.y = fVar15;
      __this_00.fields.m_Collider = iVar20;
      UVar16 = UnityEngine_RaycastHit__get_point(__this_00,(MethodInfo *)local_48);
      fVar11 = UVar16.fields.y + 1.0;
    }
    lVar5 = *(long *)&(__this->fields).Dead;
    if ((lVar5 != 0) &&
       (pUVar4 = *(UnityEngine_Transform_o **)(lVar5 + 0x10),
       pUVar4 != (UnityEngine_Transform_o *)0x0)) {
      value.fields.y = fVar11;
      value.fields.x = fVar10;
      value.fields.z = fVar8;
      UnityEngine_Transform__set_position(pUVar4,value,(MethodInfo *)0x0);
      (__this->fields).WalkSpeed = *(float *)&(__this->fields).HorseCache;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.Horse$$GetHeight
// il2cpp: float Characters_Horse__GetHeight (Characters_Horse_o* __this, UnityEngine_Vector3_o pt, const MethodInfo* method);
// 0x3faa800

float Characters_Horse__GetHeight
                (Characters_Horse_o *__this,UnityEngine_Vector3_o pt,MethodInfo *method)

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
  if (DAT_0570405c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Physics);
    DAT_0570405c = '\x01';
  }
  fStack_18 = 0.0;
  uStack_14 = 0;
  local_38._16_8_ = (InvokerMethod)0x0;
  local_38._24_4_ = 0;
  local_38._28_4_ = 0.0;
  local_38._0_8_ = (Il2CppMethodPointer)0x0;
  local_38._8_8_ = (Il2CppMethodPointer)0x0;
  if (DAT_056fde1f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_056fde1f = '\x01';
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
       (UnityEngine_LayerMask_Fields)(*(__this->klass->vtable)._60_get_GroundMask.methodPtr)(__this)
  ;
  layerMask = UnityEngine_LayerMask__op_Implicit(mask,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
    il2cpp_init_class();
  }
  UVar10.fields.y = fVar5;
  UVar10.fields.x = fVar3;
  UVar10.fields.z = fVar8;
  direction.fields.z = fVar9;
  direction.fields.x = (float)(int)(uVar1 ^ 0x8000000080000000);
  direction.fields.y = (float)(int)((uVar1 ^ 0x8000000080000000) >> 0x20);
  bVar2 = UnityEngine_Physics__Raycast
                    (UVar10,direction,(UnityEngine_RaycastHit_o *)local_38,1000.0,layerMask,
                     (MethodInfo *)0x0);
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
// 0x3faa940

void Characters_Horse__UpdateIdle(Characters_Horse_o *__this,MethodInfo *method)

{
  long lVar1;
  Characters_AnimationHandler_o *pCVar2;
  char cVar3;
  bool_conflict bVar4;
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
  MethodInfo *pMVar5;
  MethodInfo *method_03;
  MethodInfo *extraout_RDX_10;
  MethodInfo *extraout_RDX_11;
  System_String_o *pSVar6;
  float fVar7;
  float fVar8;
  
  if (DAT_0570405d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HorseAnimations);
    il2cpp_init_method_metadata(&TypeInfo_HorseSounds);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata();
    DAT_0570405d = '\x01';
  }
  fVar8 = (float)(__this->fields).FollowingEnabled;
  fVar7 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  fVar8 = fVar8 - fVar7;
  (__this->fields).FollowingEnabled = (bool_conflict)fVar8;
  if (0.0 < fVar8) {
    return;
  }
  lVar1 = *(long *)&(__this->fields)._cameraFPS;
  if (*(int *)(TypeInfo_HorseAnimations + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0x3c) == '\0') {
      bVar4 = System_String__op_Equality
                        (*(System_String_o **)(lVar1 + 0x30),
                         (System_String_o *)**(undefined8 **)(TypeInfo_HorseAnimations + 0xb8),(MethodInfo *)0x0
                        );
      cVar3 = (char)bVar4;
      pMVar5 = extraout_RDX_02;
    }
    else {
      if (*(UnityEngine_Animation_o **)(lVar1 + 0x10) == (UnityEngine_Animation_o *)0x0)
      goto LAB_03faad39;
      bVar4 = UnityEngine_Animation__IsPlaying
                        (*(UnityEngine_Animation_o **)(lVar1 + 0x10),
                         (System_String_o *)**(undefined8 **)(TypeInfo_HorseAnimations + 0xb8),(MethodInfo *)0x0
                        );
      cVar3 = (char)bVar4;
      pMVar5 = extraout_RDX;
    }
    if (cVar3 == '\0') {
      if (*(int *)(TypeInfo_HorseAnimations + 0xe4) == 0) {
        il2cpp_init_class();
        pMVar5 = extraout_RDX_03;
      }
      Characters_BaseCharacter__CrossFade
                ((Characters_BaseCharacter_o *)__this,
                 (System_String_o *)**(undefined8 **)(TypeInfo_HorseAnimations + 0xb8),0.1,0.0,pMVar5);
      fVar8 = UnityEngine_Random__Range(6.0,9.0,(MethodInfo *)0x0);
LAB_03faaae9:
      (__this->fields).FollowingEnabled = (bool_conflict)fVar8;
      return;
    }
    fVar8 = UnityEngine_Random__Range(0.0,1.0,(MethodInfo *)0x0);
    if (0.25 <= fVar8) {
      if (fVar8 < 0.5) {
        pMVar5 = extraout_RDX_00;
        if (*(int *)(TypeInfo_HorseAnimations + 0xe4) == 0) {
          il2cpp_init_class();
          pMVar5 = extraout_RDX_04;
        }
        pSVar6 = *(System_String_o **)(*(long *)(TypeInfo_HorseAnimations + 0xb8) + 0x10);
        Characters_BaseCharacter__CrossFade
                  ((Characters_BaseCharacter_o *)__this,pSVar6,0.1,0.0,pMVar5);
        pCVar2 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
        if (pCVar2 != (Characters_AnimationHandler_o *)0x0) {
          fVar8 = Characters_AnimationHandler__GetLength(pCVar2,pSVar6,method_01);
          (__this->fields).FollowingEnabled = (bool_conflict)fVar8;
          lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
          if ((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x78), lVar1 != 0)) {
            if (*(char *)(lVar1 + 0x11) == '\0') {
              return;
            }
            pMVar5 = extraout_RDX_05;
            if (*(int *)(TypeInfo_HorseSounds + 0xe4) == 0) {
              il2cpp_init_class();
              pMVar5 = extraout_RDX_06;
            }
            pSVar6 = (System_String_o *)**(undefined8 **)(TypeInfo_HorseSounds + 0xb8);
            goto LAB_03faad28;
          }
        }
      }
      else {
        pMVar5 = extraout_RDX_00;
        if (*(int *)(TypeInfo_HorseAnimations + 0xe4) == 0) {
          il2cpp_init_class();
          pMVar5 = extraout_RDX_07;
        }
        if (0.75 <= fVar8) {
          pSVar6 = *(System_String_o **)(*(long *)(TypeInfo_HorseAnimations + 0xb8) + 0x20);
          Characters_BaseCharacter__CrossFade
                    ((Characters_BaseCharacter_o *)__this,pSVar6,0.1,0.0,pMVar5);
          pCVar2 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
          if (pCVar2 != (Characters_AnimationHandler_o *)0x0) {
            fVar8 = Characters_AnimationHandler__GetLength(pCVar2,pSVar6,method_03);
            (__this->fields).FollowingEnabled = (bool_conflict)fVar8;
            lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
            if ((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x78), lVar1 != 0)) {
              if (*(char *)(lVar1 + 0x11) == '\0') {
                return;
              }
              pMVar5 = extraout_RDX_10;
              if (*(int *)(TypeInfo_HorseSounds + 0xe4) == 0) {
                il2cpp_init_class();
                pMVar5 = extraout_RDX_11;
              }
              pSVar6 = *(System_String_o **)(*(long *)(TypeInfo_HorseSounds + 0xb8) + 0x10);
              goto LAB_03faad28;
            }
          }
        }
        else {
          pSVar6 = *(System_String_o **)(*(long *)(TypeInfo_HorseAnimations + 0xb8) + 0x18);
          Characters_BaseCharacter__CrossFade
                    ((Characters_BaseCharacter_o *)__this,pSVar6,0.1,0.0,pMVar5);
          pCVar2 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
          if (pCVar2 != (Characters_AnimationHandler_o *)0x0) {
            fVar8 = Characters_AnimationHandler__GetLength(pCVar2,pSVar6,method_02);
            (__this->fields).FollowingEnabled = (bool_conflict)fVar8;
            lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
            if ((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x78), lVar1 != 0)) {
              if (*(char *)(lVar1 + 0x11) == '\0') {
                return;
              }
              pMVar5 = extraout_RDX_08;
              if (*(int *)(TypeInfo_HorseSounds + 0xe4) == 0) {
                il2cpp_init_class();
                pMVar5 = extraout_RDX_09;
              }
              pSVar6 = *(System_String_o **)(*(long *)(TypeInfo_HorseSounds + 0xb8) + 8);
LAB_03faad28:
              Characters_BaseCharacter__PlaySound
                        ((Characters_BaseCharacter_o *)__this,pSVar6,pMVar5);
              return;
            }
          }
        }
      }
    }
    else {
      pMVar5 = extraout_RDX_00;
      if (*(int *)(TypeInfo_HorseAnimations + 0xe4) == 0) {
        il2cpp_init_class();
        pMVar5 = extraout_RDX_01;
      }
      pSVar6 = *(System_String_o **)(*(long *)(TypeInfo_HorseAnimations + 0xb8) + 8);
      Characters_BaseCharacter__CrossFade
                ((Characters_BaseCharacter_o *)__this,pSVar6,0.1,0.0,pMVar5);
      pCVar2 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
      if (pCVar2 != (Characters_AnimationHandler_o *)0x0) {
        fVar8 = Characters_AnimationHandler__GetLength(pCVar2,pSVar6,method_00);
        goto LAB_03faaae9;
      }
    }
  }
LAB_03faad39:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.Horse$$IdleOneShot
// il2cpp: void Characters_Horse__IdleOneShot (Characters_Horse_o* __this, System_String_o* animation, const MethodInfo* method);
// 0x3faad40

void Characters_Horse__IdleOneShot
               (Characters_Horse_o *__this,System_String_o *animation,MethodInfo *method)

{
  Characters_AnimationHandler_o *__this_00;
  MethodInfo *method_00;
  float fVar1;
  
  Characters_BaseCharacter__CrossFade((Characters_BaseCharacter_o *)__this,animation,0.1,0.0,method)
  ;
  __this_00 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
  if (__this_00 != (Characters_AnimationHandler_o *)0x0) {
    fVar1 = Characters_AnimationHandler__GetLength(__this_00,animation,method_00);
    (__this->fields).FollowingEnabled = (bool_conflict)fVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.Horse$$Update
// il2cpp: void Characters_Horse__Update (Characters_Horse_o* __this, const MethodInfo* method);
// 0x3faad90

void Characters_Horse__Update(Characters_Horse_o *__this,MethodInfo *method)

{
  long lVar1;
  Outline_o *pOVar2;
  UnityEngine_Rigidbody_o *pUVar3;
  Outline_c *pOVar4;
  UnityEngine_Transform_o *pUVar5;
  bool_conflict bVar6;
  UnityEngine_GameObject_o *targetGo;
  MethodInfo *method_00;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 extraout_XMM0_Dc;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Dd;
  undefined1 auVar13 [16];
  UnityEngine_Vector3_o UVar14;
  UnityEngine_Vector3_o UVar15;
  UnityEngine_Quaternion_o UVar16;
  UnityEngine_Quaternion_o UVar17;
  float local_68;
  float fStack_64;
  undefined8 local_58;
  undefined8 local_48;
  float local_28;
  undefined8 uVar12;
  
  if (DAT_0570405e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata();
    DAT_0570405e = '\x01';
  }
  lVar1 = *(long *)&(__this->fields).Dead;
  if ((lVar1 == 0) || (lVar1 = *(long *)(lVar1 + 0x20), lVar1 == 0)) goto LAB_03fab408;
  if (*(char *)(lVar1 + 0x68) == '\0') {
    return;
  }
  fVar9 = (__this->fields).RunCloseSpeed;
  fVar7 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  (__this->fields).RunCloseSpeed = fVar9 - fVar7;
  pOVar2 = (__this->fields).OutlineComponent;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pOVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
LAB_03faae60:
    targetGo = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_init_class();
    }
    Photon_Pun_PhotonNetwork__Destroy(targetGo,(MethodInfo *)0x0);
    return;
  }
  pOVar2 = (__this->fields).OutlineComponent;
  if (pOVar2 == (Outline_o *)0x0) goto LAB_03fab408;
  if (*(char *)&(pOVar2->fields)._namesToIgnore != '\0') goto LAB_03faae60;
  if (pOVar2[2].fields.precomputeOutline == 1) {
    if (*(char *)((long)&pOVar2[1].fields.outlineMaskAndFillMaterial + 4) == '\0') {
      *(undefined4 *)&(__this->fields).crossfadeCache = 3;
      return;
    }
    lVar1 = *(long *)&(__this->fields).Dead;
    if ((lVar1 != 0) &&
       (pUVar3 = *(UnityEngine_Rigidbody_o **)(lVar1 + 0x18),
       pUVar3 != (UnityEngine_Rigidbody_o *)0x0)) {
      UVar16 = UnityEngine_Rigidbody__get_rotation(pUVar3,(MethodInfo *)0x0);
      fVar9 = UVar16.fields.z;
      fVar7 = UVar16.fields.w;
      pOVar2 = (__this->fields).OutlineComponent;
      if (pOVar2 != (Outline_o *)0x0) {
        local_58 = (*pOVar2->klass[4].vtable._0_Equals.methodPtr)();
        fVar8 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
        UVar17.fields.z = fVar9;
        UVar17.fields.w = fVar7;
        UVar17.fields.x = (float)(undefined4)local_58;
        UVar17.fields.y = (float)local_58._4_4_;
        UVar16 = UnityEngine_Quaternion__Lerp(UVar16,UVar17,fVar8 * 5.0,(MethodInfo *)0x0);
        UnityEngine_Rigidbody__MoveRotation(pUVar3,UVar16,(MethodInfo *)0x0);
        pOVar2 = (__this->fields).OutlineComponent;
        if (pOVar2 != (Outline_o *)0x0) {
          if (*(char *)((long)&pOVar2[4].fields.outlineMaskAndFillMaterial + 4) != '\0') {
            *(undefined4 *)&(__this->fields).crossfadeCache = 5;
            return;
          }
          *(undefined4 *)&(__this->fields).crossfadeCache = 4;
          return;
        }
      }
    }
    goto LAB_03fab408;
  }
  if (*(char *)((long)&(__this->fields).crossfadeCache + 4) == '\0') {
    return;
  }
  fVar9 = (__this->fields).WalkSpeed;
  fVar7 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  (__this->fields).WalkSpeed = fVar9 - fVar7;
  pOVar2 = (__this->fields).OutlineComponent;
  if (((pOVar2 == (Outline_o *)0x0) || (pOVar4 = pOVar2[1].klass, pOVar4 == (Outline_c *)0x0)) ||
     (pUVar5 = (UnityEngine_Transform_o *)(pOVar4->_1).name,
     pUVar5 == (UnityEngine_Transform_o *)0x0)) goto LAB_03fab408;
  UVar14 = UnityEngine_Transform__get_position(pUVar5,(MethodInfo *)0x0);
  lVar1 = *(long *)&(__this->fields).Dead;
  if ((lVar1 == 0) ||
     (pUVar5 = *(UnityEngine_Transform_o **)(lVar1 + 0x10), pUVar5 == (UnityEngine_Transform_o *)0x0
     )) goto LAB_03fab408;
  UVar15 = UnityEngine_Transform__get_position(pUVar5,(MethodInfo *)0x0);
  if (DAT_056fdea6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056fdea6 = '\x01';
  }
  fVar7 = UVar14.fields.x - UVar15.fields.x;
  fStack_64 = UVar14.fields.y;
  fStack_64 = fStack_64 - UVar15.fields.y;
  fVar9 = UVar14.fields.z - UVar15.fields.z;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_init_class();
  }
  fVar9 = fVar9 * fVar9 + fStack_64 * fStack_64 + fVar7 * fVar7;
  if (fVar9 < 0.0) {
    fVar9 = sqrtf(fVar9);
    pOVar2 = (__this->fields).OutlineComponent;
  }
  else {
    fVar9 = SQRT(fVar9);
    pOVar2 = (__this->fields).OutlineComponent;
  }
  if (((pOVar2 == (Outline_o *)0x0) || (pOVar2[1].klass == (Outline_c *)0x0)) ||
     (pUVar5 = (UnityEngine_Transform_o *)((pOVar2[1].klass)->_1).name,
     pUVar5 == (UnityEngine_Transform_o *)0x0)) goto LAB_03fab408;
  UVar14 = UnityEngine_Transform__get_position(pUVar5,(MethodInfo *)0x0);
  lVar1 = *(long *)&(__this->fields).Dead;
  if ((lVar1 == 0) ||
     (pUVar5 = *(UnityEngine_Transform_o **)(lVar1 + 0x10), pUVar5 == (UnityEngine_Transform_o *)0x0
     )) goto LAB_03fab408;
  method_00 = (MethodInfo *)0x0;
  UVar15 = UnityEngine_Transform__get_position(pUVar5,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
    il2cpp_init_class();
  }
  fVar7 = Utility_Util__DistanceIgnoreY(UVar14,UVar15,(MethodInfo *)0x0);
  if ((fVar9 <= 20.0) || (0.0 < (__this->fields).WalkSpeed)) {
    if (fVar7 < 5.0) {
      *(undefined4 *)&(__this->fields).crossfadeCache = 0;
      (__this->fields).WalkSpeed = *(float *)&(__this->fields).HorseCache;
      return;
    }
    if (20.0 <= fVar7) {
      *(undefined4 *)&(__this->fields).crossfadeCache = 2;
      goto LAB_03fab231;
    }
    *(undefined4 *)&(__this->fields).crossfadeCache = 1;
    (__this->fields).WalkSpeed = *(float *)&(__this->fields).HorseCache;
    pOVar2 = (__this->fields).OutlineComponent;
  }
  else {
    Characters_Horse__TeleportToHuman(__this,method_00);
    if (1 < *(int *)&(__this->fields).crossfadeCache - 1U) {
      return;
    }
LAB_03fab231:
    pOVar2 = (__this->fields).OutlineComponent;
  }
  if (((pOVar2 != (Outline_o *)0x0) && (pOVar2[1].klass != (Outline_c *)0x0)) &&
     (pUVar5 = (UnityEngine_Transform_o *)((pOVar2[1].klass)->_1).name,
     pUVar5 != (UnityEngine_Transform_o *)0x0)) {
    UVar14 = UnityEngine_Transform__get_position(pUVar5,(MethodInfo *)0x0);
    lVar1 = *(long *)&(__this->fields).Dead;
    if ((lVar1 != 0) &&
       (pUVar5 = *(UnityEngine_Transform_o **)(lVar1 + 0x10),
       pUVar5 != (UnityEngine_Transform_o *)0x0)) {
      UVar15 = UnityEngine_Transform__get_position(pUVar5,(MethodInfo *)0x0);
      lVar1 = *(long *)&(__this->fields).Dead;
      if ((lVar1 != 0) &&
         (pUVar3 = *(UnityEngine_Rigidbody_o **)(lVar1 + 0x18),
         pUVar3 != (UnityEngine_Rigidbody_o *)0x0)) {
        UVar16 = UnityEngine_Rigidbody__get_rotation(pUVar3,(MethodInfo *)0x0);
        if (DAT_056fde20 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Math);
          DAT_056fde20 = '\x01';
        }
        local_68 = UVar14.fields.x;
        local_28 = UVar15.fields.x;
        local_68 = local_68 - local_28;
        fVar9 = UVar14.fields.z - UVar15.fields.z;
        if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
          il2cpp_init_class();
        }
        uVar10 = 0;
        uVar11 = 0;
        fVar7 = fVar9 * fVar9 + local_68 * local_68 + 0.0;
        if (fVar7 < 0.0) {
          fVar7 = sqrtf(fVar7);
          uVar10 = extraout_XMM0_Dc;
          uVar11 = extraout_XMM0_Dd;
        }
        else {
          fVar7 = SQRT(fVar7);
        }
        if (1e-05 < fVar7) {
          fVar9 = fVar9 / fVar7;
          auVar13._4_4_ = fVar7;
          auVar13._0_4_ = fVar7;
          auVar13._8_4_ = uVar10;
          auVar13._12_4_ = uVar11;
          auVar13 = divps(ZEXT416((uint)local_68),auVar13);
          uVar12 = auVar13._0_8_;
        }
        else {
          if (DAT_056fdd15 == '\0') {
            il2cpp_init_method_metadata();
            DAT_056fdd15 = '\x01';
          }
          uVar12 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
          fVar9 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
        }
        UVar14.fields.z = fVar9;
        UVar14.fields.x = (float)(int)uVar12;
        UVar14.fields.y = (float)(int)((ulong)uVar12 >> 0x20);
        UVar17 = UnityEngine_Quaternion__LookRotation(UVar14,(MethodInfo *)0x0);
        fVar9 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
        UVar16 = UnityEngine_Quaternion__Lerp(UVar16,UVar17,fVar9 * 10.0,(MethodInfo *)0x0);
        UnityEngine_Rigidbody__MoveRotation(pUVar3,UVar16,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_03fab408:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.Horse$$FixedUpdate
// il2cpp: void Characters_Horse__FixedUpdate (Characters_Horse_o* __this, const MethodInfo* method);
// 0x3fab410

void Characters_Horse__FixedUpdate(Characters_Horse_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  undefined8 uVar2;
  uint uVar3;
  long lVar4;
  Outline_o *pOVar5;
  UnityEngine_Material_o *pUVar6;
  UnityEngine_Rigidbody_o *pUVar7;
  UnityEngine_Component_o *__this_00;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  UnityEngine_Vector3_Fields fromDirection;
  long lVar11;
  bool_conflict bVar12;
  Characters_Human_o **ppCVar13;
  long lVar14;
  UnityEngine_Transform_o *__this_01;
  int32_t mode;
  UnityEngine_Rigidbody_o *pUVar15;
  float fVar16;
  float fVar17;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dc_03;
  undefined4 extraout_XMM0_Dc_04;
  undefined4 extraout_XMM0_Dc_05;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  undefined4 extraout_XMM0_Dd_03;
  undefined4 extraout_XMM0_Dd_04;
  undefined4 extraout_XMM0_Dd_05;
  float fVar18;
  float fVar19;
  undefined4 in_XMM1_Dc;
  undefined4 uVar20;
  undefined4 in_XMM1_Dd;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar30;
  undefined1 auVar31 [16];
  float fVar32;
  float fVar33;
  float fVar34;
  UnityEngine_Vector3_o UVar35;
  UnityEngine_Vector3_o force;
  UnityEngine_Vector3_o force_00;
  UnityEngine_Vector3_o force_01;
  UnityEngine_Quaternion_o UVar36;
  UnityEngine_Quaternion_o UVar37;
  float local_78;
  float fStack_74;
  float local_48;
  float fStack_44;
  undefined8 uVar24;
  
  if (DAT_0570405f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_0570405f = '\x01';
  }
  Characters_BaseCharacter__FixedUpdate((Characters_BaseCharacter_o *)__this,method);
  lVar4 = *(long *)&(__this->fields).Dead;
  if ((lVar4 == 0) || (lVar4 = *(long *)(lVar4 + 0x20), lVar4 == 0)) goto LAB_03fac195;
  if (*(char *)(lVar4 + 0x68) == '\0') {
    return;
  }
  pOVar5 = (__this->fields).OutlineComponent;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar12 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pOVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar12 != '\0') {
    return;
  }
  pOVar5 = (__this->fields).OutlineComponent;
  if (pOVar5 == (Outline_o *)0x0) goto LAB_03fac195;
  if (*(char *)&(pOVar5->fields)._namesToIgnore != '\0') {
    return;
  }
  (*(__this->klass->vtable)._96_CheckGround.methodPtr)(__this);
  lVar4 = *(long *)&(__this->fields).Dead;
  if ((lVar4 == 0) ||
     (pUVar15 = *(UnityEngine_Rigidbody_o **)(lVar4 + 0x18),
     pUVar15 == (UnityEngine_Rigidbody_o *)0x0)) goto LAB_03fac195;
  UnityEngine_Rigidbody__set_angularDrag(pUVar15,6.0,(MethodInfo *)0x0);
  if ((*(char *)((long)&(__this->fields).Animation + 4) != '\0') &&
     (uVar3 = *(uint *)&(__this->fields).crossfadeCache, uVar3 < 6)) {
    if ((0x36U >> (uVar3 & 0x1f) & 1) == 0) {
      lVar4 = *(long *)&(__this->fields).Dead;
      if ((lVar4 == 0) ||
         (pUVar15 = *(UnityEngine_Rigidbody_o **)(lVar4 + 0x18),
         pUVar15 == (UnityEngine_Rigidbody_o *)0x0)) goto LAB_03fac195;
      UVar35 = UnityEngine_Rigidbody__get_velocity(pUVar15,(MethodInfo *)0x0);
      if (DAT_056fde1c == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Math);
        DAT_056fde1c = '\x01';
      }
      if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
        il2cpp_init_class();
      }
      fVar19 = UVar35.fields.z * UVar35.fields.z +
               UVar35.fields.y * UVar35.fields.y + UVar35.fields.x * UVar35.fields.x;
      if (fVar19 < 0.0) {
        fVar19 = sqrtf(fVar19);
        lVar14._0_4_ = (__this->fields).Dead;
        lVar14._4_4_ = (__this->fields).CustomDamageEnabled;
      }
      else {
        fVar19 = SQRT(fVar19);
        lVar14._0_4_ = (__this->fields).Dead;
        lVar14._4_4_ = (__this->fields).CustomDamageEnabled;
      }
      if (lVar14 == 0) goto LAB_03fac195;
      uVar20 = 0;
      uVar21 = 0;
      pUVar15 = *(UnityEngine_Rigidbody_o **)(lVar14 + 0x18);
      if (fVar19 < 1.0) {
        if (DAT_056fde1f == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Vector3);
          DAT_056fde1f = '\x01';
          lVar14._0_4_ = (__this->fields).Dead;
          lVar14._4_4_ = (__this->fields).CustomDamageEnabled;
        }
        if ((lVar14 == 0) ||
           (*(UnityEngine_Rigidbody_o **)(lVar14 + 0x18) == (UnityEngine_Rigidbody_o *)0x0))
        goto LAB_03fac195;
        uVar24 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
        fVar19 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
        UVar35 = UnityEngine_Rigidbody__get_velocity
                           (*(UnityEngine_Rigidbody_o **)(lVar14 + 0x18),(MethodInfo *)0x0);
        fVar18 = UVar35.fields.y;
        if (pUVar15 == (UnityEngine_Rigidbody_o *)0x0) goto LAB_03fac195;
        local_78 = (float)uVar24;
        fStack_74 = (float)((ulong)uVar24 >> 0x20);
        UVar35.fields.y = fStack_74 * fVar18;
        UVar35.fields.x = local_78 * fVar18;
        UVar35.fields.z = fVar19 * fVar18;
        UnityEngine_Rigidbody__set_velocity(pUVar15,UVar35,(MethodInfo *)0x0);
        goto joined_r0x03fab93f;
      }
      if (pUVar15 == (UnityEngine_Rigidbody_o *)0x0) goto LAB_03fac195;
      UVar35 = UnityEngine_Rigidbody__get_velocity(pUVar15,(MethodInfo *)0x0);
      fVar19 = UVar35.fields.z;
      auVar26._0_8_ = UVar35.fields._0_8_;
      auVar26._8_4_ = extraout_XMM0_Dc_01;
      auVar26._12_4_ = extraout_XMM0_Dd_01;
      auVar29._8_4_ = extraout_XMM0_Dc_01;
      auVar29._0_8_ = auVar26._0_8_;
      auVar29._12_4_ = extraout_XMM0_Dd_01;
      if (DAT_056fde20 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Math);
        DAT_056fde20 = '\x01';
        auVar26 = auVar29;
      }
      if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
        il2cpp_init_class();
        auVar26 = auVar29;
      }
      fVar18 = fVar19 * fVar19 + auVar26._4_4_ * auVar26._4_4_ + auVar26._0_4_ * auVar26._0_4_;
      if (fVar18 < 0.0) {
        fVar18 = sqrtf(fVar18);
        uVar20 = extraout_XMM0_Dc_04;
        uVar21 = extraout_XMM0_Dd_04;
        if (1e-05 < fVar18) goto LAB_03fabc0a;
LAB_03fabc26:
        if (DAT_056fdd15 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Vector3);
          DAT_056fdd15 = '\x01';
        }
        uVar24 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
        fVar19 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
        pOVar5 = (__this->fields).OutlineComponent;
      }
      else {
        fVar18 = SQRT(fVar18);
        auVar29 = auVar26;
        if (fVar18 <= 1e-05) goto LAB_03fabc26;
LAB_03fabc0a:
        fVar19 = fVar19 / fVar18;
        auVar10._4_4_ = fVar18;
        auVar10._0_4_ = fVar18;
        auVar10._8_4_ = uVar20;
        auVar10._12_4_ = uVar21;
        auVar28 = divps(auVar29,auVar10);
        uVar24 = auVar28._0_8_;
        pOVar5 = (__this->fields).OutlineComponent;
      }
      if ((((pOVar5 == (Outline_o *)0x0) ||
           (pUVar6 = pOVar5[2].fields.outlineMaskAndFillMaterial,
           pUVar6 == (UnityEngine_Material_o *)0x0)) ||
          (lVar4 = *(long *)&(__this->fields).Dead, lVar4 == 0)) ||
         (pUVar7 = *(UnityEngine_Rigidbody_o **)(lVar4 + 0x18),
         pUVar7 == (UnityEngine_Rigidbody_o *)0x0)) goto LAB_03fac195;
      fVar18 = *(float *)((long)&pUVar6[2].klass + 4);
      UVar35 = UnityEngine_Rigidbody__get_velocity(pUVar7,(MethodInfo *)0x0);
      if (DAT_056fde1c == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Math);
        DAT_056fde1c = '\x01';
      }
      if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
        il2cpp_init_class();
      }
      fVar22 = UVar35.fields.z * UVar35.fields.z +
               UVar35.fields.y * UVar35.fields.y + UVar35.fields.x * UVar35.fields.x;
      if (fVar22 < 0.0) {
        fVar22 = sqrtf(fVar22);
      }
      else {
        fVar22 = SQRT(fVar22);
      }
      local_78 = (float)uVar24;
      fStack_74 = (float)((ulong)uVar24 >> 0x20);
      if (fVar22 * 0.5 <= fVar18) {
        fVar18 = fVar22 * 0.5;
      }
      fVar22 = -(local_78 * fVar18);
      fVar16 = -(fStack_74 * fVar18);
      fVar19 = -(fVar19 * fVar18);
      mode = 5;
    }
    else {
      pOVar5 = (__this->fields).OutlineComponent;
      if ((pOVar5 == (Outline_o *)0x0) ||
         (pUVar6 = pOVar5[2].fields.outlineMaskAndFillMaterial,
         pUVar6 == (UnityEngine_Material_o *)0x0)) goto LAB_03fac195;
      if (uVar3 == 1) {
        ppCVar13 = (Characters_Human_o **)((long)&(__this->fields)._owner + 4);
        lVar4._0_4_ = (__this->fields).Dead;
        lVar4._4_4_ = (__this->fields).CustomDamageEnabled;
      }
      else if (uVar3 == 5) {
        ppCVar13 = &(__this->fields)._owner;
        lVar4._0_4_ = (__this->fields).Dead;
        lVar4._4_4_ = (__this->fields).CustomDamageEnabled;
      }
      else {
        ppCVar13 = (Characters_Human_o **)((long)&pUVar6[2].klass + 4);
        lVar4._0_4_ = (__this->fields).Dead;
        lVar4._4_4_ = (__this->fields).CustomDamageEnabled;
      }
      if ((lVar4 == 0) ||
         (*(UnityEngine_Transform_o **)(lVar4 + 0x10) == (UnityEngine_Transform_o *)0x0))
      goto LAB_03fac195;
      fVar19 = *(float *)ppCVar13;
      pUVar15 = *(UnityEngine_Rigidbody_o **)(lVar4 + 0x18);
      UVar35 = UnityEngine_Transform__get_forward
                         (*(UnityEngine_Transform_o **)(lVar4 + 0x10),(MethodInfo *)0x0);
      pOVar5 = (__this->fields).OutlineComponent;
      if ((pOVar5 == (Outline_o *)0x0) ||
         ((pUVar6 = pOVar5[2].fields.outlineMaskAndFillMaterial,
          pUVar6 == (UnityEngine_Material_o *)0x0 || (pUVar15 == (UnityEngine_Rigidbody_o *)0x0))))
      goto LAB_03fac195;
      fVar18 = *(float *)((long)&pUVar6[2].klass + 4);
      force.fields.z = UVar35.fields.z * fVar18;
      force.fields.x = UVar35.fields.x * fVar18;
      force.fields.y = UVar35.fields.y * fVar18;
      UnityEngine_Rigidbody__AddForce(pUVar15,force,5,(MethodInfo *)0x0);
      lVar4 = *(long *)&(__this->fields).Dead;
      if ((lVar4 == 0) ||
         (pUVar15 = *(UnityEngine_Rigidbody_o **)(lVar4 + 0x18),
         pUVar15 == (UnityEngine_Rigidbody_o *)0x0)) goto LAB_03fac195;
      UVar35 = UnityEngine_Rigidbody__get_velocity(pUVar15,(MethodInfo *)0x0);
      if (DAT_056fde1c == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Math);
        in_XMM1_Dc = 0;
        in_XMM1_Dd = 0;
        DAT_056fde1c = '\x01';
      }
      if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
        il2cpp_init_class();
        in_XMM1_Dc = 0;
        in_XMM1_Dd = 0;
      }
      fVar18 = UVar35.fields.z * UVar35.fields.z +
               UVar35.fields.y * UVar35.fields.y + UVar35.fields.x * UVar35.fields.x;
      if (fVar18 < 0.0) {
        fVar18 = sqrtf(fVar18);
      }
      else {
        fVar18 = SQRT(fVar18);
      }
      if (fVar18 < fVar19) goto joined_r0x03fab93f;
      lVar4 = *(long *)&(__this->fields).Dead;
      if ((lVar4 == 0) ||
         (pUVar15 = *(UnityEngine_Rigidbody_o **)(lVar4 + 0x18),
         pUVar15 == (UnityEngine_Rigidbody_o *)0x0)) goto LAB_03fac195;
      UnityEngine_Rigidbody__set_angularDrag(pUVar15,1.0,(MethodInfo *)0x0);
      pOVar5 = (__this->fields).OutlineComponent;
      if ((pOVar5 == (Outline_o *)0x0) ||
         (((pUVar6 = pOVar5[2].fields.outlineMaskAndFillMaterial,
           pUVar6 == (UnityEngine_Material_o *)0x0 ||
           (lVar4 = *(long *)&(__this->fields).Dead, lVar4 == 0)) ||
          (pUVar15 = *(UnityEngine_Rigidbody_o **)(lVar4 + 0x18),
          pUVar15 == (UnityEngine_Rigidbody_o *)0x0)))) goto LAB_03fac195;
      fVar18 = *(float *)((long)&pUVar6[2].klass + 4);
      UVar35 = UnityEngine_Rigidbody__get_velocity(pUVar15,(MethodInfo *)0x0);
      if (DAT_056fde1c == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Math);
        in_XMM1_Dc = 0;
        in_XMM1_Dd = 0;
        DAT_056fde1c = '\x01';
      }
      if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
        il2cpp_init_class();
        in_XMM1_Dc = 0;
        in_XMM1_Dd = 0;
      }
      fVar22 = UVar35.fields.z * UVar35.fields.z +
               UVar35.fields.y * UVar35.fields.y + UVar35.fields.x * UVar35.fields.x;
      if (fVar22 < 0.0) {
        fVar22 = sqrtf(fVar22);
        in_XMM1_Dc = extraout_XMM0_Dc;
        in_XMM1_Dd = extraout_XMM0_Dd;
      }
      else {
        fVar22 = SQRT(fVar22);
      }
      if ((fVar19 != fVar18) || (NAN(fVar19) || NAN(fVar18))) {
        lVar4 = *(long *)&(__this->fields).Dead;
        if ((lVar4 == 0) ||
           (pUVar7 = *(UnityEngine_Rigidbody_o **)(lVar4 + 0x18),
           pUVar7 == (UnityEngine_Rigidbody_o *)0x0)) goto LAB_03fac195;
        UVar35 = UnityEngine_Rigidbody__get_velocity(pUVar7,(MethodInfo *)0x0);
        fVar18 = UVar35.fields.z;
        auVar31._0_8_ = UVar35.fields._0_8_;
        auVar31._8_4_ = extraout_XMM0_Dc_02;
        auVar31._12_4_ = extraout_XMM0_Dd_02;
        auVar28._8_4_ = extraout_XMM0_Dc_02;
        auVar28._0_8_ = auVar31._0_8_;
        auVar28._12_4_ = extraout_XMM0_Dd_02;
        if (DAT_056fde20 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Math);
          in_XMM1_Dc = 0;
          in_XMM1_Dd = 0;
          DAT_056fde20 = '\x01';
          auVar31 = auVar28;
        }
        if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
          il2cpp_init_class();
          in_XMM1_Dc = 0;
          in_XMM1_Dd = 0;
          auVar31 = auVar28;
        }
        fVar19 = fVar19 - fVar22;
        fVar22 = fVar18 * fVar18 + auVar31._4_4_ * auVar31._4_4_ + auVar31._0_4_ * auVar31._0_4_;
        if (fVar22 < 0.0) {
          fVar22 = sqrtf(fVar22);
          in_XMM1_Dc = extraout_XMM0_Dc_05;
          in_XMM1_Dd = extraout_XMM0_Dd_05;
        }
        else {
          fVar22 = SQRT(fVar22);
          auVar28 = auVar31;
        }
        if (fVar19 <= -1.0) {
          fVar19 = -1.0;
        }
        if (fVar22 <= 1e-05) {
          if (DAT_056fdd15 == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Vector3);
            DAT_056fdd15 = '\x01';
          }
          uVar24 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
          fVar18 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
        }
        else {
          fVar18 = fVar18 / fVar22;
          auVar9._4_4_ = fVar22;
          auVar9._0_4_ = fVar22;
          auVar9._8_4_ = in_XMM1_Dc;
          auVar9._12_4_ = in_XMM1_Dd;
          auVar28 = divps(auVar28,auVar9);
          uVar24 = auVar28._0_8_;
        }
        fVar22 = fVar19 * (float)uVar24;
        fVar16 = fVar19 * (float)((ulong)uVar24 >> 0x20);
        fVar19 = fVar18 * fVar19;
      }
      else {
        lVar4 = *(long *)&(__this->fields).Dead;
        if ((lVar4 == 0) ||
           (pUVar7 = *(UnityEngine_Rigidbody_o **)(lVar4 + 0x18),
           pUVar7 == (UnityEngine_Rigidbody_o *)0x0)) goto LAB_03fac195;
        UVar35 = UnityEngine_Rigidbody__get_velocity(pUVar7,(MethodInfo *)0x0);
        fVar18 = UVar35.fields.z;
        auVar25._0_8_ = UVar35.fields._0_8_;
        auVar25._8_4_ = extraout_XMM0_Dc_00;
        auVar25._12_4_ = extraout_XMM0_Dd_00;
        auVar27._8_4_ = extraout_XMM0_Dc_00;
        auVar27._0_8_ = auVar25._0_8_;
        auVar27._12_4_ = extraout_XMM0_Dd_00;
        if (DAT_056fde20 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Math);
          in_XMM1_Dc = 0;
          in_XMM1_Dd = 0;
          DAT_056fde20 = '\x01';
          auVar25 = auVar27;
        }
        if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
          il2cpp_init_class();
          in_XMM1_Dc = 0;
          in_XMM1_Dd = 0;
          auVar25 = auVar27;
        }
        fVar16 = fVar18 * fVar18 + auVar25._4_4_ * auVar25._4_4_ + auVar25._0_4_ * auVar25._0_4_;
        if (fVar16 < 0.0) {
          fVar16 = sqrtf(fVar16);
          in_XMM1_Dc = extraout_XMM0_Dc_03;
          in_XMM1_Dd = extraout_XMM0_Dd_03;
          if (1e-05 < fVar16) goto LAB_03fabb90;
LAB_03fabb9d:
          if (DAT_056fdd15 == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Vector3);
            DAT_056fdd15 = '\x01';
          }
          uVar24 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
          fVar18 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
        }
        else {
          fVar16 = SQRT(fVar16);
          auVar27 = auVar25;
          if (fVar16 <= 1e-05) goto LAB_03fabb9d;
LAB_03fabb90:
          fVar18 = fVar18 / fVar16;
          auVar8._4_4_ = fVar16;
          auVar8._0_4_ = fVar16;
          auVar8._8_4_ = in_XMM1_Dc;
          auVar8._12_4_ = in_XMM1_Dd;
          auVar28 = divps(auVar27,auVar8);
          uVar24 = auVar28._0_8_;
        }
        fVar19 = fVar19 - fVar22;
        fVar22 = fVar19 * (float)uVar24;
        fVar16 = fVar19 * (float)((ulong)uVar24 >> 0x20);
        fVar19 = fVar19 * fVar18;
      }
      mode = 2;
    }
    force_00.fields.y = fVar16;
    force_00.fields.x = fVar22;
    force_00.fields.z = fVar19;
    UnityEngine_Rigidbody__AddForce(pUVar15,force_00,mode,(MethodInfo *)0x0);
  }
joined_r0x03fab93f:
  if (DAT_056fde1f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_056fde1f = '\x01';
  }
  lVar4 = *(long *)&(__this->fields).Dead;
  if ((lVar4 == 0) ||
     (__this_00 = *(UnityEngine_Component_o **)(lVar4 + 0x18),
     __this_00 == (UnityEngine_Component_o *)0x0)) goto LAB_03fac195;
  fromDirection = *(UnityEngine_Vector3_Fields *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
  __this_01 = UnityEngine_Component__get_transform(__this_00,(MethodInfo *)0x0);
  if (__this_01 == (UnityEngine_Transform_o *)0x0) goto LAB_03fac195;
  UVar35 = UnityEngine_Transform__get_up(__this_01,(MethodInfo *)0x0);
  UVar36 = UnityEngine_Quaternion__FromToRotation
                     ((UnityEngine_Vector3_o)fromDirection,UVar35,(MethodInfo *)0x0);
  fVar19 = UVar36.fields.z;
  if (DAT_056fde1e == '\0') {
    il2cpp_init_method_metadata();
    DAT_056fde1e = '\x01';
  }
  uVar24 = **(undefined8 **)(TypeInfo_Quaternion + 0xb8);
  uVar2 = (*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
  fVar18 = ABS((float)((ulong)uVar2 >> 0x20) * UVar36.fields.w +
               (float)((ulong)uVar24 >> 0x20) * UVar36.fields.y + (float)uVar24 * UVar36.fields.x +
               (float)uVar2 * fVar19);
  if (1.0 <= fVar18) {
    fVar18 = 1.0;
  }
  fVar22 = 0.0;
  if (fVar18 <= 0.999999) {
    fVar18 = acosf(fVar18);
    fVar22 = (fVar18 + fVar18) * 57.29578;
  }
  piVar1 = &(__this->fields).State;
  if ((float)*piVar1 <= fVar22 && fVar22 != (float)*piVar1) {
    UVar36 = UnityEngine_Quaternion__Inverse(UVar36,(MethodInfo *)0x0);
    lVar4 = *(long *)&(__this->fields).Dead;
    if ((lVar4 == 0) ||
       (pUVar15 = *(UnityEngine_Rigidbody_o **)(lVar4 + 0x18),
       pUVar15 == (UnityEngine_Rigidbody_o *)0x0)) goto LAB_03fac195;
    UVar37 = UnityEngine_Rigidbody__get_rotation(pUVar15,(MethodInfo *)0x0);
    fVar22 = UVar37.fields.z;
    fVar16 = UVar37.fields.w;
    fVar19 = UVar37.fields.x;
    fVar18 = UVar37.fields.y;
    lVar4 = *(long *)&(__this->fields).Dead;
    if ((lVar4 == 0) ||
       (pUVar15 = *(UnityEngine_Rigidbody_o **)(lVar4 + 0x18),
       pUVar15 == (UnityEngine_Rigidbody_o *)0x0)) goto LAB_03fac195;
    local_78 = UVar36.fields.z;
    fStack_74 = UVar36.fields.w;
    local_48 = UVar36.fields.x;
    fStack_44 = UVar36.fields.y;
    fVar34 = (fStack_44 * fVar22 + local_48 * fVar16 + fStack_74 * fVar19) - local_78 * fVar18;
    fVar32 = (local_78 * fVar19 + fStack_44 * fVar16 + fVar18 * fStack_74) - fVar22 * local_48;
    fVar33 = (local_48 * fVar18 + local_78 * fVar16 + fVar22 * fStack_74) - fVar19 * fStack_44;
    fVar23 = ((fVar16 * fStack_74 - fVar19 * local_48) - fVar18 * fStack_44) - local_78 * fVar22;
    UVar36 = UnityEngine_Rigidbody__get_rotation(pUVar15,(MethodInfo *)0x0);
    fVar19 = UVar36.fields.z;
    fVar16 = UVar36.fields.w;
    fVar18 = UVar36.fields.x;
    fVar22 = UVar36.fields.y;
    fVar17 = ABS(fVar16 * fVar23 + fVar19 * fVar33 + fVar34 * fVar18 + fVar22 * fVar32);
    if (1.0 <= fVar17) {
      fVar17 = 1.0;
    }
    if (0.999999 < fVar17) {
LAB_03fac13c:
      lVar11._0_4_ = (__this->fields).Dead;
      lVar11._4_4_ = (__this->fields).CustomDamageEnabled;
    }
    else {
      fVar30 = (float)(__this->fields).State;
      fVar17 = acosf(fVar17);
      fVar17 = (fVar17 + fVar17) * 57.29578;
      if ((fVar17 == 0.0) && (!NAN(fVar17))) goto LAB_03fac13c;
      fVar30 = fVar30 / fVar17;
      fVar19 = 1.0;
      if (fVar30 <= 1.0) {
        fVar19 = fVar30;
      }
      UVar37.fields.y = fVar32;
      UVar37.fields.x = fVar34;
      UVar37.fields.w = fVar23;
      UVar37.fields.z = fVar33;
      UVar36 = UnityEngine_Quaternion__SlerpUnclamped(UVar37,UVar36,fVar19,(MethodInfo *)0x0);
      fVar19 = UVar36.fields.z;
      fVar16 = UVar36.fields.w;
      fVar18 = UVar36.fields.x;
      fVar22 = UVar36.fields.y;
      lVar11._0_4_ = (__this->fields).Dead;
      lVar11._4_4_ = (__this->fields).CustomDamageEnabled;
    }
    if ((lVar11 == 0) ||
       (*(UnityEngine_Rigidbody_o **)(lVar11 + 0x18) == (UnityEngine_Rigidbody_o *)0x0))
    goto LAB_03fac195;
    UVar36.fields.y = fVar22;
    UVar36.fields.x = fVar18;
    UVar36.fields.w = fVar16;
    UVar36.fields.z = fVar19;
    UnityEngine_Rigidbody__MoveRotation
              (*(UnityEngine_Rigidbody_o **)(lVar11 + 0x18),UVar36,(MethodInfo *)0x0);
  }
  lVar4 = *(long *)&(__this->fields).Dead;
  if (lVar4 != 0) {
    pUVar15 = *(UnityEngine_Rigidbody_o **)(lVar4 + 0x18);
    uVar24 = (*(__this->klass->vtable)._58_get_Gravity.methodPtr)
                       (__this,(__this->klass->vtable)._58_get_Gravity.method);
    if (pUVar15 != (UnityEngine_Rigidbody_o *)0x0) {
      force_01.fields.z = fVar19;
      force_01.fields.x = (float)(int)uVar24;
      force_01.fields.y = (float)(int)((ulong)uVar24 >> 0x20);
      UnityEngine_Rigidbody__AddForce(pUVar15,force_01,5,(MethodInfo *)0x0);
      return;
    }
  }
LAB_03fac195:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.Horse$$LateUpdate
// il2cpp: void Characters_Horse__LateUpdate (Characters_Horse_o* __this, const MethodInfo* method);
// 0x3fac1a0

void Characters_Horse__LateUpdate(Characters_Horse_o *__this,MethodInfo *method)

{
  int iVar1;
  Outline_o *pOVar2;
  UnityEngine_Rigidbody_o *pUVar3;
  UnityEngine_Animation_o *__this_00;
  System_Action_Hashtable__o *pSVar4;
  UnityEngine_ParticleSystem_o *pUVar5;
  char cVar6;
  bool_conflict bVar7;
  Characters_Horse_c *pCVar8;
  long lVar9;
  MethodInfo *pMVar10;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  undefined8 uVar11;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  MethodInfo *extraout_RDX_06;
  undefined8 uVar12;
  Characters_BaseCharacter_o *pCVar13;
  System_String_o *pSVar14;
  float fVar15;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 uVar17;
  float fVar18;
  UnityEngine_Vector3_o UVar19;
  UnityEngine_ParticleSystem_EmissionModule_Fields UStack_40;
  undefined1 auStack_38 [8];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (DAT_05704060 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HorseAnimations);
    il2cpp_init_method_metadata(&TypeInfo_HorseSounds);
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    DAT_05704060 = '\x01';
  }
  (*(__this->klass->vtable)._104_LateUpdateFootstep.methodPtr)
            (__this,(__this->klass->vtable)._104_LateUpdateFootstep.method);
  (*(__this->klass->vtable)._105_LateUpdateFPS.methodPtr)(__this);
  lVar9 = *(long *)&(__this->fields).Dead;
  if ((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0x20), lVar9 == 0)) goto LAB_03fac963;
  if (*(char *)(lVar9 + 0x68) != '\0') {
    pOVar2 = (__this->fields).OutlineComponent;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar7 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pOVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar7 != '\0') {
      return;
    }
    pOVar2 = (__this->fields).OutlineComponent;
    if (pOVar2 == (Outline_o *)0x0) goto LAB_03fac963;
    if (*(char *)&(pOVar2->fields)._namesToIgnore != '\0') {
      return;
    }
    lVar9 = *(long *)&(__this->fields).Dead;
    if ((lVar9 == 0) ||
       (pUVar3 = *(UnityEngine_Rigidbody_o **)(lVar9 + 0x18),
       pUVar3 == (UnityEngine_Rigidbody_o *)0x0)) goto LAB_03fac963;
    iVar1 = *(int *)&pOVar2[3].monitor;
    UVar19 = UnityEngine_Rigidbody__get_velocity(pUVar3,(MethodInfo *)0x0);
    fVar18 = UVar19.fields.x;
    fVar15 = UVar19.fields.y;
    uVar16 = extraout_XMM0_Dc;
    uVar17 = extraout_XMM0_Dd;
    if (DAT_056fde1c == '\0') {
      uStack_30 = extraout_XMM0_Dc;
      auStack_38 = (undefined1  [8])UVar19.fields._0_8_;
      uStack_2c = extraout_XMM0_Dd;
      il2cpp_init_method_metadata(&TypeInfo_Math);
      DAT_056fde1c = '\x01';
      fVar18 = (float)auStack_38._0_4_;
      fVar15 = (float)auStack_38._4_4_;
      uVar16 = uStack_30;
      uVar17 = uStack_2c;
    }
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      auStack_38._4_4_ = fVar15;
      auStack_38._0_4_ = fVar18;
      uStack_30 = uVar16;
      uStack_2c = uVar17;
      il2cpp_init_class();
      fVar18 = (float)auStack_38._0_4_;
      fVar15 = (float)auStack_38._4_4_;
    }
    fVar18 = UVar19.fields.z * UVar19.fields.z + fVar15 * fVar15 + fVar18 * fVar18;
    if (fVar18 < 0.0) {
      fVar18 = sqrtf(fVar18);
      if (fVar18 <= 8.0) goto LAB_03fac361;
LAB_03fac4ba:
      if (*(int *)(TypeInfo_HorseAnimations + 0xe4) == 0) {
        il2cpp_init_class();
      }
      lVar9 = *(long *)&(__this->fields)._cameraFPS;
      if (lVar9 == 0) goto LAB_03fac963;
      pSVar14 = *(System_String_o **)(*(long *)(TypeInfo_HorseAnimations + 0xb8) + 0x28);
      if (*(char *)(lVar9 + 0x3c) == '\0') {
        bVar7 = System_String__op_Equality
                          (*(System_String_o **)(lVar9 + 0x30),pSVar14,(MethodInfo *)0x0);
        cVar6 = (char)bVar7;
        pMVar10 = extraout_RDX_03;
      }
      else {
        if (*(UnityEngine_Animation_o **)(lVar9 + 0x10) == (UnityEngine_Animation_o *)0x0)
        goto LAB_03fac963;
        bVar7 = UnityEngine_Animation__IsPlaying
                          (*(UnityEngine_Animation_o **)(lVar9 + 0x10),pSVar14,(MethodInfo *)0x0);
        cVar6 = (char)bVar7;
        pMVar10 = extraout_RDX_00;
      }
      if (cVar6 == '\0') {
        Characters_BaseCharacter__CrossFade
                  ((Characters_BaseCharacter_o *)__this,pSVar14,0.1,0.0,pMVar10);
      }
      pCVar13 = (Characters_BaseCharacter_o *)(__this->fields).OutlineComponent;
      if (pCVar13 == (Characters_BaseCharacter_o *)0x0) goto LAB_03fac963;
      if ((iVar1 == 0) && ((int)pCVar13[1].fields.m_CachedPtr == 1)) {
        if (*(int *)(TypeInfo_HumanAnimations + 0xe4) == 0) {
          il2cpp_init_class();
        }
        lVar9 = *(long *)&(pCVar13->fields)._cameraFPS;
        if (lVar9 == 0) goto LAB_03fac963;
        pSVar14 = *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x18);
        if (*(char *)(lVar9 + 0x3c) == '\0') {
LAB_03fac8fc:
          bVar7 = System_String__op_Equality
                            (*(System_String_o **)(lVar9 + 0x30),pSVar14,(MethodInfo *)0x0);
          cVar6 = (char)bVar7;
          pMVar10 = extraout_RDX_04;
        }
        else {
          __this_00 = *(UnityEngine_Animation_o **)(lVar9 + 0x10);
joined_r0x03fac692:
          if (__this_00 == (UnityEngine_Animation_o *)0x0) goto LAB_03fac963;
          bVar7 = UnityEngine_Animation__IsPlaying(__this_00,pSVar14,(MethodInfo *)0x0);
          cVar6 = (char)bVar7;
          pMVar10 = extraout_RDX_02;
        }
        if (cVar6 == '\0') {
          Characters_BaseCharacter__CrossFade(pCVar13,pSVar14,0.1,0.0,pMVar10);
        }
      }
    }
    else {
      if (8.0 < SQRT(fVar18)) goto LAB_03fac4ba;
LAB_03fac361:
      lVar9 = *(long *)&(__this->fields).Dead;
      if ((lVar9 == 0) ||
         (pUVar3 = *(UnityEngine_Rigidbody_o **)(lVar9 + 0x18),
         pUVar3 == (UnityEngine_Rigidbody_o *)0x0)) goto LAB_03fac963;
      pMVar10 = (MethodInfo *)0x0;
      UVar19 = UnityEngine_Rigidbody__get_velocity(pUVar3,(MethodInfo *)0x0);
      fVar18 = UVar19.fields.x;
      fVar15 = UVar19.fields.y;
      uVar16 = extraout_XMM0_Dc_00;
      uVar17 = extraout_XMM0_Dd_00;
      if (DAT_056fde1c == '\0') {
        uStack_30 = extraout_XMM0_Dc_00;
        auStack_38 = (undefined1  [8])UVar19.fields._0_8_;
        uStack_2c = extraout_XMM0_Dd_00;
        il2cpp_init_method_metadata(&TypeInfo_Math);
        DAT_056fde1c = '\x01';
        fVar18 = (float)auStack_38._0_4_;
        fVar15 = (float)auStack_38._4_4_;
        uVar16 = uStack_30;
        uVar17 = uStack_2c;
      }
      if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
        auStack_38._4_4_ = fVar15;
        auStack_38._0_4_ = fVar18;
        uStack_30 = uVar16;
        uStack_2c = uVar17;
        il2cpp_init_class();
        fVar18 = (float)auStack_38._0_4_;
        fVar15 = (float)auStack_38._4_4_;
      }
      fVar18 = UVar19.fields.z * UVar19.fields.z + fVar15 * fVar15 + fVar18 * fVar18;
      if (fVar18 < 0.0) {
        fVar18 = sqrtf(fVar18);
      }
      else {
        fVar18 = SQRT(fVar18);
      }
      if (fVar18 <= 1.0) {
        Characters_Horse__UpdateIdle(__this,pMVar10);
        pCVar13 = (Characters_BaseCharacter_o *)(__this->fields).OutlineComponent;
        if (pCVar13 == (Characters_BaseCharacter_o *)0x0) goto LAB_03fac963;
        if ((iVar1 == 0) && ((int)pCVar13[1].fields.m_CachedPtr == 1)) {
          if (*(int *)(TypeInfo_HumanAnimations + 0xe4) == 0) {
            il2cpp_init_class();
          }
          lVar9 = *(long *)&(pCVar13->fields)._cameraFPS;
          if (lVar9 == 0) goto LAB_03fac963;
          pSVar14 = *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x10);
          if (*(char *)(lVar9 + 0x3c) == '\0') {
            bVar7 = System_String__op_Equality
                              (*(System_String_o **)(lVar9 + 0x30),pSVar14,(MethodInfo *)0x0);
            cVar6 = (char)bVar7;
            pMVar10 = extraout_RDX_06;
          }
          else {
            if (*(UnityEngine_Animation_o **)(lVar9 + 0x10) == (UnityEngine_Animation_o *)0x0)
            goto LAB_03fac963;
            bVar7 = UnityEngine_Animation__IsPlaying
                              (*(UnityEngine_Animation_o **)(lVar9 + 0x10),pSVar14,(MethodInfo *)0x0
                              );
            cVar6 = (char)bVar7;
            pMVar10 = extraout_RDX;
          }
          if (cVar6 == '\0') {
            Characters_BaseCharacter__CrossFade(pCVar13,pSVar14,0.1,0.0,pMVar10);
          }
        }
        goto LAB_03fac6c8;
      }
      if (*(int *)(TypeInfo_HorseAnimations + 0xe4) == 0) {
        il2cpp_init_class();
      }
      lVar9 = *(long *)&(__this->fields)._cameraFPS;
      if (lVar9 == 0) goto LAB_03fac963;
      pSVar14 = *(System_String_o **)(*(long *)(TypeInfo_HorseAnimations + 0xb8) + 0x30);
      if (*(char *)(lVar9 + 0x3c) == '\0') {
        bVar7 = System_String__op_Equality
                          (*(System_String_o **)(lVar9 + 0x30),pSVar14,(MethodInfo *)0x0);
        cVar6 = (char)bVar7;
        pMVar10 = extraout_RDX_05;
      }
      else {
        if (*(UnityEngine_Animation_o **)(lVar9 + 0x10) == (UnityEngine_Animation_o *)0x0)
        goto LAB_03fac963;
        bVar7 = UnityEngine_Animation__IsPlaying
                          (*(UnityEngine_Animation_o **)(lVar9 + 0x10),pSVar14,(MethodInfo *)0x0);
        cVar6 = (char)bVar7;
        pMVar10 = extraout_RDX_01;
      }
      if (cVar6 == '\0') {
        Characters_BaseCharacter__CrossFade
                  ((Characters_BaseCharacter_o *)__this,pSVar14,0.1,0.0,pMVar10);
      }
      pCVar13 = (Characters_BaseCharacter_o *)(__this->fields).OutlineComponent;
      if (pCVar13 == (Characters_BaseCharacter_o *)0x0) goto LAB_03fac963;
      if ((iVar1 == 0) && ((int)pCVar13[1].fields.m_CachedPtr == 1)) {
        if (*(int *)(TypeInfo_HumanAnimations + 0xe4) == 0) {
          il2cpp_init_class();
        }
        lVar9 = *(long *)&(pCVar13->fields)._cameraFPS;
        if (lVar9 == 0) goto LAB_03fac963;
        pSVar14 = *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x10);
        if (*(char *)(lVar9 + 0x3c) != '\0') {
          __this_00 = *(UnityEngine_Animation_o **)(lVar9 + 0x10);
          goto joined_r0x03fac692;
        }
        goto LAB_03fac8fc;
      }
    }
    (__this->fields).FollowingEnabled = 0;
  }
LAB_03fac6c8:
  lVar9 = *(long *)&(__this->fields)._cameraFPS;
  if (*(int *)(TypeInfo_HorseAnimations + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (lVar9 != 0) {
    pSVar14 = *(System_String_o **)(*(long *)(TypeInfo_HorseAnimations + 0xb8) + 0x28);
    if (*(char *)(lVar9 + 0x3c) == '\0') {
      bVar7 = System_String__op_Equality
                        (*(System_String_o **)(lVar9 + 0x30),pSVar14,(MethodInfo *)0x0);
      cVar6 = (char)bVar7;
    }
    else {
      if (*(UnityEngine_Animation_o **)(lVar9 + 0x10) == (UnityEngine_Animation_o *)0x0)
      goto LAB_03fac963;
      bVar7 = UnityEngine_Animation__IsPlaying
                        (*(UnityEngine_Animation_o **)(lVar9 + 0x10),pSVar14,(MethodInfo *)0x0);
      cVar6 = (char)bVar7;
    }
    if ((cVar6 == '\0') || (*(char *)((long)&(__this->fields).Animation + 4) == '\0')) {
      UStack_40.m_ParticleSystem = (UnityEngine_ParticleSystem_o *)0x0;
      pSVar4 = (__this->fields).OnPlayerPropertiesChanged;
      if ((pSVar4 != (System_Action_Hashtable__o *)0x0) &&
         (pUVar5 = (UnityEngine_ParticleSystem_o *)(pSVar4->fields).extra_arg,
         pUVar5 != (UnityEngine_ParticleSystem_o *)0x0)) {
        UStack_40.m_ParticleSystem =
             (UnityEngine_ParticleSystem_o *)
             UnityEngine_ParticleSystem__get_emission(pUVar5,(MethodInfo *)0x0);
        bVar7 = UnityEngine_ParticleSystem_EmissionModule__get_enabled
                          ((UnityEngine_ParticleSystem_EmissionModule_o)&UStack_40,(MethodInfo *)0x0
                          );
        if ((char)bVar7 != '\0') {
          UnityEngine_ParticleSystem_EmissionModule__set_enabled
                    ((UnityEngine_ParticleSystem_EmissionModule_o)&UStack_40,0,(MethodInfo *)0x0);
        }
        lVar9 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
        if ((lVar9 != 0) && (lVar9 = *(long *)(lVar9 + 0x78), lVar9 != 0)) {
          if (*(char *)(lVar9 + 0x11) == '\0') {
            return;
          }
          if (*(int *)(TypeInfo_HorseSounds + 0xe4) == 0) {
            il2cpp_init_class();
          }
          uVar12 = *(undefined8 *)(*(long *)(TypeInfo_HorseSounds + 0xb8) + 0x18);
          pCVar8 = __this->klass;
          pMVar10 = (pCVar8->vtable)._100_ToggleSoundLocal.method;
          uVar11 = 0;
LAB_03fac8ce:
          (*(pCVar8->vtable)._100_ToggleSoundLocal.methodPtr)(__this,uVar12,uVar11,pMVar10);
          return;
        }
      }
    }
    else {
      UStack_40.m_ParticleSystem = (UnityEngine_ParticleSystem_o *)0x0;
      pSVar4 = (__this->fields).OnPlayerPropertiesChanged;
      if ((pSVar4 != (System_Action_Hashtable__o *)0x0) &&
         (pUVar5 = (UnityEngine_ParticleSystem_o *)(pSVar4->fields).extra_arg,
         pUVar5 != (UnityEngine_ParticleSystem_o *)0x0)) {
        UStack_40.m_ParticleSystem =
             (UnityEngine_ParticleSystem_o *)
             UnityEngine_ParticleSystem__get_emission(pUVar5,(MethodInfo *)0x0);
        bVar7 = UnityEngine_ParticleSystem_EmissionModule__get_enabled
                          ((UnityEngine_ParticleSystem_EmissionModule_o)&UStack_40,(MethodInfo *)0x0
                          );
        if ((char)bVar7 == '\0') {
          UnityEngine_ParticleSystem_EmissionModule__set_enabled
                    ((UnityEngine_ParticleSystem_EmissionModule_o)&UStack_40,1,(MethodInfo *)0x0);
        }
        lVar9 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
        if ((lVar9 != 0) && (lVar9 = *(long *)(lVar9 + 0x78), lVar9 != 0)) {
          if (*(char *)(lVar9 + 0x11) == '\0') {
            return;
          }
          if (*(int *)(TypeInfo_HorseSounds + 0xe4) == 0) {
            il2cpp_init_class();
          }
          uVar12 = *(undefined8 *)(*(long *)(TypeInfo_HorseSounds + 0xb8) + 0x18);
          pCVar8 = __this->klass;
          pMVar10 = (pCVar8->vtable)._100_ToggleSoundLocal.method;
          uVar11 = 1;
          goto LAB_03fac8ce;
        }
      }
    }
  }
LAB_03fac963:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.Horse$$CheckGround
// il2cpp: void Characters_Horse__CheckGround (Characters_Horse_o* __this, const MethodInfo* method);
// 0x3fac970

void Characters_Horse__CheckGround(Characters_Horse_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  undefined1 auVar1 [16];
  int32_t layerMask;
  bool_conflict bVar2;
  long lVar3;
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
  
  if (DAT_05704061 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Physics);
    DAT_05704061 = '\x01';
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
  if ((lVar3 != 0) &&
     (__this_00 = *(UnityEngine_Transform_o **)(lVar3 + 0x10),
     __this_00 != (UnityEngine_Transform_o *)0x0)) {
    UVar8 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
    auStack_78._0_4_ = UVar8.fields.x;
    auStack_78._4_4_ = UVar8.fields.y;
    fStack_70 = extraout_XMM0_Dc;
    fStack_6c = extraout_XMM0_Dd;
    if (DAT_056fde1f == '\0') {
      auStack_78 = (undefined1  [8])UVar8.fields._0_8_;
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fde1f = '\x01';
    }
    lVar3 = *(long *)(TypeInfo_Vector3 + 0xb8);
    fStack_68 = (float)*(undefined8 *)(lVar3 + 0x18) * 0.8;
    fVar5 = (float)((ulong)*(undefined8 *)(lVar3 + 0x18) >> 0x20) * 0.8;
    uStack_58._0_4_ = *(float *)(lVar3 + 0x20) * 0.8;
    fVar6 = 0.0;
    fVar7 = 0.0;
    if (DAT_0570266b == '\0') {
      fStack_64 = fVar5;
      fStack_60 = 0.0;
      fStack_5c = 0.0;
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_0570266b = '\x01';
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
      il2cpp_init_class();
    }
    auVar1 = _auStack_78;
    uVar4 = 0;
    UVar8.fields.x = (float)auStack_78._0_4_;
    UVar8.fields.y = (float)auStack_78._4_4_;
    direction.fields.z = fStack_68;
    direction.fields.x = (float)uStack_58;
    direction.fields.y = (float)uStack_58._4_4_;
    _auStack_78 = auVar1;
    bVar2 = UnityEngine_Physics__SphereCast
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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.Horse$$.ctor
// il2cpp: void Characters_Horse___ctor (Characters_Horse_o* __this, const MethodInfo* method);
// 0x3facb50

void Characters_Horse___ctor(Characters_Horse_o *__this,MethodInfo *method)

{
  *(undefined1 *)((long)&(__this->fields).crossfadeCache + 4) = 1;
  (__this->fields)._owner = (Characters_Human_o *)0x41a0000041700000;
  (__this->fields).HorseCache = (Characters_HorseComponentCache_o *)0x41f0000041200000;
  (__this->fields).State = 0x42340000;
  Characters_BaseCharacter___ctor((Characters_BaseCharacter_o *)__this,method);
  return;
}


