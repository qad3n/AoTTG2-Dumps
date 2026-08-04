// Type: ApplicationManagers.FullscreenHandler
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/ApplicationManagers/FullscreenHandler.cs
// Prior real C# source (older reference): Assets/Scripts/ApplicationManagers/FullscreenHandler.cs
// --------------------------------

// ApplicationManagers.FullscreenHandler$$Init
// il2cpp: void ApplicationManagers_FullscreenHandler__Init (const MethodInfo* method);
// 0x44b6a50

void ApplicationManagers_FullscreenHandler__Init(MethodInfo *method)

{
  Il2CppObject *pIVar1;
  
  if (g_data_057aea39 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_FullscreenHandler);
    il2cpp_runtime_helper_023445d0(&MethodInfo_FullscreenHandler_CreateSingleton_FullscreenHandler);
    g_data_057aea39 = '\x01';
  }
  if (*(int *)(TypeInfo_FullscreenHandler + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar1 = Utility_SingletonFactory__CreateSingleton_object_
                     ((Il2CppObject *)**(undefined8 **)(TypeInfo_FullscreenHandler + 0xb8),MethodInfo_FullscreenHandler_CreateSingleton_FullscreenHandler);
  **(undefined8 **)(TypeInfo_FullscreenHandler + 0xb8) = pIVar1;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_FullscreenHandler + 0xb8),pIVar1);
  return;
}


// ApplicationManagers.FullscreenHandler$$Apply
// il2cpp: void ApplicationManagers_FullscreenHandler__Apply (int32_t resolutionIndex, int32_t fullscreenLevel, const MethodInfo* method);
// 0x44b6ad0

void ApplicationManagers_FullscreenHandler__Apply
               (int32_t resolutionIndex,int32_t fullscreenLevel,MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  uint uVar3;
  UnityEngine_Object_o *x;
  MethodInfo_362C220 *method_00;
  System_Object_array *pSVar4;
  long lVar5;
  UnityEngine_Resolution_o item;
  UnityEngine_Resolution_o item_00;
  int32_t iVar6;
  int32_t height;
  bool_conflict bVar7;
  System_Collections_Generic_List_Resolution__o *pSVar8;
  System_Collections_Generic_HashSet_object__o *__this;
  UnityEngine_Resolution_array *pUVar9;
  System_Collections_Generic_List_object__o *__this_00;
  System_String_o *pSVar10;
  System_String_o *pSVar11;
  long *plVar12;
  MethodInfo *pMVar13;
  int32_t fullscreenMode;
  UnityEngine_RefreshRate_Fields method_01;
  undefined8 extraout_RDX;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  UnityEngine_RefreshRate_Fields extraout_RDX_00;
  UnityEngine_RefreshRate_Fields extraout_RDX_01;
  UnityEngine_RefreshRate_Fields extraout_RDX_02;
  MethodInfo *method_05;
  UnityEngine_RefreshRate_Fields extraout_RDX_03;
  MethodInfo *method_06;
  MethodInfo *method_07;
  MethodInfo *method_08;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  MethodInfo *method_09;
  System_String_o *unaff_RBX;
  undefined1 *puVar14;
  int32_t *unaff_RBP;
  UI_BaseMenu_o *__this_01;
  undefined8 *unaff_R12;
  ulong unaff_R13;
  undefined8 *unaff_R14;
  UnityEngine_Resolution_o *unaff_R15;
  UnityEngine_Resolution_Fields UVar15;
  undefined1 auVar16 [16];
  UnityEngine_Resolution_o __this_02;
  UnityEngine_Resolution_o __this_03;
  UnityEngine_Resolution_o __this_04;
  UnityEngine_Resolution_o __this_05;
  UnityEngine_Resolution_o __this_06;
  UnityEngine_Resolution_o __this_07;
  UnityEngine_Resolution_o __this_08;
  UnityEngine_Resolution_o __this_09;
  UnityEngine_Resolution_o __this_10;
  UnityEngine_Resolution_o __this_11;
  UnityEngine_Resolution_o __this_12;
  UnityEngine_Resolution_o __this_13;
  UnityEngine_Resolution_o __this_14;
  UnityEngine_Resolution_o __this_15;
  undefined1 auVar17 [12];
  undefined1 auStack_80 [12];
  int32_t iStack_74;
  undefined8 uStack_70;
  UnityEngine_RefreshRate_Fields UStack_68;
  undefined8 uStack_60;
  UnityEngine_RefreshRate_Fields UStack_58;
  UnityEngine_Resolution_array *pUStack_50;
  undefined8 *puStack_48;
  
  if (g_data_057aea3a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_FullscreenHandler);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Resolution_get_Item);
    g_data_057aea3a = '\x01';
    if (*(int *)((long)&TypeInfo_FullscreenHandler[2].parameters + 4) == 0) goto label_044b6b63;
label_044b6af5:
    pSVar8 = ApplicationManagers_FullscreenHandler__GetResolutions(TypeInfo_FullscreenHandler);
  }
  else {
    if (*(int *)((long)&TypeInfo_FullscreenHandler[2].parameters + 4) != 0) goto label_044b6af5;
label_044b6b63:
    pMVar13 = TypeInfo_FullscreenHandler;
    il2cpp_runtime_helper_02337ed0();
    pSVar8 = ApplicationManagers_FullscreenHandler__GetResolutions(pMVar13);
  }
  if (pSVar8 != (System_Collections_Generic_List_Resolution__o *)0x0) {
    UVar15 = (UnityEngine_Resolution_Fields)
             System_Collections_Generic_List_Resolution___get_Item(pSVar8,resolutionIndex,MethodInfo_Resolution_get_Item);
    method_01 = (UnityEngine_RefreshRate_Fields)UVar15.m_RefreshRate.fields;
    *(UnityEngine_Resolution_Fields *)(TypeInfo_FullscreenHandler[2].virtualMethodPointer + 8) = UVar15;
    puVar14 = (undefined1 *)register0x00000020;
    goto ApplicationManagers_FullscreenHandler__SetFullscreen;
  }
  il2cpp_runtime_helper_022b2c90();
  puStack_48 = &TypeInfo_FullscreenHandler;
  puVar14 = auStack_80;
  if (g_data_057aea3d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Reverse);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Resolution);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Resolution);
    il2cpp_runtime_helper_023445d0(&",");
    g_data_057aea3d = '\x01';
  }
  uStack_70 = 0;
  UStack_68.numerator = 0;
  UStack_68.denominator = 0;
  iStack_74 = 0;
  uStack_60 = 0;
  UStack_58.numerator = 0;
  UStack_58.denominator = 0;
  pSVar8 = (System_Collections_Generic_List_Resolution__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Resolution);
  System_Collections_Generic_List_Resolution____ctor(pSVar8,MethodInfo_List_1_UnityEngine_Resolution);
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor(__this,MethodInfo_HashSet_1_System_String);
  pUVar9 = UnityEngine_Screen__get_resolutions((MethodInfo *)0x0);
  auVar16._8_8_ = extraout_RDX;
  auVar16._0_8_ = pUVar9;
  if (pUVar9 == (UnityEngine_Resolution_array *)0x0) {
label_044b6eac:
    il2cpp_runtime_helper_022b2c90();
label_044b6eb1:
    auVar16 = il2cpp_runtime_helper_022b2ca0();
  }
  else {
    pMVar13 = (MethodInfo *)pUVar9->max_length;
    if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
      if ((int)pMVar13 < 1) goto label_044b6df0;
      method_02 = (MethodInfo *)((ulong)pMVar13 & 0xffffffff);
      unaff_R15 = pUVar9->m_Items;
      unaff_R13 = 0;
      pUStack_50 = pUVar9;
      if (method_02 != (MethodInfo *)0x0) {
        do {
          uStack_70._0_4_ = (unaff_R15->fields).m_Width;
          uStack_70._4_4_ = (unaff_R15->fields).m_Height;
          UStack_68 = (unaff_R15->fields).m_RefreshRate.fields;
          unaff_R12 = &uStack_70;
          __this_02.fields.m_RefreshRate.fields.numerator = 0;
          __this_02.fields.m_RefreshRate.fields.denominator = 0;
          __this_02.fields._0_8_ = unaff_R12;
          iStack_74 = UnityEngine_Resolution__get_width(__this_02,method_02);
          pSVar10 = System_Int32__ToString((int32_t)&iStack_74,(MethodInfo *)0x0);
          __this_03.fields.m_RefreshRate.fields.numerator = 0;
          __this_03.fields.m_RefreshRate.fields.denominator = 0;
          __this_03.fields._0_8_ = unaff_R12;
          iStack_74 = UnityEngine_Resolution__get_height(__this_03,method_03);
          pSVar11 = System_Int32__ToString((int32_t)&iStack_74,(MethodInfo *)0x0);
          pSVar10 = System_String__Concat_3af7150(pSVar10,",",pSVar11,(MethodInfo *)0x0);
          bVar7 = System_Collections_Generic_HashSet_object___Contains
                            (__this,(Il2CppObject *)pSVar10,MethodInfo_Boolean_Contains);
          lVar5 = MethodInfo_Void_Add;
          if ((char)bVar7 == '\0') {
            if (pSVar8 == (System_Collections_Generic_List_Resolution__o *)0x0) goto label_044b6eac;
            item.fields.m_RefreshRate.fields = UStack_68;
            item.fields.m_Width = (undefined4)uStack_70;
            item.fields.m_Height = uStack_70._4_4_;
            piVar1 = &(pSVar8->fields)._version;
            *piVar1 = *piVar1 + 1;
            pUVar9 = (pSVar8->fields)._items;
            if (pUVar9 == (UnityEngine_Resolution_array *)0x0) goto label_044b6eac;
            uVar3 = (pSVar8->fields)._size;
            if (uVar3 < (uint)pUVar9->max_length) {
              (pSVar8->fields)._size = uVar3 + 1;
              pUVar9->m_Items[(int)uVar3].fields.m_Width = (undefined4)uStack_70;
              pUVar9->m_Items[(int)uVar3].fields.m_Height = uStack_70._4_4_;
              pUVar9->m_Items[(int)uVar3].fields.m_RefreshRate.fields = UStack_68;
            }
            else {
              System_Collections_Generic_List_Resolution___AddWithResize
                        (pSVar8,item,
                         *(MethodInfo_3651CC0 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
            }
            System_Collections_Generic_HashSet_object___Add(__this,(Il2CppObject *)pSVar10,MethodInfo_Boolean_Add);
          }
          unaff_R13 = unaff_R13 + 1;
          uVar3 = (uint)pUStack_50->max_length;
          method_02 = (MethodInfo *)(ulong)uVar3;
          pMVar13 = (MethodInfo *)(long)(int)uVar3;
          unaff_R15 = unaff_R15 + 1;
          if ((long)pMVar13 <= (long)unaff_R13) goto label_044b6df0;
        } while (unaff_R13 < uVar3);
      }
      goto label_044b6eb1;
    }
    if ((int)pMVar13 < 1) {
label_044b6df0:
      if (pSVar8 != (System_Collections_Generic_List_Resolution__o *)0x0) {
        System_Collections_Generic_List_Resolution___Reverse(pSVar8,MethodInfo_Void_Reverse);
        if ((pSVar8->fields)._size != 0) {
          return;
        }
        uStack_60 = 0;
        UStack_58.numerator = 0;
        UStack_58.denominator = 0;
        __this_04.fields.m_RefreshRate.fields.numerator = 800;
        __this_04.fields.m_RefreshRate.fields.denominator = 0;
        __this_04.fields._0_8_ = &uStack_60;
        UnityEngine_Resolution__set_width(__this_04,0,pMVar13);
        __this_05.fields.m_RefreshRate.fields.numerator = 600;
        __this_05.fields.m_RefreshRate.fields.denominator = 0;
        __this_05.fields._0_8_ = &uStack_60;
        UnityEngine_Resolution__set_height(__this_05,0,pMVar13);
        lVar5 = MethodInfo_Void_Add;
        item_00.fields.m_RefreshRate.fields = UStack_58;
        item_00.fields.m_Width = (undefined4)uStack_60;
        item_00.fields.m_Height = uStack_60._4_4_;
        piVar1 = &(pSVar8->fields)._version;
        *piVar1 = *piVar1 + 1;
        pUVar9 = (pSVar8->fields)._items;
        if (pUVar9 != (UnityEngine_Resolution_array *)0x0) {
          uVar3 = (pSVar8->fields)._size;
          if (uVar3 < (uint)pUVar9->max_length) {
            (pSVar8->fields)._size = uVar3 + 1;
            pUVar9->m_Items[(int)uVar3].fields.m_Width = (undefined4)uStack_60;
            pUVar9->m_Items[(int)uVar3].fields.m_Height = uStack_60._4_4_;
            pUVar9->m_Items[(int)uVar3].fields.m_RefreshRate.fields = UStack_58;
            return;
          }
          System_Collections_Generic_List_Resolution___AddWithResize
                    (pSVar8,item_00,*(MethodInfo_3651CC0 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70)
                    );
          return;
        }
      }
      goto label_044b6eac;
    }
  }
  uStack_70 = *(undefined8 *)(auVar16._0_8_ + 0x20);
  UStack_68 = *(UnityEngine_RefreshRate_Fields *)(auVar16._0_8_ + 0x28);
  unaff_R14 = &uStack_70;
  __this_06.fields.m_RefreshRate.fields.numerator = 0;
  __this_06.fields.m_RefreshRate.fields.denominator = 0;
  __this_06.fields._0_8_ = unaff_R14;
  iStack_74 = UnityEngine_Resolution__get_width(__this_06,auVar16._8_8_);
  unaff_RBP = &iStack_74;
  unaff_RBX = System_Int32__ToString((int32_t)unaff_RBP,(MethodInfo *)0x0);
  __this_07.fields.m_RefreshRate.fields.numerator = 0;
  __this_07.fields.m_RefreshRate.fields.denominator = 0;
  __this_07.fields._0_8_ = unaff_R14;
  iStack_74 = UnityEngine_Resolution__get_height(__this_07,method_04);
  pSVar11 = System_Int32__ToString((int32_t)unaff_RBP,(MethodInfo *)0x0);
  pSVar10 = unaff_RBX;
  System_String__Concat_3af7150(unaff_RBX,",",pSVar11,(MethodInfo *)0x0);
  fullscreenLevel = (int32_t)pSVar10;
  il2cpp_runtime_helper_022b2c90();
  method_01 = extraout_RDX_00;
ApplicationManagers_FullscreenHandler__SetFullscreen:
  *(int32_t **)(puVar14 + -8) = unaff_RBP;
  *(undefined8 **)(puVar14 + -0x10) = unaff_R14;
  *(System_String_o **)(puVar14 + -0x18) = unaff_RBX;
  if (g_data_057aea3e == '\0') {
    *(undefined8 *)(puVar14 + -0x20) = 0x44b6f3b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CursorManager);
    *(undefined8 *)(puVar14 + -0x20) = 0x44b6f47;
    il2cpp_runtime_helper_023445d0(&TypeInfo_FullscreenHandler);
    *(undefined8 *)(puVar14 + -0x20) = 0x44b6f53;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    *(undefined8 *)(puVar14 + -0x20) = 0x44b6f5f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    *(undefined8 *)(puVar14 + -0x20) = 0x44b6f6b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057aea3e = '\x01';
    method_01 = extraout_RDX_01;
  }
  if (fullscreenLevel == 0) {
    if (*(int *)((long)&TypeInfo_FullscreenHandler[2].parameters + 4) == 0) {
      *(undefined8 *)(puVar14 + -0x20) = 0x44b6fe3;
      il2cpp_runtime_helper_02337ed0();
      method_01 = extraout_RDX_03;
    }
    __this_10.fields._0_8_ = TypeInfo_FullscreenHandler[2].virtualMethodPointer + 8;
    *(undefined8 *)(puVar14 + -0x20) = 0x44b6ff9;
    __this_10.fields.m_RefreshRate.fields.numerator = 0;
    __this_10.fields.m_RefreshRate.fields.denominator = 0;
    iVar6 = UnityEngine_Resolution__get_width(__this_10,(MethodInfo *)method_01);
    __this_11.fields._0_8_ = TypeInfo_FullscreenHandler[2].virtualMethodPointer + 8;
    *(undefined8 *)(puVar14 + -0x20) = 0x44b7011;
    __this_11.fields.m_RefreshRate.fields.numerator = 0;
    __this_11.fields.m_RefreshRate.fields.denominator = 0;
    height = UnityEngine_Resolution__get_height(__this_11,method_06);
    fullscreenMode = 3;
  }
  else {
    unaff_R14 = &TypeInfo_FullscreenHandler;
    if (*(int *)((long)&TypeInfo_FullscreenHandler[2].parameters + 4) == 0) {
      *(undefined8 *)(puVar14 + -0x20) = 0x44b6f8e;
      il2cpp_runtime_helper_02337ed0();
      method_01 = extraout_RDX_02;
    }
    __this_08.fields._0_8_ = TypeInfo_FullscreenHandler[2].virtualMethodPointer + 8;
    *(undefined8 *)(puVar14 + -0x20) = 0x44b6fa3;
    __this_08.fields.m_RefreshRate.fields.numerator = 0;
    __this_08.fields.m_RefreshRate.fields.denominator = 0;
    iVar6 = UnityEngine_Resolution__get_width(__this_08,(MethodInfo *)method_01);
    __this_09.fields._0_8_ = TypeInfo_FullscreenHandler[2].virtualMethodPointer + 8;
    *(undefined8 *)(puVar14 + -0x20) = 0x44b6fba;
    __this_09.fields.m_RefreshRate.fields.numerator = 0;
    __this_09.fields.m_RefreshRate.fields.denominator = 0;
    height = UnityEngine_Resolution__get_height(__this_09,method_05);
    if (fullscreenLevel == 1) {
      fullscreenMode = 1;
    }
    else {
      fullscreenMode = 0;
    }
  }
  *(undefined8 *)(puVar14 + -0x20) = 0x44b7025;
  UnityEngine_Screen__SetResolution_4dc09f0(iVar6,height,fullscreenMode,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
    *(undefined8 *)(puVar14 + -0x20) = 0x44b703d;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)(puVar14 + -0x20) = 0x44b7044;
  UI_CursorManager__RefreshCursorLock((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    *(undefined8 *)(puVar14 + -0x20) = 0x44b705d;
    il2cpp_runtime_helper_02337ed0();
  }
  x = *(UnityEngine_Object_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    *(undefined8 *)(puVar14 + -0x20) = 0x44b7084;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)(puVar14 + -0x20) = 0x44b7090;
  bVar7 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
    return;
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    *(undefined8 *)(puVar14 + -0x20) = 0x44b70a6;
    il2cpp_runtime_helper_02337ed0();
  }
  __this_01 = *(UI_BaseMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  if (__this_01 != (UI_BaseMenu_o *)0x0) {
    UI_BaseMenu__ApplyScale(__this_01,*(int32_t *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 8),(MethodInfo *)0x0);
    return;
  }
  *(undefined8 *)(puVar14 + -0x20) = 0x44b70e3;
  il2cpp_runtime_helper_022b2c90();
  *(UnityEngine_Object_o **)(puVar14 + -0x20) = x;
  if (g_data_057aea3b == '\0') {
    *(undefined8 *)(puVar14 + -0x28) = 0x44b7136;
    il2cpp_runtime_helper_023445d0(&TypeInfo_FullscreenHandler);
    *(undefined8 *)(puVar14 + -0x28) = 0x44b7142;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    g_data_057aea3b = '\x01';
    iVar2 = *(int *)((long)&TypeInfo_FullscreenHandler[2].parameters + 4);
    pMVar13 = TypeInfo_FullscreenHandler;
  }
  else {
    iVar2 = *(int *)((long)&TypeInfo_FullscreenHandler[2].parameters + 4);
    pMVar13 = TypeInfo_FullscreenHandler;
  }
  TypeInfo_FullscreenHandler = pMVar13;
  if (iVar2 == 0) {
    *(undefined8 *)(puVar14 + -0x28) = 0x44b7161;
    il2cpp_runtime_helper_02337ed0();
    *(undefined8 *)(puVar14 + -0x28) = 0x44b7166;
    pSVar8 = ApplicationManagers_FullscreenHandler__GetResolutions(pMVar13);
  }
  else {
    *(undefined8 *)(puVar14 + -0x28) = 0x44b7114;
    pSVar8 = ApplicationManagers_FullscreenHandler__GetResolutions(pMVar13);
  }
  if (pSVar8 != (System_Collections_Generic_List_Resolution__o *)0x0) {
    return;
  }
  *(code **)(puVar14 + -0x28) = ApplicationManagers_FullscreenHandler__GetResolutionOptions;
  il2cpp_runtime_helper_022b2c90();
  *(long **)(puVar14 + -0x28) = &TypeInfo_UIManager;
  *(UnityEngine_Resolution_o **)(puVar14 + -0x30) = unaff_R15;
  *(undefined8 **)(puVar14 + -0x38) = unaff_R14;
  *(ulong *)(puVar14 + -0x40) = unaff_R13;
  *(undefined8 **)(puVar14 + -0x48) = unaff_R12;
  *(ulong *)(puVar14 + -0x50) = (ulong)__this_01 & 0xffffffff;
  if (g_data_057aea3c == '\0') {
    *(undefined8 *)(puVar14 + -0xc0) = 0x44b7193;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    *(undefined8 *)(puVar14 + -0xc0) = 0x44b719f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    *(undefined8 *)(puVar14 + -0xc0) = 0x44b71ab;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Resolution_get_Current);
    *(undefined8 *)(puVar14 + -0xc0) = 0x44b71b7;
    il2cpp_runtime_helper_023445d0(&TypeInfo_FullscreenHandler);
    *(undefined8 *)(puVar14 + -0xc0) = 0x44b71c3;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    *(undefined8 *)(puVar14 + -0xc0) = 0x44b71cf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_Resolution_GetEnumerator);
    *(undefined8 *)(puVar14 + -0xc0) = 0x44b71db;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    *(undefined8 *)(puVar14 + -0xc0) = 0x44b71e7;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    *(undefined8 *)(puVar14 + -0xc0) = 0x44b71f3;
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    *(undefined8 *)(puVar14 + -0xc0) = 0x44b71ff;
    il2cpp_runtime_helper_023445d0(&" x ");
    g_data_057aea3c = '\x01';
  }
  *(undefined8 *)(puVar14 + -0x88) = 0;
  *(undefined8 *)(puVar14 + -0x80) = 0;
  *(undefined8 *)(puVar14 + -0x98) = 0;
  *(undefined8 *)(puVar14 + -0x90) = 0;
  *(undefined8 *)(puVar14 + -0xa8) = 0;
  *(undefined8 *)(puVar14 + -0xa0) = 0;
  *(undefined4 *)(puVar14 + -0xac) = 0;
  *(undefined8 *)(puVar14 + -0xc0) = 0x44b722f;
  __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  *(undefined8 *)(puVar14 + -0xc0) = 0x44b7244;
  System_Collections_Generic_List_object____ctor(__this_00,MethodInfo_List_1_System_String);
  pMVar13 = TypeInfo_FullscreenHandler;
  if (*(int *)((long)&TypeInfo_FullscreenHandler[2].parameters + 4) == 0) {
    *(undefined8 *)(puVar14 + -0xc0) = 0x44b725c;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)(puVar14 + -0xc0) = 0x44b7261;
  pSVar8 = ApplicationManagers_FullscreenHandler__GetResolutions(pMVar13);
  if (pSVar8 != (System_Collections_Generic_List_Resolution__o *)0x0) {
    *(undefined8 *)(puVar14 + -0xc0) = 0x44b7281;
    System_Collections_Generic_List_Resolution___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)(puVar14 + -0x70),pSVar8,MethodInfo_List_1_T_Enumerator_UnityEngine_Resolution_GetEnumerator);
    *(undefined4 *)(puVar14 + -0x88) = *(undefined4 *)(puVar14 + -0x60);
    *(undefined4 *)(puVar14 + -0x84) = *(undefined4 *)(puVar14 + -0x5c);
    *(undefined4 *)(puVar14 + -0x80) = *(undefined4 *)(puVar14 + -0x58);
    *(undefined4 *)(puVar14 + -0x7c) = *(undefined4 *)(puVar14 + -0x54);
    *(undefined8 *)(puVar14 + -0x98) = *(undefined8 *)(puVar14 + -0x70);
    *(undefined8 *)(puVar14 + -0x90) = *(undefined8 *)(puVar14 + -0x68);
    if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
      *(undefined8 *)(puVar14 + -0xc0) = 0x44b73a0;
      bVar7 = System_Collections_Generic_List_Enumerator_Resolution___MoveNext
                        ((System_Collections_Generic_List_Enumerator_T__o)
                         *(System_Collections_Generic_List_Enumerator_T__Fields *)(puVar14 + -0xb8),
                         (MethodInfo_321D270 *)(puVar14 + -0x98));
      pMVar13 = extraout_RDX_04;
      if ((char)bVar7 != '\0') goto label_044b73e8;
    }
    else {
      while( true ) {
        *(undefined8 *)(puVar14 + -0xc0) = 0x44b72ec;
        bVar7 = System_Collections_Generic_List_Enumerator_Resolution___MoveNext
                          ((System_Collections_Generic_List_Enumerator_T__o)
                           *(System_Collections_Generic_List_Enumerator_T__Fields *)(puVar14 + -0xb8),
                           (MethodInfo_321D270 *)(puVar14 + -0x98));
        if ((char)bVar7 == '\0') break;
        *(undefined8 *)(puVar14 + -0xa8) = *(undefined8 *)(puVar14 + -0x88);
        *(undefined8 *)(puVar14 + -0xa0) = *(undefined8 *)(puVar14 + -0x80);
        *(undefined8 *)(puVar14 + -0xc0) = 0x44b7308;
        __this_12.fields.m_RefreshRate.fields.numerator = 0;
        __this_12.fields.m_RefreshRate.fields.denominator = 0;
        __this_12.fields._0_8_ = puVar14 + -0xa8;
        iVar6 = UnityEngine_Resolution__get_width(__this_12,method_07);
        *(int32_t *)(puVar14 + -0xac) = iVar6;
        *(undefined8 *)(puVar14 + -0xc0) = 0x44b7316;
        pSVar10 = System_Int32__ToString((int32_t)(puVar14 + -0xac),(MethodInfo *)0x0);
        *(undefined8 *)(puVar14 + -0xc0) = 0x44b7323;
        __this_13.fields.m_RefreshRate.fields.numerator = 0;
        __this_13.fields.m_RefreshRate.fields.denominator = 0;
        __this_13.fields._0_8_ = puVar14 + -0xa8;
        iVar6 = UnityEngine_Resolution__get_height(__this_13,method_08);
        *(int32_t *)(puVar14 + -0xac) = iVar6;
        *(undefined8 *)(puVar14 + -0xc0) = 0x44b7331;
        pSVar11 = System_Int32__ToString((int32_t)(puVar14 + -0xac),(MethodInfo *)0x0);
        *(undefined8 *)(puVar14 + -0xc0) = 0x44b7348;
        pSVar10 = System_String__Concat_3af7150(pSVar10," x ",pSVar11,(MethodInfo *)0x0);
        lVar5 = MethodInfo_Void_Add;
        piVar1 = &(__this_00->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar4 = (__this_00->fields)._items;
        if (pSVar4 == (System_Object_array *)0x0) {
          *(undefined8 *)(puVar14 + -0xc0) = 0x44b73e3;
          il2cpp_runtime_helper_022b2c90();
          goto label_044b73e3;
        }
        uVar3 = (__this_00->fields)._size;
        if (uVar3 < (uint)pSVar4->max_length) {
          (__this_00->fields)._size = uVar3 + 1;
          pSVar4->m_Items[(int)uVar3] = (Il2CppObject *)pSVar10;
          *(undefined8 *)(puVar14 + -0xc0) = 0x44b7387;
          il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar3,pSVar10);
        }
        else {
          method_00 = *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70);
          *(undefined8 *)(puVar14 + -0xc0) = 0x44b72da;
          System_Collections_Generic_List_object___AddWithResize(__this_00,(Il2CppObject *)pSVar10,method_00);
        }
      }
    }
    *(undefined8 *)(puVar14 + -0xc0) = 0x44b73b8;
    System_Collections_Generic_List_Enumerator_Resolution___Dispose
              ((System_Collections_Generic_List_Enumerator_T__o)
               *(System_Collections_Generic_List_Enumerator_T__Fields *)(puVar14 + -0xb8),
               (MethodInfo_321D260 *)(puVar14 + -0x98));
    goto label_044b73b8;
  }
label_044b73e3:
  do {
    *(undefined8 *)(puVar14 + -0xc0) = 0x44b73e8;
    il2cpp_runtime_helper_022b2c90();
    pMVar13 = extraout_RDX_05;
label_044b73e8:
    *(undefined8 *)(puVar14 + -0xa8) = *(undefined8 *)(puVar14 + -0x88);
    *(undefined8 *)(puVar14 + -0xa0) = *(undefined8 *)(puVar14 + -0x80);
    *(undefined8 *)(puVar14 + -0xc0) = 0x44b73fe;
    __this_14.fields.m_RefreshRate.fields.numerator = 0;
    __this_14.fields.m_RefreshRate.fields.denominator = 0;
    __this_14.fields._0_8_ = puVar14 + -0xa8;
    iVar6 = UnityEngine_Resolution__get_width(__this_14,pMVar13);
    *(int32_t *)(puVar14 + -0xac) = iVar6;
    *(undefined8 *)(puVar14 + -0xc0) = 0x44b740e;
    pSVar10 = System_Int32__ToString((int32_t)(puVar14 + -0xac),(MethodInfo *)0x0);
    *(undefined8 *)(puVar14 + -0xc0) = 0x44b741d;
    __this_15.fields.m_RefreshRate.fields.numerator = 0;
    __this_15.fields.m_RefreshRate.fields.denominator = 0;
    __this_15.fields._0_8_ = puVar14 + -0xa8;
    iVar6 = UnityEngine_Resolution__get_height(__this_15,method_09);
    *(int32_t *)(puVar14 + -0xac) = iVar6;
    *(undefined8 *)(puVar14 + -0xc0) = 0x44b742d;
    pSVar11 = System_Int32__ToString((int32_t)(puVar14 + -0xac),(MethodInfo *)0x0);
    *(undefined8 *)(puVar14 + -0xc0) = 0x44b7444;
    System_String__Concat_3af7150(pSVar10," x ",pSVar11,(MethodInfo *)0x0);
    *(undefined8 *)(puVar14 + -0xc0) = 0x44b7449;
    auVar17 = il2cpp_runtime_helper_022b2c90();
    if (auVar17._8_4_ != 1) {
label_044b7511:
      *(undefined8 *)(puVar14 + -0xc0) = 0x44b752d;
      System_Collections_Generic_List_Enumerator_Resolution___Dispose
                ((System_Collections_Generic_List_Enumerator_T__o)
                 *(System_Collections_Generic_List_Enumerator_T__Fields *)(puVar14 + -0xb8),
                 (MethodInfo_321D260 *)(puVar14 + -0x98));
      *(undefined8 *)(puVar14 + -0xc0) = 0x44b753a;
      _Unwind_Resume(auVar17._0_8_);
    }
    *(undefined8 *)(puVar14 + -0xc0) = 0x44b74e4;
    plVar12 = (long *)__cxa_begin_catch(auVar17._0_8_);
    lVar5 = *plVar12;
    *(undefined8 *)(puVar14 + -0xc0) = 0x44b74ec;
    __cxa_end_catch();
    *(undefined8 *)(puVar14 + -0xc0) = 0x44b7500;
    System_Collections_Generic_List_Enumerator_Resolution___Dispose
              ((System_Collections_Generic_List_Enumerator_T__o)
               *(System_Collections_Generic_List_Enumerator_T__Fields *)(puVar14 + -0xb8),
               (MethodInfo_321D260 *)(puVar14 + -0x98));
    if (lVar5 != 0) {
      *(undefined8 *)(puVar14 + -0xc0) = 0x44b7511;
      il2cpp_runtime_helper_022fefe0(lVar5);
      goto label_044b7511;
    }
label_044b73b8:
    if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
      *(undefined8 *)(puVar14 + -0xc0) = 0x44b73cf;
      System_Collections_Generic_List_object___ToArray(__this_00,MethodInfo_String_ToArray);
      return;
    }
  } while( true );
}


// ApplicationManagers.FullscreenHandler$$SanitizeResolutionSetting
// il2cpp: int32_t ApplicationManagers_FullscreenHandler__SanitizeResolutionSetting (int32_t resolutionIndex, const MethodInfo* method);
// 0x44b70f0

int32_t ApplicationManagers_FullscreenHandler__SanitizeResolutionSetting
                  (int32_t resolutionIndex,MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  System_Collections_Generic_List_Enumerator_T__o __this;
  System_Collections_Generic_List_Enumerator_T__o __this_00;
  System_Collections_Generic_List_Enumerator_T__o __this_01;
  System_Collections_Generic_List_Enumerator_T__o __this_02;
  System_Collections_Generic_List_Enumerator_T__o __this_03;
  bool_conflict bVar5;
  System_Collections_Generic_List_Resolution__o *pSVar6;
  System_Collections_Generic_List_object__o *__this_04;
  System_String_o *pSVar7;
  System_String_o *pSVar8;
  System_Object_array *pSVar9;
  long *plVar10;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar11;
  MethodInfo *method_02;
  UnityEngine_Resolution_o __this_05;
  UnityEngine_Resolution_o __this_06;
  UnityEngine_Resolution_o __this_07;
  UnityEngine_Resolution_o __this_08;
  undefined1 auVar12 [12];
  undefined1 in_stack_ffffffffffffff60 [12];
  int32_t iVar13;
  Il2CppObject *pIVar14;
  System_Collections_Generic_List_T__o *pSStack_80;
  Il2CppType **ppIStack_78;
  undefined8 uStack_70;
  _union_249711 a_Stack_68 [2];
  undefined1 auStack_58 [16];
  undefined4 uStack_48;
  undefined4 uStack_44;
  _union_249711 _Stack_40;
  ulong uStack_38;
  
  if (g_data_057aea3b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_FullscreenHandler);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    g_data_057aea3b = '\x01';
    iVar2 = *(int *)((long)&TypeInfo_FullscreenHandler[2].parameters + 4);
    pMVar11 = TypeInfo_FullscreenHandler;
  }
  else {
    iVar2 = *(int *)((long)&TypeInfo_FullscreenHandler[2].parameters + 4);
    pMVar11 = TypeInfo_FullscreenHandler;
  }
  TypeInfo_FullscreenHandler = pMVar11;
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
    pSVar6 = ApplicationManagers_FullscreenHandler__GetResolutions(pMVar11);
  }
  else {
    pSVar6 = ApplicationManagers_FullscreenHandler__GetResolutions(pMVar11);
  }
  if (pSVar6 != (System_Collections_Generic_List_Resolution__o *)0x0) {
    if ((pSVar6->fields)._size <= resolutionIndex) {
      resolutionIndex = 0;
    }
    if (resolutionIndex < 0) {
      resolutionIndex = 0;
    }
    return resolutionIndex;
  }
  il2cpp_runtime_helper_022b2c90();
  uStack_38 = (ulong)(uint)resolutionIndex;
  if (g_data_057aea3c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Resolution_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_FullscreenHandler);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_Resolution_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&" x ");
    g_data_057aea3c = '\x01';
  }
  uStack_70 = (Il2CppObject *)0x0;
  a_Stack_68[0] = (_union_249711)0x0;
  pSStack_80 = (System_Collections_Generic_List_T__o *)0x0;
  ppIStack_78 = (Il2CppType **)0x0;
  pIVar14 = (Il2CppObject *)0x0;
  iVar13 = 0;
  __this_04 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor(__this_04,MethodInfo_List_1_System_String);
  pMVar11 = TypeInfo_FullscreenHandler;
  if (*(int *)((long)&TypeInfo_FullscreenHandler[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar6 = ApplicationManagers_FullscreenHandler__GetResolutions(pMVar11);
  if (pSVar6 != (System_Collections_Generic_List_Resolution__o *)0x0) {
    System_Collections_Generic_List_Resolution___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)auStack_58,pSVar6,MethodInfo_List_1_T_Enumerator_UnityEngine_Resolution_GetEnumerator);
    uStack_70 = (Il2CppObject *)CONCAT44(uStack_44,uStack_48);
    a_Stack_68[0]._4_4_ = _Stack_40._4_4_;
    a_Stack_68[0]._0_4_ = _Stack_40._0_4_;
    pSStack_80 = (System_Collections_Generic_List_T__o *)auStack_58._0_8_;
    ppIStack_78 = (Il2CppType **)auStack_58._8_8_;
    if (__this_04 == (System_Collections_Generic_List_object__o *)0x0) {
      __this_00.fields._version = iVar13;
      __this_00.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff60._0_8_;
      __this_00.fields._index = in_stack_ffffffffffffff60._8_4_;
      __this_00.fields._current = pIVar14;
      bVar5 = System_Collections_Generic_List_Enumerator_Resolution___MoveNext
                        (__this_00,(MethodInfo_321D270 *)&pSStack_80);
      pMVar11 = extraout_RDX;
      if ((char)bVar5 != '\0') goto label_044b73e8;
    }
    else {
      while (__this.fields._version = iVar13,
            __this.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff60._0_8_,
            __this.fields._index = in_stack_ffffffffffffff60._8_4_, __this.fields._current = pIVar14,
            bVar5 = System_Collections_Generic_List_Enumerator_Resolution___MoveNext
                              (__this,(MethodInfo_321D270 *)&pSStack_80), (char)bVar5 != '\0') {
        __this_05.fields.m_RefreshRate.fields.numerator = 0;
        __this_05.fields.m_RefreshRate.fields.denominator = 0;
        __this_05.fields._0_8_ = &stack0xffffffffffffff70;
        pIVar14 = uStack_70;
        UnityEngine_Resolution__get_width(__this_05,method_00);
        pSVar7 = System_Int32__ToString((int32_t)&stack0xffffffffffffff6c,(MethodInfo *)0x0);
        __this_06.fields.m_RefreshRate.fields.numerator = 0;
        __this_06.fields.m_RefreshRate.fields.denominator = 0;
        __this_06.fields._0_8_ = &stack0xffffffffffffff70;
        iVar13 = UnityEngine_Resolution__get_height(__this_06,method_01);
        pSVar8 = System_Int32__ToString((int32_t)&stack0xffffffffffffff6c,(MethodInfo *)0x0);
        pSVar7 = System_String__Concat_3af7150(pSVar7," x ",pSVar8,(MethodInfo *)0x0);
        lVar4 = MethodInfo_Void_Add;
        piVar1 = &(__this_04->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar9 = (__this_04->fields)._items;
        if (pSVar9 == (System_Object_array *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          goto label_044b73e3;
        }
        uVar3 = (__this_04->fields)._size;
        if (uVar3 < (uint)pSVar9->max_length) {
          (__this_04->fields)._size = uVar3 + 1;
          pSVar9->m_Items[(int)uVar3] = (Il2CppObject *)pSVar7;
          il2cpp_runtime_helper_022b4080(pSVar9->m_Items + (int)uVar3,pSVar7);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (__this_04,(Il2CppObject *)pSVar7,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
        }
      }
    }
    __this_01.fields._version = iVar13;
    __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff60._0_8_;
    __this_01.fields._index = in_stack_ffffffffffffff60._8_4_;
    __this_01.fields._current = pIVar14;
    System_Collections_Generic_List_Enumerator_Resolution___Dispose
              (__this_01,(MethodInfo_321D260 *)&pSStack_80);
    goto label_044b73b8;
  }
label_044b73e3:
  do {
    il2cpp_runtime_helper_022b2c90();
    pMVar11 = extraout_RDX_00;
label_044b73e8:
    __this_07.fields.m_RefreshRate.fields.numerator = 0;
    __this_07.fields.m_RefreshRate.fields.denominator = 0;
    __this_07.fields._0_8_ = &stack0xffffffffffffff70;
    pIVar14 = uStack_70;
    UnityEngine_Resolution__get_width(__this_07,pMVar11);
    pSVar7 = System_Int32__ToString((int32_t)&stack0xffffffffffffff6c,(MethodInfo *)0x0);
    __this_08.fields.m_RefreshRate.fields.numerator = 0;
    __this_08.fields.m_RefreshRate.fields.denominator = 0;
    __this_08.fields._0_8_ = &stack0xffffffffffffff70;
    iVar13 = UnityEngine_Resolution__get_height(__this_08,method_02);
    pSVar8 = System_Int32__ToString((int32_t)&stack0xffffffffffffff6c,(MethodInfo *)0x0);
    System_String__Concat_3af7150(pSVar7," x ",pSVar8,(MethodInfo *)0x0);
    auVar12 = il2cpp_runtime_helper_022b2c90();
    if (auVar12._8_4_ != 1) {
label_044b7511:
      __this_03.fields._version = iVar13;
      __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff60._0_8_;
      __this_03.fields._index = in_stack_ffffffffffffff60._8_4_;
      __this_03.fields._current = pIVar14;
      System_Collections_Generic_List_Enumerator_Resolution___Dispose
                (__this_03,(MethodInfo_321D260 *)&pSStack_80);
      _Unwind_Resume(auVar12._0_8_);
    }
    plVar10 = (long *)__cxa_begin_catch(auVar12._0_8_);
    lVar4 = *plVar10;
    __cxa_end_catch();
    __this_02.fields._version = iVar13;
    __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff60._0_8_;
    __this_02.fields._index = in_stack_ffffffffffffff60._8_4_;
    __this_02.fields._current = pIVar14;
    System_Collections_Generic_List_Enumerator_Resolution___Dispose
              (__this_02,(MethodInfo_321D260 *)&pSStack_80);
    if (lVar4 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar4);
      goto label_044b7511;
    }
label_044b73b8:
    if (__this_04 != (System_Collections_Generic_List_object__o *)0x0) {
      pSVar9 = System_Collections_Generic_List_object___ToArray(__this_04,MethodInfo_String_ToArray);
      return (int32_t)pSVar9;
    }
  } while( true );
}


// ApplicationManagers.FullscreenHandler$$GetResolutionOptions
// il2cpp: System_String_array* ApplicationManagers_FullscreenHandler__GetResolutionOptions (const MethodInfo* method);
// 0x44b7170

System_String_array * ApplicationManagers_FullscreenHandler__GetResolutionOptions(MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  long lVar4;
  System_Collections_Generic_List_Enumerator_T__o __this;
  System_Collections_Generic_List_Enumerator_T__o __this_00;
  System_Collections_Generic_List_Enumerator_T__o __this_01;
  System_Collections_Generic_List_Enumerator_T__o __this_02;
  System_Collections_Generic_List_Enumerator_T__o __this_03;
  bool_conflict bVar5;
  System_Collections_Generic_List_object__o *__this_04;
  System_Collections_Generic_List_Resolution__o *__this_05;
  System_String_o *pSVar6;
  System_String_o *pSVar7;
  System_String_array *pSVar8;
  long *plVar9;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar10;
  MethodInfo *method_02;
  UnityEngine_Resolution_o __this_06;
  UnityEngine_Resolution_o __this_07;
  UnityEngine_Resolution_o __this_08;
  UnityEngine_Resolution_o __this_09;
  undefined1 auVar11 [12];
  undefined1 in_stack_ffffffffffffff68 [12];
  int32_t iVar12;
  Il2CppObject *pIVar13;
  System_Collections_Generic_List_T__o *local_78;
  Il2CppType **ppIStack_70;
  undefined8 local_68;
  _union_249711 a_Stack_60 [2];
  undefined1 local_50 [16];
  undefined4 local_40;
  undefined4 uStack_3c;
  _union_249711 _Stack_38;
  
  if (g_data_057aea3c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Resolution_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_FullscreenHandler);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_Resolution_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&" x ");
    g_data_057aea3c = '\x01';
  }
  local_68 = (Il2CppObject *)0x0;
  a_Stack_60[0] = (_union_249711)0x0;
  local_78 = (System_Collections_Generic_List_T__o *)0x0;
  ppIStack_70 = (Il2CppType **)0x0;
  pIVar13 = (Il2CppObject *)0x0;
  iVar12 = 0;
  __this_04 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor(__this_04,MethodInfo_List_1_System_String);
  pMVar10 = TypeInfo_FullscreenHandler;
  if (*(int *)((long)&TypeInfo_FullscreenHandler[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_05 = ApplicationManagers_FullscreenHandler__GetResolutions(pMVar10);
  if (__this_05 != (System_Collections_Generic_List_Resolution__o *)0x0) {
    System_Collections_Generic_List_Resolution___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_50,__this_05,MethodInfo_List_1_T_Enumerator_UnityEngine_Resolution_GetEnumerator);
    local_68 = (Il2CppObject *)CONCAT44(uStack_3c,local_40);
    a_Stack_60[0]._4_4_ = _Stack_38._4_4_;
    a_Stack_60[0]._0_4_ = _Stack_38._0_4_;
    local_78 = (System_Collections_Generic_List_T__o *)local_50._0_8_;
    ppIStack_70 = (Il2CppType **)local_50._8_8_;
    if (__this_04 == (System_Collections_Generic_List_object__o *)0x0) {
      __this_00.fields._version = iVar12;
      __this_00.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff68._0_8_;
      __this_00.fields._index = in_stack_ffffffffffffff68._8_4_;
      __this_00.fields._current = pIVar13;
      bVar5 = System_Collections_Generic_List_Enumerator_Resolution___MoveNext
                        (__this_00,(MethodInfo_321D270 *)&local_78);
      pMVar10 = extraout_RDX;
      if ((char)bVar5 != '\0') goto label_044b73e8;
    }
    else {
      while (__this.fields._version = iVar12,
            __this.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff68._0_8_,
            __this.fields._index = in_stack_ffffffffffffff68._8_4_, __this.fields._current = pIVar13,
            bVar5 = System_Collections_Generic_List_Enumerator_Resolution___MoveNext
                              (__this,(MethodInfo_321D270 *)&local_78), (char)bVar5 != '\0') {
        __this_06.fields.m_RefreshRate.fields.numerator = 0;
        __this_06.fields.m_RefreshRate.fields.denominator = 0;
        __this_06.fields._0_8_ = &stack0xffffffffffffff78;
        pIVar13 = local_68;
        UnityEngine_Resolution__get_width(__this_06,method_00);
        pSVar6 = System_Int32__ToString((int32_t)&stack0xffffffffffffff74,(MethodInfo *)0x0);
        __this_07.fields.m_RefreshRate.fields.numerator = 0;
        __this_07.fields.m_RefreshRate.fields.denominator = 0;
        __this_07.fields._0_8_ = &stack0xffffffffffffff78;
        iVar12 = UnityEngine_Resolution__get_height(__this_07,method_01);
        pSVar7 = System_Int32__ToString((int32_t)&stack0xffffffffffffff74,(MethodInfo *)0x0);
        pSVar6 = System_String__Concat_3af7150(pSVar6," x ",pSVar7,(MethodInfo *)0x0);
        lVar4 = MethodInfo_Void_Add;
        piVar1 = &(__this_04->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar3 = (__this_04->fields)._items;
        if (pSVar3 == (System_Object_array *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          goto label_044b73e3;
        }
        uVar2 = (__this_04->fields)._size;
        if (uVar2 < (uint)pSVar3->max_length) {
          (__this_04->fields)._size = uVar2 + 1;
          pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)pSVar6;
          il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2,pSVar6);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (__this_04,(Il2CppObject *)pSVar6,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
        }
      }
    }
    __this_01.fields._version = iVar12;
    __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff68._0_8_;
    __this_01.fields._index = in_stack_ffffffffffffff68._8_4_;
    __this_01.fields._current = pIVar13;
    System_Collections_Generic_List_Enumerator_Resolution___Dispose(__this_01,(MethodInfo_321D260 *)&local_78)
    ;
    goto label_044b73b8;
  }
label_044b73e3:
  do {
    il2cpp_runtime_helper_022b2c90();
    pMVar10 = extraout_RDX_00;
label_044b73e8:
    __this_08.fields.m_RefreshRate.fields.numerator = 0;
    __this_08.fields.m_RefreshRate.fields.denominator = 0;
    __this_08.fields._0_8_ = &stack0xffffffffffffff78;
    pIVar13 = local_68;
    UnityEngine_Resolution__get_width(__this_08,pMVar10);
    pSVar6 = System_Int32__ToString((int32_t)&stack0xffffffffffffff74,(MethodInfo *)0x0);
    __this_09.fields.m_RefreshRate.fields.numerator = 0;
    __this_09.fields.m_RefreshRate.fields.denominator = 0;
    __this_09.fields._0_8_ = &stack0xffffffffffffff78;
    iVar12 = UnityEngine_Resolution__get_height(__this_09,method_02);
    pSVar7 = System_Int32__ToString((int32_t)&stack0xffffffffffffff74,(MethodInfo *)0x0);
    System_String__Concat_3af7150(pSVar6," x ",pSVar7,(MethodInfo *)0x0);
    auVar11 = il2cpp_runtime_helper_022b2c90();
    if (auVar11._8_4_ != 1) {
label_044b7511:
      __this_03.fields._version = iVar12;
      __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff68._0_8_;
      __this_03.fields._index = in_stack_ffffffffffffff68._8_4_;
      __this_03.fields._current = pIVar13;
      System_Collections_Generic_List_Enumerator_Resolution___Dispose
                (__this_03,(MethodInfo_321D260 *)&local_78);
      _Unwind_Resume(auVar11._0_8_);
    }
    plVar9 = (long *)__cxa_begin_catch(auVar11._0_8_);
    lVar4 = *plVar9;
    __cxa_end_catch();
    __this_02.fields._version = iVar12;
    __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff68._0_8_;
    __this_02.fields._index = in_stack_ffffffffffffff68._8_4_;
    __this_02.fields._current = pIVar13;
    System_Collections_Generic_List_Enumerator_Resolution___Dispose(__this_02,(MethodInfo_321D260 *)&local_78)
    ;
    if (lVar4 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar4);
      goto label_044b7511;
    }
label_044b73b8:
    if (__this_04 != (System_Collections_Generic_List_object__o *)0x0) {
      pSVar8 = (System_String_array *)System_Collections_Generic_List_object___ToArray(__this_04,MethodInfo_String_ToArray)
      ;
      return pSVar8;
    }
  } while( true );
}


// ApplicationManagers.FullscreenHandler$$GetResolutions
// il2cpp: System_Collections_Generic_List_Resolution__o* ApplicationManagers_FullscreenHandler__GetResolutions (const MethodInfo* method);
// 0x44b6b80

System_Collections_Generic_List_Resolution__o *
ApplicationManagers_FullscreenHandler__GetResolutions(MethodInfo *method)

{
  int32_t *piVar1;
  UnityEngine_Object_o *x;
  long lVar2;
  System_Collections_Generic_List_Enumerator_T__o __this;
  System_Collections_Generic_List_Enumerator_T__o __this_00;
  System_Collections_Generic_List_Enumerator_T__o __this_01;
  System_Collections_Generic_List_Enumerator_T__o __this_02;
  System_Collections_Generic_List_Enumerator_T__o __this_03;
  UnityEngine_Resolution_o item;
  UnityEngine_Resolution_o item_00;
  int32_t iVar3;
  int32_t height;
  bool_conflict bVar4;
  System_Collections_Generic_List_Resolution__o *pSVar5;
  System_Collections_Generic_HashSet_object__o *__this_04;
  UnityEngine_Resolution_array *pUVar6;
  System_String_o *pSVar7;
  System_String_o *str2;
  undefined4 extraout_var;
  System_Collections_Generic_List_Resolution__o *extraout_RAX;
  System_Collections_Generic_List_object__o *__this_05;
  System_String_o *pSVar8;
  System_Object_array *pSVar9;
  long *plVar10;
  MethodInfo *pMVar11;
  int32_t fullscreenMode;
  undefined8 extraout_RDX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *method_03;
  MethodInfo *extraout_RDX_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  MethodInfo *method_06;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  MethodInfo *method_07;
  uint uVar12;
  int iVar13;
  UI_BaseMenu_o *__this_06;
  undefined8 *unaff_R12;
  ulong unaff_R13;
  undefined8 *puVar14;
  UnityEngine_Resolution_o *unaff_R15;
  undefined1 auVar15 [16];
  UnityEngine_Resolution_o __this_07;
  UnityEngine_Resolution_o __this_08;
  UnityEngine_Resolution_o __this_09;
  UnityEngine_Resolution_o __this_10;
  UnityEngine_Resolution_o __this_11;
  UnityEngine_Resolution_o __this_12;
  UnityEngine_Resolution_o __this_13;
  UnityEngine_Resolution_o __this_14;
  UnityEngine_Resolution_o __this_15;
  UnityEngine_Resolution_o __this_16;
  UnityEngine_Resolution_o __this_17;
  UnityEngine_Resolution_o __this_18;
  UnityEngine_Resolution_o __this_19;
  UnityEngine_Resolution_o __this_20;
  undefined1 auVar16 [12];
  undefined1 in_stack_fffffffffffffee0 [12];
  Il2CppObject *pIVar17;
  undefined1 auStack_100 [48];
  Il2CppType **ppIStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  _union_249711 _Stack_c0;
  ulong uStack_b8;
  undefined8 *puStack_b0;
  ulong uStack_a8;
  undefined8 *puStack_a0;
  UnityEngine_Resolution_o *pUStack_98;
  code *pcStack_90;
  UnityEngine_Object_o *pUStack_88;
  System_String_o *pSStack_80;
  undefined8 *puStack_78;
  int32_t *piStack_70;
  int32_t local_5c;
  undefined8 local_58;
  UnityEngine_RefreshRate_Fields UStack_50;
  undefined8 local_48;
  UnityEngine_RefreshRate_Fields UStack_40;
  UnityEngine_Resolution_array *local_38;
  
  if (g_data_057aea3d == '\0') {
    piStack_70 = (int32_t *)0x44b6ba3;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    piStack_70 = (int32_t *)0x44b6baf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    piStack_70 = (int32_t *)0x44b6bbb;
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    piStack_70 = (int32_t *)0x44b6bc7;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    piStack_70 = (int32_t *)0x44b6bd3;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    piStack_70 = (int32_t *)0x44b6bdf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Reverse);
    piStack_70 = (int32_t *)0x44b6beb;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Resolution);
    piStack_70 = (int32_t *)0x44b6bf7;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    piStack_70 = (int32_t *)0x44b6c03;
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Resolution);
    piStack_70 = (int32_t *)0x44b6c0f;
    il2cpp_runtime_helper_023445d0(&",");
    g_data_057aea3d = '\x01';
  }
  local_58 = 0;
  UStack_50.numerator = 0;
  UStack_50.denominator = 0;
  local_5c = 0;
  local_48 = 0;
  UStack_40.numerator = 0;
  UStack_40.denominator = 0;
  piStack_70 = (int32_t *)0x44b6c3a;
  pSVar5 = (System_Collections_Generic_List_Resolution__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Resolution);
  piStack_70 = (int32_t *)0x44b6c4f;
  System_Collections_Generic_List_Resolution____ctor(pSVar5,MethodInfo_List_1_UnityEngine_Resolution);
  piStack_70 = (int32_t *)0x44b6c5e;
  __this_04 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  piStack_70 = (int32_t *)0x44b6c73;
  System_Collections_Generic_HashSet_object____ctor(__this_04,MethodInfo_HashSet_1_System_String);
  piStack_70 = (int32_t *)0x44b6c7a;
  pUVar6 = UnityEngine_Screen__get_resolutions((MethodInfo *)0x0);
  auVar15._8_8_ = extraout_RDX;
  auVar15._0_8_ = pUVar6;
  if (pUVar6 == (UnityEngine_Resolution_array *)0x0) {
label_044b6eac:
    piStack_70 = (int32_t *)0x44b6eb1;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pMVar11 = (MethodInfo *)pUVar6->max_length;
    if (__this_04 == (System_Collections_Generic_HashSet_object__o *)0x0) {
      if (0 < (int)pMVar11) goto label_044b6eb6;
label_044b6df0:
      if (pSVar5 != (System_Collections_Generic_List_Resolution__o *)0x0) {
        piStack_70 = (int32_t *)0x44b6e0b;
        System_Collections_Generic_List_Resolution___Reverse(pSVar5,MethodInfo_Void_Reverse);
        if ((pSVar5->fields)._size != 0) {
          return pSVar5;
        }
        local_48 = 0;
        UStack_40.numerator = 0;
        UStack_40.denominator = 0;
        piStack_70 = (int32_t *)0x44b6e32;
        __this_09.fields.m_RefreshRate.fields.numerator = 800;
        __this_09.fields.m_RefreshRate.fields.denominator = 0;
        __this_09.fields._0_8_ = &local_48;
        UnityEngine_Resolution__set_width(__this_09,0,pMVar11);
        piStack_70 = (int32_t *)0x44b6e41;
        __this_10.fields.m_RefreshRate.fields.numerator = 600;
        __this_10.fields.m_RefreshRate.fields.denominator = 0;
        __this_10.fields._0_8_ = &local_48;
        UnityEngine_Resolution__set_height(__this_10,0,pMVar11);
        lVar2 = MethodInfo_Void_Add;
        item_00.fields.m_RefreshRate.fields = UStack_40;
        item_00.fields.m_Width = (undefined4)local_48;
        item_00.fields.m_Height = local_48._4_4_;
        piVar1 = &(pSVar5->fields)._version;
        *piVar1 = *piVar1 + 1;
        pUVar6 = (pSVar5->fields)._items;
        if (pUVar6 != (UnityEngine_Resolution_array *)0x0) {
          uVar12 = (pSVar5->fields)._size;
          if (uVar12 < (uint)pUVar6->max_length) {
            (pSVar5->fields)._size = uVar12 + 1;
            pUVar6->m_Items[(int)uVar12].fields.m_Width = (undefined4)local_48;
            pUVar6->m_Items[(int)uVar12].fields.m_Height = local_48._4_4_;
            pUVar6->m_Items[(int)uVar12].fields.m_RefreshRate.fields = UStack_40;
            return pSVar5;
          }
          piStack_70 = (int32_t *)0x44b6e9a;
          System_Collections_Generic_List_Resolution___AddWithResize
                    (pSVar5,item_00,*(MethodInfo_3651CC0 **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70)
                    );
          return pSVar5;
        }
      }
      goto label_044b6eac;
    }
    if ((int)pMVar11 < 1) goto label_044b6df0;
    method_00 = (MethodInfo *)((ulong)pMVar11 & 0xffffffff);
    unaff_R15 = pUVar6->m_Items;
    unaff_R13 = 0;
    local_38 = pUVar6;
    if (method_00 != (MethodInfo *)0x0) {
      do {
        local_58._0_4_ = (unaff_R15->fields).m_Width;
        local_58._4_4_ = (unaff_R15->fields).m_Height;
        UStack_50 = (unaff_R15->fields).m_RefreshRate.fields;
        unaff_R12 = &local_58;
        piStack_70 = (int32_t *)0x44b6d2b;
        __this_07.fields.m_RefreshRate.fields.numerator = 0;
        __this_07.fields.m_RefreshRate.fields.denominator = 0;
        __this_07.fields._0_8_ = unaff_R12;
        local_5c = UnityEngine_Resolution__get_width(__this_07,method_00);
        piStack_70 = (int32_t *)0x44b6d3e;
        pSVar8 = System_Int32__ToString((int32_t)&local_5c,(MethodInfo *)0x0);
        piStack_70 = (int32_t *)0x44b6d4b;
        __this_08.fields.m_RefreshRate.fields.numerator = 0;
        __this_08.fields.m_RefreshRate.fields.denominator = 0;
        __this_08.fields._0_8_ = unaff_R12;
        local_5c = UnityEngine_Resolution__get_height(__this_08,method_01);
        piStack_70 = (int32_t *)0x44b6d5b;
        pSVar7 = System_Int32__ToString((int32_t)&local_5c,(MethodInfo *)0x0);
        piStack_70 = (int32_t *)0x44b6d72;
        pSVar8 = System_String__Concat_3af7150(pSVar8,",",pSVar7,(MethodInfo *)0x0);
        piStack_70 = (int32_t *)0x44b6d8a;
        bVar4 = System_Collections_Generic_HashSet_object___Contains
                          (__this_04,(Il2CppObject *)pSVar8,MethodInfo_Boolean_Contains);
        lVar2 = MethodInfo_Void_Add;
        if ((char)bVar4 == '\0') {
          if (pSVar5 == (System_Collections_Generic_List_Resolution__o *)0x0) goto label_044b6eac;
          item.fields.m_RefreshRate.fields = UStack_50;
          item.fields.m_Width = (undefined4)local_58;
          item.fields.m_Height = local_58._4_4_;
          piVar1 = &(pSVar5->fields)._version;
          *piVar1 = *piVar1 + 1;
          pUVar6 = (pSVar5->fields)._items;
          if (pUVar6 == (UnityEngine_Resolution_array *)0x0) goto label_044b6eac;
          uVar12 = (pSVar5->fields)._size;
          if (uVar12 < (uint)pUVar6->max_length) {
            (pSVar5->fields)._size = uVar12 + 1;
            pUVar6->m_Items[(int)uVar12].fields.m_Width = (undefined4)local_58;
            pUVar6->m_Items[(int)uVar12].fields.m_Height = local_58._4_4_;
            pUVar6->m_Items[(int)uVar12].fields.m_RefreshRate.fields = UStack_50;
          }
          else {
            piStack_70 = (int32_t *)0x44b6cd7;
            System_Collections_Generic_List_Resolution___AddWithResize
                      (pSVar5,item,*(MethodInfo_3651CC0 **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70))
            ;
          }
          piStack_70 = (int32_t *)0x44b6cec;
          System_Collections_Generic_HashSet_object___Add(__this_04,(Il2CppObject *)pSVar8,MethodInfo_Boolean_Add);
        }
        unaff_R13 = unaff_R13 + 1;
        uVar12 = (uint)local_38->max_length;
        method_00 = (MethodInfo *)(ulong)uVar12;
        pMVar11 = (MethodInfo *)(long)(int)uVar12;
        unaff_R15 = unaff_R15 + 1;
        if ((long)pMVar11 <= (long)unaff_R13) goto label_044b6df0;
      } while (unaff_R13 < uVar12);
    }
  }
  piStack_70 = (int32_t *)0x44b6eb6;
  auVar15 = il2cpp_runtime_helper_022b2ca0();
label_044b6eb6:
  local_58 = *(undefined8 *)(auVar15._0_8_ + 0x20);
  UStack_50 = *(UnityEngine_RefreshRate_Fields *)(auVar15._0_8_ + 0x28);
  puVar14 = &local_58;
  piStack_70 = (int32_t *)0x44b6ece;
  __this_11.fields.m_RefreshRate.fields.numerator = 0;
  __this_11.fields.m_RefreshRate.fields.denominator = 0;
  __this_11.fields._0_8_ = puVar14;
  local_5c = UnityEngine_Resolution__get_width(__this_11,auVar15._8_8_);
  piStack_70 = (int32_t *)0x44b6ee1;
  iVar3 = (int32_t)&local_5c;
  pSVar7 = System_Int32__ToString(iVar3,(MethodInfo *)0x0);
  piStack_70 = (int32_t *)0x44b6eee;
  __this_12.fields.m_RefreshRate.fields.numerator = 0;
  __this_12.fields.m_RefreshRate.fields.denominator = 0;
  __this_12.fields._0_8_ = puVar14;
  local_5c = UnityEngine_Resolution__get_height(__this_12,method_02);
  piStack_70 = (int32_t *)0x44b6efc;
  str2 = System_Int32__ToString(iVar3,(MethodInfo *)0x0);
  piStack_70 = (int32_t *)0x44b6f13;
  pSVar8 = pSVar7;
  System_String__Concat_3af7150(pSVar7,",",str2,(MethodInfo *)0x0);
  iVar13 = (int)pSVar8;
  piStack_70 = (int32_t *)0x44b6f18;
  il2cpp_runtime_helper_022b2c90();
  pMVar11 = extraout_RDX_00;
  pSStack_80 = pSVar7;
  puStack_78 = puVar14;
  piStack_70 = &local_5c;
  if (g_data_057aea3e == '\0') {
    pUStack_88 = (UnityEngine_Object_o *)0x44b6f3b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CursorManager);
    pUStack_88 = (UnityEngine_Object_o *)0x44b6f47;
    il2cpp_runtime_helper_023445d0(&TypeInfo_FullscreenHandler);
    pUStack_88 = (UnityEngine_Object_o *)0x44b6f53;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    pUStack_88 = (UnityEngine_Object_o *)0x44b6f5f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    pUStack_88 = (UnityEngine_Object_o *)0x44b6f6b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057aea3e = '\x01';
    pMVar11 = extraout_RDX_01;
  }
  if (iVar13 == 0) {
    if (*(int *)((long)&TypeInfo_FullscreenHandler[2].parameters + 4) == 0) {
      pUStack_88 = (UnityEngine_Object_o *)0x44b6fe3;
      il2cpp_runtime_helper_02337ed0();
      pMVar11 = extraout_RDX_03;
    }
    __this_15.fields._0_8_ = TypeInfo_FullscreenHandler[2].virtualMethodPointer + 8;
    pUStack_88 = (UnityEngine_Object_o *)0x44b6ff9;
    __this_15.fields.m_RefreshRate.fields.numerator = 0;
    __this_15.fields.m_RefreshRate.fields.denominator = 0;
    iVar3 = UnityEngine_Resolution__get_width(__this_15,pMVar11);
    __this_16.fields._0_8_ = TypeInfo_FullscreenHandler[2].virtualMethodPointer + 8;
    pUStack_88 = (UnityEngine_Object_o *)0x44b7011;
    __this_16.fields.m_RefreshRate.fields.numerator = 0;
    __this_16.fields.m_RefreshRate.fields.denominator = 0;
    height = UnityEngine_Resolution__get_height(__this_16,method_04);
    fullscreenMode = 3;
  }
  else {
    puVar14 = &TypeInfo_FullscreenHandler;
    if (*(int *)((long)&TypeInfo_FullscreenHandler[2].parameters + 4) == 0) {
      pUStack_88 = (UnityEngine_Object_o *)0x44b6f8e;
      il2cpp_runtime_helper_02337ed0();
      pMVar11 = extraout_RDX_02;
    }
    __this_13.fields._0_8_ = TypeInfo_FullscreenHandler[2].virtualMethodPointer + 8;
    pUStack_88 = (UnityEngine_Object_o *)0x44b6fa3;
    __this_13.fields.m_RefreshRate.fields.numerator = 0;
    __this_13.fields.m_RefreshRate.fields.denominator = 0;
    iVar3 = UnityEngine_Resolution__get_width(__this_13,pMVar11);
    __this_14.fields._0_8_ = TypeInfo_FullscreenHandler[2].virtualMethodPointer + 8;
    pUStack_88 = (UnityEngine_Object_o *)0x44b6fba;
    __this_14.fields.m_RefreshRate.fields.numerator = 0;
    __this_14.fields.m_RefreshRate.fields.denominator = 0;
    height = UnityEngine_Resolution__get_height(__this_14,method_03);
    if (iVar13 == 1) {
      fullscreenMode = 1;
    }
    else {
      fullscreenMode = 0;
    }
  }
  pUStack_88 = (UnityEngine_Object_o *)0x44b7025;
  UnityEngine_Screen__SetResolution_4dc09f0(iVar3,height,fullscreenMode,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
    pUStack_88 = (UnityEngine_Object_o *)0x44b703d;
    il2cpp_runtime_helper_02337ed0();
  }
  pUStack_88 = (UnityEngine_Object_o *)0x44b7044;
  UI_CursorManager__RefreshCursorLock((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    pUStack_88 = (UnityEngine_Object_o *)0x44b705d;
    il2cpp_runtime_helper_02337ed0();
  }
  x = *(UnityEngine_Object_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pUStack_88 = (UnityEngine_Object_o *)0x44b7084;
    il2cpp_runtime_helper_02337ed0();
  }
  pUStack_88 = (UnityEngine_Object_o *)0x44b7090;
  bVar4 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    return (System_Collections_Generic_List_Resolution__o *)CONCAT44(extraout_var,bVar4);
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    pUStack_88 = (UnityEngine_Object_o *)0x44b70a6;
    il2cpp_runtime_helper_02337ed0();
  }
  __this_06 = *(UI_BaseMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  if (__this_06 != (UI_BaseMenu_o *)0x0) {
    UI_BaseMenu__ApplyScale(__this_06,*(int32_t *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 8),(MethodInfo *)0x0);
    return extraout_RAX;
  }
  pUStack_88 = (UnityEngine_Object_o *)0x44b70e3;
  il2cpp_runtime_helper_022b2c90();
  pUStack_88 = x;
  if (g_data_057aea3b == '\0') {
    pcStack_90 = (code *)0x44b7136;
    il2cpp_runtime_helper_023445d0(&TypeInfo_FullscreenHandler);
    pcStack_90 = (code *)0x44b7142;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    g_data_057aea3b = '\x01';
    iVar13 = *(int *)((long)&TypeInfo_FullscreenHandler[2].parameters + 4);
    pMVar11 = TypeInfo_FullscreenHandler;
  }
  else {
    iVar13 = *(int *)((long)&TypeInfo_FullscreenHandler[2].parameters + 4);
    pMVar11 = TypeInfo_FullscreenHandler;
  }
  TypeInfo_FullscreenHandler = pMVar11;
  if (iVar13 == 0) {
    pcStack_90 = (code *)0x44b7161;
    il2cpp_runtime_helper_02337ed0();
    pcStack_90 = (code *)0x44b7166;
    pSVar5 = ApplicationManagers_FullscreenHandler__GetResolutions(pMVar11);
  }
  else {
    pcStack_90 = (code *)0x44b7114;
    pSVar5 = ApplicationManagers_FullscreenHandler__GetResolutions(pMVar11);
  }
  if (pSVar5 != (System_Collections_Generic_List_Resolution__o *)0x0) {
    uVar12 = (uint)__this_06;
    if ((pSVar5->fields)._size <= (int)uVar12) {
      uVar12 = 0;
    }
    pSVar5 = (System_Collections_Generic_List_Resolution__o *)(ulong)uVar12;
    if ((int)uVar12 < 0) {
      pSVar5 = (System_Collections_Generic_List_Resolution__o *)0x0;
    }
    return pSVar5;
  }
  pcStack_90 = ApplicationManagers_FullscreenHandler__GetResolutionOptions;
  il2cpp_runtime_helper_022b2c90();
  pcStack_90 = (code *)&TypeInfo_UIManager;
  uStack_b8 = (ulong)__this_06 & 0xffffffff;
  puStack_b0 = unaff_R12;
  uStack_a8 = unaff_R13;
  puStack_a0 = puVar14;
  pUStack_98 = unaff_R15;
  if (g_data_057aea3c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Resolution_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_FullscreenHandler);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_Resolution_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&" x ");
    g_data_057aea3c = '\x01';
  }
  auStack_100._16_8_ = (Il2CppObject *)0x0;
  auStack_100._24_8_ = (char *)0x0;
  auStack_100._0_8_ = (Il2CppType *)0x0;
  auStack_100._8_8_ = (Il2CppType **)0x0;
  pIVar17 = (Il2CppObject *)0x0;
  iVar3 = 0;
  __this_05 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor(__this_05,MethodInfo_List_1_System_String);
  pMVar11 = TypeInfo_FullscreenHandler;
  if (*(int *)((long)&TypeInfo_FullscreenHandler[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar5 = ApplicationManagers_FullscreenHandler__GetResolutions(pMVar11);
  if (pSVar5 != (System_Collections_Generic_List_Resolution__o *)0x0) {
    System_Collections_Generic_List_Resolution___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)(auStack_100 + 0x28),pSVar5,MethodInfo_List_1_T_Enumerator_UnityEngine_Resolution_GetEnumerator);
    auStack_100._20_4_ = uStack_c4;
    auStack_100._16_4_ = uStack_c8;
    auStack_100._28_4_ = _Stack_c0._4_4_;
    auStack_100._24_4_ = _Stack_c0._0_4_;
    auStack_100._0_8_ = auStack_100._40_8_;
    auStack_100._8_8_ = ppIStack_d0;
    if (__this_05 == (System_Collections_Generic_List_object__o *)0x0) {
      __this_00.fields._version = iVar3;
      __this_00.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffee0._0_8_;
      __this_00.fields._index = in_stack_fffffffffffffee0._8_4_;
      __this_00.fields._current = pIVar17;
      bVar4 = System_Collections_Generic_List_Enumerator_Resolution___MoveNext
                        (__this_00,(MethodInfo_321D270 *)auStack_100);
      pMVar11 = extraout_RDX_04;
      if ((char)bVar4 != '\0') goto label_044b73e8;
    }
    else {
      while (__this.fields._version = iVar3,
            __this.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffee0._0_8_,
            __this.fields._index = in_stack_fffffffffffffee0._8_4_, __this.fields._current = pIVar17,
            bVar4 = System_Collections_Generic_List_Enumerator_Resolution___MoveNext
                              (__this,(MethodInfo_321D270 *)auStack_100), (char)bVar4 != '\0') {
        __this_17.fields.m_RefreshRate.fields.numerator = 0;
        __this_17.fields.m_RefreshRate.fields.denominator = 0;
        __this_17.fields._0_8_ = &stack0xfffffffffffffef0;
        pIVar17 = (Il2CppObject *)auStack_100._16_8_;
        UnityEngine_Resolution__get_width(__this_17,method_05);
        pSVar8 = System_Int32__ToString((int32_t)&stack0xfffffffffffffeec,(MethodInfo *)0x0);
        __this_18.fields.m_RefreshRate.fields.numerator = 0;
        __this_18.fields.m_RefreshRate.fields.denominator = 0;
        __this_18.fields._0_8_ = &stack0xfffffffffffffef0;
        iVar3 = UnityEngine_Resolution__get_height(__this_18,method_06);
        pSVar7 = System_Int32__ToString((int32_t)&stack0xfffffffffffffeec,(MethodInfo *)0x0);
        pSVar8 = System_String__Concat_3af7150(pSVar8," x ",pSVar7,(MethodInfo *)0x0);
        lVar2 = MethodInfo_Void_Add;
        piVar1 = &(__this_05->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar9 = (__this_05->fields)._items;
        if (pSVar9 == (System_Object_array *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          goto label_044b73e3;
        }
        uVar12 = (__this_05->fields)._size;
        if (uVar12 < (uint)pSVar9->max_length) {
          (__this_05->fields)._size = uVar12 + 1;
          pSVar9->m_Items[(int)uVar12] = (Il2CppObject *)pSVar8;
          il2cpp_runtime_helper_022b4080(pSVar9->m_Items + (int)uVar12,pSVar8);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (__this_05,(Il2CppObject *)pSVar8,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
      }
    }
    __this_01.fields._version = iVar3;
    __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffee0._0_8_;
    __this_01.fields._index = in_stack_fffffffffffffee0._8_4_;
    __this_01.fields._current = pIVar17;
    System_Collections_Generic_List_Enumerator_Resolution___Dispose
              (__this_01,(MethodInfo_321D260 *)auStack_100);
    goto label_044b73b8;
  }
label_044b73e3:
  do {
    il2cpp_runtime_helper_022b2c90();
    pMVar11 = extraout_RDX_05;
label_044b73e8:
    __this_19.fields.m_RefreshRate.fields.numerator = 0;
    __this_19.fields.m_RefreshRate.fields.denominator = 0;
    __this_19.fields._0_8_ = &stack0xfffffffffffffef0;
    pIVar17 = (Il2CppObject *)auStack_100._16_8_;
    UnityEngine_Resolution__get_width(__this_19,pMVar11);
    pSVar8 = System_Int32__ToString((int32_t)&stack0xfffffffffffffeec,(MethodInfo *)0x0);
    __this_20.fields.m_RefreshRate.fields.numerator = 0;
    __this_20.fields.m_RefreshRate.fields.denominator = 0;
    __this_20.fields._0_8_ = &stack0xfffffffffffffef0;
    iVar3 = UnityEngine_Resolution__get_height(__this_20,method_07);
    pSVar7 = System_Int32__ToString((int32_t)&stack0xfffffffffffffeec,(MethodInfo *)0x0);
    System_String__Concat_3af7150(pSVar8," x ",pSVar7,(MethodInfo *)0x0);
    auVar16 = il2cpp_runtime_helper_022b2c90();
    if (auVar16._8_4_ != 1) {
label_044b7511:
      __this_03.fields._version = iVar3;
      __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffee0._0_8_;
      __this_03.fields._index = in_stack_fffffffffffffee0._8_4_;
      __this_03.fields._current = pIVar17;
      System_Collections_Generic_List_Enumerator_Resolution___Dispose
                (__this_03,(MethodInfo_321D260 *)auStack_100);
      _Unwind_Resume(auVar16._0_8_);
    }
    plVar10 = (long *)__cxa_begin_catch(auVar16._0_8_);
    lVar2 = *plVar10;
    __cxa_end_catch();
    __this_02.fields._version = iVar3;
    __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffee0._0_8_;
    __this_02.fields._index = in_stack_fffffffffffffee0._8_4_;
    __this_02.fields._current = pIVar17;
    System_Collections_Generic_List_Enumerator_Resolution___Dispose
              (__this_02,(MethodInfo_321D260 *)auStack_100);
    if (lVar2 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar2);
      goto label_044b7511;
    }
label_044b73b8:
    if (__this_05 != (System_Collections_Generic_List_object__o *)0x0) {
      pSVar9 = System_Collections_Generic_List_object___ToArray(__this_05,MethodInfo_String_ToArray);
      return (System_Collections_Generic_List_Resolution__o *)pSVar9;
    }
  } while( true );
}


// ApplicationManagers.FullscreenHandler$$SetFullscreen
// il2cpp: void ApplicationManagers_FullscreenHandler__SetFullscreen (int32_t fullscreen, const MethodInfo* method);
// 0x44b6f20

void ApplicationManagers_FullscreenHandler__SetFullscreen(int32_t fullscreen,MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  uint uVar3;
  UnityEngine_Object_o *x;
  System_Object_array *pSVar4;
  long lVar5;
  System_Collections_Generic_List_Enumerator_T__o __this;
  System_Collections_Generic_List_Enumerator_T__o __this_00;
  System_Collections_Generic_List_Enumerator_T__o __this_01;
  System_Collections_Generic_List_Enumerator_T__o __this_02;
  System_Collections_Generic_List_Enumerator_T__o __this_03;
  int32_t iVar6;
  int32_t height;
  bool_conflict bVar7;
  System_Collections_Generic_List_Resolution__o *pSVar8;
  System_Collections_Generic_List_object__o *__this_04;
  System_String_o *pSVar9;
  System_String_o *pSVar10;
  long *plVar11;
  int32_t fullscreenMode;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *pMVar12;
  MethodInfo *method_04;
  UI_BaseMenu_o *__this_05;
  UnityEngine_Resolution_o __this_06;
  UnityEngine_Resolution_o __this_07;
  UnityEngine_Resolution_o __this_08;
  UnityEngine_Resolution_o __this_09;
  UnityEngine_Resolution_o __this_10;
  UnityEngine_Resolution_o __this_11;
  UnityEngine_Resolution_o __this_12;
  UnityEngine_Resolution_o __this_13;
  undefined1 auVar13 [12];
  undefined1 in_stack_ffffffffffffff48 [12];
  Il2CppObject *pIVar14;
  System_Collections_Generic_List_T__o *pSStack_98;
  Il2CppType **ppIStack_90;
  undefined8 uStack_88;
  _union_249711 a_Stack_80 [2];
  undefined1 auStack_70 [16];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  _union_249711 _Stack_58;
  ulong uStack_50;
  
  if (g_data_057aea3e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CursorManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_FullscreenHandler);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057aea3e = '\x01';
    in_RDX = extraout_RDX;
  }
  if (fullscreen == 0) {
    if (*(int *)((long)&TypeInfo_FullscreenHandler[2].parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      in_RDX = extraout_RDX_01;
    }
    __this_08.fields._0_8_ = TypeInfo_FullscreenHandler[2].virtualMethodPointer + 8;
    __this_08.fields.m_RefreshRate.fields.numerator = 0;
    __this_08.fields.m_RefreshRate.fields.denominator = 0;
    iVar6 = UnityEngine_Resolution__get_width(__this_08,in_RDX);
    __this_09.fields._0_8_ = TypeInfo_FullscreenHandler[2].virtualMethodPointer + 8;
    __this_09.fields.m_RefreshRate.fields.numerator = 0;
    __this_09.fields.m_RefreshRate.fields.denominator = 0;
    height = UnityEngine_Resolution__get_height(__this_09,method_01);
    fullscreenMode = 3;
  }
  else {
    if (*(int *)((long)&TypeInfo_FullscreenHandler[2].parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      in_RDX = extraout_RDX_00;
    }
    __this_06.fields._0_8_ = TypeInfo_FullscreenHandler[2].virtualMethodPointer + 8;
    __this_06.fields.m_RefreshRate.fields.numerator = 0;
    __this_06.fields.m_RefreshRate.fields.denominator = 0;
    iVar6 = UnityEngine_Resolution__get_width(__this_06,in_RDX);
    __this_07.fields._0_8_ = TypeInfo_FullscreenHandler[2].virtualMethodPointer + 8;
    __this_07.fields.m_RefreshRate.fields.numerator = 0;
    __this_07.fields.m_RefreshRate.fields.denominator = 0;
    height = UnityEngine_Resolution__get_height(__this_07,method_00);
    if (fullscreen == 1) {
      fullscreenMode = 1;
    }
    else {
      fullscreenMode = 0;
    }
  }
  UnityEngine_Screen__SetResolution_4dc09f0(iVar6,height,fullscreenMode,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  UI_CursorManager__RefreshCursorLock((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  x = *(UnityEngine_Object_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar7 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
    return;
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_05 = *(UI_BaseMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  if (__this_05 != (UI_BaseMenu_o *)0x0) {
    UI_BaseMenu__ApplyScale(__this_05,*(int32_t *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 8),(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aea3b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_FullscreenHandler);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    g_data_057aea3b = '\x01';
    iVar2 = *(int *)((long)&TypeInfo_FullscreenHandler[2].parameters + 4);
    pMVar12 = TypeInfo_FullscreenHandler;
  }
  else {
    iVar2 = *(int *)((long)&TypeInfo_FullscreenHandler[2].parameters + 4);
    pMVar12 = TypeInfo_FullscreenHandler;
  }
  TypeInfo_FullscreenHandler = pMVar12;
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
    pSVar8 = ApplicationManagers_FullscreenHandler__GetResolutions(pMVar12);
  }
  else {
    pSVar8 = ApplicationManagers_FullscreenHandler__GetResolutions(pMVar12);
  }
  if (pSVar8 != (System_Collections_Generic_List_Resolution__o *)0x0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  uStack_50 = (ulong)__this_05 & 0xffffffff;
  if (g_data_057aea3c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Resolution_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_FullscreenHandler);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_Resolution_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&" x ");
    g_data_057aea3c = '\x01';
  }
  uStack_88 = (Il2CppObject *)0x0;
  a_Stack_80[0] = (_union_249711)0x0;
  pSStack_98 = (System_Collections_Generic_List_T__o *)0x0;
  ppIStack_90 = (Il2CppType **)0x0;
  pIVar14 = (Il2CppObject *)0x0;
  iVar6 = 0;
  __this_04 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor(__this_04,MethodInfo_List_1_System_String);
  pMVar12 = TypeInfo_FullscreenHandler;
  if (*(int *)((long)&TypeInfo_FullscreenHandler[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar8 = ApplicationManagers_FullscreenHandler__GetResolutions(pMVar12);
  if (pSVar8 != (System_Collections_Generic_List_Resolution__o *)0x0) {
    System_Collections_Generic_List_Resolution___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)auStack_70,pSVar8,MethodInfo_List_1_T_Enumerator_UnityEngine_Resolution_GetEnumerator);
    uStack_88 = (Il2CppObject *)CONCAT44(uStack_5c,uStack_60);
    a_Stack_80[0]._4_4_ = _Stack_58._4_4_;
    a_Stack_80[0]._0_4_ = _Stack_58._0_4_;
    pSStack_98 = (System_Collections_Generic_List_T__o *)auStack_70._0_8_;
    ppIStack_90 = (Il2CppType **)auStack_70._8_8_;
    if (__this_04 == (System_Collections_Generic_List_object__o *)0x0) {
      __this_00.fields._version = iVar6;
      __this_00.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff48._0_8_;
      __this_00.fields._index = in_stack_ffffffffffffff48._8_4_;
      __this_00.fields._current = pIVar14;
      bVar7 = System_Collections_Generic_List_Enumerator_Resolution___MoveNext
                        (__this_00,(MethodInfo_321D270 *)&pSStack_98);
      pMVar12 = extraout_RDX_02;
      if ((char)bVar7 != '\0') goto label_044b73e8;
    }
    else {
      while (__this.fields._version = iVar6,
            __this.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff48._0_8_,
            __this.fields._index = in_stack_ffffffffffffff48._8_4_, __this.fields._current = pIVar14,
            bVar7 = System_Collections_Generic_List_Enumerator_Resolution___MoveNext
                              (__this,(MethodInfo_321D270 *)&pSStack_98), (char)bVar7 != '\0') {
        __this_10.fields.m_RefreshRate.fields.numerator = 0;
        __this_10.fields.m_RefreshRate.fields.denominator = 0;
        __this_10.fields._0_8_ = &stack0xffffffffffffff58;
        pIVar14 = uStack_88;
        UnityEngine_Resolution__get_width(__this_10,method_02);
        pSVar9 = System_Int32__ToString((int32_t)&stack0xffffffffffffff54,(MethodInfo *)0x0);
        __this_11.fields.m_RefreshRate.fields.numerator = 0;
        __this_11.fields.m_RefreshRate.fields.denominator = 0;
        __this_11.fields._0_8_ = &stack0xffffffffffffff58;
        iVar6 = UnityEngine_Resolution__get_height(__this_11,method_03);
        pSVar10 = System_Int32__ToString((int32_t)&stack0xffffffffffffff54,(MethodInfo *)0x0);
        pSVar9 = System_String__Concat_3af7150(pSVar9," x ",pSVar10,(MethodInfo *)0x0);
        lVar5 = MethodInfo_Void_Add;
        piVar1 = &(__this_04->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar4 = (__this_04->fields)._items;
        if (pSVar4 == (System_Object_array *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          goto label_044b73e3;
        }
        uVar3 = (__this_04->fields)._size;
        if (uVar3 < (uint)pSVar4->max_length) {
          (__this_04->fields)._size = uVar3 + 1;
          pSVar4->m_Items[(int)uVar3] = (Il2CppObject *)pSVar9;
          il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar3,pSVar9);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (__this_04,(Il2CppObject *)pSVar9,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
        }
      }
    }
    __this_01.fields._version = iVar6;
    __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff48._0_8_;
    __this_01.fields._index = in_stack_ffffffffffffff48._8_4_;
    __this_01.fields._current = pIVar14;
    System_Collections_Generic_List_Enumerator_Resolution___Dispose
              (__this_01,(MethodInfo_321D260 *)&pSStack_98);
    goto label_044b73b8;
  }
label_044b73e3:
  do {
    il2cpp_runtime_helper_022b2c90();
    pMVar12 = extraout_RDX_03;
label_044b73e8:
    __this_12.fields.m_RefreshRate.fields.numerator = 0;
    __this_12.fields.m_RefreshRate.fields.denominator = 0;
    __this_12.fields._0_8_ = &stack0xffffffffffffff58;
    pIVar14 = uStack_88;
    UnityEngine_Resolution__get_width(__this_12,pMVar12);
    pSVar9 = System_Int32__ToString((int32_t)&stack0xffffffffffffff54,(MethodInfo *)0x0);
    __this_13.fields.m_RefreshRate.fields.numerator = 0;
    __this_13.fields.m_RefreshRate.fields.denominator = 0;
    __this_13.fields._0_8_ = &stack0xffffffffffffff58;
    iVar6 = UnityEngine_Resolution__get_height(__this_13,method_04);
    pSVar10 = System_Int32__ToString((int32_t)&stack0xffffffffffffff54,(MethodInfo *)0x0);
    System_String__Concat_3af7150(pSVar9," x ",pSVar10,(MethodInfo *)0x0);
    auVar13 = il2cpp_runtime_helper_022b2c90();
    if (auVar13._8_4_ != 1) {
label_044b7511:
      __this_03.fields._version = iVar6;
      __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff48._0_8_;
      __this_03.fields._index = in_stack_ffffffffffffff48._8_4_;
      __this_03.fields._current = pIVar14;
      System_Collections_Generic_List_Enumerator_Resolution___Dispose
                (__this_03,(MethodInfo_321D260 *)&pSStack_98);
      _Unwind_Resume(auVar13._0_8_);
    }
    plVar11 = (long *)__cxa_begin_catch(auVar13._0_8_);
    lVar5 = *plVar11;
    __cxa_end_catch();
    __this_02.fields._version = iVar6;
    __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff48._0_8_;
    __this_02.fields._index = in_stack_ffffffffffffff48._8_4_;
    __this_02.fields._current = pIVar14;
    System_Collections_Generic_List_Enumerator_Resolution___Dispose
              (__this_02,(MethodInfo_321D260 *)&pSStack_98);
    if (lVar5 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar5);
      goto label_044b7511;
    }
label_044b73b8:
    if (__this_04 != (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List_object___ToArray(__this_04,MethodInfo_String_ToArray);
      return;
    }
  } while( true );
}


// ApplicationManagers.FullscreenHandler$$UpdateFPS
// il2cpp: void ApplicationManagers_FullscreenHandler__UpdateFPS (const MethodInfo* method);
// 0x44b7550

void ApplicationManagers_FullscreenHandler__UpdateFPS(MethodInfo *method)

{
  code cVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  UnityEngine_Object_o *pUVar5;
  UnityEngine_AudioSource_o *__this;
  System_String_o *a;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  int32_t value;
  bool_conflict bVar6;
  long *plVar7;
  MethodInfo *pMVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [12];
  System_Collections_Generic_List_T__o *pSVar13;
  Il2CppMethodPointer pIVar14;
  GameManagers_PhotonVoiceSync_o *pGVar15;
  GameManagers_PhotonVoiceSync_o *__this_04;
  
  if (g_data_057aea3f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    il2cpp_runtime_helper_023445d0(&TypeInfo_FullscreenHandler);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0();
    g_data_057aea3f = '\x01';
  }
  lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x18);
  if (((lVar4 != 0) && (*(long *)(lVar4 + 0x38) != 0)) && (*(long *)(lVar4 + 0x40) != 0)) {
    iVar9 = *(int *)(*(long *)(lVar4 + 0x38) + 0x14);
    iVar2 = *(int *)(*(long *)(lVar4 + 0x40) + 0x14);
    uVar3 = *(uint *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 8);
    if (*(int *)((long)&TypeInfo_FullscreenHandler[2].parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      cVar1 = TypeInfo_FullscreenHandler[2].virtualMethodPointer[0x18];
    }
    else {
      cVar1 = TypeInfo_FullscreenHandler[2].virtualMethodPointer[0x18];
    }
    if (cVar1 != (code)0x0) {
      if ((uVar3 | 1) == 3) {
        value = -1;
        if (0 < iVar9) {
          value = iVar9;
        }
        iVar9 = *(int *)(TypeInfo_Application + 0xe4);
      }
      else {
        value = -1;
        if (0 < iVar2) {
          value = iVar2;
        }
        iVar9 = *(int *)(TypeInfo_Application + 0xe4);
      }
      goto joined_r0x044b7721;
    }
    if ((uVar3 | 1) == 3) {
      if (iVar9 < 1) {
label_044b770b:
        value = 0x3c;
        iVar9 = *(int *)(TypeInfo_Application + 0xe4);
        goto joined_r0x044b7721;
      }
      if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
    }
    else {
      if (iVar2 < 1) goto label_044b770b;
      iVar9 = iVar2;
      if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
    }
    value = System_Math__Min_3cb7d70(iVar9,0x3c,(MethodInfo *)0x0);
    iVar9 = *(int *)(TypeInfo_Application + 0xe4);
joined_r0x044b7721:
    if (iVar9 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Application__set_targetFrameRate(value,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aea40 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_FullscreenHandler);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
    il2cpp_runtime_helper_023445d0();
    g_data_057aea40 = '\x01';
  }
  lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
  if ((lVar4 != 0) && (*(long *)(lVar4 + 0x30) != 0)) {
    if (*(char *)(*(long *)(lVar4 + 0x30) + 0x11) != '\0') {
      if (*(int *)((long)&TypeInfo_FullscreenHandler[2].parameters + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        if (TypeInfo_FullscreenHandler[2].virtualMethodPointer[0x18] != (Il2CppMethodPointer)0x0) goto label_044b77e0;
label_044b7853:
        fVar10 = 0.0;
      }
      else {
        if (TypeInfo_FullscreenHandler[2].virtualMethodPointer[0x18] == (Il2CppMethodPointer)0x0) goto label_044b7853;
label_044b77e0:
        lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
        if ((lVar4 == 0) || (lVar4 = *(long *)(lVar4 + 0x20), lVar4 == 0)) goto label_044b78c6;
        fVar10 = *(float *)(lVar4 + 0x14);
      }
      UnityEngine_AudioListener__set_volume(fVar10,(MethodInfo *)0x0);
      if (*(int *)((long)&TypeInfo_FullscreenHandler[2].parameters + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar8 = TypeInfo_FullscreenHandler;
      *(byte *)(*(long *)(TypeInfo_MusicManager + 0xb8) + 0x10) = (byte)TypeInfo_FullscreenHandler[2].virtualMethodPointer[0x18] ^ 1;
label_044b7891:
      ApplicationManagers_MusicManager__ApplySoundSettings(pMVar8);
      if (*(int *)((long)&TypeInfo_VoiceChatManager[2].parameters + 4) == 0) {
        pMVar8 = TypeInfo_VoiceChatManager;
        il2cpp_runtime_helper_02337ed0();
        ApplicationManagers_VoiceChatManager__ApplySoundSettings(pMVar8);
        return;
      }
      ApplicationManagers_VoiceChatManager__ApplySoundSettings(TypeInfo_VoiceChatManager);
      return;
    }
    if (*(long *)(lVar4 + 0x20) != 0) {
      pMVar8 = (MethodInfo *)0x0;
      UnityEngine_AudioListener__set_volume(*(float *)(*(long *)(lVar4 + 0x20) + 0x14),(MethodInfo *)0x0);
      *(undefined1 *)(*(long *)(TypeInfo_MusicManager + 0xb8) + 0x10) = 0;
      goto label_044b7891;
    }
  }
label_044b78c6:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aea60 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MusicPlaylist);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    g_data_057aea60 = '\x01';
  }
  pUVar5 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_MusicManager + 0xb8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar6 = UnityEngine_Object__op_Equality(pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    return;
  }
  plVar7 = *(long **)(TypeInfo_MusicManager + 0xb8);
  lVar4 = *plVar7;
  if (lVar4 != 0) {
    if (*(char *)(lVar4 + 0x49) == '\0') {
      __this = *(UnityEngine_AudioSource_o **)(lVar4 + 0x28);
      fVar10 = *(float *)(lVar4 + 0x44);
      if (g_data_057aea72 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
        il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
        g_data_057aea72 = '\x01';
        plVar7 = *(long **)(TypeInfo_MusicManager + 0xb8);
      }
      fVar11 = 0.0;
      if ((char)plVar7[2] == '\0') {
        lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
        if ((lVar4 == 0) || (lVar4 = *(long *)(lVar4 + 0x28), lVar4 == 0)) goto label_044b7ad2;
        fVar11 = *(float *)(lVar4 + 0x14) * 0.4;
      }
      if (__this == (UnityEngine_AudioSource_o *)0x0) goto label_044b7ad2;
      UnityEngine_AudioSource__set_volume(__this,fVar10 * fVar11,(MethodInfo *)0x0);
    }
    lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
    if ((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x98), lVar4 != 0)) {
      a = *(System_String_o **)(lVar4 + 0x18);
      if (*(int *)(TypeInfo_MusicPlaylist + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar8 = *(MethodInfo **)(*(long *)(TypeInfo_MusicPlaylist + 0xb8) + 8);
      bVar6 = System_String__op_Inequality(a,(System_String_o *)pMVar8,(MethodInfo *)0x0);
      if ((char)bVar6 == '\0') {
        return;
      }
      lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
      if ((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x98), lVar4 != 0)) {
        ApplicationManagers_MusicManager__SetPlaylist(*(System_String_o **)(lVar4 + 0x18),pMVar8);
        return;
      }
    }
  }
label_044b7ad2:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeaa1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_PhotonVoiceSync_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_GameManagers_PhotonVoiceSync_GetEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057aeaa1 = '\x01';
  }
  pSVar13 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar14 = (Il2CppMethodPointer)0x0;
  pGVar15 = (GameManagers_PhotonVoiceSync_o *)0x0;
  pUVar5 = *(UnityEngine_Object_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar6 = UnityEngine_Object__op_Equality(pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (((char)bVar6 == '\0') &&
     (plVar7 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10), plVar7 != (long *)0x0)) {
    if ((*(byte *)(TypeInfo_InGameManager + 0x130) <= *(byte *)(*plVar7 + 0x130)) &&
       (*(long *)(*(long *)(*plVar7 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameManager + 0x130) * 8) == TypeInfo_InGameManager)
       ) {
      if ((System_Collections_Generic_List_object__o *)plVar7[0xb] ==
          (System_Collections_Generic_List_object__o *)0x0) {
label_044b7c8a:
        auVar12 = il2cpp_runtime_helper_022b2c90();
        if (auVar12._8_4_ == 1) {
          plVar7 = (long *)__cxa_begin_catch(auVar12._0_8_);
          lVar4 = *plVar7;
          __cxa_end_catch();
          __this_02.fields._8_8_ = pIVar14;
          __this_02.fields._list = pSVar13;
          __this_02.fields._current = (Il2CppObject *)pGVar15;
          System_Collections_Generic_List_Enumerator_object___Dispose
                    (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff60);
          if (lVar4 == 0) {
            return;
          }
          il2cpp_runtime_helper_022fefe0(lVar4);
        }
        __this_03.fields._8_8_ = pIVar14;
        __this_03.fields._list = pSVar13;
        __this_03.fields._current = (Il2CppObject *)pGVar15;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff60);
        _Unwind_Resume(auVar12._0_8_);
      }
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffff60,
                 (System_Collections_Generic_List_object__o *)plVar7[0xb],MethodInfo_List_1_T_Enumerator_GameManagers_PhotonVoiceSync_GetEnum);
      while (__this_04 = pGVar15, __this_00.fields._8_8_ = pIVar14, __this_00.fields._list = pSVar13,
            __this_00.fields._current = (Il2CppObject *)__this_04,
            bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffff60), (char)bVar6 != '\0')
      {
        pGVar15 = __this_04;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar6 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)__this_04,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar6 != '\0') {
          if (__this_04 == (GameManagers_PhotonVoiceSync_o *)0x0) {
            il2cpp_runtime_helper_022b2c90();
            goto label_044b7c8a;
          }
          GameManagers_PhotonVoiceSync__Apply(__this_04,(MethodInfo *)0x0);
        }
      }
      __this_01.fields._8_8_ = pIVar14;
      __this_01.fields._list = pSVar13;
      __this_01.fields._current = (Il2CppObject *)__this_04;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffff60);
    }
  }
  return;
}


// ApplicationManagers.FullscreenHandler$$UpdateSound
// il2cpp: void ApplicationManagers_FullscreenHandler__UpdateSound (const MethodInfo* method);
// 0x44b7730

void ApplicationManagers_FullscreenHandler__UpdateSound(MethodInfo *method)

{
  long lVar1;
  UnityEngine_Object_o *pUVar2;
  UnityEngine_AudioSource_o *__this;
  System_String_o *a;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  bool_conflict bVar3;
  long *plVar4;
  MethodInfo *pMVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [12];
  System_Collections_Generic_List_T__o *pSVar9;
  Il2CppMethodPointer pIVar10;
  GameManagers_PhotonVoiceSync_o *pGVar11;
  GameManagers_PhotonVoiceSync_o *__this_04;
  
  if (g_data_057aea40 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_FullscreenHandler);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
    il2cpp_runtime_helper_023445d0();
    g_data_057aea40 = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x30) != 0)) {
    if (*(char *)(*(long *)(lVar1 + 0x30) + 0x11) != '\0') {
      if (*(int *)((long)&TypeInfo_FullscreenHandler[2].parameters + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        if (TypeInfo_FullscreenHandler[2].virtualMethodPointer[0x18] != (Il2CppMethodPointer)0x0) goto label_044b77e0;
label_044b7853:
        fVar6 = 0.0;
      }
      else {
        if (TypeInfo_FullscreenHandler[2].virtualMethodPointer[0x18] == (Il2CppMethodPointer)0x0) goto label_044b7853;
label_044b77e0:
        lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
        if ((lVar1 == 0) || (lVar1 = *(long *)(lVar1 + 0x20), lVar1 == 0)) goto label_044b78c6;
        fVar6 = *(float *)(lVar1 + 0x14);
      }
      UnityEngine_AudioListener__set_volume(fVar6,(MethodInfo *)0x0);
      if (*(int *)((long)&TypeInfo_FullscreenHandler[2].parameters + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar5 = TypeInfo_FullscreenHandler;
      *(byte *)(*(long *)(TypeInfo_MusicManager + 0xb8) + 0x10) = (byte)TypeInfo_FullscreenHandler[2].virtualMethodPointer[0x18] ^ 1;
label_044b7891:
      ApplicationManagers_MusicManager__ApplySoundSettings(pMVar5);
      if (*(int *)((long)&TypeInfo_VoiceChatManager[2].parameters + 4) == 0) {
        pMVar5 = TypeInfo_VoiceChatManager;
        il2cpp_runtime_helper_02337ed0();
        ApplicationManagers_VoiceChatManager__ApplySoundSettings(pMVar5);
        return;
      }
      ApplicationManagers_VoiceChatManager__ApplySoundSettings(TypeInfo_VoiceChatManager);
      return;
    }
    if (*(long *)(lVar1 + 0x20) != 0) {
      pMVar5 = (MethodInfo *)0x0;
      UnityEngine_AudioListener__set_volume(*(float *)(*(long *)(lVar1 + 0x20) + 0x14),(MethodInfo *)0x0);
      *(undefined1 *)(*(long *)(TypeInfo_MusicManager + 0xb8) + 0x10) = 0;
      goto label_044b7891;
    }
  }
label_044b78c6:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aea60 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MusicPlaylist);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    g_data_057aea60 = '\x01';
  }
  pUVar2 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_MusicManager + 0xb8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = UnityEngine_Object__op_Equality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    return;
  }
  plVar4 = *(long **)(TypeInfo_MusicManager + 0xb8);
  lVar1 = *plVar4;
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0x49) == '\0') {
      __this = *(UnityEngine_AudioSource_o **)(lVar1 + 0x28);
      fVar6 = *(float *)(lVar1 + 0x44);
      if (g_data_057aea72 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_MusicManager);
        il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
        g_data_057aea72 = '\x01';
        plVar4 = *(long **)(TypeInfo_MusicManager + 0xb8);
      }
      fVar7 = 0.0;
      if ((char)plVar4[2] == '\0') {
        lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
        if ((lVar1 == 0) || (lVar1 = *(long *)(lVar1 + 0x28), lVar1 == 0)) goto label_044b7ad2;
        fVar7 = *(float *)(lVar1 + 0x14) * 0.4;
      }
      if (__this == (UnityEngine_AudioSource_o *)0x0) goto label_044b7ad2;
      UnityEngine_AudioSource__set_volume(__this,fVar6 * fVar7,(MethodInfo *)0x0);
    }
    lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
    if ((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x98), lVar1 != 0)) {
      a = *(System_String_o **)(lVar1 + 0x18);
      if (*(int *)(TypeInfo_MusicPlaylist + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar5 = *(MethodInfo **)(*(long *)(TypeInfo_MusicPlaylist + 0xb8) + 8);
      bVar3 = System_String__op_Inequality(a,(System_String_o *)pMVar5,(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        return;
      }
      lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
      if ((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x98), lVar1 != 0)) {
        ApplicationManagers_MusicManager__SetPlaylist(*(System_String_o **)(lVar1 + 0x18),pMVar5);
        return;
      }
    }
  }
label_044b7ad2:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeaa1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_PhotonVoiceSync_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_GameManagers_PhotonVoiceSync_GetEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057aeaa1 = '\x01';
  }
  pSVar9 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar10 = (Il2CppMethodPointer)0x0;
  pGVar11 = (GameManagers_PhotonVoiceSync_o *)0x0;
  pUVar2 = *(UnityEngine_Object_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = UnityEngine_Object__op_Equality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (((char)bVar3 == '\0') &&
     (plVar4 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10), plVar4 != (long *)0x0)) {
    if ((*(byte *)(TypeInfo_InGameManager + 0x130) <= *(byte *)(*plVar4 + 0x130)) &&
       (*(long *)(*(long *)(*plVar4 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameManager + 0x130) * 8) == TypeInfo_InGameManager)
       ) {
      if ((System_Collections_Generic_List_object__o *)plVar4[0xb] ==
          (System_Collections_Generic_List_object__o *)0x0) {
label_044b7c8a:
        auVar8 = il2cpp_runtime_helper_022b2c90();
        if (auVar8._8_4_ == 1) {
          plVar4 = (long *)__cxa_begin_catch(auVar8._0_8_);
          lVar1 = *plVar4;
          __cxa_end_catch();
          __this_02.fields._8_8_ = pIVar10;
          __this_02.fields._list = pSVar9;
          __this_02.fields._current = (Il2CppObject *)pGVar11;
          System_Collections_Generic_List_Enumerator_object___Dispose
                    (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff88);
          if (lVar1 == 0) {
            return;
          }
          il2cpp_runtime_helper_022fefe0(lVar1);
        }
        __this_03.fields._8_8_ = pIVar10;
        __this_03.fields._list = pSVar9;
        __this_03.fields._current = (Il2CppObject *)pGVar11;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff88);
        _Unwind_Resume(auVar8._0_8_);
      }
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffff88,
                 (System_Collections_Generic_List_object__o *)plVar4[0xb],MethodInfo_List_1_T_Enumerator_GameManagers_PhotonVoiceSync_GetEnum);
      while (__this_04 = pGVar11, __this_00.fields._8_8_ = pIVar10, __this_00.fields._list = pSVar9,
            __this_00.fields._current = (Il2CppObject *)__this_04,
            bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffff88), (char)bVar3 != '\0')
      {
        pGVar11 = __this_04;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar3 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)__this_04,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar3 != '\0') {
          if (__this_04 == (GameManagers_PhotonVoiceSync_o *)0x0) {
            il2cpp_runtime_helper_022b2c90();
            goto label_044b7c8a;
          }
          GameManagers_PhotonVoiceSync__Apply(__this_04,(MethodInfo *)0x0);
        }
      }
      __this_01.fields._8_8_ = pIVar10;
      __this_01.fields._list = pSVar9;
      __this_01.fields._current = (Il2CppObject *)__this_04;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffff88);
    }
  }
  return;
}


// ApplicationManagers.FullscreenHandler$$OnApplicationFocus
// il2cpp: void ApplicationManagers_FullscreenHandler__OnApplicationFocus (ApplicationManagers_FullscreenHandler_o* __this, bool hasFocus, const MethodInfo* method);
// 0x44b7d30

void ApplicationManagers_FullscreenHandler__OnApplicationFocus
               (ApplicationManagers_FullscreenHandler_o *__this,bool_conflict hasFocus,MethodInfo *method)

{
  MethodInfo *method_00;
  
  if (g_data_057aea41 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CursorManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_FullscreenHandler);
    g_data_057aea41 = '\x01';
  }
  if (*(int *)((long)&TypeInfo_FullscreenHandler[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  method_00 = TypeInfo_FullscreenHandler;
  TypeInfo_FullscreenHandler[2].virtualMethodPointer[0x18] = SUB41(hasFocus,0);
  ApplicationManagers_FullscreenHandler__UpdateSound(method_00);
  ApplicationManagers_FullscreenHandler__UpdateFPS(method_00);
  if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  UI_CursorManager__RefreshCursorLock((MethodInfo *)0x0);
  return;
}


// ApplicationManagers.FullscreenHandler$$IsWindowed
// il2cpp: bool ApplicationManagers_FullscreenHandler__IsWindowed (const MethodInfo* method);
// 0x44b7dc0

bool_conflict ApplicationManagers_FullscreenHandler__IsWindowed(MethodInfo *method)

{
  long lVar1;
  int32_t iVar2;
  
  if (g_data_057aea42 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    g_data_057aea42 = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x18);
  if ((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x28), lVar1 != 0)) {
    return (bool_conflict)CONCAT71((int7)((ulong)lVar1 >> 8),*(int *)(lVar1 + 0x14) == 0);
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aea43 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    g_data_057aea43 = '\x01';
  }
  if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  iVar2 = UnityEngine_Application__get_platform((MethodInfo *)0x0);
  return CONCAT31((int3)((uint)iVar2 >> 8),iVar2 == 2);
}


// ApplicationManagers.FullscreenHandler$$Supported
// il2cpp: bool ApplicationManagers_FullscreenHandler__Supported (const MethodInfo* method);
// 0x44b7e20

bool_conflict ApplicationManagers_FullscreenHandler__Supported(MethodInfo *method)

{
  int32_t iVar1;
  
  if (g_data_057aea43 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    g_data_057aea43 = '\x01';
  }
  if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  iVar1 = UnityEngine_Application__get_platform((MethodInfo *)0x0);
  return CONCAT31((int3)((uint)iVar1 >> 8),iVar1 == 2);
}


// ApplicationManagers.FullscreenHandler$$.ctor
// il2cpp: void ApplicationManagers_FullscreenHandler___ctor (ApplicationManagers_FullscreenHandler_o* __this, const MethodInfo* method);
// 0x44b7e70

void ApplicationManagers_FullscreenHandler___ctor
               (ApplicationManagers_FullscreenHandler_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.FullscreenHandler$$.cctor
// il2cpp: void ApplicationManagers_FullscreenHandler___cctor (const MethodInfo* method);
// 0x44b7e80

void ApplicationManagers_FullscreenHandler___cctor(MethodInfo *method)

{
  if (g_data_057aea44 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_FullscreenHandler);
    g_data_057aea44 = '\x01';
  }
  *(undefined1 *)(*(long *)(TypeInfo_FullscreenHandler + 0xb8) + 0x18) = 1;
  return;
}


