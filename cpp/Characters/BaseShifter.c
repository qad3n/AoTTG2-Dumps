// Type: Characters.BaseShifter
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/BaseShifter.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Shifters/BaseShifter.cs
// --------------------------------

// Characters.BaseShifter.<WaitAndBecomeHuman>d__26$$.ctor
// il2cpp: void Characters_BaseShifter__WaitAndBecomeHuman_d__26___ctor (Characters_BaseShifter__WaitAndBecomeHuman_d__26_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x4300ce0

void Characters_BaseShifter__WaitAndBecomeHuman_d__26___ctor
               (Characters_BaseShifter__WaitAndBecomeHuman_d__26_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Characters.BaseShifter.<WaitAndBecomeHuman>d__26$$System.IDisposable.Dispose
// il2cpp: void Characters_BaseShifter__WaitAndBecomeHuman_d__26__System_IDisposable_Dispose (Characters_BaseShifter__WaitAndBecomeHuman_d__26_o* __this, const MethodInfo* method);
// 0x4302f10

void Characters_BaseShifter__WaitAndBecomeHuman_d__26__System_IDisposable_Dispose
               (Characters_BaseShifter__WaitAndBecomeHuman_d__26_o *__this,MethodInfo *method)

{
  return;
}


// Characters.BaseShifter.<WaitAndBecomeHuman>d__26$$MoveNext
// il2cpp: bool Characters_BaseShifter__WaitAndBecomeHuman_d__26__MoveNext (Characters_BaseShifter__WaitAndBecomeHuman_d__26_o* __this, const MethodInfo* method);
// 0x4302f20

bool_conflict
Characters_BaseShifter__WaitAndBecomeHuman_d__26__MoveNext
          (Characters_BaseShifter__WaitAndBecomeHuman_d__26_o *__this,MethodInfo *method)

{
  float seconds;
  byte bVar1;
  int iVar2;
  Characters_BaseShifter_o *__this_00;
  System_Action_Hashtable__o *pSVar3;
  UnityEngine_Transform_o *pUVar4;
  GameManagers_InGameManager_o *__this_01;
  System_String_o *pSVar5;
  Photon_Pun_PhotonView_o *__this_02;
  UnityEngine_WaitForSeconds_o *__this_03;
  long lVar6;
  long lVar7;
  System_Collections_IEnumerator_o *pSVar8;
  System_String_Fields unaff_R15;
  UnityEngine_Vector3_o position;
  UnityEngine_Vector3_o UVar9;
  UnityEngine_Vector3_o euler;
  UnityEngine_Quaternion_o rotation;
  
  if (g_data_057adf36 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_Empty_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Human);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitForSeconds);
    il2cpp_runtime_helper_023445d0(&"MarkDeadRPC");
    il2cpp_runtime_helper_023445d0(&"MarkTransformingRPC");
    g_data_057adf36 = '\x01';
  }
  iVar2 = (__this->fields).__1__state;
  __this_00 = (__this->fields).__4__this;
  if (iVar2 == 2) {
    (__this->fields).__1__state = -1;
    if (((__this_00 != (Characters_BaseShifter_o *)0x0) &&
        (pSVar3 = (__this_00->fields).OnPlayerPropertiesChanged, pSVar3 != (System_Action_Hashtable__o *)0x0))
       && (pUVar4 = (UnityEngine_Transform_o *)(pSVar3->fields).method_code,
          pUVar4 != (UnityEngine_Transform_o *)0x0)) {
      __this_01 = (GameManagers_InGameManager_o *)(__this_00->fields).Team;
      position = UnityEngine_Transform__get_position(pUVar4,(MethodInfo *)0x0);
      pSVar3 = (__this_00->fields).OnPlayerPropertiesChanged;
      if ((pSVar3 != (System_Action_Hashtable__o *)0x0) &&
         (pUVar4 = (UnityEngine_Transform_o *)(pSVar3->fields).method_code,
         pUVar4 != (UnityEngine_Transform_o *)0x0)) {
        rotation = UnityEngine_Transform__get_rotation(pUVar4,(MethodInfo *)0x0);
        UVar9 = UnityEngine_Quaternion__Internal_ToEulerRad(rotation,(MethodInfo *)0x0);
        euler.fields.x = UVar9.fields.x * 57.29578;
        euler.fields.y = UVar9.fields.y * 57.29578;
        euler.fields.z = UVar9.fields.z * 57.29578;
        UVar9 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
        if (__this_01 != (GameManagers_InGameManager_o *)0x0) {
          GameManagers_InGameManager__SpawnPlayerAt(__this_01,0,position,UVar9.fields.y,(MethodInfo *)0x0);
          pSVar5 = (__this_00->fields).Team;
          if ((pSVar5 != (System_String_o *)0x0) &&
             (unaff_R15 = pSVar5[4].fields, unaff_R15 != (System_String_Fields)0x0)) {
            if ((*(byte *)(TypeInfo_Human + 0x130) <= *(byte *)(*(long *)unaff_R15 + 0x130)) &&
               (*(long *)(*(long *)(*(long *)unaff_R15 + 200) +
                         ((ulong)*(byte *)(TypeInfo_Human + 0x130) - 1) * 8) == TypeInfo_Human)) {
              pSVar8 = Characters_Human__WaitAndTransformFromShifter
                                 ((Characters_Human_o *)unaff_R15,
                                  (__this_00->fields)._previousCoreLocalPosition.fields.z,
                                  *(Characters_BaseUseable_o **)
                                   &(__this_00->fields)._furthestCoreLocalPosition.fields,(MethodInfo *)0x0);
              UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                        ((UnityEngine_MonoBehaviour_o *)unaff_R15,pSVar8,(MethodInfo *)0x0);
              return 0;
            }
            goto label_04303374;
          }
        }
      }
    }
  }
  else {
    if (iVar2 != 1) {
      if (iVar2 != 0) {
        return 0;
      }
      (__this->fields).__1__state = -1;
      seconds = (__this->fields).time;
      __this_03 = (UnityEngine_WaitForSeconds_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitForSeconds);
      UnityEngine_WaitForSeconds___ctor(__this_03,seconds,(MethodInfo *)0x0);
      (__this->fields).__2__current = (Il2CppObject *)__this_03;
      il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,__this_03);
      (__this->fields).__1__state = 1;
      goto label_0430330b;
    }
    (__this->fields).__1__state = -1;
    lVar7 = MethodInfo_Object_Empty_Object;
    if ((__this_00 == (Characters_BaseShifter_o *)0x0) ||
       (lVar6 = *(long *)&(__this_00->fields).Dead, lVar6 == 0)) goto label_0430336f;
    unaff_R15 = *(System_String_Fields *)(lVar6 + 0x20);
    if (*(long *)(MethodInfo_Object_Empty_Object + 0x38) == 0) {
      il2cpp_runtime_helper_02300a20(MethodInfo_Object_Empty_Object);
      lVar6 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) goto label_04303038;
label_043031c7:
      if (*(int *)(lVar6 + 0xe4) == 0) goto label_0430304d;
label_043031d4:
      lVar7 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
      bVar1 = *(byte *)(lVar7 + 0x135);
    }
    else {
      lVar6 = *(long *)(*(long *)(MethodInfo_Object_Empty_Object + 0x38) + 0x10);
      if ((*(byte *)(lVar6 + 0x135) & 1) != 0) goto label_043031c7;
label_04303038:
      lVar6 = il2cpp_runtime_helper_023009c0();
      if (*(int *)(lVar6 + 0xe4) != 0) goto label_043031d4;
label_0430304d:
      il2cpp_runtime_helper_02337ed0();
      lVar7 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
      bVar1 = *(byte *)(lVar7 + 0x135);
    }
    if ((bVar1 & 1) == 0) {
      lVar7 = il2cpp_runtime_helper_023009c0(lVar7);
    }
    if (unaff_R15 != (System_String_Fields)0x0) {
      Photon_Pun_PhotonView__RPC
                ((Photon_Pun_PhotonView_o *)unaff_R15,"MarkTransformingRPC",3,
                 (System_Object_array *)**(undefined8 **)(lVar7 + 0xb8),(MethodInfo *)0x0);
      lVar6 = MethodInfo_Object_Empty_Object;
      lVar7 = *(long *)&(__this_00->fields).Dead;
      if (lVar7 != 0) {
        __this_02 = *(Photon_Pun_PhotonView_o **)(lVar7 + 0x20);
        if (*(long *)(MethodInfo_Object_Empty_Object + 0x38) == 0) {
          il2cpp_runtime_helper_02300a20(MethodInfo_Object_Empty_Object);
          lVar7 = *(long *)(*(long *)(lVar6 + 0x38) + 0x10);
          if ((*(byte *)(lVar7 + 0x135) & 1) == 0) goto label_04303252;
label_0430333b:
          if (*(int *)(lVar7 + 0xe4) == 0) goto label_04303267;
label_04303348:
          lVar7 = *(long *)(*(long *)(lVar6 + 0x38) + 0x10);
          bVar1 = *(byte *)(lVar7 + 0x135);
        }
        else {
          lVar7 = *(long *)(*(long *)(MethodInfo_Object_Empty_Object + 0x38) + 0x10);
          if ((*(byte *)(lVar7 + 0x135) & 1) != 0) goto label_0430333b;
label_04303252:
          lVar7 = il2cpp_runtime_helper_023009c0();
          if (*(int *)(lVar7 + 0xe4) != 0) goto label_04303348;
label_04303267:
          il2cpp_runtime_helper_02337ed0();
          lVar7 = *(long *)(*(long *)(lVar6 + 0x38) + 0x10);
          bVar1 = *(byte *)(lVar7 + 0x135);
        }
        if ((bVar1 & 1) == 0) {
          lVar7 = il2cpp_runtime_helper_023009c0(lVar7);
        }
        unaff_R15._stringLength = 0;
        unaff_R15._firstChar = 0;
        unaff_R15._6_2_ = 0;
        if (__this_02 != (Photon_Pun_PhotonView_o *)0x0) {
          Photon_Pun_PhotonView__RPC
                    (__this_02,"MarkDeadRPC",3,(System_Object_array *)**(undefined8 **)(lVar7 + 0xb8),
                     (MethodInfo *)0x0);
          pSVar8 = (System_Collections_IEnumerator_o *)
                   (*(__this_00->klass->vtable)._74_WaitAndDie.methodPtr)
                             (__this_00,(__this_00->klass->vtable)._74_WaitAndDie.method);
          UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                    ((UnityEngine_MonoBehaviour_o *)__this_00,pSVar8,(MethodInfo *)0x0);
          __this_03 = (UnityEngine_WaitForSeconds_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitForSeconds);
          UnityEngine_WaitForSeconds___ctor(__this_03,2.0,(MethodInfo *)0x0);
          (__this->fields).__2__current = (Il2CppObject *)__this_03;
          il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,__this_03);
          (__this->fields).__1__state = 2;
label_0430330b:
          return (bool_conflict)CONCAT71((int7)((ulong)__this_03 >> 8),1);
        }
      }
    }
  }
label_0430336f:
  il2cpp_runtime_helper_022b2c90();
label_04303374:
  il2cpp_runtime_helper_022b2fd0();
  return (bool_conflict)*(System_Threading_CancellationTokenSource_o **)((long)unaff_R15 + 0x18);
}


// Characters.BaseShifter.<WaitAndBecomeHuman>d__26$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Characters_BaseShifter__WaitAndBecomeHuman_d__26__System_Collections_Generic_IEnumerator_System_Object__get_Current (Characters_BaseShifter__WaitAndBecomeHuman_d__26_o* __this, const MethodInfo* method);
// 0x4303380

Il2CppObject *
Characters_BaseShifter__WaitAndBecomeHuman_d__26__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Characters_BaseShifter__WaitAndBecomeHuman_d__26_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Characters.BaseShifter.<WaitAndBecomeHuman>d__26$$System.Collections.IEnumerator.Reset
// il2cpp: void Characters_BaseShifter__WaitAndBecomeHuman_d__26__System_Collections_IEnumerator_Reset (Characters_BaseShifter__WaitAndBecomeHuman_d__26_o* __this, const MethodInfo* method);
// 0x4303390

void Characters_BaseShifter__WaitAndBecomeHuman_d__26__System_Collections_IEnumerator_Reset
               (Characters_BaseShifter__WaitAndBecomeHuman_d__26_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_helper_023052d0(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
  il2cpp_runtime_helper_022b2b10(__this_00,uVar1);
  return;
}


// Characters.BaseShifter.<WaitAndBecomeHuman>d__26$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Characters_BaseShifter__WaitAndBecomeHuman_d__26__System_Collections_IEnumerator_get_Current (Characters_BaseShifter__WaitAndBecomeHuman_d__26_o* __this, const MethodInfo* method);
// 0x43033d0

Il2CppObject *
Characters_BaseShifter__WaitAndBecomeHuman_d__26__System_Collections_IEnumerator_get_Current
          (Characters_BaseShifter__WaitAndBecomeHuman_d__26_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Characters.BaseShifter.<WaitAndDie>d__27$$.ctor
// il2cpp: void Characters_BaseShifter__WaitAndDie_d__27___ctor (Characters_BaseShifter__WaitAndDie_d__27_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x4300d70

void Characters_BaseShifter__WaitAndDie_d__27___ctor
               (Characters_BaseShifter__WaitAndDie_d__27_o *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Characters.BaseShifter.<WaitAndDie>d__27$$System.IDisposable.Dispose
// il2cpp: void Characters_BaseShifter__WaitAndDie_d__27__System_IDisposable_Dispose (Characters_BaseShifter__WaitAndDie_d__27_o* __this, const MethodInfo* method);
// 0x43033e0

void Characters_BaseShifter__WaitAndDie_d__27__System_IDisposable_Dispose
               (Characters_BaseShifter__WaitAndDie_d__27_o *__this,MethodInfo *method)

{
  return;
}


// Characters.BaseShifter.<WaitAndDie>d__27$$MoveNext
// il2cpp: bool Characters_BaseShifter__WaitAndDie_d__27__MoveNext (Characters_BaseShifter__WaitAndDie_d__27_o* __this, const MethodInfo* method);
// 0x43033f0

bool_conflict
Characters_BaseShifter__WaitAndDie_d__27__MoveNext
          (Characters_BaseShifter__WaitAndDie_d__27_o *__this,MethodInfo *method)

{
  float fVar1;
  int iVar2;
  Characters_BaseShifter_o *__this_00;
  long *plVar3;
  Characters_AnimationHandler_o *__this_01;
  System_Action_Hashtable__o *pSVar4;
  UnityEngine_Transform_o *pUVar5;
  Il2CppClass *name;
  bool_conflict bVar6;
  System_String_o *pSVar7;
  UnityEngine_WaitForSeconds_o *pUVar8;
  UnityEngine_GameObject_o *targetGo;
  Characters_BaseShifter__WaitAndDie_d__27_o *pCVar9;
  float fVar10;
  UnityEngine_Vector3_o UVar11;
  UnityEngine_Quaternion_o UVar12;
  
  pCVar9 = __this;
  if (g_data_057adf37 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    pCVar9 = (Characters_BaseShifter__WaitAndDie_d__27_o *)&TypeInfo_WaitForSeconds;
    il2cpp_runtime_helper_023445d0();
    g_data_057adf37 = '\x01';
  }
  iVar2 = (__this->fields).__1__state;
  __this_00 = (__this->fields).__4__this;
  if (iVar2 == 2) {
    (__this->fields).__1__state = -1;
    if (*(int *)((long)&TypeInfo_EffectPrefabs[5].fields.__2__current + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pCVar9 = TypeInfo_EffectPrefabs;
    if (((__this_00 == (Characters_BaseShifter_o *)0x0) ||
        (pSVar4 = (__this_00->fields).OnPlayerPropertiesChanged, pSVar4 == (System_Action_Hashtable__o *)0x0))
       || (pUVar5 = (UnityEngine_Transform_o *)(pSVar4->fields).interp_invoke_impl,
          pUVar5 == (UnityEngine_Transform_o *)0x0)) goto label_04303787;
    name = TypeInfo_EffectPrefabs[4].fields.__2__current[5].klass;
    UVar11 = UnityEngine_Transform__get_position(pUVar5,(MethodInfo *)0x0);
    UVar12 = UnityEngine_Quaternion__Internal_FromEulerRad
                       ((UnityEngine_Vector3_o)ZEXT812(0xbfc90fdb),(MethodInfo *)0x0);
    fVar1 = *(float *)((long)&(__this_00->fields).TitanColliderToggler + 4);
    fVar10 = (float)(*(__this_00->klass->vtable)._117_get_SizeMultiplier.methodPtr)(__this_00);
    Effects_EffectSpawner__Spawn
              ((System_String_o *)name,UVar11,UVar12,fVar1 * fVar10,0,(System_Object_array *)0x0,
               (MethodInfo *)0x0);
    targetGo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar6 = 0;
    Photon_Pun_PhotonNetwork__Destroy_3eec3a0(targetGo,(MethodInfo *)0x0);
  }
  else if (iVar2 == 1) {
    (__this->fields).__1__state = -1;
    if (*(int *)((long)&TypeInfo_EffectPrefabs[5].fields.__2__current + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pCVar9 = TypeInfo_EffectPrefabs;
    if (((__this_00 == (Characters_BaseShifter_o *)0x0) ||
        (pSVar4 = (__this_00->fields).OnPlayerPropertiesChanged, pSVar4 == (System_Action_Hashtable__o *)0x0))
       || (pUVar5 = (UnityEngine_Transform_o *)(pSVar4->fields).interp_invoke_impl,
          pUVar5 == (UnityEngine_Transform_o *)0x0)) goto label_04303787;
    pSVar7 = TypeInfo_EffectPrefabs[4].fields.__2__current[4].monitor;
    UVar11 = UnityEngine_Transform__get_position(pUVar5,(MethodInfo *)0x0);
    UVar12 = UnityEngine_Quaternion__Internal_FromEulerRad
                       ((UnityEngine_Vector3_o)ZEXT812(0xbfc90fdb),(MethodInfo *)0x0);
    fVar1 = *(float *)((long)&(__this_00->fields).TitanColliderToggler + 4);
    fVar10 = (float)(*(__this_00->klass->vtable)._117_get_SizeMultiplier.methodPtr)(__this_00);
    Effects_EffectSpawner__Spawn
              (pSVar7,UVar11,UVar12,fVar1 * fVar10,0,(System_Object_array *)0x0,(MethodInfo *)0x0);
    pUVar8 = (UnityEngine_WaitForSeconds_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitForSeconds);
    UnityEngine_WaitForSeconds___ctor(pUVar8,3.0,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)pUVar8;
    il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,pUVar8);
    (__this->fields).__1__state = 2;
    bVar6 = (bool_conflict)CONCAT71((int7)((ulong)pUVar8 >> 8),1);
  }
  else {
    if (iVar2 == 0) {
      (__this->fields).__1__state = -1;
      if (__this_00 != (Characters_BaseShifter_o *)0x0) {
        plVar3 = *(long **)&(__this_00->fields).TurnPause;
        pCVar9 = (Characters_BaseShifter__WaitAndDie_d__27_o *)0x0;
        if (plVar3 != (long *)0x0) {
          pSVar7 = (System_String_o *)(**(code **)(*plVar3 + 0x1f8))();
          *(undefined1 *)&(__this_00->fields)._stateTimeLeft = 1;
          __this_01 = *(Characters_AnimationHandler_o **)&(__this_00->fields)._cameraFPS;
          pCVar9 = (Characters_BaseShifter__WaitAndDie_d__27_o *)0x0;
          if (__this_01 != (Characters_AnimationHandler_o *)0x0) {
            Characters_AnimationHandler__SetCullingType(__this_01,0,(MethodInfo *)0x0);
            (*(__this_00->klass->vtable)._148_Ungrab.methodPtr)
                      (__this_00,(__this_00->klass->vtable)._148_Ungrab.method);
            (*(__this_00->klass->vtable)._163_DeactivateAllHitboxes.methodPtr)
                      (__this_00,(__this_00->klass->vtable)._163_DeactivateAllHitboxes.method);
            Characters_BaseCharacter__CrossFade
                      ((Characters_BaseCharacter_o *)__this_00,pSVar7,0.1,0.0,(MethodInfo *)0x0);
            *(undefined4 *)&(__this_00->fields).OutlineComponent = 0xf;
            *(System_String_o **)&(__this_00->fields)._climbCooldownLeft = pSVar7;
            il2cpp_runtime_helper_022b4080(&(__this_00->fields)._climbCooldownLeft);
            (__this_00->fields)._currentCrippleTime = 0.0;
            fVar1 = (__this_00->fields)._furthestCoreLocalPosition.fields.z;
            pUVar8 = (UnityEngine_WaitForSeconds_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitForSeconds);
            UnityEngine_WaitForSeconds___ctor(pUVar8,fVar1,(MethodInfo *)0x0);
            (__this->fields).__2__current = (Il2CppObject *)pUVar8;
            il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,pUVar8);
            (__this->fields).__1__state = 1;
            return (bool_conflict)CONCAT71((int7)((ulong)pUVar8 >> 8),1);
          }
        }
      }
label_04303787:
      bVar6 = il2cpp_runtime_helper_022b2c90();
      (*pCVar9->klass[4].vtable._3_ToString.methodPtr)();
      return bVar6;
    }
    bVar6 = 0;
  }
  return bVar6;
}


// Characters.BaseShifter.<WaitAndDie>d__27$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Characters_BaseShifter__WaitAndDie_d__27__System_Collections_Generic_IEnumerator_System_Object__get_Current (Characters_BaseShifter__WaitAndDie_d__27_o* __this, const MethodInfo* method);
// 0x43037c0

Il2CppObject *
Characters_BaseShifter__WaitAndDie_d__27__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Characters_BaseShifter__WaitAndDie_d__27_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Characters.BaseShifter.<WaitAndDie>d__27$$System.Collections.IEnumerator.Reset
// il2cpp: void Characters_BaseShifter__WaitAndDie_d__27__System_Collections_IEnumerator_Reset (Characters_BaseShifter__WaitAndDie_d__27_o* __this, const MethodInfo* method);
// 0x43037d0

void Characters_BaseShifter__WaitAndDie_d__27__System_Collections_IEnumerator_Reset
               (Characters_BaseShifter__WaitAndDie_d__27_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_helper_023052d0(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
  il2cpp_runtime_helper_022b2b10(__this_00,uVar1);
  return;
}


// Characters.BaseShifter.<WaitAndDie>d__27$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Characters_BaseShifter__WaitAndDie_d__27__System_Collections_IEnumerator_get_Current (Characters_BaseShifter__WaitAndDie_d__27_o* __this, const MethodInfo* method);
// 0x4303810

Il2CppObject *
Characters_BaseShifter__WaitAndDie_d__27__System_Collections_IEnumerator_get_Current
          (Characters_BaseShifter__WaitAndDie_d__27_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Characters.BaseShifter$$get_DefaultMaxHealth
// il2cpp: int32_t Characters_BaseShifter__get_DefaultMaxHealth (Characters_BaseShifter_o* __this, const MethodInfo* method);
// 0x42ff8d0

int32_t Characters_BaseShifter__get_DefaultMaxHealth(Characters_BaseShifter_o *__this,MethodInfo *method)

{
  return 1000;
}


// Characters.BaseShifter$$get_DefaultRunSpeed
// il2cpp: float Characters_BaseShifter__get_DefaultRunSpeed (Characters_BaseShifter_o* __this, const MethodInfo* method);
// 0x42ff8e0

float Characters_BaseShifter__get_DefaultRunSpeed(Characters_BaseShifter_o *__this,MethodInfo *method)

{
  return 100.0;
}


// Characters.BaseShifter$$get_DefaultWalkSpeed
// il2cpp: float Characters_BaseShifter__get_DefaultWalkSpeed (Characters_BaseShifter_o* __this, const MethodInfo* method);
// 0x42ff8f0

float Characters_BaseShifter__get_DefaultWalkSpeed(Characters_BaseShifter_o *__this,MethodInfo *method)

{
  return 20.0;
}


// Characters.BaseShifter$$get_DefaultRotateSpeed
// il2cpp: float Characters_BaseShifter__get_DefaultRotateSpeed (Characters_BaseShifter_o* __this, const MethodInfo* method);
// 0x42ff900

float Characters_BaseShifter__get_DefaultRotateSpeed(Characters_BaseShifter_o *__this,MethodInfo *method)

{
  return 10.0;
}


// Characters.BaseShifter$$get_DefaultJumpForce
// il2cpp: float Characters_BaseShifter__get_DefaultJumpForce (Characters_BaseShifter_o* __this, const MethodInfo* method);
// 0x42ff910

float Characters_BaseShifter__get_DefaultJumpForce(Characters_BaseShifter_o *__this,MethodInfo *method)

{
  return 200.0;
}


// Characters.BaseShifter$$get_SizeMultiplier
// il2cpp: float Characters_BaseShifter__get_SizeMultiplier (Characters_BaseShifter_o* __this, const MethodInfo* method);
// 0x42ff920

float Characters_BaseShifter__get_SizeMultiplier(Characters_BaseShifter_o *__this,MethodInfo *method)

{
  return 3.0;
}


// Characters.BaseShifter$$get_DefaultCrippleTime
// il2cpp: float Characters_BaseShifter__get_DefaultCrippleTime (Characters_BaseShifter_o* __this, const MethodInfo* method);
// 0x42ff930

float Characters_BaseShifter__get_DefaultCrippleTime(Characters_BaseShifter_o *__this,MethodInfo *method)

{
  return 3.5;
}


// Characters.BaseShifter$$get_DisableCooldown
// il2cpp: float Characters_BaseShifter__get_DisableCooldown (Characters_BaseShifter_o* __this, const MethodInfo* method);
// 0x42ff940

float Characters_BaseShifter__get_DisableCooldown(Characters_BaseShifter_o *__this,MethodInfo *method)

{
  return 5.0;
}


// Characters.BaseShifter$$Start
// il2cpp: void Characters_BaseShifter__Start (Characters_BaseShifter_o* __this, const MethodInfo* method);
// 0x42ff950

void Characters_BaseShifter__Start(Characters_BaseShifter_o *__this,MethodInfo *method)

{
  byte bVar1;
  GameManagers_InGameManager_o *__this_00;
  System_Action_Hashtable__o *pSVar2;
  UnityEngine_Transform_o *pUVar3;
  Characters_AnimationHandler_o *pCVar4;
  Settings_SetSettingsContainer_T__o *__this_01;
  Photon_Pun_PhotonView_o *__this_02;
  code *vtableDispatch;
  bool_conflict bVar5;
  System_String_o *pSVar6;
  Characters_BaseTitan_o *__this_03;
  Characters_BaseTitan_c *pCVar7;
  Settings_BaseSetSetting_o *pSVar8;
  Il2CppObject *pIVar9;
  System_Object_array *parameters;
  long lVar10;
  Characters_BaseCharacter_o *__this_04;
  char cVar11;
  System_String_o **in_RCX;
  System_String_o *b;
  int iVar12;
  Characters_BaseShifter_o *method_00;
  MethodInfo *method_01;
  Characters_BaseTitan_o *__this_05;
  Characters_BaseTitan_o *__this_06;
  long *plVar13;
  undefined4 uVar14;
  float in_XMM1_Da;
  UnityEngine_Vector3_o UVar15;
  
  if (g_data_057adf2a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ShifterSounds);
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057adf2a = '\x01';
  }
  __this_00 = (GameManagers_InGameManager_o *)(__this->fields).Team;
  __this_05 = (Characters_BaseTitan_o *)0x0;
  if (__this_00 != (GameManagers_InGameManager_o *)0x0) {
    method_00 = __this;
    GameManagers_InGameManager__RegisterCharacter
              (__this_00,(Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0);
    Characters_BaseTitan__Start((Characters_BaseTitan_o *)__this,(MethodInfo *)method_00);
    bVar5 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') {
      return;
    }
    if ((TypeInfo_EffectPrefabs->fields)._stepPhase == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar2 = (__this->fields).OnPlayerPropertiesChanged;
    __this_05 = TypeInfo_EffectPrefabs;
    if ((pSVar2 != (System_Action_Hashtable__o *)0x0) &&
       (pUVar3 = (UnityEngine_Transform_o *)(pSVar2->fields).method_code,
       pUVar3 != (UnityEngine_Transform_o *)0x0)) {
      pSVar6 = (System_String_o *)(TypeInfo_EffectPrefabs->fields).MovementSync[1].fields.m_CachedPtr;
      UVar15 = UnityEngine_Transform__get_position(pUVar3,(MethodInfo *)0x0);
      in_XMM1_Da = UVar15.fields.z;
      if (g_data_057a6843 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
        g_data_057a6843 = '\x01';
      }
      in_RCX = (System_String_o **)0x0;
      Effects_EffectSpawner__Spawn
                (pSVar6,UVar15,
                 (UnityEngine_Quaternion_o)**(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8),
                 *(float *)((long)&(__this->fields).TitanColliderToggler + 4),1,(System_Object_array *)0x0,
                 (MethodInfo *)0x0);
      if (*(int *)(TypeInfo_ShifterSounds + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      method_01 = (MethodInfo *)**(undefined8 **)(TypeInfo_ShifterSounds + 0xb8);
      Characters_BaseCharacter__PlaySound
                ((Characters_BaseCharacter_o *)__this,(System_String_o *)method_01,(MethodInfo *)0x0);
      Characters_BaseShifter__LoadSkin(__this,method_01);
      (*(__this->klass->vtable)._96_CheckGround.methodPtr)(__this);
      if (*(char *)((long)&(__this->fields).Animation + 4) != '\0') {
        return;
      }
      plVar13 = *(long **)&(__this->fields).TurnPause;
      __this_05 = (Characters_BaseTitan_o *)0x0;
      if (plVar13 != (long *)0x0) {
        pSVar6 = (System_String_o *)(**(code **)(*plVar13 + 0x1b8))(plVar13,*(undefined8 *)(*plVar13 + 0x1c0))
        ;
        in_RCX = &"";
        bVar5 = System_String__op_Inequality(pSVar6,"",(MethodInfo *)0x0);
        if ((char)bVar5 == '\0') {
          return;
        }
        plVar13 = *(long **)&(__this->fields).TurnPause;
        __this_05 = (Characters_BaseTitan_o *)0x0;
        if (plVar13 != (long *)0x0) {
          pSVar6 = (System_String_o *)(**(code **)(*plVar13 + 0x1b8))();
          *(undefined1 *)&(__this->fields)._stateTimeLeft = 1;
          pCVar4 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
          __this_05 = (Characters_BaseTitan_o *)0x0;
          if (pCVar4 != (Characters_AnimationHandler_o *)0x0) {
            Characters_AnimationHandler__SetCullingType(pCVar4,1,(MethodInfo *)0x0);
            (*(__this->klass->vtable)._148_Ungrab.methodPtr)
                      (__this,(__this->klass->vtable)._148_Ungrab.method);
            (*(__this->klass->vtable)._163_DeactivateAllHitboxes.methodPtr)
                      (__this,(__this->klass->vtable)._163_DeactivateAllHitboxes.method);
            Characters_BaseCharacter__CrossFade
                      ((Characters_BaseCharacter_o *)__this,pSVar6,0.1,0.0,(MethodInfo *)0x0);
            *(undefined4 *)&(__this->fields).OutlineComponent = 6;
            *(System_String_o **)&(__this->fields)._climbCooldownLeft = pSVar6;
            il2cpp_runtime_helper_022b4080(&(__this->fields)._climbCooldownLeft,pSVar6);
            (__this->fields)._currentCrippleTime = 0.2;
            return;
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adf95 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseShifter);
    g_data_057adf95 = '\x01';
  }
  Characters_BaseCharacter__Start((Characters_BaseCharacter_o *)__this_05,(MethodInfo *)0x0);
  __this_06 = __this_05;
  bVar5 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)__this_05,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
label_042ffccc:
    lVar10 = *(long *)&(__this_05->fields).Dead;
    if (lVar10 != 0) {
      pUVar3 = *(UnityEngine_Transform_o **)(lVar10 + 0x10);
      __this_06 = (Characters_BaseTitan_o *)0x0;
      if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
        UVar15 = UnityEngine_Transform__get_position(pUVar3,(MethodInfo *)0x0);
        (__this_05->fields)._maxTurnTime = (float)(int)UVar15.fields._0_8_;
        (__this_05->fields)._currentTurnTime = (float)(int)((ulong)UVar15.fields._0_8_ >> 0x20);
        (__this_05->fields)._currentGroundDistance = UVar15.fields.z;
        return;
      }
    }
  }
  else {
    bVar5 = Characters_BaseCharacter__IsMainCharacter
                      ((Characters_BaseCharacter_o *)__this_05,(MethodInfo *)0x0);
    if (((char)bVar5 != '\0') && (__this_05 != (Characters_BaseTitan_o *)0x0)) {
      pCVar7 = __this_05->klass;
      bVar1 = (TypeInfo_BaseShifter->_2).naturalAligment;
      in_RCX = (System_String_o **)TypeInfo_BaseShifter;
      if (((pCVar7->_2).naturalAligment < bVar1) ||
         ((pCVar7->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_BaseShifter)) goto label_042ffc4c;
label_042ffcbc:
      __this_06 = __this_05;
      (*(pCVar7->vtable)._138_Idle.methodPtr)();
      goto label_042ffccc;
    }
label_042ffc4c:
    if (g_data_057adf96 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_HandleSpawnCollisionCoroutine_d__166);
      g_data_057adf96 = '\x01';
    }
    __this_03 = (Characters_BaseTitan_o *)il2cpp_runtime_helper_023052d0(TypeInfo_HandleSpawnCollisionCoroutine_d__166);
    __this_06 = __this_03;
    Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166___ctor
              ((Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *)__this_03,0,(MethodInfo *)0x0);
    if (__this_03 != (Characters_BaseTitan_o *)0x0) {
      (__this_03->fields).pvCache = (Photon_Pun_PhotonView_o *)__this_05;
      il2cpp_runtime_helper_022b4080(&(__this_03->fields).pvCache,__this_05);
      (__this_03->fields).FootstepsEnabled = 0x41a00000;
      (__this_03->fields).SoundsEnabled = 0x40000000;
      UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                ((UnityEngine_MonoBehaviour_o *)__this_05,(System_Collections_IEnumerator_o *)__this_03,
                 (MethodInfo *)0x0);
      pCVar7 = __this_05->klass;
      goto label_042ffcbc;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adf33 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetSetting_GetSelectedSet);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ShifterCustomSkinSet);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    il2cpp_runtime_helper_023445d0(&"LoadSkinRPC");
    g_data_057adf33 = '\x01';
  }
  bVar5 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)__this_06,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    return;
  }
  lVar10 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
  if (((lVar10 == 0) ||
      (__this_01 = *(Settings_SetSettingsContainer_T__o **)(lVar10 + 0x30),
      __this_01 == (Settings_SetSettingsContainer_T__o *)0x0)) || (__this_01[1].monitor == (void *)0x0))
  goto label_042ffeab;
  if (*(char *)((long)__this_01[1].monitor + 0x11) == '\0') {
    return;
  }
  pSVar8 = Settings_SetSettingsContainer_object___GetSelectedSet(__this_01,MethodInfo_BaseSetSetting_GetSelectedSet);
  if (pSVar8 == (Settings_BaseSetSetting_o *)0x0) {
label_042ffe0a:
    in_RCX = (System_String_o **)__this_06->klass;
    pIVar9 = (Il2CppObject *)
             (*((Il2CppClass *)in_RCX)->vtable[0xb1].methodPtr)
                       (__this_06,pSVar8,((Il2CppClass *)in_RCX)->vtable[0xb1].method);
    lVar10 = *(long *)&(__this_06->fields).Dead;
    if (lVar10 == 0) {
label_042ffeab:
      pSVar8 = (Settings_BaseSetSetting_o *)il2cpp_runtime_helper_022b2c90();
      goto label_042ffeb0;
    }
    __this_02 = *(Photon_Pun_PhotonView_o **)(lVar10 + 0x20);
    parameters = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
    if (parameters == (System_Object_array *)0x0) goto label_042ffeab;
    if (pIVar9 != (Il2CppObject *)0x0) {
      lVar10 = il2cpp_runtime_helper_023051f0(pIVar9);
      cVar11 = (char)in_RCX;
      if (lVar10 == 0) goto label_042ffebd;
    }
    cVar11 = (char)in_RCX;
    if ((int)parameters->max_length != 0) {
      parameters->m_Items[0] = pIVar9;
      il2cpp_runtime_helper_022b4080(parameters->m_Items);
      if (__this_02 != (Photon_Pun_PhotonView_o *)0x0) {
        Photon_Pun_PhotonView__RPC(__this_02,"LoadSkinRPC",3,parameters,(MethodInfo *)0x0);
        return;
      }
      goto label_042ffeab;
    }
  }
  else {
    in_RCX = (System_String_o **)pSVar8->klass;
    if ((*(byte *)(TypeInfo_ShifterCustomSkinSet + 0x130) <= (((Il2CppClass *)in_RCX)->_2).naturalAligment) &&
       (in_RCX = (System_String_o **)(((Il2CppClass *)in_RCX)->_2).typeHierarchy,
       *(long *)((long)in_RCX + (ulong)*(byte *)(TypeInfo_ShifterCustomSkinSet + 0x130) * 8 + -8) == TypeInfo_ShifterCustomSkinSet))
    goto label_042ffe0a;
label_042ffeb0:
    cVar11 = (char)in_RCX;
    il2cpp_runtime_helper_022b2fd0(pSVar8);
  }
  il2cpp_runtime_helper_022b2ca0();
label_042ffebd:
  __this_04 = (Characters_BaseCharacter_o *)il2cpp_runtime_helper_0231b270();
  iVar12 = 0;
  uVar14 = il2cpp_runtime_helper_022b2b10();
  *(undefined1 *)&__this_04[2].fields.m_CancellationTokenSource = 1;
  if ((__this_04 != (Characters_BaseCharacter_o *)0x0) &&
     (pCVar4 = *(Characters_AnimationHandler_o **)&(__this_04->fields)._cameraFPS,
     pCVar4 != (Characters_AnimationHandler_o *)0x0)) {
    Characters_AnimationHandler__SetCullingType
              (pCVar4,(uint)((iVar12 - 6U & 0xfffffffb) == 0),(MethodInfo *)0x0);
    if ((iVar12 != 0x17) && (iVar12 != 0x1b)) {
      (*(code *)__this_04->klass[1].vtable._18_unknown.method)
                (__this_04,__this_04->klass[1].vtable._19_unknown.methodPtr);
    }
    if (cVar11 != '\0') {
      (*(code *)__this_04->klass[1].vtable._33_OnCreateRoomFailed.method)
                (__this_04,__this_04->klass[1].vtable._34_OnJoinRoomFailed.methodPtr);
    }
    if ((iVar12 != 0) ||
       (bVar5 = System_String__op_Inequality(__this_04[2].monitor,b,(MethodInfo *)0x0), (char)bVar5 != '\0'))
    {
      Characters_BaseCharacter__CrossFade(__this_04,b,in_XMM1_Da,0.0,(MethodInfo *)0x0);
    }
    *(int *)&(__this_04->fields).OutlineComponent = iVar12;
    __this_04[2].monitor = b;
    il2cpp_runtime_helper_022b4080(&__this_04[2].monitor,b);
    *(undefined4 *)((long)&__this_04[1].fields.OnPlayerPropertiesChanged + 4) = uVar14;
    return;
  }
  plVar13 = (long *)0x0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adf2b == '\0') {
    il2cpp_runtime_helper_023445d0(&"AttackKick");
    g_data_057adf2b = '\x01';
  }
  vtableDispatch = *(code **)(*plVar13 + 0x938);
  (*vtableDispatch)(plVar13,"AttackKick",*(undefined8 *)(*plVar13 + 0x940),vtableDispatch);
  return;
}


// Characters.BaseShifter$$Kick
// il2cpp: void Characters_BaseShifter__Kick (Characters_BaseShifter_o* __this, const MethodInfo* method);
// 0x42fffd0

void Characters_BaseShifter__Kick(Characters_BaseShifter_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  
  if (g_data_057adf2b == '\0') {
    il2cpp_runtime_helper_023445d0(&"AttackKick");
    g_data_057adf2b = '\x01';
  }
  vtableDispatch = (__this->klass->vtable)._128_Attack.methodPtr;
  (*vtableDispatch)
            (__this,"AttackKick",(__this->klass->vtable)._128_Attack.method,vtableDispatch);
  return;
}


// Characters.BaseShifter$$MarkTransformingRPC
// il2cpp: void Characters_BaseShifter__MarkTransformingRPC (Characters_BaseShifter_o* __this, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x4300020

void Characters_BaseShifter__MarkTransformingRPC
               (Characters_BaseShifter_o *__this,Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  Characters_BaseShifter_c *pCVar6;
  Characters_AnimationHandler_c *pCVar7;
  System_Collections_Generic_Dictionary_TKey__TValue__o *__this_00;
  Characters_AnimationHandler_o *pCVar8;
  System_String_c *pSVar9;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_01;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_02;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_03;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_04;
  char cVar10;
  bool_conflict bVar11;
  Characters_BaseShifter_o *pCVar12;
  Characters_BaseShifter_o *pCVar13;
  long *plVar14;
  System_String_o *pSVar15;
  UnityEngine_GameObject_o *__this_05;
  Characters_BaseCharacter_o *__this_06;
  SimpleJSONFixed_JSONNode_o *__this_07;
  System_String_o *pSVar16;
  Characters_BaseShifter_o *in_RCX;
  Characters_BaseShifter_o *pCVar17;
  System_String_o *team;
  System_String_o *team_00;
  uint uVar18;
  undefined8 uVar19;
  Characters_BaseShifter_o *pCVar20;
  Characters_BaseCharacter_o *__this_08;
  MethodInfo *in_R8;
  ulong uVar21;
  float fVar22;
  int32_t iVar23;
  undefined4 uVar24;
  Il2CppMethodPointer pIVar25;
  Il2CppMethodPointer pIVar26;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar27;
  InvokerMethod pIVar28;
  char *pcVar29;
  Il2CppObject *pIVar30;
  Il2CppClass *pIVar31;
  Il2CppType *pIVar32;
  Il2CppType **ppIVar33;
  System_Collections_Generic_List_T__o *pSVar34;
  _union_13 _Var35;
  _union_14 _Var36;
  Il2CppMethodPointer pIStack_118;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSStack_110;
  InvokerMethod pIStack_108;
  Il2CppObject *pIStack_100;
  Il2CppClass *pIStack_f8;
  Il2CppType *pIStack_f0;
  System_Collections_Generic_List_T__o *pSStack_e8;
  _union_13 _Stack_e0;
  _union_14 _Stack_d8;
  undefined1 auStack_d0 [80];
  ulong uStack_80;
  
  lVar5 = *(long *)&(__this->fields).Dead;
  if ((lVar5 != 0) && (lVar5 = *(long *)(lVar5 + 0x20), lVar5 != 0)) {
    if (info.fields.Sender != *(Photon_Realtime_Player_o **)(lVar5 + 0x80)) {
      return;
    }
    *(undefined1 *)((long)&(__this->fields)._previousCoreLocalPosition.fields.y + 2) = 1;
    return;
  }
  fVar22 = (float)il2cpp_runtime_helper_022b2c90();
  uVar21 = (ulong)method & 0xffffffff;
  pCVar17 = in_RCX;
  if (g_data_057adf2c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AnnieShifter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ErenShifter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AnnieShifterPlayerController_AddComponent_AnnieShifterPl);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseTitanAIController_AddComponent_BaseTitanAIController);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ErenShifterPlayerController_AddComponent_ErenShifterPlay);
    il2cpp_runtime_helper_023445d0(&MethodInfo_WallColossalAIController_AddComponent_WallColossalAICont);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WallColossalShifter);
    il2cpp_runtime_helper_023445d0(&"Name");
    g_data_057adf2c = '\x01';
  }
  pCVar20 = __this;
  if ((char)uVar21 == '\0') {
    if (__this == (Characters_BaseShifter_o *)0x0) {
joined_r0x04300189:
      if (fVar22 <= 0.0) goto label_043002c0;
      if (g_data_057adf2d == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndBecomeHuman_d__26);
        g_data_057adf2d = '\x01';
      }
      pCVar13 = (Characters_BaseShifter_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndBecomeHuman_d__26);
      pCVar20 = pCVar13;
      System_Object___ctor((Il2CppObject *)pCVar13,(MethodInfo *)0x0);
      *(undefined4 *)&(pCVar13->fields).m_CachedPtr = 0;
      if (pCVar13 != (Characters_BaseShifter_o *)0x0) {
        *(Characters_BaseShifter_o **)&(pCVar13->fields).FootstepsEnabled = __this;
        il2cpp_runtime_helper_022b4080(&(pCVar13->fields).FootstepsEnabled,__this);
        *(float *)&(pCVar13->fields).pvCache = fVar22;
        UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                  ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)pCVar13,
                   (MethodInfo *)0x0);
        goto label_043002c0;
      }
    }
    else {
      pCVar6 = __this->klass;
      bVar1 = (pCVar6->_2).naturalAligment;
      pCVar17 = (Characters_BaseShifter_o *)CONCAT71((int7)((ulong)pCVar17 >> 8),bVar1);
      bVar2 = (TypeInfo_ErenShifter->_2).naturalAligment;
      if ((bVar1 < bVar2) || ((pCVar6->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_ErenShifter)) {
        bVar2 = (TypeInfo_AnnieShifter->_2).naturalAligment;
        if ((bVar1 < bVar2) || ((pCVar6->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_AnnieShifter))
        goto joined_r0x04300189;
        __this_05 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
        ;
        if (__this_05 != (UnityEngine_GameObject_o *)0x0) {
          pCVar17 = (Characters_BaseShifter_o *)&MethodInfo_AnnieShifterPlayerController_AddComponent_AnnieShifterPl;
          goto label_04300318;
        }
      }
      else {
        __this_05 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
        ;
        if (__this_05 != (UnityEngine_GameObject_o *)0x0) {
          pCVar17 = (Characters_BaseShifter_o *)&MethodInfo_ErenShifterPlayerController_AddComponent_ErenShifterPlay;
label_04300318:
          UnityEngine_GameObject__AddComponent_object_
                    (__this_05,(MethodInfo_255A020 *)((Il2CppClass_1 *)&pCVar17->klass)->image);
          goto joined_r0x04300189;
        }
      }
    }
  }
  else {
    if (__this == (Characters_BaseShifter_o *)0x0) {
label_0430011e:
      pCVar13 = (Characters_BaseShifter_o *)0x0;
    }
    else {
      bVar1 = (TypeInfo_WallColossalShifter->_2).naturalAligment;
      pCVar17 = (Characters_BaseShifter_o *)(ulong)bVar1;
      if ((__this->klass->_2).naturalAligment < bVar1) goto label_0430011e;
      pCVar13 = (Characters_BaseShifter_o *)0x0;
      if ((__this->klass->_2).typeHierarchy[(long)((long)&pCVar17[-1].fields._customSkinLoader + 7)] ==
          TypeInfo_WallColossalShifter) {
        pCVar13 = __this;
      }
    }
    pCVar12 = (Characters_BaseShifter_o *)
              UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pCVar12 != (Characters_BaseShifter_o *)0x0) {
      if (pCVar13 == (Characters_BaseShifter_o *)0x0) {
        pCVar17 = (Characters_BaseShifter_o *)&MethodInfo_BaseTitanAIController_AddComponent_BaseTitanAIController;
      }
      else {
        pCVar17 = (Characters_BaseShifter_o *)&MethodInfo_WallColossalAIController_AddComponent_WallColossalAICont;
      }
      pCVar13 = (Characters_BaseShifter_o *)
                UnityEngine_GameObject__AddComponent_object_
                          ((UnityEngine_GameObject_o *)pCVar12,((Il2CppClass_1 *)&pCVar17->klass)->image);
      pCVar20 = pCVar12;
      if (pCVar13 != (Characters_BaseShifter_o *)0x0) {
        pCVar17 = ((Il2CppClass_1 *)&pCVar13->klass)->image;
        uVar19._0_4_ = (pCVar17->fields)._turnStartRotation.fields.y;
        uVar19._4_4_ = (pCVar17->fields)._turnStartRotation.fields.z;
        (**(code **)&(pCVar17->fields)._wallClimbForward.fields.z)(pCVar13,in_RCX,uVar19);
        pCVar20 = pCVar13;
        if ((in_RCX != (Characters_BaseShifter_o *)0x0) &&
           (pCVar7 = ((Il2CppClass_1 *)&in_RCX->klass)->image, pCVar20 = in_RCX,
           plVar14 = (long *)(*pCVar7[1]._1.this_arg.data)
                                       (in_RCX,"Name",*(undefined8 *)&pCVar7[1]._1.this_arg.bits),
           plVar14 != (long *)0x0)) {
          pSVar15 = (System_String_o *)
                    (**(code **)(*plVar14 + 0x1c8))(plVar14,*(undefined8 *)(*plVar14 + 0x1d0));
          Characters_BaseCharacter__set_Name((Characters_BaseCharacter_o *)__this,pSVar15,(MethodInfo *)0x0);
label_043002c0:
          Characters_BaseTitan__Init
                    ((Characters_BaseTitan_o *)__this,(uint)method & 0xff,team,
                     (SimpleJSONFixed_JSONNode_o *)in_RCX,in_R8);
          return;
        }
      }
    }
  }
  uVar3 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057adf2d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndBecomeHuman_d__26);
    g_data_057adf2d = '\x01';
  }
  __this_06 = (Characters_BaseCharacter_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndBecomeHuman_d__26);
  uVar18 = 0;
  __this_08 = __this_06;
  System_Object___ctor((Il2CppObject *)__this_06,(MethodInfo *)0x0);
  *(undefined4 *)&(__this_06->fields).m_CachedPtr = 0;
  if (__this_06 != (Characters_BaseCharacter_o *)0x0) {
    *(Characters_BaseShifter_o **)&(__this_06->fields).FootstepsEnabled = pCVar20;
    il2cpp_runtime_helper_022b4080(&(__this_06->fields).FootstepsEnabled,pCVar20);
    *(undefined4 *)&(__this_06->fields).pvCache = uVar3;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  auStack_d0._72_8_ = __this_06;
  uStack_80 = uVar21;
  if (g_data_057adf77 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&"AttackPause");
    il2cpp_runtime_helper_023445d0(&"AttackSpeeds");
    il2cpp_runtime_helper_023445d0(&"RunSpeedPerLevel");
    il2cpp_runtime_helper_023445d0(&"WalkSpeedBase");
    il2cpp_runtime_helper_023445d0(&"ActionPause");
    il2cpp_runtime_helper_023445d0(&"WalkSpeedPerLevel");
    il2cpp_runtime_helper_023445d0(&"AttackSpeedMultiplier");
    il2cpp_runtime_helper_023445d0(&"Health");
    il2cpp_runtime_helper_023445d0(&"RunSpeedBase");
    il2cpp_runtime_helper_023445d0(&"JumpForce");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"RotateSpeed");
    il2cpp_runtime_helper_023445d0(&"TurnPause");
    il2cpp_runtime_helper_023445d0(&"TurnSpeed");
    g_data_057adf77 = '\x01';
  }
  ppIVar33 = (Il2CppType **)0x0;
  _Var35.rgctx_data = (Il2CppRGCTXData *)0x0;
  pIVar31 = (Il2CppClass *)0x0;
  pIVar32 = (Il2CppType *)0x0;
  pIVar28 = (InvokerMethod)0x0;
  pcVar29 = (char *)0x0;
  pIVar25 = (Il2CppMethodPointer)0x0;
  pIVar26 = (Il2CppMethodPointer)0x0;
  _Var36.genericMethod = (SimpleJSONFixed_JSONNode_o *)0x0;
  auStack_d0._48_8_ = (System_Collections_Generic_List_T__o *)0x0;
  auStack_d0._56_8_ = (Il2CppRGCTXData *)0x0;
  auStack_d0._32_8_ = (Il2CppClass *)0x0;
  auStack_d0._40_8_ = (Il2CppType *)0x0;
  auStack_d0._16_8_ = (InvokerMethod)0x0;
  auStack_d0._24_8_ = (Il2CppObject *)0x0;
  auStack_d0._0_8_ = (Il2CppMethodPointer)0x0;
  auStack_d0._8_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  auStack_d0._64_8_ = (SimpleJSONFixed_JSONNode_o *)0x0;
  Characters_BaseCharacter__Init(__this_08,uVar18 & 0xff,team_00,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar3 = 0;
  pCVar20 = pCVar17;
  bVar11 = SimpleJSONFixed_JSONNode__op_Inequality
                     ((SimpleJSONFixed_JSONNode_o *)pCVar17,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar11 == '\0') {
    return;
  }
  if (pCVar17 != (Characters_BaseShifter_o *)0x0) {
    pCVar7 = ((Il2CppClass_1 *)&pCVar17->klass)->image;
    cVar10 = (*pCVar7[2]._1.gc_desc)(pCVar17,"RunSpeedBase",pCVar7[2]._1.name);
    if (cVar10 != '\0') {
      pCVar7 = ((Il2CppClass_1 *)&pCVar17->klass)->image;
      uVar19 = "RunSpeedBase";
      pCVar20 = pCVar17;
      plVar14 = (long *)(*pCVar7[1]._1.this_arg.data)
                                  (pCVar17,"RunSpeedBase",*(undefined8 *)&pCVar7[1]._1.this_arg.bits);
      uVar3 = (undefined4)uVar19;
      if (plVar14 == (long *)0x0) goto label_04300cd6;
      uVar3 = (**(code **)(*plVar14 + 0x388))(plVar14,*(undefined8 *)(*plVar14 + 0x390));
      *(undefined4 *)&__this_08[1].fields.FeedVictimName = uVar3;
    }
    pCVar7 = ((Il2CppClass_1 *)&pCVar17->klass)->image;
    cVar10 = (*pCVar7[2]._1.gc_desc)(pCVar17,"RunSpeedPerLevel",pCVar7[2]._1.name);
    if (cVar10 != '\0') {
      pCVar7 = ((Il2CppClass_1 *)&pCVar17->klass)->image;
      uVar19 = "RunSpeedPerLevel";
      pCVar20 = pCVar17;
      plVar14 = (long *)(*pCVar7[1]._1.this_arg.data)
                                  (pCVar17,"RunSpeedPerLevel",*(undefined8 *)&pCVar7[1]._1.this_arg.bits);
      uVar3 = (undefined4)uVar19;
      if (plVar14 == (long *)0x0) goto label_04300cd6;
      bVar11 = (**(code **)(*plVar14 + 0x388))(plVar14,*(undefined8 *)(*plVar14 + 0x390));
      __this_08[1].fields.Dead = bVar11;
    }
    pCVar7 = ((Il2CppClass_1 *)&pCVar17->klass)->image;
    cVar10 = (*pCVar7[2]._1.gc_desc)(pCVar17,"WalkSpeedBase",pCVar7[2]._1.name);
    if (cVar10 != '\0') {
      pCVar7 = ((Il2CppClass_1 *)&pCVar17->klass)->image;
      uVar19 = "WalkSpeedBase";
      pCVar20 = pCVar17;
      plVar14 = (long *)(*pCVar7[1]._1.this_arg.data)
                                  (pCVar17,"WalkSpeedBase",*(undefined8 *)&pCVar7[1]._1.this_arg.bits);
      uVar3 = (undefined4)uVar19;
      if (plVar14 == (long *)0x0) goto label_04300cd6;
      uVar3 = (**(code **)(*plVar14 + 0x388))(plVar14,*(undefined8 *)(*plVar14 + 0x390));
      *(undefined4 *)((long)&__this_08[1].fields.FeedVictimName + 4) = uVar3;
    }
    pCVar7 = ((Il2CppClass_1 *)&pCVar17->klass)->image;
    cVar10 = (*pCVar7[2]._1.gc_desc)(pCVar17,"WalkSpeedPerLevel",pCVar7[2]._1.name);
    if (cVar10 != '\0') {
      pCVar7 = ((Il2CppClass_1 *)&pCVar17->klass)->image;
      uVar19 = "WalkSpeedPerLevel";
      pCVar20 = pCVar17;
      plVar14 = (long *)(*pCVar7[1]._1.this_arg.data)
                                  (pCVar17,"WalkSpeedPerLevel",*(undefined8 *)&pCVar7[1]._1.this_arg.bits);
      uVar3 = (undefined4)uVar19;
      if (plVar14 == (long *)0x0) goto label_04300cd6;
      bVar11 = (**(code **)(*plVar14 + 0x388))(plVar14,*(undefined8 *)(*plVar14 + 0x390));
      __this_08[1].fields.CustomDamageEnabled = bVar11;
    }
    pCVar7 = ((Il2CppClass_1 *)&pCVar17->klass)->image;
    cVar10 = (*pCVar7[2]._1.gc_desc)(pCVar17,"JumpForce",pCVar7[2]._1.name);
    if (cVar10 != '\0') {
      pCVar7 = ((Il2CppClass_1 *)&pCVar17->klass)->image;
      uVar19 = "JumpForce";
      pCVar20 = pCVar17;
      plVar14 = (long *)(*pCVar7[1]._1.this_arg.data)
                                  (pCVar17,"JumpForce",*(undefined8 *)&pCVar7[1]._1.this_arg.bits);
      uVar3 = (undefined4)uVar19;
      if (plVar14 == (long *)0x0) goto label_04300cd6;
      iVar23 = (**(code **)(*plVar14 + 0x388))(plVar14,*(undefined8 *)(*plVar14 + 0x390));
      __this_08[1].fields.CustomDamage = iVar23;
    }
    pCVar7 = ((Il2CppClass_1 *)&pCVar17->klass)->image;
    cVar10 = (*pCVar7[2]._1.gc_desc)(pCVar17,"RotateSpeed",pCVar7[2]._1.name);
    if (cVar10 != '\0') {
      pCVar7 = ((Il2CppClass_1 *)&pCVar17->klass)->image;
      uVar19 = "RotateSpeed";
      pCVar20 = pCVar17;
      plVar14 = (long *)(*pCVar7[1]._1.this_arg.data)
                                  (pCVar17,"RotateSpeed",*(undefined8 *)&pCVar7[1]._1.this_arg.bits);
      uVar3 = (undefined4)uVar19;
      if (plVar14 == (long *)0x0) goto label_04300cd6;
      uVar3 = (**(code **)(*plVar14 + 0x388))(plVar14,*(undefined8 *)(*plVar14 + 0x390));
      *(undefined4 *)&__this_08[1].fields.field_0x6c = uVar3;
    }
    pCVar7 = ((Il2CppClass_1 *)&pCVar17->klass)->image;
    cVar10 = (*pCVar7[2]._1.gc_desc)(pCVar17,"ActionPause",pCVar7[2]._1.name);
    if (cVar10 != '\0') {
      pCVar7 = ((Il2CppClass_1 *)&pCVar17->klass)->image;
      uVar19 = "ActionPause";
      pCVar20 = pCVar17;
      plVar14 = (long *)(*pCVar7[1]._1.this_arg.data)
                                  (pCVar17,"ActionPause",*(undefined8 *)&pCVar7[1]._1.this_arg.bits);
      uVar3 = (undefined4)uVar19;
      if (plVar14 == (long *)0x0) goto label_04300cd6;
      uVar3 = (**(code **)(*plVar14 + 0x388))(plVar14,*(undefined8 *)(*plVar14 + 0x390));
      *(undefined4 *)&__this_08[1].fields.pvCache = uVar3;
    }
    pCVar7 = ((Il2CppClass_1 *)&pCVar17->klass)->image;
    cVar10 = (*pCVar7[2]._1.gc_desc)(pCVar17,"TurnPause",pCVar7[2]._1.name);
    if (cVar10 != '\0') {
      pCVar7 = ((Il2CppClass_1 *)&pCVar17->klass)->image;
      uVar19 = "TurnPause";
      pCVar20 = pCVar17;
      plVar14 = (long *)(*pCVar7[1]._1.this_arg.data)
                                  (pCVar17,"TurnPause",*(undefined8 *)&pCVar7[1]._1.this_arg.bits);
      uVar3 = (undefined4)uVar19;
      if (plVar14 == (long *)0x0) goto label_04300cd6;
      bVar11 = (**(code **)(*plVar14 + 0x388))(plVar14,*(undefined8 *)(*plVar14 + 0x390));
      __this_08[1].fields.FootstepsEnabled = bVar11;
    }
    pCVar7 = ((Il2CppClass_1 *)&pCVar17->klass)->image;
    cVar10 = (*pCVar7[2]._1.gc_desc)(pCVar17,"AttackPause",pCVar7[2]._1.name);
    if (cVar10 != '\0') {
      pCVar7 = ((Il2CppClass_1 *)&pCVar17->klass)->image;
      uVar19 = "AttackPause";
      pCVar20 = pCVar17;
      plVar14 = (long *)(*pCVar7[1]._1.this_arg.data)
                                  (pCVar17,"AttackPause",*(undefined8 *)&pCVar7[1]._1.this_arg.bits);
      uVar3 = (undefined4)uVar19;
      if (plVar14 == (long *)0x0) goto label_04300cd6;
      uVar3 = (**(code **)(*plVar14 + 0x388))(plVar14,*(undefined8 *)(*plVar14 + 0x390));
      *(undefined4 *)((long)&__this_08[1].fields.pvCache + 4) = uVar3;
    }
    pCVar7 = ((Il2CppClass_1 *)&pCVar17->klass)->image;
    cVar10 = (*pCVar7[2]._1.gc_desc)(pCVar17,"Health",pCVar7[2]._1.name);
    if (cVar10 != '\0') {
      pCVar7 = ((Il2CppClass_1 *)&pCVar17->klass)->image;
      uVar19 = "Health";
      pCVar20 = pCVar17;
      plVar14 = (long *)(*pCVar7[1]._1.this_arg.data)
                                  (pCVar17,"Health",*(undefined8 *)&pCVar7[1]._1.this_arg.bits);
      uVar3 = (undefined4)uVar19;
      if (plVar14 == (long *)0x0) goto label_04300cd6;
      iVar23 = (**(code **)(*plVar14 + 0x368))(plVar14,*(undefined8 *)(*plVar14 + 0x370));
      Characters_BaseCharacter__SetHealth(__this_08,iVar23,(MethodInfo *)0x0);
    }
    pCVar7 = ((Il2CppClass_1 *)&pCVar17->klass)->image;
    cVar10 = (*pCVar7[2]._1.gc_desc)(pCVar17,"AttackSpeedMultiplier",pCVar7[2]._1.name);
    if (cVar10 != '\0') {
      pCVar7 = ((Il2CppClass_1 *)&pCVar17->klass)->image;
      uVar19 = "AttackSpeedMultiplier";
      pCVar20 = pCVar17;
      plVar14 = (long *)(*pCVar7[1]._1.this_arg.data)
                                  (pCVar17,"AttackSpeedMultiplier",*(undefined8 *)&pCVar7[1]._1.this_arg.bits);
      uVar3 = (undefined4)uVar19;
      if (plVar14 == (long *)0x0) goto label_04300cd6;
      uVar3 = (**(code **)(*plVar14 + 0x388))(plVar14,*(undefined8 *)(*plVar14 + 0x390));
      *(undefined4 *)&__this_08[1].fields.field_0x44 = uVar3;
    }
    pCVar7 = ((Il2CppClass_1 *)&pCVar17->klass)->image;
    cVar10 = (*pCVar7[2]._1.gc_desc)(pCVar17,"AttackSpeeds",pCVar7[2]._1.name);
    if (cVar10 != '\0') {
      pCVar7 = ((Il2CppClass_1 *)&pCVar17->klass)->image;
      uVar19 = "AttackSpeeds";
      pCVar20 = pCVar17;
      __this_07 = (SimpleJSONFixed_JSONNode_o *)
                  (*pCVar7[1]._1.this_arg.data)
                            (pCVar17,"AttackSpeeds",*(undefined8 *)&pCVar7[1]._1.this_arg.bits);
      uVar3 = (undefined4)uVar19;
      if (__this_07 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_04300cd6;
      SimpleJSONFixed_JSONNode__get_Keys
                ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&pIStack_118,__this_07,(MethodInfo *)0x0);
      auStack_d0._64_8_ = _Stack_d8;
      auStack_d0._48_8_ = pSStack_e8;
      auStack_d0._56_8_ = _Stack_e0;
      auStack_d0._32_8_ = pIStack_f8;
      auStack_d0._40_8_ = pIStack_f0;
      auStack_d0._16_8_ = pIStack_108;
      auStack_d0._24_8_ = pIStack_100;
      auStack_d0._0_8_ = pIStack_118;
      auStack_d0._8_8_ = pSStack_110;
      __this_01.fields.m_Enumerator.fields.m_Object.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar26;
      __this_01.fields.m_Enumerator.fields._0_8_ = pIVar25;
      __this_01.fields.m_Enumerator.fields.m_Object.fields._8_8_ = pIVar28;
      __this_01.fields.m_Enumerator.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar29;
      __this_01.fields.m_Enumerator.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar31;
      __this_01.fields.m_Enumerator.fields.m_Object.fields._32_8_ = pIVar32;
      __this_01.fields.m_Enumerator.fields.m_Array.fields._list =
           (System_Collections_Generic_List_T__o *)ppIVar33;
      __this_01.fields.m_Enumerator.fields.m_Array.fields._8_8_ = _Var35.rgctx_data;
      __this_01.fields.m_Enumerator.fields.m_Array.fields._current = _Var36.genericMethod;
      SimpleJSONFixed_JSONNode_KeyEnumerator__GetEnumerator
                ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&pIStack_118,__this_01,(MethodInfo *)auStack_d0);
      __this_02.fields.m_Enumerator.fields.m_Object.fields._dictionary = pSStack_110;
      __this_02.fields.m_Enumerator.fields._0_8_ = pIStack_118;
      __this_02.fields.m_Enumerator.fields.m_Object.fields._8_8_ = pIStack_108;
      __this_02.fields.m_Enumerator.fields.m_Object.fields._current.fields.key = pIStack_100;
      __this_02.fields.m_Enumerator.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIStack_f8;
      __this_02.fields.m_Enumerator.fields.m_Object.fields._32_8_ = pIStack_f0;
      __this_02.fields.m_Enumerator.fields.m_Array.fields._list = pSStack_e8;
      __this_02.fields.m_Enumerator.fields.m_Array.fields._8_8_ = _Stack_e0.rgctx_data;
      __this_02.fields.m_Enumerator.fields.m_Array.fields._current = _Stack_d8.genericMethod;
      bVar11 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                         (__this_02,(MethodInfo *)&stack0xfffffffffffffea0);
      cVar10 = (char)bVar11;
      pIVar25 = pIStack_118;
      pSVar27 = pSStack_110;
      pIVar28 = pIStack_108;
      pIVar30 = pIStack_100;
      pIVar31 = pIStack_f8;
      pIVar32 = pIStack_f0;
      pSVar34 = pSStack_e8;
      _Var35 = _Stack_e0;
      _Var36 = _Stack_d8;
      while (cVar10 != '\0') {
        __this_03.fields.m_Enumerator.fields.m_Object.fields._dictionary = pSVar27;
        __this_03.fields.m_Enumerator.fields._0_8_ = pIVar25;
        __this_03.fields.m_Enumerator.fields.m_Object.fields._8_8_ = pIVar28;
        __this_03.fields.m_Enumerator.fields.m_Object.fields._current.fields.key = pIVar30;
        __this_03.fields.m_Enumerator.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar31;
        __this_03.fields.m_Enumerator.fields.m_Object.fields._32_8_ = pIVar32;
        __this_03.fields.m_Enumerator.fields.m_Array.fields._list = pSVar34;
        __this_03.fields.m_Enumerator.fields.m_Array.fields._8_8_ = _Var35.rgctx_data;
        __this_03.fields.m_Enumerator.fields.m_Array.fields._current = _Var36.genericMethod;
        pSVar15 = SimpleJSONFixed_JSONNode_KeyEnumerator__get_Current
                            (__this_03,(MethodInfo *)&stack0xfffffffffffffea0);
        __this_00 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                    __this_08[1].fields.FeedKillerName;
        pCVar7 = ((Il2CppClass_1 *)&pCVar17->klass)->image;
        uVar19 = "AttackSpeeds";
        pCVar20 = pCVar17;
        pCVar13 = (Characters_BaseShifter_o *)
                  (*pCVar7[1]._1.this_arg.data)
                            (pCVar17,"AttackSpeeds",*(undefined8 *)&pCVar7[1]._1.this_arg.bits);
        uVar3 = (undefined4)uVar19;
        if (pCVar13 == (Characters_BaseShifter_o *)0x0) goto label_04300cd6;
        pCVar7 = ((Il2CppClass_1 *)&pCVar13->klass)->image;
        pSVar16 = pSVar15;
        pCVar12 = (Characters_BaseShifter_o *)
                  (*pCVar7[1]._1.this_arg.data)(pCVar13,pSVar15,*(undefined8 *)&pCVar7[1]._1.this_arg.bits);
        uVar3 = SUB84(pSVar16,0);
        pCVar20 = pCVar13;
        if (pCVar12 == (Characters_BaseShifter_o *)0x0) goto label_04300cd6;
        pCVar7 = ((Il2CppClass_1 *)&pCVar12->klass)->image;
        uVar3 = SUB84(pCVar7[2]._1.nestedTypes,0);
        fVar22 = (float)(*pCVar7[2]._1.methods)();
        pCVar20 = pCVar12;
        if (__this_00 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_04300cd6;
        System_Collections_Generic_Dictionary_object__float___Add
                  (__this_00,(Il2CppObject *)pSVar15,fVar22,MethodInfo_Void_Add);
        __this_04.fields.m_Enumerator.fields.m_Object.fields._dictionary = pSVar27;
        __this_04.fields.m_Enumerator.fields._0_8_ = pIVar25;
        __this_04.fields.m_Enumerator.fields.m_Object.fields._8_8_ = pIVar28;
        __this_04.fields.m_Enumerator.fields.m_Object.fields._current.fields.key = pIVar30;
        __this_04.fields.m_Enumerator.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar31;
        __this_04.fields.m_Enumerator.fields.m_Object.fields._32_8_ = pIVar32;
        __this_04.fields.m_Enumerator.fields.m_Array.fields._list = pSVar34;
        __this_04.fields.m_Enumerator.fields.m_Array.fields._8_8_ = _Var35.rgctx_data;
        __this_04.fields.m_Enumerator.fields.m_Array.fields._current = _Var36.genericMethod;
        bVar11 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                           (__this_04,(MethodInfo *)&stack0xfffffffffffffea0);
        cVar10 = (char)bVar11;
      }
    }
    pCVar7 = ((Il2CppClass_1 *)&pCVar17->klass)->image;
    cVar10 = (*pCVar7[2]._1.gc_desc)(pCVar17,"TurnSpeed",pCVar7[2]._1.name);
    if (cVar10 == '\0') {
      return;
    }
    pCVar7 = ((Il2CppClass_1 *)&pCVar17->klass)->image;
    uVar19 = "TurnSpeed";
    plVar14 = (long *)(*pCVar7[1]._1.this_arg.data)
                                (pCVar17,"TurnSpeed",*(undefined8 *)&pCVar7[1]._1.this_arg.bits);
    uVar3 = (undefined4)uVar19;
    pCVar20 = pCVar17;
    if (plVar14 != (long *)0x0) {
      uVar3 = (undefined4)*(undefined8 *)(*plVar14 + 0x390);
      uVar24 = (**(code **)(*plVar14 + 0x388))(plVar14);
      *(undefined4 *)&__this_08[1].fields.Cache = uVar24;
      pSVar15 = __this_08[1].fields.VisibleName;
      pCVar20 = (Characters_BaseShifter_o *)0x0;
      if (pSVar15 != (System_String_o *)0x0) {
        pSVar16 = (System_String_o *)
                  (*(pSVar15->klass->vtable)._19_System_IConvertible_ToUInt64.methodPtr)
                            (pSVar15,(pSVar15->klass->vtable)._19_System_IConvertible_ToUInt64.method);
        pSVar15 = "";
        bVar11 = System_String__op_Inequality(pSVar16,"",(MethodInfo *)0x0);
        uVar3 = SUB84(pSVar15,0);
        if ((char)bVar11 != '\0') {
          pSVar15 = __this_08[1].fields.VisibleName;
          pCVar20 = (Characters_BaseShifter_o *)0x0;
          if (pSVar15 == (System_String_o *)0x0) goto label_04300cd6;
          pCVar8 = *(Characters_AnimationHandler_o **)&(__this_08->fields)._cameraFPS;
          pSVar9 = pSVar15->klass;
          uVar3 = SUB84((pSVar9->vtable)._19_System_IConvertible_ToUInt64.method,0);
          pSVar15 = (System_String_o *)(*(pSVar9->vtable)._19_System_IConvertible_ToUInt64.methodPtr)();
          pCVar20 = (Characters_BaseShifter_o *)__this_08[1].fields.VisibleName;
          if (pCVar20 == (Characters_BaseShifter_o *)0x0) goto label_04300cd6;
          pCVar17 = *(Characters_BaseShifter_o **)&(__this_08->fields)._cameraFPS;
          pCVar7 = ((Il2CppClass_1 *)&pCVar20->klass)->image;
          uVar3 = pCVar7[1]._2.instance_size;
          pSVar16 = (System_String_o *)(*pCVar7[1]._2.genericContainerHandle)();
          if (pCVar17 == (Characters_BaseShifter_o *)0x0) goto label_04300cd6;
          fVar22 = Characters_AnimationHandler__GetSpeed
                             ((Characters_AnimationHandler_o *)pCVar17,pSVar16,(MethodInfo *)0x0);
          uVar3 = SUB84(pSVar16,0);
          pCVar20 = pCVar17;
          if (pCVar8 == (Characters_AnimationHandler_o *)0x0) goto label_04300cd6;
          Characters_AnimationHandler__SetSpeed
                    (pCVar8,pSVar15,fVar22 * *(float *)&__this_08[1].fields.Cache,(MethodInfo *)0x0);
          uVar3 = SUB84(pSVar15,0);
        }
        pSVar15 = __this_08[1].fields.VisibleName;
        pCVar20 = (Characters_BaseShifter_o *)0x0;
        if (pSVar15 != (System_String_o *)0x0) {
          pSVar16 = (System_String_o *)
                    (*(pSVar15->klass->vtable)._20_System_IConvertible_ToSingle.methodPtr)
                              (pSVar15,(pSVar15->klass->vtable)._20_System_IConvertible_ToSingle.method);
          pSVar15 = "";
          bVar11 = System_String__op_Inequality(pSVar16,"",(MethodInfo *)0x0);
          uVar3 = SUB84(pSVar15,0);
          if ((char)bVar11 == '\0') {
            return;
          }
          pSVar15 = __this_08[1].fields.VisibleName;
          pCVar20 = (Characters_BaseShifter_o *)0x0;
          if (pSVar15 != (System_String_o *)0x0) {
            pCVar8 = *(Characters_AnimationHandler_o **)&(__this_08->fields)._cameraFPS;
            pSVar9 = pSVar15->klass;
            uVar3 = SUB84((pSVar9->vtable)._20_System_IConvertible_ToSingle.method,0);
            pSVar15 = (System_String_o *)(*(pSVar9->vtable)._20_System_IConvertible_ToSingle.methodPtr)();
            pCVar20 = (Characters_BaseShifter_o *)__this_08[1].fields.VisibleName;
            if (pCVar20 != (Characters_BaseShifter_o *)0x0) {
              pCVar17 = *(Characters_BaseShifter_o **)&(__this_08->fields)._cameraFPS;
              pCVar7 = ((Il2CppClass_1 *)&pCVar20->klass)->image;
              uVar4 = pCVar7[1]._2.static_fields_size;
              uVar3 = uVar4;
              pSVar16 = (System_String_o *)(**(code **)&pCVar7[1]._2.element_size)();
              if (pCVar17 != (Characters_BaseShifter_o *)0x0) {
                fVar22 = Characters_AnimationHandler__GetSpeed
                                   ((Characters_AnimationHandler_o *)pCVar17,pSVar16,(MethodInfo *)0x0);
                uVar3 = SUB84(pSVar16,0);
                pCVar20 = pCVar17;
                if (pCVar8 != (Characters_AnimationHandler_o *)0x0) {
                  Characters_AnimationHandler__SetSpeed
                            (pCVar8,pSVar15,fVar22 * *(float *)&__this_08[1].fields.Cache,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
label_04300cd6:
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)pCVar20,(MethodInfo *)0x0);
  *(undefined4 *)&(pCVar20->fields).m_CachedPtr = uVar3;
  return;
}


// Characters.BaseShifter$$Init
// il2cpp: void Characters_BaseShifter__Init (Characters_BaseShifter_o* __this, bool ai, System_String_o* team, SimpleJSONFixed_JSONNode_o* data, float liveTime, const MethodInfo* method);
// 0x4300060

void Characters_BaseShifter__Init
               (Characters_BaseShifter_o *__this,bool_conflict ai,System_String_o *team,
               SimpleJSONFixed_JSONNode_o *data,float liveTime,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  Characters_AnimationHandler_c *pCVar5;
  System_Collections_Generic_Dictionary_TKey__TValue__o *__this_00;
  Characters_AnimationHandler_o *pCVar6;
  System_String_c *pSVar7;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_01;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_02;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_03;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_04;
  char cVar8;
  bool_conflict bVar9;
  Characters_BaseShifter_o *__this_05;
  Characters_BaseShifter_o *pCVar10;
  long *plVar11;
  System_String_o *pSVar12;
  UnityEngine_GameObject_o *__this_06;
  Characters_BaseCharacter_o *__this_07;
  SimpleJSONFixed_JSONNode_o *__this_08;
  Characters_BaseShifter_c *pCVar13;
  Characters_BaseShifter_c *pCVar14;
  System_String_o *pSVar15;
  Characters_BaseShifter_c *pCVar16;
  System_String_o *team_00;
  uint uVar17;
  undefined8 uVar18;
  Characters_BaseShifter_o *pCVar19;
  Characters_BaseCharacter_o *__this_09;
  Characters_BaseShifter_c *pCVar20;
  int32_t iVar21;
  float fVar22;
  undefined4 uVar23;
  Il2CppMethodPointer pIVar24;
  Il2CppMethodPointer pIVar25;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar26;
  InvokerMethod pIVar27;
  char *pcVar28;
  Il2CppObject *pIVar29;
  Il2CppClass *pIVar30;
  Il2CppType *pIVar31;
  Il2CppType **ppIVar32;
  System_Collections_Generic_List_T__o *pSVar33;
  _union_13 _Var34;
  _union_14 _Var35;
  Il2CppMethodPointer pIStack_110;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSStack_108;
  InvokerMethod pIStack_100;
  Il2CppObject *pIStack_f8;
  Il2CppClass *pIStack_f0;
  Il2CppType *pIStack_e8;
  System_Collections_Generic_List_T__o *pSStack_e0;
  _union_13 _Stack_d8;
  _union_14 _Stack_d0;
  undefined1 auStack_c8 [80];
  ulong uStack_78;
  
  pCVar16 = (Characters_BaseShifter_c *)data;
  if (g_data_057adf2c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AnnieShifter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ErenShifter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AnnieShifterPlayerController_AddComponent_AnnieShifterPl);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseTitanAIController_AddComponent_BaseTitanAIController);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ErenShifterPlayerController_AddComponent_ErenShifterPlay);
    il2cpp_runtime_helper_023445d0(&MethodInfo_WallColossalAIController_AddComponent_WallColossalAICont);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WallColossalShifter);
    il2cpp_runtime_helper_023445d0(&"Name");
    g_data_057adf2c = '\x01';
  }
  pCVar19 = __this;
  if ((char)ai == '\0') {
    if (__this == (Characters_BaseShifter_o *)0x0) {
joined_r0x04300189:
      if (liveTime <= 0.0) goto label_043002c0;
      if (g_data_057adf2d == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndBecomeHuman_d__26);
        g_data_057adf2d = '\x01';
      }
      pCVar10 = (Characters_BaseShifter_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndBecomeHuman_d__26);
      pCVar19 = pCVar10;
      System_Object___ctor((Il2CppObject *)pCVar10,(MethodInfo *)0x0);
      *(undefined4 *)&(pCVar10->fields).m_CachedPtr = 0;
      if (pCVar10 != (Characters_BaseShifter_o *)0x0) {
        *(Characters_BaseShifter_o **)&(pCVar10->fields).FootstepsEnabled = __this;
        il2cpp_runtime_helper_022b4080(&(pCVar10->fields).FootstepsEnabled,__this);
        *(float *)&(pCVar10->fields).pvCache = liveTime;
        UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                  ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)pCVar10,
                   (MethodInfo *)0x0);
        goto label_043002c0;
      }
    }
    else {
      pCVar20 = __this->klass;
      bVar1 = (pCVar20->_2).naturalAligment;
      pCVar16 = (Characters_BaseShifter_c *)CONCAT71((int7)((ulong)pCVar16 >> 8),bVar1);
      bVar2 = (TypeInfo_ErenShifter->_2).naturalAligment;
      if ((bVar1 < bVar2) || ((pCVar20->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_ErenShifter)) {
        bVar2 = (TypeInfo_AnnieShifter->_2).naturalAligment;
        if ((bVar1 < bVar2) || ((pCVar20->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_AnnieShifter))
        goto joined_r0x04300189;
        __this_06 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
        ;
        if (__this_06 != (UnityEngine_GameObject_o *)0x0) {
          pCVar16 = (Characters_BaseShifter_c *)&MethodInfo_AnnieShifterPlayerController_AddComponent_AnnieShifterPl;
          goto label_04300318;
        }
      }
      else {
        __this_06 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
        ;
        if (__this_06 != (UnityEngine_GameObject_o *)0x0) {
          pCVar16 = (Characters_BaseShifter_c *)&MethodInfo_ErenShifterPlayerController_AddComponent_ErenShifterPlay;
label_04300318:
          UnityEngine_GameObject__AddComponent_object_(__this_06,(MethodInfo_255A020 *)(pCVar16->_1).image);
          goto joined_r0x04300189;
        }
      }
    }
  }
  else {
    if (__this == (Characters_BaseShifter_o *)0x0) {
label_0430011e:
      pCVar10 = (Characters_BaseShifter_o *)0x0;
    }
    else {
      bVar1 = (TypeInfo_WallColossalShifter->_2).naturalAligment;
      pCVar16 = (Characters_BaseShifter_c *)(ulong)bVar1;
      if ((__this->klass->_2).naturalAligment < bVar1) goto label_0430011e;
      pCVar10 = (Characters_BaseShifter_o *)0x0;
      if ((__this->klass->_2).typeHierarchy
          [(long)((long)&pCVar16[-1].vtable._178_CreateCustomSkinLoader.method + 7)] == TypeInfo_WallColossalShifter) {
        pCVar10 = __this;
      }
    }
    __this_05 = (Characters_BaseShifter_o *)
                UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_05 != (Characters_BaseShifter_o *)0x0) {
      if (pCVar10 == (Characters_BaseShifter_o *)0x0) {
        pCVar16 = (Characters_BaseShifter_c *)&MethodInfo_BaseTitanAIController_AddComponent_BaseTitanAIController;
      }
      else {
        pCVar16 = (Characters_BaseShifter_c *)&MethodInfo_WallColossalAIController_AddComponent_WallColossalAICont;
      }
      pCVar10 = (Characters_BaseShifter_o *)
                UnityEngine_GameObject__AddComponent_object_
                          ((UnityEngine_GameObject_o *)__this_05,(MethodInfo_255A020 *)(pCVar16->_1).image);
      pCVar19 = __this_05;
      if (pCVar10 != (Characters_BaseShifter_o *)0x0) {
        pCVar16 = pCVar10->klass;
        (*(pCVar16->vtable)._9_unknown.methodPtr)(pCVar10,data,(pCVar16->vtable)._9_unknown.method);
        pCVar19 = pCVar10;
        if ((data != (SimpleJSONFixed_JSONNode_o *)0x0) &&
           (pCVar19 = (Characters_BaseShifter_o *)data,
           plVar11 = (long *)(*(data->klass->vtable)._7_get_Item.methodPtr)
                                       (data,"Name",(data->klass->vtable)._7_get_Item.method),
           plVar11 != (long *)0x0)) {
          pSVar12 = (System_String_o *)
                    (**(code **)(*plVar11 + 0x1c8))(plVar11,*(undefined8 *)(*plVar11 + 0x1d0));
          Characters_BaseCharacter__set_Name((Characters_BaseCharacter_o *)__this,pSVar12,(MethodInfo *)0x0);
label_043002c0:
          Characters_BaseTitan__Init((Characters_BaseTitan_o *)__this,ai & 0xff,team,data,method);
          return;
        }
      }
    }
  }
  uVar3 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057adf2d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndBecomeHuman_d__26);
    g_data_057adf2d = '\x01';
  }
  __this_07 = (Characters_BaseCharacter_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndBecomeHuman_d__26);
  uVar17 = 0;
  __this_09 = __this_07;
  System_Object___ctor((Il2CppObject *)__this_07,(MethodInfo *)0x0);
  *(undefined4 *)&(__this_07->fields).m_CachedPtr = 0;
  if (__this_07 != (Characters_BaseCharacter_o *)0x0) {
    *(Characters_BaseShifter_o **)&(__this_07->fields).FootstepsEnabled = pCVar19;
    il2cpp_runtime_helper_022b4080(&(__this_07->fields).FootstepsEnabled,pCVar19);
    *(undefined4 *)&(__this_07->fields).pvCache = uVar3;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  auStack_c8._72_8_ = __this_07;
  uStack_78 = (ulong)(uint)ai;
  if (g_data_057adf77 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&"AttackPause");
    il2cpp_runtime_helper_023445d0(&"AttackSpeeds");
    il2cpp_runtime_helper_023445d0(&"RunSpeedPerLevel");
    il2cpp_runtime_helper_023445d0(&"WalkSpeedBase");
    il2cpp_runtime_helper_023445d0(&"ActionPause");
    il2cpp_runtime_helper_023445d0(&"WalkSpeedPerLevel");
    il2cpp_runtime_helper_023445d0(&"AttackSpeedMultiplier");
    il2cpp_runtime_helper_023445d0(&"Health");
    il2cpp_runtime_helper_023445d0(&"RunSpeedBase");
    il2cpp_runtime_helper_023445d0(&"JumpForce");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"RotateSpeed");
    il2cpp_runtime_helper_023445d0(&"TurnPause");
    il2cpp_runtime_helper_023445d0(&"TurnSpeed");
    g_data_057adf77 = '\x01';
  }
  ppIVar32 = (Il2CppType **)0x0;
  _Var34.rgctx_data = (Il2CppRGCTXData *)0x0;
  pIVar30 = (Il2CppClass *)0x0;
  pIVar31 = (Il2CppType *)0x0;
  pIVar27 = (InvokerMethod)0x0;
  pcVar28 = (char *)0x0;
  pIVar24 = (Il2CppMethodPointer)0x0;
  pIVar25 = (Il2CppMethodPointer)0x0;
  _Var35.genericMethod = (SimpleJSONFixed_JSONNode_o *)0x0;
  auStack_c8._48_8_ = (System_Collections_Generic_List_T__o *)0x0;
  auStack_c8._56_8_ = (Il2CppRGCTXData *)0x0;
  auStack_c8._32_8_ = (Il2CppClass *)0x0;
  auStack_c8._40_8_ = (Il2CppType *)0x0;
  auStack_c8._16_8_ = (InvokerMethod)0x0;
  auStack_c8._24_8_ = (Il2CppObject *)0x0;
  auStack_c8._0_8_ = (Il2CppMethodPointer)0x0;
  auStack_c8._8_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  auStack_c8._64_8_ = (SimpleJSONFixed_JSONNode_o *)0x0;
  Characters_BaseCharacter__Init(__this_09,uVar17 & 0xff,team_00,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar3 = 0;
  pCVar20 = pCVar16;
  bVar9 = SimpleJSONFixed_JSONNode__op_Inequality
                    ((SimpleJSONFixed_JSONNode_o *)pCVar16,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar9 == '\0') {
    return;
  }
  if (pCVar16 != (Characters_BaseShifter_c *)0x0) {
    pCVar5 = (pCVar16->_1).image;
    cVar8 = (*pCVar5[2]._1.gc_desc)(pCVar16,"RunSpeedBase",pCVar5[2]._1.name);
    if (cVar8 != '\0') {
      pCVar5 = (pCVar16->_1).image;
      uVar18 = "RunSpeedBase";
      pCVar20 = pCVar16;
      plVar11 = (long *)(*pCVar5[1]._1.this_arg.data)
                                  (pCVar16,"RunSpeedBase",*(undefined8 *)&pCVar5[1]._1.this_arg.bits);
      uVar3 = (undefined4)uVar18;
      if (plVar11 == (long *)0x0) goto label_04300cd6;
      uVar3 = (**(code **)(*plVar11 + 0x388))(plVar11,*(undefined8 *)(*plVar11 + 0x390));
      *(undefined4 *)&__this_09[1].fields.FeedVictimName = uVar3;
    }
    pCVar5 = (pCVar16->_1).image;
    cVar8 = (*pCVar5[2]._1.gc_desc)(pCVar16,"RunSpeedPerLevel",pCVar5[2]._1.name);
    if (cVar8 != '\0') {
      pCVar5 = (pCVar16->_1).image;
      uVar18 = "RunSpeedPerLevel";
      pCVar20 = pCVar16;
      plVar11 = (long *)(*pCVar5[1]._1.this_arg.data)
                                  (pCVar16,"RunSpeedPerLevel",*(undefined8 *)&pCVar5[1]._1.this_arg.bits);
      uVar3 = (undefined4)uVar18;
      if (plVar11 == (long *)0x0) goto label_04300cd6;
      bVar9 = (**(code **)(*plVar11 + 0x388))(plVar11,*(undefined8 *)(*plVar11 + 0x390));
      __this_09[1].fields.Dead = bVar9;
    }
    pCVar5 = (pCVar16->_1).image;
    cVar8 = (*pCVar5[2]._1.gc_desc)(pCVar16,"WalkSpeedBase",pCVar5[2]._1.name);
    if (cVar8 != '\0') {
      pCVar5 = (pCVar16->_1).image;
      uVar18 = "WalkSpeedBase";
      pCVar20 = pCVar16;
      plVar11 = (long *)(*pCVar5[1]._1.this_arg.data)
                                  (pCVar16,"WalkSpeedBase",*(undefined8 *)&pCVar5[1]._1.this_arg.bits);
      uVar3 = (undefined4)uVar18;
      if (plVar11 == (long *)0x0) goto label_04300cd6;
      uVar3 = (**(code **)(*plVar11 + 0x388))(plVar11,*(undefined8 *)(*plVar11 + 0x390));
      *(undefined4 *)((long)&__this_09[1].fields.FeedVictimName + 4) = uVar3;
    }
    pCVar5 = (pCVar16->_1).image;
    cVar8 = (*pCVar5[2]._1.gc_desc)(pCVar16,"WalkSpeedPerLevel",pCVar5[2]._1.name);
    if (cVar8 != '\0') {
      pCVar5 = (pCVar16->_1).image;
      uVar18 = "WalkSpeedPerLevel";
      pCVar20 = pCVar16;
      plVar11 = (long *)(*pCVar5[1]._1.this_arg.data)
                                  (pCVar16,"WalkSpeedPerLevel",*(undefined8 *)&pCVar5[1]._1.this_arg.bits);
      uVar3 = (undefined4)uVar18;
      if (plVar11 == (long *)0x0) goto label_04300cd6;
      bVar9 = (**(code **)(*plVar11 + 0x388))(plVar11,*(undefined8 *)(*plVar11 + 0x390));
      __this_09[1].fields.CustomDamageEnabled = bVar9;
    }
    pCVar5 = (pCVar16->_1).image;
    cVar8 = (*pCVar5[2]._1.gc_desc)(pCVar16,"JumpForce",pCVar5[2]._1.name);
    if (cVar8 != '\0') {
      pCVar5 = (pCVar16->_1).image;
      uVar18 = "JumpForce";
      pCVar20 = pCVar16;
      plVar11 = (long *)(*pCVar5[1]._1.this_arg.data)
                                  (pCVar16,"JumpForce",*(undefined8 *)&pCVar5[1]._1.this_arg.bits);
      uVar3 = (undefined4)uVar18;
      if (plVar11 == (long *)0x0) goto label_04300cd6;
      iVar21 = (**(code **)(*plVar11 + 0x388))(plVar11,*(undefined8 *)(*plVar11 + 0x390));
      __this_09[1].fields.CustomDamage = iVar21;
    }
    pCVar5 = (pCVar16->_1).image;
    cVar8 = (*pCVar5[2]._1.gc_desc)(pCVar16,"RotateSpeed",pCVar5[2]._1.name);
    if (cVar8 != '\0') {
      pCVar5 = (pCVar16->_1).image;
      uVar18 = "RotateSpeed";
      pCVar20 = pCVar16;
      plVar11 = (long *)(*pCVar5[1]._1.this_arg.data)
                                  (pCVar16,"RotateSpeed",*(undefined8 *)&pCVar5[1]._1.this_arg.bits);
      uVar3 = (undefined4)uVar18;
      if (plVar11 == (long *)0x0) goto label_04300cd6;
      uVar3 = (**(code **)(*plVar11 + 0x388))(plVar11,*(undefined8 *)(*plVar11 + 0x390));
      *(undefined4 *)&__this_09[1].fields.field_0x6c = uVar3;
    }
    pCVar5 = (pCVar16->_1).image;
    cVar8 = (*pCVar5[2]._1.gc_desc)(pCVar16,"ActionPause",pCVar5[2]._1.name);
    if (cVar8 != '\0') {
      pCVar5 = (pCVar16->_1).image;
      uVar18 = "ActionPause";
      pCVar20 = pCVar16;
      plVar11 = (long *)(*pCVar5[1]._1.this_arg.data)
                                  (pCVar16,"ActionPause",*(undefined8 *)&pCVar5[1]._1.this_arg.bits);
      uVar3 = (undefined4)uVar18;
      if (plVar11 == (long *)0x0) goto label_04300cd6;
      uVar3 = (**(code **)(*plVar11 + 0x388))(plVar11,*(undefined8 *)(*plVar11 + 0x390));
      *(undefined4 *)&__this_09[1].fields.pvCache = uVar3;
    }
    pCVar5 = (pCVar16->_1).image;
    cVar8 = (*pCVar5[2]._1.gc_desc)(pCVar16,"TurnPause",pCVar5[2]._1.name);
    if (cVar8 != '\0') {
      pCVar5 = (pCVar16->_1).image;
      uVar18 = "TurnPause";
      pCVar20 = pCVar16;
      plVar11 = (long *)(*pCVar5[1]._1.this_arg.data)
                                  (pCVar16,"TurnPause",*(undefined8 *)&pCVar5[1]._1.this_arg.bits);
      uVar3 = (undefined4)uVar18;
      if (plVar11 == (long *)0x0) goto label_04300cd6;
      bVar9 = (**(code **)(*plVar11 + 0x388))(plVar11,*(undefined8 *)(*plVar11 + 0x390));
      __this_09[1].fields.FootstepsEnabled = bVar9;
    }
    pCVar5 = (pCVar16->_1).image;
    cVar8 = (*pCVar5[2]._1.gc_desc)(pCVar16,"AttackPause",pCVar5[2]._1.name);
    if (cVar8 != '\0') {
      pCVar5 = (pCVar16->_1).image;
      uVar18 = "AttackPause";
      pCVar20 = pCVar16;
      plVar11 = (long *)(*pCVar5[1]._1.this_arg.data)
                                  (pCVar16,"AttackPause",*(undefined8 *)&pCVar5[1]._1.this_arg.bits);
      uVar3 = (undefined4)uVar18;
      if (plVar11 == (long *)0x0) goto label_04300cd6;
      uVar3 = (**(code **)(*plVar11 + 0x388))(plVar11,*(undefined8 *)(*plVar11 + 0x390));
      *(undefined4 *)((long)&__this_09[1].fields.pvCache + 4) = uVar3;
    }
    pCVar5 = (pCVar16->_1).image;
    cVar8 = (*pCVar5[2]._1.gc_desc)(pCVar16,"Health",pCVar5[2]._1.name);
    if (cVar8 != '\0') {
      pCVar5 = (pCVar16->_1).image;
      uVar18 = "Health";
      pCVar20 = pCVar16;
      plVar11 = (long *)(*pCVar5[1]._1.this_arg.data)
                                  (pCVar16,"Health",*(undefined8 *)&pCVar5[1]._1.this_arg.bits);
      uVar3 = (undefined4)uVar18;
      if (plVar11 == (long *)0x0) goto label_04300cd6;
      iVar21 = (**(code **)(*plVar11 + 0x368))(plVar11,*(undefined8 *)(*plVar11 + 0x370));
      Characters_BaseCharacter__SetHealth(__this_09,iVar21,(MethodInfo *)0x0);
    }
    pCVar5 = (pCVar16->_1).image;
    cVar8 = (*pCVar5[2]._1.gc_desc)(pCVar16,"AttackSpeedMultiplier",pCVar5[2]._1.name);
    if (cVar8 != '\0') {
      pCVar5 = (pCVar16->_1).image;
      uVar18 = "AttackSpeedMultiplier";
      pCVar20 = pCVar16;
      plVar11 = (long *)(*pCVar5[1]._1.this_arg.data)
                                  (pCVar16,"AttackSpeedMultiplier",*(undefined8 *)&pCVar5[1]._1.this_arg.bits);
      uVar3 = (undefined4)uVar18;
      if (plVar11 == (long *)0x0) goto label_04300cd6;
      uVar3 = (**(code **)(*plVar11 + 0x388))(plVar11,*(undefined8 *)(*plVar11 + 0x390));
      *(undefined4 *)&__this_09[1].fields.field_0x44 = uVar3;
    }
    pCVar5 = (pCVar16->_1).image;
    cVar8 = (*pCVar5[2]._1.gc_desc)(pCVar16,"AttackSpeeds",pCVar5[2]._1.name);
    if (cVar8 != '\0') {
      pCVar5 = (pCVar16->_1).image;
      uVar18 = "AttackSpeeds";
      pCVar20 = pCVar16;
      __this_08 = (SimpleJSONFixed_JSONNode_o *)
                  (*pCVar5[1]._1.this_arg.data)
                            (pCVar16,"AttackSpeeds",*(undefined8 *)&pCVar5[1]._1.this_arg.bits);
      uVar3 = (undefined4)uVar18;
      if (__this_08 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_04300cd6;
      SimpleJSONFixed_JSONNode__get_Keys
                ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&pIStack_110,__this_08,(MethodInfo *)0x0);
      auStack_c8._64_8_ = _Stack_d0;
      auStack_c8._48_8_ = pSStack_e0;
      auStack_c8._56_8_ = _Stack_d8;
      auStack_c8._32_8_ = pIStack_f0;
      auStack_c8._40_8_ = pIStack_e8;
      auStack_c8._16_8_ = pIStack_100;
      auStack_c8._24_8_ = pIStack_f8;
      auStack_c8._0_8_ = pIStack_110;
      auStack_c8._8_8_ = pSStack_108;
      __this_01.fields.m_Enumerator.fields.m_Object.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar25;
      __this_01.fields.m_Enumerator.fields._0_8_ = pIVar24;
      __this_01.fields.m_Enumerator.fields.m_Object.fields._8_8_ = pIVar27;
      __this_01.fields.m_Enumerator.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar28;
      __this_01.fields.m_Enumerator.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar30;
      __this_01.fields.m_Enumerator.fields.m_Object.fields._32_8_ = pIVar31;
      __this_01.fields.m_Enumerator.fields.m_Array.fields._list =
           (System_Collections_Generic_List_T__o *)ppIVar32;
      __this_01.fields.m_Enumerator.fields.m_Array.fields._8_8_ = _Var34.rgctx_data;
      __this_01.fields.m_Enumerator.fields.m_Array.fields._current = _Var35.genericMethod;
      SimpleJSONFixed_JSONNode_KeyEnumerator__GetEnumerator
                ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&pIStack_110,__this_01,(MethodInfo *)auStack_c8);
      __this_02.fields.m_Enumerator.fields.m_Object.fields._dictionary = pSStack_108;
      __this_02.fields.m_Enumerator.fields._0_8_ = pIStack_110;
      __this_02.fields.m_Enumerator.fields.m_Object.fields._8_8_ = pIStack_100;
      __this_02.fields.m_Enumerator.fields.m_Object.fields._current.fields.key = pIStack_f8;
      __this_02.fields.m_Enumerator.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIStack_f0;
      __this_02.fields.m_Enumerator.fields.m_Object.fields._32_8_ = pIStack_e8;
      __this_02.fields.m_Enumerator.fields.m_Array.fields._list = pSStack_e0;
      __this_02.fields.m_Enumerator.fields.m_Array.fields._8_8_ = _Stack_d8.rgctx_data;
      __this_02.fields.m_Enumerator.fields.m_Array.fields._current = _Stack_d0.genericMethod;
      bVar9 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                        (__this_02,(MethodInfo *)&stack0xfffffffffffffea8);
      cVar8 = (char)bVar9;
      pIVar24 = pIStack_110;
      pSVar26 = pSStack_108;
      pIVar27 = pIStack_100;
      pIVar29 = pIStack_f8;
      pIVar30 = pIStack_f0;
      pIVar31 = pIStack_e8;
      pSVar33 = pSStack_e0;
      _Var34 = _Stack_d8;
      _Var35 = _Stack_d0;
      while (cVar8 != '\0') {
        __this_03.fields.m_Enumerator.fields.m_Object.fields._dictionary = pSVar26;
        __this_03.fields.m_Enumerator.fields._0_8_ = pIVar24;
        __this_03.fields.m_Enumerator.fields.m_Object.fields._8_8_ = pIVar27;
        __this_03.fields.m_Enumerator.fields.m_Object.fields._current.fields.key = pIVar29;
        __this_03.fields.m_Enumerator.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar30;
        __this_03.fields.m_Enumerator.fields.m_Object.fields._32_8_ = pIVar31;
        __this_03.fields.m_Enumerator.fields.m_Array.fields._list = pSVar33;
        __this_03.fields.m_Enumerator.fields.m_Array.fields._8_8_ = _Var34.rgctx_data;
        __this_03.fields.m_Enumerator.fields.m_Array.fields._current = _Var35.genericMethod;
        pSVar12 = SimpleJSONFixed_JSONNode_KeyEnumerator__get_Current
                            (__this_03,(MethodInfo *)&stack0xfffffffffffffea8);
        __this_00 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                    __this_09[1].fields.FeedKillerName;
        pCVar5 = (pCVar16->_1).image;
        uVar18 = "AttackSpeeds";
        pCVar20 = pCVar16;
        pCVar13 = (Characters_BaseShifter_c *)
                  (*pCVar5[1]._1.this_arg.data)
                            (pCVar16,"AttackSpeeds",*(undefined8 *)&pCVar5[1]._1.this_arg.bits);
        uVar3 = (undefined4)uVar18;
        if (pCVar13 == (Characters_BaseShifter_c *)0x0) goto label_04300cd6;
        pCVar5 = (pCVar13->_1).image;
        pSVar15 = pSVar12;
        pCVar14 = (Characters_BaseShifter_c *)
                  (*pCVar5[1]._1.this_arg.data)(pCVar13,pSVar12,*(undefined8 *)&pCVar5[1]._1.this_arg.bits);
        uVar3 = SUB84(pSVar15,0);
        pCVar20 = pCVar13;
        if (pCVar14 == (Characters_BaseShifter_c *)0x0) goto label_04300cd6;
        pCVar5 = (pCVar14->_1).image;
        uVar3 = SUB84(pCVar5[2]._1.nestedTypes,0);
        fVar22 = (float)(*pCVar5[2]._1.methods)();
        pCVar20 = pCVar14;
        if (__this_00 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_04300cd6;
        System_Collections_Generic_Dictionary_object__float___Add
                  (__this_00,(Il2CppObject *)pSVar12,fVar22,MethodInfo_Void_Add);
        __this_04.fields.m_Enumerator.fields.m_Object.fields._dictionary = pSVar26;
        __this_04.fields.m_Enumerator.fields._0_8_ = pIVar24;
        __this_04.fields.m_Enumerator.fields.m_Object.fields._8_8_ = pIVar27;
        __this_04.fields.m_Enumerator.fields.m_Object.fields._current.fields.key = pIVar29;
        __this_04.fields.m_Enumerator.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar30;
        __this_04.fields.m_Enumerator.fields.m_Object.fields._32_8_ = pIVar31;
        __this_04.fields.m_Enumerator.fields.m_Array.fields._list = pSVar33;
        __this_04.fields.m_Enumerator.fields.m_Array.fields._8_8_ = _Var34.rgctx_data;
        __this_04.fields.m_Enumerator.fields.m_Array.fields._current = _Var35.genericMethod;
        bVar9 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                          (__this_04,(MethodInfo *)&stack0xfffffffffffffea8);
        cVar8 = (char)bVar9;
      }
    }
    pCVar5 = (pCVar16->_1).image;
    cVar8 = (*pCVar5[2]._1.gc_desc)(pCVar16,"TurnSpeed",pCVar5[2]._1.name);
    if (cVar8 == '\0') {
      return;
    }
    pCVar5 = (pCVar16->_1).image;
    uVar18 = "TurnSpeed";
    plVar11 = (long *)(*pCVar5[1]._1.this_arg.data)
                                (pCVar16,"TurnSpeed",*(undefined8 *)&pCVar5[1]._1.this_arg.bits);
    uVar3 = (undefined4)uVar18;
    pCVar20 = pCVar16;
    if (plVar11 != (long *)0x0) {
      uVar3 = (undefined4)*(undefined8 *)(*plVar11 + 0x390);
      uVar23 = (**(code **)(*plVar11 + 0x388))(plVar11);
      *(undefined4 *)&__this_09[1].fields.Cache = uVar23;
      pSVar12 = __this_09[1].fields.VisibleName;
      pCVar20 = (Characters_BaseShifter_c *)0x0;
      if (pSVar12 != (System_String_o *)0x0) {
        pSVar15 = (System_String_o *)
                  (*(pSVar12->klass->vtable)._19_System_IConvertible_ToUInt64.methodPtr)
                            (pSVar12,(pSVar12->klass->vtable)._19_System_IConvertible_ToUInt64.method);
        pSVar12 = "";
        bVar9 = System_String__op_Inequality(pSVar15,"",(MethodInfo *)0x0);
        uVar3 = SUB84(pSVar12,0);
        if ((char)bVar9 != '\0') {
          pSVar12 = __this_09[1].fields.VisibleName;
          pCVar20 = (Characters_BaseShifter_c *)0x0;
          if (pSVar12 == (System_String_o *)0x0) goto label_04300cd6;
          pCVar6 = *(Characters_AnimationHandler_o **)&(__this_09->fields)._cameraFPS;
          pSVar7 = pSVar12->klass;
          uVar3 = SUB84((pSVar7->vtable)._19_System_IConvertible_ToUInt64.method,0);
          pSVar12 = (System_String_o *)(*(pSVar7->vtable)._19_System_IConvertible_ToUInt64.methodPtr)();
          pCVar20 = (Characters_BaseShifter_c *)__this_09[1].fields.VisibleName;
          if (pCVar20 == (Characters_BaseShifter_c *)0x0) goto label_04300cd6;
          pCVar16 = *(Characters_BaseShifter_c **)&(__this_09->fields)._cameraFPS;
          pCVar5 = (pCVar20->_1).image;
          uVar3 = pCVar5[1]._2.instance_size;
          pSVar15 = (System_String_o *)(*pCVar5[1]._2.genericContainerHandle)();
          if (pCVar16 == (Characters_BaseShifter_c *)0x0) goto label_04300cd6;
          fVar22 = Characters_AnimationHandler__GetSpeed
                             ((Characters_AnimationHandler_o *)pCVar16,pSVar15,(MethodInfo *)0x0);
          uVar3 = SUB84(pSVar15,0);
          pCVar20 = pCVar16;
          if (pCVar6 == (Characters_AnimationHandler_o *)0x0) goto label_04300cd6;
          Characters_AnimationHandler__SetSpeed
                    (pCVar6,pSVar12,fVar22 * *(float *)&__this_09[1].fields.Cache,(MethodInfo *)0x0);
          uVar3 = SUB84(pSVar12,0);
        }
        pSVar12 = __this_09[1].fields.VisibleName;
        pCVar20 = (Characters_BaseShifter_c *)0x0;
        if (pSVar12 != (System_String_o *)0x0) {
          pSVar15 = (System_String_o *)
                    (*(pSVar12->klass->vtable)._20_System_IConvertible_ToSingle.methodPtr)
                              (pSVar12,(pSVar12->klass->vtable)._20_System_IConvertible_ToSingle.method);
          pSVar12 = "";
          bVar9 = System_String__op_Inequality(pSVar15,"",(MethodInfo *)0x0);
          uVar3 = SUB84(pSVar12,0);
          if ((char)bVar9 == '\0') {
            return;
          }
          pSVar12 = __this_09[1].fields.VisibleName;
          pCVar20 = (Characters_BaseShifter_c *)0x0;
          if (pSVar12 != (System_String_o *)0x0) {
            pCVar6 = *(Characters_AnimationHandler_o **)&(__this_09->fields)._cameraFPS;
            pSVar7 = pSVar12->klass;
            uVar3 = SUB84((pSVar7->vtable)._20_System_IConvertible_ToSingle.method,0);
            pSVar12 = (System_String_o *)(*(pSVar7->vtable)._20_System_IConvertible_ToSingle.methodPtr)();
            pCVar20 = (Characters_BaseShifter_c *)__this_09[1].fields.VisibleName;
            if (pCVar20 != (Characters_BaseShifter_c *)0x0) {
              pCVar16 = *(Characters_BaseShifter_c **)&(__this_09->fields)._cameraFPS;
              pCVar5 = (pCVar20->_1).image;
              uVar4 = pCVar5[1]._2.static_fields_size;
              uVar3 = uVar4;
              pSVar15 = (System_String_o *)(**(code **)&pCVar5[1]._2.element_size)();
              if (pCVar16 != (Characters_BaseShifter_c *)0x0) {
                fVar22 = Characters_AnimationHandler__GetSpeed
                                   ((Characters_AnimationHandler_o *)pCVar16,pSVar15,(MethodInfo *)0x0);
                uVar3 = SUB84(pSVar15,0);
                pCVar20 = pCVar16;
                if (pCVar6 != (Characters_AnimationHandler_o *)0x0) {
                  Characters_AnimationHandler__SetSpeed
                            (pCVar6,pSVar12,fVar22 * *(float *)&__this_09[1].fields.Cache,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
label_04300cd6:
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)pCVar20,(MethodInfo *)0x0);
  *(undefined4 *)&((Characters_AnimationHandler_Fields *)&(pCVar20->_1).name)->Animation = uVar3;
  return;
}


// Characters.BaseShifter$$WaitAndBecomeHuman
// il2cpp: System_Collections_IEnumerator_o* Characters_BaseShifter__WaitAndBecomeHuman (Characters_BaseShifter_o* __this, float time, const MethodInfo* method);
// 0x4300340

System_Collections_IEnumerator_o *
Characters_BaseShifter__WaitAndBecomeHuman(Characters_BaseShifter_o *__this,float time,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  System_Collections_Generic_Dictionary_TKey__TValue__o *__this_00;
  System_String_c *pSVar3;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_01;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_02;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_03;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_04;
  char cVar4;
  bool_conflict bVar5;
  Characters_BaseCharacter_o *__this_05;
  undefined4 extraout_var;
  long *plVar6;
  SimpleJSONFixed_JSONNode_o *__this_06;
  System_String_o *pSVar7;
  Characters_AnimationHandler_o *pCVar8;
  Characters_AnimationHandler_o *pCVar9;
  System_Collections_IEnumerator_o *pSVar10;
  System_String_o *pSVar11;
  undefined4 extraout_var_00;
  System_Collections_IEnumerator_o *extraout_RAX;
  System_Collections_IEnumerator_o *extraout_RAX_00;
  Characters_AnimationHandler_o *in_RCX;
  System_String_o *team;
  uint uVar12;
  undefined8 uVar13;
  Characters_BaseCharacter_o *__this_07;
  Characters_AnimationHandler_o *__this_08;
  int32_t iVar14;
  float fVar15;
  undefined4 uVar16;
  Il2CppMethodPointer pIVar17;
  Il2CppMethodPointer pIVar18;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar19;
  InvokerMethod pIVar20;
  char *pcVar21;
  Il2CppObject *pIVar22;
  Il2CppClass *pIVar23;
  Il2CppType *pIVar24;
  Il2CppType **ppIVar25;
  System_Collections_Generic_List_T__o *pSVar26;
  _union_13 _Var27;
  _union_14 _Var28;
  Il2CppMethodPointer pIStack_d8;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSStack_d0;
  InvokerMethod pIStack_c8;
  Il2CppObject *pIStack_c0;
  Il2CppClass *pIStack_b8;
  Il2CppType *pIStack_b0;
  System_Collections_Generic_List_T__o *pSStack_a8;
  _union_13 _Stack_a0;
  _union_14 _Stack_98;
  Il2CppMethodPointer pIStack_90;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSStack_88;
  InvokerMethod pIStack_80;
  Il2CppObject *pIStack_78;
  Il2CppClass *pIStack_70;
  Il2CppType *pIStack_68;
  System_Collections_Generic_List_T__o *pSStack_60;
  _union_13 _Stack_58;
  _union_14 _Stack_50;
  Characters_BaseCharacter_o *pCStack_48;
  
  if (g_data_057adf2d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndBecomeHuman_d__26);
    g_data_057adf2d = '\x01';
  }
  __this_05 = (Characters_BaseCharacter_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndBecomeHuman_d__26);
  uVar12 = 0;
  __this_07 = __this_05;
  System_Object___ctor((Il2CppObject *)__this_05,(MethodInfo *)0x0);
  *(undefined4 *)&(__this_05->fields).m_CachedPtr = 0;
  if (__this_05 != (Characters_BaseCharacter_o *)0x0) {
    *(Characters_BaseShifter_o **)&(__this_05->fields).FootstepsEnabled = __this;
    il2cpp_runtime_helper_022b4080(&(__this_05->fields).FootstepsEnabled,__this);
    *(float *)&(__this_05->fields).pvCache = time;
    return (System_Collections_IEnumerator_o *)__this_05;
  }
  il2cpp_runtime_helper_022b2c90();
  pCStack_48 = __this_05;
  if (g_data_057adf77 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&"AttackPause");
    il2cpp_runtime_helper_023445d0(&"AttackSpeeds");
    il2cpp_runtime_helper_023445d0(&"RunSpeedPerLevel");
    il2cpp_runtime_helper_023445d0(&"WalkSpeedBase");
    il2cpp_runtime_helper_023445d0(&"ActionPause");
    il2cpp_runtime_helper_023445d0(&"WalkSpeedPerLevel");
    il2cpp_runtime_helper_023445d0(&"AttackSpeedMultiplier");
    il2cpp_runtime_helper_023445d0(&"Health");
    il2cpp_runtime_helper_023445d0(&"RunSpeedBase");
    il2cpp_runtime_helper_023445d0(&"JumpForce");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"RotateSpeed");
    il2cpp_runtime_helper_023445d0(&"TurnPause");
    il2cpp_runtime_helper_023445d0(&"TurnSpeed");
    g_data_057adf77 = '\x01';
  }
  ppIVar25 = (Il2CppType **)0x0;
  _Var27.rgctx_data = (Il2CppRGCTXData *)0x0;
  pIVar23 = (Il2CppClass *)0x0;
  pIVar24 = (Il2CppType *)0x0;
  pIVar20 = (InvokerMethod)0x0;
  pcVar21 = (char *)0x0;
  pIVar17 = (Il2CppMethodPointer)0x0;
  pIVar18 = (Il2CppMethodPointer)0x0;
  _Var28.genericMethod = (SimpleJSONFixed_JSONNode_o *)0x0;
  pSStack_60 = (System_Collections_Generic_List_T__o *)0x0;
  _Stack_58.rgctx_data = (Il2CppRGCTXData *)0x0;
  pIStack_70 = (Il2CppClass *)0x0;
  pIStack_68 = (Il2CppType *)0x0;
  pIStack_80 = (InvokerMethod)0x0;
  pIStack_78 = (Il2CppObject *)0x0;
  pIStack_90 = (Il2CppMethodPointer)0x0;
  pSStack_88 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  _Stack_50.genericMethod = (SimpleJSONFixed_JSONNode_o *)0x0;
  Characters_BaseCharacter__Init(__this_07,uVar12 & 0xff,team,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar1 = 0;
  __this_08 = in_RCX;
  bVar5 = SimpleJSONFixed_JSONNode__op_Inequality
                    ((SimpleJSONFixed_JSONNode_o *)in_RCX,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    return (System_Collections_IEnumerator_o *)CONCAT44(extraout_var,bVar5);
  }
  if (in_RCX != (Characters_AnimationHandler_o *)0x0) {
    cVar4 = (*in_RCX->klass[2]._1.gc_desc)(in_RCX,"RunSpeedBase",in_RCX->klass[2]._1.name);
    if (cVar4 != '\0') {
      uVar13 = "RunSpeedBase";
      __this_08 = in_RCX;
      plVar6 = (long *)(*in_RCX->klass[1]._1.this_arg.data)
                                 (in_RCX,"RunSpeedBase",*(undefined8 *)&in_RCX->klass[1]._1.this_arg.bits);
      uVar1 = (undefined4)uVar13;
      if (plVar6 == (long *)0x0) goto label_04300cd6;
      uVar1 = (**(code **)(*plVar6 + 0x388))(plVar6,*(undefined8 *)(*plVar6 + 0x390));
      *(undefined4 *)&__this_07[1].fields.FeedVictimName = uVar1;
    }
    cVar4 = (*in_RCX->klass[2]._1.gc_desc)(in_RCX,"RunSpeedPerLevel",in_RCX->klass[2]._1.name);
    if (cVar4 != '\0') {
      uVar13 = "RunSpeedPerLevel";
      __this_08 = in_RCX;
      plVar6 = (long *)(*in_RCX->klass[1]._1.this_arg.data)
                                 (in_RCX,"RunSpeedPerLevel",*(undefined8 *)&in_RCX->klass[1]._1.this_arg.bits);
      uVar1 = (undefined4)uVar13;
      if (plVar6 == (long *)0x0) goto label_04300cd6;
      bVar5 = (**(code **)(*plVar6 + 0x388))(plVar6,*(undefined8 *)(*plVar6 + 0x390));
      __this_07[1].fields.Dead = bVar5;
    }
    cVar4 = (*in_RCX->klass[2]._1.gc_desc)(in_RCX,"WalkSpeedBase",in_RCX->klass[2]._1.name);
    if (cVar4 != '\0') {
      uVar13 = "WalkSpeedBase";
      __this_08 = in_RCX;
      plVar6 = (long *)(*in_RCX->klass[1]._1.this_arg.data)
                                 (in_RCX,"WalkSpeedBase",*(undefined8 *)&in_RCX->klass[1]._1.this_arg.bits);
      uVar1 = (undefined4)uVar13;
      if (plVar6 == (long *)0x0) goto label_04300cd6;
      uVar1 = (**(code **)(*plVar6 + 0x388))(plVar6,*(undefined8 *)(*plVar6 + 0x390));
      *(undefined4 *)((long)&__this_07[1].fields.FeedVictimName + 4) = uVar1;
    }
    cVar4 = (*in_RCX->klass[2]._1.gc_desc)(in_RCX,"WalkSpeedPerLevel",in_RCX->klass[2]._1.name);
    if (cVar4 != '\0') {
      uVar13 = "WalkSpeedPerLevel";
      __this_08 = in_RCX;
      plVar6 = (long *)(*in_RCX->klass[1]._1.this_arg.data)
                                 (in_RCX,"WalkSpeedPerLevel",*(undefined8 *)&in_RCX->klass[1]._1.this_arg.bits);
      uVar1 = (undefined4)uVar13;
      if (plVar6 == (long *)0x0) goto label_04300cd6;
      bVar5 = (**(code **)(*plVar6 + 0x388))(plVar6,*(undefined8 *)(*plVar6 + 0x390));
      __this_07[1].fields.CustomDamageEnabled = bVar5;
    }
    cVar4 = (*in_RCX->klass[2]._1.gc_desc)(in_RCX,"JumpForce",in_RCX->klass[2]._1.name);
    if (cVar4 != '\0') {
      uVar13 = "JumpForce";
      __this_08 = in_RCX;
      plVar6 = (long *)(*in_RCX->klass[1]._1.this_arg.data)
                                 (in_RCX,"JumpForce",*(undefined8 *)&in_RCX->klass[1]._1.this_arg.bits);
      uVar1 = (undefined4)uVar13;
      if (plVar6 == (long *)0x0) goto label_04300cd6;
      iVar14 = (**(code **)(*plVar6 + 0x388))(plVar6,*(undefined8 *)(*plVar6 + 0x390));
      __this_07[1].fields.CustomDamage = iVar14;
    }
    cVar4 = (*in_RCX->klass[2]._1.gc_desc)(in_RCX,"RotateSpeed",in_RCX->klass[2]._1.name);
    if (cVar4 != '\0') {
      uVar13 = "RotateSpeed";
      __this_08 = in_RCX;
      plVar6 = (long *)(*in_RCX->klass[1]._1.this_arg.data)
                                 (in_RCX,"RotateSpeed",*(undefined8 *)&in_RCX->klass[1]._1.this_arg.bits);
      uVar1 = (undefined4)uVar13;
      if (plVar6 == (long *)0x0) goto label_04300cd6;
      uVar1 = (**(code **)(*plVar6 + 0x388))(plVar6,*(undefined8 *)(*plVar6 + 0x390));
      *(undefined4 *)&__this_07[1].fields.field_0x6c = uVar1;
    }
    cVar4 = (*in_RCX->klass[2]._1.gc_desc)(in_RCX,"ActionPause",in_RCX->klass[2]._1.name);
    if (cVar4 != '\0') {
      uVar13 = "ActionPause";
      __this_08 = in_RCX;
      plVar6 = (long *)(*in_RCX->klass[1]._1.this_arg.data)
                                 (in_RCX,"ActionPause",*(undefined8 *)&in_RCX->klass[1]._1.this_arg.bits);
      uVar1 = (undefined4)uVar13;
      if (plVar6 == (long *)0x0) goto label_04300cd6;
      uVar1 = (**(code **)(*plVar6 + 0x388))(plVar6,*(undefined8 *)(*plVar6 + 0x390));
      *(undefined4 *)&__this_07[1].fields.pvCache = uVar1;
    }
    cVar4 = (*in_RCX->klass[2]._1.gc_desc)(in_RCX,"TurnPause",in_RCX->klass[2]._1.name);
    if (cVar4 != '\0') {
      uVar13 = "TurnPause";
      __this_08 = in_RCX;
      plVar6 = (long *)(*in_RCX->klass[1]._1.this_arg.data)
                                 (in_RCX,"TurnPause",*(undefined8 *)&in_RCX->klass[1]._1.this_arg.bits);
      uVar1 = (undefined4)uVar13;
      if (plVar6 == (long *)0x0) goto label_04300cd6;
      bVar5 = (**(code **)(*plVar6 + 0x388))(plVar6,*(undefined8 *)(*plVar6 + 0x390));
      __this_07[1].fields.FootstepsEnabled = bVar5;
    }
    cVar4 = (*in_RCX->klass[2]._1.gc_desc)(in_RCX,"AttackPause",in_RCX->klass[2]._1.name);
    if (cVar4 != '\0') {
      uVar13 = "AttackPause";
      __this_08 = in_RCX;
      plVar6 = (long *)(*in_RCX->klass[1]._1.this_arg.data)
                                 (in_RCX,"AttackPause",*(undefined8 *)&in_RCX->klass[1]._1.this_arg.bits);
      uVar1 = (undefined4)uVar13;
      if (plVar6 == (long *)0x0) goto label_04300cd6;
      uVar1 = (**(code **)(*plVar6 + 0x388))(plVar6,*(undefined8 *)(*plVar6 + 0x390));
      *(undefined4 *)((long)&__this_07[1].fields.pvCache + 4) = uVar1;
    }
    cVar4 = (*in_RCX->klass[2]._1.gc_desc)(in_RCX,"Health",in_RCX->klass[2]._1.name);
    if (cVar4 != '\0') {
      uVar13 = "Health";
      __this_08 = in_RCX;
      plVar6 = (long *)(*in_RCX->klass[1]._1.this_arg.data)
                                 (in_RCX,"Health",*(undefined8 *)&in_RCX->klass[1]._1.this_arg.bits);
      uVar1 = (undefined4)uVar13;
      if (plVar6 == (long *)0x0) goto label_04300cd6;
      iVar14 = (**(code **)(*plVar6 + 0x368))(plVar6,*(undefined8 *)(*plVar6 + 0x370));
      Characters_BaseCharacter__SetHealth(__this_07,iVar14,(MethodInfo *)0x0);
    }
    cVar4 = (*in_RCX->klass[2]._1.gc_desc)(in_RCX,"AttackSpeedMultiplier",in_RCX->klass[2]._1.name);
    if (cVar4 != '\0') {
      uVar13 = "AttackSpeedMultiplier";
      __this_08 = in_RCX;
      plVar6 = (long *)(*in_RCX->klass[1]._1.this_arg.data)
                                 (in_RCX,"AttackSpeedMultiplier",*(undefined8 *)&in_RCX->klass[1]._1.this_arg.bits);
      uVar1 = (undefined4)uVar13;
      if (plVar6 == (long *)0x0) goto label_04300cd6;
      uVar1 = (**(code **)(*plVar6 + 0x388))(plVar6,*(undefined8 *)(*plVar6 + 0x390));
      *(undefined4 *)&__this_07[1].fields.field_0x44 = uVar1;
    }
    cVar4 = (*in_RCX->klass[2]._1.gc_desc)(in_RCX,"AttackSpeeds",in_RCX->klass[2]._1.name);
    if (cVar4 != '\0') {
      uVar13 = "AttackSpeeds";
      __this_08 = in_RCX;
      __this_06 = (SimpleJSONFixed_JSONNode_o *)
                  (*in_RCX->klass[1]._1.this_arg.data)
                            (in_RCX,"AttackSpeeds",*(undefined8 *)&in_RCX->klass[1]._1.this_arg.bits);
      uVar1 = (undefined4)uVar13;
      if (__this_06 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_04300cd6;
      SimpleJSONFixed_JSONNode__get_Keys
                ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&pIStack_d8,__this_06,(MethodInfo *)0x0);
      _Stack_50.genericMethod = _Stack_98.genericMethod;
      pSStack_60 = pSStack_a8;
      _Stack_58.methodMetadataHandle = _Stack_a0.methodMetadataHandle;
      pIStack_70 = pIStack_b8;
      pIStack_68 = pIStack_b0;
      pIStack_80 = pIStack_c8;
      pIStack_78 = pIStack_c0;
      pIStack_90 = pIStack_d8;
      pSStack_88 = pSStack_d0;
      __this_01.fields.m_Enumerator.fields.m_Object.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar18;
      __this_01.fields.m_Enumerator.fields._0_8_ = pIVar17;
      __this_01.fields.m_Enumerator.fields.m_Object.fields._8_8_ = pIVar20;
      __this_01.fields.m_Enumerator.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar21;
      __this_01.fields.m_Enumerator.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar23;
      __this_01.fields.m_Enumerator.fields.m_Object.fields._32_8_ = pIVar24;
      __this_01.fields.m_Enumerator.fields.m_Array.fields._list =
           (System_Collections_Generic_List_T__o *)ppIVar25;
      __this_01.fields.m_Enumerator.fields.m_Array.fields._8_8_ = _Var27.rgctx_data;
      __this_01.fields.m_Enumerator.fields.m_Array.fields._current = _Var28.genericMethod;
      SimpleJSONFixed_JSONNode_KeyEnumerator__GetEnumerator
                ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&pIStack_d8,__this_01,(MethodInfo *)&pIStack_90);
      __this_02.fields.m_Enumerator.fields.m_Object.fields._dictionary = pSStack_d0;
      __this_02.fields.m_Enumerator.fields._0_8_ = pIStack_d8;
      __this_02.fields.m_Enumerator.fields.m_Object.fields._8_8_ = pIStack_c8;
      __this_02.fields.m_Enumerator.fields.m_Object.fields._current.fields.key = pIStack_c0;
      __this_02.fields.m_Enumerator.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIStack_b8;
      __this_02.fields.m_Enumerator.fields.m_Object.fields._32_8_ = pIStack_b0;
      __this_02.fields.m_Enumerator.fields.m_Array.fields._list = pSStack_a8;
      __this_02.fields.m_Enumerator.fields.m_Array.fields._8_8_ = _Stack_a0.rgctx_data;
      __this_02.fields.m_Enumerator.fields.m_Array.fields._current = _Stack_98.genericMethod;
      bVar5 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                        (__this_02,(MethodInfo *)&stack0xfffffffffffffee0);
      cVar4 = (char)bVar5;
      pIVar17 = pIStack_d8;
      pSVar19 = pSStack_d0;
      pIVar20 = pIStack_c8;
      pIVar22 = pIStack_c0;
      pIVar23 = pIStack_b8;
      pIVar24 = pIStack_b0;
      pSVar26 = pSStack_a8;
      _Var27 = _Stack_a0;
      _Var28 = _Stack_98;
      while (cVar4 != '\0') {
        __this_03.fields.m_Enumerator.fields.m_Object.fields._dictionary = pSVar19;
        __this_03.fields.m_Enumerator.fields._0_8_ = pIVar17;
        __this_03.fields.m_Enumerator.fields.m_Object.fields._8_8_ = pIVar20;
        __this_03.fields.m_Enumerator.fields.m_Object.fields._current.fields.key = pIVar22;
        __this_03.fields.m_Enumerator.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar23;
        __this_03.fields.m_Enumerator.fields.m_Object.fields._32_8_ = pIVar24;
        __this_03.fields.m_Enumerator.fields.m_Array.fields._list = pSVar26;
        __this_03.fields.m_Enumerator.fields.m_Array.fields._8_8_ = _Var27.rgctx_data;
        __this_03.fields.m_Enumerator.fields.m_Array.fields._current = _Var28.genericMethod;
        pSVar7 = SimpleJSONFixed_JSONNode_KeyEnumerator__get_Current
                           (__this_03,(MethodInfo *)&stack0xfffffffffffffee0);
        __this_00 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                    __this_07[1].fields.FeedKillerName;
        uVar13 = "AttackSpeeds";
        __this_08 = in_RCX;
        pCVar8 = (Characters_AnimationHandler_o *)
                 (*in_RCX->klass[1]._1.this_arg.data)
                           (in_RCX,"AttackSpeeds",*(undefined8 *)&in_RCX->klass[1]._1.this_arg.bits);
        uVar1 = (undefined4)uVar13;
        if (pCVar8 == (Characters_AnimationHandler_o *)0x0) goto label_04300cd6;
        pSVar11 = pSVar7;
        pCVar9 = (Characters_AnimationHandler_o *)
                 (*pCVar8->klass[1]._1.this_arg.data)
                           (pCVar8,pSVar7,*(undefined8 *)&pCVar8->klass[1]._1.this_arg.bits);
        uVar1 = SUB84(pSVar11,0);
        __this_08 = pCVar8;
        if (pCVar9 == (Characters_AnimationHandler_o *)0x0) goto label_04300cd6;
        uVar1 = SUB84(pCVar9->klass[2]._1.nestedTypes,0);
        fVar15 = (float)(*pCVar9->klass[2]._1.methods)();
        __this_08 = pCVar9;
        if (__this_00 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_04300cd6;
        System_Collections_Generic_Dictionary_object__float___Add
                  (__this_00,(Il2CppObject *)pSVar7,fVar15,MethodInfo_Void_Add);
        __this_04.fields.m_Enumerator.fields.m_Object.fields._dictionary = pSVar19;
        __this_04.fields.m_Enumerator.fields._0_8_ = pIVar17;
        __this_04.fields.m_Enumerator.fields.m_Object.fields._8_8_ = pIVar20;
        __this_04.fields.m_Enumerator.fields.m_Object.fields._current.fields.key = pIVar22;
        __this_04.fields.m_Enumerator.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar23;
        __this_04.fields.m_Enumerator.fields.m_Object.fields._32_8_ = pIVar24;
        __this_04.fields.m_Enumerator.fields.m_Array.fields._list = pSVar26;
        __this_04.fields.m_Enumerator.fields.m_Array.fields._8_8_ = _Var27.rgctx_data;
        __this_04.fields.m_Enumerator.fields.m_Array.fields._current = _Var28.genericMethod;
        bVar5 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                          (__this_04,(MethodInfo *)&stack0xfffffffffffffee0);
        cVar4 = (char)bVar5;
      }
    }
    pSVar10 = (System_Collections_IEnumerator_o *)
              (*in_RCX->klass[2]._1.gc_desc)(in_RCX,"TurnSpeed",in_RCX->klass[2]._1.name);
    if ((char)pSVar10 == '\0') {
      return pSVar10;
    }
    uVar13 = "TurnSpeed";
    plVar6 = (long *)(*in_RCX->klass[1]._1.this_arg.data)
                               (in_RCX,"TurnSpeed",*(undefined8 *)&in_RCX->klass[1]._1.this_arg.bits);
    uVar1 = (undefined4)uVar13;
    __this_08 = in_RCX;
    if (plVar6 != (long *)0x0) {
      uVar1 = (undefined4)*(undefined8 *)(*plVar6 + 0x390);
      uVar16 = (**(code **)(*plVar6 + 0x388))(plVar6);
      *(undefined4 *)&__this_07[1].fields.Cache = uVar16;
      pSVar7 = __this_07[1].fields.VisibleName;
      __this_08 = (Characters_AnimationHandler_o *)0x0;
      if (pSVar7 != (System_String_o *)0x0) {
        pSVar11 = (System_String_o *)
                  (*(pSVar7->klass->vtable)._19_System_IConvertible_ToUInt64.methodPtr)
                            (pSVar7,(pSVar7->klass->vtable)._19_System_IConvertible_ToUInt64.method);
        pSVar7 = "";
        bVar5 = System_String__op_Inequality(pSVar11,"",(MethodInfo *)0x0);
        uVar1 = SUB84(pSVar7,0);
        if ((char)bVar5 != '\0') {
          pSVar7 = __this_07[1].fields.VisibleName;
          __this_08 = (Characters_AnimationHandler_o *)0x0;
          if (pSVar7 == (System_String_o *)0x0) goto label_04300cd6;
          pCVar8 = *(Characters_AnimationHandler_o **)&(__this_07->fields)._cameraFPS;
          pSVar3 = pSVar7->klass;
          uVar1 = SUB84((pSVar3->vtable)._19_System_IConvertible_ToUInt64.method,0);
          pSVar7 = (System_String_o *)(*(pSVar3->vtable)._19_System_IConvertible_ToUInt64.methodPtr)();
          __this_08 = (Characters_AnimationHandler_o *)__this_07[1].fields.VisibleName;
          if (__this_08 == (Characters_AnimationHandler_o *)0x0) goto label_04300cd6;
          pCVar9 = *(Characters_AnimationHandler_o **)&(__this_07->fields)._cameraFPS;
          uVar1 = __this_08->klass[1]._2.instance_size;
          pSVar11 = (System_String_o *)(*__this_08->klass[1]._2.genericContainerHandle)();
          if (pCVar9 == (Characters_AnimationHandler_o *)0x0) goto label_04300cd6;
          fVar15 = Characters_AnimationHandler__GetSpeed(pCVar9,pSVar11,(MethodInfo *)0x0);
          uVar1 = SUB84(pSVar11,0);
          __this_08 = pCVar9;
          if (pCVar8 == (Characters_AnimationHandler_o *)0x0) goto label_04300cd6;
          Characters_AnimationHandler__SetSpeed
                    (pCVar8,pSVar7,fVar15 * *(float *)&__this_07[1].fields.Cache,(MethodInfo *)0x0);
          uVar1 = SUB84(pSVar7,0);
        }
        pSVar7 = __this_07[1].fields.VisibleName;
        __this_08 = (Characters_AnimationHandler_o *)0x0;
        if (pSVar7 != (System_String_o *)0x0) {
          pSVar11 = (System_String_o *)
                    (*(pSVar7->klass->vtable)._20_System_IConvertible_ToSingle.methodPtr)
                              (pSVar7,(pSVar7->klass->vtable)._20_System_IConvertible_ToSingle.method);
          pSVar7 = "";
          bVar5 = System_String__op_Inequality(pSVar11,"",(MethodInfo *)0x0);
          uVar1 = SUB84(pSVar7,0);
          if ((char)bVar5 == '\0') {
            return (System_Collections_IEnumerator_o *)CONCAT44(extraout_var_00,bVar5);
          }
          pSVar7 = __this_07[1].fields.VisibleName;
          __this_08 = (Characters_AnimationHandler_o *)0x0;
          if (pSVar7 != (System_String_o *)0x0) {
            pCVar8 = *(Characters_AnimationHandler_o **)&(__this_07->fields)._cameraFPS;
            pSVar3 = pSVar7->klass;
            uVar1 = SUB84((pSVar3->vtable)._20_System_IConvertible_ToSingle.method,0);
            pSVar7 = (System_String_o *)(*(pSVar3->vtable)._20_System_IConvertible_ToSingle.methodPtr)();
            __this_08 = (Characters_AnimationHandler_o *)__this_07[1].fields.VisibleName;
            if (__this_08 != (Characters_AnimationHandler_o *)0x0) {
              pCVar9 = *(Characters_AnimationHandler_o **)&(__this_07->fields)._cameraFPS;
              uVar2 = __this_08->klass[1]._2.static_fields_size;
              uVar1 = uVar2;
              pSVar11 = (System_String_o *)(**(code **)&__this_08->klass[1]._2.element_size)();
              if (pCVar9 != (Characters_AnimationHandler_o *)0x0) {
                fVar15 = Characters_AnimationHandler__GetSpeed(pCVar9,pSVar11,(MethodInfo *)0x0);
                uVar1 = SUB84(pSVar11,0);
                __this_08 = pCVar9;
                if (pCVar8 != (Characters_AnimationHandler_o *)0x0) {
                  Characters_AnimationHandler__SetSpeed
                            (pCVar8,pSVar7,fVar15 * *(float *)&__this_07[1].fields.Cache,(MethodInfo *)0x0);
                  return extraout_RAX;
                }
              }
            }
          }
        }
      }
    }
  }
label_04300cd6:
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_08,(MethodInfo *)0x0);
  *(undefined4 *)&(__this_08->fields).Animation = uVar1;
  return extraout_RAX_00;
}


// Characters.BaseShifter$$WaitAndDie
// il2cpp: System_Collections_IEnumerator_o* Characters_BaseShifter__WaitAndDie (Characters_BaseShifter_o* __this, const MethodInfo* method);
// 0x4300d00

System_Collections_IEnumerator_o *
Characters_BaseShifter__WaitAndDie(Characters_BaseShifter_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Collections_IEnumerator_o *extraout_RAX;
  undefined4 uVar1;
  Il2CppObject *__this_01;
  
  if (g_data_057adf2e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndDie_d__27);
    g_data_057adf2e = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndDie_d__27);
  uVar1 = 0;
  __this_01 = __this_00;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_helper_022b4080(__this_00 + 2,__this);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  *(undefined4 *)&__this_01[1].klass = uVar1;
  return extraout_RAX;
}


// Characters.BaseShifter$$Awake
// il2cpp: void Characters_BaseShifter__Awake (Characters_BaseShifter_o* __this, const MethodInfo* method);
// 0x4300d90

void Characters_BaseShifter__Awake(Characters_BaseShifter_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__float__o *pSVar1;
  
  Characters_BaseTitan__Awake((Characters_BaseTitan_o *)__this,method);
  pSVar1 = (System_Collections_Generic_Dictionary_string__float__o *)
           (*(__this->klass->vtable)._178_CreateCustomSkinLoader.methodPtr)
                     (__this,(__this->klass->vtable)._178_CreateCustomSkinLoader.method);
  (__this->fields)._rootMotionAnimations = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._rootMotionAnimations,pSVar1);
  return;
}


// Characters.BaseShifter$$GetHitRPC
// il2cpp: void Characters_BaseShifter__GetHitRPC (Characters_BaseShifter_o* __this, int32_t viewId, System_String_o* name, int32_t damage, System_String_o* type, System_String_o* collider, const MethodInfo* method);
// 0x4300f00

void Characters_BaseShifter__GetHitRPC
               (Characters_BaseShifter_o *__this,int32_t viewId,System_String_o *name,int32_t damage,
               System_String_o *type,System_String_o *collider,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  UI_ImportPopup_o *pUVar4;
  System_Action_Hashtable__o *pSVar5;
  UnityEngine_Object_o *pUVar6;
  System_DelegateData_o *__this_00;
  Il2CppClass **ppIVar7;
  UI_InGameMenu_c *pUVar8;
  UI_ConfirmPopup_o *name_00;
  void *pvVar9;
  undefined1 auVar10 [16];
  char cVar11;
  bool_conflict bVar12;
  Il2CppClass *pIVar13;
  Il2CppClass *b;
  System_String_o *pSVar14;
  UnityEngine_Transform_o *pUVar15;
  undefined4 in_register_0000000c;
  Il2CppClass *pIVar16;
  Il2CppClass *__this_01;
  Il2CppClass *pIVar17;
  uint damage_00;
  long *character;
  Il2CppClass **ppIVar18;
  Il2CppClass *pIVar19;
  System_String_o *pSVar20;
  Il2CppMethodPointer pIVar21;
  MethodInfo *vtableDispatch;
  float fVar22;
  undefined1 extraout_var [12];
  undefined1 auVar23 [16];
  float fVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  UnityEngine_Vector3_o UVar27;
  UnityEngine_Vector3_o UVar28;
  float local_58;
  
  pIVar16 = (Il2CppClass *)CONCAT44(in_register_0000000c,damage);
  pSVar14 = type;
  pSVar20 = collider;
  if (g_data_057adf2f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    il2cpp_runtime_helper_023445d0(&"Rock");
    il2cpp_runtime_helper_023445d0(&"TitanStun");
    il2cpp_runtime_helper_023445d0(&"CannonBall");
    il2cpp_runtime_helper_023445d0(&"ShifterStun");
    g_data_057adf2f = '\x01';
  }
  cVar11 = (char)pSVar20;
  if (*(char *)&(__this->fields).FeedVictimName != '\0') {
    return;
  }
  bVar12 = System_String__op_Equality(type,"CannonBall",(MethodInfo *)0x0);
  if (((char)bVar12 != '\0') ||
     (b = "Rock", character = (long *)type,
     bVar12 = System_String__op_Equality(type,(System_String_o *)"Rock",(MethodInfo *)0x0),
     (char)bVar12 != '\0')) goto label_04300fed;
  lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
  if ((lVar3 != 0) &&
     ((lVar3 = *(long *)(lVar3 + 0x50), lVar3 != 0 &&
      (pIVar16 = *(Il2CppClass **)(lVar3 + 0x88), pIVar16 != (Il2CppClass *)0x0)))) {
    if (*(char *)((long)&((UI_InGameMenu_Fields *)&(pIVar16->_1).name)->m_CachedPtr + 1) != '\0') {
      if (*(long *)(lVar3 + 0x98) == 0) goto label_043014b7;
      pIVar16 = (Il2CppClass *)0x0;
      if (damage < *(int *)(*(long *)(lVar3 + 0x98) + 0x14)) {
        damage = 0;
      }
    }
    bVar12 = System_String__op_Equality(type,"TitanStun",(MethodInfo *)0x0);
    if (((char)bVar12 == '\0') &&
       (b = "ShifterStun", character = (long *)type,
       bVar12 = System_String__op_Equality(type,(System_String_o *)"ShifterStun",(MethodInfo *)0x0),
       (char)bVar12 == '\0')) {
      pSVar5 = (__this->fields).OnPlayerPropertiesChanged;
      if (pSVar5 != (System_Action_Hashtable__o *)0x0) {
        character = (long *)pSVar5[1].fields.method_code;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        b = (Il2CppClass *)0x0;
        bVar12 = UnityEngine_Object__op_Inequality
                           ((UnityEngine_Object_o *)character,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar12 == '\0') {
label_043012e1:
          pSVar5 = (__this->fields).OnPlayerPropertiesChanged;
          if (pSVar5 != (System_Action_Hashtable__o *)0x0) {
            character = (long *)pSVar5[1].fields.interp_method;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            b = (Il2CppClass *)0x0;
            bVar12 = UnityEngine_Object__op_Inequality
                               ((UnityEngine_Object_o *)character,(UnityEngine_Object_o *)0x0,
                                (MethodInfo *)0x0);
            if ((char)bVar12 == '\0') {
label_043013c2:
              pSVar5 = (__this->fields).OnPlayerPropertiesChanged;
              if (pSVar5 != (System_Action_Hashtable__o *)0x0) {
                __this_00 = (pSVar5->fields).data;
                character = (long *)0x0;
                if (__this_00 != (System_DelegateData_o *)0x0) {
                  pSVar14 = UnityEngine_Object__get_name((UnityEngine_Object_o *)__this_00,(MethodInfo *)0x0);
                  bVar12 = System_String__op_Equality(collider,pSVar14,(MethodInfo *)0x0);
                  if ((char)bVar12 == '\0') {
                    return;
                  }
                  goto label_04300fed;
                }
              }
            }
            else {
              pSVar5 = (__this->fields).OnPlayerPropertiesChanged;
              if (pSVar5 != (System_Action_Hashtable__o *)0x0) {
                pUVar6 = (UnityEngine_Object_o *)pSVar5[1].fields.interp_method;
                character = (long *)0x0;
                if (pUVar6 != (UnityEngine_Object_o *)0x0) {
                  b = (Il2CppClass *)UnityEngine_Object__get_name(pUVar6,(MethodInfo *)0x0);
                  character = (long *)collider;
                  bVar12 = System_String__op_Equality(collider,(System_String_o *)b,(MethodInfo *)0x0);
                  if ((char)bVar12 != '\0') {
label_0430139a:
                    (*(__this->klass->vtable)._145_Cripple.methodPtr)
                              (__this,(__this->klass->vtable)._145_Cripple.method);
                    return;
                  }
                  pSVar5 = (__this->fields).OnPlayerPropertiesChanged;
                  if (pSVar5 != (System_Action_Hashtable__o *)0x0) {
                    pUVar6 = (UnityEngine_Object_o *)pSVar5[1].fields.interp_invoke_impl;
                    character = (long *)0x0;
                    if (pUVar6 != (UnityEngine_Object_o *)0x0) {
                      b = (Il2CppClass *)UnityEngine_Object__get_name(pUVar6,(MethodInfo *)0x0);
                      character = (long *)collider;
                      bVar12 = System_String__op_Equality(collider,(System_String_o *)b,(MethodInfo *)0x0);
                      if ((char)bVar12 != '\0') goto label_0430139a;
                      goto label_043013c2;
                    }
                  }
                }
              }
            }
          }
        }
        else {
          pSVar5 = (__this->fields).OnPlayerPropertiesChanged;
          if (pSVar5 != (System_Action_Hashtable__o *)0x0) {
            pUVar6 = (UnityEngine_Object_o *)pSVar5[1].fields.method_code;
            character = (long *)0x0;
            if (pUVar6 != (UnityEngine_Object_o *)0x0) {
              b = (Il2CppClass *)UnityEngine_Object__get_name(pUVar6,(MethodInfo *)0x0);
              character = (long *)collider;
              bVar12 = System_String__op_Equality(collider,(System_String_o *)b,(MethodInfo *)0x0);
              if ((char)bVar12 != '\0') {
                (*(__this->klass->vtable)._144_Blind.methodPtr)
                          (__this,(__this->klass->vtable)._144_Blind.method);
                return;
              }
              goto label_043012e1;
            }
          }
        }
      }
    }
    else {
      (*(__this->klass->vtable)._132_Stun.methodPtr)(__this);
      if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pIVar13 = (Il2CppClass *)Utility_Util__FindCharacterByViewId(viewId,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      b = (Il2CppClass *)0x0;
      character = (long *)pIVar13;
      bVar12 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)pIVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (((char)bVar12 == '\0') || (*(char *)&(__this->fields)._previousCoreLocalPosition.fields.y == '\0'))
      goto label_04300fed;
      if ((pIVar13 != (Il2CppClass *)0x0) &&
         ((pUVar4 = (pIVar13->_1).interopData, pUVar4 != (UI_ImportPopup_o *)0x0 &&
          (character = (long *)(pUVar4->fields).m_CachedPtr, (Il2CppClass *)character != (Il2CppClass *)0x0)))
         ) {
        b = (Il2CppClass *)0x0;
        UVar27 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)character,(MethodInfo *)0x0);
        lVar3 = *(long *)&(__this->fields).Dead;
        if ((lVar3 != 0) &&
           (character = *(long **)(lVar3 + 0x10), (Il2CppClass *)character != (Il2CppClass *)0x0)) {
          b = (Il2CppClass *)0x0;
          UVar28 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)character,(MethodInfo *)0x0)
          ;
          lVar3 = *(long *)&(__this->fields).Dead;
          if (lVar3 != 0) {
            pUVar15 = *(UnityEngine_Transform_o **)(lVar3 + 0x10);
            local_58 = UVar27.fields.x;
            if (g_data_057a6845 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
              g_data_057a6845 = '\x01';
            }
            local_58 = local_58 - UVar28.fields.x;
            fVar24 = UVar27.fields.z - UVar28.fields.z;
            character = (long *)TypeInfo_Math;
            if (*(int *)&(TypeInfo_Math->_2).field_0x1c == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            fVar22 = fVar24 * fVar24 + local_58 * local_58 + 0.0;
            if (fVar22 < 0.0) {
              fVar22 = sqrtf(fVar22);
              uVar25 = extraout_var._4_4_;
              uVar26 = extraout_var._8_4_;
              if (fVar22 <= 1e-05) goto label_04301450;
label_04301437:
              fVar24 = fVar24 / fVar22;
              auVar10._4_4_ = fVar22;
              auVar10._0_4_ = fVar22;
              auVar10._8_4_ = uVar25;
              auVar10._12_4_ = uVar26;
              auVar23 = divps(ZEXT416((uint)local_58),auVar10);
            }
            else {
              uVar25 = 0;
              uVar26 = 0;
              fVar22 = SQRT(fVar22);
              if (1e-05 < fVar22) goto label_04301437;
label_04301450:
              if (g_data_057a65d5 == '\0') {
                character = &TypeInfo_Vector3;
                il2cpp_runtime_helper_023445d0();
                g_data_057a65d5 = '\x01';
              }
              auVar23._8_8_ = 0;
              auVar23._0_8_ = **(ulong **)(TypeInfo_Vector3 + 0xb8);
              fVar24 = *(float *)(*(ulong **)(TypeInfo_Vector3 + 0xb8) + 1);
            }
            if (pUVar15 != (UnityEngine_Transform_o *)0x0) {
              UVar27.fields._0_8_ = auVar23._0_8_;
              UVar27.fields.z = fVar24;
              UnityEngine_Transform__set_forward(pUVar15,UVar27,(MethodInfo *)0x0);
label_04300fed:
              Characters_BaseCharacter__GetHitRPC
                        ((Characters_BaseCharacter_o *)__this,viewId,name,damage,type,collider,
                         (MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
label_043014b7:
  il2cpp_runtime_helper_022b2c90();
  pIVar13 = b;
  ppIVar18 = (Il2CppClass **)character;
  if (g_data_057adf30 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseCharacter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseTitan);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicCollisionHandler);
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Shifter");
    ppIVar18 = &"ShifterStun";
    il2cpp_runtime_helper_023445d0();
    g_data_057adf30 = '\x01';
  }
  if (*(char *)((long)&(((Il2CppClass *)character)->_1).typeMetadataHandle + 1) == '\0') {
    damage_00 = 100;
    if (__this_01 != (Il2CppClass *)0x0) goto label_04301580;
label_043015fe:
    if (cVar11 == '\0') {
      return;
    }
    pIVar19 = (Il2CppClass *)ppIVar18;
    if (__this_01 == (Il2CppClass *)0x0) goto label_0430193f;
    if (*(char *)&(__this_01->_1).typeMetadataHandle != '\0') {
      return;
    }
    pIVar17 = (Il2CppClass *)(ulong)damage_00;
    pIVar13 = (Il2CppClass *)0x0;
    bVar12 = Characters_BaseCharacter__IsMainCharacter
                       ((Characters_BaseCharacter_o *)character,(MethodInfo *)0x0);
    if ((char)bVar12 != '\0') {
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pIVar19 = *(Il2CppClass **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
      if (pIVar19 == (Il2CppClass *)0x0) goto label_0430193f;
      pUVar8 = (pIVar19->_1).image;
      bVar2 = (TypeInfo_InGameMenu->_2).naturalAligment;
      pIVar13 = TypeInfo_InGameMenu;
      if (((pUVar8->_2).naturalAligment < bVar2) ||
         ((pUVar8->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_InGameMenu)) goto label_0430193a;
      pIVar13 = pIVar17;
      UI_InGameMenu__ShowKillScore((UI_InGameMenu_o *)pIVar19,damage_00,0,(MethodInfo *)0x0);
    }
    pIVar19 = pIVar16;
    if (pIVar16 != (Il2CppClass *)0x0) {
      pSVar14 = UnityEngine_Object__get_name((UnityEngine_Object_o *)pIVar16,(MethodInfo *)0x0);
      pUVar8 = (__this_01->_1).image;
      vtableDispatch = pUVar8[3].vtable._4_Setup.method;
      pIVar21 = pUVar8[3].vtable._5_SetupPopups.methodPtr;
      pIVar16 = "Shifter";
label_043016dd:
      (*(code *)vtableDispatch)(__this_01,character,pIVar17,pIVar16,pSVar14,pIVar21);
      return;
    }
  }
  else {
    damage_00 = *(uint *)((long)&(((Il2CppClass *)character)->_1).typeMetadataHandle + 4);
    if (__this_01 == (Il2CppClass *)0x0) goto label_043015fe;
label_04301580:
    pUVar8 = (__this_01->_1).image;
    bVar2 = (pUVar8->_2).naturalAligment;
    bVar1 = (TypeInfo_CustomLogicCollisionHandler->_2).naturalAligment;
    pIVar13 = (Il2CppClass *)(ulong)bVar1;
    pIVar19 = __this_01;
    if ((bVar2 < bVar1) ||
       (ppIVar18 = (pUVar8->_2).typeHierarchy,
       *(Il2CppClass **)((long)ppIVar18 + (long)pIVar13 * 8 + -8) != TypeInfo_CustomLogicCollisionHandler)) {
      bVar1 = (TypeInfo_BaseCharacter->_2).naturalAligment;
      pIVar13 = TypeInfo_BaseCharacter;
      if ((bVar1 <= bVar2) &&
         (ppIVar7 = (pUVar8->_2).typeHierarchy, ppIVar7[(ulong)bVar1 - 1] == TypeInfo_BaseCharacter)) {
        bVar1 = (TypeInfo_BaseTitan->_2).naturalAligment;
        pIVar13 = (Il2CppClass *)(ulong)bVar1;
        if ((bVar1 <= bVar2) && (ppIVar7[(long)((long)&pIVar13[-1].vtable[0xfe].method + 7)] == TypeInfo_BaseTitan))
        {
          if ((*(char *)&(__this_01->_1).klass == '\0') && (*(int *)((long)&(__this_01->_1).klass + 4) == 10))
          {
            damage_00 = 2;
          }
          if (cVar11 == '\0') {
            return;
          }
          pIVar17 = (Il2CppClass *)(ulong)damage_00;
          if (*(int *)&(TypeInfo_EffectPrefabs->_2).field_0x1c == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pIVar19 = TypeInfo_EffectPrefabs;
          if (b == (Il2CppClass *)0x0) goto label_0430193f;
          pSVar14 = *(System_String_o **)((long)TypeInfo_EffectPrefabs->static_fields + 0x28);
          pIVar13 = (Il2CppClass *)0x0;
          pUVar15 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)b,(MethodInfo *)0x0);
          pIVar19 = b;
          if (pUVar15 == (UnityEngine_Transform_o *)0x0) goto label_0430193f;
          UVar27 = UnityEngine_Transform__get_position(pUVar15,(MethodInfo *)0x0);
          if (g_data_057a6843 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
            g_data_057a6843 = '\x01';
          }
          Effects_EffectSpawner__Spawn
                    (pSVar14,UVar27,
                     (UnityEngine_Quaternion_o)**(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8),1.0,1
                     ,(System_Object_array *)0x0,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_TitanSounds + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          Characters_BaseCharacter__PlaySound
                    ((Characters_BaseCharacter_o *)character,
                     *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0xc0),(MethodInfo *)0x0);
          if (*(char *)&(__this_01->_1).typeMetadataHandle != '\0') {
            return;
          }
          pIVar13 = (Il2CppClass *)0x0;
          bVar12 = Characters_BaseCharacter__IsMainCharacter
                             ((Characters_BaseCharacter_o *)character,(MethodInfo *)0x0);
          if ((char)bVar12 != '\0') {
            if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pIVar19 = *(Il2CppClass **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
            if (pIVar19 == (Il2CppClass *)0x0) goto label_0430193f;
            pUVar8 = (pIVar19->_1).image;
            bVar2 = (TypeInfo_InGameMenu->_2).naturalAligment;
            pIVar13 = TypeInfo_InGameMenu;
            if (((pUVar8->_2).naturalAligment < bVar2) ||
               ((pUVar8->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_InGameMenu)) goto label_0430193a;
            pIVar13 = pIVar17;
            UI_InGameMenu__ShowKillScore((UI_InGameMenu_o *)pIVar19,damage_00,0,(MethodInfo *)0x0);
          }
          pIVar19 = pIVar16;
          if (pIVar16 != (Il2CppClass *)0x0) {
            pSVar14 = UnityEngine_Object__get_name((UnityEngine_Object_o *)pIVar16,(MethodInfo *)0x0);
            pUVar8 = (__this_01->_1).image;
            vtableDispatch = pUVar8[3].vtable._4_Setup.method;
            pIVar21 = pUVar8[3].vtable._5_SetupPopups.methodPtr;
            pIVar16 = "ShifterStun";
            goto label_043016dd;
          }
          goto label_0430193f;
        }
        goto label_043015fe;
      }
    }
    else {
      pIVar19 = (Il2CppClass *)ppIVar18;
      if (b == (Il2CppClass *)0x0) goto label_0430193f;
      name_00 = *(UI_ConfirmPopup_o **)&(((Il2CppClass *)character)->_1).this_arg.bits;
      pIVar13 = (Il2CppClass *)0x0;
      pUVar15 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)b,(MethodInfo *)0x0);
      pIVar19 = b;
      if (pUVar15 == (UnityEngine_Transform_o *)0x0) goto label_0430193f;
      UVar27 = UnityEngine_Transform__get_position(pUVar15,(MethodInfo *)0x0);
      pUVar8 = (__this_01->_1).image;
      bVar2 = (TypeInfo_CustomLogicCollisionHandler->_2).naturalAligment;
      pIVar13 = TypeInfo_CustomLogicCollisionHandler;
      pIVar19 = __this_01;
      if ((bVar2 <= (pUVar8->_2).naturalAligment) &&
         ((pUVar8->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_CustomLogicCollisionHandler)) {
        CustomLogic_CustomLogicCollisionHandler__GetHit
                  ((CustomLogic_CustomLogicCollisionHandler_o *)__this_01,
                   (Characters_BaseCharacter_o *)character,(System_String_o *)name_00,damage_00,pSVar14,UVar27
                   ,(MethodInfo *)0x0);
        return;
      }
    }
label_0430193a:
    il2cpp_runtime_helper_022b2fd0();
  }
label_0430193f:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adf31 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Roar");
    g_data_057adf31 = '\x01';
  }
  Characters_BaseTitan__Update((Characters_BaseTitan_o *)pIVar19,(MethodInfo *)pIVar13);
  bVar12 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pIVar19,(MethodInfo *)0x0);
  if (((((char)bVar12 != '\0') && (*(char *)((long)&pIVar19->vtable[0x13].method + 1) != '\0')) &&
      (*(char *)((long)&pIVar19->rgctx_data + 4) != '\0')) &&
     (pvVar9 = (pIVar19->_1).image,
     cVar11 = (**(code **)((long)pvVar9 + 0x8e8))(pIVar19,*(undefined8 *)((long)pvVar9 + 0x8f0)),
     cVar11 != '\0')) {
    pvVar9 = (pIVar19->_1).image;
    (**(code **)((long)pvVar9 + 0x598))(pIVar19,"Roar",*(undefined8 *)((long)pvVar9 + 0x5a0));
    *(undefined1 *)((long)&pIVar19->vtable[0x13].method + 1) = 0;
  }
  return;
}


// Characters.BaseShifter$$OnHit
// il2cpp: void Characters_BaseShifter__OnHit (Characters_BaseShifter_o* __this, Characters_BaseHitbox_o* hitbox, Il2CppObject* victim, UnityEngine_Collider_o* collider, System_String_o* type, bool firstHit, const MethodInfo* method);
// 0x43014c0

void Characters_BaseShifter__OnHit
               (Characters_BaseShifter_o *__this,Characters_BaseHitbox_o *hitbox,Il2CppObject *victim,
               UnityEngine_Collider_o *collider,System_String_o *type,bool_conflict firstHit,
               MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  Il2CppClass **ppIVar3;
  char cVar4;
  bool_conflict bVar5;
  System_String_o *pSVar6;
  UnityEngine_Transform_o *pUVar7;
  undefined8 uVar8;
  Il2CppClass *pIVar9;
  uint damage;
  Il2CppClass *method_00;
  Characters_BaseShifter_o *__this_00;
  Characters_BaseShifter_o *pCVar10;
  MethodInfo *pMVar11;
  Il2CppMethodPointer vtableDispatch;
  UnityEngine_Vector3_o UVar12;
  
  method_00 = (Il2CppClass *)hitbox;
  __this_00 = __this;
  if (g_data_057adf30 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseCharacter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseTitan);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicCollisionHandler);
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Shifter");
    __this_00 = (Characters_BaseShifter_o *)&"ShifterStun";
    il2cpp_runtime_helper_023445d0();
    g_data_057adf30 = '\x01';
  }
  if (*(char *)((long)&(__this->fields).FeedVictimName + 1) == '\0') {
    damage = 100;
    if (victim != (Il2CppObject *)0x0) goto label_04301580;
label_043015fe:
    if ((char)firstHit == '\0') {
      return;
    }
    if (victim == (Il2CppObject *)0x0) goto label_0430193f;
    if (*(char *)&victim[6].monitor != '\0') {
      return;
    }
    pIVar9 = (Il2CppClass *)(ulong)damage;
    method_00 = (Il2CppClass *)0x0;
    bVar5 = Characters_BaseCharacter__IsMainCharacter((Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_00 = *(Characters_BaseShifter_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
      if (__this_00 == (Characters_BaseShifter_o *)0x0) goto label_0430193f;
      bVar2 = (TypeInfo_InGameMenu->_2).naturalAligment;
      method_00 = TypeInfo_InGameMenu;
      pCVar10 = __this_00;
      if (((__this_00->klass->_2).naturalAligment < bVar2) ||
         ((__this_00->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_InGameMenu)) goto label_0430193a;
      method_00 = pIVar9;
      UI_InGameMenu__ShowKillScore((UI_InGameMenu_o *)__this_00,damage,0,(MethodInfo *)0x0);
    }
    __this_00 = (Characters_BaseShifter_o *)collider;
    if (collider != (UnityEngine_Collider_o *)0x0) {
      pSVar6 = UnityEngine_Object__get_name((UnityEngine_Object_o *)collider,(MethodInfo *)0x0);
      vtableDispatch = victim->klass->vtable[0x54].methodPtr;
      pMVar11 = victim->klass->vtable[0x54].method;
      uVar8 = "Shifter";
label_043016dd:
      (*vtableDispatch)(victim,__this,pIVar9,uVar8,pSVar6,pMVar11);
      return;
    }
  }
  else {
    damage = *(uint *)((long)&(__this->fields).FeedVictimName + 4);
    if (victim == (Il2CppObject *)0x0) goto label_043015fe;
label_04301580:
    pIVar9 = victim->klass;
    bVar2 = (pIVar9->_2).naturalAligment;
    bVar1 = (TypeInfo_CustomLogicCollisionHandler->_2).naturalAligment;
    method_00 = (Il2CppClass *)(ulong)bVar1;
    pCVar10 = (Characters_BaseShifter_o *)victim;
    if ((bVar2 < bVar1) ||
       (__this_00 = (Characters_BaseShifter_o *)(pIVar9->_2).typeHierarchy,
       *(Il2CppClass **)((long)__this_00 + (long)method_00 * 8 + -8) != TypeInfo_CustomLogicCollisionHandler)) {
      bVar1 = (TypeInfo_BaseCharacter->_2).naturalAligment;
      method_00 = TypeInfo_BaseCharacter;
      if ((bVar1 <= bVar2) &&
         (ppIVar3 = (pIVar9->_2).typeHierarchy, ppIVar3[(ulong)bVar1 - 1] == TypeInfo_BaseCharacter)) {
        bVar1 = (TypeInfo_BaseTitan->_2).naturalAligment;
        method_00 = (Il2CppClass *)(ulong)bVar1;
        if ((bVar1 <= bVar2) &&
           (ppIVar3[(long)((long)&method_00[-1].vtable[0xfe].method + 7)] == TypeInfo_BaseTitan)) {
          if ((*(char *)&victim[7].monitor == '\0') && (*(int *)((long)&victim[7].monitor + 4) == 10)) {
            damage = 2;
          }
          if ((char)firstHit == '\0') {
            return;
          }
          pIVar9 = (Il2CppClass *)(ulong)damage;
          if ((TypeInfo_EffectPrefabs->fields)._stepPhase == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          __this_00 = TypeInfo_EffectPrefabs;
          if (hitbox == (Characters_BaseHitbox_o *)0x0) goto label_0430193f;
          pSVar6 = *(System_String_o **)&(((TypeInfo_EffectPrefabs->fields).MovementSync)->fields).Disabled;
          method_00 = (Il2CppClass *)0x0;
          pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)hitbox,(MethodInfo *)0x0);
          __this_00 = (Characters_BaseShifter_o *)hitbox;
          if (pUVar7 == (UnityEngine_Transform_o *)0x0) goto label_0430193f;
          UVar12 = UnityEngine_Transform__get_position(pUVar7,(MethodInfo *)0x0);
          if (g_data_057a6843 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
            g_data_057a6843 = '\x01';
          }
          Effects_EffectSpawner__Spawn
                    (pSVar6,UVar12,
                     (UnityEngine_Quaternion_o)**(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8),1.0,1
                     ,(System_Object_array *)0x0,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_TitanSounds + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          Characters_BaseCharacter__PlaySound
                    ((Characters_BaseCharacter_o *)__this,
                     *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0xc0),(MethodInfo *)0x0);
          if (*(char *)&victim[6].monitor != '\0') {
            return;
          }
          method_00 = (Il2CppClass *)0x0;
          bVar5 = Characters_BaseCharacter__IsMainCharacter
                            ((Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0);
          if ((char)bVar5 != '\0') {
            if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            __this_00 = *(Characters_BaseShifter_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
            if (__this_00 == (Characters_BaseShifter_o *)0x0) goto label_0430193f;
            bVar2 = (TypeInfo_InGameMenu->_2).naturalAligment;
            method_00 = TypeInfo_InGameMenu;
            pCVar10 = __this_00;
            if (((__this_00->klass->_2).naturalAligment < bVar2) ||
               ((__this_00->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_InGameMenu)) goto label_0430193a;
            method_00 = pIVar9;
            UI_InGameMenu__ShowKillScore((UI_InGameMenu_o *)__this_00,damage,0,(MethodInfo *)0x0);
          }
          __this_00 = (Characters_BaseShifter_o *)collider;
          if (collider != (UnityEngine_Collider_o *)0x0) {
            pSVar6 = UnityEngine_Object__get_name((UnityEngine_Object_o *)collider,(MethodInfo *)0x0);
            vtableDispatch = victim->klass->vtable[0x54].methodPtr;
            pMVar11 = victim->klass->vtable[0x54].method;
            uVar8 = "ShifterStun";
            goto label_043016dd;
          }
          goto label_0430193f;
        }
        goto label_043015fe;
      }
    }
    else {
      if (hitbox == (Characters_BaseHitbox_o *)0x0) goto label_0430193f;
      pSVar6 = *(System_String_o **)&(__this->fields)._disableKinematicTimeLeft;
      method_00 = (Il2CppClass *)0x0;
      pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)hitbox,(MethodInfo *)0x0);
      __this_00 = (Characters_BaseShifter_o *)hitbox;
      if (pUVar7 == (UnityEngine_Transform_o *)0x0) goto label_0430193f;
      UVar12 = UnityEngine_Transform__get_position(pUVar7,(MethodInfo *)0x0);
      bVar2 = (TypeInfo_CustomLogicCollisionHandler->_2).naturalAligment;
      method_00 = TypeInfo_CustomLogicCollisionHandler;
      if ((bVar2 <= (victim->klass->_2).naturalAligment) &&
         ((victim->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_CustomLogicCollisionHandler)) {
        CustomLogic_CustomLogicCollisionHandler__GetHit
                  ((CustomLogic_CustomLogicCollisionHandler_o *)victim,(Characters_BaseCharacter_o *)__this,
                   pSVar6,damage,type,UVar12,(MethodInfo *)0x0);
        return;
      }
    }
label_0430193a:
    il2cpp_runtime_helper_022b2fd0();
    __this_00 = pCVar10;
  }
label_0430193f:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adf31 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Roar");
    g_data_057adf31 = '\x01';
  }
  Characters_BaseTitan__Update((Characters_BaseTitan_o *)__this_00,(MethodInfo *)method_00);
  bVar5 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)__this_00,(MethodInfo *)0x0);
  if (((((char)bVar5 != '\0') &&
       (*(char *)((long)&(__this_00->fields)._previousCoreLocalPosition.fields.y + 1) != '\0')) &&
      (*(char *)((long)&(__this_00->fields).Animation + 4) != '\0')) &&
     (cVar4 = (*(__this_00->klass->vtable)._123_CanAction.methodPtr)
                        (__this_00,(__this_00->klass->vtable)._123_CanAction.method), cVar4 != '\0')) {
    (*(__this_00->klass->vtable)._70_Emote.methodPtr)
              (__this_00,"Roar",(__this_00->klass->vtable)._70_Emote.method);
    *(undefined1 *)((long)&(__this_00->fields)._previousCoreLocalPosition.fields.y + 1) = 0;
  }
  return;
}


// Characters.BaseShifter$$Update
// il2cpp: void Characters_BaseShifter__Update (Characters_BaseShifter_o* __this, const MethodInfo* method);
// 0x4301950

void Characters_BaseShifter__Update(Characters_BaseShifter_o *__this,MethodInfo *method)

{
  char cVar1;
  bool_conflict bVar2;
  
  if (g_data_057adf31 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Roar");
    g_data_057adf31 = '\x01';
  }
  Characters_BaseTitan__Update((Characters_BaseTitan_o *)__this,method);
  bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0);
  if ((((char)bVar2 != '\0') &&
      (*(char *)((long)&(__this->fields)._previousCoreLocalPosition.fields.y + 1) != '\0')) &&
     (*(char *)((long)&(__this->fields).Animation + 4) != '\0')) {
    cVar1 = (*(__this->klass->vtable)._123_CanAction.methodPtr)
                      (__this,(__this->klass->vtable)._123_CanAction.method);
    if (cVar1 != '\0') {
      (*(__this->klass->vtable)._70_Emote.methodPtr)
                (__this,"Roar",(__this->klass->vtable)._70_Emote.method);
      *(undefined1 *)((long)&(__this->fields)._previousCoreLocalPosition.fields.y + 1) = 0;
    }
  }
  return;
}


// Characters.BaseShifter$$Land
// il2cpp: void Characters_BaseShifter__Land (Characters_BaseShifter_o* __this, const MethodInfo* method);
// 0x4302840

void Characters_BaseShifter__Land(Characters_BaseShifter_o *__this,MethodInfo *method)

{
  float fVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  UnityEngine_Transform_o *__this_00;
  long *plVar5;
  Characters_AnimationHandler_o *pCVar6;
  System_String_o *pSVar7;
  float fVar8;
  float fVar9;
  UnityEngine_Vector3_o UVar10;
  UnityEngine_Vector3_o position;
  UnityEngine_Quaternion_o rotation;
  undefined8 uStack_48;
  
  if (g_data_057adf32 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    il2cpp_runtime_helper_023445d0(&"Roar");
    g_data_057adf32 = '\x01';
  }
  if (*(char *)((long)&(__this->fields)._previousCoreLocalPosition.fields.y + 1) == '\0') {
    plVar5 = *(long **)&(__this->fields).TurnPause;
    if (plVar5 == (long *)0x0) goto label_04302abd;
    pSVar7 = (System_String_o *)(**(code **)(*plVar5 + 0x1d8))(plVar5,*(undefined8 *)(*plVar5 + 0x1e0));
    pCVar6 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
    if (pCVar6 == (Characters_AnimationHandler_o *)0x0) goto label_04302abd;
    fVar9 = Characters_AnimationHandler__GetLength(pCVar6,pSVar7,(MethodInfo *)0x0);
    *(undefined1 *)&(__this->fields)._stateTimeLeft = 1;
    pCVar6 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
    if (pCVar6 == (Characters_AnimationHandler_o *)0x0) goto label_04302abd;
    Characters_AnimationHandler__SetCullingType(pCVar6,0,(MethodInfo *)0x0);
    (*(__this->klass->vtable)._148_Ungrab.methodPtr)(__this,(__this->klass->vtable)._148_Ungrab.method);
    (*(__this->klass->vtable)._163_DeactivateAllHitboxes.methodPtr)
              (__this,(__this->klass->vtable)._163_DeactivateAllHitboxes.method);
    Characters_BaseCharacter__CrossFade((Characters_BaseCharacter_o *)__this,pSVar7,0.1,0.0,(MethodInfo *)0x0)
    ;
    *(undefined4 *)&(__this->fields).OutlineComponent = 9;
    *(System_String_o **)&(__this->fields)._climbCooldownLeft = pSVar7;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._climbCooldownLeft);
    (__this->fields)._currentCrippleTime = fVar9;
    iVar3 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    (*(__this->klass->vtable)._70_Emote.methodPtr)
              (__this,"Roar",(__this->klass->vtable)._70_Emote.method);
    *(undefined1 *)((long)&(__this->fields)._previousCoreLocalPosition.fields.y + 1) = 0;
    iVar3 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar3 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar4 = *(long *)&(__this->fields).Dead;
  if ((lVar4 != 0) &&
     (__this_00 = *(UnityEngine_Transform_o **)(lVar4 + 0x10), __this_00 != (UnityEngine_Transform_o *)0x0)) {
    pSVar7 = *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x60);
    UVar10 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
    if (g_data_057ac31b == '\0') {
      il2cpp_runtime_helper_023445d0();
      g_data_057ac31b = '\x01';
    }
    uVar2 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x24);
    fVar9 = (__this->fields)._turnTargetRotation.fields.x;
    position.fields.z = UVar10.fields.z + fVar9 * *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x2c);
    rotation = UnityEngine_Quaternion__Internal_FromEulerRad
                         ((UnityEngine_Vector3_o)ZEXT812(0x4096cbe4),(MethodInfo *)0x0);
    fVar1 = *(float *)((long)&(__this->fields).TitanColliderToggler + 4);
    fVar8 = (float)(*(__this->klass->vtable)._117_get_SizeMultiplier.methodPtr)
                             (__this,(__this->klass->vtable)._117_get_SizeMultiplier.method);
    position.fields.x = UVar10.fields.x + fVar9 * (float)uVar2;
    position.fields.y = UVar10.fields.y + fVar9 * (float)((ulong)uVar2 >> 0x20);
    Effects_EffectSpawner__Spawn
              (pSVar7,position,rotation,fVar1 * fVar8,1,(System_Object_array *)0x0,(MethodInfo *)0x0);
    return;
  }
label_04302abd:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adf34 == '\0') {
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057adf34 = '\x01';
  }
  return;
}


// Characters.BaseShifter$$LoadSkin
// il2cpp: void Characters_BaseShifter__LoadSkin (Characters_BaseShifter_o* __this, const MethodInfo* method);
// 0x42ffd10

void Characters_BaseShifter__LoadSkin(Characters_BaseShifter_o *__this,MethodInfo *method)

{
  Settings_SetSettingsContainer_T__o *__this_00;
  Photon_Pun_PhotonView_o *__this_01;
  Characters_AnimationHandler_o *__this_02;
  code *vtableDispatch;
  bool_conflict bVar1;
  Settings_BaseSetSetting_o *pSVar2;
  Il2CppObject *pIVar3;
  System_Object_array *parameters;
  long lVar4;
  Characters_BaseCharacter_o *__this_03;
  char cVar5;
  Characters_BaseShifter_c *in_RCX;
  System_String_o *b;
  int iVar6;
  long *plVar7;
  undefined4 uVar8;
  float in_XMM1_Da;
  
  if (g_data_057adf33 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetSetting_GetSelectedSet);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ShifterCustomSkinSet);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    il2cpp_runtime_helper_023445d0(&"LoadSkinRPC");
    g_data_057adf33 = '\x01';
  }
  bVar1 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    return;
  }
  lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
  if (((lVar4 == 0) ||
      (__this_00 = *(Settings_SetSettingsContainer_T__o **)(lVar4 + 0x30),
      __this_00 == (Settings_SetSettingsContainer_T__o *)0x0)) || (__this_00[1].monitor == (void *)0x0))
  goto label_042ffeab;
  if (*(char *)((long)__this_00[1].monitor + 0x11) == '\0') {
    return;
  }
  pSVar2 = Settings_SetSettingsContainer_object___GetSelectedSet(__this_00,MethodInfo_BaseSetSetting_GetSelectedSet);
  if (pSVar2 == (Settings_BaseSetSetting_o *)0x0) {
label_042ffe0a:
    in_RCX = __this->klass;
    pIVar3 = (Il2CppObject *)
             (*(in_RCX->vtable)._177_GetSkinURL.methodPtr)
                       (__this,pSVar2,(in_RCX->vtable)._177_GetSkinURL.method);
    lVar4 = *(long *)&(__this->fields).Dead;
    if (lVar4 == 0) {
label_042ffeab:
      pSVar2 = (Settings_BaseSetSetting_o *)il2cpp_runtime_helper_022b2c90();
      goto label_042ffeb0;
    }
    __this_01 = *(Photon_Pun_PhotonView_o **)(lVar4 + 0x20);
    parameters = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
    if (parameters == (System_Object_array *)0x0) goto label_042ffeab;
    if (pIVar3 != (Il2CppObject *)0x0) {
      lVar4 = il2cpp_runtime_helper_023051f0(pIVar3);
      cVar5 = (char)in_RCX;
      if (lVar4 == 0) goto label_042ffebd;
    }
    cVar5 = (char)in_RCX;
    if ((int)parameters->max_length != 0) {
      parameters->m_Items[0] = pIVar3;
      il2cpp_runtime_helper_022b4080(parameters->m_Items);
      if (__this_01 != (Photon_Pun_PhotonView_o *)0x0) {
        Photon_Pun_PhotonView__RPC(__this_01,"LoadSkinRPC",3,parameters,(MethodInfo *)0x0);
        return;
      }
      goto label_042ffeab;
    }
  }
  else {
    in_RCX = (Characters_BaseShifter_c *)pSVar2->klass;
    if ((*(byte *)(TypeInfo_ShifterCustomSkinSet + 0x130) <= (in_RCX->_2).naturalAligment) &&
       (in_RCX = (Characters_BaseShifter_c *)(in_RCX->_2).typeHierarchy,
       *(long *)((long)in_RCX + (ulong)*(byte *)(TypeInfo_ShifterCustomSkinSet + 0x130) * 8 + -8) == TypeInfo_ShifterCustomSkinSet))
    goto label_042ffe0a;
label_042ffeb0:
    cVar5 = (char)in_RCX;
    il2cpp_runtime_helper_022b2fd0(pSVar2);
  }
  il2cpp_runtime_helper_022b2ca0();
label_042ffebd:
  __this_03 = (Characters_BaseCharacter_o *)il2cpp_runtime_helper_0231b270();
  iVar6 = 0;
  uVar8 = il2cpp_runtime_helper_022b2b10();
  *(undefined1 *)&__this_03[2].fields.m_CancellationTokenSource = 1;
  if ((__this_03 != (Characters_BaseCharacter_o *)0x0) &&
     (__this_02 = *(Characters_AnimationHandler_o **)&(__this_03->fields)._cameraFPS,
     __this_02 != (Characters_AnimationHandler_o *)0x0)) {
    Characters_AnimationHandler__SetCullingType
              (__this_02,(uint)((iVar6 - 6U & 0xfffffffb) == 0),(MethodInfo *)0x0);
    if ((iVar6 != 0x17) && (iVar6 != 0x1b)) {
      (*(code *)__this_03->klass[1].vtable._18_unknown.method)
                (__this_03,__this_03->klass[1].vtable._19_unknown.methodPtr);
    }
    if (cVar5 != '\0') {
      (*(code *)__this_03->klass[1].vtable._33_OnCreateRoomFailed.method)
                (__this_03,__this_03->klass[1].vtable._34_OnJoinRoomFailed.methodPtr);
    }
    if ((iVar6 != 0) ||
       (bVar1 = System_String__op_Inequality(__this_03[2].monitor,b,(MethodInfo *)0x0), (char)bVar1 != '\0'))
    {
      Characters_BaseCharacter__CrossFade(__this_03,b,in_XMM1_Da,0.0,(MethodInfo *)0x0);
    }
    *(int *)&(__this_03->fields).OutlineComponent = iVar6;
    __this_03[2].monitor = b;
    il2cpp_runtime_helper_022b4080(&__this_03[2].monitor,b);
    *(undefined4 *)((long)&__this_03[1].fields.OnPlayerPropertiesChanged + 4) = uVar8;
    return;
  }
  plVar7 = (long *)0x0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adf2b == '\0') {
    il2cpp_runtime_helper_023445d0(&"AttackKick");
    g_data_057adf2b = '\x01';
  }
  vtableDispatch = *(code **)(*plVar7 + 0x938);
  (*vtableDispatch)(plVar7,"AttackKick",*(undefined8 *)(*plVar7 + 0x940),vtableDispatch);
  return;
}


// Characters.BaseShifter$$GetSkinURL
// il2cpp: System_String_o* Characters_BaseShifter__GetSkinURL (Characters_BaseShifter_o* __this, Settings_ShifterCustomSkinSet_o* set, const MethodInfo* method);
// 0x4302ad0

System_String_o *
Characters_BaseShifter__GetSkinURL
          (Characters_BaseShifter_o *__this,Settings_ShifterCustomSkinSet_o *set,MethodInfo *method)

{
  if (g_data_057adf34 == '\0') {
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057adf34 = '\x01';
  }
  return "";
}


// Characters.BaseShifter$$CreateCustomSkinLoader
// il2cpp: CustomSkins_BaseCustomSkinLoader_o* Characters_BaseShifter__CreateCustomSkinLoader (Characters_BaseShifter_o* __this, const MethodInfo* method);
// 0x4302b00

CustomSkins_BaseCustomSkinLoader_o *
Characters_BaseShifter__CreateCustomSkinLoader(Characters_BaseShifter_o *__this,MethodInfo *method)

{
  return (CustomSkins_BaseCustomSkinLoader_o *)0x0;
}


// Characters.BaseShifter$$LoadSkinRPC
// il2cpp: void Characters_BaseShifter__LoadSkinRPC (Characters_BaseShifter_o* __this, System_String_o* url, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x4302b10

void Characters_BaseShifter__LoadSkinRPC
               (Characters_BaseShifter_o *__this,System_String_o *url,Photon_Pun_PhotonMessageInfo_o info,
               MethodInfo *method)

{
  uint uVar1;
  System_Collections_Generic_Dictionary_string__float__o *pSVar2;
  bool_conflict bVar3;
  UnityEngine_LayerMask_o UVar4;
  long *plVar5;
  long lVar6;
  System_Collections_IEnumerator_o *routine;
  Characters_BaseCharacter_o *__this_00;
  System_Int32_array *layers;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar7;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  
  if (g_data_057adf35 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    g_data_057adf35 = '\x01';
  }
  lVar6 = *(long *)&(__this->fields).Dead;
  if ((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0x20), lVar6 == 0)) {
label_04302ccf:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if (info.fields.Sender != *(Photon_Realtime_Player_o **)(lVar6 + 0x80)) {
      return;
    }
    pSVar2 = (__this->fields)._rootMotionAnimations;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pSVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      return;
    }
    lVar6 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
    if (((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0x30), lVar6 == 0)) || (*(long *)(lVar6 + 0x38) == 0))
    goto label_04302ccf;
    if (*(char *)(*(long *)(lVar6 + 0x38) + 0x11) == '\0') {
      return;
    }
    if (*(long *)(lVar6 + 0x30) == 0) goto label_04302ccf;
    if (*(char *)(*(long *)(lVar6 + 0x30) + 0x11) != '\0') {
      lVar6 = *(long *)&(__this->fields).Dead;
      if ((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0x20), lVar6 == 0)) goto label_04302ccf;
      if (*(char *)(lVar6 + 0x68) == '\0') {
        return;
      }
    }
    pSVar2 = (__this->fields)._rootMotionAnimations;
    plVar5 = (long *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,1);
    if (plVar5 == (long *)0x0) goto label_04302ccf;
    if ((url != (System_String_o *)0x0) &&
       (lVar6 = il2cpp_runtime_helper_023051f0(url,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0)) goto label_04302cd9;
    if ((int)plVar5[3] != 0) {
      plVar5[4] = (long)url;
      il2cpp_runtime_helper_022b4080(plVar5 + 4,url);
      if (pSVar2 != (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
        routine = (System_Collections_IEnumerator_o *)
                  (*(pSVar2->klass->vtable)._6_System_Collections_Generic_IDictionary_TKey_TValue__get_Keys.
                    methodPtr)(pSVar2,plVar5,
                               (pSVar2->klass->vtable).
                               _6_System_Collections_Generic_IDictionary_TKey_TValue__get_Keys.method);
        UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                  ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
        return;
      }
      goto label_04302ccf;
    }
  }
  il2cpp_runtime_helper_022b2ca0();
label_04302cd9:
  __this_00 = (Characters_BaseCharacter_o *)il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10(__this_00,0);
  if (g_data_057adf9b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Single);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_float);
    il2cpp_runtime_helper_023445d0(&TypeInfo_int);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhysicsLayer);
    g_data_057adf9b = '\x01';
  }
  *(undefined8 *)((long)&__this_00[1].fields.m_CachedPtr + 4) = 0x3f0000003f800000;
  *(undefined8 *)((long)&__this_00[1].fields.m_CancellationTokenSource + 4) = 0x3e4ccccd3e99999a;
  *(undefined4 *)((long)&__this_00[1].fields.pvCache + 4) = 0x3e4ccccd;
  __this_00[1].fields.FootstepsEnabled = 0x3e4ccccd;
  __this_00[1].fields.SoundsEnabled = 0x40a00000;
  __this_00[1].fields.MaxFootstepDistance = 0.7;
  __this_00[1].fields.MaxSoundDistance = 0.85;
  __this_00[1].fields._disableKinematicTimeLeft = 5.0;
  layers = (System_Int32_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_int);
  if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (layers != (System_Int32_array *)0x0) {
    uVar1 = (uint)layers->max_length;
    if (uVar1 != 0) {
      lVar6 = *(long *)(TypeInfo_PhysicsLayer + 0xb8);
      layers->m_Items[0] = *(int32_t *)(lVar6 + 0x10);
      if ((((uVar1 != 1) && (layers->m_Items[1] = *(int32_t *)(lVar6 + 0x38), 2 < uVar1)) &&
          (layers->m_Items[2] = *(int32_t *)(lVar6 + 0x50), uVar1 != 3)) &&
         (layers->m_Items[3] = *(int32_t *)(lVar6 + 0x34), 4 < uVar1)) {
        layers->m_Items[4] = *(int32_t *)(lVar6 + 0x3c);
        UVar4 = Utility_PhysicsLayer__GetMask(layers,(MethodInfo *)0x0);
        __this_00[1].fields.HasExplicitNameTag = (bool_conflict)UVar4.fields.m_Mask;
        *(undefined4 *)&__this_00[1].fields.field_0x44 = 0x3f800000;
        *(undefined4 *)((long)&__this_00[1].fields.Guild + 4) = 0xbf800000;
        pSVar7 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_float);
        System_Collections_Generic_Dictionary_object__float____ctor(pSVar7,MethodInfo_Dictionary_2_System_String_System_Single);
        __this_00[1].fields.FeedKillerName = (System_String_o *)pSVar7;
        il2cpp_runtime_helper_022b4080(&__this_00[1].fields.FeedKillerName,pSVar7);
        pSVar7 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_float);
        System_Collections_Generic_Dictionary_object__float____ctor(pSVar7,MethodInfo_Dictionary_2_System_String_System_Single);
        *(System_Collections_Generic_Dictionary_TKey__TValue__o **)&__this_00[2].fields.HasExplicitNameTag =
             pSVar7;
        il2cpp_runtime_helper_022b4080(&__this_00[2].fields.HasExplicitNameTag,pSVar7);
        __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
                    il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_string);
        System_Collections_Generic_Dictionary_object__object____ctor(__this_01,MethodInfo_Dictionary_2_System_String_System_String);
        __this_00[2].fields.Guild = (System_String_o *)__this_01;
        il2cpp_runtime_helper_022b4080(&__this_00[2].fields.Guild);
        *(undefined1 *)&__this_00[2].fields.FeedKillerName = 1;
        Characters_BaseCharacter___ctor(__this_00,(MethodInfo *)0x0);
        return;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// Characters.BaseShifter$$.ctor
// il2cpp: void Characters_BaseShifter___ctor (Characters_BaseShifter_o* __this, const MethodInfo* method);
// 0x42fefc0

void Characters_BaseShifter___ctor(Characters_BaseShifter_o *__this,MethodInfo *method)

{
  *(undefined1 *)((long)&(__this->fields)._previousCoreLocalPosition.fields.y + 1) = 1;
  (__this->fields)._furthestCoreLocalPosition.fields.z = 2.0;
  Characters_BaseTitan___ctor((Characters_BaseTitan_o *)__this,method);
  return;
}


