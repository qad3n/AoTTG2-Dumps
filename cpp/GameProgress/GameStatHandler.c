// Type: GameProgress.GameStatHandler
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/GameProgress/GameStatHandler.cs
// Prior real C# source (older reference): Assets/Scripts/GameProgress/GameStatHandler.cs
// --------------------------------

// GameProgress.GameStatHandler$$.ctor
// il2cpp: void GameProgress_GameStatHandler___ctor (GameProgress_GameStatHandler_o* __this, GameProgress_GameStatContainer_o* gameStat, const MethodInfo* method);
// 0x181e36a50
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e36b6f: nop 

void GameProgress_GameStatHandler___ctor
               (GameProgress_GameStatHandler_o *__this,GameProgress_GameStatContainer_o *gameStat,
               MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_uint__o *__this_00;
  System_UInt32_array *pSVar3;
  System_Collections_Generic_List_RegexCharClass_SingleRange__o *__this_01;
  System_Text_RegularExpressions_RegexCharClass_SingleRange_array *pSVar4;
  MethodInfo *pMVar5;
  System_Text_RegularExpressions_RegexCharClass_SingleRange_o SVar6;
  System_Collections_Generic_List_int__o *__this_02;
  int iVar7;
  float fVar8;
  
  if (Il2CppMethodInitialized_184344dc9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_int);
    Il2CppMethodInitialized_184344dc9 = '\x01';
  }
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_int);
  System_Collections_Generic_List_int____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_02,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_int_ctor);
  (__this->fields)._expPerLevel = __this_02;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._expPerLevel,__this_02);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._gameStat = gameStat;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._gameStat,gameStat);
  pMVar5 = MethodInfo_System_Collections_Generic_List_int_Add;
  __this_00 = (System_Collections_Generic_List_uint__o *)(__this->fields)._expPerLevel;
  if (__this_00 != (System_Collections_Generic_List_uint__o *)0x0) {
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (__this_00->fields)._items;
    if (pSVar3 != (System_UInt32_array *)0x0) {
      uVar2 = (__this_00->fields)._size;
      if (uVar2 < (uint)pSVar3->max_length) {
        (__this_00->fields)._size = uVar2 + 1;
        if ((uint)pSVar3->max_length <= uVar2) {
label_181e36c1d:
          ThrowIndexOutOfRangeException();
        }
        pSVar3->m_Items[(int)uVar2] = 500;
      }
      else {
        System_Collections_Generic_List_uint___AddWithResize
                  (__this_00,500,(MethodInfo_91A500 *)pMVar5->klass->rgctx_data[0xe].method);
      }
      iVar7 = 1;
      while (__this_01 = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)
                         (__this->fields)._expPerLevel,
            __this_01 != (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)0x0) {
        SVar6 = System_Collections_Generic_List_RegexCharClass_SingleRange___get_Item
                          (__this_01,iVar7 + -1,
                           (MethodInfo_92B8E0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
        pMVar5 = MethodInfo_System_Collections_Generic_List_int_Add;
        fVar8 = (float)(int)SVar6.fields * 1.2;
        if (2000.0 <= fVar8) {
          fVar8 = 2000.0;
        }
        piVar1 = &(__this_01->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar4 = (__this_01->fields)._items;
        if (pSVar4 == (System_Text_RegularExpressions_RegexCharClass_SingleRange_array *)0x0) break;
        uVar2 = (__this_01->fields)._size;
        if (uVar2 < (uint)pSVar4->max_length) {
          (__this_01->fields)._size = uVar2 + 1;
          if ((uint)pSVar4->max_length <= uVar2) goto label_181e36c1d;
          pSVar4->m_Items[(int)uVar2].fields =
               (System_Text_RegularExpressions_RegexCharClass_SingleRange_Fields)(int)fVar8;
        }
        else {
          System_Collections_Generic_List_uint___AddWithResize
                    ((System_Collections_Generic_List_uint__o *)__this_01,(int)fVar8,
                     (MethodInfo_91A500 *)pMVar5->klass->rgctx_data[0xe].method);
        }
        iVar7 = iVar7 + 1;
        if (0x31 < iVar7) {
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// GameProgress.GameStatHandler$$GetExpToNext
// il2cpp: int32_t GameProgress_GameStatHandler__GetExpToNext (GameProgress_GameStatHandler_o* __this, const MethodInfo* method);
// 0x181e366d0

int32_t GameProgress_GameStatHandler__GetExpToNext(GameProgress_GameStatHandler_o *__this,MethodInfo *method)

{
  GameProgress_GameStatContainer_o *pGVar1;
  Settings_IntSetting_o *pSVar2;
  System_Collections_Generic_List_RegexCharClass_SingleRange__o *__this_00;
  int32_t iVar4;
  System_Text_RegularExpressions_RegexCharClass_SingleRange_o SVar3;
  
  if (Il2CppMethodInitialized_184344dca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_184344dca = '\x01';
  }
  pGVar1 = (__this->fields)._gameStat;
  if ((pGVar1 != (GameProgress_GameStatContainer_o *)0x0) &&
     (pSVar2 = (pGVar1->fields).Level, pSVar2 != (Settings_IntSetting_o *)0x0)) {
    if (0x31 < (pSVar2->fields)._value) {
      return 0;
    }
    __this_00 = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)(__this->fields)._expPerLevel
    ;
    if (__this_00 != (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)0x0) {
      SVar3 = System_Collections_Generic_List_RegexCharClass_SingleRange___get_Item
                        (__this_00,(((pGVar1->fields).Level)->fields)._value,
                         (MethodInfo_92B8E0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
      iVar4._0_2_ = SVar3.fields.First;
      iVar4._2_2_ = SVar3.fields.Last;
      return iVar4;
    }
  }
  ThrowNullReferenceException();
}


// GameProgress.GameStatHandler$$AddExp
// il2cpp: void GameProgress_GameStatHandler__AddExp (GameProgress_GameStatHandler_o* __this, int32_t exp, const MethodInfo* method);
// 0x181e36400

void GameProgress_GameStatHandler__AddExp
               (GameProgress_GameStatHandler_o *__this,int32_t exp,MethodInfo *method)

{
  int iVar1;
  GameProgress_GameStatContainer_o *pGVar2;
  Settings_IntSetting_o *pSVar3;
  Settings_IntSetting_o *__this_00;
  System_Collections_Generic_List_RegexCharClass_SingleRange__o *__this_01;
  System_Text_RegularExpressions_RegexCharClass_SingleRange_o SVar4;
  
  if (Il2CppMethodInitialized_184344dcb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    Il2CppMethodInitialized_184344dcb = '\x01';
  }
  pGVar2 = (__this->fields)._gameStat;
  if ((pGVar2 != (GameProgress_GameStatContainer_o *)0x0) &&
     (pSVar3 = (pGVar2->fields).Exp, pSVar3 != (Settings_IntSetting_o *)0x0)) {
    Settings_TypedSetting_int___set_Value
              ((Settings_TypedSetting_int__o *)pSVar3,(pSVar3->fields)._value + exp,
               (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
    if (Il2CppMethodInitialized_184344dcc == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Item);
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
      Il2CppMethodInitialized_184344dcc = '\x01';
    }
    pGVar2 = (__this->fields)._gameStat;
    if (((pGVar2 != (GameProgress_GameStatContainer_o *)0x0) &&
        (pSVar3 = (pGVar2->fields).Level, pSVar3 != (Settings_IntSetting_o *)0x0)) &&
       (__this_00 = (pGVar2->fields).Exp, __this_00 != (Settings_IntSetting_o *)0x0)) {
      if ((pSVar3->fields)._value < 0x32) {
        if ((__this_00->fields)._value < 1) {
          return;
        }
        __this_01 = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)
                    (__this->fields)._expPerLevel;
        if (__this_01 != (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)0x0) {
          iVar1 = (((pGVar2->fields).Exp)->fields)._value;
          SVar4 = System_Collections_Generic_List_RegexCharClass_SingleRange___get_Item
                            (__this_01,(((pGVar2->fields).Level)->fields)._value,
                             (MethodInfo_92B8E0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
          if (iVar1 < (int)SVar4.fields) {
            return;
          }
          pGVar2 = (__this->fields)._gameStat;
          if ((pGVar2 != (GameProgress_GameStatContainer_o *)0x0) &&
             (pSVar3 = (pGVar2->fields).Level, pSVar3 != (Settings_IntSetting_o *)0x0)) {
            Settings_TypedSetting_int___set_Value
                      ((Settings_TypedSetting_int__o *)pSVar3,(pSVar3->fields)._value + 1,
                       (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
            pGVar2 = (__this->fields)._gameStat;
            if ((pGVar2 != (GameProgress_GameStatContainer_o *)0x0) &&
               (pSVar3 = (pGVar2->fields).Exp, pSVar3 != (Settings_IntSetting_o *)0x0)) {
              Settings_TypedSetting_int___set_Value
                        ((Settings_TypedSetting_int__o *)pSVar3,0,
                         (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
              return;
            }
          }
        }
      }
      else {
        Settings_TypedSetting_int___set_Value
                  ((Settings_TypedSetting_int__o *)__this_00,0,
                   (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
        pGVar2 = (__this->fields)._gameStat;
        if ((pGVar2 != (GameProgress_GameStatContainer_o *)0x0) &&
           (pSVar3 = (pGVar2->fields).Level, pSVar3 != (Settings_IntSetting_o *)0x0)) {
          Settings_TypedSetting_int___set_Value
                    ((Settings_TypedSetting_int__o *)pSVar3,0x32,
                     (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// GameProgress.GameStatHandler$$CheckLevelUp
// il2cpp: void GameProgress_GameStatHandler__CheckLevelUp (GameProgress_GameStatHandler_o* __this, const MethodInfo* method);
// 0x181e36590

void GameProgress_GameStatHandler__CheckLevelUp(GameProgress_GameStatHandler_o *__this,MethodInfo *method)

{
  int iVar1;
  GameProgress_GameStatContainer_o *pGVar2;
  Settings_IntSetting_o *pSVar3;
  Settings_IntSetting_o *__this_00;
  System_Collections_Generic_List_RegexCharClass_SingleRange__o *__this_01;
  System_Text_RegularExpressions_RegexCharClass_SingleRange_o SVar4;
  
  if (Il2CppMethodInitialized_184344dcc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    Il2CppMethodInitialized_184344dcc = '\x01';
  }
  pGVar2 = (__this->fields)._gameStat;
  if (((pGVar2 != (GameProgress_GameStatContainer_o *)0x0) &&
      (pSVar3 = (pGVar2->fields).Level, pSVar3 != (Settings_IntSetting_o *)0x0)) &&
     (__this_00 = (pGVar2->fields).Exp, __this_00 != (Settings_IntSetting_o *)0x0)) {
    if ((pSVar3->fields)._value < 0x32) {
      if ((__this_00->fields)._value < 1) {
        return;
      }
      __this_01 = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)
                  (__this->fields)._expPerLevel;
      if (__this_01 != (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)0x0) {
        iVar1 = (((pGVar2->fields).Exp)->fields)._value;
        SVar4 = System_Collections_Generic_List_RegexCharClass_SingleRange___get_Item
                          (__this_01,(((pGVar2->fields).Level)->fields)._value,
                           (MethodInfo_92B8E0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
        if (iVar1 < (int)SVar4.fields) {
          return;
        }
        pGVar2 = (__this->fields)._gameStat;
        if ((pGVar2 != (GameProgress_GameStatContainer_o *)0x0) &&
           (pSVar3 = (pGVar2->fields).Level, pSVar3 != (Settings_IntSetting_o *)0x0)) {
          Settings_TypedSetting_int___set_Value
                    ((Settings_TypedSetting_int__o *)pSVar3,(pSVar3->fields)._value + 1,
                     (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
          pGVar2 = (__this->fields)._gameStat;
          if ((pGVar2 != (GameProgress_GameStatContainer_o *)0x0) &&
             (pSVar3 = (pGVar2->fields).Exp, pSVar3 != (Settings_IntSetting_o *)0x0)) {
            Settings_TypedSetting_int___set_Value
                      ((Settings_TypedSetting_int__o *)pSVar3,0,
                       (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
            return;
          }
        }
      }
    }
    else {
      Settings_TypedSetting_int___set_Value
                ((Settings_TypedSetting_int__o *)__this_00,0,
                 (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
      pGVar2 = (__this->fields)._gameStat;
      if ((pGVar2 != (GameProgress_GameStatContainer_o *)0x0) &&
         (pSVar3 = (pGVar2->fields).Level, pSVar3 != (Settings_IntSetting_o *)0x0)) {
        Settings_TypedSetting_int___set_Value
                  ((Settings_TypedSetting_int__o *)pSVar3,0x32,
                   (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// GameProgress.GameStatHandler$$RegisterTitanKill
// il2cpp: void GameProgress_GameStatHandler__RegisterTitanKill (GameProgress_GameStatHandler_o* __this, Characters_BasicTitan_o* victim, GameProgress_KillMethod_o method, const MethodInfo* method);
// 0x181e36960

void GameProgress_GameStatHandler__RegisterTitanKill
               (GameProgress_GameStatHandler_o *__this,Characters_BasicTitan_o *victim,
               GameProgress_KillMethod_o *method,MethodInfo *methodInfo)

{
  int iVar1;
  GameProgress_GameStatContainer_o *pGVar2;
  Settings_IntSetting_o *pSVar3;
  
  if (Il2CppMethodInitialized_184344dcd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    Il2CppMethodInitialized_184344dcd = '\x01';
  }
  iVar1 = (method->fields).Weapon;
  pGVar2 = (__this->fields)._gameStat;
  if (iVar1 == 0) {
    if (pGVar2 == (GameProgress_GameStatContainer_o *)0x0) goto label_181e36a42;
    pSVar3 = (pGVar2->fields).TitansKilledBlade;
  }
  else if (iVar1 == 1) {
    if (pGVar2 == (GameProgress_GameStatContainer_o *)0x0) goto label_181e36a42;
    pSVar3 = (pGVar2->fields).TitansKilledAHSS;
  }
  else if (iVar1 == 2) {
    if (pGVar2 == (GameProgress_GameStatContainer_o *)0x0) goto label_181e36a42;
    pSVar3 = (pGVar2->fields).TitansKilledThunderspear;
  }
  else if (iVar1 == 3) {
    if (pGVar2 == (GameProgress_GameStatContainer_o *)0x0) goto label_181e36a42;
    pSVar3 = (pGVar2->fields).TitansKilledAPG;
  }
  else {
    if (pGVar2 == (GameProgress_GameStatContainer_o *)0x0) goto label_181e36a42;
    pSVar3 = (pGVar2->fields).TitansKilledOther;
  }
  if (pSVar3 != (Settings_IntSetting_o *)0x0) {
    Settings_TypedSetting_int___set_Value
              ((Settings_TypedSetting_int__o *)pSVar3,(pSVar3->fields)._value + 1,
               (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
    pGVar2 = (__this->fields)._gameStat;
    if ((pGVar2 != (GameProgress_GameStatContainer_o *)0x0) &&
       (pSVar3 = (pGVar2->fields).TitansKilledTotal, pSVar3 != (Settings_IntSetting_o *)0x0)) {
      Settings_TypedSetting_int___set_Value
                ((Settings_TypedSetting_int__o *)pSVar3,(pSVar3->fields)._value + 1,
                 (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
      GameProgress_GameStatHandler__AddExp(__this,10,(MethodInfo *)0x0);
      return;
    }
  }
label_181e36a42:
  ThrowNullReferenceException();
}


// GameProgress.GameStatHandler$$RegisterHumanKill
// il2cpp: void GameProgress_GameStatHandler__RegisterHumanKill (GameProgress_GameStatHandler_o* __this, Characters_Human_o* victim, GameProgress_KillMethod_o method, const MethodInfo* method);
// 0x181e36790

void GameProgress_GameStatHandler__RegisterHumanKill
               (GameProgress_GameStatHandler_o *__this,Characters_Human_o *victim,
               GameProgress_KillMethod_o *method,MethodInfo *methodInfo)

{
  GameProgress_GameStatContainer_o *pGVar1;
  Settings_IntSetting_o *pSVar2;
  
  if (Il2CppMethodInitialized_184344dce == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    Il2CppMethodInitialized_184344dce = '\x01';
  }
  switch((method->fields).Weapon) {
  case 0:
    pGVar1 = (__this->fields)._gameStat;
    if (pGVar1 == (GameProgress_GameStatContainer_o *)0x0) goto label_181e368b3;
    pSVar2 = (pGVar1->fields).HumansKilledBlade;
    break;
  case 1:
    pGVar1 = (__this->fields)._gameStat;
    if (pGVar1 == (GameProgress_GameStatContainer_o *)0x0) goto label_181e368b3;
    pSVar2 = (pGVar1->fields).HumansKilledAHSS;
    break;
  case 2:
    pGVar1 = (__this->fields)._gameStat;
    if (pGVar1 == (GameProgress_GameStatContainer_o *)0x0) goto label_181e368b3;
    pSVar2 = (pGVar1->fields).HumansKilledThunderspear;
    break;
  case 3:
    pGVar1 = (__this->fields)._gameStat;
    if (pGVar1 == (GameProgress_GameStatContainer_o *)0x0) goto label_181e368b3;
    pSVar2 = (pGVar1->fields).HumansKilledAPG;
    break;
  default:
    pGVar1 = (__this->fields)._gameStat;
    if (pGVar1 == (GameProgress_GameStatContainer_o *)0x0) goto label_181e368b3;
    pSVar2 = (pGVar1->fields).HumansKilledOther;
    break;
  case 6:
    pGVar1 = (__this->fields)._gameStat;
    if (pGVar1 == (GameProgress_GameStatContainer_o *)0x0) goto label_181e368b3;
    pSVar2 = (pGVar1->fields).HumansKilledTitan;
  }
  if (pSVar2 != (Settings_IntSetting_o *)0x0) {
    Settings_TypedSetting_int___set_Value
              ((Settings_TypedSetting_int__o *)pSVar2,(pSVar2->fields)._value + 1,
               (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
    pGVar1 = (__this->fields)._gameStat;
    if ((pGVar1 != (GameProgress_GameStatContainer_o *)0x0) &&
       (pSVar2 = (pGVar1->fields).HumansKilledTotal, pSVar2 != (Settings_IntSetting_o *)0x0)) {
      Settings_TypedSetting_int___set_Value
                ((Settings_TypedSetting_int__o *)pSVar2,(pSVar2->fields)._value + 1,
                 (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
      GameProgress_GameStatHandler__AddExp(__this,10,(MethodInfo *)0x0);
      return;
    }
  }
label_181e368b3:
  ThrowNullReferenceException();
}


// GameProgress.GameStatHandler$$RegisterDamage
// il2cpp: void GameProgress_GameStatHandler__RegisterDamage (GameProgress_GameStatHandler_o* __this, UnityEngine_GameObject_o* victim, GameProgress_KillMethod_o method, int32_t damage, const MethodInfo* method);
// 0x181e36750

void GameProgress_GameStatHandler__RegisterDamage
               (GameProgress_GameStatHandler_o *__this,UnityEngine_GameObject_o *victim,
               GameProgress_KillMethod_o *method,int32_t damage,MethodInfo *methodInfo)

{
  GameProgress_GameStatContainer_o *pGVar1;
  GameProgress_DamageSetting_o *__this_00;
  GameProgress_KillMethod_Fields local_18;
  
  pGVar1 = (__this->fields)._gameStat;
  if ((pGVar1 != (GameProgress_GameStatContainer_o *)0x0) &&
     (__this_00 = (pGVar1->fields).Damage, __this_00 != (GameProgress_DamageSetting_o *)0x0)) {
    local_18.Weapon = (method->fields).Weapon;
    local_18._4_4_ = *(undefined4 *)&(method->fields).field_0x4;
    local_18.Special = (method->fields).Special;
    GameProgress_DamageSetting__Register
              (__this_00,(GameProgress_KillMethod_o *)&local_18,(longlong)damage,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// GameProgress.GameStatHandler$$RegisterSpeed
// il2cpp: void GameProgress_GameStatHandler__RegisterSpeed (GameProgress_GameStatHandler_o* __this, float speed, const MethodInfo* method);
// 0x181e368e0

void GameProgress_GameStatHandler__RegisterSpeed
               (GameProgress_GameStatHandler_o *__this,float speed,MethodInfo *method)

{
  GameProgress_GameStatContainer_o *pGVar1;
  Settings_FloatSetting_o *__this_00;
  float value;
  
  if (Il2CppMethodInitialized_184344dcf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_set_Value);
    Il2CppMethodInitialized_184344dcf = '\x01';
  }
  pGVar1 = (__this->fields)._gameStat;
  if ((pGVar1 != (GameProgress_GameStatContainer_o *)0x0) &&
     (__this_00 = (pGVar1->fields).HighestSpeed, __this_00 != (Settings_FloatSetting_o *)0x0)) {
    value = (__this_00->fields)._value;
    if (value <= speed) {
      value = speed;
    }
    Settings_TypedSetting_float___set_Value
              ((Settings_TypedSetting_float__o *)__this_00,value,
               (MethodInfo_E8F490 *)MethodInfo_Settings_TypedSetting_float_set_Value);
    return;
  }
  ThrowNullReferenceException();
}


// GameProgress.GameStatHandler$$RegisterInteraction
// il2cpp: void GameProgress_GameStatHandler__RegisterInteraction (GameProgress_GameStatHandler_o* __this, UnityEngine_GameObject_o* interact, int32_t type, const MethodInfo* method);
// 0x180547020

void
GameProgress_GameStatHandler__RegisterInteraction(GameProgress_GameStatHandler_o* __this, UnityEngine_GameObject_o* interact, int32_t type, MethodInfo* method)

{
  return;
}


