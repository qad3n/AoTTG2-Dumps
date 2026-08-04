// Type: Characters.ArmoredShifter
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/ArmoredShifter.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Shifters/Armored/ArmoredShifter.cs
// --------------------------------

// Characters.ArmoredShifter$$get_EmoteActions
// il2cpp: System_Collections_Generic_List_string__o* Characters_ArmoredShifter__get_EmoteActions (Characters_ArmoredShifter_o* __this, const MethodInfo* method);
// 0x42ff270

System_Collections_Generic_List_string__o *
Characters_ArmoredShifter__get_EmoteActions(Characters_ArmoredShifter_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *__this_00;
  
  if (g_data_057adf21 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    g_data_057adf21 = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_System_String);
  return __this_00;
}


// Characters.ArmoredShifter$$get_DefaultRunSpeed
// il2cpp: float Characters_ArmoredShifter__get_DefaultRunSpeed (Characters_ArmoredShifter_o* __this, const MethodInfo* method);
// 0x42ff2d0

float Characters_ArmoredShifter__get_DefaultRunSpeed(Characters_ArmoredShifter_o *__this,MethodInfo *method)

{
  return 110.0;
}


// Characters.ArmoredShifter$$CreateCache
// il2cpp: void Characters_ArmoredShifter__CreateCache (Characters_ArmoredShifter_o* __this, Utility_BaseComponentCache_o* cache, const MethodInfo* method);
// 0x42ff2e0

void Characters_ArmoredShifter__CreateCache
               (Characters_ArmoredShifter_o *__this,Utility_BaseComponentCache_o *cache,MethodInfo *method)

{
  UnityEngine_GameObject_o *owner;
  Characters_ArmoredComponentCache_o *__this_00;
  MethodInfo *method_00;
  undefined1 auVar1 [16];
  
  if (g_data_057adf22 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ArmoredComponentCache);
    g_data_057adf22 = '\x01';
  }
  owner = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  auVar1 = il2cpp_runtime_helper_023052d0(TypeInfo_ArmoredComponentCache);
  __this_00 = auVar1._0_8_;
  Characters_ArmoredComponentCache___ctor(__this_00,owner,auVar1._8_8_);
  (__this->fields).AttackAnimations = (System_Collections_Generic_Dictionary_string__string__o *)__this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields).AttackAnimations,__this_00);
  Characters_BaseTitan__CreateCache
            ((Characters_BaseTitan_o *)__this,
             (Utility_BaseComponentCache_o *)(__this->fields).AttackAnimations,method_00);
  return;
}


// Characters.ArmoredShifter$$CreateAnimations
// il2cpp: void Characters_ArmoredShifter__CreateAnimations (Characters_ArmoredShifter_o* __this, Characters_BaseTitanAnimations_o* animations, const MethodInfo* method);
// 0x42ff360

void Characters_ArmoredShifter__CreateAnimations
               (Characters_ArmoredShifter_o *__this,Characters_BaseTitanAnimations_o *animations,
               MethodInfo *method)

{
  Characters_BaseTitanAnimations_o *__this_00;
  MethodInfo *method_00;
  
  if (g_data_057adf23 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ArmoredAnimations);
    g_data_057adf23 = '\x01';
  }
  __this_00 = (Characters_BaseTitanAnimations_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ArmoredAnimations);
  Characters_BaseTitanAnimations___ctor(__this_00,(MethodInfo *)0x0);
  *(Characters_BaseTitanAnimations_o **)&(__this->fields).EnableAI = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields).EnableAI,__this_00);
  Characters_BaseTitan__CreateAnimations
            ((Characters_BaseTitan_o *)__this,*(Characters_BaseTitanAnimations_o **)&(__this->fields).EnableAI
             ,method_00);
  return;
}


// Characters.ArmoredShifter$$Emote
// il2cpp: void Characters_ArmoredShifter__Emote (Characters_ArmoredShifter_o* __this, System_String_o* emote, const MethodInfo* method);
// 0x42ff3d0

void Characters_ArmoredShifter__Emote
               (Characters_ArmoredShifter_o *__this,System_String_o *emote,MethodInfo *method)

{
  return;
}


// Characters.ArmoredShifter$$CreateCustomSkinLoader
// il2cpp: CustomSkins_BaseCustomSkinLoader_o* Characters_ArmoredShifter__CreateCustomSkinLoader (Characters_ArmoredShifter_o* __this, const MethodInfo* method);
// 0x42ff3e0

CustomSkins_BaseCustomSkinLoader_o *
Characters_ArmoredShifter__CreateCustomSkinLoader(Characters_ArmoredShifter_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  CustomSkins_BaseCustomSkinLoader_o *pCVar1;
  System_Collections_Generic_Dictionary_TKey__TValue__o *__this_01;
  long lVar2;
  
  if (g_data_057adf24 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_AnnieCustomSkinLoader_AddComponent_AnnieCustomSkinLoader);
    g_data_057adf24 = '\x01';
  }
  lVar2 = 0;
  __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    pCVar1 = (CustomSkins_BaseCustomSkinLoader_o *)
             UnityEngine_GameObject__AddComponent_object_(__this_00,MethodInfo_AnnieCustomSkinLoader_AddComponent_AnnieCustomSkinLoader);
    return pCVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adf25 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    g_data_057adf25 = '\x01';
  }
  if ((lVar2 != 0) && (*(long *)(lVar2 + 0x40) != 0)) {
    return *(CustomSkins_BaseCustomSkinLoader_o **)(*(long *)(lVar2 + 0x40) + 0x18);
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adf26 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Single);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_float);
    g_data_057adf26 = '\x01';
  }
  __this_01 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_float);
  System_Collections_Generic_Dictionary_object__float____ctor(__this_01,MethodInfo_Dictionary_2_System_String_System_Single);
  return (CustomSkins_BaseCustomSkinLoader_o *)__this_01;
}


// Characters.ArmoredShifter$$GetSkinURL
// il2cpp: System_String_o* Characters_ArmoredShifter__GetSkinURL (Characters_ArmoredShifter_o* __this, Settings_ShifterCustomSkinSet_o* set, const MethodInfo* method);
// 0x42ff430

System_String_o *
Characters_ArmoredShifter__GetSkinURL
          (Characters_ArmoredShifter_o *__this,Settings_ShifterCustomSkinSet_o *set,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  System_Collections_Generic_Dictionary_TKey__TValue__o *__this_00;
  
  if (g_data_057adf25 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    g_data_057adf25 = '\x01';
  }
  if ((set != (Settings_ShifterCustomSkinSet_o *)0x0) &&
     (pSVar1 = (set->fields).Annie, pSVar1 != (Settings_StringSetting_o *)0x0)) {
    return (pSVar1->fields)._value;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adf26 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Single);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_float);
    g_data_057adf26 = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_float);
  System_Collections_Generic_Dictionary_object__float____ctor(__this_00,MethodInfo_Dictionary_2_System_String_System_Single);
  return (System_String_o *)__this_00;
}


// Characters.ArmoredShifter$$GetRootMotionAnimations
// il2cpp: System_Collections_Generic_Dictionary_string__float__o* Characters_ArmoredShifter__GetRootMotionAnimations (Characters_ArmoredShifter_o* __this, const MethodInfo* method);
// 0x42ff470

System_Collections_Generic_Dictionary_string__float__o *
Characters_ArmoredShifter__GetRootMotionAnimations(Characters_ArmoredShifter_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__float__o *__this_00;
  
  if (g_data_057adf26 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Single);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_float);
    g_data_057adf26 = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_string__float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_float);
  System_Collections_Generic_Dictionary_object__float____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,MethodInfo_Dictionary_2_System_String_System_Single);
  return __this_00;
}


// Characters.ArmoredShifter$$UpdateAttack
// il2cpp: void Characters_ArmoredShifter__UpdateAttack (Characters_ArmoredShifter_o* __this, const MethodInfo* method);
// 0x42ff4d0

void Characters_ArmoredShifter__UpdateAttack(Characters_ArmoredShifter_o *__this,MethodInfo *method)

{
  uint uVar1;
  System_Collections_Generic_Dictionary_string__string__o *pSVar2;
  Characters_BaseHitbox_o *__this_00;
  long lVar3;
  undefined8 uVar4;
  bool_conflict bVar5;
  long *__this_01;
  UnityEngine_Transform_o *pUVar6;
  MethodInfo *method_00;
  Characters_ArmoredShifter_o *pCVar7;
  Characters_ArmoredShifter_o *__this_02;
  float fVar8;
  float fVar9;
  float fVar10;
  UnityEngine_Quaternion_o UVar11;
  UnityEngine_Quaternion_o b;
  UnityEngine_Quaternion_o b_00;
  UnityEngine_Vector3_o value;
  
  if (g_data_057adf27 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057adf27 = '\x01';
  }
  pCVar7 = __this;
  fVar8 = (float)(*(__this->klass->vtable)._166_GetAnimationTime.methodPtr)();
  lVar3._0_4_ = (__this->fields).EnableAI;
  lVar3._4_4_ = (__this->fields)._needRoar;
  if (lVar3 != 0) {
    pCVar7 = *(Characters_ArmoredShifter_o **)&(__this->fields)._climbCooldownLeft;
    if (g_data_057adf1f == '\0') {
      il2cpp_runtime_helper_023445d0(&"Amarture_VER2|dt_attack_swipe_L");
      g_data_057adf1f = '\x01';
    }
    bVar5 = System_String__op_Equality((System_String_o *)pCVar7,"Amarture_VER2|dt_attack_swipe_L",(MethodInfo *)0x0);
    if ((((char)bVar5 == '\0') || (fVar8 <= 0.06)) || ((__this->fields)._startPosition.fields.z != 0.0)) {
      return;
    }
    (__this->fields)._startPosition.fields.z = 1.4013e-45;
    pSVar2 = (__this->fields).AttackAnimations;
    if ((pSVar2 != (System_Collections_Generic_Dictionary_string__string__o *)0x0) &&
       (__this_00 = (Characters_BaseHitbox_o *)pSVar2[1].fields._keys,
       pCVar7 = (Characters_ArmoredShifter_o *)0x0, __this_00 != (Characters_BaseHitbox_o *)0x0)) {
      Characters_BaseHitbox__Activate
                (__this_00,0.0,0.35 / (__this->fields)._startPosition.fields.y,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_TitanSounds + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      Characters_BaseCharacter__PlaySound
                ((Characters_BaseCharacter_o *)__this,
                 *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x18),(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adf28 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2");
    g_data_057adf28 = '\x01';
  }
  Characters_BaseCharacter__LateUpdate((Characters_BaseCharacter_o *)pCVar7,(MethodInfo *)0x0);
  __this_02 = pCVar7;
  bVar5 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar7,(MethodInfo *)0x0);
  if ((((char)bVar5 != '\0') && (uVar1 = *(uint *)&(pCVar7->fields).OutlineComponent, uVar1 < 8)) &&
     (((0xceU >> (uVar1 & 0x1f) & 1) != 0 && (*(char *)((long)&(pCVar7->fields).Detection + 4) != '\0')))) {
    lVar3 = *(long *)&(pCVar7->fields).Dead;
    if ((lVar3 == 0) ||
       (pUVar6 = *(UnityEngine_Transform_o **)(lVar3 + 0x10), pUVar6 == (UnityEngine_Transform_o *)0x0))
    goto label_042ff76e;
    UVar11 = UnityEngine_Transform__get_rotation(pUVar6,(MethodInfo *)0x0);
    fVar9 = UVar11.fields.z;
    fVar10 = UVar11.fields.w;
    uVar4 = (*(pCVar7->klass->vtable)._94_GetTargetRotation.methodPtr)();
    fVar8 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    b.fields.w = fVar10;
    b.fields.z = fVar9;
    b.fields.x = (float)(int)uVar4;
    b.fields.y = (float)(int)((ulong)uVar4 >> 0x20);
    UVar11 = UnityEngine_Quaternion__Lerp
                       (UVar11,b,fVar8 * (pCVar7->fields).PreviousAttackSpeedMultiplier,(MethodInfo *)0x0);
    UnityEngine_Transform__set_rotation(pUVar6,UVar11,(MethodInfo *)0x0);
  }
  __this_01 = (long *)UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)pCVar7,(MethodInfo *)0x0);
  __this_02 = pCVar7;
  if ((Characters_ArmoredShifter_o *)__this_01 != (Characters_ArmoredShifter_o *)0x0) {
    pUVar6 = UnityEngine_Transform__Find((UnityEngine_Transform_o *)__this_01,"Amarture_VER2",(MethodInfo *)0x0);
    if (g_data_057a6932 == '\0') {
      __this_01 = &TypeInfo_Vector3;
      il2cpp_runtime_helper_023445d0();
      g_data_057a6932 = '\x01';
    }
    __this_02 = (Characters_ArmoredShifter_o *)__this_01;
    if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
      uVar4 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
      value.fields.x = (float)uVar4 * 15.0;
      value.fields.y = (float)((ulong)uVar4 >> 0x20) * 15.0;
      value.fields.z = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x14) * 15.0;
      UnityEngine_Transform__set_localScale(pUVar6,value,(MethodInfo *)0x0);
      return;
    }
  }
label_042ff76e:
  il2cpp_runtime_helper_022b2c90();
  Characters_BaseCharacter__LateUpdate((Characters_BaseCharacter_o *)__this_02,(MethodInfo *)0x0);
  pCVar7 = __this_02;
  bVar5 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)__this_02,(MethodInfo *)0x0);
  if (((((char)bVar5 == '\0') || (uVar1 = *(uint *)&(__this_02->fields).OutlineComponent, 7 < uVar1)) ||
      ((0xceU >> (uVar1 & 0x1f) & 1) == 0)) || (*(char *)((long)&(__this_02->fields).Detection + 4) == '\0'))
  {
    return;
  }
  lVar3 = *(long *)&(__this_02->fields).Dead;
  if ((lVar3 != 0) &&
     (pUVar6 = *(UnityEngine_Transform_o **)(lVar3 + 0x10), pUVar6 != (UnityEngine_Transform_o *)0x0)) {
    UVar11 = UnityEngine_Transform__get_rotation(pUVar6,(MethodInfo *)0x0);
    fVar9 = UVar11.fields.z;
    fVar10 = UVar11.fields.w;
    uVar4 = (*(__this_02->klass->vtable)._94_GetTargetRotation.methodPtr)();
    fVar8 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    b_00.fields.w = fVar10;
    b_00.fields.z = fVar9;
    b_00.fields.x = (float)(int)uVar4;
    b_00.fields.y = (float)(int)((ulong)uVar4 >> 0x20);
    UVar11 = UnityEngine_Quaternion__Lerp
                       (UVar11,b_00,fVar8 * (__this_02->fields).PreviousAttackSpeedMultiplier,
                        (MethodInfo *)0x0);
    UnityEngine_Transform__set_rotation(pUVar6,UVar11,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adf29 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Anchor");
    g_data_057adf29 = '\x01';
  }
  method_00 = (MethodInfo *)0x0;
  pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pCVar7,(MethodInfo *)0x0);
  if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
    UnityEngine_Transform__Find(pUVar6,"Anchor",(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  *(undefined1 *)((long)&(pCVar7->fields)._previousCoreLocalPosition.fields.y + 1) = 1;
  (pCVar7->fields)._furthestCoreLocalPosition.fields.z = 2.0;
  Characters_BaseTitan___ctor((Characters_BaseTitan_o *)pCVar7,method_00);
  return;
}


// Characters.ArmoredShifter$$LateUpdate
// il2cpp: void Characters_ArmoredShifter__LateUpdate (Characters_ArmoredShifter_o* __this, const MethodInfo* method);
// 0x42ff600

void Characters_ArmoredShifter__LateUpdate(Characters_ArmoredShifter_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  bool_conflict bVar4;
  long *__this_00;
  UnityEngine_Transform_o *pUVar5;
  MethodInfo *method_00;
  Characters_ArmoredShifter_o *__this_01;
  Characters_ArmoredShifter_o *__this_02;
  float fVar6;
  float fVar7;
  float fVar8;
  UnityEngine_Quaternion_o UVar9;
  UnityEngine_Quaternion_o b;
  UnityEngine_Quaternion_o b_00;
  UnityEngine_Vector3_o value;
  
  if (g_data_057adf28 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2");
    g_data_057adf28 = '\x01';
  }
  Characters_BaseCharacter__LateUpdate((Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0);
  __this_01 = __this;
  bVar4 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0);
  if (((((char)bVar4 != '\0') && (uVar1 = *(uint *)&(__this->fields).OutlineComponent, uVar1 < 8)) &&
      ((0xceU >> (uVar1 & 0x1f) & 1) != 0)) && (*(char *)((long)&(__this->fields).Detection + 4) != '\0')) {
    lVar2 = *(long *)&(__this->fields).Dead;
    if ((lVar2 == 0) ||
       (pUVar5 = *(UnityEngine_Transform_o **)(lVar2 + 0x10), pUVar5 == (UnityEngine_Transform_o *)0x0))
    goto label_042ff76e;
    UVar9 = UnityEngine_Transform__get_rotation(pUVar5,(MethodInfo *)0x0);
    fVar7 = UVar9.fields.z;
    fVar8 = UVar9.fields.w;
    uVar3 = (*(__this->klass->vtable)._94_GetTargetRotation.methodPtr)();
    fVar6 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    b.fields.w = fVar8;
    b.fields.z = fVar7;
    b.fields.x = (float)(int)uVar3;
    b.fields.y = (float)(int)((ulong)uVar3 >> 0x20);
    UVar9 = UnityEngine_Quaternion__Lerp
                      (UVar9,b,fVar6 * (__this->fields).PreviousAttackSpeedMultiplier,(MethodInfo *)0x0);
    UnityEngine_Transform__set_rotation(pUVar5,UVar9,(MethodInfo *)0x0);
  }
  __this_00 = (long *)UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  __this_01 = __this;
  if ((Characters_ArmoredShifter_o *)__this_00 != (Characters_ArmoredShifter_o *)0x0) {
    pUVar5 = UnityEngine_Transform__Find((UnityEngine_Transform_o *)__this_00,"Amarture_VER2",(MethodInfo *)0x0);
    if (g_data_057a6932 == '\0') {
      __this_00 = &TypeInfo_Vector3;
      il2cpp_runtime_helper_023445d0();
      g_data_057a6932 = '\x01';
    }
    __this_01 = (Characters_ArmoredShifter_o *)__this_00;
    if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
      uVar3 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
      value.fields.x = (float)uVar3 * 15.0;
      value.fields.y = (float)((ulong)uVar3 >> 0x20) * 15.0;
      value.fields.z = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x14) * 15.0;
      UnityEngine_Transform__set_localScale(pUVar5,value,(MethodInfo *)0x0);
      return;
    }
  }
label_042ff76e:
  il2cpp_runtime_helper_022b2c90();
  Characters_BaseCharacter__LateUpdate((Characters_BaseCharacter_o *)__this_01,(MethodInfo *)0x0);
  __this_02 = __this_01;
  bVar4 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)__this_01,(MethodInfo *)0x0);
  if ((((char)bVar4 == '\0') || (uVar1 = *(uint *)&(__this_01->fields).OutlineComponent, 7 < uVar1)) ||
     (((0xceU >> (uVar1 & 0x1f) & 1) == 0 || (*(char *)((long)&(__this_01->fields).Detection + 4) == '\0'))))
  {
    return;
  }
  lVar2 = *(long *)&(__this_01->fields).Dead;
  if ((lVar2 != 0) &&
     (pUVar5 = *(UnityEngine_Transform_o **)(lVar2 + 0x10), pUVar5 != (UnityEngine_Transform_o *)0x0)) {
    UVar9 = UnityEngine_Transform__get_rotation(pUVar5,(MethodInfo *)0x0);
    fVar7 = UVar9.fields.z;
    fVar8 = UVar9.fields.w;
    uVar3 = (*(__this_01->klass->vtable)._94_GetTargetRotation.methodPtr)();
    fVar6 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    b_00.fields.w = fVar8;
    b_00.fields.z = fVar7;
    b_00.fields.x = (float)(int)uVar3;
    b_00.fields.y = (float)(int)((ulong)uVar3 >> 0x20);
    UVar9 = UnityEngine_Quaternion__Lerp
                      (UVar9,b_00,fVar6 * (__this_01->fields).PreviousAttackSpeedMultiplier,(MethodInfo *)0x0)
    ;
    UnityEngine_Transform__set_rotation(pUVar5,UVar9,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adf29 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Anchor");
    g_data_057adf29 = '\x01';
  }
  method_00 = (MethodInfo *)0x0;
  pUVar5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
  if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
    UnityEngine_Transform__Find(pUVar5,"Anchor",(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  *(undefined1 *)((long)&(__this_02->fields)._previousCoreLocalPosition.fields.y + 1) = 1;
  (__this_02->fields)._furthestCoreLocalPosition.fields.z = 2.0;
  Characters_BaseTitan___ctor((Characters_BaseTitan_o *)__this_02,method_00);
  return;
}


// Characters.ArmoredShifter$$GetCameraAnchor
// il2cpp: UnityEngine_Transform_o* Characters_ArmoredShifter__GetCameraAnchor (Characters_ArmoredShifter_o* __this, const MethodInfo* method);
// 0x42ff860

UnityEngine_Transform_o *
Characters_ArmoredShifter__GetCameraAnchor(Characters_ArmoredShifter_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_Transform_o *extraout_RAX;
  MethodInfo *method_00;
  
  if (g_data_057adf29 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Anchor");
    g_data_057adf29 = '\x01';
  }
  method_00 = (MethodInfo *)0x0;
  pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
    pUVar1 = UnityEngine_Transform__Find(pUVar1,"Anchor",(MethodInfo *)0x0);
    return pUVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  *(undefined1 *)((long)&(__this->fields)._previousCoreLocalPosition.fields.y + 1) = 1;
  (__this->fields)._furthestCoreLocalPosition.fields.z = 2.0;
  Characters_BaseTitan___ctor((Characters_BaseTitan_o *)__this,method_00);
  return extraout_RAX;
}


// Characters.ArmoredShifter$$.ctor
// il2cpp: void Characters_ArmoredShifter___ctor (Characters_ArmoredShifter_o* __this, const MethodInfo* method);
// 0x42ff8b0

void Characters_ArmoredShifter___ctor(Characters_ArmoredShifter_o *__this,MethodInfo *method)

{
  *(undefined1 *)((long)&(__this->fields)._previousCoreLocalPosition.fields.y + 1) = 1;
  (__this->fields)._furthestCoreLocalPosition.fields.z = 2.0;
  Characters_BaseTitan___ctor((Characters_BaseTitan_o *)__this,method);
  return;
}


