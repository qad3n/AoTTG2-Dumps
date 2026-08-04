// Type: Projectiles.BaseProjectile
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Projectiles/BaseProjectile.cs
// Prior real C# source (older reference): Assets/Scripts/Projectiles/BaseProjectile.cs
// --------------------------------

// Projectiles.BaseProjectile.<WaitAndFinishDestroyCoroutine>d__21$$.ctor
// il2cpp: void Projectiles_BaseProjectile__WaitAndFinishDestroyCoroutine_d__21___ctor (Projectiles_BaseProjectile__WaitAndFinishDestroyCoroutine_d__21_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x42054c0

void Projectiles_BaseProjectile__WaitAndFinishDestroyCoroutine_d__21___ctor
               (Projectiles_BaseProjectile__WaitAndFinishDestroyCoroutine_d__21_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Projectiles.BaseProjectile.<WaitAndFinishDestroyCoroutine>d__21$$System.IDisposable.Dispose
// il2cpp: void Projectiles_BaseProjectile__WaitAndFinishDestroyCoroutine_d__21__System_IDisposable_Dispose (Projectiles_BaseProjectile__WaitAndFinishDestroyCoroutine_d__21_o* __this, const MethodInfo* method);
// 0x4205ca0

void Projectiles_BaseProjectile__WaitAndFinishDestroyCoroutine_d__21__System_IDisposable_Dispose
               (Projectiles_BaseProjectile__WaitAndFinishDestroyCoroutine_d__21_o *__this,MethodInfo *method)

{
  return;
}


// Projectiles.BaseProjectile.<WaitAndFinishDestroyCoroutine>d__21$$MoveNext
// il2cpp: bool Projectiles_BaseProjectile__WaitAndFinishDestroyCoroutine_d__21__MoveNext (Projectiles_BaseProjectile__WaitAndFinishDestroyCoroutine_d__21_o* __this, const MethodInfo* method);
// 0x4205cb0

bool_conflict
Projectiles_BaseProjectile__WaitAndFinishDestroyCoroutine_d__21__MoveNext
          (Projectiles_BaseProjectile__WaitAndFinishDestroyCoroutine_d__21_o *__this,MethodInfo *method)

{
  float seconds;
  int iVar1;
  UnityEngine_WaitForSeconds_o *__this_00;
  UnityEngine_GameObject_o *targetGo;
  bool_conflict bVar2;
  Projectiles_BaseProjectile_o *__this_01;
  
  if (g_data_057ad8e0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitForSeconds);
    g_data_057ad8e0 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    __this_01 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (__this_01 == (Projectiles_BaseProjectile_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      return (bool_conflict)(__this_01->fields).m_CancellationTokenSource;
    }
    targetGo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar2 = 0;
    Photon_Pun_PhotonNetwork__Destroy_3eec3a0(targetGo,(MethodInfo *)0x0);
  }
  else if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    seconds = (__this->fields).time;
    __this_00 = (UnityEngine_WaitForSeconds_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitForSeconds);
    UnityEngine_WaitForSeconds___ctor(__this_00,seconds,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)__this_00;
    il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,__this_00);
    (__this->fields).__1__state = 1;
    bVar2 = (bool_conflict)CONCAT71((int7)((ulong)__this >> 8),1);
  }
  else {
    bVar2 = 0;
  }
  return bVar2;
}


// Projectiles.BaseProjectile.<WaitAndFinishDestroyCoroutine>d__21$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Projectiles_BaseProjectile__WaitAndFinishDestroyCoroutine_d__21__System_Collections_Generic_IEnumerator_System_Object__get_Current (Projectiles_BaseProjectile__WaitAndFinishDestroyCoroutine_d__21_o* __this, const MethodInfo* method);
// 0x4205d90

Il2CppObject *
Projectiles_BaseProjectile__WaitAndFinishDestroyCoroutine_d__21__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Projectiles_BaseProjectile__WaitAndFinishDestroyCoroutine_d__21_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Projectiles.BaseProjectile.<WaitAndFinishDestroyCoroutine>d__21$$System.Collections.IEnumerator.Reset
// il2cpp: void Projectiles_BaseProjectile__WaitAndFinishDestroyCoroutine_d__21__System_Collections_IEnumerator_Reset (Projectiles_BaseProjectile__WaitAndFinishDestroyCoroutine_d__21_o* __this, const MethodInfo* method);
// 0x4205da0

void Projectiles_BaseProjectile__WaitAndFinishDestroyCoroutine_d__21__System_Collections_IEnumerator_Reset
               (Projectiles_BaseProjectile__WaitAndFinishDestroyCoroutine_d__21_o *__this,MethodInfo *method)

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


// Projectiles.BaseProjectile.<WaitAndFinishDestroyCoroutine>d__21$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Projectiles_BaseProjectile__WaitAndFinishDestroyCoroutine_d__21__System_Collections_IEnumerator_get_Current (Projectiles_BaseProjectile__WaitAndFinishDestroyCoroutine_d__21_o* __this, const MethodInfo* method);
// 0x4205de0

Il2CppObject *
Projectiles_BaseProjectile__WaitAndFinishDestroyCoroutine_d__21__System_Collections_IEnumerator_get_Current
          (Projectiles_BaseProjectile__WaitAndFinishDestroyCoroutine_d__21_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Projectiles.BaseProjectile$$get_TrailFadeMultiplier
// il2cpp: float Projectiles_BaseProjectile__get_TrailFadeMultiplier (Projectiles_BaseProjectile_o* __this, const MethodInfo* method);
// 0x4204a70

float Projectiles_BaseProjectile__get_TrailFadeMultiplier
                (Projectiles_BaseProjectile_o *__this,MethodInfo *method)

{
  return 0.6;
}


// Projectiles.BaseProjectile$$get_DestroyDelay
// il2cpp: float Projectiles_BaseProjectile__get_DestroyDelay (Projectiles_BaseProjectile_o* __this, const MethodInfo* method);
// 0x4204a80

float Projectiles_BaseProjectile__get_DestroyDelay(Projectiles_BaseProjectile_o *__this,MethodInfo *method)

{
  return 1.5;
}


// Projectiles.BaseProjectile$$Setup
// il2cpp: void Projectiles_BaseProjectile__Setup (Projectiles_BaseProjectile_o* __this, float liveTime, UnityEngine_Vector3_o velocity, UnityEngine_Vector3_o gravity, int32_t charViewId, System_String_o* team, System_Object_array* settings, const MethodInfo* method);
// 0x4204a90

void Projectiles_BaseProjectile__Setup
               (Projectiles_BaseProjectile_o *__this,float liveTime,UnityEngine_Vector3_o velocity,
               UnityEngine_Vector3_o gravity,int32_t charViewId,System_String_o *team,
               System_Object_array *settings,MethodInfo *method)

{
  undefined8 uVar1;
  UnityEngine_Rigidbody_o *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  System_Collections_Generic_List_Collider__o *__this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  System_Collections_Generic_List_Enumerator_object__o __this_07;
  System_Collections_Generic_List_Enumerator_object__o __this_08;
  UnityEngine_Collider_o *collider2;
  bool_conflict bVar2;
  UnityEngine_GameObject_o *__this_09;
  UnityEngine_ConstantForce_o *pUVar3;
  Il2CppObject *pIVar4;
  long lVar5;
  Projectiles_BaseProjectile_o *__this_10;
  Photon_Pun_PhotonView_o *pPVar6;
  Characters_BaseCharacter_o *pCVar7;
  long *plVar8;
  undefined8 extraout_RDX;
  ulong uVar9;
  ulong uVar10;
  MethodInfo *method_00;
  Photon_Pun_PhotonView_o *unaff_R12;
  float fVar11;
  undefined1 auVar12 [12];
  _union_249689 _Var13;
  Il2CppType *pIVar14;
  UnityEngine_Collider_o *collider1;
  UnityEngine_Collider_o *pUVar15;
  _union_249689 _Stack_d0;
  Il2CppType *pIStack_c8;
  UnityEngine_Collider_o *pUStack_c0;
  _union_249689 _Stack_b0;
  Il2CppType *pIStack_a8;
  UnityEngine_Collider_o *pUStack_a0;
  System_Object_array *pSStack_98;
  Photon_Pun_PhotonView_o *pPStack_90;
  float fStack_58;
  float fStack_54;
  
  if (g_data_057ad8d8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_ConstantForce_AddComponent_ConstantForce);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&"SetupRPC");
    g_data_057ad8d8 = '\x01';
  }
  (__this->fields)._timeLeft = liveTime;
  __this_00 = (__this->fields)._rigidbody;
  if (__this_00 == (UnityEngine_Rigidbody_o *)0x0) {
label_04204d02:
    il2cpp_runtime_helper_022b2c90();
label_04204d07:
    il2cpp_runtime_helper_022b2ca0();
  }
  else {
    UnityEngine_Rigidbody__set_velocity(__this_00,velocity,(MethodInfo *)0x0);
    (__this->fields)._team = team;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._team);
    (__this->fields)._velocity.fields.x = (float)(int)velocity.fields._0_8_;
    (__this->fields)._velocity.fields.y = (float)(int)((ulong)velocity.fields._0_8_ >> 0x20);
    (__this->fields)._velocity.fields.z = velocity.fields.z;
    if (g_data_057a65d5 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057a65d5 = '\x01';
    }
    uVar1 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    fStack_58 = gravity.fields.x;
    fStack_54 = gravity.fields.y;
    fStack_54 = fStack_54 - (float)((ulong)uVar1 >> 0x20);
    fVar11 = gravity.fields.z - *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    fStack_58 = fStack_58 - (float)uVar1;
    if (9.9999994e-11 <= fStack_58 * fStack_58 + fStack_54 * fStack_54 + fVar11 * fVar11) {
      __this_09 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (__this_09 != (UnityEngine_GameObject_o *)0x0) {
        pUVar3 = (UnityEngine_ConstantForce_o *)
                 UnityEngine_GameObject__AddComponent_object_(__this_09,MethodInfo_ConstantForce_AddComponent_ConstantForce);
        (__this->fields)._force = pUVar3;
        il2cpp_runtime_helper_022b4080(&(__this->fields)._force);
        pUVar3 = (__this->fields)._force;
        if (pUVar3 != (UnityEngine_ConstantForce_o *)0x0) {
          UnityEngine_ConstantForce__set_force(pUVar3,gravity,(MethodInfo *)0x0);
          goto label_04204c2b;
        }
      }
      goto label_04204d02;
    }
label_04204c2b:
    unaff_R12 = Photon_Pun_MonoBehaviourPun__get_photonView
                          ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
    team = (System_String_o *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,2);
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8);
    if ((System_Object_array *)team == (System_Object_array *)0x0) goto label_04204d02;
    if ((pIVar4 == (Il2CppObject *)0x0) || (lVar5 = il2cpp_runtime_helper_023051f0(pIVar4), lVar5 != 0)) {
      if ((int)((System_Object_array *)team)->max_length != 0) {
        ((System_Object_array *)team)->m_Items[0] = pIVar4;
        il2cpp_runtime_helper_022b4080(((System_Object_array *)team)->m_Items);
        if ((settings != (System_Object_array *)0x0) && (lVar5 = il2cpp_runtime_helper_023051f0(settings), lVar5 == 0))
        goto label_04204d0c;
        if (1 < (uint)((System_Object_array *)team)->max_length) {
          ((System_Object_array *)team)->m_Items[1] = &settings->obj;
          il2cpp_runtime_helper_022b4080(((System_Object_array *)team)->m_Items + 1);
          if (unaff_R12 != (Photon_Pun_PhotonView_o *)0x0) {
            Photon_Pun_PhotonView__RPC(unaff_R12,"SetupRPC",0,(System_Object_array *)team,(MethodInfo *)0x0)
            ;
            return;
          }
          goto label_04204d02;
        }
      }
      goto label_04204d07;
    }
  }
label_04204d0c:
  __this_10 = (Projectiles_BaseProjectile_o *)il2cpp_runtime_helper_0231b270();
  uVar10 = 0;
  il2cpp_runtime_helper_022b2b10();
  uVar9 = uVar10 & 0xffffffff;
  pSStack_98 = (System_Object_array *)team;
  pPStack_90 = unaff_R12;
  if (g_data_057ad8d9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_Collider_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Physics);
    g_data_057ad8d9 = '\x01';
  }
  _Var13.genericMethod = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar14 = (Il2CppType *)0x0;
  collider1 = (UnityEngine_Collider_o *)0x0;
  _Stack_d0.genericMethod = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIStack_c8 = (Il2CppType *)0x0;
  pUStack_c0 = (UnityEngine_Collider_o *)0x0;
  pPVar6 = Photon_Pun_MonoBehaviourPun__get_photonView
                     ((Photon_Pun_MonoBehaviourPun_o *)__this_10,(MethodInfo *)0x0);
  if (pPVar6 == (Photon_Pun_PhotonView_o *)0x0) goto label_0420506f;
  if (gravity.fields._0_8_ != (pPVar6->fields)._Owner_k__BackingField) {
    return;
  }
  if ((int)uVar10 != -1) {
    pPVar6 = Photon_Pun_PhotonView__Find((int)uVar10,(MethodInfo *)0x0);
    if (pPVar6 == (Photon_Pun_PhotonView_o *)0x0) goto label_0420506f;
    pCVar7 = (Characters_BaseCharacter_o *)
             UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pPVar6,MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
    (__this_10->fields)._owner = pCVar7;
    il2cpp_runtime_helper_022b4080(&(__this_10->fields)._owner,pCVar7);
    pCVar7 = (__this_10->fields)._owner;
    if (pCVar7 == (Characters_BaseCharacter_o *)0x0) goto label_0420506f;
    (__this_10->fields)._team = *(System_String_o **)&(pCVar7->fields).AI;
    il2cpp_runtime_helper_022b4080(&(__this_10->fields)._team);
  }
  (*(__this_10->klass->vtable)._14_SetupSettings.methodPtr)
            (__this_10,extraout_RDX,(__this_10->klass->vtable)._14_SetupSettings.method);
  method_00 = (__this_10->klass->vtable)._15_RegisterObjects.method;
  (*(__this_10->klass->vtable)._15_RegisterObjects.methodPtr)(__this_10);
  Projectiles_BaseProjectile__RegisterColliders(__this_10,method_00);
  pCVar7 = (__this_10->fields)._owner;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    return;
  }
  pCVar7 = (__this_10->fields)._owner;
  if (((pCVar7 != (Characters_BaseCharacter_o *)0x0) && (lVar5 = *(long *)&(pCVar7->fields).Dead, lVar5 != 0))
     && (__this_01 = *(System_Collections_Generic_List_object__o **)(lVar5 + 0x28),
        __this_01 != (System_Collections_Generic_List_object__o *)0x0)) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&_Stack_b0,__this_01,MethodInfo_List_1_T_Enumerator_UnityEngine_Collider_GetEnumerator);
    _Var13 = _Stack_b0;
    pIVar14 = pIStack_a8;
    collider1 = pUStack_a0;
    while( true ) {
      __this_03.fields._8_8_ = pIVar14;
      __this_03.fields._list = _Var13.genericMethod;
      __this_03.fields._current = (Il2CppObject *)collider1;
      bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_03,(MethodInfo_321A1D0 *)&stack0xffffffffffffff10);
      if ((char)bVar2 == '\0') {
        __this_06.fields._8_8_ = pIVar14;
        __this_06.fields._list = _Var13.genericMethod;
        __this_06.fields._current = (Il2CppObject *)collider1;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_06,(MethodInfo_321A1C0 *)&stack0xffffffffffffff10);
        return;
      }
      __this_02 = (__this_10->fields)._colliders;
      if (__this_02 == (System_Collections_Generic_List_Collider__o *)0x0) break;
      pUVar15 = collider1;
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&_Stack_b0,
                 (System_Collections_Generic_List_object__o *)__this_02,MethodInfo_List_1_T_Enumerator_UnityEngine_Collider_GetEnumerator);
      pUStack_c0 = pUStack_a0;
      _Stack_d0.genericMethod = _Stack_b0.genericMethod;
      pIStack_c8 = pIStack_a8;
      while (__this_04.fields._8_8_ = pIVar14, __this_04.fields._list = _Var13.genericMethod,
            __this_04.fields._current = (Il2CppObject *)pUVar15,
            bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              (__this_04,(MethodInfo_321A1D0 *)&_Stack_d0), collider2 = pUStack_c0,
            (char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        UnityEngine_Physics__IgnoreCollision_4e76ac0(collider1,collider2,(MethodInfo *)0x0);
      }
      uVar9 = 0;
      __this_05.fields._8_8_ = pIVar14;
      __this_05.fields._list = _Var13.genericMethod;
      __this_05.fields._current = (Il2CppObject *)pUVar15;
      System_Collections_Generic_List_Enumerator_object___Dispose(__this_05,(MethodInfo_321A1C0 *)&_Stack_d0);
      collider1 = pUVar15;
    }
    il2cpp_runtime_helper_022b2c90();
    il2cpp_runtime_helper_022fefe0(uVar9);
  }
label_0420506f:
  auVar12 = il2cpp_runtime_helper_022b2c90();
  if (auVar12._8_4_ == 1) {
    plVar8 = (long *)__cxa_begin_catch(auVar12._0_8_);
    lVar5 = *plVar8;
    __cxa_end_catch();
    __this_07.fields._8_8_ = pIVar14;
    __this_07.fields._list = _Var13.genericMethod;
    __this_07.fields._current = (Il2CppObject *)collider1;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_07,(MethodInfo_321A1C0 *)&stack0xffffffffffffff10);
    if (lVar5 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar5);
  }
  __this_08.fields._8_8_ = pIVar14;
  __this_08.fields._list = _Var13.genericMethod;
  __this_08.fields._current = (Il2CppObject *)collider1;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_08,(MethodInfo_321A1C0 *)&stack0xffffffffffffff10);
  _Unwind_Resume(auVar12._0_8_);
}


// Projectiles.BaseProjectile$$SetupRPC
// il2cpp: void Projectiles_BaseProjectile__SetupRPC (Projectiles_BaseProjectile_o* __this, int32_t charViewId, System_Object_array* settings, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x4204d20

void Projectiles_BaseProjectile__SetupRPC
               (Projectiles_BaseProjectile_o *__this,int32_t charViewId,System_Object_array *settings,
               Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_List_Collider__o *__this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  System_Collections_Generic_List_Enumerator_object__o __this_07;
  UnityEngine_Collider_o *collider2;
  bool_conflict bVar2;
  Photon_Pun_PhotonView_o *pPVar3;
  Characters_BaseCharacter_o *pCVar4;
  long *plVar5;
  MethodInfo *method_00;
  undefined1 auVar6 [12];
  _union_249689 _Var7;
  Il2CppType *pIVar8;
  UnityEngine_Collider_o *collider1;
  UnityEngine_Collider_o *pUVar9;
  _union_249689 _Stack_68;
  Il2CppType *pIStack_60;
  UnityEngine_Collider_o *pUStack_58;
  _union_249689 _Stack_48;
  Il2CppType *pIStack_40;
  UnityEngine_Collider_o *pUStack_38;
  
  if (g_data_057ad8d9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_Collider_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Physics);
    g_data_057ad8d9 = '\x01';
  }
  _Var7.genericMethod = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar8 = (Il2CppType *)0x0;
  collider1 = (UnityEngine_Collider_o *)0x0;
  _Stack_68.genericMethod = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIStack_60 = (Il2CppType *)0x0;
  pUStack_58 = (UnityEngine_Collider_o *)0x0;
  pPVar3 = Photon_Pun_MonoBehaviourPun__get_photonView
                     ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
  if (pPVar3 == (Photon_Pun_PhotonView_o *)0x0) goto label_0420506f;
  if (info.fields.Sender != (pPVar3->fields)._Owner_k__BackingField) {
    return;
  }
  if (charViewId != -1) {
    pPVar3 = Photon_Pun_PhotonView__Find(charViewId,(MethodInfo *)0x0);
    if (pPVar3 == (Photon_Pun_PhotonView_o *)0x0) goto label_0420506f;
    pCVar4 = (Characters_BaseCharacter_o *)
             UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pPVar3,MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
    (__this->fields)._owner = pCVar4;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._owner,pCVar4);
    pCVar4 = (__this->fields)._owner;
    if (pCVar4 == (Characters_BaseCharacter_o *)0x0) goto label_0420506f;
    (__this->fields)._team = *(System_String_o **)&(pCVar4->fields).AI;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._team);
  }
  (*(__this->klass->vtable)._14_SetupSettings.methodPtr)
            (__this,settings,(__this->klass->vtable)._14_SetupSettings.method);
  method_00 = (__this->klass->vtable)._15_RegisterObjects.method;
  (*(__this->klass->vtable)._15_RegisterObjects.methodPtr)(__this);
  Projectiles_BaseProjectile__RegisterColliders(__this,method_00);
  pCVar4 = (__this->fields)._owner;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    return;
  }
  pCVar4 = (__this->fields)._owner;
  if (((pCVar4 != (Characters_BaseCharacter_o *)0x0) && (lVar1 = *(long *)&(pCVar4->fields).Dead, lVar1 != 0))
     && (__this_00 = *(System_Collections_Generic_List_object__o **)(lVar1 + 0x28),
        __this_00 != (System_Collections_Generic_List_object__o *)0x0)) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&_Stack_48,__this_00,MethodInfo_List_1_T_Enumerator_UnityEngine_Collider_GetEnumerator);
    _Var7 = _Stack_48;
    pIVar8 = pIStack_40;
    collider1 = pUStack_38;
    while( true ) {
      __this_02.fields._8_8_ = pIVar8;
      __this_02.fields._list = _Var7.genericMethod;
      __this_02.fields._current = (Il2CppObject *)collider1;
      bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_02,(MethodInfo_321A1D0 *)&stack0xffffffffffffff78);
      if ((char)bVar2 == '\0') {
        __this_05.fields._8_8_ = pIVar8;
        __this_05.fields._list = _Var7.genericMethod;
        __this_05.fields._current = (Il2CppObject *)collider1;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_05,(MethodInfo_321A1C0 *)&stack0xffffffffffffff78);
        return;
      }
      __this_01 = (__this->fields)._colliders;
      if (__this_01 == (System_Collections_Generic_List_Collider__o *)0x0) break;
      pUVar9 = collider1;
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&_Stack_48,
                 (System_Collections_Generic_List_object__o *)__this_01,MethodInfo_List_1_T_Enumerator_UnityEngine_Collider_GetEnumerator);
      pUStack_58 = pUStack_38;
      _Stack_68.genericMethod = _Stack_48.genericMethod;
      pIStack_60 = pIStack_40;
      while (__this_03.fields._8_8_ = pIVar8, __this_03.fields._list = _Var7.genericMethod,
            __this_03.fields._current = (Il2CppObject *)pUVar9,
            bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              (__this_03,(MethodInfo_321A1D0 *)&_Stack_68), collider2 = pUStack_58,
            (char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        UnityEngine_Physics__IgnoreCollision_4e76ac0(collider1,collider2,(MethodInfo *)0x0);
      }
      charViewId = 0;
      __this_04.fields._8_8_ = pIVar8;
      __this_04.fields._list = _Var7.genericMethod;
      __this_04.fields._current = (Il2CppObject *)pUVar9;
      System_Collections_Generic_List_Enumerator_object___Dispose(__this_04,(MethodInfo_321A1C0 *)&_Stack_68);
      collider1 = pUVar9;
    }
    il2cpp_runtime_helper_022b2c90();
    il2cpp_runtime_helper_022fefe0(charViewId);
  }
label_0420506f:
  auVar6 = il2cpp_runtime_helper_022b2c90();
  if (auVar6._8_4_ == 1) {
    plVar5 = (long *)__cxa_begin_catch(auVar6._0_8_);
    lVar1 = *plVar5;
    __cxa_end_catch();
    __this_06.fields._8_8_ = pIVar8;
    __this_06.fields._list = _Var7.genericMethod;
    __this_06.fields._current = (Il2CppObject *)collider1;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_06,(MethodInfo_321A1C0 *)&stack0xffffffffffffff78);
    if (lVar1 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar1);
  }
  __this_07.fields._8_8_ = pIVar8;
  __this_07.fields._list = _Var7.genericMethod;
  __this_07.fields._current = (Il2CppObject *)collider1;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_07,(MethodInfo_321A1C0 *)&stack0xffffffffffffff78);
  _Unwind_Resume(auVar6._0_8_);
}


// Projectiles.BaseProjectile$$SetupSettings
// il2cpp: void Projectiles_BaseProjectile__SetupSettings (Projectiles_BaseProjectile_o* __this, System_Object_array* settings, const MethodInfo* method);
// 0x4205280

void Projectiles_BaseProjectile__SetupSettings
               (Projectiles_BaseProjectile_o *__this,System_Object_array *settings,MethodInfo *method)

{
  return;
}


// Projectiles.BaseProjectile$$RegisterColliders
// il2cpp: void Projectiles_BaseProjectile__RegisterColliders (Projectiles_BaseProjectile_o* __this, const MethodInfo* method);
// 0x4205100

void Projectiles_BaseProjectile__RegisterColliders(Projectiles_BaseProjectile_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  UnityEngine_Component_o *__this_00;
  System_Collections_Generic_List_Collider__o *__this_01;
  UnityEngine_Collider_array *pUVar2;
  long lVar3;
  uint uVar4;
  System_Object_array *pSVar5;
  UnityEngine_GameObject_o *__this_02;
  uint uVar6;
  
  if (g_data_057ad8da == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_GetComponentsInChildren_Collider);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhysicsLayer);
    g_data_057ad8da = '\x01';
  }
  pSVar5 = UnityEngine_Component__GetComponentsInChildren_object__24e8500
                     ((UnityEngine_Component_o *)__this,MethodInfo_Collider_GetComponentsInChildren_Collider);
  if (pSVar5 != (System_Object_array *)0x0) {
    uVar4 = (uint)pSVar5->max_length;
    if (0 < (int)uVar4) {
      uVar6 = 0;
      do {
        while( true ) {
          if (uVar4 <= uVar6) goto label_0420526d;
          __this_00 = (UnityEngine_Component_o *)pSVar5->m_Items[(int)uVar6];
          if (__this_00 == (UnityEngine_Component_o *)0x0) goto label_04205268;
          __this_02 = UnityEngine_Component__get_gameObject(__this_00,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          if (__this_02 == (UnityEngine_GameObject_o *)0x0) goto label_04205268;
          UnityEngine_GameObject__set_layer
                    (__this_02,*(int32_t *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0x1c),(MethodInfo *)0x0);
          lVar3 = MethodInfo_Void_Add;
          __this_01 = (__this->fields)._colliders;
          if (__this_01 == (System_Collections_Generic_List_Collider__o *)0x0) goto label_04205268;
          piVar1 = &(__this_01->fields)._version;
          *piVar1 = *piVar1 + 1;
          pUVar2 = (__this_01->fields)._items;
          if (pUVar2 == (UnityEngine_Collider_array *)0x0) goto label_04205268;
          uVar4 = (__this_01->fields)._size;
          if ((uint)pUVar2->max_length <= uVar4) break;
          (__this_01->fields)._size = uVar4 + 1;
          pUVar2->m_Items[(int)uVar4] = (UnityEngine_Collider_o *)__this_00;
          il2cpp_runtime_helper_022b4080(pUVar2->m_Items + (int)uVar4);
          uVar6 = uVar6 + 1;
          uVar4 = (uint)pSVar5->max_length;
          if ((int)uVar4 <= (int)uVar6) {
            return;
          }
        }
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)__this_00,
                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
        uVar6 = uVar6 + 1;
        uVar4 = (uint)pSVar5->max_length;
      } while ((int)uVar6 < (int)uVar4);
    }
    return;
  }
label_04205268:
  il2cpp_runtime_helper_022b2c90();
label_0420526d:
  il2cpp_runtime_helper_022b2ca0();
  return;
}


// Projectiles.BaseProjectile$$IsMine
// il2cpp: bool Projectiles_BaseProjectile__IsMine (Projectiles_BaseProjectile_o* __this, const MethodInfo* method);
// 0x4205290

bool_conflict Projectiles_BaseProjectile__IsMine(Projectiles_BaseProjectile_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  bool_conflict bVar1;
  Photon_Pun_PhotonView_o *pPVar2;
  Photon_Pun_PhotonView_o *extraout_RAX;
  undefined8 extraout_RDX;
  float fVar3;
  float fVar4;
  
  pPVar2 = Photon_Pun_MonoBehaviourPun__get_photonView
                     ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
  if (pPVar2 != (Photon_Pun_PhotonView_o *)0x0) {
    return (bool_conflict)CONCAT71((int7)((ulong)pPVar2 >> 8),(char)(pPVar2->fields)._IsMine_k__BackingField);
  }
  il2cpp_runtime_helper_022b2c90();
  Characters_BaseMovementSync__Update((Characters_BaseMovementSync_o *)__this,(MethodInfo *)0x0);
  pPVar2 = (__this->fields)._photonView;
  if (pPVar2 != (Photon_Pun_PhotonView_o *)0x0) {
    if ((char)(pPVar2->fields)._IsMine_k__BackingField != '\0') {
      fVar4 = (__this->fields)._timeLeft;
      fVar3 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
      fVar4 = fVar4 - fVar3;
      (__this->fields)._timeLeft = fVar4;
      pPVar2 = extraout_RAX;
      if (fVar4 <= 0.0) {
        vtableDispatch = (__this->klass->vtable)._16_OnExceedLiveTime.methodPtr;
        bVar1 = (*vtableDispatch)
                          (__this,(__this->klass->vtable)._16_OnExceedLiveTime.method,extraout_RDX,
                           vtableDispatch);
        return bVar1;
      }
    }
    return (bool_conflict)pPVar2;
  }
  bVar1 = il2cpp_runtime_helper_022b2c90();
  return bVar1;
}


// Projectiles.BaseProjectile$$Update
// il2cpp: void Projectiles_BaseProjectile__Update (Projectiles_BaseProjectile_o* __this, const MethodInfo* method);
// 0x42052b0

void Projectiles_BaseProjectile__Update(Projectiles_BaseProjectile_o *__this,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *pPVar1;
  Il2CppMethodPointer vtableDispatch;
  undefined8 extraout_RDX;
  float fVar2;
  float fVar3;
  
  Characters_BaseMovementSync__Update((Characters_BaseMovementSync_o *)__this,(MethodInfo *)0x0);
  pPVar1 = (__this->fields)._photonView;
  if (pPVar1 == (Photon_Pun_PhotonView_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    return;
  }
  if ((char)(pPVar1->fields)._IsMine_k__BackingField != '\0') {
    fVar3 = (__this->fields)._timeLeft;
    fVar2 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    fVar3 = fVar3 - fVar2;
    (__this->fields)._timeLeft = fVar3;
    if (fVar3 <= 0.0) {
      vtableDispatch = (__this->klass->vtable)._16_OnExceedLiveTime.methodPtr;
      (*vtableDispatch)
                (__this,(__this->klass->vtable)._16_OnExceedLiveTime.method,extraout_RDX,vtableDispatch
                );
      return;
    }
  }
  return;
}


// Projectiles.BaseProjectile$$RegisterObjects
// il2cpp: void Projectiles_BaseProjectile__RegisterObjects (Projectiles_BaseProjectile_o* __this, const MethodInfo* method);
// 0x4205330

void Projectiles_BaseProjectile__RegisterObjects(Projectiles_BaseProjectile_o *__this,MethodInfo *method)

{
  return;
}


// Projectiles.BaseProjectile$$OnExceedLiveTime
// il2cpp: void Projectiles_BaseProjectile__OnExceedLiveTime (Projectiles_BaseProjectile_o* __this, const MethodInfo* method);
// 0x4205340

void Projectiles_BaseProjectile__OnExceedLiveTime(Projectiles_BaseProjectile_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  undefined8 in_RDX;
  
  vtableDispatch = (__this->klass->vtable)._17_DestroySelf.methodPtr;
  (*vtableDispatch)(__this,(__this->klass->vtable)._17_DestroySelf.method,in_RDX,vtableDispatch)
  ;
  return;
}


// Projectiles.BaseProjectile$$DestroySelf
// il2cpp: void Projectiles_BaseProjectile__DestroySelf (Projectiles_BaseProjectile_o* __this, const MethodInfo* method);
// 0x4205360

void Projectiles_BaseProjectile__DestroySelf(Projectiles_BaseProjectile_o *__this,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *pPVar1;
  System_Object_array *parameters;
  System_Collections_IEnumerator_o *routine;
  Il2CppObject *__this_00;
  undefined4 uVar2;
  Projectiles_BaseProjectile_o *pPVar3;
  Il2CppObject *__this_01;
  undefined4 uVar4;
  
  if (g_data_057ad8db == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&"DisableRPC");
    g_data_057ad8db = '\x01';
  }
  pPVar3 = __this;
  pPVar1 = Photon_Pun_MonoBehaviourPun__get_photonView
                     ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
  if (pPVar1 != (Photon_Pun_PhotonView_o *)0x0) {
    if (((char)(pPVar1->fields)._IsMine_k__BackingField == '\0') || ((char)(__this->fields).Disabled != '\0'))
    {
      return;
    }
    pPVar1 = Photon_Pun_MonoBehaviourPun__get_photonView
                       ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
    pPVar3 = TypeInfo_object;
    parameters = (System_Object_array *)il2cpp_runtime_helper_022b2a40();
    if (pPVar1 != (Photon_Pun_PhotonView_o *)0x0) {
      Photon_Pun_PhotonView__RPC(pPVar1,"DisableRPC",0,parameters,(MethodInfo *)0x0);
      (*(__this->klass->vtable)._11_get_DestroyDelay.methodPtr)
                (__this,(__this->klass->vtable)._11_get_DestroyDelay.method);
      routine = (System_Collections_IEnumerator_o *)
                (*(__this->klass->vtable)._18_WaitAndFinishDestroyCoroutine.methodPtr)
                          (__this,(__this->klass->vtable)._18_WaitAndFinishDestroyCoroutine.method);
      UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
      return;
    }
  }
  uVar4 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad8dc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndFinishDestroyCoroutine_d__21);
    g_data_057ad8dc = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndFinishDestroyCoroutine_d__21);
  uVar2 = 0;
  __this_01 = __this_00;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].monitor = pPVar3;
    il2cpp_runtime_helper_022b4080(&__this_00[2].monitor,pPVar3);
    *(undefined4 *)&__this_00[2].klass = uVar4;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  *(undefined4 *)&__this_01[1].klass = uVar2;
  return;
}


// Projectiles.BaseProjectile$$WaitAndFinishDestroyCoroutine
// il2cpp: System_Collections_IEnumerator_o* Projectiles_BaseProjectile__WaitAndFinishDestroyCoroutine (Projectiles_BaseProjectile_o* __this, float time, const MethodInfo* method);
// 0x4205440

System_Collections_IEnumerator_o *
Projectiles_BaseProjectile__WaitAndFinishDestroyCoroutine
          (Projectiles_BaseProjectile_o *__this,float time,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Collections_IEnumerator_o *extraout_RAX;
  undefined4 uVar1;
  Il2CppObject *__this_01;
  
  if (g_data_057ad8dc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndFinishDestroyCoroutine_d__21);
    g_data_057ad8dc = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndFinishDestroyCoroutine_d__21);
  uVar1 = 0;
  __this_01 = __this_00;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].monitor = __this;
    il2cpp_runtime_helper_022b4080(&__this_00[2].monitor,__this);
    *(float *)&__this_00[2].klass = time;
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  *(undefined4 *)&__this_01[1].klass = uVar1;
  return extraout_RAX;
}


// Projectiles.BaseProjectile$$DisableRPC
// il2cpp: void Projectiles_BaseProjectile__DisableRPC (Projectiles_BaseProjectile_o* __this, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x42054e0

void Projectiles_BaseProjectile__DisableRPC
               (Projectiles_BaseProjectile_o *__this,Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  System_Collections_Generic_List_GameObject__o *__this_00;
  System_Collections_Generic_List_Collider__o *__this_01;
  System_Collections_Generic_List_ParticleSystem__o *__this_02;
  UnityEngine_Object_o *x;
  UnityEngine_ConstantForce_o *__this_03;
  long lVar1;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  System_Collections_Generic_List_Enumerator_object__o __this_07;
  System_Collections_Generic_List_Enumerator_object__o __this_08;
  System_Collections_Generic_List_Enumerator_object__o __this_09;
  System_Collections_Generic_List_Enumerator_object__o __this_10;
  System_Collections_Generic_List_Enumerator_object__o __this_11;
  System_Collections_Generic_List_Enumerator_object__o __this_12;
  bool_conflict bVar2;
  Photon_Pun_PhotonView_o *pPVar3;
  UnityEngine_Rigidbody_o *__this_13;
  long *plVar4;
  MethodInfo *method_00;
  undefined1 auVar5 [12];
  _union_249689 _Var6;
  Il2CppType *pIVar7;
  UnityEngine_ParticleSystem_o *particleSystem;
  _union_249689 local_78;
  Il2CppType *pIStack_70;
  UnityEngine_Collider_o *local_68;
  _union_249689 local_58;
  Il2CppType *pIStack_50;
  UnityEngine_GameObject_o *local_48;
  _union_249689 local_38;
  Il2CppType *pIStack_30;
  UnityEngine_ParticleSystem_o *local_28;
  
  if (g_data_057ad8dd == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Rigidbody_GetComponent_Rigidbody);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ParticleSystem_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_ParticleSystem_GetEnumer);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_Collider_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ad8dd = '\x01';
  }
  local_58.genericMethod = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIStack_50 = (Il2CppType *)0x0;
  local_48 = (UnityEngine_GameObject_o *)0x0;
  local_78.genericMethod = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIStack_70 = (Il2CppType *)0x0;
  local_68 = (UnityEngine_Collider_o *)0x0;
  _Var6.genericMethod = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar7 = (Il2CppType *)0x0;
  particleSystem = (UnityEngine_ParticleSystem_o *)0x0;
  if ((char)(__this->fields).Disabled == '\0') {
    pPVar3 = Photon_Pun_MonoBehaviourPun__get_photonView
                       ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
    if (pPVar3 != (Photon_Pun_PhotonView_o *)0x0) {
      if (info.fields.Sender != (pPVar3->fields)._Owner_k__BackingField) {
        return;
      }
      __this_00 = (__this->fields)._hideObjects;
      if (__this_00 != (System_Collections_Generic_List_GameObject__o *)0x0) {
        System_Collections_Generic_List_object___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)&local_38,
                   (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
        local_48 = (UnityEngine_GameObject_o *)local_28;
        local_58 = local_38;
        pIStack_50 = pIStack_30;
        while (__this_04.fields._8_8_ = pIVar7, __this_04.fields._list = _Var6.genericMethod,
              __this_04.fields._current = (Il2CppObject *)particleSystem,
              bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                (__this_04,(MethodInfo_321A1D0 *)&local_58), (char)bVar2 != '\0') {
          if (local_48 == (UnityEngine_GameObject_o *)0x0) {
            il2cpp_runtime_helper_022b2c90();
            goto label_0420588b;
          }
          UnityEngine_GameObject__SetActive(local_48,0,(MethodInfo *)0x0);
        }
        __this_05.fields._8_8_ = pIVar7;
        __this_05.fields._list = _Var6.genericMethod;
        __this_05.fields._current = (Il2CppObject *)particleSystem;
        System_Collections_Generic_List_Enumerator_object___Dispose(__this_05,(MethodInfo_321A1C0 *)&local_58)
        ;
        __this_01 = (__this->fields)._colliders;
        if (__this_01 != (System_Collections_Generic_List_Collider__o *)0x0) {
          System_Collections_Generic_List_object___GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)&local_38,
                     (System_Collections_Generic_List_object__o *)__this_01,MethodInfo_List_1_T_Enumerator_UnityEngine_Collider_GetEnumerator);
          local_68 = (UnityEngine_Collider_o *)local_28;
          local_78 = local_38;
          pIStack_70 = pIStack_30;
          while( true ) {
            __this_06.fields._8_8_ = pIVar7;
            __this_06.fields._list = _Var6.genericMethod;
            __this_06.fields._current = (Il2CppObject *)particleSystem;
            bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              (__this_06,(MethodInfo_321A1D0 *)&local_78);
            if ((char)bVar2 == '\0') {
              __this_07.fields._8_8_ = pIVar7;
              __this_07.fields._list = _Var6.genericMethod;
              __this_07.fields._current = (Il2CppObject *)particleSystem;
              System_Collections_Generic_List_Enumerator_object___Dispose
                        (__this_07,(MethodInfo_321A1C0 *)&local_78);
              goto label_0420572c;
            }
            if (local_68 == (UnityEngine_Collider_o *)0x0) break;
            UnityEngine_Collider__set_enabled(local_68,0,(MethodInfo *)0x0);
          }
label_0420588b:
          il2cpp_runtime_helper_022b2c90();
        }
      }
    }
    do {
      do {
        do {
          auVar5 = il2cpp_runtime_helper_022b2c90();
          if (auVar5._8_4_ != 1) {
            __this_11.fields._8_8_ = pIVar7;
            __this_11.fields._list = _Var6.genericMethod;
            __this_11.fields._current = (Il2CppObject *)particleSystem;
            System_Collections_Generic_List_Enumerator_object___Dispose
                      (__this_11,(MethodInfo_321A1C0 *)&local_78);
label_04205a04:
            _Unwind_Resume(auVar5._0_8_);
          }
          plVar4 = (long *)__cxa_begin_catch(auVar5._0_8_);
          lVar1 = *plVar4;
          __cxa_end_catch();
          __this_10.fields._8_8_ = pIVar7;
          __this_10.fields._list = _Var6.genericMethod;
          __this_10.fields._current = (Il2CppObject *)particleSystem;
          System_Collections_Generic_List_Enumerator_object___Dispose
                    (__this_10,(MethodInfo_321A1C0 *)&local_78);
          if (lVar1 != 0) {
            il2cpp_runtime_helper_022fefe0(lVar1);
            __this_12.fields._8_8_ = pIVar7;
            __this_12.fields._list = _Var6.genericMethod;
            __this_12.fields._current = (Il2CppObject *)particleSystem;
            System_Collections_Generic_List_Enumerator_object___Dispose
                      (__this_12,(MethodInfo_321A1C0 *)&local_58);
            goto label_04205a04;
          }
label_0420572c:
          __this_02 = (__this->fields)._fadeTrails;
        } while (__this_02 == (System_Collections_Generic_List_ParticleSystem__o *)0x0);
        System_Collections_Generic_List_object___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)&local_38,
                   (System_Collections_Generic_List_object__o *)__this_02,MethodInfo_List_1_T_Enumerator_UnityEngine_ParticleSystem_GetEnumer);
        _Var6 = local_38;
        pIVar7 = pIStack_30;
        particleSystem = local_28;
        while (__this_08.fields._8_8_ = pIVar7, __this_08.fields._list = _Var6.genericMethod,
              __this_08.fields._current = (Il2CppObject *)particleSystem,
              bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                (__this_08,(MethodInfo_321A1D0 *)&stack0xffffffffffffff68),
              (char)bVar2 != '\0') {
          Projectiles_BaseProjectile__SetDisabledTrailFade(__this,particleSystem,method_00);
        }
        __this_09.fields._8_8_ = pIVar7;
        __this_09.fields._list = _Var6.genericMethod;
        __this_09.fields._current = (Il2CppObject *)particleSystem;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_09,(MethodInfo_321A1C0 *)&stack0xffffffffffffff68);
        __this_13 = (UnityEngine_Rigidbody_o *)
                    UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)__this,MethodInfo_Rigidbody_GetComponent_Rigidbody);
        if (g_data_057a65d5 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
          g_data_057a65d5 = '\x01';
        }
      } while (__this_13 == (UnityEngine_Rigidbody_o *)0x0);
      UnityEngine_Rigidbody__set_velocity
                (__this_13,(UnityEngine_Vector3_o)**(UnityEngine_Vector3_Fields **)(TypeInfo_Vector3 + 0xb8),
                 (MethodInfo *)0x0);
      x = (UnityEngine_Object_o *)(__this->fields)._force;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') goto label_04205874;
      __this_03 = (__this->fields)._force;
      if (g_data_057a65d5 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a65d5 = '\x01';
      }
    } while (__this_03 == (UnityEngine_ConstantForce_o *)0x0);
    UnityEngine_ConstantForce__set_force
              (__this_03,(UnityEngine_Vector3_o)**(UnityEngine_Vector3_Fields **)(TypeInfo_Vector3 + 0xb8),
               (MethodInfo *)0x0);
label_04205874:
    *(undefined1 *)&(__this->fields).Disabled = 1;
  }
  return;
}


// Projectiles.BaseProjectile$$SetDisabledTrailFade
// il2cpp: void Projectiles_BaseProjectile__SetDisabledTrailFade (Projectiles_BaseProjectile_o* __this, UnityEngine_ParticleSystem_o* particleSystem, const MethodInfo* method);
// 0x4205a20

void Projectiles_BaseProjectile__SetDisabledTrailFade
               (Projectiles_BaseProjectile_o *__this,UnityEngine_ParticleSystem_o *particleSystem,
               MethodInfo *method)

{
  UnityEngine_ParticleSystem_Particle_o __this_00;
  UnityEngine_ParticleSystem_Particle_o __this_01;
  UnityEngine_ParticleSystem_Particle_o __this_02;
  uint size;
  UnityEngine_ParticleSystem_Particle_array *particles;
  System_Collections_Generic_List_GameObject__o *__this_03;
  System_Collections_Generic_List_Collider__o *__this_04;
  System_Collections_Generic_List_ParticleSystem__o *__this_05;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  Projectiles_BaseProjectile_o *method_00;
  Projectiles_BaseProjectile_o *__this_06;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  ulong uVar1;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  ulong uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 in_stack_00000000 [64];
  undefined1 in_stack_ffffffffffffffb8 [12];
  
  __this_06 = __this;
  if (g_data_057ad8de == '\0') {
    __this_06 = (Projectiles_BaseProjectile_o *)&TypeInfo_Particle;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad8de = '\x01';
  }
  if (particleSystem != (UnityEngine_ParticleSystem_o *)0x0) {
    size = UnityEngine_ParticleSystem__get_particleCount(particleSystem,(MethodInfo *)0x0);
    fVar3 = UnityEngine_ParticleSystem__get_startLifetime(particleSystem,(MethodInfo *)0x0);
    fVar4 = (float)(*(__this->klass->vtable)._10_get_TrailFadeMultiplier.methodPtr)
                             (__this,(__this->klass->vtable)._10_get_TrailFadeMultiplier.method);
    particles = (UnityEngine_ParticleSystem_Particle_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Particle,size);
    __this_06 = (Projectiles_BaseProjectile_o *)particleSystem;
    UnityEngine_ParticleSystem__GetParticles_4e727e0(particleSystem,particles,(MethodInfo *)0x0);
    if (0 < (int)size) {
      if (particles == (UnityEngine_ParticleSystem_Particle_array *)0x0) goto label_04205b78;
      fVar3 = fVar3 * fVar4;
      uVar1 = (ulong)size;
      method_00 = (Projectiles_BaseProjectile_o *)particles->m_Items;
      uVar2 = 0;
      do {
        if ((uint)particles->max_length <= uVar2) {
label_04205b73:
          il2cpp_runtime_helper_022b2ca0();
          goto label_04205b78;
        }
        __this_00.fields.m_Velocity.fields.x = fVar3;
        __this_00.fields.m_Position.fields.x = (float)in_stack_ffffffffffffffb8._0_4_;
        __this_00.fields.m_Position.fields.y = (float)in_stack_ffffffffffffffb8._4_4_;
        __this_00.fields.m_Position.fields.z = (float)in_stack_ffffffffffffffb8._8_4_;
        __this_00.fields.m_Velocity.fields.y = fVar4;
        __this_00.fields.m_Velocity.fields.z = (float)size;
        __this_00.fields.m_AnimatedVelocity.fields.x = (float)(int)unaff_RBX;
        __this_00.fields.m_AnimatedVelocity.fields.y = (float)(int)((ulong)unaff_RBX >> 0x20);
        __this_00.fields.m_AnimatedVelocity.fields.z = (float)(int)unaff_R12;
        __this_00.fields.m_InitialVelocity.fields.x = (float)(int)((ulong)unaff_R12 >> 0x20);
        __this_00.fields.m_InitialVelocity.fields.y = (float)(int)unaff_R13;
        __this_00.fields.m_InitialVelocity.fields.z = (float)(int)((ulong)unaff_R13 >> 0x20);
        __this_00.fields.m_AxisOfRotation.fields.x = (float)(int)unaff_R14;
        __this_00.fields.m_AxisOfRotation.fields.y = (float)(int)((ulong)unaff_R14 >> 0x20);
        __this_00.fields.m_AxisOfRotation.fields.z = (float)(int)unaff_R15;
        __this_00.fields.m_Rotation.fields.x = (float)(int)((ulong)unaff_R15 >> 0x20);
        __this_00.fields.m_Rotation.fields.y = (float)(int)unaff_RBP;
        __this_00.fields.m_Rotation.fields.z = (float)(int)((ulong)unaff_RBP >> 0x20);
        __this_00.fields._72_64_ = in_stack_00000000;
        fVar4 = UnityEngine_ParticleSystem_Particle__get_remainingLifetime(__this_00,(MethodInfo *)method_00);
        fVar5 = (float)(*(__this->klass->vtable)._10_get_TrailFadeMultiplier.methodPtr)
                                 (__this,(__this->klass->vtable)._10_get_TrailFadeMultiplier.method);
        __this_01.fields.m_Velocity.fields.x = fVar3;
        __this_01.fields.m_Position.fields.x = (float)in_stack_ffffffffffffffb8._0_4_;
        __this_01.fields.m_Position.fields.y = (float)in_stack_ffffffffffffffb8._4_4_;
        __this_01.fields.m_Position.fields.z = (float)in_stack_ffffffffffffffb8._8_4_;
        __this_01.fields.m_Velocity.fields.y = fVar4;
        __this_01.fields.m_Velocity.fields.z = (float)size;
        __this_01.fields.m_AnimatedVelocity.fields.x = (float)(int)unaff_RBX;
        __this_01.fields.m_AnimatedVelocity.fields.y = (float)(int)((ulong)unaff_RBX >> 0x20);
        __this_01.fields.m_AnimatedVelocity.fields.z = (float)(int)unaff_R12;
        __this_01.fields.m_InitialVelocity.fields.x = (float)(int)((ulong)unaff_R12 >> 0x20);
        __this_01.fields.m_InitialVelocity.fields.y = (float)(int)unaff_R13;
        __this_01.fields.m_InitialVelocity.fields.z = (float)(int)((ulong)unaff_R13 >> 0x20);
        __this_01.fields.m_AxisOfRotation.fields.x = (float)(int)unaff_R14;
        __this_01.fields.m_AxisOfRotation.fields.y = (float)(int)((ulong)unaff_R14 >> 0x20);
        __this_01.fields.m_AxisOfRotation.fields.z = (float)(int)unaff_R15;
        __this_01.fields.m_Rotation.fields.x = (float)(int)((ulong)unaff_R15 >> 0x20);
        __this_01.fields.m_Rotation.fields.y = (float)(int)unaff_RBP;
        __this_01.fields.m_Rotation.fields.z = (float)(int)((ulong)unaff_RBP >> 0x20);
        __this_01.fields._72_64_ = in_stack_00000000;
        __this_06 = method_00;
        UnityEngine_ParticleSystem_Particle__set_remainingLifetime
                  (__this_01,fVar5 * fVar4,(MethodInfo *)method_00);
        if ((uint)particles->max_length <= uVar2) goto label_04205b73;
        __this_02.fields.m_Velocity.fields.x = fVar3;
        __this_02.fields.m_Position.fields.x = (float)in_stack_ffffffffffffffb8._0_4_;
        __this_02.fields.m_Position.fields.y = (float)in_stack_ffffffffffffffb8._4_4_;
        __this_02.fields.m_Position.fields.z = (float)in_stack_ffffffffffffffb8._8_4_;
        __this_02.fields.m_Velocity.fields.y = fVar4;
        __this_02.fields.m_Velocity.fields.z = (float)size;
        __this_02.fields.m_AnimatedVelocity.fields.x = (float)(int)unaff_RBX;
        __this_02.fields.m_AnimatedVelocity.fields.y = (float)(int)((ulong)unaff_RBX >> 0x20);
        __this_02.fields.m_AnimatedVelocity.fields.z = (float)(int)unaff_R12;
        __this_02.fields.m_InitialVelocity.fields.x = (float)(int)((ulong)unaff_R12 >> 0x20);
        __this_02.fields.m_InitialVelocity.fields.y = (float)(int)unaff_R13;
        __this_02.fields.m_InitialVelocity.fields.z = (float)(int)((ulong)unaff_R13 >> 0x20);
        __this_02.fields.m_AxisOfRotation.fields.x = (float)(int)unaff_R14;
        __this_02.fields.m_AxisOfRotation.fields.y = (float)(int)((ulong)unaff_R14 >> 0x20);
        __this_02.fields.m_AxisOfRotation.fields.z = (float)(int)unaff_R15;
        __this_02.fields.m_Rotation.fields.x = (float)(int)((ulong)unaff_R15 >> 0x20);
        __this_02.fields.m_Rotation.fields.y = (float)(int)unaff_RBP;
        __this_02.fields.m_Rotation.fields.z = (float)(int)((ulong)unaff_RBP >> 0x20);
        __this_02.fields._72_64_ = in_stack_00000000;
        __this_06 = method_00;
        UnityEngine_ParticleSystem_Particle__set_startLifetime(__this_02,fVar3,(MethodInfo *)method_00);
        uVar2 = uVar2 + 1;
        method_00 = (Projectiles_BaseProjectile_o *)((long)&(method_00->fields)._photonView + 4);
      } while (uVar1 != uVar2);
    }
    UnityEngine_ParticleSystem__SetParticles_4e72600(particleSystem,particles,size,(MethodInfo *)0x0);
    return;
  }
label_04205b78:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad8df == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Collider);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_ParticleSystem);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Collider);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_ParticleSystem);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_GameObject);
    g_data_057ad8df = '\x01';
  }
  __this_03 = (System_Collections_Generic_List_GameObject__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GameObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_03,MethodInfo_List_1_UnityEngine_GameObject);
  (__this_06->fields)._hideObjects = __this_03;
  il2cpp_runtime_helper_022b4080(&(__this_06->fields)._hideObjects,__this_03);
  __this_04 = (System_Collections_Generic_List_Collider__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Collider);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_04,MethodInfo_List_1_UnityEngine_Collider);
  (__this_06->fields)._colliders = __this_04;
  il2cpp_runtime_helper_022b4080(&(__this_06->fields)._colliders,__this_04);
  __this_05 = (System_Collections_Generic_List_ParticleSystem__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_ParticleSystem);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_05,MethodInfo_List_1_UnityEngine_ParticleSystem);
  (__this_06->fields)._fadeTrails = __this_05;
  il2cpp_runtime_helper_022b4080(&(__this_06->fields)._fadeTrails);
  Characters_BaseMovementSync___ctor((Characters_BaseMovementSync_o *)__this_06,(MethodInfo *)0x0);
  return;
}


// Projectiles.BaseProjectile$$.ctor
// il2cpp: void Projectiles_BaseProjectile___ctor (Projectiles_BaseProjectile_o* __this, const MethodInfo* method);
// 0x4205b80

void Projectiles_BaseProjectile___ctor(Projectiles_SmokeBombProjectile_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GameObject__o *__this_00;
  System_Collections_Generic_List_Collider__o *__this_01;
  System_Collections_Generic_List_ParticleSystem__o *__this_02;
  
  if (g_data_057ad8df == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Collider);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_ParticleSystem);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Collider);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_ParticleSystem);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_GameObject);
    g_data_057ad8df = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_GameObject__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GameObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_UnityEngine_GameObject);
  (__this->fields)._hideObjects = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._hideObjects,__this_00);
  __this_01 = (System_Collections_Generic_List_Collider__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Collider);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_01,MethodInfo_List_1_UnityEngine_Collider);
  (__this->fields)._colliders = __this_01;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._colliders,__this_01);
  __this_02 = (System_Collections_Generic_List_ParticleSystem__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_ParticleSystem);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_02,MethodInfo_List_1_UnityEngine_ParticleSystem);
  (__this->fields)._fadeTrails = __this_02;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._fadeTrails);
  Characters_BaseMovementSync___ctor((Characters_BaseMovementSync_o *)__this,(MethodInfo *)0x0);
  return;
}


