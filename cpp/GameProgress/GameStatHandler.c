// Type: GameProgress.GameStatHandler
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/GameProgress/GameStatHandler.cs
// Prior real C# source (older reference): Assets/Scripts/GameProgress/GameStatHandler.cs
// --------------------------------

// GameProgress.GameStatHandler$$.ctor
// il2cpp: void GameProgress_GameStatHandler___ctor (GameProgress_GameStatHandler_o* __this, GameProgress_GameStatContainer_o* gameStat, const MethodInfo* method);
// 0x591ffb0

void GameProgress_GameStatHandler___ctor
               (GameProgress_GameStatHandler_o *__this,GameProgress_GameStatContainer_o *gameStat,
               MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Int32_array *pSVar3;
  MethodInfo *pMVar4;
  int32_t iVar5;
  System_Collections_Generic_List_int__o *pSVar6;
  int index;
  float fVar7;
  
  if (Il2CppMethodInitialized_0754575d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_int);
    Il2CppMethodInitialized_0754575d = '\x01';
  }
  pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_int);
  System_Collections_Generic_List_int____ctor
            (pSVar6,(MethodInfo_39161C0 *)MethodInfo_System_Collections_Generic_List_int_ctor);
  (__this->fields)._expPerLevel = pSVar6;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._expPerLevel);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._gameStat = gameStat;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._gameStat);
  pMVar4 = MethodInfo_System_Collections_Generic_List_int_Add;
  pSVar6 = (__this->fields)._expPerLevel;
  if (pSVar6 != (System_Collections_Generic_List_int__o *)0x0) {
    piVar1 = &(pSVar6->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (pSVar6->fields)._items;
    if (pSVar3 != (System_Int32_array *)0x0) {
      uVar2 = (pSVar6->fields)._size;
      if (uVar2 < (uint)pSVar3->max_length) {
        (pSVar6->fields)._size = uVar2 + 1;
        pSVar3->m_Items[(int)uVar2] = 500;
      }
      else {
        System_Collections_Generic_List_int___AddWithResize
                  (pSVar6,500,(MethodInfo_3916AC0 *)pMVar4->klass->rgctx_data[0xe].method);
      }
      index = 0;
      while (pSVar6 = (__this->fields)._expPerLevel, pSVar6 != (System_Collections_Generic_List_int__o *)0x0)
      {
        iVar5 = System_Collections_Generic_List_int___get_Item
                          (pSVar6,index,
                           (MethodInfo_39167D0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
        pMVar4 = MethodInfo_System_Collections_Generic_List_int_Add;
        piVar1 = &(pSVar6->fields)._version;
        *piVar1 = *piVar1 + 1;
        fVar7 = (float)iVar5 * 1.2;
        if (2000.0 <= fVar7) {
          fVar7 = 2000.0;
        }
        pSVar3 = (pSVar6->fields)._items;
        if (pSVar3 == (System_Int32_array *)0x0) break;
        uVar2 = (pSVar6->fields)._size;
        if (uVar2 < (uint)pSVar3->max_length) {
          (pSVar6->fields)._size = uVar2 + 1;
          pSVar3->m_Items[(int)uVar2] = (int)fVar7;
          index = index + 1;
          if (index == 0x31) {
            return;
          }
        }
        else {
          System_Collections_Generic_List_int___AddWithResize
                    (pSVar6,(int)fVar7,(MethodInfo_3916AC0 *)pMVar4->klass->rgctx_data[0xe].method);
          index = index + 1;
          if (index == 0x31) {
            return;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// GameProgress.GameStatHandler$$GetExpToNext
// il2cpp: int32_t GameProgress_GameStatHandler__GetExpToNext (GameProgress_GameStatHandler_o* __this, const MethodInfo* method);
// 0x59204d0

int32_t GameProgress_GameStatHandler__GetExpToNext(GameProgress_GameStatHandler_o *__this,MethodInfo *method)

{
  GameProgress_GameStatContainer_o *pGVar1;
  Settings_IntSetting_o *pSVar2;
  System_Collections_Generic_List_int__o *__this_00;
  int32_t iVar3;
  
  if (Il2CppMethodInitialized_0754575e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_0754575e = '\x01';
  }
  pGVar1 = (__this->fields)._gameStat;
  if ((pGVar1 != (GameProgress_GameStatContainer_o *)0x0) &&
     (pSVar2 = (pGVar1->fields).Level, pSVar2 != (Settings_IntSetting_o *)0x0)) {
    iVar3 = (pSVar2->fields)._value;
    if (0x31 < iVar3) {
      return 0;
    }
    __this_00 = (__this->fields)._expPerLevel;
    if (__this_00 != (System_Collections_Generic_List_int__o *)0x0) {
      iVar3 = System_Collections_Generic_List_int___get_Item
                        (__this_00,iVar3,
                         (MethodInfo_39167D0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
      return iVar3;
    }
  }
  ThrowNullReferenceException();
}


// GameProgress.GameStatHandler$$AddExp
// il2cpp: void GameProgress_GameStatHandler__AddExp (GameProgress_GameStatHandler_o* __this, int32_t exp, const MethodInfo* method);
// 0x5920620

void GameProgress_GameStatHandler__AddExp
               (GameProgress_GameStatHandler_o *__this,int32_t exp,MethodInfo *method)

{
  GameProgress_GameStatContainer_o *pGVar1;
  Settings_IntSetting_o *__this_00;
  uint value;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0754575f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    Il2CppMethodInitialized_0754575f = '\x01';
  }
  pGVar1 = (__this->fields)._gameStat;
  if ((pGVar1 == (GameProgress_GameStatContainer_o *)0x0) ||
     (__this_00 = (pGVar1->fields).Exp, __this_00 == (Settings_IntSetting_o *)0x0)) {
    ThrowNullReferenceException();
  }
  value = exp + (__this_00->fields)._value;
  method_00 = (MethodInfo *)(ulong)value;
  Settings_TypedSetting_int___set_Value
            ((Settings_TypedSetting_int__o *)__this_00,value,
             (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
  GameProgress_GameStatHandler__CheckLevelUp(__this,method_00);
  return;
}


// GameProgress.GameStatHandler$$CheckLevelUp
// il2cpp: void GameProgress_GameStatHandler__CheckLevelUp (GameProgress_GameStatHandler_o* __this, const MethodInfo* method);
// 0x5921b00

void GameProgress_GameStatHandler__CheckLevelUp(GameProgress_GameStatHandler_o *__this,MethodInfo *method)

{
  int iVar1;
  GameProgress_GameStatContainer_o *pGVar2;
  Settings_IntSetting_o *pSVar3;
  System_Collections_Generic_List_int__o *__this_00;
  int32_t iVar4;
  
  if (Il2CppMethodInitialized_07545760 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    Il2CppMethodInitialized_07545760 = '\x01';
  }
  pGVar2 = (__this->fields)._gameStat;
  if ((pGVar2 != (GameProgress_GameStatContainer_o *)0x0) &&
     (pSVar3 = (pGVar2->fields).Level, pSVar3 != (Settings_IntSetting_o *)0x0)) {
    iVar4 = (pSVar3->fields)._value;
    pSVar3 = (pGVar2->fields).Exp;
    if (iVar4 < 0x32) {
      if (pSVar3 != (Settings_IntSetting_o *)0x0) {
        iVar1 = (pSVar3->fields)._value;
        if (iVar1 < 1) {
          return;
        }
        __this_00 = (__this->fields)._expPerLevel;
        if (__this_00 != (System_Collections_Generic_List_int__o *)0x0) {
          iVar4 = System_Collections_Generic_List_int___get_Item
                            (__this_00,iVar4,
                             (MethodInfo_39167D0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
          if (iVar1 < iVar4) {
            return;
          }
          pGVar2 = (__this->fields)._gameStat;
          if ((pGVar2 != (GameProgress_GameStatContainer_o *)0x0) &&
             (pSVar3 = (pGVar2->fields).Level, pSVar3 != (Settings_IntSetting_o *)0x0)) {
            Settings_TypedSetting_int___set_Value
                      ((Settings_TypedSetting_int__o *)pSVar3,(pSVar3->fields)._value + 1,
                       (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
            pGVar2 = (__this->fields)._gameStat;
            if ((pGVar2 != (GameProgress_GameStatContainer_o *)0x0) &&
               (pSVar3 = (pGVar2->fields).Exp, pSVar3 != (Settings_IntSetting_o *)0x0)) {
              Settings_TypedSetting_int___set_Value
                        ((Settings_TypedSetting_int__o *)pSVar3,0,
                         (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
              return;
            }
          }
        }
      }
    }
    else if (pSVar3 != (Settings_IntSetting_o *)0x0) {
      Settings_TypedSetting_int___set_Value
                ((Settings_TypedSetting_int__o *)pSVar3,0,
                 (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
      pGVar2 = (__this->fields)._gameStat;
      if ((pGVar2 != (GameProgress_GameStatContainer_o *)0x0) &&
         (pSVar3 = (pGVar2->fields).Level, pSVar3 != (Settings_IntSetting_o *)0x0)) {
        Settings_TypedSetting_int___set_Value
                  ((Settings_TypedSetting_int__o *)pSVar3,0x32,
                   (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// GameProgress.GameStatHandler$$RegisterTitanKill
// il2cpp: void GameProgress_GameStatHandler__RegisterTitanKill (GameProgress_GameStatHandler_o* __this, Characters_BasicTitan_o* victim, GameProgress_KillMethod_o method, const MethodInfo* method);
// 0x5921c30

void GameProgress_GameStatHandler__RegisterTitanKill
               (GameProgress_GameStatHandler_o *__this,Characters_BasicTitan_o *victim,
               GameProgress_KillMethod_o method,MethodInfo *methodInfo)

{
  GameProgress_GameStatContainer_o *pGVar1;
  uint value;
  MethodInfo *method_00;
  Settings_IntSetting_o *pSVar2;
  
  if (Il2CppMethodInitialized_07545761 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    Il2CppMethodInitialized_07545761 = '\x01';
  }
  switch(method.fields.Weapon) {
  case 0:
    pGVar1 = (__this->fields)._gameStat;
    if (pGVar1 == (GameProgress_GameStatContainer_o *)0x0) goto label_05921d69;
    pSVar2 = (pGVar1->fields).TitansKilledBlade;
    break;
  case 1:
    pGVar1 = (__this->fields)._gameStat;
    if (pGVar1 == (GameProgress_GameStatContainer_o *)0x0) goto label_05921d69;
    pSVar2 = (pGVar1->fields).TitansKilledAHSS;
    break;
  case 2:
    pGVar1 = (__this->fields)._gameStat;
    if (pGVar1 == (GameProgress_GameStatContainer_o *)0x0) goto label_05921d69;
    pSVar2 = (pGVar1->fields).TitansKilledThunderspear;
    break;
  case 3:
    pGVar1 = (__this->fields)._gameStat;
    if (pGVar1 == (GameProgress_GameStatContainer_o *)0x0) goto label_05921d69;
    pSVar2 = (pGVar1->fields).TitansKilledAPG;
    break;
  default:
    pGVar1 = (__this->fields)._gameStat;
    if (pGVar1 == (GameProgress_GameStatContainer_o *)0x0) goto label_05921d69;
    pSVar2 = (pGVar1->fields).TitansKilledOther;
  }
  if (pSVar2 != (Settings_IntSetting_o *)0x0) {
    Settings_TypedSetting_int___set_Value
              ((Settings_TypedSetting_int__o *)pSVar2,(pSVar2->fields)._value + 1,
               (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
    pGVar1 = (__this->fields)._gameStat;
    if ((pGVar1 != (GameProgress_GameStatContainer_o *)0x0) &&
       (pSVar2 = (pGVar1->fields).TitansKilledTotal, pSVar2 != (Settings_IntSetting_o *)0x0)) {
      Settings_TypedSetting_int___set_Value
                ((Settings_TypedSetting_int__o *)pSVar2,(pSVar2->fields)._value + 1,
                 (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
      if (Il2CppMethodInitialized_0754575f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
        il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
        Il2CppMethodInitialized_0754575f = '\x01';
      }
      pGVar1 = (__this->fields)._gameStat;
      if ((pGVar1 != (GameProgress_GameStatContainer_o *)0x0) &&
         (pSVar2 = (pGVar1->fields).Exp, pSVar2 != (Settings_IntSetting_o *)0x0)) {
        value = (pSVar2->fields)._value + 10;
        method_00 = (MethodInfo *)(ulong)value;
        Settings_TypedSetting_int___set_Value
                  ((Settings_TypedSetting_int__o *)pSVar2,value,
                   (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
        GameProgress_GameStatHandler__CheckLevelUp(__this,method_00);
        return;
      }
    }
  }
label_05921d69:
  ThrowNullReferenceException();
}


// GameProgress.GameStatHandler$$RegisterHumanKill
// il2cpp: void GameProgress_GameStatHandler__RegisterHumanKill (GameProgress_GameStatHandler_o* __this, Characters_Human_o* victim, GameProgress_KillMethod_o method, const MethodInfo* method);
// 0x5921d70

void GameProgress_GameStatHandler__RegisterHumanKill
               (GameProgress_GameStatHandler_o *__this,Characters_Human_o *victim,
               GameProgress_KillMethod_o method,MethodInfo *methodInfo)

{
  GameProgress_GameStatContainer_o *pGVar1;
  uint value;
  MethodInfo *method_00;
  Settings_IntSetting_o *pSVar2;
  
  if (Il2CppMethodInitialized_07545762 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    Il2CppMethodInitialized_07545762 = '\x01';
  }
  switch(method.fields.Weapon) {
  case 0:
    pGVar1 = (__this->fields)._gameStat;
    if (pGVar1 == (GameProgress_GameStatContainer_o *)0x0) goto label_05921ed1;
    pSVar2 = (pGVar1->fields).HumansKilledBlade;
    break;
  case 1:
    pGVar1 = (__this->fields)._gameStat;
    if (pGVar1 == (GameProgress_GameStatContainer_o *)0x0) goto label_05921ed1;
    pSVar2 = (pGVar1->fields).HumansKilledAHSS;
    break;
  case 2:
    pGVar1 = (__this->fields)._gameStat;
    if (pGVar1 == (GameProgress_GameStatContainer_o *)0x0) goto label_05921ed1;
    pSVar2 = (pGVar1->fields).HumansKilledThunderspear;
    break;
  case 3:
    pGVar1 = (__this->fields)._gameStat;
    if (pGVar1 == (GameProgress_GameStatContainer_o *)0x0) goto label_05921ed1;
    pSVar2 = (pGVar1->fields).HumansKilledAPG;
    break;
  default:
    pGVar1 = (__this->fields)._gameStat;
    if (pGVar1 == (GameProgress_GameStatContainer_o *)0x0) goto label_05921ed1;
    pSVar2 = (pGVar1->fields).HumansKilledOther;
    break;
  case 6:
    pGVar1 = (__this->fields)._gameStat;
    if (pGVar1 == (GameProgress_GameStatContainer_o *)0x0) goto label_05921ed1;
    pSVar2 = (pGVar1->fields).HumansKilledTitan;
  }
  if (pSVar2 != (Settings_IntSetting_o *)0x0) {
    Settings_TypedSetting_int___set_Value
              ((Settings_TypedSetting_int__o *)pSVar2,(pSVar2->fields)._value + 1,
               (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
    pGVar1 = (__this->fields)._gameStat;
    if ((pGVar1 != (GameProgress_GameStatContainer_o *)0x0) &&
       (pSVar2 = (pGVar1->fields).HumansKilledTotal, pSVar2 != (Settings_IntSetting_o *)0x0)) {
      Settings_TypedSetting_int___set_Value
                ((Settings_TypedSetting_int__o *)pSVar2,(pSVar2->fields)._value + 1,
                 (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
      if (Il2CppMethodInitialized_0754575f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
        il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
        Il2CppMethodInitialized_0754575f = '\x01';
      }
      pGVar1 = (__this->fields)._gameStat;
      if ((pGVar1 != (GameProgress_GameStatContainer_o *)0x0) &&
         (pSVar2 = (pGVar1->fields).Exp, pSVar2 != (Settings_IntSetting_o *)0x0)) {
        value = (pSVar2->fields)._value + 10;
        method_00 = (MethodInfo *)(ulong)value;
        Settings_TypedSetting_int___set_Value
                  ((Settings_TypedSetting_int__o *)pSVar2,value,
                   (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
        GameProgress_GameStatHandler__CheckLevelUp(__this,method_00);
        return;
      }
    }
  }
label_05921ed1:
  ThrowNullReferenceException();
}


// GameProgress.GameStatHandler$$RegisterDamage
// il2cpp: void GameProgress_GameStatHandler__RegisterDamage (GameProgress_GameStatHandler_o* __this, UnityEngine_GameObject_o* victim, GameProgress_KillMethod_o method, int32_t damage, const MethodInfo* method);
// 0x5921ee0

void GameProgress_GameStatHandler__RegisterDamage
               (GameProgress_GameStatHandler_o *__this,UnityEngine_GameObject_o *victim,
               GameProgress_KillMethod_o method,int32_t damage,MethodInfo *methodInfo)

{
  GameProgress_GameStatContainer_o *pGVar1;
  GameProgress_DamageSetting_o *__this_00;
  undefined4 in_register_00000084;
  GameProgress_KillMethod_o method_00;
  
  pGVar1 = (__this->fields)._gameStat;
  if ((pGVar1 == (GameProgress_GameStatContainer_o *)0x0) ||
     (__this_00 = (pGVar1->fields).Damage, __this_00 == (GameProgress_DamageSetting_o *)0x0)) {
    ThrowNullReferenceException();
  }
  method_00.fields._4_4_ = 0;
  method_00.fields.Weapon = method.fields.Weapon;
  method_00.fields.Special = method.fields.Special;
  GameProgress_DamageSetting__Register
            (__this_00,method_00,(long)damage,(MethodInfo *)CONCAT44(in_register_00000084,damage));
  return;
}


// GameProgress.GameStatHandler$$RegisterSpeed
// il2cpp: void GameProgress_GameStatHandler__RegisterSpeed (GameProgress_GameStatHandler_o* __this, float speed, const MethodInfo* method);
// 0x5921f10

void GameProgress_GameStatHandler__RegisterSpeed
               (GameProgress_GameStatHandler_o *__this,float speed,MethodInfo *method)

{
  GameProgress_GameStatContainer_o *pGVar1;
  Settings_FloatSetting_o *__this_00;
  float value;
  
  if (Il2CppMethodInitialized_07545763 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_set_Value);
    Il2CppMethodInitialized_07545763 = '\x01';
  }
  pGVar1 = (__this->fields)._gameStat;
  if ((pGVar1 == (GameProgress_GameStatContainer_o *)0x0) ||
     (__this_00 = (pGVar1->fields).HighestSpeed, __this_00 == (Settings_FloatSetting_o *)0x0)) {
    ThrowNullReferenceException();
  }
  value = (__this_00->fields)._value;
  if (value <= speed) {
    value = speed;
  }
  Settings_TypedSetting_float___set_Value
            ((Settings_TypedSetting_float__o *)__this_00,value,
             (MethodInfo_42DA3B0 *)MethodInfo_Settings_TypedSetting_float_set_Value);
  return;
}


// GameProgress.GameStatHandler$$RegisterInteraction
// il2cpp: void GameProgress_GameStatHandler__RegisterInteraction (GameProgress_GameStatHandler_o* __this, UnityEngine_GameObject_o* interact, int32_t type, const MethodInfo* method);
// 0x5921f90

void GameProgress_GameStatHandler__RegisterInteraction
               (GameProgress_GameStatHandler_o *__this,UnityEngine_GameObject_o *interact,int32_t type,
               MethodInfo *method)

{
  return;
}


