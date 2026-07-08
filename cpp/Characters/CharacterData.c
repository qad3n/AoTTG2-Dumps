// Type: Characters.CharacterData
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Characters/CharacterData.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Characters/CharacterData.cs  [CHANGED since prior version]
// --------------------------------

// Characters.CharacterData$$Init
// il2cpp: void Characters_CharacterData__Init (const MethodInfo* method);
// 0x3f9cad0

void Characters_CharacterData__Init(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  long lVar2;
  ulong uVar3;
  System_String_o *name;
  System_String_o *pSVar4;
  Il2CppObject *pIVar5;
  System_Collections_Generic_Dictionary_string__TitanAttackInfo__o *value;
  System_String_o *pSVar6;
  SimpleJSONFixed_JSONNode_o *pSVar7;
  MethodInfo *method_00;
  ulong uVar8;
  
  if (DAT_05704010 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterData);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_JSONNode_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    il2cpp_init_method_metadata(&TypeInfo_ResourcePaths);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&"Eren");
    il2cpp_init_method_metadata(&"Keyframes");
    il2cpp_init_method_metadata(&"HumanWeaponInfo");
    il2cpp_init_method_metadata(&"AIInfo");
    il2cpp_init_method_metadata(&"Annie");
    il2cpp_init_method_metadata(&"Titan");
    il2cpp_init_method_metadata(&"WallColossal");
    DAT_05704010 = '\x01';
  }
  lVar2 = il2cpp_glue_02274930(TypeInfo_string,4);
  if (lVar2 == 0) {
LAB_03f9ce66:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (*(int *)(lVar2 + 0x18) != 0) {
    *(undefined8 *)(lVar2 + 0x20) = "Titan";
    il2cpp_runtime_glue(lVar2 + 0x20);
    if (1 < *(uint *)(lVar2 + 0x18)) {
      *(undefined8 *)(lVar2 + 0x28) = "Annie";
      il2cpp_runtime_glue(lVar2 + 0x28);
      if (2 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x30) = "Eren";
        il2cpp_runtime_glue(lVar2 + 0x30);
        if (3 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x38) = "WallColossal";
          il2cpp_runtime_glue(lVar2 + 0x38);
          if (0 < (int)*(ulong *)(lVar2 + 0x18)) {
            uVar3 = *(ulong *)(lVar2 + 0x18) & 0xffffffff;
            uVar8 = 0;
            do {
              if (uVar3 <= uVar8) goto LAB_03f9ce6b;
              pSVar6 = *(System_String_o **)(lVar2 + 0x20 + uVar8 * 8);
              if (*(int *)(TypeInfo_CharacterData + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
                        (*(long *)(TypeInfo_CharacterData + 0xb8) + 8);
              if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar4 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 0x10);
              name = System_String__Concat(pSVar6,"AIInfo",(MethodInfo *)0x0);
              if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar4 = ApplicationManagers_ResourceManager__TryLoadText
                                 (pSVar4,name,(MethodInfo *)0x0);
              pIVar5 = (Il2CppObject *)SimpleJSONFixed_JSON__Parse(pSVar4,(MethodInfo *)0x0);
              if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
              goto LAB_03f9ce66;
              System_Collections_Generic_Dictionary<object__object>__Add
                        (pSVar1,(Il2CppObject *)pSVar6,pIVar5,MethodInfo_Void_Add);
              pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
                        (*(long *)(TypeInfo_CharacterData + 0xb8) + 8);
              if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
              goto LAB_03f9ce66;
              __this = *(System_Collections_Generic_Dictionary_object__object__o **)
                        (*(long *)(TypeInfo_CharacterData + 0xb8) + 0x10);
              pIVar5 = System_Collections_Generic_Dictionary<object__object>__get_Item
                                 (pSVar1,(Il2CppObject *)pSVar6,MethodInfo_JSONNode_get_Item);
              pSVar4 = System_String__Concat(pSVar6,"Keyframes",(MethodInfo *)0x0);
              value = Characters_CharacterData__LoadTitanAttackInfos
                                ((SimpleJSONFixed_JSONNode_o *)pIVar5,pSVar4,method_00);
              if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
              goto LAB_03f9ce66;
              System_Collections_Generic_Dictionary<object__object>__Add
                        (__this,(Il2CppObject *)pSVar6,(Il2CppObject *)value,MethodInfo_Void_Add);
              uVar8 = uVar8 + 1;
              uVar3 = (ulong)*(uint *)(lVar2 + 0x18);
            } while ((long)uVar8 < (long)(int)*(uint *)(lVar2 + 0x18));
          }
          if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar6 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 0x10);
          if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar6 = ApplicationManagers_ResourceManager__TryLoadText
                             (pSVar6,"HumanWeaponInfo",(MethodInfo *)0x0);
          pSVar7 = SimpleJSONFixed_JSON__Parse(pSVar6,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_CharacterData + 0xe4) == 0) {
            il2cpp_init_class();
          }
          **(undefined8 **)(TypeInfo_CharacterData + 0xb8) = pSVar7;
          il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_CharacterData + 0xb8),pSVar7);
          return;
        }
      }
    }
  }
LAB_03f9ce6b:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.CharacterData$$LoadTitanAttackInfos
// il2cpp: System_Collections_Generic_Dictionary_string__TitanAttackInfo__o* Characters_CharacterData__LoadTitanAttackInfos (SimpleJSONFixed_JSONNode_o* info, System_String_o* keyframeFile, const MethodInfo* method);
// 0x3f9ce70

System_Collections_Generic_Dictionary_string__TitanAttackInfo__o *
Characters_CharacterData__LoadTitanAttackInfos
          (SimpleJSONFixed_JSONNode_o *info,System_String_o *keyframeFile,MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_00;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_01;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_02;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_03;
  char cVar1;
  bool_conflict bVar2;
  System_String_o *pSVar3;
  SimpleJSONFixed_JSONNode_o *pSVar4;
  SimpleJSONFixed_JSONNode_o *__this_04;
  System_Collections_Generic_Dictionary_object__object__o *__this_05;
  SimpleJSONFixed_JSONNode_o *attackInfo;
  Characters_TitanAttackInfo_o *__this_06;
  undefined8 in_stack_fffffffffffffee8;
  undefined8 in_stack_fffffffffffffef0;
  Il2CppMethodPointer pIVar5;
  Il2CppMethodPointer pIVar6;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar7;
  InvokerMethod pIVar8;
  char *pcVar9;
  Il2CppObject *pIVar10;
  Il2CppClass *pIVar11;
  Il2CppType *pIVar12;
  SimpleJSONFixed_JSONNode_o *pSVar13;
  System_Collections_Generic_List_T__o *pSVar14;
  Il2CppMethodPointer local_c0;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSStack_b8;
  InvokerMethod local_b0;
  Il2CppObject *pIStack_a8;
  Il2CppClass *local_a0;
  Il2CppType *pIStack_98;
  System_Collections_Generic_List_T__o *local_90;
  _union_13 _Stack_88;
  _union_14 local_80;
  Il2CppMethodPointer local_78;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSStack_70;
  InvokerMethod local_68;
  Il2CppObject *pIStack_60;
  Il2CppClass *local_58;
  Il2CppType *pIStack_50;
  System_Collections_Generic_List_T__o *local_48;
  _union_13 _Stack_40;
  _union_14 local_38;
  
  if (DAT_05704011 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_Characters_TitanAttac);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__TitanAttackInfo);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    il2cpp_init_method_metadata(&TypeInfo_ResourcePaths);
    il2cpp_init_method_metadata(&TypeInfo_TitanAttackInfo);
    il2cpp_init_method_metadata(&"AttackInfo");
    DAT_05704011 = '\x01';
  }
  pSVar13 = (SimpleJSONFixed_JSONNode_o *)0x0;
  pIVar11 = (Il2CppClass *)0x0;
  pIVar12 = (Il2CppType *)0x0;
  pIVar8 = (InvokerMethod)0x0;
  pcVar9 = (char *)0x0;
  pIVar5 = (Il2CppMethodPointer)0x0;
  pIVar6 = (Il2CppMethodPointer)0x0;
  local_48 = (System_Collections_Generic_List_T__o *)0x0;
  _Stack_40.rgctx_data = (Il2CppRGCTXData *)0x0;
  local_58 = (Il2CppClass *)0x0;
  pIStack_50 = (Il2CppType *)0x0;
  local_68 = (InvokerMethod)0x0;
  pIStack_60 = (Il2CppObject *)0x0;
  local_78 = (Il2CppMethodPointer)0x0;
  pSStack_70 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_38.genericMethod = (SimpleJSONFixed_JSONNode_o *)0x0;
  if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar3 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 0x10);
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar3 = ApplicationManagers_ResourceManager__TryLoadText(pSVar3,keyframeFile,(MethodInfo *)0x0);
  pSVar4 = SimpleJSONFixed_JSON__Parse(pSVar3,(MethodInfo *)0x0);
  if (info != (SimpleJSONFixed_JSONNode_o *)0x0) {
    __this_04 = (SimpleJSONFixed_JSONNode_o *)
                (*(info->klass->vtable)._7_get_Item.methodPtr)
                          (info,"AttackInfo",(info->klass->vtable)._7_get_Item.method);
    __this_05 = (System_Collections_Generic_Dictionary_object__object__o *)
                il2cpp_runtime_glue(TypeInfo_Dictionary_string__TitanAttackInfo);
    System_Collections_Generic_Dictionary<object__object>___ctor(__this_05,MethodInfo_Dictionary_2_System_String_Characters_TitanAttac);
    if (__this_04 != (SimpleJSONFixed_JSONNode_o *)0x0) {
      SimpleJSONFixed_JSONNode__get_Keys
                ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_c0,__this_04,(MethodInfo *)0x0);
      local_38 = local_80;
      local_48 = local_90;
      _Stack_40 = _Stack_88;
      local_58 = local_a0;
      pIStack_50 = pIStack_98;
      local_68 = local_b0;
      pIStack_60 = pIStack_a8;
      local_78 = local_c0;
      pSStack_70 = pSStack_b8;
      __this.fields.m_Enumerator.fields.m_Object.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffef0;
      __this.fields.m_Enumerator.fields._0_8_ = in_stack_fffffffffffffee8;
      __this.fields.m_Enumerator.fields.m_Object.fields._8_8_ = pIVar5;
      __this.fields.m_Enumerator.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIVar6
      ;
      __this.fields.m_Enumerator.fields.m_Object.fields._current.fields.value =
           (Il2CppObject *)pIVar8;
      __this.fields.m_Enumerator.fields.m_Object.fields._32_8_ = pcVar9;
      __this.fields.m_Enumerator.fields.m_Array.fields._list =
           (System_Collections_Generic_List_T__o *)pIVar11;
      __this.fields.m_Enumerator.fields.m_Array.fields._8_8_ = pIVar12;
      __this.fields.m_Enumerator.fields.m_Array.fields._current = pSVar13;
      SimpleJSONFixed_JSONNode_KeyEnumerator__GetEnumerator
                ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_c0,__this,
                 (MethodInfo *)&local_78);
      __this_00.fields.m_Enumerator.fields.m_Object.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffef0;
      __this_00.fields.m_Enumerator.fields._0_8_ = in_stack_fffffffffffffee8;
      __this_00.fields.m_Enumerator.fields.m_Object.fields._8_8_ = local_c0;
      __this_00.fields.m_Enumerator.fields.m_Object.fields._current.fields.key =
           (Il2CppObject *)pSStack_b8;
      __this_00.fields.m_Enumerator.fields.m_Object.fields._current.fields.value =
           (Il2CppObject *)local_b0;
      __this_00.fields.m_Enumerator.fields.m_Object.fields._32_8_ = pIStack_a8;
      __this_00.fields.m_Enumerator.fields.m_Array.fields._list =
           (System_Collections_Generic_List_T__o *)local_a0;
      __this_00.fields.m_Enumerator.fields.m_Array.fields._8_8_ = pIStack_98;
      __this_00.fields.m_Enumerator.fields.m_Array.fields._current =
           (SimpleJSONFixed_JSONNode_o *)local_90;
      bVar2 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                        (__this_00,(MethodInfo *)&stack0xfffffffffffffef8);
      if ((char)bVar2 != '\0') {
        pIVar5 = local_c0;
        pSVar7 = pSStack_b8;
        pIVar8 = local_b0;
        pIVar10 = pIStack_a8;
        pIVar11 = local_a0;
        pIVar12 = pIStack_98;
        pSVar14 = local_90;
        if (pSVar4 == (SimpleJSONFixed_JSONNode_o *)0x0) {
          __this_03.fields.m_Enumerator.fields.m_Object.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffef0;
          __this_03.fields.m_Enumerator.fields._0_8_ = in_stack_fffffffffffffee8;
          __this_03.fields.m_Enumerator.fields.m_Object.fields._8_8_ = local_c0;
          __this_03.fields.m_Enumerator.fields.m_Object.fields._current.fields.key =
               (Il2CppObject *)pSStack_b8;
          __this_03.fields.m_Enumerator.fields.m_Object.fields._current.fields.value =
               (Il2CppObject *)local_b0;
          __this_03.fields.m_Enumerator.fields.m_Object.fields._32_8_ = pIStack_a8;
          __this_03.fields.m_Enumerator.fields.m_Array.fields._list =
               (System_Collections_Generic_List_T__o *)local_a0;
          __this_03.fields.m_Enumerator.fields.m_Array.fields._8_8_ = pIStack_98;
          __this_03.fields.m_Enumerator.fields.m_Array.fields._current =
               (SimpleJSONFixed_JSONNode_o *)local_90;
          SimpleJSONFixed_JSONNode_KeyEnumerator__get_Current
                    (__this_03,(MethodInfo *)&stack0xfffffffffffffef8);
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        do {
          __this_01.fields.m_Enumerator.fields.m_Object.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar4;
          __this_01.fields.m_Enumerator.fields._0_8_ = in_stack_fffffffffffffee8;
          __this_01.fields.m_Enumerator.fields.m_Object.fields._8_8_ = pIVar5;
          __this_01.fields.m_Enumerator.fields.m_Object.fields._current.fields.key =
               (Il2CppObject *)pSVar7;
          __this_01.fields.m_Enumerator.fields.m_Object.fields._current.fields.value =
               (Il2CppObject *)pIVar8;
          __this_01.fields.m_Enumerator.fields.m_Object.fields._32_8_ = pIVar10;
          __this_01.fields.m_Enumerator.fields.m_Array.fields._list =
               (System_Collections_Generic_List_T__o *)pIVar11;
          __this_01.fields.m_Enumerator.fields.m_Array.fields._8_8_ = pIVar12;
          __this_01.fields.m_Enumerator.fields.m_Array.fields._current =
               (SimpleJSONFixed_JSONNode_o *)pSVar14;
          pSVar13 = pSVar4;
          pSVar3 = SimpleJSONFixed_JSONNode_KeyEnumerator__get_Current
                             (__this_01,(MethodInfo *)&stack0xfffffffffffffef8);
          cVar1 = (*(pSVar4->klass->vtable)._28_HasKey.methodPtr)
                            (pSVar4,pSVar3,(pSVar4->klass->vtable)._28_HasKey.method);
          attackInfo = (SimpleJSONFixed_JSONNode_o *)
                       (*(__this_04->klass->vtable)._7_get_Item.methodPtr)
                                 (__this_04,pSVar3,(__this_04->klass->vtable)._7_get_Item.method);
          if (cVar1 == '\0') {
            __this_06 = (Characters_TitanAttackInfo_o *)il2cpp_runtime_glue(TypeInfo_TitanAttackInfo);
            Characters_TitanAttackInfo___ctor
                      (__this_06,attackInfo,(SimpleJSONFixed_JSONNode_o *)0x0,(MethodInfo *)0x0);
            pSVar4 = pSVar13;
          }
          else {
            pSVar4 = (SimpleJSONFixed_JSONNode_o *)
                     (*(pSVar4->klass->vtable)._7_get_Item.methodPtr)
                               (pSVar4,pSVar3,(pSVar4->klass->vtable)._7_get_Item.method);
            __this_06 = (Characters_TitanAttackInfo_o *)il2cpp_runtime_glue(TypeInfo_TitanAttackInfo);
            Characters_TitanAttackInfo___ctor(__this_06,attackInfo,pSVar4,(MethodInfo *)0x0);
            pSVar4 = pSVar13;
          }
          if (__this_05 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
          goto LAB_03f9d1b2;
          System_Collections_Generic_Dictionary<object__object>__set_Item
                    (__this_05,(Il2CppObject *)pSVar3,(Il2CppObject *)__this_06,MethodInfo_Void_set_Item);
          __this_02.fields.m_Enumerator.fields.m_Object.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar4;
          __this_02.fields.m_Enumerator.fields._0_8_ = in_stack_fffffffffffffee8;
          __this_02.fields.m_Enumerator.fields.m_Object.fields._8_8_ = pIVar5;
          __this_02.fields.m_Enumerator.fields.m_Object.fields._current.fields.key =
               (Il2CppObject *)pSVar7;
          __this_02.fields.m_Enumerator.fields.m_Object.fields._current.fields.value =
               (Il2CppObject *)pIVar8;
          __this_02.fields.m_Enumerator.fields.m_Object.fields._32_8_ = pIVar10;
          __this_02.fields.m_Enumerator.fields.m_Array.fields._list =
               (System_Collections_Generic_List_T__o *)pIVar11;
          __this_02.fields.m_Enumerator.fields.m_Array.fields._8_8_ = pIVar12;
          __this_02.fields.m_Enumerator.fields.m_Array.fields._current =
               (SimpleJSONFixed_JSONNode_o *)pSVar14;
          bVar2 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                            (__this_02,(MethodInfo *)&stack0xfffffffffffffef8);
        } while ((char)bVar2 != '\0');
      }
      return (System_Collections_Generic_Dictionary_string__TitanAttackInfo__o *)__this_05;
    }
  }
LAB_03f9d1b2:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.CharacterData$$GetTitanAI
// il2cpp: SimpleJSONFixed_JSONNode_o* Characters_CharacterData__GetTitanAI (int32_t difficulty, System_String_o* titanType, const MethodInfo* method);
// 0x3f9d1d0

SimpleJSONFixed_JSONNode_o *
Characters_CharacterData__GetTitanAI
          (int32_t difficulty,System_String_o *titanType,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  char cVar2;
  bool_conflict bVar3;
  Il2CppObject *pIVar4;
  long *plVar5;
  System_String_o *pSVar6;
  SimpleJSONFixed_JSONNode_o *pSVar7;
  SimpleJSONFixed_JSONNode_o *pSVar8;
  undefined1 auVar9 [16];
  System_Enum_o local_48;
  int32_t local_38;
  
  if (DAT_05704012 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterData);
    il2cpp_init_method_metadata(&MethodInfo_JSONNode_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_GameDifficulty);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    il2cpp_init_method_metadata(&"SpawnRates");
    il2cpp_init_method_metadata(&"Titan");
    il2cpp_init_method_metadata(&"Default");
    il2cpp_init_method_metadata(&"Type");
    DAT_05704012 = '\x01';
    if (*(int *)(TypeInfo_CharacterData + 0xe4) == 0) goto LAB_03f9d2a9;
LAB_03f9d205:
    pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_CharacterData + 0xb8) + 8);
  }
  else {
    if (*(int *)(TypeInfo_CharacterData + 0xe4) != 0) goto LAB_03f9d205;
LAB_03f9d2a9:
    il2cpp_init_class();
    pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_CharacterData + 0xb8) + 8);
  }
  if ((pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
     (pIVar4 = System_Collections_Generic_Dictionary<object__object>__get_Item
                         (pSVar1,(Il2CppObject *)"Titan",MethodInfo_JSONNode_get_Item),
     pIVar4 != (Il2CppObject *)0x0)) {
    plVar5 = (long *)(*pIVar4->klass->vtable[7].methodPtr)
                               (pIVar4,"SpawnRates",pIVar4->klass->vtable[7].method);
    local_48.klass = TypeInfo_GameDifficulty;
    local_48.monitor = (void *)0xffffffffffffffff;
    local_38 = difficulty;
    pSVar6 = System_Enum__ToString(&local_48,(MethodInfo *)0x0);
    if (plVar5 != (long *)0x0) {
      pSVar7 = (SimpleJSONFixed_JSONNode_o *)
               (**(code **)(*plVar5 + 0x1a8))(plVar5,pSVar6,*(undefined8 *)(*plVar5 + 0x1b0));
      bVar3 = System_String__op_Equality(titanType,"Default",(MethodInfo *)0x0);
      if ((char)bVar3 != '\0') {
        if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
          il2cpp_init_class();
        }
        titanType = (System_String_o *)
                    Utility_Util__GetRandomFromWeightedNode(pSVar7,(MethodInfo *)0x0);
        if ((titanType != (System_String_o *)0x0) &&
           ((Il2CppClass *)titanType->klass != DAT_057110b0)) {
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume(titanType);
        }
      }
      if (*(int *)(TypeInfo_CharacterData + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_CharacterData + 0xb8) + 8);
      if (((pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
          (pIVar4 = System_Collections_Generic_Dictionary<object__object>__get_Item
                              (pSVar1,(Il2CppObject *)"Titan",MethodInfo_JSONNode_get_Item),
          pIVar4 != (Il2CppObject *)0x0)) &&
         (plVar5 = (long *)(*pIVar4->klass->vtable[7].methodPtr)
                                     (pIVar4,"Default",pIVar4->klass->vtable[7].method),
         plVar5 != (long *)0x0)) {
        pSVar7 = (SimpleJSONFixed_JSONNode_o *)
                 (**(code **)(*plVar5 + 0x2d8))(plVar5,*(undefined8 *)(*plVar5 + 0x2e0));
        pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
                  (*(long *)(TypeInfo_CharacterData + 0xb8) + 8);
        if (((pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
            (pIVar4 = System_Collections_Generic_Dictionary<object__object>__get_Item
                                (pSVar1,(Il2CppObject *)"Titan",MethodInfo_JSONNode_get_Item),
            pIVar4 != (Il2CppObject *)0x0)) &&
           (plVar5 = (long *)(*pIVar4->klass->vtable[7].methodPtr)
                                       (pIVar4,titanType,pIVar4->klass->vtable[7].method),
           plVar5 != (long *)0x0)) {
          auVar9 = (**(code **)(*plVar5 + 0x1a8))
                             (plVar5,"Default",*(undefined8 *)(*plVar5 + 0x1b0));
          Characters_CharacterData__CopyNode(pSVar7,auVar9._0_8_,auVar9._8_8_);
          pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
                    (*(long *)(TypeInfo_CharacterData + 0xb8) + 8);
          if ((pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
             (pIVar4 = System_Collections_Generic_Dictionary<object__object>__get_Item
                                 (pSVar1,(Il2CppObject *)"Titan",MethodInfo_JSONNode_get_Item),
             pIVar4 != (Il2CppObject *)0x0)) {
            plVar5 = (long *)(*pIVar4->klass->vtable[7].methodPtr)
                                       (pIVar4,titanType,pIVar4->klass->vtable[7].method);
            local_48.klass = TypeInfo_GameDifficulty;
            local_48.monitor = (void *)0xffffffffffffffff;
            local_38 = difficulty;
            pSVar6 = System_Enum__ToString(&local_48,(MethodInfo *)0x0);
            if (plVar5 != (long *)0x0) {
              cVar2 = (**(code **)(*plVar5 + 0x2f8))(plVar5,pSVar6,*(undefined8 *)(*plVar5 + 0x300))
              ;
              if (cVar2 != '\0') {
                if (*(int *)(TypeInfo_CharacterData + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
                          (*(long *)(TypeInfo_CharacterData + 0xb8) + 8);
                if ((pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
                   (pIVar4 = System_Collections_Generic_Dictionary<object__object>__get_Item
                                       (pSVar1,(Il2CppObject *)"Titan",MethodInfo_JSONNode_get_Item),
                   pIVar4 == (Il2CppObject *)0x0)) goto LAB_03f9d644;
                plVar5 = (long *)(*pIVar4->klass->vtable[7].methodPtr)
                                           (pIVar4,titanType,pIVar4->klass->vtable[7].method);
                local_48.klass = TypeInfo_GameDifficulty;
                local_48.monitor = (void *)0xffffffffffffffff;
                local_38 = difficulty;
                pSVar6 = System_Enum__ToString(&local_48,(MethodInfo *)0x0);
                if (plVar5 == (long *)0x0) goto LAB_03f9d644;
                auVar9 = (**(code **)(*plVar5 + 0x1a8))
                                   (plVar5,pSVar6,*(undefined8 *)(*plVar5 + 0x1b0));
                Characters_CharacterData__CopyNode(pSVar7,auVar9._0_8_,auVar9._8_8_);
              }
              if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar8 = SimpleJSONFixed_JSONNode__op_Implicit("Titan",(MethodInfo *)0x0);
              if (pSVar7 != (SimpleJSONFixed_JSONNode_o *)0x0) {
                (*(pSVar7->klass->vtable)._8_set_Item.methodPtr)
                          (pSVar7,"Type",pSVar8,(pSVar7->klass->vtable)._8_set_Item.method);
                return pSVar7;
              }
            }
          }
        }
      }
    }
  }
LAB_03f9d644:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.CharacterData$$GetShifterAI
// il2cpp: SimpleJSONFixed_JSONNode_o* Characters_CharacterData__GetShifterAI (int32_t difficulty, System_String_o* name, const MethodInfo* method);
// 0x3f9d8e0

SimpleJSONFixed_JSONNode_o *
Characters_CharacterData__GetShifterAI(int32_t difficulty,System_String_o *name,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  char cVar2;
  Il2CppObject *pIVar3;
  long *plVar4;
  SimpleJSONFixed_JSONNode_o *current;
  System_String_o *pSVar5;
  SimpleJSONFixed_JSONNode_o *pSVar6;
  undefined1 auVar7 [16];
  System_Enum_o local_48;
  int32_t local_38;
  
  if (DAT_05704013 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterData);
    il2cpp_init_method_metadata(&MethodInfo_JSONNode_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_GameDifficulty);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&"Default");
    il2cpp_init_method_metadata(&"Type");
    DAT_05704013 = '\x01';
    if (*(int *)(TypeInfo_CharacterData + 0xe4) == 0) goto LAB_03f9d98d;
LAB_03f9d911:
    pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_CharacterData + 0xb8) + 8);
  }
  else {
    if (*(int *)(TypeInfo_CharacterData + 0xe4) != 0) goto LAB_03f9d911;
LAB_03f9d98d:
    il2cpp_init_class();
    pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_CharacterData + 0xb8) + 8);
  }
  if (((pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
      (pIVar3 = System_Collections_Generic_Dictionary<object__object>__get_Item
                          (pSVar1,(Il2CppObject *)name,MethodInfo_JSONNode_get_Item), pIVar3 != (Il2CppObject *)0x0)
      ) && (plVar4 = (long *)(*pIVar3->klass->vtable[7].methodPtr)
                                       (pIVar3,"Default",pIVar3->klass->vtable[7].method),
           plVar4 != (long *)0x0)) {
    current = (SimpleJSONFixed_JSONNode_o *)
              (**(code **)(*plVar4 + 0x2d8))(plVar4,*(undefined8 *)(*plVar4 + 0x2e0));
    pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_CharacterData + 0xb8) + 8);
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pIVar3 = System_Collections_Generic_Dictionary<object__object>__get_Item
                         (pSVar1,(Il2CppObject *)name,MethodInfo_JSONNode_get_Item);
      local_48.klass = TypeInfo_GameDifficulty;
      local_48.monitor = (void *)0xffffffffffffffff;
      local_38 = difficulty;
      pSVar5 = System_Enum__ToString(&local_48,(MethodInfo *)0x0);
      if (pIVar3 != (Il2CppObject *)0x0) {
        cVar2 = (*pIVar3->klass->vtable[0x1c].methodPtr)
                          (pIVar3,pSVar5,pIVar3->klass->vtable[0x1c].method);
        if (cVar2 != '\0') {
          if (*(int *)(TypeInfo_CharacterData + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
                    (*(long *)(TypeInfo_CharacterData + 0xb8) + 8);
          if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
          goto LAB_03f9dbd1;
          pIVar3 = System_Collections_Generic_Dictionary<object__object>__get_Item
                             (pSVar1,(Il2CppObject *)name,MethodInfo_JSONNode_get_Item);
          local_48.klass = TypeInfo_GameDifficulty;
          local_48.monitor = (void *)0xffffffffffffffff;
          local_38 = difficulty;
          pSVar5 = System_Enum__ToString(&local_48,(MethodInfo *)0x0);
          if (pIVar3 == (Il2CppObject *)0x0) goto LAB_03f9dbd1;
          auVar7 = (*pIVar3->klass->vtable[7].methodPtr)
                             (pIVar3,pSVar5,pIVar3->klass->vtable[7].method);
          Characters_CharacterData__CopyNode(current,auVar7._0_8_,auVar7._8_8_);
        }
        if (*(int *)(TypeInfo_CharacterData + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
                  (*(long *)(TypeInfo_CharacterData + 0xb8) + 8);
        if (((pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
            (pIVar3 = System_Collections_Generic_Dictionary<object__object>__get_Item
                                (pSVar1,(Il2CppObject *)name,MethodInfo_JSONNode_get_Item),
            pIVar3 != (Il2CppObject *)0x0)) &&
           (plVar4 = (long *)(*pIVar3->klass->vtable[7].methodPtr)
                                       (pIVar3,"Type",pIVar3->klass->vtable[7].method),
           plVar4 != (long *)0x0)) {
          pSVar5 = (System_String_o *)(**(code **)(*plVar4 + 0x1c8))(plVar4);
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar6 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar5,(MethodInfo *)0x0);
          if (current != (SimpleJSONFixed_JSONNode_o *)0x0) {
            (*(current->klass->vtable)._8_set_Item.methodPtr)
                      (current,"Type",pSVar6,(current->klass->vtable)._8_set_Item.method);
            return current;
          }
        }
      }
    }
  }
LAB_03f9dbd1:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.CharacterData$$CopyNode
// il2cpp: void Characters_CharacterData__CopyNode (SimpleJSONFixed_JSONNode_o* current, SimpleJSONFixed_JSONNode_o* copy, const MethodInfo* method);
// 0x3f9d660

void Characters_CharacterData__CopyNode
               (SimpleJSONFixed_JSONNode_o *current,SimpleJSONFixed_JSONNode_o *copy,
               MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_00;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_01;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_02;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_03;
  bool_conflict bVar1;
  System_String_o *pSVar2;
  SimpleJSONFixed_JSONNode_o *pSVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  Il2CppMethodPointer pIVar6;
  Il2CppMethodPointer pIVar7;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar8;
  InvokerMethod pIVar9;
  char *pcVar10;
  Il2CppObject *pIVar11;
  Il2CppClass *pIVar12;
  Il2CppType *pIVar13;
  Il2CppType **ppIVar14;
  System_Collections_Generic_List_T__o *pSVar15;
  _union_13 _Var16;
  _union_14 _Var17;
  Il2CppMethodPointer local_c0;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSStack_b8;
  InvokerMethod local_b0;
  Il2CppObject *pIStack_a8;
  Il2CppClass *local_a0;
  Il2CppType *pIStack_98;
  System_Collections_Generic_List_T__o *local_90;
  _union_13 _Stack_88;
  _union_14 local_80;
  Il2CppMethodPointer local_78;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSStack_70;
  InvokerMethod local_68;
  Il2CppObject *pIStack_60;
  Il2CppClass *local_58;
  Il2CppType *pIStack_50;
  System_Collections_Generic_List_T__o *local_48;
  _union_13 _Stack_40;
  _union_14 local_38;
  
  if (DAT_05704014 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    DAT_05704014 = '\x01';
  }
  ppIVar14 = (Il2CppType **)0x0;
  _Var16.rgctx_data = (Il2CppRGCTXData *)0x0;
  pIVar12 = (Il2CppClass *)0x0;
  pIVar13 = (Il2CppType *)0x0;
  pIVar9 = (InvokerMethod)0x0;
  pcVar10 = (char *)0x0;
  pIVar6 = (Il2CppMethodPointer)0x0;
  pIVar7 = (Il2CppMethodPointer)0x0;
  _Var17.genericMethod = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_48 = (System_Collections_Generic_List_T__o *)0x0;
  _Stack_40.rgctx_data = (Il2CppRGCTXData *)0x0;
  local_58 = (Il2CppClass *)0x0;
  pIStack_50 = (Il2CppType *)0x0;
  local_68 = (InvokerMethod)0x0;
  pIStack_60 = (Il2CppObject *)0x0;
  local_78 = (Il2CppMethodPointer)0x0;
  pSStack_70 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_38.genericMethod = (SimpleJSONFixed_JSONNode_o *)0x0;
  if (copy == (SimpleJSONFixed_JSONNode_o *)0x0) {
LAB_03f9d8d5:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  SimpleJSONFixed_JSONNode__get_Keys
            ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_c0,copy,(MethodInfo *)0x0);
  local_38.genericMethod = local_80.genericMethod;
  local_48 = local_90;
  _Stack_40.methodMetadataHandle = _Stack_88.methodMetadataHandle;
  local_58 = local_a0;
  pIStack_50 = pIStack_98;
  local_68 = local_b0;
  pIStack_60 = pIStack_a8;
  local_78 = local_c0;
  pSStack_70 = pSStack_b8;
  __this.fields.m_Enumerator.fields.m_Object.fields._dictionary =
       (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar7;
  __this.fields.m_Enumerator.fields._0_8_ = pIVar6;
  __this.fields.m_Enumerator.fields.m_Object.fields._8_8_ = pIVar9;
  __this.fields.m_Enumerator.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar10;
  __this.fields.m_Enumerator.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar12;
  __this.fields.m_Enumerator.fields.m_Object.fields._32_8_ = pIVar13;
  __this.fields.m_Enumerator.fields.m_Array.fields._list =
       (System_Collections_Generic_List_T__o *)ppIVar14;
  __this.fields.m_Enumerator.fields.m_Array.fields._8_8_ = _Var16.rgctx_data;
  __this.fields.m_Enumerator.fields.m_Array.fields._current = _Var17.genericMethod;
  SimpleJSONFixed_JSONNode_KeyEnumerator__GetEnumerator
            ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_c0,__this,(MethodInfo *)&local_78);
  __this_00.fields.m_Enumerator.fields.m_Object.fields._dictionary = pSStack_b8;
  __this_00.fields.m_Enumerator.fields._0_8_ = local_c0;
  __this_00.fields.m_Enumerator.fields.m_Object.fields._8_8_ = local_b0;
  __this_00.fields.m_Enumerator.fields.m_Object.fields._current.fields.key = pIStack_a8;
  __this_00.fields.m_Enumerator.fields.m_Object.fields._current.fields.value =
       (Il2CppObject *)local_a0;
  __this_00.fields.m_Enumerator.fields.m_Object.fields._32_8_ = pIStack_98;
  __this_00.fields.m_Enumerator.fields.m_Array.fields._list = local_90;
  __this_00.fields.m_Enumerator.fields.m_Array.fields._8_8_ = _Stack_88.rgctx_data;
  __this_00.fields.m_Enumerator.fields.m_Array.fields._current = local_80.genericMethod;
  bVar1 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                    (__this_00,(MethodInfo *)&stack0xfffffffffffffef8);
  if ((char)bVar1 != '\0') {
    pIVar6 = local_c0;
    pSVar8 = pSStack_b8;
    pIVar9 = local_b0;
    pIVar11 = pIStack_a8;
    pIVar12 = local_a0;
    pIVar13 = pIStack_98;
    pSVar15 = local_90;
    _Var16 = _Stack_88;
    _Var17 = local_80;
    if (current == (SimpleJSONFixed_JSONNode_o *)0x0) {
      __this_03.fields.m_Enumerator.fields.m_Object.fields._dictionary = pSStack_b8;
      __this_03.fields.m_Enumerator.fields._0_8_ = local_c0;
      __this_03.fields.m_Enumerator.fields.m_Object.fields._8_8_ = local_b0;
      __this_03.fields.m_Enumerator.fields.m_Object.fields._current.fields.key = pIStack_a8;
      __this_03.fields.m_Enumerator.fields.m_Object.fields._current.fields.value =
           (Il2CppObject *)local_a0;
      __this_03.fields.m_Enumerator.fields.m_Object.fields._32_8_ = pIStack_98;
      __this_03.fields.m_Enumerator.fields.m_Array.fields._list = local_90;
      __this_03.fields.m_Enumerator.fields.m_Array.fields._8_8_ = _Stack_88.rgctx_data;
      __this_03.fields.m_Enumerator.fields.m_Array.fields._current = local_80.genericMethod;
      pSVar2 = SimpleJSONFixed_JSONNode_KeyEnumerator__get_Current
                         (__this_03,(MethodInfo *)&stack0xfffffffffffffef8);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar3 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar2,(MethodInfo *)0x0);
      if (pSVar3 != (SimpleJSONFixed_JSONNode_o *)0x0) {
        (*(pSVar3->klass->vtable)._9_get_Value.methodPtr)
                  (pSVar3,(pSVar3->klass->vtable)._9_get_Value.method);
        uVar4 = (*(pSVar3->klass->vtable)._9_get_Value.methodPtr)
                          (pSVar3,(pSVar3->klass->vtable)._9_get_Value.method);
        (*(copy->klass->vtable)._7_get_Item.methodPtr)
                  (copy,uVar4,(copy->klass->vtable)._7_get_Item.method);
      }
      goto LAB_03f9d8d5;
    }
    do {
      __this_01.fields.m_Enumerator.fields.m_Object.fields._dictionary = pSVar8;
      __this_01.fields.m_Enumerator.fields._0_8_ = pIVar6;
      __this_01.fields.m_Enumerator.fields.m_Object.fields._8_8_ = pIVar9;
      __this_01.fields.m_Enumerator.fields.m_Object.fields._current.fields.key = pIVar11;
      __this_01.fields.m_Enumerator.fields.m_Object.fields._current.fields.value =
           (Il2CppObject *)pIVar12;
      __this_01.fields.m_Enumerator.fields.m_Object.fields._32_8_ = pIVar13;
      __this_01.fields.m_Enumerator.fields.m_Array.fields._list = pSVar15;
      __this_01.fields.m_Enumerator.fields.m_Array.fields._8_8_ = _Var16.rgctx_data;
      __this_01.fields.m_Enumerator.fields.m_Array.fields._current = _Var17.genericMethod;
      pSVar2 = SimpleJSONFixed_JSONNode_KeyEnumerator__get_Current
                         (__this_01,(MethodInfo *)&stack0xfffffffffffffef8);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar3 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar2,(MethodInfo *)0x0);
      if (pSVar3 == (SimpleJSONFixed_JSONNode_o *)0x0) goto LAB_03f9d8d5;
      uVar4 = (*(pSVar3->klass->vtable)._9_get_Value.methodPtr)
                        (pSVar3,(pSVar3->klass->vtable)._9_get_Value.method);
      uVar5 = (*(pSVar3->klass->vtable)._9_get_Value.methodPtr)
                        (pSVar3,(pSVar3->klass->vtable)._9_get_Value.method);
      uVar5 = (*(copy->klass->vtable)._7_get_Item.methodPtr)
                        (copy,uVar5,(copy->klass->vtable)._7_get_Item.method);
      (*(current->klass->vtable)._8_set_Item.methodPtr)
                (current,uVar4,uVar5,(current->klass->vtable)._8_set_Item.method);
      __this_02.fields.m_Enumerator.fields.m_Object.fields._dictionary = pSVar8;
      __this_02.fields.m_Enumerator.fields._0_8_ = pIVar6;
      __this_02.fields.m_Enumerator.fields.m_Object.fields._8_8_ = pIVar9;
      __this_02.fields.m_Enumerator.fields.m_Object.fields._current.fields.key = pIVar11;
      __this_02.fields.m_Enumerator.fields.m_Object.fields._current.fields.value =
           (Il2CppObject *)pIVar12;
      __this_02.fields.m_Enumerator.fields.m_Object.fields._32_8_ = pIVar13;
      __this_02.fields.m_Enumerator.fields.m_Array.fields._list = pSVar15;
      __this_02.fields.m_Enumerator.fields.m_Array.fields._8_8_ = _Var16.rgctx_data;
      __this_02.fields.m_Enumerator.fields.m_Array.fields._current = _Var17.genericMethod;
      bVar1 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                        (__this_02,(MethodInfo *)&stack0xfffffffffffffef8);
    } while ((char)bVar1 != '\0');
  }
  return;
}


// Characters.CharacterData$$.ctor
// il2cpp: void Characters_CharacterData___ctor (Characters_CharacterData_o* __this, const MethodInfo* method);
// 0x3f9dbe0

void Characters_CharacterData___ctor(Characters_CharacterData_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Characters.CharacterData$$.cctor
// il2cpp: void Characters_CharacterData___cctor (const MethodInfo* method);
// 0x3f9dbf0

void Characters_CharacterData___cctor(MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  
  if (DAT_05704015 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterData);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_Dictionary_2_System_S);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_SimpleJSONFixed_JSONN);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__Dictionary_string__TitanAttac);
    DAT_05704015 = '\x01';
  }
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
           il2cpp_runtime_glue(TypeInfo_Dictionary_string__JSONNode);
  System_Collections_Generic_Dictionary<object__object>___ctor(pSVar2,MethodInfo_Dictionary_2_System_String_SimpleJSONFixed_JSONN);
  lVar1 = *(long *)(TypeInfo_CharacterData + 0xb8);
  *(System_Collections_Generic_Dictionary_object__object__o **)(lVar1 + 8) = pSVar2;
  il2cpp_runtime_glue(lVar1 + 8,pSVar2);
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
           il2cpp_runtime_glue(TypeInfo_Dictionary_string__Dictionary_string__TitanAttac);
  System_Collections_Generic_Dictionary<object__object>___ctor(pSVar2,MethodInfo_Dictionary_2_System_String_Dictionary_2_System_S);
  lVar1 = *(long *)(TypeInfo_CharacterData + 0xb8);
  *(System_Collections_Generic_Dictionary_object__object__o **)(lVar1 + 0x10) = pSVar2;
  il2cpp_runtime_glue(lVar1 + 0x10,pSVar2);
  return;
}


