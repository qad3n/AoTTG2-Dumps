// Type: Characters.ErenShifter
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/ErenShifter.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Shifters/Eren/ErenShifter.cs
// --------------------------------

// Characters.ErenShifter$$get_EmoteActions
// il2cpp: System_Collections_Generic_List_string__o* Characters_ErenShifter__get_EmoteActions (Characters_ErenShifter_o* __this, const MethodInfo* method);
// 0x4303c40

System_Collections_Generic_List_string__o *
Characters_ErenShifter__get_EmoteActions(Characters_ErenShifter_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_String_array *pSVar3;
  long lVar4;
  System_String_o *pSVar5;
  System_Collections_Generic_List_string__o *pSVar6;
  
  if (g_data_057adf42 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&"Roar");
    il2cpp_runtime_helper_023445d0(&"Nod");
    g_data_057adf42 = '\x01';
  }
  pSVar6 = (System_Collections_Generic_List_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar6,MethodInfo_List_1_System_String);
  pSVar5 = "Nod";
  lVar4 = MethodInfo_Void_Add;
  if (pSVar6 != (System_Collections_Generic_List_string__o *)0x0) {
    piVar1 = &(pSVar6->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (pSVar6->fields)._items;
    if (pSVar3 != (System_String_array *)0x0) {
      uVar2 = (pSVar6->fields)._size;
      if (uVar2 < (uint)pSVar3->max_length) {
        (pSVar6->fields)._size = uVar2 + 1;
        pSVar3->m_Items[(int)uVar2] = pSVar5;
        il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar6,(Il2CppObject *)pSVar5,
                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
      }
      pSVar5 = "Roar";
      lVar4 = MethodInfo_Void_Add;
      piVar1 = &(pSVar6->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar3 = (pSVar6->fields)._items;
      if (pSVar3 != (System_String_array *)0x0) {
        uVar2 = (pSVar6->fields)._size;
        if (uVar2 < (uint)pSVar3->max_length) {
          (pSVar6->fields)._size = uVar2 + 1;
          pSVar3->m_Items[(int)uVar2] = pSVar5;
          il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar6,(Il2CppObject *)pSVar5,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
        }
        return pSVar6;
      }
    }
  }
  pSVar6 = (System_Collections_Generic_List_string__o *)il2cpp_runtime_helper_022b2c90();
  return pSVar6;
}


// Characters.ErenShifter$$get_DefaultRunSpeed
// il2cpp: float Characters_ErenShifter__get_DefaultRunSpeed (Characters_ErenShifter_o* __this, const MethodInfo* method);
// 0x4303d80

float Characters_ErenShifter__get_DefaultRunSpeed(Characters_ErenShifter_o *__this,MethodInfo *method)

{
  return 90.0;
}


// Characters.ErenShifter$$CreateCache
// il2cpp: void Characters_ErenShifter__CreateCache (Characters_ErenShifter_o* __this, Utility_BaseComponentCache_o* cache, const MethodInfo* method);
// 0x4303d90

void Characters_ErenShifter__CreateCache
               (Characters_ErenShifter_o *__this,Utility_BaseComponentCache_o *cache,MethodInfo *method)

{
  UnityEngine_GameObject_o *owner;
  Characters_ErenComponentCache_o *__this_00;
  MethodInfo *method_00;
  undefined1 auVar1 [16];
  
  if (g_data_057adf43 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ErenComponentCache);
    g_data_057adf43 = '\x01';
  }
  owner = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  auVar1 = il2cpp_runtime_helper_023052d0(TypeInfo_ErenComponentCache);
  __this_00 = auVar1._0_8_;
  Characters_ErenComponentCache___ctor(__this_00,owner,auVar1._8_8_);
  (__this->fields).AttackAnimations = (System_Collections_Generic_Dictionary_string__string__o *)__this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields).AttackAnimations,__this_00);
  Characters_BaseTitan__CreateCache
            ((Characters_BaseTitan_o *)__this,
             (Utility_BaseComponentCache_o *)(__this->fields).AttackAnimations,method_00);
  return;
}


// Characters.ErenShifter$$CreateAnimations
// il2cpp: void Characters_ErenShifter__CreateAnimations (Characters_ErenShifter_o* __this, Characters_BaseTitanAnimations_o* animations, const MethodInfo* method);
// 0x4303e10

void Characters_ErenShifter__CreateAnimations
               (Characters_ErenShifter_o *__this,Characters_BaseTitanAnimations_o *animations,
               MethodInfo *method)

{
  Characters_ErenAnimations_o *__this_00;
  MethodInfo *method_00;
  
  if (g_data_057adf44 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ErenAnimations);
    g_data_057adf44 = '\x01';
  }
  __this_00 = (Characters_ErenAnimations_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ErenAnimations);
  Characters_ErenAnimations___ctor(__this_00,(MethodInfo *)animations);
  *(Characters_ErenAnimations_o **)&(__this->fields).EnableAI = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields).EnableAI,__this_00);
  Characters_BaseTitan__CreateAnimations
            ((Characters_BaseTitan_o *)__this,*(Characters_BaseTitanAnimations_o **)&(__this->fields).EnableAI
             ,method_00);
  return;
}


// Characters.ErenShifter$$CreateCustomSkinLoader
// il2cpp: CustomSkins_BaseCustomSkinLoader_o* Characters_ErenShifter__CreateCustomSkinLoader (Characters_ErenShifter_o* __this, const MethodInfo* method);
// 0x4303e80

CustomSkins_BaseCustomSkinLoader_o *
Characters_ErenShifter__CreateCustomSkinLoader(Characters_ErenShifter_o *__this,MethodInfo *method)

{
  long lVar1;
  Characters_AnimationHandler_o *pCVar2;
  System_Collections_Generic_Dictionary_string__string__o *pSVar3;
  Characters_BaseHitbox_o *pCVar4;
  System_Action_Hashtable__o *pSVar5;
  undefined1 auVar6 [16];
  double dVar7;
  bool_conflict bVar8;
  UnityEngine_GameObject_o *__this_00;
  CustomSkins_BaseCustomSkinLoader_o *pCVar9;
  undefined8 *puVar10;
  System_Collections_IEnumerator_o *routine;
  undefined4 extraout_var;
  Characters_BaseTitan_o *pCVar11;
  undefined4 extraout_var_00;
  CustomSkins_BaseCustomSkinLoader_o *extraout_RAX;
  UnityEngine_Transform_o *__this_01;
  undefined8 extraout_RAX_00;
  undefined8 extraout_RAX_01;
  undefined8 extraout_RAX_02;
  CustomSkins_BaseCustomSkinLoader_o *extraout_RAX_03;
  Characters_ErenShifter_o *pCVar12;
  Characters_ErenShifter_o *a;
  System_String_o *pSVar13;
  MethodInfo *pMVar14;
  Characters_BaseTitan_o *__this_02;
  System_Collections_Generic_Dictionary_string__string__c *__this_03;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  float fVar18;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  float in_XMM1_Da;
  float fVar19;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  float in_XMM2_Da;
  float fVar20;
  float fVar22;
  undefined1 auVar21 [16];
  float fVar23;
  UnityEngine_Vector3_o UVar24;
  undefined8 local_d0;
  
  if (g_data_057adf45 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_ErenCustomSkinLoader_AddComponent_ErenCustomSkinLoader);
    g_data_057adf45 = '\x01';
  }
  pCVar12 = (Characters_ErenShifter_o *)0x0;
  __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    pCVar9 = (CustomSkins_BaseCustomSkinLoader_o *)
             UnityEngine_GameObject__AddComponent_object_(__this_00,MethodInfo_ErenCustomSkinLoader_AddComponent_ErenCustomSkinLoader);
    return pCVar9;
  }
  il2cpp_runtime_helper_022b2c90();
  a = pCVar12;
  if (g_data_057adf46 == '\0') {
    __this = (Characters_ErenShifter_o *)&MethodInfo_String_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057adf46 = '\x01';
  }
  if ((pCVar12 != (Characters_ErenShifter_o *)0x0) &&
     (lVar1 = *(long *)&(pCVar12->fields)._disableKinematicTimeLeft, lVar1 != 0)) {
    return *(CustomSkins_BaseCustomSkinLoader_o **)(lVar1 + 0x18);
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adf47 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ShifterSounds);
    il2cpp_runtime_helper_023445d0(&"Roar");
    il2cpp_runtime_helper_023445d0(&"Nod");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057adf47 = '\x01';
  }
  pCVar9 = (CustomSkins_BaseCustomSkinLoader_o *)
           (*(__this->klass->vtable)._124_CanEmote.methodPtr)
                     (__this,(__this->klass->vtable)._124_CanEmote.method);
  if ((char)pCVar9 == '\0') {
    return pCVar9;
  }
  pSVar13 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  pCVar12 = a;
  bVar8 = System_String__op_Equality((System_String_o *)a,"Nod",(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
    bVar8 = System_String__op_Equality((System_String_o *)a,"Roar",(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') goto label_04304034;
    if (*(int *)(TypeInfo_ShifterSounds + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    routine = Characters_BaseCharacter__WaitAndPlaySound
                        ((Characters_BaseCharacter_o *)__this,
                         *(System_String_o **)(*(long *)(TypeInfo_ShifterSounds + 0xb8) + 8),0.9,(MethodInfo *)0x0);
    pCVar12 = __this;
    UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
              ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
    lVar1 = *(long *)&(__this->fields).EnableAI;
    if (lVar1 != 0) {
      puVar10 = (undefined8 *)(lVar1 + 0x28);
      goto label_04304031;
    }
  }
  else {
    lVar1 = *(long *)&(__this->fields).EnableAI;
    if (lVar1 != 0) {
      puVar10 = (undefined8 *)(lVar1 + 0x20);
label_04304031:
      pSVar13 = (System_String_o *)*puVar10;
label_04304034:
      bVar8 = System_String__op_Inequality(pSVar13,"",(MethodInfo *)0x0);
      if ((char)bVar8 == '\0') {
        return (CustomSkins_BaseCustomSkinLoader_o *)CONCAT44(extraout_var,bVar8);
      }
      pCVar2 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
      pCVar12 = (Characters_ErenShifter_o *)0x0;
      if (pCVar2 != (Characters_AnimationHandler_o *)0x0) {
        fVar15 = Characters_AnimationHandler__GetLength(pCVar2,pSVar13,(MethodInfo *)0x0);
        *(undefined1 *)&(__this->fields)._stateTimeLeft = 1;
        pCVar2 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
        pCVar12 = (Characters_ErenShifter_o *)0x0;
        if (pCVar2 != (Characters_AnimationHandler_o *)0x0) {
          Characters_AnimationHandler__SetCullingType(pCVar2,0,(MethodInfo *)0x0);
          (*(__this->klass->vtable)._148_Ungrab.methodPtr)(__this,(__this->klass->vtable)._148_Ungrab.method);
          (*(__this->klass->vtable)._163_DeactivateAllHitboxes.methodPtr)
                    (__this,(__this->klass->vtable)._163_DeactivateAllHitboxes.method);
          Characters_BaseCharacter__CrossFade
                    ((Characters_BaseCharacter_o *)__this,pSVar13,0.1,0.0,(MethodInfo *)0x0);
          *(undefined4 *)&(__this->fields).OutlineComponent = 8;
          *(System_String_o **)&(__this->fields)._climbCooldownLeft = pSVar13;
          pCVar9 = (CustomSkins_BaseCustomSkinLoader_o *)
                   il2cpp_runtime_helper_022b4080(&(__this->fields)._climbCooldownLeft,pSVar13);
          (__this->fields)._currentCrippleTime = fVar15;
          return pCVar9;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adf48 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Single);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_float);
    g_data_057adf48 = '\x01';
  }
  pCVar11 = (Characters_BaseTitan_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_float);
  __this_02 = pCVar11;
  System_Collections_Generic_Dictionary_object__float____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pCVar11,MethodInfo_Dictionary_2_System_String_System_Single);
  lVar1 = *(long *)&(pCVar12->fields).EnableAI;
  if ((lVar1 != 0) && (pCVar11 != (Characters_BaseTitan_o *)0x0)) {
    __this_02 = pCVar11;
    System_Collections_Generic_Dictionary_object__float___Add
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pCVar11,
               *(Il2CppObject **)(lVar1 + 0x10),1.0,MethodInfo_Void_Add);
    lVar1 = *(long *)&(pCVar12->fields).EnableAI;
    if (lVar1 != 0) {
      System_Collections_Generic_Dictionary_object__float___Add
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pCVar11,
                 *(Il2CppObject **)(lVar1 + 0x18),1.0,MethodInfo_Void_Add);
      return (CustomSkins_BaseCustomSkinLoader_o *)pCVar11;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adf49 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057adf49 = '\x01';
  }
  pMVar14 = (__this_02->klass->vtable)._166_GetAnimationTime.method;
  pCVar11 = __this_02;
  fVar15 = (float)(*(__this_02->klass->vtable)._166_GetAnimationTime.methodPtr)();
  lVar1 = *(long *)&(__this_02->fields).EnableAI;
  if (lVar1 == 0) goto label_04304443;
  pCVar11 = *(Characters_BaseTitan_o **)&(__this_02->fields)._climbCooldownLeft;
  pMVar14 = *(MethodInfo **)(lVar1 + 0x10);
  bVar8 = System_String__op_Equality((System_String_o *)pCVar11,(System_String_o *)pMVar14,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
    lVar1 = *(long *)&(__this_02->fields).EnableAI;
    if (lVar1 == 0) {
label_04304443:
      uVar17 = il2cpp_runtime_helper_022b2c90();
      pSVar5 = (pCVar11->fields).OnPlayerPropertiesChanged;
      if ((pSVar5 != (System_Action_Hashtable__o *)0x0) &&
         (pCVar11 = (Characters_BaseTitan_o *)(pSVar5->fields).extra_arg,
         pCVar11 != (Characters_BaseTitan_o *)0x0)) {
        pMVar14 = (MethodInfo *)0x0;
        __this_01 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pCVar11,(MethodInfo *)0x0)
        ;
        if (__this_01 != (UnityEngine_Transform_o *)0x0) {
          UVar24 = UnityEngine_Transform__get_position(__this_01,(MethodInfo *)0x0);
          if (g_data_057a6845 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
            g_data_057a6845 = '\x01';
          }
          auVar21._0_4_ = (float)uVar17 - UVar24.fields.x;
          auVar21._4_4_ = (float)((ulong)uVar17 >> 0x20) - UVar24.fields.y;
          auVar21._8_4_ = extraout_XMM0_Dc - extraout_XMM0_Dc_00;
          auVar21._12_4_ = extraout_XMM0_Dd - extraout_XMM0_Dd_00;
          in_XMM1_Da = in_XMM1_Da - UVar24.fields.z;
          if (*(int *)((long)&TypeInfo_Math[2].parameters + 4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          fVar15 = in_XMM1_Da * in_XMM1_Da + auVar21._4_4_ * auVar21._4_4_ + auVar21._0_4_ * auVar21._0_4_;
          if (fVar15 < 0.0) {
            fVar15 = sqrtf(fVar15);
            in_XMM1_Dc = extraout_XMM0_Dc_01;
            in_XMM1_Dd = extraout_XMM0_Dd_01;
          }
          else {
            fVar15 = SQRT(fVar15);
          }
          if (fVar15 <= 1e-05) {
            if (g_data_057a65d5 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
              g_data_057a65d5 = '\x01';
            }
            local_d0 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
            in_XMM1_Da = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
          }
          else {
            in_XMM1_Da = in_XMM1_Da / fVar15;
            auVar6._4_4_ = fVar15;
            auVar6._0_4_ = fVar15;
            auVar6._8_4_ = in_XMM1_Dc;
            auVar6._12_4_ = in_XMM1_Dd;
            auVar21 = divps(auVar21,auVar6);
            local_d0 = auVar21._0_8_;
          }
          UVar24 = UnityEngine_Transform__get_forward(__this_01,(MethodInfo *)0x0);
          fVar19 = UVar24.fields.z;
          fVar15 = UVar24.fields.x;
          fVar18 = UVar24.fields.y;
          uVar17 = extraout_RAX_00;
          if (g_data_057ac31a == '\0') {
            uVar17 = il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
            g_data_057ac31a = '\x01';
          }
          fVar23 = fVar19 * fVar19 + fVar18 * fVar18 + fVar15 * fVar15;
          fVar20 = (float)local_d0;
          fVar22 = (float)((ulong)local_d0 >> 0x20);
          fVar16 = in_XMM1_Da * in_XMM1_Da + fVar22 * fVar22 + fVar20 * fVar20;
          if (*(int *)((long)&TypeInfo_Math[2].parameters + 4) == 0) {
            uVar17 = il2cpp_runtime_helper_02337ed0();
          }
          if (fVar16 * fVar23 < 0.0) {
            fVar16 = sqrtf(fVar16 * fVar23);
            uVar17 = extraout_RAX_01;
            pMVar14 = TypeInfo_Math;
          }
          else {
            fVar16 = SQRT(fVar16 * fVar23);
            pMVar14 = TypeInfo_Math;
          }
          fVar23 = 0.0;
          TypeInfo_Math = pMVar14;
          if (1e-15 <= fVar16) {
            fVar16 = (in_XMM1_Da * fVar19 + fVar22 * fVar18 + fVar20 * fVar15) / fVar16;
            fVar15 = 1.0;
            if (fVar16 <= 1.0) {
              fVar15 = fVar16;
            }
            if (*(int *)((long)&pMVar14[2].parameters + 4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            dVar7 = acos((double)(float)(~-(uint)(-1.0 <= fVar16) & 0xbf800000 |
                                        (uint)fVar15 & -(uint)(-1.0 <= fVar16)),pMVar14);
            fVar23 = (float)dVar7 * 57.29578;
            uVar17 = extraout_RAX_02;
          }
          return (CustomSkins_BaseCustomSkinLoader_o *)
                 CONCAT71((int7)((ulong)uVar17 >> 8),fVar23 < in_XMM2_Da);
        }
      }
      il2cpp_runtime_helper_022b2c90();
      *(undefined1 *)((long)&(pCVar11->fields)._previousCoreLocalPosition.fields.y + 1) = 1;
      (pCVar11->fields)._furthestCoreLocalPosition.fields.z = 2.0;
      Characters_BaseTitan___ctor(pCVar11,pMVar14);
      return extraout_RAX_03;
    }
    pCVar11 = *(Characters_BaseTitan_o **)&(__this_02->fields)._climbCooldownLeft;
    pMVar14 = *(MethodInfo **)(lVar1 + 0x18);
    bVar8 = System_String__op_Equality
                      ((System_String_o *)pCVar11,(System_String_o *)pMVar14,(MethodInfo *)0x0);
    if ((((char)bVar8 == '\0') || (fVar15 <= 0.28)) || ((__this_02->fields)._startPosition.fields.z != 0.0)) {
      return (CustomSkins_BaseCustomSkinLoader_o *)CONCAT44(extraout_var_00,bVar8);
    }
    (__this_02->fields)._startPosition.fields.z = 1.4013e-45;
    pSVar3 = (__this_02->fields).AttackAnimations;
    if (pSVar3 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_04304443;
    __this_03 = pSVar3[2].klass;
    pCVar11 = (Characters_BaseTitan_o *)0x0;
    if (__this_03 == (System_Collections_Generic_Dictionary_string__string__c *)0x0) goto label_04304443;
    fVar15 = 0.5;
  }
  else {
    fVar18 = (__this_02->fields)._startPosition.fields.z;
    if ((fVar15 <= 0.15) || (fVar18 != 0.0)) {
      if ((fVar15 <= 0.27) || (fVar18 != 1.4013e-45)) {
        if (fVar15 <= 0.56) {
          return (CustomSkins_BaseCustomSkinLoader_o *)(ulong)(uint)fVar18;
        }
        if (fVar18 != 2.8026e-45) {
          return (CustomSkins_BaseCustomSkinLoader_o *)(ulong)(uint)fVar18;
        }
        (__this_02->fields)._startPosition.fields.z = 4.2039e-45;
        pSVar3 = (__this_02->fields).AttackAnimations;
        if (pSVar3 != (System_Collections_Generic_Dictionary_string__string__o *)0x0) {
          pCVar4 = (Characters_BaseHitbox_o *)pSVar3[1].fields._values;
          pCVar11 = (Characters_BaseTitan_o *)0x0;
          if (pCVar4 != (Characters_BaseHitbox_o *)0x0) {
            Characters_BaseHitbox__Activate
                      (pCVar4,0.0,0.25 / (__this_02->fields)._startPosition.fields.y,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_TitanSounds + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar13 = *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x28);
            goto label_0430442a;
          }
        }
        goto label_04304443;
      }
      (__this_02->fields)._startPosition.fields.z = 2.8026e-45;
      pSVar3 = (__this_02->fields).AttackAnimations;
      if (pSVar3 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_04304443;
      pCVar4 = (Characters_BaseHitbox_o *)pSVar3[1].fields._keys;
      pCVar11 = (Characters_BaseTitan_o *)0x0;
      if (pCVar4 == (Characters_BaseHitbox_o *)0x0) goto label_04304443;
      Characters_BaseHitbox__Activate
                (pCVar4,0.0,0.23 / (__this_02->fields)._startPosition.fields.y,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_TitanSounds + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar13 = *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x20);
      goto label_0430442a;
    }
    (__this_02->fields)._startPosition.fields.z = 1.4013e-45;
    pSVar3 = (__this_02->fields).AttackAnimations;
    if (pSVar3 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_04304443;
    __this_03 = (System_Collections_Generic_Dictionary_string__string__c *)pSVar3[1].fields._values;
    pCVar11 = (Characters_BaseTitan_o *)0x0;
    if (__this_03 == (System_Collections_Generic_Dictionary_string__string__c *)0x0) goto label_04304443;
    fVar15 = 0.16;
  }
  Characters_BaseHitbox__Activate
            ((Characters_BaseHitbox_o *)__this_03,0.0,fVar15 / (__this_02->fields)._startPosition.fields.y,
             (MethodInfo *)0x0);
  if (*(int *)(TypeInfo_TitanSounds + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar13 = *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x18);
label_0430442a:
  Characters_BaseCharacter__PlaySound((Characters_BaseCharacter_o *)__this_02,pSVar13,(MethodInfo *)0x0);
  return extraout_RAX;
}


// Characters.ErenShifter$$GetSkinURL
// il2cpp: System_String_o* Characters_ErenShifter__GetSkinURL (Characters_ErenShifter_o* __this, Settings_ShifterCustomSkinSet_o* set, const MethodInfo* method);
// 0x4303ed0

System_String_o *
Characters_ErenShifter__GetSkinURL
          (Characters_ErenShifter_o *__this,Settings_ShifterCustomSkinSet_o *set,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  long lVar2;
  Characters_AnimationHandler_o *pCVar3;
  System_Collections_Generic_Dictionary_string__string__o *pSVar4;
  Characters_BaseHitbox_o *pCVar5;
  System_Action_Hashtable__o *pSVar6;
  undefined1 auVar7 [16];
  double dVar8;
  bool_conflict bVar9;
  System_String_o *pSVar10;
  undefined8 *puVar11;
  System_Collections_IEnumerator_o *routine;
  undefined4 extraout_var;
  Characters_BaseTitan_o *pCVar12;
  undefined4 extraout_var_00;
  System_String_o *extraout_RAX;
  UnityEngine_Transform_o *__this_00;
  undefined8 extraout_RAX_00;
  undefined8 extraout_RAX_01;
  undefined8 extraout_RAX_02;
  System_String_o *extraout_RAX_03;
  Characters_ErenShifter_o *a;
  MethodInfo *pMVar13;
  Characters_ErenShifter_o *pCVar14;
  Characters_BaseTitan_o *__this_01;
  System_Collections_Generic_Dictionary_string__string__c *__this_02;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  float fVar18;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  float in_XMM1_Da;
  float fVar19;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  float in_XMM2_Da;
  float fVar20;
  float fVar22;
  undefined1 auVar21 [16];
  float fVar23;
  UnityEngine_Vector3_o UVar24;
  undefined8 uStack_c8;
  
  a = (Characters_ErenShifter_o *)set;
  if (g_data_057adf46 == '\0') {
    __this = (Characters_ErenShifter_o *)&MethodInfo_String_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057adf46 = '\x01';
  }
  if ((set != (Settings_ShifterCustomSkinSet_o *)0x0) &&
     (pSVar1 = (set->fields).Eren, pSVar1 != (Settings_StringSetting_o *)0x0)) {
    return (pSVar1->fields)._value;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adf47 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ShifterSounds);
    il2cpp_runtime_helper_023445d0(&"Roar");
    il2cpp_runtime_helper_023445d0(&"Nod");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057adf47 = '\x01';
  }
  pSVar10 = (System_String_o *)
            (*(__this->klass->vtable)._124_CanEmote.methodPtr)
                      (__this,(__this->klass->vtable)._124_CanEmote.method);
  if ((char)pSVar10 == '\0') {
    return pSVar10;
  }
  pSVar10 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  pCVar14 = a;
  bVar9 = System_String__op_Equality((System_String_o *)a,"Nod",(MethodInfo *)0x0);
  if ((char)bVar9 == '\0') {
    bVar9 = System_String__op_Equality((System_String_o *)a,"Roar",(MethodInfo *)0x0);
    if ((char)bVar9 == '\0') goto label_04304034;
    if (*(int *)(TypeInfo_ShifterSounds + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    routine = Characters_BaseCharacter__WaitAndPlaySound
                        ((Characters_BaseCharacter_o *)__this,
                         *(System_String_o **)(*(long *)(TypeInfo_ShifterSounds + 0xb8) + 8),0.9,(MethodInfo *)0x0);
    pCVar14 = __this;
    UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
              ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
    lVar2 = *(long *)&(__this->fields).EnableAI;
    if (lVar2 != 0) {
      puVar11 = (undefined8 *)(lVar2 + 0x28);
      goto label_04304031;
    }
  }
  else {
    lVar2 = *(long *)&(__this->fields).EnableAI;
    if (lVar2 != 0) {
      puVar11 = (undefined8 *)(lVar2 + 0x20);
label_04304031:
      pSVar10 = (System_String_o *)*puVar11;
label_04304034:
      bVar9 = System_String__op_Inequality(pSVar10,"",(MethodInfo *)0x0);
      if ((char)bVar9 == '\0') {
        return (System_String_o *)CONCAT44(extraout_var,bVar9);
      }
      pCVar3 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
      pCVar14 = (Characters_ErenShifter_o *)0x0;
      if (pCVar3 != (Characters_AnimationHandler_o *)0x0) {
        fVar15 = Characters_AnimationHandler__GetLength(pCVar3,pSVar10,(MethodInfo *)0x0);
        *(undefined1 *)&(__this->fields)._stateTimeLeft = 1;
        pCVar3 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
        pCVar14 = (Characters_ErenShifter_o *)0x0;
        if (pCVar3 != (Characters_AnimationHandler_o *)0x0) {
          Characters_AnimationHandler__SetCullingType(pCVar3,0,(MethodInfo *)0x0);
          (*(__this->klass->vtable)._148_Ungrab.methodPtr)(__this,(__this->klass->vtable)._148_Ungrab.method);
          (*(__this->klass->vtable)._163_DeactivateAllHitboxes.methodPtr)
                    (__this,(__this->klass->vtable)._163_DeactivateAllHitboxes.method);
          Characters_BaseCharacter__CrossFade
                    ((Characters_BaseCharacter_o *)__this,pSVar10,0.1,0.0,(MethodInfo *)0x0);
          *(undefined4 *)&(__this->fields).OutlineComponent = 8;
          *(System_String_o **)&(__this->fields)._climbCooldownLeft = pSVar10;
          pSVar10 = (System_String_o *)il2cpp_runtime_helper_022b4080(&(__this->fields)._climbCooldownLeft,pSVar10);
          (__this->fields)._currentCrippleTime = fVar15;
          return pSVar10;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adf48 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Single);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_float);
    g_data_057adf48 = '\x01';
  }
  pCVar12 = (Characters_BaseTitan_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_float);
  __this_01 = pCVar12;
  System_Collections_Generic_Dictionary_object__float____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pCVar12,MethodInfo_Dictionary_2_System_String_System_Single);
  lVar2 = *(long *)&(pCVar14->fields).EnableAI;
  if ((lVar2 != 0) && (pCVar12 != (Characters_BaseTitan_o *)0x0)) {
    __this_01 = pCVar12;
    System_Collections_Generic_Dictionary_object__float___Add
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pCVar12,
               *(Il2CppObject **)(lVar2 + 0x10),1.0,MethodInfo_Void_Add);
    lVar2 = *(long *)&(pCVar14->fields).EnableAI;
    if (lVar2 != 0) {
      System_Collections_Generic_Dictionary_object__float___Add
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pCVar12,
                 *(Il2CppObject **)(lVar2 + 0x18),1.0,MethodInfo_Void_Add);
      return (System_String_o *)pCVar12;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adf49 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057adf49 = '\x01';
  }
  pMVar13 = (__this_01->klass->vtable)._166_GetAnimationTime.method;
  pCVar12 = __this_01;
  fVar15 = (float)(*(__this_01->klass->vtable)._166_GetAnimationTime.methodPtr)();
  lVar2 = *(long *)&(__this_01->fields).EnableAI;
  if (lVar2 == 0) goto label_04304443;
  pCVar12 = *(Characters_BaseTitan_o **)&(__this_01->fields)._climbCooldownLeft;
  pMVar13 = *(MethodInfo **)(lVar2 + 0x10);
  bVar9 = System_String__op_Equality((System_String_o *)pCVar12,(System_String_o *)pMVar13,(MethodInfo *)0x0);
  if ((char)bVar9 == '\0') {
    lVar2 = *(long *)&(__this_01->fields).EnableAI;
    if (lVar2 == 0) {
label_04304443:
      uVar17 = il2cpp_runtime_helper_022b2c90();
      pSVar6 = (pCVar12->fields).OnPlayerPropertiesChanged;
      if ((pSVar6 != (System_Action_Hashtable__o *)0x0) &&
         (pCVar12 = (Characters_BaseTitan_o *)(pSVar6->fields).extra_arg,
         pCVar12 != (Characters_BaseTitan_o *)0x0)) {
        pMVar13 = (MethodInfo *)0x0;
        __this_00 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pCVar12,(MethodInfo *)0x0)
        ;
        if (__this_00 != (UnityEngine_Transform_o *)0x0) {
          UVar24 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
          if (g_data_057a6845 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
            g_data_057a6845 = '\x01';
          }
          auVar21._0_4_ = (float)uVar17 - UVar24.fields.x;
          auVar21._4_4_ = (float)((ulong)uVar17 >> 0x20) - UVar24.fields.y;
          auVar21._8_4_ = extraout_XMM0_Dc - extraout_XMM0_Dc_00;
          auVar21._12_4_ = extraout_XMM0_Dd - extraout_XMM0_Dd_00;
          in_XMM1_Da = in_XMM1_Da - UVar24.fields.z;
          if (*(int *)((long)&TypeInfo_Math[2].parameters + 4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          fVar15 = in_XMM1_Da * in_XMM1_Da + auVar21._4_4_ * auVar21._4_4_ + auVar21._0_4_ * auVar21._0_4_;
          if (fVar15 < 0.0) {
            fVar15 = sqrtf(fVar15);
            in_XMM1_Dc = extraout_XMM0_Dc_01;
            in_XMM1_Dd = extraout_XMM0_Dd_01;
          }
          else {
            fVar15 = SQRT(fVar15);
          }
          if (fVar15 <= 1e-05) {
            if (g_data_057a65d5 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
              g_data_057a65d5 = '\x01';
            }
            uStack_c8 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
            in_XMM1_Da = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
          }
          else {
            in_XMM1_Da = in_XMM1_Da / fVar15;
            auVar7._4_4_ = fVar15;
            auVar7._0_4_ = fVar15;
            auVar7._8_4_ = in_XMM1_Dc;
            auVar7._12_4_ = in_XMM1_Dd;
            auVar21 = divps(auVar21,auVar7);
            uStack_c8 = auVar21._0_8_;
          }
          UVar24 = UnityEngine_Transform__get_forward(__this_00,(MethodInfo *)0x0);
          fVar19 = UVar24.fields.z;
          fVar15 = UVar24.fields.x;
          fVar18 = UVar24.fields.y;
          uVar17 = extraout_RAX_00;
          if (g_data_057ac31a == '\0') {
            uVar17 = il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
            g_data_057ac31a = '\x01';
          }
          fVar23 = fVar19 * fVar19 + fVar18 * fVar18 + fVar15 * fVar15;
          fVar20 = (float)uStack_c8;
          fVar22 = (float)((ulong)uStack_c8 >> 0x20);
          fVar16 = in_XMM1_Da * in_XMM1_Da + fVar22 * fVar22 + fVar20 * fVar20;
          if (*(int *)((long)&TypeInfo_Math[2].parameters + 4) == 0) {
            uVar17 = il2cpp_runtime_helper_02337ed0();
          }
          if (fVar16 * fVar23 < 0.0) {
            fVar16 = sqrtf(fVar16 * fVar23);
            uVar17 = extraout_RAX_01;
            pMVar13 = TypeInfo_Math;
          }
          else {
            fVar16 = SQRT(fVar16 * fVar23);
            pMVar13 = TypeInfo_Math;
          }
          fVar23 = 0.0;
          TypeInfo_Math = pMVar13;
          if (1e-15 <= fVar16) {
            fVar16 = (in_XMM1_Da * fVar19 + fVar22 * fVar18 + fVar20 * fVar15) / fVar16;
            fVar15 = 1.0;
            if (fVar16 <= 1.0) {
              fVar15 = fVar16;
            }
            if (*(int *)((long)&pMVar13[2].parameters + 4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            dVar8 = acos((double)(float)(~-(uint)(-1.0 <= fVar16) & 0xbf800000 |
                                        (uint)fVar15 & -(uint)(-1.0 <= fVar16)),pMVar13);
            fVar23 = (float)dVar8 * 57.29578;
            uVar17 = extraout_RAX_02;
          }
          return (System_String_o *)CONCAT71((int7)((ulong)uVar17 >> 8),fVar23 < in_XMM2_Da);
        }
      }
      il2cpp_runtime_helper_022b2c90();
      *(undefined1 *)((long)&(pCVar12->fields)._previousCoreLocalPosition.fields.y + 1) = 1;
      (pCVar12->fields)._furthestCoreLocalPosition.fields.z = 2.0;
      Characters_BaseTitan___ctor(pCVar12,pMVar13);
      return extraout_RAX_03;
    }
    pCVar12 = *(Characters_BaseTitan_o **)&(__this_01->fields)._climbCooldownLeft;
    pMVar13 = *(MethodInfo **)(lVar2 + 0x18);
    bVar9 = System_String__op_Equality
                      ((System_String_o *)pCVar12,(System_String_o *)pMVar13,(MethodInfo *)0x0);
    if ((((char)bVar9 == '\0') || (fVar15 <= 0.28)) || ((__this_01->fields)._startPosition.fields.z != 0.0)) {
      return (System_String_o *)CONCAT44(extraout_var_00,bVar9);
    }
    (__this_01->fields)._startPosition.fields.z = 1.4013e-45;
    pSVar4 = (__this_01->fields).AttackAnimations;
    if (pSVar4 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_04304443;
    __this_02 = pSVar4[2].klass;
    pCVar12 = (Characters_BaseTitan_o *)0x0;
    if (__this_02 == (System_Collections_Generic_Dictionary_string__string__c *)0x0) goto label_04304443;
    fVar15 = 0.5;
  }
  else {
    fVar18 = (__this_01->fields)._startPosition.fields.z;
    if ((fVar15 <= 0.15) || (fVar18 != 0.0)) {
      if ((fVar15 <= 0.27) || (fVar18 != 1.4013e-45)) {
        if (fVar15 <= 0.56) {
          return (System_String_o *)(ulong)(uint)fVar18;
        }
        if (fVar18 != 2.8026e-45) {
          return (System_String_o *)(ulong)(uint)fVar18;
        }
        (__this_01->fields)._startPosition.fields.z = 4.2039e-45;
        pSVar4 = (__this_01->fields).AttackAnimations;
        if (pSVar4 != (System_Collections_Generic_Dictionary_string__string__o *)0x0) {
          pCVar5 = (Characters_BaseHitbox_o *)pSVar4[1].fields._values;
          pCVar12 = (Characters_BaseTitan_o *)0x0;
          if (pCVar5 != (Characters_BaseHitbox_o *)0x0) {
            Characters_BaseHitbox__Activate
                      (pCVar5,0.0,0.25 / (__this_01->fields)._startPosition.fields.y,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_TitanSounds + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar10 = *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x28);
            goto label_0430442a;
          }
        }
        goto label_04304443;
      }
      (__this_01->fields)._startPosition.fields.z = 2.8026e-45;
      pSVar4 = (__this_01->fields).AttackAnimations;
      if (pSVar4 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_04304443;
      pCVar5 = (Characters_BaseHitbox_o *)pSVar4[1].fields._keys;
      pCVar12 = (Characters_BaseTitan_o *)0x0;
      if (pCVar5 == (Characters_BaseHitbox_o *)0x0) goto label_04304443;
      Characters_BaseHitbox__Activate
                (pCVar5,0.0,0.23 / (__this_01->fields)._startPosition.fields.y,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_TitanSounds + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar10 = *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x20);
      goto label_0430442a;
    }
    (__this_01->fields)._startPosition.fields.z = 1.4013e-45;
    pSVar4 = (__this_01->fields).AttackAnimations;
    if (pSVar4 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_04304443;
    __this_02 = (System_Collections_Generic_Dictionary_string__string__c *)pSVar4[1].fields._values;
    pCVar12 = (Characters_BaseTitan_o *)0x0;
    if (__this_02 == (System_Collections_Generic_Dictionary_string__string__c *)0x0) goto label_04304443;
    fVar15 = 0.16;
  }
  Characters_BaseHitbox__Activate
            ((Characters_BaseHitbox_o *)__this_02,0.0,fVar15 / (__this_01->fields)._startPosition.fields.y,
             (MethodInfo *)0x0);
  if (*(int *)(TypeInfo_TitanSounds + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar10 = *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x18);
label_0430442a:
  Characters_BaseCharacter__PlaySound((Characters_BaseCharacter_o *)__this_01,pSVar10,(MethodInfo *)0x0);
  return extraout_RAX;
}


// Characters.ErenShifter$$Emote
// il2cpp: void Characters_ErenShifter__Emote (Characters_ErenShifter_o* __this, System_String_o* emote, const MethodInfo* method);
// 0x4303f10

void Characters_ErenShifter__Emote(Characters_ErenShifter_o *__this,System_String_o *emote,MethodInfo *method)

{
  long lVar1;
  Characters_AnimationHandler_o *pCVar2;
  System_Collections_Generic_Dictionary_string__string__o *pSVar3;
  Characters_BaseHitbox_o *pCVar4;
  System_Action_Hashtable__o *pSVar5;
  undefined1 auVar6 [16];
  char cVar7;
  bool_conflict bVar8;
  undefined8 *puVar9;
  System_Collections_IEnumerator_o *routine;
  Characters_BaseTitan_o *pCVar10;
  UnityEngine_Transform_o *__this_00;
  MethodInfo *extraout_RDX;
  System_String_o *pSVar11;
  MethodInfo *pMVar12;
  Characters_ErenShifter_o *pCVar13;
  Characters_BaseTitan_o *__this_01;
  System_Collections_Generic_Dictionary_string__string__c *__this_02;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  float in_XMM1_Da;
  float fVar18;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  float fVar19;
  float fVar21;
  undefined1 auVar20 [16];
  float fVar22;
  UnityEngine_Vector3_o UVar23;
  undefined8 uStack_c0;
  
  if (g_data_057adf47 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ShifterSounds);
    il2cpp_runtime_helper_023445d0(&"Roar");
    il2cpp_runtime_helper_023445d0(&"Nod");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057adf47 = '\x01';
    method = extraout_RDX;
  }
  cVar7 = (*(__this->klass->vtable)._124_CanEmote.methodPtr)
                    (__this,(__this->klass->vtable)._124_CanEmote.method,method);
  if (cVar7 == '\0') {
    return;
  }
  pSVar11 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  pCVar13 = (Characters_ErenShifter_o *)emote;
  bVar8 = System_String__op_Equality(emote,"Nod",(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
    bVar8 = System_String__op_Equality(emote,"Roar",(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') goto label_04304034;
    if (*(int *)(TypeInfo_ShifterSounds + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    routine = Characters_BaseCharacter__WaitAndPlaySound
                        ((Characters_BaseCharacter_o *)__this,
                         *(System_String_o **)(*(long *)(TypeInfo_ShifterSounds + 0xb8) + 8),0.9,(MethodInfo *)0x0);
    pCVar13 = __this;
    UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
              ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
    lVar1 = *(long *)&(__this->fields).EnableAI;
    if (lVar1 != 0) {
      puVar9 = (undefined8 *)(lVar1 + 0x28);
      goto label_04304031;
    }
  }
  else {
    lVar1 = *(long *)&(__this->fields).EnableAI;
    if (lVar1 != 0) {
      puVar9 = (undefined8 *)(lVar1 + 0x20);
label_04304031:
      pSVar11 = (System_String_o *)*puVar9;
label_04304034:
      bVar8 = System_String__op_Inequality(pSVar11,"",(MethodInfo *)0x0);
      if ((char)bVar8 == '\0') {
        return;
      }
      pCVar2 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
      pCVar13 = (Characters_ErenShifter_o *)0x0;
      if (pCVar2 != (Characters_AnimationHandler_o *)0x0) {
        fVar14 = Characters_AnimationHandler__GetLength(pCVar2,pSVar11,(MethodInfo *)0x0);
        *(undefined1 *)&(__this->fields)._stateTimeLeft = 1;
        pCVar2 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
        pCVar13 = (Characters_ErenShifter_o *)0x0;
        if (pCVar2 != (Characters_AnimationHandler_o *)0x0) {
          Characters_AnimationHandler__SetCullingType(pCVar2,0,(MethodInfo *)0x0);
          (*(__this->klass->vtable)._148_Ungrab.methodPtr)(__this,(__this->klass->vtable)._148_Ungrab.method);
          (*(__this->klass->vtable)._163_DeactivateAllHitboxes.methodPtr)
                    (__this,(__this->klass->vtable)._163_DeactivateAllHitboxes.method);
          Characters_BaseCharacter__CrossFade
                    ((Characters_BaseCharacter_o *)__this,pSVar11,0.1,0.0,(MethodInfo *)0x0);
          *(undefined4 *)&(__this->fields).OutlineComponent = 8;
          *(System_String_o **)&(__this->fields)._climbCooldownLeft = pSVar11;
          il2cpp_runtime_helper_022b4080(&(__this->fields)._climbCooldownLeft,pSVar11);
          (__this->fields)._currentCrippleTime = fVar14;
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adf48 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Single);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_float);
    g_data_057adf48 = '\x01';
  }
  pCVar10 = (Characters_BaseTitan_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_float);
  __this_01 = pCVar10;
  System_Collections_Generic_Dictionary_object__float____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pCVar10,MethodInfo_Dictionary_2_System_String_System_Single);
  lVar1 = *(long *)&(pCVar13->fields).EnableAI;
  if ((lVar1 != 0) && (pCVar10 != (Characters_BaseTitan_o *)0x0)) {
    __this_01 = pCVar10;
    System_Collections_Generic_Dictionary_object__float___Add
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pCVar10,
               *(Il2CppObject **)(lVar1 + 0x10),1.0,MethodInfo_Void_Add);
    lVar1 = *(long *)&(pCVar13->fields).EnableAI;
    if (lVar1 != 0) {
      System_Collections_Generic_Dictionary_object__float___Add
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pCVar10,
                 *(Il2CppObject **)(lVar1 + 0x18),1.0,MethodInfo_Void_Add);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adf49 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057adf49 = '\x01';
  }
  pMVar12 = (__this_01->klass->vtable)._166_GetAnimationTime.method;
  pCVar10 = __this_01;
  fVar14 = (float)(*(__this_01->klass->vtable)._166_GetAnimationTime.methodPtr)();
  lVar1 = *(long *)&(__this_01->fields).EnableAI;
  if (lVar1 == 0) goto label_04304443;
  pCVar10 = *(Characters_BaseTitan_o **)&(__this_01->fields)._climbCooldownLeft;
  pMVar12 = *(MethodInfo **)(lVar1 + 0x10);
  bVar8 = System_String__op_Equality((System_String_o *)pCVar10,(System_String_o *)pMVar12,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
    lVar1 = *(long *)&(__this_01->fields).EnableAI;
    if (lVar1 == 0) {
label_04304443:
      uVar16 = il2cpp_runtime_helper_022b2c90();
      pSVar5 = (pCVar10->fields).OnPlayerPropertiesChanged;
      if ((pSVar5 != (System_Action_Hashtable__o *)0x0) &&
         (pCVar10 = (Characters_BaseTitan_o *)(pSVar5->fields).extra_arg,
         pCVar10 != (Characters_BaseTitan_o *)0x0)) {
        pMVar12 = (MethodInfo *)0x0;
        __this_00 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pCVar10,(MethodInfo *)0x0)
        ;
        if (__this_00 != (UnityEngine_Transform_o *)0x0) {
          UVar23 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
          if (g_data_057a6845 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
            g_data_057a6845 = '\x01';
          }
          auVar20._0_4_ = (float)uVar16 - UVar23.fields.x;
          auVar20._4_4_ = (float)((ulong)uVar16 >> 0x20) - UVar23.fields.y;
          auVar20._8_4_ = extraout_XMM0_Dc - extraout_XMM0_Dc_00;
          auVar20._12_4_ = extraout_XMM0_Dd - extraout_XMM0_Dd_00;
          in_XMM1_Da = in_XMM1_Da - UVar23.fields.z;
          if (*(int *)((long)&TypeInfo_Math[2].parameters + 4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          fVar14 = in_XMM1_Da * in_XMM1_Da + auVar20._4_4_ * auVar20._4_4_ + auVar20._0_4_ * auVar20._0_4_;
          if (fVar14 < 0.0) {
            fVar14 = sqrtf(fVar14);
            in_XMM1_Dc = extraout_XMM0_Dc_01;
            in_XMM1_Dd = extraout_XMM0_Dd_01;
          }
          else {
            fVar14 = SQRT(fVar14);
          }
          if (fVar14 <= 1e-05) {
            if (g_data_057a65d5 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
              g_data_057a65d5 = '\x01';
            }
            uStack_c0 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
            in_XMM1_Da = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
          }
          else {
            in_XMM1_Da = in_XMM1_Da / fVar14;
            auVar6._4_4_ = fVar14;
            auVar6._0_4_ = fVar14;
            auVar6._8_4_ = in_XMM1_Dc;
            auVar6._12_4_ = in_XMM1_Dd;
            auVar20 = divps(auVar20,auVar6);
            uStack_c0 = auVar20._0_8_;
          }
          UVar23 = UnityEngine_Transform__get_forward(__this_00,(MethodInfo *)0x0);
          fVar18 = UVar23.fields.z;
          fVar14 = UVar23.fields.x;
          fVar17 = UVar23.fields.y;
          if (g_data_057ac31a == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
            g_data_057ac31a = '\x01';
          }
          fVar22 = fVar18 * fVar18 + fVar17 * fVar17 + fVar14 * fVar14;
          fVar19 = (float)uStack_c0;
          fVar21 = (float)((ulong)uStack_c0 >> 0x20);
          fVar15 = in_XMM1_Da * in_XMM1_Da + fVar21 * fVar21 + fVar19 * fVar19;
          if (*(int *)((long)&TypeInfo_Math[2].parameters + 4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          if (fVar15 * fVar22 < 0.0) {
            fVar15 = sqrtf(fVar15 * fVar22);
            pMVar12 = TypeInfo_Math;
          }
          else {
            fVar15 = SQRT(fVar15 * fVar22);
            pMVar12 = TypeInfo_Math;
          }
          TypeInfo_Math = pMVar12;
          if (1e-15 <= fVar15) {
            fVar15 = (in_XMM1_Da * fVar18 + fVar21 * fVar17 + fVar19 * fVar14) / fVar15;
            fVar14 = 1.0;
            if (fVar15 <= 1.0) {
              fVar14 = fVar15;
            }
            if (*(int *)((long)&pMVar12[2].parameters + 4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            acos((double)(float)(~-(uint)(-1.0 <= fVar15) & 0xbf800000 |
                                (uint)fVar14 & -(uint)(-1.0 <= fVar15)),pMVar12);
          }
          return;
        }
      }
      il2cpp_runtime_helper_022b2c90();
      *(undefined1 *)((long)&(pCVar10->fields)._previousCoreLocalPosition.fields.y + 1) = 1;
      (pCVar10->fields)._furthestCoreLocalPosition.fields.z = 2.0;
      Characters_BaseTitan___ctor(pCVar10,pMVar12);
      return;
    }
    pCVar10 = *(Characters_BaseTitan_o **)&(__this_01->fields)._climbCooldownLeft;
    pMVar12 = *(MethodInfo **)(lVar1 + 0x18);
    bVar8 = System_String__op_Equality
                      ((System_String_o *)pCVar10,(System_String_o *)pMVar12,(MethodInfo *)0x0);
    if ((((char)bVar8 == '\0') || (fVar14 <= 0.28)) || ((__this_01->fields)._startPosition.fields.z != 0.0)) {
      return;
    }
    (__this_01->fields)._startPosition.fields.z = 1.4013e-45;
    pSVar3 = (__this_01->fields).AttackAnimations;
    if (pSVar3 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_04304443;
    __this_02 = pSVar3[2].klass;
    pCVar10 = (Characters_BaseTitan_o *)0x0;
    if (__this_02 == (System_Collections_Generic_Dictionary_string__string__c *)0x0) goto label_04304443;
    fVar14 = 0.5;
  }
  else {
    fVar17 = (__this_01->fields)._startPosition.fields.z;
    if ((fVar14 <= 0.15) || (fVar17 != 0.0)) {
      if ((fVar14 <= 0.27) || (fVar17 != 1.4013e-45)) {
        if (fVar14 <= 0.56) {
          return;
        }
        if (fVar17 != 2.8026e-45) {
          return;
        }
        (__this_01->fields)._startPosition.fields.z = 4.2039e-45;
        pSVar3 = (__this_01->fields).AttackAnimations;
        if (pSVar3 != (System_Collections_Generic_Dictionary_string__string__o *)0x0) {
          pCVar4 = (Characters_BaseHitbox_o *)pSVar3[1].fields._values;
          pCVar10 = (Characters_BaseTitan_o *)0x0;
          if (pCVar4 != (Characters_BaseHitbox_o *)0x0) {
            Characters_BaseHitbox__Activate
                      (pCVar4,0.0,0.25 / (__this_01->fields)._startPosition.fields.y,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_TitanSounds + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar11 = *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x28);
            goto label_0430442a;
          }
        }
        goto label_04304443;
      }
      (__this_01->fields)._startPosition.fields.z = 2.8026e-45;
      pSVar3 = (__this_01->fields).AttackAnimations;
      if (pSVar3 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_04304443;
      pCVar4 = (Characters_BaseHitbox_o *)pSVar3[1].fields._keys;
      pCVar10 = (Characters_BaseTitan_o *)0x0;
      if (pCVar4 == (Characters_BaseHitbox_o *)0x0) goto label_04304443;
      Characters_BaseHitbox__Activate
                (pCVar4,0.0,0.23 / (__this_01->fields)._startPosition.fields.y,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_TitanSounds + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar11 = *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x20);
      goto label_0430442a;
    }
    (__this_01->fields)._startPosition.fields.z = 1.4013e-45;
    pSVar3 = (__this_01->fields).AttackAnimations;
    if (pSVar3 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_04304443;
    __this_02 = (System_Collections_Generic_Dictionary_string__string__c *)pSVar3[1].fields._values;
    pCVar10 = (Characters_BaseTitan_o *)0x0;
    if (__this_02 == (System_Collections_Generic_Dictionary_string__string__c *)0x0) goto label_04304443;
    fVar14 = 0.16;
  }
  Characters_BaseHitbox__Activate
            ((Characters_BaseHitbox_o *)__this_02,0.0,fVar14 / (__this_01->fields)._startPosition.fields.y,
             (MethodInfo *)0x0);
  if (*(int *)(TypeInfo_TitanSounds + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar11 = *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x18);
label_0430442a:
  Characters_BaseCharacter__PlaySound((Characters_BaseCharacter_o *)__this_01,pSVar11,(MethodInfo *)0x0);
  return;
}


// Characters.ErenShifter$$GetRootMotionAnimations
// il2cpp: System_Collections_Generic_Dictionary_string__float__o* Characters_ErenShifter__GetRootMotionAnimations (Characters_ErenShifter_o* __this, const MethodInfo* method);
// 0x4304110

System_Collections_Generic_Dictionary_string__float__o *
Characters_ErenShifter__GetRootMotionAnimations(Characters_ErenShifter_o *__this,MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_Dictionary_string__string__o *pSVar2;
  Characters_BaseHitbox_o *pCVar3;
  System_Action_Hashtable__o *pSVar4;
  undefined1 auVar5 [16];
  double dVar6;
  bool_conflict bVar7;
  Characters_BaseTitan_o *pCVar8;
  undefined4 extraout_var;
  System_Collections_Generic_Dictionary_string__float__o *extraout_RAX;
  UnityEngine_Transform_o *__this_00;
  undefined8 extraout_RAX_00;
  undefined8 extraout_RAX_01;
  undefined8 extraout_RAX_02;
  System_Collections_Generic_Dictionary_string__float__o *extraout_RAX_03;
  System_String_o *sound;
  MethodInfo *pMVar9;
  Characters_BaseTitan_o *__this_01;
  System_Collections_Generic_Dictionary_string__string__c *__this_02;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  float in_XMM1_Da;
  float fVar14;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  float in_XMM2_Da;
  float fVar15;
  float fVar17;
  undefined1 auVar16 [16];
  float fVar18;
  UnityEngine_Vector3_o UVar19;
  undefined8 uStack_98;
  
  if (g_data_057adf48 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Single);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_float);
    g_data_057adf48 = '\x01';
  }
  pCVar8 = (Characters_BaseTitan_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_float);
  __this_01 = pCVar8;
  System_Collections_Generic_Dictionary_object__float____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pCVar8,MethodInfo_Dictionary_2_System_String_System_Single);
  lVar1 = *(long *)&(__this->fields).EnableAI;
  if ((lVar1 != 0) && (pCVar8 != (Characters_BaseTitan_o *)0x0)) {
    __this_01 = pCVar8;
    System_Collections_Generic_Dictionary_object__float___Add
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pCVar8,
               *(Il2CppObject **)(lVar1 + 0x10),1.0,MethodInfo_Void_Add);
    lVar1 = *(long *)&(__this->fields).EnableAI;
    if (lVar1 != 0) {
      System_Collections_Generic_Dictionary_object__float___Add
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pCVar8,
                 *(Il2CppObject **)(lVar1 + 0x18),1.0,MethodInfo_Void_Add);
      return (System_Collections_Generic_Dictionary_string__float__o *)pCVar8;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adf49 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057adf49 = '\x01';
  }
  pMVar9 = (__this_01->klass->vtable)._166_GetAnimationTime.method;
  pCVar8 = __this_01;
  fVar10 = (float)(*(__this_01->klass->vtable)._166_GetAnimationTime.methodPtr)();
  lVar1 = *(long *)&(__this_01->fields).EnableAI;
  if (lVar1 == 0) goto label_04304443;
  pCVar8 = *(Characters_BaseTitan_o **)&(__this_01->fields)._climbCooldownLeft;
  pMVar9 = *(MethodInfo **)(lVar1 + 0x10);
  bVar7 = System_String__op_Equality((System_String_o *)pCVar8,(System_String_o *)pMVar9,(MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
    lVar1 = *(long *)&(__this_01->fields).EnableAI;
    if (lVar1 == 0) {
label_04304443:
      uVar12 = il2cpp_runtime_helper_022b2c90();
      pSVar4 = (pCVar8->fields).OnPlayerPropertiesChanged;
      if ((pSVar4 != (System_Action_Hashtable__o *)0x0) &&
         (pCVar8 = (Characters_BaseTitan_o *)(pSVar4->fields).extra_arg,
         pCVar8 != (Characters_BaseTitan_o *)0x0)) {
        pMVar9 = (MethodInfo *)0x0;
        __this_00 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pCVar8,(MethodInfo *)0x0);
        if (__this_00 != (UnityEngine_Transform_o *)0x0) {
          UVar19 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
          if (g_data_057a6845 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
            g_data_057a6845 = '\x01';
          }
          auVar16._0_4_ = (float)uVar12 - UVar19.fields.x;
          auVar16._4_4_ = (float)((ulong)uVar12 >> 0x20) - UVar19.fields.y;
          auVar16._8_4_ = extraout_XMM0_Dc - extraout_XMM0_Dc_00;
          auVar16._12_4_ = extraout_XMM0_Dd - extraout_XMM0_Dd_00;
          in_XMM1_Da = in_XMM1_Da - UVar19.fields.z;
          if (*(int *)((long)&TypeInfo_Math[2].parameters + 4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          fVar10 = in_XMM1_Da * in_XMM1_Da + auVar16._4_4_ * auVar16._4_4_ + auVar16._0_4_ * auVar16._0_4_;
          if (fVar10 < 0.0) {
            fVar10 = sqrtf(fVar10);
            in_XMM1_Dc = extraout_XMM0_Dc_01;
            in_XMM1_Dd = extraout_XMM0_Dd_01;
          }
          else {
            fVar10 = SQRT(fVar10);
          }
          if (fVar10 <= 1e-05) {
            if (g_data_057a65d5 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
              g_data_057a65d5 = '\x01';
            }
            uStack_98 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
            in_XMM1_Da = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
          }
          else {
            in_XMM1_Da = in_XMM1_Da / fVar10;
            auVar5._4_4_ = fVar10;
            auVar5._0_4_ = fVar10;
            auVar5._8_4_ = in_XMM1_Dc;
            auVar5._12_4_ = in_XMM1_Dd;
            auVar16 = divps(auVar16,auVar5);
            uStack_98 = auVar16._0_8_;
          }
          UVar19 = UnityEngine_Transform__get_forward(__this_00,(MethodInfo *)0x0);
          fVar14 = UVar19.fields.z;
          fVar10 = UVar19.fields.x;
          fVar13 = UVar19.fields.y;
          uVar12 = extraout_RAX_00;
          if (g_data_057ac31a == '\0') {
            uVar12 = il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
            g_data_057ac31a = '\x01';
          }
          fVar18 = fVar14 * fVar14 + fVar13 * fVar13 + fVar10 * fVar10;
          fVar15 = (float)uStack_98;
          fVar17 = (float)((ulong)uStack_98 >> 0x20);
          fVar11 = in_XMM1_Da * in_XMM1_Da + fVar17 * fVar17 + fVar15 * fVar15;
          if (*(int *)((long)&TypeInfo_Math[2].parameters + 4) == 0) {
            uVar12 = il2cpp_runtime_helper_02337ed0();
          }
          if (fVar11 * fVar18 < 0.0) {
            fVar11 = sqrtf(fVar11 * fVar18);
            uVar12 = extraout_RAX_01;
            pMVar9 = TypeInfo_Math;
          }
          else {
            fVar11 = SQRT(fVar11 * fVar18);
            pMVar9 = TypeInfo_Math;
          }
          fVar18 = 0.0;
          TypeInfo_Math = pMVar9;
          if (1e-15 <= fVar11) {
            fVar11 = (in_XMM1_Da * fVar14 + fVar17 * fVar13 + fVar15 * fVar10) / fVar11;
            fVar10 = 1.0;
            if (fVar11 <= 1.0) {
              fVar10 = fVar11;
            }
            if (*(int *)((long)&pMVar9[2].parameters + 4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            dVar6 = acos((double)(float)(~-(uint)(-1.0 <= fVar11) & 0xbf800000 |
                                        (uint)fVar10 & -(uint)(-1.0 <= fVar11)),pMVar9);
            fVar18 = (float)dVar6 * 57.29578;
            uVar12 = extraout_RAX_02;
          }
          return (System_Collections_Generic_Dictionary_string__float__o *)
                 CONCAT71((int7)((ulong)uVar12 >> 8),fVar18 < in_XMM2_Da);
        }
      }
      il2cpp_runtime_helper_022b2c90();
      *(undefined1 *)((long)&(pCVar8->fields)._previousCoreLocalPosition.fields.y + 1) = 1;
      (pCVar8->fields)._furthestCoreLocalPosition.fields.z = 2.0;
      Characters_BaseTitan___ctor(pCVar8,pMVar9);
      return extraout_RAX_03;
    }
    pCVar8 = *(Characters_BaseTitan_o **)&(__this_01->fields)._climbCooldownLeft;
    pMVar9 = *(MethodInfo **)(lVar1 + 0x18);
    bVar7 = System_String__op_Equality((System_String_o *)pCVar8,(System_String_o *)pMVar9,(MethodInfo *)0x0);
    if ((((char)bVar7 == '\0') || (fVar10 <= 0.28)) || ((__this_01->fields)._startPosition.fields.z != 0.0)) {
      return (System_Collections_Generic_Dictionary_string__float__o *)CONCAT44(extraout_var,bVar7);
    }
    (__this_01->fields)._startPosition.fields.z = 1.4013e-45;
    pSVar2 = (__this_01->fields).AttackAnimations;
    if (pSVar2 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_04304443;
    __this_02 = pSVar2[2].klass;
    pCVar8 = (Characters_BaseTitan_o *)0x0;
    if (__this_02 == (System_Collections_Generic_Dictionary_string__string__c *)0x0) goto label_04304443;
    fVar10 = 0.5;
  }
  else {
    fVar13 = (__this_01->fields)._startPosition.fields.z;
    if ((fVar10 <= 0.15) || (fVar13 != 0.0)) {
      if ((fVar10 <= 0.27) || (fVar13 != 1.4013e-45)) {
        if (fVar10 <= 0.56) {
          return (System_Collections_Generic_Dictionary_string__float__o *)(ulong)(uint)fVar13;
        }
        if (fVar13 != 2.8026e-45) {
          return (System_Collections_Generic_Dictionary_string__float__o *)(ulong)(uint)fVar13;
        }
        (__this_01->fields)._startPosition.fields.z = 4.2039e-45;
        pSVar2 = (__this_01->fields).AttackAnimations;
        if (pSVar2 != (System_Collections_Generic_Dictionary_string__string__o *)0x0) {
          pCVar3 = (Characters_BaseHitbox_o *)pSVar2[1].fields._values;
          pCVar8 = (Characters_BaseTitan_o *)0x0;
          if (pCVar3 != (Characters_BaseHitbox_o *)0x0) {
            Characters_BaseHitbox__Activate
                      (pCVar3,0.0,0.25 / (__this_01->fields)._startPosition.fields.y,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_TitanSounds + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            sound = *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x28);
            goto label_0430442a;
          }
        }
        goto label_04304443;
      }
      (__this_01->fields)._startPosition.fields.z = 2.8026e-45;
      pSVar2 = (__this_01->fields).AttackAnimations;
      if (pSVar2 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_04304443;
      pCVar3 = (Characters_BaseHitbox_o *)pSVar2[1].fields._keys;
      pCVar8 = (Characters_BaseTitan_o *)0x0;
      if (pCVar3 == (Characters_BaseHitbox_o *)0x0) goto label_04304443;
      Characters_BaseHitbox__Activate
                (pCVar3,0.0,0.23 / (__this_01->fields)._startPosition.fields.y,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_TitanSounds + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      sound = *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x20);
      goto label_0430442a;
    }
    (__this_01->fields)._startPosition.fields.z = 1.4013e-45;
    pSVar2 = (__this_01->fields).AttackAnimations;
    if (pSVar2 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_04304443;
    __this_02 = (System_Collections_Generic_Dictionary_string__string__c *)pSVar2[1].fields._values;
    pCVar8 = (Characters_BaseTitan_o *)0x0;
    if (__this_02 == (System_Collections_Generic_Dictionary_string__string__c *)0x0) goto label_04304443;
    fVar10 = 0.16;
  }
  Characters_BaseHitbox__Activate
            ((Characters_BaseHitbox_o *)__this_02,0.0,fVar10 / (__this_01->fields)._startPosition.fields.y,
             (MethodInfo *)0x0);
  if (*(int *)(TypeInfo_TitanSounds + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  sound = *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x18);
label_0430442a:
  Characters_BaseCharacter__PlaySound((Characters_BaseCharacter_o *)__this_01,sound,(MethodInfo *)0x0);
  return extraout_RAX;
}


// Characters.ErenShifter$$UpdateAttack
// il2cpp: void Characters_ErenShifter__UpdateAttack (Characters_ErenShifter_o* __this, const MethodInfo* method);
// 0x43041d0

void Characters_ErenShifter__UpdateAttack(Characters_ErenShifter_o *__this,MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_Dictionary_string__string__o *pSVar2;
  Characters_BaseHitbox_o *pCVar3;
  System_Action_Hashtable__o *pSVar4;
  undefined1 auVar5 [16];
  bool_conflict bVar6;
  UnityEngine_Transform_o *__this_00;
  System_String_o *sound;
  MethodInfo *pMVar7;
  Characters_ErenShifter_o *__this_01;
  System_Collections_Generic_Dictionary_string__string__c *__this_02;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  float in_XMM1_Da;
  float fVar12;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  float fVar13;
  float fVar15;
  undefined1 auVar14 [16];
  float fVar16;
  UnityEngine_Vector3_o UVar17;
  undefined8 uStack_80;
  
  if (g_data_057adf49 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057adf49 = '\x01';
  }
  pMVar7 = (__this->klass->vtable)._166_GetAnimationTime.method;
  __this_01 = __this;
  fVar8 = (float)(*(__this->klass->vtable)._166_GetAnimationTime.methodPtr)();
  lVar1 = *(long *)&(__this->fields).EnableAI;
  if (lVar1 == 0) goto label_04304443;
  __this_01 = *(Characters_ErenShifter_o **)&(__this->fields)._climbCooldownLeft;
  pMVar7 = *(MethodInfo **)(lVar1 + 0x10);
  bVar6 = System_String__op_Equality((System_String_o *)__this_01,(System_String_o *)pMVar7,(MethodInfo *)0x0)
  ;
  if ((char)bVar6 == '\0') {
    lVar1 = *(long *)&(__this->fields).EnableAI;
    if (lVar1 == 0) {
label_04304443:
      uVar10 = il2cpp_runtime_helper_022b2c90();
      pSVar4 = (__this_01->fields).OnPlayerPropertiesChanged;
      if ((pSVar4 != (System_Action_Hashtable__o *)0x0) &&
         (__this_01 = (Characters_ErenShifter_o *)(pSVar4->fields).extra_arg,
         __this_01 != (Characters_ErenShifter_o *)0x0)) {
        pMVar7 = (MethodInfo *)0x0;
        __this_00 = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
        if (__this_00 != (UnityEngine_Transform_o *)0x0) {
          UVar17 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
          if (g_data_057a6845 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
            g_data_057a6845 = '\x01';
          }
          auVar14._0_4_ = (float)uVar10 - UVar17.fields.x;
          auVar14._4_4_ = (float)((ulong)uVar10 >> 0x20) - UVar17.fields.y;
          auVar14._8_4_ = extraout_XMM0_Dc - extraout_XMM0_Dc_00;
          auVar14._12_4_ = extraout_XMM0_Dd - extraout_XMM0_Dd_00;
          in_XMM1_Da = in_XMM1_Da - UVar17.fields.z;
          if (*(int *)((long)&TypeInfo_Math[2].parameters + 4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          fVar8 = in_XMM1_Da * in_XMM1_Da + auVar14._4_4_ * auVar14._4_4_ + auVar14._0_4_ * auVar14._0_4_;
          if (fVar8 < 0.0) {
            fVar8 = sqrtf(fVar8);
            in_XMM1_Dc = extraout_XMM0_Dc_01;
            in_XMM1_Dd = extraout_XMM0_Dd_01;
          }
          else {
            fVar8 = SQRT(fVar8);
          }
          if (fVar8 <= 1e-05) {
            if (g_data_057a65d5 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
              g_data_057a65d5 = '\x01';
            }
            uStack_80 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
            in_XMM1_Da = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
          }
          else {
            in_XMM1_Da = in_XMM1_Da / fVar8;
            auVar5._4_4_ = fVar8;
            auVar5._0_4_ = fVar8;
            auVar5._8_4_ = in_XMM1_Dc;
            auVar5._12_4_ = in_XMM1_Dd;
            auVar14 = divps(auVar14,auVar5);
            uStack_80 = auVar14._0_8_;
          }
          UVar17 = UnityEngine_Transform__get_forward(__this_00,(MethodInfo *)0x0);
          fVar12 = UVar17.fields.z;
          fVar8 = UVar17.fields.x;
          fVar11 = UVar17.fields.y;
          if (g_data_057ac31a == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
            g_data_057ac31a = '\x01';
          }
          fVar16 = fVar12 * fVar12 + fVar11 * fVar11 + fVar8 * fVar8;
          fVar13 = (float)uStack_80;
          fVar15 = (float)((ulong)uStack_80 >> 0x20);
          fVar9 = in_XMM1_Da * in_XMM1_Da + fVar15 * fVar15 + fVar13 * fVar13;
          if (*(int *)((long)&TypeInfo_Math[2].parameters + 4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          if (fVar9 * fVar16 < 0.0) {
            fVar9 = sqrtf(fVar9 * fVar16);
            pMVar7 = TypeInfo_Math;
          }
          else {
            fVar9 = SQRT(fVar9 * fVar16);
            pMVar7 = TypeInfo_Math;
          }
          TypeInfo_Math = pMVar7;
          if (1e-15 <= fVar9) {
            fVar9 = (in_XMM1_Da * fVar12 + fVar15 * fVar11 + fVar13 * fVar8) / fVar9;
            fVar8 = 1.0;
            if (fVar9 <= 1.0) {
              fVar8 = fVar9;
            }
            if (*(int *)((long)&pMVar7[2].parameters + 4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            acos((double)(float)(~-(uint)(-1.0 <= fVar9) & 0xbf800000 | (uint)fVar8 & -(uint)(-1.0 <= fVar9)),
                 pMVar7);
          }
          return;
        }
      }
      il2cpp_runtime_helper_022b2c90();
      *(undefined1 *)((long)&(__this_01->fields)._previousCoreLocalPosition.fields.y + 1) = 1;
      (__this_01->fields)._furthestCoreLocalPosition.fields.z = 2.0;
      Characters_BaseTitan___ctor((Characters_BaseTitan_o *)__this_01,pMVar7);
      return;
    }
    __this_01 = *(Characters_ErenShifter_o **)&(__this->fields)._climbCooldownLeft;
    pMVar7 = *(MethodInfo **)(lVar1 + 0x18);
    bVar6 = System_String__op_Equality
                      ((System_String_o *)__this_01,(System_String_o *)pMVar7,(MethodInfo *)0x0);
    if ((((char)bVar6 == '\0') || (fVar8 <= 0.28)) || ((__this->fields)._startPosition.fields.z != 0.0)) {
      return;
    }
    (__this->fields)._startPosition.fields.z = 1.4013e-45;
    pSVar2 = (__this->fields).AttackAnimations;
    if (pSVar2 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_04304443;
    __this_02 = pSVar2[2].klass;
    __this_01 = (Characters_ErenShifter_o *)0x0;
    if (__this_02 == (System_Collections_Generic_Dictionary_string__string__c *)0x0) goto label_04304443;
    fVar8 = 0.5;
  }
  else {
    fVar11 = (__this->fields)._startPosition.fields.z;
    if ((fVar8 <= 0.15) || (fVar11 != 0.0)) {
      if ((fVar8 <= 0.27) || (fVar11 != 1.4013e-45)) {
        if (fVar8 <= 0.56) {
          return;
        }
        if (fVar11 != 2.8026e-45) {
          return;
        }
        (__this->fields)._startPosition.fields.z = 4.2039e-45;
        pSVar2 = (__this->fields).AttackAnimations;
        if (pSVar2 != (System_Collections_Generic_Dictionary_string__string__o *)0x0) {
          pCVar3 = (Characters_BaseHitbox_o *)pSVar2[1].fields._values;
          __this_01 = (Characters_ErenShifter_o *)0x0;
          if (pCVar3 != (Characters_BaseHitbox_o *)0x0) {
            Characters_BaseHitbox__Activate
                      (pCVar3,0.0,0.25 / (__this->fields)._startPosition.fields.y,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_TitanSounds + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            sound = *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x28);
            goto label_0430442a;
          }
        }
        goto label_04304443;
      }
      (__this->fields)._startPosition.fields.z = 2.8026e-45;
      pSVar2 = (__this->fields).AttackAnimations;
      if (pSVar2 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_04304443;
      pCVar3 = (Characters_BaseHitbox_o *)pSVar2[1].fields._keys;
      __this_01 = (Characters_ErenShifter_o *)0x0;
      if (pCVar3 == (Characters_BaseHitbox_o *)0x0) goto label_04304443;
      Characters_BaseHitbox__Activate
                (pCVar3,0.0,0.23 / (__this->fields)._startPosition.fields.y,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_TitanSounds + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      sound = *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x20);
      goto label_0430442a;
    }
    (__this->fields)._startPosition.fields.z = 1.4013e-45;
    pSVar2 = (__this->fields).AttackAnimations;
    if (pSVar2 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_04304443;
    __this_02 = (System_Collections_Generic_Dictionary_string__string__c *)pSVar2[1].fields._values;
    __this_01 = (Characters_ErenShifter_o *)0x0;
    if (__this_02 == (System_Collections_Generic_Dictionary_string__string__c *)0x0) goto label_04304443;
    fVar8 = 0.16;
  }
  Characters_BaseHitbox__Activate
            ((Characters_BaseHitbox_o *)__this_02,0.0,fVar8 / (__this->fields)._startPosition.fields.y,
             (MethodInfo *)0x0);
  if (*(int *)(TypeInfo_TitanSounds + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  sound = *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x18);
label_0430442a:
  Characters_BaseCharacter__PlaySound((Characters_BaseCharacter_o *)__this,sound,(MethodInfo *)0x0);
  return;
}


// Characters.ErenShifter$$CheckNapeAngle
// il2cpp: bool Characters_ErenShifter__CheckNapeAngle (Characters_ErenShifter_o* __this, UnityEngine_Vector3_o hitPosition, float maxAngle, const MethodInfo* method);
// 0x4304450

bool_conflict
Characters_ErenShifter__CheckNapeAngle
          (Characters_ErenShifter_o *__this,UnityEngine_Vector3_o hitPosition,float maxAngle,
          MethodInfo *method)

{
  System_Action_Hashtable__o *pSVar1;
  undefined1 auVar2 [16];
  double dVar3;
  bool_conflict extraout_EAX;
  UnityEngine_Transform_o *__this_00;
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
  if ((pSVar1 != (System_Action_Hashtable__o *)0x0) &&
     (__this = (Characters_ErenShifter_o *)(pSVar1->fields).extra_arg,
     __this != (Characters_ErenShifter_o *)0x0)) {
    method = (MethodInfo *)0x0;
    __this_00 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_Transform_o *)0x0) {
      UVar14 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
      if (g_data_057a6845 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
        g_data_057a6845 = '\x01';
      }
      uStack_68._0_4_ = hitPosition.fields.x;
      uStack_68._4_4_ = hitPosition.fields.y;
      auVar11._0_4_ = (float)uStack_68 - UVar14.fields.x;
      auVar11._4_4_ = uStack_68._4_4_ - UVar14.fields.y;
      auVar11._8_4_ = in_XMM0_Dc - extraout_XMM0_Dc;
      auVar11._12_4_ = in_XMM0_Dd - extraout_XMM0_Dd;
      fVar9 = hitPosition.fields.z - UVar14.fields.z;
      if (*(int *)((long)&TypeInfo_Math[2].parameters + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
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
        if (g_data_057a65d5 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
          g_data_057a65d5 = '\x01';
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
      UVar14 = UnityEngine_Transform__get_forward(__this_00,(MethodInfo *)0x0);
      fVar8 = UVar14.fields.z;
      fVar5 = UVar14.fields.x;
      fVar7 = UVar14.fields.y;
      uVar4 = extraout_RAX;
      if (g_data_057ac31a == '\0') {
        uVar4 = il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
        g_data_057ac31a = '\x01';
      }
      fVar13 = fVar8 * fVar8 + fVar7 * fVar7 + fVar5 * fVar5;
      fVar10 = (float)uStack_68;
      fVar12 = (float)((ulong)uStack_68 >> 0x20);
      fVar6 = fVar9 * fVar9 + fVar12 * fVar12 + fVar10 * fVar10;
      if (*(int *)((long)&TypeInfo_Math[2].parameters + 4) == 0) {
        uVar4 = il2cpp_runtime_helper_02337ed0();
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
          il2cpp_runtime_helper_02337ed0();
        }
        dVar3 = acos((double)(float)(~-(uint)(-1.0 <= fVar6) & 0xbf800000 |
                                    (uint)fVar9 & -(uint)(-1.0 <= fVar6)),method_00);
        fVar13 = (float)dVar3 * 57.29578;
        uVar4 = extraout_RAX_01;
      }
      return (bool_conflict)CONCAT71((int7)((ulong)uVar4 >> 8),fVar13 < maxAngle);
    }
  }
  il2cpp_runtime_helper_022b2c90();
  *(undefined1 *)((long)&(__this->fields)._previousCoreLocalPosition.fields.y + 1) = 1;
  (__this->fields)._furthestCoreLocalPosition.fields.z = 2.0;
  Characters_BaseTitan___ctor((Characters_BaseTitan_o *)__this,method);
  return extraout_EAX;
}


// Characters.ErenShifter$$.ctor
// il2cpp: void Characters_ErenShifter___ctor (Characters_ErenShifter_o* __this, const MethodInfo* method);
// 0x4304760

void Characters_ErenShifter___ctor(Characters_ErenShifter_o *__this,MethodInfo *method)

{
  *(undefined1 *)((long)&(__this->fields)._previousCoreLocalPosition.fields.y + 1) = 1;
  (__this->fields)._furthestCoreLocalPosition.fields.z = 2.0;
  Characters_BaseTitan___ctor((Characters_BaseTitan_o *)__this,method);
  return;
}


