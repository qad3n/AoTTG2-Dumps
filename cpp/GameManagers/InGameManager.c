// Type: GameManagers.InGameManager
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/GameManagers/InGameManager.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/GameManagers/InGameManager.cs  [CHANGED since prior version]
// --------------------------------

// GameManagers.InGameManager.<>c$$.cctor
// il2cpp: void GameManagers_InGameManager___c___cctor (const MethodInfo* method);
// 0x42323e0

void GameManagers_InGameManager_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_0570512e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_0570512e = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// GameManagers.InGameManager.<>c$$.ctor
// il2cpp: void GameManagers_InGameManager___c___ctor (GameManagers_InGameManager___c_o* __this, const MethodInfo* method);
// 0x4232450

void GameManagers_InGameManager_<>c___ctor
               (GameManagers_InGameManager___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// GameManagers.InGameManager.<>c$$<GetAllNonAICharacters>b__33_0
// il2cpp: bool GameManagers_InGameManager___c___GetAllNonAICharacters_b__33_0 (GameManagers_InGameManager___c_o* __this, Characters_BaseCharacter_o* x, const MethodInfo* method);
// 0x4232460

bool_conflict
GameManagers_InGameManager_<>c__<GetAllNonAICharacters>b__33_0
          (GameManagers_InGameManager___c_o *__this,Characters_BaseCharacter_o *x,MethodInfo *method
          )

{
  undefined4 in_EAX;
  
  if (x != (Characters_BaseCharacter_o *)0x0) {
    return CONCAT31((int3)((uint)in_EAX >> 8),(char)(x->fields).CustomDamage == '\0');
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.InGameManager.<>c$$<GetTitanSpawnPositions>b__74_0
// il2cpp: System_ValueTuple_Vector3__Quaternion__o GameManagers_InGameManager___c___GetTitanSpawnPositions_b__74_0 (GameManagers_InGameManager___c_o* __this, UnityEngine_Transform_o* xform, const MethodInfo* method);
// 0x4232480

System_ValueTuple_Vector3__Quaternion__o *
GameManagers_InGameManager_<>c__<GetTitanSpawnPositions>b__74_0
          (System_ValueTuple_Vector3__Quaternion__o *__return_storage_ptr__,
          GameManagers_InGameManager___c_o *__this,UnityEngine_Transform_o *xform,MethodInfo *method
          )

{
  System_ValueTuple_Vector3__Quaternion__o __this_00;
  float extraout_XMM0_Dc;
  UnityEngine_Vector3_o UVar2;
  UnityEngine_Quaternion_o item2;
  undefined1 in_stack_ffffffffffffffc8 [12];
  undefined8 uVar3;
  float fVar4;
  float fVar1;
  
  if (DAT_0570512f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_ValueTuple_2_UnityEngine_Vector3_UnityEngine_Qua);
    DAT_0570512f = '\x01';
  }
  if (xform != (UnityEngine_Transform_o *)0x0) {
    UVar2 = UnityEngine_Transform__get_position(xform,(MethodInfo *)0x0);
    fVar1 = UVar2.fields.z;
    uVar3 = UVar2.fields._0_8_;
    fVar4 = extraout_XMM0_Dc;
    item2 = UnityEngine_Transform__get_rotation(xform,(MethodInfo *)0x0);
    (__return_storage_ptr__->fields).Item1.fields.x = 0.0;
    (__return_storage_ptr__->fields).Item1.fields.y = 0.0;
    *(undefined8 *)&(__return_storage_ptr__->fields).Item1.fields.z = 0;
    (__return_storage_ptr__->fields).Item2.fields.x = 0.0;
    (__return_storage_ptr__->fields).Item2.fields.y = 0.0;
    (__return_storage_ptr__->fields).Item2.fields.z = 0.0;
    (__return_storage_ptr__->fields).Item2.fields.w = 0.0;
    __this_00.fields.Item2.fields.x = fVar1;
    __this_00.fields.Item1.fields.x = (float)in_stack_ffffffffffffffc8._0_4_;
    __this_00.fields.Item1.fields.y = (float)in_stack_ffffffffffffffc8._4_4_;
    __this_00.fields.Item1.fields.z = (float)in_stack_ffffffffffffffc8._8_4_;
    __this_00.fields.Item2.fields.y = (float)(int)uVar3;
    __this_00.fields.Item2.fields.z = (float)(int)((ulong)uVar3 >> 0x20);
    __this_00.fields.Item2.fields.w = fVar4;
    UVar2.fields.z = fVar1;
    UVar2.fields.x = (float)(int)uVar3;
    UVar2.fields.y = (float)(int)((ulong)uVar3 >> 0x20);
    System_ValueTuple<Vector3__Quaternion>___ctor
              (__this_00,UVar2,item2,(MethodInfo_2B4ED10 *)__return_storage_ptr__);
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.InGameManager.<>c__DisplayClass69_0$$.ctor
// il2cpp: void GameManagers_InGameManager___c__DisplayClass69_0___ctor (GameManagers_InGameManager___c__DisplayClass69_0_o* __this, const MethodInfo* method);
// 0x4232510

void GameManagers_InGameManager_<>c__DisplayClass69_0___ctor
               (GameManagers_InGameManager___c__DisplayClass69_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// GameManagers.InGameManager.<>c__DisplayClass69_0$$<SpawnAITitans>b__0
// il2cpp: Characters_BasicTitan_o* GameManagers_InGameManager___c__DisplayClass69_0___SpawnAITitans_b__0 (GameManagers_InGameManager___c__DisplayClass69_0_o* __this, System_ValueTuple_Vector3__Quaternion__o p, const MethodInfo* method);
// 0x4232520

Characters_BasicTitan_o *
GameManagers_InGameManager_<>c__DisplayClass69_0__<SpawnAITitans>b__0
          (GameManagers_InGameManager___c__DisplayClass69_0_o *__this,
          System_ValueTuple_Vector3__Quaternion__o p,MethodInfo *method)

{
  GameManagers_InGameManager_o *__this_00;
  System_String_o *type;
  Characters_BasicTitan_o *pCVar1;
  float fVar2;
  UnityEngine_Vector3_o UVar3;
  UnityEngine_Vector3_o euler;
  
  __this_00 = (__this->fields).__4__this;
  type = (__this->fields).type;
  fVar2 = p.fields.Item2.fields.w;
  UVar3 = UnityEngine_Quaternion__Internal_ToEulerRad(p.fields.Item2.fields,(MethodInfo *)0x0);
  euler.fields.x = UVar3.fields.x * 57.29578;
  euler.fields.y = UVar3.fields.y * 57.29578;
  euler.fields.z = UVar3.fields.z * 57.29578;
  UVar3 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
  if (__this_00 != (GameManagers_InGameManager_o *)0x0) {
    pCVar1 = GameManagers_InGameManager__SpawnAITitanAt
                       (__this_00,type,p.fields.Item1.fields,UVar3.fields.y,(MethodInfo *)0x0);
    return pCVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception(UVar3.fields.x,CONCAT44(fVar2,UVar3.fields.z));
}


// GameManagers.InGameManager.<FinishRestartGame>d__42$$.ctor
// il2cpp: void GameManagers_InGameManager__FinishRestartGame_d__42___ctor (GameManagers_InGameManager__FinishRestartGame_d__42_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x42325a0

void GameManagers_InGameManager_<FinishRestartGame>d__42___ctor
               (GameManagers_InGameManager__FinishRestartGame_d__42_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// GameManagers.InGameManager.<FinishRestartGame>d__42$$System.IDisposable.Dispose
// il2cpp: void GameManagers_InGameManager__FinishRestartGame_d__42__System_IDisposable_Dispose (GameManagers_InGameManager__FinishRestartGame_d__42_o* __this, const MethodInfo* method);
// 0x42325c0

void GameManagers_InGameManager_<FinishRestartGame>d__42__System_IDisposable_Dispose
               (GameManagers_InGameManager__FinishRestartGame_d__42_o *__this,MethodInfo *method)

{
  return;
}


// GameManagers.InGameManager.<FinishRestartGame>d__42$$MoveNext
// il2cpp: bool GameManagers_InGameManager__FinishRestartGame_d__42__MoveNext (GameManagers_InGameManager__FinishRestartGame_d__42_o* __this, const MethodInfo* method);
// 0x42325d0

bool_conflict
GameManagers_InGameManager_<FinishRestartGame>d__42__MoveNext
          (GameManagers_InGameManager__FinishRestartGame_d__42_o *__this,MethodInfo *method)

{
  int iVar1;
  Photon_Pun_PhotonView_o *__this_00;
  long lVar2;
  System_Object_array *parameters;
  UnityEngine_WaitForSeconds_o *__this_01;
  Il2CppObject *__this_02;
  bool_conflict bVar3;
  
  if (DAT_05705130 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_RPCManager);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    il2cpp_init_method_metadata(&TypeInfo_WaitForEndOfFrame);
    il2cpp_init_method_metadata(&TypeInfo_WaitForSeconds);
    il2cpp_init_method_metadata(&"RestartGameRPC");
    DAT_05705130 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 - 1U < 2) {
    (__this->fields).__1__state = -1;
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_init_class();
    }
    Photon_Pun_PhotonNetwork__DestroyAll((MethodInfo *)0x0);
    __this_00 = (Photon_Pun_PhotonView_o *)**(undefined8 **)(TypeInfo_RPCManager + 0xb8);
    parameters = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,0);
    if (__this_00 == (Photon_Pun_PhotonView_o *)0x0) {
LAB_04232786:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    bVar3 = 0;
    Photon_Pun_PhotonView__RPC(__this_00,"RestartGameRPC",0,parameters,(MethodInfo *)0x0);
  }
  else if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
    if ((lVar2 == 0) || (lVar2 = *(long *)(lVar2 + 0x130), lVar2 == 0)) goto LAB_04232786;
    if (*(char *)(lVar2 + 0x11) == '\0') {
      __this_02 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitForEndOfFrame);
      UnityEngine_WaitForEndOfFrame___ctor
                ((UnityEngine_WaitForEndOfFrame_o *)__this_02,(MethodInfo *)0x0);
      (__this->fields).__2__current = __this_02;
      il2cpp_runtime_glue(&(__this->fields).__2__current,__this_02);
      (__this->fields).__1__state = 2;
    }
    else {
      __this_01 = (UnityEngine_WaitForSeconds_o *)il2cpp_runtime_glue(TypeInfo_WaitForSeconds);
      UnityEngine_WaitForSeconds___ctor(__this_01,0.2,(MethodInfo *)0x0);
      (__this->fields).__2__current = (Il2CppObject *)__this_01;
      il2cpp_runtime_glue(&(__this->fields).__2__current,__this_01);
      (__this->fields).__1__state = 1;
    }
    bVar3 = (bool_conflict)CONCAT71((int7)((ulong)__this >> 8),1);
  }
  else {
    bVar3 = 0;
  }
  return bVar3;
}


// GameManagers.InGameManager.<FinishRestartGame>d__42$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* GameManagers_InGameManager__FinishRestartGame_d__42__System_Collections_Generic_IEnumerator_System_Object__get_Current (GameManagers_InGameManager__FinishRestartGame_d__42_o* __this, const MethodInfo* method);
// 0x4232790

Il2CppObject *
GameManagers_InGameManager_<FinishRestartGame>d__42__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (GameManagers_InGameManager__FinishRestartGame_d__42_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// GameManagers.InGameManager.<FinishRestartGame>d__42$$System.Collections.IEnumerator.Reset
// il2cpp: void GameManagers_InGameManager__FinishRestartGame_d__42__System_Collections_IEnumerator_Reset (GameManagers_InGameManager__FinishRestartGame_d__42_o* __this, const MethodInfo* method);
// 0x42327a0

void GameManagers_InGameManager_<FinishRestartGame>d__42__System_Collections_IEnumerator_Reset
               (GameManagers_InGameManager__FinishRestartGame_d__42_o *__this,MethodInfo *method)

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


// GameManagers.InGameManager.<FinishRestartGame>d__42$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* GameManagers_InGameManager__FinishRestartGame_d__42__System_Collections_IEnumerator_get_Current (GameManagers_InGameManager__FinishRestartGame_d__42_o* __this, const MethodInfo* method);
// 0x42327e0

Il2CppObject *
GameManagers_InGameManager_<FinishRestartGame>d__42__System_Collections_IEnumerator_get_Current
          (GameManagers_InGameManager__FinishRestartGame_d__42_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// GameManagers.InGameManager.<GetAllCharactersEnumerable>d__32$$.ctor
// il2cpp: void GameManagers_InGameManager__GetAllCharactersEnumerable_d__32___ctor (GameManagers_InGameManager__GetAllCharactersEnumerable_d__32_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x42327f0

void GameManagers_InGameManager_<GetAllCharactersEnumerable>d__32___ctor
               (GameManagers_InGameManager__GetAllCharactersEnumerable_d__32_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  int32_t iVar1;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  iVar1 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  (__this->fields).__l__initialThreadId = iVar1;
  return;
}


// GameManagers.InGameManager.<GetAllCharactersEnumerable>d__32$$System.IDisposable.Dispose
// il2cpp: void GameManagers_InGameManager__GetAllCharactersEnumerable_d__32__System_IDisposable_Dispose (GameManagers_InGameManager__GetAllCharactersEnumerable_d__32_o* __this, const MethodInfo* method);
// 0x4232820

void GameManagers_InGameManager_<GetAllCharactersEnumerable>d__32__System_IDisposable_Dispose
               (GameManagers_InGameManager__GetAllCharactersEnumerable_d__32_o *__this,
               MethodInfo *method)

{
  uint uVar1;
  undefined1 in_stack_00000008 [24];
  
  uVar1 = (__this->fields).__1__state + 5;
  if (uVar1 < 9) {
    if ((0x44U >> (uVar1 & 0x1f) & 1) != 0) {
      if (DAT_05705132 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
        DAT_05705132 = '\x01';
      }
      (__this->fields).__1__state = -1;
      System_Collections_Generic_HashSet_Enumerator<object>__Dispose
                ((System_Collections_Generic_HashSet_Enumerator_T__o)in_stack_00000008,
                 (MethodInfo_3185880 *)&(__this->fields).__7__wrap1);
      return;
    }
    if ((0x82U >> (uVar1 & 0x1f) & 1) != 0) {
      if (DAT_05705133 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
        DAT_05705133 = '\x01';
      }
      (__this->fields).__1__state = -1;
      System_Collections_Generic_HashSet_Enumerator<object>__Dispose
                ((System_Collections_Generic_HashSet_Enumerator_T__o)in_stack_00000008,
                 (MethodInfo_3185880 *)&(__this->fields).__7__wrap2);
      return;
    }
    if ((0x101U >> (uVar1 & 0x1f) & 1) != 0) {
      if (DAT_05705134 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
        DAT_05705134 = '\x01';
      }
      (__this->fields).__1__state = -1;
      System_Collections_Generic_HashSet_Enumerator<object>__Dispose
                ((System_Collections_Generic_HashSet_Enumerator_T__o)in_stack_00000008,
                 (MethodInfo_3185880 *)&(__this->fields).__7__wrap3);
      return;
    }
  }
  return;
}


// GameManagers.InGameManager.<GetAllCharactersEnumerable>d__32$$MoveNext
// il2cpp: bool GameManagers_InGameManager__GetAllCharactersEnumerable_d__32__MoveNext (GameManagers_InGameManager__GetAllCharactersEnumerable_d__32_o* __this, const MethodInfo* method);
// 0x4232910

bool_conflict
GameManagers_InGameManager_<GetAllCharactersEnumerable>d__32__MoveNext
          (GameManagers_InGameManager__GetAllCharactersEnumerable_d__32_o *__this,MethodInfo *method
          )

{
  uint uVar1;
  GameManagers_InGameManager_o *pGVar2;
  Characters_Human_o *x;
  Characters_BasicTitan_o *x_00;
  System_Collections_Generic_HashSet_object__o *pSVar3;
  Characters_BaseShifter_o *x_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_00;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_04;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_05;
  bool_conflict bVar4;
  GameManagers_InGameManager__GetAllCharactersEnumerable_d__32_o *pGVar5;
  GameManagers_InGameManager__GetAllCharactersEnumerable_d__32_o *pGVar6;
  undefined4 in_stack_ffffffffffffffb0;
  undefined4 in_stack_ffffffffffffffb4;
  int32_t in_stack_ffffffffffffffb8;
  int32_t in_stack_ffffffffffffffbc;
  Characters_Human_o *local_40;
  
  pGVar5 = __this;
  if (DAT_05705131 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_BasicTitan_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Human_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_BaseShifter_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_T__Enumerator_Characters_Human__GetEnu);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_T__Enumerator_Characters_BasicTitan__G);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_T__Enumerator_Characters_BaseShifter);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05705131 = '\x01';
  }
  uVar1 = (__this->fields).__1__state;
  if (uVar1 < 4) {
    pGVar2 = (__this->fields).__4__this;
    switch(uVar1) {
    case 0:
      (__this->fields).__1__state = -1;
      if (pGVar2 == (GameManagers_InGameManager_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pSVar3 = (System_Collections_Generic_HashSet_object__o *)(pGVar2->fields).Humans;
      if (pSVar3 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      System_Collections_Generic_HashSet<object>__GetEnumerator
                ((System_Collections_Generic_HashSet_Enumerator_T__o *)&stack0xffffffffffffffb0,
                 pSVar3,MethodInfo_HashSet_1_T__Enumerator_Characters_Human__GetEnu);
      (pGVar5->fields).__7__wrap1.fields._current = local_40;
      *(undefined4 *)&(pGVar5->fields).__7__wrap1.fields._set = in_stack_ffffffffffffffb0;
      *(undefined4 *)((long)&(pGVar5->fields).__7__wrap1.fields._set + 4) =
           in_stack_ffffffffffffffb4;
      (pGVar5->fields).__7__wrap1.fields._index = in_stack_ffffffffffffffb8;
      (pGVar5->fields).__7__wrap1.fields._version = in_stack_ffffffffffffffbc;
      __this = pGVar5;
      il2cpp_runtime_glue(&(pGVar5->fields).__7__wrap1,0);
      pGVar5 = __this;
    case 1:
      (__this->fields).__1__state = -3;
      do {
        do {
          __this_00.fields._index = in_stack_ffffffffffffffb0;
          __this_00.fields._set = (System_Collections_Generic_HashSet_T__o *)pGVar5;
          __this_00.fields._version = in_stack_ffffffffffffffb4;
          __this_00.fields._current._0_4_ = in_stack_ffffffffffffffb8;
          __this_00.fields._current._4_4_ = in_stack_ffffffffffffffbc;
          bVar4 = System_Collections_Generic_HashSet_Enumerator<object>__MoveNext
                            (__this_00,(MethodInfo_3185890 *)&(__this->fields).__7__wrap1);
          __this = pGVar5;
          if ((char)bVar4 == '\0') {
            if (DAT_05705132 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
              DAT_05705132 = '\x01';
            }
            (pGVar5->fields).__1__state = -1;
            __this_01.fields._index = in_stack_ffffffffffffffb0;
            __this_01.fields._set = (System_Collections_Generic_HashSet_T__o *)__this;
            __this_01.fields._version = in_stack_ffffffffffffffb4;
            __this_01.fields._current._0_4_ = in_stack_ffffffffffffffb8;
            __this_01.fields._current._4_4_ = in_stack_ffffffffffffffbc;
            System_Collections_Generic_HashSet_Enumerator<object>__Dispose
                      (__this_01,(MethodInfo_3185880 *)&(pGVar5->fields).__7__wrap1);
            (__this->fields).__7__wrap1.fields._set = (System_Collections_Generic_HashSet_T__o *)0x0
            ;
            (__this->fields).__7__wrap1.fields._index = 0;
            (__this->fields).__7__wrap1.fields._version = 0;
            (__this->fields).__7__wrap1.fields._current = (Characters_Human_o *)0x0;
            if (pGVar2 == (GameManagers_InGameManager_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            pSVar3 = (System_Collections_Generic_HashSet_object__o *)(pGVar2->fields).Titans;
            if (pSVar3 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            System_Collections_Generic_HashSet<object>__GetEnumerator
                      ((System_Collections_Generic_HashSet_Enumerator_T__o *)
                       &stack0xffffffffffffffb0,pSVar3,MethodInfo_HashSet_1_T__Enumerator_Characters_BasicTitan__G);
            (__this->fields).__7__wrap2.fields._current = (Characters_BasicTitan_o *)local_40;
            *(undefined4 *)&(__this->fields).__7__wrap2.fields._set = in_stack_ffffffffffffffb0;
            *(undefined4 *)((long)&(__this->fields).__7__wrap2.fields._set + 4) =
                 in_stack_ffffffffffffffb4;
            (__this->fields).__7__wrap2.fields._index = in_stack_ffffffffffffffb8;
            (__this->fields).__7__wrap2.fields._version = in_stack_ffffffffffffffbc;
            il2cpp_runtime_glue(&(__this->fields).__7__wrap2,0);
            pGVar5 = __this;
            goto switchD_042329c9_caseD_2;
          }
          x = (pGVar5->fields).__7__wrap1.fields._current;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
            __this = pGVar5;
          }
          bVar4 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                            );
          pGVar5 = __this;
        } while ((char)bVar4 == '\0');
        if (x == (Characters_Human_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
      } while (*(char *)&(x->fields).FeedVictimName != '\0');
      (__this->fields).__2__current = (Characters_BaseCharacter_o *)x;
      il2cpp_runtime_glue(&(__this->fields).__2__current,x);
      (__this->fields).__1__state = 1;
      bVar4 = (bool_conflict)CONCAT71((int7)((ulong)__this >> 8),1);
      break;
    case 2:
switchD_042329c9_caseD_2:
      (__this->fields).__1__state = -4;
      do {
        do {
          __this_02.fields._index = in_stack_ffffffffffffffb0;
          __this_02.fields._set = (System_Collections_Generic_HashSet_T__o *)pGVar5;
          __this_02.fields._version = in_stack_ffffffffffffffb4;
          __this_02.fields._current._0_4_ = in_stack_ffffffffffffffb8;
          __this_02.fields._current._4_4_ = in_stack_ffffffffffffffbc;
          bVar4 = System_Collections_Generic_HashSet_Enumerator<object>__MoveNext
                            (__this_02,(MethodInfo_3185890 *)&(__this->fields).__7__wrap2);
          __this = pGVar5;
          if ((char)bVar4 == '\0') {
            if (DAT_05705133 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
              DAT_05705133 = '\x01';
            }
            (pGVar5->fields).__1__state = -1;
            __this_03.fields._index = in_stack_ffffffffffffffb0;
            __this_03.fields._set = (System_Collections_Generic_HashSet_T__o *)__this;
            __this_03.fields._version = in_stack_ffffffffffffffb4;
            __this_03.fields._current._0_4_ = in_stack_ffffffffffffffb8;
            __this_03.fields._current._4_4_ = in_stack_ffffffffffffffbc;
            System_Collections_Generic_HashSet_Enumerator<object>__Dispose
                      (__this_03,(MethodInfo_3185880 *)&(pGVar5->fields).__7__wrap2);
            (__this->fields).__7__wrap2.fields._set = (System_Collections_Generic_HashSet_T__o *)0x0
            ;
            (__this->fields).__7__wrap2.fields._index = 0;
            (__this->fields).__7__wrap2.fields._version = 0;
            (__this->fields).__7__wrap2.fields._current = (Characters_BasicTitan_o *)0x0;
            if (pGVar2 == (GameManagers_InGameManager_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            pSVar3 = (System_Collections_Generic_HashSet_object__o *)(pGVar2->fields).Shifters;
            if (pSVar3 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            System_Collections_Generic_HashSet<object>__GetEnumerator
                      ((System_Collections_Generic_HashSet_Enumerator_T__o *)
                       &stack0xffffffffffffffb0,pSVar3,MethodInfo_HashSet_1_T__Enumerator_Characters_BaseShifter);
            (__this->fields).__7__wrap3.fields._current = (Characters_BaseShifter_o *)local_40;
            *(undefined4 *)&(__this->fields).__7__wrap3.fields._set = in_stack_ffffffffffffffb0;
            *(undefined4 *)((long)&(__this->fields).__7__wrap3.fields._set + 4) =
                 in_stack_ffffffffffffffb4;
            (__this->fields).__7__wrap3.fields._index = in_stack_ffffffffffffffb8;
            (__this->fields).__7__wrap3.fields._version = in_stack_ffffffffffffffbc;
            il2cpp_runtime_glue(&(__this->fields).__7__wrap3,0);
            pGVar5 = __this;
            goto switchD_042329c9_caseD_3;
          }
          x_00 = (pGVar5->fields).__7__wrap2.fields._current;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
            __this = pGVar5;
          }
          bVar4 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,
                             (MethodInfo *)0x0);
          pGVar5 = __this;
        } while ((char)bVar4 == '\0');
        if (x_00 == (Characters_BasicTitan_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
      } while (*(char *)&(x_00->fields).FeedVictimName != '\0');
      (__this->fields).__2__current = (Characters_BaseCharacter_o *)x_00;
      il2cpp_runtime_glue(&(__this->fields).__2__current,x_00);
      (__this->fields).__1__state = 2;
      bVar4 = (bool_conflict)CONCAT71((int7)((ulong)__this >> 8),1);
      break;
    case 3:
switchD_042329c9_caseD_3:
      (__this->fields).__1__state = -5;
      do {
        do {
          __this_04.fields._index = in_stack_ffffffffffffffb0;
          __this_04.fields._set = (System_Collections_Generic_HashSet_T__o *)pGVar5;
          __this_04.fields._version = in_stack_ffffffffffffffb4;
          __this_04.fields._current._0_4_ = in_stack_ffffffffffffffb8;
          __this_04.fields._current._4_4_ = in_stack_ffffffffffffffbc;
          bVar4 = System_Collections_Generic_HashSet_Enumerator<object>__MoveNext
                            (__this_04,(MethodInfo_3185890 *)&(__this->fields).__7__wrap3);
          if ((char)bVar4 == '\0') {
            pGVar6 = pGVar5;
            if (DAT_05705134 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
              DAT_05705134 = '\x01';
            }
            (pGVar5->fields).__1__state = -1;
            __this_05.fields._index = in_stack_ffffffffffffffb0;
            __this_05.fields._set = (System_Collections_Generic_HashSet_T__o *)pGVar6;
            __this_05.fields._version = in_stack_ffffffffffffffb4;
            __this_05.fields._current._0_4_ = in_stack_ffffffffffffffb8;
            __this_05.fields._current._4_4_ = in_stack_ffffffffffffffbc;
            System_Collections_Generic_HashSet_Enumerator<object>__Dispose
                      (__this_05,(MethodInfo_3185880 *)&(pGVar5->fields).__7__wrap3);
            (pGVar6->fields).__7__wrap3.fields._set = (System_Collections_Generic_HashSet_T__o *)0x0
            ;
            (pGVar6->fields).__7__wrap3.fields._index = 0;
            (pGVar6->fields).__7__wrap3.fields._version = 0;
            (pGVar6->fields).__7__wrap3.fields._current = (Characters_BaseShifter_o *)0x0;
            goto LAB_04232d8e;
          }
          x_01 = (pGVar5->fields).__7__wrap3.fields._current;
          __this = pGVar5;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
            __this = pGVar5;
          }
          bVar4 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)x_01,(UnityEngine_Object_o *)0x0,
                             (MethodInfo *)0x0);
          pGVar5 = __this;
        } while ((char)bVar4 == '\0');
        if (x_01 == (Characters_BaseShifter_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
      } while (*(char *)&(x_01->fields).FeedVictimName != '\0');
      (__this->fields).__2__current = (Characters_BaseCharacter_o *)x_01;
      il2cpp_runtime_glue(&(__this->fields).__2__current,x_01);
      (__this->fields).__1__state = 3;
      bVar4 = (bool_conflict)CONCAT71((int7)((ulong)__this >> 8),1);
    }
  }
  else {
LAB_04232d8e:
    bVar4 = 0;
  }
  return bVar4;
}


// GameManagers.InGameManager.<GetAllCharactersEnumerable>d__32$$<>m__Finally1
// il2cpp: void GameManagers_InGameManager__GetAllCharactersEnumerable_d__32____m__Finally1 (GameManagers_InGameManager__GetAllCharactersEnumerable_d__32_o* __this, const MethodInfo* method);
// 0x4232f40

void GameManagers_InGameManager_<GetAllCharactersEnumerable>d__32__<>m__Finally1
               (GameManagers_InGameManager__GetAllCharactersEnumerable_d__32_o *__this,
               MethodInfo *method)

{
  undefined1 in_stack_00000008 [24];
  
  if (DAT_05705132 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    DAT_05705132 = '\x01';
  }
  (__this->fields).__1__state = -1;
  System_Collections_Generic_HashSet_Enumerator<object>__Dispose
            ((System_Collections_Generic_HashSet_Enumerator_T__o)in_stack_00000008,
             (MethodInfo_3185880 *)&(__this->fields).__7__wrap1);
  return;
}


// GameManagers.InGameManager.<GetAllCharactersEnumerable>d__32$$<>m__Finally2
// il2cpp: void GameManagers_InGameManager__GetAllCharactersEnumerable_d__32____m__Finally2 (GameManagers_InGameManager__GetAllCharactersEnumerable_d__32_o* __this, const MethodInfo* method);
// 0x4232f80

void GameManagers_InGameManager_<GetAllCharactersEnumerable>d__32__<>m__Finally2
               (GameManagers_InGameManager__GetAllCharactersEnumerable_d__32_o *__this,
               MethodInfo *method)

{
  undefined1 in_stack_00000008 [24];
  
  if (DAT_05705133 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    DAT_05705133 = '\x01';
  }
  (__this->fields).__1__state = -1;
  System_Collections_Generic_HashSet_Enumerator<object>__Dispose
            ((System_Collections_Generic_HashSet_Enumerator_T__o)in_stack_00000008,
             (MethodInfo_3185880 *)&(__this->fields).__7__wrap2);
  return;
}


// GameManagers.InGameManager.<GetAllCharactersEnumerable>d__32$$<>m__Finally3
// il2cpp: void GameManagers_InGameManager__GetAllCharactersEnumerable_d__32____m__Finally3 (GameManagers_InGameManager__GetAllCharactersEnumerable_d__32_o* __this, const MethodInfo* method);
// 0x4232fc0

void GameManagers_InGameManager_<GetAllCharactersEnumerable>d__32__<>m__Finally3
               (GameManagers_InGameManager__GetAllCharactersEnumerable_d__32_o *__this,
               MethodInfo *method)

{
  undefined1 in_stack_00000008 [24];
  
  if (DAT_05705134 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    DAT_05705134 = '\x01';
  }
  (__this->fields).__1__state = -1;
  System_Collections_Generic_HashSet_Enumerator<object>__Dispose
            ((System_Collections_Generic_HashSet_Enumerator_T__o)in_stack_00000008,
             (MethodInfo_3185880 *)&(__this->fields).__7__wrap3);
  return;
}


// GameManagers.InGameManager.<GetAllCharactersEnumerable>d__32$$System.Collections.Generic.IEnumerator<Characters.BaseCharacter>.get_Current
// il2cpp: Characters_BaseCharacter_o* GameManagers_InGameManager__GetAllCharactersEnumerable_d__32__System_Collections_Generic_IEnumerator_Characters_BaseCharacter__get_Current (GameManagers_InGameManager__GetAllCharactersEnumerable_d__32_o* __this, const MethodInfo* method);
// 0x4233000

Characters_BaseCharacter_o *
GameManagers_InGameManager_<GetAllCharactersEnumerable>d__32__System_Collections_Generic_IEnumerator<Characters_BaseCharacter>_get_Current
          (GameManagers_InGameManager__GetAllCharactersEnumerable_d__32_o *__this,MethodInfo *method
          )

{
  return (__this->fields).__2__current;
}


// GameManagers.InGameManager.<GetAllCharactersEnumerable>d__32$$System.Collections.IEnumerator.Reset
// il2cpp: void GameManagers_InGameManager__GetAllCharactersEnumerable_d__32__System_Collections_IEnumerator_Reset (GameManagers_InGameManager__GetAllCharactersEnumerable_d__32_o* __this, const MethodInfo* method);
// 0x4233010

void GameManagers_InGameManager_<GetAllCharactersEnumerable>d__32__System_Collections_IEnumerator_Reset
               (GameManagers_InGameManager__GetAllCharactersEnumerable_d__32_o *__this,
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


// GameManagers.InGameManager.<GetAllCharactersEnumerable>d__32$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* GameManagers_InGameManager__GetAllCharactersEnumerable_d__32__System_Collections_IEnumerator_get_Current (GameManagers_InGameManager__GetAllCharactersEnumerable_d__32_o* __this, const MethodInfo* method);
// 0x4233050

Il2CppObject *
GameManagers_InGameManager_<GetAllCharactersEnumerable>d__32__System_Collections_IEnumerator_get_Current
          (GameManagers_InGameManager__GetAllCharactersEnumerable_d__32_o *__this,MethodInfo *method
          )

{
  return (Il2CppObject *)(__this->fields).__2__current;
}


// GameManagers.InGameManager.<GetAllCharactersEnumerable>d__32$$System.Collections.Generic.IEnumerable<Characters.BaseCharacter>.GetEnumerator
// il2cpp: System_Collections_Generic_IEnumerator_BaseCharacter__o* GameManagers_InGameManager__GetAllCharactersEnumerable_d__32__System_Collections_Generic_IEnumerable_Characters_BaseCharacter__GetEnumerator (GameManagers_InGameManager__GetAllCharactersEnumerable_d__32_o* __this, const MethodInfo* method);
// 0x4233060

System_Collections_IEnumerator_o *
GameManagers_InGameManager_<GetAllCharactersEnumerable>d__32__System_Collections_Generic_IEnumerable<Characters_BaseCharacter>_GetEnumerator
          (GameManagers_InGameManager__GetAllCharactersEnumerable_d__32_o *__this,MethodInfo *method
          )

{
  int iVar1;
  int32_t iVar2;
  Il2CppObject *__this_00;
  
  if (DAT_05705135 == '\0') {
    il2cpp_init_method_metadata();
    DAT_05705135 = '\x01';
  }
  if (((__this->fields).__1__state == -2) &&
     (iVar1 = (__this->fields).__l__initialThreadId,
     iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0), iVar1 == iVar2)) {
    (__this->fields).__1__state = 0;
    return (System_Collections_IEnumerator_o *)__this;
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_GetAllCharactersEnumerable_d__32);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  *(int32_t *)&__this_00[2].klass = iVar2;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].monitor = (__this->fields).__4__this;
    il2cpp_runtime_glue(&__this_00[2].monitor);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.InGameManager.<GetAllCharactersEnumerable>d__32$$System.Collections.IEnumerable.GetEnumerator
// il2cpp: System_Collections_IEnumerator_o* GameManagers_InGameManager__GetAllCharactersEnumerable_d__32__System_Collections_IEnumerable_GetEnumerator (GameManagers_InGameManager__GetAllCharactersEnumerable_d__32_o* __this, const MethodInfo* method);
// 0x4233100

System_Collections_IEnumerator_o *
GameManagers_InGameManager_<GetAllCharactersEnumerable>d__32__System_Collections_IEnumerable_GetEnumerator
          (GameManagers_InGameManager__GetAllCharactersEnumerable_d__32_o *__this,MethodInfo *method
          )

{
  int iVar1;
  int32_t iVar2;
  Il2CppObject *__this_00;
  
  if (DAT_05705135 == '\0') {
    il2cpp_init_method_metadata();
    DAT_05705135 = '\x01';
  }
  if (((__this->fields).__1__state == -2) &&
     (iVar1 = (__this->fields).__l__initialThreadId,
     iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0), iVar1 == iVar2)) {
    (__this->fields).__1__state = 0;
    return (System_Collections_IEnumerator_o *)__this;
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_GetAllCharactersEnumerable_d__32);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  *(int32_t *)&__this_00[2].klass = iVar2;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].monitor = (__this->fields).__4__this;
    il2cpp_runtime_glue(&__this_00[2].monitor);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.InGameManager.<OnLoadLevelSkinRPC>d__104$$.ctor
// il2cpp: void GameManagers_InGameManager__OnLoadLevelSkinRPC_d__104___ctor (GameManagers_InGameManager__OnLoadLevelSkinRPC_d__104_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x4233110

void GameManagers_InGameManager_<OnLoadLevelSkinRPC>d__104___ctor
               (GameManagers_InGameManager__OnLoadLevelSkinRPC_d__104_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// GameManagers.InGameManager.<OnLoadLevelSkinRPC>d__104$$System.IDisposable.Dispose
// il2cpp: void GameManagers_InGameManager__OnLoadLevelSkinRPC_d__104__System_IDisposable_Dispose (GameManagers_InGameManager__OnLoadLevelSkinRPC_d__104_o* __this, const MethodInfo* method);
// 0x4233130

void GameManagers_InGameManager_<OnLoadLevelSkinRPC>d__104__System_IDisposable_Dispose
               (GameManagers_InGameManager__OnLoadLevelSkinRPC_d__104_o *__this,MethodInfo *method)

{
  return;
}


// GameManagers.InGameManager.<OnLoadLevelSkinRPC>d__104$$MoveNext
// il2cpp: bool GameManagers_InGameManager__OnLoadLevelSkinRPC_d__104__MoveNext (GameManagers_InGameManager__OnLoadLevelSkinRPC_d__104_o* __this, const MethodInfo* method);
// 0x4233140

bool_conflict
GameManagers_InGameManager_<OnLoadLevelSkinRPC>d__104__MoveNext
          (GameManagers_InGameManager__OnLoadLevelSkinRPC_d__104_o *__this,MethodInfo *method)

{
  if ((__this->fields).__1__state != 0) {
    return 0;
  }
  (__this->fields).__1__state = -1;
  return 0;
}


// GameManagers.InGameManager.<OnLoadLevelSkinRPC>d__104$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* GameManagers_InGameManager__OnLoadLevelSkinRPC_d__104__System_Collections_Generic_IEnumerator_System_Object__get_Current (GameManagers_InGameManager__OnLoadLevelSkinRPC_d__104_o* __this, const MethodInfo* method);
// 0x4233160

Il2CppObject *
GameManagers_InGameManager_<OnLoadLevelSkinRPC>d__104__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (GameManagers_InGameManager__OnLoadLevelSkinRPC_d__104_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// GameManagers.InGameManager.<OnLoadLevelSkinRPC>d__104$$System.Collections.IEnumerator.Reset
// il2cpp: void GameManagers_InGameManager__OnLoadLevelSkinRPC_d__104__System_Collections_IEnumerator_Reset (GameManagers_InGameManager__OnLoadLevelSkinRPC_d__104_o* __this, const MethodInfo* method);
// 0x4233170

void GameManagers_InGameManager_<OnLoadLevelSkinRPC>d__104__System_Collections_IEnumerator_Reset
               (GameManagers_InGameManager__OnLoadLevelSkinRPC_d__104_o *__this,MethodInfo *method)

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


// GameManagers.InGameManager.<OnLoadLevelSkinRPC>d__104$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* GameManagers_InGameManager__OnLoadLevelSkinRPC_d__104__System_Collections_IEnumerator_get_Current (GameManagers_InGameManager__OnLoadLevelSkinRPC_d__104_o* __this, const MethodInfo* method);
// 0x42331b0

Il2CppObject *
GameManagers_InGameManager_<OnLoadLevelSkinRPC>d__104__System_Collections_IEnumerator_get_Current
          (GameManagers_InGameManager__OnLoadLevelSkinRPC_d__104_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// GameManagers.InGameManager.<OnLoadSkyboxRPC>d__102$$.ctor
// il2cpp: void GameManagers_InGameManager__OnLoadSkyboxRPC_d__102___ctor (GameManagers_InGameManager__OnLoadSkyboxRPC_d__102_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x42331c0

void GameManagers_InGameManager_<OnLoadSkyboxRPC>d__102___ctor
               (GameManagers_InGameManager__OnLoadSkyboxRPC_d__102_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// GameManagers.InGameManager.<OnLoadSkyboxRPC>d__102$$System.IDisposable.Dispose
// il2cpp: void GameManagers_InGameManager__OnLoadSkyboxRPC_d__102__System_IDisposable_Dispose (GameManagers_InGameManager__OnLoadSkyboxRPC_d__102_o* __this, const MethodInfo* method);
// 0x42331e0

void GameManagers_InGameManager_<OnLoadSkyboxRPC>d__102__System_IDisposable_Dispose
               (GameManagers_InGameManager__OnLoadSkyboxRPC_d__102_o *__this,MethodInfo *method)

{
  return;
}


// GameManagers.InGameManager.<OnLoadSkyboxRPC>d__102$$MoveNext
// il2cpp: bool GameManagers_InGameManager__OnLoadSkyboxRPC_d__102__MoveNext (GameManagers_InGameManager__OnLoadSkyboxRPC_d__102_o* __this, const MethodInfo* method);
// 0x42331f0

bool_conflict
GameManagers_InGameManager_<OnLoadSkyboxRPC>d__102__MoveNext
          (GameManagers_InGameManager__OnLoadSkyboxRPC_d__102_o *__this,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  GameManagers_InGameManager_o *__this_00;
  long lVar3;
  CustomSkins_SkyboxCustomSkinLoader_o *pCVar4;
  Settings_SetSettingsContainer_T__o *__this_01;
  System_Collections_Specialized_OrderedDictionary_o *pSVar5;
  System_Collections_Generic_Dictionary_string__BaseSetting__o *pSVar6;
  Settings_StringSetting_o *pSVar7;
  Settings_BoolSetting_o *pSVar8;
  char cVar9;
  bool_conflict bVar10;
  System_Collections_IEnumerator_o *pSVar11;
  UnityEngine_Coroutine_o *pUVar12;
  Settings_BaseSetSetting_o *pSVar13;
  System_String_array *urls;
  
  if (DAT_05705136 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&MethodInfo_BaseSetSetting_GetSelectedSet);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&TypeInfo_SkyboxCustomSkinSet);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    DAT_05705136 = '\x01';
  }
  iVar2 = (__this->fields).__1__state;
  __this_00 = (__this->fields).__4__this;
  if ((iVar2 == 2) || (iVar2 == 1)) {
    (__this->fields).__1__state = -1;
    if (__this_00 != (GameManagers_InGameManager_o *)0x0) {
      pSVar11 = GameManagers_InGameManager__ReloadSkybox(__this_00,(MethodInfo *)0x0);
      UnityEngine_MonoBehaviour__StartCoroutine
                ((UnityEngine_MonoBehaviour_o *)__this_00,pSVar11,(MethodInfo *)0x0);
      return 0;
    }
    goto LAB_042335de;
  }
  if (iVar2 != 0) {
    return 0;
  }
  (__this->fields).__1__state = -1;
  lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
  if (((lVar3 == 0) || (lVar3 = *(long *)(lVar3 + 0x38), lVar3 == 0)) ||
     (*(long *)(lVar3 + 0x38) == 0)) goto LAB_042335de;
  if (*(char *)(*(long *)(lVar3 + 0x38) + 0x11) != '\0') {
    if (*(long *)(lVar3 + 0x30) == 0) goto LAB_042335de;
    if (*(char *)(*(long *)(lVar3 + 0x30) + 0x11) != '\0') {
      if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
        il2cpp_init_class();
        bVar10 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
        cVar9 = (char)bVar10;
      }
      else {
        bVar10 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
        cVar9 = (char)bVar10;
      }
      if (cVar9 == '\0') goto LAB_042333b4;
    }
    if (__this_00 == (GameManagers_InGameManager_o *)0x0) goto LAB_042335de;
    bVar10 = GameManagers_InGameManager__IsValidSkybox
                       (__this_00,(__this->fields).urls,(MethodInfo *)0x0);
    if ((char)bVar10 != '\0') {
      pCVar4 = (__this_00->fields)._skyboxCustomSkinLoader;
      if (pCVar4 != (CustomSkins_SkyboxCustomSkinLoader_o *)0x0) {
        pSVar11 = (System_Collections_IEnumerator_o *)
                  (*(pCVar4->klass->vtable)._6_LoadSkinsFromRPC.methodPtr)
                            (pCVar4,(__this->fields).urls,
                             (pCVar4->klass->vtable)._6_LoadSkinsFromRPC.method);
        pUVar12 = UnityEngine_MonoBehaviour__StartCoroutine
                            ((UnityEngine_MonoBehaviour_o *)__this_00,pSVar11,(MethodInfo *)0x0);
        (__this->fields).__2__current = (Il2CppObject *)pUVar12;
        il2cpp_runtime_glue(&(__this->fields).__2__current,pUVar12);
        (__this->fields).__1__state = 1;
        return (bool_conflict)CONCAT71((int7)((ulong)lVar3 >> 8),1);
      }
      goto LAB_042335de;
    }
  }
LAB_042333b4:
  if (*(long *)(lVar3 + 0x38) != 0) {
    if (*(char *)(*(long *)(lVar3 + 0x38) + 0x11) == '\0') {
      return 0;
    }
    if (*(long *)(lVar3 + 0x30) != 0) {
      if (*(char *)(*(long *)(lVar3 + 0x30) + 0x11) == '\0') {
        return 0;
      }
      lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
      if ((lVar3 != 0) &&
         (__this_01 = *(Settings_SetSettingsContainer_T__o **)(lVar3 + 0x38),
         __this_01 != (Settings_SetSettingsContainer_T__o *)0x0)) {
        pSVar13 = Settings_SetSettingsContainer<object>__GetSelectedSet(__this_01,MethodInfo_BaseSetSetting_GetSelectedSet);
        if (pSVar13 == (Settings_BaseSetSetting_o *)0x0) {
          il2cpp_glue_02274930(TypeInfo_string,6);
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        bVar1 = (TypeInfo_SkyboxCustomSkinSet->_2).naturalAligment;
        if (((pSVar13->klass->_2).naturalAligment < bVar1) ||
           ((pSVar13->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_SkyboxCustomSkinSet)) {
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume(pSVar13);
        }
        urls = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,6);
        if ((pSVar13[1].klass != (Settings_BaseSetSetting_c *)0x0) &&
           (urls != (System_String_array *)0x0)) {
          if ((int)urls->max_length == 0) {
LAB_042335e3:
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          urls->m_Items[0] = (System_String_o *)((pSVar13[1].klass)->_1).namespaze;
          il2cpp_runtime_glue(urls->m_Items);
          if (pSVar13[1].monitor != (void *)0x0) {
            if ((uint)urls->max_length < 2) goto LAB_042335e3;
            urls->m_Items[1] = *(System_String_o **)((long)pSVar13[1].monitor + 0x18);
            il2cpp_runtime_glue(urls->m_Items + 1);
            pSVar5 = pSVar13[1].fields.Settings;
            if (pSVar5 != (System_Collections_Specialized_OrderedDictionary_o *)0x0) {
              if ((uint)urls->max_length < 3) goto LAB_042335e3;
              urls->m_Items[2] = (System_String_o *)(pSVar5->fields)._objectsTable;
              il2cpp_runtime_glue(urls->m_Items + 2);
              pSVar6 = pSVar13[1].fields.TypedSettings;
              if (pSVar6 != (System_Collections_Generic_Dictionary_string__BaseSetting__o *)0x0) {
                if ((uint)urls->max_length < 4) goto LAB_042335e3;
                urls->m_Items[3] = (System_String_o *)(pSVar6->fields)._entries;
                il2cpp_runtime_glue(urls->m_Items + 3);
                pSVar7 = pSVar13[1].fields.Name;
                if (pSVar7 != (Settings_StringSetting_o *)0x0) {
                  if ((uint)urls->max_length < 5) goto LAB_042335e3;
                  urls->m_Items[4] = (pSVar7->fields)._value;
                  il2cpp_runtime_glue(urls->m_Items + 4);
                  pSVar8 = pSVar13[1].fields.Preset;
                  if (pSVar8 != (Settings_BoolSetting_o *)0x0) {
                    if ((uint)urls->max_length < 6) goto LAB_042335e3;
                    urls->m_Items[5] = (System_String_o *)pSVar8[1].klass;
                    il2cpp_runtime_glue(urls->m_Items + 5);
                    if (__this_00 != (GameManagers_InGameManager_o *)0x0) {
                      bVar10 = GameManagers_InGameManager__IsValidSkybox
                                         (__this_00,urls,(MethodInfo *)0x0);
                      if ((char)bVar10 == '\0') {
                        return 0;
                      }
                      pCVar4 = (__this_00->fields)._skyboxCustomSkinLoader;
                      if (pCVar4 != (CustomSkins_SkyboxCustomSkinLoader_o *)0x0) {
                        pSVar11 = (System_Collections_IEnumerator_o *)
                                  (*(pCVar4->klass->vtable)._6_LoadSkinsFromRPC.methodPtr)
                                            (pCVar4,urls,
                                             (pCVar4->klass->vtable)._6_LoadSkinsFromRPC.method);
                        pUVar12 = UnityEngine_MonoBehaviour__StartCoroutine
                                            ((UnityEngine_MonoBehaviour_o *)__this_00,pSVar11,
                                             (MethodInfo *)0x0);
                        (__this->fields).__2__current = (Il2CppObject *)pUVar12;
                        il2cpp_runtime_glue(&(__this->fields).__2__current,pUVar12);
                        (__this->fields).__1__state = 2;
                        return 1;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_042335de:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.InGameManager.<OnLoadSkyboxRPC>d__102$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* GameManagers_InGameManager__OnLoadSkyboxRPC_d__102__System_Collections_Generic_IEnumerator_System_Object__get_Current (GameManagers_InGameManager__OnLoadSkyboxRPC_d__102_o* __this, const MethodInfo* method);
// 0x4233610

Il2CppObject *
GameManagers_InGameManager_<OnLoadSkyboxRPC>d__102__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (GameManagers_InGameManager__OnLoadSkyboxRPC_d__102_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// GameManagers.InGameManager.<OnLoadSkyboxRPC>d__102$$System.Collections.IEnumerator.Reset
// il2cpp: void GameManagers_InGameManager__OnLoadSkyboxRPC_d__102__System_Collections_IEnumerator_Reset (GameManagers_InGameManager__OnLoadSkyboxRPC_d__102_o* __this, const MethodInfo* method);
// 0x4233620

void GameManagers_InGameManager_<OnLoadSkyboxRPC>d__102__System_Collections_IEnumerator_Reset
               (GameManagers_InGameManager__OnLoadSkyboxRPC_d__102_o *__this,MethodInfo *method)

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


// GameManagers.InGameManager.<OnLoadSkyboxRPC>d__102$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* GameManagers_InGameManager__OnLoadSkyboxRPC_d__102__System_Collections_IEnumerator_get_Current (GameManagers_InGameManager__OnLoadSkyboxRPC_d__102_o* __this, const MethodInfo* method);
// 0x4233660

Il2CppObject *
GameManagers_InGameManager_<OnLoadSkyboxRPC>d__102__System_Collections_IEnumerator_get_Current
          (GameManagers_InGameManager__OnLoadSkyboxRPC_d__102_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// GameManagers.InGameManager.<ReloadSkybox>d__103$$.ctor
// il2cpp: void GameManagers_InGameManager__ReloadSkybox_d__103___ctor (GameManagers_InGameManager__ReloadSkybox_d__103_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x4233670

void GameManagers_InGameManager_<ReloadSkybox>d__103___ctor
               (GameManagers_InGameManager__ReloadSkybox_d__103_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// GameManagers.InGameManager.<ReloadSkybox>d__103$$System.IDisposable.Dispose
// il2cpp: void GameManagers_InGameManager__ReloadSkybox_d__103__System_IDisposable_Dispose (GameManagers_InGameManager__ReloadSkybox_d__103_o* __this, const MethodInfo* method);
// 0x4233690

void GameManagers_InGameManager_<ReloadSkybox>d__103__System_IDisposable_Dispose
               (GameManagers_InGameManager__ReloadSkybox_d__103_o *__this,MethodInfo *method)

{
  return;
}


// GameManagers.InGameManager.<ReloadSkybox>d__103$$MoveNext
// il2cpp: bool GameManagers_InGameManager__ReloadSkybox_d__103__MoveNext (GameManagers_InGameManager__ReloadSkybox_d__103_o* __this, const MethodInfo* method);
// 0x42336a0

bool_conflict
GameManagers_InGameManager_<ReloadSkybox>d__103__MoveNext
          (GameManagers_InGameManager__ReloadSkybox_d__103_o *__this,MethodInfo *method)

{
  int iVar1;
  long *plVar2;
  UnityEngine_Object_o *x;
  bool_conflict bVar3;
  UnityEngine_WaitForSeconds_o *__this_00;
  UnityEngine_Object_o *x_00;
  bool_conflict bVar4;
  
  if (DAT_05705137 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameCamera);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    il2cpp_init_method_metadata(&TypeInfo_SkyboxCustomSkinLoader);
    il2cpp_init_method_metadata(&TypeInfo_WaitForSeconds);
    DAT_05705137 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    plVar2 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
    if (plVar2 != (long *)0x0) {
      if ((*(byte *)(*plVar2 + 0x130) < *(byte *)(TypeInfo_InGameCamera + 0x130)) ||
         (*(long *)(*(long *)(*plVar2 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameCamera + 0x130) * 8) !=
          TypeInfo_InGameCamera)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(plVar2);
      }
    }
    x = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_SkyboxCustomSkinLoader + 0xb8);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar4 = 0;
    bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      if ((plVar2 == (long *)0x0) ||
         ((UnityEngine_Skybox_o *)plVar2[6] == (UnityEngine_Skybox_o *)0x0)) {
LAB_0423384d:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      x_00 = (UnityEngine_Object_o *)
             UnityEngine_Skybox__get_material((UnityEngine_Skybox_o *)plVar2[6],(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar4 = 0;
      bVar3 = UnityEngine_Object__op_Inequality(x_00,x,(MethodInfo *)0x0);
      if ((char)bVar3 != '\0') {
        if ((UnityEngine_Skybox_o *)plVar2[6] == (UnityEngine_Skybox_o *)0x0) goto LAB_0423384d;
        bVar4 = 0;
        UnityEngine_Skybox__set_material
                  ((UnityEngine_Skybox_o *)plVar2[6],(UnityEngine_Material_o *)x,(MethodInfo *)0x0);
      }
    }
  }
  else if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    __this_00 = (UnityEngine_WaitForSeconds_o *)il2cpp_runtime_glue(TypeInfo_WaitForSeconds);
    UnityEngine_WaitForSeconds___ctor(__this_00,0.5,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)__this_00;
    il2cpp_runtime_glue(&(__this->fields).__2__current,__this_00);
    (__this->fields).__1__state = 1;
    bVar4 = (bool_conflict)CONCAT71((int7)((ulong)__this >> 8),1);
  }
  else {
    bVar4 = 0;
  }
  return bVar4;
}


// GameManagers.InGameManager.<ReloadSkybox>d__103$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* GameManagers_InGameManager__ReloadSkybox_d__103__System_Collections_Generic_IEnumerator_System_Object__get_Current (GameManagers_InGameManager__ReloadSkybox_d__103_o* __this, const MethodInfo* method);
// 0x4233860

Il2CppObject *
GameManagers_InGameManager_<ReloadSkybox>d__103__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (GameManagers_InGameManager__ReloadSkybox_d__103_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// GameManagers.InGameManager.<ReloadSkybox>d__103$$System.Collections.IEnumerator.Reset
// il2cpp: void GameManagers_InGameManager__ReloadSkybox_d__103__System_Collections_IEnumerator_Reset (GameManagers_InGameManager__ReloadSkybox_d__103_o* __this, const MethodInfo* method);
// 0x4233870

void GameManagers_InGameManager_<ReloadSkybox>d__103__System_Collections_IEnumerator_Reset
               (GameManagers_InGameManager__ReloadSkybox_d__103_o *__this,MethodInfo *method)

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


// GameManagers.InGameManager.<ReloadSkybox>d__103$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* GameManagers_InGameManager__ReloadSkybox_d__103__System_Collections_IEnumerator_get_Current (GameManagers_InGameManager__ReloadSkybox_d__103_o* __this, const MethodInfo* method);
// 0x42338b0

Il2CppObject *
GameManagers_InGameManager_<ReloadSkybox>d__103__System_Collections_IEnumerator_get_Current
          (GameManagers_InGameManager__ReloadSkybox_d__103_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// GameManagers.InGameManager.<RespawnForever>d__60$$.ctor
// il2cpp: void GameManagers_InGameManager__RespawnForever_d__60___ctor (GameManagers_InGameManager__RespawnForever_d__60_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x42338c0

void GameManagers_InGameManager_<RespawnForever>d__60___ctor
               (GameManagers_InGameManager__RespawnForever_d__60_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// GameManagers.InGameManager.<RespawnForever>d__60$$System.IDisposable.Dispose
// il2cpp: void GameManagers_InGameManager__RespawnForever_d__60__System_IDisposable_Dispose (GameManagers_InGameManager__RespawnForever_d__60_o* __this, const MethodInfo* method);
// 0x42338e0

void GameManagers_InGameManager_<RespawnForever>d__60__System_IDisposable_Dispose
               (GameManagers_InGameManager__RespawnForever_d__60_o *__this,MethodInfo *method)

{
  return;
}


// GameManagers.InGameManager.<RespawnForever>d__60$$MoveNext
// il2cpp: bool GameManagers_InGameManager__RespawnForever_d__60__MoveNext (GameManagers_InGameManager__RespawnForever_d__60_o* __this, const MethodInfo* method);
// 0x42338f0

bool_conflict
GameManagers_InGameManager_<RespawnForever>d__60__MoveNext
          (GameManagers_InGameManager__RespawnForever_d__60_o *__this,MethodInfo *method)

{
  GameManagers_InGameManager_o *__this_00;
  UnityEngine_WaitForSeconds_o *__this_01;
  undefined8 uVar1;
  float fVar2;
  
  if (DAT_05705138 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_WaitForSeconds);
    DAT_05705138 = '\x01';
  }
  if ((uint)(__this->fields).__1__state < 2) {
    __this_00 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (__this_00 != (GameManagers_InGameManager_o *)0x0) {
      fVar2 = (float)(__this_00->fields).GlobalPause + -1.0;
      (__this_00->fields).GlobalPause = (bool_conflict)fVar2;
      if (fVar2 <= 0.0) {
        GameManagers_InGameManager__SpawnPlayer(__this_00,0,(MethodInfo *)0x0);
        (__this_00->fields).GlobalPause = (bool_conflict)(__this->fields).delay;
      }
      __this_01 = (UnityEngine_WaitForSeconds_o *)il2cpp_runtime_glue(TypeInfo_WaitForSeconds);
      UnityEngine_WaitForSeconds___ctor(__this_01,1.0,(MethodInfo *)0x0);
      (__this->fields).__2__current = (Il2CppObject *)__this_01;
      uVar1 = il2cpp_runtime_glue(&(__this->fields).__2__current,__this_01);
      (__this->fields).__1__state = 1;
      return (bool_conflict)CONCAT71((int7)((ulong)uVar1 >> 8),1);
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return 0;
}


// GameManagers.InGameManager.<RespawnForever>d__60$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* GameManagers_InGameManager__RespawnForever_d__60__System_Collections_Generic_IEnumerator_System_Object__get_Current (GameManagers_InGameManager__RespawnForever_d__60_o* __this, const MethodInfo* method);
// 0x42339c0

Il2CppObject *
GameManagers_InGameManager_<RespawnForever>d__60__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (GameManagers_InGameManager__RespawnForever_d__60_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// GameManagers.InGameManager.<RespawnForever>d__60$$System.Collections.IEnumerator.Reset
// il2cpp: void GameManagers_InGameManager__RespawnForever_d__60__System_Collections_IEnumerator_Reset (GameManagers_InGameManager__RespawnForever_d__60_o* __this, const MethodInfo* method);
// 0x42339d0

void GameManagers_InGameManager_<RespawnForever>d__60__System_Collections_IEnumerator_Reset
               (GameManagers_InGameManager__RespawnForever_d__60_o *__this,MethodInfo *method)

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


// GameManagers.InGameManager.<RespawnForever>d__60$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* GameManagers_InGameManager__RespawnForever_d__60__System_Collections_IEnumerator_get_Current (GameManagers_InGameManager__RespawnForever_d__60_o* __this, const MethodInfo* method);
// 0x4233a10

Il2CppObject *
GameManagers_InGameManager_<RespawnForever>d__60__System_Collections_IEnumerator_get_Current
          (GameManagers_InGameManager__RespawnForever_d__60_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// GameManagers.InGameManager.<SpawnAITitansAtCoroutine>d__73$$.ctor
// il2cpp: void GameManagers_InGameManager__SpawnAITitansAtCoroutine_d__73___ctor (GameManagers_InGameManager__SpawnAITitansAtCoroutine_d__73_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x4233a20

void GameManagers_InGameManager_<SpawnAITitansAtCoroutine>d__73___ctor
               (GameManagers_InGameManager__SpawnAITitansAtCoroutine_d__73_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// GameManagers.InGameManager.<SpawnAITitansAtCoroutine>d__73$$System.IDisposable.Dispose
// il2cpp: void GameManagers_InGameManager__SpawnAITitansAtCoroutine_d__73__System_IDisposable_Dispose (GameManagers_InGameManager__SpawnAITitansAtCoroutine_d__73_o* __this, const MethodInfo* method);
// 0x4233a40

void GameManagers_InGameManager_<SpawnAITitansAtCoroutine>d__73__System_IDisposable_Dispose
               (GameManagers_InGameManager__SpawnAITitansAtCoroutine_d__73_o *__this,
               MethodInfo *method)

{
  return;
}


// GameManagers.InGameManager.<SpawnAITitansAtCoroutine>d__73$$MoveNext
// il2cpp: bool GameManagers_InGameManager__SpawnAITitansAtCoroutine_d__73__MoveNext (GameManagers_InGameManager__SpawnAITitansAtCoroutine_d__73_o* __this, const MethodInfo* method);
// 0x4233a50

bool_conflict
GameManagers_InGameManager_<SpawnAITitansAtCoroutine>d__73__MoveNext
          (GameManagers_InGameManager__SpawnAITitansAtCoroutine_d__73_o *__this,MethodInfo *method)

{
  GameManagers_InGameManager_o *__this_00;
  int iVar1;
  Il2CppObject *pIVar2;
  undefined8 uVar3;
  
  if (DAT_05705139 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_WaitForEndOfFrame);
    DAT_05705139 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  __this_00 = (__this->fields).__4__this;
  if (iVar1 == 2) {
    (__this->fields).__1__state = -1;
    iVar1 = (__this->fields)._i_5__2 + 1;
    (__this->fields)._i_5__2 = iVar1;
    if ((__this->fields).count <= iVar1) {
      return 0;
    }
  }
  else {
    if (iVar1 == 1) {
      (__this->fields).__1__state = -1;
      pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitForEndOfFrame);
      UnityEngine_WaitForEndOfFrame___ctor
                ((UnityEngine_WaitForEndOfFrame_o *)pIVar2,(MethodInfo *)0x0);
      (__this->fields).__2__current = pIVar2;
      uVar3 = il2cpp_runtime_glue(&(__this->fields).__2__current,pIVar2);
      (__this->fields).__1__state = 2;
      goto LAB_04233b4a;
    }
    if (iVar1 != 0) {
      return 0;
    }
    (__this->fields).__1__state = -1;
    (__this->fields)._i_5__2 = 0;
    if ((__this->fields).count < 1) {
      return 0;
    }
  }
  if (__this_00 == (GameManagers_InGameManager_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  GameManagers_InGameManager__SpawnAITitanAt
            (__this_00,(__this->fields).type,(UnityEngine_Vector3_o)(__this->fields).position.fields
             ,(__this->fields).rotationY,(MethodInfo *)0x0);
  pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitForEndOfFrame);
  UnityEngine_WaitForEndOfFrame___ctor((UnityEngine_WaitForEndOfFrame_o *)pIVar2,(MethodInfo *)0x0);
  (__this->fields).__2__current = pIVar2;
  uVar3 = il2cpp_runtime_glue(&(__this->fields).__2__current,pIVar2);
  (__this->fields).__1__state = 1;
LAB_04233b4a:
  return (bool_conflict)CONCAT71((int7)((ulong)uVar3 >> 8),1);
}


// GameManagers.InGameManager.<SpawnAITitansAtCoroutine>d__73$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* GameManagers_InGameManager__SpawnAITitansAtCoroutine_d__73__System_Collections_Generic_IEnumerator_System_Object__get_Current (GameManagers_InGameManager__SpawnAITitansAtCoroutine_d__73_o* __this, const MethodInfo* method);
// 0x4233b60

Il2CppObject *
GameManagers_InGameManager_<SpawnAITitansAtCoroutine>d__73__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (GameManagers_InGameManager__SpawnAITitansAtCoroutine_d__73_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// GameManagers.InGameManager.<SpawnAITitansAtCoroutine>d__73$$System.Collections.IEnumerator.Reset
// il2cpp: void GameManagers_InGameManager__SpawnAITitansAtCoroutine_d__73__System_Collections_IEnumerator_Reset (GameManagers_InGameManager__SpawnAITitansAtCoroutine_d__73_o* __this, const MethodInfo* method);
// 0x4233b70

void GameManagers_InGameManager_<SpawnAITitansAtCoroutine>d__73__System_Collections_IEnumerator_Reset
               (GameManagers_InGameManager__SpawnAITitansAtCoroutine_d__73_o *__this,
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


// GameManagers.InGameManager.<SpawnAITitansAtCoroutine>d__73$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* GameManagers_InGameManager__SpawnAITitansAtCoroutine_d__73__System_Collections_IEnumerator_get_Current (GameManagers_InGameManager__SpawnAITitansAtCoroutine_d__73_o* __this, const MethodInfo* method);
// 0x4233bb0

Il2CppObject *
GameManagers_InGameManager_<SpawnAITitansAtCoroutine>d__73__System_Collections_IEnumerator_get_Current
          (GameManagers_InGameManager__SpawnAITitansAtCoroutine_d__73_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// GameManagers.InGameManager.<SpawnAITitansCoroutine>d__71$$.ctor
// il2cpp: void GameManagers_InGameManager__SpawnAITitansCoroutine_d__71___ctor (GameManagers_InGameManager__SpawnAITitansCoroutine_d__71_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x4233bc0

void GameManagers_InGameManager_<SpawnAITitansCoroutine>d__71___ctor
               (GameManagers_InGameManager__SpawnAITitansCoroutine_d__71_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// GameManagers.InGameManager.<SpawnAITitansCoroutine>d__71$$System.IDisposable.Dispose
// il2cpp: void GameManagers_InGameManager__SpawnAITitansCoroutine_d__71__System_IDisposable_Dispose (GameManagers_InGameManager__SpawnAITitansCoroutine_d__71_o* __this, const MethodInfo* method);
// 0x4233be0

void GameManagers_InGameManager_<SpawnAITitansCoroutine>d__71__System_IDisposable_Dispose
               (GameManagers_InGameManager__SpawnAITitansCoroutine_d__71_o *__this,
               MethodInfo *method)

{
  ushort uVar1;
  System_Collections_Generic_IEnumerator_ValueTuple_Vector3__Quaternion___o *pSVar2;
  System_Collections_Generic_IEnumerator_ValueTuple_Vector3__Quaternion___c *pSVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  code *vtable_dispatch;
  uint uVar5;
  long lVar6;
  undefined1 auVar7 [16];
  
  uVar5 = (__this->fields).__1__state + 3;
  if ((uVar5 < 6) && ((0x31U >> (uVar5 & 0x1f) & 1) != 0)) {
    if (DAT_0570513b == '\0') {
      il2cpp_init_method_metadata();
      DAT_0570513b = '\x01';
    }
    (__this->fields).__1__state = -1;
    pSVar2 = (__this->fields).__7__wrap1;
    if (pSVar2 != (System_Collections_Generic_IEnumerator_ValueTuple_Vector3__Quaternion___o *)0x0)
    {
      pSVar3 = pSVar2->klass;
      uVar1._0_1_ = (pSVar3->_2).rank;
      uVar1._1_1_ = (pSVar3->_2).minimumAlignment;
      if ((ulong)uVar1 != 0) {
        pIVar4 = (pSVar3->_1).interfaceOffsets;
        lVar6 = 0;
        do {
          if (*(long *)((long)&pIVar4->interfaceType + lVar6) == TypeInfo_IDisposable) {
            auVar7._8_8_ = pIVar4;
            auVar7._0_8_ = pSVar3->vtable + *(int *)((long)&pIVar4->offset + lVar6);
            goto LAB_04233c7f;
          }
          lVar6 = lVar6 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar6);
      }
      auVar7 = il2cpp_runtime_glue(pSVar2,TypeInfo_IDisposable,0);
LAB_04233c7f:
      vtable_dispatch = (code *)*auVar7._0_8_;
      (*vtable_dispatch)(pSVar2,auVar7._0_8_[1],auVar7._8_8_,vtable_dispatch);
      return;
    }
  }
  return;
}


// GameManagers.InGameManager.<SpawnAITitansCoroutine>d__71$$MoveNext
// il2cpp: bool GameManagers_InGameManager__SpawnAITitansCoroutine_d__71__MoveNext (GameManagers_InGameManager__SpawnAITitansCoroutine_d__71_o* __this, const MethodInfo* method);
// 0x4233c90

bool_conflict
GameManagers_InGameManager_<SpawnAITitansCoroutine>d__71__MoveNext
          (GameManagers_InGameManager__SpawnAITitansCoroutine_d__71_o *__this,MethodInfo *method)

{
  System_Collections_Generic_IEnumerator_ValueTuple_Vector3__Quaternion___o **ppSVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  GameManagers_InGameManager_o *__this_00;
  System_Collections_Generic_IEnumerable_ValueTuple_Vector3__Quaternion___c *pSVar7;
  Il2CppRuntimeInterfaceOffsetPair *pIVar8;
  System_Collections_Generic_IEnumerator_ValueTuple_Vector3__Quaternion___c *pSVar9;
  System_String_o *type;
  UnityEngine_Quaternion_o rotation;
  char cVar10;
  System_Collections_Generic_IEnumerable_ValueTuple_Vector3__Quaternion___o *pSVar11;
  VirtualInvokeData *pVVar12;
  System_Collections_Generic_IEnumerator_ValueTuple_Vector3__Quaternion___o *pSVar13;
  Il2CppObject *pIVar14;
  bool_conflict bVar15;
  long lVar16;
  undefined4 uVar17;
  UnityEngine_Vector3_o UVar18;
  UnityEngine_Vector3_o euler;
  UnityEngine_Vector3_o position;
  undefined8 local_58;
  float local_50;
  undefined8 local_4c;
  undefined8 local_44;
  undefined8 local_38;
  undefined8 uStack_30;
  
  if (DAT_0570513a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IEnumerable_ValueTuple_Vector3__Quaternion);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator_ValueTuple_Vector3__Quaternion);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator);
    il2cpp_init_method_metadata();
    DAT_0570513a = '\x01';
  }
  iVar6 = (__this->fields).__1__state;
  __this_00 = (__this->fields).__4__this;
  if (iVar6 != 2) {
    if (iVar6 == 1) {
      (__this->fields).__1__state = -3;
      pIVar14 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitForEndOfFrame);
      UnityEngine_WaitForEndOfFrame___ctor
                ((UnityEngine_WaitForEndOfFrame_o *)pIVar14,(MethodInfo *)0x0);
      (__this->fields).__2__current = pIVar14;
      il2cpp_runtime_glue(&(__this->fields).__2__current,pIVar14);
      (__this->fields).__1__state = 2;
      return (bool_conflict)CONCAT71((int7)((ulong)pIVar14 >> 8),1);
    }
    if (iVar6 != 0) {
      return 0;
    }
    (__this->fields).__1__state = -1;
    if (__this_00 == (GameManagers_InGameManager_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar11 = GameManagers_InGameManager__GetTitanSpawnPositions
                        (__this_00,(__this->fields).count,(MethodInfo *)0x0);
    if (pSVar11 == (System_Collections_Generic_IEnumerable_ValueTuple_Vector3__Quaternion___o *)0x0)
    {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar7 = pSVar11->klass;
    uVar2._0_1_ = (pSVar7->_2).rank;
    uVar2._1_1_ = (pSVar7->_2).minimumAlignment;
    if ((ulong)uVar2 != 0) {
      pIVar8 = (pSVar7->_1).interfaceOffsets;
      lVar16 = 0;
      do {
        if (*(long *)((long)&pIVar8->interfaceType + lVar16) == TypeInfo_IEnumerable_ValueTuple_Vector3__Quaternion) {
          pVVar12 = pSVar7->vtable + *(int *)((long)&pIVar8->offset + lVar16);
          goto LAB_04233dd8;
        }
        lVar16 = lVar16 + 0x10;
      } while ((ulong)uVar2 << 4 != lVar16);
    }
    pVVar12 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar11,TypeInfo_IEnumerable_ValueTuple_Vector3__Quaternion,0);
LAB_04233dd8:
    pSVar13 = (System_Collections_Generic_IEnumerator_ValueTuple_Vector3__Quaternion___o *)
              (*pVVar12->methodPtr)(pSVar11,pVVar12->method);
    (__this->fields).__7__wrap1 = pSVar13;
    il2cpp_runtime_glue(&(__this->fields).__7__wrap1,pSVar13);
  }
  (__this->fields).__1__state = -3;
  pSVar13 = (__this->fields).__7__wrap1;
  if (pSVar13 == (System_Collections_Generic_IEnumerator_ValueTuple_Vector3__Quaternion___o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pSVar9 = pSVar13->klass;
  uVar3._0_1_ = (pSVar9->_2).rank;
  uVar3._1_1_ = (pSVar9->_2).minimumAlignment;
  if ((ulong)uVar3 != 0) {
    pIVar8 = (pSVar9->_1).interfaceOffsets;
    lVar16 = 0;
    do {
      if (*(long *)((long)&pIVar8->interfaceType + lVar16) == TypeInfo_IEnumerator) {
        pVVar12 = pSVar9->vtable + *(int *)((long)&pIVar8->offset + lVar16);
        goto LAB_04233e61;
      }
      lVar16 = lVar16 + 0x10;
    } while ((ulong)uVar3 << 4 != lVar16);
  }
  pVVar12 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar13,TypeInfo_IEnumerator,0);
LAB_04233e61:
  cVar10 = (*pVVar12->methodPtr)(pSVar13,pVVar12->method);
  ppSVar1 = &(__this->fields).__7__wrap1;
  if (cVar10 == '\0') {
    if (DAT_0570513b == '\0') {
      il2cpp_init_method_metadata();
      DAT_0570513b = '\x01';
    }
    (__this->fields).__1__state = -1;
    pSVar13 = (__this->fields).__7__wrap1;
    if (pSVar13 != (System_Collections_Generic_IEnumerator_ValueTuple_Vector3__Quaternion___o *)0x0)
    {
      pSVar9 = pSVar13->klass;
      uVar5._0_1_ = (pSVar9->_2).rank;
      uVar5._1_1_ = (pSVar9->_2).minimumAlignment;
      if ((ulong)uVar5 != 0) {
        pIVar8 = (pSVar9->_1).interfaceOffsets;
        lVar16 = 0;
        do {
          if (*(long *)((long)&pIVar8->interfaceType + lVar16) == TypeInfo_IDisposable) {
            pVVar12 = pSVar9->vtable + *(int *)((long)&pIVar8->offset + lVar16);
            goto LAB_0423403e;
          }
          lVar16 = lVar16 + 0x10;
        } while ((ulong)uVar5 << 4 != lVar16);
      }
      pVVar12 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar13,TypeInfo_IDisposable,0);
LAB_0423403e:
      (*pVVar12->methodPtr)(pSVar13,pVVar12->method);
    }
    *ppSVar1 = (System_Collections_Generic_IEnumerator_ValueTuple_Vector3__Quaternion___o *)0x0;
    bVar15 = 0;
    il2cpp_runtime_glue(ppSVar1,0);
  }
  else {
    pSVar13 = *ppSVar1;
    if (pSVar13 == (System_Collections_Generic_IEnumerator_ValueTuple_Vector3__Quaternion___o *)0x0)
    {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar9 = pSVar13->klass;
    uVar4._0_1_ = (pSVar9->_2).rank;
    uVar4._1_1_ = (pSVar9->_2).minimumAlignment;
    if ((ulong)uVar4 != 0) {
      pIVar8 = (pSVar9->_1).interfaceOffsets;
      lVar16 = 0;
      do {
        if (*(long *)((long)&pIVar8->interfaceType + lVar16) == TypeInfo_IEnumerator_ValueTuple_Vector3__Quaternion) {
          pVVar12 = pSVar9->vtable + *(int *)((long)&pIVar8->offset + lVar16);
          goto LAB_04233f64;
        }
        lVar16 = lVar16 + 0x10;
      } while ((ulong)uVar4 << 4 != lVar16);
    }
    pVVar12 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar13,TypeInfo_IEnumerator_ValueTuple_Vector3__Quaternion,0);
LAB_04233f64:
    (*pVVar12->methodPtr)(&local_58,pSVar13,pVVar12->method);
    local_38 = local_58;
    uStack_30 = 0;
    rotation.fields.z = (float)(undefined4)local_44;
    rotation.fields.w = (float)local_44._4_4_;
    rotation.fields.x = (float)(undefined4)local_4c;
    rotation.fields.y = (float)local_4c._4_4_;
    type = (__this->fields).type;
    uVar17 = (undefined4)((ulong)local_44 >> 0x20);
    UVar18 = UnityEngine_Quaternion__Internal_ToEulerRad(rotation,(MethodInfo *)0x0);
    euler.fields.x = UVar18.fields.x * 57.29578;
    euler.fields.z = UVar18.fields.z * 57.29578;
    euler.fields.y = UVar18.fields.y * 57.29578;
    UVar18 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
    if (__this_00 == (GameManagers_InGameManager_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception(UVar18.fields.x,CONCAT44(uVar17,UVar18.fields.z));
    }
    position.fields.z = local_50;
    position.fields.x = (float)(undefined4)local_38;
    position.fields.y = (float)local_38._4_4_;
    GameManagers_InGameManager__SpawnAITitanAt
              (__this_00,type,position,UVar18.fields.y,(MethodInfo *)0x0);
    pIVar14 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitForEndOfFrame);
    UnityEngine_WaitForEndOfFrame___ctor
              ((UnityEngine_WaitForEndOfFrame_o *)pIVar14,(MethodInfo *)0x0);
    (__this->fields).__2__current = pIVar14;
    il2cpp_runtime_glue(&(__this->fields).__2__current,pIVar14);
    (__this->fields).__1__state = 1;
    bVar15 = (bool_conflict)CONCAT71((int7)((ulong)pIVar14 >> 8),1);
  }
  return bVar15;
}


// GameManagers.InGameManager.<SpawnAITitansCoroutine>d__71$$<>m__Finally1
// il2cpp: void GameManagers_InGameManager__SpawnAITitansCoroutine_d__71____m__Finally1 (GameManagers_InGameManager__SpawnAITitansCoroutine_d__71_o* __this, const MethodInfo* method);
// 0x4234200

void GameManagers_InGameManager_<SpawnAITitansCoroutine>d__71__<>m__Finally1
               (GameManagers_InGameManager__SpawnAITitansCoroutine_d__71_o *__this,
               MethodInfo *method)

{
  ushort uVar1;
  System_Collections_Generic_IEnumerator_ValueTuple_Vector3__Quaternion___o *pSVar2;
  System_Collections_Generic_IEnumerator_ValueTuple_Vector3__Quaternion___c *pSVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  code *vtable_dispatch;
  long lVar5;
  undefined1 auVar6 [16];
  
  if (DAT_0570513b == '\0') {
    il2cpp_init_method_metadata();
    DAT_0570513b = '\x01';
  }
  (__this->fields).__1__state = -1;
  pSVar2 = (__this->fields).__7__wrap1;
  if (pSVar2 == (System_Collections_Generic_IEnumerator_ValueTuple_Vector3__Quaternion___o *)0x0) {
    return;
  }
  pSVar3 = pSVar2->klass;
  uVar1._0_1_ = (pSVar3->_2).rank;
  uVar1._1_1_ = (pSVar3->_2).minimumAlignment;
  if ((ulong)uVar1 != 0) {
    pIVar4 = (pSVar3->_1).interfaceOffsets;
    lVar5 = 0;
    do {
      if (*(long *)((long)&pIVar4->interfaceType + lVar5) == TypeInfo_IDisposable) {
        auVar6._8_8_ = pIVar4;
        auVar6._0_8_ = pSVar3->vtable + *(int *)((long)&pIVar4->offset + lVar5);
        goto LAB_0423428f;
      }
      lVar5 = lVar5 + 0x10;
    } while ((ulong)uVar1 << 4 != lVar5);
  }
  auVar6 = il2cpp_runtime_glue(pSVar2,TypeInfo_IDisposable,0);
LAB_0423428f:
  vtable_dispatch = (code *)*auVar6._0_8_;
  (*vtable_dispatch)(pSVar2,auVar6._0_8_[1],auVar6._8_8_,vtable_dispatch);
  return;
}


// GameManagers.InGameManager.<SpawnAITitansCoroutine>d__71$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* GameManagers_InGameManager__SpawnAITitansCoroutine_d__71__System_Collections_Generic_IEnumerator_System_Object__get_Current (GameManagers_InGameManager__SpawnAITitansCoroutine_d__71_o* __this, const MethodInfo* method);
// 0x42342a0

Il2CppObject *
GameManagers_InGameManager_<SpawnAITitansCoroutine>d__71__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (GameManagers_InGameManager__SpawnAITitansCoroutine_d__71_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// GameManagers.InGameManager.<SpawnAITitansCoroutine>d__71$$System.Collections.IEnumerator.Reset
// il2cpp: void GameManagers_InGameManager__SpawnAITitansCoroutine_d__71__System_Collections_IEnumerator_Reset (GameManagers_InGameManager__SpawnAITitansCoroutine_d__71_o* __this, const MethodInfo* method);
// 0x42342b0

void GameManagers_InGameManager_<SpawnAITitansCoroutine>d__71__System_Collections_IEnumerator_Reset
               (GameManagers_InGameManager__SpawnAITitansCoroutine_d__71_o *__this,
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


// GameManagers.InGameManager.<SpawnAITitansCoroutine>d__71$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* GameManagers_InGameManager__SpawnAITitansCoroutine_d__71__System_Collections_IEnumerator_get_Current (GameManagers_InGameManager__SpawnAITitansCoroutine_d__71_o* __this, const MethodInfo* method);
// 0x42342f0

Il2CppObject *
GameManagers_InGameManager_<SpawnAITitansCoroutine>d__71__System_Collections_IEnumerator_get_Current
          (GameManagers_InGameManager__SpawnAITitansCoroutine_d__71_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// GameManagers.InGameManager.<WaitAndEndGame>d__84$$.ctor
// il2cpp: void GameManagers_InGameManager__WaitAndEndGame_d__84___ctor (GameManagers_InGameManager__WaitAndEndGame_d__84_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x4234300

void GameManagers_InGameManager_<WaitAndEndGame>d__84___ctor
               (GameManagers_InGameManager__WaitAndEndGame_d__84_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// GameManagers.InGameManager.<WaitAndEndGame>d__84$$System.IDisposable.Dispose
// il2cpp: void GameManagers_InGameManager__WaitAndEndGame_d__84__System_IDisposable_Dispose (GameManagers_InGameManager__WaitAndEndGame_d__84_o* __this, const MethodInfo* method);
// 0x4234320

void GameManagers_InGameManager_<WaitAndEndGame>d__84__System_IDisposable_Dispose
               (GameManagers_InGameManager__WaitAndEndGame_d__84_o *__this,MethodInfo *method)

{
  return;
}


// GameManagers.InGameManager.<WaitAndEndGame>d__84$$MoveNext
// il2cpp: bool GameManagers_InGameManager__WaitAndEndGame_d__84__MoveNext (GameManagers_InGameManager__WaitAndEndGame_d__84_o* __this, const MethodInfo* method);
// 0x4234330

bool_conflict
GameManagers_InGameManager_<WaitAndEndGame>d__84__MoveNext
          (GameManagers_InGameManager__WaitAndEndGame_d__84_o *__this,MethodInfo *method)

{
  float seconds;
  int iVar1;
  UnityEngine_WaitForSeconds_o *__this_00;
  bool_conflict bVar2;
  
  if (DAT_0570513c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&TypeInfo_WaitForSeconds);
    DAT_0570513c = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = 0;
    GameManagers_InGameManager__RestartGame((MethodInfo *)0x0);
  }
  else if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    seconds = (__this->fields).time;
    __this_00 = (UnityEngine_WaitForSeconds_o *)il2cpp_runtime_glue(TypeInfo_WaitForSeconds);
    UnityEngine_WaitForSeconds___ctor(__this_00,seconds,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)__this_00;
    il2cpp_runtime_glue(&(__this->fields).__2__current,__this_00);
    (__this->fields).__1__state = 1;
    bVar2 = (bool_conflict)CONCAT71((int7)((ulong)__this >> 8),1);
  }
  else {
    bVar2 = 0;
  }
  return bVar2;
}


// GameManagers.InGameManager.<WaitAndEndGame>d__84$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* GameManagers_InGameManager__WaitAndEndGame_d__84__System_Collections_Generic_IEnumerator_System_Object__get_Current (GameManagers_InGameManager__WaitAndEndGame_d__84_o* __this, const MethodInfo* method);
// 0x42343f0

Il2CppObject *
GameManagers_InGameManager_<WaitAndEndGame>d__84__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (GameManagers_InGameManager__WaitAndEndGame_d__84_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// GameManagers.InGameManager.<WaitAndEndGame>d__84$$System.Collections.IEnumerator.Reset
// il2cpp: void GameManagers_InGameManager__WaitAndEndGame_d__84__System_Collections_IEnumerator_Reset (GameManagers_InGameManager__WaitAndEndGame_d__84_o* __this, const MethodInfo* method);
// 0x4234400

void GameManagers_InGameManager_<WaitAndEndGame>d__84__System_Collections_IEnumerator_Reset
               (GameManagers_InGameManager__WaitAndEndGame_d__84_o *__this,MethodInfo *method)

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


// GameManagers.InGameManager.<WaitAndEndGame>d__84$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* GameManagers_InGameManager__WaitAndEndGame_d__84__System_Collections_IEnumerator_get_Current (GameManagers_InGameManager__WaitAndEndGame_d__84_o* __this, const MethodInfo* method);
// 0x4234440

Il2CppObject *
GameManagers_InGameManager_<WaitAndEndGame>d__84__System_Collections_IEnumerator_get_Current
          (GameManagers_InGameManager__WaitAndEndGame_d__84_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// GameManagers.InGameManager.<WaitAndUnpauseGame>d__40$$.ctor
// il2cpp: void GameManagers_InGameManager__WaitAndUnpauseGame_d__40___ctor (GameManagers_InGameManager__WaitAndUnpauseGame_d__40_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x4234450

void GameManagers_InGameManager_<WaitAndUnpauseGame>d__40___ctor
               (GameManagers_InGameManager__WaitAndUnpauseGame_d__40_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// GameManagers.InGameManager.<WaitAndUnpauseGame>d__40$$System.IDisposable.Dispose
// il2cpp: void GameManagers_InGameManager__WaitAndUnpauseGame_d__40__System_IDisposable_Dispose (GameManagers_InGameManager__WaitAndUnpauseGame_d__40_o* __this, const MethodInfo* method);
// 0x4234470

void GameManagers_InGameManager_<WaitAndUnpauseGame>d__40__System_IDisposable_Dispose
               (GameManagers_InGameManager__WaitAndUnpauseGame_d__40_o *__this,MethodInfo *method)

{
  return;
}


// GameManagers.InGameManager.<WaitAndUnpauseGame>d__40$$MoveNext
// il2cpp: bool GameManagers_InGameManager__WaitAndUnpauseGame_d__40__MoveNext (GameManagers_InGameManager__WaitAndUnpauseGame_d__40_o* __this, const MethodInfo* method);
// 0x4234480

bool_conflict
GameManagers_InGameManager_<WaitAndUnpauseGame>d__40__MoveNext
          (GameManagers_InGameManager__WaitAndUnpauseGame_d__40_o *__this,MethodInfo *method)

{
  int iVar1;
  GameManagers_InGameManager_o *__this_00;
  bool_conflict bVar2;
  bool_conflict bVar3;
  float fVar4;
  float fVar5;
  
  if (DAT_0570513d == '\0') {
    il2cpp_init_method_metadata();
    DAT_0570513d = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  __this_00 = (__this->fields).__4__this;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    if (__this_00 == (GameManagers_InGameManager_o *)0x0) goto LAB_0423458e;
    fVar4 = (float)(__this_00->fields).HasSpawned;
  }
  else {
    if (iVar1 != 0) {
      return 0;
    }
    (__this->fields).__1__state = -1;
    fVar4 = UnityEngine_Time__get_realtimeSinceStartup((MethodInfo *)0x0);
    if (__this_00 == (GameManagers_InGameManager_o *)0x0) {
LAB_0423458e:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    (__this->fields)._endTime_5__2 = fVar4 + (float)(__this_00->fields).HasSpawned;
    fVar4 = (float)(__this_00->fields).HasSpawned;
  }
  if (fVar4 <= 0.0) {
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar3 = 0;
    bVar2 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      bVar3 = 0;
      GameManagers_InGameManager__UnpauseGame(__this_00,(MethodInfo *)0x0);
    }
  }
  else {
    fVar4 = (__this->fields)._endTime_5__2;
    fVar5 = UnityEngine_Time__get_realtimeSinceStartup((MethodInfo *)0x0);
    fVar4 = fVar4 - fVar5;
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
    (__this_00->fields).HasSpawned = (bool_conflict)fVar4;
    (__this->fields).__2__current = (Il2CppObject *)0x0;
    il2cpp_runtime_glue(&(__this->fields).__2__current,0);
    (__this->fields).__1__state = 1;
    bVar3 = (bool_conflict)CONCAT71((int7)((ulong)__this >> 8),1);
  }
  return bVar3;
}


// GameManagers.InGameManager.<WaitAndUnpauseGame>d__40$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* GameManagers_InGameManager__WaitAndUnpauseGame_d__40__System_Collections_Generic_IEnumerator_System_Object__get_Current (GameManagers_InGameManager__WaitAndUnpauseGame_d__40_o* __this, const MethodInfo* method);
// 0x42345a0

Il2CppObject *
GameManagers_InGameManager_<WaitAndUnpauseGame>d__40__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (GameManagers_InGameManager__WaitAndUnpauseGame_d__40_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// GameManagers.InGameManager.<WaitAndUnpauseGame>d__40$$System.Collections.IEnumerator.Reset
// il2cpp: void GameManagers_InGameManager__WaitAndUnpauseGame_d__40__System_Collections_IEnumerator_Reset (GameManagers_InGameManager__WaitAndUnpauseGame_d__40_o* __this, const MethodInfo* method);
// 0x42345b0

void GameManagers_InGameManager_<WaitAndUnpauseGame>d__40__System_Collections_IEnumerator_Reset
               (GameManagers_InGameManager__WaitAndUnpauseGame_d__40_o *__this,MethodInfo *method)

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


// GameManagers.InGameManager.<WaitAndUnpauseGame>d__40$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* GameManagers_InGameManager__WaitAndUnpauseGame_d__40__System_Collections_IEnumerator_get_Current (GameManagers_InGameManager__WaitAndUnpauseGame_d__40_o* __this, const MethodInfo* method);
// 0x42345f0

Il2CppObject *
GameManagers_InGameManager_<WaitAndUnpauseGame>d__40__System_Collections_IEnumerator_get_Current
          (GameManagers_InGameManager__WaitAndUnpauseGame_d__40_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// GameManagers.InGameManager$$RegisterCharacter
// il2cpp: void GameManagers_InGameManager__RegisterCharacter (GameManagers_InGameManager_o* __this, Characters_BaseCharacter_o* character, const MethodInfo* method);
// 0x4226920

void GameManagers_InGameManager__RegisterCharacter
               (GameManagers_InGameManager_o *__this,Characters_BaseCharacter_o *character,
               MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  Characters_BaseCharacter_c *pCVar3;
  System_Collections_Generic_HashSet_object__o *__this_00;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  bool_conflict bVar4;
  undefined8 *puVar5;
  System_Collections_Generic_HashSet_BaseShifter__o *__this_03;
  System_Collections_Generic_HashSet_T__o *pSVar6;
  Il2CppMethodPointer pIVar7;
  Characters_BaseDetection_o *__this_04;
  
  if (DAT_057050e9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BaseShifter);
    il2cpp_init_method_metadata(&TypeInfo_BasicTitan);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_BaseDetection_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_T__Enumerator_Characters_BaseDetection);
    il2cpp_init_method_metadata(&TypeInfo_Human);
    DAT_057050e9 = '\x01';
  }
  pSVar6 = (System_Collections_Generic_HashSet_T__o *)0x0;
  pIVar7 = (Il2CppMethodPointer)0x0;
  __this_04 = (Characters_BaseDetection_o *)0x0;
  if (character != (Characters_BaseCharacter_o *)0x0) {
    pCVar3 = character->klass;
    bVar1 = (pCVar3->_2).naturalAligment;
    bVar2 = (TypeInfo_Human->_2).naturalAligment;
    if ((bVar1 < bVar2) || ((pCVar3->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_Human)) {
      bVar2 = (TypeInfo_BasicTitan->_2).naturalAligment;
      if ((bVar1 < bVar2) || ((pCVar3->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_BasicTitan)) {
        bVar2 = (TypeInfo_BaseShifter->_2).naturalAligment;
        if ((bVar1 < bVar2) || ((pCVar3->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_BaseShifter))
        goto LAB_04226a90;
        __this_03 = (__this->fields).Shifters;
        if (__this_03 == (System_Collections_Generic_HashSet_BaseShifter__o *)0x0)
        goto LAB_04226b06;
        puVar5 = &MethodInfo_Boolean_Add;
      }
      else {
        __this_03 = (System_Collections_Generic_HashSet_BaseShifter__o *)(__this->fields).Titans;
        if (__this_03 == (System_Collections_Generic_HashSet_BaseShifter__o *)0x0)
        goto LAB_04226b06;
        puVar5 = &MethodInfo_Boolean_Add;
      }
    }
    else {
      __this_03 = (System_Collections_Generic_HashSet_BaseShifter__o *)(__this->fields).Humans;
      if (__this_03 == (System_Collections_Generic_HashSet_BaseShifter__o *)0x0) goto LAB_04226b06;
      puVar5 = &MethodInfo_Boolean_Add;
    }
    System_Collections_Generic_HashSet<object>__Add
              ((System_Collections_Generic_HashSet_object__o *)__this_03,(Il2CppObject *)character,
               (MethodInfo_335D160 *)*puVar5);
  }
LAB_04226a90:
  __this_00 = *(System_Collections_Generic_HashSet_object__o **)&(__this->fields).PauseTimeLeft;
  if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__GetEnumerator
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)&stack0xffffffffffffffc8,
               __this_00,MethodInfo_HashSet_1_T__Enumerator_Characters_BaseDetection);
    while( true ) {
      __this_01.fields._8_8_ = pIVar7;
      __this_01.fields._set = pSVar6;
      __this_01.fields._current = (Il2CppObject *)__this_04;
      bVar4 = System_Collections_Generic_HashSet_Enumerator<object>__MoveNext
                        (__this_01,(MethodInfo_3185890 *)&stack0xffffffffffffffc8);
      if ((char)bVar4 == '\0') {
        __this_02.fields._8_8_ = pIVar7;
        __this_02.fields._set = pSVar6;
        __this_02.fields._current = (Il2CppObject *)__this_04;
        System_Collections_Generic_HashSet_Enumerator<object>__Dispose
                  (__this_02,(MethodInfo_3185880 *)&stack0xffffffffffffffc8);
        return;
      }
      if (__this_04 == (Characters_BaseDetection_o *)0x0) break;
      Characters_BaseDetection__OnCharacterSpawned(__this_04,character,(MethodInfo *)0x0);
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_04226b06:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.InGameManager$$GetAllCharacters
// il2cpp: System_Collections_Generic_HashSet_BaseCharacter__o* GameManagers_InGameManager__GetAllCharacters (GameManagers_InGameManager_o* __this, const MethodInfo* method);
// 0x4226b90

System_Collections_Generic_HashSet_BaseCharacter__o *
GameManagers_InGameManager__GetAllCharacters
          (GameManagers_InGameManager_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *pSVar1;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_00;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_04;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_05;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_06;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_07;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_08;
  bool_conflict bVar2;
  System_Collections_Generic_HashSet_object__o *__this_09;
  Il2CppMethodPointer pIVar3;
  _union_329995 _Var4;
  Il2CppMethodPointer pIVar5;
  Il2CppType *pIVar6;
  Il2CppObject *pIVar7;
  UnityEngine_Object_o *pUVar8;
  UnityEngine_Object_o *pUVar9;
  _union_329995 local_88;
  Il2CppType *pIStack_80;
  UnityEngine_Object_o *local_78;
  _union_329995 local_68;
  Il2CppType *pIStack_60;
  UnityEngine_Object_o *local_58;
  GameManagers_InGameManager_o *local_50;
  _union_329995 local_48;
  Il2CppType *pIStack_40;
  UnityEngine_Object_o *local_38;
  
  if (DAT_057050ea == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_BasicTitan_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Human_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_BaseShifter_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_T__Enumerator_Characters_Human__GetEnu);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_T__Enumerator_Characters_BasicTitan__G);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_T__Enumerator_Characters_BaseShifter);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_Characters_BaseCharacter);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_BaseCharacter);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057050ea = '\x01';
  }
  local_68.genericMethod = (System_Collections_Generic_HashSet_Enumerator_T__c *)0x0;
  pIStack_60 = (Il2CppType *)0x0;
  local_58 = (UnityEngine_Object_o *)0x0;
  local_88.genericMethod = (System_Collections_Generic_HashSet_Enumerator_T__c *)0x0;
  pIStack_80 = (Il2CppType *)0x0;
  local_78 = (UnityEngine_Object_o *)0x0;
  pIVar3 = (Il2CppMethodPointer)0x0;
  pIVar5 = (Il2CppMethodPointer)0x0;
  pIVar7 = (Il2CppObject *)0x0;
  __this_09 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_BaseCharacter);
  System_Collections_Generic_HashSet<object>___ctor(__this_09,MethodInfo_HashSet_1_Characters_BaseCharacter);
  pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).Humans;
  if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    local_50 = __this;
    System_Collections_Generic_HashSet<object>__GetEnumerator
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)&local_48,pSVar1,MethodInfo_HashSet_1_T__Enumerator_Characters_Human__GetEnu);
    local_58 = local_38;
    local_68 = local_48;
    pIStack_60 = pIStack_40;
    if (__this_09 == (System_Collections_Generic_HashSet_object__o *)0x0) {
      while (__this_01.fields._8_8_ = pIVar5,
            __this_01.fields._set = (System_Collections_Generic_HashSet_T__o *)pIVar3,
            __this_01.fields._current = pIVar7,
            bVar2 = System_Collections_Generic_HashSet_Enumerator<object>__MoveNext
                              (__this_01,(MethodInfo_3185890 *)&local_68), pUVar8 = local_58,
            (char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar2 = UnityEngine_Object__op_Inequality
                          (pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (pUVar8 == (UnityEngine_Object_o *)0x0) goto LAB_0422705a;
          if (*(char *)&pUVar8[4].monitor == '\0') {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
        }
      }
    }
    else {
      while (__this_00.fields._8_8_ = pIVar5,
            __this_00.fields._set = (System_Collections_Generic_HashSet_T__o *)pIVar3,
            __this_00.fields._current = pIVar7,
            bVar2 = System_Collections_Generic_HashSet_Enumerator<object>__MoveNext
                              (__this_00,(MethodInfo_3185890 *)&local_68), pUVar8 = local_58,
            (char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar2 = UnityEngine_Object__op_Inequality
                          (pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (pUVar8 == (UnityEngine_Object_o *)0x0) {
LAB_0422705a:
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          if (*(char *)&pUVar8[4].monitor == '\0') {
            System_Collections_Generic_HashSet<object>__Add
                      (__this_09,(Il2CppObject *)pUVar8,MethodInfo_Boolean_Add);
          }
        }
      }
    }
    __this_02.fields._8_8_ = pIVar5;
    __this_02.fields._set = (System_Collections_Generic_HashSet_T__o *)pIVar3;
    __this_02.fields._current = pIVar7;
    System_Collections_Generic_HashSet_Enumerator<object>__Dispose
              (__this_02,(MethodInfo_3185880 *)&local_68);
    pSVar1 = (System_Collections_Generic_HashSet_object__o *)(local_50->fields).Titans;
    if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet<object>__GetEnumerator
                ((System_Collections_Generic_HashSet_Enumerator_T__o *)&local_48,pSVar1,MethodInfo_HashSet_1_T__Enumerator_Characters_BasicTitan__G
                );
      local_78 = local_38;
      local_88 = local_48;
      pIStack_80 = pIStack_40;
      if (__this_09 == (System_Collections_Generic_HashSet_object__o *)0x0) {
        while (__this_04.fields._8_8_ = pIVar5,
              __this_04.fields._set = (System_Collections_Generic_HashSet_T__o *)pIVar3,
              __this_04.fields._current = pIVar7,
              bVar2 = System_Collections_Generic_HashSet_Enumerator<object>__MoveNext
                                (__this_04,(MethodInfo_3185890 *)&local_88), pUVar8 = local_78,
              (char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar2 = UnityEngine_Object__op_Inequality
                            (pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (pUVar8 == (UnityEngine_Object_o *)0x0) goto LAB_0422705f;
            if (*(char *)&pUVar8[4].monitor == '\0') {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
          }
        }
      }
      else {
        while (__this_03.fields._8_8_ = pIVar5,
              __this_03.fields._set = (System_Collections_Generic_HashSet_T__o *)pIVar3,
              __this_03.fields._current = pIVar7,
              bVar2 = System_Collections_Generic_HashSet_Enumerator<object>__MoveNext
                                (__this_03,(MethodInfo_3185890 *)&local_88), pUVar8 = local_78,
              (char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar2 = UnityEngine_Object__op_Inequality
                            (pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (pUVar8 == (UnityEngine_Object_o *)0x0) {
LAB_0422705f:
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            if (*(char *)&pUVar8[4].monitor == '\0') {
              System_Collections_Generic_HashSet<object>__Add
                        (__this_09,(Il2CppObject *)pUVar8,MethodInfo_Boolean_Add);
            }
          }
        }
      }
      __this_05.fields._8_8_ = pIVar5;
      __this_05.fields._set = (System_Collections_Generic_HashSet_T__o *)pIVar3;
      __this_05.fields._current = pIVar7;
      System_Collections_Generic_HashSet_Enumerator<object>__Dispose
                (__this_05,(MethodInfo_3185880 *)&local_88);
      pSVar1 = (System_Collections_Generic_HashSet_object__o *)(local_50->fields).Shifters;
      if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        System_Collections_Generic_HashSet<object>__GetEnumerator
                  ((System_Collections_Generic_HashSet_Enumerator_T__o *)&local_48,pSVar1,
                   MethodInfo_HashSet_1_T__Enumerator_Characters_BaseShifter);
        _Var4 = local_48;
        pIVar6 = pIStack_40;
        if (__this_09 == (System_Collections_Generic_HashSet_object__o *)0x0) {
          while (pUVar8 = local_38, __this_07.fields._8_8_ = pIVar6,
                __this_07.fields._set = _Var4.genericMethod,
                __this_07.fields._current = (Il2CppObject *)pUVar8,
                bVar2 = System_Collections_Generic_HashSet_Enumerator<object>__MoveNext
                                  (__this_07,(MethodInfo_3185890 *)&stack0xffffffffffffff58),
                (char)bVar2 != '\0') {
            pUVar9 = pUVar8;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_init_class();
            }
            bVar2 = UnityEngine_Object__op_Inequality
                              (pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            local_38 = pUVar9;
            if ((char)bVar2 != '\0') {
              if (pUVar8 == (UnityEngine_Object_o *)0x0) goto LAB_04227064;
              if (*(char *)&pUVar8[4].monitor == '\0') {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
            }
          }
        }
        else {
          while (pUVar8 = local_38, __this_06.fields._8_8_ = pIVar6,
                __this_06.fields._set = _Var4.genericMethod,
                __this_06.fields._current = (Il2CppObject *)pUVar8,
                bVar2 = System_Collections_Generic_HashSet_Enumerator<object>__MoveNext
                                  (__this_06,(MethodInfo_3185890 *)&stack0xffffffffffffff58),
                (char)bVar2 != '\0') {
            pUVar9 = pUVar8;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_init_class();
            }
            bVar2 = UnityEngine_Object__op_Inequality
                              (pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            local_38 = pUVar9;
            if ((char)bVar2 != '\0') {
              if (pUVar8 == (UnityEngine_Object_o *)0x0) {
LAB_04227064:
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              if (*(char *)&pUVar8[4].monitor == '\0') {
                System_Collections_Generic_HashSet<object>__Add
                          (__this_09,(Il2CppObject *)pUVar8,MethodInfo_Boolean_Add);
                local_38 = pUVar9;
              }
            }
          }
        }
        __this_08.fields._8_8_ = pIVar6;
        __this_08.fields._set = _Var4.genericMethod;
        __this_08.fields._current = (Il2CppObject *)pUVar8;
        System_Collections_Generic_HashSet_Enumerator<object>__Dispose
                  (__this_08,(MethodInfo_3185880 *)&stack0xffffffffffffff58);
        return (System_Collections_Generic_HashSet_BaseCharacter__o *)__this_09;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.InGameManager$$GetAllCharactersEnumerable
// il2cpp: System_Collections_Generic_IEnumerable_BaseCharacter__o* GameManagers_InGameManager__GetAllCharactersEnumerable (GameManagers_InGameManager_o* __this, const MethodInfo* method);
// 0x4227340

System_Collections_Generic_IEnumerable_BaseCharacter__o *
GameManagers_InGameManager__GetAllCharactersEnumerable
          (GameManagers_InGameManager_o *__this,MethodInfo *method)

{
  GameManagers_InGameManager__GetAllCharactersEnumerable_d__32_o *__this_00;
  
  if (DAT_057050eb == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GetAllCharactersEnumerable_d__32);
    DAT_057050eb = '\x01';
  }
  __this_00 = (GameManagers_InGameManager__GetAllCharactersEnumerable_d__32_o *)
              il2cpp_runtime_glue(TypeInfo_GetAllCharactersEnumerable_d__32);
  GameManagers_InGameManager_<GetAllCharactersEnumerable>d__32___ctor
            (__this_00,-2,(MethodInfo *)0x0);
  if (__this_00 != (GameManagers_InGameManager__GetAllCharactersEnumerable_d__32_o *)0x0) {
    (__this_00->fields).__4__this = __this;
    il2cpp_runtime_glue(&(__this_00->fields).__4__this,__this);
    return (System_Collections_Generic_IEnumerable_BaseCharacter__o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.InGameManager$$GetAllNonAICharacters
// il2cpp: System_Collections_Generic_HashSet_BaseCharacter__o* GameManagers_InGameManager__GetAllNonAICharacters (GameManagers_InGameManager_o* __this, const MethodInfo* method);
// 0x42273b0

System_Collections_Generic_HashSet_BaseCharacter__o *
GameManagers_InGameManager__GetAllNonAICharacters
          (GameManagers_InGameManager_o *__this,MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_HashSet_BaseCharacter__o *source;
  System_Func_TSource__bool__o *predicate;
  System_Collections_Generic_IEnumerable_TSource__o *source_00;
  System_Collections_Generic_HashSet_TSource__o *pSVar2;
  
  if (DAT_057050ec == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_Characters_BaseCharacter__ToHashSet_Ba);
    il2cpp_init_method_metadata(&MethodInfo_IEnumerable_1_Characters_BaseCharacter__Where_Ba);
    il2cpp_init_method_metadata(&TypeInfo_Func_BaseCharacter__bool);
    il2cpp_init_method_metadata(&MethodInfo_Boolean__GetAllNonAICharacters_b__33_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057050ec = '\x01';
  }
  source = GameManagers_InGameManager__GetAllCharacters(__this,method);
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_init_class();
    predicate = *(System_Func_TSource__bool__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  else {
    predicate = *(System_Func_TSource__bool__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  if (predicate == (System_Func_TSource__bool__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    predicate = (System_Func_TSource__bool__o *)il2cpp_runtime_glue(TypeInfo_Func_BaseCharacter__bool);
    System_Func<object__bool>___ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_TSource__bool__o **)(lVar1 + 8) = predicate;
    il2cpp_runtime_glue(lVar1 + 8,predicate);
  }
  source_00 = System_Linq_Enumerable__Where<object>
                        ((System_Collections_Generic_IEnumerable_TSource__o *)source,predicate,
                         MethodInfo_IEnumerable_1_Characters_BaseCharacter__Where_Ba);
  pSVar2 = System_Linq_Enumerable__ToHashSet<object>(source_00,MethodInfo_HashSet_1_Characters_BaseCharacter__ToHashSet_Ba);
  return (System_Collections_Generic_HashSet_BaseCharacter__o *)pSVar2;
}


// GameManagers.InGameManager$$PauseGame
// il2cpp: void GameManagers_InGameManager__PauseGame (GameManagers_InGameManager_o* __this, const MethodInfo* method);
// 0x4216a20

void GameManagers_InGameManager__PauseGame(GameManagers_InGameManager_o *__this,MethodInfo *method)

{
  int iVar1;
  Photon_Pun_PhotonView_o *__this_00;
  char cVar2;
  bool_conflict bVar3;
  System_Object_array *parameters;
  
  if (DAT_057050ed == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_RPCManager);
    il2cpp_init_method_metadata(&"PauseGameRPC");
    DAT_057050ed = '\x01';
    iVar1 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    bVar3 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar2 = (char)bVar3;
  }
  else {
    bVar3 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar2 = (char)bVar3;
  }
  if ((cVar2 != '\0') && (*(char *)((long)&(__this->fields)._gameSettingsLoaded + 2) == '\0')) {
    __this_00 = (Photon_Pun_PhotonView_o *)**(undefined8 **)(TypeInfo_RPCManager + 0xb8);
    parameters = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,0);
    if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
      Photon_Pun_PhotonView__RPC(__this_00,"PauseGameRPC",0,parameters,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return;
}


// GameManagers.InGameManager$$OnPauseGameRPC
// il2cpp: void GameManagers_InGameManager__OnPauseGameRPC (GameManagers_InGameManager_o* __this, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x42274f0

void GameManagers_InGameManager__OnPauseGameRPC
               (GameManagers_InGameManager_o *__this,Photon_Pun_PhotonMessageInfo_o info,
               MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (info.fields.Sender == (Photon_Realtime_Player_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  bVar1 = Photon_Realtime_Player__get_IsMasterClient(info.fields.Sender,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    *(undefined1 *)((long)&(__this->fields)._gameSettingsLoaded + 2) = 1;
    (__this->fields).HasSpawned = -0x40800000;
    UnityEngine_Time__set_timeScale(0.0,(MethodInfo *)0x0);
    return;
  }
  return;
}


// GameManagers.InGameManager$$UnpauseGame
// il2cpp: void GameManagers_InGameManager__UnpauseGame (GameManagers_InGameManager_o* __this, const MethodInfo* method);
// 0x4227530

void GameManagers_InGameManager__UnpauseGame
               (GameManagers_InGameManager_o *__this,MethodInfo *method)

{
  int iVar1;
  Photon_Pun_PhotonView_o *__this_00;
  char cVar2;
  bool_conflict bVar3;
  System_Object_array *parameters;
  
  if (DAT_057050ee == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_RPCManager);
    il2cpp_init_method_metadata(&"UnpauseGameRPC");
    DAT_057050ee = '\x01';
    iVar1 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    bVar3 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar2 = (char)bVar3;
  }
  else {
    bVar3 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar2 = (char)bVar3;
  }
  if ((cVar2 != '\0') && (*(char *)((long)&(__this->fields)._gameSettingsLoaded + 2) != '\0')) {
    __this_00 = (Photon_Pun_PhotonView_o *)**(undefined8 **)(TypeInfo_RPCManager + 0xb8);
    parameters = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,0);
    if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
      Photon_Pun_PhotonView__RPC(__this_00,"UnpauseGameRPC",0,parameters,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return;
}


// GameManagers.InGameManager$$OnUnpauseGameRPC
// il2cpp: void GameManagers_InGameManager__OnUnpauseGameRPC (GameManagers_InGameManager_o* __this, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x4227620

void GameManagers_InGameManager__OnUnpauseGameRPC
               (GameManagers_InGameManager_o *__this,Photon_Pun_PhotonMessageInfo_o info,
               MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (info.fields.Sender == (Photon_Realtime_Player_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  bVar1 = Photon_Realtime_Player__get_IsMasterClient(info.fields.Sender,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    *(undefined1 *)((long)&(__this->fields)._gameSettingsLoaded + 2) = 0;
    (__this->fields).HasSpawned = -0x40800000;
    UnityEngine_Time__set_timeScale(1.0,(MethodInfo *)0x0);
    return;
  }
  return;
}


// GameManagers.InGameManager$$StartUnpauseGame
// il2cpp: void GameManagers_InGameManager__StartUnpauseGame (GameManagers_InGameManager_o* __this, const MethodInfo* method);
// 0x4216bf0

void GameManagers_InGameManager__StartUnpauseGame
               (GameManagers_InGameManager_o *__this,MethodInfo *method)

{
  int iVar1;
  Photon_Pun_PhotonView_o *__this_00;
  char cVar2;
  bool_conflict bVar3;
  System_Object_array *parameters;
  
  if (DAT_057050ef == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_RPCManager);
    il2cpp_init_method_metadata(&"StartUnpauseGameRPC");
    DAT_057050ef = '\x01';
    iVar1 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    bVar3 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar2 = (char)bVar3;
  }
  else {
    bVar3 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar2 = (char)bVar3;
  }
  if ((cVar2 != '\0') && (*(char *)((long)&(__this->fields)._gameSettingsLoaded + 2) != '\0')) {
    __this_00 = (Photon_Pun_PhotonView_o *)**(undefined8 **)(TypeInfo_RPCManager + 0xb8);
    parameters = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,0);
    if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
      Photon_Pun_PhotonView__RPC(__this_00,"StartUnpauseGameRPC",0,parameters,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return;
}


// GameManagers.InGameManager$$OnStartUnpauseGameRPC
// il2cpp: void GameManagers_InGameManager__OnStartUnpauseGameRPC (GameManagers_InGameManager_o* __this, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x4227660

void GameManagers_InGameManager__OnStartUnpauseGameRPC
               (GameManagers_InGameManager_o *__this,Photon_Pun_PhotonMessageInfo_o info,
               MethodInfo *method)

{
  bool_conflict bVar1;
  GameManagers_InGameManager__WaitAndUnpauseGame_d__40_o *__this_00;
  
  if (info.fields.Sender != (Photon_Realtime_Player_o *)0x0) {
    bVar1 = Photon_Realtime_Player__get_IsMasterClient(info.fields.Sender,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      return;
    }
    *(undefined1 *)((long)&(__this->fields)._gameSettingsLoaded + 2) = 1;
    (__this->fields).HasSpawned = 0x40a00000;
    if (DAT_057050f0 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_WaitAndUnpauseGame_d__40);
      DAT_057050f0 = '\x01';
    }
    __this_00 = (GameManagers_InGameManager__WaitAndUnpauseGame_d__40_o *)
                il2cpp_runtime_glue(TypeInfo_WaitAndUnpauseGame_d__40);
    GameManagers_InGameManager_<WaitAndUnpauseGame>d__40___ctor(__this_00,0,(MethodInfo *)0x0);
    if (__this_00 != (GameManagers_InGameManager__WaitAndUnpauseGame_d__40_o *)0x0) {
      (__this_00->fields).__4__this = __this;
      il2cpp_runtime_glue(&(__this_00->fields).__4__this,__this);
      UnityEngine_MonoBehaviour__StartCoroutine
                ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00
                 ,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.InGameManager$$WaitAndUnpauseGame
// il2cpp: System_Collections_IEnumerator_o* GameManagers_InGameManager__WaitAndUnpauseGame (GameManagers_InGameManager_o* __this, const MethodInfo* method);
// 0x4227700

System_Collections_IEnumerator_o *
GameManagers_InGameManager__WaitAndUnpauseGame
          (GameManagers_InGameManager_o *__this,MethodInfo *method)

{
  GameManagers_InGameManager__WaitAndUnpauseGame_d__40_o *__this_00;
  
  if (DAT_057050f0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_WaitAndUnpauseGame_d__40);
    DAT_057050f0 = '\x01';
  }
  __this_00 = (GameManagers_InGameManager__WaitAndUnpauseGame_d__40_o *)
              il2cpp_runtime_glue(TypeInfo_WaitAndUnpauseGame_d__40);
  GameManagers_InGameManager_<WaitAndUnpauseGame>d__40___ctor(__this_00,0,(MethodInfo *)0x0);
  if (__this_00 != (GameManagers_InGameManager__WaitAndUnpauseGame_d__40_o *)0x0) {
    (__this_00->fields).__4__this = __this;
    il2cpp_runtime_glue(&(__this_00->fields).__4__this,__this);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.InGameManager$$RestartGame
// il2cpp: void GameManagers_InGameManager__RestartGame (const MethodInfo* method);
// 0x4218550

/* WARNING: Type propagation algorithm not settling */

void GameManagers_InGameManager__RestartGame(MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  UnityEngine_MonoBehaviour_o *__this;
  Photon_Pun_PhotonView_o *__this_00;
  char cVar3;
  bool_conflict bVar4;
  ulong in_RAX;
  System_Object_array *parameters;
  Il2CppObject *pIVar5;
  long lVar6;
  GameManagers_InGameManager__FinishRestartGame_d__42_o *__this_01;
  undefined8 uVar7;
  undefined8 uStack_28;
  
  uStack_28 = in_RAX;
  if (DAT_057050f1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_RPCManager);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    il2cpp_init_method_metadata(&"PreRestartGameRPC");
    DAT_057050f1 = '\x01';
    iVar2 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
    bVar4 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar3 = (char)bVar4;
  }
  else {
    bVar4 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar3 = (char)bVar4;
  }
  if (cVar3 != '\0') {
    __this = *(UnityEngine_MonoBehaviour_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (__this != (UnityEngine_MonoBehaviour_o *)0x0) {
      bVar1 = (TypeInfo_InGameManager->_2).naturalAligment;
      if (((__this->klass->_2).naturalAligment < bVar1) ||
         ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_InGameManager)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(__this);
      }
    }
    __this_00 = (Photon_Pun_PhotonView_o *)**(undefined8 **)(TypeInfo_RPCManager + 0xb8);
    parameters = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,1);
    lVar6 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
    if ((lVar6 != 0) && (lVar6 = *(long *)(lVar6 + 0x130), lVar6 != 0)) {
      uStack_28 = CONCAT17(*(undefined1 *)(lVar6 + 0x11),(undefined7)uStack_28) ^ 0x100000000000000;
      pIVar5 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,(long)&uStack_28 + 7);
      if (parameters != (System_Object_array *)0x0) {
        if ((pIVar5 != (Il2CppObject *)0x0) &&
           (lVar6 = il2cpp_runtime_glue(pIVar5,(((parameters->obj).klass)->_1).element_class),
           lVar6 == 0)) {
          uVar7 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
          il2cpp_glue_02274a00(uVar7,0);
        }
        if ((int)parameters->max_length == 0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        parameters->m_Items[0] = pIVar5;
        il2cpp_runtime_glue(parameters->m_Items,pIVar5);
        if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
          Photon_Pun_PhotonView__RPC(__this_00,"PreRestartGameRPC",0,parameters,(MethodInfo *)0x0);
          UnityEngine_Time__set_timeScale(1.0,(MethodInfo *)0x0);
          if (__this != (UnityEngine_MonoBehaviour_o *)0x0) {
            if (DAT_057050f2 == '\0') {
              il2cpp_init_method_metadata(&TypeInfo_FinishRestartGame_d__42);
              DAT_057050f2 = '\x01';
            }
            __this_01 = (GameManagers_InGameManager__FinishRestartGame_d__42_o *)
                        il2cpp_runtime_glue(TypeInfo_FinishRestartGame_d__42);
            GameManagers_InGameManager_<FinishRestartGame>d__42___ctor
                      (__this_01,0,(MethodInfo *)0x0);
            UnityEngine_MonoBehaviour__StartCoroutine
                      (__this,(System_Collections_IEnumerator_o *)__this_01,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return;
}


// GameManagers.InGameManager$$FinishRestartGame
// il2cpp: System_Collections_IEnumerator_o* GameManagers_InGameManager__FinishRestartGame (GameManagers_InGameManager_o* __this, const MethodInfo* method);
// 0x4227770

System_Collections_IEnumerator_o *
GameManagers_InGameManager__FinishRestartGame
          (GameManagers_InGameManager_o *__this,MethodInfo *method)

{
  GameManagers_InGameManager__FinishRestartGame_d__42_o *__this_00;
  
  if (DAT_057050f2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_FinishRestartGame_d__42);
    DAT_057050f2 = '\x01';
  }
  __this_00 = (GameManagers_InGameManager__FinishRestartGame_d__42_o *)
              il2cpp_runtime_glue(TypeInfo_FinishRestartGame_d__42);
  GameManagers_InGameManager_<FinishRestartGame>d__42___ctor(__this_00,0,(MethodInfo *)0x0);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// GameManagers.InGameManager$$OnRestartGameRPC
// il2cpp: void GameManagers_InGameManager__OnRestartGameRPC (Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x42277b0

void GameManagers_InGameManager__OnRestartGameRPC
               (Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  char cVar1;
  int iVar2;
  bool_conflict bVar3;
  MethodInfo *method_00;
  MethodInfo *in_stack_ffffffffffffffe8;
  
  if (DAT_057050f3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&"Master client has restarted the game.");
    DAT_057050f3 = '\x01';
  }
  if (info.fields.Sender == (Photon_Realtime_Player_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  bVar3 = Photon_Realtime_Player__get_IsMasterClient(info.fields.Sender,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    return;
  }
  method_00 = TypeInfo_InGameManager;
  if (*(int *)((long)&TypeInfo_InGameManager[2].parameters + 4) == 0) {
    il2cpp_init_class();
  }
  GameManagers_InGameManager__ResetRoundPlayerProperties(method_00);
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (DAT_05702229 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    DAT_05702229 = '\x01';
    iVar2 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
    cVar1 = *(char *)(*(long *)(TypeInfo_PhotonNetwork + 0xb8) + 0x30);
  }
  else {
    cVar1 = *(char *)(*(long *)(TypeInfo_PhotonNetwork + 0xb8) + 0x30);
  }
  if (cVar1 != '\0') {
    ApplicationManagers_SceneLoader__LoadScene(2,(MethodInfo *)0x0);
    return;
  }
  if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  GameManagers_ChatManager__AddLine
            ("Master client has restarted the game.",3,0,(System_Nullable_DateTime__o)ZEXT816(0),-1,0,0,-1,0,
             in_stack_ffffffffffffffe8);
  ApplicationManagers_SceneLoader__LoadScene(2,(MethodInfo *)0x0);
  return;
}


// GameManagers.InGameManager$$OnPreRestartGameRPC
// il2cpp: void GameManagers_InGameManager__OnPreRestartGameRPC (bool immediate, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x4227c80

void GameManagers_InGameManager__OnPreRestartGameRPC
               (bool_conflict immediate,Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  long *plVar1;
  UnityEngine_Component_o *__this;
  UI_LoadingMenu_o *__this_00;
  bool_conflict bVar2;
  UnityEngine_GameObject_o *__this_01;
  
  if (DAT_057050f4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    DAT_057050f4 = '\x01';
  }
  if (info.fields.Sender != (Photon_Realtime_Player_o *)0x0) {
    bVar2 = Photon_Realtime_Player__get_IsMasterClient(info.fields.Sender,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      return;
    }
    plVar1 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (plVar1 != (long *)0x0) {
      if ((*(byte *)(*plVar1 + 0x130) < *(byte *)(TypeInfo_InGameManager + 0x130)) ||
         (*(long *)(*(long *)(*plVar1 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameManager + 0x130) * 8) !=
          TypeInfo_InGameManager)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume();
      }
      *(undefined1 *)((long)plVar1 + 0x7b) = 1;
      if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      *(undefined1 *)(*(long *)(TypeInfo_ChatManager + 0xb8) + 0xd0) = 1;
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      __this = *(UnityEngine_Component_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
      if (__this != (UnityEngine_Component_o *)0x0) {
        __this_01 = UnityEngine_Component__get_gameObject(__this,(MethodInfo *)0x0);
        if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
          UnityEngine_GameObject__SetActive(__this_01,0,(MethodInfo *)0x0);
          __this_00 = *(UI_LoadingMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x30);
          if (__this_00 != (UI_LoadingMenu_o *)0x0) {
            UI_LoadingMenu__Show(__this_00,immediate & 0xff,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.InGameManager$$LeaveRoom
// il2cpp: void GameManagers_InGameManager__LeaveRoom (const MethodInfo* method);
// 0x42266d0

void GameManagers_InGameManager__LeaveRoom(MethodInfo *method)

{
  long *plVar1;
  char cVar2;
  bool_conflict bVar3;
  MethodInfo *pMVar4;
  
  if (DAT_057050f5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&TypeInfo_MaterialCache);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    DAT_057050f5 = '\x01';
  }
  if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
    il2cpp_init_class();
  }
  pMVar4 = TypeInfo_ChatManager;
  TypeInfo_ChatManager[2].virtualMethodPointer[0xd0] = (code)0x0;
  GameManagers_ChatManager__ResetAllPMState(pMVar4);
  pMVar4 = TypeInfo_InGameManager;
  if (*(int *)((long)&TypeInfo_InGameManager[2].parameters + 4) == 0) {
    il2cpp_init_class();
  }
  GameManagers_InGameManager__ResetPersistentPlayerProperties(pMVar4);
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_init_class();
    bVar3 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    if ((char)bVar3 != '\0') goto LAB_042267af;
LAB_04226786:
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) != 0) goto LAB_04226792;
LAB_042267d3:
    il2cpp_init_class();
    bVar3 = Photon_Pun_PhotonNetwork__get_IsConnected((MethodInfo *)0x0);
    cVar2 = (char)bVar3;
  }
  else {
    bVar3 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    if ((char)bVar3 == '\0') goto LAB_04226786;
LAB_042267af:
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_init_class();
    }
    Photon_Pun_PhotonNetwork__DestroyAll((MethodInfo *)0x0);
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) goto LAB_042267d3;
LAB_04226792:
    bVar3 = Photon_Pun_PhotonNetwork__get_IsConnected((MethodInfo *)0x0);
    cVar2 = (char)bVar3;
  }
  if (cVar2 != '\0') {
    if ((Settings_MultiplayerSettings_o *)**(undefined8 **)(TypeInfo_SettingsManager + 0xb8) ==
        (Settings_MultiplayerSettings_o *)0x0) goto LAB_042268af;
    Settings_MultiplayerSettings__Disconnect
              ((Settings_MultiplayerSettings_o *)**(undefined8 **)(TypeInfo_SettingsManager + 0xb8),
               (MethodInfo *)0x0);
  }
  plVar1 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x178))(plVar1,*(undefined8 *)(*plVar1 + 0x180));
    plVar1 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x58);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x178))(plVar1,*(undefined8 *)(*plVar1 + 0x180));
      plVar1 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x70);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x178))();
        ApplicationManagers_SceneLoader__LoadScene(1,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_MaterialCache + 0xe4) != 0) {
          CustomSkins_MaterialCache__Clear((MethodInfo *)0x0);
          return;
        }
        il2cpp_init_class();
        CustomSkins_MaterialCache__Clear((MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_042268af:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.InGameManager$$OnLeftRoom
// il2cpp: void GameManagers_InGameManager__OnLeftRoom (GameManagers_InGameManager_o* __this, const MethodInfo* method);
// 0x4228340

/* WARNING: Type propagation algorithm not settling */

void GameManagers_InGameManager__OnLeftRoom(GameManagers_InGameManager_o *__this,MethodInfo *method)

{
  int iVar1;
  UnityEngine_Component_o *__this_00;
  char cVar2;
  bool_conflict bVar3;
  Il2CppObject *pIVar4;
  UI_ChatPanel_o *__this_01;
  MethodInfo *method_00;
  
  if (DAT_057050f6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_InGameMenu_GetComponent_InGameMenu);
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&TypeInfo_MainMenuGameManager);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    DAT_057050f6 = '\x01';
    iVar1 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    bVar3 = Photon_Pun_PhotonNetwork__get_IsConnected((MethodInfo *)0x0);
    cVar2 = (char)bVar3;
  }
  else {
    bVar3 = Photon_Pun_PhotonNetwork__get_IsConnected((MethodInfo *)0x0);
    cVar2 = (char)bVar3;
  }
  if (cVar2 == '\0') {
    return;
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
    __this_00 = *(UnityEngine_Component_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  }
  else {
    __this_00 = *(UnityEngine_Component_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  }
  if ((__this_00 == (UnityEngine_Component_o *)0x0) ||
     (pIVar4 = UnityEngine_Component__GetComponent<object>(__this_00,MethodInfo_InGameMenu_GetComponent_InGameMenu),
     pIVar4 == (Il2CppObject *)0x0)) {
    __this_01 = (UI_ChatPanel_o *)0x0;
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    __this_01 = pIVar4[0xc].monitor;
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                    );
  if ((char)bVar3 != '\0') {
    if (__this_01 == (UI_ChatPanel_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    UI_ChatPanel__ResetPMState(__this_01,(MethodInfo *)0x0);
  }
  method_00 = TypeInfo_InGameManager;
  if (*(int *)((long)&TypeInfo_InGameManager[2].parameters + 4) == 0) {
    il2cpp_init_class();
  }
  GameManagers_InGameManager__LeaveRoom(method_00);
  if (*(int *)(TypeInfo_MainMenuGameManager + 0xe4) == 0) {
    il2cpp_init_class();
    **(undefined1 **)(TypeInfo_MainMenuGameManager + 0xb8) = 1;
    return;
  }
  **(undefined1 **)(TypeInfo_MainMenuGameManager + 0xb8) = 1;
  return;
}


// GameManagers.InGameManager$$OnJoinRoom
// il2cpp: void GameManagers_InGameManager__OnJoinRoom (const MethodInfo* method);
// 0x4228500

void GameManagers_InGameManager__OnJoinRoom(MethodInfo *method)

{
  char cVar1;
  Photon_Realtime_Room_o *room;
  System_String_o *pSVar2;
  System_Object_array *pSVar3;
  long lVar4;
  System_String_o *str0;
  undefined8 uVar5;
  MethodInfo *pMVar6;
  MethodInfo *in_stack_ffffffffffffffb8;
  
  if (DAT_057050f7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AnticheatManager);
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&TypeInfo_MiscExtensions);
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_RoomProperty);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"\n");
    il2cpp_init_method_metadata(&"Motd");
    il2cpp_init_method_metadata(&"InGame");
    il2cpp_init_method_metadata(&"Chat");
    il2cpp_init_method_metadata(&"Help");
    il2cpp_init_method_metadata(&"single player");
    il2cpp_init_method_metadata(&"");
    DAT_057050f7 = '\x01';
  }
  if (*(int *)(TypeInfo_AnticheatManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  Anticheat_AnticheatManager__Reset((MethodInfo *)0x0);
  pMVar6 = TypeInfo_InGameManager;
  if (*(int *)((long)&TypeInfo_InGameManager[2].parameters + 4) == 0) {
    il2cpp_init_class();
  }
  GameManagers_InGameManager__ResetPlayerInfo(pMVar6);
  GameManagers_InGameManager__ResetPersistentPlayerProperties(pMVar6);
  TypeInfo_InGameManager[2].virtualMethodPointer[0x48] = (code)0x1;
  pMVar6 = TypeInfo_ChatManager;
  if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
    il2cpp_init_class();
  }
  GameManagers_ChatManager__SyncPMPartnersOnJoin(pMVar6);
  pSVar2 = "single player";
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_init_class();
    if (DAT_05702229 != '\0') goto LAB_0422866d;
LAB_04228730:
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    DAT_05702229 = '\x01';
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) != 0) goto LAB_0422867d;
LAB_04228753:
    il2cpp_init_class();
    cVar1 = *(char *)(*(long *)(TypeInfo_PhotonNetwork + 0xb8) + 0x30);
  }
  else {
    if (DAT_05702229 == '\0') goto LAB_04228730;
LAB_0422866d:
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) goto LAB_04228753;
LAB_0422867d:
    cVar1 = *(char *)(*(long *)(TypeInfo_PhotonNetwork + 0xb8) + 0x30);
  }
  if (cVar1 == '\0') {
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_init_class();
    }
    room = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
    if (*(int *)(TypeInfo_RoomProperty + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar2 = PhotonExtensions__GetStringProperty
                       ((Photon_Realtime_RoomInfo_o *)room,
                        (System_String_o *)**(undefined8 **)(TypeInfo_RoomProperty + 0xb8),"",
                        (MethodInfo *)0x0);
    if (pSVar2 == (System_String_o *)0x0) goto LAB_042288fd;
    pSVar2 = System_String__Trim(pSVar2,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar2 = MiscExtensions__HexColor(pSVar2,(MethodInfo *)0x0);
  }
  pSVar3 = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,1);
  if (pSVar3 == (System_Object_array *)0x0) {
LAB_042288fd:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((pSVar2 != (System_String_o *)0x0) &&
     (lVar4 = il2cpp_runtime_glue(pSVar2,(((pSVar3->obj).klass)->_1).element_class), lVar4 == 0)) {
LAB_04228907:
    uVar5 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(uVar5,0);
  }
  if ((int)pSVar3->max_length != 0) {
    pSVar3->m_Items[0] = (Il2CppObject *)pSVar2;
    il2cpp_runtime_glue(pSVar3->m_Items,pSVar2);
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    str0 = UI_UIManager__GetLocaleFormatted
                     ("InGame","Chat","Motd",pSVar3,(MethodInfo *)0x0);
    pSVar3 = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,1);
    if (pSVar3 == (System_Object_array *)0x0) goto LAB_042288fd;
    if ((pSVar2 != (System_String_o *)0x0) &&
       (lVar4 = il2cpp_runtime_glue(pSVar2,(((pSVar3->obj).klass)->_1).element_class), lVar4 == 0))
    goto LAB_04228907;
    if ((int)pSVar3->max_length != 0) {
      pSVar3->m_Items[0] = (Il2CppObject *)pSVar2;
      il2cpp_runtime_glue(pSVar3->m_Items,pSVar2);
      pSVar2 = UI_UIManager__GetLocaleFormatted
                         ("InGame","Chat","Help",pSVar3,(MethodInfo *)0x0);
      pSVar2 = System_String__Concat(str0,"\n",pSVar2,(MethodInfo *)0x0);
      if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
        il2cpp_init_class();
      }
      GameManagers_ChatManager__AddLine
                (pSVar2,3,0,(System_Nullable_DateTime__o)ZEXT816(0),-1,0,0,-1,0,
                 in_stack_ffffffffffffffb8);
      ApplicationManagers_SceneLoader__LoadScene(2,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.InGameManager$$RegisterMainCharacterDie
// il2cpp: void GameManagers_InGameManager__RegisterMainCharacterDie (GameManagers_InGameManager_o* __this, const MethodInfo* method);
// 0x4228b10

void GameManagers_InGameManager__RegisterMainCharacterDie
               (GameManagers_InGameManager_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *x;
  System_String_o *key;
  bool_conflict bVar1;
  int32_t iVar2;
  long lVar3;
  Photon_Realtime_Player_o *player;
  Photon_Realtime_Player_o *player_00;
  Il2CppObject *value;
  MethodInfo *method_00;
  int local_1c;
  
  if (DAT_057050f8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_PlayerProperty);
    DAT_057050f8 = '\x01';
  }
  method_00 = TypeInfo_InGameManager;
  if (*(int *)((long)&TypeInfo_InGameManager[2].parameters + 4) == 0) {
    il2cpp_init_class();
  }
  GameManagers_InGameManager__UpdateRoundPlayerProperties(method_00);
  x = (__this->fields).CurrentCharacter;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_init_class();
      lVar3 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
    }
    else {
      lVar3 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
    }
    if (lVar3 != 0) {
      if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
        il2cpp_init_class();
        lVar3 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
      }
      if (*(char *)(lVar3 + 0x82) != '\0') {
        if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
          il2cpp_init_class();
        }
        player = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
        if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
          il2cpp_init_class();
        }
        key = *(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x58);
        player_00 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
        iVar2 = PhotonExtensions__GetIntProperty
                          (player_00,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x58),0,
                           (MethodInfo *)0x0);
        local_1c = iVar2 + 1;
        value = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_1c);
        PhotonExtensions__SetCustomProperty(player,key,value,(MethodInfo *)0x0);
      }
    }
  }
  return;
}


// GameManagers.InGameManager$$RegisterMainCharacterKill
// il2cpp: void GameManagers_InGameManager__RegisterMainCharacterKill (GameManagers_InGameManager_o* __this, Characters_BaseCharacter_o* victim, const MethodInfo* method);
// 0x4229040

void GameManagers_InGameManager__RegisterMainCharacterKill
               (GameManagers_InGameManager_o *__this,Characters_BaseCharacter_o *victim,
               MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  Characters_BaseCharacter_o *pCVar3;
  Characters_BaseCharacter_c *pCVar4;
  long lVar5;
  Il2CppObject *key;
  bool_conflict bVar6;
  int32_t iVar7;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Photon_Realtime_Player_o *pPVar8;
  Il2CppObject *value;
  uint weapon;
  int local_2c;
  
  if (DAT_057050f9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BaseShifter);
    il2cpp_init_method_metadata(&TypeInfo_BasicTitan);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_System_Object);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__object);
    il2cpp_init_method_metadata(&TypeInfo_GameProgressManager);
    il2cpp_init_method_metadata(&TypeInfo_Human);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_PlayerProperty);
    DAT_057050f9 = '\x01';
  }
  pCVar3 = (__this->fields).CurrentCharacter;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pCVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    pCVar3 = (__this->fields).CurrentCharacter;
    weapon = 4;
    if (pCVar3 != (Characters_BaseCharacter_o *)0x0) {
      pCVar4 = pCVar3->klass;
      bVar1 = (pCVar4->_2).naturalAligment;
      bVar2 = (TypeInfo_Human->_2).naturalAligment;
      if ((bVar1 < bVar2) || ((pCVar4->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_Human)) {
        bVar2 = (TypeInfo_BasicTitan->_2).naturalAligment;
        if ((bVar1 < bVar2) || ((pCVar4->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_BasicTitan)) {
          bVar2 = (TypeInfo_BaseShifter->_2).naturalAligment;
          if (bVar2 <= bVar1) {
            weapon = (pCVar4->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_BaseShifter | 4;
          }
        }
        else {
          weapon = 6;
        }
      }
      else {
        lVar5 = *(long *)&pCVar3[1].fields.FootstepsEnabled;
        if (lVar5 == 0) goto LAB_042293d7;
        weapon = *(uint *)(lVar5 + 0x1d0);
        if (2 < weapon) {
          weapon = 4 - (weapon == 3);
        }
      }
    }
    if (victim != (Characters_BaseCharacter_o *)0x0) {
      pCVar4 = victim->klass;
      bVar1 = (pCVar4->_2).naturalAligment;
      bVar2 = (TypeInfo_Human->_2).naturalAligment;
      if ((bVar1 < bVar2) || ((pCVar4->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_Human)) {
        bVar2 = (TypeInfo_BasicTitan->_2).naturalAligment;
        if ((bVar2 <= bVar1) && ((pCVar4->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_BasicTitan)) {
          GameProgress_KillMethod__op_Implicit(weapon,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_GameProgressManager + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar1 = (TypeInfo_BasicTitan->_2).naturalAligment;
          if (((victim->klass->_2).naturalAligment < bVar1) ||
             ((victim->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_BasicTitan))
          goto LAB_042293dc;
          GameProgress_GameProgressManager__RegisterTitanKill();
        }
      }
      else {
        GameProgress_KillMethod__op_Implicit(weapon,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_GameProgressManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar1 = (TypeInfo_Human->_2).naturalAligment;
        if (((victim->klass->_2).naturalAligment < bVar1) ||
           ((victim->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_Human)) {
LAB_042293dc:
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume(victim);
        }
        GameProgress_GameProgressManager__RegisterHumanKill();
      }
    }
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                il2cpp_runtime_glue(TypeInfo_Dictionary_string__object);
    System_Collections_Generic_Dictionary<object__object>___ctor(__this_00,MethodInfo_Dictionary_2_System_String_System_Object);
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_init_class();
    }
    key = *(Il2CppObject **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x50);
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pPVar8 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    iVar7 = PhotonExtensions__GetIntProperty
                      (pPVar8,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x50),0,
                       (MethodInfo *)0x0);
    local_2c = iVar7 + 1;
    value = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_2c);
    if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
LAB_042293d7:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    System_Collections_Generic_Dictionary<object__object>__Add(__this_00,key,value,MethodInfo_Void_Add);
    pPVar8 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    PhotonExtensions__SetCustomProperties
              (pPVar8,(System_Collections_Generic_Dictionary_string__object__o *)__this_00,
               (MethodInfo *)0x0);
  }
  return;
}


// GameManagers.InGameManager$$RegisterMainCharacterDamage
// il2cpp: void GameManagers_InGameManager__RegisterMainCharacterDamage (GameManagers_InGameManager_o* __this, Characters_BaseCharacter_o* victim, int32_t damage, const MethodInfo* method);
// 0x42293f0

void GameManagers_InGameManager__RegisterMainCharacterDamage
               (GameManagers_InGameManager_o *__this,Characters_BaseCharacter_o *victim,
               int32_t damage,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  Characters_BaseCharacter_o *pCVar3;
  Characters_BaseCharacter_c *pCVar4;
  long lVar5;
  Il2CppObject *pIVar6;
  bool_conflict bVar7;
  int32_t iVar8;
  System_String_o **ppSVar9;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Photon_Realtime_Player_o *pPVar10;
  Il2CppObject *pIVar11;
  GameProgress_KillMethod_o GVar12;
  System_String_o *pSStack_40;
  int32_t local_38;
  int local_34;
  
  if (DAT_057050fa == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BaseShifter);
    il2cpp_init_method_metadata(&TypeInfo_BasicTitan);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_System_Object);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__object);
    il2cpp_init_method_metadata(&TypeInfo_GameProgressManager);
    il2cpp_init_method_metadata(&TypeInfo_Human);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_PlayerProperty);
    il2cpp_init_method_metadata(&"");
    DAT_057050fa = '\x01';
  }
  pSStack_40 = (System_String_o *)0x0;
  pCVar3 = (__this->fields).CurrentCharacter;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar7 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pCVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
    return;
  }
  GVar12 = GameProgress_KillMethod__op_Implicit(4,(MethodInfo *)0x0);
  pSStack_40 = GVar12.fields.Special;
  pCVar3 = (__this->fields).CurrentCharacter;
  if (pCVar3 != (Characters_BaseCharacter_o *)0x0) {
    pCVar4 = pCVar3->klass;
    bVar1 = (pCVar4->_2).naturalAligment;
    bVar2 = (TypeInfo_Human->_2).naturalAligment;
    if ((bVar1 < bVar2) || ((pCVar4->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_Human)) {
      bVar2 = (TypeInfo_BasicTitan->_2).naturalAligment;
      if ((bVar1 < bVar2) || ((pCVar4->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_BasicTitan)) {
        bVar2 = (TypeInfo_BaseShifter->_2).naturalAligment;
        if ((bVar1 < bVar2) || ((pCVar4->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_BaseShifter))
        goto joined_r0x04229763;
        iVar8 = 5;
      }
      else {
        iVar8 = 6;
      }
      GVar12 = GameProgress_KillMethod__op_Implicit(iVar8,(MethodInfo *)0x0);
      pSStack_40 = GVar12.fields.Special;
    }
    else {
      lVar5._0_4_ = pCVar3[1].fields.FootstepsEnabled;
      lVar5._4_4_ = pCVar3[1].fields.SoundsEnabled;
      if (lVar5 == 0) goto LAB_04229769;
      if (pCVar3[1].fields.HasExplicitNameTag == 9) {
        ppSVar9 = &pCVar3[1].fields.Guild;
      }
      else {
        ppSVar9 = (System_String_o **)&"";
      }
      pSStack_40 = *ppSVar9;
      il2cpp_runtime_glue(&pSStack_40);
    }
  }
joined_r0x04229763:
  if (victim != (Characters_BaseCharacter_o *)0x0) {
    UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)victim,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_GameProgressManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    GameProgress_GameProgressManager__RegisterDamage();
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                il2cpp_runtime_glue(TypeInfo_Dictionary_string__object);
    System_Collections_Generic_Dictionary<object__object>___ctor(__this_00,MethodInfo_Dictionary_2_System_String_System_Object);
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pIVar6 = *(Il2CppObject **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x68);
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pPVar10 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    iVar8 = PhotonExtensions__GetIntProperty
                      (pPVar10,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x68),0,
                       (MethodInfo *)0x0);
    local_34 = iVar8 + damage;
    pIVar11 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_34);
    if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary<object__object>__Add
                (__this_00,pIVar6,pIVar11,MethodInfo_Void_Add);
      pIVar6 = *(Il2CppObject **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x60);
      pPVar10 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
      iVar8 = PhotonExtensions__GetIntProperty
                        (pPVar10,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x60),0,
                         (MethodInfo *)0x0);
      local_38 = damage;
      if (damage <= iVar8) {
        local_38 = iVar8;
      }
      pIVar11 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_38);
      System_Collections_Generic_Dictionary<object__object>__Add
                (__this_00,pIVar6,pIVar11,MethodInfo_Void_Add);
      pPVar10 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
      PhotonExtensions__SetCustomProperties
                (pPVar10,(System_Collections_Generic_Dictionary_string__object__o *)__this_00,
                 (MethodInfo *)0x0);
      return;
    }
  }
LAB_04229769:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.InGameManager$$OnPlayerEnteredRoom
// il2cpp: void GameManagers_InGameManager__OnPlayerEnteredRoom (GameManagers_InGameManager_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x4229770

/* WARNING: Type propagation algorithm not settling */

void GameManagers_InGameManager__OnPlayerEnteredRoom
               (GameManagers_InGameManager_o *__this,Photon_Realtime_Player_o *player,
               MethodInfo *method)

{
  int iVar1;
  int32_t key;
  System_Collections_Generic_Dictionary_int__object__o *pSVar2;
  Photon_Pun_PhotonView_o *pPVar3;
  Utility_Algorithms_CompressionAlgorithm_o *pUVar4;
  long *plVar5;
  char cVar6;
  bool_conflict bVar7;
  GameManagers_PlayerInfo_o *__this_00;
  System_Object_array *pSVar8;
  System_String_o *pSVar9;
  System_Byte_array *pSVar10;
  long lVar11;
  undefined8 uVar12;
  MethodInfo *pMVar13;
  
  if (DAT_057050fb == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&TypeInfo_DataCompressors);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_PlayerInfo);
    il2cpp_init_method_metadata(&TypeInfo_RPCManager);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&"GameSettingsRPC");
    il2cpp_init_method_metadata(&"PauseGameRPC");
    il2cpp_init_method_metadata(&"PlayerInfoRPC");
    DAT_057050fb = '\x01';
    iVar1 = *(int *)(TypeInfo_InGameManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_InGameManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if ((player != (Photon_Realtime_Player_o *)0x0) &&
     (pSVar2 = *(System_Collections_Generic_Dictionary_int__object__o **)
                (*(long *)(TypeInfo_InGameManager + 0xb8) + 0x18),
     pSVar2 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
    bVar7 = System_Collections_Generic_Dictionary<int__object>__ContainsKey
                      (pSVar2,(player->fields).actorNumber,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar7 == '\0') {
      if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar2 = *(System_Collections_Generic_Dictionary_int__object__o **)
                (*(long *)(TypeInfo_InGameManager + 0xb8) + 0x18);
      key = (player->fields).actorNumber;
      __this_00 = (GameManagers_PlayerInfo_o *)il2cpp_runtime_glue(TypeInfo_PlayerInfo);
      GameManagers_PlayerInfo___ctor(__this_00,(MethodInfo *)0x0);
      if (pSVar2 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto LAB_04229c21;
      System_Collections_Generic_Dictionary<int__object>__Add
                (pSVar2,key,(Il2CppObject *)__this_00,MethodInfo_Void_Add);
    }
    pPVar3 = (Photon_Pun_PhotonView_o *)**(undefined8 **)(TypeInfo_RPCManager + 0xb8);
    pSVar8 = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,1);
    if (*(int *)(TypeInfo_DataCompressors + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pUVar4 = (Utility_Algorithms_CompressionAlgorithm_o *)**(undefined8 **)(TypeInfo_DataCompressors + 0xb8);
    if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    plVar5 = *(long **)(*(long *)(TypeInfo_InGameManager + 0xb8) + 0x40);
    if (((plVar5 != (long *)0x0) &&
        (pSVar9 = (System_String_o *)
                  (**(code **)(*plVar5 + 0x1a8))(plVar5,*(undefined8 *)(*plVar5 + 0x1b0)),
        pUVar4 != (Utility_Algorithms_CompressionAlgorithm_o *)0x0)) &&
       (pSVar10 = Utility_Algorithms_CompressionAlgorithm__CompressString
                            (pUVar4,pSVar9,1,(MethodInfo *)0x0),
       pSVar8 != (System_Object_array *)0x0)) {
      if ((pSVar10 != (System_Byte_array *)0x0) &&
         (lVar11 = il2cpp_runtime_glue(pSVar10,(((pSVar8->obj).klass)->_1).element_class),
         lVar11 == 0)) {
LAB_04229c2b:
        uVar12 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
        il2cpp_glue_02274a00(uVar12,0);
      }
      if ((int)pSVar8->max_length == 0) {
LAB_04229c26:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pSVar8->m_Items[0] = &pSVar10->obj;
      il2cpp_runtime_glue(pSVar8->m_Items,pSVar10);
      if (pPVar3 != (Photon_Pun_PhotonView_o *)0x0) {
        Photon_Pun_PhotonView__RPC(pPVar3,"PlayerInfoRPC",player,pSVar8,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
          il2cpp_init_class();
          bVar7 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
          cVar6 = (char)bVar7;
        }
        else {
          bVar7 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
          cVar6 = (char)bVar7;
        }
        if (cVar6 == '\0') goto LAB_04229bc4;
        pPVar3 = (Photon_Pun_PhotonView_o *)**(undefined8 **)(TypeInfo_RPCManager + 0xb8);
        pSVar8 = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,1);
        if (*(int *)(TypeInfo_DataCompressors + 0xe4) == 0) {
          il2cpp_init_class();
        }
        plVar5 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
        if (plVar5 != (long *)0x0) {
          pUVar4 = (Utility_Algorithms_CompressionAlgorithm_o *)
                   **(undefined8 **)(TypeInfo_DataCompressors + 0xb8);
          pSVar9 = (System_String_o *)
                   (**(code **)(*plVar5 + 0x1a8))(plVar5,*(undefined8 *)(*plVar5 + 0x1b0));
          if ((pUVar4 != (Utility_Algorithms_CompressionAlgorithm_o *)0x0) &&
             (pSVar10 = Utility_Algorithms_CompressionAlgorithm__CompressString
                                  (pUVar4,pSVar9,1,(MethodInfo *)0x0),
             pSVar8 != (System_Object_array *)0x0)) {
            if ((pSVar10 != (System_Byte_array *)0x0) &&
               (lVar11 = il2cpp_runtime_glue(pSVar10,(((pSVar8->obj).klass)->_1).element_class),
               lVar11 == 0)) goto LAB_04229c2b;
            if ((int)pSVar8->max_length == 0) goto LAB_04229c26;
            pSVar8->m_Items[0] = &pSVar10->obj;
            il2cpp_runtime_glue(pSVar8->m_Items,pSVar10);
            if (pPVar3 != (Photon_Pun_PhotonView_o *)0x0) {
              Photon_Pun_PhotonView__RPC(pPVar3,"GameSettingsRPC",player,pSVar8,(MethodInfo *)0x0);
              if (*(char *)((long)&(__this->fields)._gameSettingsLoaded + 2) != '\0') {
                pPVar3 = (Photon_Pun_PhotonView_o *)**(undefined8 **)(TypeInfo_RPCManager + 0xb8);
                pSVar8 = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,0);
                if (pPVar3 == (Photon_Pun_PhotonView_o *)0x0) goto LAB_04229c21;
                Photon_Pun_PhotonView__RPC(pPVar3,"PauseGameRPC",player,pSVar8,(MethodInfo *)0x0);
              }
LAB_04229bc4:
              if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
                pMVar13 = TypeInfo_ChatManager;
                il2cpp_init_class();
                bVar7 = GameManagers_ChatManager__HasActivePlayerSuggestions(pMVar13);
                cVar6 = (char)bVar7;
                pMVar13 = TypeInfo_ChatManager;
              }
              else {
                bVar7 = GameManagers_ChatManager__HasActivePlayerSuggestions(TypeInfo_ChatManager);
                cVar6 = (char)bVar7;
                pMVar13 = TypeInfo_ChatManager;
              }
              if (cVar6 != '\0') {
                TypeInfo_ChatManager = pMVar13;
                if (*(int *)((long)&pMVar13[2].parameters + 4) == 0) {
                  il2cpp_init_class();
                }
                GameManagers_ChatManager__RefreshPlayerSuggestions(pMVar13);
                return;
              }
              TypeInfo_ChatManager = pMVar13;
              return;
            }
          }
        }
      }
    }
  }
LAB_04229c21:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.InGameManager$$OnNotifyPlayerJoined
// il2cpp: void GameManagers_InGameManager__OnNotifyPlayerJoined (GameManagers_InGameManager_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x4229c40

void GameManagers_InGameManager__OnNotifyPlayerJoined
               (GameManagers_InGameManager_o *__this,Photon_Realtime_Player_o *player,
               MethodInfo *method)

{
  int iVar1;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  long lVar2;
  char cVar3;
  bool_conflict bVar4;
  System_String_o *pSVar5;
  System_String_o *str1;
  MethodInfo *pMVar6;
  MethodInfo *in_stack_ffffffffffffffd8;
  
  if (DAT_057050fc == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&TypeInfo_PlayerProperty);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    il2cpp_init_method_metadata(&" has joined the room.");
    il2cpp_init_method_metadata(&"");
    DAT_057050fc = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  else {
    __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    CustomLogic_CustomLogicEvaluator__OnPlayerJoin(__this_00,player,(MethodInfo *)0x0);
    lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
    if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x168), lVar2 != 0)) {
      if (*(char *)(lVar2 + 0x11) != '\0') {
        if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pMVar6 = (MethodInfo *)0x0;
        pSVar5 = PhotonExtensions__GetStringProperty
                           (player,(System_String_o *)**(undefined8 **)(TypeInfo_PlayerProperty + 0xb8),
                            "",(MethodInfo *)0x0);
        if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
          il2cpp_init_class();
        }
        str1 = GameManagers_ChatManager__GetColorString(" has joined the room.",3,0,pMVar6);
        pSVar5 = System_String__Concat(pSVar5,str1,(MethodInfo *)0x0);
        GameManagers_ChatManager__AddLine
                  (pSVar5,0,0,(System_Nullable_DateTime__o)ZEXT816(0),-1,0,0,-1,0,
                   in_stack_ffffffffffffffd8);
      }
      if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
        pMVar6 = TypeInfo_ChatManager;
        il2cpp_init_class();
        bVar4 = GameManagers_ChatManager__HasActivePlayerSuggestions(pMVar6);
        cVar3 = (char)bVar4;
        pMVar6 = TypeInfo_ChatManager;
      }
      else {
        bVar4 = GameManagers_ChatManager__HasActivePlayerSuggestions(TypeInfo_ChatManager);
        cVar3 = (char)bVar4;
        pMVar6 = TypeInfo_ChatManager;
      }
      if (cVar3 == '\0') {
        TypeInfo_ChatManager = pMVar6;
        return;
      }
      TypeInfo_ChatManager = pMVar6;
      if (*(int *)((long)&pMVar6[2].parameters + 4) != 0) {
        GameManagers_ChatManager__RefreshPlayerSuggestions(pMVar6);
        return;
      }
      il2cpp_init_class();
      GameManagers_ChatManager__RefreshPlayerSuggestions(pMVar6);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.InGameManager$$OnPlayerLeftRoom
// il2cpp: void GameManagers_InGameManager__OnPlayerLeftRoom (GameManagers_InGameManager_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x4229e50

void GameManagers_InGameManager__OnPlayerLeftRoom
               (GameManagers_InGameManager_o *__this,Photon_Realtime_Player_o *player,
               MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_int__object__o *pSVar2;
  long lVar3;
  System_Collections_Generic_HashSet_int__o *pSVar4;
  System_Collections_Generic_Dictionary_int__float__o *pSVar5;
  char cVar6;
  bool_conflict bVar7;
  Il2CppObject *pIVar8;
  System_String_o *pSVar9;
  System_String_o *str1;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  MethodInfo *pMVar10;
  UI_ChatPanel_o *__this_01;
  UnityEngine_Component_o *__this_02;
  MethodInfo *in_stack_ffffffffffffffd8;
  
  if (DAT_057050fd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AnticheatManager);
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&MethodInfo_InGameMenu_GetComponent_InGameMenu);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Remove);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Remove);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Remove);
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_PlayerProperty);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"");
    il2cpp_init_method_metadata(&" has left the room.");
    DAT_057050fd = '\x01';
  }
  Photon_Pun_MonoBehaviourPunCallbacks__OnPlayerLeftRoom
            ((Photon_Pun_MonoBehaviourPunCallbacks_o *)__this,player,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
    __this_02 = *(UnityEngine_Component_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (__this_02 != (UnityEngine_Component_o *)0x0) goto LAB_04229f91;
LAB_04229fc1:
    __this_01 = (UI_ChatPanel_o *)0x0;
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    __this_02 = *(UnityEngine_Component_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (__this_02 == (UnityEngine_Component_o *)0x0) goto LAB_04229fc1;
LAB_04229f91:
    pIVar8 = UnityEngine_Component__GetComponent<object>(__this_02,MethodInfo_InGameMenu_GetComponent_InGameMenu);
    if (pIVar8 == (Il2CppObject *)0x0) goto LAB_04229fc1;
    __this_01 = pIVar8[0xc].monitor;
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  bVar7 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                    );
  if ((char)bVar7 != '\0') {
    if (__this_01 == (UI_ChatPanel_o *)0x0) goto LAB_0422a436;
    UI_ChatPanel__RemovePMPartner(__this_01,player,(MethodInfo *)0x0);
    UI_ChatPanel__Sync(__this_01,(MethodInfo *)0x0);
  }
  if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if ((player != (Photon_Realtime_Player_o *)0x0) &&
     (pSVar2 = *(System_Collections_Generic_Dictionary_int__object__o **)
                (*(long *)(TypeInfo_InGameManager + 0xb8) + 0x18),
     pSVar2 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
    bVar7 = System_Collections_Generic_Dictionary<int__object>__ContainsKey
                      (pSVar2,(player->fields).actorNumber,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar7 != '\0') {
      if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar2 = *(System_Collections_Generic_Dictionary_int__object__o **)
                (*(long *)(TypeInfo_InGameManager + 0xb8) + 0x18);
      if (pSVar2 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto LAB_0422a436;
      System_Collections_Generic_Dictionary<int__object>__Remove
                (pSVar2,(player->fields).actorNumber,MethodInfo_Boolean_Remove);
    }
    lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
    if ((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x168), lVar3 != 0)) {
      if (*(char *)(lVar3 + 0x11) != '\0') {
        if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pMVar10 = (MethodInfo *)0x0;
        pSVar9 = PhotonExtensions__GetStringProperty
                           (player,(System_String_o *)**(undefined8 **)(TypeInfo_PlayerProperty + 0xb8),
                            "",(MethodInfo *)0x0);
        if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
          il2cpp_init_class();
        }
        str1 = GameManagers_ChatManager__GetColorString(" has left the room.",3,0,pMVar10);
        pSVar9 = System_String__Concat(pSVar9,str1,(MethodInfo *)0x0);
        GameManagers_ChatManager__AddLine
                  (pSVar9,0,0,(System_Nullable_DateTime__o)ZEXT816(0),-1,0,0,-1,0,
                   in_stack_ffffffffffffffd8);
      }
      if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
        il2cpp_init_class();
        __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
      }
      else {
        __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
      }
      if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
        if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
          il2cpp_init_class();
          __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
          if (__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) goto LAB_0422a436;
        }
        CustomLogic_CustomLogicEvaluator__OnPlayerLeave(__this_00,player,(MethodInfo *)0x0);
      }
      if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar4 = *(System_Collections_Generic_HashSet_int__o **)
                (*(long *)(TypeInfo_InGameManager + 0xb8) + 0x20);
      if (pSVar4 != (System_Collections_Generic_HashSet_int__o *)0x0) {
        bVar7 = System_Collections_Generic_HashSet<int>__Contains
                          (pSVar4,(player->fields).actorNumber,MethodInfo_Boolean_Contains);
        if ((char)bVar7 != '\0') {
          if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar4 = *(System_Collections_Generic_HashSet_int__o **)
                    (*(long *)(TypeInfo_InGameManager + 0xb8) + 0x20);
          if (pSVar4 == (System_Collections_Generic_HashSet_int__o *)0x0) goto LAB_0422a436;
          System_Collections_Generic_HashSet<int>__Remove
                    (pSVar4,(player->fields).actorNumber,MethodInfo_Boolean_Remove);
        }
        if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar4 = *(System_Collections_Generic_HashSet_int__o **)
                  (*(long *)(TypeInfo_InGameManager + 0xb8) + 0x28);
        if (pSVar4 != (System_Collections_Generic_HashSet_int__o *)0x0) {
          bVar7 = System_Collections_Generic_HashSet<int>__Contains
                            (pSVar4,(player->fields).actorNumber,MethodInfo_Boolean_Contains);
          if ((char)bVar7 != '\0') {
            if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar4 = *(System_Collections_Generic_HashSet_int__o **)
                      (*(long *)(TypeInfo_InGameManager + 0xb8) + 0x28);
            if (pSVar4 == (System_Collections_Generic_HashSet_int__o *)0x0) goto LAB_0422a436;
            System_Collections_Generic_HashSet<int>__Remove
                      (pSVar4,(player->fields).actorNumber,MethodInfo_Boolean_Remove);
          }
          if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar4 = *(System_Collections_Generic_HashSet_int__o **)
                    (*(long *)(TypeInfo_InGameManager + 0xb8) + 0x30);
          if (pSVar4 != (System_Collections_Generic_HashSet_int__o *)0x0) {
            bVar7 = System_Collections_Generic_HashSet<int>__Contains
                              (pSVar4,(player->fields).actorNumber,MethodInfo_Boolean_Contains);
            if ((char)bVar7 != '\0') {
              if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar4 = *(System_Collections_Generic_HashSet_int__o **)
                        (*(long *)(TypeInfo_InGameManager + 0xb8) + 0x30);
              if (pSVar4 == (System_Collections_Generic_HashSet_int__o *)0x0) goto LAB_0422a436;
              System_Collections_Generic_HashSet<int>__Remove
                        (pSVar4,(player->fields).actorNumber,MethodInfo_Boolean_Remove);
            }
            if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar5 = *(System_Collections_Generic_Dictionary_int__float__o **)
                      (*(long *)(TypeInfo_InGameManager + 0xb8) + 0x38);
            if (pSVar5 != (System_Collections_Generic_Dictionary_int__float__o *)0x0) {
              bVar7 = System_Collections_Generic_Dictionary<int__float>__ContainsKey
                                (pSVar5,(player->fields).actorNumber,MethodInfo_Boolean_ContainsKey);
              if ((char)bVar7 != '\0') {
                if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                pSVar5 = *(System_Collections_Generic_Dictionary_int__float__o **)
                          (*(long *)(TypeInfo_InGameManager + 0xb8) + 0x38);
                if (pSVar5 == (System_Collections_Generic_Dictionary_int__float__o *)0x0)
                goto LAB_0422a436;
                System_Collections_Generic_Dictionary<int__float>__Remove
                          (pSVar5,(player->fields).actorNumber,MethodInfo_Boolean_Remove);
              }
              if (*(int *)(TypeInfo_AnticheatManager + 0xe4) == 0) {
                il2cpp_init_class();
              }
              Anticheat_AnticheatManager__ResetVoteKicks(player,(MethodInfo *)0x0);
              if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
                pMVar10 = TypeInfo_ChatManager;
                il2cpp_init_class();
                bVar7 = GameManagers_ChatManager__HasActivePlayerSuggestions(pMVar10);
                cVar6 = (char)bVar7;
                pMVar10 = TypeInfo_ChatManager;
              }
              else {
                bVar7 = GameManagers_ChatManager__HasActivePlayerSuggestions(TypeInfo_ChatManager);
                cVar6 = (char)bVar7;
                pMVar10 = TypeInfo_ChatManager;
              }
              if (cVar6 != '\0') {
                TypeInfo_ChatManager = pMVar10;
                if (*(int *)((long)&pMVar10[2].parameters + 4) == 0) {
                  il2cpp_init_class();
                  GameManagers_ChatManager__RefreshPlayerSuggestions(pMVar10);
                  return;
                }
                GameManagers_ChatManager__RefreshPlayerSuggestions(pMVar10);
                return;
              }
              TypeInfo_ChatManager = pMVar10;
              return;
            }
          }
        }
      }
    }
  }
LAB_0422a436:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.InGameManager$$OnMasterClientSwitched
// il2cpp: void GameManagers_InGameManager__OnMasterClientSwitched (GameManagers_InGameManager_o* __this, Photon_Realtime_Player_o* newMasterClient, const MethodInfo* method);
// 0x422a440

void GameManagers_InGameManager__OnMasterClientSwitched
               (GameManagers_InGameManager_o *__this,Photon_Realtime_Player_o *newMasterClient,
               MethodInfo *method)

{
  char cVar1;
  bool_conflict bVar2;
  System_Object_array *args;
  System_String_o *pSVar3;
  long lVar4;
  undefined8 uVar5;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  MethodInfo *in_stack_ffffffffffffffd8;
  
  if (DAT_057050fe == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_PlayerProperty);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"InGame");
    il2cpp_init_method_metadata(&"MasterclientChangeTo");
    il2cpp_init_method_metadata(&"Chat");
    il2cpp_init_method_metadata(&"");
    DAT_057050fe = '\x01';
    method = extraout_RDX;
  }
  args = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,1,method);
  if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar3 = PhotonExtensions__GetStringProperty
                     (newMasterClient,(System_String_o *)**(undefined8 **)(TypeInfo_PlayerProperty + 0xb8),
                      "",(MethodInfo *)0x0);
  if (args == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((pSVar3 != (System_String_o *)0x0) &&
     (lVar4 = il2cpp_runtime_glue(pSVar3,(((args->obj).klass)->_1).element_class), lVar4 == 0)) {
    uVar5 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(uVar5,0);
  }
  if ((int)args->max_length == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  args->m_Items[0] = (Il2CppObject *)pSVar3;
  il2cpp_runtime_glue(args->m_Items,pSVar3);
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar3 = UI_UIManager__GetLocaleFormatted
                     ("InGame","Chat","MasterclientChangeTo",args,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  GameManagers_ChatManager__AddLine
            (pSVar3,3,0,(System_Nullable_DateTime__o)ZEXT816(0),-1,0,0,-1,0,
             in_stack_ffffffffffffffd8);
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  CustomLogic_CustomLogicManager__WaitForRestart((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_init_class();
    bVar2 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar1 = (char)bVar2;
    method_00 = TypeInfo_InGameManager;
  }
  else {
    bVar2 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar1 = (char)bVar2;
    method_00 = TypeInfo_InGameManager;
  }
  if (cVar1 != '\0') {
    TypeInfo_InGameManager = method_00;
    if (*(int *)((long)&method_00[2].parameters + 4) == 0) {
      il2cpp_init_class();
      GameManagers_InGameManager__RestartGame(method_00);
      return;
    }
    GameManagers_InGameManager__RestartGame(method_00);
    return;
  }
  TypeInfo_InGameManager = method_00;
  return;
}


// GameManagers.InGameManager$$OnPlayerInfoRPC
// il2cpp: void GameManagers_InGameManager__OnPlayerInfoRPC (System_Byte_array* data, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x422a6a0

void GameManagers_InGameManager__OnPlayerInfoRPC
               (System_Byte_array *data,Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  int32_t key;
  System_Collections_Generic_Dictionary_int__object__o *pSVar1;
  System_Collections_Generic_HashSet_object__o *__this;
  void *pvVar2;
  bool_conflict bVar3;
  GameManagers_PlayerInfo_o *__this_00;
  Il2CppObject *pIVar4;
  System_String_o *pSVar5;
  
  if (DAT_057050ff == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AnticheatManager);
    il2cpp_init_method_metadata(&TypeInfo_DataCompressors);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_PlayerInfo_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&TypeInfo_PlayerInfo);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&"");
    DAT_057050ff = '\x01';
  }
  if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if ((info.fields.Sender != (Photon_Realtime_Player_o *)0x0) &&
     (pSVar1 = *(System_Collections_Generic_Dictionary_int__object__o **)
                (*(long *)(TypeInfo_InGameManager + 0xb8) + 0x18),
     pSVar1 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
    bVar3 = System_Collections_Generic_Dictionary<int__object>__ContainsKey
                      (pSVar1,((info.fields.Sender)->fields).actorNumber,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar3 == '\0') {
      if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar1 = *(System_Collections_Generic_Dictionary_int__object__o **)
                (*(long *)(TypeInfo_InGameManager + 0xb8) + 0x18);
      key = ((info.fields.Sender)->fields).actorNumber;
      __this_00 = (GameManagers_PlayerInfo_o *)il2cpp_runtime_glue(TypeInfo_PlayerInfo);
      GameManagers_PlayerInfo___ctor(__this_00,(MethodInfo *)0x0);
      if (pSVar1 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto LAB_0422a979;
      System_Collections_Generic_Dictionary<int__object>__Add
                (pSVar1,key,(Il2CppObject *)__this_00,MethodInfo_Void_Add);
    }
    if (data != (System_Byte_array *)0x0) {
      if (1000 < (int)data->max_length) {
        return;
      }
      if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar1 = *(System_Collections_Generic_Dictionary_int__object__o **)
                (*(long *)(TypeInfo_InGameManager + 0xb8) + 0x18);
      if (pSVar1 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
        pIVar4 = System_Collections_Generic_Dictionary<int__object>__get_Item
                           (pSVar1,((info.fields.Sender)->fields).actorNumber,MethodInfo_PlayerInfo_get_Item);
        if (*(int *)(TypeInfo_DataCompressors + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (((Utility_Algorithms_CompressionAlgorithm_o *)**(undefined8 **)(TypeInfo_DataCompressors + 0xb8) !=
             (Utility_Algorithms_CompressionAlgorithm_o *)0x0) &&
           (pSVar5 = Utility_Algorithms_CompressionAlgorithm__DecompressString
                               ((Utility_Algorithms_CompressionAlgorithm_o *)
                                **(undefined8 **)(TypeInfo_DataCompressors + 0xb8),data,0x1000,0xa00000,
                                (MethodInfo *)0x0), pIVar4 != (Il2CppObject *)0x0)) {
          (*pIVar4->klass->vtable[8].methodPtr)(pIVar4,pSVar5,pIVar4->klass->vtable[8].method);
          if (*(int *)(TypeInfo_AnticheatManager + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar1 = *(System_Collections_Generic_Dictionary_int__object__o **)
                    (*(long *)(TypeInfo_InGameManager + 0xb8) + 0x18);
          if (pSVar1 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
            __this = *(System_Collections_Generic_HashSet_object__o **)
                      (*(long *)(TypeInfo_AnticheatManager + 0xb8) + 0x18);
            pIVar4 = System_Collections_Generic_Dictionary<int__object>__get_Item
                               (pSVar1,((info.fields.Sender)->fields).actorNumber,MethodInfo_PlayerInfo_get_Item);
            if ((((pIVar4 != (Il2CppObject *)0x0) && (pIVar4[2].klass != (Il2CppClass *)0x0)) &&
                (pvVar2 = ((pIVar4[2].klass)->_1).typeMetadataHandle, pvVar2 != (void *)0x0)) &&
               (__this != (System_Collections_Generic_HashSet_object__o *)0x0)) {
              bVar3 = System_Collections_Generic_HashSet<object>__Contains
                                (__this,*(Il2CppObject **)((long)pvVar2 + 0x18),MethodInfo_Boolean_Contains);
              if ((char)bVar3 == '\0') {
                return;
              }
              if (*(int *)(TypeInfo_AnticheatManager + 0xe4) == 0) {
                il2cpp_init_class();
              }
              Anticheat_AnticheatManager__KickPlayer
                        (info.fields.Sender,0,"",(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
LAB_0422a979:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.InGameManager$$OnGameSettingsRPC
// il2cpp: void GameManagers_InGameManager__OnGameSettingsRPC (System_Byte_array* data, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x422a980

void GameManagers_InGameManager__OnGameSettingsRPC
               (System_Byte_array *data,Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  byte bVar1;
  float fVar2;
  long *plVar3;
  long lVar4;
  System_String_o *original;
  bool_conflict bVar5;
  System_String_o *pSVar6;
  GameManagers_InGameManager__RespawnForever_d__60_o *__this;
  Il2CppClass *method_00;
  GameManagers_InGameManager_o *__this_00;
  
  if (DAT_05705100 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_DataCompressors);
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Single_get_Value);
    il2cpp_init_method_metadata(&TypeInfo_VoiceChatManager);
    DAT_05705100 = '\x01';
  }
  if (info.fields.Sender != (Photon_Realtime_Player_o *)0x0) {
    bVar5 = Photon_Realtime_Player__get_IsMasterClient(info.fields.Sender,(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') {
      return;
    }
    plVar3 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
    if (((plVar3 != (long *)0x0) && (plVar3[0xb] != 0)) &&
       (lVar4 = *(long *)(plVar3[0xb] + 0x100), lVar4 != 0)) {
      original = *(System_String_o **)(lVar4 + 0x18);
      if (*(int *)(TypeInfo_DataCompressors + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if ((Utility_Algorithms_CompressionAlgorithm_o *)**(undefined8 **)(TypeInfo_DataCompressors + 0xb8) !=
          (Utility_Algorithms_CompressionAlgorithm_o *)0x0) {
        pSVar6 = Utility_Algorithms_CompressionAlgorithm__DecompressString
                           ((Utility_Algorithms_CompressionAlgorithm_o *)
                            **(undefined8 **)(TypeInfo_DataCompressors + 0xb8),data,0x1000,0xa00000,
                            (MethodInfo *)0x0);
        (**(code **)(*plVar3 + 0x1b8))(plVar3,pSVar6,*(undefined8 *)(*plVar3 + 0x1c0));
        method_00 = TypeInfo_InGameManager;
        __this_00 = *(GameManagers_InGameManager_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
        if (__this_00 != (GameManagers_InGameManager_o *)0x0) {
          bVar1 = (TypeInfo_InGameManager->_2).naturalAligment;
          if (((__this_00->klass->_2).naturalAligment < bVar1) ||
             ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_InGameManager)) {
LAB_0422ac49:
                    /* WARNING: Subroutine does not return */
            il2cpp_unwind_resume(__this_00);
          }
          *(undefined1 *)&(__this_00->fields)._gameSettingsLoaded = 1;
          if (*(int *)&(method_00->_2).field_0x1c == 0) {
            il2cpp_init_class(method_00);
          }
          GameManagers_InGameManager__PrintMOTD(original,(MethodInfo *)method_00);
          if (*(int *)(TypeInfo_VoiceChatManager + 0xe4) == 0) {
            il2cpp_init_class();
          }
          ApplicationManagers_VoiceChatManager__ApplySoundSettings((MethodInfo *)0x0);
          lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
          if (((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x58), lVar4 != 0)) &&
             (*(long *)(lVar4 + 0x28) != 0)) {
            if (*(char *)(*(long *)(lVar4 + 0x28) + 0x11) == '\0') {
              return;
            }
            __this_00 = *(GameManagers_InGameManager_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
            if (__this_00 != (GameManagers_InGameManager_o *)0x0) {
              bVar1 = (TypeInfo_InGameManager->_2).naturalAligment;
              if (((__this_00->klass->_2).naturalAligment < bVar1) ||
                 ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_InGameManager))
              goto LAB_0422ac49;
            }
            if ((*(long *)(lVar4 + 0x30) != 0) && (__this_00 != (GameManagers_InGameManager_o *)0x0)
               ) {
              fVar2 = *(float *)(*(long *)(lVar4 + 0x30) + 0x14);
              if (DAT_05705104 == '\0') {
                il2cpp_init_method_metadata(&TypeInfo_RespawnForever_d__60);
                DAT_05705104 = '\x01';
              }
              __this = (GameManagers_InGameManager__RespawnForever_d__60_o *)
                       il2cpp_runtime_glue(TypeInfo_RespawnForever_d__60);
              GameManagers_InGameManager_<RespawnForever>d__60___ctor(__this,0,(MethodInfo *)0x0);
              if (__this != (GameManagers_InGameManager__RespawnForever_d__60_o *)0x0) {
                (__this->fields).__4__this = __this_00;
                il2cpp_runtime_glue(&(__this->fields).__4__this,__this_00);
                (__this->fields).delay = fVar2;
                UnityEngine_MonoBehaviour__StartCoroutine
                          ((UnityEngine_MonoBehaviour_o *)__this_00,
                           (System_Collections_IEnumerator_o *)__this,(MethodInfo *)0x0);
                return;
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


// GameManagers.InGameManager$$OnCharacterChosen
// il2cpp: void GameManagers_InGameManager__OnCharacterChosen (const MethodInfo* method);
// 0x422ae10

void GameManagers_InGameManager__OnCharacterChosen(MethodInfo *method)

{
  int iVar1;
  MethodInfo *method_00;
  
  if (DAT_05705101 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    DAT_05705101 = '\x01';
    iVar1 = *(int *)((long)&TypeInfo_InGameManager[2].parameters + 4);
    method_00 = TypeInfo_InGameManager;
  }
  else {
    iVar1 = *(int *)((long)&TypeInfo_InGameManager[2].parameters + 4);
    method_00 = TypeInfo_InGameManager;
  }
  TypeInfo_InGameManager = method_00;
  if (iVar1 != 0) {
    GameManagers_InGameManager__ResetRespawnTimeLeft(method_00);
    return;
  }
  il2cpp_init_class();
  GameManagers_InGameManager__ResetRespawnTimeLeft(method_00);
  return;
}


// GameManagers.InGameManager$$OnLocalPlayerDied
// il2cpp: void GameManagers_InGameManager__OnLocalPlayerDied (Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x422af30

void GameManagers_InGameManager__OnLocalPlayerDied
               (Photon_Realtime_Player_o *player,MethodInfo *method)

{
  int iVar1;
  MethodInfo *method_00;
  
  if (DAT_05705102 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    DAT_05705102 = '\x01';
    iVar1 = *(int *)((long)&TypeInfo_InGameManager[2].parameters + 4);
    method_00 = TypeInfo_InGameManager;
  }
  else {
    iVar1 = *(int *)((long)&TypeInfo_InGameManager[2].parameters + 4);
    method_00 = TypeInfo_InGameManager;
  }
  TypeInfo_InGameManager = method_00;
  if (iVar1 != 0) {
    GameManagers_InGameManager__ResetRespawnTimeLeft(method_00);
    return;
  }
  il2cpp_init_class();
  GameManagers_InGameManager__ResetRespawnTimeLeft(method_00);
  return;
}


// GameManagers.InGameManager$$ResetRespawnTimeLeft
// il2cpp: void GameManagers_InGameManager__ResetRespawnTimeLeft (const MethodInfo* method);
// 0x422ae60

void GameManagers_InGameManager__ResetRespawnTimeLeft(MethodInfo *method)

{
  long lVar1;
  long *plVar2;
  
  if (DAT_05705103 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Single_get_Value);
    DAT_05705103 = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
  if ((((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x58), lVar1 != 0)) &&
      (lVar1 = *(long *)(lVar1 + 0x30), lVar1 != 0)) &&
     (plVar2 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10), plVar2 != (long *)0x0)) {
    if ((*(byte *)(TypeInfo_InGameManager + 0x130) <= *(byte *)(*plVar2 + 0x130)) &&
       (*(long *)(*(long *)(*plVar2 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameManager + 0x130) * 8) ==
        TypeInfo_InGameManager)) {
      *(undefined4 *)(plVar2 + 0x10) = *(undefined4 *)(lVar1 + 0x14);
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.InGameManager$$RespawnForever
// il2cpp: System_Collections_IEnumerator_o* GameManagers_InGameManager__RespawnForever (GameManagers_InGameManager_o* __this, float delay, const MethodInfo* method);
// 0x422ad90

System_Collections_IEnumerator_o *
GameManagers_InGameManager__RespawnForever
          (GameManagers_InGameManager_o *__this,float delay,MethodInfo *method)

{
  GameManagers_InGameManager__RespawnForever_d__60_o *__this_00;
  
  if (DAT_05705104 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_RespawnForever_d__60);
    DAT_05705104 = '\x01';
  }
  __this_00 = (GameManagers_InGameManager__RespawnForever_d__60_o *)il2cpp_runtime_glue(TypeInfo_RespawnForever_d__60)
  ;
  GameManagers_InGameManager_<RespawnForever>d__60___ctor(__this_00,0,(MethodInfo *)0x0);
  if (__this_00 != (GameManagers_InGameManager__RespawnForever_d__60_o *)0x0) {
    (__this_00->fields).__4__this = __this;
    il2cpp_runtime_glue(&(__this_00->fields).__4__this,__this);
    (__this_00->fields).delay = delay;
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.InGameManager$$SpawnPlayer
// il2cpp: void GameManagers_InGameManager__SpawnPlayer (GameManagers_InGameManager_o* __this, bool force, const MethodInfo* method);
// 0x422af90

void GameManagers_InGameManager__SpawnPlayer
               (GameManagers_InGameManager_o *__this,bool_conflict force,MethodInfo *method)

{
  long lVar1;
  Settings_TypedSetting_T__o *__this_00;
  System_String_o *a;
  char cVar2;
  bool_conflict bVar3;
  bool_conflict bVar4;
  Photon_Realtime_Player_o *pPVar5;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  GameManagers_InGameManager_o *__this_01;
  UnityEngine_Vector3_o UVar6;
  UnityEngine_Vector3_o euler;
  UnityEngine_Vector3_o position;
  System_ValueTuple_Vector3__Quaternion__o local_58;
  undefined1 local_38 [24];
  
  if (DAT_05705105 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_PlayerCharacter);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    DAT_05705105 = '\x01';
    method = extraout_RDX;
  }
  cVar2 = (*(__this->klass->vtable)._56_IsFinishedLoading.methodPtr)
                    (__this,(__this->klass->vtable)._56_IsFinishedLoading.method,method);
  if (cVar2 != '\0') {
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    lVar1 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
    if (lVar1 == 0) goto LAB_0422b222;
    bVar3 = System_String__op_Inequality
                      (*(System_String_o **)(lVar1 + 0x88),
                       (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x70);
      if (lVar1 == 0) goto LAB_0422b222;
      __this_00 = *(Settings_TypedSetting_T__o **)(lVar1 + 0x28);
      if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      lVar1 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
      if ((lVar1 == 0) || (__this_00 == (Settings_TypedSetting_T__o *)0x0)) goto LAB_0422b222;
      Settings_TypedSetting<object>__set_Value
                (__this_00,*(Il2CppObject **)(lVar1 + 0x88),MethodInfo_Void_set_Value);
    }
    lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x70);
    if ((lVar1 == 0) || (lVar1 = *(long *)(lVar1 + 0x28), lVar1 == 0)) {
LAB_0422b222:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    a = *(System_String_o **)(lVar1 + 0x18);
    if (*(int *)(TypeInfo_PlayerCharacter + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar3 = System_String__op_Equality
                      (a,(System_String_o *)**(undefined8 **)(TypeInfo_PlayerCharacter + 0xb8),(MethodInfo *)0x0
                      );
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pPVar5 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    __this_01 = (GameManagers_InGameManager_o *)0x0;
    bVar4 = PhotonExtensions__HasSpawnPoint(pPVar5,(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pPVar5 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
      UVar6 = PhotonExtensions__GetSpawnPoint(pPVar5,(MethodInfo *)0x0);
      GameManagers_InGameManager__SpawnPlayerAt(__this,force & 0xff,UVar6,0.0,method_01);
      return;
    }
    if ((char)bVar3 == '\0') {
      GameManagers_InGameManager__GetTitanSpawnPoint(&local_58,__this_01,method_00);
    }
    else {
      GameManagers_InGameManager__GetHumanSpawnPoint(&local_58,__this_01,method_00);
    }
    local_38._0_4_ = local_58.fields.Item1.fields.x;
    local_38._4_4_ = local_58.fields.Item1.fields.y;
    local_38._8_8_ = 0;
    UVar6 = UnityEngine_Quaternion__Internal_ToEulerRad(local_58.fields.Item2,(MethodInfo *)0x0);
    euler.fields.x = UVar6.fields.x * 57.29578;
    euler.fields.y = UVar6.fields.y * 57.29578;
    euler.fields.z = UVar6.fields.z * 57.29578;
    UVar6 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
    position.fields.z = local_58.fields.Item1.fields.z;
    position.fields.x = (float)local_38._0_4_;
    position.fields.y = (float)local_38._4_4_;
    GameManagers_InGameManager__SpawnPlayerAt(__this,force & 0xff,position,UVar6.fields.y,method_02)
    ;
  }
  return;
}


// GameManagers.InGameManager$$SpawnPlayerShifterAt
// il2cpp: void GameManagers_InGameManager__SpawnPlayerShifterAt (GameManagers_InGameManager_o* __this, System_String_o* shifterName, float liveTime, UnityEngine_Vector3_o position, float rotationY, const MethodInfo* method);
// 0x422cb10

void GameManagers_InGameManager__SpawnPlayerShifterAt
               (GameManagers_InGameManager_o *__this,System_String_o *shifterName,float liveTime,
               UnityEngine_Vector3_o position,float rotationY,MethodInfo *method)

{
  byte bVar1;
  int32_t health;
  long lVar2;
  undefined1 auVar3 [12];
  bool_conflict bVar4;
  Characters_BaseCharacter_o *__this_00;
  System_String_o *pSVar5;
  MethodInfo *method_00;
  Characters_BaseCharacter_o *__this_01;
  UnityEngine_Quaternion_o rotation;
  
  if (DAT_05705106 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BaseShifter);
    il2cpp_init_method_metadata(&TypeInfo_CharacterPrefabs);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&"Eren");
    il2cpp_init_method_metadata(&"Annie");
    il2cpp_init_method_metadata();
    DAT_05705106 = '\x01';
  }
  auVar3._4_8_ = 0;
  auVar3._0_4_ = rotationY * 0.017453292;
  rotation = UnityEngine_Quaternion__Internal_FromEulerRad
                       ((UnityEngine_Vector3_o)(auVar3 << 0x20),(MethodInfo *)0x0);
  bVar4 = System_String__op_Equality(shifterName,"Annie",(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    bVar4 = System_String__op_Equality(shifterName,"Eren",(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      __this_00 = (Characters_BaseCharacter_o *)0x0;
      bVar4 = System_String__op_Equality(shifterName,"Armored",(MethodInfo *)0x0);
      if ((char)bVar4 == '\0') goto LAB_0422ccf1;
      if (*(int *)(TypeInfo_CharacterPrefabs + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar5 = *(System_String_o **)(*(long *)(TypeInfo_CharacterPrefabs + 0xb8) + 0x28);
    }
    else {
      if (*(int *)(TypeInfo_CharacterPrefabs + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar5 = *(System_String_o **)(*(long *)(TypeInfo_CharacterPrefabs + 0xb8) + 0x18);
    }
  }
  else {
    if (*(int *)(TypeInfo_CharacterPrefabs + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar5 = *(System_String_o **)(*(long *)(TypeInfo_CharacterPrefabs + 0xb8) + 0x20);
  }
  __this_00 = Characters_CharacterSpawner__Spawn(pSVar5,position,rotation,(MethodInfo *)0x0);
  if (__this_00 != (Characters_BaseCharacter_o *)0x0) {
    bVar1 = (TypeInfo_BaseShifter->_2).naturalAligment;
    if (((__this_00->klass->_2).naturalAligment < bVar1) ||
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_BaseShifter)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(__this_00);
    }
  }
LAB_0422ccf1:
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this_01 = __this_00;
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                    );
  if ((char)bVar4 == '\0') {
    return;
  }
  pSVar5 = GameManagers_InGameManager__GetPlayerTeam
                     ((GameManagers_InGameManager_o *)__this_01,0,method_00);
  if (__this_00 != (Characters_BaseCharacter_o *)0x0) {
    (*(code *)__this_00->klass[1].vtable._46_OnRoomPropertiesUpdate.method)
              (liveTime,__this_00,0,pSVar5,0,
               __this_00->klass[1].vtable._47_OnPlayerPropertiesUpdate.methodPtr);
    (__this->fields).CurrentCharacter = __this_00;
    il2cpp_runtime_glue(&(__this->fields).CurrentCharacter,__this_00);
    lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
    if (((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x58), lVar2 != 0)) &&
       (lVar2 = *(long *)(lVar2 + 0x128), lVar2 != 0)) {
      health = *(int32_t *)(lVar2 + 0x14);
      if (health < 1) {
        return;
      }
      Characters_BaseCharacter__SetHealth(__this_00,health,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.InGameManager$$GetSetHumanSettings
// il2cpp: Settings_InGameCharacterSettings_o* GameManagers_InGameManager__GetSetHumanSettings (GameManagers_InGameManager_o* __this, const MethodInfo* method);
// 0x422cee0

Settings_InGameCharacterSettings_o *
GameManagers_InGameManager__GetSetHumanSettings
          (GameManagers_InGameManager_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  System_Object_array *pSVar6;
  long lVar7;
  Settings_TypedSetting_T__o *pSVar8;
  System_String_o *loadout;
  bool_conflict bVar9;
  uint uVar10;
  System_Collections_Generic_List_object__o *__this_00;
  Il2CppObject *pIVar11;
  System_Collections_Generic_List_string__o *__this_01;
  
  if (DAT_05705107 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanLoadout);
    il2cpp_init_method_metadata(&TypeInfo_HumanSpecials);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    DAT_05705107 = '\x01';
  }
  lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
  if (lVar4 == 0) goto LAB_0422d46c;
  lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x70);
  lVar4 = *(long *)(lVar4 + 0x58);
  __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_string);
  System_Collections_Generic_List<object>___ctor(__this_00,MethodInfo_List_1_System_String);
  if ((lVar4 == 0) || (*(long *)(lVar4 + 0x58) == 0)) goto LAB_0422d46c;
  if (*(char *)(*(long *)(lVar4 + 0x58) + 0x11) == '\0') {
LAB_0422d08a:
    lVar7 = *(long *)(lVar4 + 0x60);
  }
  else {
    if (*(int *)(TypeInfo_HumanLoadout + 0xe4) == 0) {
      il2cpp_init_class();
    }
    lVar7 = MethodInfo_Void_Add;
    if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_0422d46c;
    pIVar11 = (Il2CppObject *)**(undefined8 **)(TypeInfo_HumanLoadout + 0xb8);
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar6 = (__this_00->fields)._items;
    if (pSVar6 == (System_Object_array *)0x0) goto LAB_0422d46c;
    uVar10 = (__this_00->fields)._size;
    if ((uint)pSVar6->max_length <= uVar10) {
      System_Collections_Generic_List<object>__AddWithResize
                (__this_00,pIVar11,
                 *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
      goto LAB_0422d08a;
    }
    (__this_00->fields)._size = uVar10 + 1;
    pSVar6->m_Items[(int)uVar10] = pIVar11;
    il2cpp_runtime_glue(pSVar6->m_Items + (int)uVar10);
    lVar7 = *(long *)(lVar4 + 0x60);
  }
  if (lVar7 == 0) goto LAB_0422d46c;
  if (*(char *)(lVar7 + 0x11) == '\0') {
LAB_0422d133:
    lVar7 = *(long *)(lVar4 + 0x68);
  }
  else {
    if (*(int *)(TypeInfo_HumanLoadout + 0xe4) == 0) {
      il2cpp_init_class();
    }
    lVar7 = MethodInfo_Void_Add;
    if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_0422d46c;
    pIVar11 = *(Il2CppObject **)(*(long *)(TypeInfo_HumanLoadout + 0xb8) + 8);
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar6 = (__this_00->fields)._items;
    if (pSVar6 == (System_Object_array *)0x0) goto LAB_0422d46c;
    uVar10 = (__this_00->fields)._size;
    if ((uint)pSVar6->max_length <= uVar10) {
      System_Collections_Generic_List<object>__AddWithResize
                (__this_00,pIVar11,
                 *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
      goto LAB_0422d133;
    }
    (__this_00->fields)._size = uVar10 + 1;
    pSVar6->m_Items[(int)uVar10] = pIVar11;
    il2cpp_runtime_glue(pSVar6->m_Items + (int)uVar10);
    lVar7 = *(long *)(lVar4 + 0x68);
  }
  if (lVar7 == 0) goto LAB_0422d46c;
  if (*(char *)(lVar7 + 0x11) == '\0') {
LAB_0422d1dc:
    lVar7 = *(long *)(lVar4 + 0x70);
  }
  else {
    if (*(int *)(TypeInfo_HumanLoadout + 0xe4) == 0) {
      il2cpp_init_class();
    }
    lVar7 = MethodInfo_Void_Add;
    if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_0422d46c;
    pIVar11 = *(Il2CppObject **)(*(long *)(TypeInfo_HumanLoadout + 0xb8) + 0x18);
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar6 = (__this_00->fields)._items;
    if (pSVar6 == (System_Object_array *)0x0) goto LAB_0422d46c;
    uVar10 = (__this_00->fields)._size;
    if ((uint)pSVar6->max_length <= uVar10) {
      System_Collections_Generic_List<object>__AddWithResize
                (__this_00,pIVar11,
                 *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
      goto LAB_0422d1dc;
    }
    (__this_00->fields)._size = uVar10 + 1;
    pSVar6->m_Items[(int)uVar10] = pIVar11;
    il2cpp_runtime_glue(pSVar6->m_Items + (int)uVar10);
    lVar7 = *(long *)(lVar4 + 0x70);
  }
  if (lVar7 == 0) goto LAB_0422d46c;
  if (*(char *)(lVar7 + 0x11) == '\0') {
    if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_0422d46c;
    iVar3 = (__this_00->fields)._size;
  }
  else {
    if (*(int *)(TypeInfo_HumanLoadout + 0xe4) == 0) {
      il2cpp_init_class();
    }
    lVar7 = MethodInfo_Void_Add;
    if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_0422d46c;
    pIVar11 = *(Il2CppObject **)(*(long *)(TypeInfo_HumanLoadout + 0xb8) + 0x10);
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar6 = (__this_00->fields)._items;
    if (pSVar6 == (System_Object_array *)0x0) goto LAB_0422d46c;
    uVar10 = (__this_00->fields)._size;
    if (uVar10 < (uint)pSVar6->max_length) {
      (__this_00->fields)._size = uVar10 + 1;
      pSVar6->m_Items[(int)uVar10] = pIVar11;
      il2cpp_runtime_glue(pSVar6->m_Items + (int)uVar10);
      iVar3 = (__this_00->fields)._size;
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                (__this_00,pIVar11,
                 *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
      iVar3 = (__this_00->fields)._size;
    }
  }
  if (iVar3 == 0) {
    uVar10 = 0;
    if (*(int *)(TypeInfo_HumanLoadout + 0xe4) == 0) {
      il2cpp_init_class();
      uVar10 = (__this_00->fields)._size;
    }
    lVar7 = MethodInfo_Void_Add;
    pIVar11 = (Il2CppObject *)**(undefined8 **)(TypeInfo_HumanLoadout + 0xb8);
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar6 = (__this_00->fields)._items;
    if (pSVar6 == (System_Object_array *)0x0) goto LAB_0422d46c;
    if (uVar10 < (uint)pSVar6->max_length) {
      (__this_00->fields)._size = uVar10 + 1;
      pSVar6->m_Items[(int)uVar10] = pIVar11;
      il2cpp_runtime_glue(pSVar6->m_Items + (int)uVar10);
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                (__this_00,pIVar11,
                 *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
    }
  }
  if ((lVar5 != 0) && (*(long *)(lVar5 + 0x30) != 0)) {
    bVar9 = System_Collections_Generic_List<object>__Contains
                      (__this_00,*(Il2CppObject **)(*(long *)(lVar5 + 0x30) + 0x18),MethodInfo_Boolean_Contains);
    if ((char)bVar9 == '\0') {
      pSVar8 = *(Settings_TypedSetting_T__o **)(lVar5 + 0x30);
      pIVar11 = System_Collections_Generic_List<object>__get_Item(__this_00,0,MethodInfo_String_get_Item);
      if (pSVar8 == (Settings_TypedSetting_T__o *)0x0) goto LAB_0422d46c;
      Settings_TypedSetting<object>__set_Value(pSVar8,pIVar11,MethodInfo_Void_set_Value);
    }
    if ((*(long *)(lVar5 + 0x30) != 0) && (*(long *)(lVar4 + 0x80) != 0)) {
      loadout = *(System_String_o **)(*(long *)(lVar5 + 0x30) + 0x18);
      bVar2 = *(byte *)(*(long *)(lVar4 + 0x80) + 0x11);
      if (*(int *)(TypeInfo_HumanSpecials + 0xe4) == 0) {
        il2cpp_init_class();
      }
      __this_01 = Characters_HumanSpecials__GetSpecialNames(loadout,(uint)bVar2,(MethodInfo *)0x0);
      if ((*(long *)(lVar5 + 0x38) != 0) &&
         (__this_01 != (System_Collections_Generic_List_string__o *)0x0)) {
        bVar9 = System_Collections_Generic_List<object>__Contains
                          ((System_Collections_Generic_List_object__o *)__this_01,
                           *(Il2CppObject **)(*(long *)(lVar5 + 0x38) + 0x18),MethodInfo_Boolean_Contains);
        if ((char)bVar9 == '\0') {
          pSVar8 = *(Settings_TypedSetting_T__o **)(lVar5 + 0x38);
          if (*(int *)(TypeInfo_HumanSpecials + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (pSVar8 == (Settings_TypedSetting_T__o *)0x0) goto LAB_0422d46c;
          Settings_TypedSetting<object>__set_Value
                    (pSVar8,*(Il2CppObject **)(*(long *)(TypeInfo_HumanSpecials + 0xb8) + 0x20),MethodInfo_Void_set_Value);
        }
        return *(Settings_InGameCharacterSettings_o **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x70);
      }
    }
  }
LAB_0422d46c:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.InGameManager$$SpawnPlayerAt
// il2cpp: void GameManagers_InGameManager__SpawnPlayerAt (GameManagers_InGameManager_o* __this, bool force, UnityEngine_Vector3_o position, float rotationY, const MethodInfo* method);
// 0x422b230

void GameManagers_InGameManager__SpawnPlayerAt
               (GameManagers_InGameManager_o *__this,bool_conflict force,
               UnityEngine_Vector3_o position,float rotationY,MethodInfo *method)

{
  int32_t *piVar1;
  Characters_BaseCharacter_o **ppCVar2;
  byte bVar3;
  int iVar4;
  int32_t health;
  long lVar5;
  long lVar6;
  Settings_TypedSetting_T__o *pSVar7;
  long lVar8;
  System_Object_array *pSVar9;
  Settings_ListSetting_T__o *__this_00;
  System_Collections_Generic_List_T__o *pSVar10;
  Settings_IntSetting_o *pSVar11;
  undefined1 auVar12 [12];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  char cVar16;
  bool_conflict bVar17;
  uint uVar18;
  System_Collections_Generic_List_object__o *pSVar19;
  System_Int32_array *pSVar20;
  Settings_TitanCustomSet_o *customSet;
  Il2CppObject *pIVar21;
  System_Collections_Generic_List_string__o *__this_01;
  Characters_Human_o *__this_02;
  System_String_o *pSVar22;
  System_String_o *str1;
  GameManagers_InGameManager_o *pGVar23;
  Characters_BasicTitan_o *__this_03;
  Photon_Realtime_Player_o *player;
  MethodInfo *pMVar24;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  int iVar25;
  Characters_BaseCharacter_o *pCVar26;
  Characters_BasicTitan_o *__this_04;
  undefined4 in_XMM0_Dc;
  undefined4 extraout_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  undefined4 extraout_XMM0_Dd;
  undefined4 uVar27;
  undefined4 uVar28;
  UnityEngine_Vector3_o position_00;
  UnityEngine_Vector3_o position_01;
  UnityEngine_Quaternion_o UVar29;
  UnityEngine_Vector3_o position_02;
  UnityEngine_Quaternion_o rotation;
  float local_90;
  float local_8c;
  System_String_o *local_78;
  undefined4 local_6c;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  
  position_00.fields.z = position.fields.z;
  local_68._8_4_ = in_XMM0_Dc;
  local_68._0_8_ = position.fields._0_8_;
  local_68._12_4_ = in_XMM0_Dd;
  if (DAT_05705108 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BasicTitanSetup);
    il2cpp_init_method_metadata(&TypeInfo_BasicTitan);
    il2cpp_init_method_metadata(&TypeInfo_CharacterPrefabs);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&TypeInfo_HumanLoadout);
    il2cpp_init_method_metadata(&TypeInfo_HumanSpecials);
    il2cpp_init_method_metadata(&TypeInfo_Human);
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&MethodInfo_BaseSetting_GetItemAt);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_PlayerCharacter);
    il2cpp_init_method_metadata(&TypeInfo_PlayerProperty);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&TypeInfo_TitanCustomSet);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Single_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Settings_TitanCustomSet__get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&"Large");
    il2cpp_init_method_metadata(&"");
    il2cpp_init_method_metadata(&"Small");
    il2cpp_init_method_metadata(&"Medium");
    DAT_05705108 = '\x01';
    method = extraout_RDX;
  }
  cVar16 = (*(__this->klass->vtable)._56_IsFinishedLoading.methodPtr)
                     (__this,(__this->klass->vtable)._56_IsFinishedLoading.method,method);
  if (cVar16 == '\0') {
    return;
  }
  uVar27 = 0;
  uVar28 = 0;
  auVar12._4_8_ = 0;
  auVar12._0_4_ = rotationY * 0.017453292;
  UVar29 = UnityEngine_Quaternion__Internal_FromEulerRad
                     ((UnityEngine_Vector3_o)(auVar12 << 0x20),(MethodInfo *)0x0);
  local_58._8_4_ = extraout_XMM0_Dc;
  local_58._0_8_ = UVar29.fields._0_8_;
  local_58._12_4_ = extraout_XMM0_Dd;
  local_48._8_4_ = uVar27;
  local_48._0_8_ = UVar29.fields._8_8_;
  local_48._12_4_ = uVar28;
  lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x70);
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  lVar6 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  if (lVar6 == 0) goto LAB_0422c66c;
  bVar17 = System_String__op_Inequality
                     (*(System_String_o **)(lVar6 + 0x88),
                      (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),(MethodInfo *)0x0);
  if ((char)bVar17 == '\0') {
    if (lVar5 == 0) goto LAB_0422c66c;
    lVar6 = *(long *)(lVar5 + 0x28);
  }
  else {
    if (lVar5 == 0) goto LAB_0422c66c;
    pSVar7 = *(Settings_TypedSetting_T__o **)(lVar5 + 0x28);
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    lVar6 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
    if ((lVar6 == 0) || (pSVar7 == (Settings_TypedSetting_T__o *)0x0)) goto LAB_0422c66c;
    Settings_TypedSetting<object>__set_Value(pSVar7,*(Il2CppObject **)(lVar6 + 0x88),MethodInfo_Void_set_Value);
    lVar6 = *(long *)(lVar5 + 0x28);
  }
  if (((lVar6 == 0) || (lVar8 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50), lVar8 == 0)) ||
     (*(long *)(lVar5 + 0x20) == 0)) goto LAB_0422c66c;
  if (*(int *)(*(long *)(lVar5 + 0x20) + 0x14) != 2) {
    return;
  }
  local_78 = *(System_String_o **)(lVar6 + 0x18);
  lVar6 = *(long *)(lVar8 + 0x58);
  pCVar26 = (__this->fields).CurrentCharacter;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  ppCVar2 = &(__this->fields).CurrentCharacter;
  bVar17 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pCVar26,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
  ;
  if ((char)bVar17 == '\0') {
    pCVar26 = *ppCVar2;
  }
  else {
    pCVar26 = *ppCVar2;
    if (pCVar26 == (Characters_BaseCharacter_o *)0x0) goto LAB_0422c66c;
    if ((*(char *)&(pCVar26->fields).FeedVictimName == '\0') && ((char)force == '\0')) {
      return;
    }
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar17 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pCVar26,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
  ;
  if ((char)bVar17 != '\0') {
    pCVar26 = *ppCVar2;
    if (pCVar26 == (Characters_BaseCharacter_o *)0x0) goto LAB_0422c66c;
    if (*(char *)&(pCVar26->fields).FeedVictimName == '\0') {
      (*(pCVar26->klass->vtable)._87_GetKilled.methodPtr)
                (pCVar26,"",(pCVar26->klass->vtable)._87_GetKilled.method);
    }
  }
  pMVar24 = TypeInfo_InGameManager;
  if (*(int *)((long)&TypeInfo_InGameManager[2].parameters + 4) == 0) {
    il2cpp_init_class();
  }
  GameManagers_InGameManager__UpdatePlayerName(pMVar24);
  pSVar19 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_string);
  System_Collections_Generic_List<object>___ctor(pSVar19,MethodInfo_List_1_System_String);
  if ((lVar6 == 0) || (*(long *)(lVar6 + 0x60) == 0)) goto LAB_0422c66c;
  if (*(char *)(*(long *)(lVar6 + 0x60) + 0x11) == '\0') {
    if (*(long *)(lVar6 + 0x58) == 0) goto LAB_0422c66c;
    if (*(char *)(*(long *)(lVar6 + 0x58) + 0x11) != '\0') goto LAB_0422b6ab;
    if (*(long *)(lVar6 + 0x70) == 0) goto LAB_0422c66c;
    if (*(char *)(*(long *)(lVar6 + 0x70) + 0x11) != '\0') goto LAB_0422b6ab;
    if (*(long *)(lVar6 + 0x68) == 0) goto LAB_0422c66c;
    if (*(char *)(*(long *)(lVar6 + 0x68) + 0x11) != '\0') goto LAB_0422b6ab;
LAB_0422b854:
    lVar8 = *(long *)(lVar6 + 0x78);
  }
  else {
LAB_0422b6ab:
    if (*(int *)(TypeInfo_PlayerCharacter + 0xe4) == 0) {
      il2cpp_init_class();
    }
    lVar8 = MethodInfo_Void_Add;
    if (pSVar19 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_0422c66c;
    pIVar21 = (Il2CppObject *)**(undefined8 **)(TypeInfo_PlayerCharacter + 0xb8);
    piVar1 = &(pSVar19->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar9 = (pSVar19->fields)._items;
    if (pSVar9 == (System_Object_array *)0x0) goto LAB_0422c66c;
    uVar18 = (pSVar19->fields)._size;
    if ((uint)pSVar9->max_length <= uVar18) {
      System_Collections_Generic_List<object>__AddWithResize
                (pSVar19,pIVar21,
                 *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
      goto LAB_0422b854;
    }
    (pSVar19->fields)._size = uVar18 + 1;
    pSVar9->m_Items[(int)uVar18] = pIVar21;
    il2cpp_runtime_glue(pSVar9->m_Items + (int)uVar18);
    lVar8 = *(long *)(lVar6 + 0x78);
  }
  if (lVar8 == 0) goto LAB_0422c66c;
  if (*(char *)(lVar8 + 0x11) == '\0') {
LAB_0422b892:
    lVar8 = *(long *)(lVar6 + 0x88);
  }
  else {
    if (*(int *)(TypeInfo_PlayerCharacter + 0xe4) == 0) {
      il2cpp_init_class();
    }
    lVar8 = MethodInfo_Void_Add;
    if (pSVar19 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_0422c66c;
    pIVar21 = *(Il2CppObject **)(*(long *)(TypeInfo_PlayerCharacter + 0xb8) + 8);
    piVar1 = &(pSVar19->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar9 = (pSVar19->fields)._items;
    if (pSVar9 == (System_Object_array *)0x0) goto LAB_0422c66c;
    uVar18 = (pSVar19->fields)._size;
    if ((uint)pSVar9->max_length <= uVar18) {
      System_Collections_Generic_List<object>__AddWithResize
                (pSVar19,pIVar21,
                 *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
      goto LAB_0422b892;
    }
    (pSVar19->fields)._size = uVar18 + 1;
    pSVar9->m_Items[(int)uVar18] = pIVar21;
    il2cpp_runtime_glue(pSVar9->m_Items + (int)uVar18);
    lVar8 = *(long *)(lVar6 + 0x88);
  }
  if (lVar8 == 0) goto LAB_0422c66c;
  if (*(char *)(lVar8 + 0x11) == '\0') {
    if (pSVar19 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_0422c66c;
    iVar25 = (pSVar19->fields)._size;
  }
  else {
    if (*(int *)(TypeInfo_PlayerCharacter + 0xe4) == 0) {
      il2cpp_init_class();
    }
    lVar8 = MethodInfo_Void_Add;
    if (pSVar19 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_0422c66c;
    pIVar21 = *(Il2CppObject **)(*(long *)(TypeInfo_PlayerCharacter + 0xb8) + 0x10);
    piVar1 = &(pSVar19->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar9 = (pSVar19->fields)._items;
    if (pSVar9 == (System_Object_array *)0x0) goto LAB_0422c66c;
    uVar18 = (pSVar19->fields)._size;
    if (uVar18 < (uint)pSVar9->max_length) {
      (pSVar19->fields)._size = uVar18 + 1;
      pSVar9->m_Items[(int)uVar18] = pIVar21;
      il2cpp_runtime_glue(pSVar9->m_Items + (int)uVar18);
      iVar25 = (pSVar19->fields)._size;
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                (pSVar19,pIVar21,
                 *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
      iVar25 = (pSVar19->fields)._size;
    }
  }
  if (iVar25 == 0) {
    uVar18 = 0;
    if (*(int *)(TypeInfo_PlayerCharacter + 0xe4) == 0) {
      il2cpp_init_class();
      uVar18 = (pSVar19->fields)._size;
    }
    lVar8 = MethodInfo_Void_Add;
    pIVar21 = (Il2CppObject *)**(undefined8 **)(TypeInfo_PlayerCharacter + 0xb8);
    piVar1 = &(pSVar19->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar9 = (pSVar19->fields)._items;
    if (pSVar9 == (System_Object_array *)0x0) goto LAB_0422c66c;
    if (uVar18 < (uint)pSVar9->max_length) {
      (pSVar19->fields)._size = uVar18 + 1;
      pSVar9->m_Items[(int)uVar18] = pIVar21;
      il2cpp_runtime_glue(pSVar9->m_Items + (int)uVar18);
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                (pSVar19,pIVar21,
                 *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
    }
  }
  bVar17 = System_Collections_Generic_List<object>__Contains
                     (pSVar19,(Il2CppObject *)local_78,MethodInfo_Boolean_Contains);
  if ((char)bVar17 == '\0') {
    local_78 = (System_String_o *)
               System_Collections_Generic_List<object>__get_Item(pSVar19,0,MethodInfo_String_get_Item);
  }
  if (*(int *)(TypeInfo_PlayerCharacter + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar17 = System_String__op_Equality
                     (local_78,(System_String_o *)**(undefined8 **)(TypeInfo_PlayerCharacter + 0xb8),
                      (MethodInfo *)0x0);
  if ((char)bVar17 == '\0') {
    if (*(int *)(TypeInfo_PlayerCharacter + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar17 = System_String__op_Equality
                       (local_78,*(System_String_o **)(*(long *)(TypeInfo_PlayerCharacter + 0xb8) + 0x10),
                        (MethodInfo *)0x0);
    if ((char)bVar17 == '\0') {
      if (*(int *)(TypeInfo_PlayerCharacter + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar17 = System_String__op_Equality
                         (local_78,*(System_String_o **)(*(long *)(TypeInfo_PlayerCharacter + 0xb8) + 8),
                          (MethodInfo *)0x0);
      if ((char)bVar17 != '\0') {
        if (*(int *)(TypeInfo_BasicTitanSetup + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar20 = Characters_BasicTitanSetup__GetRandomBodyHeadCombo
                            ((SimpleJSONFixed_JSONNode_o *)0x0,(MethodInfo *)0x0);
        if ((((*(long *)(lVar5 + 0x40) == 0) ||
             (lVar6 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x68), lVar6 == 0)) ||
            (lVar6 = *(long *)(lVar6 + 0x20), lVar6 == 0)) ||
           ((__this_00 = *(Settings_ListSetting_T__o **)(lVar6 + 0x28),
            __this_00 == (Settings_ListSetting_T__o *)0x0 ||
            (pSVar10 = (__this_00->fields)._value,
            pSVar10 == (System_Collections_Generic_List_T__o *)0x0)))) goto LAB_0422c66c;
        iVar25 = *(int *)(*(long *)(lVar5 + 0x40) + 0x14);
        if (iVar25 < 0) {
          iVar25 = 0;
LAB_0422c297:
          customSet = (Settings_TitanCustomSet_o *)0x0;
          iVar4 = *(int *)(TypeInfo_CharacterPrefabs + 0xe4);
        }
        else {
          iVar4 = (pSVar10->fields)._size;
          if (iVar4 < iVar25) {
            iVar25 = iVar4;
          }
          if (iVar25 < 1) goto LAB_0422c297;
          customSet = (Settings_TitanCustomSet_o *)
                      Settings_ListSetting<object>__GetItemAt(__this_00,iVar25 + -1,MethodInfo_BaseSetting_GetItemAt);
          if (customSet == (Settings_TitanCustomSet_o *)0x0) goto LAB_0422c66c;
          bVar3 = (TypeInfo_TitanCustomSet->_2).naturalAligment;
          if (((customSet->klass->_2).naturalAligment < bVar3) ||
             ((customSet->klass->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_TitanCustomSet)) {
                    /* WARNING: Subroutine does not return */
            il2cpp_unwind_resume(customSet);
          }
          pSVar11 = (customSet->fields).Body;
          if ((pSVar11 == (Settings_IntSetting_o *)0x0) || (pSVar20 == (System_Int32_array *)0x0))
          goto LAB_0422c66c;
          uVar18 = (uint)pSVar20->max_length;
          if (uVar18 == 0) goto LAB_0422c685;
          pSVar20->m_Items[0] = (pSVar11->fields)._value;
          pSVar11 = (customSet->fields).Head;
          if (pSVar11 == (Settings_IntSetting_o *)0x0) goto LAB_0422c66c;
          if (uVar18 < 2) goto LAB_0422c685;
          pSVar20->m_Items[1] = (pSVar11->fields)._value;
          iVar4 = *(int *)(TypeInfo_CharacterPrefabs + 0xe4);
        }
        if (iVar4 == 0) {
          il2cpp_init_class();
        }
        if (pSVar20 == (System_Int32_array *)0x0) goto LAB_0422c66c;
        if ((int)pSVar20->max_length == 0) {
LAB_0422c685:
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pSVar22 = *(System_String_o **)(*(long *)(TypeInfo_CharacterPrefabs + 0xb8) + 8);
        str1 = System_Int32__ToString((int)pSVar20 + 0x20,(MethodInfo *)0x0);
        pGVar23 = (GameManagers_InGameManager_o *)
                  System_String__Concat(pSVar22,str1,(MethodInfo *)0x0);
        auVar15 = local_48;
        auVar14 = local_58;
        auVar13 = local_68;
        position_01.fields.z = position_00.fields.z;
        position_01.fields.x = (float)local_68._0_4_;
        position_01.fields.y = (float)local_68._4_4_;
        UVar29.fields.z = (float)local_48._0_4_;
        UVar29.fields.w = (float)local_48._4_4_;
        UVar29.fields.x = (float)local_58._0_4_;
        UVar29.fields.y = (float)local_58._4_4_;
        local_68 = auVar13;
        local_58 = auVar14;
        local_48 = auVar15;
        __this_03 = (Characters_BasicTitan_o *)
                    Characters_CharacterSpawner__Spawn
                              ((System_String_o *)pGVar23,position_01,UVar29,(MethodInfo *)0x0);
        if (__this_03 != (Characters_BasicTitan_o *)0x0) {
          bVar3 = (TypeInfo_BasicTitan->_2).naturalAligment;
          if (((__this_03->klass->_2).naturalAligment < bVar3) ||
             ((__this_03->klass->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_BasicTitan)) {
                    /* WARNING: Subroutine does not return */
            il2cpp_unwind_resume(__this_03);
          }
        }
        if (iVar25 == 0) {
          if (__this_03 == (Characters_BasicTitan_o *)0x0) goto LAB_0422c66c;
          if ((uint)pSVar20->max_length < 2) goto LAB_0422c685;
          pGVar23 = *(GameManagers_InGameManager_o **)&(__this_03->fields).EnableAI;
          if (pGVar23 == (GameManagers_InGameManager_o *)0x0) goto LAB_0422c66c;
          customSet = Characters_BasicTitanSetup__CreateRandomSet
                                ((Characters_BasicTitanSetup_o *)pGVar23,pSVar20->m_Items[1],
                                 (MethodInfo *)0x0);
          pSVar22 = GameManagers_InGameManager__GetPlayerTeam(pGVar23,1,method_02);
        }
        else {
          pSVar22 = GameManagers_InGameManager__GetPlayerTeam(pGVar23,1,method_01);
          if (__this_03 == (Characters_BasicTitan_o *)0x0) goto LAB_0422c66c;
        }
        pMVar24 = (MethodInfo *)0x0;
        __this_04 = __this_03;
        Characters_BasicTitan__Init
                  (__this_03,0,pSVar22,(SimpleJSONFixed_JSONNode_o *)0x0,customSet,(MethodInfo *)0x0
                  );
        GameManagers_InGameManager__SetupTitan
                  ((GameManagers_InGameManager_o *)__this_04,__this_03,0,pMVar24);
        lVar6 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
        if (((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0x50), lVar6 == 0)) ||
           (*(long *)(lVar6 + 0x58) == 0)) goto LAB_0422c66c;
        if (*(char *)(*(long *)(lVar6 + 0x58) + 0x11) == '\0') {
          local_90 = 1.0;
          local_8c = 2.0;
          local_68._0_4_ = 0x40400000;
          iVar25 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
        }
        else {
          if ((*(long *)(lVar6 + 0x60) == 0) || (*(long *)(lVar6 + 0x68) == 0)) goto LAB_0422c66c;
          local_90 = *(float *)(*(long *)(lVar6 + 0x60) + 0x14);
          local_68._0_4_ = *(float *)(*(long *)(lVar6 + 0x68) + 0x14);
          if ((float)local_68._0_4_ <= local_90) {
            local_90 = (float)local_68._0_4_;
          }
          local_8c = ((float)local_68._0_4_ + local_90) * 0.5;
          iVar25 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
        }
        if (iVar25 == 0) {
          il2cpp_init_class();
        }
        lVar6 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
        if (lVar6 == 0) goto LAB_0422c66c;
        pSVar22 = *(System_String_o **)(lVar6 + 0x90);
        bVar17 = System_String__op_Inequality
                           (pSVar22,(System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),
                            (MethodInfo *)0x0);
        if ((char)bVar17 != '\0') {
          if (*(Settings_TypedSetting_T__o **)(lVar5 + 0x30) == (Settings_TypedSetting_T__o *)0x0)
          goto LAB_0422c66c;
          Settings_TypedSetting<object>__set_Value
                    (*(Settings_TypedSetting_T__o **)(lVar5 + 0x30),(Il2CppObject *)pSVar22,
                     MethodInfo_Void_set_Value);
        }
        if (*(long *)(lVar5 + 0x30) == 0) goto LAB_0422c66c;
        pSVar22 = *(System_String_o **)(*(long *)(lVar5 + 0x30) + 0x18);
        bVar17 = System_String__op_Equality(pSVar22,"Small",(MethodInfo *)0x0);
        if (((char)bVar17 == '\0') &&
           (bVar17 = System_String__op_Equality(pSVar22,"Medium",(MethodInfo *)0x0),
           local_90 = local_8c, (char)bVar17 == '\0')) {
          bVar17 = System_String__op_Equality(pSVar22,"Large",(MethodInfo *)0x0);
          local_90 = (float)local_68._0_4_;
          if ((char)bVar17 != '\0') goto LAB_0422c539;
        }
        else {
LAB_0422c539:
          Characters_BaseTitan__SetSize
                    ((Characters_BaseTitan_o *)__this_03,local_90,(MethodInfo *)0x0);
        }
        *ppCVar2 = (Characters_BaseCharacter_o *)__this_03;
        il2cpp_runtime_glue(ppCVar2,__this_03);
      }
    }
    else {
      if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      lVar6 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
      if (lVar6 == 0) goto LAB_0422c66c;
      pSVar22 = *(System_String_o **)(lVar6 + 0x90);
      bVar17 = System_String__op_Inequality
                         (pSVar22,(System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),
                          (MethodInfo *)0x0);
      pMVar24 = extraout_RDX_00;
      if ((char)bVar17 != '\0') {
        if (*(Settings_TypedSetting_T__o **)(lVar5 + 0x30) == (Settings_TypedSetting_T__o *)0x0)
        goto LAB_0422c66c;
        Settings_TypedSetting<object>__set_Value
                  (*(Settings_TypedSetting_T__o **)(lVar5 + 0x30),(Il2CppObject *)pSVar22,
                   MethodInfo_Void_set_Value);
        pMVar24 = extraout_RDX_01;
      }
      auVar13 = local_68;
      if (*(long *)(lVar5 + 0x30) == 0) goto LAB_0422c66c;
      position_02.fields.z = position_00.fields.z;
      position_02.fields.x = (float)local_68._0_4_;
      position_02.fields.y = (float)local_68._4_4_;
      local_68 = auVar13;
      GameManagers_InGameManager__SpawnPlayerShifterAt
                (__this,*(System_String_o **)(*(long *)(lVar5 + 0x30) + 0x18),0.0,position_02,
                 rotationY,pMVar24);
    }
  }
  else {
    pSVar19 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_string);
    System_Collections_Generic_List<object>___ctor(pSVar19,MethodInfo_List_1_System_String);
    if (*(long *)(lVar6 + 0x58) == 0) goto LAB_0422c66c;
    if (*(char *)(*(long *)(lVar6 + 0x58) + 0x11) == '\0') {
LAB_0422c16f:
      lVar8 = *(long *)(lVar6 + 0x60);
    }
    else {
      if (*(int *)(TypeInfo_HumanLoadout + 0xe4) == 0) {
        il2cpp_init_class();
      }
      lVar8 = MethodInfo_Void_Add;
      if (pSVar19 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_0422c66c;
      pIVar21 = (Il2CppObject *)**(undefined8 **)(TypeInfo_HumanLoadout + 0xb8);
      piVar1 = &(pSVar19->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar9 = (pSVar19->fields)._items;
      if (pSVar9 == (System_Object_array *)0x0) goto LAB_0422c66c;
      uVar18 = (pSVar19->fields)._size;
      if ((uint)pSVar9->max_length <= uVar18) {
        System_Collections_Generic_List<object>__AddWithResize
                  (pSVar19,pIVar21,
                   *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
        goto LAB_0422c16f;
      }
      (pSVar19->fields)._size = uVar18 + 1;
      pSVar9->m_Items[(int)uVar18] = pIVar21;
      il2cpp_runtime_glue(pSVar9->m_Items + (int)uVar18);
      lVar8 = *(long *)(lVar6 + 0x60);
    }
    if (lVar8 == 0) goto LAB_0422c66c;
    if (*(char *)(lVar8 + 0x11) == '\0') {
LAB_0422c198:
      lVar8 = *(long *)(lVar6 + 0x68);
    }
    else {
      if (*(int *)(TypeInfo_HumanLoadout + 0xe4) == 0) {
        il2cpp_init_class();
      }
      lVar8 = MethodInfo_Void_Add;
      if (pSVar19 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_0422c66c;
      pIVar21 = *(Il2CppObject **)(*(long *)(TypeInfo_HumanLoadout + 0xb8) + 8);
      piVar1 = &(pSVar19->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar9 = (pSVar19->fields)._items;
      if (pSVar9 == (System_Object_array *)0x0) goto LAB_0422c66c;
      uVar18 = (pSVar19->fields)._size;
      if ((uint)pSVar9->max_length <= uVar18) {
        System_Collections_Generic_List<object>__AddWithResize
                  (pSVar19,pIVar21,
                   *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
        goto LAB_0422c198;
      }
      (pSVar19->fields)._size = uVar18 + 1;
      pSVar9->m_Items[(int)uVar18] = pIVar21;
      il2cpp_runtime_glue(pSVar9->m_Items + (int)uVar18);
      lVar8 = *(long *)(lVar6 + 0x68);
    }
    if (lVar8 == 0) goto LAB_0422c66c;
    if (*(char *)(lVar8 + 0x11) == '\0') {
LAB_0422c1c1:
      lVar8 = *(long *)(lVar6 + 0x70);
    }
    else {
      if (*(int *)(TypeInfo_HumanLoadout + 0xe4) == 0) {
        il2cpp_init_class();
      }
      lVar8 = MethodInfo_Void_Add;
      if (pSVar19 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_0422c66c;
      pIVar21 = *(Il2CppObject **)(*(long *)(TypeInfo_HumanLoadout + 0xb8) + 0x18);
      piVar1 = &(pSVar19->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar9 = (pSVar19->fields)._items;
      if (pSVar9 == (System_Object_array *)0x0) goto LAB_0422c66c;
      uVar18 = (pSVar19->fields)._size;
      if ((uint)pSVar9->max_length <= uVar18) {
        System_Collections_Generic_List<object>__AddWithResize
                  (pSVar19,pIVar21,
                   *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
        goto LAB_0422c1c1;
      }
      (pSVar19->fields)._size = uVar18 + 1;
      pSVar9->m_Items[(int)uVar18] = pIVar21;
      il2cpp_runtime_glue(pSVar9->m_Items + (int)uVar18);
      lVar8 = *(long *)(lVar6 + 0x70);
    }
    if (lVar8 == 0) goto LAB_0422c66c;
    if (*(char *)(lVar8 + 0x11) == '\0') {
      if (pSVar19 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_0422c66c;
      iVar25 = (pSVar19->fields)._size;
joined_r0x0422be7a:
      if (iVar25 != 0) goto LAB_0422be80;
LAB_0422c1f4:
      uVar18 = 0;
      if (*(int *)(TypeInfo_HumanLoadout + 0xe4) == 0) {
        il2cpp_init_class();
        uVar18 = (pSVar19->fields)._size;
      }
      lVar8 = MethodInfo_Void_Add;
      pIVar21 = (Il2CppObject *)**(undefined8 **)(TypeInfo_HumanLoadout + 0xb8);
      piVar1 = &(pSVar19->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar9 = (pSVar19->fields)._items;
      if (pSVar9 == (System_Object_array *)0x0) goto LAB_0422c66c;
      if (uVar18 < (uint)pSVar9->max_length) {
        (pSVar19->fields)._size = uVar18 + 1;
        pSVar9->m_Items[(int)uVar18] = pIVar21;
        il2cpp_runtime_glue(pSVar9->m_Items + (int)uVar18);
        lVar8 = *(long *)(lVar5 + 0x30);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  (pSVar19,pIVar21,
                   *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
        lVar8 = *(long *)(lVar5 + 0x30);
      }
    }
    else {
      if (*(int *)(TypeInfo_HumanLoadout + 0xe4) == 0) {
        il2cpp_init_class();
      }
      lVar8 = MethodInfo_Void_Add;
      if (pSVar19 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_0422c66c;
      pIVar21 = *(Il2CppObject **)(*(long *)(TypeInfo_HumanLoadout + 0xb8) + 0x10);
      piVar1 = &(pSVar19->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar9 = (pSVar19->fields)._items;
      if (pSVar9 == (System_Object_array *)0x0) goto LAB_0422c66c;
      uVar18 = (pSVar19->fields)._size;
      if ((uint)pSVar9->max_length <= uVar18) {
        System_Collections_Generic_List<object>__AddWithResize
                  (pSVar19,pIVar21,
                   *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
        iVar25 = (pSVar19->fields)._size;
        goto joined_r0x0422be7a;
      }
      (pSVar19->fields)._size = uVar18 + 1;
      pSVar9->m_Items[(int)uVar18] = pIVar21;
      il2cpp_runtime_glue(pSVar9->m_Items + (int)uVar18);
      if ((pSVar19->fields)._size == 0) goto LAB_0422c1f4;
LAB_0422be80:
      lVar8 = *(long *)(lVar5 + 0x30);
    }
    if (lVar8 == 0) goto LAB_0422c66c;
    bVar17 = System_Collections_Generic_List<object>__Contains
                       (pSVar19,*(Il2CppObject **)(lVar8 + 0x18),MethodInfo_Boolean_Contains);
    if ((char)bVar17 == '\0') {
      pSVar7 = *(Settings_TypedSetting_T__o **)(lVar5 + 0x30);
      pIVar21 = System_Collections_Generic_List<object>__get_Item(pSVar19,0,MethodInfo_String_get_Item);
      if (pSVar7 == (Settings_TypedSetting_T__o *)0x0) goto LAB_0422c66c;
      Settings_TypedSetting<object>__set_Value(pSVar7,pIVar21,MethodInfo_Void_set_Value);
    }
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    lVar8 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
    if (lVar8 == 0) goto LAB_0422c66c;
    bVar17 = System_String__op_Inequality
                       (*(System_String_o **)(lVar8 + 0x90),
                        (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),(MethodInfo *)0x0)
    ;
    if ((char)bVar17 != '\0') {
      pSVar7 = *(Settings_TypedSetting_T__o **)(lVar5 + 0x30);
      if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      lVar8 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
      if ((lVar8 == 0) || (pSVar7 == (Settings_TypedSetting_T__o *)0x0)) goto LAB_0422c66c;
      Settings_TypedSetting<object>__set_Value(pSVar7,*(Il2CppObject **)(lVar8 + 0x90),MethodInfo_Void_set_Value)
      ;
    }
    if ((*(long *)(lVar5 + 0x30) == 0) || (*(long *)(lVar6 + 0x80) == 0)) goto LAB_0422c66c;
    pSVar22 = *(System_String_o **)(*(long *)(lVar5 + 0x30) + 0x18);
    bVar3 = *(byte *)(*(long *)(lVar6 + 0x80) + 0x11);
    if (*(int *)(TypeInfo_HumanSpecials + 0xe4) == 0) {
      il2cpp_init_class();
    }
    __this_01 = Characters_HumanSpecials__GetSpecialNames(pSVar22,(uint)bVar3,(MethodInfo *)0x0);
    if ((*(long *)(lVar5 + 0x38) == 0) ||
       (__this_01 == (System_Collections_Generic_List_string__o *)0x0)) goto LAB_0422c66c;
    bVar17 = System_Collections_Generic_List<object>__Contains
                       ((System_Collections_Generic_List_object__o *)__this_01,
                        *(Il2CppObject **)(*(long *)(lVar5 + 0x38) + 0x18),MethodInfo_Boolean_Contains);
    if ((char)bVar17 == '\0') {
      pSVar7 = *(Settings_TypedSetting_T__o **)(lVar5 + 0x38);
      if (*(int *)(TypeInfo_HumanSpecials + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (pSVar7 == (Settings_TypedSetting_T__o *)0x0) goto LAB_0422c66c;
      Settings_TypedSetting<object>__set_Value
                (pSVar7,*(Il2CppObject **)(*(long *)(TypeInfo_HumanSpecials + 0xb8) + 0x20),MethodInfo_Void_set_Value);
    }
    if (*(int *)(TypeInfo_CharacterPrefabs + 0xe4) == 0) {
      il2cpp_init_class();
    }
    auVar15 = local_48;
    auVar14 = local_58;
    auVar13 = local_68;
    pGVar23 = (GameManagers_InGameManager_o *)**(undefined8 **)(TypeInfo_CharacterPrefabs + 0xb8);
    position_00.fields.x = (float)local_68._0_4_;
    position_00.fields.y = (float)local_68._4_4_;
    rotation.fields.z = (float)local_48._0_4_;
    rotation.fields.w = (float)local_48._4_4_;
    rotation.fields.x = (float)local_58._0_4_;
    rotation.fields.y = (float)local_58._4_4_;
    local_68 = auVar13;
    local_58 = auVar14;
    local_48 = auVar15;
    __this_02 = (Characters_Human_o *)
                Characters_CharacterSpawner__Spawn
                          ((System_String_o *)pGVar23,position_00,rotation,(MethodInfo *)0x0);
    if (__this_02 == (Characters_Human_o *)0x0) {
      GameManagers_InGameManager__GetPlayerTeam(pGVar23,0,method_00);
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    bVar3 = (TypeInfo_Human->_2).naturalAligment;
    if (((__this_02->klass->_2).naturalAligment < bVar3) ||
       ((__this_02->klass->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_Human)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(__this_02);
    }
    pSVar22 = GameManagers_InGameManager__GetPlayerTeam(pGVar23,0,method_00);
    Characters_Human__Init
              (__this_02,0,pSVar22,
               *(Settings_InGameCharacterSettings_o **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x70),
               (MethodInfo *)0x0);
    *ppCVar2 = (Characters_BaseCharacter_o *)__this_02;
    il2cpp_runtime_glue(ppCVar2,__this_02);
    lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
    if (((lVar5 == 0) || (lVar5 = *(long *)(lVar5 + 0x58), lVar5 == 0)) ||
       (lVar5 = *(long *)(lVar5 + 0x120), lVar5 == 0)) goto LAB_0422c66c;
    health = *(int32_t *)(lVar5 + 0x14);
    if (1 < health) {
      Characters_BaseCharacter__SetHealth
                ((Characters_BaseCharacter_o *)__this_02,health,(MethodInfo *)0x0);
    }
  }
  *(undefined1 *)((long)&(__this->fields)._gameSettingsLoaded + 1) = 1;
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_init_class();
  }
  player = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (((*ppCVar2 != (Characters_BaseCharacter_o *)0x0) &&
      (lVar5 = *(long *)&((*ppCVar2)->fields).Dead, lVar5 != 0)) &&
     (lVar5 = *(long *)(lVar5 + 0x20), lVar5 != 0)) {
    pSVar22 = *(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x20);
    local_6c = *(undefined4 *)(lVar5 + 0x94);
    pIVar21 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_6c);
    PhotonExtensions__SetCustomProperty(player,pSVar22,pIVar21,(MethodInfo *)0x0);
    pMVar24 = TypeInfo_InGameManager;
    if (*(int *)((long)&TypeInfo_InGameManager[2].parameters + 4) == 0) {
      il2cpp_init_class();
    }
    GameManagers_InGameManager__UpdateRoundPlayerProperties(pMVar24);
    return;
  }
LAB_0422c66c:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.InGameManager$$GetHumanSpawnPoint
// il2cpp: System_ValueTuple_Vector3__Quaternion__o GameManagers_InGameManager__GetHumanSpawnPoint (GameManagers_InGameManager_o* __this, const MethodInfo* method);
// 0x422c6a0

System_ValueTuple_Vector3__Quaternion__o *
GameManagers_InGameManager__GetHumanSpawnPoint
          (System_ValueTuple_Vector3__Quaternion__o *__return_storage_ptr__,
          GameManagers_InGameManager_o *__this,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_String_o *a;
  System_Collections_Generic_List_string__o *tags;
  System_ValueTuple_Vector3__Quaternion__o __this_00;
  bool_conflict bVar3;
  undefined8 *puVar4;
  float fVar5;
  float fVar6;
  float extraout_XMM0_Dc;
  undefined8 uVar7;
  undefined8 uVar8;
  UnityEngine_Vector3_o UVar9;
  UnityEngine_Quaternion_o UVar10;
  undefined4 in_stack_ffffffffffffffb8;
  float in_stack_ffffffffffffffbc;
  float fVar11;
  UnityEngine_Transform_o *__this_01;
  float in_stack_ffffffffffffffc8;
  float in_stack_ffffffffffffffcc;
  float in_stack_ffffffffffffffd0;
  
  if (DAT_05705109 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&TypeInfo_MapManager);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&TypeInfo_TeamInfo);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_ValueTuple_2_UnityEngine_Vector3_UnityEngine_Qua);
    DAT_05705109 = '\x01';
  }
  __this_01 = (UnityEngine_Transform_o *)0x0;
  if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
  if (((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x58), lVar2 != 0)) &&
     (lVar2 = *(long *)(lVar2 + 0x20), lVar2 != 0)) {
    if (*(int *)(lVar2 + 0x14) == 2) {
      lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x70);
      if ((lVar2 == 0) || (lVar2 = *(long *)(lVar2 + 0x50), lVar2 == 0)) goto LAB_0422c94f;
      a = *(System_String_o **)(lVar2 + 0x18);
      if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar3 = System_String__op_Equality
                        (a,(System_String_o *)**(undefined8 **)(TypeInfo_TeamInfo + 0xb8),
                         (MethodInfo *)0x0);
      if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      puVar4 = *(undefined8 **)(TypeInfo_InGameManager + 0xb8) + 1;
      if ((char)bVar3 != '\0') {
        puVar4 = *(undefined8 **)(TypeInfo_InGameManager + 0xb8);
      }
      tags = (System_Collections_Generic_List_string__o *)*puVar4;
      iVar1 = *(int *)(TypeInfo_MapManager + 0xe4);
    }
    else {
      tags = *(System_Collections_Generic_List_string__o **)(*(long *)(TypeInfo_InGameManager + 0xb8) + 0x10);
      iVar1 = *(int *)(TypeInfo_MapManager + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_init_class();
    }
    bVar3 = Map_MapManager__TryGetRandomTagsXform
                      (tags,(UnityEngine_Transform_o **)&stack0xffffffffffffffc0,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      if (DAT_056fdd15 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Vector3);
        DAT_056fdd15 = '\x01';
      }
      uVar7 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      fVar5 = (float)uVar7;
      fVar6 = (float)((ulong)uVar7 >> 0x20);
      fVar11 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
      if (DAT_056fde1e == '\0') {
        in_stack_ffffffffffffffd0 = 0.0;
        il2cpp_init_method_metadata(&TypeInfo_Quaternion);
        DAT_056fde1e = '\x01';
        in_stack_ffffffffffffffbc = fVar11;
        in_stack_ffffffffffffffc8 = fVar5;
        in_stack_ffffffffffffffcc = fVar6;
      }
      uVar7 = **(undefined8 **)(TypeInfo_Quaternion + 0xb8);
      uVar8 = (*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
      (__return_storage_ptr__->fields).Item2.fields.x = 0.0;
      (__return_storage_ptr__->fields).Item2.fields.y = 0.0;
      (__return_storage_ptr__->fields).Item2.fields.z = 0.0;
      (__return_storage_ptr__->fields).Item2.fields.w = 0.0;
      (__return_storage_ptr__->fields).Item1.fields.x = 0.0;
      (__return_storage_ptr__->fields).Item1.fields.y = 0.0;
      *(undefined8 *)&(__return_storage_ptr__->fields).Item1.fields.z = 0;
LAB_0422c93b:
      __this_00.fields.Item1.fields.y = in_stack_ffffffffffffffbc;
      __this_00.fields.Item1.fields.x = (float)in_stack_ffffffffffffffb8;
      __this_00.fields._8_8_ = __this_01;
      __this_00.fields.Item2.fields.y = in_stack_ffffffffffffffc8;
      __this_00.fields.Item2.fields.z = in_stack_ffffffffffffffcc;
      __this_00.fields.Item2.fields.w = in_stack_ffffffffffffffd0;
      UVar9.fields.y = fVar6;
      UVar9.fields.x = fVar5;
      UVar9.fields.z = fVar11;
      UVar10.fields.z = (float)(int)uVar8;
      UVar10.fields.w = (float)(int)((ulong)uVar8 >> 0x20);
      UVar10.fields.x = (float)(int)uVar7;
      UVar10.fields.y = (float)(int)((ulong)uVar7 >> 0x20);
      System_ValueTuple<Vector3__Quaternion>___ctor
                (__this_00,UVar9,UVar10,(MethodInfo_2B4ED10 *)__return_storage_ptr__);
      return __return_storage_ptr__;
    }
    if (__this_01 != (UnityEngine_Transform_o *)0x0) {
      UVar9 = UnityEngine_Transform__get_position(__this_01,(MethodInfo *)0x0);
      in_stack_ffffffffffffffbc = UVar9.fields.z;
      fVar5 = UVar9.fields.x;
      fVar6 = UVar9.fields.y;
      if (__this_01 != (UnityEngine_Transform_o *)0x0) {
        in_stack_ffffffffffffffd0 = extraout_XMM0_Dc;
        UVar10 = UnityEngine_Transform__get_rotation(__this_01,(MethodInfo *)0x0);
        uVar7 = UVar10.fields._0_8_;
        uVar8 = UVar10.fields._8_8_;
        (__return_storage_ptr__->fields).Item1.fields.x = 0.0;
        (__return_storage_ptr__->fields).Item1.fields.y = 0.0;
        *(undefined8 *)&(__return_storage_ptr__->fields).Item1.fields.z = 0;
        (__return_storage_ptr__->fields).Item2.fields.x = 0.0;
        (__return_storage_ptr__->fields).Item2.fields.y = 0.0;
        (__return_storage_ptr__->fields).Item2.fields.z = 0.0;
        (__return_storage_ptr__->fields).Item2.fields.w = 0.0;
        in_stack_ffffffffffffffc8 = fVar5;
        in_stack_ffffffffffffffcc = fVar6;
        fVar11 = in_stack_ffffffffffffffbc;
        goto LAB_0422c93b;
      }
    }
  }
LAB_0422c94f:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.InGameManager$$GetTitanSpawnPoint
// il2cpp: System_ValueTuple_Vector3__Quaternion__o GameManagers_InGameManager__GetTitanSpawnPoint (GameManagers_InGameManager_o* __this, const MethodInfo* method);
// 0x422c960

System_ValueTuple_Vector3__Quaternion__o *
GameManagers_InGameManager__GetTitanSpawnPoint
          (System_ValueTuple_Vector3__Quaternion__o *__return_storage_ptr__,
          GameManagers_InGameManager_o *__this,MethodInfo *method)

{
  System_String_o *tag;
  System_ValueTuple_Vector3__Quaternion__o __this_00;
  bool_conflict bVar1;
  float fVar2;
  float fVar3;
  float extraout_XMM0_Dc;
  undefined8 uVar4;
  undefined8 uVar5;
  UnityEngine_Vector3_o UVar6;
  UnityEngine_Quaternion_o UVar7;
  undefined4 in_stack_ffffffffffffffc8;
  float in_stack_ffffffffffffffcc;
  float fVar8;
  UnityEngine_Transform_o *__this_01;
  float in_stack_ffffffffffffffd8;
  float in_stack_ffffffffffffffdc;
  float in_stack_ffffffffffffffe0;
  
  if (DAT_0570510a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MapManager);
    il2cpp_init_method_metadata(&TypeInfo_MapTags);
    il2cpp_init_method_metadata(&MethodInfo_ValueTuple_2_UnityEngine_Vector3_UnityEngine_Qua);
    DAT_0570510a = '\x01';
  }
  __this_01 = (UnityEngine_Transform_o *)0x0;
  if (*(int *)(TypeInfo_MapTags + 0xe4) == 0) {
    il2cpp_init_class();
  }
  tag = *(System_String_o **)(*(long *)(TypeInfo_MapTags + 0xb8) + 0x20);
  if (*(int *)(TypeInfo_MapManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = Map_MapManager__TryGetRandomTagXform
                    (tag,(UnityEngine_Transform_o **)&stack0xffffffffffffffd0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (__this_01 != (UnityEngine_Transform_o *)0x0) {
      UVar6 = UnityEngine_Transform__get_position(__this_01,(MethodInfo *)0x0);
      in_stack_ffffffffffffffcc = UVar6.fields.z;
      fVar2 = UVar6.fields.x;
      fVar3 = UVar6.fields.y;
      if (__this_01 != (UnityEngine_Transform_o *)0x0) {
        in_stack_ffffffffffffffe0 = extraout_XMM0_Dc;
        UVar7 = UnityEngine_Transform__get_rotation(__this_01,(MethodInfo *)0x0);
        uVar4 = UVar7.fields._0_8_;
        uVar5 = UVar7.fields._8_8_;
        (__return_storage_ptr__->fields).Item1.fields.x = 0.0;
        (__return_storage_ptr__->fields).Item1.fields.y = 0.0;
        *(undefined8 *)&(__return_storage_ptr__->fields).Item1.fields.z = 0;
        (__return_storage_ptr__->fields).Item2.fields.x = 0.0;
        (__return_storage_ptr__->fields).Item2.fields.y = 0.0;
        (__return_storage_ptr__->fields).Item2.fields.z = 0.0;
        (__return_storage_ptr__->fields).Item2.fields.w = 0.0;
        in_stack_ffffffffffffffd8 = fVar2;
        in_stack_ffffffffffffffdc = fVar3;
        fVar8 = in_stack_ffffffffffffffcc;
        goto LAB_0422caf7;
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (DAT_056fdd15 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_056fdd15 = '\x01';
  }
  uVar4 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
  fVar2 = (float)uVar4;
  fVar3 = (float)((ulong)uVar4 >> 0x20);
  fVar8 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  if (DAT_056fde1e == '\0') {
    in_stack_ffffffffffffffe0 = 0.0;
    il2cpp_init_method_metadata(&TypeInfo_Quaternion);
    DAT_056fde1e = '\x01';
    in_stack_ffffffffffffffcc = fVar8;
    in_stack_ffffffffffffffd8 = fVar2;
    in_stack_ffffffffffffffdc = fVar3;
  }
  uVar4 = **(undefined8 **)(TypeInfo_Quaternion + 0xb8);
  uVar5 = (*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
  (__return_storage_ptr__->fields).Item2.fields.x = 0.0;
  (__return_storage_ptr__->fields).Item2.fields.y = 0.0;
  (__return_storage_ptr__->fields).Item2.fields.z = 0.0;
  (__return_storage_ptr__->fields).Item2.fields.w = 0.0;
  (__return_storage_ptr__->fields).Item1.fields.x = 0.0;
  (__return_storage_ptr__->fields).Item1.fields.y = 0.0;
  *(undefined8 *)&(__return_storage_ptr__->fields).Item1.fields.z = 0;
LAB_0422caf7:
  __this_00.fields.Item1.fields.y = in_stack_ffffffffffffffcc;
  __this_00.fields.Item1.fields.x = (float)in_stack_ffffffffffffffc8;
  __this_00.fields._8_8_ = __this_01;
  __this_00.fields.Item2.fields.y = in_stack_ffffffffffffffd8;
  __this_00.fields.Item2.fields.z = in_stack_ffffffffffffffdc;
  __this_00.fields.Item2.fields.w = in_stack_ffffffffffffffe0;
  UVar6.fields.y = fVar3;
  UVar6.fields.x = fVar2;
  UVar6.fields.z = fVar8;
  UVar7.fields.z = (float)(int)uVar5;
  UVar7.fields.w = (float)(int)((ulong)uVar5 >> 0x20);
  UVar7.fields.x = (float)(int)uVar4;
  UVar7.fields.y = (float)(int)((ulong)uVar4 >> 0x20);
  System_ValueTuple<Vector3__Quaternion>___ctor
            (__this_00,UVar6,UVar7,(MethodInfo_2B4ED10 *)__return_storage_ptr__);
  return __return_storage_ptr__;
}


// GameManagers.InGameManager$$GetPlayerTeam
// il2cpp: System_String_o* GameManagers_InGameManager__GetPlayerTeam (GameManagers_InGameManager_o* __this, bool titan, const MethodInfo* method);
// 0x422cdd0

System_String_o *
GameManagers_InGameManager__GetPlayerTeam
          (GameManagers_InGameManager_o *__this,bool_conflict titan,MethodInfo *method)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  
  if (DAT_0570510b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&TypeInfo_TeamInfo);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    DAT_0570510b = '\x01';
  }
  lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
  if (((lVar3 == 0) || (lVar3 = *(long *)(lVar3 + 0x58), lVar3 == 0)) ||
     (lVar3 = *(long *)(lVar3 + 0x20), lVar3 == 0)) {
LAB_0422ce61:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  iVar1 = *(int *)(lVar3 + 0x14);
  if (iVar1 == 1) {
    if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
      il2cpp_init_class();
    }
    puVar2 = (undefined8 *)(*(long *)(TypeInfo_TeamInfo + 0xb8) + 0x10);
  }
  else {
    if (iVar1 == 2) {
      lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x70);
      if ((lVar3 == 0) || (lVar3 = *(long *)(lVar3 + 0x50), lVar3 == 0)) goto LAB_0422ce61;
    }
    else {
      if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
        il2cpp_init_class();
        lVar3 = *(long *)(TypeInfo_TeamInfo + 0xb8);
      }
      else {
        lVar3 = *(long *)(TypeInfo_TeamInfo + 0xb8);
      }
      if ((char)titan == '\0') {
        puVar2 = (undefined8 *)(lVar3 + 0x20);
        goto LAB_0422cec9;
      }
    }
    puVar2 = (undefined8 *)(lVar3 + 0x18);
  }
LAB_0422cec9:
  return (System_String_o *)*puVar2;
}


// GameManagers.InGameManager$$SpawnAITitan
// il2cpp: Characters_BasicTitan_o* GameManagers_InGameManager__SpawnAITitan (GameManagers_InGameManager_o* __this, System_String_o* type, const MethodInfo* method);
// 0x422dba0

Characters_BasicTitan_o *
GameManagers_InGameManager__SpawnAITitan
          (GameManagers_InGameManager_o *__this,System_String_o *type,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  MethodInfo *method_00;
  GameManagers_InGameManager_o *__this_00;
  UnityEngine_Vector3_o UVar2;
  UnityEngine_Vector3_o euler;
  UnityEngine_Vector3_o position;
  System_ValueTuple_Vector3__Quaternion__o local_38;
  undefined1 local_18 [16];
  
  GameManagers_InGameManager__GetTitanSpawnPoint
            (&local_38,(GameManagers_InGameManager_o *)type,method);
  local_18._0_4_ = local_38.fields.Item1.fields.x;
  local_18._4_4_ = local_38.fields.Item1.fields.y;
  local_18._8_8_ = 0;
  UVar2 = UnityEngine_Quaternion__Internal_ToEulerRad(local_38.fields.Item2,(MethodInfo *)0x0);
  euler.fields.x = UVar2.fields.x * 57.29578;
  euler.fields.y = UVar2.fields.y * 57.29578;
  euler.fields.z = UVar2.fields.z * 57.29578;
  __this_00 = (GameManagers_InGameManager_o *)0x0;
  UVar2 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
  position.fields.z = local_38.fields.Item1.fields.z;
  position.fields.x = (float)local_18._0_4_;
  position.fields.y = (float)local_18._4_4_;
  pCVar1 = GameManagers_InGameManager__SpawnAITitanAt
                     (__this_00,type,position,UVar2.fields.y,method_00);
  return pCVar1;
}


// GameManagers.InGameManager$$SpawnAITitans
// il2cpp: System_Collections_Generic_IEnumerable_BasicTitan__o* GameManagers_InGameManager__SpawnAITitans (GameManagers_InGameManager_o* __this, System_String_o* type, int32_t count, const MethodInfo* method);
// 0x422e1b0

System_Collections_Generic_IEnumerable_BasicTitan__o *
GameManagers_InGameManager__SpawnAITitans
          (GameManagers_InGameManager_o *__this,System_String_o *type,int32_t count,
          MethodInfo *method)

{
  GameManagers_InGameManager___c__DisplayClass69_0_o *__this_00;
  System_Collections_Generic_IEnumerable_ValueTuple_Vector3__Quaternion___o *source;
  System_Func_TSource__TResult__o *selector;
  System_Collections_Generic_IEnumerable_TResult__o *pSVar1;
  MethodInfo *method_00;
  
  if (DAT_0570510c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_IEnumerable_1_Characters_BasicTitan__Select_Valu);
    il2cpp_init_method_metadata(&TypeInfo_Func_ValueTuple_Vector3__Quaternion___BasicTitan);
    il2cpp_init_method_metadata(&MethodInfo_BasicTitan__SpawnAITitans_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass69_0);
    DAT_0570510c = '\x01';
  }
  __this_00 = (GameManagers_InGameManager___c__DisplayClass69_0_o *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass69_0)
  ;
  GameManagers_InGameManager_<>c__DisplayClass69_0___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (GameManagers_InGameManager___c__DisplayClass69_0_o *)0x0) {
    (__this_00->fields).__4__this = __this;
    il2cpp_runtime_glue(&__this_00->fields,__this);
    (__this_00->fields).type = type;
    il2cpp_runtime_glue(&(__this_00->fields).type,type);
    source = GameManagers_InGameManager__GetTitanSpawnPositions(__this,count,method_00);
    selector = (System_Func_TSource__TResult__o *)il2cpp_runtime_glue(TypeInfo_Func_ValueTuple_Vector3__Quaternion___BasicTitan);
    System_Func<ValueTuple<Vector3__Quaternion>__object>___ctor();
    pSVar1 = System_Linq_Enumerable__Select<ValueTuple<Vector3__Quaternion>__object>
                       ((System_Collections_Generic_IEnumerable_TSource__o *)source,selector,
                        MethodInfo_IEnumerable_1_Characters_BasicTitan__Select_Valu);
    return (System_Collections_Generic_IEnumerable_BasicTitan__o *)pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.InGameManager$$SpawnAITitansAsync
// il2cpp: void GameManagers_InGameManager__SpawnAITitansAsync (GameManagers_InGameManager_o* __this, System_String_o* type, int32_t count, const MethodInfo* method);
// 0x422e680

void GameManagers_InGameManager__SpawnAITitansAsync
               (GameManagers_InGameManager_o *__this,System_String_o *type,int32_t count,
               MethodInfo *method)

{
  GameManagers_InGameManager__SpawnAITitansCoroutine_d__71_o *__this_00;
  
  if (DAT_0570510d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SpawnAITitansCoroutine_d__71);
    DAT_0570510d = '\x01';
  }
  __this_00 = (GameManagers_InGameManager__SpawnAITitansCoroutine_d__71_o *)
              il2cpp_runtime_glue(TypeInfo_SpawnAITitansCoroutine_d__71);
  GameManagers_InGameManager_<SpawnAITitansCoroutine>d__71___ctor(__this_00,0,(MethodInfo *)0x0);
  if (__this_00 != (GameManagers_InGameManager__SpawnAITitansCoroutine_d__71_o *)0x0) {
    (__this_00->fields).__4__this = __this;
    il2cpp_runtime_glue(&(__this_00->fields).__4__this,__this);
    (__this_00->fields).type = type;
    il2cpp_runtime_glue(&(__this_00->fields).type,type);
    (__this_00->fields).count = count;
    UnityEngine_MonoBehaviour__StartCoroutine
              ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
               (MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.InGameManager$$SpawnAITitansCoroutine
// il2cpp: System_Collections_IEnumerator_o* GameManagers_InGameManager__SpawnAITitansCoroutine (GameManagers_InGameManager_o* __this, System_String_o* type, int32_t count, const MethodInfo* method);
// 0x422e720

System_Collections_IEnumerator_o *
GameManagers_InGameManager__SpawnAITitansCoroutine
          (GameManagers_InGameManager_o *__this,System_String_o *type,int32_t count,
          MethodInfo *method)

{
  GameManagers_InGameManager__SpawnAITitansCoroutine_d__71_o *__this_00;
  
  if (DAT_0570510d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SpawnAITitansCoroutine_d__71);
    DAT_0570510d = '\x01';
  }
  __this_00 = (GameManagers_InGameManager__SpawnAITitansCoroutine_d__71_o *)
              il2cpp_runtime_glue(TypeInfo_SpawnAITitansCoroutine_d__71);
  GameManagers_InGameManager_<SpawnAITitansCoroutine>d__71___ctor(__this_00,0,(MethodInfo *)0x0);
  if (__this_00 != (GameManagers_InGameManager__SpawnAITitansCoroutine_d__71_o *)0x0) {
    (__this_00->fields).__4__this = __this;
    il2cpp_runtime_glue(&(__this_00->fields).__4__this,__this);
    (__this_00->fields).type = type;
    il2cpp_runtime_glue(&(__this_00->fields).type,type);
    (__this_00->fields).count = count;
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.InGameManager$$SpawnAITitansAtAsync
// il2cpp: void GameManagers_InGameManager__SpawnAITitansAtAsync (GameManagers_InGameManager_o* __this, System_String_o* type, int32_t count, UnityEngine_Vector3_o position, float rotationY, const MethodInfo* method);
// 0x422e7b0

void GameManagers_InGameManager__SpawnAITitansAtAsync
               (GameManagers_InGameManager_o *__this,System_String_o *type,int32_t count,
               UnityEngine_Vector3_o position,float rotationY,MethodInfo *method)

{
  GameManagers_InGameManager__SpawnAITitansAtCoroutine_d__73_o *__this_00;
  
  if (DAT_0570510e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SpawnAITitansAtCoroutine_d__73);
    DAT_0570510e = '\x01';
  }
  __this_00 = (GameManagers_InGameManager__SpawnAITitansAtCoroutine_d__73_o *)
              il2cpp_runtime_glue(TypeInfo_SpawnAITitansAtCoroutine_d__73);
  GameManagers_InGameManager_<SpawnAITitansAtCoroutine>d__73___ctor(__this_00,0,(MethodInfo *)0x0);
  if (__this_00 != (GameManagers_InGameManager__SpawnAITitansAtCoroutine_d__73_o *)0x0) {
    (__this_00->fields).__4__this = __this;
    il2cpp_runtime_glue(&(__this_00->fields).__4__this,__this);
    (__this_00->fields).type = type;
    il2cpp_runtime_glue(&(__this_00->fields).type,type);
    (__this_00->fields).count = count;
    (__this_00->fields).position.fields.x = (float)(int)position.fields._0_8_;
    (__this_00->fields).position.fields.y = (float)(int)((ulong)position.fields._0_8_ >> 0x20);
    (__this_00->fields).position.fields.z = position.fields.z;
    (__this_00->fields).rotationY = rotationY;
    UnityEngine_MonoBehaviour__StartCoroutine
              ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
               (MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.InGameManager$$SpawnAITitansAtCoroutine
// il2cpp: System_Collections_IEnumerator_o* GameManagers_InGameManager__SpawnAITitansAtCoroutine (GameManagers_InGameManager_o* __this, System_String_o* type, int32_t count, UnityEngine_Vector3_o position, float rotationY, const MethodInfo* method);
// 0x422e880

System_Collections_IEnumerator_o *
GameManagers_InGameManager__SpawnAITitansAtCoroutine
          (GameManagers_InGameManager_o *__this,System_String_o *type,int32_t count,
          UnityEngine_Vector3_o position,float rotationY,MethodInfo *method)

{
  GameManagers_InGameManager__SpawnAITitansAtCoroutine_d__73_o *__this_00;
  
  if (DAT_0570510e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SpawnAITitansAtCoroutine_d__73);
    DAT_0570510e = '\x01';
  }
  __this_00 = (GameManagers_InGameManager__SpawnAITitansAtCoroutine_d__73_o *)
              il2cpp_runtime_glue(TypeInfo_SpawnAITitansAtCoroutine_d__73);
  GameManagers_InGameManager_<SpawnAITitansAtCoroutine>d__73___ctor(__this_00,0,(MethodInfo *)0x0);
  if (__this_00 != (GameManagers_InGameManager__SpawnAITitansAtCoroutine_d__73_o *)0x0) {
    (__this_00->fields).__4__this = __this;
    il2cpp_runtime_glue(&(__this_00->fields).__4__this,__this);
    (__this_00->fields).type = type;
    il2cpp_runtime_glue(&(__this_00->fields).type,type);
    (__this_00->fields).count = count;
    (__this_00->fields).position.fields.x = (float)(int)position.fields._0_8_;
    (__this_00->fields).position.fields.y = (float)(int)((ulong)position.fields._0_8_ >> 0x20);
    (__this_00->fields).position.fields.z = position.fields.z;
    (__this_00->fields).rotationY = rotationY;
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.InGameManager$$GetTitanSpawnPositions
// il2cpp: System_Collections_Generic_IEnumerable_ValueTuple_Vector3__Quaternion___o* GameManagers_InGameManager__GetTitanSpawnPositions (GameManagers_InGameManager_o* __this, int32_t count, const MethodInfo* method);
// 0x422e2a0

System_Collections_Generic_IEnumerable_ValueTuple_Vector3__Quaternion___o *
GameManagers_InGameManager__GetTitanSpawnPositions
          (GameManagers_InGameManager_o *__this,int32_t count,MethodInfo *method)

{
  undefined8 uVar1;
  byte bVar2;
  int iVar3;
  Characters_BaseCharacter_o *pCVar4;
  System_Collections_Generic_HashSet_Human__o *pSVar5;
  long lVar6;
  UnityEngine_Transform_o *__this_00;
  System_String_o *tag;
  System_ValueTuple_Vector3__Quaternion__o __this_01;
  System_ValueTuple_Vector3__Quaternion__o element;
  UnityEngine_Vector3_Fields item1;
  System_Collections_Generic_List_Transform__o *source;
  bool_conflict bVar7;
  System_Func_TSource__TResult__o *selector;
  System_Collections_Generic_IEnumerable_ValueTuple_Vector3__Quaternion___o *pSVar8;
  float fVar9;
  float fVar12;
  float avoidRadius;
  UnityEngine_Vector3_o UVar13;
  undefined8 in_stack_ffffffffffffff68;
  undefined4 in_stack_ffffffffffffff70;
  undefined4 in_stack_ffffffffffffff74;
  undefined4 in_stack_ffffffffffffff78;
  undefined8 in_stack_ffffffffffffff7c;
  System_Collections_Generic_List_Transform__o *local_50;
  Il2CppMethodPointer local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined8 uStack_34;
  float fVar10;
  float fVar11;
  
  if (DAT_0570510f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_IEnumerable_1_System_ValueTuple_2_UnityEngine_Ve);
    il2cpp_init_method_metadata(&MethodInfo_IEnumerable_1_System_ValueTuple_2_UnityEngine_Ve);
    il2cpp_init_method_metadata(&TypeInfo_Func_Transform__ValueTuple_Vector3__Quaternion);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&TypeInfo_Human);
    il2cpp_init_method_metadata(&TypeInfo_MapManager);
    il2cpp_init_method_metadata(&TypeInfo_MapTags);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&MethodInfo_ValueTuple_2_UnityEngine_Vector3_UnityEngine_Qua);
    il2cpp_init_method_metadata(&TypeInfo_c);
    il2cpp_init_method_metadata(&MethodInfo_ValueTuple_2_UnityEngine_Vector3_UnityEngine_Qua);
    DAT_0570510f = '\x01';
  }
  local_50 = (System_Collections_Generic_List_Transform__o *)0x0;
  pCVar4 = (__this->fields).CurrentCharacter;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar7 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (((char)bVar7 != '\0') &&
     (pCVar4 = (__this->fields).CurrentCharacter, pCVar4 != (Characters_BaseCharacter_o *)0x0)) {
    bVar2 = (TypeInfo_Human->_2).naturalAligment;
    if ((bVar2 <= (pCVar4->klass->_2).naturalAligment) &&
       ((pCVar4->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_Human)) {
      pSVar5 = (__this->fields).Humans;
      if (pSVar5 == (System_Collections_Generic_HashSet_Human__o *)0x0) {
LAB_0422e674:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      if ((pSVar5->fields)._count == 1) {
        lVar6 = *(long *)&(pCVar4->fields).Dead;
        if ((lVar6 == 0) ||
           (__this_00 = *(UnityEngine_Transform_o **)(lVar6 + 0x10),
           __this_00 == (UnityEngine_Transform_o *)0x0)) goto LAB_0422e674;
        UVar13 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
        fVar11 = UVar13.fields.z;
        fVar9 = UVar13.fields.x;
        fVar10 = UVar13.fields.y;
        avoidRadius = 100.0;
        fVar12 = 100.0;
        iVar3 = *(int *)(TypeInfo_MapTags + 0xe4);
        goto joined_r0x0422e450;
      }
    }
  }
  if (DAT_056fdd15 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_056fdd15 = '\x01';
  }
  uVar1 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
  fVar9 = (float)uVar1;
  fVar10 = (float)((ulong)uVar1 >> 0x20);
  fVar11 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  avoidRadius = 0.0;
  fVar12 = 0.0;
  iVar3 = *(int *)(TypeInfo_MapTags + 0xe4);
joined_r0x0422e450:
  if (iVar3 == 0) {
    il2cpp_init_class();
    avoidRadius = fVar12;
  }
  tag = *(System_String_o **)(*(long *)(TypeInfo_MapTags + 0xb8) + 0x20);
  if (*(int *)(TypeInfo_MapManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  UVar13.fields.y = fVar10;
  UVar13.fields.x = fVar9;
  UVar13.fields.z = fVar11;
  bVar7 = Map_MapManager__TryGetRandomTagXforms
                    (tag,UVar13,avoidRadius,count,&local_50,(MethodInfo *)0x0);
  source = local_50;
  if ((char)bVar7 == '\0') {
    if (DAT_056fdd15 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fdd15 = '\x01';
    }
    item1 = **(UnityEngine_Vector3_Fields **)(TypeInfo_Vector3 + 0xb8);
    if (DAT_056fde1e == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Quaternion);
      DAT_056fde1e = '\x01';
    }
    uStack_38 = 0;
    uStack_34 = 0;
    local_48 = (Il2CppMethodPointer)0x0;
    uStack_40 = 0;
    uStack_3c = 0;
    __this_01.fields.Item1.fields.z = (float)in_stack_ffffffffffffff70;
    __this_01.fields.Item1.fields.x = (float)(int)in_stack_ffffffffffffff68;
    __this_01.fields.Item1.fields.y = (float)(int)((ulong)in_stack_ffffffffffffff68 >> 0x20);
    __this_01.fields.Item2.fields.x = (float)in_stack_ffffffffffffff74;
    __this_01.fields.Item2.fields.y = (float)in_stack_ffffffffffffff78;
    __this_01.fields.Item2.fields.z = (float)(int)in_stack_ffffffffffffff7c;
    __this_01.fields.Item2.fields.w = (float)(int)((ulong)in_stack_ffffffffffffff7c >> 0x20);
    System_ValueTuple<Vector3__Quaternion>___ctor
              (__this_01,(UnityEngine_Vector3_o)item1,
               (UnityEngine_Quaternion_o)**(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8),
               (MethodInfo_2B4ED10 *)&stack0xffffffffffffffb8);
    element.fields.Item1.fields.z = (float)uStack_40;
    element.fields.Item1.fields._0_8_ = local_48;
    element.fields.Item2.fields.x = (float)uStack_3c;
    element.fields.Item2.fields.y = (float)uStack_38;
    element.fields.Item2.fields._8_8_ = uStack_34;
    pSVar8 = (System_Collections_Generic_IEnumerable_ValueTuple_Vector3__Quaternion___o *)
             System_Linq_Enumerable__Repeat<ValueTuple<Vector3__Quaternion>>
                       (element,count,MethodInfo_IEnumerable_1_System_ValueTuple_2_UnityEngine_Ve);
  }
  else {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
      selector = *(System_Func_TSource__TResult__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
    }
    else {
      selector = *(System_Func_TSource__TResult__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
    }
    if (selector == (System_Func_TSource__TResult__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_init_class();
      }
      selector = (System_Func_TSource__TResult__o *)il2cpp_runtime_glue(TypeInfo_Func_Transform__ValueTuple_Vector3__Quaternion);
      System_Func<object__ValueTuple<Vector3__Quaternion>>___ctor();
      lVar6 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_TSource__TResult__o **)(lVar6 + 0x10) = selector;
      il2cpp_runtime_glue(lVar6 + 0x10,selector);
    }
    pSVar8 = (System_Collections_Generic_IEnumerable_ValueTuple_Vector3__Quaternion___o *)
             System_Linq_Enumerable__Select<object__ValueTuple<Vector3__Quaternion>>
                       ((System_Collections_Generic_IEnumerable_TSource__o *)source,selector,
                        MethodInfo_IEnumerable_1_System_ValueTuple_2_UnityEngine_Ve);
  }
  return pSVar8;
}


// GameManagers.InGameManager$$SpawnAITitanAt
// il2cpp: Characters_BasicTitan_o* GameManagers_InGameManager__SpawnAITitanAt (GameManagers_InGameManager_o* __this, System_String_o* type, UnityEngine_Vector3_o position, float rotationY, const MethodInfo* method);
// 0x422dc20

Characters_BasicTitan_o *
GameManagers_InGameManager__SpawnAITitanAt
          (GameManagers_InGameManager_o *__this,System_String_o *type,UnityEngine_Vector3_o position
          ,float rotationY,MethodInfo *method)

{
  byte bVar1;
  int32_t difficulty;
  Characters_BasicTitanSetup_o *__this_00;
  undefined1 auVar2 [12];
  bool_conflict bVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  MethodInfo *method_00;
  System_Int32_array *pSVar7;
  System_String_o *str1;
  System_String_o *pSVar8;
  Characters_BasicTitan_o *__this_01;
  Settings_TitanCustomSet_o *customSet;
  Characters_BasicTitan_o *__this_02;
  float fVar9;
  float fVar10;
  UnityEngine_Quaternion_o rotation;
  
  if (DAT_05705110 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BasicTitanSetup);
    il2cpp_init_method_metadata(&TypeInfo_BasicTitan);
    il2cpp_init_method_metadata(&TypeInfo_CharacterData);
    il2cpp_init_method_metadata(&TypeInfo_CharacterPrefabs);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&TypeInfo_TeamInfo);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Single_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&"Random");
    il2cpp_init_method_metadata(&"Normal");
    il2cpp_init_method_metadata(&"Punk");
    il2cpp_init_method_metadata(&"Thrower");
    il2cpp_init_method_metadata(&"Default");
    il2cpp_init_method_metadata(&"Jumper");
    il2cpp_init_method_metadata(&"Crawler");
    il2cpp_init_method_metadata();
    DAT_05705110 = '\x01';
  }
  auVar2._4_8_ = 0;
  auVar2._0_4_ = rotationY * 0.017453292;
  rotation = UnityEngine_Quaternion__Internal_FromEulerRad
                       ((UnityEngine_Vector3_o)(auVar2 << 0x20),(MethodInfo *)0x0);
  bVar3 = System_String__op_Equality(type,"Default",(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    bVar3 = System_String__op_Equality(type,"Random",(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      lVar6 = il2cpp_glue_02274930(TypeInfo_string,5);
      if (lVar6 == 0) goto LAB_0422e190;
      if (*(int *)(lVar6 + 0x18) == 0) goto LAB_0422e195;
      *(undefined8 *)(lVar6 + 0x20) = "Normal";
      il2cpp_runtime_glue(lVar6 + 0x20);
      if (*(uint *)(lVar6 + 0x18) < 2) goto LAB_0422e195;
      *(undefined8 *)(lVar6 + 0x28) = "Abnormal";
      il2cpp_runtime_glue(lVar6 + 0x28);
      if (*(uint *)(lVar6 + 0x18) < 3) goto LAB_0422e195;
      *(undefined8 *)(lVar6 + 0x30) = "Jumper";
      il2cpp_runtime_glue(lVar6 + 0x30);
      if (*(uint *)(lVar6 + 0x18) < 4) goto LAB_0422e195;
      *(undefined8 *)(lVar6 + 0x38) = "Crawler";
      il2cpp_runtime_glue(lVar6 + 0x38);
      if (*(uint *)(lVar6 + 0x18) < 5) goto LAB_0422e195;
      *(undefined8 *)(lVar6 + 0x40) = "Thrower";
      il2cpp_runtime_glue();
      uVar4 = UnityEngine_Random__Range(0,*(int32_t *)(lVar6 + 0x18),(MethodInfo *)0x0);
      if (*(uint *)(lVar6 + 0x18) <= uVar4) goto LAB_0422e195;
      type = *(System_String_o **)(lVar6 + 0x20 + (long)(int)uVar4 * 8);
    }
  }
  else {
    lVar6 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
    if (((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0x50), lVar6 == 0)) ||
       (*(long *)(lVar6 + 0x20) == 0)) goto LAB_0422e190;
    if (*(char *)(*(long *)(lVar6 + 0x20) + 0x11) != '\0') {
      fVar9 = UnityEngine_Random__Range(0.0,1.0,(MethodInfo *)0x0);
      if ((((*(long *)(lVar6 + 0x28) == 0) || (*(long *)(lVar6 + 0x30) == 0)) ||
          ((*(long *)(lVar6 + 0x38) == 0 ||
           ((*(long *)(lVar6 + 0x40) == 0 || (*(long *)(lVar6 + 0x48) == 0)))))) ||
         (*(long *)(lVar6 + 0x50) == 0)) goto LAB_0422e190;
      fVar10 = *(float *)(*(long *)(lVar6 + 0x28) + 0x14) / 100.0;
      if (fVar10 <= fVar9) {
        fVar10 = fVar10 + *(float *)(*(long *)(lVar6 + 0x30) + 0x14) / 100.0;
        if (fVar10 <= fVar9) {
          fVar10 = fVar10 + *(float *)(*(long *)(lVar6 + 0x38) + 0x14) / 100.0;
          if (fVar10 <= fVar9) {
            fVar10 = fVar10 + *(float *)(*(long *)(lVar6 + 0x40) + 0x14) / 100.0;
            if (fVar10 <= fVar9) {
              fVar10 = fVar10 + *(float *)(*(long *)(lVar6 + 0x48) + 0x14) / 100.0;
              if (fVar10 <= fVar9) {
                if (fVar10 + *(float *)(*(long *)(lVar6 + 0x50) + 0x14) / 100.0 <= fVar9)
                goto LAB_0422dfd9;
                puVar5 = &"Punk";
              }
              else {
                puVar5 = &"Thrower";
              }
            }
            else {
              puVar5 = &"Crawler";
            }
          }
          else {
            puVar5 = &"Jumper";
          }
        }
        else {
          puVar5 = &"Abnormal";
        }
      }
      else {
        puVar5 = &"Normal";
      }
      type = (System_String_o *)*puVar5;
    }
  }
LAB_0422dfd9:
  lVar6 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
  if (((lVar6 != 0) && (lVar6 = *(long *)(lVar6 + 0x38), lVar6 != 0)) &&
     (lVar6 = *(long *)(lVar6 + 0x40), lVar6 != 0)) {
    difficulty = *(int32_t *)(lVar6 + 0x14);
    if (*(int *)(TypeInfo_CharacterData + 0xe4) == 0) {
      il2cpp_init_class();
    }
    method_00 = (MethodInfo *)
                Characters_CharacterData__GetTitanAI(difficulty,type,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_BasicTitanSetup + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar7 = Characters_BasicTitanSetup__GetRandomBodyHeadCombo
                       ((SimpleJSONFixed_JSONNode_o *)method_00,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_CharacterPrefabs + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (pSVar7 != (System_Int32_array *)0x0) {
      if ((int)pSVar7->max_length == 0) {
LAB_0422e195:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pSVar8 = *(System_String_o **)(*(long *)(TypeInfo_CharacterPrefabs + 0xb8) + 8);
      str1 = System_Int32__ToString((int)pSVar7 + 0x20,(MethodInfo *)0x0);
      pSVar8 = System_String__Concat(pSVar8,str1,(MethodInfo *)0x0);
      __this_01 = (Characters_BasicTitan_o *)
                  Characters_CharacterSpawner__Spawn(pSVar8,position,rotation,(MethodInfo *)0x0);
      if (__this_01 != (Characters_BasicTitan_o *)0x0) {
        bVar1 = (TypeInfo_BasicTitan->_2).naturalAligment;
        if (((__this_01->klass->_2).naturalAligment < bVar1) ||
           ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_BasicTitan)) {
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume(__this_01);
        }
      }
      if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (__this_01 != (Characters_BasicTitan_o *)0x0) {
        if ((uint)pSVar7->max_length < 2) goto LAB_0422e195;
        __this_00 = *(Characters_BasicTitanSetup_o **)&(__this_01->fields).EnableAI;
        if (__this_00 != (Characters_BasicTitanSetup_o *)0x0) {
          pSVar8 = *(System_String_o **)(*(long *)(TypeInfo_TeamInfo + 0xb8) + 0x18);
          customSet = Characters_BasicTitanSetup__CreateRandomSet
                                (__this_00,pSVar7->m_Items[1],(MethodInfo *)0x0);
          __this_02 = __this_01;
          Characters_BasicTitan__Init
                    (__this_01,1,pSVar8,(SimpleJSONFixed_JSONNode_o *)method_00,customSet,
                     (MethodInfo *)0x0);
          GameManagers_InGameManager__SetupTitan
                    ((GameManagers_InGameManager_o *)__this_02,__this_01,1,method_00);
          return __this_01;
        }
      }
    }
  }
LAB_0422e190:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.InGameManager$$SetupTitan
// il2cpp: void GameManagers_InGameManager__SetupTitan (GameManagers_InGameManager_o* __this, Characters_BasicTitan_o* titan, bool ai, const MethodInfo* method);
// 0x422d960

void GameManagers_InGameManager__SetupTitan
               (GameManagers_InGameManager_o *__this,Characters_BasicTitan_o *titan,bool_conflict ai
               ,MethodInfo *method)

{
  long lVar1;
  int32_t health;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (DAT_05705111 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Single_get_Value);
    il2cpp_init_method_metadata();
    DAT_05705111 = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
  if (((lVar1 == 0) || (lVar1 = *(long *)(lVar1 + 0x50), lVar1 == 0)) ||
     (*(long *)(lVar1 + 0x58) == 0)) goto LAB_0422db90;
  if (*(char *)(*(long *)(lVar1 + 0x58) + 0x11) == '\0') {
    fVar3 = UnityEngine_Random__Range(1.0,3.0,(MethodInfo *)0x0);
  }
  else {
    if ((*(long *)(lVar1 + 0x60) == 0) || (*(long *)(lVar1 + 0x68) == 0)) goto LAB_0422db90;
    fVar3 = UnityEngine_Random__Range
                      (*(float *)(*(long *)(lVar1 + 0x60) + 0x14),
                       *(float *)(*(long *)(lVar1 + 0x68) + 0x14),(MethodInfo *)0x0);
  }
  if (titan == (Characters_BasicTitan_o *)0x0) goto LAB_0422db90;
  Characters_BaseTitan__SetSize((Characters_BaseTitan_o *)titan,fVar3,(MethodInfo *)0x0);
  if (*(long *)(lVar1 + 0x70) == 0) goto LAB_0422db90;
  iVar2 = *(int *)(*(long *)(lVar1 + 0x70) + 0x14);
  if (iVar2 < 1) {
    if ((char)ai != '\0') {
      return;
    }
    health = 10;
    goto LAB_0422db85;
  }
  if (iVar2 != 2) {
    if (iVar2 != 1) {
      return;
    }
    if ((*(long *)(lVar1 + 0x78) != 0) && (*(long *)(lVar1 + 0x80) != 0)) {
      health = UnityEngine_Random__Range
                         (*(int32_t *)(*(long *)(lVar1 + 0x78) + 0x14),
                          *(int32_t *)(*(long *)(lVar1 + 0x80) + 0x14),(MethodInfo *)0x0);
      goto LAB_0422db85;
    }
    goto LAB_0422db90;
  }
  if (*(long *)(lVar1 + 0x58) == 0) goto LAB_0422db90;
  if (*(char *)(*(long *)(lVar1 + 0x58) + 0x11) == '\0') {
    fVar3 = 1.0;
    fVar5 = 3.0;
  }
  else {
    if ((*(long *)(lVar1 + 0x60) == 0) || (*(long *)(lVar1 + 0x68) == 0)) goto LAB_0422db90;
    fVar3 = *(float *)(*(long *)(lVar1 + 0x60) + 0x14);
    fVar4 = *(float *)(*(long *)(lVar1 + 0x68) + 0x14);
    fVar5 = fVar3;
    if (fVar3 <= fVar4) {
      fVar5 = fVar4;
    }
  }
  fVar4 = 0.0;
  if (fVar5 - fVar3 <= 0.0) {
LAB_0422db35:
    fVar3 = 1.0;
    if (fVar4 <= 1.0) {
      fVar3 = fVar4;
    }
  }
  else {
    fVar4 = *(float *)((long)&(titan->fields).TitanColliderToggler + 4);
    fVar6 = fVar5;
    if (fVar4 <= fVar5) {
      fVar6 = fVar4;
    }
    fVar4 = ((float)(~-(uint)(fVar3 <= fVar4) & (uint)fVar3 | (uint)fVar6 & -(uint)(fVar3 <= fVar4))
            - fVar3) / (fVar5 - fVar3);
    fVar3 = 0.0;
    if (0.0 <= fVar4) goto LAB_0422db35;
  }
  if ((*(long *)(lVar1 + 0x80) != 0) && (*(long *)(lVar1 + 0x78) != 0)) {
    iVar2 = *(int *)(*(long *)(lVar1 + 0x78) + 0x14);
    iVar2 = (int)((float)iVar2 + fVar3 * (float)(*(int *)(*(long *)(lVar1 + 0x80) + 0x14) - iVar2));
    health = 1;
    if (0 < iVar2) {
      health = iVar2;
    }
LAB_0422db85:
    Characters_BaseCharacter__SetHealth
              ((Characters_BaseCharacter_o *)titan,health,(MethodInfo *)0x0);
    return;
  }
LAB_0422db90:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.InGameManager$$SpawnAIShifter
// il2cpp: Characters_BaseShifter_o* GameManagers_InGameManager__SpawnAIShifter (GameManagers_InGameManager_o* __this, System_String_o* type, const MethodInfo* method);
// 0x422e940

Characters_BaseShifter_o *
GameManagers_InGameManager__SpawnAIShifter
          (GameManagers_InGameManager_o *__this,System_String_o *type,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  MethodInfo *method_00;
  GameManagers_InGameManager_o *__this_00;
  UnityEngine_Vector3_o UVar2;
  UnityEngine_Vector3_o euler;
  UnityEngine_Vector3_o position;
  System_ValueTuple_Vector3__Quaternion__o local_38;
  undefined1 local_18 [16];
  
  GameManagers_InGameManager__GetTitanSpawnPoint
            (&local_38,(GameManagers_InGameManager_o *)type,method);
  local_18._0_4_ = local_38.fields.Item1.fields.x;
  local_18._4_4_ = local_38.fields.Item1.fields.y;
  local_18._8_8_ = 0;
  UVar2 = UnityEngine_Quaternion__Internal_ToEulerRad(local_38.fields.Item2,(MethodInfo *)0x0);
  euler.fields.x = UVar2.fields.x * 57.29578;
  euler.fields.y = UVar2.fields.y * 57.29578;
  euler.fields.z = UVar2.fields.z * 57.29578;
  __this_00 = (GameManagers_InGameManager_o *)0x0;
  UVar2 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
  position.fields.z = local_38.fields.Item1.fields.z;
  position.fields.x = (float)local_18._0_4_;
  position.fields.y = (float)local_18._4_4_;
  pCVar1 = GameManagers_InGameManager__SpawnAIShifterAt
                     (__this_00,type,position,UVar2.fields.y,method_00);
  return pCVar1;
}


// GameManagers.InGameManager$$SpawnAIShifterAt
// il2cpp: Characters_BaseShifter_o* GameManagers_InGameManager__SpawnAIShifterAt (GameManagers_InGameManager_o* __this, System_String_o* type, UnityEngine_Vector3_o position, float rotationY, const MethodInfo* method);
// 0x422e9c0

/* WARNING: Type propagation algorithm not settling */

Characters_BaseShifter_o *
GameManagers_InGameManager__SpawnAIShifterAt
          (GameManagers_InGameManager_o *__this,System_String_o *type,UnityEngine_Vector3_o position
          ,float rotationY,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  int32_t difficulty;
  undefined1 auVar3 [12];
  bool_conflict bVar4;
  Characters_BaseShifter_o *pCVar5;
  SimpleJSONFixed_JSONNode_o *pSVar6;
  long lVar7;
  System_String_o *a;
  UnityEngine_Quaternion_o rotation;
  
  if (DAT_05705112 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BaseShifter);
    il2cpp_init_method_metadata(&TypeInfo_CharacterData);
    il2cpp_init_method_metadata(&TypeInfo_CharacterPrefabs);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&TypeInfo_TeamInfo);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&"Eren");
    il2cpp_init_method_metadata(&"Annie");
    il2cpp_init_method_metadata(&"WallColossal");
    il2cpp_init_method_metadata(&"Armored");
    il2cpp_init_method_metadata();
    DAT_05705112 = '\x01';
  }
  auVar3._4_8_ = 0;
  auVar3._0_4_ = rotationY * 0.017453292;
  rotation = UnityEngine_Quaternion__Internal_FromEulerRad
                       ((UnityEngine_Vector3_o)(auVar3 << 0x20),(MethodInfo *)0x0);
  a = "";
  bVar4 = System_String__op_Equality(type,"Annie",(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    bVar4 = System_String__op_Equality(type,"Armored",(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      bVar4 = System_String__op_Equality(type,"Eren",(MethodInfo *)0x0);
      if ((char)bVar4 == '\0') {
        bVar4 = System_String__op_Equality(type,"WallColossal",(MethodInfo *)0x0);
        if ((char)bVar4 == '\0') goto LAB_0422eb32;
        lVar7 = 0x30;
        iVar2 = *(int *)(TypeInfo_CharacterPrefabs + 0xe4);
      }
      else {
        lVar7 = 0x18;
        iVar2 = *(int *)(TypeInfo_CharacterPrefabs + 0xe4);
      }
    }
    else {
      lVar7 = 0x28;
      iVar2 = *(int *)(TypeInfo_CharacterPrefabs + 0xe4);
    }
    if (iVar2 == 0) {
      il2cpp_init_class();
    }
  }
  else {
    lVar7 = 0x20;
    if (*(int *)(TypeInfo_CharacterPrefabs + 0xe4) == 0) {
      il2cpp_init_class();
    }
  }
  a = *(System_String_o **)(*(long *)(TypeInfo_CharacterPrefabs + 0xb8) + lVar7);
LAB_0422eb32:
  bVar4 = System_String__op_Equality(a,"",(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    return (Characters_BaseShifter_o *)0x0;
  }
  pCVar5 = (Characters_BaseShifter_o *)
           Characters_CharacterSpawner__Spawn(a,position,rotation,(MethodInfo *)0x0);
  lVar7 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
  if (((lVar7 != 0) && (lVar7 = *(long *)(lVar7 + 0x38), lVar7 != 0)) &&
     (lVar7 = *(long *)(lVar7 + 0x40), lVar7 != 0)) {
    difficulty = *(int32_t *)(lVar7 + 0x14);
    if (*(int *)(TypeInfo_CharacterData + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar6 = Characters_CharacterData__GetShifterAI(difficulty,type,(MethodInfo *)0x0);
    if (pCVar5 != (Characters_BaseShifter_o *)0x0) {
      bVar1 = (TypeInfo_BaseShifter->_2).naturalAligment;
      if (((pCVar5->klass->_2).naturalAligment < bVar1) ||
         ((pCVar5->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_BaseShifter)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(pCVar5);
      }
    }
    if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (pCVar5 != (Characters_BaseShifter_o *)0x0) {
      (*(pCVar5->klass->vtable)._176_Init.methodPtr)
                (0,pCVar5,1,*(undefined8 *)(*(long *)(TypeInfo_TeamInfo + 0xb8) + 0x18),pSVar6,
                 (pCVar5->klass->vtable)._176_Init.method);
      return pCVar5;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.InGameManager$$SpawnAIHuman
// il2cpp: Characters_Human_o* GameManagers_InGameManager__SpawnAIHuman (GameManagers_InGameManager_o* __this, int32_t costume, System_String_o* costumeName, System_String_o* loadout, const MethodInfo* method);
// 0x422ecf0

Characters_Human_o *
GameManagers_InGameManager__SpawnAIHuman
          (GameManagers_InGameManager_o *__this,int32_t costume,System_String_o *costumeName,
          System_String_o *loadout,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  undefined4 in_register_00000034;
  GameManagers_InGameManager_o *__this_00;
  UnityEngine_Vector3_o UVar2;
  UnityEngine_Vector3_o euler;
  UnityEngine_Vector3_o position;
  System_ValueTuple_Vector3__Quaternion__o local_48;
  undefined1 local_28 [16];
  
  GameManagers_InGameManager__GetHumanSpawnPoint
            (&local_48,(GameManagers_InGameManager_o *)CONCAT44(in_register_00000034,costume),
             (MethodInfo *)costumeName);
  local_28._0_4_ = local_48.fields.Item1.fields.x;
  local_28._4_4_ = local_48.fields.Item1.fields.y;
  local_28._8_8_ = 0;
  UVar2 = UnityEngine_Quaternion__Internal_ToEulerRad(local_48.fields.Item2,(MethodInfo *)0x0);
  euler.fields.x = UVar2.fields.x * 57.29578;
  euler.fields.y = UVar2.fields.y * 57.29578;
  euler.fields.z = UVar2.fields.z * 57.29578;
  __this_00 = (GameManagers_InGameManager_o *)0x0;
  UVar2 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
  position.fields.z = local_48.fields.Item1.fields.z;
  position.fields.x = (float)local_28._0_4_;
  position.fields.y = (float)local_28._4_4_;
  pCVar1 = GameManagers_InGameManager__SpawnAIHumanAt
                     (__this_00,costume,costumeName,loadout,position,UVar2.fields.y,method);
  return pCVar1;
}


// GameManagers.InGameManager$$SpawnAIHumanAt
// il2cpp: Characters_Human_o* GameManagers_InGameManager__SpawnAIHumanAt (GameManagers_InGameManager_o* __this, int32_t costume, System_String_o* costumeName, System_String_o* loadout, UnityEngine_Vector3_o position, float rotationY, const MethodInfo* method);
// 0x422ed80

/* WARNING: Removing unreachable block (ram,0x0422ef72) */

Characters_Human_o *
GameManagers_InGameManager__SpawnAIHumanAt
          (GameManagers_InGameManager_o *__this,int32_t costume,System_String_o *costumeName,
          System_String_o *loadout,UnityEngine_Vector3_o position,float rotationY,MethodInfo *method
          )

{
  byte bVar1;
  Settings_StringSetting_o *pSVar2;
  Settings_IntSetting_o *pSVar3;
  Characters_HumanSetup_o *__this_00;
  Settings_ListSetting_T__o *__this_01;
  undefined1 auVar4 [12];
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 customSet;
  bool_conflict bVar8;
  uint uVar9;
  int32_t iVar10;
  Settings_HumanCustomSet_o *__this_04;
  Settings_InGameCharacterSettings_o *__this_05;
  Characters_Human_o *__this_06;
  int iVar11;
  long lVar12;
  int32_t iVar13;
  char cVar14;
  undefined4 in_XMM0_Dc;
  undefined4 extraout_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  undefined4 extraout_XMM0_Dd;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 in_XMM2_Db;
  undefined4 in_XMM2_Dc;
  undefined4 in_XMM2_Dd;
  UnityEngine_Vector3_o position_00;
  UnityEngine_Quaternion_o UVar17;
  undefined1 in_stack_ffffffffffffff48 [15];
  char cVar18;
  undefined1 local_98 [36];
  undefined1 auStack_74 [12];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  Il2CppObject *local_38;
  
  position_00.fields.z = position.fields.z;
  local_68._4_4_ = in_XMM2_Db;
  local_68._0_4_ = rotationY;
  local_68._8_4_ = in_XMM2_Dc;
  local_68._12_4_ = in_XMM2_Dd;
  local_58._8_4_ = in_XMM0_Dc;
  local_58._0_8_ = position.fields._0_8_;
  local_58._12_4_ = in_XMM0_Dd;
  if (DAT_05705113 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterPrefabs);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_HumanCustomSet_get_Current);
    il2cpp_init_method_metadata(&TypeInfo_HumanCustomSet);
    il2cpp_init_method_metadata(&TypeInfo_HumanLoadout);
    il2cpp_init_method_metadata(&TypeInfo_HumanSpecials);
    il2cpp_init_method_metadata(&TypeInfo_Human);
    il2cpp_init_method_metadata(&TypeInfo_InGameCharacterSettings);
    il2cpp_init_method_metadata(&MethodInfo_Int32_GetCount);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_Settings_HumanCustomSet__Ge);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&TypeInfo_TeamInfo);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Settings_HumanCustomSet__get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    DAT_05705113 = '\x01';
  }
  local_98._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_98._8_8_ = (Il2CppMethodPointer)0x0;
  local_98._16_8_ = (Il2CppObject *)0x0;
  cVar14 = costume == -1;
  if ((bool)cVar14) {
    bVar8 = System_String__IsNullOrWhiteSpace(costumeName,(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      return (Characters_Human_o *)0x0;
    }
    __this_04 = (Settings_HumanCustomSet_o *)il2cpp_runtime_glue(TypeInfo_HumanCustomSet);
    Settings_HumanCustomSet___ctor(__this_04,(MethodInfo *)0x0);
    if (__this_04 == (Settings_HumanCustomSet_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    (*(__this_04->klass->vtable)._8_DeserializeFromJsonString.methodPtr)
              (__this_04,costumeName,(__this_04->klass->vtable)._8_DeserializeFromJsonString.method)
    ;
  }
  else {
    __this_04 = (Settings_HumanCustomSet_o *)0x0;
  }
  lVar12 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
  if ((lVar12 == 0) || (*(long *)(lVar12 + 0x20) == 0)) goto LAB_0422f3a1;
  local_98._24_8_ = __this_04;
  if (costume == 3) {
    if (*(long *)(lVar12 + 0x38) == 0) goto LAB_0422f3a1;
    lVar12 = *(long *)(*(long *)(lVar12 + 0x38) + 0x28);
    iVar13 = 2;
    auVar7._12_4_ = 0;
    auVar7._0_12_ = auStack_74;
    stack0xffffffffffffff88 = auVar7 << 0x20;
LAB_0422ef9e:
    if ((lVar12 == 0) ||
       (*(System_Collections_Generic_List_object__o **)(lVar12 + 0x18) ==
        (System_Collections_Generic_List_object__o *)0x0)) goto LAB_0422f3a1;
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
               *(System_Collections_Generic_List_object__o **)(lVar12 + 0x18),MethodInfo_List_1_T__Enumerator_Settings_HumanCustomSet__Ge);
    local_98._16_8_ = local_38;
    local_98._0_8_ = local_48._0_8_;
    local_98._8_8_ = local_48._8_8_;
    iVar11 = 0;
    while (__this_02.fields._version._3_1_ = cVar14,
          __this_02.fields._0_15_ = in_stack_ffffffffffffff48,
          __this_02.fields._current = (Il2CppObject *)loadout,
          bVar8 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (__this_02,(MethodInfo_3185E20 *)local_98), cVar18 = cVar14,
          (char)bVar8 != '\0') {
      if ((Il2CppObject *)local_98._16_8_ == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      if (((Il2CppObject *)(local_98._16_8_ + 0x20))->klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      bVar8 = System_String__op_Equality
                        ((System_String_o *)
                         (((Il2CppObject *)(local_98._16_8_ + 0x20))->klass->_1).namespaze,
                         costumeName,(MethodInfo *)0x0);
      if ((char)bVar8 != '\0') {
        cVar14 = '\x01';
        break;
      }
      iVar11 = iVar11 + 1;
      cVar14 = cVar18;
    }
    __this_03.fields._version._3_1_ = cVar18;
    __this_03.fields._0_15_ = in_stack_ffffffffffffff48;
    __this_03.fields._current = (Il2CppObject *)loadout;
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (__this_03,(MethodInfo_3185E10 *)local_98);
    if (cVar14 == '\0') {
      return (Characters_Human_o *)0x0;
    }
  }
  else {
    if (costume == 2) {
      if (*(long *)(lVar12 + 0x30) == 0) goto LAB_0422f3a1;
      lVar12 = *(long *)(*(long *)(lVar12 + 0x30) + 0x28);
      iVar13 = 1;
      auVar6._12_4_ = 0;
      auVar6._0_12_ = auStack_74;
      stack0xffffffffffffff88 = auVar6 << 0x20;
      goto LAB_0422ef9e;
    }
    if (costume == 1) {
      if (*(long *)(lVar12 + 0x28) == 0) goto LAB_0422f3a1;
      lVar12 = *(long *)(*(long *)(lVar12 + 0x28) + 0x28);
      iVar13 = 0;
      auVar5._12_4_ = 0;
      auVar5._0_12_ = auStack_74;
      stack0xffffffffffffff88 = auVar5 << 0x20;
      goto LAB_0422ef9e;
    }
    if ((*(long *)(lVar12 + 0x28) == 0) ||
       (__this_01 = *(Settings_ListSetting_T__o **)(*(long *)(lVar12 + 0x28) + 0x28),
       __this_01 == (Settings_ListSetting_T__o *)0x0)) goto LAB_0422f3a1;
    lVar12 = *(long *)(*(long *)(lVar12 + 0x20) + 0x28);
    iVar10 = Settings_ListSetting<object>__GetCount(__this_01,MethodInfo_Int32_GetCount);
    iVar13 = -1;
    local_98._32_4_ = iVar10;
    if (costume != -1) goto LAB_0422ef9e;
    iVar13 = -1;
    iVar11 = 0;
  }
  __this_05 = (Settings_InGameCharacterSettings_o *)il2cpp_runtime_glue(TypeInfo_InGameCharacterSettings);
  Settings_InGameCharacterSettings___ctor(__this_05,(MethodInfo *)0x0);
  if ((__this_05 != (Settings_InGameCharacterSettings_o *)0x0) &&
     (pSVar2 = (__this_05->fields).Loadout, pSVar2 != (Settings_StringSetting_o *)0x0)) {
    Settings_TypedSetting<object>__set_Value
              ((Settings_TypedSetting_T__o *)pSVar2,(Il2CppObject *)loadout,MethodInfo_Void_set_Value);
    pSVar3 = (__this_05->fields).CustomSet;
    if (pSVar3 != (Settings_IntSetting_o *)0x0) {
      Settings_TypedSetting<int>__set_Value
                ((Settings_TypedSetting_int__o *)pSVar3,iVar11 + local_98._32_4_,MethodInfo_Void_set_Value);
      pSVar3 = (__this_05->fields).Costume;
      if (pSVar3 != (Settings_IntSetting_o *)0x0) {
        Settings_TypedSetting<int>__set_Value
                  ((Settings_TypedSetting_int__o *)pSVar3,iVar13,MethodInfo_Void_set_Value);
        uVar15 = 0;
        uVar16 = 0;
        auVar4._4_8_ = 0;
        auVar4._0_4_ = (float)local_68._0_4_ * 0.017453292;
        UVar17 = UnityEngine_Quaternion__Internal_FromEulerRad
                           ((UnityEngine_Vector3_o)(auVar4 << 0x20),(MethodInfo *)0x0);
        local_68._8_4_ = extraout_XMM0_Dc;
        local_68._0_8_ = UVar17.fields._0_8_;
        local_68._12_4_ = extraout_XMM0_Dd;
        unique0x100002ca = uVar15;
        unique0x100002c2 = (System_Collections_Generic_List_Enumerator_T__c *)UVar17.fields._8_8_;
        unique0x100002ce = uVar16;
        pSVar2 = (__this_05->fields).Special;
        if (*(int *)(TypeInfo_HumanSpecials + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (pSVar2 != (Settings_StringSetting_o *)0x0) {
          Settings_TypedSetting<object>__set_Value
                    ((Settings_TypedSetting_T__o *)pSVar2,
                     *(Il2CppObject **)(*(long *)(TypeInfo_HumanSpecials + 0xb8) + 0x20),MethodInfo_Void_set_Value);
          if (*(int *)(TypeInfo_CharacterPrefabs + 0xe4) == 0) {
            il2cpp_init_class();
          }
          auVar6 = local_58;
          auVar7 = local_68;
          position_00.fields.x = (float)local_58._0_4_;
          position_00.fields.y = (float)local_58._4_4_;
          UVar17.fields._8_8_ = stack0xffffffffffffff88;
          UVar17.fields.x = (float)local_68._0_4_;
          UVar17.fields.y = (float)local_68._4_4_;
          local_68 = auVar7;
          local_58 = auVar6;
          __this_06 = (Characters_Human_o *)
                      Characters_CharacterSpawner__Spawn
                                ((System_String_o *)**(undefined8 **)(TypeInfo_CharacterPrefabs + 0xb8),
                                 position_00,UVar17,(MethodInfo *)0x0);
          if (__this_06 != (Characters_Human_o *)0x0) {
            bVar1 = (TypeInfo_Human->_2).naturalAligment;
            if (((__this_06->klass->_2).naturalAligment < bVar1) ||
               ((__this_06->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_Human)) {
                    /* WARNING: Subroutine does not return */
              il2cpp_unwind_resume(__this_06);
            }
          }
          if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (__this_06 != (Characters_Human_o *)0x0) {
            Characters_Human__Init
                      (__this_06,1,*(System_String_o **)(*(long *)(TypeInfo_TeamInfo + 0xb8) + 0x20),
                       __this_05,(MethodInfo *)0x0);
            if (costume == -1) {
              if (*(int *)(TypeInfo_HumanLoadout + 0xe4) == 0) {
                il2cpp_init_class();
              }
              customSet = local_98._24_8_;
              bVar8 = System_String__op_Equality
                                (loadout,*(System_String_o **)(*(long *)(TypeInfo_HumanLoadout + 0xb8) + 8),
                                 (MethodInfo *)0x0);
              iVar11 = 1;
              if ((char)bVar8 == '\0') {
                if (*(int *)(TypeInfo_HumanLoadout + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                bVar8 = System_String__op_Equality
                                  (loadout,*(System_String_o **)
                                            (*(long *)(TypeInfo_HumanLoadout + 0xb8) + 0x18),
                                   (MethodInfo *)0x0);
                iVar11 = 3;
                if ((char)bVar8 == '\0') {
                  if (*(int *)(TypeInfo_HumanLoadout + 0xe4) == 0) {
                    il2cpp_init_class();
                  }
                  uVar9 = System_String__op_Equality
                                    (loadout,*(System_String_o **)
                                              (*(long *)(TypeInfo_HumanLoadout + 0xb8) + 0x10),
                                     (MethodInfo *)0x0);
                  iVar11 = (uVar9 & 0xff) * 2;
                }
              }
              __this_00 = *(Characters_HumanSetup_o **)&(__this_06->fields).MountState;
              if (__this_00 == (Characters_HumanSetup_o *)0x0) goto LAB_0422f3a1;
              Characters_HumanSetup__Load
                        (__this_00,(Settings_HumanCustomSet_o *)customSet,iVar11,0,(MethodInfo *)0x0
                        );
            }
            lVar12 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
            if (((lVar12 != 0) && (lVar12 = *(long *)(lVar12 + 0x58), lVar12 != 0)) &&
               (lVar12 = *(long *)(lVar12 + 0x120), lVar12 != 0)) {
              iVar13 = *(int32_t *)(lVar12 + 0x14);
              if (1 < iVar13) {
                Characters_BaseCharacter__SetHealth
                          ((Characters_BaseCharacter_o *)__this_06,iVar13,(MethodInfo *)0x0);
              }
              return __this_06;
            }
          }
        }
      }
    }
  }
LAB_0422f3a1:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.InGameManager$$OnSetLabelRPC
// il2cpp: void GameManagers_InGameManager__OnSetLabelRPC (System_String_o* label, System_String_o* message, float time, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x422f4e0

void GameManagers_InGameManager__OnSetLabelRPC
               (System_String_o *label,System_String_o *message,float time,
               Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  Photon_Realtime_Player_o *pPVar1;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *method_00;
  
  if (DAT_05705114 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    DAT_05705114 = '\x01';
  }
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_init_class();
    pPVar1 = Photon_Pun_PhotonNetwork__get_MasterClient((MethodInfo *)0x0);
    method_00 = extraout_RDX_00;
  }
  else {
    pPVar1 = Photon_Pun_PhotonNetwork__get_MasterClient((MethodInfo *)0x0);
    method_00 = extraout_RDX;
  }
  if (info.fields.Sender != pPVar1) {
    return;
  }
  if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
    il2cpp_init_class();
    method_00 = extraout_RDX_01;
  }
  GameManagers_InGameManager__SetLabel(label,message,time,method_00);
  return;
}


// GameManagers.InGameManager$$SetLabel
// il2cpp: void GameManagers_InGameManager__SetLabel (System_String_o* label, System_String_o* message, float time, const MethodInfo* method);
// 0x422f590

void GameManagers_InGameManager__SetLabel
               (System_String_o *label,System_String_o *message,float time,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  UI_InGameMenu_o *__this;
  
  if (DAT_05705115 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameMenu);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    DAT_05705115 = '\x01';
    iVar2 = *(int *)(TypeInfo_UIManager + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_UIManager + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
    __this = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  }
  else {
    __this = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  }
  if (__this != (UI_InGameMenu_o *)0x0) {
    bVar1 = (TypeInfo_InGameMenu->_2).naturalAligment;
    if ((bVar1 <= (__this->klass->_2).naturalAligment) &&
       ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameMenu)) {
      UI_InGameMenu__SetLabel(__this,label,message,time,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.InGameManager$$EndGame
// il2cpp: void GameManagers_InGameManager__EndGame (GameManagers_InGameManager_o* __this, float time, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x422f690

void GameManagers_InGameManager__EndGame
               (GameManagers_InGameManager_o *__this,float time,Photon_Pun_PhotonMessageInfo_o info,
               MethodInfo *method)

{
  float num;
  long lVar1;
  char cVar2;
  bool_conflict bVar3;
  Photon_Realtime_Player_o *pPVar4;
  GameManagers_InGameManager__WaitAndEndGame_d__84_o *__this_00;
  System_String_o *pSVar5;
  MethodInfo *pMVar6;
  
  if (DAT_05705116 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    il2cpp_init_method_metadata(&"(");
    il2cpp_init_method_metadata(&")");
    il2cpp_init_method_metadata(&" Round ended.");
    DAT_05705116 = '\x01';
  }
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_init_class();
    pPVar4 = Photon_Pun_PhotonNetwork__get_MasterClient((MethodInfo *)0x0);
  }
  else {
    pPVar4 = Photon_Pun_PhotonNetwork__get_MasterClient((MethodInfo *)0x0);
  }
  if ((info.fields.Sender != pPVar4) || ((char)(__this->fields).IsEnding != '\0')) {
    return;
  }
  *(undefined1 *)&(__this->fields).IsEnding = 1;
  (__this->fields).EndTimeLeft = time;
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_init_class();
    bVar3 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar2 = (char)bVar3;
  }
  else {
    bVar3 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar2 = (char)bVar3;
  }
  if (cVar2 != '\0') {
    if (DAT_05705117 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_WaitAndEndGame_d__84);
      DAT_05705117 = '\x01';
    }
    __this_00 = (GameManagers_InGameManager__WaitAndEndGame_d__84_o *)
                il2cpp_runtime_glue(TypeInfo_WaitAndEndGame_d__84);
    GameManagers_InGameManager_<WaitAndEndGame>d__84___ctor(__this_00,0,(MethodInfo *)0x0);
    if (__this_00 == (GameManagers_InGameManager__WaitAndEndGame_d__84_o *)0x0) goto LAB_0422f91c;
    (__this_00->fields).time = time;
    UnityEngine_MonoBehaviour__StartCoroutine
              ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
               (MethodInfo *)0x0);
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if ((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x28), lVar1 != 0)) {
    if (*(char *)(lVar1 + 0x11) == '\0') {
      return;
    }
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    lVar1 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
    if (lVar1 != 0) {
      num = *(float *)(lVar1 + 0x20);
      if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar5 = Utility_Util__FormatFloat(num,2,(MethodInfo *)0x0);
      pMVar6 = (MethodInfo *)0x0;
      pSVar5 = System_String__Concat("(",pSVar5,")",(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar5 = GameManagers_ChatManager__GetColorString(pSVar5,3,0,pMVar6);
      pMVar6 = " Round ended.";
      pSVar5 = System_String__Concat(pSVar5,(System_String_o *)" Round ended.",(MethodInfo *)0x0);
      GameManagers_ChatManager__AddFeed(pSVar5,pMVar6);
      return;
    }
  }
LAB_0422f91c:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.InGameManager$$WaitAndEndGame
// il2cpp: System_Collections_IEnumerator_o* GameManagers_InGameManager__WaitAndEndGame (GameManagers_InGameManager_o* __this, float time, const MethodInfo* method);
// 0x422f930

System_Collections_IEnumerator_o *
GameManagers_InGameManager__WaitAndEndGame
          (GameManagers_InGameManager_o *__this,float time,MethodInfo *method)

{
  GameManagers_InGameManager__WaitAndEndGame_d__84_o *__this_00;
  
  if (DAT_05705117 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_WaitAndEndGame_d__84);
    DAT_05705117 = '\x01';
  }
  __this_00 = (GameManagers_InGameManager__WaitAndEndGame_d__84_o *)il2cpp_runtime_glue(TypeInfo_WaitAndEndGame_d__84)
  ;
  GameManagers_InGameManager_<WaitAndEndGame>d__84___ctor(__this_00,0,(MethodInfo *)0x0);
  if (__this_00 != (GameManagers_InGameManager__WaitAndEndGame_d__84_o *)0x0) {
    (__this_00->fields).time = time;
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.InGameManager$$ResetPersistentPlayerProperties
// il2cpp: void GameManagers_InGameManager__ResetPersistentPlayerProperties (const MethodInfo* method);
// 0x4227de0

void GameManagers_InGameManager__ResetPersistentPlayerProperties(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_String_o *selectedRoleName;
  Il2CppObject *pIVar3;
  Photon_Realtime_Player_o *pPVar4;
  System_String_o *pSVar5;
  System_String_o *pSVar6;
  System_Collections_Generic_Dictionary_object__object__o *pSVar7;
  System_String_array *roles;
  Il2CppObject *pIVar8;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  if (DAT_05705118 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&TypeInfo_ChatFilter);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_System_Object);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__object);
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&TypeInfo_MiscExtensions);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_PlayerProperty);
    il2cpp_init_method_metadata(&TypeInfo_RoleSpriteHelpers);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&"null");
    DAT_05705118 = '\x01';
    iVar1 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    pPVar4 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  }
  else {
    pPVar4 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  }
  if ((pPVar4 != (Photon_Realtime_Player_o *)0x0) &&
     (pSVar7 = *(System_Collections_Generic_Dictionary_object__object__o **)
                &(pPVar4->fields)._IsInactive_k__BackingField,
     pSVar7 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
    System_Collections_Generic_Dictionary<object__object>__Clear(pSVar7,MethodInfo_Void_Clear);
    if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    lVar2 = *(long *)(*(long *)(TypeInfo_InGameManager + 0xb8) + 0x40);
    if (((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x20), lVar2 != 0)) &&
       (lVar2 = *(long *)(lVar2 + 0x30), lVar2 != 0)) {
      pSVar5 = *(System_String_o **)(lVar2 + 0x18);
      if (*(int *)(TypeInfo_ChatFilter + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar5 = Anticheat_ChatFilter__FilterBadWords(pSVar5,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar5 = MiscExtensions__HexColor(pSVar5,(MethodInfo *)0x0);
      lVar2 = *(long *)(*(long *)(TypeInfo_InGameManager + 0xb8) + 0x40);
      if (((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x20), lVar2 != 0)) &&
         (lVar2 = *(long *)(lVar2 + 0x38), lVar2 != 0)) {
        pSVar6 = Anticheat_ChatFilter__FilterBadWords
                           (*(System_String_o **)(lVar2 + 0x18),(MethodInfo *)0x0);
        pSVar6 = MiscExtensions__HexColor(pSVar6,(MethodInfo *)0x0);
        pPVar4 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
        lVar2 = *(long *)(*(long *)(TypeInfo_InGameManager + 0xb8) + 0x40);
        if (((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x20), lVar2 != 0)) &&
           (lVar2 = *(long *)(lVar2 + 0x40), lVar2 != 0)) {
          selectedRoleName = *(System_String_o **)(lVar2 + 0x18);
          if (*(int *)(TypeInfo_RoleSpriteHelpers + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar6 = PatreonEffects_RoleSpriteHelpers__ComposeGuildWithRoleSprite
                             (pPVar4,pSVar6,selectedRoleName,(MethodInfo *)0x0);
          pSVar7 = (System_Collections_Generic_Dictionary_object__object__o *)
                   il2cpp_runtime_glue(TypeInfo_Dictionary_string__object);
          System_Collections_Generic_Dictionary<object__object>___ctor(pSVar7,MethodInfo_Dictionary_2_System_String_System_Object);
          if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (pSVar7 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            System_Collections_Generic_Dictionary<object__object>__Add
                      (pSVar7,(Il2CppObject *)**(undefined8 **)(TypeInfo_PlayerProperty + 0xb8),
                       (Il2CppObject *)pSVar5,MethodInfo_Void_Add);
            System_Collections_Generic_Dictionary<object__object>__Add
                      (pSVar7,*(Il2CppObject **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 8),
                       (Il2CppObject *)pSVar6,MethodInfo_Void_Add);
            pIVar3 = *(Il2CppObject **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x10);
            if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
              il2cpp_init_class();
            }
            roles = ApplicationManagers_AccountManager__get_Roles((MethodInfo *)0x0);
            pSVar5 = PatreonEffects_RoleSpriteHelpers__SerializeRoles
                               ((System_Collections_Generic_IEnumerable_string__o *)roles,
                                (MethodInfo *)0x0);
            System_Collections_Generic_Dictionary<object__object>__Add
                      (pSVar7,pIVar3,(Il2CppObject *)pSVar5,MethodInfo_Void_Add);
            System_Collections_Generic_Dictionary<object__object>__Add
                      (pSVar7,*(Il2CppObject **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x40),
                       (Il2CppObject *)0x0,MethodInfo_Void_Add);
            pIVar3 = *(Il2CppObject **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x20);
            local_2c = 0xffffffff;
            pIVar8 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_2c);
            System_Collections_Generic_Dictionary<object__object>__Add
                      (pSVar7,pIVar3,pIVar8,MethodInfo_Void_Add);
            System_Collections_Generic_Dictionary<object__object>__Add
                      (pSVar7,*(Il2CppObject **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x30),
                       (Il2CppObject *)0x0,MethodInfo_Void_Add);
            System_Collections_Generic_Dictionary<object__object>__Add
                      (pSVar7,*(Il2CppObject **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x38),
                       (Il2CppObject *)0x0,MethodInfo_Void_Add);
            System_Collections_Generic_Dictionary<object__object>__Add
                      (pSVar7,*(Il2CppObject **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x18),
                       (Il2CppObject *)0x0,MethodInfo_Void_Add);
            System_Collections_Generic_Dictionary<object__object>__Add
                      (pSVar7,*(Il2CppObject **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x28),
                       (Il2CppObject *)0x0,MethodInfo_Void_Add);
            System_Collections_Generic_Dictionary<object__object>__Add
                      (pSVar7,*(Il2CppObject **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x48),
                       (Il2CppObject *)0x0,MethodInfo_Void_Add);
            pIVar3 = *(Il2CppObject **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x50);
            local_30 = 0;
            pIVar8 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_30);
            System_Collections_Generic_Dictionary<object__object>__Add
                      (pSVar7,pIVar3,pIVar8,MethodInfo_Void_Add);
            pIVar3 = *(Il2CppObject **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x58);
            local_34 = 0;
            pIVar8 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_34);
            System_Collections_Generic_Dictionary<object__object>__Add
                      (pSVar7,pIVar3,pIVar8,MethodInfo_Void_Add);
            pIVar3 = *(Il2CppObject **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x60);
            local_38 = 0;
            pIVar8 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_38);
            System_Collections_Generic_Dictionary<object__object>__Add
                      (pSVar7,pIVar3,pIVar8,MethodInfo_Void_Add);
            pIVar3 = *(Il2CppObject **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x68);
            local_3c = 0;
            pIVar8 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_3c);
            System_Collections_Generic_Dictionary<object__object>__Add
                      (pSVar7,pIVar3,pIVar8,MethodInfo_Void_Add);
            System_Collections_Generic_Dictionary<object__object>__Add
                      (pSVar7,*(Il2CppObject **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x70),"null"
                       ,MethodInfo_Void_Add);
            pPVar4 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
            PhotonExtensions__SetCustomProperties
                      (pPVar4,(System_Collections_Generic_Dictionary_string__object__o *)pSVar7,
                       (MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.InGameManager$$ResetPlayerKD
// il2cpp: void GameManagers_InGameManager__ResetPlayerKD (Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x4216d50

void GameManagers_InGameManager__ResetPlayerKD(Photon_Realtime_Player_o *player,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  Il2CppObject *pIVar2;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  if (DAT_05705119 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_System_Object);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__object);
    il2cpp_init_method_metadata(&TypeInfo_PlayerProperty);
    DAT_05705119 = '\x01';
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           il2cpp_runtime_glue(TypeInfo_Dictionary_string__object);
  System_Collections_Generic_Dictionary<object__object>___ctor(__this,MethodInfo_Dictionary_2_System_String_System_Object);
  if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pIVar1 = *(Il2CppObject **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x50);
  local_34 = 0;
  pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_34);
  if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object__object>__Add(__this,pIVar1,pIVar2,MethodInfo_Void_Add);
    pIVar1 = *(Il2CppObject **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x58);
    local_38 = 0;
    pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_38);
    System_Collections_Generic_Dictionary<object__object>__Add(__this,pIVar1,pIVar2,MethodInfo_Void_Add);
    pIVar1 = *(Il2CppObject **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x60);
    local_3c = 0;
    pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_3c);
    System_Collections_Generic_Dictionary<object__object>__Add(__this,pIVar1,pIVar2,MethodInfo_Void_Add);
    pIVar1 = *(Il2CppObject **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x68);
    local_40 = 0;
    pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_40);
    System_Collections_Generic_Dictionary<object__object>__Add(__this,pIVar1,pIVar2,MethodInfo_Void_Add);
    PhotonExtensions__SetCustomProperties
              (player,(System_Collections_Generic_Dictionary_string__object__o *)__this,
               (MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.InGameManager$$ResetRoundPlayerProperties
// il2cpp: void GameManagers_InGameManager__ResetRoundPlayerProperties (const MethodInfo* method);
// 0x4227920

void GameManagers_InGameManager__ResetRoundPlayerProperties(MethodInfo *method)

{
  long lVar1;
  Il2CppObject *pIVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  Il2CppObject *pIVar4;
  Photon_Realtime_Player_o *pPVar5;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  if (DAT_0570511a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_System_Object);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__object);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_PlayerProperty);
    il2cpp_init_method_metadata(&TypeInfo_PlayerStatus);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    il2cpp_init_method_metadata(&"null");
    DAT_0570511a = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
  if (((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x58), lVar1 != 0)) &&
     (lVar1 = *(long *)(lVar1 + 0xb8), lVar1 != 0)) {
    if (*(char *)(lVar1 + 0x11) != '\0') {
      pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
               il2cpp_runtime_glue(TypeInfo_Dictionary_string__object);
      System_Collections_Generic_Dictionary<object__object>___ctor(pSVar3,MethodInfo_Dictionary_2_System_String_System_Object);
      if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pIVar2 = *(Il2CppObject **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x50);
      local_40 = 0;
      pIVar4 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_40);
      if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
      goto LAB_04227c78;
      System_Collections_Generic_Dictionary<object__object>__Add(pSVar3,pIVar2,pIVar4,MethodInfo_Void_Add);
      pIVar2 = *(Il2CppObject **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x58);
      local_34 = 0;
      pIVar4 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_34);
      System_Collections_Generic_Dictionary<object__object>__Add(pSVar3,pIVar2,pIVar4,MethodInfo_Void_Add);
      pIVar2 = *(Il2CppObject **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x60);
      local_38 = 0;
      pIVar4 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_38);
      System_Collections_Generic_Dictionary<object__object>__Add(pSVar3,pIVar2,pIVar4,MethodInfo_Void_Add);
      pIVar2 = *(Il2CppObject **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x68);
      local_3c = 0;
      pIVar4 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_3c);
      System_Collections_Generic_Dictionary<object__object>__Add(pSVar3,pIVar2,pIVar4,MethodInfo_Void_Add);
      if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pPVar5 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
      PhotonExtensions__SetCustomProperties
                (pPVar5,(System_Collections_Generic_Dictionary_string__object__o *)pSVar3,
                 (MethodInfo *)0x0);
    }
    pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
             il2cpp_runtime_glue(TypeInfo_Dictionary_string__object);
    System_Collections_Generic_Dictionary<object__object>___ctor(pSVar3,MethodInfo_Dictionary_2_System_String_System_Object);
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pIVar2 = *(Il2CppObject **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x18);
    if (*(int *)(TypeInfo_PlayerStatus + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary<object__object>__Add
                (pSVar3,pIVar2,*(Il2CppObject **)(*(long *)(TypeInfo_PlayerStatus + 0xb8) + 0x10),
                 MethodInfo_Void_Add);
      pIVar2 = *(Il2CppObject **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x20);
      local_40 = 0xffffffff;
      pIVar4 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_40);
      System_Collections_Generic_Dictionary<object__object>__Add(pSVar3,pIVar2,pIVar4,MethodInfo_Void_Add);
      System_Collections_Generic_Dictionary<object__object>__Add
                (pSVar3,*(Il2CppObject **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x70),"null",
                 MethodInfo_Void_Add);
      if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pPVar5 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
      PhotonExtensions__SetCustomProperties
                (pPVar5,(System_Collections_Generic_Dictionary_string__object__o *)pSVar3,
                 (MethodInfo *)0x0);
      return;
    }
  }
LAB_04227c78:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.InGameManager$$UpdatePlayerName
// il2cpp: void GameManagers_InGameManager__UpdatePlayerName (const MethodInfo* method);
// 0x422d480

void GameManagers_InGameManager__UpdatePlayerName(MethodInfo *method)

{
  long lVar1;
  System_String_o *pSVar2;
  Il2CppObject *key;
  bool_conflict bVar3;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  Photon_Realtime_Player_o *pPVar6;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  System_String_array *roles;
  MethodInfo *method_00;
  int32_t color;
  
  if (DAT_0570511b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&TypeInfo_ChatFilter);
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_System_Object);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__object);
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&TypeInfo_MiscExtensions);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_PlayerProperty);
    il2cpp_init_method_metadata(&TypeInfo_RoleSpriteHelpers);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&TypeInfo_TeamInfo);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    DAT_0570511b = '\x01';
    if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) goto LAB_0422d78c;
LAB_0422d4b0:
    lVar1 = *(long *)(*(long *)(TypeInfo_InGameManager + 0xb8) + 0x40);
  }
  else {
    if (*(int *)(TypeInfo_InGameManager + 0xe4) != 0) goto LAB_0422d4b0;
LAB_0422d78c:
    il2cpp_init_class();
    lVar1 = *(long *)(*(long *)(TypeInfo_InGameManager + 0xb8) + 0x40);
  }
  if (((lVar1 == 0) || (*(long *)(lVar1 + 0x20) == 0)) ||
     (lVar1 = *(long *)(*(long *)(lVar1 + 0x20) + 0x30), lVar1 == 0)) goto LAB_0422d954;
  pSVar4 = *(System_String_o **)(lVar1 + 0x18);
  if (*(int *)(TypeInfo_ChatFilter + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar4 = Anticheat_ChatFilter__FilterBadWords(pSVar4,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar4 = MiscExtensions__HexColor(pSVar4,(MethodInfo *)0x0);
  lVar1 = *(long *)(*(long *)(TypeInfo_InGameManager + 0xb8) + 0x40);
  if (((lVar1 == 0) || (lVar1 = *(long *)(lVar1 + 0x20), lVar1 == 0)) ||
     (lVar1 = *(long *)(lVar1 + 0x38), lVar1 == 0)) goto LAB_0422d954;
  pSVar5 = Anticheat_ChatFilter__FilterBadWords
                     (*(System_String_o **)(lVar1 + 0x18),(MethodInfo *)0x0);
  pSVar5 = MiscExtensions__HexColor(pSVar5,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pPVar6 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  lVar1 = *(long *)(*(long *)(TypeInfo_InGameManager + 0xb8) + 0x40);
  if (((lVar1 == 0) || (lVar1 = *(long *)(lVar1 + 0x20), lVar1 == 0)) ||
     (lVar1 = *(long *)(lVar1 + 0x40), lVar1 == 0)) goto LAB_0422d954;
  pSVar2 = *(System_String_o **)(lVar1 + 0x18);
  if (*(int *)(TypeInfo_RoleSpriteHelpers + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar5 = PatreonEffects_RoleSpriteHelpers__ComposeGuildWithRoleSprite
                     (pPVar6,pSVar5,pSVar2,(MethodInfo *)0x0);
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
  if (((lVar1 == 0) || (lVar1 = *(long *)(lVar1 + 0x58), lVar1 == 0)) ||
     (method_00 = *(MethodInfo **)(lVar1 + 0x20), method_00 == (MethodInfo *)0x0))
  goto LAB_0422d954;
  if (*(int *)((long)&method_00->invoker_method + 4) == 2) {
    lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x70);
    if ((lVar1 == 0) || (lVar1 = *(long *)(lVar1 + 0x50), lVar1 == 0)) goto LAB_0422d954;
    pSVar2 = *(System_String_o **)(lVar1 + 0x18);
    if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar3 = System_String__op_Equality
                      (pSVar2,(System_String_o *)**(undefined8 **)(TypeInfo_TeamInfo + 0xb8),
                       (MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x70);
      if ((lVar1 == 0) || (lVar1 = *(long *)(lVar1 + 0x50), lVar1 == 0)) goto LAB_0422d954;
      pSVar2 = *(System_String_o **)(lVar1 + 0x18);
      if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar3 = System_String__op_Equality
                        (pSVar2,*(System_String_o **)(*(long *)(TypeInfo_TeamInfo + 0xb8) + 8),
                         (MethodInfo *)0x0);
      if ((char)bVar3 == '\0') goto LAB_0422d830;
      if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      color = 5;
    }
    else {
      if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      color = 6;
    }
    pSVar4 = GameManagers_ChatManager__GetColorString(pSVar4,color,0,method_00);
  }
LAB_0422d830:
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pPVar6 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           il2cpp_runtime_glue(TypeInfo_Dictionary_string__object);
  System_Collections_Generic_Dictionary<object__object>___ctor(__this,MethodInfo_Dictionary_2_System_String_System_Object);
  if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object__object>__Add
              (__this,(Il2CppObject *)**(undefined8 **)(TypeInfo_PlayerProperty + 0xb8),(Il2CppObject *)pSVar4,
               MethodInfo_Void_Add);
    System_Collections_Generic_Dictionary<object__object>__Add
              (__this,*(Il2CppObject **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 8),(Il2CppObject *)pSVar5,
               MethodInfo_Void_Add);
    key = *(Il2CppObject **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x10);
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    roles = ApplicationManagers_AccountManager__get_Roles((MethodInfo *)0x0);
    if (*(int *)(TypeInfo_RoleSpriteHelpers + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar4 = PatreonEffects_RoleSpriteHelpers__SerializeRoles
                       ((System_Collections_Generic_IEnumerable_string__o *)roles,(MethodInfo *)0x0)
    ;
    System_Collections_Generic_Dictionary<object__object>__Add
              (__this,key,(Il2CppObject *)pSVar4,MethodInfo_Void_Add);
    PhotonExtensions__SetCustomProperties
              (pPVar6,(System_Collections_Generic_Dictionary_string__object__o *)__this,
               (MethodInfo *)0x0);
    return;
  }
LAB_0422d954:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.InGameManager$$UpdateRoundPlayerProperties
// il2cpp: void GameManagers_InGameManager__UpdateRoundPlayerProperties (const MethodInfo* method);
// 0x4228ce0

void GameManagers_InGameManager__UpdateRoundPlayerProperties(MethodInfo *method)

{
  long *plVar1;
  long lVar2;
  UnityEngine_Object_o *x;
  Il2CppObject *value;
  bool_conflict bVar3;
  undefined8 *puVar4;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  Photon_Realtime_Player_o *player;
  
  if (DAT_0570511c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_System_Object);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__object);
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_PlayerProperty);
    il2cpp_init_method_metadata(&TypeInfo_PlayerStatus);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    DAT_0570511c = '\x01';
  }
  plVar1 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (plVar1 != (long *)0x0) {
    if ((*(byte *)(*plVar1 + 0x130) < *(byte *)(TypeInfo_InGameManager + 0x130)) ||
       (*(long *)(*(long *)(*plVar1 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameManager + 0x130) * 8) !=
        TypeInfo_InGameManager)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(plVar1);
    }
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x70);
  if ((lVar2 == 0) || (lVar2 = *(long *)(lVar2 + 0x20), lVar2 == 0)) goto LAB_04229033;
  if (*(int *)(lVar2 + 0x14) == 2) {
    if (plVar1 == (long *)0x0) goto LAB_04229033;
    x = (UnityEngine_Object_o *)plVar1[0xe];
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      if (plVar1[0xe] == 0) goto LAB_04229033;
      if (*(char *)(plVar1[0xe] + 0x68) == '\0') {
        if (*(int *)(TypeInfo_PlayerStatus + 0xe4) == 0) {
          il2cpp_init_class();
        }
        puVar4 = *(undefined8 **)(TypeInfo_PlayerStatus + 0xb8);
        goto LAB_04228ea4;
      }
    }
    if (*(int *)(TypeInfo_PlayerStatus + 0xe4) == 0) {
      il2cpp_init_class();
    }
    puVar4 = (undefined8 *)(*(long *)(TypeInfo_PlayerStatus + 0xb8) + 8);
  }
  else {
    if (*(int *)(TypeInfo_PlayerStatus + 0xe4) == 0) {
      il2cpp_init_class();
    }
    puVar4 = (undefined8 *)(*(long *)(TypeInfo_PlayerStatus + 0xb8) + 0x10);
  }
LAB_04228ea4:
  value = (Il2CppObject *)*puVar4;
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           il2cpp_runtime_glue(TypeInfo_Dictionary_string__object);
  System_Collections_Generic_Dictionary<object__object>___ctor(__this,MethodInfo_Dictionary_2_System_String_System_Object);
  if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object__object>__Add
              (__this,*(Il2CppObject **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x18),value,MethodInfo_Void_Add);
    lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x70);
    if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x28), lVar2 != 0)) {
      System_Collections_Generic_Dictionary<object__object>__Add
                (__this,*(Il2CppObject **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x28),
                 *(Il2CppObject **)(lVar2 + 0x18),MethodInfo_Void_Add);
      lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x70);
      if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x30), lVar2 != 0)) {
        System_Collections_Generic_Dictionary<object__object>__Add
                  (__this,*(Il2CppObject **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x48),
                   *(Il2CppObject **)(lVar2 + 0x18),MethodInfo_Void_Add);
        lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x70);
        if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x50), lVar2 != 0)) {
          System_Collections_Generic_Dictionary<object__object>__Add
                    (__this,*(Il2CppObject **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x40),
                     *(Il2CppObject **)(lVar2 + 0x18),MethodInfo_Void_Add);
          if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
            il2cpp_init_class();
          }
          player = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
          PhotonExtensions__SetCustomProperties
                    (player,(System_Collections_Generic_Dictionary_string__object__o *)__this,
                     (MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_04229033:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.InGameManager$$ResetPlayerInfo
// il2cpp: void GameManagers_InGameManager__ResetPlayerInfo (const MethodInfo* method);
// 0x4228920

void GameManagers_InGameManager__ResetPlayerInfo(MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_int__object__o *pSVar2;
  System_Collections_Generic_HashSet_int__o *pSVar3;
  Settings_ProfileSettings_o *pSVar4;
  long lVar5;
  GameManagers_PlayerInfo_o *__this;
  Photon_Realtime_Player_o *pPVar6;
  
  if (DAT_0570511d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_PlayerInfo);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    DAT_0570511d = '\x01';
    iVar1 = *(int *)(TypeInfo_InGameManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_InGameManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    pSVar2 = *(System_Collections_Generic_Dictionary_int__object__o **)
              (*(long *)(TypeInfo_InGameManager + 0xb8) + 0x18);
  }
  else {
    pSVar2 = *(System_Collections_Generic_Dictionary_int__object__o **)
              (*(long *)(TypeInfo_InGameManager + 0xb8) + 0x18);
  }
  if (pSVar2 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
    System_Collections_Generic_Dictionary<int__object>__Clear(pSVar2,MethodInfo_Void_Clear);
    pSVar3 = *(System_Collections_Generic_HashSet_int__o **)(*(long *)(TypeInfo_InGameManager + 0xb8) + 0x20);
    if (pSVar3 != (System_Collections_Generic_HashSet_int__o *)0x0) {
      System_Collections_Generic_HashSet<int>__Clear(pSVar3,MethodInfo_Void_Clear);
      pSVar3 = *(System_Collections_Generic_HashSet_int__o **)
                (*(long *)(TypeInfo_InGameManager + 0xb8) + 0x28);
      if (pSVar3 != (System_Collections_Generic_HashSet_int__o *)0x0) {
        System_Collections_Generic_HashSet<int>__Clear(pSVar3,MethodInfo_Void_Clear);
        __this = (GameManagers_PlayerInfo_o *)il2cpp_runtime_glue(TypeInfo_PlayerInfo);
        GameManagers_PlayerInfo___ctor(__this,(MethodInfo *)0x0);
        if ((__this != (GameManagers_PlayerInfo_o *)0x0) &&
           (pSVar4 = (__this->fields).Profile, pSVar4 != (Settings_ProfileSettings_o *)0x0)) {
          (*(pSVar4->klass->vtable)._9_Copy.methodPtr)
                    (pSVar4,*(undefined8 *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8),
                     (pSVar4->klass->vtable)._9_Copy.method);
          pSVar2 = *(System_Collections_Generic_Dictionary_int__object__o **)
                    (*(long *)(TypeInfo_InGameManager + 0xb8) + 0x18);
          if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pPVar6 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
          if ((pPVar6 != (Photon_Realtime_Player_o *)0x0) &&
             (pSVar2 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
            System_Collections_Generic_Dictionary<int__object>__Add
                      (pSVar2,(pPVar6->fields).actorNumber,(Il2CppObject *)__this,MethodInfo_Void_Add);
            lVar5 = *(long *)(TypeInfo_InGameManager + 0xb8);
            *(GameManagers_PlayerInfo_o **)(lVar5 + 0x40) = __this;
            il2cpp_runtime_glue(lVar5 + 0x40,__this);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.InGameManager$$PrintMOTD
// il2cpp: void GameManagers_InGameManager__PrintMOTD (System_String_o* original, const MethodInfo* method);
// 0x422ac50

void GameManagers_InGameManager__PrintMOTD(System_String_o *original,MethodInfo *method)

{
  long lVar1;
  bool_conflict bVar2;
  System_String_o *message;
  MethodInfo *in_stack_ffffffffffffffd8;
  
  if (DAT_0570511e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&"MOTD: ");
    DAT_0570511e = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
  if (((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x58), lVar1 != 0)) &&
     (lVar1 = *(long *)(lVar1 + 0x100), lVar1 != 0)) {
    bVar2 = System_String__op_Inequality
                      (original,*(System_String_o **)(lVar1 + 0x18),(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      return;
    }
    lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
    if (((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x58), lVar1 != 0)) &&
       (lVar1 = *(long *)(lVar1 + 0x100), lVar1 != 0)) {
      message = System_String__Concat
                          ("MOTD: ",*(System_String_o **)(lVar1 + 0x18),(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      GameManagers_ChatManager__AddLine
                (message,3,0,(System_Nullable_DateTime__o)ZEXT816(0),-1,0,0,-1,0,
                 in_stack_ffffffffffffffd8);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.InGameManager$$Awake
// il2cpp: void GameManagers_InGameManager__Awake (GameManagers_InGameManager_o* __this, const MethodInfo* method);
// 0x422f9a0

void GameManagers_InGameManager__Awake(GameManagers_InGameManager_o *__this,MethodInfo *method)

{
  long lVar1;
  long *plVar2;
  System_String_o *original;
  char cVar3;
  bool_conflict bVar4;
  UnityEngine_GameObject_o *__this_00;
  CustomSkins_SkyboxCustomSkinLoader_o *pCVar5;
  MethodInfo *pMVar6;
  
  if (DAT_0570511f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_SkyboxCustomSkinLoader_AddComponent_SkyboxCustom);
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    DAT_0570511f = '\x01';
  }
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    pCVar5 = (CustomSkins_SkyboxCustomSkinLoader_o *)
             UnityEngine_GameObject__AddComponent<object>(__this_00,MethodInfo_SkyboxCustomSkinLoader_AddComponent_SkyboxCustom);
    (__this->fields)._skyboxCustomSkinLoader = pCVar5;
    il2cpp_runtime_glue(&(__this->fields)._skyboxCustomSkinLoader,pCVar5);
    lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
    if (lVar1 != 0) {
      (__this->fields)._generalInputSettings = *(Settings_GeneralInputSettings_o **)(lVar1 + 0x20);
      il2cpp_runtime_glue(&(__this->fields)._generalInputSettings);
      pMVar6 = TypeInfo_InGameManager;
      if (*(int *)((long)&TypeInfo_InGameManager[2].parameters + 4) == 0) {
        il2cpp_init_class();
      }
      GameManagers_InGameManager__ResetRoundPlayerProperties(pMVar6);
      if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
        il2cpp_init_class();
        bVar4 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
        cVar3 = (char)bVar4;
      }
      else {
        bVar4 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
        cVar3 = (char)bVar4;
      }
      if (cVar3 == '\0') {
        return;
      }
      plVar2 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
      if (((plVar2 != (long *)0x0) && (plVar2[0xb] != 0)) &&
         (lVar1 = *(long *)(plVar2[0xb] + 0x100), lVar1 != 0)) {
        original = *(System_String_o **)(lVar1 + 0x18);
        pMVar6 = *(MethodInfo **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x58);
        (**(code **)(*plVar2 + 0x1c8))(plVar2,pMVar6,*(undefined8 *)(*plVar2 + 0x1d0));
        if (*(int *)((long)&TypeInfo_InGameManager[2].parameters + 4) == 0) {
          il2cpp_init_class();
        }
        GameManagers_InGameManager__PrintMOTD(original,pMVar6);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.InGameManager$$Start
// il2cpp: void GameManagers_InGameManager__Start (GameManagers_InGameManager_o* __this, const MethodInfo* method);
// 0x422fb10

void GameManagers_InGameManager__Start(GameManagers_InGameManager_o *__this,MethodInfo *method)

{
  float fVar1;
  undefined8 uVar2;
  byte bVar3;
  Photon_Pun_PhotonView_o *__this_00;
  long *plVar4;
  Utility_Algorithms_CompressionAlgorithm_o *__this_01;
  Il2CppObject *value;
  Il2CppClass *pIVar5;
  char cVar6;
  bool_conflict bVar7;
  int32_t iVar8;
  Il2CppObject *pIVar9;
  Photon_Realtime_Player_o *pPVar10;
  System_Object_array *parameters;
  System_String_o *pSVar11;
  System_Byte_array *pSVar12;
  long lVar13;
  MethodInfo *method_00;
  GameManagers_InGameManager_o *__this_02;
  undefined8 uVar14;
  UI_InGameMenu_o *pUVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  UnityEngine_Vector3_o position;
  UnityEngine_Quaternion_o rotation;
  undefined4 uStack_70;
  int32_t iStack_6c;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if (DAT_05705120 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_DataCompressors);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&TypeInfo_Hashtable);
    il2cpp_init_method_metadata(&TypeInfo_InGameMenu);
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_PlayerProperty);
    il2cpp_init_method_metadata(&TypeInfo_RPCManager);
    il2cpp_init_method_metadata(&TypeInfo_RoomProperty);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"GameSettingsRPC");
    il2cpp_init_method_metadata(&"Game/PhotonVoicePrefab");
    DAT_05705120 = '\x01';
    if (*(int *)(TypeInfo_UIManager + 0xe4) != 0) goto LAB_0422fb45;
LAB_0422fc7f:
    il2cpp_init_class();
    pUVar15 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (pUVar15 != (UI_InGameMenu_o *)0x0) goto LAB_0422fb59;
LAB_0422fc9b:
    (__this->fields)._inGameMenu = (UI_InGameMenu_o *)0x0;
  }
  else {
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) goto LAB_0422fc7f;
LAB_0422fb45:
    pUVar15 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (pUVar15 == (UI_InGameMenu_o *)0x0) goto LAB_0422fc9b;
LAB_0422fb59:
    pIVar5 = TypeInfo_InGameMenu;
    bVar3 = (TypeInfo_InGameMenu->_2).naturalAligment;
    if (((pUVar15->klass->_2).naturalAligment < bVar3) ||
       ((pUVar15->klass->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_InGameMenu)) {
LAB_04230107:
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(pUVar15,pIVar5);
    }
    (__this->fields)._inGameMenu = pUVar15;
    if (((pUVar15->klass->_2).naturalAligment < bVar3) ||
       ((pUVar15->klass->_2).typeHierarchy[(ulong)bVar3 - 1] != pIVar5)) goto LAB_04230107;
  }
  il2cpp_runtime_glue(&(__this->fields)._inGameMenu);
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_init_class();
    bVar7 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar6 = (char)bVar7;
  }
  else {
    bVar7 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar6 = (char)bVar7;
  }
  if (cVar6 != '\0') {
    __this_00 = (Photon_Pun_PhotonView_o *)**(undefined8 **)(TypeInfo_RPCManager + 0xb8);
    parameters = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,1);
    if (*(int *)(TypeInfo_DataCompressors + 0xe4) == 0) {
      il2cpp_init_class();
    }
    plVar4 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
    if (plVar4 == (long *)0x0) goto LAB_04230102;
    __this_01 = (Utility_Algorithms_CompressionAlgorithm_o *)**(undefined8 **)(TypeInfo_DataCompressors + 0xb8);
    pSVar11 = (System_String_o *)
              (**(code **)(*plVar4 + 0x1a8))(plVar4,*(undefined8 *)(*plVar4 + 0x1b0));
    if ((__this_01 == (Utility_Algorithms_CompressionAlgorithm_o *)0x0) ||
       (pSVar12 = Utility_Algorithms_CompressionAlgorithm__CompressString
                            (__this_01,pSVar11,1,(MethodInfo *)0x0),
       parameters == (System_Object_array *)0x0)) goto LAB_04230102;
    if ((pSVar12 != (System_Byte_array *)0x0) &&
       (lVar13 = il2cpp_runtime_glue(pSVar12,(((parameters->obj).klass)->_1).element_class),
       lVar13 == 0)) {
      uVar14 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
      il2cpp_glue_02274a00(uVar14,0);
    }
    if ((int)parameters->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    parameters->m_Items[0] = &pSVar12->obj;
    il2cpp_runtime_glue(parameters->m_Items,pSVar12);
    if (__this_00 == (Photon_Pun_PhotonView_o *)0x0) goto LAB_04230102;
    Photon_Pun_PhotonView__RPC(__this_00,"GameSettingsRPC",0,parameters,(MethodInfo *)0x0);
    lVar13 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
    if ((((lVar13 == 0) || (lVar13 = *(long *)(lVar13 + 0x38), lVar13 == 0)) ||
        (*(long *)(lVar13 + 0x28) == 0)) || (*(long *)(lVar13 + 0x30) == 0)) goto LAB_04230102;
    pIVar9 = *(Il2CppObject **)(*(long *)(lVar13 + 0x28) + 0x18);
    value = *(Il2CppObject **)(*(long *)(lVar13 + 0x30) + 0x18);
    method_00 = (MethodInfo *)il2cpp_runtime_glue(TypeInfo_Hashtable);
    ExitGames_Client_Photon_Hashtable___ctor
              ((ExitGames_Client_Photon_Hashtable_o *)method_00,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_RoomProperty + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (method_00 == (MethodInfo *)0x0) goto LAB_04230102;
    System_Collections_Generic_Dictionary<object__object>__Add
              ((System_Collections_Generic_Dictionary_object__object__o *)method_00,
               *(Il2CppObject **)(*(long *)(TypeInfo_RoomProperty + 0xb8) + 8),pIVar9,MethodInfo_Void_Add);
    System_Collections_Generic_Dictionary<object__object>__Add
              ((System_Collections_Generic_Dictionary_object__object__o *)method_00,
               *(Il2CppObject **)(*(long *)(TypeInfo_RoomProperty + 0xb8) + 0x10),value,MethodInfo_Void_Add);
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_init_class();
    }
    __this_02 = (GameManagers_InGameManager_o *)
                Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
    if (__this_02 == (GameManagers_InGameManager_o *)0x0) goto LAB_04230102;
    (*(__this_02->klass->vtable)._5_unknown.methodPtr)
              (__this_02,method_00,0,0,(__this_02->klass->vtable)._5_unknown.method);
    GameManagers_InGameManager__LoadSkin(__this_02,method_00);
  }
  if (DAT_056fdd15 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_056fdd15 = '\x01';
  }
  uVar14 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
  fVar1 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  uVar16 = (int)uVar14;
  uVar17 = (int)((ulong)uVar14 >> 0x20);
  uVar18 = 0;
  uVar19 = 0;
  if (DAT_056fde1e == '\0') {
    uStack_60 = 0;
    uStack_68 = uVar14;
    il2cpp_init_method_metadata(&TypeInfo_Quaternion);
    DAT_056fde1e = '\x01';
    uVar16 = (undefined4)uStack_68;
    uVar17 = uStack_68._4_4_;
    uVar18 = (undefined4)uStack_60;
    uVar19 = uStack_60._4_4_;
  }
  uVar14 = **(undefined8 **)(TypeInfo_Quaternion + 0xb8);
  uVar2 = (*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
  uVar20 = (int)uVar14;
  uVar21 = (int)((ulong)uVar14 >> 0x20);
  uVar22 = (int)uVar2;
  uVar23 = (int)((ulong)uVar2 >> 0x20);
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    uStack_68 = CONCAT44(uVar17,uVar16);
    uStack_60 = CONCAT44(uVar19,uVar18);
    uStack_40 = 0;
    uStack_50 = 0;
    uStack_58 = uVar2;
    uStack_48 = uVar14;
    il2cpp_init_class();
    uVar16 = (undefined4)uStack_68;
    uVar17 = uStack_68._4_4_;
    uVar20 = (undefined4)uStack_48;
    uVar21 = uStack_48._4_4_;
    uVar22 = (undefined4)uStack_58;
    uVar23 = uStack_58._4_4_;
  }
  position.fields.y = (float)uVar17;
  position.fields.x = (float)uVar16;
  position.fields.z = fVar1;
  rotation.fields.y = (float)uVar21;
  rotation.fields.x = (float)uVar20;
  rotation.fields.w = (float)uVar23;
  rotation.fields.z = (float)uVar22;
  Photon_Pun_PhotonNetwork__Instantiate
            ("Game/PhotonVoicePrefab",position,rotation,'\0',(System_Object_array *)0x0,(MethodInfo *)0x0);
  if (DAT_05705067 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_WaitAndLoad_d__2);
    DAT_05705067 = '\x01';
  }
  pIVar9 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitAndLoad_d__2);
  System_Object___ctor(pIVar9,(MethodInfo *)0x0);
  *(undefined4 *)&pIVar9[1].klass = 0;
  if (pIVar9 != (Il2CppObject *)0x0) {
    pIVar9[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_glue(pIVar9 + 2,__this);
    UnityEngine_MonoBehaviour__StartCoroutine
              ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)pIVar9,
               (MethodInfo *)0x0);
    iVar8 = Photon_Pun_PhotonNetwork__GetPing((MethodInfo *)0x0);
    pPVar10 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar11 = *(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x80);
    iStack_6c = iVar8;
    pIVar9 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&iStack_6c);
    PhotonExtensions__SetCustomProperty(pPVar10,pSVar11,pIVar9,(MethodInfo *)0x0);
    pPVar10 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    pSVar11 = *(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x88);
    uStack_70 = 0xffffffff;
    pIVar9 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&uStack_70);
    PhotonExtensions__SetCustomProperty(pPVar10,pSVar11,pIVar9,(MethodInfo *)0x0);
    return;
  }
LAB_04230102:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.InGameManager$$IsFinishedLoading
// il2cpp: bool GameManagers_InGameManager__IsFinishedLoading (GameManagers_InGameManager_o* __this, const MethodInfo* method);
// 0x4230600

bool_conflict
GameManagers_InGameManager__IsFinishedLoading
          (GameManagers_InGameManager_o *__this,MethodInfo *method)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  if (DAT_05705068 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&TypeInfo_MapManager);
    DAT_05705068 = '\x01';
    iVar2 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
    cVar1 = *(char *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x10);
  }
  else {
    cVar1 = *(char *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x10);
  }
  if (cVar1 != '\0') {
    if (*(int *)(TypeInfo_MapManager + 0xe4) == 0) {
      il2cpp_init_class();
      pcVar3 = *(char **)(TypeInfo_MapManager + 0xb8);
      cVar1 = *pcVar3;
    }
    else {
      pcVar3 = *(char **)(TypeInfo_MapManager + 0xb8);
      cVar1 = *pcVar3;
    }
    if (cVar1 != '\0') {
      return (bool_conflict)
             CONCAT71((int7)((ulong)pcVar3 >> 8),(char)(__this->fields)._gameSettingsLoaded != '\0')
      ;
    }
  }
  return 0;
}


// GameManagers.InGameManager$$Update
// il2cpp: void GameManagers_InGameManager__Update (GameManagers_InGameManager_o* __this, const MethodInfo* method);
// 0x42306d0

void GameManagers_InGameManager__Update(GameManagers_InGameManager_o *__this,MethodInfo *method)

{
  System_String_o *key;
  undefined8 in_RAX;
  Photon_Realtime_Player_o *player;
  Il2CppObject *value;
  float fVar1;
  float fVar2;
  undefined4 uStack_24;
  
  uStack_24 = (undefined4)((ulong)in_RAX >> 0x20);
  if (DAT_05705121 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_PlayerProperty);
    DAT_05705121 = '\x01';
  }
  if ((__this->fields).State != 0) {
    GameManagers_InGameManager__UpdateInput(__this,method);
  }
  GameManagers_InGameManager__UpdateCleanCharacters(__this,method);
  fVar2 = (__this->fields).EndTimeLeft;
  fVar1 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  fVar2 = fVar2 - fVar1;
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  (__this->fields).EndTimeLeft = fVar2;
  fVar2 = *(float *)((long)&(__this->fields).Detections + 4);
  fVar1 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  fVar1 = fVar1 + fVar2;
  *(float *)((long)&(__this->fields).Detections + 4) = fVar1;
  if (*(float *)&(__this->fields).Detections <= fVar1) {
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_init_class();
    }
    Photon_Pun_PhotonNetwork__GetPing((MethodInfo *)0x0);
    player = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_init_class();
    }
    key = *(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x80);
    value = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&uStack_24);
    PhotonExtensions__SetCustomProperty(player,key,value,(MethodInfo *)0x0);
    *(undefined4 *)((long)&(__this->fields).Detections + 4) = 0;
  }
  return;
}


// GameManagers.InGameManager$$OnFinishLoading
// il2cpp: void GameManagers_InGameManager__OnFinishLoading (GameManagers_InGameManager_o* __this, const MethodInfo* method);
// 0x4230dc0

void GameManagers_InGameManager__OnFinishLoading
               (GameManagers_InGameManager_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  char cVar2;
  uint uVar3;
  UI_LoadingMenu_o *__this_00;
  UI_InGameMenu_o *__this_01;
  System_Collections_Generic_List_object__o *__this_02;
  System_String_array *pSVar4;
  System_Collections_Generic_Dictionary_string__BaseSetting__o *modeSettings;
  Photon_Pun_PhotonView_o *pPVar5;
  Utility_Algorithms_CompressionAlgorithm_o *__this_03;
  long *plVar6;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  bool_conflict bVar7;
  System_Collections_Generic_List_string__o *addonNames;
  System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *addonSettings;
  System_Object_array *pSVar8;
  System_Byte_array *pSVar9;
  long lVar10;
  System_String_o *pSVar11;
  undefined8 uVar12;
  MethodInfo *pMVar13;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  float num;
  undefined1 in_stack_ffffffffffffff88 [12];
  undefined4 in_stack_ffffffffffffff94;
  System_Collections_Generic_List_Enumerator_T__c *pSVar14;
  System_Collections_Generic_List_Enumerator_T__o SStack_48;
  
  if (DAT_05705122 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinLevels);
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&TypeInfo_DataCompressors);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_StringSetting_get_Current);
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_Settings_StringSetting__Get);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&TypeInfo_MapManager);
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_RPCManager);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Settings_StringSetting__get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    il2cpp_init_method_metadata(&"(");
    il2cpp_init_method_metadata(&"NotifyPlayerJoinedRPC");
    il2cpp_init_method_metadata(&")");
    il2cpp_init_method_metadata(&"PlayerInfoRPC");
    il2cpp_init_method_metadata(&" Round started.");
    DAT_05705122 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar11 = *(System_String_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x18);
  if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar7 = System_String__op_Equality
                    (pSVar11,*(System_String_o **)(*(long *)(TypeInfo_BuiltinLevels + 0xb8) + 0x28),
                     (MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar11 = *(System_String_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x18);
    if (*(int *)(TypeInfo_MapManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    lVar10 = *(long *)(*(long *)(TypeInfo_MapManager + 0xb8) + 8);
    if (lVar10 == 0) goto LAB_042315ad;
    pSVar11 = System_String__Concat(pSVar11,*(System_String_o **)(lVar10 + 0x40),(MethodInfo *)0x0);
  }
  else {
    if (*(int *)(TypeInfo_MapManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    lVar10 = *(long *)(*(long *)(TypeInfo_MapManager + 0xb8) + 8);
    if (lVar10 == 0) goto LAB_042315ad;
    pSVar11 = *(System_String_o **)(lVar10 + 0x40);
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
  }
  lVar10 = *(long *)(TypeInfo_CustomLogicManager + 0xb8);
  *(System_String_o **)(lVar10 + 0x18) = pSVar11;
  il2cpp_runtime_glue(lVar10 + 0x18,pSVar11);
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this_00 = *(UI_LoadingMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x30);
  if (__this_00 != (UI_LoadingMenu_o *)0x0) {
    UI_LoadingMenu__UpdateLoading(__this_00,1.0,1,0,(MethodInfo *)0x0);
    if ((__this->fields).State == 0) {
      (__this->fields).State = 1;
    }
    lVar10 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x70);
    if ((lVar10 != 0) && (lVar10 = *(long *)(lVar10 + 0x20), lVar10 != 0)) {
      if (*(int *)(lVar10 + 0x14) == 0) {
        __this_01 = (__this->fields)._inGameMenu;
        if (__this_01 == (UI_InGameMenu_o *)0x0) goto LAB_042315ad;
        UI_InGameMenu__SetCharacterMenu(__this_01,1,(MethodInfo *)0x0);
      }
      addonNames = (System_Collections_Generic_List_string__o *)il2cpp_runtime_glue(TypeInfo_List_string);
      System_Collections_Generic_List<object>___ctor
                ((System_Collections_Generic_List_object__o *)addonNames,MethodInfo_List_1_System_String);
      lVar10 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
      if ((((lVar10 != 0) && (lVar10 = *(long *)(lVar10 + 0x38), lVar10 != 0)) &&
          (lVar10 = *(long *)(lVar10 + 0x48), lVar10 != 0)) &&
         (__this_02 = *(System_Collections_Generic_List_object__o **)(lVar10 + 0x18),
         __this_02 != (System_Collections_Generic_List_object__o *)0x0)) {
        System_Collections_Generic_List<object>__GetEnumerator(&SStack_48,__this_02,MethodInfo_List_1_T__Enumerator_Settings_StringSetting__Get);
        if (addonNames == (System_Collections_Generic_List_string__o *)0x0) {
          __this_05.fields._version = in_stack_ffffffffffffff94;
          __this_05.fields._list =
               (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88._0_8_;
          __this_05.fields._index = in_stack_ffffffffffffff88._8_4_;
          __this_05.fields._current = (Il2CppObject *)SStack_48.fields._list;
          bVar7 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (__this_05,(MethodInfo_3185E20 *)&stack0xffffffffffffff98);
          if ((char)bVar7 != '\0') {
            if (SStack_48.fields._current != (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
LAB_042315ce:
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
        }
        else {
          pSVar14 = (System_Collections_Generic_List_Enumerator_T__c *)SStack_48.fields._list;
          while (__this_04.fields._version = in_stack_ffffffffffffff94,
                __this_04.fields._list =
                     (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88._0_8_,
                __this_04.fields._index = in_stack_ffffffffffffff88._8_4_,
                __this_04.fields._current = (Il2CppObject *)pSVar14,
                bVar7 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                  (__this_04,(MethodInfo_3185E20 *)&stack0xffffffffffffff98),
                lVar10 = MethodInfo_Void_Add,
                SStack_48.fields._list = (System_Collections_Generic_List_T__o *)pSVar14,
                (char)bVar7 != '\0') {
            if (SStack_48.fields._current == (Il2CppObject *)0x0) goto LAB_042315ce;
            pSVar11 = SStack_48.fields._current[1].monitor;
            piVar1 = &(addonNames->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar4 = (addonNames->fields)._items;
            if (pSVar4 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            uVar3 = (addonNames->fields)._size;
            if (uVar3 < (uint)pSVar4->max_length) {
              (addonNames->fields)._size = uVar3 + 1;
              pSVar4->m_Items[(int)uVar3] = pSVar11;
              il2cpp_runtime_glue(pSVar4->m_Items + (int)uVar3);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)addonNames,
                         (Il2CppObject *)pSVar11,
                         *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70)
                        );
            }
          }
        }
        __this_06.fields._version = in_stack_ffffffffffffff94;
        __this_06.fields._list =
             (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88._0_8_;
        __this_06.fields._index = in_stack_ffffffffffffff88._8_4_;
        __this_06.fields._current = (Il2CppObject *)SStack_48.fields._list;
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (__this_06,(MethodInfo_3185E10 *)&stack0xffffffffffffff98);
        lVar10 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
        if ((lVar10 != 0) && (lVar10 = *(long *)(lVar10 + 0x40), lVar10 != 0)) {
          modeSettings = *(System_Collections_Generic_Dictionary_string__BaseSetting__o **)
                          (lVar10 + 0x20);
          if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
            il2cpp_init_class();
          }
          addonSettings =
               CustomLogic_CustomLogicManager__GetSelectedAddonSettings
                         (addonNames,(MethodInfo *)0x0);
          CustomLogic_CustomLogicManager__StartLogic(modeSettings,addonSettings,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
            il2cpp_init_class();
            cVar2 = *(char *)(*(long *)(TypeInfo_InGameManager + 0xb8) + 0x48);
            pMVar13 = extraout_RDX_00;
          }
          else {
            cVar2 = *(char *)(*(long *)(TypeInfo_InGameManager + 0xb8) + 0x48);
            pMVar13 = extraout_RDX;
          }
          if (cVar2 != '\0') {
            pPVar5 = (Photon_Pun_PhotonView_o *)**(undefined8 **)(TypeInfo_RPCManager + 0xb8);
            pSVar8 = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,1);
            if (*(int *)(TypeInfo_DataCompressors + 0xe4) == 0) {
              il2cpp_init_class();
            }
            __this_03 = (Utility_Algorithms_CompressionAlgorithm_o *)
                        **(undefined8 **)(TypeInfo_DataCompressors + 0xb8);
            if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
              il2cpp_init_class();
            }
            plVar6 = *(long **)(*(long *)(TypeInfo_InGameManager + 0xb8) + 0x40);
            if (((plVar6 == (long *)0x0) ||
                (pSVar11 = (System_String_o *)
                           (**(code **)(*plVar6 + 0x1a8))(plVar6,*(undefined8 *)(*plVar6 + 0x1b0)),
                __this_03 == (Utility_Algorithms_CompressionAlgorithm_o *)0x0)) ||
               (pSVar9 = Utility_Algorithms_CompressionAlgorithm__CompressString
                                   (__this_03,pSVar11,1,(MethodInfo *)0x0),
               pSVar8 == (System_Object_array *)0x0)) goto LAB_042315ad;
            if ((pSVar9 != (System_Byte_array *)0x0) &&
               (lVar10 = il2cpp_runtime_glue(pSVar9,(((pSVar8->obj).klass)->_1).element_class),
               lVar10 == 0)) {
              uVar12 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
              il2cpp_glue_02274a00(uVar12,0);
            }
            if ((int)pSVar8->max_length == 0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            pSVar8->m_Items[0] = &pSVar9->obj;
            il2cpp_runtime_glue(pSVar8->m_Items,pSVar9);
            if (pPVar5 == (Photon_Pun_PhotonView_o *)0x0) goto LAB_042315ad;
            Photon_Pun_PhotonView__RPC(pPVar5,"PlayerInfoRPC",1,pSVar8,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
              il2cpp_init_class();
            }
            bVar7 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
            pMVar13 = extraout_RDX_01;
            if ((char)bVar7 == '\0') {
              pPVar5 = (Photon_Pun_PhotonView_o *)**(undefined8 **)(TypeInfo_RPCManager + 0xb8);
              pSVar8 = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,0);
              if (pPVar5 == (Photon_Pun_PhotonView_o *)0x0) goto LAB_042315ad;
              Photon_Pun_PhotonView__RPC(pPVar5,"NotifyPlayerJoinedRPC",1,pSVar8,(MethodInfo *)0x0);
              pMVar13 = extraout_RDX_02;
            }
            if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
              il2cpp_init_class();
              pMVar13 = extraout_RDX_03;
            }
            *(undefined1 *)(*(long *)(TypeInfo_InGameManager + 0xb8) + 0x48) = 0;
          }
          GameManagers_InGameManager__SpawnPlayer(__this,0,pMVar13);
          lVar10 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
          if ((lVar10 != 0) && (lVar10 = *(long *)(lVar10 + 0x28), lVar10 != 0)) {
            if (*(char *)(lVar10 + 0x11) != '\0') {
              if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
                il2cpp_init_class();
              }
              lVar10 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
              if (lVar10 == 0) goto LAB_042315ad;
              num = *(float *)(lVar10 + 0x20);
              if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar11 = Utility_Util__FormatFloat(num,2,(MethodInfo *)0x0);
              pMVar13 = (MethodInfo *)0x0;
              pSVar11 = System_String__Concat("(",pSVar11,")",(MethodInfo *)0x0);
              if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar11 = GameManagers_ChatManager__GetColorString(pSVar11,3,0,pMVar13);
              pMVar13 = " Round started.";
              pSVar11 = System_String__Concat
                                  (pSVar11,(System_String_o *)" Round started.",(MethodInfo *)0x0);
              GameManagers_ChatManager__AddFeed(pSVar11,pMVar13);
            }
            return;
          }
        }
      }
    }
  }
LAB_042315ad:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.InGameManager$$UpdateInput
// il2cpp: void GameManagers_InGameManager__UpdateInput (GameManagers_InGameManager_o* __this, const MethodInfo* method);
// 0x4230810

void GameManagers_InGameManager__UpdateInput
               (GameManagers_InGameManager_o *__this,MethodInfo *method)

{
  Settings_GeneralInputSettings_o *pSVar1;
  Settings_KeybindSetting_o *pSVar2;
  UI_InGameMenu_o *pUVar3;
  Characters_BaseCharacter_o *pCVar4;
  long lVar5;
  Settings_TypedSetting_int__o *__this_00;
  Settings_BoolSetting_o *pSVar6;
  char cVar7;
  bool_conflict bVar8;
  MethodInfo *pMVar9;
  
  if (DAT_05705123 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&"");
    DAT_05705123 = '\x01';
    if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) != 0) goto LAB_04230837;
LAB_042308d6:
    pMVar9 = TypeInfo_ChatManager;
    il2cpp_init_class();
    bVar8 = GameManagers_ChatManager__IsChatActive(pMVar9);
    cVar7 = (char)bVar8;
  }
  else {
    if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) goto LAB_042308d6;
LAB_04230837:
    bVar8 = GameManagers_ChatManager__IsChatActive(TypeInfo_ChatManager);
    cVar7 = (char)bVar8;
  }
  if (cVar7 != '\0') {
    return;
  }
  pSVar1 = (__this->fields)._generalInputSettings;
  if ((pSVar1 == (Settings_GeneralInputSettings_o *)0x0) ||
     (pSVar2 = (pSVar1->fields).Pause, pSVar2 == (Settings_KeybindSetting_o *)0x0))
  goto LAB_04230cb2;
  bVar8 = Settings_KeybindSetting__GetKeyDown(pSVar2,0,(MethodInfo *)0x0);
  if ((char)bVar8 != '\0') {
    pUVar3 = (__this->fields)._inGameMenu;
    if (pUVar3 == (UI_InGameMenu_o *)0x0) goto LAB_04230cb2;
    UI_InGameMenu__SetPauseMenu(pUVar3,1,(MethodInfo *)0x0);
  }
  pSVar1 = (__this->fields)._generalInputSettings;
  if ((pSVar1 == (Settings_GeneralInputSettings_o *)0x0) ||
     (pSVar2 = (pSVar1->fields).ChangeCharacter, pSVar2 == (Settings_KeybindSetting_o *)0x0))
  goto LAB_04230cb2;
  bVar8 = Settings_KeybindSetting__GetKeyDown(pSVar2,0,(MethodInfo *)0x0);
  if (((char)bVar8 != '\0') &&
     (bVar8 = UI_InGameMenu__InMenu((MethodInfo *)0x0), (char)bVar8 == '\0')) {
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (((*(char *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x38) == '\0') &&
        (*(char *)((long)&(__this->fields)._gameSettingsLoaded + 3) == '\0')) &&
       (cVar7 = (*(__this->klass->vtable)._56_IsFinishedLoading.methodPtr)(__this), cVar7 != '\0'))
    {
      pCVar4 = (__this->fields).CurrentCharacter;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar8 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pCVar4,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if ((char)bVar8 != '\0') {
        pCVar4 = (__this->fields).CurrentCharacter;
        if (pCVar4 == (Characters_BaseCharacter_o *)0x0) goto LAB_04230cb2;
        if (*(char *)&(pCVar4->fields).FeedVictimName == '\0') {
          (*(pCVar4->klass->vtable)._87_GetKilled.methodPtr)
                    (pCVar4,"",(pCVar4->klass->vtable)._87_GetKilled.method);
        }
      }
      lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x70);
      if ((lVar5 == 0) ||
         (__this_00 = *(Settings_TypedSetting_int__o **)(lVar5 + 0x20),
         __this_00 == (Settings_TypedSetting_int__o *)0x0)) goto LAB_04230cb2;
      Settings_TypedSetting<int>__set_Value(__this_00,0,MethodInfo_Void_set_Value);
      pUVar3 = (__this->fields)._inGameMenu;
      if (pUVar3 == (UI_InGameMenu_o *)0x0) goto LAB_04230cb2;
      UI_InGameMenu__SetCharacterMenu(pUVar3,1,(MethodInfo *)0x0);
    }
  }
  pSVar1 = (__this->fields)._generalInputSettings;
  if ((pSVar1 == (Settings_GeneralInputSettings_o *)0x0) ||
     (pSVar2 = (pSVar1->fields).RestartGame, pSVar2 == (Settings_KeybindSetting_o *)0x0))
  goto LAB_04230cb2;
  bVar8 = Settings_KeybindSetting__GetKeyDown(pSVar2,0,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
LAB_04230af9:
    pSVar1 = (__this->fields)._generalInputSettings;
  }
  else {
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_init_class();
      bVar8 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
      if ((char)bVar8 != '\0') goto LAB_04230aa6;
      goto LAB_04230af9;
    }
    bVar8 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    if ((char)bVar8 == '\0') goto LAB_04230af9;
LAB_04230aa6:
    pUVar3 = (__this->fields)._inGameMenu;
    if (pUVar3 == (UI_InGameMenu_o *)0x0) goto LAB_04230cb2;
    bVar8 = UI_InGameMenu__IsPauseMenuActive(pUVar3,(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') goto LAB_04230af9;
    pMVar9 = TypeInfo_InGameManager;
    if (*(int *)((long)&TypeInfo_InGameManager[2].parameters + 4) == 0) {
      il2cpp_init_class();
    }
    GameManagers_InGameManager__RestartGame(pMVar9);
    pSVar1 = (__this->fields)._generalInputSettings;
  }
  if (((pSVar1 == (Settings_GeneralInputSettings_o *)0x0) ||
      (pSVar6 = (pSVar1->fields).TapScoreboard, pSVar6 == (Settings_BoolSetting_o *)0x0)) ||
     (pSVar2 = (pSVar1->fields).ToggleScoreboard, pSVar2 == (Settings_KeybindSetting_o *)0x0))
  goto LAB_04230cb2;
  if (*(char *)((long)&(pSVar6->fields).DefaultValue + 1) == '\0') {
    bVar8 = Settings_KeybindSetting__GetKey(pSVar2,0,(MethodInfo *)0x0);
    pUVar3 = (__this->fields)._inGameMenu;
    if (pUVar3 == (UI_InGameMenu_o *)0x0) goto LAB_04230cb2;
    UI_InGameMenu__SetScoreboardMenu(pUVar3,(uint)((char)bVar8 != '\0'),0,(MethodInfo *)0x0);
LAB_04230b84:
    pSVar1 = (__this->fields)._generalInputSettings;
  }
  else {
    bVar8 = Settings_KeybindSetting__GetKeyDown(pSVar2,0,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') goto LAB_04230b84;
    pUVar3 = (__this->fields)._inGameMenu;
    if (pUVar3 == (UI_InGameMenu_o *)0x0) goto LAB_04230cb2;
    UI_InGameMenu__ToggleScoreboardMenu(pUVar3,(MethodInfo *)0x0);
    pSVar1 = (__this->fields)._generalInputSettings;
  }
  if (((pSVar1 != (Settings_GeneralInputSettings_o *)0x0) &&
      (pSVar6 = (pSVar1->fields).TapMap, pSVar6 != (Settings_BoolSetting_o *)0x0)) &&
     (pSVar2 = (pSVar1->fields).ToggleMap, pSVar2 != (Settings_KeybindSetting_o *)0x0)) {
    if (*(char *)((long)&(pSVar6->fields).DefaultValue + 1) == '\0') {
      bVar8 = Settings_KeybindSetting__GetKey(pSVar2,0,(MethodInfo *)0x0);
      pUVar3 = (__this->fields)._inGameMenu;
      if (pUVar3 == (UI_InGameMenu_o *)0x0) goto LAB_04230cb2;
      UI_InGameMenu__SetMapMenu(pUVar3,(uint)((char)bVar8 != '\0'),0,(MethodInfo *)0x0);
    }
    else {
      bVar8 = Settings_KeybindSetting__GetKeyDown(pSVar2,0,(MethodInfo *)0x0);
      if ((char)bVar8 != '\0') {
        pUVar3 = (__this->fields)._inGameMenu;
        if (pUVar3 == (UI_InGameMenu_o *)0x0) goto LAB_04230cb2;
        UI_InGameMenu__ToggleMapMenu(pUVar3,(MethodInfo *)0x0);
      }
    }
    lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
    if (((lVar5 != 0) && (lVar5 = *(long *)(lVar5 + 0x20), lVar5 != 0)) &&
       (pSVar2 = *(Settings_KeybindSetting_o **)(lVar5 + 0xd8),
       pSVar2 != (Settings_KeybindSetting_o *)0x0)) {
      bVar8 = Settings_KeybindSetting__GetKeyDown(pSVar2,0,(MethodInfo *)0x0);
      if (((char)bVar8 != '\0') &&
         (bVar8 = UI_InGameMenu__InMenu((MethodInfo *)0x0), (char)bVar8 == '\0')) {
        if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (*(char *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x38) == '\0') {
          pUVar3 = (__this->fields)._inGameMenu;
          if (pUVar3 == (UI_InGameMenu_o *)0x0) goto LAB_04230cb2;
          bVar8 = UI_InGameMenu__IsActive(pUVar3,(MethodInfo *)0x0);
          UI_InGameMenu__ToggleUI(pUVar3,(uint)(byte)((byte)bVar8 ^ 1),(MethodInfo *)0x0);
        }
      }
      UnityEngine_Input__GetKeyDown(0x11d,(MethodInfo *)0x0);
      return;
    }
  }
LAB_04230cb2:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.InGameManager$$OnSongChange
// il2cpp: void GameManagers_InGameManager__OnSongChange (GameManagers_InGameManager_o* __this, const MethodInfo* method);
// 0x4231680

void GameManagers_InGameManager__OnSongChange
               (GameManagers_InGameManager_o *__this,MethodInfo *method)

{
  byte bVar1;
  UI_InGameMenu_o *pUVar2;
  UI_BasePopup_o *x;
  UI_SongPopup_o *__this_00;
  bool_conflict bVar3;
  System_Collections_IEnumerator_o *routine;
  
  if (DAT_05705124 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_SongPopup);
    DAT_05705124 = '\x01';
  }
  pUVar2 = (__this->fields)._inGameMenu;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    return;
  }
  pUVar2 = (__this->fields)._inGameMenu;
  if (pUVar2 != (UI_InGameMenu_o *)0x0) {
    x = (pUVar2->fields)._songPopup;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      return;
    }
    pUVar2 = (__this->fields)._inGameMenu;
    if ((pUVar2 != (UI_InGameMenu_o *)0x0) &&
       (__this_00 = (UI_SongPopup_o *)(pUVar2->fields)._songPopup,
       __this_00 != (UI_SongPopup_o *)0x0)) {
      bVar1 = (TypeInfo_SongPopup->_2).naturalAligment;
      if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
         ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_SongPopup)) {
        routine = UI_SongPopup__ShowNextSongPopup(__this_00,(MethodInfo *)0x0);
        UnityEngine_MonoBehaviour__StartCoroutine
                  ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume();
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.InGameManager$$TakePreviewScreenshot
// il2cpp: void GameManagers_InGameManager__TakePreviewScreenshot (GameManagers_InGameManager_o* __this, const MethodInfo* method);
// 0x4231780

void GameManagers_InGameManager__TakePreviewScreenshot
               (GameManagers_InGameManager_o *__this,MethodInfo *method)

{
  long lVar1;
  UnityEngine_Texture2D_o *__this_00;
  System_String_o *pSVar2;
  System_Byte_array *bytes;
  UnityEngine_Color_o color;
  UnityEngine_Rect_o source;
  
  if (DAT_05705125 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_FolderPaths);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&TypeInfo_Texture2D);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&"/MapPreviews");
    il2cpp_init_method_metadata(&"Preview.png");
    il2cpp_init_method_metadata(&"/MapPreviews/");
    DAT_05705125 = '\x01';
  }
  __this_00 = (UnityEngine_Texture2D_o *)il2cpp_runtime_glue(TypeInfo_Texture2D);
  UnityEngine_Texture2D___ctor(__this_00,0x400,0x400,3,0,(MethodInfo *)0x0);
  if (__this_00 == (UnityEngine_Texture2D_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  color.fields.b = 1.0;
  color.fields.a = 1.0;
  color.fields.r = 1.0;
  color.fields.g = 1.0;
  UnityEngine_Texture2D__SetPixel(__this_00,0,0,color,(MethodInfo *)0x0);
  source.fields.m_Width = 1024.0;
  source.fields.m_Height = 1024.0;
  source.fields.m_XMin = 448.0;
  source.fields.m_YMin = 28.0;
  UnityEngine_Texture2D__ReadPixels(__this_00,source,0,0,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_Texture2D_o *)0x0) {
    UnityEngine_Texture2D__Apply(__this_00,(MethodInfo *)0x0);
    TextureScaler__ScaleBlocking(__this_00,0x100,0x100,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_FolderPaths + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar2 = System_String__Concat
                       ((System_String_o *)**(undefined8 **)(TypeInfo_FolderPaths + 0xb8),"/MapPreviews",
                        (MethodInfo *)0x0);
    System_IO_Directory__CreateDirectory(pSVar2,(MethodInfo *)0x0);
    lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
    if (((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x38), lVar1 != 0)) &&
       (lVar1 = *(long *)(lVar1 + 0x28), lVar1 != 0)) {
      pSVar2 = System_String__Concat
                         ((System_String_o *)**(undefined8 **)(TypeInfo_FolderPaths + 0xb8),"/MapPreviews/",
                          *(System_String_o **)(lVar1 + 0x18),"Preview.png",(MethodInfo *)0x0);
      bytes = UnityEngine_ImageConversion__EncodeToPNG(__this_00,(MethodInfo *)0x0);
      System_IO_File__WriteAllBytes(pSVar2,bytes,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.InGameManager$$UpdateCleanCharacters
// il2cpp: void GameManagers_InGameManager__UpdateCleanCharacters (GameManagers_InGameManager_o* __this, const MethodInfo* method);
// 0x4230cc0

void GameManagers_InGameManager__UpdateCleanCharacters
               (GameManagers_InGameManager_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_Human__o *pSVar1;
  System_Collections_Generic_HashSet_BasicTitan__o *pSVar2;
  System_Collections_Generic_HashSet_BaseShifter__o *pSVar3;
  System_Collections_Generic_HashSet_T__o *pSVar4;
  
  if (DAT_05705126 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_Characters_BaseDetection__RemoveNullOr);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_Characters_BasicTitan__RemoveNullOrDea);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_Characters_Human__RemoveNullOrDead_Hum);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    DAT_05705126 = '\x01';
  }
  pSVar1 = (__this->fields).Humans;
  if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = (System_Collections_Generic_HashSet_Human__o *)
           Utility_Util__RemoveNullOrDead<object>
                     ((System_Collections_Generic_HashSet_T__o *)pSVar1,MethodInfo_HashSet_1_Characters_Human__RemoveNullOrDead_Hum);
  (__this->fields).Humans = pSVar1;
  il2cpp_runtime_glue(&(__this->fields).Humans,pSVar1);
  pSVar2 = (System_Collections_Generic_HashSet_BasicTitan__o *)
           Utility_Util__RemoveNullOrDead<object>
                     ((System_Collections_Generic_HashSet_T__o *)(__this->fields).Titans,
                      MethodInfo_HashSet_1_Characters_BasicTitan__RemoveNullOrDea);
  (__this->fields).Titans = pSVar2;
  il2cpp_runtime_glue(&(__this->fields).Titans);
  pSVar3 = Utility_Util__RemoveNullOrDeadShifters((__this->fields).Shifters,(MethodInfo *)0x0);
  (__this->fields).Shifters = pSVar3;
  il2cpp_runtime_glue(&(__this->fields).Shifters,pSVar3);
  pSVar4 = Utility_Util__RemoveNullOrDeadDetections<object>
                     (*(System_Collections_Generic_HashSet_T__o **)&(__this->fields).PauseTimeLeft,
                      MethodInfo_HashSet_1_Characters_BaseDetection__RemoveNullOr);
  *(System_Collections_Generic_HashSet_T__o **)&(__this->fields).PauseTimeLeft = pSVar4;
  il2cpp_runtime_glue(&(__this->fields).PauseTimeLeft,pSVar4);
  return;
}


// GameManagers.InGameManager$$LoadSkin
// il2cpp: void GameManagers_InGameManager__LoadSkin (GameManagers_InGameManager_o* __this, const MethodInfo* method);
// 0x4230130

void GameManagers_InGameManager__LoadSkin(GameManagers_InGameManager_o *__this,MethodInfo *method)

{
  byte bVar1;
  Settings_SetSettingsContainer_T__o *__this_00;
  System_Collections_Specialized_OrderedDictionary_o *pSVar2;
  System_Collections_Generic_Dictionary_string__BaseSetting__o *pSVar3;
  Settings_StringSetting_o *pSVar4;
  Settings_BoolSetting_o *pSVar5;
  Photon_Pun_PhotonView_o *__this_01;
  char cVar6;
  bool_conflict bVar7;
  System_String_array *value;
  Settings_BaseSetSetting_o *pSVar8;
  System_String_o *pSVar9;
  System_Object_array *parameters;
  long lVar10;
  undefined8 uVar11;
  Settings_BoolSetting_c *pSVar12;
  
  if (DAT_05705127 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_RPCManager);
    il2cpp_init_method_metadata(&MethodInfo_BaseSetSetting_GetSelectedSet);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&TypeInfo_SkyboxCustomSkinSet);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&"LoadSkyboxRPC");
    il2cpp_init_method_metadata(&",");
    DAT_05705127 = '\x01';
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) goto LAB_0423020b;
LAB_04230155:
    bVar7 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    if ((char)bVar7 == '\0') goto LAB_04230270;
LAB_0423021b:
    lVar10 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
    if (((lVar10 == 0) ||
        (__this_00 = *(Settings_SetSettingsContainer_T__o **)(lVar10 + 0x38),
        __this_00 == (Settings_SetSettingsContainer_T__o *)0x0)) ||
       (__this_00[1].monitor == (void *)0x0)) goto LAB_042305b8;
    if (*(char *)((long)__this_00[1].monitor + 0x11) == '\0') goto LAB_04230270;
    if (__this_00[1].klass == (Settings_SetSettingsContainer_T__c *)0x0) goto LAB_042305b8;
    if (*(char *)((long)&((__this_00[1].klass)->_1).name + 1) != '\0') goto LAB_04230270;
    pSVar8 = Settings_SetSettingsContainer<object>__GetSelectedSet(__this_00,MethodInfo_BaseSetSetting_GetSelectedSet);
    if (pSVar8 == (Settings_BaseSetSetting_o *)0x0) {
      il2cpp_glue_02274930(TypeInfo_string,6);
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    bVar1 = (TypeInfo_SkyboxCustomSkinSet->_2).naturalAligment;
    if (((pSVar8->klass->_2).naturalAligment < bVar1) ||
       ((pSVar8->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_SkyboxCustomSkinSet)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(pSVar8);
    }
    value = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,6);
    if ((pSVar8[1].klass == (Settings_BaseSetSetting_c *)0x0) ||
       (value == (System_String_array *)0x0)) goto LAB_042305b8;
    if ((int)value->max_length == 0) goto LAB_042305bd;
    value->m_Items[0] = (System_String_o *)((pSVar8[1].klass)->_1).namespaze;
    il2cpp_runtime_glue(value->m_Items);
    if (pSVar8[1].monitor == (void *)0x0) goto LAB_042305b8;
    if ((uint)value->max_length < 2) goto LAB_042305bd;
    value->m_Items[1] = *(System_String_o **)((long)pSVar8[1].monitor + 0x18);
    il2cpp_runtime_glue(value->m_Items + 1);
    pSVar2 = pSVar8[1].fields.Settings;
    if (pSVar2 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) goto LAB_042305b8;
    if ((uint)value->max_length < 3) goto LAB_042305bd;
    value->m_Items[2] = (System_String_o *)(pSVar2->fields)._objectsTable;
    il2cpp_runtime_glue(value->m_Items + 2);
    pSVar3 = pSVar8[1].fields.TypedSettings;
    if (pSVar3 == (System_Collections_Generic_Dictionary_string__BaseSetting__o *)0x0)
    goto LAB_042305b8;
    if ((uint)value->max_length < 4) goto LAB_042305bd;
    value->m_Items[3] = (System_String_o *)(pSVar3->fields)._entries;
    il2cpp_runtime_glue(value->m_Items + 3);
    pSVar4 = pSVar8[1].fields.Name;
    if (pSVar4 == (Settings_StringSetting_o *)0x0) goto LAB_042305b8;
    if ((uint)value->max_length < 5) goto LAB_042305bd;
    value->m_Items[4] = (pSVar4->fields)._value;
    il2cpp_runtime_glue(value->m_Items + 4);
    pSVar5 = pSVar8[1].fields.Preset;
    if (pSVar5 == (Settings_BoolSetting_o *)0x0) goto LAB_042305b8;
    if ((uint)value->max_length < 6) goto LAB_042305bd;
    pSVar12 = pSVar5[1].klass;
  }
  else {
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) != 0) goto LAB_04230155;
LAB_0423020b:
    il2cpp_init_class();
    bVar7 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    if ((char)bVar7 != '\0') goto LAB_0423021b;
LAB_04230270:
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_init_class();
      bVar7 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
      cVar6 = (char)bVar7;
    }
    else {
      bVar7 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
      cVar6 = (char)bVar7;
    }
    if (cVar6 == '\0') {
      return;
    }
    value = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,6);
    if (value == (System_String_array *)0x0) goto LAB_042305b8;
    if ((int)value->max_length == 0) goto LAB_042305bd;
    value->m_Items[0] = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
    il2cpp_runtime_glue(value->m_Items);
    if ((uint)value->max_length < 2) goto LAB_042305bd;
    value->m_Items[1] = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
    il2cpp_runtime_glue(value->m_Items + 1);
    if ((uint)value->max_length < 3) goto LAB_042305bd;
    value->m_Items[2] = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
    il2cpp_runtime_glue(value->m_Items + 2);
    if ((uint)value->max_length < 4) goto LAB_042305bd;
    value->m_Items[3] = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
    il2cpp_runtime_glue(value->m_Items + 3);
    if ((uint)value->max_length < 5) goto LAB_042305bd;
    value->m_Items[4] = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
    il2cpp_runtime_glue(value->m_Items + 4);
    if ((uint)value->max_length < 6) goto LAB_042305bd;
    pSVar12 = (Settings_BoolSetting_c *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  value->m_Items[5] = (System_String_o *)pSVar12;
  il2cpp_runtime_glue(value->m_Items + 5);
  pSVar9 = System_String__Join(",",value,(MethodInfo *)0x0);
  __this_01 = (Photon_Pun_PhotonView_o *)**(undefined8 **)(TypeInfo_RPCManager + 0xb8);
  parameters = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,1);
  if (parameters != (System_Object_array *)0x0) {
    if ((pSVar9 != (System_String_o *)0x0) &&
       (lVar10 = il2cpp_runtime_glue(pSVar9,(((parameters->obj).klass)->_1).element_class),
       lVar10 == 0)) {
      uVar11 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
      il2cpp_glue_02274a00(uVar11,0);
    }
    if ((int)parameters->max_length == 0) {
LAB_042305bd:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    parameters->m_Items[0] = (Il2CppObject *)pSVar9;
    il2cpp_runtime_glue(parameters->m_Items,pSVar9);
    if (__this_01 != (Photon_Pun_PhotonView_o *)0x0) {
      Photon_Pun_PhotonView__RPC(__this_01,"LoadSkyboxRPC",3,parameters,(MethodInfo *)0x0);
      return;
    }
  }
LAB_042305b8:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.InGameManager$$OnLoadSkyboxRPC
// il2cpp: System_Collections_IEnumerator_o* GameManagers_InGameManager__OnLoadSkyboxRPC (GameManagers_InGameManager_o* __this, System_String_array* urls, const MethodInfo* method);
// 0x4231a20

System_Collections_IEnumerator_o *
GameManagers_InGameManager__OnLoadSkyboxRPC
          (GameManagers_InGameManager_o *__this,System_String_array *urls,MethodInfo *method)

{
  GameManagers_InGameManager__OnLoadSkyboxRPC_d__102_o *__this_00;
  
  if (DAT_05705128 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_OnLoadSkyboxRPC_d__102);
    DAT_05705128 = '\x01';
  }
  __this_00 = (GameManagers_InGameManager__OnLoadSkyboxRPC_d__102_o *)
              il2cpp_runtime_glue(TypeInfo_OnLoadSkyboxRPC_d__102);
  GameManagers_InGameManager_<OnLoadSkyboxRPC>d__102___ctor(__this_00,0,(MethodInfo *)0x0);
  if (__this_00 != (GameManagers_InGameManager__OnLoadSkyboxRPC_d__102_o *)0x0) {
    (__this_00->fields).__4__this = __this;
    il2cpp_runtime_glue(&(__this_00->fields).__4__this,__this);
    (__this_00->fields).urls = urls;
    il2cpp_runtime_glue(&(__this_00->fields).urls,urls);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.InGameManager$$ReloadSkybox
// il2cpp: System_Collections_IEnumerator_o* GameManagers_InGameManager__ReloadSkybox (GameManagers_InGameManager_o* __this, const MethodInfo* method);
// 0x4231aa0

System_Collections_IEnumerator_o *
GameManagers_InGameManager__ReloadSkybox(GameManagers_InGameManager_o *__this,MethodInfo *method)

{
  GameManagers_InGameManager__ReloadSkybox_d__103_o *__this_00;
  
  if (DAT_05705129 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ReloadSkybox_d__103);
    DAT_05705129 = '\x01';
  }
  __this_00 = (GameManagers_InGameManager__ReloadSkybox_d__103_o *)il2cpp_runtime_glue(TypeInfo_ReloadSkybox_d__103);
  GameManagers_InGameManager_<ReloadSkybox>d__103___ctor(__this_00,0,(MethodInfo *)0x0);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// GameManagers.InGameManager$$OnLoadLevelSkinRPC
// il2cpp: System_Collections_IEnumerator_o* GameManagers_InGameManager__OnLoadLevelSkinRPC (GameManagers_InGameManager_o* __this, System_String_o* indices, System_String_o* urls1, System_String_o* urls2, const MethodInfo* method);
// 0x4231ae0

System_Collections_IEnumerator_o *
GameManagers_InGameManager__OnLoadLevelSkinRPC
          (GameManagers_InGameManager_o *__this,System_String_o *indices,System_String_o *urls1,
          System_String_o *urls2,MethodInfo *method)

{
  GameManagers_InGameManager__OnLoadLevelSkinRPC_d__104_o *__this_00;
  
  if (DAT_0570512a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_OnLoadLevelSkinRPC_d__104);
    DAT_0570512a = '\x01';
  }
  __this_00 = (GameManagers_InGameManager__OnLoadLevelSkinRPC_d__104_o *)
              il2cpp_runtime_glue(TypeInfo_OnLoadLevelSkinRPC_d__104);
  GameManagers_InGameManager_<OnLoadLevelSkinRPC>d__104___ctor(__this_00,0,(MethodInfo *)0x0);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// GameManagers.InGameManager$$IsValidSkybox
// il2cpp: bool GameManagers_InGameManager__IsValidSkybox (GameManagers_InGameManager_o* __this, System_String_array* urls, const MethodInfo* method);
// 0x4231b20

bool_conflict
GameManagers_InGameManager__IsValidSkybox
          (GameManagers_InGameManager_o *__this,System_String_array *urls,MethodInfo *method)

{
  uint uVar1;
  System_String_o *url;
  bool_conflict bVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (DAT_0570512b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TextureDownloader);
    DAT_0570512b = '\x01';
  }
  if (urls == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)urls->max_length == 6) {
    uVar3 = 6;
    uVar4 = 0;
    do {
      if (uVar3 <= uVar4) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      url = urls->m_Items[uVar4];
      if (*(int *)(TypeInfo_TextureDownloader + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar2 = CustomSkins_TextureDownloader__ValidTextureURL(url,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        return (bool_conflict)CONCAT71((uint7)(uint3)((uint)bVar2 >> 8),1);
      }
      uVar4 = uVar4 + 1;
      uVar1 = (uint)urls->max_length;
      uVar3 = (ulong)uVar1;
    } while ((long)uVar4 < (long)(int)uVar1);
  }
  return 0;
}


// GameManagers.InGameManager$$.ctor
// il2cpp: void GameManagers_InGameManager___ctor (GameManagers_InGameManager_o* __this, const MethodInfo* method);
// 0x4231bd0

void GameManagers_InGameManager___ctor(GameManagers_InGameManager_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *pSVar1;
  System_Collections_Generic_List_PhotonVoiceSync__o *__this_00;
  
  if (DAT_0570512c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_Characters_BaseShifter);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_Characters_BaseDetection);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_Characters_Human);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_Characters_BasicTitan);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_BasicTitan);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_BaseDetection);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_Human);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_BaseShifter);
    il2cpp_init_method_metadata(&MethodInfo_List_1_GameManagers_PhotonVoiceSync);
    il2cpp_init_method_metadata(&TypeInfo_List_PhotonVoiceSync);
    DAT_0570512c = '\x01';
  }
  pSVar1 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_Human);
  System_Collections_Generic_HashSet<object>___ctor(pSVar1,MethodInfo_HashSet_1_Characters_Human);
  (__this->fields).Humans = (System_Collections_Generic_HashSet_Human__o *)pSVar1;
  il2cpp_runtime_glue(&(__this->fields).Humans,pSVar1);
  pSVar1 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_BasicTitan);
  System_Collections_Generic_HashSet<object>___ctor(pSVar1,MethodInfo_HashSet_1_Characters_BasicTitan);
  (__this->fields).Titans = (System_Collections_Generic_HashSet_BasicTitan__o *)pSVar1;
  il2cpp_runtime_glue(&(__this->fields).Titans,pSVar1);
  pSVar1 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_BaseShifter);
  System_Collections_Generic_HashSet<object>___ctor(pSVar1,MethodInfo_HashSet_1_Characters_BaseShifter);
  (__this->fields).Shifters = (System_Collections_Generic_HashSet_BaseShifter__o *)pSVar1;
  il2cpp_runtime_glue(&(__this->fields).Shifters,pSVar1);
  __this_00 = (System_Collections_Generic_List_PhotonVoiceSync__o *)il2cpp_runtime_glue(TypeInfo_List_PhotonVoiceSync)
  ;
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_GameManagers_PhotonVoiceSync);
  (__this->fields).PhotonVoiceSyncs = __this_00;
  il2cpp_runtime_glue(&(__this->fields).PhotonVoiceSyncs,__this_00);
  (__this->fields).HasSpawned = -0x40800000;
  pSVar1 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_BaseDetection);
  System_Collections_Generic_HashSet<object>___ctor(pSVar1,MethodInfo_HashSet_1_Characters_BaseDetection);
  *(System_Collections_Generic_HashSet_object__o **)&(__this->fields).PauseTimeLeft = pSVar1;
  il2cpp_runtime_glue(&(__this->fields).PauseTimeLeft);
  *(undefined4 *)&(__this->fields).Detections = 0x41200000;
  Photon_Pun_MonoBehaviourPunCallbacks___ctor
            ((Photon_Pun_MonoBehaviourPunCallbacks_o *)__this,(MethodInfo *)0x0);
  return;
}


// GameManagers.InGameManager$$.cctor
// il2cpp: void GameManagers_InGameManager___cctor (const MethodInfo* method);
// 0x4231d90

void GameManagers_InGameManager___cctor(MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  Il2CppObject *pIVar3;
  System_Object_array *pSVar4;
  long lVar5;
  System_Collections_Generic_List_object__o *pSVar6;
  System_Collections_Generic_Dictionary_int__object__o *__this;
  System_Collections_Generic_HashSet_int__o *pSVar7;
  System_Collections_Generic_Dictionary_int__float__o *__this_00;
  GameManagers_PlayerInfo_o *__this_01;
  
  if (DAT_0570512d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_Int32_GameManagers_PlayerInf);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_Int32_System_Single);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_int__float);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_int__PlayerInfo);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_Int32);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_int);
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&TypeInfo_MapTags);
    il2cpp_init_method_metadata(&TypeInfo_PlayerInfo);
    DAT_0570512d = '\x01';
  }
  pSVar6 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_string);
  System_Collections_Generic_List<object>___ctor(pSVar6,MethodInfo_List_1_System_String);
  if (*(int *)(TypeInfo_MapTags + 0xe4) == 0) {
    il2cpp_init_class();
  }
  lVar5 = MethodInfo_Void_Add;
  if (pSVar6 != (System_Collections_Generic_List_object__o *)0x0) {
    pIVar3 = *(Il2CppObject **)(*(long *)(TypeInfo_MapTags + 0xb8) + 0x10);
    piVar1 = &(pSVar6->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar4 = (pSVar6->fields)._items;
    if (pSVar4 != (System_Object_array *)0x0) {
      uVar2 = (pSVar6->fields)._size;
      if (uVar2 < (uint)pSVar4->max_length) {
        (pSVar6->fields)._size = uVar2 + 1;
        pSVar4->m_Items[(int)uVar2] = pIVar3;
        il2cpp_runtime_glue(pSVar4->m_Items + (int)uVar2);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  (pSVar6,pIVar3,
                   *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
      }
      lVar5 = MethodInfo_Void_Add;
      pIVar3 = *(Il2CppObject **)(*(long *)(TypeInfo_MapTags + 0xb8) + 8);
      piVar1 = &(pSVar6->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar4 = (pSVar6->fields)._items;
      if (pSVar4 != (System_Object_array *)0x0) {
        uVar2 = (pSVar6->fields)._size;
        if (uVar2 < (uint)pSVar4->max_length) {
          (pSVar6->fields)._size = uVar2 + 1;
          pSVar4->m_Items[(int)uVar2] = pIVar3;
          il2cpp_runtime_glue(pSVar4->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    (pSVar6,pIVar3,
                     *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
        }
        lVar5 = MethodInfo_Void_Add;
        pIVar3 = *(Il2CppObject **)(*(long *)(TypeInfo_MapTags + 0xb8) + 0x18);
        piVar1 = &(pSVar6->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar4 = (pSVar6->fields)._items;
        if (pSVar4 != (System_Object_array *)0x0) {
          uVar2 = (pSVar6->fields)._size;
          if (uVar2 < (uint)pSVar4->max_length) {
            (pSVar6->fields)._size = uVar2 + 1;
            pSVar4->m_Items[(int)uVar2] = pIVar3;
            il2cpp_runtime_glue(pSVar4->m_Items + (int)uVar2);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      (pSVar6,pIVar3,
                       *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
          }
          **(undefined8 **)(TypeInfo_InGameManager + 0xb8) = pSVar6;
          il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_InGameManager + 0xb8),pSVar6);
          pSVar6 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_string);
          System_Collections_Generic_List<object>___ctor(pSVar6,MethodInfo_List_1_System_String);
          lVar5 = MethodInfo_Void_Add;
          if (pSVar6 != (System_Collections_Generic_List_object__o *)0x0) {
            pIVar3 = *(Il2CppObject **)(*(long *)(TypeInfo_MapTags + 0xb8) + 0x18);
            piVar1 = &(pSVar6->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar4 = (pSVar6->fields)._items;
            if (pSVar4 != (System_Object_array *)0x0) {
              uVar2 = (pSVar6->fields)._size;
              if (uVar2 < (uint)pSVar4->max_length) {
                (pSVar6->fields)._size = uVar2 + 1;
                pSVar4->m_Items[(int)uVar2] = pIVar3;
                il2cpp_runtime_glue(pSVar4->m_Items + (int)uVar2);
              }
              else {
                System_Collections_Generic_List<object>__AddWithResize
                          (pSVar6,pIVar3,
                           *(MethodInfo_35A7350 **)
                            (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
              }
              lVar5 = MethodInfo_Void_Add;
              pIVar3 = *(Il2CppObject **)(*(long *)(TypeInfo_MapTags + 0xb8) + 8);
              piVar1 = &(pSVar6->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar4 = (pSVar6->fields)._items;
              if (pSVar4 != (System_Object_array *)0x0) {
                uVar2 = (pSVar6->fields)._size;
                if (uVar2 < (uint)pSVar4->max_length) {
                  (pSVar6->fields)._size = uVar2 + 1;
                  pSVar4->m_Items[(int)uVar2] = pIVar3;
                  il2cpp_runtime_glue(pSVar4->m_Items + (int)uVar2);
                }
                else {
                  System_Collections_Generic_List<object>__AddWithResize
                            (pSVar6,pIVar3,
                             *(MethodInfo_35A7350 **)
                              (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                }
                lVar5 = MethodInfo_Void_Add;
                pIVar3 = *(Il2CppObject **)(*(long *)(TypeInfo_MapTags + 0xb8) + 0x10);
                piVar1 = &(pSVar6->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar4 = (pSVar6->fields)._items;
                if (pSVar4 != (System_Object_array *)0x0) {
                  uVar2 = (pSVar6->fields)._size;
                  if (uVar2 < (uint)pSVar4->max_length) {
                    (pSVar6->fields)._size = uVar2 + 1;
                    pSVar4->m_Items[(int)uVar2] = pIVar3;
                    il2cpp_runtime_glue(pSVar4->m_Items + (int)uVar2);
                  }
                  else {
                    System_Collections_Generic_List<object>__AddWithResize
                              (pSVar6,pIVar3,
                               *(MethodInfo_35A7350 **)
                                (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                  }
                  lVar5 = *(long *)(TypeInfo_InGameManager + 0xb8);
                  *(System_Collections_Generic_List_object__o **)(lVar5 + 8) = pSVar6;
                  il2cpp_runtime_glue(lVar5 + 8,pSVar6);
                  pSVar6 = (System_Collections_Generic_List_object__o *)
                           il2cpp_runtime_glue(TypeInfo_List_string);
                  System_Collections_Generic_List<object>___ctor(pSVar6,MethodInfo_List_1_System_String);
                  lVar5 = MethodInfo_Void_Add;
                  if (pSVar6 != (System_Collections_Generic_List_object__o *)0x0) {
                    pIVar3 = *(Il2CppObject **)(*(long *)(TypeInfo_MapTags + 0xb8) + 8);
                    piVar1 = &(pSVar6->fields)._version;
                    *piVar1 = *piVar1 + 1;
                    pSVar4 = (pSVar6->fields)._items;
                    if (pSVar4 != (System_Object_array *)0x0) {
                      uVar2 = (pSVar6->fields)._size;
                      if (uVar2 < (uint)pSVar4->max_length) {
                        (pSVar6->fields)._size = uVar2 + 1;
                        pSVar4->m_Items[(int)uVar2] = pIVar3;
                        il2cpp_runtime_glue(pSVar4->m_Items + (int)uVar2);
                      }
                      else {
                        System_Collections_Generic_List<object>__AddWithResize
                                  (pSVar6,pIVar3,
                                   *(MethodInfo_35A7350 **)
                                    (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                      }
                      lVar5 = MethodInfo_Void_Add;
                      pIVar3 = *(Il2CppObject **)(*(long *)(TypeInfo_MapTags + 0xb8) + 0x10);
                      piVar1 = &(pSVar6->fields)._version;
                      *piVar1 = *piVar1 + 1;
                      pSVar4 = (pSVar6->fields)._items;
                      if (pSVar4 != (System_Object_array *)0x0) {
                        uVar2 = (pSVar6->fields)._size;
                        if (uVar2 < (uint)pSVar4->max_length) {
                          (pSVar6->fields)._size = uVar2 + 1;
                          pSVar4->m_Items[(int)uVar2] = pIVar3;
                          il2cpp_runtime_glue(pSVar4->m_Items + (int)uVar2);
                        }
                        else {
                          System_Collections_Generic_List<object>__AddWithResize
                                    (pSVar6,pIVar3,
                                     *(MethodInfo_35A7350 **)
                                      (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                        }
                        lVar5 = MethodInfo_Void_Add;
                        pIVar3 = *(Il2CppObject **)(*(long *)(TypeInfo_MapTags + 0xb8) + 0x18);
                        piVar1 = &(pSVar6->fields)._version;
                        *piVar1 = *piVar1 + 1;
                        pSVar4 = (pSVar6->fields)._items;
                        if (pSVar4 != (System_Object_array *)0x0) {
                          uVar2 = (pSVar6->fields)._size;
                          if (uVar2 < (uint)pSVar4->max_length) {
                            (pSVar6->fields)._size = uVar2 + 1;
                            pSVar4->m_Items[(int)uVar2] = pIVar3;
                            il2cpp_runtime_glue(pSVar4->m_Items + (int)uVar2);
                          }
                          else {
                            System_Collections_Generic_List<object>__AddWithResize
                                      (pSVar6,pIVar3,
                                       *(MethodInfo_35A7350 **)
                                        (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                          }
                          lVar5 = *(long *)(TypeInfo_InGameManager + 0xb8);
                          *(System_Collections_Generic_List_object__o **)(lVar5 + 0x10) = pSVar6;
                          il2cpp_runtime_glue(lVar5 + 0x10,pSVar6);
                          __this = (System_Collections_Generic_Dictionary_int__object__o *)
                                   il2cpp_runtime_glue(TypeInfo_Dictionary_int__PlayerInfo);
                          System_Collections_Generic_Dictionary<int__object>___ctor
                                    (__this,MethodInfo_Dictionary_2_System_Int32_GameManagers_PlayerInf);
                          lVar5 = *(long *)(TypeInfo_InGameManager + 0xb8);
                          *(System_Collections_Generic_Dictionary_int__object__o **)(lVar5 + 0x18) =
                               __this;
                          il2cpp_runtime_glue(lVar5 + 0x18,__this);
                          pSVar7 = (System_Collections_Generic_HashSet_int__o *)
                                   il2cpp_runtime_glue(TypeInfo_HashSet_int);
                          System_Collections_Generic_HashSet<int>___ctor(pSVar7,MethodInfo_HashSet_1_System_Int32);
                          lVar5 = *(long *)(TypeInfo_InGameManager + 0xb8);
                          *(System_Collections_Generic_HashSet_int__o **)(lVar5 + 0x20) = pSVar7;
                          il2cpp_runtime_glue(lVar5 + 0x20,pSVar7);
                          pSVar7 = (System_Collections_Generic_HashSet_int__o *)
                                   il2cpp_runtime_glue(TypeInfo_HashSet_int);
                          System_Collections_Generic_HashSet<int>___ctor(pSVar7,MethodInfo_HashSet_1_System_Int32);
                          lVar5 = *(long *)(TypeInfo_InGameManager + 0xb8);
                          *(System_Collections_Generic_HashSet_int__o **)(lVar5 + 0x28) = pSVar7;
                          il2cpp_runtime_glue(lVar5 + 0x28,pSVar7);
                          pSVar7 = (System_Collections_Generic_HashSet_int__o *)
                                   il2cpp_runtime_glue(TypeInfo_HashSet_int);
                          System_Collections_Generic_HashSet<int>___ctor(pSVar7,MethodInfo_HashSet_1_System_Int32);
                          lVar5 = *(long *)(TypeInfo_InGameManager + 0xb8);
                          *(System_Collections_Generic_HashSet_int__o **)(lVar5 + 0x30) = pSVar7;
                          il2cpp_runtime_glue(lVar5 + 0x30,pSVar7);
                          __this_00 = (System_Collections_Generic_Dictionary_int__float__o *)
                                      il2cpp_runtime_glue(TypeInfo_Dictionary_int__float);
                          System_Collections_Generic_Dictionary<int__float>___ctor
                                    (__this_00,MethodInfo_Dictionary_2_System_Int32_System_Single);
                          lVar5 = *(long *)(TypeInfo_InGameManager + 0xb8);
                          *(System_Collections_Generic_Dictionary_int__float__o **)(lVar5 + 0x38) =
                               __this_00;
                          il2cpp_runtime_glue(lVar5 + 0x38);
                          __this_01 = (GameManagers_PlayerInfo_o *)il2cpp_runtime_glue(TypeInfo_PlayerInfo);
                          GameManagers_PlayerInfo___ctor(__this_01,(MethodInfo *)0x0);
                          lVar5 = *(long *)(TypeInfo_InGameManager + 0xb8);
                          *(GameManagers_PlayerInfo_o **)(lVar5 + 0x40) = __this_01;
                          il2cpp_runtime_glue(lVar5 + 0x40,__this_01);
                          return;
                        }
                      }
                    }
                  }
                }
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


