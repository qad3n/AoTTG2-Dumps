// Type: Characters.TitanAttackInfo
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Characters/TitanAttackInfo.cs
// Prior real C# source (older reference): Assets/Scripts/Controllers/TitanAttackInfo.cs
// --------------------------------

// Characters.TitanAttackInfo$$.ctor
// il2cpp: void Characters_TitanAttackInfo___ctor (Characters_TitanAttackInfo_o* __this, SimpleJSONFixed_JSONNode_o* attackInfo, SimpleJSONFixed_JSONNode_o* keyframes, const MethodInfo* method);
// 0x5c61ab0

void Characters_TitanAttackInfo___ctor
               (Characters_TitanAttackInfo_o *__this,SimpleJSONFixed_JSONNode_o *attackInfo,
               SimpleJSONFixed_JSONNode_o *keyframes,MethodInfo *method)

{
  System_Collections_Generic_List_TitanAttackKeyframe__o **targetAddress;
  int32_t *piVar1;
  uint uVar2;
  Characters_TitanAttackKeyframe_array *pCVar3;
  MethodInfo *pMVar4;
  bool bVar5;
  bool bVar6;
  int32_t iVar7;
  System_Collections_Generic_List_TitanAttackKeyframe__o *pSVar8;
  SimpleJSONFixed_JSONNode_o *pSVar9;
  SimpleJSONFixed_JSONNode_o *pSVar10;
  long *plVar11;
  Characters_TitanAttackKeyframe_o *__this_00;
  MethodInfo *method_00;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  if (Il2CppMethodInitialized_0754789d == '\0') {
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
    Il2CppMethodInitialized_0754789d = '\x01';
  }
  pSVar8 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_TitanAttackKeyframe);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar8,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_TitanAttackKeyframe_ctor);
  targetAddress = &(__this->fields).Keyframes;
  (__this->fields).Keyframes = pSVar8;
  Il2CppCodeGenWriteBarrier(targetAddress);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if ((attackInfo != (SimpleJSONFixed_JSONNode_o *)0x0) &&
     (pSVar9 = (*(attackInfo->klass->vtable)._7_get_Item.methodPtr)
                         (attackInfo,"HumanOnly",(attackInfo->klass->vtable)._7_get_Item.method),
     pSVar9 != (SimpleJSONFixed_JSONNode_o *)0x0)) {
    bVar5 = (*(pSVar9->klass->vtable)._39_get_AsBool.methodPtr)
                      (pSVar9,(pSVar9->klass->vtable)._39_get_AsBool.method);
    (__this->fields).HumanOnly = bVar5;
    bVar5 = (*(attackInfo->klass->vtable)._28_HasKey.methodPtr)
                      (attackInfo,"MapObject",(attackInfo->klass->vtable)._28_HasKey.method);
    bVar6 = true;
    if (bVar5) {
      pSVar9 = (*(attackInfo->klass->vtable)._7_get_Item.methodPtr)
                         (attackInfo,"MapObject",(attackInfo->klass->vtable)._7_get_Item.method);
      if (pSVar9 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05c62400;
      bVar6 = (*(pSVar9->klass->vtable)._39_get_AsBool.methodPtr)
                        (pSVar9,(pSVar9->klass->vtable)._39_get_AsBool.method);
    }
    (__this->fields).MapObject = bVar6;
    pSVar9 = (*(attackInfo->klass->vtable)._7_get_Item.methodPtr)
                       (attackInfo,"Far",(attackInfo->klass->vtable)._7_get_Item.method);
    if (pSVar9 != (SimpleJSONFixed_JSONNode_o *)0x0) {
      bVar5 = (*(pSVar9->klass->vtable)._39_get_AsBool.methodPtr)
                        (pSVar9,(pSVar9->klass->vtable)._39_get_AsBool.method);
      (__this->fields).FarOnly = bVar5;
      bVar5 = (*(attackInfo->klass->vtable)._28_HasKey.methodPtr)
                        (attackInfo,"LeftArm",(attackInfo->klass->vtable)._28_HasKey.method);
      if (bVar5) {
        pSVar9 = (*(attackInfo->klass->vtable)._7_get_Item.methodPtr)
                           (attackInfo,"LeftArm",(attackInfo->klass->vtable)._7_get_Item.method);
        if (pSVar9 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05c62400;
        bVar5 = (*(pSVar9->klass->vtable)._39_get_AsBool.methodPtr)
                          (pSVar9,(pSVar9->klass->vtable)._39_get_AsBool.method);
      }
      else {
        bVar5 = false;
      }
      (__this->fields).LeftArm = bVar5;
      bVar5 = (*(attackInfo->klass->vtable)._28_HasKey.methodPtr)
                        (attackInfo,"RightArm",(attackInfo->klass->vtable)._28_HasKey.method);
      if (bVar5) {
        pSVar9 = (*(attackInfo->klass->vtable)._7_get_Item.methodPtr)
                           (attackInfo,"RightArm",(attackInfo->klass->vtable)._7_get_Item.method);
        if (pSVar9 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05c62400;
        bVar5 = (*(pSVar9->klass->vtable)._39_get_AsBool.methodPtr)
                          (pSVar9,(pSVar9->klass->vtable)._39_get_AsBool.method);
      }
      else {
        bVar5 = false;
      }
      (__this->fields).RightArm = bVar5;
      bVar5 = (*(attackInfo->klass->vtable)._28_HasKey.methodPtr)
                        (attackInfo,"Ranges",(attackInfo->klass->vtable)._28_HasKey.method);
      if (bVar5) {
        pSVar9 = (*(attackInfo->klass->vtable)._7_get_Item.methodPtr)
                           (attackInfo,"Ranges",(attackInfo->klass->vtable)._7_get_Item.method);
        if (((pSVar9 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
            (pSVar10 = (*(pSVar9->klass->vtable)._7_get_Item.methodPtr)
                                 (pSVar9,"X",(pSVar9->klass->vtable)._7_get_Item.method),
            pSVar10 == (SimpleJSONFixed_JSONNode_o *)0x0)) ||
           (plVar11 = (long *)(**(code **)((long)pSVar10->klass + 0x188))
                                        (pSVar10,0,*(undefined8 *)((long)pSVar10->klass + 400)),
           plVar11 == (long *)0x0)) goto label_05c62400;
        fVar13 = (float)(**(code **)(*plVar11 + 0x388))(plVar11,*(undefined8 *)(*plVar11 + 0x390));
        pSVar10 = (*(pSVar9->klass->vtable)._7_get_Item.methodPtr)
                            (pSVar9,"Y",(pSVar9->klass->vtable)._7_get_Item.method);
        if ((pSVar10 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
           (plVar11 = (long *)(**(code **)((long)pSVar10->klass + 0x188))
                                        (pSVar10,0,*(undefined8 *)((long)pSVar10->klass + 400)),
           plVar11 == (long *)0x0)) goto label_05c62400;
        fVar14 = (float)(**(code **)(*plVar11 + 0x388))(plVar11,*(undefined8 *)(*plVar11 + 0x390));
        pSVar10 = (*(pSVar9->klass->vtable)._7_get_Item.methodPtr)
                            (pSVar9,"Z",(pSVar9->klass->vtable)._7_get_Item.method);
        if ((pSVar10 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
           (plVar11 = (long *)(**(code **)((long)pSVar10->klass + 0x188))
                                        (pSVar10,0,*(undefined8 *)((long)pSVar10->klass + 400)),
           plVar11 == (long *)0x0)) goto label_05c62400;
        fVar15 = (float)(**(code **)(*plVar11 + 0x388))(plVar11,*(undefined8 *)(*plVar11 + 0x390));
        (__this->fields).MinRange.fields.x = fVar13;
        (__this->fields).MinRange.fields.y = fVar14;
        (__this->fields).MinRange.fields.z = fVar15;
        pSVar10 = (*(pSVar9->klass->vtable)._7_get_Item.methodPtr)
                            (pSVar9,"X",(pSVar9->klass->vtable)._7_get_Item.method);
        if ((pSVar10 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
           (plVar11 = (long *)(**(code **)((long)pSVar10->klass + 0x188))
                                        (pSVar10,1,*(undefined8 *)((long)pSVar10->klass + 400)),
           plVar11 == (long *)0x0)) goto label_05c62400;
        fVar13 = (float)(**(code **)(*plVar11 + 0x388))(plVar11,*(undefined8 *)(*plVar11 + 0x390));
        pSVar10 = (*(pSVar9->klass->vtable)._7_get_Item.methodPtr)
                            (pSVar9,"Y",(pSVar9->klass->vtable)._7_get_Item.method);
        if ((pSVar10 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
           (plVar11 = (long *)(**(code **)((long)pSVar10->klass + 0x188))
                                        (pSVar10,1,*(undefined8 *)((long)pSVar10->klass + 400)),
           plVar11 == (long *)0x0)) goto label_05c62400;
        fVar14 = (float)(**(code **)(*plVar11 + 0x388))(plVar11,*(undefined8 *)(*plVar11 + 0x390));
        pSVar9 = (*(pSVar9->klass->vtable)._7_get_Item.methodPtr)
                           (pSVar9,"Z",(pSVar9->klass->vtable)._7_get_Item.method);
        if ((pSVar9 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
           (plVar11 = (long *)(**(code **)((long)pSVar9->klass + 0x188))
                                        (pSVar9,1,*(undefined8 *)((long)pSVar9->klass + 400)),
           plVar11 == (long *)0x0)) goto label_05c62400;
        fVar15 = (float)(**(code **)(*plVar11 + 0x388))(plVar11);
        (__this->fields).MaxRange.fields.x = fVar13;
        (__this->fields).MaxRange.fields.y = fVar14;
        (__this->fields).MaxRange.fields.z = fVar15;
      }
      if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
      }
      bVar5 = SimpleJSONFixed_JSONNode__op_Inequality(keyframes,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if (!bVar5) {
        return;
      }
      (__this->fields).HasKeyframes = true;
      if ((keyframes != (SimpleJSONFixed_JSONNode_o *)0x0) &&
         (pSVar9 = (*(keyframes->klass->vtable)._7_get_Item.methodPtr)
                             (keyframes,"Keyframes",(keyframes->klass->vtable)._7_get_Item.method),
         pSVar9 != (SimpleJSONFixed_JSONNode_o *)0x0)) {
        iVar12 = 0;
        do {
          iVar7 = (*(pSVar9->klass->vtable)._11_get_Count.methodPtr)
                            (pSVar9,(pSVar9->klass->vtable)._11_get_Count.method);
          if (iVar7 <= iVar12) {
            pSVar9 = (*(keyframes->klass->vtable)._7_get_Item.methodPtr)
                               (keyframes,"Ranges",(keyframes->klass->vtable)._7_get_Item.method)
            ;
            if (((pSVar9 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
                (pSVar10 = (*(pSVar9->klass->vtable)._7_get_Item.methodPtr)
                                     (pSVar9,"X",(pSVar9->klass->vtable)._7_get_Item.method)
                , pSVar10 != (SimpleJSONFixed_JSONNode_o *)0x0)) &&
               (plVar11 = (long *)(**(code **)((long)pSVar10->klass + 0x188))
                                            (pSVar10,0,*(undefined8 *)((long)pSVar10->klass + 400)),
               plVar11 != (long *)0x0)) {
              fVar13 = (float)(**(code **)(*plVar11 + 0x388))(plVar11,*(undefined8 *)(*plVar11 + 0x390));
              pSVar10 = (*(pSVar9->klass->vtable)._7_get_Item.methodPtr)
                                  (pSVar9,"Y",(pSVar9->klass->vtable)._7_get_Item.method);
              if ((pSVar10 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
                 (plVar11 = (long *)(**(code **)((long)pSVar10->klass + 0x188))
                                              (pSVar10,0,*(undefined8 *)((long)pSVar10->klass + 400)),
                 plVar11 != (long *)0x0)) {
                fVar14 = (float)(**(code **)(*plVar11 + 0x388))(plVar11,*(undefined8 *)(*plVar11 + 0x390));
                pSVar10 = (*(pSVar9->klass->vtable)._7_get_Item.methodPtr)
                                    (pSVar9,"Z",(pSVar9->klass->vtable)._7_get_Item.method);
                if ((pSVar10 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
                   (plVar11 = (long *)(**(code **)((long)pSVar10->klass + 0x188))
                                                (pSVar10,0,*(undefined8 *)((long)pSVar10->klass + 400)),
                   plVar11 != (long *)0x0)) {
                  fVar15 = (float)(**(code **)(*plVar11 + 0x388))(plVar11,*(undefined8 *)(*plVar11 + 0x390));
                  (__this->fields).MinRange.fields.x = fVar13;
                  (__this->fields).MinRange.fields.y = fVar14;
                  (__this->fields).MinRange.fields.z = fVar15;
                  pSVar10 = (*(pSVar9->klass->vtable)._7_get_Item.methodPtr)
                                      (pSVar9,"X",(pSVar9->klass->vtable)._7_get_Item.method
                                      );
                  if ((pSVar10 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
                     (plVar11 = (long *)(**(code **)((long)pSVar10->klass + 0x188))
                                                  (pSVar10,1,*(undefined8 *)((long)pSVar10->klass + 400)),
                     plVar11 != (long *)0x0)) {
                    fVar13 = (float)(**(code **)(*plVar11 + 0x388))(plVar11,*(undefined8 *)(*plVar11 + 0x390))
                    ;
                    pSVar10 = (*(pSVar9->klass->vtable)._7_get_Item.methodPtr)
                                        (pSVar9,"Y",
                                         (pSVar9->klass->vtable)._7_get_Item.method);
                    if ((pSVar10 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
                       (plVar11 = (long *)(**(code **)((long)pSVar10->klass + 0x188))
                                                    (pSVar10,1,*(undefined8 *)((long)pSVar10->klass + 400)),
                       plVar11 != (long *)0x0)) {
                      fVar14 = (float)(**(code **)(*plVar11 + 0x388))
                                                (plVar11,*(undefined8 *)(*plVar11 + 0x390));
                      pSVar9 = (*(pSVar9->klass->vtable)._7_get_Item.methodPtr)
                                         (pSVar9,"Z",
                                          (pSVar9->klass->vtable)._7_get_Item.method);
                      if ((pSVar9 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
                         (plVar11 = (long *)(**(code **)((long)pSVar9->klass + 0x188))
                                                      (pSVar9,1,*(undefined8 *)((long)pSVar9->klass + 400)),
                         plVar11 != (long *)0x0)) {
                        fVar15 = (float)(**(code **)(*plVar11 + 0x388))
                                                  (plVar11,*(undefined8 *)(*plVar11 + 0x390));
                        (__this->fields).MaxRange.fields.x = fVar13;
                        (__this->fields).MaxRange.fields.y = fVar14;
                        (__this->fields).MaxRange.fields.z = fVar15;
                        return;
                      }
                    }
                  }
                }
              }
            }
            break;
          }
          pSVar8 = *targetAddress;
          pSVar9 = (*(keyframes->klass->vtable)._7_get_Item.methodPtr)
                             (keyframes,"Keyframes",(keyframes->klass->vtable)._7_get_Item.method);
          if (pSVar9 == (SimpleJSONFixed_JSONNode_o *)0x0) break;
          pSVar9 = (*(pSVar9->klass->vtable)._5_get_Item.methodPtr)
                             (pSVar9,iVar12,(pSVar9->klass->vtable)._5_get_Item.method);
          __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_TitanAttackKeyframe);
          Characters_TitanAttackKeyframe___ctor(__this_00,pSVar9,method_00);
          pMVar4 = MethodInfo_System_Collections_Generic_List_TitanAttackKeyframe_Add;
          if (pSVar8 == (System_Collections_Generic_List_TitanAttackKeyframe__o *)0x0) break;
          piVar1 = &(pSVar8->fields)._version;
          *piVar1 = *piVar1 + 1;
          pCVar3 = (pSVar8->fields)._items;
          if (pCVar3 == (Characters_TitanAttackKeyframe_array *)0x0) break;
          uVar2 = (pSVar8->fields)._size;
          if (uVar2 < (uint)pCVar3->max_length) {
            (pSVar8->fields)._size = uVar2 + 1;
            pCVar3->m_Items[(int)uVar2] = __this_00;
            Il2CppCodeGenWriteBarrier(pCVar3->m_Items + (int)uVar2);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar8,(Il2CppObject *)__this_00,
                       (MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
          }
          iVar12 = iVar12 + 1;
          pSVar9 = (*(keyframes->klass->vtable)._7_get_Item.methodPtr)
                             (keyframes,"Keyframes",(keyframes->klass->vtable)._7_get_Item.method);
        } while (pSVar9 != (SimpleJSONFixed_JSONNode_o *)0x0);
      }
    }
  }
label_05c62400:
  ThrowNullReferenceException();
}


// Characters.TitanAttackInfo$$CheckSimpleAttack
// il2cpp: bool Characters_TitanAttackInfo__CheckSimpleAttack (Characters_TitanAttackInfo_o* __this, UnityEngine_Vector3_o relativePosition, const MethodInfo* method);
// 0x5c625d0

bool Characters_TitanAttackInfo__CheckSimpleAttack
               (Characters_TitanAttackInfo_o *__this,UnityEngine_Vector3_o relativePosition,MethodInfo *method
               )

{
  if (relativePosition.fields.x < (__this->fields).MinRange.fields.x) {
    return false;
  }
  if (relativePosition.fields.y < (__this->fields).MinRange.fields.y) {
    return false;
  }
  if (relativePosition.fields.z < (__this->fields).MinRange.fields.z) {
    return false;
  }
  if ((__this->fields).MaxRange.fields.x < relativePosition.fields.x) {
    return false;
  }
  if ((__this->fields).MaxRange.fields.y < relativePosition.fields.y) {
    return false;
  }
  return relativePosition.fields.z <= (__this->fields).MaxRange.fields.z;
}


// Characters.TitanAttackInfo$$CheckSmartAttack
// il2cpp: bool Characters_TitanAttackInfo__CheckSmartAttack (Characters_TitanAttackInfo_o* __this, UnityEngine_Transform_o* titan, UnityEngine_Vector3_o worldPosition, UnityEngine_Vector3_o velocity, float attackSpeed, float size, const MethodInfo* method);
// 0x5c62620
// eh: try 0x5c626f3..0x5c627cd -> pad 0x5c627d5 (+4 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5c627ed..0x5c627f2 -> pad 0x5c6281a cleanup
// eh: try 0x5c6281d..0x5c62827 -> pad 0x5c6282f catch (...) [compiler noexcept guard]
// asm: 30 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c626e9: nop dword ptr [rax]
// asm:   0x5c627cd: jmp 0x5c627d5
// asm:   0x5c627cf: jmp 0x5c627d5
// asm:   0x5c627d1: jmp 0x5c627d5
// asm:   0x5c627d3: jmp 0x5c627d5
// asm:   0x5c627d5: mov rbx, rax
// asm:   0x5c627d8: cmp edx, 1
// asm:   0x5c627db: jne 0x5c6281d
// asm:   0x5c627dd: mov rdi, rbx
// asm:   0x5c627e0: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c627e5: mov r14, qword ptr [rax]
// asm:   0x5c627e8: mov qword ptr [rsp + 0x40], r14
// asm:   0x5c627ed: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c627f2: lea rax, [rip + 0x162c47f]  ; MethodInfo_System_Collections_Generic_List_Enumerator_TitanAttackKeyframe_Dispose
// asm:   0x5c627f9: mov rsi, qword ptr [rax]
// asm:   0x5c627fc: lea rdi, [rsp + 0x10]
// asm:   0x5c62801: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5c62806: xor ebp, ebp
// asm:   0x5c62808: mov ebx, 0
// asm:   0x5c6280d: test r14, r14
// asm:   0x5c62810: je 0x5c627a0
// asm:   0x5c62812: mov rdi, r14
// asm:   0x5c62815: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5c6281a: mov rbx, rax
// asm:   0x5c6281d: lea rdi, [rsp + 0x40]
// asm:   0x5c62822: call 0x2fd9ba0  ; il2cpp_runtime_helper_02fd9ba0()
// asm:   0x5c62827: mov rdi, rbx
// asm:   0x5c6282a: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5c6282f: mov rdi, rax
// asm:   0x5c62832: call 0x2ab61e0  ; __clang_call_terminate()

bool Characters_TitanAttackInfo__CheckSmartAttack
               (Characters_TitanAttackInfo_o *__this,UnityEngine_Transform_o *titan,
               UnityEngine_Vector3_o worldPosition,UnityEngine_Vector3_o velocity,float attackSpeed,float size
               ,MethodInfo *method)

{
  System_Collections_Generic_List_TitanAttackKeyframe__o *__this_00;
  Il2CppObject *pIVar1;
  bool bVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  float in_XMM1_Db;
  float in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  float fVar6;
  float fVar7;
  UnityEngine_Vector3_o UVar8;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  float local_58;
  float fStack_54;
  float fStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  System_Collections_Generic_List_Enumerator_T__o *local_40;
  undefined1 local_38 [16];
  
  local_58 = worldPosition.fields.z;
  local_38._8_4_ = in_XMM0_Dc;
  local_38._0_8_ = worldPosition.fields._0_8_;
  local_38._12_4_ = in_XMM0_Dd;
  fStack_54 = in_XMM1_Db;
  fStack_50 = in_XMM1_Dc;
  uStack_4c = in_XMM1_Dd;
  if (Il2CppMethodInitialized_0754789e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_TitanAttackKeyframe_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_TitanAttackKeyframe_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_TitanAttackKeyframe_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_TitanAttackKeyframe_GetEnumerator);
    Il2CppMethodInitialized_0754789e = '\x01';
  }
  local_78.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_78.fields._index = 0;
  local_78.fields._version = 0;
  local_78.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).Keyframes;
  if (__this_00 == (System_Collections_Generic_List_TitanAttackKeyframe__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_object___GetEnumerator
            (&local_78,(System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395E050 *)
             MethodInfo_System_Collections_Generic_List_TitanAttackKeyframe_GetEnumerator);
  fVar4 = fStack_54;
  local_48 = 0;
  local_40 = &local_78;
  if (titan == (UnityEngine_Transform_o *)0x0) {
    bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      ((System_Collections_Generic_List_Enumerator_object__o *)&local_78,
                       (MethodInfo_4C45C50 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_TitanAttackKeyframe_MoveNext);
    if (bVar2) {
      if (local_78.fields._current != (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
label_05c627c3:
      ThrowNullReferenceException();
    }
    iVar3 = 5;
    bVar2 = false;
  }
  else {
    fStack_54 = (float)local_38._0_4_;
    fStack_50 = fVar4;
    uStack_4c = local_38._4_4_;
    do {
      bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o *)&local_78,
                         (MethodInfo_4C45C50 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_TitanAttackKeyframe_MoveNext);
      pIVar1 = local_78.fields._current;
      if (!bVar2) {
        iVar3 = 5;
        goto label_05c6278c;
      }
      if (local_78.fields._current == (Il2CppObject *)0x0) goto label_05c627c3;
      UVar8 = UnityEngine_Transform__TransformPoint
                        (titan,(UnityEngine_Vector3_o)
                               *(UnityEngine_Vector3_Fields *)((long)&local_78.fields._current[1].klass + 4),
                         (MethodInfo *)0x0);
      fVar6 = *(float *)&pIVar1[2].klass * size;
      fVar7 = (float)local_38._4_4_ - UVar8.fields.y;
      fVar4 = local_58 - UVar8.fields.z;
      fVar5 = fStack_54 - UVar8.fields.x;
    } while (fVar6 * fVar6 < fVar7 * fVar7 + fVar5 * fVar5 + fVar4 * fVar4);
    iVar3 = 4;
  }
label_05c6278c:
  System_Collections_Generic_List_Enumerator_object___Dispose
            ((System_Collections_Generic_List_Enumerator_object__o *)&local_78,
             (MethodInfo_4C45C40 *)
             MethodInfo_System_Collections_Generic_List_Enumerator_TitanAttackKeyframe_Dispose);
  return (bool)(iVar3 == 4 & bVar2);
}


