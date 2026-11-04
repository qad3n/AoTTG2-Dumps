// Type: Controllers.BaseTitanAIController
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Controllers/BaseTitanAIController.cs
// Prior real C# source (older reference): Assets/Scripts/Controllers/BaseTitanAIController.cs
// --------------------------------

// Controllers.BaseTitanAIController$$get__scriptedAI
// il2cpp: bool Controllers_BaseTitanAIController__get__scriptedAI (Controllers_BaseTitanAIController_o* __this, const MethodInfo* method);
// 0x180668280

bool
Controllers_BaseTitanAIController__get__scriptedAI(Controllers_BaseTitanAIController_o* __this, MethodInfo* method)

{
  return false;
}


// Controllers.BaseTitanAIController$$get__stationaryAI
// il2cpp: bool Controllers_BaseTitanAIController__get__stationaryAI (Controllers_BaseTitanAIController_o* __this, const MethodInfo* method);
// 0x180668280

bool
Controllers_BaseTitanAIController__get__stationaryAI(Controllers_BaseTitanAIController_o* __this, MethodInfo* method)

{
  return false;
}


// Controllers.BaseTitanAIController$$Awake
// il2cpp: void Controllers_BaseTitanAIController__Awake (Controllers_BaseTitanAIController_o* __this, const MethodInfo* method);
// 0x1820f3f40

void Controllers_BaseTitanAIController__Awake(Controllers_BaseTitanAIController_o *__this,MethodInfo *method)

{
  Settings_InGameSet_o *pSVar1;
  Settings_InGameTitanSettings_o *pSVar2;
  Settings_BoolSetting_o *pSVar3;
  bool bVar4;
  Characters_BaseCharacter_o *value;
  Characters_BaseTitan_o *pCVar5;
  UnityEngine_CapsuleCollider_o *value_00;
  
  if (Il2CppMethodInitialized_184346a97 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_BaseTitan);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_CapsuleCollider)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_184346a97 = '\x01';
  }
  if (Il2CppMethodInitialized_184346a8a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_BaseCharacter);
    Il2CppMethodInitialized_184346a8a = '\x01';
  }
  value = UnityEngine_Component__GetComponent_object_
                    ((UnityEngine_Component_o *)__this,
                     (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_BaseCharacter);
  (__this->fields)._character = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._character,value);
  pCVar5 = UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)__this,
                      (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_BaseTitan);
  (__this->fields)._titan = pCVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._titan,pCVar5);
  pCVar5 = (__this->fields)._titan;
  (__this->fields)._automaticTargeting = true;
  if (pCVar5 != (Characters_BaseTitan_o *)0x0) {
    value_00 = UnityEngine_Component__GetComponent_object_
                         ((UnityEngine_Component_o *)pCVar5,
                          (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_CapsuleCollider);
    (__this->fields)._mainCollider = value_00;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._mainCollider,value_00);
    pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
    if (((pSVar1 != (Settings_InGameSet_o *)0x0) &&
        (pSVar2 = (pSVar1->fields).Titan, pSVar2 != (Settings_InGameTitanSettings_o *)0x0)) &&
       (pSVar3 = (pSVar2->fields).TitanSmartMovement, pSVar3 != (Settings_BoolSetting_o *)0x0)) {
      if ((pSVar3->fields)._value != false) {
        bVar4 = (*(__this->klass->vtable)._10_get__stationaryAI.methodPtr)
                          (__this,(__this->klass->vtable)._10_get__stationaryAI.method);
        if (!bVar4) {
          if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
          }
          bVar4 = Map_MapLoader__get_HasNavMesh((MethodInfo *)0x0);
          (__this->fields)._usePathfinding = bVar4;
          return;
        }
      }
      (__this->fields)._usePathfinding = false;
      return;
    }
  }
  ThrowNullReferenceException();
}


// Controllers.BaseTitanAIController$$GetAgentSpeed
// il2cpp: float Controllers_BaseTitanAIController__GetAgentSpeed (Controllers_BaseTitanAIController_o* __this, const MethodInfo* method);
// 0x1820f59b0

float Controllers_BaseTitanAIController__GetAgentSpeed
                (Controllers_BaseTitanAIController_o *__this,MethodInfo *method)

{
  Characters_BaseTitan_o *__this_00;
  float fVar1;
  
  __this_00 = (__this->fields)._titan;
  if (__this_00 != (Characters_BaseTitan_o *)0x0) {
    fVar1 = Characters_BaseTitan__GetCurrentSpeed(__this_00,(MethodInfo *)0x0);
    return fVar1;
  }
  ThrowNullReferenceException();
}


// Controllers.BaseTitanAIController$$Start
// il2cpp: void Controllers_BaseTitanAIController__Start (Controllers_BaseTitanAIController_o* __this, const MethodInfo* method);
// 0x1820f8990

void Controllers_BaseTitanAIController__Start(Controllers_BaseTitanAIController_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  bool bVar1;
  
  if (Il2CppMethodInitialized_184346a98 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346a98 = '\x01';
  }
  Controllers_BaseTitanAIController__Idle(__this,(MethodInfo *)0x0);
  if ((__this->fields)._usePathfinding != false) {
    x = (UnityEngine_Object_o *)(__this->fields)._agent;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      Controllers_BaseAIController__CreateAgent
                ((Controllers_BaseAIController_o *)__this,(__this->fields)._mainCollider,10.0,2,
                 (MethodInfo *)0x0);
    }
  }
  return;
}


// Controllers.BaseTitanAIController$$BeginMove
// il2cpp: void Controllers_BaseTitanAIController__BeginMove (Controllers_BaseTitanAIController_o* __this, const MethodInfo* method);
// 0x1820f40b0

void Controllers_BaseTitanAIController__BeginMove
               (Controllers_BaseTitanAIController_o *__this,MethodInfo *method)

{
  (__this->fields)._lowMovementSpeedTime = 0.0;
  (__this->fields)._recoveryTimeLeft = 0.0;
  (__this->fields)._avoidAngle = 0.0;
  (__this->fields)._moveToExact = false;
  (__this->fields)._moveToCallback = (System_Action_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._moveToCallback,(void *)0x0);
  if ((__this->fields).AIState == 7) {
    Controllers_BaseTitanAIController__Idle(__this,(MethodInfo *)0x0);
  }
  if ((__this->fields)._moveToIgnoreEnemies != false) {
    Controllers_BaseTitanAIController__Idle(__this,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Controllers.BaseTitanAIController$$EndForcedIdle
// il2cpp: void Controllers_BaseTitanAIController__EndForcedIdle (Controllers_BaseTitanAIController_o* __this, const MethodInfo* method);
// 0x1820f45f0

void Controllers_BaseTitanAIController__EndForcedIdle
               (Controllers_BaseTitanAIController_o *__this,MethodInfo *method)

{
  if ((__this->fields).AIState == 7) {
    Controllers_BaseTitanAIController__Idle(__this,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Controllers.BaseTitanAIController$$ResetCommandState
// il2cpp: void Controllers_BaseTitanAIController__ResetCommandState (Controllers_BaseTitanAIController_o* __this, const MethodInfo* method);
// 0x1820f8910

void Controllers_BaseTitanAIController__ResetCommandState
               (Controllers_BaseTitanAIController_o *__this,MethodInfo *method)

{
  Controllers_BaseTitanAIController__Idle(__this,(MethodInfo *)0x0);
  return;
}


// Controllers.BaseTitanAIController$$MoveToCallback
// il2cpp: void Controllers_BaseTitanAIController__MoveToCallback (Controllers_BaseTitanAIController_o* __this, System_Action_o* action, UnityEngine_Vector3_o position, float range, bool ignore, const MethodInfo* method);
// 0x1820f8280

void Controllers_BaseTitanAIController__MoveToCallback
               (Controllers_BaseTitanAIController_o *__this,System_Action_o *action,
               UnityEngine_Vector3_o *position,float range,bool ignore,MethodInfo *method)

{
  UnityEngine_Vector3_Fields local_28 [2];
  
  (__this->fields)._moveToTarget = (Characters_ITargetable_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._moveToTarget,(void *)0x0);
  local_28[0].x = (position->fields).x;
  local_28[0].y = (position->fields).y;
  local_28[0].z = (position->fields).z;
  Controllers_BaseAIController__BeginMove
            ((Controllers_BaseAIController_o *)__this,(UnityEngine_Vector3_o *)local_28,range,ignore,
             (MethodInfo *)0x0);
  (__this->fields)._moveToCallback = action;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._moveToCallback,action);
  return;
}


// Controllers.BaseTitanAIController$$MoveToExact
// il2cpp: void Controllers_BaseTitanAIController__MoveToExact (Controllers_BaseTitanAIController_o* __this, UnityEngine_Vector3_o position, float range, float timeoutPadding, const MethodInfo* method);
// 0x1820f85a0

void Controllers_BaseTitanAIController__MoveToExact
               (Controllers_BaseTitanAIController_o *__this,UnityEngine_Vector3_o *position,float range,
               float timeoutPadding,MethodInfo *method)

{
  Characters_BaseTitan_o *pCVar1;
  Utility_BaseComponentCache_o *pUVar2;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_o *pUVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  UnityEngine_Vector3_Fields local_68 [8];
  
  (__this->fields)._moveToTarget = (Characters_ITargetable_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._moveToTarget,(void *)0x0);
  local_68[0].x = (position->fields).x;
  local_68[0].y = (position->fields).y;
  local_68[0].z = (position->fields).z;
  Controllers_BaseAIController__BeginMove
            ((Controllers_BaseAIController_o *)__this,(UnityEngine_Vector3_o *)local_68,range,true,
             (MethodInfo *)0x0);
  pCVar1 = (__this->fields)._titan;
  (__this->fields)._moveToExact = true;
  if (pCVar1 != (Characters_BaseTitan_o *)0x0) {
    if ((__this->fields).IsRun == false) {
      fVar5 = (pCVar1->fields).Size * (pCVar1->fields).WalkSpeedPerLevel + (pCVar1->fields).WalkSpeedBase;
    }
    else {
      fVar5 = (pCVar1->fields).RunSpeedPerLevel * (pCVar1->fields).Size + (pCVar1->fields).RunSpeedBase;
    }
    if (fVar5 <= 0.0) {
      fVar5 = INFINITY;
    }
    else {
      if (((pCVar1 == (Characters_BaseTitan_o *)0x0) ||
          (pUVar2 = (pCVar1->fields).Cache, pUVar2 == (Utility_BaseComponentCache_o *)0x0)) ||
         (__this_00 = (pUVar2->fields).Transform, __this_00 == (UnityEngine_Transform_o *)0x0))
      goto label_1820f8788;
      pUVar3 = UnityEngine_Transform__get_position
                         ((UnityEngine_Vector3_o *)local_68,__this_00,(MethodInfo *)0x0);
      fVar7 = (pUVar3->fields).x;
      fVar6 = (pUVar3->fields).y;
      fVar8 = (pUVar3->fields).z;
      if (Il2CppMethodInitialized_18433dee7 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
        Il2CppMethodInitialized_18433dee7 = '\x01';
      }
      fVar7 = fVar7 - (position->fields).x;
      fVar6 = fVar6 - (position->fields).y;
      fVar8 = fVar8 - (position->fields).z;
      if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
      }
      dVar4 = (double)(fVar6 * fVar6 + fVar7 * fVar7 + fVar8 * fVar8);
      if (dVar4 < 0.0) {
        dVar4 = sqrt(dVar4);
        fVar5 = (float)dVar4 / fVar5 + timeoutPadding;
      }
      else {
        fVar5 = (float)SQRT(dVar4) / fVar5 + timeoutPadding;
      }
    }
    (__this->fields)._moveToTimeout = fVar5;
    return;
  }
label_1820f8788:
  ThrowNullReferenceException();
}


// Controllers.BaseTitanAIController$$MoveToExactCallback
// il2cpp: void Controllers_BaseTitanAIController__MoveToExactCallback (Controllers_BaseTitanAIController_o* __this, System_Action_o* action, UnityEngine_Vector3_o position, float range, float timeoutPadding, const MethodInfo* method);
// 0x1820f8540

void Controllers_BaseTitanAIController__MoveToExactCallback
               (Controllers_BaseTitanAIController_o *__this,System_Action_o *action,
               UnityEngine_Vector3_o *position,float range,float timeoutPadding,MethodInfo *method)

{
  UnityEngine_Vector3_Fields local_18;
  
  local_18.x = (position->fields).x;
  local_18.y = (position->fields).y;
  local_18.z = (position->fields).z;
  Controllers_BaseTitanAIController__MoveToExact
            (__this,(UnityEngine_Vector3_o *)&local_18,range,timeoutPadding,(MethodInfo *)0x0);
  (__this->fields)._moveToCallback = action;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._moveToCallback,action);
  return;
}


// Controllers.BaseTitanAIController$$CancelOrder
// il2cpp: void Controllers_BaseTitanAIController__CancelOrder (Controllers_BaseTitanAIController_o* __this, const MethodInfo* method);
// 0x1820f4120

void Controllers_BaseTitanAIController__CancelOrder
               (Controllers_BaseTitanAIController_o *__this,MethodInfo *method)

{
  (__this->fields)._lowMovementSpeedTime = 0.0;
  (__this->fields)._recoveryTimeLeft = 0.0;
  (__this->fields)._avoidAngle = 0.0;
  (__this->fields)._moveToActive = false;
  (__this->fields)._moveToTarget = (Characters_ITargetable_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._moveToTarget,(void *)0x0);
  (__this->fields)._moveToExact = false;
  (__this->fields)._moveToCallback = (System_Action_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._moveToCallback,(void *)0x0);
  if ((__this->fields).AIState == 7) {
    Controllers_BaseTitanAIController__Idle(__this,(MethodInfo *)0x0);
  }
  Controllers_BaseAIController__ClearTarget((Controllers_BaseAIController_o *)__this,(MethodInfo *)0x0);
  return;
}


// Controllers.BaseTitanAIController$$ForceIdle
// il2cpp: void Controllers_BaseTitanAIController__ForceIdle (Controllers_BaseTitanAIController_o* __this, float time, const MethodInfo* method);
// 0x1820f58e0

void Controllers_BaseTitanAIController__ForceIdle
               (Controllers_BaseTitanAIController_o *__this,float time,MethodInfo *method)

{
  (__this->fields)._moveToExact = false;
  (__this->fields)._moveToCallback = (System_Action_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._moveToCallback,(void *)0x0);
  Controllers_BaseTitanAIController__Idle(__this,(MethodInfo *)0x0);
  (__this->fields)._stateTimeLeft = time;
  (__this->fields).AIState = 7;
  return;
}


// Controllers.BaseTitanAIController$$Init
// il2cpp: void Controllers_BaseTitanAIController__Init (Controllers_BaseTitanAIController_o* __this, SimpleJSONFixed_JSONNode_o* data, const MethodInfo* method);
// 0x1820f7820
// eh: try 0x1820f8010..0x1820f8147 -> pad 0x183316f00 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 23 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820f809f: mov rdx, qword ptr [rip + 0x1fc71ba]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_TitanAttackInfo_Dispose
// asm:   0x1820f80a6: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1820f80ab: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1820f80b0: mov rcx, qword ptr [rsp + 0x20]
// asm:   0x1820f80b5: test rcx, rcx
// asm:   0x1820f80b8: jne 0x1820f8147
// asm:   0x1820f80be: mov r14, qword ptr [rsp + 0x1b8]
// asm:   0x1820f80c6: mov rsi, qword ptr [rsp + 0x1b0]
// asm:   0x1820f80ce: movss xmm6, dword ptr [rsp + 0x1c8]
// asm:   0x1820f80d7: mov rbx, qword ptr [rsp + 0x48]
// asm:   0x1820f80dc: mov r12, qword ptr [rsp + 0x50]
// asm:   0x1820f8147: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183316f00: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183316f05: push rbp
// asm:   0x183316f06: sub rsp, 0x20
// asm:   0x183316f0a: mov rbp, rdx
// asm:   0x183316f0d: mov rax, qword ptr [rbp + 0x100]
// asm:   0x183316f14: mov rcx, qword ptr [rax]
// asm:   0x183316f17: mov qword ptr [rbp + 0x20], rcx
// asm:   0x183316f1b: movabs rax, 0
// asm:   0x183316f25: add rsp, 0x20
// asm:   0x183316f29: pop rbp
// asm:   0x183316f2a: ret 

void Controllers_BaseTitanAIController__Init
               (Controllers_BaseTitanAIController_o *__this,SimpleJSONFixed_JSONNode_o *data,
               MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  System_Xml_Schema_XmlSchema_c *pSVar2;
  System_Collections_Generic_Dictionary_string__float__o *pSVar3;
  SimpleJSONFixed_JSONNode_Enumerator_o *pSVar4;
  bool bVar5;
  System_Xml_Schema_XmlSchema_o *pSVar6;
  Il2CppObject *pIVar7;
  System_Collections_Generic_Dictionary_string__TitanAttackInfo__o *pSVar8;
  SimpleJSONFixed_JSONNode_ValueEnumerator_o *pSVar9;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o *pSVar10;
  MethodInfo *__this_00;
  System_String_o *pSVar11;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_01;
  float fVar12;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o local_178;
  MethodInfo *local_160;
  SimpleJSONFixed_JSONNode_o *local_158;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_148;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_f8;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_a0;
  SimpleJSONFixed_JSONNode_ValueEnumerator_o local_88;
  
  if (Il2CppMethodInitialized_184346a99 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_CharacterData);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_float_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_TitanAttackInfo_get_Item
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_TitanAttackInfo_get_Keys);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_TitanAttackInfo_Dispose
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_TitanAttackInfo_MoveNext
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_TitanAttackInfo_get_Curren
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_TitanAttackInfo_GetEnumerator
              );
    il2cpp_codegen_initialize_runtime_metadata(&"FocusTime");
    il2cpp_codegen_initialize_runtime_metadata(&"FarAttackMaxRange");
    il2cpp_codegen_initialize_runtime_metadata(&"IsRun");
    il2cpp_codegen_initialize_runtime_metadata(&"FarAttackMinRange");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackWait");
    il2cpp_codegen_initialize_runtime_metadata(&"DetectRange");
    il2cpp_codegen_initialize_runtime_metadata(&"Attacks");
    il2cpp_codegen_initialize_runtime_metadata(&"TurnAngle");
    il2cpp_codegen_initialize_runtime_metadata(&"ChaseAngleTimeMax");
    il2cpp_codegen_initialize_runtime_metadata(&"Type");
    il2cpp_codegen_initialize_runtime_metadata(&"FocusRange");
    il2cpp_codegen_initialize_runtime_metadata(&"ChaseAngleMinRange");
    il2cpp_codegen_initialize_runtime_metadata(&"CloseAttackRange");
    il2cpp_codegen_initialize_runtime_metadata(&"*");
    il2cpp_codegen_initialize_runtime_metadata(&"IsTurn");
    il2cpp_codegen_initialize_runtime_metadata(&"FarAttackCooldown");
    il2cpp_codegen_initialize_runtime_metadata(&"ChaseAngleTimeMin");
    Il2CppMethodInitialized_184346a99 = '\x01';
  }
  local_148.type = 0;
  local_148._4_4_ = 0;
  local_148.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_148.m_Object.fields._version = 0;
  local_148.m_Object.fields._index = 0;
  local_148.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_148.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_148.m_Object.fields._getEnumeratorRetType = 0;
  local_148.m_Object.fields._36_4_ = 0;
  local_148.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_148.m_Array.fields._index = 0;
  local_148.m_Array.fields._version = 0;
  local_148.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_f8.type = 0;
  local_f8._4_4_ = 0;
  local_f8.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_f8.m_Object.fields._version = 0;
  local_f8.m_Object.fields._index = 0;
  local_f8.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_f8.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_f8.m_Object.fields._getEnumeratorRetType = 0;
  local_f8.m_Object.fields._36_4_ = 0;
  local_f8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_f8.m_Array.fields._index = 0;
  local_f8.m_Array.fields._version = 0;
  local_f8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_178.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_178.fields._index = 0;
  local_178.fields._version = 0;
  local_178.fields._currentKey = (Il2CppObject *)0x0;
  if (data != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar6 = (*(data->klass->vtable)._7_get_Item.methodPtr)(data,(MethodInfo *)"DetectRange");
    if (pSVar6 != (System_Xml_Schema_XmlSchema_o *)0x0) {
      fVar12 = (float)(*(code *)((Il2CppClass *)pSVar6->klass)->vtable[37].methodPtr)
                                (pSVar6,((Il2CppClass *)pSVar6->klass)->vtable[37].method);
      (__this->fields).DetectRange = fVar12;
      pSVar6 = (*(data->klass->vtable)._7_get_Item.methodPtr)(data,(MethodInfo *)"CloseAttackRange");
      if (pSVar6 != (System_Xml_Schema_XmlSchema_o *)0x0) {
        fVar12 = (float)(*(code *)((Il2CppClass *)pSVar6->klass)->vtable[37].methodPtr)
                                  (pSVar6,((Il2CppClass *)pSVar6->klass)->vtable[37].method);
        (__this->fields).CloseAttackRange = fVar12;
        pSVar6 = (*(data->klass->vtable)._7_get_Item.methodPtr)(data,(MethodInfo *)"FarAttackMinRange");
        if (pSVar6 != (System_Xml_Schema_XmlSchema_o *)0x0) {
          fVar12 = (float)(*(code *)((Il2CppClass *)pSVar6->klass)->vtable[37].methodPtr)
                                    (pSVar6,((Il2CppClass *)pSVar6->klass)->vtable[37].method);
          (__this->fields).FarAttackMinRange = fVar12;
          pSVar6 = (*(data->klass->vtable)._7_get_Item.methodPtr)(data,(MethodInfo *)"FarAttackMaxRange");
          if (pSVar6 != (System_Xml_Schema_XmlSchema_o *)0x0) {
            fVar12 = (float)(*(code *)((Il2CppClass *)pSVar6->klass)->vtable[37].methodPtr)
                                      (pSVar6,((Il2CppClass *)pSVar6->klass)->vtable[37].method);
            (__this->fields).FarAttackMaxRange = fVar12;
            pSVar6 = (*(data->klass->vtable)._7_get_Item.methodPtr)(data,(MethodInfo *)"FarAttackCooldown");
            if (pSVar6 != (System_Xml_Schema_XmlSchema_o *)0x0) {
              fVar12 = (float)(*(code *)((Il2CppClass *)pSVar6->klass)->vtable[37].methodPtr)
                                        (pSVar6,((Il2CppClass *)pSVar6->klass)->vtable[37].method);
              (__this->fields).FarAttackCooldown = fVar12;
              pSVar6 = (*(data->klass->vtable)._7_get_Item.methodPtr)
                                 (data,(MethodInfo *)"FocusRange");
              if (pSVar6 != (System_Xml_Schema_XmlSchema_o *)0x0) {
                fVar12 = (float)(*(code *)((Il2CppClass *)pSVar6->klass)->vtable[37].methodPtr)
                                          (pSVar6,((Il2CppClass *)pSVar6->klass)->vtable[37].method);
                (__this->fields).FocusRange = fVar12;
                pSVar6 = (*(data->klass->vtable)._7_get_Item.methodPtr)
                                   (data,(MethodInfo *)"FocusTime");
                if (pSVar6 != (System_Xml_Schema_XmlSchema_o *)0x0) {
                  fVar12 = (float)(*(code *)((Il2CppClass *)pSVar6->klass)->vtable[37].methodPtr)
                                            (pSVar6,((Il2CppClass *)pSVar6->klass)->vtable[37].method);
                  (__this->fields).FocusTime = fVar12;
                  pSVar6 = (*(data->klass->vtable)._7_get_Item.methodPtr)
                                     (data,(MethodInfo *)"AttackWait");
                  if (pSVar6 != (System_Xml_Schema_XmlSchema_o *)0x0) {
                    fVar12 = (float)(*(code *)((Il2CppClass *)pSVar6->klass)->vtable[37].methodPtr)
                                              (pSVar6,((Il2CppClass *)pSVar6->klass)->vtable[37].method);
                    (__this->fields).AttackWait = fVar12;
                    pSVar6 = (*(data->klass->vtable)._7_get_Item.methodPtr)
                                       (data,(MethodInfo *)"ChaseAngleTimeMin");
                    if (pSVar6 != (System_Xml_Schema_XmlSchema_o *)0x0) {
                      fVar12 = (float)(*(code *)((Il2CppClass *)pSVar6->klass)->vtable[37].methodPtr)
                                                (pSVar6,((Il2CppClass *)pSVar6->klass)->vtable[37].method);
                      (__this->fields).ChaseAngleTimeMin = fVar12;
                      pSVar6 = (*(data->klass->vtable)._7_get_Item.methodPtr)
                                         (data,(MethodInfo *)"ChaseAngleTimeMax");
                      if (pSVar6 != (System_Xml_Schema_XmlSchema_o *)0x0) {
                        fVar12 = (float)(*(code *)((Il2CppClass *)pSVar6->klass)->vtable[37].methodPtr)
                                                  (pSVar6,((Il2CppClass *)pSVar6->klass)->vtable[37].method);
                        (__this->fields).ChaseAngleTimeMax = fVar12;
                        pSVar6 = (*(data->klass->vtable)._7_get_Item.methodPtr)
                                           (data,(MethodInfo *)"ChaseAngleMinRange");
                        if (pSVar6 != (System_Xml_Schema_XmlSchema_o *)0x0) {
                          fVar12 = (float)(*(code *)((Il2CppClass *)pSVar6->klass)->vtable[37].methodPtr)
                                                    (pSVar6,((Il2CppClass *)pSVar6->klass)->vtable[37].method);
                          (__this->fields).ChaseAngleMinRange = fVar12;
                          pSVar6 = (*(data->klass->vtable)._7_get_Item.methodPtr)
                                             (data,(MethodInfo *)"IsRun");
                          if (pSVar6 != (System_Xml_Schema_XmlSchema_o *)0x0) {
                            bVar5 = (bool)(*(code *)((Il2CppClass *)pSVar6->klass)->vtable[39].methodPtr)
                                                    (pSVar6,((Il2CppClass *)pSVar6->klass)->vtable[39].method);
                            (__this->fields).IsRun = bVar5;
                            pSVar6 = (*(data->klass->vtable)._7_get_Item.methodPtr)
                                               (data,(MethodInfo *)"IsTurn");
                            if (pSVar6 != (System_Xml_Schema_XmlSchema_o *)0x0) {
                              bVar5 = (bool)(*(code *)((Il2CppClass *)pSVar6->klass)->vtable[39].methodPtr)
                                                      (pSVar6,((Il2CppClass *)pSVar6->klass)->vtable[39].method);
                              (__this->fields).IsTurn = bVar5;
                              pSVar6 = (*(data->klass->vtable)._7_get_Item.methodPtr)
                                                 (data,(MethodInfo *)"TurnAngle");
                              if (pSVar6 != (System_Xml_Schema_XmlSchema_o *)0x0) {
                                fVar12 = (float)(*(code *)((Il2CppClass *)pSVar6->klass)->vtable[37].methodPtr)
                                                          (pSVar6,((Il2CppClass *)pSVar6->klass)->vtable[37].method);
                                (__this->fields).TurnAngle = fVar12;
                                if ((TypeInfo_Characters_CharacterData->_2).cctor_finished_or_no_cctor == 0) {
                                  il2cpp_codegen_runtime_class_init
                                            ((Il2CppClass *)TypeInfo_Characters_CharacterData);
                                }
                                pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                                         TypeInfo_Characters_CharacterData->static_fields->TitanAttackInfos;
                                pSVar6 = (*(data->klass->vtable)._7_get_Item.methodPtr)
                                                   (data,(MethodInfo *)"Type");
                                if (pSVar6 != (System_Xml_Schema_XmlSchema_o *)0x0) {
                                  pSVar2 = pSVar6->klass;
                                  pIVar7 = (Il2CppObject *)
                                           (*(pSVar2->vtable)._9_SetUnhandledAttributes.methodPtr)
                                                     (pSVar6,(UnityEngine_GameObject_o *)
                                                             (pSVar2->vtable)._9_SetUnhandledAttributes.method
                                                      ,(MethodInfo *)pSVar2);
                                  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0
                                     ) {
                                    pSVar8 = (System_Collections_Generic_Dictionary_string__TitanAttackInfo__o
                                              *)System_Collections_Generic_Dictionary_object__object___get_Item
                                                          (pSVar1,pIVar7,
                                                           (MethodInfo_147A5B0 *)
                                                                                                                      
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_TitanAttackInfo_get_Item
                                                       );
                                    (__this->fields).AttackInfos = pSVar8;
                                    Il2CppCodeGenWriteBarrier(&(__this->fields).AttackInfos,pSVar8);
                                    pSVar6 = (*(data->klass->vtable)._7_get_Item.methodPtr)
                                                       (data,(MethodInfo *)"Attacks");
                                    if (pSVar6 != (System_Xml_Schema_XmlSchema_o *)0x0) {
                                      local_158 = data;
                                      pSVar9 = SimpleJSONFixed_JSONNode__get_Values
                                                         (&local_88,(SimpleJSONFixed_JSONNode_o *)pSVar6,
                                                          (MethodInfo *)0x0);
                                      local_f8.type = (pSVar9->fields).m_Enumerator.fields.type;
                                      local_f8._4_4_ =
                                           *(undefined4 *)&(pSVar9->fields).m_Enumerator.fields.field_0x4;
                                      local_f8.m_Object.fields._dictionary =
                                           (pSVar9->fields).m_Enumerator.fields.m_Object.fields._dictionary;
                                      pSVar4 = &(pSVar9->fields).m_Enumerator;
                                      local_f8.m_Object.fields._version =
                                           (pSVar4->fields).m_Object.fields._version;
                                      local_f8.m_Object.fields._index =
                                           (pSVar4->fields).m_Object.fields._index;
                                      local_f8.m_Object.fields._current.fields.key =
                                           (pSVar9->fields).m_Enumerator.fields.m_Object.fields._current.
                                           fields.key;
                                      local_f8.m_Object.fields._current.fields.value =
                                           (pSVar9->fields).m_Enumerator.fields.m_Object.fields._current.
                                           fields.value;
                                      pSVar4 = &(pSVar9->fields).m_Enumerator;
                                      local_f8.m_Object.fields._getEnumeratorRetType =
                                           (pSVar4->fields).m_Object.fields._getEnumeratorRetType;
                                      local_f8.m_Object.fields._36_4_ =
                                           *(undefined4 *)&(pSVar4->fields).m_Object.fields.field_0x24;
                                      local_f8.m_Array.fields._list =
                                           (pSVar9->fields).m_Enumerator.fields.m_Array.fields._list;
                                      pSVar4 = &(pSVar9->fields).m_Enumerator;
                                      local_f8.m_Array.fields._index = (pSVar4->fields).m_Array.fields._index;
                                      local_f8.m_Array.fields._version =
                                           (pSVar4->fields).m_Array.fields._version;
                                      local_f8.m_Array.fields._current =
                                           (pSVar9->fields).m_Enumerator.fields.m_Array.fields._current;
                                      pSVar10 = SimpleJSONFixed_JSONNode_KeyEnumerator__GetEnumerator
                                                          ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)
                                                           &local_88,
                                                           (SimpleJSONFixed_JSONNode_KeyEnumerator_o *)
                                                           &local_f8,(MethodInfo *)0x0);
                                      local_148.type = (pSVar10->fields).m_Enumerator.fields.type;
                                      local_148._4_4_ =
                                           *(undefined4 *)&(pSVar10->fields).m_Enumerator.fields.field_0x4;
                                      local_148.m_Object.fields._dictionary =
                                           (pSVar10->fields).m_Enumerator.fields.m_Object.fields._dictionary;
                                      pSVar4 = &(pSVar10->fields).m_Enumerator;
                                      local_148.m_Object.fields._version =
                                           (pSVar4->fields).m_Object.fields._version;
                                      local_148.m_Object.fields._index =
                                           (pSVar4->fields).m_Object.fields._index;
                                      local_148.m_Object.fields._current.fields.key =
                                           (pSVar10->fields).m_Enumerator.fields.m_Object.fields._current.
                                           fields.key;
                                      local_148.m_Object.fields._current.fields.value =
                                           (pSVar10->fields).m_Enumerator.fields.m_Object.fields._current.
                                           fields.value;
                                      pSVar4 = &(pSVar10->fields).m_Enumerator;
                                      local_148.m_Object.fields._getEnumeratorRetType =
                                           (pSVar4->fields).m_Object.fields._getEnumeratorRetType;
                                      local_148.m_Object.fields._36_4_ =
                                           *(undefined4 *)&(pSVar4->fields).m_Object.fields.field_0x24;
                                      local_148.m_Array.fields._list =
                                           (pSVar10->fields).m_Enumerator.fields.m_Array.fields._list;
                                      pSVar4 = &(pSVar10->fields).m_Enumerator;
                                      local_148.m_Array.fields._index = (pSVar4->fields).m_Array.fields._index
                                      ;
                                      local_148.m_Array.fields._version =
                                           (pSVar4->fields).m_Array.fields._version;
                                      local_148.m_Array.fields._current =
                                           (pSVar10->fields).m_Enumerator.fields.m_Array.fields._current;
                                      while( true ) {
                                        bVar5 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                                                          ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)
                                                           &local_148,(MethodInfo *)0x0);
                                        if (!bVar5) {
                                          (__this->fields)._waitAttackTimeLeft = (__this->fields).AttackWait;
                                          return;
                                        }
                                        __this_00 = (MethodInfo *)
                                                    SimpleJSONFixed_JSONNode_KeyEnumerator__get_Current
                                                              ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)
                                                               &local_148,(MethodInfo *)0x0);
                                        local_160 = __this_00;
                                        pSVar6 = (*(data->klass->vtable)._7_get_Item.methodPtr)
                                                           (data,(MethodInfo *)"Attacks");
                                        if (pSVar6 == (System_Xml_Schema_XmlSchema_o *)0x0) break;
                                        pSVar11 = (*(pSVar6->klass->vtable)._7_get_IdAttribute.methodPtr)
                                                            (pSVar6,__this_00);
                                        if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor
                                            == 0) {
                                          il2cpp_codegen_runtime_class_init
                                                    ((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
                                        }
                                        fVar12 = SimpleJSONFixed_JSONNode__op_Implicit_1dc40b0
                                                           ((SimpleJSONFixed_JSONNode_o *)pSVar11,
                                                            (MethodInfo *)0x0);
                                        if (__this_00 == (MethodInfo *)0x0) break;
                                        bVar5 = System_String__EndsWith
                                                          ((System_String_o *)__this_00,"*",
                                                           (MethodInfo *)0x0);
                                        if (bVar5) {
                                          pSVar11 = System_String__Substring_1972740
                                                              ((System_String_o *)__this_00,0,
                                                               *(int *)&__this_00->invoker_method + -1,
                                                               (MethodInfo *)0x0);
                                          pSVar8 = (__this->fields).AttackInfos;
                                          if (pSVar8 == (
                                                       System_Collections_Generic_Dictionary_string__TitanAttackInfo__o
                                                       *)0x0) break;
                                          __this_01 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o
                                                       *)
                                                       System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys
                                                                 ((
                                                       System_Collections_Generic_Dictionary_TKey__TValue__o *
                                                       )pSVar8,(MethodInfo_13C6500 *)
                                                                                                                              
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_TitanAttackInfo_get_Keys
                                                       );
                                          if (__this_01 ==
                                              (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o
                                               *)0x0) break;
                                          System_Collections_Generic_Dictionary_ValueCollection_fsPortableReflection_AttributeQuery__object___GetEnumerator
                                                    (&local_a0,__this_01,
                                                     (MethodInfo_F1E4D0 *)
                                                     MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_TitanAttackInfo_GetEnumerator
                                                    );
                                          local_178.fields._dictionary = local_a0.fields._dictionary;
                                          local_178.fields._index = local_a0.fields._index;
                                          local_178.fields._version = local_a0.fields._version;
                                          local_178.fields._currentKey = local_a0.fields._currentValue;
                                          while( true ) {
                                            bVar5 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__StyleComplexSelector_PseudoStateData___MoveNext
                                                              (&local_178,
                                                               (MethodInfo_156BDD0 *)
                                                                                                                              
                                                       MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_TitanAttackInfo_MoveNext
                                                       );
                                            pIVar7 = local_178.fields._currentKey;
                                            if (!bVar5) break;
                                            if ((System_String_o *)local_178.fields._currentKey ==
                                                (System_String_o *)0x0) {
                                              ThrowNullReferenceException();
                                            }
                                            bVar5 = System_String__StartsWith
                                                              ((System_String_o *)local_178.fields._currentKey
                                                               ,pSVar11,(MethodInfo *)0x0);
                                            if (bVar5) {
                                              pSVar3 = (__this->fields).AttackChances;
                                              if (pSVar3 == (
                                                       System_Collections_Generic_Dictionary_string__float__o
                                                       *)0x0) {
                                                ThrowNullReferenceException();
                                              }
                                              System_Collections_Generic_Dictionary_object__float___Add
                                                        ((
                                                       System_Collections_Generic_Dictionary_TKey__TValue__o *
                                                       )pSVar3,pIVar7,fVar12,
                                                       (MethodInfo_147AAD0 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_float_Add
                                                       );
                                              pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields).AttackGroups;
                                              if (pSVar1 == (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                ThrowNullReferenceException();
                                              }
                                              System_Collections_Generic_Dictionary_object__object___Add
                                                        (pSVar1,pIVar7,(Il2CppObject *)pSVar11,
                                                         (MethodInfo_146B4B0 *)
                                                                                                                  
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_string_Add
                                                       );
                                            }
                                          }
                                          System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                                                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o
                                                      *)&local_178,
                                                     MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_TitanAttackInfo_Dispose
                                                    );
                                        }
                                        else {
                                          pSVar3 = (__this->fields).AttackChances;
                                          if (pSVar3 == (
                                                       System_Collections_Generic_Dictionary_string__float__o
                                                       *)0x0) break;
                                          System_Collections_Generic_Dictionary_object__float___Add
                                                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)
                                                     pSVar3,(Il2CppObject *)__this_00,fVar12,
                                                     (MethodInfo_147AAD0 *)
                                                     MethodInfo_System_Collections_Generic_Dictionary_string_float_Add
                                                    );
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
                }
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Controllers.BaseTitanAIController$$GetEnemy
// il2cpp: Characters_ITargetable_o* Controllers_BaseTitanAIController__GetEnemy (Controllers_BaseTitanAIController_o* __this, const MethodInfo* method);
// 0x1820f18a0

Characters_ITargetable_o*
Controllers_BaseTitanAIController__GetEnemy(Controllers_BaseTitanAIController_o* __this, MethodInfo* method)

{
  bool bVar1;
  
  bVar1 = Controllers_BaseAIController__IsValidTarget((__this->fields)._enemy,(MethodInfo *)0x0);
  if (bVar1) {
    return (__this->fields)._enemy;
  }
  return (Characters_ITargetable_o *)0x0;
}


// Controllers.BaseTitanAIController$$SetEnemy
// il2cpp: void Controllers_BaseTitanAIController__SetEnemy (Controllers_BaseTitanAIController_o* __this, Characters_ITargetable_o* enemy, float focusTime, const MethodInfo* method);
// 0x1820f2050

void Controllers_BaseTitanAIController__SetEnemy
               (Controllers_BaseTitanAIController_o *__this,Characters_ITargetable_o *enemy,float focusTime,
               MethodInfo *method)

{
  byte bVar1;
  Controllers_BaseTitanAIController_c *pCVar2;
  
  if (Il2CppMethodInitialized_184346a82 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Controllers_BaseTitanAIController);
    Il2CppMethodInitialized_184346a82 = '\x01';
  }
  if (enemy == (Characters_ITargetable_o *)0x0) {
    Controllers_BaseAIController__ClearTarget((Controllers_BaseAIController_o *)__this,(MethodInfo *)0x0);
  }
  else {
    (__this->fields)._automaticTargeting = true;
    Controllers_BaseAIController__AssignTarget
              ((Controllers_BaseAIController_o *)__this,enemy,focusTime,(MethodInfo *)0x0);
    pCVar2 = __this->klass;
    (__this->fields)._idleTimeLeft = 0.0;
    bVar1 = (TypeInfo_Controllers_BaseTitanAIController->_2).typeHierarchyDepth;
    if ((((bVar1 <= (pCVar2->_2).typeHierarchyDepth) &&
         ((pCVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_Controllers_BaseTitanAIController)) &&
        (__this != (Controllers_BaseTitanAIController_o *)0x0)) && ((__this->fields).AIState == 7)) {
      Controllers_BaseTitanAIController__Idle(__this,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Controllers.BaseTitanAIController$$UpdateScriptedAI
// il2cpp: void Controllers_BaseTitanAIController__UpdateScriptedAI (Controllers_BaseTitanAIController_o* __this, const MethodInfo* method);
// 0x180547020

void
Controllers_BaseTitanAIController__UpdateScriptedAI(Controllers_BaseTitanAIController_o* __this, MethodInfo* method)

{
  return;
}


// Controllers.BaseTitanAIController$$FixedUpdate
// il2cpp: void Controllers_BaseTitanAIController__FixedUpdate (Controllers_BaseTitanAIController_o* __this, const MethodInfo* method);
// 0x1820f4910
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820f4ce3: xor edx, edx
// asm:   0x1820f4ce5: mov rcx, rdi
// asm:   0x1820f51dc: jmp 0x1820f58ad
// asm:   0x1820f5258: jmp 0x1820f5028
// asm:   0x1820f5337: jmp 0x1820f5028
// asm:   0x1820f56ea: mov rax, qword ptr [rdi]
// asm:   0x1820f56ed: mov rcx, rdi
// asm:   0x1820f56f0: mov rdx, qword ptr [rax + 0x200]
// asm:   0x1820f56f7: call qword ptr [rax + 0x1f8]  ; vtable slot 12
// asm:   0x1820f56fd: jmp 0x1820f5095
// asm:   0x1820f58ad: xor edx, edx
// asm:   0x1820f58af: mov rcx, rdi
// asm:   0x1820f58b2: call 0x1820f8e60  ; Controllers_BaseTitanAIController__UpdateMovementRecovery()
// asm:   0x1820f58b7: mov rax, qword ptr [rdi]
// asm:   0x1820f58ba: mov rcx, rdi
// asm:   0x1820f58bd: mov rdx, qword ptr [rax + 0x1c0]
// asm:   0x1820f58c4: call qword ptr [rax + 0x1b8]  ; vtable slot 8
// asm:   0x1820f58ca: jmp 0x1820f5095

void Controllers_BaseTitanAIController__FixedUpdate
               (Controllers_BaseTitanAIController_o *__this,MethodInfo *method)

{
  float *pfVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  ushort uVar6;
  Characters_ITargetable_o *value;
  UnityEngine_Object_o *x;
  UnityEngine_AI_NavMeshAgent_o *pUVar7;
  Characters_BaseCharacter_o *pCVar8;
  Utility_BaseComponentCache_o *pUVar9;
  UnityEngine_Transform_o *pUVar10;
  bool bVar11;
  undefined8 *puVar12;
  void *pvVar13;
  UnityEngine_Vector3_o *pUVar14;
  System_Collections_Generic_List_string__o *validAttacks;
  VirtualInvokeData *pVVar15;
  ushort uVar16;
  Il2CppObject *pIVar18;
  MethodInfo *in_R8;
  Il2CppRuntimeInterfaceOffsetPair *pIVar19;
  Il2CppClass *pIVar20;
  Characters_BaseTitan_o *pCVar21;
  float fVar22;
  float fVar23;
  double dVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  UnityEngine_Vector3_Fields local_a8;
  UnityEngine_Vector3_Fields local_98;
  UnityEngine_Vector3_o local_88 [10];
  ulonglong uVar17;
  
  if (Il2CppMethodInitialized_184346a9a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ITargetable);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_184346a9a = '\x01';
  }
  if ((__this->fields)._usePathfinding != false) {
    (__this->fields)._setTargetThisFrame = false;
  }
  fVar23 = (__this->fields)._stateTimeLeft;
  fVar22 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  (__this->fields)._stateTimeLeft = fVar23 - fVar22;
  fVar23 = (__this->fields)._moveToTimeout;
  fVar22 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  pCVar21 = (__this->fields)._titan;
  (__this->fields)._moveToTimeout = fVar23 - fVar22;
  if (pCVar21 == (Characters_BaseTitan_o *)0x0) goto label_1820f58cf;
  if ((pCVar21->fields).Dead != false) {
    return;
  }
  Controllers_BaseAIController__UpdateMoveTarget((Controllers_BaseAIController_o *)__this,(MethodInfo *)0x0);
  pCVar21 = (__this->fields)._titan;
  if (pCVar21 == (Characters_BaseTitan_o *)0x0) goto label_1820f58cf;
  if (((pCVar21->fields).State != 10) && ((pCVar21->fields).State != 0x17)) {
    fVar23 = (__this->fields)._rangedCooldownLeft;
    fVar22 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    (__this->fields)._rangedCooldownLeft = fVar23 - fVar22;
    fVar23 = (__this->fields)._attackCooldownLeft;
    fVar22 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    (__this->fields)._attackCooldownLeft = fVar23 - fVar22;
  }
  if ((__this->fields).AIState == 7) {
    if (0.0 < (__this->fields)._stateTimeLeft) {
      return;
    }
    Controllers_BaseTitanAIController__Idle(__this,(MethodInfo *)0x0);
  }
  Controllers_BaseAIController__UpdateTargeting((Controllers_BaseAIController_o *)__this,(MethodInfo *)0x0);
  pCVar21 = (__this->fields)._titan;
  if (pCVar21 == (Characters_BaseTitan_o *)0x0) goto label_1820f58cf;
  value = (__this->fields)._enemy;
  (pCVar21->fields).TargetEnemy = value;
  Il2CppCodeGenWriteBarrier(&(pCVar21->fields).TargetEnemy,value);
  if ((__this->fields)._aiEnabled == false) {
    (__this->fields)._enemy = (Characters_ITargetable_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._enemy,(void *)0x0);
    if (((((__this->fields).AIState == 0) || ((__this->fields).AIState == 1)) ||
        ((__this->fields).AIState == 2)) &&
       (((__this->fields)._moveToActive != false &&
        (bVar11 = (*(__this->klass->vtable)._10_get__stationaryAI.methodPtr)
                            (__this,(__this->klass->vtable)._10_get__stationaryAI.method), !bVar11)))) {
      Controllers_BaseTitanAIController__MoveToPosition(__this,(MethodInfo *)0x0);
    }
    if ((__this->fields).AIState != 4) goto label_1820f58ad;
    pCVar8 = (__this->fields)._character;
    if (((pCVar8 == (Characters_BaseCharacter_o *)0x0) ||
        (pUVar9 = (pCVar8->fields).Cache, pUVar9 == (Utility_BaseComponentCache_o *)0x0)) ||
       (pUVar10 = (pUVar9->fields).Transform, pUVar10 == (UnityEngine_Transform_o *)0x0)) goto label_1820f58cf;
    pUVar14 = UnityEngine_Transform__get_position(local_88,pUVar10,(MethodInfo *)0x0);
    fVar23 = (__this->fields)._moveToPosition.fields.x;
    fVar22 = (__this->fields)._moveToPosition.fields.y;
    fVar26 = (pUVar14->fields).x;
    fVar25 = (pUVar14->fields).y;
    fVar27 = (pUVar14->fields).z;
    fVar2 = (__this->fields)._moveToPosition.fields.z;
    if (Il2CppMethodInitialized_18433dee7 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
      Il2CppMethodInitialized_18433dee7 = '\x01';
    }
    fVar26 = fVar26 - fVar23;
    fVar25 = fVar25 - fVar22;
    fVar27 = fVar27 - fVar2;
    if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    }
    dVar24 = (double)(fVar25 * fVar25 + fVar26 * fVar26 + fVar27 * fVar27);
    if (dVar24 < 0.0) {
      dVar24 = sqrt(dVar24);
    }
    else {
      dVar24 = SQRT(dVar24);
    }
    if ((((float)dVar24 <= (__this->fields)._moveToRange) || ((__this->fields)._moveToActive == false)) ||
       (((__this->fields)._moveToExact != false && ((__this->fields)._moveToTimeout <= 0.0)))) {
label_1820f58a3:
      Controllers_BaseTitanAIController__CompleteMove(__this,(MethodInfo *)0x0);
      goto label_1820f58ad;
    }
    if (0.0 < (__this->fields)._stateTimeLeft) {
      cVar5 = (__this->fields)._usePathfinding;
joined_r0x0001820f5891:
      if (cVar5 == '\0') {
        local_98.x = (__this->fields)._moveToPosition.fields.x;
        local_98.y = (__this->fields)._moveToPosition.fields.y;
        local_98.z = (__this->fields)._moveToPosition.fields.z;
        pCVar21 = (__this->fields)._titan;
        fVar23 = Controllers_BaseTitanAIController__GetChaseAngle
                           (__this,(UnityEngine_Vector3_o *)&local_98,true,(MethodInfo *)0x0);
        if (pCVar21 == (Characters_BaseTitan_o *)0x0) goto label_1820f58cf;
        (pCVar21->fields).TargetAngle = fVar23;
        goto label_1820f58ad;
      }
    }
label_1820f5897:
    Controllers_BaseTitanAIController__MoveToPosition(__this,(MethodInfo *)0x0);
    goto label_1820f58ad;
  }
  bVar11 = (*(__this->klass->vtable)._9_get__scriptedAI.methodPtr)
                     (__this,(__this->klass->vtable)._9_get__scriptedAI.method);
  if (bVar11) {
    (*(__this->klass->vtable)._12_UpdateScriptedAI.methodPtr)
              (__this,(System_Type_o *)(__this->klass->vtable)._12_UpdateScriptedAI.method,in_R8);
    return;
  }
  if ((__this->fields)._enemy != (Characters_ITargetable_o *)0x0) {
    if ((__this->fields)._usePathfinding != false) {
      x = (UnityEngine_Object_o *)(__this->fields)._agent;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar11 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar11) {
        pUVar7 = (__this->fields)._agent;
        if (pUVar7 == (UnityEngine_AI_NavMeshAgent_o *)0x0) goto label_1820f58cf;
        bVar11 = UnityEngine_AI_NavMeshAgent__get_isOnNavMesh(pUVar7,(MethodInfo *)0x0);
        if (bVar11) {
          if ((__this->fields)._enemy == (Characters_ITargetable_o *)0x0) goto label_1820f58cf;
          puVar12 = (undefined8 *)il2cpp_runtime_helper_180027220(&local_98);
          if ((__this->fields)._setTargetThisFrame == false) {
            pUVar7 = (__this->fields)._agent;
            if (pUVar7 == (UnityEngine_AI_NavMeshAgent_o *)0x0) goto label_1820f58cf;
            uVar3 = *puVar12;
            fVar23 = *(float *)(puVar12 + 1);
            bVar11 = UnityEngine_AI_NavMeshAgent__get_pathPending(pUVar7,(MethodInfo *)0x0);
            if ((!bVar11) && ((__this->fields)._repathTimeLeft <= 0.0)) {
              pUVar7 = (__this->fields)._agent;
              if (pUVar7 == (UnityEngine_AI_NavMeshAgent_o *)0x0) goto label_1820f58cf;
              local_a8._0_8_ = uVar3;
              local_a8.z = fVar23;
              UnityEngine_AI_NavMeshAgent__SetDestination
                        (pUVar7,(UnityEngine_Vector3_o *)&local_a8,(MethodInfo *)0x0);
              (__this->fields)._repathTimeLeft = 0.2;
              (__this->fields)._setTargetThisFrame = true;
            }
          }
        }
      }
    }
    if (((__this->fields)._enemy != (Characters_ITargetable_o *)0x0) &&
       (pvVar13 = InterfaceInvoker0_Invoke
                            (2,(Il2CppClass *)TypeInfo_Characters_ITargetable,
                             (Il2CppObject *)(__this->fields)._enemy), (char)pvVar13 != '\0')) {
      pCVar8 = (__this->fields)._character;
      if ((pCVar8 == (Characters_BaseCharacter_o *)0x0) ||
         (((pUVar9 = (pCVar8->fields).Cache, pUVar9 == (Utility_BaseComponentCache_o *)0x0 ||
           (pUVar10 = (pUVar9->fields).Transform, pUVar10 == (UnityEngine_Transform_o *)0x0)) ||
          (pUVar14 = UnityEngine_Transform__get_position
                               ((UnityEngine_Vector3_o *)&local_98,pUVar10,(MethodInfo *)0x0),
          (__this->fields)._enemy == (Characters_ITargetable_o *)0x0)))) goto label_1820f58cf;
      uVar3._0_4_ = (pUVar14->fields).x;
      uVar3._4_4_ = (pUVar14->fields).y;
      fVar23 = (pUVar14->fields).z;
      puVar12 = (undefined8 *)il2cpp_runtime_helper_180027220(&local_98,1);
      uVar4 = *puVar12;
      fVar22 = *(float *)(puVar12 + 1);
      if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
      }
      local_a8._0_8_ = uVar4;
      local_a8.z = fVar22;
      local_98._0_8_ = uVar3;
      local_98.z = fVar23;
      fVar23 = Utility_Util__DistanceIgnoreY
                         ((UnityEngine_Vector3_o *)&local_98,(UnityEngine_Vector3_o *)&local_a8,
                          (MethodInfo *)0x0);
      (__this->fields)._enemyDistance = fVar23;
    }
  }
  if ((((__this->fields).AIState == 0) || ((__this->fields).AIState == 1)) || ((__this->fields).AIState == 2))
  {
    if (((__this->fields)._enemy == (Characters_ITargetable_o *)0x0) ||
       (pvVar13 = InterfaceInvoker0_Invoke
                            (2,(Il2CppClass *)TypeInfo_Characters_ITargetable,
                             (Il2CppObject *)(__this->fields)._enemy), (char)pvVar13 == '\0')) {
      if ((__this->fields)._moveToActive == false) {
        if (0.0 < (__this->fields)._stateTimeLeft) goto label_1820f58ad;
        if ((__this->fields).AIState == 0) {
          bVar11 = Controllers_BaseTitanAIController__IsCrawler(__this,(MethodInfo *)0x0);
          if (((bVar11) ||
              (bVar11 = Controllers_BaseTitanAIController__IsShifter(__this,(MethodInfo *)0x0), bVar11)) ||
             (bVar11 = Utility_RandomGen__Roll(0.33,(MethodInfo *)0x0), !bVar11)) {
            pCVar21 = (__this->fields)._titan;
            (__this->fields).AIState = 1;
            if (pCVar21 != (Characters_BaseTitan_o *)0x0) {
              (pCVar21->fields).HasDirection = true;
              pCVar21 = (__this->fields)._titan;
              fVar23 = UnityEngine_Random__Range(0.0,360.0,(MethodInfo *)0x0);
              if (pCVar21 != (Characters_BaseTitan_o *)0x0) {
                (pCVar21->fields).TargetAngle = fVar23;
                pCVar21 = (__this->fields)._titan;
                if (pCVar21 != (Characters_BaseTitan_o *)0x0) {
                  (pCVar21->fields).IsWalk = true;
                  pCVar21 = (__this->fields)._titan;
                  if (pCVar21 != (Characters_BaseTitan_o *)0x0) {
                    (pCVar21->fields).IsSit = false;
                    bVar11 = Controllers_BaseTitanAIController__IsCrawler(__this,(MethodInfo *)0x0);
                    if (bVar11) {
                      pCVar21 = (__this->fields)._titan;
                      if (pCVar21 == (Characters_BaseTitan_o *)0x0) goto label_1820f58cf;
                      (pCVar21->fields).IsWalk = false;
                    }
                    pCVar21 = (__this->fields)._titan;
                    if (((pCVar21 != (Characters_BaseTitan_o *)0x0) &&
                        (pUVar9 = (pCVar21->fields).Cache, pUVar9 != (Utility_BaseComponentCache_o *)0x0)) &&
                       (pUVar10 = (pUVar9->fields).Transform, pUVar10 != (UnityEngine_Transform_o *)0x0)) {
                      pUVar14 = UnityEngine_Transform__get_forward(local_88,pUVar10,(MethodInfo *)0x0);
                      pCVar21 = (__this->fields)._titan;
                      if (pCVar21 != (Characters_BaseTitan_o *)0x0) {
                        uVar4._0_4_ = (pUVar14->fields).x;
                        uVar4._4_4_ = (pUVar14->fields).y;
                        fVar23 = (pUVar14->fields).z;
                        pUVar14 = (*(pCVar21->klass->vtable)._106_GetTargetDirection.methodPtr)
                                            (local_88,pCVar21,
                                             (pCVar21->klass->vtable)._106_GetTargetDirection.method);
                        local_98.x = (pUVar14->fields).x;
                        local_98.y = (pUVar14->fields).y;
                        local_98.z = (pUVar14->fields).z;
                        local_a8._0_8_ = uVar4;
                        local_a8.z = fVar23;
                        fVar23 = (float)il2cpp_runtime_helper_181d9e200(&local_a8);
                        if (60.0 < ABS(fVar23)) {
                          pCVar21 = (__this->fields)._titan;
                          if (pCVar21 == (Characters_BaseTitan_o *)0x0) goto label_1820f58cf;
                          pUVar14 = (*(pCVar21->klass->vtable)._106_GetTargetDirection.methodPtr)
                                              (local_88,pCVar21,
                                               (pCVar21->klass->vtable)._106_GetTargetDirection.method);
                          local_98.x = (pUVar14->fields).x;
                          local_98.y = (pUVar14->fields).y;
                          local_98.z = (pUVar14->fields).z;
                          (*(pCVar21->klass->vtable)._167_Turn.methodPtr)
                                    (pCVar21,(UnityEngine_Vector3_o *)&local_98,
                                     (pCVar21->klass->vtable)._167_Turn.method);
                        }
                        fVar23 = UnityEngine_Random__Range(2.0,6.0,(MethodInfo *)0x0);
                        (__this->fields)._stateTimeLeft = fVar23;
                        goto label_1820f58ad;
                      }
                    }
                  }
                }
              }
            }
          }
          else {
            pCVar21 = (__this->fields)._titan;
            (__this->fields).AIState = 2;
            if (pCVar21 != (Characters_BaseTitan_o *)0x0) {
              (pCVar21->fields).IsSit = true;
              fVar23 = UnityEngine_Random__Range(8.0,14.0,(MethodInfo *)0x0);
              (__this->fields)._stateTimeLeft = fVar23;
              goto label_1820f58ad;
            }
          }
          goto label_1820f58cf;
        }
        goto label_1820f4ce8;
      }
      goto label_1820f5897;
    }
label_1820f546e:
    pCVar21 = (__this->fields)._titan;
    if (pCVar21 == (Characters_BaseTitan_o *)0x0) {
label_1820f58cf:
      ThrowNullReferenceException();
    }
    (__this->fields)._attackRange = (pCVar21->fields).Size * (__this->fields).CloseAttackRange;
  }
  else {
    if ((__this->fields).AIState == 4) {
      pCVar8 = (__this->fields)._character;
      if (((pCVar8 == (Characters_BaseCharacter_o *)0x0) ||
          (pUVar9 = (pCVar8->fields).Cache, pUVar9 == (Utility_BaseComponentCache_o *)0x0)) ||
         (pUVar10 = (pUVar9->fields).Transform, pUVar10 == (UnityEngine_Transform_o *)0x0))
      goto label_1820f58cf;
      pUVar14 = UnityEngine_Transform__get_position(local_88,pUVar10,(MethodInfo *)0x0);
      local_98.x = (__this->fields)._moveToPosition.fields.x;
      local_98.y = (__this->fields)._moveToPosition.fields.y;
      local_98.z = (__this->fields)._moveToPosition.fields.z;
      local_a8.x = (pUVar14->fields).x;
      local_a8.y = (pUVar14->fields).y;
      local_a8.z = (pUVar14->fields).z;
      fVar23 = (float)il2cpp_runtime_helper_180562c80(&local_a8);
      if ((__this->fields)._enemy == (Characters_ITargetable_o *)0x0) {
        if (((fVar23 <= (__this->fields)._moveToRange) || ((__this->fields)._moveToActive == false)) ||
           (((__this->fields)._moveToExact != false && ((__this->fields)._moveToTimeout <= 0.0))))
        goto label_1820f58a3;
        if (0.0 < (__this->fields)._stateTimeLeft) {
          cVar5 = (__this->fields)._usePathfinding;
          goto joined_r0x0001820f5891;
        }
        goto label_1820f5897;
      }
      goto label_1820f546e;
    }
    if ((__this->fields).AIState == 3) {
      if (((__this->fields)._enemy != (Characters_ITargetable_o *)0x0) &&
         (pvVar13 = InterfaceInvoker0_Invoke
                              (2,(Il2CppClass *)TypeInfo_Characters_ITargetable,
                               (Il2CppObject *)(__this->fields)._enemy), (char)pvVar13 != '\0')) {
        if ((0.0 < (__this->fields)._stateTimeLeft) ||
           (fVar23 = (__this->fields)._enemyDistance, pfVar1 = &(__this->fields).ChaseAngleMinRange,
           fVar23 < *pfVar1 || fVar23 == *pfVar1)) {
          if ((__this->fields)._enemyDistance <= (__this->fields)._attackRange) {
            bVar11 = Controllers_BaseTitanAIController__TryCloseAction(__this,(MethodInfo *)0x0);
            if (bVar11) goto label_1820f58ad;
            if ((__this->fields)._enemy == (Characters_ITargetable_o *)0x0) goto label_1820f58cf;
            puVar12 = (undefined8 *)il2cpp_runtime_helper_180027220(&local_a8,1);
            local_98._0_8_ = *puVar12;
            local_98.z = *(float *)(puVar12 + 1);
            bVar11 = Controllers_BaseTitanAIController__HasClearLineOfSight
                               (__this,(UnityEngine_Vector3_o *)&local_98,(MethodInfo *)0x0);
            if (bVar11) {
              if (Il2CppMethodInitialized_184346aa5 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ITargetable);
                Il2CppMethodInitialized_184346aa5 = '\x01';
              }
              pIVar18 = (Il2CppObject *)(__this->fields)._enemy;
              if (pIVar18 == (Il2CppObject *)0x0) goto label_1820f58cf;
              pIVar20 = pIVar18->klass;
              uVar17 = 0;
              pCVar21 = (__this->fields)._titan;
              uVar6 = (pIVar20->_2).interface_offsets_count;
              if (uVar6 != 0) {
                pIVar19 = (pIVar20->_1).interfaceOffsets;
                do {
                  if (pIVar19[uVar17].interfaceType == (Il2CppClass *)TypeInfo_Characters_ITargetable)
                  goto label_1820f533c;
                  uVar16 = (short)uVar17 + 1;
                  uVar17 = (ulonglong)uVar16;
                } while (uVar16 < uVar6);
              }
              goto label_1820f5028;
            }
            fVar23 = (__this->fields)._stateTimeLeft;
          }
          else {
            validAttacks = (*(__this->klass->vtable)._13_GetValidAttacks.methodPtr)
                                     (__this,true,(__this->klass->vtable)._13_GetValidAttacks.method);
            if (((__this->fields)._enemyDistance <= (__this->fields).FarAttackMaxRange) &&
               ((__this->fields).FarAttackMinRange <= (__this->fields)._enemyDistance)) {
              if (validAttacks == (System_Collections_Generic_List_string__o *)0x0) goto label_1820f58cf;
              if (0 < (validAttacks->fields)._size) {
label_1820f5178:
                Controllers_BaseTitanAIController__Attack(__this,validAttacks,(MethodInfo *)0x0);
                goto label_1820f58ad;
              }
            }
            if ((__this->fields)._enemy == (Characters_ITargetable_o *)0x0) goto label_1820f58cf;
            puVar12 = (undefined8 *)il2cpp_runtime_helper_180027220(&local_a8,1);
            local_98._0_8_ = *puVar12;
            local_98.z = *(float *)(puVar12 + 1);
            bVar11 = Controllers_BaseTitanAIController__HasClearLineOfSight
                               (__this,(UnityEngine_Vector3_o *)&local_98,(MethodInfo *)0x0);
            if (bVar11) {
              if (Il2CppMethodInitialized_184346aa5 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ITargetable);
                Il2CppMethodInitialized_184346aa5 = '\x01';
              }
              pIVar18 = (Il2CppObject *)(__this->fields)._enemy;
              if (pIVar18 == (Il2CppObject *)0x0) goto label_1820f58cf;
              pIVar20 = pIVar18->klass;
              uVar17 = 0;
              pCVar21 = (__this->fields)._titan;
              uVar6 = (pIVar20->_2).interface_offsets_count;
              if (uVar6 != 0) {
                pIVar19 = (pIVar20->_1).interfaceOffsets;
                do {
                  if (pIVar19[uVar17].interfaceType == (Il2CppClass *)TypeInfo_Characters_ITargetable)
                  goto label_1820f533c;
                  uVar16 = (short)uVar17 + 1;
                  uVar17 = (ulonglong)uVar16;
                } while (uVar16 < uVar6);
              }
label_1820f5028:
              pVVar15 = GetInterfaceInvokeDataFromVTableSlowPath
                                  (pIVar18,(Il2CppClass *)TypeInfo_Characters_ITargetable,1);
              goto label_1820f5036;
            }
            fVar23 = (__this->fields)._stateTimeLeft;
          }
          if (0.0 < fVar23) goto label_1820f58ad;
        }
label_1820f52bd:
        Controllers_BaseTitanAIController__MoveToEnemy(__this,true,(MethodInfo *)0x0);
        goto label_1820f58ad;
      }
label_1820f4ce8:
      Controllers_BaseTitanAIController__Idle(__this,(MethodInfo *)0x0);
      goto label_1820f58ad;
    }
    if ((__this->fields).AIState != 6) {
      if ((__this->fields).AIState != 5) goto label_1820f58ad;
      pCVar21 = (__this->fields)._titan;
      if (pCVar21 == (Characters_BaseTitan_o *)0x0) goto label_1820f58cf;
      if ((pCVar21->fields).State != 0) goto label_1820f58ad;
      goto label_1820f4ce8;
    }
    if (((__this->fields)._enemy == (Characters_ITargetable_o *)0x0) ||
       (pvVar13 = InterfaceInvoker0_Invoke
                            (2,(Il2CppClass *)TypeInfo_Characters_ITargetable,
                             (Il2CppObject *)(__this->fields)._enemy), (char)pvVar13 == '\0')) {
      Controllers_BaseTitanAIController__Idle(__this,(MethodInfo *)0x0);
      return;
    }
    fVar23 = (__this->fields)._waitAttackTimeLeft;
    fVar22 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    fVar23 = fVar23 - fVar22;
    (__this->fields)._waitAttackTimeLeft = fVar23;
    if (0.0 < fVar23) goto label_1820f58ad;
    pCVar21 = (__this->fields)._titan;
    if (pCVar21 == (Characters_BaseTitan_o *)0x0) goto label_1820f58cf;
    bVar11 = (*(pCVar21->klass->vtable)._145_CanAction.methodPtr)
                       (pCVar21,(pCVar21->klass->vtable)._145_CanAction.method);
    if (!bVar11) goto label_1820f58ad;
    pCVar21 = (__this->fields)._titan;
    if (pCVar21 == (Characters_BaseTitan_o *)0x0) goto label_1820f58cf;
    (pCVar21->fields).HasDirection = false;
    fVar23 = (__this->fields)._enemyDistance;
    pfVar1 = &(__this->fields)._attackRange;
    if (*pfVar1 <= fVar23 && fVar23 != *pfVar1) goto label_1820f52bd;
    validAttacks = (*(__this->klass->vtable)._13_GetValidAttacks.methodPtr)
                             (__this,false,(__this->klass->vtable)._13_GetValidAttacks.method);
    if (validAttacks == (System_Collections_Generic_List_string__o *)0x0) goto label_1820f58cf;
    if (0 < (validAttacks->fields)._size) goto label_1820f5178;
    if (((__this->fields).IsTurn != false) &&
       (fVar23 = Controllers_BaseTitanAIController__GetEnemyAngle
                           (__this,(__this->fields)._enemy,(MethodInfo *)0x0),
       pfVar1 = &(__this->fields).TurnAngle, *pfVar1 <= fVar23 && fVar23 != *pfVar1)) {
      if (Il2CppMethodInitialized_184346aa8 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ITargetable);
        Il2CppMethodInitialized_184346aa8 = '\x01';
      }
      pIVar18 = (Il2CppObject *)(__this->fields)._enemy;
      uVar17 = 0;
      (__this->fields).AIState = 5;
      (__this->fields)._moveAngle = 0.0;
      if (pIVar18 != (Il2CppObject *)0x0) {
        pIVar20 = pIVar18->klass;
        pCVar21 = (__this->fields)._titan;
        uVar6 = (pIVar20->_2).interface_offsets_count;
        if (uVar6 != 0) {
          pIVar19 = (pIVar20->_1).interfaceOffsets;
          do {
            if (pIVar19[uVar17].interfaceType == (Il2CppClass *)TypeInfo_Characters_ITargetable) {
              pVVar15 = (VirtualInvokeData *)&pIVar20->vtable[pIVar19[uVar17].offset + 1].methodPtr;
              goto label_1820f4e76;
            }
            uVar16 = (short)uVar17 + 1;
            uVar17 = (ulonglong)uVar16;
          } while (uVar16 < uVar6);
        }
        pVVar15 = GetInterfaceInvokeDataFromVTableSlowPath
                            (pIVar18,(Il2CppClass *)TypeInfo_Characters_ITargetable,1);
label_1820f4e76:
        pUVar14 = (*pVVar15->methodPtr)((UnityEngine_Vector3_o *)&local_a8,pIVar18,pVVar15->method);
        local_98.x = (pUVar14->fields).x;
        local_98.y = (pUVar14->fields).y;
        local_98.z = (pUVar14->fields).z;
        fVar23 = Controllers_BaseTitanAIController__GetChaseAngle
                           (__this,(UnityEngine_Vector3_o *)&local_98,false,(MethodInfo *)0x0);
        if (pCVar21 != (Characters_BaseTitan_o *)0x0) {
          (pCVar21->fields).TargetAngle = fVar23;
          pCVar21 = (__this->fields)._titan;
          if (pCVar21 != (Characters_BaseTitan_o *)0x0) {
            pUVar14 = (*(pCVar21->klass->vtable)._106_GetTargetDirection.methodPtr)
                                ((UnityEngine_Vector3_o *)&local_a8,pCVar21,
                                 (pCVar21->klass->vtable)._106_GetTargetDirection.method);
            local_98.x = (pUVar14->fields).x;
            local_98.y = (pUVar14->fields).y;
            local_98.z = (pUVar14->fields).z;
            (*(pCVar21->klass->vtable)._167_Turn.methodPtr)
                      (pCVar21,(UnityEngine_Vector3_o *)&local_98,(pCVar21->klass->vtable)._167_Turn.method);
            goto label_1820f58ad;
          }
        }
      }
      goto label_1820f58cf;
    }
    if ((__this->fields)._enemy == (Characters_ITargetable_o *)0x0) goto label_1820f58cf;
    puVar12 = (undefined8 *)il2cpp_runtime_helper_180027220(&local_a8,1);
    local_98._0_8_ = *puVar12;
    local_98.z = *(float *)(puVar12 + 1);
    bVar11 = Controllers_BaseTitanAIController__HasClearLineOfSight
                       (__this,(UnityEngine_Vector3_o *)&local_98,(MethodInfo *)0x0);
    if (bVar11) {
      pCVar21 = (__this->fields)._titan;
      (__this->fields).AIState = 3;
      if (pCVar21 == (Characters_BaseTitan_o *)0x0) goto label_1820f58cf;
      (pCVar21->fields).HasDirection = true;
      pCVar21 = (__this->fields)._titan;
      if (pCVar21 == (Characters_BaseTitan_o *)0x0) goto label_1820f58cf;
      uVar17 = 0;
      bVar11 = Il2CppMethodInitialized_184346aa5 == '\0';
      (pCVar21->fields).IsWalk = (__this->fields).IsRun == false;
      (__this->fields)._moveAngle = 0.0;
      if (bVar11) {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ITargetable);
        Il2CppMethodInitialized_184346aa5 = '\x01';
      }
      pIVar18 = (Il2CppObject *)(__this->fields)._enemy;
      if (pIVar18 == (Il2CppObject *)0x0) goto label_1820f58cf;
      pIVar20 = pIVar18->klass;
      pCVar21 = (__this->fields)._titan;
      uVar6 = (pIVar20->_2).interface_offsets_count;
      if (uVar6 != 0) {
        pIVar19 = (pIVar20->_1).interfaceOffsets;
        do {
          if (pIVar19[uVar17].interfaceType == (Il2CppClass *)TypeInfo_Characters_ITargetable)
          goto label_1820f533c;
          uVar16 = (short)uVar17 + 1;
          uVar17 = (ulonglong)uVar16;
        } while (uVar16 < uVar6);
      }
      goto label_1820f5028;
    }
  }
  Controllers_BaseTitanAIController__MoveToEnemy(__this,true,(MethodInfo *)0x0);
label_1820f58ad:
  Controllers_BaseTitanAIController__UpdateMovementRecovery(__this,(MethodInfo *)0x0);
  (*(__this->klass->vtable)._8_RefreshAgent.methodPtr)(__this,(__this->klass->vtable)._8_RefreshAgent.method);
  return;
label_1820f533c:
  pVVar15 = (VirtualInvokeData *)&pIVar20->vtable[pIVar19[uVar17].offset + 1].methodPtr;
label_1820f5036:
  pUVar14 = (*pVVar15->methodPtr)((UnityEngine_Vector3_o *)&local_a8,pIVar18,pVVar15->method);
  local_98.x = (pUVar14->fields).x;
  local_98.y = (pUVar14->fields).y;
  local_98.z = (pUVar14->fields).z;
  fVar23 = (__this->fields)._enemyDistance;
  pfVar1 = &(__this->fields).ChaseAngleMinRange;
  fVar23 = Controllers_BaseTitanAIController__GetChaseAngle
                     (__this,(UnityEngine_Vector3_o *)&local_98,*pfVar1 <= fVar23 && fVar23 != *pfVar1,
                      (MethodInfo *)0x0);
  if (pCVar21 == (Characters_BaseTitan_o *)0x0) goto label_1820f58cf;
  (pCVar21->fields).TargetAngle = fVar23;
  goto label_1820f58ad;
}


// Controllers.BaseTitanAIController$$ResetMovementRecovery
// il2cpp: void Controllers_BaseTitanAIController__ResetMovementRecovery (Controllers_BaseTitanAIController_o* __this, const MethodInfo* method);
// 0x1820f8920

void Controllers_BaseTitanAIController__ResetMovementRecovery
               (Controllers_BaseTitanAIController_o *__this,MethodInfo *method)

{
  (__this->fields)._lowMovementSpeedTime = 0.0;
  (__this->fields)._recoveryTimeLeft = 0.0;
  (__this->fields)._avoidAngle = 0.0;
  return;
}


// Controllers.BaseTitanAIController$$UpdateMovementRecovery
// il2cpp: void Controllers_BaseTitanAIController__UpdateMovementRecovery (Controllers_BaseTitanAIController_o* __this, const MethodInfo* method);
// 0x1820f8e60
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820f95bd: xor edi, edi
// asm:   0x1820f95bf: mov qword ptr [rbx + 0x11c], rdi
// asm:   0x1820f95c6: mov dword ptr [rbx + 0x130], edi
// asm:   0x1820f95cc: jmp 0x1820f945e

void Controllers_BaseTitanAIController__UpdateMovementRecovery
               (Controllers_BaseTitanAIController_o *__this,MethodInfo *method)

{
  float *pfVar1;
  undefined4 uVar2;
  float fVar3;
  undefined8 uVar4;
  float fVar5;
  Settings_InGameSet_o *pSVar6;
  Settings_InGameTitanSettings_o *pSVar7;
  Settings_BoolSetting_o *pSVar8;
  Characters_BaseTitan_o *pCVar9;
  Utility_BaseComponentCache_o *pUVar10;
  UnityEngine_Transform_o *pUVar11;
  bool bVar12;
  UnityEngine_Vector3_o *pUVar13;
  longlong lVar14;
  undefined8 *puVar15;
  float fVar16;
  float fVar17;
  UnityEngine_Vector3_Fields local_c8;
  UnityEngine_Vector3_o local_b8;
  UnityEngine_RaycastHit_o local_a8 [3];
  
  if (Il2CppMethodInitialized_184346a9b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Controllers_BaseTitanAIController);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ITargetable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_184346a9b = '\x01';
  }
  local_a8[0].fields.m_Normal.fields.y = 0.0;
  local_a8[0].fields.m_Normal.fields.z = 0.0;
  local_a8[0].fields.m_FaceID = 0;
  local_a8[0].fields.m_Point.fields.x = 0.0;
  local_a8[0].fields.m_Point.fields.y = 0.0;
  local_a8[0].fields.m_Point.fields.z = 0.0;
  local_a8[0].fields.m_Normal.fields.x = 0.0;
  local_a8[0].fields.m_Distance = 0.0;
  local_a8[0].fields.m_UV.fields.x = 0.0;
  local_a8[0].fields.m_UV.fields.y = 0.0;
  local_a8[0].fields.m_Collider.fields.m_Data = (UnityEngine_EntityId_Fields)0x0;
  pSVar6 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
  if (((pSVar6 == (Settings_InGameSet_o *)0x0) ||
      (pSVar7 = (pSVar6->fields).Titan, pSVar7 == (Settings_InGameTitanSettings_o *)0x0)) ||
     (pSVar8 = (pSVar7->fields).TitanSmartMovement, pSVar8 == (Settings_BoolSetting_o *)0x0))
  goto label_1820f95d1;
  if ((pSVar8->fields)._value == false) {
label_1820f95bd:
    (__this->fields)._lowMovementSpeedTime = 0.0;
    (__this->fields)._recoveryTimeLeft = 0.0;
    (__this->fields)._avoidAngle = 0.0;
    return;
  }
  pCVar9 = (__this->fields)._titan;
  if (pCVar9 == (Characters_BaseTitan_o *)0x0) goto label_1820f95d1;
  fVar3 = (pCVar9->fields).Size;
  if ((pCVar9->fields).State == 3) {
    fVar3 = fVar3 * (pCVar9->fields).WalkSpeedPerLevel + (pCVar9->fields).WalkSpeedBase;
  }
  else {
    fVar3 = fVar3 * (pCVar9->fields).RunSpeedPerLevel + (pCVar9->fields).RunSpeedBase;
  }
  if ((((__this->fields)._titan)->fields).State == 2) {
    fVar3 = fVar3 * 1.5;
  }
  if ((((__this->fields)._usePathfinding != false) ||
      (bVar12 = (*(__this->klass->vtable)._10_get__stationaryAI.methodPtr)
                          (__this,(__this->klass->vtable)._10_get__stationaryAI.method), bVar12)) ||
     ((bVar12 = (*(__this->klass->vtable)._9_get__scriptedAI.methodPtr)
                          (__this,(__this->klass->vtable)._9_get__scriptedAI.method), bVar12 ||
      (bVar12 = Controllers_BaseTitanAIController__IsCrawler(__this,(MethodInfo *)0x0), bVar12))))
  goto label_1820f95bd;
  pCVar9 = (__this->fields)._titan;
  if (pCVar9 == (Characters_BaseTitan_o *)0x0) goto label_1820f95d1;
  if ((((pCVar9->fields).HasDirection == false) || ((pCVar9->fields).Grounded == false)) ||
     ((bVar12 = Characters_BaseTitan__get_IsMoving(pCVar9,(MethodInfo *)0x0), !bVar12 || (fVar3 <= 0.0))))
  goto label_1820f95bd;
  fVar17 = 1.0;
  if ((__this->fields)._recoveryTimeLeft <= 0.0) {
    if (((__this->fields).AIState == 4) ||
       (((__this->fields).AIState == 3 &&
        (fVar5 = (__this->fields)._enemyDistance, pfVar1 = &(__this->fields)._attackRange,
        *pfVar1 <= fVar5 && fVar5 != *pfVar1)))) {
      if ((__this->fields)._avoidAngle != 0.0) {
        pCVar9 = (__this->fields)._titan;
        if (pCVar9 == (Characters_BaseTitan_o *)0x0) goto label_1820f95d1;
        if ((pCVar9->fields).TargetAngle == (__this->fields)._avoidedTargetAngle) {
          (pCVar9->fields).TargetAngle = (__this->fields)._avoidHeading;
        }
      }
      fVar5 = (__this->fields)._obstacleCheckTimeLeft;
      fVar16 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
      fVar5 = fVar5 - fVar16;
      (__this->fields)._obstacleCheckTimeLeft = fVar5;
      if (fVar5 <= 0.0) {
        pCVar9 = (__this->fields)._titan;
        (__this->fields)._obstacleCheckTimeLeft = 0.2;
        if (pCVar9 == (Characters_BaseTitan_o *)0x0) goto label_1820f95d1;
        fVar5 = Controllers_BaseTitanAIController__GetAvoidAngle
                          (__this,(pCVar9->fields).TargetAngle,fVar3,(MethodInfo *)0x0);
        (__this->fields)._avoidAngle = fVar5;
      }
      if ((__this->fields)._avoidAngle != 0.0) {
        pCVar9 = (__this->fields)._titan;
        if (pCVar9 == (Characters_BaseTitan_o *)0x0) goto label_1820f95d1;
        fVar16 = (pCVar9->fields).TargetAngle + (__this->fields)._avoidAngle;
        (__this->fields)._avoidHeading = (pCVar9->fields).TargetAngle;
        fVar5 = (float)il2cpp_runtime_helper_1804f4110(fVar16 / 360.0);
        fVar16 = fVar16 - fVar5 * 360.0;
        if (fVar16 < 0.0) {
          fVar16 = 0.0;
        }
        else if (360.0 < fVar16) {
          fVar16 = 360.0;
        }
        pCVar9 = (__this->fields)._titan;
        (__this->fields)._avoidedTargetAngle = fVar16;
        if (pCVar9 == (Characters_BaseTitan_o *)0x0) goto label_1820f95d1;
        (pCVar9->fields).TargetAngle = fVar16;
      }
    }
    else {
      (__this->fields)._avoidAngle = 0.0;
    }
    pCVar9 = (__this->fields)._titan;
    if (pCVar9 == (Characters_BaseTitan_o *)0x0) goto label_1820f95d1;
    if (fVar3 * 0.5 <= (pCVar9->fields).CurrentSpeed) {
label_1820f9458:
      (__this->fields)._lowMovementSpeedTime = 0.0;
      return;
    }
    pUVar10 = (pCVar9->fields).Cache;
    if ((pUVar10 == (Utility_BaseComponentCache_o *)0x0) ||
       (pUVar11 = (pUVar10->fields).Transform, pUVar11 == (UnityEngine_Transform_o *)0x0)) goto label_1820f95d1;
    pUVar13 = UnityEngine_Transform__get_eulerAngles
                        ((UnityEngine_Vector3_o *)&local_c8,pUVar11,(MethodInfo *)0x0);
    pCVar9 = (__this->fields)._titan;
    if (pCVar9 == (Characters_BaseTitan_o *)0x0) goto label_1820f95d1;
    fVar3 = UnityEngine_Mathf__DeltaAngle((pUVar13->fields).y,(pCVar9->fields).TargetAngle,(MethodInfo *)0x0);
    if (45.0 < ABS(fVar3)) goto label_1820f9458;
    fVar3 = (__this->fields)._lowMovementSpeedTime;
    fVar5 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
    fVar5 = fVar5 + fVar3;
    (__this->fields)._lowMovementSpeedTime = fVar5;
    if (fVar5 < 0.5) {
      return;
    }
    pCVar9 = (__this->fields)._titan;
    (__this->fields)._lowMovementSpeedTime = 0.0;
    (__this->fields)._recoveryTimeLeft = 2.0;
    if (pCVar9 == (Characters_BaseTitan_o *)0x0) goto label_1820f95d1;
    fVar3 = (pCVar9->fields).TargetAngle;
    (__this->fields)._recoveryHeading = (pCVar9->fields).TargetAngle;
    if ((TypeInfo_Controllers_BaseTitanAIController->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Controllers_BaseTitanAIController);
    }
    pUVar13 = Controllers_BaseTitanAIController__GetHeadingDirection(&local_b8,fVar3,(MethodInfo *)0x0);
    uVar4._0_4_ = (pUVar13->fields).x;
    uVar4._4_4_ = (pUVar13->fields).y;
    fVar3 = (pUVar13->fields).z;
    local_c8._0_8_ = uVar4;
    local_c8.z = fVar3;
    bVar12 = Controllers_BaseTitanAIController__CastObstacle
                       (__this,(UnityEngine_Vector3_o *)&local_c8,0.0,0.5,local_a8,(MethodInfo *)0x0);
    if (bVar12) {
      pUVar13 = UnityEngine_RaycastHit__get_point(&local_b8,local_a8,(MethodInfo *)0x0);
      pCVar9 = (__this->fields)._titan;
      if (((pCVar9 == (Characters_BaseTitan_o *)0x0) ||
          (pUVar10 = (pCVar9->fields).Cache, pUVar10 == (Utility_BaseComponentCache_o *)0x0)) ||
         (pUVar11 = (pUVar10->fields).Transform, pUVar11 == (UnityEngine_Transform_o *)0x0))
      goto label_1820f95d1;
      uVar2 = (pUVar13->fields).x;
      fVar5 = (pUVar13->fields).z;
      pUVar13 = UnityEngine_Transform__get_position(&local_b8,pUVar11,(MethodInfo *)0x0);
      if (0.0 <= ((float)uVar2 - (pUVar13->fields).x) * fVar3 - (fVar5 - (pUVar13->fields).z) * (float)uVar4)
      goto label_1820f93a8;
      fVar3 = -1.0;
    }
    else {
      fVar3 = UnityEngine_Random__get_value((MethodInfo *)0x0);
      if (0.5 <= fVar3) {
label_1820f93a8:
        fVar3 = 1.0;
      }
      else {
        fVar3 = -1.0;
      }
    }
    (__this->fields)._avoidAngle = 0.0;
    (__this->fields)._recoveryTurnAngle = -fVar3 * 70.0;
    fVar3 = (__this->fields)._stateTimeLeft;
    pfVar1 = &(__this->fields)._recoveryTimeLeft;
    lVar14 = 0x120;
    if (*pfVar1 <= fVar3 && fVar3 != *pfVar1) {
      lVar14 = 0xf8;
    }
    (__this->fields)._stateTimeLeft = *(float *)((longlong)&__this->klass + lVar14);
  }
  if ((__this->fields).AIState == 4) {
    fVar3 = (__this->fields)._moveToPosition.fields.x;
    fVar5 = (__this->fields)._moveToPosition.fields.y;
    local_c8.z = (__this->fields)._moveToPosition.fields.z;
label_1820f94bc:
    local_c8.y = fVar5;
    local_c8.x = fVar3;
    fVar3 = Controllers_BaseTitanAIController__GetChaseAngle
                      (__this,(UnityEngine_Vector3_o *)&local_c8,false,(MethodInfo *)0x0);
  }
  else {
    fVar3 = (__this->fields)._recoveryHeading;
    if ((((__this->fields).AIState == 3) || ((__this->fields).AIState == 6)) &&
       (bVar12 = Controllers_BaseAIController__IsValidTarget((__this->fields)._enemy,(MethodInfo *)0x0),
       bVar12)) {
      if ((__this->fields)._enemy == (Characters_ITargetable_o *)0x0) goto label_1820f95d1;
      puVar15 = (undefined8 *)il2cpp_runtime_helper_180027220(&local_b8,1);
      fVar3 = (float)*puVar15;
      fVar5 = (float)((ulonglong)*puVar15 >> 0x20);
      local_c8.z = *(float *)(puVar15 + 1);
      goto label_1820f94bc;
    }
  }
  fVar5 = (__this->fields)._recoveryTimeLeft;
  fVar16 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
  fVar5 = fVar5 - fVar16;
  (__this->fields)._recoveryTimeLeft = fVar5;
  if (fVar5 <= 0.0) {
    pCVar9 = (__this->fields)._titan;
    if (pCVar9 == (Characters_BaseTitan_o *)0x0) goto label_1820f95d1;
    (pCVar9->fields).TargetAngle = fVar3;
    (__this->fields)._lowMovementSpeedTime = 0.0;
    (__this->fields)._recoveryTimeLeft = 0.0;
    (__this->fields)._avoidAngle = 0.0;
    (__this->fields)._stateTimeLeft = 0.0;
  }
  else {
    fVar5 = (__this->fields)._recoveryTurnAngle;
    fVar16 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
    if (ABS(0.0 - fVar5) <= fVar16 * 10.0) {
      fVar5 = 0.0;
    }
    else {
      if (0.0 - fVar5 < 0.0) {
        fVar17 = -1.0;
      }
      fVar5 = fVar17 * fVar16 * 10.0 + fVar5;
    }
    (__this->fields)._recoveryTurnAngle = fVar5;
    pCVar9 = (__this->fields)._titan;
    if (pCVar9 == (Characters_BaseTitan_o *)0x0) {
label_1820f95d1:
      ThrowNullReferenceException();
    }
    fVar3 = UnityEngine_Mathf__Repeat(fVar5 + fVar3,360.0,(MethodInfo *)0x0);
    (pCVar9->fields).TargetAngle = fVar3;
  }
  return;
}


// Controllers.BaseTitanAIController$$ApplyObstacleAvoidance
// il2cpp: void Controllers_BaseTitanAIController__ApplyObstacleAvoidance (Controllers_BaseTitanAIController_o* __this, float speed, const MethodInfo* method);
// 0x1820f3c60

void Controllers_BaseTitanAIController__ApplyObstacleAvoidance
               (Controllers_BaseTitanAIController_o *__this,float speed,MethodInfo *method)

{
  float *pfVar1;
  Characters_BaseTitan_o *pCVar2;
  float fVar3;
  float fVar4;
  
  if (((__this->fields).AIState != 4) &&
     (((__this->fields).AIState != 3 ||
      (fVar4 = (__this->fields)._enemyDistance, pfVar1 = &(__this->fields)._attackRange,
      fVar4 < *pfVar1 || fVar4 == *pfVar1)))) {
    (__this->fields)._avoidAngle = 0.0;
    return;
  }
  if ((__this->fields)._avoidAngle != 0.0) {
    pCVar2 = (__this->fields)._titan;
    if (pCVar2 == (Characters_BaseTitan_o *)0x0) goto label_1820f3df4;
    if ((pCVar2->fields).TargetAngle == (__this->fields)._avoidedTargetAngle) {
      (pCVar2->fields).TargetAngle = (__this->fields)._avoidHeading;
    }
  }
  fVar4 = (__this->fields)._obstacleCheckTimeLeft;
  fVar3 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
  fVar4 = fVar4 - fVar3;
  (__this->fields)._obstacleCheckTimeLeft = fVar4;
  if (fVar4 <= 0.0) {
    pCVar2 = (__this->fields)._titan;
    (__this->fields)._obstacleCheckTimeLeft = 0.2;
    if (pCVar2 == (Characters_BaseTitan_o *)0x0) goto label_1820f3df4;
    fVar4 = Controllers_BaseTitanAIController__GetAvoidAngle
                      (__this,(pCVar2->fields).TargetAngle,speed,(MethodInfo *)0x0);
    (__this->fields)._avoidAngle = fVar4;
  }
  fVar4 = (__this->fields)._avoidAngle;
  if (fVar4 == 0.0) {
    return;
  }
  pCVar2 = (__this->fields)._titan;
  if (pCVar2 != (Characters_BaseTitan_o *)0x0) {
    fVar4 = (pCVar2->fields).TargetAngle + fVar4;
    (__this->fields)._avoidHeading = (pCVar2->fields).TargetAngle;
    fVar3 = (float)il2cpp_runtime_helper_1804f4110(fVar4 / 360.0);
    fVar4 = fVar4 - fVar3 * 360.0;
    if (fVar4 < 0.0) {
      fVar3 = 0.0;
    }
    else {
      fVar3 = 360.0;
      if (fVar4 <= 360.0) {
        fVar3 = fVar4;
      }
    }
    pCVar2 = (__this->fields)._titan;
    (__this->fields)._avoidedTargetAngle = fVar3;
    if (pCVar2 != (Characters_BaseTitan_o *)0x0) {
      (pCVar2->fields).TargetAngle = fVar3;
      return;
    }
  }
label_1820f3df4:
  ThrowNullReferenceException();
}


// Controllers.BaseTitanAIController$$GetAvoidAngle
// il2cpp: float Controllers_BaseTitanAIController__GetAvoidAngle (Controllers_BaseTitanAIController_o* __this, float heading, float speed, const MethodInfo* method);
// 0x1820f59e0
// asm: 8 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820f5da3: movaps xmm0, xmm6
// asm:   0x1820f5da6: mov rdi, qword ptr [rsp + 0x160]
// asm:   0x1820f5dae: movaps xmm8, xmmword ptr [rsp + 0x110]
// asm:   0x1820f5db7: movaps xmm7, xmmword ptr [rsp + 0x120]
// asm:   0x1820f5dbf: mov r14, qword ptr [rsp + 0x168]
// asm:   0x1820f5dc7: movaps xmm11, xmmword ptr [rsp + 0xe0]
// asm:   0x1820f5dd0: movaps xmm6, xmmword ptr [rsp + 0x130]
// asm:   0x1820f5dd8: movaps xmm9, xmmword ptr [rsp + 0x100]

float Controllers_BaseTitanAIController__GetAvoidAngle
                (Controllers_BaseTitanAIController_o *__this,float heading,float speed,MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int iVar4;
  Characters_BaseTitan_o *pCVar5;
  Utility_BaseComponentCache_o *pUVar6;
  UnityEngine_Transform_o *__this_00;
  System_Single_array *pSVar7;
  bool bVar8;
  UnityEngine_Vector3_o *pUVar9;
  uint uVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float lookAhead;
  UnityEngine_Vector3_Fields local_128;
  UnityEngine_Vector3_o local_118;
  undefined1 local_108 [48];
  UnityEngine_RaycastHit_o local_d8 [4];
  
  if (Il2CppMethodInitialized_184346a9c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Controllers_BaseTitanAIController);
    Il2CppMethodInitialized_184346a9c = '\x01';
  }
  lookAhead = speed * 0.6;
  local_108._16_4_ = 0.0;
  local_108._20_4_ = 0.0;
  local_108._24_4_ = 0.0;
  local_d8[0].fields.m_Normal.fields.y = 0.0;
  local_d8[0].fields.m_Normal.fields.z = 0.0;
  local_d8[0].fields.m_FaceID = 0;
  local_108._0_4_ = 0;
  local_108._4_4_ = 0.0;
  local_108._8_4_ = 0.0;
  local_108._12_4_ = 0.0;
  local_108._28_4_ = 0.0;
  local_108._32_4_ = 0.0;
  local_108._36_4_ = 0;
  local_108._40_4_ = 0;
  local_d8[0].fields.m_Point.fields.x = 0.0;
  local_d8[0].fields.m_Point.fields.y = 0.0;
  local_d8[0].fields.m_Point.fields.z = 0.0;
  local_d8[0].fields.m_Normal.fields.x = 0.0;
  local_d8[0].fields.m_Distance = 0.0;
  local_d8[0].fields.m_UV.fields.x = 0.0;
  local_d8[0].fields.m_UV.fields.y = 0.0;
  local_d8[0].fields.m_Collider.fields.m_Data = (UnityEngine_EntityId_Fields)0x0;
  if ((TypeInfo_Controllers_BaseTitanAIController->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Controllers_BaseTitanAIController);
  }
  pUVar9 = Controllers_BaseTitanAIController__GetHeadingDirection(&local_118,heading,(MethodInfo *)0x0);
  uVar3._0_4_ = (pUVar9->fields).x;
  uVar3._4_4_ = (pUVar9->fields).y;
  fVar15 = (pUVar9->fields).z;
  local_128._0_8_ = uVar3;
  local_128.z = fVar15;
  bVar8 = Controllers_BaseTitanAIController__CastObstacle
                    (__this,(UnityEngine_Vector3_o *)&local_128,lookAhead,1.0,
                     (UnityEngine_RaycastHit_o *)local_108,(MethodInfo *)0x0);
  if (!bVar8) {
    return 0.0;
  }
  fVar16 = (__this->fields)._avoidAngle;
  if (fVar16 != 0.0) {
    if ((TypeInfo_Controllers_BaseTitanAIController->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Controllers_BaseTitanAIController);
    }
    pUVar9 = Controllers_BaseTitanAIController__GetHeadingDirection
                       (&local_118,fVar16 + heading,(MethodInfo *)0x0);
    local_128.x = (pUVar9->fields).x;
    local_128.y = (pUVar9->fields).y;
    local_128.z = (pUVar9->fields).z;
    bVar8 = Controllers_BaseTitanAIController__CastObstacle
                      (__this,(UnityEngine_Vector3_o *)&local_128,lookAhead,1.0,local_d8,(MethodInfo *)0x0);
    if (!bVar8) {
      return (__this->fields)._avoidAngle;
    }
  }
  fVar16 = (__this->fields)._avoidAngle;
  if (fVar16 == 0.0) {
    pUVar9 = UnityEngine_RaycastHit__get_point
                       (&local_118,(UnityEngine_RaycastHit_o *)local_108,(MethodInfo *)0x0);
    pCVar5 = (__this->fields)._titan;
    if (((pCVar5 == (Characters_BaseTitan_o *)0x0) ||
        (pUVar6 = (pCVar5->fields).Cache, pUVar6 == (Utility_BaseComponentCache_o *)0x0)) ||
       (__this_00 = (pUVar6->fields).Transform, __this_00 == (UnityEngine_Transform_o *)0x0))
    goto label_1820f5e1d;
    uVar2 = (pUVar9->fields).x;
    fVar16 = (pUVar9->fields).z;
    pUVar9 = UnityEngine_Transform__get_position(&local_118,__this_00,(MethodInfo *)0x0);
    if (((float)uVar2 - (pUVar9->fields).x) * fVar15 - (fVar16 - (pUVar9->fields).z) * (float)uVar3 < 0.0) {
      fVar15 = 1.0;
    }
    else {
      fVar15 = -1.0;
    }
  }
  else if (fVar16 < 0.0) {
    fVar15 = -1.0;
  }
  else {
    fVar15 = 1.0;
  }
  if ((TypeInfo_Controllers_BaseTitanAIController->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Controllers_BaseTitanAIController);
  }
  pSVar7 = TypeInfo_Controllers_BaseTitanAIController->static_fields->AvoidProbeAngles;
  if (pSVar7 == (System_Single_array *)0x0) {
label_1820f5e1d:
    ThrowNullReferenceException();
  }
  iVar4 = (int)pSVar7->max_length;
  if (iVar4 - 1U < (uint)pSVar7->max_length) {
    fVar16 = pSVar7->m_Items[(longlong)iVar4 + -1];
    fVar12 = UnityEngine_Touch__get_deltaTime((UnityEngine_Touch_o *)local_108,(MethodInfo *)0x0);
    pSVar7 = TypeInfo_Controllers_BaseTitanAIController->static_fields->AvoidProbeAngles;
    if (pSVar7 == (System_Single_array *)0x0) goto label_1820f5e1d;
    fVar16 = fVar16 * fVar15;
    uVar11 = 0;
    while( true ) {
      if ((int)pSVar7->max_length <= (int)uVar11) {
        return fVar16;
      }
      if ((uint)pSVar7->max_length <= uVar11) break;
      fVar1 = pSVar7->m_Items[(int)uVar11];
      uVar10 = 0;
      do {
        fVar14 = fVar15;
        if (uVar10 != 0) {
          fVar14 = -fVar15;
        }
        fVar14 = fVar14 * fVar1;
        if ((TypeInfo_Controllers_BaseTitanAIController->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Controllers_BaseTitanAIController);
        }
        pUVar9 = Controllers_BaseTitanAIController__GetHeadingDirection
                           (&local_118,heading + fVar14,(MethodInfo *)0x0);
        local_128.x = (pUVar9->fields).x;
        local_128.y = (pUVar9->fields).y;
        local_128.z = (pUVar9->fields).z;
        bVar8 = Controllers_BaseTitanAIController__CastObstacle
                          (__this,(UnityEngine_Vector3_o *)&local_128,lookAhead,1.0,
                           (UnityEngine_RaycastHit_o *)local_108,(MethodInfo *)0x0);
        if (!bVar8) {
          return fVar14;
        }
        fVar13 = UnityEngine_Touch__get_deltaTime((UnityEngine_Touch_o *)local_108,(MethodInfo *)0x0);
        if (fVar12 < fVar13) {
          fVar12 = UnityEngine_Touch__get_deltaTime((UnityEngine_Touch_o *)local_108,(MethodInfo *)0x0);
          fVar16 = fVar14;
        }
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 < 2);
      uVar11 = uVar11 + 1;
    }
  }
  ThrowIndexOutOfRangeException();
}


// Controllers.BaseTitanAIController$$CastObstacle
// il2cpp: bool Controllers_BaseTitanAIController__CastObstacle (Controllers_BaseTitanAIController_o* __this, UnityEngine_Vector3_o direction, float lookAhead, float radiusScale, UnityEngine_RaycastHit_o* hit, const MethodInfo* method);
// 0x1820f41a0

bool Controllers_BaseTitanAIController__CastObstacle
               (Controllers_BaseTitanAIController_o *__this,UnityEngine_Vector3_o *direction,float lookAhead,
               float radiusScale,UnityEngine_RaycastHit_o *hit,MethodInfo *method)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  Characters_BaseTitan_o *pCVar12;
  Utility_BaseComponentCache_o *pUVar13;
  UnityEngine_Transform_o *pUVar14;
  UnityEngine_CapsuleCollider_o *pUVar15;
  UnityEngine_Vector3_StaticFields *pUVar16;
  bool bVar17;
  bool bVar18;
  int32_t layerMask;
  UnityEngine_Vector3_o *pUVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float radius;
  float fVar25;
  float fVar26;
  UnityEngine_Vector3_Fields local_d8;
  UnityEngine_Vector3_Fields local_c8;
  UnityEngine_Vector3_Fields local_b8 [14];
  
  if (Il2CppMethodInitialized_184346a9d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Physics);
    Il2CppMethodInitialized_184346a9d = '\x01';
  }
  pCVar12 = (__this->fields)._titan;
  if (((pCVar12 != (Characters_BaseTitan_o *)0x0) &&
      (pUVar13 = (pCVar12->fields).Cache, pUVar13 != (Utility_BaseComponentCache_o *)0x0)) &&
     (pUVar14 = (pUVar13->fields).Transform, pUVar14 != (UnityEngine_Transform_o *)0x0)) {
    pUVar19 = UnityEngine_Transform__get_lossyScale
                        ((UnityEngine_Vector3_o *)local_b8,pUVar14,(MethodInfo *)0x0);
    pUVar15 = (__this->fields)._mainCollider;
    if (pUVar15 != (UnityEngine_CapsuleCollider_o *)0x0) {
      fVar22 = (pUVar19->fields).x;
      fVar20 = UnityEngine_CapsuleCollider__get_radius(pUVar15,(MethodInfo *)0x0);
      pCVar12 = (__this->fields)._titan;
      if (((pCVar12 != (Characters_BaseTitan_o *)0x0) &&
          (pUVar13 = (pCVar12->fields).Cache, pUVar13 != (Utility_BaseComponentCache_o *)0x0)) &&
         (pUVar14 = (pUVar13->fields).Transform, pUVar14 != (UnityEngine_Transform_o *)0x0)) {
        fVar20 = fVar20 * fVar22;
        radius = fVar20 * radiusScale;
        pUVar19 = UnityEngine_Transform__get_position
                            ((UnityEngine_Vector3_o *)local_b8,pUVar14,(MethodInfo *)0x0);
        uVar4 = (direction->fields).x;
        uVar8 = (direction->fields).y;
        uVar5 = (pUVar19->fields).x;
        uVar9 = (pUVar19->fields).y;
        fVar26 = (pUVar19->fields).z;
        fVar23 = (float)uVar5 - (float)uVar4 * fVar20;
        fVar24 = (float)uVar9 - (float)uVar8 * fVar20;
        if (Il2CppMethodInitialized_18433de5c == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_18433de5c = '\x01';
        }
        fVar25 = fVar20 + radius;
        pUVar16 = TypeInfo_UnityEngine_Vector3->static_fields;
        uVar6 = (pUVar16->upVector).fields.x;
        uVar10 = (pUVar16->upVector).fields.y;
        fVar2 = (pUVar16->upVector).fields.z;
        if (Il2CppMethodInitialized_18433de5c == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_18433de5c = '\x01';
        }
        pUVar15 = (__this->fields)._mainCollider;
        if (pUVar15 != (UnityEngine_CapsuleCollider_o *)0x0) {
          pUVar16 = TypeInfo_UnityEngine_Vector3->static_fields;
          uVar7 = (pUVar16->upVector).fields.x;
          uVar11 = (pUVar16->upVector).fields.y;
          fVar26 = fVar26 - fVar20 * (direction->fields).z;
          fVar3 = (pUVar16->upVector).fields.z;
          fVar21 = UnityEngine_CapsuleCollider__get_height(pUVar15,(MethodInfo *)0x0);
          fVar22 = fVar21 * fVar22 - radius;
          if (fVar22 <= fVar20 + radius) {
            fVar22 = fVar20 + radius;
          }
          layerMask = UnityEngine_Touch__get_fingerId
                                ((UnityEngine_Touch_o *)&(__this->fields)._losLayer,(MethodInfo *)0x0);
          if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
          }
          local_d8.z = (direction->fields).z;
          local_d8.x = (direction->fields).x;
          local_d8.y = (direction->fields).y;
          local_c8.y = (float)uVar11 * fVar22 + fVar24;
          local_c8.x = (float)uVar7 * fVar22 + fVar23;
          local_b8[0].y = (float)uVar10 * fVar25 + fVar24;
          local_b8[0].x = (float)uVar6 * fVar25 + fVar23;
          local_c8.z = fVar3 * fVar22 + fVar26;
          local_b8[0].z = fVar2 * fVar25 + fVar26;
          bVar17 = UnityEngine_Physics__CapsuleCast
                             ((UnityEngine_Vector3_o *)local_b8,(UnityEngine_Vector3_o *)&local_c8,radius,
                              (UnityEngine_Vector3_o *)&local_d8,hit,fVar20 + fVar20 + lookAhead,layerMask,1,
                              (MethodInfo *)0x0);
          bVar18 = false;
          if (bVar17) {
            pUVar19 = UnityEngine_RaycastHit__get_normal
                                ((UnityEngine_Vector3_o *)local_b8,hit,(MethodInfo *)0x0);
            pfVar1 = &(pUVar19->fields).y;
            bVar18 = *pfVar1 <= 0.6 && *pfVar1 != 0.6;
          }
          return bVar18;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Controllers.BaseTitanAIController$$GetObstacleSide
// il2cpp: float Controllers_BaseTitanAIController__GetObstacleSide (Controllers_BaseTitanAIController_o* __this, UnityEngine_Vector3_o direction, UnityEngine_Vector3_o point, const MethodInfo* method);
// 0x1820f6360

float Controllers_BaseTitanAIController__GetObstacleSide
                (Controllers_BaseTitanAIController_o *__this,UnityEngine_Vector3_o *direction,
                UnityEngine_Vector3_o *point,MethodInfo *method)

{
  Characters_BaseTitan_o *pCVar1;
  Utility_BaseComponentCache_o *pUVar2;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_o *pUVar3;
  UnityEngine_Vector3_o local_18;
  
  pCVar1 = (__this->fields)._titan;
  if (((pCVar1 != (Characters_BaseTitan_o *)0x0) &&
      (pUVar2 = (pCVar1->fields).Cache, pUVar2 != (Utility_BaseComponentCache_o *)0x0)) &&
     (__this_00 = (pUVar2->fields).Transform, __this_00 != (UnityEngine_Transform_o *)0x0)) {
    pUVar3 = UnityEngine_Transform__get_position(&local_18,__this_00,(MethodInfo *)0x0);
    if (0.0 <= ((point->fields).x - (pUVar3->fields).x) * (direction->fields).z -
               ((point->fields).z - (pUVar3->fields).z) * (direction->fields).x) {
      return 1.0;
    }
    return -1.0;
  }
  ThrowNullReferenceException();
}


// Controllers.BaseTitanAIController$$GetHeadingDirection
// il2cpp: UnityEngine_Vector3_o Controllers_BaseTitanAIController__GetHeadingDirection (float heading, const MethodInfo* method);
// 0x1820f62a0

UnityEngine_Vector3_o *
Controllers_BaseTitanAIController__GetHeadingDirection
          (UnityEngine_Vector3_o *__return_storage_ptr__,float heading,MethodInfo *method)

{
  float fVar1;
  UnityEngine_Vector3_StaticFields *pUVar2;
  float fVar3;
  UnityEngine_Quaternion_o *pUVar4;
  UnityEngine_Vector3_o *pUVar5;
  UnityEngine_Vector3_Fields local_48;
  UnityEngine_Vector3_o local_38;
  UnityEngine_Quaternion_Fields local_28 [2];
  
  local_48._0_8_ = (ulonglong)(uint)(heading * 0.017453292) << 0x20;
  local_48.z = 0.0;
  pUVar4 = UnityEngine_Quaternion__Internal_FromEulerRad
                     ((UnityEngine_Quaternion_o *)local_28,(UnityEngine_Vector3_o *)&local_48,
                      (MethodInfo *)0x0);
  local_28[0].x = (pUVar4->fields).x;
  local_28[0].y = (pUVar4->fields).y;
  local_28[0].z = (pUVar4->fields).z;
  local_28[0].w = (pUVar4->fields).w;
  if (Il2CppMethodInitialized_18433de5d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433de5d = '\x01';
  }
  pUVar2 = TypeInfo_UnityEngine_Vector3->static_fields;
  local_48.x = (pUVar2->forwardVector).fields.x;
  local_48.y = (pUVar2->forwardVector).fields.y;
  local_48.z = (pUVar2->forwardVector).fields.z;
  pUVar5 = UnityEngine_Quaternion__op_Multiply_2f08cb0
                     (&local_38,(UnityEngine_Quaternion_o *)local_28,(UnityEngine_Vector3_o *)&local_48,
                      (MethodInfo *)0x0);
  fVar3 = (pUVar5->fields).y;
  fVar1 = (pUVar5->fields).z;
  (__return_storage_ptr__->fields).x = (pUVar5->fields).x;
  (__return_storage_ptr__->fields).y = fVar3;
  (__return_storage_ptr__->fields).z = fVar1;
  return __return_storage_ptr__;
}


// Controllers.BaseTitanAIController$$RefreshAgent
// il2cpp: void Controllers_BaseTitanAIController__RefreshAgent (Controllers_BaseTitanAIController_o* __this, const MethodInfo* method);
// 0x1820f8900

void Controllers_BaseTitanAIController__RefreshAgent
               (Controllers_BaseTitanAIController_o *__this,MethodInfo *method)

{
  (__this->fields).SmartAttack = false;
  Controllers_BaseAIController__RefreshAgent((Controllers_BaseAIController_o *)__this,(MethodInfo *)0x0);
  return;
}


// Controllers.BaseTitanAIController$$GetEnemyAngle
// il2cpp: float Controllers_BaseTitanAIController__GetEnemyAngle (Controllers_BaseTitanAIController_o* __this, Characters_ITargetable_o* enemy, const MethodInfo* method);
// 0x1820f6070

float Controllers_BaseTitanAIController__GetEnemyAngle
                (Controllers_BaseTitanAIController_o *__this,Characters_ITargetable_o *enemy,
                MethodInfo *method)

{
  undefined4 uVar1;
  undefined8 uVar2;
  float fVar3;
  Characters_BaseCharacter_o *pCVar4;
  Utility_BaseComponentCache_o *pUVar5;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_Vector3_StaticFields *pUVar7;
  void *pvVar8;
  float *pfVar9;
  UnityEngine_Vector3_o *pUVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  ulonglong local_68;
  float local_60;
  UnityEngine_Vector3_Fields local_58 [6];
  
  if (Il2CppMethodInitialized_184346a9e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ITargetable);
    Il2CppMethodInitialized_184346a9e = '\x01';
  }
  local_68 = 0;
  local_60 = 0.0;
  if (enemy == (Characters_ITargetable_o *)0x0) {
label_1820f6148:
    pCVar4 = (__this->fields)._character;
    if (((pCVar4 == (Characters_BaseCharacter_o *)0x0) ||
        (pUVar5 = (pCVar4->fields).Cache, pUVar5 == (Utility_BaseComponentCache_o *)0x0)) ||
       (pUVar6 = (pUVar5->fields).Transform, pUVar6 == (UnityEngine_Transform_o *)0x0)) goto label_1820f6297;
    pUVar10 = UnityEngine_Transform__get_forward((UnityEngine_Vector3_o *)local_58,pUVar6,(MethodInfo *)0x0);
    uVar1 = (pUVar10->fields).x;
    fVar12 = (pUVar10->fields).z;
    local_68._0_4_ = (float)uVar1;
  }
  else {
    pvVar8 = InterfaceInvoker0_Invoke(2,(Il2CppClass *)TypeInfo_Characters_ITargetable,(Il2CppObject *)enemy);
    if ((char)pvVar8 == '\0') goto label_1820f6148;
    pfVar9 = (float *)il2cpp_runtime_helper_180027220(local_58,1,TypeInfo_Characters_ITargetable,enemy);
    pCVar4 = (__this->fields)._character;
    if (((pCVar4 == (Characters_BaseCharacter_o *)0x0) ||
        (pUVar5 = (pCVar4->fields).Cache, pUVar5 == (Utility_BaseComponentCache_o *)0x0)) ||
       (pUVar6 = (pUVar5->fields).Transform, pUVar6 == (UnityEngine_Transform_o *)0x0)) goto label_1820f6297;
    fVar11 = *pfVar9;
    fVar12 = pfVar9[2];
    pUVar10 = UnityEngine_Transform__get_position((UnityEngine_Vector3_o *)local_58,pUVar6,(MethodInfo *)0x0);
    local_68._0_4_ = fVar11 - (pUVar10->fields).x;
    fVar12 = fVar12 - (pUVar10->fields).z;
  }
  fVar11 = (float)local_68;
  pCVar4 = (__this->fields)._character;
  local_68 = (ulonglong)(uint)(float)local_68;
  local_60 = fVar12;
  if (((pCVar4 != (Characters_BaseCharacter_o *)0x0) &&
      (pUVar5 = (pCVar4->fields).Cache, pUVar5 != (Utility_BaseComponentCache_o *)0x0)) &&
     (pUVar6 = (pUVar5->fields).Transform, pUVar6 != (UnityEngine_Transform_o *)0x0)) {
    pUVar10 = UnityEngine_Transform__get_forward((UnityEngine_Vector3_o *)local_58,pUVar6,(MethodInfo *)0x0);
    uVar2._0_4_ = (pUVar10->fields).x;
    uVar2._4_4_ = (pUVar10->fields).y;
    fVar3 = (pUVar10->fields).z;
    if (Il2CppMethodInitialized_18433de5f == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_18433de5f = '\x01';
    }
    local_60 = (float)il2cpp_runtime_helper_180546a40(&local_68,0);
    if (local_60 <= 1e-05) {
      pUVar7 = TypeInfo_UnityEngine_Vector3->static_fields;
      fVar11 = (pUVar7->zeroVector).fields.x;
      fVar13 = (pUVar7->zeroVector).fields.y;
      local_60 = (pUVar7->zeroVector).fields.z;
    }
    else {
      fVar11 = fVar11 / local_60;
      fVar13 = 0.0 / local_60;
      local_60 = fVar12 / local_60;
    }
    local_68 = CONCAT44(fVar13,fVar11);
    local_58[0]._0_8_ = uVar2;
    local_58[0].z = fVar3;
    fVar12 = (float)il2cpp_runtime_helper_181d9e200(local_58,&local_68,0);
    return ABS(fVar12);
  }
label_1820f6297:
  ThrowNullReferenceException();
}


// Controllers.BaseTitanAIController$$GetChaseAngle
// il2cpp: float Controllers_BaseTitanAIController__GetChaseAngle (Controllers_BaseTitanAIController_o* __this, UnityEngine_Vector3_o position, bool useMoveAngle, const MethodInfo* method);
// 0x1820f5f40

float Controllers_BaseTitanAIController__GetChaseAngle
                (Controllers_BaseTitanAIController_o *__this,UnityEngine_Vector3_o *position,bool useMoveAngle
                ,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  Characters_BaseCharacter_o *pCVar5;
  Utility_BaseComponentCache_o *pUVar6;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_StaticFields *pUVar7;
  UnityEngine_Vector3_o *pUVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  UnityEngine_Vector3_Fields local_48 [5];
  
  pCVar5 = (__this->fields)._character;
  if (((pCVar5 != (Characters_BaseCharacter_o *)0x0) &&
      (pUVar6 = (pCVar5->fields).Cache, pUVar6 != (Utility_BaseComponentCache_o *)0x0)) &&
     (__this_00 = (pUVar6->fields).Transform, __this_00 != (UnityEngine_Transform_o *)0x0)) {
    pUVar8 = UnityEngine_Transform__get_position
                       ((UnityEngine_Vector3_o *)local_48,__this_00,(MethodInfo *)0x0);
    uVar1 = (position->fields).x;
    uVar3 = (position->fields).y;
    uVar2 = (pUVar8->fields).x;
    uVar4 = (pUVar8->fields).y;
    fVar10 = (position->fields).z - (pUVar8->fields).z;
    local_48[0].y = (float)uVar3 - (float)uVar4;
    local_48[0].x = (float)uVar1 - (float)uVar2;
    local_48[0].z = fVar10;
    if (Il2CppMethodInitialized_18433de5f == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_18433de5f = '\x01';
    }
    local_48[0].z = (float)il2cpp_runtime_helper_180546a40(local_48,0);
    if (local_48[0].z <= 1e-05) {
      pUVar7 = TypeInfo_UnityEngine_Vector3->static_fields;
      fVar9 = (pUVar7->zeroVector).fields.x;
      fVar11 = (pUVar7->zeroVector).fields.y;
      local_48[0].z = (pUVar7->zeroVector).fields.z;
    }
    else {
      fVar9 = ((float)uVar1 - (float)uVar2) / local_48[0].z;
      fVar11 = ((float)uVar3 - (float)uVar4) / local_48[0].z;
      local_48[0].z = fVar10 / local_48[0].z;
    }
    local_48[0].y = fVar11;
    local_48[0].x = fVar9;
    fVar10 = Controllers_BaseTitanAIController__GetChaseAngleGivenDirection
                       (__this,(UnityEngine_Vector3_o *)local_48,useMoveAngle,(MethodInfo *)0x0);
    return fVar10;
  }
  ThrowNullReferenceException();
}


// Controllers.BaseTitanAIController$$GetChaseAngleGivenDirection
// il2cpp: float Controllers_BaseTitanAIController__GetChaseAngleGivenDirection (Controllers_BaseTitanAIController_o* __this, UnityEngine_Vector3_o direction, bool useMoveAngle, const MethodInfo* method);
// 0x1820f5e30

float Controllers_BaseTitanAIController__GetChaseAngleGivenDirection
                (Controllers_BaseTitanAIController_o *__this,UnityEngine_Vector3_o *direction,
                bool useMoveAngle,MethodInfo *method)

{
  UnityEngine_Vector3_StaticFields *pUVar1;
  Characters_BaseTitan_o *pCVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  UnityEngine_Vector3_Fields local_18;
  
  if (Il2CppMethodInitialized_18433dbea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433dbea = '\x01';
  }
  pUVar1 = TypeInfo_UnityEngine_Vector3->static_fields;
  fVar4 = (direction->fields).x - (pUVar1->zeroVector).fields.x;
  fVar5 = (direction->fields).y - (pUVar1->zeroVector).fields.y;
  fVar3 = (direction->fields).z - (pUVar1->zeroVector).fields.z;
  if (fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3 < 9.9999994e-11) {
    pCVar2 = (__this->fields)._titan;
    if (pCVar2 == (Characters_BaseTitan_o *)0x0) {
      ThrowNullReferenceException();
    }
    fVar3 = (pCVar2->fields).TargetAngle;
  }
  else {
    local_18.x = (direction->fields).x;
    local_18.y = (direction->fields).y;
    local_18.z = (direction->fields).z;
    fVar3 = Controllers_BaseAIController__GetTargetAngle
                      ((Controllers_BaseAIController_o *)__this,(UnityEngine_Vector3_o *)&local_18,
                       (MethodInfo *)0x0);
  }
  if (useMoveAngle) {
    fVar3 = fVar3 + (__this->fields)._moveAngle;
  }
  if (360.0 < fVar3) {
    fVar3 = fVar3 + -360.0;
  }
  if (fVar3 < 0.0) {
    fVar3 = fVar3 + 360.0;
  }
  return fVar3;
}


// Controllers.BaseTitanAIController$$GetAgentNavAngle
// il2cpp: float Controllers_BaseTitanAIController__GetAgentNavAngle (Controllers_BaseTitanAIController_o* __this, UnityEngine_Vector3_o target, bool useMoveAngle, const MethodInfo* method);
// 0x1820f5940

float Controllers_BaseTitanAIController__GetAgentNavAngle
                (Controllers_BaseTitanAIController_o *__this,UnityEngine_Vector3_o *target,bool useMoveAngle,
                MethodInfo *method)

{
  UnityEngine_Vector3_o *pUVar1;
  float fVar2;
  UnityEngine_Vector3_Fields local_28;
  UnityEngine_Vector3_o local_18;
  
  local_28.x = (target->fields).x;
  local_28.y = (target->fields).y;
  local_28.z = (target->fields).z;
  pUVar1 = Controllers_BaseAIController__GetAgentNavDirection
                     (&local_18,(Controllers_BaseAIController_o *)__this,(UnityEngine_Vector3_o *)&local_28,
                      (MethodInfo *)0x0);
  local_28.x = (pUVar1->fields).x;
  local_28.y = (pUVar1->fields).y;
  local_28.z = (pUVar1->fields).z;
  fVar2 = Controllers_BaseTitanAIController__GetChaseAngleGivenDirection
                    (__this,(UnityEngine_Vector3_o *)&local_28,useMoveAngle,(MethodInfo *)0x0);
  return fVar2;
}


// Controllers.BaseTitanAIController$$HasClearLineOfSight
// il2cpp: bool Controllers_BaseTitanAIController__HasClearLineOfSight (Controllers_BaseTitanAIController_o* __this, UnityEngine_Vector3_o target, const MethodInfo* method);
// 0x1820f7060
// asm: 11 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820f73ee: movaps xmm12, xmmword ptr [rsp + 0x70]
// asm:   0x1820f73f4: movaps xmm13, xmmword ptr [rsp + 0x60]
// asm:   0x1820f73fa: movaps xmm14, xmmword ptr [rsp + 0x50]
// asm:   0x1820f7400: movaps xmm11, xmmword ptr [rsp + 0x80]
// asm:   0x1820f7409: movaps xmm10, xmmword ptr [rsp + 0x90]
// asm:   0x1820f7412: movaps xmm9, xmmword ptr [rsp + 0xa0]
// asm:   0x1820f741b: movaps xmm8, xmmword ptr [rsp + 0xb0]
// asm:   0x1820f7424: movaps xmm7, xmmword ptr [rsp + 0xc0]
// asm:   0x1820f742c: movaps xmm6, xmmword ptr [rsp + 0xd0]
// asm:   0x1820f7434: mov rdi, qword ptr [rsp + 0xf8]
// asm:   0x1820f743c: movaps xmm15, xmmword ptr [rsp + 0x40]

bool Controllers_BaseTitanAIController__HasClearLineOfSight
               (Controllers_BaseTitanAIController_o *__this,UnityEngine_Vector3_o *target,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  UnityEngine_CapsuleCollider_o *pUVar19;
  Characters_BaseTitan_o *pCVar20;
  Utility_BaseComponentCache_o *pUVar21;
  UnityEngine_Transform_o *pUVar22;
  bool bVar23;
  UnityEngine_Vector3_o *pUVar24;
  float fVar25;
  UnityEngine_Vector3_Fields local_c8;
  UnityEngine_Vector3_Fields local_b8 [14];
  
  if ((__this->fields)._usePathfinding == false) {
    return true;
  }
  pUVar19 = (__this->fields)._mainCollider;
  if (pUVar19 != (UnityEngine_CapsuleCollider_o *)0x0) {
    fVar25 = UnityEngine_CapsuleCollider__get_radius(pUVar19,(MethodInfo *)0x0);
    pCVar20 = (__this->fields)._titan;
    if (((pCVar20 != (Characters_BaseTitan_o *)0x0) &&
        (pUVar21 = (pCVar20->fields).Cache, pUVar21 != (Utility_BaseComponentCache_o *)0x0)) &&
       (pUVar22 = (pUVar21->fields).Transform, pUVar22 != (UnityEngine_Transform_o *)0x0)) {
      pUVar24 = UnityEngine_Transform__get_localScale
                          ((UnityEngine_Vector3_o *)local_b8,pUVar22,(MethodInfo *)0x0);
      fVar1 = (pUVar24->fields).x;
      pCVar20 = (__this->fields)._titan;
      if (((pCVar20 != (Characters_BaseTitan_o *)0x0) &&
          (pUVar21 = (pCVar20->fields).Cache, pUVar21 != (Utility_BaseComponentCache_o *)0x0)) &&
         (pUVar19 = (__this->fields)._mainCollider, pUVar19 != (UnityEngine_CapsuleCollider_o *)0x0)) {
        pUVar22 = (pUVar21->fields).Transform;
        pUVar24 = UnityEngine_CapsuleCollider__get_center
                            ((UnityEngine_Vector3_o *)local_b8,pUVar19,(MethodInfo *)0x0);
        if (pUVar22 != (UnityEngine_Transform_o *)0x0) {
          local_c8.x = (pUVar24->fields).x;
          local_c8.y = (pUVar24->fields).y;
          local_c8.z = (pUVar24->fields).z;
          pUVar24 = UnityEngine_Transform__TransformPoint
                              ((UnityEngine_Vector3_o *)local_b8,pUVar22,(UnityEngine_Vector3_o *)&local_c8,
                               (MethodInfo *)0x0);
          pCVar20 = (__this->fields)._titan;
          if (((pCVar20 != (Characters_BaseTitan_o *)0x0) &&
              (pUVar21 = (pCVar20->fields).Cache, pUVar21 != (Utility_BaseComponentCache_o *)0x0)) &&
             (pUVar22 = (pUVar21->fields).Transform, pUVar22 != (UnityEngine_Transform_o *)0x0)) {
            fVar2 = (pUVar24->fields).z;
            fVar25 = fVar25 * fVar1 * 0.5;
            uVar7 = (pUVar24->fields).x;
            uVar13 = (pUVar24->fields).y;
            pUVar24 = UnityEngine_Transform__get_forward
                                ((UnityEngine_Vector3_o *)local_b8,pUVar22,(MethodInfo *)0x0);
            pCVar20 = (__this->fields)._titan;
            uVar8 = (pUVar24->fields).x;
            uVar14 = (pUVar24->fields).y;
            if (((pCVar20 != (Characters_BaseTitan_o *)0x0) &&
                (pUVar21 = (pCVar20->fields).Cache, pUVar21 != (Utility_BaseComponentCache_o *)0x0)) &&
               (pUVar22 = (pUVar21->fields).Transform, pUVar22 != (UnityEngine_Transform_o *)0x0)) {
              fVar1 = (pUVar24->fields).z;
              pUVar24 = UnityEngine_Transform__get_right
                                  ((UnityEngine_Vector3_o *)local_b8,pUVar22,(MethodInfo *)0x0);
              pCVar20 = (__this->fields)._titan;
              uVar9 = (pUVar24->fields).x;
              uVar15 = (pUVar24->fields).y;
              if (((pCVar20 != (Characters_BaseTitan_o *)0x0) &&
                  (pUVar21 = (pCVar20->fields).Cache, pUVar21 != (Utility_BaseComponentCache_o *)0x0)) &&
                 (pUVar19 = (__this->fields)._mainCollider, pUVar19 != (UnityEngine_CapsuleCollider_o *)0x0))
              {
                fVar3 = (pUVar24->fields).z;
                pUVar22 = (pUVar21->fields).Transform;
                pUVar24 = UnityEngine_CapsuleCollider__get_center
                                    ((UnityEngine_Vector3_o *)local_b8,pUVar19,(MethodInfo *)0x0);
                if (pUVar22 != (UnityEngine_Transform_o *)0x0) {
                  local_c8.x = (pUVar24->fields).x;
                  local_c8.y = (pUVar24->fields).y;
                  local_c8.z = (pUVar24->fields).z;
                  pUVar24 = UnityEngine_Transform__TransformPoint
                                      ((UnityEngine_Vector3_o *)local_b8,pUVar22,
                                       (UnityEngine_Vector3_o *)&local_c8,(MethodInfo *)0x0);
                  pCVar20 = (__this->fields)._titan;
                  if (((pCVar20 != (Characters_BaseTitan_o *)0x0) &&
                      (pUVar21 = (pCVar20->fields).Cache, pUVar21 != (Utility_BaseComponentCache_o *)0x0)) &&
                     (pUVar22 = (pUVar21->fields).Transform, pUVar22 != (UnityEngine_Transform_o *)0x0)) {
                    uVar10 = (pUVar24->fields).x;
                    uVar16 = (pUVar24->fields).y;
                    fVar4 = (pUVar24->fields).z;
                    pUVar24 = UnityEngine_Transform__get_forward
                                        ((UnityEngine_Vector3_o *)local_b8,pUVar22,(MethodInfo *)0x0);
                    pCVar20 = (__this->fields)._titan;
                    uVar11 = (pUVar24->fields).x;
                    uVar17 = (pUVar24->fields).y;
                    if (((pCVar20 != (Characters_BaseTitan_o *)0x0) &&
                        (pUVar21 = (pCVar20->fields).Cache, pUVar21 != (Utility_BaseComponentCache_o *)0x0))
                       && (pUVar22 = (pUVar21->fields).Transform, pUVar22 != (UnityEngine_Transform_o *)0x0))
                    {
                      fVar5 = (pUVar24->fields).z;
                      pUVar24 = UnityEngine_Transform__get_right
                                          ((UnityEngine_Vector3_o *)local_b8,pUVar22,(MethodInfo *)0x0);
                      local_c8.x = (target->fields).x;
                      local_c8.y = (target->fields).y;
                      uVar12 = (pUVar24->fields).x;
                      uVar18 = (pUVar24->fields).y;
                      local_b8[0].y =
                           (float)uVar15 * -1.1 * fVar25 + (float)uVar14 * -1.0 * fVar25 + (float)uVar13;
                      local_b8[0].x =
                           (float)uVar9 * -1.1 * fVar25 + (float)uVar8 * -1.0 * fVar25 + (float)uVar7;
                      fVar6 = (pUVar24->fields).z;
                      local_c8.z = (target->fields).z;
                      local_b8[0].z = fVar3 * -1.1 * fVar25 + fVar1 * -1.0 * fVar25 + fVar2;
                      bVar23 = Controllers_BaseTitanAIController__HasLineOfSight
                                         (__this,(UnityEngine_Vector3_o *)local_b8,
                                          (UnityEngine_Vector3_o *)&local_c8,(MethodInfo *)0x0);
                      if (!bVar23) {
                        return false;
                      }
                      local_b8[0].z = (target->fields).z;
                      local_b8[0].x = (target->fields).x;
                      local_b8[0].y = (target->fields).y;
                      local_c8.y = (float)uVar18 * 1.1 * fVar25 +
                                   (float)uVar17 * -1.0 * fVar25 + (float)uVar16;
                      local_c8.x = (float)uVar12 * 1.1 * fVar25 +
                                   (float)uVar11 * -1.0 * fVar25 + (float)uVar10;
                      local_c8.z = fVar6 * 1.1 * fVar25 + fVar5 * -1.0 * fVar25 + fVar4;
                      bVar23 = Controllers_BaseTitanAIController__HasLineOfSight
                                         (__this,(UnityEngine_Vector3_o *)&local_c8,
                                          (UnityEngine_Vector3_o *)local_b8,(MethodInfo *)0x0);
                      return bVar23;
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
  ThrowNullReferenceException();
}


// Controllers.BaseTitanAIController$$HasLineOfSight
// il2cpp: bool Controllers_BaseTitanAIController__HasLineOfSight (Controllers_BaseTitanAIController_o* __this, UnityEngine_Vector3_o start, UnityEngine_Vector3_o target, const MethodInfo* method);
// 0x1820f74c0

bool Controllers_BaseTitanAIController__HasLineOfSight
               (Controllers_BaseTitanAIController_o *__this,UnityEngine_Vector3_o *start,
               UnityEngine_Vector3_o *target,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  UnityEngine_Vector3_StaticFields *pUVar5;
  bool bVar6;
  int32_t layerMask;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  UnityEngine_Vector3_Fields local_98;
  UnityEngine_Vector3_Fields local_88;
  UnityEngine_RaycastHit_o local_78 [2];
  
  if (Il2CppMethodInitialized_184346a9f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Physics);
    Il2CppMethodInitialized_184346a9f = '\x01';
  }
  uVar1 = (target->fields).x;
  uVar3 = (target->fields).y;
  fVar10 = (target->fields).z - (start->fields).z;
  local_78[0].fields.m_Normal.fields.y = 0.0;
  local_78[0].fields.m_Normal.fields.z = 0.0;
  local_78[0].fields.m_FaceID = 0;
  local_78[0].fields.m_Distance = 0.0;
  local_78[0].fields.m_UV.fields.x = 0.0;
  local_78[0].fields.m_UV.fields.y = 0.0;
  local_78[0].fields.m_Collider.fields.m_Data = (UnityEngine_EntityId_Fields)0x0;
  local_78[0].fields.m_Point.fields.x = 0.0;
  local_78[0].fields.m_Point.fields.y = 0.0;
  local_78[0].fields.m_Point.fields.z = 0.0;
  local_78[0].fields.m_Normal.fields.x = 0.0;
  uVar2 = (start->fields).x;
  uVar4 = (start->fields).y;
  local_98.y = (float)uVar3 - (float)uVar4;
  local_98.x = (float)uVar1 - (float)uVar2;
  local_98.z = fVar10;
  fVar7 = (float)il2cpp_runtime_helper_180546a40(&local_98);
  if (fVar7 - 0.2 <= 1000.0) {
    if (Il2CppMethodInitialized_18433de5f == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_18433de5f = '\x01';
    }
    fVar8 = (float)il2cpp_runtime_helper_180546a40(&local_98);
    if (fVar8 <= 1e-05) {
      pUVar5 = TypeInfo_UnityEngine_Vector3->static_fields;
      fVar9 = (pUVar5->zeroVector).fields.x;
      fVar11 = (pUVar5->zeroVector).fields.y;
      fVar10 = (pUVar5->zeroVector).fields.z;
    }
    else {
      fVar9 = ((float)uVar1 - (float)uVar2) / fVar8;
      fVar11 = ((float)uVar3 - (float)uVar4) / fVar8;
      fVar10 = fVar10 / fVar8;
    }
    layerMask = UnityEngine_Touch__get_fingerId
                          ((UnityEngine_Touch_o *)&(__this->fields)._losLayer,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
    }
    local_88.x = (start->fields).x;
    local_88.y = (start->fields).y;
    local_88.z = (start->fields).z;
    local_98.y = fVar11;
    local_98.x = fVar9;
    local_98.z = fVar10;
    bVar6 = UnityEngine_Physics__Raycast_2fe5220
                      ((UnityEngine_Vector3_o *)&local_88,(UnityEngine_Vector3_o *)&local_98,local_78,
                       fVar7 - 0.2,layerMask,(MethodInfo *)0x0);
    if (!bVar6) {
      return true;
    }
  }
  return false;
}


// Controllers.BaseTitanAIController$$HasRockThrowLineOfSight
// il2cpp: bool Controllers_BaseTitanAIController__HasRockThrowLineOfSight (Controllers_BaseTitanAIController_o* __this, UnityEngine_Vector3_o start, Characters_BaseCharacter_o* target, const MethodInfo* method);
// 0x1820f7670

bool Controllers_BaseTitanAIController__HasRockThrowLineOfSight
               (Controllers_BaseTitanAIController_o *__this,UnityEngine_Vector3_o *start,
               Characters_BaseCharacter_o *target,MethodInfo *method)

{
  Characters_BaseTitan_o *a;
  bool bVar1;
  UnityEngine_Vector3_o *pUVar2;
  UnityEngine_Vector3_Fields local_28;
  UnityEngine_Vector3_Fields local_18;
  
  if (Il2CppMethodInitialized_184346aa0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_TeamInfo);
    Il2CppMethodInitialized_184346aa0 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)target,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (target == (Characters_BaseCharacter_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar1 = (*(target->klass->vtable)._73_ValidTarget.methodPtr)
                      (target,(target->klass->vtable)._73_ValidTarget.method);
    if (bVar1) {
      a = (__this->fields)._titan;
      if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
      }
      bVar1 = GameManagers_TeamInfo__SameTeam_1e770d0
                        ((Characters_BaseCharacter_o *)a,target,(MethodInfo *)0x0);
      if (!bVar1) {
        pUVar2 = (*(target->klass->vtable)._72_GetPosition.methodPtr)
                           ((UnityEngine_Vector3_o *)&local_18,target,
                            (target->klass->vtable)._72_GetPosition.method);
        local_28.x = (pUVar2->fields).x;
        local_28.y = (pUVar2->fields).y;
        local_28.z = (pUVar2->fields).z;
        local_18.x = (start->fields).x;
        local_18.y = (start->fields).y;
        local_18.z = (start->fields).z;
        bVar1 = Controllers_BaseTitanAIController__HasLineOfSight
                          (__this,(UnityEngine_Vector3_o *)&local_18,(UnityEngine_Vector3_o *)&local_28,
                           (MethodInfo *)0x0);
        return bVar1;
      }
    }
  }
  return false;
}


// Controllers.BaseTitanAIController$$FindRockThrowTarget
// il2cpp: Characters_BaseCharacter_o* Controllers_BaseTitanAIController__FindRockThrowTarget (Controllers_BaseTitanAIController_o* __this, UnityEngine_Vector3_o start, bool requireLineOfSight, const MethodInfo* method);
// 0x1820f4610
// eh: try 0x1820f4750..0x1820f48f4 -> pad 0x18333eae0 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 20 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820f474f: nop 
// asm:   0x1820f48aa: mov rdx, qword ptr [rip + 0x1f80487]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseCharacter_Dispose
// asm:   0x1820f48b1: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1820f48b6: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1820f48bb: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1820f48c0: test rcx, rcx
// asm:   0x1820f48c3: jne 0x1820f48f4
// asm:   0x1820f48c5: mov rsi, qword ptr [rsp + 0x20]
// asm:   0x1820f48f4: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x18333eae0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333eae5: push rbp
// asm:   0x18333eae6: sub rsp, 0x20
// asm:   0x18333eaea: mov rbp, rdx
// asm:   0x18333eaed: mov rax, qword ptr [rbp + 0xa0]
// asm:   0x18333eaf4: mov rcx, qword ptr [rax]
// asm:   0x18333eaf7: mov qword ptr [rbp + 0x28], rcx
// asm:   0x18333eafb: movabs rax, 0
// asm:   0x18333eb05: add rsp, 0x20
// asm:   0x18333eb09: pop rbp
// asm:   0x18333eb0a: ret 

Characters_BaseCharacter_o *
Controllers_BaseTitanAIController__FindRockThrowTarget
          (Controllers_BaseTitanAIController_o *__this,UnityEngine_Vector3_o *start,bool requireLineOfSight,
          MethodInfo *method)

{
  byte bVar1;
  GameManagers_InGameManager_o *__this_00;
  Characters_BaseTitan_o *a;
  Il2CppObject *b;
  bool bVar2;
  System_Collections_Generic_HashSet_BaseCharacter__o *__this_01;
  UnityEngine_Vector3_o *pUVar3;
  Characters_BaseCharacter_o *pCVar4;
  float fVar5;
  float fVar6;
  undefined1 local_f0 [16];
  Characters_BaseCharacter_o *local_e0;
  System_Collections_Generic_HashSet_Enumerator_T__o local_d8;
  UnityEngine_Vector3_Fields local_b8;
  UnityEngine_Vector3_Fields local_a8;
  undefined8 local_98;
  float local_90;
  undefined8 local_88;
  float local_80;
  UnityEngine_Vector3_o local_70;
  UnityEngine_Vector3_o local_60 [3];
  
  if (Il2CppMethodInitialized_184346aa1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseCharacter_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseCharacter_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseCharacter_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_TeamInfo);
    Il2CppMethodInitialized_184346aa1 = '\x01';
  }
  local_d8.fields._set = (System_Collections_Generic_HashSet_T__o *)0x0;
  local_d8.fields._index = 0;
  local_d8.fields._version = 0;
  local_d8.fields._current = (Il2CppObject *)0x0;
  __this_00 = (GameManagers_InGameManager_o *)
              TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if (__this_00 != (GameManagers_InGameManager_o *)0x0) {
    bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
    if (((__this_00->klass->_2).typeHierarchyDepth < bVar1) ||
       ((__this_00->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
      il2cpp_codegen_raise_invalid_cast_exception(__this_00,TypeInfo_GameManagers_InGameManager);
    }
    __this_01 = GameManagers_InGameManager__GetAllNonAICharacters(__this_00,(MethodInfo *)0x0);
    if (__this_01 != (System_Collections_Generic_HashSet_BaseCharacter__o *)0x0) {
      System_Collections_Generic_HashSet_Vector2Int___GetEnumerator
                ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_f0,
                 (System_Collections_Generic_HashSet_Vector2Int__o *)__this_01,
                 (MethodInfo_175C200 *)
                 MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_GetEnumerator);
      local_d8.fields._set = (System_Collections_Generic_HashSet_T__o *)local_f0._0_8_;
      local_d8.fields._index = local_f0._8_4_;
      local_d8.fields._version = local_f0._12_4_;
      local_d8.fields._current = (Il2CppObject *)local_e0;
      local_f0._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
      pCVar4 = (Characters_BaseCharacter_o *)0x0;
      fVar6 = INFINITY;
      local_f0._8_8_ = &local_d8;
label_1820f4750:
      do {
        do {
          bVar2 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                            (&local_d8,
                             (MethodInfo_15381F0 *)
                             MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseCharacter_MoveNext);
          b = local_d8.fields._current;
          if (!bVar2) {
            System_Collections_Generic_HashSet_Enumerator_object___Dispose
                      ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_d8,
                       MethodInfo_System_Collections_Generic_HashSet_Enumerator_BaseCharacter_Dispose);
            return pCVar4;
          }
          if ((Characters_BaseCharacter_o *)local_d8.fields._current == (Characters_BaseCharacter_o *)0x0) {
            ThrowNullReferenceException();
          }
          bVar2 = (*(((Characters_BaseCharacter_c *)(local_d8.fields._current)->klass)->vtable).
                    _73_ValidTarget.methodPtr)
                            (local_d8.fields._current,
                             (((Characters_BaseCharacter_c *)(local_d8.fields._current)->klass)->vtable).
                             _73_ValidTarget.method);
        } while (!bVar2);
        a = (__this->fields)._titan;
        if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
        }
        bVar2 = GameManagers_TeamInfo__SameTeam_1e770d0
                          ((Characters_BaseCharacter_o *)a,(Characters_BaseCharacter_o *)b,(MethodInfo *)0x0);
      } while (bVar2);
      if (requireLineOfSight) goto code_r0x0001820f47c1;
      goto label_1820f481d;
    }
  }
  ThrowNullReferenceException();
code_r0x0001820f47c1:
  pUVar3 = (*(((Characters_BaseCharacter_c *)b->klass)->vtable)._72_GetPosition.methodPtr)
                     (&local_70,b,(((Characters_BaseCharacter_c *)b->klass)->vtable)._72_GetPosition.method);
  local_b8.x = (pUVar3->fields).x;
  local_b8.y = (pUVar3->fields).y;
  local_b8.z = (pUVar3->fields).z;
  local_a8.x = (start->fields).x;
  local_a8.y = (start->fields).y;
  local_a8.z = (start->fields).z;
  bVar2 = Controllers_BaseTitanAIController__HasLineOfSight
                    (__this,(UnityEngine_Vector3_o *)&local_a8,(UnityEngine_Vector3_o *)&local_b8,
                     (MethodInfo *)0x0);
  if (bVar2) {
label_1820f481d:
    pUVar3 = (*(((Characters_BaseCharacter_c *)b->klass)->vtable)._72_GetPosition.methodPtr)
                       (local_60,b,(((Characters_BaseCharacter_c *)b->klass)->vtable)._72_GetPosition.method);
    local_98._0_4_ = (pUVar3->fields).x;
    local_98._4_4_ = (pUVar3->fields).y;
    local_90 = (pUVar3->fields).z;
    local_88._0_4_ = (start->fields).x;
    local_88._4_4_ = (start->fields).y;
    local_80 = (start->fields).z;
    fVar5 = (float)il2cpp_runtime_helper_180562c80(&local_88,&local_98);
    if (fVar5 < fVar6) {
      pCVar4 = (Characters_BaseCharacter_o *)b;
      fVar6 = fVar5;
    }
  }
  goto label_1820f4750;
}


// Controllers.BaseTitanAIController$$IsCrawler
// il2cpp: bool Controllers_BaseTitanAIController__IsCrawler (Controllers_BaseTitanAIController_o* __this, const MethodInfo* method);
// 0x1820f8150

bool Controllers_BaseTitanAIController__IsCrawler
               (Controllers_BaseTitanAIController_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_BaseTitan_o *pCVar2;
  Characters_BaseTitan_c *pCVar3;
  
  if (Il2CppMethodInitialized_184346aa2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BasicTitan);
    Il2CppMethodInitialized_184346aa2 = '\x01';
  }
  pCVar2 = (__this->fields)._titan;
  if (pCVar2 != (Characters_BaseTitan_o *)0x0) {
    pCVar3 = pCVar2->klass;
    bVar1 = (TypeInfo_Characters_BasicTitan->_2).typeHierarchyDepth;
    if ((bVar1 <= (pCVar3->_2).typeHierarchyDepth) &&
       ((pCVar3->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_BasicTitan)) {
      pCVar2 = (__this->fields)._titan;
      bVar1 = (TypeInfo_Characters_BasicTitan->_2).typeHierarchyDepth;
      if ((bVar1 <= (pCVar2->klass->_2).typeHierarchyDepth) &&
         ((pCVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_Characters_BasicTitan)) {
        return (bool)(char)(*(uint64_t *)((char *)pCVar2 + 0x298));
      }
      il2cpp_codegen_raise_invalid_cast_exception(pCVar2,TypeInfo_Characters_BasicTitan);
    }
  }
  return false;
}


// Controllers.BaseTitanAIController$$IsShifter
// il2cpp: bool Controllers_BaseTitanAIController__IsShifter (Controllers_BaseTitanAIController_o* __this, const MethodInfo* method);
// 0x1820f8200

bool Controllers_BaseTitanAIController__IsShifter
               (Controllers_BaseTitanAIController_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_BaseTitan_o *pCVar2;
  bool bVar3;
  Characters_BaseTitan_o *pCVar4;
  
  if (Il2CppMethodInitialized_184346aa3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseShifter);
    Il2CppMethodInitialized_184346aa3 = '\x01';
  }
  pCVar2 = (__this->fields)._titan;
  pCVar4 = (Characters_BaseTitan_o *)0x0;
  if (pCVar2 != (Characters_BaseTitan_o *)0x0) {
    bVar1 = (TypeInfo_Characters_BaseShifter->_2).typeHierarchyDepth;
    if (((pCVar2->klass->_2).typeHierarchyDepth < bVar1) ||
       (bVar3 = true,
       (pCVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
       (Il2CppClass *)TypeInfo_Characters_BaseShifter)) {
      bVar3 = false;
    }
    if (bVar3) {
      pCVar4 = pCVar2;
    }
  }
  return pCVar4 != (Characters_BaseTitan_o *)0x0;
}


// Controllers.BaseTitanAIController$$CompleteMove
// il2cpp: void Controllers_BaseTitanAIController__CompleteMove (Controllers_BaseTitanAIController_o* __this, const MethodInfo* method);
// 0x1820f4510

void Controllers_BaseTitanAIController__CompleteMove
               (Controllers_BaseTitanAIController_o *__this,MethodInfo *method)

{
  Characters_BaseTitan_o *pCVar1;
  Utility_BaseComponentCache_o *pUVar2;
  UnityEngine_Transform_o *__this_00;
  System_Action_o *pSVar3;
  UnityEngine_Vector3_Fields local_18;
  
  if ((__this->fields)._moveToActive == false) {
    pSVar3 = (System_Action_o *)0x0;
  }
  else {
    pSVar3 = (__this->fields)._moveToCallback;
    if ((__this->fields)._moveToExact != false) {
      pCVar1 = (__this->fields)._titan;
      if (((pCVar1 == (Characters_BaseTitan_o *)0x0) ||
          (pUVar2 = (pCVar1->fields).Cache, pUVar2 == (Utility_BaseComponentCache_o *)0x0)) ||
         (__this_00 = (pUVar2->fields).Transform, __this_00 == (UnityEngine_Transform_o *)0x0)) {
        ThrowNullReferenceException();
      }
      local_18.x = (__this->fields)._moveToPosition.fields.x;
      local_18.y = (__this->fields)._moveToPosition.fields.y;
      local_18.z = (__this->fields)._moveToPosition.fields.z;
      UnityEngine_Transform__set_position(__this_00,(UnityEngine_Vector3_o *)&local_18,(MethodInfo *)0x0);
    }
  }
  (__this->fields)._moveToActive = false;
  (__this->fields)._moveToTarget = (Characters_ITargetable_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._moveToTarget,(void *)0x0);
  (__this->fields)._moveToExact = false;
  (__this->fields)._moveToCallback = (System_Action_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._moveToCallback,(void *)0x0);
  Controllers_BaseTitanAIController__Idle(__this,(MethodInfo *)0x0);
  if (pSVar3 != (System_Action_o *)0x0) {
    (*(code *)(pSVar3->fields).invoke_impl)((pSVar3->fields).method_code,(pSVar3->fields).method);
  }
  return;
}


// Controllers.BaseTitanAIController$$Idle
// il2cpp: void Controllers_BaseTitanAIController__Idle (Controllers_BaseTitanAIController_o* __this, const MethodInfo* method);
// 0x1820f77b0

void Controllers_BaseTitanAIController__Idle(Controllers_BaseTitanAIController_o *__this,MethodInfo *method)

{
  Characters_BaseTitan_o *pCVar1;
  float fVar2;
  
  (__this->fields)._lowMovementSpeedTime = 0.0;
  (__this->fields)._recoveryTimeLeft = 0.0;
  (__this->fields)._avoidAngle = 0.0;
  (__this->fields).AIState = 0;
  pCVar1 = (__this->fields)._titan;
  if (pCVar1 != (Characters_BaseTitan_o *)0x0) {
    (pCVar1->fields).HasDirection = false;
    pCVar1 = (__this->fields)._titan;
    if (pCVar1 != (Characters_BaseTitan_o *)0x0) {
      (pCVar1->fields).IsSit = false;
      fVar2 = UnityEngine_Random__Range(4.0,8.0,(MethodInfo *)0x0);
      (__this->fields)._stateTimeLeft = fVar2;
      return;
    }
  }
  ThrowNullReferenceException();
}


// Controllers.BaseTitanAIController$$Wander
// il2cpp: void Controllers_BaseTitanAIController__Wander (Controllers_BaseTitanAIController_o* __this, const MethodInfo* method);
// 0x1820f9620

void Controllers_BaseTitanAIController__Wander(Controllers_BaseTitanAIController_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  Characters_BaseTitan_o *pCVar2;
  Utility_BaseComponentCache_o *pUVar3;
  UnityEngine_Transform_o *__this_00;
  bool bVar4;
  UnityEngine_Vector3_o *pUVar5;
  float fVar6;
  UnityEngine_Vector3_Fields local_38;
  UnityEngine_Vector3_Fields local_28 [2];
  
  pCVar2 = (__this->fields)._titan;
  (__this->fields).AIState = 1;
  if (pCVar2 != (Characters_BaseTitan_o *)0x0) {
    (pCVar2->fields).HasDirection = true;
    pCVar2 = (__this->fields)._titan;
    fVar6 = UnityEngine_Random__Range(0.0,360.0,(MethodInfo *)0x0);
    if (pCVar2 != (Characters_BaseTitan_o *)0x0) {
      (pCVar2->fields).TargetAngle = fVar6;
      pCVar2 = (__this->fields)._titan;
      if (pCVar2 != (Characters_BaseTitan_o *)0x0) {
        (pCVar2->fields).IsWalk = true;
        pCVar2 = (__this->fields)._titan;
        if (pCVar2 != (Characters_BaseTitan_o *)0x0) {
          (pCVar2->fields).IsSit = false;
          bVar4 = Controllers_BaseTitanAIController__IsCrawler(__this,(MethodInfo *)0x0);
          if (bVar4) {
            pCVar2 = (__this->fields)._titan;
            if (pCVar2 == (Characters_BaseTitan_o *)0x0) goto label_1820f97ef;
            (pCVar2->fields).IsWalk = false;
          }
          pCVar2 = (__this->fields)._titan;
          if (((pCVar2 != (Characters_BaseTitan_o *)0x0) &&
              (pUVar3 = (pCVar2->fields).Cache, pUVar3 != (Utility_BaseComponentCache_o *)0x0)) &&
             (__this_00 = (pUVar3->fields).Transform, __this_00 != (UnityEngine_Transform_o *)0x0)) {
            pUVar5 = UnityEngine_Transform__get_forward
                               ((UnityEngine_Vector3_o *)local_28,__this_00,(MethodInfo *)0x0);
            pCVar2 = (__this->fields)._titan;
            if (pCVar2 != (Characters_BaseTitan_o *)0x0) {
              fVar6 = (pUVar5->fields).z;
              uVar1._0_4_ = (pUVar5->fields).x;
              uVar1._4_4_ = (pUVar5->fields).y;
              pUVar5 = (*(pCVar2->klass->vtable)._106_GetTargetDirection.methodPtr)
                                 ((UnityEngine_Vector3_o *)local_28,pCVar2,
                                  (pCVar2->klass->vtable)._106_GetTargetDirection.method);
              local_38.x = (pUVar5->fields).x;
              local_38.y = (pUVar5->fields).y;
              local_38.z = (pUVar5->fields).z;
              local_28[0]._0_8_ = uVar1;
              local_28[0].z = fVar6;
              fVar6 = (float)il2cpp_runtime_helper_181d9e200(local_28,&local_38);
              if (60.0 < ABS(fVar6)) {
                pCVar2 = (__this->fields)._titan;
                if (pCVar2 == (Characters_BaseTitan_o *)0x0) goto label_1820f97ef;
                pUVar5 = (*(pCVar2->klass->vtable)._106_GetTargetDirection.methodPtr)
                                   ((UnityEngine_Vector3_o *)&local_38,pCVar2,
                                    (pCVar2->klass->vtable)._106_GetTargetDirection.method);
                local_28[0].x = (pUVar5->fields).x;
                local_28[0].y = (pUVar5->fields).y;
                local_28[0].z = (pUVar5->fields).z;
                (*(pCVar2->klass->vtable)._167_Turn.methodPtr)
                          (pCVar2,(UnityEngine_Vector3_o *)local_28,(pCVar2->klass->vtable)._167_Turn.method);
              }
              fVar6 = UnityEngine_Random__Range(2.0,6.0,(MethodInfo *)0x0);
              (__this->fields)._stateTimeLeft = fVar6;
              return;
            }
          }
        }
      }
    }
  }
label_1820f97ef:
  ThrowNullReferenceException();
}


// Controllers.BaseTitanAIController$$Sit
// il2cpp: void Controllers_BaseTitanAIController__Sit (Controllers_BaseTitanAIController_o* __this, const MethodInfo* method);
// 0x1820f8930

void Controllers_BaseTitanAIController__Sit(Controllers_BaseTitanAIController_o *__this,MethodInfo *method)

{
  Characters_BaseTitan_o *pCVar1;
  float fVar2;
  
  pCVar1 = (__this->fields)._titan;
  (__this->fields).AIState = 2;
  if (pCVar1 != (Characters_BaseTitan_o *)0x0) {
    (pCVar1->fields).IsSit = true;
    fVar2 = UnityEngine_Random__Range(8.0,14.0,(MethodInfo *)0x0);
    (__this->fields)._stateTimeLeft = fVar2;
    return;
  }
  ThrowNullReferenceException();
}


// Controllers.BaseTitanAIController$$MoveToEnemy
// il2cpp: void Controllers_BaseTitanAIController__MoveToEnemy (Controllers_BaseTitanAIController_o* __this, bool avoidCollisions, const MethodInfo* method);
// 0x1820f8320

void Controllers_BaseTitanAIController__MoveToEnemy
               (Controllers_BaseTitanAIController_o *__this,bool avoidCollisions,MethodInfo *method)

{
  float *pfVar1;
  float fVar2;
  Characters_BaseTitan_o *pCVar4;
  bool bVar5;
  void *pvVar6;
  undefined8 *puVar7;
  UnityEngine_Vector3_o *pUVar8;
  float fVar9;
  UnityEngine_Vector3_Fields local_28;
  UnityEngine_Vector3_o local_18;
  float fVar3;
  
  if (Il2CppMethodInitialized_184346aa4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ITargetable);
    Il2CppMethodInitialized_184346aa4 = '\x01';
  }
  pCVar4 = (__this->fields)._titan;
  if (pCVar4 != (Characters_BaseTitan_o *)0x0) {
    if (((pCVar4->fields).State == 0) && ((__this->fields)._enemyDistance <= (__this->fields)._attackRange)) {
      (pCVar4->fields).HasDirection = false;
      pCVar4 = (__this->fields)._titan;
      if (pCVar4 == (Characters_BaseTitan_o *)0x0) goto label_1820f8535;
      bVar5 = (*(pCVar4->klass->vtable)._145_CanAction.methodPtr)
                        (pCVar4,(pCVar4->klass->vtable)._145_CanAction.method);
      if (!bVar5) {
        return;
      }
      bVar5 = Controllers_BaseTitanAIController__TryCloseAction(__this,(MethodInfo *)0x0);
      if (bVar5) {
        return;
      }
    }
    pCVar4 = (__this->fields)._titan;
    (__this->fields).AIState = 3;
    if (pCVar4 != (Characters_BaseTitan_o *)0x0) {
      (pCVar4->fields).HasDirection = true;
      pCVar4 = (__this->fields)._titan;
      if (pCVar4 != (Characters_BaseTitan_o *)0x0) {
        (pCVar4->fields).IsSit = false;
        pCVar4 = (__this->fields)._titan;
        if (pCVar4 != (Characters_BaseTitan_o *)0x0) {
          (pCVar4->fields).IsWalk = (__this->fields).IsRun == false;
          fVar9 = UnityEngine_Random__Range(-45.0,45.0,(MethodInfo *)0x0);
          (__this->fields)._moveAngle = fVar9;
          if (((((__this->fields)._usePathfinding & avoidCollisions) == 0) ||
              ((__this->fields)._enemy == (Characters_ITargetable_o *)0x0)) ||
             (pvVar6 = InterfaceInvoker0_Invoke
                                 (2,(Il2CppClass *)TypeInfo_Characters_ITargetable,
                                  (Il2CppObject *)(__this->fields)._enemy), (char)pvVar6 == '\0')) {
            Controllers_BaseTitanAIController__TargetEnemy(__this,(MethodInfo *)0x0);
label_1820f8505:
            fVar9 = UnityEngine_Random__Range
                              ((__this->fields).ChaseAngleTimeMin,(__this->fields).ChaseAngleTimeMax,
                               (MethodInfo *)0x0);
            (__this->fields)._stateTimeLeft = fVar9;
            return;
          }
          if ((__this->fields)._enemy != (Characters_ITargetable_o *)0x0) {
            pCVar4 = (__this->fields)._titan;
            puVar7 = (undefined8 *)il2cpp_runtime_helper_180027220(&local_18,1,TypeInfo_Characters_ITargetable);
            local_28._0_8_ = *puVar7;
            local_28.z = *(float *)(puVar7 + 1);
            fVar9 = (__this->fields)._enemyDistance;
            pfVar1 = &(__this->fields).ChaseAngleMinRange;
            fVar2 = *pfVar1;
            fVar3 = *pfVar1;
            pUVar8 = Controllers_BaseAIController__GetAgentNavDirection
                               (&local_18,(Controllers_BaseAIController_o *)__this,
                                (UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
            local_28.x = (pUVar8->fields).x;
            local_28.y = (pUVar8->fields).y;
            local_28.z = (pUVar8->fields).z;
            fVar9 = Controllers_BaseTitanAIController__GetChaseAngleGivenDirection
                              (__this,(UnityEngine_Vector3_o *)&local_28,fVar3 <= fVar9 && fVar9 != fVar2,
                               (MethodInfo *)0x0);
            if (pCVar4 != (Characters_BaseTitan_o *)0x0) {
              (pCVar4->fields).TargetAngle = fVar9;
              goto label_1820f8505;
            }
          }
        }
      }
    }
  }
label_1820f8535:
  ThrowNullReferenceException();
}


// Controllers.BaseTitanAIController$$TargetEnemy
// il2cpp: void Controllers_BaseTitanAIController__TargetEnemy (Controllers_BaseTitanAIController_o* __this, const MethodInfo* method);
// 0x1820f8a30

void Controllers_BaseTitanAIController__TargetEnemy
               (Controllers_BaseTitanAIController_o *__this,MethodInfo *method)

{
  float *pfVar1;
  ushort uVar2;
  Il2CppObject *obj;
  Il2CppClass *pIVar3;
  Characters_BaseTitan_o *pCVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  VirtualInvokeData *pVVar6;
  UnityEngine_Vector3_o *pUVar7;
  ushort uVar8;
  float fVar9;
  UnityEngine_Vector3_Fields local_28;
  UnityEngine_Vector3_o local_18;
  
  if (Il2CppMethodInitialized_184346aa5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ITargetable);
    Il2CppMethodInitialized_184346aa5 = '\x01';
  }
  obj = (Il2CppObject *)(__this->fields)._enemy;
  if (obj != (Il2CppObject *)0x0) {
    pIVar3 = obj->klass;
    pCVar4 = (__this->fields)._titan;
    uVar2 = (pIVar3->_2).interface_offsets_count;
    if (uVar2 != 0) {
      pIVar5 = (pIVar3->_1).interfaceOffsets;
      uVar8 = 0;
      do {
        if (pIVar5[uVar8].interfaceType == (Il2CppClass *)TypeInfo_Characters_ITargetable) {
          pVVar6 = pIVar3->vtable + (pIVar5[uVar8].offset + 1);
          goto label_1820f8ab9;
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar2);
    }
    pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath(obj,(Il2CppClass *)TypeInfo_Characters_ITargetable,1);
label_1820f8ab9:
    pUVar7 = (*pVVar6->methodPtr)(&local_18,obj,pVVar6->method);
    local_28.x = (pUVar7->fields).x;
    local_28.y = (pUVar7->fields).y;
    local_28.z = (pUVar7->fields).z;
    fVar9 = (__this->fields)._enemyDistance;
    pfVar1 = &(__this->fields).ChaseAngleMinRange;
    fVar9 = Controllers_BaseTitanAIController__GetChaseAngle
                      (__this,(UnityEngine_Vector3_o *)&local_28,*pfVar1 <= fVar9 && fVar9 != *pfVar1,
                       (MethodInfo *)0x0);
    if (pCVar4 != (Characters_BaseTitan_o *)0x0) {
      (pCVar4->fields).TargetAngle = fVar9;
      return;
    }
  }
  ThrowNullReferenceException();
}


// Controllers.BaseTitanAIController$$MoveToPosition
// il2cpp: void Controllers_BaseTitanAIController__MoveToPosition (Controllers_BaseTitanAIController_o* __this, const MethodInfo* method);
// 0x1820f8790

void Controllers_BaseTitanAIController__MoveToPosition
               (Controllers_BaseTitanAIController_o *__this,MethodInfo *method)

{
  UnityEngine_Vector3_o *pUVar1;
  Characters_BaseTitan_o *pCVar2;
  float fVar3;
  UnityEngine_Vector3_Fields local_28;
  UnityEngine_Vector3_o local_18;
  
  pCVar2 = (__this->fields)._titan;
  (__this->fields).AIState = 4;
  if (pCVar2 != (Characters_BaseTitan_o *)0x0) {
    (pCVar2->fields).HasDirection = true;
    pCVar2 = (__this->fields)._titan;
    if (pCVar2 != (Characters_BaseTitan_o *)0x0) {
      (pCVar2->fields).IsSit = false;
      pCVar2 = (__this->fields)._titan;
      if (pCVar2 != (Characters_BaseTitan_o *)0x0) {
        (pCVar2->fields).IsWalk = (__this->fields).IsRun == false;
        if ((__this->fields)._usePathfinding == false) {
          fVar3 = UnityEngine_Random__Range(-45.0,45.0,(MethodInfo *)0x0);
          local_28.z = (__this->fields)._moveToPosition.fields.z;
          pCVar2 = (__this->fields)._titan;
          (__this->fields)._moveAngle = fVar3;
          local_28.x = (__this->fields)._moveToPosition.fields.x;
          local_28.y = (__this->fields)._moveToPosition.fields.y;
          fVar3 = Controllers_BaseTitanAIController__GetChaseAngle
                            (__this,(UnityEngine_Vector3_o *)&local_28,true,(MethodInfo *)0x0);
        }
        else {
          fVar3 = UnityEngine_Random__Range(-5.0,5.0,(MethodInfo *)0x0);
          local_28.z = (__this->fields)._moveToPosition.fields.z;
          pCVar2 = (__this->fields)._titan;
          (__this->fields)._moveAngle = fVar3;
          local_28.x = (__this->fields)._moveToPosition.fields.x;
          local_28.y = (__this->fields)._moveToPosition.fields.y;
          pUVar1 = Controllers_BaseAIController__GetAgentNavDirection
                             (&local_18,(Controllers_BaseAIController_o *)__this,
                              (UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
          local_28.x = (pUVar1->fields).x;
          local_28.y = (pUVar1->fields).y;
          local_28.z = (pUVar1->fields).z;
          fVar3 = Controllers_BaseTitanAIController__GetChaseAngleGivenDirection
                            (__this,(UnityEngine_Vector3_o *)&local_28,true,(MethodInfo *)0x0);
        }
        if (pCVar2 != (Characters_BaseTitan_o *)0x0) {
          (pCVar2->fields).TargetAngle = fVar3;
          fVar3 = UnityEngine_Random__Range
                            ((__this->fields).ChaseAngleTimeMin,(__this->fields).ChaseAngleTimeMax,
                             (MethodInfo *)0x0);
          (__this->fields)._stateTimeLeft = fVar3;
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Controllers.BaseTitanAIController$$Attack
// il2cpp: void Controllers_BaseTitanAIController__Attack (Controllers_BaseTitanAIController_o* __this, System_Collections_Generic_List_string__o* validAttacks, const MethodInfo* method);
// 0x1820f3e00

void Controllers_BaseTitanAIController__Attack
               (Controllers_BaseTitanAIController_o *__this,
               System_Collections_Generic_List_string__o *validAttacks,MethodInfo *method)

{
  Characters_BaseTitan_o *pCVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar2;
  System_String_o *a;
  Characters_TitanAttackInfo_o *pCVar3;
  
  if (Il2CppMethodInitialized_184346aa6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_TitanAttackInfo_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184346aa6 = '\x01';
  }
  pCVar1 = (__this->fields)._titan;
  if (pCVar1 == (Characters_BaseTitan_o *)0x0) goto label_1820f3f37;
  (pCVar1->fields).HasDirection = false;
  a = Controllers_BaseTitanAIController__GetRandomAttack(__this,validAttacks,(MethodInfo *)0x0);
  bVar2 = System_String__op_Equality(a,"",(MethodInfo *)0x0);
  if (!bVar2) {
    pCVar1 = (__this->fields)._titan;
    if (pCVar1 == (Characters_BaseTitan_o *)0x0) goto label_1820f3f37;
    bVar2 = (*(pCVar1->klass->vtable)._151_CanAttack.methodPtr)
                      (pCVar1,(pCVar1->klass->vtable)._151_CanAttack.method);
    if (bVar2) {
      (__this->fields)._attack = a;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._attack,a);
      pCVar1 = (__this->fields)._titan;
      (__this->fields).AIState = 5;
      if (pCVar1 == (Characters_BaseTitan_o *)0x0) {
label_1820f3f37:
        ThrowNullReferenceException();
      }
      (*(pCVar1->klass->vtable)._150_Attack.methodPtr)
                (pCVar1,(__this->fields)._attack,(pCVar1->klass->vtable)._150_Attack.method);
      __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).AttackInfos;
      if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_1820f3f37;
      pCVar3 = System_Collections_Generic_Dictionary_object__object___get_Item
                         (__this_00,(Il2CppObject *)a,
                          (MethodInfo_147A5B0 *)
                          MethodInfo_System_Collections_Generic_Dictionary_string_TitanAttackInfo_get_Item);
      if (pCVar3 == (Characters_TitanAttackInfo_o *)0x0) goto label_1820f3f37;
      if ((pCVar3->fields).FarOnly != false) {
        (__this->fields)._rangedCooldownLeft = (__this->fields).FarAttackCooldown;
      }
      goto label_1820f3f20;
    }
  }
  Controllers_BaseTitanAIController__Idle(__this,(MethodInfo *)0x0);
label_1820f3f20:
  (__this->fields)._waitAttackTimeLeft = (__this->fields).AttackWait;
  return;
}


// Controllers.BaseTitanAIController$$WaitAttack
// il2cpp: void Controllers_BaseTitanAIController__WaitAttack (Controllers_BaseTitanAIController_o* __this, float waitTime, const MethodInfo* method);
// 0x1820f95e0

void Controllers_BaseTitanAIController__WaitAttack
               (Controllers_BaseTitanAIController_o *__this,float waitTime,MethodInfo *method)

{
  Characters_BaseTitan_o *pCVar1;
  
  pCVar1 = (__this->fields)._titan;
  (__this->fields).AIState = 6;
  if (pCVar1 != (Characters_BaseTitan_o *)0x0) {
    (pCVar1->fields).HasDirection = false;
    (__this->fields)._waitAttackTimeLeft = waitTime;
    return;
  }
  ThrowNullReferenceException();
}


// Controllers.BaseTitanAIController$$TryCloseAction
// il2cpp: bool Controllers_BaseTitanAIController__TryCloseAction (Controllers_BaseTitanAIController_o* __this, const MethodInfo* method);
// 0x1820f8b40

bool Controllers_BaseTitanAIController__TryCloseAction
               (Controllers_BaseTitanAIController_o *__this,MethodInfo *method)

{
  float fVar1;
  Characters_BaseTitan_o *pCVar2;
  bool bVar3;
  System_Collections_Generic_List_string__o *validAttacks;
  float fVar4;
  
  if (Il2CppMethodInitialized_184346aa7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    Il2CppMethodInitialized_184346aa7 = '\x01';
  }
  validAttacks = (*(__this->klass->vtable)._13_GetValidAttacks.methodPtr)
                           (__this,false,(__this->klass->vtable)._13_GetValidAttacks.method);
  if (validAttacks != (System_Collections_Generic_List_string__o *)0x0) {
    if ((validAttacks->fields)._size < 1) {
      if ((__this->fields).IsTurn != false) {
        fVar4 = Controllers_BaseTitanAIController__GetEnemyAngle
                          (__this,(__this->fields)._enemy,(MethodInfo *)0x0);
        if ((__this->fields).TurnAngle < fVar4) {
          pCVar2 = (__this->fields)._titan;
          if (pCVar2 != (Characters_BaseTitan_o *)0x0) {
            bVar3 = Characters_BaseTitan__get_IsMoving(pCVar2,(MethodInfo *)0x0);
            if (bVar3) {
              bVar3 = Controllers_BaseTitanAIController__IsCrawler(__this,(MethodInfo *)0x0);
              if (!bVar3) {
                bVar3 = Controllers_BaseTitanAIController__IsShifter(__this,(MethodInfo *)0x0);
                if (!bVar3) {
                  pCVar2 = (__this->fields)._titan;
                  if (pCVar2 != (Characters_BaseTitan_o *)0x0) {
                    (*(pCVar2->klass->vtable)._163_Idle.methodPtr)
                              (pCVar2,0.2,(pCVar2->klass->vtable)._163_Idle.method);
                    pCVar2 = (__this->fields)._titan;
                    if (pCVar2 != (Characters_BaseTitan_o *)0x0) {
                      fVar4 = (pCVar2->fields).TurnPause;
                      fVar1 = (__this->fields).AttackWait;
                      if (fVar4 <= fVar1) {
                        fVar4 = fVar1;
                      }
                      (__this->fields).AIState = 6;
                      (pCVar2->fields).HasDirection = false;
                      (__this->fields)._waitAttackTimeLeft = fVar4;
                      return true;
                    }
                  }
                  goto label_1820f8cd3;
                }
              }
            }
            Controllers_BaseTitanAIController__TurnToEnemy(__this,(MethodInfo *)0x0);
            return true;
          }
          goto label_1820f8cd3;
        }
      }
      return false;
    }
    if ((__this->fields).AttackWait <= 0.0) {
      Controllers_BaseTitanAIController__Attack(__this,validAttacks,(MethodInfo *)0x0);
      return true;
    }
    pCVar2 = (__this->fields)._titan;
    (__this->fields).AIState = 6;
    if (pCVar2 != (Characters_BaseTitan_o *)0x0) {
      fVar4 = (__this->fields).AttackWait;
      (pCVar2->fields).HasDirection = false;
      (__this->fields)._waitAttackTimeLeft = fVar4;
      return true;
    }
  }
label_1820f8cd3:
  ThrowNullReferenceException();
}


// Controllers.BaseTitanAIController$$TurnToEnemy
// il2cpp: void Controllers_BaseTitanAIController__TurnToEnemy (Controllers_BaseTitanAIController_o* __this, const MethodInfo* method);
// 0x1820f8ce0

void Controllers_BaseTitanAIController__TurnToEnemy
               (Controllers_BaseTitanAIController_o *__this,MethodInfo *method)

{
  ushort uVar1;
  Il2CppObject *obj;
  Il2CppClass *pIVar2;
  Characters_BaseTitan_o *pCVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  VirtualInvokeData *pVVar5;
  UnityEngine_Vector3_o *pUVar6;
  ushort uVar7;
  float fVar8;
  UnityEngine_Vector3_Fields local_28;
  UnityEngine_Vector3_o local_18;
  
  if (Il2CppMethodInitialized_184346aa8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ITargetable);
    Il2CppMethodInitialized_184346aa8 = '\x01';
  }
  obj = (Il2CppObject *)(__this->fields)._enemy;
  (__this->fields).AIState = 5;
  (__this->fields)._moveAngle = 0.0;
  if (obj != (Il2CppObject *)0x0) {
    pIVar2 = obj->klass;
    pCVar3 = (__this->fields)._titan;
    uVar1 = (pIVar2->_2).interface_offsets_count;
    if (uVar1 != 0) {
      pIVar4 = (pIVar2->_1).interfaceOffsets;
      uVar7 = 0;
      do {
        if (pIVar4[uVar7].interfaceType == (Il2CppClass *)TypeInfo_Characters_ITargetable) {
          pVVar5 = pIVar2->vtable + (pIVar4[uVar7].offset + 1);
          goto label_1820f8d89;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar1);
    }
    pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath(obj,(Il2CppClass *)TypeInfo_Characters_ITargetable,1);
label_1820f8d89:
    pUVar6 = (*pVVar5->methodPtr)(&local_18,obj,pVVar5->method);
    local_28.x = (pUVar6->fields).x;
    local_28.y = (pUVar6->fields).y;
    local_28.z = (pUVar6->fields).z;
    fVar8 = Controllers_BaseTitanAIController__GetChaseAngle
                      (__this,(UnityEngine_Vector3_o *)&local_28,false,(MethodInfo *)0x0);
    if (pCVar3 != (Characters_BaseTitan_o *)0x0) {
      (pCVar3->fields).TargetAngle = fVar8;
      pCVar3 = (__this->fields)._titan;
      if (pCVar3 != (Characters_BaseTitan_o *)0x0) {
        pUVar6 = (*(pCVar3->klass->vtable)._106_GetTargetDirection.methodPtr)
                           (&local_18,pCVar3,(pCVar3->klass->vtable)._106_GetTargetDirection.method);
        local_28.x = (pUVar6->fields).x;
        local_28.y = (pUVar6->fields).y;
        local_28.z = (pUVar6->fields).z;
        (*(pCVar3->klass->vtable)._167_Turn.methodPtr)
                  (pCVar3,(UnityEngine_Vector3_o *)&local_28,(pCVar3->klass->vtable)._167_Turn.method);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Controllers.BaseTitanAIController$$GetRandomAttack
// il2cpp: System_String_o* Controllers_BaseTitanAIController__GetRandomAttack (Controllers_BaseTitanAIController_o* __this, System_Collections_Generic_List_string__o* validAttacks, const MethodInfo* method);
// 0x1820f63f0
// eh: try 0x1820f6570..0x1820f68f5 -> pad 0x183324cb0 (+4 call sites) catch Il2CppExceptionWrapper
// asm: 48 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820f66c1: mov rdx, qword ptr [rip + 0x1fa1250]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose
// asm:   0x1820f66c8: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x1820f66cd: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1820f66d2: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x1820f66d7: test rcx, rcx
// asm:   0x1820f66da: jne 0x1820f68da
// asm:   0x1820f66e0: mov r12, qword ptr [rsp + 0xd8]
// asm:   0x1820f66e8: mov rdi, qword ptr [rsp + 0xd0]
// asm:   0x1820f66f0: movss xmm6, dword ptr [rsp + 0xe8]
// asm:   0x1820f66f9: mov r14, qword ptr [rsp + 0x20]
// asm:   0x1820f66fe: xorps xmm7, xmm7
// asm:   0x1820f678f: nop 
// asm:   0x1820f684b: mov rdx, qword ptr [rip + 0x1fa10c6]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose
// asm:   0x1820f6852: mov rcx, rbx
// asm:   0x1820f6855: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1820f685a: mov rax, rsi
// asm:   0x1820f685d: jmp 0x1820f6719
// asm:   0x1820f687c: mov rdx, qword ptr [rip + 0x1fa1095]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose
// asm:   0x1820f6883: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x1820f6888: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1820f688d: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x1820f6892: test rcx, rcx
// asm:   0x1820f6895: jne 0x1820f68f5
// asm:   0x1820f6897: mov r12, qword ptr [rsp + 0xd8]
// asm:   0x1820f68da: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1820f68f5: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183318f20: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183318f25: push rbp
// asm:   0x183318f26: sub rsp, 0x20
// asm:   0x183318f2a: mov rbp, rdx
// asm:   0x183318f2d: mov rax, qword ptr [rbp + 0x30]
// asm:   0x183318f31: mov rcx, qword ptr [rax]
// asm:   0x183318f34: mov qword ptr [rbp + 0x38], rcx
// asm:   0x183318f38: movabs rax, 0
// asm:   0x183318f42: add rsp, 0x20
// asm:   0x183318f46: pop rbp
// asm:   0x183318f47: ret 
// asm:   0x183324cb0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183324cb5: push rbp
// asm:   0x183324cb6: sub rsp, 0x20
// asm:   0x183324cba: mov rbp, rdx
// asm:   0x183324cbd: mov rax, qword ptr [rbp + 0x28]
// asm:   0x183324cc1: mov rcx, qword ptr [rax]
// asm:   0x183324cc4: mov qword ptr [rbp + 0x38], rcx
// asm:   0x183324cc8: movabs rax, 0
// asm:   0x183324cd2: add rsp, 0x20
// asm:   0x183324cd6: pop rbp
// asm:   0x183324cd7: ret 

System_String_o *
Controllers_BaseTitanAIController__GetRandomAttack
          (Controllers_BaseTitanAIController_o *__this,System_Collections_Generic_List_string__o *validAttacks
          ,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  System_Collections_Generic_Dictionary_string__string__o *pSVar2;
  System_Collections_Generic_Dictionary_string__float__o *pSVar3;
  bool bVar4;
  int32_t iVar5;
  System_Collections_Generic_Dictionary_string__int__o *__this_00;
  System_String_o *pSVar6;
  System_String_o *pSVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 local_90 [16];
  System_String_o *local_80;
  undefined1 local_78 [8];
  uint64_t uStack_70;
  System_String_o *local_68;
  
  if (Il2CppMethodInitialized_184346aa9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_int_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_int_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_float_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_int_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_TitanAttackInfo_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_int_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_int);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Item);
    Il2CppMethodInitialized_184346aa9 = '\x01';
  }
  local_78 = (undefined1  [8])0x0;
  uStack_70 = 0;
  local_68 = (System_String_o *)0x0;
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_int);
  System_Collections_Generic_Dictionary_object__int____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_int_ctor);
  if (validAttacks == (System_Collections_Generic_List_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  fVar10 = 0.0;
  fVar9 = 0.0;
  System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_90,
             (System_Collections_Generic_List_T__o *)validAttacks,
             (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
  local_78 = (undefined1  [8])local_90._0_8_;
  uStack_70 = local_90._8_8_;
  local_68 = local_80;
  local_90._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_90._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_78;
  while (bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                           ((System_Collections_Generic_List_Enumerator_object__o *)local_78,
                            (MethodInfo_153A2A0 *)
                            MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext),
        pSVar7 = local_68, bVar4) {
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).AttackInfos;
    if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_Dictionary_object__object___get_Item
              (pSVar1,(Il2CppObject *)local_68,
               (MethodInfo_147A5B0 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_TitanAttackInfo_get_Item);
    pSVar2 = (__this->fields).AttackGroups;
    if (pSVar2 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar4 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,(Il2CppObject *)pSVar7,
                       (MethodInfo_1455450 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_string_ContainsKey);
    if (bVar4) {
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).AttackGroups;
      if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar6 = System_Collections_Generic_Dictionary_object__object___get_Item
                         (pSVar1,(Il2CppObject *)pSVar7,
                          (MethodInfo_147A5B0 *)
                          MethodInfo_System_Collections_Generic_Dictionary_string_string_get_Item);
      if (__this_00 == (System_Collections_Generic_Dictionary_string__int__o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar4 = System_Collections_Generic_Dictionary_object__int___ContainsKey
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                         (Il2CppObject *)pSVar6,
                         (MethodInfo_1455450 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_int_ContainsKey);
      if (!bVar4) {
        System_Collections_Generic_Dictionary_object__int___Add
                  ((System_Collections_Generic_Dictionary_object__int__o *)__this_00,(Il2CppObject *)pSVar6,0,
                   (MethodInfo_146B480 *)MethodInfo_System_Collections_Generic_Dictionary_string_int_Add);
        pSVar3 = (__this->fields).AttackChances;
        if (pSVar3 == (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
          ThrowNullReferenceException();
        }
        fVar8 = System_Collections_Generic_Dictionary_object__float___get_Item
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,
                           (Il2CppObject *)pSVar7,
                           (MethodInfo_1488BA0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_float_get_Item);
        fVar9 = fVar9 + fVar8;
      }
      iVar5 = System_Collections_Generic_Dictionary_object__int___get_Item
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                         (Il2CppObject *)pSVar6,
                         (MethodInfo_147A530 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_int_get_Item);
      System_Collections_Generic_Dictionary_object__int___set_Item
                ((System_Collections_Generic_Dictionary_object__int__o *)__this_00,(Il2CppObject *)pSVar6,
                 iVar5 + 1,
                 (MethodInfo_147A820 *)MethodInfo_System_Collections_Generic_Dictionary_string_int_set_Item);
    }
    else {
      pSVar3 = (__this->fields).AttackChances;
      if (pSVar3 == (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
        ThrowNullReferenceException();
      }
      fVar8 = System_Collections_Generic_Dictionary_object__float___get_Item
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,
                         (Il2CppObject *)pSVar7,
                         (MethodInfo_1488BA0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_float_get_Item);
      fVar9 = fVar9 + fVar8;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_78,
             MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
  if (fVar9 == 0.0) {
    pSVar7 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  else {
    fVar9 = UnityEngine_Random__Range(0.0,fVar9,(MethodInfo *)0x0);
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_90,
               (System_Collections_Generic_List_T__o *)validAttacks,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
    local_78 = (undefined1  [8])local_90._0_8_;
    uStack_70 = local_90._8_8_;
    local_68 = local_80;
    local_90._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_90._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_78;
    while (bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                             ((System_Collections_Generic_List_Enumerator_object__o *)local_78,
                              (MethodInfo_153A2A0 *)
                              MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext),
          pSVar7 = local_68, bVar4) {
      pSVar3 = (__this->fields).AttackChances;
      if (pSVar3 == (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
        ThrowNullReferenceException();
      }
      fVar8 = System_Collections_Generic_Dictionary_object__float___get_Item
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,
                         (Il2CppObject *)local_68,
                         (MethodInfo_1488BA0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_float_get_Item);
      pSVar2 = (__this->fields).AttackGroups;
      if (pSVar2 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar4 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
                         (Il2CppObject *)pSVar7,
                         (MethodInfo_1455450 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_string_ContainsKey);
      if (bVar4) {
        pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).AttackGroups;
        if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar6 = System_Collections_Generic_Dictionary_object__object___get_Item
                           (pSVar1,(Il2CppObject *)pSVar7,
                            (MethodInfo_147A5B0 *)
                            MethodInfo_System_Collections_Generic_Dictionary_string_string_get_Item);
        if (__this_00 == (System_Collections_Generic_Dictionary_string__int__o *)0x0) {
          ThrowNullReferenceException();
        }
        iVar5 = System_Collections_Generic_Dictionary_object__int___get_Item
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                           (Il2CppObject *)pSVar6,
                           (MethodInfo_147A530 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_int_get_Item);
        fVar8 = fVar8 / (float)iVar5;
      }
      if ((fVar10 <= fVar9) && (fVar9 < fVar8 + fVar10)) {
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_78,
                   MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
        return pSVar7;
      }
      fVar10 = fVar10 + fVar8;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_78,
               MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
    pSVar7 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                       ((System_Collections_Generic_List_object__o *)validAttacks,0,
                        (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_string_get_Item);
  }
  return pSVar7;
}


// Controllers.BaseTitanAIController$$GetValidAttacks
// il2cpp: System_Collections_Generic_List_string__o* Controllers_BaseTitanAIController__GetValidAttacks (Controllers_BaseTitanAIController_o* __this, bool farOnly, const MethodInfo* method);
// 0x1820f6900
// eh: try 0x1820f6dab..0x1820f704c -> pad 0x183333080 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 20 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820f6dae: nop 
// asm:   0x1820f6fc0: mov rdx, qword ptr [rip + 0x1fc7039]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_float_Dispose
// asm:   0x1820f6fc7: mov rcx, qword ptr [rsp + 0x78]
// asm:   0x1820f6fcc: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1820f6fd1: mov rcx, qword ptr [rsp + 0x70]
// asm:   0x1820f6fd6: test rcx, rcx
// asm:   0x1820f6fd9: jne 0x1820f704c
// asm:   0x1820f6fdb: mov r14, qword ptr [rsp + 0x40]
// asm:   0x1820f704c: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183333080: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183333085: push rbp
// asm:   0x183333086: sub rsp, 0x40
// asm:   0x18333308a: mov rbp, rdx
// asm:   0x18333308d: mov rax, qword ptr [rbp + 0xc0]
// asm:   0x183333094: mov rcx, qword ptr [rax]
// asm:   0x183333097: mov qword ptr [rbp + 0x70], rcx
// asm:   0x18333309b: movabs rax, 0
// asm:   0x1833330a5: add rsp, 0x40
// asm:   0x1833330a9: pop rbp
// asm:   0x1833330aa: ret 

System_Collections_Generic_List_string__o *
Controllers_BaseTitanAIController__GetValidAttacks
          (Controllers_BaseTitanAIController_o *__this,bool farOnly,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  undefined8 uVar4;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  undefined8 uVar5;
  byte bVar9;
  float fVar10;
  Characters_BaseTitan_o *pCVar11;
  Characters_BaseCharacter_o *pCVar12;
  UnityEngine_Vector3_StaticFields *pUVar13;
  Utility_BaseComponentCache_o *pUVar14;
  Characters_BaseCharacter_c *pCVar15;
  Characters_BaseCharacter_o *pCVar16;
  UnityEngine_Transform_o *__this_00;
  System_Collections_Generic_Dictionary_string__float__o *__this_01;
  System_Collections_Generic_Dictionary_object__object__o *__this_02;
  Il2CppObject *attack;
  bool bVar17;
  System_Collections_Generic_List_string__o *__this_03;
  void *pvVar18;
  undefined8 *puVar19;
  UnityEngine_Vector3_o *pUVar20;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_04;
  Characters_TitanAttackInfo_o *attack_00;
  UnityEngine_Transform_o *pUVar21;
  Characters_BaseCharacter_o *pCVar22;
  Characters_BaseCharacter_o *pCVar23;
  float attackSpeed;
  float local_res8;
  System_Collections_Generic_List_string__o *local_108;
  float local_100;
  UnityEngine_Vector3_Fields local_f8;
  float local_e8;
  Characters_BaseCharacter_o *local_e0;
  undefined1 local_d8 [16];
  System_String_o *local_c8;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o local_c0;
  UnityEngine_Vector3_Fields local_a8;
  UnityEngine_Vector3_Fields local_98 [8];
  
  if (Il2CppMethodInitialized_184346aaa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseTitan);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_TitanAttackInfo_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_float_get_Keys);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_float_Dispose
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_float_MoveNext
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_float_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ITargetable);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_float_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapTargetable);
    Il2CppMethodInitialized_184346aaa = '\x01';
  }
  local_c0.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_c0.fields._index = 0;
  local_c0.fields._version = 0;
  local_c0.fields._currentKey = (Il2CppObject *)0x0;
  __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_03,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  if ((__this->fields)._enemy == (Characters_ITargetable_o *)0x0) {
    return __this_03;
  }
  pvVar18 = InterfaceInvoker0_Invoke
                      (2,(Il2CppClass *)TypeInfo_Characters_ITargetable,
                       (Il2CppObject *)(__this->fields)._enemy);
  if ((char)pvVar18 == '\0') {
    return __this_03;
  }
  pCVar11 = (__this->fields)._titan;
  if (pCVar11 == (Characters_BaseTitan_o *)0x0) goto label_1820f700e;
  bVar17 = (*(pCVar11->klass->vtable)._151_CanAttack.methodPtr)
                     (pCVar11,(pCVar11->klass->vtable)._151_CanAttack.method);
  if (!bVar17) {
    return __this_03;
  }
  if ((__this->fields)._enemy == (Characters_ITargetable_o *)0x0) goto label_1820f700e;
  puVar19 = (undefined8 *)il2cpp_runtime_helper_180027220(&local_f8,1,TypeInfo_Characters_ITargetable);
  uVar4 = *puVar19;
  local_e8 = *(float *)(puVar19 + 1);
  if (Il2CppMethodInitialized_18433dbea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433dbea = '\x01';
  }
  pCVar12 = (Characters_BaseCharacter_o *)(__this->fields)._enemy;
  if (pCVar12 == (Characters_BaseCharacter_o *)0x0) {
    local_e0 = (Characters_BaseCharacter_o *)0x0;
    pCVar22 = (Characters_BaseCharacter_o *)0x0;
    pUVar13 = TypeInfo_UnityEngine_Vector3->static_fields;
    uVar1 = (pUVar13->zeroVector).fields.x;
    uVar6 = (pUVar13->zeroVector).fields.y;
    local_res8 = (pUVar13->zeroVector).fields.z;
    fVar3 = (float)uVar1;
    fVar8 = (float)uVar6;
label_1820f6adc:
    pCVar12 = (__this->fields)._character;
    if (((pCVar12 == (Characters_BaseCharacter_o *)0x0) ||
        (pUVar14 = (pCVar12->fields).Cache, pUVar14 == (Utility_BaseComponentCache_o *)0x0)) ||
       ((__this->fields)._enemy == (Characters_ITargetable_o *)0x0)) goto label_1820f700e;
    pUVar21 = (pUVar14->fields).Transform;
    pCVar23 = local_e0;
label_1820f6ce5:
    pUVar20 = (UnityEngine_Vector3_o *)il2cpp_runtime_helper_180027220(&local_f8,1,TypeInfo_Characters_ITargetable);
  }
  else {
    pCVar15 = pCVar12->klass;
    bVar9 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
    if (((pCVar15->_2).typeHierarchyDepth < bVar9) ||
       ((pCVar15->_2).typeHierarchy[(ulonglong)bVar9 - 1] != (Il2CppClass *)TypeInfo_Characters_Human)) {
      bVar17 = false;
    }
    else {
      bVar17 = true;
    }
    pCVar22 = (Characters_BaseCharacter_o *)0x0;
    if (bVar17) {
      pCVar22 = pCVar12;
    }
    bVar9 = (TypeInfo_Map_MapTargetable->_2).typeHierarchyDepth;
    if (((pCVar15->_2).typeHierarchyDepth < bVar9) ||
       ((pCVar15->_2).typeHierarchy[(ulonglong)bVar9 - 1] != (Il2CppClass *)TypeInfo_Map_MapTargetable)) {
      bVar17 = false;
    }
    else {
      bVar17 = true;
    }
    pCVar23 = (Characters_BaseCharacter_o *)0x0;
    if (bVar17) {
      pCVar23 = pCVar12;
    }
    local_e0 = pCVar23;
    if (pCVar22 != (Characters_BaseCharacter_o *)0x0) {
      bVar9 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
      if (((pCVar15->_2).typeHierarchyDepth < bVar9) ||
         ((pCVar15->_2).typeHierarchy[(ulonglong)bVar9 - 1] != (Il2CppClass *)TypeInfo_Characters_Human)) {
        il2cpp_codegen_raise_invalid_cast_exception(pCVar12);
      }
      pUVar20 = Characters_BaseCharacter__GetVelocity
                          ((UnityEngine_Vector3_o *)&local_f8,pCVar12,(MethodInfo *)0x0);
      pCVar12 = (__this->fields)._character;
      if (((pCVar12 == (Characters_BaseCharacter_o *)0x0) ||
          (pUVar14 = (pCVar12->fields).Cache, pUVar14 == (Utility_BaseComponentCache_o *)0x0)) ||
         ((__this->fields)._enemy == (Characters_ITargetable_o *)0x0)) goto label_1820f700e;
      fVar3 = (pUVar20->fields).x;
      fVar8 = (pUVar20->fields).y;
      local_res8 = (pUVar20->fields).z;
      pUVar21 = (pUVar14->fields).Transform;
      goto label_1820f6ce5;
    }
    pUVar13 = TypeInfo_UnityEngine_Vector3->static_fields;
    uVar2 = (pUVar13->zeroVector).fields.x;
    uVar7 = (pUVar13->zeroVector).fields.y;
    local_res8 = (pUVar13->zeroVector).fields.z;
    fVar3 = (float)uVar2;
    fVar8 = (float)uVar7;
    if (((pCVar12 == (Characters_BaseCharacter_o *)0x0) ||
        (bVar9 = (TypeInfo_Characters_BaseTitan->_2).typeHierarchyDepth,
        (pCVar15->_2).typeHierarchyDepth < bVar9)) ||
       ((pCVar15->_2).typeHierarchy[(ulonglong)bVar9 - 1] != (Il2CppClass *)TypeInfo_Characters_BaseTitan))
    goto label_1820f6adc;
    if ((pCVar12 != (Characters_BaseCharacter_o *)0x0) &&
       ((bVar9 = (TypeInfo_Characters_BaseTitan->_2).typeHierarchyDepth,
        (pCVar15->_2).typeHierarchyDepth < bVar9 ||
        ((pCVar15->_2).typeHierarchy[(ulonglong)bVar9 - 1] != (Il2CppClass *)TypeInfo_Characters_BaseTitan))))
    {
      il2cpp_codegen_raise_invalid_cast_exception(pCVar12);
    }
    pCVar16 = (__this->fields)._character;
    if ((((pCVar16 == (Characters_BaseCharacter_o *)0x0) ||
         (pUVar14 = (pCVar16->fields).Cache, pUVar14 == (Utility_BaseComponentCache_o *)0x0)) ||
        (pCVar12 == (Characters_BaseCharacter_o *)0x0)) ||
       (((*(uint64_t *)((char *)pCVar12 + 0x100)) == (void *)0x0 ||
        (__this_00 = *(UnityEngine_Transform_o **)((longlong)(*(uint64_t *)((char *)pCVar12 + 0x100)) + 0x50),
        __this_00 == (UnityEngine_Transform_o *)0x0)))) goto label_1820f700e;
    pUVar21 = (pUVar14->fields).Transform;
    pUVar20 = UnityEngine_Transform__get_position
                        ((UnityEngine_Vector3_o *)&local_f8,__this_00,(MethodInfo *)0x0);
  }
  if (pUVar21 != (UnityEngine_Transform_o *)0x0) {
    local_108 = *(System_Collections_Generic_List_string__o **)&pUVar20->fields;
    local_100 = (pUVar20->fields).z;
    pUVar20 = UnityEngine_Transform__InverseTransformPoint
                        ((UnityEngine_Vector3_o *)&local_f8,pUVar21,(UnityEngine_Vector3_o *)&local_108,
                         (MethodInfo *)0x0);
    uVar5._0_4_ = (pUVar20->fields).x;
    uVar5._4_4_ = (pUVar20->fields).y;
    fVar10 = (pUVar20->fields).z;
    __this_01 = (__this->fields).AttackChances;
    if ((__this_01 != (System_Collections_Generic_Dictionary_string__float__o *)0x0) &&
       (local_108 = __this_03,
       __this_04 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
                   System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys
                             ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
                              (MethodInfo_13C6500 *)
                              MethodInfo_System_Collections_Generic_Dictionary_string_float_get_Keys),
       __this_04 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
      System_Collections_Generic_Dictionary_ValueCollection_fsPortableReflection_AttributeQuery__object___GetEnumerator
                ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)local_d8,
                 __this_04,
                 (MethodInfo_F1E4D0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_float_GetEnumerator);
      local_c0.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)local_d8._0_8_;
      local_c0.fields._index = local_d8._8_4_;
      local_c0.fields._version = local_d8._12_4_;
      local_c0.fields._currentKey = (Il2CppObject *)local_c8;
      local_d8._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
      local_d8._8_8_ = &local_c0;
      while( true ) {
        bVar17 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__StyleComplexSelector_PseudoStateData___MoveNext
                           (&local_c0,
                            (MethodInfo_156BDD0 *)
                            MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_float_MoveNext
                           );
        attack = local_c0.fields._currentKey;
        if (!bVar17) {
          System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__float___Dispose
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_c0,
                     MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_float_Dispose
                    );
          return __this_03;
        }
        __this_02 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).AttackInfos;
        if (__this_02 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          ThrowNullReferenceException();
        }
        attack_00 = System_Collections_Generic_Dictionary_object__object___get_Item
                              (__this_02,local_c0.fields._currentKey,
                               (MethodInfo_147A5B0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_string_TitanAttackInfo_get_Item
                              );
        if (pCVar23 == (Characters_BaseCharacter_o *)0x0) break;
        if (attack_00 == (Characters_TitanAttackInfo_o *)0x0) {
          ThrowNullReferenceException();
        }
        bVar17 = (attack_00->fields).MapObject == false;
label_1820f6e1c:
        if (!bVar17) {
label_1820f6e1e:
          if (((!farOnly) || ((attack_00->fields).FarOnly != false)) &&
             (((attack_00->fields).FarOnly == false || ((__this->fields)._rangedCooldownLeft <= 0.0)))) {
            pCVar11 = (__this->fields)._titan;
            if (pCVar11 == (Characters_BaseTitan_o *)0x0) {
              ThrowNullReferenceException();
            }
            bVar17 = Characters_BaseTitan__CanUseAttack(pCVar11,attack_00,(MethodInfo *)0x0);
            if (bVar17) {
              if (((((__this->fields).SmartAttack == false) || ((attack_00->fields).FarOnly != false)) ||
                  (pCVar22 == (Characters_BaseCharacter_o *)0x0)) ||
                 ((attack_00->fields).HasKeyframes == false)) {
                local_f8._0_8_ = uVar5;
                local_f8.z = fVar10;
                bVar17 = Characters_TitanAttackInfo__CheckSimpleAttack
                                   (attack_00,(UnityEngine_Vector3_o *)&local_f8,(MethodInfo *)0x0);
                if (bVar17) {
                  if (__this_03 == (System_Collections_Generic_List_string__o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  il2cpp_runtime_helper_180012890(__this_03,attack,MethodInfo_System_Collections_Generic_List_string_Add);
                }
              }
              else {
                pCVar11 = (__this->fields)._titan;
                if (pCVar11 == (Characters_BaseTitan_o *)0x0) {
                  ThrowNullReferenceException();
                }
                pUVar14 = (pCVar11->fields).Cache;
                if (pUVar14 == (Utility_BaseComponentCache_o *)0x0) {
                  ThrowNullReferenceException();
                }
                pUVar21 = (pUVar14->fields).Transform;
                attackSpeed = Characters_BaseTitan__GetAttackSpeed
                                        (pCVar11,(System_String_o *)attack,(MethodInfo *)0x0);
                pCVar11 = (__this->fields)._titan;
                if (pCVar11 == (Characters_BaseTitan_o *)0x0) {
                  ThrowNullReferenceException();
                }
                local_a8.y = fVar8;
                local_a8.x = fVar3;
                local_a8.z = local_res8;
                local_98[0].z = local_e8;
                local_98[0]._0_8_ = uVar4;
                bVar17 = Characters_TitanAttackInfo__CheckSmartAttack
                                   (attack_00,pUVar21,(UnityEngine_Vector3_o *)local_98,
                                    (UnityEngine_Vector3_o *)&local_a8,attackSpeed,(pCVar11->fields).Size,
                                    (MethodInfo *)0x0);
                pCVar23 = local_e0;
                if (bVar17) {
                  if (__this_03 == (System_Collections_Generic_List_string__o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  il2cpp_runtime_helper_180012890(__this_03,attack,MethodInfo_System_Collections_Generic_List_string_Add);
                }
              }
            }
          }
        }
      }
      if (attack_00 == (Characters_TitanAttackInfo_o *)0x0) {
        ThrowNullReferenceException();
      }
      if ((attack_00->fields).HumanOnly != false) {
        bVar17 = pCVar22 == (Characters_BaseCharacter_o *)0x0;
        goto label_1820f6e1c;
      }
      goto label_1820f6e1e;
    }
  }
label_1820f700e:
  ThrowNullReferenceException();
}


// Controllers.BaseTitanAIController$$.ctor
// il2cpp: void Controllers_BaseTitanAIController___ctor (Controllers_BaseTitanAIController_o* __this, const MethodInfo* method);
// 0x1820f98a0

void Controllers_BaseTitanAIController___ctor(Controllers_BaseTitanAIController_o *__this,MethodInfo *method)

{
  UnityEngine_LayerMask_o UVar1;
  System_Collections_Generic_Dictionary_string__float__o *__this_00;
  System_Collections_Generic_Dictionary_string__string__o *__this_01;
  System_Int32_array *layers;
  
  if (Il2CppMethodInitialized_184346aab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_float_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_int_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_PhysicsLayer);
    Il2CppMethodInitialized_184346aab = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_float);
  System_Collections_Generic_Dictionary_object__float____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_float_ctor);
  (__this->fields).AttackChances = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).AttackChances,__this_00);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_string);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
  (__this->fields).AttackGroups = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields).AttackGroups,__this_01);
  layers = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,4);
  if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
  }
  if (layers != (System_Int32_array *)0x0) {
    if (((((int)layers->max_length != 0) &&
         (layers->m_Items[0] = TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectEntities,
         1 < (uint)layers->max_length)) &&
        (layers->m_Items[1] = TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectCharacters,
        2 < (uint)layers->max_length)) &&
       (layers->m_Items[2] = TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectTitans,
       3 < (uint)layers->max_length)) {
      layers->m_Items[3] = TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectAll;
      UVar1 = Utility_PhysicsLayer__GetMask(layers,(MethodInfo *)0x0);
      (__this->fields)._losLayer.fields.m_Mask = (int32_t)UVar1.fields.m_Mask;
      (__this->fields)._usePathfinding = true;
      (__this->fields).DetectRange = 10000.0;
      (__this->fields).FocusTime = 5.0;
      (__this->fields).FocusRange = INFINITY;
      (__this->fields)._aiEnabled = true;
      UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
      return;
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


// Controllers.BaseTitanAIController$$.cctor
// il2cpp: void Controllers_BaseTitanAIController___cctor (const MethodInfo* method);
// 0x1820f9800

void Controllers_BaseTitanAIController___cctor(MethodInfo *method)

{
  System_Single_array *value;
  
  if (Il2CppMethodInitialized_184346aac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Controllers_BaseTitanAIController);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_float_array);
    Il2CppMethodInitialized_184346aac = '\x01';
  }
  value = (System_Single_array *)SZArrayNew(TypeInfo_float_array,2);
  if (value != (System_Single_array *)0x0) {
    if (((int)value->max_length != 0) && (value->m_Items[0] = 40.0, 1 < (uint)value->max_length)) {
      value->m_Items[1] = 80.0;
      TypeInfo_Controllers_BaseTitanAIController->static_fields->AvoidProbeAngles = value;
      Il2CppCodeGenWriteBarrier
                (&TypeInfo_Controllers_BaseTitanAIController->static_fields->AvoidProbeAngles,value);
      return;
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


