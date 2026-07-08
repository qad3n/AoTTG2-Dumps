// Type: Characters.ErenShifter
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Characters/ErenShifter.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Characters/Shifters/Eren/ErenShifter.cs  [CHANGED since prior version]
// --------------------------------

// Characters.ErenShifter$$get_EmoteActions
// il2cpp: System_Collections_Generic_List_string__o* Characters_ErenShifter__get_EmoteActions (Characters_ErenShifter_o* __this, const MethodInfo* method);
// 0x3ff7380

System_Collections_Generic_List_string__o *
Characters_ErenShifter__get_EmoteActions(Characters_ErenShifter_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_String_array *pSVar3;
  long lVar4;
  System_String_o *pSVar5;
  System_Collections_Generic_List_string__o *__this_00;
  
  if (DAT_057041d4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&"Roar");
    il2cpp_init_method_metadata(&"Nod");
    DAT_057041d4 = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_string__o *)il2cpp_runtime_glue(TypeInfo_List_string);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_System_String);
  pSVar5 = "Nod";
  lVar4 = MethodInfo_Void_Add;
  if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (__this_00->fields)._items;
    if (pSVar3 != (System_String_array *)0x0) {
      uVar2 = (__this_00->fields)._size;
      if (uVar2 < (uint)pSVar3->max_length) {
        (__this_00->fields)._size = uVar2 + 1;
        pSVar3->m_Items[(int)uVar2] = pSVar5;
        il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar2);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar5,
                   *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
      }
      pSVar5 = "Roar";
      lVar4 = MethodInfo_Void_Add;
      piVar1 = &(__this_00->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar3 = (__this_00->fields)._items;
      if (pSVar3 != (System_String_array *)0x0) {
        uVar2 = (__this_00->fields)._size;
        if (uVar2 < (uint)pSVar3->max_length) {
          (__this_00->fields)._size = uVar2 + 1;
          pSVar3->m_Items[(int)uVar2] = pSVar5;
          il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar5,
                     *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
        }
        return __this_00;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.ErenShifter$$get_DefaultRunSpeed
// il2cpp: float Characters_ErenShifter__get_DefaultRunSpeed (Characters_ErenShifter_o* __this, const MethodInfo* method);
// 0x3ff74c0

float Characters_ErenShifter__get_DefaultRunSpeed
                (Characters_ErenShifter_o *__this,MethodInfo *method)

{
  return 90.0;
}


// Characters.ErenShifter$$CreateCache
// il2cpp: void Characters_ErenShifter__CreateCache (Characters_ErenShifter_o* __this, Utility_BaseComponentCache_o* cache, const MethodInfo* method);
// 0x3ff74d0

void Characters_ErenShifter__CreateCache
               (Characters_ErenShifter_o *__this,Utility_BaseComponentCache_o *cache,
               MethodInfo *method)

{
  UnityEngine_GameObject_o *owner;
  Characters_ErenComponentCache_o *__this_00;
  MethodInfo *method_00;
  undefined1 auVar1 [16];
  
  if (DAT_057041d5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ErenComponentCache);
    DAT_057041d5 = '\x01';
  }
  owner = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  auVar1 = il2cpp_runtime_glue(TypeInfo_ErenComponentCache);
  __this_00 = auVar1._0_8_;
  Characters_ErenComponentCache___ctor(__this_00,owner,auVar1._8_8_);
  (__this->fields).AttackAnimations =
       (System_Collections_Generic_Dictionary_string__string__o *)__this_00;
  il2cpp_runtime_glue(&(__this->fields).AttackAnimations,__this_00);
  Characters_BaseTitan__CreateCache
            ((Characters_BaseTitan_o *)__this,
             (Utility_BaseComponentCache_o *)(__this->fields).AttackAnimations,method_00);
  return;
}


// Characters.ErenShifter$$CreateAnimations
// il2cpp: void Characters_ErenShifter__CreateAnimations (Characters_ErenShifter_o* __this, Characters_BaseTitanAnimations_o* animations, const MethodInfo* method);
// 0x3ff7550

void Characters_ErenShifter__CreateAnimations
               (Characters_ErenShifter_o *__this,Characters_BaseTitanAnimations_o *animations,
               MethodInfo *method)

{
  Characters_ErenAnimations_o *__this_00;
  MethodInfo *method_00;
  
  if (DAT_057041d6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ErenAnimations);
    DAT_057041d6 = '\x01';
  }
  __this_00 = (Characters_ErenAnimations_o *)il2cpp_runtime_glue(TypeInfo_ErenAnimations);
  Characters_ErenAnimations___ctor(__this_00,(MethodInfo *)animations);
  *(Characters_ErenAnimations_o **)&(__this->fields).EnableAI = __this_00;
  il2cpp_runtime_glue(&(__this->fields).EnableAI,__this_00);
  Characters_BaseTitan__CreateAnimations
            ((Characters_BaseTitan_o *)__this,
             *(Characters_BaseTitanAnimations_o **)&(__this->fields).EnableAI,method_00);
  return;
}


// Characters.ErenShifter$$CreateCustomSkinLoader
// il2cpp: CustomSkins_BaseCustomSkinLoader_o* Characters_ErenShifter__CreateCustomSkinLoader (Characters_ErenShifter_o* __this, const MethodInfo* method);
// 0x3ff75c0

CustomSkins_BaseCustomSkinLoader_o *
Characters_ErenShifter__CreateCustomSkinLoader(Characters_ErenShifter_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  CustomSkins_BaseCustomSkinLoader_o *pCVar1;
  
  if (DAT_057041d7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_ErenCustomSkinLoader_AddComponent_ErenCustomSkin);
    DAT_057041d7 = '\x01';
  }
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    pCVar1 = (CustomSkins_BaseCustomSkinLoader_o *)
             UnityEngine_GameObject__AddComponent<object>(__this_00,MethodInfo_ErenCustomSkinLoader_AddComponent_ErenCustomSkin);
    return pCVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.ErenShifter$$GetSkinURL
// il2cpp: System_String_o* Characters_ErenShifter__GetSkinURL (Characters_ErenShifter_o* __this, Settings_ShifterCustomSkinSet_o* set, const MethodInfo* method);
// 0x3ff7610

System_String_o *
Characters_ErenShifter__GetSkinURL
          (Characters_ErenShifter_o *__this,Settings_ShifterCustomSkinSet_o *set,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  
  if (DAT_057041d8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    DAT_057041d8 = '\x01';
  }
  if ((set != (Settings_ShifterCustomSkinSet_o *)0x0) &&
     (pSVar1 = (set->fields).Eren, pSVar1 != (Settings_StringSetting_o *)0x0)) {
    return (pSVar1->fields)._value;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.ErenShifter$$Emote
// il2cpp: void Characters_ErenShifter__Emote (Characters_ErenShifter_o* __this, System_String_o* emote, const MethodInfo* method);
// 0x3ff7650

void Characters_ErenShifter__Emote
               (Characters_ErenShifter_o *__this,System_String_o *emote,MethodInfo *method)

{
  long lVar1;
  Characters_AnimationHandler_o *pCVar2;
  char cVar3;
  bool_conflict bVar4;
  undefined8 *puVar5;
  System_Collections_IEnumerator_o *routine;
  MethodInfo *extraout_RDX;
  System_String_o *a;
  float fVar6;
  
  if (DAT_057041d9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ShifterSounds);
    il2cpp_init_method_metadata(&"Roar");
    il2cpp_init_method_metadata(&"Nod");
    il2cpp_init_method_metadata(&"");
    DAT_057041d9 = '\x01';
    method = extraout_RDX;
  }
  cVar3 = (*(__this->klass->vtable)._124_CanEmote.methodPtr)
                    (__this,(__this->klass->vtable)._124_CanEmote.method,method);
  if (cVar3 == '\0') {
    return;
  }
  a = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  bVar4 = System_String__op_Equality(emote,"Nod",(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    bVar4 = System_String__op_Equality(emote,"Roar",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_ShifterSounds + 0xe4) == 0) {
        il2cpp_init_class();
      }
      routine = Characters_BaseCharacter__WaitAndPlaySound
                          ((Characters_BaseCharacter_o *)__this,
                           *(System_String_o **)(*(long *)(TypeInfo_ShifterSounds + 0xb8) + 8),0.9,
                           (MethodInfo *)0x0);
      UnityEngine_MonoBehaviour__StartCoroutine
                ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
      lVar1 = *(long *)&(__this->fields).EnableAI;
      if (lVar1 == 0) goto LAB_03ff7842;
      puVar5 = (undefined8 *)(lVar1 + 0x28);
      goto LAB_03ff7771;
    }
  }
  else {
    lVar1 = *(long *)&(__this->fields).EnableAI;
    if (lVar1 == 0) goto LAB_03ff7842;
    puVar5 = (undefined8 *)(lVar1 + 0x20);
LAB_03ff7771:
    a = (System_String_o *)*puVar5;
  }
  bVar4 = System_String__op_Inequality(a,"",(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    return;
  }
  pCVar2 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
  if (pCVar2 != (Characters_AnimationHandler_o *)0x0) {
    fVar6 = Characters_AnimationHandler__GetLength(pCVar2,a,(MethodInfo *)0x0);
    *(undefined1 *)&(__this->fields)._stateTimeLeft = 1;
    pCVar2 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
    if (pCVar2 != (Characters_AnimationHandler_o *)0x0) {
      Characters_AnimationHandler__SetCullingType(pCVar2,0,(MethodInfo *)0x0);
      (*(__this->klass->vtable)._148_Ungrab.methodPtr)
                (__this,(__this->klass->vtable)._148_Ungrab.method);
      (*(__this->klass->vtable)._163_DeactivateAllHitboxes.methodPtr)
                (__this,(__this->klass->vtable)._163_DeactivateAllHitboxes.method);
      Characters_BaseCharacter__CrossFade
                ((Characters_BaseCharacter_o *)__this,a,0.1,0.0,(MethodInfo *)0x0);
      *(undefined4 *)&(__this->fields).OutlineComponent = 8;
      *(System_String_o **)&(__this->fields)._climbCooldownLeft = a;
      il2cpp_runtime_glue(&(__this->fields)._climbCooldownLeft,a);
      (__this->fields)._currentCrippleTime = fVar6;
      return;
    }
  }
LAB_03ff7842:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.ErenShifter$$GetRootMotionAnimations
// il2cpp: System_Collections_Generic_Dictionary_string__float__o* Characters_ErenShifter__GetRootMotionAnimations (Characters_ErenShifter_o* __this, const MethodInfo* method);
// 0x3ff7850

System_Collections_Generic_Dictionary_string__float__o *
Characters_ErenShifter__GetRootMotionAnimations(Characters_ErenShifter_o *__this,MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_Dictionary_string__float__o *__this_00;
  
  if (DAT_057041da == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_System_Single);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__float);
    DAT_057041da = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_string__float__o *)
              il2cpp_runtime_glue(TypeInfo_Dictionary_string__float);
  System_Collections_Generic_Dictionary<object__float>___ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,MethodInfo_Dictionary_2_System_String_System_Single);
  lVar1 = *(long *)&(__this->fields).EnableAI;
  if ((lVar1 != 0) && (__this_00 != (System_Collections_Generic_Dictionary_string__float__o *)0x0))
  {
    System_Collections_Generic_Dictionary<object__float>__Add
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
               *(Il2CppObject **)(lVar1 + 0x10),1.0,MethodInfo_Void_Add);
    lVar1 = *(long *)&(__this->fields).EnableAI;
    if (lVar1 != 0) {
      System_Collections_Generic_Dictionary<object__float>__Add
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                 *(Il2CppObject **)(lVar1 + 0x18),1.0,MethodInfo_Void_Add);
      return __this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.ErenShifter$$UpdateAttack
// il2cpp: void Characters_ErenShifter__UpdateAttack (Characters_ErenShifter_o* __this, const MethodInfo* method);
// 0x3ff7910

void Characters_ErenShifter__UpdateAttack(Characters_ErenShifter_o *__this,MethodInfo *method)

{
  float fVar1;
  long lVar2;
  System_Collections_Generic_Dictionary_string__string__o *pSVar3;
  Characters_BaseHitbox_o *pCVar4;
  bool_conflict bVar5;
  System_String_o *sound;
  System_Collections_Generic_Dictionary_string__string__c *__this_00;
  float fVar6;
  
  if (DAT_057041db == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TitanSounds);
    DAT_057041db = '\x01';
  }
  fVar6 = (float)(*(__this->klass->vtable)._166_GetAnimationTime.methodPtr)
                           (__this,(__this->klass->vtable)._166_GetAnimationTime.method);
  lVar2 = *(long *)&(__this->fields).EnableAI;
  if (lVar2 == 0) goto LAB_03ff7b83;
  bVar5 = System_String__op_Equality
                    (*(System_String_o **)&(__this->fields)._climbCooldownLeft,
                     *(System_String_o **)(lVar2 + 0x10),(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    lVar2 = *(long *)&(__this->fields).EnableAI;
    if (lVar2 == 0) {
LAB_03ff7b83:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    bVar5 = System_String__op_Equality
                      (*(System_String_o **)&(__this->fields)._climbCooldownLeft,
                       *(System_String_o **)(lVar2 + 0x18),(MethodInfo *)0x0);
    if ((((char)bVar5 == '\0') || (fVar6 <= 0.28)) ||
       ((__this->fields)._startPosition.fields.z != 0.0)) {
      return;
    }
    (__this->fields)._startPosition.fields.z = 1.4013e-45;
    pSVar3 = (__this->fields).AttackAnimations;
    if ((pSVar3 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) ||
       (__this_00 = pSVar3[2].klass,
       __this_00 == (System_Collections_Generic_Dictionary_string__string__c *)0x0))
    goto LAB_03ff7b83;
    fVar6 = 0.5;
  }
  else {
    fVar1 = (__this->fields)._startPosition.fields.z;
    if ((fVar6 <= 0.15) || (fVar1 != 0.0)) {
      if ((fVar6 <= 0.27) || (fVar1 != 1.4013e-45)) {
        if (fVar6 <= 0.56) {
          return;
        }
        if (fVar1 != 2.8026e-45) {
          return;
        }
        (__this->fields)._startPosition.fields.z = 4.2039e-45;
        pSVar3 = (__this->fields).AttackAnimations;
        if ((pSVar3 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) ||
           (pCVar4 = (Characters_BaseHitbox_o *)pSVar3[1].fields._values,
           pCVar4 == (Characters_BaseHitbox_o *)0x0)) goto LAB_03ff7b83;
        Characters_BaseHitbox__Activate
                  (pCVar4,0.0,0.25 / (__this->fields)._startPosition.fields.y,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_TitanSounds + 0xe4) == 0) {
          il2cpp_init_class();
        }
        sound = *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x28);
      }
      else {
        (__this->fields)._startPosition.fields.z = 2.8026e-45;
        pSVar3 = (__this->fields).AttackAnimations;
        if ((pSVar3 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) ||
           (pCVar4 = (Characters_BaseHitbox_o *)pSVar3[1].fields._keys,
           pCVar4 == (Characters_BaseHitbox_o *)0x0)) goto LAB_03ff7b83;
        Characters_BaseHitbox__Activate
                  (pCVar4,0.0,0.23 / (__this->fields)._startPosition.fields.y,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_TitanSounds + 0xe4) == 0) {
          il2cpp_init_class();
        }
        sound = *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x20);
      }
      goto LAB_03ff7b6a;
    }
    (__this->fields)._startPosition.fields.z = 1.4013e-45;
    pSVar3 = (__this->fields).AttackAnimations;
    if ((pSVar3 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) ||
       (__this_00 = (System_Collections_Generic_Dictionary_string__string__c *)
                    pSVar3[1].fields._values,
       __this_00 == (System_Collections_Generic_Dictionary_string__string__c *)0x0))
    goto LAB_03ff7b83;
    fVar6 = 0.16;
  }
  Characters_BaseHitbox__Activate
            ((Characters_BaseHitbox_o *)__this_00,0.0,
             fVar6 / (__this->fields)._startPosition.fields.y,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_TitanSounds + 0xe4) == 0) {
    il2cpp_init_class();
  }
  sound = *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x18);
LAB_03ff7b6a:
  Characters_BaseCharacter__PlaySound((Characters_BaseCharacter_o *)__this,sound,(MethodInfo *)0x0);
  return;
}


// Characters.ErenShifter$$CheckNapeAngle
// il2cpp: bool Characters_ErenShifter__CheckNapeAngle (Characters_ErenShifter_o* __this, UnityEngine_Vector3_o hitPosition, float maxAngle, const MethodInfo* method);
// 0x3ff7b90

bool_conflict
Characters_ErenShifter__CheckNapeAngle
          (Characters_ErenShifter_o *__this,UnityEngine_Vector3_o hitPosition,float maxAngle,
          MethodInfo *method)

{
  System_Action_Hashtable__o *pSVar1;
  UnityEngine_Component_o *__this_00;
  undefined1 auVar2 [16];
  double dVar3;
  UnityEngine_Transform_o *__this_01;
  undefined8 extraout_RAX;
  undefined8 uVar4;
  undefined8 extraout_RAX_00;
  undefined8 extraout_RAX_01;
  MethodInfo *method_00;
  float fVar5;
  float fVar6;
  float fVar7;
  float in_XMM0_Dc;
  float extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  float in_XMM0_Dd;
  float extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  float fVar8;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  float fVar9;
  float fVar10;
  float fVar12;
  undefined1 auVar11 [16];
  float fVar13;
  UnityEngine_Vector3_o UVar14;
  undefined8 uStack_68;
  
  pSVar1 = (__this->fields).OnPlayerPropertiesChanged;
  if (((pSVar1 != (System_Action_Hashtable__o *)0x0) &&
      (__this_00 = (UnityEngine_Component_o *)(pSVar1->fields).extra_arg,
      __this_00 != (UnityEngine_Component_o *)0x0)) &&
     (__this_01 = UnityEngine_Component__get_transform(__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_Transform_o *)0x0)) {
    UVar14 = UnityEngine_Transform__get_position(__this_01,(MethodInfo *)0x0);
    if (DAT_056fde20 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Math);
      DAT_056fde20 = '\x01';
    }
    uStack_68._0_4_ = hitPosition.fields.x;
    uStack_68._4_4_ = hitPosition.fields.y;
    auVar11._0_4_ = (float)uStack_68 - UVar14.fields.x;
    auVar11._4_4_ = uStack_68._4_4_ - UVar14.fields.y;
    auVar11._8_4_ = in_XMM0_Dc - extraout_XMM0_Dc;
    auVar11._12_4_ = in_XMM0_Dd - extraout_XMM0_Dd;
    fVar9 = hitPosition.fields.z - UVar14.fields.z;
    if (*(int *)((long)&TypeInfo_Math[2].parameters + 4) == 0) {
      il2cpp_init_class();
    }
    fVar5 = fVar9 * fVar9 + auVar11._4_4_ * auVar11._4_4_ + auVar11._0_4_ * auVar11._0_4_;
    if (fVar5 < 0.0) {
      fVar5 = sqrtf(fVar5);
      in_XMM1_Dc = extraout_XMM0_Dc_00;
      in_XMM1_Dd = extraout_XMM0_Dd_00;
    }
    else {
      fVar5 = SQRT(fVar5);
    }
    if (fVar5 <= 1e-05) {
      if (DAT_056fdd15 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Vector3);
        DAT_056fdd15 = '\x01';
      }
      uStack_68 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      fVar9 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    }
    else {
      fVar9 = fVar9 / fVar5;
      auVar2._4_4_ = fVar5;
      auVar2._0_4_ = fVar5;
      auVar2._8_4_ = in_XMM1_Dc;
      auVar2._12_4_ = in_XMM1_Dd;
      auVar11 = divps(auVar11,auVar2);
      uStack_68 = auVar11._0_8_;
    }
    UVar14 = UnityEngine_Transform__get_forward(__this_01,(MethodInfo *)0x0);
    fVar8 = UVar14.fields.z;
    fVar5 = UVar14.fields.x;
    fVar7 = UVar14.fields.y;
    uVar4 = extraout_RAX;
    if (DAT_0570266a == '\0') {
      uVar4 = il2cpp_init_method_metadata(&TypeInfo_Math);
      DAT_0570266a = '\x01';
    }
    fVar13 = fVar8 * fVar8 + fVar7 * fVar7 + fVar5 * fVar5;
    fVar10 = (float)uStack_68;
    fVar12 = (float)((ulong)uStack_68 >> 0x20);
    fVar6 = fVar9 * fVar9 + fVar12 * fVar12 + fVar10 * fVar10;
    if (*(int *)((long)&TypeInfo_Math[2].parameters + 4) == 0) {
      uVar4 = il2cpp_init_class();
    }
    if (fVar6 * fVar13 < 0.0) {
      fVar6 = sqrtf(fVar6 * fVar13);
      uVar4 = extraout_RAX_00;
      method_00 = TypeInfo_Math;
    }
    else {
      fVar6 = SQRT(fVar6 * fVar13);
      method_00 = TypeInfo_Math;
    }
    fVar13 = 0.0;
    TypeInfo_Math = method_00;
    if (1e-15 <= fVar6) {
      fVar6 = (fVar9 * fVar8 + fVar12 * fVar7 + fVar10 * fVar5) / fVar6;
      fVar9 = 1.0;
      if (fVar6 <= 1.0) {
        fVar9 = fVar6;
      }
      if (*(int *)((long)&method_00[2].parameters + 4) == 0) {
        il2cpp_init_class();
      }
      dVar3 = acos((double)(float)(~-(uint)(-1.0 <= fVar6) & 0xbf800000 |
                                  (uint)fVar9 & -(uint)(-1.0 <= fVar6)),method_00);
      fVar13 = (float)dVar3 * 57.29578;
      uVar4 = extraout_RAX_01;
    }
    return (bool_conflict)CONCAT71((int7)((ulong)uVar4 >> 8),fVar13 < maxAngle);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.ErenShifter$$.ctor
// il2cpp: void Characters_ErenShifter___ctor (Characters_ErenShifter_o* __this, const MethodInfo* method);
// 0x3ff7ea0

void Characters_ErenShifter___ctor(Characters_ErenShifter_o *__this,MethodInfo *method)

{
  *(undefined1 *)((long)&(__this->fields)._previousCoreLocalPosition.fields.y + 1) = 1;
  (__this->fields)._furthestCoreLocalPosition.fields.z = 2.0;
  Characters_BaseTitan___ctor((Characters_BaseTitan_o *)__this,method);
  return;
}


