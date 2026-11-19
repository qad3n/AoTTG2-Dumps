// Type: Characters.BaseShifter
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp_body_deref/Scripts/Characters/BaseShifter.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Shifters/BaseShifter.cs
// --------------------------------

// Characters.BaseShifter.<>c__DisplayClass49_0$$.ctor
// il2cpp: void Characters_BaseShifter___c__DisplayClass49_0___ctor (Characters_BaseShifter___c__DisplayClass49_0_o* __this, const MethodInfo* method);
// 0x5c173a0

void Characters_BaseShifter___c__DisplayClass49_0___ctor
               (Characters_BaseShifter___c__DisplayClass49_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Characters.BaseShifter.<>c__DisplayClass49_0$$<UpdateDeathVisuals>b__0
// il2cpp: bool Characters_BaseShifter___c__DisplayClass49_0___UpdateDeathVisuals_b__0 (Characters_BaseShifter___c__DisplayClass49_0_o* __this, UnityEngine_Renderer_o* renderer, const MethodInfo* method);
// 0x5c18450

bool Characters_BaseShifter___c__DisplayClass49_0___UpdateDeathVisuals_b__0
               (Characters_BaseShifter___c__DisplayClass49_0_o *__this,UnityEngine_Renderer_o *renderer,
               MethodInfo *method)

{
  UnityEngine_Object_o *y;
  bool bVar1;
  
  if (Il2CppMethodInitialized_07547718 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547718 = '\x01';
  }
  y = (UnityEngine_Object_o *)(__this->fields).body;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)renderer,y,(MethodInfo *)0x0);
  return bVar1;
}


// Characters.BaseShifter.<WaitAndBecomeHuman>d__45$$.ctor
// il2cpp: void Characters_BaseShifter__WaitAndBecomeHuman_d__45___ctor (Characters_BaseShifter__WaitAndBecomeHuman_d__45_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5c16f40

void Characters_BaseShifter__WaitAndBecomeHuman_d__45___ctor
               (Characters_BaseShifter__WaitAndBecomeHuman_d__45_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Characters.BaseShifter.<WaitAndBecomeHuman>d__45$$System.IDisposable.Dispose
// il2cpp: void Characters_BaseShifter__WaitAndBecomeHuman_d__45__System_IDisposable_Dispose (Characters_BaseShifter__WaitAndBecomeHuman_d__45_o* __this, const MethodInfo* method);
// 0x5c184b0

void Characters_BaseShifter__WaitAndBecomeHuman_d__45__System_IDisposable_Dispose
               (Characters_BaseShifter__WaitAndBecomeHuman_d__45_o *__this,MethodInfo *method)

{
  return;
}


// Characters.BaseShifter.<WaitAndBecomeHuman>d__45$$MoveNext
// il2cpp: bool Characters_BaseShifter__WaitAndBecomeHuman_d__45__MoveNext (Characters_BaseShifter__WaitAndBecomeHuman_d__45_o* __this, const MethodInfo* method);
// 0x5c184c0
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c18737: test r15, r15
// asm:   0x5c1873a: jne 0x5c1878e
// asm:   0x5c1873c: jmp 0x5c18905
// asm:   0x5c18818: test r15, r15
// asm:   0x5c1881b: je 0x5c18905

bool Characters_BaseShifter__WaitAndBecomeHuman_d__45__MoveNext
               (Characters_BaseShifter__WaitAndBecomeHuman_d__45_o *__this,MethodInfo *method)

{
  float seconds;
  byte bVar1;
  int iVar2;
  Characters_BaseShifter_o *__this_00;
  Characters_BaseTitanComponentCache_o *pCVar3;
  UnityEngine_Transform_o *pUVar4;
  GameManagers_InGameManager_o *pGVar5;
  Characters_Human_o *__this_01;
  Utility_BaseComponentCache_o *pUVar6;
  Photon_Pun_PhotonView_o *pPVar7;
  MethodInfo *pMVar8;
  UnityEngine_WaitForSeconds_o *pUVar9;
  Il2CppClass *pIVar10;
  System_Collections_IEnumerator_o *pSVar11;
  UnityEngine_Vector3_o position;
  UnityEngine_Vector3_o UVar12;
  UnityEngine_Vector3_o euler;
  UnityEngine_Quaternion_Fields local_38;
  
  if (Il2CppMethodInitialized_07547719 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_Empty_object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForSeconds);
    il2cpp_codegen_initialize_runtime_metadata(&"MarkDeadRPC");
    il2cpp_codegen_initialize_runtime_metadata(&"MarkTransformingRPC");
    Il2CppMethodInitialized_07547719 = '\x01';
  }
  iVar2 = (__this->fields).__1__state;
  __this_00 = (__this->fields).__4__this;
  if (iVar2 == 2) {
    (__this->fields).__1__state = -1;
    if (((__this_00 != (Characters_BaseShifter_o *)0x0) &&
        (pCVar3 = (__this_00->fields).BaseTitanCache, pCVar3 != (Characters_BaseTitanComponentCache_o *)0x0))
       && (pUVar4 = (pCVar3->fields).Neck, pUVar4 != (UnityEngine_Transform_o *)0x0)) {
      pGVar5 = (__this_00->fields)._inGameManager;
      position = UnityEngine_Transform__get_position(pUVar4,(MethodInfo *)0x0);
      pCVar3 = (__this_00->fields).BaseTitanCache;
      if ((pCVar3 != (Characters_BaseTitanComponentCache_o *)0x0) &&
         (pUVar4 = (pCVar3->fields).Neck, pUVar4 != (UnityEngine_Transform_o *)0x0)) {
        local_38 = (UnityEngine_Quaternion_Fields)
                   UnityEngine_Transform__get_rotation(pUVar4,(MethodInfo *)0x0);
        UVar12 = UnityEngine_Quaternion__Internal_ToEulerRad
                           ((UnityEngine_Quaternion_o *)&local_38,(MethodInfo *)0x0);
        euler.fields.x = UVar12.fields.x * 57.29578;
        euler.fields.y = UVar12.fields.y * 57.29578;
        euler.fields.z = UVar12.fields.z * 57.29578;
        UVar12 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
        if (pGVar5 != (GameManagers_InGameManager_o *)0x0) {
          GameManagers_InGameManager__SpawnPlayerAt(pGVar5,false,position,UVar12.fields.y,(MethodInfo *)0x0);
          pGVar5 = (__this_00->fields)._inGameManager;
          if ((pGVar5 != (GameManagers_InGameManager_o *)0x0) &&
             (__this_01 = (Characters_Human_o *)(pGVar5->fields).CurrentCharacter,
             __this_01 != (Characters_Human_o *)0x0)) {
            bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
            if (((__this_01->klass->_2).typeHierarchyDepth < bVar1) ||
               ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                (Il2CppClass *)TypeInfo_Characters_Human)) {
              il2cpp_codegen_raise_invalid_cast_exception(__this_01);
            }
            pSVar11 = Characters_Human__WaitAndTransformFromShifter
                                (__this_01,(__this_00->fields).PreviousHumanGas,
                                 (__this_00->fields).PreviousHumanWeapon,(MethodInfo *)0x0);
            UnityEngine_MonoBehaviour__StartCoroutine_691c390
                      ((UnityEngine_MonoBehaviour_o *)__this_01,pSVar11,(MethodInfo *)0x0);
            return false;
          }
        }
      }
    }
    goto label_05c18905;
  }
  if (iVar2 != 1) {
    if (iVar2 == 0) {
      (__this->fields).__1__state = -1;
      seconds = (__this->fields).time;
      pUVar9 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
      UnityEngine_WaitForSeconds___ctor(pUVar9,seconds,(MethodInfo *)0x0);
      (__this->fields).__2__current = (Il2CppObject *)pUVar9;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
      (__this->fields).__1__state = 1;
      return true;
    }
    return false;
  }
  (__this->fields).__1__state = -1;
  pMVar8 = MethodInfo_System_Array_Empty_object;
  if ((__this_00 == (Characters_BaseShifter_o *)0x0) ||
     (pUVar6 = (__this_00->fields).Cache, pUVar6 == (Utility_BaseComponentCache_o *)0x0)) goto label_05c18905;
  pPVar7 = (pUVar6->fields).PhotonView;
  if ((MethodInfo_System_Array_Empty_object->field7_0x38).methodMetadataHandle == (void *)0x0) {
    il2cpp_codegen_rgctx_method_init(MethodInfo_System_Array_Empty_object);
    pIVar10 = *(Il2CppClass **)((long)(pMVar8->field7_0x38).methodMetadataHandle + 0x10);
    if (((pIVar10->_2).bitflags1 & 1) != 0) goto label_05c18762;
label_05c1870f:
    pIVar10 = il2cpp_codegen_class_init_checked(pIVar10);
    if ((pIVar10->_2).cctor_finished_or_no_cctor == 0) goto label_05c18720;
label_05c1876b:
    pIVar10 = (pMVar8->field7_0x38).rgctx_data[2].klass;
    bVar1 = (pIVar10->_2).bitflags1;
  }
  else {
    pIVar10 = *(Il2CppClass **)
               ((long)(MethodInfo_System_Array_Empty_object->field7_0x38).methodMetadataHandle + 0x10);
    if (((pIVar10->_2).bitflags1 & 1) == 0) goto label_05c1870f;
label_05c18762:
    if ((pIVar10->_2).cctor_finished_or_no_cctor != 0) goto label_05c1876b;
label_05c18720:
    il2cpp_codegen_runtime_class_init(pIVar10);
    pIVar10 = (pMVar8->field7_0x38).rgctx_data[2].klass;
    bVar1 = (pIVar10->_2).bitflags1;
  }
  if ((bVar1 & 1) == 0) {
    pIVar10 = il2cpp_codegen_class_init_checked(pIVar10);
  }
  if (pPVar7 == (Photon_Pun_PhotonView_o *)0x0) goto label_05c18905;
  Photon_Pun_PhotonView__RPC
            (pPVar7,"MarkTransformingRPC",3,*(System_Object_array **)pIVar10->static_fields,(MethodInfo *)0x0)
  ;
  pMVar8 = MethodInfo_System_Array_Empty_object;
  pUVar6 = (__this_00->fields).Cache;
  if (pUVar6 == (Utility_BaseComponentCache_o *)0x0) goto label_05c18905;
  pPVar7 = (pUVar6->fields).PhotonView;
  if ((MethodInfo_System_Array_Empty_object->field7_0x38).methodMetadataHandle == (void *)0x0) {
    il2cpp_codegen_rgctx_method_init(MethodInfo_System_Array_Empty_object);
    pIVar10 = *(Il2CppClass **)((long)(pMVar8->field7_0x38).methodMetadataHandle + 0x10);
    if (((pIVar10->_2).bitflags1 & 1) != 0) goto label_05c188d1;
label_05c187e8:
    pIVar10 = il2cpp_codegen_class_init_checked(pIVar10);
    if ((pIVar10->_2).cctor_finished_or_no_cctor == 0) goto label_05c187fd;
label_05c188de:
    pIVar10 = (pMVar8->field7_0x38).rgctx_data[2].klass;
    bVar1 = (pIVar10->_2).bitflags1;
  }
  else {
    pIVar10 = *(Il2CppClass **)
               ((long)(MethodInfo_System_Array_Empty_object->field7_0x38).methodMetadataHandle + 0x10);
    if (((pIVar10->_2).bitflags1 & 1) == 0) goto label_05c187e8;
label_05c188d1:
    if ((pIVar10->_2).cctor_finished_or_no_cctor != 0) goto label_05c188de;
label_05c187fd:
    il2cpp_codegen_runtime_class_init(pIVar10);
    pIVar10 = (pMVar8->field7_0x38).rgctx_data[2].klass;
    bVar1 = (pIVar10->_2).bitflags1;
  }
  if ((bVar1 & 1) == 0) {
    pIVar10 = il2cpp_codegen_class_init_checked(pIVar10);
  }
  if (pPVar7 != (Photon_Pun_PhotonView_o *)0x0) {
    Photon_Pun_PhotonView__RPC
              (pPVar7,"MarkDeadRPC",3,*(System_Object_array **)pIVar10->static_fields,
               (MethodInfo *)0x0);
    pSVar11 = (*(__this_00->klass->vtable)._84_WaitAndDie.methodPtr)
                        (__this_00,(__this_00->klass->vtable)._84_WaitAndDie.method);
    UnityEngine_MonoBehaviour__StartCoroutine_691c390
              ((UnityEngine_MonoBehaviour_o *)__this_00,pSVar11,(MethodInfo *)0x0);
    pUVar9 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
    UnityEngine_WaitForSeconds___ctor(pUVar9,2.0,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)pUVar9;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
    (__this->fields).__1__state = 2;
    return true;
  }
label_05c18905:
  ThrowNullReferenceException();
}


// Characters.BaseShifter.<WaitAndBecomeHuman>d__45$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Characters_BaseShifter__WaitAndBecomeHuman_d__45__System_Collections_Generic_IEnumerator_System_Object__get_Current (Characters_BaseShifter__WaitAndBecomeHuman_d__45_o* __this, const MethodInfo* method);
// 0x5c18920

Il2CppObject *
Characters_BaseShifter__WaitAndBecomeHuman_d__45__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Characters_BaseShifter__WaitAndBecomeHuman_d__45_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Characters.BaseShifter.<WaitAndBecomeHuman>d__45$$System.Collections.IEnumerator.Reset
// il2cpp: void Characters_BaseShifter__WaitAndBecomeHuman_d__45__System_Collections_IEnumerator_Reset (Characters_BaseShifter__WaitAndBecomeHuman_d__45_o* __this, const MethodInfo* method);
// 0x5c18930

void Characters_BaseShifter__WaitAndBecomeHuman_d__45__System_Collections_IEnumerator_Reset
               (Characters_BaseShifter__WaitAndBecomeHuman_d__45_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&
                  MethodInfo_Characters_BaseShifter_WaitAndBecomeHuman_d__45_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Characters.BaseShifter.<WaitAndBecomeHuman>d__45$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Characters_BaseShifter__WaitAndBecomeHuman_d__45__System_Collections_IEnumerator_get_Current (Characters_BaseShifter__WaitAndBecomeHuman_d__45_o* __this, const MethodInfo* method);
// 0x5c18970

Il2CppObject *
Characters_BaseShifter__WaitAndBecomeHuman_d__45__System_Collections_IEnumerator_get_Current
          (Characters_BaseShifter__WaitAndBecomeHuman_d__45_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Characters.BaseShifter.<WaitForDeathVisuals>d__47$$.ctor
// il2cpp: void Characters_BaseShifter__WaitForDeathVisuals_d__47___ctor (Characters_BaseShifter__WaitForDeathVisuals_d__47_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5c170b0

void Characters_BaseShifter__WaitForDeathVisuals_d__47___ctor
               (Characters_BaseShifter__WaitForDeathVisuals_d__47_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Characters.BaseShifter.<WaitForDeathVisuals>d__47$$System.IDisposable.Dispose
// il2cpp: void Characters_BaseShifter__WaitForDeathVisuals_d__47__System_IDisposable_Dispose (Characters_BaseShifter__WaitForDeathVisuals_d__47_o* __this, const MethodInfo* method);
// 0x5c18980

void Characters_BaseShifter__WaitForDeathVisuals_d__47__System_IDisposable_Dispose
               (Characters_BaseShifter__WaitForDeathVisuals_d__47_o *__this,MethodInfo *method)

{
  return;
}


// Characters.BaseShifter.<WaitForDeathVisuals>d__47$$MoveNext
// il2cpp: bool Characters_BaseShifter__WaitForDeathVisuals_d__47__MoveNext (Characters_BaseShifter__WaitForDeathVisuals_d__47_o* __this, const MethodInfo* method);
// 0x5c18990

bool Characters_BaseShifter__WaitForDeathVisuals_d__47__MoveNext
               (Characters_BaseShifter__WaitForDeathVisuals_d__47_o *__this,MethodInfo *method)

{
  int iVar1;
  Characters_BaseShifter_o *__this_00;
  Utility_BaseComponentCache_o *pUVar2;
  Photon_Pun_PhotonView_o *__this_01;
  undefined8 in_RAX;
  UnityEngine_GameObject_o *targetGo;
  System_Object_array *parameters;
  Il2CppObject *pIVar3;
  Il2CppObject *pIVar4;
  UnityEngine_WaitForSeconds_o *__this_02;
  undefined8 uStack_38;
  
  uStack_38 = in_RAX;
  if (Il2CppMethodInitialized_0754771a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForSeconds);
    il2cpp_codegen_initialize_runtime_metadata(&"StartDeathVisualsRPC");
    Il2CppMethodInitialized_0754771a = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  __this_00 = (__this->fields).__4__this;
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      (__this->fields).__1__state = -1;
      if (__this_00 == (Characters_BaseShifter_o *)0x0) goto label_05c18b64;
      targetGo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0)
      ;
      if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
      }
      Photon_Pun_PhotonNetwork__Destroy_56d7e70(targetGo,(MethodInfo *)0x0);
    }
label_05c18b50:
    return iVar1 == 0;
  }
  (__this->fields).__1__state = -1;
  if ((__this_00 != (Characters_BaseShifter_o *)0x0) &&
     (pUVar2 = (__this_00->fields).Cache, pUVar2 != (Utility_BaseComponentCache_o *)0x0)) {
    __this_01 = (pUVar2->fields).PhotonView;
    parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
    uStack_38 = CONCAT44((__this->fields).delay,(float)uStack_38);
    pIVar3 = il2cpp_vm_Object_Box(g_data_07556740,(void *)((long)&uStack_38 + 4));
    if (parameters != (System_Object_array *)0x0) {
      if (pIVar3 != (Il2CppObject *)0x0) {
        pIVar4 = il2cpp_vm_Object_IsInst(pIVar3,(((parameters->obj).klass)->_1).element_class);
        if (pIVar4 == (Il2CppObject *)0x0) {
          pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
        }
      }
      if ((int)parameters->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      parameters->m_Items[0] = pIVar3;
      Il2CppCodeGenWriteBarrier(parameters->m_Items);
      if (__this_01 != (Photon_Pun_PhotonView_o *)0x0) {
        Photon_Pun_PhotonView__RPC(__this_01,"StartDeathVisualsRPC",0,parameters,(MethodInfo *)0x0);
        uStack_38 = CONCAT44(uStack_38._4_4_,(__this->fields).delay);
        __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
        UnityEngine_WaitForSeconds___ctor(__this_02,(float)uStack_38 + 6.0 + 1.25,(MethodInfo *)0x0);
        (__this->fields).__2__current = (Il2CppObject *)__this_02;
        Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
        (__this->fields).__1__state = 1;
        goto label_05c18b50;
      }
    }
  }
label_05c18b64:
  ThrowNullReferenceException();
}


// Characters.BaseShifter.<WaitForDeathVisuals>d__47$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Characters_BaseShifter__WaitForDeathVisuals_d__47__System_Collections_Generic_IEnumerator_System_Object__get_Current (Characters_BaseShifter__WaitForDeathVisuals_d__47_o* __this, const MethodInfo* method);
// 0x5c18b80

Il2CppObject *
Characters_BaseShifter__WaitForDeathVisuals_d__47__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Characters_BaseShifter__WaitForDeathVisuals_d__47_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Characters.BaseShifter.<WaitForDeathVisuals>d__47$$System.Collections.IEnumerator.Reset
// il2cpp: void Characters_BaseShifter__WaitForDeathVisuals_d__47__System_Collections_IEnumerator_Reset (Characters_BaseShifter__WaitForDeathVisuals_d__47_o* __this, const MethodInfo* method);
// 0x5c18b90

void Characters_BaseShifter__WaitForDeathVisuals_d__47__System_Collections_IEnumerator_Reset
               (Characters_BaseShifter__WaitForDeathVisuals_d__47_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&
                  MethodInfo_Characters_BaseShifter_WaitForDeathVisuals_d__47_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Characters.BaseShifter.<WaitForDeathVisuals>d__47$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Characters_BaseShifter__WaitForDeathVisuals_d__47__System_Collections_IEnumerator_get_Current (Characters_BaseShifter__WaitForDeathVisuals_d__47_o* __this, const MethodInfo* method);
// 0x5c18bd0

Il2CppObject *
Characters_BaseShifter__WaitForDeathVisuals_d__47__System_Collections_IEnumerator_get_Current
          (Characters_BaseShifter__WaitForDeathVisuals_d__47_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Characters.BaseShifter$$get_DefaultMaxHealth
// il2cpp: int32_t Characters_BaseShifter__get_DefaultMaxHealth (Characters_BaseShifter_o* __this, const MethodInfo* method);
// 0x5c15e40

int32_t Characters_BaseShifter__get_DefaultMaxHealth(Characters_BaseShifter_o *__this,MethodInfo *method)

{
  return 1000;
}


// Characters.BaseShifter$$get_DefaultRunSpeed
// il2cpp: float Characters_BaseShifter__get_DefaultRunSpeed (Characters_BaseShifter_o* __this, const MethodInfo* method);
// 0x5c15e50

float Characters_BaseShifter__get_DefaultRunSpeed(Characters_BaseShifter_o *__this,MethodInfo *method)

{
  return 100.0;
}


// Characters.BaseShifter$$get_DefaultWalkSpeed
// il2cpp: float Characters_BaseShifter__get_DefaultWalkSpeed (Characters_BaseShifter_o* __this, const MethodInfo* method);
// 0x5c15e60

float Characters_BaseShifter__get_DefaultWalkSpeed(Characters_BaseShifter_o *__this,MethodInfo *method)

{
  return 20.0;
}


// Characters.BaseShifter$$get_DefaultRotateSpeed
// il2cpp: float Characters_BaseShifter__get_DefaultRotateSpeed (Characters_BaseShifter_o* __this, const MethodInfo* method);
// 0x5c15e70

float Characters_BaseShifter__get_DefaultRotateSpeed(Characters_BaseShifter_o *__this,MethodInfo *method)

{
  return 10.0;
}


// Characters.BaseShifter$$get_DefaultJumpForce
// il2cpp: float Characters_BaseShifter__get_DefaultJumpForce (Characters_BaseShifter_o* __this, const MethodInfo* method);
// 0x5c15e80

float Characters_BaseShifter__get_DefaultJumpForce(Characters_BaseShifter_o *__this,MethodInfo *method)

{
  return 200.0;
}


// Characters.BaseShifter$$get_SizeMultiplier
// il2cpp: float Characters_BaseShifter__get_SizeMultiplier (Characters_BaseShifter_o* __this, const MethodInfo* method);
// 0x5c15e90

float Characters_BaseShifter__get_SizeMultiplier(Characters_BaseShifter_o *__this,MethodInfo *method)

{
  return 3.0;
}


// Characters.BaseShifter$$get_DefaultCrippleTime
// il2cpp: float Characters_BaseShifter__get_DefaultCrippleTime (Characters_BaseShifter_o* __this, const MethodInfo* method);
// 0x5c15ea0

float Characters_BaseShifter__get_DefaultCrippleTime(Characters_BaseShifter_o *__this,MethodInfo *method)

{
  return 3.5;
}


// Characters.BaseShifter$$get_LaunchForce
// il2cpp: float Characters_BaseShifter__get_LaunchForce (Characters_BaseShifter_o* __this, const MethodInfo* method);
// 0x5c15eb0

float Characters_BaseShifter__get_LaunchForce(Characters_BaseShifter_o *__this,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = (*(__this->klass->vtable)._128_get_PushForce.methodPtr)
                    (__this,(__this->klass->vtable)._128_get_PushForce.method);
  return fVar1;
}


// Characters.BaseShifter$$get_LaunchTime
// il2cpp: float Characters_BaseShifter__get_LaunchTime (Characters_BaseShifter_o* __this, const MethodInfo* method);
// 0x5c15ed0

float Characters_BaseShifter__get_LaunchTime(Characters_BaseShifter_o *__this,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = (*(__this->klass->vtable)._129_get_PushTime.methodPtr)
                    (__this,(__this->klass->vtable)._129_get_PushTime.method);
  return fVar1;
}


// Characters.BaseShifter$$get_DisableCooldown
// il2cpp: float Characters_BaseShifter__get_DisableCooldown (Characters_BaseShifter_o* __this, const MethodInfo* method);
// 0x5c15ef0

float Characters_BaseShifter__get_DisableCooldown(Characters_BaseShifter_o *__this,MethodInfo *method)

{
  return 5.0;
}


// Characters.BaseShifter$$get_SpecialIcon
// il2cpp: System_String_o* Characters_BaseShifter__get_SpecialIcon (Characters_BaseShifter_o* __this, const MethodInfo* method);
// 0x5c15f00

System_String_o * Characters_BaseShifter__get_SpecialIcon(Characters_BaseShifter_o *__this,MethodInfo *method)

{
  return (__this->fields)._SpecialIcon_k__BackingField;
}


// Characters.BaseShifter$$set_SpecialIcon
// il2cpp: void Characters_BaseShifter__set_SpecialIcon (Characters_BaseShifter_o* __this, System_String_o* value, const MethodInfo* method);
// 0x5c15f10

void Characters_BaseShifter__set_SpecialIcon
               (Characters_BaseShifter_o *__this,System_String_o *value,MethodInfo *method)

{
  (__this->fields)._SpecialIcon_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._SpecialIcon_k__BackingField);
  return;
}


// Characters.BaseShifter$$get_LiveTimeRatio
// il2cpp: float Characters_BaseShifter__get_LiveTimeRatio (Characters_BaseShifter_o* __this, const MethodInfo* method);
// 0x5c15f30

float Characters_BaseShifter__get_LiveTimeRatio(Characters_BaseShifter_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  if (0.0 < (__this->fields)._liveTime) {
    fVar2 = (__this->fields)._liveTimeEnd;
    fVar1 = UnityEngine_Time__get_time((MethodInfo *)0x0);
    fVar1 = (fVar2 - fVar1) / (__this->fields)._liveTime;
    fVar2 = 1.0;
    if (fVar1 <= 1.0) {
      fVar2 = fVar1;
    }
    return (float)(-(uint)(0.0 <= fVar1) & (uint)fVar2);
  }
  return -1.0;
}


// Characters.BaseShifter$$Start
// il2cpp: void Characters_BaseShifter__Start (Characters_BaseShifter_o* __this, const MethodInfo* method);
// 0x5c15fa0

void Characters_BaseShifter__Start(Characters_BaseShifter_o *__this,MethodInfo *method)

{
  float scale;
  GameManagers_InGameManager_o *__this_00;
  Characters_BaseTitanComponentCache_o *pCVar1;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Quaternion_StaticFields *pUVar2;
  Utility_BaseComponentCache_o *pUVar3;
  Photon_Pun_PhotonView_o *pPVar4;
  Characters_BaseTitanAnimations_o *pCVar5;
  bool bVar6;
  System_Object_array *settings;
  Il2CppObject *pIVar7;
  Il2CppObject *pIVar8;
  System_String_o *pSVar9;
  UnityEngine_GameObject_o *__this_02;
  Characters_ShifterGrowthEffect_o *__this_03;
  MethodInfo *method_00;
  MethodInfo *method_01;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  UnityEngine_Quaternion_o rotation;
  UnityEngine_Vector3_o UVar10;
  int32_t local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38 [16];
  
  if (Il2CppMethodInitialized_07547707 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectSpawner);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_ShifterGrowthEffect);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ShifterSounds);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547707 = '\x01';
  }
  __this_00 = (__this->fields)._inGameManager;
  if (__this_00 == (GameManagers_InGameManager_o *)0x0) goto label_05c162eb;
  GameManagers_InGameManager__RegisterCharacter
            (__this_00,(Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0);
  Characters_BaseTitan__Start((Characters_BaseTitan_o *)__this,(MethodInfo *)0x0);
  bVar6 = (*(__this->klass->vtable)._74_IsMine.methodPtr)(__this,(__this->klass->vtable)._74_IsMine.method);
  if (bVar6) {
    if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
    }
    pCVar1 = (__this->fields).BaseTitanCache;
    if ((pCVar1 == (Characters_BaseTitanComponentCache_o *)0x0) ||
       (__this_01 = (pCVar1->fields).Neck, __this_01 == (UnityEngine_Transform_o *)0x0)) goto label_05c162eb;
    pSVar9 = TypeInfo_Effects_EffectPrefabs->static_fields->ShifterThunder;
    UVar10 = UnityEngine_Transform__get_position(__this_01,(MethodInfo *)0x0);
    local_38._8_4_ = extraout_XMM0_Dc;
    local_38._0_8_ = UVar10.fields._0_8_;
    local_38._12_4_ = extraout_XMM0_Dd;
    if (Il2CppMethodInitialized_0753e72b == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
      Il2CppMethodInitialized_0753e72b = '\x01';
    }
    pUVar2 = TypeInfo_UnityEngine_Quaternion->static_fields;
    local_48._0_4_ = (pUVar2->identityQuaternion).fields.x;
    local_48._4_4_ = (pUVar2->identityQuaternion).fields.y;
    uStack_40 = 0;
    local_58._0_4_ = (pUVar2->identityQuaternion).fields.z;
    local_58._4_4_ = (pUVar2->identityQuaternion).fields.w;
    uStack_50 = 0;
    scale = (__this->fields).Size;
    settings = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
    pUVar3 = (__this->fields).Cache;
    if ((pUVar3 == (Utility_BaseComponentCache_o *)0x0) ||
       (pPVar4 = (pUVar3->fields).PhotonView, pPVar4 == (Photon_Pun_PhotonView_o *)0x0)) goto label_05c162eb;
    local_5c = (pPVar4->fields).viewIdField;
    pIVar7 = il2cpp_vm_Object_Box(g_data_07556710,&local_5c);
    if (settings == (System_Object_array *)0x0) goto label_05c162eb;
    if (pIVar7 != (Il2CppObject *)0x0) {
      pIVar8 = il2cpp_vm_Object_IsInst(pIVar7,(((settings->obj).klass)->_1).element_class);
      if (pIVar8 == (Il2CppObject *)0x0) {
        pIVar7 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar7,(MethodInfo *)0x0);
      }
    }
    if ((int)settings->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    settings->m_Items[0] = pIVar7;
    Il2CppCodeGenWriteBarrier(settings->m_Items);
    if ((TypeInfo_Effects_EffectSpawner->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectSpawner);
    }
    rotation.fields.z = (float)(undefined4)local_58;
    rotation.fields.w = (float)local_58._4_4_;
    rotation.fields.x = (float)(undefined4)local_48;
    rotation.fields.y = (float)local_48._4_4_;
    UVar10.fields.x = (float)local_38._0_4_;
    UVar10.fields.y = (float)local_38._4_4_;
    Effects_EffectSpawner__Spawn(pSVar9,UVar10,rotation,scale,true,settings,(MethodInfo *)0x0);
    if ((TypeInfo_Characters_ShifterSounds->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_ShifterSounds);
    }
    method_01 = (MethodInfo *)TypeInfo_Characters_ShifterSounds->static_fields->Thunder;
    Characters_BaseCharacter__PlaySound
              ((Characters_BaseCharacter_o *)__this,(System_String_o *)method_01,(MethodInfo *)0x0);
    Characters_BaseShifter__LoadSkin(__this,method_01);
    (*(__this->klass->vtable)._107_CheckGround.methodPtr)
              (__this,(__this->klass->vtable)._107_CheckGround.method);
    if ((__this->fields).Grounded == false) {
      pCVar5 = (__this->fields).BaseTitanAnimations;
      if (pCVar5 == (Characters_BaseTitanAnimations_o *)0x0) goto label_05c162eb;
      pSVar9 = (*(pCVar5->klass->vtable)._8_get_Jump.methodPtr)
                         (pCVar5,(pCVar5->klass->vtable)._8_get_Jump.method);
      bVar6 = System_String__op_Inequality(pSVar9,"",(MethodInfo *)0x0);
      if (bVar6) {
        pCVar5 = (__this->fields).BaseTitanAnimations;
        if (pCVar5 == (Characters_BaseTitanAnimations_o *)0x0) goto label_05c162eb;
        pSVar9 = (*(pCVar5->klass->vtable)._8_get_Jump.methodPtr)
                           (pCVar5,(pCVar5->klass->vtable)._8_get_Jump.method);
        Characters_BaseTitan__StateActionWithTime
                  ((Characters_BaseTitan_o *)__this,6,pSVar9,0.2,0.1,true,0.0,(MethodInfo *)0x0);
      }
    }
  }
  __this_02 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_02 != (UnityEngine_GameObject_o *)0x0) {
    __this_03 = UnityEngine_GameObject__AddComponent_object_
                          (__this_02,
                           (MethodInfo_353B6A0 *)
                           MethodInfo_UnityEngine_GameObject_AddComponent_ShifterGrowthEffect);
    if (__this_03 != (Characters_ShifterGrowthEffect_o *)0x0) {
      Characters_ShifterGrowthEffect__Play(__this_03,__this,method_00);
      return;
    }
  }
label_05c162eb:
  ThrowNullReferenceException();
}


// Characters.BaseShifter$$Kick
// il2cpp: void Characters_BaseShifter__Kick (Characters_BaseShifter_o* __this, const MethodInfo* method);
// 0x5c16a80

void Characters_BaseShifter__Kick(Characters_BaseShifter_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07547708 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"AttackKick");
    Il2CppMethodInitialized_07547708 = '\x01';
  }
  (*(__this->klass->vtable)._150_Attack.methodPtr)
            (__this,"AttackKick",(__this->klass->vtable)._150_Attack.method);
  return;
}


// Characters.BaseShifter$$get_MeleeHitType
// il2cpp: System_String_o* Characters_BaseShifter__get_MeleeHitType (Characters_BaseShifter_o* __this, const MethodInfo* method);
// 0x5c16ad0

System_String_o *
Characters_BaseShifter__get_MeleeHitType(Characters_BaseShifter_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07547709 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Shifter");
    Il2CppMethodInitialized_07547709 = '\x01';
  }
  return "Shifter";
}


// Characters.BaseShifter$$GetFinisherReaction
// il2cpp: System_String_o* Characters_BaseShifter__GetFinisherReaction (Characters_BaseShifter_o* __this, bool kick, bool smallVictim, bool headHit, const MethodInfo* method);
// 0x5c16b00

System_String_o *
Characters_BaseShifter__GetFinisherReaction
          (Characters_BaseShifter_o *__this,bool kick,bool smallVictim,bool headHit,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_0754770a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Finisher");
    il2cpp_codegen_initialize_runtime_metadata(&"Knockback");
    il2cpp_codegen_initialize_runtime_metadata(&"Graze");
    Il2CppMethodInitialized_0754770a = '\x01';
  }
  pSVar2 = "Knockback";
  if (!smallVictim) {
    pSVar2 = "Graze";
  }
  pSVar1 = "Knockback";
  if (headHit) {
    pSVar1 = "Finisher";
  }
  if (kick) {
    pSVar1 = pSVar2;
  }
  return pSVar1;
}


// Characters.BaseShifter$$MarkTransformingRPC
// il2cpp: void Characters_BaseShifter__MarkTransformingRPC (Characters_BaseShifter_o* __this, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x5c16b80

void Characters_BaseShifter__MarkTransformingRPC
               (Characters_BaseShifter_o *__this,Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  Photon_Pun_PhotonView_o *pPVar2;
  
  pUVar1 = (__this->fields).Cache;
  if ((pUVar1 == (Utility_BaseComponentCache_o *)0x0) ||
     (pPVar2 = (pUVar1->fields).PhotonView, pPVar2 == (Photon_Pun_PhotonView_o *)0x0)) {
    ThrowNullReferenceException();
  }
  if (info.fields.Sender == (pPVar2->fields)._Owner_k__BackingField) {
    (__this->fields).TransformingToHuman = true;
    return;
  }
  return;
}


// Characters.BaseShifter$$Init
// il2cpp: void Characters_BaseShifter__Init (Characters_BaseShifter_o* __this, bool ai, System_String_o* team, SimpleJSONFixed_JSONNode_o* data, float liveTime, const MethodInfo* method);
// 0x5c16bc0

void Characters_BaseShifter__Init
               (Characters_BaseShifter_o *__this,bool ai,System_String_o *team,
               SimpleJSONFixed_JSONNode_o *data,float liveTime,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  Characters_BaseShifter_c *pCVar3;
  UnityEngine_GameObject_o *pUVar4;
  Il2CppObject *pIVar5;
  SimpleJSONFixed_JSONNode_o *pSVar6;
  System_String_o *value;
  Characters_BaseShifter__WaitAndBecomeHuman_d__45_o *__this_00;
  MethodInfo **ppMVar7;
  float fVar8;
  
  if (Il2CppMethodInitialized_0754770b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_AnnieShifter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ErenShifter);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_AnnieShifterPlayerController);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_BaseTitanAIController);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_ErenShifterPlayerController);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_WallColossalAIController);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_WallColossalShifter);
    il2cpp_codegen_initialize_runtime_metadata(&"Name");
    Il2CppMethodInitialized_0754770b = '\x01';
  }
  if (!ai) {
    if (__this != (Characters_BaseShifter_o *)0x0) {
      pCVar3 = __this->klass;
      bVar1 = (pCVar3->_2).typeHierarchyDepth;
      bVar2 = (TypeInfo_Characters_ErenShifter->_2).typeHierarchyDepth;
      if ((bVar1 < bVar2) ||
         ((pCVar3->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)TypeInfo_Characters_ErenShifter)) {
        bVar2 = (TypeInfo_Characters_AnnieShifter->_2).typeHierarchyDepth;
        if ((bVar1 < bVar2) ||
           ((pCVar3->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)TypeInfo_Characters_AnnieShifter))
        goto label_05c16df9;
        pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (pUVar4 == (UnityEngine_GameObject_o *)0x0) goto label_05c16eb0;
        ppMVar7 = &MethodInfo_UnityEngine_GameObject_AddComponent_AnnieShifterPlayerController;
      }
      else {
        pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (pUVar4 == (UnityEngine_GameObject_o *)0x0) goto label_05c16eb0;
        ppMVar7 = &MethodInfo_UnityEngine_GameObject_AddComponent_ErenShifterPlayerController;
      }
      UnityEngine_GameObject__AddComponent_object_(pUVar4,(MethodInfo_353B6A0 *)*ppMVar7);
    }
label_05c16df9:
    if (0.0 < liveTime) {
      (__this->fields)._liveTime = liveTime;
      fVar8 = UnityEngine_Time__get_time((MethodInfo *)0x0);
      (__this->fields)._liveTimeEnd = fVar8 + liveTime;
      if (Il2CppMethodInitialized_0754770c == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseShifter_WaitAndBecomeHuman_d__45);
        Il2CppMethodInitialized_0754770c = '\x01';
      }
      __this_00 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_Characters_BaseShifter_WaitAndBecomeHuman_d__45);
      System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
      (__this_00->fields).__1__state = 0;
      (__this_00->fields).__4__this = __this;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
      (__this_00->fields).time = liveTime;
      UnityEngine_MonoBehaviour__StartCoroutine_691c390
                ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
                 (MethodInfo *)0x0);
    }
    goto label_05c16e8f;
  }
  if (__this == (Characters_BaseShifter_o *)0x0) {
label_05c16c90:
    pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar4 == (UnityEngine_GameObject_o *)0x0) goto label_05c16eb0;
    ppMVar7 = &MethodInfo_UnityEngine_GameObject_AddComponent_BaseTitanAIController;
  }
  else {
    bVar1 = (TypeInfo_Characters_WallColossalShifter->_2).typeHierarchyDepth;
    if (((__this->klass->_2).typeHierarchyDepth < bVar1) ||
       ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_Characters_WallColossalShifter)) goto label_05c16c90;
    pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar4 == (UnityEngine_GameObject_o *)0x0) goto label_05c16eb0;
    ppMVar7 = &MethodInfo_UnityEngine_GameObject_AddComponent_WallColossalAIController;
  }
  pIVar5 = UnityEngine_GameObject__AddComponent_object_(pUVar4,(MethodInfo_353B6A0 *)*ppMVar7);
  if (pIVar5 != (Il2CppObject *)0x0) {
    (*pIVar5->klass->vtable[0xb].methodPtr)(pIVar5,data,pIVar5->klass->vtable[0xb].method);
    if (data != (SimpleJSONFixed_JSONNode_o *)0x0) {
      pSVar6 = (*(data->klass->vtable)._7_get_Item.methodPtr)
                         (data,"Name",(data->klass->vtable)._7_get_Item.method);
      if (pSVar6 != (SimpleJSONFixed_JSONNode_o *)0x0) {
        value = (*(pSVar6->klass->vtable)._9_get_Value.methodPtr)
                          (pSVar6,(pSVar6->klass->vtable)._9_get_Value.method);
        Characters_BaseCharacter__set_Name((Characters_BaseCharacter_o *)__this,value,(MethodInfo *)0x0);
label_05c16e8f:
        Characters_BaseTitan__Init((Characters_BaseTitan_o *)__this,ai,team,data,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_05c16eb0:
  ThrowNullReferenceException();
}


// Characters.BaseShifter$$WaitAndBecomeHuman
// il2cpp: System_Collections_IEnumerator_o* Characters_BaseShifter__WaitAndBecomeHuman (Characters_BaseShifter_o* __this, float time, const MethodInfo* method);
// 0x5c16ec0

System_Collections_IEnumerator_o *
Characters_BaseShifter__WaitAndBecomeHuman(Characters_BaseShifter_o *__this,float time,MethodInfo *method)

{
  Characters_BaseShifter__WaitAndBecomeHuman_d__45_o *__this_00;
  
  if (Il2CppMethodInitialized_0754770c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseShifter_WaitAndBecomeHuman_d__45);
    Il2CppMethodInitialized_0754770c = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Characters_BaseShifter_WaitAndBecomeHuman_d__45);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  (__this_00->fields).time = time;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Characters.BaseShifter$$WaitAndDie
// il2cpp: System_Collections_IEnumerator_o* Characters_BaseShifter__WaitAndDie (Characters_BaseShifter_o* __this, const MethodInfo* method);
// 0x5c16f60

System_Collections_IEnumerator_o *
Characters_BaseShifter__WaitAndDie(Characters_BaseShifter_o *__this,MethodInfo *method)

{
  float fVar1;
  Characters_BaseTitanAnimations_o *pCVar2;
  System_String_o *animation;
  Characters_BaseShifter__WaitForDeathVisuals_d__47_o *__this_00;
  
  pCVar2 = (__this->fields).BaseTitanAnimations;
  if (pCVar2 == (Characters_BaseTitanAnimations_o *)0x0) {
    ThrowNullReferenceException();
  }
  animation = (*(pCVar2->klass->vtable)._12_get_Die.methodPtr)
                        (pCVar2,(pCVar2->klass->vtable)._12_get_Die.method);
  Characters_BaseTitan__StateActionWithTime
            ((Characters_BaseTitan_o *)__this,0xf,animation,0.0,0.1,true,0.0,(MethodInfo *)0x0);
  fVar1 = (__this->fields).DeathAnimationLength;
  if (Il2CppMethodInitialized_0754770d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseShifter_WaitForDeathVisuals_d__47);
    Il2CppMethodInitialized_0754770d = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Characters_BaseShifter_WaitForDeathVisuals_d__47);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  (__this_00->fields).delay = fVar1;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Characters.BaseShifter$$WaitForDeathVisuals
// il2cpp: System_Collections_IEnumerator_o* Characters_BaseShifter__WaitForDeathVisuals (Characters_BaseShifter_o* __this, float delay, const MethodInfo* method);
// 0x5c17030

System_Collections_IEnumerator_o *
Characters_BaseShifter__WaitForDeathVisuals(Characters_BaseShifter_o *__this,float delay,MethodInfo *method)

{
  Characters_BaseShifter__WaitForDeathVisuals_d__47_o *__this_00;
  
  if (Il2CppMethodInitialized_0754770d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseShifter_WaitForDeathVisuals_d__47);
    Il2CppMethodInitialized_0754770d = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Characters_BaseShifter_WaitForDeathVisuals_d__47);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  (__this_00->fields).delay = delay;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Characters.BaseShifter$$StartDeathVisualsRPC
// il2cpp: void Characters_BaseShifter__StartDeathVisualsRPC (Characters_BaseShifter_o* __this, float delay, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x5c170d0

void Characters_BaseShifter__StartDeathVisualsRPC
               (Characters_BaseShifter_o *__this,float delay,Photon_Pun_PhotonMessageInfo_o info,
               MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  Photon_Pun_PhotonView_o *pPVar2;
  Characters_AnimationHandler_o *__this_00;
  float fVar3;
  double dVar4;
  double dVar5;
  float fVar6;
  
  if (Il2CppMethodInitialized_0754770e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_0754770e = '\x01';
  }
  pUVar1 = (__this->fields).Cache;
  if ((pUVar1 != (Utility_BaseComponentCache_o *)0x0) &&
     (pPVar2 = (pUVar1->fields).PhotonView, pPVar2 != (Photon_Pun_PhotonView_o *)0x0)) {
    if ((info.fields.Sender != (pPVar2->fields)._Owner_k__BackingField) ||
       ((__this->fields)._deathVisualsStarted != false)) {
      return;
    }
    (__this->fields)._deathVisualsStarted = true;
    fVar3 = UnityEngine_Time__get_time((MethodInfo *)0x0);
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    dVar4 = Photon_Pun_PhotonNetwork__get_Time((MethodInfo *)0x0);
    dVar5 = Photon_Pun_PhotonMessageInfo__get_SentServerTime(&info,(MethodInfo *)0x0);
    fVar6 = 0.0;
    if (0.0 <= (float)(dVar4 - dVar5)) {
      fVar6 = (float)(dVar4 - dVar5);
    }
    (__this->fields)._deathVisualsTime = (fVar3 + delay) - fVar6;
    __this_00 = (__this->fields).Animation;
    if (__this_00 != (Characters_AnimationHandler_o *)0x0) {
      Characters_AnimationHandler__SetCullingType(__this_00,true,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Characters.BaseShifter$$UpdateDeathVisuals
// il2cpp: void Characters_BaseShifter__UpdateDeathVisuals (Characters_BaseShifter_o* __this, const MethodInfo* method);
// 0x5c171e0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c17355: movaps xmm0, xmmword ptr [rsp + 0x10]

void Characters_BaseShifter__UpdateDeathVisuals(Characters_BaseShifter_o *__this,MethodInfo *method)

{
  UnityEngine_SkinnedMeshRenderer_o *body;
  bool bVar1;
  Characters_BaseShifter___c__DisplayClass49_0_o *__this_00;
  MethodInfo *pMVar2;
  System_Func_Renderer__bool__o *__this_01;
  Characters_TitanDeathDissolve_o *pCVar3;
  float fVar4;
  float fVar5;
  
  if (Il2CppMethodInitialized_0754770f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_Renderer_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanDeathDissolve);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Characters_BaseShifter_c__DisplayClass49_0_UpdateDeathVisuals_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseShifter_c__DisplayClass49_0);
    Il2CppMethodInitialized_0754770f = '\x01';
  }
  if (((__this->fields)._deathVisualsStarted != false) &&
     (bVar1 = Characters_BaseTitan__get_DeathCollidersDisabled
                        ((Characters_BaseTitan_o *)__this,(MethodInfo *)0x0), !bVar1)) {
    fVar4 = UnityEngine_Time__get_time((MethodInfo *)0x0);
    fVar4 = fVar4 - (__this->fields)._deathVisualsTime;
    if (0.0 <= fVar4) {
      pCVar3 = (__this->fields).DeathDissolve;
      if (pCVar3 != (Characters_TitanDeathDissolve_o *)0x0) {
label_05c1735a:
        fVar4 = fVar4 / 6.0;
        fVar5 = 1.0;
        if (fVar4 <= 1.0) {
          fVar5 = fVar4;
        }
        Characters_TitanDeathDissolve__Update
                  (pCVar3,(float)(-(uint)(0.0 <= fVar4) & (uint)fVar5),(MethodInfo *)0x0);
        return;
      }
      __this_00 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_Characters_BaseShifter_c__DisplayClass49_0);
      System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
      pMVar2 = (MethodInfo *)0x0;
      Characters_BaseCharacter__RemoveOutline((Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0);
      pMVar2 = (MethodInfo *)Characters_BaseShifter__FindBodyRenderer(__this,pMVar2);
      if (__this_00 != (Characters_BaseShifter___c__DisplayClass49_0_o *)0x0) {
        (__this_00->fields).body = (UnityEngine_SkinnedMeshRenderer_o *)pMVar2;
        Il2CppCodeGenWriteBarrier(&(__this_00->fields).body);
        body = (__this_00->fields).body;
        fVar5 = Characters_BaseShifter__GetDeathDissolveScale(__this,pMVar2);
        __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_Renderer_bool);
        System_Func_object__bool____ctor
                  ((System_Func_object__bool__o *)__this_01,(Il2CppObject *)__this_00,
                   (intptr_t)MethodInfo_Characters_BaseShifter_c__DisplayClass49_0_UpdateDeathVisuals_b__0,
                   (MethodInfo_4F19300 *)0x0);
        pCVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_TitanDeathDissolve);
        Characters_TitanDeathDissolve___ctor
                  (pCVar3,(Characters_BaseTitan_o *)__this,body,fVar5,__this_01,(MethodInfo *)0x0);
        (__this->fields).DeathDissolve = pCVar3;
        Il2CppCodeGenWriteBarrier(&(__this->fields).DeathDissolve);
        pCVar3 = (__this->fields).DeathDissolve;
        if (pCVar3 != (Characters_TitanDeathDissolve_o *)0x0) goto label_05c1735a;
      }
      ThrowNullReferenceException();
    }
  }
  return;
}


// Characters.BaseShifter$$FindBodyRenderer
// il2cpp: UnityEngine_SkinnedMeshRenderer_o* Characters_BaseShifter__FindBodyRenderer (Characters_BaseShifter_o* __this, const MethodInfo* method);
// 0x5c173b0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c174ed: jmp 0x5c17420

UnityEngine_SkinnedMeshRenderer_o *
Characters_BaseShifter__FindBodyRenderer(Characters_BaseShifter_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *__this_00;
  bool bVar1;
  uint uVar2;
  int32_t iVar3;
  int32_t iVar4;
  System_Object_array *pSVar5;
  UnityEngine_Object_o *x;
  UnityEngine_Mesh_o *pUVar6;
  uint uVar7;
  UnityEngine_Object_o *x_00;
  
  if (Il2CppMethodInitialized_07547710 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547710 = '\x01';
  }
  pSVar5 = UnityEngine_Component__GetComponentsInChildren_object__34b11b0
                     ((UnityEngine_Component_o *)__this,
                      (MethodInfo_34B11B0 *)
                      MethodInfo_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer);
  if (pSVar5 == (System_Object_array *)0x0) {
label_05c17507:
    ThrowNullReferenceException();
  }
  uVar2 = (uint)pSVar5->max_length;
  uVar7 = 0;
  if ((int)uVar2 < 1) {
    x_00 = (UnityEngine_Object_o *)0x0;
  }
  else {
    x_00 = (UnityEngine_Object_o *)0x0;
    do {
      if (uVar2 <= uVar7) {
        ThrowIndexOutOfRangeException();
      }
      __this_00 = (UnityEngine_Object_o *)pSVar5->m_Items[(int)uVar7];
      if (__this_00 == (UnityEngine_Object_o *)0x0) goto label_05c17507;
      bVar1 = UnityEngine_Renderer__get_enabled((UnityEngine_Renderer_o *)__this_00,(MethodInfo *)0x0);
      if (bVar1) {
        x = (UnityEngine_Object_o *)
            UnityEngine_SkinnedMeshRenderer__get_sharedMesh
                      ((UnityEngine_SkinnedMeshRenderer_o *)__this_00,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar1 = UnityEngine_Object__op_Equality(x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (!bVar1) {
            pUVar6 = UnityEngine_SkinnedMeshRenderer__get_sharedMesh
                               ((UnityEngine_SkinnedMeshRenderer_o *)__this_00,(MethodInfo *)0x0);
            if (((pUVar6 == (UnityEngine_Mesh_o *)0x0) ||
                (iVar3 = UnityEngine_Mesh__get_vertexCount(pUVar6,(MethodInfo *)0x0),
                x_00 == (UnityEngine_Object_o *)0x0)) ||
               (pUVar6 = UnityEngine_SkinnedMeshRenderer__get_sharedMesh
                                   ((UnityEngine_SkinnedMeshRenderer_o *)x_00,(MethodInfo *)0x0),
               pUVar6 == (UnityEngine_Mesh_o *)0x0)) goto label_05c17507;
            iVar4 = UnityEngine_Mesh__get_vertexCount(pUVar6,(MethodInfo *)0x0);
            if (iVar3 <= iVar4) goto label_05c17420;
          }
          x_00 = __this_00;
        }
      }
label_05c17420:
      uVar7 = uVar7 + 1;
      uVar2 = (uint)pSVar5->max_length;
    } while ((int)uVar7 < (int)uVar2);
  }
  return (UnityEngine_SkinnedMeshRenderer_o *)x_00;
}


// Characters.BaseShifter$$GetDeathDissolveScale
// il2cpp: float Characters_BaseShifter__GetDeathDissolveScale (Characters_BaseShifter_o* __this, const MethodInfo* method);
// 0x5c17520

float Characters_BaseShifter__GetDeathDissolveScale(Characters_BaseShifter_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  Utility_BaseComponentCache_o *pUVar2;
  Characters_BaseTitanComponentCache_o *pCVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_Transform_o *__this_00;
  float fVar5;
  UnityEngine_Vector3_o UVar6;
  UnityEngine_Vector3_o UVar7;
  float local_28;
  float fStack_24;
  
  pUVar2 = (__this->fields).Cache;
  if (((pUVar2 != (Utility_BaseComponentCache_o *)0x0) &&
      (pCVar3 = (__this->fields).BaseTitanCache, pCVar3 != (Characters_BaseTitanComponentCache_o *)0x0)) &&
     (pUVar4 = (pCVar3->fields).Hip, pUVar4 != (UnityEngine_Transform_o *)0x0)) {
    __this_00 = (pUVar2->fields).Transform;
    UVar6 = UnityEngine_Transform__get_position(pUVar4,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_Transform_o *)0x0) {
      UVar6 = UnityEngine_Transform__InverseTransformPoint(__this_00,UVar6,(MethodInfo *)0x0);
      pCVar3 = (__this->fields).BaseTitanCache;
      if ((pCVar3 != (Characters_BaseTitanComponentCache_o *)0x0) &&
         (pUVar4 = (pCVar3->fields).Neck, pUVar4 != (UnityEngine_Transform_o *)0x0)) {
        UVar7 = UnityEngine_Transform__get_position(pUVar4,(MethodInfo *)0x0);
        UVar7 = UnityEngine_Transform__InverseTransformPoint(__this_00,UVar7,(MethodInfo *)0x0);
        if (Il2CppMethodInitialized_0753e7b7 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
          Il2CppMethodInitialized_0753e7b7 = '\x01';
          uVar1 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
        }
        else {
          uVar1 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
        }
        if (uVar1 == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
        }
        local_28 = UVar6.fields.x;
        fStack_24 = UVar6.fields.y;
        fStack_24 = fStack_24 - UVar7.fields.y;
        fVar5 = UVar6.fields.z - UVar7.fields.z;
        local_28 = local_28 - UVar7.fields.x;
        fVar5 = fStack_24 * fStack_24 + local_28 * local_28 + fVar5 * fVar5;
        if (fVar5 < 0.0) {
          fVar5 = sqrtf(fVar5);
        }
        else {
          fVar5 = SQRT(fVar5);
        }
        return fVar5 + fVar5;
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.BaseShifter$$Awake
// il2cpp: void Characters_BaseShifter__Awake (Characters_BaseShifter_o* __this, const MethodInfo* method);
// 0x5c17670

void Characters_BaseShifter__Awake(Characters_BaseShifter_o *__this,MethodInfo *method)

{
  CustomSkins_BaseCustomSkinLoader_o *pCVar1;
  
  Characters_BaseTitan__Awake((Characters_BaseTitan_o *)__this,(MethodInfo *)0x0);
  pCVar1 = (*(__this->klass->vtable)._206_CreateCustomSkinLoader.methodPtr)
                     (__this,(__this->klass->vtable)._206_CreateCustomSkinLoader.method);
  (__this->fields)._customSkinLoader = pCVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._customSkinLoader);
  return;
}


// Characters.BaseShifter$$GetHitRPC
// il2cpp: void Characters_BaseShifter__GetHitRPC (Characters_BaseShifter_o* __this, int32_t viewId, System_String_o* name, int32_t damage, System_String_o* type, System_String_o* collider, const MethodInfo* method);
// 0x5c176b0
// asm: 10 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c17bd3: jmp 0x5c17789
// asm:   0x5c17c44: mov qword ptr [rsp], 0
// asm:   0x5c17c4c: mov rdi, rbp
// asm:   0x5c17c4f: mov esi, r13d
// asm:   0x5c17c52: mov rdx, r12
// asm:   0x5c17c55: mov ecx, r15d
// asm:   0x5c17c58: mov r8, rbx
// asm:   0x5c17c5b: mov r9, r14
// asm:   0x5c17c5e: call 0x5c27410  ; Characters_BaseTitan__GetMeleeHit()
// asm:   0x5c17c63: jmp 0x5c17789

void Characters_BaseShifter__GetHitRPC
               (Characters_BaseShifter_o *__this,int32_t viewId,System_String_o *name,int32_t damage,
               System_String_o *type,System_String_o *collider,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  Settings_InGameSet_o *pSVar3;
  Settings_InGameTitanSettings_o *pSVar4;
  Settings_BoolSetting_o *pSVar5;
  Settings_IntSetting_o *pSVar6;
  Utility_BaseComponentCache_o *pUVar7;
  UnityEngine_Transform_o *pUVar8;
  Characters_BaseTitanComponentCache_o *pCVar9;
  UnityEngine_Object_o *pUVar10;
  bool bVar11;
  Characters_BaseCharacter_o *x;
  System_String_o *pSVar12;
  UnityEngine_Vector3_StaticFields *pUVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Db;
  float extraout_XMM0_Dc;
  float fVar17;
  float extraout_XMM0_Dd;
  float fVar18;
  undefined1 auVar19 [16];
  UnityEngine_Vector3_o UVar20;
  UnityEngine_Vector3_o UVar21;
  float local_68;
  undefined1 local_50 [12];
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  
  if (Il2CppMethodInitialized_07547711 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    il2cpp_codegen_initialize_runtime_metadata(&"Rock");
    il2cpp_codegen_initialize_runtime_metadata(&"CannonBall");
    Il2CppMethodInitialized_07547711 = '\x01';
  }
  if ((__this->fields).Dead == false) {
    bVar11 = System_String__op_Equality(type,"CannonBall",(MethodInfo *)0x0);
    if ((!bVar11) &&
       (bVar11 = System_String__op_Equality(type,"Rock",(MethodInfo *)0x0), !bVar11)) {
      pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
      if ((pSVar3 == (Settings_InGameSet_o *)0x0) ||
         ((pSVar4 = (pSVar3->fields).Titan, pSVar4 == (Settings_InGameTitanSettings_o *)0x0 ||
          (pSVar5 = (pSVar4->fields).TitanArmorEnabled, pSVar5 == (Settings_BoolSetting_o *)0x0)))) {
label_05c17c68:
        ThrowNullReferenceException();
      }
      if ((pSVar5->fields)._value != false) {
        pSVar6 = (pSVar4->fields).TitanArmor;
        if (pSVar6 == (Settings_IntSetting_o *)0x0) goto label_05c17c68;
        if (damage < (pSVar6->fields)._value) {
          damage = 0;
        }
      }
      bVar11 = Characters_BaseTitan__IsMeleeHitType(type,(MethodInfo *)0x0);
      if (bVar11) {
        fVar14 = Characters_BaseTitan__GetMeleeStunTime
                           ((Characters_BaseTitan_o *)__this,type,(MethodInfo *)0x0);
        bVar11 = Characters_BaseTitan__IsComboStunType(type,(MethodInfo *)0x0);
        (*(__this->klass->vtable)._155_Stun.methodPtr)
                  (__this,fVar14,bVar11,(__this->klass->vtable)._155_Stun.method);
        if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
        }
        x = Utility_Util__FindCharacterByViewId(viewId,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar11 = UnityEngine_Object__op_Inequality
                           ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((!bVar11) || ((__this->fields).EnableAI == false)) {
label_05c17c44:
          Characters_BaseTitan__GetMeleeHit
                    ((Characters_BaseTitan_o *)__this,viewId,name,damage,type,collider,(MethodInfo *)0x0);
          return;
        }
        if ((x != (Characters_BaseCharacter_o *)0x0) &&
           ((pUVar7 = (x->fields).Cache, pUVar7 != (Utility_BaseComponentCache_o *)0x0 &&
            (pUVar8 = (pUVar7->fields).Transform, pUVar8 != (UnityEngine_Transform_o *)0x0)))) {
          UVar20 = UnityEngine_Transform__get_position(pUVar8,(MethodInfo *)0x0);
          pUVar7 = (__this->fields).Cache;
          if ((pUVar7 != (Utility_BaseComponentCache_o *)0x0) &&
             (pUVar8 = (pUVar7->fields).Transform, pUVar8 != (UnityEngine_Transform_o *)0x0)) {
            UVar21 = UnityEngine_Transform__get_position(pUVar8,(MethodInfo *)0x0);
            pUVar7 = (__this->fields).Cache;
            if (pUVar7 != (Utility_BaseComponentCache_o *)0x0) {
              pUVar8 = (pUVar7->fields).Transform;
              local_68 = UVar20.fields.x;
              fVar14 = UVar21.fields.x;
              fVar15 = UVar21.fields.y;
              fVar17 = extraout_XMM0_Dc;
              fVar18 = extraout_XMM0_Dd;
              if (g_data_0753e72d == '\0') {
                fStack_40 = extraout_XMM0_Dc;
                unique0x100001ab = UVar21.fields._0_8_;
                fStack_3c = extraout_XMM0_Dd;
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                g_data_0753e72d = '\x01';
                fVar14 = (float)local_50._8_4_;
                fVar15 = fStack_44;
                fVar17 = fStack_40;
                fVar18 = fStack_3c;
              }
              local_50._0_4_ = 0.0;
              local_50._4_4_ = 0.0;
              if (g_data_0753e729 == '\0') {
                fStack_44 = fVar15;
                local_50._8_4_ = fVar14;
                fStack_40 = fVar17;
                fStack_3c = fVar18;
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
                g_data_0753e729 = '\x01';
                fVar14 = (float)local_50._8_4_;
              }
              local_68 = local_68 - fVar14;
              fVar14 = UVar20.fields.z - UVar21.fields.z;
              if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
              }
              uVar16 = 0;
              fVar15 = fVar14 * fVar14 + local_68 * local_68 + 0.0;
              if (fVar15 < 0.0) {
                fVar15 = sqrtf(fVar15);
                uVar16 = extraout_XMM0_Db;
              }
              else {
                fVar15 = SQRT(fVar15);
              }
              if (fVar15 <= 1e-05) {
                pUVar13 = TypeInfo_UnityEngine_Vector3->static_fields;
                fVar14 = (pUVar13->zeroVector).fields.z;
              }
              else {
                fVar14 = fVar14 / fVar15;
                auVar19._4_4_ = fVar15;
                auVar19._0_4_ = fVar15;
                auVar19._8_4_ = uVar16;
                auVar19._12_4_ = uVar16;
                auVar19 = divps(ZEXT416((uint)local_68),auVar19);
                local_50._0_4_ = auVar19._0_4_;
                local_50._4_4_ = auVar19._4_4_;
                pUVar13 = (UnityEngine_Vector3_StaticFields *)local_50;
              }
              if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
                uVar1 = (pUVar13->zeroVector).fields.x;
                uVar2 = (pUVar13->zeroVector).fields.y;
                UVar20.fields.y = (float)uVar2;
                UVar20.fields.x = (float)uVar1;
                UVar20.fields.z = fVar14;
                UnityEngine_Transform__set_forward(pUVar8,UVar20,(MethodInfo *)0x0);
                goto label_05c17c44;
              }
            }
          }
        }
        goto label_05c17c68;
      }
      pCVar9 = (__this->fields).BaseTitanCache;
      if (pCVar9 == (Characters_BaseTitanComponentCache_o *)0x0) goto label_05c17c68;
      pUVar10 = (UnityEngine_Object_o *)(pCVar9->fields).EyesHurtbox;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar11 = UnityEngine_Object__op_Inequality(pUVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar11) {
        pCVar9 = (__this->fields).BaseTitanCache;
        if ((pCVar9 == (Characters_BaseTitanComponentCache_o *)0x0) ||
           (pUVar10 = (UnityEngine_Object_o *)(pCVar9->fields).EyesHurtbox,
           pUVar10 == (UnityEngine_Object_o *)0x0)) goto label_05c17c68;
        pSVar12 = UnityEngine_Object__get_name(pUVar10,(MethodInfo *)0x0);
        bVar11 = System_String__op_Equality(collider,pSVar12,(MethodInfo *)0x0);
        if (bVar11) {
          (*(__this->klass->vtable)._168_Blind.methodPtr)(__this,(__this->klass->vtable)._168_Blind.method);
          return;
        }
      }
      pCVar9 = (__this->fields).BaseTitanCache;
      if (pCVar9 == (Characters_BaseTitanComponentCache_o *)0x0) goto label_05c17c68;
      pUVar10 = (UnityEngine_Object_o *)(pCVar9->fields).LegLHurtbox;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar11 = UnityEngine_Object__op_Inequality(pUVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar11) {
        pCVar9 = (__this->fields).BaseTitanCache;
        if ((pCVar9 == (Characters_BaseTitanComponentCache_o *)0x0) ||
           (pUVar10 = (UnityEngine_Object_o *)(pCVar9->fields).LegLHurtbox,
           pUVar10 == (UnityEngine_Object_o *)0x0)) goto label_05c17c68;
        pSVar12 = UnityEngine_Object__get_name(pUVar10,(MethodInfo *)0x0);
        bVar11 = System_String__op_Equality(collider,pSVar12,(MethodInfo *)0x0);
        if (bVar11) {
label_05c17b72:
          (*(__this->klass->vtable)._169_Cripple.methodPtr)
                    (__this,0.0,(__this->klass->vtable)._169_Cripple.method);
          return;
        }
        pCVar9 = (__this->fields).BaseTitanCache;
        if ((pCVar9 == (Characters_BaseTitanComponentCache_o *)0x0) ||
           (pUVar10 = (UnityEngine_Object_o *)(pCVar9->fields).LegRHurtbox,
           pUVar10 == (UnityEngine_Object_o *)0x0)) goto label_05c17c68;
        pSVar12 = UnityEngine_Object__get_name(pUVar10,(MethodInfo *)0x0);
        bVar11 = System_String__op_Equality(collider,pSVar12,(MethodInfo *)0x0);
        if (bVar11) goto label_05c17b72;
      }
      pCVar9 = (__this->fields).BaseTitanCache;
      if ((pCVar9 == (Characters_BaseTitanComponentCache_o *)0x0) ||
         (pUVar10 = (UnityEngine_Object_o *)(pCVar9->fields).NapeHurtbox,
         pUVar10 == (UnityEngine_Object_o *)0x0)) goto label_05c17c68;
      pSVar12 = UnityEngine_Object__get_name(pUVar10,(MethodInfo *)0x0);
      bVar11 = System_String__op_Equality(collider,pSVar12,(MethodInfo *)0x0);
      if (!bVar11) {
        return;
      }
    }
    Characters_BaseCharacter__GetHitRPC
              ((Characters_BaseCharacter_o *)__this,viewId,name,damage,type,collider,(MethodInfo *)0x0);
  }
  return;
}


// Characters.BaseShifter$$OnHit
// il2cpp: void Characters_BaseShifter__OnHit (Characters_BaseShifter_o* __this, Characters_BaseHitbox_o* hitbox, Il2CppObject* victim, UnityEngine_Collider_o* collider, System_String_o* type, bool firstHit, const MethodInfo* method);
// 0x5c17c70
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c17e71: jmp 0x5c17f23

void Characters_BaseShifter__OnHit
               (Characters_BaseShifter_o *__this,Characters_BaseHitbox_o *hitbox,Il2CppObject *victim,
               UnityEngine_Collider_o *collider,System_String_o *type,bool firstHit,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  Il2CppClass *pIVar3;
  Il2CppClass **ppIVar4;
  UI_BaseMenu_o *obj;
  bool bVar5;
  Il2CppObject *pIVar6;
  UI_InGameMenu_o *__this_00;
  System_String_o *pSVar7;
  UnityEngine_Transform_o *__this_01;
  uint damage;
  UnityEngine_Vector3_o position;
  
  if (Il2CppMethodInitialized_07547712 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseCharacter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseTitan);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCollisionHandler);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Shifter");
    Il2CppMethodInitialized_07547712 = '\x01';
  }
  if ((__this->fields).CustomDamageEnabled == false) {
    damage = 100;
  }
  else {
    damage = (__this->fields).CustomDamage;
  }
  if (victim == (Il2CppObject *)0x0) {
    if (firstHit) goto label_05c17f23;
  }
  else {
    pIVar3 = victim->klass;
    bVar1 = (pIVar3->_2).typeHierarchyDepth;
    bVar2 = (TypeInfo_CustomLogic_CustomLogicCollisionHandler->_2).typeHierarchyDepth;
    if ((bVar2 <= bVar1) &&
       ((pIVar3->_2).typeHierarchy[(ulong)bVar2 - 1] ==
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCollisionHandler)) {
      if (hitbox != (Characters_BaseHitbox_o *)0x0) {
        pSVar7 = (__this->fields).RichTextName;
        __this_01 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)hitbox,(MethodInfo *)0x0);
        if (__this_01 != (UnityEngine_Transform_o *)0x0) {
          position = UnityEngine_Transform__get_position(__this_01,(MethodInfo *)0x0);
          bVar1 = (TypeInfo_CustomLogic_CustomLogicCollisionHandler->_2).typeHierarchyDepth;
          if ((bVar1 <= (victim->klass->_2).typeHierarchyDepth) &&
             ((victim->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
              (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCollisionHandler)) {
            CustomLogic_CustomLogicCollisionHandler__GetHit
                      ((CustomLogic_CustomLogicCollisionHandler_o *)victim,
                       (Characters_BaseCharacter_o *)__this,pSVar7,damage,type,position,(MethodInfo *)0x0);
            return;
          }
          goto label_05c17f1b;
        }
      }
label_05c17f23:
      ThrowNullReferenceException();
    }
    bVar2 = (TypeInfo_Characters_BaseCharacter->_2).typeHierarchyDepth;
    if ((bVar1 < bVar2) ||
       (ppIVar4 = (pIVar3->_2).typeHierarchy,
       ppIVar4[(ulong)bVar2 - 1] != (Il2CppClass *)TypeInfo_Characters_BaseCharacter)) {
label_05c17f1b:
      il2cpp_codegen_raise_invalid_cast_exception(victim);
    }
    bVar2 = (TypeInfo_Characters_BaseTitan->_2).typeHierarchyDepth;
    if ((bVar1 < bVar2) || (ppIVar4[(ulong)bVar2 - 1] != (Il2CppClass *)TypeInfo_Characters_BaseTitan)) {
      if ((firstHit) && (*(char *)&victim[7].monitor == '\0')) {
        bVar5 = Characters_BaseCharacter__IsMainCharacter
                          ((Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0);
        if (bVar5) {
          if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
          }
          obj = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
          pIVar6 = il2cpp_codegen_is_inst_class((Il2CppObject *)obj,(Il2CppClass *)TypeInfo_UI_InGameMenu);
          if (pIVar6 == (Il2CppObject *)0x0) goto label_05c17f23;
          __this_00 = (UI_InGameMenu_o *)
                      il2cpp_codegen_is_inst_class((Il2CppObject *)obj,(Il2CppClass *)TypeInfo_UI_InGameMenu);
          UI_InGameMenu__ShowKillScore(__this_00,damage,false,(MethodInfo *)0x0);
        }
        if (collider != (UnityEngine_Collider_o *)0x0) {
          pSVar7 = UnityEngine_Object__get_name((UnityEngine_Object_o *)collider,(MethodInfo *)0x0);
          (*victim->klass->vtable[0x5f].methodPtr)
                    (victim,__this,(ulong)damage,"Shifter",pSVar7,
                     victim->klass->vtable[0x5f].method);
          return;
        }
        goto label_05c17f23;
      }
    }
    else {
      Characters_BaseTitan__OnHitTitan
                ((Characters_BaseTitan_o *)__this,hitbox,(Characters_BaseTitan_o *)victim,collider,damage,
                 firstHit,(MethodInfo *)0x0);
    }
  }
  return;
}


// Characters.BaseShifter$$Update
// il2cpp: void Characters_BaseShifter__Update (Characters_BaseShifter_o* __this, const MethodInfo* method);
// 0x5c17f30

void Characters_BaseShifter__Update(Characters_BaseShifter_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_07547713 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Roar");
    Il2CppMethodInitialized_07547713 = '\x01';
  }
  Characters_BaseTitan__Update((Characters_BaseTitan_o *)__this,(MethodInfo *)0x0);
  bVar1 = (*(__this->klass->vtable)._74_IsMine.methodPtr)(__this,(__this->klass->vtable)._74_IsMine.method);
  if (((bVar1) && ((__this->fields)._needRoar != false)) && ((__this->fields).Grounded != false)) {
    bVar1 = (*(__this->klass->vtable)._145_CanAction.methodPtr)
                      (__this,(__this->klass->vtable)._145_CanAction.method);
    if (bVar1) {
      (*(__this->klass->vtable)._80_Emote.methodPtr)
                (__this,"Roar",(__this->klass->vtable)._80_Emote.method);
      (__this->fields)._needRoar = false;
    }
  }
  return;
}


// Characters.BaseShifter$$LateUpdate
// il2cpp: void Characters_BaseShifter__LateUpdate (Characters_BaseShifter_o* __this, const MethodInfo* method);
// 0x5c15db0

void Characters_BaseShifter__LateUpdate(Characters_BaseShifter_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)0x0;
  Characters_BaseTitan__LateUpdate((Characters_BaseTitan_o *)__this,(MethodInfo *)0x0);
  Characters_BaseShifter__UpdateDeathVisuals(__this,method_00);
  return;
}


// Characters.BaseShifter$$CanEmote
// il2cpp: bool Characters_BaseShifter__CanEmote (Characters_BaseShifter_o* __this, const MethodInfo* method);
// 0x5c17fc0

bool Characters_BaseShifter__CanEmote(Characters_BaseShifter_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  if ((__this->fields)._forceEmote == false) {
    bVar1 = Characters_BaseTitan__CanEmote((Characters_BaseTitan_o *)__this,(MethodInfo *)0x0);
    return bVar1;
  }
  return true;
}


// Characters.BaseShifter$$Land
// il2cpp: void Characters_BaseShifter__Land (Characters_BaseShifter_o* __this, const MethodInfo* method);
// 0x5c17fe0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c18222: jmp 0x5c18070

void Characters_BaseShifter__Land(Characters_BaseShifter_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  uint32_t uVar3;
  Utility_BaseComponentCache_o *pUVar4;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_StaticFields *pUVar5;
  Characters_BaseTitanAnimations_o *pCVar6;
  System_String_o *pSVar7;
  float fVar8;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  UnityEngine_Quaternion_o UVar9;
  UnityEngine_Vector3_o UVar10;
  UnityEngine_Vector3_Fields UStack_78;
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 auStack_28 [24];
  
  if (Il2CppMethodInitialized_07547714 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectSpawner);
    il2cpp_codegen_initialize_runtime_metadata(&"Roar");
    Il2CppMethodInitialized_07547714 = '\x01';
  }
  if ((__this->fields)._needRoar == false) {
    pCVar6 = (__this->fields).BaseTitanAnimations;
    if (pCVar6 == (Characters_BaseTitanAnimations_o *)0x0) goto label_05c18227;
    pSVar7 = (*(pCVar6->klass->vtable)._10_get_Land.methodPtr)
                       (pCVar6,(pCVar6->klass->vtable)._10_get_Land.method);
    Characters_BaseTitan__StateAction((Characters_BaseTitan_o *)__this,9,pSVar7,0.1,true,(MethodInfo *)0x0);
    uVar3 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  else {
    (__this->fields)._forceEmote = true;
    (*(__this->klass->vtable)._80_Emote.methodPtr)
              (__this,"Roar",(__this->klass->vtable)._80_Emote.method);
    (__this->fields)._forceEmote = false;
    (__this->fields)._needRoar = false;
    uVar3 = (TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor;
  }
  if (uVar3 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
  }
  pUVar4 = (__this->fields).Cache;
  if ((pUVar4 != (Utility_BaseComponentCache_o *)0x0) &&
     (__this_00 = (pUVar4->fields).Transform, __this_00 != (UnityEngine_Transform_o *)0x0)) {
    pSVar7 = TypeInfo_Effects_EffectPrefabs->static_fields->Boom2;
    UVar10 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
    auStack_28._8_4_ = extraout_XMM0_Dc;
    auStack_28._0_8_ = UVar10.fields._0_8_;
    auStack_28._12_4_ = extraout_XMM0_Dd;
    if (Il2CppMethodInitialized_075450a5 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_075450a5 = '\x01';
    }
    pUVar5 = TypeInfo_UnityEngine_Vector3->static_fields;
    uStack_38._0_4_ = (pUVar5->downVector).fields.x;
    uStack_38._4_4_ = (pUVar5->downVector).fields.y;
    uStack_30 = 0;
    fVar1 = (pUVar5->downVector).fields.z;
    auStack_68 = ZEXT416((uint)(__this->fields)._currentGroundDistance);
    UStack_78.x = 4.712389;
    UStack_78.y = 0.0;
    UStack_78.z = 0.0;
    UVar9 = UnityEngine_Quaternion__Internal_FromEulerRad
                      ((UnityEngine_Vector3_o *)&UStack_78,(MethodInfo *)0x0);
    auStack_48._8_4_ = extraout_XMM0_Dc_00;
    auStack_48._0_8_ = UVar9.fields._0_8_;
    auStack_48._12_4_ = extraout_XMM0_Dd_00;
    auStack_58._8_4_ = in_XMM1_Dc;
    auStack_58._0_8_ = UVar9.fields._8_8_;
    auStack_58._12_4_ = in_XMM1_Dd;
    fVar2 = (__this->fields).Size;
    fVar8 = (*(__this->klass->vtable)._134_get_SizeMultiplier.methodPtr)
                      (__this,(__this->klass->vtable)._134_get_SizeMultiplier.method);
    if ((TypeInfo_Effects_EffectSpawner->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectSpawner);
    }
    UVar10.fields.z = UVar10.fields.z + fVar1 * (float)auStack_68._0_4_;
    UVar10.fields.x = (float)auStack_28._0_4_ + (float)uStack_38 * (float)auStack_68._0_4_;
    UVar10.fields.y = (float)auStack_28._4_4_ + uStack_38._4_4_ * (float)auStack_68._0_4_;
    UVar9.fields.z = (float)auStack_58._0_4_;
    UVar9.fields.w = (float)auStack_58._4_4_;
    UVar9.fields.x = (float)auStack_48._0_4_;
    UVar9.fields.y = (float)auStack_48._4_4_;
    Effects_EffectSpawner__Spawn
              (pSVar7,UVar10,UVar9,fVar2 * fVar8,true,(System_Object_array *)0x0,(MethodInfo *)0x0);
    return;
  }
label_05c18227:
  ThrowNullReferenceException();
}


// Characters.BaseShifter$$LoadSkin
// il2cpp: void Characters_BaseShifter__LoadSkin (Characters_BaseShifter_o* __this, const MethodInfo* method);
// 0x5c16310

void Characters_BaseShifter__LoadSkin(Characters_BaseShifter_o *__this,MethodInfo *method)

{
  byte bVar1;
  Settings_CustomSkinSettings_o *pSVar2;
  Settings_BaseCustomSkinSettings_ShifterCustomSkinSet__o *__this_00;
  Settings_BoolSetting_o *pSVar3;
  Utility_BaseComponentCache_o *pUVar4;
  Photon_Pun_PhotonView_o *__this_01;
  bool bVar5;
  Settings_ShifterCustomSkinSet_o *pSVar6;
  System_String_o *obj;
  System_Object_array *parameters;
  Il2CppObject *pIVar7;
  
  if (Il2CppMethodInitialized_07547715 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_ShifterCustomSkinSet_GetSelectedSet);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ShifterCustomSkinSet);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"LoadSkinRPC");
    Il2CppMethodInitialized_07547715 = '\x01';
  }
  bVar5 = (*(__this->klass->vtable)._74_IsMine.methodPtr)(__this,(__this->klass->vtable)._74_IsMine.method);
  if (!bVar5) {
    return;
  }
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
  if (((pSVar2 != (Settings_CustomSkinSettings_o *)0x0) &&
      (__this_00 = (pSVar2->fields).Shifter,
      __this_00 != (Settings_BaseCustomSkinSettings_ShifterCustomSkinSet__o *)0x0)) &&
     (pSVar3 = (__this_00->fields).SkinsEnabled, pSVar3 != (Settings_BoolSetting_o *)0x0)) {
    if ((pSVar3->fields)._value == false) {
      return;
    }
    pSVar6 = (Settings_ShifterCustomSkinSet_o *)
             Settings_SetSettingsContainer_object___GetSelectedSet
                       ((Settings_SetSettingsContainer_T__o *)__this_00,
                        (MethodInfo_40477A0 *)
                        MethodInfo_Settings_SetSettingsContainer_ShifterCustomSkinSet_GetSelectedSet);
    if (pSVar6 != (Settings_ShifterCustomSkinSet_o *)0x0) {
      bVar1 = (TypeInfo_Settings_ShifterCustomSkinSet->_2).typeHierarchyDepth;
      if (((pSVar6->klass->_2).typeHierarchyDepth < bVar1) ||
         ((pSVar6->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_Settings_ShifterCustomSkinSet)) {
        il2cpp_codegen_raise_invalid_cast_exception(pSVar6);
      }
    }
    obj = (*(__this->klass->vtable)._205_GetSkinURL.methodPtr)
                    (__this,pSVar6,(__this->klass->vtable)._205_GetSkinURL.method);
    pUVar4 = (__this->fields).Cache;
    if (pUVar4 != (Utility_BaseComponentCache_o *)0x0) {
      __this_01 = (pUVar4->fields).PhotonView;
      parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
      if (parameters != (System_Object_array *)0x0) {
        if ((obj != (System_String_o *)0x0) &&
           (pIVar7 = il2cpp_vm_Object_IsInst
                               ((Il2CppObject *)obj,(((parameters->obj).klass)->_1).element_class),
           pIVar7 == (Il2CppObject *)0x0)) {
          pIVar7 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar7,(MethodInfo *)0x0);
        }
        if ((int)parameters->max_length == 0) {
          ThrowIndexOutOfRangeException();
        }
        parameters->m_Items[0] = (Il2CppObject *)obj;
        Il2CppCodeGenWriteBarrier(parameters->m_Items);
        if (__this_01 != (Photon_Pun_PhotonView_o *)0x0) {
          Photon_Pun_PhotonView__RPC(__this_01,"LoadSkinRPC",3,parameters,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.BaseShifter$$GetSkinURL
// il2cpp: System_String_o* Characters_BaseShifter__GetSkinURL (Characters_BaseShifter_o* __this, Settings_ShifterCustomSkinSet_o* set, const MethodInfo* method);
// 0x5c18230

System_String_o *
Characters_BaseShifter__GetSkinURL
          (Characters_BaseShifter_o *__this,Settings_ShifterCustomSkinSet_o *set,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07547716 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547716 = '\x01';
  }
  return "";
}


// Characters.BaseShifter$$CreateCustomSkinLoader
// il2cpp: CustomSkins_BaseCustomSkinLoader_o* Characters_BaseShifter__CreateCustomSkinLoader (Characters_BaseShifter_o* __this, const MethodInfo* method);
// 0x5c18260

CustomSkins_BaseCustomSkinLoader_o *
Characters_BaseShifter__CreateCustomSkinLoader(Characters_BaseShifter_o *__this,MethodInfo *method)

{
  return (CustomSkins_BaseCustomSkinLoader_o *)0x0;
}


// Characters.BaseShifter$$LoadSkinRPC
// il2cpp: void Characters_BaseShifter__LoadSkinRPC (Characters_BaseShifter_o* __this, System_String_o* url, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x5c18270

void Characters_BaseShifter__LoadSkinRPC
               (Characters_BaseShifter_o *__this,System_String_o *url,Photon_Pun_PhotonMessageInfo_o info,
               MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  Photon_Pun_PhotonView_o *pPVar2;
  CustomSkins_BaseCustomSkinLoader_o *pCVar3;
  Settings_CustomSkinSettings_o *pSVar4;
  Settings_BaseCustomSkinSettings_ShifterCustomSkinSet__o *pSVar5;
  Settings_BoolSetting_o *pSVar6;
  bool bVar7;
  System_Object_array *pSVar8;
  Il2CppObject *pIVar9;
  System_Collections_IEnumerator_o *routine;
  
  if (Il2CppMethodInitialized_07547717 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_07547717 = '\x01';
  }
  pUVar1 = (__this->fields).Cache;
  if ((pUVar1 == (Utility_BaseComponentCache_o *)0x0) ||
     (pPVar2 = (pUVar1->fields).PhotonView, pPVar2 == (Photon_Pun_PhotonView_o *)0x0)) goto label_05c18435;
  if (info.fields.Sender == (pPVar2->fields)._Owner_k__BackingField) {
    pCVar3 = (__this->fields)._customSkinLoader;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar7 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pCVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar7) {
      pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
      if (((pSVar4 != (Settings_CustomSkinSettings_o *)0x0) &&
          (pSVar5 = (pSVar4->fields).Shifter,
          pSVar5 != (Settings_BaseCustomSkinSettings_ShifterCustomSkinSet__o *)0x0)) &&
         (pSVar6 = (pSVar5->fields).SkinsEnabled, pSVar6 != (Settings_BoolSetting_o *)0x0)) {
        if ((pSVar6->fields)._value == false) {
          return;
        }
        pSVar6 = (pSVar5->fields).SkinsLocal;
        if (pSVar6 != (Settings_BoolSetting_o *)0x0) {
          if ((pSVar6->fields)._value != false) {
            pUVar1 = (__this->fields).Cache;
            if ((pUVar1 == (Utility_BaseComponentCache_o *)0x0) ||
               (pPVar2 = (pUVar1->fields).PhotonView, pPVar2 == (Photon_Pun_PhotonView_o *)0x0))
            goto label_05c18435;
            if ((pPVar2->fields)._IsMine_k__BackingField == false) {
              return;
            }
          }
          pCVar3 = (__this->fields)._customSkinLoader;
          pSVar8 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
          if (pSVar8 != (System_Object_array *)0x0) {
            if ((url != (System_String_o *)0x0) &&
               (pIVar9 = il2cpp_vm_Object_IsInst
                                   ((Il2CppObject *)url,(((pSVar8->obj).klass)->_1).element_class),
               pIVar9 == (Il2CppObject *)0x0)) {
              pIVar9 = il2cpp_codegen_get_array_type_mismatch_exception();
              il2cpp_codegen_raise_exception(pIVar9,(MethodInfo *)0x0);
            }
            if ((int)pSVar8->max_length == 0) {
              ThrowIndexOutOfRangeException();
            }
            pSVar8->m_Items[0] = (Il2CppObject *)url;
            Il2CppCodeGenWriteBarrier(pSVar8->m_Items);
            if (pCVar3 != (CustomSkins_BaseCustomSkinLoader_o *)0x0) {
              routine = (*(pCVar3->klass->vtable)._7_LoadSkinsFromRPC.methodPtr)
                                  (pCVar3,pSVar8,(pCVar3->klass->vtable)._7_LoadSkinsFromRPC.method);
              UnityEngine_MonoBehaviour__StartCoroutine_691c390
                        ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
label_05c18435:
      ThrowNullReferenceException();
    }
  }
  return;
}


// Characters.BaseShifter$$.ctor
// il2cpp: void Characters_BaseShifter___ctor (Characters_BaseShifter_o* __this, const MethodInfo* method);
// 0x5c156b0

void Characters_BaseShifter___ctor(Characters_BaseShifter_o *__this,MethodInfo *method)

{
  (__this->fields)._needRoar = true;
  (__this->fields).DeathAnimationLength = 2.0;
  Characters_BaseTitan___ctor((Characters_BaseTitan_o *)__this,(MethodInfo *)0x0);
  return;
}


