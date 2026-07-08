// Type: Characters.ArmoredShifter
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Characters/ArmoredShifter.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Characters/Shifters/Armored/ArmoredShifter.cs  [CHANGED since prior version]
// --------------------------------

// Characters.ArmoredShifter$$get_EmoteActions
// il2cpp: System_Collections_Generic_List_string__o* Characters_ArmoredShifter__get_EmoteActions (Characters_ArmoredShifter_o* __this, const MethodInfo* method);
// 0x3ff29b0

System_Collections_Generic_List_string__o *
Characters_ArmoredShifter__get_EmoteActions(Characters_ArmoredShifter_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *__this_00;
  
  if (DAT_057041b3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    DAT_057041b3 = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_string__o *)il2cpp_runtime_glue(TypeInfo_List_string);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_System_String);
  return __this_00;
}


// Characters.ArmoredShifter$$get_DefaultRunSpeed
// il2cpp: float Characters_ArmoredShifter__get_DefaultRunSpeed (Characters_ArmoredShifter_o* __this, const MethodInfo* method);
// 0x3ff2a10

float Characters_ArmoredShifter__get_DefaultRunSpeed
                (Characters_ArmoredShifter_o *__this,MethodInfo *method)

{
  return 110.0;
}


// Characters.ArmoredShifter$$CreateCache
// il2cpp: void Characters_ArmoredShifter__CreateCache (Characters_ArmoredShifter_o* __this, Utility_BaseComponentCache_o* cache, const MethodInfo* method);
// 0x3ff2a20

void Characters_ArmoredShifter__CreateCache
               (Characters_ArmoredShifter_o *__this,Utility_BaseComponentCache_o *cache,
               MethodInfo *method)

{
  UnityEngine_GameObject_o *owner;
  Characters_ArmoredComponentCache_o *__this_00;
  MethodInfo *method_00;
  undefined1 auVar1 [16];
  
  if (DAT_057041b4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ArmoredComponentCache);
    DAT_057041b4 = '\x01';
  }
  owner = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  auVar1 = il2cpp_runtime_glue(TypeInfo_ArmoredComponentCache);
  __this_00 = auVar1._0_8_;
  Characters_ArmoredComponentCache___ctor(__this_00,owner,auVar1._8_8_);
  (__this->fields).AttackAnimations =
       (System_Collections_Generic_Dictionary_string__string__o *)__this_00;
  il2cpp_runtime_glue(&(__this->fields).AttackAnimations,__this_00);
  Characters_BaseTitan__CreateCache
            ((Characters_BaseTitan_o *)__this,
             (Utility_BaseComponentCache_o *)(__this->fields).AttackAnimations,method_00);
  return;
}


// Characters.ArmoredShifter$$CreateAnimations
// il2cpp: void Characters_ArmoredShifter__CreateAnimations (Characters_ArmoredShifter_o* __this, Characters_BaseTitanAnimations_o* animations, const MethodInfo* method);
// 0x3ff2aa0

void Characters_ArmoredShifter__CreateAnimations
               (Characters_ArmoredShifter_o *__this,Characters_BaseTitanAnimations_o *animations,
               MethodInfo *method)

{
  Characters_BaseTitanAnimations_o *__this_00;
  MethodInfo *method_00;
  
  if (DAT_057041b5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ArmoredAnimations);
    DAT_057041b5 = '\x01';
  }
  __this_00 = (Characters_BaseTitanAnimations_o *)il2cpp_runtime_glue(TypeInfo_ArmoredAnimations);
  Characters_BaseTitanAnimations___ctor(__this_00,(MethodInfo *)0x0);
  *(Characters_BaseTitanAnimations_o **)&(__this->fields).EnableAI = __this_00;
  il2cpp_runtime_glue(&(__this->fields).EnableAI,__this_00);
  Characters_BaseTitan__CreateAnimations
            ((Characters_BaseTitan_o *)__this,
             *(Characters_BaseTitanAnimations_o **)&(__this->fields).EnableAI,method_00);
  return;
}


// Characters.ArmoredShifter$$Emote
// il2cpp: void Characters_ArmoredShifter__Emote (Characters_ArmoredShifter_o* __this, System_String_o* emote, const MethodInfo* method);
// 0x3ff2b10

void Characters_ArmoredShifter__Emote
               (Characters_ArmoredShifter_o *__this,System_String_o *emote,MethodInfo *method)

{
  return;
}


// Characters.ArmoredShifter$$CreateCustomSkinLoader
// il2cpp: CustomSkins_BaseCustomSkinLoader_o* Characters_ArmoredShifter__CreateCustomSkinLoader (Characters_ArmoredShifter_o* __this, const MethodInfo* method);
// 0x3ff2b20

CustomSkins_BaseCustomSkinLoader_o *
Characters_ArmoredShifter__CreateCustomSkinLoader
          (Characters_ArmoredShifter_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  CustomSkins_BaseCustomSkinLoader_o *pCVar1;
  
  if (DAT_057041b6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_AnnieCustomSkinLoader_AddComponent_AnnieCustomSk);
    DAT_057041b6 = '\x01';
  }
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    pCVar1 = (CustomSkins_BaseCustomSkinLoader_o *)
             UnityEngine_GameObject__AddComponent<object>(__this_00,MethodInfo_AnnieCustomSkinLoader_AddComponent_AnnieCustomSk);
    return pCVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.ArmoredShifter$$GetSkinURL
// il2cpp: System_String_o* Characters_ArmoredShifter__GetSkinURL (Characters_ArmoredShifter_o* __this, Settings_ShifterCustomSkinSet_o* set, const MethodInfo* method);
// 0x3ff2b70

System_String_o *
Characters_ArmoredShifter__GetSkinURL
          (Characters_ArmoredShifter_o *__this,Settings_ShifterCustomSkinSet_o *set,
          MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  
  if (DAT_057041b7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    DAT_057041b7 = '\x01';
  }
  if ((set != (Settings_ShifterCustomSkinSet_o *)0x0) &&
     (pSVar1 = (set->fields).Annie, pSVar1 != (Settings_StringSetting_o *)0x0)) {
    return (pSVar1->fields)._value;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.ArmoredShifter$$GetRootMotionAnimations
// il2cpp: System_Collections_Generic_Dictionary_string__float__o* Characters_ArmoredShifter__GetRootMotionAnimations (Characters_ArmoredShifter_o* __this, const MethodInfo* method);
// 0x3ff2bb0

System_Collections_Generic_Dictionary_string__float__o *
Characters_ArmoredShifter__GetRootMotionAnimations
          (Characters_ArmoredShifter_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__float__o *__this_00;
  
  if (DAT_057041b8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_System_Single);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__float);
    DAT_057041b8 = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_string__float__o *)
              il2cpp_runtime_glue(TypeInfo_Dictionary_string__float);
  System_Collections_Generic_Dictionary<object__float>___ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,MethodInfo_Dictionary_2_System_String_System_Single);
  return __this_00;
}


// Characters.ArmoredShifter$$UpdateAttack
// il2cpp: void Characters_ArmoredShifter__UpdateAttack (Characters_ArmoredShifter_o* __this, const MethodInfo* method);
// 0x3ff2c10

void Characters_ArmoredShifter__UpdateAttack(Characters_ArmoredShifter_o *__this,MethodInfo *method)

{
  long lVar1;
  System_String_o *a;
  System_Collections_Generic_Dictionary_string__string__o *pSVar2;
  Characters_BaseHitbox_o *__this_00;
  bool_conflict bVar3;
  float fVar4;
  
  if (DAT_057041b9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TitanSounds);
    DAT_057041b9 = '\x01';
  }
  fVar4 = (float)(*(__this->klass->vtable)._166_GetAnimationTime.methodPtr)
                           (__this,(__this->klass->vtable)._166_GetAnimationTime.method);
  lVar1._0_4_ = (__this->fields).EnableAI;
  lVar1._4_4_ = (__this->fields)._needRoar;
  if (lVar1 != 0) {
    a = *(System_String_o **)&(__this->fields)._climbCooldownLeft;
    if (DAT_057041b1 == '\0') {
      il2cpp_init_method_metadata(&"Amarture_VER2|dt_attack_swipe_L");
      DAT_057041b1 = '\x01';
    }
    bVar3 = System_String__op_Equality(a,"Amarture_VER2|dt_attack_swipe_L",(MethodInfo *)0x0);
    if ((((char)bVar3 == '\0') || (fVar4 <= 0.06)) ||
       ((__this->fields)._startPosition.fields.z != 0.0)) {
      return;
    }
    (__this->fields)._startPosition.fields.z = 1.4013e-45;
    pSVar2 = (__this->fields).AttackAnimations;
    if ((pSVar2 != (System_Collections_Generic_Dictionary_string__string__o *)0x0) &&
       (__this_00 = (Characters_BaseHitbox_o *)pSVar2[1].fields._keys,
       __this_00 != (Characters_BaseHitbox_o *)0x0)) {
      Characters_BaseHitbox__Activate
                (__this_00,0.0,0.35 / (__this->fields)._startPosition.fields.y,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_TitanSounds + 0xe4) == 0) {
        il2cpp_init_class();
      }
      Characters_BaseCharacter__PlaySound
                ((Characters_BaseCharacter_o *)__this,
                 *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x18),(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.ArmoredShifter$$LateUpdate
// il2cpp: void Characters_ArmoredShifter__LateUpdate (Characters_ArmoredShifter_o* __this, const MethodInfo* method);
// 0x3ff2d40

void Characters_ArmoredShifter__LateUpdate(Characters_ArmoredShifter_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  bool_conflict bVar4;
  UnityEngine_Transform_o *pUVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  UnityEngine_Vector3_o value;
  UnityEngine_Quaternion_o UVar9;
  UnityEngine_Quaternion_o b;
  
  if (DAT_057041ba == '\0') {
    il2cpp_init_method_metadata(&"Amarture_VER2");
    DAT_057041ba = '\x01';
  }
  Characters_BaseCharacter__LateUpdate((Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0);
  bVar4 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0);
  if (((((char)bVar4 != '\0') && (uVar1 = *(uint *)&(__this->fields).OutlineComponent, uVar1 < 8))
      && ((0xceU >> (uVar1 & 0x1f) & 1) != 0)) &&
     (*(char *)((long)&(__this->fields).Detection + 4) != '\0')) {
    lVar2 = *(long *)&(__this->fields).Dead;
    if ((lVar2 == 0) ||
       (pUVar5 = *(UnityEngine_Transform_o **)(lVar2 + 0x10),
       pUVar5 == (UnityEngine_Transform_o *)0x0)) goto LAB_03ff2eae;
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
                      (UVar9,b,fVar6 * (__this->fields).PreviousAttackSpeedMultiplier,
                       (MethodInfo *)0x0);
    UnityEngine_Transform__set_rotation(pUVar5,UVar9,(MethodInfo *)0x0);
  }
  pUVar5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
    pUVar5 = UnityEngine_Transform__Find(pUVar5,"Amarture_VER2",(MethodInfo *)0x0);
    if (DAT_056fe077 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fe077 = '\x01';
    }
    if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
      uVar3 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
      value.fields.x = (float)uVar3 * 15.0;
      value.fields.y = (float)((ulong)uVar3 >> 0x20) * 15.0;
      value.fields.z = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x14) * 15.0;
      UnityEngine_Transform__set_localScale(pUVar5,value,(MethodInfo *)0x0);
      return;
    }
  }
LAB_03ff2eae:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.ArmoredShifter$$GetCameraAnchor
// il2cpp: UnityEngine_Transform_o* Characters_ArmoredShifter__GetCameraAnchor (Characters_ArmoredShifter_o* __this, const MethodInfo* method);
// 0x3ff2fa0

UnityEngine_Transform_o *
Characters_ArmoredShifter__GetCameraAnchor(Characters_ArmoredShifter_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  
  if (DAT_057041bb == '\0') {
    il2cpp_init_method_metadata(&"Anchor");
    DAT_057041bb = '\x01';
  }
  pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
    pUVar1 = UnityEngine_Transform__Find(pUVar1,"Anchor",(MethodInfo *)0x0);
    return pUVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.ArmoredShifter$$.ctor
// il2cpp: void Characters_ArmoredShifter___ctor (Characters_ArmoredShifter_o* __this, const MethodInfo* method);
// 0x3ff2ff0

void Characters_ArmoredShifter___ctor(Characters_ArmoredShifter_o *__this,MethodInfo *method)

{
  *(undefined1 *)((long)&(__this->fields)._previousCoreLocalPosition.fields.y + 1) = 1;
  (__this->fields)._furthestCoreLocalPosition.fields.z = 2.0;
  Characters_BaseTitan___ctor((Characters_BaseTitan_o *)__this,method);
  return;
}


