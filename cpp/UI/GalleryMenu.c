// Type: UI.GalleryMenu
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/UI/GalleryMenu.cs
// Prior real C# source (older reference): Assets/Scripts/UI/GalleryMenu/GalleryMenu.cs
// --------------------------------

// UI.GalleryMenu$$get_Count
// il2cpp: int32_t UI_GalleryMenu__get_Count (UI_GalleryMenu_o* __this, const MethodInfo* method);
// 0x5cf9e20

int32_t UI_GalleryMenu__get_Count(UI_GalleryMenu_o *__this,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_List_string__o *pSVar2;
  
  if (Il2CppMethodInitialized_07547ccf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_07547ccf = '\x01';
  }
  iVar1 = (__this->fields)._backgroundCount;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar2 = TypeInfo_UI_UIManager->static_fields->AvailableProfileIcons;
  if (pSVar2 == (System_Collections_Generic_List_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  return iVar1 + (pSVar2->fields)._size;
}


// UI.GalleryMenu$$Setup
// il2cpp: void UI_GalleryMenu__Setup (UI_GalleryMenu_o* __this, const MethodInfo* method);
// 0x5cf9ea0

void UI_GalleryMenu__Setup(UI_GalleryMenu_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  UnityEngine_Transform_o *parent;
  UnityEngine_GameObject_o *pUVar3;
  
  if (Il2CppMethodInitialized_07547cd0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MainMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ViewerMenu);
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Misc/GalleryImage");
    il2cpp_codegen_initialize_runtime_metadata(&"AllBackgrounds");
    Il2CppMethodInitialized_07547cd0 = '\x01';
  }
  UI_BaseMenu__Setup((UI_BaseMenu_o *)__this,(MethodInfo *)0x0);
  pSVar2 = TypeInfo_UI_MainMenu->static_fields->MainBackgroundInfo;
  if (pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar2 = (*(pSVar2->klass->vtable)._7_get_Item.methodPtr)
                       (pSVar2,"AllBackgrounds",(pSVar2->klass->vtable)._7_get_Item.method);
    if (pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0) {
      iVar1 = (*(pSVar2->klass->vtable)._35_get_AsInt.methodPtr)
                        (pSVar2,(pSVar2->klass->vtable)._35_get_AsInt.method);
      (__this->fields)._backgroundCount = iVar1;
      parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      pUVar3 = UI_ElementFactory__InstantiateAndBind(parent,"Prefabs/Misc/GalleryImage",(MethodInfo *)0x0);
      (__this->fields)._picture = pUVar3;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._picture);
      pUVar3 = (__this->fields)._picture;
      if ((TypeInfo_UI_ViewerMenu->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_ViewerMenu);
      }
      UI_ElementFactory__SetAnchor
                (pUVar3,4,4,
                 (UnityEngine_Vector2_o)*(UnityEngine_Vector2_Fields *)TypeInfo_UI_ViewerMenu->static_fields,
                 (MethodInfo *)0x0);
      UI_ViewerMenu__ShowCurrent((UI_ViewerMenu_o *)__this,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.GalleryMenu$$Load
// il2cpp: void UI_GalleryMenu__Load (UI_GalleryMenu_o* __this, int32_t index, const MethodInfo* method);
// 0x5cf9fe0

void UI_GalleryMenu__Load(UI_GalleryMenu_o *__this,int32_t index,MethodInfo *method)

{
  int iVar1;
  UnityEngine_GameObject_o *__this_00;
  UI_GalleryMenu_StaticFields *pUVar2;
  System_Collections_Generic_List_string__o *__this_01;
  UnityEngine_UI_Image_o *pUVar3;
  System_String_o *pSVar4;
  MethodInfo *method_00;
  MethodInfo *method_01;
  undefined8 uVar5;
  undefined8 uVar6;
  UnityEngine_Color_o UVar7;
  int32_t iStack_2c;
  
  iStack_2c = index;
  if (Il2CppMethodInitialized_07547cd1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_GalleryMenu);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/Profile/FullSize/");
    il2cpp_codegen_initialize_runtime_metadata(&"IconFull");
    il2cpp_codegen_initialize_runtime_metadata(&"Texture");
    il2cpp_codegen_initialize_runtime_metadata(&"Backgrounds/MainBackground");
    Il2CppMethodInitialized_07547cd1 = '\x01';
  }
  __this_00 = (__this->fields)._picture;
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    iVar1 = (__this->fields)._backgroundCount;
    pUVar3 = UnityEngine_GameObject__GetComponent_object_
                       (__this_00,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Image);
    uVar5 = 0;
    uVar6 = 0;
    if (index < iVar1) {
      if ((TypeInfo_UI_GalleryMenu->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_GalleryMenu);
      }
      pUVar2 = TypeInfo_UI_GalleryMenu->static_fields;
      uVar5._0_4_ = (pUVar2->FrameColor).fields.r;
      uVar5._4_4_ = (pUVar2->FrameColor).fields.g;
      uVar6._0_4_ = (pUVar2->FrameColor).fields.b;
      uVar6._4_4_ = (pUVar2->FrameColor).fields.a;
    }
    if (pUVar3 != (UnityEngine_UI_Image_o *)0x0) {
      UVar7.fields.b = (float)(int)uVar6;
      UVar7.fields.a = (float)(int)((ulong)uVar6 >> 0x20);
      UVar7.fields.r = (float)(int)uVar5;
      UVar7.fields.g = (float)(int)((ulong)uVar5 >> 0x20);
      (*(pUVar3->klass->vtable)._23_set_color.methodPtr)
                (pUVar3,UVar7,(pUVar3->klass->vtable)._23_set_color.method);
      if (index < iVar1) {
        pSVar4 = System_Int32__ToString(&iStack_2c,(MethodInfo *)0x0);
        pSVar4 = System_String__Concat_5301f10
                           ("Backgrounds/MainBackground",pSVar4,"Texture",(MethodInfo *)0x0);
        UI_GalleryMenu__SetPicture(__this,pSVar4,method_00);
        return;
      }
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      __this_01 = TypeInfo_UI_UIManager->static_fields->AvailableProfileIcons;
      if (__this_01 != (System_Collections_Generic_List_string__o *)0x0) {
        pSVar4 = System_Collections_Generic_List_object___get_Item
                           ((System_Collections_Generic_List_object__o *)__this_01,
                            index - (__this->fields)._backgroundCount,
                            (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_string_get_Item);
        pSVar4 = System_String__Concat_5301f10
                           ("Icons/Profile/FullSize/",pSVar4,"IconFull",(MethodInfo *)0x0);
        UI_GalleryMenu__SetPicture(__this,pSVar4,method_01);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.GalleryMenu$$SetPicture
// il2cpp: void UI_GalleryMenu__SetPicture (UI_GalleryMenu_o* __this, System_String_o* image, const MethodInfo* method);
// 0x5cfa1b0
// eh: try 0x5cfa278..0x5cfa534 -> pad 0x5cfa54a (+21 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: runtime default class]
// eh: try 0x5cfa57c..0x5cfa5fa -> pad 0x5cfa5fa (+1 call sites) cleanup
// eh: try 0x5cfa5fd..0x5cfa602 -> pad 0x5cfa60a catch (...) [compiler noexcept guard]
// asm: 70 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5cfa3df: jmp 0x5cfa454
// asm:   0x5cfa3e1: movaps xmm1, xmm0
// asm:   0x5cfa3e4: jmp 0x5cfa454
// asm:   0x5cfa3ec: nop dword ptr [rax]
// asm:   0x5cfa534: jmp 0x5cfa554
// asm:   0x5cfa536: jmp 0x5cfa554
// asm:   0x5cfa538: jmp 0x5cfa554
// asm:   0x5cfa53a: jmp 0x5cfa554
// asm:   0x5cfa53c: jmp 0x5cfa554
// asm:   0x5cfa53e: jmp 0x5cfa554
// asm:   0x5cfa540: jmp 0x5cfa554
// asm:   0x5cfa542: jmp 0x5cfa554
// asm:   0x5cfa544: jmp 0x5cfa554
// asm:   0x5cfa546: jmp 0x5cfa554
// asm:   0x5cfa548: jmp 0x5cfa554
// asm:   0x5cfa54a: jmp 0x5cfa554
// asm:   0x5cfa54c: jmp 0x5cfa554
// asm:   0x5cfa54e: jmp 0x5cfa554
// asm:   0x5cfa550: jmp 0x5cfa554
// asm:   0x5cfa552: jmp 0x5cfa554
// asm:   0x5cfa554: mov rbx, rax
// asm:   0x5cfa557: cmp edx, 1
// asm:   0x5cfa55a: jne 0x5cfa602
// asm:   0x5cfa560: mov rdi, rbx
// asm:   0x5cfa563: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5cfa568: mov rbx, rax
// asm:   0x5cfa56b: lea rax, [rip + 0x185c156]
// asm:   0x5cfa572: mov rdi, qword ptr [rax + 0x10]
// asm:   0x5cfa576: mov rax, qword ptr [rbx]
// asm:   0x5cfa579: mov rsi, qword ptr [rax]
// asm:   0x5cfa57c: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5cfa581: test al, al
// asm:   0x5cfa583: je 0x5cfa5d9
// asm:   0x5cfa585: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5cfa58a: lea rdi, [rip + 0x15e09ef]  ; "Error loading "
// asm:   0x5cfa591: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5cfa596: mov rdi, rax
// asm:   0x5cfa599: mov rsi, r14
// asm:   0x5cfa59c: xor edx, edx
// asm:   0x5cfa59e: call 0x53f0320  ; System_String__Concat()
// asm:   0x5cfa5a3: mov rbx, rax
// asm:   0x5cfa5a6: lea rdi, [rip + 0x157d09b]  ; TypeInfo_UnityEngine_Debug
// asm:   0x5cfa5ad: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5cfa5b2: cmp dword ptr [rax + 0xe4], 0
// asm:   0x5cfa5b9: jne 0x5cfa5c3
// asm:   0x5cfa5bb: mov rdi, rax
// asm:   0x5cfa5be: call 0x30d6240  ; il2cpp_codegen_runtime_class_init()
// asm:   0x5cfa5c3: mov rdi, rbx
// asm:   0x5cfa5c6: xor esi, esi
// asm:   0x5cfa5c8: add rsp, 0x10
// asm:   0x5cfa5cc: pop rbx
// asm:   0x5cfa5cd: pop r12
// asm:   0x5cfa5cf: pop r14
// asm:   0x5cfa5d1: pop r15
// asm:   0x5cfa5d3: pop rbp
// asm:   0x5cfa5d4: jmp 0x69c42a0  ; UnityEngine_Debug__Log()
// asm:   0x5cfa5d9: mov edi, 8
// asm:   0x5cfa5de: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5cfa5e3: mov rcx, qword ptr [rbx]
// asm:   0x5cfa5e6: mov qword ptr [rax], rcx
// asm:   0x5cfa5e9: lea rsi, [rip + 0x1132f10]
// asm:   0x5cfa5f0: mov rdi, rax
// asm:   0x5cfa5f3: xor edx, edx
// asm:   0x5cfa5f5: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5cfa5fa: mov rbx, rax
// asm:   0x5cfa5fd: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5cfa602: mov rdi, rbx
// asm:   0x5cfa605: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5cfa60a: mov rdi, rax
// asm:   0x5cfa60d: call 0x2ab61e0  ; __clang_call_terminate()

void UI_GalleryMenu__SetPicture(UI_GalleryMenu_o *__this,System_String_o *image,MethodInfo *method)

{
  UnityEngine_GameObject_o *pUVar1;
  System_String_o *path;
  int32_t iVar2;
  int32_t iVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_UI_RawImage_o *__this_00;
  UnityEngine_Texture_o *pUVar5;
  Il2CppObject *pIVar6;
  ulong uVar7;
  UnityEngine_RectTransform_o *__this_01;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  float fVar13;
  UnityEngine_Vector2_o value;
  float fVar14;
  
  if (Il2CppMethodInitialized_07547cd2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RawImage);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_float_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Texture2D);
    il2cpp_codegen_initialize_runtime_metadata(&"Background");
    Il2CppMethodInitialized_07547cd2 = '\x01';
  }
  pUVar1 = (__this->fields)._picture;
  if (((pUVar1 == (UnityEngine_GameObject_o *)0x0) ||
      (pUVar4 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0),
      pUVar4 == (UnityEngine_Transform_o *)0x0)) ||
     (pUVar4 = UnityEngine_Transform__Find(pUVar4,"Background",(MethodInfo *)0x0),
     pUVar4 == (UnityEngine_Transform_o *)0x0)) {
    ThrowNullReferenceException();
  }
  __this_00 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)pUVar4,
                         (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_RawImage);
  UnityEngine_Resources__UnloadUnusedAssets((MethodInfo *)0x0);
  if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
  }
  path = TypeInfo_Utility_ResourcePaths->static_fields->UI;
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  pUVar5 = (UnityEngine_Texture_o *)
           ApplicationManagers_ResourceManager__LoadAsset(path,image,false,false,(MethodInfo *)0x0);
  if (__this_00 == (UnityEngine_UI_RawImage_o *)0x0) {
    ThrowNullReferenceException();
  }
  if ((pUVar5 != (UnityEngine_Texture_o *)0x0) &&
     (pUVar5->klass != (UnityEngine_Texture_c *)TypeInfo_UnityEngine_Texture2D)) {
    il2cpp_codegen_raise_invalid_cast_exception(pUVar5);
  }
  UnityEngine_UI_RawImage__set_texture(__this_00,pUVar5,(MethodInfo *)0x0);
  pIVar6 = SZArrayNew(TypeInfo_float_array,3);
  if (pIVar6 == (Il2CppObject *)0x0) {
    ThrowNullReferenceException();
  }
  if (*(int *)&pIVar6[1].monitor == 0) {
    ThrowIndexOutOfRangeException();
  }
  *(undefined4 *)&pIVar6[2].klass = 0x3f800000;
  pUVar5 = (__this_00->fields).m_Texture;
  if (pUVar5 == (UnityEngine_Texture_o *)0x0) {
    ThrowNullReferenceException();
  }
  iVar2 = (*(pUVar5->klass->vtable)._5_get_width.methodPtr)
                    (pUVar5,(pUVar5->klass->vtable)._5_get_width.method);
  if (((ulong)pIVar6[1].monitor & 0xfffffffe) == 0) {
    ThrowIndexOutOfRangeException();
  }
  *(float *)((long)&pIVar6[2].klass + 4) = 1280.0 / (float)iVar2;
  pUVar5 = (__this_00->fields).m_Texture;
  if (pUVar5 == (UnityEngine_Texture_o *)0x0) {
    ThrowNullReferenceException();
  }
  iVar2 = (*(pUVar5->klass->vtable)._7_get_height.methodPtr)
                    (pUVar5,(pUVar5->klass->vtable)._7_get_height.method);
  uVar8 = (uint)pIVar6[1].monitor;
  if (uVar8 < 3) {
    ThrowIndexOutOfRangeException();
  }
  *(float *)&pIVar6[2].monitor = 900.0 / (float)iVar2;
  fVar14 = *(float *)&pIVar6[2].klass;
  if (1 < (int)uVar8) {
    uVar9 = (ulong)pIVar6[1].monitor & 0xffffffff;
    uVar12 = uVar9 - 1;
    uVar7 = (ulong)((uint)uVar12 & 3);
    if (uVar9 - 2 < 3) {
      lVar10 = 1;
    }
    else {
      uVar9 = 0;
      do {
        uVar11 = uVar9;
        fVar13 = *(float *)((long)&pIVar6[2].klass + uVar11 * 4 + 4);
        if (fVar14 <= fVar13) {
          fVar13 = fVar14;
        }
        fVar14 = *(float *)((long)&pIVar6[2].monitor + uVar11 * 4);
        if (fVar13 <= fVar14) {
          fVar14 = fVar13;
        }
        fVar13 = *(float *)((long)&pIVar6[2].monitor + uVar11 * 4 + 4);
        if (fVar14 <= fVar13) {
          fVar13 = fVar14;
        }
        fVar14 = *(float *)((long)&pIVar6[3].klass + uVar11 * 4);
        if (fVar13 <= fVar14) {
          fVar14 = fVar13;
        }
        uVar9 = uVar11 + 4;
      } while ((uVar12 & 0xfffffffffffffffc) != uVar11 + 4);
      lVar10 = uVar11 + 5;
    }
    if (uVar7 != 0) {
      uVar12 = 0;
      fVar13 = fVar14;
      do {
        fVar14 = *(float *)((long)&pIVar6[2].klass + uVar12 * 4 + lVar10 * 4);
        if (fVar13 <= fVar14) {
          fVar14 = fVar13;
        }
        uVar12 = uVar12 + 1;
        fVar13 = fVar14;
      } while (uVar7 != uVar12);
    }
  }
  pUVar1 = (__this->fields)._picture;
  if (pUVar1 == (UnityEngine_GameObject_o *)0x0) {
    ThrowNullReferenceException();
  }
  __this_01 = UnityEngine_GameObject__GetComponent_object_
                        (pUVar1,(MethodInfo_353B730 *)
                                MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
  pUVar5 = (__this_00->fields).m_Texture;
  if (pUVar5 == (UnityEngine_Texture_o *)0x0) {
    ThrowNullReferenceException();
  }
  iVar2 = (*(pUVar5->klass->vtable)._5_get_width.methodPtr)
                    (pUVar5,(pUVar5->klass->vtable)._5_get_width.method);
  pUVar5 = (__this_00->fields).m_Texture;
  if (pUVar5 == (UnityEngine_Texture_o *)0x0) {
    ThrowNullReferenceException();
  }
  iVar3 = (*(pUVar5->klass->vtable)._7_get_height.methodPtr)
                    (pUVar5,(pUVar5->klass->vtable)._7_get_height.method);
  if (__this_01 == (UnityEngine_RectTransform_o *)0x0) {
    ThrowNullReferenceException();
  }
  value.fields.x = fVar14 * (float)iVar2;
  value.fields.y = fVar14 * (float)iVar3;
  UnityEngine_RectTransform__set_sizeDelta(__this_01,value,(MethodInfo *)0x0);
  return;
}


// UI.GalleryMenu$$.ctor
// il2cpp: void UI_GalleryMenu___ctor (UI_GalleryMenu_o* __this, const MethodInfo* method);
// 0x5cfa620

void UI_GalleryMenu___ctor(UI_GalleryMenu_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07547cd3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ViewerMenu);
    Il2CppMethodInitialized_07547cd3 = '\x01';
    uVar1 = (TypeInfo_UI_ViewerMenu->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_UI_ViewerMenu->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_ViewerMenu);
    UI_ViewerMenu___ctor((UI_ViewerMenu_o *)__this,(MethodInfo *)0x0);
    return;
  }
  UI_ViewerMenu___ctor((UI_ViewerMenu_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.GalleryMenu$$.cctor
// il2cpp: void UI_GalleryMenu___cctor (const MethodInfo* method);
// 0x5cfa690

void UI_GalleryMenu___cctor(MethodInfo *method)

{
  UI_GalleryMenu_StaticFields *pUVar1;
  
  if (Il2CppMethodInitialized_07547cd4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_GalleryMenu);
    Il2CppMethodInitialized_07547cd4 = '\x01';
  }
  pUVar1 = TypeInfo_UI_GalleryMenu->static_fields;
  (pUVar1->FrameColor).fields.r = 0.75;
  (pUVar1->FrameColor).fields.g = 0.75;
  (pUVar1->FrameColor).fields.b = 0.75;
  (pUVar1->FrameColor).fields.a = 1.0;
  return;
}


