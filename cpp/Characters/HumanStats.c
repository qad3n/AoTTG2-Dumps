// Type: Characters.HumanStats
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Characters/HumanStats.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Characters/Human/HumanStats.cs  [CHANGED since prior version]
// --------------------------------

// Characters.HumanStats$$.ctor
// il2cpp: void Characters_HumanStats___ctor (Characters_HumanStats_o* __this, Characters_Human_o* human, const MethodInfo* method);
// 0x3fd7fe0

void Characters_HumanStats___ctor
               (Characters_HumanStats_o *__this,Characters_Human_o *human,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__BasePerk__o **ppSVar1;
  byte bVar2;
  Il2CppClass *pIVar3;
  System_Collections_Generic_Dictionary_object__object__o *pSVar4;
  Il2CppObject *pIVar5;
  System_Collections_Generic_Dictionary_object__int__o *pSVar6;
  Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o *pAVar7;
  MethodInfo *method_00;
  float fVar8;
  
  if (DAT_05704104 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AdvancedAlloyPerk);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_Characters_BasePerk);
    il2cpp_init_method_metadata(&MethodInfo_BasePerk_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__BasePerk);
    il2cpp_init_method_metadata(&TypeInfo_DurableBladesPerk);
    il2cpp_init_method_metadata(&TypeInfo_OmniDashPerk);
    il2cpp_init_method_metadata(&TypeInfo_RefillTimePerk);
    il2cpp_init_method_metadata(&TypeInfo_VerticalDashPerk);
    il2cpp_init_method_metadata(&"AdvancedAlloy");
    il2cpp_init_method_metadata(&"DurableBlades");
    il2cpp_init_method_metadata(&"RefillTime");
    il2cpp_init_method_metadata(&"OmniDash");
    il2cpp_init_method_metadata(&"VerticalDash");
    DAT_05704104 = '\x01';
  }
  (__this->fields).Speed = 0x50;
  (__this->fields).Gas = 0x50;
  (__this->fields).Ammunition = 0x50;
  (__this->fields).Acceleration = 0x50;
  pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
           il2cpp_runtime_glue(TypeInfo_Dictionary_string__BasePerk);
  System_Collections_Generic_Dictionary<object__object>___ctor(pSVar4,MethodInfo_Dictionary_2_System_String_Characters_BasePerk);
  ppSVar1 = &(__this->fields).Perks;
  (__this->fields).Perks = (System_Collections_Generic_Dictionary_string__BasePerk__o *)pSVar4;
  il2cpp_runtime_glue(ppSVar1);
  (__this->fields).CurrentGas = -1.0;
  (__this->fields).MaxGas = -1.0;
  (__this->fields).GasUsage = 0.2;
  (__this->fields).HorseSpeed = 50.0;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._human = human;
  il2cpp_runtime_glue(&(__this->fields)._human,human);
  pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Perks;
  pIVar5 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_AdvancedAlloyPerk);
  if (DAT_05704111 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_System_Int32);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__int);
    DAT_05704111 = '\x01';
  }
  pSVar6 = (System_Collections_Generic_Dictionary_object__int__o *)il2cpp_runtime_glue(TypeInfo_Dictionary_string__int);
  System_Collections_Generic_Dictionary<object__int>___ctor(pSVar6,MethodInfo_Dictionary_2_System_String_System_Int32);
  pIVar5[1].monitor = pSVar6;
  il2cpp_runtime_glue(&pIVar5[1].monitor);
  System_Object___ctor(pIVar5,(MethodInfo *)0x0);
  (*pIVar5->klass->vtable[6].methodPtr)(pIVar5,pIVar5->klass->vtable[6].method);
  if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object__object>__Add
              (pSVar4,"AdvancedAlloy",pIVar5,MethodInfo_Void_Add);
    pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)*ppSVar1;
    pIVar5 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_DurableBladesPerk);
    if (DAT_05704111 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_System_Int32);
      il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__int);
      DAT_05704111 = '\x01';
    }
    pSVar6 = (System_Collections_Generic_Dictionary_object__int__o *)
             il2cpp_runtime_glue(TypeInfo_Dictionary_string__int);
    System_Collections_Generic_Dictionary<object__int>___ctor(pSVar6,MethodInfo_Dictionary_2_System_String_System_Int32);
    pIVar5[1].monitor = pSVar6;
    il2cpp_runtime_glue(&pIVar5[1].monitor);
    System_Object___ctor(pIVar5,(MethodInfo *)0x0);
    (*pIVar5->klass->vtable[6].methodPtr)(pIVar5,pIVar5->klass->vtable[6].method);
    if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto LAB_03fd8520;
    System_Collections_Generic_Dictionary<object__object>__Add
              (pSVar4,"DurableBlades",pIVar5,MethodInfo_Void_Add);
    pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)*ppSVar1;
    pIVar5 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_RefillTimePerk);
    if (DAT_05704111 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_System_Int32);
      il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__int);
      DAT_05704111 = '\x01';
    }
    pSVar6 = (System_Collections_Generic_Dictionary_object__int__o *)
             il2cpp_runtime_glue(TypeInfo_Dictionary_string__int);
    System_Collections_Generic_Dictionary<object__int>___ctor(pSVar6,MethodInfo_Dictionary_2_System_String_System_Int32);
    pIVar5[1].monitor = pSVar6;
    il2cpp_runtime_glue(&pIVar5[1].monitor);
    System_Object___ctor(pIVar5,(MethodInfo *)0x0);
    (*pIVar5->klass->vtable[6].methodPtr)(pIVar5,pIVar5->klass->vtable[6].method);
    if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto LAB_03fd8520;
    System_Collections_Generic_Dictionary<object__object>__Add
              (pSVar4,"RefillTime",pIVar5,MethodInfo_Void_Add);
    pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)*ppSVar1;
    pAVar7 = (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o *)
             il2cpp_runtime_glue(TypeInfo_VerticalDashPerk);
    Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk___ctor(pAVar7,(MethodInfo *)0x0);
    if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto LAB_03fd8520;
    System_Collections_Generic_Dictionary<object__object>__Add
              (pSVar4,"VerticalDash",(Il2CppObject *)pAVar7,MethodInfo_Void_Add);
    pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)*ppSVar1;
    pAVar7 = (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o *)
             il2cpp_runtime_glue(TypeInfo_OmniDashPerk);
    Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk___ctor(pAVar7,(MethodInfo *)0x0);
    if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto LAB_03fd8520;
    System_Collections_Generic_Dictionary<object__object>__Add
              (pSVar4,"OmniDash",(Il2CppObject *)pAVar7,MethodInfo_Void_Add);
    if ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar1 ==
        (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto LAB_03fd8520;
    method_00 = (MethodInfo *)
                System_Collections_Generic_Dictionary<object__object>__get_Item
                          ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar1,
                           "VerticalDash",MethodInfo_BasePerk_get_Item);
    pIVar3 = TypeInfo_VerticalDashPerk;
    if (method_00 == (MethodInfo *)0x0) {
      (__this->fields).VerticalDashPerk = (Characters_VerticalDashPerk_o *)0x0;
    }
    else {
      bVar2 = (TypeInfo_VerticalDashPerk->_2).naturalAligment;
      if (((((Il2CppClass *)method_00->methodPointer)->_2).naturalAligment < bVar2) ||
         ((((Il2CppClass *)method_00->methodPointer)->_2).typeHierarchy[(ulong)bVar2 - 1] !=
          TypeInfo_VerticalDashPerk)) goto LAB_03fd8525;
      (__this->fields).VerticalDashPerk = (Characters_VerticalDashPerk_o *)method_00;
      if (((((Il2CppClass *)method_00->methodPointer)->_2).naturalAligment < bVar2) ||
         ((((Il2CppClass *)method_00->methodPointer)->_2).typeHierarchy[(ulong)bVar2 - 1] != pIVar3)
         ) goto LAB_03fd8525;
    }
    il2cpp_runtime_glue(&(__this->fields).VerticalDashPerk,method_00);
    if ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar1 !=
        (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      method_00 = (MethodInfo *)
                  System_Collections_Generic_Dictionary<object__object>__get_Item
                            ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar1,
                             "OmniDash",MethodInfo_BasePerk_get_Item);
      pIVar3 = TypeInfo_OmniDashPerk;
      if (method_00 != (MethodInfo *)0x0) {
        bVar2 = (TypeInfo_OmniDashPerk->_2).naturalAligment;
        if ((bVar2 <= (((Il2CppClass *)method_00->methodPointer)->_2).naturalAligment) &&
           ((((Il2CppClass *)method_00->methodPointer)->_2).typeHierarchy[(ulong)bVar2 - 1] ==
            TypeInfo_OmniDashPerk)) {
          (__this->fields).OmniDashPerk = (Characters_OmniDashPerk_o *)method_00;
          if ((bVar2 <= (((Il2CppClass *)method_00->methodPointer)->_2).naturalAligment) &&
             ((((Il2CppClass *)method_00->methodPointer)->_2).typeHierarchy[(ulong)bVar2 - 1] ==
              pIVar3)) goto LAB_03fd84e1;
        }
LAB_03fd8525:
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(method_00);
      }
      (__this->fields).OmniDashPerk = (Characters_OmniDashPerk_o *)0x0;
LAB_03fd84e1:
      il2cpp_runtime_glue(&(__this->fields).OmniDashPerk);
      fVar8 = (float)(__this->fields).Gas;
      fVar8 = fVar8 + fVar8 + -35.0;
      (__this->fields).MaxGas = fVar8;
      (__this->fields).CurrentGas = fVar8;
      Characters_HumanStats__UpdateStats(__this,method_00);
      return;
    }
  }
LAB_03fd8520:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.HumanStats$$DisablePerks
// il2cpp: void Characters_HumanStats__DisablePerks (Characters_HumanStats_o* __this, const MethodInfo* method);
// 0x3fd87e0

void Characters_HumanStats__DisablePerks(Characters_HumanStats_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_02;
  bool_conflict bVar1;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_03;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar2;
  Il2CppMethodPointer pIVar3;
  Il2CppObject *pIVar4;
  
  if (DAT_05704105 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_System);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_BasePerk_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_TKey_T);
    DAT_05704105 = '\x01';
  }
  pSVar2 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  pIVar3 = (Il2CppMethodPointer)0x0;
  pIVar4 = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Perks;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    __this_03 = System_Collections_Generic_Dictionary<object__object>__get_Values
                          (__this_00,MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_System);
    if (__this_03 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
      System_Collections_Generic_Dictionary_ValueCollection<object__object>__GetEnumerator
                ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *
                 )&stack0xffffffffffffffd8,__this_03,MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_TKey_T);
      while( true ) {
        __this_01.fields._8_8_ = pIVar3;
        __this_01.fields._dictionary = pSVar2;
        __this_01.fields._currentValue = pIVar4;
        bVar1 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object__object>__MoveNext
                          (__this_01,(MethodInfo_31D09E0 *)&stack0xffffffffffffffd8);
        if ((char)bVar1 == '\0') {
          __this_02.fields._8_8_ = pIVar3;
          __this_02.fields._dictionary = pSVar2;
          __this_02.fields._currentValue = pIVar4;
          System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object__object>__Dispose
                    (__this_02,(MethodInfo_31D09D0 *)&stack0xffffffffffffffd8);
          return;
        }
        if (pIVar4 == (Il2CppObject *)0x0) break;
        *(undefined4 *)((long)&pIVar4[1].klass + 4) = 0;
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.HumanStats$$GetPerkPoints
// il2cpp: int32_t Characters_HumanStats__GetPerkPoints (Characters_HumanStats_o* __this, const MethodInfo* method);
// 0x3fd8950

int32_t Characters_HumanStats__GetPerkPoints(Characters_HumanStats_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_00;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_01;
  bool_conflict bVar2;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_02;
  Il2CppObject *pIVar3;
  int iVar4;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar5;
  Il2CppMethodPointer pIVar6;
  Il2CppObject *key;
  
  if (DAT_05704106 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_BasePerk_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
    DAT_05704106 = '\x01';
  }
  pSVar5 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  pIVar6 = (Il2CppMethodPointer)0x0;
  key = (Il2CppObject *)0x0;
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Perks;
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    __this_02 = System_Collections_Generic_Dictionary<object__object>__get_Keys(pSVar1,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S)
    ;
    if (__this_02 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0) {
      System_Collections_Generic_Dictionary_KeyCollection<object__object>__GetEnumerator
                ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                 &stack0xffffffffffffffb8,__this_02,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
      iVar4 = 0;
      while( true ) {
        __this_00.fields._8_8_ = pIVar6;
        __this_00.fields._dictionary = pSVar5;
        __this_00.fields._currentKey = key;
        bVar2 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__MoveNext
                          (__this_00,(MethodInfo_31D0850 *)&stack0xffffffffffffffb8);
        if ((char)bVar2 == '\0') {
          __this_01.fields._8_8_ = pIVar6;
          __this_01.fields._dictionary = pSVar5;
          __this_01.fields._currentKey = key;
          System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__Dispose
                    (__this_01,(MethodInfo_31D0840 *)&stack0xffffffffffffffb8);
          return iVar4;
        }
        pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Perks;
        if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
        pIVar3 = System_Collections_Generic_Dictionary<object__object>__get_Item
                           (pSVar1,key,MethodInfo_BasePerk_get_Item);
        if (pIVar3 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        iVar4 = iVar4 + *(int *)((long)&pIVar3[1].klass + 4);
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.HumanStats$$UpdateStats
// il2cpp: void Characters_HumanStats__UpdateStats (Characters_HumanStats_o* __this, const MethodInfo* method);
// 0x3fd8720

void Characters_HumanStats__UpdateStats(Characters_HumanStats_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  long lVar2;
  UnityEngine_Rigidbody_o *__this_00;
  bool_conflict bVar3;
  float fVar4;
  
  if (DAT_05704107 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704107 = '\x01';
  }
  pCVar1 = (__this->fields)._human;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    pCVar1 = (__this->fields)._human;
    if (((pCVar1 == (Characters_Human_o *)0x0) ||
        (lVar2 = *(long *)&(pCVar1->fields).Dead, lVar2 == 0)) ||
       (__this_00 = *(UnityEngine_Rigidbody_o **)(lVar2 + 0x18),
       __this_00 == (UnityEngine_Rigidbody_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    fVar4 = (float)(__this->fields).Acceleration;
    UnityEngine_Rigidbody__set_mass
              (__this_00,(fVar4 + fVar4 + -150.0) * -0.001 + 0.5,(MethodInfo *)0x0);
  }
  (__this->fields).RunSpeed = (float)(__this->fields).Speed * 0.4 + -16.0;
  return;
}


// Characters.HumanStats$$ResetGas
// il2cpp: void Characters_HumanStats__ResetGas (Characters_HumanStats_o* __this, const MethodInfo* method);
// 0x3fd8700

void Characters_HumanStats__ResetGas(Characters_HumanStats_o *__this,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = (float)(__this->fields).Gas;
  fVar1 = fVar1 + fVar1 + -35.0;
  (__this->fields).MaxGas = fVar1;
  (__this->fields).CurrentGas = fVar1;
  return;
}


// Characters.HumanStats$$UseDashGas
// il2cpp: void Characters_HumanStats__UseDashGas (Characters_HumanStats_o* __this, const MethodInfo* method);
// 0x3fd8b10

void Characters_HumanStats__UseDashGas(Characters_HumanStats_o *__this,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = (__this->fields).CurrentGas + -4.0;
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  (__this->fields).CurrentGas = fVar1;
  return;
}


// Characters.HumanStats$$UseFrameGas
// il2cpp: void Characters_HumanStats__UseFrameGas (Characters_HumanStats_o* __this, const MethodInfo* method);
// 0x3fd8b50

void Characters_HumanStats__UseFrameGas(Characters_HumanStats_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  fVar2 = (__this->fields).GasUsage;
  fVar1 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  fVar2 = (__this->fields).CurrentGas - fVar1 * fVar2;
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  (__this->fields).CurrentGas = fVar2;
  return;
}


// Characters.HumanStats$$UseHookGas
// il2cpp: void Characters_HumanStats__UseHookGas (Characters_HumanStats_o* __this, const MethodInfo* method);
// 0x3fd8b90

void Characters_HumanStats__UseHookGas(Characters_HumanStats_o *__this,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = (__this->fields).CurrentGas - (__this->fields).GasUsage;
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  (__this->fields).CurrentGas = fVar1;
  return;
}


// Characters.HumanStats$$UseTSGas
// il2cpp: void Characters_HumanStats__UseTSGas (Characters_HumanStats_o* __this, const MethodInfo* method);
// 0x3fd8bb0

void Characters_HumanStats__UseTSGas(Characters_HumanStats_o *__this,MethodInfo *method)

{
  int iVar1;
  long *plVar2;
  float fVar3;
  
  if (DAT_05704108 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterData);
    il2cpp_init_method_metadata(&"StunGasPenalty");
    il2cpp_init_method_metadata(&"Thunderspear");
    DAT_05704108 = '\x01';
    iVar1 = *(int *)(TypeInfo_CharacterData + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CharacterData + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    plVar2 = (long *)**(undefined8 **)(TypeInfo_CharacterData + 0xb8);
  }
  else {
    plVar2 = (long *)**(undefined8 **)(TypeInfo_CharacterData + 0xb8);
  }
  if (((plVar2 != (long *)0x0) &&
      (plVar2 = (long *)(**(code **)(*plVar2 + 0x1a8))
                                  (plVar2,"Thunderspear",*(undefined8 *)(*plVar2 + 0x1b0)),
      plVar2 != (long *)0x0)) &&
     (plVar2 = (long *)(**(code **)(*plVar2 + 0x1a8))
                                 (plVar2,"StunGasPenalty",*(undefined8 *)(*plVar2 + 0x1b0)),
     plVar2 != (long *)0x0)) {
    fVar3 = (float)(**(code **)(*plVar2 + 0x388))(plVar2,*(undefined8 *)(*plVar2 + 0x390));
    fVar3 = fVar3 * -100.0 + (__this->fields).CurrentGas;
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    (__this->fields).CurrentGas = fVar3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.HumanStats$$UseGas
// il2cpp: void Characters_HumanStats__UseGas (Characters_HumanStats_o* __this, float amount, const MethodInfo* method);
// 0x3fd8b30

void Characters_HumanStats__UseGas(Characters_HumanStats_o *__this,float amount,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = (__this->fields).CurrentGas - amount;
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  (__this->fields).CurrentGas = fVar1;
  return;
}


// Characters.HumanStats$$Deserialize
// il2cpp: Characters_HumanStats_o* Characters_HumanStats__Deserialize (Characters_HumanStats_o* stats, System_String_o* str, const MethodInfo* method);
// 0x3fd8cc0

Characters_HumanStats_o *
Characters_HumanStats__Deserialize
          (Characters_HumanStats_o *stats,System_String_o *str,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  Characters_Human_o *human;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_00;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_01;
  bool_conflict bVar2;
  int32_t iVar3;
  undefined4 uVar4;
  SimpleJSONFixed_JSONNode_o *pSVar5;
  long *plVar6;
  SimpleJSONFixed_JSONNode_o *__this_02;
  System_String_o *key;
  Il2CppObject *pIVar7;
  MethodInfo *method_00;
  float fVar8;
  undefined1 auVar9 [16];
  undefined8 in_stack_fffffffffffffee8;
  Il2CppMethodPointer in_stack_fffffffffffffef0;
  System_Collections_Generic_Dictionary_TKey__TValue__o *in_stack_fffffffffffffef8;
  InvokerMethod in_stack_ffffffffffffff00;
  Il2CppObject *in_stack_ffffffffffffff08;
  Il2CppClass *in_stack_ffffffffffffff10;
  Il2CppType *in_stack_ffffffffffffff18;
  System_Collections_Generic_List_T__o *in_stack_ffffffffffffff20;
  _union_13 in_stack_ffffffffffffff28;
  _union_14 local_d0;
  undefined1 local_c8 [80];
  Il2CppMethodPointer local_78;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSStack_70;
  InvokerMethod local_68;
  Il2CppObject *pIStack_60;
  Il2CppClass *local_58;
  Il2CppType *pIStack_50;
  System_Collections_Generic_List_T__o *local_48;
  _union_13 _Stack_40;
  _union_14 local_38;
  
  if (DAT_05704109 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_BasePerk_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_HumanStats);
    il2cpp_init_method_metadata(&"Acceleration");
    il2cpp_init_method_metadata(&"Speed");
    il2cpp_init_method_metadata(&"Ammunition");
    il2cpp_init_method_metadata(&"Gas");
    il2cpp_init_method_metadata(&"Perks");
    DAT_05704109 = '\x01';
  }
  local_48 = (System_Collections_Generic_List_T__o *)0x0;
  _Stack_40.rgctx_data = (Il2CppRGCTXData *)0x0;
  local_58 = (Il2CppClass *)0x0;
  pIStack_50 = (Il2CppType *)0x0;
  local_68 = (InvokerMethod)0x0;
  pIStack_60 = (Il2CppObject *)0x0;
  local_78 = (Il2CppMethodPointer)0x0;
  pSStack_70 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_38.genericMethod = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_c8._48_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_c8._56_8_ = (Il2CppRGCTXData *)0x0;
  local_c8._32_8_ = (Il2CppClass *)0x0;
  local_c8._40_8_ = (Il2CppType *)0x0;
  local_c8._16_8_ = (InvokerMethod)0x0;
  local_c8._24_8_ = (Il2CppObject *)0x0;
  local_c8._0_8_ = (Il2CppMethodPointer)0x0;
  local_c8._8_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_c8._64_8_ = (SimpleJSONFixed_JSONNode_o *)0x0;
  bVar2 = System_String__op_Inequality
                    (str,(System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),(MethodInfo *)0x0
                    );
  if ((char)bVar2 == '\0') {
    if (stats == (Characters_HumanStats_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  else {
    pSVar5 = SimpleJSONFixed_JSON__Parse(str,(MethodInfo *)0x0);
    if (pSVar5 == (SimpleJSONFixed_JSONNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    plVar6 = (long *)(*(pSVar5->klass->vtable)._7_get_Item.methodPtr)
                               (pSVar5,"Speed",(pSVar5->klass->vtable)._7_get_Item.method);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    iVar3 = (**(code **)(*plVar6 + 0x368))(plVar6,*(undefined8 *)(*plVar6 + 0x370));
    if (stats == (Characters_HumanStats_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    (stats->fields).Speed = iVar3;
    plVar6 = (long *)(*(pSVar5->klass->vtable)._7_get_Item.methodPtr)
                               (pSVar5,"Gas",(pSVar5->klass->vtable)._7_get_Item.method);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    iVar3 = (**(code **)(*plVar6 + 0x368))(plVar6,*(undefined8 *)(*plVar6 + 0x370));
    (stats->fields).Gas = iVar3;
    plVar6 = (long *)(*(pSVar5->klass->vtable)._7_get_Item.methodPtr)
                               (pSVar5,"Ammunition",(pSVar5->klass->vtable)._7_get_Item.method);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    iVar3 = (**(code **)(*plVar6 + 0x368))(plVar6,*(undefined8 *)(*plVar6 + 0x370));
    (stats->fields).Ammunition = iVar3;
    plVar6 = (long *)(*(pSVar5->klass->vtable)._7_get_Item.methodPtr)
                               (pSVar5,"Acceleration",(pSVar5->klass->vtable)._7_get_Item.method);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    iVar3 = (**(code **)(*plVar6 + 0x368))(plVar6,*(undefined8 *)(*plVar6 + 0x370));
    (stats->fields).Acceleration = iVar3;
    __this_02 = (SimpleJSONFixed_JSONNode_o *)
                (*(pSVar5->klass->vtable)._7_get_Item.methodPtr)
                          (pSVar5,"Perks",(pSVar5->klass->vtable)._7_get_Item.method);
    if (__this_02 == (SimpleJSONFixed_JSONNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    SimpleJSONFixed_JSONNode__get_Keys
              ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&stack0xfffffffffffffef0,__this_02,
               (MethodInfo *)0x0);
    local_c8._64_8_ = local_d0;
    __this.fields.m_Enumerator.fields.m_Object.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffef0;
    __this.fields.m_Enumerator.fields._0_8_ = in_stack_fffffffffffffee8;
    __this.fields.m_Enumerator.fields.m_Object.fields._8_8_ = in_stack_fffffffffffffef8;
    __this.fields.m_Enumerator.fields.m_Object.fields._current.fields.key =
         (Il2CppObject *)in_stack_ffffffffffffff00;
    __this.fields.m_Enumerator.fields.m_Object.fields._current.fields.value =
         in_stack_ffffffffffffff08;
    __this.fields.m_Enumerator.fields.m_Object.fields._32_8_ = in_stack_ffffffffffffff10;
    __this.fields.m_Enumerator.fields.m_Array.fields._list =
         (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff18;
    __this.fields.m_Enumerator.fields.m_Array.fields._8_8_ = in_stack_ffffffffffffff20;
    __this.fields.m_Enumerator.fields.m_Array.fields._current =
         (SimpleJSONFixed_JSONNode_o *)in_stack_ffffffffffffff28.rgctx_data;
    local_c8._0_8_ = in_stack_fffffffffffffef0;
    local_c8._8_8_ = in_stack_fffffffffffffef8;
    local_c8._16_8_ = in_stack_ffffffffffffff00;
    local_c8._24_8_ = in_stack_ffffffffffffff08;
    local_c8._32_8_ = in_stack_ffffffffffffff10;
    local_c8._40_8_ = in_stack_ffffffffffffff18;
    local_c8._48_8_ = in_stack_ffffffffffffff20;
    local_c8._56_8_ = in_stack_ffffffffffffff28;
    SimpleJSONFixed_JSONNode_KeyEnumerator__GetEnumerator
              ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&stack0xfffffffffffffef0,__this,
               (MethodInfo *)local_c8);
    local_38 = local_d0;
    local_78 = in_stack_fffffffffffffef0;
    pSStack_70 = in_stack_fffffffffffffef8;
    local_68 = in_stack_ffffffffffffff00;
    pIStack_60 = in_stack_ffffffffffffff08;
    local_58 = in_stack_ffffffffffffff10;
    pIStack_50 = in_stack_ffffffffffffff18;
    local_48 = in_stack_ffffffffffffff20;
    _Stack_40 = in_stack_ffffffffffffff28;
    while( true ) {
      method_00 = (MethodInfo *)0x0;
      __this_00.fields.m_Enumerator.fields.m_Object.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffef0;
      __this_00.fields.m_Enumerator.fields._0_8_ = in_stack_fffffffffffffee8;
      __this_00.fields.m_Enumerator.fields.m_Object.fields._8_8_ = in_stack_fffffffffffffef8;
      __this_00.fields.m_Enumerator.fields.m_Object.fields._current.fields.key =
           (Il2CppObject *)in_stack_ffffffffffffff00;
      __this_00.fields.m_Enumerator.fields.m_Object.fields._current.fields.value =
           in_stack_ffffffffffffff08;
      __this_00.fields.m_Enumerator.fields.m_Object.fields._32_8_ = in_stack_ffffffffffffff10;
      __this_00.fields.m_Enumerator.fields.m_Array.fields._list =
           (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff18;
      __this_00.fields.m_Enumerator.fields.m_Array.fields._8_8_ = in_stack_ffffffffffffff20;
      __this_00.fields.m_Enumerator.fields.m_Array.fields._current =
           (SimpleJSONFixed_JSONNode_o *)in_stack_ffffffffffffff28.rgctx_data;
      bVar2 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext(__this_00,(MethodInfo *)&local_78);
      if ((char)bVar2 == '\0') break;
      __this_01.fields.m_Enumerator.fields.m_Object.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffef0;
      __this_01.fields.m_Enumerator.fields._0_8_ = in_stack_fffffffffffffee8;
      __this_01.fields.m_Enumerator.fields.m_Object.fields._8_8_ = in_stack_fffffffffffffef8;
      __this_01.fields.m_Enumerator.fields.m_Object.fields._current.fields.key =
           (Il2CppObject *)in_stack_ffffffffffffff00;
      __this_01.fields.m_Enumerator.fields.m_Object.fields._current.fields.value =
           in_stack_ffffffffffffff08;
      __this_01.fields.m_Enumerator.fields.m_Object.fields._32_8_ = in_stack_ffffffffffffff10;
      __this_01.fields.m_Enumerator.fields.m_Array.fields._list =
           (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff18;
      __this_01.fields.m_Enumerator.fields.m_Array.fields._8_8_ = in_stack_ffffffffffffff20;
      __this_01.fields.m_Enumerator.fields.m_Array.fields._current =
           (SimpleJSONFixed_JSONNode_o *)in_stack_ffffffffffffff28.rgctx_data;
      key = SimpleJSONFixed_JSONNode_KeyEnumerator__get_Current(__this_01,(MethodInfo *)&local_78);
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(stats->fields).Perks;
      if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      bVar2 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                        (pSVar1,(Il2CppObject *)key,MethodInfo_Boolean_ContainsKey);
      if ((char)bVar2 != '\0') {
        pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(stats->fields).Perks;
        if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pIVar7 = System_Collections_Generic_Dictionary<object__object>__get_Item
                           (pSVar1,(Il2CppObject *)key,MethodInfo_BasePerk_get_Item);
        plVar6 = (long *)(*(pSVar5->klass->vtable)._7_get_Item.methodPtr)
                                   (pSVar5,"Perks",(pSVar5->klass->vtable)._7_get_Item.method);
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        plVar6 = (long *)(**(code **)(*plVar6 + 0x1a8))(plVar6,key,*(undefined8 *)(*plVar6 + 0x1b0))
        ;
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        uVar4 = (**(code **)(*plVar6 + 0x368))(plVar6);
        if (pIVar7 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        *(undefined4 *)((long)&pIVar7[1].klass + 4) = uVar4;
      }
    }
    bVar2 = Characters_HumanStats__Validate(stats,method_00);
    if ((char)bVar2 != '\0') {
      fVar8 = (float)(stats->fields).Gas;
      fVar8 = fVar8 + fVar8 + -35.0;
      (stats->fields).MaxGas = fVar8;
      (stats->fields).CurrentGas = fVar8;
      Characters_HumanStats__UpdateStats(stats,method_00);
      return stats;
    }
  }
  human = (stats->fields)._human;
  auVar9 = il2cpp_runtime_glue(TypeInfo_HumanStats);
  Characters_HumanStats___ctor(auVar9._0_8_,human,auVar9._8_8_);
  return auVar9._0_8_;
}


// Characters.HumanStats$$Serialize
// il2cpp: System_String_o* Characters_HumanStats__Serialize (Characters_HumanStats_o* __this, const MethodInfo* method);
// 0x3fd9660

System_String_o *
Characters_HumanStats__Serialize(Characters_HumanStats_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  int iVar2;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_00;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_02;
  bool_conflict bVar3;
  SimpleJSONFixed_JSONObject_o *__this_03;
  System_String_o *pSVar4;
  SimpleJSONFixed_JSONNode_o *pSVar5;
  SimpleJSONFixed_JSONObject_o *__this_04;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_05;
  Il2CppObject *pIVar6;
  undefined8 in_stack_ffffffffffffff88;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *pSVar7;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o local_48;
  
  if (DAT_0570410a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_BasePerk_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Current);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_JSONObject);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
    il2cpp_init_method_metadata(&"Acceleration");
    il2cpp_init_method_metadata(&"Speed");
    il2cpp_init_method_metadata(&"Ammunition");
    il2cpp_init_method_metadata(&"Gas");
    il2cpp_init_method_metadata(&"Perks");
    DAT_0570410a = '\x01';
  }
  bVar3 = Characters_HumanStats__Validate(__this,method);
  if ((char)bVar3 == '\0') {
    (__this->fields).Speed = 0x50;
    (__this->fields).Gas = 0x50;
    (__this->fields).Ammunition = 0x50;
    (__this->fields).Acceleration = 0x50;
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Perks;
    if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto LAB_03fd9ab2;
    System_Collections_Generic_Dictionary<object__object>__Clear(pSVar1,MethodInfo_Void_Clear);
  }
  __this_03 = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_glue(TypeInfo_JSONObject);
  SimpleJSONFixed_JSONObject___ctor(__this_03,(MethodInfo *)0x0);
  iVar2 = (int)__this;
  pSVar4 = System_Int32__ToString(iVar2 + 0x10,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar4,(MethodInfo *)0x0);
  if (__this_03 != (SimpleJSONFixed_JSONObject_o *)0x0) {
    (*(__this_03->klass->vtable)._8_set_Item.methodPtr)
              (__this_03,"Speed",pSVar5,(__this_03->klass->vtable)._8_set_Item.method);
    pSVar4 = System_Int32__ToString(iVar2 + 0x14,(MethodInfo *)0x0);
    pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar4,(MethodInfo *)0x0);
    (*(__this_03->klass->vtable)._8_set_Item.methodPtr)
              (__this_03,"Gas",pSVar5,(__this_03->klass->vtable)._8_set_Item.method);
    pSVar4 = System_Int32__ToString(iVar2 + 0x18,(MethodInfo *)0x0);
    pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar4,(MethodInfo *)0x0);
    (*(__this_03->klass->vtable)._8_set_Item.methodPtr)
              (__this_03,"Ammunition",pSVar5,(__this_03->klass->vtable)._8_set_Item.method);
    pSVar4 = System_Int32__ToString(iVar2 + 0x1c,(MethodInfo *)0x0);
    pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar4,(MethodInfo *)0x0);
    (*(__this_03->klass->vtable)._8_set_Item.methodPtr)
              (__this_03,"Acceleration",pSVar5,(__this_03->klass->vtable)._8_set_Item.method);
    __this_04 = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_glue(TypeInfo_JSONObject);
    SimpleJSONFixed_JSONObject___ctor(__this_04,(MethodInfo *)0x0);
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Perks;
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      __this_05 = System_Collections_Generic_Dictionary<object__object>__get_Keys
                            (pSVar1,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S);
      if (__this_05 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0) {
        System_Collections_Generic_Dictionary_KeyCollection<object__object>__GetEnumerator
                  (&local_48,__this_05,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
        pSVar7 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *)
                 local_48.fields._dictionary;
        if (__this_04 != (SimpleJSONFixed_JSONObject_o *)0x0) {
          do {
            do {
              __this_00.fields._8_8_ = __this_04;
              __this_00.fields._dictionary =
                   (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                   in_stack_ffffffffffffff88;
              __this_00.fields._currentKey = (Il2CppObject *)pSVar7;
              bVar3 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__MoveNext
                                (__this_00,(MethodInfo_31D0850 *)&stack0xffffffffffffff98);
              if ((char)bVar3 == '\0') {
LAB_03fd9a36:
                __this_02.fields._8_8_ = __this_04;
                __this_02.fields._dictionary =
                     (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                     in_stack_ffffffffffffff88;
                __this_02.fields._currentKey = (Il2CppObject *)pSVar7;
                System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__Dispose
                          (__this_02,(MethodInfo_31D0840 *)&stack0xffffffffffffff98);
                (*(__this_03->klass->vtable)._8_set_Item.methodPtr)
                          (__this_03,"Perks",__this_04,
                           (__this_03->klass->vtable)._8_set_Item.method);
                pSVar4 = (System_String_o *)
                         (*(__this_03->klass->vtable)._3_ToString.methodPtr)
                                   (__this_03,(__this_03->klass->vtable)._3_ToString.method);
                return pSVar4;
              }
              pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                       (__this->fields).Perks;
              if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
LAB_03fd9a93:
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              pIVar6 = System_Collections_Generic_Dictionary<object__object>__get_Item
                                 (pSVar1,local_48.fields._currentKey,MethodInfo_BasePerk_get_Item);
              if (pIVar6 == (Il2CppObject *)0x0) {
LAB_03fd9a98:
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
            } while (*(int *)((long)&pIVar6[1].klass + 4) < 1);
            pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                     (__this->fields).Perks;
            if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
            goto LAB_03fd9a31;
            pIVar6 = System_Collections_Generic_Dictionary<object__object>__get_Item
                               (pSVar1,local_48.fields._currentKey,MethodInfo_BasePerk_get_Item);
            if (pIVar6 == (Il2CppObject *)0x0) goto LAB_03fd9aad;
            pSVar4 = System_Int32__ToString((int)pIVar6 + 0x14,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar4,(MethodInfo *)0x0);
            (*(__this_04->klass->vtable)._8_set_Item.methodPtr)
                      (__this_04,local_48.fields._currentKey,pSVar5,
                       (__this_04->klass->vtable)._8_set_Item.method);
          } while( true );
        }
        do {
          __this_01.fields._8_8_ = __this_04;
          __this_01.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff88;
          __this_01.fields._currentKey = (Il2CppObject *)pSVar7;
          bVar3 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__MoveNext
                            (__this_01,(MethodInfo_31D0850 *)&stack0xffffffffffffff98);
          if ((char)bVar3 == '\0') goto LAB_03fd9a36;
          pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Perks
          ;
          if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
          goto LAB_03fd9a93;
          pIVar6 = System_Collections_Generic_Dictionary<object__object>__get_Item
                             (pSVar1,local_48.fields._currentKey,MethodInfo_BasePerk_get_Item);
          if (pIVar6 == (Il2CppObject *)0x0) goto LAB_03fd9a98;
        } while (*(int *)((long)&pIVar6[1].klass + 4) < 1);
        pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Perks;
        if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          pIVar6 = System_Collections_Generic_Dictionary<object__object>__get_Item
                             (pSVar1,local_48.fields._currentKey,MethodInfo_BasePerk_get_Item);
          if (pIVar6 != (Il2CppObject *)0x0) {
            pSVar4 = System_Int32__ToString((int)pIVar6 + 0x14,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
              il2cpp_init_class();
            }
            SimpleJSONFixed_JSONNode__op_Implicit(pSVar4,(MethodInfo *)0x0);
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
LAB_03fd9aad:
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
LAB_03fd9a31:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
  }
LAB_03fd9ab2:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.HumanStats$$Validate
// il2cpp: bool Characters_HumanStats__Validate (Characters_HumanStats_o* __this, const MethodInfo* method);
// 0x3fd9410

bool_conflict Characters_HumanStats__Validate(Characters_HumanStats_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_02;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_03;
  char cVar5;
  bool_conflict bVar6;
  int32_t iVar7;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_04;
  undefined4 in_ECX;
  undefined4 uVar8;
  MethodInfo *method_00;
  undefined1 auVar9 [16];
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar10;
  Il2CppMethodPointer pIVar11;
  Il2CppObject *pIVar12;
  
  if (DAT_0570410b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_System);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_BasePerk_get_Current);
    il2cpp_init_method_metadata(&TypeInfo_HumanStats);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_TKey_T);
    DAT_0570410b = '\x01';
  }
  pSVar10 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  pIVar11 = (Il2CppMethodPointer)0x0;
  pIVar12 = (Il2CppObject *)0x0;
  iVar1 = (__this->fields).Speed;
  iVar2 = (__this->fields).Gas;
  iVar3 = (__this->fields).Ammunition;
  iVar4 = (__this->fields).Acceleration;
  auVar9._0_4_ = -(uint)((int)(iVar1 - 0x32U ^ 0x80000000) < -0x7fffffcd);
  auVar9._4_4_ = -(uint)((int)(iVar2 - 0x32U ^ 0x80000000) < -0x7fffffcd);
  auVar9._8_4_ = -(uint)((int)(iVar3 - 0x32U ^ 0x80000000) < -0x7fffffcd);
  auVar9._12_4_ = -(uint)((int)(iVar4 - 0x32U ^ 0x80000000) < -0x7fffffcd);
  uVar8 = movmskps(in_ECX,auVar9);
  if (((char)uVar8 == '\x0f') && (iVar4 + iVar2 + iVar3 + iVar1 < 0x141)) {
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Perks;
    if ((__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
       (__this_04 = System_Collections_Generic_Dictionary<object__object>__get_Values
                              (__this_00,MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_System),
       __this_04 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
      System_Collections_Generic_Dictionary_ValueCollection<object__object>__GetEnumerator
                ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *
                 )&stack0xffffffffffffffc8,__this_04,MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_TKey_T);
      while( true ) {
        __this_01.fields._8_8_ = pIVar11;
        __this_01.fields._dictionary = pSVar10;
        __this_01.fields._currentValue = pIVar12;
        bVar6 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object__object>__MoveNext
                          (__this_01,(MethodInfo_31D09E0 *)&stack0xffffffffffffffc8);
        if ((char)bVar6 == '\0') {
          __this_03.fields._8_8_ = pIVar11;
          __this_03.fields._dictionary = pSVar10;
          __this_03.fields._currentValue = pIVar12;
          method_00 = MethodInfo_Void_Dispose;
          System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object__object>__Dispose
                    (__this_03,(MethodInfo_31D09D0 *)&stack0xffffffffffffffc8);
          iVar7 = Characters_HumanStats__GetPerkPoints(__this,method_00);
          if (*(int *)(TypeInfo_HumanStats + 0xe4) == 0) {
            il2cpp_init_class();
          }
          return (bool_conflict)
                 CONCAT71((int7)((ulong)*(int **)(TypeInfo_HumanStats + 0xb8) >> 8),
                          iVar7 <= **(int **)(TypeInfo_HumanStats + 0xb8));
        }
        if (pIVar12 == (Il2CppObject *)0x0) break;
        cVar5 = (*pIVar12->klass->vtable[8].methodPtr)
                          (pIVar12,(__this->fields).Perks,pIVar12->klass->vtable[8].method);
        if (cVar5 == '\0') {
          __this_02.fields._8_8_ = pIVar11;
          __this_02.fields._dictionary = pSVar10;
          __this_02.fields._currentValue = pIVar12;
          System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object__object>__Dispose
                    (__this_02,(MethodInfo_31D09D0 *)&stack0xffffffffffffffc8);
          return 0;
        }
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return 0;
}


// Characters.HumanStats$$.cctor
// il2cpp: void Characters_HumanStats___cctor (const MethodInfo* method);
// 0x3fd9c20

void Characters_HumanStats___cctor(MethodInfo *method)

{
  if (DAT_0570410c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanStats);
    DAT_0570410c = '\x01';
  }
  **(undefined4 **)(TypeInfo_HumanStats + 0xb8) = 3;
  return;
}


