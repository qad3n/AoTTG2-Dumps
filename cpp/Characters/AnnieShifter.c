// Type: Characters.AnnieShifter
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/AnnieShifter.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Shifters/Annie/AnnieShifter.cs
// --------------------------------

// Characters.AnnieShifter$$get_EmoteActions
// il2cpp: System_Collections_Generic_List_string__o* Characters_AnnieShifter__get_EmoteActions (Characters_AnnieShifter_o* __this, const MethodInfo* method);
// 0x42fd710

System_Collections_Generic_List_string__o *
Characters_AnnieShifter__get_EmoteActions(Characters_AnnieShifter_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_String_array *pSVar3;
  long lVar4;
  System_String_o *pSVar5;
  Characters_BaseTitan_o *__this_00;
  UnityEngine_GameObject_o *owner;
  Characters_AnnieComponentCache_o *__this_01;
  System_Collections_Generic_List_string__o *extraout_RAX;
  MethodInfo *method_00;
  Characters_BaseTitan_o *__this_02;
  undefined1 auVar6 [16];
  
  if (g_data_057adf10 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&"Wave");
    il2cpp_runtime_helper_023445d0(&"Roar");
    il2cpp_runtime_helper_023445d0(&"Salute");
    il2cpp_runtime_helper_023445d0(&"Taunt");
    g_data_057adf10 = '\x01';
  }
  __this_00 = (Characters_BaseTitan_o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  __this_02 = __this_00;
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_System_String);
  pSVar5 = "Salute";
  lVar4 = MethodInfo_Void_Add;
  if (__this_00 != (Characters_BaseTitan_o *)0x0) {
    piVar1 = (int32_t *)((long)&(__this_00->fields).m_CancellationTokenSource + 4);
    *piVar1 = *piVar1 + 1;
    pSVar3 = (System_String_array *)(__this_00->fields).m_CachedPtr;
    if (pSVar3 != (System_String_array *)0x0) {
      uVar2 = *(uint *)&(__this_00->fields).m_CancellationTokenSource;
      if (uVar2 < (uint)pSVar3->max_length) {
        *(uint *)&(__this_00->fields).m_CancellationTokenSource = uVar2 + 1;
        __this_02 = (Characters_BaseTitan_o *)(pSVar3->m_Items + (int)uVar2);
        pSVar3->m_Items[(int)uVar2] = pSVar5;
        il2cpp_runtime_helper_022b4080();
      }
      else {
        __this_02 = __this_00;
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar5,
                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
      }
      pSVar5 = "Roar";
      lVar4 = MethodInfo_Void_Add;
      piVar1 = (int32_t *)((long)&(__this_00->fields).m_CancellationTokenSource + 4);
      *piVar1 = *piVar1 + 1;
      pSVar3 = (System_String_array *)(__this_00->fields).m_CachedPtr;
      if (pSVar3 != (System_String_array *)0x0) {
        uVar2 = *(uint *)&(__this_00->fields).m_CancellationTokenSource;
        if (uVar2 < (uint)pSVar3->max_length) {
          *(uint *)&(__this_00->fields).m_CancellationTokenSource = uVar2 + 1;
          __this_02 = (Characters_BaseTitan_o *)(pSVar3->m_Items + (int)uVar2);
          pSVar3->m_Items[(int)uVar2] = pSVar5;
          il2cpp_runtime_helper_022b4080();
        }
        else {
          __this_02 = __this_00;
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar5,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
        }
        pSVar5 = "Taunt";
        lVar4 = MethodInfo_Void_Add;
        piVar1 = (int32_t *)((long)&(__this_00->fields).m_CancellationTokenSource + 4);
        *piVar1 = *piVar1 + 1;
        pSVar3 = (System_String_array *)(__this_00->fields).m_CachedPtr;
        if (pSVar3 != (System_String_array *)0x0) {
          uVar2 = *(uint *)&(__this_00->fields).m_CancellationTokenSource;
          if (uVar2 < (uint)pSVar3->max_length) {
            *(uint *)&(__this_00->fields).m_CancellationTokenSource = uVar2 + 1;
            __this_02 = (Characters_BaseTitan_o *)(pSVar3->m_Items + (int)uVar2);
            pSVar3->m_Items[(int)uVar2] = pSVar5;
            il2cpp_runtime_helper_022b4080();
          }
          else {
            __this_02 = __this_00;
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar5,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
          }
          pSVar5 = "Wave";
          lVar4 = MethodInfo_Void_Add;
          piVar1 = (int32_t *)((long)&(__this_00->fields).m_CancellationTokenSource + 4);
          *piVar1 = *piVar1 + 1;
          pSVar3 = (System_String_array *)(__this_00->fields).m_CachedPtr;
          if (pSVar3 != (System_String_array *)0x0) {
            uVar2 = *(uint *)&(__this_00->fields).m_CancellationTokenSource;
            if (uVar2 < (uint)pSVar3->max_length) {
              *(uint *)&(__this_00->fields).m_CancellationTokenSource = uVar2 + 1;
              pSVar3->m_Items[(int)uVar2] = pSVar5;
              il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar5,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
            }
            return (System_Collections_Generic_List_string__o *)__this_00;
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adf11 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AnnieComponentCache);
    g_data_057adf11 = '\x01';
  }
  owner = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
  auVar6 = il2cpp_runtime_helper_023052d0(TypeInfo_AnnieComponentCache);
  __this_01 = auVar6._0_8_;
  Characters_AnnieComponentCache___ctor(__this_01,owner,auVar6._8_8_);
  (__this_02->fields).AttackAnimations = (System_Collections_Generic_Dictionary_string__string__o *)__this_01;
  il2cpp_runtime_helper_022b4080(&(__this_02->fields).AttackAnimations,__this_01);
  Characters_BaseTitan__CreateCache
            (__this_02,(Utility_BaseComponentCache_o *)(__this_02->fields).AttackAnimations,method_00);
  return extraout_RAX;
}


// Characters.AnnieShifter$$CreateCache
// il2cpp: void Characters_AnnieShifter__CreateCache (Characters_AnnieShifter_o* __this, Utility_BaseComponentCache_o* cache, const MethodInfo* method);
// 0x42fd920

void Characters_AnnieShifter__CreateCache
               (Characters_AnnieShifter_o *__this,Utility_BaseComponentCache_o *cache,MethodInfo *method)

{
  UnityEngine_GameObject_o *owner;
  Characters_AnnieComponentCache_o *__this_00;
  MethodInfo *method_00;
  undefined1 auVar1 [16];
  
  if (g_data_057adf11 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AnnieComponentCache);
    g_data_057adf11 = '\x01';
  }
  owner = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  auVar1 = il2cpp_runtime_helper_023052d0(TypeInfo_AnnieComponentCache);
  __this_00 = auVar1._0_8_;
  Characters_AnnieComponentCache___ctor(__this_00,owner,auVar1._8_8_);
  (__this->fields).AttackAnimations = (System_Collections_Generic_Dictionary_string__string__o *)__this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields).AttackAnimations,__this_00);
  Characters_BaseTitan__CreateCache
            ((Characters_BaseTitan_o *)__this,
             (Utility_BaseComponentCache_o *)(__this->fields).AttackAnimations,method_00);
  return;
}


// Characters.AnnieShifter$$CreateAnimations
// il2cpp: void Characters_AnnieShifter__CreateAnimations (Characters_AnnieShifter_o* __this, Characters_BaseTitanAnimations_o* animations, const MethodInfo* method);
// 0x42fda50

void Characters_AnnieShifter__CreateAnimations
               (Characters_AnnieShifter_o *__this,Characters_BaseTitanAnimations_o *animations,
               MethodInfo *method)

{
  Characters_AnnieAnimations_o *__this_00;
  MethodInfo *method_00;
  
  if (g_data_057adf12 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AnnieAnimations);
    g_data_057adf12 = '\x01';
  }
  __this_00 = (Characters_AnnieAnimations_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AnnieAnimations);
  Characters_AnnieAnimations___ctor(__this_00,(MethodInfo *)animations);
  *(Characters_AnnieAnimations_o **)&(__this->fields).EnableAI = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields).EnableAI,__this_00);
  Characters_BaseTitan__CreateAnimations
            ((Characters_BaseTitan_o *)__this,*(Characters_BaseTitanAnimations_o **)&(__this->fields).EnableAI
             ,method_00);
  return;
}


// Characters.AnnieShifter$$Emote
// il2cpp: void Characters_AnnieShifter__Emote (Characters_AnnieShifter_o* __this, System_String_o* emote, const MethodInfo* method);
// 0x42fdcd0

void Characters_AnnieShifter__Emote
               (Characters_AnnieShifter_o *__this,System_String_o *emote,MethodInfo *method)

{
  UnityEngine_Animator_o *pUVar1;
  System_Collections_Generic_Dictionary_string__string__o *pSVar2;
  System_Action_Hashtable__o *pSVar3;
  UnityEngine_Transform_o *pUVar4;
  char cVar5;
  bool_conflict bVar6;
  System_Collections_IEnumerator_o *routine;
  UnityEngine_GameObject_o *__this_00;
  Characters_BaseTitan_o *pCVar7;
  Characters_BaseTitan_o *pCVar8;
  uint in_ECX;
  MethodInfo *extraout_RDX;
  System_String_o *name;
  System_Collections_Generic_Dictionary_string__string__c *pSVar9;
  Characters_BaseHitbox_o *pCVar10;
  int32_t state;
  System_String_o *pSVar11;
  long lVar12;
  System_String_o *pSVar13;
  MethodInfo *method_00;
  Characters_AnimationHandler_o *pCVar14;
  Characters_BaseTitan_o *pCVar15;
  MethodInfo *in_R8;
  float fVar16;
  float fVar17;
  UnityEngine_Quaternion_o rotation;
  UnityEngine_Vector3_o UVar18;
  UnityEngine_Vector3_o UVar19;
  undefined8 uStack_d0;
  float fStack_b0;
  
  if (g_data_057adf13 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ShifterSounds);
    il2cpp_runtime_helper_023445d0(&"Wave");
    il2cpp_runtime_helper_023445d0(&"Roar");
    il2cpp_runtime_helper_023445d0(&"Salute");
    il2cpp_runtime_helper_023445d0(&"Taunt");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057adf13 = '\x01';
    method = extraout_RDX;
  }
  cVar5 = (*(__this->klass->vtable)._124_CanEmote.methodPtr)
                    (__this,(__this->klass->vtable)._124_CanEmote.method,method);
  if (cVar5 == '\0') {
    return;
  }
  pSVar13 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  pSVar11 = "Salute";
  pCVar15 = (Characters_BaseTitan_o *)emote;
  bVar6 = System_String__op_Equality(emote,"Salute",(MethodInfo *)0x0);
  state = (int32_t)pSVar11;
  if ((char)bVar6 == '\0') {
    pSVar11 = "Roar";
    pCVar15 = (Characters_BaseTitan_o *)emote;
    bVar6 = System_String__op_Equality(emote,"Roar",(MethodInfo *)0x0);
    state = (int32_t)pSVar11;
    if ((char)bVar6 == '\0') {
      pSVar11 = "Taunt";
      pCVar15 = (Characters_BaseTitan_o *)emote;
      bVar6 = System_String__op_Equality(emote,"Taunt",(MethodInfo *)0x0);
      state = (int32_t)pSVar11;
      if ((char)bVar6 == '\0') {
        pSVar11 = "Wave";
        bVar6 = System_String__op_Equality(emote,"Wave",(MethodInfo *)0x0);
        state = (int32_t)pSVar11;
        if ((char)bVar6 != '\0') {
          lVar12 = *(long *)&(__this->fields).EnableAI;
          if (lVar12 == 0) goto label_042fdf42;
          pSVar13 = *(System_String_o **)(lVar12 + 0xb8);
        }
      }
      else {
        lVar12 = *(long *)&(__this->fields).EnableAI;
        emote = (System_String_o *)pCVar15;
        if (lVar12 == 0) goto label_042fdf42;
        pSVar13 = *(System_String_o **)(lVar12 + 0xb0);
      }
    }
    else {
      lVar12 = *(long *)&(__this->fields).EnableAI;
      emote = (System_String_o *)pCVar15;
      if (lVar12 == 0) goto label_042fdf42;
      pSVar13 = *(System_String_o **)(lVar12 + 0xc0);
      if (*(int *)(TypeInfo_ShifterSounds + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      routine = Characters_BaseCharacter__WaitAndPlaySound
                          ((Characters_BaseCharacter_o *)__this,
                           *(System_String_o **)(*(long *)(TypeInfo_ShifterSounds + 0xb8) + 0x10),0.1,(MethodInfo *)0x0)
      ;
      UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
    }
label_042fde74:
    pSVar11 = "";
    bVar6 = System_String__op_Inequality(pSVar13,"",(MethodInfo *)0x0);
    state = (int32_t)pSVar11;
    if ((char)bVar6 == '\0') {
      return;
    }
    pCVar14 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
    emote = (System_String_o *)(Characters_BaseTitan_o *)0x0;
    if (pCVar14 != (Characters_AnimationHandler_o *)0x0) {
      pSVar11 = pSVar13;
      fVar16 = Characters_AnimationHandler__GetLength(pCVar14,pSVar13,(MethodInfo *)0x0);
      state = (int32_t)pSVar11;
      *(undefined1 *)&(__this->fields)._stateTimeLeft = 1;
      pCVar14 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
      emote = (System_String_o *)(Characters_BaseTitan_o *)0x0;
      if (pCVar14 != (Characters_AnimationHandler_o *)0x0) {
        Characters_AnimationHandler__SetCullingType(pCVar14,0,(MethodInfo *)0x0);
        (*(__this->klass->vtable)._148_Ungrab.methodPtr)(__this,(__this->klass->vtable)._148_Ungrab.method);
        (*(__this->klass->vtable)._163_DeactivateAllHitboxes.methodPtr)
                  (__this,(__this->klass->vtable)._163_DeactivateAllHitboxes.method);
        Characters_BaseCharacter__CrossFade
                  ((Characters_BaseCharacter_o *)__this,pSVar13,0.1,0.0,(MethodInfo *)0x0);
        *(undefined4 *)&(__this->fields).OutlineComponent = 8;
        *(System_String_o **)&(__this->fields)._climbCooldownLeft = pSVar13;
        il2cpp_runtime_helper_022b4080(&(__this->fields)._climbCooldownLeft,pSVar13);
        (__this->fields)._currentCrippleTime = fVar16;
        return;
      }
    }
  }
  else {
    lVar12 = *(long *)&(__this->fields).EnableAI;
    emote = (System_String_o *)pCVar15;
    if (lVar12 != 0) {
      pSVar13 = *(System_String_o **)(lVar12 + 0xa8);
      goto label_042fde74;
    }
  }
label_042fdf42:
  fVar16 = (float)il2cpp_runtime_helper_022b2c90();
  pCVar14 = *(Characters_AnimationHandler_o **)&(((Characters_BaseTitan_o *)emote)->fields)._cameraFPS;
  if (pCVar14 != (Characters_AnimationHandler_o *)0x0) {
    fVar17 = Characters_AnimationHandler__GetLength(pCVar14,name,(MethodInfo *)0x0);
    Characters_BaseTitan__StateActionWithTime
              ((Characters_BaseTitan_o *)emote,state,name,fVar17,fVar16,in_ECX & 0xff,in_R8);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adf14 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_AnnieCustomSkinLoader_AddComponent_AnnieCustomSkinLoader);
    g_data_057adf14 = '\x01';
  }
  lVar12 = 0;
  __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pCVar14,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__AddComponent_object_(__this_00,MethodInfo_AnnieCustomSkinLoader_AddComponent_AnnieCustomSkinLoader);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adf15 == '\0') {
    pCVar14 = (Characters_AnimationHandler_o *)&MethodInfo_String_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057adf15 = '\x01';
  }
  if ((lVar12 != 0) && (*(long *)(lVar12 + 0x40) != 0)) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adf16 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Single);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_float);
    g_data_057adf16 = '\x01';
  }
  pCVar7 = (Characters_BaseTitan_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_float);
  pCVar15 = pCVar7;
  System_Collections_Generic_Dictionary_object__float____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pCVar7,MethodInfo_Dictionary_2_System_String_System_Single);
  pUVar1 = pCVar14[8].fields.Animator;
  if ((pUVar1 != (UnityEngine_Animator_o *)0x0) && (pCVar7 != (Characters_BaseTitan_o *)0x0)) {
    System_Collections_Generic_Dictionary_object__float___Add
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pCVar7,
               (Il2CppObject *)(pUVar1->fields).m_CachedPtr,0.95,MethodInfo_Void_Add);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adf17 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057adf17 = '\x01';
  }
  method_00 = (pCVar15->klass->vtable)._166_GetAnimationTime.method;
  pCVar7 = pCVar15;
  fVar16 = (float)(*(pCVar15->klass->vtable)._166_GetAnimationTime.methodPtr)();
  lVar12 = *(long *)&(pCVar15->fields).EnableAI;
  if (lVar12 == 0) goto label_042fee19;
  pCVar7 = *(Characters_BaseTitan_o **)&(pCVar15->fields)._currentFallTotalTime;
  method_00 = *(MethodInfo **)(lVar12 + 0x10);
  bVar6 = System_String__op_Equality((System_String_o *)pCVar7,(System_String_o *)method_00,(MethodInfo *)0x0)
  ;
  if ((char)bVar6 == '\0') {
    lVar12 = *(long *)&(pCVar15->fields).EnableAI;
    if (lVar12 == 0) goto label_042fee19;
    pCVar7 = *(Characters_BaseTitan_o **)&(pCVar15->fields)._currentFallTotalTime;
    method_00 = *(MethodInfo **)(lVar12 + 0x18);
    bVar6 = System_String__op_Equality
                      ((System_String_o *)pCVar7,(System_String_o *)method_00,(MethodInfo *)0x0);
    if ((char)bVar6 == '\0') {
      lVar12 = *(long *)&(pCVar15->fields).EnableAI;
      if (lVar12 == 0) goto label_042fee19;
      pCVar7 = *(Characters_BaseTitan_o **)&(pCVar15->fields)._currentFallTotalTime;
      method_00 = *(MethodInfo **)(lVar12 + 0x88);
      bVar6 = System_String__op_Equality
                        ((System_String_o *)pCVar7,(System_String_o *)method_00,(MethodInfo *)0x0);
      if ((char)bVar6 == '\0') {
        lVar12 = *(long *)&(pCVar15->fields).EnableAI;
        if (lVar12 == 0) goto label_042fee19;
        pCVar7 = *(Characters_BaseTitan_o **)&(pCVar15->fields)._currentFallTotalTime;
        method_00 = *(MethodInfo **)(lVar12 + 0x20);
        bVar6 = System_String__op_Equality
                          ((System_String_o *)pCVar7,(System_String_o *)method_00,(MethodInfo *)0x0);
        if ((char)bVar6 == '\0') {
          lVar12 = *(long *)&(pCVar15->fields).EnableAI;
          if (lVar12 == 0) goto label_042fee19;
          pCVar7 = *(Characters_BaseTitan_o **)&(pCVar15->fields)._currentFallTotalTime;
          method_00 = *(MethodInfo **)(lVar12 + 0x90);
          bVar6 = System_String__op_Equality
                            ((System_String_o *)pCVar7,(System_String_o *)method_00,(MethodInfo *)0x0);
          if ((char)bVar6 != '\0') {
            fVar17 = (pCVar15->fields)._startPosition.fields.z;
            if ((0.24 < fVar16) && (fVar17 == 0.0)) {
              (pCVar15->fields)._startPosition.fields.z = 1.4013e-45;
              pSVar2 = (pCVar15->fields).AttackAnimations;
              if (pSVar2 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_042fee19;
              pCVar10 = (Characters_BaseHitbox_o *)pSVar2[1].fields._syncRoot;
              method_00 = (pCVar15->klass->vtable)._167_GetHitboxTime.method;
              fVar16 = (float)(*(pCVar15->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3db851ec);
              pCVar7 = pCVar15;
              if (pCVar10 == (Characters_BaseHitbox_o *)0x0) goto label_042fee19;
              goto label_042fe641;
            }
            if (fVar16 <= 0.33) {
              return;
            }
            if (fVar17 != 1.4013e-45) {
              return;
            }
            pSVar3 = (pCVar15->fields).OnPlayerPropertiesChanged;
            if ((pSVar3 != (System_Action_Hashtable__o *)0x0) &&
               (pCVar7 = (Characters_BaseTitan_o *)pSVar3[1].fields.invoke_impl,
               pCVar7 != (Characters_BaseTitan_o *)0x0)) {
              method_00 = (MethodInfo *)0x0;
              pCVar8 = (Characters_BaseTitan_o *)
                       UnityEngine_Component__get_transform
                                 ((UnityEngine_Component_o *)pCVar7,(MethodInfo *)0x0);
              if (pCVar8 != (Characters_BaseTitan_o *)0x0) {
                method_00 = (MethodInfo *)0x0;
                UVar18 = UnityEngine_Transform__get_position
                                   ((UnityEngine_Transform_o *)pCVar8,(MethodInfo *)0x0);
                pSVar3 = (pCVar15->fields).OnPlayerPropertiesChanged;
                pCVar7 = pCVar8;
                if (pSVar3 != (System_Action_Hashtable__o *)0x0) {
                  pUVar4 = (UnityEngine_Transform_o *)(pSVar3->fields).method_ptr;
                  pCVar7 = (Characters_BaseTitan_o *)0x0;
                  if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                    method_00 = (MethodInfo *)0x0;
                    UVar19 = UnityEngine_Transform__get_position(pUVar4,(MethodInfo *)0x0);
                    if ((TypeInfo_EffectPrefabs->fields)._stepPhase == 0) {
                      il2cpp_runtime_helper_02337ed0(UVar19.fields.x,UVar19.fields.z);
                    }
                    pSVar3 = (pCVar15->fields).OnPlayerPropertiesChanged;
                    pCVar7 = TypeInfo_EffectPrefabs;
                    if ((pSVar3 != (System_Action_Hashtable__o *)0x0) &&
                       (pUVar4 = (UnityEngine_Transform_o *)(pSVar3->fields).method_ptr,
                       pUVar4 != (UnityEngine_Transform_o *)0x0)) {
                      fStack_b0 = UVar18.fields.x;
                      pSVar13 = (System_String_o *)(((TypeInfo_EffectPrefabs->fields).MovementSync)->fields)._rigidbody;
                      rotation = UnityEngine_Transform__get_rotation(pUVar4,(MethodInfo *)0x0);
                      fVar16 = *(float *)((long)&(pCVar15->fields).TitanColliderToggler + 4);
                      fVar17 = (float)(*(pCVar15->klass->vtable)._117_get_SizeMultiplier.methodPtr)
                                                (pCVar15,(pCVar15->klass->vtable)._117_get_SizeMultiplier.
                                                         method);
                      UVar18.fields.x = fStack_b0;
                      UVar18.fields.y = UVar19.fields.y;
                      Effects_EffectSpawner__Spawn
                                (pSVar13,UVar18,rotation,fVar16 * fVar17,1,(System_Object_array *)0x0,
                                 (MethodInfo *)0x0);
                      (*(pCVar15->klass->vtable)._173_SpawnShatter.methodPtr)
                                (fStack_b0,UVar18.fields.z,pCVar15,
                                 (pCVar15->klass->vtable)._173_SpawnShatter.method);
                      (pCVar15->fields)._startPosition.fields.z = 2.8026e-45;
                      return;
                    }
                  }
                }
              }
            }
            goto label_042fee19;
          }
          lVar12 = *(long *)&(pCVar15->fields).EnableAI;
          if (lVar12 == 0) goto label_042fee19;
          pCVar7 = *(Characters_BaseTitan_o **)&(pCVar15->fields)._currentFallTotalTime;
          method_00 = *(MethodInfo **)(lVar12 + 0x98);
          bVar6 = System_String__op_Equality
                            ((System_String_o *)pCVar7,(System_String_o *)method_00,(MethodInfo *)0x0);
          if ((char)bVar6 != '\0') {
            if (fVar16 <= 0.26) {
              return;
            }
            if ((pCVar15->fields)._startPosition.fields.z != 0.0) {
              return;
            }
            (pCVar15->fields)._startPosition.fields.z = 1.4013e-45;
            pSVar2 = (pCVar15->fields).AttackAnimations;
            if (pSVar2 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_042fee19;
            pCVar8 = (Characters_BaseTitan_o *)pSVar2[1].fields._keys;
            method_00 = (pCVar15->klass->vtable)._167_GetHitboxTime.method;
            pCVar7 = pCVar15;
            fVar16 = (float)(*(pCVar15->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3da3d70a);
            if (pCVar8 == (Characters_BaseTitan_o *)0x0) goto label_042fee19;
            method_00 = (MethodInfo *)0x0;
            Characters_BaseHitbox__Activate((Characters_BaseHitbox_o *)pCVar8,0.0,fVar16,(MethodInfo *)0x0);
            pSVar2 = (pCVar15->fields).AttackAnimations;
            pCVar7 = pCVar8;
            if (pSVar2 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_042fee19;
            pSVar9 = (System_Collections_Generic_Dictionary_string__string__c *)pSVar2[1].fields._values;
            method_00 = (pCVar15->klass->vtable)._167_GetHitboxTime.method;
            pCVar7 = pCVar15;
            fVar16 = (float)(*(pCVar15->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3da3d70a);
            goto joined_r0x042fe9fe;
          }
          lVar12 = *(long *)&(pCVar15->fields).EnableAI;
          if (lVar12 == 0) goto label_042fee19;
          pCVar7 = *(Characters_BaseTitan_o **)&(pCVar15->fields)._currentFallTotalTime;
          method_00 = *(MethodInfo **)(lVar12 + 0xa0);
          bVar6 = System_String__op_Equality
                            ((System_String_o *)pCVar7,(System_String_o *)method_00,(MethodInfo *)0x0);
          if ((char)bVar6 != '\0') {
            if (fVar16 <= 0.27) {
              return;
            }
            if ((pCVar15->fields)._startPosition.fields.z != 0.0) {
              return;
            }
            (pCVar15->fields)._startPosition.fields.z = 1.4013e-45;
            pSVar2 = (pCVar15->fields).AttackAnimations;
            if (pSVar2 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_042fee19;
            pCVar10 = (Characters_BaseHitbox_o *)pSVar2[1].fields._comparer;
            method_00 = (pCVar15->klass->vtable)._167_GetHitboxTime.method;
            fVar16 = (float)(*(pCVar15->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3df5c28f);
            pCVar7 = pCVar15;
joined_r0x042fed9c:
            if (pCVar10 != (Characters_BaseHitbox_o *)0x0) {
label_042fe641:
              Characters_BaseHitbox__Activate(pCVar10,0.0,fVar16,(MethodInfo *)0x0);
              return;
            }
            goto label_042fee19;
          }
          lVar12 = *(long *)&(pCVar15->fields).EnableAI;
          if (lVar12 == 0) goto label_042fee19;
          pCVar7 = *(Characters_BaseTitan_o **)&(pCVar15->fields)._currentFallTotalTime;
          method_00 = *(MethodInfo **)(lVar12 + 0x28);
          bVar6 = System_String__op_Equality
                            ((System_String_o *)pCVar7,(System_String_o *)method_00,(MethodInfo *)0x0);
          if ((char)bVar6 == '\0') {
            lVar12 = *(long *)&(pCVar15->fields).EnableAI;
            if (lVar12 == 0) goto label_042fee19;
            pCVar7 = *(Characters_BaseTitan_o **)&(pCVar15->fields)._currentFallTotalTime;
            method_00 = *(MethodInfo **)(lVar12 + 0x30);
            bVar6 = System_String__op_Equality
                              ((System_String_o *)pCVar7,(System_String_o *)method_00,(MethodInfo *)0x0);
            if ((char)bVar6 != '\0') {
              if (fVar16 <= 0.45) {
                return;
              }
              goto label_042fe9b0;
            }
            lVar12 = *(long *)&(pCVar15->fields).EnableAI;
            if (lVar12 == 0) goto label_042fee19;
            pCVar7 = *(Characters_BaseTitan_o **)&(pCVar15->fields)._currentFallTotalTime;
            method_00 = *(MethodInfo **)(lVar12 + 0x38);
            bVar6 = System_String__op_Equality
                              ((System_String_o *)pCVar7,(System_String_o *)method_00,(MethodInfo *)0x0);
            if ((char)bVar6 == '\0') {
              lVar12 = *(long *)&(pCVar15->fields).EnableAI;
              if (lVar12 == 0) goto label_042fee19;
              pCVar7 = *(Characters_BaseTitan_o **)&(pCVar15->fields)._currentFallTotalTime;
              method_00 = *(MethodInfo **)(lVar12 + 0x40);
              bVar6 = System_String__op_Equality
                                ((System_String_o *)pCVar7,(System_String_o *)method_00,(MethodInfo *)0x0);
              if ((char)bVar6 != '\0') {
                if (fVar16 <= 0.42) {
                  return;
                }
                if ((pCVar15->fields)._startPosition.fields.z != 0.0) {
                  return;
                }
                (pCVar15->fields)._startPosition.fields.z = 1.4013e-45;
                pSVar2 = (pCVar15->fields).AttackAnimations;
                if (pSVar2 == (System_Collections_Generic_Dictionary_string__string__o *)0x0)
                goto label_042fee19;
                pSVar9 = (System_Collections_Generic_Dictionary_string__string__c *)pSVar2[1].fields._keys;
                goto label_042fe4af;
              }
              lVar12 = *(long *)&(pCVar15->fields).EnableAI;
              if (lVar12 == 0) goto label_042fee19;
              pCVar7 = *(Characters_BaseTitan_o **)&(pCVar15->fields)._currentFallTotalTime;
              method_00 = *(MethodInfo **)(lVar12 + 0x48);
              bVar6 = System_String__op_Equality
                                ((System_String_o *)pCVar7,(System_String_o *)method_00,(MethodInfo *)0x0);
              if ((char)bVar6 != '\0') {
                if (fVar16 <= 0.42) {
                  return;
                }
                goto label_042fe47f;
              }
              lVar12 = *(long *)&(pCVar15->fields).EnableAI;
              if (lVar12 == 0) goto label_042fee19;
              pCVar7 = *(Characters_BaseTitan_o **)&(pCVar15->fields)._currentFallTotalTime;
              method_00 = *(MethodInfo **)(lVar12 + 0x50);
              bVar6 = System_String__op_Equality
                                ((System_String_o *)pCVar7,(System_String_o *)method_00,(MethodInfo *)0x0);
              if ((char)bVar6 == '\0') {
                lVar12 = *(long *)&(pCVar15->fields).EnableAI;
                if (lVar12 == 0) goto label_042fee19;
                pCVar7 = *(Characters_BaseTitan_o **)&(pCVar15->fields)._currentFallTotalTime;
                method_00 = *(MethodInfo **)(lVar12 + 0x58);
                bVar6 = System_String__op_Equality
                                  ((System_String_o *)pCVar7,(System_String_o *)method_00,(MethodInfo *)0x0);
                if ((char)bVar6 == '\0') {
                  lVar12 = *(long *)&(pCVar15->fields).EnableAI;
                  if (lVar12 == 0) goto label_042fee19;
                  pCVar7 = *(Characters_BaseTitan_o **)&(pCVar15->fields)._currentFallTotalTime;
                  method_00 = *(MethodInfo **)(lVar12 + 0x60);
                  bVar6 = System_String__op_Equality
                                    ((System_String_o *)pCVar7,(System_String_o *)method_00,(MethodInfo *)0x0)
                  ;
                  if ((char)bVar6 == '\0') {
                    lVar12 = *(long *)&(pCVar15->fields).EnableAI;
                    if (lVar12 == 0) goto label_042fee19;
                    pCVar7 = *(Characters_BaseTitan_o **)&(pCVar15->fields)._currentFallTotalTime;
                    method_00 = *(MethodInfo **)(lVar12 + 0x68);
                    bVar6 = System_String__op_Equality
                                      ((System_String_o *)pCVar7,(System_String_o *)method_00,
                                       (MethodInfo *)0x0);
                    if ((char)bVar6 == '\0') {
                      lVar12 = *(long *)&(pCVar15->fields).EnableAI;
                      if (lVar12 == 0) goto label_042fee19;
                      pCVar7 = *(Characters_BaseTitan_o **)&(pCVar15->fields)._currentFallTotalTime;
                      method_00 = *(MethodInfo **)(lVar12 + 0x70);
                      bVar6 = System_String__op_Equality
                                        ((System_String_o *)pCVar7,(System_String_o *)method_00,
                                         (MethodInfo *)0x0);
                      if ((char)bVar6 != '\0') {
                        if (fVar16 <= 0.27) {
                          return;
                        }
                        if ((pCVar15->fields)._startPosition.fields.z != 0.0) {
                          return;
                        }
                        (pCVar15->fields)._startPosition.fields.z = 1.4013e-45;
                        pSVar2 = (pCVar15->fields).AttackAnimations;
                        if (pSVar2 == (System_Collections_Generic_Dictionary_string__string__o *)0x0)
                        goto label_042fee19;
                        pCVar10 = (Characters_BaseHitbox_o *)pSVar2[1].fields._keys;
                        method_00 = (pCVar15->klass->vtable)._167_GetHitboxTime.method;
                        fVar16 = (float)(*(pCVar15->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3dcccccd);
                        pCVar7 = pCVar15;
                        goto joined_r0x042fed9c;
                      }
                      lVar12 = *(long *)&(pCVar15->fields).EnableAI;
                      if (lVar12 == 0) goto label_042fee19;
                      pCVar7 = *(Characters_BaseTitan_o **)&(pCVar15->fields)._currentFallTotalTime;
                      method_00 = *(MethodInfo **)(lVar12 + 0x78);
                      bVar6 = System_String__op_Equality
                                        ((System_String_o *)pCVar7,(System_String_o *)method_00,
                                         (MethodInfo *)0x0);
                      if ((char)bVar6 == '\0') {
                        lVar12 = *(long *)&(pCVar15->fields).EnableAI;
                        if (lVar12 == 0) goto label_042fee19;
                        pCVar7 = *(Characters_BaseTitan_o **)&(pCVar15->fields)._currentFallTotalTime;
                        method_00 = *(MethodInfo **)(lVar12 + 0x80);
                        bVar6 = System_String__op_Equality
                                          ((System_String_o *)pCVar7,(System_String_o *)method_00,
                                           (MethodInfo *)0x0);
                        if ((char)bVar6 == '\0') {
                          return;
                        }
                        if (fVar16 <= 0.28) {
                          return;
                        }
                        goto label_042fec53;
                      }
                      if (fVar16 <= 0.28) {
                        return;
                      }
                    }
                    else if (fVar16 <= 0.31) {
                      return;
                    }
                    if ((pCVar15->fields)._startPosition.fields.z != 0.0) {
                      return;
                    }
                    (pCVar15->fields)._startPosition.fields.z = 1.4013e-45;
                    pSVar2 = (pCVar15->fields).AttackAnimations;
                    if (pSVar2 == (System_Collections_Generic_Dictionary_string__string__o *)0x0)
                    goto label_042fee19;
                    pCVar10 = (Characters_BaseHitbox_o *)pSVar2[1].fields._keys;
                  }
                  else {
                    if (fVar16 <= 0.31) {
                      return;
                    }
label_042fec53:
                    if ((pCVar15->fields)._startPosition.fields.z != 0.0) {
                      return;
                    }
                    (pCVar15->fields)._startPosition.fields.z = 1.4013e-45;
                    pSVar2 = (pCVar15->fields).AttackAnimations;
                    if (pSVar2 == (System_Collections_Generic_Dictionary_string__string__o *)0x0)
                    goto label_042fee19;
                    pCVar10 = (Characters_BaseHitbox_o *)pSVar2[1].fields._values;
                  }
                  method_00 = (pCVar15->klass->vtable)._167_GetHitboxTime.method;
                  fVar16 = (float)(*(pCVar15->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3d4ccccd);
                  pCVar7 = pCVar15;
                  goto joined_r0x042fed9c;
                }
                if (fVar16 <= 0.31) {
                  return;
                }
                if ((pCVar15->fields)._startPosition.fields.z != 0.0) {
                  return;
                }
                (pCVar15->fields)._startPosition.fields.z = 1.4013e-45;
                pSVar2 = (pCVar15->fields).AttackAnimations;
                if (pSVar2 == (System_Collections_Generic_Dictionary_string__string__o *)0x0)
                goto label_042fee19;
                pCVar10 = (Characters_BaseHitbox_o *)pSVar2[1].fields._keys;
              }
              else {
                if (fVar16 <= 0.31) {
                  return;
                }
                if ((pCVar15->fields)._startPosition.fields.z != 0.0) {
                  return;
                }
                (pCVar15->fields)._startPosition.fields.z = 1.4013e-45;
                pSVar2 = (pCVar15->fields).AttackAnimations;
                if (pSVar2 == (System_Collections_Generic_Dictionary_string__string__o *)0x0)
                goto label_042fee19;
                pCVar10 = (Characters_BaseHitbox_o *)pSVar2[1].fields._values;
              }
              method_00 = (pCVar15->klass->vtable)._167_GetHitboxTime.method;
              fVar16 = (float)(*(pCVar15->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3d23d70a);
              pCVar7 = pCVar15;
              goto joined_r0x042fed9c;
            }
            if (fVar16 <= 0.45) {
              return;
            }
            if ((pCVar15->fields)._startPosition.fields.z != 0.0) {
              return;
            }
            (pCVar15->fields)._startPosition.fields.z = 1.4013e-45;
            pSVar2 = (pCVar15->fields).AttackAnimations;
            if (pSVar2 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_042fee19;
            pSVar9 = (System_Collections_Generic_Dictionary_string__string__c *)pSVar2[1].fields._keys;
          }
          else {
            if (fVar16 <= 0.41) {
              return;
            }
label_042fe9b0:
            if ((pCVar15->fields)._startPosition.fields.z != 0.0) {
              return;
            }
            (pCVar15->fields)._startPosition.fields.z = 1.4013e-45;
            pSVar2 = (pCVar15->fields).AttackAnimations;
            if (pSVar2 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_042fee19;
            pSVar9 = (System_Collections_Generic_Dictionary_string__string__c *)pSVar2[1].fields._values;
          }
          method_00 = (pCVar15->klass->vtable)._167_GetHitboxTime.method;
          pCVar7 = pCVar15;
          fVar16 = (float)(*(pCVar15->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3e3851ec);
        }
        else {
          if (fVar16 <= 0.47) {
            return;
          }
label_042fe47f:
          if ((pCVar15->fields)._startPosition.fields.z != 0.0) {
            return;
          }
          (pCVar15->fields)._startPosition.fields.z = 1.4013e-45;
          pSVar2 = (pCVar15->fields).AttackAnimations;
          if (pSVar2 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_042fee19;
          pSVar9 = (System_Collections_Generic_Dictionary_string__string__c *)pSVar2[1].fields._values;
label_042fe4af:
          method_00 = (pCVar15->klass->vtable)._167_GetHitboxTime.method;
          pCVar7 = pCVar15;
          fVar16 = (float)(*(pCVar15->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3db851ec);
        }
      }
      else {
        if (fVar16 <= 0.395) {
          return;
        }
        if ((pCVar15->fields)._startPosition.fields.z != 0.0) {
          return;
        }
        (pCVar15->fields)._startPosition.fields.z = 1.4013e-45;
        pSVar2 = (pCVar15->fields).AttackAnimations;
        if (pSVar2 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_042fee19;
        pSVar9 = pSVar2[2].klass;
        method_00 = (pCVar15->klass->vtable)._167_GetHitboxTime.method;
        pCVar7 = pCVar15;
        fVar16 = (float)(*(pCVar15->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3df5c28f);
      }
    }
    else {
      fVar17 = (pCVar15->fields)._startPosition.fields.z;
      if ((fVar16 <= 0.222) || (fVar17 != 0.0)) {
        if ((fVar16 <= 0.386) || (fVar17 != 1.4013e-45)) {
          if (fVar16 <= 0.612) {
            return;
          }
          if (fVar17 != 2.8026e-45) {
            return;
          }
          (pCVar15->fields)._startPosition.fields.z = 4.2039e-45;
          pSVar2 = (pCVar15->fields).AttackAnimations;
          if (pSVar2 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_042fee19;
          pSVar9 = pSVar2[2].klass;
          method_00 = (pCVar15->klass->vtable)._167_GetHitboxTime.method;
          pCVar7 = pCVar15;
          fVar16 = (float)(*(pCVar15->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3d23d70a);
          goto joined_r0x042fe570;
        }
        (pCVar15->fields)._startPosition.fields.z = 2.8026e-45;
        pSVar2 = (pCVar15->fields).AttackAnimations;
        if (pSVar2 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_042fee19;
        pCVar10 = (Characters_BaseHitbox_o *)pSVar2[1].fields._values;
        method_00 = (pCVar15->klass->vtable)._167_GetHitboxTime.method;
        pCVar7 = pCVar15;
        fVar16 = (float)(*(pCVar15->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3d8f5c29);
        goto joined_r0x042fe402;
      }
      (pCVar15->fields)._startPosition.fields.z = 1.4013e-45;
      pSVar2 = (pCVar15->fields).AttackAnimations;
      if (pSVar2 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_042fee19;
      pSVar9 = (System_Collections_Generic_Dictionary_string__string__c *)pSVar2[1].fields._values;
      method_00 = (pCVar15->klass->vtable)._167_GetHitboxTime.method;
      pCVar7 = pCVar15;
      fVar16 = (float)(*(pCVar15->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3d23d70a);
    }
  }
  else {
    fVar17 = (pCVar15->fields)._startPosition.fields.z;
    if ((fVar16 <= 0.155) || (fVar17 != 0.0)) {
      if ((fVar16 <= 0.32) || (fVar17 != 1.4013e-45)) {
        if (fVar16 <= 0.59) {
          return;
        }
        if (fVar17 != 2.8026e-45) {
          return;
        }
        (pCVar15->fields)._startPosition.fields.z = 4.2039e-45;
        pSVar2 = (pCVar15->fields).AttackAnimations;
        if (pSVar2 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_042fee19;
        pSVar9 = pSVar2[2].klass;
        method_00 = (pCVar15->klass->vtable)._167_GetHitboxTime.method;
        pCVar7 = pCVar15;
        fVar16 = (float)(*(pCVar15->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3d4ccccd);
joined_r0x042fe570:
        if (pSVar9 != (System_Collections_Generic_Dictionary_string__string__c *)0x0) {
          Characters_BaseHitbox__Activate((Characters_BaseHitbox_o *)pSVar9,0.0,fVar16,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_TitanSounds + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar13 = *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x28);
          goto label_042fe509;
        }
        goto label_042fee19;
      }
      (pCVar15->fields)._startPosition.fields.z = 2.8026e-45;
      pSVar2 = (pCVar15->fields).AttackAnimations;
      if (pSVar2 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_042fee19;
      pCVar10 = (Characters_BaseHitbox_o *)pSVar2[1].fields._syncRoot;
      method_00 = (pCVar15->klass->vtable)._167_GetHitboxTime.method;
      pCVar7 = pCVar15;
      fVar16 = (float)(*(pCVar15->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3d75c28f);
joined_r0x042fe402:
      if (pCVar10 != (Characters_BaseHitbox_o *)0x0) {
        Characters_BaseHitbox__Activate(pCVar10,0.0,fVar16,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_TitanSounds + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar13 = *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x20);
        goto label_042fe509;
      }
      goto label_042fee19;
    }
    (pCVar15->fields)._startPosition.fields.z = 1.4013e-45;
    pSVar2 = (pCVar15->fields).AttackAnimations;
    if (pSVar2 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_042fee19;
    pSVar9 = pSVar2[2].klass;
    method_00 = (pCVar15->klass->vtable)._167_GetHitboxTime.method;
    pCVar7 = pCVar15;
    fVar16 = (float)(*(pCVar15->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3d8f5c29);
  }
joined_r0x042fe9fe:
  if (pSVar9 != (System_Collections_Generic_Dictionary_string__string__c *)0x0) {
    Characters_BaseHitbox__Activate((Characters_BaseHitbox_o *)pSVar9,0.0,fVar16,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_TitanSounds + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar13 = *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x18);
label_042fe509:
    Characters_BaseCharacter__PlaySound((Characters_BaseCharacter_o *)pCVar15,pSVar13,(MethodInfo *)0x0);
    return;
  }
label_042fee19:
  fVar16 = (float)il2cpp_runtime_helper_022b2c90();
  pCVar15 = pCVar7;
  if (g_data_057adf18 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ShifterSounds);
    pCVar15 = (Characters_BaseTitan_o *)&MethodInfo_Boolean_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057adf18 = '\x01';
  }
  lVar12 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
  if ((lVar12 != 0) && (lVar12 = *(long *)(lVar12 + 0x40), lVar12 != 0)) {
    if ((*(char *)(lVar12 + 0x11) != '\0') &&
       (bVar6 = Utility_RandomGen__Roll(fVar16,(MethodInfo *)0x0), (char)bVar6 != '\0')) {
      if (*(int *)(TypeInfo_ShifterSounds + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      Characters_BaseCharacter__PlaySound
                ((Characters_BaseCharacter_o *)pCVar7,
                 *(System_String_o **)(*(long *)(TypeInfo_ShifterSounds + 0xb8) + 0x18),(MethodInfo *)0x0);
      return;
    }
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar7 = pCVar15;
  if (g_data_057adf19 == '\0') {
    pCVar7 = (Characters_BaseTitan_o *)&"AttackComboBlind";
    il2cpp_runtime_helper_023445d0();
    g_data_057adf19 = '\x01';
  }
  lVar12 = *(long *)&(pCVar15->fields).EnableAI;
  if (lVar12 != 0) {
    bVar6 = System_String__op_Inequality
                      (*(System_String_o **)&(pCVar15->fields)._currentFallTotalTime,
                       *(System_String_o **)(lVar12 + 0x18),(MethodInfo *)0x0);
    if (((char)bVar6 != '\0') && ((pCVar15->fields)._jumpDirection.fields.x <= 0.0)) {
      (*(pCVar15->klass->vtable)._168_DamagedGrunt.methodPtr)
                (0x3f800000,pCVar15,(pCVar15->klass->vtable)._168_DamagedGrunt.method);
      (*(pCVar15->klass->vtable)._128_Attack.methodPtr)
                (pCVar15,"AttackComboBlind",(pCVar15->klass->vtable)._128_Attack.method);
      fVar16 = (float)(*(pCVar15->klass->vtable)._118_get_DisableCooldown.methodPtr)
                                (pCVar15,(pCVar15->klass->vtable)._118_get_DisableCooldown.method);
      (pCVar15->fields)._jumpDirection.fields.x = fVar16 + 2.0;
    }
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  *(undefined1 *)((long)&(pCVar7->fields)._previousCoreLocalPosition.fields.y + 1) = 1;
  (pCVar7->fields)._furthestCoreLocalPosition.fields.z = 2.0;
  Characters_BaseTitan___ctor(pCVar7,method_00);
  return;
}


// Characters.AnnieShifter$$CreateCustomSkinLoader
// il2cpp: CustomSkins_BaseCustomSkinLoader_o* Characters_AnnieShifter__CreateCustomSkinLoader (Characters_AnnieShifter_o* __this, const MethodInfo* method);
// 0x42fdfb0

CustomSkins_BaseCustomSkinLoader_o *
Characters_AnnieShifter__CreateCustomSkinLoader(Characters_AnnieShifter_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__string__o *pSVar1;
  System_Action_Hashtable__o *pSVar2;
  UnityEngine_Transform_o *pUVar3;
  bool_conflict bVar4;
  UnityEngine_GameObject_o *__this_00;
  CustomSkins_BaseCustomSkinLoader_o *pCVar5;
  Characters_BaseTitan_o *pCVar6;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  CustomSkins_BaseCustomSkinLoader_o *extraout_RAX;
  CustomSkins_BaseCustomSkinLoader_o *extraout_RAX_00;
  undefined4 extraout_var_01;
  Characters_BaseTitan_o *pCVar7;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  undefined4 extraout_var_04;
  undefined4 extraout_var_05;
  undefined4 extraout_var_06;
  undefined4 extraout_var_07;
  undefined4 extraout_var_08;
  undefined4 extraout_var_09;
  undefined4 extraout_var_10;
  undefined4 extraout_var_11;
  undefined4 extraout_var_12;
  undefined4 extraout_var_13;
  undefined4 extraout_var_14;
  undefined4 extraout_var_15;
  CustomSkins_BaseCustomSkinLoader_o *extraout_RAX_01;
  undefined4 extraout_var_16;
  CustomSkins_BaseCustomSkinLoader_o *extraout_RAX_02;
  System_Collections_Generic_Dictionary_string__string__c *pSVar8;
  Characters_BaseHitbox_o *pCVar9;
  long lVar10;
  System_String_o *pSVar11;
  MethodInfo *method_00;
  Characters_BaseTitan_o *pCVar12;
  float fVar13;
  float fVar14;
  float extraout_XMM0_Da;
  UnityEngine_Quaternion_o rotation;
  UnityEngine_Vector3_o UVar15;
  UnityEngine_Vector3_o UVar16;
  undefined8 local_80;
  float local_60;
  
  if (g_data_057adf14 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_AnnieCustomSkinLoader_AddComponent_AnnieCustomSkinLoader);
    g_data_057adf14 = '\x01';
  }
  lVar10 = 0;
  __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    pCVar5 = (CustomSkins_BaseCustomSkinLoader_o *)
             UnityEngine_GameObject__AddComponent_object_(__this_00,MethodInfo_AnnieCustomSkinLoader_AddComponent_AnnieCustomSkinLoader);
    return pCVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adf15 == '\0') {
    __this = (Characters_AnnieShifter_o *)&MethodInfo_String_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057adf15 = '\x01';
  }
  if ((lVar10 != 0) && (*(long *)(lVar10 + 0x40) != 0)) {
    return *(CustomSkins_BaseCustomSkinLoader_o **)(*(long *)(lVar10 + 0x40) + 0x18);
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adf16 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Single);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_float);
    g_data_057adf16 = '\x01';
  }
  pCVar6 = (Characters_BaseTitan_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_float);
  pCVar12 = pCVar6;
  System_Collections_Generic_Dictionary_object__float____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pCVar6,MethodInfo_Dictionary_2_System_String_System_Single);
  lVar10 = *(long *)&(__this->fields).EnableAI;
  if ((lVar10 != 0) && (pCVar6 != (Characters_BaseTitan_o *)0x0)) {
    System_Collections_Generic_Dictionary_object__float___Add
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pCVar6,
               *(Il2CppObject **)(lVar10 + 0x10),0.95,MethodInfo_Void_Add);
    return (CustomSkins_BaseCustomSkinLoader_o *)pCVar6;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adf17 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057adf17 = '\x01';
  }
  method_00 = (pCVar12->klass->vtable)._166_GetAnimationTime.method;
  pCVar6 = pCVar12;
  fVar13 = (float)(*(pCVar12->klass->vtable)._166_GetAnimationTime.methodPtr)();
  lVar10 = *(long *)&(pCVar12->fields).EnableAI;
  if (lVar10 == 0) goto label_042fee19;
  pCVar6 = *(Characters_BaseTitan_o **)&(pCVar12->fields)._currentFallTotalTime;
  method_00 = *(MethodInfo **)(lVar10 + 0x10);
  bVar4 = System_String__op_Equality((System_String_o *)pCVar6,(System_String_o *)method_00,(MethodInfo *)0x0)
  ;
  if ((char)bVar4 == '\0') {
    lVar10 = *(long *)&(pCVar12->fields).EnableAI;
    if (lVar10 == 0) goto label_042fee19;
    pCVar6 = *(Characters_BaseTitan_o **)&(pCVar12->fields)._currentFallTotalTime;
    method_00 = *(MethodInfo **)(lVar10 + 0x18);
    bVar4 = System_String__op_Equality
                      ((System_String_o *)pCVar6,(System_String_o *)method_00,(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      lVar10 = *(long *)&(pCVar12->fields).EnableAI;
      if (lVar10 == 0) goto label_042fee19;
      pCVar6 = *(Characters_BaseTitan_o **)&(pCVar12->fields)._currentFallTotalTime;
      method_00 = *(MethodInfo **)(lVar10 + 0x88);
      bVar4 = System_String__op_Equality
                        ((System_String_o *)pCVar6,(System_String_o *)method_00,(MethodInfo *)0x0);
      if ((char)bVar4 == '\0') {
        lVar10 = *(long *)&(pCVar12->fields).EnableAI;
        if (lVar10 == 0) goto label_042fee19;
        pCVar6 = *(Characters_BaseTitan_o **)&(pCVar12->fields)._currentFallTotalTime;
        method_00 = *(MethodInfo **)(lVar10 + 0x20);
        bVar4 = System_String__op_Equality
                          ((System_String_o *)pCVar6,(System_String_o *)method_00,(MethodInfo *)0x0);
        pCVar5 = (CustomSkins_BaseCustomSkinLoader_o *)CONCAT44(extraout_var_00,bVar4);
        if ((char)bVar4 == '\0') {
          lVar10 = *(long *)&(pCVar12->fields).EnableAI;
          if (lVar10 == 0) goto label_042fee19;
          pCVar6 = *(Characters_BaseTitan_o **)&(pCVar12->fields)._currentFallTotalTime;
          method_00 = *(MethodInfo **)(lVar10 + 0x90);
          bVar4 = System_String__op_Equality
                            ((System_String_o *)pCVar6,(System_String_o *)method_00,(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            fVar14 = (pCVar12->fields)._startPosition.fields.z;
            if ((0.24 < fVar13) && (fVar14 == 0.0)) {
              (pCVar12->fields)._startPosition.fields.z = 1.4013e-45;
              pSVar1 = (pCVar12->fields).AttackAnimations;
              if (pSVar1 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_042fee19;
              pCVar9 = (Characters_BaseHitbox_o *)pSVar1[1].fields._syncRoot;
              method_00 = (pCVar12->klass->vtable)._167_GetHitboxTime.method;
              fVar13 = (float)(*(pCVar12->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3db851ec);
              pCVar6 = pCVar12;
              if (pCVar9 == (Characters_BaseHitbox_o *)0x0) goto label_042fee19;
              goto label_042fe641;
            }
            if (fVar13 <= 0.33) {
              return (CustomSkins_BaseCustomSkinLoader_o *)(ulong)(uint)fVar14;
            }
            if (fVar14 != 1.4013e-45) {
              return (CustomSkins_BaseCustomSkinLoader_o *)(ulong)(uint)fVar14;
            }
            pSVar2 = (pCVar12->fields).OnPlayerPropertiesChanged;
            if ((pSVar2 != (System_Action_Hashtable__o *)0x0) &&
               (pCVar6 = (Characters_BaseTitan_o *)pSVar2[1].fields.invoke_impl,
               pCVar6 != (Characters_BaseTitan_o *)0x0)) {
              method_00 = (MethodInfo *)0x0;
              pCVar7 = (Characters_BaseTitan_o *)
                       UnityEngine_Component__get_transform
                                 ((UnityEngine_Component_o *)pCVar6,(MethodInfo *)0x0);
              if (pCVar7 != (Characters_BaseTitan_o *)0x0) {
                method_00 = (MethodInfo *)0x0;
                UVar15 = UnityEngine_Transform__get_position
                                   ((UnityEngine_Transform_o *)pCVar7,(MethodInfo *)0x0);
                pSVar2 = (pCVar12->fields).OnPlayerPropertiesChanged;
                pCVar6 = pCVar7;
                if (pSVar2 != (System_Action_Hashtable__o *)0x0) {
                  pUVar3 = (UnityEngine_Transform_o *)(pSVar2->fields).method_ptr;
                  pCVar6 = (Characters_BaseTitan_o *)0x0;
                  if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
                    method_00 = (MethodInfo *)0x0;
                    UVar16 = UnityEngine_Transform__get_position(pUVar3,(MethodInfo *)0x0);
                    if ((TypeInfo_EffectPrefabs->fields)._stepPhase == 0) {
                      il2cpp_runtime_helper_02337ed0(UVar16.fields.x,UVar16.fields.z);
                    }
                    pSVar2 = (pCVar12->fields).OnPlayerPropertiesChanged;
                    pCVar6 = TypeInfo_EffectPrefabs;
                    if ((pSVar2 != (System_Action_Hashtable__o *)0x0) &&
                       (pUVar3 = (UnityEngine_Transform_o *)(pSVar2->fields).method_ptr,
                       pUVar3 != (UnityEngine_Transform_o *)0x0)) {
                      local_60 = UVar15.fields.x;
                      pSVar11 = (System_String_o *)(((TypeInfo_EffectPrefabs->fields).MovementSync)->fields)._rigidbody;
                      rotation = UnityEngine_Transform__get_rotation(pUVar3,(MethodInfo *)0x0);
                      fVar13 = *(float *)((long)&(pCVar12->fields).TitanColliderToggler + 4);
                      fVar14 = (float)(*(pCVar12->klass->vtable)._117_get_SizeMultiplier.methodPtr)
                                                (pCVar12,(pCVar12->klass->vtable)._117_get_SizeMultiplier.
                                                         method);
                      UVar15.fields.x = local_60;
                      UVar15.fields.y = UVar16.fields.y;
                      Effects_EffectSpawner__Spawn
                                (pSVar11,UVar15,rotation,fVar13 * fVar14,1,(System_Object_array *)0x0,
                                 (MethodInfo *)0x0);
                      pCVar5 = (CustomSkins_BaseCustomSkinLoader_o *)
                               (*(pCVar12->klass->vtable)._173_SpawnShatter.methodPtr)
                                         (local_60,UVar15.fields.z,pCVar12,
                                          (pCVar12->klass->vtable)._173_SpawnShatter.method);
                      (pCVar12->fields)._startPosition.fields.z = 2.8026e-45;
                      return pCVar5;
                    }
                  }
                }
              }
            }
            goto label_042fee19;
          }
          lVar10 = *(long *)&(pCVar12->fields).EnableAI;
          if (lVar10 == 0) goto label_042fee19;
          pCVar6 = *(Characters_BaseTitan_o **)&(pCVar12->fields)._currentFallTotalTime;
          method_00 = *(MethodInfo **)(lVar10 + 0x98);
          bVar4 = System_String__op_Equality
                            ((System_String_o *)pCVar6,(System_String_o *)method_00,(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (fVar13 <= 0.26) {
              return (CustomSkins_BaseCustomSkinLoader_o *)CONCAT44(extraout_var_01,bVar4);
            }
            if ((pCVar12->fields)._startPosition.fields.z != 0.0) {
              return (CustomSkins_BaseCustomSkinLoader_o *)CONCAT44(extraout_var_01,bVar4);
            }
            (pCVar12->fields)._startPosition.fields.z = 1.4013e-45;
            pSVar1 = (pCVar12->fields).AttackAnimations;
            if (pSVar1 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_042fee19;
            pCVar7 = (Characters_BaseTitan_o *)pSVar1[1].fields._keys;
            method_00 = (pCVar12->klass->vtable)._167_GetHitboxTime.method;
            pCVar6 = pCVar12;
            fVar13 = (float)(*(pCVar12->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3da3d70a);
            if (pCVar7 == (Characters_BaseTitan_o *)0x0) goto label_042fee19;
            method_00 = (MethodInfo *)0x0;
            Characters_BaseHitbox__Activate((Characters_BaseHitbox_o *)pCVar7,0.0,fVar13,(MethodInfo *)0x0);
            pSVar1 = (pCVar12->fields).AttackAnimations;
            pCVar6 = pCVar7;
            if (pSVar1 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_042fee19;
            pSVar8 = (System_Collections_Generic_Dictionary_string__string__c *)pSVar1[1].fields._values;
            method_00 = (pCVar12->klass->vtable)._167_GetHitboxTime.method;
            pCVar6 = pCVar12;
            fVar13 = (float)(*(pCVar12->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3da3d70a);
            goto joined_r0x042fe9fe;
          }
          lVar10 = *(long *)&(pCVar12->fields).EnableAI;
          if (lVar10 == 0) goto label_042fee19;
          pCVar6 = *(Characters_BaseTitan_o **)&(pCVar12->fields)._currentFallTotalTime;
          method_00 = *(MethodInfo **)(lVar10 + 0xa0);
          bVar4 = System_String__op_Equality
                            ((System_String_o *)pCVar6,(System_String_o *)method_00,(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (fVar13 <= 0.27) {
              return (CustomSkins_BaseCustomSkinLoader_o *)CONCAT44(extraout_var_02,bVar4);
            }
            if ((pCVar12->fields)._startPosition.fields.z != 0.0) {
              return (CustomSkins_BaseCustomSkinLoader_o *)CONCAT44(extraout_var_02,bVar4);
            }
            (pCVar12->fields)._startPosition.fields.z = 1.4013e-45;
            pSVar1 = (pCVar12->fields).AttackAnimations;
            if (pSVar1 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_042fee19;
            pCVar9 = (Characters_BaseHitbox_o *)pSVar1[1].fields._comparer;
            method_00 = (pCVar12->klass->vtable)._167_GetHitboxTime.method;
            fVar13 = (float)(*(pCVar12->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3df5c28f);
            pCVar6 = pCVar12;
joined_r0x042fed9c:
            if (pCVar9 != (Characters_BaseHitbox_o *)0x0) {
label_042fe641:
              Characters_BaseHitbox__Activate(pCVar9,0.0,fVar13,(MethodInfo *)0x0);
              return extraout_RAX_00;
            }
            goto label_042fee19;
          }
          lVar10 = *(long *)&(pCVar12->fields).EnableAI;
          if (lVar10 == 0) goto label_042fee19;
          pCVar6 = *(Characters_BaseTitan_o **)&(pCVar12->fields)._currentFallTotalTime;
          method_00 = *(MethodInfo **)(lVar10 + 0x28);
          bVar4 = System_String__op_Equality
                            ((System_String_o *)pCVar6,(System_String_o *)method_00,(MethodInfo *)0x0);
          pCVar5 = (CustomSkins_BaseCustomSkinLoader_o *)CONCAT44(extraout_var_03,bVar4);
          if ((char)bVar4 == '\0') {
            lVar10 = *(long *)&(pCVar12->fields).EnableAI;
            if (lVar10 == 0) goto label_042fee19;
            pCVar6 = *(Characters_BaseTitan_o **)&(pCVar12->fields)._currentFallTotalTime;
            method_00 = *(MethodInfo **)(lVar10 + 0x30);
            bVar4 = System_String__op_Equality
                              ((System_String_o *)pCVar6,(System_String_o *)method_00,(MethodInfo *)0x0);
            pCVar5 = (CustomSkins_BaseCustomSkinLoader_o *)CONCAT44(extraout_var_04,bVar4);
            if ((char)bVar4 != '\0') {
              if (fVar13 <= 0.45) {
                return pCVar5;
              }
              goto label_042fe9b0;
            }
            lVar10 = *(long *)&(pCVar12->fields).EnableAI;
            if (lVar10 == 0) goto label_042fee19;
            pCVar6 = *(Characters_BaseTitan_o **)&(pCVar12->fields)._currentFallTotalTime;
            method_00 = *(MethodInfo **)(lVar10 + 0x38);
            bVar4 = System_String__op_Equality
                              ((System_String_o *)pCVar6,(System_String_o *)method_00,(MethodInfo *)0x0);
            if ((char)bVar4 == '\0') {
              lVar10 = *(long *)&(pCVar12->fields).EnableAI;
              if (lVar10 == 0) goto label_042fee19;
              pCVar6 = *(Characters_BaseTitan_o **)&(pCVar12->fields)._currentFallTotalTime;
              method_00 = *(MethodInfo **)(lVar10 + 0x40);
              bVar4 = System_String__op_Equality
                                ((System_String_o *)pCVar6,(System_String_o *)method_00,(MethodInfo *)0x0);
              if ((char)bVar4 != '\0') {
                if (fVar13 <= 0.42) {
                  return (CustomSkins_BaseCustomSkinLoader_o *)CONCAT44(extraout_var_06,bVar4);
                }
                if ((pCVar12->fields)._startPosition.fields.z != 0.0) {
                  return (CustomSkins_BaseCustomSkinLoader_o *)CONCAT44(extraout_var_06,bVar4);
                }
                (pCVar12->fields)._startPosition.fields.z = 1.4013e-45;
                pSVar1 = (pCVar12->fields).AttackAnimations;
                if (pSVar1 == (System_Collections_Generic_Dictionary_string__string__o *)0x0)
                goto label_042fee19;
                pSVar8 = (System_Collections_Generic_Dictionary_string__string__c *)pSVar1[1].fields._keys;
                goto label_042fe4af;
              }
              lVar10 = *(long *)&(pCVar12->fields).EnableAI;
              if (lVar10 == 0) goto label_042fee19;
              pCVar6 = *(Characters_BaseTitan_o **)&(pCVar12->fields)._currentFallTotalTime;
              method_00 = *(MethodInfo **)(lVar10 + 0x48);
              bVar4 = System_String__op_Equality
                                ((System_String_o *)pCVar6,(System_String_o *)method_00,(MethodInfo *)0x0);
              pCVar5 = (CustomSkins_BaseCustomSkinLoader_o *)CONCAT44(extraout_var_07,bVar4);
              if ((char)bVar4 != '\0') {
                if (fVar13 <= 0.42) {
                  return pCVar5;
                }
                goto label_042fe47f;
              }
              lVar10 = *(long *)&(pCVar12->fields).EnableAI;
              if (lVar10 == 0) goto label_042fee19;
              pCVar6 = *(Characters_BaseTitan_o **)&(pCVar12->fields)._currentFallTotalTime;
              method_00 = *(MethodInfo **)(lVar10 + 0x50);
              bVar4 = System_String__op_Equality
                                ((System_String_o *)pCVar6,(System_String_o *)method_00,(MethodInfo *)0x0);
              if ((char)bVar4 == '\0') {
                lVar10 = *(long *)&(pCVar12->fields).EnableAI;
                if (lVar10 == 0) goto label_042fee19;
                pCVar6 = *(Characters_BaseTitan_o **)&(pCVar12->fields)._currentFallTotalTime;
                method_00 = *(MethodInfo **)(lVar10 + 0x58);
                bVar4 = System_String__op_Equality
                                  ((System_String_o *)pCVar6,(System_String_o *)method_00,(MethodInfo *)0x0);
                if ((char)bVar4 == '\0') {
                  lVar10 = *(long *)&(pCVar12->fields).EnableAI;
                  if (lVar10 == 0) goto label_042fee19;
                  pCVar6 = *(Characters_BaseTitan_o **)&(pCVar12->fields)._currentFallTotalTime;
                  method_00 = *(MethodInfo **)(lVar10 + 0x60);
                  bVar4 = System_String__op_Equality
                                    ((System_String_o *)pCVar6,(System_String_o *)method_00,(MethodInfo *)0x0)
                  ;
                  pCVar5 = (CustomSkins_BaseCustomSkinLoader_o *)CONCAT44(extraout_var_10,bVar4);
                  if ((char)bVar4 == '\0') {
                    lVar10 = *(long *)&(pCVar12->fields).EnableAI;
                    if (lVar10 == 0) goto label_042fee19;
                    pCVar6 = *(Characters_BaseTitan_o **)&(pCVar12->fields)._currentFallTotalTime;
                    method_00 = *(MethodInfo **)(lVar10 + 0x68);
                    bVar4 = System_String__op_Equality
                                      ((System_String_o *)pCVar6,(System_String_o *)method_00,
                                       (MethodInfo *)0x0);
                    pCVar5 = (CustomSkins_BaseCustomSkinLoader_o *)CONCAT44(extraout_var_11,bVar4);
                    if ((char)bVar4 == '\0') {
                      lVar10 = *(long *)&(pCVar12->fields).EnableAI;
                      if (lVar10 == 0) goto label_042fee19;
                      pCVar6 = *(Characters_BaseTitan_o **)&(pCVar12->fields)._currentFallTotalTime;
                      method_00 = *(MethodInfo **)(lVar10 + 0x70);
                      bVar4 = System_String__op_Equality
                                        ((System_String_o *)pCVar6,(System_String_o *)method_00,
                                         (MethodInfo *)0x0);
                      if ((char)bVar4 != '\0') {
                        if (fVar13 <= 0.27) {
                          return (CustomSkins_BaseCustomSkinLoader_o *)CONCAT44(extraout_var_12,bVar4);
                        }
                        if ((pCVar12->fields)._startPosition.fields.z != 0.0) {
                          return (CustomSkins_BaseCustomSkinLoader_o *)CONCAT44(extraout_var_12,bVar4);
                        }
                        (pCVar12->fields)._startPosition.fields.z = 1.4013e-45;
                        pSVar1 = (pCVar12->fields).AttackAnimations;
                        if (pSVar1 == (System_Collections_Generic_Dictionary_string__string__o *)0x0)
                        goto label_042fee19;
                        pCVar9 = (Characters_BaseHitbox_o *)pSVar1[1].fields._keys;
                        method_00 = (pCVar12->klass->vtable)._167_GetHitboxTime.method;
                        fVar13 = (float)(*(pCVar12->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3dcccccd);
                        pCVar6 = pCVar12;
                        goto joined_r0x042fed9c;
                      }
                      lVar10 = *(long *)&(pCVar12->fields).EnableAI;
                      if (lVar10 == 0) goto label_042fee19;
                      pCVar6 = *(Characters_BaseTitan_o **)&(pCVar12->fields)._currentFallTotalTime;
                      method_00 = *(MethodInfo **)(lVar10 + 0x78);
                      bVar4 = System_String__op_Equality
                                        ((System_String_o *)pCVar6,(System_String_o *)method_00,
                                         (MethodInfo *)0x0);
                      pCVar5 = (CustomSkins_BaseCustomSkinLoader_o *)CONCAT44(extraout_var_13,bVar4);
                      if ((char)bVar4 == '\0') {
                        lVar10 = *(long *)&(pCVar12->fields).EnableAI;
                        if (lVar10 == 0) goto label_042fee19;
                        pCVar6 = *(Characters_BaseTitan_o **)&(pCVar12->fields)._currentFallTotalTime;
                        method_00 = *(MethodInfo **)(lVar10 + 0x80);
                        bVar4 = System_String__op_Equality
                                          ((System_String_o *)pCVar6,(System_String_o *)method_00,
                                           (MethodInfo *)0x0);
                        pCVar5 = (CustomSkins_BaseCustomSkinLoader_o *)CONCAT44(extraout_var_14,bVar4);
                        if ((char)bVar4 == '\0') {
                          return pCVar5;
                        }
                        if (fVar13 <= 0.28) {
                          return pCVar5;
                        }
                        goto label_042fec53;
                      }
                      if (fVar13 <= 0.28) {
                        return pCVar5;
                      }
                    }
                    else if (fVar13 <= 0.31) {
                      return pCVar5;
                    }
                    if ((pCVar12->fields)._startPosition.fields.z != 0.0) {
                      return pCVar5;
                    }
                    (pCVar12->fields)._startPosition.fields.z = 1.4013e-45;
                    pSVar1 = (pCVar12->fields).AttackAnimations;
                    if (pSVar1 == (System_Collections_Generic_Dictionary_string__string__o *)0x0)
                    goto label_042fee19;
                    pCVar9 = (Characters_BaseHitbox_o *)pSVar1[1].fields._keys;
                  }
                  else {
                    if (fVar13 <= 0.31) {
                      return pCVar5;
                    }
label_042fec53:
                    if ((pCVar12->fields)._startPosition.fields.z != 0.0) {
                      return pCVar5;
                    }
                    (pCVar12->fields)._startPosition.fields.z = 1.4013e-45;
                    pSVar1 = (pCVar12->fields).AttackAnimations;
                    if (pSVar1 == (System_Collections_Generic_Dictionary_string__string__o *)0x0)
                    goto label_042fee19;
                    pCVar9 = (Characters_BaseHitbox_o *)pSVar1[1].fields._values;
                  }
                  method_00 = (pCVar12->klass->vtable)._167_GetHitboxTime.method;
                  fVar13 = (float)(*(pCVar12->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3d4ccccd);
                  pCVar6 = pCVar12;
                  goto joined_r0x042fed9c;
                }
                if (fVar13 <= 0.31) {
                  return (CustomSkins_BaseCustomSkinLoader_o *)CONCAT44(extraout_var_09,bVar4);
                }
                if ((pCVar12->fields)._startPosition.fields.z != 0.0) {
                  return (CustomSkins_BaseCustomSkinLoader_o *)CONCAT44(extraout_var_09,bVar4);
                }
                (pCVar12->fields)._startPosition.fields.z = 1.4013e-45;
                pSVar1 = (pCVar12->fields).AttackAnimations;
                if (pSVar1 == (System_Collections_Generic_Dictionary_string__string__o *)0x0)
                goto label_042fee19;
                pCVar9 = (Characters_BaseHitbox_o *)pSVar1[1].fields._keys;
              }
              else {
                if (fVar13 <= 0.31) {
                  return (CustomSkins_BaseCustomSkinLoader_o *)CONCAT44(extraout_var_08,bVar4);
                }
                if ((pCVar12->fields)._startPosition.fields.z != 0.0) {
                  return (CustomSkins_BaseCustomSkinLoader_o *)CONCAT44(extraout_var_08,bVar4);
                }
                (pCVar12->fields)._startPosition.fields.z = 1.4013e-45;
                pSVar1 = (pCVar12->fields).AttackAnimations;
                if (pSVar1 == (System_Collections_Generic_Dictionary_string__string__o *)0x0)
                goto label_042fee19;
                pCVar9 = (Characters_BaseHitbox_o *)pSVar1[1].fields._values;
              }
              method_00 = (pCVar12->klass->vtable)._167_GetHitboxTime.method;
              fVar13 = (float)(*(pCVar12->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3d23d70a);
              pCVar6 = pCVar12;
              goto joined_r0x042fed9c;
            }
            if (fVar13 <= 0.45) {
              return (CustomSkins_BaseCustomSkinLoader_o *)CONCAT44(extraout_var_05,bVar4);
            }
            if ((pCVar12->fields)._startPosition.fields.z != 0.0) {
              return (CustomSkins_BaseCustomSkinLoader_o *)CONCAT44(extraout_var_05,bVar4);
            }
            (pCVar12->fields)._startPosition.fields.z = 1.4013e-45;
            pSVar1 = (pCVar12->fields).AttackAnimations;
            if (pSVar1 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_042fee19;
            pSVar8 = (System_Collections_Generic_Dictionary_string__string__c *)pSVar1[1].fields._keys;
          }
          else {
            if (fVar13 <= 0.41) {
              return pCVar5;
            }
label_042fe9b0:
            if ((pCVar12->fields)._startPosition.fields.z != 0.0) {
              return pCVar5;
            }
            (pCVar12->fields)._startPosition.fields.z = 1.4013e-45;
            pSVar1 = (pCVar12->fields).AttackAnimations;
            if (pSVar1 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_042fee19;
            pSVar8 = (System_Collections_Generic_Dictionary_string__string__c *)pSVar1[1].fields._values;
          }
          method_00 = (pCVar12->klass->vtable)._167_GetHitboxTime.method;
          pCVar6 = pCVar12;
          fVar13 = (float)(*(pCVar12->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3e3851ec);
        }
        else {
          if (fVar13 <= 0.47) {
            return pCVar5;
          }
label_042fe47f:
          if ((pCVar12->fields)._startPosition.fields.z != 0.0) {
            return pCVar5;
          }
          (pCVar12->fields)._startPosition.fields.z = 1.4013e-45;
          pSVar1 = (pCVar12->fields).AttackAnimations;
          if (pSVar1 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_042fee19;
          pSVar8 = (System_Collections_Generic_Dictionary_string__string__c *)pSVar1[1].fields._values;
label_042fe4af:
          method_00 = (pCVar12->klass->vtable)._167_GetHitboxTime.method;
          pCVar6 = pCVar12;
          fVar13 = (float)(*(pCVar12->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3db851ec);
        }
      }
      else {
        if (fVar13 <= 0.395) {
          return (CustomSkins_BaseCustomSkinLoader_o *)CONCAT44(extraout_var,bVar4);
        }
        if ((pCVar12->fields)._startPosition.fields.z != 0.0) {
          return (CustomSkins_BaseCustomSkinLoader_o *)CONCAT44(extraout_var,bVar4);
        }
        (pCVar12->fields)._startPosition.fields.z = 1.4013e-45;
        pSVar1 = (pCVar12->fields).AttackAnimations;
        if (pSVar1 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_042fee19;
        pSVar8 = pSVar1[2].klass;
        method_00 = (pCVar12->klass->vtable)._167_GetHitboxTime.method;
        pCVar6 = pCVar12;
        fVar13 = (float)(*(pCVar12->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3df5c28f);
      }
    }
    else {
      fVar14 = (pCVar12->fields)._startPosition.fields.z;
      if ((fVar13 <= 0.222) || (fVar14 != 0.0)) {
        if ((fVar13 <= 0.386) || (fVar14 != 1.4013e-45)) {
          if (fVar13 <= 0.612) {
            return (CustomSkins_BaseCustomSkinLoader_o *)(ulong)(uint)fVar14;
          }
          if (fVar14 != 2.8026e-45) {
            return (CustomSkins_BaseCustomSkinLoader_o *)(ulong)(uint)fVar14;
          }
          (pCVar12->fields)._startPosition.fields.z = 4.2039e-45;
          pSVar1 = (pCVar12->fields).AttackAnimations;
          if (pSVar1 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_042fee19;
          pSVar8 = pSVar1[2].klass;
          method_00 = (pCVar12->klass->vtable)._167_GetHitboxTime.method;
          pCVar6 = pCVar12;
          fVar13 = (float)(*(pCVar12->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3d23d70a);
          goto joined_r0x042fe570;
        }
        (pCVar12->fields)._startPosition.fields.z = 2.8026e-45;
        pSVar1 = (pCVar12->fields).AttackAnimations;
        if (pSVar1 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_042fee19;
        pCVar9 = (Characters_BaseHitbox_o *)pSVar1[1].fields._values;
        method_00 = (pCVar12->klass->vtable)._167_GetHitboxTime.method;
        pCVar6 = pCVar12;
        fVar13 = (float)(*(pCVar12->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3d8f5c29);
        goto joined_r0x042fe402;
      }
      (pCVar12->fields)._startPosition.fields.z = 1.4013e-45;
      pSVar1 = (pCVar12->fields).AttackAnimations;
      if (pSVar1 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_042fee19;
      pSVar8 = (System_Collections_Generic_Dictionary_string__string__c *)pSVar1[1].fields._values;
      method_00 = (pCVar12->klass->vtable)._167_GetHitboxTime.method;
      pCVar6 = pCVar12;
      fVar13 = (float)(*(pCVar12->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3d23d70a);
    }
  }
  else {
    fVar14 = (pCVar12->fields)._startPosition.fields.z;
    if ((fVar13 <= 0.155) || (fVar14 != 0.0)) {
      if ((fVar13 <= 0.32) || (fVar14 != 1.4013e-45)) {
        if (fVar13 <= 0.59) {
          return (CustomSkins_BaseCustomSkinLoader_o *)(ulong)(uint)fVar14;
        }
        if (fVar14 != 2.8026e-45) {
          return (CustomSkins_BaseCustomSkinLoader_o *)(ulong)(uint)fVar14;
        }
        (pCVar12->fields)._startPosition.fields.z = 4.2039e-45;
        pSVar1 = (pCVar12->fields).AttackAnimations;
        if (pSVar1 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_042fee19;
        pSVar8 = pSVar1[2].klass;
        method_00 = (pCVar12->klass->vtable)._167_GetHitboxTime.method;
        pCVar6 = pCVar12;
        fVar13 = (float)(*(pCVar12->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3d4ccccd);
joined_r0x042fe570:
        if (pSVar8 != (System_Collections_Generic_Dictionary_string__string__c *)0x0) {
          Characters_BaseHitbox__Activate((Characters_BaseHitbox_o *)pSVar8,0.0,fVar13,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_TitanSounds + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar11 = *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x28);
          goto label_042fe509;
        }
        goto label_042fee19;
      }
      (pCVar12->fields)._startPosition.fields.z = 2.8026e-45;
      pSVar1 = (pCVar12->fields).AttackAnimations;
      if (pSVar1 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_042fee19;
      pCVar9 = (Characters_BaseHitbox_o *)pSVar1[1].fields._syncRoot;
      method_00 = (pCVar12->klass->vtable)._167_GetHitboxTime.method;
      pCVar6 = pCVar12;
      fVar13 = (float)(*(pCVar12->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3d75c28f);
joined_r0x042fe402:
      if (pCVar9 != (Characters_BaseHitbox_o *)0x0) {
        Characters_BaseHitbox__Activate(pCVar9,0.0,fVar13,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_TitanSounds + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar11 = *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x20);
        goto label_042fe509;
      }
      goto label_042fee19;
    }
    (pCVar12->fields)._startPosition.fields.z = 1.4013e-45;
    pSVar1 = (pCVar12->fields).AttackAnimations;
    if (pSVar1 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_042fee19;
    pSVar8 = pSVar1[2].klass;
    method_00 = (pCVar12->klass->vtable)._167_GetHitboxTime.method;
    pCVar6 = pCVar12;
    fVar13 = (float)(*(pCVar12->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3d8f5c29);
  }
joined_r0x042fe9fe:
  if (pSVar8 != (System_Collections_Generic_Dictionary_string__string__c *)0x0) {
    Characters_BaseHitbox__Activate((Characters_BaseHitbox_o *)pSVar8,0.0,fVar13,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_TitanSounds + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar11 = *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x18);
label_042fe509:
    Characters_BaseCharacter__PlaySound((Characters_BaseCharacter_o *)pCVar12,pSVar11,(MethodInfo *)0x0);
    return extraout_RAX;
  }
label_042fee19:
  fVar13 = (float)il2cpp_runtime_helper_022b2c90();
  pCVar12 = pCVar6;
  if (g_data_057adf18 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ShifterSounds);
    pCVar12 = (Characters_BaseTitan_o *)&MethodInfo_Boolean_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057adf18 = '\x01';
  }
  lVar10 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
  if ((lVar10 != 0) &&
     (pCVar5 = *(CustomSkins_BaseCustomSkinLoader_o **)(lVar10 + 0x40),
     pCVar5 != (CustomSkins_BaseCustomSkinLoader_o *)0x0)) {
    if (*(char *)((long)&(pCVar5->fields).m_CachedPtr + 1) != '\0') {
      bVar4 = Utility_RandomGen__Roll(fVar13,(MethodInfo *)0x0);
      pCVar5 = (CustomSkins_BaseCustomSkinLoader_o *)CONCAT44(extraout_var_15,bVar4);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_ShifterSounds + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        Characters_BaseCharacter__PlaySound
                  ((Characters_BaseCharacter_o *)pCVar6,
                   *(System_String_o **)(*(long *)(TypeInfo_ShifterSounds + 0xb8) + 0x18),(MethodInfo *)0x0);
        return extraout_RAX_01;
      }
    }
    return pCVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar6 = pCVar12;
  if (g_data_057adf19 == '\0') {
    pCVar6 = (Characters_BaseTitan_o *)&"AttackComboBlind";
    il2cpp_runtime_helper_023445d0();
    g_data_057adf19 = '\x01';
  }
  lVar10 = *(long *)&(pCVar12->fields).EnableAI;
  if (lVar10 != 0) {
    bVar4 = System_String__op_Inequality
                      (*(System_String_o **)&(pCVar12->fields)._currentFallTotalTime,
                       *(System_String_o **)(lVar10 + 0x18),(MethodInfo *)0x0);
    pCVar5 = (CustomSkins_BaseCustomSkinLoader_o *)CONCAT44(extraout_var_16,bVar4);
    if (((char)bVar4 != '\0') && ((pCVar12->fields)._jumpDirection.fields.x <= 0.0)) {
      (*(pCVar12->klass->vtable)._168_DamagedGrunt.methodPtr)
                (0x3f800000,pCVar12,(pCVar12->klass->vtable)._168_DamagedGrunt.method);
      (*(pCVar12->klass->vtable)._128_Attack.methodPtr)
                (pCVar12,"AttackComboBlind",(pCVar12->klass->vtable)._128_Attack.method);
      pCVar5 = (CustomSkins_BaseCustomSkinLoader_o *)
               (*(pCVar12->klass->vtable)._118_get_DisableCooldown.methodPtr)
                         (pCVar12,(pCVar12->klass->vtable)._118_get_DisableCooldown.method);
      (pCVar12->fields)._jumpDirection.fields.x = extraout_XMM0_Da + 2.0;
    }
    return pCVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  *(undefined1 *)((long)&(pCVar6->fields)._previousCoreLocalPosition.fields.y + 1) = 1;
  (pCVar6->fields)._furthestCoreLocalPosition.fields.z = 2.0;
  Characters_BaseTitan___ctor(pCVar6,method_00);
  return extraout_RAX_02;
}


// Characters.AnnieShifter$$GetSkinURL
// il2cpp: System_String_o* Characters_AnnieShifter__GetSkinURL (Characters_AnnieShifter_o* __this, Settings_ShifterCustomSkinSet_o* set, const MethodInfo* method);
// 0x42fe000

System_String_o *
Characters_AnnieShifter__GetSkinURL
          (Characters_AnnieShifter_o *__this,Settings_ShifterCustomSkinSet_o *set,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  long lVar2;
  System_Collections_Generic_Dictionary_string__string__o *pSVar3;
  System_Action_Hashtable__o *pSVar4;
  UnityEngine_Transform_o *pUVar5;
  bool_conflict bVar6;
  Characters_BaseTitan_o *pCVar7;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  System_String_o *extraout_RAX;
  System_String_o *extraout_RAX_00;
  undefined4 extraout_var_01;
  Characters_BaseTitan_o *pCVar8;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  undefined4 extraout_var_04;
  undefined4 extraout_var_05;
  undefined4 extraout_var_06;
  undefined4 extraout_var_07;
  undefined4 extraout_var_08;
  undefined4 extraout_var_09;
  undefined4 extraout_var_10;
  undefined4 extraout_var_11;
  undefined4 extraout_var_12;
  undefined4 extraout_var_13;
  undefined4 extraout_var_14;
  undefined4 extraout_var_15;
  System_String_o *extraout_RAX_01;
  undefined4 extraout_var_16;
  System_String_o *pSVar9;
  System_String_o *extraout_RAX_02;
  System_Collections_Generic_Dictionary_string__string__c *pSVar10;
  Characters_BaseHitbox_o *pCVar11;
  MethodInfo *method_00;
  Characters_BaseTitan_o *pCVar12;
  float fVar13;
  float fVar14;
  float extraout_XMM0_Da;
  UnityEngine_Quaternion_o rotation;
  UnityEngine_Vector3_o UVar15;
  UnityEngine_Vector3_o UVar16;
  undefined8 uStack_78;
  float fStack_58;
  
  if (g_data_057adf15 == '\0') {
    __this = (Characters_AnnieShifter_o *)&MethodInfo_String_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057adf15 = '\x01';
  }
  if ((set != (Settings_ShifterCustomSkinSet_o *)0x0) &&
     (pSVar1 = (set->fields).Annie, pSVar1 != (Settings_StringSetting_o *)0x0)) {
    return (pSVar1->fields)._value;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adf16 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Single);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_float);
    g_data_057adf16 = '\x01';
  }
  pCVar7 = (Characters_BaseTitan_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_float);
  pCVar12 = pCVar7;
  System_Collections_Generic_Dictionary_object__float____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pCVar7,MethodInfo_Dictionary_2_System_String_System_Single);
  lVar2 = *(long *)&(__this->fields).EnableAI;
  if ((lVar2 != 0) && (pCVar7 != (Characters_BaseTitan_o *)0x0)) {
    System_Collections_Generic_Dictionary_object__float___Add
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pCVar7,
               *(Il2CppObject **)(lVar2 + 0x10),0.95,MethodInfo_Void_Add);
    return (System_String_o *)pCVar7;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adf17 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057adf17 = '\x01';
  }
  method_00 = (pCVar12->klass->vtable)._166_GetAnimationTime.method;
  pCVar7 = pCVar12;
  fVar13 = (float)(*(pCVar12->klass->vtable)._166_GetAnimationTime.methodPtr)();
  lVar2 = *(long *)&(pCVar12->fields).EnableAI;
  if (lVar2 == 0) goto label_042fee19;
  pCVar7 = *(Characters_BaseTitan_o **)&(pCVar12->fields)._currentFallTotalTime;
  method_00 = *(MethodInfo **)(lVar2 + 0x10);
  bVar6 = System_String__op_Equality((System_String_o *)pCVar7,(System_String_o *)method_00,(MethodInfo *)0x0)
  ;
  if ((char)bVar6 == '\0') {
    lVar2 = *(long *)&(pCVar12->fields).EnableAI;
    if (lVar2 == 0) goto label_042fee19;
    pCVar7 = *(Characters_BaseTitan_o **)&(pCVar12->fields)._currentFallTotalTime;
    method_00 = *(MethodInfo **)(lVar2 + 0x18);
    bVar6 = System_String__op_Equality
                      ((System_String_o *)pCVar7,(System_String_o *)method_00,(MethodInfo *)0x0);
    if ((char)bVar6 == '\0') {
      lVar2 = *(long *)&(pCVar12->fields).EnableAI;
      if (lVar2 == 0) goto label_042fee19;
      pCVar7 = *(Characters_BaseTitan_o **)&(pCVar12->fields)._currentFallTotalTime;
      method_00 = *(MethodInfo **)(lVar2 + 0x88);
      bVar6 = System_String__op_Equality
                        ((System_String_o *)pCVar7,(System_String_o *)method_00,(MethodInfo *)0x0);
      if ((char)bVar6 == '\0') {
        lVar2 = *(long *)&(pCVar12->fields).EnableAI;
        if (lVar2 == 0) goto label_042fee19;
        pCVar7 = *(Characters_BaseTitan_o **)&(pCVar12->fields)._currentFallTotalTime;
        method_00 = *(MethodInfo **)(lVar2 + 0x20);
        bVar6 = System_String__op_Equality
                          ((System_String_o *)pCVar7,(System_String_o *)method_00,(MethodInfo *)0x0);
        pSVar9 = (System_String_o *)CONCAT44(extraout_var_00,bVar6);
        if ((char)bVar6 == '\0') {
          lVar2 = *(long *)&(pCVar12->fields).EnableAI;
          if (lVar2 == 0) goto label_042fee19;
          pCVar7 = *(Characters_BaseTitan_o **)&(pCVar12->fields)._currentFallTotalTime;
          method_00 = *(MethodInfo **)(lVar2 + 0x90);
          bVar6 = System_String__op_Equality
                            ((System_String_o *)pCVar7,(System_String_o *)method_00,(MethodInfo *)0x0);
          if ((char)bVar6 != '\0') {
            fVar14 = (pCVar12->fields)._startPosition.fields.z;
            if ((0.24 < fVar13) && (fVar14 == 0.0)) {
              (pCVar12->fields)._startPosition.fields.z = 1.4013e-45;
              pSVar3 = (pCVar12->fields).AttackAnimations;
              if (pSVar3 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_042fee19;
              pCVar11 = (Characters_BaseHitbox_o *)pSVar3[1].fields._syncRoot;
              method_00 = (pCVar12->klass->vtable)._167_GetHitboxTime.method;
              fVar13 = (float)(*(pCVar12->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3db851ec);
              pCVar7 = pCVar12;
              if (pCVar11 == (Characters_BaseHitbox_o *)0x0) goto label_042fee19;
              goto label_042fe641;
            }
            if (fVar13 <= 0.33) {
              return (System_String_o *)(ulong)(uint)fVar14;
            }
            if (fVar14 != 1.4013e-45) {
              return (System_String_o *)(ulong)(uint)fVar14;
            }
            pSVar4 = (pCVar12->fields).OnPlayerPropertiesChanged;
            if ((pSVar4 != (System_Action_Hashtable__o *)0x0) &&
               (pCVar7 = (Characters_BaseTitan_o *)pSVar4[1].fields.invoke_impl,
               pCVar7 != (Characters_BaseTitan_o *)0x0)) {
              method_00 = (MethodInfo *)0x0;
              pCVar8 = (Characters_BaseTitan_o *)
                       UnityEngine_Component__get_transform
                                 ((UnityEngine_Component_o *)pCVar7,(MethodInfo *)0x0);
              if (pCVar8 != (Characters_BaseTitan_o *)0x0) {
                method_00 = (MethodInfo *)0x0;
                UVar15 = UnityEngine_Transform__get_position
                                   ((UnityEngine_Transform_o *)pCVar8,(MethodInfo *)0x0);
                pSVar4 = (pCVar12->fields).OnPlayerPropertiesChanged;
                pCVar7 = pCVar8;
                if (pSVar4 != (System_Action_Hashtable__o *)0x0) {
                  pUVar5 = (UnityEngine_Transform_o *)(pSVar4->fields).method_ptr;
                  pCVar7 = (Characters_BaseTitan_o *)0x0;
                  if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
                    method_00 = (MethodInfo *)0x0;
                    UVar16 = UnityEngine_Transform__get_position(pUVar5,(MethodInfo *)0x0);
                    if ((TypeInfo_EffectPrefabs->fields)._stepPhase == 0) {
                      il2cpp_runtime_helper_02337ed0(UVar16.fields.x,UVar16.fields.z);
                    }
                    pSVar4 = (pCVar12->fields).OnPlayerPropertiesChanged;
                    pCVar7 = TypeInfo_EffectPrefabs;
                    if ((pSVar4 != (System_Action_Hashtable__o *)0x0) &&
                       (pUVar5 = (UnityEngine_Transform_o *)(pSVar4->fields).method_ptr,
                       pUVar5 != (UnityEngine_Transform_o *)0x0)) {
                      fStack_58 = UVar15.fields.x;
                      pSVar9 = (System_String_o *)(((TypeInfo_EffectPrefabs->fields).MovementSync)->fields)._rigidbody;
                      rotation = UnityEngine_Transform__get_rotation(pUVar5,(MethodInfo *)0x0);
                      fVar13 = *(float *)((long)&(pCVar12->fields).TitanColliderToggler + 4);
                      fVar14 = (float)(*(pCVar12->klass->vtable)._117_get_SizeMultiplier.methodPtr)
                                                (pCVar12,(pCVar12->klass->vtable)._117_get_SizeMultiplier.
                                                         method);
                      UVar15.fields.x = fStack_58;
                      UVar15.fields.y = UVar16.fields.y;
                      Effects_EffectSpawner__Spawn
                                (pSVar9,UVar15,rotation,fVar13 * fVar14,1,(System_Object_array *)0x0,
                                 (MethodInfo *)0x0);
                      pSVar9 = (System_String_o *)
                               (*(pCVar12->klass->vtable)._173_SpawnShatter.methodPtr)
                                         (fStack_58,UVar15.fields.z,pCVar12,
                                          (pCVar12->klass->vtable)._173_SpawnShatter.method);
                      (pCVar12->fields)._startPosition.fields.z = 2.8026e-45;
                      return pSVar9;
                    }
                  }
                }
              }
            }
            goto label_042fee19;
          }
          lVar2 = *(long *)&(pCVar12->fields).EnableAI;
          if (lVar2 == 0) goto label_042fee19;
          pCVar7 = *(Characters_BaseTitan_o **)&(pCVar12->fields)._currentFallTotalTime;
          method_00 = *(MethodInfo **)(lVar2 + 0x98);
          bVar6 = System_String__op_Equality
                            ((System_String_o *)pCVar7,(System_String_o *)method_00,(MethodInfo *)0x0);
          if ((char)bVar6 != '\0') {
            if (fVar13 <= 0.26) {
              return (System_String_o *)CONCAT44(extraout_var_01,bVar6);
            }
            if ((pCVar12->fields)._startPosition.fields.z != 0.0) {
              return (System_String_o *)CONCAT44(extraout_var_01,bVar6);
            }
            (pCVar12->fields)._startPosition.fields.z = 1.4013e-45;
            pSVar3 = (pCVar12->fields).AttackAnimations;
            if (pSVar3 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_042fee19;
            pCVar8 = (Characters_BaseTitan_o *)pSVar3[1].fields._keys;
            method_00 = (pCVar12->klass->vtable)._167_GetHitboxTime.method;
            pCVar7 = pCVar12;
            fVar13 = (float)(*(pCVar12->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3da3d70a);
            if (pCVar8 == (Characters_BaseTitan_o *)0x0) goto label_042fee19;
            method_00 = (MethodInfo *)0x0;
            Characters_BaseHitbox__Activate((Characters_BaseHitbox_o *)pCVar8,0.0,fVar13,(MethodInfo *)0x0);
            pSVar3 = (pCVar12->fields).AttackAnimations;
            pCVar7 = pCVar8;
            if (pSVar3 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_042fee19;
            pSVar10 = (System_Collections_Generic_Dictionary_string__string__c *)pSVar3[1].fields._values;
            method_00 = (pCVar12->klass->vtable)._167_GetHitboxTime.method;
            pCVar7 = pCVar12;
            fVar13 = (float)(*(pCVar12->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3da3d70a);
            goto joined_r0x042fe9fe;
          }
          lVar2 = *(long *)&(pCVar12->fields).EnableAI;
          if (lVar2 == 0) goto label_042fee19;
          pCVar7 = *(Characters_BaseTitan_o **)&(pCVar12->fields)._currentFallTotalTime;
          method_00 = *(MethodInfo **)(lVar2 + 0xa0);
          bVar6 = System_String__op_Equality
                            ((System_String_o *)pCVar7,(System_String_o *)method_00,(MethodInfo *)0x0);
          if ((char)bVar6 != '\0') {
            if (fVar13 <= 0.27) {
              return (System_String_o *)CONCAT44(extraout_var_02,bVar6);
            }
            if ((pCVar12->fields)._startPosition.fields.z != 0.0) {
              return (System_String_o *)CONCAT44(extraout_var_02,bVar6);
            }
            (pCVar12->fields)._startPosition.fields.z = 1.4013e-45;
            pSVar3 = (pCVar12->fields).AttackAnimations;
            if (pSVar3 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_042fee19;
            pCVar11 = (Characters_BaseHitbox_o *)pSVar3[1].fields._comparer;
            method_00 = (pCVar12->klass->vtable)._167_GetHitboxTime.method;
            fVar13 = (float)(*(pCVar12->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3df5c28f);
            pCVar7 = pCVar12;
joined_r0x042fed9c:
            if (pCVar11 != (Characters_BaseHitbox_o *)0x0) {
label_042fe641:
              Characters_BaseHitbox__Activate(pCVar11,0.0,fVar13,(MethodInfo *)0x0);
              return extraout_RAX_00;
            }
            goto label_042fee19;
          }
          lVar2 = *(long *)&(pCVar12->fields).EnableAI;
          if (lVar2 == 0) goto label_042fee19;
          pCVar7 = *(Characters_BaseTitan_o **)&(pCVar12->fields)._currentFallTotalTime;
          method_00 = *(MethodInfo **)(lVar2 + 0x28);
          bVar6 = System_String__op_Equality
                            ((System_String_o *)pCVar7,(System_String_o *)method_00,(MethodInfo *)0x0);
          pSVar9 = (System_String_o *)CONCAT44(extraout_var_03,bVar6);
          if ((char)bVar6 == '\0') {
            lVar2 = *(long *)&(pCVar12->fields).EnableAI;
            if (lVar2 == 0) goto label_042fee19;
            pCVar7 = *(Characters_BaseTitan_o **)&(pCVar12->fields)._currentFallTotalTime;
            method_00 = *(MethodInfo **)(lVar2 + 0x30);
            bVar6 = System_String__op_Equality
                              ((System_String_o *)pCVar7,(System_String_o *)method_00,(MethodInfo *)0x0);
            pSVar9 = (System_String_o *)CONCAT44(extraout_var_04,bVar6);
            if ((char)bVar6 != '\0') {
              if (fVar13 <= 0.45) {
                return pSVar9;
              }
              goto label_042fe9b0;
            }
            lVar2 = *(long *)&(pCVar12->fields).EnableAI;
            if (lVar2 == 0) goto label_042fee19;
            pCVar7 = *(Characters_BaseTitan_o **)&(pCVar12->fields)._currentFallTotalTime;
            method_00 = *(MethodInfo **)(lVar2 + 0x38);
            bVar6 = System_String__op_Equality
                              ((System_String_o *)pCVar7,(System_String_o *)method_00,(MethodInfo *)0x0);
            if ((char)bVar6 == '\0') {
              lVar2 = *(long *)&(pCVar12->fields).EnableAI;
              if (lVar2 == 0) goto label_042fee19;
              pCVar7 = *(Characters_BaseTitan_o **)&(pCVar12->fields)._currentFallTotalTime;
              method_00 = *(MethodInfo **)(lVar2 + 0x40);
              bVar6 = System_String__op_Equality
                                ((System_String_o *)pCVar7,(System_String_o *)method_00,(MethodInfo *)0x0);
              if ((char)bVar6 != '\0') {
                if (fVar13 <= 0.42) {
                  return (System_String_o *)CONCAT44(extraout_var_06,bVar6);
                }
                if ((pCVar12->fields)._startPosition.fields.z != 0.0) {
                  return (System_String_o *)CONCAT44(extraout_var_06,bVar6);
                }
                (pCVar12->fields)._startPosition.fields.z = 1.4013e-45;
                pSVar3 = (pCVar12->fields).AttackAnimations;
                if (pSVar3 == (System_Collections_Generic_Dictionary_string__string__o *)0x0)
                goto label_042fee19;
                pSVar10 = (System_Collections_Generic_Dictionary_string__string__c *)pSVar3[1].fields._keys;
                goto label_042fe4af;
              }
              lVar2 = *(long *)&(pCVar12->fields).EnableAI;
              if (lVar2 == 0) goto label_042fee19;
              pCVar7 = *(Characters_BaseTitan_o **)&(pCVar12->fields)._currentFallTotalTime;
              method_00 = *(MethodInfo **)(lVar2 + 0x48);
              bVar6 = System_String__op_Equality
                                ((System_String_o *)pCVar7,(System_String_o *)method_00,(MethodInfo *)0x0);
              pSVar9 = (System_String_o *)CONCAT44(extraout_var_07,bVar6);
              if ((char)bVar6 != '\0') {
                if (fVar13 <= 0.42) {
                  return pSVar9;
                }
                goto label_042fe47f;
              }
              lVar2 = *(long *)&(pCVar12->fields).EnableAI;
              if (lVar2 == 0) goto label_042fee19;
              pCVar7 = *(Characters_BaseTitan_o **)&(pCVar12->fields)._currentFallTotalTime;
              method_00 = *(MethodInfo **)(lVar2 + 0x50);
              bVar6 = System_String__op_Equality
                                ((System_String_o *)pCVar7,(System_String_o *)method_00,(MethodInfo *)0x0);
              if ((char)bVar6 == '\0') {
                lVar2 = *(long *)&(pCVar12->fields).EnableAI;
                if (lVar2 == 0) goto label_042fee19;
                pCVar7 = *(Characters_BaseTitan_o **)&(pCVar12->fields)._currentFallTotalTime;
                method_00 = *(MethodInfo **)(lVar2 + 0x58);
                bVar6 = System_String__op_Equality
                                  ((System_String_o *)pCVar7,(System_String_o *)method_00,(MethodInfo *)0x0);
                if ((char)bVar6 == '\0') {
                  lVar2 = *(long *)&(pCVar12->fields).EnableAI;
                  if (lVar2 == 0) goto label_042fee19;
                  pCVar7 = *(Characters_BaseTitan_o **)&(pCVar12->fields)._currentFallTotalTime;
                  method_00 = *(MethodInfo **)(lVar2 + 0x60);
                  bVar6 = System_String__op_Equality
                                    ((System_String_o *)pCVar7,(System_String_o *)method_00,(MethodInfo *)0x0)
                  ;
                  pSVar9 = (System_String_o *)CONCAT44(extraout_var_10,bVar6);
                  if ((char)bVar6 == '\0') {
                    lVar2 = *(long *)&(pCVar12->fields).EnableAI;
                    if (lVar2 == 0) goto label_042fee19;
                    pCVar7 = *(Characters_BaseTitan_o **)&(pCVar12->fields)._currentFallTotalTime;
                    method_00 = *(MethodInfo **)(lVar2 + 0x68);
                    bVar6 = System_String__op_Equality
                                      ((System_String_o *)pCVar7,(System_String_o *)method_00,
                                       (MethodInfo *)0x0);
                    pSVar9 = (System_String_o *)CONCAT44(extraout_var_11,bVar6);
                    if ((char)bVar6 == '\0') {
                      lVar2 = *(long *)&(pCVar12->fields).EnableAI;
                      if (lVar2 == 0) goto label_042fee19;
                      pCVar7 = *(Characters_BaseTitan_o **)&(pCVar12->fields)._currentFallTotalTime;
                      method_00 = *(MethodInfo **)(lVar2 + 0x70);
                      bVar6 = System_String__op_Equality
                                        ((System_String_o *)pCVar7,(System_String_o *)method_00,
                                         (MethodInfo *)0x0);
                      if ((char)bVar6 != '\0') {
                        if (fVar13 <= 0.27) {
                          return (System_String_o *)CONCAT44(extraout_var_12,bVar6);
                        }
                        if ((pCVar12->fields)._startPosition.fields.z != 0.0) {
                          return (System_String_o *)CONCAT44(extraout_var_12,bVar6);
                        }
                        (pCVar12->fields)._startPosition.fields.z = 1.4013e-45;
                        pSVar3 = (pCVar12->fields).AttackAnimations;
                        if (pSVar3 == (System_Collections_Generic_Dictionary_string__string__o *)0x0)
                        goto label_042fee19;
                        pCVar11 = (Characters_BaseHitbox_o *)pSVar3[1].fields._keys;
                        method_00 = (pCVar12->klass->vtable)._167_GetHitboxTime.method;
                        fVar13 = (float)(*(pCVar12->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3dcccccd);
                        pCVar7 = pCVar12;
                        goto joined_r0x042fed9c;
                      }
                      lVar2 = *(long *)&(pCVar12->fields).EnableAI;
                      if (lVar2 == 0) goto label_042fee19;
                      pCVar7 = *(Characters_BaseTitan_o **)&(pCVar12->fields)._currentFallTotalTime;
                      method_00 = *(MethodInfo **)(lVar2 + 0x78);
                      bVar6 = System_String__op_Equality
                                        ((System_String_o *)pCVar7,(System_String_o *)method_00,
                                         (MethodInfo *)0x0);
                      pSVar9 = (System_String_o *)CONCAT44(extraout_var_13,bVar6);
                      if ((char)bVar6 == '\0') {
                        lVar2 = *(long *)&(pCVar12->fields).EnableAI;
                        if (lVar2 == 0) goto label_042fee19;
                        pCVar7 = *(Characters_BaseTitan_o **)&(pCVar12->fields)._currentFallTotalTime;
                        method_00 = *(MethodInfo **)(lVar2 + 0x80);
                        bVar6 = System_String__op_Equality
                                          ((System_String_o *)pCVar7,(System_String_o *)method_00,
                                           (MethodInfo *)0x0);
                        pSVar9 = (System_String_o *)CONCAT44(extraout_var_14,bVar6);
                        if ((char)bVar6 == '\0') {
                          return pSVar9;
                        }
                        if (fVar13 <= 0.28) {
                          return pSVar9;
                        }
                        goto label_042fec53;
                      }
                      if (fVar13 <= 0.28) {
                        return pSVar9;
                      }
                    }
                    else if (fVar13 <= 0.31) {
                      return pSVar9;
                    }
                    if ((pCVar12->fields)._startPosition.fields.z != 0.0) {
                      return pSVar9;
                    }
                    (pCVar12->fields)._startPosition.fields.z = 1.4013e-45;
                    pSVar3 = (pCVar12->fields).AttackAnimations;
                    if (pSVar3 == (System_Collections_Generic_Dictionary_string__string__o *)0x0)
                    goto label_042fee19;
                    pCVar11 = (Characters_BaseHitbox_o *)pSVar3[1].fields._keys;
                  }
                  else {
                    if (fVar13 <= 0.31) {
                      return pSVar9;
                    }
label_042fec53:
                    if ((pCVar12->fields)._startPosition.fields.z != 0.0) {
                      return pSVar9;
                    }
                    (pCVar12->fields)._startPosition.fields.z = 1.4013e-45;
                    pSVar3 = (pCVar12->fields).AttackAnimations;
                    if (pSVar3 == (System_Collections_Generic_Dictionary_string__string__o *)0x0)
                    goto label_042fee19;
                    pCVar11 = (Characters_BaseHitbox_o *)pSVar3[1].fields._values;
                  }
                  method_00 = (pCVar12->klass->vtable)._167_GetHitboxTime.method;
                  fVar13 = (float)(*(pCVar12->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3d4ccccd);
                  pCVar7 = pCVar12;
                  goto joined_r0x042fed9c;
                }
                if (fVar13 <= 0.31) {
                  return (System_String_o *)CONCAT44(extraout_var_09,bVar6);
                }
                if ((pCVar12->fields)._startPosition.fields.z != 0.0) {
                  return (System_String_o *)CONCAT44(extraout_var_09,bVar6);
                }
                (pCVar12->fields)._startPosition.fields.z = 1.4013e-45;
                pSVar3 = (pCVar12->fields).AttackAnimations;
                if (pSVar3 == (System_Collections_Generic_Dictionary_string__string__o *)0x0)
                goto label_042fee19;
                pCVar11 = (Characters_BaseHitbox_o *)pSVar3[1].fields._keys;
              }
              else {
                if (fVar13 <= 0.31) {
                  return (System_String_o *)CONCAT44(extraout_var_08,bVar6);
                }
                if ((pCVar12->fields)._startPosition.fields.z != 0.0) {
                  return (System_String_o *)CONCAT44(extraout_var_08,bVar6);
                }
                (pCVar12->fields)._startPosition.fields.z = 1.4013e-45;
                pSVar3 = (pCVar12->fields).AttackAnimations;
                if (pSVar3 == (System_Collections_Generic_Dictionary_string__string__o *)0x0)
                goto label_042fee19;
                pCVar11 = (Characters_BaseHitbox_o *)pSVar3[1].fields._values;
              }
              method_00 = (pCVar12->klass->vtable)._167_GetHitboxTime.method;
              fVar13 = (float)(*(pCVar12->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3d23d70a);
              pCVar7 = pCVar12;
              goto joined_r0x042fed9c;
            }
            if (fVar13 <= 0.45) {
              return (System_String_o *)CONCAT44(extraout_var_05,bVar6);
            }
            if ((pCVar12->fields)._startPosition.fields.z != 0.0) {
              return (System_String_o *)CONCAT44(extraout_var_05,bVar6);
            }
            (pCVar12->fields)._startPosition.fields.z = 1.4013e-45;
            pSVar3 = (pCVar12->fields).AttackAnimations;
            if (pSVar3 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_042fee19;
            pSVar10 = (System_Collections_Generic_Dictionary_string__string__c *)pSVar3[1].fields._keys;
          }
          else {
            if (fVar13 <= 0.41) {
              return pSVar9;
            }
label_042fe9b0:
            if ((pCVar12->fields)._startPosition.fields.z != 0.0) {
              return pSVar9;
            }
            (pCVar12->fields)._startPosition.fields.z = 1.4013e-45;
            pSVar3 = (pCVar12->fields).AttackAnimations;
            if (pSVar3 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_042fee19;
            pSVar10 = (System_Collections_Generic_Dictionary_string__string__c *)pSVar3[1].fields._values;
          }
          method_00 = (pCVar12->klass->vtable)._167_GetHitboxTime.method;
          pCVar7 = pCVar12;
          fVar13 = (float)(*(pCVar12->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3e3851ec);
        }
        else {
          if (fVar13 <= 0.47) {
            return pSVar9;
          }
label_042fe47f:
          if ((pCVar12->fields)._startPosition.fields.z != 0.0) {
            return pSVar9;
          }
          (pCVar12->fields)._startPosition.fields.z = 1.4013e-45;
          pSVar3 = (pCVar12->fields).AttackAnimations;
          if (pSVar3 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_042fee19;
          pSVar10 = (System_Collections_Generic_Dictionary_string__string__c *)pSVar3[1].fields._values;
label_042fe4af:
          method_00 = (pCVar12->klass->vtable)._167_GetHitboxTime.method;
          pCVar7 = pCVar12;
          fVar13 = (float)(*(pCVar12->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3db851ec);
        }
      }
      else {
        if (fVar13 <= 0.395) {
          return (System_String_o *)CONCAT44(extraout_var,bVar6);
        }
        if ((pCVar12->fields)._startPosition.fields.z != 0.0) {
          return (System_String_o *)CONCAT44(extraout_var,bVar6);
        }
        (pCVar12->fields)._startPosition.fields.z = 1.4013e-45;
        pSVar3 = (pCVar12->fields).AttackAnimations;
        if (pSVar3 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_042fee19;
        pSVar10 = pSVar3[2].klass;
        method_00 = (pCVar12->klass->vtable)._167_GetHitboxTime.method;
        pCVar7 = pCVar12;
        fVar13 = (float)(*(pCVar12->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3df5c28f);
      }
    }
    else {
      fVar14 = (pCVar12->fields)._startPosition.fields.z;
      if ((fVar13 <= 0.222) || (fVar14 != 0.0)) {
        if ((fVar13 <= 0.386) || (fVar14 != 1.4013e-45)) {
          if (fVar13 <= 0.612) {
            return (System_String_o *)(ulong)(uint)fVar14;
          }
          if (fVar14 != 2.8026e-45) {
            return (System_String_o *)(ulong)(uint)fVar14;
          }
          (pCVar12->fields)._startPosition.fields.z = 4.2039e-45;
          pSVar3 = (pCVar12->fields).AttackAnimations;
          if (pSVar3 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_042fee19;
          pSVar10 = pSVar3[2].klass;
          method_00 = (pCVar12->klass->vtable)._167_GetHitboxTime.method;
          pCVar7 = pCVar12;
          fVar13 = (float)(*(pCVar12->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3d23d70a);
          goto joined_r0x042fe570;
        }
        (pCVar12->fields)._startPosition.fields.z = 2.8026e-45;
        pSVar3 = (pCVar12->fields).AttackAnimations;
        if (pSVar3 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_042fee19;
        pCVar11 = (Characters_BaseHitbox_o *)pSVar3[1].fields._values;
        method_00 = (pCVar12->klass->vtable)._167_GetHitboxTime.method;
        pCVar7 = pCVar12;
        fVar13 = (float)(*(pCVar12->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3d8f5c29);
        goto joined_r0x042fe402;
      }
      (pCVar12->fields)._startPosition.fields.z = 1.4013e-45;
      pSVar3 = (pCVar12->fields).AttackAnimations;
      if (pSVar3 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_042fee19;
      pSVar10 = (System_Collections_Generic_Dictionary_string__string__c *)pSVar3[1].fields._values;
      method_00 = (pCVar12->klass->vtable)._167_GetHitboxTime.method;
      pCVar7 = pCVar12;
      fVar13 = (float)(*(pCVar12->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3d23d70a);
    }
  }
  else {
    fVar14 = (pCVar12->fields)._startPosition.fields.z;
    if ((fVar13 <= 0.155) || (fVar14 != 0.0)) {
      if ((fVar13 <= 0.32) || (fVar14 != 1.4013e-45)) {
        if (fVar13 <= 0.59) {
          return (System_String_o *)(ulong)(uint)fVar14;
        }
        if (fVar14 != 2.8026e-45) {
          return (System_String_o *)(ulong)(uint)fVar14;
        }
        (pCVar12->fields)._startPosition.fields.z = 4.2039e-45;
        pSVar3 = (pCVar12->fields).AttackAnimations;
        if (pSVar3 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_042fee19;
        pSVar10 = pSVar3[2].klass;
        method_00 = (pCVar12->klass->vtable)._167_GetHitboxTime.method;
        pCVar7 = pCVar12;
        fVar13 = (float)(*(pCVar12->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3d4ccccd);
joined_r0x042fe570:
        if (pSVar10 != (System_Collections_Generic_Dictionary_string__string__c *)0x0) {
          Characters_BaseHitbox__Activate((Characters_BaseHitbox_o *)pSVar10,0.0,fVar13,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_TitanSounds + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar9 = *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x28);
          goto label_042fe509;
        }
        goto label_042fee19;
      }
      (pCVar12->fields)._startPosition.fields.z = 2.8026e-45;
      pSVar3 = (pCVar12->fields).AttackAnimations;
      if (pSVar3 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_042fee19;
      pCVar11 = (Characters_BaseHitbox_o *)pSVar3[1].fields._syncRoot;
      method_00 = (pCVar12->klass->vtable)._167_GetHitboxTime.method;
      pCVar7 = pCVar12;
      fVar13 = (float)(*(pCVar12->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3d75c28f);
joined_r0x042fe402:
      if (pCVar11 != (Characters_BaseHitbox_o *)0x0) {
        Characters_BaseHitbox__Activate(pCVar11,0.0,fVar13,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_TitanSounds + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar9 = *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x20);
        goto label_042fe509;
      }
      goto label_042fee19;
    }
    (pCVar12->fields)._startPosition.fields.z = 1.4013e-45;
    pSVar3 = (pCVar12->fields).AttackAnimations;
    if (pSVar3 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_042fee19;
    pSVar10 = pSVar3[2].klass;
    method_00 = (pCVar12->klass->vtable)._167_GetHitboxTime.method;
    pCVar7 = pCVar12;
    fVar13 = (float)(*(pCVar12->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3d8f5c29);
  }
joined_r0x042fe9fe:
  if (pSVar10 != (System_Collections_Generic_Dictionary_string__string__c *)0x0) {
    Characters_BaseHitbox__Activate((Characters_BaseHitbox_o *)pSVar10,0.0,fVar13,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_TitanSounds + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar9 = *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x18);
label_042fe509:
    Characters_BaseCharacter__PlaySound((Characters_BaseCharacter_o *)pCVar12,pSVar9,(MethodInfo *)0x0);
    return extraout_RAX;
  }
label_042fee19:
  fVar13 = (float)il2cpp_runtime_helper_022b2c90();
  pCVar12 = pCVar7;
  if (g_data_057adf18 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ShifterSounds);
    pCVar12 = (Characters_BaseTitan_o *)&MethodInfo_Boolean_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057adf18 = '\x01';
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
  if ((lVar2 != 0) && (pSVar9 = *(System_String_o **)(lVar2 + 0x40), pSVar9 != (System_String_o *)0x0)) {
    if (*(char *)((long)&(pSVar9->fields)._stringLength + 1) != '\0') {
      bVar6 = Utility_RandomGen__Roll(fVar13,(MethodInfo *)0x0);
      pSVar9 = (System_String_o *)CONCAT44(extraout_var_15,bVar6);
      if ((char)bVar6 != '\0') {
        if (*(int *)(TypeInfo_ShifterSounds + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        Characters_BaseCharacter__PlaySound
                  ((Characters_BaseCharacter_o *)pCVar7,
                   *(System_String_o **)(*(long *)(TypeInfo_ShifterSounds + 0xb8) + 0x18),(MethodInfo *)0x0);
        return extraout_RAX_01;
      }
    }
    return pSVar9;
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar7 = pCVar12;
  if (g_data_057adf19 == '\0') {
    pCVar7 = (Characters_BaseTitan_o *)&"AttackComboBlind";
    il2cpp_runtime_helper_023445d0();
    g_data_057adf19 = '\x01';
  }
  lVar2 = *(long *)&(pCVar12->fields).EnableAI;
  if (lVar2 != 0) {
    bVar6 = System_String__op_Inequality
                      (*(System_String_o **)&(pCVar12->fields)._currentFallTotalTime,
                       *(System_String_o **)(lVar2 + 0x18),(MethodInfo *)0x0);
    pSVar9 = (System_String_o *)CONCAT44(extraout_var_16,bVar6);
    if (((char)bVar6 != '\0') && ((pCVar12->fields)._jumpDirection.fields.x <= 0.0)) {
      (*(pCVar12->klass->vtable)._168_DamagedGrunt.methodPtr)
                (0x3f800000,pCVar12,(pCVar12->klass->vtable)._168_DamagedGrunt.method);
      (*(pCVar12->klass->vtable)._128_Attack.methodPtr)
                (pCVar12,"AttackComboBlind",(pCVar12->klass->vtable)._128_Attack.method);
      pSVar9 = (System_String_o *)
               (*(pCVar12->klass->vtable)._118_get_DisableCooldown.methodPtr)
                         (pCVar12,(pCVar12->klass->vtable)._118_get_DisableCooldown.method);
      (pCVar12->fields)._jumpDirection.fields.x = extraout_XMM0_Da + 2.0;
    }
    return pSVar9;
  }
  il2cpp_runtime_helper_022b2c90();
  *(undefined1 *)((long)&(pCVar7->fields)._previousCoreLocalPosition.fields.y + 1) = 1;
  (pCVar7->fields)._furthestCoreLocalPosition.fields.z = 2.0;
  Characters_BaseTitan___ctor(pCVar7,method_00);
  return extraout_RAX_02;
}


// Characters.AnnieShifter$$GetRootMotionAnimations
// il2cpp: System_Collections_Generic_Dictionary_string__float__o* Characters_AnnieShifter__GetRootMotionAnimations (Characters_AnnieShifter_o* __this, const MethodInfo* method);
// 0x42fe040

System_Collections_Generic_Dictionary_string__float__o *
Characters_AnnieShifter__GetRootMotionAnimations(Characters_AnnieShifter_o *__this,MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_Dictionary_string__string__o *pSVar2;
  System_Action_Hashtable__o *pSVar3;
  UnityEngine_Transform_o *pUVar4;
  bool_conflict bVar5;
  Characters_BaseTitan_o *pCVar6;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  System_Collections_Generic_Dictionary_string__float__o *extraout_RAX;
  System_Collections_Generic_Dictionary_string__float__o *extraout_RAX_00;
  undefined4 extraout_var_01;
  Characters_BaseTitan_o *pCVar7;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  undefined4 extraout_var_04;
  undefined4 extraout_var_05;
  undefined4 extraout_var_06;
  undefined4 extraout_var_07;
  undefined4 extraout_var_08;
  undefined4 extraout_var_09;
  undefined4 extraout_var_10;
  undefined4 extraout_var_11;
  undefined4 extraout_var_12;
  undefined4 extraout_var_13;
  undefined4 extraout_var_14;
  undefined4 extraout_var_15;
  System_Collections_Generic_Dictionary_string__float__o *extraout_RAX_01;
  undefined4 extraout_var_16;
  System_Collections_Generic_Dictionary_string__float__o *pSVar8;
  System_Collections_Generic_Dictionary_string__float__o *extraout_RAX_02;
  System_Collections_Generic_Dictionary_string__string__c *pSVar9;
  Characters_BaseHitbox_o *pCVar10;
  System_String_o *pSVar11;
  MethodInfo *method_00;
  Characters_BaseTitan_o *pCVar12;
  float fVar13;
  float fVar14;
  float extraout_XMM0_Da;
  UnityEngine_Quaternion_o rotation;
  UnityEngine_Vector3_o UVar15;
  UnityEngine_Vector3_o UVar16;
  undefined8 uStack_70;
  float fStack_50;
  
  if (g_data_057adf16 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Single);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_float);
    g_data_057adf16 = '\x01';
  }
  pCVar6 = (Characters_BaseTitan_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_float);
  pCVar12 = pCVar6;
  System_Collections_Generic_Dictionary_object__float____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pCVar6,MethodInfo_Dictionary_2_System_String_System_Single);
  lVar1 = *(long *)&(__this->fields).EnableAI;
  if ((lVar1 != 0) && (pCVar6 != (Characters_BaseTitan_o *)0x0)) {
    System_Collections_Generic_Dictionary_object__float___Add
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pCVar6,
               *(Il2CppObject **)(lVar1 + 0x10),0.95,MethodInfo_Void_Add);
    return (System_Collections_Generic_Dictionary_string__float__o *)pCVar6;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adf17 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057adf17 = '\x01';
  }
  method_00 = (pCVar12->klass->vtable)._166_GetAnimationTime.method;
  pCVar6 = pCVar12;
  fVar13 = (float)(*(pCVar12->klass->vtable)._166_GetAnimationTime.methodPtr)();
  lVar1 = *(long *)&(pCVar12->fields).EnableAI;
  if (lVar1 == 0) goto label_042fee19;
  pCVar6 = *(Characters_BaseTitan_o **)&(pCVar12->fields)._currentFallTotalTime;
  method_00 = *(MethodInfo **)(lVar1 + 0x10);
  bVar5 = System_String__op_Equality((System_String_o *)pCVar6,(System_String_o *)method_00,(MethodInfo *)0x0)
  ;
  if ((char)bVar5 == '\0') {
    lVar1 = *(long *)&(pCVar12->fields).EnableAI;
    if (lVar1 == 0) goto label_042fee19;
    pCVar6 = *(Characters_BaseTitan_o **)&(pCVar12->fields)._currentFallTotalTime;
    method_00 = *(MethodInfo **)(lVar1 + 0x18);
    bVar5 = System_String__op_Equality
                      ((System_String_o *)pCVar6,(System_String_o *)method_00,(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') {
      lVar1 = *(long *)&(pCVar12->fields).EnableAI;
      if (lVar1 == 0) goto label_042fee19;
      pCVar6 = *(Characters_BaseTitan_o **)&(pCVar12->fields)._currentFallTotalTime;
      method_00 = *(MethodInfo **)(lVar1 + 0x88);
      bVar5 = System_String__op_Equality
                        ((System_String_o *)pCVar6,(System_String_o *)method_00,(MethodInfo *)0x0);
      if ((char)bVar5 == '\0') {
        lVar1 = *(long *)&(pCVar12->fields).EnableAI;
        if (lVar1 == 0) goto label_042fee19;
        pCVar6 = *(Characters_BaseTitan_o **)&(pCVar12->fields)._currentFallTotalTime;
        method_00 = *(MethodInfo **)(lVar1 + 0x20);
        bVar5 = System_String__op_Equality
                          ((System_String_o *)pCVar6,(System_String_o *)method_00,(MethodInfo *)0x0);
        pSVar8 = (System_Collections_Generic_Dictionary_string__float__o *)CONCAT44(extraout_var_00,bVar5);
        if ((char)bVar5 == '\0') {
          lVar1 = *(long *)&(pCVar12->fields).EnableAI;
          if (lVar1 == 0) goto label_042fee19;
          pCVar6 = *(Characters_BaseTitan_o **)&(pCVar12->fields)._currentFallTotalTime;
          method_00 = *(MethodInfo **)(lVar1 + 0x90);
          bVar5 = System_String__op_Equality
                            ((System_String_o *)pCVar6,(System_String_o *)method_00,(MethodInfo *)0x0);
          if ((char)bVar5 != '\0') {
            fVar14 = (pCVar12->fields)._startPosition.fields.z;
            if ((0.24 < fVar13) && (fVar14 == 0.0)) {
              (pCVar12->fields)._startPosition.fields.z = 1.4013e-45;
              pSVar2 = (pCVar12->fields).AttackAnimations;
              if (pSVar2 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_042fee19;
              pCVar10 = (Characters_BaseHitbox_o *)pSVar2[1].fields._syncRoot;
              method_00 = (pCVar12->klass->vtable)._167_GetHitboxTime.method;
              fVar13 = (float)(*(pCVar12->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3db851ec);
              pCVar6 = pCVar12;
              if (pCVar10 == (Characters_BaseHitbox_o *)0x0) goto label_042fee19;
              goto label_042fe641;
            }
            if (fVar13 <= 0.33) {
              return (System_Collections_Generic_Dictionary_string__float__o *)(ulong)(uint)fVar14;
            }
            if (fVar14 != 1.4013e-45) {
              return (System_Collections_Generic_Dictionary_string__float__o *)(ulong)(uint)fVar14;
            }
            pSVar3 = (pCVar12->fields).OnPlayerPropertiesChanged;
            if ((pSVar3 != (System_Action_Hashtable__o *)0x0) &&
               (pCVar6 = (Characters_BaseTitan_o *)pSVar3[1].fields.invoke_impl,
               pCVar6 != (Characters_BaseTitan_o *)0x0)) {
              method_00 = (MethodInfo *)0x0;
              pCVar7 = (Characters_BaseTitan_o *)
                       UnityEngine_Component__get_transform
                                 ((UnityEngine_Component_o *)pCVar6,(MethodInfo *)0x0);
              if (pCVar7 != (Characters_BaseTitan_o *)0x0) {
                method_00 = (MethodInfo *)0x0;
                UVar15 = UnityEngine_Transform__get_position
                                   ((UnityEngine_Transform_o *)pCVar7,(MethodInfo *)0x0);
                pSVar3 = (pCVar12->fields).OnPlayerPropertiesChanged;
                pCVar6 = pCVar7;
                if (pSVar3 != (System_Action_Hashtable__o *)0x0) {
                  pUVar4 = (UnityEngine_Transform_o *)(pSVar3->fields).method_ptr;
                  pCVar6 = (Characters_BaseTitan_o *)0x0;
                  if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                    method_00 = (MethodInfo *)0x0;
                    UVar16 = UnityEngine_Transform__get_position(pUVar4,(MethodInfo *)0x0);
                    if ((TypeInfo_EffectPrefabs->fields)._stepPhase == 0) {
                      il2cpp_runtime_helper_02337ed0(UVar16.fields.x,UVar16.fields.z);
                    }
                    pSVar3 = (pCVar12->fields).OnPlayerPropertiesChanged;
                    pCVar6 = TypeInfo_EffectPrefabs;
                    if ((pSVar3 != (System_Action_Hashtable__o *)0x0) &&
                       (pUVar4 = (UnityEngine_Transform_o *)(pSVar3->fields).method_ptr,
                       pUVar4 != (UnityEngine_Transform_o *)0x0)) {
                      fStack_50 = UVar15.fields.x;
                      pSVar11 = (System_String_o *)(((TypeInfo_EffectPrefabs->fields).MovementSync)->fields)._rigidbody;
                      rotation = UnityEngine_Transform__get_rotation(pUVar4,(MethodInfo *)0x0);
                      fVar13 = *(float *)((long)&(pCVar12->fields).TitanColliderToggler + 4);
                      fVar14 = (float)(*(pCVar12->klass->vtable)._117_get_SizeMultiplier.methodPtr)
                                                (pCVar12,(pCVar12->klass->vtable)._117_get_SizeMultiplier.
                                                         method);
                      UVar15.fields.x = fStack_50;
                      UVar15.fields.y = UVar16.fields.y;
                      Effects_EffectSpawner__Spawn
                                (pSVar11,UVar15,rotation,fVar13 * fVar14,1,(System_Object_array *)0x0,
                                 (MethodInfo *)0x0);
                      pSVar8 = (System_Collections_Generic_Dictionary_string__float__o *)
                               (*(pCVar12->klass->vtable)._173_SpawnShatter.methodPtr)
                                         (fStack_50,UVar15.fields.z,pCVar12,
                                          (pCVar12->klass->vtable)._173_SpawnShatter.method);
                      (pCVar12->fields)._startPosition.fields.z = 2.8026e-45;
                      return pSVar8;
                    }
                  }
                }
              }
            }
            goto label_042fee19;
          }
          lVar1 = *(long *)&(pCVar12->fields).EnableAI;
          if (lVar1 == 0) goto label_042fee19;
          pCVar6 = *(Characters_BaseTitan_o **)&(pCVar12->fields)._currentFallTotalTime;
          method_00 = *(MethodInfo **)(lVar1 + 0x98);
          bVar5 = System_String__op_Equality
                            ((System_String_o *)pCVar6,(System_String_o *)method_00,(MethodInfo *)0x0);
          if ((char)bVar5 != '\0') {
            if (fVar13 <= 0.26) {
              return (System_Collections_Generic_Dictionary_string__float__o *)CONCAT44(extraout_var_01,bVar5)
              ;
            }
            if ((pCVar12->fields)._startPosition.fields.z != 0.0) {
              return (System_Collections_Generic_Dictionary_string__float__o *)CONCAT44(extraout_var_01,bVar5)
              ;
            }
            (pCVar12->fields)._startPosition.fields.z = 1.4013e-45;
            pSVar2 = (pCVar12->fields).AttackAnimations;
            if (pSVar2 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_042fee19;
            pCVar7 = (Characters_BaseTitan_o *)pSVar2[1].fields._keys;
            method_00 = (pCVar12->klass->vtable)._167_GetHitboxTime.method;
            pCVar6 = pCVar12;
            fVar13 = (float)(*(pCVar12->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3da3d70a);
            if (pCVar7 == (Characters_BaseTitan_o *)0x0) goto label_042fee19;
            method_00 = (MethodInfo *)0x0;
            Characters_BaseHitbox__Activate((Characters_BaseHitbox_o *)pCVar7,0.0,fVar13,(MethodInfo *)0x0);
            pSVar2 = (pCVar12->fields).AttackAnimations;
            pCVar6 = pCVar7;
            if (pSVar2 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_042fee19;
            pSVar9 = (System_Collections_Generic_Dictionary_string__string__c *)pSVar2[1].fields._values;
            method_00 = (pCVar12->klass->vtable)._167_GetHitboxTime.method;
            pCVar6 = pCVar12;
            fVar13 = (float)(*(pCVar12->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3da3d70a);
            goto joined_r0x042fe9fe;
          }
          lVar1 = *(long *)&(pCVar12->fields).EnableAI;
          if (lVar1 == 0) goto label_042fee19;
          pCVar6 = *(Characters_BaseTitan_o **)&(pCVar12->fields)._currentFallTotalTime;
          method_00 = *(MethodInfo **)(lVar1 + 0xa0);
          bVar5 = System_String__op_Equality
                            ((System_String_o *)pCVar6,(System_String_o *)method_00,(MethodInfo *)0x0);
          if ((char)bVar5 != '\0') {
            if (fVar13 <= 0.27) {
              return (System_Collections_Generic_Dictionary_string__float__o *)CONCAT44(extraout_var_02,bVar5)
              ;
            }
            if ((pCVar12->fields)._startPosition.fields.z != 0.0) {
              return (System_Collections_Generic_Dictionary_string__float__o *)CONCAT44(extraout_var_02,bVar5)
              ;
            }
            (pCVar12->fields)._startPosition.fields.z = 1.4013e-45;
            pSVar2 = (pCVar12->fields).AttackAnimations;
            if (pSVar2 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_042fee19;
            pCVar10 = (Characters_BaseHitbox_o *)pSVar2[1].fields._comparer;
            method_00 = (pCVar12->klass->vtable)._167_GetHitboxTime.method;
            fVar13 = (float)(*(pCVar12->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3df5c28f);
            pCVar6 = pCVar12;
joined_r0x042fed9c:
            if (pCVar10 != (Characters_BaseHitbox_o *)0x0) {
label_042fe641:
              Characters_BaseHitbox__Activate(pCVar10,0.0,fVar13,(MethodInfo *)0x0);
              return extraout_RAX_00;
            }
            goto label_042fee19;
          }
          lVar1 = *(long *)&(pCVar12->fields).EnableAI;
          if (lVar1 == 0) goto label_042fee19;
          pCVar6 = *(Characters_BaseTitan_o **)&(pCVar12->fields)._currentFallTotalTime;
          method_00 = *(MethodInfo **)(lVar1 + 0x28);
          bVar5 = System_String__op_Equality
                            ((System_String_o *)pCVar6,(System_String_o *)method_00,(MethodInfo *)0x0);
          pSVar8 = (System_Collections_Generic_Dictionary_string__float__o *)CONCAT44(extraout_var_03,bVar5);
          if ((char)bVar5 == '\0') {
            lVar1 = *(long *)&(pCVar12->fields).EnableAI;
            if (lVar1 == 0) goto label_042fee19;
            pCVar6 = *(Characters_BaseTitan_o **)&(pCVar12->fields)._currentFallTotalTime;
            method_00 = *(MethodInfo **)(lVar1 + 0x30);
            bVar5 = System_String__op_Equality
                              ((System_String_o *)pCVar6,(System_String_o *)method_00,(MethodInfo *)0x0);
            pSVar8 = (System_Collections_Generic_Dictionary_string__float__o *)CONCAT44(extraout_var_04,bVar5)
            ;
            if ((char)bVar5 != '\0') {
              if (fVar13 <= 0.45) {
                return pSVar8;
              }
              goto label_042fe9b0;
            }
            lVar1 = *(long *)&(pCVar12->fields).EnableAI;
            if (lVar1 == 0) goto label_042fee19;
            pCVar6 = *(Characters_BaseTitan_o **)&(pCVar12->fields)._currentFallTotalTime;
            method_00 = *(MethodInfo **)(lVar1 + 0x38);
            bVar5 = System_String__op_Equality
                              ((System_String_o *)pCVar6,(System_String_o *)method_00,(MethodInfo *)0x0);
            if ((char)bVar5 == '\0') {
              lVar1 = *(long *)&(pCVar12->fields).EnableAI;
              if (lVar1 == 0) goto label_042fee19;
              pCVar6 = *(Characters_BaseTitan_o **)&(pCVar12->fields)._currentFallTotalTime;
              method_00 = *(MethodInfo **)(lVar1 + 0x40);
              bVar5 = System_String__op_Equality
                                ((System_String_o *)pCVar6,(System_String_o *)method_00,(MethodInfo *)0x0);
              if ((char)bVar5 != '\0') {
                if (fVar13 <= 0.42) {
                  return (System_Collections_Generic_Dictionary_string__float__o *)
                         CONCAT44(extraout_var_06,bVar5);
                }
                if ((pCVar12->fields)._startPosition.fields.z != 0.0) {
                  return (System_Collections_Generic_Dictionary_string__float__o *)
                         CONCAT44(extraout_var_06,bVar5);
                }
                (pCVar12->fields)._startPosition.fields.z = 1.4013e-45;
                pSVar2 = (pCVar12->fields).AttackAnimations;
                if (pSVar2 == (System_Collections_Generic_Dictionary_string__string__o *)0x0)
                goto label_042fee19;
                pSVar9 = (System_Collections_Generic_Dictionary_string__string__c *)pSVar2[1].fields._keys;
                goto label_042fe4af;
              }
              lVar1 = *(long *)&(pCVar12->fields).EnableAI;
              if (lVar1 == 0) goto label_042fee19;
              pCVar6 = *(Characters_BaseTitan_o **)&(pCVar12->fields)._currentFallTotalTime;
              method_00 = *(MethodInfo **)(lVar1 + 0x48);
              bVar5 = System_String__op_Equality
                                ((System_String_o *)pCVar6,(System_String_o *)method_00,(MethodInfo *)0x0);
              pSVar8 = (System_Collections_Generic_Dictionary_string__float__o *)
                       CONCAT44(extraout_var_07,bVar5);
              if ((char)bVar5 != '\0') {
                if (fVar13 <= 0.42) {
                  return pSVar8;
                }
                goto label_042fe47f;
              }
              lVar1 = *(long *)&(pCVar12->fields).EnableAI;
              if (lVar1 == 0) goto label_042fee19;
              pCVar6 = *(Characters_BaseTitan_o **)&(pCVar12->fields)._currentFallTotalTime;
              method_00 = *(MethodInfo **)(lVar1 + 0x50);
              bVar5 = System_String__op_Equality
                                ((System_String_o *)pCVar6,(System_String_o *)method_00,(MethodInfo *)0x0);
              if ((char)bVar5 == '\0') {
                lVar1 = *(long *)&(pCVar12->fields).EnableAI;
                if (lVar1 == 0) goto label_042fee19;
                pCVar6 = *(Characters_BaseTitan_o **)&(pCVar12->fields)._currentFallTotalTime;
                method_00 = *(MethodInfo **)(lVar1 + 0x58);
                bVar5 = System_String__op_Equality
                                  ((System_String_o *)pCVar6,(System_String_o *)method_00,(MethodInfo *)0x0);
                if ((char)bVar5 == '\0') {
                  lVar1 = *(long *)&(pCVar12->fields).EnableAI;
                  if (lVar1 == 0) goto label_042fee19;
                  pCVar6 = *(Characters_BaseTitan_o **)&(pCVar12->fields)._currentFallTotalTime;
                  method_00 = *(MethodInfo **)(lVar1 + 0x60);
                  bVar5 = System_String__op_Equality
                                    ((System_String_o *)pCVar6,(System_String_o *)method_00,(MethodInfo *)0x0)
                  ;
                  pSVar8 = (System_Collections_Generic_Dictionary_string__float__o *)
                           CONCAT44(extraout_var_10,bVar5);
                  if ((char)bVar5 == '\0') {
                    lVar1 = *(long *)&(pCVar12->fields).EnableAI;
                    if (lVar1 == 0) goto label_042fee19;
                    pCVar6 = *(Characters_BaseTitan_o **)&(pCVar12->fields)._currentFallTotalTime;
                    method_00 = *(MethodInfo **)(lVar1 + 0x68);
                    bVar5 = System_String__op_Equality
                                      ((System_String_o *)pCVar6,(System_String_o *)method_00,
                                       (MethodInfo *)0x0);
                    pSVar8 = (System_Collections_Generic_Dictionary_string__float__o *)
                             CONCAT44(extraout_var_11,bVar5);
                    if ((char)bVar5 == '\0') {
                      lVar1 = *(long *)&(pCVar12->fields).EnableAI;
                      if (lVar1 == 0) goto label_042fee19;
                      pCVar6 = *(Characters_BaseTitan_o **)&(pCVar12->fields)._currentFallTotalTime;
                      method_00 = *(MethodInfo **)(lVar1 + 0x70);
                      bVar5 = System_String__op_Equality
                                        ((System_String_o *)pCVar6,(System_String_o *)method_00,
                                         (MethodInfo *)0x0);
                      if ((char)bVar5 != '\0') {
                        if (fVar13 <= 0.27) {
                          return (System_Collections_Generic_Dictionary_string__float__o *)
                                 CONCAT44(extraout_var_12,bVar5);
                        }
                        if ((pCVar12->fields)._startPosition.fields.z != 0.0) {
                          return (System_Collections_Generic_Dictionary_string__float__o *)
                                 CONCAT44(extraout_var_12,bVar5);
                        }
                        (pCVar12->fields)._startPosition.fields.z = 1.4013e-45;
                        pSVar2 = (pCVar12->fields).AttackAnimations;
                        if (pSVar2 == (System_Collections_Generic_Dictionary_string__string__o *)0x0)
                        goto label_042fee19;
                        pCVar10 = (Characters_BaseHitbox_o *)pSVar2[1].fields._keys;
                        method_00 = (pCVar12->klass->vtable)._167_GetHitboxTime.method;
                        fVar13 = (float)(*(pCVar12->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3dcccccd);
                        pCVar6 = pCVar12;
                        goto joined_r0x042fed9c;
                      }
                      lVar1 = *(long *)&(pCVar12->fields).EnableAI;
                      if (lVar1 == 0) goto label_042fee19;
                      pCVar6 = *(Characters_BaseTitan_o **)&(pCVar12->fields)._currentFallTotalTime;
                      method_00 = *(MethodInfo **)(lVar1 + 0x78);
                      bVar5 = System_String__op_Equality
                                        ((System_String_o *)pCVar6,(System_String_o *)method_00,
                                         (MethodInfo *)0x0);
                      pSVar8 = (System_Collections_Generic_Dictionary_string__float__o *)
                               CONCAT44(extraout_var_13,bVar5);
                      if ((char)bVar5 == '\0') {
                        lVar1 = *(long *)&(pCVar12->fields).EnableAI;
                        if (lVar1 == 0) goto label_042fee19;
                        pCVar6 = *(Characters_BaseTitan_o **)&(pCVar12->fields)._currentFallTotalTime;
                        method_00 = *(MethodInfo **)(lVar1 + 0x80);
                        bVar5 = System_String__op_Equality
                                          ((System_String_o *)pCVar6,(System_String_o *)method_00,
                                           (MethodInfo *)0x0);
                        pSVar8 = (System_Collections_Generic_Dictionary_string__float__o *)
                                 CONCAT44(extraout_var_14,bVar5);
                        if ((char)bVar5 == '\0') {
                          return pSVar8;
                        }
                        if (fVar13 <= 0.28) {
                          return pSVar8;
                        }
                        goto label_042fec53;
                      }
                      if (fVar13 <= 0.28) {
                        return pSVar8;
                      }
                    }
                    else if (fVar13 <= 0.31) {
                      return pSVar8;
                    }
                    if ((pCVar12->fields)._startPosition.fields.z != 0.0) {
                      return pSVar8;
                    }
                    (pCVar12->fields)._startPosition.fields.z = 1.4013e-45;
                    pSVar2 = (pCVar12->fields).AttackAnimations;
                    if (pSVar2 == (System_Collections_Generic_Dictionary_string__string__o *)0x0)
                    goto label_042fee19;
                    pCVar10 = (Characters_BaseHitbox_o *)pSVar2[1].fields._keys;
                  }
                  else {
                    if (fVar13 <= 0.31) {
                      return pSVar8;
                    }
label_042fec53:
                    if ((pCVar12->fields)._startPosition.fields.z != 0.0) {
                      return pSVar8;
                    }
                    (pCVar12->fields)._startPosition.fields.z = 1.4013e-45;
                    pSVar2 = (pCVar12->fields).AttackAnimations;
                    if (pSVar2 == (System_Collections_Generic_Dictionary_string__string__o *)0x0)
                    goto label_042fee19;
                    pCVar10 = (Characters_BaseHitbox_o *)pSVar2[1].fields._values;
                  }
                  method_00 = (pCVar12->klass->vtable)._167_GetHitboxTime.method;
                  fVar13 = (float)(*(pCVar12->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3d4ccccd);
                  pCVar6 = pCVar12;
                  goto joined_r0x042fed9c;
                }
                if (fVar13 <= 0.31) {
                  return (System_Collections_Generic_Dictionary_string__float__o *)
                         CONCAT44(extraout_var_09,bVar5);
                }
                if ((pCVar12->fields)._startPosition.fields.z != 0.0) {
                  return (System_Collections_Generic_Dictionary_string__float__o *)
                         CONCAT44(extraout_var_09,bVar5);
                }
                (pCVar12->fields)._startPosition.fields.z = 1.4013e-45;
                pSVar2 = (pCVar12->fields).AttackAnimations;
                if (pSVar2 == (System_Collections_Generic_Dictionary_string__string__o *)0x0)
                goto label_042fee19;
                pCVar10 = (Characters_BaseHitbox_o *)pSVar2[1].fields._keys;
              }
              else {
                if (fVar13 <= 0.31) {
                  return (System_Collections_Generic_Dictionary_string__float__o *)
                         CONCAT44(extraout_var_08,bVar5);
                }
                if ((pCVar12->fields)._startPosition.fields.z != 0.0) {
                  return (System_Collections_Generic_Dictionary_string__float__o *)
                         CONCAT44(extraout_var_08,bVar5);
                }
                (pCVar12->fields)._startPosition.fields.z = 1.4013e-45;
                pSVar2 = (pCVar12->fields).AttackAnimations;
                if (pSVar2 == (System_Collections_Generic_Dictionary_string__string__o *)0x0)
                goto label_042fee19;
                pCVar10 = (Characters_BaseHitbox_o *)pSVar2[1].fields._values;
              }
              method_00 = (pCVar12->klass->vtable)._167_GetHitboxTime.method;
              fVar13 = (float)(*(pCVar12->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3d23d70a);
              pCVar6 = pCVar12;
              goto joined_r0x042fed9c;
            }
            if (fVar13 <= 0.45) {
              return (System_Collections_Generic_Dictionary_string__float__o *)CONCAT44(extraout_var_05,bVar5)
              ;
            }
            if ((pCVar12->fields)._startPosition.fields.z != 0.0) {
              return (System_Collections_Generic_Dictionary_string__float__o *)CONCAT44(extraout_var_05,bVar5)
              ;
            }
            (pCVar12->fields)._startPosition.fields.z = 1.4013e-45;
            pSVar2 = (pCVar12->fields).AttackAnimations;
            if (pSVar2 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_042fee19;
            pSVar9 = (System_Collections_Generic_Dictionary_string__string__c *)pSVar2[1].fields._keys;
          }
          else {
            if (fVar13 <= 0.41) {
              return pSVar8;
            }
label_042fe9b0:
            if ((pCVar12->fields)._startPosition.fields.z != 0.0) {
              return pSVar8;
            }
            (pCVar12->fields)._startPosition.fields.z = 1.4013e-45;
            pSVar2 = (pCVar12->fields).AttackAnimations;
            if (pSVar2 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_042fee19;
            pSVar9 = (System_Collections_Generic_Dictionary_string__string__c *)pSVar2[1].fields._values;
          }
          method_00 = (pCVar12->klass->vtable)._167_GetHitboxTime.method;
          pCVar6 = pCVar12;
          fVar13 = (float)(*(pCVar12->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3e3851ec);
        }
        else {
          if (fVar13 <= 0.47) {
            return pSVar8;
          }
label_042fe47f:
          if ((pCVar12->fields)._startPosition.fields.z != 0.0) {
            return pSVar8;
          }
          (pCVar12->fields)._startPosition.fields.z = 1.4013e-45;
          pSVar2 = (pCVar12->fields).AttackAnimations;
          if (pSVar2 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_042fee19;
          pSVar9 = (System_Collections_Generic_Dictionary_string__string__c *)pSVar2[1].fields._values;
label_042fe4af:
          method_00 = (pCVar12->klass->vtable)._167_GetHitboxTime.method;
          pCVar6 = pCVar12;
          fVar13 = (float)(*(pCVar12->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3db851ec);
        }
      }
      else {
        if (fVar13 <= 0.395) {
          return (System_Collections_Generic_Dictionary_string__float__o *)CONCAT44(extraout_var,bVar5);
        }
        if ((pCVar12->fields)._startPosition.fields.z != 0.0) {
          return (System_Collections_Generic_Dictionary_string__float__o *)CONCAT44(extraout_var,bVar5);
        }
        (pCVar12->fields)._startPosition.fields.z = 1.4013e-45;
        pSVar2 = (pCVar12->fields).AttackAnimations;
        if (pSVar2 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_042fee19;
        pSVar9 = pSVar2[2].klass;
        method_00 = (pCVar12->klass->vtable)._167_GetHitboxTime.method;
        pCVar6 = pCVar12;
        fVar13 = (float)(*(pCVar12->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3df5c28f);
      }
    }
    else {
      fVar14 = (pCVar12->fields)._startPosition.fields.z;
      if ((fVar13 <= 0.222) || (fVar14 != 0.0)) {
        if ((fVar13 <= 0.386) || (fVar14 != 1.4013e-45)) {
          if (fVar13 <= 0.612) {
            return (System_Collections_Generic_Dictionary_string__float__o *)(ulong)(uint)fVar14;
          }
          if (fVar14 != 2.8026e-45) {
            return (System_Collections_Generic_Dictionary_string__float__o *)(ulong)(uint)fVar14;
          }
          (pCVar12->fields)._startPosition.fields.z = 4.2039e-45;
          pSVar2 = (pCVar12->fields).AttackAnimations;
          if (pSVar2 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_042fee19;
          pSVar9 = pSVar2[2].klass;
          method_00 = (pCVar12->klass->vtable)._167_GetHitboxTime.method;
          pCVar6 = pCVar12;
          fVar13 = (float)(*(pCVar12->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3d23d70a);
          goto joined_r0x042fe570;
        }
        (pCVar12->fields)._startPosition.fields.z = 2.8026e-45;
        pSVar2 = (pCVar12->fields).AttackAnimations;
        if (pSVar2 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_042fee19;
        pCVar10 = (Characters_BaseHitbox_o *)pSVar2[1].fields._values;
        method_00 = (pCVar12->klass->vtable)._167_GetHitboxTime.method;
        pCVar6 = pCVar12;
        fVar13 = (float)(*(pCVar12->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3d8f5c29);
        goto joined_r0x042fe402;
      }
      (pCVar12->fields)._startPosition.fields.z = 1.4013e-45;
      pSVar2 = (pCVar12->fields).AttackAnimations;
      if (pSVar2 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_042fee19;
      pSVar9 = (System_Collections_Generic_Dictionary_string__string__c *)pSVar2[1].fields._values;
      method_00 = (pCVar12->klass->vtable)._167_GetHitboxTime.method;
      pCVar6 = pCVar12;
      fVar13 = (float)(*(pCVar12->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3d23d70a);
    }
  }
  else {
    fVar14 = (pCVar12->fields)._startPosition.fields.z;
    if ((fVar13 <= 0.155) || (fVar14 != 0.0)) {
      if ((fVar13 <= 0.32) || (fVar14 != 1.4013e-45)) {
        if (fVar13 <= 0.59) {
          return (System_Collections_Generic_Dictionary_string__float__o *)(ulong)(uint)fVar14;
        }
        if (fVar14 != 2.8026e-45) {
          return (System_Collections_Generic_Dictionary_string__float__o *)(ulong)(uint)fVar14;
        }
        (pCVar12->fields)._startPosition.fields.z = 4.2039e-45;
        pSVar2 = (pCVar12->fields).AttackAnimations;
        if (pSVar2 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_042fee19;
        pSVar9 = pSVar2[2].klass;
        method_00 = (pCVar12->klass->vtable)._167_GetHitboxTime.method;
        pCVar6 = pCVar12;
        fVar13 = (float)(*(pCVar12->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3d4ccccd);
joined_r0x042fe570:
        if (pSVar9 != (System_Collections_Generic_Dictionary_string__string__c *)0x0) {
          Characters_BaseHitbox__Activate((Characters_BaseHitbox_o *)pSVar9,0.0,fVar13,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_TitanSounds + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar11 = *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x28);
          goto label_042fe509;
        }
        goto label_042fee19;
      }
      (pCVar12->fields)._startPosition.fields.z = 2.8026e-45;
      pSVar2 = (pCVar12->fields).AttackAnimations;
      if (pSVar2 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_042fee19;
      pCVar10 = (Characters_BaseHitbox_o *)pSVar2[1].fields._syncRoot;
      method_00 = (pCVar12->klass->vtable)._167_GetHitboxTime.method;
      pCVar6 = pCVar12;
      fVar13 = (float)(*(pCVar12->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3d75c28f);
joined_r0x042fe402:
      if (pCVar10 != (Characters_BaseHitbox_o *)0x0) {
        Characters_BaseHitbox__Activate(pCVar10,0.0,fVar13,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_TitanSounds + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar11 = *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x20);
        goto label_042fe509;
      }
      goto label_042fee19;
    }
    (pCVar12->fields)._startPosition.fields.z = 1.4013e-45;
    pSVar2 = (pCVar12->fields).AttackAnimations;
    if (pSVar2 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_042fee19;
    pSVar9 = pSVar2[2].klass;
    method_00 = (pCVar12->klass->vtable)._167_GetHitboxTime.method;
    pCVar6 = pCVar12;
    fVar13 = (float)(*(pCVar12->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3d8f5c29);
  }
joined_r0x042fe9fe:
  if (pSVar9 != (System_Collections_Generic_Dictionary_string__string__c *)0x0) {
    Characters_BaseHitbox__Activate((Characters_BaseHitbox_o *)pSVar9,0.0,fVar13,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_TitanSounds + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar11 = *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x18);
label_042fe509:
    Characters_BaseCharacter__PlaySound((Characters_BaseCharacter_o *)pCVar12,pSVar11,(MethodInfo *)0x0);
    return extraout_RAX;
  }
label_042fee19:
  fVar13 = (float)il2cpp_runtime_helper_022b2c90();
  pCVar12 = pCVar6;
  if (g_data_057adf18 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ShifterSounds);
    pCVar12 = (Characters_BaseTitan_o *)&MethodInfo_Boolean_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057adf18 = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
  if ((lVar1 != 0) &&
     (pSVar8 = *(System_Collections_Generic_Dictionary_string__float__o **)(lVar1 + 0x40),
     pSVar8 != (System_Collections_Generic_Dictionary_string__float__o *)0x0)) {
    if (*(char *)((long)&(pSVar8->fields)._buckets + 1) != '\0') {
      bVar5 = Utility_RandomGen__Roll(fVar13,(MethodInfo *)0x0);
      pSVar8 = (System_Collections_Generic_Dictionary_string__float__o *)CONCAT44(extraout_var_15,bVar5);
      if ((char)bVar5 != '\0') {
        if (*(int *)(TypeInfo_ShifterSounds + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        Characters_BaseCharacter__PlaySound
                  ((Characters_BaseCharacter_o *)pCVar6,
                   *(System_String_o **)(*(long *)(TypeInfo_ShifterSounds + 0xb8) + 0x18),(MethodInfo *)0x0);
        return extraout_RAX_01;
      }
    }
    return pSVar8;
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar6 = pCVar12;
  if (g_data_057adf19 == '\0') {
    pCVar6 = (Characters_BaseTitan_o *)&"AttackComboBlind";
    il2cpp_runtime_helper_023445d0();
    g_data_057adf19 = '\x01';
  }
  lVar1 = *(long *)&(pCVar12->fields).EnableAI;
  if (lVar1 != 0) {
    bVar5 = System_String__op_Inequality
                      (*(System_String_o **)&(pCVar12->fields)._currentFallTotalTime,
                       *(System_String_o **)(lVar1 + 0x18),(MethodInfo *)0x0);
    pSVar8 = (System_Collections_Generic_Dictionary_string__float__o *)CONCAT44(extraout_var_16,bVar5);
    if (((char)bVar5 != '\0') && ((pCVar12->fields)._jumpDirection.fields.x <= 0.0)) {
      (*(pCVar12->klass->vtable)._168_DamagedGrunt.methodPtr)
                (0x3f800000,pCVar12,(pCVar12->klass->vtable)._168_DamagedGrunt.method);
      (*(pCVar12->klass->vtable)._128_Attack.methodPtr)
                (pCVar12,"AttackComboBlind",(pCVar12->klass->vtable)._128_Attack.method);
      pSVar8 = (System_Collections_Generic_Dictionary_string__float__o *)
               (*(pCVar12->klass->vtable)._118_get_DisableCooldown.methodPtr)
                         (pCVar12,(pCVar12->klass->vtable)._118_get_DisableCooldown.method);
      (pCVar12->fields)._jumpDirection.fields.x = extraout_XMM0_Da + 2.0;
    }
    return pSVar8;
  }
  il2cpp_runtime_helper_022b2c90();
  *(undefined1 *)((long)&(pCVar6->fields)._previousCoreLocalPosition.fields.y + 1) = 1;
  (pCVar6->fields)._furthestCoreLocalPosition.fields.z = 2.0;
  Characters_BaseTitan___ctor(pCVar6,method_00);
  return extraout_RAX_02;
}


// Characters.AnnieShifter$$UpdateAttack
// il2cpp: void Characters_AnnieShifter__UpdateAttack (Characters_AnnieShifter_o* __this, const MethodInfo* method);
// 0x42fe0e0

void Characters_AnnieShifter__UpdateAttack(Characters_AnnieShifter_o *__this,MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_Dictionary_string__string__o *pSVar2;
  System_Action_Hashtable__o *pSVar3;
  UnityEngine_Transform_o *pUVar4;
  bool_conflict bVar5;
  System_Collections_Generic_Dictionary_string__string__c *pSVar6;
  Characters_BaseHitbox_o *pCVar7;
  System_String_o *pSVar8;
  MethodInfo *method_00;
  Characters_AnnieShifter_o *pCVar9;
  Characters_AnnieShifter_o *pCVar10;
  float fVar11;
  float fVar12;
  UnityEngine_Quaternion_o rotation;
  UnityEngine_Vector3_o UVar13;
  UnityEngine_Vector3_o UVar14;
  undefined8 uStack_58;
  float fStack_38;
  
  if (g_data_057adf17 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057adf17 = '\x01';
  }
  method_00 = (__this->klass->vtable)._166_GetAnimationTime.method;
  pCVar10 = __this;
  fVar11 = (float)(*(__this->klass->vtable)._166_GetAnimationTime.methodPtr)();
  lVar1 = *(long *)&(__this->fields).EnableAI;
  if (lVar1 == 0) goto label_042fee19;
  pCVar10 = *(Characters_AnnieShifter_o **)&(__this->fields)._currentFallTotalTime;
  method_00 = *(MethodInfo **)(lVar1 + 0x10);
  bVar5 = System_String__op_Equality
                    ((System_String_o *)pCVar10,(System_String_o *)method_00,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    lVar1 = *(long *)&(__this->fields).EnableAI;
    if (lVar1 == 0) goto label_042fee19;
    pCVar10 = *(Characters_AnnieShifter_o **)&(__this->fields)._currentFallTotalTime;
    method_00 = *(MethodInfo **)(lVar1 + 0x18);
    bVar5 = System_String__op_Equality
                      ((System_String_o *)pCVar10,(System_String_o *)method_00,(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') {
      lVar1 = *(long *)&(__this->fields).EnableAI;
      if (lVar1 == 0) goto label_042fee19;
      pCVar10 = *(Characters_AnnieShifter_o **)&(__this->fields)._currentFallTotalTime;
      method_00 = *(MethodInfo **)(lVar1 + 0x88);
      bVar5 = System_String__op_Equality
                        ((System_String_o *)pCVar10,(System_String_o *)method_00,(MethodInfo *)0x0);
      if ((char)bVar5 == '\0') {
        lVar1 = *(long *)&(__this->fields).EnableAI;
        if (lVar1 == 0) goto label_042fee19;
        pCVar10 = *(Characters_AnnieShifter_o **)&(__this->fields)._currentFallTotalTime;
        method_00 = *(MethodInfo **)(lVar1 + 0x20);
        bVar5 = System_String__op_Equality
                          ((System_String_o *)pCVar10,(System_String_o *)method_00,(MethodInfo *)0x0);
        if ((char)bVar5 == '\0') {
          lVar1 = *(long *)&(__this->fields).EnableAI;
          if (lVar1 == 0) goto label_042fee19;
          pCVar10 = *(Characters_AnnieShifter_o **)&(__this->fields)._currentFallTotalTime;
          method_00 = *(MethodInfo **)(lVar1 + 0x90);
          bVar5 = System_String__op_Equality
                            ((System_String_o *)pCVar10,(System_String_o *)method_00,(MethodInfo *)0x0);
          if ((char)bVar5 != '\0') {
            fVar12 = (__this->fields)._startPosition.fields.z;
            if ((0.24 < fVar11) && (fVar12 == 0.0)) {
              (__this->fields)._startPosition.fields.z = 1.4013e-45;
              pSVar2 = (__this->fields).AttackAnimations;
              if (pSVar2 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_042fee19;
              pCVar7 = (Characters_BaseHitbox_o *)pSVar2[1].fields._syncRoot;
              method_00 = (__this->klass->vtable)._167_GetHitboxTime.method;
              fVar11 = (float)(*(__this->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3db851ec);
              pCVar10 = __this;
              if (pCVar7 == (Characters_BaseHitbox_o *)0x0) goto label_042fee19;
              goto label_042fe641;
            }
            if (fVar11 <= 0.33) {
              return;
            }
            if (fVar12 != 1.4013e-45) {
              return;
            }
            pSVar3 = (__this->fields).OnPlayerPropertiesChanged;
            if ((pSVar3 != (System_Action_Hashtable__o *)0x0) &&
               (pCVar10 = (Characters_AnnieShifter_o *)pSVar3[1].fields.invoke_impl,
               pCVar10 != (Characters_AnnieShifter_o *)0x0)) {
              method_00 = (MethodInfo *)0x0;
              pCVar9 = (Characters_AnnieShifter_o *)
                       UnityEngine_Component__get_transform
                                 ((UnityEngine_Component_o *)pCVar10,(MethodInfo *)0x0);
              if (pCVar9 != (Characters_AnnieShifter_o *)0x0) {
                method_00 = (MethodInfo *)0x0;
                UVar13 = UnityEngine_Transform__get_position
                                   ((UnityEngine_Transform_o *)pCVar9,(MethodInfo *)0x0);
                pSVar3 = (__this->fields).OnPlayerPropertiesChanged;
                pCVar10 = pCVar9;
                if (pSVar3 != (System_Action_Hashtable__o *)0x0) {
                  pUVar4 = (UnityEngine_Transform_o *)(pSVar3->fields).method_ptr;
                  pCVar10 = (Characters_AnnieShifter_o *)0x0;
                  if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                    method_00 = (MethodInfo *)0x0;
                    UVar14 = UnityEngine_Transform__get_position(pUVar4,(MethodInfo *)0x0);
                    if ((TypeInfo_EffectPrefabs->fields)._stepPhase == 0) {
                      il2cpp_runtime_helper_02337ed0(UVar14.fields.x,UVar14.fields.z);
                    }
                    pSVar3 = (__this->fields).OnPlayerPropertiesChanged;
                    pCVar10 = TypeInfo_EffectPrefabs;
                    if ((pSVar3 != (System_Action_Hashtable__o *)0x0) &&
                       (pUVar4 = (UnityEngine_Transform_o *)(pSVar3->fields).method_ptr,
                       pCVar10 = TypeInfo_EffectPrefabs, pUVar4 != (UnityEngine_Transform_o *)0x0)) {
                      fStack_38 = UVar13.fields.x;
                      pSVar8 = (System_String_o *)(((TypeInfo_EffectPrefabs->fields).MovementSync)->fields)._rigidbody;
                      rotation = UnityEngine_Transform__get_rotation(pUVar4,(MethodInfo *)0x0);
                      fVar11 = *(float *)((long)&(__this->fields).TitanColliderToggler + 4);
                      fVar12 = (float)(*(__this->klass->vtable)._117_get_SizeMultiplier.methodPtr)
                                                (__this,(__this->klass->vtable)._117_get_SizeMultiplier.method
                                                );
                      UVar13.fields.x = fStack_38;
                      UVar13.fields.y = UVar14.fields.y;
                      Effects_EffectSpawner__Spawn
                                (pSVar8,UVar13,rotation,fVar11 * fVar12,1,(System_Object_array *)0x0,
                                 (MethodInfo *)0x0);
                      (*(__this->klass->vtable)._173_SpawnShatter.methodPtr)
                                (fStack_38,UVar13.fields.z,__this,
                                 (__this->klass->vtable)._173_SpawnShatter.method);
                      (__this->fields)._startPosition.fields.z = 2.8026e-45;
                      return;
                    }
                  }
                }
              }
            }
            goto label_042fee19;
          }
          lVar1 = *(long *)&(__this->fields).EnableAI;
          if (lVar1 == 0) goto label_042fee19;
          pCVar10 = *(Characters_AnnieShifter_o **)&(__this->fields)._currentFallTotalTime;
          method_00 = *(MethodInfo **)(lVar1 + 0x98);
          bVar5 = System_String__op_Equality
                            ((System_String_o *)pCVar10,(System_String_o *)method_00,(MethodInfo *)0x0);
          if ((char)bVar5 != '\0') {
            if (fVar11 <= 0.26) {
              return;
            }
            if ((__this->fields)._startPosition.fields.z != 0.0) {
              return;
            }
            (__this->fields)._startPosition.fields.z = 1.4013e-45;
            pSVar2 = (__this->fields).AttackAnimations;
            if (pSVar2 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_042fee19;
            pCVar9 = (Characters_AnnieShifter_o *)pSVar2[1].fields._keys;
            method_00 = (__this->klass->vtable)._167_GetHitboxTime.method;
            pCVar10 = __this;
            fVar11 = (float)(*(__this->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3da3d70a);
            if (pCVar9 == (Characters_AnnieShifter_o *)0x0) goto label_042fee19;
            method_00 = (MethodInfo *)0x0;
            Characters_BaseHitbox__Activate((Characters_BaseHitbox_o *)pCVar9,0.0,fVar11,(MethodInfo *)0x0);
            pSVar2 = (__this->fields).AttackAnimations;
            pCVar10 = pCVar9;
            if (pSVar2 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_042fee19;
            pSVar6 = (System_Collections_Generic_Dictionary_string__string__c *)pSVar2[1].fields._values;
            method_00 = (__this->klass->vtable)._167_GetHitboxTime.method;
            pCVar10 = __this;
            fVar11 = (float)(*(__this->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3da3d70a);
            goto joined_r0x042fe9fe;
          }
          lVar1 = *(long *)&(__this->fields).EnableAI;
          if (lVar1 == 0) goto label_042fee19;
          pCVar10 = *(Characters_AnnieShifter_o **)&(__this->fields)._currentFallTotalTime;
          method_00 = *(MethodInfo **)(lVar1 + 0xa0);
          bVar5 = System_String__op_Equality
                            ((System_String_o *)pCVar10,(System_String_o *)method_00,(MethodInfo *)0x0);
          if ((char)bVar5 != '\0') {
            if (fVar11 <= 0.27) {
              return;
            }
            if ((__this->fields)._startPosition.fields.z != 0.0) {
              return;
            }
            (__this->fields)._startPosition.fields.z = 1.4013e-45;
            pSVar2 = (__this->fields).AttackAnimations;
            if (pSVar2 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_042fee19;
            pCVar7 = (Characters_BaseHitbox_o *)pSVar2[1].fields._comparer;
            method_00 = (__this->klass->vtable)._167_GetHitboxTime.method;
            fVar11 = (float)(*(__this->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3df5c28f);
            pCVar10 = __this;
joined_r0x042fed9c:
            if (pCVar7 != (Characters_BaseHitbox_o *)0x0) {
label_042fe641:
              Characters_BaseHitbox__Activate(pCVar7,0.0,fVar11,(MethodInfo *)0x0);
              return;
            }
            goto label_042fee19;
          }
          lVar1 = *(long *)&(__this->fields).EnableAI;
          if (lVar1 == 0) goto label_042fee19;
          pCVar10 = *(Characters_AnnieShifter_o **)&(__this->fields)._currentFallTotalTime;
          method_00 = *(MethodInfo **)(lVar1 + 0x28);
          bVar5 = System_String__op_Equality
                            ((System_String_o *)pCVar10,(System_String_o *)method_00,(MethodInfo *)0x0);
          if ((char)bVar5 == '\0') {
            lVar1 = *(long *)&(__this->fields).EnableAI;
            if (lVar1 == 0) goto label_042fee19;
            pCVar10 = *(Characters_AnnieShifter_o **)&(__this->fields)._currentFallTotalTime;
            method_00 = *(MethodInfo **)(lVar1 + 0x30);
            bVar5 = System_String__op_Equality
                              ((System_String_o *)pCVar10,(System_String_o *)method_00,(MethodInfo *)0x0);
            if ((char)bVar5 != '\0') {
              if (fVar11 <= 0.45) {
                return;
              }
              goto label_042fe9b0;
            }
            lVar1 = *(long *)&(__this->fields).EnableAI;
            if (lVar1 == 0) goto label_042fee19;
            pCVar10 = *(Characters_AnnieShifter_o **)&(__this->fields)._currentFallTotalTime;
            method_00 = *(MethodInfo **)(lVar1 + 0x38);
            bVar5 = System_String__op_Equality
                              ((System_String_o *)pCVar10,(System_String_o *)method_00,(MethodInfo *)0x0);
            if ((char)bVar5 == '\0') {
              lVar1 = *(long *)&(__this->fields).EnableAI;
              if (lVar1 == 0) goto label_042fee19;
              pCVar10 = *(Characters_AnnieShifter_o **)&(__this->fields)._currentFallTotalTime;
              method_00 = *(MethodInfo **)(lVar1 + 0x40);
              bVar5 = System_String__op_Equality
                                ((System_String_o *)pCVar10,(System_String_o *)method_00,(MethodInfo *)0x0);
              if ((char)bVar5 != '\0') {
                if (fVar11 <= 0.42) {
                  return;
                }
                if ((__this->fields)._startPosition.fields.z != 0.0) {
                  return;
                }
                (__this->fields)._startPosition.fields.z = 1.4013e-45;
                pSVar2 = (__this->fields).AttackAnimations;
                if (pSVar2 == (System_Collections_Generic_Dictionary_string__string__o *)0x0)
                goto label_042fee19;
                pSVar6 = (System_Collections_Generic_Dictionary_string__string__c *)pSVar2[1].fields._keys;
                goto label_042fe4af;
              }
              lVar1 = *(long *)&(__this->fields).EnableAI;
              if (lVar1 == 0) goto label_042fee19;
              pCVar10 = *(Characters_AnnieShifter_o **)&(__this->fields)._currentFallTotalTime;
              method_00 = *(MethodInfo **)(lVar1 + 0x48);
              bVar5 = System_String__op_Equality
                                ((System_String_o *)pCVar10,(System_String_o *)method_00,(MethodInfo *)0x0);
              if ((char)bVar5 != '\0') {
                if (fVar11 <= 0.42) {
                  return;
                }
                goto label_042fe47f;
              }
              lVar1 = *(long *)&(__this->fields).EnableAI;
              if (lVar1 == 0) goto label_042fee19;
              pCVar10 = *(Characters_AnnieShifter_o **)&(__this->fields)._currentFallTotalTime;
              method_00 = *(MethodInfo **)(lVar1 + 0x50);
              bVar5 = System_String__op_Equality
                                ((System_String_o *)pCVar10,(System_String_o *)method_00,(MethodInfo *)0x0);
              if ((char)bVar5 == '\0') {
                lVar1 = *(long *)&(__this->fields).EnableAI;
                if (lVar1 == 0) goto label_042fee19;
                pCVar10 = *(Characters_AnnieShifter_o **)&(__this->fields)._currentFallTotalTime;
                method_00 = *(MethodInfo **)(lVar1 + 0x58);
                bVar5 = System_String__op_Equality
                                  ((System_String_o *)pCVar10,(System_String_o *)method_00,(MethodInfo *)0x0);
                if ((char)bVar5 == '\0') {
                  lVar1 = *(long *)&(__this->fields).EnableAI;
                  if (lVar1 == 0) goto label_042fee19;
                  pCVar10 = *(Characters_AnnieShifter_o **)&(__this->fields)._currentFallTotalTime;
                  method_00 = *(MethodInfo **)(lVar1 + 0x60);
                  bVar5 = System_String__op_Equality
                                    ((System_String_o *)pCVar10,(System_String_o *)method_00,(MethodInfo *)0x0
                                    );
                  if ((char)bVar5 == '\0') {
                    lVar1 = *(long *)&(__this->fields).EnableAI;
                    if (lVar1 == 0) goto label_042fee19;
                    pCVar10 = *(Characters_AnnieShifter_o **)&(__this->fields)._currentFallTotalTime;
                    method_00 = *(MethodInfo **)(lVar1 + 0x68);
                    bVar5 = System_String__op_Equality
                                      ((System_String_o *)pCVar10,(System_String_o *)method_00,
                                       (MethodInfo *)0x0);
                    if ((char)bVar5 == '\0') {
                      lVar1 = *(long *)&(__this->fields).EnableAI;
                      if (lVar1 == 0) goto label_042fee19;
                      pCVar10 = *(Characters_AnnieShifter_o **)&(__this->fields)._currentFallTotalTime;
                      method_00 = *(MethodInfo **)(lVar1 + 0x70);
                      bVar5 = System_String__op_Equality
                                        ((System_String_o *)pCVar10,(System_String_o *)method_00,
                                         (MethodInfo *)0x0);
                      if ((char)bVar5 != '\0') {
                        if (fVar11 <= 0.27) {
                          return;
                        }
                        if ((__this->fields)._startPosition.fields.z != 0.0) {
                          return;
                        }
                        (__this->fields)._startPosition.fields.z = 1.4013e-45;
                        pSVar2 = (__this->fields).AttackAnimations;
                        if (pSVar2 == (System_Collections_Generic_Dictionary_string__string__o *)0x0)
                        goto label_042fee19;
                        pCVar7 = (Characters_BaseHitbox_o *)pSVar2[1].fields._keys;
                        method_00 = (__this->klass->vtable)._167_GetHitboxTime.method;
                        fVar11 = (float)(*(__this->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3dcccccd);
                        pCVar10 = __this;
                        goto joined_r0x042fed9c;
                      }
                      lVar1 = *(long *)&(__this->fields).EnableAI;
                      if (lVar1 == 0) goto label_042fee19;
                      pCVar10 = *(Characters_AnnieShifter_o **)&(__this->fields)._currentFallTotalTime;
                      method_00 = *(MethodInfo **)(lVar1 + 0x78);
                      bVar5 = System_String__op_Equality
                                        ((System_String_o *)pCVar10,(System_String_o *)method_00,
                                         (MethodInfo *)0x0);
                      if ((char)bVar5 == '\0') {
                        lVar1 = *(long *)&(__this->fields).EnableAI;
                        if (lVar1 == 0) goto label_042fee19;
                        pCVar10 = *(Characters_AnnieShifter_o **)&(__this->fields)._currentFallTotalTime;
                        method_00 = *(MethodInfo **)(lVar1 + 0x80);
                        bVar5 = System_String__op_Equality
                                          ((System_String_o *)pCVar10,(System_String_o *)method_00,
                                           (MethodInfo *)0x0);
                        if ((char)bVar5 == '\0') {
                          return;
                        }
                        if (fVar11 <= 0.28) {
                          return;
                        }
                        goto label_042fec53;
                      }
                      if (fVar11 <= 0.28) {
                        return;
                      }
                    }
                    else if (fVar11 <= 0.31) {
                      return;
                    }
                    if ((__this->fields)._startPosition.fields.z != 0.0) {
                      return;
                    }
                    (__this->fields)._startPosition.fields.z = 1.4013e-45;
                    pSVar2 = (__this->fields).AttackAnimations;
                    if (pSVar2 == (System_Collections_Generic_Dictionary_string__string__o *)0x0)
                    goto label_042fee19;
                    pCVar7 = (Characters_BaseHitbox_o *)pSVar2[1].fields._keys;
                  }
                  else {
                    if (fVar11 <= 0.31) {
                      return;
                    }
label_042fec53:
                    if ((__this->fields)._startPosition.fields.z != 0.0) {
                      return;
                    }
                    (__this->fields)._startPosition.fields.z = 1.4013e-45;
                    pSVar2 = (__this->fields).AttackAnimations;
                    if (pSVar2 == (System_Collections_Generic_Dictionary_string__string__o *)0x0)
                    goto label_042fee19;
                    pCVar7 = (Characters_BaseHitbox_o *)pSVar2[1].fields._values;
                  }
                  method_00 = (__this->klass->vtable)._167_GetHitboxTime.method;
                  fVar11 = (float)(*(__this->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3d4ccccd);
                  pCVar10 = __this;
                  goto joined_r0x042fed9c;
                }
                if (fVar11 <= 0.31) {
                  return;
                }
                if ((__this->fields)._startPosition.fields.z != 0.0) {
                  return;
                }
                (__this->fields)._startPosition.fields.z = 1.4013e-45;
                pSVar2 = (__this->fields).AttackAnimations;
                if (pSVar2 == (System_Collections_Generic_Dictionary_string__string__o *)0x0)
                goto label_042fee19;
                pCVar7 = (Characters_BaseHitbox_o *)pSVar2[1].fields._keys;
              }
              else {
                if (fVar11 <= 0.31) {
                  return;
                }
                if ((__this->fields)._startPosition.fields.z != 0.0) {
                  return;
                }
                (__this->fields)._startPosition.fields.z = 1.4013e-45;
                pSVar2 = (__this->fields).AttackAnimations;
                if (pSVar2 == (System_Collections_Generic_Dictionary_string__string__o *)0x0)
                goto label_042fee19;
                pCVar7 = (Characters_BaseHitbox_o *)pSVar2[1].fields._values;
              }
              method_00 = (__this->klass->vtable)._167_GetHitboxTime.method;
              fVar11 = (float)(*(__this->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3d23d70a);
              pCVar10 = __this;
              goto joined_r0x042fed9c;
            }
            if (fVar11 <= 0.45) {
              return;
            }
            if ((__this->fields)._startPosition.fields.z != 0.0) {
              return;
            }
            (__this->fields)._startPosition.fields.z = 1.4013e-45;
            pSVar2 = (__this->fields).AttackAnimations;
            if (pSVar2 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_042fee19;
            pSVar6 = (System_Collections_Generic_Dictionary_string__string__c *)pSVar2[1].fields._keys;
          }
          else {
            if (fVar11 <= 0.41) {
              return;
            }
label_042fe9b0:
            if ((__this->fields)._startPosition.fields.z != 0.0) {
              return;
            }
            (__this->fields)._startPosition.fields.z = 1.4013e-45;
            pSVar2 = (__this->fields).AttackAnimations;
            if (pSVar2 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_042fee19;
            pSVar6 = (System_Collections_Generic_Dictionary_string__string__c *)pSVar2[1].fields._values;
          }
          method_00 = (__this->klass->vtable)._167_GetHitboxTime.method;
          pCVar10 = __this;
          fVar11 = (float)(*(__this->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3e3851ec);
        }
        else {
          if (fVar11 <= 0.47) {
            return;
          }
label_042fe47f:
          if ((__this->fields)._startPosition.fields.z != 0.0) {
            return;
          }
          (__this->fields)._startPosition.fields.z = 1.4013e-45;
          pSVar2 = (__this->fields).AttackAnimations;
          if (pSVar2 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_042fee19;
          pSVar6 = (System_Collections_Generic_Dictionary_string__string__c *)pSVar2[1].fields._values;
label_042fe4af:
          method_00 = (__this->klass->vtable)._167_GetHitboxTime.method;
          pCVar10 = __this;
          fVar11 = (float)(*(__this->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3db851ec);
        }
      }
      else {
        if (fVar11 <= 0.395) {
          return;
        }
        if ((__this->fields)._startPosition.fields.z != 0.0) {
          return;
        }
        (__this->fields)._startPosition.fields.z = 1.4013e-45;
        pSVar2 = (__this->fields).AttackAnimations;
        if (pSVar2 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_042fee19;
        pSVar6 = pSVar2[2].klass;
        method_00 = (__this->klass->vtable)._167_GetHitboxTime.method;
        pCVar10 = __this;
        fVar11 = (float)(*(__this->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3df5c28f);
      }
    }
    else {
      fVar12 = (__this->fields)._startPosition.fields.z;
      if ((fVar11 <= 0.222) || (fVar12 != 0.0)) {
        if ((fVar11 <= 0.386) || (fVar12 != 1.4013e-45)) {
          if (fVar11 <= 0.612) {
            return;
          }
          if (fVar12 != 2.8026e-45) {
            return;
          }
          (__this->fields)._startPosition.fields.z = 4.2039e-45;
          pSVar2 = (__this->fields).AttackAnimations;
          if (pSVar2 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_042fee19;
          pSVar6 = pSVar2[2].klass;
          method_00 = (__this->klass->vtable)._167_GetHitboxTime.method;
          pCVar10 = __this;
          fVar11 = (float)(*(__this->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3d23d70a);
          goto joined_r0x042fe570;
        }
        (__this->fields)._startPosition.fields.z = 2.8026e-45;
        pSVar2 = (__this->fields).AttackAnimations;
        if (pSVar2 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_042fee19;
        pCVar7 = (Characters_BaseHitbox_o *)pSVar2[1].fields._values;
        method_00 = (__this->klass->vtable)._167_GetHitboxTime.method;
        pCVar10 = __this;
        fVar11 = (float)(*(__this->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3d8f5c29);
        goto joined_r0x042fe402;
      }
      (__this->fields)._startPosition.fields.z = 1.4013e-45;
      pSVar2 = (__this->fields).AttackAnimations;
      if (pSVar2 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_042fee19;
      pSVar6 = (System_Collections_Generic_Dictionary_string__string__c *)pSVar2[1].fields._values;
      method_00 = (__this->klass->vtable)._167_GetHitboxTime.method;
      pCVar10 = __this;
      fVar11 = (float)(*(__this->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3d23d70a);
    }
  }
  else {
    fVar12 = (__this->fields)._startPosition.fields.z;
    if ((fVar11 <= 0.155) || (fVar12 != 0.0)) {
      if ((fVar11 <= 0.32) || (fVar12 != 1.4013e-45)) {
        if (fVar11 <= 0.59) {
          return;
        }
        if (fVar12 != 2.8026e-45) {
          return;
        }
        (__this->fields)._startPosition.fields.z = 4.2039e-45;
        pSVar2 = (__this->fields).AttackAnimations;
        if (pSVar2 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_042fee19;
        pSVar6 = pSVar2[2].klass;
        method_00 = (__this->klass->vtable)._167_GetHitboxTime.method;
        pCVar10 = __this;
        fVar11 = (float)(*(__this->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3d4ccccd);
joined_r0x042fe570:
        if (pSVar6 != (System_Collections_Generic_Dictionary_string__string__c *)0x0) {
          Characters_BaseHitbox__Activate((Characters_BaseHitbox_o *)pSVar6,0.0,fVar11,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_TitanSounds + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar8 = *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x28);
          goto label_042fe509;
        }
        goto label_042fee19;
      }
      (__this->fields)._startPosition.fields.z = 2.8026e-45;
      pSVar2 = (__this->fields).AttackAnimations;
      if (pSVar2 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_042fee19;
      pCVar7 = (Characters_BaseHitbox_o *)pSVar2[1].fields._syncRoot;
      method_00 = (__this->klass->vtable)._167_GetHitboxTime.method;
      pCVar10 = __this;
      fVar11 = (float)(*(__this->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3d75c28f);
joined_r0x042fe402:
      if (pCVar7 != (Characters_BaseHitbox_o *)0x0) {
        Characters_BaseHitbox__Activate(pCVar7,0.0,fVar11,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_TitanSounds + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar8 = *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x20);
        goto label_042fe509;
      }
      goto label_042fee19;
    }
    (__this->fields)._startPosition.fields.z = 1.4013e-45;
    pSVar2 = (__this->fields).AttackAnimations;
    if (pSVar2 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_042fee19;
    pSVar6 = pSVar2[2].klass;
    method_00 = (__this->klass->vtable)._167_GetHitboxTime.method;
    pCVar10 = __this;
    fVar11 = (float)(*(__this->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3d8f5c29);
  }
joined_r0x042fe9fe:
  if (pSVar6 != (System_Collections_Generic_Dictionary_string__string__c *)0x0) {
    Characters_BaseHitbox__Activate((Characters_BaseHitbox_o *)pSVar6,0.0,fVar11,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_TitanSounds + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar8 = *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x18);
label_042fe509:
    Characters_BaseCharacter__PlaySound((Characters_BaseCharacter_o *)__this,pSVar8,(MethodInfo *)0x0);
    return;
  }
label_042fee19:
  fVar11 = (float)il2cpp_runtime_helper_022b2c90();
  pCVar9 = pCVar10;
  if (g_data_057adf18 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ShifterSounds);
    pCVar9 = (Characters_AnnieShifter_o *)&MethodInfo_Boolean_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057adf18 = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
  if ((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x40), lVar1 != 0)) {
    if ((*(char *)(lVar1 + 0x11) != '\0') &&
       (bVar5 = Utility_RandomGen__Roll(fVar11,(MethodInfo *)0x0), (char)bVar5 != '\0')) {
      if (*(int *)(TypeInfo_ShifterSounds + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      Characters_BaseCharacter__PlaySound
                ((Characters_BaseCharacter_o *)pCVar10,
                 *(System_String_o **)(*(long *)(TypeInfo_ShifterSounds + 0xb8) + 0x18),(MethodInfo *)0x0);
      return;
    }
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar10 = pCVar9;
  if (g_data_057adf19 == '\0') {
    pCVar10 = (Characters_AnnieShifter_o *)&"AttackComboBlind";
    il2cpp_runtime_helper_023445d0();
    g_data_057adf19 = '\x01';
  }
  lVar1 = *(long *)&(pCVar9->fields).EnableAI;
  if (lVar1 != 0) {
    bVar5 = System_String__op_Inequality
                      (*(System_String_o **)&(pCVar9->fields)._currentFallTotalTime,
                       *(System_String_o **)(lVar1 + 0x18),(MethodInfo *)0x0);
    if (((char)bVar5 != '\0') && ((pCVar9->fields)._jumpDirection.fields.x <= 0.0)) {
      (*(pCVar9->klass->vtable)._168_DamagedGrunt.methodPtr)
                (0x3f800000,pCVar9,(pCVar9->klass->vtable)._168_DamagedGrunt.method);
      (*(pCVar9->klass->vtable)._128_Attack.methodPtr)
                (pCVar9,"AttackComboBlind",(pCVar9->klass->vtable)._128_Attack.method);
      fVar11 = (float)(*(pCVar9->klass->vtable)._118_get_DisableCooldown.methodPtr)
                                (pCVar9,(pCVar9->klass->vtable)._118_get_DisableCooldown.method);
      (pCVar9->fields)._jumpDirection.fields.x = fVar11 + 2.0;
    }
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  *(undefined1 *)((long)&(pCVar10->fields)._previousCoreLocalPosition.fields.y + 1) = 1;
  (pCVar10->fields)._furthestCoreLocalPosition.fields.z = 2.0;
  Characters_BaseTitan___ctor((Characters_BaseTitan_o *)pCVar10,method_00);
  return;
}


// Characters.AnnieShifter$$DamagedGrunt
// il2cpp: void Characters_AnnieShifter__DamagedGrunt (Characters_AnnieShifter_o* __this, float chance, const MethodInfo* method);
// 0x42fee20

void Characters_AnnieShifter__DamagedGrunt(Characters_AnnieShifter_o *__this,float chance,MethodInfo *method)

{
  long lVar1;
  bool_conflict bVar2;
  Characters_AnnieShifter_o *pCVar3;
  Characters_AnnieShifter_o *__this_00;
  float fVar4;
  
  pCVar3 = __this;
  if (g_data_057adf18 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ShifterSounds);
    pCVar3 = (Characters_AnnieShifter_o *)&MethodInfo_Boolean_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057adf18 = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
  if ((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x40), lVar1 != 0)) {
    if (*(char *)(lVar1 + 0x11) != '\0') {
      bVar2 = Utility_RandomGen__Roll(chance,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_ShifterSounds + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        Characters_BaseCharacter__PlaySound
                  ((Characters_BaseCharacter_o *)__this,
                   *(System_String_o **)(*(long *)(TypeInfo_ShifterSounds + 0xb8) + 0x18),(MethodInfo *)0x0);
        return;
      }
    }
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_00 = pCVar3;
  if (g_data_057adf19 == '\0') {
    __this_00 = (Characters_AnnieShifter_o *)&"AttackComboBlind";
    il2cpp_runtime_helper_023445d0();
    g_data_057adf19 = '\x01';
  }
  lVar1 = *(long *)&(pCVar3->fields).EnableAI;
  if (lVar1 != 0) {
    bVar2 = System_String__op_Inequality
                      (*(System_String_o **)&(pCVar3->fields)._currentFallTotalTime,
                       *(System_String_o **)(lVar1 + 0x18),(MethodInfo *)0x0);
    if (((char)bVar2 != '\0') && ((pCVar3->fields)._jumpDirection.fields.x <= 0.0)) {
      (*(pCVar3->klass->vtable)._168_DamagedGrunt.methodPtr)
                (0x3f800000,pCVar3,(pCVar3->klass->vtable)._168_DamagedGrunt.method);
      (*(pCVar3->klass->vtable)._128_Attack.methodPtr)
                (pCVar3,"AttackComboBlind",(pCVar3->klass->vtable)._128_Attack.method);
      fVar4 = (float)(*(pCVar3->klass->vtable)._118_get_DisableCooldown.methodPtr)
                               (pCVar3,(pCVar3->klass->vtable)._118_get_DisableCooldown.method);
      (pCVar3->fields)._jumpDirection.fields.x = fVar4 + 2.0;
    }
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  *(undefined1 *)((long)&(__this_00->fields)._previousCoreLocalPosition.fields.y + 1) = 1;
  (__this_00->fields)._furthestCoreLocalPosition.fields.z = 2.0;
  Characters_BaseTitan___ctor((Characters_BaseTitan_o *)__this_00,method);
  return;
}


// Characters.AnnieShifter$$Blind
// il2cpp: void Characters_AnnieShifter__Blind (Characters_AnnieShifter_o* __this, const MethodInfo* method);
// 0x42feef0

void Characters_AnnieShifter__Blind(Characters_AnnieShifter_o *__this,MethodInfo *method)

{
  long lVar1;
  bool_conflict bVar2;
  Characters_AnnieShifter_o *__this_00;
  float fVar3;
  
  __this_00 = __this;
  if (g_data_057adf19 == '\0') {
    __this_00 = (Characters_AnnieShifter_o *)&"AttackComboBlind";
    il2cpp_runtime_helper_023445d0();
    g_data_057adf19 = '\x01';
  }
  lVar1 = *(long *)&(__this->fields).EnableAI;
  if (lVar1 != 0) {
    bVar2 = System_String__op_Inequality
                      (*(System_String_o **)&(__this->fields)._currentFallTotalTime,
                       *(System_String_o **)(lVar1 + 0x18),(MethodInfo *)0x0);
    if (((char)bVar2 != '\0') && ((__this->fields)._jumpDirection.fields.x <= 0.0)) {
      (*(__this->klass->vtable)._168_DamagedGrunt.methodPtr)
                (0x3f800000,__this,(__this->klass->vtable)._168_DamagedGrunt.method);
      (*(__this->klass->vtable)._128_Attack.methodPtr)
                (__this,"AttackComboBlind",(__this->klass->vtable)._128_Attack.method);
      fVar3 = (float)(*(__this->klass->vtable)._118_get_DisableCooldown.methodPtr)
                               (__this,(__this->klass->vtable)._118_get_DisableCooldown.method);
      (__this->fields)._jumpDirection.fields.x = fVar3 + 2.0;
    }
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  *(undefined1 *)((long)&(__this_00->fields)._previousCoreLocalPosition.fields.y + 1) = 1;
  (__this_00->fields)._furthestCoreLocalPosition.fields.z = 2.0;
  Characters_BaseTitan___ctor((Characters_BaseTitan_o *)__this_00,method);
  return;
}


// Characters.AnnieShifter$$.ctor
// il2cpp: void Characters_AnnieShifter___ctor (Characters_AnnieShifter_o* __this, const MethodInfo* method);
// 0x42fefa0

void Characters_AnnieShifter___ctor(Characters_AnnieShifter_o *__this,MethodInfo *method)

{
  *(undefined1 *)((long)&(__this->fields)._previousCoreLocalPosition.fields.y + 1) = 1;
  (__this->fields)._furthestCoreLocalPosition.fields.z = 2.0;
  Characters_BaseTitan___ctor((Characters_BaseTitan_o *)__this,method);
  return;
}


