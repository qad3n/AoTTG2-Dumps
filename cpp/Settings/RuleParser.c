// Type: Settings.RuleParser
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Settings/RuleParser.cs
// Prior real C# source: none
// --------------------------------

// Settings.RuleParser.<>c$$.cctor
// il2cpp: void Settings_RuleParser___c___cctor (const MethodInfo* method);
// 0x181dd05a0

void Settings_RuleParser___c___cctor(MethodInfo *method)

{
  Settings_RuleParser___c_o *__this;
  
  if (Il2CppMethodInitialized_184344a3d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_RuleParser_c);
    Il2CppMethodInitialized_184344a3d = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_RuleParser_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_Settings_RuleParser_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Settings_RuleParser_c->static_fields->__9,__this);
  return;
}


// Settings.RuleParser.<>c$$.ctor
// il2cpp: void Settings_RuleParser___c___ctor (Settings_RuleParser___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
Settings_RuleParser___c___ctor(Settings_RuleParser___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Settings.RuleParser.<>c$$<Parse>b__0_0
// il2cpp: System_String_o* Settings_RuleParser___c___Parse_b__0_0 (Settings_RuleParser___c_o* __this, System_String_o* s, const MethodInfo* method);
// 0x181dd0430

System_String_o*
Settings_RuleParser___c___Parse_b__0_0(Settings_RuleParser___c_o* __this, System_String_o* s, MethodInfo* method)

{
  System_String_o *pSVar1;
  
  if (x != (System_String_o *)0x0) {
    pSVar1 = System_String__Trim(x,(MethodInfo *)0x0);
    return pSVar1;
  }
  ThrowNullReferenceException();
}


// Settings.RuleParser.<>c$$<Parse>b__0_1
// il2cpp: bool Settings_RuleParser___c___Parse_b__0_1 (Settings_RuleParser___c_o* __this, System_String_o* s, const MethodInfo* method);
// 0x181dd0450

bool
Settings_RuleParser___c___Parse_b__0_1(Settings_RuleParser___c_o* __this, System_String_o* s, MethodInfo* method)

{
  if (item != (System_String_o *)0x0) {
    return 0 < (item->fields)._stringLength;
  }
  ThrowNullReferenceException();
}


// Settings.RuleParser$$Parse
// il2cpp: System_Collections_Generic_List_UIRule__o* Settings_RuleParser__Parse (System_Collections_Generic_IEnumerable_string__o* rawRules, System_Func_string__UIRuleValueType__o* typeResolver, const MethodInfo* method);
// 0x181dc9670
// eh: try 0x181dc9840..0x181dc9f03 -> pad 0x183332ed0 catch Il2CppExceptionWrapper
// eh: try 0x181dc9f03..0x181dc9f13 -> pad 0x180014200 cleanup
// eh: try 0x181dc9f13..0x181dc9f80 -> pad 0x183332ed0 catch Il2CppExceptionWrapper
// eh: try 0x181dc9f80..0x181dc9f87 -> pad 0x180014200 cleanup
// eh: try 0x181dc9f87..0x181dca386 -> pad 0x183332ed0 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 27 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181dc9d0f: xor r13d, r13d
// asm:   0x181dc9f03: jmp 0x181dc9ff7
// asm:   0x181dc9f80: jmp 0x181dc9ff7
// asm:   0x181dca025: jmp 0x181dca056
// asm:   0x181dca027: mov r8, qword ptr [rsp + 0x70]
// asm:   0x181dca02c: cmp qword ptr [r8], 0
// asm:   0x181dca030: je 0x181dca043
// asm:   0x181dca032: xor ecx, ecx
// asm:   0x181dca034: mov r8, qword ptr [r8]
// asm:   0x181dca037: mov rdx, qword ptr [rip + 0x22cf2c2]  ; TypeInfo_System_IDisposable
// asm:   0x181dca03e: call 0x180014840  ; InterfaceInvoker0_Invoke()
// asm:   0x181dca043: mov rcx, qword ptr [rsp + 0x68]
// asm:   0x181dca048: test rcx, rcx
// asm:   0x181dca04b: jne 0x181dca386
// asm:   0x181dca051: mov r15, qword ptr [rsp + 0x58]
// asm:   0x181dca386: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183332ed0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183332ed5: push rbp
// asm:   0x183332ed6: sub rsp, 0x30
// asm:   0x183332eda: mov rbp, rdx
// asm:   0x183332edd: mov rax, qword ptr [rbp + 0x60]
// asm:   0x183332ee1: mov rcx, qword ptr [rax]
// asm:   0x183332ee4: mov qword ptr [rbp + 0x68], rcx
// asm:   0x183332ee8: movabs rax, 0
// asm:   0x183332ef2: add rsp, 0x30
// asm:   0x183332ef6: pop rbp
// asm:   0x183332ef7: ret 

System_Collections_Generic_List_UIRule__o *
Settings_RuleParser__Parse
          (System_Collections_Generic_IEnumerable_string__o *rawRules,
          System_Func_string__UIRuleValueType__o *typeResolver,MethodInfo *method)

{
  ushort uVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  Il2CppObject *pIVar3;
  bool bVar4;
  System_Collections_Generic_List_UIRule__o *__this;
  void *pvVar5;
  VirtualInvokeData *pVVar6;
  System_String_o *pSVar7;
  System_String_o *pSVar8;
  System_Text_RegularExpressions_Match_o *__this_00;
  System_Text_RegularExpressions_GroupCollection_o *pSVar9;
  System_Text_RegularExpressions_Capture_o *pSVar10;
  System_String_o *pSVar11;
  System_String_o *pSVar12;
  System_String_o *pSVar13;
  Settings_UIRule_o *__this_01;
  System_Globalization_CultureInfo_o *pSVar14;
  System_String_array *source;
  System_Func_string__string__o *__this_02;
  System_Collections_Generic_IEnumerable_TResult__o *source_00;
  System_Func_string__bool__o *__this_03;
  System_Collections_Generic_IEnumerable_TSource__o *source_01;
  System_Collections_Generic_List_string__o *pSVar15;
  Il2CppClass *pIVar16;
  System_FormatException_o *pSVar17;
  MethodInfo *pMVar18;
  ushort uVar19;
  System_Nullable_float__Fields local_res8;
  float local_res20 [2];
  float local_78 [2];
  Il2CppObject *local_70;
  System_String_o *local_68;
  System_Nullable_float__Fields local_60;
  System_Collections_Generic_List_UIRule__o *local_58;
  System_Collections_Generic_List_UIRule__o *local_50;
  undefined8 local_40;
  Il2CppObject **local_38;
  ulonglong uVar20;
  
  if (Il2CppMethodInitialized_184344a3c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Select_string_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToList_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Where_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerable_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerator_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_UIRule_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_UIRule_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_UIRule);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_get_HasValue);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_RegularExpressions_Regex);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_RuleParser_c_Parse_b__0_0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_RuleParser_c_Parse_b__0_1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_RuleParser_c);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_UIRule);
    il2cpp_codegen_initialize_runtime_metadata(&"!");
    il2cpp_codegen_initialize_runtime_metadata(&"+");
    il2cpp_codegen_initialize_runtime_metadata(&"-");
    il2cpp_codegen_initialize_runtime_metadata(&"^([^=]+)=([^\\[\\{]+)(?:\\[\\s*(-?(?:\\d+(?:\\.\\d+)?|\\.\\d+))\\s*-\\s*(-?(?:\\d+(?:\\.\\d+)?|\\.\\d+))\\s*\\])?(?:\\{([^\\}]+)\\})?$");
    Il2CppMethodInitialized_184344a3c = '\x01';
  }
  local_70 = (Il2CppObject *)0x0;
  local_78[0] = 0.0;
  local_res20[0] = 0.0;
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_UIRule);
  local_58 = __this;
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_UIRule_ctor);
  if (rawRules != (System_Collections_Generic_IEnumerable_string__o *)0x0) {
    local_50 = __this;
    local_70 = InterfaceInvoker0_Invoke
                         (0,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_string,
                          (Il2CppObject *)rawRules);
    local_40 = 0;
    local_38 = &local_70;
    while( true ) {
      uVar20 = 0;
      if (local_70 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pvVar5 = InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,local_70);
      pIVar3 = local_70;
      if ((char)pvVar5 == '\0') break;
      if (local_70 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar16 = local_70->klass;
      uVar1 = (pIVar16->_2).interface_offsets_count;
      if (uVar1 != 0) {
        pIVar2 = (pIVar16->_1).interfaceOffsets;
        do {
          if (pIVar2[uVar20].interfaceType ==
              (Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_string) {
            pVVar6 = pIVar16->vtable + pIVar2[uVar20].offset;
            goto label_181dc98c6;
          }
          uVar19 = (short)uVar20 + 1;
          uVar20 = (ulonglong)uVar19;
        } while (uVar19 < uVar1);
      }
      pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                         (local_70,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_string,0);
label_181dc98c6:
      pSVar7 = (*pVVar6->methodPtr)(pIVar3,pVVar6->method);
      local_68 = pSVar7;
      if (pSVar7 == (System_String_o *)0x0) {
        pIVar16 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_FormatException);
        pSVar17 = (System_FormatException_o *)il2cpp_codegen_object_new(pIVar16);
        pSVar7 = il2cpp_codegen_get_runtime_metadata(&"Experience rule cannot be null.");
        System_FormatException___ctor_1b22ec0(pSVar17,pSVar7,(MethodInfo *)0x0);
        pMVar18 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Settings_RuleParser_Parse);
        il2cpp_codegen_raise_exception((Il2CppObject *)pSVar17,pMVar18);
      }
      pSVar8 = System_String__Trim(pSVar7,(MethodInfo *)0x0);
      bVar4 = System_String__IsNullOrWhiteSpace(pSVar8,(MethodInfo *)0x0);
      if (!bVar4) {
        if (pSVar8 == (System_String_o *)0x0) {
          ThrowNullReferenceException();
        }
        local_res8.hasValue = bVar4;
        bVar4 = System_String__StartsWith(pSVar8,"!",(MethodInfo *)0x0);
        if (bVar4) {
          pSVar8 = System_String__Substring(pSVar8,1,(MethodInfo *)0x0);
          if (pSVar8 == (System_String_o *)0x0) {
            ThrowNullReferenceException();
          }
          local_res8.hasValue = true;
        }
        bVar4 = System_String__StartsWith(pSVar8,"-",(MethodInfo *)0x0);
        if (bVar4) {
          pSVar8 = System_String__Substring(pSVar8,1,(MethodInfo *)0x0);
          if (pSVar8 == (System_String_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar8 = System_String__Trim(pSVar8,(MethodInfo *)0x0);
          if (pSVar8 == (System_String_o *)0x0) {
            ThrowNullReferenceException();
          }
          if ((pSVar8->fields)._stringLength == 0) {
            pSVar8 = il2cpp_codegen_get_runtime_metadata(&"Hide rule is missing a setting ID: ");
            pSVar7 = System_String__Concat_1969e50(pSVar8,pSVar7,(MethodInfo *)0x0);
            pIVar16 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_FormatException);
            pSVar17 = (System_FormatException_o *)il2cpp_codegen_object_new(pIVar16);
            System_FormatException___ctor_1b22ec0(pSVar17,pSVar7,(MethodInfo *)0x0);
            pMVar18 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Settings_RuleParser_Parse);
            il2cpp_codegen_raise_exception((Il2CppObject *)pSVar17,pMVar18);
          }
          __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_UIRule);
          System_Object___ctor
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_01,(MethodInfo *)0x0
                    );
          if (__this_01 == (Settings_UIRule_o *)0x0) {
            ThrowNullReferenceException();
          }
          (__this_01->fields).Type = 1;
          (__this_01->fields).SettingId = pSVar8;
          Il2CppCodeGenWriteBarrier(&(__this_01->fields).SettingId,pSVar8);
          if (__this == (System_Collections_Generic_List_UIRule__o *)0x0) {
            ThrowNullReferenceException();
          }
        }
        else {
          bVar4 = System_String__StartsWith(pSVar8,"+",(MethodInfo *)0x0);
          if (bVar4) {
            pSVar8 = System_String__Substring(pSVar8,1,(MethodInfo *)0x0);
            if (pSVar8 == (System_String_o *)0x0) {
              ThrowNullReferenceException();
            }
            pSVar8 = System_String__Trim(pSVar8,(MethodInfo *)0x0);
            if (pSVar8 == (System_String_o *)0x0) {
              ThrowNullReferenceException();
            }
            if ((pSVar8->fields)._stringLength == 0) {
              pSVar8 = il2cpp_codegen_get_runtime_metadata(&"Show rule is missing a setting ID: ");
              pSVar7 = System_String__Concat_1969e50(pSVar8,pSVar7,(MethodInfo *)0x0);
              pIVar16 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_FormatException);
              pSVar17 = (System_FormatException_o *)il2cpp_codegen_object_new(pIVar16);
              System_FormatException___ctor_1b22ec0(pSVar17,pSVar7,(MethodInfo *)0x0);
              pMVar18 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Settings_RuleParser_Parse);
              il2cpp_codegen_raise_exception((Il2CppObject *)pSVar17,pMVar18);
            }
            __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_UIRule);
            System_Object___ctor
                      ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_01,
                       (MethodInfo *)0x0);
            if (__this_01 == (Settings_UIRule_o *)0x0) {
              ThrowNullReferenceException();
            }
            (__this_01->fields).Type = 0;
            (__this_01->fields).SettingId = pSVar8;
            Il2CppCodeGenWriteBarrier(&(__this_01->fields).SettingId,pSVar8);
            if (__this == (System_Collections_Generic_List_UIRule__o *)0x0) {
              ThrowNullReferenceException();
            }
          }
          else {
            if ((TypeInfo_System_Text_RegularExpressions_Regex->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Text_RegularExpressions_Regex);
            }
            __this_00 = System_Text_RegularExpressions_Regex__Match
                                  (pSVar8,"^([^=]+)=([^\\[\\{]+)(?:\\[\\s*(-?(?:\\d+(?:\\.\\d+)?|\\.\\d+))\\s*-\\s*(-?(?:\\d+(?:\\.\\d+)?|\\.\\d+))\\s*\\])?(?:\\{([^\\}]+)\\})?$",(MethodInfo *)0x0);
            if (__this_00 == (System_Text_RegularExpressions_Match_o *)0x0) {
              ThrowNullReferenceException();
            }
            bVar4 = System_Text_RegularExpressions_Group__get_Success
                              ((System_Text_RegularExpressions_Group_o *)__this_00,(MethodInfo *)0x0);
            if (!bVar4) {
              pSVar8 = il2cpp_codegen_get_runtime_metadata(&"Invalid experience rule: ");
              pSVar7 = System_String__Concat_1969e50(pSVar8,pSVar7,(MethodInfo *)0x0);
              pIVar16 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_FormatException);
              pSVar17 = (System_FormatException_o *)il2cpp_codegen_object_new(pIVar16);
              System_FormatException___ctor_1b22ec0(pSVar17,pSVar7,(MethodInfo *)0x0);
              pMVar18 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Settings_RuleParser_Parse);
              il2cpp_codegen_raise_exception((Il2CppObject *)pSVar17,pMVar18);
            }
            pSVar9 = (*(__this_00->klass->vtable)._5_get_Groups.methodPtr)
                               (__this_00,(__this_00->klass->vtable)._5_get_Groups.method);
            if (pSVar9 == (System_Text_RegularExpressions_GroupCollection_o *)0x0) {
              ThrowNullReferenceException();
            }
            pSVar10 = (System_Text_RegularExpressions_Capture_o *)
                      System_Text_RegularExpressions_GroupCollection__System_Collections_IList_get_Item
                                (pSVar9,1,(MethodInfo *)0x0);
            if (pSVar10 == (System_Text_RegularExpressions_Capture_o *)0x0) {
              ThrowNullReferenceException();
            }
            pSVar7 = System_Text_RegularExpressions_Capture__ToString(pSVar10,(MethodInfo *)0x0);
            if (pSVar7 == (System_String_o *)0x0) {
              ThrowNullReferenceException();
            }
            pSVar7 = System_String__Trim(pSVar7,(MethodInfo *)0x0);
            pSVar9 = (*(__this_00->klass->vtable)._5_get_Groups.methodPtr)
                               (__this_00,(__this_00->klass->vtable)._5_get_Groups.method);
            if (pSVar9 == (System_Text_RegularExpressions_GroupCollection_o *)0x0) {
              ThrowNullReferenceException();
            }
            pSVar10 = (System_Text_RegularExpressions_Capture_o *)
                      System_Text_RegularExpressions_GroupCollection__System_Collections_IList_get_Item
                                (pSVar9,2,(MethodInfo *)0x0);
            if (pSVar10 == (System_Text_RegularExpressions_Capture_o *)0x0) {
              ThrowNullReferenceException();
            }
            pSVar8 = System_Text_RegularExpressions_Capture__ToString(pSVar10,(MethodInfo *)0x0);
            if (pSVar8 == (System_String_o *)0x0) {
              ThrowNullReferenceException();
            }
            pSVar8 = System_String__Trim(pSVar8,(MethodInfo *)0x0);
            pSVar9 = (*(__this_00->klass->vtable)._5_get_Groups.methodPtr)
                               (__this_00,(__this_00->klass->vtable)._5_get_Groups.method);
            if (pSVar9 == (System_Text_RegularExpressions_GroupCollection_o *)0x0) {
              ThrowNullReferenceException();
            }
            pSVar10 = (System_Text_RegularExpressions_Capture_o *)
                      System_Text_RegularExpressions_GroupCollection__System_Collections_IList_get_Item
                                (pSVar9,3,(MethodInfo *)0x0);
            if (pSVar10 == (System_Text_RegularExpressions_Capture_o *)0x0) {
              ThrowNullReferenceException();
            }
            pSVar11 = System_Text_RegularExpressions_Capture__ToString(pSVar10,(MethodInfo *)0x0);
            if (pSVar11 == (System_String_o *)0x0) {
              ThrowNullReferenceException();
            }
            pSVar11 = System_String__Trim(pSVar11,(MethodInfo *)0x0);
            pSVar9 = (*(__this_00->klass->vtable)._5_get_Groups.methodPtr)
                               (__this_00,(__this_00->klass->vtable)._5_get_Groups.method);
            if (pSVar9 == (System_Text_RegularExpressions_GroupCollection_o *)0x0) {
              ThrowNullReferenceException();
            }
            pSVar10 = (System_Text_RegularExpressions_Capture_o *)
                      System_Text_RegularExpressions_GroupCollection__System_Collections_IList_get_Item
                                (pSVar9,4,(MethodInfo *)0x0);
            if (pSVar10 == (System_Text_RegularExpressions_Capture_o *)0x0) {
              ThrowNullReferenceException();
            }
            pSVar12 = System_Text_RegularExpressions_Capture__ToString(pSVar10,(MethodInfo *)0x0);
            if (pSVar12 == (System_String_o *)0x0) {
              ThrowNullReferenceException();
            }
            pSVar12 = System_String__Trim(pSVar12,(MethodInfo *)0x0);
            pSVar9 = (*(__this_00->klass->vtable)._5_get_Groups.methodPtr)
                               (__this_00,(__this_00->klass->vtable)._5_get_Groups.method);
            if (pSVar9 == (System_Text_RegularExpressions_GroupCollection_o *)0x0) {
              ThrowNullReferenceException();
            }
            pSVar10 = (System_Text_RegularExpressions_Capture_o *)
                      System_Text_RegularExpressions_GroupCollection__System_Collections_IList_get_Item
                                (pSVar9,5,(MethodInfo *)0x0);
            if (pSVar10 == (System_Text_RegularExpressions_Capture_o *)0x0) {
              ThrowNullReferenceException();
            }
            pSVar13 = System_Text_RegularExpressions_Capture__ToString(pSVar10,(MethodInfo *)0x0);
            if (pSVar13 == (System_String_o *)0x0) {
              ThrowNullReferenceException();
            }
            pSVar13 = System_String__Trim(pSVar13,(MethodInfo *)0x0);
            if (pSVar7 == (System_String_o *)0x0) {
              ThrowNullReferenceException();
            }
            if ((pSVar7->fields)._stringLength == 0) {
label_181dca14b:
              pSVar7 = il2cpp_codegen_get_runtime_metadata(&"Experience rule is missing a setting ID or value: ");
              pSVar7 = System_String__Concat_1969e50(pSVar7,local_68,(MethodInfo *)0x0);
              pIVar16 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_FormatException);
              pSVar17 = (System_FormatException_o *)il2cpp_codegen_object_new(pIVar16);
              System_FormatException___ctor_1b22ec0(pSVar17,pSVar7,(MethodInfo *)0x0);
              pMVar18 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Settings_RuleParser_Parse);
              il2cpp_codegen_raise_exception((Il2CppObject *)pSVar17,pMVar18);
            }
            if (pSVar8 == (System_String_o *)0x0) {
              ThrowNullReferenceException();
            }
            if ((pSVar8->fields)._stringLength == 0) goto label_181dca14b;
            __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_UIRule);
            System_Object___ctor
                      ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_01,
                       (MethodInfo *)0x0);
            if (__this_01 == (Settings_UIRule_o *)0x0) {
              ThrowNullReferenceException();
            }
            (__this_01->fields).SettingId = pSVar7;
            Il2CppCodeGenWriteBarrier(&(__this_01->fields).SettingId,pSVar7);
            (__this_01->fields).DefaultValue = (Il2CppObject *)pSVar8;
            Il2CppCodeGenWriteBarrier(&(__this_01->fields).DefaultValue,pSVar8);
            (__this_01->fields).DisableEditing = local_res8.hasValue;
            bVar4 = System_String__IsNullOrEmpty(pSVar11,(MethodInfo *)0x0);
            if ((!bVar4) || (bVar4 = System_String__IsNullOrEmpty(pSVar12,(MethodInfo *)0x0), !bVar4)) {
              if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
              }
              pSVar14 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
              bVar4 = System_Single__TryParse_1b4a540
                                (pSVar11,0xa7,(System_IFormatProvider_o *)pSVar14,local_78,(MethodInfo *)0x0);
              if (!bVar4) {
label_181dca0e6:
                pSVar7 = il2cpp_codegen_get_runtime_metadata(&"Invalid experience rule range: ");
                pSVar7 = System_String__Concat_1969e50(pSVar7,local_68,(MethodInfo *)0x0);
                pIVar16 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_FormatException);
                pSVar17 = (System_FormatException_o *)il2cpp_codegen_object_new(pIVar16);
                System_FormatException___ctor_1b22ec0(pSVar17,pSVar7,(MethodInfo *)0x0);
                pMVar18 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Settings_RuleParser_Parse);
                il2cpp_codegen_raise_exception((Il2CppObject *)pSVar17,pMVar18);
              }
              if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
              }
              pSVar14 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
              bVar4 = System_Single__TryParse_1b4a540
                                (pSVar12,0xa7,(System_IFormatProvider_o *)pSVar14,local_res20,
                                 (MethodInfo *)0x0);
              if ((!bVar4) || (local_res20[0] < local_78[0])) goto label_181dca0e6;
              local_res8.hasValue = false;
              local_res8._1_3_ = 0;
              local_res8.value = 0.0;
              System_Nullable_float____ctor
                        ((System_Nullable_float__o *)&local_res8,local_78[0],
                         (MethodInfo_AE2920 *)MethodInfo_System_Nullable_float_ctor);
              (__this_01->fields).Min.fields = local_res8;
              local_60.hasValue = false;
              local_60._1_3_ = 0;
              local_60.value = 0.0;
              System_Nullable_float____ctor
                        ((System_Nullable_float__o *)&local_60,local_res20[0],
                         (MethodInfo_AE2920 *)MethodInfo_System_Nullable_float_ctor);
              (__this_01->fields).Max.fields = local_60;
              (__this_01->fields).Type = 4;
            }
            bVar4 = System_String__IsNullOrEmpty(pSVar13,(MethodInfo *)0x0);
            if (!bVar4) {
              if (pSVar13 == (System_String_o *)0x0) {
                ThrowNullReferenceException();
              }
              source = System_String__Split(pSVar13,0x2c,0,(MethodInfo *)0x0);
              if ((TypeInfo_Settings_RuleParser_c->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_RuleParser_c);
              }
              __this_02 = TypeInfo_Settings_RuleParser_c->static_fields->__9__0_0;
              if (__this_02 == (System_Func_string__string__o *)0x0) {
                if ((TypeInfo_Settings_RuleParser_c->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_RuleParser_c);
                }
                pIVar3 = (Il2CppObject *)TypeInfo_Settings_RuleParser_c->static_fields->__9;
                __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_string);
                System_Func_object__object____ctor
                          ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this_02,pIVar3,
                           (intptr_t)MethodInfo_Settings_RuleParser_c_Parse_b__0_0,(MethodInfo_16E67D0 *)0x0);
                TypeInfo_Settings_RuleParser_c->static_fields->__9__0_0 = __this_02;
                Il2CppCodeGenWriteBarrier(&TypeInfo_Settings_RuleParser_c->static_fields->__9__0_0,__this_02);
              }
              source_00 = System_Linq_Enumerable__Select_Vector3__object_
                                    ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                                     (System_Func_TSource__TResult__o *)__this_02,
                                     (MethodInfo_6C2170 *)
                                     MethodInfo_System_Linq_Enumerable_Select_string_string);
              if ((TypeInfo_Settings_RuleParser_c->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_RuleParser_c);
              }
              __this_03 = TypeInfo_Settings_RuleParser_c->static_fields->__9__0_1;
              if (__this_03 == (System_Func_string__bool__o *)0x0) {
                if ((TypeInfo_Settings_RuleParser_c->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_RuleParser_c);
                }
                pIVar3 = (Il2CppObject *)TypeInfo_Settings_RuleParser_c->static_fields->__9;
                __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_bool);
                System_Func_object__bool____ctor
                          ((System_Predicate_object__o *)__this_03,pIVar3,
                           (intptr_t)MethodInfo_Settings_RuleParser_c_Parse_b__0_1,(MethodInfo_B61EB0 *)0x0);
                TypeInfo_Settings_RuleParser_c->static_fields->__9__0_1 = __this_03;
                Il2CppCodeGenWriteBarrier(&TypeInfo_Settings_RuleParser_c->static_fields->__9__0_1,__this_03);
              }
              source_01 = System_Linq_Enumerable__Where_float_
                                    ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,
                                     (System_Func_TSource__bool__o *)__this_03,
                                     (MethodInfo_6CA550 *)MethodInfo_System_Linq_Enumerable_Where_string);
              pSVar15 = (System_Collections_Generic_List_string__o *)
                        System_Linq_Enumerable__ToList_object_
                                  (source_01,
                                   (MethodInfo_6C9C10 *)MethodInfo_System_Linq_Enumerable_ToList_string);
              (__this_01->fields).AllowedValues = pSVar15;
              Il2CppCodeGenWriteBarrier(&(__this_01->fields).AllowedValues,pSVar15);
              pSVar15 = (__this_01->fields).AllowedValues;
              if (pSVar15 == (System_Collections_Generic_List_string__o *)0x0) {
                ThrowNullReferenceException();
              }
              if ((pSVar15->fields)._size == 0) {
                pSVar7 = il2cpp_codegen_get_runtime_metadata(&"Experience rule has no allowed values: ");
                pSVar7 = System_String__Concat_1969e50(pSVar7,local_68,(MethodInfo *)0x0);
                pIVar16 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_FormatException);
                pSVar17 = (System_FormatException_o *)il2cpp_codegen_object_new(pIVar16);
                System_FormatException___ctor_1b22ec0(pSVar17,pSVar7,(MethodInfo *)0x0);
                pMVar18 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Settings_RuleParser_Parse);
                il2cpp_codegen_raise_exception((Il2CppObject *)pSVar17,pMVar18);
              }
              (__this_01->fields).Type = 5;
            }
            if ((((__this_01->fields).Min.fields.hasValue == false) &&
                ((__this_01->fields).Max.fields.hasValue == false)) &&
               ((__this_01->fields).AllowedValues == (System_Collections_Generic_List_string__o *)0x0)) {
              (__this_01->fields).Type = 2;
            }
            __this = local_58;
            if (local_58 == (System_Collections_Generic_List_UIRule__o *)0x0) {
              ThrowNullReferenceException();
            }
          }
        }
        il2cpp_runtime_helper_180012890(__this,__this_01,MethodInfo_System_Collections_Generic_List_UIRule_Add);
      }
    }
    if (local_70 != (Il2CppObject *)0x0) {
      InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,local_70);
    }
  }
  return __this;
}


