// Type: GameProgress.GameStatHandler
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/GameProgress/GameStatHandler.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/GameProgress/GameStatHandler.cs  [CHANGED since prior version]
// --------------------------------

// GameProgress.GameStatHandler$$.ctor
// il2cpp: void GameProgress_GameStatHandler___ctor (GameProgress_GameStatHandler_o* __this, GameProgress_GameStatContainer_o* gameStat, const MethodInfo* method);
// 0x420b850

void GameProgress_GameStatHandler___ctor
               (GameProgress_GameStatHandler_o *__this,GameProgress_GameStatContainer_o *gameStat,
               MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Int32_array *pSVar3;
  long lVar4;
  int32_t iVar5;
  System_Collections_Generic_List_int__o *pSVar6;
  int index;
  float fVar7;
  
  if (DAT_05705049 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_Int32);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_List_int);
    DAT_05705049 = '\x01';
  }
  pSVar6 = (System_Collections_Generic_List_int__o *)il2cpp_runtime_glue(TypeInfo_List_int);
  System_Collections_Generic_List<int>___ctor(pSVar6,MethodInfo_List_1_System_Int32);
  (__this->fields)._expPerLevel = pSVar6;
  il2cpp_runtime_glue(&__this->fields);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._gameStat = gameStat;
  il2cpp_runtime_glue(&(__this->fields)._gameStat,gameStat);
  lVar4 = MethodInfo_Void_Add;
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
        System_Collections_Generic_List<int>__AddWithResize
                  (pSVar6,500,
                   *(MethodInfo_3579120 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
      }
      index = 0;
      while (pSVar6 = (__this->fields)._expPerLevel,
            pSVar6 != (System_Collections_Generic_List_int__o *)0x0) {
        iVar5 = System_Collections_Generic_List<int>__get_Item(pSVar6,index,MethodInfo_Int32_get_Item);
        lVar4 = MethodInfo_Void_Add;
        piVar1 = &(pSVar6->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar3 = (pSVar6->fields)._items;
        if (pSVar3 == (System_Int32_array *)0x0) break;
        fVar7 = (float)iVar5 * 1.2;
        if (2000.0 <= fVar7) {
          fVar7 = 2000.0;
        }
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
          System_Collections_Generic_List<int>__AddWithResize
                    (pSVar6,(int)fVar7,
                     *(MethodInfo_3579120 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
          index = index + 1;
          if (index == 0x31) {
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameProgress.GameStatHandler$$GetExpToNext
// il2cpp: int32_t GameProgress_GameStatHandler__GetExpToNext (GameProgress_GameStatHandler_o* __this, const MethodInfo* method);
// 0x420bc90

int32_t GameProgress_GameStatHandler__GetExpToNext
                  (GameProgress_GameStatHandler_o *__this,MethodInfo *method)

{
  GameProgress_GameStatContainer_o *pGVar1;
  Settings_IntSetting_o *pSVar2;
  System_Collections_Generic_List_int__o *__this_00;
  int32_t iVar3;
  
  if (DAT_0570504a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    DAT_0570504a = '\x01';
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
      iVar3 = System_Collections_Generic_List<int>__get_Item(__this_00,iVar3,MethodInfo_Int32_get_Item);
      return iVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameProgress.GameStatHandler$$AddExp
// il2cpp: void GameProgress_GameStatHandler__AddExp (GameProgress_GameStatHandler_o* __this, int32_t exp, const MethodInfo* method);
// 0x420bdf0

void GameProgress_GameStatHandler__AddExp
               (GameProgress_GameStatHandler_o *__this,int32_t exp,MethodInfo *method)

{
  GameProgress_GameStatContainer_o *pGVar1;
  Settings_IntSetting_o *__this_00;
  uint value;
  MethodInfo *method_00;
  
  if (DAT_0570504b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    DAT_0570504b = '\x01';
  }
  pGVar1 = (__this->fields)._gameStat;
  if ((pGVar1 != (GameProgress_GameStatContainer_o *)0x0) &&
     (__this_00 = (pGVar1->fields).Exp, __this_00 != (Settings_IntSetting_o *)0x0)) {
    value = exp + (__this_00->fields)._value;
    method_00 = (MethodInfo *)(ulong)value;
    Settings_TypedSetting<int>__set_Value
              ((Settings_TypedSetting_int__o *)__this_00,value,MethodInfo_Void_set_Value);
    GameProgress_GameStatHandler__CheckLevelUp(__this,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameProgress.GameStatHandler$$CheckLevelUp
// il2cpp: void GameProgress_GameStatHandler__CheckLevelUp (GameProgress_GameStatHandler_o* __this, const MethodInfo* method);
// 0x420caf0

void GameProgress_GameStatHandler__CheckLevelUp
               (GameProgress_GameStatHandler_o *__this,MethodInfo *method)

{
  int iVar1;
  GameProgress_GameStatContainer_o *pGVar2;
  Settings_IntSetting_o *pSVar3;
  Settings_IntSetting_o *__this_00;
  System_Collections_Generic_List_int__o *__this_01;
  int32_t iVar4;
  
  if (DAT_0570504c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    DAT_0570504c = '\x01';
  }
  pGVar2 = (__this->fields)._gameStat;
  if (((pGVar2 != (GameProgress_GameStatContainer_o *)0x0) &&
      (pSVar3 = (pGVar2->fields).Level, pSVar3 != (Settings_IntSetting_o *)0x0)) &&
     (__this_00 = (pGVar2->fields).Exp, __this_00 != (Settings_IntSetting_o *)0x0)) {
    iVar4 = (pSVar3->fields)._value;
    if (iVar4 < 0x32) {
      iVar1 = (__this_00->fields)._value;
      if (iVar1 < 1) {
        return;
      }
      __this_01 = (__this->fields)._expPerLevel;
      if (__this_01 != (System_Collections_Generic_List_int__o *)0x0) {
        iVar4 = System_Collections_Generic_List<int>__get_Item(__this_01,iVar4,MethodInfo_Int32_get_Item);
        if (iVar1 < iVar4) {
          return;
        }
        pGVar2 = (__this->fields)._gameStat;
        if ((pGVar2 != (GameProgress_GameStatContainer_o *)0x0) &&
           (pSVar3 = (pGVar2->fields).Level, pSVar3 != (Settings_IntSetting_o *)0x0)) {
          Settings_TypedSetting<int>__set_Value
                    ((Settings_TypedSetting_int__o *)pSVar3,(pSVar3->fields)._value + 1,MethodInfo_Void_set_Value
                    );
          pGVar2 = (__this->fields)._gameStat;
          if ((pGVar2 != (GameProgress_GameStatContainer_o *)0x0) &&
             (pSVar3 = (pGVar2->fields).Exp, pSVar3 != (Settings_IntSetting_o *)0x0)) {
            Settings_TypedSetting<int>__set_Value
                      ((Settings_TypedSetting_int__o *)pSVar3,0,MethodInfo_Void_set_Value);
            return;
          }
        }
      }
    }
    else {
      Settings_TypedSetting<int>__set_Value
                ((Settings_TypedSetting_int__o *)__this_00,0,MethodInfo_Void_set_Value);
      pGVar2 = (__this->fields)._gameStat;
      if ((pGVar2 != (GameProgress_GameStatContainer_o *)0x0) &&
         (pSVar3 = (pGVar2->fields).Level, pSVar3 != (Settings_IntSetting_o *)0x0)) {
        Settings_TypedSetting<int>__set_Value
                  ((Settings_TypedSetting_int__o *)pSVar3,0x32,MethodInfo_Void_set_Value);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameProgress.GameStatHandler$$RegisterTitanKill
// il2cpp: void GameProgress_GameStatHandler__RegisterTitanKill (GameProgress_GameStatHandler_o* __this, Characters_BasicTitan_o* victim, GameProgress_KillMethod_o method, const MethodInfo* method);
// 0x420cc20

void GameProgress_GameStatHandler__RegisterTitanKill(void)

{
  GameProgress_GameStatContainer_o *pGVar1;
  undefined4 in_EDX;
  uint value;
  GameProgress_GameStatHandler_o *in_RDI;
  Settings_IntSetting_o *pSVar2;
  MethodInfo *method;
  
  if (DAT_0570504d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    DAT_0570504d = '\x01';
  }
  switch(in_EDX) {
  case 0:
    pGVar1 = (in_RDI->fields)._gameStat;
    if (pGVar1 == (GameProgress_GameStatContainer_o *)0x0) goto LAB_0420cd7b;
    pSVar2 = (pGVar1->fields).TitansKilledBlade;
    break;
  case 1:
    pGVar1 = (in_RDI->fields)._gameStat;
    if (pGVar1 == (GameProgress_GameStatContainer_o *)0x0) goto LAB_0420cd7b;
    pSVar2 = (pGVar1->fields).TitansKilledAHSS;
    goto joined_r0x0420ccb1;
  case 2:
    pGVar1 = (in_RDI->fields)._gameStat;
    if (pGVar1 == (GameProgress_GameStatContainer_o *)0x0) goto LAB_0420cd7b;
    pSVar2 = (pGVar1->fields).TitansKilledThunderspear;
joined_r0x0420ccb1:
    if (pSVar2 == (Settings_IntSetting_o *)0x0) goto LAB_0420cd7b;
    goto LAB_0420cced;
  case 3:
    pGVar1 = (in_RDI->fields)._gameStat;
    if (pGVar1 == (GameProgress_GameStatContainer_o *)0x0) goto LAB_0420cd7b;
    pSVar2 = (pGVar1->fields).TitansKilledAPG;
    break;
  default:
    pGVar1 = (in_RDI->fields)._gameStat;
    if (pGVar1 == (GameProgress_GameStatContainer_o *)0x0) goto LAB_0420cd7b;
    pSVar2 = (pGVar1->fields).TitansKilledOther;
  }
  if (pSVar2 != (Settings_IntSetting_o *)0x0) {
LAB_0420cced:
    Settings_TypedSetting<int>__set_Value
              ((Settings_TypedSetting_int__o *)pSVar2,(pSVar2->fields)._value + 1,MethodInfo_Void_set_Value);
    pGVar1 = (in_RDI->fields)._gameStat;
    if ((pGVar1 != (GameProgress_GameStatContainer_o *)0x0) &&
       (pSVar2 = (pGVar1->fields).TitansKilledTotal, pSVar2 != (Settings_IntSetting_o *)0x0)) {
      Settings_TypedSetting<int>__set_Value
                ((Settings_TypedSetting_int__o *)pSVar2,(pSVar2->fields)._value + 1,MethodInfo_Void_set_Value);
      if (DAT_0570504b == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
        il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
        DAT_0570504b = '\x01';
      }
      pGVar1 = (in_RDI->fields)._gameStat;
      if ((pGVar1 != (GameProgress_GameStatContainer_o *)0x0) &&
         (pSVar2 = (pGVar1->fields).Exp, pSVar2 != (Settings_IntSetting_o *)0x0)) {
        value = (pSVar2->fields)._value + 10;
        method = (MethodInfo *)(ulong)value;
        Settings_TypedSetting<int>__set_Value
                  ((Settings_TypedSetting_int__o *)pSVar2,value,MethodInfo_Void_set_Value);
        GameProgress_GameStatHandler__CheckLevelUp(in_RDI,method);
        return;
      }
    }
  }
LAB_0420cd7b:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameProgress.GameStatHandler$$RegisterHumanKill
// il2cpp: void GameProgress_GameStatHandler__RegisterHumanKill (GameProgress_GameStatHandler_o* __this, Characters_Human_o* victim, GameProgress_KillMethod_o method, const MethodInfo* method);
// 0x420cd80

void GameProgress_GameStatHandler__RegisterHumanKill(void)

{
  GameProgress_GameStatContainer_o *pGVar1;
  undefined4 in_EDX;
  uint value;
  GameProgress_GameStatHandler_o *in_RDI;
  Settings_IntSetting_o *pSVar2;
  MethodInfo *method;
  
  if (DAT_0570504e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    DAT_0570504e = '\x01';
  }
  switch(in_EDX) {
  case 0:
    pGVar1 = (in_RDI->fields)._gameStat;
    if (pGVar1 == (GameProgress_GameStatContainer_o *)0x0) goto LAB_0420cf09;
    pSVar2 = (pGVar1->fields).HumansKilledBlade;
    goto joined_r0x0420ce39;
  case 1:
    pGVar1 = (in_RDI->fields)._gameStat;
    if (pGVar1 == (GameProgress_GameStatContainer_o *)0x0) goto LAB_0420cf09;
    pSVar2 = (pGVar1->fields).HumansKilledAHSS;
joined_r0x0420ce39:
    if (pSVar2 == (Settings_IntSetting_o *)0x0) goto LAB_0420cf09;
    goto LAB_0420ce7b;
  case 2:
    pGVar1 = (in_RDI->fields)._gameStat;
    if (pGVar1 == (GameProgress_GameStatContainer_o *)0x0) goto LAB_0420cf09;
    pSVar2 = (pGVar1->fields).HumansKilledThunderspear;
    break;
  case 3:
    pGVar1 = (in_RDI->fields)._gameStat;
    if (pGVar1 == (GameProgress_GameStatContainer_o *)0x0) goto LAB_0420cf09;
    pSVar2 = (pGVar1->fields).HumansKilledAPG;
    break;
  default:
    pGVar1 = (in_RDI->fields)._gameStat;
    if (pGVar1 == (GameProgress_GameStatContainer_o *)0x0) goto LAB_0420cf09;
    pSVar2 = (pGVar1->fields).HumansKilledOther;
    break;
  case 6:
    pGVar1 = (in_RDI->fields)._gameStat;
    if (pGVar1 == (GameProgress_GameStatContainer_o *)0x0) goto LAB_0420cf09;
    pSVar2 = (pGVar1->fields).HumansKilledTitan;
  }
  if (pSVar2 != (Settings_IntSetting_o *)0x0) {
LAB_0420ce7b:
    Settings_TypedSetting<int>__set_Value
              ((Settings_TypedSetting_int__o *)pSVar2,(pSVar2->fields)._value + 1,MethodInfo_Void_set_Value);
    pGVar1 = (in_RDI->fields)._gameStat;
    if ((pGVar1 != (GameProgress_GameStatContainer_o *)0x0) &&
       (pSVar2 = (pGVar1->fields).HumansKilledTotal, pSVar2 != (Settings_IntSetting_o *)0x0)) {
      Settings_TypedSetting<int>__set_Value
                ((Settings_TypedSetting_int__o *)pSVar2,(pSVar2->fields)._value + 1,MethodInfo_Void_set_Value);
      if (DAT_0570504b == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
        il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
        DAT_0570504b = '\x01';
      }
      pGVar1 = (in_RDI->fields)._gameStat;
      if ((pGVar1 != (GameProgress_GameStatContainer_o *)0x0) &&
         (pSVar2 = (pGVar1->fields).Exp, pSVar2 != (Settings_IntSetting_o *)0x0)) {
        value = (pSVar2->fields)._value + 10;
        method = (MethodInfo *)(ulong)value;
        Settings_TypedSetting<int>__set_Value
                  ((Settings_TypedSetting_int__o *)pSVar2,value,MethodInfo_Void_set_Value);
        GameProgress_GameStatHandler__CheckLevelUp(in_RDI,method);
        return;
      }
    }
  }
LAB_0420cf09:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameProgress.GameStatHandler$$RegisterDamage
// il2cpp: void GameProgress_GameStatHandler__RegisterDamage (GameProgress_GameStatHandler_o* __this, UnityEngine_GameObject_o* victim, GameProgress_KillMethod_o method, int32_t damage, const MethodInfo* method);
// 0x420cf10

void GameProgress_GameStatHandler__RegisterDamage(void)

{
  GameProgress_DamageSetting_o *__this;
  ulong uVar1;
  ulong uVar2;
  MethodInfo *pMVar3;
  ulong in_RDX;
  long in_RDI;
  MethodInfo_2B4B4A0 *in_R8;
  System_ValueTuple_ulong__ulong__o SVar4;
  System_ValueTuple_ulong__ulong__o __this_00;
  System_ValueTuple_ulong__ulong__o __this_01;
  uint64_t uStack_38;
  uint64_t uStack_30;
  
  if ((*(long *)(in_RDI + 0x18) != 0) &&
     (__this = *(GameProgress_DamageSetting_o **)(*(long *)(in_RDI + 0x18) + 0xa8),
     __this != (GameProgress_DamageSetting_o *)0x0)) {
    uVar2 = (ulong)(int)in_R8;
    pMVar3 = (MethodInfo *)(in_RDX & 0xffffffff);
    if (DAT_05705028 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_ValueTuple_2_UInt64_UInt64);
      DAT_05705028 = '\x01';
    }
    SVar4 = GameProgress_DamageSetting__get_Overall(__this,pMVar3);
    uVar1 = SVar4.fields.Item1;
    if (SVar4.fields.Item1 < uVar2) {
      uVar1 = uVar2;
    }
    uStack_38 = 0;
    uStack_30 = 0;
    __this_00.fields.Item2 = uVar1;
    __this_00.fields.Item1 = (uint64_t)&uStack_38;
    pMVar3 = MethodInfo_ValueTuple_2_UInt64_UInt64;
    System_ValueTuple<ulong__ulong>___ctor
              (__this_00,SVar4.fields.Item2 + uVar2,(uint64_t)MethodInfo_ValueTuple_2_UInt64_UInt64,in_R8);
    SVar4.fields.Item2 = uStack_30;
    SVar4.fields.Item1 = uStack_38;
    GameProgress_DamageSetting__set_Overall(__this,SVar4,pMVar3);
    SVar4 = GameProgress_DamageSetting__get_Item();
    uVar1 = SVar4.fields.Item1;
    if (SVar4.fields.Item1 < uVar2) {
      uVar1 = uVar2;
    }
    uStack_38 = 0;
    uStack_30 = 0;
    __this_01.fields.Item2 = uVar1;
    __this_01.fields.Item1 = (uint64_t)&uStack_38;
    System_ValueTuple<ulong__ulong>___ctor
              (__this_01,SVar4.fields.Item2 + uVar2,(uint64_t)MethodInfo_ValueTuple_2_UInt64_UInt64,in_R8);
    GameProgress_DamageSetting__set_Item();
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameProgress.GameStatHandler$$RegisterSpeed
// il2cpp: void GameProgress_GameStatHandler__RegisterSpeed (GameProgress_GameStatHandler_o* __this, float speed, const MethodInfo* method);
// 0x420cf40

void GameProgress_GameStatHandler__RegisterSpeed
               (GameProgress_GameStatHandler_o *__this,float speed,MethodInfo *method)

{
  GameProgress_GameStatContainer_o *pGVar1;
  Settings_FloatSetting_o *__this_00;
  float value;
  
  if (DAT_0570504f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    DAT_0570504f = '\x01';
  }
  pGVar1 = (__this->fields)._gameStat;
  if ((pGVar1 != (GameProgress_GameStatContainer_o *)0x0) &&
     (__this_00 = (pGVar1->fields).HighestSpeed, __this_00 != (Settings_FloatSetting_o *)0x0)) {
    value = (__this_00->fields)._value;
    if (value <= speed) {
      value = speed;
    }
    Settings_TypedSetting<float>__set_Value
              ((Settings_TypedSetting_float__o *)__this_00,value,MethodInfo_Void_set_Value);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameProgress.GameStatHandler$$RegisterInteraction
// il2cpp: void GameProgress_GameStatHandler__RegisterInteraction (GameProgress_GameStatHandler_o* __this, UnityEngine_GameObject_o* interact, int32_t type, const MethodInfo* method);
// 0x420cfc0

void GameProgress_GameStatHandler__RegisterInteraction
               (GameProgress_GameStatHandler_o *__this,UnityEngine_GameObject_o *interact,
               int32_t type,MethodInfo *method)

{
  return;
}


