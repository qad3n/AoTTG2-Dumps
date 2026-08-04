// Type: Characters.HumanStats
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/HumanStats.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/HumanStats.cs
// --------------------------------

// Characters.HumanStats$$.ctor
// il2cpp: void Characters_HumanStats___ctor (Characters_HumanStats_o* __this, Characters_Human_o* human, const MethodInfo* method);
// 0x42e48a0

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
  
  if (g_data_057ade72 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AdvancedAlloyPerk);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_Characters_BasePerk);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasePerk_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_BasePerk);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DurableBladesPerk);
    il2cpp_runtime_helper_023445d0(&TypeInfo_OmniDashPerk);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RefillTimePerk);
    il2cpp_runtime_helper_023445d0(&TypeInfo_VerticalDashPerk);
    il2cpp_runtime_helper_023445d0(&"AdvancedAlloy");
    il2cpp_runtime_helper_023445d0(&"DurableBlades");
    il2cpp_runtime_helper_023445d0(&"RefillTime");
    il2cpp_runtime_helper_023445d0(&"OmniDash");
    il2cpp_runtime_helper_023445d0(&"VerticalDash");
    g_data_057ade72 = '\x01';
  }
  (__this->fields).Speed = 0x50;
  (__this->fields).Gas = 0x50;
  (__this->fields).Ammunition = 0x50;
  (__this->fields).Acceleration = 0x50;
  pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_BasePerk);
  System_Collections_Generic_Dictionary_object__object____ctor(pSVar4,MethodInfo_Dictionary_2_System_String_Characters_BasePerk);
  ppSVar1 = &(__this->fields).Perks;
  (__this->fields).Perks = (System_Collections_Generic_Dictionary_string__BasePerk__o *)pSVar4;
  il2cpp_runtime_helper_022b4080(ppSVar1);
  (__this->fields).CurrentGas = -1.0;
  (__this->fields).MaxGas = -1.0;
  (__this->fields).GasUsage = 0.2;
  (__this->fields).HorseSpeed = 50.0;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._human = human;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._human,human);
  pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Perks;
  pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_AdvancedAlloyPerk);
  if (g_data_057ade7f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Int32);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_int);
    g_data_057ade7f = '\x01';
  }
  pSVar6 = (System_Collections_Generic_Dictionary_object__int__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_int);
  System_Collections_Generic_Dictionary_object__int____ctor(pSVar6,MethodInfo_Dictionary_2_System_String_System_Int32);
  pIVar5[1].monitor = pSVar6;
  il2cpp_runtime_helper_022b4080(&pIVar5[1].monitor);
  System_Object___ctor(pIVar5,(MethodInfo *)0x0);
  (*pIVar5->klass->vtable[6].methodPtr)(pIVar5,pIVar5->klass->vtable[6].method);
  if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___Add(pSVar4,"AdvancedAlloy",pIVar5,MethodInfo_Void_Add);
    pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)*ppSVar1;
    pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_DurableBladesPerk);
    if (g_data_057ade7f == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Int32);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_int);
      g_data_057ade7f = '\x01';
    }
    pSVar6 = (System_Collections_Generic_Dictionary_object__int__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_int);
    System_Collections_Generic_Dictionary_object__int____ctor(pSVar6,MethodInfo_Dictionary_2_System_String_System_Int32);
    pIVar5[1].monitor = pSVar6;
    il2cpp_runtime_helper_022b4080(&pIVar5[1].monitor);
    System_Object___ctor(pIVar5,(MethodInfo *)0x0);
    (*pIVar5->klass->vtable[6].methodPtr)(pIVar5,pIVar5->klass->vtable[6].method);
    if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___Add(pSVar4,"DurableBlades",pIVar5,MethodInfo_Void_Add);
      pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)*ppSVar1;
      pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_RefillTimePerk);
      if (g_data_057ade7f == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Int32);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_int);
        g_data_057ade7f = '\x01';
      }
      pSVar6 = (System_Collections_Generic_Dictionary_object__int__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_int);
      System_Collections_Generic_Dictionary_object__int____ctor(pSVar6,MethodInfo_Dictionary_2_System_String_System_Int32);
      pIVar5[1].monitor = pSVar6;
      il2cpp_runtime_helper_022b4080(&pIVar5[1].monitor);
      System_Object___ctor(pIVar5,(MethodInfo *)0x0);
      (*pIVar5->klass->vtable[6].methodPtr)(pIVar5,pIVar5->klass->vtable[6].method);
      if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary_object__object___Add(pSVar4,"RefillTime",pIVar5,MethodInfo_Void_Add);
        pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)*ppSVar1;
        pAVar7 = (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o *)il2cpp_runtime_helper_023052d0(TypeInfo_VerticalDashPerk)
        ;
        Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk___ctor(pAVar7,(MethodInfo *)0x0);
        if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary_object__object___Add
                    (pSVar4,"VerticalDash",(Il2CppObject *)pAVar7,MethodInfo_Void_Add);
          pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)*ppSVar1;
          pAVar7 = (Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o *)
                   il2cpp_runtime_helper_023052d0(TypeInfo_OmniDashPerk);
          Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk___ctor(pAVar7,(MethodInfo *)0x0);
          if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            System_Collections_Generic_Dictionary_object__object___Add
                      (pSVar4,"OmniDash",(Il2CppObject *)pAVar7,MethodInfo_Void_Add);
            if ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar1 !=
                (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              method_00 = (MethodInfo *)
                          System_Collections_Generic_Dictionary_object__object___get_Item
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
                    TypeInfo_VerticalDashPerk)) goto label_042e4de5;
                (__this->fields).VerticalDashPerk = (Characters_VerticalDashPerk_o *)method_00;
                if (((((Il2CppClass *)method_00->methodPointer)->_2).naturalAligment < bVar2) ||
                   ((((Il2CppClass *)method_00->methodPointer)->_2).typeHierarchy[(ulong)bVar2 - 1] != pIVar3)
                   ) goto label_042e4de5;
              }
              il2cpp_runtime_helper_022b4080(&(__this->fields).VerticalDashPerk,method_00);
              if ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar1 !=
                  (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                method_00 = (MethodInfo *)
                            System_Collections_Generic_Dictionary_object__object___get_Item
                                      ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar1,
                                       "OmniDash",MethodInfo_BasePerk_get_Item);
                pIVar3 = TypeInfo_OmniDashPerk;
                if (method_00 == (MethodInfo *)0x0) {
                  (__this->fields).OmniDashPerk = (Characters_OmniDashPerk_o *)0x0;
label_042e4da1:
                  il2cpp_runtime_helper_022b4080(&(__this->fields).OmniDashPerk);
                  fVar8 = (float)(__this->fields).Gas;
                  fVar8 = fVar8 + fVar8 + -35.0;
                  (__this->fields).MaxGas = fVar8;
                  (__this->fields).CurrentGas = fVar8;
                  Characters_HumanStats__UpdateStats(__this,method_00);
                  return;
                }
                bVar2 = (TypeInfo_OmniDashPerk->_2).naturalAligment;
                if ((bVar2 <= (((Il2CppClass *)method_00->methodPointer)->_2).naturalAligment) &&
                   ((((Il2CppClass *)method_00->methodPointer)->_2).typeHierarchy[(ulong)bVar2 - 1] ==
                    TypeInfo_OmniDashPerk)) {
                  (__this->fields).OmniDashPerk = (Characters_OmniDashPerk_o *)method_00;
                  if ((bVar2 <= (((Il2CppClass *)method_00->methodPointer)->_2).naturalAligment) &&
                     ((((Il2CppClass *)method_00->methodPointer)->_2).typeHierarchy[(ulong)bVar2 - 1] ==
                      pIVar3)) goto label_042e4da1;
                }
                goto label_042e4de5;
              }
            }
          }
        }
      }
    }
  }
  method_00 = (MethodInfo *)il2cpp_runtime_helper_022b2c90();
label_042e4de5:
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ade7f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Int32);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_int);
    g_data_057ade7f = '\x01';
  }
  pSVar6 = (System_Collections_Generic_Dictionary_object__int__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_int);
  System_Collections_Generic_Dictionary_object__int____ctor(pSVar6,MethodInfo_Dictionary_2_System_String_System_Int32);
  method_00->name = (char *)pSVar6;
  il2cpp_runtime_helper_022b4080(&method_00->name);
  System_Object___ctor((Il2CppObject *)method_00,(MethodInfo *)0x0);
  (**(code **)(method_00->methodPointer + 0x198))(method_00,*(undefined8 *)(method_00->methodPointer + 0x1a0))
  ;
  return;
}


// Characters.HumanStats$$DisablePerks
// il2cpp: void Characters_HumanStats__DisablePerks (Characters_HumanStats_o* __this, const MethodInfo* method);
// 0x42e50a0

void Characters_HumanStats__DisablePerks(Characters_HumanStats_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  long lVar1;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_02;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_03;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_04;
  bool_conflict bVar2;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_05;
  long *plVar3;
  undefined1 auVar4 [12];
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar5;
  Il2CppMethodPointer pIVar6;
  Il2CppObject *pIVar7;
  
  if (g_data_057ade73 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_System_String_C);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasePerk_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enu);
    g_data_057ade73 = '\x01';
  }
  pSVar5 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  pIVar6 = (Il2CppMethodPointer)0x0;
  pIVar7 = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Perks;
  if ((__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
     (__this_05 = System_Collections_Generic_Dictionary_object__object___get_Values(__this_00,MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_System_String_C),
     __this_05 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
    System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator
              ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)
               &stack0xffffffffffffffd8,__this_05,MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enu);
    while( true ) {
      __this_01.fields._8_8_ = pIVar6;
      __this_01.fields._dictionary = pSVar5;
      __this_01.fields._currentValue = pIVar7;
      bVar2 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext
                        (__this_01,(MethodInfo_3251CB0 *)&stack0xffffffffffffffd8);
      if ((char)bVar2 == '\0') {
        __this_02.fields._8_8_ = pIVar6;
        __this_02.fields._dictionary = pSVar5;
        __this_02.fields._currentValue = pIVar7;
        System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
                  (__this_02,(MethodInfo_3251CA0 *)&stack0xffffffffffffffd8);
        return;
      }
      if (pIVar7 == (Il2CppObject *)0x0) break;
      *(undefined4 *)((long)&pIVar7[1].klass + 4) = 0;
    }
    il2cpp_runtime_helper_022b2c90();
  }
  auVar4 = il2cpp_runtime_helper_022b2c90();
  if (auVar4._8_4_ == 1) {
    plVar3 = (long *)__cxa_begin_catch(auVar4._0_8_);
    lVar1 = *plVar3;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pIVar6;
    __this_03.fields._dictionary = pSVar5;
    __this_03.fields._currentValue = pIVar7;
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
              (__this_03,(MethodInfo_3251CA0 *)&stack0xffffffffffffffd8);
    if (lVar1 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar1);
  }
  __this_04.fields._8_8_ = pIVar6;
  __this_04.fields._dictionary = pSVar5;
  __this_04.fields._currentValue = pIVar7;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
            (__this_04,(MethodInfo_3251CA0 *)&stack0xffffffffffffffd8);
  _Unwind_Resume(auVar4._0_8_);
}


// Characters.HumanStats$$GetPerkPoints
// il2cpp: int32_t Characters_HumanStats__GetPerkPoints (Characters_HumanStats_o* __this, const MethodInfo* method);
// 0x42e5210

int32_t Characters_HumanStats__GetPerkPoints(Characters_HumanStats_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  long lVar2;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_00;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_02;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_03;
  bool_conflict bVar3;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_04;
  Il2CppObject *pIVar4;
  long *plVar5;
  int32_t unaff_EBX;
  undefined1 auVar6 [12];
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar7;
  Il2CppMethodPointer pIVar8;
  Il2CppObject *key;
  
  if (g_data_057ade74 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasePerk_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Cha);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
    g_data_057ade74 = '\x01';
  }
  pSVar7 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  pIVar8 = (Il2CppMethodPointer)0x0;
  key = (Il2CppObject *)0x0;
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Perks;
  if ((pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
     (__this_04 = System_Collections_Generic_Dictionary_object__object___get_Keys(pSVar1,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Cha),
     __this_04 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)) {
    System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
              ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
               &stack0xffffffffffffffb8,__this_04,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
    unaff_EBX = 0;
    while( true ) {
      __this_00.fields._8_8_ = pIVar8;
      __this_00.fields._dictionary = pSVar7;
      __this_00.fields._currentKey = key;
      bVar3 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                        (__this_00,(MethodInfo_3251B20 *)&stack0xffffffffffffffb8);
      if ((char)bVar3 == '\0') {
        __this_01.fields._8_8_ = pIVar8;
        __this_01.fields._dictionary = pSVar7;
        __this_01.fields._currentKey = key;
        System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                  (__this_01,(MethodInfo_3251B10 *)&stack0xffffffffffffffb8);
        return unaff_EBX;
      }
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Perks;
      if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
      pIVar4 = System_Collections_Generic_Dictionary_object__object___get_Item(pSVar1,key,MethodInfo_BasePerk_get_Item);
      if (pIVar4 == (Il2CppObject *)0x0) goto label_042e5338;
      unaff_EBX = unaff_EBX + *(int *)((long)&pIVar4[1].klass + 4);
    }
    il2cpp_runtime_helper_022b2c90();
label_042e5338:
    il2cpp_runtime_helper_022b2c90();
  }
  auVar6 = il2cpp_runtime_helper_022b2c90();
  if (auVar6._8_4_ == 1) {
    plVar5 = (long *)__cxa_begin_catch(auVar6._0_8_);
    lVar2 = *plVar5;
    __cxa_end_catch();
    __this_02.fields._8_8_ = pIVar8;
    __this_02.fields._dictionary = pSVar7;
    __this_02.fields._currentKey = key;
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
              (__this_02,(MethodInfo_3251B10 *)&stack0xffffffffffffffb8);
    if (lVar2 == 0) {
      return unaff_EBX;
    }
    il2cpp_runtime_helper_022fefe0(lVar2);
  }
  __this_03.fields._8_8_ = pIVar8;
  __this_03.fields._dictionary = pSVar7;
  __this_03.fields._currentKey = key;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
            (__this_03,(MethodInfo_3251B10 *)&stack0xffffffffffffffb8);
  _Unwind_Resume(auVar6._0_8_);
}


// Characters.HumanStats$$UpdateStats
// il2cpp: void Characters_HumanStats__UpdateStats (Characters_HumanStats_o* __this, const MethodInfo* method);
// 0x42e4fe0

void Characters_HumanStats__UpdateStats(Characters_HumanStats_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  long lVar2;
  UnityEngine_Rigidbody_o *__this_00;
  Photon_Pun_PhotonView_o *__this_01;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_02;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_03;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_04;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_05;
  bool_conflict bVar3;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_06;
  long *plVar4;
  Characters_Human_o *x;
  float fVar5;
  undefined1 auVar6 [12];
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar7;
  Il2CppMethodPointer pIVar8;
  Il2CppObject *pIVar9;
  
  if (g_data_057ade75 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ade75 = '\x01';
  }
  x = (__this->fields)._human;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    pCVar1 = (__this->fields)._human;
    if ((pCVar1 != (Characters_Human_o *)0x0) && (lVar2 = *(long *)&(pCVar1->fields).Dead, lVar2 != 0)) {
      __this_00 = *(UnityEngine_Rigidbody_o **)(lVar2 + 0x18);
      x = (Characters_Human_o *)0x0;
      if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
        fVar5 = (float)(__this->fields).Acceleration;
        UnityEngine_Rigidbody__set_mass(__this_00,(fVar5 + fVar5 + -150.0) * -0.001 + 0.5,(MethodInfo *)0x0);
        goto label_042e5072;
      }
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ade73 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_System_String_C);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
      il2cpp_runtime_helper_023445d0(&MethodInfo_BasePerk_get_Current);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enu);
      g_data_057ade73 = '\x01';
    }
    pSVar7 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
    pIVar8 = (Il2CppMethodPointer)0x0;
    pIVar9 = (Il2CppObject *)0x0;
    __this_01 = (x->fields).pvCache;
    if ((__this_01 != (Photon_Pun_PhotonView_o *)0x0) &&
       (__this_06 = System_Collections_Generic_Dictionary_object__object___get_Values
                              ((System_Collections_Generic_Dictionary_object__object__o *)__this_01,
                               MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_System_String_C),
       __this_06 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
      System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator
                ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)
                 &stack0xffffffffffffffc0,__this_06,MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enu);
      while( true ) {
        __this_02.fields._8_8_ = pIVar8;
        __this_02.fields._dictionary = pSVar7;
        __this_02.fields._currentValue = pIVar9;
        bVar3 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext
                          (__this_02,(MethodInfo_3251CB0 *)&stack0xffffffffffffffc0);
        if ((char)bVar3 == '\0') {
          __this_03.fields._8_8_ = pIVar8;
          __this_03.fields._dictionary = pSVar7;
          __this_03.fields._currentValue = pIVar9;
          System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
                    (__this_03,(MethodInfo_3251CA0 *)&stack0xffffffffffffffc0);
          return;
        }
        if (pIVar9 == (Il2CppObject *)0x0) break;
        *(undefined4 *)((long)&pIVar9[1].klass + 4) = 0;
      }
      il2cpp_runtime_helper_022b2c90();
    }
    auVar6 = il2cpp_runtime_helper_022b2c90();
    if (auVar6._8_4_ == 1) {
      plVar4 = (long *)__cxa_begin_catch(auVar6._0_8_);
      lVar2 = *plVar4;
      __cxa_end_catch();
      __this_04.fields._8_8_ = pIVar8;
      __this_04.fields._dictionary = pSVar7;
      __this_04.fields._currentValue = pIVar9;
      System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
                (__this_04,(MethodInfo_3251CA0 *)&stack0xffffffffffffffc0);
      if (lVar2 == 0) {
        return;
      }
      il2cpp_runtime_helper_022fefe0(lVar2);
    }
    __this_05.fields._8_8_ = pIVar8;
    __this_05.fields._dictionary = pSVar7;
    __this_05.fields._currentValue = pIVar9;
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
              (__this_05,(MethodInfo_3251CA0 *)&stack0xffffffffffffffc0);
    _Unwind_Resume(auVar6._0_8_);
  }
label_042e5072:
  (__this->fields).RunSpeed = (float)(__this->fields).Speed * 0.4 + -16.0;
  return;
}


// Characters.HumanStats$$ResetGas
// il2cpp: void Characters_HumanStats__ResetGas (Characters_HumanStats_o* __this, const MethodInfo* method);
// 0x42e4fc0

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
// 0x42e53d0

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
// 0x42e5410

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
// 0x42e5450

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
// 0x42e5470

void Characters_HumanStats__UseTSGas(Characters_HumanStats_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  Il2CppMethodPointer pIVar2;
  Characters_Human_o *human;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_00;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_01;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_02;
  char cVar3;
  bool_conflict bVar4;
  int32_t iVar5;
  undefined4 uVar6;
  Characters_HumanStats_o *pCVar7;
  SimpleJSONFixed_JSONNode_o *pSVar8;
  long *plVar9;
  SimpleJSONFixed_JSONNode_o *__this_03;
  System_String_o *pSVar10;
  Il2CppObject *pIVar11;
  undefined8 uVar12;
  System_String_o *str0;
  long lVar13;
  undefined8 *puVar14;
  MethodInfo *pMVar15;
  Characters_HumanStats_o *__this_04;
  float fVar16;
  undefined1 auVar17 [12];
  undefined1 auVar18 [16];
  undefined8 in_stack_fffffffffffffed0;
  Il2CppMethodPointer in_stack_fffffffffffffed8;
  System_Collections_Generic_Dictionary_TKey__TValue__o *in_stack_fffffffffffffee0;
  InvokerMethod in_stack_fffffffffffffee8;
  Il2CppObject *in_stack_fffffffffffffef0;
  Il2CppClass *in_stack_fffffffffffffef8;
  Il2CppType *in_stack_ffffffffffffff00;
  System_Collections_Generic_List_T__o *in_stack_ffffffffffffff08;
  _union_13 in_stack_ffffffffffffff10;
  _union_14 _Stack_e8;
  undefined1 auStack_e0 [80];
  Il2CppMethodPointer pIStack_90;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSStack_88;
  InvokerMethod pIStack_80;
  Il2CppObject *pIStack_78;
  Il2CppClass *pIStack_70;
  Il2CppType *pIStack_68;
  System_Collections_Generic_List_T__o *pSStack_60;
  _union_13 _Stack_58;
  _union_14 _Stack_50;
  long *plStack_48;
  
  if (g_data_057ade76 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterData);
    il2cpp_runtime_helper_023445d0(&"StunGasPenalty");
    il2cpp_runtime_helper_023445d0(&"Thunderspear");
    g_data_057ade76 = '\x01';
    if (*(int *)(TypeInfo_CharacterData + 0xe4) != 0) goto label_042e5493;
label_042e54e5:
    il2cpp_runtime_helper_02337ed0();
    __this_04 = (Characters_HumanStats_o *)**(long **)(TypeInfo_CharacterData + 0xb8);
    pMVar15 = "Thunderspear";
  }
  else {
    if (*(int *)(TypeInfo_CharacterData + 0xe4) == 0) goto label_042e54e5;
label_042e5493:
    __this_04 = (Characters_HumanStats_o *)**(long **)(TypeInfo_CharacterData + 0xb8);
    pMVar15 = "Thunderspear";
  }
  "Thunderspear" = pMVar15;
  if (((__this_04 != (Characters_HumanStats_o *)0x0) &&
      (pCVar7 = (Characters_HumanStats_o *)
                (*__this_04->klass[1]._1.this_arg.data)
                          (__this_04,pMVar15,*(undefined8 *)&__this_04->klass[1]._1.this_arg.bits),
      method = pMVar15, pCVar7 != (Characters_HumanStats_o *)0x0)) &&
     (method = "StunGasPenalty",
     plVar9 = (long *)(*pCVar7->klass[1]._1.this_arg.data)
                                (pCVar7,"StunGasPenalty",*(undefined8 *)&pCVar7->klass[1]._1.this_arg.bits),
     __this_04 = pCVar7, plVar9 != (long *)0x0)) {
    fVar16 = (float)(**(code **)(*plVar9 + 0x388))(plVar9,*(undefined8 *)(*plVar9 + 0x390));
    fVar16 = fVar16 * -100.0 + (__this->fields).CurrentGas;
    if (fVar16 <= 0.0) {
      fVar16 = 0.0;
    }
    (__this->fields).CurrentGas = fVar16;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  plStack_48 = &TypeInfo_CharacterData;
  if (g_data_057ade77 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasePerk_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanStats);
    il2cpp_runtime_helper_023445d0(&"Acceleration");
    il2cpp_runtime_helper_023445d0(&"Speed");
    il2cpp_runtime_helper_023445d0(&"Ammunition");
    il2cpp_runtime_helper_023445d0(&"Gas");
    il2cpp_runtime_helper_023445d0(&"Perks");
    g_data_057ade77 = '\x01';
  }
  pSStack_60 = (System_Collections_Generic_List_T__o *)0x0;
  _Stack_58.rgctx_data = (Il2CppRGCTXData *)0x0;
  pIStack_70 = (Il2CppClass *)0x0;
  pIStack_68 = (Il2CppType *)0x0;
  pIStack_80 = (InvokerMethod)0x0;
  pIStack_78 = (Il2CppObject *)0x0;
  pIStack_90 = (Il2CppMethodPointer)0x0;
  pSStack_88 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  _Stack_50.genericMethod = (SimpleJSONFixed_JSONNode_o *)0x0;
  auStack_e0._48_8_ = (System_Collections_Generic_List_T__o *)0x0;
  auStack_e0._56_8_ = (Il2CppRGCTXData *)0x0;
  auStack_e0._32_8_ = (Il2CppClass *)0x0;
  auStack_e0._40_8_ = (Il2CppType *)0x0;
  auStack_e0._16_8_ = (InvokerMethod)0x0;
  auStack_e0._24_8_ = (Il2CppObject *)0x0;
  auStack_e0._0_8_ = (Il2CppMethodPointer)0x0;
  auStack_e0._8_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  auStack_e0._64_8_ = (SimpleJSONFixed_JSONNode_o *)0x0;
  bVar4 = System_String__op_Inequality
                    ((System_String_o *)method,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),
                     (MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
label_042e5c50:
    if (__this_04 != (Characters_HumanStats_o *)0x0) {
label_042e5c55:
      human = (__this_04->fields)._human;
      auVar18 = il2cpp_runtime_helper_023052d0(TypeInfo_HumanStats);
      Characters_HumanStats___ctor(auVar18._0_8_,human,auVar18._8_8_);
      return;
    }
  }
  else {
    pSVar8 = SimpleJSONFixed_JSON__Parse((System_String_o *)method,(MethodInfo *)0x0);
    if (pSVar8 == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_042e5987:
      il2cpp_runtime_helper_022b2c90();
label_042e598c:
      il2cpp_runtime_helper_022b2c90();
label_042e5991:
      il2cpp_runtime_helper_022b2c90();
label_042e5996:
      il2cpp_runtime_helper_022b2c90();
label_042e599b:
      il2cpp_runtime_helper_022b2c90();
label_042e59a0:
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      plVar9 = (long *)(*(pSVar8->klass->vtable)._7_get_Item.methodPtr)
                                 (pSVar8,"Speed",(pSVar8->klass->vtable)._7_get_Item.method);
      if (plVar9 == (long *)0x0) goto label_042e598c;
      iVar5 = (**(code **)(*plVar9 + 0x368))(plVar9,*(undefined8 *)(*plVar9 + 0x370));
      if (__this_04 == (Characters_HumanStats_o *)0x0) goto label_042e5991;
      (__this_04->fields).Speed = iVar5;
      plVar9 = (long *)(*(pSVar8->klass->vtable)._7_get_Item.methodPtr)
                                 (pSVar8,"Gas",(pSVar8->klass->vtable)._7_get_Item.method);
      if (plVar9 == (long *)0x0) goto label_042e5996;
      iVar5 = (**(code **)(*plVar9 + 0x368))(plVar9,*(undefined8 *)(*plVar9 + 0x370));
      (__this_04->fields).Gas = iVar5;
      plVar9 = (long *)(*(pSVar8->klass->vtable)._7_get_Item.methodPtr)
                                 (pSVar8,"Ammunition",(pSVar8->klass->vtable)._7_get_Item.method);
      if (plVar9 == (long *)0x0) goto label_042e599b;
      iVar5 = (**(code **)(*plVar9 + 0x368))(plVar9,*(undefined8 *)(*plVar9 + 0x370));
      (__this_04->fields).Ammunition = iVar5;
      plVar9 = (long *)(*(pSVar8->klass->vtable)._7_get_Item.methodPtr)
                                 (pSVar8,"Acceleration",(pSVar8->klass->vtable)._7_get_Item.method);
      if (plVar9 == (long *)0x0) goto label_042e59a0;
      iVar5 = (**(code **)(*plVar9 + 0x368))(plVar9,*(undefined8 *)(*plVar9 + 0x370));
      (__this_04->fields).Acceleration = iVar5;
      __this_03 = (SimpleJSONFixed_JSONNode_o *)
                  (*(pSVar8->klass->vtable)._7_get_Item.methodPtr)
                            (pSVar8,"Perks",(pSVar8->klass->vtable)._7_get_Item.method);
      if (__this_03 != (SimpleJSONFixed_JSONNode_o *)0x0) {
        SimpleJSONFixed_JSONNode__get_Keys
                  ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&stack0xfffffffffffffed8,__this_03,
                   (MethodInfo *)0x0);
        auStack_e0._64_8_ = _Stack_e8;
        __this_00.fields.m_Enumerator.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffed8;
        __this_00.fields.m_Enumerator.fields._0_8_ = in_stack_fffffffffffffed0;
        __this_00.fields.m_Enumerator.fields.m_Object.fields._8_8_ = in_stack_fffffffffffffee0;
        __this_00.fields.m_Enumerator.fields.m_Object.fields._current.fields.key =
             (Il2CppObject *)in_stack_fffffffffffffee8;
        __this_00.fields.m_Enumerator.fields.m_Object.fields._current.fields.value = in_stack_fffffffffffffef0
        ;
        __this_00.fields.m_Enumerator.fields.m_Object.fields._32_8_ = in_stack_fffffffffffffef8;
        __this_00.fields.m_Enumerator.fields.m_Array.fields._list =
             (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff00;
        __this_00.fields.m_Enumerator.fields.m_Array.fields._8_8_ = in_stack_ffffffffffffff08;
        __this_00.fields.m_Enumerator.fields.m_Array.fields._current =
             (SimpleJSONFixed_JSONNode_o *)in_stack_ffffffffffffff10.rgctx_data;
        auStack_e0._0_8_ = in_stack_fffffffffffffed8;
        auStack_e0._8_8_ = in_stack_fffffffffffffee0;
        auStack_e0._16_8_ = in_stack_fffffffffffffee8;
        auStack_e0._24_8_ = in_stack_fffffffffffffef0;
        auStack_e0._32_8_ = in_stack_fffffffffffffef8;
        auStack_e0._40_8_ = in_stack_ffffffffffffff00;
        auStack_e0._48_8_ = in_stack_ffffffffffffff08;
        auStack_e0._56_8_ = in_stack_ffffffffffffff10;
        SimpleJSONFixed_JSONNode_KeyEnumerator__GetEnumerator
                  ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&stack0xfffffffffffffed8,__this_00,
                   (MethodInfo *)auStack_e0);
        _Stack_50 = _Stack_e8;
        pIStack_90 = in_stack_fffffffffffffed8;
        pSStack_88 = in_stack_fffffffffffffee0;
        pIStack_80 = in_stack_fffffffffffffee8;
        pIStack_78 = in_stack_fffffffffffffef0;
        pIStack_70 = in_stack_fffffffffffffef8;
        pIStack_68 = in_stack_ffffffffffffff00;
        pSStack_60 = in_stack_ffffffffffffff08;
        _Stack_58 = in_stack_ffffffffffffff10;
label_042e5870:
        pMVar15 = (MethodInfo *)0x0;
        __this_01.fields.m_Enumerator.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffed8;
        __this_01.fields.m_Enumerator.fields._0_8_ = in_stack_fffffffffffffed0;
        __this_01.fields.m_Enumerator.fields.m_Object.fields._8_8_ = in_stack_fffffffffffffee0;
        __this_01.fields.m_Enumerator.fields.m_Object.fields._current.fields.key =
             (Il2CppObject *)in_stack_fffffffffffffee8;
        __this_01.fields.m_Enumerator.fields.m_Object.fields._current.fields.value = in_stack_fffffffffffffef0
        ;
        __this_01.fields.m_Enumerator.fields.m_Object.fields._32_8_ = in_stack_fffffffffffffef8;
        __this_01.fields.m_Enumerator.fields.m_Array.fields._list =
             (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff00;
        __this_01.fields.m_Enumerator.fields.m_Array.fields._8_8_ = in_stack_ffffffffffffff08;
        __this_01.fields.m_Enumerator.fields.m_Array.fields._current =
             (SimpleJSONFixed_JSONNode_o *)in_stack_ffffffffffffff10.rgctx_data;
        bVar4 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext(__this_01,(MethodInfo *)&pIStack_90);
        if ((char)bVar4 != '\0') {
          __this_02.fields.m_Enumerator.fields.m_Object.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffed8;
          __this_02.fields.m_Enumerator.fields._0_8_ = in_stack_fffffffffffffed0;
          __this_02.fields.m_Enumerator.fields.m_Object.fields._8_8_ = in_stack_fffffffffffffee0;
          __this_02.fields.m_Enumerator.fields.m_Object.fields._current.fields.key =
               (Il2CppObject *)in_stack_fffffffffffffee8;
          __this_02.fields.m_Enumerator.fields.m_Object.fields._current.fields.value =
               in_stack_fffffffffffffef0;
          __this_02.fields.m_Enumerator.fields.m_Object.fields._32_8_ = in_stack_fffffffffffffef8;
          __this_02.fields.m_Enumerator.fields.m_Array.fields._list =
               (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff00;
          __this_02.fields.m_Enumerator.fields.m_Array.fields._8_8_ = in_stack_ffffffffffffff08;
          __this_02.fields.m_Enumerator.fields.m_Array.fields._current =
               (SimpleJSONFixed_JSONNode_o *)in_stack_ffffffffffffff10.rgctx_data;
          pSVar10 = SimpleJSONFixed_JSONNode_KeyEnumerator__get_Current(__this_02,(MethodInfo *)&pIStack_90);
          pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this_04->fields).Perks;
          if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto code_r0x042e5899;
          il2cpp_runtime_helper_022b2c90();
          goto label_042e5973;
        }
        bVar4 = Characters_HumanStats__Validate(__this_04,pMVar15);
        if ((char)bVar4 != '\0') {
          fVar16 = (float)(__this_04->fields).Gas;
          fVar16 = fVar16 + fVar16 + -35.0;
          (__this_04->fields).MaxGas = fVar16;
          (__this_04->fields).CurrentGas = fVar16;
          Characters_HumanStats__UpdateStats(__this_04,pMVar15);
          return;
        }
        goto label_042e5c55;
      }
    }
    auVar17 = il2cpp_runtime_helper_022b2c90();
    if (auVar17._8_4_ != 1) {
      _Unwind_Resume(auVar17._0_8_);
    }
    method = (MethodInfo *)__cxa_begin_catch(auVar17._0_8_);
    uVar12 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    cVar3 = il2cpp_runtime_helper_0233e000(uVar12,*(undefined8 *)method->methodPointer);
    if (cVar3 == '\0') goto label_042e5c90;
    pIVar2 = method->methodPointer;
    __cxa_end_catch();
    method = (MethodInfo *)0x0;
    if (pIVar2 != (Il2CppMethodPointer)0x0) {
      pSVar10 = (System_String_o *)
                (**(code **)(*(long *)pIVar2 + 0x188))(pIVar2,*(undefined8 *)(*(long *)pIVar2 + 400));
      str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Exception while loading human stats: ");
      method = (MethodInfo *)System_String__Concat_3ae5ba0(str0,pSVar10,(MethodInfo *)0x0);
      lVar13 = il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
      if (*(int *)(lVar13 + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0(lVar13);
      }
      UnityEngine_Debug__Log((Il2CppObject *)method,(MethodInfo *)0x0);
      goto label_042e5c50;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_042e5c90:
  puVar14 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar14 = method->methodPointer;
  __cxa_throw(puVar14,&PTR_PTR_05215060,0);
code_r0x042e5899:
  bVar4 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                    (pSVar1,(Il2CppObject *)pSVar10,MethodInfo_Boolean_ContainsKey);
  if ((char)bVar4 == '\0') goto label_042e5870;
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this_04->fields).Perks;
  if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_042e5973:
    il2cpp_runtime_helper_022b2c90();
label_042e5978:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pIVar11 = System_Collections_Generic_Dictionary_object__object___get_Item
                        (pSVar1,(Il2CppObject *)pSVar10,MethodInfo_BasePerk_get_Item);
    plVar9 = (long *)(*(pSVar8->klass->vtable)._7_get_Item.methodPtr)
                               (pSVar8,"Perks",(pSVar8->klass->vtable)._7_get_Item.method);
    if (plVar9 == (long *)0x0) goto label_042e5978;
    plVar9 = (long *)(**(code **)(*plVar9 + 0x1a8))(plVar9,pSVar10,*(undefined8 *)(*plVar9 + 0x1b0));
    if (plVar9 != (long *)0x0) {
      uVar6 = (**(code **)(*plVar9 + 0x368))(plVar9);
      if (pIVar11 != (Il2CppObject *)0x0) {
        *(undefined4 *)((long)&pIVar11[1].klass + 4) = uVar6;
        goto label_042e5870;
      }
      goto label_042e5982;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_042e5982:
  il2cpp_runtime_helper_022b2c90();
  goto label_042e5987;
}


// Characters.HumanStats$$UseGas
// il2cpp: void Characters_HumanStats__UseGas (Characters_HumanStats_o* __this, float amount, const MethodInfo* method);
// 0x42e53f0

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
// 0x42e5580

Characters_HumanStats_o *
Characters_HumanStats__Deserialize(Characters_HumanStats_o *stats,System_String_o *str,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  System_String_c *pSVar2;
  void *pvVar3;
  Characters_Human_o *human;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_00;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_01;
  char cVar4;
  bool_conflict bVar5;
  int32_t iVar6;
  undefined4 uVar7;
  SimpleJSONFixed_JSONNode_o *pSVar8;
  long *plVar9;
  SimpleJSONFixed_JSONNode_o *__this_02;
  System_String_o *pSVar10;
  Il2CppObject *pIVar11;
  undefined8 uVar12;
  System_String_o *str0;
  long lVar13;
  undefined8 *puVar14;
  MethodInfo *method_00;
  float fVar15;
  undefined1 auVar16 [12];
  undefined1 auVar17 [16];
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
  
  if (g_data_057ade77 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasePerk_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanStats);
    il2cpp_runtime_helper_023445d0(&"Acceleration");
    il2cpp_runtime_helper_023445d0(&"Speed");
    il2cpp_runtime_helper_023445d0(&"Ammunition");
    il2cpp_runtime_helper_023445d0(&"Gas");
    il2cpp_runtime_helper_023445d0(&"Perks");
    g_data_057ade77 = '\x01';
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
  bVar5 = System_String__op_Inequality
                    (str,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
label_042e5c50:
    if (stats != (Characters_HumanStats_o *)0x0) {
label_042e5c55:
      human = (stats->fields)._human;
      auVar17 = il2cpp_runtime_helper_023052d0(TypeInfo_HumanStats);
      Characters_HumanStats___ctor(auVar17._0_8_,human,auVar17._8_8_);
      return auVar17._0_8_;
    }
  }
  else {
    pSVar8 = SimpleJSONFixed_JSON__Parse(str,(MethodInfo *)0x0);
    if (pSVar8 == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_042e5987:
      il2cpp_runtime_helper_022b2c90();
label_042e598c:
      il2cpp_runtime_helper_022b2c90();
label_042e5991:
      il2cpp_runtime_helper_022b2c90();
label_042e5996:
      il2cpp_runtime_helper_022b2c90();
label_042e599b:
      il2cpp_runtime_helper_022b2c90();
label_042e59a0:
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      plVar9 = (long *)(*(pSVar8->klass->vtable)._7_get_Item.methodPtr)
                                 (pSVar8,"Speed",(pSVar8->klass->vtable)._7_get_Item.method);
      if (plVar9 == (long *)0x0) goto label_042e598c;
      iVar6 = (**(code **)(*plVar9 + 0x368))(plVar9,*(undefined8 *)(*plVar9 + 0x370));
      if (stats == (Characters_HumanStats_o *)0x0) goto label_042e5991;
      (stats->fields).Speed = iVar6;
      plVar9 = (long *)(*(pSVar8->klass->vtable)._7_get_Item.methodPtr)
                                 (pSVar8,"Gas",(pSVar8->klass->vtable)._7_get_Item.method);
      if (plVar9 == (long *)0x0) goto label_042e5996;
      iVar6 = (**(code **)(*plVar9 + 0x368))(plVar9,*(undefined8 *)(*plVar9 + 0x370));
      (stats->fields).Gas = iVar6;
      plVar9 = (long *)(*(pSVar8->klass->vtable)._7_get_Item.methodPtr)
                                 (pSVar8,"Ammunition",(pSVar8->klass->vtable)._7_get_Item.method);
      if (plVar9 == (long *)0x0) goto label_042e599b;
      iVar6 = (**(code **)(*plVar9 + 0x368))(plVar9,*(undefined8 *)(*plVar9 + 0x370));
      (stats->fields).Ammunition = iVar6;
      plVar9 = (long *)(*(pSVar8->klass->vtable)._7_get_Item.methodPtr)
                                 (pSVar8,"Acceleration",(pSVar8->klass->vtable)._7_get_Item.method);
      if (plVar9 == (long *)0x0) goto label_042e59a0;
      iVar6 = (**(code **)(*plVar9 + 0x368))(plVar9,*(undefined8 *)(*plVar9 + 0x370));
      (stats->fields).Acceleration = iVar6;
      __this_02 = (SimpleJSONFixed_JSONNode_o *)
                  (*(pSVar8->klass->vtable)._7_get_Item.methodPtr)
                            (pSVar8,"Perks",(pSVar8->klass->vtable)._7_get_Item.method);
      if (__this_02 != (SimpleJSONFixed_JSONNode_o *)0x0) {
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
        __this.fields.m_Enumerator.fields.m_Object.fields._current.fields.value = in_stack_ffffffffffffff08;
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
label_042e5870:
        method_00 = (MethodInfo *)0x0;
        __this_00.fields.m_Enumerator.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffef0;
        __this_00.fields.m_Enumerator.fields._0_8_ = in_stack_fffffffffffffee8;
        __this_00.fields.m_Enumerator.fields.m_Object.fields._8_8_ = in_stack_fffffffffffffef8;
        __this_00.fields.m_Enumerator.fields.m_Object.fields._current.fields.key =
             (Il2CppObject *)in_stack_ffffffffffffff00;
        __this_00.fields.m_Enumerator.fields.m_Object.fields._current.fields.value = in_stack_ffffffffffffff08
        ;
        __this_00.fields.m_Enumerator.fields.m_Object.fields._32_8_ = in_stack_ffffffffffffff10;
        __this_00.fields.m_Enumerator.fields.m_Array.fields._list =
             (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff18;
        __this_00.fields.m_Enumerator.fields.m_Array.fields._8_8_ = in_stack_ffffffffffffff20;
        __this_00.fields.m_Enumerator.fields.m_Array.fields._current =
             (SimpleJSONFixed_JSONNode_o *)in_stack_ffffffffffffff28.rgctx_data;
        bVar5 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext(__this_00,(MethodInfo *)&local_78);
        if ((char)bVar5 != '\0') {
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
          pSVar10 = SimpleJSONFixed_JSONNode_KeyEnumerator__get_Current(__this_01,(MethodInfo *)&local_78);
          pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(stats->fields).Perks;
          if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto code_r0x042e5899;
          il2cpp_runtime_helper_022b2c90();
          goto label_042e5973;
        }
        bVar5 = Characters_HumanStats__Validate(stats,method_00);
        if ((char)bVar5 != '\0') {
          fVar15 = (float)(stats->fields).Gas;
          fVar15 = fVar15 + fVar15 + -35.0;
          (stats->fields).MaxGas = fVar15;
          (stats->fields).CurrentGas = fVar15;
          Characters_HumanStats__UpdateStats(stats,method_00);
          return stats;
        }
        goto label_042e5c55;
      }
    }
    auVar16 = il2cpp_runtime_helper_022b2c90();
    if (auVar16._8_4_ != 1) {
      _Unwind_Resume(auVar16._0_8_);
    }
    str = (System_String_o *)__cxa_begin_catch(auVar16._0_8_);
    uVar12 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    cVar4 = il2cpp_runtime_helper_0233e000(uVar12,(str->klass->_1).image);
    if (cVar4 == '\0') goto label_042e5c90;
    pSVar2 = str->klass;
    __cxa_end_catch();
    str = (System_String_o *)0x0;
    if (pSVar2 != (System_String_c *)0x0) {
      pvVar3 = (pSVar2->_1).image;
      pSVar10 = (System_String_o *)
                (**(code **)((long)pvVar3 + 0x188))(pSVar2,*(undefined8 *)((long)pvVar3 + 400));
      str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Exception while loading human stats: ");
      str = System_String__Concat_3ae5ba0(str0,pSVar10,(MethodInfo *)0x0);
      lVar13 = il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
      if (*(int *)(lVar13 + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0(lVar13);
      }
      UnityEngine_Debug__Log((Il2CppObject *)str,(MethodInfo *)0x0);
      goto label_042e5c50;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_042e5c90:
  puVar14 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar14 = str->klass;
  __cxa_throw(puVar14,&PTR_PTR_05215060,0);
code_r0x042e5899:
  bVar5 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                    (pSVar1,(Il2CppObject *)pSVar10,MethodInfo_Boolean_ContainsKey);
  if ((char)bVar5 == '\0') goto label_042e5870;
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(stats->fields).Perks;
  if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_042e5973:
    il2cpp_runtime_helper_022b2c90();
label_042e5978:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pIVar11 = System_Collections_Generic_Dictionary_object__object___get_Item
                        (pSVar1,(Il2CppObject *)pSVar10,MethodInfo_BasePerk_get_Item);
    plVar9 = (long *)(*(pSVar8->klass->vtable)._7_get_Item.methodPtr)
                               (pSVar8,"Perks",(pSVar8->klass->vtable)._7_get_Item.method);
    if (plVar9 == (long *)0x0) goto label_042e5978;
    plVar9 = (long *)(**(code **)(*plVar9 + 0x1a8))(plVar9,pSVar10,*(undefined8 *)(*plVar9 + 0x1b0));
    if (plVar9 != (long *)0x0) {
      uVar7 = (**(code **)(*plVar9 + 0x368))(plVar9);
      if (pIVar11 != (Il2CppObject *)0x0) {
        *(undefined4 *)((long)&pIVar11[1].klass + 4) = uVar7;
        goto label_042e5870;
      }
      goto label_042e5982;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_042e5982:
  il2cpp_runtime_helper_022b2c90();
  goto label_042e5987;
}


// Characters.HumanStats$$Serialize
// il2cpp: System_String_o* Characters_HumanStats__Serialize (Characters_HumanStats_o* __this, const MethodInfo* method);
// 0x42e5f20

System_String_o * Characters_HumanStats__Serialize(Characters_HumanStats_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  long lVar2;
  int iVar3;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_00;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_02;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_03;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_04;
  bool_conflict bVar4;
  SimpleJSONFixed_JSONObject_o *__this_05;
  System_String_o *pSVar5;
  SimpleJSONFixed_JSONNode_o *pSVar6;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_06;
  Il2CppObject *pIVar7;
  long *plVar8;
  SimpleJSONFixed_JSONObject_c *pSVar9;
  System_Collections_Generic_Dictionary_string__BasePerk__o *__this_07;
  MethodInfo_3104D80 **ppMVar10;
  undefined1 auVar11 [12];
  undefined8 in_stack_ffffffffffffff88;
  SimpleJSONFixed_JSONObject_o *in_stack_ffffffffffffff90;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *pSVar12;
  SimpleJSONFixed_JSONObject_o *local_50;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o local_48;
  
  if (g_data_057ade78 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasePerk_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Cha);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONObject);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
    il2cpp_runtime_helper_023445d0(&"Acceleration");
    il2cpp_runtime_helper_023445d0(&"Speed");
    il2cpp_runtime_helper_023445d0(&"Ammunition");
    il2cpp_runtime_helper_023445d0(&"Gas");
    il2cpp_runtime_helper_023445d0(&"Perks");
    g_data_057ade78 = '\x01';
  }
  pSVar12 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *)0x0;
  bVar4 = Characters_HumanStats__Validate(__this,method);
  if ((char)bVar4 == '\0') {
    (__this->fields).Speed = 0x50;
    (__this->fields).Gas = 0x50;
    (__this->fields).Ammunition = 0x50;
    (__this->fields).Acceleration = 0x50;
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Perks;
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___Clear(pSVar1,MethodInfo_Void_Clear);
      goto label_042e6032;
    }
  }
  else {
label_042e6032:
    __this_05 = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONObject);
    SimpleJSONFixed_JSONObject___ctor(__this_05,(MethodInfo *)0x0);
    iVar3 = (int)__this;
    pSVar5 = System_Int32__ToString(iVar3 + 0x10,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar6 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar5,(MethodInfo *)0x0);
    if (__this_05 != (SimpleJSONFixed_JSONObject_o *)0x0) {
      (*(__this_05->klass->vtable)._8_set_Item.methodPtr)
                (__this_05,"Speed",pSVar6,(__this_05->klass->vtable)._8_set_Item.method);
      pSVar5 = System_Int32__ToString(iVar3 + 0x14,(MethodInfo *)0x0);
      pSVar6 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar5,(MethodInfo *)0x0);
      (*(__this_05->klass->vtable)._8_set_Item.methodPtr)
                (__this_05,"Gas",pSVar6,(__this_05->klass->vtable)._8_set_Item.method);
      pSVar5 = System_Int32__ToString(iVar3 + 0x18,(MethodInfo *)0x0);
      pSVar6 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar5,(MethodInfo *)0x0);
      (*(__this_05->klass->vtable)._8_set_Item.methodPtr)
                (__this_05,"Ammunition",pSVar6,(__this_05->klass->vtable)._8_set_Item.method);
      pSVar5 = System_Int32__ToString(iVar3 + 0x1c,(MethodInfo *)0x0);
      pSVar6 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar5,(MethodInfo *)0x0);
      pSVar9 = __this_05->klass;
      (*(pSVar9->vtable)._8_set_Item.methodPtr)
                (__this_05,"Acceleration",pSVar6,(pSVar9->vtable)._8_set_Item.method);
      in_stack_ffffffffffffff90 = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONObject);
      SimpleJSONFixed_JSONObject___ctor(in_stack_ffffffffffffff90,(MethodInfo *)0x0);
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Perks;
      if ((pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
         (__this_06 = System_Collections_Generic_Dictionary_object__object___get_Keys(pSVar1,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Cha),
         __this_06 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)) {
        System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
                  (&local_48,__this_06,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
        pSVar12 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *)
                  local_48.fields._dictionary;
        local_50 = __this_05;
        if (in_stack_ffffffffffffff90 == (SimpleJSONFixed_JSONObject_o *)0x0) {
          ppMVar10 = &MethodInfo_BasePerk_get_Item;
          do {
            __this_01.fields._8_8_ = in_stack_ffffffffffffff90;
            __this_01.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff88;
            __this_01.fields._currentKey = (Il2CppObject *)pSVar12;
            bVar4 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                              (__this_01,(MethodInfo_3251B20 *)&stack0xffffffffffffff98);
            if ((char)bVar4 == '\0') goto label_042e62f6;
            __this_07 = (__this->fields).Perks;
            if (__this_07 == (System_Collections_Generic_Dictionary_string__BasePerk__o *)0x0)
            goto label_042e6353;
            pIVar7 = System_Collections_Generic_Dictionary_object__object___get_Item
                               ((System_Collections_Generic_Dictionary_object__object__o *)__this_07,
                                local_48.fields._currentKey,MethodInfo_BasePerk_get_Item);
            pSVar9 = (SimpleJSONFixed_JSONObject_c *)local_48.fields._currentKey;
            if (pIVar7 == (Il2CppObject *)0x0) goto label_042e6358;
          } while (*(int *)((long)&pIVar7[1].klass + 4) < 1);
          __this_07 = (__this->fields).Perks;
          if (__this_07 != (System_Collections_Generic_Dictionary_string__BasePerk__o *)0x0)
          goto label_042e635d;
label_042e62f1:
          il2cpp_runtime_helper_022b2c90();
        }
        else {
          ppMVar10 = (MethodInfo_3104D80 **)&MethodInfo_Boolean_MoveNext;
          while (__this_00.fields._8_8_ = in_stack_ffffffffffffff90,
                __this_00.fields._dictionary =
                     (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff88,
                __this_00.fields._currentKey = (Il2CppObject *)pSVar12,
                bVar4 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                                  (__this_00,(MethodInfo_3251B20 *)&stack0xffffffffffffff98),
                (char)bVar4 != '\0') {
            __this_07 = (__this->fields).Perks;
            if (__this_07 == (System_Collections_Generic_Dictionary_string__BasePerk__o *)0x0)
            goto label_042e6353;
            pIVar7 = System_Collections_Generic_Dictionary_object__object___get_Item
                               ((System_Collections_Generic_Dictionary_object__object__o *)__this_07,
                                local_48.fields._currentKey,MethodInfo_BasePerk_get_Item);
            pSVar9 = (SimpleJSONFixed_JSONObject_c *)local_48.fields._currentKey;
            if (pIVar7 == (Il2CppObject *)0x0) goto label_042e6358;
            if (0 < *(int *)((long)&pIVar7[1].klass + 4)) {
              pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Perks;
              if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_042e62f1;
              pIVar7 = System_Collections_Generic_Dictionary_object__object___get_Item
                                 (pSVar1,local_48.fields._currentKey,MethodInfo_BasePerk_get_Item);
              if (pIVar7 == (Il2CppObject *)0x0) goto label_042e636d;
              pSVar5 = System_Int32__ToString((int)pIVar7 + 0x14,(MethodInfo *)0x0);
              if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar6 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar5,(MethodInfo *)0x0);
              (*(in_stack_ffffffffffffff90->klass->vtable)._8_set_Item.methodPtr)
                        (in_stack_ffffffffffffff90,local_48.fields._currentKey,pSVar6,
                         (in_stack_ffffffffffffff90->klass->vtable)._8_set_Item.method);
            }
          }
        }
label_042e62f6:
        __this_02.fields._8_8_ = in_stack_ffffffffffffff90;
        __this_02.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff88;
        __this_02.fields._currentKey = (Il2CppObject *)pSVar12;
        System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                  (__this_02,(MethodInfo_3251B10 *)&stack0xffffffffffffff98);
        goto label_042e630a;
      }
    }
  }
label_042e6372:
  pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
  goto label_042e6377;
label_042e6353:
  il2cpp_runtime_helper_022b2c90();
label_042e6358:
  il2cpp_runtime_helper_022b2c90();
  local_48.fields._currentKey = (Il2CppObject *)pSVar9;
label_042e635d:
  pIVar7 = System_Collections_Generic_Dictionary_object__object___get_Item
                     ((System_Collections_Generic_Dictionary_object__object__o *)__this_07,
                      local_48.fields._currentKey,*ppMVar10);
  if (pIVar7 == (Il2CppObject *)0x0) {
label_042e636d:
    il2cpp_runtime_helper_022b2c90();
    goto label_042e6372;
  }
label_042e6377:
  pSVar5 = System_Int32__ToString((int)pIVar7 + 0x14,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  SimpleJSONFixed_JSONNode__op_Implicit(pSVar5,(MethodInfo *)0x0);
  auVar11 = il2cpp_runtime_helper_022b2c90();
  if (auVar11._8_4_ == 1) {
    plVar8 = (long *)__cxa_begin_catch(auVar11._0_8_);
    lVar2 = *plVar8;
    __cxa_end_catch();
    __this_03.fields._8_8_ = in_stack_ffffffffffffff90;
    __this_03.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff88;
    __this_03.fields._currentKey = (Il2CppObject *)pSVar12;
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
              (__this_03,(MethodInfo_3251B10 *)&stack0xffffffffffffff98);
    if (lVar2 == 0) {
label_042e630a:
      (*(local_50->klass->vtable)._8_set_Item.methodPtr)
                (local_50,"Perks",in_stack_ffffffffffffff90,(local_50->klass->vtable)._8_set_Item.method)
      ;
      pSVar5 = (System_String_o *)
               (*(local_50->klass->vtable)._3_ToString.methodPtr)
                         (local_50,(local_50->klass->vtable)._3_ToString.method);
      return pSVar5;
    }
    il2cpp_runtime_helper_022fefe0(lVar2);
  }
  __this_04.fields._8_8_ = in_stack_ffffffffffffff90;
  __this_04.fields._dictionary =
       (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff88;
  __this_04.fields._currentKey = (Il2CppObject *)pSVar12;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
            (__this_04,(MethodInfo_3251B10 *)&stack0xffffffffffffff98);
  _Unwind_Resume(auVar11._0_8_);
}


// Characters.HumanStats$$Validate
// il2cpp: bool Characters_HumanStats__Validate (Characters_HumanStats_o* __this, const MethodInfo* method);
// 0x42e5cd0

bool_conflict Characters_HumanStats__Validate(Characters_HumanStats_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_02;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_03;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_04;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_05;
  char cVar6;
  bool_conflict bVar7;
  int32_t iVar8;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_06;
  long *plVar9;
  undefined4 in_ECX;
  undefined4 uVar10;
  MethodInfo *method_00;
  undefined1 auVar11 [16];
  undefined1 auVar12 [12];
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar13;
  Il2CppMethodPointer pIVar14;
  Il2CppObject *pIVar15;
  
  if (g_data_057ade79 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_System_String_C);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasePerk_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanStats);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enu);
    g_data_057ade79 = '\x01';
  }
  pSVar13 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  pIVar14 = (Il2CppMethodPointer)0x0;
  pIVar15 = (Il2CppObject *)0x0;
  iVar2 = (__this->fields).Speed;
  iVar3 = (__this->fields).Gas;
  iVar4 = (__this->fields).Ammunition;
  iVar5 = (__this->fields).Acceleration;
  auVar11._0_4_ = -(uint)((int)(iVar2 - 0x32U ^ 0x80000000) < -0x7fffffcd);
  auVar11._4_4_ = -(uint)((int)(iVar3 - 0x32U ^ 0x80000000) < -0x7fffffcd);
  auVar11._8_4_ = -(uint)((int)(iVar4 - 0x32U ^ 0x80000000) < -0x7fffffcd);
  auVar11._12_4_ = -(uint)((int)(iVar5 - 0x32U ^ 0x80000000) < -0x7fffffcd);
  uVar10 = movmskps(in_ECX,auVar11);
  if (((char)uVar10 == '\x0f') && (iVar5 + iVar3 + iVar4 + iVar2 < 0x141)) {
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Perks;
    if ((__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
       (__this_06 = System_Collections_Generic_Dictionary_object__object___get_Values(__this_00,MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_System_String_C),
       __this_06 == (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
label_042e5e8c:
      auVar12 = il2cpp_runtime_helper_022b2c90();
      if (auVar12._8_4_ == 1) {
        plVar9 = (long *)__cxa_begin_catch(auVar12._0_8_);
        lVar1 = *plVar9;
        __cxa_end_catch();
        __this_04.fields._8_8_ = pIVar14;
        __this_04.fields._dictionary = pSVar13;
        __this_04.fields._currentValue = pIVar15;
        method_00 = MethodInfo_Void_Dispose;
        System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
                  (__this_04,(MethodInfo_3251CA0 *)&stack0xffffffffffffffc8);
        if (lVar1 == 0) {
label_042e5e4a:
          iVar8 = Characters_HumanStats__GetPerkPoints(__this,method_00);
          if (*(int *)(TypeInfo_HumanStats + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          return (bool_conflict)
                 CONCAT71((int7)((ulong)*(int **)(TypeInfo_HumanStats + 0xb8) >> 8),
                          iVar8 <= **(int **)(TypeInfo_HumanStats + 0xb8));
        }
        il2cpp_runtime_helper_022fefe0(lVar1);
      }
      __this_05.fields._8_8_ = pIVar14;
      __this_05.fields._dictionary = pSVar13;
      __this_05.fields._currentValue = pIVar15;
      System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
                (__this_05,(MethodInfo_3251CA0 *)&stack0xffffffffffffffc8);
      _Unwind_Resume(auVar12._0_8_);
    }
    System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator
              ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)
               &stack0xffffffffffffffc8,__this_06,MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enu);
    do {
      __this_01.fields._8_8_ = pIVar14;
      __this_01.fields._dictionary = pSVar13;
      __this_01.fields._currentValue = pIVar15;
      bVar7 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext
                        (__this_01,(MethodInfo_3251CB0 *)&stack0xffffffffffffffc8);
      if ((char)bVar7 == '\0') {
        __this_03.fields._8_8_ = pIVar14;
        __this_03.fields._dictionary = pSVar13;
        __this_03.fields._currentValue = pIVar15;
        method_00 = MethodInfo_Void_Dispose;
        System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
                  (__this_03,(MethodInfo_3251CA0 *)&stack0xffffffffffffffc8);
        goto label_042e5e4a;
      }
      if (pIVar15 == (Il2CppObject *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        goto label_042e5e8c;
      }
      cVar6 = (*pIVar15->klass->vtable[8].methodPtr)
                        (pIVar15,(__this->fields).Perks,pIVar15->klass->vtable[8].method);
    } while (cVar6 != '\0');
    __this_02.fields._8_8_ = pIVar14;
    __this_02.fields._dictionary = pSVar13;
    __this_02.fields._currentValue = pIVar15;
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
              (__this_02,(MethodInfo_3251CA0 *)&stack0xffffffffffffffc8);
  }
  return 0;
}


// Characters.HumanStats$$.cctor
// il2cpp: void Characters_HumanStats___cctor (const MethodInfo* method);
// 0x42e64e0

void Characters_HumanStats___cctor(MethodInfo *method)

{
  if (g_data_057ade7a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanStats);
    g_data_057ade7a = '\x01';
  }
  **(undefined4 **)(TypeInfo_HumanStats + 0xb8) = 3;
  return;
}


