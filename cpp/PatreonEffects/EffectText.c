// Type: PatreonEffects.EffectText
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/PatreonEffects/EffectText.cs
// Prior real C# source: none
// --------------------------------

// PatreonEffects.EffectText.<>c$$.cctor
// il2cpp: void PatreonEffects_EffectText___c___cctor (const MethodInfo* method);
// 0x1820d5490

void PatreonEffects_EffectText___c___cctor(MethodInfo *method)

{
  PatreonEffects_EffectText___c_o *__this;
  
  if (Il2CppMethodInitialized_184346943 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_EffectText_c);
    Il2CppMethodInitialized_184346943 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_PatreonEffects_EffectText_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_PatreonEffects_EffectText_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_PatreonEffects_EffectText_c->static_fields->__9,__this);
  return;
}


// PatreonEffects.EffectText.<>c$$.ctor
// il2cpp: void PatreonEffects_EffectText___c___ctor (PatreonEffects_EffectText___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
PatreonEffects_EffectText___c___ctor(PatreonEffects_EffectText___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// PatreonEffects.EffectText.<>c$$<WithPresetColors>b__26_0
// il2cpp: System_String_o* PatreonEffects_EffectText___c___WithPresetColors_b__26_0 (PatreonEffects_EffectText___c_o* __this, System_Text_RegularExpressions_Match_o* match, const MethodInfo* method);
// 0x1820d47a0
// eh: try 0x1820d49d0..0x1820d4a5e -> pad 0x18333e0b0 catch Il2CppExceptionWrapper
// eh: try 0x1820d4a5e..0x1820d4abb -> pad 0x180026a30 cleanup
// eh: try 0x1820d4abb..0x1820d511f -> pad 0x18333e0b0 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 25 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820d4a7e: mov rdx, qword ptr [rip + 0x1fed423]  ; TypeInfo_System_Text_RegularExpressions_Match
// asm:   0x1820d4a85: mov r8, qword ptr [rax]
// asm:   0x1820d4a88: movzx eax, byte ptr [rdx + 0x130]
// asm:   0x1820d4a8f: cmp byte ptr [r8 + 0x130], al
// asm:   0x1820d4a96: jb 0x1820d510c
// asm:   0x1820d4bc4: lea rcx, [rsp + 0x60]
// asm:   0x1820d4bc9: call 0x1806aa210  ; il2cpp_runtime_helper_1806aa210()
// asm:   0x1820d4bce: mov rcx, qword ptr [rsp + 0x58]
// asm:   0x1820d4bd3: test rcx, rcx
// asm:   0x1820d4bd6: jne 0x1820d511f
// asm:   0x1820d4bdc: mov r15, qword ptr [rsp + 0xb8]
// asm:   0x1820d4be4: mov r14, qword ptr [rsp + 0x30]
// asm:   0x1820d4be9: mov rsi, qword ptr [rsp + 0x40]
// asm:   0x1820d511f: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x18333e0b0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333e0b5: push rbp
// asm:   0x18333e0b6: sub rsp, 0x20
// asm:   0x18333e0ba: mov rbp, rdx
// asm:   0x18333e0bd: mov rax, qword ptr [rbp + 0x50]
// asm:   0x18333e0c1: mov rcx, qword ptr [rax]
// asm:   0x18333e0c4: mov qword ptr [rbp + 0x58], rcx
// asm:   0x18333e0c8: movabs rax, 0
// asm:   0x18333e0d2: add rsp, 0x20
// asm:   0x18333e0d6: pop rbp
// asm:   0x18333e0d7: ret 

System_String_o *
PatreonEffects_EffectText___c___WithPresetColors_b__26_0
          (PatreonEffects_EffectText___c_o *__this,System_Text_RegularExpressions_Match_o *match,
          MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  System_Text_RegularExpressions_Regex_o *__this_00;
  Il2CppClass *pIVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  System_Text_RegularExpressions_GroupCollection_o *pSVar10;
  System_Text_RegularExpressions_Group_o *pSVar11;
  System_String_o *pSVar12;
  System_Collections_Generic_HashSet_string__o *__this_01;
  System_Text_RegularExpressions_MatchCollection_o *__this_02;
  void *pvVar13;
  VirtualInvokeData *pVVar14;
  Il2CppObject *pIVar15;
  System_String_o *pSVar16;
  PatreonEffects_NameEffectSettings_o *pPVar17;
  System_Text_StringBuilder_o *pSVar18;
  System_Text_StringBuilder_o *pSVar19;
  ushort uVar20;
  int32_t local_res20 [2];
  Il2CppObject *local_88;
  Il2CppObject *local_80;
  System_Collections_Generic_HashSet_string__o *local_78;
  System_String_o *local_68 [3];
  undefined8 local_50;
  Il2CppObject **local_48;
  Il2CppObject **local_40;
  ulonglong uVar21;
  
  if (Il2CppMethodInitialized_184346944 == '\0') {
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
    Il2CppMethodInitialized_184346944 = '\x01';
  }
  local_88 = (Il2CppObject *)0x0;
  local_80 = (Il2CppObject *)0x0;
  if (((match != (System_Text_RegularExpressions_Match_o *)0x0) &&
      (pSVar10 = (*(match->klass->vtable)._5_get_Groups.methodPtr)
                           (match,(match->klass->vtable)._5_get_Groups.method),
      pSVar10 != (System_Text_RegularExpressions_GroupCollection_o *)0x0)) &&
     (pSVar11 = System_Text_RegularExpressions_GroupCollection__get_Item_284bfa0
                          (pSVar10,"attrs",(MethodInfo *)0x0),
     pSVar11 != (System_Text_RegularExpressions_Group_o *)0x0)) {
    pSVar12 = System_Text_RegularExpressions_Capture__ToString
                        ((System_Text_RegularExpressions_Capture_o *)pSVar11,(MethodInfo *)0x0);
    local_68[0] = pSVar12;
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
    System_Collections_Generic_HashSet_object____ctor
              ((System_Collections_Generic_HashSet_object__o *)__this_01,
               (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    local_res20[0] = 0;
    if ((TypeInfo_PatreonEffects_EffectText->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_EffectText);
    }
    __this_00 = TypeInfo_PatreonEffects_EffectText->static_fields->_attrRegex;
    if ((__this_00 != (System_Text_RegularExpressions_Regex_o *)0x0) &&
       (__this_02 = System_Text_RegularExpressions_Regex__Matches_285d470(__this_00,pSVar12,(MethodInfo *)0x0)
       , __this_02 != (System_Text_RegularExpressions_MatchCollection_o *)0x0)) {
      local_78 = __this_01;
      local_88 = (Il2CppObject *)
                 System_Text_RegularExpressions_MatchCollection__GetEnumerator(__this_02,(MethodInfo *)0x0);
      local_50 = 0;
      local_48 = &local_88;
      local_40 = &local_80;
      while( true ) {
        if (local_88 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pvVar13 = InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,local_88);
        pIVar15 = local_88;
        if ((char)pvVar13 == '\0') break;
        if (local_88 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar3 = local_88->klass;
        uVar2 = (pIVar3->_2).interface_offsets_count;
        if (uVar2 != 0) {
          pIVar4 = (pIVar3->_1).interfaceOffsets;
          uVar21 = 0;
          do {
            if (pIVar4[uVar21].interfaceType == (Il2CppClass *)TypeInfo_System_Collections_IEnumerator) {
              pVVar14 = pIVar3->vtable + (pIVar4[uVar21].offset + 1);
              goto label_1820d4a49;
            }
            uVar20 = (short)uVar21 + 1;
            uVar21 = (ulonglong)uVar20;
          } while (uVar20 < uVar2);
        }
        pVVar14 = GetInterfaceInvokeDataFromVTableSlowPath
                            (local_88,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,1);
label_1820d4a49:
        pIVar15 = (*pVVar14->methodPtr)(pIVar15,pVVar14->method);
        if (pIVar15 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar3 = pIVar15->klass;
        bVar1 = (TypeInfo_System_Text_RegularExpressions_Match->_2).typeHierarchyDepth;
        if (((pIVar3->_2).typeHierarchyDepth < bVar1) ||
           ((pIVar3->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_System_Text_RegularExpressions_Match)) {
          il2cpp_codegen_raise_invalid_cast_exception(pIVar15);
        }
        pSVar10 = (System_Text_RegularExpressions_GroupCollection_o *)
                  (*pIVar3->vtable[5].methodPtr)(pIVar15,pIVar3->vtable[5].method);
        if (pSVar10 == (System_Text_RegularExpressions_GroupCollection_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar11 = System_Text_RegularExpressions_GroupCollection__get_Item_284bfa0
                            (pSVar10,"key",(MethodInfo *)0x0);
        if (pSVar11 == (System_Text_RegularExpressions_Group_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar16 = System_Text_RegularExpressions_Capture__ToString
                            ((System_Text_RegularExpressions_Capture_o *)pSVar11,(MethodInfo *)0x0);
        if (pSVar16 == (System_String_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar16 = System_String__ToLowerInvariant(pSVar16,(MethodInfo *)0x0);
        if (__this_01 == (System_Collections_Generic_HashSet_string__o *)0x0) {
          ThrowNullReferenceException();
        }
        System_Collections_Generic_HashSet_object___Add
                  ((System_Collections_Generic_HashSet_object__o *)__this_01,(Il2CppObject *)pSVar16,
                   (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
        bVar9 = System_String__op_Equality(pSVar16,"effect",(MethodInfo *)0x0);
        if (bVar9) {
          pSVar10 = (System_Text_RegularExpressions_GroupCollection_o *)
                    (*pIVar15->klass->vtable[5].methodPtr)(pIVar15,pIVar15->klass->vtable[5].method);
          if (pSVar10 == (System_Text_RegularExpressions_GroupCollection_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar11 = System_Text_RegularExpressions_GroupCollection__get_Item_284bfa0
                              (pSVar10,"val",(MethodInfo *)0x0);
          if (pSVar11 == (System_Text_RegularExpressions_Group_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar16 = System_Text_RegularExpressions_Capture__ToString
                              ((System_Text_RegularExpressions_Capture_o *)pSVar11,(MethodInfo *)0x0);
          PatreonEffects_NameEffectPresets__TryResolve(pSVar16,local_res20,(MethodInfo *)0x0);
        }
      }
      local_80 = il2cpp_vm_Object_IsInst(local_88,(Il2CppClass *)TypeInfo_System_IDisposable);
      if (local_80 != (Il2CppObject *)0x0) {
        InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,local_80);
      }
      if (local_res20[0] == 0) {
        pSVar12 = System_Text_RegularExpressions_Capture__ToString
                            ((System_Text_RegularExpressions_Capture_o *)match,(MethodInfo *)0x0);
        return pSVar12;
      }
      pPVar17 = PatreonEffects_NameEffectPresets__GetPreset(local_res20[0],(MethodInfo *)0x0);
      pSVar18 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_StringBuilder);
      System_Text_StringBuilder___ctor_1981780(pSVar18,"<fx",(MethodInfo *)0x0);
      if ((pSVar18 != (System_Text_StringBuilder_o *)0x0) &&
         (pSVar18 = System_Text_StringBuilder__Append_197dca0(pSVar18,pSVar12,(MethodInfo *)0x0),
         __this_01 != (System_Collections_Generic_HashSet_string__o *)0x0)) {
        bVar9 = System_Collections_Generic_HashSet_object___Contains
                          ((System_Collections_Generic_HashSet_object__o *)__this_01,
                           (Il2CppObject *)"a",
                           (MethodInfo_1759E40 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains
                          );
        if (!bVar9) {
          if (pPVar17 == (PatreonEffects_NameEffectSettings_o *)0x0) goto label_1820d50e2;
          pSVar12 = *(System_String_o **)&(pPVar17->fields).gradientA.fields;
          uVar5._0_4_ = (pPVar17->fields).gradientA.fields.b;
          uVar5._4_4_ = (pPVar17->fields).gradientA.fields.a;
          if ((TypeInfo_PatreonEffects_EffectText->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_EffectText);
          }
          pSVar16 = "a";
          if (Il2CppMethodInitialized_184346936 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&"=\"#");
            Il2CppMethodInitialized_184346936 = '\x01';
          }
          if (((pSVar18 == (System_Text_StringBuilder_o *)0x0) ||
              (pSVar19 = System_Text_StringBuilder__Append_197e090(pSVar18,0x20,(MethodInfo *)0x0),
              pSVar19 == (System_Text_StringBuilder_o *)0x0)) ||
             (pSVar19 = System_Text_StringBuilder__Append_197dca0(pSVar19,pSVar16,(MethodInfo *)0x0),
             pSVar19 == (System_Text_StringBuilder_o *)0x0)) {
label_1820d5125:
            ThrowNullReferenceException();
          }
          pSVar19 = System_Text_StringBuilder__Append_197dca0(pSVar19,"=\"#",(MethodInfo *)0x0)
          ;
          local_68[0] = pSVar12;
          local_68[1] = (System_String_o *)uVar5;
          pSVar12 = UnityEngine_ColorUtility__ToHtmlStringRGB
                              ((UnityEngine_Color_o *)local_68,(MethodInfo *)0x0);
          if ((pSVar19 == (System_Text_StringBuilder_o *)0x0) ||
             (pSVar19 = System_Text_StringBuilder__Append_197dca0(pSVar19,pSVar12,(MethodInfo *)0x0),
             pSVar19 == (System_Text_StringBuilder_o *)0x0)) goto label_1820d5125;
          System_Text_StringBuilder__Append_197e090(pSVar19,0x22,(MethodInfo *)0x0);
        }
        bVar9 = System_Collections_Generic_HashSet_object___Contains
                          ((System_Collections_Generic_HashSet_object__o *)__this_01,
                           (Il2CppObject *)"b",
                           (MethodInfo_1759E40 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains
                          );
        if (!bVar9) {
          if (pPVar17 == (PatreonEffects_NameEffectSettings_o *)0x0) goto label_1820d50e2;
          pSVar12 = *(System_String_o **)&(pPVar17->fields).gradientB.fields;
          uVar6._0_4_ = (pPVar17->fields).gradientB.fields.b;
          uVar6._4_4_ = (pPVar17->fields).gradientB.fields.a;
          if ((TypeInfo_PatreonEffects_EffectText->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_EffectText);
          }
          pSVar16 = "b";
          if (Il2CppMethodInitialized_184346936 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&"=\"#");
            Il2CppMethodInitialized_184346936 = '\x01';
          }
          if (((pSVar18 == (System_Text_StringBuilder_o *)0x0) ||
              (pSVar19 = System_Text_StringBuilder__Append_197e090(pSVar18,0x20,(MethodInfo *)0x0),
              pSVar19 == (System_Text_StringBuilder_o *)0x0)) ||
             (pSVar19 = System_Text_StringBuilder__Append_197dca0(pSVar19,pSVar16,(MethodInfo *)0x0),
             pSVar19 == (System_Text_StringBuilder_o *)0x0)) {
label_1820d512b:
            ThrowNullReferenceException();
          }
          pSVar19 = System_Text_StringBuilder__Append_197dca0(pSVar19,"=\"#",(MethodInfo *)0x0)
          ;
          local_68[0] = pSVar12;
          local_68[1] = (System_String_o *)uVar6;
          pSVar12 = UnityEngine_ColorUtility__ToHtmlStringRGB
                              ((UnityEngine_Color_o *)local_68,(MethodInfo *)0x0);
          if ((pSVar19 == (System_Text_StringBuilder_o *)0x0) ||
             (pSVar19 = System_Text_StringBuilder__Append_197dca0(pSVar19,pSVar12,(MethodInfo *)0x0),
             pSVar19 == (System_Text_StringBuilder_o *)0x0)) goto label_1820d512b;
          System_Text_StringBuilder__Append_197e090(pSVar19,0x22,(MethodInfo *)0x0);
        }
        bVar9 = System_Collections_Generic_HashSet_object___Contains
                          ((System_Collections_Generic_HashSet_object__o *)__this_01,
                           (Il2CppObject *)"c",
                           (MethodInfo_1759E40 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains
                          );
        if (!bVar9) {
          if (pPVar17 == (PatreonEffects_NameEffectSettings_o *)0x0) goto label_1820d50e2;
          pSVar12 = *(System_String_o **)&(pPVar17->fields).gradientC.fields;
          uVar7._0_4_ = (pPVar17->fields).gradientC.fields.b;
          uVar7._4_4_ = (pPVar17->fields).gradientC.fields.a;
          if ((TypeInfo_PatreonEffects_EffectText->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_EffectText);
          }
          pSVar16 = "c";
          if (Il2CppMethodInitialized_184346936 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&"=\"#");
            Il2CppMethodInitialized_184346936 = '\x01';
          }
          if (((pSVar18 == (System_Text_StringBuilder_o *)0x0) ||
              (pSVar19 = System_Text_StringBuilder__Append_197e090(pSVar18,0x20,(MethodInfo *)0x0),
              pSVar19 == (System_Text_StringBuilder_o *)0x0)) ||
             (pSVar19 = System_Text_StringBuilder__Append_197dca0(pSVar19,pSVar16,(MethodInfo *)0x0),
             pSVar19 == (System_Text_StringBuilder_o *)0x0)) {
label_1820d5131:
            ThrowNullReferenceException();
          }
          pSVar19 = System_Text_StringBuilder__Append_197dca0(pSVar19,"=\"#",(MethodInfo *)0x0)
          ;
          local_68[0] = pSVar12;
          local_68[1] = (System_String_o *)uVar7;
          pSVar12 = UnityEngine_ColorUtility__ToHtmlStringRGB
                              ((UnityEngine_Color_o *)local_68,(MethodInfo *)0x0);
          if ((pSVar19 == (System_Text_StringBuilder_o *)0x0) ||
             (pSVar19 = System_Text_StringBuilder__Append_197dca0(pSVar19,pSVar12,(MethodInfo *)0x0),
             pSVar19 == (System_Text_StringBuilder_o *)0x0)) goto label_1820d5131;
          System_Text_StringBuilder__Append_197e090(pSVar19,0x22,(MethodInfo *)0x0);
        }
        bVar9 = System_Collections_Generic_HashSet_object___Contains
                          ((System_Collections_Generic_HashSet_object__o *)__this_01,
                           (Il2CppObject *)"d",
                           (MethodInfo_1759E40 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains
                          );
        if (bVar9) {
          if (pSVar18 == (System_Text_StringBuilder_o *)0x0) goto label_1820d50e2;
        }
        else {
          if (pPVar17 == (PatreonEffects_NameEffectSettings_o *)0x0) goto label_1820d50e2;
          pSVar12 = *(System_String_o **)&(pPVar17->fields).gradientD.fields;
          uVar8._0_4_ = (pPVar17->fields).gradientD.fields.b;
          uVar8._4_4_ = (pPVar17->fields).gradientD.fields.a;
          if ((TypeInfo_PatreonEffects_EffectText->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_EffectText);
          }
          pSVar16 = "d";
          if (Il2CppMethodInitialized_184346936 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&"=\"#");
            Il2CppMethodInitialized_184346936 = '\x01';
          }
          if (((pSVar18 == (System_Text_StringBuilder_o *)0x0) ||
              (pSVar19 = System_Text_StringBuilder__Append_197e090(pSVar18,0x20,(MethodInfo *)0x0),
              pSVar19 == (System_Text_StringBuilder_o *)0x0)) ||
             (pSVar19 = System_Text_StringBuilder__Append_197dca0(pSVar19,pSVar16,(MethodInfo *)0x0),
             pSVar19 == (System_Text_StringBuilder_o *)0x0)) {
label_1820d5137:
            ThrowNullReferenceException();
          }
          pSVar19 = System_Text_StringBuilder__Append_197dca0(pSVar19,"=\"#",(MethodInfo *)0x0)
          ;
          local_68[0] = pSVar12;
          local_68[1] = (System_String_o *)uVar8;
          pSVar12 = UnityEngine_ColorUtility__ToHtmlStringRGB
                              ((UnityEngine_Color_o *)local_68,(MethodInfo *)0x0);
          if ((pSVar19 == (System_Text_StringBuilder_o *)0x0) ||
             (pSVar19 = System_Text_StringBuilder__Append_197dca0(pSVar19,pSVar12,(MethodInfo *)0x0),
             pSVar19 == (System_Text_StringBuilder_o *)0x0)) goto label_1820d5137;
          System_Text_StringBuilder__Append_197e090(pSVar19,0x22,(MethodInfo *)0x0);
        }
        pSVar18 = System_Text_StringBuilder__Append_197e090(pSVar18,0x3e,(MethodInfo *)0x0);
        pSVar10 = (*(match->klass->vtable)._5_get_Groups.methodPtr)
                            (match,(match->klass->vtable)._5_get_Groups.method);
        if ((((pSVar10 != (System_Text_RegularExpressions_GroupCollection_o *)0x0) &&
             (pSVar11 = System_Text_RegularExpressions_GroupCollection__get_Item_284bfa0
                                  (pSVar10,"content",(MethodInfo *)0x0),
             pSVar11 != (System_Text_RegularExpressions_Group_o *)0x0)) &&
            (pSVar12 = System_Text_RegularExpressions_Capture__ToString
                                 ((System_Text_RegularExpressions_Capture_o *)pSVar11,(MethodInfo *)0x0),
            pSVar18 != (System_Text_StringBuilder_o *)0x0)) &&
           ((pSVar18 = System_Text_StringBuilder__Append_197dca0(pSVar18,pSVar12,(MethodInfo *)0x0),
            pSVar18 != (System_Text_StringBuilder_o *)0x0 &&
            (pSVar18 = System_Text_StringBuilder__Append_197dca0
                                 (pSVar18,"</fx>",(MethodInfo *)0x0),
            pSVar18 != (System_Text_StringBuilder_o *)0x0)))) {
          pSVar12 = (*(pSVar18->klass->vtable)._3_ToString.methodPtr)
                              (pSVar18,(pSVar18->klass->vtable)._3_ToString.method);
          return pSVar12;
        }
      }
    }
  }
label_1820d50e2:
  ThrowNullReferenceException();
}


// PatreonEffects.EffectText$$get_text
// il2cpp: System_String_o* PatreonEffects_EffectText__get_text (PatreonEffects_EffectText_o* __this, const MethodInfo* method);
// 0x1805852b0

System_String_o*
PatreonEffects_EffectText__get_text(PatreonEffects_EffectText_o* __this, MethodInfo* method)

{
  return (__this->fields)._text;
}


// PatreonEffects.EffectText$$set_text
// il2cpp: void PatreonEffects_EffectText__set_text (PatreonEffects_EffectText_o* __this, System_String_o* value, const MethodInfo* method);
// 0x1820b9820

void PatreonEffects_EffectText__set_text
               (PatreonEffects_EffectText_o *__this,System_String_o *value,MethodInfo *method)

{
  if (value == (System_String_o *)0x0) {
    value = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  if (__this != (PatreonEffects_EffectText_o *)0x0) {
    (__this->fields)._text = value;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._text,value);
    PatreonEffects_EffectText__Rebuild(__this,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// PatreonEffects.EffectText$$get_fontSize
// il2cpp: float PatreonEffects_EffectText__get_fontSize (PatreonEffects_EffectText_o* __this, const MethodInfo* method);
// 0x180584ac0

float
PatreonEffects_EffectText__get_fontSize(PatreonEffects_EffectText_o* __this, MethodInfo* method)

{
  return (__this->fields)._fontSize;
}


// PatreonEffects.EffectText$$set_fontSize
// il2cpp: void PatreonEffects_EffectText__set_fontSize (PatreonEffects_EffectText_o* __this, float value, const MethodInfo* method);
// 0x1820b97d0

void PatreonEffects_EffectText__set_fontSize
               (PatreonEffects_EffectText_o *__this,float value,MethodInfo *method)

{
  (__this->fields)._fontSize = value;
  PatreonEffects_EffectText__Rebuild(__this,(MethodInfo *)0x0);
  return;
}


// PatreonEffects.EffectText$$get_color
// il2cpp: UnityEngine_Color_o PatreonEffects_EffectText__get_color (PatreonEffects_EffectText_o* __this, const MethodInfo* method);
// 0x1820b97a0

UnityEngine_Color_o
PatreonEffects_EffectText__get_color(PatreonEffects_EffectText_o* __this, MethodInfo* method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (__this->fields)._color.fields.g;
  fVar2 = (__this->fields)._color.fields.b;
  fVar3 = (__this->fields)._color.fields.a;
  (__return_storage_ptr__->fields).r = (__this->fields)._color.fields.r;
  (__return_storage_ptr__->fields).g = fVar1;
  (__return_storage_ptr__->fields).b = fVar2;
  (__return_storage_ptr__->fields).a = fVar3;
  return __return_storage_ptr__;
}


// PatreonEffects.EffectText$$set_color
// il2cpp: void PatreonEffects_EffectText__set_color (PatreonEffects_EffectText_o* __this, UnityEngine_Color_o value, const MethodInfo* method);
// 0x1820b97c0

void PatreonEffects_EffectText__set_color
               (PatreonEffects_EffectText_o *__this,UnityEngine_Color_o *value,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (value->fields).g;
  fVar2 = (value->fields).b;
  fVar3 = (value->fields).a;
  (__this->fields)._color.fields.r = (value->fields).r;
  (__this->fields)._color.fields.g = fVar1;
  (__this->fields)._color.fields.b = fVar2;
  (__this->fields)._color.fields.a = fVar3;
  PatreonEffects_EffectText__ApplyColor(__this,(MethodInfo *)0x0);
  return;
}


// PatreonEffects.EffectText$$get_font
// il2cpp: TMPro_TMP_FontAsset_o* PatreonEffects_EffectText__get_font (PatreonEffects_EffectText_o* __this, const MethodInfo* method);
// 0x1805853c0

TMPro_TMP_FontAsset_o*
PatreonEffects_EffectText__get_font(PatreonEffects_EffectText_o* __this, MethodInfo* method)

{
  return *(Unity_Properties_IProperty_TContainer__o **)
          &(__this->fields).m_IndexedCollectionPropertyBag.fields.m_Position;
}


// PatreonEffects.EffectText$$set_font
// il2cpp: void PatreonEffects_EffectText__set_font (PatreonEffects_EffectText_o* __this, TMPro_TMP_FontAsset_o* value, const MethodInfo* method);
// 0x1820b97e0

void PatreonEffects_EffectText__set_font
               (PatreonEffects_EffectText_o *__this,TMPro_TMP_FontAsset_o *value,MethodInfo *method)

{
  (__this->fields)._font = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._font,value);
  PatreonEffects_EffectText__Rebuild(__this,(MethodInfo *)0x0);
  return;
}


// PatreonEffects.EffectText$$get_alignment
// il2cpp: int32_t PatreonEffects_EffectText__get_alignment (PatreonEffects_EffectText_o* __this, const MethodInfo* method);
// 0x180b3dfc0

int32_t
PatreonEffects_EffectText__get_alignment(PatreonEffects_EffectText_o* __this, MethodInfo* method)

{
  return (__this->fields)._alignment;
}


// PatreonEffects.EffectText$$set_alignment
// il2cpp: void PatreonEffects_EffectText__set_alignment (PatreonEffects_EffectText_o* __this, int32_t value, const MethodInfo* method);
// 0x1820b97b0

void PatreonEffects_EffectText__set_alignment
               (PatreonEffects_EffectText_o *__this,int32_t value,MethodInfo *method)

{
  (__this->fields)._alignment = value;
  PatreonEffects_EffectText__ApplyAlignment(__this,(MethodInfo *)0x0);
  return;
}


// PatreonEffects.EffectText$$get_richText
// il2cpp: bool PatreonEffects_EffectText__get_richText (PatreonEffects_EffectText_o* __this, const MethodInfo* method);
// 0x181cfdd60

bool
PatreonEffects_EffectText__get_richText(PatreonEffects_EffectText_o* __this, MethodInfo* method)

{
  return (__this->fields)._richText;
}


// PatreonEffects.EffectText$$set_richText
// il2cpp: void PatreonEffects_EffectText__set_richText (PatreonEffects_EffectText_o* __this, bool value, const MethodInfo* method);
// 0x1820b9810

void PatreonEffects_EffectText__set_richText
               (PatreonEffects_EffectText_o *__this,bool value,MethodInfo *method)

{
  (__this->fields)._richText = value;
  PatreonEffects_EffectText__Rebuild(__this,(MethodInfo *)0x0);
  return;
}


// PatreonEffects.EffectText$$Compose
// il2cpp: System_String_o* PatreonEffects_EffectText__Compose (System_String_o* content, int32_t effect, UnityEngine_Color_o colorA, UnityEngine_Color_o colorB, UnityEngine_Color_o colorC, UnityEngine_Color_o colorD, const MethodInfo* method);
// 0x1820b71d0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820b7626: mov rax, rdi
// asm:   0x1820b7629: jmp 0x1820b75fc

System_String_o *
PatreonEffects_EffectText__Compose
          (System_String_o *content,int32_t effect,UnityEngine_Color_o *colorA,UnityEngine_Color_o *colorB,
          UnityEngine_Color_o *colorC,UnityEngine_Color_o *colorD,MethodInfo *method)

{
  bool bVar1;
  System_Text_StringBuilder_o *__this;
  System_Text_StringBuilder_o *pSVar2;
  System_String_o *pSVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  UnityEngine_Color_Fields local_98;
  System_Enum_o local_88;
  int32_t local_78;
  
  if (Il2CppMethodInitialized_184346934 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_EffectText);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameEffectType);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_StringBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&"a");
    il2cpp_codegen_initialize_runtime_metadata(&"</fx>");
    il2cpp_codegen_initialize_runtime_metadata(&"b");
    il2cpp_codegen_initialize_runtime_metadata(&"c");
    il2cpp_codegen_initialize_runtime_metadata(&"<fx effect=\"");
    il2cpp_codegen_initialize_runtime_metadata(&"d");
    Il2CppMethodInitialized_184346934 = '\x01';
  }
  if ((effect == 0) || (bVar1 = System_String__IsNullOrEmpty(content,(MethodInfo *)0x0), bVar1)) {
    if (content == (System_String_o *)0x0) {
      content = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    }
    return content;
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_StringBuilder);
  System_Text_StringBuilder___ctor(__this,(MethodInfo *)0x0);
  if (__this != (System_Text_StringBuilder_o *)0x0) {
    pSVar2 = System_Text_StringBuilder__Append_197dca0(__this,"<fx effect=\"",(MethodInfo *)0x0);
    local_88.klass = (System_Enum_c *)TypeInfo_PatreonEffects_NameEffectType;
    local_88.monitor = &g_data_ffffffffffffffff;
    local_78 = effect;
    pSVar3 = System_Enum__ToString(&local_88,(MethodInfo *)0x0);
    if ((pSVar2 != (System_Text_StringBuilder_o *)0x0) &&
       (pSVar2 = System_Text_StringBuilder__Append_197dca0(pSVar2,pSVar3,(MethodInfo *)0x0),
       pSVar2 != (System_Text_StringBuilder_o *)0x0)) {
      System_Text_StringBuilder__Append_197e090(pSVar2,0x22,(MethodInfo *)0x0);
      fVar6 = (colorA->fields).r - 0.0;
      fVar7 = (colorA->fields).g - 0.0;
      fVar4 = (colorA->fields).b - 0.0;
      fVar5 = (colorA->fields).a - 0.0;
      if (9.9999994e-11 <= fVar7 * fVar7 + fVar6 * fVar6 + fVar4 * fVar4 + fVar5 * fVar5) {
        if ((TypeInfo_PatreonEffects_EffectText->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_EffectText);
        }
        local_98.r = (colorA->fields).r;
        local_98.g = (colorA->fields).g;
        local_98.b = (colorA->fields).b;
        local_98.a = (colorA->fields).a;
        PatreonEffects_EffectText__AppendColorAttribute
                  (__this,"a",(UnityEngine_Color_o *)&local_98,(MethodInfo *)0x0);
      }
      fVar6 = (colorB->fields).r - 0.0;
      fVar7 = (colorB->fields).g - 0.0;
      fVar4 = (colorB->fields).b - 0.0;
      fVar5 = (colorB->fields).a - 0.0;
      if (9.9999994e-11 <= fVar7 * fVar7 + fVar6 * fVar6 + fVar4 * fVar4 + fVar5 * fVar5) {
        if ((TypeInfo_PatreonEffects_EffectText->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_EffectText);
        }
        local_98.r = (colorB->fields).r;
        local_98.g = (colorB->fields).g;
        local_98.b = (colorB->fields).b;
        local_98.a = (colorB->fields).a;
        PatreonEffects_EffectText__AppendColorAttribute
                  (__this,"b",(UnityEngine_Color_o *)&local_98,(MethodInfo *)0x0);
      }
      fVar6 = (colorC->fields).r - 0.0;
      fVar7 = (colorC->fields).g - 0.0;
      fVar4 = (colorC->fields).b - 0.0;
      fVar5 = (colorC->fields).a - 0.0;
      if (9.9999994e-11 <= fVar7 * fVar7 + fVar6 * fVar6 + fVar4 * fVar4 + fVar5 * fVar5) {
        if ((TypeInfo_PatreonEffects_EffectText->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_EffectText);
        }
        local_98.r = (colorC->fields).r;
        local_98.g = (colorC->fields).g;
        local_98.b = (colorC->fields).b;
        local_98.a = (colorC->fields).a;
        PatreonEffects_EffectText__AppendColorAttribute
                  (__this,"c",(UnityEngine_Color_o *)&local_98,(MethodInfo *)0x0);
      }
      fVar6 = (colorD->fields).r - 0.0;
      fVar7 = (colorD->fields).g - 0.0;
      fVar4 = (colorD->fields).b - 0.0;
      fVar5 = (colorD->fields).a - 0.0;
      if (9.9999994e-11 <= fVar7 * fVar7 + fVar6 * fVar6 + fVar4 * fVar4 + fVar5 * fVar5) {
        if ((TypeInfo_PatreonEffects_EffectText->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_EffectText);
        }
        local_98.r = (colorD->fields).r;
        local_98.g = (colorD->fields).g;
        local_98.b = (colorD->fields).b;
        local_98.a = (colorD->fields).a;
        PatreonEffects_EffectText__AppendColorAttribute
                  (__this,"d",(UnityEngine_Color_o *)&local_98,(MethodInfo *)0x0);
      }
      pSVar2 = System_Text_StringBuilder__Append_197e090(__this,0x3e,(MethodInfo *)0x0);
      if ((pSVar2 != (System_Text_StringBuilder_o *)0x0) &&
         (pSVar2 = System_Text_StringBuilder__Append_197dca0(pSVar2,content,(MethodInfo *)0x0),
         pSVar2 != (System_Text_StringBuilder_o *)0x0)) {
        System_Text_StringBuilder__Append_197dca0(pSVar2,"</fx>",(MethodInfo *)0x0);
        pSVar3 = (*(__this->klass->vtable)._3_ToString.methodPtr)
                           (__this,(__this->klass->vtable)._3_ToString.method);
        return pSVar3;
      }
      ThrowNullReferenceException();
    }
  }
  ThrowNullReferenceException();
}


// PatreonEffects.EffectText$$WithPresetColors
// il2cpp: System_String_o* PatreonEffects_EffectText__WithPresetColors (System_String_o* text, const MethodInfo* method);
// 0x1820b9430

System_String_o * PatreonEffects_EffectText__WithPresetColors(System_String_o *text,MethodInfo *method)

{
  System_Text_RegularExpressions_Regex_o *__this;
  Il2CppObject *object;
  bool bVar1;
  int32_t iVar2;
  System_Text_RegularExpressions_MatchEvaluator_o *evaluator;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_184346935 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_EffectText);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_RegularExpressions_MatchEvaluator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_PatreonEffects_EffectText_c_WithPresetColors_b__26_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_EffectText_c);
    il2cpp_codegen_initialize_runtime_metadata(&"<fx");
    Il2CppMethodInitialized_184346935 = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(text,(MethodInfo *)0x0);
  if (bVar1) {
    return text;
  }
  if (text != (System_String_o *)0x0) {
    iVar2 = System_String__IndexOf_196de90(text,"<fx",4,(MethodInfo *)0x0);
    if (iVar2 < 0) {
      return text;
    }
    if ((TypeInfo_PatreonEffects_EffectText->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_EffectText);
    }
    __this = TypeInfo_PatreonEffects_EffectText->static_fields->_fxTagRegex;
    if ((TypeInfo_PatreonEffects_EffectText_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_EffectText_c);
    }
    evaluator = TypeInfo_PatreonEffects_EffectText_c->static_fields->__9__26_0;
    if (evaluator == (System_Text_RegularExpressions_MatchEvaluator_o *)0x0) {
      if ((TypeInfo_PatreonEffects_EffectText_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_EffectText_c);
      }
      object = (Il2CppObject *)TypeInfo_PatreonEffects_EffectText_c->static_fields->__9;
      evaluator = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Text_RegularExpressions_MatchEvaluator);
      System_Text_RegularExpressions_MatchEvaluator___ctor
                ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)evaluator,object,
                 (intptr_t)MethodInfo_PatreonEffects_EffectText_c_WithPresetColors_b__26_0,
                 (MethodInfo_16E67D0 *)0x0);
      TypeInfo_PatreonEffects_EffectText_c->static_fields->__9__26_0 = evaluator;
      Il2CppCodeGenWriteBarrier(&TypeInfo_PatreonEffects_EffectText_c->static_fields->__9__26_0,evaluator);
    }
    if (__this != (System_Text_RegularExpressions_Regex_o *)0x0) {
      pSVar3 = System_Text_RegularExpressions_Regex__Replace_285dcc0(__this,text,evaluator,(MethodInfo *)0x0);
      return pSVar3;
    }
  }
  ThrowNullReferenceException();
}


// PatreonEffects.EffectText$$AppendColorAttribute
// il2cpp: void PatreonEffects_EffectText__AppendColorAttribute (System_Text_StringBuilder_o* sb, System_String_o* key, UnityEngine_Color_o color, const MethodInfo* method);
// 0x1820b6d20

void PatreonEffects_EffectText__AppendColorAttribute
               (System_Text_StringBuilder_o *sb,System_String_o *key,UnityEngine_Color_o *color,
               MethodInfo *method)

{
  System_Text_StringBuilder_o *pSVar1;
  System_String_o *value;
  UnityEngine_Color_Fields local_18;
  
  if (Il2CppMethodInitialized_184346936 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"=\"#");
    Il2CppMethodInitialized_184346936 = '\x01';
  }
  if (sb != (System_Text_StringBuilder_o *)0x0) {
    pSVar1 = System_Text_StringBuilder__Append_197e090(sb,0x20,(MethodInfo *)0x0);
    if (pSVar1 != (System_Text_StringBuilder_o *)0x0) {
      pSVar1 = System_Text_StringBuilder__Append_197dca0(pSVar1,key,(MethodInfo *)0x0);
      if (pSVar1 != (System_Text_StringBuilder_o *)0x0) {
        pSVar1 = System_Text_StringBuilder__Append_197dca0(pSVar1,"=\"#",(MethodInfo *)0x0);
        local_18.r = (color->fields).r;
        local_18.g = (color->fields).g;
        local_18.b = (color->fields).b;
        local_18.a = (color->fields).a;
        value = UnityEngine_ColorUtility__ToHtmlStringRGB((UnityEngine_Color_o *)&local_18,(MethodInfo *)0x0);
        if (pSVar1 != (System_Text_StringBuilder_o *)0x0) {
          pSVar1 = System_Text_StringBuilder__Append_197dca0(pSVar1,value,(MethodInfo *)0x0);
          if (pSVar1 != (System_Text_StringBuilder_o *)0x0) {
            System_Text_StringBuilder__Append_197e090(pSVar1,0x22,(MethodInfo *)0x0);
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
// 0x1820b8130
// eh: try 0x1820b8320..0x1820b8c56 -> pad 0x18333df50 (+7 call sites) catch Il2CppExceptionWrapper
// asm: 50 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820b831d: nop dword ptr [rax]
// asm:   0x1820b85fe: nop 
// asm:   0x1820b88c6: lea rcx, [rsp + 0x128]
// asm:   0x1820b88ce: call 0x1806aa210  ; il2cpp_runtime_helper_1806aa210()
// asm:   0x1820b88d3: mov rcx, qword ptr [rsp + 0x120]
// asm:   0x1820b88db: test rcx, rcx
// asm:   0x1820b88de: jne 0x1820b8c1b
// asm:   0x1820b88e4: mov rax, qword ptr [rsp + 0xa0]
// asm:   0x1820b88ec: mov qword ptr [rsp + 0x98], rax
// asm:   0x1820b88f4: mov r14d, dword ptr [rsp + 0xd0]
// asm:   0x1820b88fc: movups xmm6, xmmword ptr [rsp + 0xc0]
// asm:   0x1820b8904: mov r15d, dword ptr [rsp + 0xe8]
// asm:   0x1820b890c: movups xmm7, xmmword ptr [rsp + 0xd8]
// asm:   0x1820b8914: mov r12d, dword ptr [rsp + 0x100]
// asm:   0x1820b891c: movups xmm8, xmmword ptr [rsp + 0xf0]
// asm:   0x1820b8925: mov r13d, dword ptr [rsp + 0x118]
// asm:   0x1820b892d: movups xmm9, xmmword ptr [rsp + 0x108]
// asm:   0x1820b8936: mov rsi, qword ptr [rsp + 0x138]
// asm:   0x1820b8a89: lea rcx, [rsp + 0xb0]
// asm:   0x1820b8a91: call 0x1806aa210  ; il2cpp_runtime_helper_1806aa210()
// asm:   0x1820b8a96: mov rcx, qword ptr [rsp + 0xa8]
// asm:   0x1820b8a9e: test rcx, rcx
// asm:   0x1820b8aa1: jne 0x1820b8c56
// asm:   0x1820b8aa7: mov rdi, qword ptr [rsp + 0xa0]
// asm:   0x1820b8aaf: mov ebx, dword ptr [rsp + 0x278]
// asm:   0x1820b8ab6: mov r14, qword ptr [rsp + 0x260]
// asm:   0x1820b8c1b: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1820b8c56: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x18333df20: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333df25: push rbp
// asm:   0x18333df26: sub rsp, 0x20
// asm:   0x18333df2a: mov rbp, rdx
// asm:   0x18333df2d: mov rax, qword ptr [rbp + 0x1c8]
// asm:   0x18333df34: mov rcx, qword ptr [rax]
// asm:   0x18333df37: mov qword ptr [rbp + 0x120], rcx
// asm:   0x18333df3e: movabs rax, 0
// asm:   0x18333df48: add rsp, 0x20
// asm:   0x18333df4c: pop rbp
// asm:   0x18333df4d: ret 
// asm:   0x18333df50: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333df55: push rbp
// asm:   0x18333df56: sub rsp, 0x20
// asm:   0x18333df5a: mov rbp, rdx
// asm:   0x18333df5d: mov rax, qword ptr [rbp + 0x1d0]
// asm:   0x18333df64: mov rcx, qword ptr [rax]
// asm:   0x18333df67: mov qword ptr [rbp + 0xa8], rcx
// asm:   0x18333df6e: movabs rax, 0
// asm:   0x18333df78: add rsp, 0x20
// asm:   0x18333df7c: pop rbp
// asm:   0x18333df7d: ret 

System_Collections_Generic_List_EffectText_Segment__o *
PatreonEffects_EffectText__ParseLine(System_String_o *line,MethodInfo *method)

{
  byte bVar1;
  System_Text_RegularExpressions_Regex_o *pSVar2;
  longlong lVar3;
  int32_t iVar4;
  bool bVar5;
  System_Collections_Generic_List_EffectText_Segment__o *__this;
  System_Text_RegularExpressions_MatchCollection_o *pSVar6;
  void *pvVar7;
  longlong *plVar8;
  System_String_o *pSVar9;
  System_Text_RegularExpressions_GroupCollection_o *pSVar10;
  System_Text_RegularExpressions_Group_o *pSVar11;
  longlong *plVar12;
  System_String_o *hex;
  System_Nullable_Color__o *pSVar13;
  Il2CppObject *obj;
  int startIndex;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined4 uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined4 uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  int32_t local_res18 [2];
  int local_res20;
  Il2CppObject *local_238;
  Il2CppObject *local_230;
  System_String_o *local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  System_Collections_Generic_List_EffectText_Segment__o *local_1c0;
  System_Collections_Generic_List_EffectText_Segment__o *local_1b8;
  undefined8 local_1b0;
  Il2CppObject **local_1a8;
  undefined8 *local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  float local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  float local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  float local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  float local_140;
  undefined8 local_138;
  Il2CppObject **local_130;
  undefined8 *local_128;
  longlong *local_120;
  System_String_o *local_118;
  System_String_o *local_108;
  ulonglong uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  undefined4 uStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  System_Nullable_Color__o local_a8 [5];
  
  if (Il2CppMethodInitialized_184346937 == '\0') {
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
    Il2CppMethodInitialized_184346937 = '\x01';
  }
  startIndex = 0;
  local_238 = (Il2CppObject *)0x0;
  local_228 = (System_String_o *)0x0;
  uStack_220 = 0;
  local_218 = 0;
  uStack_210 = 0;
  local_208 = 0;
  uStack_200 = 0;
  local_1f8 = 0;
  uStack_1f0 = 0;
  local_1e8 = 0;
  uStack_1e0 = 0;
  local_1d8 = 0;
  uStack_1d0 = 0;
  local_230 = (Il2CppObject *)0x0;
  local_1c8 = 0;
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_EffectText_Segment);
  local_1c0 = __this;
  System_Collections_Generic_List_EffectText_Segment____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_EffectText_Segment_ctor);
  if ((TypeInfo_PatreonEffects_EffectText->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_EffectText);
  }
  pSVar2 = TypeInfo_PatreonEffects_EffectText->static_fields->_fxTagRegex;
  if (pSVar2 != (System_Text_RegularExpressions_Regex_o *)0x0) {
    pSVar6 = System_Text_RegularExpressions_Regex__Matches_285d470(pSVar2,line,(MethodInfo *)0x0);
    if (pSVar6 != (System_Text_RegularExpressions_MatchCollection_o *)0x0) {
      local_res20 = 0;
      local_1b8 = __this;
      local_238 = (Il2CppObject *)
                  System_Text_RegularExpressions_MatchCollection__GetEnumerator(pSVar6,(MethodInfo *)0x0);
      local_1b0 = 0;
      local_1a8 = &local_238;
      local_1a0 = &local_1c8;
      while( true ) {
        if (local_238 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pvVar7 = InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,local_238);
        if ((char)pvVar7 == '\0') break;
        if (local_238 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        plVar8 = InterfaceInvoker0_Invoke(1,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,local_238);
        local_120 = plVar8;
        if (plVar8 == (longlong *)0x0) {
          ThrowNullReferenceException();
        }
        bVar1 = (TypeInfo_System_Text_RegularExpressions_Match->_2).typeHierarchyDepth;
        if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
           (*(System_Text_RegularExpressions_Match_c **)
             (*(longlong *)(*plVar8 + 200) + -8 + (ulonglong)bVar1 * 8) !=
            TypeInfo_System_Text_RegularExpressions_Match)) {
          il2cpp_codegen_raise_invalid_cast_exception(plVar8);
        }
        if (startIndex < (int)plVar8[2]) {
          if (line == (System_String_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar9 = System_String__Substring_1972740
                             (line,startIndex,(int)plVar8[2] - startIndex,(MethodInfo *)0x0);
          if (pSVar9 == (System_String_o *)0x0) {
            ThrowNullReferenceException();
          }
          if (0 < (pSVar9->fields)._stringLength) {
            uStack_220 = 0;
            local_218 = 0;
            uStack_210 = 0;
            local_208 = 0;
            uStack_200 = 0;
            local_1f8 = 0;
            uStack_1f0 = 0;
            local_1e8 = 0;
            uStack_1e0 = 0;
            local_1d8 = 0;
            uStack_1d0 = 0;
            local_228 = pSVar9;
            Il2CppCodeGenWriteBarrier(&local_228,pSVar9);
            uStack_220 = uStack_220 & 0xffffffffffffff00;
            if (__this == (System_Collections_Generic_List_EffectText_Segment__o *)0x0) {
              ThrowNullReferenceException();
            }
            local_108 = local_228;
            uStack_100 = uStack_220;
            local_f8 = local_218;
            uStack_f0 = uStack_210;
            local_e8 = local_208;
            uStack_e0 = uStack_200;
            local_d8 = local_1f8;
            uStack_d0 = uStack_1f0;
            local_c8 = (float)local_1e8;
            fStack_c4 = local_1e8._4_4_;
            fStack_c0 = (float)uStack_1e0;
            uStack_bc = uStack_1e0._4_4_;
            local_b8 = (float)local_1d8;
            fStack_b4 = local_1d8._4_4_;
            fStack_b0 = (float)uStack_1d0;
            fStack_ac = uStack_1d0._4_4_;
            il2cpp_runtime_helper_180042e30(__this,&local_108);
          }
        }
        pSVar10 = (System_Text_RegularExpressions_GroupCollection_o *)
                  (**(code **)(*plVar8 + 0x188))(plVar8,*(undefined8 *)(*plVar8 + 400));
        if (pSVar10 == (System_Text_RegularExpressions_GroupCollection_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar11 = System_Text_RegularExpressions_GroupCollection__get_Item_284bfa0
                            (pSVar10,"attrs",(MethodInfo *)0x0);
        if (pSVar11 == (System_Text_RegularExpressions_Group_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar9 = System_Text_RegularExpressions_Capture__ToString
                           ((System_Text_RegularExpressions_Capture_o *)pSVar11,(MethodInfo *)0x0);
        pSVar10 = (System_Text_RegularExpressions_GroupCollection_o *)
                  (**(code **)(*plVar8 + 0x188))(plVar8,*(undefined8 *)(*plVar8 + 400));
        if (pSVar10 == (System_Text_RegularExpressions_GroupCollection_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar11 = System_Text_RegularExpressions_GroupCollection__get_Item_284bfa0
                            (pSVar10,"content",(MethodInfo *)0x0);
        if (pSVar11 == (System_Text_RegularExpressions_Group_o *)0x0) {
          ThrowNullReferenceException();
        }
        local_118 = System_Text_RegularExpressions_Capture__ToString
                              ((System_Text_RegularExpressions_Capture_o *)pSVar11,(MethodInfo *)0x0);
        local_res18[0] = 0;
        uVar18 = 0;
        fVar19 = 0.0;
        fVar20 = 0.0;
        fVar21 = 0.0;
        fVar16 = 0.0;
        local_198 = 0;
        uStack_190 = 0;
        local_188 = 0.0;
        uVar22 = 0;
        fVar23 = 0.0;
        fVar24 = 0.0;
        fVar25 = 0.0;
        fVar17 = 0.0;
        local_180 = 0;
        uStack_178 = 0;
        local_170 = 0.0;
        uVar26 = 0;
        fVar27 = 0.0;
        fVar28 = 0.0;
        fVar29 = 0.0;
        fVar14 = 0.0;
        local_168 = 0;
        uStack_160 = 0;
        local_158 = 0.0;
        uVar30 = 0;
        fVar31 = 0.0;
        fVar32 = 0.0;
        fVar33 = 0.0;
        fVar15 = 0.0;
        local_150 = 0;
        uStack_148 = 0;
        local_140 = 0.0;
        if ((TypeInfo_PatreonEffects_EffectText->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_EffectText);
        }
        pSVar2 = TypeInfo_PatreonEffects_EffectText->static_fields->_attrRegex;
        if (pSVar2 == (System_Text_RegularExpressions_Regex_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar6 = System_Text_RegularExpressions_Regex__Matches_285d470(pSVar2,pSVar9,(MethodInfo *)0x0);
        if (pSVar6 == (System_Text_RegularExpressions_MatchCollection_o *)0x0) {
          ThrowNullReferenceException();
        }
        local_230 = (Il2CppObject *)
                    System_Text_RegularExpressions_MatchCollection__GetEnumerator(pSVar6,(MethodInfo *)0x0);
        local_138 = 0;
        local_130 = &local_230;
        local_128 = &local_1c8;
        while( true ) {
          if (local_230 == (Il2CppObject *)0x0) {
            ThrowNullReferenceException();
          }
          pvVar7 = InterfaceInvoker0_Invoke
                             (0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,local_230);
          if ((char)pvVar7 == '\0') break;
          if (local_230 == (Il2CppObject *)0x0) {
            ThrowNullReferenceException();
          }
          plVar12 = InterfaceInvoker0_Invoke
                              (1,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,local_230);
          if (plVar12 == (longlong *)0x0) {
            ThrowNullReferenceException();
          }
          lVar3 = *plVar12;
          bVar1 = (TypeInfo_System_Text_RegularExpressions_Match->_2).typeHierarchyDepth;
          if ((*(byte *)(lVar3 + 0x130) < bVar1) ||
             (*(System_Text_RegularExpressions_Match_c **)
               (*(longlong *)(lVar3 + 200) + -8 + (ulonglong)bVar1 * 8) !=
              TypeInfo_System_Text_RegularExpressions_Match)) {
            il2cpp_codegen_raise_invalid_cast_exception(plVar12);
          }
          pSVar10 = (System_Text_RegularExpressions_GroupCollection_o *)
                    (**(code **)(lVar3 + 0x188))(plVar12,*(undefined8 *)(lVar3 + 400));
          if (pSVar10 == (System_Text_RegularExpressions_GroupCollection_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar11 = System_Text_RegularExpressions_GroupCollection__get_Item_284bfa0
                              (pSVar10,"key",(MethodInfo *)0x0);
          if (pSVar11 == (System_Text_RegularExpressions_Group_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar9 = System_Text_RegularExpressions_Capture__ToString
                             ((System_Text_RegularExpressions_Capture_o *)pSVar11,(MethodInfo *)0x0);
          if (pSVar9 == (System_String_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar9 = System_String__ToLowerInvariant(pSVar9,(MethodInfo *)0x0);
          pSVar10 = (System_Text_RegularExpressions_GroupCollection_o *)
                    (**(code **)(*plVar12 + 0x188))(plVar12,*(undefined8 *)(*plVar12 + 400));
          if (pSVar10 == (System_Text_RegularExpressions_GroupCollection_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar11 = System_Text_RegularExpressions_GroupCollection__get_Item_284bfa0
                              (pSVar10,"val",(MethodInfo *)0x0);
          if (pSVar11 == (System_Text_RegularExpressions_Group_o *)0x0) {
            ThrowNullReferenceException();
          }
          hex = System_Text_RegularExpressions_Capture__ToString
                          ((System_Text_RegularExpressions_Capture_o *)pSVar11,(MethodInfo *)0x0);
          bVar5 = System_String__op_Equality(pSVar9,"effect",(MethodInfo *)0x0);
          if (bVar5) {
            PatreonEffects_NameEffectPresets__TryResolve(hex,local_res18,(MethodInfo *)0x0);
          }
          else {
            bVar5 = System_String__op_Equality(pSVar9,"a",(MethodInfo *)0x0);
            if (bVar5) {
              if ((TypeInfo_PatreonEffects_EffectText->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_EffectText);
              }
              pSVar13 = PatreonEffects_EffectText__ParseColor(local_a8,hex,(MethodInfo *)0x0);
              uVar18 = *(undefined4 *)&pSVar13->fields;
              fVar19 = (pSVar13->fields).value.fields.r;
              local_198._0_1_ = (pSVar13->fields).hasValue;
              local_198._1_3_ = *(undefined3 *)&(pSVar13->fields).field_0x1;
              local_198._4_4_ = (pSVar13->fields).value.fields.r;
              fVar20 = (pSVar13->fields).value.fields.g;
              fVar21 = (pSVar13->fields).value.fields.b;
              uStack_190._0_4_ = (pSVar13->fields).value.fields.g;
              uStack_190._4_4_ = (pSVar13->fields).value.fields.b;
              fVar16 = (pSVar13->fields).value.fields.a;
              local_188 = fVar16;
            }
            else {
              bVar5 = System_String__op_Equality(pSVar9,"b",(MethodInfo *)0x0);
              if (bVar5) {
                if ((TypeInfo_PatreonEffects_EffectText->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_EffectText);
                }
                pSVar13 = PatreonEffects_EffectText__ParseColor(local_a8,hex,(MethodInfo *)0x0);
                uVar22 = *(undefined4 *)&pSVar13->fields;
                fVar23 = (pSVar13->fields).value.fields.r;
                local_180._0_1_ = (pSVar13->fields).hasValue;
                local_180._1_3_ = *(undefined3 *)&(pSVar13->fields).field_0x1;
                local_180._4_4_ = (pSVar13->fields).value.fields.r;
                fVar24 = (pSVar13->fields).value.fields.g;
                fVar25 = (pSVar13->fields).value.fields.b;
                uStack_178._0_4_ = (pSVar13->fields).value.fields.g;
                uStack_178._4_4_ = (pSVar13->fields).value.fields.b;
                fVar17 = (pSVar13->fields).value.fields.a;
                local_170 = fVar17;
              }
              else {
                bVar5 = System_String__op_Equality(pSVar9,"c",(MethodInfo *)0x0);
                if (bVar5) {
                  if ((TypeInfo_PatreonEffects_EffectText->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_EffectText);
                  }
                  pSVar13 = PatreonEffects_EffectText__ParseColor(local_a8,hex,(MethodInfo *)0x0);
                  uVar26 = *(undefined4 *)&pSVar13->fields;
                  fVar27 = (pSVar13->fields).value.fields.r;
                  local_168._0_1_ = (pSVar13->fields).hasValue;
                  local_168._1_3_ = *(undefined3 *)&(pSVar13->fields).field_0x1;
                  local_168._4_4_ = (pSVar13->fields).value.fields.r;
                  fVar28 = (pSVar13->fields).value.fields.g;
                  fVar29 = (pSVar13->fields).value.fields.b;
                  uStack_160._0_4_ = (pSVar13->fields).value.fields.g;
                  uStack_160._4_4_ = (pSVar13->fields).value.fields.b;
                  fVar14 = (pSVar13->fields).value.fields.a;
                  local_158 = fVar14;
                }
                else {
                  bVar5 = System_String__op_Equality(pSVar9,"d",(MethodInfo *)0x0);
                  if (bVar5) {
                    if ((TypeInfo_PatreonEffects_EffectText->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_EffectText);
                    }
                    pSVar13 = PatreonEffects_EffectText__ParseColor(local_a8,hex,(MethodInfo *)0x0);
                    uVar30 = *(undefined4 *)&pSVar13->fields;
                    fVar31 = (pSVar13->fields).value.fields.r;
                    local_150._0_1_ = (pSVar13->fields).hasValue;
                    local_150._1_3_ = *(undefined3 *)&(pSVar13->fields).field_0x1;
                    local_150._4_4_ = (pSVar13->fields).value.fields.r;
                    fVar32 = (pSVar13->fields).value.fields.g;
                    fVar33 = (pSVar13->fields).value.fields.b;
                    uStack_148._0_4_ = (pSVar13->fields).value.fields.g;
                    uStack_148._4_4_ = (pSVar13->fields).value.fields.b;
                    fVar15 = (pSVar13->fields).value.fields.a;
                    local_140 = fVar15;
                  }
                }
              }
            }
          }
        }
        il2cpp_runtime_helper_1806aa210(&local_130);
        iVar4 = local_res18[0];
        bVar5 = local_res18[0] != 0;
        uStack_220 = 0;
        local_218 = 0;
        uStack_210 = 0;
        local_208 = 0;
        uStack_200 = 0;
        local_1f8 = 0;
        uStack_1f0 = 0;
        local_1e8 = 0;
        uStack_1e0 = 0;
        local_1d8 = 0;
        uStack_1d0 = 0;
        local_228 = local_118;
        Il2CppCodeGenWriteBarrier(&local_228,local_118);
        __this = local_1c0;
        uStack_220 = CONCAT71(uStack_220._1_7_,bVar5);
        uStack_220 = CONCAT44(iVar4,(undefined4)uStack_220);
        local_218 = CONCAT44(fVar19,uVar18);
        uStack_210 = CONCAT44(fVar21,fVar20);
        local_208 = CONCAT44(uVar22,fVar16);
        uStack_200 = CONCAT44(fVar24,fVar23);
        local_1f8 = CONCAT44(fVar17,fVar25);
        uStack_1f0 = CONCAT44(fVar27,uVar26);
        local_1e8 = CONCAT44(fVar29,fVar28);
        uStack_1e0 = CONCAT44(uVar30,fVar14);
        local_1d8 = CONCAT44(fVar32,fVar31);
        uStack_1d0 = CONCAT44(fVar15,fVar33);
        if (local_1c0 == (System_Collections_Generic_List_EffectText_Segment__o *)0x0) {
          ThrowNullReferenceException();
        }
        local_108 = local_228;
        uStack_100 = uStack_220;
        local_f8 = CONCAT44(fVar19,uVar18);
        uStack_f0 = CONCAT44(fVar21,fVar20);
        local_e8 = local_208;
        uStack_e0 = uStack_200;
        local_d8 = local_1f8;
        uStack_d0 = uStack_1f0;
        local_c8 = fVar28;
        fStack_c4 = fVar29;
        fStack_c0 = fVar14;
        uStack_bc = uVar30;
        local_b8 = fVar31;
        fStack_b4 = fVar32;
        fStack_b0 = fVar33;
        fStack_ac = fVar15;
        il2cpp_runtime_helper_180042e30(local_1c0,&local_108,MethodInfo_System_Collections_Generic_List_EffectText_Segment_Add);
        startIndex = *(int *)((longlong)plVar8 + 0x14) + (int)plVar8[2];
        local_res20 = startIndex;
      }
      obj = il2cpp_vm_Object_IsInst(*local_1a8,(Il2CppClass *)TypeInfo_System_IDisposable);
      *local_1a0 = obj;
      if (obj != (Il2CppObject *)0x0) {
        InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,obj);
      }
      if (line != (System_String_o *)0x0) {
        if (startIndex < (line->fields)._stringLength) {
          pSVar9 = System_String__Substring(line,startIndex,(MethodInfo *)0x0);
          if (pSVar9 == (System_String_o *)0x0) goto label_1820b8bcd;
          if (0 < (pSVar9->fields)._stringLength) {
            uStack_220 = 0;
            local_218 = 0;
            uStack_210 = 0;
            local_208 = 0;
            uStack_200 = 0;
            local_1f8 = 0;
            uStack_1f0 = 0;
            local_1e8 = 0;
            uStack_1e0 = 0;
            local_1d8 = 0;
            uStack_1d0 = 0;
            local_228 = pSVar9;
            Il2CppCodeGenWriteBarrier(&local_228,pSVar9);
            uStack_220 = uStack_220 & 0xffffffffffffff00;
            if (__this == (System_Collections_Generic_List_EffectText_Segment__o *)0x0) goto label_1820b8bcd;
            local_108 = local_228;
            uStack_100 = uStack_220;
            local_f8 = local_218;
            uStack_f0 = uStack_210;
            local_e8 = local_208;
            uStack_e0 = uStack_200;
            local_d8 = local_1f8;
            uStack_d0 = uStack_1f0;
            local_c8 = (float)local_1e8;
            fStack_c4 = local_1e8._4_4_;
            fStack_c0 = (float)uStack_1e0;
            uStack_bc = uStack_1e0._4_4_;
            local_b8 = (float)local_1d8;
            fStack_b4 = local_1d8._4_4_;
            fStack_b0 = (float)uStack_1d0;
            fStack_ac = uStack_1d0._4_4_;
            il2cpp_runtime_helper_180042e30(__this,&local_108,MethodInfo_System_Collections_Generic_List_EffectText_Segment_Add)
            ;
          }
        }
        return __this;
      }
    }
  }
label_1820b8bcd:
  ThrowNullReferenceException();
}


// PatreonEffects.EffectText$$ParseColor
// il2cpp: System_Nullable_Color__o PatreonEffects_EffectText__ParseColor (System_String_o* hex, const MethodInfo* method);
// 0x1820b8030

System_Nullable_Color__o *
PatreonEffects_EffectText__ParseColor
          (System_Nullable_Color__o *__return_storage_ptr__,System_String_o *hex,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Color_Fields local_48;
  UnityEngine_Color_Fields local_38;
  System_Nullable_Vector4__Fields local_28;
  
  if (Il2CppMethodInitialized_184346938 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Color_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&"#");
    Il2CppMethodInitialized_184346938 = '\x01';
  }
  local_48.r = 0.0;
  local_48.g = 0.0;
  local_48.b = 0.0;
  local_48.a = 0.0;
  bVar1 = System_String__IsNullOrEmpty(hex,(MethodInfo *)0x0);
  if (!bVar1) {
    if (hex == (System_String_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar1 = System_String__StartsWith(hex,"#",(MethodInfo *)0x0);
    if (!bVar1) {
      hex = System_String__Concat_1969e50("#",hex,(MethodInfo *)0x0);
    }
    bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                      (hex,(UnityEngine_Color_o *)&local_48,(MethodInfo *)0x0);
    if (bVar1) {
      local_28.hasValue = false;
      local_28._1_3_ = 0;
      local_28.value.fields.x = 0.0;
      local_28.value.fields.y = 0.0;
      local_28.value.fields.z = 0.0;
      local_28.value.fields.w = 0.0;
      local_38.r = local_48.r;
      local_38.g = local_48.g;
      local_38.b = local_48.b;
      local_38.a = local_48.a;
      System_Nullable_Vector4____ctor
                ((System_Nullable_Vector4__o *)&local_28,(UnityEngine_Vector4_o *)&local_38,
                 (MethodInfo_AE2670 *)MethodInfo_System_Nullable_Color_ctor);
      goto label_1820b8109;
    }
  }
  local_28.hasValue = false;
  local_28._1_3_ = 0;
  local_28.value.fields.x = 0.0;
  local_28.value.fields.y = 0.0;
  local_28.value.fields.z = 0.0;
  local_28.value.fields.w = 0.0;
label_1820b8109:
  (__return_storage_ptr__->fields).hasValue = local_28.hasValue;
  *(int3 *)&(__return_storage_ptr__->fields).field_0x1 = local_28._1_3_;
  (__return_storage_ptr__->fields).value.fields.r = local_28.value.fields.x;
  (__return_storage_ptr__->fields).value.fields.g = local_28.value.fields.y;
  (__return_storage_ptr__->fields).value.fields.b = local_28.value.fields.z;
  (__return_storage_ptr__->fields).value.fields.a = local_28.value.fields.w;
  return __return_storage_ptr__;
}


// PatreonEffects.EffectText$$Rebuild
// il2cpp: void PatreonEffects_EffectText__Rebuild (PatreonEffects_EffectText_o* __this, const MethodInfo* method);
// 0x1820b8c60
// eh: try 0x1820b8e40..0x1820b941e -> pad 0x183316e50 (+2 call sites) catch Il2CppExceptionWrapper
// asm: 47 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820b8e3e: nop 
// asm:   0x1820b8eb2: mov rdx, qword ptr [rip + 0x1fc762f]  ; MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose
// asm:   0x1820b8eb9: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1820b8ebe: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1820b8ec3: mov rcx, qword ptr [rsp + 0x20]
// asm:   0x1820b8ec8: test rcx, rcx
// asm:   0x1820b8ecb: jne 0x1820b93e2
// asm:   0x1820b8ed1: mov rsi, qword ptr [rsp + 0x1f0]
// asm:   0x1820b8f56: xorps xmm12, xmm12
// asm:   0x1820b8f5a: nop word ptr [rax + rax]
// asm:   0x1820b9324: mov rdx, qword ptr [rip + 0x1fe9315]  ; MethodInfo_System_Collections_Generic_List_Enumerator_EffectText_Segment_Dispose
// asm:   0x1820b932b: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1820b9330: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1820b9335: mov rcx, qword ptr [rsp + 0x20]
// asm:   0x1820b933a: test rcx, rcx
// asm:   0x1820b933d: jne 0x1820b941e
// asm:   0x1820b9343: mov rsi, qword ptr [rsp + 0x1f0]
// asm:   0x1820b934b: mov r13, qword ptr [rsp + 0x208]
// asm:   0x1820b9353: mov r14d, dword ptr [rsp + 0x200]
// asm:   0x1820b935b: xorps xmm12, xmm12
// asm:   0x1820b935f: inc r14d
// asm:   0x1820b9362: mov dword ptr [rsp + 0x200], r14d
// asm:   0x1820b936a: jmp 0x1820b8f60
// asm:   0x1820b93e2: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1820b941e: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183316e50: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183316e55: push rbp
// asm:   0x183316e56: sub rsp, 0x20
// asm:   0x183316e5a: mov rbp, rdx
// asm:   0x183316e5d: mov rax, qword ptr [rbp + 0x130]
// asm:   0x183316e64: mov rcx, qword ptr [rax]
// asm:   0x183316e67: mov qword ptr [rbp + 0x20], rcx
// asm:   0x183316e6b: movabs rax, 0
// asm:   0x183316e75: add rsp, 0x20
// asm:   0x183316e79: pop rbp
// asm:   0x183316e7a: ret 
// asm:   0x18333df90: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333df95: push rbp
// asm:   0x18333df96: sub rsp, 0x20
// asm:   0x18333df9a: mov rbp, rdx
// asm:   0x18333df9d: mov rax, qword ptr [rbp + 0x138]
// asm:   0x18333dfa4: mov rcx, qword ptr [rax]
// asm:   0x18333dfa7: mov qword ptr [rbp + 0x20], rcx
// asm:   0x18333dfab: movabs rax, 0
// asm:   0x18333dfb5: add rsp, 0x20
// asm:   0x18333dfb9: pop rbp
// asm:   0x18333dfba: ret 

void PatreonEffects_EffectText__Rebuild(PatreonEffects_EffectText_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  int length;
  System_Collections_Generic_List_GameObject__o *pSVar3;
  System_String_o *pSVar4;
  Il2CppType *handle;
  UnityEngine_Object_o *x;
  uint64_t uVar5;
  System_Collections_Generic_List_T__o *pSVar6;
  uint64_t uVar7;
  System_Collections_Generic_List_T__o *pSVar8;
  uint64_t uVar9;
  System_Collections_Generic_List_T__o *pSVar10;
  uint64_t uVar11;
  System_Collections_Generic_List_T__o *pSVar12;
  uint64_t uVar13;
  System_Collections_Generic_List_T__o *pSVar14;
  uint64_t uVar15;
  bool bVar16;
  System_String_array *pSVar17;
  System_Collections_Generic_List_EffectText_Segment__o *__this_00;
  System_Type_array *components;
  System_Type_o *pSVar18;
  Il2CppObject *pIVar19;
  UnityEngine_GameObject_o *pUVar20;
  UnityEngine_Transform_o *pUVar21;
  UnityEngine_Transform_o *parent;
  UnityEngine_UI_HorizontalLayoutGroup_o *__this_01;
  UnityEngine_UI_ContentSizeFitter_o *__this_02;
  UnityEngine_GameObject_o *pUVar22;
  uint uVar23;
  undefined1 local_1c8 [16];
  UnityEngine_Object_o *local_1b8;
  undefined1 local_1b0 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_1a8;
  UnityEngine_Object_o *local_1a0;
  System_Collections_Generic_List_Enumerator_T__o local_198;
  uint64_t uStack_180;
  System_Collections_Generic_List_T__o *local_178;
  uint64_t uStack_170;
  System_Collections_Generic_List_T__o *local_168;
  uint64_t uStack_160;
  System_Collections_Generic_List_T__o *local_158;
  uint64_t uStack_150;
  System_Collections_Generic_List_T__o *local_148;
  uint64_t uStack_140;
  System_Collections_Generic_List_T__o *local_138;
  uint64_t uStack_130;
  undefined1 local_128 [24];
  uint64_t uStack_110;
  System_Collections_Generic_List_T__o *local_108;
  uint64_t uStack_100;
  System_Collections_Generic_List_T__o *local_f8;
  uint64_t uStack_f0;
  System_Collections_Generic_List_T__o *local_e8;
  uint64_t uStack_e0;
  System_Collections_Generic_List_T__o *local_d8;
  uint64_t uStack_d0;
  System_Collections_Generic_List_T__o *local_c8;
  uint64_t uStack_c0;
  
  if (Il2CppMethodInitialized_184346939 == '\0') {
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
    il2cpp_codegen_initialize_runtime_metadata(&"EffectTextRow");
    Il2CppMethodInitialized_184346939 = '\x01';
  }
  local_1b0 = (undefined1  [8])0x0;
  pUStack_1a8 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_1a0 = (UnityEngine_Object_o *)0x0;
  local_198.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_198.fields._index = 0;
  local_198.fields._version = 0;
  local_198.fields._current = (Il2CppObject *)0x0;
  uStack_180 = 0;
  local_178 = (System_Collections_Generic_List_T__o *)0x0;
  uStack_170 = 0;
  local_168 = (System_Collections_Generic_List_T__o *)0x0;
  uStack_160 = 0;
  local_158 = (System_Collections_Generic_List_T__o *)0x0;
  uStack_150 = 0;
  local_148 = (System_Collections_Generic_List_T__o *)0x0;
  uStack_140 = 0;
  local_138 = (System_Collections_Generic_List_T__o *)0x0;
  uStack_130 = 0;
  pSVar3 = (__this->fields)._segments;
  if (pSVar3 != (System_Collections_Generic_List_GameObject__o *)0x0) {
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_1c8,
               (System_Collections_Generic_List_T__o *)pSVar3,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_GameObject_GetEnumerator);
    local_1b0 = (undefined1  [8])local_1c8._0_8_;
    pUStack_1a8 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_1c8._8_8_;
    local_1a0 = local_1b8;
    local_1c8._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_1c8._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_1b0;
    while (bVar16 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              ((System_Collections_Generic_List_Enumerator_object__o *)local_1b0,
                               (MethodInfo_153A2A0 *)
                               MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_MoveNext),
          x = local_1a0, bVar16) {
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar16 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar16) {
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        UnityEngine_Object__Destroy_2f1ff70(x,(MethodInfo *)0x0);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_1b0,
               MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose);
    pSVar3 = (__this->fields)._segments;
    if (pSVar3 != (System_Collections_Generic_List_GameObject__o *)0x0) {
      piVar1 = &(pSVar3->fields)._version;
      *piVar1 = *piVar1 + 1;
      length = (pSVar3->fields)._size;
      (pSVar3->fields)._size = 0;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,length,(MethodInfo *)0x0);
      }
      bVar16 = System_String__IsNullOrEmpty((__this->fields)._text,(MethodInfo *)0x0);
      if (bVar16) {
        return;
      }
      pSVar4 = (__this->fields)._text;
      if (pSVar4 != (System_String_o *)0x0) {
        pSVar17 = System_String__Split(pSVar4,10,0,(MethodInfo *)0x0);
        uVar23 = 0;
        if (pSVar17 != (System_String_array *)0x0) {
          do {
            uVar2 = (uint)pSVar17->max_length;
            if ((int)uVar2 <= (int)uVar23) {
              return;
            }
            if (uVar2 <= uVar23) goto label_1820b9424;
            pSVar4 = pSVar17->m_Items[(int)uVar23];
            if ((TypeInfo_PatreonEffects_EffectText->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_EffectText);
            }
            __this_00 = PatreonEffects_EffectText__ParseLine(pSVar4,(MethodInfo *)0x0);
            if (__this_00 == (System_Collections_Generic_List_EffectText_Segment__o *)0x0) break;
            if ((__this_00->fields)._size == 0) {
              pSVar3 = (__this->fields)._segments;
              pUVar20 = PatreonEffects_EffectText__CreateSpacerRow(__this,(MethodInfo *)0x0);
              if (pSVar3 == (System_Collections_Generic_List_GameObject__o *)0x0) break;
              il2cpp_runtime_helper_180012890(pSVar3,pUVar20,MethodInfo_System_Collections_Generic_List_GameObject_Add);
            }
            else {
              components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,3);
              handle = TypeRef_UnityEngine_RectTransform;
              if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init(g_data_184354ea0);
              }
              pSVar18 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
              if (components == (System_Type_array *)0x0) break;
              if ((pSVar18 != (System_Type_o *)0x0) &&
                 (pIVar19 = il2cpp_vm_Object_IsInst
                                      ((Il2CppObject *)pSVar18,(((components->obj).klass)->_1).element_class),
                 pIVar19 == (Il2CppObject *)0x0)) {
                pIVar19 = il2cpp_codegen_get_array_type_mismatch_exception();
                il2cpp_codegen_raise_exception(pIVar19,(MethodInfo *)0x0);
              }
              if ((int)components->max_length == 0) {
label_1820b9424:
                ThrowIndexOutOfRangeException();
              }
              components->m_Items[0] = pSVar18;
              Il2CppCodeGenWriteBarrier(components->m_Items,pSVar18);
              pSVar18 = System_Type__GetTypeFromHandle
                                  ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_HorizontalLayoutGroup,
                                   (MethodInfo *)0x0);
              if ((pSVar18 != (System_Type_o *)0x0) &&
                 (pIVar19 = il2cpp_vm_Object_IsInst
                                      ((Il2CppObject *)pSVar18,(((components->obj).klass)->_1).element_class),
                 pIVar19 == (Il2CppObject *)0x0)) {
                pIVar19 = il2cpp_codegen_get_array_type_mismatch_exception();
                il2cpp_codegen_raise_exception(pIVar19,(MethodInfo *)0x0);
              }
              if ((uint)components->max_length < 2) goto label_1820b9424;
              components->m_Items[1] = pSVar18;
              Il2CppCodeGenWriteBarrier(components->m_Items + 1,pSVar18);
              pSVar18 = System_Type__GetTypeFromHandle
                                  ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_ContentSizeFitter,
                                   (MethodInfo *)0x0);
              if ((pSVar18 != (System_Type_o *)0x0) &&
                 (pIVar19 = il2cpp_vm_Object_IsInst
                                      ((Il2CppObject *)pSVar18,(((components->obj).klass)->_1).element_class),
                 pIVar19 == (Il2CppObject *)0x0)) {
                pIVar19 = il2cpp_codegen_get_array_type_mismatch_exception();
                il2cpp_codegen_raise_exception(pIVar19,(MethodInfo *)0x0);
              }
              if ((uint)components->max_length < 3) goto label_1820b9424;
              components->m_Items[2] = pSVar18;
              Il2CppCodeGenWriteBarrier(components->m_Items + 2,pSVar18);
              pUVar20 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
              UnityEngine_GameObject___ctor_2f1abe0
                        (pUVar20,"EffectTextRow",components,(MethodInfo *)0x0);
              if (pUVar20 == (UnityEngine_GameObject_o *)0x0) break;
              pUVar21 = UnityEngine_GameObject__get_transform(pUVar20,(MethodInfo *)0x0);
              parent = UnityEngine_Component__get_transform
                                 ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
              if (pUVar21 == (UnityEngine_Transform_o *)0x0) break;
              UnityEngine_Transform__SetParent_2f5a7e0(pUVar21,parent,false,(MethodInfo *)0x0);
              __this_01 = UnityEngine_GameObject__GetComponent_object_
                                    (pUVar20,(MethodInfo_6F5650 *)
                                             MethodInfo_UnityEngine_GameObject_GetComponent_HorizontalLayoutGroup
                                    );
              if (__this_01 == (UnityEngine_UI_HorizontalLayoutGroup_o *)0x0) break;
              UnityEngine_UI_LayoutGroup__set_childAlignment
                        ((UnityEngine_UI_LayoutGroup_o *)__this_01,3,(MethodInfo *)0x0);
              UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandWidth
                        ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_01,false,(MethodInfo *)0x0
                        );
              UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandHeight
                        ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_01,false,(MethodInfo *)0x0
                        );
              UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
                        ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_01,0.0,(MethodInfo *)0x0);
              __this_02 = UnityEngine_GameObject__GetComponent_object_
                                    (pUVar20,(MethodInfo_6F5650 *)
                                             MethodInfo_UnityEngine_GameObject_GetComponent_ContentSizeFitter)
              ;
              if (__this_02 == (UnityEngine_UI_ContentSizeFitter_o *)0x0) break;
              UnityEngine_UI_ContentSizeFitter__set_horizontalFit(__this_02,2,(MethodInfo *)0x0);
              UnityEngine_UI_ContentSizeFitter__set_verticalFit(__this_02,2,(MethodInfo *)0x0);
              pSVar3 = (__this->fields)._segments;
              if (pSVar3 == (System_Collections_Generic_List_GameObject__o *)0x0) break;
              il2cpp_runtime_helper_180012890(pSVar3,pUVar20,MethodInfo_System_Collections_Generic_List_GameObject_Add);
              System_Collections_Generic_List_MapLoader_NavMeshBuild___GetEnumerator
                        ((System_Collections_Generic_List_Enumerator_T__o *)local_128,
                         (System_Collections_Generic_List_MapLoader_NavMeshBuild__o *)__this_00,
                         (MethodInfo_942C90 *)
                         MethodInfo_System_Collections_Generic_List_EffectText_Segment_GetEnumerator);
              local_198.fields._list = (System_Collections_Generic_List_T__o *)local_128._0_8_;
              local_198.fields._index = local_128._8_4_;
              local_198.fields._version = local_128._12_4_;
              local_198.fields._current = (Il2CppObject *)local_128._16_8_;
              uStack_180 = uStack_110;
              local_178 = local_108;
              uStack_170 = uStack_100;
              local_168 = local_f8;
              uStack_160 = uStack_f0;
              local_158 = local_e8;
              uStack_150 = uStack_e0;
              local_148 = local_d8;
              uStack_140 = uStack_d0;
              local_138 = local_c8;
              uStack_130 = uStack_c0;
              local_1c8._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
              local_1c8._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_198;
              while (bVar16 = System_Collections_Generic_List_Enumerator_MapLoader_NavMeshBuild___MoveNext
                                        (&local_198,
                                         (MethodInfo_1559590 *)
                                         MethodInfo_System_Collections_Generic_List_Enumerator_EffectText_Segment_MoveNext
                                        ), uVar15 = uStack_130, pSVar14 = local_138, uVar13 = uStack_140,
                    pSVar12 = local_148, uVar11 = uStack_150, pSVar10 = local_158, uVar9 = uStack_160,
                    pSVar8 = local_168, uVar7 = uStack_170, pSVar6 = local_178, uVar5 = uStack_180,
                    pIVar19 = local_198.fields._current, bVar16) {
                pUVar21 = UnityEngine_GameObject__get_transform(pUVar20,(MethodInfo *)0x0);
                local_128._0_8_ = pIVar19;
                local_128._8_8_ = uVar5;
                local_128._16_8_ = pSVar6;
                uStack_110 = uVar7;
                local_108 = pSVar8;
                uStack_100 = uVar9;
                local_f8 = pSVar10;
                uStack_f0 = uVar11;
                local_e8 = pSVar12;
                uStack_e0 = uVar13;
                local_d8 = pSVar14;
                uStack_d0 = uVar15;
                pUVar22 = PatreonEffects_EffectText__CreateSegmentGO
                                    (__this,pUVar21,(PatreonEffects_EffectText_Segment_o *)local_128,
                                     (MethodInfo *)0x0);
                pSVar3 = (__this->fields)._segments;
                if (pSVar3 == (System_Collections_Generic_List_GameObject__o *)0x0) {
                  ThrowNullReferenceException();
                }
                il2cpp_runtime_helper_180012890(pSVar3,pUVar22,MethodInfo_System_Collections_Generic_List_GameObject_Add);
              }
              System_Collections_Generic_List_Enumerator_EffectText_Segment___Dispose
                        ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_198,
                         MethodInfo_System_Collections_Generic_List_Enumerator_EffectText_Segment_Dispose);
            }
            uVar23 = uVar23 + 1;
          } while( true );
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// PatreonEffects.EffectText$$CreateSegmentGO
// il2cpp: UnityEngine_GameObject_o* PatreonEffects_EffectText__CreateSegmentGO (PatreonEffects_EffectText_o* __this, UnityEngine_Transform_o* parent, PatreonEffects_EffectText_Segment_o seg, const MethodInfo* method);
// 0x1820b7640

UnityEngine_GameObject_o *
PatreonEffects_EffectText__CreateSegmentGO
          (PatreonEffects_EffectText_o *__this,UnityEngine_Transform_o *parent,
          PatreonEffects_EffectText_Segment_o *seg,MethodInfo *method)

{
  TMPro_TMP_FontAsset_o *x;
  undefined4 type;
  Il2CppType *handle;
  bool bVar1;
  System_Type_array *components;
  System_Type_o *pSVar2;
  Il2CppObject *pIVar3;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  TMPro_TextMeshProUGUI_o *__this_02;
  System_String_o *text;
  UnityEngine_Vector2_o UVar4;
  UnityEngine_Vector2_o UVar5;
  UnityEngine_UI_LayoutElement_o *pUVar6;
  PatreonEffects_NameEffectController_o *__this_03;
  PatreonEffects_NameEffectSettings_o *settings;
  float fVar7;
  float fVar8;
  UnityEngine_Color_o local_d8 [10];
  
  if (Il2CppMethodInitialized_18434693a == '\0') {
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
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_TMPro_TextMeshProUGUI);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&"Segment");
    il2cpp_codegen_initialize_runtime_metadata(&"|");
    Il2CppMethodInitialized_18434693a = '\x01';
  }
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,4);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  pSVar2 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) goto label_1820b7c19;
  if (pSVar2 != (System_Type_o *)0x0) {
    pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar2,(((components->obj).klass)->_1).element_class);
    if (pIVar3 == (Il2CppObject *)0x0) {
      pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
    }
  }
  if ((int)components->max_length != 0) {
    components->m_Items[0] = pSVar2;
    Il2CppCodeGenWriteBarrier(components->m_Items,pSVar2);
    pSVar2 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_CanvasRenderer,(MethodInfo *)0x0);
    if (pSVar2 != (System_Type_o *)0x0) {
      pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar2,(((components->obj).klass)->_1).element_class);
      if (pIVar3 == (Il2CppObject *)0x0) {
        pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
      }
    }
    if (1 < (uint)components->max_length) {
      components->m_Items[1] = pSVar2;
      Il2CppCodeGenWriteBarrier(components->m_Items + 1,pSVar2);
      pSVar2 = System_Type__GetTypeFromHandle
                         ((System_RuntimeTypeHandle_o)TypeRef_TMPro_TextMeshProUGUI,(MethodInfo *)0x0);
      if (pSVar2 != (System_Type_o *)0x0) {
        pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar2,(((components->obj).klass)->_1).element_class)
        ;
        if (pIVar3 == (Il2CppObject *)0x0) {
          pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
        }
      }
      if (2 < (uint)components->max_length) {
        components->m_Items[2] = pSVar2;
        Il2CppCodeGenWriteBarrier(components->m_Items + 2,pSVar2);
        pSVar2 = System_Type__GetTypeFromHandle
                           ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_LayoutElement,(MethodInfo *)0x0
                           );
        if (pSVar2 != (System_Type_o *)0x0) {
          pIVar3 = il2cpp_vm_Object_IsInst
                             ((Il2CppObject *)pSVar2,(((components->obj).klass)->_1).element_class);
          if (pIVar3 == (Il2CppObject *)0x0) {
            pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
          }
        }
        if (3 < (uint)components->max_length) {
          components->m_Items[3] = pSVar2;
          Il2CppCodeGenWriteBarrier(components->m_Items + 3,pSVar2);
          __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
          UnityEngine_GameObject___ctor_2f1abe0(__this_00,"Segment",components,(MethodInfo *)0x0);
          if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
            __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
            if (__this_01 != (UnityEngine_Transform_o *)0x0) {
              UnityEngine_Transform__SetParent_2f5a7e0(__this_01,parent,false,(MethodInfo *)0x0);
              __this_02 = UnityEngine_GameObject__GetComponent_object_
                                    (__this_00,
                                     (MethodInfo_6F5650 *)
                                     MethodInfo_UnityEngine_GameObject_GetComponent_TextMeshProUGUI);
              if (__this_02 != (TMPro_TextMeshProUGUI_o *)0x0) {
                (*(__this_02->klass->vtable)._66_set_text.methodPtr)
                          (__this_02,(seg->fields).Content,(__this_02->klass->vtable)._66_set_text.method);
                x = (__this->fields)._font;
                if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                }
                bVar1 = UnityEngine_Object__op_Inequality
                                  ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                if (bVar1) {
                  TMPro_TMP_Text__set_font
                            ((TMPro_TMP_Text_o *)__this_02,(__this->fields)._font,(MethodInfo *)0x0);
                }
                TMPro_TMP_Text__set_fontSize
                          ((TMPro_TMP_Text_o *)__this_02,(__this->fields)._fontSize,(MethodInfo *)0x0);
                if ((seg->fields).HasEffect == false) {
                  local_d8[0].fields.r = (__this->fields)._color.fields.r;
                  local_d8[0].fields.g = (__this->fields)._color.fields.g;
                  local_d8[0].fields.b = (__this->fields)._color.fields.b;
                  local_d8[0].fields.a = (__this->fields)._color.fields.a;
                }
                else {
                  local_d8[0].fields.r = 1.0;
                  local_d8[0].fields.g = 1.0;
                  local_d8[0].fields.b = local_d8[0].fields.g;
                  local_d8[0].fields.a = local_d8[0].fields.g;
                }
                (*(__this_02->klass->vtable)._23_set_color.methodPtr)
                          (__this_02,local_d8,(__this_02->klass->vtable)._23_set_color.method);
                TMPro_TMP_Text__set_alignment
                          ((TMPro_TMP_Text_o *)__this_02,(__this->fields)._alignment,(MethodInfo *)0x0);
                TMPro_TMP_Text__set_richText
                          ((TMPro_TMP_Text_o *)__this_02,(__this->fields)._richText,(MethodInfo *)0x0);
                TMPro_TMP_Text__set_enableWordWrapping((TMPro_TMP_Text_o *)__this_02,false,(MethodInfo *)0x0);
                TMPro_TMP_Text__set_overflowMode((TMPro_TMP_Text_o *)__this_02,0,(MethodInfo *)0x0);
                text = System_String__Concat_1969e50
                                 ((seg->fields).Content,"|",(MethodInfo *)0x0);
                UVar4 = TMPro_TMP_Text__GetPreferredValues_2d12740
                                  ((TMPro_TMP_Text_o *)__this_02,text,3.4028235e+38,3.4028235e+38,
                                   (MethodInfo *)0x0);
                UVar5 = TMPro_TMP_Text__GetPreferredValues_2d12740
                                  ((TMPro_TMP_Text_o *)__this_02,"|",3.4028235e+38,
                                   3.4028235e+38,(MethodInfo *)0x0);
                fVar8 = UVar4.fields.x - UVar5.fields.x;
                if (fVar8 <= 0.0) {
                  fVar8 = 0.0;
                }
                fVar7 = (*(__this_02->klass->vtable)._85_get_preferredHeight.methodPtr)
                                  (__this_02,(__this_02->klass->vtable)._85_get_preferredHeight.method);
                pUVar6 = UnityEngine_GameObject__GetComponent_object_
                                   (__this_00,
                                    (MethodInfo_6F5650 *)
                                    MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
                if (fVar8 <= 0.0) {
                  fVar8 = 0.0;
                }
                if (pUVar6 != (UnityEngine_UI_LayoutElement_o *)0x0) {
                  (*(pUVar6->klass->vtable)._36_set_preferredWidth.methodPtr)
                            (pUVar6,fVar8,(pUVar6->klass->vtable)._36_set_preferredWidth.method);
                  (*(pUVar6->klass->vtable)._38_set_preferredHeight.methodPtr)
                            (pUVar6,fVar7,(pUVar6->klass->vtable)._38_set_preferredHeight.method);
                  if ((seg->fields).HasEffect != false) {
                    __this_03 = UnityEngine_GameObject__AddComponent_object_
                                          (__this_00,
                                           (MethodInfo_6F4D60 *)
                                           MethodInfo_UnityEngine_GameObject_AddComponent_NameEffectController
                                          );
                    if (__this_03 == (PatreonEffects_NameEffectController_o *)0x0) goto label_1820b7c19;
                    bVar1 = PatreonEffects_NameEffectController__FindText(__this_03,(MethodInfo *)0x0);
                    if (bVar1) {
                      (__this_03->fields).cleared = false;
                      bVar1 = PatreonEffects_NameEffectController__RefreshOriginalMaterial
                                        (__this_03,(MethodInfo *)0x0);
                      if (bVar1) {
                        (__this_03->fields).runtimeMat = (UnityEngine_Material_o *)0x0;
                        Il2CppCodeGenWriteBarrier(&(__this_03->fields).runtimeMat,(void *)0x0);
                        (__this_03->fields).initialized = false;
                      }
                    }
                    type = (seg->fields).Effect;
                    settings = PatreonEffects_NameEffectPresets__GetPreset(type,(MethodInfo *)0x0);
                    if ((seg->fields).ColorA.fields.hasValue != false) {
                      System_Nullable_Vector4___get_Value
                                ((UnityEngine_Vector4_o *)local_d8,
                                 (System_Nullable_Vector4__o *)&(seg->fields).ColorA,
                                 (MethodInfo_AE2AC0 *)MethodInfo_System_Nullable_Color_get_Value);
                      if (settings == (PatreonEffects_NameEffectSettings_o *)0x0) goto label_1820b7c19;
                      (settings->fields).gradientA.fields.r = local_d8[0].fields.r;
                      (settings->fields).gradientA.fields.g = local_d8[0].fields.g;
                      (settings->fields).gradientA.fields.b = local_d8[0].fields.b;
                      (settings->fields).gradientA.fields.a = local_d8[0].fields.a;
                    }
                    if ((seg->fields).ColorB.fields.hasValue != false) {
                      System_Nullable_Vector4___get_Value
                                ((UnityEngine_Vector4_o *)local_d8,
                                 (System_Nullable_Vector4__o *)&(seg->fields).ColorB,
                                 (MethodInfo_AE2AC0 *)MethodInfo_System_Nullable_Color_get_Value);
                      if (settings == (PatreonEffects_NameEffectSettings_o *)0x0) goto label_1820b7c19;
                      (settings->fields).gradientB.fields.r = local_d8[0].fields.r;
                      (settings->fields).gradientB.fields.g = local_d8[0].fields.g;
                      (settings->fields).gradientB.fields.b = local_d8[0].fields.b;
                      (settings->fields).gradientB.fields.a = local_d8[0].fields.a;
                    }
                    if ((seg->fields).ColorC.fields.hasValue != false) {
                      System_Nullable_Vector4___get_Value
                                ((UnityEngine_Vector4_o *)local_d8,
                                 (System_Nullable_Vector4__o *)&(seg->fields).ColorC,
                                 (MethodInfo_AE2AC0 *)MethodInfo_System_Nullable_Color_get_Value);
                      if (settings == (PatreonEffects_NameEffectSettings_o *)0x0) goto label_1820b7c19;
                      (settings->fields).gradientC.fields.r = local_d8[0].fields.r;
                      (settings->fields).gradientC.fields.g = local_d8[0].fields.g;
                      (settings->fields).gradientC.fields.b = local_d8[0].fields.b;
                      (settings->fields).gradientC.fields.a = local_d8[0].fields.a;
                    }
                    if ((seg->fields).ColorD.fields.hasValue != false) {
                      System_Nullable_Vector4___get_Value
                                ((UnityEngine_Vector4_o *)local_d8,
                                 (System_Nullable_Vector4__o *)&(seg->fields).ColorD,
                                 (MethodInfo_AE2AC0 *)MethodInfo_System_Nullable_Color_get_Value);
                      if (settings == (PatreonEffects_NameEffectSettings_o *)0x0) goto label_1820b7c19;
                      (settings->fields).gradientD.fields.r = local_d8[0].fields.r;
                      (settings->fields).gradientD.fields.g = local_d8[0].fields.g;
                      (settings->fields).gradientD.fields.b = local_d8[0].fields.b;
                      (settings->fields).gradientD.fields.a = local_d8[0].fields.a;
                    }
                    PatreonEffects_NameEffectController__Apply(__this_03,settings,(MethodInfo *)0x0);
                  }
                  return __this_00;
                }
              }
            }
          }
label_1820b7c19:
          ThrowNullReferenceException();
        }
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// PatreonEffects.EffectText$$CreateSpacerRow
// il2cpp: UnityEngine_GameObject_o* PatreonEffects_EffectText__CreateSpacerRow (PatreonEffects_EffectText_o* __this, const MethodInfo* method);
// 0x1820b7c60

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
  
  if (Il2CppMethodInitialized_18434693b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&"EffectTextSpacer");
    Il2CppMethodInitialized_18434693b = '\x01';
  }
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,2);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  pSVar1 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) {
label_1820b7e46:
    ThrowNullReferenceException();
  }
  if (pSVar1 != (System_Type_o *)0x0) {
    pIVar2 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar1,(((components->obj).klass)->_1).element_class);
    if (pIVar2 == (Il2CppObject *)0x0) {
      pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
    }
  }
  if ((int)components->max_length != 0) {
    components->m_Items[0] = pSVar1;
    Il2CppCodeGenWriteBarrier(components->m_Items,pSVar1);
    pSVar1 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_LayoutElement,(MethodInfo *)0x0);
    if (pSVar1 != (System_Type_o *)0x0) {
      pIVar2 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar1,(((components->obj).klass)->_1).element_class);
      if (pIVar2 == (Il2CppObject *)0x0) {
        pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
      }
    }
    if (1 < (uint)components->max_length) {
      components->m_Items[1] = pSVar1;
      Il2CppCodeGenWriteBarrier(components->m_Items + 1,pSVar1);
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
      UnityEngine_GameObject___ctor_2f1abe0(__this_00,"EffectTextSpacer",components,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
        __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
        parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (__this_01 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__SetParent_2f5a7e0(__this_01,parent,false,(MethodInfo *)0x0);
          pUVar3 = UnityEngine_GameObject__GetComponent_object_
                             (__this_00,
                              (MethodInfo_6F5650 *)
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
      goto label_1820b7e46;
    }
  }
  ThrowIndexOutOfRangeException();
}


// PatreonEffects.EffectText$$ApplyFontSize
// il2cpp: void PatreonEffects_EffectText__ApplyFontSize (PatreonEffects_EffectText_o* __this, const MethodInfo* method);
// 0x1820b71c0

void PatreonEffects_EffectText__ApplyFontSize(PatreonEffects_EffectText_o *__this,MethodInfo *method)

{
  PatreonEffects_EffectText__Rebuild(__this,(MethodInfo *)0x0);
  return;
}


// PatreonEffects.EffectText$$ApplyColor
// il2cpp: void PatreonEffects_EffectText__ApplyColor (PatreonEffects_EffectText_o* __this, const MethodInfo* method);
// 0x1820b6fa0
// eh: try 0x1820b7070..0x1820b71ae -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 20 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820b706e: nop 
// asm:   0x1820b70db: nop dword ptr [rax + rax]
// asm:   0x1820b716c: mov rdx, qword ptr [rip + 0x1fc9375]  ; MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose
// asm:   0x1820b7173: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1820b7178: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1820b717d: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1820b7182: test rcx, rcx
// asm:   0x1820b7185: jne 0x1820b71ae
// asm:   0x1820b71ae: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

void PatreonEffects_EffectText__ApplyColor(PatreonEffects_EffectText_o *__this,MethodInfo *method)

{
  uint uVar1;
  System_Collections_Generic_List_GameObject__o *__this_00;
  UnityEngine_Component_o *__this_01;
  Il2CppObject *x;
  bool bVar2;
  System_Object_array *pSVar3;
  PatreonEffects_NameEffectController_o *x_00;
  uint uVar4;
  undefined1 local_78 [8];
  float fStack_70;
  float fStack_6c;
  UnityEngine_Object_o *local_68;
  System_Collections_Generic_List_Enumerator_object__o local_58;
  
  if (Il2CppMethodInitialized_18434693c == '\0') {
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
    Il2CppMethodInitialized_18434693c = '\x01';
  }
  local_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields)._segments;
  if (__this_00 == (System_Collections_Generic_List_GameObject__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_78,
             (System_Collections_Generic_List_T__o *)__this_00,
             (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_GameObject_GetEnumerator);
  local_58.fields._current = (Il2CppObject *)local_68;
  do {
    do {
      bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (&local_58,
                         (MethodInfo_153A2A0 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_MoveNext);
      x = local_58.fields._current;
      if (!bVar2) {
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_58,
                   MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose);
        return;
      }
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    } while (bVar2);
    if ((UnityEngine_Object_o *)x == (UnityEngine_Object_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar3 = UnityEngine_GameObject__GetComponentsInChildren_object__6f5810
                       ((UnityEngine_GameObject_o *)x,
                        (MethodInfo_6F5810 *)
                        MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_TextMeshProUGUI);
    uVar4 = 0;
    if (pSVar3 == (System_Object_array *)0x0) {
      ThrowNullReferenceException();
    }
    for (; uVar1 = (uint)pSVar3->max_length, (int)uVar4 < (int)uVar1; uVar4 = uVar4 + 1) {
      if (uVar1 <= uVar4) {
        ThrowIndexOutOfRangeException();
      }
      __this_01 = (UnityEngine_Component_o *)pSVar3->m_Items[(int)uVar4];
      if (__this_01 == (UnityEngine_Component_o *)0x0) {
        ThrowNullReferenceException();
      }
      x_00 = UnityEngine_Component__GetComponent_object_
                       (__this_01,
                        (MethodInfo_6651A0 *)
                        MethodInfo_UnityEngine_Component_GetComponent_NameEffectController);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar2) {
        local_78._0_4_ = (__this->fields)._color.fields.r;
        local_78._4_4_ = (__this->fields)._color.fields.g;
        fStack_70 = (__this->fields)._color.fields.b;
        fStack_6c = (__this->fields)._color.fields.a;
        (**(code **)&((Il2CppClass *)__this_01->klass)->vtable[23].methodPtr)(__this_01,local_78);
      }
    }
  } while( true );
}


// PatreonEffects.EffectText$$ApplyAlignment
// il2cpp: void PatreonEffects_EffectText__ApplyAlignment (PatreonEffects_EffectText_o* __this, const MethodInfo* method);
// 0x1820b6df0
// eh: try 0x1820b6eb0..0x1820b6f87 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820b6f4c: mov rdx, qword ptr [rip + 0x1fc9595]  ; MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose
// asm:   0x1820b6f53: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1820b6f58: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1820b6f5d: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1820b6f62: test rcx, rcx
// asm:   0x1820b6f65: jne 0x1820b6f87
// asm:   0x1820b6f87: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

void PatreonEffects_EffectText__ApplyAlignment(PatreonEffects_EffectText_o *__this,MethodInfo *method)

{
  uint uVar1;
  System_Collections_Generic_List_GameObject__o *__this_00;
  Il2CppObject *x;
  bool bVar2;
  System_Object_array *pSVar3;
  uint uVar4;
  undefined1 local_60 [16];
  UnityEngine_Object_o *local_50;
  System_Collections_Generic_List_Enumerator_object__o local_48;
  
  if (Il2CppMethodInitialized_18434693d == '\0') {
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
    Il2CppMethodInitialized_18434693d = '\x01';
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields)._segments;
  if (__this_00 == (System_Collections_Generic_List_GameObject__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_60,
             (System_Collections_Generic_List_T__o *)__this_00,
             (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_GameObject_GetEnumerator);
  local_48.fields._list = (System_Collections_Generic_List_T__o *)local_60._0_8_;
  local_48.fields._index = local_60._8_4_;
  local_48.fields._version = local_60._12_4_;
  local_48.fields._current = (Il2CppObject *)local_50;
  local_60._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_60._8_8_ = &local_48;
  do {
    do {
      bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (&local_48,
                         (MethodInfo_153A2A0 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_MoveNext);
      x = local_48.fields._current;
      if (!bVar2) {
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_48,
                   MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose);
        return;
      }
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    } while (bVar2);
    if ((UnityEngine_Object_o *)x == (UnityEngine_Object_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar3 = UnityEngine_GameObject__GetComponentsInChildren_object__6f5810
                       ((UnityEngine_GameObject_o *)x,
                        (MethodInfo_6F5810 *)
                        MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_TextMeshProUGUI);
    uVar4 = 0;
    if (pSVar3 == (System_Object_array *)0x0) {
      ThrowNullReferenceException();
    }
    for (; uVar1 = (uint)pSVar3->max_length, (int)uVar4 < (int)uVar1; uVar4 = uVar4 + 1) {
      if (uVar1 <= uVar4) {
        ThrowIndexOutOfRangeException();
      }
      if ((TMPro_TMP_Text_o *)pSVar3->m_Items[(int)uVar4] == (TMPro_TMP_Text_o *)0x0) {
        ThrowNullReferenceException();
      }
      TMPro_TMP_Text__set_alignment
                ((TMPro_TMP_Text_o *)pSVar3->m_Items[(int)uVar4],(__this->fields)._alignment,(MethodInfo *)0x0
                );
    }
  } while( true );
}


// PatreonEffects.EffectText$$OnDestroy
// il2cpp: void PatreonEffects_EffectText__OnDestroy (PatreonEffects_EffectText_o* __this, const MethodInfo* method);
// 0x1820b7e80
// eh: try 0x1820b7f50..0x1820b7fb1 -> pad 0x183315930 catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820b7fc2: mov rdx, qword ptr [rip + 0x1fc851f]  ; MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose
// asm:   0x1820b7fc9: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1820b7fce: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1820b7fd3: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1820b7fd8: test rcx, rcx
// asm:   0x1820b7fdb: jne 0x1820b8025
// asm:   0x1820b7fdd: mov rsi, qword ptr [rsp + 0x70]
// asm:   0x1820b8025: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

void PatreonEffects_EffectText__OnDestroy(PatreonEffects_EffectText_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  System_Collections_Generic_List_GameObject__o *pSVar2;
  UnityEngine_Object_o *x;
  bool bVar3;
  undefined1 local_40 [16];
  UnityEngine_Object_o *local_30;
  undefined1 local_28 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_20;
  UnityEngine_Object_o *local_18;
  
  if (Il2CppMethodInitialized_18434693e == '\0') {
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
    Il2CppMethodInitialized_18434693e = '\x01';
  }
  local_28 = (undefined1  [8])0x0;
  pUStack_20 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_18 = (UnityEngine_Object_o *)0x0;
  pSVar2 = (__this->fields)._segments;
  if (pSVar2 != (System_Collections_Generic_List_GameObject__o *)0x0) {
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_40,
               (System_Collections_Generic_List_T__o *)pSVar2,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_GameObject_GetEnumerator);
    local_28 = (undefined1  [8])local_40._0_8_;
    pUStack_20 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_40._8_8_;
    local_18 = local_30;
    local_40._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_40._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_28;
    while( true ) {
      bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o *)local_28,
                         (MethodInfo_153A2A0 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_MoveNext);
      x = local_18;
      if (!bVar3) break;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar3) {
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        UnityEngine_Object__Destroy_2f1ff70(x,(MethodInfo *)0x0);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_28,
               MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose);
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
// 0x1820b96d0

void PatreonEffects_EffectText___ctor(PatreonEffects_EffectText_o *__this,MethodInfo *method)

{
  System_String_o *value;
  System_Collections_Generic_List_GameObject__o *__this_00;
  
  if (Il2CppMethodInitialized_18434693f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_GameObject);
    Il2CppMethodInitialized_18434693f = '\x01';
  }
  value = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  (__this->fields)._text = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._text,value);
  (__this->fields)._fontSize = 18.0;
  (__this->fields)._color.fields.r = 1.0;
  (__this->fields)._color.fields.g = 1.0;
  (__this->fields)._color.fields.b = 1.0;
  (__this->fields)._color.fields.a = 1.0;
  (__this->fields)._alignment = 0x1001;
  (__this->fields)._richText = true;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GameObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_GameObject_ctor);
  (__this->fields)._segments = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._segments,__this_00);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// PatreonEffects.EffectText$$.cctor
// il2cpp: void PatreonEffects_EffectText___cctor (const MethodInfo* method);
// 0x1820b95e0

void PatreonEffects_EffectText___cctor(MethodInfo *method)

{
  System_Text_RegularExpressions_Regex_o *pSVar1;
  
  if (Il2CppMethodInitialized_184346940 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_EffectText);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_RegularExpressions_Regex);
    il2cpp_codegen_initialize_runtime_metadata(&"<fx(?<attrs>[^>]*)>(?<content>.*?)</fx>");
    il2cpp_codegen_initialize_runtime_metadata(&"(?<key>\\w+)=\"(?<val>[^\"]*)\"");
    Il2CppMethodInitialized_184346940 = '\x01';
  }
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_RegularExpressions_Regex);
  System_Text_RegularExpressions_Regex___ctor_285f6f0(pSVar1,"<fx(?<attrs>[^>]*)>(?<content>.*?)</fx>",0x18,(MethodInfo *)0x0);
  TypeInfo_PatreonEffects_EffectText->static_fields->_fxTagRegex = pSVar1;
  Il2CppCodeGenWriteBarrier(&TypeInfo_PatreonEffects_EffectText->static_fields->_fxTagRegex,pSVar1);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_RegularExpressions_Regex);
  System_Text_RegularExpressions_Regex___ctor_285f6f0(pSVar1,"(?<key>\\w+)=\"(?<val>[^\"]*)\"",8,(MethodInfo *)0x0);
  TypeInfo_PatreonEffects_EffectText->static_fields->_attrRegex = pSVar1;
  Il2CppCodeGenWriteBarrier(&TypeInfo_PatreonEffects_EffectText->static_fields->_attrRegex,pSVar1);
  return;
}


