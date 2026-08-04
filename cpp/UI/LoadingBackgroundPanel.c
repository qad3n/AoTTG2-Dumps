// Type: UI.LoadingBackgroundPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/LoadingBackgroundPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/LoadingMenu/LoadingBackgroundPanel.cs
// --------------------------------

// UI.LoadingBackgroundPanel$$get_Title
// il2cpp: System_String_o* UI_LoadingBackgroundPanel__get_Title (UI_LoadingBackgroundPanel_o* __this, const MethodInfo* method);
// 0x43eebb0

System_String_o * UI_LoadingBackgroundPanel__get_Title(UI_LoadingBackgroundPanel_o *__this,MethodInfo *method)

{
  return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
}


// UI.LoadingBackgroundPanel$$get_Width
// il2cpp: float UI_LoadingBackgroundPanel__get_Width (UI_LoadingBackgroundPanel_o* __this, const MethodInfo* method);
// 0x43eebd0

float UI_LoadingBackgroundPanel__get_Width(UI_LoadingBackgroundPanel_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.LoadingBackgroundPanel$$get_Height
// il2cpp: float UI_LoadingBackgroundPanel__get_Height (UI_LoadingBackgroundPanel_o* __this, const MethodInfo* method);
// 0x43eebe0

float UI_LoadingBackgroundPanel__get_Height(UI_LoadingBackgroundPanel_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.LoadingBackgroundPanel$$get_TopBarHeight
// il2cpp: float UI_LoadingBackgroundPanel__get_TopBarHeight (UI_LoadingBackgroundPanel_o* __this, const MethodInfo* method);
// 0x43eebf0

float UI_LoadingBackgroundPanel__get_TopBarHeight(UI_LoadingBackgroundPanel_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.LoadingBackgroundPanel$$get_BottomBarHeight
// il2cpp: float UI_LoadingBackgroundPanel__get_BottomBarHeight (UI_LoadingBackgroundPanel_o* __this, const MethodInfo* method);
// 0x43eec00

float UI_LoadingBackgroundPanel__get_BottomBarHeight(UI_LoadingBackgroundPanel_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.LoadingBackgroundPanel$$get_ShowOnTop
// il2cpp: bool UI_LoadingBackgroundPanel__get_ShowOnTop (UI_LoadingBackgroundPanel_o* __this, const MethodInfo* method);
// 0x43eec10

bool_conflict UI_LoadingBackgroundPanel__get_ShowOnTop(UI_LoadingBackgroundPanel_o *__this,MethodInfo *method)

{
  return 0;
}


// UI.LoadingBackgroundPanel$$get_PopupAnimationType
// il2cpp: int32_t UI_LoadingBackgroundPanel__get_PopupAnimationType (UI_LoadingBackgroundPanel_o* __this, const MethodInfo* method);
// 0x43eec20

int32_t UI_LoadingBackgroundPanel__get_PopupAnimationType
                  (UI_LoadingBackgroundPanel_o *__this,MethodInfo *method)

{
  return 1;
}


// UI.LoadingBackgroundPanel$$get_AnimationTime
// il2cpp: float UI_LoadingBackgroundPanel__get_AnimationTime (UI_LoadingBackgroundPanel_o* __this, const MethodInfo* method);
// 0x43eec30

float UI_LoadingBackgroundPanel__get_AnimationTime(UI_LoadingBackgroundPanel_o *__this,MethodInfo *method)

{
  return 0.2;
}


// UI.LoadingBackgroundPanel$$Setup
// il2cpp: void UI_LoadingBackgroundPanel__Setup (UI_LoadingBackgroundPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x43eec40

void UI_LoadingBackgroundPanel__Setup
               (UI_LoadingBackgroundPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o *parent_00;
  UnityEngine_GameObject_o *pUVar1;
  
  if (g_data_057ae50b == '\0') {
    il2cpp_runtime_helper_023445d0(&"Prefabs/MainMenu/MainBackground");
    g_data_057ae50b = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  parent_00 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar1 = UI_ElementFactory__InstantiateAndBind(parent_00,"Prefabs/MainMenu/MainBackground",(MethodInfo *)0x0);
  (__this->fields)._background = pUVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._background,pUVar1);
  return;
}


// UI.LoadingBackgroundPanel$$SetRandomBackground
// il2cpp: void UI_LoadingBackgroundPanel__SetRandomBackground (UI_LoadingBackgroundPanel_o* __this, bool loading, bool seasonal, const MethodInfo* method);
// 0x43eecc0

void UI_LoadingBackgroundPanel__SetRandomBackground
               (UI_LoadingBackgroundPanel_o *__this,bool_conflict loading,bool_conflict seasonal,
               MethodInfo *method)

{
  undefined4 uVar1;
  UnityEngine_Vector2_o value;
  char cVar2;
  char cVar3;
  int iVar4;
  int32_t iVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  UnityEngine_Transform_o *pUVar9;
  UnityEngine_UI_RawImage_o *__this_00;
  System_String_o *pSVar10;
  UnityEngine_Texture_o *pUVar11;
  UnityEngine_RectTransform_o *__this_01;
  undefined8 *puVar12;
  System_String_o *pSVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined4 extraout_EDX;
  undefined8 uVar16;
  char cVar17;
  System_String_o *pSVar18;
  MethodInfo *pMVar19;
  long *plVar20;
  MethodInfo *in_R8;
  System_String_o *path;
  float fVar21;
  undefined1 auVar22 [12];
  undefined1 auStack_4c [4];
  UI_LoadingBackgroundPanel_o *pUStack_48;
  ulong uStack_40;
  System_String_o *pSStack_38;
  System_String_o *pSStack_30;
  
  cVar17 = (char)loading;
  cVar3 = cVar17;
  if (g_data_057ae50c == '\0') {
    pSStack_30 = (System_String_o *)0x43eece5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MainMenu);
    pSStack_30 = (System_String_o *)0x43eecf1;
    il2cpp_runtime_helper_023445d0(&"LoadingBackgrounds");
    pSStack_30 = (System_String_o *)0x43eecfd;
    il2cpp_runtime_helper_023445d0(&"EventBackgrounds");
    pSStack_30 = (System_String_o *)0x43eed09;
    il2cpp_runtime_helper_023445d0(&"MainBackgrounds");
    g_data_057ae50c = '\x01';
  }
  path = "MainBackgrounds";
  pSVar10 = "EventBackgrounds";
  pSVar13 = (System_String_o *)(ulong)(uint)seasonal;
  if ((char)seasonal == '\0') {
label_043eedca:
    plVar20 = (long *)**(undefined8 **)(TypeInfo_MainMenu + 0xb8);
    if (plVar20 != (long *)0x0) {
      if (cVar17 == '\0') {
        pSStack_30 = (System_String_o *)0x43eee23;
        pSVar13 = path;
        plVar7 = (long *)(**(code **)(*plVar20 + 0x1a8))(plVar20,path,*(undefined8 *)(*plVar20 + 0x1b0));
        cVar3 = (char)pSVar13;
        pSVar13 = (System_String_o *)0x0;
        if (plVar7 != (long *)0x0) goto label_043eee30;
      }
      else {
        pSStack_30 = (System_String_o *)0x43eee06;
        pMVar19 = "LoadingBackgrounds";
        plVar7 = (long *)(**(code **)(*plVar20 + 0x1a8))
                                   (plVar20,"LoadingBackgrounds",*(undefined8 *)(*plVar20 + 0x1b0));
        cVar3 = (char)pMVar19;
        if (plVar7 != (long *)0x0) {
label_043eee30:
          do {
            pSStack_30 = (System_String_o *)0x43eee44;
            iVar5 = (**(code **)(*plVar7 + 0x1e8))(plVar7,*(undefined8 *)(*plVar7 + 0x1f0));
            pSStack_30 = (System_String_o *)0x43eee4f;
            iVar5 = UnityEngine_Random__Range_4df2410(0,iVar5,(MethodInfo *)0x0);
          } while (iVar5 == (__this->fields).BackgroundIndex);
          UI_LoadingBackgroundPanel__SetBackground(__this,loading & 0xff,iVar5,path,in_R8);
          return;
        }
        pSVar13 = (System_String_o *)0x0;
      }
    }
  }
  else {
    plVar7 = (long *)**(long **)(TypeInfo_MainMenu + 0xb8);
    plVar20 = (long *)0x0;
    if (plVar7 != (long *)0x0) {
      pSStack_30 = (System_String_o *)0x43eed5e;
      pSVar13 = "EventBackgrounds";
      cVar2 = (**(code **)(*plVar7 + 0x2f8))(plVar7,"EventBackgrounds",*(undefined8 *)(*plVar7 + 0x300));
      cVar3 = (char)pSVar13;
      pSVar13 = pSVar10;
      if (cVar2 == '\0') goto label_043eedca;
      plVar20 = (long *)**(long **)(TypeInfo_MainMenu + 0xb8);
      if (plVar20 != (long *)0x0) {
        pSStack_30 = (System_String_o *)0x43eed8c;
        pSVar18 = pSVar10;
        plVar7 = (long *)(**(code **)(*plVar20 + 0x1a8))(plVar20,pSVar10,*(undefined8 *)(*plVar20 + 0x1b0));
        cVar3 = (char)pSVar18;
        if (plVar7 != (long *)0x0) {
          method = (MethodInfo *)*plVar7;
          uVar1 = method[0xb].token;
          cVar3 = (char)uVar1;
          pSStack_30 = (System_String_o *)0x43eeda8;
          plVar8 = (long *)(*(code *)method[0xb].field8_0x40)();
          plVar20 = plVar7;
          if (plVar8 != (long *)0x0) {
            method = (MethodInfo *)*plVar8;
            cVar3 = SUB81(method[5].field7_0x38,0);
            pSStack_30 = (System_String_o *)0x43eedc4;
            iVar4 = (*(code *)method[5].parameters)(plVar8);
            if (0 < iVar4) {
              path = pSVar10;
            }
            goto label_043eedca;
          }
        }
      }
    }
  }
  pSStack_30 = (System_String_o *)0x43eee72;
  il2cpp_runtime_helper_022b2c90();
  pUStack_48 = __this;
  uStack_40 = (ulong)(uint)loading;
  pSStack_38 = path;
  pSStack_30 = pSVar13;
  if (g_data_057ae50d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_RawImage_GetComponent_RawImage);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MainMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Texture2D);
    il2cpp_runtime_helper_023445d0(&"LoadingBackgrounds");
    il2cpp_runtime_helper_023445d0(&"Backgrounds/");
    il2cpp_runtime_helper_023445d0(&"Backgrounds/MainBackgroundBlankTexture");
    il2cpp_runtime_helper_023445d0(&"Image");
    g_data_057ae50d = '\x01';
  }
  *(undefined4 *)(plVar20 + 0x16) = extraout_EDX;
  plVar7 = (long *)**(long **)(TypeInfo_MainMenu + 0xb8);
  if (plVar7 == (long *)0x0) {
label_043ef1ad:
    il2cpp_runtime_helper_022b2c90();
label_043ef1b2:
    il2cpp_runtime_helper_022b2c90();
label_043ef1b7:
    il2cpp_runtime_helper_022b2c90();
label_043ef1bc:
    il2cpp_runtime_helper_022b2c90();
label_043ef1c1:
    il2cpp_runtime_helper_022b2c90();
label_043ef1c6:
    il2cpp_runtime_helper_022b2c90();
label_043ef1cb:
    pUVar11 = (UnityEngine_Texture_o *)il2cpp_runtime_helper_022b2c90();
label_043ef1d0:
    il2cpp_runtime_helper_022b2fd0(pUVar11);
  }
  else {
    if (cVar3 == '\0') {
      lVar14 = *plVar7;
      uVar16 = *(undefined8 *)(lVar14 + 0x1b0);
    }
    else {
      lVar14 = *plVar7;
      uVar16 = *(undefined8 *)(lVar14 + 0x1b0);
      method = "LoadingBackgrounds";
    }
    plVar7 = (long *)(**(code **)(lVar14 + 0x1a8))(plVar7,method,uVar16);
    if ((((UnityEngine_GameObject_o *)plVar20[0x15] == (UnityEngine_GameObject_o *)0x0) ||
        (pUVar9 = UnityEngine_GameObject__get_transform
                            ((UnityEngine_GameObject_o *)plVar20[0x15],(MethodInfo *)0x0),
        pUVar9 == (UnityEngine_Transform_o *)0x0)) ||
       (pUVar9 = UnityEngine_Transform__Find(pUVar9,"Image",(MethodInfo *)0x0),
       pUVar9 == (UnityEngine_Transform_o *)0x0)) goto label_043ef1ad;
    __this_00 = (UnityEngine_UI_RawImage_o *)
                UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar9,MethodInfo_RawImage_GetComponent_RawImage);
    if (-1 < (int)plVar20[0x16]) {
      if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (plVar7 == (long *)0x0) goto label_043ef1c1;
      pSVar13 = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
      plVar7 = (long *)(**(code **)(*plVar7 + 0x188))(plVar7,extraout_EDX,*(undefined8 *)(*plVar7 + 400));
      if (plVar7 == (long *)0x0) goto label_043ef1c6;
      pSVar10 = (System_String_o *)(**(code **)(*plVar7 + 0x1c8))(plVar7,*(undefined8 *)(*plVar7 + 0x1d0));
      pSVar10 = System_String__Concat_3ae5ba0("Backgrounds/",pSVar10,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pUVar11 = (UnityEngine_Texture_o *)
                ApplicationManagers_ResourceManager__LoadAsset(pSVar13,pSVar10,0,(MethodInfo *)0x0);
      if (__this_00 == (UnityEngine_UI_RawImage_o *)0x0) goto label_043ef1cb;
      if ((pUVar11 == (UnityEngine_Texture_o *)0x0) || (pUVar11->klass == TypeInfo_Texture2D)) {
        UnityEngine_UI_RawImage__set_texture(__this_00,pUVar11,(MethodInfo *)0x0);
        goto label_043ef117;
      }
      goto label_043ef1d0;
    }
    if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar13 = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar11 = (UnityEngine_Texture_o *)
              ApplicationManagers_ResourceManager__LoadAsset(pSVar13,"Backgrounds/MainBackgroundBlankTexture",0,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_UI_RawImage_o *)0x0) {
      if ((pUVar11 != (UnityEngine_Texture_o *)0x0) && (pUVar11->klass != TypeInfo_Texture2D)) goto label_043ef1dd;
      UnityEngine_UI_RawImage__set_texture(__this_00,pUVar11,(MethodInfo *)0x0);
label_043ef117:
      plVar7 = *(long **)&(__this_00->fields).m_ShouldRecalculate;
      if (plVar7 == (long *)0x0) goto label_043ef1b2;
      iVar4 = (**(code **)(*plVar7 + 0x188))(plVar7,*(undefined8 *)(*plVar7 + 400));
      plVar7 = *(long **)&(__this_00->fields).m_ShouldRecalculate;
      if (plVar7 == (long *)0x0) goto label_043ef1b7;
      iVar6 = (**(code **)(*plVar7 + 0x1a8))(plVar7,*(undefined8 *)(*plVar7 + 0x1b0));
      __this_01 = (UnityEngine_RectTransform_o *)
                  UnityEngine_Component__GetComponent_object_
                            ((UnityEngine_Component_o *)__this_00,MethodInfo_RectTransform_GetComponent_RectTransform);
      if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
        fVar21 = (float)iVar6 * (1928.0 / (float)iVar4);
        if (fVar21 <= 1084.0) {
          fVar21 = 1084.0;
        }
        value.fields.y = fVar21;
        value.fields.x = 1928.0;
        UnityEngine_RectTransform__set_sizeDelta(__this_01,value,(MethodInfo *)0x0);
        return;
      }
      goto label_043ef1bc;
    }
  }
  pUVar11 = (UnityEngine_Texture_o *)il2cpp_runtime_helper_022b2c90();
label_043ef1dd:
  auVar22 = il2cpp_runtime_helper_022b2fd0(pUVar11);
  if (auVar22._8_4_ != 1) {
    _Unwind_Resume(auVar22._0_8_);
  }
  puVar12 = (undefined8 *)__cxa_begin_catch(auVar22._0_8_);
  cVar3 = il2cpp_runtime_helper_0233e000(g_data_057b9b80);
  if (cVar3 != '\0') {
    __cxa_end_catch();
    pSVar13 = System_Int32__ToString((int32_t)auStack_4c,(MethodInfo *)0x0);
    pSVar10 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Error loading main background ");
    pSVar13 = System_String__Concat_3ae5ba0(pSVar10,pSVar13,(MethodInfo *)0x0);
    lVar14 = il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    if (*(int *)(lVar14 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0(lVar14);
    }
    UnityEngine_Debug__Log((Il2CppObject *)pSVar13,(MethodInfo *)0x0);
    return;
  }
  puVar15 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar15 = *puVar12;
  __cxa_throw(puVar15,&PTR_PTR_05215060,0);
}


// UI.LoadingBackgroundPanel$$SetBackground
// il2cpp: void UI_LoadingBackgroundPanel__SetBackground (UI_LoadingBackgroundPanel_o* __this, bool loading, int32_t backgroundIndex, System_String_o* path, const MethodInfo* method);
// 0x43eee80

void UI_LoadingBackgroundPanel__SetBackground
               (UI_LoadingBackgroundPanel_o *__this,bool_conflict loading,int32_t backgroundIndex,
               System_String_o *path,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Vector2_o value;
  char cVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_UI_RawImage_o *__this_01;
  System_String_o *pSVar6;
  UnityEngine_Texture_o *pUVar7;
  UnityEngine_RectTransform_o *__this_02;
  undefined8 *puVar8;
  System_String_o *pSVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  float fVar13;
  undefined1 auVar14 [12];
  undefined1 local_24 [4];
  
  if (g_data_057ae50d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_RawImage_GetComponent_RawImage);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MainMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Texture2D);
    il2cpp_runtime_helper_023445d0(&"LoadingBackgrounds");
    il2cpp_runtime_helper_023445d0(&"Backgrounds/");
    il2cpp_runtime_helper_023445d0(&"Backgrounds/MainBackgroundBlankTexture");
    il2cpp_runtime_helper_023445d0(&"Image");
    g_data_057ae50d = '\x01';
  }
  (__this->fields).BackgroundIndex = backgroundIndex;
  plVar4 = (long *)**(long **)(TypeInfo_MainMenu + 0xb8);
  if (plVar4 == (long *)0x0) {
label_043ef1ad:
    il2cpp_runtime_helper_022b2c90();
label_043ef1b2:
    il2cpp_runtime_helper_022b2c90();
label_043ef1b7:
    il2cpp_runtime_helper_022b2c90();
label_043ef1bc:
    il2cpp_runtime_helper_022b2c90();
label_043ef1c1:
    il2cpp_runtime_helper_022b2c90();
label_043ef1c6:
    il2cpp_runtime_helper_022b2c90();
label_043ef1cb:
    pUVar7 = (UnityEngine_Texture_o *)il2cpp_runtime_helper_022b2c90();
label_043ef1d0:
    il2cpp_runtime_helper_022b2fd0(pUVar7);
  }
  else {
    if ((char)loading == '\0') {
      lVar10 = *plVar4;
      uVar12 = *(undefined8 *)(lVar10 + 0x1b0);
    }
    else {
      lVar10 = *plVar4;
      uVar12 = *(undefined8 *)(lVar10 + 0x1b0);
      path = "LoadingBackgrounds";
    }
    plVar4 = (long *)(**(code **)(lVar10 + 0x1a8))(plVar4,path,uVar12);
    __this_00 = (__this->fields)._background;
    if (((__this_00 == (UnityEngine_GameObject_o *)0x0) ||
        (pUVar5 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0),
        pUVar5 == (UnityEngine_Transform_o *)0x0)) ||
       (pUVar5 = UnityEngine_Transform__Find(pUVar5,"Image",(MethodInfo *)0x0),
       pUVar5 == (UnityEngine_Transform_o *)0x0)) goto label_043ef1ad;
    __this_01 = (UnityEngine_UI_RawImage_o *)
                UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar5,MethodInfo_RawImage_GetComponent_RawImage);
    if (-1 < (__this->fields).BackgroundIndex) {
      if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (plVar4 == (long *)0x0) goto label_043ef1c1;
      pSVar9 = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
      plVar4 = (long *)(**(code **)(*plVar4 + 0x188))(plVar4,backgroundIndex,*(undefined8 *)(*plVar4 + 400));
      if (plVar4 == (long *)0x0) goto label_043ef1c6;
      pSVar6 = (System_String_o *)(**(code **)(*plVar4 + 0x1c8))(plVar4,*(undefined8 *)(*plVar4 + 0x1d0));
      pSVar6 = System_String__Concat_3ae5ba0("Backgrounds/",pSVar6,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pUVar7 = (UnityEngine_Texture_o *)
               ApplicationManagers_ResourceManager__LoadAsset(pSVar9,pSVar6,0,(MethodInfo *)0x0);
      if (__this_01 == (UnityEngine_UI_RawImage_o *)0x0) goto label_043ef1cb;
      if ((pUVar7 == (UnityEngine_Texture_o *)0x0) || (pUVar7->klass == TypeInfo_Texture2D)) {
        UnityEngine_UI_RawImage__set_texture(__this_01,pUVar7,(MethodInfo *)0x0);
        goto label_043ef117;
      }
      goto label_043ef1d0;
    }
    if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar9 = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar7 = (UnityEngine_Texture_o *)
             ApplicationManagers_ResourceManager__LoadAsset(pSVar9,"Backgrounds/MainBackgroundBlankTexture",0,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_UI_RawImage_o *)0x0) {
      if ((pUVar7 != (UnityEngine_Texture_o *)0x0) && (pUVar7->klass != TypeInfo_Texture2D)) goto label_043ef1dd;
      UnityEngine_UI_RawImage__set_texture(__this_01,pUVar7,(MethodInfo *)0x0);
label_043ef117:
      plVar4 = *(long **)&(__this_01->fields).m_ShouldRecalculate;
      if (plVar4 == (long *)0x0) goto label_043ef1b2;
      iVar2 = (**(code **)(*plVar4 + 0x188))(plVar4,*(undefined8 *)(*plVar4 + 400));
      plVar4 = *(long **)&(__this_01->fields).m_ShouldRecalculate;
      if (plVar4 == (long *)0x0) goto label_043ef1b7;
      iVar3 = (**(code **)(*plVar4 + 0x1a8))(plVar4,*(undefined8 *)(*plVar4 + 0x1b0));
      __this_02 = (UnityEngine_RectTransform_o *)
                  UnityEngine_Component__GetComponent_object_
                            ((UnityEngine_Component_o *)__this_01,MethodInfo_RectTransform_GetComponent_RectTransform);
      if (__this_02 != (UnityEngine_RectTransform_o *)0x0) {
        fVar13 = (float)iVar3 * (1928.0 / (float)iVar2);
        if (fVar13 <= 1084.0) {
          fVar13 = 1084.0;
        }
        value.fields.y = fVar13;
        value.fields.x = 1928.0;
        UnityEngine_RectTransform__set_sizeDelta(__this_02,value,(MethodInfo *)0x0);
        return;
      }
      goto label_043ef1bc;
    }
  }
  pUVar7 = (UnityEngine_Texture_o *)il2cpp_runtime_helper_022b2c90();
label_043ef1dd:
  auVar14 = il2cpp_runtime_helper_022b2fd0(pUVar7);
  if (auVar14._8_4_ != 1) {
    _Unwind_Resume(auVar14._0_8_);
  }
  puVar8 = (undefined8 *)__cxa_begin_catch(auVar14._0_8_);
  cVar1 = il2cpp_runtime_helper_0233e000(g_data_057b9b80);
  if (cVar1 != '\0') {
    __cxa_end_catch();
    pSVar9 = System_Int32__ToString((int32_t)local_24,(MethodInfo *)0x0);
    pSVar6 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Error loading main background ");
    pSVar9 = System_String__Concat_3ae5ba0(pSVar6,pSVar9,(MethodInfo *)0x0);
    lVar10 = il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    if (*(int *)(lVar10 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0(lVar10);
    }
    UnityEngine_Debug__Log((Il2CppObject *)pSVar9,(MethodInfo *)0x0);
    return;
  }
  puVar11 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar11 = *puVar8;
  __cxa_throw(puVar11,&PTR_PTR_05215060,0);
}


// UI.LoadingBackgroundPanel$$GetAnimationSpeed
// il2cpp: float UI_LoadingBackgroundPanel__GetAnimationSpeed (UI_LoadingBackgroundPanel_o* __this, float min, float max, const MethodInfo* method);
// 0x43ef380

float UI_LoadingBackgroundPanel__GetAnimationSpeed
                (UI_LoadingBackgroundPanel_o *__this,float min,float max,MethodInfo *method)

{
  long lVar1;
  UI_TooltipPopup_o *__this_00;
  float fVar2;
  float extraout_XMM0_Da;
  
  __this_00 = (UI_TooltipPopup_o *)__this;
  if (g_data_057ae50e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    __this_00 = (UI_TooltipPopup_o *)&MethodInfo_Boolean_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae50e = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if ((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x130), lVar1 != 0)) {
    if (*(char *)(lVar1 + 0x11) != '\0') {
      fVar2 = UI_BasePopup__GetAnimationSpeed((UI_BasePopup_o *)__this,min,max,(MethodInfo *)0x0);
      return fVar2;
    }
    return (max - min) / 0.01;
  }
  il2cpp_runtime_helper_022b2c90();
  *(undefined4 *)&(__this_00->fields)._panel = 0xffffffff;
  UI_BasePopup___ctor(__this_00,(MethodInfo *)0x0);
  return extraout_XMM0_Da;
}


// UI.LoadingBackgroundPanel$$.ctor
// il2cpp: void UI_LoadingBackgroundPanel___ctor (UI_LoadingBackgroundPanel_o* __this, const MethodInfo* method);
// 0x43ef420

void UI_LoadingBackgroundPanel___ctor(UI_LoadingBackgroundPanel_o *__this,MethodInfo *method)

{
  (__this->fields).BackgroundIndex = -1;
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


