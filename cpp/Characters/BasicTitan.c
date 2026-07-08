// Type: Characters.BasicTitan
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Characters/BasicTitan.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Characters/Titan/BasicTitan.cs  [CHANGED since prior version]
// --------------------------------

// Characters.BasicTitan.<WaitAndDie>d__60$$.ctor
// il2cpp: void Characters_BasicTitan__WaitAndDie_d__60___ctor (Characters_BasicTitan__WaitAndDie_d__60_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x400a100

void Characters_BasicTitan_<WaitAndDie>d__60___ctor
               (Characters_BasicTitan__WaitAndDie_d__60_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Characters.BasicTitan.<WaitAndDie>d__60$$System.IDisposable.Dispose
// il2cpp: void Characters_BasicTitan__WaitAndDie_d__60__System_IDisposable_Dispose (Characters_BasicTitan__WaitAndDie_d__60_o* __this, const MethodInfo* method);
// 0x4011030

void Characters_BasicTitan_<WaitAndDie>d__60__System_IDisposable_Dispose
               (Characters_BasicTitan__WaitAndDie_d__60_o *__this,MethodInfo *method)

{
  return;
}


// Characters.BasicTitan.<WaitAndDie>d__60$$MoveNext
// il2cpp: bool Characters_BasicTitan__WaitAndDie_d__60__MoveNext (Characters_BasicTitan__WaitAndDie_d__60_o* __this, const MethodInfo* method);
// 0x4011040

bool_conflict
Characters_BasicTitan_<WaitAndDie>d__60__MoveNext
          (Characters_BasicTitan__WaitAndDie_d__60_o *__this,MethodInfo *method)

{
  System_String_o **ppSVar1;
  uint uVar2;
  int iVar3;
  Characters_BasicTitan_o *__this_00;
  System_Action_Hashtable__o *pSVar4;
  UnityEngine_Transform_o *pUVar5;
  long *plVar6;
  bool_conflict bVar7;
  UnityEngine_GameObject_o *targetGo;
  UnityEngine_WaitForSeconds_o *__this_01;
  System_String_o *pSVar8;
  System_String_o *pSVar9;
  long lVar10;
  float fVar11;
  UnityEngine_Vector3_o UVar12;
  UnityEngine_Quaternion_o UVar13;
  
  if (DAT_0570426a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EffectPrefabs);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_TitanSounds);
    il2cpp_init_method_metadata(&TypeInfo_WaitForSeconds);
    DAT_0570426a = '\x01';
  }
  uVar2 = (__this->fields).__1__state;
  if (4 < uVar2) {
    return 0;
  }
  __this_00 = (__this->fields).__4__this;
  switch(uVar2) {
  case 0:
    (__this->fields).__1__state = -1;
    if ((__this_00 == (Characters_BasicTitan_o *)0x0) ||
       (lVar10 = *(long *)&(__this_00->fields)._furthestCoreLocalPosition.fields.z, lVar10 == 0))
    goto LAB_0401160d;
    ppSVar1 = &(__this->fields)._dieAnimation_5__2;
    (__this->fields)._dieAnimation_5__2 = *(System_String_o **)(lVar10 + 0x58);
    il2cpp_runtime_glue(ppSVar1);
    if (*(int *)&(__this_00->fields).OutlineComponent == 0xd) {
      lVar10 = *(long *)&(__this_00->fields)._furthestCoreLocalPosition.fields.z;
      if (lVar10 == 0) goto LAB_0401160d;
      *ppSVar1 = *(System_String_o **)(lVar10 + 0x50);
      il2cpp_runtime_glue(ppSVar1);
    }
    if (*(char *)&(__this_00->fields)._rootMotionAnimations == '\0') {
      lVar10 = *(long *)&(__this_00->fields)._furthestCoreLocalPosition.fields.z;
      if (lVar10 == 0) goto LAB_0401160d;
      bVar7 = System_String__op_Equality
                        (*(System_String_o **)&(__this_00->fields)._climbCooldownLeft,
                         *(System_String_o **)(lVar10 + 0x88),(MethodInfo *)0x0);
      if ((char)bVar7 != '\0') {
LAB_0401148b:
        lVar10 = *(long *)&(__this_00->fields)._furthestCoreLocalPosition.fields.z;
        if (lVar10 == 0) {
LAB_0401160d:
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pSVar9 = *(System_String_o **)(lVar10 + 0x60);
        goto LAB_04011590;
      }
      lVar10 = *(long *)&(__this_00->fields)._furthestCoreLocalPosition.fields.z;
      if (lVar10 == 0) goto LAB_0401160d;
      bVar7 = System_String__op_Equality
                        (*(System_String_o **)&(__this_00->fields)._climbCooldownLeft,
                         *(System_String_o **)(lVar10 + 0x90),(MethodInfo *)0x0);
      if ((char)bVar7 != '\0') goto LAB_0401148b;
      plVar6 = *(long **)&(__this_00->fields)._furthestCoreLocalPosition.fields.z;
      if (plVar6 == (long *)0x0) goto LAB_0401160d;
      pSVar9 = *(System_String_o **)&(__this_00->fields)._climbCooldownLeft;
      pSVar8 = (System_String_o *)
               (**(code **)(*plVar6 + 0x248))(plVar6,*(undefined8 *)(*plVar6 + 0x250));
      bVar7 = System_String__op_Equality(pSVar9,pSVar8,(MethodInfo *)0x0);
      if ((char)bVar7 != '\0') {
LAB_0401156d:
        plVar6 = *(long **)&(__this_00->fields)._furthestCoreLocalPosition.fields.z;
        if (plVar6 == (long *)0x0) goto LAB_0401160d;
        pSVar9 = (System_String_o *)
                 (**(code **)(*plVar6 + 0x208))(plVar6,*(undefined8 *)(*plVar6 + 0x210));
        goto LAB_04011590;
      }
      plVar6 = *(long **)&(__this_00->fields)._furthestCoreLocalPosition.fields.z;
      if (plVar6 == (long *)0x0) goto LAB_0401160d;
      pSVar9 = *(System_String_o **)&(__this_00->fields)._climbCooldownLeft;
      pSVar8 = (System_String_o *)
               (**(code **)(*plVar6 + 0x218))(plVar6,*(undefined8 *)(*plVar6 + 0x220));
      bVar7 = System_String__op_Equality(pSVar9,pSVar8,(MethodInfo *)0x0);
      if ((char)bVar7 != '\0') goto LAB_0401156d;
      plVar6 = *(long **)&(__this_00->fields)._furthestCoreLocalPosition.fields.z;
      if (plVar6 == (long *)0x0) goto LAB_0401160d;
      pSVar9 = *(System_String_o **)&(__this_00->fields)._climbCooldownLeft;
      pSVar8 = (System_String_o *)
               (**(code **)(*plVar6 + 600))(plVar6,*(undefined8 *)(*plVar6 + 0x260));
      bVar7 = System_String__op_Equality(pSVar9,pSVar8,(MethodInfo *)0x0);
      if ((char)bVar7 != '\0') goto LAB_0401156d;
    }
    else {
      lVar10 = *(long *)&(__this_00->fields)._furthestCoreLocalPosition.fields.z;
      if (lVar10 == 0) goto LAB_0401160d;
      pSVar9 = *(System_String_o **)(lVar10 + 0x68);
LAB_04011590:
      *ppSVar1 = pSVar9;
      il2cpp_runtime_glue(ppSVar1);
    }
    Characters_BaseTitan__StateActionWithTime
              ((Characters_BaseTitan_o *)__this_00,0xf,(__this->fields)._dieAnimation_5__2,0.0,0.05,
               1,(MethodInfo *)0x0);
    __this_01 = (UnityEngine_WaitForSeconds_o *)il2cpp_runtime_glue(TypeInfo_WaitForSeconds);
    UnityEngine_WaitForSeconds___ctor(__this_01,1.4,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)__this_01;
    il2cpp_runtime_glue(&(__this->fields).__2__current,__this_01);
    (__this->fields).__1__state = 1;
    break;
  case 1:
    (__this->fields).__1__state = -1;
    if ((__this_00 == (Characters_BasicTitan_o *)0x0) ||
       (lVar10 = *(long *)&(__this_00->fields)._furthestCoreLocalPosition.fields.z, lVar10 == 0))
    goto LAB_0401160d;
    bVar7 = System_String__op_Equality
                      ((__this->fields)._dieAnimation_5__2,*(System_String_o **)(lVar10 + 0x60),
                       (MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      lVar10 = *(long *)&(__this_00->fields)._furthestCoreLocalPosition.fields.z;
      if (lVar10 == 0) goto LAB_0401160d;
      bVar7 = System_String__op_Equality
                        ((__this->fields)._dieAnimation_5__2,*(System_String_o **)(lVar10 + 0x68),
                         (MethodInfo *)0x0);
      if ((char)bVar7 != '\0') goto LAB_04011373;
      lVar10 = 0xd8;
      iVar3 = *(int *)(TypeInfo_TitanSounds + 0xe4);
    }
    else {
LAB_04011373:
      lVar10 = 0xe0;
      iVar3 = *(int *)(TypeInfo_TitanSounds + 0xe4);
    }
    if (iVar3 == 0) {
      il2cpp_init_class();
    }
    Characters_BaseCharacter__PlaySound
              ((Characters_BaseCharacter_o *)__this_00,
               *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + lVar10),(MethodInfo *)0x0);
    __this_01 = (UnityEngine_WaitForSeconds_o *)il2cpp_runtime_glue(TypeInfo_WaitForSeconds);
    UnityEngine_WaitForSeconds___ctor(__this_01,1.0,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)__this_01;
    il2cpp_runtime_glue(&(__this->fields).__2__current,__this_01);
    (__this->fields).__1__state = 2;
    break;
  case 2:
    (__this->fields).__1__state = -1;
    if (*(int *)(TypeInfo_EffectPrefabs + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (((__this_00 == (Characters_BasicTitan_o *)0x0) ||
        (pSVar4 = (__this_00->fields).OnPlayerPropertiesChanged,
        pSVar4 == (System_Action_Hashtable__o *)0x0)) ||
       (pUVar5 = (UnityEngine_Transform_o *)(pSVar4->fields).interp_invoke_impl,
       pUVar5 == (UnityEngine_Transform_o *)0x0)) goto LAB_0401160d;
    pSVar9 = *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x48);
    UVar12 = UnityEngine_Transform__get_position(pUVar5,(MethodInfo *)0x0);
    UVar13 = UnityEngine_Quaternion__Internal_FromEulerRad
                       ((UnityEngine_Vector3_o)ZEXT812(0xbfc90fdb),(MethodInfo *)0x0);
    fVar11 = Characters_BaseTitan__GetSpawnEffectSize
                       ((Characters_BaseTitan_o *)__this_00,(MethodInfo *)0x0);
    Effects_EffectSpawner__Spawn
              (pSVar9,UVar12,UVar13,fVar11,0,(System_Object_array *)0x0,(MethodInfo *)0x0);
    __this_01 = (UnityEngine_WaitForSeconds_o *)il2cpp_runtime_glue(TypeInfo_WaitForSeconds);
    UnityEngine_WaitForSeconds___ctor(__this_01,2.0,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)__this_01;
    il2cpp_runtime_glue(&(__this->fields).__2__current,__this_01);
    (__this->fields).__1__state = 3;
    break;
  case 3:
    (__this->fields).__1__state = -1;
    __this_01 = (UnityEngine_WaitForSeconds_o *)il2cpp_runtime_glue(TypeInfo_WaitForSeconds);
    UnityEngine_WaitForSeconds___ctor(__this_01,2.0,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)__this_01;
    il2cpp_runtime_glue(&(__this->fields).__2__current,__this_01);
    (__this->fields).__1__state = 4;
    break;
  case 4:
    (__this->fields).__1__state = -1;
    if (*(int *)(TypeInfo_EffectPrefabs + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (((__this_00 != (Characters_BasicTitan_o *)0x0) &&
        (pSVar4 = (__this_00->fields).OnPlayerPropertiesChanged,
        pSVar4 != (System_Action_Hashtable__o *)0x0)) &&
       (pUVar5 = (UnityEngine_Transform_o *)(pSVar4->fields).interp_invoke_impl,
       pUVar5 != (UnityEngine_Transform_o *)0x0)) {
      pSVar9 = *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x50);
      UVar12 = UnityEngine_Transform__get_position(pUVar5,(MethodInfo *)0x0);
      UVar13 = UnityEngine_Quaternion__Internal_FromEulerRad
                         ((UnityEngine_Vector3_o)ZEXT812(0xbfc90fdb),(MethodInfo *)0x0);
      fVar11 = Characters_BaseTitan__GetSpawnEffectSize
                         ((Characters_BaseTitan_o *)__this_00,(MethodInfo *)0x0);
      Effects_EffectSpawner__Spawn
                (pSVar9,UVar12,UVar13,fVar11,0,(System_Object_array *)0x0,(MethodInfo *)0x0);
      targetGo = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
        il2cpp_init_class();
      }
      Photon_Pun_PhotonNetwork__Destroy(targetGo,(MethodInfo *)0x0);
      return 0;
    }
    goto LAB_0401160d;
  }
  return (bool_conflict)CONCAT71((int7)((ulong)__this_01 >> 8),1);
}


// Characters.BasicTitan.<WaitAndDie>d__60$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Characters_BasicTitan__WaitAndDie_d__60__System_Collections_Generic_IEnumerator_System_Object__get_Current (Characters_BasicTitan__WaitAndDie_d__60_o* __this, const MethodInfo* method);
// 0x4011620

Il2CppObject *
Characters_BasicTitan_<WaitAndDie>d__60__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (Characters_BasicTitan__WaitAndDie_d__60_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Characters.BasicTitan.<WaitAndDie>d__60$$System.Collections.IEnumerator.Reset
// il2cpp: void Characters_BasicTitan__WaitAndDie_d__60__System_Collections_IEnumerator_Reset (Characters_BasicTitan__WaitAndDie_d__60_o* __this, const MethodInfo* method);
// 0x4011630

void Characters_BasicTitan_<WaitAndDie>d__60__System_Collections_IEnumerator_Reset
               (Characters_BasicTitan__WaitAndDie_d__60_o *__this,MethodInfo *method)

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


// Characters.BasicTitan.<WaitAndDie>d__60$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Characters_BasicTitan__WaitAndDie_d__60__System_Collections_IEnumerator_get_Current (Characters_BasicTitan__WaitAndDie_d__60_o* __this, const MethodInfo* method);
// 0x4011670

Il2CppObject *
Characters_BasicTitan_<WaitAndDie>d__60__System_Collections_IEnumerator_get_Current
          (Characters_BasicTitan__WaitAndDie_d__60_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Characters.BasicTitan$$get_CanSprint
// il2cpp: bool Characters_BasicTitan__get_CanSprint (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x4005620

bool_conflict
Characters_BasicTitan__get_CanSprint(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// Characters.BasicTitan$$get_CanWallClimb
// il2cpp: bool Characters_BasicTitan__get_CanWallClimb (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x4005630

bool_conflict
Characters_BasicTitan__get_CanWallClimb(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// Characters.BasicTitan$$get_EmoteActions
// il2cpp: System_Collections_Generic_List_string__o* Characters_BasicTitan__get_EmoteActions (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x4005640

System_Collections_Generic_List_string__o *
Characters_BasicTitan__get_EmoteActions(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_String_array *pSVar3;
  long lVar4;
  System_String_o *pSVar5;
  System_Collections_Generic_List_string__o *__this_00;
  
  if (DAT_05704243 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&"Shake");
    il2cpp_init_method_metadata(&"Nod");
    il2cpp_init_method_metadata(&"Laugh");
    il2cpp_init_method_metadata(&"Roar2");
    il2cpp_init_method_metadata(&"Roar1");
    DAT_05704243 = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_string__o *)il2cpp_runtime_glue(TypeInfo_List_string);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_System_String);
  pSVar5 = "Laugh";
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
      pSVar5 = "Nod";
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
        pSVar5 = "Shake";
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
                      ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar5
                       ,*(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
          }
          pSVar5 = "Roar1";
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
                        ((System_Collections_Generic_List_object__o *)__this_00,
                         (Il2CppObject *)pSVar5,
                         *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70))
              ;
            }
            pSVar5 = "Roar2";
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
                          ((System_Collections_Generic_List_object__o *)__this_00,
                           (Il2CppObject *)pSVar5,
                           *(MethodInfo_35A7350 **)
                            (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
              }
              return __this_00;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BasicTitan$$Init
// il2cpp: void Characters_BasicTitan__Init (Characters_BasicTitan_o* __this, bool ai, System_String_o* team, SimpleJSONFixed_JSONNode_o* data, Settings_TitanCustomSet_o* customSet, const MethodInfo* method);
// 0x40058b0

void Characters_BasicTitan__Init
               (Characters_BasicTitan_o *__this,bool_conflict ai,System_String_o *team,
               SimpleJSONFixed_JSONNode_o *data,Settings_TitanCustomSet_o *customSet,
               MethodInfo *method)

{
  Photon_Pun_PhotonView_o *__this_00;
  Characters_AnimationHandler_o *__this_01;
  char cVar1;
  bool_conflict bVar2;
  int iVar3;
  undefined8 in_RAX;
  UnityEngine_GameObject_o *__this_02;
  Il2CppObject *pIVar4;
  long *plVar5;
  System_String_o *value;
  System_Object_array *parameters;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  System_Collections_Generic_Dictionary_string__string__o *pSVar9;
  undefined8 uStack_38;
  
  uStack_38 = in_RAX;
  if (DAT_05704244 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_BaseTitanAIController_AddComponent_BaseTitanAICo);
    il2cpp_init_method_metadata(&MethodInfo_BasicTitanPlayerController_AddComponent_BasicTit);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&"SetCrawlerRPC");
    il2cpp_init_method_metadata(&"RunAnimation");
    il2cpp_init_method_metadata(&"Name");
    il2cpp_init_method_metadata(&"IsCrawler");
    DAT_05704244 = '\x01';
  }
  *(Settings_TitanCustomSet_o **)&(__this->fields)._rightArmDisabledTimeLeft = customSet;
  il2cpp_runtime_glue(&(__this->fields)._rightArmDisabledTimeLeft);
  __this_02 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_02 == (UnityEngine_GameObject_o *)0x0) goto LAB_04005c72;
  if ((char)ai == '\0') {
    UnityEngine_GameObject__AddComponent<object>(__this_02,MethodInfo_BasicTitanPlayerController_AddComponent_BasicTit);
    uStack_38 = CONCAT44(ai,(undefined4)uStack_38);
    if (*(char *)&(__this->fields)._rootMotionAnimations == '\0') goto LAB_04005a39;
LAB_04005b1e:
    lVar6 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields.z;
    if (lVar6 == 0) goto LAB_04005c72;
    pSVar9 = *(System_Collections_Generic_Dictionary_string__string__o **)(lVar6 + 0x18);
  }
  else {
    pIVar4 = UnityEngine_GameObject__AddComponent<object>(__this_02,MethodInfo_BaseTitanAIController_AddComponent_BaseTitanAICo);
    if (((pIVar4 == (Il2CppObject *)0x0) ||
        ((*pIVar4->klass->vtable[9].methodPtr)(pIVar4,data,pIVar4->klass->vtable[9].method),
        data == (SimpleJSONFixed_JSONNode_o *)0x0)) ||
       (plVar5 = (long *)(*(data->klass->vtable)._7_get_Item.methodPtr)
                                   (data,"Name",(data->klass->vtable)._7_get_Item.method),
       plVar5 == (long *)0x0)) goto LAB_04005c72;
    value = (System_String_o *)
            (**(code **)(*plVar5 + 0x1c8))(plVar5,*(undefined8 *)(*plVar5 + 0x1d0));
    Characters_BaseCharacter__set_Name((Characters_BaseCharacter_o *)__this,value,(MethodInfo *)0x0)
    ;
    plVar5 = (long *)(*(data->klass->vtable)._7_get_Item.methodPtr)
                               (data,"IsCrawler",(data->klass->vtable)._7_get_Item.method);
    if (plVar5 == (long *)0x0) goto LAB_04005c72;
    cVar1 = (**(code **)(*plVar5 + 0x3a8))(plVar5);
    *(char *)&(__this->fields)._rootMotionAnimations = cVar1;
    uStack_38 = CONCAT44(ai,(undefined4)uStack_38);
    if (cVar1 != '\0') goto LAB_04005b1e;
LAB_04005a39:
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = SimpleJSONFixed_JSONNode__op_Inequality(data,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    iVar3 = 1;
    if ((char)bVar2 != '\0') {
      if (data == (SimpleJSONFixed_JSONNode_o *)0x0) goto LAB_04005c72;
      cVar1 = (*(data->klass->vtable)._28_HasKey.methodPtr)
                        (data,"RunAnimation",(data->klass->vtable)._28_HasKey.method);
      if (cVar1 != '\0') {
        plVar5 = (long *)(*(data->klass->vtable)._7_get_Item.methodPtr)
                                   (data,"RunAnimation",(data->klass->vtable)._7_get_Item.method);
        if (plVar5 == (long *)0x0) goto LAB_04005c72;
        iVar3 = (**(code **)(*plVar5 + 0x368))(plVar5,*(undefined8 *)(*plVar5 + 0x370));
      }
    }
    lVar6 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields.z;
    if (lVar6 == 0) goto LAB_04005c72;
    lVar6 = *(long *)(lVar6 + 0x10);
    if (iVar3 == 0) {
      if (lVar6 == 0) goto LAB_04005c72;
      uVar8 = UnityEngine_Random__Range(0,*(int32_t *)(lVar6 + 0x18),(MethodInfo *)0x0);
      if (*(uint *)(lVar6 + 0x18) <= uVar8) goto LAB_04005c77;
    }
    else {
      if (lVar6 == 0) goto LAB_04005c72;
      uVar8 = iVar3 - 1;
      if (*(uint *)(lVar6 + 0x18) <= uVar8) goto LAB_04005c77;
    }
    pSVar9 = *(System_Collections_Generic_Dictionary_string__string__o **)
              (lVar6 + 0x20 + (long)(int)uVar8 * 8);
  }
  (__this->fields).AttackAnimations = pSVar9;
  il2cpp_runtime_glue(&(__this->fields).AttackAnimations);
  lVar6 = *(long *)&(__this->fields).Dead;
  if (lVar6 != 0) {
    __this_00 = *(Photon_Pun_PhotonView_o **)(lVar6 + 0x20);
    parameters = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,1);
    uStack_38._0_4_ =
         CONCAT13(*(undefined1 *)&(__this->fields)._rootMotionAnimations,(undefined3)uStack_38);
    pIVar4 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,(long)&uStack_38 + 3);
    if (parameters != (System_Object_array *)0x0) {
      if ((pIVar4 != (Il2CppObject *)0x0) &&
         (lVar6 = il2cpp_runtime_glue(pIVar4,(((parameters->obj).klass)->_1).element_class),
         lVar6 == 0)) {
        uVar7 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
        il2cpp_glue_02274a00(uVar7,0);
      }
      if ((int)parameters->max_length == 0) {
LAB_04005c77:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      parameters->m_Items[0] = pIVar4;
      il2cpp_runtime_glue(parameters->m_Items,pIVar4);
      if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
        Photon_Pun_PhotonView__RPC(__this_00,"SetCrawlerRPC",3,parameters,(MethodInfo *)0x0);
        Characters_BaseTitan__Init
                  ((Characters_BaseTitan_o *)__this,(uint)uStack_38._4_1_,team,data,
                   (MethodInfo *)0x0);
        lVar6 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields.z;
        if ((lVar6 != 0) &&
           (__this_01 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS,
           __this_01 != (Characters_AnimationHandler_o *)0x0)) {
          Characters_AnimationHandler__SetSpeed
                    (__this_01,*(System_String_o **)(lVar6 + 0x228),1.2,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_04005c72:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BasicTitan$$DeathTimeElapsed
// il2cpp: float Characters_BasicTitan__DeathTimeElapsed (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x4005c90

float Characters_BasicTitan__DeathTimeElapsed(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  long *plVar1;
  Characters_AnimationHandler_o *pCVar2;
  long lVar3;
  bool_conflict bVar4;
  System_String_o *pSVar5;
  float fVar6;
  float fVar7;
  
  plVar1 = *(long **)&(__this->fields)._furthestCoreLocalPosition.fields.z;
  if (plVar1 != (long *)0x0) {
    pCVar2 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
    pSVar5 = (System_String_o *)
             (**(code **)(*plVar1 + 0x1f8))(plVar1,*(undefined8 *)(*plVar1 + 0x200));
    if (pCVar2 != (Characters_AnimationHandler_o *)0x0) {
      bVar4 = Characters_AnimationHandler__IsPlaying(pCVar2,pSVar5,(MethodInfo *)0x0);
      if ((char)bVar4 == '\0') {
        lVar3 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields.z;
        if ((lVar3 == 0) ||
           (pCVar2 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS,
           pCVar2 == (Characters_AnimationHandler_o *)0x0)) goto LAB_04005d8f;
        bVar4 = Characters_AnimationHandler__IsPlaying
                          (pCVar2,*(System_String_o **)(lVar3 + 0x50),(MethodInfo *)0x0);
        if ((char)bVar4 == '\0') {
          lVar3 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields.z;
          if ((lVar3 == 0) ||
             (pCVar2 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS,
             pCVar2 == (Characters_AnimationHandler_o *)0x0)) goto LAB_04005d8f;
          bVar4 = Characters_AnimationHandler__IsPlaying
                            (pCVar2,*(System_String_o **)(lVar3 + 0x58),(MethodInfo *)0x0);
          if ((char)bVar4 == '\0') {
            return -1.0;
          }
        }
      }
      pCVar2 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
      if (pCVar2 != (Characters_AnimationHandler_o *)0x0) {
        fVar6 = Characters_AnimationHandler__GetCurrentNormalizedTime(pCVar2,(MethodInfo *)0x0);
        pCVar2 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
        if (pCVar2 != (Characters_AnimationHandler_o *)0x0) {
          pSVar5 = Characters_AnimationHandler__GetCurrentAnimation(pCVar2,(MethodInfo *)0x0);
          fVar7 = Characters_AnimationHandler__GetLength(pCVar2,pSVar5,(MethodInfo *)0x0);
          return fVar6 * fVar7;
        }
      }
    }
  }
LAB_04005d8f:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BasicTitan$$IsGrabAttack
// il2cpp: bool Characters_BasicTitan__IsGrabAttack (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x4005da0

bool_conflict
Characters_BasicTitan__IsGrabAttack(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  System_String_o *__this_00;
  bool_conflict bVar1;
  
  if (DAT_05704245 == '\0') {
    il2cpp_init_method_metadata(&"AttackGrab");
    DAT_05704245 = '\x01';
  }
  __this_00 = *(System_String_o **)&(__this->fields)._disableCooldownLeft;
  if (__this_00 != (System_String_o *)0x0) {
    bVar1 = System_String__StartsWith(__this_00,"AttackGrab",(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BasicTitan$$GetRootMotionAnimations
// il2cpp: System_Collections_Generic_Dictionary_string__float__o* Characters_BasicTitan__GetRootMotionAnimations (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x4005df0

System_Collections_Generic_Dictionary_string__float__o *
Characters_BasicTitan__GetRootMotionAnimations(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_Dictionary_string__float__o *__this_00;
  
  if (DAT_05704246 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_System_Single);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__float);
    DAT_05704246 = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_string__float__o *)
              il2cpp_runtime_glue(TypeInfo_Dictionary_string__float);
  System_Collections_Generic_Dictionary<object__float>___ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,MethodInfo_Dictionary_2_System_String_System_Single);
  lVar1 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields.z;
  if ((lVar1 != 0) && (__this_00 != (System_Collections_Generic_Dictionary_string__float__o *)0x0))
  {
    System_Collections_Generic_Dictionary<object__float>__Add
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
               *(Il2CppObject **)(lVar1 + 0x88),1.0,MethodInfo_Void_Add);
    lVar1 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields.z;
    if (lVar1 != 0) {
      System_Collections_Generic_Dictionary<object__float>__Add
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                 *(Il2CppObject **)(lVar1 + 0x90),1.0,MethodInfo_Void_Add);
      lVar1 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields.z;
      if (lVar1 != 0) {
        System_Collections_Generic_Dictionary<object__float>__Add
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                   *(Il2CppObject **)(lVar1 + 0x78),1.0,MethodInfo_Void_Add);
        lVar1 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields.z;
        if (lVar1 != 0) {
          System_Collections_Generic_Dictionary<object__float>__Add
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                     *(Il2CppObject **)(lVar1 + 0x70),1.0,MethodInfo_Void_Add);
          return __this_00;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BasicTitan$$SetSizeParticles
// il2cpp: void Characters_BasicTitan__SetSizeParticles (Characters_BasicTitan_o* __this, float size, const MethodInfo* method);
// 0x4005f10

void Characters_BasicTitan__SetSizeParticles
               (Characters_BasicTitan_o *__this,float size,MethodInfo *method)

{
  float fVar1;
  undefined8 uVar2;
  UnityEngine_ParticleSystem_o *__this_00;
  UnityEngine_Component_o *pUVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  UnityEngine_ParticleSystem_MainModule_o main;
  UnityEngine_Transform_o *pUVar7;
  long lVar8;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o value_00;
  
  if (DAT_05704247 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ParticleSystem);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    DAT_05704247 = '\x01';
  }
  Characters_BaseTitan__SetSizeParticles((Characters_BaseTitan_o *)__this,size,(MethodInfo *)0x0);
  lVar6 = il2cpp_glue_02274930(TypeInfo_ParticleSystem,2);
  lVar8 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields;
  if ((lVar8 != 0) && (lVar6 != 0)) {
    if (*(int *)(lVar6 + 0x18) != 0) {
      *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)(lVar8 + 0x148);
      il2cpp_runtime_glue(lVar6 + 0x20);
      lVar8 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields;
      if (lVar8 == 0) goto LAB_04006168;
      if (1 < *(uint *)(lVar6 + 0x18)) {
        *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)(lVar8 + 0x150);
        il2cpp_runtime_glue(lVar6 + 0x28);
        iVar4 = (int)*(undefined8 *)(lVar6 + 0x18);
        if (iVar4 < 1) {
LAB_04006060:
          lVar8 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields;
          if ((lVar8 != 0) &&
             (pUVar3 = *(UnityEngine_Component_o **)(lVar8 + 0x148),
             pUVar3 != (UnityEngine_Component_o *)0x0)) {
            pUVar7 = UnityEngine_Component__get_transform(pUVar3,(MethodInfo *)0x0);
            if (DAT_056fe077 == '\0') {
              il2cpp_init_method_metadata(&TypeInfo_Vector3);
              DAT_056fe077 = '\x01';
            }
            if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
              fVar1 = *(float *)((long)&(__this->fields).TitanColliderToggler + 4);
              uVar2 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
              value.fields.x = fVar1 * (float)uVar2;
              value.fields.y = fVar1 * (float)((ulong)uVar2 >> 0x20);
              value.fields.z = fVar1 * *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x14);
              UnityEngine_Transform__set_localScale(pUVar7,value,(MethodInfo *)0x0);
              lVar8 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields;
              if ((lVar8 != 0) &&
                 (pUVar3 = *(UnityEngine_Component_o **)(lVar8 + 0x150),
                 pUVar3 != (UnityEngine_Component_o *)0x0)) {
                pUVar7 = UnityEngine_Component__get_transform(pUVar3,(MethodInfo *)0x0);
                if (DAT_056fe077 == '\0') {
                  il2cpp_init_method_metadata(&TypeInfo_Vector3);
                  DAT_056fe077 = '\x01';
                }
                if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                  fVar1 = *(float *)((long)&(__this->fields).TitanColliderToggler + 4);
                  uVar2 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
                  value_00.fields.x = fVar1 * (float)uVar2;
                  value_00.fields.y = fVar1 * (float)((ulong)uVar2 >> 0x20);
                  value_00.fields.z = fVar1 * *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x14);
                  UnityEngine_Transform__set_localScale(pUVar7,value_00,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
          goto LAB_04006168;
        }
        lVar8 = 0;
        if (iVar4 != 0) {
          do {
            __this_00 = *(UnityEngine_ParticleSystem_o **)(lVar6 + 0x20 + lVar8 * 8);
            if (__this_00 == (UnityEngine_ParticleSystem_o *)0x0) goto LAB_04006168;
            main = UnityEngine_ParticleSystem__get_main(__this_00,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
              il2cpp_init_class();
            }
            Utility_Util__ScaleParticleStartSize(main,size,(MethodInfo *)0x0);
            Utility_Util__ScaleParticleStartSpeed(main,size,(MethodInfo *)0x0);
            lVar8 = lVar8 + 1;
            uVar5 = (uint)*(undefined8 *)(lVar6 + 0x18);
            if ((int)uVar5 <= (int)(uint)lVar8) goto LAB_04006060;
          } while ((uint)lVar8 < uVar5);
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_04006168:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BasicTitan$$SetCrawlerRPC
// il2cpp: void Characters_BasicTitan__SetCrawlerRPC (Characters_BasicTitan_o* __this, bool crawler, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x4006180

void Characters_BasicTitan__SetCrawlerRPC
               (Characters_BasicTitan_o *__this,bool_conflict crawler,
               Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  byte bVar1;
  long lVar2;
  undefined1 auVar3 [12];
  UnityEngine_CapsuleCollider_o *__this_00;
  float fVar4;
  
  if (DAT_05704248 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CapsuleCollider);
    DAT_05704248 = '\x01';
  }
  lVar2 = *(long *)&(__this->fields).Dead;
  if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x20), lVar2 != 0)) {
    if (info.fields.Sender != *(Photon_Realtime_Player_o **)(lVar2 + 0x80)) {
      return;
    }
    *(char *)&(__this->fields)._rootMotionAnimations = (char)crawler;
    lVar2 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields;
    if ((lVar2 != 0) &&
       (__this_00 = *(UnityEngine_CapsuleCollider_o **)(lVar2 + 0x70),
       __this_00 != (UnityEngine_CapsuleCollider_o *)0x0)) {
      bVar1 = (TypeInfo_CapsuleCollider->_2).naturalAligment;
      if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
         ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CapsuleCollider)) {
        if ((char)crawler == '\0') {
          fVar4 = UnityEngine_CapsuleCollider__get_radius(__this_00,(MethodInfo *)0x0);
          (__this->fields).LastGoodHeadAngle.fields.x = fVar4;
          return;
        }
        UnityEngine_CapsuleCollider__set_direction(__this_00,2,(MethodInfo *)0x0);
        fVar4 = UnityEngine_CapsuleCollider__get_radius(__this_00,(MethodInfo *)0x0);
        UnityEngine_CapsuleCollider__set_radius(__this_00,fVar4 * 0.5,(MethodInfo *)0x0);
        fVar4 = UnityEngine_CapsuleCollider__get_radius(__this_00,(MethodInfo *)0x0);
        auVar3._4_8_ = 0;
        auVar3._0_4_ = fVar4;
        UnityEngine_CapsuleCollider__set_center
                  (__this_00,(UnityEngine_Vector3_o)(auVar3 << 0x20),(MethodInfo *)0x0);
        fVar4 = UnityEngine_CapsuleCollider__get_height(__this_00,(MethodInfo *)0x0);
        (__this->fields).LastGoodHeadAngle.fields.x = fVar4;
        lVar2 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields;
        if ((lVar2 == 0) ||
           (__this_00 = *(UnityEngine_CapsuleCollider_o **)(lVar2 + 0x68),
           __this_00 == (UnityEngine_CapsuleCollider_o *)0x0)) goto LAB_0400630b;
        bVar1 = (TypeInfo_CapsuleCollider->_2).naturalAligment;
        if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
           ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CapsuleCollider)) {
          fVar4 = UnityEngine_CapsuleCollider__get_radius(__this_00,(MethodInfo *)0x0);
          UnityEngine_CapsuleCollider__set_radius(__this_00,fVar4,(MethodInfo *)0x0);
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(__this_00);
    }
  }
LAB_0400630b:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BasicTitan$$ClearRockRPC
// il2cpp: void Characters_BasicTitan__ClearRockRPC (Characters_BasicTitan_o* __this, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x4006320

void Characters_BasicTitan__ClearRockRPC
               (Characters_BasicTitan_o *__this,Photon_Pun_PhotonMessageInfo_o info,
               MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  UnityEngine_Component_o *__this_00;
  System_Object_array *pSVar4;
  UnityEngine_Object_o *obj;
  uint uVar5;
  
  if (DAT_05704249 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Rock1Spawnable___GetComponentsInChildren_Rock1Sp);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704249 = '\x01';
  }
  lVar3 = *(long *)&(__this->fields).Dead;
  if ((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x20), lVar3 != 0)) {
    if (info.fields.Sender == *(Photon_Realtime_Player_o **)(lVar3 + 0x80)) {
      lVar3 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields;
      if (((lVar3 == 0) ||
          (__this_00 = *(UnityEngine_Component_o **)(lVar3 + 0x90),
          __this_00 == (UnityEngine_Component_o *)0x0)) ||
         (pSVar4 = UnityEngine_Component__GetComponentsInChildren<object>(__this_00,MethodInfo_Rock1Spawnable___GetComponentsInChildren_Rock1Sp),
         pSVar4 == (System_Object_array *)0x0)) goto LAB_04006420;
      iVar1 = (int)pSVar4->max_length;
      if (0 < iVar1) {
        uVar5 = 0;
        if (iVar1 != 0) {
          do {
            if ((UnityEngine_Component_o *)pSVar4->m_Items[(int)uVar5] ==
                (UnityEngine_Component_o *)0x0) goto LAB_04006420;
            obj = (UnityEngine_Object_o *)
                  UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pSVar4->m_Items[(int)uVar5],
                             (MethodInfo *)0x0);
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_init_class();
            }
            UnityEngine_Object__Destroy(obj,(MethodInfo *)0x0);
            uVar5 = uVar5 + 1;
            uVar2 = (uint)pSVar4->max_length;
            if ((int)uVar2 <= (int)uVar5) {
              return;
            }
          } while (uVar5 < uVar2);
        }
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
    return;
  }
LAB_04006420:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BasicTitan$$GetCameraAnchor
// il2cpp: UnityEngine_Transform_o* Characters_BasicTitan__GetCameraAnchor (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x4006430

UnityEngine_Transform_o *
Characters_BasicTitan__GetCameraAnchor(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  long lVar1;
  
  lVar1 = *(long *)&(__this->fields).Dead;
  if (lVar1 != 0) {
    return *(UnityEngine_Transform_o **)(lVar1 + 0x10);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BasicTitan$$Start
// il2cpp: void Characters_BasicTitan__Start (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x4006450

void Characters_BasicTitan__Start(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  GameManagers_InGameManager_o *__this_00;
  long *plVar1;
  Photon_Pun_PhotonView_o *__this_01;
  UnityEngine_Transform_o *__this_02;
  System_String_o *name;
  bool_conflict bVar2;
  Il2CppObject *pIVar3;
  System_Object_array *parameters;
  long lVar4;
  undefined8 uVar5;
  float scale;
  UnityEngine_Vector3_o position;
  UnityEngine_Quaternion_o rotation;
  
  if (DAT_0570424a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EffectPrefabs);
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&"SetupRPC");
    DAT_0570424a = '\x01';
  }
  __this_00 = (GameManagers_InGameManager_o *)(__this->fields).Team;
  if (__this_00 != (GameManagers_InGameManager_o *)0x0) {
    GameManagers_InGameManager__RegisterCharacter
              (__this_00,(Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0);
    Characters_BaseTitan__Start((Characters_BaseTitan_o *)__this,(MethodInfo *)0x0);
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 == '\0') {
      return;
    }
    plVar1 = *(long **)&(__this->fields)._rightArmDisabledTimeLeft;
    if (plVar1 != (long *)0x0) {
      pIVar3 = (Il2CppObject *)
               (**(code **)(*plVar1 + 0x1a8))(plVar1,*(undefined8 *)(*plVar1 + 0x1b0));
      lVar4 = *(long *)&(__this->fields).Dead;
      if (lVar4 != 0) {
        __this_01 = *(Photon_Pun_PhotonView_o **)(lVar4 + 0x20);
        parameters = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,1);
        if (parameters != (System_Object_array *)0x0) {
          if (pIVar3 != (Il2CppObject *)0x0) {
            lVar4 = il2cpp_runtime_glue(pIVar3,(((parameters->obj).klass)->_1).element_class);
            if (lVar4 == 0) {
              uVar5 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
              il2cpp_glue_02274a00(uVar5,0);
            }
          }
          if ((int)parameters->max_length == 0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          parameters->m_Items[0] = pIVar3;
          il2cpp_runtime_glue(parameters->m_Items,pIVar3);
          if (__this_01 != (Photon_Pun_PhotonView_o *)0x0) {
            Photon_Pun_PhotonView__RPC(__this_01,"SetupRPC",3,parameters,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_EffectPrefabs + 0xe4) == 0) {
              il2cpp_init_class();
            }
            lVar4 = *(long *)&(__this->fields).Dead;
            if ((lVar4 != 0) &&
               (__this_02 = *(UnityEngine_Transform_o **)(lVar4 + 0x10),
               __this_02 != (UnityEngine_Transform_o *)0x0)) {
              name = *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x40);
              position = UnityEngine_Transform__get_position(__this_02,(MethodInfo *)0x0);
              rotation = UnityEngine_Quaternion__Internal_FromEulerRad
                                   ((UnityEngine_Vector3_o)ZEXT812(0xbfc90fdb),(MethodInfo *)0x0);
              scale = Characters_BaseTitan__GetSpawnEffectSize
                                ((Characters_BaseTitan_o *)__this,(MethodInfo *)0x0);
              Effects_EffectSpawner__Spawn
                        (name,position,rotation,scale,1,(System_Object_array *)0x0,(MethodInfo *)0x0
                        );
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BasicTitan$$SetupRPC
// il2cpp: void Characters_BasicTitan__SetupRPC (Characters_BasicTitan_o* __this, System_String_o* json, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x4006650

void Characters_BasicTitan__SetupRPC
               (Characters_BasicTitan_o *__this,System_String_o *json,
               Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  long lVar1;
  Characters_BasicTitanSetup_o *__this_00;
  Settings_TitanCustomSet_o *__this_01;
  MethodInfo *method_00;
  
  if (DAT_0570424b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TitanCustomSet);
    DAT_0570424b = '\x01';
  }
  lVar1 = *(long *)&(__this->fields).Dead;
  if ((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x20), lVar1 != 0)) {
    if (info.fields.Sender != *(Photon_Realtime_Player_o **)(lVar1 + 0x80)) {
      return;
    }
    __this_01 = (Settings_TitanCustomSet_o *)il2cpp_runtime_glue(TypeInfo_TitanCustomSet);
    Settings_TitanCustomSet___ctor(__this_01,(MethodInfo *)0x0);
    if (__this_01 != (Settings_TitanCustomSet_o *)0x0) {
      (*(__this_01->klass->vtable)._8_DeserializeFromJsonString.methodPtr)
                (__this_01,json,(__this_01->klass->vtable)._8_DeserializeFromJsonString.method);
      __this_00 = *(Characters_BasicTitanSetup_o **)&(__this->fields).EnableAI;
      if (__this_00 != (Characters_BasicTitanSetup_o *)0x0) {
        Characters_BasicTitanSetup__Load(__this_00,__this_01,method_00);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BasicTitan$$CreateCache
// il2cpp: void Characters_BasicTitan__CreateCache (Characters_BasicTitan_o* __this, Utility_BaseComponentCache_o* cache, const MethodInfo* method);
// 0x4007400

void Characters_BasicTitan__CreateCache
               (Characters_BasicTitan_o *__this,Utility_BaseComponentCache_o *cache,
               MethodInfo *method)

{
  UnityEngine_GameObject_o *owner;
  Characters_BasicTitanComponentCache_o *__this_00;
  undefined1 auVar1 [16];
  
  if (DAT_0570424c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BasicTitanComponentCache);
    DAT_0570424c = '\x01';
  }
  owner = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  auVar1 = il2cpp_runtime_glue(TypeInfo_BasicTitanComponentCache);
  __this_00 = auVar1._0_8_;
  Characters_BasicTitanComponentCache___ctor(__this_00,owner,auVar1._8_8_);
  *(Characters_BasicTitanComponentCache_o **)&(__this->fields)._furthestCoreLocalPosition.fields =
       __this_00;
  il2cpp_runtime_glue(&(__this->fields)._furthestCoreLocalPosition,__this_00);
  Characters_BaseTitan__CreateCache
            ((Characters_BaseTitan_o *)__this,
             *(Utility_BaseComponentCache_o **)&(__this->fields)._furthestCoreLocalPosition.fields,
             (MethodInfo *)0x0);
  return;
}


// Characters.BasicTitan$$CreateAnimations
// il2cpp: void Characters_BasicTitan__CreateAnimations (Characters_BasicTitan_o* __this, Characters_BaseTitanAnimations_o* animations, const MethodInfo* method);
// 0x4007970

void Characters_BasicTitan__CreateAnimations
               (Characters_BasicTitan_o *__this,Characters_BaseTitanAnimations_o *animations,
               MethodInfo *method)

{
  Characters_BasicTitanAnimations_o *__this_00;
  
  if (DAT_0570424d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BasicTitanAnimations);
    DAT_0570424d = '\x01';
  }
  __this_00 = (Characters_BasicTitanAnimations_o *)il2cpp_runtime_glue(TypeInfo_BasicTitanAnimations);
  Characters_BasicTitanAnimations___ctor(__this_00,(MethodInfo *)animations);
  *(Characters_BasicTitanAnimations_o **)&(__this->fields)._furthestCoreLocalPosition.fields.z =
       __this_00;
  il2cpp_runtime_glue(&(__this->fields)._furthestCoreLocalPosition.fields.z,__this_00);
  Characters_BaseTitan__CreateAnimations
            ((Characters_BaseTitan_o *)__this,
             *(Characters_BaseTitanAnimations_o **)
              &(__this->fields)._furthestCoreLocalPosition.fields.z,(MethodInfo *)0x0);
  return;
}


// Characters.BasicTitan$$Emote
// il2cpp: void Characters_BasicTitan__Emote (Characters_BasicTitan_o* __this, System_String_o* emote, const MethodInfo* method);
// 0x40085b0

void Characters_BasicTitan__Emote
               (Characters_BasicTitan_o *__this,System_String_o *emote,MethodInfo *method)

{
  long lVar1;
  char cVar2;
  bool_conflict bVar3;
  System_String_o *sound;
  System_Collections_IEnumerator_o *routine;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  System_String_o *animation;
  float delay;
  
  if (DAT_0570424e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TitanSounds);
    il2cpp_init_method_metadata(&"Shake");
    il2cpp_init_method_metadata(&"Nod");
    il2cpp_init_method_metadata(&"Laugh");
    il2cpp_init_method_metadata(&"Roar2");
    il2cpp_init_method_metadata(&"Roar1");
    DAT_0570424e = '\x01';
    method = extraout_RDX;
  }
  cVar2 = (*(__this->klass->vtable)._124_CanEmote.methodPtr)
                    (__this,(__this->klass->vtable)._124_CanEmote.method,method);
  if (cVar2 == '\0') {
    return;
  }
  animation = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  bVar3 = System_String__op_Equality(emote,"Laugh",(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    bVar3 = System_String__op_Equality(emote,"Nod",(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      lVar1 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields.z;
      if (lVar1 == 0) goto LAB_0400880a;
      animation = *(System_String_o **)(lVar1 + 0x238);
      goto LAB_040087e5;
    }
    bVar3 = System_String__op_Equality(emote,"Shake",(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      lVar1 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields.z;
      if (lVar1 == 0) goto LAB_0400880a;
      animation = *(System_String_o **)(lVar1 + 0x240);
      goto LAB_040087e5;
    }
    bVar3 = System_String__op_Equality(emote,"Roar1",(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      bVar3 = System_String__op_Equality(emote,"Roar2",(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') goto LAB_040087e5;
      lVar1 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields.z;
      if (lVar1 == 0) goto LAB_0400880a;
      animation = *(System_String_o **)(lVar1 + 0x248);
      if (*(int *)((long)&TypeInfo_TitanSounds[2].parameters + 4) == 0) {
        il2cpp_init_class();
      }
      sound = *(System_String_o **)(TypeInfo_TitanSounds[2].virtualMethodPointer + 0xd0);
    }
    else {
      lVar1 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields.z;
      if (lVar1 == 0) goto LAB_0400880a;
      animation = *(System_String_o **)(lVar1 + 0x248);
      if (*(int *)((long)&TypeInfo_TitanSounds[2].parameters + 4) == 0) {
        il2cpp_init_class();
      }
      sound = *(System_String_o **)(TypeInfo_TitanSounds[2].virtualMethodPointer + 200);
    }
    delay = 1.4;
  }
  else {
    lVar1 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields.z;
    if (lVar1 == 0) {
LAB_0400880a:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    animation = *(System_String_o **)(lVar1 + 0x230);
    method_00 = TypeInfo_TitanSounds;
    if (*(int *)((long)&TypeInfo_TitanSounds[2].parameters + 4) == 0) {
      il2cpp_init_class();
    }
    sound = Characters_TitanSounds__GetRandomLaugh(method_00);
    delay = 0.5;
  }
  routine = Characters_BaseCharacter__WaitAndPlaySound
                      ((Characters_BaseCharacter_o *)__this,sound,delay,(MethodInfo *)0x0);
  UnityEngine_MonoBehaviour__StartCoroutine
            ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
LAB_040087e5:
  Characters_BaseTitan__StateAction
            ((Characters_BaseTitan_o *)__this,8,animation,0.1,1,(MethodInfo *)0x0);
  return;
}


// Characters.BasicTitan$$CoverNape
// il2cpp: void Characters_BasicTitan__CoverNape (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x40088f0

void Characters_BasicTitan__CoverNape(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  long lVar1;
  Characters_AnimationHandler_o *__this_00;
  System_String_o *name;
  char cVar2;
  float stateTime;
  
  cVar2 = (*(__this->klass->vtable)._123_CanAction.methodPtr)
                    (__this,(__this->klass->vtable)._123_CanAction.method);
  if (cVar2 == '\0') {
    return;
  }
  lVar1 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields.z;
  if ((lVar1 != 0) &&
     (__this_00 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS,
     __this_00 != (Characters_AnimationHandler_o *)0x0)) {
    name = *(System_String_o **)(lVar1 + 0x228);
    stateTime = Characters_AnimationHandler__GetTotalTime(__this_00,name,(MethodInfo *)0x0);
    Characters_BaseTitan__StateActionWithTime
              ((Characters_BaseTitan_o *)__this,0x1a,name,stateTime,0.1,1,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BasicTitan$$UncoverNape
// il2cpp: void Characters_BasicTitan__UncoverNape (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x4008970

void Characters_BasicTitan__UncoverNape(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  undefined8 in_RDX;
  
  if (*(int *)&(__this->fields).OutlineComponent == 0x1a) {
    vtable_dispatch = (__this->klass->vtable)._139_Idle.methodPtr;
    (*vtable_dispatch)
              (0x3e99999a,__this,(__this->klass->vtable)._139_Idle.method,in_RDX,
               vtable_dispatch);
    return;
  }
  return;
}


// Characters.BasicTitan$$DisableArm
// il2cpp: void Characters_BasicTitan__DisableArm (Characters_BasicTitan_o* __this, bool left, const MethodInfo* method);
// 0x40089a0

void Characters_BasicTitan__DisableArm
               (Characters_BasicTitan_o *__this,bool_conflict left,MethodInfo *method)

{
  uint uVar1;
  Photon_Pun_PhotonView_o *pPVar2;
  Characters_BaseTitanComponentCache_o *pCVar3;
  bool_conflict bVar4;
  uint uVar5;
  undefined8 in_RAX;
  System_Object_array *pSVar6;
  Il2CppObject *pIVar7;
  long lVar8;
  undefined8 uVar9;
  MethodInfo *extraout_RDX;
  System_String_o *animation;
  undefined1 auStack_28 [7];
  char cStack_21;
  
  _auStack_28 = in_RAX;
  if (DAT_0570424f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"DisableArmRPC");
    DAT_0570424f = '\x01';
    method = extraout_RDX;
  }
  if ((char)(__this->fields).CustomDamage == '\0') {
    return;
  }
  if ((char)left == '\0') {
    if (*(char *)((long)&(__this->fields).AttackSpeeds + 5) != '\0') {
      return;
    }
    lVar8 = *(long *)&(__this->fields).Dead;
    if (lVar8 == 0) goto LAB_04008d63;
    pPVar2 = *(Photon_Pun_PhotonView_o **)(lVar8 + 0x20);
    pSVar6 = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,1,method);
    auStack_28 = (undefined1  [7])CONCAT16(0,auStack_28._0_6_);
    pIVar7 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,auStack_28 + 6);
    if (pSVar6 == (System_Object_array *)0x0) goto LAB_04008d63;
    if ((pIVar7 != (Il2CppObject *)0x0) &&
       (lVar8 = il2cpp_runtime_glue(pIVar7,(((pSVar6->obj).klass)->_1).element_class), lVar8 == 0))
    goto LAB_04008d6d;
    if ((int)pSVar6->max_length == 0) goto LAB_04008d68;
    pSVar6->m_Items[0] = pIVar7;
    il2cpp_runtime_glue(pSVar6->m_Items,pIVar7);
    if (pPVar2 == (Photon_Pun_PhotonView_o *)0x0) goto LAB_04008d63;
    Photon_Pun_PhotonView__RPC(pPVar2,"DisableArmRPC",0,pSVar6,(MethodInfo *)0x0);
    pCVar3 = (__this->fields).BaseTitanCache;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pCVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (((char)bVar4 != '\0') && (*(char *)&(__this->fields).TitanColliderToggler == '\0')) {
      (*(__this->klass->vtable)._148_Ungrab.methodPtr)
                (__this,(__this->klass->vtable)._148_Ungrab.method);
    }
    lVar8 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields.z;
    if (lVar8 == 0) goto LAB_04008d63;
    bVar4 = System_String__op_Equality
                      (*(System_String_o **)&(__this->fields)._climbCooldownLeft,
                       *(System_String_o **)(lVar8 + 0x88),(MethodInfo *)0x0);
    uVar5 = 1;
    if ((char)bVar4 == '\0') {
      lVar8 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields.z;
      if (lVar8 == 0) goto LAB_04008d63;
      uVar5 = System_String__op_Equality
                        (*(System_String_o **)&(__this->fields)._climbCooldownLeft,
                         *(System_String_o **)(lVar8 + 0x90),(MethodInfo *)0x0);
      uVar5 = uVar5 & 0xff;
    }
    uVar1 = *(uint *)&(__this->fields).OutlineComponent;
    if ((((uVar1 < 0x17) && ((0x7e00d0U >> (uVar1 & 0x1f) & 1) != 0)) || (uVar5 != 0)) ||
       (uVar1 == 5)) goto LAB_04008d02;
    lVar8 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields.z;
    if (lVar8 == 0) goto LAB_04008d63;
    animation = *(System_String_o **)(lVar8 + 0x220);
  }
  else {
    if (*(char *)((long)&(__this->fields).AttackSpeeds + 4) != '\0') {
      return;
    }
    lVar8 = *(long *)&(__this->fields).Dead;
    if (lVar8 == 0) {
LAB_04008d63:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pPVar2 = *(Photon_Pun_PhotonView_o **)(lVar8 + 0x20);
    pSVar6 = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,1,method);
    _auStack_28 = CONCAT17((char)left,auStack_28);
    pIVar7 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,auStack_28 + 7);
    if (pSVar6 == (System_Object_array *)0x0) goto LAB_04008d63;
    if ((pIVar7 != (Il2CppObject *)0x0) &&
       (lVar8 = il2cpp_runtime_glue(pIVar7,(((pSVar6->obj).klass)->_1).element_class), lVar8 == 0)) {
LAB_04008d6d:
      uVar9 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
      il2cpp_glue_02274a00(uVar9,0);
    }
    if ((int)pSVar6->max_length == 0) {
LAB_04008d68:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar6->m_Items[0] = pIVar7;
    il2cpp_runtime_glue(pSVar6->m_Items,pIVar7);
    if (pPVar2 == (Photon_Pun_PhotonView_o *)0x0) goto LAB_04008d63;
    Photon_Pun_PhotonView__RPC(pPVar2,"DisableArmRPC",0,pSVar6,(MethodInfo *)0x0);
    pCVar3 = (__this->fields).BaseTitanCache;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pCVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (((char)bVar4 != '\0') && (*(char *)&(__this->fields).TitanColliderToggler != '\0')) {
      (*(__this->klass->vtable)._148_Ungrab.methodPtr)
                (__this,(__this->klass->vtable)._148_Ungrab.method);
    }
    lVar8 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields.z;
    if (lVar8 == 0) goto LAB_04008d63;
    bVar4 = System_String__op_Equality
                      (*(System_String_o **)&(__this->fields)._climbCooldownLeft,
                       *(System_String_o **)(lVar8 + 0x88),(MethodInfo *)0x0);
    uVar5 = 1;
    if ((char)bVar4 == '\0') {
      lVar8 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields.z;
      if (lVar8 == 0) goto LAB_04008d63;
      uVar5 = System_String__op_Equality
                        (*(System_String_o **)&(__this->fields)._climbCooldownLeft,
                         *(System_String_o **)(lVar8 + 0x90),(MethodInfo *)0x0);
      uVar5 = uVar5 & 0xff;
    }
    uVar1 = *(uint *)&(__this->fields).OutlineComponent;
    if ((((uVar1 < 0x17) && ((0x7e00d0U >> (uVar1 & 0x1f) & 1) != 0)) || (uVar5 != 0)) ||
       (uVar1 == 5)) goto LAB_04008d02;
    lVar8 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields.z;
    if (lVar8 == 0) goto LAB_04008d63;
    animation = *(System_String_o **)(lVar8 + 0x218);
  }
  Characters_BaseTitan__StateAction
            ((Characters_BaseTitan_o *)__this,0xb,animation,0.1,1,(MethodInfo *)0x0);
LAB_04008d02:
  (*(__this->klass->vtable)._168_DamagedGrunt.methodPtr)
            (0x3f800000,__this,(__this->klass->vtable)._168_DamagedGrunt.method);
  return;
}


// Characters.BasicTitan$$CanAttack
// il2cpp: bool Characters_BasicTitan__CanAttack (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x4008d80

bool_conflict Characters_BasicTitan__CanAttack(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  bool_conflict bVar1;
  undefined8 in_RDX;
  
  vtable_dispatch = (__this->klass->vtable)._123_CanAction.methodPtr;
  bVar1 = (*vtable_dispatch)
                    (__this,(__this->klass->vtable)._123_CanAction.method,in_RDX,
                     vtable_dispatch);
  return bVar1;
}


// Characters.BasicTitan$$DisableArmRPC
// il2cpp: void Characters_BasicTitan__DisableArmRPC (Characters_BasicTitan_o* __this, bool left, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x4008d90

/* WARNING: Type propagation algorithm not settling */

void Characters_BasicTitan__DisableArmRPC
               (Characters_BasicTitan_o *__this,bool_conflict left,
               Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  long lVar1;
  
  lVar1 = *(long *)&(__this->fields).Dead;
  if ((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x20), lVar1 != 0)) {
    if (info.fields.Sender != *(Photon_Realtime_Player_o **)(lVar1 + 0x80)) {
      return;
    }
    lVar1 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields;
    if (lVar1 != 0) {
      if ((char)left == '\0') {
        if (*(UnityEngine_ParticleSystem_o **)(lVar1 + 0x140) != (UnityEngine_ParticleSystem_o *)0x0
           ) {
          UnityEngine_ParticleSystem__Play
                    (*(UnityEngine_ParticleSystem_o **)(lVar1 + 0x140),1,(MethodInfo *)0x0);
          (__this->fields).LateUpdateHeadRotation.fields.value.fields.w =
               (float)(__this->fields).LateUpdateHeadRotationRecv.fields.hasValue;
          *(undefined1 *)((long)&(__this->fields).AttackSpeeds + 5) = 1;
          return;
        }
      }
      else if (*(UnityEngine_ParticleSystem_o **)(lVar1 + 0x138) !=
               (UnityEngine_ParticleSystem_o *)0x0) {
        UnityEngine_ParticleSystem__Play
                  (*(UnityEngine_ParticleSystem_o **)(lVar1 + 0x138),1,(MethodInfo *)0x0);
        (__this->fields).LateUpdateHeadRotation.fields.value.fields.z =
             (float)(__this->fields).LateUpdateHeadRotationRecv.fields.hasValue;
        *(undefined1 *)((long)&(__this->fields).AttackSpeeds + 4) = 1;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BasicTitan$$Laugh
// il2cpp: void Characters_BasicTitan__Laugh (Characters_BasicTitan_o* __this, Characters_BaseCharacter_o* character, const MethodInfo* method);
// 0x4008e30

void Characters_BasicTitan__Laugh
               (Characters_BasicTitan_o *__this,Characters_BaseCharacter_o *character,
               MethodInfo *method)

{
  Photon_Pun_PhotonView_o *__this_00;
  Photon_Realtime_Player_o *targetPlayer;
  UnityEngine_Transform_o *__this_01;
  System_Object_array *parameters;
  Il2CppObject *pIVar1;
  long lVar2;
  undefined8 uVar3;
  MethodInfo *extraout_RDX;
  UnityEngine_Vector3_Fields local_38;
  
  if (DAT_05704250 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    il2cpp_init_method_metadata(&"LaughRPC");
    DAT_05704250 = '\x01';
    method = extraout_RDX;
  }
  lVar2 = *(long *)&(__this->fields).Dead;
  if ((lVar2 != 0) &&
     (__this_00 = *(Photon_Pun_PhotonView_o **)(lVar2 + 0x20),
     __this_00 != (Photon_Pun_PhotonView_o *)0x0)) {
    targetPlayer = (__this_00->fields)._Owner_k__BackingField;
    parameters = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,1,method);
    if ((character != (Characters_BaseCharacter_o *)0x0) &&
       ((lVar2 = *(long *)&(character->fields).Dead, lVar2 != 0 &&
        (__this_01 = *(UnityEngine_Transform_o **)(lVar2 + 0x10),
        __this_01 != (UnityEngine_Transform_o *)0x0)))) {
      local_38 = (UnityEngine_Vector3_Fields)
                 UnityEngine_Transform__get_position(__this_01,(MethodInfo *)0x0);
      pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_Vector3,&local_38);
      if (parameters != (System_Object_array *)0x0) {
        if (pIVar1 != (Il2CppObject *)0x0) {
          lVar2 = il2cpp_runtime_glue(pIVar1,(((parameters->obj).klass)->_1).element_class);
          if (lVar2 == 0) {
            uVar3 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
            il2cpp_glue_02274a00(uVar3,0);
          }
        }
        if ((int)parameters->max_length != 0) {
          parameters->m_Items[0] = pIVar1;
          il2cpp_runtime_glue(parameters->m_Items,pIVar1);
          Photon_Pun_PhotonView__RPC
                    (__this_00,"LaughRPC",targetPlayer,parameters,(MethodInfo *)0x0);
          return;
        }
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BasicTitan$$Distract
// il2cpp: void Characters_BasicTitan__Distract (Characters_BasicTitan_o* __this, Characters_BaseCharacter_o* character, const MethodInfo* method);
// 0x4008f80

void Characters_BasicTitan__Distract
               (Characters_BasicTitan_o *__this,Characters_BaseCharacter_o *character,
               MethodInfo *method)

{
  Photon_Pun_PhotonView_o *__this_00;
  Photon_Realtime_Player_o *targetPlayer;
  System_Object_array *parameters;
  Il2CppObject *pIVar1;
  long lVar2;
  undefined8 uVar3;
  MethodInfo *extraout_RDX;
  undefined4 local_2c;
  
  if (DAT_05704251 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&"DistractRPC");
    DAT_05704251 = '\x01';
    method = extraout_RDX;
  }
  lVar2 = *(long *)&(__this->fields).Dead;
  if ((lVar2 != 0) &&
     (__this_00 = *(Photon_Pun_PhotonView_o **)(lVar2 + 0x20),
     __this_00 != (Photon_Pun_PhotonView_o *)0x0)) {
    targetPlayer = (__this_00->fields)._Owner_k__BackingField;
    parameters = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,1,method);
    if ((character != (Characters_BaseCharacter_o *)0x0) &&
       ((lVar2 = *(long *)&(character->fields).Dead, lVar2 != 0 &&
        (lVar2 = *(long *)(lVar2 + 0x20), lVar2 != 0)))) {
      local_2c = *(undefined4 *)(lVar2 + 0x94);
      pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_2c);
      if (parameters != (System_Object_array *)0x0) {
        if (pIVar1 != (Il2CppObject *)0x0) {
          lVar2 = il2cpp_runtime_glue(pIVar1,(((parameters->obj).klass)->_1).element_class);
          if (lVar2 == 0) {
            uVar3 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
            il2cpp_glue_02274a00(uVar3,0);
          }
        }
        if ((int)parameters->max_length != 0) {
          parameters->m_Items[0] = pIVar1;
          il2cpp_runtime_glue(parameters->m_Items,pIVar1);
          Photon_Pun_PhotonView__RPC
                    (__this_00,"DistractRPC",targetPlayer,parameters,(MethodInfo *)0x0);
          return;
        }
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BasicTitan$$LaughRPC
// il2cpp: void Characters_BasicTitan__LaughRPC (Characters_BasicTitan_o* __this, UnityEngine_Vector3_o source, const MethodInfo* method);
// 0x40090c0

void Characters_BasicTitan__LaughRPC
               (Characters_BasicTitan_o *__this,UnityEngine_Vector3_o source,MethodInfo *method)

{
  long lVar1;
  UnityEngine_Transform_o *__this_00;
  Il2CppMethodPointer vtable_dispatch;
  undefined1 auVar2 [16];
  double dVar3;
  MethodInfo *method_00;
  float fVar4;
  float in_XMM0_Dc;
  float extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  float in_XMM0_Dd;
  float extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar12;
  undefined1 auVar11 [16];
  float fVar13;
  UnityEngine_Vector3_o UVar14;
  UnityEngine_Vector3_o UVar15;
  float fStack_78;
  float fStack_74;
  float fStack_28;
  float fStack_24;
  undefined8 uVar10;
  
  if (DAT_05704252 == '\0') {
    il2cpp_init_method_metadata(&"Laugh");
    DAT_05704252 = '\x01';
  }
  if ((char)(__this->fields).CustomDamage == '\0') {
    return;
  }
  lVar1 = *(long *)&(__this->fields).Dead;
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x20) != 0)) {
    if (*(char *)(*(long *)(lVar1 + 0x20) + 0x68) == '\0') {
      return;
    }
    if (*(UnityEngine_Transform_o **)(lVar1 + 0x10) != (UnityEngine_Transform_o *)0x0) {
      UVar14 = UnityEngine_Transform__get_forward
                         (*(UnityEngine_Transform_o **)(lVar1 + 0x10),(MethodInfo *)0x0);
      fVar5 = UVar14.fields.z;
      lVar1 = *(long *)&(__this->fields).Dead;
      if ((lVar1 != 0) &&
         (__this_00 = *(UnityEngine_Transform_o **)(lVar1 + 0x10),
         __this_00 != (UnityEngine_Transform_o *)0x0)) {
        UVar15 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
        if (DAT_056fde20 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Math);
          DAT_056fde20 = '\x01';
        }
        fStack_78 = source.fields.x;
        fStack_74 = source.fields.y;
        auVar11._0_4_ = fStack_78 - UVar15.fields.x;
        auVar11._4_4_ = fStack_74 - UVar15.fields.y;
        auVar11._8_4_ = in_XMM0_Dc - extraout_XMM0_Dc;
        auVar11._12_4_ = in_XMM0_Dd - extraout_XMM0_Dd;
        fVar6 = source.fields.z - UVar15.fields.z;
        if (*(int *)((long)&TypeInfo_Math[2].parameters + 4) == 0) {
          il2cpp_init_class();
        }
        uVar7 = 0;
        uVar8 = 0;
        fVar4 = fVar6 * fVar6 + auVar11._4_4_ * auVar11._4_4_ + auVar11._0_4_ * auVar11._0_4_;
        if (fVar4 < 0.0) {
          fVar4 = sqrtf(fVar4);
          uVar7 = extraout_XMM0_Dc_00;
          uVar8 = extraout_XMM0_Dd_00;
        }
        else {
          fVar4 = SQRT(fVar4);
        }
        if (1e-05 < fVar4) {
          fVar6 = fVar6 / fVar4;
          auVar2._4_4_ = fVar4;
          auVar2._0_4_ = fVar4;
          auVar2._8_4_ = uVar7;
          auVar2._12_4_ = uVar8;
          auVar11 = divps(auVar11,auVar2);
          uVar10 = auVar11._0_8_;
        }
        else {
          if (DAT_056fdd15 == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Vector3);
            DAT_056fdd15 = '\x01';
          }
          uVar10 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
          fVar6 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
        }
        if (DAT_0570266a == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Math);
          DAT_0570266a = '\x01';
        }
        fStack_28 = UVar14.fields.x;
        fStack_24 = UVar14.fields.y;
        fVar4 = fVar5 * fVar5 + fStack_24 * fStack_24 + fStack_28 * fStack_28;
        fVar9 = (float)uVar10;
        fVar12 = (float)((ulong)uVar10 >> 0x20);
        fVar13 = fVar6 * fVar6 + fVar12 * fVar12 + fVar9 * fVar9;
        if (*(int *)((long)&TypeInfo_Math[2].parameters + 4) == 0) {
          il2cpp_init_class();
        }
        if (0.0 <= fVar4 * fVar13) {
          fVar4 = SQRT(fVar4 * fVar13);
          method_00 = TypeInfo_Math;
        }
        else {
          fVar4 = sqrtf(fVar4 * fVar13);
          method_00 = TypeInfo_Math;
        }
        TypeInfo_Math = method_00;
        if (1e-15 <= fVar4) {
          fVar4 = (fVar5 * fVar6 + fVar12 * fStack_24 + fVar9 * fStack_28) / fVar4;
          fVar5 = 1.0;
          if (fVar4 <= 1.0) {
            fVar5 = fVar4;
          }
          if (*(int *)((long)&method_00[2].parameters + 4) == 0) {
            il2cpp_init_class();
          }
          dVar3 = acos((double)(float)(~-(uint)(-1.0 <= fVar4) & 0xbf800000 |
                                      (uint)fVar5 & -(uint)(-1.0 <= fVar4)),method_00);
          if (80.0 <= (float)dVar3 * 57.29578) {
            return;
          }
        }
        vtable_dispatch = (__this->klass->vtable)._70_Emote.methodPtr;
        (*vtable_dispatch)
                  (__this,"Laugh",(__this->klass->vtable)._70_Emote.method,
                   vtable_dispatch);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BasicTitan$$DistractRPC
// il2cpp: void Characters_BasicTitan__DistractRPC (Characters_BasicTitan_o* __this, int32_t viewId, const MethodInfo* method);
// 0x4009460

void Characters_BasicTitan__DistractRPC
               (Characters_BasicTitan_o *__this,int32_t viewId,MethodInfo *method)

{
  long lVar1;
  Characters_BaseCharacter_o *enemy;
  Controllers_BaseTitanAIController_o *__this_00;
  
  if (DAT_05704253 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_BaseTitanAIController_GetComponent_BaseTitanAICo);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    DAT_05704253 = '\x01';
  }
  if ((char)(__this->fields).CustomDamage == '\0') {
    return;
  }
  lVar1 = *(long *)&(__this->fields).Dead;
  if ((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x20), lVar1 != 0)) {
    if (*(char *)(lVar1 + 0x68) == '\0') {
      return;
    }
    if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
      il2cpp_init_class();
    }
    enemy = Utility_Util__FindCharacterByViewId(viewId,(MethodInfo *)0x0);
    __this_00 = (Controllers_BaseTitanAIController_o *)
                UnityEngine_Component__GetComponent<object>
                          ((UnityEngine_Component_o *)__this,MethodInfo_BaseTitanAIController_GetComponent_BaseTitanAICo);
    if (__this_00 != (Controllers_BaseTitanAIController_o *)0x0) {
      Controllers_BaseTitanAIController__SetEnemy
                (__this_00,(Characters_ITargetable_o *)enemy,10.0,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BasicTitan$$UpdateDisableArm
// il2cpp: void Characters_BasicTitan__UpdateDisableArm (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x4009510

/* WARNING: Type propagation algorithm not settling */

void Characters_BasicTitan__UpdateDisableArm(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  long lVar1;
  UnityEngine_ParticleSystem_o *pUVar2;
  bool_conflict bVar3;
  float fVar4;
  float fVar5;
  
  if (*(char *)((long)&(__this->fields).AttackSpeeds + 4) != '\0') {
    fVar5 = (__this->fields).LateUpdateHeadRotation.fields.value.fields.z;
    fVar4 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    fVar5 = fVar5 - fVar4;
    (__this->fields).LateUpdateHeadRotation.fields.value.fields.z = fVar5;
    if (2.5 < (float)(__this->fields).LateUpdateHeadRotationRecv.fields.hasValue - fVar5) {
      lVar1 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields;
      if ((lVar1 == 0) ||
         (pUVar2 = *(UnityEngine_ParticleSystem_o **)(lVar1 + 0x148),
         pUVar2 == (UnityEngine_ParticleSystem_o *)0x0)) goto LAB_040096bd;
      bVar3 = UnityEngine_ParticleSystem__get_isPlaying(pUVar2,(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        lVar1 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields;
        if ((lVar1 == 0) ||
           (pUVar2 = *(UnityEngine_ParticleSystem_o **)(lVar1 + 0x148),
           pUVar2 == (UnityEngine_ParticleSystem_o *)0x0)) goto LAB_040096bd;
        UnityEngine_ParticleSystem__Play(pUVar2,(MethodInfo *)0x0);
      }
      fVar5 = (__this->fields).LateUpdateHeadRotation.fields.value.fields.z;
    }
    if (fVar5 <= 0.0) {
      *(undefined1 *)((long)&(__this->fields).AttackSpeeds + 4) = 0;
      lVar1 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields;
      if ((lVar1 == 0) ||
         (pUVar2 = *(UnityEngine_ParticleSystem_o **)(lVar1 + 0x148),
         pUVar2 == (UnityEngine_ParticleSystem_o *)0x0)) goto LAB_040096bd;
      UnityEngine_ParticleSystem__Stop(pUVar2,(MethodInfo *)0x0);
    }
  }
  if (*(char *)((long)&(__this->fields).AttackSpeeds + 5) != '\0') {
    fVar5 = (__this->fields).LateUpdateHeadRotation.fields.value.fields.w;
    fVar4 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    fVar5 = fVar5 - fVar4;
    (__this->fields).LateUpdateHeadRotation.fields.value.fields.w = fVar5;
    if (2.5 < (float)(__this->fields).LateUpdateHeadRotationRecv.fields.hasValue - fVar5) {
      lVar1 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields;
      if ((lVar1 == 0) ||
         (pUVar2 = *(UnityEngine_ParticleSystem_o **)(lVar1 + 0x150),
         pUVar2 == (UnityEngine_ParticleSystem_o *)0x0)) goto LAB_040096bd;
      bVar3 = UnityEngine_ParticleSystem__get_isPlaying(pUVar2,(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        lVar1 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields;
        if ((lVar1 == 0) ||
           (pUVar2 = *(UnityEngine_ParticleSystem_o **)(lVar1 + 0x150),
           pUVar2 == (UnityEngine_ParticleSystem_o *)0x0)) goto LAB_040096bd;
        UnityEngine_ParticleSystem__Play(pUVar2,(MethodInfo *)0x0);
      }
      fVar5 = (__this->fields).LateUpdateHeadRotation.fields.value.fields.w;
    }
    if (fVar5 <= 0.0) {
      *(undefined1 *)((long)&(__this->fields).AttackSpeeds + 5) = 0;
      lVar1 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields;
      if ((lVar1 != 0) &&
         (pUVar2 = *(UnityEngine_ParticleSystem_o **)(lVar1 + 0x150),
         pUVar2 != (UnityEngine_ParticleSystem_o *)0x0)) {
        UnityEngine_ParticleSystem__Stop(pUVar2,(MethodInfo *)0x0);
        return;
      }
LAB_040096bd:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  return;
}


// Characters.BasicTitan$$Run
// il2cpp: void Characters_BasicTitan__Run (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x40096d0

void Characters_BasicTitan__Run(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  long lVar1;
  Characters_BaseHitbox_o *pCVar2;
  bool_conflict bVar3;
  
  (__this->fields).CurrentSpeed = 0.0;
  Characters_BaseTitan__StateActionWithTime
            ((Characters_BaseTitan_o *)__this,1,(System_String_o *)(__this->fields).AttackAnimations
             ,0.0,0.5,1,(MethodInfo *)0x0);
  if (*(char *)&(__this->fields)._rootMotionAnimations == '\0') {
    return;
  }
  lVar1 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields;
  if ((lVar1 != 0) &&
     (pCVar2 = *(Characters_BaseHitbox_o **)(lVar1 + 0x108),
     pCVar2 != (Characters_BaseHitbox_o *)0x0)) {
    bVar3 = Characters_BaseHitbox__IsActive(pCVar2,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      return;
    }
    lVar1 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields;
    if ((lVar1 != 0) &&
       (pCVar2 = *(Characters_BaseHitbox_o **)(lVar1 + 0x108),
       pCVar2 != (Characters_BaseHitbox_o *)0x0)) {
      Characters_BaseHitbox__Activate(pCVar2,0.0,0.0,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BasicTitan$$WallClimb
// il2cpp: void Characters_BasicTitan__WallClimb (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x4009760

void Characters_BasicTitan__WallClimb(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  long lVar1;
  char cVar2;
  
  cVar2 = (*(__this->klass->vtable)._111_get_CanWallClimb.methodPtr)
                    (__this,(__this->klass->vtable)._111_get_CanWallClimb.method);
  if ((cVar2 != '\0') && ((__this->fields)._jumpDirection.fields.z <= 0.0)) {
    (__this->fields)._jumpDirection.fields.z = (float)(__this->fields).IsWalk;
    (__this->fields).CurrentSpeed = 0.0;
    lVar1 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields.z;
    if (lVar1 != 0) {
      Characters_BaseTitan__StateActionWithTime
                ((Characters_BaseTitan_o *)__this,0x19,*(System_String_o **)(lVar1 + 0x18),0.0,0.1,1
                 ,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return;
}


// Characters.BasicTitan$$Jump
// il2cpp: void Characters_BasicTitan__Jump (Characters_BasicTitan_o* __this, UnityEngine_Vector3_o direction, const MethodInfo* method);
// 0x40097e0

void Characters_BasicTitan__Jump
               (Characters_BasicTitan_o *__this,UnityEngine_Vector3_o direction,MethodInfo *method)

{
  long lVar1;
  long *plVar2;
  Characters_AnimationHandler_o *__this_00;
  System_String_o *pSVar3;
  float fVar4;
  
  if (DAT_05704254 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TitanSounds);
    DAT_05704254 = '\x01';
  }
  *(long *)&(__this->fields)._wallClimbForward.fields.z = direction.fields._0_8_;
  (__this->fields)._turnStartRotation.fields.y = direction.fields.z;
  if (*(char *)&(__this->fields)._rootMotionAnimations == '\0') {
    plVar2 = *(long **)&(__this->fields)._furthestCoreLocalPosition.fields.z;
    if (plVar2 != (long *)0x0) {
      __this_00 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
      pSVar3 = (System_String_o *)
               (**(code **)(*plVar2 + 0x1b8))(plVar2,*(undefined8 *)(*plVar2 + 0x1c0));
      if (__this_00 != (Characters_AnimationHandler_o *)0x0) {
        fVar4 = Characters_AnimationHandler__GetLength(__this_00,pSVar3,(MethodInfo *)0x0);
        plVar2 = *(long **)&(__this->fields).TurnPause;
        if (plVar2 != (long *)0x0) {
          pSVar3 = (System_String_o *)
                   (**(code **)(*plVar2 + 0x1b8))(plVar2,*(undefined8 *)(*plVar2 + 0x1c0));
          Characters_BaseTitan__StateActionWithTime
                    ((Characters_BaseTitan_o *)__this,4,pSVar3,fVar4 * 0.5,0.1,1,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_TitanSounds + 0xe4) == 0) {
            il2cpp_init_class();
          }
          Characters_BaseCharacter__PlaySound
                    ((Characters_BaseCharacter_o *)__this,
                     *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x138),(MethodInfo *)0x0
                    );
          return;
        }
      }
    }
  }
  else {
    lVar1 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields.z;
    if (lVar1 != 0) {
      Characters_BaseTitan__StateAction
                ((Characters_BaseTitan_o *)__this,4,*(System_String_o **)(lVar1 + 0x28),0.1,1,
                 (MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BasicTitan$$StunDirectional
// il2cpp: void Characters_BasicTitan__StunDirectional (Characters_BasicTitan_o* __this, bool left, const MethodInfo* method);
// 0x4009940

void Characters_BasicTitan__StunDirectional
               (Characters_BasicTitan_o *__this,bool_conflict left,MethodInfo *method)

{
  long lVar1;
  char cVar2;
  
  cVar2 = (*(__this->klass->vtable)._125_CanStun.methodPtr)
                    (__this,(__this->klass->vtable)._125_CanStun.method);
  if (cVar2 == '\0') {
    return;
  }
  lVar1 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields.z;
  if (lVar1 != 0) {
    Characters_BaseTitan__StateActionWithTime
              ((Characters_BaseTitan_o *)__this,0xd,
               *(System_String_o **)(lVar1 + 0x40 + (ulong)(byte)((byte)left ^ 1) * 8),
               (float)(__this->fields).IsSprint,0.1,1,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BasicTitan$$StartJump
// il2cpp: void Characters_BasicTitan__StartJump (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x40099b0

void Characters_BasicTitan__StartJump(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  long lVar1;
  Characters_BaseHitbox_o *__this_00;
  
  Characters_BaseTitan__StartJump((Characters_BaseTitan_o *)__this,(MethodInfo *)0x0);
  lVar1 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields;
  if ((lVar1 != 0) &&
     (__this_00 = *(Characters_BaseHitbox_o **)(lVar1 + 0x80),
     __this_00 != (Characters_BaseHitbox_o *)0x0)) {
    Characters_BaseHitbox__Activate(__this_00,0.0,0.0,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BasicTitan$$JumpImmediate
// il2cpp: void Characters_BasicTitan__JumpImmediate (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x40099f0

void Characters_BasicTitan__JumpImmediate(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  long *plVar1;
  System_String_o *animation;
  
  (*(__this->klass->vtable)._127_StartJump.methodPtr)
            (__this,(__this->klass->vtable)._127_StartJump.method);
  plVar1 = *(long **)&(__this->fields)._furthestCoreLocalPosition.fields.z;
  if (plVar1 != (long *)0x0) {
    animation = (System_String_o *)
                (**(code **)(*plVar1 + 0x1b8))(plVar1,*(undefined8 *)(*plVar1 + 0x1c0));
    Characters_BaseCharacter__CrossFade
              ((Characters_BaseCharacter_o *)__this,animation,0.1,0.85,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BasicTitan$$Eat
// il2cpp: void Characters_BasicTitan__Eat (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x4009a50

void Characters_BasicTitan__Eat(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  Characters_BaseTitanComponentCache_o *x;
  long lVar1;
  bool_conflict bVar2;
  
  if (DAT_05704255 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704255 = '\x01';
  }
  x = (__this->fields).BaseTitanCache;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    return;
  }
  lVar1 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields.z;
  if (lVar1 != 0) {
    Characters_BaseTitan__StateAction
              ((Characters_BaseTitan_o *)__this,0x17,
               *(System_String_o **)
                (lVar1 + 0x170 +
                (ulong)(*(char *)&(__this->fields).TitanColliderToggler == '\0') * 8),0.1,1,
               (MethodInfo *)0x0);
    (*(__this->klass->vtable)._169_GrabGrunt.methodPtr)
              (0x3f800000,__this,(__this->klass->vtable)._169_GrabGrunt.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BasicTitan$$Land
// il2cpp: void Characters_BasicTitan__Land (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x4009b20

void Characters_BasicTitan__Land(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  UnityEngine_Transform_o *__this_00;
  System_String_o *pSVar6;
  float fVar7;
  UnityEngine_Vector3_o UVar8;
  UnityEngine_Vector3_o position;
  UnityEngine_Quaternion_o rotation;
  undefined8 uStack_48;
  
  if (DAT_05704256 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EffectPrefabs);
    DAT_05704256 = '\x01';
  }
  if (*(char *)&(__this->fields)._rootMotionAnimations == '\0') {
    plVar5 = *(long **)&(__this->fields).TurnPause;
    if (plVar5 == (long *)0x0) goto LAB_04009ce4;
    pSVar6 = (System_String_o *)
             (**(code **)(*plVar5 + 0x1d8))(plVar5,*(undefined8 *)(*plVar5 + 0x1e0));
  }
  else {
    lVar4 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields.z;
    if (lVar4 == 0) goto LAB_04009ce4;
    pSVar6 = *(System_String_o **)(lVar4 + 0x38);
  }
  Characters_BaseTitan__StateAction
            ((Characters_BaseTitan_o *)__this,9,pSVar6,0.1,1,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_EffectPrefabs + 0xe4) == 0) {
    il2cpp_init_class();
  }
  lVar4 = *(long *)&(__this->fields).Dead;
  if ((lVar4 != 0) &&
     (__this_00 = *(UnityEngine_Transform_o **)(lVar4 + 0x10),
     __this_00 != (UnityEngine_Transform_o *)0x0)) {
    pSVar6 = *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x60);
    UVar8 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
    if (DAT_0570266b == '\0') {
      il2cpp_init_method_metadata();
      DAT_0570266b = '\x01';
    }
    uVar3 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x24);
    fVar1 = (__this->fields)._turnTargetRotation.fields.x;
    position.fields.z = UVar8.fields.z + fVar1 * *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x2c);
    rotation = UnityEngine_Quaternion__Internal_FromEulerRad
                         ((UnityEngine_Vector3_o)ZEXT812(0x4096cbe4),(MethodInfo *)0x0);
    fVar2 = *(float *)((long)&(__this->fields).TitanColliderToggler + 4);
    fVar7 = (float)(*(__this->klass->vtable)._117_get_SizeMultiplier.methodPtr)
                             (__this,(__this->klass->vtable)._117_get_SizeMultiplier.method);
    position.fields.x = UVar8.fields.x + fVar1 * (float)uVar3;
    position.fields.y = UVar8.fields.y + fVar1 * (float)((ulong)uVar3 >> 0x20);
    Effects_EffectSpawner__Spawn
              (pSVar6,position,rotation,fVar2 * fVar7,1,(System_Object_array *)0x0,(MethodInfo *)0x0
              );
    return;
  }
LAB_04009ce4:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BasicTitan$$Fall
// il2cpp: void Characters_BasicTitan__Fall (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x4009cf0

void Characters_BasicTitan__Fall(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  long lVar1;
  long *plVar2;
  System_String_o *animation;
  
  if (*(char *)&(__this->fields)._rootMotionAnimations == '\0') {
    plVar2 = *(long **)&(__this->fields).TurnPause;
    if (plVar2 != (long *)0x0) {
      animation = (System_String_o *)
                  (**(code **)(*plVar2 + 0x1c8))(plVar2,*(undefined8 *)(*plVar2 + 0x1d0));
      Characters_BaseTitan__StateActionWithTime
                ((Characters_BaseTitan_o *)__this,7,animation,0.0,0.1,1,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    lVar1 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields.z;
    if (lVar1 != 0) {
      Characters_BaseTitan__StateActionWithTime
                ((Characters_BaseTitan_o *)__this,7,*(System_String_o **)(lVar1 + 0x30),0.0,0.1,1,
                 (MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BasicTitan$$Idle
// il2cpp: void Characters_BasicTitan__Idle (Characters_BasicTitan_o* __this, float fadeTime, const MethodInfo* method);
// 0x4009d80

void Characters_BasicTitan__Idle(Characters_BasicTitan_o *__this,float fadeTime,MethodInfo *method)

{
  long *plVar1;
  System_String_o *animation;
  
  plVar1 = *(long **)&(__this->fields)._furthestCoreLocalPosition.fields.z;
  if (plVar1 != (long *)0x0) {
    if (*(char *)&(__this->fields)._rootMotionAnimations == '\0') {
      animation = (System_String_o *)
                  (**(code **)(*plVar1 + 0x178))(plVar1,*(undefined8 *)(*plVar1 + 0x180));
    }
    else {
      animation = (System_String_o *)plVar1[4];
    }
    Characters_BaseTitan__StateActionWithTime
              ((Characters_BaseTitan_o *)__this,0,animation,0.0,fadeTime,1,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BasicTitan$$Turn
// il2cpp: void Characters_BasicTitan__Turn (Characters_BasicTitan_o* __this, UnityEngine_Vector3_o targetDirection, const MethodInfo* method);
// 0x4009df0

void Characters_BasicTitan__Turn
               (Characters_BasicTitan_o *__this,UnityEngine_Vector3_o targetDirection,
               MethodInfo *method)

{
  long lVar1;
  long *plVar2;
  UnityEngine_Transform_o *__this_00;
  Characters_AnimationHandler_o *pCVar3;
  char cVar4;
  System_String_o *name;
  float fVar5;
  float fVar6;
  UnityEngine_Vector3_o UVar7;
  UnityEngine_Quaternion_o UVar8;
  
  cVar4 = (*(__this->klass->vtable)._123_CanAction.methodPtr)();
  if (cVar4 == '\0') {
    return;
  }
  fVar5 = Characters_BaseCharacter__GetAngleToTarget
                    ((Characters_BaseCharacter_o *)__this,targetDirection,(MethodInfo *)0x0);
  if (*(char *)&(__this->fields)._rootMotionAnimations == '\0') {
    plVar2 = *(long **)&(__this->fields).TurnPause;
    if (plVar2 == (long *)0x0) goto LAB_04009fd8;
    lVar1 = *plVar2;
    if (fVar5 <= 0.0) {
      name = (System_String_o *)(**(code **)(lVar1 + 0x268))();
      lVar1._0_4_ = (__this->fields).Dead;
      lVar1._4_4_ = (__this->fields).CustomDamageEnabled;
    }
    else {
      name = (System_String_o *)(**(code **)(lVar1 + 0x278))();
      lVar1._0_4_ = (__this->fields).Dead;
      lVar1._4_4_ = (__this->fields).CustomDamageEnabled;
    }
  }
  else {
    lVar1 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields.z;
    if (lVar1 == 0) goto LAB_04009fd8;
    if (fVar5 <= 0.0) {
      name = *(System_String_o **)(lVar1 + 0x200);
      lVar1._0_4_ = (__this->fields).Dead;
      lVar1._4_4_ = (__this->fields).CustomDamageEnabled;
    }
    else {
      name = *(System_String_o **)(lVar1 + 0x208);
      lVar1._0_4_ = (__this->fields).Dead;
      lVar1._4_4_ = (__this->fields).CustomDamageEnabled;
    }
  }
  if ((lVar1 != 0) &&
     (*(UnityEngine_Transform_o **)(lVar1 + 0x10) != (UnityEngine_Transform_o *)0x0)) {
    UVar7 = UnityEngine_Transform__get_forward
                      (*(UnityEngine_Transform_o **)(lVar1 + 0x10),(MethodInfo *)0x0);
    UVar7 = UnityEngine_Vector3__RotateTowards
                      (UVar7,targetDirection,2.0943952,3.4028235e+38,(MethodInfo *)0x0);
    lVar1 = *(long *)&(__this->fields).Dead;
    if ((lVar1 != 0) &&
       (__this_00 = *(UnityEngine_Transform_o **)(lVar1 + 0x10),
       __this_00 != (UnityEngine_Transform_o *)0x0)) {
      UVar8 = UnityEngine_Transform__get_rotation(__this_00,(MethodInfo *)0x0);
      (__this->fields).TurnSpeed = UVar8.fields.x;
      (__this->fields).LeftArmDisabled = (bool_conflict)UVar8.fields.y;
      (__this->fields).RightArmDisabled = (bool_conflict)UVar8.fields.z;
      (__this->fields).LastTargetDirection.fields.x = UVar8.fields.w;
      UVar8 = UnityEngine_Quaternion__LookRotation(UVar7,(MethodInfo *)0x0);
      *(UnityEngine_Quaternion_Fields *)&(__this->fields).LastTargetDirection.fields.y =
           UVar8.fields;
      (__this->fields)._turnStartRotation.fields.w = 0.0;
      pCVar3 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
      if (pCVar3 != (Characters_AnimationHandler_o *)0x0) {
        fVar5 = Characters_AnimationHandler__GetLength(pCVar3,name,(MethodInfo *)0x0);
        pCVar3 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
        if (pCVar3 != (Characters_AnimationHandler_o *)0x0) {
          fVar6 = Characters_AnimationHandler__GetSpeed(pCVar3,name,(MethodInfo *)0x0);
          fVar6 = (fVar5 * 0.71) / fVar6;
          (__this->fields)._turnStartRotation.fields.z = fVar6;
          Characters_BaseTitan__StateActionWithTime
                    ((Characters_BaseTitan_o *)__this,0x18,name,fVar6,0.1,1,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_04009fd8:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BasicTitan$$MarkDeadRPC
// il2cpp: void Characters_BasicTitan__MarkDeadRPC (Characters_BasicTitan_o* __this, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x4009fe0

void Characters_BasicTitan__MarkDeadRPC
               (Characters_BasicTitan_o *__this,Photon_Pun_PhotonMessageInfo_o info,
               MethodInfo *method)

{
  long lVar1;
  UnityEngine_ParticleSystem_o *__this_00;
  
  if (DAT_05704257 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    DAT_05704257 = '\x01';
  }
  lVar1 = *(long *)&(__this->fields).Dead;
  if ((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x20), lVar1 != 0)) {
    if (info.fields.Sender != *(Photon_Realtime_Player_o **)(lVar1 + 0x80)) {
      return;
    }
    *(undefined1 *)&(__this->fields).FeedVictimName = 1;
    lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x18);
    if ((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 200), lVar1 != 0)) {
      if (*(char *)(lVar1 + 0x11) == '\0') {
        return;
      }
      lVar1 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields;
      if ((lVar1 != 0) &&
         (__this_00 = *(UnityEngine_ParticleSystem_o **)(lVar1 + 0x158),
         __this_00 != (UnityEngine_ParticleSystem_o *)0x0)) {
        UnityEngine_ParticleSystem__Play(__this_00,1,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BasicTitan$$WaitAndDie
// il2cpp: System_Collections_IEnumerator_o* Characters_BasicTitan__WaitAndDie (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x400a090

System_Collections_IEnumerator_o *
Characters_BasicTitan__WaitAndDie(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_05704258 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_WaitAndDie_d__60);
    DAT_05704258 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitAndDie_d__60);
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


// Characters.BasicTitan$$Awake
// il2cpp: void Characters_BasicTitan__Awake (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x400a120

void Characters_BasicTitan__Awake(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  long *plVar1;
  Characters_AnimationHandler_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  Il2CppObject *pIVar2;
  System_String_o *name;
  
  if (DAT_05704259 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_BasicTitanSetup_AddComponent_BasicTitanSetup);
    DAT_05704259 = '\x01';
  }
  Characters_BaseTitan__Awake((Characters_BaseTitan_o *)__this,(MethodInfo *)0x0);
  __this_01 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
    pIVar2 = UnityEngine_GameObject__AddComponent<object>(__this_01,MethodInfo_BasicTitanSetup_AddComponent_BasicTitanSetup);
    *(Il2CppObject **)&(__this->fields).EnableAI = pIVar2;
    il2cpp_runtime_glue(&(__this->fields).EnableAI,pIVar2);
    plVar1 = *(long **)&(__this->fields)._furthestCoreLocalPosition.fields.z;
    if (plVar1 != (long *)0x0) {
      __this_00 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
      name = (System_String_o *)
             (**(code **)(*plVar1 + 0x1b8))(plVar1,*(undefined8 *)(*plVar1 + 0x1c0));
      if (__this_00 != (Characters_AnimationHandler_o *)0x0) {
        Characters_AnimationHandler__SetSpeed(__this_00,name,2.0,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BasicTitan$$GetHitRPC
// il2cpp: void Characters_BasicTitan__GetHitRPC (Characters_BasicTitan_o* __this, int32_t viewId, System_String_o* name, int32_t damage, System_String_o* type, System_String_o* collider, const MethodInfo* method);
// 0x400a1d0

void Characters_BasicTitan__GetHitRPC
               (Characters_BasicTitan_o *__this,int32_t viewId,System_String_o *name,int32_t damage,
               System_String_o *type,System_String_o *collider,MethodInfo *method)

{
  long lVar1;
  UnityEngine_Transform_o *pUVar2;
  System_Action_Hashtable__o *pSVar3;
  UnityEngine_Object_o *pUVar4;
  long lVar5;
  UnityEngine_Transform_o *__this_00;
  System_DelegateData_o *__this_01;
  undefined1 auVar6 [16];
  bool_conflict bVar7;
  Characters_BaseCharacter_o *x;
  System_String_o *pSVar8;
  Characters_BasicTitan_c *pCVar9;
  Il2CppMethodPointer vtable_dispatch;
  MethodInfo *pMVar10;
  undefined8 uVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 extraout_var [12];
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  UnityEngine_Vector3_o UVar17;
  UnityEngine_Vector3_o UVar18;
  int32_t iStack_84;
  float fStack_68;
  
  if (DAT_0570425a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    il2cpp_init_method_metadata(&"Rock");
    il2cpp_init_method_metadata(&"TitanStun");
    il2cpp_init_method_metadata(&"CannonBall");
    il2cpp_init_method_metadata(&"ShifterStun");
    DAT_0570425a = '\x01';
  }
  if (*(char *)&(__this->fields).FeedVictimName != '\0') {
    return;
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
  if (lVar1 == 0) goto LAB_0400a902;
  lVar1 = *(long *)(lVar1 + 0x50);
  bVar7 = System_String__op_Equality(type,"CannonBall",(MethodInfo *)0x0);
  iStack_84 = damage;
  if (((char)bVar7 != '\0') ||
     (bVar7 = System_String__op_Equality(type,"Rock",(MethodInfo *)0x0), (char)bVar7 != '\0'))
  goto LAB_0400a2de;
  if ((lVar1 == 0) || (*(long *)(lVar1 + 0x88) == 0)) goto LAB_0400a902;
  if (*(char *)(*(long *)(lVar1 + 0x88) + 0x11) != '\0') {
    if (*(char *)&(__this->fields)._rootMotionAnimations != '\0') {
      if (*(long *)(lVar1 + 0x90) == 0) goto LAB_0400a902;
      if (*(char *)(*(long *)(lVar1 + 0x90) + 0x11) == '\0') goto LAB_0400a353;
    }
    if (*(long *)(lVar1 + 0x98) == 0) goto LAB_0400a902;
    if (damage < *(int *)(*(long *)(lVar1 + 0x98) + 0x14)) {
      iStack_84 = 0;
    }
  }
LAB_0400a353:
  bVar7 = System_String__op_Equality(type,"TitanStun",(MethodInfo *)0x0);
  if (((char)bVar7 == '\0') &&
     (bVar7 = System_String__op_Equality(type,"ShifterStun",(MethodInfo *)0x0), (char)bVar7 == '\0'))
  {
    pSVar3 = (__this->fields).OnPlayerPropertiesChanged;
    if (pSVar3 == (System_Action_Hashtable__o *)0x0) goto LAB_0400a902;
    pUVar4 = (UnityEngine_Object_o *)pSVar3[1].fields.method_code;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar7 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar7 != '\0') {
      pSVar3 = (__this->fields).OnPlayerPropertiesChanged;
      if ((pSVar3 == (System_Action_Hashtable__o *)0x0) ||
         (pUVar4 = (UnityEngine_Object_o *)pSVar3[1].fields.method_code,
         pUVar4 == (UnityEngine_Object_o *)0x0)) goto LAB_0400a902;
      pSVar8 = UnityEngine_Object__get_name(pUVar4,(MethodInfo *)0x0);
      bVar7 = System_String__op_Equality(collider,pSVar8,(MethodInfo *)0x0);
      if ((char)bVar7 != '\0') {
        (*(__this->klass->vtable)._144_Blind.methodPtr)
                  (__this,(__this->klass->vtable)._144_Blind.method);
        return;
      }
    }
    pSVar3 = (__this->fields).OnPlayerPropertiesChanged;
    if (pSVar3 == (System_Action_Hashtable__o *)0x0) goto LAB_0400a902;
    pUVar4 = (UnityEngine_Object_o *)pSVar3[1].fields.interp_method;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar7 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar7 != '\0') {
      pSVar3 = (__this->fields).OnPlayerPropertiesChanged;
      if ((pSVar3 == (System_Action_Hashtable__o *)0x0) ||
         (pUVar4 = (UnityEngine_Object_o *)pSVar3[1].fields.interp_method,
         pUVar4 == (UnityEngine_Object_o *)0x0)) goto LAB_0400a902;
      pSVar8 = UnityEngine_Object__get_name(pUVar4,(MethodInfo *)0x0);
      bVar7 = System_String__op_Equality(collider,pSVar8,(MethodInfo *)0x0);
      if ((char)bVar7 == '\0') {
        pSVar3 = (__this->fields).OnPlayerPropertiesChanged;
        if ((pSVar3 == (System_Action_Hashtable__o *)0x0) ||
           (pUVar4 = (UnityEngine_Object_o *)pSVar3[1].fields.interp_invoke_impl,
           pUVar4 == (UnityEngine_Object_o *)0x0)) goto LAB_0400a902;
        pSVar8 = UnityEngine_Object__get_name(pUVar4,(MethodInfo *)0x0);
        bVar7 = System_String__op_Equality(collider,pSVar8,(MethodInfo *)0x0);
        if ((char)bVar7 == '\0') goto LAB_0400a6cd;
      }
      pCVar9 = __this->klass;
LAB_0400a885:
      (*(pCVar9->vtable)._145_Cripple.methodPtr)(__this,(pCVar9->vtable)._145_Cripple.method);
      return;
    }
LAB_0400a6cd:
    lVar1 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields;
    if ((lVar1 == 0) ||
       (pUVar4 = *(UnityEngine_Object_o **)(lVar1 + 0x128), pUVar4 == (UnityEngine_Object_o *)0x0))
    goto LAB_0400a902;
    pSVar8 = UnityEngine_Object__get_name(pUVar4,(MethodInfo *)0x0);
    bVar7 = System_String__op_Equality(collider,pSVar8,(MethodInfo *)0x0);
    if ((char)bVar7 != '\0') {
      pCVar9 = __this->klass;
      if (*(char *)&(__this->fields)._rootMotionAnimations == '\0') {
        vtable_dispatch = (pCVar9->vtable)._153_DisableArm.methodPtr;
        pMVar10 = (pCVar9->vtable)._153_DisableArm.method;
        uVar11 = 1;
LAB_0400a8f2:
        (*vtable_dispatch)(__this,uVar11,pMVar10,vtable_dispatch);
        return;
      }
      goto LAB_0400a885;
    }
    lVar1 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields;
    if ((lVar1 == 0) ||
       (pUVar4 = *(UnityEngine_Object_o **)(lVar1 + 0x130), pUVar4 == (UnityEngine_Object_o *)0x0))
    goto LAB_0400a902;
    pSVar8 = UnityEngine_Object__get_name(pUVar4,(MethodInfo *)0x0);
    bVar7 = System_String__op_Equality(collider,pSVar8,(MethodInfo *)0x0);
    if ((char)bVar7 != '\0') {
      pCVar9 = __this->klass;
      if (*(char *)&(__this->fields)._rootMotionAnimations == '\0') {
        vtable_dispatch = (pCVar9->vtable)._153_DisableArm.methodPtr;
        pMVar10 = (pCVar9->vtable)._153_DisableArm.method;
        uVar11 = 0;
        goto LAB_0400a8f2;
      }
      goto LAB_0400a885;
    }
    pSVar3 = (__this->fields).OnPlayerPropertiesChanged;
    if ((pSVar3 == (System_Action_Hashtable__o *)0x0) ||
       (__this_01 = (pSVar3->fields).data, __this_01 == (System_DelegateData_o *)0x0))
    goto LAB_0400a902;
    pSVar8 = UnityEngine_Object__get_name((UnityEngine_Object_o *)__this_01,(MethodInfo *)0x0);
    bVar7 = System_String__op_Equality(collider,pSVar8,(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      return;
    }
    goto LAB_0400a2de;
  }
  if (*(char *)&(__this->fields)._rootMotionAnimations != '\0') goto LAB_0400a2de;
  if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
    il2cpp_init_class();
  }
  x = Utility_Util__FindCharacterByViewId(viewId,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar7 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
    (*(__this->klass->vtable)._179_StunDirectional.methodPtr)
              (__this,1,(__this->klass->vtable)._179_StunDirectional.method);
    goto LAB_0400a2de;
  }
  if (((x == (Characters_BaseCharacter_o *)0x0) || (lVar1 = *(long *)&(x->fields).Dead, lVar1 == 0))
     || (pUVar2 = *(UnityEngine_Transform_o **)(lVar1 + 0x10),
        pUVar2 == (UnityEngine_Transform_o *)0x0)) goto LAB_0400a902;
  UVar17 = UnityEngine_Transform__get_position(pUVar2,(MethodInfo *)0x0);
  lVar1 = *(long *)&(__this->fields).Dead;
  if ((lVar1 == 0) ||
     (pUVar2 = *(UnityEngine_Transform_o **)(lVar1 + 0x10), pUVar2 == (UnityEngine_Transform_o *)0x0
     )) goto LAB_0400a902;
  UVar18 = UnityEngine_Transform__get_position(pUVar2,(MethodInfo *)0x0);
  lVar1 = *(long *)&(__this->fields).Dead;
  if (lVar1 == 0) goto LAB_0400a902;
  pUVar2 = *(UnityEngine_Transform_o **)(lVar1 + 0x10);
  fStack_68 = UVar17.fields.x;
  if (DAT_056fde20 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056fde20 = '\x01';
  }
  fStack_68 = fStack_68 - UVar18.fields.x;
  fVar14 = UVar17.fields.z - UVar18.fields.z;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_init_class();
  }
  fVar12 = fVar14 * fVar14 + fStack_68 * fStack_68 + 0.0;
  if (fVar12 < 0.0) {
    fVar12 = sqrtf(fVar12);
    uVar15 = extraout_var._4_4_;
    uVar16 = extraout_var._8_4_;
    if (1e-05 < fVar12) goto LAB_0400a516;
LAB_0400a762:
    if (DAT_056fdd15 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fdd15 = '\x01';
    }
    auVar13._8_8_ = 0;
    auVar13._0_8_ = **(ulong **)(TypeInfo_Vector3 + 0xb8);
    fVar14 = *(float *)(*(ulong **)(TypeInfo_Vector3 + 0xb8) + 1);
  }
  else {
    uVar15 = 0;
    uVar16 = 0;
    fVar12 = SQRT(fVar12);
    if (fVar12 <= 1e-05) goto LAB_0400a762;
LAB_0400a516:
    fVar14 = fVar14 / fVar12;
    auVar6._4_4_ = fVar12;
    auVar6._0_4_ = fVar12;
    auVar6._8_4_ = uVar15;
    auVar6._12_4_ = uVar16;
    auVar13 = divps(ZEXT416((uint)fStack_68),auVar6);
  }
  if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
    UVar17.fields._0_8_ = auVar13._0_8_;
    UVar17.fields.z = fVar14;
    UnityEngine_Transform__set_forward(pUVar2,UVar17,(MethodInfo *)0x0);
    lVar1 = *(long *)&(__this->fields).Dead;
    if (((lVar1 != 0) && (lVar5 = *(long *)&(x->fields).Dead, lVar5 != 0)) &&
       (pUVar2 = *(UnityEngine_Transform_o **)(lVar5 + 0x10),
       pUVar2 != (UnityEngine_Transform_o *)0x0)) {
      __this_00 = *(UnityEngine_Transform_o **)(lVar1 + 0x10);
      UVar17 = UnityEngine_Transform__get_position(pUVar2,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_Transform_o *)0x0) {
        UVar17 = UnityEngine_Transform__InverseTransformPoint(__this_00,UVar17,(MethodInfo *)0x0);
        (*(__this->klass->vtable)._179_StunDirectional.methodPtr)
                  (__this,(ulong)(UVar17.fields.x < 0.0),
                   (__this->klass->vtable)._179_StunDirectional.method);
LAB_0400a2de:
        Characters_BaseCharacter__GetHitRPC
                  ((Characters_BaseCharacter_o *)__this,viewId,name,iStack_84,type,collider,
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_0400a902:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BasicTitan$$Kick
// il2cpp: void Characters_BasicTitan__Kick (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x400a910

void Characters_BasicTitan__Kick(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  
  if (DAT_0570425b == '\0') {
    il2cpp_init_method_metadata(&"AttackKick");
    DAT_0570425b = '\x01';
  }
  vtable_dispatch = (__this->klass->vtable)._128_Attack.methodPtr;
  (*vtable_dispatch)
            (__this,"AttackKick",(__this->klass->vtable)._128_Attack.method,vtable_dispatch);
  return;
}


// Characters.BasicTitan$$Attack
// il2cpp: void Characters_BasicTitan__Attack (Characters_BasicTitan_o* __this, System_String_o* attack, const MethodInfo* method);
// 0x400a960

void Characters_BasicTitan__Attack
               (Characters_BasicTitan_o *__this,System_String_o *attack,MethodInfo *method)

{
  long lVar1;
  UnityEngine_Rigidbody_o *pUVar2;
  System_String_o *pSVar3;
  long *plVar4;
  UnityEngine_Transform_o *pUVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  System_Nullable_Quaternion__o *pSVar8;
  char cVar9;
  bool_conflict bVar10;
  System_String_o *b;
  undefined8 *puVar11;
  Il2CppMethodPointer vtable_dispatch;
  MethodInfo *pMVar12;
  long lVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 uVar19;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  float in_XMM1_Da;
  float fVar20;
  float fVar21;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar27;
  UnityEngine_Vector3_o UVar28;
  UnityEngine_Vector3_o UVar29;
  float local_88;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 auVar22 [16];
  undefined1 auVar26 [16];
  
  if (DAT_0570425c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ITargetable);
    il2cpp_init_method_metadata(&"AttackBellyFlop");
    il2cpp_init_method_metadata(&"AttackRockThrow");
    DAT_0570425c = '\x01';
  }
  if ((*(char *)((long)&(__this->fields).Animation + 4) == '\0') &&
     ((bVar10 = System_String__op_Equality(attack,"AttackBellyFlop",(MethodInfo *)0x0),
      (char)bVar10 != '\0' ||
      (bVar10 = System_String__op_Equality(attack,"AttackRockThrow",(MethodInfo *)0x0),
      (char)bVar10 != '\0')))) {
    return;
  }
  if ((char)(__this->fields).CustomDamage == '\0') {
    lVar1 = *(long *)&(__this->fields).Dead;
    if ((lVar1 == 0) ||
       (pUVar2 = *(UnityEngine_Rigidbody_o **)(lVar1 + 0x18),
       pUVar2 == (UnityEngine_Rigidbody_o *)0x0)) goto LAB_0400b487;
    UVar28 = UnityEngine_Rigidbody__get_velocity(pUVar2,(MethodInfo *)0x0);
    lVar1 = *(long *)&(__this->fields).Dead;
    if ((lVar1 == 0) ||
       (pUVar2 = *(UnityEngine_Rigidbody_o **)(lVar1 + 0x18),
       pUVar2 == (UnityEngine_Rigidbody_o *)0x0)) goto LAB_0400b487;
    UVar29 = UnityEngine_Rigidbody__get_velocity(pUVar2,(MethodInfo *)0x0);
    in_XMM1_Da = UVar29.fields.z;
    local_88 = UVar28.fields.x;
    *(float *)&(__this->fields).field_0x21c = local_88;
    *(undefined4 *)&(__this->fields)._currentAttackAnimation = 0;
    *(float *)((long)&(__this->fields)._currentAttackAnimation + 4) = in_XMM1_Da;
  }
  (*(__this->klass->vtable)._130_ResetAttackState.methodPtr)
            (__this,attack,(__this->klass->vtable)._130_ResetAttackState.method);
  lVar1 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields.z;
  if (lVar1 == 0) goto LAB_0400b487;
  bVar10 = System_String__op_Equality
                     (*(System_String_o **)&(__this->fields)._currentFallTotalTime,
                      *(System_String_o **)(lVar1 + 0x88),(MethodInfo *)0x0);
  pSVar3 = *(System_String_o **)&(__this->fields)._currentFallTotalTime;
  if ((char)bVar10 != '\0') {
    Characters_BaseTitan__StateActionWithTime
              ((Characters_BaseTitan_o *)__this,10,pSVar3,
               (__this->fields).LateUpdateHeadRotation.fields.value.fields.y,0.1,1,(MethodInfo *)0x0
              );
    return;
  }
  lVar1 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields.z;
  if (lVar1 == 0) goto LAB_0400b487;
  bVar10 = System_String__op_Equality(pSVar3,*(System_String_o **)(lVar1 + 0x1d0),(MethodInfo *)0x0)
  ;
  if ((char)bVar10 != '\0') {
    if ((char)(__this->fields).CustomDamage == '\0') {
      uVar16 = (*(__this->klass->vtable)._66_GetAimPoint.methodPtr)
                         (__this,(__this->klass->vtable)._66_GetAimPoint.method);
      pSVar8 = &(__this->fields).LateUpdateHeadRotationRecv;
      (pSVar8->fields).value.fields.y = (float)(int)uVar16;
      (pSVar8->fields).value.fields.z = (float)(int)((ulong)uVar16 >> 0x20);
      (__this->fields).LateUpdateHeadRotationRecv.fields.value.fields.w = in_XMM1_Da;
    }
LAB_0400ac68:
    Characters_BaseTitan__StateAttack
              ((Characters_BaseTitan_o *)__this,
               *(System_String_o **)&(__this->fields)._currentFallTotalTime,0.1,1,(MethodInfo *)0x0)
    ;
    return;
  }
  plVar4 = *(long **)&(__this->fields)._furthestCoreLocalPosition.fields.z;
  if (plVar4 == (long *)0x0) goto LAB_0400b487;
  pSVar3 = *(System_String_o **)&(__this->fields)._currentFallTotalTime;
  b = (System_String_o *)(**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
  bVar10 = System_String__op_Equality(pSVar3,b,(MethodInfo *)0x0);
  if ((char)bVar10 == '\0') {
    lVar1 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields.z;
    if (lVar1 == 0) goto LAB_0400b487;
    bVar10 = System_String__op_Equality
                       (*(System_String_o **)&(__this->fields)._currentFallTotalTime,
                        *(System_String_o **)(lVar1 + 0x28),(MethodInfo *)0x0);
    if ((char)bVar10 == '\0') goto LAB_0400ac68;
    plVar4 = *(long **)&(__this->fields).ActionPause;
    if (plVar4 != (long *)0x0) {
      lVar1 = *plVar4;
      if ((ulong)*(ushort *)(lVar1 + 0x12e) != 0) {
        lVar13 = 0;
        do {
          if (*(long *)(*(long *)(lVar1 + 0xb0) + lVar13) == TypeInfo_ITargetable) {
            puVar11 = (undefined8 *)
                      ((long)(*(int *)(*(long *)(lVar1 + 0xb0) + 8 + lVar13) + 2) * 0x10 + lVar1 +
                      0x138);
            goto LAB_0400ad87;
          }
          lVar13 = lVar13 + 0x10;
        } while ((ulong)*(ushort *)(lVar1 + 0x12e) << 4 != lVar13);
      }
      puVar11 = (undefined8 *)il2cpp_runtime_glue(plVar4,TypeInfo_ITargetable,2);
LAB_0400ad87:
      cVar9 = (*(code *)*puVar11)();
      if (cVar9 != '\0') {
        plVar4 = *(long **)&(__this->fields).ActionPause;
        if (plVar4 == (long *)0x0) goto LAB_0400b487;
        lVar1 = *plVar4;
        if ((ulong)*(ushort *)(lVar1 + 0x12e) != 0) {
          lVar13 = 0;
          do {
            if (*(long *)(*(long *)(lVar1 + 0xb0) + lVar13) == TypeInfo_ITargetable) {
              puVar11 = (undefined8 *)
                        (lVar1 + (long)(*(int *)(*(long *)(lVar1 + 0xb0) + 8 + lVar13) + 1) * 0x10 +
                        0x138);
              goto LAB_0400b18a;
            }
            lVar13 = lVar13 + 0x10;
          } while ((ulong)*(ushort *)(lVar1 + 0x12e) << 4 != lVar13);
        }
        puVar11 = (undefined8 *)il2cpp_runtime_glue(plVar4,TypeInfo_ITargetable,1);
LAB_0400b18a:
        local_68 = (*(code *)*puVar11)(plVar4);
        fVar14 = (float)((ulong)local_68 >> 0x20);
        lVar1 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields;
        if (lVar1 == 0) goto LAB_0400b487;
        uStack_60 = extraout_XMM0_Dc_00;
        uStack_5c = extraout_XMM0_Dd_00;
        pUVar5 = *(UnityEngine_Transform_o **)(lVar1 + 0x38);
        if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto LAB_0400b487;
        UVar28 = UnityEngine_Transform__get_position(pUVar5,(MethodInfo *)0x0);
        if (DAT_056fde1c == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Math);
          DAT_056fde1c = '\x01';
        }
        auVar24._4_12_ = local_68._4_12_;
        auVar24._0_4_ = (float)local_68 - UVar28.fields.x;
        fVar21 = fVar14 - UVar28.fields.y;
        in_XMM1_Da = in_XMM1_Da - UVar28.fields.z;
        if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
          il2cpp_init_class();
        }
        fVar27 = fVar21 * fVar21 + auVar24._0_4_ * auVar24._0_4_ + in_XMM1_Da * in_XMM1_Da;
        fVar15 = 0.0;
        if (fVar27 < 0.0) {
          fVar27 = sqrtf(fVar27);
        }
        else {
          fVar27 = SQRT(fVar27);
        }
        fVar27 = fVar27 / (__this->fields).ConfusedTime;
        uVar16 = (*(__this->klass->vtable)._58_get_Gravity.methodPtr)
                           (__this,(__this->klass->vtable)._58_get_Gravity.method);
        fVar20 = (float)((ulong)uVar16 >> 0x20);
        if (DAT_056fde1c == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Math);
          DAT_056fde1c = '\x01';
        }
        if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
          il2cpp_init_class();
        }
        fVar15 = fVar15 * fVar15 + fVar20 * fVar20 + (float)uVar16 * (float)uVar16;
        if (fVar15 < 0.0) {
          fVar15 = sqrtf(fVar15);
        }
        else {
          fVar15 = SQRT(fVar15);
        }
        if (DAT_056fde20 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Math);
          DAT_056fde20 = '\x01';
        }
        fVar21 = fVar21 + fVar15 * 0.5 * fVar27 * fVar27;
        if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
          il2cpp_init_class();
        }
        fVar27 = in_XMM1_Da * in_XMM1_Da + auVar24._0_4_ * auVar24._0_4_ + fVar21 * fVar21;
        uVar18 = 0;
        uVar19 = 0;
        local_68 = auVar24._0_8_;
        if (fVar27 < 0.0) {
          fVar27 = sqrtf(fVar27);
          uVar18 = extraout_XMM0_Dc_01;
          uVar19 = extraout_XMM0_Dd_01;
          if (1e-05 < fVar27) goto LAB_0400b402;
LAB_0400b435:
          if (DAT_056fdd15 == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Vector3);
            DAT_056fdd15 = '\x01';
          }
          fVar14 = (float)**(undefined8 **)(TypeInfo_Vector3 + 0xb8);
          in_XMM1_Da = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
        }
        else {
          fVar27 = SQRT(fVar27);
          if (fVar27 <= 1e-05) goto LAB_0400b435;
LAB_0400b402:
          auVar26._8_4_ = fVar14;
          auVar26._0_8_ = local_68;
          auVar26._12_4_ = fVar14;
          auVar25._8_8_ = auVar26._8_8_;
          auVar25._4_4_ = fVar21;
          auVar25._0_4_ = auVar24._0_4_;
          in_XMM1_Da = in_XMM1_Da / fVar27;
          auVar7._4_4_ = fVar27;
          auVar7._0_4_ = fVar27;
          auVar7._8_4_ = uVar18;
          auVar7._12_4_ = uVar19;
          auVar24 = divps(auVar25,auVar7);
          fVar14 = auVar24._0_4_;
        }
        vtable_dispatch = (__this->klass->vtable)._126_Jump.methodPtr;
        pMVar12 = (__this->klass->vtable)._126_Jump.method;
        goto LAB_0400b165;
      }
    }
    lVar1 = *(long *)&(__this->fields).Dead;
    if ((lVar1 == 0) ||
       (pUVar5 = *(UnityEngine_Transform_o **)(lVar1 + 0x10),
       pUVar5 == (UnityEngine_Transform_o *)0x0)) {
LAB_0400b487:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    UVar28 = UnityEngine_Transform__get_forward(pUVar5,(MethodInfo *)0x0);
    if (DAT_056fde1f == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fde1f = '\x01';
    }
    in_XMM1_Da = UVar28.fields.z + *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
    fVar14 = UVar28.fields.x + (float)*(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
  }
  else if ((char)(__this->fields).CustomDamage == '\0') {
    uVar16 = (*(__this->klass->vtable)._66_GetAimPoint.methodPtr)(__this);
    lVar1._0_4_ = (__this->fields)._furthestCoreLocalPosition.fields.x;
    lVar1._4_4_ = (__this->fields)._furthestCoreLocalPosition.fields.y;
joined_r0x0400acaf:
    if (lVar1 == 0) goto LAB_0400b487;
    fVar14 = (float)((ulong)uVar16 >> 0x20);
    if (*(UnityEngine_Transform_o **)(lVar1 + 0x38) == (UnityEngine_Transform_o *)0x0)
    goto LAB_0400b487;
    UVar28 = UnityEngine_Transform__get_position
                       (*(UnityEngine_Transform_o **)(lVar1 + 0x38),(MethodInfo *)0x0);
    if (DAT_056fde1c == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Math);
      DAT_056fde1c = '\x01';
    }
    fVar27 = (float)uVar16 - UVar28.fields.x;
    fVar21 = fVar14 - UVar28.fields.y;
    in_XMM1_Da = in_XMM1_Da - UVar28.fields.z;
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_init_class();
    }
    fVar15 = fVar21 * fVar21 + fVar27 * fVar27 + in_XMM1_Da * in_XMM1_Da;
    fVar20 = 0.0;
    if (fVar15 < 0.0) {
      fVar15 = sqrtf(fVar15);
    }
    else {
      fVar15 = SQRT(fVar15);
    }
    fVar15 = fVar15 / (__this->fields).ConfusedTime;
    uVar16 = (*(__this->klass->vtable)._58_get_Gravity.methodPtr)
                       (__this,(__this->klass->vtable)._58_get_Gravity.method);
    fVar17 = (float)((ulong)uVar16 >> 0x20);
    if (DAT_056fde1c == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Math);
      DAT_056fde1c = '\x01';
    }
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_init_class();
    }
    fVar20 = fVar20 * fVar20 + fVar17 * fVar17 + (float)uVar16 * (float)uVar16;
    if (fVar20 < 0.0) {
      fVar20 = sqrtf(fVar20);
    }
    else {
      fVar20 = SQRT(fVar20);
    }
    if (DAT_056fde20 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Math);
      DAT_056fde20 = '\x01';
    }
    fVar21 = fVar21 + fVar20 * 0.5 * fVar15 * fVar15;
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_init_class();
    }
    fVar15 = in_XMM1_Da * in_XMM1_Da + fVar27 * fVar27 + fVar21 * fVar21;
    uVar18 = 0;
    uVar19 = 0;
    if (fVar15 < 0.0) {
      fVar15 = sqrtf(fVar15);
      uVar18 = extraout_XMM0_Dc;
      uVar19 = extraout_XMM0_Dd;
    }
    else {
      fVar15 = SQRT(fVar15);
    }
    if (fVar15 <= 1e-05) {
      if (DAT_056fdd15 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Vector3);
        DAT_056fdd15 = '\x01';
      }
      fVar14 = (float)**(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      in_XMM1_Da = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    }
    else {
      auVar23._4_4_ = fVar14;
      auVar23._0_4_ = fVar27;
      auVar23._8_4_ = fVar14;
      auVar23._12_4_ = fVar14;
      auVar22._8_8_ = auVar23._8_8_;
      auVar22._4_4_ = fVar21;
      auVar22._0_4_ = fVar27;
      in_XMM1_Da = in_XMM1_Da / fVar15;
      auVar6._4_4_ = fVar15;
      auVar6._0_4_ = fVar15;
      auVar6._8_4_ = uVar18;
      auVar6._12_4_ = uVar19;
      auVar24 = divps(auVar22,auVar6);
      fVar14 = auVar24._0_4_;
    }
  }
  else {
    plVar4 = *(long **)&(__this->fields).ActionPause;
    if (plVar4 != (long *)0x0) {
      lVar1 = *plVar4;
      if ((ulong)*(ushort *)(lVar1 + 0x12e) != 0) {
        lVar13 = 0;
        do {
          if (*(long *)(*(long *)(lVar1 + 0xb0) + lVar13) == TypeInfo_ITargetable) {
            puVar11 = (undefined8 *)
                      ((long)(*(int *)(*(long *)(lVar1 + 0xb0) + 8 + lVar13) + 2) * 0x10 + lVar1 +
                      0x138);
            goto LAB_0400acd2;
          }
          lVar13 = lVar13 + 0x10;
        } while ((ulong)*(ushort *)(lVar1 + 0x12e) << 4 != lVar13);
      }
      puVar11 = (undefined8 *)il2cpp_runtime_glue(plVar4,TypeInfo_ITargetable,2);
LAB_0400acd2:
      cVar9 = (*(code *)*puVar11)(plVar4,puVar11[1]);
      if (cVar9 != '\0') {
        plVar4 = *(long **)&(__this->fields).ActionPause;
        if (plVar4 == (long *)0x0) goto LAB_0400b487;
        lVar1 = *plVar4;
        if ((ulong)*(ushort *)(lVar1 + 0x12e) != 0) {
          lVar13 = 0;
          do {
            if (*(long *)(*(long *)(lVar1 + 0xb0) + lVar13) == TypeInfo_ITargetable) {
              puVar11 = (undefined8 *)
                        (lVar1 + (long)(*(int *)(*(long *)(lVar1 + 0xb0) + 8 + lVar13) + 1) * 0x10 +
                        0x138);
              goto LAB_0400ae75;
            }
            lVar13 = lVar13 + 0x10;
          } while ((ulong)*(ushort *)(lVar1 + 0x12e) << 4 != lVar13);
        }
        puVar11 = (undefined8 *)il2cpp_runtime_glue(plVar4,TypeInfo_ITargetable,1);
LAB_0400ae75:
        uVar16 = (*(code *)*puVar11)(plVar4);
        lVar1._0_4_ = (__this->fields)._furthestCoreLocalPosition.fields.x;
        lVar1._4_4_ = (__this->fields)._furthestCoreLocalPosition.fields.y;
        goto joined_r0x0400acaf;
      }
    }
    if (DAT_056fde1f == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fde1f = '\x01';
    }
    fVar14 = (float)*(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
    in_XMM1_Da = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
  }
  vtable_dispatch = (__this->klass->vtable)._126_Jump.methodPtr;
  pMVar12 = (__this->klass->vtable)._126_Jump.method;
LAB_0400b165:
  (*vtable_dispatch)(fVar14,in_XMM1_Da,__this,pMVar12);
  return;
}


// Characters.BasicTitan$$UpdateAttack
// il2cpp: void Characters_BasicTitan__UpdateAttack (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x400b490

void Characters_BasicTitan__UpdateAttack(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  float *pfVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  UnityEngine_Component_o *pUVar5;
  long *plVar6;
  Photon_Pun_PhotonView_o *__this_00;
  Characters_BaseCharacter_o *__this_01;
  undefined1 auVar7 [16];
  UnityEngine_Quaternion_Fields rotation;
  System_Nullable_Quaternion__o *pSVar8;
  long lVar9;
  char cVar10;
  bool_conflict bVar11;
  int32_t iVar12;
  UnityEngine_Transform_o *pUVar13;
  System_String_o *pSVar14;
  undefined8 *puVar15;
  System_Object_array *pSVar16;
  Il2CppObject *pIVar17;
  long lVar18;
  Characters_BasicTitan_c *pCVar19;
  Il2CppMethodPointer vtable_dispatch;
  float *pfVar20;
  ulong uVar21;
  Characters_BaseHitbox_o *pCVar22;
  MethodInfo *pMVar23;
  long lVar24;
  float fVar25;
  undefined4 uVar26;
  float fVar28;
  float extraout_XMM1_Da;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  float extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dc_03;
  undefined4 extraout_XMM0_Dc_04;
  undefined4 extraout_XMM0_Dc_05;
  undefined4 extraout_XMM0_Dc_06;
  undefined4 extraout_XMM0_Dc_07;
  float extraout_XMM0_Dc_08;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  float extraout_XMM0_Dd_02;
  undefined4 extraout_XMM0_Dd_03;
  undefined4 uVar27;
  undefined4 extraout_XMM0_Dd_04;
  undefined4 extraout_XMM0_Dd_05;
  undefined4 extraout_XMM0_Dd_06;
  undefined4 extraout_XMM0_Dd_07;
  float extraout_XMM0_Dd_08;
  float extraout_XMM1_Da_00;
  undefined8 extraout_XMM1_Qa;
  float fVar31;
  float fVar32;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  UnityEngine_Vector3_o UVar33;
  UnityEngine_Vector3_o UVar34;
  UnityEngine_Vector3_o UVar35;
  UnityEngine_Vector3_o position;
  UnityEngine_Vector3_o position_00;
  UnityEngine_Vector3_o position_01;
  UnityEngine_Vector3_o position_02;
  UnityEngine_Vector3_o position_03;
  UnityEngine_Vector3_o position_04;
  UnityEngine_Vector3_o forward;
  UnityEngine_Vector3_o position_05;
  UnityEngine_Vector3_o forward_00;
  UnityEngine_Vector3_o position_06;
  UnityEngine_Quaternion_o UVar36;
  UnityEngine_Quaternion_o b;
  UnityEngine_Vector3_o velocity;
  UnityEngine_Vector3_o gravity;
  undefined1 auStack_b8 [8];
  float fStack_b0;
  float fStack_ac;
  undefined1 auStack_a8 [8];
  float fStack_a0;
  float fStack_9c;
  undefined1 auStack_98 [8];
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_60;
  undefined4 uStack_5c;
  undefined1 auStack_58 [8];
  float fStack_50;
  float fStack_4c;
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [8];
  float fStack_30;
  float fStack_2c;
  
  if (DAT_0570425d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BaseCharacter);
    il2cpp_init_method_metadata(&TypeInfo_EffectPrefabs);
    il2cpp_init_method_metadata(&TypeInfo_ITargetable);
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&TypeInfo_ProjectilePrefabs);
    il2cpp_init_method_metadata(&TypeInfo_SpawnablePrefabs);
    il2cpp_init_method_metadata(&TypeInfo_TitanSounds);
    il2cpp_init_method_metadata(&"AttackSwing");
    il2cpp_init_method_metadata(&"AttackBite");
    il2cpp_init_method_metadata(&"AttackSlap");
    il2cpp_init_method_metadata(&"AttackGrab");
    il2cpp_init_method_metadata(&"AttackBrush");
    il2cpp_init_method_metadata(&"");
    il2cpp_init_method_metadata(&"ClearRockRPC");
    DAT_0570425d = '\x01';
  }
  fVar25 = (float)(*(__this->klass->vtable)._166_GetAnimationTime.methodPtr)
                            (__this,(__this->klass->vtable)._166_GetAnimationTime.method);
  auVar30 = ZEXT816(0) << 0x20;
  UVar36 = UnityEngine_Quaternion__Internal_FromEulerRad
                     ((UnityEngine_Vector3_o)ZEXT812(0x4096cbe4),(MethodInfo *)0x0);
  auVar30._0_8_ = UVar36.fields._8_8_;
  lVar18 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields.z;
  if (lVar18 == 0) goto LAB_0400e001;
  auVar29 = auVar30;
  bVar11 = System_String__op_Equality
                     (*(System_String_o **)&(__this->fields)._currentFallTotalTime,
                      *(System_String_o **)(lVar18 + 0x70),(MethodInfo *)0x0);
  if ((char)bVar11 != '\0') {
    UVar35.fields.x = (__this->fields)._startPosition.fields.z;
    if ((0.115 < fVar25) && (UVar35.fields.x == 0.0)) {
      if (*(int *)((long)&TypeInfo_TitanSounds[2].parameters + 4) == 0) {
        il2cpp_init_class();
      }
      Characters_BaseCharacter__PlaySound
                ((Characters_BaseCharacter_o *)__this,
                 *(System_String_o **)(TypeInfo_TitanSounds[2].virtualMethodPointer + 0x18),
                 (MethodInfo *)0x0);
      lVar18 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields;
      if (lVar18 == 0) goto LAB_0400e001;
      pCVar22 = *(Characters_BaseHitbox_o **)(lVar18 + 0x90);
      fVar25 = (float)(*(__this->klass->vtable)._167_GetHitboxTime.methodPtr)
                                (0x3ba3d70a,__this,(__this->klass->vtable)._167_GetHitboxTime.method
                                );
      UVar35.fields.x =
           (float)(*(__this->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3ccccccd,__this);
joined_r0x0400b666:
      if (pCVar22 != (Characters_BaseHitbox_o *)0x0) goto LAB_0400bbb1;
      goto LAB_0400e001;
    }
    if ((fVar25 <= 0.265) || (UVar35.fields.x != 1.4013e-45)) {
      if ((fVar25 <= 0.48) || (UVar35.fields.x != 2.8026e-45)) {
        if (fVar25 <= 0.52) {
          return;
        }
        if (UVar35.fields.x != 4.2039e-45) {
          return;
        }
        lVar18 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields;
        if ((lVar18 != 0) &&
           (pUVar13 = *(UnityEngine_Transform_o **)(lVar18 + 0x10),
           pUVar13 != (UnityEngine_Transform_o *)0x0)) {
          UVar33 = UnityEngine_Transform__get_position(pUVar13,(MethodInfo *)0x0);
          lVar18 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields;
          if ((lVar18 != 0) &&
             (pUVar13 = *(UnityEngine_Transform_o **)(lVar18 + 0x10),
             pUVar13 != (UnityEngine_Transform_o *)0x0)) {
            UVar34 = UnityEngine_Transform__get_forward(pUVar13,(MethodInfo *)0x0);
            fVar25 = *(float *)((long)&(__this->fields).TitanColliderToggler + 4);
            UVar35.fields.x = UVar34.fields.z * 7.0 * fVar25;
            auStack_b8._0_4_ = UVar33.fields.x;
            auStack_b8._4_4_ = UVar33.fields.y;
            position_00.fields.x = (float)auStack_b8._0_4_ + fVar25 * UVar34.fields.x * 7.0;
            position_00.fields.y = (float)auStack_b8._4_4_ + fVar25 * UVar34.fields.y * 7.0;
            if (*(int *)(TypeInfo_EffectPrefabs + 0xe4) == 0) {
              il2cpp_init_class();
              fVar25 = *(float *)((long)&(__this->fields).TitanColliderToggler + 4);
            }
            position_00.fields.z = UVar33.fields.z + UVar35.fields.x;
            Effects_EffectSpawner__Spawn
                      (*(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x58),position_00,
                       UVar36,fVar25,1,(System_Object_array *)0x0,(MethodInfo *)0x0);
            (*(__this->klass->vtable)._173_SpawnShatter.methodPtr)
                      (position_00.fields.x,__this,(__this->klass->vtable)._173_SpawnShatter.method)
            ;
            (__this->fields)._startPosition.fields.z = 5.60519e-45;
            return;
          }
        }
      }
      else {
        if (*(int *)((long)&TypeInfo_TitanSounds[2].parameters + 4) == 0) {
          il2cpp_init_class();
        }
        Characters_BaseCharacter__PlaySound
                  ((Characters_BaseCharacter_o *)__this,
                   *(System_String_o **)(TypeInfo_TitanSounds[2].virtualMethodPointer + 0x28),
                   (MethodInfo *)0x0);
        lVar18 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields;
        if (lVar18 != 0) {
          pCVar22 = *(Characters_BaseHitbox_o **)(lVar18 + 0x88);
          fVar25 = (float)(*(__this->klass->vtable)._167_GetHitboxTime.methodPtr)
                                    (0x3ca3d70a,__this,
                                     (__this->klass->vtable)._167_GetHitboxTime.method);
          UVar35.fields.x =
               (float)(*(__this->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3ca3d70a,__this);
          if (pCVar22 != (Characters_BaseHitbox_o *)0x0) {
            Characters_BaseHitbox__Activate(pCVar22,fVar25,UVar35.fields.x,(MethodInfo *)0x0);
            lVar18 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields;
            if (lVar18 != 0) {
              pCVar22 = *(Characters_BaseHitbox_o **)(lVar18 + 0x90);
              fVar25 = (float)(*(__this->klass->vtable)._167_GetHitboxTime.methodPtr)
                                        (0x3ca3d70a,__this,
                                         (__this->klass->vtable)._167_GetHitboxTime.method);
              UVar35.fields.x =
                   (float)(*(__this->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3ca3d70a,__this)
              ;
              if (pCVar22 != (Characters_BaseHitbox_o *)0x0) {
                Characters_BaseHitbox__Activate(pCVar22,fVar25,UVar35.fields.x,(MethodInfo *)0x0);
                (__this->fields)._startPosition.fields.z = 4.2039e-45;
                return;
              }
            }
          }
        }
      }
      goto LAB_0400e001;
    }
    if (*(int *)((long)&TypeInfo_TitanSounds[2].parameters + 4) == 0) {
      il2cpp_init_class();
    }
    Characters_BaseCharacter__PlaySound
              ((Characters_BaseCharacter_o *)__this,
               *(System_String_o **)(TypeInfo_TitanSounds[2].virtualMethodPointer + 0x20),(MethodInfo *)0x0)
    ;
    lVar18 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields;
    if (lVar18 == 0) goto LAB_0400e001;
    pCVar22 = *(Characters_BaseHitbox_o **)(lVar18 + 0x88);
    UVar35.fields.x =
         (float)(*(__this->klass->vtable)._167_GetHitboxTime.methodPtr)
                          (0x3ba3d70a,__this,(__this->klass->vtable)._167_GetHitboxTime.method);
    fVar25 = (float)(*(__this->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3ccccccd,__this);
    if (pCVar22 == (Characters_BaseHitbox_o *)0x0) goto LAB_0400e001;
LAB_0400bf60:
    Characters_BaseHitbox__Activate(pCVar22,UVar35.fields.x,fVar25,(MethodInfo *)0x0);
LAB_0400bf67:
    (__this->fields)._startPosition.fields.z = 2.8026e-45;
    return;
  }
  pfVar20 = &(__this->fields)._furthestCoreLocalPosition.fields.z;
  if (*(long *)pfVar20 == 0) goto LAB_0400e001;
  bVar11 = System_String__op_Equality
                     (*(System_String_o **)&(__this->fields)._currentFallTotalTime,
                      *(System_String_o **)(*(long *)pfVar20 + 0x78),(MethodInfo *)0x0);
  if ((char)bVar11 != '\0') {
    UVar35.fields.x = (__this->fields)._startPosition.fields.z;
    if ((char)(__this->fields).CustomDamage == '\0') {
      if ((fVar25 <= 0.2) || (UVar35.fields.x != 0.0)) {
        if (fVar25 <= 0.49) {
          return;
        }
        if (UVar35.fields.x != 1.4013e-45) {
          return;
        }
        if (*(int *)((long)&TypeInfo_TitanSounds[2].parameters + 4) == 0) {
          il2cpp_init_class();
        }
        Characters_BaseCharacter__PlaySound
                  ((Characters_BaseCharacter_o *)__this,
                   *(System_String_o **)(TypeInfo_TitanSounds[2].virtualMethodPointer + 0x20),
                   (MethodInfo *)0x0);
        lVar18 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields;
        if (lVar18 == 0) goto LAB_0400e001;
        pCVar22 = *(Characters_BaseHitbox_o **)(lVar18 + 0x88);
        fVar25 = (float)(*(__this->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3d75c28f,__this);
        goto joined_r0x0400bf51;
      }
      if (*(int *)((long)&TypeInfo_TitanSounds[2].parameters + 4) == 0) {
        il2cpp_init_class();
      }
      Characters_BaseCharacter__PlaySound
                ((Characters_BaseCharacter_o *)__this,
                 *(System_String_o **)(TypeInfo_TitanSounds[2].virtualMethodPointer + 0x18),
                 (MethodInfo *)0x0);
      lVar18 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields;
      if (lVar18 == 0) goto LAB_0400e001;
      pCVar22 = *(Characters_BaseHitbox_o **)(lVar18 + 0x90);
LAB_0400bb84:
      UVar35.fields.x =
           (float)(*(__this->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3d75c28f,__this);
    }
    else {
      if ((fVar25 <= 0.22) || (UVar35.fields.x != 0.0)) {
        if (fVar25 <= 0.505) {
          return;
        }
        if (UVar35.fields.x != 1.4013e-45) {
          return;
        }
        if (*(int *)((long)&TypeInfo_TitanSounds[2].parameters + 4) == 0) {
          il2cpp_init_class();
        }
        Characters_BaseCharacter__PlaySound
                  ((Characters_BaseCharacter_o *)__this,
                   *(System_String_o **)(TypeInfo_TitanSounds[2].virtualMethodPointer + 0x20),
                   (MethodInfo *)0x0);
        lVar18 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields;
        if (lVar18 == 0) goto LAB_0400e001;
        pCVar22 = *(Characters_BaseHitbox_o **)(lVar18 + 0x88);
        fVar25 = (float)(*(__this->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3d23d70a,__this);
joined_r0x0400bf51:
        if (pCVar22 == (Characters_BaseHitbox_o *)0x0) goto LAB_0400e001;
        UVar35.fields.x = 0.0;
        goto LAB_0400bf60;
      }
      if (*(int *)((long)&TypeInfo_TitanSounds[2].parameters + 4) == 0) {
        il2cpp_init_class();
      }
      Characters_BaseCharacter__PlaySound
                ((Characters_BaseCharacter_o *)__this,
                 *(System_String_o **)(TypeInfo_TitanSounds[2].virtualMethodPointer + 0x18),
                 (MethodInfo *)0x0);
      lVar18 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields;
      if (lVar18 == 0) goto LAB_0400e001;
      pCVar22 = *(Characters_BaseHitbox_o **)(lVar18 + 0x90);
      UVar35.fields.x =
           (float)(*(__this->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3d23d70a,__this);
    }
joined_r0x0400b73d:
    if (pCVar22 != (Characters_BaseHitbox_o *)0x0) {
      fVar25 = 0.0;
LAB_0400bbb1:
      Characters_BaseHitbox__Activate(pCVar22,fVar25,UVar35.fields.x,(MethodInfo *)0x0);
      (__this->fields)._startPosition.fields.z = 1.4013e-45;
      return;
    }
    goto LAB_0400e001;
  }
  if (*(long *)pfVar20 == 0) goto LAB_0400e001;
  bVar11 = System_String__op_Equality
                     (*(System_String_o **)&(__this->fields)._currentFallTotalTime,
                      *(System_String_o **)(*(long *)pfVar20 + 0x80),(MethodInfo *)0x0);
  if ((char)bVar11 != '\0') {
    UVar35.fields.x = (__this->fields)._startPosition.fields.z;
    if ((fVar25 <= 0.42) || (UVar35.fields.x != 0.0)) {
      if (fVar25 <= 0.45) {
        return;
      }
      if (UVar35.fields.x != 1.4013e-45) {
        return;
      }
      lVar18 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields;
      if ((lVar18 == 0) ||
         (pUVar13 = *(UnityEngine_Transform_o **)(lVar18 + 0x10),
         pUVar13 == (UnityEngine_Transform_o *)0x0)) goto LAB_0400e001;
      UVar33 = UnityEngine_Transform__get_position(pUVar13,(MethodInfo *)0x0);
      lVar18 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields;
      if ((lVar18 == 0) ||
         (pUVar13 = *(UnityEngine_Transform_o **)(lVar18 + 0x10),
         pUVar13 == (UnityEngine_Transform_o *)0x0)) goto LAB_0400e001;
      UVar34 = UnityEngine_Transform__get_forward(pUVar13,(MethodInfo *)0x0);
      fVar25 = *(float *)((long)&(__this->fields).TitanColliderToggler + 4);
      fVar28 = UVar34.fields.z * 7.0 * fVar25;
      auStack_b8._0_4_ = UVar33.fields.x;
      auStack_b8._4_4_ = UVar33.fields.y;
      UVar35.fields.x = (float)auStack_b8._0_4_ + fVar25 * UVar34.fields.x * 7.0;
      UVar35.fields.y = (float)auStack_b8._4_4_ + fVar25 * UVar34.fields.y * 7.0;
      if (*(int *)(TypeInfo_EffectPrefabs + 0xe4) == 0) {
        il2cpp_init_class();
        fVar25 = *(float *)((long)&(__this->fields).TitanColliderToggler + 4);
      }
      UVar35.fields.z = UVar33.fields.z + fVar28;
      Effects_EffectSpawner__Spawn
                (*(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x58),UVar35,UVar36,fVar25,1
                 ,(System_Object_array *)0x0,(MethodInfo *)0x0);
      pCVar19 = __this->klass;
      pMVar23 = (pCVar19->vtable)._173_SpawnShatter.method;
LAB_0400c414:
      (*(pCVar19->vtable)._173_SpawnShatter.methodPtr)(UVar35.fields.x,__this,pMVar23);
      goto LAB_0400bf67;
    }
    if (*(int *)((long)&TypeInfo_TitanSounds[2].parameters + 4) == 0) {
      il2cpp_init_class();
    }
    Characters_BaseCharacter__PlaySound
              ((Characters_BaseCharacter_o *)__this,
               *(System_String_o **)(TypeInfo_TitanSounds[2].virtualMethodPointer + 0x28),(MethodInfo *)0x0)
    ;
    lVar18 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields;
    if (lVar18 == 0) goto LAB_0400e001;
    pCVar22 = *(Characters_BaseHitbox_o **)(lVar18 + 0x88);
    fVar25 = (float)(*(__this->klass->vtable)._167_GetHitboxTime.methodPtr)
                              (0x3ca3d70a,__this,(__this->klass->vtable)._167_GetHitboxTime.method);
    UVar35.fields.x =
         (float)(*(__this->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3c23d70a,__this);
    if (pCVar22 == (Characters_BaseHitbox_o *)0x0) goto LAB_0400e001;
    Characters_BaseHitbox__Activate(pCVar22,fVar25,UVar35.fields.x,(MethodInfo *)0x0);
    lVar18 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields;
    if (lVar18 == 0) goto LAB_0400e001;
    pCVar22 = *(Characters_BaseHitbox_o **)(lVar18 + 0x90);
    fVar25 = (float)(*(__this->klass->vtable)._167_GetHitboxTime.methodPtr)
                              (0x3ca3d70a,__this,(__this->klass->vtable)._167_GetHitboxTime.method);
    UVar35.fields.x =
         (float)(*(__this->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3c23d70a,__this);
    goto joined_r0x0400b666;
  }
  if (*(long *)pfVar20 == 0) goto LAB_0400e001;
  bVar11 = System_String__op_Equality
                     (*(System_String_o **)&(__this->fields)._currentFallTotalTime,
                      *(System_String_o **)(*(long *)pfVar20 + 0x88),(MethodInfo *)0x0);
  if ((char)bVar11 != '\0') {
    UVar35.fields.x = (__this->fields)._startPosition.fields.z;
    if ((fVar25 <= 0.65) || (UVar35.fields.x != 0.0)) {
      if ((fVar25 <= 0.805) || (UVar35.fields.x != 1.4013e-45)) {
        if (UVar35.fields.x != 2.8026e-45) {
          return;
        }
        pfVar20 = &(__this->fields)._currentCrippleTime;
        if (1.1 < *pfVar20 || *pfVar20 == 1.1) {
          return;
        }
        (__this->fields)._startPosition.fields.z = 4.2039e-45;
        lVar18 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields.z;
        if (lVar18 != 0) {
          Characters_BaseCharacter__CrossFade
                    ((Characters_BaseCharacter_o *)__this,*(System_String_o **)(lVar18 + 0x90),0.1,
                     0.0,(MethodInfo *)0x0);
          return;
        }
        goto LAB_0400e001;
      }
      (__this->fields)._startPosition.fields.z = 2.8026e-45;
      lVar18 = *(long *)&(__this->fields).Dead;
      if ((lVar18 == 0) ||
         (pUVar13 = *(UnityEngine_Transform_o **)(lVar18 + 0x10),
         pUVar13 == (UnityEngine_Transform_o *)0x0)) goto LAB_0400e001;
      UVar35 = UnityEngine_Transform__get_position(pUVar13,(MethodInfo *)0x0);
      lVar18 = *(long *)&(__this->fields).Dead;
      if ((lVar18 == 0) ||
         (pUVar13 = *(UnityEngine_Transform_o **)(lVar18 + 0x10),
         pUVar13 == (UnityEngine_Transform_o *)0x0)) goto LAB_0400e001;
      UVar33 = UnityEngine_Transform__get_forward(pUVar13,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_EffectPrefabs + 0xe4) == 0) {
        il2cpp_init_class();
      }
      lVar18 = *(long *)&(__this->fields).Dead;
      if ((lVar18 == 0) ||
         (pUVar13 = *(UnityEngine_Transform_o **)(lVar18 + 0x10),
         pUVar13 == (UnityEngine_Transform_o *)0x0)) goto LAB_0400e001;
      auStack_b8._0_4_ = UVar35.fields.x;
      auStack_b8._4_4_ = UVar35.fields.y;
      auStack_b8._0_4_ = (float)auStack_b8._0_4_ + UVar33.fields.x * 5.0;
      auStack_b8._4_4_ = (float)auStack_b8._4_4_ + UVar33.fields.y * 5.0;
      UVar35.fields.x = UVar35.fields.z + UVar33.fields.z * 5.0;
      pSVar14 = *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x70);
      UVar36 = UnityEngine_Transform__get_rotation(pUVar13,(MethodInfo *)0x0);
      UVar33 = UnityEngine_Quaternion__Internal_ToEulerRad(UVar36,(MethodInfo *)0x0);
      UVar34.fields.x = UVar33.fields.x * 57.29578;
      UVar34.fields.y = UVar33.fields.y * 57.29578;
      UVar34.fields.z = UVar33.fields.z * 57.29578;
      UVar33 = UnityEngine_Quaternion__Internal_MakePositive(UVar34,(MethodInfo *)0x0);
      UVar33.fields.y = UVar33.fields.y * 0.017453292;
      UVar33.fields.x = 4.712389;
      UVar33.fields.z = 0.0;
      UVar36 = UnityEngine_Quaternion__Internal_FromEulerRad(UVar33,(MethodInfo *)0x0);
      fStack_88 = UVar36.fields.x;
      fStack_84 = UVar36.fields.y;
      auVar30._0_8_ = UVar36.fields._8_8_;
      fVar25 = *(float *)((long)&(__this->fields).TitanColliderToggler + 4);
      goto LAB_0400c186;
    }
    (__this->fields)._startPosition.fields.z = 1.4013e-45;
    lVar18 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields;
    if (lVar18 == 0) goto LAB_0400e001;
    pCVar22 = *(Characters_BaseHitbox_o **)(lVar18 + 0x100);
    fVar25 = (float)(*(__this->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3e1eb852,__this);
joined_r0x0400bb15:
    if (pCVar22 != (Characters_BaseHitbox_o *)0x0) {
      UVar35.fields.x = 0.0;
LAB_0400beb8:
      Characters_BaseHitbox__Activate(pCVar22,UVar35.fields.x,fVar25,(MethodInfo *)0x0);
      return;
    }
    goto LAB_0400e001;
  }
  lVar18 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields.z;
  if (lVar18 == 0) goto LAB_0400e001;
  pfVar1 = &(__this->fields)._climbCooldownLeft;
  bVar11 = System_String__op_Equality
                     (*(System_String_o **)pfVar1,*(System_String_o **)(lVar18 + 0x1c0),
                      (MethodInfo *)0x0);
  if ((char)bVar11 != '\0') {
LAB_0400be49:
    UVar35.fields.x = (__this->fields)._startPosition.fields.z;
    if ((fVar25 <= 0.635) || (UVar35.fields.x != 0.0)) {
      if (fVar25 <= 0.68) {
        return;
      }
      if (UVar35.fields.x != 1.4013e-45) {
        return;
      }
      (__this->fields)._startPosition.fields.z = 2.8026e-45;
      if (*(int *)(TypeInfo_EffectPrefabs + 0xe4) == 0) {
        il2cpp_init_class();
      }
      lVar18 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields;
      if ((lVar18 != 0) &&
         (pUVar5 = *(UnityEngine_Component_o **)(lVar18 + 0x90),
         pUVar5 != (UnityEngine_Component_o *)0x0)) {
        pSVar14 = *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x68);
        pUVar13 = UnityEngine_Component__get_transform(pUVar5,(MethodInfo *)0x0);
        if (pUVar13 != (UnityEngine_Transform_o *)0x0) {
          UVar33 = UnityEngine_Transform__get_position(pUVar13,(MethodInfo *)0x0);
          UVar35.fields.x = UVar33.fields.z;
          auStack_b8._0_4_ = UVar33.fields.x;
          auStack_b8._4_4_ = UVar33.fields.y;
          fVar25 = *(float *)((long)&(__this->fields).TitanColliderToggler + 4);
          fStack_88 = UVar36.fields.x;
          fStack_84 = UVar36.fields.y;
LAB_0400c186:
          position.fields.y = (float)auStack_b8._4_4_;
          position.fields.x = (float)auStack_b8._0_4_;
          position.fields.z = UVar35.fields.x;
          UVar36.fields.y = fStack_84;
          UVar36.fields.x = fStack_88;
          UVar36.fields.z = (float)(int)auVar30._0_8_;
          UVar36.fields.w = (float)(int)((ulong)auVar30._0_8_ >> 0x20);
          Effects_EffectSpawner__Spawn
                    (pSVar14,position,UVar36,fVar25,1,(System_Object_array *)0x0,(MethodInfo *)0x0);
          return;
        }
      }
      goto LAB_0400e001;
    }
    (__this->fields)._startPosition.fields.z = 1.4013e-45;
    lVar18 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields;
    if (lVar18 == 0) goto LAB_0400e001;
    pCVar22 = *(Characters_BaseHitbox_o **)(lVar18 + 0x90);
    fVar25 = (float)(*(__this->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3d6147ae,__this);
    goto joined_r0x0400bb15;
  }
  if (*(long *)pfVar20 == 0) goto LAB_0400e001;
  bVar11 = System_String__op_Equality
                     (*(System_String_o **)pfVar1,*(System_String_o **)(*(long *)pfVar20 + 0x1c8),
                      (MethodInfo *)0x0);
  if ((char)bVar11 != '\0') goto LAB_0400be49;
  pSVar14 = *(System_String_o **)&(__this->fields)._disableCooldownLeft;
  if (pSVar14 == (System_String_o *)0x0) goto LAB_0400e001;
  bVar11 = System_String__StartsWith(pSVar14,"AttackSlap",(MethodInfo *)0x0);
  if ((char)bVar11 != '\0') {
    if ((__this->fields)._startPosition.fields.z != 0.0) {
      return;
    }
    uVar21 = (ulong)((char)(__this->fields).CustomDamage == '\0');
    if (fVar25 < *(float *)(&DAT_00cd0f08 + uVar21 * 4) ||
        fVar25 == *(float *)(&DAT_00cd0f08 + uVar21 * 4)) {
      return;
    }
    if (*(int *)((long)&TypeInfo_TitanSounds[2].parameters + 4) == 0) {
      il2cpp_init_class();
    }
    Characters_BaseCharacter__PlaySound
              ((Characters_BaseCharacter_o *)__this,
               *(System_String_o **)(TypeInfo_TitanSounds[2].virtualMethodPointer + 0x18),(MethodInfo *)0x0)
    ;
    lVar18 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields.z;
    if (lVar18 == 0) goto LAB_0400e001;
    uVar26 = *(undefined4 *)(&DAT_00cd0cb0 + uVar21 * 4);
    bVar11 = System_String__op_Equality
                       (*(System_String_o **)pfVar1,*(System_String_o **)(lVar18 + 400),
                        (MethodInfo *)0x0);
    if ((char)bVar11 == '\0') {
      if (*(long *)pfVar20 == 0) goto LAB_0400e001;
      bVar11 = System_String__op_Equality
                         (*(System_String_o **)pfVar1,
                          *(System_String_o **)(*(long *)pfVar20 + 0x180),(MethodInfo *)0x0);
      if ((char)bVar11 != '\0') goto LAB_0400c313;
      if (*(long *)pfVar20 == 0) goto LAB_0400e001;
      bVar11 = System_String__op_Equality
                         (*(System_String_o **)pfVar1,
                          *(System_String_o **)(*(long *)pfVar20 + 0x1a0),(MethodInfo *)0x0);
      if ((char)bVar11 != '\0') goto LAB_0400c313;
      lVar18 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields;
      if (lVar18 == 0) goto LAB_0400e001;
      pCVar22 = *(Characters_BaseHitbox_o **)(lVar18 + 0x90);
    }
    else {
LAB_0400c313:
      lVar18 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields;
      if (lVar18 == 0) goto LAB_0400e001;
      pCVar22 = *(Characters_BaseHitbox_o **)(lVar18 + 0x88);
    }
    UVar35.fields.x = (float)(*(__this->klass->vtable)._167_GetHitboxTime.methodPtr)(uVar26,__this);
    goto joined_r0x0400b73d;
  }
  if (*(long *)pfVar20 == 0) goto LAB_0400e001;
  bVar11 = System_String__op_Equality
                     (*(System_String_o **)&(__this->fields)._currentFallTotalTime,
                      *(System_String_o **)(*(long *)pfVar20 + 0x98),(MethodInfo *)0x0);
  if ((char)bVar11 != '\0') {
    UVar35.fields.x = (__this->fields)._startPosition.fields.z;
    if ((fVar25 <= 0.39) || (UVar35.fields.x != 0.0)) {
      if (fVar25 <= 0.43) {
        return;
      }
      if (UVar35.fields.x != 1.4013e-45) {
        return;
      }
      (__this->fields)._startPosition.fields.z = 2.8026e-45;
      lVar18 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields;
      if (((lVar18 != 0) &&
          (pUVar5 = *(UnityEngine_Component_o **)(lVar18 + 0x98),
          pUVar5 != (UnityEngine_Component_o *)0x0)) &&
         (pUVar13 = UnityEngine_Component__get_transform(pUVar5,(MethodInfo *)0x0),
         pUVar13 != (UnityEngine_Transform_o *)0x0)) {
        UVar35 = UnityEngine_Transform__get_position(pUVar13,(MethodInfo *)0x0);
        position_01.fields.z = UVar35.fields.z;
        lVar18 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields;
        if ((lVar18 != 0) &&
           (pUVar13 = *(UnityEngine_Transform_o **)(lVar18 + 0x10),
           pUVar13 != (UnityEngine_Transform_o *)0x0)) {
          UVar33 = UnityEngine_Transform__get_position(pUVar13,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_EffectPrefabs + 0xe4) == 0) {
            il2cpp_init_class();
          }
          lVar18 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields;
          if ((lVar18 != 0) &&
             (pUVar13 = *(UnityEngine_Transform_o **)(lVar18 + 0x10),
             pUVar13 != (UnityEngine_Transform_o *)0x0)) {
            fStack_88 = UVar35.fields.x;
            pSVar14 = *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x78);
            UVar36 = UnityEngine_Transform__get_rotation(pUVar13,(MethodInfo *)0x0);
            position_01.fields.x = fStack_88;
            position_01.fields.y = UVar33.fields.y;
            Effects_EffectSpawner__Spawn
                      (pSVar14,position_01,UVar36,
                       *(float *)((long)&(__this->fields).TitanColliderToggler + 4),1,
                       (System_Object_array *)0x0,(MethodInfo *)0x0);
            vtable_dispatch = (__this->klass->vtable)._173_SpawnShatter.methodPtr;
            pMVar23 = (__this->klass->vtable)._173_SpawnShatter.method;
LAB_0400c82d:
            (*vtable_dispatch)(fStack_88,__this,pMVar23);
            return;
          }
        }
      }
      goto LAB_0400e001;
    }
    lVar18 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields;
    if (lVar18 == 0) goto LAB_0400e001;
    pCVar22 = *(Characters_BaseHitbox_o **)(lVar18 + 0x98);
LAB_0400c47d:
    UVar35.fields.x =
         (float)(*(__this->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3db851ec,__this);
    goto joined_r0x0400b73d;
  }
  if (*(long *)pfVar20 == 0) goto LAB_0400e001;
  bVar11 = System_String__op_Equality
                     (*(System_String_o **)&(__this->fields)._currentFallTotalTime,
                      *(System_String_o **)(*(long *)pfVar20 + 0xa0),(MethodInfo *)0x0);
  if ((char)bVar11 != '\0') {
    UVar35.fields.x = (__this->fields)._startPosition.fields.z;
    if ((fVar25 <= 0.38) || (UVar35.fields.x != 0.0)) {
      if (fVar25 <= 0.43) {
        return;
      }
      if (UVar35.fields.x != 1.4013e-45) {
        return;
      }
      (__this->fields)._startPosition.fields.z = 2.8026e-45;
      lVar18 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields;
      if (((lVar18 != 0) &&
          (pUVar5 = *(UnityEngine_Component_o **)(lVar18 + 0x98),
          pUVar5 != (UnityEngine_Component_o *)0x0)) &&
         (pUVar13 = UnityEngine_Component__get_transform(pUVar5,(MethodInfo *)0x0),
         pUVar13 != (UnityEngine_Transform_o *)0x0)) {
        UVar35 = UnityEngine_Transform__get_position(pUVar13,(MethodInfo *)0x0);
        position_02.fields.z = UVar35.fields.z;
        lVar18 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields;
        if ((lVar18 != 0) &&
           (pUVar13 = *(UnityEngine_Transform_o **)(lVar18 + 0x10),
           pUVar13 != (UnityEngine_Transform_o *)0x0)) {
          UVar33 = UnityEngine_Transform__get_position(pUVar13,(MethodInfo *)0x0);
          position_02.fields.y = UVar33.fields.y;
          auStack_98._0_4_ = UVar35.fields.x;
          if (*(int *)(TypeInfo_EffectPrefabs + 0xe4) == 0) {
            il2cpp_init_class();
          }
          position_02.fields.x = (float)auStack_98._0_4_;
          Effects_EffectSpawner__Spawn
                    (*(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x60),position_02,UVar36
                     ,*(float *)((long)&(__this->fields).TitanColliderToggler + 4),1,
                     (System_Object_array *)0x0,(MethodInfo *)0x0);
          vtable_dispatch = (__this->klass->vtable)._173_SpawnShatter.methodPtr;
          pMVar23 = (__this->klass->vtable)._173_SpawnShatter.method;
          fStack_88 = (float)auStack_98._0_4_;
          goto LAB_0400c82d;
        }
      }
      goto LAB_0400e001;
    }
    lVar18 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields;
    if (lVar18 == 0) goto LAB_0400e001;
    pCVar22 = *(Characters_BaseHitbox_o **)(lVar18 + 0x98);
    goto LAB_0400bb84;
  }
  pSVar14 = *(System_String_o **)&(__this->fields)._disableCooldownLeft;
  if (pSVar14 == (System_String_o *)0x0) goto LAB_0400e001;
  bVar11 = System_String__StartsWith(pSVar14,"AttackSwing",(MethodInfo *)0x0);
  if ((char)bVar11 != '\0') {
    UVar35.fields.x = (__this->fields)._startPosition.fields.z;
    if ((fVar25 <= 0.41) || (UVar35.fields.x != 0.0)) {
      if (fVar25 <= 0.45) {
        return;
      }
      if (UVar35.fields.x != 1.4013e-45) {
        return;
      }
      if (*(long *)pfVar20 == 0) goto LAB_0400e001;
      bVar11 = System_String__op_Equality
                         (*(System_String_o **)&(__this->fields)._climbCooldownLeft,
                          *(System_String_o **)(*(long *)pfVar20 + 0xa8),(MethodInfo *)0x0);
      lVar18 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields;
      if (lVar18 == 0) goto LAB_0400e001;
      if ((char)bVar11 == '\0') {
        pUVar5 = *(UnityEngine_Component_o **)(lVar18 + 0x90);
      }
      else {
        pUVar5 = *(UnityEngine_Component_o **)(lVar18 + 0x88);
      }
      if ((pUVar5 == (UnityEngine_Component_o *)0x0) ||
         (pUVar13 = UnityEngine_Component__get_transform(pUVar5,(MethodInfo *)0x0),
         pUVar13 == (UnityEngine_Transform_o *)0x0)) goto LAB_0400e001;
      UVar35 = UnityEngine_Transform__get_position(pUVar13,(MethodInfo *)0x0);
      position_04.fields.z = UVar35.fields.z;
      lVar18 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields;
      if ((lVar18 == 0) ||
         (pUVar13 = *(UnityEngine_Transform_o **)(lVar18 + 0x10),
         pUVar13 == (UnityEngine_Transform_o *)0x0)) goto LAB_0400e001;
      UVar33 = UnityEngine_Transform__get_position(pUVar13,(MethodInfo *)0x0);
      position_04.fields.y = UVar33.fields.y;
      auStack_98._0_4_ = UVar35.fields.x;
      if (*(int *)(TypeInfo_EffectPrefabs + 0xe4) == 0) {
        il2cpp_init_class();
      }
      position_04.fields.x = (float)auStack_98._0_4_;
      Effects_EffectSpawner__Spawn
                (*(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x58),position_04,UVar36,
                 *(float *)((long)&(__this->fields).TitanColliderToggler + 4),1,
                 (System_Object_array *)0x0,(MethodInfo *)0x0);
      pCVar19 = __this->klass;
      pMVar23 = (pCVar19->vtable)._173_SpawnShatter.method;
      UVar35.fields.x = (float)auStack_98._0_4_;
      goto LAB_0400c414;
    }
    if (*(int *)((long)&TypeInfo_TitanSounds[2].parameters + 4) == 0) {
      il2cpp_init_class();
    }
    Characters_BaseCharacter__PlaySound
              ((Characters_BaseCharacter_o *)__this,
               *(System_String_o **)(TypeInfo_TitanSounds[2].virtualMethodPointer + 0x18),(MethodInfo *)0x0)
    ;
    lVar18 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields.z;
    if (lVar18 == 0) goto LAB_0400e001;
    bVar11 = System_String__op_Equality
                       (*(System_String_o **)&(__this->fields)._climbCooldownLeft,
                        *(System_String_o **)(lVar18 + 0xa8),(MethodInfo *)0x0);
    lVar18 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields;
    if (lVar18 == 0) goto LAB_0400e001;
    if ((char)bVar11 == '\0') {
      pCVar22 = *(Characters_BaseHitbox_o **)(lVar18 + 0x90);
    }
    else {
      pCVar22 = *(Characters_BaseHitbox_o **)(lVar18 + 0x88);
    }
    fVar25 = (float)(*(__this->klass->vtable)._167_GetHitboxTime.methodPtr)
                              (0x3ca3d70a,__this,(__this->klass->vtable)._167_GetHitboxTime.method);
    UVar35.fields.x =
         (float)(*(__this->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3ca3d70a,__this);
    goto joined_r0x0400b666;
  }
  pSVar14 = *(System_String_o **)&(__this->fields)._disableCooldownLeft;
  if (pSVar14 == (System_String_o *)0x0) goto LAB_0400e001;
  bVar11 = System_String__StartsWith(pSVar14,"AttackBite",(MethodInfo *)0x0);
  if ((char)bVar11 != '\0') {
    if (*(long *)pfVar20 == 0) goto LAB_0400e001;
    bVar11 = System_String__op_Equality
                       (*(System_String_o **)&(__this->fields)._climbCooldownLeft,
                        *(System_String_o **)(*(long *)pfVar20 + 0xb8),(MethodInfo *)0x0);
    cVar10 = (char)(__this->fields).CustomDamage;
    uVar21 = (ulong)(cVar10 == '\0');
    pfVar20 = (float *)(&DAT_00cd10d0 + uVar21 * 4);
    if ((char)bVar11 != '\0') {
      pfVar20 = (float *)(&DAT_00cd1008 + uVar21 * 4);
    }
    UVar35.fields.x = (__this->fields)._startPosition.fields.z;
    if ((UVar35.fields.x != 0.0) || (fVar25 < *pfVar20 || fVar25 == *pfVar20)) {
      uVar21 = (ulong)(cVar10 == '\0');
      pfVar20 = (float *)(&DAT_00cd0e00 + uVar21 * 4);
      if ((char)bVar11 != '\0') {
        pfVar20 = (float *)(&DAT_00cd1080 + uVar21 * 4);
      }
      if (UVar35.fields.x != 1.4013e-45) {
        return;
      }
      if (fVar25 < *pfVar20 || fVar25 == *pfVar20) {
        return;
      }
      lVar18 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields;
      if (((lVar18 == 0) ||
          (pUVar5 = *(UnityEngine_Component_o **)(lVar18 + 0x80),
          pUVar5 == (UnityEngine_Component_o *)0x0)) ||
         (pUVar13 = UnityEngine_Component__get_transform(pUVar5,(MethodInfo *)0x0),
         pUVar13 == (UnityEngine_Transform_o *)0x0)) goto LAB_0400e001;
      UVar33 = UnityEngine_Transform__get_position(pUVar13,(MethodInfo *)0x0);
      UVar34 = UnityEngine_Transform__get_up(pUVar13,(MethodInfo *)0x0);
      fVar25 = *(float *)((long)&(__this->fields).TitanColliderToggler + 4);
      UVar35.fields.x = fVar25 * UVar34.fields.x;
      fVar28 = fVar25 * UVar34.fields.y;
      auStack_98._0_4_ = UVar33.fields.x;
      auStack_98._4_4_ = UVar33.fields.y;
      position_03.fields.z = UVar34.fields.z * fVar25 + UVar33.fields.z;
      if (*(int *)(TypeInfo_EffectPrefabs + 0xe4) == 0) {
        il2cpp_init_class();
        fVar25 = *(float *)((long)&(__this->fields).TitanColliderToggler + 4);
      }
      position_03.fields.x = UVar35.fields.x + (float)auStack_98._0_4_;
      position_03.fields.y = fVar28 + (float)auStack_98._4_4_;
      Effects_EffectSpawner__Spawn
                (*(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0xa0),position_03,UVar36,
                 fVar25,1,(System_Object_array *)0x0,(MethodInfo *)0x0);
      pMVar23 = TypeInfo_TitanSounds;
      if (*(int *)((long)&TypeInfo_TitanSounds[2].parameters + 4) == 0) {
        il2cpp_init_class();
      }
      pSVar14 = Characters_TitanSounds__GetRandomBite(pMVar23);
      Characters_BaseCharacter__PlaySound
                ((Characters_BaseCharacter_o *)__this,pSVar14,(MethodInfo *)0x0);
      goto LAB_0400bf67;
    }
    lVar18 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields;
    if (lVar18 == 0) goto LAB_0400e001;
    pCVar22 = *(Characters_BaseHitbox_o **)(lVar18 + 0x80);
    goto LAB_0400c47d;
  }
  pSVar14 = *(System_String_o **)&(__this->fields)._disableCooldownLeft;
  if (pSVar14 == (System_String_o *)0x0) goto LAB_0400e001;
  bVar11 = System_String__StartsWith(pSVar14,"AttackBrush",(MethodInfo *)0x0);
  if ((char)bVar11 != '\0') {
    if ((__this->fields)._startPosition.fields.z != 0.0) {
      return;
    }
    uVar21 = (ulong)((char)(__this->fields).CustomDamage == '\0');
    if (fVar25 < *(float *)(&DAT_00cd0e28 + uVar21 * 4) ||
        fVar25 == *(float *)(&DAT_00cd0e28 + uVar21 * 4)) {
      return;
    }
    if (*(int *)((long)&TypeInfo_TitanSounds[2].parameters + 4) == 0) {
      il2cpp_init_class();
    }
    Characters_BaseCharacter__PlaySound
              ((Characters_BaseCharacter_o *)__this,
               *(System_String_o **)(TypeInfo_TitanSounds[2].virtualMethodPointer + 0x18),(MethodInfo *)0x0)
    ;
    lVar18 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields.z;
    if (lVar18 == 0) goto LAB_0400e001;
    bVar11 = System_String__op_Equality
                       (*(System_String_o **)&(__this->fields)._climbCooldownLeft,
                        *(System_String_o **)(lVar18 + 0x1b0),(MethodInfo *)0x0);
    lVar18 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields;
    if (lVar18 == 0) goto LAB_0400e001;
    if ((char)bVar11 == '\0') {
      pCVar22 = *(Characters_BaseHitbox_o **)(lVar18 + 0x90);
    }
    else {
      pCVar22 = *(Characters_BaseHitbox_o **)(lVar18 + 0x88);
    }
    UVar35.fields.x =
         (float)(*(__this->klass->vtable)._167_GetHitboxTime.methodPtr)
                          (*(undefined4 *)(&DAT_00cd0da0 + uVar21 * 4),__this);
    goto joined_r0x0400b73d;
  }
  pSVar14 = *(System_String_o **)&(__this->fields)._disableCooldownLeft;
  if (pSVar14 == (System_String_o *)0x0) goto LAB_0400e001;
  bVar11 = System_String__StartsWith(pSVar14,"AttackGrab",(MethodInfo *)0x0);
  if ((char)bVar11 != '\0') {
    if ((__this->fields)._startPosition.fields.z != 0.0) {
      return;
    }
    (__this->fields)._startPosition.fields.z = 1.4013e-45;
    lVar18 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields.z;
    if (lVar18 == 0) goto LAB_0400e001;
    bVar11 = System_String__op_Equality
                       (*(System_String_o **)pfVar1,*(System_String_o **)(lVar18 + 0x100),
                        (MethodInfo *)0x0);
    if ((char)bVar11 == '\0') {
      if (*(long *)pfVar20 == 0) goto LAB_0400e001;
      bVar11 = System_String__op_Equality
                         (*(System_String_o **)pfVar1,
                          *(System_String_o **)(*(long *)pfVar20 + 0x108),(MethodInfo *)0x0);
      if ((char)bVar11 != '\0') {
        lVar18 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields;
        if (lVar18 == 0) goto LAB_0400e001;
        pCVar22 = *(Characters_BaseHitbox_o **)(lVar18 + 0x90);
        goto LAB_0400ce7c;
      }
      if (*(long *)pfVar20 == 0) goto LAB_0400e001;
      bVar11 = System_String__op_Equality
                         (*(System_String_o **)pfVar1,*(System_String_o **)(*(long *)pfVar20 + 0xf0)
                          ,(MethodInfo *)0x0);
      if ((char)bVar11 != '\0') {
        lVar18 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields;
        if (lVar18 == 0) goto LAB_0400e001;
        pCVar22 = *(Characters_BaseHitbox_o **)(lVar18 + 0x88);
        UVar35.fields.x =
             (float)(*(__this->klass->vtable)._167_GetHitboxTime.methodPtr)
                              (0x3ea3d70a,__this,(__this->klass->vtable)._167_GetHitboxTime.method);
        fVar25 = (float)(*(__this->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3e23d70a,__this);
        if (pCVar22 == (Characters_BaseHitbox_o *)0x0) goto LAB_0400e001;
        goto LAB_0400beb8;
      }
      if (*(long *)pfVar20 == 0) goto LAB_0400e001;
      bVar11 = System_String__op_Equality
                         (*(System_String_o **)pfVar1,*(System_String_o **)(*(long *)pfVar20 + 0xf8)
                          ,(MethodInfo *)0x0);
      if ((char)bVar11 == '\0') {
        if (*(long *)pfVar20 == 0) goto LAB_0400e001;
        bVar11 = System_String__op_Equality
                           (*(System_String_o **)pfVar1,
                            *(System_String_o **)(*(long *)pfVar20 + 0x160),(MethodInfo *)0x0);
        if ((char)bVar11 == '\0') {
          if (*(long *)pfVar20 == 0) goto LAB_0400e001;
          bVar11 = System_String__op_Equality
                             (*(System_String_o **)pfVar1,
                              *(System_String_o **)(*(long *)pfVar20 + 0x168),(MethodInfo *)0x0);
          if ((char)bVar11 == '\0') {
            if (*(long *)pfVar20 == 0) goto LAB_0400e001;
            bVar11 = System_String__op_Equality
                               (*(System_String_o **)pfVar1,
                                *(System_String_o **)(*(long *)pfVar20 + 0x130),(MethodInfo *)0x0);
            if ((char)bVar11 == '\0') {
              if (*(long *)pfVar20 == 0) goto LAB_0400e001;
              bVar11 = System_String__op_Equality
                                 (*(System_String_o **)pfVar1,
                                  *(System_String_o **)(*(long *)pfVar20 + 0x138),(MethodInfo *)0x0)
              ;
              if ((char)bVar11 == '\0') {
                if (*(long *)pfVar20 == 0) goto LAB_0400e001;
                bVar11 = System_String__op_Equality
                                   (*(System_String_o **)pfVar1,
                                    *(System_String_o **)(*(long *)pfVar20 + 0x140),
                                    (MethodInfo *)0x0);
                if ((char)bVar11 == '\0') {
                  if (*(long *)pfVar20 == 0) goto LAB_0400e001;
                  bVar11 = System_String__op_Equality
                                     (*(System_String_o **)pfVar1,
                                      *(System_String_o **)(*(long *)pfVar20 + 0x148),
                                      (MethodInfo *)0x0);
                  if ((char)bVar11 == '\0') {
                    if (*(long *)pfVar20 == 0) goto LAB_0400e001;
                    bVar11 = System_String__op_Equality
                                       (*(System_String_o **)pfVar1,
                                        *(System_String_o **)(*(long *)pfVar20 + 0x120),
                                        (MethodInfo *)0x0);
                    if ((char)bVar11 == '\0') {
                      if (*(long *)pfVar20 == 0) goto LAB_0400e001;
                      bVar11 = System_String__op_Equality
                                         (*(System_String_o **)pfVar1,
                                          *(System_String_o **)(*(long *)pfVar20 + 0x128),
                                          (MethodInfo *)0x0);
                      if ((char)bVar11 == '\0') {
                        if (*(long *)pfVar20 == 0) goto LAB_0400e001;
                        bVar11 = System_String__op_Equality
                                           (*(System_String_o **)pfVar1,
                                            *(System_String_o **)(*(long *)pfVar20 + 0x110),
                                            (MethodInfo *)0x0);
                        if ((char)bVar11 == '\0') {
                          if (*(long *)pfVar20 == 0) goto LAB_0400e001;
                          bVar11 = System_String__op_Equality
                                             (*(System_String_o **)pfVar1,
                                              *(System_String_o **)(*(long *)pfVar20 + 0x118),
                                              (MethodInfo *)0x0);
                          if ((char)bVar11 == '\0') {
                            if (*(long *)pfVar20 == 0) goto LAB_0400e001;
                            bVar11 = System_String__op_Equality
                                               (*(System_String_o **)pfVar1,
                                                *(System_String_o **)(*(long *)pfVar20 + 0xe0),
                                                (MethodInfo *)0x0);
                            if ((char)bVar11 != '\0') {
                              lVar18 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields;
                              if (lVar18 == 0) goto LAB_0400e001;
                              pCVar22 = *(Characters_BaseHitbox_o **)(lVar18 + 0x88);
                              UVar35.fields.x =
                                   (float)(*(__this->klass->vtable)._167_GetHitboxTime.methodPtr)
                                                    (0x3e99999a,__this,
                                                     (__this->klass->vtable)._167_GetHitboxTime.
                                                     method);
                              fVar25 = (float)(*(__this->klass->vtable)._167_GetHitboxTime.methodPtr
                                              )(0x3e19999a,__this);
                              goto joined_r0x0400de10;
                            }
                            if (*(long *)pfVar20 == 0) goto LAB_0400e001;
                            bVar11 = System_String__op_Equality
                                               (*(System_String_o **)pfVar1,
                                                *(System_String_o **)(*(long *)pfVar20 + 0xe8),
                                                (MethodInfo *)0x0);
                            if ((char)bVar11 == '\0') {
                              if (*(long *)pfVar20 == 0) goto LAB_0400e001;
                              bVar11 = System_String__op_Equality
                                                 (*(System_String_o **)pfVar1,
                                                  *(System_String_o **)(*(long *)pfVar20 + 0xd0),
                                                  (MethodInfo *)0x0);
                              if ((char)bVar11 != '\0') {
                                lVar18 = *(long *)&(__this->fields)._furthestCoreLocalPosition.
                                                   fields;
                                if (lVar18 == 0) goto LAB_0400e001;
                                pCVar22 = *(Characters_BaseHitbox_o **)(lVar18 + 0x88);
                                goto LAB_0400df12;
                              }
                              if (*(long *)pfVar20 == 0) goto LAB_0400e001;
                              bVar11 = System_String__op_Equality
                                                 (*(System_String_o **)pfVar1,
                                                  *(System_String_o **)(*(long *)pfVar20 + 0xd8),
                                                  (MethodInfo *)0x0);
                              if ((char)bVar11 != '\0') goto LAB_0400dec0;
                              if (*(long *)pfVar20 == 0) goto LAB_0400e001;
                              bVar11 = System_String__op_Equality
                                                 (*(System_String_o **)pfVar1,
                                                  *(System_String_o **)(*(long *)pfVar20 + 0x150),
                                                  (MethodInfo *)0x0);
                              if ((char)bVar11 == '\0') {
                                if (*(long *)pfVar20 == 0) goto LAB_0400e001;
                                bVar11 = System_String__op_Equality
                                                   (*(System_String_o **)pfVar1,
                                                    *(System_String_o **)(*(long *)pfVar20 + 0x158),
                                                    (MethodInfo *)0x0);
                                if ((char)bVar11 == '\0') {
                                  return;
                                }
                                lVar18 = *(long *)&(__this->fields)._furthestCoreLocalPosition.
                                                   fields;
                                if (lVar18 == 0) goto LAB_0400e001;
                                pCVar22 = *(Characters_BaseHitbox_o **)(lVar18 + 0x90);
                              }
                              else {
                                lVar18 = *(long *)&(__this->fields)._furthestCoreLocalPosition.
                                                   fields;
                                if (lVar18 == 0) goto LAB_0400e001;
                                pCVar22 = *(Characters_BaseHitbox_o **)(lVar18 + 0x88);
                              }
                              pCVar19 = __this->klass;
                              pMVar23 = (pCVar19->vtable)._167_GetHitboxTime.method;
                              uVar26 = 0x3e99999a;
                            }
                            else {
LAB_0400dec0:
                              lVar18 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields;
                              if (lVar18 == 0) goto LAB_0400e001;
                              pCVar22 = *(Characters_BaseHitbox_o **)(lVar18 + 0x90);
LAB_0400df12:
                              pCVar19 = __this->klass;
                              pMVar23 = (pCVar19->vtable)._167_GetHitboxTime.method;
                              uVar26 = 0x3ec28f5c;
                            }
                            UVar35.fields.x =
                                 (float)(*(pCVar19->vtable)._167_GetHitboxTime.methodPtr)
                                                  (uVar26,__this,pMVar23);
                            fVar25 = (float)(*(__this->klass->vtable)._167_GetHitboxTime.methodPtr)
                                                      (0x3e2e147b,__this);
                            goto joined_r0x0400de10;
                          }
                          lVar18 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields;
                          if (lVar18 == 0) goto LAB_0400e001;
                          pCVar22 = *(Characters_BaseHitbox_o **)(lVar18 + 0x90);
                        }
                        else {
                          lVar18 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields;
                          if (lVar18 == 0) goto LAB_0400e001;
                          pCVar22 = *(Characters_BaseHitbox_o **)(lVar18 + 0x88);
                        }
                        UVar35.fields.x =
                             (float)(*(__this->klass->vtable)._167_GetHitboxTime.methodPtr)
                                              (0x3eb33333,__this,
                                               (__this->klass->vtable)._167_GetHitboxTime.method);
                        fVar25 = (float)(*(__this->klass->vtable)._167_GetHitboxTime.methodPtr)
                                                  (0x3d4ccccd,__this);
                        goto joined_r0x0400de10;
                      }
                      lVar18 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields;
                      if (lVar18 == 0) goto LAB_0400e001;
                      pCVar22 = *(Characters_BaseHitbox_o **)(lVar18 + 0x90);
                    }
                    else {
                      lVar18 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields;
                      if (lVar18 == 0) goto LAB_0400e001;
                      pCVar22 = *(Characters_BaseHitbox_o **)(lVar18 + 0x88);
                    }
                    UVar35.fields.x =
                         (float)(*(__this->klass->vtable)._167_GetHitboxTime.methodPtr)
                                          (0x3ed70a3d,__this,
                                           (__this->klass->vtable)._167_GetHitboxTime.method);
                    fVar25 = (float)(*(__this->klass->vtable)._167_GetHitboxTime.methodPtr)
                                              (0x3e23d70a,__this);
                    goto joined_r0x0400de10;
                  }
                  lVar18 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields;
                  if (lVar18 == 0) goto LAB_0400e001;
                  pCVar22 = *(Characters_BaseHitbox_o **)(lVar18 + 0x90);
                }
                else {
                  lVar18 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields;
                  if (lVar18 == 0) goto LAB_0400e001;
                  pCVar22 = *(Characters_BaseHitbox_o **)(lVar18 + 0x88);
                }
                UVar35.fields.x =
                     (float)(*(__this->klass->vtable)._167_GetHitboxTime.methodPtr)
                                      (0x3ed70a3d,__this,
                                       (__this->klass->vtable)._167_GetHitboxTime.method);
                fVar25 = (float)(*(__this->klass->vtable)._167_GetHitboxTime.methodPtr)
                                          (0x3e800000,__this);
                goto joined_r0x0400de10;
              }
              lVar18 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields;
              if (lVar18 == 0) goto LAB_0400e001;
              pCVar22 = *(Characters_BaseHitbox_o **)(lVar18 + 0x88);
            }
            else {
              lVar18 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields;
              if (lVar18 == 0) goto LAB_0400e001;
              pCVar22 = *(Characters_BaseHitbox_o **)(lVar18 + 0x90);
            }
            UVar35.fields.x =
                 (float)(*(__this->klass->vtable)._167_GetHitboxTime.methodPtr)
                                  (0x3eeb851f,__this,
                                   (__this->klass->vtable)._167_GetHitboxTime.method);
            fVar25 = (float)(*(__this->klass->vtable)._167_GetHitboxTime.methodPtr)
                                      (0x3d4ccccd,__this);
            goto joined_r0x0400de10;
          }
          lVar18 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields;
          if (lVar18 == 0) goto LAB_0400e001;
          pCVar22 = *(Characters_BaseHitbox_o **)(lVar18 + 0x90);
        }
        else {
          lVar18 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields;
          if (lVar18 == 0) goto LAB_0400e001;
          pCVar22 = *(Characters_BaseHitbox_o **)(lVar18 + 0x88);
        }
        UVar35.fields.x =
             (float)(*(__this->klass->vtable)._167_GetHitboxTime.methodPtr)
                              (0x3eb33333,__this,(__this->klass->vtable)._167_GetHitboxTime.method);
        fVar25 = (float)(*(__this->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3e428f5c,__this);
      }
      else {
        lVar18 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields;
        if (lVar18 == 0) goto LAB_0400e001;
        pCVar22 = *(Characters_BaseHitbox_o **)(lVar18 + 0x90);
        UVar35.fields.x =
             (float)(*(__this->klass->vtable)._167_GetHitboxTime.methodPtr)
                              (0x3ec28f5c,__this,(__this->klass->vtable)._167_GetHitboxTime.method);
        fVar25 = (float)(*(__this->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3e99999a,__this);
      }
    }
    else {
      lVar18 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields;
      if (lVar18 == 0) goto LAB_0400e001;
      pCVar22 = *(Characters_BaseHitbox_o **)(lVar18 + 0x88);
LAB_0400ce7c:
      UVar35.fields.x =
           (float)(*(__this->klass->vtable)._167_GetHitboxTime.methodPtr)
                            (0x3ed1eb85,__this,(__this->klass->vtable)._167_GetHitboxTime.method);
      fVar25 = (float)(*(__this->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3df5c28f,__this);
    }
joined_r0x0400de10:
    if (pCVar22 != (Characters_BaseHitbox_o *)0x0) goto LAB_0400beb8;
    goto LAB_0400e001;
  }
  if (*(long *)pfVar20 == 0) goto LAB_0400e001;
  bVar11 = System_String__op_Equality
                     (*(System_String_o **)&(__this->fields)._currentFallTotalTime,
                      *(System_String_o **)(*(long *)pfVar20 + 0x1d0),(MethodInfo *)0x0);
  if ((char)bVar11 == '\0') {
    return;
  }
  lVar18 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields;
  if (((lVar18 == 0) ||
      (pUVar5 = *(UnityEngine_Component_o **)(lVar18 + 0x90),
      pUVar5 == (UnityEngine_Component_o *)0x0)) ||
     (pUVar13 = UnityEngine_Component__get_transform(pUVar5,(MethodInfo *)0x0),
     pUVar13 == (UnityEngine_Transform_o *)0x0)) goto LAB_0400e001;
  UVar35 = UnityEngine_Transform__get_position(pUVar13,(MethodInfo *)0x0);
  auStack_48._4_12_ = auVar29._4_12_;
  auStack_48._0_4_ = UVar35.fields.z;
  fStack_50 = (float)extraout_XMM0_Dc;
  auStack_58 = (undefined1  [8])UVar35.fields._0_8_;
  fStack_4c = (float)extraout_XMM0_Dd;
  if ((char)(__this->fields).CustomDamage == '\0') {
    auStack_98 = (undefined1  [8])(*(__this->klass->vtable)._66_GetAimPoint.methodPtr)(__this);
    fStack_90 = (float)extraout_XMM0_Dc_00;
    fStack_8c = (float)extraout_XMM0_Dd_00;
    pSVar8 = &(__this->fields).LateUpdateHeadRotationRecv;
    (pSVar8->fields).value.fields.y = (float)SUB84(auStack_98,0);
    (pSVar8->fields).value.fields.z = (float)(int)((ulong)auStack_98 >> 0x20);
    (__this->fields).LateUpdateHeadRotationRecv.fields.value.fields.w = extraout_XMM1_Da;
    lVar18._0_4_ = (__this->fields).Dead;
    lVar18._4_4_ = (__this->fields).CustomDamageEnabled;
    fStack_88 = extraout_XMM1_Da;
  }
  else {
    plVar6 = *(long **)&(__this->fields).ActionPause;
    if (plVar6 == (long *)0x0) {
LAB_0400d012:
      lVar18 = *(long *)&(__this->fields).Dead;
      if ((lVar18 == 0) ||
         (pUVar13 = *(UnityEngine_Transform_o **)(lVar18 + 0x10),
         pUVar13 == (UnityEngine_Transform_o *)0x0)) goto LAB_0400e001;
      UVar35 = UnityEngine_Transform__get_position(pUVar13,(MethodInfo *)0x0);
      fStack_88 = UVar35.fields.z;
      fStack_90 = (float)extraout_XMM0_Dc_01;
      auStack_98 = (undefined1  [8])UVar35.fields._0_8_;
      fStack_8c = (float)extraout_XMM0_Dd_01;
      lVar18 = *(long *)&(__this->fields).Dead;
      if ((lVar18 == 0) ||
         (pUVar13 = *(UnityEngine_Transform_o **)(lVar18 + 0x10),
         pUVar13 == (UnityEngine_Transform_o *)0x0)) goto LAB_0400e001;
      UVar35 = UnityEngine_Transform__get_forward(pUVar13,(MethodInfo *)0x0);
      fVar28 = UVar35.fields.x * 200.0;
      fVar31 = UVar35.fields.y * 200.0;
      UVar35.fields.x = UVar35.fields.z * 200.0;
      fStack_a0 = extraout_XMM0_Dc_02;
      fStack_9c = extraout_XMM0_Dd_02;
LAB_0400d06e:
      auStack_98._0_4_ = (float)auStack_98._0_4_ + fVar28;
      auStack_98._4_4_ = (float)auStack_98._4_4_ + fVar31;
      fStack_88 = fStack_88 + UVar35.fields.x;
      fStack_90 = fStack_90 + fStack_a0 * 0.0;
      fStack_8c = fStack_8c + fStack_9c * 0.0;
      pSVar8 = &(__this->fields).LateUpdateHeadRotationRecv;
      (pSVar8->fields).value.fields.y = (float)auStack_98._0_4_;
      (pSVar8->fields).value.fields.z = (float)auStack_98._4_4_;
      (__this->fields).LateUpdateHeadRotationRecv.fields.value.fields.w = fStack_88;
    }
    else {
      lVar18 = *plVar6;
      if ((ulong)*(ushort *)(lVar18 + 0x12e) != 0) {
        lVar24 = 0;
        do {
          if (*(long *)(*(long *)(lVar18 + 0xb0) + lVar24) == TypeInfo_ITargetable) {
            puVar15 = (undefined8 *)
                      ((long)(*(int *)(*(long *)(lVar18 + 0xb0) + 8 + lVar24) + 2) * 0x10 + lVar18 +
                      0x138);
            goto LAB_0400cfb0;
          }
          lVar24 = lVar24 + 0x10;
        } while ((ulong)*(ushort *)(lVar18 + 0x12e) << 4 != lVar24);
      }
      puVar15 = (undefined8 *)il2cpp_runtime_glue(plVar6,TypeInfo_ITargetable,2);
LAB_0400cfb0:
      cVar10 = (*(code *)*puVar15)();
      if (cVar10 == '\0') goto LAB_0400d012;
      plVar6 = *(long **)&(__this->fields).ActionPause;
      if (plVar6 == (long *)0x0) goto LAB_0400e001;
      lVar18 = *plVar6;
      if ((ulong)*(ushort *)(lVar18 + 0x12e) != 0) {
        lVar24 = 0;
        do {
          if (*(long *)(*(long *)(lVar18 + 0xb0) + lVar24) == TypeInfo_ITargetable) {
            puVar15 = (undefined8 *)
                      (lVar18 + (long)(*(int *)(*(long *)(lVar18 + 0xb0) + 8 + lVar24) + 1) * 0x10 +
                      0x138);
            goto LAB_0400d861;
          }
          lVar24 = lVar24 + 0x10;
        } while ((ulong)*(ushort *)(lVar18 + 0x12e) << 4 != lVar24);
      }
      puVar15 = (undefined8 *)il2cpp_runtime_glue(plVar6,TypeInfo_ITargetable,1);
LAB_0400d861:
      auVar30._0_8_ = (*(code *)*puVar15)(plVar6,puVar15[1]);
      UVar35.fields.x = (float)((ulong)auVar30._0_8_ >> 0x20);
      if (DAT_056fdea6 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Math);
        DAT_056fdea6 = '\x01';
      }
      auStack_a8._0_4_ = (undefined4)extraout_XMM1_Qa;
      auStack_a8._4_4_ = (undefined4)((ulong)extraout_XMM1_Qa >> 0x20);
      fVar28 = (float)auStack_58._4_4_ - UVar35.fields.x;
      auStack_a8._0_4_ = (float)auStack_48._0_4_ - (float)auStack_a8._0_4_;
      fVar31 = (float)auStack_58._0_4_ - (float)auVar30._0_8_;
      fVar32 = (float)auStack_48._4_4_ - (float)auStack_a8._4_4_;
      UVar35.fields.x = (float)auStack_58._4_4_ - UVar35.fields.x;
      if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
        il2cpp_init_class();
      }
      auStack_a8._4_4_ = fVar31 * fVar31;
      fVar28 = (float)auStack_a8._4_4_ + fVar28 * fVar28 +
               (float)auStack_a8._0_4_ * (float)auStack_a8._0_4_;
      if (fVar28 < 0.0) {
        auStack_a8._0_4_ = sqrtf(fVar28);
        auStack_a8._4_4_ = extraout_XMM0_Db;
        fStack_a0 = (float)extraout_XMM0_Dc_06;
        fStack_9c = (float)extraout_XMM0_Dd_06;
        plVar6 = *(long **)&(__this->fields).ActionPause;
      }
      else {
        auStack_a8._0_4_ = SQRT(fVar28);
        fStack_a0 = fVar32 * fVar32;
        fStack_9c = UVar35.fields.x * UVar35.fields.x;
        plVar6 = *(long **)&(__this->fields).ActionPause;
      }
      if (plVar6 == (long *)0x0) goto LAB_0400e001;
      fVar32 = (float)auStack_a8._0_4_ /
               (__this->fields).LateUpdateHeadRotationRecv.fields.value.fields.x;
      lVar18 = *plVar6;
      if ((ulong)*(ushort *)(lVar18 + 0x12e) != 0) {
        lVar24 = 0;
        do {
          if (*(long *)(*(long *)(lVar18 + 0xb0) + lVar24) == TypeInfo_ITargetable) {
            puVar15 = (undefined8 *)
                      (lVar18 + (long)(*(int *)(*(long *)(lVar18 + 0xb0) + 8 + lVar24) + 1) * 0x10 +
                      0x138);
            goto LAB_0400d9a4;
          }
          lVar24 = lVar24 + 0x10;
        } while ((ulong)*(ushort *)(lVar18 + 0x12e) << 4 != lVar24);
      }
      puVar15 = (undefined8 *)il2cpp_runtime_glue(plVar6,TypeInfo_ITargetable,1);
LAB_0400d9a4:
      auStack_98 = (undefined1  [8])(*(code *)*puVar15)(plVar6);
      fStack_90 = (float)extraout_XMM0_Dc_07;
      fStack_8c = (float)extraout_XMM0_Dd_07;
      pSVar8 = &(__this->fields).LateUpdateHeadRotationRecv;
      (pSVar8->fields).value.fields.y = (float)SUB84(auStack_98,0);
      (pSVar8->fields).value.fields.z = (float)(int)((ulong)auStack_98 >> 0x20);
      (__this->fields).LateUpdateHeadRotationRecv.fields.value.fields.w = extraout_XMM1_Da_00;
      __this_01 = *(Characters_BaseCharacter_o **)&(__this->fields).ActionPause;
      fStack_88 = extraout_XMM1_Da_00;
      if (__this_01 != (Characters_BaseCharacter_o *)0x0) {
        bVar4 = (TypeInfo_BaseCharacter->_2).naturalAligment;
        if (((__this_01->klass->_2).naturalAligment < bVar4) ||
           ((__this_01->klass->_2).typeHierarchy[(ulong)bVar4 - 1] != TypeInfo_BaseCharacter))
        goto LAB_0400d09a;
        auStack_a8._0_4_ = (float)auStack_a8._0_4_ / 120.0;
        UVar35.fields.x = 1.0;
        if ((float)auStack_a8._0_4_ <= 1.0) {
          UVar35.fields.x = (float)auStack_a8._0_4_;
        }
        UVar35.fields.x = (float)(-(uint)(0.0 <= (float)auStack_a8._0_4_) & (uint)UVar35.fields.x);
        UVar33 = Characters_BaseCharacter__GetVelocity(__this_01,(MethodInfo *)0x0);
        fStack_a0 = fStack_a0 * extraout_XMM0_Dc_08;
        fStack_9c = fStack_9c * extraout_XMM0_Dd_08;
        fVar28 = UVar35.fields.x * fVar32 * UVar33.fields.x;
        fVar31 = UVar35.fields.x * fVar32 * UVar33.fields.y;
        UVar35.fields.x = UVar33.fields.z * fVar32 * UVar35.fields.x;
        goto LAB_0400d06e;
      }
    }
LAB_0400d09a:
    lVar18._0_4_ = (__this->fields).Dead;
    lVar18._4_4_ = (__this->fields).CustomDamageEnabled;
  }
  if ((lVar18 == 0) ||
     (*(UnityEngine_Transform_o **)(lVar18 + 0x10) == (UnityEngine_Transform_o *)0x0))
  goto LAB_0400e001;
  UVar35 = UnityEngine_Transform__get_position
                     (*(UnityEngine_Transform_o **)(lVar18 + 0x10),(MethodInfo *)0x0);
  lVar18 = *(long *)&(__this->fields).Dead;
  if ((lVar18 == 0) ||
     (pUVar13 = *(UnityEngine_Transform_o **)(lVar18 + 0x10),
     pUVar13 == (UnityEngine_Transform_o *)0x0)) goto LAB_0400e001;
  UVar33 = UnityEngine_Transform__get_position(pUVar13,(MethodInfo *)0x0);
  fStack_30 = (float)extraout_XMM0_Dc_03;
  auStack_38 = (undefined1  [8])UVar33.fields._0_8_;
  fStack_2c = (float)extraout_XMM0_Dd_03;
  auStack_a8._4_4_ = UVar35.fields.y;
  if (DAT_056fde20 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056fde20 = '\x01';
  }
  auStack_a8._0_4_ = (float)auStack_98._0_4_ - (float)auStack_38._0_4_;
  auStack_a8._4_4_ = (float)auStack_a8._4_4_ - (float)auStack_38._4_4_;
  fStack_a0 = fStack_90 - fStack_30;
  fStack_9c = fStack_8c - fStack_2c;
  fStack_88 = fStack_88 - UVar33.fields.z;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_init_class();
  }
  uVar26 = 0;
  uVar27 = 0;
  UVar35.fields.x =
       fStack_88 * fStack_88 +
       (float)auStack_a8._4_4_ * (float)auStack_a8._4_4_ +
       (float)auStack_a8._0_4_ * (float)auStack_a8._0_4_;
  if (UVar35.fields.x < 0.0) {
    UVar35.fields.x = sqrtf(UVar35.fields.x);
    uVar26 = extraout_XMM0_Dc_04;
    uVar27 = extraout_XMM0_Dd_04;
    if (UVar35.fields.x <= 1e-05) goto LAB_0400d1d1;
LAB_0400d194:
    fStack_88 = fStack_88 / UVar35.fields.x;
    auVar29._4_4_ = UVar35.fields.x;
    auVar29._0_4_ = UVar35.fields.x;
    auVar29._8_4_ = uVar26;
    auVar29._12_4_ = uVar27;
    auVar30 = divps(_auStack_a8,auVar29);
    lVar24._0_4_ = (__this->fields).Dead;
    lVar24._4_4_ = (__this->fields).CustomDamageEnabled;
  }
  else {
    UVar35.fields.x = SQRT(UVar35.fields.x);
    if (1e-05 < UVar35.fields.x) goto LAB_0400d194;
LAB_0400d1d1:
    if (DAT_056fdd15 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fdd15 = '\x01';
    }
    auVar30._0_8_ = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    fStack_88 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    lVar24._0_4_ = (__this->fields).Dead;
    lVar24._4_4_ = (__this->fields).CustomDamageEnabled;
  }
  if ((lVar24 == 0) ||
     (pUVar13 = *(UnityEngine_Transform_o **)(lVar24 + 0x10),
     pUVar13 == (UnityEngine_Transform_o *)0x0)) goto LAB_0400e001;
  UVar36 = UnityEngine_Transform__get_rotation(pUVar13,(MethodInfo *)0x0);
  forward.fields.z = fStack_88;
  forward.fields.x = (float)(int)auVar30._0_8_;
  forward.fields.y = (float)(int)((ulong)auVar30._0_8_ >> 0x20);
  b = UnityEngine_Quaternion__LookRotation(forward,(MethodInfo *)0x0);
  UVar35.fields.x = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  UVar36 = UnityEngine_Quaternion__Lerp(UVar36,b,UVar35.fields.x * 5.0,(MethodInfo *)0x0);
  UnityEngine_Transform__set_rotation(pUVar13,UVar36,(MethodInfo *)0x0);
  UVar35.fields.x = (__this->fields)._startPosition.fields.z;
  if ((0.1 < fVar25) && (UVar35.fields.x == 0.0)) {
    if (*(int *)((long)&TypeInfo_TitanSounds[2].parameters + 4) == 0) {
      il2cpp_init_class();
    }
    Characters_BaseCharacter__PlaySound
              ((Characters_BaseCharacter_o *)__this,
               *(System_String_o **)(TypeInfo_TitanSounds[2].virtualMethodPointer + 0x140),(MethodInfo *)0x0
              );
    (__this->fields)._startPosition.fields.z = 1.4013e-45;
    if (*(int *)(TypeInfo_SpawnablePrefabs + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar14 = *(System_String_o **)(*(long *)(TypeInfo_SpawnablePrefabs + 0xb8) + 8);
    if (DAT_056fde1e == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Quaternion);
      DAT_056fde1e = '\x01';
    }
    rotation = **(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8);
    fVar25 = *(float *)((long)&(__this->fields).TitanColliderToggler + 4);
    pSVar16 = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,1);
    lVar18 = *(long *)&(__this->fields).Dead;
    if ((lVar18 != 0) && (lVar18 = *(long *)(lVar18 + 0x20), lVar18 != 0)) {
      uStack_5c = *(undefined4 *)(lVar18 + 0x94);
      pIVar17 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&uStack_5c);
      if (pSVar16 == (System_Object_array *)0x0) goto LAB_0400e001;
      if ((pIVar17 != (Il2CppObject *)0x0) &&
         (lVar18 = il2cpp_runtime_glue(pIVar17,(((pSVar16->obj).klass)->_1).element_class),
         lVar18 == 0)) goto LAB_0400e00b;
      if ((int)pSVar16->max_length != 0) {
        pSVar16->m_Items[0] = pIVar17;
        il2cpp_runtime_glue(pSVar16->m_Items,pIVar17);
        auVar30 = _auStack_58;
        position_05.fields.z = (float)auStack_48._0_4_;
        position_05.fields.x = (float)auStack_58._0_4_;
        position_05.fields.y = (float)auStack_58._4_4_;
        _auStack_58 = auVar30;
        Spawnables_SpawnableSpawner__Spawn
                  (pSVar14,position_05,(UnityEngine_Quaternion_o)rotation,fVar25 * 1.5,pSVar16,
                   (MethodInfo *)0x0);
        return;
      }
      goto LAB_0400e006;
    }
    goto LAB_0400e001;
  }
  if (fVar25 <= 0.61) {
    return;
  }
  if (UVar35.fields.x != 1.4013e-45) {
    return;
  }
  iVar12 = UnityEngine_Random__Range(0,2,(MethodInfo *)0x0);
  if (*(int *)((long)&TypeInfo_TitanSounds[2].parameters + 4) == 0) {
    il2cpp_init_class();
  }
  Characters_BaseCharacter__PlaySound
            ((Characters_BaseCharacter_o *)__this,
             *(System_String_o **)
              (TypeInfo_TitanSounds[2].virtualMethodPointer + (ulong)(iVar12 != 0) * 8 + 0x148),
             (MethodInfo *)0x0);
  (__this->fields)._startPosition.fields.z = 2.8026e-45;
  pSVar8 = &(__this->fields).LateUpdateHeadRotationRecv;
  uVar2 = (pSVar8->fields).value.fields.y;
  uVar3 = (pSVar8->fields).value.fields.z;
  fVar25 = (__this->fields).LateUpdateHeadRotationRecv.fields.value.fields.w;
  if (DAT_056fde20 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056fde20 = '\x01';
  }
  auStack_b8._0_4_ = (float)uVar2 - (float)auStack_58._0_4_;
  auStack_b8._4_4_ = (float)uVar3 - (float)auStack_58._4_4_;
  fStack_b0 = 0.0 - fStack_50;
  fStack_ac = 0.0 - fStack_4c;
  fVar25 = fVar25 - (float)auStack_48._0_4_;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_init_class();
  }
  uVar26 = 0;
  uVar27 = 0;
  UVar35.fields.x =
       fVar25 * fVar25 +
       (float)auStack_b8._4_4_ * (float)auStack_b8._4_4_ +
       (float)auStack_b8._0_4_ * (float)auStack_b8._0_4_;
  if (UVar35.fields.x < 0.0) {
    UVar35.fields.x = sqrtf(UVar35.fields.x);
    uVar26 = extraout_XMM0_Dc_05;
    uVar27 = extraout_XMM0_Dd_05;
    if (UVar35.fields.x <= 1e-05) goto LAB_0400d587;
LAB_0400d54a:
    fVar25 = fVar25 / UVar35.fields.x;
    auVar7._4_4_ = UVar35.fields.x;
    auVar7._0_4_ = UVar35.fields.x;
    auVar7._8_4_ = uVar26;
    auVar7._12_4_ = uVar27;
    auVar30 = divps(_auStack_b8,auVar7);
    lVar9._0_4_ = (__this->fields).Dead;
    lVar9._4_4_ = (__this->fields).CustomDamageEnabled;
  }
  else {
    UVar35.fields.x = SQRT(UVar35.fields.x);
    if (1e-05 < UVar35.fields.x) goto LAB_0400d54a;
LAB_0400d587:
    if (DAT_056fdd15 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fdd15 = '\x01';
    }
    auVar30._0_8_ = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    fVar25 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    lVar9._0_4_ = (__this->fields).Dead;
    lVar9._4_4_ = (__this->fields).CustomDamageEnabled;
  }
  if (lVar9 != 0) {
    __this_00 = *(Photon_Pun_PhotonView_o **)(lVar9 + 0x20);
    pSVar16 = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,0);
    if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
      Photon_Pun_PhotonView__RPC(__this_00,"ClearRockRPC",0,pSVar16,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_ProjectilePrefabs + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar14 = *(System_String_o **)(*(long *)(TypeInfo_ProjectilePrefabs + 0xb8) + 0x28);
      forward_00.fields.z = fVar25;
      forward_00.fields.x = (float)(int)auVar30._0_8_;
      forward_00.fields.y = (float)(int)((ulong)auVar30._0_8_ >> 0x20);
      UVar36 = UnityEngine_Quaternion__LookRotation(forward_00,(MethodInfo *)0x0);
      UVar35.fields.x = (__this->fields).LateUpdateHeadRotationRecv.fields.value.fields.x;
      if (DAT_056fdd15 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Vector3);
        DAT_056fdd15 = '\x01';
      }
      lVar18 = *(long *)&(__this->fields).Dead;
      if ((lVar18 != 0) && (lVar18 = *(long *)(lVar18 + 0x20), lVar18 != 0)) {
        _fStack_30 = 0;
        auStack_38 = (undefined1  [8])**(ulong **)(TypeInfo_Vector3 + 0xb8);
        fVar28 = *(float *)(*(ulong **)(TypeInfo_Vector3 + 0xb8) + 1);
        iVar12 = *(int32_t *)(lVar18 + 0x94);
        pSVar16 = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,1);
        fStack_60 = *(float *)((long)&(__this->fields).TitanColliderToggler + 4) * 1.5;
        pIVar17 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,&fStack_60);
        if (pSVar16 != (System_Object_array *)0x0) {
          if ((pIVar17 != (Il2CppObject *)0x0) &&
             (lVar18 = il2cpp_runtime_glue(pIVar17,(((pSVar16->obj).klass)->_1).element_class),
             lVar18 == 0)) {
LAB_0400e00b:
            auVar30._0_8_ = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
            il2cpp_glue_02274a00(auVar30._0_8_,0);
          }
          if ((int)pSVar16->max_length != 0) {
            auStack_b8._0_4_ = (undefined4)auVar30._0_8_;
            auStack_b8._4_4_ = (undefined4)((ulong)auVar30._0_8_ >> 0x20);
            pSVar16->m_Items[0] = pIVar17;
            il2cpp_runtime_glue(pSVar16->m_Items,pIVar17);
            auVar29 = _auStack_38;
            auVar30 = _auStack_58;
            position_06.fields.z = (float)auStack_48._0_4_;
            position_06.fields.x = (float)auStack_58._0_4_;
            position_06.fields.y = (float)auStack_58._4_4_;
            velocity.fields.z = fVar25 * UVar35.fields.x;
            velocity.fields.x = (float)auStack_b8._0_4_ * UVar35.fields.x;
            velocity.fields.y = (float)auStack_b8._4_4_ * UVar35.fields.x;
            gravity.fields.z = fVar28;
            gravity.fields.x = (float)auStack_38._0_4_;
            gravity.fields.y = (float)auStack_38._4_4_;
            _auStack_58 = auVar30;
            _auStack_38 = auVar29;
            Projectiles_ProjectileSpawner__Spawn
                      (pSVar14,position_06,UVar36,velocity,gravity,10.0,iVar12,"",pSVar16,
                       (MethodInfo *)0x0);
            return;
          }
LAB_0400e006:
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
      }
    }
  }
LAB_0400e001:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BasicTitan$$UpdateEat
// il2cpp: void Characters_BasicTitan__UpdateEat (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x400e100

void Characters_BasicTitan__UpdateEat(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  Characters_BaseTitanComponentCache_o *pCVar1;
  UnityEngine_Component_o *__this_00;
  Photon_Realtime_Player_o *targetPlayer;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  bool_conflict bVar4;
  UnityEngine_Transform_o *pUVar5;
  Photon_Pun_PhotonView_o *pPVar6;
  UnityEngine_Object_o *x;
  Photon_Pun_PhotonView_o *pPVar7;
  System_Object_array *parameters;
  Il2CppObject *pIVar8;
  long lVar9;
  float fVar10;
  undefined8 uVar11;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 uVar12;
  float extraout_XMM0_Dc_02;
  float extraout_XMM0_Dc_03;
  undefined4 extraout_XMM0_Dc_04;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 uVar13;
  float extraout_XMM0_Dd_02;
  float extraout_XMM0_Dd_03;
  undefined4 extraout_XMM0_Dd_04;
  float in_XMM1_Da;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  UnityEngine_Vector3_o UVar18;
  UnityEngine_Vector3_o UVar19;
  UnityEngine_Quaternion_o UVar20;
  UnityEngine_Quaternion_o b;
  undefined8 uStack_78;
  float fStack_68;
  float fStack_48;
  float fStack_44;
  undefined8 uStack_30;
  float fStack_28;
  undefined *puStack_20;
  
  if (DAT_0570425e == '\0') {
    puStack_20 = (undefined *)0x400e11c;
    il2cpp_init_method_metadata(&TypeInfo_Object);
    puStack_20 = (undefined *)0x400e128;
    il2cpp_init_method_metadata(&"TitanEat");
    puStack_20 = (undefined *)0x400e134;
    il2cpp_init_method_metadata(&"");
    DAT_0570425e = '\x01';
  }
  if (*(int *)&(__this->fields).OutlineComponent != 0x1b) {
    pCVar1 = (__this->fields).BaseTitanCache;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      puStack_20 = (undefined *)0x400e167;
      il2cpp_init_class();
    }
    puStack_20 = (undefined *)0x400e173;
    bVar4 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (((char)bVar4 != '\0') && (4.72 < (__this->fields)._currentCrippleTime)) {
      (*(__this->klass->vtable)._140_IdleWait.methodPtr)
                (0x3f000000,__this,(__this->klass->vtable)._140_IdleWait.method);
      return;
    }
    if ((*(int *)&(__this->fields).OutlineComponent != 0x1b) &&
       ((__this->fields)._currentCrippleTime <= 4.72)) {
      pCVar1 = (__this->fields).BaseTitanCache;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        puStack_20 = (undefined *)0x400e1e4;
        il2cpp_init_class();
      }
      puStack_20 = (undefined *)0x400e1f0;
      bVar4 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(char *)((long)&(__this->fields).FeedVictimName + 1) == '\0') {
          uVar14 = 100;
        }
        else {
          uVar14 = *(undefined4 *)((long)&(__this->fields).FeedVictimName + 4);
        }
        pCVar1 = (__this->fields).BaseTitanCache;
        puStack_20 = (undefined *)0x400e220;
        (*(__this->klass->vtable)._148_Ungrab.methodPtr)
                  (__this,(__this->klass->vtable)._148_Ungrab.method);
        if (pCVar1 == (Characters_BaseTitanComponentCache_o *)0x0) goto LAB_0400e2c7;
        puStack_20 = (undefined *)0x400e257;
        (*pCVar1->klass[4]._1.methods)
                  (pCVar1,__this,uVar14,"TitanEat","",pCVar1->klass[4]._1.nestedTypes);
      }
    }
  }
  if ((char)(__this->fields).CustomDamage != '\0') {
    return;
  }
  pCVar1 = (__this->fields).BaseTitanCache;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    puStack_20 = (undefined *)0x400e27c;
    il2cpp_init_class();
  }
  puStack_20 = (undefined *)0x400e286;
  bVar4 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pCVar1,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    return;
  }
  pCVar1 = (__this->fields).BaseTitanCache;
  if (pCVar1 == (Characters_BaseTitanComponentCache_o *)0x0) {
LAB_0400e2c7:
                    /* WARNING: Subroutine does not return */
    puStack_20 = &UNK_0400e2cc;
    il2cpp_raise_exception();
  }
  if (*(char *)&(pCVar1->fields).NapeHurtbox != '\0') {
    return;
  }
  if (*(char *)&(__this->fields).TitanColliderToggler != '\0') {
    return;
  }
  puStack_20 = (undefined *)0x400e2b1;
  bVar4 = UnityEngine_Input__get_anyKeyDown((MethodInfo *)0x0);
  if (((char)bVar4 == '\0') && (*(int *)&(__this->fields).OutlineComponent != 0x1b)) {
    return;
  }
  if (DAT_0570425f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    il2cpp_init_method_metadata(&"BlowAwayRPC");
    DAT_0570425f = '\x01';
  }
  if (*(int *)&(__this->fields).OutlineComponent != 0x1b) {
    lVar9 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields.z;
    if (lVar9 == 0) goto LAB_0400e858;
    Characters_BaseTitan__StateAction
              ((Characters_BaseTitan_o *)__this,0x1b,*(System_String_o **)(lVar9 + 0x1d0),0.1,1,
               (MethodInfo *)0x0);
  }
  fVar10 = (float)(*(__this->klass->vtable)._66_GetAimPoint.methodPtr)(__this);
  lVar9 = *(long *)&(__this->fields).Dead;
  if ((lVar9 == 0) ||
     (pUVar5 = *(UnityEngine_Transform_o **)(lVar9 + 0x10), pUVar5 == (UnityEngine_Transform_o *)0x0
     )) goto LAB_0400e858;
  UVar18 = UnityEngine_Transform__get_position(pUVar5,(MethodInfo *)0x0);
  lVar9 = *(long *)&(__this->fields).Dead;
  if ((lVar9 == 0) ||
     (pUVar5 = *(UnityEngine_Transform_o **)(lVar9 + 0x10), pUVar5 == (UnityEngine_Transform_o *)0x0
     )) goto LAB_0400e858;
  UVar19 = UnityEngine_Transform__get_position(pUVar5,(MethodInfo *)0x0);
  uStack_78._4_4_ = UVar18.fields.y;
  if (DAT_056fde20 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056fde20 = '\x01';
  }
  auVar17._0_4_ = fVar10 - UVar19.fields.x;
  auVar17._4_4_ = uStack_78._4_4_ - UVar19.fields.y;
  auVar17._8_4_ = extraout_XMM0_Dc - extraout_XMM0_Dc_00;
  auVar17._12_4_ = extraout_XMM0_Dd - extraout_XMM0_Dd_00;
  in_XMM1_Da = in_XMM1_Da - UVar19.fields.z;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_init_class();
  }
  uVar12 = 0;
  uVar13 = 0;
  fVar10 = in_XMM1_Da * in_XMM1_Da + auVar17._4_4_ * auVar17._4_4_ + auVar17._0_4_ * auVar17._0_4_;
  uVar14 = 0;
  uVar15 = 0;
  if (fVar10 < 0.0) {
    fVar10 = sqrtf(fVar10);
    uVar12 = extraout_XMM0_Dc_01;
    uVar13 = extraout_XMM0_Dd_01;
    if (fVar10 <= 1e-05) goto LAB_0400e476;
LAB_0400e4dc:
    in_XMM1_Da = in_XMM1_Da / fVar10;
    auVar3._4_4_ = fVar10;
    auVar3._0_4_ = fVar10;
    auVar3._8_4_ = uVar12;
    auVar3._12_4_ = uVar13;
    auVar17 = divps(auVar17,auVar3);
    uVar11 = auVar17._0_8_;
    lVar9._0_4_ = (__this->fields).Dead;
    lVar9._4_4_ = (__this->fields).CustomDamageEnabled;
  }
  else {
    fVar10 = SQRT(fVar10);
    if (1e-05 < fVar10) goto LAB_0400e4dc;
LAB_0400e476:
    if (DAT_056fdd15 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fdd15 = '\x01';
    }
    uVar11 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    in_XMM1_Da = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    lVar9._0_4_ = (__this->fields).Dead;
    lVar9._4_4_ = (__this->fields).CustomDamageEnabled;
  }
  if ((lVar9 == 0) ||
     (pUVar5 = *(UnityEngine_Transform_o **)(lVar9 + 0x10), pUVar5 == (UnityEngine_Transform_o *)0x0
     )) goto LAB_0400e858;
  UVar20 = UnityEngine_Transform__get_rotation(pUVar5,(MethodInfo *)0x0);
  UVar18.fields.z = in_XMM1_Da;
  UVar18.fields.x = (float)(int)uVar11;
  UVar18.fields.y = (float)(int)((ulong)uVar11 >> 0x20);
  b = UnityEngine_Quaternion__LookRotation(UVar18,(MethodInfo *)0x0);
  fVar10 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  UVar20 = UnityEngine_Quaternion__Lerp(UVar20,b,fVar10 * 5.0,(MethodInfo *)0x0);
  UnityEngine_Transform__set_rotation(pUVar5,UVar20,(MethodInfo *)0x0);
  fVar10 = (float)(*(__this->klass->vtable)._166_GetAnimationTime.methodPtr)(__this);
  if (fVar10 <= 0.61) {
    return;
  }
  lVar9 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields;
  if ((lVar9 == 0) ||
     (__this_00 = *(UnityEngine_Component_o **)(lVar9 + 0x90),
     __this_00 == (UnityEngine_Component_o *)0x0)) goto LAB_0400e858;
  pCVar1 = (__this->fields).BaseTitanCache;
  pUVar5 = UnityEngine_Component__get_transform(__this_00,(MethodInfo *)0x0);
  if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto LAB_0400e858;
  UVar18 = UnityEngine_Transform__get_position(pUVar5,(MethodInfo *)0x0);
  fStack_68 = UVar18.fields.z;
  uVar11 = (*(__this->klass->vtable)._66_GetAimPoint.methodPtr)
                     (__this,(__this->klass->vtable)._66_GetAimPoint.method);
  if (DAT_056fde20 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    uVar14 = 0;
    uVar15 = 0;
    DAT_056fde20 = '\x01';
  }
  fStack_48 = UVar18.fields.x;
  fStack_44 = UVar18.fields.y;
  auVar16._0_4_ = (float)uVar11 - fStack_48;
  auVar16._4_4_ = (float)((ulong)uVar11 >> 0x20) - fStack_44;
  auVar16._8_4_ = extraout_XMM0_Dc_03 - extraout_XMM0_Dc_02;
  auVar16._12_4_ = extraout_XMM0_Dd_03 - extraout_XMM0_Dd_02;
  fStack_68 = fStack_68 - UVar18.fields.z;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_init_class();
    uVar14 = 0;
    uVar15 = 0;
  }
  fVar10 = fStack_68 * fStack_68 + auVar16._4_4_ * auVar16._4_4_ + auVar16._0_4_ * auVar16._0_4_;
  if (fVar10 < 0.0) {
    fVar10 = sqrtf(fVar10);
    uVar14 = extraout_XMM0_Dc_04;
    uVar15 = extraout_XMM0_Dd_04;
    if (fVar10 <= 1e-05) goto LAB_0400e683;
LAB_0400e6e7:
    fStack_68 = fStack_68 / fVar10;
    auVar2._4_4_ = fVar10;
    auVar2._0_4_ = fVar10;
    auVar2._8_4_ = uVar14;
    auVar2._12_4_ = uVar15;
    auVar17 = divps(auVar16,auVar2);
    uStack_78 = auVar17._0_8_;
  }
  else {
    fVar10 = SQRT(fVar10);
    if (1e-05 < fVar10) goto LAB_0400e6e7;
LAB_0400e683:
    if (DAT_056fdd15 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fdd15 = '\x01';
    }
    uStack_78 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    fStack_68 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  }
  (*(__this->klass->vtable)._148_Ungrab.methodPtr)(__this);
  if ((pCVar1 != (Characters_BaseTitanComponentCache_o *)0x0) &&
     (pPVar6 = Photon_Pun_MonoBehaviourPun__get_photonView
                         ((Photon_Pun_MonoBehaviourPun_o *)pCVar1,(MethodInfo *)0x0),
     pPVar6 != (Photon_Pun_PhotonView_o *)0x0)) {
    x = (UnityEngine_Object_o *)
        UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pPVar6,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar4 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      return;
    }
    pPVar6 = Photon_Pun_MonoBehaviourPun__get_photonView
                       ((Photon_Pun_MonoBehaviourPun_o *)pCVar1,(MethodInfo *)0x0);
    pPVar7 = Photon_Pun_MonoBehaviourPun__get_photonView
                       ((Photon_Pun_MonoBehaviourPun_o *)pCVar1,(MethodInfo *)0x0);
    if (pPVar7 != (Photon_Pun_PhotonView_o *)0x0) {
      uStack_78 = CONCAT44(uStack_78._4_4_ * 150.0,(float)uStack_78 * 150.0);
      targetPlayer = (pPVar7->fields)._Owner_k__BackingField;
      parameters = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,1);
      uStack_30 = uStack_78;
      fStack_28 = fStack_68 * 150.0;
      pIVar8 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_Vector3,&uStack_30);
      if (parameters != (System_Object_array *)0x0) {
        if ((pIVar8 != (Il2CppObject *)0x0) &&
           (lVar9 = il2cpp_runtime_glue(pIVar8,(((parameters->obj).klass)->_1).element_class),
           lVar9 == 0)) {
          uVar11 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
          il2cpp_glue_02274a00(uVar11,0);
        }
        if ((int)parameters->max_length == 0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        parameters->m_Items[0] = pIVar8;
        il2cpp_runtime_glue(parameters->m_Items,pIVar8);
        if (pPVar6 != (Photon_Pun_PhotonView_o *)0x0) {
          Photon_Pun_PhotonView__RPC(pPVar6,"BlowAwayRPC",targetPlayer,parameters,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_0400e858:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BasicTitan$$UpdateThrowHuman
// il2cpp: void Characters_BasicTitan__UpdateThrowHuman (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x400e2d0

void Characters_BasicTitan__UpdateThrowHuman(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  UnityEngine_Component_o *__this_00;
  Characters_BaseTitanComponentCache_o *__this_01;
  Photon_Realtime_Player_o *targetPlayer;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  bool_conflict bVar3;
  UnityEngine_Transform_o *pUVar4;
  Photon_Pun_PhotonView_o *pPVar5;
  UnityEngine_Object_o *x;
  Photon_Pun_PhotonView_o *pPVar6;
  System_Object_array *parameters;
  Il2CppObject *pIVar7;
  long lVar8;
  float fVar9;
  undefined8 uVar10;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 uVar11;
  float extraout_XMM0_Dc_02;
  float extraout_XMM0_Dc_03;
  undefined4 extraout_XMM0_Dc_04;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 uVar12;
  float extraout_XMM0_Dd_02;
  float extraout_XMM0_Dd_03;
  undefined4 extraout_XMM0_Dd_04;
  float in_XMM1_Da;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  UnityEngine_Vector3_o UVar17;
  UnityEngine_Vector3_o UVar18;
  UnityEngine_Quaternion_o UVar19;
  UnityEngine_Quaternion_o b;
  undefined8 uStack_78;
  float fStack_68;
  float fStack_48;
  float fStack_44;
  undefined8 uStack_30;
  float fStack_28;
  
  if (DAT_0570425f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    il2cpp_init_method_metadata(&"BlowAwayRPC");
    DAT_0570425f = '\x01';
  }
  if (*(int *)&(__this->fields).OutlineComponent != 0x1b) {
    lVar8 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields.z;
    if (lVar8 == 0) goto LAB_0400e858;
    Characters_BaseTitan__StateAction
              ((Characters_BaseTitan_o *)__this,0x1b,*(System_String_o **)(lVar8 + 0x1d0),0.1,1,
               (MethodInfo *)0x0);
  }
  fVar9 = (float)(*(__this->klass->vtable)._66_GetAimPoint.methodPtr)(__this);
  lVar8 = *(long *)&(__this->fields).Dead;
  if ((lVar8 == 0) ||
     (pUVar4 = *(UnityEngine_Transform_o **)(lVar8 + 0x10), pUVar4 == (UnityEngine_Transform_o *)0x0
     )) goto LAB_0400e858;
  UVar17 = UnityEngine_Transform__get_position(pUVar4,(MethodInfo *)0x0);
  lVar8 = *(long *)&(__this->fields).Dead;
  if ((lVar8 == 0) ||
     (pUVar4 = *(UnityEngine_Transform_o **)(lVar8 + 0x10), pUVar4 == (UnityEngine_Transform_o *)0x0
     )) goto LAB_0400e858;
  UVar18 = UnityEngine_Transform__get_position(pUVar4,(MethodInfo *)0x0);
  uStack_78._4_4_ = UVar17.fields.y;
  if (DAT_056fde20 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056fde20 = '\x01';
  }
  auVar16._0_4_ = fVar9 - UVar18.fields.x;
  auVar16._4_4_ = uStack_78._4_4_ - UVar18.fields.y;
  auVar16._8_4_ = extraout_XMM0_Dc - extraout_XMM0_Dc_00;
  auVar16._12_4_ = extraout_XMM0_Dd - extraout_XMM0_Dd_00;
  in_XMM1_Da = in_XMM1_Da - UVar18.fields.z;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_init_class();
  }
  uVar11 = 0;
  uVar12 = 0;
  fVar9 = in_XMM1_Da * in_XMM1_Da + auVar16._4_4_ * auVar16._4_4_ + auVar16._0_4_ * auVar16._0_4_;
  uVar13 = 0;
  uVar14 = 0;
  if (fVar9 < 0.0) {
    fVar9 = sqrtf(fVar9);
    uVar11 = extraout_XMM0_Dc_01;
    uVar12 = extraout_XMM0_Dd_01;
    if (fVar9 <= 1e-05) goto LAB_0400e476;
LAB_0400e4dc:
    in_XMM1_Da = in_XMM1_Da / fVar9;
    auVar2._4_4_ = fVar9;
    auVar2._0_4_ = fVar9;
    auVar2._8_4_ = uVar11;
    auVar2._12_4_ = uVar12;
    auVar16 = divps(auVar16,auVar2);
    uVar10 = auVar16._0_8_;
    lVar8._0_4_ = (__this->fields).Dead;
    lVar8._4_4_ = (__this->fields).CustomDamageEnabled;
  }
  else {
    fVar9 = SQRT(fVar9);
    if (1e-05 < fVar9) goto LAB_0400e4dc;
LAB_0400e476:
    if (DAT_056fdd15 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fdd15 = '\x01';
    }
    uVar10 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    in_XMM1_Da = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    lVar8._0_4_ = (__this->fields).Dead;
    lVar8._4_4_ = (__this->fields).CustomDamageEnabled;
  }
  if ((lVar8 == 0) ||
     (pUVar4 = *(UnityEngine_Transform_o **)(lVar8 + 0x10), pUVar4 == (UnityEngine_Transform_o *)0x0
     )) goto LAB_0400e858;
  UVar19 = UnityEngine_Transform__get_rotation(pUVar4,(MethodInfo *)0x0);
  UVar17.fields.z = in_XMM1_Da;
  UVar17.fields.x = (float)(int)uVar10;
  UVar17.fields.y = (float)(int)((ulong)uVar10 >> 0x20);
  b = UnityEngine_Quaternion__LookRotation(UVar17,(MethodInfo *)0x0);
  fVar9 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  UVar19 = UnityEngine_Quaternion__Lerp(UVar19,b,fVar9 * 5.0,(MethodInfo *)0x0);
  UnityEngine_Transform__set_rotation(pUVar4,UVar19,(MethodInfo *)0x0);
  fVar9 = (float)(*(__this->klass->vtable)._166_GetAnimationTime.methodPtr)(__this);
  if (fVar9 <= 0.61) {
    return;
  }
  lVar8 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields;
  if ((lVar8 == 0) ||
     (__this_00 = *(UnityEngine_Component_o **)(lVar8 + 0x90),
     __this_00 == (UnityEngine_Component_o *)0x0)) goto LAB_0400e858;
  __this_01 = (__this->fields).BaseTitanCache;
  pUVar4 = UnityEngine_Component__get_transform(__this_00,(MethodInfo *)0x0);
  if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto LAB_0400e858;
  UVar17 = UnityEngine_Transform__get_position(pUVar4,(MethodInfo *)0x0);
  fStack_68 = UVar17.fields.z;
  uVar10 = (*(__this->klass->vtable)._66_GetAimPoint.methodPtr)
                     (__this,(__this->klass->vtable)._66_GetAimPoint.method);
  if (DAT_056fde20 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    uVar13 = 0;
    uVar14 = 0;
    DAT_056fde20 = '\x01';
  }
  fStack_48 = UVar17.fields.x;
  fStack_44 = UVar17.fields.y;
  auVar15._0_4_ = (float)uVar10 - fStack_48;
  auVar15._4_4_ = (float)((ulong)uVar10 >> 0x20) - fStack_44;
  auVar15._8_4_ = extraout_XMM0_Dc_03 - extraout_XMM0_Dc_02;
  auVar15._12_4_ = extraout_XMM0_Dd_03 - extraout_XMM0_Dd_02;
  fStack_68 = fStack_68 - UVar17.fields.z;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_init_class();
    uVar13 = 0;
    uVar14 = 0;
  }
  fVar9 = fStack_68 * fStack_68 + auVar15._4_4_ * auVar15._4_4_ + auVar15._0_4_ * auVar15._0_4_;
  if (fVar9 < 0.0) {
    fVar9 = sqrtf(fVar9);
    uVar13 = extraout_XMM0_Dc_04;
    uVar14 = extraout_XMM0_Dd_04;
    if (fVar9 <= 1e-05) goto LAB_0400e683;
LAB_0400e6e7:
    fStack_68 = fStack_68 / fVar9;
    auVar1._4_4_ = fVar9;
    auVar1._0_4_ = fVar9;
    auVar1._8_4_ = uVar13;
    auVar1._12_4_ = uVar14;
    auVar16 = divps(auVar15,auVar1);
    uStack_78 = auVar16._0_8_;
  }
  else {
    fVar9 = SQRT(fVar9);
    if (1e-05 < fVar9) goto LAB_0400e6e7;
LAB_0400e683:
    if (DAT_056fdd15 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fdd15 = '\x01';
    }
    uStack_78 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    fStack_68 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  }
  (*(__this->klass->vtable)._148_Ungrab.methodPtr)(__this);
  if ((__this_01 != (Characters_BaseTitanComponentCache_o *)0x0) &&
     (pPVar5 = Photon_Pun_MonoBehaviourPun__get_photonView
                         ((Photon_Pun_MonoBehaviourPun_o *)__this_01,(MethodInfo *)0x0),
     pPVar5 != (Photon_Pun_PhotonView_o *)0x0)) {
    x = (UnityEngine_Object_o *)
        UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pPVar5,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      return;
    }
    pPVar5 = Photon_Pun_MonoBehaviourPun__get_photonView
                       ((Photon_Pun_MonoBehaviourPun_o *)__this_01,(MethodInfo *)0x0);
    pPVar6 = Photon_Pun_MonoBehaviourPun__get_photonView
                       ((Photon_Pun_MonoBehaviourPun_o *)__this_01,(MethodInfo *)0x0);
    if (pPVar6 != (Photon_Pun_PhotonView_o *)0x0) {
      uStack_78 = CONCAT44(uStack_78._4_4_ * 150.0,(float)uStack_78 * 150.0);
      targetPlayer = (pPVar6->fields)._Owner_k__BackingField;
      parameters = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,1);
      uStack_30 = uStack_78;
      fStack_28 = fStack_68 * 150.0;
      pIVar7 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_Vector3,&uStack_30);
      if (parameters != (System_Object_array *)0x0) {
        if ((pIVar7 != (Il2CppObject *)0x0) &&
           (lVar8 = il2cpp_runtime_glue(pIVar7,(((parameters->obj).klass)->_1).element_class),
           lVar8 == 0)) {
          uVar10 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
          il2cpp_glue_02274a00(uVar10,0);
        }
        if ((int)parameters->max_length == 0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        parameters->m_Items[0] = pIVar7;
        il2cpp_runtime_glue(parameters->m_Items,pIVar7);
        if (pPVar5 != (Photon_Pun_PhotonView_o *)0x0) {
          Photon_Pun_PhotonView__RPC(pPVar5,"BlowAwayRPC",targetPlayer,parameters,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_0400e858:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BasicTitan$$Blind
// il2cpp: void Characters_BasicTitan__Blind (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x400e880

void Characters_BasicTitan__Blind(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  long lVar1;
  
  if (*(char *)&(__this->fields)._rootMotionAnimations == '\0') {
    Characters_BaseTitan__Blind((Characters_BaseTitan_o *)__this,(MethodInfo *)0x0);
    return;
  }
  if ((*(int *)&(__this->fields).OutlineComponent != 0x10) &&
     ((char)(__this->fields).CustomDamage != '\0')) {
    lVar1 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields.z;
    if (lVar1 != 0) {
      Characters_BaseTitan__StateAction
                ((Characters_BaseTitan_o *)__this,0x10,*(System_String_o **)(lVar1 + 0x210),0.1,1,
                 (MethodInfo *)0x0);
      (*(__this->klass->vtable)._168_DamagedGrunt.methodPtr)
                (0x3f800000,__this,(__this->klass->vtable)._168_DamagedGrunt.method);
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return;
}


// Characters.BasicTitan$$GetSitIdleAniamtion
// il2cpp: System_String_o* Characters_BasicTitan__GetSitIdleAniamtion (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x400e900

System_String_o *
Characters_BasicTitan__GetSitIdleAniamtion(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  long lVar1;
  long *plVar2;
  code *vtable_dispatch;
  System_String_o *pSVar3;
  undefined8 in_RDX;
  
  if (*(char *)&(__this->fields)._rootMotionAnimations == '\0') {
    plVar2 = *(long **)&(__this->fields).TurnPause;
    if (plVar2 != (long *)0x0) {
      vtable_dispatch = *(code **)(*plVar2 + 0x218);
      pSVar3 = (System_String_o *)
               (*vtable_dispatch)
                         (plVar2,*(undefined8 *)(*plVar2 + 0x220),in_RDX,vtable_dispatch);
      return pSVar3;
    }
  }
  else {
    lVar1 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields.z;
    if (lVar1 != 0) {
      return *(System_String_o **)(lVar1 + 0x1e8);
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BasicTitan$$GetSitFallAnimation
// il2cpp: System_String_o* Characters_BasicTitan__GetSitFallAnimation (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x400e950

System_String_o *
Characters_BasicTitan__GetSitFallAnimation(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  long lVar1;
  long *plVar2;
  code *vtable_dispatch;
  System_String_o *pSVar3;
  undefined8 in_RDX;
  
  if (*(char *)&(__this->fields)._rootMotionAnimations == '\0') {
    plVar2 = *(long **)&(__this->fields).TurnPause;
    if (plVar2 != (long *)0x0) {
      vtable_dispatch = *(code **)(*plVar2 + 0x248);
      pSVar3 = (System_String_o *)
               (*vtable_dispatch)
                         (plVar2,*(undefined8 *)(*plVar2 + 0x250),in_RDX,vtable_dispatch);
      return pSVar3;
    }
  }
  else {
    lVar1 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields.z;
    if (lVar1 != 0) {
      return *(System_String_o **)(lVar1 + 0x1f8);
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BasicTitan$$GetSitUpAnimation
// il2cpp: System_String_o* Characters_BasicTitan__GetSitUpAnimation (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x400e9a0

System_String_o *
Characters_BasicTitan__GetSitUpAnimation(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  long lVar1;
  long *plVar2;
  code *vtable_dispatch;
  System_String_o *pSVar3;
  undefined8 in_RDX;
  
  if (*(char *)&(__this->fields)._rootMotionAnimations == '\0') {
    plVar2 = *(long **)&(__this->fields).TurnPause;
    if (plVar2 != (long *)0x0) {
      vtable_dispatch = *(code **)(*plVar2 + 0x238);
      pSVar3 = (System_String_o *)
               (*vtable_dispatch)
                         (plVar2,*(undefined8 *)(*plVar2 + 0x240),in_RDX,vtable_dispatch);
      return pSVar3;
    }
  }
  else {
    lVar1 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields.z;
    if (lVar1 != 0) {
      return *(System_String_o **)(lVar1 + 0x1f0);
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BasicTitan$$Cripple
// il2cpp: void Characters_BasicTitan__Cripple (Characters_BasicTitan_o* __this, float time, const MethodInfo* method);
// 0x400e9f0

void Characters_BasicTitan__Cripple(Characters_BasicTitan_o *__this,float time,MethodInfo *method)

{
  long lVar1;
  bool_conflict bVar2;
  
  if (*(char *)&(__this->fields)._rootMotionAnimations == '\0') {
    lVar1 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields.z;
    if (lVar1 != 0) {
      bVar2 = System_String__op_Equality
                        (*(System_String_o **)&(__this->fields)._climbCooldownLeft,
                         *(System_String_o **)(lVar1 + 0x88),(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        lVar1 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields.z;
        if (lVar1 == 0) goto LAB_0400eb01;
        bVar2 = System_String__op_Equality
                          (*(System_String_o **)&(__this->fields)._climbCooldownLeft,
                           *(System_String_o **)(lVar1 + 0x90),(MethodInfo *)0x0);
        if ((char)bVar2 == '\0') {
          Characters_BaseTitan__Cripple((Characters_BaseTitan_o *)__this,time,(MethodInfo *)0x0);
          return;
        }
      }
      return;
    }
  }
  else {
    if (*(int *)&(__this->fields).OutlineComponent == 0x11) {
      return;
    }
    if ((char)(__this->fields).CustomDamage == '\0') {
      return;
    }
    if (time <= 0.0) {
      time = (float)(*(__this->klass->vtable)._110_get_DefaultCrippleTime.methodPtr)
                              (__this,(__this->klass->vtable)._110_get_DefaultCrippleTime.method);
    }
    (__this->fields)._turnTargetRotation.fields.y = time;
    lVar1 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields.z;
    if (lVar1 != 0) {
      Characters_BaseTitan__StateAction
                ((Characters_BaseTitan_o *)__this,0x13,*(System_String_o **)(lVar1 + 0x1f8),0.1,1,
                 (MethodInfo *)0x0);
      (*(__this->klass->vtable)._168_DamagedGrunt.methodPtr)
                (0x3f800000,__this,(__this->klass->vtable)._168_DamagedGrunt.method);
      return;
    }
  }
LAB_0400eb01:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BasicTitan$$OnHit
// il2cpp: void Characters_BasicTitan__OnHit (Characters_BasicTitan_o* __this, Characters_BaseHitbox_o* hitbox, Il2CppObject* victim, UnityEngine_Collider_o* collider, System_String_o* type, bool firstHit, const MethodInfo* method);
// 0x400eb10

void Characters_BasicTitan__OnHit
               (Characters_BasicTitan_o *__this,Characters_BaseHitbox_o *hitbox,Il2CppObject *victim
               ,UnityEngine_Collider_o *collider,System_String_o *type,bool_conflict firstHit,
               MethodInfo *method)

{
  byte bVar1;
  Characters_BaseTitanComponentCache_o *x;
  long lVar2;
  UnityEngine_Object_o *y;
  char cVar3;
  bool_conflict bVar4;
  System_String_o *pSVar5;
  Il2CppClass *pIVar6;
  UnityEngine_Transform_o *pUVar7;
  byte bVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  UI_InGameMenu_o *pUVar12;
  MethodInfo *pMVar13;
  Il2CppMethodPointer vtable_dispatch;
  uint damage;
  char cVar14;
  UnityEngine_Vector3_o UVar15;
  
  if (DAT_05704260 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BaseCharacter);
    il2cpp_init_method_metadata(&TypeInfo_BaseTitan);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicCollisionHandler);
    il2cpp_init_method_metadata(&TypeInfo_EffectPrefabs);
    il2cpp_init_method_metadata(&TypeInfo_Human);
    il2cpp_init_method_metadata(&TypeInfo_InGameMenu);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_TitanSounds);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"GrabRight");
    il2cpp_init_method_metadata(&"GrabLeft");
    il2cpp_init_method_metadata(&"TitanStun");
    il2cpp_init_method_metadata(&"Titan");
    DAT_05704260 = '\x01';
  }
  if (*(char *)((long)&(__this->fields).FeedVictimName + 1) == '\0') {
    damage = 100;
  }
  else {
    damage = *(uint *)((long)&(__this->fields).FeedVictimName + 4);
  }
  if (victim != (Il2CppObject *)0x0) {
    pIVar6 = victim->klass;
    bVar8 = (pIVar6->_2).naturalAligment;
    bVar1 = (TypeInfo_CustomLogicCollisionHandler->_2).naturalAligment;
    pUVar12 = (UI_InGameMenu_o *)victim;
    if ((bVar1 <= bVar8) && ((pIVar6->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CustomLogicCollisionHandler)) {
      if (hitbox != (Characters_BaseHitbox_o *)0x0) {
        pSVar5 = *(System_String_o **)&(__this->fields)._disableKinematicTimeLeft;
        pUVar7 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)hitbox,(MethodInfo *)0x0);
        if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
          UVar15 = UnityEngine_Transform__get_position(pUVar7,(MethodInfo *)0x0);
          bVar8 = (TypeInfo_CustomLogicCollisionHandler->_2).naturalAligment;
          if ((bVar8 <= (victim->klass->_2).naturalAligment) &&
             ((victim->klass->_2).typeHierarchy[(ulong)bVar8 - 1] == TypeInfo_CustomLogicCollisionHandler)) {
            CustomLogic_CustomLogicCollisionHandler__GetHit
                      ((CustomLogic_CustomLogicCollisionHandler_o *)victim,
                       (Characters_BaseCharacter_o *)__this,pSVar5,damage,type,UVar15,
                       (MethodInfo *)0x0);
            return;
          }
          goto LAB_0400f0dc;
        }
      }
      goto LAB_0400f0e1;
    }
    bVar1 = (TypeInfo_BaseCharacter->_2).naturalAligment;
    if ((bVar8 < bVar1) || ((pIVar6->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_BaseCharacter))
    goto LAB_0400f0dc;
  }
  cVar14 = (char)firstHit;
  if ((*(int *)&(__this->fields).OutlineComponent == 10) &&
     (cVar3 = (*(__this->klass->vtable)._122_IsGrabAttack.methodPtr)(__this), cVar3 != '\0')) {
    if (victim == (Il2CppObject *)0x0) goto LAB_0400edb5;
    pIVar6 = victim->klass;
    bVar8 = (pIVar6->_2).naturalAligment;
    bVar1 = (TypeInfo_Human->_2).naturalAligment;
    if ((bVar1 <= bVar8) && ((pIVar6->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_Human)) {
      x = (__this->fields).BaseTitanCache;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar4 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar4 == '\0') {
        return;
      }
      if (cVar14 == '\0') {
        return;
      }
      if (*(char *)&victim[6].monitor != '\0') {
        return;
      }
      lVar2 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields;
      if (lVar2 == 0) goto LAB_0400f0e1;
      y = *(UnityEngine_Object_o **)(lVar2 + 0x88);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar4 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)hitbox,y,(MethodInfo *)0x0);
      *(char *)&(__this->fields).TitanColliderToggler = (char)bVar4;
      if (collider == (UnityEngine_Collider_o *)0x0) goto LAB_0400f0e1;
      pSVar5 = UnityEngine_Object__get_name((UnityEngine_Object_o *)collider,(MethodInfo *)0x0);
      if ((char)bVar4 == '\0') {
        puVar9 = &"GrabRight";
      }
      else {
        puVar9 = &"GrabLeft";
      }
      uVar10 = *puVar9;
      vtable_dispatch = victim->klass->vtable[0x54].methodPtr;
      pMVar13 = victim->klass->vtable[0x54].method;
      uVar11 = 0;
      goto LAB_0400ee8e;
    }
LAB_0400ed8d:
    bVar1 = (TypeInfo_BaseTitan->_2).naturalAligment;
    if ((bVar8 < bVar1) || ((pIVar6->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_BaseTitan))
    goto LAB_0400edb5;
    if (cVar14 == '\0') {
      return;
    }
    if (*(int *)(TypeInfo_EffectPrefabs + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (hitbox == (Characters_BaseHitbox_o *)0x0) goto LAB_0400f0e1;
    pSVar5 = *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x28);
    pUVar7 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)hitbox,(MethodInfo *)0x0);
    if (pUVar7 == (UnityEngine_Transform_o *)0x0) goto LAB_0400f0e1;
    UVar15 = UnityEngine_Transform__get_position(pUVar7,(MethodInfo *)0x0);
    if (DAT_056fde1e == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Quaternion);
      DAT_056fde1e = '\x01';
    }
    Effects_EffectSpawner__Spawn
              (pSVar5,UVar15,
               (UnityEngine_Quaternion_o)**(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8),
               1.0,1,(System_Object_array *)0x0,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_TitanSounds + 0xe4) == 0) {
      il2cpp_init_class();
    }
    Characters_BaseCharacter__PlaySound
              ((Characters_BaseCharacter_o *)__this,
               *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0xc0),(MethodInfo *)0x0);
    if (*(char *)&victim[6].monitor != '\0') {
      return;
    }
    bVar4 = Characters_BaseCharacter__IsMainCharacter
                      ((Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pUVar12 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
      if (pUVar12 == (UI_InGameMenu_o *)0x0) goto LAB_0400f0e1;
      bVar8 = (TypeInfo_InGameMenu->_2).naturalAligment;
      if (((pUVar12->klass->_2).naturalAligment < bVar8) ||
         ((pUVar12->klass->_2).typeHierarchy[(ulong)bVar8 - 1] != TypeInfo_InGameMenu)) goto LAB_0400f0dc;
      UI_InGameMenu__ShowKillScore(pUVar12,damage,0,(MethodInfo *)0x0);
    }
    if (collider == (UnityEngine_Collider_o *)0x0) goto LAB_0400f0e1;
    pSVar5 = UnityEngine_Object__get_name((UnityEngine_Object_o *)collider,(MethodInfo *)0x0);
    puVar9 = &"TitanStun";
  }
  else {
    if (victim != (Il2CppObject *)0x0) {
      pIVar6 = victim->klass;
      bVar8 = (pIVar6->_2).naturalAligment;
      goto LAB_0400ed8d;
    }
LAB_0400edb5:
    if (cVar14 == '\0') {
      return;
    }
    if (victim == (Il2CppObject *)0x0) {
LAB_0400f0e1:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (*(char *)&victim[6].monitor != '\0') {
      return;
    }
    bVar4 = Characters_BaseCharacter__IsMainCharacter
                      ((Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pUVar12 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
      if (pUVar12 == (UI_InGameMenu_o *)0x0) goto LAB_0400f0e1;
      bVar8 = (TypeInfo_InGameMenu->_2).naturalAligment;
      if (((pUVar12->klass->_2).naturalAligment < bVar8) ||
         ((pUVar12->klass->_2).typeHierarchy[(ulong)bVar8 - 1] != TypeInfo_InGameMenu)) {
LAB_0400f0dc:
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(pUVar12);
      }
      UI_InGameMenu__ShowKillScore(pUVar12,damage,0,(MethodInfo *)0x0);
    }
    if (collider == (UnityEngine_Collider_o *)0x0) goto LAB_0400f0e1;
    pSVar5 = UnityEngine_Object__get_name((UnityEngine_Object_o *)collider,(MethodInfo *)0x0);
    puVar9 = &"Titan";
  }
  uVar10 = *puVar9;
  vtable_dispatch = victim->klass->vtable[0x54].methodPtr;
  pMVar13 = victim->klass->vtable[0x54].method;
  uVar11 = (ulong)damage;
LAB_0400ee8e:
  (*vtable_dispatch)(victim,__this,uVar11,uVar10,pSVar5,pMVar13);
  return;
}


// Characters.BasicTitan$$GetLookAngle
// il2cpp: UnityEngine_Vector2_o Characters_BasicTitan__GetLookAngle (Characters_BasicTitan_o* __this, UnityEngine_Vector3_o target, const MethodInfo* method);
// 0x400f0f0

UnityEngine_Vector2_o
Characters_BasicTitan__GetLookAngle
          (Characters_BasicTitan_o *__this,UnityEngine_Vector3_o target,MethodInfo *method)

{
  long lVar1;
  UnityEngine_Transform_o *pUVar2;
  float fVar3;
  float fVar4;
  UnityEngine_Vector3_o UVar5;
  UnityEngine_Vector3_o UVar6;
  UnityEngine_Quaternion_o rotation;
  float local_38;
  float fStack_34;
  
  if (DAT_05704261 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Util);
    DAT_05704261 = '\x01';
  }
  lVar1 = *(long *)&(__this->fields).Dead;
  if ((lVar1 != 0) &&
     (pUVar2 = *(UnityEngine_Transform_o **)(lVar1 + 0x10), pUVar2 != (UnityEngine_Transform_o *)0x0
     )) {
    UVar5 = UnityEngine_Transform__get_position(pUVar2,(MethodInfo *)0x0);
    local_38 = target.fields.x;
    fVar3 = atan2f(target.fields.z - UVar5.fields.z,local_38 - UVar5.fields.x);
    lVar1 = *(long *)&(__this->fields).Dead;
    if (lVar1 != 0) {
      pUVar2 = *(UnityEngine_Transform_o **)(lVar1 + 0x10);
      if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
        rotation = UnityEngine_Transform__get_rotation(pUVar2,(MethodInfo *)0x0);
        UVar5 = UnityEngine_Quaternion__Internal_ToEulerRad(rotation,(MethodInfo *)0x0);
        UVar6.fields.x = UVar5.fields.x * 57.29578;
        UVar6.fields.y = UVar5.fields.y * 57.29578;
        UVar6.fields.z = UVar5.fields.z * 57.29578;
        UVar5 = UnityEngine_Quaternion__Internal_MakePositive(UVar6,(MethodInfo *)0x0);
        fVar3 = UVar5.fields.y + -90.0 + fVar3 * 57.29578;
        fVar4 = floorf(fVar3 / 360.0);
        lVar1 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields;
        if (lVar1 != 0) {
          pUVar2 = *(UnityEngine_Transform_o **)(lVar1 + 0x40);
          if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
            UVar5 = UnityEngine_Transform__get_position(pUVar2,(MethodInfo *)0x0);
            lVar1 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields;
            if (lVar1 != 0) {
              pUVar2 = *(UnityEngine_Transform_o **)(lVar1 + 0x10);
              fStack_34 = target.fields.y;
              if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
                fVar3 = fVar3 - fVar4 * 360.0;
                fVar4 = 360.0;
                if (fVar3 <= 360.0) {
                  fVar4 = fVar3;
                }
                fVar4 = (float)(-(uint)(0.0 <= fVar3) & (uint)fVar4);
                UVar6 = UnityEngine_Transform__get_position(pUVar2,(MethodInfo *)0x0);
                if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                fVar3 = Utility_Util__DistanceIgnoreY(target,UVar6,(MethodInfo *)0x0);
                fVar3 = atan2f(UVar5.fields.y - fStack_34,fVar3);
                return (UnityEngine_Vector2_o)
                       (CONCAT44(~-(uint)(180.0 < fVar4) & (uint)fVar4 |
                                 (uint)(fVar4 + -360.0) & -(uint)(180.0 < fVar4),fVar3 * 57.29578) ^
                       0x8000000000000000);
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BasicTitan$$LateUpdateHeadPosition
// il2cpp: void Characters_BasicTitan__LateUpdateHeadPosition (Characters_BasicTitan_o* __this, UnityEngine_Vector3_o position, const MethodInfo* method);
// 0x400f310

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Characters_BasicTitan__LateUpdateHeadPosition
               (Characters_BasicTitan_o *__this,UnityEngine_Vector3_o position,MethodInfo *method)

{
  Characters_BasicTitanComponentCache_o *pCVar1;
  Characters_BasicTitanAnimations_o *pCVar2;
  long lVar3;
  UnityEngine_Component_o *pUVar4;
  UnityEngine_Transform_o *pUVar5;
  undefined1 auVar6 [16];
  UnityEngine_Vector2_o UVar7;
  System_Nullable_Quaternion__o __this_00;
  undefined1 auVar8 [16];
  UnityEngine_Transform_o *pUVar9;
  MethodInfo *pMVar10;
  float fVar11;
  float in_XMM0_Dc;
  undefined4 extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  float extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dc_03;
  undefined4 uVar12;
  float extraout_XMM0_Dc_04;
  undefined4 extraout_XMM0_Dc_05;
  float in_XMM0_Dd;
  undefined4 extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  float extraout_XMM0_Dd_02;
  undefined4 extraout_XMM0_Dd_03;
  undefined4 uVar13;
  float extraout_XMM0_Dd_04;
  undefined4 extraout_XMM0_Dd_05;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  undefined1 auVar18 [16];
  UnityEngine_Vector3_o UVar19;
  UnityEngine_Vector3_o UVar20;
  UnityEngine_Vector3_o euler;
  UnityEngine_Vector3_o euler_00;
  UnityEngine_Vector3_o euler_01;
  UnityEngine_Quaternion_o UVar21;
  UnityEngine_Quaternion_o a;
  UnityEngine_Quaternion_o b;
  float fVar22;
  float fVar23;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  undefined1 local_88 [8];
  float fStack_80;
  float fStack_7c;
  Il2CppMethodPointer local_58;
  System_String_o *pSStack_50;
  undefined4 local_48;
  undefined1 local_38 [16];
  undefined1 local_28 [8];
  float fStack_20;
  float fStack_1c;
  
  fVar17 = position.fields.z;
  if (DAT_05704262 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Nullable_1_UnityEngine_Quaternion);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    DAT_05704262 = '\x01';
  }
  lVar3 = *(long *)&(__this->fields).Dead;
  if ((lVar3 == 0) ||
     (pUVar9 = *(UnityEngine_Transform_o **)(lVar3 + 0x10), pUVar9 == (UnityEngine_Transform_o *)0x0
     )) goto LAB_0400f88b;
  pMVar10 = (MethodInfo *)0x0;
  UVar19 = UnityEngine_Transform__get_position(pUVar9,(MethodInfo *)0x0);
  fStack_20 = (float)extraout_XMM0_Dc;
  local_28 = UVar19.fields._0_8_;
  fStack_1c = (float)extraout_XMM0_Dd;
  UVar20.fields.z = fVar17;
  UVar20.fields.x = (float)(int)position.fields._0_8_;
  UVar20.fields.y = (float)(int)((ulong)position.fields._0_8_ >> 0x20);
  UVar7 = Characters_BasicTitan__GetLookAngle(__this,UVar20,pMVar10);
  fStack_94 = UVar7.fields.y;
  fVar22 = UVar7.fields.x;
  fStack_90 = extraout_XMM0_Dc_00;
  fStack_8c = extraout_XMM0_Dd_00;
  if ((-120.0 < fStack_94 && fStack_94 < -50.0) || (50.0 < fStack_94 && fStack_94 < 120.0)) {
    fStack_94 = (__this->fields).LateUpdateHeadRotation.fields.value.fields.x;
    if ((fStack_94 < -50.0) || (50.0 < fStack_94)) {
      lVar3 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
      if ((lVar3 == 0) ||
         ((pUVar4 = *(UnityEngine_Component_o **)(lVar3 + 0x20),
          pUVar4 == (UnityEngine_Component_o *)0x0 ||
          (pUVar9 = UnityEngine_Component__get_transform(pUVar4,(MethodInfo *)0x0),
          pUVar9 == (UnityEngine_Transform_o *)0x0)))) goto LAB_0400f88b;
      pMVar10 = (MethodInfo *)0x0;
      UVar19 = UnityEngine_Transform__get_position(pUVar9,(MethodInfo *)0x0);
      UVar7 = Characters_BasicTitan__GetLookAngle(__this,UVar19,pMVar10);
      fVar22 = UVar7.fields.x;
      fStack_94 = (__this->fields).LateUpdateHeadRotation.fields.value.fields.x;
      fStack_90 = extraout_XMM0_Dc_02;
      fStack_8c = extraout_XMM0_Dd_02;
    }
    (__this->fields).LateUpdateHeadRotation.fields.hasValue = (bool_conflict)fVar22;
    lVar3._0_4_ = (__this->fields)._furthestCoreLocalPosition.fields.x;
    lVar3._4_4_ = (__this->fields)._furthestCoreLocalPosition.fields.y;
  }
  else {
    lVar3 = *(long *)&(__this->fields).Dead;
    if ((lVar3 == 0) ||
       (pUVar9 = *(UnityEngine_Transform_o **)(lVar3 + 0x10),
       pUVar9 == (UnityEngine_Transform_o *)0x0)) goto LAB_0400f88b;
    UVar20 = UnityEngine_Transform__get_forward(pUVar9,(MethodInfo *)0x0);
    local_38._8_4_ = extraout_XMM0_Dc_01;
    local_38._0_8_ = UVar20.fields._0_8_;
    local_38._12_4_ = extraout_XMM0_Dd_01;
    if (DAT_056fde20 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Math);
      DAT_056fde20 = '\x01';
    }
    local_88._0_4_ = position.fields.x;
    local_88._4_4_ = position.fields.y;
    local_88._0_4_ = (float)local_88._0_4_ - (float)local_28._0_4_;
    local_88._4_4_ = (float)local_88._4_4_ - (float)local_28._4_4_;
    fVar17 = fVar17 - UVar19.fields.z;
    fStack_80 = in_XMM0_Dc - fStack_20;
    fStack_7c = in_XMM0_Dd - fStack_1c;
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_init_class();
    }
    uVar12 = 0;
    uVar13 = 0;
    fVar11 = fVar17 * fVar17 +
             (float)local_88._4_4_ * (float)local_88._4_4_ +
             (float)local_88._0_4_ * (float)local_88._0_4_;
    if (fVar11 < 0.0) {
      fVar11 = sqrtf(fVar11);
      uVar12 = extraout_XMM0_Dc_03;
      uVar13 = extraout_XMM0_Dd_03;
      if (1e-05 < fVar11) goto LAB_0400f5a0;
LAB_0400f4a2:
      if (DAT_056fdd15 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Vector3);
        DAT_056fdd15 = '\x01';
      }
      uVar14 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      fVar17 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    }
    else {
      fVar11 = SQRT(fVar11);
      if (fVar11 <= 1e-05) goto LAB_0400f4a2;
LAB_0400f5a0:
      fVar17 = fVar17 / fVar11;
      auVar15._4_4_ = fVar11;
      auVar15._0_4_ = fVar11;
      auVar15._8_4_ = uVar12;
      auVar15._12_4_ = uVar13;
      auVar15 = divps(_local_88,auVar15);
      uVar14 = auVar15._0_8_;
    }
    if (UVar20.fields.z * fVar17 +
        (float)local_38._4_4_ * (float)((ulong)uVar14 >> 0x20) +
        (float)local_38._0_4_ * (float)uVar14 < 0.0) {
      lVar3 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
      if (((lVar3 == 0) ||
          (pUVar4 = *(UnityEngine_Component_o **)(lVar3 + 0x20),
          pUVar4 == (UnityEngine_Component_o *)0x0)) ||
         (pUVar9 = UnityEngine_Component__get_transform(pUVar4,(MethodInfo *)0x0),
         pUVar9 == (UnityEngine_Transform_o *)0x0)) goto LAB_0400f88b;
      pMVar10 = (MethodInfo *)0x0;
      UVar19 = UnityEngine_Transform__get_position(pUVar9,(MethodInfo *)0x0);
      UVar7 = Characters_BasicTitan__GetLookAngle(__this,UVar19,pMVar10);
      fVar22 = UVar7.fields.x;
      fStack_94 = UVar7.fields.y;
      (__this->fields).LateUpdateHeadRotation.fields.hasValue = (bool_conflict)UVar7.fields.x;
      (__this->fields).LateUpdateHeadRotation.fields.value.fields.x = UVar7.fields.y;
      lVar3._0_4_ = (__this->fields)._furthestCoreLocalPosition.fields.x;
      lVar3._4_4_ = (__this->fields)._furthestCoreLocalPosition.fields.y;
      fStack_90 = extraout_XMM0_Dc_04;
      fStack_8c = extraout_XMM0_Dd_04;
    }
    else {
      (__this->fields).LateUpdateHeadRotation.fields.hasValue = (bool_conflict)fVar22;
      (__this->fields).LateUpdateHeadRotation.fields.value.fields.x = fStack_94;
      lVar3._0_4_ = (__this->fields)._furthestCoreLocalPosition.fields.x;
      lVar3._4_4_ = (__this->fields)._furthestCoreLocalPosition.fields.y;
    }
  }
  if ((lVar3 != 0) &&
     (pUVar9 = *(UnityEngine_Transform_o **)(lVar3 + 0x38), pUVar9 != (UnityEngine_Transform_o *)0x0
     )) {
    UVar21 = UnityEngine_Transform__get_rotation(pUVar9,(MethodInfo *)0x0);
    UVar19 = UnityEngine_Quaternion__Internal_ToEulerRad(UVar21,(MethodInfo *)0x0);
    euler.fields.x = UVar19.fields.x * 57.29578;
    euler.fields.y = UVar19.fields.y * 57.29578;
    euler.fields.z = UVar19.fields.z * 57.29578;
    UVar19 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
    lVar3 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields;
    if ((lVar3 != 0) &&
       (pUVar5 = *(UnityEngine_Transform_o **)(lVar3 + 0x38),
       pUVar5 != (UnityEngine_Transform_o *)0x0)) {
      UVar21 = UnityEngine_Transform__get_rotation(pUVar5,(MethodInfo *)0x0);
      UVar20 = UnityEngine_Quaternion__Internal_ToEulerRad(UVar21,(MethodInfo *)0x0);
      euler_00.fields.x = UVar20.fields.x * 57.29578;
      euler_00.fields.y = UVar20.fields.y * 57.29578;
      euler_00.fields.z = UVar20.fields.z * 57.29578;
      UVar20 = UnityEngine_Quaternion__Internal_MakePositive(euler_00,(MethodInfo *)0x0);
      lVar3 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields;
      if (lVar3 != 0) {
        fVar17 = UVar20.fields.y;
        pUVar5 = *(UnityEngine_Transform_o **)(lVar3 + 0x38);
        if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
          auVar8._4_4_ = fStack_94;
          auVar8._0_4_ = fVar22;
          auVar8._8_4_ = fStack_90;
          auVar8._12_4_ = fStack_8c;
          auVar15 = minps(_DAT_00ccee30,auVar8);
          auVar16._0_4_ = auVar15._0_4_ & -(uint)(-80.0 <= fVar22);
          auVar16._4_4_ = auVar15._4_4_ & -(uint)(-80.0 <= fStack_94);
          auVar16._8_4_ = auVar15._8_4_ & -(uint)(0.0 <= fStack_90);
          auVar16._12_4_ = auVar15._12_4_ & -(uint)(0.0 <= fStack_8c);
          auVar18._0_8_ =
               CONCAT44(~-(uint)(-80.0 <= fStack_94),~-(uint)(-80.0 <= fVar22)) & 0xc2a00000c2a00000
          ;
          auVar18._8_8_ = 0;
          fVar22 = SUB164(auVar18 | auVar16,0);
          fStack_94 = SUB164(auVar18 | auVar16,4);
          UVar21 = UnityEngine_Transform__get_rotation(pUVar5,(MethodInfo *)0x0);
          UVar20 = UnityEngine_Quaternion__Internal_ToEulerRad(UVar21,(MethodInfo *)0x0);
          euler_01.fields.x = UVar20.fields.x * 57.29578;
          euler_01.fields.y = UVar20.fields.y * 57.29578;
          euler_01.fields.z = UVar20.fields.z * 57.29578;
          UVar20 = UnityEngine_Quaternion__Internal_MakePositive(euler_01,(MethodInfo *)0x0);
          local_88._0_4_ = UVar19.fields.x;
          UVar19.fields.x = ((float)local_88._0_4_ + fVar22) * 0.017453292;
          UVar19.fields.y = (fVar17 + fStack_94) * 0.017453292;
          UVar19.fields.z = UVar20.fields.z * 0.017453292;
          UVar21 = UnityEngine_Quaternion__Internal_FromEulerRad(UVar19,(MethodInfo *)0x0);
          UnityEngine_Transform__set_rotation(pUVar9,UVar21,(MethodInfo *)0x0);
          lVar3 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields;
          if ((lVar3 != 0) &&
             (pUVar9 = *(UnityEngine_Transform_o **)(lVar3 + 0x38),
             pUVar9 != (UnityEngine_Transform_o *)0x0)) {
            pCVar1 = (__this->fields).BasicCache;
            fVar23 = SUB84(pCVar1,0);
            fStack_94 = (float)((ulong)pCVar1 >> 0x20);
            pCVar2 = (__this->fields).BasicAnimations;
            UVar21 = UnityEngine_Transform__get_localRotation(pUVar9,(MethodInfo *)0x0);
            auVar6._8_4_ = extraout_XMM0_Dc_05;
            auVar6._0_8_ = UVar21.fields._0_8_;
            auVar6._12_4_ = extraout_XMM0_Dd_05;
            fVar22 = UVar21.fields.x;
            fVar11 = UVar21.fields.y;
            uVar14 = auVar6._8_8_;
            fVar17 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
            a.fields.y = fStack_94;
            a.fields.x = fVar23;
            b.fields.y = fVar11;
            b.fields.x = fVar22;
            a.fields._8_8_ = pCVar2;
            b.fields.z = (float)(int)UVar21.fields._8_8_;
            b.fields.w = (float)(int)((ulong)UVar21.fields._8_8_ >> 0x20);
            UVar21 = UnityEngine_Quaternion__Lerp(a,b,fVar17 * 10.0,(MethodInfo *)0x0);
            UnityEngine_Transform__set_localRotation(pUVar9,UVar21,(MethodInfo *)0x0);
            lVar3 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields;
            if ((lVar3 != 0) &&
               (pUVar9 = *(UnityEngine_Transform_o **)(lVar3 + 0x38),
               pUVar9 != (UnityEngine_Transform_o *)0x0)) {
              UVar21 = UnityEngine_Transform__get_localRotation(pUVar9,(MethodInfo *)0x0);
              *(UnityEngine_Quaternion_Fields *)&(__this->fields).BasicCache = UVar21.fields;
              lVar3 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields;
              if ((lVar3 != 0) &&
                 (pUVar9 = *(UnityEngine_Transform_o **)(lVar3 + 0x38),
                 pUVar9 != (UnityEngine_Transform_o *)0x0)) {
                UVar21 = UnityEngine_Transform__get_rotation(pUVar9,(MethodInfo *)0x0);
                local_58 = (Il2CppMethodPointer)0x0;
                pSStack_50 = (System_String_o *)0x0;
                local_48 = 0;
                __this_00.fields.value.fields.x = fVar11;
                __this_00.fields.hasValue = (bool_conflict)fVar22;
                __this_00.fields.value.fields.y = (float)(int)uVar14;
                __this_00.fields.value.fields.z = (float)(int)((ulong)uVar14 >> 0x20);
                __this_00.fields.value.fields.w = fVar23;
                System_Nullable<Quaternion>___ctor(__this_00,UVar21,(MethodInfo_375B520 *)&local_58)
                ;
                *(undefined4 *)&(__this->fields).Setup = local_48;
                *(Il2CppMethodPointer *)&(__this->fields).IsCrawler = local_58;
                (__this->fields)._runAnimation = pSStack_50;
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_0400f88b:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BasicTitan$$LateUpdateHead
// il2cpp: void Characters_BasicTitan__LateUpdateHead (Characters_BasicTitan_o* __this, Characters_BaseCharacter_o* target, const MethodInfo* method);
// 0x400f890

void Characters_BasicTitan__LateUpdateHead
               (Characters_BasicTitan_o *__this,Characters_BaseCharacter_o *target,
               MethodInfo *method)

{
  byte bVar1;
  long lVar2;
  UnityEngine_Transform_o *pUVar3;
  System_Action_Hashtable__o *pSVar4;
  UnityEngine_Transform_o *pUVar5;
  bool_conflict bVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float __x;
  float fVar10;
  float fVar11;
  UnityEngine_Vector3_o UVar12;
  UnityEngine_Vector3_o UVar13;
  UnityEngine_Vector3_o euler;
  UnityEngine_Vector3_o UVar14;
  UnityEngine_Vector3_o euler_00;
  UnityEngine_Quaternion_o UVar15;
  UnityEngine_Quaternion_o b;
  float local_98;
  float fStack_94;
  float local_88;
  float fStack_44;
  
  if (DAT_05704263 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BaseTitan);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    DAT_05704263 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar6 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)target,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    if (((target == (Characters_BaseCharacter_o *)0x0) ||
        (lVar2 = *(long *)&(target->fields).Dead, lVar2 == 0)) ||
       (pUVar3 = *(UnityEngine_Transform_o **)(lVar2 + 0x10),
       pUVar3 == (UnityEngine_Transform_o *)0x0)) goto LAB_0400fde2;
    UVar12 = UnityEngine_Transform__get_position(pUVar3,(MethodInfo *)0x0);
    fVar10 = UVar12.fields.y;
    bVar1 = (TypeInfo_BaseTitan->_2).naturalAligment;
    if ((bVar1 <= (target->klass->_2).naturalAligment) &&
       ((target->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_BaseTitan)) {
      pSVar4 = (target->fields).OnPlayerPropertiesChanged;
      if ((pSVar4 == (System_Action_Hashtable__o *)0x0) ||
         (pUVar3 = (UnityEngine_Transform_o *)(pSVar4->fields).extra_arg,
         pUVar3 == (UnityEngine_Transform_o *)0x0)) goto LAB_0400fde2;
      UVar12 = UnityEngine_Transform__get_position(pUVar3,(MethodInfo *)0x0);
      fVar10 = UVar12.fields.y;
    }
    lVar2 = *(long *)&(target->fields).Dead;
    if (lVar2 == 0) goto LAB_0400fde2;
    pUVar3 = *(UnityEngine_Transform_o **)(lVar2 + 0x10);
    if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto LAB_0400fde2;
    UVar12 = UnityEngine_Transform__get_position(pUVar3,(MethodInfo *)0x0);
    lVar2 = *(long *)&(__this->fields).Dead;
    if (lVar2 == 0) goto LAB_0400fde2;
    pUVar3 = *(UnityEngine_Transform_o **)(lVar2 + 0x10);
    if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto LAB_0400fde2;
    UVar13 = UnityEngine_Transform__get_position(pUVar3,(MethodInfo *)0x0);
    local_98 = UVar12.fields.x;
    fVar8 = atan2f(UVar12.fields.z - UVar13.fields.z,local_98 - UVar13.fields.x);
    lVar2 = *(long *)&(__this->fields).Dead;
    if (lVar2 == 0) goto LAB_0400fde2;
    pUVar3 = *(UnityEngine_Transform_o **)(lVar2 + 0x10);
    if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto LAB_0400fde2;
    UVar15 = UnityEngine_Transform__get_rotation(pUVar3,(MethodInfo *)0x0);
    UVar12 = UnityEngine_Quaternion__Internal_ToEulerRad(UVar15,(MethodInfo *)0x0);
    UVar13.fields.x = UVar12.fields.x * 57.29578;
    UVar13.fields.y = UVar12.fields.y * 57.29578;
    UVar13.fields.z = UVar12.fields.z * 57.29578;
    UVar12 = UnityEngine_Quaternion__Internal_MakePositive(UVar13,(MethodInfo *)0x0);
    fVar8 = UVar12.fields.y + -90.0 + fVar8 * 57.29578;
    fVar9 = floorf(fVar8 / 360.0);
    lVar2 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields;
    if (lVar2 == 0) goto LAB_0400fde2;
    pUVar3 = *(UnityEngine_Transform_o **)(lVar2 + 0x40);
    if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto LAB_0400fde2;
    UVar12 = UnityEngine_Transform__get_position(pUVar3,(MethodInfo *)0x0);
    lVar2 = *(long *)&(target->fields).Dead;
    if (lVar2 == 0) goto LAB_0400fde2;
    pUVar3 = *(UnityEngine_Transform_o **)(lVar2 + 0x10);
    if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto LAB_0400fde2;
    fVar11 = *(float *)((long)&(__this->fields).TitanColliderToggler + 4);
    UVar13 = UnityEngine_Transform__get_position(pUVar3,(MethodInfo *)0x0);
    lVar2 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields;
    if (lVar2 == 0) goto LAB_0400fde2;
    pUVar3 = *(UnityEngine_Transform_o **)(lVar2 + 0x10);
    if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto LAB_0400fde2;
    fStack_94 = UVar12.fields.y;
    UVar12 = UnityEngine_Transform__get_position(pUVar3,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
      il2cpp_init_class();
    }
    __x = Utility_Util__DistanceIgnoreY(UVar13,UVar12,(MethodInfo *)0x0);
    fVar10 = atan2f((fStack_94 + fVar11 + fVar11) - fVar10,__x);
    lVar2 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields;
    if (lVar2 == 0) goto LAB_0400fde2;
    pUVar3 = *(UnityEngine_Transform_o **)(lVar2 + 0x38);
    if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto LAB_0400fde2;
    UVar15 = UnityEngine_Transform__get_rotation(pUVar3,(MethodInfo *)0x0);
    UVar12 = UnityEngine_Quaternion__Internal_ToEulerRad(UVar15,(MethodInfo *)0x0);
    UVar14.fields.x = UVar12.fields.x * 57.29578;
    UVar14.fields.y = UVar12.fields.y * 57.29578;
    UVar14.fields.z = UVar12.fields.z * 57.29578;
    UVar12 = UnityEngine_Quaternion__Internal_MakePositive(UVar14,(MethodInfo *)0x0);
    lVar2 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields;
    if (lVar2 == 0) goto LAB_0400fde2;
    pUVar5 = *(UnityEngine_Transform_o **)(lVar2 + 0x38);
    if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto LAB_0400fde2;
    UVar15 = UnityEngine_Transform__get_rotation(pUVar5,(MethodInfo *)0x0);
    UVar13 = UnityEngine_Quaternion__Internal_ToEulerRad(UVar15,(MethodInfo *)0x0);
    euler.fields.x = UVar13.fields.x * 57.29578;
    euler.fields.y = UVar13.fields.y * 57.29578;
    euler.fields.z = UVar13.fields.z * 57.29578;
    UVar13 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
    lVar2 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields;
    if (lVar2 == 0) goto LAB_0400fde2;
    pUVar5 = *(UnityEngine_Transform_o **)(lVar2 + 0x38);
    if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto LAB_0400fde2;
    fVar8 = fVar8 - fVar9 * 360.0;
    fVar9 = 360.0;
    if (fVar8 <= 360.0) {
      fVar9 = fVar8;
    }
    fVar9 = (float)(-(uint)(0.0 <= fVar8) & (uint)fVar9);
    fVar8 = (float)(~-(uint)(180.0 < fVar9) & (uint)fVar9 |
                   (uint)(fVar9 + -360.0) & -(uint)(180.0 < fVar9));
    fVar11 = -fVar8;
    fVar9 = 40.0;
    if (fVar11 <= 40.0) {
      fVar9 = fVar11;
    }
    uVar7 = -(uint)(fVar8 <= 40.0);
    fVar10 = fVar10 * 57.29578;
    fVar8 = 30.0;
    if (fVar10 <= 30.0) {
      fVar8 = fVar10;
    }
    local_88 = (float)(~-(uint)(-40.0 <= fVar10) & 0xc2200000 |
                      (uint)fVar8 & -(uint)(-40.0 <= fVar10));
    UVar15 = UnityEngine_Transform__get_rotation(pUVar5,(MethodInfo *)0x0);
    UVar14 = UnityEngine_Quaternion__Internal_ToEulerRad(UVar15,(MethodInfo *)0x0);
    euler_00.fields.x = UVar14.fields.x * 57.29578;
    euler_00.fields.y = UVar14.fields.y * 57.29578;
    euler_00.fields.z = UVar14.fields.z * 57.29578;
    UVar14 = UnityEngine_Quaternion__Internal_MakePositive(euler_00,(MethodInfo *)0x0);
    local_98 = UVar12.fields.x;
    fStack_44 = UVar13.fields.y;
    UVar12.fields.x = (local_98 + local_88) * 0.017453292;
    UVar12.fields.y = (fStack_44 + (float)(~uVar7 & 0xc2200000 | (uint)fVar9 & uVar7)) * 0.017453292
    ;
    UVar12.fields.z = UVar14.fields.z * 0.017453292;
    UVar15 = UnityEngine_Quaternion__Internal_FromEulerRad(UVar12,(MethodInfo *)0x0);
    UnityEngine_Transform__set_rotation(pUVar3,UVar15,(MethodInfo *)0x0);
  }
  lVar2 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields;
  if ((lVar2 != 0) &&
     (pUVar3 = *(UnityEngine_Transform_o **)(lVar2 + 0x38), pUVar3 != (UnityEngine_Transform_o *)0x0
     )) {
    UVar15.fields = *(UnityEngine_Quaternion_Fields *)&(__this->fields).BasicCache;
    b = UnityEngine_Transform__get_localRotation(pUVar3,(MethodInfo *)0x0);
    fVar10 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    UVar15 = UnityEngine_Quaternion__Lerp(UVar15,b,fVar10 * 10.0,(MethodInfo *)0x0);
    UnityEngine_Transform__set_localRotation(pUVar3,UVar15,(MethodInfo *)0x0);
    lVar2 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields;
    if ((lVar2 != 0) &&
       (pUVar3 = *(UnityEngine_Transform_o **)(lVar2 + 0x38),
       pUVar3 != (UnityEngine_Transform_o *)0x0)) {
      UVar15 = UnityEngine_Transform__get_localRotation(pUVar3,(MethodInfo *)0x0);
      *(UnityEngine_Quaternion_Fields *)&(__this->fields).BasicCache = UVar15.fields;
      return;
    }
  }
LAB_0400fde2:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BasicTitan$$LateUpdate
// il2cpp: void Characters_BasicTitan__LateUpdate (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x400fdf0

void Characters_BasicTitan__LateUpdate(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_Component_o *__this_00;
  Characters_AnimationHandler_o *__this_01;
  undefined8 uVar6;
  bool bVar7;
  System_Nullable_Quaternion__o __this_02;
  long lVar8;
  long lVar9;
  char cVar10;
  bool_conflict bVar11;
  undefined8 *puVar12;
  Characters_BaseCharacter_o *pCVar13;
  UnityEngine_Transform_o *pUVar14;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar15;
  MethodInfo *extraout_RDX_01;
  long lVar16;
  float fVar17;
  float in_XMM1_Da;
  float fVar18;
  UnityEngine_Vector3_o position;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o value_00;
  UnityEngine_Vector3_o UVar19;
  UnityEngine_Vector3_o a;
  UnityEngine_Quaternion_o UVar20;
  UnityEngine_Quaternion_o UVar21;
  undefined4 in_stack_ffffffffffffff88;
  undefined4 in_stack_ffffffffffffff8c;
  float fVar22;
  undefined8 in_stack_ffffffffffffff90;
  float in_stack_ffffffffffffff98;
  float fVar23;
  float fStack_64;
  undefined8 uStack_48;
  
  if (DAT_05704264 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BaseCharacter);
    il2cpp_init_method_metadata(&TypeInfo_ITargetable);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_HasValue);
    il2cpp_init_method_metadata(&MethodInfo_Quaternion_get_Value);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    DAT_05704264 = '\x01';
  }
  Characters_BaseTitan__LateUpdate((Characters_BaseTitan_o *)__this,(MethodInfo *)0x0);
  bVar11 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0);
  uVar2 = *(uint *)&(__this->fields).OutlineComponent;
  pMVar15 = extraout_RDX;
  if ((char)bVar11 == '\0') {
    if ((char)(__this->fields).CustomDamage != '\0') {
      if ((*(char *)&(__this->fields).BellyFlopTime != '\0') &&
         (fVar17 = (__this->fields).LastGoodHeadAngle.fields.y, -1 < (int)fVar17)) {
        if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pCVar13 = Utility_Util__FindCharacterByViewId((int32_t)fVar17,(MethodInfo *)0x0);
        Characters_BasicTitan__LateUpdateHead(__this,pCVar13,method_00);
        lVar4._0_4_ = (__this->fields)._furthestCoreLocalPosition.fields.x;
        lVar4._4_4_ = (__this->fields)._furthestCoreLocalPosition.fields.y;
        goto joined_r0x040100b4;
      }
      goto LAB_04010132;
    }
    if ((*(byte *)((long)&(__this->fields).Setup + 4) & (uVar2 == 0x18 || (uVar2 < 2 || uVar2 == 3))
        ) != 0) {
      lVar4 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields;
      if (lVar4 == 0) goto LAB_040104c5;
      pUVar14 = *(UnityEngine_Transform_o **)(lVar4 + 0x38);
      __this_02.fields.value.fields.x = (float)in_stack_ffffffffffffff8c;
      __this_02.fields.hasValue = in_stack_ffffffffffffff88;
      __this_02.fields.value.fields.y = (float)(int)in_stack_ffffffffffffff90;
      __this_02.fields.value.fields.z = (float)(int)((ulong)in_stack_ffffffffffffff90 >> 0x20);
      __this_02.fields.value.fields.w = in_stack_ffffffffffffff98;
      UVar21 = System_Nullable<Quaternion>__get_Value
                         (__this_02,(MethodInfo_375B540 *)((long)&(__this->fields).Setup + 4));
      if (pUVar14 == (UnityEngine_Transform_o *)0x0) goto LAB_040104c5;
      UnityEngine_Transform__set_rotation(pUVar14,UVar21,(MethodInfo *)0x0);
      lVar4 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields;
      if ((lVar4 == 0) ||
         (pUVar14 = *(UnityEngine_Transform_o **)(lVar4 + 0x38),
         pUVar14 == (UnityEngine_Transform_o *)0x0)) goto LAB_040104c5;
      UVar21.fields = *(UnityEngine_Quaternion_Fields *)&(__this->fields).BasicCache;
      UVar20 = UnityEngine_Transform__get_localRotation(pUVar14,(MethodInfo *)0x0);
      fVar23 = UVar20.fields.x;
      fStack_64 = UVar20.fields.y;
      fVar18 = UVar20.fields.z;
      fVar22 = UVar20.fields.w;
      fVar17 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
      UVar20.fields.y = fStack_64;
      UVar20.fields.x = fVar23;
      UVar20.fields.w = fVar22;
      UVar20.fields.z = fVar18;
      UVar21 = UnityEngine_Quaternion__Lerp(UVar21,UVar20,fVar17 * 10.0,(MethodInfo *)0x0);
      UnityEngine_Transform__set_localRotation(pUVar14,UVar21,(MethodInfo *)0x0);
      lVar16._0_4_ = (__this->fields)._furthestCoreLocalPosition.fields.x;
      lVar16._4_4_ = (__this->fields)._furthestCoreLocalPosition.fields.y;
      goto joined_r0x04010085;
    }
LAB_0401013c:
    lVar4._0_4_ = (__this->fields)._furthestCoreLocalPosition.fields.x;
    lVar4._4_4_ = (__this->fields)._furthestCoreLocalPosition.fields.y;
  }
  else {
    if ((char)(__this->fields).CustomDamage != '\0') {
      plVar3 = *(long **)&(__this->fields).ActionPause;
      if (plVar3 == (long *)0x0) {
LAB_0401011f:
        (__this->fields).LastGoodHeadAngle.fields.y = -NAN;
      }
      else {
        lVar4 = *plVar3;
        if ((ulong)*(ushort *)(lVar4 + 0x12e) != 0) {
          lVar16 = 0;
          do {
            if (*(long *)(*(long *)(lVar4 + 0xb0) + lVar16) == TypeInfo_ITargetable) {
              puVar12 = (undefined8 *)
                        ((long)(*(int *)(*(long *)(lVar4 + 0xb0) + 8 + lVar16) + 2) * 0x10 + lVar4 +
                        0x138);
              goto LAB_040100d7;
            }
            lVar16 = lVar16 + 0x10;
          } while ((ulong)*(ushort *)(lVar4 + 0x12e) << 4 != lVar16);
        }
        puVar12 = (undefined8 *)il2cpp_runtime_glue(plVar3,TypeInfo_ITargetable,2);
LAB_040100d7:
        cVar10 = (*(code *)*puVar12)();
        pMVar15 = extraout_RDX_00;
        if ((cVar10 == '\0') ||
           (plVar3 = *(long **)&(__this->fields).ActionPause, plVar3 == (long *)0x0))
        goto LAB_0401011f;
        bVar1 = (TypeInfo_BaseCharacter->_2).naturalAligment;
        pMVar15 = (MethodInfo *)(ulong)bVar1;
        if ((*(byte *)(*plVar3 + 0x130) < bVar1) ||
           (*(Il2CppClass **)(*(long *)(*plVar3 + 200) + -8 + (long)pMVar15 * 8) != TypeInfo_BaseCharacter))
        goto LAB_0401011f;
        if ((plVar3[0xe] == 0) || (lVar4 = *(long *)(plVar3[0xe] + 0x20), lVar4 == 0))
        goto LAB_040104c5;
        (__this->fields).LastGoodHeadAngle.fields.y = *(float *)(lVar4 + 0x94);
        bVar7 = false;
        if (*(char *)&(__this->fields)._rootMotionAnimations == '\0') {
          lVar4 = *plVar3;
          if ((ulong)*(ushort *)(lVar4 + 0x12e) != 0) {
            lVar16 = 0;
            do {
              if (*(long *)(*(long *)(lVar4 + 0xb0) + lVar16) == TypeInfo_ITargetable) {
                puVar12 = (undefined8 *)
                          (lVar4 + (long)(*(int *)(*(long *)(lVar4 + 0xb0) + 8 + lVar16) + 1) * 0x10
                          + 0x138);
                goto LAB_04010576;
              }
              lVar16 = lVar16 + 0x10;
            } while ((ulong)*(ushort *)(lVar4 + 0x12e) << 4 != lVar16);
          }
          puVar12 = (undefined8 *)il2cpp_runtime_glue(plVar3,TypeInfo_ITargetable,1);
LAB_04010576:
          uStack_48 = (*(code *)*puVar12)(plVar3);
          lVar4 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields;
          if ((lVar4 == 0) ||
             (pUVar14 = *(UnityEngine_Transform_o **)(lVar4 + 0x10),
             pUVar14 == (UnityEngine_Transform_o *)0x0)) goto LAB_040104c5;
          UVar19 = UnityEngine_Transform__get_position(pUVar14,(MethodInfo *)0x0);
          fVar18 = UVar19.fields.z;
          fVar17 = UVar19.fields.x;
          if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
            il2cpp_init_class();
          }
          a.fields.z = in_XMM1_Da;
          a.fields.x = (float)(undefined4)uStack_48;
          a.fields.y = (float)uStack_48._4_4_;
          UVar19.fields.y = UVar19.fields.y;
          UVar19.fields.x = fVar17;
          UVar19.fields.z = fVar18;
          fVar17 = Utility_Util__DistanceIgnoreY(a,UVar19,(MethodInfo *)0x0);
          bVar7 = fVar17 < 100.0;
          pMVar15 = extraout_RDX_01;
        }
        if ((bool)(bVar7 & (uVar2 < 2 || uVar2 == 3))) {
          *(undefined1 *)&(__this->fields).BellyFlopTime = 1;
          pCVar13 = *(Characters_BaseCharacter_o **)&(__this->fields).ActionPause;
          if (pCVar13 != (Characters_BaseCharacter_o *)0x0) {
            bVar1 = (TypeInfo_BaseCharacter->_2).naturalAligment;
            pMVar15 = (MethodInfo *)(ulong)bVar1;
            if (((pCVar13->klass->_2).naturalAligment < bVar1) ||
               ((pCVar13->klass->_2).typeHierarchy[(long)&pMVar15[-1].field_0x57] != TypeInfo_BaseCharacter))
            {
                    /* WARNING: Subroutine does not return */
              il2cpp_unwind_resume(pCVar13,TypeInfo_BaseCharacter);
            }
          }
          Characters_BasicTitan__LateUpdateHead(__this,pCVar13,pMVar15);
          lVar4._0_4_ = (__this->fields)._furthestCoreLocalPosition.fields.x;
          lVar4._4_4_ = (__this->fields)._furthestCoreLocalPosition.fields.y;
          goto joined_r0x040100b4;
        }
      }
      *(undefined1 *)&(__this->fields).BellyFlopTime = 0;
LAB_04010132:
      Characters_BasicTitan__LateUpdateHead(__this,(Characters_BaseCharacter_o *)0x0,pMVar15);
      goto LAB_0401013c;
    }
    if ((uVar2 < 4) && (uVar2 != 2)) {
      pMVar15 = (__this->klass->vtable)._66_GetAimPoint.method;
      uVar6 = (*(__this->klass->vtable)._66_GetAimPoint.methodPtr)(__this);
      position.fields.z = in_XMM1_Da;
      position.fields.x = (float)(int)uVar6;
      position.fields.y = (float)(int)((ulong)uVar6 >> 0x20);
      Characters_BasicTitan__LateUpdateHeadPosition(__this,position,pMVar15);
      lVar4._0_4_ = (__this->fields)._furthestCoreLocalPosition.fields.x;
      lVar4._4_4_ = (__this->fields)._furthestCoreLocalPosition.fields.y;
    }
    else {
      *(undefined8 *)&(__this->fields).IsCrawler = 0;
      (__this->fields)._runAnimation = (System_String_o *)0x0;
      *(undefined4 *)&(__this->fields).Setup = 0;
      lVar16._0_4_ = (__this->fields)._furthestCoreLocalPosition.fields.x;
      lVar16._4_4_ = (__this->fields)._furthestCoreLocalPosition.fields.y;
joined_r0x04010085:
      if ((lVar16 == 0) ||
         (*(UnityEngine_Transform_o **)(lVar16 + 0x38) == (UnityEngine_Transform_o *)0x0))
      goto LAB_040104c5;
      UVar21 = UnityEngine_Transform__get_localRotation
                         (*(UnityEngine_Transform_o **)(lVar16 + 0x38),(MethodInfo *)0x0);
      *(UnityEngine_Quaternion_Fields *)&(__this->fields).BasicCache = UVar21.fields;
      lVar4._0_4_ = (__this->fields)._furthestCoreLocalPosition.fields.x;
      lVar4._4_4_ = (__this->fields)._furthestCoreLocalPosition.fields.y;
    }
  }
joined_r0x040100b4:
  if (lVar4 == 0) goto LAB_040104c5;
  pUVar14 = *(UnityEngine_Transform_o **)(lVar4 + 0x110);
  if (*(char *)((long)&(__this->fields).AttackSpeeds + 4) == '\0') {
    if (DAT_056fe077 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fe077 = '\x01';
    }
    if (pUVar14 == (UnityEngine_Transform_o *)0x0) goto LAB_040104c5;
    UnityEngine_Transform__set_localScale
              (pUVar14,(UnityEngine_Vector3_o)
                       *(UnityEngine_Vector3_Fields *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc),
               (MethodInfo *)0x0);
    lVar9._0_4_ = (__this->fields)._furthestCoreLocalPosition.fields.x;
    lVar9._4_4_ = (__this->fields)._furthestCoreLocalPosition.fields.y;
  }
  else {
    if (pUVar14 == (UnityEngine_Transform_o *)0x0) goto LAB_040104c5;
    value.fields.z = 0.01;
    value.fields.x = 0.01;
    value.fields.y = 0.01;
    UnityEngine_Transform__set_localScale(pUVar14,value,(MethodInfo *)0x0);
    lVar4 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields;
    if (lVar4 == 0) goto LAB_040104c5;
    pUVar14 = *(UnityEngine_Transform_o **)(lVar4 + 0x110);
    if (DAT_056fde1e == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Quaternion);
      DAT_056fde1e = '\x01';
    }
    if (pUVar14 == (UnityEngine_Transform_o *)0x0) goto LAB_040104c5;
    UnityEngine_Transform__set_localRotation
              (pUVar14,(UnityEngine_Quaternion_o)
                       **(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8),(MethodInfo *)0x0);
    lVar9._0_4_ = (__this->fields)._furthestCoreLocalPosition.fields.x;
    lVar9._4_4_ = (__this->fields)._furthestCoreLocalPosition.fields.y;
  }
  if (lVar9 == 0) goto LAB_040104c5;
  pUVar14 = *(UnityEngine_Transform_o **)(lVar9 + 0x118);
  if (*(char *)((long)&(__this->fields).AttackSpeeds + 5) == '\0') {
    if (DAT_056fe077 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fe077 = '\x01';
    }
    if (pUVar14 == (UnityEngine_Transform_o *)0x0) goto LAB_040104c5;
    UnityEngine_Transform__set_localScale
              (pUVar14,(UnityEngine_Vector3_o)
                       *(UnityEngine_Vector3_Fields *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc),
               (MethodInfo *)0x0);
    lVar8._0_4_ = (__this->fields)._furthestCoreLocalPosition.fields.x;
    lVar8._4_4_ = (__this->fields)._furthestCoreLocalPosition.fields.y;
  }
  else {
    if (pUVar14 == (UnityEngine_Transform_o *)0x0) goto LAB_040104c5;
    value_00.fields.z = 0.01;
    value_00.fields.x = 0.01;
    value_00.fields.y = 0.01;
    UnityEngine_Transform__set_localScale(pUVar14,value_00,(MethodInfo *)0x0);
    lVar4 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields;
    if (lVar4 == 0) goto LAB_040104c5;
    pUVar14 = *(UnityEngine_Transform_o **)(lVar4 + 0x118);
    if (DAT_056fde1e == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Quaternion);
      DAT_056fde1e = '\x01';
    }
    if (pUVar14 == (UnityEngine_Transform_o *)0x0) goto LAB_040104c5;
    UnityEngine_Transform__set_localRotation
              (pUVar14,(UnityEngine_Quaternion_o)
                       **(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8),(MethodInfo *)0x0);
    lVar8._0_4_ = (__this->fields)._furthestCoreLocalPosition.fields.x;
    lVar8._4_4_ = (__this->fields)._furthestCoreLocalPosition.fields.y;
  }
  if ((lVar8 != 0) &&
     (*(UnityEngine_Component_o **)(lVar8 + 0x148) != (UnityEngine_Component_o *)0x0)) {
    pUVar14 = UnityEngine_Component__get_transform
                        (*(UnityEngine_Component_o **)(lVar8 + 0x148),(MethodInfo *)0x0);
    lVar4 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields;
    if ((lVar4 != 0) &&
       ((pUVar5 = *(UnityEngine_Transform_o **)(lVar4 + 0x110),
        pUVar5 != (UnityEngine_Transform_o *)0x0 &&
        (UVar19 = UnityEngine_Transform__get_position(pUVar5,(MethodInfo *)0x0),
        pUVar14 != (UnityEngine_Transform_o *)0x0)))) {
      UnityEngine_Transform__set_position(pUVar14,UVar19,(MethodInfo *)0x0);
      lVar4 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields;
      if ((lVar4 != 0) &&
         (__this_00 = *(UnityEngine_Component_o **)(lVar4 + 0x150),
         __this_00 != (UnityEngine_Component_o *)0x0)) {
        pUVar14 = UnityEngine_Component__get_transform(__this_00,(MethodInfo *)0x0);
        lVar4 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields;
        if (((lVar4 != 0) &&
            (pUVar5 = *(UnityEngine_Transform_o **)(lVar4 + 0x118),
            pUVar5 != (UnityEngine_Transform_o *)0x0)) &&
           (UVar19 = UnityEngine_Transform__get_position(pUVar5,(MethodInfo *)0x0),
           pUVar14 != (UnityEngine_Transform_o *)0x0)) {
          UnityEngine_Transform__set_position(pUVar14,UVar19,(MethodInfo *)0x0);
          if ((char)(__this->fields).CustomDamage != '\0') {
            return;
          }
          lVar4 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields.z;
          if ((lVar4 != 0) &&
             (__this_01 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS,
             __this_01 != (Characters_AnimationHandler_o *)0x0)) {
            bVar11 = Characters_AnimationHandler__IsPlaying
                               (__this_01,*(System_String_o **)(lVar4 + 0x18),(MethodInfo *)0x0);
            if ((char)bVar11 == '\0') {
              return;
            }
            lVar4 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields;
            if (lVar4 != 0) {
              pUVar14 = *(UnityEngine_Transform_o **)(lVar4 + 0x120);
              UVar21 = UnityEngine_Quaternion__Internal_FromEulerRad
                                 ((UnityEngine_Vector3_o)ZEXT812(0xbfc90fdb),(MethodInfo *)0x0);
              if (pUVar14 != (UnityEngine_Transform_o *)0x0) {
                UnityEngine_Transform__set_localRotation(pUVar14,UVar21,(MethodInfo *)0x0);
                lVar4 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields;
                if ((lVar4 != 0) &&
                   (pUVar14 = *(UnityEngine_Transform_o **)(lVar4 + 0x48),
                   pUVar14 != (UnityEngine_Transform_o *)0x0)) {
                  UnityEngine_Transform__set_localPosition
                            (pUVar14,(UnityEngine_Vector3_o)ZEXT812(0xbd4ccccd00000000),
                             (MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_040104c5:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BasicTitan$$OnDestroy
// il2cpp: void Characters_BasicTitan__OnDestroy (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x4010670

void Characters_BasicTitan__OnDestroy(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  long lVar1;
  UnityEngine_Component_o *pUVar2;
  bool_conflict bVar3;
  UnityEngine_Object_o *pUVar4;
  
  if (DAT_05704265 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704265 = '\x01';
  }
  Characters_BaseCharacter__OnDestroy((Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0);
  lVar1 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields;
  if (lVar1 != 0) {
    pUVar4 = *(UnityEngine_Object_o **)(lVar1 + 0x148);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar3 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      lVar1 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields;
      if ((lVar1 == 0) ||
         (pUVar2 = *(UnityEngine_Component_o **)(lVar1 + 0x148),
         pUVar2 == (UnityEngine_Component_o *)0x0)) goto LAB_0401079e;
      pUVar4 = (UnityEngine_Object_o *)
               UnityEngine_Component__get_gameObject(pUVar2,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      UnityEngine_Object__Destroy(pUVar4,(MethodInfo *)0x0);
    }
    lVar1 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields;
    if (lVar1 != 0) {
      pUVar4 = *(UnityEngine_Object_o **)(lVar1 + 0x150);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar3 = UnityEngine_Object__op_Inequality
                        (pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        return;
      }
      lVar1 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields;
      if ((lVar1 != 0) &&
         (pUVar2 = *(UnityEngine_Component_o **)(lVar1 + 0x150),
         pUVar2 != (UnityEngine_Component_o *)0x0)) {
        pUVar4 = (UnityEngine_Object_o *)
                 UnityEngine_Component__get_gameObject(pUVar2,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        UnityEngine_Object__Destroy(pUVar4,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_0401079e:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BasicTitan$$GetFootstepPhase
// il2cpp: int32_t Characters_BasicTitan__GetFootstepPhase (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x40107b0

int32_t Characters_BasicTitan__GetFootstepPhase(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  long *plVar1;
  Characters_AnimationHandler_o *__this_00;
  bool_conflict bVar2;
  MethodInfo *pMVar3;
  System_String_o *a;
  float fVar4;
  float fVar5;
  
  if (DAT_05704266 == '\0') {
    il2cpp_init_method_metadata(&"");
    DAT_05704266 = '\x01';
  }
  plVar1 = *(long **)&(__this->fields)._furthestCoreLocalPosition.fields.z;
  if (plVar1 != (long *)0x0) {
    __this_00 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
    pMVar3 = (MethodInfo *)(**(code **)(*plVar1 + 0x1a8))(plVar1,*(undefined8 *)(*plVar1 + 0x1b0));
    if (__this_00 != (Characters_AnimationHandler_o *)0x0) {
      bVar2 = Characters_AnimationHandler__IsPlaying
                        (__this_00,(System_String_o *)pMVar3,(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        a = Characters_BasicTitan__GetPlayingRunAnimation(__this,pMVar3);
        bVar2 = System_String__op_Inequality(a,"",(MethodInfo *)0x0);
        if ((char)bVar2 == '\0') {
          fVar5 = (__this->fields).CurrentSpeed;
        }
        else {
          pMVar3 = *(MethodInfo **)&(__this->fields)._cameraFPS;
          if (pMVar3 == (MethodInfo *)0x0) goto LAB_040108cb;
          fVar5 = Characters_AnimationHandler__GetCurrentNormalizedTime
                            ((Characters_AnimationHandler_o *)pMVar3,(MethodInfo *)0x0);
          fVar4 = fmodf(fVar5,1.0,pMVar3);
          fVar5 = 1.4013e-45;
          if (0.0 <= fVar4) {
            fVar5 = (float)(uint)(0.5 <= fVar4);
          }
        }
      }
      else {
        pMVar3 = *(MethodInfo **)&(__this->fields)._cameraFPS;
        if (pMVar3 == (MethodInfo *)0x0) goto LAB_040108cb;
        fVar5 = 0.0;
        fVar4 = Characters_AnimationHandler__GetCurrentNormalizedTime
                          ((Characters_AnimationHandler_o *)pMVar3,(MethodInfo *)0x0);
        fVar4 = fmodf(fVar4,1.0,pMVar3);
        if (0.1 <= fVar4) {
          return (int32_t)(fVar4 < 0.6);
        }
      }
      return (int32_t)fVar5;
    }
  }
LAB_040108cb:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BasicTitan$$GetPlayingRunAnimation
// il2cpp: System_String_o* Characters_BasicTitan__GetPlayingRunAnimation (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x40108d0

System_String_o *
Characters_BasicTitan__GetPlayingRunAnimation(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  long lVar1;
  Characters_AnimationHandler_o *pCVar2;
  bool_conflict bVar3;
  ulong uVar4;
  System_String_o *name;
  
  if (DAT_05704267 == '\0') {
    il2cpp_init_method_metadata(&"");
    DAT_05704267 = '\x01';
  }
  lVar1 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields.z;
  if ((lVar1 != 0) &&
     (pCVar2 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS,
     pCVar2 != (Characters_AnimationHandler_o *)0x0)) {
    bVar3 = Characters_AnimationHandler__IsPlaying
                      (pCVar2,*(System_String_o **)(lVar1 + 0x18),(MethodInfo *)0x0);
    lVar1 = *(long *)&(__this->fields)._furthestCoreLocalPosition.fields.z;
    if (lVar1 != 0) {
      if ((char)bVar3 == '\0') {
        lVar1 = *(long *)(lVar1 + 0x10);
        if (lVar1 == 0) goto LAB_0401099f;
        uVar4 = 0;
        do {
          if ((long)(int)*(uint *)(lVar1 + 0x18) <= (long)uVar4) {
            return "";
          }
          if (*(uint *)(lVar1 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          pCVar2 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
          if (pCVar2 == (Characters_AnimationHandler_o *)0x0) goto LAB_0401099f;
          name = *(System_String_o **)(lVar1 + 0x20 + uVar4 * 8);
          bVar3 = Characters_AnimationHandler__IsPlaying(pCVar2,name,(MethodInfo *)0x0);
          uVar4 = uVar4 + 1;
        } while ((char)bVar3 == '\0');
      }
      else {
        name = *(System_String_o **)(lVar1 + 0x18);
      }
      return name;
    }
  }
LAB_0401099f:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BasicTitan$$CheckGround
// il2cpp: void Characters_BasicTitan__CheckGround (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x40109b0

void Characters_BasicTitan__CheckGround(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  byte bVar2;
  char cVar3;
  System_Action_Hashtable__o *pSVar4;
  UnityEngine_CapsuleCollider_o *__this_00;
  UnityEngine_Component_o *pUVar5;
  long lVar6;
  UnityEngine_RaycastHit_o __this_01;
  UnityEngine_Vector3_Fields direction;
  undefined4 uVar7;
  int32_t layerMask;
  bool_conflict bVar8;
  UnityEngine_Transform_o *pUVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  float extraout_XMM0_Dc_01;
  float fVar16;
  undefined4 extraout_XMM0_Dd;
  float fVar17;
  float fVar18;
  float fVar19;
  UnityEngine_Vector3_o UVar20;
  UnityEngine_Vector3_o UVar21;
  UnityEngine_Vector3_o UVar22;
  undefined4 in_stack_ffffffffffffff38;
  undefined4 in_stack_ffffffffffffff44;
  float fVar23;
  undefined4 uVar24;
  float fStack_98;
  float fStack_88;
  float fStack_84;
  undefined8 uStack_78;
  float fStack_68;
  float fStack_64;
  undefined1 auStack_48 [28];
  float fStack_2c;
  float fStack_28;
  undefined8 uStack_24;
  
  if (DAT_05704268 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CapsuleCollider);
    il2cpp_init_method_metadata(&TypeInfo_Physics);
    DAT_05704268 = '\x01';
  }
  fStack_28 = 0.0;
  uStack_24 = 0;
  auStack_48._16_8_ = (InvokerMethod)0x0;
  auStack_48._24_4_ = 0;
  fStack_2c = 0.0;
  auStack_48._0_8_ = (Il2CppMethodPointer)0x0;
  auStack_48._8_8_ = (Il2CppMethodPointer)0x0;
  pSVar4 = (__this->fields).OnPlayerPropertiesChanged;
  if (pSVar4 == (System_Action_Hashtable__o *)0x0) goto LAB_04010ea8;
  __this_00 = *(UnityEngine_CapsuleCollider_o **)&(pSVar4->fields).method_is_virtual;
  if (__this_00 != (UnityEngine_CapsuleCollider_o *)0x0) {
    bVar2 = (TypeInfo_CapsuleCollider->_2).naturalAligment;
    if (((__this_00->klass->_2).naturalAligment < bVar2) ||
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_CapsuleCollider)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(__this_00);
    }
  }
  cVar3 = *(char *)&(__this->fields)._rootMotionAnimations;
  if (*(int *)&(__this->fields).OutlineComponent - 5U < 2) {
    if (__this_00 == (UnityEngine_CapsuleCollider_o *)0x0) goto LAB_04010ea8;
    fVar10 = (__this->fields).LastGoodHeadAngle.fields.x * 0.7;
    if (cVar3 == '\0') {
LAB_04010adf:
      UnityEngine_CapsuleCollider__set_radius(__this_00,fVar10,(MethodInfo *)0x0);
      goto LAB_04010ae9;
    }
LAB_04010ab0:
    UnityEngine_CapsuleCollider__set_height(__this_00,fVar10,(MethodInfo *)0x0);
    cVar3 = *(char *)&(__this->fields)._rootMotionAnimations;
  }
  else {
    if (__this_00 == (UnityEngine_CapsuleCollider_o *)0x0) goto LAB_04010ea8;
    if (cVar3 == '\0') {
      fVar11 = UnityEngine_CapsuleCollider__get_radius(__this_00,(MethodInfo *)0x0);
      fVar10 = (__this->fields).LastGoodHeadAngle.fields.x;
      if ((fVar11 != fVar10) || (NAN(fVar11) || NAN(fVar10))) goto LAB_04010adf;
    }
    else {
      fVar11 = UnityEngine_CapsuleCollider__get_height(__this_00,(MethodInfo *)0x0);
      fVar10 = (__this->fields).LastGoodHeadAngle.fields.x;
      if ((fVar11 != fVar10) || (NAN(fVar11) || NAN(fVar10))) goto LAB_04010ab0;
    }
LAB_04010ae9:
    cVar3 = *(char *)&(__this->fields)._rootMotionAnimations;
  }
  if (cVar3 == '\0') {
    Characters_BaseTitan__CheckGround((Characters_BaseTitan_o *)__this,(MethodInfo *)0x0);
    return;
  }
  pSVar4 = (__this->fields).OnPlayerPropertiesChanged;
  if (((pSVar4 != (System_Action_Hashtable__o *)0x0) &&
      (pUVar5 = *(UnityEngine_Component_o **)&(pSVar4->fields).method_is_virtual,
      pUVar5 != (UnityEngine_Component_o *)0x0)) &&
     (pUVar9 = UnityEngine_Component__get_transform(pUVar5,(MethodInfo *)0x0),
     pUVar9 != (UnityEngine_Transform_o *)0x0)) {
    UVar20 = UnityEngine_Transform__get_lossyScale(pUVar9,(MethodInfo *)0x0);
    fVar10 = UnityEngine_CapsuleCollider__get_radius(__this_00,(MethodInfo *)0x0);
    pSVar4 = (__this->fields).OnPlayerPropertiesChanged;
    if (((pSVar4 != (System_Action_Hashtable__o *)0x0) &&
        (pUVar5 = *(UnityEngine_Component_o **)&(pSVar4->fields).method_is_virtual,
        pUVar5 != (UnityEngine_Component_o *)0x0)) &&
       (pUVar9 = UnityEngine_Component__get_transform(pUVar5,(MethodInfo *)0x0),
       pUVar9 != (UnityEngine_Transform_o *)0x0)) {
      UVar21 = UnityEngine_Transform__get_lossyScale(pUVar9,(MethodInfo *)0x0);
      fVar11 = UnityEngine_CapsuleCollider__get_height(__this_00,(MethodInfo *)0x0);
      lVar6 = *(long *)&(__this->fields).Dead;
      if ((lVar6 != 0) &&
         (pUVar9 = *(UnityEngine_Transform_o **)(lVar6 + 0x10),
         pUVar9 != (UnityEngine_Transform_o *)0x0)) {
        fVar23 = extraout_XMM0_Dc;
        UVar22 = UnityEngine_Transform__get_position(pUVar9,(MethodInfo *)0x0);
        if (DAT_056fde1f == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Vector3);
          DAT_056fde1f = '\x01';
        }
        lVar6 = *(long *)&(__this->fields).Dead;
        if ((lVar6 != 0) &&
           (pUVar9 = *(UnityEngine_Transform_o **)(lVar6 + 0x10),
           pUVar9 != (UnityEngine_Transform_o *)0x0)) {
          fStack_98 = UVar20.fields.x;
          fStack_98 = fStack_98 * fVar10;
          uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
          fVar17 = fStack_98 + 1.0;
          fVar13 = 0.0;
          fVar10 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20) * fVar17;
          UVar20 = UnityEngine_Transform__get_forward(pUVar9,(MethodInfo *)0x0);
          lVar6 = *(long *)&(__this->fields).Dead;
          if (lVar6 != 0) {
            pUVar9 = *(UnityEngine_Transform_o **)(lVar6 + 0x10);
            fStack_68 = UVar22.fields.x;
            fStack_64 = UVar22.fields.y;
            if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
              uStack_78._0_4_ = UVar21.fields.x;
              fVar19 = (fVar11 * (float)uStack_78 - (fStack_98 + fStack_98)) * 0.5;
              fStack_88 = (float)uVar1;
              fStack_84 = (float)((ulong)uVar1 >> 0x20);
              fStack_68 = fStack_68 + fVar17 * fStack_88;
              fStack_64 = fStack_64 + fVar17 * fStack_84;
              fVar10 = UVar22.fields.z + fVar10;
              fVar12 = UVar20.fields.x * fVar19;
              fVar14 = UVar20.fields.y * fVar19;
              fVar18 = UVar20.fields.z * fVar19;
              fVar11 = fVar19;
              uVar24 = extraout_XMM0_Dd;
              fVar17 = fVar19;
              UVar20 = UnityEngine_Transform__get_forward(pUVar9,(MethodInfo *)0x0);
              fVar19 = UVar20.fields.x * fVar19;
              fVar15 = UVar20.fields.y * fVar11;
              fVar16 = extraout_XMM0_Dc_01 * fVar23;
              fVar17 = UVar20.fields.z * fVar17;
              *(undefined1 *)((long)&(__this->fields).Animation + 5) = 0;
              if (DAT_0570266b == '\0') {
                il2cpp_init_method_metadata(&TypeInfo_Vector3);
                DAT_0570266b = '\x01';
              }
              fVar19 = fVar19 + fStack_68;
              fVar15 = fVar15 + fStack_64;
              fVar16 = fVar16 + extraout_XMM0_Dc_00 + fVar13 * 0.0;
              fVar17 = fVar17 + fVar10;
              direction = *(UnityEngine_Vector3_Fields *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x24);
              fVar13 = (float)(*(__this->klass->vtable)._61_get_GroundDistance.methodPtr)
                                        (__this,(__this->klass->vtable)._61_get_GroundDistance.
                                                method);
              uVar7 = (*(__this->klass->vtable)._60_get_GroundMask.methodPtr)(__this);
              layerMask = UnityEngine_LayerMask__get_value
                                    ((UnityEngine_LayerMask_Fields)(int32_t)&stack0xffffffffffffff40
                                     ,(MethodInfo *)0x0);
              if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
                il2cpp_init_class();
              }
              UVar21.fields.y = fVar15;
              UVar21.fields.x = fVar19;
              UVar20.fields.z = fVar10 - fVar18;
              UVar20.fields.x = fStack_68 - fVar12;
              UVar20.fields.y = fStack_64 - fVar14;
              UVar21.fields.z = fVar17;
              bVar8 = UnityEngine_Physics__CapsuleCast
                                (UVar20,UVar21,fStack_98,(UnityEngine_Vector3_o)direction,
                                 (UnityEngine_RaycastHit_o *)auStack_48,fVar13 + 1.0,layerMask,
                                 (MethodInfo *)0x0);
              if ((char)bVar8 != '\0') {
                if (*(char *)((long)&(__this->fields).Animation + 4) == '\0') {
                  *(undefined2 *)((long)&(__this->fields).Animation + 4) = 0x101;
                }
                __this_01.fields.m_Point.fields.y = fVar13;
                __this_01.fields.m_Point.fields.x = (float)in_stack_ffffffffffffff38;
                __this_01.fields.m_Point.fields.z = (float)uVar7;
                __this_01.fields.m_Normal.fields.x = (float)in_stack_ffffffffffffff44;
                __this_01.fields.m_Normal.fields.y = fVar17;
                __this_01.fields.m_Normal.fields.z = fVar11;
                __this_01.fields.m_FaceID = (uint32_t)fVar23;
                __this_01.fields.m_Distance = (float)uVar24;
                __this_01.fields.m_UV.fields.x = fVar19;
                __this_01.fields.m_UV.fields.y = fVar15;
                __this_01.fields.m_Collider = (int32_t)fVar16;
                fVar11 = UnityEngine_RaycastHit__get_distance(__this_01,(MethodInfo *)auStack_48);
                fVar10 = (float)(*(__this->klass->vtable)._61_get_GroundDistance.methodPtr)
                                          (__this,(__this->klass->vtable)._61_get_GroundDistance.
                                                  method);
                fVar11 = fVar11 + -1.0;
                if (fVar11 <= fVar10) {
                  fVar10 = fVar11;
                }
                (__this->fields)._turnTargetRotation.fields.x =
                     (float)(-(uint)(0.0 <= fVar11) & (uint)fVar10);
                return;
              }
              *(undefined1 *)((long)&(__this->fields).Animation + 4) = 0;
              fVar10 = (float)(*(__this->klass->vtable)._61_get_GroundDistance.methodPtr)
                                        (__this,(__this->klass->vtable)._61_get_GroundDistance.
                                                method);
              (__this->fields)._turnTargetRotation.fields.x = fVar10;
              return;
            }
          }
        }
      }
    }
  }
LAB_04010ea8:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BasicTitan$$.ctor
// il2cpp: void Characters_BasicTitan___ctor (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x4010ec0

/* WARNING: Type propagation algorithm not settling */

void Characters_BasicTitan___ctor(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_Nullable_Quaternion__o __this_00;
  undefined4 in_stack_ffffffffffffffa8;
  undefined4 uVar2;
  undefined4 in_stack_ffffffffffffffac;
  float fVar3;
  undefined4 in_stack_ffffffffffffffb0;
  float fVar4;
  undefined4 in_stack_ffffffffffffffb4;
  float fVar5;
  float in_stack_ffffffffffffffb8;
  float fVar6;
  bool_conflict local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  
  if (DAT_05704269 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Nullable_1_UnityEngine_Quaternion);
    DAT_05704269 = '\x01';
  }
  if (DAT_056fde1e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Quaternion);
    DAT_056fde1e = '\x01';
  }
  _local_38 = (System_Nullable_T__c *)0x0;
  _uStack_30 = (Il2CppType *)0x0;
  local_28 = 0;
  __this_00.fields.value.fields.x = (float)in_stack_ffffffffffffffac;
  __this_00.fields.hasValue = in_stack_ffffffffffffffa8;
  __this_00.fields.value.fields.y = (float)in_stack_ffffffffffffffb0;
  __this_00.fields.value.fields.z = (float)in_stack_ffffffffffffffb4;
  __this_00.fields.value.fields.w = in_stack_ffffffffffffffb8;
  System_Nullable<Quaternion>___ctor
            (__this_00,
             (UnityEngine_Quaternion_o)**(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8),
             (MethodInfo_375B520 *)&stack0xffffffffffffffc8);
  *(undefined4 *)&(__this->fields).Setup = local_28;
  (__this->fields).IsCrawler = local_38;
  *(undefined4 *)&(__this->fields).field_0x2a4 = uStack_34;
  *(undefined4 *)&(__this->fields)._runAnimation = uStack_30;
  *(undefined4 *)((long)&(__this->fields)._runAnimation + 4) = uStack_2c;
  if (DAT_056fde1e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Quaternion);
    DAT_056fde1e = '\x01';
  }
  uVar2 = 0;
  fVar3 = 0.0;
  fVar4 = 0.0;
  fVar5 = 0.0;
  fVar6 = 0.0;
  System_Nullable<Quaternion>___ctor
            ((System_Nullable_Quaternion__o)ZEXT820(0),
             (UnityEngine_Quaternion_o)**(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8),
             (MethodInfo_375B520 *)&stack0xffffffffffffffa8);
  (__this->fields)._oldHeadRotation.fields.w = fVar6;
  *(undefined4 *)((long)&(__this->fields).Setup + 4) = uVar2;
  (__this->fields)._oldHeadRotation.fields.x = fVar3;
  (__this->fields)._oldHeadRotation.fields.y = fVar4;
  (__this->fields)._oldHeadRotation.fields.z = fVar5;
  if (DAT_056fe093 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector2);
    DAT_056fe093 = '\x01';
  }
  uVar1 = **(undefined8 **)(TypeInfo_Vector2 + 0xb8);
  (__this->fields).LateUpdateHeadRotation.fields.hasValue = (int)uVar1;
  (__this->fields).LateUpdateHeadRotation.fields.value.fields.x = (float)(int)((ulong)uVar1 >> 0x20)
  ;
  (__this->fields).LateUpdateHeadRotation.fields.value.fields.y = 5.5;
  (__this->fields).LateUpdateHeadRotationRecv.fields.hasValue = 0x41400000;
  (__this->fields).LateUpdateHeadRotationRecv.fields.value.fields.x = 140.0;
  (__this->fields).LastGoodHeadAngle.fields.y = -NAN;
  Characters_BaseTitan___ctor((Characters_BaseTitan_o *)__this,(MethodInfo *)0x0);
  return;
}


