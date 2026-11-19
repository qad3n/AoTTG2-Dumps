// Type: Gisketch.Aottg2UI.Styling.GisketchSpriteLoader
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Styling/GisketchSpriteLoader.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Styling.GisketchSpriteLoader$$Load
// il2cpp: UnityEngine_Sprite_o* Gisketch_Aottg2UI_Styling_GisketchSpriteLoader__Load (System_String_o* resourcePath, const MethodInfo* method);
// 0x5333110
// eh: try 0x5333244..0x533324c -> pad 0x53333c8 catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x53333e0..0x53333e5 -> pad 0x5333405 cleanup
// eh: try 0x5333408..0x5333412 -> pad 0x533341a catch (...) [compiler noexcept guard]
// asm: 23 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x53333c8: mov rbx, rax
// asm:   0x53333cb: cmp edx, 1
// asm:   0x53333ce: jne 0x5333408
// asm:   0x53333d0: mov rdi, rbx
// asm:   0x53333d3: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x53333d8: mov rbx, qword ptr [rax]
// asm:   0x53333db: mov qword ptr [rsp + 0x20], rbx
// asm:   0x53333e0: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x53333e5: xor r12d, r12d
// asm:   0x53333e8: lea rdi, [rsp + 0x30]
// asm:   0x53333ed: xor esi, esi
// asm:   0x53333ef: call 0x5360ae0  ; Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose()
// asm:   0x53333f4: test rbx, rbx
// asm:   0x53333f7: je 0x533325b
// asm:   0x53333fd: mov rdi, rbx
// asm:   0x5333400: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5333405: mov rbx, rax
// asm:   0x5333408: lea rdi, [rsp + 0x20]
// asm:   0x533340d: call 0x2d4a2d0  ; il2cpp_runtime_helper_02d4a2d0()
// asm:   0x5333412: mov rdi, rbx
// asm:   0x5333415: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x533341a: mov rdi, rax
// asm:   0x533341d: call 0x2ab61e0  ; __clang_call_terminate()

UnityEngine_Sprite_o *
Gisketch_Aottg2UI_Styling_GisketchSpriteLoader__Load(System_String_o *resourcePath,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Object_o *x;
  UnityEngine_Texture2D_o *x_00;
  System_String_o *pSVar2;
  System_String_o *str2;
  System_String_o *pSVar3;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *pMVar4;
  System_String_o *area;
  int32_t local_7c;
  UnityEngine_Sprite_o *local_78;
  System_String_o *local_70;
  undefined8 local_68;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o *local_60;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_58;
  
  if (Il2CppMethodInitialized_07542875 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSpriteLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Resources_Load_Sprite);
    il2cpp_codegen_initialize_runtime_metadata(&"x");
    il2cpp_codegen_initialize_runtime_metadata(&"null");
    il2cpp_codegen_initialize_runtime_metadata(&" => ");
    il2cpp_codegen_initialize_runtime_metadata(&"SpriteLoader.ResourcesLoadSprite");
    Il2CppMethodInitialized_07542875 = '\x01';
  }
  local_78 = (UnityEngine_Sprite_o *)0x0;
  local_58.fields._startMs = 0;
  local_58.fields._enabled = false;
  local_58.fields._hotLoop = false;
  local_58.fields._26_6_ = 0;
  local_58.fields._area = (System_String_o *)0x0;
  local_58.fields._detail = (System_String_o *)0x0;
  local_7c = 0;
  x = (UnityEngine_Object_o *)0x0;
  bVar1 = System_String__IsNullOrEmpty(resourcePath,(MethodInfo *)0x0);
  if (!bVar1) {
    pMVar4 = extraout_RDX;
    if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSpriteLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSpriteLoader);
      pMVar4 = extraout_RDX_00;
    }
    bVar1 = Gisketch_Aottg2UI_Styling_GisketchSpriteLoader__TryGetCached(resourcePath,&local_78,pMVar4);
    if (bVar1) {
      return local_78;
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
    }
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Time
              (&local_58,"SpriteLoader.ResourcesLoadSprite",resourcePath,(MethodInfo *)0x0);
    local_68 = 0;
    local_60 = &local_58;
    x = (UnityEngine_Object_o *)
        UnityEngine_Resources__Load_object_
                  (resourcePath,(MethodInfo_3665C30 *)MethodInfo_UnityEngine_Resources_Load_Sprite);
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(&local_58,(MethodInfo *)0x0);
    pMVar4 = extraout_RDX_01;
    if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSpriteLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSpriteLoader);
      pMVar4 = extraout_RDX_02;
    }
    Gisketch_Aottg2UI_Styling_GisketchSpriteLoader__Store(resourcePath,(UnityEngine_Sprite_o *)x,pMVar4);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    x_00 = (UnityEngine_Texture2D_o *)0x0;
    bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if (x == (UnityEngine_Object_o *)0x0) goto label_053333c3;
      x_00 = UnityEngine_Sprite__get_texture((UnityEngine_Sprite_o *)x,(MethodInfo *)0x0);
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    pSVar3 = " => ";
    if (bVar1) {
      if (x_00 == (UnityEngine_Texture2D_o *)0x0) {
label_053333c3:
        ThrowNullReferenceException();
      }
      local_70 = "SpriteLoader.ResourcesLoadSprite";
      local_7c = (*(x_00->klass->vtable)._5_get_width.methodPtr)
                           (x_00,(x_00->klass->vtable)._5_get_width.method);
      pSVar2 = System_Int32__ToString(&local_7c,(MethodInfo *)0x0);
      local_7c = (*(x_00->klass->vtable)._7_get_height.methodPtr)
                           (x_00,(x_00->klass->vtable)._7_get_height.method);
      str2 = System_Int32__ToString(&local_7c,(MethodInfo *)0x0);
      area = local_70;
      pSVar2 = System_String__Concat_5301f10(pSVar2,"x",str2,(MethodInfo *)0x0);
    }
    else {
      pSVar2 = "null";
      area = "SpriteLoader.ResourcesLoadSprite";
    }
    pSVar3 = System_String__Concat_5301f10(resourcePath,pSVar3,pSVar2,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
    }
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark(area,pSVar3,(MethodInfo *)0x0);
  }
  return (UnityEngine_Sprite_o *)x;
}


// Gisketch.Aottg2UI.Styling.GisketchSpriteLoader$$TryGetCached
// il2cpp: bool Gisketch_Aottg2UI_Styling_GisketchSpriteLoader__TryGetCached (System_String_o* resourcePath, UnityEngine_Sprite_o** sprite, const MethodInfo* method);
// 0x5333430

bool Gisketch_Aottg2UI_Styling_GisketchSpriteLoader__TryGetCached
               (System_String_o *resourcePath,UnityEngine_Sprite_o **sprite,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  UnityEngine_Object_o *x;
  bool bVar1;
  
  if (Il2CppMethodInitialized_07542876 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Sprite_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSpriteLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542876 = '\x01';
  }
  *sprite = (UnityEngine_Sprite_o *)0x0;
  Il2CppCodeGenWriteBarrier(sprite);
  bVar1 = System_String__IsNullOrEmpty(resourcePath,(MethodInfo *)0x0);
  if (!bVar1) {
    if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSpriteLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSpriteLoader);
    }
    __this = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSpriteLoader->static_fields->Cache;
    if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar1 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (__this,(Il2CppObject *)resourcePath,(Il2CppObject **)sprite,
                       (MethodInfo_4AAF440 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_Sprite_TryGetValue);
    if (bVar1) {
      x = (UnityEngine_Object_o *)*sprite;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}


// Gisketch.Aottg2UI.Styling.GisketchSpriteLoader$$Store
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchSpriteLoader__Store (System_String_o* resourcePath, UnityEngine_Sprite_o* sprite, const MethodInfo* method);
// 0x5333510

void Gisketch_Aottg2UI_Styling_GisketchSpriteLoader__Store
               (System_String_o *resourcePath,UnityEngine_Sprite_o *sprite,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  bool bVar1;
  
  if (Il2CppMethodInitialized_07542877 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Sprite_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSpriteLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542877 = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(resourcePath,(MethodInfo *)0x0);
  if (!bVar1) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)sprite,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSpriteLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSpriteLoader);
      }
      __this = (System_Collections_Generic_Dictionary_object__object__o *)
               TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSpriteLoader->static_fields->Cache;
      if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        ThrowNullReferenceException();
      }
      System_Collections_Generic_Dictionary_object__object___set_Item
                (__this,(Il2CppObject *)resourcePath,(Il2CppObject *)sprite,
                 (MethodInfo_4AAD4C0 *)MethodInfo_System_Collections_Generic_Dictionary_string_Sprite_set_Item
                );
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Styling.GisketchSpriteLoader$$Release
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchSpriteLoader__Release (System_Collections_Generic_IEnumerable_string__o* resourcePaths, const MethodInfo* method);
// 0x53335e0
// eh: try 0x533372f..0x5333824 -> pad 0x5333831 (+5 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x533384f..0x5333854 -> pad 0x53338e2 cleanup
// eh: try 0x53338e5..0x53338ef -> pad 0x53338f7 catch (...) [compiler noexcept guard]
// asm: 24 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x53336ee: nop 
// asm:   0x533371c: nop dword ptr [rax]
// asm:   0x5333829: jmp 0x5333833
// asm:   0x533382b: jmp 0x5333833
// asm:   0x533382d: jmp 0x5333833
// asm:   0x533382f: jmp 0x5333833
// asm:   0x5333831: jmp 0x5333833
// asm:   0x5333833: mov rbx, rax
// asm:   0x5333836: cmp edx, 1
// asm:   0x5333839: jne 0x53338e5
// asm:   0x533383f: mov rdi, rbx
// asm:   0x5333842: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5333847: mov r14, qword ptr [rax]
// asm:   0x533384a: mov qword ptr [rsp + 8], r14
// asm:   0x533384f: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x53338da: mov rdi, r14
// asm:   0x53338dd: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x53338e2: mov rbx, rax
// asm:   0x53338e5: lea rdi, [rsp + 8]
// asm:   0x53338ea: call 0x2d4a2f0  ; il2cpp_runtime_helper_02d4a2f0()
// asm:   0x53338ef: mov rdi, rbx
// asm:   0x53338f2: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x53338f7: mov rdi, rax
// asm:   0x53338fa: call 0x2ab61e0  ; __clang_call_terminate()

void Gisketch_Aottg2UI_Styling_GisketchSpriteLoader__Release
               (System_Collections_Generic_IEnumerable_string__o *resourcePaths,MethodInfo *method)

{
  System_Collections_Generic_IEnumerable_string__c *pSVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  Il2CppClass *pIVar3;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  Il2CppObject *pIVar4;
  bool bVar5;
  VirtualInvokeData *pVVar6;
  System_String_o *key;
  ulong uVar7;
  long lVar8;
  Il2CppObject *local_48;
  undefined8 local_40;
  undefined1 *local_38;
  
  if (Il2CppMethodInitialized_07542878 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Sprite_Remove);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSpriteLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerable_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerator_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    Il2CppMethodInitialized_07542878 = '\x01';
  }
  if (resourcePaths == (System_Collections_Generic_IEnumerable_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar1 = resourcePaths->klass;
  uVar7 = (ulong)(pSVar1->_2).interface_offsets_count;
  if (uVar7 != 0) {
    pIVar2 = (pSVar1->_1).interfaceOffsets;
    lVar8 = 0;
    do {
      if (*(System_Collections_Generic_IEnumerable_string__c **)((long)&pIVar2->interfaceType + lVar8) ==
          TypeInfo_System_Collections_Generic_IEnumerable_string) {
        pVVar6 = pSVar1->vtable + *(int *)((long)&pIVar2->offset + lVar8);
        goto label_053336b1;
      }
      lVar8 = lVar8 + 0x10;
    } while (uVar7 * 0x10 != lVar8);
  }
  pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                     ((Il2CppObject *)resourcePaths,
                      (Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_string,0);
label_053336b1:
  local_48 = (*pVVar6->methodPtr)((Il2CppObject *)resourcePaths,pVVar6->method);
  local_38 = (undefined1 *)&local_48;
  local_40 = 0;
  do {
    pIVar4 = local_48;
    if (local_48 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar3 = local_48->klass;
    uVar7 = (ulong)(pIVar3->_2).interface_offsets_count;
    if (uVar7 != 0) {
      pIVar2 = (pIVar3->_1).interfaceOffsets;
      lVar8 = 0;
      do {
        if (*(System_Collections_IEnumerator_c **)((long)&pIVar2->interfaceType + lVar8) ==
            TypeInfo_System_Collections_IEnumerator) {
          pVVar6 = pIVar3->vtable + *(int *)((long)&pIVar2->offset + lVar8);
          goto label_05333753;
        }
        lVar8 = lVar8 + 0x10;
      } while (uVar7 * 0x10 != lVar8);
    }
    pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                       (local_48,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_05333753:
    bVar5 = (*pVVar6->methodPtr)(pIVar4,pVVar6->method);
    pIVar4 = local_48;
    if (!bVar5) {
      if (local_48 == (Il2CppObject *)0x0) {
        return;
      }
      pIVar3 = local_48->klass;
      uVar7 = (ulong)(pIVar3->_2).interface_offsets_count;
      if (uVar7 == 0) goto label_0533389f;
      pIVar2 = (pIVar3->_1).interfaceOffsets;
      lVar8 = 0;
      break;
    }
    if (local_48 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar3 = local_48->klass;
    uVar7 = (ulong)(pIVar3->_2).interface_offsets_count;
    if (uVar7 != 0) {
      pIVar2 = (pIVar3->_1).interfaceOffsets;
      lVar8 = 0;
      do {
        if (*(System_Collections_Generic_IEnumerator_string__c **)((long)&pIVar2->interfaceType + lVar8) ==
            TypeInfo_System_Collections_Generic_IEnumerator_string) {
          pVVar6 = pIVar3->vtable + *(int *)((long)&pIVar2->offset + lVar8);
          goto label_053337d3;
        }
        lVar8 = lVar8 + 0x10;
      } while (uVar7 * 0x10 != lVar8);
    }
    pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                       (local_48,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_string,0);
label_053337d3:
    key = (*pVVar6->methodPtr)(pIVar4,pVVar6->method);
    if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSpriteLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSpriteLoader);
    }
    __this = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSpriteLoader->static_fields->Cache;
    if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_Dictionary_object__object___Remove
              (__this,(Il2CppObject *)key,
               (MethodInfo_4AAED10 *)MethodInfo_System_Collections_Generic_Dictionary_string_Sprite_Remove);
  } while( true );
  while (lVar8 = lVar8 + 0x10, uVar7 * 0x10 != lVar8) {
    if (*(System_IDisposable_c **)((long)&pIVar2->interfaceType + lVar8) == TypeInfo_System_IDisposable) {
      pVVar6 = pIVar3->vtable + *(int *)((long)&pIVar2->offset + lVar8);
      goto label_053338bd;
    }
  }
label_0533389f:
  pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath(local_48,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_053338bd:
  (*pVVar6->methodPtr)(pIVar4,pVVar6->method);
  return;
}


// Gisketch.Aottg2UI.Styling.GisketchSpriteLoader$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchSpriteLoader___cctor (const MethodInfo* method);
// 0x5333900

void Gisketch_Aottg2UI_Styling_GisketchSpriteLoader___cctor(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__Sprite__o *__this;
  
  if (Il2CppMethodInitialized_07542879 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Sprite_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_Sprite);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSpriteLoader);
    Il2CppMethodInitialized_07542879 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_Sprite);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this,
             (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_string_Sprite_ctor);
  TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSpriteLoader->static_fields->Cache = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSpriteLoader->static_fields->Cache);
  return;
}


