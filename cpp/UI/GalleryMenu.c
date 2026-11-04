// Type: UI.GalleryMenu
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/GalleryMenu.cs
// Prior real C# source (older reference): Assets/Scripts/UI/GalleryMenu/GalleryMenu.cs
// --------------------------------

// UI.GalleryMenu$$Setup
// il2cpp: void UI_GalleryMenu__Setup (UI_GalleryMenu_o* __this, const MethodInfo* method);
// 0x182237330

void UI_GalleryMenu__Setup(UI_GalleryMenu_o *__this,MethodInfo *method)

{
  int iVar1;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  System_Collections_Generic_List_string__o *pSVar3;
  UnityEngine_LowLevelPhysics2D_PhysicsMask_o bitMask;
  int32_t iVar4;
  System_Xml_Schema_XmlSchema_o *pSVar5;
  UnityEngine_Transform_o *pUVar6;
  UI_GalleryMainPanel_o *pUVar7;
  UnityEngine_GameObject_o *pUVar8;
  
  if (Il2CppMethodInitialized_184347169 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_GalleryMainPanel);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateHeadedPanel_GalleryMainPanel);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MainMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Misc/GalleryImage");
    il2cpp_codegen_initialize_runtime_metadata(&"AllBackgrounds");
    Il2CppMethodInitialized_184347169 = '\x01';
  }
  UI_BaseMenu__Setup((System_Net_TimerThread_Timer_o *)__this,(MethodInfo *)0x0);
  pSVar2 = TypeInfo_UI_MainMenu->static_fields->MainBackgroundInfo;
  if (pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar5 = (*(pSVar2->klass->vtable)._7_get_Item.methodPtr)(pSVar2,(MethodInfo *)"AllBackgrounds");
    if (pSVar5 != (System_Xml_Schema_XmlSchema_o *)0x0) {
      iVar4 = (*(code *)((Il2CppClass *)pSVar5->klass)->vtable[35].methodPtr)(pSVar5);
      (__this->fields)._backgroundCount = iVar4;
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pSVar3 = TypeInfo_UI_UIManager->static_fields->AvailableProfileIcons;
      if (pSVar3 != (System_Collections_Generic_List_string__o *)0x0) {
        iVar1 = (pSVar3->fields)._size;
        (__this->fields)._profileCount = iVar1;
        (__this->fields).TotalBackgroundCount = iVar1 + (__this->fields)._backgroundCount;
        pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        pUVar7 = UI_ElementFactory__CreateHeadedPanel_object_
                           (pUVar6,true,
                            (MethodInfo_6ABA40 *)
                            MethodInfo_UI_ElementFactory_CreateHeadedPanel_GalleryMainPanel);
        if (pUVar7 != (UI_GalleryMainPanel_o *)0x0) {
          pUVar7 = UnityEngine_Component__GetComponent_object_
                             ((UnityEngine_Component_o *)pUVar7,
                              (MethodInfo_6651A0 *)
                              MethodInfo_UnityEngine_Component_GetComponent_GalleryMainPanel);
          (__this->fields)._mainPanel = pUVar7;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._mainPanel,pUVar7);
          pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          pUVar8 = UI_ElementFactory__InstantiateAndBind(pUVar6,"Prefabs/Misc/GalleryImage",(MethodInfo *)0x0);
          (__this->fields)._picture = pUVar8;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._picture,pUVar8);
          bitMask.fields.bitMask = (UnityEngine_LowLevelPhysics2D_PhysicsMask_Fields)(__this->fields)._picture
          ;
          if (bitMask.fields.bitMask != 0) {
            pUVar8 = (UnityEngine_GameObject_o *)
                     UnityEngine_LowLevelPhysics2D_PhysicsMask__op_Implicit(bitMask,(MethodInfo *)0x0);
            UI_ElementFactory__SetAnchor
                      (pUVar8,4,4,(UnityEngine_Vector2_o)0xc1f0000000000000,(MethodInfo *)0x0);
            pUVar7 = (__this->fields)._mainPanel;
            if (pUVar7 != (UI_GalleryMainPanel_o *)0x0) {
              pUVar8 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0);
              UI_ElementFactory__SetAnchor(pUVar8,1,1,(UnityEngine_Vector2_o)0x0,(MethodInfo *)0x0);
              UI_GalleryMenu__LoadGallery(__this,0,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.GalleryMenu$$LoadGallery
// il2cpp: void UI_GalleryMenu__LoadGallery (UI_GalleryMenu_o* __this, int32_t index, const MethodInfo* method);
// 0x182236ee0

void UI_GalleryMenu__LoadGallery(UI_GalleryMenu_o *__this,int32_t index,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  System_Collections_Generic_List_string__o *__this_01;
  UnityEngine_UI_Image_o *pUVar1;
  System_String_o *str1;
  System_String_o *pSVar2;
  System_String_o *str2;
  int32_t local_res10 [6];
  UnityEngine_Color_Fields local_18;
  
  local_res10[0] = index;
  if (Il2CppMethodInitialized_18434716a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/Profile/FullSize/");
    il2cpp_codegen_initialize_runtime_metadata(&"IconFull");
    il2cpp_codegen_initialize_runtime_metadata(&"Texture");
    il2cpp_codegen_initialize_runtime_metadata(&"Backgrounds/MainBackground");
    Il2CppMethodInitialized_18434716a = '\x01';
  }
  __this_00 = (__this->fields)._picture;
  if (local_res10[0] < (__this->fields)._backgroundCount) {
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      pUVar1 = UnityEngine_GameObject__GetComponent_object_
                         (__this_00,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Image)
      ;
      if (pUVar1 != (UnityEngine_UI_Image_o *)0x0) {
        local_18.r = 0.75;
        local_18.g = 0.75;
        local_18.b = 0.75;
        local_18.a = 1.0;
        (*(pUVar1->klass->vtable)._23_set_color.methodPtr)
                  (pUVar1,(UnityEngine_Color_o *)&local_18,(pUVar1->klass->vtable)._23_set_color.method);
        str1 = System_Int32__ToString(local_res10,(MethodInfo *)0x0);
        pSVar2 = "Backgrounds/MainBackground";
        str2 = "Texture";
label_18223705e:
        pSVar2 = System_String__Concat_1969b70(pSVar2,str1,str2,(MethodInfo *)0x0);
        UI_GalleryMenu__SetBackground(__this,pSVar2,(MethodInfo *)0x0);
        return;
      }
    }
  }
  else {
    local_res10[0] = local_res10[0] - (__this->fields)._backgroundCount;
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      pUVar1 = UnityEngine_GameObject__GetComponent_object_
                         (__this_00,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Image)
      ;
      if (pUVar1 != (UnityEngine_UI_Image_o *)0x0) {
        local_18.r = 0.75;
        local_18.g = 0.75;
        local_18.b = 0.75;
        local_18.a = 0.0;
        (*(pUVar1->klass->vtable)._23_set_color.methodPtr)
                  (pUVar1,(UnityEngine_Color_o *)&local_18,(pUVar1->klass->vtable)._23_set_color.method);
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        }
        __this_01 = TypeInfo_UI_UIManager->static_fields->AvailableProfileIcons;
        if (__this_01 != (System_Collections_Generic_List_string__o *)0x0) {
          str1 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                           ((System_Collections_Generic_List_object__o *)__this_01,local_res10[0],
                            (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_string_get_Item);
          pSVar2 = "Icons/Profile/FullSize/";
          str2 = "IconFull";
          goto label_18223705e;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.GalleryMenu$$SetBackground
// il2cpp: void UI_GalleryMenu__SetBackground (UI_GalleryMenu_o* __this, System_String_o* image, const MethodInfo* method);
// 0x182237090
// eh: try 0x182237153..0x18223732b -> pad 0x183315840 (+1 call sites) catch Il2CppExceptionWrapper [managed catch: runtime default class]
// asm: 40 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18223724d: movaps xmm7, xmm1
// asm:   0x1822372a2: lea rcx, [rip + 0x1e97807]  ; "Error loading "
// asm:   0x1822372a9: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1822372ae: mov rcx, rax
// asm:   0x1822372b1: xor r8d, r8d
// asm:   0x1822372b4: mov rdx, qword ptr [rsp + 0x88]
// asm:   0x1822372bc: call 0x181969e50  ; System_String__Concat()
// asm:   0x1822372c1: mov rbx, rax
// asm:   0x1822372c4: lea rcx, [rip + 0x1ec416d]  ; TypeInfo_UnityEngine_Debug
// asm:   0x1822372cb: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1822372d0: cmp dword ptr [rax + 0xe4], 0
// asm:   0x1822372d7: jne 0x1822372e1
// asm:   0x1822372d9: mov rcx, rax
// asm:   0x1822372dc: call 0x1804171c0  ; il2cpp_codegen_runtime_class_init()
// asm:   0x1822372e1: xor edx, edx
// asm:   0x1822372e3: mov rcx, rbx
// asm:   0x1822372e6: call 0x182ec3bd0  ; UnityEngine_Debug__Log()
// asm:   0x183315840: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315845: push rbx
// asm:   0x183315846: push rbp
// asm:   0x183315847: sub rsp, 0x28
// asm:   0x18331584b: mov rbp, rdx
// asm:   0x18331584e: mov rbx, qword ptr [rbp + 0x28]
// asm:   0x183315852: mov rdx, qword ptr [rbx]
// asm:   0x183315855: mov rdx, qword ptr [rdx]
// asm:   0x183315858: mov rcx, qword ptr [rip + 0x103f571]
// asm:   0x18331585f: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x183315864: test al, al
// asm:   0x183315866: je 0x183315874
// asm:   0x183315868: movabs rax, 0
// asm:   0x183315872: jmp 0x18331588c
// asm:   0x183315874: mov rax, qword ptr [rbx]
// asm:   0x183315877: mov qword ptr [rbp + 0x20], rax
// asm:   0x18331587b: lea rdx, [rip + 0xcc6706]
// asm:   0x183315882: lea rcx, [rbp + 0x20]
// asm:   0x183315886: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x18331588c: add rsp, 0x28
// asm:   0x183315890: pop rbp
// asm:   0x183315891: pop rbx
// asm:   0x183315892: ret 

void UI_GalleryMenu__SetBackground(UI_GalleryMenu_o *__this,System_String_o *image,MethodInfo *method)

{
  UnityEngine_GameObject_o *pUVar1;
  System_String_o *path;
  UnityEngine_Vector2_o value;
  int32_t iVar2;
  int32_t iVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_UI_RawImage_o *__this_00;
  UnityEngine_Texture_o *pUVar5;
  UnityEngine_RectTransform_o *__this_01;
  UnityEngine_Texture_o *value_00;
  float fVar6;
  float fVar7;
  
  if (Il2CppMethodInitialized_18434716b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RawImage);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Texture2D);
    il2cpp_codegen_initialize_runtime_metadata(&"Background");
    Il2CppMethodInitialized_18434716b = '\x01';
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
                         (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_RawImage);
  UnityEngine_Resources__UnloadUnusedAssets((MethodInfo *)0x0);
  if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
  }
  path = TypeInfo_Utility_ResourcePaths->static_fields->UI;
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  pUVar5 = (UnityEngine_Texture_o *)
           ApplicationManagers_ResourceManager__LoadAsset(path,image,false,(MethodInfo *)0x0);
  if (__this_00 == (UnityEngine_UI_RawImage_o *)0x0) {
    ThrowNullReferenceException();
  }
  value_00 = (UnityEngine_Texture_o *)0x0;
  if (pUVar5 != (UnityEngine_Texture_o *)0x0) {
    if (pUVar5->klass == (UnityEngine_Texture_c *)TypeInfo_UnityEngine_Texture2D) {
      value_00 = pUVar5;
    }
    if (value_00 == (UnityEngine_Texture_o *)0x0) {
      il2cpp_codegen_raise_invalid_cast_exception(pUVar5,TypeInfo_UnityEngine_Texture2D);
    }
  }
  UnityEngine_UI_RawImage__set_texture(__this_00,value_00,(MethodInfo *)0x0);
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
  fVar6 = (float)iVar2;
  fVar7 = (float)iVar3;
  if (1900.0 < (float)iVar2) {
    fVar7 = fVar7 * (1900.0 / fVar6);
    fVar6 = 1900.0;
  }
  if (990.0 < fVar7) {
    fVar6 = fVar6 * (990.0 / fVar7);
    fVar7 = 990.0;
  }
  pUVar1 = (__this->fields)._picture;
  if (pUVar1 == (UnityEngine_GameObject_o *)0x0) {
    ThrowNullReferenceException();
  }
  __this_01 = UnityEngine_GameObject__GetComponent_object_
                        (pUVar1,(MethodInfo_6F5650 *)
                                MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
  if (__this_01 == (UnityEngine_RectTransform_o *)0x0) {
    ThrowNullReferenceException();
  }
  value.fields.y = fVar7;
  value.fields.x = fVar6;
  UnityEngine_RectTransform__set_sizeDelta(__this_01,value,(MethodInfo *)0x0);
  return;
}


// UI.GalleryMenu$$.ctor
// il2cpp: void UI_GalleryMenu___ctor (UI_GalleryMenu_o* __this, const MethodInfo* method);
// 0x1821da7e0

void
UI_GalleryMenu___ctor(UI_GalleryMenu_o* __this, MethodInfo* method)

{
  UI_BaseMenu___ctor((UI_BaseMenu_o *)__this,(MethodInfo *)0x0);
  return;
}


