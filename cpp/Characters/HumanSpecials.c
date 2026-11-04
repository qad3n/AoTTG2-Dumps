// Type: Characters.HumanSpecials
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/HumanSpecials.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/HumanSpecials.cs
// --------------------------------

// Characters.HumanSpecials$$GetSpecialNames
// il2cpp: System_Collections_Generic_List_string__o* Characters_HumanSpecials__GetSpecialNames (System_String_o* loadout, bool includeShifters, const MethodInfo* method);
// 0x18215ddf0

System_Collections_Generic_List_string__o *
Characters_HumanSpecials__GetSpecialNames(System_String_o *loadout,bool includeShifters,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_String_array *pSVar3;
  System_String_o *pSVar4;
  System_String_array *pSVar5;
  MethodInfo *pMVar6;
  bool bVar7;
  System_Collections_Generic_List_string__o *__this;
  uint uVar8;
  
  if (Il2CppMethodInitialized_184346c6e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_HumanLoadout);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSpecials);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Remove);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Escape");
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"Stock");
    Il2CppMethodInitialized_184346c6e = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  if ((TypeInfo_Characters_HumanSpecials->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSpecials);
  }
  pSVar3 = TypeInfo_Characters_HumanSpecials->static_fields->AnySpecials;
  if (pSVar3 == (System_String_array *)0x0) goto label_18215e54b;
  uVar8 = 0;
  while ((int)uVar8 < (int)pSVar3->max_length) {
    if ((uint)pSVar3->max_length <= uVar8) goto label_18215e551;
    pSVar4 = pSVar3->m_Items[(int)uVar8];
    if ((TypeInfo_Characters_HumanSpecials->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSpecials);
    }
    if (Il2CppMethodInitialized_184346c6f == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
      Il2CppMethodInitialized_184346c6f = '\x01';
    }
    pMVar6 = MethodInfo_System_Collections_Generic_List_string_Add;
    if (__this == (System_Collections_Generic_List_string__o *)0x0) goto label_18215e54b;
    piVar1 = &(__this->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar5 = (__this->fields)._items;
    if (pSVar5 == (System_String_array *)0x0) goto label_18215e54b;
    uVar2 = (__this->fields)._size;
    if (uVar2 < (uint)pSVar5->max_length) {
      (__this->fields)._size = uVar2 + 1;
      if ((uint)pSVar5->max_length <= uVar2) goto label_18215e551;
      pSVar5->m_Items[(int)uVar2] = pSVar4;
      Il2CppCodeGenWriteBarrier(pSVar5->m_Items + (int)uVar2,pSVar4);
      uVar8 = uVar8 + 1;
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar4,
                 (MethodInfo_93DD50 *)pMVar6->klass->rgctx_data[0xe].method);
      uVar8 = uVar8 + 1;
    }
  }
  if ((TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
  }
  bVar7 = System_String__op_Equality
                    (loadout,TypeInfo_GameManagers_HumanLoadout->static_fields->Blade,(MethodInfo *)0x0);
  if (bVar7) {
    if ((TypeInfo_Characters_HumanSpecials->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSpecials);
    }
    pSVar3 = TypeInfo_Characters_HumanSpecials->static_fields->BladeSpecials;
    if (pSVar3 == (System_String_array *)0x0) goto label_18215e54b;
    uVar8 = 0;
    while ((int)uVar8 < (int)pSVar3->max_length) {
      if ((uint)pSVar3->max_length <= uVar8) goto label_18215e551;
      pSVar4 = pSVar3->m_Items[(int)uVar8];
      if ((TypeInfo_Characters_HumanSpecials->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSpecials);
      }
      if (Il2CppMethodInitialized_184346c6f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
        Il2CppMethodInitialized_184346c6f = '\x01';
      }
      pMVar6 = MethodInfo_System_Collections_Generic_List_string_Add;
      if (__this == (System_Collections_Generic_List_string__o *)0x0) goto label_18215e54b;
      piVar1 = &(__this->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar5 = (__this->fields)._items;
      if (pSVar5 == (System_String_array *)0x0) goto label_18215e54b;
      uVar2 = (__this->fields)._size;
      if (uVar2 < (uint)pSVar5->max_length) {
        (__this->fields)._size = uVar2 + 1;
        if ((uint)pSVar5->max_length <= uVar2) goto label_18215e551;
        pSVar5->m_Items[(int)uVar2] = pSVar4;
        Il2CppCodeGenWriteBarrier(pSVar5->m_Items + (int)uVar2,pSVar4);
        uVar8 = uVar8 + 1;
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar4,
                   (MethodInfo_93DD50 *)pMVar6->klass->rgctx_data[0xe].method);
        uVar8 = uVar8 + 1;
      }
    }
  }
  else {
    if ((TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
    }
    bVar7 = System_String__op_Equality
                      (loadout,TypeInfo_GameManagers_HumanLoadout->static_fields->AHSS,(MethodInfo *)0x0);
    if (bVar7) {
      if ((TypeInfo_Characters_HumanSpecials->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSpecials);
      }
      pSVar3 = TypeInfo_Characters_HumanSpecials->static_fields->AHSSSpecials;
      if (pSVar3 == (System_String_array *)0x0) goto label_18215e54b;
      uVar8 = 0;
      while ((int)uVar8 < (int)pSVar3->max_length) {
        if ((uint)pSVar3->max_length <= uVar8) goto label_18215e551;
        pSVar4 = pSVar3->m_Items[(int)uVar8];
        if ((TypeInfo_Characters_HumanSpecials->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSpecials);
        }
        if (Il2CppMethodInitialized_184346c6f == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
          Il2CppMethodInitialized_184346c6f = '\x01';
        }
        pMVar6 = MethodInfo_System_Collections_Generic_List_string_Add;
        if (__this == (System_Collections_Generic_List_string__o *)0x0) goto label_18215e54b;
        piVar1 = &(__this->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar5 = (__this->fields)._items;
        if (pSVar5 == (System_String_array *)0x0) goto label_18215e54b;
        uVar2 = (__this->fields)._size;
        if (uVar2 < (uint)pSVar5->max_length) {
          (__this->fields)._size = uVar2 + 1;
          if ((uint)pSVar5->max_length <= uVar2) goto label_18215e551;
          pSVar5->m_Items[(int)uVar2] = pSVar4;
          Il2CppCodeGenWriteBarrier(pSVar5->m_Items + (int)uVar2,pSVar4);
          uVar8 = uVar8 + 1;
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar4,
                     (MethodInfo_93DD50 *)pMVar6->klass->rgctx_data[0xe].method);
          uVar8 = uVar8 + 1;
        }
      }
    }
  }
  if (includeShifters) {
    if ((TypeInfo_Characters_HumanSpecials->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSpecials);
    }
    pSVar3 = TypeInfo_Characters_HumanSpecials->static_fields->ShifterSpecials;
    if (pSVar3 == (System_String_array *)0x0) goto label_18215e54b;
    uVar8 = 0;
    while ((int)uVar8 < (int)pSVar3->max_length) {
      if ((uint)pSVar3->max_length <= uVar8) goto label_18215e551;
      pSVar4 = pSVar3->m_Items[(int)uVar8];
      if ((TypeInfo_Characters_HumanSpecials->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSpecials);
      }
      if (Il2CppMethodInitialized_184346c6f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
        Il2CppMethodInitialized_184346c6f = '\x01';
      }
      pMVar6 = MethodInfo_System_Collections_Generic_List_string_Add;
      if (__this == (System_Collections_Generic_List_string__o *)0x0) goto label_18215e54b;
      piVar1 = &(__this->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar5 = (__this->fields)._items;
      if (pSVar5 == (System_String_array *)0x0) goto label_18215e54b;
      uVar2 = (__this->fields)._size;
      if (uVar2 < (uint)pSVar5->max_length) {
        (__this->fields)._size = uVar2 + 1;
        if ((uint)pSVar5->max_length <= uVar2) goto label_18215e551;
        pSVar5->m_Items[(int)uVar2] = pSVar4;
        Il2CppCodeGenWriteBarrier(pSVar5->m_Items + (int)uVar2,pSVar4);
        uVar8 = uVar8 + 1;
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar4,
                   (MethodInfo_93DD50 *)pMVar6->klass->rgctx_data[0xe].method);
        uVar8 = uVar8 + 1;
      }
    }
  }
  if ((TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
  }
  bVar7 = System_String__op_Equality
                    (loadout,TypeInfo_GameManagers_HumanLoadout->static_fields->Thunderspear,(MethodInfo *)0x0
                    );
  if (bVar7) {
    if ((TypeInfo_Characters_HumanSpecials->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSpecials);
    }
    pSVar4 = "Stock";
    if (Il2CppMethodInitialized_184346c6f == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
      Il2CppMethodInitialized_184346c6f = '\x01';
    }
    pMVar6 = MethodInfo_System_Collections_Generic_List_string_Add;
    if (__this == (System_Collections_Generic_List_string__o *)0x0) goto label_18215e54b;
    piVar1 = &(__this->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (__this->fields)._items;
    if (pSVar3 == (System_String_array *)0x0) goto label_18215e54b;
    uVar8 = (__this->fields)._size;
    if (uVar8 < (uint)pSVar3->max_length) {
      (__this->fields)._size = uVar8 + 1;
      if ((uint)pSVar3->max_length <= uVar8) goto label_18215e551;
      pSVar3->m_Items[(int)uVar8] = pSVar4;
      Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar8,pSVar4);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar4,
                 (MethodInfo_93DD50 *)pMVar6->klass->rgctx_data[0xe].method);
    }
  }
  if ((TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
  }
  bVar7 = System_String__op_Equality
                    (loadout,TypeInfo_GameManagers_HumanLoadout->static_fields->Unarmed,(MethodInfo *)0x0);
  if (bVar7) {
label_18215e478:
    if (__this == (System_Collections_Generic_List_string__o *)0x0) goto label_18215e54b;
    System_Collections_Generic_List_object___Remove
              ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)"Escape",
               (MethodInfo_947340 *)MethodInfo_System_Collections_Generic_List_string_Remove);
  }
  else {
    if ((TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
    }
    bVar7 = System_String__op_Equality
                      (loadout,TypeInfo_GameManagers_HumanLoadout->static_fields->Civilian,(MethodInfo *)0x0);
    if (bVar7) goto label_18215e478;
  }
  if ((TypeInfo_Characters_HumanSpecials->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSpecials);
  }
  pSVar4 = "None";
  if (Il2CppMethodInitialized_184346c6f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    Il2CppMethodInitialized_184346c6f = '\x01';
  }
  pMVar6 = MethodInfo_System_Collections_Generic_List_string_Add;
  if (__this != (System_Collections_Generic_List_string__o *)0x0) {
    piVar1 = &(__this->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (__this->fields)._items;
    if (pSVar3 != (System_String_array *)0x0) {
      uVar8 = (__this->fields)._size;
      if (uVar8 < (uint)pSVar3->max_length) {
        (__this->fields)._size = uVar8 + 1;
        if ((uint)pSVar3->max_length <= uVar8) {
label_18215e551:
          ThrowIndexOutOfRangeException();
        }
        pSVar3->m_Items[(int)uVar8] = pSVar4;
        Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar8,pSVar4);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar4,
                   (MethodInfo_93DD50 *)pMVar6->klass->rgctx_data[0xe].method);
      }
      return __this;
    }
  }
label_18215e54b:
  ThrowNullReferenceException();
}


// Characters.HumanSpecials$$AddSpecialName
// il2cpp: void Characters_HumanSpecials__AddSpecialName (System_Collections_Generic_List_string__o* specials, System_String_o* special, const MethodInfo* method);
// 0x18215dcc0

void Characters_HumanSpecials__AddSpecialName
               (System_Collections_Generic_List_string__o *specials,System_String_o *special,
               MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_String_array *pSVar3;
  MethodInfo *pMVar4;
  
  if (Il2CppMethodInitialized_184346c6f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    Il2CppMethodInitialized_184346c6f = '\x01';
  }
  pMVar4 = MethodInfo_System_Collections_Generic_List_string_Add;
  if (specials != (System_Collections_Generic_List_string__o *)0x0) {
    piVar1 = &(specials->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (specials->fields)._items;
    if (pSVar3 != (System_String_array *)0x0) {
      uVar2 = (specials->fields)._size;
      if ((uint)pSVar3->max_length <= uVar2) {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)specials,(Il2CppObject *)special,
                   (MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
        return;
      }
      (specials->fields)._size = uVar2 + 1;
      if (uVar2 < (uint)pSVar3->max_length) {
        pSVar3->m_Items[(int)uVar2] = special;
        Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,special);
        return;
      }
      ThrowIndexOutOfRangeException();
    }
  }
  ThrowNullReferenceException();
}


// Characters.HumanSpecials$$GetSpecialUseable
// il2cpp: Characters_BaseUseable_o* Characters_HumanSpecials__GetSpecialUseable (Characters_BaseCharacter_o* owner, System_String_o* special, const MethodInfo* method);
// 0x18215e560

Characters_BaseUseable_o *
Characters_HumanSpecials__GetSpecialUseable
          (Characters_BaseCharacter_o *owner,System_String_o *special,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  Characters_AHSSTwinShot_o *__this;
  Characters_DanceSpecial_o *__this_00;
  Characters_SupplySpecial_o *__this_01;
  Characters_SmokeBombSpecial_o *__this_02;
  Characters_ConfuseSpecial_o *__this_03;
  Characters_EscapeSpecial_o *__this_04;
  Characters_BladeThrowSpecial_o *__this_05;
  Characters_SmellSpecial_o *__this_06;
  Characters_ShifterTransformSpecial_o *pCVar3;
  Characters_SwitchbackSpecial_o *__this_07;
  Characters_StockSpecial_o *__this_08;
  Characters_NoneSpecial_o *__this_09;
  Characters_DownStrikeSpecial_o *__this_10;
  Characters_CarrySpecial_o *__this_11;
  Characters_Spin2Special_o *__this_12;
  Characters_DistractSpecial_o *__this_13;
  Characters_PotatoSpecial_o *__this_14;
  Characters_Spin1Special_o *__this_15;
  Characters_Spin3Special_o *__this_16;
  
  if (Il2CppMethodInitialized_184346c70 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_AHSSTwinShot);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BladeThrowSpecial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_CarrySpecial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ConfuseSpecial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_DanceSpecial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_DistractSpecial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_DownStrikeSpecial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_EscapeSpecial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_NoneSpecial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_PotatoSpecial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ShifterTransformSpecial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_SmellSpecial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_SmokeBombSpecial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Spin1Special);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Spin2Special);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Spin3Special);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_StockSpecial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_SupplySpecial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_SwitchbackSpecial);
    il2cpp_codegen_initialize_runtime_metadata(&"Eren");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeThrow");
    il2cpp_codegen_initialize_runtime_metadata(&"Smell");
    il2cpp_codegen_initialize_runtime_metadata(&"Spin3");
    il2cpp_codegen_initialize_runtime_metadata(&"Escape");
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"Spin2");
    il2cpp_codegen_initialize_runtime_metadata(&"Annie");
    il2cpp_codegen_initialize_runtime_metadata(&"Dance");
    il2cpp_codegen_initialize_runtime_metadata(&"Distract");
    il2cpp_codegen_initialize_runtime_metadata(&"Confuse");
    il2cpp_codegen_initialize_runtime_metadata(&"Switchback");
    il2cpp_codegen_initialize_runtime_metadata(&"SmokeBomb");
    il2cpp_codegen_initialize_runtime_metadata(&"Armored");
    il2cpp_codegen_initialize_runtime_metadata(&"Spin1");
    il2cpp_codegen_initialize_runtime_metadata(&"Potato");
    il2cpp_codegen_initialize_runtime_metadata(&"Carry");
    il2cpp_codegen_initialize_runtime_metadata(&"DownStrike");
    il2cpp_codegen_initialize_runtime_metadata(&"Stock");
    il2cpp_codegen_initialize_runtime_metadata(&"Supply");
    il2cpp_codegen_initialize_runtime_metadata(&"AHSSTwinShot");
    Il2CppMethodInitialized_184346c70 = '\x01';
  }
  uVar2 = _PrivateImplementationDetails___ComputeStringHash(special,(MethodInfo *)0x0);
  if (uVar2 < 0x50d88c80) {
    if (uVar2 < 0x132fe373) {
      if (uVar2 < 0x23f06bf) {
        if (uVar2 == 0x3f0398) {
          bVar1 = System_String__op_Equality(special,"Spin1",(MethodInfo *)0x0);
          if (bVar1) {
            __this_15 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_Spin1Special);
            Characters_Spin1Special___ctor(__this_15,owner,(MethodInfo *)0x0);
            return (Characters_BaseUseable_o *)__this_15;
          }
        }
        else if (uVar2 == 0x23f06be) {
          bVar1 = System_String__op_Equality(special,"Spin3",(MethodInfo *)0x0);
          if (bVar1) {
            __this_16 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_Spin3Special);
            Characters_Spin3Special___ctor(__this_16,owner,(MethodInfo *)0x0);
            return (Characters_BaseUseable_o *)__this_16;
          }
        }
      }
      else if (uVar2 == 0x33f0851) {
        bVar1 = System_String__op_Equality(special,"Spin2",(MethodInfo *)0x0);
        if (bVar1) {
          __this_12 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_Spin2Special);
          Characters_Spin2Special___ctor(__this_12,owner,(MethodInfo *)0x0);
          return (Characters_BaseUseable_o *)__this_12;
        }
      }
      else if (uVar2 == 0xfb12e57) {
        bVar1 = System_String__op_Equality(special,"Distract",(MethodInfo *)0x0);
        if (bVar1) {
          __this_13 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_DistractSpecial);
          Characters_DistractSpecial___ctor(__this_13,owner,(MethodInfo *)0x0);
          return (Characters_BaseUseable_o *)__this_13;
        }
      }
      else if (uVar2 == 0x132fe372) {
        bVar1 = System_String__op_Equality(special,"Potato",(MethodInfo *)0x0);
        if (bVar1) {
          __this_14 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_PotatoSpecial);
          Characters_PotatoSpecial___ctor(__this_14,owner,(MethodInfo *)0x0);
          return (Characters_BaseUseable_o *)__this_14;
        }
      }
    }
    else if (uVar2 < 0x27e47193) {
      if (uVar2 == 0x184b43d0) {
        bVar1 = System_String__op_Equality(special,"Carry",(MethodInfo *)0x0);
        if (bVar1) {
          __this_11 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_CarrySpecial);
          Characters_CarrySpecial___ctor(__this_11,owner,(MethodInfo *)0x0);
          return (Characters_BaseUseable_o *)__this_11;
        }
      }
      else if (uVar2 == 0x27e47192) {
        bVar1 = System_String__op_Equality(special,"Annie",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_ShifterTransformSpecial);
          Characters_ShifterTransformSpecial___ctor(pCVar3,owner,"Annie",(MethodInfo *)0x0);
          return (Characters_BaseUseable_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0x2ab69de5) {
      bVar1 = System_String__op_Equality(special,"Armored",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_ShifterTransformSpecial);
        Characters_ShifterTransformSpecial___ctor(pCVar3,owner,"Armored",(MethodInfo *)0x0);
        return (Characters_BaseUseable_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x304ff7fb) {
      bVar1 = System_String__op_Equality(special,"None",(MethodInfo *)0x0);
      if (bVar1) {
        __this_09 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_NoneSpecial);
        Characters_NoneSpecial___ctor(__this_09,owner,(MethodInfo *)0x0);
        return (Characters_BaseUseable_o *)__this_09;
      }
    }
    else if (uVar2 == 0x50d88c7f) {
      bVar1 = System_String__op_Equality(special,"DownStrike",(MethodInfo *)0x0);
      if (bVar1) {
        __this_10 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_DownStrikeSpecial);
        Characters_DownStrikeSpecial___ctor(__this_10,owner,(MethodInfo *)0x0);
        return (Characters_BaseUseable_o *)__this_10;
      }
    }
  }
  else if (uVar2 < 0x9d6edc06) {
    if (uVar2 < 0x67c7f536) {
      if (uVar2 == 0x548b671e) {
        bVar1 = System_String__op_Equality(special,"Switchback",(MethodInfo *)0x0);
        if (bVar1) {
          __this_07 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_SwitchbackSpecial);
          Characters_SwitchbackSpecial___ctor(__this_07,owner,(MethodInfo *)0x0);
          return (Characters_BaseUseable_o *)__this_07;
        }
      }
      else if (uVar2 == 0x67c7f535) {
        bVar1 = System_String__op_Equality(special,"Stock",(MethodInfo *)0x0);
        if (bVar1) {
          __this_08 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_StockSpecial);
          Characters_StockSpecial___ctor(__this_08,owner,(MethodInfo *)0x0);
          return (Characters_BaseUseable_o *)__this_08;
        }
      }
    }
    else if (uVar2 == 0x8d87a40b) {
      bVar1 = System_String__op_Equality(special,"BladeThrow",(MethodInfo *)0x0);
      if (bVar1) {
        __this_05 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_BladeThrowSpecial);
        Characters_BladeThrowSpecial___ctor(__this_05,owner,(MethodInfo *)0x0);
        return (Characters_BaseUseable_o *)__this_05;
      }
    }
    else if (uVar2 == 0x960fb720) {
      bVar1 = System_String__op_Equality(special,"Smell",(MethodInfo *)0x0);
      if (bVar1) {
        __this_06 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_SmellSpecial);
        Characters_SmellSpecial___ctor(__this_06,owner,(MethodInfo *)0x0);
        return (Characters_BaseUseable_o *)__this_06;
      }
    }
    else if (uVar2 == 0x9d6edc05) {
      bVar1 = System_String__op_Equality(special,"Eren",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_ShifterTransformSpecial);
        Characters_ShifterTransformSpecial___ctor(pCVar3,owner,"Eren",(MethodInfo *)0x0);
        return (Characters_BaseUseable_o *)pCVar3;
      }
    }
  }
  else if (uVar2 < 0xb7bb7227) {
    if (uVar2 == 0x9fc581fa) {
      bVar1 = System_String__op_Equality(special,"SmokeBomb",(MethodInfo *)0x0);
      if (bVar1) {
        __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_SmokeBombSpecial);
        Characters_SmokeBombSpecial___ctor(__this_02,owner,(MethodInfo *)0x0);
        return (Characters_BaseUseable_o *)__this_02;
      }
    }
    else if (uVar2 == 0xa499f21e) {
      bVar1 = System_String__op_Equality(special,"Confuse",(MethodInfo *)0x0);
      if (bVar1) {
        __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_ConfuseSpecial);
        Characters_ConfuseSpecial___ctor(__this_03,owner,(MethodInfo *)0x0);
        return (Characters_BaseUseable_o *)__this_03;
      }
    }
    else if (uVar2 == 0xb7bb7226) {
      bVar1 = System_String__op_Equality(special,"Escape",(MethodInfo *)0x0);
      if (bVar1) {
        __this_04 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_EscapeSpecial);
        Characters_EscapeSpecial___ctor(__this_04,owner,(MethodInfo *)0x0);
        return (Characters_BaseUseable_o *)__this_04;
      }
    }
  }
  else if (uVar2 == 0xc7ef102c) {
    bVar1 = System_String__op_Equality(special,"AHSSTwinShot",(MethodInfo *)0x0);
    if (bVar1) {
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_AHSSTwinShot);
      Characters_AHSSTwinShot___ctor(__this,owner,(MethodInfo *)0x0);
      return (Characters_BaseUseable_o *)__this;
    }
  }
  else if (uVar2 == 0xca0fab3c) {
    bVar1 = System_String__op_Equality(special,"Dance",(MethodInfo *)0x0);
    if (bVar1) {
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_DanceSpecial);
      Characters_DanceSpecial___ctor(__this_00,owner,(MethodInfo *)0x0);
      return (Characters_BaseUseable_o *)__this_00;
    }
  }
  else if (uVar2 == 0xdba7f44e) {
    bVar1 = System_String__op_Equality(special,"Supply",(MethodInfo *)0x0);
    if (bVar1) {
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_SupplySpecial);
      Characters_SupplySpecial___ctor(__this_01,owner,(MethodInfo *)0x0);
      return (Characters_BaseUseable_o *)__this_01;
    }
  }
  return (Characters_BaseUseable_o *)0x0;
}


// Characters.HumanSpecials$$GetSpecialIcon
// il2cpp: System_String_o* Characters_HumanSpecials__GetSpecialIcon (System_String_o* special, const MethodInfo* method);
// 0x18215dd70

System_String_o * Characters_HumanSpecials__GetSpecialIcon(System_String_o *special,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184346c71 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"SpecialIcon");
    il2cpp_codegen_initialize_runtime_metadata(&" ");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184346c71 = '\x01';
  }
  if (special != (System_String_o *)0x0) {
    pSVar1 = System_String__Replace_1970e80
                       (special," ","",(MethodInfo *)0x0);
    pSVar1 = System_String__Concat_1969e50(pSVar1,"SpecialIcon",(MethodInfo *)0x0);
    return pSVar1;
  }
  ThrowNullReferenceException();
}


// Characters.HumanSpecials$$.ctor
// il2cpp: void Characters_HumanSpecials___ctor (Characters_HumanSpecials_o* __this, const MethodInfo* method);
// 0x18054c890

void
Characters_HumanSpecials___ctor(Characters_HumanSpecials_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Characters.HumanSpecials$$.cctor
// il2cpp: void Characters_HumanSpecials___cctor (const MethodInfo* method);
// 0x18215ee30

void Characters_HumanSpecials___cctor(MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_array *pSVar2;
  
  if (Il2CppMethodInitialized_184346c72 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSpecials);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"Eren");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeThrow");
    il2cpp_codegen_initialize_runtime_metadata(&"Smell");
    il2cpp_codegen_initialize_runtime_metadata(&"Spin3");
    il2cpp_codegen_initialize_runtime_metadata(&"Escape");
    il2cpp_codegen_initialize_runtime_metadata(&"Spin2");
    il2cpp_codegen_initialize_runtime_metadata(&"Annie");
    il2cpp_codegen_initialize_runtime_metadata(&"Dance");
    il2cpp_codegen_initialize_runtime_metadata(&"Distract");
    il2cpp_codegen_initialize_runtime_metadata(&"Confuse");
    il2cpp_codegen_initialize_runtime_metadata(&"Switchback");
    il2cpp_codegen_initialize_runtime_metadata(&"SmokeBomb");
    il2cpp_codegen_initialize_runtime_metadata(&"Spin1");
    il2cpp_codegen_initialize_runtime_metadata(&"Potato");
    il2cpp_codegen_initialize_runtime_metadata(&"Carry");
    il2cpp_codegen_initialize_runtime_metadata(&"DownStrike");
    il2cpp_codegen_initialize_runtime_metadata(&"Supply");
    il2cpp_codegen_initialize_runtime_metadata(&"AHSSTwinShot");
    Il2CppMethodInitialized_184346c72 = '\x01';
  }
  pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,10);
  pSVar1 = "Potato";
  if (pSVar2 == (System_String_array *)0x0) goto label_18215f2b1;
  if ((int)pSVar2->max_length != 0) {
    pSVar2->m_Items[0] = "Potato";
    Il2CppCodeGenWriteBarrier(pSVar2->m_Items,pSVar1);
    pSVar1 = "Escape";
    if (1 < (uint)pSVar2->max_length) {
      pSVar2->m_Items[1] = "Escape";
      Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1,pSVar1);
      pSVar1 = "Dance";
      if (2 < (uint)pSVar2->max_length) {
        pSVar2->m_Items[2] = "Dance";
        Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 2,pSVar1);
        pSVar1 = "Distract";
        if (3 < (uint)pSVar2->max_length) {
          pSVar2->m_Items[3] = "Distract";
          Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 3,pSVar1);
          pSVar1 = "Smell";
          if (4 < (uint)pSVar2->max_length) {
            pSVar2->m_Items[4] = "Smell";
            Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 4,pSVar1);
            pSVar1 = "Supply";
            if (5 < (uint)pSVar2->max_length) {
              pSVar2->m_Items[5] = "Supply";
              Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 5,pSVar1);
              pSVar1 = "SmokeBomb";
              if (6 < (uint)pSVar2->max_length) {
                pSVar2->m_Items[6] = "SmokeBomb";
                Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 6,pSVar1);
                pSVar1 = "Carry";
                if (7 < (uint)pSVar2->max_length) {
                  pSVar2->m_Items[7] = "Carry";
                  Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 7,pSVar1);
                  pSVar1 = "Switchback";
                  if (8 < (uint)pSVar2->max_length) {
                    pSVar2->m_Items[8] = "Switchback";
                    Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 8,pSVar1);
                    pSVar1 = "Confuse";
                    if (9 < (uint)pSVar2->max_length) {
                      pSVar2->m_Items[9] = "Confuse";
                      Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 9,pSVar1);
                      TypeInfo_Characters_HumanSpecials->static_fields->AnySpecials = pSVar2;
                      Il2CppCodeGenWriteBarrier
                                (&TypeInfo_Characters_HumanSpecials->static_fields->AnySpecials,pSVar2);
                      pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,1);
                      pSVar1 = "AHSSTwinShot";
                      if (pSVar2 == (System_String_array *)0x0) {
label_18215f2b1:
                        ThrowNullReferenceException();
                      }
                      if ((int)pSVar2->max_length != 0) {
                        pSVar2->m_Items[0] = "AHSSTwinShot";
                        Il2CppCodeGenWriteBarrier(pSVar2->m_Items,pSVar1);
                        TypeInfo_Characters_HumanSpecials->static_fields->AHSSSpecials = pSVar2;
                        Il2CppCodeGenWriteBarrier
                                  (&TypeInfo_Characters_HumanSpecials->static_fields->AHSSSpecials,pSVar2);
                        pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,5);
                        pSVar1 = "DownStrike";
                        if (pSVar2 == (System_String_array *)0x0) goto label_18215f2b1;
                        if ((int)pSVar2->max_length != 0) {
                          pSVar2->m_Items[0] = "DownStrike";
                          Il2CppCodeGenWriteBarrier(pSVar2->m_Items,pSVar1);
                          pSVar1 = "Spin1";
                          if (1 < (uint)pSVar2->max_length) {
                            pSVar2->m_Items[1] = "Spin1";
                            Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1,pSVar1);
                            pSVar1 = "Spin2";
                            if (2 < (uint)pSVar2->max_length) {
                              pSVar2->m_Items[2] = "Spin2";
                              Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 2,pSVar1);
                              pSVar1 = "Spin3";
                              if (3 < (uint)pSVar2->max_length) {
                                pSVar2->m_Items[3] = "Spin3";
                                Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 3,pSVar1);
                                pSVar1 = "BladeThrow";
                                if (4 < (uint)pSVar2->max_length) {
                                  pSVar2->m_Items[4] = "BladeThrow";
                                  Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 4,pSVar1);
                                  TypeInfo_Characters_HumanSpecials->static_fields->BladeSpecials = pSVar2;
                                  Il2CppCodeGenWriteBarrier
                                            (&TypeInfo_Characters_HumanSpecials->static_fields->BladeSpecials,
                                             pSVar2);
                                  pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
                                  pSVar1 = "Eren";
                                  if (pSVar2 == (System_String_array *)0x0) goto label_18215f2b1;
                                  if ((int)pSVar2->max_length != 0) {
                                    pSVar2->m_Items[0] = "Eren";
                                    Il2CppCodeGenWriteBarrier(pSVar2->m_Items,pSVar1);
                                    pSVar1 = "Annie";
                                    if (1 < (uint)pSVar2->max_length) {
                                      pSVar2->m_Items[1] = "Annie";
                                      Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1,pSVar1);
                                      TypeInfo_Characters_HumanSpecials->static_fields->ShifterSpecials =
                                           pSVar2;
                                      Il2CppCodeGenWriteBarrier
                                                (&TypeInfo_Characters_HumanSpecials->static_fields->
                                                  ShifterSpecials,pSVar2);
                                      TypeInfo_Characters_HumanSpecials->static_fields->DefaultSpecial =
                                           "Switchback";
                                      Il2CppCodeGenWriteBarrier
                                                (&TypeInfo_Characters_HumanSpecials->static_fields->
                                                  DefaultSpecial,"Switchback");
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
            }
          }
        }
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


