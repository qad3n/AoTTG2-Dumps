// Type: Controllers.DebugAttackKeyframes
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Controllers/DebugAttackKeyframes.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Titan/DebugAttackKeyframes.cs
// --------------------------------

// Controllers.DebugAttackKeyframes.<GenerateAttackFrames>d__3$$.ctor
// il2cpp: void Controllers_DebugAttackKeyframes__GenerateAttackFrames_d__3___ctor (Controllers_DebugAttackKeyframes__GenerateAttackFrames_d__3_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5b989b0

void Controllers_DebugAttackKeyframes__GenerateAttackFrames_d__3___ctor
               (Controllers_DebugAttackKeyframes__GenerateAttackFrames_d__3_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Controllers.DebugAttackKeyframes.<GenerateAttackFrames>d__3$$System.IDisposable.Dispose
// il2cpp: void Controllers_DebugAttackKeyframes__GenerateAttackFrames_d__3__System_IDisposable_Dispose (Controllers_DebugAttackKeyframes__GenerateAttackFrames_d__3_o* __this, const MethodInfo* method);
// 0x5b98d20

void Controllers_DebugAttackKeyframes__GenerateAttackFrames_d__3__System_IDisposable_Dispose
               (Controllers_DebugAttackKeyframes__GenerateAttackFrames_d__3_o *__this,MethodInfo *method)

{
  return;
}


// Controllers.DebugAttackKeyframes.<GenerateAttackFrames>d__3$$MoveNext
// il2cpp: bool Controllers_DebugAttackKeyframes__GenerateAttackFrames_d__3__MoveNext (Controllers_DebugAttackKeyframes__GenerateAttackFrames_d__3_o* __this, const MethodInfo* method);
// 0x5b98d30

bool Controllers_DebugAttackKeyframes__GenerateAttackFrames_d__3__MoveNext
               (Controllers_DebugAttackKeyframes__GenerateAttackFrames_d__3_o *__this,MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_KeyEnumerator_o *pSVar1;
  System_String_o **targetAddress;
  SimpleJSONFixed_JSONObject_o **targetAddress_00;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Characters_BaseTitan_o *pCVar13;
  Utility_BaseComponentCache_o *pUVar14;
  UnityEngine_Transform_o *pUVar15;
  Characters_BaseTitanComponentCache_o *pCVar16;
  Characters_BaseHitbox_o *pCVar17;
  System_Single_array *pSVar18;
  SimpleJSONFixed_JSONObject_o *pSVar19;
  SimpleJSONFixed_JSONNode_Enumerator_o *pSVar20;
  bool bVar21;
  char cVar22;
  int32_t iVar23;
  System_String_o *pSVar24;
  SimpleJSONFixed_JSONNode_o *pSVar25;
  SimpleJSONFixed_JSONObject_o *pSVar26;
  SimpleJSONFixed_JSONArray_o *pSVar27;
  System_Single_array *pSVar28;
  Controllers_DebugAttackKeyframes_o *pCVar29;
  Controllers_DebugAttackKeyframes_o *pCVar30;
  System_String_o *path;
  Il2CppObject *message;
  SimpleJSONFixed_JSONArray_o *__this_01;
  SimpleJSONFixed_JSONArray_o *__this_02;
  UnityEngine_WaitForSeconds_o *pUVar31;
  System_Collections_Generic_Dictionary_Enumerator_string__JSONNode__o *targetAddress_01;
  MethodInfo *in_R9;
  int iVar32;
  float fVar33;
  UnityEngine_Vector3_o UVar34;
  UnityEngine_Vector3_o position;
  UnityEngine_Vector3_o position_00;
  UnityEngine_Vector3_o position_01;
  UnityEngine_Vector3_o position_02;
  UnityEngine_Vector3_o position_03;
  SimpleJSONFixed_JSONNode_Enumerator_Fields SStack_108;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o SStack_c0;
  SimpleJSONFixed_JSONNode_Enumerator_Fields SStack_78;
  
  if (Il2CppMethodInitialized_07547441 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_CharacterData);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_FolderPaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONArray);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_float_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               FieldRva_PrivateImplementationDetails_CA37AD904FC6BEA9F844804EA32D830AC222F833C1C12C44DAD8B67745FAF4DF
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               FieldRva_PrivateImplementationDetails_DD6DFD036D588321FCD10D32CBA47D659057F3F8DA5C7AD402B7A50049F7EB84
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForSeconds);
    il2cpp_codegen_initialize_runtime_metadata(&"AttackBellyFlop");
    il2cpp_codegen_initialize_runtime_metadata(&"Ranges");
    il2cpp_codegen_initialize_runtime_metadata(&"Z");
    il2cpp_codegen_initialize_runtime_metadata(&"Keyframes");
    il2cpp_codegen_initialize_runtime_metadata(&"Far");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackInfo");
    il2cpp_codegen_initialize_runtime_metadata(&"Y");
    il2cpp_codegen_initialize_runtime_metadata(&"X");
    il2cpp_codegen_initialize_runtime_metadata(&"/Keyframes.txt");
    Il2CppMethodInitialized_07547441 = '\x01';
  }
  SStack_108.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  SStack_108.m_Array.fields._index = 0;
  SStack_108.m_Array.fields._version = 0;
  SStack_108.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  SStack_108.m_Object.fields._getEnumeratorRetType = 0;
  SStack_108.m_Object.fields._36_4_ = 0;
  SStack_108.m_Object.fields._version = 0;
  SStack_108.m_Object.fields._index = 0;
  SStack_108.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  SStack_108.type = 0;
  SStack_108._4_4_ = 0;
  SStack_108.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  SStack_108.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  uVar12 = (__this->fields).__1__state;
  if (4 < uVar12) {
    return false;
  }
  pCVar30 = (__this->fields).__4__this;
  switch(uVar12) {
  case 0:
    (__this->fields).__1__state = -1;
    if ((TypeInfo_Characters_CharacterData->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_CharacterData);
    }
    if (((pCVar30 != (Controllers_DebugAttackKeyframes_o *)0x0) &&
        (__this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                     TypeInfo_Characters_CharacterData->static_fields->TitanAIInfos,
        __this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) &&
       (pSVar25 = System_Collections_Generic_Dictionary_object__object___get_Item
                            (__this_00,(Il2CppObject *)(pCVar30->fields)._name,
                             (MethodInfo_4AAD450 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_JSONNode_get_Item),
       pSVar25 != (SimpleJSONFixed_JSONNode_o *)0x0)) {
      pSVar25 = (*(pSVar25->klass->vtable)._7_get_Item.methodPtr)
                          (pSVar25,"AttackInfo",(pSVar25->klass->vtable)._7_get_Item.method);
      (__this->fields)._data_5__2 = pSVar25;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._data_5__2);
      pSVar26 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONObject);
      SimpleJSONFixed_JSONObject___ctor(pSVar26,(MethodInfo *)0x0);
      (__this->fields)._newData_5__3 = (SimpleJSONFixed_JSONNode_o *)pSVar26;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._newData_5__3);
      pCVar13 = (pCVar30->fields)._titan;
      if ((pCVar13 != (Characters_BaseTitan_o *)0x0) &&
         (pUVar14 = (pCVar13->fields).Cache, pUVar14 != (Utility_BaseComponentCache_o *)0x0)) {
        pUVar15 = (pUVar14->fields).Transform;
        if (Il2CppMethodInitialized_0753e72b == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
          Il2CppMethodInitialized_0753e72b = '\x01';
        }
        if (pUVar15 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__set_rotation
                    (pUVar15,(UnityEngine_Quaternion_o)
                             *(UnityEngine_Quaternion_Fields *)TypeInfo_UnityEngine_Quaternion->static_fields,
                     (MethodInfo *)0x0);
          pUVar31 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
          UnityEngine_WaitForSeconds___ctor(pUVar31,1.0,(MethodInfo *)0x0);
          (__this->fields).__2__current = (Il2CppObject *)pUVar31;
          Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
          (__this->fields).__1__state = 1;
          return true;
        }
      }
    }
    break;
  case 1:
    (__this->fields).__1__state = -1;
    (__this->fields)._total_5__4 = 0;
    pSVar25 = (__this->fields)._data_5__2;
    if (pSVar25 == (SimpleJSONFixed_JSONNode_o *)0x0) break;
    SimpleJSONFixed_JSONNode__get_Keys(&SStack_c0,pSVar25,(MethodInfo *)0x0);
    SStack_108.m_Array.fields._current = SStack_c0.fields.m_Enumerator.fields.m_Array.fields._current;
    SStack_108._4_4_ = SStack_c0.fields.m_Enumerator.fields._4_4_;
    SStack_108.type = SStack_c0.fields.m_Enumerator.fields.type;
    SStack_108.m_Array.fields._list = SStack_c0.fields.m_Enumerator.fields.m_Array.fields._list;
    SStack_108.m_Array.fields._index = SStack_c0.fields.m_Enumerator.fields.m_Array.fields._index;
    SStack_108.m_Array.fields._version = SStack_c0.fields.m_Enumerator.fields.m_Array.fields._version;
    SStack_108.m_Object.fields._current.fields.value =
         SStack_c0.fields.m_Enumerator.fields.m_Object.fields._current.fields.value;
    SStack_108.m_Object.fields._getEnumeratorRetType =
         SStack_c0.fields.m_Enumerator.fields.m_Object.fields._getEnumeratorRetType;
    SStack_108.m_Object.fields._36_4_ = SStack_c0.fields.m_Enumerator.fields.m_Object.fields._36_4_;
    SStack_108.m_Object.fields._version = SStack_c0.fields.m_Enumerator.fields.m_Object.fields._version;
    SStack_108.m_Object.fields._index = SStack_c0.fields.m_Enumerator.fields.m_Object.fields._index;
    SStack_108.m_Object.fields._current.fields.key =
         SStack_c0.fields.m_Enumerator.fields.m_Object.fields._current.fields.key;
    SStack_108.m_Object.fields._dictionary = SStack_c0.fields.m_Enumerator.fields.m_Object.fields._dictionary;
    SimpleJSONFixed_JSONNode_KeyEnumerator__GetEnumerator
              ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&SStack_78,
               (SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&SStack_108,(MethodInfo *)0x0);
    (__this->fields).__7__wrap4.fields.m_Enumerator.fields.m_Array.fields._current =
         SStack_78.m_Array.fields._current;
    (__this->fields).__7__wrap4.fields.m_Enumerator.fields.m_Array.fields._list =
         SStack_78.m_Array.fields._list;
    pSVar20 = &(__this->fields).__7__wrap4.fields.m_Enumerator;
    (pSVar20->fields).m_Array.fields._index = SStack_78.m_Array.fields._index;
    (pSVar20->fields).m_Array.fields._version = SStack_78.m_Array.fields._version;
    (__this->fields).__7__wrap4.fields.m_Enumerator.fields.m_Object.fields._current.fields.value =
         SStack_78.m_Object.fields._current.fields.value;
    pSVar20 = &(__this->fields).__7__wrap4.fields.m_Enumerator;
    (pSVar20->fields).m_Object.fields._getEnumeratorRetType = SStack_78.m_Object.fields._getEnumeratorRetType;
    *(undefined4 *)&(pSVar20->fields).m_Object.fields.field_0x24 = SStack_78.m_Object.fields._36_4_;
    pSVar20 = &(__this->fields).__7__wrap4.fields.m_Enumerator;
    (pSVar20->fields).m_Object.fields._version = SStack_78.m_Object.fields._version;
    (pSVar20->fields).m_Object.fields._index = SStack_78.m_Object.fields._index;
    (__this->fields).__7__wrap4.fields.m_Enumerator.fields.m_Object.fields._current.fields.key =
         SStack_78.m_Object.fields._current.fields.key;
    pSVar1 = &(__this->fields).__7__wrap4;
    (pSVar1->fields).m_Enumerator.fields.type = SStack_78.type;
    *(undefined4 *)&(pSVar1->fields).m_Enumerator.fields.field_0x4 = SStack_78._4_4_;
    (__this->fields).__7__wrap4.fields.m_Enumerator.fields.m_Object.fields._dictionary =
         SStack_78.m_Object.fields._dictionary;
    targetAddress_01 = &(__this->fields).__7__wrap4.fields.m_Enumerator.fields.m_Object;
    goto label_05b99262;
  case 2:
    (__this->fields).__1__state = -1;
    if (pCVar30 != (Controllers_DebugAttackKeyframes_o *)0x0) {
      pCVar13 = (pCVar30->fields)._titan;
joined_r0x05b990d1:
      if (pCVar13 != (Characters_BaseTitan_o *)0x0) {
        if ((pCVar13->fields).State == 10) {
          fVar33 = UnityEngine_Time__get_fixedTime((MethodInfo *)0x0);
          iVar32 = (int)((fVar33 - (__this->fields)._startTime_5__9) * 50.0);
          if (iVar32 <= (__this->fields)._currFrame_5__13) {
label_05b999d6:
            (__this->fields).__2__current = (Il2CppObject *)0x0;
            Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
            (__this->fields).__1__state = 2;
            return true;
          }
          (__this->fields)._currFrame_5__13 = iVar32;
          pCVar13 = (pCVar30->fields)._titan;
          if (((pCVar13 == (Characters_BaseTitan_o *)0x0) ||
              (pCVar16 = (pCVar13->fields).BaseTitanCache,
              pCVar16 == (Characters_BaseTitanComponentCache_o *)0x0)) ||
             (pCVar17 = (pCVar16->fields).HandLHitbox, pCVar17 == (Characters_BaseHitbox_o *)0x0)) break;
          bVar21 = Characters_BaseHitbox__IsActive(pCVar17,(MethodInfo *)0x0);
          if (bVar21) {
            pCVar13 = (pCVar30->fields)._titan;
            if (((pCVar13 == (Characters_BaseTitan_o *)0x0) ||
                (pCVar16 = (pCVar13->fields).BaseTitanCache,
                pCVar16 == (Characters_BaseTitanComponentCache_o *)0x0)) ||
               (pCVar17 = (pCVar16->fields).HandLHitbox, pCVar17 == (Characters_BaseHitbox_o *)0x0)) break;
            pSVar27 = (__this->fields)._frames_5__8;
            pSVar28 = (__this->fields)._mins_5__11;
            pSVar18 = (__this->fields)._maxes_5__12;
            pCVar29 = (Controllers_DebugAttackKeyframes_o *)
                      UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)pCVar17,(MethodInfo *)0x0);
            if (pCVar29 == (Controllers_DebugAttackKeyframes_o *)0x0) break;
            UVar34 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)pCVar29,(MethodInfo *)0x0)
            ;
            uVar2 = (__this->fields)._startPosition_5__10.fields.x;
            uVar7 = (__this->fields)._startPosition_5__10.fields.y;
            position.fields.x = UVar34.fields.x - (float)uVar2;
            position.fields.y = UVar34.fields.y - (float)uVar7;
            position.fields.z = UVar34.fields.z - (__this->fields)._startPosition_5__10.fields.z;
            pSVar26 = Controllers_DebugAttackKeyframes__DebugCreateFrameJSON
                                (pCVar29,iVar32,pCVar17,pSVar28,pSVar18,position,in_R9);
            if (pSVar27 == (SimpleJSONFixed_JSONArray_o *)0x0) break;
            (*(pSVar27->klass->vtable)._21_Add.methodPtr)
                      (pSVar27,(SimpleJSONFixed_JSONNode_o *)pSVar26,(pSVar27->klass->vtable)._21_Add.method);
          }
          pCVar13 = (pCVar30->fields)._titan;
          if (((pCVar13 == (Characters_BaseTitan_o *)0x0) ||
              (pCVar16 = (pCVar13->fields).BaseTitanCache,
              pCVar16 == (Characters_BaseTitanComponentCache_o *)0x0)) ||
             (pCVar17 = (pCVar16->fields).HandRHitbox, pCVar17 == (Characters_BaseHitbox_o *)0x0)) break;
          bVar21 = Characters_BaseHitbox__IsActive(pCVar17,(MethodInfo *)0x0);
          if (bVar21) {
            pCVar13 = (pCVar30->fields)._titan;
            if (((pCVar13 == (Characters_BaseTitan_o *)0x0) ||
                (pCVar16 = (pCVar13->fields).BaseTitanCache,
                pCVar16 == (Characters_BaseTitanComponentCache_o *)0x0)) ||
               (pCVar17 = (pCVar16->fields).HandRHitbox, pCVar17 == (Characters_BaseHitbox_o *)0x0)) break;
            pSVar27 = (__this->fields)._frames_5__8;
            pSVar28 = (__this->fields)._mins_5__11;
            pSVar18 = (__this->fields)._maxes_5__12;
            pCVar29 = (Controllers_DebugAttackKeyframes_o *)
                      UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)pCVar17,(MethodInfo *)0x0);
            if (pCVar29 == (Controllers_DebugAttackKeyframes_o *)0x0) break;
            UVar34 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)pCVar29,(MethodInfo *)0x0)
            ;
            uVar3 = (__this->fields)._startPosition_5__10.fields.x;
            uVar8 = (__this->fields)._startPosition_5__10.fields.y;
            position_00.fields.x = UVar34.fields.x - (float)uVar3;
            position_00.fields.y = UVar34.fields.y - (float)uVar8;
            position_00.fields.z = UVar34.fields.z - (__this->fields)._startPosition_5__10.fields.z;
            pSVar26 = Controllers_DebugAttackKeyframes__DebugCreateFrameJSON
                                (pCVar29,iVar32,pCVar17,pSVar28,pSVar18,position_00,in_R9);
            if (pSVar27 == (SimpleJSONFixed_JSONArray_o *)0x0) break;
            (*(pSVar27->klass->vtable)._21_Add.methodPtr)
                      (pSVar27,(SimpleJSONFixed_JSONNode_o *)pSVar26,(pSVar27->klass->vtable)._21_Add.method);
          }
          pCVar13 = (pCVar30->fields)._titan;
          if (((pCVar13 == (Characters_BaseTitan_o *)0x0) ||
              (pCVar16 = (pCVar13->fields).BaseTitanCache,
              pCVar16 == (Characters_BaseTitanComponentCache_o *)0x0)) ||
             (pCVar17 = (pCVar16->fields).FootLHitbox, pCVar17 == (Characters_BaseHitbox_o *)0x0)) break;
          bVar21 = Characters_BaseHitbox__IsActive(pCVar17,(MethodInfo *)0x0);
          if (bVar21) {
            pCVar13 = (pCVar30->fields)._titan;
            if (((pCVar13 == (Characters_BaseTitan_o *)0x0) ||
                (pCVar16 = (pCVar13->fields).BaseTitanCache,
                pCVar16 == (Characters_BaseTitanComponentCache_o *)0x0)) ||
               (pCVar17 = (pCVar16->fields).FootLHitbox, pCVar17 == (Characters_BaseHitbox_o *)0x0)) break;
            pSVar27 = (__this->fields)._frames_5__8;
            pSVar28 = (__this->fields)._mins_5__11;
            pSVar18 = (__this->fields)._maxes_5__12;
            pCVar29 = (Controllers_DebugAttackKeyframes_o *)
                      UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)pCVar17,(MethodInfo *)0x0);
            if (pCVar29 == (Controllers_DebugAttackKeyframes_o *)0x0) break;
            UVar34 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)pCVar29,(MethodInfo *)0x0)
            ;
            uVar4 = (__this->fields)._startPosition_5__10.fields.x;
            uVar9 = (__this->fields)._startPosition_5__10.fields.y;
            position_01.fields.x = UVar34.fields.x - (float)uVar4;
            position_01.fields.y = UVar34.fields.y - (float)uVar9;
            position_01.fields.z = UVar34.fields.z - (__this->fields)._startPosition_5__10.fields.z;
            pSVar26 = Controllers_DebugAttackKeyframes__DebugCreateFrameJSON
                                (pCVar29,iVar32,pCVar17,pSVar28,pSVar18,position_01,in_R9);
            if (pSVar27 == (SimpleJSONFixed_JSONArray_o *)0x0) break;
            (*(pSVar27->klass->vtable)._21_Add.methodPtr)
                      (pSVar27,(SimpleJSONFixed_JSONNode_o *)pSVar26,(pSVar27->klass->vtable)._21_Add.method);
          }
          pCVar13 = (pCVar30->fields)._titan;
          if (((pCVar13 == (Characters_BaseTitan_o *)0x0) ||
              (pCVar16 = (pCVar13->fields).BaseTitanCache,
              pCVar16 == (Characters_BaseTitanComponentCache_o *)0x0)) ||
             (pCVar17 = (pCVar16->fields).FootRHitbox, pCVar17 == (Characters_BaseHitbox_o *)0x0)) break;
          bVar21 = Characters_BaseHitbox__IsActive(pCVar17,(MethodInfo *)0x0);
          if (bVar21) {
            pCVar13 = (pCVar30->fields)._titan;
            if (((pCVar13 == (Characters_BaseTitan_o *)0x0) ||
                (pCVar16 = (pCVar13->fields).BaseTitanCache,
                pCVar16 == (Characters_BaseTitanComponentCache_o *)0x0)) ||
               (pCVar17 = (pCVar16->fields).FootRHitbox, pCVar17 == (Characters_BaseHitbox_o *)0x0)) break;
            pSVar27 = (__this->fields)._frames_5__8;
            pSVar28 = (__this->fields)._mins_5__11;
            pSVar18 = (__this->fields)._maxes_5__12;
            pCVar29 = (Controllers_DebugAttackKeyframes_o *)
                      UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)pCVar17,(MethodInfo *)0x0);
            if (pCVar29 == (Controllers_DebugAttackKeyframes_o *)0x0) break;
            UVar34 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)pCVar29,(MethodInfo *)0x0)
            ;
            uVar5 = (__this->fields)._startPosition_5__10.fields.x;
            uVar10 = (__this->fields)._startPosition_5__10.fields.y;
            position_02.fields.x = UVar34.fields.x - (float)uVar5;
            position_02.fields.y = UVar34.fields.y - (float)uVar10;
            position_02.fields.z = UVar34.fields.z - (__this->fields)._startPosition_5__10.fields.z;
            pSVar26 = Controllers_DebugAttackKeyframes__DebugCreateFrameJSON
                                (pCVar29,iVar32,pCVar17,pSVar28,pSVar18,position_02,in_R9);
            if (pSVar27 == (SimpleJSONFixed_JSONArray_o *)0x0) break;
            (*(pSVar27->klass->vtable)._21_Add.methodPtr)
                      (pSVar27,(SimpleJSONFixed_JSONNode_o *)pSVar26,(pSVar27->klass->vtable)._21_Add.method);
          }
          pCVar13 = (pCVar30->fields)._titan;
          if ((pCVar13 != (Characters_BaseTitan_o *)0x0) &&
             (pCVar16 = (pCVar13->fields).BaseTitanCache,
             pCVar16 != (Characters_BaseTitanComponentCache_o *)0x0)) {
            pCVar17 = (pCVar16->fields).MouthHitbox;
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar21 = UnityEngine_Object__op_Inequality
                               ((UnityEngine_Object_o *)pCVar17,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
            ;
            if (!bVar21) goto label_05b999d6;
            pCVar13 = (pCVar30->fields)._titan;
            if (((pCVar13 != (Characters_BaseTitan_o *)0x0) &&
                (pCVar16 = (pCVar13->fields).BaseTitanCache,
                pCVar16 != (Characters_BaseTitanComponentCache_o *)0x0)) &&
               (pCVar17 = (pCVar16->fields).MouthHitbox, pCVar17 != (Characters_BaseHitbox_o *)0x0)) {
              bVar21 = Characters_BaseHitbox__IsActive(pCVar17,(MethodInfo *)0x0);
              if (!bVar21) goto label_05b999d6;
              pCVar13 = (pCVar30->fields)._titan;
              if (((pCVar13 != (Characters_BaseTitan_o *)0x0) &&
                  (pCVar16 = (pCVar13->fields).BaseTitanCache,
                  pCVar16 != (Characters_BaseTitanComponentCache_o *)0x0)) &&
                 (pCVar17 = (pCVar16->fields).MouthHitbox, pCVar17 != (Characters_BaseHitbox_o *)0x0)) {
                pSVar27 = (__this->fields)._frames_5__8;
                pSVar28 = (__this->fields)._mins_5__11;
                pSVar18 = (__this->fields)._maxes_5__12;
                pCVar30 = (Controllers_DebugAttackKeyframes_o *)
                          UnityEngine_Component__get_transform
                                    ((UnityEngine_Component_o *)pCVar17,(MethodInfo *)0x0);
                if (pCVar30 != (Controllers_DebugAttackKeyframes_o *)0x0) {
                  UVar34 = UnityEngine_Transform__get_position
                                     ((UnityEngine_Transform_o *)pCVar30,(MethodInfo *)0x0);
                  uVar6 = (__this->fields)._startPosition_5__10.fields.x;
                  uVar11 = (__this->fields)._startPosition_5__10.fields.y;
                  position_03.fields.x = UVar34.fields.x - (float)uVar6;
                  position_03.fields.y = UVar34.fields.y - (float)uVar11;
                  position_03.fields.z = UVar34.fields.z - (__this->fields)._startPosition_5__10.fields.z;
                  pSVar26 = Controllers_DebugAttackKeyframes__DebugCreateFrameJSON
                                      (pCVar30,iVar32,pCVar17,pSVar28,pSVar18,position_03,in_R9);
                  if (pSVar27 != (SimpleJSONFixed_JSONArray_o *)0x0) {
                    (*(pSVar27->klass->vtable)._21_Add.methodPtr)
                              (pSVar27,(SimpleJSONFixed_JSONNode_o *)pSVar26,
                               (pSVar27->klass->vtable)._21_Add.method);
                    goto label_05b999d6;
                  }
                }
              }
            }
          }
        }
        else {
          pSVar27 = (__this->fields)._frames_5__8;
          if (pSVar27 != (SimpleJSONFixed_JSONArray_o *)0x0) {
            iVar32 = (__this->fields)._total_5__4;
            iVar23 = (*(pSVar27->klass->vtable)._11_get_Count.methodPtr)
                               (pSVar27,(pSVar27->klass->vtable)._11_get_Count.method);
            (__this->fields)._total_5__4 = iVar23 + iVar32;
            pSVar26 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONObject);
            SimpleJSONFixed_JSONObject___ctor(pSVar26,(MethodInfo *)0x0);
            pSVar27 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONArray);
            SimpleJSONFixed_JSONArray___ctor(pSVar27,(MethodInfo *)0x0);
            pSVar28 = (__this->fields)._mins_5__11;
            if (pSVar28 != (System_Single_array *)0x0) {
              if ((int)pSVar28->max_length == 0) goto label_05b99e45;
              fVar33 = pSVar28->m_Items[0];
              if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
              }
              pSVar25 = SimpleJSONFixed_JSONNode__op_Implicit_5763a50(fVar33,(MethodInfo *)0x0);
              if (pSVar27 != (SimpleJSONFixed_JSONArray_o *)0x0) {
                (*(pSVar27->klass->vtable)._21_Add.methodPtr)
                          (pSVar27,pSVar25,(pSVar27->klass->vtable)._21_Add.method);
                pSVar28 = (__this->fields)._maxes_5__12;
                if (pSVar28 != (System_Single_array *)0x0) {
                  if ((int)pSVar28->max_length == 0) {
label_05b99e45:
                    ThrowIndexOutOfRangeException();
                  }
                  pSVar25 = SimpleJSONFixed_JSONNode__op_Implicit_5763a50
                                      (pSVar28->m_Items[0],(MethodInfo *)0x0);
                  (*(pSVar27->klass->vtable)._21_Add.methodPtr)
                            (pSVar27,pSVar25,(pSVar27->klass->vtable)._21_Add.method);
                  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONArray);
                  SimpleJSONFixed_JSONArray___ctor(__this_01,(MethodInfo *)0x0);
                  pSVar28 = (__this->fields)._mins_5__11;
                  if (pSVar28 != (System_Single_array *)0x0) {
                    if ((pSVar28->max_length & 0xfffffffe) == 0) goto label_05b99e45;
                    pSVar25 = SimpleJSONFixed_JSONNode__op_Implicit_5763a50
                                        (pSVar28->m_Items[1],(MethodInfo *)0x0);
                    if (__this_01 != (SimpleJSONFixed_JSONArray_o *)0x0) {
                      (*(__this_01->klass->vtable)._21_Add.methodPtr)
                                (__this_01,pSVar25,(__this_01->klass->vtable)._21_Add.method);
                      pSVar28 = (__this->fields)._maxes_5__12;
                      if (pSVar28 != (System_Single_array *)0x0) {
                        if ((pSVar28->max_length & 0xfffffffe) == 0) goto label_05b99e45;
                        pSVar25 = SimpleJSONFixed_JSONNode__op_Implicit_5763a50
                                            (pSVar28->m_Items[1],(MethodInfo *)0x0);
                        (*(__this_01->klass->vtable)._21_Add.methodPtr)
                                  (__this_01,pSVar25,(__this_01->klass->vtable)._21_Add.method);
                        __this_02 = il2cpp_codegen_object_new
                                              ((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONArray);
                        SimpleJSONFixed_JSONArray___ctor(__this_02,(MethodInfo *)0x0);
                        pSVar28 = (__this->fields)._mins_5__11;
                        if (pSVar28 != (System_Single_array *)0x0) {
                          if ((uint)pSVar28->max_length < 3) goto label_05b99e45;
                          pSVar25 = SimpleJSONFixed_JSONNode__op_Implicit_5763a50
                                              (pSVar28->m_Items[2],(MethodInfo *)0x0);
                          if (__this_02 != (SimpleJSONFixed_JSONArray_o *)0x0) {
                            (*(__this_02->klass->vtable)._21_Add.methodPtr)
                                      (__this_02,pSVar25,(__this_02->klass->vtable)._21_Add.method);
                            pSVar28 = (__this->fields)._maxes_5__12;
                            if (pSVar28 != (System_Single_array *)0x0) {
                              if ((uint)pSVar28->max_length < 3) goto label_05b99e45;
                              pSVar25 = SimpleJSONFixed_JSONNode__op_Implicit_5763a50
                                                  (pSVar28->m_Items[2],(MethodInfo *)0x0);
                              (*(__this_02->klass->vtable)._21_Add.methodPtr)
                                        (__this_02,pSVar25,(__this_02->klass->vtable)._21_Add.method);
                              if (pSVar26 != (SimpleJSONFixed_JSONObject_o *)0x0) {
                                (*(pSVar26->klass->vtable)._8_set_Item.methodPtr)
                                          (pSVar26,"X",(SimpleJSONFixed_JSONNode_o *)pSVar27
                                           ,(pSVar26->klass->vtable)._8_set_Item.method);
                                (*(pSVar26->klass->vtable)._8_set_Item.methodPtr)
                                          (pSVar26,"Y",
                                           (SimpleJSONFixed_JSONNode_o *)__this_01,
                                           (pSVar26->klass->vtable)._8_set_Item.method);
                                (*(pSVar26->klass->vtable)._8_set_Item.methodPtr)
                                          (pSVar26,"Z",
                                           (SimpleJSONFixed_JSONNode_o *)__this_02,
                                           (pSVar26->klass->vtable)._8_set_Item.method);
                                pSVar19 = (__this->fields)._newInfo_5__7;
                                if (pSVar19 != (SimpleJSONFixed_JSONObject_o *)0x0) {
                                  (*(pSVar19->klass->vtable)._8_set_Item.methodPtr)
                                            (pSVar19,"Ranges",
                                             (SimpleJSONFixed_JSONNode_o *)pSVar26,
                                             (pSVar19->klass->vtable)._8_set_Item.method);
                                  pSVar26 = (__this->fields)._newInfo_5__7;
                                  if (pSVar26 != (SimpleJSONFixed_JSONObject_o *)0x0) {
                                    (*(pSVar26->klass->vtable)._8_set_Item.methodPtr)
                                              (pSVar26,"Keyframes",
                                               (SimpleJSONFixed_JSONNode_o *)(__this->fields)._frames_5__8,
                                               (pSVar26->klass->vtable)._8_set_Item.method);
                                    pSVar25 = (__this->fields)._newData_5__3;
                                    if (pSVar25 != (SimpleJSONFixed_JSONNode_o *)0x0) {
                                      (*(pSVar25->klass->vtable)._8_set_Item.methodPtr)
                                                (pSVar25,(__this->fields)._attackName_5__6,
                                                 (SimpleJSONFixed_JSONNode_o *)(__this->fields)._newInfo_5__7,
                                                 (pSVar25->klass->vtable)._8_set_Item.method);
                                      pUVar31 = il2cpp_codegen_object_new
                                                          ((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds)
                                      ;
                                      UnityEngine_WaitForSeconds___ctor(pUVar31,0.5,(MethodInfo *)0x0);
                                      (__this->fields).__2__current = (Il2CppObject *)pUVar31;
                                      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
                                      (__this->fields).__1__state = 3;
                                      return true;
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
    break;
  case 3:
    (__this->fields).__1__state = -1;
    if ((((pCVar30 != (Controllers_DebugAttackKeyframes_o *)0x0) &&
         (pCVar13 = (pCVar30->fields)._titan, pCVar13 != (Characters_BaseTitan_o *)0x0)) &&
        (pUVar14 = (pCVar13->fields).Cache, pUVar14 != (Utility_BaseComponentCache_o *)0x0)) &&
       (pUVar15 = (pUVar14->fields).Transform, pUVar15 != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__set_position
                (pUVar15,(UnityEngine_Vector3_o)(__this->fields)._startPosition_5__10.fields,(MethodInfo *)0x0
                );
      pCVar13 = (pCVar30->fields)._titan;
      if ((pCVar13 != (Characters_BaseTitan_o *)0x0) &&
         (pUVar14 = (pCVar13->fields).Cache, pUVar14 != (Utility_BaseComponentCache_o *)0x0)) {
        pUVar15 = (pUVar14->fields).Transform;
        if (Il2CppMethodInitialized_0753e72b == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
          Il2CppMethodInitialized_0753e72b = '\x01';
        }
        if (pUVar15 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__set_rotation
                    (pUVar15,(UnityEngine_Quaternion_o)
                             *(UnityEngine_Quaternion_Fields *)TypeInfo_UnityEngine_Quaternion->static_fields,
                     (MethodInfo *)0x0);
          pUVar31 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
          UnityEngine_WaitForSeconds___ctor(pUVar31,0.5,(MethodInfo *)0x0);
          (__this->fields).__2__current = (Il2CppObject *)pUVar31;
          Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
          (__this->fields).__1__state = 4;
          return true;
        }
      }
    }
    break;
  case 4:
    (__this->fields).__1__state = -1;
    (__this->fields)._newInfo_5__7 = (SimpleJSONFixed_JSONObject_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._newInfo_5__7);
    (__this->fields)._frames_5__8 = (SimpleJSONFixed_JSONArray_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._frames_5__8);
    (__this->fields)._startPosition_5__10.fields.x = 0.0;
    (__this->fields)._startPosition_5__10.fields.y = 0.0;
    *(undefined8 *)&(__this->fields)._startPosition_5__10.fields.z = 0;
    *(undefined4 *)((long)&(__this->fields)._mins_5__11 + 4) = 0;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._mins_5__11);
    (__this->fields)._maxes_5__12 = (System_Single_array *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._maxes_5__12);
    targetAddress_01 =
         (System_Collections_Generic_Dictionary_Enumerator_string__JSONNode__o *)
         &(__this->fields)._attackName_5__6;
    (__this->fields)._attackName_5__6 = (System_String_o *)0x0;
label_05b99262:
    Il2CppCodeGenWriteBarrier((void **)targetAddress_01);
    pSVar1 = &(__this->fields).__7__wrap4;
    bVar21 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext(pSVar1,(MethodInfo *)0x0);
    if (bVar21) {
      targetAddress = &(__this->fields)._attackName_5__6;
      targetAddress_00 = &(__this->fields)._newInfo_5__7;
      do {
        pSVar24 = SimpleJSONFixed_JSONNode_KeyEnumerator__get_Current(pSVar1,(MethodInfo *)0x0);
        (__this->fields)._attackName_5__6 = pSVar24;
        Il2CppCodeGenWriteBarrier(targetAddress);
        pSVar25 = (__this->fields)._data_5__2;
        if (pSVar25 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05b99e40;
        pSVar25 = (*(pSVar25->klass->vtable)._7_get_Item.methodPtr)
                            (pSVar25,*targetAddress,(pSVar25->klass->vtable)._7_get_Item.method);
        pSVar26 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONObject);
        SimpleJSONFixed_JSONObject___ctor(pSVar26,(MethodInfo *)0x0);
        *targetAddress_00 = pSVar26;
        Il2CppCodeGenWriteBarrier(targetAddress_00);
        if ((pSVar25 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
           (pSVar25 = (*(pSVar25->klass->vtable)._7_get_Item.methodPtr)
                                (pSVar25,"Far",(pSVar25->klass->vtable)._7_get_Item.method),
           pSVar25 == (SimpleJSONFixed_JSONNode_o *)0x0)) goto label_05b99e40;
        cVar22 = (*(pSVar25->klass->vtable)._39_get_AsBool.methodPtr)(pSVar25);
        if ((cVar22 == '\0') &&
           (bVar21 = System_String__op_Equality(*targetAddress,"AttackBellyFlop",(MethodInfo *)0x0),
           !bVar21)) {
          pSVar27 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONArray);
          SimpleJSONFixed_JSONArray___ctor(pSVar27,(MethodInfo *)0x0);
          (__this->fields)._frames_5__8 = pSVar27;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._frames_5__8);
          fVar33 = UnityEngine_Time__get_fixedTime((MethodInfo *)0x0);
          (__this->fields)._startTime_5__9 = fVar33;
          if ((((pCVar30 == (Controllers_DebugAttackKeyframes_o *)0x0) ||
               (pCVar13 = (pCVar30->fields)._titan, pCVar13 == (Characters_BaseTitan_o *)0x0)) ||
              (pUVar14 = (pCVar13->fields).Cache, pUVar14 == (Utility_BaseComponentCache_o *)0x0)) ||
             (pUVar15 = (pUVar14->fields).Transform, pUVar15 == (UnityEngine_Transform_o *)0x0))
          goto label_05b99e40;
          UVar34 = UnityEngine_Transform__get_position(pUVar15,(MethodInfo *)0x0);
          (__this->fields)._startPosition_5__10.fields.x = UVar34.fields.x;
          (__this->fields)._startPosition_5__10.fields.y = UVar34.fields.y;
          (__this->fields)._startPosition_5__10.fields.z = UVar34.fields.z;
          pSVar28 = (System_Single_array *)SZArrayNew(TypeInfo_float_array,3);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_53cbb40
                    ((System_Array_o *)pSVar28,
                     FieldRva_PrivateImplementationDetails_CA37AD904FC6BEA9F844804EA32D830AC222F833C1C12C44DAD8B67745FAF4DF
                     ,(MethodInfo *)0x0);
          (__this->fields)._mins_5__11 = pSVar28;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._mins_5__11);
          pSVar28 = (System_Single_array *)SZArrayNew(TypeInfo_float_array,3);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_53cbb40
                    ((System_Array_o *)pSVar28,
                     FieldRva_PrivateImplementationDetails_DD6DFD036D588321FCD10D32CBA47D659057F3F8DA5C7AD402B7A50049F7EB84
                     ,(MethodInfo *)0x0);
          (__this->fields)._maxes_5__12 = pSVar28;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._maxes_5__12);
          pCVar13 = (pCVar30->fields)._titan;
          if (pCVar13 == (Characters_BaseTitan_o *)0x0) goto label_05b99e40;
          (*(pCVar13->klass->vtable)._150_Attack.methodPtr)
                    (pCVar13,(__this->fields)._attackName_5__6,(pCVar13->klass->vtable)._150_Attack.method);
          (__this->fields)._currFrame_5__13 = -100;
          pCVar13 = (pCVar30->fields)._titan;
          goto joined_r0x05b990d1;
        }
        bVar21 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext(pSVar1,(MethodInfo *)0x0);
      } while (bVar21);
    }
    (__this->fields).__7__wrap4.fields.m_Enumerator.fields.m_Array.fields._list =
         (System_Collections_Generic_List_T__o *)0x0;
    pSVar20 = &(__this->fields).__7__wrap4.fields.m_Enumerator;
    (pSVar20->fields).m_Array.fields._index = 0;
    (pSVar20->fields).m_Array.fields._version = 0;
    (__this->fields).__7__wrap4.fields.m_Enumerator.fields.m_Object.fields._current.fields.value =
         (Il2CppObject *)0x0;
    *(undefined8 *)
     &(__this->fields).__7__wrap4.fields.m_Enumerator.fields.m_Object.fields._getEnumeratorRetType = 0;
    pSVar20 = &(__this->fields).__7__wrap4.fields.m_Enumerator;
    (pSVar20->fields).m_Object.fields._version = 0;
    (pSVar20->fields).m_Object.fields._index = 0;
    (__this->fields).__7__wrap4.fields.m_Enumerator.fields.m_Object.fields._current.fields.key =
         (Il2CppObject *)0x0;
    *(undefined8 *)&(pSVar1->fields).m_Enumerator.fields = 0;
    (__this->fields).__7__wrap4.fields.m_Enumerator.fields.m_Object.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
    (__this->fields).__7__wrap4.fields.m_Enumerator.fields.m_Array.fields._current =
         (SimpleJSONFixed_JSONNode_o *)0x0;
    pSVar25 = (__this->fields)._newData_5__3;
    if (pSVar25 != (SimpleJSONFixed_JSONNode_o *)0x0) {
      pSVar24 = (*(pSVar25->klass->vtable)._30_ToString.methodPtr)
                          (pSVar25,4,(pSVar25->klass->vtable)._30_ToString.method);
      if ((TypeInfo_Utility_FolderPaths->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_FolderPaths);
      }
      path = System_String__Concat_52f0320
                       (TypeInfo_Utility_FolderPaths->static_fields->Documents,"/Keyframes.txt",
                        (MethodInfo *)0x0);
      System_IO_File__WriteAllText(path,pSVar24,(MethodInfo *)0x0);
      SStack_c0.fields.m_Enumerator.fields.type = (__this->fields)._total_5__4;
      message = il2cpp_vm_Object_Box(g_data_07556710,&SStack_c0);
      if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
      }
      UnityEngine_Debug__Log(message,(MethodInfo *)0x0);
      return false;
    }
  }
label_05b99e40:
  ThrowNullReferenceException();
}


// Controllers.DebugAttackKeyframes.<GenerateAttackFrames>d__3$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Controllers_DebugAttackKeyframes__GenerateAttackFrames_d__3__System_Collections_Generic_IEnumerator_System_Object__get_Current (Controllers_DebugAttackKeyframes__GenerateAttackFrames_d__3_o* __this, const MethodInfo* method);
// 0x5b99e50

Il2CppObject *
Controllers_DebugAttackKeyframes__GenerateAttackFrames_d__3__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Controllers_DebugAttackKeyframes__GenerateAttackFrames_d__3_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Controllers.DebugAttackKeyframes.<GenerateAttackFrames>d__3$$System.Collections.IEnumerator.Reset
// il2cpp: void Controllers_DebugAttackKeyframes__GenerateAttackFrames_d__3__System_Collections_IEnumerator_Reset (Controllers_DebugAttackKeyframes__GenerateAttackFrames_d__3_o* __this, const MethodInfo* method);
// 0x5b99e60

void Controllers_DebugAttackKeyframes__GenerateAttackFrames_d__3__System_Collections_IEnumerator_Reset
               (Controllers_DebugAttackKeyframes__GenerateAttackFrames_d__3_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&
                  MethodInfo_Controllers_DebugAttackKeyframes_GenerateAttackFrames_d__3_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Controllers.DebugAttackKeyframes.<GenerateAttackFrames>d__3$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Controllers_DebugAttackKeyframes__GenerateAttackFrames_d__3__System_Collections_IEnumerator_get_Current (Controllers_DebugAttackKeyframes__GenerateAttackFrames_d__3_o* __this, const MethodInfo* method);
// 0x5b99ea0

Il2CppObject *
Controllers_DebugAttackKeyframes__GenerateAttackFrames_d__3__System_Collections_IEnumerator_get_Current
          (Controllers_DebugAttackKeyframes__GenerateAttackFrames_d__3_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Controllers.DebugAttackKeyframes$$Awake
// il2cpp: void Controllers_DebugAttackKeyframes__Awake (Controllers_DebugAttackKeyframes_o* __this, const MethodInfo* method);
// 0x5b986e0

void Controllers_DebugAttackKeyframes__Awake(Controllers_DebugAttackKeyframes_o *__this,MethodInfo *method)

{
  Characters_BaseTitan_o **targetAddress;
  System_String_o **targetAddress_00;
  byte bVar1;
  byte bVar2;
  System_Collections_Generic_Dictionary_string__float__o *__this_00;
  Il2CppClass *pIVar3;
  Characters_BaseTitan_o *pCVar4;
  System_Type_o *pSVar5;
  System_String_o *pSVar6;
  Controllers_DebugAttackKeyframes__GenerateAttackFrames_d__3_o *__this_01;
  
  if (Il2CppMethodInitialized_0754743e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseShifter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BasicTitan);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_BaseTitan);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_float_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&"Characters.");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan");
    il2cpp_codegen_initialize_runtime_metadata(&"Shifter");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_0754743e = '\x01';
  }
  pCVar4 = UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)__this,
                      (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_BaseTitan);
  targetAddress = &(__this->fields)._titan;
  (__this->fields)._titan = pCVar4;
  Il2CppCodeGenWriteBarrier(targetAddress);
  pCVar4 = (__this->fields)._titan;
  if (pCVar4 != (Characters_BaseTitan_o *)0x0) {
    (pCVar4->fields).AttackSpeedMultiplier = 1.0;
    __this_00 = (pCVar4->fields).AttackSpeeds;
    if (__this_00 != (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
      System_Collections_Generic_Dictionary_object__float___Clear
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                 (MethodInfo_4AB5620 *)MethodInfo_System_Collections_Generic_Dictionary_string_float_Clear);
      pCVar4 = *targetAddress;
      if (pCVar4 != (Characters_BaseTitan_o *)0x0) {
        pIVar3 = (Il2CppClass *)pCVar4->klass;
        bVar1 = (pIVar3->_2).typeHierarchyDepth;
        bVar2 = (TypeInfo_Characters_BasicTitan->_2).typeHierarchyDepth;
        if ((bVar1 < bVar2) ||
           ((pIVar3->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)TypeInfo_Characters_BasicTitan)) {
          bVar2 = (TypeInfo_Characters_BaseShifter->_2).typeHierarchyDepth;
          if ((bVar1 < bVar2) ||
             ((pIVar3->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)TypeInfo_Characters_BaseShifter))
          goto label_05b988cb;
          pSVar5 = System_Object__GetType((Il2CppObject *)pCVar4,(MethodInfo *)0x0);
          if (pSVar5 == (System_Type_o *)0x0) goto label_05b9892c;
          pSVar6 = (*(pSVar5->klass->vtable)._3_ToString.methodPtr)
                             (pSVar5,(pSVar5->klass->vtable)._3_ToString.method);
          targetAddress_00 = &(__this->fields)._name;
          (__this->fields)._name = pSVar6;
          Il2CppCodeGenWriteBarrier(targetAddress_00);
          pSVar6 = (__this->fields)._name;
          if (pSVar6 == (System_String_o *)0x0) goto label_05b9892c;
          pSVar6 = System_String__Replace_5304550
                             (pSVar6,"Shifter","",(MethodInfo *)0x0);
          *targetAddress_00 = pSVar6;
          Il2CppCodeGenWriteBarrier(targetAddress_00);
          if (*targetAddress_00 == (System_String_o *)0x0) goto label_05b9892c;
          pSVar6 = System_String__Replace_5304550
                             (*targetAddress_00,"Characters.","",(MethodInfo *)0x0)
          ;
          *targetAddress_00 = pSVar6;
        }
        else {
          (__this->fields)._name = "Titan";
        }
        Il2CppCodeGenWriteBarrier(&(__this->fields)._name);
      }
label_05b988cb:
      if (Il2CppMethodInitialized_0754743f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_Controllers_DebugAttackKeyframes_GenerateAttackFrames_d__3);
        Il2CppMethodInitialized_0754743f = '\x01';
      }
      __this_01 = il2cpp_codegen_object_new
                            ((Il2CppClass *)
                             TypeInfo_Controllers_DebugAttackKeyframes_GenerateAttackFrames_d__3);
      System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
      (__this_01->fields).__1__state = 0;
      (__this_01->fields).__4__this = __this;
      Il2CppCodeGenWriteBarrier(&(__this_01->fields).__4__this);
      UnityEngine_MonoBehaviour__StartCoroutine_691c390
                ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_01,
                 (MethodInfo *)0x0);
      return;
    }
  }
label_05b9892c:
  ThrowNullReferenceException();
}


// Controllers.DebugAttackKeyframes$$GenerateAttackFrames
// il2cpp: System_Collections_IEnumerator_o* Controllers_DebugAttackKeyframes__GenerateAttackFrames (Controllers_DebugAttackKeyframes_o* __this, const MethodInfo* method);
// 0x5b98940

System_Collections_IEnumerator_o *
Controllers_DebugAttackKeyframes__GenerateAttackFrames
          (Controllers_DebugAttackKeyframes_o *__this,MethodInfo *method)

{
  Controllers_DebugAttackKeyframes__GenerateAttackFrames_d__3_o *__this_00;
  
  if (Il2CppMethodInitialized_0754743f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Controllers_DebugAttackKeyframes_GenerateAttackFrames_d__3);
    Il2CppMethodInitialized_0754743f = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Controllers_DebugAttackKeyframes_GenerateAttackFrames_d__3);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Controllers.DebugAttackKeyframes$$DebugCreateFrameJSON
// il2cpp: SimpleJSONFixed_JSONObject_o* Controllers_DebugAttackKeyframes__DebugCreateFrameJSON (Controllers_DebugAttackKeyframes_o* __this, int32_t frame, Characters_BaseHitbox_o* hitbox, System_Single_array* mins, System_Single_array* maxes, UnityEngine_Vector3_o position, const MethodInfo* method);
// 0x5b989d0

SimpleJSONFixed_JSONObject_o *
Controllers_DebugAttackKeyframes__DebugCreateFrameJSON
          (Controllers_DebugAttackKeyframes_o *__this,int32_t frame,Characters_BaseHitbox_o *hitbox,
          System_Single_array *mins,System_Single_array *maxes,UnityEngine_Vector3_o position,
          MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  UnityEngine_SphereCollider_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  SimpleJSONFixed_JSONObject_o *__this_02;
  SimpleJSONFixed_JSONNode_o *pSVar3;
  float fVar4;
  float fVar5;
  float n;
  UnityEngine_Vector3_o UVar6;
  float local_48;
  float fStack_44;
  float local_38;
  
  n = position.fields.z;
  if (Il2CppMethodInitialized_07547440 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_SphereCollider);
    il2cpp_codegen_initialize_runtime_metadata(&"x");
    il2cpp_codegen_initialize_runtime_metadata(&"f");
    il2cpp_codegen_initialize_runtime_metadata(&"y");
    il2cpp_codegen_initialize_runtime_metadata(&"z");
    il2cpp_codegen_initialize_runtime_metadata(&"r");
    Il2CppMethodInitialized_07547440 = '\x01';
  }
  if ((hitbox != (Characters_BaseHitbox_o *)0x0) &&
     (__this_00 = (UnityEngine_SphereCollider_o *)(hitbox->fields)._collider,
     __this_00 != (UnityEngine_SphereCollider_o *)0x0)) {
    bVar1 = (TypeInfo_UnityEngine_SphereCollider->_2).typeHierarchyDepth;
    if (((__this_00->klass->_2).typeHierarchyDepth < bVar1) ||
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_UnityEngine_SphereCollider)) {
      il2cpp_codegen_raise_invalid_cast_exception(__this_00);
    }
    fVar4 = UnityEngine_SphereCollider__get_radius(__this_00,(MethodInfo *)0x0);
    __this_01 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_Transform_o *)0x0) {
      UVar6 = UnityEngine_Transform__get_lossyScale(__this_01,(MethodInfo *)0x0);
      __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONObject);
      SimpleJSONFixed_JSONObject___ctor(__this_02,(MethodInfo *)0x0);
      if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
      }
      pSVar3 = SimpleJSONFixed_JSONNode__op_Implicit_5763b60(frame,(MethodInfo *)0x0);
      if (__this_02 != (SimpleJSONFixed_JSONObject_o *)0x0) {
        local_38 = UVar6.fields.x;
        fVar4 = fVar4 * local_38;
        (*(__this_02->klass->vtable)._8_set_Item.methodPtr)
                  (__this_02,"f",pSVar3,(__this_02->klass->vtable)._8_set_Item.method);
        pSVar3 = SimpleJSONFixed_JSONNode__op_Implicit_5763a50(fVar4,(MethodInfo *)0x0);
        (*(__this_02->klass->vtable)._8_set_Item.methodPtr)
                  (__this_02,"r",pSVar3,(__this_02->klass->vtable)._8_set_Item.method);
        local_48 = position.fields.x;
        pSVar3 = SimpleJSONFixed_JSONNode__op_Implicit_5763a50(local_48,(MethodInfo *)0x0);
        (*(__this_02->klass->vtable)._8_set_Item.methodPtr)
                  (__this_02,"x",pSVar3,(__this_02->klass->vtable)._8_set_Item.method);
        fStack_44 = position.fields.y;
        pSVar3 = SimpleJSONFixed_JSONNode__op_Implicit_5763a50(fStack_44,(MethodInfo *)0x0);
        (*(__this_02->klass->vtable)._8_set_Item.methodPtr)
                  (__this_02,"y",pSVar3,(__this_02->klass->vtable)._8_set_Item.method);
        pSVar3 = SimpleJSONFixed_JSONNode__op_Implicit_5763a50(n,(MethodInfo *)0x0);
        (*(__this_02->klass->vtable)._8_set_Item.methodPtr)
                  (__this_02,"z",pSVar3,(__this_02->klass->vtable)._8_set_Item.method);
        if (mins != (System_Single_array *)0x0) {
          uVar2 = (uint)mins->max_length;
          if (uVar2 != 0) {
            fVar5 = mins->m_Items[0];
            if (local_48 - fVar4 <= mins->m_Items[0]) {
              fVar5 = local_48 - fVar4;
            }
            mins->m_Items[0] = fVar5;
            if (uVar2 != 1) {
              fVar5 = mins->m_Items[1];
              if (fStack_44 - fVar4 <= mins->m_Items[1]) {
                fVar5 = fStack_44 - fVar4;
              }
              mins->m_Items[1] = fVar5;
              if (2 < uVar2) {
                fVar5 = mins->m_Items[2];
                if (n - fVar4 <= mins->m_Items[2]) {
                  fVar5 = n - fVar4;
                }
                mins->m_Items[2] = fVar5;
                if (maxes == (System_Single_array *)0x0) goto label_05b98cf1;
                uVar2 = (uint)maxes->max_length;
                if (uVar2 != 0) {
                  fVar5 = maxes->m_Items[0];
                  if (maxes->m_Items[0] <= local_48 + fVar4) {
                    fVar5 = local_48 + fVar4;
                  }
                  maxes->m_Items[0] = fVar5;
                  if (uVar2 != 1) {
                    fVar5 = maxes->m_Items[1];
                    if (maxes->m_Items[1] <= fStack_44 + fVar4) {
                      fVar5 = fStack_44 + fVar4;
                    }
                    maxes->m_Items[1] = fVar5;
                    if (2 < uVar2) {
                      fVar5 = maxes->m_Items[2];
                      if (maxes->m_Items[2] <= fVar4 + n) {
                        fVar5 = fVar4 + n;
                      }
                      maxes->m_Items[2] = fVar5;
                      return __this_02;
                    }
                  }
                }
              }
            }
          }
          ThrowIndexOutOfRangeException();
        }
      }
    }
  }
label_05b98cf1:
  ThrowNullReferenceException();
}


// Controllers.DebugAttackKeyframes$$.ctor
// il2cpp: void Controllers_DebugAttackKeyframes___ctor (Controllers_DebugAttackKeyframes_o* __this, const MethodInfo* method);
// 0x5b98d10

void Controllers_DebugAttackKeyframes___ctor(Controllers_DebugAttackKeyframes_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


