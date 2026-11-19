// Type: PatreonEffects.EffectText
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp_body_deref/Scripts/PatreonEffects/EffectText.cs
// Prior real C# source: none
// --------------------------------

// PatreonEffects.EffectText.<>c$$.cctor
// il2cpp: void PatreonEffects_EffectText___c___cctor (const MethodInfo* method);
// 0x59c03a0

void PatreonEffects_EffectText___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07545bd7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_EffectText_c);
    Il2CppMethodInitialized_07545bd7 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_PatreonEffects_EffectText_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_PatreonEffects_EffectText_c->static_fields->__9 = (PatreonEffects_EffectText___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_PatreonEffects_EffectText_c->static_fields->__9);
  return;
}


// PatreonEffects.EffectText.<>c$$.ctor
// il2cpp: void PatreonEffects_EffectText___c___ctor (PatreonEffects_EffectText___c_o* __this, const MethodInfo* method);
// 0x59c0410

void PatreonEffects_EffectText___c___ctor(PatreonEffects_EffectText___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// PatreonEffects.EffectText.<>c$$<WithPresetColors>b__27_0
// il2cpp: System_String_o* PatreonEffects_EffectText___c___WithPresetColors_b__27_0 (PatreonEffects_EffectText___c_o* __this, System_Text_RegularExpressions_Match_o* match, const MethodInfo* method);
// 0x59c0420
// eh: try 0x59c069f..0x59c0bf9 -> pad 0x59c0c2e (+21 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x59c0c4f..0x59c0c54 -> pad 0x59c0c59 cleanup
// eh: try 0x59c0c5c..0x59c0c66 -> pad 0x59c0c6e catch (...) [compiler noexcept guard]
// asm: 48 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59c0642: lea r12, [rip + 0x18b8daf]  ; TypeInfo_System_Collections_IEnumerator
// asm:   0x59c0649: lea r14, [rip + 0x18d10c8]  ; MethodInfo_System_Collections_Generic_HashSet_string_Add
// asm:   0x59c0650: lea r13, [rip + 0x1934779]  ; "effect"
// asm:   0x59c0657: jmp 0x59c066d
// asm:   0x59c0660: mov rbp, qword ptr [rsp]
// asm:   0x59c0664: test rbp, rbp
// asm:   0x59c0667: je 0x59c0bcc
// asm:   0x59c068e: nop 
// asm:   0x59c0bfe: mov rdi, r15
// asm:   0x59c0c01: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x59c0c06: jmp 0x59c0c30
// asm:   0x59c0c08: jmp 0x59c0c30
// asm:   0x59c0c0a: jmp 0x59c0c30
// asm:   0x59c0c0c: jmp 0x59c0c30
// asm:   0x59c0c0e: jmp 0x59c0c30
// asm:   0x59c0c10: jmp 0x59c0c30
// asm:   0x59c0c12: jmp 0x59c0c30
// asm:   0x59c0c14: jmp 0x59c0c30
// asm:   0x59c0c16: jmp 0x59c0c30
// asm:   0x59c0c18: jmp 0x59c0c30
// asm:   0x59c0c1a: jmp 0x59c0c30
// asm:   0x59c0c1c: jmp 0x59c0c30
// asm:   0x59c0c1e: jmp 0x59c0c30
// asm:   0x59c0c20: jmp 0x59c0c30
// asm:   0x59c0c22: jmp 0x59c0c30
// asm:   0x59c0c24: jmp 0x59c0c30
// asm:   0x59c0c26: jmp 0x59c0c30
// asm:   0x59c0c28: jmp 0x59c0c30
// asm:   0x59c0c2a: jmp 0x59c0c30
// asm:   0x59c0c2c: jmp 0x59c0c30
// asm:   0x59c0c2e: jmp 0x59c0c30
// asm:   0x59c0c30: mov r12, rax
// asm:   0x59c0c33: lea r13, [rip + 0x18b7156]  ; TypeInfo_PatreonEffects_EffectText
// asm:   0x59c0c3a: cmp edx, 1
// asm:   0x59c0c3d: jne 0x59c0c5c
// asm:   0x59c0c3f: mov rdi, r12
// asm:   0x59c0c42: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x59c0c47: mov r15, qword ptr [rax]
// asm:   0x59c0c4a: mov qword ptr [rsp + 0x40], r15
// asm:   0x59c0c4f: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x59c0c54: jmp 0x59c0882
// asm:   0x59c0c59: mov r12, rax
// asm:   0x59c0c5c: lea rdi, [rsp + 0x40]
// asm:   0x59c0c61: call 0x2fd5300  ; il2cpp_runtime_helper_02fd5300()
// asm:   0x59c0c66: mov rdi, r12
// asm:   0x59c0c69: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x59c0c6e: mov rdi, rax
// asm:   0x59c0c71: call 0x2ab61e0  ; __clang_call_terminate()

System_String_o *
PatreonEffects_EffectText___c___WithPresetColors_b__27_0
          (PatreonEffects_EffectText___c_o *__this,System_Text_RegularExpressions_Match_o *match,
          MethodInfo *method)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  System_Text_RegularExpressions_Regex_o *__this_00;
  Il2CppClass *pIVar6;
  Il2CppRuntimeInterfaceOffsetPair *pIVar7;
  char cVar8;
  bool bVar9;
  System_Text_RegularExpressions_GroupCollection_o *pSVar10;
  System_Text_RegularExpressions_Group_o *pSVar11;
  System_String_o *pSVar12;
  System_Collections_Generic_HashSet_string__o *__this_01;
  System_Text_RegularExpressions_MatchCollection_o *__this_02;
  Il2CppObject *pIVar13;
  VirtualInvokeData *pVVar14;
  Il2CppObject *pIVar15;
  PatreonEffects_NameEffectSettings_o *pPVar16;
  System_Text_StringBuilder_o *pSVar17;
  ulong uVar18;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  MethodInfo *extraout_RDX_06;
  MethodInfo *pMVar19;
  System_IDisposable_c *method_01;
  long lVar20;
  UnityEngine_Color_o color;
  UnityEngine_Color_o color_00;
  UnityEngine_Color_o color_01;
  UnityEngine_Color_o color_02;
  Il2CppObject *pIStack_88;
  int32_t iStack_7c;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  System_Text_RegularExpressions_Match_o *pSStack_58;
  Il2CppObject *pIStack_50;
  undefined8 uStack_48;
  undefined1 *puStack_40;
  Il2CppObject **ppIStack_38;
  
  if (Il2CppMethodInitialized_07545bd8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_EffectText);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_RegularExpressions_Match);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_StringBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&"val");
    il2cpp_codegen_initialize_runtime_metadata(&"a");
    il2cpp_codegen_initialize_runtime_metadata(&"</fx>");
    il2cpp_codegen_initialize_runtime_metadata(&"effect");
    il2cpp_codegen_initialize_runtime_metadata(&"b");
    il2cpp_codegen_initialize_runtime_metadata(&"c");
    il2cpp_codegen_initialize_runtime_metadata(&"<fx");
    il2cpp_codegen_initialize_runtime_metadata(&"attrs");
    il2cpp_codegen_initialize_runtime_metadata(&"d");
    il2cpp_codegen_initialize_runtime_metadata(&"content");
    il2cpp_codegen_initialize_runtime_metadata(&"key");
    Il2CppMethodInitialized_07545bd8 = '\x01';
  }
  pIStack_88 = (Il2CppObject *)0x0;
  pIStack_50 = (Il2CppObject *)0x0;
  if (((match != (System_Text_RegularExpressions_Match_o *)0x0) &&
      (pSVar10 = (*(match->klass->vtable)._5_get_Groups.methodPtr)
                           (match,(match->klass->vtable)._5_get_Groups.method),
      pSVar10 != (System_Text_RegularExpressions_GroupCollection_o *)0x0)) &&
     (pSVar11 = System_Text_RegularExpressions_GroupCollection__get_Item_61df1f0
                          (pSVar10,"attrs",(MethodInfo *)0x0),
     pSVar11 != (System_Text_RegularExpressions_Group_o *)0x0)) {
    pSVar12 = System_Text_RegularExpressions_Capture__get_Value
                        ((System_Text_RegularExpressions_Capture_o *)pSVar11,(MethodInfo *)0x0);
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
    System_Collections_Generic_HashSet_object____ctor
              ((System_Collections_Generic_HashSet_object__o *)__this_01,
               (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    iStack_7c = 0;
    if ((TypeInfo_PatreonEffects_EffectText->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_EffectText);
    }
    __this_00 = TypeInfo_PatreonEffects_EffectText->static_fields->_attrRegex;
    if ((__this_00 != (System_Text_RegularExpressions_Regex_o *)0x0) &&
       (uStack_78 = pSVar12, pSStack_58 = match,
       __this_02 = System_Text_RegularExpressions_Regex__Matches(__this_00,pSVar12,(MethodInfo *)0x0),
       __this_02 != (System_Text_RegularExpressions_MatchCollection_o *)0x0)) {
      pIVar13 = (Il2CppObject *)
                System_Text_RegularExpressions_MatchCollection__GetEnumerator(__this_02,(MethodInfo *)0x0);
      puStack_40 = (undefined1 *)&pIStack_88;
      uStack_48 = 0;
      ppIStack_38 = &pIStack_50;
      do {
        pIStack_88 = pIVar13;
        if (pIVar13 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar6 = pIVar13->klass;
        uVar18 = (ulong)(pIVar6->_2).interface_offsets_count;
        if (uVar18 != 0) {
          pIVar7 = (pIVar6->_1).interfaceOffsets;
          lVar20 = 0;
          do {
            if (*(Il2CppClass **)((long)&pIVar7->interfaceType + lVar20) ==
                (Il2CppClass *)TypeInfo_System_Collections_IEnumerator) {
              pVVar14 = pIVar6->vtable + *(int *)((long)&pIVar7->offset + lVar20);
              goto label_059c06c3;
            }
            lVar20 = lVar20 + 0x10;
          } while (uVar18 * 0x10 != lVar20);
        }
        pVVar14 = GetInterfaceInvokeDataFromVTableSlowPath
                            (pIVar13,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_059c06c3:
        cVar8 = (*pVVar14->methodPtr)(pIVar13,pVVar14->method);
        pIVar13 = pIStack_88;
        if (cVar8 == '\0') {
          method_01 = TypeInfo_System_IDisposable;
          pIVar13 = il2cpp_vm_Object_IsInst(pIStack_88,(Il2CppClass *)TypeInfo_System_IDisposable);
          pIStack_50 = pIVar13;
          if (pIVar13 == (Il2CppObject *)0x0) goto label_059c0906;
          pIVar6 = pIVar13->klass;
          uVar18 = (ulong)(pIVar6->_2).interface_offsets_count;
          if (uVar18 == 0) goto label_059c08df;
          pIVar7 = (pIVar6->_1).interfaceOffsets;
          lVar20 = 0;
          goto label_059c08d0;
        }
        if (pIStack_88 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar6 = pIStack_88->klass;
        uVar18 = (ulong)(pIVar6->_2).interface_offsets_count;
        if (uVar18 != 0) {
          pIVar7 = (pIVar6->_1).interfaceOffsets;
          lVar20 = 0;
          do {
            if (*(System_Collections_IEnumerator_c **)((long)&pIVar7->interfaceType + lVar20) ==
                TypeInfo_System_Collections_IEnumerator) {
              pVVar14 = pIVar6->vtable + (*(int *)((long)&pIVar7->offset + lVar20) + 1);
              goto label_059c0757;
            }
            lVar20 = lVar20 + 0x10;
          } while (uVar18 * 0x10 != lVar20);
        }
        pVVar14 = GetInterfaceInvokeDataFromVTableSlowPath
                            (pIStack_88,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,1);
label_059c0757:
        pIVar15 = (*pVVar14->methodPtr)(pIVar13,pVVar14->method);
        if (pIVar15 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar6 = pIVar15->klass;
        bVar5 = (TypeInfo_System_Text_RegularExpressions_Match->_2).typeHierarchyDepth;
        if (((pIVar6->_2).typeHierarchyDepth < bVar5) ||
           ((pIVar6->_2).typeHierarchy[(ulong)bVar5 - 1] !=
            (Il2CppClass *)TypeInfo_System_Text_RegularExpressions_Match)) {
          il2cpp_codegen_raise_invalid_cast_exception(pIVar15);
        }
        pSVar10 = (System_Text_RegularExpressions_GroupCollection_o *)
                  (*pIVar6->vtable[5].methodPtr)(pIVar15,pIVar6->vtable[5].method);
        if (pSVar10 == (System_Text_RegularExpressions_GroupCollection_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar11 = System_Text_RegularExpressions_GroupCollection__get_Item_61df1f0
                            (pSVar10,"key",(MethodInfo *)0x0);
        if (pSVar11 == (System_Text_RegularExpressions_Group_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar12 = System_Text_RegularExpressions_Capture__get_Value
                            ((System_Text_RegularExpressions_Capture_o *)pSVar11,(MethodInfo *)0x0);
        if (pSVar12 == (System_String_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar12 = System_String__ToLowerInvariant(pSVar12,(MethodInfo *)0x0);
        if (__this_01 == (System_Collections_Generic_HashSet_string__o *)0x0) {
          ThrowNullReferenceException();
        }
        System_Collections_Generic_HashSet_object___Add
                  ((System_Collections_Generic_HashSet_object__o *)__this_01,(Il2CppObject *)pSVar12,
                   (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
        bVar9 = System_String__op_Equality(pSVar12,"effect",(MethodInfo *)0x0);
        pIVar13 = pIStack_88;
        if (bVar9) {
          pSVar10 = (System_Text_RegularExpressions_GroupCollection_o *)
                    (*pIVar15->klass->vtable[5].methodPtr)(pIVar15,pIVar15->klass->vtable[5].method);
          if (pSVar10 == (System_Text_RegularExpressions_GroupCollection_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar11 = System_Text_RegularExpressions_GroupCollection__get_Item_61df1f0
                              (pSVar10,"val",(MethodInfo *)0x0);
          if (pSVar11 == (System_Text_RegularExpressions_Group_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar12 = System_Text_RegularExpressions_Capture__get_Value
                              ((System_Text_RegularExpressions_Capture_o *)pSVar11,(MethodInfo *)0x0);
          PatreonEffects_NameEffectPresets__TryResolve(pSVar12,&iStack_7c,method_00);
          pIVar13 = pIStack_88;
        }
      } while( true );
    }
  }
  goto label_059c0bf9;
  while (lVar20 = lVar20 + 0x10, uVar18 * 0x10 != lVar20) {
label_059c08d0:
    if (*(System_IDisposable_c **)((long)&pIVar7->interfaceType + lVar20) == TypeInfo_System_IDisposable) {
      pVVar14 = pIVar6->vtable + *(int *)((long)&pIVar7->offset + lVar20);
      goto label_059c08fd;
    }
  }
label_059c08df:
  pVVar14 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar13,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_059c08fd:
  method_01 = (System_IDisposable_c *)pVVar14->method;
  (*pVVar14->methodPtr)(pIVar13,(MethodInfo *)method_01);
label_059c0906:
  if (iStack_7c == 0) {
    pSVar12 = System_Text_RegularExpressions_Capture__get_Value
                        ((System_Text_RegularExpressions_Capture_o *)pSStack_58,(MethodInfo *)0x0);
    return pSVar12;
  }
  pPVar16 = PatreonEffects_NameEffectPresets__GetPreset(iStack_7c,(MethodInfo *)method_01);
  pSVar17 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_StringBuilder);
  System_Text_StringBuilder___ctor_530d6d0(pSVar17,"<fx",(MethodInfo *)0x0);
  if ((pSVar17 != (System_Text_StringBuilder_o *)0x0) &&
     (pSVar17 = System_Text_StringBuilder__Append_530ed80(pSVar17,uStack_78,(MethodInfo *)0x0),
     __this_01 != (System_Collections_Generic_HashSet_string__o *)0x0)) {
    bVar9 = System_Collections_Generic_HashSet_object___Contains
                      ((System_Collections_Generic_HashSet_object__o *)__this_01,
                       (Il2CppObject *)"a",
                       (MethodInfo_4FB3720 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
    if (!bVar9) {
      if (pPVar16 == (PatreonEffects_NameEffectSettings_o *)0x0) goto label_059c0bf9;
      pSVar12 = *(System_String_o **)&(pPVar16->fields).gradientA.fields;
      uVar1._0_4_ = (pPVar16->fields).gradientA.fields.b;
      uVar1._4_4_ = (pPVar16->fields).gradientA.fields.a;
      pMVar19 = extraout_RDX;
      uVar2._0_4_ = (int)pSVar12;
      uVar2._4_4_ = (int)((ulong)pSVar12 >> 0x20);
      if ((TypeInfo_PatreonEffects_EffectText->_2).cctor_finished_or_no_cctor == 0) {
        uStack_70 = 0;
        uStack_60 = 0;
        uStack_78 = pSVar12;
        uStack_68 = uVar1;
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_EffectText);
        pMVar19 = extraout_RDX_00;
        uVar2._0_4_ = (undefined4)uStack_78;
        uVar2._4_4_ = uStack_78._4_4_;
        uVar1._0_4_ = (undefined4)uStack_68;
        uVar1._4_4_ = uStack_68._4_4_;
      }
      color.fields.g = (float)uVar2._4_4_;
      color.fields.r = (float)(undefined4)uVar2;
      color.fields.a = (float)uVar1._4_4_;
      color.fields.b = (float)(undefined4)uVar1;
      PatreonEffects_EffectText__AppendColorAttribute(pSVar17,"a",color,pMVar19);
    }
    bVar9 = System_Collections_Generic_HashSet_object___Contains
                      ((System_Collections_Generic_HashSet_object__o *)__this_01,
                       (Il2CppObject *)"b",
                       (MethodInfo_4FB3720 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
    if (!bVar9) {
      if (pPVar16 == (PatreonEffects_NameEffectSettings_o *)0x0) goto label_059c0bf9;
      pSVar12 = *(System_String_o **)&(pPVar16->fields).gradientB.fields;
      uVar2._0_4_ = (pPVar16->fields).gradientB.fields.b;
      uVar2._4_4_ = (pPVar16->fields).gradientB.fields.a;
      pMVar19 = extraout_RDX_01;
      uVar1._0_4_ = (int)pSVar12;
      uVar1._4_4_ = (int)((ulong)pSVar12 >> 0x20);
      if ((TypeInfo_PatreonEffects_EffectText->_2).cctor_finished_or_no_cctor == 0) {
        uStack_70 = 0;
        uStack_60 = 0;
        uStack_78 = pSVar12;
        uStack_68 = uVar2;
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_EffectText);
        pMVar19 = extraout_RDX_02;
        uVar1._0_4_ = (undefined4)uStack_78;
        uVar1._4_4_ = uStack_78._4_4_;
        uVar2._0_4_ = (undefined4)uStack_68;
        uVar2._4_4_ = uStack_68._4_4_;
      }
      color_00.fields.g = (float)uVar1._4_4_;
      color_00.fields.r = (float)(undefined4)uVar1;
      color_00.fields.a = (float)uVar2._4_4_;
      color_00.fields.b = (float)(undefined4)uVar2;
      PatreonEffects_EffectText__AppendColorAttribute(pSVar17,"b",color_00,pMVar19);
    }
    bVar9 = System_Collections_Generic_HashSet_object___Contains
                      ((System_Collections_Generic_HashSet_object__o *)__this_01,
                       (Il2CppObject *)"c",
                       (MethodInfo_4FB3720 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
    if (!bVar9) {
      if (pPVar16 == (PatreonEffects_NameEffectSettings_o *)0x0) goto label_059c0bf9;
      pSVar12 = *(System_String_o **)&(pPVar16->fields).gradientC.fields;
      uVar3._0_4_ = (pPVar16->fields).gradientC.fields.b;
      uVar3._4_4_ = (pPVar16->fields).gradientC.fields.a;
      pMVar19 = extraout_RDX_03;
      uVar1._0_4_ = (int)pSVar12;
      uVar1._4_4_ = (int)((ulong)pSVar12 >> 0x20);
      if ((TypeInfo_PatreonEffects_EffectText->_2).cctor_finished_or_no_cctor == 0) {
        uStack_70 = 0;
        uStack_60 = 0;
        uStack_78 = pSVar12;
        uStack_68 = uVar3;
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_EffectText);
        pMVar19 = extraout_RDX_04;
        uVar1._0_4_ = (undefined4)uStack_78;
        uVar1._4_4_ = uStack_78._4_4_;
        uVar3._0_4_ = (undefined4)uStack_68;
        uVar3._4_4_ = uStack_68._4_4_;
      }
      color_01.fields.g = (float)uVar1._4_4_;
      color_01.fields.r = (float)(undefined4)uVar1;
      color_01.fields.a = (float)uVar3._4_4_;
      color_01.fields.b = (float)(undefined4)uVar3;
      PatreonEffects_EffectText__AppendColorAttribute(pSVar17,"c",color_01,pMVar19);
    }
    bVar9 = System_Collections_Generic_HashSet_object___Contains
                      ((System_Collections_Generic_HashSet_object__o *)__this_01,
                       (Il2CppObject *)"d",
                       (MethodInfo_4FB3720 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
    if (!bVar9) {
      if (pPVar16 == (PatreonEffects_NameEffectSettings_o *)0x0) goto label_059c0bf9;
      pSVar12 = *(System_String_o **)&(pPVar16->fields).gradientD.fields;
      uVar4._0_4_ = (pPVar16->fields).gradientD.fields.b;
      uVar4._4_4_ = (pPVar16->fields).gradientD.fields.a;
      pMVar19 = extraout_RDX_05;
      uVar1._0_4_ = (int)pSVar12;
      uVar1._4_4_ = (int)((ulong)pSVar12 >> 0x20);
      if ((TypeInfo_PatreonEffects_EffectText->_2).cctor_finished_or_no_cctor == 0) {
        uStack_70 = 0;
        uStack_60 = 0;
        uStack_78 = pSVar12;
        uStack_68 = uVar4;
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_EffectText);
        pMVar19 = extraout_RDX_06;
        uVar1._0_4_ = (undefined4)uStack_78;
        uVar1._4_4_ = uStack_78._4_4_;
        uVar4._0_4_ = (undefined4)uStack_68;
        uVar4._4_4_ = uStack_68._4_4_;
      }
      color_02.fields.g = (float)uVar1._4_4_;
      color_02.fields.r = (float)(undefined4)uVar1;
      color_02.fields.a = (float)uVar4._4_4_;
      color_02.fields.b = (float)(undefined4)uVar4;
      PatreonEffects_EffectText__AppendColorAttribute(pSVar17,"d",color_02,pMVar19);
    }
    if (pSVar17 != (System_Text_StringBuilder_o *)0x0) {
      pSVar17 = System_Text_StringBuilder__Append_530f6a0(pSVar17,0x3e,(MethodInfo *)0x0);
      pSVar10 = (*(pSStack_58->klass->vtable)._5_get_Groups.methodPtr)
                          (pSStack_58,(pSStack_58->klass->vtable)._5_get_Groups.method);
      if ((((pSVar10 != (System_Text_RegularExpressions_GroupCollection_o *)0x0) &&
           (pSVar11 = System_Text_RegularExpressions_GroupCollection__get_Item_61df1f0
                                (pSVar10,"content",(MethodInfo *)0x0),
           pSVar11 != (System_Text_RegularExpressions_Group_o *)0x0)) &&
          (pSVar12 = System_Text_RegularExpressions_Capture__get_Value
                               ((System_Text_RegularExpressions_Capture_o *)pSVar11,(MethodInfo *)0x0),
          pSVar17 != (System_Text_StringBuilder_o *)0x0)) &&
         ((pSVar17 = System_Text_StringBuilder__Append_530ed80(pSVar17,pSVar12,(MethodInfo *)0x0),
          pSVar17 != (System_Text_StringBuilder_o *)0x0 &&
          (pSVar17 = System_Text_StringBuilder__Append_530ed80
                               (pSVar17,"</fx>",(MethodInfo *)0x0),
          pSVar17 != (System_Text_StringBuilder_o *)0x0)))) {
        pSVar12 = (*(pSVar17->klass->vtable)._3_ToString.methodPtr)
                            (pSVar17,(pSVar17->klass->vtable)._3_ToString.method);
        return pSVar12;
      }
    }
  }
label_059c0bf9:
  ThrowNullReferenceException();
}


// PatreonEffects.EffectText$$get_text
// il2cpp: System_String_o* PatreonEffects_EffectText__get_text (PatreonEffects_EffectText_o* __this, const MethodInfo* method);
// 0x59bc3f0

System_String_o * PatreonEffects_EffectText__get_text(PatreonEffects_EffectText_o *__this,MethodInfo *method)

{
  return (__this->fields)._text;
}


// PatreonEffects.EffectText$$set_text
// il2cpp: void PatreonEffects_EffectText__set_text (PatreonEffects_EffectText_o* __this, System_String_o* value, const MethodInfo* method);
// 0x59bc400
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59bc413: test r14, r14
// asm:   0x59bc416: je 0x59bc473

void PatreonEffects_EffectText__set_text
               (PatreonEffects_EffectText_o *__this,System_String_o *value,MethodInfo *method)

{
  uint32_t uVar1;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07545bc7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
    Il2CppMethodInitialized_07545bc7 = '\x01';
  }
  if (value == (System_String_o *)0x0) {
    value = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    uVar1 = (((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText)->_2).
            cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText)->_2).
            cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
  }
  method_00 = (MethodInfo *)
              Gisketch_Aottg2UI_Styling_GisketchArabicText__ToVisual(value,false,(MethodInfo *)0x0);
  if (__this == (PatreonEffects_EffectText_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this->fields)._text = (System_String_o *)method_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._text);
  PatreonEffects_EffectText__Rebuild(__this,method_00);
  return;
}


// PatreonEffects.EffectText$$get_fontSize
// il2cpp: float PatreonEffects_EffectText__get_fontSize (PatreonEffects_EffectText_o* __this, const MethodInfo* method);
// 0x59bce90

float PatreonEffects_EffectText__get_fontSize(PatreonEffects_EffectText_o *__this,MethodInfo *method)

{
  return (__this->fields)._fontSize;
}


// PatreonEffects.EffectText$$set_fontSize
// il2cpp: void PatreonEffects_EffectText__set_fontSize (PatreonEffects_EffectText_o* __this, float value, const MethodInfo* method);
// 0x59bcea0

void PatreonEffects_EffectText__set_fontSize
               (PatreonEffects_EffectText_o *__this,float value,MethodInfo *method)

{
  (__this->fields)._fontSize = value;
  PatreonEffects_EffectText__Rebuild(__this,method);
  return;
}


// PatreonEffects.EffectText$$get_color
// il2cpp: UnityEngine_Color_o PatreonEffects_EffectText__get_color (PatreonEffects_EffectText_o* __this, const MethodInfo* method);
// 0x59bcec0

UnityEngine_Color_o
PatreonEffects_EffectText__get_color(PatreonEffects_EffectText_o *__this,MethodInfo *method)

{
  return (UnityEngine_Color_o)(__this->fields)._color.fields;
}


// PatreonEffects.EffectText$$set_color
// il2cpp: void PatreonEffects_EffectText__set_color (PatreonEffects_EffectText_o* __this, UnityEngine_Color_o value, const MethodInfo* method);
// 0x59bced0

void PatreonEffects_EffectText__set_color
               (PatreonEffects_EffectText_o *__this,UnityEngine_Color_o value,MethodInfo *method)

{
  (__this->fields)._color.fields = value.fields;
  PatreonEffects_EffectText__ApplyColor(__this,method);
  return;
}


// PatreonEffects.EffectText$$get_font
// il2cpp: TMPro_TMP_FontAsset_o* PatreonEffects_EffectText__get_font (PatreonEffects_EffectText_o* __this, const MethodInfo* method);
// 0x59bd160

TMPro_TMP_FontAsset_o *
PatreonEffects_EffectText__get_font(PatreonEffects_EffectText_o *__this,MethodInfo *method)

{
  return (__this->fields)._font;
}


// PatreonEffects.EffectText$$set_font
// il2cpp: void PatreonEffects_EffectText__set_font (PatreonEffects_EffectText_o* __this, TMPro_TMP_FontAsset_o* value, const MethodInfo* method);
// 0x59bd170

void PatreonEffects_EffectText__set_font
               (PatreonEffects_EffectText_o *__this,TMPro_TMP_FontAsset_o *value,MethodInfo *method)

{
  (__this->fields)._font = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._font);
  PatreonEffects_EffectText__Rebuild(__this,(MethodInfo *)value);
  return;
}


// PatreonEffects.EffectText$$get_alignment
// il2cpp: int32_t PatreonEffects_EffectText__get_alignment (PatreonEffects_EffectText_o* __this, const MethodInfo* method);
// 0x59bd190

int32_t PatreonEffects_EffectText__get_alignment(PatreonEffects_EffectText_o *__this,MethodInfo *method)

{
  return (__this->fields)._alignment;
}


// PatreonEffects.EffectText$$set_alignment
// il2cpp: void PatreonEffects_EffectText__set_alignment (PatreonEffects_EffectText_o* __this, int32_t value, const MethodInfo* method);
// 0x59bd1a0

void PatreonEffects_EffectText__set_alignment
               (PatreonEffects_EffectText_o *__this,int32_t value,MethodInfo *method)

{
  undefined4 in_register_00000034;
  
  (__this->fields)._alignment = value;
  PatreonEffects_EffectText__ApplyAlignment(__this,(MethodInfo *)CONCAT44(in_register_00000034,value));
  return;
}


// PatreonEffects.EffectText$$get_richText
// il2cpp: bool PatreonEffects_EffectText__get_richText (PatreonEffects_EffectText_o* __this, const MethodInfo* method);
// 0x59bd3b0

bool PatreonEffects_EffectText__get_richText(PatreonEffects_EffectText_o *__this,MethodInfo *method)

{
  return (__this->fields)._richText;
}


// PatreonEffects.EffectText$$set_richText
// il2cpp: void PatreonEffects_EffectText__set_richText (PatreonEffects_EffectText_o* __this, bool value, const MethodInfo* method);
// 0x59bd3c0

void PatreonEffects_EffectText__set_richText
               (PatreonEffects_EffectText_o *__this,bool value,MethodInfo *method)

{
  undefined7 in_register_00000031;
  
  (__this->fields)._richText = value;
  PatreonEffects_EffectText__Rebuild(__this,(MethodInfo *)CONCAT71(in_register_00000031,value));
  return;
}


// PatreonEffects.EffectText$$Compose
// il2cpp: System_String_o* PatreonEffects_EffectText__Compose (System_String_o* content, int32_t effect, UnityEngine_Color_o colorA, UnityEngine_Color_o colorB, UnityEngine_Color_o colorC, UnityEngine_Color_o colorD, const MethodInfo* method);
// 0x59bd3d0

System_String_o *
PatreonEffects_EffectText__Compose
          (System_String_o *content,int32_t effect,UnityEngine_Color_o colorA,UnityEngine_Color_o colorB,
          UnityEngine_Color_o colorC,UnityEngine_Color_o colorD,MethodInfo *method)

{
  bool bVar1;
  System_Text_StringBuilder_o *__this;
  System_Text_StringBuilder_o *pSVar2;
  System_String_o *pSVar3;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  MethodInfo *extraout_RDX_06;
  MethodInfo *pMVar4;
  float local_b8;
  float fStack_b4;
  float local_a8;
  float fStack_a4;
  float local_98;
  float fStack_94;
  float local_88;
  float fStack_84;
  float local_78;
  float fStack_74;
  float local_68;
  float fStack_64;
  float local_58;
  float fStack_54;
  float local_48;
  float fStack_44;
  System_Enum_o local_38;
  int32_t local_28;
  
  if (Il2CppMethodInitialized_07545bc8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_EffectText);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameEffectType);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_StringBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&"a");
    il2cpp_codegen_initialize_runtime_metadata(&"</fx>");
    il2cpp_codegen_initialize_runtime_metadata(&"b");
    il2cpp_codegen_initialize_runtime_metadata(&"c");
    il2cpp_codegen_initialize_runtime_metadata(&"<fx effect=\"");
    il2cpp_codegen_initialize_runtime_metadata(&"d");
    Il2CppMethodInitialized_07545bc8 = '\x01';
  }
  if ((effect == 0) || (bVar1 = System_String__IsNullOrEmpty(content,(MethodInfo *)0x0), bVar1)) {
    if (content == (System_String_o *)0x0) {
      content = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    }
    return content;
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_StringBuilder);
  System_Text_StringBuilder___ctor(__this,(MethodInfo *)0x0);
  if (__this != (System_Text_StringBuilder_o *)0x0) {
    pSVar2 = System_Text_StringBuilder__Append_530ed80(__this,"<fx effect=\"",(MethodInfo *)0x0);
    local_38.klass = (System_Enum_c *)TypeInfo_PatreonEffects_NameEffectType;
    local_38.monitor = (void *)0xffffffffffffffff;
    local_28 = effect;
    pSVar3 = System_Enum__ToString(&local_38,(MethodInfo *)0x0);
    if ((pSVar2 != (System_Text_StringBuilder_o *)0x0) &&
       (pSVar2 = System_Text_StringBuilder__Append_530ed80(pSVar2,pSVar3,(MethodInfo *)0x0),
       pSVar2 != (System_Text_StringBuilder_o *)0x0)) {
      System_Text_StringBuilder__Append_530f6a0(pSVar2,0x22,(MethodInfo *)0x0);
      local_b8 = colorA.fields.r;
      fStack_b4 = colorA.fields.g;
      local_a8 = colorA.fields.b;
      fStack_a4 = colorA.fields.a;
      pMVar4 = extraout_RDX;
      if (9.9999994e-11 <=
          fStack_a4 * fStack_a4 + fStack_b4 * fStack_b4 + local_b8 * local_b8 + local_a8 * local_a8) {
        if ((TypeInfo_PatreonEffects_EffectText->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_EffectText);
          pMVar4 = extraout_RDX_00;
        }
        PatreonEffects_EffectText__AppendColorAttribute(__this,"a",colorA,pMVar4);
        pMVar4 = extraout_RDX_01;
      }
      local_98 = colorB.fields.r;
      fStack_94 = colorB.fields.g;
      local_88 = colorB.fields.b;
      fStack_84 = colorB.fields.a;
      if (9.9999994e-11 <=
          fStack_84 * fStack_84 + fStack_94 * fStack_94 + local_98 * local_98 + local_88 * local_88) {
        if ((TypeInfo_PatreonEffects_EffectText->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_EffectText);
          pMVar4 = extraout_RDX_02;
        }
        PatreonEffects_EffectText__AppendColorAttribute(__this,"b",colorB,pMVar4);
        pMVar4 = extraout_RDX_03;
      }
      local_78 = colorC.fields.r;
      fStack_74 = colorC.fields.g;
      local_68 = colorC.fields.b;
      fStack_64 = colorC.fields.a;
      if (9.9999994e-11 <=
          fStack_64 * fStack_64 + fStack_74 * fStack_74 + local_78 * local_78 + local_68 * local_68) {
        if ((TypeInfo_PatreonEffects_EffectText->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_EffectText);
          pMVar4 = extraout_RDX_04;
        }
        PatreonEffects_EffectText__AppendColorAttribute(__this,"c",colorC,pMVar4);
        pMVar4 = extraout_RDX_05;
      }
      local_58 = colorD.fields.r;
      fStack_54 = colorD.fields.g;
      local_48 = colorD.fields.b;
      fStack_44 = colorD.fields.a;
      if (9.9999994e-11 <=
          fStack_44 * fStack_44 + fStack_54 * fStack_54 + local_58 * local_58 + local_48 * local_48) {
        if ((TypeInfo_PatreonEffects_EffectText->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_EffectText);
          pMVar4 = extraout_RDX_06;
        }
        PatreonEffects_EffectText__AppendColorAttribute(__this,"d",colorD,pMVar4);
      }
      pSVar2 = System_Text_StringBuilder__Append_530f6a0(__this,0x3e,(MethodInfo *)0x0);
      if ((pSVar2 != (System_Text_StringBuilder_o *)0x0) &&
         (pSVar2 = System_Text_StringBuilder__Append_530ed80(pSVar2,content,(MethodInfo *)0x0),
         pSVar2 != (System_Text_StringBuilder_o *)0x0)) {
        System_Text_StringBuilder__Append_530ed80(pSVar2,"</fx>",(MethodInfo *)0x0);
        pSVar3 = (*(__this->klass->vtable)._3_ToString.methodPtr)
                           (__this,(__this->klass->vtable)._3_ToString.method);
        return pSVar3;
      }
    }
  }
  ThrowNullReferenceException();
}


// PatreonEffects.EffectText$$WithPresetColors
// il2cpp: System_String_o* PatreonEffects_EffectText__WithPresetColors (System_String_o* text, const MethodInfo* method);
// 0x59bd850
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59bd929: test r14, r14
// asm:   0x59bd92c: je 0x59bd9da

System_String_o * PatreonEffects_EffectText__WithPresetColors(System_String_o *text,MethodInfo *method)

{
  System_Text_RegularExpressions_Regex_o *__this;
  Il2CppObject *object;
  bool bVar1;
  int32_t iVar2;
  System_String_o *pSVar3;
  PatreonEffects_EffectText___c_StaticFields *pPVar4;
  System_Text_RegularExpressions_MatchEvaluator_o *__this_00;
  
  if (Il2CppMethodInitialized_07545bc9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_EffectText);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_RegularExpressions_MatchEvaluator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_PatreonEffects_EffectText_c_WithPresetColors_b__27_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_EffectText_c);
    il2cpp_codegen_initialize_runtime_metadata(&"<fx");
    Il2CppMethodInitialized_07545bc9 = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(text,(MethodInfo *)0x0);
  if (bVar1) {
    return text;
  }
  if (text != (System_String_o *)0x0) {
    iVar2 = System_String__IndexOf_53072b0(text,"<fx",4,(MethodInfo *)0x0);
    if (iVar2 < 0) {
      return text;
    }
    if ((TypeInfo_PatreonEffects_EffectText->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_EffectText);
    }
    __this = TypeInfo_PatreonEffects_EffectText->static_fields->_fxTagRegex;
    if ((TypeInfo_PatreonEffects_EffectText_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_EffectText_c);
      pPVar4 = TypeInfo_PatreonEffects_EffectText_c->static_fields;
      __this_00 = pPVar4->__9__27_0;
    }
    else {
      pPVar4 = TypeInfo_PatreonEffects_EffectText_c->static_fields;
      __this_00 = pPVar4->__9__27_0;
    }
    if (__this_00 == (System_Text_RegularExpressions_MatchEvaluator_o *)0x0) {
      if ((((Il2CppClass *)TypeInfo_PatreonEffects_EffectText_c)->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_EffectText_c);
        pPVar4 = TypeInfo_PatreonEffects_EffectText_c->static_fields;
      }
      object = (Il2CppObject *)pPVar4->__9;
      __this_00 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Text_RegularExpressions_MatchEvaluator);
      System_Text_RegularExpressions_MatchEvaluator___ctor
                (__this_00,object,(intptr_t)MethodInfo_PatreonEffects_EffectText_c_WithPresetColors_b__27_0,
                 (MethodInfo *)0x0);
      pPVar4 = TypeInfo_PatreonEffects_EffectText_c->static_fields;
      pPVar4->__9__27_0 = __this_00;
      Il2CppCodeGenWriteBarrier(&pPVar4->__9__27_0);
    }
    if (__this != (System_Text_RegularExpressions_Regex_o *)0x0) {
      pSVar3 = System_Text_RegularExpressions_Regex__Replace_61e3fe0(__this,text,__this_00,(MethodInfo *)0x0);
      return pSVar3;
    }
  }
  ThrowNullReferenceException();
}


// PatreonEffects.EffectText$$AppendColorAttribute
// il2cpp: void PatreonEffects_EffectText__AppendColorAttribute (System_Text_StringBuilder_o* sb, System_String_o* key, UnityEngine_Color_o color, const MethodInfo* method);
// 0x59bd780

void PatreonEffects_EffectText__AppendColorAttribute
               (System_Text_StringBuilder_o *sb,System_String_o *key,UnityEngine_Color_o color,
               MethodInfo *method)

{
  System_Text_StringBuilder_o *pSVar1;
  System_String_o *value;
  float local_38;
  float fStack_34;
  UnityEngine_Color_o local_20;
  
  if (Il2CppMethodInitialized_07545bca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"=\"#");
    Il2CppMethodInitialized_07545bca = '\x01';
  }
  if (sb != (System_Text_StringBuilder_o *)0x0) {
    pSVar1 = System_Text_StringBuilder__Append_530f6a0(sb,0x20,(MethodInfo *)0x0);
    if (pSVar1 != (System_Text_StringBuilder_o *)0x0) {
      pSVar1 = System_Text_StringBuilder__Append_530ed80(pSVar1,key,(MethodInfo *)0x0);
      if (pSVar1 != (System_Text_StringBuilder_o *)0x0) {
        pSVar1 = System_Text_StringBuilder__Append_530ed80(pSVar1,"=\"#",(MethodInfo *)0x0);
        local_38 = color.fields.r;
        fStack_34 = color.fields.g;
        local_20.fields.b = color.fields.b;
        local_20.fields.a = color.fields.a;
        local_20.fields.r = local_38;
        local_20.fields.g = fStack_34;
        value = UnityEngine_ColorUtility__ToHtmlStringRGB_68fde50(&local_20,(MethodInfo *)0x0);
        if (pSVar1 != (System_Text_StringBuilder_o *)0x0) {
          pSVar1 = System_Text_StringBuilder__Append_530ed80(pSVar1,value,(MethodInfo *)0x0);
          if (pSVar1 != (System_Text_StringBuilder_o *)0x0) {
            System_Text_StringBuilder__Append_530f6a0(pSVar1,0x22,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// PatreonEffects.EffectText$$ParseLine
// il2cpp: System_Collections_Generic_List_EffectText_Segment__o* PatreonEffects_EffectText__ParseLine (System_String_o* line, const MethodInfo* method);
// 0x59bd9e0
// eh: try 0x59bdc5f..0x59be17d -> pad 0x59bef33 (+13 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x59be24f..0x59be82f -> pad 0x59beb6f (+22 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x59be86a..0x59beab6 -> pad 0x59bef63 (+2 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x59beabb..0x59beb2c -> pad 0x59beb71 (+10 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x59beb96..0x59beefb -> pad 0x59bef08 (+15 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x59bef0e..0x59bef1b -> pad 0x59befb0 catch (...) [compiler noexcept guard]
// eh: try 0x59bef8e..0x59bef93 -> pad 0x59bef98 cleanup
// eh: try 0x59bef9b..0x59befa8 -> pad 0x59befb0 catch (...) [compiler noexcept guard]
// asm: 106 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59bdcf9: nop dword ptr [rax]
// asm:   0x59beb22: mov qword ptr [rsp + 0x78], rax
// asm:   0x59beb31: jmp 0x59beb71
// asm:   0x59beb33: jmp 0x59beb71
// asm:   0x59beb35: jmp 0x59beb71
// asm:   0x59beb37: jmp 0x59beb71
// asm:   0x59beb39: jmp 0x59beb71
// asm:   0x59beb3b: jmp 0x59beb71
// asm:   0x59beb3d: jmp 0x59beb71
// asm:   0x59beb3f: jmp 0x59beb71
// asm:   0x59beb41: jmp 0x59beb71
// asm:   0x59beb43: jmp 0x59beb71
// asm:   0x59beb45: jmp 0x59beb71
// asm:   0x59beb47: jmp 0x59beb71
// asm:   0x59beb49: jmp 0x59beb71
// asm:   0x59beb4b: jmp 0x59beb71
// asm:   0x59beb4d: jmp 0x59beb71
// asm:   0x59beb4f: jmp 0x59beb71
// asm:   0x59beb51: jmp 0x59beb71
// asm:   0x59beb53: jmp 0x59beb71
// asm:   0x59beb55: jmp 0x59beb71
// asm:   0x59beb57: jmp 0x59beb71
// asm:   0x59beb59: jmp 0x59beb71
// asm:   0x59beb5b: jmp 0x59beb71
// asm:   0x59beb5d: jmp 0x59beb71
// asm:   0x59beb5f: jmp 0x59beb71
// asm:   0x59beb61: jmp 0x59beb71
// asm:   0x59beb63: jmp 0x59beb71
// asm:   0x59beb65: jmp 0x59beb71
// asm:   0x59beb67: jmp 0x59beb71
// asm:   0x59beb69: jmp 0x59beb71
// asm:   0x59beb6b: jmp 0x59beb71
// asm:   0x59beb6d: jmp 0x59beb71
// asm:   0x59beb6f: jmp 0x59beb71
// asm:   0x59beb71: mov rbx, rdx
// asm:   0x59beb74: mov rbp, rax
// asm:   0x59beb77: cmp ebx, 1
// asm:   0x59beb7a: jne 0x59bef0e
// asm:   0x59beb80: mov rdi, rbp
// asm:   0x59beb83: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x59beb88: mov rbx, qword ptr [rax]
// asm:   0x59beb8b: mov qword ptr [rsp + 0x130], rbx
// asm:   0x59beb93: xor r14d, r14d
// asm:   0x59beb96: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x59beb9b: jmp 0x59be858
// asm:   0x59beed0: mov rdi, rbx
// asm:   0x59beed3: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x59bef00: mov rdi, r13
// asm:   0x59bef03: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x59bef08: mov rbx, rdx
// asm:   0x59bef0b: mov rbp, rax
// asm:   0x59bef0e: lea rdi, [rsp + 0x130]
// asm:   0x59bef16: call 0x2fd5000  ; il2cpp_runtime_helper_02fd5000()
// asm:   0x59bef1b: mov r15, qword ptr [rsp + 0x68]
// asm:   0x59bef20: mov r12, qword ptr [rsp + 0x70]
// asm:   0x59bef25: jmp 0x59bef73
// asm:   0x59bef27: jmp 0x59bef63
// asm:   0x59bef29: jmp 0x59bef63
// asm:   0x59bef2b: jmp 0x59bef63
// asm:   0x59bef2d: jmp 0x59bef63
// asm:   0x59bef2f: jmp 0x59bef63
// asm:   0x59bef31: jmp 0x59bef63
// asm:   0x59bef33: jmp 0x59bef63
// asm:   0x59bef35: jmp 0x59bef63
// asm:   0x59bef37: jmp 0x59bef63
// asm:   0x59bef39: jmp 0x59bef63
// asm:   0x59bef3b: jmp 0x59bef63
// asm:   0x59bef3d: jmp 0x59bef63
// asm:   0x59bef3f: jmp 0x59bef63
// asm:   0x59bef41: jmp 0x59bef63
// asm:   0x59bef43: jmp 0x59bef63
// asm:   0x59bef45: jmp 0x59bef63
// asm:   0x59bef47: jmp 0x59bef63
// asm:   0x59bef49: jmp 0x59bef63
// asm:   0x59bef4b: jmp 0x59bef63
// asm:   0x59bef4d: jmp 0x59bef63
// asm:   0x59bef4f: jmp 0x59bef63
// asm:   0x59bef51: jmp 0x59bef63
// asm:   0x59bef53: jmp 0x59bef63
// asm:   0x59bef55: jmp 0x59bef63
// asm:   0x59bef57: jmp 0x59bef63
// asm:   0x59bef59: jmp 0x59bef63
// asm:   0x59bef5b: jmp 0x59bef63
// asm:   0x59bef5d: jmp 0x59bef63
// asm:   0x59bef5f: jmp 0x59bef63
// asm:   0x59bef61: jmp 0x59bef63
// asm:   0x59bef63: mov rbx, rdx
// asm:   0x59bef66: mov rbp, rax
// asm:   0x59bef69: mov r15, qword ptr [rsp + 0x68]
// asm:   0x59bef6e: mov r12, qword ptr [rsp + 0x70]
// asm:   0x59bef73: cmp ebx, 1
// asm:   0x59bef76: jne 0x59bef9b
// asm:   0x59bef78: mov rdi, rbp
// asm:   0x59bef7b: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x59bef80: mov r13, qword ptr [rax]
// asm:   0x59bef83: mov qword ptr [rsp + 0x210], r13
// asm:   0x59bef8b: xor r14d, r14d
// asm:   0x59bef8e: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x59bef93: jmp 0x59bebb3
// asm:   0x59bef98: mov rbp, rax
// asm:   0x59bef9b: lea rdi, [rsp + 0x210]
// asm:   0x59befa3: call 0x2fd50a0  ; il2cpp_runtime_helper_02fd50a0()
// asm:   0x59befa8: mov rdi, rbp
// asm:   0x59befab: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x59befb0: mov rdi, rax
// asm:   0x59befb3: call 0x2ab61e0  ; __clang_call_terminate()

System_Collections_Generic_List_EffectText_Segment__o *
PatreonEffects_EffectText__ParseLine(System_String_o *line,MethodInfo *method)

{
  int32_t *piVar1;
  UnityEngine_Color_o *pUVar2;
  float *pfVar3;
  PatreonEffects_EffectText_Segment_Fields *pPVar4;
  byte bVar5;
  uint uVar6;
  System_Text_RegularExpressions_Regex_o *pSVar7;
  Il2CppClass *pIVar8;
  Il2CppRuntimeInterfaceOffsetPair *pIVar9;
  PatreonEffects_EffectText_Segment_array *pPVar10;
  PatreonEffects_EffectText_Segment_o item;
  PatreonEffects_EffectText_Segment_o item_00;
  PatreonEffects_EffectText_Segment_o item_01;
  UnityEngine_Color_o value;
  UnityEngine_Color_o value_00;
  System_Nullable_Color__o *pSVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  bool bVar15;
  System_Collections_Generic_List_EffectText_Segment__o *__this;
  System_Text_RegularExpressions_MatchCollection_o *pSVar16;
  VirtualInvokeData *pVVar17;
  Il2CppObject *pIVar18;
  System_String_o *pSVar19;
  System_Text_RegularExpressions_GroupCollection_o *pSVar20;
  System_Text_RegularExpressions_Group_o *pSVar21;
  System_String_o *value_01;
  int iVar22;
  int iVar23;
  ulong uVar24;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *pMVar25;
  long lVar26;
  Il2CppObject **local_248;
  undefined8 uStack_240;
  float local_238;
  ulong local_228;
  Il2CppObject *local_220;
  Il2CppObject *local_218;
  Il2CppObject *local_210;
  int32_t local_204;
  Il2CppObject *local_200;
  System_String_o *local_1f8;
  undefined8 uStack_1f0;
  Il2CppObject **local_1e8;
  undefined8 uStack_1e0;
  float local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  float fStack_1cc;
  float local_1c8;
  float fStack_1c4;
  Il2CppObject **ppIStack_1c0;
  undefined8 local_1b8;
  float fStack_1b0;
  undefined4 uStack_1ac;
  undefined4 local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  System_String_o *local_198;
  undefined8 uStack_190;
  Il2CppObject **local_188;
  float fStack_180;
  float fStack_17c;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  Il2CppObject **ppIStack_160;
  float local_158;
  float fStack_154;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  Il2CppObject **local_138;
  undefined8 uStack_130;
  float local_128;
  Il2CppObject **local_118;
  undefined8 uStack_110;
  float local_108;
  Il2CppObject **local_f8;
  undefined8 uStack_f0;
  float local_e8;
  Il2CppObject **local_d8;
  undefined8 uStack_d0;
  float local_c8;
  System_String_o *local_b8;
  undefined8 uStack_b0;
  Il2CppObject **local_a8;
  float fStack_a0;
  float fStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  Il2CppObject **ppIStack_80;
  float local_78;
  float fStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  UnityEngine_Color_Fields local_58;
  UnityEngine_Color_Fields local_48;
  System_String_o *local_38;
  
  if (Il2CppMethodInitialized_07545bcb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_EffectText);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_EffectText_Segment_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_EffectText_Segment_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_EffectText_Segment);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_RegularExpressions_Match);
    il2cpp_codegen_initialize_runtime_metadata(&"val");
    il2cpp_codegen_initialize_runtime_metadata(&"a");
    il2cpp_codegen_initialize_runtime_metadata(&"effect");
    il2cpp_codegen_initialize_runtime_metadata(&"b");
    il2cpp_codegen_initialize_runtime_metadata(&"c");
    il2cpp_codegen_initialize_runtime_metadata(&"attrs");
    il2cpp_codegen_initialize_runtime_metadata(&"d");
    il2cpp_codegen_initialize_runtime_metadata(&"content");
    il2cpp_codegen_initialize_runtime_metadata(&"key");
    Il2CppMethodInitialized_07545bcb = '\x01';
  }
  local_210 = (Il2CppObject *)0x0;
  local_d8 = (Il2CppObject **)0x0;
  uStack_d0._0_4_ = 0.0;
  uStack_d0._4_4_ = 0.0;
  local_c8 = 0.0;
  local_f8 = (Il2CppObject **)0x0;
  uStack_f0._0_4_ = 0.0;
  uStack_f0._4_4_ = 0.0;
  local_e8 = 0.0;
  local_118 = (Il2CppObject **)0x0;
  uStack_110._0_4_ = 0.0;
  uStack_110._4_4_ = 0.0;
  local_108 = 0.0;
  local_138 = (Il2CppObject **)0x0;
  uStack_130._0_4_ = 0.0;
  uStack_130._4_4_ = 0.0;
  local_128 = 0.0;
  local_1a8 = 0;
  fStack_1a4 = 0.0;
  fStack_1a0 = 0.0;
  fStack_19c = 0.0;
  local_1b8._0_4_ = 0.0;
  local_1b8._4_4_ = 0.0;
  fStack_1b0 = 0.0;
  uStack_1ac = 0;
  local_1c8 = 0.0;
  fStack_1c4 = 0.0;
  ppIStack_1c0 = (Il2CppObject **)0x0;
  local_1d8 = 0.0;
  uStack_1d4 = 0;
  uStack_1d0 = 0;
  fStack_1cc = 0.0;
  local_1e8 = (Il2CppObject **)0x0;
  uStack_1e0._0_4_ = 0.0;
  uStack_1e0._4_4_ = 0.0;
  local_1f8 = (System_String_o *)0x0;
  uStack_1f0 = 0;
  local_220 = (Il2CppObject *)0x0;
  local_200 = (Il2CppObject *)0x0;
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_EffectText_Segment);
  System_Collections_Generic_List_EffectText_Segment____ctor
            (__this,(MethodInfo_3A87F70 *)MethodInfo_System_Collections_Generic_List_EffectText_Segment_ctor);
  if ((TypeInfo_PatreonEffects_EffectText->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_EffectText);
  }
  pSVar7 = TypeInfo_PatreonEffects_EffectText->static_fields->_fxTagRegex;
  if (pSVar7 != (System_Text_RegularExpressions_Regex_o *)0x0) {
    local_228 = 0;
    pSVar16 = System_Text_RegularExpressions_Regex__Matches(pSVar7,line,(MethodInfo *)0x0);
    if (pSVar16 != (System_Text_RegularExpressions_MatchCollection_o *)0x0) {
      local_210 = (Il2CppObject *)
                  System_Text_RegularExpressions_MatchCollection__GetEnumerator(pSVar16,(MethodInfo *)0x0);
      local_b8 = (System_String_o *)0x0;
      uStack_b0 = &local_210;
      local_a8 = &local_200;
      if (local_210 == (Il2CppObject *)0x0) {
label_059beea3:
        ThrowNullReferenceException();
      }
      local_228 = 0;
label_059bdcd8:
      pIVar18 = local_210;
      pIVar8 = local_210->klass;
      uVar24 = (ulong)(pIVar8->_2).interface_offsets_count;
      if (uVar24 != 0) {
        pIVar9 = (pIVar8->_1).interfaceOffsets;
        lVar26 = 0;
        do {
          if (*(System_Collections_IEnumerator_c **)((long)&pIVar9->interfaceType + lVar26) ==
              TypeInfo_System_Collections_IEnumerator) {
            pVVar17 = (VirtualInvokeData *)&pIVar8->vtable[*(int *)((long)&pIVar9->offset + lVar26)].methodPtr
            ;
            goto label_059bdd33;
          }
          lVar26 = lVar26 + 0x10;
        } while (uVar24 * 0x10 != lVar26);
      }
      pVVar17 = GetInterfaceInvokeDataFromVTableSlowPath
                          (local_210,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_059bdd33:
      bVar15 = (*pVVar17->methodPtr)(pIVar18,pVVar17->method);
      pIVar18 = local_210;
      if (bVar15) {
        if (local_210 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar8 = local_210->klass;
        uVar24 = (ulong)(pIVar8->_2).interface_offsets_count;
        if (uVar24 != 0) {
          pIVar9 = (pIVar8->_1).interfaceOffsets;
          lVar26 = 0;
          do {
            if (*(System_Collections_IEnumerator_c **)((long)&pIVar9->interfaceType + lVar26) ==
                TypeInfo_System_Collections_IEnumerator) {
              pVVar17 = (VirtualInvokeData *)
                        &pIVar8->vtable[*(int *)((long)&pIVar9->offset + lVar26) + 1].methodPtr;
              goto label_059bddc7;
            }
            lVar26 = lVar26 + 0x10;
          } while (uVar24 * 0x10 != lVar26);
        }
        pVVar17 = GetInterfaceInvokeDataFromVTableSlowPath
                            (local_210,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,1);
label_059bddc7:
        pIVar18 = (*pVVar17->methodPtr)(pIVar18,pVVar17->method);
        if (pIVar18 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        bVar5 = (TypeInfo_System_Text_RegularExpressions_Match->_2).typeHierarchyDepth;
        local_218 = pIVar18;
        if (((pIVar18->klass->_2).typeHierarchyDepth < bVar5) ||
           ((pIVar18->klass->_2).typeHierarchy[(ulong)bVar5 - 1] !=
            (Il2CppClass *)TypeInfo_System_Text_RegularExpressions_Match)) {
          il2cpp_codegen_raise_invalid_cast_exception(pIVar18);
        }
        iVar22 = *(int *)&pIVar18[1].klass - (int)local_228;
        if (iVar22 != 0 && (int)local_228 <= *(int *)&pIVar18[1].klass) {
          if (line == (System_String_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar19 = System_String__Substring_53042f0(line,(int)local_228,iVar22,(MethodInfo *)0x0);
          if (pSVar19 == (System_String_o *)0x0) {
            ThrowNullReferenceException();
          }
          if (0 < (pSVar19->fields)._stringLength) {
            fStack_1b0 = 0.0;
            uStack_1ac = 0;
            local_1a8 = 0;
            fStack_1a4 = 0.0;
            ppIStack_1c0 = (Il2CppObject **)0x0;
            local_1b8._0_4_ = 0.0;
            local_1b8._4_4_ = 0.0;
            uStack_1d0 = 0;
            fStack_1cc = 0.0;
            local_1c8 = 0.0;
            fStack_1c4 = 0.0;
            uStack_1e0._0_4_ = 0.0;
            uStack_1e0._4_4_ = 0.0;
            local_1d8 = 0.0;
            uStack_1d4 = 0;
            uStack_1f0 = 0;
            local_1e8 = (Il2CppObject **)0x0;
            fStack_1a0 = 0.0;
            fStack_19c = 0.0;
            local_1f8 = pSVar19;
            Il2CppCodeGenWriteBarrier(&local_1f8);
            uVar12 = uStack_1f0;
            pMVar25 = MethodInfo_System_Collections_Generic_List_EffectText_Segment_Add;
            uVar24 = uStack_1f0 >> 8;
            uStack_1f0 = uVar24 << 8;
            lVar26 = uStack_1f0;
            uStack_1f0 = lVar26;
            if (__this != (System_Collections_Generic_List_EffectText_Segment__o *)0x0) {
              local_148 = CONCAT44(fStack_1a4,local_1a8);
              uStack_140 = CONCAT44(fStack_19c,fStack_1a0);
              uStack_150 = CONCAT44(uStack_1ac,fStack_1b0);
              local_158 = (float)local_1b8;
              fStack_154 = local_1b8._4_4_;
              uStack_1f0._5_2_ = SUB82(uVar12,5);
              uStack_1f0._7_1_ = SUB81(uVar12,7);
              local_178 = CONCAT44(uStack_1d4,local_1d8);
              uStack_170 = CONCAT44(fStack_1cc,uStack_1d0);
              local_168 = CONCAT44(fStack_1c4,local_1c8);
              ppIStack_160 = ppIStack_1c0;
              local_188 = local_1e8;
              fStack_180 = (float)uStack_1e0;
              fStack_17c = uStack_1e0._4_4_;
              local_198 = local_1f8;
              uStack_190 = (Il2CppObject **)((uVar24 & 0xffffffff) << 8);
              lVar26 = (long)uStack_190;
              uStack_190 = (Il2CppObject **)
                           CONCAT17(uStack_1f0._7_1_,CONCAT25(uStack_1f0._5_2_,(undefined5)uStack_190));
              lVar14 = (long)uStack_190;
              piVar1 = &(__this->fields)._version;
              *piVar1 = *piVar1 + 1;
              pPVar10 = (__this->fields)._items;
              if (pPVar10 != (PatreonEffects_EffectText_Segment_array *)0x0) {
                uVar6 = (__this->fields)._size;
                uStack_190 = (Il2CppObject **)lVar14;
                if (uVar6 < (uint)pPVar10->max_length) {
                  (__this->fields)._size = uVar6 + 1;
                  pUVar2 = &pPVar10->m_Items[(int)uVar6].fields.ColorD.fields.value;
                  (pUVar2->fields).r = (float)local_1a8;
                  (pUVar2->fields).g = fStack_1a4;
                  (pUVar2->fields).b = fStack_1a0;
                  (pUVar2->fields).a = fStack_19c;
                  pSVar11 = &pPVar10->m_Items[(int)uVar6].fields.ColorC;
                  (pSVar11->fields).value.fields.g = (float)local_1b8;
                  (pSVar11->fields).value.fields.b = local_1b8._4_4_;
                  *(undefined8 *)(&(pSVar11->fields).value.fields.g + 2) = uStack_150;
                  pSVar11 = &pPVar10->m_Items[(int)uVar6].fields.ColorB;
                  (pSVar11->fields).value.fields.b = local_1c8;
                  (pSVar11->fields).value.fields.a = fStack_1c4;
                  *(Il2CppObject ***)(&(pSVar11->fields).value.fields.b + 2) = ppIStack_1c0;
                  pfVar3 = &pPVar10->m_Items[(int)uVar6].fields.ColorA.fields.value.fields.a;
                  *pfVar3 = local_1d8;
                  pfVar3[1] = (float)uStack_1d4;
                  pfVar3[2] = (float)uStack_1d0;
                  pfVar3[3] = fStack_1cc;
                  pSVar11 = &pPVar10->m_Items[(int)uVar6].fields.ColorA;
                  *(Il2CppObject ***)&pSVar11->fields = local_1e8;
                  (pSVar11->fields).value.fields.g = (float)uStack_1e0;
                  (pSVar11->fields).value.fields.b = uStack_1e0._4_4_;
                  pPVar4 = &pPVar10->m_Items[(int)uVar6].fields;
                  pPVar4->Content = local_1f8;
                  uStack_190._0_1_ = (undefined1)lVar26;
                  uStack_190._1_3_ = SUB83(lVar26,1);
                  uStack_190._4_4_ = SUB84(lVar14,4);
                  pPVar4->HasEffect = (bool)(undefined1)uStack_190;
                  *(undefined3 *)&pPVar4->field_0x9 = uStack_190._1_3_;
                  pPVar4->Effect = uStack_190._4_4_;
                  Il2CppCodeGenWriteBarrier(&pPVar10->m_Items[(int)uVar6].fields.Content);
                }
                else {
                  uStack_190._0_1_ = (undefined1)lVar26;
                  uStack_190._1_3_ = SUB83(lVar26,1);
                  uStack_190._4_4_ = SUB84(lVar14,4);
                  item_00.fields.HasEffect = (bool)(undefined1)uStack_190;
                  item_00.fields._9_3_ = uStack_190._1_3_;
                  item_00.fields.Effect = uStack_190._4_4_;
                  item_00.fields.Content = local_1f8;
                  item_00.fields.ColorA.fields._0_8_ = local_1e8;
                  item_00.fields.ColorA.fields.value.fields.g = (float)uStack_1e0;
                  item_00.fields.ColorA.fields.value.fields.b = uStack_1e0._4_4_;
                  item_00.fields.ColorA.fields.value.fields.a = local_1d8;
                  item_00.fields.ColorB.fields._0_4_ = uStack_1d4;
                  item_00.fields.ColorB.fields.value.fields.r = (float)uStack_1d0;
                  item_00.fields.ColorB.fields.value.fields.g = fStack_1cc;
                  item_00.fields.ColorB.fields.value.fields.b = local_1c8;
                  item_00.fields.ColorB.fields.value.fields.a = fStack_1c4;
                  item_00.fields.ColorC.fields._0_8_ = ppIStack_1c0;
                  item_00.fields.ColorC.fields.value.fields.g = (float)local_1b8;
                  item_00.fields.ColorC.fields.value.fields.b = local_1b8._4_4_;
                  item_00.fields.ColorC.fields.value.fields.a = fStack_1b0;
                  item_00.fields.ColorD.fields.hasValue = (bool)(char)uStack_1ac;
                  item_00.fields.ColorD.fields._1_3_ = (int3)((uint)uStack_1ac >> 8);
                  item_00.fields.ColorD.fields.value.fields.r = (float)local_1a8;
                  item_00.fields.ColorD.fields.value.fields.g = fStack_1a4;
                  item_00.fields.ColorD.fields.value.fields.b = fStack_1a0;
                  item_00.fields.ColorD.fields.value.fields.a = fStack_19c;
                  System_Collections_Generic_List_EffectText_Segment___AddWithResize
                            (__this,item_00,(MethodInfo_3A88A50 *)pMVar25->klass->rgctx_data[0xe].method);
                }
                goto label_059be040;
              }
            }
            ThrowNullReferenceException();
          }
        }
label_059be040:
        pSVar20 = (System_Text_RegularExpressions_GroupCollection_o *)
                  (*local_218->klass->vtable[5].methodPtr)(local_218,local_218->klass->vtable[5].method);
        if (pSVar20 == (System_Text_RegularExpressions_GroupCollection_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar21 = System_Text_RegularExpressions_GroupCollection__get_Item_61df1f0
                            (pSVar20,"attrs",(MethodInfo *)0x0);
        if (pSVar21 == (System_Text_RegularExpressions_Group_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar19 = System_Text_RegularExpressions_Capture__get_Value
                            ((System_Text_RegularExpressions_Capture_o *)pSVar21,(MethodInfo *)0x0);
        pSVar20 = (System_Text_RegularExpressions_GroupCollection_o *)
                  (*local_218->klass->vtable[5].methodPtr)(local_218,local_218->klass->vtable[5].method);
        if (pSVar20 == (System_Text_RegularExpressions_GroupCollection_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar21 = System_Text_RegularExpressions_GroupCollection__get_Item_61df1f0
                            (pSVar20,"content",(MethodInfo *)0x0);
        if (pSVar21 == (System_Text_RegularExpressions_Group_o *)0x0) {
          ThrowNullReferenceException();
        }
        local_38 = System_Text_RegularExpressions_Capture__get_Value
                             ((System_Text_RegularExpressions_Capture_o *)pSVar21,(MethodInfo *)0x0);
        local_d8 = (Il2CppObject **)0x0;
        uStack_d0._0_4_ = 0.0;
        uStack_d0._4_4_ = 0.0;
        local_c8 = 0.0;
        local_f8 = (Il2CppObject **)0x0;
        uStack_f0._0_4_ = 0.0;
        uStack_f0._4_4_ = 0.0;
        local_e8 = 0.0;
        local_118 = (Il2CppObject **)0x0;
        uStack_110._0_4_ = 0.0;
        uStack_110._4_4_ = 0.0;
        local_108 = 0.0;
        local_138 = (Il2CppObject **)0x0;
        uStack_130._0_4_ = 0.0;
        uStack_130._4_4_ = 0.0;
        local_128 = 0.0;
        if ((TypeInfo_PatreonEffects_EffectText->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_EffectText);
        }
        pSVar7 = TypeInfo_PatreonEffects_EffectText->static_fields->_attrRegex;
        if (pSVar7 == (System_Text_RegularExpressions_Regex_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar16 = System_Text_RegularExpressions_Regex__Matches(pSVar7,pSVar19,(MethodInfo *)0x0);
        if (pSVar16 == (System_Text_RegularExpressions_MatchCollection_o *)0x0) {
          ThrowNullReferenceException();
        }
        local_220 = (Il2CppObject *)
                    System_Text_RegularExpressions_MatchCollection__GetEnumerator(pSVar16,(MethodInfo *)0x0);
        local_198 = (System_String_o *)0x0;
        uStack_190 = &local_220;
        local_188 = &local_200;
        if (local_220 == (Il2CppObject *)0x0) {
label_059beb27:
          ThrowNullReferenceException();
        }
        iVar22 = 0;
        do {
          pIVar18 = local_220;
          pIVar8 = local_220->klass;
          uVar24 = (ulong)(pIVar8->_2).interface_offsets_count;
          if (uVar24 != 0) {
            pIVar9 = (pIVar8->_1).interfaceOffsets;
            lVar26 = 0;
            do {
              if (*(System_Collections_IEnumerator_c **)((long)&pIVar9->interfaceType + lVar26) ==
                  TypeInfo_System_Collections_IEnumerator) {
                pVVar17 = (VirtualInvokeData *)
                          &pIVar8->vtable[*(int *)((long)&pIVar9->offset + lVar26)].methodPtr;
                goto label_059be273;
              }
              lVar26 = lVar26 + 0x10;
            } while (uVar24 * 0x10 != lVar26);
          }
          pVVar17 = GetInterfaceInvokeDataFromVTableSlowPath
                              (local_220,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_059be273:
          bVar15 = (*pVVar17->methodPtr)(pIVar18,pVVar17->method);
          pIVar18 = local_220;
          if (!bVar15) goto label_059be850;
          if (local_220 == (Il2CppObject *)0x0) {
            ThrowNullReferenceException();
          }
          pIVar8 = local_220->klass;
          uVar24 = (ulong)(pIVar8->_2).interface_offsets_count;
          if (uVar24 != 0) {
            pIVar9 = (pIVar8->_1).interfaceOffsets;
            lVar26 = 0;
            do {
              if (*(System_Collections_IEnumerator_c **)((long)&pIVar9->interfaceType + lVar26) ==
                  TypeInfo_System_Collections_IEnumerator) {
                pVVar17 = (VirtualInvokeData *)
                          &pIVar8->vtable[*(int *)((long)&pIVar9->offset + lVar26) + 1].methodPtr;
                goto label_059be307;
              }
              lVar26 = lVar26 + 0x10;
            } while (uVar24 * 0x10 != lVar26);
          }
          pVVar17 = GetInterfaceInvokeDataFromVTableSlowPath
                              (local_220,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,1);
label_059be307:
          pIVar18 = (*pVVar17->methodPtr)(pIVar18,pVVar17->method);
          if (pIVar18 == (Il2CppObject *)0x0) {
            ThrowNullReferenceException();
          }
          pIVar8 = pIVar18->klass;
          bVar5 = (TypeInfo_System_Text_RegularExpressions_Match->_2).typeHierarchyDepth;
          if (((pIVar8->_2).typeHierarchyDepth < bVar5) ||
             ((pIVar8->_2).typeHierarchy[(ulong)bVar5 - 1] !=
              (Il2CppClass *)TypeInfo_System_Text_RegularExpressions_Match)) {
            il2cpp_codegen_raise_invalid_cast_exception(pIVar18);
          }
          pSVar20 = (System_Text_RegularExpressions_GroupCollection_o *)
                    (*pIVar8->vtable[5].methodPtr)(pIVar18,pIVar8->vtable[5].method);
          if (pSVar20 == (System_Text_RegularExpressions_GroupCollection_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar21 = System_Text_RegularExpressions_GroupCollection__get_Item_61df1f0
                              (pSVar20,"key",(MethodInfo *)0x0);
          if (pSVar21 == (System_Text_RegularExpressions_Group_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar19 = System_Text_RegularExpressions_Capture__get_Value
                              ((System_Text_RegularExpressions_Capture_o *)pSVar21,(MethodInfo *)0x0);
          if (pSVar19 == (System_String_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar19 = System_String__ToLowerInvariant(pSVar19,(MethodInfo *)0x0);
          pSVar20 = (System_Text_RegularExpressions_GroupCollection_o *)
                    (*pIVar18->klass->vtable[5].methodPtr)(pIVar18,pIVar18->klass->vtable[5].method);
          if (pSVar20 == (System_Text_RegularExpressions_GroupCollection_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar21 = System_Text_RegularExpressions_GroupCollection__get_Item_61df1f0
                              (pSVar20,"val",(MethodInfo *)0x0);
          if (pSVar21 == (System_Text_RegularExpressions_Group_o *)0x0) {
            ThrowNullReferenceException();
          }
          value_01 = System_Text_RegularExpressions_Capture__get_Value
                               ((System_Text_RegularExpressions_Capture_o *)pSVar21,(MethodInfo *)0x0);
          bVar15 = System_String__op_Equality(pSVar19,"effect",(MethodInfo *)0x0);
          if (bVar15) {
            if (Il2CppMethodInitialized_07545bfe == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Enum_TryParse_NameEffectType);
              il2cpp_codegen_initialize_runtime_metadata(&"Wave");
              il2cpp_codegen_initialize_runtime_metadata(&"None");
              Il2CppMethodInitialized_07545bfe = '\x01';
            }
            local_204 = 0;
            bVar15 = System_String__IsNullOrWhiteSpace(value_01,(MethodInfo *)0x0);
            iVar22 = 0;
            if (!bVar15) {
              bVar15 = System_String__op_Equality(value_01,"None",(MethodInfo *)0x0);
              iVar22 = 0;
              if (!bVar15) {
                bVar15 = System_String__Equals_52ffe30(value_01,"Wave",5,(MethodInfo *)0x0);
                iVar23 = 5;
                if (!bVar15) {
                  if ((g_data_07556760->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init(g_data_07556760);
                  }
                  pMVar25 = (MethodInfo *)0x1;
                  bVar15 = System_Enum__TryParse_Int32Enum__34dc6f0
                                     (value_01,true,&local_204,
                                      (MethodInfo_34DC6F0 *)MethodInfo_System_Enum_TryParse_NameEffectType);
                  if ((!bVar15) || (iVar23 = local_204, 6 < local_204 - 1U)) {
                    bVar15 = PatreonEffects_NameEffectPresets__IsLegacyEffect(value_01,pMVar25);
                    iVar23 = 1;
                    iVar22 = 0;
                    if (!bVar15) goto label_059be204;
                  }
                }
                iVar22 = iVar23;
              }
            }
          }
          else {
            bVar15 = System_String__op_Equality(pSVar19,"a",(MethodInfo *)0x0);
            if (bVar15) {
              if ((TypeInfo_PatreonEffects_EffectText->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_EffectText);
              }
              if (Il2CppMethodInitialized_07545bcc == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Color_ctor);
                il2cpp_codegen_initialize_runtime_metadata(&"#");
                Il2CppMethodInitialized_07545bcc = '\x01';
              }
              local_58.r = 0.0;
              local_58.g = 0.0;
              local_58.b = 0.0;
              local_58.a = 0.0;
              bVar15 = System_String__IsNullOrEmpty(value_01,(MethodInfo *)0x0);
              if (bVar15) {
label_059be1d0:
                local_248 = (Il2CppObject **)0x0;
                uStack_240._0_4_ = 0.0;
                uStack_240._4_4_ = 0.0;
                local_238 = 0.0;
              }
              else {
                if (value_01 == (System_String_o *)0x0) {
                  ThrowNullReferenceException();
                }
                bVar15 = System_String__StartsWith(value_01,"#",(MethodInfo *)0x0);
                if (!bVar15) {
                  value_01 = System_String__Concat_52f0320("#",value_01,(MethodInfo *)0x0);
                }
                bVar15 = UnityEngine_ColorUtility__TryParseHtmlString
                                   (value_01,(UnityEngine_Color_o *)&local_58,(MethodInfo *)0x0);
                if (!bVar15) goto label_059be1d0;
                value.fields.b = local_58.b;
                value.fields.a = local_58.a;
                value.fields.r = local_58.r;
                value.fields.g = local_58.g;
                local_248 = (Il2CppObject **)0x0;
                uStack_240._0_4_ = 0.0;
                uStack_240._4_4_ = 0.0;
                local_238 = 0.0;
                System_Nullable_Color____ctor
                          ((System_Nullable_Color__o *)&local_248,value,
                           (MethodInfo_3CD1300 *)MethodInfo_System_Nullable_Color_ctor);
              }
              local_d8 = local_248;
              uStack_d0._0_4_ = (float)uStack_240;
              uStack_d0._4_4_ = uStack_240._4_4_;
              local_c8 = local_238;
            }
            else {
              bVar15 = System_String__op_Equality(pSVar19,"b",(MethodInfo *)0x0);
              if (!bVar15) {
                bVar15 = System_String__op_Equality(pSVar19,"c",(MethodInfo *)0x0);
                if (bVar15) {
                  pMVar25 = extraout_RDX;
                  if ((TypeInfo_PatreonEffects_EffectText->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_EffectText);
                    pMVar25 = extraout_RDX_00;
                  }
                  PatreonEffects_EffectText__ParseColor
                            ((System_Nullable_Color__o *)&local_248,value_01,pMVar25);
                  local_108 = local_238;
                  local_118 = local_248;
                  uStack_110._0_4_ = (float)uStack_240;
                  uStack_110._4_4_ = uStack_240._4_4_;
                }
                else {
                  bVar15 = System_String__op_Equality(pSVar19,"d",(MethodInfo *)0x0);
                  if (bVar15) {
                    pMVar25 = extraout_RDX_01;
                    if ((TypeInfo_PatreonEffects_EffectText->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_EffectText);
                      pMVar25 = extraout_RDX_02;
                    }
                    PatreonEffects_EffectText__ParseColor
                              ((System_Nullable_Color__o *)&local_248,value_01,pMVar25);
                    local_128 = local_238;
                    local_138 = local_248;
                    uStack_130._0_4_ = (float)uStack_240;
                    uStack_130._4_4_ = uStack_240._4_4_;
                  }
                }
                goto label_059be204;
              }
              if ((TypeInfo_PatreonEffects_EffectText->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_EffectText);
              }
              if (Il2CppMethodInitialized_07545bcc == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Color_ctor);
                il2cpp_codegen_initialize_runtime_metadata(&"#");
                Il2CppMethodInitialized_07545bcc = '\x01';
              }
              local_48.r = 0.0;
              local_48.g = 0.0;
              local_48.b = 0.0;
              local_48.a = 0.0;
              bVar15 = System_String__IsNullOrEmpty(value_01,(MethodInfo *)0x0);
              if (bVar15) {
label_059be687:
                local_248 = (Il2CppObject **)0x0;
                uStack_240._0_4_ = 0.0;
                uStack_240._4_4_ = 0.0;
                local_238 = 0.0;
              }
              else {
                if (value_01 == (System_String_o *)0x0) {
                  ThrowNullReferenceException();
                }
                bVar15 = System_String__StartsWith(value_01,"#",(MethodInfo *)0x0);
                if (!bVar15) {
                  value_01 = System_String__Concat_52f0320("#",value_01,(MethodInfo *)0x0);
                }
                bVar15 = UnityEngine_ColorUtility__TryParseHtmlString
                                   (value_01,(UnityEngine_Color_o *)&local_48,(MethodInfo *)0x0);
                if (!bVar15) goto label_059be687;
                value_00.fields.b = local_48.b;
                value_00.fields.a = local_48.a;
                value_00.fields.r = local_48.r;
                value_00.fields.g = local_48.g;
                local_248 = (Il2CppObject **)0x0;
                uStack_240._0_4_ = 0.0;
                uStack_240._4_4_ = 0.0;
                local_238 = 0.0;
                System_Nullable_Color____ctor
                          ((System_Nullable_Color__o *)&local_248,value_00,
                           (MethodInfo_3CD1300 *)MethodInfo_System_Nullable_Color_ctor);
              }
              local_f8 = local_248;
              uStack_f0._0_4_ = (float)uStack_240;
              uStack_f0._4_4_ = uStack_240._4_4_;
              local_e8 = local_238;
            }
          }
label_059be204:
          if (local_220 == (Il2CppObject *)0x0) goto label_059beb27;
        } while( true );
      }
      pIVar18 = il2cpp_vm_Object_IsInst(local_210,(Il2CppClass *)TypeInfo_System_IDisposable);
      local_200 = pIVar18;
      if (pIVar18 == (Il2CppObject *)0x0) goto label_059bec36;
      pIVar8 = pIVar18->klass;
      uVar24 = (ulong)(pIVar8->_2).interface_offsets_count;
      if (uVar24 == 0) goto label_059bec0f;
      pIVar9 = (pIVar8->_1).interfaceOffsets;
      lVar26 = 0;
      goto label_059bec00;
    }
  }
  goto label_059beefb;
label_059be850:
  pIVar18 = il2cpp_vm_Object_IsInst(local_220,(Il2CppClass *)TypeInfo_System_IDisposable);
  local_200 = pIVar18;
  if (pIVar18 != (Il2CppObject *)0x0) {
    pIVar8 = pIVar18->klass;
    uVar24 = (ulong)(pIVar8->_2).interface_offsets_count;
    if (uVar24 != 0) {
      pIVar9 = (pIVar8->_1).interfaceOffsets;
      lVar26 = 0;
      do {
        if (*(System_IDisposable_c **)((long)&pIVar9->interfaceType + lVar26) == TypeInfo_System_IDisposable)
        {
          pVVar17 = (VirtualInvokeData *)&pIVar8->vtable[*(int *)((long)&pIVar9->offset + lVar26)].methodPtr;
          goto label_059be8dd;
        }
        lVar26 = lVar26 + 0x10;
      } while (uVar24 * 0x10 != lVar26);
    }
    pVVar17 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar18,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_059be8dd:
    (*pVVar17->methodPtr)(pIVar18,pVVar17->method);
  }
  fStack_1b0 = 0.0;
  uStack_1ac = 0;
  local_1a8 = 0;
  fStack_1a4 = 0.0;
  ppIStack_1c0 = (Il2CppObject **)0x0;
  local_1b8 = 0;
  uStack_1d0 = 0;
  fStack_1cc = 0.0;
  local_1c8 = 0.0;
  fStack_1c4 = 0.0;
  uStack_1e0 = 0;
  local_1d8 = 0.0;
  uStack_1d4 = 0;
  uStack_1f0 = 0;
  local_1e8 = (Il2CppObject **)0x0;
  fStack_1a0 = 0.0;
  fStack_19c = 0.0;
  local_1f8 = local_38;
  Il2CppCodeGenWriteBarrier(&local_1f8);
  uVar13 = uStack_1f0;
  pMVar25 = MethodInfo_System_Collections_Generic_List_EffectText_Segment_Add;
  bVar15 = iVar22 != 0;
  uStack_1f0 = CONCAT71(uStack_1f0._1_7_,bVar15);
  uStack_1f0 = CONCAT44(iVar22,(undefined4)uStack_1f0);
  lVar26 = uStack_1f0;
  local_1d8 = local_c8;
  local_1e8 = local_d8;
  uStack_1e0._0_4_ = (float)uStack_d0;
  uStack_1e0._4_4_ = uStack_d0._4_4_;
  fStack_1c4 = local_e8;
  uStack_1d4 = SUB84(local_f8,0);
  uStack_1d0 = (undefined4)((ulong)local_f8 >> 0x20);
  fStack_1cc = (float)uStack_f0;
  local_1c8 = SUB84(uStack_f0,4);
  fStack_1b0 = local_108;
  ppIStack_1c0 = local_118;
  local_1b8._0_4_ = (float)uStack_110;
  local_1b8._4_4_ = uStack_110._4_4_;
  fStack_19c = local_128;
  uStack_1ac = SUB84(local_138,0);
  local_1a8 = (undefined4)((ulong)local_138 >> 0x20);
  fStack_1a4 = (float)uStack_130;
  fStack_1a0 = SUB84(uStack_130,4);
  if (__this == (System_Collections_Generic_List_EffectText_Segment__o *)0x0) {
    local_228 = 0;
    ThrowNullReferenceException();
  }
  local_148 = CONCAT44(fStack_1a4,local_1a8);
  uStack_140 = CONCAT44(local_128,fStack_1a0);
  uStack_150 = CONCAT44(uStack_1ac,local_108);
  local_158 = (float)uStack_110;
  fStack_154 = uStack_110._4_4_;
  local_178 = CONCAT44(uStack_1d4,local_c8);
  uStack_170 = CONCAT44(fStack_1cc,uStack_1d0);
  local_168 = CONCAT44(local_e8,local_1c8);
  ppIStack_160 = local_118;
  local_188 = local_d8;
  fStack_180 = (float)uStack_d0;
  fStack_17c = uStack_d0._4_4_;
  local_198 = local_1f8;
  uStack_190 = (Il2CppObject **)uStack_1f0;
  piVar1 = &(__this->fields)._version;
  *piVar1 = *piVar1 + 1;
  pPVar10 = (__this->fields)._items;
  if (pPVar10 == (PatreonEffects_EffectText_Segment_array *)0x0) {
    ThrowNullReferenceException();
  }
  uVar6 = (__this->fields)._size;
  uStack_1f0 = lVar26;
  if (uVar6 < (uint)pPVar10->max_length) {
    (__this->fields)._size = uVar6 + 1;
    pUVar2 = &pPVar10->m_Items[(int)uVar6].fields.ColorD.fields.value;
    (pUVar2->fields).r = (float)local_1a8;
    (pUVar2->fields).g = fStack_1a4;
    (pUVar2->fields).b = fStack_1a0;
    (pUVar2->fields).a = local_128;
    pSVar11 = &pPVar10->m_Items[(int)uVar6].fields.ColorC;
    (pSVar11->fields).value.fields.g = (float)uStack_110;
    (pSVar11->fields).value.fields.b = uStack_110._4_4_;
    *(undefined8 *)(&(pSVar11->fields).value.fields.g + 2) = uStack_150;
    pSVar11 = &pPVar10->m_Items[(int)uVar6].fields.ColorB;
    (pSVar11->fields).value.fields.b = local_1c8;
    (pSVar11->fields).value.fields.a = local_e8;
    *(Il2CppObject ***)(&(pSVar11->fields).value.fields.b + 2) = local_118;
    pfVar3 = &pPVar10->m_Items[(int)uVar6].fields.ColorA.fields.value.fields.a;
    *pfVar3 = local_c8;
    pfVar3[1] = (float)uStack_1d4;
    pfVar3[2] = (float)uStack_1d0;
    pfVar3[3] = fStack_1cc;
    pSVar11 = &pPVar10->m_Items[(int)uVar6].fields.ColorA;
    *(Il2CppObject ***)&pSVar11->fields = local_d8;
    (pSVar11->fields).value.fields.g = (float)uStack_d0;
    (pSVar11->fields).value.fields.b = uStack_d0._4_4_;
    pPVar4 = &pPVar10->m_Items[(int)uVar6].fields;
    pPVar4->Content = local_1f8;
    uStack_1f0._1_3_ = SUB83(uVar13,1);
    pPVar4->HasEffect = bVar15;
    *(undefined3 *)&pPVar4->field_0x9 = uStack_1f0._1_3_;
    pPVar4->Effect = iVar22;
    Il2CppCodeGenWriteBarrier(&pPVar10->m_Items[(int)uVar6].fields.Content);
  }
  else {
    uStack_1f0._1_3_ = SUB83(uVar13,1);
    item.fields.HasEffect = bVar15;
    item.fields._9_3_ = uStack_1f0._1_3_;
    item.fields.Effect = iVar22;
    item.fields.Content = local_1f8;
    item.fields.ColorA.fields._0_8_ = local_d8;
    item.fields.ColorA.fields.value.fields.g = (float)uStack_d0;
    item.fields.ColorA.fields.value.fields.b = uStack_d0._4_4_;
    item.fields.ColorA.fields.value.fields.a = local_c8;
    item.fields.ColorB.fields._0_4_ = uStack_1d4;
    item.fields.ColorB.fields.value.fields.r = (float)uStack_1d0;
    item.fields.ColorB.fields.value.fields.g = fStack_1cc;
    item.fields.ColorB.fields.value.fields.b = local_1c8;
    item.fields.ColorB.fields.value.fields.a = local_e8;
    item.fields.ColorC.fields._0_8_ = local_118;
    item.fields.ColorC.fields.value.fields.g = (float)uStack_110;
    item.fields.ColorC.fields.value.fields.b = uStack_110._4_4_;
    item.fields.ColorC.fields.value.fields.a = local_108;
    item.fields.ColorD.fields.hasValue = (bool)(char)local_138;
    item.fields.ColorD.fields._1_3_ = (int3)((uint)uStack_1ac >> 8);
    item.fields.ColorD.fields.value.fields.r = (float)local_1a8;
    item.fields.ColorD.fields.value.fields.g = fStack_1a4;
    item.fields.ColorD.fields.value.fields.b = fStack_1a0;
    item.fields.ColorD.fields.value.fields.a = local_128;
    System_Collections_Generic_List_EffectText_Segment___AddWithResize
              (__this,item,(MethodInfo_3A88A50 *)pMVar25->klass->rgctx_data[0xe].method);
  }
  local_228 = (ulong)(uint)(*(int *)((long)&local_218[1].klass + 4) + *(int *)&local_218[1].klass);
  if (local_210 == (Il2CppObject *)0x0) goto label_059beea3;
  goto label_059bdcd8;
  while (lVar26 = lVar26 + 0x10, uVar24 * 0x10 != lVar26) {
label_059bec00:
    if (*(System_IDisposable_c **)((long)&pIVar9->interfaceType + lVar26) == TypeInfo_System_IDisposable) {
      pVVar17 = (VirtualInvokeData *)&pIVar8->vtable[*(int *)((long)&pIVar9->offset + lVar26)].methodPtr;
      goto label_059bec2d;
    }
  }
label_059bec0f:
  pVVar17 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar18,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_059bec2d:
  (*pVVar17->methodPtr)(pIVar18,pVVar17->method);
label_059bec36:
  if (line != (System_String_o *)0x0) {
    if ((line->fields)._stringLength <= (int)local_228) {
      return __this;
    }
    pSVar19 = System_String__Substring(line,(int)local_228,(MethodInfo *)0x0);
    if (pSVar19 != (System_String_o *)0x0) {
      if ((pSVar19->fields)._stringLength < 1) {
        return __this;
      }
      fStack_1b0 = 0.0;
      uStack_1ac = 0;
      local_1a8 = 0;
      fStack_1a4 = 0.0;
      ppIStack_1c0 = (Il2CppObject **)0x0;
      local_1b8._0_4_ = 0.0;
      local_1b8._4_4_ = 0.0;
      uStack_1d0 = 0;
      fStack_1cc = 0.0;
      local_1c8 = 0.0;
      fStack_1c4 = 0.0;
      uStack_1e0._0_4_ = 0.0;
      uStack_1e0._4_4_ = 0.0;
      local_1d8 = 0.0;
      uStack_1d4 = 0;
      uStack_1f0 = 0;
      local_1e8 = (Il2CppObject **)0x0;
      fStack_1a0 = 0.0;
      fStack_19c = 0.0;
      local_1f8 = pSVar19;
      Il2CppCodeGenWriteBarrier(&local_1f8);
      uVar12 = uStack_1f0;
      pMVar25 = MethodInfo_System_Collections_Generic_List_EffectText_Segment_Add;
      uVar24 = uStack_1f0 >> 8;
      uStack_1f0 = uVar24 << 8;
      lVar26 = uStack_1f0;
      uStack_1f0 = lVar26;
      if (__this != (System_Collections_Generic_List_EffectText_Segment__o *)0x0) {
        local_68 = CONCAT44(fStack_1a4,local_1a8);
        uStack_60 = CONCAT44(fStack_19c,fStack_1a0);
        uStack_70 = CONCAT44(uStack_1ac,fStack_1b0);
        local_78 = (float)local_1b8;
        fStack_74 = local_1b8._4_4_;
        uStack_1f0._5_2_ = SUB82(uVar12,5);
        uStack_1f0._7_1_ = SUB81(uVar12,7);
        local_98 = CONCAT44(uStack_1d4,local_1d8);
        uStack_90 = CONCAT44(fStack_1cc,uStack_1d0);
        local_88 = CONCAT44(fStack_1c4,local_1c8);
        ppIStack_80 = ppIStack_1c0;
        local_a8 = local_1e8;
        fStack_a0 = (float)uStack_1e0;
        fStack_9c = uStack_1e0._4_4_;
        local_b8 = local_1f8;
        uStack_b0 = (Il2CppObject **)((uVar24 & 0xffffffff) << 8);
        uStack_b0 = (Il2CppObject **)
                    CONCAT17(uStack_1f0._7_1_,CONCAT25(uStack_1f0._5_2_,(undefined5)uStack_b0));
        piVar1 = &(__this->fields)._version;
        *piVar1 = *piVar1 + 1;
        pPVar10 = (__this->fields)._items;
        if (pPVar10 != (PatreonEffects_EffectText_Segment_array *)0x0) {
          uVar6 = (__this->fields)._size;
          if (uVar6 < (uint)pPVar10->max_length) {
            (__this->fields)._size = uVar6 + 1;
            pUVar2 = &pPVar10->m_Items[(int)uVar6].fields.ColorD.fields.value;
            (pUVar2->fields).r = (float)local_1a8;
            (pUVar2->fields).g = fStack_1a4;
            (pUVar2->fields).b = fStack_1a0;
            (pUVar2->fields).a = fStack_19c;
            pSVar11 = &pPVar10->m_Items[(int)uVar6].fields.ColorC;
            (pSVar11->fields).value.fields.g = (float)local_1b8;
            (pSVar11->fields).value.fields.b = local_1b8._4_4_;
            *(undefined8 *)(&(pSVar11->fields).value.fields.g + 2) = uStack_70;
            pSVar11 = &pPVar10->m_Items[(int)uVar6].fields.ColorB;
            (pSVar11->fields).value.fields.b = local_1c8;
            (pSVar11->fields).value.fields.a = fStack_1c4;
            *(Il2CppObject ***)(&(pSVar11->fields).value.fields.b + 2) = ppIStack_1c0;
            pfVar3 = &pPVar10->m_Items[(int)uVar6].fields.ColorA.fields.value.fields.a;
            *(undefined8 *)pfVar3 = local_98;
            *(undefined8 *)(pfVar3 + 2) = uStack_90;
            pSVar11 = &pPVar10->m_Items[(int)uVar6].fields.ColorA;
            *(Il2CppObject ***)&pSVar11->fields = local_1e8;
            (pSVar11->fields).value.fields.g = (float)uStack_1e0;
            (pSVar11->fields).value.fields.b = uStack_1e0._4_4_;
            pPVar4 = &pPVar10->m_Items[(int)uVar6].fields;
            pPVar4->Content = local_1f8;
            *(Il2CppObject ***)&pPVar4->HasEffect = uStack_b0;
            Il2CppCodeGenWriteBarrier(&pPVar10->m_Items[(int)uVar6].fields.Content);
            return __this;
          }
          item_01.fields._8_8_ = uStack_b0;
          item_01.fields.Content = local_1f8;
          item_01.fields.ColorA.fields._0_8_ = local_1e8;
          item_01.fields.ColorA.fields.value.fields.g = (float)uStack_1e0;
          item_01.fields.ColorA.fields.value.fields.b = uStack_1e0._4_4_;
          item_01.fields.ColorA.fields.value.fields.a = local_1d8;
          item_01.fields.ColorB.fields._0_4_ = uStack_1d4;
          item_01.fields.ColorB.fields.value.fields.r = (float)uStack_1d0;
          item_01.fields.ColorB.fields.value.fields.g = fStack_1cc;
          item_01.fields.ColorB.fields.value.fields.b = local_1c8;
          item_01.fields.ColorB.fields.value.fields.a = fStack_1c4;
          item_01.fields.ColorC.fields._0_8_ = ppIStack_1c0;
          item_01.fields.ColorC.fields.value.fields.g = (float)local_1b8;
          item_01.fields.ColorC.fields.value.fields.b = local_1b8._4_4_;
          item_01.fields.ColorC.fields.value.fields.a = fStack_1b0;
          item_01.fields.ColorD.fields.hasValue = (bool)(char)uStack_1ac;
          item_01.fields.ColorD.fields._1_3_ = (int3)((uint)uStack_1ac >> 8);
          item_01.fields.ColorD.fields.value.fields.r = (float)local_1a8;
          item_01.fields.ColorD.fields.value.fields.g = fStack_1a4;
          item_01.fields.ColorD.fields.value.fields.b = fStack_1a0;
          item_01.fields.ColorD.fields.value.fields.a = fStack_19c;
          System_Collections_Generic_List_EffectText_Segment___AddWithResize
                    (__this,item_01,(MethodInfo_3A88A50 *)pMVar25->klass->rgctx_data[0xe].method);
          return __this;
        }
      }
    }
  }
label_059beefb:
  ThrowNullReferenceException();
}


// PatreonEffects.EffectText$$ParseColor
// il2cpp: System_Nullable_Color__o PatreonEffects_EffectText__ParseColor (System_String_o* hex, const MethodInfo* method);
// 0x59bf0e0

System_Nullable_Color__o *
PatreonEffects_EffectText__ParseColor
          (System_Nullable_Color__o *__return_storage_ptr__,System_String_o *hex,MethodInfo *method)

{
  UnityEngine_Color_o value;
  bool bVar1;
  UnityEngine_Color_Fields local_28;
  
  if (Il2CppMethodInitialized_07545bcc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Color_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&"#");
    Il2CppMethodInitialized_07545bcc = '\x01';
  }
  local_28.r = 0.0;
  local_28.g = 0.0;
  local_28.b = 0.0;
  local_28.a = 0.0;
  bVar1 = System_String__IsNullOrEmpty(hex,(MethodInfo *)0x0);
  if (!bVar1) {
    if (hex == (System_String_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar1 = System_String__StartsWith(hex,"#",(MethodInfo *)0x0);
    if (!bVar1) {
      hex = System_String__Concat_52f0320("#",hex,(MethodInfo *)0x0);
    }
    bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                      (hex,(UnityEngine_Color_o *)&local_28,(MethodInfo *)0x0);
    if (bVar1) {
      value.fields.b = local_28.b;
      value.fields.a = local_28.a;
      value.fields.r = local_28.r;
      value.fields.g = local_28.g;
      (__return_storage_ptr__->fields).hasValue = false;
      *(undefined3 *)&(__return_storage_ptr__->fields).field_0x1 = 0;
      (__return_storage_ptr__->fields).value.fields.r = 0.0;
      (__return_storage_ptr__->fields).value.fields.g = 0.0;
      (__return_storage_ptr__->fields).value.fields.b = 0.0;
      (__return_storage_ptr__->fields).value.fields.a = 0.0;
      System_Nullable_Color____ctor
                (__return_storage_ptr__,value,(MethodInfo_3CD1300 *)MethodInfo_System_Nullable_Color_ctor);
      return __return_storage_ptr__;
    }
  }
  (__return_storage_ptr__->fields).hasValue = false;
  *(undefined3 *)&(__return_storage_ptr__->fields).field_0x1 = 0;
  (__return_storage_ptr__->fields).value.fields.r = 0.0;
  (__return_storage_ptr__->fields).value.fields.g = 0.0;
  (__return_storage_ptr__->fields).value.fields.b = 0.0;
  (__return_storage_ptr__->fields).value.fields.a = 0.0;
  return __return_storage_ptr__;
}


// PatreonEffects.EffectText$$Rebuild
// il2cpp: void PatreonEffects_EffectText__Rebuild (PatreonEffects_EffectText_o* __this, const MethodInfo* method);
// 0x59bc4b0
// eh: try 0x59bc6dc..0x59bc725 -> pad 0x59bce24 (+4 call sites) catch Il2CppExceptionWrapper, cleanup
// eh: try 0x59bcc4f..0x59bcd8d -> pad 0x59bcd8f (+5 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x59bcdb2..0x59bcdb7 -> pad 0x59bce0a cleanup
// eh: try 0x59bce0d..0x59bce1a -> pad 0x59bce7c catch (...) [compiler noexcept guard]
// eh: try 0x59bce43..0x59bce48 -> pad 0x59bce6a cleanup
// eh: try 0x59bce6d..0x59bce7a -> pad 0x59bce7c catch (...) [compiler noexcept guard]
// asm: 51 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59bc71e: jmp 0x59bc6d0
// asm:   0x59bcd8f: jmp 0x59bcd97
// asm:   0x59bcd91: jmp 0x59bcd97
// asm:   0x59bcd93: jmp 0x59bcd97
// asm:   0x59bcd95: jmp 0x59bcd97
// asm:   0x59bcd97: mov rbp, rax
// asm:   0x59bcd9a: cmp edx, 1
// asm:   0x59bcd9d: jne 0x59bce0d
// asm:   0x59bcd9f: mov rdi, rbp
// asm:   0x59bcda2: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x59bcda7: mov rbx, qword ptr [rax]
// asm:   0x59bcdaa: mov qword ptr [rsp + 0xf0], rbx
// asm:   0x59bcdb2: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x59bcdb7: lea rax, [rip + 0x18d23b2]  ; MethodInfo_System_Collections_Generic_List_Enumerator_EffectText_Segment_Dispose
// asm:   0x59bcdbe: mov rsi, qword ptr [rax]
// asm:   0x59bcdc1: mov rdi, r13
// asm:   0x59bcdc4: call 0x4d7ca10  ; System_Collections_Generic_List_Enumerator_EffectText_Segment___Dispose()
// asm:   0x59bcdc9: test rbx, rbx
// asm:   0x59bcdcc: mov rbp, qword ptr [rsp + 0x68]
// asm:   0x59bcdd1: je 0x59bc827
// asm:   0x59bcdd7: mov rdi, rbx
// asm:   0x59bcdda: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x59bce0a: mov rbp, rax
// asm:   0x59bce0d: lea rdi, [rsp + 0xf0]
// asm:   0x59bce15: call 0x2fd5170  ; il2cpp_runtime_helper_02fd5170()
// asm:   0x59bce1a: mov rdi, rbp
// asm:   0x59bce1d: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x59bce22: jmp 0x59bce28
// asm:   0x59bce24: jmp 0x59bce28
// asm:   0x59bce26: jmp 0x59bce28
// asm:   0x59bce28: mov rbp, rax
// asm:   0x59bce2b: cmp edx, 1
// asm:   0x59bce2e: jne 0x59bce6d
// asm:   0x59bce30: mov rdi, rbp
// asm:   0x59bce33: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x59bce38: mov rbx, qword ptr [rax]
// asm:   0x59bce3b: mov qword ptr [rsp + 0xf0], rbx
// asm:   0x59bce43: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x59bce48: lea rax, [rip + 0x18d0f29]  ; MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose
// asm:   0x59bce4f: mov rsi, qword ptr [rax]
// asm:   0x59bce52: lea rdi, [rsp + 0x70]
// asm:   0x59bce57: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x59bce5c: test rbx, rbx
// asm:   0x59bce5f: je 0x59bc73b
// asm:   0x59bce65: jmp 0x59bcdd7
// asm:   0x59bce6a: mov rbp, rax
// asm:   0x59bce6d: lea rdi, [rsp + 0xf0]
// asm:   0x59bce75: call 0x2fd5140  ; il2cpp_runtime_helper_02fd5140()
// asm:   0x59bce7a: jmp 0x59bce1a
// asm:   0x59bce7c: mov rdi, rax
// asm:   0x59bce7f: call 0x2ab61e0  ; __clang_call_terminate()

void PatreonEffects_EffectText__Rebuild(PatreonEffects_EffectText_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  uint uVar2;
  System_Collections_Generic_List_GameObject__o *pSVar3;
  System_String_o *pSVar4;
  UnityEngine_GameObject_array *pUVar5;
  PatreonEffects_EffectText_Segment_o seg;
  Il2CppType *handle;
  MethodInfo *pMVar6;
  UnityEngine_Object_o *x;
  bool bVar7;
  TMPro_TMP_FontAsset_o *pTVar8;
  System_String_array *pSVar9;
  ulong uVar10;
  System_Collections_Generic_List_EffectText_Segment__o *__this_00;
  System_Type_array *components;
  System_Type_o *pSVar11;
  Il2CppObject *pIVar12;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_Transform_o *pUVar13;
  UnityEngine_Transform_o *parent;
  UnityEngine_UI_HorizontalLayoutGroup_o *__this_02;
  UnityEngine_UI_ContentSizeFitter_o *__this_03;
  UnityEngine_GameObject_o *item;
  MethodInfo *method_00;
  ulong uVar14;
  MethodInfo *pMVar15;
  undefined1 auStack_198 [8];
  System_Collections_Generic_List_Enumerator_object__o *pSStack_190;
  UnityEngine_Object_o *pUStack_188;
  System_String_array *pSStack_180;
  UnityEngine_Object_o *pUStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 auStack_118 [16];
  UnityEngine_Object_o *pUStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [8];
  System_Collections_Generic_List_Enumerator_object__o *pSStack_a0;
  UnityEngine_Object_o *pUStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if (Il2CppMethodInitialized_07545bcd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_ContentSizeFitter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_EffectText);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_EffectText_Segment_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_EffectText_Segment_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_EffectText_Segment_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_ContentSizeFitter);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_HorizontalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_HorizontalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_EffectText_Segment_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GameObject_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_EffectText_Segment_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    il2cpp_codegen_initialize_runtime_metadata(&"EffectTextRow");
    Il2CppMethodInitialized_07545bcd = '\x01';
  }
  auStack_198 = (undefined1  [8])0x0;
  pSStack_190 = (System_Collections_Generic_List_Enumerator_object__o *)0x0;
  pUStack_188 = (UnityEngine_Object_o *)0x0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  pUStack_98 = (UnityEngine_Object_o *)0x0;
  uStack_90 = 0;
  auStack_a8 = (undefined1  [8])0x0;
  pSStack_a0 = (System_Collections_Generic_List_Enumerator_object__o *)0x0;
  uStack_128 = 0;
  uStack_120 = 0;
  uStack_138 = 0;
  uStack_130 = 0;
  uStack_148 = 0;
  uStack_140 = 0;
  uStack_158 = 0;
  uStack_150 = 0;
  uStack_168 = 0;
  uStack_160 = 0;
  pUStack_178 = (UnityEngine_Object_o *)0x0;
  uStack_170 = 0;
  pSVar3 = (__this->fields)._segments;
  if (pSVar3 != (System_Collections_Generic_List_GameObject__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)auStack_118,
               (System_Collections_Generic_List_object__o *)pSVar3,
               (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_GameObject_GetEnumerator);
    pUStack_188 = pUStack_108;
    auStack_198 = (undefined1  [8])auStack_118._0_8_;
    pSStack_190 = (System_Collections_Generic_List_Enumerator_object__o *)auStack_118._8_8_;
    auStack_118._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    auStack_118._8_8_ = (System_Collections_Generic_List_Enumerator_object__o *)auStack_198;
    while (bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                             ((System_Collections_Generic_List_Enumerator_object__o *)auStack_198,
                              (MethodInfo_4C45C50 *)
                              MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_MoveNext),
          x = pUStack_188, bVar7) {
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar7 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar7) {
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        UnityEngine_Object__Destroy_69214e0(x,(MethodInfo *)0x0);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o *)auStack_198,
               (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose)
    ;
    pSVar3 = (__this->fields)._segments;
    if (pSVar3 != (System_Collections_Generic_List_GameObject__o *)0x0) {
      piVar1 = &(pSVar3->fields)._version;
      *piVar1 = *piVar1 + 1;
      length = (pSVar3->fields)._size;
      (pSVar3->fields)._size = 0;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,length,(MethodInfo *)0x0);
      }
      bVar7 = System_String__IsNullOrEmpty((__this->fields)._text,(MethodInfo *)0x0);
      if (bVar7) {
        return;
      }
      pSVar4 = (__this->fields)._text;
      pTVar8 = (__this->fields)._font;
      if (pTVar8 == (TMPro_TMP_FontAsset_o *)0x0) {
        pTVar8 = Gisketch_Aottg2UI_Styling_GisketchTypography__Resolve
                           ("text",400,(System_String_o *)0x0,(MethodInfo *)0x0);
      }
      pTVar8 = Gisketch_Aottg2UI_Styling_GisketchTypography__ForText(pSVar4,pTVar8,(MethodInfo *)0x0);
      (__this->fields)._segmentFont = pTVar8;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._segmentFont);
      pSVar4 = (__this->fields)._text;
      if (pSVar4 != (System_String_o *)0x0) {
        pMVar15 = (MethodInfo *)&g_data_0000000a;
        pSVar9 = System_String__Split(pSVar4,10,0,(MethodInfo *)0x0);
        if (pSVar9 != (System_String_array *)0x0) {
          if ((int)pSVar9->max_length < 1) {
            return;
          }
          uVar10 = pSVar9->max_length & 0xffffffff;
          uVar14 = 0;
          pSStack_180 = pSVar9;
          do {
            if (uVar10 <= uVar14) goto label_059bcdf6;
            pSVar4 = pSVar9->m_Items[uVar14];
            if ((TypeInfo_PatreonEffects_EffectText->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_EffectText);
            }
            __this_00 = PatreonEffects_EffectText__ParseLine(pSVar4,pMVar15);
            if (__this_00 == (System_Collections_Generic_List_EffectText_Segment__o *)0x0) break;
            if ((__this_00->fields)._size == 0) {
              pSVar3 = (__this->fields)._segments;
              pMVar15 = (MethodInfo *)PatreonEffects_EffectText__CreateSpacerRow(__this,pMVar15);
              pMVar6 = MethodInfo_System_Collections_Generic_List_GameObject_Add;
              if (pSVar3 == (System_Collections_Generic_List_GameObject__o *)0x0) break;
              piVar1 = &(pSVar3->fields)._version;
              *piVar1 = *piVar1 + 1;
              pUVar5 = (pSVar3->fields)._items;
              if (pUVar5 == (UnityEngine_GameObject_array *)0x0) break;
              uVar2 = (pSVar3->fields)._size;
              if (uVar2 < (uint)pUVar5->max_length) {
                (pSVar3->fields)._size = uVar2 + 1;
                pUVar5->m_Items[(int)uVar2] = (UnityEngine_GameObject_o *)pMVar15;
                Il2CppCodeGenWriteBarrier(pUVar5->m_Items + (int)uVar2);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pMVar15,
                           (MethodInfo_395D230 *)pMVar6->klass->rgctx_data[0xe].method);
              }
            }
            else {
              components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,3);
              handle = TypeRef_UnityEngine_RectTransform;
              if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init(g_data_075567a8);
              }
              pSVar11 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
              if (components == (System_Type_array *)0x0) break;
              if ((pSVar11 != (System_Type_o *)0x0) &&
                 (pIVar12 = il2cpp_vm_Object_IsInst
                                      ((Il2CppObject *)pSVar11,(((components->obj).klass)->_1).element_class),
                 pIVar12 == (Il2CppObject *)0x0)) {
label_059bcdfb:
                pIVar12 = il2cpp_codegen_get_array_type_mismatch_exception();
                il2cpp_codegen_raise_exception(pIVar12,(MethodInfo *)0x0);
              }
              if ((int)components->max_length == 0) {
label_059bcdf6:
                ThrowIndexOutOfRangeException();
              }
              components->m_Items[0] = pSVar11;
              Il2CppCodeGenWriteBarrier(components->m_Items);
              pSVar11 = System_Type__GetTypeFromHandle
                                  ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_HorizontalLayoutGroup,
                                   (MethodInfo *)0x0);
              if ((pSVar11 != (System_Type_o *)0x0) &&
                 (pIVar12 = il2cpp_vm_Object_IsInst
                                      ((Il2CppObject *)pSVar11,(((components->obj).klass)->_1).element_class),
                 pIVar12 == (Il2CppObject *)0x0)) goto label_059bcdfb;
              if ((components->max_length & 0xfffffffe) == 0) goto label_059bcdf6;
              components->m_Items[1] = pSVar11;
              Il2CppCodeGenWriteBarrier(components->m_Items + 1);
              pSVar11 = System_Type__GetTypeFromHandle
                                  ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_ContentSizeFitter,
                                   (MethodInfo *)0x0);
              if ((pSVar11 != (System_Type_o *)0x0) &&
                 (pIVar12 = il2cpp_vm_Object_IsInst
                                      ((Il2CppObject *)pSVar11,(((components->obj).klass)->_1).element_class),
                 pIVar12 == (Il2CppObject *)0x0)) goto label_059bcdfb;
              if ((uint)components->max_length < 3) goto label_059bcdf6;
              components->m_Items[2] = pSVar11;
              Il2CppCodeGenWriteBarrier(components->m_Items + 2);
              __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
              UnityEngine_GameObject___ctor_691aa60
                        (__this_01,"EffectTextRow",components,(MethodInfo *)0x0);
              if (__this_01 == (UnityEngine_GameObject_o *)0x0) break;
              pUVar13 = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
              parent = UnityEngine_Component__get_transform
                                 ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
              pSVar9 = pSStack_180;
              if (pUVar13 == (UnityEngine_Transform_o *)0x0) break;
              UnityEngine_Transform__SetParent_692d510(pUVar13,parent,false,(MethodInfo *)0x0);
              __this_02 = UnityEngine_GameObject__GetComponent_object_
                                    (__this_01,
                                     (MethodInfo_353B730 *)
                                     MethodInfo_UnityEngine_GameObject_GetComponent_HorizontalLayoutGroup);
              if (__this_02 == (UnityEngine_UI_HorizontalLayoutGroup_o *)0x0) break;
              UnityEngine_UI_LayoutGroup__set_childAlignment
                        ((UnityEngine_UI_LayoutGroup_o *)__this_02,3,(MethodInfo *)0x0);
              UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandWidth
                        ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_02,false,(MethodInfo *)0x0
                        );
              UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandHeight
                        ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_02,false,(MethodInfo *)0x0
                        );
              UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
                        ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_02,0.0,(MethodInfo *)0x0);
              __this_03 = UnityEngine_GameObject__GetComponent_object_
                                    (__this_01,
                                     (MethodInfo_353B730 *)
                                     MethodInfo_UnityEngine_GameObject_GetComponent_ContentSizeFitter);
              if (__this_03 == (UnityEngine_UI_ContentSizeFitter_o *)0x0) break;
              UnityEngine_UI_ContentSizeFitter__set_horizontalFit(__this_03,2,(MethodInfo *)0x0);
              UnityEngine_UI_ContentSizeFitter__set_verticalFit(__this_03,2,(MethodInfo *)0x0);
              pMVar15 = MethodInfo_System_Collections_Generic_List_GameObject_Add;
              pSVar3 = (__this->fields)._segments;
              if (pSVar3 == (System_Collections_Generic_List_GameObject__o *)0x0) break;
              piVar1 = &(pSVar3->fields)._version;
              *piVar1 = *piVar1 + 1;
              pUVar5 = (pSVar3->fields)._items;
              if (pUVar5 == (UnityEngine_GameObject_array *)0x0) break;
              uVar2 = (pSVar3->fields)._size;
              if (uVar2 < (uint)pUVar5->max_length) {
                (pSVar3->fields)._size = uVar2 + 1;
                pUVar5->m_Items[(int)uVar2] = __this_01;
                Il2CppCodeGenWriteBarrier(pUVar5->m_Items + (int)uVar2);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)__this_01,
                           (MethodInfo_395D230 *)pMVar15->klass->rgctx_data[0xe].method);
              }
              System_Collections_Generic_List_EffectText_Segment___GetEnumerator
                        ((System_Collections_Generic_List_Enumerator_T__o *)auStack_118,__this_00,
                         (MethodInfo_3A89EB0 *)
                         MethodInfo_System_Collections_Generic_List_EffectText_Segment_GetEnumerator);
              uStack_48 = uStack_b8;
              uStack_40 = uStack_b0;
              uStack_58 = uStack_c8;
              uStack_50 = uStack_c0;
              uStack_68 = uStack_d8;
              uStack_60 = uStack_d0;
              uStack_78 = uStack_e8;
              uStack_70 = uStack_e0;
              uStack_88 = uStack_f8;
              uStack_80 = uStack_f0;
              pUStack_98 = pUStack_108;
              uStack_90 = uStack_100;
              auStack_a8 = (undefined1  [8])auStack_118._0_8_;
              pSStack_a0 = (System_Collections_Generic_List_Enumerator_object__o *)auStack_118._8_8_;
              auStack_118._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
              auStack_118._8_8_ = (System_Collections_Generic_List_Enumerator_T__o *)auStack_a8;
              while (bVar7 = System_Collections_Generic_List_Enumerator_EffectText_Segment___MoveNext
                                       ((System_Collections_Generic_List_Enumerator_T__o *)auStack_a8,
                                        (MethodInfo_4C7CA20 *)
                                        MethodInfo_System_Collections_Generic_List_Enumerator_EffectText_Segment_MoveNext
                                       ), bVar7) {
                uStack_128 = uStack_48;
                uStack_120 = uStack_40;
                uStack_138 = uStack_58;
                uStack_130 = uStack_50;
                uStack_148 = uStack_68;
                uStack_140 = uStack_60;
                uStack_158 = uStack_78;
                uStack_150 = uStack_70;
                uStack_168 = uStack_88;
                uStack_160 = uStack_80;
                pUStack_178 = pUStack_98;
                uStack_170 = uStack_90;
                pUVar13 = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
                seg.fields.HasEffect = (bool)(undefined1)uStack_170;
                seg.fields._9_3_ = uStack_170._1_3_;
                seg.fields.Effect = uStack_170._4_4_;
                seg.fields.Content = (System_String_o *)pUStack_178;
                seg.fields.ColorA.fields.hasValue = (bool)(undefined1)uStack_168;
                seg.fields.ColorA.fields._1_3_ = uStack_168._1_3_;
                seg.fields.ColorA.fields.value.fields.r = (float)uStack_168._4_4_;
                seg.fields.ColorA.fields.value.fields.g = (float)(undefined4)uStack_160;
                seg.fields.ColorA.fields.value.fields.b = (float)uStack_160._4_4_;
                seg.fields.ColorA.fields.value.fields.a = (float)(undefined4)uStack_158;
                seg.fields.ColorB.fields.hasValue = (bool)uStack_158._4_1_;
                seg.fields.ColorB.fields._1_3_ = uStack_158._5_3_;
                seg.fields.ColorB.fields.value.fields.r = (float)(undefined4)uStack_150;
                seg.fields.ColorB.fields.value.fields.g = (float)uStack_150._4_4_;
                seg.fields.ColorB.fields.value.fields.b = (float)(undefined4)uStack_148;
                seg.fields.ColorB.fields.value.fields.a = (float)uStack_148._4_4_;
                seg.fields.ColorC.fields.hasValue = (bool)(undefined1)uStack_140;
                seg.fields.ColorC.fields._1_3_ = uStack_140._1_3_;
                seg.fields.ColorC.fields.value.fields.r = (float)uStack_140._4_4_;
                seg.fields.ColorC.fields.value.fields.g = (float)(undefined4)uStack_138;
                seg.fields.ColorC.fields.value.fields.b = (float)uStack_138._4_4_;
                seg.fields.ColorC.fields.value.fields.a = (float)(undefined4)uStack_130;
                seg.fields.ColorD.fields.hasValue = (bool)uStack_130._4_1_;
                seg.fields.ColorD.fields._1_3_ = uStack_130._5_3_;
                seg.fields.ColorD.fields.value.fields.r = (float)(undefined4)uStack_128;
                seg.fields.ColorD.fields.value.fields.g = (float)uStack_128._4_4_;
                seg.fields.ColorD.fields.value.fields.b = (float)(undefined4)uStack_120;
                seg.fields.ColorD.fields.value.fields.a = (float)uStack_120._4_4_;
                item = PatreonEffects_EffectText__CreateSegmentGO(__this,pUVar13,seg,method_00);
                pMVar15 = MethodInfo_System_Collections_Generic_List_GameObject_Add;
                pSVar3 = (__this->fields)._segments;
                if (pSVar3 == (System_Collections_Generic_List_GameObject__o *)0x0) {
label_059bcd88:
                  ThrowNullReferenceException();
                }
                piVar1 = &(pSVar3->fields)._version;
                *piVar1 = *piVar1 + 1;
                pUVar5 = (pSVar3->fields)._items;
                if (pUVar5 == (UnityEngine_GameObject_array *)0x0) goto label_059bcd88;
                uVar2 = (pSVar3->fields)._size;
                if (uVar2 < (uint)pUVar5->max_length) {
                  (pSVar3->fields)._size = uVar2 + 1;
                  pUVar5->m_Items[(int)uVar2] = item;
                  Il2CppCodeGenWriteBarrier(pUVar5->m_Items + (int)uVar2);
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize
                            ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)item,
                             (MethodInfo_395D230 *)pMVar15->klass->rgctx_data[0xe].method);
                }
              }
              pMVar15 = MethodInfo_System_Collections_Generic_List_Enumerator_EffectText_Segment_Dispose;
              System_Collections_Generic_List_Enumerator_EffectText_Segment___Dispose
                        ((System_Collections_Generic_List_Enumerator_T__o *)auStack_a8,
                         (MethodInfo_4C7CA10 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_EffectText_Segment_Dispose);
            }
            uVar14 = uVar14 + 1;
            uVar2 = (uint)pSVar9->max_length;
            uVar10 = (ulong)uVar2;
            if ((long)(int)uVar2 <= (long)uVar14) {
              return;
            }
          } while( true );
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// PatreonEffects.EffectText$$CreateSegmentGO
// il2cpp: UnityEngine_GameObject_o* PatreonEffects_EffectText__CreateSegmentGO (PatreonEffects_EffectText_o* __this, UnityEngine_Transform_o* parent, PatreonEffects_EffectText_Segment_o seg, const MethodInfo* method);
// 0x59bf3e0

UnityEngine_GameObject_o *
PatreonEffects_EffectText__CreateSegmentGO
          (PatreonEffects_EffectText_o *__this,UnityEngine_Transform_o *parent,
          PatreonEffects_EffectText_Segment_o seg,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  UnityEngine_Vector2_o UVar3;
  UnityEngine_Vector2_o UVar4;
  Il2CppType *handle;
  undefined4 uVar5;
  System_Type_array *components;
  System_Type_o *pSVar6;
  Il2CppObject *pIVar7;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  TMPro_TextMeshProUGUI_o *__this_02;
  System_String_o *pSVar8;
  UnityEngine_UI_LayoutElement_o *pUVar9;
  PatreonEffects_NameEffectController_o *__this_03;
  PatreonEffects_NameEffectSettings_o *settings;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *pMVar10;
  float fVar11;
  undefined8 uVar12;
  UnityEngine_Color_o UVar13;
  UnityEngine_Color_Fields UVar14;
  float local_58;
  float local_48;
  
  if (Il2CppMethodInitialized_07545bce == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_CanvasRenderer);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_NameEffectController);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_TextMeshProUGUI);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Color_get_HasValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Color_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_TMPro_TextMeshProUGUI);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&"Segment");
    il2cpp_codegen_initialize_runtime_metadata(&"|");
    Il2CppMethodInitialized_07545bce = '\x01';
  }
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,4);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  pSVar6 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) goto label_059bf8f1;
  if (pSVar6 != (System_Type_o *)0x0) {
    pIVar7 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar6,(((components->obj).klass)->_1).element_class);
    if (pIVar7 == (Il2CppObject *)0x0) goto label_059bf8fb;
  }
  if ((int)components->max_length != 0) {
    components->m_Items[0] = pSVar6;
    Il2CppCodeGenWriteBarrier(components->m_Items);
    pSVar6 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_CanvasRenderer,(MethodInfo *)0x0);
    if (pSVar6 != (System_Type_o *)0x0) {
      pIVar7 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar6,(((components->obj).klass)->_1).element_class);
      if (pIVar7 == (Il2CppObject *)0x0) goto label_059bf8fb;
    }
    if ((components->max_length & 0xfffffffe) == 0) goto label_059bf8f6;
    components->m_Items[1] = pSVar6;
    Il2CppCodeGenWriteBarrier(components->m_Items + 1);
    pSVar6 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_TMPro_TextMeshProUGUI,(MethodInfo *)0x0);
    if (pSVar6 != (System_Type_o *)0x0) {
      pIVar7 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar6,(((components->obj).klass)->_1).element_class);
      if (pIVar7 == (Il2CppObject *)0x0) goto label_059bf8fb;
    }
    if (2 < (uint)components->max_length) {
      components->m_Items[2] = pSVar6;
      Il2CppCodeGenWriteBarrier(components->m_Items + 2);
      pSVar6 = System_Type__GetTypeFromHandle
                         ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_LayoutElement,(MethodInfo *)0x0);
      if (pSVar6 != (System_Type_o *)0x0) {
        pIVar7 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar6,(((components->obj).klass)->_1).element_class)
        ;
        if (pIVar7 == (Il2CppObject *)0x0) {
label_059bf8fb:
          pIVar7 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar7,(MethodInfo *)0x0);
        }
      }
      if ((components->max_length & 0xfffffffc) != 0) {
        components->m_Items[3] = pSVar6;
        Il2CppCodeGenWriteBarrier(components->m_Items + 3);
        __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
        UnityEngine_GameObject___ctor_691aa60(__this_00,"Segment",components,(MethodInfo *)0x0);
        if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
          __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
          if (__this_01 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__SetParent_692d510(__this_01,parent,false,(MethodInfo *)0x0);
            __this_02 = UnityEngine_GameObject__GetComponent_object_
                                  (__this_00,
                                   (MethodInfo_353B730 *)
                                   MethodInfo_UnityEngine_GameObject_GetComponent_TextMeshProUGUI);
            pSVar8 = seg.fields.Content;
            if (__this_02 != (TMPro_TextMeshProUGUI_o *)0x0) {
              (*(__this_02->klass->vtable)._66_set_text.methodPtr)
                        (__this_02,seg.fields.Content,(__this_02->klass->vtable)._66_set_text.method);
              TMPro_TMP_Text__set_font
                        ((TMPro_TMP_Text_o *)__this_02,(__this->fields)._segmentFont,(MethodInfo *)0x0);
              TMPro_TMP_Text__set_fontSize
                        ((TMPro_TMP_Text_o *)__this_02,(__this->fields)._fontSize,(MethodInfo *)0x0);
              uVar5 = seg.fields._8_4_;
              if ((seg.fields.HasEffect & 1) == 0) {
                uVar1 = (__this->fields)._color.fields.r;
                uVar2 = (__this->fields)._color.fields.g;
                uVar12._0_4_ = (__this->fields)._color.fields.b;
                uVar12._4_4_ = (__this->fields)._color.fields.a;
              }
              else {
                uVar1 = (undefined4)g_data_01005870;
                uVar2 = g_data_01005870._4_4_;
                uVar12 = g_data_01005870;
              }
              UVar13.fields.g = (float)uVar2;
              UVar13.fields.r = (float)uVar1;
              UVar13.fields.b = (float)(int)uVar12;
              UVar13.fields.a = (float)(int)((ulong)uVar12 >> 0x20);
              (*(__this_02->klass->vtable)._23_set_color.methodPtr)
                        (__this_02,UVar13,(__this_02->klass->vtable)._23_set_color.method);
              TMPro_TMP_Text__set_alignment
                        ((TMPro_TMP_Text_o *)__this_02,(__this->fields)._alignment,(MethodInfo *)0x0);
              TMPro_TMP_Text__set_richText
                        ((TMPro_TMP_Text_o *)__this_02,(__this->fields)._richText,(MethodInfo *)0x0);
              TMPro_TMP_Text__set_enableWordWrapping((TMPro_TMP_Text_o *)__this_02,false,(MethodInfo *)0x0);
              TMPro_TMP_Text__set_overflowMode((TMPro_TMP_Text_o *)__this_02,0,(MethodInfo *)0x0);
              pSVar8 = System_String__Concat_52f0320(pSVar8,"|",(MethodInfo *)0x0);
              UVar3 = TMPro_TMP_Text__GetPreferredValues_670f1c0
                                ((TMPro_TMP_Text_o *)__this_02,pSVar8,3.4028235e+38,3.4028235e+38,
                                 (MethodInfo *)0x0);
              UVar4 = TMPro_TMP_Text__GetPreferredValues_670f1c0
                                ((TMPro_TMP_Text_o *)__this_02,"|",3.4028235e+38,
                                 3.4028235e+38,(MethodInfo *)0x0);
              fVar11 = (*(__this_02->klass->vtable)._85_get_preferredHeight.methodPtr)
                                 (__this_02,(__this_02->klass->vtable)._85_get_preferredHeight.method);
              pUVar9 = UnityEngine_GameObject__GetComponent_object_
                                 (__this_00,
                                  (MethodInfo_353B730 *)
                                  MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
              if (pUVar9 != (UnityEngine_UI_LayoutElement_o *)0x0) {
                local_48 = UVar3.fields.x;
                local_58 = UVar4.fields.x;
                local_48 = local_48 - local_58;
                if (local_48 <= 0.0) {
                  local_48 = 0.0;
                }
                (*(pUVar9->klass->vtable)._36_set_preferredWidth.methodPtr)
                          (pUVar9,local_48,(pUVar9->klass->vtable)._36_set_preferredWidth.method);
                (*(pUVar9->klass->vtable)._38_set_preferredHeight.methodPtr)
                          (pUVar9,fVar11,(pUVar9->klass->vtable)._38_set_preferredHeight.method);
                if ((SUB41(uVar5,0) & 1) != 0) {
                  pMVar10 = MethodInfo_UnityEngine_GameObject_AddComponent_NameEffectController;
                  __this_03 = UnityEngine_GameObject__AddComponent_object_
                                        (__this_00,
                                         (MethodInfo_353B6A0 *)
                                         MethodInfo_UnityEngine_GameObject_AddComponent_NameEffectController);
                  if (__this_03 == (PatreonEffects_NameEffectController_o *)0x0) goto label_059bf8f1;
                  PatreonEffects_NameEffectController__AutoConfigure(__this_03,pMVar10);
                  settings = PatreonEffects_NameEffectPresets__GetPreset(seg.fields.Effect,pMVar10);
                  pMVar10 = extraout_RDX;
                  if (seg.fields.ColorA.fields.hasValue != false) {
                    UVar14 = (UnityEngine_Color_Fields)
                             System_Nullable_Color___get_Value
                                       (&seg.fields.ColorA,
                                        (MethodInfo_3CD1320 *)MethodInfo_System_Nullable_Color_get_Value);
                    if (settings == (PatreonEffects_NameEffectSettings_o *)0x0) goto label_059bf8f1;
                    (settings->fields).gradientA.fields = UVar14;
                    pMVar10 = extraout_RDX_00;
                  }
                  if (seg.fields.ColorB.fields.hasValue != false) {
                    UVar14 = (UnityEngine_Color_Fields)
                             System_Nullable_Color___get_Value
                                       (&seg.fields.ColorB,
                                        (MethodInfo_3CD1320 *)MethodInfo_System_Nullable_Color_get_Value);
                    if (settings == (PatreonEffects_NameEffectSettings_o *)0x0) goto label_059bf8f1;
                    (settings->fields).gradientB.fields = UVar14;
                    pMVar10 = extraout_RDX_01;
                  }
                  if (seg.fields.ColorC.fields.hasValue != false) {
                    UVar14 = (UnityEngine_Color_Fields)
                             System_Nullable_Color___get_Value
                                       (&seg.fields.ColorC,
                                        (MethodInfo_3CD1320 *)MethodInfo_System_Nullable_Color_get_Value);
                    if (settings == (PatreonEffects_NameEffectSettings_o *)0x0) goto label_059bf8f1;
                    (settings->fields).gradientC.fields = UVar14;
                    pMVar10 = extraout_RDX_02;
                  }
                  if (seg.fields.ColorD.fields.hasValue != false) {
                    UVar14 = (UnityEngine_Color_Fields)
                             System_Nullable_Color___get_Value
                                       (&seg.fields.ColorD,
                                        (MethodInfo_3CD1320 *)MethodInfo_System_Nullable_Color_get_Value);
                    if (settings == (PatreonEffects_NameEffectSettings_o *)0x0) goto label_059bf8f1;
                    (settings->fields).gradientD.fields = UVar14;
                    pMVar10 = extraout_RDX_03;
                  }
                  PatreonEffects_NameEffectController__Apply(__this_03,settings,pMVar10);
                }
                return __this_00;
              }
            }
          }
        }
label_059bf8f1:
        ThrowNullReferenceException();
      }
    }
  }
label_059bf8f6:
  ThrowIndexOutOfRangeException();
}


// PatreonEffects.EffectText$$CreateSpacerRow
// il2cpp: UnityEngine_GameObject_o* PatreonEffects_EffectText__CreateSpacerRow (PatreonEffects_EffectText_o* __this, const MethodInfo* method);
// 0x59bf1c0

UnityEngine_GameObject_o *
PatreonEffects_EffectText__CreateSpacerRow(PatreonEffects_EffectText_o *__this,MethodInfo *method)

{
  Il2CppType *handle;
  System_Type_array *components;
  System_Type_o *pSVar1;
  Il2CppObject *pIVar2;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Transform_o *parent;
  UnityEngine_UI_LayoutElement_o *pUVar3;
  
  if (Il2CppMethodInitialized_07545bcf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&"EffectTextSpacer");
    Il2CppMethodInitialized_07545bcf = '\x01';
  }
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,2);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  pSVar1 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) {
label_059bf3c1:
    ThrowNullReferenceException();
  }
  if (pSVar1 != (System_Type_o *)0x0) {
    pIVar2 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar1,(((components->obj).klass)->_1).element_class);
    if (pIVar2 == (Il2CppObject *)0x0) goto label_059bf3cb;
  }
  if ((int)components->max_length != 0) {
    components->m_Items[0] = pSVar1;
    Il2CppCodeGenWriteBarrier(components->m_Items);
    pSVar1 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_LayoutElement,(MethodInfo *)0x0);
    if (pSVar1 != (System_Type_o *)0x0) {
      pIVar2 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar1,(((components->obj).klass)->_1).element_class);
      if (pIVar2 == (Il2CppObject *)0x0) {
label_059bf3cb:
        pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
      }
    }
    if ((components->max_length & 0xfffffffe) != 0) {
      components->m_Items[1] = pSVar1;
      Il2CppCodeGenWriteBarrier(components->m_Items + 1);
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
      UnityEngine_GameObject___ctor_691aa60(__this_00,"EffectTextSpacer",components,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
        __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
        parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (__this_01 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__SetParent_692d510(__this_01,parent,false,(MethodInfo *)0x0);
          pUVar3 = UnityEngine_GameObject__GetComponent_object_
                             (__this_00,
                              (MethodInfo_353B730 *)
                              MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
          if (pUVar3 != (UnityEngine_UI_LayoutElement_o *)0x0) {
            (*(pUVar3->klass->vtable)._38_set_preferredHeight.methodPtr)
                      (pUVar3,(__this->fields)._fontSize,
                       (pUVar3->klass->vtable)._38_set_preferredHeight.method);
            (*(pUVar3->klass->vtable)._36_set_preferredWidth.methodPtr)
                      (pUVar3,1.0,(pUVar3->klass->vtable)._36_set_preferredWidth.method);
            return __this_00;
          }
        }
      }
      goto label_059bf3c1;
    }
  }
  ThrowIndexOutOfRangeException();
}


// PatreonEffects.EffectText$$ApplyFontSize
// il2cpp: void PatreonEffects_EffectText__ApplyFontSize (PatreonEffects_EffectText_o* __this, const MethodInfo* method);
// 0x59bceb0

void PatreonEffects_EffectText__ApplyFontSize(PatreonEffects_EffectText_o *__this,MethodInfo *method)

{
  PatreonEffects_EffectText__Rebuild(__this,method);
  return;
}


// PatreonEffects.EffectText$$ApplyColor
// il2cpp: void PatreonEffects_EffectText__ApplyColor (PatreonEffects_EffectText_o* __this, const MethodInfo* method);
// 0x59bcee0
// eh: try 0x59bcfba..0x59bd0e5 -> pad 0x59bd0f4 (+10 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x59bd116..0x59bd11b -> pad 0x59bd13a cleanup
// eh: try 0x59bd13d..0x59bd147 -> pad 0x59bd14f catch (...) [compiler noexcept guard]
// asm: 33 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59bd0ea: jmp 0x59bd0fe
// asm:   0x59bd0ec: jmp 0x59bd0fe
// asm:   0x59bd0ee: jmp 0x59bd0fe
// asm:   0x59bd0f0: jmp 0x59bd0fe
// asm:   0x59bd0f2: jmp 0x59bd0fe
// asm:   0x59bd0f4: jmp 0x59bd0fe
// asm:   0x59bd0f6: jmp 0x59bd0fe
// asm:   0x59bd0f8: jmp 0x59bd0fe
// asm:   0x59bd0fa: jmp 0x59bd0fe
// asm:   0x59bd0fc: jmp 0x59bd0fe
// asm:   0x59bd0fe: mov rbx, rax
// asm:   0x59bd101: cmp edx, 1
// asm:   0x59bd104: jne 0x59bd13d
// asm:   0x59bd106: mov rdi, rbx
// asm:   0x59bd109: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x59bd10e: mov rbx, qword ptr [rax]
// asm:   0x59bd111: mov qword ptr [rsp + 0x20], rbx
// asm:   0x59bd116: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x59bd11b: lea rax, [rip + 0x18d0c56]  ; MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose
// asm:   0x59bd122: mov rsi, qword ptr [rax]
// asm:   0x59bd125: mov rdi, rsp
// asm:   0x59bd128: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x59bd12d: test rbx, rbx
// asm:   0x59bd130: je 0x59bd0c2
// asm:   0x59bd132: mov rdi, rbx
// asm:   0x59bd135: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x59bd13a: mov rbx, rax
// asm:   0x59bd13d: lea rdi, [rsp + 0x20]
// asm:   0x59bd142: call 0x2fd51a0  ; il2cpp_runtime_helper_02fd51a0()
// asm:   0x59bd147: mov rdi, rbx
// asm:   0x59bd14a: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x59bd14f: mov rdi, rax
// asm:   0x59bd152: call 0x2ab61e0  ; __clang_call_terminate()

void PatreonEffects_EffectText__ApplyColor(PatreonEffects_EffectText_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined8 uVar2;
  System_Collections_Generic_List_GameObject__o *__this_00;
  UnityEngine_Component_o *__this_01;
  Il2CppObject *x;
  bool bVar3;
  uint uVar4;
  System_Object_array *pSVar5;
  PatreonEffects_NameEffectController_o *x_00;
  uint uVar6;
  System_Collections_Generic_List_Enumerator_object__o SStack_68;
  undefined1 auStack_48 [16];
  UnityEngine_Object_o *pUStack_38;
  
  if (Il2CppMethodInitialized_07545bd0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_NameEffectController);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_TextMeshProUGUI);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GameObject_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545bd0 = '\x01';
  }
  __this_00 = (__this->fields)._segments;
  if (__this_00 == (System_Collections_Generic_List_GameObject__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)auStack_48,
             (System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_GameObject_GetEnumerator);
  SStack_68.fields._current = (Il2CppObject *)pUStack_38;
  SStack_68.fields._list = (System_Collections_Generic_List_T__o *)auStack_48._0_8_;
  SStack_68.fields._index = auStack_48._8_4_;
  SStack_68.fields._version = auStack_48._12_4_;
  auStack_48._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  auStack_48._8_8_ = &SStack_68;
  do {
    do {
      do {
        bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (&SStack_68,
                           (MethodInfo_4C45C50 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_MoveNext);
        x = SStack_68.fields._current;
        if (!bVar3) {
          System_Collections_Generic_List_Enumerator_object___Dispose
                    (&SStack_68,
                     (MethodInfo_4C45C40 *)
                     MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose);
          return;
        }
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar3 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      } while (bVar3);
      if ((UnityEngine_Object_o *)x == (UnityEngine_Object_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar5 = UnityEngine_GameObject__GetComponentsInChildren_object__353c030
                         ((UnityEngine_GameObject_o *)x,
                          (MethodInfo_353C030 *)
                          MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_TextMeshProUGUI);
      if (pSVar5 == (System_Object_array *)0x0) {
        ThrowNullReferenceException();
      }
      uVar4 = (uint)pSVar5->max_length;
    } while ((int)uVar4 < 1);
    uVar6 = 0;
    do {
      if (uVar4 <= uVar6) {
        ThrowIndexOutOfRangeException();
      }
      __this_01 = (UnityEngine_Component_o *)pSVar5->m_Items[(int)uVar6];
      if (__this_01 == (UnityEngine_Component_o *)0x0) {
        ThrowNullReferenceException();
      }
      x_00 = UnityEngine_Component__GetComponent_object_
                       (__this_01,
                        (MethodInfo_34B0830 *)
                        MethodInfo_UnityEngine_Component_GetComponent_NameEffectController);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar3) {
        uVar1 = (__this->fields)._color.fields.r;
        uVar2._0_4_ = (__this->fields)._color.fields.b;
        uVar2._4_4_ = (__this->fields)._color.fields.a;
        (**(code **)&((Il2CppClass *)__this_01->klass)->vtable[23].methodPtr)
                  (uVar1,uVar2,__this_01,((Il2CppClass *)__this_01->klass)->vtable[23].method);
      }
      uVar6 = uVar6 + 1;
      uVar4 = (uint)pSVar5->max_length;
    } while ((int)uVar6 < (int)uVar4);
  } while( true );
}


// PatreonEffects.EffectText$$ApplyAlignment
// il2cpp: void PatreonEffects_EffectText__ApplyAlignment (PatreonEffects_EffectText_o* __this, const MethodInfo* method);
// 0x59bd1b0
// eh: try 0x59bd274..0x59bd331 -> pad 0x59bd340 (+8 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x59bd35e..0x59bd363 -> pad 0x59bd384 cleanup
// eh: try 0x59bd387..0x59bd391 -> pad 0x59bd399 catch (...) [compiler noexcept guard]
// asm: 34 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59bd26f: nop 
// asm:   0x59bd2cf: nop 
// asm:   0x59bd2f5: jmp 0x59bd270
// asm:   0x59bd336: jmp 0x59bd346
// asm:   0x59bd338: jmp 0x59bd346
// asm:   0x59bd33a: jmp 0x59bd346
// asm:   0x59bd33c: jmp 0x59bd346
// asm:   0x59bd33e: jmp 0x59bd346
// asm:   0x59bd340: jmp 0x59bd346
// asm:   0x59bd342: jmp 0x59bd346
// asm:   0x59bd344: jmp 0x59bd346
// asm:   0x59bd346: mov rbx, rax
// asm:   0x59bd349: cmp edx, 1
// asm:   0x59bd34c: jne 0x59bd387
// asm:   0x59bd34e: mov rdi, rbx
// asm:   0x59bd351: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x59bd356: mov rbx, qword ptr [rax]
// asm:   0x59bd359: mov qword ptr [rsp + 8], rbx
// asm:   0x59bd35e: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x59bd363: lea rax, [rip + 0x18d0a0e]  ; MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose
// asm:   0x59bd36a: mov rsi, qword ptr [rax]
// asm:   0x59bd36d: lea rdi, [rsp + 0x20]
// asm:   0x59bd372: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x59bd377: test rbx, rbx
// asm:   0x59bd37a: je 0x59bd30e
// asm:   0x59bd37c: mov rdi, rbx
// asm:   0x59bd37f: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x59bd384: mov rbx, rax
// asm:   0x59bd387: lea rdi, [rsp + 8]
// asm:   0x59bd38c: call 0x2fd51d0  ; il2cpp_runtime_helper_02fd51d0()
// asm:   0x59bd391: mov rdi, rbx
// asm:   0x59bd394: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x59bd399: mov rdi, rax
// asm:   0x59bd39c: call 0x2ab61e0  ; __clang_call_terminate()

void PatreonEffects_EffectText__ApplyAlignment(PatreonEffects_EffectText_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GameObject__o *__this_00;
  Il2CppObject *x;
  bool bVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  uint uVar4;
  undefined1 auStack_60 [16];
  UnityEngine_Object_o *pUStack_50;
  System_Collections_Generic_List_Enumerator_object__o SStack_48;
  
  if (Il2CppMethodInitialized_07545bd1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_TextMeshProUGUI);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GameObject_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545bd1 = '\x01';
  }
  __this_00 = (__this->fields)._segments;
  if (__this_00 == (System_Collections_Generic_List_GameObject__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)auStack_60,
             (System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_GameObject_GetEnumerator);
  SStack_48.fields._current = (Il2CppObject *)pUStack_50;
  SStack_48.fields._list = (System_Collections_Generic_List_T__o *)auStack_60._0_8_;
  SStack_48.fields._index = auStack_60._8_4_;
  SStack_48.fields._version = auStack_60._12_4_;
  auStack_60._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  auStack_60._8_8_ = &SStack_48;
  do {
    do {
      do {
        bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (&SStack_48,
                           (MethodInfo_4C45C50 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_MoveNext);
        x = SStack_48.fields._current;
        if (!bVar1) {
          System_Collections_Generic_List_Enumerator_object___Dispose
                    (&SStack_48,
                     (MethodInfo_4C45C40 *)
                     MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose);
          return;
        }
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar1 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      } while (bVar1);
      if ((UnityEngine_Object_o *)x == (UnityEngine_Object_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar3 = UnityEngine_GameObject__GetComponentsInChildren_object__353c030
                         ((UnityEngine_GameObject_o *)x,
                          (MethodInfo_353C030 *)
                          MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_TextMeshProUGUI);
      if (pSVar3 == (System_Object_array *)0x0) {
        ThrowNullReferenceException();
      }
      uVar2 = (uint)pSVar3->max_length;
    } while ((int)uVar2 < 1);
    uVar4 = 0;
    do {
      if (uVar2 <= uVar4) {
        ThrowIndexOutOfRangeException();
      }
      if ((TMPro_TMP_Text_o *)pSVar3->m_Items[(int)uVar4] == (TMPro_TMP_Text_o *)0x0) {
        ThrowNullReferenceException();
      }
      TMPro_TMP_Text__set_alignment
                ((TMPro_TMP_Text_o *)pSVar3->m_Items[(int)uVar4],(__this->fields)._alignment,(MethodInfo *)0x0
                );
      uVar4 = uVar4 + 1;
      uVar2 = (uint)pSVar3->max_length;
    } while ((int)uVar4 < (int)uVar2);
  } while( true );
}


// PatreonEffects.EffectText$$OnDestroy
// il2cpp: void PatreonEffects_EffectText__OnDestroy (PatreonEffects_EffectText_o* __this, const MethodInfo* method);
// 0x59c0030
// eh: try 0x59c00fd..0x59c0145 -> pad 0x59c0195 (+4 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x59c01b1..0x59c01b6 -> pad 0x59c01d5 cleanup
// eh: try 0x59c01d8..0x59c01e2 -> pad 0x59c01ea catch (...) [compiler noexcept guard]
// asm: 27 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59c013e: jmp 0x59c00f0
// asm:   0x59c0193: jmp 0x59c0199
// asm:   0x59c0195: jmp 0x59c0199
// asm:   0x59c0197: jmp 0x59c0199
// asm:   0x59c0199: mov rbx, rax
// asm:   0x59c019c: cmp edx, 1
// asm:   0x59c019f: jne 0x59c01d8
// asm:   0x59c01a1: mov rdi, rbx
// asm:   0x59c01a4: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x59c01a9: mov rbx, qword ptr [rax]
// asm:   0x59c01ac: mov qword ptr [rsp + 0x20], rbx
// asm:   0x59c01b1: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x59c01b6: lea rax, [rip + 0x18cdbbb]  ; MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose
// asm:   0x59c01bd: mov rsi, qword ptr [rax]
// asm:   0x59c01c0: mov rdi, rsp
// asm:   0x59c01c3: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x59c01c8: test rbx, rbx
// asm:   0x59c01cb: je 0x59c0159
// asm:   0x59c01cd: mov rdi, rbx
// asm:   0x59c01d0: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x59c01d5: mov rbx, rax
// asm:   0x59c01d8: lea rdi, [rsp + 0x20]
// asm:   0x59c01dd: call 0x2fd5200  ; il2cpp_runtime_helper_02fd5200()
// asm:   0x59c01e2: mov rdi, rbx
// asm:   0x59c01e5: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x59c01ea: mov rdi, rax
// asm:   0x59c01ed: call 0x2ab61e0  ; __clang_call_terminate()

void PatreonEffects_EffectText__OnDestroy(PatreonEffects_EffectText_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  System_Collections_Generic_List_GameObject__o *pSVar2;
  Il2CppObject *x;
  bool bVar3;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  undefined8 local_38;
  undefined1 *local_30;
  
  if (Il2CppMethodInitialized_07545bd2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GameObject_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545bd2 = '\x01';
  }
  local_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._current = (Il2CppObject *)0x0;
  pSVar2 = (__this->fields)._segments;
  if (pSVar2 != (System_Collections_Generic_List_GameObject__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              (&local_58,(System_Collections_Generic_List_object__o *)pSVar2,
               (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_GameObject_GetEnumerator);
    local_38 = 0;
    local_30 = (undefined1 *)&local_58;
    while( true ) {
      bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o *)&local_58,
                         (MethodInfo_4C45C50 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_MoveNext);
      x = local_58.fields._current;
      if (!bVar3) break;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar3) {
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        UnityEngine_Object__Destroy_69214e0((UnityEngine_Object_o *)x,(MethodInfo *)0x0);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o *)&local_58,
               (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose)
    ;
    pSVar2 = (__this->fields)._segments;
    if (pSVar2 != (System_Collections_Generic_List_GameObject__o *)0x0) {
      piVar1 = &(pSVar2->fields)._version;
      *piVar1 = *piVar1 + 1;
      length = (pSVar2->fields)._size;
      (pSVar2->fields)._size = 0;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
      }
      return;
    }
  }
  ThrowNullReferenceException();
}


// PatreonEffects.EffectText$$.ctor
// il2cpp: void PatreonEffects_EffectText___ctor (PatreonEffects_EffectText_o* __this, const MethodInfo* method);
// 0x59c0200

void PatreonEffects_EffectText___ctor(PatreonEffects_EffectText_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GameObject__o *__this_00;
  
  if (Il2CppMethodInitialized_07545bd3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_GameObject);
    Il2CppMethodInitialized_07545bd3 = '\x01';
  }
  (__this->fields)._text = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  Il2CppCodeGenWriteBarrier(&(__this->fields)._text);
  (__this->fields)._fontSize = 18.0;
  (__this->fields)._color.fields.r = 1.0;
  (__this->fields)._color.fields.g = 1.0;
  (__this->fields)._color.fields.b = 1.0;
  (__this->fields)._color.fields.a = 1.0;
  (__this->fields)._alignment = 0x1001;
  (__this->fields)._richText = true;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GameObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_GameObject_ctor);
  (__this->fields)._segments = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._segments);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// PatreonEffects.EffectText$$.cctor
// il2cpp: void PatreonEffects_EffectText___cctor (const MethodInfo* method);
// 0x59c02c0

void PatreonEffects_EffectText___cctor(MethodInfo *method)

{
  PatreonEffects_EffectText_StaticFields *pPVar1;
  System_Text_RegularExpressions_Regex_o *pSVar2;
  
  if (Il2CppMethodInitialized_07545bd4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_EffectText);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_RegularExpressions_Regex);
    il2cpp_codegen_initialize_runtime_metadata(&"<fx(?<attrs>[^>]*)>(?<content>.*?)</fx>");
    il2cpp_codegen_initialize_runtime_metadata(&"(?<key>\\w+)=\"(?<val>[^\"]*)\"");
    Il2CppMethodInitialized_07545bd4 = '\x01';
  }
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_RegularExpressions_Regex);
  System_Text_RegularExpressions_Regex___ctor_61e4b50(pSVar2,"<fx(?<attrs>[^>]*)>(?<content>.*?)</fx>",0x18,(MethodInfo *)0x0);
  TypeInfo_PatreonEffects_EffectText->static_fields->_fxTagRegex = pSVar2;
  Il2CppCodeGenWriteBarrier(&TypeInfo_PatreonEffects_EffectText->static_fields->_fxTagRegex);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_RegularExpressions_Regex);
  System_Text_RegularExpressions_Regex___ctor_61e4b50(pSVar2,"(?<key>\\w+)=\"(?<val>[^\"]*)\"",8,(MethodInfo *)0x0);
  pPVar1 = TypeInfo_PatreonEffects_EffectText->static_fields;
  pPVar1->_attrRegex = pSVar2;
  Il2CppCodeGenWriteBarrier(&pPVar1->_attrRegex);
  return;
}


