// Type: UI.GalleryMenu
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/GalleryMenu.cs
// Prior real C# source (older reference): Assets/Scripts/UI/GalleryMenu/GalleryMenu.cs
// --------------------------------

// UI.GalleryMenu$$Setup
// il2cpp: void UI_GalleryMenu__Setup (UI_GalleryMenu_o* __this, const MethodInfo* method);
// 0x439b0b0

void UI_GalleryMenu__Setup(UI_GalleryMenu_o *__this,MethodInfo *method)

{
  UI_GalleryMainPanel_o **ppUVar1;
  System_Collections_Generic_List_object__o *__this_00;
  UnityEngine_Vector2_o value;
  char cVar2;
  int32_t iVar3;
  int iVar4;
  int iVar5;
  Il2CppObject *pIVar6;
  long *plVar7;
  UnityEngine_Transform_o *pUVar8;
  UnityEngine_Component_o *__this_01;
  UI_GalleryMainPanel_o *pUVar9;
  UnityEngine_GameObject_o *pUVar10;
  UnityEngine_Transform_o *pUVar11;
  UnityEngine_UI_RawImage_o *__this_02;
  UnityEngine_Texture_o *value_00;
  UnityEngine_RectTransform_o *__this_03;
  undefined8 *puVar12;
  System_String_o *pSVar13;
  long lVar14;
  undefined8 *puVar15;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_String_o *pSVar16;
  UI_HeadedPanel_o *__this_04;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [12];
  
  if (g_data_057ae2f8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_GalleryMainPanel_GetComponent_GalleryMainPanel);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GalleryMainPanel_CreateHeadedPanel_GalleryMainPanel);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MainMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Prefabs/Misc/GalleryImage");
    il2cpp_runtime_helper_023445d0(&"AllBackgrounds");
    g_data_057ae2f8 = '\x01';
  }
  pSVar16 = (System_String_o *)0x0;
  UI_BaseMenu__Setup((UI_BaseMenu_o *)__this,(MethodInfo *)0x0);
  pUVar8 = (UnityEngine_Transform_o *)**(long **)(TypeInfo_MainMenu + 0xb8);
  if ((pUVar8 != (UnityEngine_Transform_o *)0x0) &&
     (pSVar16 = "AllBackgrounds",
     plVar7 = (long *)(*pUVar8->klass[1]._1.byval_arg.data)
                                (pUVar8,"AllBackgrounds",*(undefined8 *)&pUVar8->klass[1]._1.byval_arg.bits),
     plVar7 != (long *)0x0)) {
    pSVar16 = *(System_String_o **)(*plVar7 + 0x370);
    iVar3 = (**(code **)(*plVar7 + 0x368))(plVar7);
    (__this->fields)._backgroundCount = iVar3;
    if (*(int *)((long)&TypeInfo_UIManager[9].monitor + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar14 = *(long *)(TypeInfo_UIManager[7].fields.m_CachedPtr + 0x40);
    pUVar8 = TypeInfo_UIManager;
    if (lVar14 != 0) {
      iVar4 = *(int *)(lVar14 + 0x18);
      (__this->fields)._profileCount = iVar4;
      (__this->fields).TotalBackgroundCount = iVar4 + (__this->fields)._backgroundCount;
      pUVar8 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      pSVar16 = (System_String_o *)0x1;
      __this_01 = (UnityEngine_Component_o *)
                  UI_ElementFactory__CreateHeadedPanel_object_(pUVar8,1,MethodInfo_GalleryMainPanel_CreateHeadedPanel_GalleryMainPanel);
      if (__this_01 != (UnityEngine_Component_o *)0x0) {
        pUVar9 = (UI_GalleryMainPanel_o *)UnityEngine_Component__GetComponent_object_(__this_01,MethodInfo_GalleryMainPanel_GetComponent_GalleryMainPanel);
        ppUVar1 = &(__this->fields)._mainPanel;
        (__this->fields)._mainPanel = pUVar9;
        il2cpp_runtime_helper_022b4080(ppUVar1);
        pUVar8 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        pSVar16 = (System_String_o *)
                  UI_ElementFactory__InstantiateAndBind(pUVar8,"Prefabs/Misc/GalleryImage",(MethodInfo *)0x0);
        (__this->fields)._picture = (UnityEngine_GameObject_o *)pSVar16;
        il2cpp_runtime_helper_022b4080(&(__this->fields)._picture);
        pUVar10 = (__this->fields)._picture;
        pUVar8 = (UnityEngine_Transform_o *)0x0;
        if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
          pUVar10 = UnityEngine_GameObject__get_gameObject(pUVar10,(MethodInfo *)0x0);
          pSVar16 = (System_String_o *)&g_data_00000004;
          UI_ElementFactory__SetAnchor
                    (pUVar10,4,4,(UnityEngine_Vector2_o)0xc1f0000000000000,(MethodInfo *)0x0);
          pUVar9 = *ppUVar1;
          pUVar8 = (UnityEngine_Transform_o *)0x0;
          if (pUVar9 != (UI_GalleryMainPanel_o *)0x0) {
            pUVar10 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0);
            UI_ElementFactory__SetAnchor(pUVar10,1,1,(UnityEngine_Vector2_o)0x0,(MethodInfo *)0x0);
            iVar4 = 0;
            if (g_data_057ae2f9 == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
              il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
              il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
              il2cpp_runtime_helper_023445d0(&"Icons/Profile/FullSize/");
              il2cpp_runtime_helper_023445d0(&"IconFull");
              il2cpp_runtime_helper_023445d0(&"Texture");
              il2cpp_runtime_helper_023445d0(&"Backgrounds/MainBackground");
              g_data_057ae2f9 = '\x01';
              iVar5 = (__this->fields)._backgroundCount;
            }
            else {
              iVar5 = (__this->fields)._backgroundCount;
            }
            if (iVar5 < 1) {
              iVar4 = -iVar5;
              __this_04 = (UI_HeadedPanel_o *)(__this->fields)._picture;
            }
            else {
              __this_04 = (UI_HeadedPanel_o *)(__this->fields)._picture;
            }
            if (__this_04 != (UI_HeadedPanel_o *)0x0) {
              pIVar6 = UnityEngine_GameObject__GetComponent_object_
                                 ((UnityEngine_GameObject_o *)__this_04,MethodInfo_Image_GetComponent_Image);
              if (iVar5 < 1) {
                if (pIVar6 != (Il2CppObject *)0x0) {
                  (*pIVar6->klass->vtable[0x17].methodPtr)(0x3f400000,0x3f400000,pIVar6);
                  if (*(int *)((long)&TypeInfo_UIManager[9].monitor + 4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  __this_00 = *(System_Collections_Generic_List_object__o **)
                               (TypeInfo_UIManager[7].fields.m_CachedPtr + 0x40);
                  __this_04 = (UI_HeadedPanel_o *)0x0;
                  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
                    pSVar16 = (System_String_o *)
                              System_Collections_Generic_List_object___get_Item(__this_00,iVar4,MethodInfo_String_get_Item);
                    pSVar16 = System_String__Concat_3af7150
                                        ("Icons/Profile/FullSize/",pSVar16,"IconFull",(MethodInfo *)0x0);
                    UI_GalleryMenu__SetBackground(__this,pSVar16,method_01);
                    return;
                  }
                }
              }
              else if (pIVar6 != (Il2CppObject *)0x0) {
                (*pIVar6->klass->vtable[0x17].methodPtr)(0x3f400000,0x3f400000,pIVar6);
                pSVar16 = System_Int32__ToString((int32_t)&stack0xffffffffffffffe4,(MethodInfo *)0x0);
                pSVar16 = System_String__Concat_3af7150("Backgrounds/MainBackground",pSVar16,"Texture",(MethodInfo *)0x0);
                UI_GalleryMenu__SetBackground(__this,pSVar16,method_00);
                return;
              }
            }
            il2cpp_runtime_helper_022b2c90();
            UI_HeadedPanel___ctor(__this_04,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae2fa == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_RawImage_GetComponent_RawImage);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Texture2D);
    il2cpp_runtime_helper_023445d0(&"Background");
    g_data_057ae2fa = '\x01';
  }
  pUVar10 = (UnityEngine_GameObject_o *)pUVar8[6].fields.m_CachedPtr;
  if (((pUVar10 == (UnityEngine_GameObject_o *)0x0) ||
      (pUVar11 = UnityEngine_GameObject__get_transform(pUVar10,(MethodInfo *)0x0),
      pUVar11 == (UnityEngine_Transform_o *)0x0)) ||
     (pUVar11 = UnityEngine_Transform__Find(pUVar11,"Background",(MethodInfo *)0x0),
     pUVar11 == (UnityEngine_Transform_o *)0x0)) {
    il2cpp_runtime_helper_022b2c90();
label_0439b4d3:
    il2cpp_runtime_helper_022b2c90();
label_0439b4d8:
    il2cpp_runtime_helper_022b2c90();
label_0439b4dd:
    il2cpp_runtime_helper_022b2c90();
label_0439b4e2:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    __this_02 = (UnityEngine_UI_RawImage_o *)
                UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar11,MethodInfo_RawImage_GetComponent_RawImage);
    UnityEngine_Resources__UnloadUnusedAssets((MethodInfo *)0x0);
    if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar13 = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    value_00 = (UnityEngine_Texture_o *)
               ApplicationManagers_ResourceManager__LoadAsset(pSVar13,pSVar16,0,(MethodInfo *)0x0);
    if (__this_02 == (UnityEngine_UI_RawImage_o *)0x0) goto label_0439b4d3;
    if ((value_00 != (UnityEngine_Texture_o *)0x0) && (value_00->klass != TypeInfo_Texture2D)) goto label_0439b4ec;
    UnityEngine_UI_RawImage__set_texture(__this_02,value_00,(MethodInfo *)0x0);
    plVar7 = *(long **)&(__this_02->fields).m_ShouldRecalculate;
    if (plVar7 == (long *)0x0) goto label_0439b4d8;
    iVar4 = (**(code **)(*plVar7 + 0x188))(plVar7,*(undefined8 *)(*plVar7 + 400));
    plVar7 = *(long **)&(__this_02->fields).m_ShouldRecalculate;
    if (plVar7 == (long *)0x0) goto label_0439b4dd;
    iVar5 = (**(code **)(*plVar7 + 0x1a8))(plVar7,*(undefined8 *)(*plVar7 + 0x1b0));
    fVar17 = (float)iVar4;
    fVar18 = (float)iVar5;
    if (0x76c < iVar4) {
      fVar18 = fVar18 * (1900.0 / fVar17);
      fVar17 = 1900.0;
    }
    if (990.0 < fVar18) {
      fVar17 = fVar17 * (990.0 / fVar18);
      fVar18 = 990.0;
    }
    pUVar10 = (UnityEngine_GameObject_o *)pUVar8[6].fields.m_CachedPtr;
    if (pUVar10 == (UnityEngine_GameObject_o *)0x0) goto label_0439b4e2;
    __this_03 = (UnityEngine_RectTransform_o *)
                UnityEngine_GameObject__GetComponent_object_(pUVar10,MethodInfo_RectTransform_GetComponent_RectTransform);
    if (__this_03 != (UnityEngine_RectTransform_o *)0x0) {
      value.fields.y = fVar18;
      value.fields.x = fVar17;
      UnityEngine_RectTransform__set_sizeDelta(__this_03,value,(MethodInfo *)0x0);
      return;
    }
  }
  value_00 = (UnityEngine_Texture_o *)il2cpp_runtime_helper_022b2c90();
label_0439b4ec:
  auVar19 = il2cpp_runtime_helper_022b2fd0(value_00);
  if (auVar19._8_4_ != 1) {
    _Unwind_Resume(auVar19._0_8_);
  }
  puVar12 = (undefined8 *)__cxa_begin_catch(auVar19._0_8_);
  cVar2 = il2cpp_runtime_helper_0233e000(g_data_057b9b80,*(undefined8 *)*puVar12);
  if (cVar2 == '\0') {
    puVar15 = (undefined8 *)__cxa_allocate_exception(8);
    *puVar15 = *puVar12;
    __cxa_throw(puVar15,&PTR_PTR_05215060,0);
  }
  __cxa_end_catch();
  pSVar13 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Error loading ");
  pSVar16 = System_String__Concat_3ae5ba0(pSVar13,pSVar16,(MethodInfo *)0x0);
  lVar14 = il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
  if (*(int *)(lVar14 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0(lVar14);
  }
  UnityEngine_Debug__Log((Il2CppObject *)pSVar16,(MethodInfo *)0x0);
  return;
}


// UI.GalleryMenu$$LoadGallery
// il2cpp: void UI_GalleryMenu__LoadGallery (UI_GalleryMenu_o* __this, int32_t index, const MethodInfo* method);
// 0x439ae00

void UI_GalleryMenu__LoadGallery(UI_GalleryMenu_o *__this,int32_t index,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_List_object__o *__this_00;
  bool bVar2;
  Il2CppObject *pIVar3;
  System_String_o *pSVar4;
  MethodInfo *method_00;
  MethodInfo *method_01;
  UI_HeadedPanel_o *__this_01;
  int iStack_1c;
  
  iStack_1c = index;
  if (g_data_057ae2f9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Icons/Profile/FullSize/");
    il2cpp_runtime_helper_023445d0(&"IconFull");
    il2cpp_runtime_helper_023445d0(&"Texture");
    il2cpp_runtime_helper_023445d0(&"Backgrounds/MainBackground");
    g_data_057ae2f9 = '\x01';
    iVar1 = (__this->fields)._backgroundCount;
  }
  else {
    iVar1 = (__this->fields)._backgroundCount;
  }
  bVar2 = iVar1 <= index;
  if (bVar2) {
    index = index - iVar1;
    __this_01 = (UI_HeadedPanel_o *)(__this->fields)._picture;
    iStack_1c = index;
  }
  else {
    __this_01 = (UI_HeadedPanel_o *)(__this->fields)._picture;
  }
  if (__this_01 != (UI_HeadedPanel_o *)0x0) {
    pIVar3 = UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)__this_01,MethodInfo_Image_GetComponent_Image);
    if (bVar2) {
      if (pIVar3 != (Il2CppObject *)0x0) {
        (*pIVar3->klass->vtable[0x17].methodPtr)(0x3f400000,0x3f400000,pIVar3);
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        __this_00 = *(System_Collections_Generic_List_object__o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x40);
        __this_01 = (UI_HeadedPanel_o *)0x0;
        if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
          pSVar4 = (System_String_o *)
                   System_Collections_Generic_List_object___get_Item(__this_00,index,MethodInfo_String_get_Item);
          pSVar4 = System_String__Concat_3af7150("Icons/Profile/FullSize/",pSVar4,"IconFull",(MethodInfo *)0x0);
          UI_GalleryMenu__SetBackground(__this,pSVar4,method_01);
          return;
        }
      }
    }
    else if (pIVar3 != (Il2CppObject *)0x0) {
      (*pIVar3->klass->vtable[0x17].methodPtr)(0x3f400000,0x3f400000,pIVar3);
      pSVar4 = System_Int32__ToString((int32_t)&iStack_1c,(MethodInfo *)0x0);
      pSVar4 = System_String__Concat_3af7150("Backgrounds/MainBackground",pSVar4,"Texture",(MethodInfo *)0x0);
      UI_GalleryMenu__SetBackground(__this,pSVar4,method_00);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  UI_HeadedPanel___ctor(__this_01,(MethodInfo *)0x0);
  return;
}


// UI.GalleryMenu$$SetBackground
// il2cpp: void UI_GalleryMenu__SetBackground (UI_GalleryMenu_o* __this, System_String_o* image, const MethodInfo* method);
// 0x439b2c0

void UI_GalleryMenu__SetBackground(UI_GalleryMenu_o *__this,System_String_o *image,MethodInfo *method)

{
  UnityEngine_GameObject_o *pUVar1;
  long *plVar2;
  UnityEngine_Vector2_o value;
  char cVar3;
  int iVar4;
  int iVar5;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_UI_RawImage_o *__this_00;
  UnityEngine_Texture_o *value_00;
  UnityEngine_RectTransform_o *__this_01;
  undefined8 *puVar7;
  System_String_o *pSVar8;
  long lVar9;
  undefined8 *puVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [12];
  
  if (g_data_057ae2fa == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_RawImage_GetComponent_RawImage);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Texture2D);
    il2cpp_runtime_helper_023445d0(&"Background");
    g_data_057ae2fa = '\x01';
  }
  pUVar1 = (__this->fields)._picture;
  if (pUVar1 == (UnityEngine_GameObject_o *)0x0) {
label_0439b4ce:
    il2cpp_runtime_helper_022b2c90();
label_0439b4d3:
    il2cpp_runtime_helper_022b2c90();
label_0439b4d8:
    il2cpp_runtime_helper_022b2c90();
label_0439b4dd:
    il2cpp_runtime_helper_022b2c90();
label_0439b4e2:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pUVar6 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0);
    if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto label_0439b4ce;
    pUVar6 = UnityEngine_Transform__Find(pUVar6,"Background",(MethodInfo *)0x0);
    if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto label_0439b4ce;
    __this_00 = (UnityEngine_UI_RawImage_o *)
                UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar6,MethodInfo_RawImage_GetComponent_RawImage);
    UnityEngine_Resources__UnloadUnusedAssets((MethodInfo *)0x0);
    if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar8 = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    value_00 = (UnityEngine_Texture_o *)
               ApplicationManagers_ResourceManager__LoadAsset(pSVar8,image,0,(MethodInfo *)0x0);
    if (__this_00 == (UnityEngine_UI_RawImage_o *)0x0) goto label_0439b4d3;
    if ((value_00 != (UnityEngine_Texture_o *)0x0) && (value_00->klass != TypeInfo_Texture2D)) goto label_0439b4ec;
    UnityEngine_UI_RawImage__set_texture(__this_00,value_00,(MethodInfo *)0x0);
    plVar2 = *(long **)&(__this_00->fields).m_ShouldRecalculate;
    if (plVar2 == (long *)0x0) goto label_0439b4d8;
    iVar4 = (**(code **)(*plVar2 + 0x188))(plVar2,*(undefined8 *)(*plVar2 + 400));
    plVar2 = *(long **)&(__this_00->fields).m_ShouldRecalculate;
    if (plVar2 == (long *)0x0) goto label_0439b4dd;
    iVar5 = (**(code **)(*plVar2 + 0x1a8))(plVar2,*(undefined8 *)(*plVar2 + 0x1b0));
    fVar11 = (float)iVar4;
    fVar12 = (float)iVar5;
    if (0x76c < iVar4) {
      fVar12 = fVar12 * (1900.0 / fVar11);
      fVar11 = 1900.0;
    }
    if (990.0 < fVar12) {
      fVar11 = fVar11 * (990.0 / fVar12);
      fVar12 = 990.0;
    }
    pUVar1 = (__this->fields)._picture;
    if (pUVar1 == (UnityEngine_GameObject_o *)0x0) goto label_0439b4e2;
    __this_01 = (UnityEngine_RectTransform_o *)
                UnityEngine_GameObject__GetComponent_object_(pUVar1,MethodInfo_RectTransform_GetComponent_RectTransform);
    if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
      value.fields.y = fVar12;
      value.fields.x = fVar11;
      UnityEngine_RectTransform__set_sizeDelta(__this_01,value,(MethodInfo *)0x0);
      return;
    }
  }
  value_00 = (UnityEngine_Texture_o *)il2cpp_runtime_helper_022b2c90();
label_0439b4ec:
  auVar13 = il2cpp_runtime_helper_022b2fd0(value_00);
  if (auVar13._8_4_ != 1) {
    _Unwind_Resume(auVar13._0_8_);
  }
  puVar7 = (undefined8 *)__cxa_begin_catch(auVar13._0_8_);
  cVar3 = il2cpp_runtime_helper_0233e000(g_data_057b9b80,*(undefined8 *)*puVar7);
  if (cVar3 != '\0') {
    __cxa_end_catch();
    pSVar8 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Error loading ");
    pSVar8 = System_String__Concat_3ae5ba0(pSVar8,image,(MethodInfo *)0x0);
    lVar9 = il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    if (*(int *)(lVar9 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0(lVar9);
    }
    UnityEngine_Debug__Log((Il2CppObject *)pSVar8,(MethodInfo *)0x0);
    return;
  }
  puVar10 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar10 = *puVar7;
  __cxa_throw(puVar10,&PTR_PTR_05215060,0);
}


// UI.GalleryMenu$$.ctor
// il2cpp: void UI_GalleryMenu___ctor (UI_GalleryMenu_o* __this, const MethodInfo* method);
// 0x439b640

void UI_GalleryMenu___ctor(UI_GalleryMenu_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_BasePopup__o *__this_00;
  
  if (g_data_057ae015 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UI_BasePopup,0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_BasePopup);
    g_data_057ae015 = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_BasePopup__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_BasePopup);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_UI_BasePopup);
  (__this->fields)._popups = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._popups);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


