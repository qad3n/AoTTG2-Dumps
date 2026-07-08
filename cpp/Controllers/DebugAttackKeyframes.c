// Type: Controllers.DebugAttackKeyframes
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Controllers/DebugAttackKeyframes.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Characters/Titan/DebugAttackKeyframes.cs  [CHANGED since prior version]
// --------------------------------

// Controllers.DebugAttackKeyframes.<GenerateAttackFrames>d__3$$.ctor
// il2cpp: void Controllers_DebugAttackKeyframes__GenerateAttackFrames_d__3___ctor (Controllers_DebugAttackKeyframes__GenerateAttackFrames_d__3_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x3f7b680

void Controllers_DebugAttackKeyframes_<GenerateAttackFrames>d__3___ctor
               (Controllers_DebugAttackKeyframes__GenerateAttackFrames_d__3_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Controllers.DebugAttackKeyframes.<GenerateAttackFrames>d__3$$System.IDisposable.Dispose
// il2cpp: void Controllers_DebugAttackKeyframes__GenerateAttackFrames_d__3__System_IDisposable_Dispose (Controllers_DebugAttackKeyframes__GenerateAttackFrames_d__3_o* __this, const MethodInfo* method);
// 0x3f7b9f0

void Controllers_DebugAttackKeyframes_<GenerateAttackFrames>d__3__System_IDisposable_Dispose
               (Controllers_DebugAttackKeyframes__GenerateAttackFrames_d__3_o *__this,
               MethodInfo *method)

{
  return;
}


// Controllers.DebugAttackKeyframes.<GenerateAttackFrames>d__3$$MoveNext
// il2cpp: bool Controllers_DebugAttackKeyframes__GenerateAttackFrames_d__3__MoveNext (Controllers_DebugAttackKeyframes__GenerateAttackFrames_d__3_o* __this, const MethodInfo* method);
// 0x3f7ba00

bool_conflict
Controllers_DebugAttackKeyframes_<GenerateAttackFrames>d__3__MoveNext
          (Controllers_DebugAttackKeyframes__GenerateAttackFrames_d__3_o *__this,MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_KeyEnumerator_o *method_00;
  System_String_o **ppSVar1;
  SimpleJSONFixed_JSONObject_o **ppSVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Action_Hashtable__o *pSVar14;
  Characters_BaseHitbox_o *pCVar15;
  System_Single_array *pSVar16;
  System_Action_Hashtable__c *__this_01;
  Characters_BaseTitan_o *pCVar17;
  long lVar18;
  UnityEngine_Transform_o *pUVar19;
  SimpleJSONFixed_JSONObject_o *pSVar20;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_02;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_03;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_04;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_05;
  SimpleJSONFixed_JSONNode_Enumerator_o *pSVar21;
  char cVar22;
  bool_conflict bVar23;
  int iVar24;
  Controllers_DebugAttackKeyframes_o *pCVar25;
  System_String_o *pSVar26;
  long *plVar27;
  SimpleJSONFixed_JSONObject_o *pSVar28;
  SimpleJSONFixed_JSONArray_o *pSVar29;
  System_Single_array *pSVar30;
  System_String_o *path;
  Il2CppObject *pIVar31;
  SimpleJSONFixed_JSONNode_o *pSVar32;
  SimpleJSONFixed_JSONArray_o *__this_06;
  SimpleJSONFixed_JSONArray_o *__this_07;
  System_Single_array *unaff_RBX;
  System_Collections_Generic_Dictionary_Enumerator_string__JSONNode__o *pSVar33;
  MethodInfo *in_R9;
  int iVar34;
  float fVar35;
  UnityEngine_Vector3_o position;
  UnityEngine_Vector3_o position_00;
  UnityEngine_Vector3_o position_01;
  UnityEngine_Vector3_o position_02;
  UnityEngine_Vector3_o position_03;
  UnityEngine_Vector3_o UVar36;
  undefined8 in_stack_fffffffffffffed8;
  undefined4 uVar37;
  undefined4 uVar38;
  int32_t in_stack_fffffffffffffee8;
  undefined4 in_stack_fffffffffffffeec;
  undefined4 in_stack_fffffffffffffef0;
  undefined4 in_stack_fffffffffffffef4;
  InvokerMethod in_stack_fffffffffffffef8;
  Il2CppObject *in_stack_ffffffffffffff00;
  Il2CppClass *in_stack_ffffffffffffff08;
  Il2CppType *in_stack_ffffffffffffff10;
  System_Collections_Generic_List_T__o *in_stack_ffffffffffffff18;
  _union_13 _Stack_e0;
  _union_14 _Stack_d8;
  undefined1 auStack_c8 [88];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  InvokerMethod pIStack_68;
  Il2CppObject *pIStack_60;
  Il2CppClass *pIStack_58;
  Il2CppType *pIStack_50;
  System_Collections_Generic_List_T__o *pSStack_48;
  undefined8 uStack_40;
  SimpleJSONFixed_JSONNode_o *pSStack_38;
  
  if (DAT_05703f4c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterData);
    il2cpp_init_method_metadata(&TypeInfo_Debug);
    il2cpp_init_method_metadata(&MethodInfo_JSONNode_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_FolderPaths);
    il2cpp_init_method_metadata(&TypeInfo_JSONArray);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_JSONObject);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_float);
    il2cpp_init_method_metadata(&fld_CA37AD904FC6BEA9F844804EA32D830AC222F833C1C12C44);
    il2cpp_init_method_metadata(&fld_DD6DFD036D588321FCD10D32CBA47D659057F3F8DA5C7AD4);
    il2cpp_init_method_metadata(&TypeInfo_WaitForSeconds);
    il2cpp_init_method_metadata(&"AttackBellyFlop");
    il2cpp_init_method_metadata(&"Ranges");
    il2cpp_init_method_metadata(&"Z");
    il2cpp_init_method_metadata(&"Keyframes");
    il2cpp_init_method_metadata(&"Far");
    il2cpp_init_method_metadata(&"AttackInfo");
    il2cpp_init_method_metadata(&"Y");
    il2cpp_init_method_metadata(&"X");
    il2cpp_init_method_metadata();
    DAT_05703f4c = '\x01';
  }
  auStack_c8._48_8_ = (System_Collections_Generic_List_T__o *)0x0;
  auStack_c8._56_8_ = (Il2CppRGCTXData *)0x0;
  auStack_c8._32_8_ = (Il2CppClass *)0x0;
  auStack_c8._40_8_ = (Il2CppType *)0x0;
  auStack_c8._16_8_ = (InvokerMethod)0x0;
  auStack_c8._24_8_ = (Il2CppObject *)0x0;
  auStack_c8._0_8_ = (Il2CppMethodPointer)0x0;
  auStack_c8._8_8_ = (Il2CppMethodPointer)0x0;
  auStack_c8._64_8_ = (SimpleJSONFixed_JSONNode_o *)0x0;
  uVar13 = (__this->fields).__1__state;
  if (4 < uVar13) {
    return 0;
  }
  pCVar25 = (__this->fields).__4__this;
  uVar37 = SUB84(pCVar25,0);
  uVar38 = (undefined4)((ulong)pCVar25 >> 0x20);
  switch(uVar13) {
  case 0:
    (__this->fields).__1__state = -1;
    if (*(int *)(TypeInfo_CharacterData + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (((pCVar25 != (Controllers_DebugAttackKeyframes_o *)0x0) &&
        (__this_00 = *(System_Collections_Generic_Dictionary_object__object__o **)
                      (*(long *)(TypeInfo_CharacterData + 0xb8) + 8),
        __this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) &&
       (pIVar31 = System_Collections_Generic_Dictionary<object__object>__get_Item
                            (__this_00,(Il2CppObject *)(pCVar25->fields)._name,MethodInfo_JSONNode_get_Item),
       pIVar31 != (Il2CppObject *)0x0)) {
      pSVar32 = (SimpleJSONFixed_JSONNode_o *)
                (*pIVar31->klass->vtable[7].methodPtr)
                          (pIVar31,"AttackInfo",pIVar31->klass->vtable[7].method);
      (__this->fields)._data_5__2 = pSVar32;
      il2cpp_runtime_glue(&(__this->fields)._data_5__2);
      pSVar28 = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_glue(TypeInfo_JSONObject);
      SimpleJSONFixed_JSONObject___ctor(pSVar28,(MethodInfo *)0x0);
      (__this->fields)._newData_5__3 = (SimpleJSONFixed_JSONNode_o *)pSVar28;
      il2cpp_runtime_glue(&(__this->fields)._newData_5__3);
      pCVar17 = (pCVar25->fields)._titan;
      if ((pCVar17 != (Characters_BaseTitan_o *)0x0) &&
         (lVar18 = *(long *)&(pCVar17->fields).Dead, lVar18 != 0)) {
        pUVar19 = *(UnityEngine_Transform_o **)(lVar18 + 0x10);
        if (DAT_056fde1e == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Quaternion);
          DAT_056fde1e = '\x01';
        }
        if (pUVar19 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__set_rotation
                    (pUVar19,(UnityEngine_Quaternion_o)
                             **(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8),
                     (MethodInfo *)0x0);
          unaff_RBX = (System_Single_array *)il2cpp_runtime_glue(TypeInfo_WaitForSeconds);
          UnityEngine_WaitForSeconds___ctor
                    ((UnityEngine_WaitForSeconds_o *)unaff_RBX,1.0,(MethodInfo *)0x0);
          (__this->fields).__2__current = (Il2CppObject *)unaff_RBX;
          il2cpp_runtime_glue(&(__this->fields).__2__current,unaff_RBX);
          (__this->fields).__1__state = 1;
LAB_03f7cb0d:
          return (bool_conflict)CONCAT71((int7)((ulong)unaff_RBX >> 8),1);
        }
      }
    }
    break;
  case 1:
    (__this->fields).__1__state = -1;
    (__this->fields)._total_5__4 = 0;
    pSVar32 = (__this->fields)._data_5__2;
    if (pSVar32 == (SimpleJSONFixed_JSONNode_o *)0x0) break;
    SimpleJSONFixed_JSONNode__get_Keys
              ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&stack0xfffffffffffffee8,pSVar32,
               (MethodInfo *)0x0);
    auStack_c8._64_8_ = _Stack_d8;
    auStack_c8._0_8_ = CONCAT44(in_stack_fffffffffffffeec,in_stack_fffffffffffffee8);
    auStack_c8._8_8_ = CONCAT44(in_stack_fffffffffffffef4,in_stack_fffffffffffffef0);
    auStack_c8._56_8_ = _Stack_e0;
    __this_02.fields.m_Enumerator.fields.m_Object.fields._dictionary._0_4_ = uVar37;
    __this_02.fields.m_Enumerator.fields._0_8_ = in_stack_fffffffffffffed8;
    __this_02.fields.m_Enumerator.fields.m_Object.fields._dictionary._4_4_ = uVar38;
    __this_02.fields.m_Enumerator.fields.m_Object.fields._version = in_stack_fffffffffffffee8;
    __this_02.fields.m_Enumerator.fields.m_Object.fields._index = in_stack_fffffffffffffeec;
    __this_02.fields.m_Enumerator.fields.m_Object.fields._current.fields.key._0_4_ =
         in_stack_fffffffffffffef0;
    __this_02.fields.m_Enumerator.fields.m_Object.fields._current.fields.key._4_4_ =
         in_stack_fffffffffffffef4;
    __this_02.fields.m_Enumerator.fields.m_Object.fields._current.fields.value =
         (Il2CppObject *)in_stack_fffffffffffffef8;
    __this_02.fields.m_Enumerator.fields.m_Object.fields._32_8_ = in_stack_ffffffffffffff00;
    __this_02.fields.m_Enumerator.fields.m_Array.fields._list =
         (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff08;
    __this_02.fields.m_Enumerator.fields.m_Array.fields._8_8_ = in_stack_ffffffffffffff10;
    __this_02.fields.m_Enumerator.fields.m_Array.fields._current =
         (SimpleJSONFixed_JSONNode_o *)in_stack_ffffffffffffff18;
    auStack_c8._16_8_ = in_stack_fffffffffffffef8;
    auStack_c8._24_8_ = in_stack_ffffffffffffff00;
    auStack_c8._32_8_ = in_stack_ffffffffffffff08;
    auStack_c8._40_8_ = in_stack_ffffffffffffff10;
    auStack_c8._48_8_ = in_stack_ffffffffffffff18;
    SimpleJSONFixed_JSONNode_KeyEnumerator__GetEnumerator
              ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)(auStack_c8 + 0x50),__this_02,
               (MethodInfo *)auStack_c8);
    (__this->fields).__7__wrap4.fields.m_Enumerator.fields.m_Array.fields._current = pSStack_38;
    (__this->fields).__7__wrap4.fields.m_Enumerator.fields.m_Array.fields._list = pSStack_48;
    pSVar21 = &(__this->fields).__7__wrap4.fields.m_Enumerator;
    (pSVar21->fields).m_Array.fields._index = (undefined4)uStack_40;
    (pSVar21->fields).m_Array.fields._version = uStack_40._4_4_;
    (__this->fields).__7__wrap4.fields.m_Enumerator.fields.m_Object.fields._current.fields.value =
         (Il2CppObject *)pIStack_58;
    *(Il2CppType **)
     &(__this->fields).__7__wrap4.fields.m_Enumerator.fields.m_Object.fields._getEnumeratorRetType =
         pIStack_50;
    *(InvokerMethod *)
     &(__this->fields).__7__wrap4.fields.m_Enumerator.fields.m_Object.fields._version = pIStack_68;
    (__this->fields).__7__wrap4.fields.m_Enumerator.fields.m_Object.fields._current.fields.key =
         pIStack_60;
    (__this->fields).__7__wrap4.fields.m_Enumerator.fields.type = auStack_c8._80_4_;
    *(undefined4 *)&(__this->fields).__7__wrap4.fields.m_Enumerator.fields.field_0x4 =
         auStack_c8._84_4_;
    *(undefined4 *)
     &(__this->fields).__7__wrap4.fields.m_Enumerator.fields.m_Object.fields._dictionary = uStack_70
    ;
    *(undefined4 *)
     ((long)&(__this->fields).__7__wrap4.fields.m_Enumerator.fields.m_Object.fields._dictionary + 4)
         = uStack_6c;
    pSVar33 = &(__this->fields).__7__wrap4.fields.m_Enumerator.fields.m_Object;
    in_stack_fffffffffffffee8 = auStack_c8._80_4_;
    in_stack_fffffffffffffeec = auStack_c8._84_4_;
    in_stack_fffffffffffffef0 = uStack_70;
    in_stack_fffffffffffffef4 = uStack_6c;
    in_stack_fffffffffffffef8 = pIStack_68;
    in_stack_ffffffffffffff00 = pIStack_60;
    in_stack_ffffffffffffff08 = pIStack_58;
    in_stack_ffffffffffffff10 = pIStack_50;
    in_stack_ffffffffffffff18 = pSStack_48;
    goto LAB_03f7c462;
  case 2:
    (__this->fields).__1__state = -1;
    if (pCVar25 != (Controllers_DebugAttackKeyframes_o *)0x0) {
      pCVar17 = (pCVar25->fields)._titan;
joined_r0x03f7bd70:
      if (pCVar17 != (Characters_BaseTitan_o *)0x0) {
        if (*(int *)&(pCVar17->fields).OutlineComponent == 10) {
          fVar35 = UnityEngine_Time__get_fixedTime((MethodInfo *)0x0);
          iVar34 = (int)((fVar35 - (__this->fields)._startTime_5__9) * 50.0);
          if ((__this->fields)._currFrame_5__13 < iVar34) {
            (__this->fields)._currFrame_5__13 = iVar34;
            pCVar17 = (pCVar25->fields)._titan;
            if (((pCVar17 == (Characters_BaseTitan_o *)0x0) ||
                (pSVar14 = (pCVar17->fields).OnPlayerPropertiesChanged,
                pSVar14 == (System_Action_Hashtable__o *)0x0)) ||
               (pCVar15 = pSVar14[1].monitor, pCVar15 == (Characters_BaseHitbox_o *)0x0)) break;
            bVar23 = Characters_BaseHitbox__IsActive(pCVar15,(MethodInfo *)0x0);
            uVar37 = SUB84(pCVar25,0);
            uVar38 = (undefined4)((ulong)pCVar25 >> 0x20);
            if ((char)bVar23 != '\0') {
              pCVar17 = (pCVar25->fields)._titan;
              if (((pCVar17 == (Characters_BaseTitan_o *)0x0) ||
                  (pSVar14 = (pCVar17->fields).OnPlayerPropertiesChanged,
                  pSVar14 == (System_Action_Hashtable__o *)0x0)) ||
                 (pCVar15 = pSVar14[1].monitor, pCVar15 == (Characters_BaseHitbox_o *)0x0)) break;
              pSVar29 = (__this->fields)._frames_5__8;
              pSVar30 = (__this->fields)._mins_5__11;
              pSVar16 = (__this->fields)._maxes_5__12;
              pCVar25 = (Controllers_DebugAttackKeyframes_o *)
                        UnityEngine_Component__get_transform
                                  ((UnityEngine_Component_o *)pCVar15,(MethodInfo *)0x0);
              if (pCVar25 == (Controllers_DebugAttackKeyframes_o *)0x0) break;
              UVar36 = UnityEngine_Transform__get_position
                                 ((UnityEngine_Transform_o *)pCVar25,(MethodInfo *)0x0);
              uVar3 = (__this->fields)._startPosition_5__10.fields.x;
              uVar8 = (__this->fields)._startPosition_5__10.fields.y;
              position.fields.x = UVar36.fields.x - (float)uVar3;
              position.fields.y = UVar36.fields.y - (float)uVar8;
              position.fields.z = UVar36.fields.z - (__this->fields)._startPosition_5__10.fields.z;
              pSVar28 = Controllers_DebugAttackKeyframes__DebugCreateFrameJSON
                                  (pCVar25,iVar34,pCVar15,pSVar30,pSVar16,position,in_R9);
              if (pSVar29 == (SimpleJSONFixed_JSONArray_o *)0x0) break;
              (*(pSVar29->klass->vtable)._21_Add.methodPtr)
                        (pSVar29,pSVar28,(pSVar29->klass->vtable)._21_Add.method);
              pCVar25 = (Controllers_DebugAttackKeyframes_o *)CONCAT44(uVar38,uVar37);
            }
            pCVar17 = (pCVar25->fields)._titan;
            if (((pCVar17 == (Characters_BaseTitan_o *)0x0) ||
                (pSVar14 = (pCVar17->fields).OnPlayerPropertiesChanged,
                pSVar14 == (System_Action_Hashtable__o *)0x0)) ||
               (pCVar15 = (Characters_BaseHitbox_o *)pSVar14[1].fields.method_ptr,
               pCVar15 == (Characters_BaseHitbox_o *)0x0)) break;
            bVar23 = Characters_BaseHitbox__IsActive(pCVar15,(MethodInfo *)0x0);
            if ((char)bVar23 != '\0') {
              pCVar17 = (pCVar25->fields)._titan;
              if (((pCVar17 == (Characters_BaseTitan_o *)0x0) ||
                  (pSVar14 = (pCVar17->fields).OnPlayerPropertiesChanged,
                  pSVar14 == (System_Action_Hashtable__o *)0x0)) ||
                 (pCVar15 = (Characters_BaseHitbox_o *)pSVar14[1].fields.method_ptr,
                 pCVar15 == (Characters_BaseHitbox_o *)0x0)) break;
              pSVar29 = (__this->fields)._frames_5__8;
              pSVar30 = (__this->fields)._mins_5__11;
              pSVar16 = (__this->fields)._maxes_5__12;
              pCVar25 = (Controllers_DebugAttackKeyframes_o *)
                        UnityEngine_Component__get_transform
                                  ((UnityEngine_Component_o *)pCVar15,(MethodInfo *)0x0);
              if (pCVar25 == (Controllers_DebugAttackKeyframes_o *)0x0) break;
              UVar36 = UnityEngine_Transform__get_position
                                 ((UnityEngine_Transform_o *)pCVar25,(MethodInfo *)0x0);
              uVar4 = (__this->fields)._startPosition_5__10.fields.x;
              uVar9 = (__this->fields)._startPosition_5__10.fields.y;
              position_00.fields.x = UVar36.fields.x - (float)uVar4;
              position_00.fields.y = UVar36.fields.y - (float)uVar9;
              position_00.fields.z =
                   UVar36.fields.z - (__this->fields)._startPosition_5__10.fields.z;
              pSVar28 = Controllers_DebugAttackKeyframes__DebugCreateFrameJSON
                                  (pCVar25,iVar34,pCVar15,pSVar30,pSVar16,position_00,in_R9);
              if (pSVar29 == (SimpleJSONFixed_JSONArray_o *)0x0) break;
              (*(pSVar29->klass->vtable)._21_Add.methodPtr)
                        (pSVar29,pSVar28,(pSVar29->klass->vtable)._21_Add.method);
              pCVar25 = (Controllers_DebugAttackKeyframes_o *)CONCAT44(uVar38,uVar37);
            }
            pCVar17 = (pCVar25->fields)._titan;
            if (((pCVar17 == (Characters_BaseTitan_o *)0x0) ||
                (pSVar14 = (pCVar17->fields).OnPlayerPropertiesChanged,
                pSVar14 == (System_Action_Hashtable__o *)0x0)) ||
               (pCVar15 = (Characters_BaseHitbox_o *)pSVar14[1].fields.invoke_impl,
               pCVar15 == (Characters_BaseHitbox_o *)0x0)) break;
            bVar23 = Characters_BaseHitbox__IsActive(pCVar15,(MethodInfo *)0x0);
            if ((char)bVar23 != '\0') {
              pCVar17 = (pCVar25->fields)._titan;
              if (((pCVar17 == (Characters_BaseTitan_o *)0x0) ||
                  (pSVar14 = (pCVar17->fields).OnPlayerPropertiesChanged,
                  pSVar14 == (System_Action_Hashtable__o *)0x0)) ||
                 (pCVar15 = (Characters_BaseHitbox_o *)pSVar14[1].fields.invoke_impl,
                 pCVar15 == (Characters_BaseHitbox_o *)0x0)) break;
              pSVar29 = (__this->fields)._frames_5__8;
              pSVar30 = (__this->fields)._mins_5__11;
              pSVar16 = (__this->fields)._maxes_5__12;
              pCVar25 = (Controllers_DebugAttackKeyframes_o *)
                        UnityEngine_Component__get_transform
                                  ((UnityEngine_Component_o *)pCVar15,(MethodInfo *)0x0);
              if (pCVar25 == (Controllers_DebugAttackKeyframes_o *)0x0) break;
              UVar36 = UnityEngine_Transform__get_position
                                 ((UnityEngine_Transform_o *)pCVar25,(MethodInfo *)0x0);
              uVar5 = (__this->fields)._startPosition_5__10.fields.x;
              uVar10 = (__this->fields)._startPosition_5__10.fields.y;
              position_01.fields.x = UVar36.fields.x - (float)uVar5;
              position_01.fields.y = UVar36.fields.y - (float)uVar10;
              position_01.fields.z =
                   UVar36.fields.z - (__this->fields)._startPosition_5__10.fields.z;
              pSVar28 = Controllers_DebugAttackKeyframes__DebugCreateFrameJSON
                                  (pCVar25,iVar34,pCVar15,pSVar30,pSVar16,position_01,in_R9);
              if (pSVar29 == (SimpleJSONFixed_JSONArray_o *)0x0) break;
              (*(pSVar29->klass->vtable)._21_Add.methodPtr)
                        (pSVar29,pSVar28,(pSVar29->klass->vtable)._21_Add.method);
              pCVar25 = (Controllers_DebugAttackKeyframes_o *)CONCAT44(uVar38,uVar37);
            }
            pCVar17 = (pCVar25->fields)._titan;
            if (((pCVar17 == (Characters_BaseTitan_o *)0x0) ||
                (pSVar14 = (pCVar17->fields).OnPlayerPropertiesChanged,
                pSVar14 == (System_Action_Hashtable__o *)0x0)) ||
               (pCVar15 = (Characters_BaseHitbox_o *)pSVar14[1].fields.m_target,
               pCVar15 == (Characters_BaseHitbox_o *)0x0)) break;
            bVar23 = Characters_BaseHitbox__IsActive(pCVar15,(MethodInfo *)0x0);
            if ((char)bVar23 != '\0') {
              pCVar17 = (pCVar25->fields)._titan;
              if (((pCVar17 == (Characters_BaseTitan_o *)0x0) ||
                  (pSVar14 = (pCVar17->fields).OnPlayerPropertiesChanged,
                  pSVar14 == (System_Action_Hashtable__o *)0x0)) ||
                 (pCVar15 = (Characters_BaseHitbox_o *)pSVar14[1].fields.m_target,
                 pCVar15 == (Characters_BaseHitbox_o *)0x0)) break;
              pSVar29 = (__this->fields)._frames_5__8;
              pSVar30 = (__this->fields)._mins_5__11;
              pSVar16 = (__this->fields)._maxes_5__12;
              pCVar25 = (Controllers_DebugAttackKeyframes_o *)
                        UnityEngine_Component__get_transform
                                  ((UnityEngine_Component_o *)pCVar15,(MethodInfo *)0x0);
              if (pCVar25 == (Controllers_DebugAttackKeyframes_o *)0x0) break;
              UVar36 = UnityEngine_Transform__get_position
                                 ((UnityEngine_Transform_o *)pCVar25,(MethodInfo *)0x0);
              uVar6 = (__this->fields)._startPosition_5__10.fields.x;
              uVar11 = (__this->fields)._startPosition_5__10.fields.y;
              position_02.fields.x = UVar36.fields.x - (float)uVar6;
              position_02.fields.y = UVar36.fields.y - (float)uVar11;
              position_02.fields.z =
                   UVar36.fields.z - (__this->fields)._startPosition_5__10.fields.z;
              pSVar28 = Controllers_DebugAttackKeyframes__DebugCreateFrameJSON
                                  (pCVar25,iVar34,pCVar15,pSVar30,pSVar16,position_02,in_R9);
              if (pSVar29 == (SimpleJSONFixed_JSONArray_o *)0x0) break;
              (*(pSVar29->klass->vtable)._21_Add.methodPtr)
                        (pSVar29,pSVar28,(pSVar29->klass->vtable)._21_Add.method);
              pCVar25 = (Controllers_DebugAttackKeyframes_o *)CONCAT44(uVar38,uVar37);
            }
            pCVar17 = (pCVar25->fields)._titan;
            if ((pCVar17 == (Characters_BaseTitan_o *)0x0) ||
               (pSVar14 = (pCVar17->fields).OnPlayerPropertiesChanged,
               pSVar14 == (System_Action_Hashtable__o *)0x0)) break;
            unaff_RBX = (System_Single_array *)pSVar14[1].klass;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_init_class();
            }
            bVar23 = UnityEngine_Object__op_Inequality
                               ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)0x0,
                                (MethodInfo *)0x0);
            if ((char)bVar23 != '\0') {
              pCVar17 = (pCVar25->fields)._titan;
              if (((pCVar17 == (Characters_BaseTitan_o *)0x0) ||
                  (pSVar14 = (pCVar17->fields).OnPlayerPropertiesChanged,
                  pSVar14 == (System_Action_Hashtable__o *)0x0)) ||
                 (__this_01 = pSVar14[1].klass, __this_01 == (System_Action_Hashtable__c *)0x0))
              break;
              bVar23 = Characters_BaseHitbox__IsActive
                                 ((Characters_BaseHitbox_o *)__this_01,(MethodInfo *)0x0);
              if ((char)bVar23 != '\0') {
                pCVar17 = (pCVar25->fields)._titan;
                if (((pCVar17 == (Characters_BaseTitan_o *)0x0) ||
                    (pSVar14 = (pCVar17->fields).OnPlayerPropertiesChanged,
                    pSVar14 == (System_Action_Hashtable__o *)0x0)) ||
                   (unaff_RBX = (System_Single_array *)pSVar14[1].klass,
                   unaff_RBX == (System_Single_array *)0x0)) break;
                pSVar29 = (__this->fields)._frames_5__8;
                pSVar30 = (__this->fields)._mins_5__11;
                pSVar16 = (__this->fields)._maxes_5__12;
                pCVar25 = (Controllers_DebugAttackKeyframes_o *)
                          UnityEngine_Component__get_transform
                                    ((UnityEngine_Component_o *)unaff_RBX,(MethodInfo *)0x0);
                if (pCVar25 == (Controllers_DebugAttackKeyframes_o *)0x0) break;
                UVar36 = UnityEngine_Transform__get_position
                                   ((UnityEngine_Transform_o *)pCVar25,(MethodInfo *)0x0);
                uVar7 = (__this->fields)._startPosition_5__10.fields.x;
                uVar12 = (__this->fields)._startPosition_5__10.fields.y;
                position_03.fields.x = UVar36.fields.x - (float)uVar7;
                position_03.fields.y = UVar36.fields.y - (float)uVar12;
                position_03.fields.z =
                     UVar36.fields.z - (__this->fields)._startPosition_5__10.fields.z;
                pSVar28 = Controllers_DebugAttackKeyframes__DebugCreateFrameJSON
                                    (pCVar25,iVar34,(Characters_BaseHitbox_o *)unaff_RBX,pSVar30,
                                     pSVar16,position_03,in_R9);
                if (pSVar29 == (SimpleJSONFixed_JSONArray_o *)0x0) break;
                (*(pSVar29->klass->vtable)._21_Add.methodPtr)
                          (pSVar29,pSVar28,(pSVar29->klass->vtable)._21_Add.method);
              }
            }
          }
          (__this->fields).__2__current = (Il2CppObject *)0x0;
          il2cpp_runtime_glue(&(__this->fields).__2__current,0);
          (__this->fields).__1__state = 2;
          goto LAB_03f7cb0d;
        }
        pSVar29 = (__this->fields)._frames_5__8;
        if (pSVar29 != (SimpleJSONFixed_JSONArray_o *)0x0) {
          iVar34 = (__this->fields)._total_5__4;
          iVar24 = (*(pSVar29->klass->vtable)._11_get_Count.methodPtr)();
          (__this->fields)._total_5__4 = iVar24 + iVar34;
          pSVar28 = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_glue(TypeInfo_JSONObject);
          SimpleJSONFixed_JSONObject___ctor(pSVar28,(MethodInfo *)0x0);
          pSVar29 = (SimpleJSONFixed_JSONArray_o *)il2cpp_runtime_glue(TypeInfo_JSONArray);
          SimpleJSONFixed_JSONArray___ctor(pSVar29,(MethodInfo *)0x0);
          pSVar30 = (__this->fields)._mins_5__11;
          if (pSVar30 != (System_Single_array *)0x0) {
            if ((int)pSVar30->max_length == 0) goto LAB_03f7cb28;
            fVar35 = pSVar30->m_Items[0];
            if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar32 = SimpleJSONFixed_JSONNode__op_Implicit(fVar35,(MethodInfo *)0x0);
            if (pSVar29 != (SimpleJSONFixed_JSONArray_o *)0x0) {
              (*(pSVar29->klass->vtable)._21_Add.methodPtr)
                        (pSVar29,pSVar32,(pSVar29->klass->vtable)._21_Add.method);
              pSVar30 = (__this->fields)._maxes_5__12;
              if (pSVar30 != (System_Single_array *)0x0) {
                if ((int)pSVar30->max_length == 0) {
LAB_03f7cb28:
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                pSVar32 = SimpleJSONFixed_JSONNode__op_Implicit
                                    (pSVar30->m_Items[0],(MethodInfo *)0x0);
                (*(pSVar29->klass->vtable)._21_Add.methodPtr)
                          (pSVar29,pSVar32,(pSVar29->klass->vtable)._21_Add.method);
                __this_06 = (SimpleJSONFixed_JSONArray_o *)il2cpp_runtime_glue(TypeInfo_JSONArray);
                SimpleJSONFixed_JSONArray___ctor(__this_06,(MethodInfo *)0x0);
                pSVar30 = (__this->fields)._mins_5__11;
                if (pSVar30 != (System_Single_array *)0x0) {
                  if ((uint)pSVar30->max_length < 2) goto LAB_03f7cb28;
                  pSVar32 = SimpleJSONFixed_JSONNode__op_Implicit
                                      (pSVar30->m_Items[1],(MethodInfo *)0x0);
                  if (__this_06 != (SimpleJSONFixed_JSONArray_o *)0x0) {
                    (*(__this_06->klass->vtable)._21_Add.methodPtr)
                              (__this_06,pSVar32,(__this_06->klass->vtable)._21_Add.method);
                    pSVar30 = (__this->fields)._maxes_5__12;
                    if (pSVar30 != (System_Single_array *)0x0) {
                      if ((uint)pSVar30->max_length < 2) goto LAB_03f7cb28;
                      pSVar32 = SimpleJSONFixed_JSONNode__op_Implicit
                                          (pSVar30->m_Items[1],(MethodInfo *)0x0);
                      (*(__this_06->klass->vtable)._21_Add.methodPtr)
                                (__this_06,pSVar32,(__this_06->klass->vtable)._21_Add.method);
                      __this_07 = (SimpleJSONFixed_JSONArray_o *)il2cpp_runtime_glue(TypeInfo_JSONArray);
                      SimpleJSONFixed_JSONArray___ctor(__this_07,(MethodInfo *)0x0);
                      pSVar30 = (__this->fields)._mins_5__11;
                      if (pSVar30 != (System_Single_array *)0x0) {
                        if ((uint)pSVar30->max_length < 3) goto LAB_03f7cb28;
                        pSVar32 = SimpleJSONFixed_JSONNode__op_Implicit
                                            (pSVar30->m_Items[2],(MethodInfo *)0x0);
                        if (__this_07 != (SimpleJSONFixed_JSONArray_o *)0x0) {
                          (*(__this_07->klass->vtable)._21_Add.methodPtr)
                                    (__this_07,pSVar32,(__this_07->klass->vtable)._21_Add.method);
                          pSVar30 = (__this->fields)._maxes_5__12;
                          if (pSVar30 != (System_Single_array *)0x0) {
                            if ((uint)pSVar30->max_length < 3) goto LAB_03f7cb28;
                            pSVar32 = SimpleJSONFixed_JSONNode__op_Implicit
                                                (pSVar30->m_Items[2],(MethodInfo *)0x0);
                            (*(__this_07->klass->vtable)._21_Add.methodPtr)
                                      (__this_07,pSVar32,(__this_07->klass->vtable)._21_Add.method);
                            if (pSVar28 != (SimpleJSONFixed_JSONObject_o *)0x0) {
                              (*(pSVar28->klass->vtable)._8_set_Item.methodPtr)
                                        (pSVar28,"X",pSVar29,
                                         (pSVar28->klass->vtable)._8_set_Item.method);
                              (*(pSVar28->klass->vtable)._8_set_Item.methodPtr)
                                        (pSVar28,"Y",__this_06,
                                         (pSVar28->klass->vtable)._8_set_Item.method);
                              (*(pSVar28->klass->vtable)._8_set_Item.methodPtr)
                                        (pSVar28,"Z",__this_07,
                                         (pSVar28->klass->vtable)._8_set_Item.method);
                              pSVar20 = (__this->fields)._newInfo_5__7;
                              if (pSVar20 != (SimpleJSONFixed_JSONObject_o *)0x0) {
                                (*(pSVar20->klass->vtable)._8_set_Item.methodPtr)
                                          (pSVar20,"Ranges",pSVar28,
                                           (pSVar20->klass->vtable)._8_set_Item.method);
                                pSVar28 = (__this->fields)._newInfo_5__7;
                                if (pSVar28 != (SimpleJSONFixed_JSONObject_o *)0x0) {
                                  (*(pSVar28->klass->vtable)._8_set_Item.methodPtr)
                                            (pSVar28,"Keyframes",(__this->fields)._frames_5__8,
                                             (pSVar28->klass->vtable)._8_set_Item.method);
                                  pSVar32 = (__this->fields)._newData_5__3;
                                  if (pSVar32 != (SimpleJSONFixed_JSONNode_o *)0x0) {
                                    (*(pSVar32->klass->vtable)._8_set_Item.methodPtr)
                                              (pSVar32,(__this->fields)._attackName_5__6,
                                               (__this->fields)._newInfo_5__7,
                                               (pSVar32->klass->vtable)._8_set_Item.method);
                                    unaff_RBX = (System_Single_array *)
                                                il2cpp_runtime_glue(TypeInfo_WaitForSeconds);
                                    UnityEngine_WaitForSeconds___ctor
                                              ((UnityEngine_WaitForSeconds_o *)unaff_RBX,0.5,
                                               (MethodInfo *)0x0);
                                    (__this->fields).__2__current = (Il2CppObject *)unaff_RBX;
                                    il2cpp_runtime_glue(&(__this->fields).__2__current,unaff_RBX);
                                    (__this->fields).__1__state = 3;
                                    goto LAB_03f7cb0d;
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
    if ((((pCVar25 != (Controllers_DebugAttackKeyframes_o *)0x0) &&
         (pCVar17 = (pCVar25->fields)._titan, pCVar17 != (Characters_BaseTitan_o *)0x0)) &&
        (lVar18 = *(long *)&(pCVar17->fields).Dead, lVar18 != 0)) &&
       (pUVar19 = *(UnityEngine_Transform_o **)(lVar18 + 0x10),
       pUVar19 != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__set_position
                (pUVar19,(UnityEngine_Vector3_o)(__this->fields)._startPosition_5__10.fields,
                 (MethodInfo *)0x0);
      pCVar17 = (pCVar25->fields)._titan;
      if ((pCVar17 != (Characters_BaseTitan_o *)0x0) &&
         (lVar18 = *(long *)&(pCVar17->fields).Dead, lVar18 != 0)) {
        pUVar19 = *(UnityEngine_Transform_o **)(lVar18 + 0x10);
        if (DAT_056fde1e == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Quaternion);
          DAT_056fde1e = '\x01';
        }
        if (pUVar19 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__set_rotation
                    (pUVar19,(UnityEngine_Quaternion_o)
                             **(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8),
                     (MethodInfo *)0x0);
          unaff_RBX = (System_Single_array *)il2cpp_runtime_glue(TypeInfo_WaitForSeconds);
          UnityEngine_WaitForSeconds___ctor
                    ((UnityEngine_WaitForSeconds_o *)unaff_RBX,0.5,(MethodInfo *)0x0);
          (__this->fields).__2__current = (Il2CppObject *)unaff_RBX;
          il2cpp_runtime_glue(&(__this->fields).__2__current,unaff_RBX);
          (__this->fields).__1__state = 4;
          goto LAB_03f7cb0d;
        }
      }
    }
    break;
  case 4:
    (__this->fields).__1__state = -1;
    (__this->fields)._newInfo_5__7 = (SimpleJSONFixed_JSONObject_o *)0x0;
    il2cpp_runtime_glue(&(__this->fields)._newInfo_5__7,0);
    (__this->fields)._frames_5__8 = (SimpleJSONFixed_JSONArray_o *)0x0;
    il2cpp_runtime_glue(&(__this->fields)._frames_5__8,0);
    (__this->fields)._startPosition_5__10.fields.x = 0.0;
    (__this->fields)._startPosition_5__10.fields.y = 0.0;
    *(undefined8 *)&(__this->fields)._startPosition_5__10.fields.z = 0;
    *(undefined4 *)((long)&(__this->fields)._mins_5__11 + 4) = 0;
    il2cpp_runtime_glue(&(__this->fields)._mins_5__11,0);
    (__this->fields)._maxes_5__12 = (System_Single_array *)0x0;
    il2cpp_runtime_glue(&(__this->fields)._maxes_5__12,0);
    pSVar33 = (System_Collections_Generic_Dictionary_Enumerator_string__JSONNode__o *)
              &(__this->fields)._attackName_5__6;
    (__this->fields)._attackName_5__6 = (System_String_o *)0x0;
LAB_03f7c462:
    il2cpp_runtime_glue(pSVar33,0);
    method_00 = &(__this->fields).__7__wrap4;
    __this_03.fields.m_Enumerator.fields.m_Object.fields._dictionary._0_4_ = uVar37;
    __this_03.fields.m_Enumerator.fields._0_8_ = in_stack_fffffffffffffed8;
    __this_03.fields.m_Enumerator.fields.m_Object.fields._dictionary._4_4_ = uVar38;
    __this_03.fields.m_Enumerator.fields.m_Object.fields._version = in_stack_fffffffffffffee8;
    __this_03.fields.m_Enumerator.fields.m_Object.fields._index = in_stack_fffffffffffffeec;
    __this_03.fields.m_Enumerator.fields.m_Object.fields._current.fields.key._0_4_ =
         in_stack_fffffffffffffef0;
    __this_03.fields.m_Enumerator.fields.m_Object.fields._current.fields.key._4_4_ =
         in_stack_fffffffffffffef4;
    __this_03.fields.m_Enumerator.fields.m_Object.fields._current.fields.value =
         (Il2CppObject *)in_stack_fffffffffffffef8;
    __this_03.fields.m_Enumerator.fields.m_Object.fields._32_8_ = in_stack_ffffffffffffff00;
    __this_03.fields.m_Enumerator.fields.m_Array.fields._list =
         (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff08;
    __this_03.fields.m_Enumerator.fields.m_Array.fields._8_8_ = in_stack_ffffffffffffff10;
    __this_03.fields.m_Enumerator.fields.m_Array.fields._current =
         (SimpleJSONFixed_JSONNode_o *)in_stack_ffffffffffffff18;
    bVar23 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext(__this_03,(MethodInfo *)method_00);
    if ((char)bVar23 != '\0') {
      ppSVar1 = &(__this->fields)._attackName_5__6;
      ppSVar2 = &(__this->fields)._newInfo_5__7;
      do {
        __this_05.fields.m_Enumerator.fields.m_Object.fields._dictionary._0_4_ = uVar37;
        __this_05.fields.m_Enumerator.fields._0_8_ = in_stack_fffffffffffffed8;
        __this_05.fields.m_Enumerator.fields.m_Object.fields._dictionary._4_4_ = uVar38;
        __this_05.fields.m_Enumerator.fields.m_Object.fields._version = in_stack_fffffffffffffee8;
        __this_05.fields.m_Enumerator.fields.m_Object.fields._index = in_stack_fffffffffffffeec;
        __this_05.fields.m_Enumerator.fields.m_Object.fields._current.fields.key._0_4_ =
             in_stack_fffffffffffffef0;
        __this_05.fields.m_Enumerator.fields.m_Object.fields._current.fields.key._4_4_ =
             in_stack_fffffffffffffef4;
        __this_05.fields.m_Enumerator.fields.m_Object.fields._current.fields.value =
             (Il2CppObject *)in_stack_fffffffffffffef8;
        __this_05.fields.m_Enumerator.fields.m_Object.fields._32_8_ = in_stack_ffffffffffffff00;
        __this_05.fields.m_Enumerator.fields.m_Array.fields._list =
             (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff08;
        __this_05.fields.m_Enumerator.fields.m_Array.fields._8_8_ = in_stack_ffffffffffffff10;
        __this_05.fields.m_Enumerator.fields.m_Array.fields._current =
             (SimpleJSONFixed_JSONNode_o *)in_stack_ffffffffffffff18;
        pSVar26 = SimpleJSONFixed_JSONNode_KeyEnumerator__get_Current
                            (__this_05,(MethodInfo *)method_00);
        (__this->fields)._attackName_5__6 = pSVar26;
        il2cpp_runtime_glue(ppSVar1,pSVar26);
        pSVar32 = (__this->fields)._data_5__2;
        if (pSVar32 == (SimpleJSONFixed_JSONNode_o *)0x0) goto LAB_03f7cb23;
        plVar27 = (long *)(*(pSVar32->klass->vtable)._7_get_Item.methodPtr)
                                    (pSVar32,*ppSVar1,(pSVar32->klass->vtable)._7_get_Item.method);
        pSVar28 = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_glue(TypeInfo_JSONObject);
        SimpleJSONFixed_JSONObject___ctor(pSVar28,(MethodInfo *)0x0);
        *ppSVar2 = pSVar28;
        il2cpp_runtime_glue(ppSVar2,pSVar28);
        if ((plVar27 == (long *)0x0) ||
           (plVar27 = (long *)(**(code **)(*plVar27 + 0x1a8))
                                        (plVar27,"Far",*(undefined8 *)(*plVar27 + 0x1b0)),
           plVar27 == (long *)0x0)) goto LAB_03f7cb23;
        cVar22 = (**(code **)(*plVar27 + 0x3a8))(plVar27,*(undefined8 *)(*plVar27 + 0x3b0));
        if ((cVar22 == '\0') &&
           (bVar23 = System_String__op_Equality(*ppSVar1,"AttackBellyFlop",(MethodInfo *)0x0),
           (char)bVar23 == '\0')) {
          pSVar29 = (SimpleJSONFixed_JSONArray_o *)il2cpp_runtime_glue(TypeInfo_JSONArray);
          SimpleJSONFixed_JSONArray___ctor(pSVar29,(MethodInfo *)0x0);
          (__this->fields)._frames_5__8 = pSVar29;
          il2cpp_runtime_glue();
          fVar35 = UnityEngine_Time__get_fixedTime((MethodInfo *)0x0);
          (__this->fields)._startTime_5__9 = fVar35;
          pCVar25 = (Controllers_DebugAttackKeyframes_o *)CONCAT44(uVar38,uVar37);
          if ((((pCVar25 == (Controllers_DebugAttackKeyframes_o *)0x0) ||
               (pCVar17 = (pCVar25->fields)._titan, pCVar17 == (Characters_BaseTitan_o *)0x0)) ||
              (lVar18 = *(long *)&(pCVar17->fields).Dead, lVar18 == 0)) ||
             (pUVar19 = *(UnityEngine_Transform_o **)(lVar18 + 0x10),
             pUVar19 == (UnityEngine_Transform_o *)0x0)) goto LAB_03f7cb23;
          UVar36 = UnityEngine_Transform__get_position(pUVar19,(MethodInfo *)0x0);
          (__this->fields)._startPosition_5__10.fields.x = (float)(int)UVar36.fields._0_8_;
          (__this->fields)._startPosition_5__10.fields.y =
               (float)(int)((ulong)UVar36.fields._0_8_ >> 0x20);
          (__this->fields)._startPosition_5__10.fields.z = UVar36.fields.z;
          pSVar30 = (System_Single_array *)il2cpp_glue_02274930(TypeInfo_float,3);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar30,fld_CA37AD904FC6BEA9F844804EA32D830AC222F833C1C12C44,(MethodInfo *)0x0);
          (__this->fields)._mins_5__11 = pSVar30;
          il2cpp_runtime_glue(&(__this->fields)._mins_5__11,pSVar30);
          unaff_RBX = (System_Single_array *)il2cpp_glue_02274930(TypeInfo_float,3);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)unaff_RBX,fld_DD6DFD036D588321FCD10D32CBA47D659057F3F8DA5C7AD4,(MethodInfo *)0x0);
          (__this->fields)._maxes_5__12 = unaff_RBX;
          il2cpp_runtime_glue(&(__this->fields)._maxes_5__12,unaff_RBX);
          pCVar17 = (pCVar25->fields)._titan;
          if (pCVar17 == (Characters_BaseTitan_o *)0x0) goto LAB_03f7cb23;
          (*(pCVar17->klass->vtable)._128_Attack.methodPtr)
                    (pCVar17,(__this->fields)._attackName_5__6,
                     (pCVar17->klass->vtable)._128_Attack.method);
          (__this->fields)._currFrame_5__13 = -100;
          pCVar17 = (pCVar25->fields)._titan;
          goto joined_r0x03f7bd70;
        }
        __this_04.fields.m_Enumerator.fields.m_Object.fields._dictionary._0_4_ = uVar37;
        __this_04.fields.m_Enumerator.fields._0_8_ = in_stack_fffffffffffffed8;
        __this_04.fields.m_Enumerator.fields.m_Object.fields._dictionary._4_4_ = uVar38;
        __this_04.fields.m_Enumerator.fields.m_Object.fields._version = in_stack_fffffffffffffee8;
        __this_04.fields.m_Enumerator.fields.m_Object.fields._index = in_stack_fffffffffffffeec;
        __this_04.fields.m_Enumerator.fields.m_Object.fields._current.fields.key._0_4_ =
             in_stack_fffffffffffffef0;
        __this_04.fields.m_Enumerator.fields.m_Object.fields._current.fields.key._4_4_ =
             in_stack_fffffffffffffef4;
        __this_04.fields.m_Enumerator.fields.m_Object.fields._current.fields.value =
             (Il2CppObject *)in_stack_fffffffffffffef8;
        __this_04.fields.m_Enumerator.fields.m_Object.fields._32_8_ = in_stack_ffffffffffffff00;
        __this_04.fields.m_Enumerator.fields.m_Array.fields._list =
             (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff08;
        __this_04.fields.m_Enumerator.fields.m_Array.fields._8_8_ = in_stack_ffffffffffffff10;
        __this_04.fields.m_Enumerator.fields.m_Array.fields._current =
             (SimpleJSONFixed_JSONNode_o *)in_stack_ffffffffffffff18;
        bVar23 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext(__this_04,(MethodInfo *)method_00)
        ;
      } while ((char)bVar23 != '\0');
    }
    (__this->fields).__7__wrap4.fields.m_Enumerator.fields.m_Array.fields._list =
         (System_Collections_Generic_List_T__o *)0x0;
    pSVar21 = &(__this->fields).__7__wrap4.fields.m_Enumerator;
    (pSVar21->fields).m_Array.fields._index = 0;
    (pSVar21->fields).m_Array.fields._version = 0;
    (__this->fields).__7__wrap4.fields.m_Enumerator.fields.m_Object.fields._current.fields.value =
         (Il2CppObject *)0x0;
    *(undefined8 *)
     &(__this->fields).__7__wrap4.fields.m_Enumerator.fields.m_Object.fields._getEnumeratorRetType =
         0;
    pSVar21 = &(__this->fields).__7__wrap4.fields.m_Enumerator;
    (pSVar21->fields).m_Object.fields._version = 0;
    (pSVar21->fields).m_Object.fields._index = 0;
    (__this->fields).__7__wrap4.fields.m_Enumerator.fields.m_Object.fields._current.fields.key =
         (Il2CppObject *)0x0;
    *(undefined8 *)&(method_00->fields).m_Enumerator.fields = 0;
    (__this->fields).__7__wrap4.fields.m_Enumerator.fields.m_Object.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
    (__this->fields).__7__wrap4.fields.m_Enumerator.fields.m_Array.fields._current =
         (SimpleJSONFixed_JSONNode_o *)0x0;
    pSVar32 = (__this->fields)._newData_5__3;
    if (pSVar32 != (SimpleJSONFixed_JSONNode_o *)0x0) {
      pSVar26 = (System_String_o *)
                (*(pSVar32->klass->vtable)._30_ToString.methodPtr)
                          (pSVar32,4,(pSVar32->klass->vtable)._30_ToString.method);
      if (*(int *)(TypeInfo_FolderPaths + 0xe4) == 0) {
        il2cpp_init_class();
      }
      path = System_String__Concat
                       ((System_String_o *)**(undefined8 **)(TypeInfo_FolderPaths + 0xb8),"/Keyframes.txt",
                        (MethodInfo *)0x0);
      System_IO_File__WriteAllText(path,pSVar26,(MethodInfo *)0x0);
      pIVar31 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068);
      if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
        il2cpp_init_class();
      }
      UnityEngine_Debug__Log(pIVar31,(MethodInfo *)0x0);
      return 0;
    }
  }
LAB_03f7cb23:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Controllers.DebugAttackKeyframes.<GenerateAttackFrames>d__3$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Controllers_DebugAttackKeyframes__GenerateAttackFrames_d__3__System_Collections_Generic_IEnumerator_System_Object__get_Current (Controllers_DebugAttackKeyframes__GenerateAttackFrames_d__3_o* __this, const MethodInfo* method);
// 0x3f7cb30

Il2CppObject *
Controllers_DebugAttackKeyframes_<GenerateAttackFrames>d__3__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (Controllers_DebugAttackKeyframes__GenerateAttackFrames_d__3_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Controllers.DebugAttackKeyframes.<GenerateAttackFrames>d__3$$System.Collections.IEnumerator.Reset
// il2cpp: void Controllers_DebugAttackKeyframes__GenerateAttackFrames_d__3__System_Collections_IEnumerator_Reset (Controllers_DebugAttackKeyframes__GenerateAttackFrames_d__3_o* __this, const MethodInfo* method);
// 0x3f7cb40

void Controllers_DebugAttackKeyframes_<GenerateAttackFrames>d__3__System_Collections_IEnumerator_Reset
               (Controllers_DebugAttackKeyframes__GenerateAttackFrames_d__3_o *__this,
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


// Controllers.DebugAttackKeyframes.<GenerateAttackFrames>d__3$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Controllers_DebugAttackKeyframes__GenerateAttackFrames_d__3__System_Collections_IEnumerator_get_Current (Controllers_DebugAttackKeyframes__GenerateAttackFrames_d__3_o* __this, const MethodInfo* method);
// 0x3f7cb80

Il2CppObject *
Controllers_DebugAttackKeyframes_<GenerateAttackFrames>d__3__System_Collections_IEnumerator_get_Current
          (Controllers_DebugAttackKeyframes__GenerateAttackFrames_d__3_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Controllers.DebugAttackKeyframes$$Awake
// il2cpp: void Controllers_DebugAttackKeyframes__Awake (Controllers_DebugAttackKeyframes_o* __this, const MethodInfo* method);
// 0x3f7b3b0

void Controllers_DebugAttackKeyframes__Awake
               (Controllers_DebugAttackKeyframes_o *__this,MethodInfo *method)

{
  Characters_BaseTitan_o **ppCVar1;
  System_String_o **ppSVar2;
  byte bVar3;
  byte bVar4;
  System_Collections_Generic_Dictionary_TKey__TValue__o *__this_00;
  Il2CppClass *pIVar5;
  Characters_BaseTitan_o *pCVar6;
  System_Type_o *pSVar7;
  System_String_o *pSVar8;
  Il2CppObject *__this_01;
  
  if (DAT_05703f49 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BaseShifter);
    il2cpp_init_method_metadata(&TypeInfo_BasicTitan);
    il2cpp_init_method_metadata(&MethodInfo_BaseTitan_GetComponent_BaseTitan);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&"Characters.");
    il2cpp_init_method_metadata(&"Titan");
    il2cpp_init_method_metadata(&"Shifter");
    il2cpp_init_method_metadata(&"");
    DAT_05703f49 = '\x01';
  }
  pCVar6 = (Characters_BaseTitan_o *)
           UnityEngine_Component__GetComponent<object>
                     ((UnityEngine_Component_o *)__this,MethodInfo_BaseTitan_GetComponent_BaseTitan);
  ppCVar1 = &(__this->fields)._titan;
  (__this->fields)._titan = pCVar6;
  il2cpp_runtime_glue(ppCVar1,pCVar6);
  pCVar6 = (__this->fields)._titan;
  if (pCVar6 == (Characters_BaseTitan_o *)0x0) goto LAB_03f7b603;
  (pCVar6->fields).SprintStaminaConsumption = 1.0;
  __this_00 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)(pCVar6->fields).TargetEnemy;
  if (__this_00 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto LAB_03f7b603;
  System_Collections_Generic_Dictionary<object__float>__Clear(__this_00,MethodInfo_Void_Clear);
  pCVar6 = *ppCVar1;
  if (pCVar6 != (Characters_BaseTitan_o *)0x0) {
    pIVar5 = (Il2CppClass *)pCVar6->klass;
    bVar3 = (pIVar5->_2).naturalAligment;
    bVar4 = (TypeInfo_BasicTitan->_2).naturalAligment;
    if ((bVar3 < bVar4) || ((pIVar5->_2).typeHierarchy[(ulong)bVar4 - 1] != TypeInfo_BasicTitan)) {
      bVar4 = (TypeInfo_BaseShifter->_2).naturalAligment;
      if ((bVar3 < bVar4) || ((pIVar5->_2).typeHierarchy[(ulong)bVar4 - 1] != TypeInfo_BaseShifter))
      goto LAB_03f7b59a;
      pSVar7 = System_Object__GetType((Il2CppObject *)pCVar6,(MethodInfo *)0x0);
      if (pSVar7 == (System_Type_o *)0x0) goto LAB_03f7b603;
      pSVar8 = (System_String_o *)
               (*(pSVar7->klass->vtable)._3_ToString.methodPtr)
                         (pSVar7,(pSVar7->klass->vtable)._3_ToString.method);
      ppSVar2 = &(__this->fields)._name;
      (__this->fields)._name = pSVar8;
      il2cpp_runtime_glue(ppSVar2,pSVar8);
      pSVar8 = (__this->fields)._name;
      if (pSVar8 == (System_String_o *)0x0) goto LAB_03f7b603;
      pSVar8 = System_String__Replace(pSVar8,"Shifter","",(MethodInfo *)0x0);
      *ppSVar2 = pSVar8;
      il2cpp_runtime_glue(ppSVar2,pSVar8);
      if (*ppSVar2 == (System_String_o *)0x0) goto LAB_03f7b603;
      pSVar8 = System_String__Replace(*ppSVar2,"Characters.","",(MethodInfo *)0x0);
      *ppSVar2 = pSVar8;
    }
    else {
      (__this->fields)._name = "Titan";
    }
    il2cpp_runtime_glue(&(__this->fields)._name);
  }
LAB_03f7b59a:
  if (DAT_05703f4a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GenerateAttackFrames_d__3);
    DAT_05703f4a = '\x01';
  }
  __this_01 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_GenerateAttackFrames_d__3);
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  *(undefined4 *)&__this_01[1].klass = 0;
  if (__this_01 != (Il2CppObject *)0x0) {
    __this_01[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_glue(__this_01 + 2,__this);
    UnityEngine_MonoBehaviour__StartCoroutine
              ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_01,
               (MethodInfo *)0x0);
    return;
  }
LAB_03f7b603:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Controllers.DebugAttackKeyframes$$GenerateAttackFrames
// il2cpp: System_Collections_IEnumerator_o* Controllers_DebugAttackKeyframes__GenerateAttackFrames (Controllers_DebugAttackKeyframes_o* __this, const MethodInfo* method);
// 0x3f7b610

System_Collections_IEnumerator_o *
Controllers_DebugAttackKeyframes__GenerateAttackFrames
          (Controllers_DebugAttackKeyframes_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_05703f4a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GenerateAttackFrames_d__3);
    DAT_05703f4a = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_GenerateAttackFrames_d__3);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_glue(__this_00 + 2,__this);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Controllers.DebugAttackKeyframes$$DebugCreateFrameJSON
// il2cpp: SimpleJSONFixed_JSONObject_o* Controllers_DebugAttackKeyframes__DebugCreateFrameJSON (Controllers_DebugAttackKeyframes_o* __this, int32_t frame, Characters_BaseHitbox_o* hitbox, System_Single_array* mins, System_Single_array* maxes, UnityEngine_Vector3_o position, const MethodInfo* method);
// 0x3f7b6a0

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
  
  n = position.fields.z;
  if (DAT_05703f4b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_JSONObject);
    il2cpp_init_method_metadata(&TypeInfo_SphereCollider);
    il2cpp_init_method_metadata(&"x");
    il2cpp_init_method_metadata(&"f");
    il2cpp_init_method_metadata(&"y");
    il2cpp_init_method_metadata(&"z");
    il2cpp_init_method_metadata(&"r");
    DAT_05703f4b = '\x01';
  }
  if ((hitbox != (Characters_BaseHitbox_o *)0x0) &&
     (__this_00 = (UnityEngine_SphereCollider_o *)(hitbox->fields)._collider,
     __this_00 != (UnityEngine_SphereCollider_o *)0x0)) {
    bVar1 = (TypeInfo_SphereCollider->_2).naturalAligment;
    if (((__this_00->klass->_2).naturalAligment < bVar1) ||
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_SphereCollider)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(__this_00);
    }
    fVar4 = UnityEngine_SphereCollider__get_radius(__this_00,(MethodInfo *)0x0);
    __this_01 = UnityEngine_Component__get_transform
                          ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_Transform_o *)0x0) {
      UVar6 = UnityEngine_Transform__get_lossyScale(__this_01,(MethodInfo *)0x0);
      __this_02 = (SimpleJSONFixed_JSONObject_o *)
                  il2cpp_runtime_glue(UVar6.fields.x,UVar6.fields.z,TypeInfo_JSONObject);
      SimpleJSONFixed_JSONObject___ctor(__this_02,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar3 = SimpleJSONFixed_JSONNode__op_Implicit(frame,(MethodInfo *)0x0);
      if (__this_02 != (SimpleJSONFixed_JSONObject_o *)0x0) {
        fVar4 = fVar4 * UVar6.fields.x;
        (*(__this_02->klass->vtable)._8_set_Item.methodPtr)
                  (__this_02,"f",pSVar3,(__this_02->klass->vtable)._8_set_Item.method);
        pSVar3 = SimpleJSONFixed_JSONNode__op_Implicit(fVar4,(MethodInfo *)0x0);
        (*(__this_02->klass->vtable)._8_set_Item.methodPtr)
                  (__this_02,"r",pSVar3,(__this_02->klass->vtable)._8_set_Item.method);
        local_48 = position.fields.x;
        pSVar3 = SimpleJSONFixed_JSONNode__op_Implicit(local_48,(MethodInfo *)0x0);
        (*(__this_02->klass->vtable)._8_set_Item.methodPtr)
                  (__this_02,"x",pSVar3,(__this_02->klass->vtable)._8_set_Item.method);
        fStack_44 = position.fields.y;
        pSVar3 = SimpleJSONFixed_JSONNode__op_Implicit(fStack_44,(MethodInfo *)0x0);
        (*(__this_02->klass->vtable)._8_set_Item.methodPtr)
                  (__this_02,"y",pSVar3,(__this_02->klass->vtable)._8_set_Item.method);
        pSVar3 = SimpleJSONFixed_JSONNode__op_Implicit(n,(MethodInfo *)0x0);
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
                if (maxes == (System_Single_array *)0x0) goto LAB_03f7b9c1;
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
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
      }
    }
  }
LAB_03f7b9c1:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Controllers.DebugAttackKeyframes$$.ctor
// il2cpp: void Controllers_DebugAttackKeyframes___ctor (Controllers_DebugAttackKeyframes_o* __this, const MethodInfo* method);
// 0x3f7b9e0

void Controllers_DebugAttackKeyframes___ctor
               (Controllers_DebugAttackKeyframes_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


