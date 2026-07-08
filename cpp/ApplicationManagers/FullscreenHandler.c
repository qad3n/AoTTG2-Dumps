// Type: ApplicationManagers.FullscreenHandler
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/ApplicationManagers/FullscreenHandler.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/ApplicationManagers/FullscreenHandler.cs  [CHANGED since prior version]
// --------------------------------

// ApplicationManagers.FullscreenHandler$$Init
// il2cpp: void ApplicationManagers_FullscreenHandler__Init (const MethodInfo* method);
// 0x419d8d0

void ApplicationManagers_FullscreenHandler__Init(MethodInfo *method)

{
  Il2CppObject *pIVar1;
  
  if (DAT_05704c6b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_FullscreenHandler);
    il2cpp_init_method_metadata(&MethodInfo_FullscreenHandler_CreateSingleton_FullscreenHand);
    DAT_05704c6b = '\x01';
  }
  if (*(int *)(TypeInfo_FullscreenHandler + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pIVar1 = Utility_SingletonFactory__CreateSingleton<object>
                     ((Il2CppObject *)**(undefined8 **)(TypeInfo_FullscreenHandler + 0xb8),MethodInfo_FullscreenHandler_CreateSingleton_FullscreenHand);
  **(undefined8 **)(TypeInfo_FullscreenHandler + 0xb8) = pIVar1;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_FullscreenHandler + 0xb8),pIVar1);
  return;
}


// ApplicationManagers.FullscreenHandler$$Apply
// il2cpp: void ApplicationManagers_FullscreenHandler__Apply (int32_t resolutionIndex, int32_t fullscreenLevel, const MethodInfo* method);
// 0x419d950

void ApplicationManagers_FullscreenHandler__Apply
               (int32_t resolutionIndex,int32_t fullscreenLevel,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_List_Resolution__o *__this;
  MethodInfo *method_00;
  MethodInfo *method_01;
  UnityEngine_Resolution_Fields UVar2;
  
  method_00 = (MethodInfo *)(ulong)(uint)resolutionIndex;
  if (DAT_05704c6c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_FullscreenHandler);
    il2cpp_init_method_metadata(&MethodInfo_Resolution_get_Item);
    DAT_05704c6c = '\x01';
    iVar1 = *(int *)((long)&TypeInfo_FullscreenHandler[2].parameters + 4);
    method_01 = TypeInfo_FullscreenHandler;
  }
  else {
    iVar1 = *(int *)((long)&TypeInfo_FullscreenHandler[2].parameters + 4);
    method_01 = TypeInfo_FullscreenHandler;
  }
  TypeInfo_FullscreenHandler = method_01;
  if (iVar1 == 0) {
    il2cpp_init_class();
    __this = ApplicationManagers_FullscreenHandler__GetResolutions(method_01);
  }
  else {
    __this = ApplicationManagers_FullscreenHandler__GetResolutions(method_01);
  }
  if (__this != (System_Collections_Generic_List_Resolution__o *)0x0) {
    UVar2 = (UnityEngine_Resolution_Fields)
            System_Collections_Generic_List<Resolution>__get_Item
                      (__this,resolutionIndex,MethodInfo_Resolution_get_Item);
    *(UnityEngine_Resolution_Fields *)(TypeInfo_FullscreenHandler[2].virtualMethodPointer + 8) = UVar2;
    ApplicationManagers_FullscreenHandler__SetFullscreen(fullscreenLevel,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.FullscreenHandler$$SanitizeResolutionSetting
// il2cpp: int32_t ApplicationManagers_FullscreenHandler__SanitizeResolutionSetting (int32_t resolutionIndex, const MethodInfo* method);
// 0x419df70

int32_t ApplicationManagers_FullscreenHandler__SanitizeResolutionSetting
                  (int32_t resolutionIndex,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_List_Resolution__o *pSVar2;
  MethodInfo *method_00;
  
  if (DAT_05704c6d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_FullscreenHandler);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    DAT_05704c6d = '\x01';
    iVar1 = *(int *)((long)&TypeInfo_FullscreenHandler[2].parameters + 4);
    method_00 = TypeInfo_FullscreenHandler;
  }
  else {
    iVar1 = *(int *)((long)&TypeInfo_FullscreenHandler[2].parameters + 4);
    method_00 = TypeInfo_FullscreenHandler;
  }
  TypeInfo_FullscreenHandler = method_00;
  if (iVar1 == 0) {
    il2cpp_init_class();
    pSVar2 = ApplicationManagers_FullscreenHandler__GetResolutions(method_00);
  }
  else {
    pSVar2 = ApplicationManagers_FullscreenHandler__GetResolutions(method_00);
  }
  if (pSVar2 != (System_Collections_Generic_List_Resolution__o *)0x0) {
    if ((pSVar2->fields)._size <= resolutionIndex) {
      resolutionIndex = 0;
    }
    if (resolutionIndex < 0) {
      resolutionIndex = 0;
    }
    return resolutionIndex;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.FullscreenHandler$$GetResolutionOptions
// il2cpp: System_String_array* ApplicationManagers_FullscreenHandler__GetResolutionOptions (const MethodInfo* method);
// 0x419dff0

System_String_array *
ApplicationManagers_FullscreenHandler__GetResolutionOptions(MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  System_Collections_Generic_List_Enumerator_T__o __this;
  System_Collections_Generic_List_Enumerator_T__o __this_00;
  System_Collections_Generic_List_Enumerator_T__o __this_01;
  long lVar4;
  bool_conflict bVar5;
  System_Collections_Generic_List_object__o *__this_02;
  System_Collections_Generic_List_Resolution__o *__this_03;
  System_String_o *pSVar6;
  System_String_o *pSVar7;
  System_String_array *pSVar8;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  UnityEngine_Resolution_o __this_04;
  UnityEngine_Resolution_o __this_05;
  UnityEngine_Resolution_o __this_06;
  UnityEngine_Resolution_o __this_07;
  undefined1 in_stack_ffffffffffffff68 [12];
  int32_t iVar9;
  Il2CppRGCTXData *pIVar10;
  System_Collections_Generic_List_T__o *local_78;
  Il2CppType **ppIStack_70;
  Il2CppRGCTXData *local_68;
  _union_247350 _Stack_60;
  undefined1 local_50 [16];
  Il2CppRGCTXData *local_40;
  _union_247350 _Stack_38;
  
  if (DAT_05704c6e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Resolution_get_Current);
    il2cpp_init_method_metadata(&TypeInfo_FullscreenHandler);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_UnityEngine_Resolution__Get);
    il2cpp_init_method_metadata(&MethodInfo_String___ToArray);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&" x ");
    DAT_05704c6e = '\x01';
  }
  local_68 = (Il2CppRGCTXData *)0x0;
  _Stack_60.genericMethod = (char *)0x0;
  local_78 = (System_Collections_Generic_List_T__o *)0x0;
  ppIStack_70 = (Il2CppType **)0x0;
  pIVar10 = (Il2CppRGCTXData *)0x0;
  iVar9 = 0;
  __this_02 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_string);
  System_Collections_Generic_List<object>___ctor(__this_02,MethodInfo_List_1_System_String);
  method_04 = TypeInfo_FullscreenHandler;
  if (*(int *)((long)&TypeInfo_FullscreenHandler[2].parameters + 4) == 0) {
    il2cpp_init_class();
  }
  __this_03 = ApplicationManagers_FullscreenHandler__GetResolutions(method_04);
  if (__this_03 != (System_Collections_Generic_List_Resolution__o *)0x0) {
    System_Collections_Generic_List<Resolution>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_50,__this_03,MethodInfo_List_1_T__Enumerator_UnityEngine_Resolution__Get);
    local_68 = local_40;
    _Stack_60 = _Stack_38;
    local_78 = (System_Collections_Generic_List_T__o *)local_50._0_8_;
    ppIStack_70 = (Il2CppType **)local_50._8_8_;
    if (__this_02 == (System_Collections_Generic_List_object__o *)0x0) {
      __this_00.fields._version = iVar9;
      __this_00.fields._list =
           (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff68._0_8_;
      __this_00.fields._index = in_stack_ffffffffffffff68._8_4_;
      __this_00.fields._current = (Il2CppObject *)pIVar10;
      bVar5 = System_Collections_Generic_List_Enumerator<Resolution>__MoveNext
                        (__this_00,(MethodInfo_319C490 *)&local_78);
      if ((char)bVar5 != '\0') {
        __this_06.fields.m_RefreshRate.fields.numerator = 0;
        __this_06.fields.m_RefreshRate.fields.denominator = 0;
        __this_06.fields._0_8_ = &stack0xffffffffffffff78;
        UnityEngine_Resolution__get_width(__this_06,method_02);
        pSVar6 = System_Int32__ToString((int32_t)&stack0xffffffffffffff74,(MethodInfo *)0x0);
        __this_07.fields.m_RefreshRate.fields.numerator = 0;
        __this_07.fields.m_RefreshRate.fields.denominator = 0;
        __this_07.fields._0_8_ = &stack0xffffffffffffff78;
        UnityEngine_Resolution__get_height(__this_07,method_03);
        pSVar7 = System_Int32__ToString((int32_t)&stack0xffffffffffffff74,(MethodInfo *)0x0);
        System_String__Concat(pSVar6," x ",pSVar7,(MethodInfo *)0x0);
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
    else {
      while( true ) {
        __this.fields._version = iVar9;
        __this.fields._list =
             (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff68._0_8_;
        __this.fields._index = in_stack_ffffffffffffff68._8_4_;
        __this.fields._current = (Il2CppObject *)pIVar10;
        bVar5 = System_Collections_Generic_List_Enumerator<Resolution>__MoveNext
                          (__this,(MethodInfo_319C490 *)&local_78);
        if ((char)bVar5 == '\0') break;
        __this_04.fields.m_RefreshRate.fields.numerator = 0;
        __this_04.fields.m_RefreshRate.fields.denominator = 0;
        __this_04.fields._0_8_ = &stack0xffffffffffffff78;
        pIVar10 = local_68;
        UnityEngine_Resolution__get_width(__this_04,method_00);
        pSVar6 = System_Int32__ToString((int32_t)&stack0xffffffffffffff74,(MethodInfo *)0x0);
        __this_05.fields.m_RefreshRate.fields.numerator = 0;
        __this_05.fields.m_RefreshRate.fields.denominator = 0;
        __this_05.fields._0_8_ = &stack0xffffffffffffff78;
        iVar9 = UnityEngine_Resolution__get_height(__this_05,method_01);
        pSVar7 = System_Int32__ToString((int32_t)&stack0xffffffffffffff74,(MethodInfo *)0x0);
        pSVar6 = System_String__Concat(pSVar6," x ",pSVar7,(MethodInfo *)0x0);
        lVar4 = MethodInfo_Void_Add;
        piVar1 = &(__this_02->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar3 = (__this_02->fields)._items;
        if (pSVar3 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        uVar2 = (__this_02->fields)._size;
        if (uVar2 < (uint)pSVar3->max_length) {
          (__this_02->fields)._size = uVar2 + 1;
          pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)pSVar6;
          il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar2,pSVar6);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    (__this_02,(Il2CppObject *)pSVar6,
                     *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
        }
      }
    }
    __this_01.fields._version = iVar9;
    __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff68._0_8_
    ;
    __this_01.fields._index = in_stack_ffffffffffffff68._8_4_;
    __this_01.fields._current = (Il2CppObject *)pIVar10;
    System_Collections_Generic_List_Enumerator<Resolution>__Dispose
              (__this_01,(MethodInfo_319C480 *)&local_78);
    if (__this_02 != (System_Collections_Generic_List_object__o *)0x0) {
      pSVar8 = (System_String_array *)
               System_Collections_Generic_List<object>__ToArray(__this_02,MethodInfo_String___ToArray);
      return pSVar8;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.FullscreenHandler$$GetResolutions
// il2cpp: System_Collections_Generic_List_Resolution__o* ApplicationManagers_FullscreenHandler__GetResolutions (const MethodInfo* method);
// 0x419da00

System_Collections_Generic_List_Resolution__o *
ApplicationManagers_FullscreenHandler__GetResolutions(MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  UnityEngine_Resolution_o item;
  UnityEngine_Resolution_o item_00;
  long lVar3;
  bool_conflict bVar4;
  System_Collections_Generic_List_Resolution__o *__this;
  System_Collections_Generic_HashSet_object__o *__this_00;
  UnityEngine_Resolution_array *pUVar5;
  System_String_o *pSVar6;
  System_String_o *pSVar7;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  ulong uVar8;
  UnityEngine_Resolution_o *pUVar9;
  UnityEngine_Resolution_o __this_01;
  UnityEngine_Resolution_o __this_02;
  UnityEngine_Resolution_o __this_03;
  UnityEngine_Resolution_o __this_04;
  UnityEngine_Resolution_o __this_05;
  UnityEngine_Resolution_o __this_06;
  int32_t local_5c;
  undefined8 local_58;
  UnityEngine_RefreshRate_Fields UStack_50;
  undefined8 local_48;
  UnityEngine_RefreshRate_Fields UStack_40;
  UnityEngine_Resolution_array *local_38;
  
  if (DAT_05704c6f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Reverse);
    il2cpp_init_method_metadata(&MethodInfo_List_1_UnityEngine_Resolution);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&TypeInfo_List_Resolution);
    il2cpp_init_method_metadata(&",");
    DAT_05704c6f = '\x01';
  }
  local_58 = 0;
  UStack_50.numerator = 0;
  UStack_50.denominator = 0;
  local_5c = 0;
  local_48 = 0;
  UStack_40.numerator = 0;
  UStack_40.denominator = 0;
  __this = (System_Collections_Generic_List_Resolution__o *)il2cpp_runtime_glue(TypeInfo_List_Resolution);
  System_Collections_Generic_List<Resolution>___ctor(__this,MethodInfo_List_1_UnityEngine_Resolution);
  __this_00 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this_00,MethodInfo_HashSet_1_System_String);
  pUVar5 = UnityEngine_Screen__get_resolutions((MethodInfo *)0x0);
  if (pUVar5 != (UnityEngine_Resolution_array *)0x0) {
    method_00 = (MethodInfo *)pUVar5->max_length;
    if (__this_00 == (System_Collections_Generic_HashSet_object__o *)0x0) {
      if (0 < (int)method_00) {
        local_58._0_4_ = pUVar5->m_Items[0].fields.m_Width;
        local_58._4_4_ = pUVar5->m_Items[0].fields.m_Height;
        UStack_50 = pUVar5->m_Items[0].fields.m_RefreshRate.fields;
        __this_05.fields.m_RefreshRate.fields.numerator = 0;
        __this_05.fields.m_RefreshRate.fields.denominator = 0;
        __this_05.fields._0_8_ = &local_58;
        local_5c = UnityEngine_Resolution__get_width(__this_05,method_01);
        pSVar6 = System_Int32__ToString((int32_t)&local_5c,(MethodInfo *)0x0);
        __this_06.fields.m_RefreshRate.fields.numerator = 0;
        __this_06.fields.m_RefreshRate.fields.denominator = 0;
        __this_06.fields._0_8_ = &local_58;
        local_5c = UnityEngine_Resolution__get_height(__this_06,method_04);
        pSVar7 = System_Int32__ToString((int32_t)&local_5c,(MethodInfo *)0x0);
        System_String__Concat(pSVar6,",",pSVar7,(MethodInfo *)0x0);
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
    else if (0 < (int)method_00) {
      method_02 = (MethodInfo *)((ulong)method_00 & 0xffffffff);
      pUVar9 = pUVar5->m_Items;
      uVar8 = 0;
      local_38 = pUVar5;
      if (method_02 != (MethodInfo *)0x0) {
        do {
          local_58._0_4_ = (pUVar9->fields).m_Width;
          local_58._4_4_ = (pUVar9->fields).m_Height;
          UStack_50 = (pUVar9->fields).m_RefreshRate.fields;
          __this_01.fields.m_RefreshRate.fields.numerator = 0;
          __this_01.fields.m_RefreshRate.fields.denominator = 0;
          __this_01.fields._0_8_ = &local_58;
          local_5c = UnityEngine_Resolution__get_width(__this_01,method_02);
          pSVar6 = System_Int32__ToString((int32_t)&local_5c,(MethodInfo *)0x0);
          __this_02.fields.m_RefreshRate.fields.numerator = 0;
          __this_02.fields.m_RefreshRate.fields.denominator = 0;
          __this_02.fields._0_8_ = &local_58;
          local_5c = UnityEngine_Resolution__get_height(__this_02,method_03);
          pSVar7 = System_Int32__ToString((int32_t)&local_5c,(MethodInfo *)0x0);
          pSVar6 = System_String__Concat(pSVar6,",",pSVar7,(MethodInfo *)0x0);
          bVar4 = System_Collections_Generic_HashSet<object>__Contains
                            (__this_00,(Il2CppObject *)pSVar6,MethodInfo_Boolean_Contains);
          lVar3 = MethodInfo_Void_Add;
          if ((char)bVar4 == '\0') {
            if (__this == (System_Collections_Generic_List_Resolution__o *)0x0) goto LAB_0419dd2c;
            item.fields.m_RefreshRate.fields = UStack_50;
            item.fields.m_Width = (undefined4)local_58;
            item.fields.m_Height = local_58._4_4_;
            piVar1 = &(__this->fields)._version;
            *piVar1 = *piVar1 + 1;
            pUVar5 = (__this->fields)._items;
            if (pUVar5 == (UnityEngine_Resolution_array *)0x0) goto LAB_0419dd2c;
            uVar2 = (__this->fields)._size;
            if (uVar2 < (uint)pUVar5->max_length) {
              (__this->fields)._size = uVar2 + 1;
              pUVar5->m_Items[(int)uVar2].fields.m_Width = (undefined4)local_58;
              pUVar5->m_Items[(int)uVar2].fields.m_Height = local_58._4_4_;
              pUVar5->m_Items[(int)uVar2].fields.m_RefreshRate.fields = UStack_50;
            }
            else {
              System_Collections_Generic_List<Resolution>__AddWithResize
                        (__this,item,
                         *(MethodInfo_35CCDF0 **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70))
              ;
            }
            System_Collections_Generic_HashSet<object>__Add
                      (__this_00,(Il2CppObject *)pSVar6,MethodInfo_Boolean_Add);
          }
          uVar8 = uVar8 + 1;
          uVar2 = (uint)local_38->max_length;
          method_02 = (MethodInfo *)(ulong)uVar2;
          method_00 = (MethodInfo *)(long)(int)uVar2;
          pUVar9 = pUVar9 + 1;
          if ((long)method_00 <= (long)uVar8) goto LAB_0419dc70;
        } while (uVar8 < uVar2);
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
LAB_0419dc70:
    if (__this != (System_Collections_Generic_List_Resolution__o *)0x0) {
      System_Collections_Generic_List<Resolution>__Reverse(__this,MethodInfo_Void_Reverse);
      if ((__this->fields)._size == 0) {
        local_48 = 0;
        UStack_40.numerator = 0;
        UStack_40.denominator = 0;
        __this_03.fields.m_RefreshRate.fields.numerator = 800;
        __this_03.fields.m_RefreshRate.fields.denominator = 0;
        __this_03.fields._0_8_ = &local_48;
        UnityEngine_Resolution__set_width(__this_03,0,method_00);
        __this_04.fields.m_RefreshRate.fields.numerator = 600;
        __this_04.fields.m_RefreshRate.fields.denominator = 0;
        __this_04.fields._0_8_ = &local_48;
        UnityEngine_Resolution__set_height(__this_04,0,method_00);
        lVar3 = MethodInfo_Void_Add;
        item_00.fields.m_RefreshRate.fields = UStack_40;
        item_00.fields.m_Width = (undefined4)local_48;
        item_00.fields.m_Height = local_48._4_4_;
        piVar1 = &(__this->fields)._version;
        *piVar1 = *piVar1 + 1;
        pUVar5 = (__this->fields)._items;
        if (pUVar5 == (UnityEngine_Resolution_array *)0x0) goto LAB_0419dd2c;
        uVar2 = (__this->fields)._size;
        if (uVar2 < (uint)pUVar5->max_length) {
          (__this->fields)._size = uVar2 + 1;
          pUVar5->m_Items[(int)uVar2].fields.m_Width = (undefined4)local_48;
          pUVar5->m_Items[(int)uVar2].fields.m_Height = local_48._4_4_;
          pUVar5->m_Items[(int)uVar2].fields.m_RefreshRate.fields = UStack_40;
        }
        else {
          System_Collections_Generic_List<Resolution>__AddWithResize
                    (__this,item_00,
                     *(MethodInfo_35CCDF0 **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
        }
      }
      return __this;
    }
  }
LAB_0419dd2c:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.FullscreenHandler$$SetFullscreen
// il2cpp: void ApplicationManagers_FullscreenHandler__SetFullscreen (int32_t fullscreen, const MethodInfo* method);
// 0x419dda0

void ApplicationManagers_FullscreenHandler__SetFullscreen(int32_t fullscreen,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UI_BaseMenu_o *__this;
  int32_t width;
  int32_t height;
  bool_conflict bVar1;
  int32_t fullscreenMode;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *method_01;
  UnityEngine_Resolution_o __this_00;
  UnityEngine_Resolution_o __this_01;
  UnityEngine_Resolution_o __this_02;
  UnityEngine_Resolution_o __this_03;
  
  if (DAT_05704c70 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CursorManager);
    il2cpp_init_method_metadata(&TypeInfo_FullscreenHandler);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    DAT_05704c70 = '\x01';
    in_RDX = extraout_RDX;
  }
  if (fullscreen == 0) {
    if (*(int *)(TypeInfo_FullscreenHandler + 0xe4) == 0) {
      il2cpp_init_class();
      in_RDX = extraout_RDX_01;
    }
    __this_02.fields._0_8_ = *(long *)(TypeInfo_FullscreenHandler + 0xb8) + 8;
    __this_02.fields.m_RefreshRate.fields.numerator = 0;
    __this_02.fields.m_RefreshRate.fields.denominator = 0;
    width = UnityEngine_Resolution__get_width(__this_02,in_RDX);
    __this_03.fields._0_8_ = *(long *)(TypeInfo_FullscreenHandler + 0xb8) + 8;
    __this_03.fields.m_RefreshRate.fields.numerator = 0;
    __this_03.fields.m_RefreshRate.fields.denominator = 0;
    height = UnityEngine_Resolution__get_height(__this_03,method_01);
    fullscreenMode = 3;
  }
  else {
    if (*(int *)(TypeInfo_FullscreenHandler + 0xe4) == 0) {
      il2cpp_init_class();
      in_RDX = extraout_RDX_00;
    }
    __this_00.fields._0_8_ = *(long *)(TypeInfo_FullscreenHandler + 0xb8) + 8;
    __this_00.fields.m_RefreshRate.fields.numerator = 0;
    __this_00.fields.m_RefreshRate.fields.denominator = 0;
    width = UnityEngine_Resolution__get_width(__this_00,in_RDX);
    __this_01.fields._0_8_ = *(long *)(TypeInfo_FullscreenHandler + 0xb8) + 8;
    __this_01.fields.m_RefreshRate.fields.numerator = 0;
    __this_01.fields.m_RefreshRate.fields.denominator = 0;
    height = UnityEngine_Resolution__get_height(__this_01,method_00);
    if (fullscreen == 1) {
      fullscreenMode = 1;
    }
    else {
      fullscreenMode = 0;
    }
  }
  UnityEngine_Screen__SetResolution(width,height,fullscreenMode,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  UI_CursorManager__RefreshCursorLock((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  x = *(UnityEngine_Object_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    __this = *(UI_BaseMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (__this != (UI_BaseMenu_o *)0x0) {
      UI_BaseMenu__ApplyScale
                (__this,*(int32_t *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 8),(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return;
}


// ApplicationManagers.FullscreenHandler$$UpdateFPS
// il2cpp: void ApplicationManagers_FullscreenHandler__UpdateFPS (const MethodInfo* method);
// 0x419e3d0

void ApplicationManagers_FullscreenHandler__UpdateFPS(MethodInfo *method)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  int32_t value;
  int iVar5;
  
  if (DAT_05704c71 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Application);
    il2cpp_init_method_metadata(&TypeInfo_FullscreenHandler);
    il2cpp_init_method_metadata(&TypeInfo_Math);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    DAT_05704c71 = '\x01';
  }
  lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x18);
  if (((lVar4 == 0) || (*(long *)(lVar4 + 0x38) == 0)) || (*(long *)(lVar4 + 0x40) == 0)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  iVar5 = *(int *)(*(long *)(lVar4 + 0x38) + 0x14);
  iVar2 = *(int *)(*(long *)(lVar4 + 0x40) + 0x14);
  uVar3 = *(uint *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 8);
  if (*(int *)(TypeInfo_FullscreenHandler + 0xe4) == 0) {
    il2cpp_init_class();
    cVar1 = *(char *)(*(long *)(TypeInfo_FullscreenHandler + 0xb8) + 0x18);
  }
  else {
    cVar1 = *(char *)(*(long *)(TypeInfo_FullscreenHandler + 0xb8) + 0x18);
  }
  if (cVar1 != '\0') {
    if ((uVar3 | 1) == 3) {
      value = -1;
      if (0 < iVar5) {
        value = iVar5;
      }
      iVar5 = *(int *)(TypeInfo_Application + 0xe4);
    }
    else {
      value = -1;
      if (0 < iVar2) {
        value = iVar2;
      }
      iVar5 = *(int *)(TypeInfo_Application + 0xe4);
    }
    goto joined_r0x0419e587;
  }
  if ((uVar3 | 1) == 3) {
    if (iVar5 < 1) {
LAB_0419e58b:
      value = 0x3c;
      iVar5 = *(int *)(TypeInfo_Application + 0xe4);
      goto joined_r0x0419e587;
    }
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_init_class();
    }
  }
  else {
    if (iVar2 < 1) goto LAB_0419e58b;
    iVar5 = iVar2;
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_init_class();
    }
  }
  value = System_Math__Min(iVar5,0x3c,(MethodInfo *)0x0);
  iVar5 = *(int *)(TypeInfo_Application + 0xe4);
joined_r0x0419e587:
  if (iVar5 == 0) {
    il2cpp_init_class();
  }
  UnityEngine_Application__set_targetFrameRate(value,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.FullscreenHandler$$UpdateSound
// il2cpp: void ApplicationManagers_FullscreenHandler__UpdateSound (const MethodInfo* method);
// 0x419e5b0

void ApplicationManagers_FullscreenHandler__UpdateSound(MethodInfo *method)

{
  long lVar1;
  MethodInfo *pMVar2;
  float value;
  
  if (DAT_05704c72 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_FullscreenHandler);
    il2cpp_init_method_metadata(&TypeInfo_MusicManager);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Single_get_Value);
    il2cpp_init_method_metadata();
    DAT_05704c72 = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
  if ((lVar1 == 0) || (*(long *)(lVar1 + 0x30) == 0)) goto LAB_0419e746;
  if (*(char *)(*(long *)(lVar1 + 0x30) + 0x11) == '\0') {
    if (*(long *)(lVar1 + 0x20) == 0) goto LAB_0419e746;
    pMVar2 = (MethodInfo *)0x0;
    UnityEngine_AudioListener__set_volume
              (*(float *)(*(long *)(lVar1 + 0x20) + 0x14),(MethodInfo *)0x0);
    *(undefined1 *)(*(long *)(TypeInfo_MusicManager + 0xb8) + 0x10) = 0;
    goto LAB_0419e711;
  }
  if (*(int *)((long)&TypeInfo_FullscreenHandler[2].parameters + 4) == 0) {
    il2cpp_init_class();
    if (TypeInfo_FullscreenHandler[2].virtualMethodPointer[0x18] == (Il2CppMethodPointer)0x0) goto LAB_0419e6d3;
LAB_0419e660:
    lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
    if ((lVar1 == 0) || (lVar1 = *(long *)(lVar1 + 0x20), lVar1 == 0)) {
LAB_0419e746:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    value = *(float *)(lVar1 + 0x14);
  }
  else {
    if (TypeInfo_FullscreenHandler[2].virtualMethodPointer[0x18] != (Il2CppMethodPointer)0x0) goto LAB_0419e660;
LAB_0419e6d3:
    value = 0.0;
  }
  UnityEngine_AudioListener__set_volume(value,(MethodInfo *)0x0);
  if (*(int *)((long)&TypeInfo_FullscreenHandler[2].parameters + 4) == 0) {
    il2cpp_init_class();
  }
  pMVar2 = TypeInfo_FullscreenHandler;
  *(byte *)(*(long *)(TypeInfo_MusicManager + 0xb8) + 0x10) =
       (byte)TypeInfo_FullscreenHandler[2].virtualMethodPointer[0x18] ^ 1;
LAB_0419e711:
  ApplicationManagers_MusicManager__ApplySoundSettings(pMVar2);
  if (*(int *)((long)&TypeInfo_VoiceChatManager[2].parameters + 4) != 0) {
    ApplicationManagers_VoiceChatManager__ApplySoundSettings(TypeInfo_VoiceChatManager);
    return;
  }
  pMVar2 = TypeInfo_VoiceChatManager;
  il2cpp_init_class();
  ApplicationManagers_VoiceChatManager__ApplySoundSettings(pMVar2);
  return;
}


// ApplicationManagers.FullscreenHandler$$OnApplicationFocus
// il2cpp: void ApplicationManagers_FullscreenHandler__OnApplicationFocus (ApplicationManagers_FullscreenHandler_o* __this, bool hasFocus, const MethodInfo* method);
// 0x419ebb0

void ApplicationManagers_FullscreenHandler__OnApplicationFocus
               (ApplicationManagers_FullscreenHandler_o *__this,bool_conflict hasFocus,
               MethodInfo *method)

{
  MethodInfo *method_00;
  
  if (DAT_05704c73 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CursorManager);
    il2cpp_init_method_metadata(&TypeInfo_FullscreenHandler);
    DAT_05704c73 = '\x01';
  }
  if (*(int *)((long)&TypeInfo_FullscreenHandler[2].parameters + 4) == 0) {
    il2cpp_init_class();
  }
  method_00 = TypeInfo_FullscreenHandler;
  TypeInfo_FullscreenHandler[2].virtualMethodPointer[0x18] = SUB41(hasFocus,0);
  ApplicationManagers_FullscreenHandler__UpdateSound(method_00);
  ApplicationManagers_FullscreenHandler__UpdateFPS(method_00);
  if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  UI_CursorManager__RefreshCursorLock((MethodInfo *)0x0);
  return;
}


// ApplicationManagers.FullscreenHandler$$IsWindowed
// il2cpp: bool ApplicationManagers_FullscreenHandler__IsWindowed (const MethodInfo* method);
// 0x419ec40

bool_conflict ApplicationManagers_FullscreenHandler__IsWindowed(MethodInfo *method)

{
  long lVar1;
  
  if (DAT_05704c74 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    DAT_05704c74 = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x18);
  if ((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x28), lVar1 != 0)) {
    return (bool_conflict)CONCAT71((int7)((ulong)lVar1 >> 8),*(int *)(lVar1 + 0x14) == 0);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.FullscreenHandler$$Supported
// il2cpp: bool ApplicationManagers_FullscreenHandler__Supported (const MethodInfo* method);
// 0x419eca0

bool_conflict ApplicationManagers_FullscreenHandler__Supported(MethodInfo *method)

{
  int32_t iVar1;
  
  if (DAT_05704c75 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Application);
    DAT_05704c75 = '\x01';
  }
  if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
    il2cpp_init_class();
  }
  iVar1 = UnityEngine_Application__get_platform((MethodInfo *)0x0);
  return CONCAT31((int3)((uint)iVar1 >> 8),iVar1 == 2);
}


// ApplicationManagers.FullscreenHandler$$.ctor
// il2cpp: void ApplicationManagers_FullscreenHandler___ctor (ApplicationManagers_FullscreenHandler_o* __this, const MethodInfo* method);
// 0x419ecf0

void ApplicationManagers_FullscreenHandler___ctor
               (ApplicationManagers_FullscreenHandler_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.FullscreenHandler$$.cctor
// il2cpp: void ApplicationManagers_FullscreenHandler___cctor (const MethodInfo* method);
// 0x419ed00

void ApplicationManagers_FullscreenHandler___cctor(MethodInfo *method)

{
  if (DAT_05704c76 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_FullscreenHandler);
    DAT_05704c76 = '\x01';
  }
  *(undefined1 *)(*(long *)(TypeInfo_FullscreenHandler + 0xb8) + 0x18) = 1;
  return;
}


