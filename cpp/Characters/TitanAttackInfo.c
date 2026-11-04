// Type: Characters.TitanAttackInfo
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/TitanAttackInfo.cs
// Prior real C# source (older reference): Assets/Scripts/Controllers/TitanAttackInfo.cs
// --------------------------------

// Characters.TitanAttackInfo$$.ctor
// il2cpp: void Characters_TitanAttackInfo___ctor (Characters_TitanAttackInfo_o* __this, SimpleJSONFixed_JSONNode_o* attackInfo, SimpleJSONFixed_JSONNode_o* keyframes, const MethodInfo* method);
// 0x1821cc330

void Characters_TitanAttackInfo___ctor
               (Characters_TitanAttackInfo_o *__this,SimpleJSONFixed_JSONNode_o *attackInfo,
               SimpleJSONFixed_JSONNode_o *keyframes,MethodInfo *method)

{
  int32_t *piVar1;
  Characters_TitanAttackKeyframe_array *pCVar2;
  MethodInfo *pMVar3;
  bool bVar4;
  char cVar5;
  int32_t iVar6;
  System_Collections_Generic_List_TitanAttackKeyframe__o *pSVar7;
  System_Xml_Schema_XmlSchema_o *pSVar8;
  System_String_o *pSVar9;
  System_Collections_IEnumerator_o *pSVar10;
  longlong *plVar11;
  Characters_TitanAttackKeyframe_o *item;
  longlong *plVar12;
  uint uVar13;
  System_Type_o *pSVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  if (Il2CppMethodInitialized_184346eab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_TitanAttackKeyframe_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_TitanAttackKeyframe_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_TitanAttackKeyframe);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanAttackKeyframe);
    il2cpp_codegen_initialize_runtime_metadata(&"Ranges");
    il2cpp_codegen_initialize_runtime_metadata(&"RightArm");
    il2cpp_codegen_initialize_runtime_metadata(&"Z");
    il2cpp_codegen_initialize_runtime_metadata(&"Keyframes");
    il2cpp_codegen_initialize_runtime_metadata(&"Far");
    il2cpp_codegen_initialize_runtime_metadata(&"LeftArm");
    il2cpp_codegen_initialize_runtime_metadata(&"MapObject");
    il2cpp_codegen_initialize_runtime_metadata(&"Y");
    il2cpp_codegen_initialize_runtime_metadata(&"X");
    il2cpp_codegen_initialize_runtime_metadata(&"HumanOnly");
    Il2CppMethodInitialized_184346eab = '\x01';
  }
  pSVar7 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_TitanAttackKeyframe);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar7,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_TitanAttackKeyframe_ctor);
  (__this->fields).Keyframes = pSVar7;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Keyframes,pSVar7);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  if ((attackInfo != (SimpleJSONFixed_JSONNode_o *)0x0) &&
     (pSVar8 = (*(attackInfo->klass->vtable)._7_get_Item.methodPtr)
                         (attackInfo,(MethodInfo *)"HumanOnly"),
     pSVar8 != (System_Xml_Schema_XmlSchema_o *)0x0)) {
    bVar4 = (bool)(*(code *)((Il2CppClass *)pSVar8->klass)->vtable[39].methodPtr)
                            (pSVar8,((Il2CppClass *)pSVar8->klass)->vtable[39].method);
    (__this->fields).HumanOnly = bVar4;
    bVar4 = (*(attackInfo->klass->vtable)._28_HasKey.methodPtr)
                      (attackInfo,(MethodInfo *)"MapObject");
    if (bVar4) {
      pSVar8 = (*(attackInfo->klass->vtable)._7_get_Item.methodPtr)
                         (attackInfo,(MethodInfo *)"MapObject");
      if (pSVar8 == (System_Xml_Schema_XmlSchema_o *)0x0) goto label_1821ccdc8;
      cVar5 = (*(code *)((Il2CppClass *)pSVar8->klass)->vtable[39].methodPtr)
                        (pSVar8,((Il2CppClass *)pSVar8->klass)->vtable[39].method);
    }
    else {
      cVar5 = '\x01';
    }
    (__this->fields).MapObject = cVar5 != '\0';
    pSVar8 = (*(attackInfo->klass->vtable)._7_get_Item.methodPtr)
                       (attackInfo,(MethodInfo *)"Far");
    if (pSVar8 != (System_Xml_Schema_XmlSchema_o *)0x0) {
      bVar4 = (bool)(*(code *)((Il2CppClass *)pSVar8->klass)->vtable[39].methodPtr)
                              (pSVar8,((Il2CppClass *)pSVar8->klass)->vtable[39].method);
      (__this->fields).FarOnly = bVar4;
      bVar4 = (*(attackInfo->klass->vtable)._28_HasKey.methodPtr)
                        (attackInfo,(MethodInfo *)"LeftArm");
      if (bVar4) {
        pSVar8 = (*(attackInfo->klass->vtable)._7_get_Item.methodPtr)
                           (attackInfo,(MethodInfo *)"LeftArm");
        if (pSVar8 == (System_Xml_Schema_XmlSchema_o *)0x0) goto label_1821ccdc8;
        cVar5 = (*(code *)((Il2CppClass *)pSVar8->klass)->vtable[39].methodPtr)
                          (pSVar8,((Il2CppClass *)pSVar8->klass)->vtable[39].method);
      }
      else {
        cVar5 = '\0';
      }
      (__this->fields).LeftArm = cVar5 != '\0';
      bVar4 = (*(attackInfo->klass->vtable)._28_HasKey.methodPtr)
                        (attackInfo,(MethodInfo *)"RightArm");
      if (bVar4) {
        pSVar8 = (*(attackInfo->klass->vtable)._7_get_Item.methodPtr)
                           (attackInfo,(MethodInfo *)"RightArm");
        if (pSVar8 == (System_Xml_Schema_XmlSchema_o *)0x0) goto label_1821ccdc8;
        cVar5 = (*(code *)((Il2CppClass *)pSVar8->klass)->vtable[39].methodPtr)
                          (pSVar8,((Il2CppClass *)pSVar8->klass)->vtable[39].method);
      }
      else {
        cVar5 = '\0';
      }
      (__this->fields).RightArm = cVar5 != '\0';
      bVar4 = (*(attackInfo->klass->vtable)._28_HasKey.methodPtr)
                        (attackInfo,(MethodInfo *)"Ranges");
      if (bVar4) {
        pSVar8 = (*(attackInfo->klass->vtable)._7_get_Item.methodPtr)
                           (attackInfo,(MethodInfo *)"Ranges");
        if (((pSVar8 == (System_Xml_Schema_XmlSchema_o *)0x0) ||
            (pSVar9 = (*(pSVar8->klass->vtable)._7_get_IdAttribute.methodPtr)
                                (pSVar8,(MethodInfo *)"X"), pSVar9 == (System_String_o *)0x0
            )) || (pSVar10 = (*(pSVar9->klass->vtable)._5_System_Collections_IEnumerable_GetEnumerator.
                               methodPtr)(pSVar9,(MethodInfo *)0x0),
                  pSVar10 == (System_Collections_IEnumerator_o *)0x0)) goto label_1821ccdc8;
        fVar15 = (float)(*(code *)((Il2CppClass *)pSVar10->klass)->vtable[37].methodPtr)(pSVar10,((Il2CppClass *)pSVar10->klass)->vtable[37].method);
        pSVar9 = (*(pSVar8->klass->vtable)._7_get_IdAttribute.methodPtr)
                           (pSVar8,(MethodInfo *)"Y");
        if ((pSVar9 == (System_String_o *)0x0) ||
           (pSVar10 = (*(pSVar9->klass->vtable)._5_System_Collections_IEnumerable_GetEnumerator.methodPtr)
                                (pSVar9,(MethodInfo *)0x0), pSVar10 == (System_Collections_IEnumerator_o *)0x0
           )) goto label_1821ccdc8;
        fVar16 = (float)(*(code *)((Il2CppClass *)pSVar10->klass)->vtable[37].methodPtr)(pSVar10,((Il2CppClass *)pSVar10->klass)->vtable[37].method);
        pSVar9 = (*(pSVar8->klass->vtable)._7_get_IdAttribute.methodPtr)
                           (pSVar8,(MethodInfo *)"Z");
        if ((pSVar9 == (System_String_o *)0x0) ||
           (pSVar10 = (*(pSVar9->klass->vtable)._5_System_Collections_IEnumerable_GetEnumerator.methodPtr)
                                (pSVar9,(MethodInfo *)0x0), pSVar10 == (System_Collections_IEnumerator_o *)0x0
           )) goto label_1821ccdc8;
        fVar17 = (float)(*(code *)((Il2CppClass *)pSVar10->klass)->vtable[37].methodPtr)(pSVar10,((Il2CppClass *)pSVar10->klass)->vtable[37].method);
        (__this->fields).MinRange.fields.x = fVar15;
        (__this->fields).MinRange.fields.z = fVar17;
        (__this->fields).MinRange.fields.y = fVar16;
        pSVar9 = (*(pSVar8->klass->vtable)._7_get_IdAttribute.methodPtr)
                           (pSVar8,(MethodInfo *)"X");
        if ((pSVar9 == (System_String_o *)0x0) ||
           (pSVar10 = (*(pSVar9->klass->vtable)._5_System_Collections_IEnumerable_GetEnumerator.methodPtr)
                                (pSVar9,(MethodInfo *)0x1), pSVar10 == (System_Collections_IEnumerator_o *)0x0
           )) goto label_1821ccdc8;
        fVar15 = (float)(*(code *)((Il2CppClass *)pSVar10->klass)->vtable[37].methodPtr)(pSVar10,((Il2CppClass *)pSVar10->klass)->vtable[37].method);
        pSVar9 = (*(pSVar8->klass->vtable)._7_get_IdAttribute.methodPtr)
                           (pSVar8,(MethodInfo *)"Y");
        if ((pSVar9 == (System_String_o *)0x0) ||
           (pSVar10 = (*(pSVar9->klass->vtable)._5_System_Collections_IEnumerable_GetEnumerator.methodPtr)
                                (pSVar9,(MethodInfo *)0x1), pSVar10 == (System_Collections_IEnumerator_o *)0x0
           )) goto label_1821ccdc8;
        fVar16 = (float)(*(code *)((Il2CppClass *)pSVar10->klass)->vtable[37].methodPtr)(pSVar10,((Il2CppClass *)pSVar10->klass)->vtable[37].method);
        pSVar9 = (*(pSVar8->klass->vtable)._7_get_IdAttribute.methodPtr)
                           (pSVar8,(MethodInfo *)"Z");
        if ((pSVar9 == (System_String_o *)0x0) ||
           (pSVar10 = (*(pSVar9->klass->vtable)._5_System_Collections_IEnumerable_GetEnumerator.methodPtr)
                                (pSVar9,(MethodInfo *)0x1), pSVar10 == (System_Collections_IEnumerator_o *)0x0
           )) goto label_1821ccdc8;
        fVar17 = (float)(*(code *)((Il2CppClass *)pSVar10->klass)->vtable[37].methodPtr)(pSVar10);
        (__this->fields).MaxRange.fields.z = fVar17;
        (__this->fields).MaxRange.fields.x = fVar15;
        (__this->fields).MaxRange.fields.y = fVar16;
      }
      if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
      }
      bVar4 = SimpleJSONFixed_JSONNode__op_Inequality(keyframes,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if (!bVar4) {
        return;
      }
      pSVar14 = (System_Type_o *)0x0;
      (__this->fields).HasKeyframes = true;
      uVar13 = 0;
      if (keyframes != (SimpleJSONFixed_JSONNode_o *)0x0) {
        while (pSVar8 = (*(keyframes->klass->vtable)._7_get_Item.methodPtr)
                                  (keyframes,(MethodInfo *)"Keyframes"),
              pSVar8 != (System_Xml_Schema_XmlSchema_o *)0x0) {
          pSVar8 = (*(pSVar8->klass->vtable)._11_get_NameAttribute.methodPtr)
                             (pSVar8,(pSVar8->klass->vtable)._11_get_NameAttribute.method);
          if ((int)pSVar8 <= (int)uVar13) {
            pSVar8 = (*(keyframes->klass->vtable)._7_get_Item.methodPtr)
                               (keyframes,(MethodInfo *)"Ranges");
            if (((pSVar8 != (System_Xml_Schema_XmlSchema_o *)0x0) &&
                (pSVar9 = (*(pSVar8->klass->vtable)._7_get_IdAttribute.methodPtr)
                                    (pSVar8,(MethodInfo *)"X"),
                pSVar9 != (System_String_o *)0x0)) &&
               (pSVar10 = (*(pSVar9->klass->vtable)._5_System_Collections_IEnumerable_GetEnumerator.methodPtr)
                                    (pSVar9,(MethodInfo *)0x0),
               pSVar10 != (System_Collections_IEnumerator_o *)0x0)) {
              fVar15 = (float)(*(code *)((Il2CppClass *)pSVar10->klass)->vtable[37].methodPtr)
                                        (pSVar10,((Il2CppClass *)pSVar10->klass)->vtable[37].method);
              pSVar9 = (*(pSVar8->klass->vtable)._7_get_IdAttribute.methodPtr)
                                 (pSVar8,(MethodInfo *)"Y");
              if ((pSVar9 != (System_String_o *)0x0) &&
                 (pSVar10 = (*(pSVar9->klass->vtable)._5_System_Collections_IEnumerable_GetEnumerator.
                              methodPtr)(pSVar9,(MethodInfo *)0x0),
                 pSVar10 != (System_Collections_IEnumerator_o *)0x0)) {
                fVar16 = (float)(*(code *)((Il2CppClass *)pSVar10->klass)->vtable[37].methodPtr)
                                          (pSVar10,((Il2CppClass *)pSVar10->klass)->vtable[37].method);
                pSVar9 = (*(pSVar8->klass->vtable)._7_get_IdAttribute.methodPtr)
                                   (pSVar8,(MethodInfo *)"Z");
                if ((pSVar9 != (System_String_o *)0x0) &&
                   (pSVar10 = (*(pSVar9->klass->vtable)._5_System_Collections_IEnumerable_GetEnumerator.
                                methodPtr)(pSVar9,(MethodInfo *)0x0),
                   pSVar10 != (System_Collections_IEnumerator_o *)0x0)) {
                  fVar17 = (float)(*(code *)((Il2CppClass *)pSVar10->klass)->vtable[37].methodPtr)
                                            (pSVar10,((Il2CppClass *)pSVar10->klass)->vtable[37].method);
                  (__this->fields).MinRange.fields.x = fVar15;
                  (__this->fields).MinRange.fields.z = fVar17;
                  (__this->fields).MinRange.fields.y = fVar16;
                  pSVar9 = (*(pSVar8->klass->vtable)._7_get_IdAttribute.methodPtr)
                                     (pSVar8,(MethodInfo *)"X");
                  if ((pSVar9 != (System_String_o *)0x0) &&
                     (pSVar10 = (*(pSVar9->klass->vtable)._5_System_Collections_IEnumerable_GetEnumerator.
                                  methodPtr)(pSVar9,(MethodInfo *)0x1),
                     pSVar10 != (System_Collections_IEnumerator_o *)0x0)) {
                    fVar15 = (float)(*(code *)((Il2CppClass *)pSVar10->klass)->vtable[37].methodPtr)
                                              (pSVar10,((Il2CppClass *)pSVar10->klass)->vtable[37].method);
                    pSVar9 = (*(pSVar8->klass->vtable)._7_get_IdAttribute.methodPtr)
                                       (pSVar8,(MethodInfo *)"Y");
                    if ((pSVar9 != (System_String_o *)0x0) &&
                       (pSVar10 = (*(pSVar9->klass->vtable)._5_System_Collections_IEnumerable_GetEnumerator.
                                    methodPtr)(pSVar9,(MethodInfo *)0x1),
                       pSVar10 != (System_Collections_IEnumerator_o *)0x0)) {
                      fVar16 = (float)(*(code *)((Il2CppClass *)pSVar10->klass)->vtable[37].methodPtr)
                                                (pSVar10,((Il2CppClass *)pSVar10->klass)->vtable[37].method);
                      pSVar9 = (*(pSVar8->klass->vtable)._7_get_IdAttribute.methodPtr)
                                         (pSVar8,(MethodInfo *)"Z");
                      if ((pSVar9 != (System_String_o *)0x0) &&
                         (pSVar10 = (*(pSVar9->klass->vtable)._5_System_Collections_IEnumerable_GetEnumerator.
                                      methodPtr)(pSVar9,(MethodInfo *)0x1),
                         pSVar10 != (System_Collections_IEnumerator_o *)0x0)) {
                        fVar17 = (float)(*(code *)((Il2CppClass *)pSVar10->klass)->vtable[37].methodPtr)
                                                  (pSVar10,((Il2CppClass *)pSVar10->klass)->vtable[37].method);
                        (__this->fields).MaxRange.fields.z = fVar17;
                        (__this->fields).MaxRange.fields.x = fVar15;
                        (__this->fields).MaxRange.fields.y = fVar16;
                        return;
                      }
                    }
                  }
                }
              }
            }
            break;
          }
          pSVar7 = (__this->fields).Keyframes;
          pSVar8 = (*(keyframes->klass->vtable)._7_get_Item.methodPtr)
                             (keyframes,(MethodInfo *)"Keyframes");
          if (pSVar8 == (System_Xml_Schema_XmlSchema_o *)0x0) break;
          plVar11 = (longlong *)
                    (*(pSVar8->klass->vtable)._5_OnRemove.methodPtr)
                              (pSVar8,pSVar14,(pSVar8->klass->vtable)._5_OnRemove.method);
          item = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_TitanAttackKeyframe);
          if (Il2CppMethodInitialized_184346ead == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&"x");
            il2cpp_codegen_initialize_runtime_metadata(&"f");
            il2cpp_codegen_initialize_runtime_metadata(&"y");
            il2cpp_codegen_initialize_runtime_metadata(&"z");
            il2cpp_codegen_initialize_runtime_metadata(&"r");
            Il2CppMethodInitialized_184346ead = '\x01';
          }
          System_Object___ctor
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)item,(MethodInfo *)0x0);
          if ((plVar11 == (longlong *)0x0) ||
             (plVar12 = (longlong *)
                        (**(code **)(*plVar11 + 0x1a8))
                                  (plVar11,"f",*(undefined8 *)(*plVar11 + 0x1b0)),
             plVar12 == (longlong *)0x0)) break;
          iVar6 = (**(code **)(*plVar12 + 0x368))(plVar12,*(undefined8 *)(*plVar12 + 0x370));
          (item->fields).Frame = iVar6;
          plVar12 = (longlong *)
                    (**(code **)(*plVar11 + 0x1a8))
                              (plVar11,"x",*(undefined8 *)(*plVar11 + 0x1b0));
          if (plVar12 == (longlong *)0x0) break;
          fVar15 = (float)(**(code **)(*plVar12 + 0x388))(plVar12,*(undefined8 *)(*plVar12 + 0x390));
          plVar12 = (longlong *)
                    (**(code **)(*plVar11 + 0x1a8))
                              (plVar11,"y",*(undefined8 *)(*plVar11 + 0x1b0));
          if (plVar12 == (longlong *)0x0) break;
          fVar16 = (float)(**(code **)(*plVar12 + 0x388))(plVar12,*(undefined8 *)(*plVar12 + 0x390));
          plVar12 = (longlong *)
                    (**(code **)(*plVar11 + 0x1a8))
                              (plVar11,"z",*(undefined8 *)(*plVar11 + 0x1b0));
          if (plVar12 == (longlong *)0x0) break;
          fVar17 = (float)(**(code **)(*plVar12 + 0x388))(plVar12,*(undefined8 *)(*plVar12 + 0x390));
          (item->fields)._localPosition.fields.x = fVar15;
          (item->fields)._localPosition.fields.z = fVar17;
          (item->fields)._localPosition.fields.y = fVar16;
          plVar11 = (longlong *)
                    (**(code **)(*plVar11 + 0x1a8))
                              (plVar11,"r",*(undefined8 *)(*plVar11 + 0x1b0));
          if (plVar11 == (longlong *)0x0) break;
          fVar15 = (float)(**(code **)(*plVar11 + 0x388))(plVar11,*(undefined8 *)(*plVar11 + 0x390));
          (item->fields)._radius = fVar15;
          pMVar3 = MethodInfo_System_Collections_Generic_List_TitanAttackKeyframe_Add;
          if (pSVar7 == (System_Collections_Generic_List_TitanAttackKeyframe__o *)0x0) break;
          piVar1 = &(pSVar7->fields)._version;
          *piVar1 = *piVar1 + 1;
          pCVar2 = (pSVar7->fields)._items;
          if (pCVar2 == (Characters_TitanAttackKeyframe_array *)0x0) break;
          uVar13 = (pSVar7->fields)._size;
          if (uVar13 < (uint)pCVar2->max_length) {
            (pSVar7->fields)._size = uVar13 + 1;
            if ((uint)pCVar2->max_length <= uVar13) {
              ThrowIndexOutOfRangeException();
            }
            pCVar2->m_Items[(int)uVar13] = item;
            Il2CppCodeGenWriteBarrier(pCVar2->m_Items + (int)uVar13,item);
            uVar13 = (int)pSVar14 + 1;
            pSVar14 = (System_Type_o *)(ulonglong)uVar13;
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar7,(Il2CppObject *)item,
                       (MethodInfo_93DD50 *)pMVar3->klass->rgctx_data[0xe].method);
            uVar13 = (int)pSVar14 + 1;
            pSVar14 = (System_Type_o *)(ulonglong)uVar13;
          }
        }
      }
    }
  }
label_1821ccdc8:
  ThrowNullReferenceException();
}


// Characters.TitanAttackInfo$$CheckSimpleAttack
// il2cpp: bool Characters_TitanAttackInfo__CheckSimpleAttack (Characters_TitanAttackInfo_o* __this, UnityEngine_Vector3_o relativePosition, const MethodInfo* method);
// 0x1821cc0c0

bool Characters_TitanAttackInfo__CheckSimpleAttack
               (Characters_TitanAttackInfo_o *__this,UnityEngine_Vector3_o *relativePosition,
               MethodInfo *method)

{
  if (((((__this->fields).MinRange.fields.x <= (relativePosition->fields).x) &&
       ((__this->fields).MinRange.fields.y <= (relativePosition->fields).y)) &&
      ((__this->fields).MinRange.fields.z <= (relativePosition->fields).z)) &&
     (((relativePosition->fields).x <= (__this->fields).MaxRange.fields.x &&
      ((relativePosition->fields).y <= (__this->fields).MaxRange.fields.y)))) {
    return (relativePosition->fields).z <= (__this->fields).MaxRange.fields.z;
  }
  return false;
}


// Characters.TitanAttackInfo$$CheckSmartAttack
// il2cpp: bool Characters_TitanAttackInfo__CheckSmartAttack (Characters_TitanAttackInfo_o* __this, UnityEngine_Transform_o* titan, UnityEngine_Vector3_o worldPosition, UnityEngine_Vector3_o velocity, float attackSpeed, float size, const MethodInfo* method);
// 0x1821cc110
// eh: try 0x1821cc1db..0x1821cc31f -> pad 0x183320150 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821cc1ee: nop 
// asm:   0x1821cc2ee: mov rdx, qword ptr [rip + 0x1ece023]  ; MethodInfo_System_Collections_Generic_List_Enumerator_TitanAttackKeyframe_Dispose
// asm:   0x1821cc2f5: mov rcx, qword ptr [rsp + 0x68]
// asm:   0x1821cc2fa: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1821cc2ff: mov rcx, qword ptr [rsp + 0x60]
// asm:   0x1821cc304: test rcx, rcx
// asm:   0x1821cc307: jne 0x1821cc31f
// asm:   0x1821cc31f: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183320150: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183320155: push rbp
// asm:   0x183320156: sub rsp, 0x20
// asm:   0x18332015a: mov rbp, rdx
// asm:   0x18332015d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183320161: mov rcx, qword ptr [rax]
// asm:   0x183320164: mov qword ptr [rbp + 0x60], rcx
// asm:   0x183320168: movabs rax, 0
// asm:   0x183320172: add rsp, 0x20
// asm:   0x183320176: pop rbp
// asm:   0x183320177: ret 

bool Characters_TitanAttackInfo__CheckSmartAttack
               (Characters_TitanAttackInfo_o *__this,UnityEngine_Transform_o *titan,
               UnityEngine_Vector3_o *worldPosition,UnityEngine_Vector3_o *velocity,float attackSpeed,
               float size,MethodInfo *method)

{
  undefined8 uVar1;
  System_Collections_Generic_List_TitanAttackKeyframe__o *__this_00;
  Il2CppObject *pIVar2;
  bool bVar3;
  UnityEngine_Vector3_o *pUVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  UnityEngine_Vector3_Fields local_d8;
  undefined8 local_c8;
  UnityEngine_Vector3_o local_b8;
  undefined1 local_a8 [16];
  Il2CppObject *local_98;
  System_Collections_Generic_List_Enumerator_object__o local_90 [4];
  
  if (Il2CppMethodInitialized_184346eac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_TitanAttackKeyframe_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_TitanAttackKeyframe_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_TitanAttackKeyframe_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_TitanAttackKeyframe_GetEnumerator);
    Il2CppMethodInitialized_184346eac = '\x01';
  }
  local_90[0].fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_90[0].fields._index = 0;
  local_90[0].fields._version = 0;
  local_90[0].fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).Keyframes;
  if (__this_00 == (System_Collections_Generic_List_TitanAttackKeyframe__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_a8,
             (System_Collections_Generic_List_T__o *)__this_00,
             (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_TitanAttackKeyframe_GetEnumerator
            );
  local_90[0].fields._list = (System_Collections_Generic_List_T__o *)local_a8._0_8_;
  local_90[0].fields._index = local_a8._8_4_;
  local_90[0].fields._version = local_a8._12_4_;
  local_90[0].fields._current = local_98;
  local_a8._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_a8._8_8_ = local_90;
  do {
    bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (local_90,(MethodInfo_153A2A0 *)
                                MethodInfo_System_Collections_Generic_List_Enumerator_TitanAttackKeyframe_MoveNext
                      );
    pIVar2 = local_90[0].fields._current;
    if (!bVar3) {
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_90,
                 MethodInfo_System_Collections_Generic_List_Enumerator_TitanAttackKeyframe_Dispose);
      return false;
    }
    if (local_90[0].fields._current == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    if (titan == (UnityEngine_Transform_o *)0x0) {
      ThrowNullReferenceException();
    }
    uVar1._0_4_ = (worldPosition->fields).x;
    uVar1._4_4_ = (worldPosition->fields).y;
    local_d8._0_8_ = *(undefined8 *)((longlong)&local_90[0].fields._current[1].klass + 4);
    local_d8.z = *(float *)((longlong)&local_90[0].fields._current[1].monitor + 4);
    local_c8 = uVar1;
    pUVar4 = UnityEngine_Transform__TransformPoint
                       (&local_b8,titan,(UnityEngine_Vector3_o *)&local_d8,(MethodInfo *)0x0);
    fVar8 = (float)(undefined4)uVar1 - (pUVar4->fields).x;
    fVar6 = local_c8._4_4_ - (pUVar4->fields).y;
    fVar7 = (worldPosition->fields).z - (pUVar4->fields).z;
    fVar5 = (float)il2cpp_runtime_helper_1804f6b50(size * *(float *)&pIVar2[2].klass,0x40000000);
  } while (fVar5 < fVar7 * fVar7 + fVar6 * fVar6 + fVar8 * fVar8);
  System_Collections_Generic_List_Enumerator_object___Dispose
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_90,
             MethodInfo_System_Collections_Generic_List_Enumerator_TitanAttackKeyframe_Dispose);
  return true;
}


