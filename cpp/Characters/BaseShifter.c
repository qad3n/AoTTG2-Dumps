// Type: Characters.BaseShifter
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Characters/BaseShifter.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Characters/Shifters/BaseShifter.cs  [CHANGED since prior version]
// --------------------------------

// Characters.BaseShifter.<WaitAndBecomeHuman>d__26$$.ctor
// il2cpp: void Characters_BaseShifter__WaitAndBecomeHuman_d__26___ctor (Characters_BaseShifter__WaitAndBecomeHuman_d__26_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x3ff4420

void Characters_BaseShifter_<WaitAndBecomeHuman>d__26___ctor
               (Characters_BaseShifter__WaitAndBecomeHuman_d__26_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Characters.BaseShifter.<WaitAndBecomeHuman>d__26$$System.IDisposable.Dispose
// il2cpp: void Characters_BaseShifter__WaitAndBecomeHuman_d__26__System_IDisposable_Dispose (Characters_BaseShifter__WaitAndBecomeHuman_d__26_o* __this, const MethodInfo* method);
// 0x3ff6650

void Characters_BaseShifter_<WaitAndBecomeHuman>d__26__System_IDisposable_Dispose
               (Characters_BaseShifter__WaitAndBecomeHuman_d__26_o *__this,MethodInfo *method)

{
  return;
}


// Characters.BaseShifter.<WaitAndBecomeHuman>d__26$$MoveNext
// il2cpp: bool Characters_BaseShifter__WaitAndBecomeHuman_d__26__MoveNext (Characters_BaseShifter__WaitAndBecomeHuman_d__26_o* __this, const MethodInfo* method);
// 0x3ff6660

/* WARNING: Type propagation algorithm not settling */

bool_conflict
Characters_BaseShifter_<WaitAndBecomeHuman>d__26__MoveNext
          (Characters_BaseShifter__WaitAndBecomeHuman_d__26_o *__this,MethodInfo *method)

{
  float seconds;
  byte bVar1;
  int iVar2;
  Characters_BaseShifter_o *__this_00;
  Photon_Pun_PhotonView_o *pPVar3;
  System_Action_Hashtable__o *pSVar4;
  UnityEngine_Transform_o *pUVar5;
  GameManagers_InGameManager_o *__this_01;
  System_String_o *pSVar6;
  System_String_Fields __this_02;
  UnityEngine_WaitForSeconds_o *__this_03;
  long lVar7;
  long lVar8;
  System_Collections_IEnumerator_o *pSVar9;
  UnityEngine_Vector3_o position;
  UnityEngine_Vector3_o UVar10;
  UnityEngine_Vector3_o euler;
  UnityEngine_Quaternion_o rotation;
  
  if (DAT_057041c8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object___Empty_Object);
    il2cpp_init_method_metadata(&TypeInfo_Human);
    il2cpp_init_method_metadata(&TypeInfo_WaitForSeconds);
    il2cpp_init_method_metadata(&"MarkDeadRPC");
    il2cpp_init_method_metadata(&"MarkTransformingRPC");
    DAT_057041c8 = '\x01';
  }
  iVar2 = (__this->fields).__1__state;
  __this_00 = (__this->fields).__4__this;
  if (iVar2 == 2) {
    (__this->fields).__1__state = -1;
    if (((__this_00 != (Characters_BaseShifter_o *)0x0) &&
        (pSVar4 = (__this_00->fields).OnPlayerPropertiesChanged,
        pSVar4 != (System_Action_Hashtable__o *)0x0)) &&
       (pUVar5 = (UnityEngine_Transform_o *)(pSVar4->fields).method_code,
       pUVar5 != (UnityEngine_Transform_o *)0x0)) {
      __this_01 = (GameManagers_InGameManager_o *)(__this_00->fields).Team;
      position = UnityEngine_Transform__get_position(pUVar5,(MethodInfo *)0x0);
      pSVar4 = (__this_00->fields).OnPlayerPropertiesChanged;
      if ((pSVar4 != (System_Action_Hashtable__o *)0x0) &&
         (pUVar5 = (UnityEngine_Transform_o *)(pSVar4->fields).method_code,
         pUVar5 != (UnityEngine_Transform_o *)0x0)) {
        rotation = UnityEngine_Transform__get_rotation(pUVar5,(MethodInfo *)0x0);
        UVar10 = UnityEngine_Quaternion__Internal_ToEulerRad(rotation,(MethodInfo *)0x0);
        euler.fields.x = UVar10.fields.x * 57.29578;
        euler.fields.y = UVar10.fields.y * 57.29578;
        euler.fields.z = UVar10.fields.z * 57.29578;
        UVar10 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
        if (__this_01 != (GameManagers_InGameManager_o *)0x0) {
          GameManagers_InGameManager__SpawnPlayerAt
                    (__this_01,0,position,UVar10.fields.y,(MethodInfo *)0x0);
          pSVar6 = (__this_00->fields).Team;
          if ((pSVar6 != (System_String_o *)0x0) &&
             (__this_02 = pSVar6[4].fields, __this_02 != (System_String_Fields)0x0)) {
            if ((*(byte *)(TypeInfo_Human + 0x130) <= *(byte *)(*(long *)__this_02 + 0x130)) &&
               (*(long *)(*(long *)(*(long *)__this_02 + 200) +
                         ((ulong)*(byte *)(TypeInfo_Human + 0x130) - 1) * 8) == TypeInfo_Human)) {
              pSVar9 = Characters_Human__WaitAndTransformFromShifter
                                 ((Characters_Human_o *)__this_02,
                                  (__this_00->fields)._previousCoreLocalPosition.fields.z,
                                  *(Characters_BaseUseable_o **)
                                   &(__this_00->fields)._furthestCoreLocalPosition.fields,
                                  (MethodInfo *)0x0);
              UnityEngine_MonoBehaviour__StartCoroutine
                        ((UnityEngine_MonoBehaviour_o *)__this_02,pSVar9,(MethodInfo *)0x0);
              return 0;
            }
                    /* WARNING: Subroutine does not return */
            il2cpp_unwind_resume(__this_02);
          }
        }
      }
    }
    goto LAB_03ff6aaf;
  }
  if (iVar2 != 1) {
    if (iVar2 != 0) {
      return 0;
    }
    (__this->fields).__1__state = -1;
    seconds = (__this->fields).time;
    __this_03 = (UnityEngine_WaitForSeconds_o *)il2cpp_runtime_glue(TypeInfo_WaitForSeconds);
    UnityEngine_WaitForSeconds___ctor(__this_03,seconds,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)__this_03;
    il2cpp_runtime_glue(&(__this->fields).__2__current,__this_03);
    (__this->fields).__1__state = 1;
    goto LAB_03ff6a4b;
  }
  (__this->fields).__1__state = -1;
  lVar8 = MethodInfo_Object___Empty_Object;
  if ((__this_00 == (Characters_BaseShifter_o *)0x0) ||
     (lVar7 = *(long *)&(__this_00->fields).Dead, lVar7 == 0)) goto LAB_03ff6aaf;
  pPVar3 = *(Photon_Pun_PhotonView_o **)(lVar7 + 0x20);
  if (*(long *)(MethodInfo_Object___Empty_Object + 0x38) == 0) {
    il2cpp_glue_022c2910(MethodInfo_Object___Empty_Object);
    lVar7 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) goto LAB_03ff6778;
LAB_03ff6907:
    if (*(int *)(lVar7 + 0xe4) == 0) goto LAB_03ff678d;
LAB_03ff6914:
    lVar8 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
    bVar1 = *(byte *)(lVar8 + 0x135);
  }
  else {
    lVar7 = *(long *)(*(long *)(MethodInfo_Object___Empty_Object + 0x38) + 0x10);
    if ((*(byte *)(lVar7 + 0x135) & 1) != 0) goto LAB_03ff6907;
LAB_03ff6778:
    lVar7 = il2cpp_glue_022c28b0();
    if (*(int *)(lVar7 + 0xe4) != 0) goto LAB_03ff6914;
LAB_03ff678d:
    il2cpp_init_class();
    lVar8 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
    bVar1 = *(byte *)(lVar8 + 0x135);
  }
  if ((bVar1 & 1) == 0) {
    lVar8 = il2cpp_glue_022c28b0(lVar8);
  }
  if (pPVar3 == (Photon_Pun_PhotonView_o *)0x0) goto LAB_03ff6aaf;
  Photon_Pun_PhotonView__RPC
            (pPVar3,"MarkTransformingRPC",3,(System_Object_array *)**(undefined8 **)(lVar8 + 0xb8),
             (MethodInfo *)0x0);
  lVar7 = MethodInfo_Object___Empty_Object;
  lVar8 = *(long *)&(__this_00->fields).Dead;
  if (lVar8 == 0) goto LAB_03ff6aaf;
  pPVar3 = *(Photon_Pun_PhotonView_o **)(lVar8 + 0x20);
  if (*(long *)(MethodInfo_Object___Empty_Object + 0x38) == 0) {
    il2cpp_glue_022c2910(MethodInfo_Object___Empty_Object);
    lVar8 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) goto LAB_03ff6992;
LAB_03ff6a7b:
    if (*(int *)(lVar8 + 0xe4) == 0) goto LAB_03ff69a7;
LAB_03ff6a88:
    lVar8 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
    bVar1 = *(byte *)(lVar8 + 0x135);
  }
  else {
    lVar8 = *(long *)(*(long *)(MethodInfo_Object___Empty_Object + 0x38) + 0x10);
    if ((*(byte *)(lVar8 + 0x135) & 1) != 0) goto LAB_03ff6a7b;
LAB_03ff6992:
    lVar8 = il2cpp_glue_022c28b0();
    if (*(int *)(lVar8 + 0xe4) != 0) goto LAB_03ff6a88;
LAB_03ff69a7:
    il2cpp_init_class();
    lVar8 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
    bVar1 = *(byte *)(lVar8 + 0x135);
  }
  if ((bVar1 & 1) == 0) {
    lVar8 = il2cpp_glue_022c28b0(lVar8);
  }
  if (pPVar3 != (Photon_Pun_PhotonView_o *)0x0) {
    Photon_Pun_PhotonView__RPC
              (pPVar3,"MarkDeadRPC",3,(System_Object_array *)**(undefined8 **)(lVar8 + 0xb8),
               (MethodInfo *)0x0);
    pSVar9 = (System_Collections_IEnumerator_o *)
             (*(__this_00->klass->vtable)._74_WaitAndDie.methodPtr)
                       (__this_00,(__this_00->klass->vtable)._74_WaitAndDie.method);
    UnityEngine_MonoBehaviour__StartCoroutine
              ((UnityEngine_MonoBehaviour_o *)__this_00,pSVar9,(MethodInfo *)0x0);
    __this_03 = (UnityEngine_WaitForSeconds_o *)il2cpp_runtime_glue(TypeInfo_WaitForSeconds);
    UnityEngine_WaitForSeconds___ctor(__this_03,2.0,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)__this_03;
    il2cpp_runtime_glue(&(__this->fields).__2__current,__this_03);
    (__this->fields).__1__state = 2;
LAB_03ff6a4b:
    return (bool_conflict)CONCAT71((int7)((ulong)__this_03 >> 8),1);
  }
LAB_03ff6aaf:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseShifter.<WaitAndBecomeHuman>d__26$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Characters_BaseShifter__WaitAndBecomeHuman_d__26__System_Collections_Generic_IEnumerator_System_Object__get_Current (Characters_BaseShifter__WaitAndBecomeHuman_d__26_o* __this, const MethodInfo* method);
// 0x3ff6ac0

Il2CppObject *
Characters_BaseShifter_<WaitAndBecomeHuman>d__26__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (Characters_BaseShifter__WaitAndBecomeHuman_d__26_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Characters.BaseShifter.<WaitAndBecomeHuman>d__26$$System.Collections.IEnumerator.Reset
// il2cpp: void Characters_BaseShifter__WaitAndBecomeHuman_d__26__System_Collections_IEnumerator_Reset (Characters_BaseShifter__WaitAndBecomeHuman_d__26_o* __this, const MethodInfo* method);
// 0x3ff6ad0

void Characters_BaseShifter_<WaitAndBecomeHuman>d__26__System_Collections_IEnumerator_Reset
               (Characters_BaseShifter__WaitAndBecomeHuman_d__26_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_init_method_metadata(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_glue(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_init_method_metadata(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this_00,uVar1);
}


// Characters.BaseShifter.<WaitAndBecomeHuman>d__26$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Characters_BaseShifter__WaitAndBecomeHuman_d__26__System_Collections_IEnumerator_get_Current (Characters_BaseShifter__WaitAndBecomeHuman_d__26_o* __this, const MethodInfo* method);
// 0x3ff6b10

Il2CppObject *
Characters_BaseShifter_<WaitAndBecomeHuman>d__26__System_Collections_IEnumerator_get_Current
          (Characters_BaseShifter__WaitAndBecomeHuman_d__26_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Characters.BaseShifter.<WaitAndDie>d__27$$.ctor
// il2cpp: void Characters_BaseShifter__WaitAndDie_d__27___ctor (Characters_BaseShifter__WaitAndDie_d__27_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x3ff44b0

void Characters_BaseShifter_<WaitAndDie>d__27___ctor
               (Characters_BaseShifter__WaitAndDie_d__27_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Characters.BaseShifter.<WaitAndDie>d__27$$System.IDisposable.Dispose
// il2cpp: void Characters_BaseShifter__WaitAndDie_d__27__System_IDisposable_Dispose (Characters_BaseShifter__WaitAndDie_d__27_o* __this, const MethodInfo* method);
// 0x3ff6b20

void Characters_BaseShifter_<WaitAndDie>d__27__System_IDisposable_Dispose
               (Characters_BaseShifter__WaitAndDie_d__27_o *__this,MethodInfo *method)

{
  return;
}


// Characters.BaseShifter.<WaitAndDie>d__27$$MoveNext
// il2cpp: bool Characters_BaseShifter__WaitAndDie_d__27__MoveNext (Characters_BaseShifter__WaitAndDie_d__27_o* __this, const MethodInfo* method);
// 0x3ff6b30

bool_conflict
Characters_BaseShifter_<WaitAndDie>d__27__MoveNext
          (Characters_BaseShifter__WaitAndDie_d__27_o *__this,MethodInfo *method)

{
  float fVar1;
  int iVar2;
  Characters_BaseShifter_o *__this_00;
  long *plVar3;
  Characters_AnimationHandler_o *__this_01;
  System_Action_Hashtable__o *pSVar4;
  UnityEngine_Transform_o *pUVar5;
  System_String_o *pSVar6;
  UnityEngine_WaitForSeconds_o *pUVar7;
  UnityEngine_GameObject_o *targetGo;
  bool_conflict bVar8;
  float fVar9;
  UnityEngine_Vector3_o UVar10;
  UnityEngine_Quaternion_o UVar11;
  
  if (DAT_057041c9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EffectPrefabs);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_WaitForSeconds);
    DAT_057041c9 = '\x01';
  }
  iVar2 = (__this->fields).__1__state;
  __this_00 = (__this->fields).__4__this;
  if (iVar2 == 2) {
    (__this->fields).__1__state = -1;
    if (*(int *)(TypeInfo_EffectPrefabs + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (((__this_00 == (Characters_BaseShifter_o *)0x0) ||
        (pSVar4 = (__this_00->fields).OnPlayerPropertiesChanged,
        pSVar4 == (System_Action_Hashtable__o *)0x0)) ||
       (pUVar5 = (UnityEngine_Transform_o *)(pSVar4->fields).interp_invoke_impl,
       pUVar5 == (UnityEngine_Transform_o *)0x0)) goto LAB_03ff6ec7;
    pSVar6 = *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x50);
    UVar10 = UnityEngine_Transform__get_position(pUVar5,(MethodInfo *)0x0);
    UVar11 = UnityEngine_Quaternion__Internal_FromEulerRad
                       ((UnityEngine_Vector3_o)ZEXT812(0xbfc90fdb),(MethodInfo *)0x0);
    fVar1 = *(float *)((long)&(__this_00->fields).TitanColliderToggler + 4);
    fVar9 = (float)(*(__this_00->klass->vtable)._117_get_SizeMultiplier.methodPtr)(__this_00);
    Effects_EffectSpawner__Spawn
              (pSVar6,UVar10,UVar11,fVar1 * fVar9,0,(System_Object_array *)0x0,(MethodInfo *)0x0);
    targetGo = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar8 = 0;
    Photon_Pun_PhotonNetwork__Destroy(targetGo,(MethodInfo *)0x0);
  }
  else if (iVar2 == 1) {
    (__this->fields).__1__state = -1;
    if (*(int *)(TypeInfo_EffectPrefabs + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (((__this_00 == (Characters_BaseShifter_o *)0x0) ||
        (pSVar4 = (__this_00->fields).OnPlayerPropertiesChanged,
        pSVar4 == (System_Action_Hashtable__o *)0x0)) ||
       (pUVar5 = (UnityEngine_Transform_o *)(pSVar4->fields).interp_invoke_impl,
       pUVar5 == (UnityEngine_Transform_o *)0x0)) goto LAB_03ff6ec7;
    pSVar6 = *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x48);
    UVar10 = UnityEngine_Transform__get_position(pUVar5,(MethodInfo *)0x0);
    UVar11 = UnityEngine_Quaternion__Internal_FromEulerRad
                       ((UnityEngine_Vector3_o)ZEXT812(0xbfc90fdb),(MethodInfo *)0x0);
    fVar1 = *(float *)((long)&(__this_00->fields).TitanColliderToggler + 4);
    fVar9 = (float)(*(__this_00->klass->vtable)._117_get_SizeMultiplier.methodPtr)(__this_00);
    Effects_EffectSpawner__Spawn
              (pSVar6,UVar10,UVar11,fVar1 * fVar9,0,(System_Object_array *)0x0,(MethodInfo *)0x0);
    pUVar7 = (UnityEngine_WaitForSeconds_o *)il2cpp_runtime_glue(TypeInfo_WaitForSeconds);
    UnityEngine_WaitForSeconds___ctor(pUVar7,3.0,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)pUVar7;
    il2cpp_runtime_glue(&(__this->fields).__2__current,pUVar7);
    (__this->fields).__1__state = 2;
    bVar8 = (bool_conflict)CONCAT71((int7)((ulong)pUVar7 >> 8),1);
  }
  else {
    if (iVar2 == 0) {
      (__this->fields).__1__state = -1;
      if ((__this_00 != (Characters_BaseShifter_o *)0x0) &&
         (plVar3 = *(long **)&(__this_00->fields).TurnPause, plVar3 != (long *)0x0)) {
        pSVar6 = (System_String_o *)(**(code **)(*plVar3 + 0x1f8))();
        *(undefined1 *)&(__this_00->fields)._stateTimeLeft = 1;
        __this_01 = *(Characters_AnimationHandler_o **)&(__this_00->fields)._cameraFPS;
        if (__this_01 != (Characters_AnimationHandler_o *)0x0) {
          Characters_AnimationHandler__SetCullingType(__this_01,0,(MethodInfo *)0x0);
          (*(__this_00->klass->vtable)._148_Ungrab.methodPtr)
                    (__this_00,(__this_00->klass->vtable)._148_Ungrab.method);
          (*(__this_00->klass->vtable)._163_DeactivateAllHitboxes.methodPtr)
                    (__this_00,(__this_00->klass->vtable)._163_DeactivateAllHitboxes.method);
          Characters_BaseCharacter__CrossFade
                    ((Characters_BaseCharacter_o *)__this_00,pSVar6,0.1,0.0,(MethodInfo *)0x0);
          *(undefined4 *)&(__this_00->fields).OutlineComponent = 0xf;
          *(System_String_o **)&(__this_00->fields)._climbCooldownLeft = pSVar6;
          il2cpp_runtime_glue(&(__this_00->fields)._climbCooldownLeft);
          (__this_00->fields)._currentCrippleTime = 0.0;
          fVar1 = (__this_00->fields)._furthestCoreLocalPosition.fields.z;
          pUVar7 = (UnityEngine_WaitForSeconds_o *)il2cpp_runtime_glue(TypeInfo_WaitForSeconds);
          UnityEngine_WaitForSeconds___ctor(pUVar7,fVar1,(MethodInfo *)0x0);
          (__this->fields).__2__current = (Il2CppObject *)pUVar7;
          il2cpp_runtime_glue(&(__this->fields).__2__current,pUVar7);
          (__this->fields).__1__state = 1;
          return (bool_conflict)CONCAT71((int7)((ulong)pUVar7 >> 8),1);
        }
      }
LAB_03ff6ec7:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    bVar8 = 0;
  }
  return bVar8;
}


// Characters.BaseShifter.<WaitAndDie>d__27$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Characters_BaseShifter__WaitAndDie_d__27__System_Collections_Generic_IEnumerator_System_Object__get_Current (Characters_BaseShifter__WaitAndDie_d__27_o* __this, const MethodInfo* method);
// 0x3ff6f00

Il2CppObject *
Characters_BaseShifter_<WaitAndDie>d__27__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (Characters_BaseShifter__WaitAndDie_d__27_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Characters.BaseShifter.<WaitAndDie>d__27$$System.Collections.IEnumerator.Reset
// il2cpp: void Characters_BaseShifter__WaitAndDie_d__27__System_Collections_IEnumerator_Reset (Characters_BaseShifter__WaitAndDie_d__27_o* __this, const MethodInfo* method);
// 0x3ff6f10

void Characters_BaseShifter_<WaitAndDie>d__27__System_Collections_IEnumerator_Reset
               (Characters_BaseShifter__WaitAndDie_d__27_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_init_method_metadata(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_glue(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_init_method_metadata(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this_00,uVar1);
}


// Characters.BaseShifter.<WaitAndDie>d__27$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Characters_BaseShifter__WaitAndDie_d__27__System_Collections_IEnumerator_get_Current (Characters_BaseShifter__WaitAndDie_d__27_o* __this, const MethodInfo* method);
// 0x3ff6f50

Il2CppObject *
Characters_BaseShifter_<WaitAndDie>d__27__System_Collections_IEnumerator_get_Current
          (Characters_BaseShifter__WaitAndDie_d__27_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Characters.BaseShifter$$get_DefaultMaxHealth
// il2cpp: int32_t Characters_BaseShifter__get_DefaultMaxHealth (Characters_BaseShifter_o* __this, const MethodInfo* method);
// 0x3ff3010

int32_t Characters_BaseShifter__get_DefaultMaxHealth
                  (Characters_BaseShifter_o *__this,MethodInfo *method)

{
  return 1000;
}


// Characters.BaseShifter$$get_DefaultRunSpeed
// il2cpp: float Characters_BaseShifter__get_DefaultRunSpeed (Characters_BaseShifter_o* __this, const MethodInfo* method);
// 0x3ff3020

float Characters_BaseShifter__get_DefaultRunSpeed
                (Characters_BaseShifter_o *__this,MethodInfo *method)

{
  return 100.0;
}


// Characters.BaseShifter$$get_DefaultWalkSpeed
// il2cpp: float Characters_BaseShifter__get_DefaultWalkSpeed (Characters_BaseShifter_o* __this, const MethodInfo* method);
// 0x3ff3030

float Characters_BaseShifter__get_DefaultWalkSpeed
                (Characters_BaseShifter_o *__this,MethodInfo *method)

{
  return 20.0;
}


// Characters.BaseShifter$$get_DefaultRotateSpeed
// il2cpp: float Characters_BaseShifter__get_DefaultRotateSpeed (Characters_BaseShifter_o* __this, const MethodInfo* method);
// 0x3ff3040

float Characters_BaseShifter__get_DefaultRotateSpeed
                (Characters_BaseShifter_o *__this,MethodInfo *method)

{
  return 10.0;
}


// Characters.BaseShifter$$get_DefaultJumpForce
// il2cpp: float Characters_BaseShifter__get_DefaultJumpForce (Characters_BaseShifter_o* __this, const MethodInfo* method);
// 0x3ff3050

float Characters_BaseShifter__get_DefaultJumpForce
                (Characters_BaseShifter_o *__this,MethodInfo *method)

{
  return 200.0;
}


// Characters.BaseShifter$$get_SizeMultiplier
// il2cpp: float Characters_BaseShifter__get_SizeMultiplier (Characters_BaseShifter_o* __this, const MethodInfo* method);
// 0x3ff3060

float Characters_BaseShifter__get_SizeMultiplier
                (Characters_BaseShifter_o *__this,MethodInfo *method)

{
  return 3.0;
}


// Characters.BaseShifter$$get_DefaultCrippleTime
// il2cpp: float Characters_BaseShifter__get_DefaultCrippleTime (Characters_BaseShifter_o* __this, const MethodInfo* method);
// 0x3ff3070

float Characters_BaseShifter__get_DefaultCrippleTime
                (Characters_BaseShifter_o *__this,MethodInfo *method)

{
  return 3.5;
}


// Characters.BaseShifter$$get_DisableCooldown
// il2cpp: float Characters_BaseShifter__get_DisableCooldown (Characters_BaseShifter_o* __this, const MethodInfo* method);
// 0x3ff3080

float Characters_BaseShifter__get_DisableCooldown
                (Characters_BaseShifter_o *__this,MethodInfo *method)

{
  return 5.0;
}


// Characters.BaseShifter$$Start
// il2cpp: void Characters_BaseShifter__Start (Characters_BaseShifter_o* __this, const MethodInfo* method);
// 0x3ff3090

void Characters_BaseShifter__Start(Characters_BaseShifter_o *__this,MethodInfo *method)

{
  GameManagers_InGameManager_o *__this_00;
  System_Action_Hashtable__o *pSVar1;
  UnityEngine_Transform_o *__this_01;
  long *plVar2;
  Characters_AnimationHandler_o *__this_02;
  bool_conflict bVar3;
  System_String_o *pSVar4;
  Characters_BaseShifter_o *method_00;
  MethodInfo *method_01;
  UnityEngine_Vector3_o position;
  
  if (DAT_057041bc == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EffectPrefabs);
    il2cpp_init_method_metadata(&TypeInfo_ShifterSounds);
    il2cpp_init_method_metadata(&"");
    DAT_057041bc = '\x01';
  }
  __this_00 = (GameManagers_InGameManager_o *)(__this->fields).Team;
  if (__this_00 != (GameManagers_InGameManager_o *)0x0) {
    method_00 = __this;
    GameManagers_InGameManager__RegisterCharacter
              (__this_00,(Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0);
    Characters_BaseTitan__Start((Characters_BaseTitan_o *)__this,(MethodInfo *)method_00);
    bVar3 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0)
    ;
    if ((char)bVar3 == '\0') {
      return;
    }
    if (*(int *)(TypeInfo_EffectPrefabs + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar1 = (__this->fields).OnPlayerPropertiesChanged;
    if ((pSVar1 != (System_Action_Hashtable__o *)0x0) &&
       (__this_01 = (UnityEngine_Transform_o *)(pSVar1->fields).method_code,
       __this_01 != (UnityEngine_Transform_o *)0x0)) {
      pSVar4 = *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0xa8);
      position = UnityEngine_Transform__get_position(__this_01,(MethodInfo *)0x0);
      if (DAT_056fde1e == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Quaternion);
        DAT_056fde1e = '\x01';
      }
      Effects_EffectSpawner__Spawn
                (pSVar4,position,
                 (UnityEngine_Quaternion_o)**(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8)
                 ,*(float *)((long)&(__this->fields).TitanColliderToggler + 4),1,
                 (System_Object_array *)0x0,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_ShifterSounds + 0xe4) == 0) {
        il2cpp_init_class();
      }
      method_01 = (MethodInfo *)**(undefined8 **)(TypeInfo_ShifterSounds + 0xb8);
      Characters_BaseCharacter__PlaySound
                ((Characters_BaseCharacter_o *)__this,(System_String_o *)method_01,(MethodInfo *)0x0
                );
      Characters_BaseShifter__LoadSkin(__this,method_01);
      (*(__this->klass->vtable)._96_CheckGround.methodPtr)
                (__this,(__this->klass->vtable)._96_CheckGround.method);
      if (*(char *)((long)&(__this->fields).Animation + 4) != '\0') {
        return;
      }
      plVar2 = *(long **)&(__this->fields).TurnPause;
      if (plVar2 != (long *)0x0) {
        pSVar4 = (System_String_o *)
                 (**(code **)(*plVar2 + 0x1b8))(plVar2,*(undefined8 *)(*plVar2 + 0x1c0));
        bVar3 = System_String__op_Inequality(pSVar4,"",(MethodInfo *)0x0);
        if ((char)bVar3 == '\0') {
          return;
        }
        plVar2 = *(long **)&(__this->fields).TurnPause;
        if (plVar2 != (long *)0x0) {
          pSVar4 = (System_String_o *)
                   (**(code **)(*plVar2 + 0x1b8))(plVar2,*(undefined8 *)(*plVar2 + 0x1c0));
          *(undefined1 *)&(__this->fields)._stateTimeLeft = 1;
          __this_02 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
          if (__this_02 != (Characters_AnimationHandler_o *)0x0) {
            Characters_AnimationHandler__SetCullingType(__this_02,1,(MethodInfo *)0x0);
            (*(__this->klass->vtable)._148_Ungrab.methodPtr)
                      (__this,(__this->klass->vtable)._148_Ungrab.method);
            (*(__this->klass->vtable)._163_DeactivateAllHitboxes.methodPtr)
                      (__this,(__this->klass->vtable)._163_DeactivateAllHitboxes.method);
            Characters_BaseCharacter__CrossFade
                      ((Characters_BaseCharacter_o *)__this,pSVar4,0.1,0.0,(MethodInfo *)0x0);
            *(undefined4 *)&(__this->fields).OutlineComponent = 6;
            *(System_String_o **)&(__this->fields)._climbCooldownLeft = pSVar4;
            il2cpp_runtime_glue(&(__this->fields)._climbCooldownLeft,pSVar4);
            (__this->fields)._currentCrippleTime = 0.2;
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseShifter$$Kick
// il2cpp: void Characters_BaseShifter__Kick (Characters_BaseShifter_o* __this, const MethodInfo* method);
// 0x3ff3710

void Characters_BaseShifter__Kick(Characters_BaseShifter_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  
  if (DAT_057041bd == '\0') {
    il2cpp_init_method_metadata(&"AttackKick");
    DAT_057041bd = '\x01';
  }
  vtable_dispatch = (__this->klass->vtable)._128_Attack.methodPtr;
  (*vtable_dispatch)
            (__this,"AttackKick",(__this->klass->vtable)._128_Attack.method,vtable_dispatch);
  return;
}


// Characters.BaseShifter$$MarkTransformingRPC
// il2cpp: void Characters_BaseShifter__MarkTransformingRPC (Characters_BaseShifter_o* __this, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x3ff3760

void Characters_BaseShifter__MarkTransformingRPC
               (Characters_BaseShifter_o *__this,Photon_Pun_PhotonMessageInfo_o info,
               MethodInfo *method)

{
  long lVar1;
  
  lVar1 = *(long *)&(__this->fields).Dead;
  if ((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x20), lVar1 != 0)) {
    if (info.fields.Sender != *(Photon_Realtime_Player_o **)(lVar1 + 0x80)) {
      return;
    }
    *(undefined1 *)((long)&(__this->fields)._previousCoreLocalPosition.fields.y + 2) = 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseShifter$$Init
// il2cpp: void Characters_BaseShifter__Init (Characters_BaseShifter_o* __this, bool ai, System_String_o* team, SimpleJSONFixed_JSONNode_o* data, float liveTime, const MethodInfo* method);
// 0x3ff37a0

void Characters_BaseShifter__Init
               (Characters_BaseShifter_o *__this,bool_conflict ai,System_String_o *team,
               SimpleJSONFixed_JSONNode_o *data,float liveTime,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  Characters_BaseShifter_c *pCVar3;
  UnityEngine_GameObject_o *pUVar4;
  Il2CppObject *pIVar5;
  long *plVar6;
  System_String_o *value;
  undefined8 *puVar7;
  Characters_BaseShifter_o *pCVar8;
  
  if (DAT_057041be == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AnnieShifter);
    il2cpp_init_method_metadata(&TypeInfo_ErenShifter);
    il2cpp_init_method_metadata(&MethodInfo_AnnieShifterPlayerController_AddComponent_AnnieS);
    il2cpp_init_method_metadata(&MethodInfo_BaseTitanAIController_AddComponent_BaseTitanAICo);
    il2cpp_init_method_metadata(&MethodInfo_ErenShifterPlayerController_AddComponent_ErenShi);
    il2cpp_init_method_metadata(&MethodInfo_WallColossalAIController_AddComponent_WallColoss);
    il2cpp_init_method_metadata(&TypeInfo_WallColossalShifter);
    il2cpp_init_method_metadata(&"Name");
    DAT_057041be = '\x01';
  }
  if ((char)ai == '\0') {
    if (__this != (Characters_BaseShifter_o *)0x0) {
      pCVar3 = __this->klass;
      bVar1 = (pCVar3->_2).naturalAligment;
      bVar2 = (TypeInfo_ErenShifter->_2).naturalAligment;
      if ((bVar1 < bVar2) || ((pCVar3->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_ErenShifter)) {
        bVar2 = (TypeInfo_AnnieShifter->_2).naturalAligment;
        if ((bVar1 < bVar2) || ((pCVar3->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_AnnieShifter))
        goto joined_r0x03ff38c9;
        pUVar4 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (pUVar4 == (UnityEngine_GameObject_o *)0x0) goto LAB_03ff3a77;
        puVar7 = &MethodInfo_AnnieShifterPlayerController_AddComponent_AnnieS;
      }
      else {
        pUVar4 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (pUVar4 == (UnityEngine_GameObject_o *)0x0) goto LAB_03ff3a77;
        puVar7 = &MethodInfo_ErenShifterPlayerController_AddComponent_ErenShi;
      }
      UnityEngine_GameObject__AddComponent<object>(pUVar4,(MethodInfo_24F0EB0 *)*puVar7);
    }
joined_r0x03ff38c9:
    if (liveTime <= 0.0) goto LAB_03ff3a00;
    if (DAT_057041bf == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_WaitAndBecomeHuman_d__26);
      DAT_057041bf = '\x01';
    }
    pIVar5 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitAndBecomeHuman_d__26);
    System_Object___ctor(pIVar5,(MethodInfo *)0x0);
    *(undefined4 *)&pIVar5[1].klass = 0;
    if (pIVar5 != (Il2CppObject *)0x0) {
      pIVar5[2].monitor = __this;
      il2cpp_runtime_glue(&pIVar5[2].monitor,__this);
      *(float *)&pIVar5[2].klass = liveTime;
      UnityEngine_MonoBehaviour__StartCoroutine
                ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)pIVar5,
                 (MethodInfo *)0x0);
      goto LAB_03ff3a00;
    }
    goto LAB_03ff3a77;
  }
  if (__this == (Characters_BaseShifter_o *)0x0) {
LAB_03ff385e:
    pCVar8 = (Characters_BaseShifter_o *)0x0;
  }
  else {
    bVar1 = (TypeInfo_WallColossalShifter->_2).naturalAligment;
    if ((__this->klass->_2).naturalAligment < bVar1) goto LAB_03ff385e;
    pCVar8 = (Characters_BaseShifter_o *)0x0;
    if ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_WallColossalShifter) {
      pCVar8 = __this;
    }
  }
  pUVar4 = UnityEngine_Component__get_gameObject
                     ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
    if (pCVar8 == (Characters_BaseShifter_o *)0x0) {
      puVar7 = &MethodInfo_BaseTitanAIController_AddComponent_BaseTitanAICo;
    }
    else {
      puVar7 = &MethodInfo_WallColossalAIController_AddComponent_WallColoss;
    }
    pIVar5 = UnityEngine_GameObject__AddComponent<object>(pUVar4,(MethodInfo_24F0EB0 *)*puVar7);
    if (((pIVar5 != (Il2CppObject *)0x0) &&
        ((*pIVar5->klass->vtable[9].methodPtr)(pIVar5,data,pIVar5->klass->vtable[9].method),
        data != (SimpleJSONFixed_JSONNode_o *)0x0)) &&
       (plVar6 = (long *)(*(data->klass->vtable)._7_get_Item.methodPtr)
                                   (data,"Name",(data->klass->vtable)._7_get_Item.method),
       plVar6 != (long *)0x0)) {
      value = (System_String_o *)
              (**(code **)(*plVar6 + 0x1c8))(plVar6,*(undefined8 *)(*plVar6 + 0x1d0));
      Characters_BaseCharacter__set_Name
                ((Characters_BaseCharacter_o *)__this,value,(MethodInfo *)0x0);
LAB_03ff3a00:
      Characters_BaseTitan__Init((Characters_BaseTitan_o *)__this,ai & 0xff,team,data,method);
      return;
    }
  }
LAB_03ff3a77:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseShifter$$WaitAndBecomeHuman
// il2cpp: System_Collections_IEnumerator_o* Characters_BaseShifter__WaitAndBecomeHuman (Characters_BaseShifter_o* __this, float time, const MethodInfo* method);
// 0x3ff3a80

System_Collections_IEnumerator_o *
Characters_BaseShifter__WaitAndBecomeHuman
          (Characters_BaseShifter_o *__this,float time,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_057041bf == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_WaitAndBecomeHuman_d__26);
    DAT_057041bf = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitAndBecomeHuman_d__26);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].monitor = __this;
    il2cpp_runtime_glue(&__this_00[2].monitor,__this);
    *(float *)&__this_00[2].klass = time;
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseShifter$$WaitAndDie
// il2cpp: System_Collections_IEnumerator_o* Characters_BaseShifter__WaitAndDie (Characters_BaseShifter_o* __this, const MethodInfo* method);
// 0x3ff4440

System_Collections_IEnumerator_o *
Characters_BaseShifter__WaitAndDie(Characters_BaseShifter_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_057041c0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_WaitAndDie_d__27);
    DAT_057041c0 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitAndDie_d__27);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_glue(__this_00 + 2,__this);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseShifter$$Awake
// il2cpp: void Characters_BaseShifter__Awake (Characters_BaseShifter_o* __this, const MethodInfo* method);
// 0x3ff44d0

void Characters_BaseShifter__Awake(Characters_BaseShifter_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__float__o *pSVar1;
  
  Characters_BaseTitan__Awake((Characters_BaseTitan_o *)__this,method);
  pSVar1 = (System_Collections_Generic_Dictionary_string__float__o *)
           (*(__this->klass->vtable)._178_CreateCustomSkinLoader.methodPtr)
                     (__this,(__this->klass->vtable)._178_CreateCustomSkinLoader.method);
  (__this->fields)._rootMotionAnimations = pSVar1;
  il2cpp_runtime_glue(&(__this->fields)._rootMotionAnimations,pSVar1);
  return;
}


// Characters.BaseShifter$$GetHitRPC
// il2cpp: void Characters_BaseShifter__GetHitRPC (Characters_BaseShifter_o* __this, int32_t viewId, System_String_o* name, int32_t damage, System_String_o* type, System_String_o* collider, const MethodInfo* method);
// 0x3ff4640

void Characters_BaseShifter__GetHitRPC
               (Characters_BaseShifter_o *__this,int32_t viewId,System_String_o *name,int32_t damage
               ,System_String_o *type,System_String_o *collider,MethodInfo *method)

{
  long lVar1;
  UnityEngine_Transform_o *pUVar2;
  System_Action_Hashtable__o *pSVar3;
  UnityEngine_Object_o *pUVar4;
  System_DelegateData_o *__this_00;
  undefined1 auVar5 [16];
  bool_conflict bVar6;
  Characters_BaseCharacter_o *x;
  System_String_o *pSVar7;
  float fVar8;
  undefined1 extraout_var [12];
  undefined1 auVar9 [16];
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  UnityEngine_Vector3_o UVar13;
  UnityEngine_Vector3_o UVar14;
  float local_58;
  
  if (DAT_057041c1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    il2cpp_init_method_metadata(&"Rock");
    il2cpp_init_method_metadata(&"TitanStun");
    il2cpp_init_method_metadata(&"CannonBall");
    il2cpp_init_method_metadata(&"ShifterStun");
    DAT_057041c1 = '\x01';
  }
  if (*(char *)&(__this->fields).FeedVictimName != '\0') {
    return;
  }
  bVar6 = System_String__op_Equality(type,"CannonBall",(MethodInfo *)0x0);
  if (((char)bVar6 != '\0') ||
     (bVar6 = System_String__op_Equality(type,"Rock",(MethodInfo *)0x0), (char)bVar6 != '\0'))
  goto LAB_03ff472d;
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
  if ((lVar1 == 0) ||
     ((lVar1 = *(long *)(lVar1 + 0x50), lVar1 == 0 || (*(long *)(lVar1 + 0x88) == 0))))
  goto LAB_03ff4bf7;
  if (*(char *)(*(long *)(lVar1 + 0x88) + 0x11) != '\0') {
    if (*(long *)(lVar1 + 0x98) == 0) goto LAB_03ff4bf7;
    if (damage < *(int *)(*(long *)(lVar1 + 0x98) + 0x14)) {
      damage = 0;
    }
  }
  bVar6 = System_String__op_Equality(type,"TitanStun",(MethodInfo *)0x0);
  if (((char)bVar6 == '\0') &&
     (bVar6 = System_String__op_Equality(type,"ShifterStun",(MethodInfo *)0x0), (char)bVar6 == '\0'))
  {
    pSVar3 = (__this->fields).OnPlayerPropertiesChanged;
    if (pSVar3 != (System_Action_Hashtable__o *)0x0) {
      pUVar4 = (UnityEngine_Object_o *)pSVar3[1].fields.method_code;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar6 = UnityEngine_Object__op_Inequality
                        (pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar6 != '\0') {
        pSVar3 = (__this->fields).OnPlayerPropertiesChanged;
        if ((pSVar3 == (System_Action_Hashtable__o *)0x0) ||
           (pUVar4 = (UnityEngine_Object_o *)pSVar3[1].fields.method_code,
           pUVar4 == (UnityEngine_Object_o *)0x0)) goto LAB_03ff4bf7;
        pSVar7 = UnityEngine_Object__get_name(pUVar4,(MethodInfo *)0x0);
        bVar6 = System_String__op_Equality(collider,pSVar7,(MethodInfo *)0x0);
        if ((char)bVar6 != '\0') {
          (*(__this->klass->vtable)._144_Blind.methodPtr)
                    (__this,(__this->klass->vtable)._144_Blind.method);
          return;
        }
      }
      pSVar3 = (__this->fields).OnPlayerPropertiesChanged;
      if (pSVar3 != (System_Action_Hashtable__o *)0x0) {
        pUVar4 = (UnityEngine_Object_o *)pSVar3[1].fields.interp_method;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar6 = UnityEngine_Object__op_Inequality
                          (pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar6 != '\0') {
          pSVar3 = (__this->fields).OnPlayerPropertiesChanged;
          if ((pSVar3 == (System_Action_Hashtable__o *)0x0) ||
             (pUVar4 = (UnityEngine_Object_o *)pSVar3[1].fields.interp_method,
             pUVar4 == (UnityEngine_Object_o *)0x0)) goto LAB_03ff4bf7;
          pSVar7 = UnityEngine_Object__get_name(pUVar4,(MethodInfo *)0x0);
          bVar6 = System_String__op_Equality(collider,pSVar7,(MethodInfo *)0x0);
          if ((char)bVar6 != '\0') {
LAB_03ff4ada:
            (*(__this->klass->vtable)._145_Cripple.methodPtr)
                      (__this,(__this->klass->vtable)._145_Cripple.method);
            return;
          }
          pSVar3 = (__this->fields).OnPlayerPropertiesChanged;
          if ((pSVar3 == (System_Action_Hashtable__o *)0x0) ||
             (pUVar4 = (UnityEngine_Object_o *)pSVar3[1].fields.interp_invoke_impl,
             pUVar4 == (UnityEngine_Object_o *)0x0)) goto LAB_03ff4bf7;
          pSVar7 = UnityEngine_Object__get_name(pUVar4,(MethodInfo *)0x0);
          bVar6 = System_String__op_Equality(collider,pSVar7,(MethodInfo *)0x0);
          if ((char)bVar6 != '\0') goto LAB_03ff4ada;
        }
        pSVar3 = (__this->fields).OnPlayerPropertiesChanged;
        if ((pSVar3 != (System_Action_Hashtable__o *)0x0) &&
           (__this_00 = (pSVar3->fields).data, __this_00 != (System_DelegateData_o *)0x0)) {
          pSVar7 = UnityEngine_Object__get_name((UnityEngine_Object_o *)__this_00,(MethodInfo *)0x0)
          ;
          bVar6 = System_String__op_Equality(collider,pSVar7,(MethodInfo *)0x0);
          if ((char)bVar6 == '\0') {
            return;
          }
          goto LAB_03ff472d;
        }
      }
    }
    goto LAB_03ff4bf7;
  }
  (*(__this->klass->vtable)._132_Stun.methodPtr)(__this);
  if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
    il2cpp_init_class();
  }
  x = Utility_Util__FindCharacterByViewId(viewId,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar6 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (((char)bVar6 == '\0') ||
     (*(char *)&(__this->fields)._previousCoreLocalPosition.fields.y == '\0')) goto LAB_03ff472d;
  if ((x == (Characters_BaseCharacter_o *)0x0) ||
     ((lVar1 = *(long *)&(x->fields).Dead, lVar1 == 0 ||
      (pUVar2 = *(UnityEngine_Transform_o **)(lVar1 + 0x10),
      pUVar2 == (UnityEngine_Transform_o *)0x0)))) goto LAB_03ff4bf7;
  UVar13 = UnityEngine_Transform__get_position(pUVar2,(MethodInfo *)0x0);
  lVar1 = *(long *)&(__this->fields).Dead;
  if ((lVar1 == 0) ||
     (pUVar2 = *(UnityEngine_Transform_o **)(lVar1 + 0x10), pUVar2 == (UnityEngine_Transform_o *)0x0
     )) goto LAB_03ff4bf7;
  UVar14 = UnityEngine_Transform__get_position(pUVar2,(MethodInfo *)0x0);
  lVar1 = *(long *)&(__this->fields).Dead;
  if (lVar1 == 0) goto LAB_03ff4bf7;
  pUVar2 = *(UnityEngine_Transform_o **)(lVar1 + 0x10);
  local_58 = UVar13.fields.x;
  if (DAT_056fde20 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056fde20 = '\x01';
  }
  local_58 = local_58 - UVar14.fields.x;
  fVar10 = UVar13.fields.z - UVar14.fields.z;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_init_class();
  }
  fVar8 = fVar10 * fVar10 + local_58 * local_58 + 0.0;
  if (fVar8 < 0.0) {
    fVar8 = sqrtf(fVar8);
    uVar11 = extraout_var._4_4_;
    uVar12 = extraout_var._8_4_;
    if (fVar8 <= 1e-05) goto LAB_03ff4b90;
LAB_03ff4b77:
    fVar10 = fVar10 / fVar8;
    auVar5._4_4_ = fVar8;
    auVar5._0_4_ = fVar8;
    auVar5._8_4_ = uVar11;
    auVar5._12_4_ = uVar12;
    auVar9 = divps(ZEXT416((uint)local_58),auVar5);
  }
  else {
    uVar11 = 0;
    uVar12 = 0;
    fVar8 = SQRT(fVar8);
    if (1e-05 < fVar8) goto LAB_03ff4b77;
LAB_03ff4b90:
    if (DAT_056fdd15 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fdd15 = '\x01';
    }
    auVar9._8_8_ = 0;
    auVar9._0_8_ = **(ulong **)(TypeInfo_Vector3 + 0xb8);
    fVar10 = *(float *)(*(ulong **)(TypeInfo_Vector3 + 0xb8) + 1);
  }
  if (pUVar2 == (UnityEngine_Transform_o *)0x0) {
LAB_03ff4bf7:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  UVar13.fields._0_8_ = auVar9._0_8_;
  UVar13.fields.z = fVar10;
  UnityEngine_Transform__set_forward(pUVar2,UVar13,(MethodInfo *)0x0);
LAB_03ff472d:
  Characters_BaseCharacter__GetHitRPC
            ((Characters_BaseCharacter_o *)__this,viewId,name,damage,type,collider,(MethodInfo *)0x0
            );
  return;
}


// Characters.BaseShifter$$OnHit
// il2cpp: void Characters_BaseShifter__OnHit (Characters_BaseShifter_o* __this, Characters_BaseHitbox_o* hitbox, Il2CppObject* victim, UnityEngine_Collider_o* collider, System_String_o* type, bool firstHit, const MethodInfo* method);
// 0x3ff4c00

void Characters_BaseShifter__OnHit
               (Characters_BaseShifter_o *__this,Characters_BaseHitbox_o *hitbox,
               Il2CppObject *victim,UnityEngine_Collider_o *collider,System_String_o *type,
               bool_conflict firstHit,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  Il2CppClass *pIVar3;
  Il2CppClass **ppIVar4;
  bool_conflict bVar5;
  System_String_o *pSVar6;
  UnityEngine_Transform_o *pUVar7;
  undefined8 uVar8;
  uint damage;
  UI_InGameMenu_o *pUVar9;
  MethodInfo *pMVar10;
  Il2CppMethodPointer vtable_dispatch;
  UnityEngine_Vector3_o UVar11;
  
  if (DAT_057041c2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BaseCharacter);
    il2cpp_init_method_metadata(&TypeInfo_BaseTitan);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicCollisionHandler);
    il2cpp_init_method_metadata(&TypeInfo_EffectPrefabs);
    il2cpp_init_method_metadata(&TypeInfo_InGameMenu);
    il2cpp_init_method_metadata(&TypeInfo_TitanSounds);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"Shifter");
    il2cpp_init_method_metadata(&"ShifterStun");
    DAT_057041c2 = '\x01';
  }
  if (*(char *)((long)&(__this->fields).FeedVictimName + 1) == '\0') {
    damage = 100;
  }
  else {
    damage = *(uint *)((long)&(__this->fields).FeedVictimName + 4);
  }
  if (victim != (Il2CppObject *)0x0) {
    pIVar3 = victim->klass;
    bVar2 = (pIVar3->_2).naturalAligment;
    bVar1 = (TypeInfo_CustomLogicCollisionHandler->_2).naturalAligment;
    pUVar9 = (UI_InGameMenu_o *)victim;
    if ((bVar1 <= bVar2) && ((pIVar3->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CustomLogicCollisionHandler)) {
      if (hitbox != (Characters_BaseHitbox_o *)0x0) {
        pSVar6 = *(System_String_o **)&(__this->fields)._disableKinematicTimeLeft;
        pUVar7 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)hitbox,(MethodInfo *)0x0);
        if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
          UVar11 = UnityEngine_Transform__get_position(pUVar7,(MethodInfo *)0x0);
          bVar2 = (TypeInfo_CustomLogicCollisionHandler->_2).naturalAligment;
          if ((bVar2 <= (victim->klass->_2).naturalAligment) &&
             ((victim->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_CustomLogicCollisionHandler)) {
            CustomLogic_CustomLogicCollisionHandler__GetHit
                      ((CustomLogic_CustomLogicCollisionHandler_o *)victim,
                       (Characters_BaseCharacter_o *)__this,pSVar6,damage,type,UVar11,
                       (MethodInfo *)0x0);
            return;
          }
          goto LAB_03ff507a;
        }
      }
      goto LAB_03ff507f;
    }
    bVar1 = (TypeInfo_BaseCharacter->_2).naturalAligment;
    if ((bVar2 < bVar1) ||
       (ppIVar4 = (pIVar3->_2).typeHierarchy, ppIVar4[(ulong)bVar1 - 1] != TypeInfo_BaseCharacter))
    goto LAB_03ff507a;
    bVar1 = (TypeInfo_BaseTitan->_2).naturalAligment;
    if ((bVar1 <= bVar2) && (ppIVar4[(ulong)bVar1 - 1] == TypeInfo_BaseTitan)) {
      if ((*(char *)&victim[7].monitor == '\0') && (*(int *)((long)&victim[7].monitor + 4) == 10)) {
        damage = 2;
      }
      if ((char)firstHit == '\0') {
        return;
      }
      if (*(int *)(TypeInfo_EffectPrefabs + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (hitbox != (Characters_BaseHitbox_o *)0x0) {
        pSVar6 = *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x28);
        pUVar7 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)hitbox,(MethodInfo *)0x0);
        if (pUVar7 == (UnityEngine_Transform_o *)0x0) goto LAB_03ff507f;
        UVar11 = UnityEngine_Transform__get_position(pUVar7,(MethodInfo *)0x0);
        if (DAT_056fde1e == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Quaternion);
          DAT_056fde1e = '\x01';
        }
        Effects_EffectSpawner__Spawn
                  (pSVar6,UVar11,
                   (UnityEngine_Quaternion_o)
                   **(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8),1.0,1,
                   (System_Object_array *)0x0,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_TitanSounds + 0xe4) == 0) {
          il2cpp_init_class();
        }
        Characters_BaseCharacter__PlaySound
                  ((Characters_BaseCharacter_o *)__this,
                   *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0xc0),(MethodInfo *)0x0);
        if (*(char *)&victim[6].monitor != '\0') {
          return;
        }
        bVar5 = Characters_BaseCharacter__IsMainCharacter
                          ((Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0);
        if ((char)bVar5 != '\0') {
          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pUVar9 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
          if (pUVar9 == (UI_InGameMenu_o *)0x0) goto LAB_03ff507f;
          bVar2 = (TypeInfo_InGameMenu->_2).naturalAligment;
          if (((pUVar9->klass->_2).naturalAligment < bVar2) ||
             ((pUVar9->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_InGameMenu))
          goto LAB_03ff507a;
          UI_InGameMenu__ShowKillScore(pUVar9,damage,0,(MethodInfo *)0x0);
        }
        if (collider == (UnityEngine_Collider_o *)0x0) goto LAB_03ff507f;
        pSVar6 = UnityEngine_Object__get_name((UnityEngine_Object_o *)collider,(MethodInfo *)0x0);
        vtable_dispatch = victim->klass->vtable[0x54].methodPtr;
        pMVar10 = victim->klass->vtable[0x54].method;
        uVar8 = "ShifterStun";
        goto LAB_03ff4e1d;
      }
      goto LAB_03ff507f;
    }
  }
  if ((char)firstHit == '\0') {
    return;
  }
  if (victim != (Il2CppObject *)0x0) {
    if (*(char *)&victim[6].monitor != '\0') {
      return;
    }
    bVar5 = Characters_BaseCharacter__IsMainCharacter
                      ((Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pUVar9 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
      if (pUVar9 == (UI_InGameMenu_o *)0x0) goto LAB_03ff507f;
      bVar2 = (TypeInfo_InGameMenu->_2).naturalAligment;
      if (((pUVar9->klass->_2).naturalAligment < bVar2) ||
         ((pUVar9->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_InGameMenu)) {
LAB_03ff507a:
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(pUVar9);
      }
      UI_InGameMenu__ShowKillScore(pUVar9,damage,0,(MethodInfo *)0x0);
    }
    if (collider != (UnityEngine_Collider_o *)0x0) {
      pSVar6 = UnityEngine_Object__get_name((UnityEngine_Object_o *)collider,(MethodInfo *)0x0);
      vtable_dispatch = victim->klass->vtable[0x54].methodPtr;
      pMVar10 = victim->klass->vtable[0x54].method;
      uVar8 = "Shifter";
LAB_03ff4e1d:
      (*vtable_dispatch)(victim,__this,(ulong)damage,uVar8,pSVar6,pMVar10);
      return;
    }
  }
LAB_03ff507f:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseShifter$$Update
// il2cpp: void Characters_BaseShifter__Update (Characters_BaseShifter_o* __this, const MethodInfo* method);
// 0x3ff5090

void Characters_BaseShifter__Update(Characters_BaseShifter_o *__this,MethodInfo *method)

{
  char cVar1;
  bool_conflict bVar2;
  
  if (DAT_057041c3 == '\0') {
    il2cpp_init_method_metadata(&"Roar");
    DAT_057041c3 = '\x01';
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
// 0x3ff5f80

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
  
  if (DAT_057041c4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EffectPrefabs);
    il2cpp_init_method_metadata(&"Roar");
    DAT_057041c4 = '\x01';
  }
  if (*(char *)((long)&(__this->fields)._previousCoreLocalPosition.fields.y + 1) == '\0') {
    plVar5 = *(long **)&(__this->fields).TurnPause;
    if (plVar5 == (long *)0x0) goto LAB_03ff61fd;
    pSVar7 = (System_String_o *)
             (**(code **)(*plVar5 + 0x1d8))(plVar5,*(undefined8 *)(*plVar5 + 0x1e0));
    pCVar6 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
    if (pCVar6 == (Characters_AnimationHandler_o *)0x0) goto LAB_03ff61fd;
    fVar9 = Characters_AnimationHandler__GetLength(pCVar6,pSVar7,(MethodInfo *)0x0);
    *(undefined1 *)&(__this->fields)._stateTimeLeft = 1;
    pCVar6 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
    if (pCVar6 == (Characters_AnimationHandler_o *)0x0) goto LAB_03ff61fd;
    Characters_AnimationHandler__SetCullingType(pCVar6,0,(MethodInfo *)0x0);
    (*(__this->klass->vtable)._148_Ungrab.methodPtr)
              (__this,(__this->klass->vtable)._148_Ungrab.method);
    (*(__this->klass->vtable)._163_DeactivateAllHitboxes.methodPtr)
              (__this,(__this->klass->vtable)._163_DeactivateAllHitboxes.method);
    Characters_BaseCharacter__CrossFade
              ((Characters_BaseCharacter_o *)__this,pSVar7,0.1,0.0,(MethodInfo *)0x0);
    *(undefined4 *)&(__this->fields).OutlineComponent = 9;
    *(System_String_o **)&(__this->fields)._climbCooldownLeft = pSVar7;
    il2cpp_runtime_glue(&(__this->fields)._climbCooldownLeft);
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
    il2cpp_init_class();
  }
  lVar4 = *(long *)&(__this->fields).Dead;
  if ((lVar4 != 0) &&
     (__this_00 = *(UnityEngine_Transform_o **)(lVar4 + 0x10),
     __this_00 != (UnityEngine_Transform_o *)0x0)) {
    pSVar7 = *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x60);
    UVar10 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
    if (DAT_0570266b == '\0') {
      il2cpp_init_method_metadata();
      DAT_0570266b = '\x01';
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
              (pSVar7,position,rotation,fVar1 * fVar8,1,(System_Object_array *)0x0,(MethodInfo *)0x0
              );
    return;
  }
LAB_03ff61fd:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseShifter$$LoadSkin
// il2cpp: void Characters_BaseShifter__LoadSkin (Characters_BaseShifter_o* __this, const MethodInfo* method);
// 0x3ff3450

void Characters_BaseShifter__LoadSkin(Characters_BaseShifter_o *__this,MethodInfo *method)

{
  byte bVar1;
  Settings_SetSettingsContainer_T__o *__this_00;
  Photon_Pun_PhotonView_o *__this_01;
  bool_conflict bVar2;
  Settings_BaseSetSetting_o *pSVar3;
  Il2CppObject *pIVar4;
  System_Object_array *parameters;
  long lVar5;
  undefined8 uVar6;
  
  if (DAT_057041c5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&MethodInfo_BaseSetSetting_GetSelectedSet);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&TypeInfo_ShifterCustomSkinSet);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    il2cpp_init_method_metadata(&"LoadSkinRPC");
    DAT_057041c5 = '\x01';
  }
  bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    return;
  }
  lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
  if (((lVar5 != 0) &&
      (__this_00 = *(Settings_SetSettingsContainer_T__o **)(lVar5 + 0x30),
      __this_00 != (Settings_SetSettingsContainer_T__o *)0x0)) &&
     (__this_00[1].monitor != (void *)0x0)) {
    if (*(char *)((long)__this_00[1].monitor + 0x11) == '\0') {
      return;
    }
    pSVar3 = Settings_SetSettingsContainer<object>__GetSelectedSet(__this_00,MethodInfo_BaseSetSetting_GetSelectedSet);
    if (pSVar3 != (Settings_BaseSetSetting_o *)0x0) {
      bVar1 = (TypeInfo_ShifterCustomSkinSet->_2).naturalAligment;
      if (((pSVar3->klass->_2).naturalAligment < bVar1) ||
         ((pSVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_ShifterCustomSkinSet)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(pSVar3);
      }
    }
    pIVar4 = (Il2CppObject *)
             (*(__this->klass->vtable)._177_GetSkinURL.methodPtr)
                       (__this,pSVar3,(__this->klass->vtable)._177_GetSkinURL.method);
    lVar5 = *(long *)&(__this->fields).Dead;
    if (lVar5 != 0) {
      __this_01 = *(Photon_Pun_PhotonView_o **)(lVar5 + 0x20);
      parameters = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,1);
      if (parameters != (System_Object_array *)0x0) {
        if ((pIVar4 != (Il2CppObject *)0x0) &&
           (lVar5 = il2cpp_runtime_glue(pIVar4,(((parameters->obj).klass)->_1).element_class),
           lVar5 == 0)) {
          uVar6 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
          il2cpp_glue_02274a00(uVar6,0);
        }
        if ((int)parameters->max_length == 0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        parameters->m_Items[0] = pIVar4;
        il2cpp_runtime_glue(parameters->m_Items,pIVar4);
        if (__this_01 != (Photon_Pun_PhotonView_o *)0x0) {
          Photon_Pun_PhotonView__RPC(__this_01,"LoadSkinRPC",3,parameters,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseShifter$$GetSkinURL
// il2cpp: System_String_o* Characters_BaseShifter__GetSkinURL (Characters_BaseShifter_o* __this, Settings_ShifterCustomSkinSet_o* set, const MethodInfo* method);
// 0x3ff6210

System_String_o *
Characters_BaseShifter__GetSkinURL
          (Characters_BaseShifter_o *__this,Settings_ShifterCustomSkinSet_o *set,MethodInfo *method)

{
  if (DAT_057041c6 == '\0') {
    il2cpp_init_method_metadata(&"");
    DAT_057041c6 = '\x01';
  }
  return "";
}


// Characters.BaseShifter$$CreateCustomSkinLoader
// il2cpp: CustomSkins_BaseCustomSkinLoader_o* Characters_BaseShifter__CreateCustomSkinLoader (Characters_BaseShifter_o* __this, const MethodInfo* method);
// 0x3ff6240

CustomSkins_BaseCustomSkinLoader_o *
Characters_BaseShifter__CreateCustomSkinLoader(Characters_BaseShifter_o *__this,MethodInfo *method)

{
  return (CustomSkins_BaseCustomSkinLoader_o *)0x0;
}


// Characters.BaseShifter$$LoadSkinRPC
// il2cpp: void Characters_BaseShifter__LoadSkinRPC (Characters_BaseShifter_o* __this, System_String_o* url, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x3ff6250

void Characters_BaseShifter__LoadSkinRPC
               (Characters_BaseShifter_o *__this,System_String_o *url,
               Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__float__o *pSVar1;
  bool_conflict bVar2;
  long *plVar3;
  long lVar4;
  System_Collections_IEnumerator_o *routine;
  undefined8 uVar5;
  
  if (DAT_057041c7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    DAT_057041c7 = '\x01';
  }
  lVar4 = *(long *)&(__this->fields).Dead;
  if ((lVar4 == 0) || (lVar4 = *(long *)(lVar4 + 0x20), lVar4 == 0)) goto LAB_03ff640f;
  if (info.fields.Sender == *(Photon_Realtime_Player_o **)(lVar4 + 0x80)) {
    pSVar1 = (__this->fields)._rootMotionAnimations;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pSVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 == '\0') {
      lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
      if (((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x30), lVar4 != 0)) &&
         (*(long *)(lVar4 + 0x38) != 0)) {
        if (*(char *)(*(long *)(lVar4 + 0x38) + 0x11) == '\0') {
          return;
        }
        if (*(long *)(lVar4 + 0x30) != 0) {
          if (*(char *)(*(long *)(lVar4 + 0x30) + 0x11) != '\0') {
            lVar4 = *(long *)&(__this->fields).Dead;
            if ((lVar4 == 0) || (lVar4 = *(long *)(lVar4 + 0x20), lVar4 == 0)) goto LAB_03ff640f;
            if (*(char *)(lVar4 + 0x68) == '\0') {
              return;
            }
          }
          pSVar1 = (__this->fields)._rootMotionAnimations;
          plVar3 = (long *)il2cpp_glue_02274930(TypeInfo_object,1);
          if (plVar3 != (long *)0x0) {
            if ((url != (System_String_o *)0x0) &&
               (lVar4 = il2cpp_runtime_glue(url,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0)) {
              uVar5 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
              il2cpp_glue_02274a00(uVar5,0);
            }
            if ((int)plVar3[3] == 0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            plVar3[4] = (long)url;
            il2cpp_runtime_glue(plVar3 + 4,url);
            if (pSVar1 != (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
              routine = (System_Collections_IEnumerator_o *)
                        (*(pSVar1->klass->vtable).
                          _6_System_Collections_Generic_IDictionary_TKey_TValue__get_Keys.methodPtr)
                                  (pSVar1,plVar3,
                                   (pSVar1->klass->vtable).
                                   _6_System_Collections_Generic_IDictionary_TKey_TValue__get_Keys.
                                   method);
              UnityEngine_MonoBehaviour__StartCoroutine
                        ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
LAB_03ff640f:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  return;
}


// Characters.BaseShifter$$.ctor
// il2cpp: void Characters_BaseShifter___ctor (Characters_BaseShifter_o* __this, const MethodInfo* method);
// 0x3ff2700

void Characters_BaseShifter___ctor(Characters_BaseShifter_o *__this,MethodInfo *method)

{
  *(undefined1 *)((long)&(__this->fields)._previousCoreLocalPosition.fields.y + 1) = 1;
  (__this->fields)._furthestCoreLocalPosition.fields.z = 2.0;
  Characters_BaseTitan___ctor((Characters_BaseTitan_o *)__this,method);
  return;
}


