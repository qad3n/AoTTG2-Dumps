// Type: Projectiles.BaseProjectile
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Projectiles/BaseProjectile.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Projectiles/BaseProjectile.cs  [CHANGED since prior version]
// --------------------------------

// Projectiles.BaseProjectile.<WaitAndFinishDestroyCoroutine>d__21$$.ctor
// il2cpp: void Projectiles_BaseProjectile__WaitAndFinishDestroyCoroutine_d__21___ctor (Projectiles_BaseProjectile__WaitAndFinishDestroyCoroutine_d__21_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x3f163d0

void Projectiles_BaseProjectile_<WaitAndFinishDestroyCoroutine>d__21___ctor
               (Projectiles_BaseProjectile__WaitAndFinishDestroyCoroutine_d__21_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Projectiles.BaseProjectile.<WaitAndFinishDestroyCoroutine>d__21$$System.IDisposable.Dispose
// il2cpp: void Projectiles_BaseProjectile__WaitAndFinishDestroyCoroutine_d__21__System_IDisposable_Dispose (Projectiles_BaseProjectile__WaitAndFinishDestroyCoroutine_d__21_o* __this, const MethodInfo* method);
// 0x3f16bb0

void Projectiles_BaseProjectile_<WaitAndFinishDestroyCoroutine>d__21__System_IDisposable_Dispose
               (Projectiles_BaseProjectile__WaitAndFinishDestroyCoroutine_d__21_o *__this,
               MethodInfo *method)

{
  return;
}


// Projectiles.BaseProjectile.<WaitAndFinishDestroyCoroutine>d__21$$MoveNext
// il2cpp: bool Projectiles_BaseProjectile__WaitAndFinishDestroyCoroutine_d__21__MoveNext (Projectiles_BaseProjectile__WaitAndFinishDestroyCoroutine_d__21_o* __this, const MethodInfo* method);
// 0x3f16bc0

bool_conflict
Projectiles_BaseProjectile_<WaitAndFinishDestroyCoroutine>d__21__MoveNext
          (Projectiles_BaseProjectile__WaitAndFinishDestroyCoroutine_d__21_o *__this,
          MethodInfo *method)

{
  float seconds;
  int iVar1;
  Projectiles_BaseProjectile_o *__this_00;
  UnityEngine_WaitForSeconds_o *__this_01;
  UnityEngine_GameObject_o *targetGo;
  bool_conflict bVar2;
  
  if (DAT_05703cbf == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_WaitForSeconds);
    DAT_05703cbf = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    __this_00 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (__this_00 == (Projectiles_BaseProjectile_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    targetGo = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = 0;
    Photon_Pun_PhotonNetwork__Destroy(targetGo,(MethodInfo *)0x0);
  }
  else if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    seconds = (__this->fields).time;
    __this_01 = (UnityEngine_WaitForSeconds_o *)il2cpp_runtime_glue(TypeInfo_WaitForSeconds);
    UnityEngine_WaitForSeconds___ctor(__this_01,seconds,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)__this_01;
    il2cpp_runtime_glue(&(__this->fields).__2__current,__this_01);
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
// 0x3f16ca0

Il2CppObject *
Projectiles_BaseProjectile_<WaitAndFinishDestroyCoroutine>d__21__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (Projectiles_BaseProjectile__WaitAndFinishDestroyCoroutine_d__21_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Projectiles.BaseProjectile.<WaitAndFinishDestroyCoroutine>d__21$$System.Collections.IEnumerator.Reset
// il2cpp: void Projectiles_BaseProjectile__WaitAndFinishDestroyCoroutine_d__21__System_Collections_IEnumerator_Reset (Projectiles_BaseProjectile__WaitAndFinishDestroyCoroutine_d__21_o* __this, const MethodInfo* method);
// 0x3f16cb0

void Projectiles_BaseProjectile_<WaitAndFinishDestroyCoroutine>d__21__System_Collections_IEnumerator_Reset
               (Projectiles_BaseProjectile__WaitAndFinishDestroyCoroutine_d__21_o *__this,
               MethodInfo *method)

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


// Projectiles.BaseProjectile.<WaitAndFinishDestroyCoroutine>d__21$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Projectiles_BaseProjectile__WaitAndFinishDestroyCoroutine_d__21__System_Collections_IEnumerator_get_Current (Projectiles_BaseProjectile__WaitAndFinishDestroyCoroutine_d__21_o* __this, const MethodInfo* method);
// 0x3f16cf0

Il2CppObject *
Projectiles_BaseProjectile_<WaitAndFinishDestroyCoroutine>d__21__System_Collections_IEnumerator_get_Current
          (Projectiles_BaseProjectile__WaitAndFinishDestroyCoroutine_d__21_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Projectiles.BaseProjectile$$get_TrailFadeMultiplier
// il2cpp: float Projectiles_BaseProjectile__get_TrailFadeMultiplier (Projectiles_BaseProjectile_o* __this, const MethodInfo* method);
// 0x3f15980

float Projectiles_BaseProjectile__get_TrailFadeMultiplier
                (Projectiles_BaseProjectile_o *__this,MethodInfo *method)

{
  return 0.6;
}


// Projectiles.BaseProjectile$$get_DestroyDelay
// il2cpp: float Projectiles_BaseProjectile__get_DestroyDelay (Projectiles_BaseProjectile_o* __this, const MethodInfo* method);
// 0x3f15990

float Projectiles_BaseProjectile__get_DestroyDelay
                (Projectiles_BaseProjectile_o *__this,MethodInfo *method)

{
  return 1.5;
}


// Projectiles.BaseProjectile$$Setup
// il2cpp: void Projectiles_BaseProjectile__Setup (Projectiles_BaseProjectile_o* __this, float liveTime, UnityEngine_Vector3_o velocity, UnityEngine_Vector3_o gravity, int32_t charViewId, System_String_o* team, System_Object_array* settings, const MethodInfo* method);
// 0x3f159a0

void Projectiles_BaseProjectile__Setup
               (Projectiles_BaseProjectile_o *__this,float liveTime,UnityEngine_Vector3_o velocity,
               UnityEngine_Vector3_o gravity,int32_t charViewId,System_String_o *team,
               System_Object_array *settings,MethodInfo *method)

{
  UnityEngine_Rigidbody_o *__this_00;
  undefined1 auVar1 [16];
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_ConstantForce_o *pUVar2;
  Photon_Pun_PhotonView_o *__this_02;
  System_Object_array *parameters;
  Il2CppObject *pIVar3;
  long lVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  undefined4 in_XMM3_Dc;
  undefined4 in_XMM3_Dd;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o value_00;
  int32_t iStack_5c;
  undefined1 auStack_58 [16];
  float fStack_48;
  undefined1 auStack_38 [16];
  
  fStack_48 = gravity.fields.z;
  auStack_58._8_4_ = in_XMM3_Dc;
  auStack_58._0_8_ = gravity.fields._0_8_;
  auStack_58._12_4_ = in_XMM3_Dd;
  auStack_38._8_4_ = in_XMM1_Dc;
  auStack_38._0_8_ = velocity.fields._0_8_;
  auStack_38._12_4_ = in_XMM1_Dd;
  if (DAT_05703cb7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_ConstantForce_AddComponent_ConstantForce);
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&"SetupRPC");
    DAT_05703cb7 = '\x01';
  }
  auVar1 = auStack_38;
  (__this->fields)._timeLeft = liveTime;
  __this_00 = (__this->fields)._rigidbody;
  if (__this_00 == (UnityEngine_Rigidbody_o *)0x0) goto LAB_03f15c12;
  value.fields.z = velocity.fields.z;
  value.fields.x = (float)auStack_38._0_4_;
  value.fields.y = (float)auStack_38._4_4_;
  auStack_38 = auVar1;
  UnityEngine_Rigidbody__set_velocity(__this_00,value,(MethodInfo *)0x0);
  (__this->fields)._team = team;
  il2cpp_runtime_glue(&(__this->fields)._team);
  auVar1 = auStack_38;
  (__this->fields)._velocity.fields.x = (float)auStack_38._0_4_;
  (__this->fields)._velocity.fields.y = (float)auStack_38._4_4_;
  (__this->fields)._velocity.fields.z = velocity.fields.z;
  auStack_38 = auVar1;
  if (DAT_056fdd15 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_056fdd15 = '\x01';
  }
  uVar5 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
  fVar8 = (float)auStack_58._4_4_ - (float)((ulong)uVar5 >> 0x20);
  fVar6 = fStack_48 - *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  fVar7 = (float)auStack_58._0_4_ - (float)uVar5;
  if (9.9999994e-11 <= fVar7 * fVar7 + fVar8 * fVar8 + fVar6 * fVar6) {
    __this_01 = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_01 == (UnityEngine_GameObject_o *)0x0) goto LAB_03f15c12;
    pUVar2 = (UnityEngine_ConstantForce_o *)
             UnityEngine_GameObject__AddComponent<object>(__this_01,MethodInfo_ConstantForce_AddComponent_ConstantForce);
    (__this->fields)._force = pUVar2;
    il2cpp_runtime_glue(&(__this->fields)._force);
    auVar1 = auStack_58;
    pUVar2 = (__this->fields)._force;
    if (pUVar2 == (UnityEngine_ConstantForce_o *)0x0) goto LAB_03f15c12;
    value_00.fields.z = fStack_48;
    value_00.fields.x = (float)auStack_58._0_4_;
    value_00.fields.y = (float)auStack_58._4_4_;
    auStack_58 = auVar1;
    UnityEngine_ConstantForce__set_force(pUVar2,value_00,(MethodInfo *)0x0);
  }
  __this_02 = Photon_Pun_MonoBehaviourPun__get_photonView
                        ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
  parameters = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,2);
  iStack_5c = charViewId;
  pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&iStack_5c);
  if (parameters == (System_Object_array *)0x0) {
LAB_03f15c12:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (pIVar3 != (Il2CppObject *)0x0) {
    lVar4 = il2cpp_runtime_glue(pIVar3,(((parameters->obj).klass)->_1).element_class);
    if (lVar4 == 0) goto LAB_03f15c1c;
  }
  if ((int)parameters->max_length != 0) {
    parameters->m_Items[0] = pIVar3;
    il2cpp_runtime_glue(parameters->m_Items,pIVar3);
    if (settings != (System_Object_array *)0x0) {
      lVar4 = il2cpp_runtime_glue(settings,(((parameters->obj).klass)->_1).element_class);
      if (lVar4 == 0) {
LAB_03f15c1c:
        uVar5 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
        il2cpp_glue_02274a00(uVar5,0);
      }
    }
    if (1 < (uint)parameters->max_length) {
      parameters->m_Items[1] = &settings->obj;
      il2cpp_runtime_glue(parameters->m_Items + 1,settings);
      if (__this_02 != (Photon_Pun_PhotonView_o *)0x0) {
        Photon_Pun_PhotonView__RPC(__this_02,"SetupRPC",0,parameters,(MethodInfo *)0x0);
        return;
      }
      goto LAB_03f15c12;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Projectiles.BaseProjectile$$SetupRPC
// il2cpp: void Projectiles_BaseProjectile__SetupRPC (Projectiles_BaseProjectile_o* __this, int32_t charViewId, System_Object_array* settings, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x3f15c30

/* WARNING: Removing unreachable block (ram,0x03f15efb) */
/* WARNING: Removing unreachable block (ram,0x03f15f03) */
/* WARNING: Removing unreachable block (ram,0x03f15f77) */

void Projectiles_BaseProjectile__SetupRPC
               (Projectiles_BaseProjectile_o *__this,int32_t charViewId,
               System_Object_array *settings,Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_List_Collider__o *__this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  UnityEngine_Collider_o *collider2;
  bool_conflict bVar2;
  Photon_Pun_PhotonView_o *pPVar3;
  Characters_BaseCharacter_o *pCVar4;
  MethodInfo *method_00;
  _union_247328 _Var5;
  Il2CppType *pIVar6;
  UnityEngine_Collider_o *collider1;
  UnityEngine_Collider_o *pUVar7;
  _union_247328 _Stack_68;
  Il2CppType *pIStack_60;
  UnityEngine_Collider_o *pUStack_58;
  _union_247328 _Stack_48;
  Il2CppType *pIStack_40;
  UnityEngine_Collider_o *pUStack_38;
  
  if (DAT_05703cb8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Collider_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_UnityEngine_Collider__GetEn);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_Physics);
    DAT_05703cb8 = '\x01';
  }
  _Stack_68.genericMethod = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIStack_60 = (Il2CppType *)0x0;
  pUStack_58 = (UnityEngine_Collider_o *)0x0;
  pPVar3 = Photon_Pun_MonoBehaviourPun__get_photonView
                     ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
  if (pPVar3 == (Photon_Pun_PhotonView_o *)0x0) goto LAB_03f15f7f;
  if (info.fields.Sender == (pPVar3->fields)._Owner_k__BackingField) {
    if (charViewId != -1) {
      pPVar3 = Photon_Pun_PhotonView__Find(charViewId,(MethodInfo *)0x0);
      if (pPVar3 == (Photon_Pun_PhotonView_o *)0x0) goto LAB_03f15f7f;
      pCVar4 = (Characters_BaseCharacter_o *)
               UnityEngine_Component__GetComponent<object>
                         ((UnityEngine_Component_o *)pPVar3,MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
      (__this->fields)._owner = pCVar4;
      il2cpp_runtime_glue(&(__this->fields)._owner,pCVar4);
      pCVar4 = (__this->fields)._owner;
      if (pCVar4 == (Characters_BaseCharacter_o *)0x0) goto LAB_03f15f7f;
      (__this->fields)._team = *(System_String_o **)&(pCVar4->fields).AI;
      il2cpp_runtime_glue(&(__this->fields)._team);
    }
    (*(__this->klass->vtable)._14_SetupSettings.methodPtr)
              (__this,settings,(__this->klass->vtable)._14_SetupSettings.method);
    method_00 = (__this->klass->vtable)._15_RegisterObjects.method;
    (*(__this->klass->vtable)._15_RegisterObjects.methodPtr)(__this);
    Projectiles_BaseProjectile__RegisterColliders(__this,method_00);
    pCVar4 = (__this->fields)._owner;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pCVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 != '\0') {
      pCVar4 = (__this->fields)._owner;
      if (((pCVar4 == (Characters_BaseCharacter_o *)0x0) ||
          (lVar1 = *(long *)&(pCVar4->fields).Dead, lVar1 == 0)) ||
         (__this_00 = *(System_Collections_Generic_List_object__o **)(lVar1 + 0x28),
         __this_00 == (System_Collections_Generic_List_object__o *)0x0)) {
LAB_03f15f7f:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      System_Collections_Generic_List<object>__GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&_Stack_48,__this_00,
                 MethodInfo_List_1_T__Enumerator_UnityEngine_Collider__GetEn);
      _Var5 = _Stack_48;
      pIVar6 = pIStack_40;
      collider1 = pUStack_38;
      while (__this_02.fields._8_8_ = pIVar6, __this_02.fields._list = _Var5.genericMethod,
            __this_02.fields._current = (Il2CppObject *)collider1,
            bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                              (__this_02,(MethodInfo_3185E20 *)&stack0xffffffffffffff78),
            (char)bVar2 != '\0') {
        __this_01 = (__this->fields)._colliders;
        if (__this_01 == (System_Collections_Generic_List_Collider__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pUVar7 = collider1;
        System_Collections_Generic_List<object>__GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)&_Stack_48,
                   (System_Collections_Generic_List_object__o *)__this_01,MethodInfo_List_1_T__Enumerator_UnityEngine_Collider__GetEn);
        pUStack_58 = pUStack_38;
        _Stack_68.genericMethod = _Stack_48.genericMethod;
        pIStack_60 = pIStack_40;
        while (__this_03.fields._8_8_ = pIVar6, __this_03.fields._list = _Var5.genericMethod,
              __this_03.fields._current = (Il2CppObject *)pUVar7,
              bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                (__this_03,(MethodInfo_3185E20 *)&_Stack_68), collider2 = pUStack_58
              , (char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
            il2cpp_init_class();
          }
          UnityEngine_Physics__IgnoreCollision(collider1,collider2,(MethodInfo *)0x0);
        }
        __this_04.fields._8_8_ = pIVar6;
        __this_04.fields._list = _Var5.genericMethod;
        __this_04.fields._current = (Il2CppObject *)pUVar7;
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (__this_04,(MethodInfo_3185E10 *)&_Stack_68);
        collider1 = pUVar7;
      }
      __this_05.fields._8_8_ = pIVar6;
      __this_05.fields._list = _Var5.genericMethod;
      __this_05.fields._current = (Il2CppObject *)collider1;
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (__this_05,(MethodInfo_3185E10 *)&stack0xffffffffffffff78);
    }
  }
  return;
}


// Projectiles.BaseProjectile$$SetupSettings
// il2cpp: void Projectiles_BaseProjectile__SetupSettings (Projectiles_BaseProjectile_o* __this, System_Object_array* settings, const MethodInfo* method);
// 0x3f16190

void Projectiles_BaseProjectile__SetupSettings
               (Projectiles_BaseProjectile_o *__this,System_Object_array *settings,
               MethodInfo *method)

{
  return;
}


// Projectiles.BaseProjectile$$RegisterColliders
// il2cpp: void Projectiles_BaseProjectile__RegisterColliders (Projectiles_BaseProjectile_o* __this, const MethodInfo* method);
// 0x3f16010

void Projectiles_BaseProjectile__RegisterColliders
               (Projectiles_BaseProjectile_o *__this,MethodInfo *method)

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
  
  if (DAT_05703cb9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Collider___GetComponentsInChildren_Collider);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&TypeInfo_PhysicsLayer);
    DAT_05703cb9 = '\x01';
  }
  pSVar5 = UnityEngine_Component__GetComponentsInChildren<object>
                     ((UnityEngine_Component_o *)__this,MethodInfo_Collider___GetComponentsInChildren_Collider);
  if (pSVar5 != (System_Object_array *)0x0) {
    uVar4 = (uint)pSVar5->max_length;
    if (0 < (int)uVar4) {
      uVar6 = 0;
      do {
        while( true ) {
          if (uVar4 <= uVar6) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          __this_00 = (UnityEngine_Component_o *)pSVar5->m_Items[(int)uVar6];
          if (__this_00 == (UnityEngine_Component_o *)0x0) goto LAB_03f16178;
          __this_02 = UnityEngine_Component__get_gameObject(__this_00,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (__this_02 == (UnityEngine_GameObject_o *)0x0) goto LAB_03f16178;
          UnityEngine_GameObject__set_layer
                    (__this_02,*(int32_t *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0x1c),(MethodInfo *)0x0
                    );
          lVar3 = MethodInfo_Void_Add;
          __this_01 = (__this->fields)._colliders;
          if (__this_01 == (System_Collections_Generic_List_Collider__o *)0x0) goto LAB_03f16178;
          piVar1 = &(__this_01->fields)._version;
          *piVar1 = *piVar1 + 1;
          pUVar2 = (__this_01->fields)._items;
          if (pUVar2 == (UnityEngine_Collider_array *)0x0) goto LAB_03f16178;
          uVar4 = (__this_01->fields)._size;
          if ((uint)pUVar2->max_length <= uVar4) break;
          (__this_01->fields)._size = uVar4 + 1;
          pUVar2->m_Items[(int)uVar4] = (UnityEngine_Collider_o *)__this_00;
          il2cpp_runtime_glue(pUVar2->m_Items + (int)uVar4);
          uVar6 = uVar6 + 1;
          uVar4 = (uint)pSVar5->max_length;
          if ((int)uVar4 <= (int)uVar6) {
            return;
          }
        }
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)__this_00,
                   *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
        uVar6 = uVar6 + 1;
        uVar4 = (uint)pSVar5->max_length;
      } while ((int)uVar6 < (int)uVar4);
    }
    return;
  }
LAB_03f16178:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Projectiles.BaseProjectile$$IsMine
// il2cpp: bool Projectiles_BaseProjectile__IsMine (Projectiles_BaseProjectile_o* __this, const MethodInfo* method);
// 0x3f161a0

bool_conflict
Projectiles_BaseProjectile__IsMine(Projectiles_BaseProjectile_o *__this,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *pPVar1;
  
  pPVar1 = Photon_Pun_MonoBehaviourPun__get_photonView
                     ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
  if (pPVar1 != (Photon_Pun_PhotonView_o *)0x0) {
    return (bool_conflict)
           CONCAT71((int7)((ulong)pPVar1 >> 8),(char)(pPVar1->fields)._IsMine_k__BackingField);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Projectiles.BaseProjectile$$Update
// il2cpp: void Projectiles_BaseProjectile__Update (Projectiles_BaseProjectile_o* __this, const MethodInfo* method);
// 0x3f161c0

void Projectiles_BaseProjectile__Update(Projectiles_BaseProjectile_o *__this,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *pPVar1;
  Il2CppMethodPointer vtable_dispatch;
  undefined8 extraout_RDX;
  float fVar2;
  float fVar3;
  
  Characters_BaseMovementSync__Update((Characters_BaseMovementSync_o *)__this,(MethodInfo *)0x0);
  pPVar1 = (__this->fields)._photonView;
  if (pPVar1 == (Photon_Pun_PhotonView_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((char)(pPVar1->fields)._IsMine_k__BackingField != '\0') {
    fVar3 = (__this->fields)._timeLeft;
    fVar2 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    fVar3 = fVar3 - fVar2;
    (__this->fields)._timeLeft = fVar3;
    if (fVar3 <= 0.0) {
      vtable_dispatch = (__this->klass->vtable)._16_OnExceedLiveTime.methodPtr;
      (*vtable_dispatch)
                (__this,(__this->klass->vtable)._16_OnExceedLiveTime.method,extraout_RDX,
                 vtable_dispatch);
      return;
    }
  }
  return;
}


// Projectiles.BaseProjectile$$RegisterObjects
// il2cpp: void Projectiles_BaseProjectile__RegisterObjects (Projectiles_BaseProjectile_o* __this, const MethodInfo* method);
// 0x3f16240

void Projectiles_BaseProjectile__RegisterObjects
               (Projectiles_BaseProjectile_o *__this,MethodInfo *method)

{
  return;
}


// Projectiles.BaseProjectile$$OnExceedLiveTime
// il2cpp: void Projectiles_BaseProjectile__OnExceedLiveTime (Projectiles_BaseProjectile_o* __this, const MethodInfo* method);
// 0x3f16250

void Projectiles_BaseProjectile__OnExceedLiveTime
               (Projectiles_BaseProjectile_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  undefined8 in_RDX;
  
  vtable_dispatch = (__this->klass->vtable)._17_DestroySelf.methodPtr;
  (*vtable_dispatch)
            (__this,(__this->klass->vtable)._17_DestroySelf.method,in_RDX,vtable_dispatch);
  return;
}


// Projectiles.BaseProjectile$$DestroySelf
// il2cpp: void Projectiles_BaseProjectile__DestroySelf (Projectiles_BaseProjectile_o* __this, const MethodInfo* method);
// 0x3f16270

void Projectiles_BaseProjectile__DestroySelf
               (Projectiles_BaseProjectile_o *__this,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *pPVar1;
  System_Object_array *parameters;
  System_Collections_IEnumerator_o *routine;
  
  if (DAT_05703cba == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&"DisableRPC");
    DAT_05703cba = '\x01';
  }
  pPVar1 = Photon_Pun_MonoBehaviourPun__get_photonView
                     ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
  if (pPVar1 != (Photon_Pun_PhotonView_o *)0x0) {
    if (((char)(pPVar1->fields)._IsMine_k__BackingField == '\0') ||
       ((char)(__this->fields).Disabled != '\0')) {
      return;
    }
    pPVar1 = Photon_Pun_MonoBehaviourPun__get_photonView
                       ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
    parameters = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,0);
    if (pPVar1 != (Photon_Pun_PhotonView_o *)0x0) {
      Photon_Pun_PhotonView__RPC(pPVar1,"DisableRPC",0,parameters,(MethodInfo *)0x0);
      (*(__this->klass->vtable)._11_get_DestroyDelay.methodPtr)
                (__this,(__this->klass->vtable)._11_get_DestroyDelay.method);
      routine = (System_Collections_IEnumerator_o *)
                (*(__this->klass->vtable)._18_WaitAndFinishDestroyCoroutine.methodPtr)
                          (__this,(__this->klass->vtable)._18_WaitAndFinishDestroyCoroutine.method);
      UnityEngine_MonoBehaviour__StartCoroutine
                ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Projectiles.BaseProjectile$$WaitAndFinishDestroyCoroutine
// il2cpp: System_Collections_IEnumerator_o* Projectiles_BaseProjectile__WaitAndFinishDestroyCoroutine (Projectiles_BaseProjectile_o* __this, float time, const MethodInfo* method);
// 0x3f16350

System_Collections_IEnumerator_o *
Projectiles_BaseProjectile__WaitAndFinishDestroyCoroutine
          (Projectiles_BaseProjectile_o *__this,float time,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_05703cbb == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_WaitAndFinishDestroyCoroutine_d__21);
    DAT_05703cbb = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitAndFinishDestroyCoroutine_d__21);
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


// Projectiles.BaseProjectile$$DisableRPC
// il2cpp: void Projectiles_BaseProjectile__DisableRPC (Projectiles_BaseProjectile_o* __this, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x3f163f0

void Projectiles_BaseProjectile__DisableRPC
               (Projectiles_BaseProjectile_o *__this,Photon_Pun_PhotonMessageInfo_o info,
               MethodInfo *method)

{
  System_Collections_Generic_List_GameObject__o *__this_00;
  System_Collections_Generic_List_Collider__o *__this_01;
  System_Collections_Generic_List_ParticleSystem__o *__this_02;
  UnityEngine_Object_o *x;
  UnityEngine_ConstantForce_o *__this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  System_Collections_Generic_List_Enumerator_object__o __this_07;
  System_Collections_Generic_List_Enumerator_object__o __this_08;
  System_Collections_Generic_List_Enumerator_object__o __this_09;
  bool_conflict bVar1;
  Photon_Pun_PhotonView_o *pPVar2;
  UnityEngine_Rigidbody_o *__this_10;
  MethodInfo *method_00;
  Il2CppMethodPointer pIVar3;
  _union_247328 _Var4;
  Il2CppMethodPointer pIVar5;
  Il2CppType *pIVar6;
  Il2CppObject *pIVar7;
  UnityEngine_ParticleSystem_o *particleSystem;
  _union_247328 local_78;
  Il2CppType *pIStack_70;
  UnityEngine_Collider_o *local_68;
  _union_247328 local_58;
  Il2CppType *pIStack_50;
  UnityEngine_GameObject_o *local_48;
  _union_247328 local_38;
  Il2CppType *pIStack_30;
  UnityEngine_ParticleSystem_o *local_28;
  
  if (DAT_05703cbc == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Rigidbody_GetComponent_Rigidbody);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_ParticleSystem_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_GameObject_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Collider_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_UnityEngine_ParticleSystem);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_UnityEngine_Collider__GetEn);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_UnityEngine_GameObject__Get);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05703cbc = '\x01';
  }
  local_58.genericMethod = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIStack_50 = (Il2CppType *)0x0;
  local_48 = (UnityEngine_GameObject_o *)0x0;
  local_78.genericMethod = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIStack_70 = (Il2CppType *)0x0;
  local_68 = (UnityEngine_Collider_o *)0x0;
  pIVar3 = (Il2CppMethodPointer)0x0;
  pIVar5 = (Il2CppMethodPointer)0x0;
  pIVar7 = (Il2CppObject *)0x0;
  if ((char)(__this->fields).Disabled != '\0') {
    return;
  }
  pPVar2 = Photon_Pun_MonoBehaviourPun__get_photonView
                     ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
  if (pPVar2 != (Photon_Pun_PhotonView_o *)0x0) {
    if (info.fields.Sender != (pPVar2->fields)._Owner_k__BackingField) {
      return;
    }
    __this_00 = (__this->fields)._hideObjects;
    if (__this_00 != (System_Collections_Generic_List_GameObject__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&local_38,
                 (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T__Enumerator_UnityEngine_GameObject__Get);
      local_48 = (UnityEngine_GameObject_o *)local_28;
      local_58 = local_38;
      pIStack_50 = pIStack_30;
      while (__this_04.fields._8_8_ = pIVar5,
            __this_04.fields._list = (System_Collections_Generic_List_T__o *)pIVar3,
            __this_04.fields._current = pIVar7,
            bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                              (__this_04,(MethodInfo_3185E20 *)&local_58), (char)bVar1 != '\0') {
        if (local_48 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        UnityEngine_GameObject__SetActive(local_48,0,(MethodInfo *)0x0);
      }
      __this_05.fields._8_8_ = pIVar5;
      __this_05.fields._list = (System_Collections_Generic_List_T__o *)pIVar3;
      __this_05.fields._current = pIVar7;
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (__this_05,(MethodInfo_3185E10 *)&local_58);
      __this_01 = (__this->fields)._colliders;
      if (__this_01 != (System_Collections_Generic_List_Collider__o *)0x0) {
        System_Collections_Generic_List<object>__GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)&local_38,
                   (System_Collections_Generic_List_object__o *)__this_01,MethodInfo_List_1_T__Enumerator_UnityEngine_Collider__GetEn);
        local_68 = (UnityEngine_Collider_o *)local_28;
        local_78 = local_38;
        pIStack_70 = pIStack_30;
        while (__this_06.fields._8_8_ = pIVar5,
              __this_06.fields._list = (System_Collections_Generic_List_T__o *)pIVar3,
              __this_06.fields._current = pIVar7,
              bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                (__this_06,(MethodInfo_3185E20 *)&local_78), (char)bVar1 != '\0') {
          if (local_68 == (UnityEngine_Collider_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          UnityEngine_Collider__set_enabled(local_68,0,(MethodInfo *)0x0);
        }
        __this_07.fields._8_8_ = pIVar5;
        __this_07.fields._list = (System_Collections_Generic_List_T__o *)pIVar3;
        __this_07.fields._current = pIVar7;
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (__this_07,(MethodInfo_3185E10 *)&local_78);
        __this_02 = (__this->fields)._fadeTrails;
        if (__this_02 != (System_Collections_Generic_List_ParticleSystem__o *)0x0) {
          System_Collections_Generic_List<object>__GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)&local_38,
                     (System_Collections_Generic_List_object__o *)__this_02,MethodInfo_List_1_T__Enumerator_UnityEngine_ParticleSystem);
          _Var4 = local_38;
          pIVar6 = pIStack_30;
          particleSystem = local_28;
          while (__this_08.fields._8_8_ = pIVar6, __this_08.fields._list = _Var4.genericMethod,
                __this_08.fields._current = (Il2CppObject *)particleSystem,
                bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                  (__this_08,(MethodInfo_3185E20 *)&stack0xffffffffffffff68),
                (char)bVar1 != '\0') {
            Projectiles_BaseProjectile__SetDisabledTrailFade(__this,particleSystem,method_00);
          }
          __this_09.fields._8_8_ = pIVar6;
          __this_09.fields._list = _Var4.genericMethod;
          __this_09.fields._current = (Il2CppObject *)particleSystem;
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (__this_09,(MethodInfo_3185E10 *)&stack0xffffffffffffff68);
          __this_10 = (UnityEngine_Rigidbody_o *)
                      UnityEngine_Component__GetComponent<object>
                                ((UnityEngine_Component_o *)__this,MethodInfo_Rigidbody_GetComponent_Rigidbody);
          if (DAT_056fdd15 == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Vector3);
            DAT_056fdd15 = '\x01';
          }
          if (__this_10 != (UnityEngine_Rigidbody_o *)0x0) {
            UnityEngine_Rigidbody__set_velocity
                      (__this_10,
                       (UnityEngine_Vector3_o)**(UnityEngine_Vector3_Fields **)(TypeInfo_Vector3 + 0xb8)
                       ,(MethodInfo *)0x0);
            x = (UnityEngine_Object_o *)(__this->fields)._force;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_init_class();
            }
            bVar1 = UnityEngine_Object__op_Inequality
                              (x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if ((char)bVar1 != '\0') {
              __this_03 = (__this->fields)._force;
              if (DAT_056fdd15 == '\0') {
                il2cpp_init_method_metadata(&TypeInfo_Vector3);
                DAT_056fdd15 = '\x01';
              }
              if (__this_03 == (UnityEngine_ConstantForce_o *)0x0) goto LAB_03f167a0;
              UnityEngine_ConstantForce__set_force
                        (__this_03,
                         (UnityEngine_Vector3_o)
                         **(UnityEngine_Vector3_Fields **)(TypeInfo_Vector3 + 0xb8),(MethodInfo *)0x0);
            }
            *(undefined1 *)&(__this->fields).Disabled = 1;
            return;
          }
        }
      }
    }
  }
LAB_03f167a0:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Projectiles.BaseProjectile$$SetDisabledTrailFade
// il2cpp: void Projectiles_BaseProjectile__SetDisabledTrailFade (Projectiles_BaseProjectile_o* __this, UnityEngine_ParticleSystem_o* particleSystem, const MethodInfo* method);
// 0x3f16930

void Projectiles_BaseProjectile__SetDisabledTrailFade
               (Projectiles_BaseProjectile_o *__this,UnityEngine_ParticleSystem_o *particleSystem,
               MethodInfo *method)

{
  UnityEngine_ParticleSystem_Particle_o __this_00;
  UnityEngine_ParticleSystem_Particle_o __this_01;
  UnityEngine_ParticleSystem_Particle_o __this_02;
  uint size;
  UnityEngine_ParticleSystem_Particle_array *particles;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  MethodInfo *method_00;
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
  
  if (DAT_05703cbd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Particle);
    DAT_05703cbd = '\x01';
  }
  if (particleSystem != (UnityEngine_ParticleSystem_o *)0x0) {
    size = UnityEngine_ParticleSystem__get_particleCount(particleSystem,(MethodInfo *)0x0);
    fVar3 = UnityEngine_ParticleSystem__get_startLifetime(particleSystem,(MethodInfo *)0x0);
    fVar4 = (float)(*(__this->klass->vtable)._10_get_TrailFadeMultiplier.methodPtr)
                             (__this,(__this->klass->vtable)._10_get_TrailFadeMultiplier.method);
    particles = (UnityEngine_ParticleSystem_Particle_array *)il2cpp_glue_02274930(TypeInfo_Particle,size);
    UnityEngine_ParticleSystem__GetParticles(particleSystem,particles,(MethodInfo *)0x0);
    if (0 < (int)size) {
      if (particles == (UnityEngine_ParticleSystem_Particle_array *)0x0) goto LAB_03f16a88;
      fVar3 = fVar3 * fVar4;
      uVar1 = (ulong)size;
      method_00 = (MethodInfo *)particles->m_Items;
      uVar2 = 0;
      do {
        if ((uint)particles->max_length <= uVar2) {
LAB_03f16a83:
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
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
        fVar4 = UnityEngine_ParticleSystem_Particle__get_remainingLifetime(__this_00,method_00);
        fVar5 = (float)(*(__this->klass->vtable)._10_get_TrailFadeMultiplier.methodPtr)
                                 (__this,(__this->klass->vtable)._10_get_TrailFadeMultiplier.method)
        ;
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
        UnityEngine_ParticleSystem_Particle__set_remainingLifetime
                  (__this_01,fVar5 * fVar4,method_00);
        if ((uint)particles->max_length <= uVar2) goto LAB_03f16a83;
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
        UnityEngine_ParticleSystem_Particle__set_startLifetime(__this_02,fVar3,method_00);
        uVar2 = uVar2 + 1;
        method_00 = (MethodInfo *)((long)&method_00[1].return_type + 4);
      } while (uVar1 != uVar2);
    }
    UnityEngine_ParticleSystem__SetParticles(particleSystem,particles,size,(MethodInfo *)0x0);
    return;
  }
LAB_03f16a88:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Projectiles.BaseProjectile$$.ctor
// il2cpp: void Projectiles_BaseProjectile___ctor (Projectiles_BaseProjectile_o* __this, const MethodInfo* method);
// 0x3f16a90

void Projectiles_BaseProjectile___ctor(Projectiles_SmokeBombProjectile_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GameObject__o *__this_00;
  System_Collections_Generic_List_Collider__o *__this_01;
  System_Collections_Generic_List_ParticleSystem__o *__this_02;
  
  if (DAT_05703cbe == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_List_1_UnityEngine_Collider);
    il2cpp_init_method_metadata(&MethodInfo_List_1_UnityEngine_ParticleSystem);
    il2cpp_init_method_metadata(&MethodInfo_List_1_UnityEngine_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_List_Collider);
    il2cpp_init_method_metadata(&TypeInfo_List_ParticleSystem);
    il2cpp_init_method_metadata(&TypeInfo_List_GameObject);
    DAT_05703cbe = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_GameObject__o *)il2cpp_runtime_glue(TypeInfo_List_GameObject);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_UnityEngine_GameObject);
  (__this->fields)._hideObjects = __this_00;
  il2cpp_runtime_glue(&(__this->fields)._hideObjects,__this_00);
  __this_01 = (System_Collections_Generic_List_Collider__o *)il2cpp_runtime_glue(TypeInfo_List_Collider);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,MethodInfo_List_1_UnityEngine_Collider);
  (__this->fields)._colliders = __this_01;
  il2cpp_runtime_glue(&(__this->fields)._colliders,__this_01);
  __this_02 = (System_Collections_Generic_List_ParticleSystem__o *)il2cpp_runtime_glue(TypeInfo_List_ParticleSystem);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_02,MethodInfo_List_1_UnityEngine_ParticleSystem);
  (__this->fields)._fadeTrails = __this_02;
  il2cpp_runtime_glue(&(__this->fields)._fadeTrails);
  Characters_BaseMovementSync___ctor((Characters_BaseMovementSync_o *)__this,(MethodInfo *)0x0);
  return;
}


