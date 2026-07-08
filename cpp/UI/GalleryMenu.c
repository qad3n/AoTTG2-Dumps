// Type: UI.GalleryMenu
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/GalleryMenu.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/GalleryMenu/GalleryMenu.cs  [CHANGED since prior version]
// --------------------------------

// UI.GalleryMenu$$Setup
// il2cpp: void UI_GalleryMenu__Setup (UI_GalleryMenu_o* __this, const MethodInfo* method);
// 0x408d140

void UI_GalleryMenu__Setup(UI_GalleryMenu_o *__this,MethodInfo *method)

{
  UI_GalleryMainPanel_o **ppUVar1;
  int iVar2;
  System_Collections_Generic_List_object__o *__this_00;
  long lVar3;
  int32_t iVar4;
  Il2CppObject *pIVar5;
  System_String_o *pSVar6;
  long *plVar7;
  UnityEngine_Transform_o *pUVar8;
  UnityEngine_Component_o *__this_01;
  UI_GalleryMainPanel_o *pUVar9;
  UnityEngine_GameObject_o *pUVar10;
  MethodInfo *method_00;
  MethodInfo *method_01;
  int iVar11;
  undefined8 uStack_20;
  
  if (DAT_0570457d == '\0') {
    uStack_20 = (undefined *)0x408d15c;
    il2cpp_init_method_metadata(&MethodInfo_GalleryMainPanel_GetComponent_GalleryMainPanel);
    uStack_20 = (undefined *)0x408d168;
    il2cpp_init_method_metadata(&MethodInfo_GalleryMainPanel_CreateHeadedPanel_GalleryMainPa);
    uStack_20 = (undefined *)0x408d174;
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    uStack_20 = (undefined *)0x408d180;
    il2cpp_init_method_metadata(&TypeInfo_MainMenu);
    uStack_20 = (undefined *)0x408d18c;
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    uStack_20 = (undefined *)0x408d198;
    il2cpp_init_method_metadata(&"Prefabs/Misc/GalleryImage");
    uStack_20 = (undefined *)0x408d1a4;
    il2cpp_init_method_metadata(&"AllBackgrounds");
    DAT_0570457d = '\x01';
  }
  uStack_20 = (undefined *)0x408d1b5;
  UI_BaseMenu__Setup((UI_BaseMenu_o *)__this,(MethodInfo *)0x0);
  plVar7 = (long *)**(long **)(TypeInfo_MainMenu + 0xb8);
  if (plVar7 != (long *)0x0) {
    uStack_20 = (undefined *)0x408d1ec;
    plVar7 = (long *)(**(code **)(*plVar7 + 0x1a8))
                               (plVar7,"AllBackgrounds",*(undefined8 *)(*plVar7 + 0x1b0));
    if (plVar7 != (long *)0x0) {
      uStack_20 = (undefined *)0x408d208;
      iVar4 = (**(code **)(*plVar7 + 0x368))(plVar7);
      (__this->fields)._backgroundCount = iVar4;
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        uStack_20 = (undefined *)0x408d226;
        il2cpp_init_class();
      }
      lVar3 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x40);
      if (lVar3 != 0) {
        iVar11 = *(int *)(lVar3 + 0x18);
        (__this->fields)._profileCount = iVar11;
        (__this->fields).TotalBackgroundCount = iVar11 + (__this->fields)._backgroundCount;
        uStack_20 = (undefined *)0x408d25c;
        pUVar8 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        uStack_20 = (undefined *)0x408d273;
        __this_01 = (UnityEngine_Component_o *)
                    UI_ElementFactory__CreateHeadedPanel<object>(pUVar8,1,MethodInfo_GalleryMainPanel_CreateHeadedPanel_GalleryMainPa);
        if (__this_01 != (UnityEngine_Component_o *)0x0) {
          uStack_20 = (undefined *)0x408d28e;
          pUVar9 = (UI_GalleryMainPanel_o *)
                   UnityEngine_Component__GetComponent<object>(__this_01,MethodInfo_GalleryMainPanel_GetComponent_GalleryMainPanel);
          ppUVar1 = &(__this->fields)._mainPanel;
          (__this->fields)._mainPanel = pUVar9;
          uStack_20 = (undefined *)0x408d2a7;
          il2cpp_runtime_glue(ppUVar1);
          uStack_20 = (undefined *)0x408d2b1;
          pUVar8 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          uStack_20 = (undefined *)0x408d2c5;
          pUVar10 = UI_ElementFactory__InstantiateAndBind(pUVar8,"Prefabs/Misc/GalleryImage",(MethodInfo *)0x0);
          (__this->fields)._picture = pUVar10;
          uStack_20 = (undefined *)0x408d2db;
          il2cpp_runtime_glue(&(__this->fields)._picture);
          pUVar10 = (__this->fields)._picture;
          if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
            uStack_20 = (undefined *)0x408d2ee;
            pUVar10 = UnityEngine_GameObject__get_gameObject(pUVar10,(MethodInfo *)0x0);
            uStack_20 = (undefined *)0x408d309;
            UI_ElementFactory__SetAnchor
                      (pUVar10,4,4,(UnityEngine_Vector2_o)0xc1f0000000000000,(MethodInfo *)0x0);
            pUVar9 = *ppUVar1;
            if (pUVar9 != (UI_GalleryMainPanel_o *)0x0) {
              uStack_20 = (undefined *)0x408d318;
              pUVar10 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0);
              uStack_20 = (undefined *)0x408d32f;
              UI_ElementFactory__SetAnchor(pUVar10,1,1,(UnityEngine_Vector2_o)0x0,(MethodInfo *)0x0)
              ;
              iVar11 = 0;
              uStack_20 = (undefined *)((ulong)uStack_20 & 0xffffffff);
              if (DAT_0570457e == '\0') {
                il2cpp_init_method_metadata(&MethodInfo_Image_GetComponent_Image);
                il2cpp_init_method_metadata(&MethodInfo_String_get_Item);
                il2cpp_init_method_metadata(&TypeInfo_UIManager);
                il2cpp_init_method_metadata(&"Icons/Profile/FullSize/");
                il2cpp_init_method_metadata(&"IconFull");
                il2cpp_init_method_metadata(&"Texture");
                il2cpp_init_method_metadata(&"Backgrounds/MainBackground");
                DAT_0570457e = '\x01';
                iVar2 = (__this->fields)._backgroundCount;
              }
              else {
                iVar2 = (__this->fields)._backgroundCount;
              }
              if (iVar2 < 1) {
                iVar11 = -iVar2;
                uStack_20 = (undefined *)CONCAT44(iVar11,SUB84(uStack_20,0));
                pUVar10 = (__this->fields)._picture;
              }
              else {
                pUVar10 = (__this->fields)._picture;
              }
              if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
                pIVar5 = UnityEngine_GameObject__GetComponent<object>(pUVar10,MethodInfo_Image_GetComponent_Image);
                if (iVar2 < 1) {
                  if (pIVar5 != (Il2CppObject *)0x0) {
                    (*pIVar5->klass->vtable[0x17].methodPtr)
                              (0x3f400000,0x3f400000,pIVar5,pIVar5->klass->vtable[0x17].method);
                    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                      il2cpp_init_class();
                    }
                    __this_00 = *(System_Collections_Generic_List_object__o **)
                                 (*(long *)(TypeInfo_UIManager + 0xb8) + 0x40);
                    if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
                      pSVar6 = (System_String_o *)
                               System_Collections_Generic_List<object>__get_Item
                                         (__this_00,iVar11,MethodInfo_String_get_Item);
                      pSVar6 = System_String__Concat
                                         ("Icons/Profile/FullSize/",pSVar6,"IconFull",(MethodInfo *)0x0);
                      UI_GalleryMenu__SetBackground(__this,pSVar6,method_01);
                      return;
                    }
                  }
                }
                else if (pIVar5 != (Il2CppObject *)0x0) {
                  (*pIVar5->klass->vtable[0x17].methodPtr)(0x3f400000,0x3f400000,pIVar5);
                  pSVar6 = System_Int32__ToString((int)&uStack_20 + 4,(MethodInfo *)0x0);
                  pSVar6 = System_String__Concat("Backgrounds/MainBackground",pSVar6,"Texture",(MethodInfo *)0x0)
                  ;
                  UI_GalleryMenu__SetBackground(__this,pSVar6,method_00);
                  return;
                }
              }
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  uStack_20 = &UNK_0408d345;
  il2cpp_raise_exception();
}


// UI.GalleryMenu$$LoadGallery
// il2cpp: void UI_GalleryMenu__LoadGallery (UI_GalleryMenu_o* __this, int32_t index, const MethodInfo* method);
// 0x408ce90

void UI_GalleryMenu__LoadGallery(UI_GalleryMenu_o *__this,int32_t index,MethodInfo *method)

{
  int iVar1;
  UnityEngine_GameObject_o *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  bool bVar2;
  Il2CppObject *pIVar3;
  System_String_o *pSVar4;
  MethodInfo *method_00;
  MethodInfo *method_01;
  int iStack_1c;
  
  iStack_1c = index;
  if (DAT_0570457e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Image_GetComponent_Image);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"Icons/Profile/FullSize/");
    il2cpp_init_method_metadata(&"IconFull");
    il2cpp_init_method_metadata(&"Texture");
    il2cpp_init_method_metadata(&"Backgrounds/MainBackground");
    DAT_0570457e = '\x01';
    iVar1 = (__this->fields)._backgroundCount;
  }
  else {
    iVar1 = (__this->fields)._backgroundCount;
  }
  bVar2 = iVar1 <= index;
  if (bVar2) {
    index = index - iVar1;
    __this_00 = (__this->fields)._picture;
    iStack_1c = index;
  }
  else {
    __this_00 = (__this->fields)._picture;
  }
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    pIVar3 = UnityEngine_GameObject__GetComponent<object>(__this_00,MethodInfo_Image_GetComponent_Image);
    if (bVar2) {
      if (pIVar3 != (Il2CppObject *)0x0) {
        (*pIVar3->klass->vtable[0x17].methodPtr)
                  (0x3f400000,0x3f400000,pIVar3,pIVar3->klass->vtable[0x17].method);
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        __this_01 = *(System_Collections_Generic_List_object__o **)
                     (*(long *)(TypeInfo_UIManager + 0xb8) + 0x40);
        if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
          pSVar4 = (System_String_o *)
                   System_Collections_Generic_List<object>__get_Item(__this_01,index,MethodInfo_String_get_Item);
          pSVar4 = System_String__Concat("Icons/Profile/FullSize/",pSVar4,"IconFull",(MethodInfo *)0x0);
          UI_GalleryMenu__SetBackground(__this,pSVar4,method_01);
          return;
        }
      }
    }
    else if (pIVar3 != (Il2CppObject *)0x0) {
      (*pIVar3->klass->vtable[0x17].methodPtr)(0x3f400000,0x3f400000,pIVar3);
      pSVar4 = System_Int32__ToString((int32_t)&iStack_1c,(MethodInfo *)0x0);
      pSVar4 = System_String__Concat("Backgrounds/MainBackground",pSVar4,"Texture",(MethodInfo *)0x0);
      UI_GalleryMenu__SetBackground(__this,pSVar4,method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.GalleryMenu$$SetBackground
// il2cpp: void UI_GalleryMenu__SetBackground (UI_GalleryMenu_o* __this, System_String_o* image, const MethodInfo* method);
// 0x408d350

void UI_GalleryMenu__SetBackground
               (UI_GalleryMenu_o *__this,System_String_o *image,MethodInfo *method)

{
  UnityEngine_GameObject_o *pUVar1;
  System_String_o *path;
  long *plVar2;
  UnityEngine_Vector2_o value;
  int iVar3;
  int iVar4;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_UI_RawImage_o *__this_00;
  UnityEngine_Texture_o *value_00;
  UnityEngine_RectTransform_o *__this_01;
  float fVar6;
  float fVar7;
  
  if (DAT_0570457f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_RawImage_GetComponent_RawImage);
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    il2cpp_init_method_metadata(&TypeInfo_ResourcePaths);
    il2cpp_init_method_metadata(&TypeInfo_Texture2D);
    il2cpp_init_method_metadata(&"Background");
    DAT_0570457f = '\x01';
  }
  pUVar1 = (__this->fields)._picture;
  if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
    pUVar5 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0);
    if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
      pUVar5 = UnityEngine_Transform__Find(pUVar5,"Background",(MethodInfo *)0x0);
      if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
        __this_00 = (UnityEngine_UI_RawImage_o *)
                    UnityEngine_Component__GetComponent<object>
                              ((UnityEngine_Component_o *)pUVar5,MethodInfo_RawImage_GetComponent_RawImage);
        UnityEngine_Resources__UnloadUnusedAssets((MethodInfo *)0x0);
        if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
          il2cpp_init_class();
        }
        path = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
        if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        value_00 = (UnityEngine_Texture_o *)
                   ApplicationManagers_ResourceManager__LoadAsset(path,image,0,(MethodInfo *)0x0);
        if (__this_00 == (UnityEngine_UI_RawImage_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        if ((value_00 != (UnityEngine_Texture_o *)0x0) && (value_00->klass != TypeInfo_Texture2D)) {
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume(value_00);
        }
        UnityEngine_UI_RawImage__set_texture(__this_00,value_00,(MethodInfo *)0x0);
        plVar2 = *(long **)&(__this_00->fields).m_ShouldRecalculate;
        if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        iVar3 = (**(code **)(*plVar2 + 0x188))(plVar2,*(undefined8 *)(*plVar2 + 400));
        plVar2 = *(long **)&(__this_00->fields).m_ShouldRecalculate;
        if (plVar2 != (long *)0x0) {
          iVar4 = (**(code **)(*plVar2 + 0x1a8))(plVar2,*(undefined8 *)(*plVar2 + 0x1b0));
          fVar6 = (float)iVar3;
          fVar7 = (float)iVar4;
          if (0x76c < iVar3) {
            fVar7 = fVar7 * (1900.0 / fVar6);
            fVar6 = 1900.0;
          }
          if (990.0 < fVar7) {
            fVar6 = fVar6 * (990.0 / fVar7);
            fVar7 = 990.0;
          }
          pUVar1 = (__this->fields)._picture;
          if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
            __this_01 = (UnityEngine_RectTransform_o *)
                        UnityEngine_GameObject__GetComponent<object>(pUVar1,MethodInfo_RectTransform_GetComponent_RectTransform);
            if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
              value.fields.y = fVar7;
              value.fields.x = fVar6;
              UnityEngine_RectTransform__set_sizeDelta(__this_01,value,(MethodInfo *)0x0);
              return;
            }
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.GalleryMenu$$.ctor
// il2cpp: void UI_GalleryMenu___ctor (UI_GalleryMenu_o* __this, const MethodInfo* method);
// 0x408d6d0

void UI_GalleryMenu___ctor(UI_GalleryMenu_o *__this,MethodInfo *method)

{
  UI_BaseMenu___ctor((UI_BaseMenu_o *)__this,(MethodInfo *)0x0);
  return;
}


