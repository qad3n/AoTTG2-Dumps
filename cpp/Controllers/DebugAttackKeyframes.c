// Type: Controllers.DebugAttackKeyframes
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Controllers/DebugAttackKeyframes.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Titan/DebugAttackKeyframes.cs
// --------------------------------

// Controllers.DebugAttackKeyframes.<GenerateAttackFrames>d__3$$.ctor
// il2cpp: void Controllers_DebugAttackKeyframes__GenerateAttackFrames_d__3___ctor (Controllers_DebugAttackKeyframes__GenerateAttackFrames_d__3_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x4287b80

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
// 0x4287ef0

void Controllers_DebugAttackKeyframes__GenerateAttackFrames_d__3__System_IDisposable_Dispose
               (Controllers_DebugAttackKeyframes__GenerateAttackFrames_d__3_o *__this,MethodInfo *method)

{
  return;
}


// Controllers.DebugAttackKeyframes.<GenerateAttackFrames>d__3$$MoveNext
// il2cpp: bool Controllers_DebugAttackKeyframes__GenerateAttackFrames_d__3__MoveNext (Controllers_DebugAttackKeyframes__GenerateAttackFrames_d__3_o* __this, const MethodInfo* method);
// 0x4287f00

bool_conflict
Controllers_DebugAttackKeyframes__GenerateAttackFrames_d__3__MoveNext
          (Controllers_DebugAttackKeyframes__GenerateAttackFrames_d__3_o *__this,MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_KeyEnumerator_o *method_00;
  SimpleJSONFixed_JSONObject_o **ppSVar1;
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
  System_Action_Hashtable__o *pSVar13;
  Il2CppClass *pIVar14;
  long lVar15;
  UnityEngine_Transform_o *pUVar16;
  SimpleJSONFixed_JSONObject_o *pSVar17;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_00;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_01;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_02;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_03;
  SimpleJSONFixed_JSONNode_Enumerator_o *pSVar18;
  char cVar19;
  bool_conflict bVar20;
  int iVar21;
  Characters_BaseTitan_o *pCVar22;
  System_Single_array *pSVar23;
  System_Single_array *pSVar24;
  System_String_o *pSVar25;
  System_Single_array *pSVar26;
  SimpleJSONFixed_JSONObject_o *pSVar27;
  long *plVar28;
  SimpleJSONFixed_JSONArray_o *pSVar29;
  System_String_o *path;
  Il2CppObject *pIVar30;
  System_Single_array *pSVar31;
  SimpleJSONFixed_JSONNode_o *pSVar32;
  System_Single_array *pSVar33;
  System_Single_array *unaff_RBX;
  System_String_o **ppSVar34;
  long *plVar35;
  System_Collections_Generic_Dictionary_Enumerator_string__JSONNode__o *pSVar36;
  MethodInfo *in_R9;
  int iVar37;
  Controllers_DebugAttackKeyframes_o *pCVar38;
  float fVar39;
  UnityEngine_Vector3_o position;
  UnityEngine_Vector3_o position_00;
  UnityEngine_Vector3_o position_01;
  UnityEngine_Vector3_o position_02;
  UnityEngine_Vector3_o position_03;
  UnityEngine_Vector3_o UVar40;
  undefined8 in_stack_fffffffffffffed8;
  undefined4 uVar41;
  undefined4 uVar42;
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
  
  ppSVar34 = (System_String_o **)__this;
  if (g_data_057adcba == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterData);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    il2cpp_runtime_helper_023445d0(&MethodInfo_JSONNode_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_FolderPaths);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONArray);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_float);
    il2cpp_runtime_helper_023445d0(&fld_CA37AD904FC6BEA9F844804EA32D830AC222F833C1C12C44DAD8B677);
    il2cpp_runtime_helper_023445d0(&fld_DD6DFD036D588321FCD10D32CBA47D659057F3F8DA5C7AD402B7A500);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitForSeconds);
    il2cpp_runtime_helper_023445d0(&"AttackBellyFlop");
    il2cpp_runtime_helper_023445d0(&"Ranges");
    il2cpp_runtime_helper_023445d0(&"Z");
    il2cpp_runtime_helper_023445d0(&"Keyframes");
    il2cpp_runtime_helper_023445d0(&"Far");
    il2cpp_runtime_helper_023445d0(&"AttackInfo");
    il2cpp_runtime_helper_023445d0(&"Y");
    il2cpp_runtime_helper_023445d0(&"X");
    ppSVar34 = &"/Keyframes.txt";
    il2cpp_runtime_helper_023445d0();
    g_data_057adcba = '\x01';
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
  uVar12 = (__this->fields).__1__state;
  if (4 < uVar12) {
    return 0;
  }
  pCVar38 = (__this->fields).__4__this;
  uVar41 = SUB84(pCVar38,0);
  uVar42 = (undefined4)((ulong)pCVar38 >> 0x20);
  plVar35 = (long *)ppSVar34;
  switch(uVar12) {
  case 0:
    (__this->fields).__1__state = -1;
    if (TypeInfo_CharacterData->m_Items[0x31] == 0.0) {
      il2cpp_runtime_helper_02337ed0();
    }
    plVar35 = (long *)TypeInfo_CharacterData;
    if (((pCVar38 != (Controllers_DebugAttackKeyframes_o *)0x0) &&
        (plVar35 = *(long **)(*(long *)(TypeInfo_CharacterData->m_Items + 0x26) + 8),
        (System_Single_array *)plVar35 != (System_Single_array *)0x0)) &&
       (pIVar30 = System_Collections_Generic_Dictionary_object__object___get_Item
                            ((System_Collections_Generic_Dictionary_object__object__o *)plVar35,
                             (Il2CppObject *)(pCVar38->fields)._name,MethodInfo_JSONNode_get_Item),
       pIVar30 != (Il2CppObject *)0x0)) {
      pSVar32 = (SimpleJSONFixed_JSONNode_o *)
                (*pIVar30->klass->vtable[7].methodPtr)(pIVar30,"AttackInfo",pIVar30->klass->vtable[7].method);
      (__this->fields)._data_5__2 = pSVar32;
      il2cpp_runtime_helper_022b4080(&(__this->fields)._data_5__2);
      pSVar27 = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONObject);
      SimpleJSONFixed_JSONObject___ctor(pSVar27,(MethodInfo *)0x0);
      plVar35 = (long *)&(__this->fields)._newData_5__3;
      (__this->fields)._newData_5__3 = (SimpleJSONFixed_JSONNode_o *)pSVar27;
      il2cpp_runtime_helper_022b4080();
      pCVar22 = (pCVar38->fields)._titan;
      if ((pCVar22 != (Characters_BaseTitan_o *)0x0) &&
         (lVar15 = *(long *)&(pCVar22->fields).Dead, lVar15 != 0)) {
        pUVar16 = *(UnityEngine_Transform_o **)(lVar15 + 0x10);
        if (g_data_057a6843 == '\0') {
          plVar35 = &TypeInfo_Quaternion;
          il2cpp_runtime_helper_023445d0();
          g_data_057a6843 = '\x01';
        }
        if (pUVar16 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__set_rotation
                    (pUVar16,(UnityEngine_Quaternion_o)
                             **(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8),(MethodInfo *)0x0);
          unaff_RBX = (System_Single_array *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitForSeconds);
          UnityEngine_WaitForSeconds___ctor((UnityEngine_WaitForSeconds_o *)unaff_RBX,1.0,(MethodInfo *)0x0);
          (__this->fields).__2__current = (Il2CppObject *)unaff_RBX;
          il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,unaff_RBX);
          (__this->fields).__1__state = 1;
          goto label_0428900d;
        }
      }
    }
    break;
  case 1:
    (__this->fields).__1__state = -1;
    (__this->fields)._total_5__4 = 0;
    pSVar32 = (__this->fields)._data_5__2;
    if (pSVar32 != (SimpleJSONFixed_JSONNode_o *)0x0) {
      SimpleJSONFixed_JSONNode__get_Keys
                ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&stack0xfffffffffffffee8,pSVar32,
                 (MethodInfo *)0x0);
      auStack_c8._64_8_ = _Stack_d8;
      auStack_c8._0_8_ = CONCAT44(in_stack_fffffffffffffeec,in_stack_fffffffffffffee8);
      auStack_c8._8_8_ = CONCAT44(in_stack_fffffffffffffef4,in_stack_fffffffffffffef0);
      auStack_c8._56_8_ = _Stack_e0;
      __this_00.fields.m_Enumerator.fields.m_Object.fields._dictionary._0_4_ = uVar41;
      __this_00.fields.m_Enumerator.fields._0_8_ = in_stack_fffffffffffffed8;
      __this_00.fields.m_Enumerator.fields.m_Object.fields._dictionary._4_4_ = uVar42;
      __this_00.fields.m_Enumerator.fields.m_Object.fields._version = in_stack_fffffffffffffee8;
      __this_00.fields.m_Enumerator.fields.m_Object.fields._index = in_stack_fffffffffffffeec;
      __this_00.fields.m_Enumerator.fields.m_Object.fields._current.fields.key._0_4_ =
           in_stack_fffffffffffffef0;
      __this_00.fields.m_Enumerator.fields.m_Object.fields._current.fields.key._4_4_ =
           in_stack_fffffffffffffef4;
      __this_00.fields.m_Enumerator.fields.m_Object.fields._current.fields.value =
           (Il2CppObject *)in_stack_fffffffffffffef8;
      __this_00.fields.m_Enumerator.fields.m_Object.fields._32_8_ = in_stack_ffffffffffffff00;
      __this_00.fields.m_Enumerator.fields.m_Array.fields._list =
           (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff08;
      __this_00.fields.m_Enumerator.fields.m_Array.fields._8_8_ = in_stack_ffffffffffffff10;
      __this_00.fields.m_Enumerator.fields.m_Array.fields._current =
           (SimpleJSONFixed_JSONNode_o *)in_stack_ffffffffffffff18;
      auStack_c8._16_8_ = in_stack_fffffffffffffef8;
      auStack_c8._24_8_ = in_stack_ffffffffffffff00;
      auStack_c8._32_8_ = in_stack_ffffffffffffff08;
      auStack_c8._40_8_ = in_stack_ffffffffffffff10;
      auStack_c8._48_8_ = in_stack_ffffffffffffff18;
      SimpleJSONFixed_JSONNode_KeyEnumerator__GetEnumerator
                ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)(auStack_c8 + 0x50),__this_00,
                 (MethodInfo *)auStack_c8);
      (__this->fields).__7__wrap4.fields.m_Enumerator.fields.m_Array.fields._current = pSStack_38;
      (__this->fields).__7__wrap4.fields.m_Enumerator.fields.m_Array.fields._list = pSStack_48;
      pSVar18 = &(__this->fields).__7__wrap4.fields.m_Enumerator;
      (pSVar18->fields).m_Array.fields._index = (undefined4)uStack_40;
      (pSVar18->fields).m_Array.fields._version = uStack_40._4_4_;
      (__this->fields).__7__wrap4.fields.m_Enumerator.fields.m_Object.fields._current.fields.value =
           (Il2CppObject *)pIStack_58;
      *(Il2CppType **)
       &(__this->fields).__7__wrap4.fields.m_Enumerator.fields.m_Object.fields._getEnumeratorRetType =
           pIStack_50;
      *(InvokerMethod *)&(__this->fields).__7__wrap4.fields.m_Enumerator.fields.m_Object.fields._version =
           pIStack_68;
      (__this->fields).__7__wrap4.fields.m_Enumerator.fields.m_Object.fields._current.fields.key = pIStack_60;
      (__this->fields).__7__wrap4.fields.m_Enumerator.fields.type = auStack_c8._80_4_;
      *(undefined4 *)&(__this->fields).__7__wrap4.fields.m_Enumerator.fields.field_0x4 = auStack_c8._84_4_;
      *(undefined4 *)&(__this->fields).__7__wrap4.fields.m_Enumerator.fields.m_Object.fields._dictionary =
           uStack_70;
      *(undefined4 *)
       ((long)&(__this->fields).__7__wrap4.fields.m_Enumerator.fields.m_Object.fields._dictionary + 4) =
           uStack_6c;
      pSVar36 = &(__this->fields).__7__wrap4.fields.m_Enumerator.fields.m_Object;
      in_stack_fffffffffffffee8 = auStack_c8._80_4_;
      in_stack_fffffffffffffeec = auStack_c8._84_4_;
      in_stack_fffffffffffffef0 = uStack_70;
      in_stack_fffffffffffffef4 = uStack_6c;
      in_stack_fffffffffffffef8 = pIStack_68;
      in_stack_ffffffffffffff00 = pIStack_60;
      in_stack_ffffffffffffff08 = pIStack_58;
      in_stack_ffffffffffffff10 = pIStack_50;
      in_stack_ffffffffffffff18 = pSStack_48;
      goto label_04288962;
    }
    break;
  case 2:
    (__this->fields).__1__state = -1;
    if ((pCVar38 != (Controllers_DebugAttackKeyframes_o *)0x0) &&
       (pCVar22 = (pCVar38->fields)._titan, pCVar22 != (Characters_BaseTitan_o *)0x0)) {
label_04288276:
      if (*(int *)&(pCVar22->fields).OutlineComponent == 10) {
        plVar35 = (long *)0x0;
        fVar39 = UnityEngine_Time__get_fixedTime((MethodInfo *)0x0);
        iVar37 = (int)((fVar39 - (__this->fields)._startTime_5__9) * 50.0);
        if (iVar37 <= (__this->fields)._currFrame_5__13) goto label_04288777;
        (__this->fields)._currFrame_5__13 = iVar37;
        pCVar22 = (pCVar38->fields)._titan;
        if (((pCVar22 != (Characters_BaseTitan_o *)0x0) &&
            (pSVar13 = (pCVar22->fields).OnPlayerPropertiesChanged,
            pSVar13 != (System_Action_Hashtable__o *)0x0)) &&
           (pSVar26 = pSVar13[1].monitor, plVar35 = (long *)pSVar26, pSVar26 != (System_Single_array *)0x0)) {
          bVar20 = Characters_BaseHitbox__IsActive((Characters_BaseHitbox_o *)pSVar26,(MethodInfo *)0x0);
          uVar41 = SUB84(pCVar38,0);
          uVar42 = (undefined4)((ulong)pCVar38 >> 0x20);
          if ((char)bVar20 == '\0') {
label_0428839c:
            pCVar22 = (pCVar38->fields)._titan;
            plVar35 = (long *)pSVar26;
            if (((pCVar22 != (Characters_BaseTitan_o *)0x0) &&
                (pSVar13 = (pCVar22->fields).OnPlayerPropertiesChanged,
                pSVar13 != (System_Action_Hashtable__o *)0x0)) &&
               (pSVar26 = (System_Single_array *)pSVar13[1].fields.method_ptr, plVar35 = (long *)pSVar26,
               pSVar26 != (System_Single_array *)0x0)) {
              bVar20 = Characters_BaseHitbox__IsActive((Characters_BaseHitbox_o *)pSVar26,(MethodInfo *)0x0);
              if ((char)bVar20 == '\0') {
label_04288480:
                pCVar22 = (pCVar38->fields)._titan;
                plVar35 = (long *)pSVar26;
                if (((pCVar22 != (Characters_BaseTitan_o *)0x0) &&
                    (pSVar13 = (pCVar22->fields).OnPlayerPropertiesChanged,
                    pSVar13 != (System_Action_Hashtable__o *)0x0)) &&
                   (pSVar26 = (System_Single_array *)pSVar13[1].fields.invoke_impl, plVar35 = (long *)pSVar26,
                   pSVar26 != (System_Single_array *)0x0)) {
                  bVar20 = Characters_BaseHitbox__IsActive
                                     ((Characters_BaseHitbox_o *)pSVar26,(MethodInfo *)0x0);
                  if ((char)bVar20 == '\0') {
label_04288564:
                    pCVar22 = (pCVar38->fields)._titan;
                    plVar35 = (long *)pSVar26;
                    if (((pCVar22 != (Characters_BaseTitan_o *)0x0) &&
                        (pSVar13 = (pCVar22->fields).OnPlayerPropertiesChanged,
                        pSVar13 != (System_Action_Hashtable__o *)0x0)) &&
                       (pSVar26 = (System_Single_array *)pSVar13[1].fields.m_target, plVar35 = (long *)pSVar26
                       , pSVar26 != (System_Single_array *)0x0)) {
                      bVar20 = Characters_BaseHitbox__IsActive
                                         ((Characters_BaseHitbox_o *)pSVar26,(MethodInfo *)0x0);
                      if ((char)bVar20 == '\0') {
label_04288648:
                        pCVar22 = (pCVar38->fields)._titan;
                        plVar35 = (long *)pSVar26;
                        if ((pCVar22 != (Characters_BaseTitan_o *)0x0) &&
                           (pSVar13 = (pCVar22->fields).OnPlayerPropertiesChanged,
                           pSVar13 != (System_Action_Hashtable__o *)0x0)) {
                          unaff_RBX = (System_Single_array *)pSVar13[1].klass;
                          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                            il2cpp_runtime_helper_02337ed0();
                          }
                          plVar35 = (long *)unaff_RBX;
                          bVar20 = UnityEngine_Object__op_Inequality
                                             ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)0x0,
                                              (MethodInfo *)0x0);
                          if ((char)bVar20 == '\0') {
label_04288777:
                            (__this->fields).__2__current = (Il2CppObject *)0x0;
                            il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,0);
                            (__this->fields).__1__state = 2;
label_0428900d:
                            return (bool_conflict)CONCAT71((int7)((ulong)unaff_RBX >> 8),1);
                          }
                          pCVar22 = (pCVar38->fields)._titan;
                          if (((pCVar22 != (Characters_BaseTitan_o *)0x0) &&
                              (pSVar13 = (pCVar22->fields).OnPlayerPropertiesChanged,
                              pSVar13 != (System_Action_Hashtable__o *)0x0)) &&
                             (plVar35 = (long *)pSVar13[1].klass,
                             (System_Single_array *)plVar35 != (System_Single_array *)0x0)) {
                            bVar20 = Characters_BaseHitbox__IsActive
                                               ((Characters_BaseHitbox_o *)plVar35,(MethodInfo *)0x0);
                            if ((char)bVar20 == '\0') goto label_04288777;
                            pCVar22 = (pCVar38->fields)._titan;
                            if (((pCVar22 != (Characters_BaseTitan_o *)0x0) &&
                                (pSVar13 = (pCVar22->fields).OnPlayerPropertiesChanged,
                                pSVar13 != (System_Action_Hashtable__o *)0x0)) &&
                               (unaff_RBX = (System_Single_array *)pSVar13[1].klass,
                               unaff_RBX != (System_Single_array *)0x0)) {
                              pSVar29 = (__this->fields)._frames_5__8;
                              pSVar26 = (__this->fields)._mins_5__11;
                              pSVar31 = (__this->fields)._maxes_5__12;
                              plVar35 = (long *)unaff_RBX;
                              pSVar24 = (System_Single_array *)
                                        UnityEngine_Component__get_transform
                                                  ((UnityEngine_Component_o *)unaff_RBX,(MethodInfo *)0x0);
                              if (pSVar24 != (System_Single_array *)0x0) {
                                UVar40 = UnityEngine_Transform__get_position
                                                   ((UnityEngine_Transform_o *)pSVar24,(MethodInfo *)0x0);
                                uVar6 = (__this->fields)._startPosition_5__10.fields.x;
                                uVar11 = (__this->fields)._startPosition_5__10.fields.y;
                                position_03.fields.x = UVar40.fields.x - (float)uVar6;
                                position_03.fields.y = UVar40.fields.y - (float)uVar11;
                                position_03.fields.z =
                                     UVar40.fields.z - (__this->fields)._startPosition_5__10.fields.z;
                                pSVar27 = Controllers_DebugAttackKeyframes__DebugCreateFrameJSON
                                                    ((Controllers_DebugAttackKeyframes_o *)pSVar24,iVar37,
                                                     (Characters_BaseHitbox_o *)unaff_RBX,pSVar26,pSVar31,
                                                     position_03,in_R9);
                                plVar35 = (long *)pSVar24;
                                if (pSVar29 != (SimpleJSONFixed_JSONArray_o *)0x0) {
                                  (*(pSVar29->klass->vtable)._21_Add.methodPtr)
                                            (pSVar29,pSVar27,(pSVar29->klass->vtable)._21_Add.method);
                                  goto label_04288777;
                                }
                              }
                            }
                          }
                        }
                      }
                      else {
                        pCVar22 = (pCVar38->fields)._titan;
                        plVar35 = (long *)pSVar26;
                        if (((pCVar22 != (Characters_BaseTitan_o *)0x0) &&
                            (pSVar13 = (pCVar22->fields).OnPlayerPropertiesChanged,
                            pSVar13 != (System_Action_Hashtable__o *)0x0)) &&
                           (pSVar31 = (System_Single_array *)pSVar13[1].fields.m_target,
                           pSVar31 != (System_Single_array *)0x0)) {
                          pSVar26 = (System_Single_array *)(__this->fields)._frames_5__8;
                          pSVar24 = (__this->fields)._mins_5__11;
                          pSVar33 = (__this->fields)._maxes_5__12;
                          plVar35 = (long *)pSVar31;
                          pSVar23 = (System_Single_array *)
                                    UnityEngine_Component__get_transform
                                              ((UnityEngine_Component_o *)pSVar31,(MethodInfo *)0x0);
                          if (pSVar23 != (System_Single_array *)0x0) {
                            UVar40 = UnityEngine_Transform__get_position
                                               ((UnityEngine_Transform_o *)pSVar23,(MethodInfo *)0x0);
                            uVar5 = (__this->fields)._startPosition_5__10.fields.x;
                            uVar10 = (__this->fields)._startPosition_5__10.fields.y;
                            position_02.fields.x = UVar40.fields.x - (float)uVar5;
                            position_02.fields.y = UVar40.fields.y - (float)uVar10;
                            position_02.fields.z =
                                 UVar40.fields.z - (__this->fields)._startPosition_5__10.fields.z;
                            pSVar27 = Controllers_DebugAttackKeyframes__DebugCreateFrameJSON
                                                ((Controllers_DebugAttackKeyframes_o *)pSVar23,iVar37,
                                                 (Characters_BaseHitbox_o *)pSVar31,pSVar24,pSVar33,
                                                 position_02,in_R9);
                            plVar35 = (long *)pSVar23;
                            if (pSVar26 != (System_Single_array *)0x0) {
                              pIVar14 = (pSVar26->obj).klass;
                              (*(((System_Collections_Generic_Dictionary_object__object__VTable *)
                                 pIVar14->vtable)->_21_System_Collections_IDictionary_get_Item).methodPtr)
                                        (pSVar26,pSVar27,
                                         (((System_Collections_Generic_Dictionary_object__object__VTable *)
                                          pIVar14->vtable)->_21_System_Collections_IDictionary_get_Item).
                                         method);
                              pCVar38 = (Controllers_DebugAttackKeyframes_o *)CONCAT44(uVar42,uVar41);
                              goto label_04288648;
                            }
                          }
                        }
                      }
                    }
                  }
                  else {
                    pCVar22 = (pCVar38->fields)._titan;
                    plVar35 = (long *)pSVar26;
                    if (((pCVar22 != (Characters_BaseTitan_o *)0x0) &&
                        (pSVar13 = (pCVar22->fields).OnPlayerPropertiesChanged,
                        pSVar13 != (System_Action_Hashtable__o *)0x0)) &&
                       (pSVar31 = (System_Single_array *)pSVar13[1].fields.invoke_impl,
                       pSVar31 != (System_Single_array *)0x0)) {
                      pSVar26 = (System_Single_array *)(__this->fields)._frames_5__8;
                      pSVar24 = (__this->fields)._mins_5__11;
                      pSVar33 = (__this->fields)._maxes_5__12;
                      plVar35 = (long *)pSVar31;
                      pSVar23 = (System_Single_array *)
                                UnityEngine_Component__get_transform
                                          ((UnityEngine_Component_o *)pSVar31,(MethodInfo *)0x0);
                      if (pSVar23 != (System_Single_array *)0x0) {
                        UVar40 = UnityEngine_Transform__get_position
                                           ((UnityEngine_Transform_o *)pSVar23,(MethodInfo *)0x0);
                        uVar4 = (__this->fields)._startPosition_5__10.fields.x;
                        uVar9 = (__this->fields)._startPosition_5__10.fields.y;
                        position_01.fields.x = UVar40.fields.x - (float)uVar4;
                        position_01.fields.y = UVar40.fields.y - (float)uVar9;
                        position_01.fields.z =
                             UVar40.fields.z - (__this->fields)._startPosition_5__10.fields.z;
                        pSVar27 = Controllers_DebugAttackKeyframes__DebugCreateFrameJSON
                                            ((Controllers_DebugAttackKeyframes_o *)pSVar23,iVar37,
                                             (Characters_BaseHitbox_o *)pSVar31,pSVar24,pSVar33,position_01,
                                             in_R9);
                        plVar35 = (long *)pSVar23;
                        if (pSVar26 != (System_Single_array *)0x0) {
                          pIVar14 = (pSVar26->obj).klass;
                          (*(((System_Collections_Generic_Dictionary_object__object__VTable *)pIVar14->vtable)
                            ->_21_System_Collections_IDictionary_get_Item).methodPtr)
                                    (pSVar26,pSVar27,
                                     (((System_Collections_Generic_Dictionary_object__object__VTable *)
                                      pIVar14->vtable)->_21_System_Collections_IDictionary_get_Item).method);
                          pCVar38 = (Controllers_DebugAttackKeyframes_o *)CONCAT44(uVar42,uVar41);
                          goto label_04288564;
                        }
                      }
                    }
                  }
                }
              }
              else {
                pCVar22 = (pCVar38->fields)._titan;
                plVar35 = (long *)pSVar26;
                if (((pCVar22 != (Characters_BaseTitan_o *)0x0) &&
                    (pSVar13 = (pCVar22->fields).OnPlayerPropertiesChanged,
                    pSVar13 != (System_Action_Hashtable__o *)0x0)) &&
                   (pSVar31 = (System_Single_array *)pSVar13[1].fields.method_ptr,
                   pSVar31 != (System_Single_array *)0x0)) {
                  pSVar26 = (System_Single_array *)(__this->fields)._frames_5__8;
                  pSVar24 = (__this->fields)._mins_5__11;
                  pSVar33 = (__this->fields)._maxes_5__12;
                  plVar35 = (long *)pSVar31;
                  pSVar23 = (System_Single_array *)
                            UnityEngine_Component__get_transform
                                      ((UnityEngine_Component_o *)pSVar31,(MethodInfo *)0x0);
                  if (pSVar23 != (System_Single_array *)0x0) {
                    UVar40 = UnityEngine_Transform__get_position
                                       ((UnityEngine_Transform_o *)pSVar23,(MethodInfo *)0x0);
                    uVar3 = (__this->fields)._startPosition_5__10.fields.x;
                    uVar8 = (__this->fields)._startPosition_5__10.fields.y;
                    position_00.fields.x = UVar40.fields.x - (float)uVar3;
                    position_00.fields.y = UVar40.fields.y - (float)uVar8;
                    position_00.fields.z = UVar40.fields.z - (__this->fields)._startPosition_5__10.fields.z;
                    pSVar27 = Controllers_DebugAttackKeyframes__DebugCreateFrameJSON
                                        ((Controllers_DebugAttackKeyframes_o *)pSVar23,iVar37,
                                         (Characters_BaseHitbox_o *)pSVar31,pSVar24,pSVar33,position_00,in_R9)
                    ;
                    plVar35 = (long *)pSVar23;
                    if (pSVar26 != (System_Single_array *)0x0) {
                      pIVar14 = (pSVar26->obj).klass;
                      (*(((System_Collections_Generic_Dictionary_object__object__VTable *)pIVar14->vtable)->
                        _21_System_Collections_IDictionary_get_Item).methodPtr)
                                (pSVar26,pSVar27,
                                 (((System_Collections_Generic_Dictionary_object__object__VTable *)
                                  pIVar14->vtable)->_21_System_Collections_IDictionary_get_Item).method);
                      pCVar38 = (Controllers_DebugAttackKeyframes_o *)CONCAT44(uVar42,uVar41);
                      goto label_04288480;
                    }
                  }
                }
              }
            }
          }
          else {
            pCVar22 = (pCVar38->fields)._titan;
            plVar35 = (long *)pSVar26;
            if (((pCVar22 != (Characters_BaseTitan_o *)0x0) &&
                (pSVar13 = (pCVar22->fields).OnPlayerPropertiesChanged,
                pSVar13 != (System_Action_Hashtable__o *)0x0)) &&
               (pSVar31 = pSVar13[1].monitor, pSVar31 != (System_Single_array *)0x0)) {
              pSVar26 = (System_Single_array *)(__this->fields)._frames_5__8;
              pSVar24 = (__this->fields)._mins_5__11;
              pSVar33 = (__this->fields)._maxes_5__12;
              plVar35 = (long *)pSVar31;
              pSVar23 = (System_Single_array *)
                        UnityEngine_Component__get_transform
                                  ((UnityEngine_Component_o *)pSVar31,(MethodInfo *)0x0);
              if (pSVar23 != (System_Single_array *)0x0) {
                UVar40 = UnityEngine_Transform__get_position
                                   ((UnityEngine_Transform_o *)pSVar23,(MethodInfo *)0x0);
                uVar2 = (__this->fields)._startPosition_5__10.fields.x;
                uVar7 = (__this->fields)._startPosition_5__10.fields.y;
                position.fields.x = UVar40.fields.x - (float)uVar2;
                position.fields.y = UVar40.fields.y - (float)uVar7;
                position.fields.z = UVar40.fields.z - (__this->fields)._startPosition_5__10.fields.z;
                pSVar27 = Controllers_DebugAttackKeyframes__DebugCreateFrameJSON
                                    ((Controllers_DebugAttackKeyframes_o *)pSVar23,iVar37,
                                     (Characters_BaseHitbox_o *)pSVar31,pSVar24,pSVar33,position,in_R9);
                plVar35 = (long *)pSVar23;
                if (pSVar26 != (System_Single_array *)0x0) {
                  pIVar14 = (pSVar26->obj).klass;
                  (*(((System_Collections_Generic_Dictionary_object__object__VTable *)pIVar14->vtable)->
                    _21_System_Collections_IDictionary_get_Item).methodPtr)
                            (pSVar26,pSVar27,
                             (((System_Collections_Generic_Dictionary_object__object__VTable *)pIVar14->vtable
                              )->_21_System_Collections_IDictionary_get_Item).method);
                  pCVar38 = (Controllers_DebugAttackKeyframes_o *)CONCAT44(uVar42,uVar41);
                  goto label_0428839c;
                }
              }
            }
          }
        }
      }
      else {
        pSVar29 = (__this->fields)._frames_5__8;
        plVar35 = (long *)(System_Single_array *)0x0;
        if (pSVar29 != (SimpleJSONFixed_JSONArray_o *)0x0) {
          iVar37 = (__this->fields)._total_5__4;
          iVar21 = (*(pSVar29->klass->vtable)._11_get_Count.methodPtr)();
          (__this->fields)._total_5__4 = iVar21 + iVar37;
          pSVar27 = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONObject);
          SimpleJSONFixed_JSONObject___ctor(pSVar27,(MethodInfo *)0x0);
          pSVar31 = (System_Single_array *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONArray);
          plVar35 = (long *)pSVar31;
          SimpleJSONFixed_JSONArray___ctor((SimpleJSONFixed_JSONArray_o *)pSVar31,(MethodInfo *)0x0);
          pSVar26 = (__this->fields)._mins_5__11;
          if (pSVar26 != (System_Single_array *)0x0) {
            if ((int)pSVar26->max_length == 0) goto label_04289028;
            fVar39 = pSVar26->m_Items[0];
            if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            plVar35 = (long *)0x0;
            pSVar32 = SimpleJSONFixed_JSONNode__op_Implicit_3f79e30(fVar39,(MethodInfo *)0x0);
            if (pSVar31 != (System_Single_array *)0x0) {
              pIVar14 = (pSVar31->obj).klass;
              plVar35 = (long *)pSVar31;
              (*(((System_Collections_Generic_Dictionary_object__object__VTable *)pIVar14->vtable)->
                _21_System_Collections_IDictionary_get_Item).methodPtr)
                        (pSVar31,pSVar32,
                         (((System_Collections_Generic_Dictionary_object__object__VTable *)pIVar14->vtable)->
                         _21_System_Collections_IDictionary_get_Item).method);
              pSVar26 = (__this->fields)._maxes_5__12;
              if (pSVar26 != (System_Single_array *)0x0) {
                if ((int)pSVar26->max_length == 0) goto label_04289028;
                pSVar32 = SimpleJSONFixed_JSONNode__op_Implicit_3f79e30(pSVar26->m_Items[0],(MethodInfo *)0x0)
                ;
                pIVar14 = (pSVar31->obj).klass;
                (*(((System_Collections_Generic_Dictionary_object__object__VTable *)pIVar14->vtable)->
                  _21_System_Collections_IDictionary_get_Item).methodPtr)
                          (pSVar31,pSVar32,
                           (((System_Collections_Generic_Dictionary_object__object__VTable *)pIVar14->vtable)
                           ->_21_System_Collections_IDictionary_get_Item).method);
                pSVar24 = (System_Single_array *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONArray);
                plVar35 = (long *)pSVar24;
                SimpleJSONFixed_JSONArray___ctor((SimpleJSONFixed_JSONArray_o *)pSVar24,(MethodInfo *)0x0);
                pSVar26 = (__this->fields)._mins_5__11;
                if (pSVar26 != (System_Single_array *)0x0) {
                  if ((uint)pSVar26->max_length < 2) goto label_04289028;
                  plVar35 = (long *)0x0;
                  pSVar32 = SimpleJSONFixed_JSONNode__op_Implicit_3f79e30
                                      (pSVar26->m_Items[1],(MethodInfo *)0x0);
                  if (pSVar24 != (System_Single_array *)0x0) {
                    pIVar14 = (pSVar24->obj).klass;
                    plVar35 = (long *)pSVar24;
                    (*(((System_Collections_Generic_Dictionary_object__object__VTable *)pIVar14->vtable)->
                      _21_System_Collections_IDictionary_get_Item).methodPtr)
                              (pSVar24,pSVar32,
                               (((System_Collections_Generic_Dictionary_object__object__VTable *)
                                pIVar14->vtable)->_21_System_Collections_IDictionary_get_Item).method);
                    pSVar26 = (__this->fields)._maxes_5__12;
                    if (pSVar26 != (System_Single_array *)0x0) {
                      if ((uint)pSVar26->max_length < 2) goto label_04289028;
                      pSVar32 = SimpleJSONFixed_JSONNode__op_Implicit_3f79e30
                                          (pSVar26->m_Items[1],(MethodInfo *)0x0);
                      pIVar14 = (pSVar24->obj).klass;
                      (*(((System_Collections_Generic_Dictionary_object__object__VTable *)pIVar14->vtable)->
                        _21_System_Collections_IDictionary_get_Item).methodPtr)
                                (pSVar24,pSVar32,
                                 (((System_Collections_Generic_Dictionary_object__object__VTable *)
                                  pIVar14->vtable)->_21_System_Collections_IDictionary_get_Item).method);
                      pSVar33 = (System_Single_array *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONArray);
                      plVar35 = (long *)pSVar33;
                      SimpleJSONFixed_JSONArray___ctor
                                ((SimpleJSONFixed_JSONArray_o *)pSVar33,(MethodInfo *)0x0);
                      pSVar26 = (__this->fields)._mins_5__11;
                      if (pSVar26 != (System_Single_array *)0x0) {
                        if ((uint)pSVar26->max_length < 3) goto label_04289028;
                        plVar35 = (long *)0x0;
                        pSVar32 = SimpleJSONFixed_JSONNode__op_Implicit_3f79e30
                                            (pSVar26->m_Items[2],(MethodInfo *)0x0);
                        if (pSVar33 != (System_Single_array *)0x0) {
                          pIVar14 = (pSVar33->obj).klass;
                          plVar35 = (long *)pSVar33;
                          (*(((System_Collections_Generic_Dictionary_object__object__VTable *)pIVar14->vtable)
                            ->_21_System_Collections_IDictionary_get_Item).methodPtr)
                                    (pSVar33,pSVar32,
                                     (((System_Collections_Generic_Dictionary_object__object__VTable *)
                                      pIVar14->vtable)->_21_System_Collections_IDictionary_get_Item).method);
                          pSVar26 = (__this->fields)._maxes_5__12;
                          if (pSVar26 != (System_Single_array *)0x0) {
                            if ((uint)pSVar26->max_length < 3) goto label_04289028;
                            pSVar32 = SimpleJSONFixed_JSONNode__op_Implicit_3f79e30
                                                (pSVar26->m_Items[2],(MethodInfo *)0x0);
                            pIVar14 = (pSVar33->obj).klass;
                            plVar35 = (long *)pSVar33;
                            (*(((System_Collections_Generic_Dictionary_object__object__VTable *)
                               pIVar14->vtable)->_21_System_Collections_IDictionary_get_Item).methodPtr)
                                      (pSVar33,pSVar32,
                                       (((System_Collections_Generic_Dictionary_object__object__VTable *)
                                        pIVar14->vtable)->_21_System_Collections_IDictionary_get_Item).method)
                            ;
                            if (pSVar27 != (SimpleJSONFixed_JSONObject_o *)0x0) {
                              (*(pSVar27->klass->vtable)._8_set_Item.methodPtr)
                                        (pSVar27,"X",pSVar31,
                                         (pSVar27->klass->vtable)._8_set_Item.method);
                              (*(pSVar27->klass->vtable)._8_set_Item.methodPtr)
                                        (pSVar27,"Y",pSVar24,
                                         (pSVar27->klass->vtable)._8_set_Item.method);
                              (*(pSVar27->klass->vtable)._8_set_Item.methodPtr)
                                        (pSVar27,"Z",pSVar33,
                                         (pSVar27->klass->vtable)._8_set_Item.method);
                              pSVar17 = (__this->fields)._newInfo_5__7;
                              plVar35 = (long *)(System_Single_array *)0x0;
                              if (pSVar17 != (SimpleJSONFixed_JSONObject_o *)0x0) {
                                (*(pSVar17->klass->vtable)._8_set_Item.methodPtr)
                                          (pSVar17,"Ranges",pSVar27,
                                           (pSVar17->klass->vtable)._8_set_Item.method);
                                pSVar27 = (__this->fields)._newInfo_5__7;
                                plVar35 = (long *)(System_Single_array *)0x0;
                                if (pSVar27 != (SimpleJSONFixed_JSONObject_o *)0x0) {
                                  (*(pSVar27->klass->vtable)._8_set_Item.methodPtr)
                                            (pSVar27,"Keyframes",(__this->fields)._frames_5__8,
                                             (pSVar27->klass->vtable)._8_set_Item.method);
                                  pSVar32 = (__this->fields)._newData_5__3;
                                  plVar35 = (long *)(System_Single_array *)0x0;
                                  if (pSVar32 != (SimpleJSONFixed_JSONNode_o *)0x0) {
                                    (*(pSVar32->klass->vtable)._8_set_Item.methodPtr)
                                              (pSVar32,(__this->fields)._attackName_5__6,
                                               (__this->fields)._newInfo_5__7,
                                               (pSVar32->klass->vtable)._8_set_Item.method);
                                    unaff_RBX = (System_Single_array *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitForSeconds);
                                    UnityEngine_WaitForSeconds___ctor
                                              ((UnityEngine_WaitForSeconds_o *)unaff_RBX,0.5,(MethodInfo *)0x0
                                              );
                                    (__this->fields).__2__current = (Il2CppObject *)unaff_RBX;
                                    il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,unaff_RBX);
                                    (__this->fields).__1__state = 3;
                                    goto label_0428900d;
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
    if ((((pCVar38 != (Controllers_DebugAttackKeyframes_o *)0x0) &&
         (pCVar22 = (pCVar38->fields)._titan, pCVar22 != (Characters_BaseTitan_o *)0x0)) &&
        (lVar15 = *(long *)&(pCVar22->fields).Dead, lVar15 != 0)) &&
       (plVar35 = *(long **)(lVar15 + 0x10), (System_Single_array *)plVar35 != (System_Single_array *)0x0)) {
      UnityEngine_Transform__set_position
                ((UnityEngine_Transform_o *)plVar35,
                 (UnityEngine_Vector3_o)(__this->fields)._startPosition_5__10.fields,(MethodInfo *)0x0);
      pCVar22 = (pCVar38->fields)._titan;
      if ((pCVar22 != (Characters_BaseTitan_o *)0x0) &&
         (lVar15 = *(long *)&(pCVar22->fields).Dead, lVar15 != 0)) {
        pUVar16 = *(UnityEngine_Transform_o **)(lVar15 + 0x10);
        if (g_data_057a6843 == '\0') {
          plVar35 = &TypeInfo_Quaternion;
          il2cpp_runtime_helper_023445d0();
          g_data_057a6843 = '\x01';
        }
        if (pUVar16 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__set_rotation
                    (pUVar16,(UnityEngine_Quaternion_o)
                             **(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8),(MethodInfo *)0x0);
          unaff_RBX = (System_Single_array *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitForSeconds);
          UnityEngine_WaitForSeconds___ctor((UnityEngine_WaitForSeconds_o *)unaff_RBX,0.5,(MethodInfo *)0x0);
          (__this->fields).__2__current = (Il2CppObject *)unaff_RBX;
          il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,unaff_RBX);
          (__this->fields).__1__state = 4;
          goto label_0428900d;
        }
      }
    }
    break;
  case 4:
    (__this->fields).__1__state = -1;
    (__this->fields)._newInfo_5__7 = (SimpleJSONFixed_JSONObject_o *)0x0;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._newInfo_5__7,0);
    (__this->fields)._frames_5__8 = (SimpleJSONFixed_JSONArray_o *)0x0;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._frames_5__8,0);
    (__this->fields)._startPosition_5__10.fields.x = 0.0;
    (__this->fields)._startPosition_5__10.fields.y = 0.0;
    *(undefined8 *)&(__this->fields)._startPosition_5__10.fields.z = 0;
    *(undefined4 *)((long)&(__this->fields)._mins_5__11 + 4) = 0;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._mins_5__11,0);
    (__this->fields)._maxes_5__12 = (System_Single_array *)0x0;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._maxes_5__12,0);
    pSVar36 = (System_Collections_Generic_Dictionary_Enumerator_string__JSONNode__o *)
              &(__this->fields)._attackName_5__6;
    (__this->fields)._attackName_5__6 = (System_String_o *)0x0;
label_04288962:
    il2cpp_runtime_helper_022b4080(pSVar36,0);
    method_00 = &(__this->fields).__7__wrap4;
    __this_01.fields.m_Enumerator.fields.m_Object.fields._dictionary._0_4_ = uVar41;
    __this_01.fields.m_Enumerator.fields._0_8_ = in_stack_fffffffffffffed8;
    __this_01.fields.m_Enumerator.fields.m_Object.fields._dictionary._4_4_ = uVar42;
    __this_01.fields.m_Enumerator.fields.m_Object.fields._version = in_stack_fffffffffffffee8;
    __this_01.fields.m_Enumerator.fields.m_Object.fields._index = in_stack_fffffffffffffeec;
    __this_01.fields.m_Enumerator.fields.m_Object.fields._current.fields.key._0_4_ = in_stack_fffffffffffffef0
    ;
    __this_01.fields.m_Enumerator.fields.m_Object.fields._current.fields.key._4_4_ = in_stack_fffffffffffffef4
    ;
    __this_01.fields.m_Enumerator.fields.m_Object.fields._current.fields.value =
         (Il2CppObject *)in_stack_fffffffffffffef8;
    __this_01.fields.m_Enumerator.fields.m_Object.fields._32_8_ = in_stack_ffffffffffffff00;
    __this_01.fields.m_Enumerator.fields.m_Array.fields._list =
         (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff08;
    __this_01.fields.m_Enumerator.fields.m_Array.fields._8_8_ = in_stack_ffffffffffffff10;
    __this_01.fields.m_Enumerator.fields.m_Array.fields._current =
         (SimpleJSONFixed_JSONNode_o *)in_stack_ffffffffffffff18;
    bVar20 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext(__this_01,(MethodInfo *)method_00);
    if ((char)bVar20 != '\0') {
      ppSVar34 = &(__this->fields)._attackName_5__6;
      ppSVar1 = &(__this->fields)._newInfo_5__7;
      do {
        __this_03.fields.m_Enumerator.fields.m_Object.fields._dictionary._0_4_ = uVar41;
        __this_03.fields.m_Enumerator.fields._0_8_ = in_stack_fffffffffffffed8;
        __this_03.fields.m_Enumerator.fields.m_Object.fields._dictionary._4_4_ = uVar42;
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
        pSVar25 = SimpleJSONFixed_JSONNode_KeyEnumerator__get_Current(__this_03,(MethodInfo *)method_00);
        (__this->fields)._attackName_5__6 = pSVar25;
        il2cpp_runtime_helper_022b4080(ppSVar34,pSVar25);
        pSVar32 = (__this->fields)._data_5__2;
        plVar35 = (long *)(System_Single_array *)0x0;
        if (pSVar32 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_04289023;
        pSVar26 = (System_Single_array *)
                  (*(pSVar32->klass->vtable)._7_get_Item.methodPtr)
                            (pSVar32,*ppSVar34,(pSVar32->klass->vtable)._7_get_Item.method);
        pSVar27 = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONObject);
        SimpleJSONFixed_JSONObject___ctor(pSVar27,(MethodInfo *)0x0);
        *ppSVar1 = pSVar27;
        plVar35 = (long *)ppSVar1;
        il2cpp_runtime_helper_022b4080(ppSVar1,pSVar27);
        if ((pSVar26 == (System_Single_array *)0x0) ||
           (pIVar14 = (pSVar26->obj).klass,
           plVar28 = (long *)(*(((System_Collections_Generic_Dictionary_object__object__VTable *)
                                pIVar14->vtable)->
                               _7_System_Collections_Generic_IDictionary_TKey_TValue__get_Values).methodPtr)
                                       (pSVar26,"Far",
                                        (((System_Collections_Generic_Dictionary_object__object__VTable *)
                                         pIVar14->vtable)->
                                        _7_System_Collections_Generic_IDictionary_TKey_TValue__get_Values).
                                        method), plVar35 = (long *)pSVar26, plVar28 == (long *)0x0))
        goto label_04289023;
        cVar19 = (**(code **)(*plVar28 + 0x3a8))(plVar28,*(undefined8 *)(*plVar28 + 0x3b0));
        if ((cVar19 == '\0') &&
           (bVar20 = System_String__op_Equality(*ppSVar34,"AttackBellyFlop",(MethodInfo *)0x0),
           (char)bVar20 == '\0')) {
          pSVar29 = (SimpleJSONFixed_JSONArray_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONArray);
          SimpleJSONFixed_JSONArray___ctor(pSVar29,(MethodInfo *)0x0);
          (__this->fields)._frames_5__8 = pSVar29;
          il2cpp_runtime_helper_022b4080();
          plVar35 = (long *)0x0;
          fVar39 = UnityEngine_Time__get_fixedTime((MethodInfo *)0x0);
          (__this->fields)._startTime_5__9 = fVar39;
          pCVar38 = (Controllers_DebugAttackKeyframes_o *)CONCAT44(uVar42,uVar41);
          if (((pCVar38 == (Controllers_DebugAttackKeyframes_o *)0x0) ||
              (pCVar22 = (pCVar38->fields)._titan, pCVar22 == (Characters_BaseTitan_o *)0x0)) ||
             (lVar15 = *(long *)&(pCVar22->fields).Dead, lVar15 == 0)) goto label_04289023;
          pUVar16 = *(UnityEngine_Transform_o **)(lVar15 + 0x10);
          plVar35 = (long *)(System_Single_array *)0x0;
          if (pUVar16 == (UnityEngine_Transform_o *)0x0) goto label_04289023;
          UVar40 = UnityEngine_Transform__get_position(pUVar16,(MethodInfo *)0x0);
          (__this->fields)._startPosition_5__10.fields.x = (float)(int)UVar40.fields._0_8_;
          (__this->fields)._startPosition_5__10.fields.y = (float)(int)((ulong)UVar40.fields._0_8_ >> 0x20);
          (__this->fields)._startPosition_5__10.fields.z = UVar40.fields.z;
          pSVar26 = (System_Single_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_float,3);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_3bc4140
                    ((System_Array_o *)pSVar26,fld_CA37AD904FC6BEA9F844804EA32D830AC222F833C1C12C44DAD8B677,(MethodInfo *)0x0);
          (__this->fields)._mins_5__11 = pSVar26;
          il2cpp_runtime_helper_022b4080(&(__this->fields)._mins_5__11,pSVar26);
          unaff_RBX = (System_Single_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_float,3);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_3bc4140
                    ((System_Array_o *)unaff_RBX,fld_DD6DFD036D588321FCD10D32CBA47D659057F3F8DA5C7AD402B7A500,(MethodInfo *)0x0);
          (__this->fields)._maxes_5__12 = unaff_RBX;
          il2cpp_runtime_helper_022b4080(&(__this->fields)._maxes_5__12,unaff_RBX);
          plVar35 = (long *)(pCVar38->fields)._titan;
          if ((System_Single_array *)plVar35 == (System_Single_array *)0x0) goto label_04289023;
          pIVar14 = (((System_Single_array *)plVar35)->obj).klass;
          (**(code **)((long)((System_Collections_Generic_Dictionary_object__object__VTable *)pIVar14->vtable
                             + 2) + 0x240))
                    (plVar35,(__this->fields)._attackName_5__6,
                     *(undefined8 *)
                      ((long)((System_Collections_Generic_Dictionary_object__object__VTable *)pIVar14->vtable
                             + 2) + 0x248));
          (__this->fields)._currFrame_5__13 = -100;
          pCVar22 = (pCVar38->fields)._titan;
          if (pCVar22 == (Characters_BaseTitan_o *)0x0) goto label_04289023;
          goto label_04288276;
        }
        __this_02.fields.m_Enumerator.fields.m_Object.fields._dictionary._0_4_ = uVar41;
        __this_02.fields.m_Enumerator.fields._0_8_ = in_stack_fffffffffffffed8;
        __this_02.fields.m_Enumerator.fields.m_Object.fields._dictionary._4_4_ = uVar42;
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
        bVar20 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext(__this_02,(MethodInfo *)method_00);
      } while ((char)bVar20 != '\0');
    }
    (__this->fields).__7__wrap4.fields.m_Enumerator.fields.m_Array.fields._list =
         (System_Collections_Generic_List_T__o *)0x0;
    pSVar18 = &(__this->fields).__7__wrap4.fields.m_Enumerator;
    (pSVar18->fields).m_Array.fields._index = 0;
    (pSVar18->fields).m_Array.fields._version = 0;
    (__this->fields).__7__wrap4.fields.m_Enumerator.fields.m_Object.fields._current.fields.value =
         (Il2CppObject *)0x0;
    *(undefined8 *)
     &(__this->fields).__7__wrap4.fields.m_Enumerator.fields.m_Object.fields._getEnumeratorRetType = 0;
    pSVar18 = &(__this->fields).__7__wrap4.fields.m_Enumerator;
    (pSVar18->fields).m_Object.fields._version = 0;
    (pSVar18->fields).m_Object.fields._index = 0;
    (__this->fields).__7__wrap4.fields.m_Enumerator.fields.m_Object.fields._current.fields.key =
         (Il2CppObject *)0x0;
    *(undefined8 *)&(method_00->fields).m_Enumerator.fields = 0;
    (__this->fields).__7__wrap4.fields.m_Enumerator.fields.m_Object.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
    (__this->fields).__7__wrap4.fields.m_Enumerator.fields.m_Array.fields._current =
         (SimpleJSONFixed_JSONNode_o *)0x0;
    pSVar32 = (__this->fields)._newData_5__3;
    plVar35 = (long *)(System_Single_array *)0x0;
    if (pSVar32 != (SimpleJSONFixed_JSONNode_o *)0x0) {
      pSVar25 = (System_String_o *)
                (*(pSVar32->klass->vtable)._30_ToString.methodPtr)
                          (pSVar32,4,(pSVar32->klass->vtable)._30_ToString.method);
      if (*(int *)(TypeInfo_FolderPaths + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      path = System_String__Concat_3ae5ba0
                       ((System_String_o *)**(undefined8 **)(TypeInfo_FolderPaths + 0xb8),"/Keyframes.txt",
                        (MethodInfo *)0x0);
      System_IO_File__WriteAllText(path,pSVar25,(MethodInfo *)0x0);
      pIVar30 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8);
      if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Debug__Log(pIVar30,(MethodInfo *)0x0);
      return 0;
    }
  }
label_04289023:
  il2cpp_runtime_helper_022b2c90();
label_04289028:
  il2cpp_runtime_helper_022b2ca0();
  return (bool_conflict)
         (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
         ((System_Single_array *)plVar35)->max_length;
}


// Controllers.DebugAttackKeyframes.<GenerateAttackFrames>d__3$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Controllers_DebugAttackKeyframes__GenerateAttackFrames_d__3__System_Collections_Generic_IEnumerator_System_Object__get_Current (Controllers_DebugAttackKeyframes__GenerateAttackFrames_d__3_o* __this, const MethodInfo* method);
// 0x4289030

Il2CppObject *
Controllers_DebugAttackKeyframes__GenerateAttackFrames_d__3__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Controllers_DebugAttackKeyframes__GenerateAttackFrames_d__3_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Controllers.DebugAttackKeyframes.<GenerateAttackFrames>d__3$$System.Collections.IEnumerator.Reset
// il2cpp: void Controllers_DebugAttackKeyframes__GenerateAttackFrames_d__3__System_Collections_IEnumerator_Reset (Controllers_DebugAttackKeyframes__GenerateAttackFrames_d__3_o* __this, const MethodInfo* method);
// 0x4289040

void Controllers_DebugAttackKeyframes__GenerateAttackFrames_d__3__System_Collections_IEnumerator_Reset
               (Controllers_DebugAttackKeyframes__GenerateAttackFrames_d__3_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_helper_023052d0(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
  il2cpp_runtime_helper_022b2b10(__this_00,uVar1);
  return;
}


// Controllers.DebugAttackKeyframes.<GenerateAttackFrames>d__3$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Controllers_DebugAttackKeyframes__GenerateAttackFrames_d__3__System_Collections_IEnumerator_get_Current (Controllers_DebugAttackKeyframes__GenerateAttackFrames_d__3_o* __this, const MethodInfo* method);
// 0x4289080

Il2CppObject *
Controllers_DebugAttackKeyframes__GenerateAttackFrames_d__3__System_Collections_IEnumerator_get_Current
          (Controllers_DebugAttackKeyframes__GenerateAttackFrames_d__3_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Controllers.DebugAttackKeyframes$$Awake
// il2cpp: void Controllers_DebugAttackKeyframes__Awake (Controllers_DebugAttackKeyframes_o* __this, const MethodInfo* method);
// 0x42878b0

void Controllers_DebugAttackKeyframes__Awake(Controllers_DebugAttackKeyframes_o *__this,MethodInfo *method)

{
  Characters_BaseTitan_o **ppCVar1;
  System_String_o **ppSVar2;
  byte bVar3;
  byte bVar4;
  System_Collections_Generic_Dictionary_TKey__TValue__o *__this_00;
  Characters_BaseTitan_o *pCVar5;
  System_Type_o *pSVar6;
  System_String_o *pSVar7;
  Il2CppClass *pIVar8;
  Il2CppObject *__this_01;
  undefined4 uVar9;
  Il2CppClass *__this_02;
  Il2CppObject *__this_03;
  
  if (g_data_057adcb7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseShifter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_BasicTitan);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseTitan_GetComponent_BaseTitan);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&"Characters.");
    il2cpp_runtime_helper_023445d0(&"Titan");
    il2cpp_runtime_helper_023445d0(&"Shifter");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057adcb7 = '\x01';
  }
  pCVar5 = (Characters_BaseTitan_o *)
           UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this,MethodInfo_BaseTitan_GetComponent_BaseTitan);
  ppCVar1 = &(__this->fields)._titan;
  (__this->fields)._titan = pCVar5;
  __this_02 = (Il2CppClass *)ppCVar1;
  il2cpp_runtime_helper_022b4080();
  pCVar5 = (__this->fields)._titan;
  if (pCVar5 == (Characters_BaseTitan_o *)0x0) goto label_04287b03;
  (pCVar5->fields).SprintStaminaConsumption = 1.0;
  __this_00 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)(pCVar5->fields).TargetEnemy;
  __this_02 = (Il2CppClass *)0x0;
  if (__this_00 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_04287b03;
  System_Collections_Generic_Dictionary_object__float___Clear(__this_00,MethodInfo_Void_Clear);
  __this_02 = (Il2CppClass *)*ppCVar1;
  if (__this_02 != (Il2CppClass *)0x0) {
    pIVar8 = (__this_02->_1).image;
    bVar3 = (pIVar8->_2).naturalAligment;
    bVar4 = (TypeInfo_BasicTitan->_2).naturalAligment;
    if ((bVar3 < bVar4) || ((pIVar8->_2).typeHierarchy[(ulong)bVar4 - 1] != TypeInfo_BasicTitan)) {
      bVar4 = (TypeInfo_BaseShifter->_2).naturalAligment;
      if ((bVar3 < bVar4) || ((pIVar8->_2).typeHierarchy[(ulong)bVar4 - 1] != TypeInfo_BaseShifter))
      goto label_04287a9a;
      pSVar6 = System_Object__GetType((Il2CppObject *)__this_02,(MethodInfo *)0x0);
      if (pSVar6 == (System_Type_o *)0x0) goto label_04287b03;
      pSVar7 = (System_String_o *)
               (*(pSVar6->klass->vtable)._3_ToString.methodPtr)
                         (pSVar6,(pSVar6->klass->vtable)._3_ToString.method);
      ppSVar2 = &(__this->fields)._name;
      (__this->fields)._name = pSVar7;
      il2cpp_runtime_helper_022b4080(ppSVar2);
      pSVar7 = (__this->fields)._name;
      __this_02 = (Il2CppClass *)0x0;
      if (pSVar7 == (System_String_o *)0x0) goto label_04287b03;
      pSVar7 = System_String__Replace_3af9030(pSVar7,"Shifter","",(MethodInfo *)0x0);
      *ppSVar2 = pSVar7;
      il2cpp_runtime_helper_022b4080(ppSVar2);
      __this_02 = (Il2CppClass *)0x0;
      if (*ppSVar2 == (System_String_o *)0x0) goto label_04287b03;
      pSVar7 = System_String__Replace_3af9030(*ppSVar2,"Characters.","",(MethodInfo *)0x0);
      *ppSVar2 = pSVar7;
    }
    else {
      (__this->fields)._name = "Titan";
    }
    il2cpp_runtime_helper_022b4080(&(__this->fields)._name);
  }
label_04287a9a:
  if (g_data_057adcb8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GenerateAttackFrames_d__3);
    g_data_057adcb8 = '\x01';
  }
  pIVar8 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_GenerateAttackFrames_d__3);
  __this_02 = pIVar8;
  System_Object___ctor((Il2CppObject *)pIVar8,(MethodInfo *)0x0);
  *(undefined4 *)&(pIVar8->_1).name = 0;
  if (pIVar8 != (Il2CppClass *)0x0) {
    (pIVar8->_1).byval_arg.data = __this;
    il2cpp_runtime_helper_022b4080(&(pIVar8->_1).byval_arg,__this);
    UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
              ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)pIVar8,
               (MethodInfo *)0x0);
    return;
  }
label_04287b03:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adcb8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GenerateAttackFrames_d__3);
    g_data_057adcb8 = '\x01';
  }
  __this_01 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_GenerateAttackFrames_d__3);
  uVar9 = 0;
  __this_03 = __this_01;
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  *(undefined4 *)&__this_01[1].klass = 0;
  if (__this_01 != (Il2CppObject *)0x0) {
    __this_01[2].klass = __this_02;
    il2cpp_runtime_helper_022b4080(__this_01 + 2,__this_02);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_03,(MethodInfo *)0x0);
  *(undefined4 *)&__this_03[1].klass = uVar9;
  return;
}


// Controllers.DebugAttackKeyframes$$GenerateAttackFrames
// il2cpp: System_Collections_IEnumerator_o* Controllers_DebugAttackKeyframes__GenerateAttackFrames (Controllers_DebugAttackKeyframes_o* __this, const MethodInfo* method);
// 0x4287b10

System_Collections_IEnumerator_o *
Controllers_DebugAttackKeyframes__GenerateAttackFrames
          (Controllers_DebugAttackKeyframes_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Collections_IEnumerator_o *extraout_RAX;
  undefined4 uVar1;
  Il2CppObject *__this_01;
  
  if (g_data_057adcb8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GenerateAttackFrames_d__3);
    g_data_057adcb8 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_GenerateAttackFrames_d__3);
  uVar1 = 0;
  __this_01 = __this_00;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_helper_022b4080(__this_00 + 2,__this);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  *(undefined4 *)&__this_01[1].klass = uVar1;
  return extraout_RAX;
}


// Controllers.DebugAttackKeyframes$$DebugCreateFrameJSON
// il2cpp: SimpleJSONFixed_JSONObject_o* Controllers_DebugAttackKeyframes__DebugCreateFrameJSON (Controllers_DebugAttackKeyframes_o* __this, int32_t frame, Characters_BaseHitbox_o* hitbox, System_Single_array* mins, System_Single_array* maxes, UnityEngine_Vector3_o position, const MethodInfo* method);
// 0x4287ba0

SimpleJSONFixed_JSONObject_o *
Controllers_DebugAttackKeyframes__DebugCreateFrameJSON
          (Controllers_DebugAttackKeyframes_o *__this,int32_t frame,Characters_BaseHitbox_o *hitbox,
          System_Single_array *mins,System_Single_array *maxes,UnityEngine_Vector3_o position,
          MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  UnityEngine_Transform_o *__this_00;
  SimpleJSONFixed_JSONObject_o *__this_01;
  SimpleJSONFixed_JSONNode_o *pSVar3;
  SimpleJSONFixed_JSONObject_o *extraout_RAX;
  float fVar4;
  float fVar5;
  float n;
  UnityEngine_Vector3_o UVar6;
  float local_48;
  float fStack_44;
  
  n = position.fields.z;
  if (g_data_057adcb9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SphereCollider);
    il2cpp_runtime_helper_023445d0(&"x");
    il2cpp_runtime_helper_023445d0(&"f");
    il2cpp_runtime_helper_023445d0(&"y");
    il2cpp_runtime_helper_023445d0(&"z");
    il2cpp_runtime_helper_023445d0(&"r");
    g_data_057adcb9 = '\x01';
  }
  __this_01 = (SimpleJSONFixed_JSONObject_o *)0x0;
  if ((hitbox == (Characters_BaseHitbox_o *)0x0) ||
     (__this_01 = (SimpleJSONFixed_JSONObject_o *)(hitbox->fields)._collider,
     __this_01 == (SimpleJSONFixed_JSONObject_o *)0x0)) goto label_04287ec1;
  bVar1 = (TypeInfo_SphereCollider->_2).naturalAligment;
  if (((__this_01->klass->_2).naturalAligment < bVar1) ||
     ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_SphereCollider)) goto label_04287ecb;
  fVar4 = UnityEngine_SphereCollider__get_radius((UnityEngine_SphereCollider_o *)__this_01,(MethodInfo *)0x0);
  __this_00 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
  if (__this_00 == (UnityEngine_Transform_o *)0x0) {
label_04287ec1:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    UVar6 = UnityEngine_Transform__get_lossyScale(__this_00,(MethodInfo *)0x0);
    __this_01 = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_helper_023052d0(UVar6.fields.x,UVar6.fields.z,TypeInfo_JSONObject)
    ;
    SimpleJSONFixed_JSONObject___ctor(__this_01,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar3 = SimpleJSONFixed_JSONNode__op_Implicit_3f79f40(frame,(MethodInfo *)0x0);
    if (__this_01 == (SimpleJSONFixed_JSONObject_o *)0x0) goto label_04287ec1;
    fVar4 = fVar4 * UVar6.fields.x;
    (*(__this_01->klass->vtable)._8_set_Item.methodPtr)
              (__this_01,"f",pSVar3,(__this_01->klass->vtable)._8_set_Item.method);
    pSVar3 = SimpleJSONFixed_JSONNode__op_Implicit_3f79e30(fVar4,(MethodInfo *)0x0);
    (*(__this_01->klass->vtable)._8_set_Item.methodPtr)
              (__this_01,"r",pSVar3,(__this_01->klass->vtable)._8_set_Item.method);
    local_48 = position.fields.x;
    pSVar3 = SimpleJSONFixed_JSONNode__op_Implicit_3f79e30(local_48,(MethodInfo *)0x0);
    (*(__this_01->klass->vtable)._8_set_Item.methodPtr)
              (__this_01,"x",pSVar3,(__this_01->klass->vtable)._8_set_Item.method);
    fStack_44 = position.fields.y;
    pSVar3 = SimpleJSONFixed_JSONNode__op_Implicit_3f79e30(fStack_44,(MethodInfo *)0x0);
    (*(__this_01->klass->vtable)._8_set_Item.methodPtr)
              (__this_01,"y",pSVar3,(__this_01->klass->vtable)._8_set_Item.method);
    pSVar3 = SimpleJSONFixed_JSONNode__op_Implicit_3f79e30(n,(MethodInfo *)0x0);
    (*(__this_01->klass->vtable)._8_set_Item.methodPtr)
              (__this_01,"z",pSVar3,(__this_01->klass->vtable)._8_set_Item.method);
    if (mins == (System_Single_array *)0x0) goto label_04287ec1;
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
          if (maxes == (System_Single_array *)0x0) goto label_04287ec1;
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
                return __this_01;
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2ca0();
label_04287ecb:
  il2cpp_runtime_helper_022b2fd0();
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_01,(MethodInfo *)0x0);
  return extraout_RAX;
}


// Controllers.DebugAttackKeyframes$$.ctor
// il2cpp: void Controllers_DebugAttackKeyframes___ctor (Controllers_DebugAttackKeyframes_o* __this, const MethodInfo* method);
// 0x4287ee0

void Controllers_DebugAttackKeyframes___ctor(Controllers_DebugAttackKeyframes_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


