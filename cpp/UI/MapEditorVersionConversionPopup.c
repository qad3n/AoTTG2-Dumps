// Type: UI.MapEditorVersionConversionPopup
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/UI/MapEditorVersionConversionPopup.cs
// Prior real C# source: none
// --------------------------------

// UI.MapEditorVersionConversionPopup$$get_Width
// il2cpp: float UI_MapEditorVersionConversionPopup__get_Width (UI_MapEditorVersionConversionPopup_o* __this, const MethodInfo* method);
// 0x182278770

float UI_MapEditorVersionConversionPopup__get_Width
                (UI_MapEditorVersionConversionPopup_o *__this,MethodInfo *method)

{
  return 560.0;
}


// UI.MapEditorVersionConversionPopup$$get_Height
// il2cpp: float UI_MapEditorVersionConversionPopup__get_Height (UI_MapEditorVersionConversionPopup_o* __this, const MethodInfo* method);
// 0x1821c0bd0

float UI_MapEditorVersionConversionPopup__get_Height
                (UI_MapEditorVersionConversionPopup_o *__this,MethodInfo *method)

{
  return 520.0;
}


// UI.MapEditorVersionConversionPopup$$get_LabelHeight
// il2cpp: float UI_MapEditorVersionConversionPopup__get_LabelHeight (UI_MapEditorVersionConversionPopup_o* __this, const MethodInfo* method);
// 0x1821d9b60

float UI_MapEditorVersionConversionPopup__get_LabelHeight
                (UI_MapEditorVersionConversionPopup_o *__this,MethodInfo *method)

{
  return 340.0;
}


// UI.MapEditorVersionConversionPopup$$get_HorizontalPadding
// il2cpp: int32_t UI_MapEditorVersionConversionPopup__get_HorizontalPadding (UI_MapEditorVersionConversionPopup_o* __this, const MethodInfo* method);
// 0x18229ac60

int32_t
UI_MapEditorVersionConversionPopup__get_HorizontalPadding(UI_MapEditorVersionConversionPopup_o* __this, MethodInfo* method)

{
  return 0x23;
}


// UI.MapEditorVersionConversionPopup$$get_PanelAlignment
// il2cpp: int32_t UI_MapEditorVersionConversionPopup__get_PanelAlignment (UI_MapEditorVersionConversionPopup_o* __this, const MethodInfo* method);
// 0x18059b2e0

int32_t
UI_MapEditorVersionConversionPopup__get_PanelAlignment(UI_MapEditorVersionConversionPopup_o* __this, MethodInfo* method)

{
  return (Unity_Collections_AllocatorManager_TryFunction_o *)0x0;
}


// UI.MapEditorVersionConversionPopup$$Show
// il2cpp: void UI_MapEditorVersionConversionPopup__Show (UI_MapEditorVersionConversionPopup_o* __this, Map_MapVersionConversionResult_o* result, UnityEngine_Events_UnityAction_o* onConfirm, const MethodInfo* method);
// 0x1822dbea0
// eh: try 0x1822dc210..0x1822dc4a2 -> pad 0x183333480 (+4 call sites) catch Il2CppExceptionWrapper
// asm: 53 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822dc322: jmp 0x1822dc210
// asm:   0x1822dc327: mov r8, qword ptr [rsp + 0x70]
// asm:   0x1822dc32c: cmp qword ptr [r8], 0
// asm:   0x1822dc330: je 0x1822dc343
// asm:   0x1822dc332: xor ecx, ecx
// asm:   0x1822dc334: mov r8, qword ptr [r8]
// asm:   0x1822dc337: mov rdx, qword ptr [rip + 0x1dbcfc2]  ; TypeInfo_System_IDisposable
// asm:   0x1822dc33e: call 0x180014840  ; InterfaceInvoker0_Invoke()
// asm:   0x1822dc343: mov rcx, qword ptr [rsp + 0x68]
// asm:   0x1822dc348: test rcx, rcx
// asm:   0x1822dc34b: jne 0x1822dc488
// asm:   0x1822dc351: xor r15d, r15d
// asm:   0x1822dc354: mov r14, qword ptr [rsp + 0x38]
// asm:   0x1822dc359: mov r13, r14
// asm:   0x1822dc35c: mov rdi, qword ptr [rsp + 0x60]
// asm:   0x1822dc361: jmp 0x1822dc210
// asm:   0x1822dc37f: mov r8, qword ptr [rsp + 0x60]
// asm:   0x1822dc384: cmp qword ptr [r8], 0
// asm:   0x1822dc388: je 0x1822dc39b
// asm:   0x1822dc38a: xor ecx, ecx
// asm:   0x1822dc38c: mov r8, qword ptr [r8]
// asm:   0x1822dc38f: mov rdx, qword ptr [rip + 0x1dbcf6a]  ; TypeInfo_System_IDisposable
// asm:   0x1822dc396: call 0x180014840  ; InterfaceInvoker0_Invoke()
// asm:   0x1822dc39b: mov rcx, qword ptr [rsp + 0x58]
// asm:   0x1822dc3a0: test rcx, rcx
// asm:   0x1822dc3a3: jne 0x1822dc4a2
// asm:   0x1822dc3a9: xor r15d, r15d
// asm:   0x1822dc3ac: mov r14, qword ptr [rsp + 0x38]
// asm:   0x1822dc3b1: mov r13, r14
// asm:   0x1822dc488: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1822dc4a2: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183333480: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183333485: push rbp
// asm:   0x183333486: sub rsp, 0x30
// asm:   0x18333348a: mov rbp, rdx
// asm:   0x18333348d: mov rax, qword ptr [rbp + 0x50]
// asm:   0x183333491: mov rcx, qword ptr [rax]
// asm:   0x183333494: mov qword ptr [rbp + 0x58], rcx
// asm:   0x183333498: movabs rax, 0
// asm:   0x1833334a2: add rsp, 0x30
// asm:   0x1833334a6: pop rbp
// asm:   0x1833334a7: ret 
// asm:   0x1833395d0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x1833395d5: push rbp
// asm:   0x1833395d6: sub rsp, 0x30
// asm:   0x1833395da: mov rbp, rdx
// asm:   0x1833395dd: mov rax, qword ptr [rbp + 0x48]
// asm:   0x1833395e1: mov rcx, qword ptr [rax]
// asm:   0x1833395e4: mov qword ptr [rbp + 0x68], rcx
// asm:   0x1833395e8: movabs rax, 0
// asm:   0x1833395f2: add rsp, 0x30
// asm:   0x1833395f6: pop rbp
// asm:   0x1833395f7: ret 

void UI_MapEditorVersionConversionPopup__Show
               (UI_MapEditorVersionConversionPopup_o *__this,Map_MapVersionConversionResult_o *result,
               UnityEngine_Events_UnityAction_o *onConfirm,MethodInfo *method)

{
  bool bVar1;
  System_Text_StringBuilder_o *__this_00;
  System_Object_array *args;
  Il2CppObject *pIVar2;
  System_String_o *pSVar3;
  System_Text_StringBuilder_o *pSVar4;
  void *pvVar5;
  System_String_o *pSVar6;
  System_String_o *item;
  Il2CppObject *local_res10;
  UnityEngine_Events_UnityAction_o *local_res18;
  Il2CppObject *local_88;
  System_Text_StringBuilder_o *local_80;
  undefined8 local_60;
  Il2CppObject **local_58;
  undefined8 local_50;
  Il2CppObject **local_48;
  
  local_res18 = onConfirm;
  if (Il2CppMethodInitialized_18434760e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerable_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IEnumerable_IMapVersionConverter);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IEnumerator_IMapVersionConverter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerator_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_IMapVersionConverter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_StringBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Changelog");
    il2cpp_codegen_initialize_runtime_metadata(&"VersionRange");
    il2cpp_codegen_initialize_runtime_metadata(&"Title");
    il2cpp_codegen_initialize_runtime_metadata(&"MapEditor");
    il2cpp_codegen_initialize_runtime_metadata(&"Backup");
    il2cpp_codegen_initialize_runtime_metadata(&"Irreversible");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"Reversible");
    il2cpp_codegen_initialize_runtime_metadata(&"- ");
    il2cpp_codegen_initialize_runtime_metadata(&"VersionConversion");
    Il2CppMethodInitialized_18434760e = '\x01';
  }
  local_res10 = (Il2CppObject *)0x0;
  local_88 = (Il2CppObject *)0x0;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_StringBuilder);
  System_Text_StringBuilder___ctor(__this_00,(MethodInfo *)0x0);
  args = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
  if ((result == (Map_MapVersionConversionResult_o *)0x0) || (args == (System_Object_array *)0x0)) {
label_1822dc451:
    ThrowNullReferenceException();
  }
  pSVar3 = (result->fields)._OriginalVersion_k__BackingField;
  if ((pSVar3 != (System_String_o *)0x0) &&
     (pIVar2 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar3,(((args->obj).klass)->_1).element_class),
     pIVar2 == (Il2CppObject *)0x0)) {
    pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
    il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
  }
  if ((int)args->max_length != 0) {
    args->m_Items[0] = (Il2CppObject *)pSVar3;
    Il2CppCodeGenWriteBarrier(args->m_Items,pSVar3);
    pSVar3 = (result->fields)._FinalVersion_k__BackingField;
    if ((pSVar3 != (System_String_o *)0x0) &&
       (pIVar2 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar3,(((args->obj).klass)->_1).element_class),
       pIVar2 == (Il2CppObject *)0x0)) {
      pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
    }
    if (1 < (uint)args->max_length) {
      args->m_Items[1] = (Il2CppObject *)pSVar3;
      local_80 = __this_00;
      Il2CppCodeGenWriteBarrier(args->m_Items + 1,pSVar3);
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pSVar3 = UI_UIManager__GetLocaleFormatted
                         ("MapEditor","VersionConversion","VersionRange",args,
                          (MethodInfo *)0x0);
      if (__this_00 != (System_Text_StringBuilder_o *)0x0) {
        System_Text_StringBuilder__AppendLine_197dc70(__this_00,pSVar3,(MethodInfo *)0x0);
        bVar1 = Map_MapVersionConversionResult__get_IsReversible(result,(MethodInfo *)0x0);
        pSVar6 = "MapEditor";
        pSVar3 = "VersionConversion";
        item = "Reversible";
        if (!bVar1) {
          item = "Irreversible";
        }
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        }
        pSVar3 = UI_UIManager__GetLocale
                           (pSVar6,pSVar3,item,"","",(MethodInfo *)0x0);
        System_Text_StringBuilder__AppendLine_197dc70(__this_00,pSVar3,(MethodInfo *)0x0);
        pSVar3 = UI_UIManager__GetLocale
                           ("MapEditor","VersionConversion","Backup",
                            "","",(MethodInfo *)0x0);
        System_Text_StringBuilder__AppendLine_197dc70(__this_00,pSVar3,(MethodInfo *)0x0);
        pSVar4 = System_Text_StringBuilder__AppendLine(__this_00,(MethodInfo *)0x0);
        pSVar3 = UI_UIManager__GetLocale
                           ("MapEditor","VersionConversion","Changelog",
                            "","",(MethodInfo *)0x0);
        if (pSVar4 != (System_Text_StringBuilder_o *)0x0) {
          System_Text_StringBuilder__AppendLine_197dc70(pSVar4,pSVar3,(MethodInfo *)0x0);
          pIVar2 = (Il2CppObject *)(result->fields)._Converters_k__BackingField;
          if (pIVar2 != (Il2CppObject *)0x0) {
            local_res10 = InterfaceInvoker0_Invoke
                                    (0,(Il2CppClass *)
                                       TypeInfo_System_Collections_Generic_IEnumerable_IMapVersionConverter,
                                     pIVar2);
            local_60 = 0;
            local_58 = &local_res10;
            while( true ) {
              if (local_res10 == (Il2CppObject *)0x0) {
                ThrowNullReferenceException();
              }
              pvVar5 = InterfaceInvoker0_Invoke
                                 (0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,local_res10);
              if ((char)pvVar5 == '\0') break;
              if (local_res10 == (Il2CppObject *)0x0) {
                ThrowNullReferenceException();
              }
              pIVar2 = InterfaceInvoker0_Invoke
                                 (0,(Il2CppClass *)
                                    TypeInfo_System_Collections_Generic_IEnumerator_IMapVersionConverter,
                                  local_res10);
              if (pIVar2 == (Il2CppObject *)0x0) {
                ThrowNullReferenceException();
              }
              pIVar2 = InterfaceInvoker0_Invoke(3,(Il2CppClass *)TypeInfo_Map_IMapVersionConverter,pIVar2);
              if (pIVar2 == (Il2CppObject *)0x0) {
                ThrowNullReferenceException();
              }
              local_88 = InterfaceInvoker0_Invoke
                                   (0,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_string,
                                    pIVar2);
              local_50 = 0;
              local_48 = &local_88;
              while( true ) {
                if (local_88 == (Il2CppObject *)0x0) {
                  ThrowNullReferenceException();
                }
                pvVar5 = InterfaceInvoker0_Invoke
                                   (0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,local_88);
                if ((char)pvVar5 == '\0') break;
                if (local_88 == (Il2CppObject *)0x0) {
                  ThrowNullReferenceException();
                }
                pSVar3 = InterfaceInvoker0_Invoke
                                   (0,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_string,
                                    local_88);
                pSVar4 = System_Text_StringBuilder__Append_197dca0
                                   (__this_00,"- ",(MethodInfo *)0x0);
                if (pSVar4 == (System_Text_StringBuilder_o *)0x0) {
                  ThrowNullReferenceException();
                }
                System_Text_StringBuilder__AppendLine_197dc70(pSVar4,pSVar3,(MethodInfo *)0x0);
              }
              if (local_88 != (Il2CppObject *)0x0) {
                InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,local_88);
              }
            }
            if (local_res10 != (Il2CppObject *)0x0) {
              InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,local_res10);
            }
            pSVar3 = (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                               (__this_00,(__this_00->klass->vtable)._3_ToString.method);
            if (pSVar3 != (System_String_o *)0x0) {
              pSVar3 = System_String__TrimEnd(pSVar3,(MethodInfo *)0x0);
              if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
              }
              pSVar6 = UI_UIManager__GetLocale
                                 ("MapEditor","VersionConversion","Title",
                                  "","",(MethodInfo *)0x0);
              UI_ConfirmPopup__Show((UI_ConfirmPopup_o *)__this,pSVar3,local_res18,pSVar6,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      goto label_1822dc451;
    }
  }
  ThrowIndexOutOfRangeException();
}


// UI.MapEditorVersionConversionPopup$$.ctor
// il2cpp: void UI_MapEditorVersionConversionPopup___ctor (UI_MapEditorVersionConversionPopup_o* __this, const MethodInfo* method);
// 0x181dd9cd0

void UI_MapEditorVersionConversionPopup___ctor
               (UI_MapEditorVersionConversionPopup_o *__this,MethodInfo *method)

{
  UI_ConfirmPopup___ctor((UI_ToolsPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


