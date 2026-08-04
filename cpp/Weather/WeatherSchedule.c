// Type: Weather.WeatherSchedule
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Weather/WeatherSchedule.cs
// Prior real C# source (older reference): Assets/Scripts/Weather/WeatherSchedule.cs
// --------------------------------

// Weather.WeatherSchedule$$.ctor
// il2cpp: void Weather_WeatherSchedule___ctor (Weather_WeatherSchedule_o* __this, const MethodInfo* method);
// 0x4075b50

void Weather_WeatherSchedule___ctor(Weather_WeatherSchedule_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_WeatherEvent__o *__this_00;
  
  if (g_data_057ac31f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Weather_WeatherEvent);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_WeatherEvent);
    g_data_057ac31f = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_WeatherEvent__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_WeatherEvent);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_Weather_WeatherEvent);
  (__this->fields).Events = __this_00;
  il2cpp_runtime_helper_022b4080(&__this->fields);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Weather.WeatherSchedule$$.ctor
// il2cpp: void Weather_WeatherSchedule___ctor (Weather_WeatherSchedule_o* __this, System_String_o* csv, const MethodInfo* method);
// 0x4075bd0

void Weather_WeatherSchedule___ctor_3f75bd0
               (Weather_WeatherSchedule_o *__this,System_String_o *csv,MethodInfo *method)

{
  System_Collections_Generic_List_WeatherEvent__o *__this_00;
  MethodInfo *method_00;
  
  if (g_data_057ac320 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Weather_WeatherEvent);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_WeatherEvent);
    g_data_057ac320 = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_WeatherEvent__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_WeatherEvent);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_Weather_WeatherEvent);
  (__this->fields).Events = __this_00;
  il2cpp_runtime_helper_022b4080(&__this->fields);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  Weather_WeatherSchedule__DeserializeFromCSV(__this,csv,method_00);
  return;
}


// Weather.WeatherSchedule$$SerializeToCSV
// il2cpp: System_String_o* Weather_WeatherSchedule__SerializeToCSV (Weather_WeatherSchedule_o* __this, const MethodInfo* method);
// 0x4075fd0

System_String_o *
Weather_WeatherSchedule__SerializeToCSV(Weather_WeatherSchedule_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_WeatherEvent__o *__this_00;
  System_Collections_Generic_List_object__o *pSVar3;
  System_Collections_Generic_List_float__o *__this_01;
  MethodInfo *pMVar4;
  long lVar5;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  System_Collections_Generic_List_Enumerator_object__o __this_07;
  Weather_WeatherEvent_o *__this_08;
  bool_conflict bVar6;
  int32_t iVar7;
  _union_13 _Var8;
  System_Collections_Generic_List_object__o *__this_09;
  System_String_o *pSVar9;
  Il2CppObject *pIVar10;
  System_String_o *str2;
  System_String_array *pSVar11;
  Il2CppClass *item;
  long *plVar12;
  System_Object_array *method_00;
  int iVar13;
  ulong unaff_RBP;
  float __this_10;
  undefined1 auVar14 [12];
  float in_stack_ffffffffffffff78;
  undefined4 in_stack_ffffffffffffff7c;
  Il2CppType *in_stack_ffffffffffffff80;
  int in_stack_ffffffffffffff88;
  undefined4 in_stack_ffffffffffffff8c;
  Il2CppClass *pIStack_68;
  Il2CppType *pIStack_60;
  Weather_WeatherEvent_o *pWStack_58;
  _union_13 _Stack_50;
  _union_14 _Stack_48;
  Il2CppType *pIStack_40;
  Il2CppObject *pIStack_38;
  
  if (g_data_057ac321 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_WeatherEvent_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_Object_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Weather_WeatherEvent_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherAction);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherEffect);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherValueSelectType);
    il2cpp_runtime_helper_023445d0(&";\n");
    il2cpp_runtime_helper_023445d0(&",");
    g_data_057ac321 = '\x01';
  }
  pIStack_68 = (Il2CppClass *)0x0;
  pIStack_60 = (Il2CppType *)0x0;
  pWStack_58 = (Weather_WeatherEvent_o *)0x0;
  _Stack_48.genericMethod = (void *)0x0;
  pIStack_40 = (Il2CppType *)0x0;
  pIStack_38 = (Il2CppObject *)0x0;
  _Var8.rgctx_data = (Il2CppRGCTXData *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)_Var8.rgctx_data,MethodInfo_List_1_System_String);
  __this_00 = (__this->fields).Events;
  if (__this_00 != (System_Collections_Generic_List_WeatherEvent__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffff78,
               (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T_Enumerator_Weather_WeatherEvent_GetEnumerator);
    pWStack_58 = (Weather_WeatherEvent_o *)CONCAT44(in_stack_ffffffffffffff8c,in_stack_ffffffffffffff88);
    pIStack_68 = (Il2CppClass *)CONCAT44(in_stack_ffffffffffffff7c,in_stack_ffffffffffffff78);
    pIStack_60 = in_stack_ffffffffffffff80;
    _Stack_50.rgctx_data = _Var8.rgctx_data;
    while( true ) {
      __this_02.fields._list._4_4_ = in_stack_ffffffffffffff7c;
      __this_02.fields._list._0_4_ = in_stack_ffffffffffffff78;
      __this_02.fields._8_8_ = in_stack_ffffffffffffff80;
      __this_02.fields._current._0_4_ = in_stack_ffffffffffffff88;
      __this_02.fields._current._4_4_ = in_stack_ffffffffffffff8c;
      bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_02,(MethodInfo_321A1D0 *)&pIStack_68);
      __this_08 = pWStack_58;
      if ((char)bVar6 == '\0') {
        __this_05.fields._list._4_4_ = in_stack_ffffffffffffff7c;
        __this_05.fields._list._0_4_ = in_stack_ffffffffffffff78;
        __this_05.fields._8_8_ = in_stack_ffffffffffffff80;
        __this_05.fields._current._0_4_ = in_stack_ffffffffffffff88;
        __this_05.fields._current._4_4_ = in_stack_ffffffffffffff8c;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_05,(MethodInfo_321A1C0 *)&pIStack_68);
        goto label_04076704;
      }
      __this_09 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
      System_Collections_Generic_List_object____ctor(__this_09,MethodInfo_List_1_System_String);
      if (__this_08 == (Weather_WeatherEvent_o *)0x0) break;
      in_stack_ffffffffffffff78 = (float)TypeInfo_WeatherAction;
      in_stack_ffffffffffffff7c = (undefined4)((ulong)TypeInfo_WeatherAction >> 0x20);
      in_stack_ffffffffffffff80 = (Il2CppType *)0xffffffffffffffff;
      in_stack_ffffffffffffff88 = (__this_08->fields).Action;
      pSVar9 = System_Enum__ToString((System_Enum_o *)&stack0xffffffffffffff78,(MethodInfo *)0x0);
      lVar5 = MethodInfo_Void_Add;
      if (__this_09 == (System_Collections_Generic_List_object__o *)0x0) goto label_0407679a;
      piVar1 = &(__this_09->fields)._version;
      *piVar1 = *piVar1 + 1;
      method_00 = (__this_09->fields)._items;
      if (method_00 == (System_Object_array *)0x0) goto label_0407679f;
      uVar2 = (__this_09->fields)._size;
      if (uVar2 < (uint)method_00->max_length) {
        (__this_09->fields)._size = uVar2 + 1;
        method_00->m_Items[(int)uVar2] = (Il2CppObject *)pSVar9;
        il2cpp_runtime_helper_022b4080(method_00->m_Items + (int)uVar2);
      }
      else {
        method_00 = *(System_Object_array **)(*(long *)(lVar5 + 0x20) + 0xc0);
        System_Collections_Generic_List_object___AddWithResize
                  (__this_09,(Il2CppObject *)pSVar9,(MethodInfo_362C220 *)method_00->m_Items[10]);
      }
      if ((__this_08->fields).Effect != 0) {
        in_stack_ffffffffffffff78 = (float)TypeInfo_WeatherEffect;
        in_stack_ffffffffffffff7c = (undefined4)((ulong)TypeInfo_WeatherEffect >> 0x20);
        in_stack_ffffffffffffff80 = (Il2CppType *)0xffffffffffffffff;
        in_stack_ffffffffffffff88 = (__this_08->fields).Effect;
        pSVar9 = System_Enum__ToString((System_Enum_o *)&stack0xffffffffffffff78,(MethodInfo *)0x0);
        lVar5 = MethodInfo_Void_Add;
        piVar1 = &(__this_09->fields)._version;
        *piVar1 = *piVar1 + 1;
        method_00 = (__this_09->fields)._items;
        if (method_00 != (System_Object_array *)0x0) {
          uVar2 = (__this_09->fields)._size;
          if (uVar2 < (uint)method_00->max_length) {
            (__this_09->fields)._size = uVar2 + 1;
            method_00->m_Items[(int)uVar2] = (Il2CppObject *)pSVar9;
            il2cpp_runtime_helper_022b4080(method_00->m_Items + (int)uVar2);
          }
          else {
            method_00 = *(System_Object_array **)(*(long *)(lVar5 + 0x20) + 0xc0);
            System_Collections_Generic_List_object___AddWithResize
                      (__this_09,(Il2CppObject *)pSVar9,(MethodInfo_362C220 *)method_00->m_Items[10]);
          }
          goto label_040762cc;
        }
        goto label_040767ae;
      }
label_040762cc:
      iVar13 = (__this_08->fields).ValueSelectType;
      if (iVar13 == 0) goto label_04076610;
      if ((__this_08->fields).Action != 0xf) {
        in_stack_ffffffffffffff78 = (float)TypeInfo_WeatherValueSelectType;
        in_stack_ffffffffffffff7c = (undefined4)((ulong)TypeInfo_WeatherValueSelectType >> 0x20);
        in_stack_ffffffffffffff80 = (Il2CppType *)0xffffffffffffffff;
        pSVar9 = System_Enum__ToString((System_Enum_o *)&stack0xffffffffffffff78,(MethodInfo *)0x0);
        lVar5 = MethodInfo_Void_Add;
        piVar1 = &(__this_09->fields)._version;
        *piVar1 = *piVar1 + 1;
        method_00 = (__this_09->fields)._items;
        in_stack_ffffffffffffff88 = iVar13;
        if (method_00 != (System_Object_array *)0x0) {
          uVar2 = (__this_09->fields)._size;
          if (uVar2 < (uint)method_00->max_length) {
            (__this_09->fields)._size = uVar2 + 1;
            method_00->m_Items[(int)uVar2] = (Il2CppObject *)pSVar9;
            il2cpp_runtime_helper_022b4080(method_00->m_Items + (int)uVar2,pSVar9);
            in_stack_ffffffffffffff88 = iVar13;
          }
          else {
            method_00 = *(System_Object_array **)(*(long *)(lVar5 + 0x20) + 0xc0);
            System_Collections_Generic_List_object___AddWithResize
                      (__this_09,(Il2CppObject *)pSVar9,(MethodInfo_362C220 *)method_00->m_Items[10]);
            in_stack_ffffffffffffff88 = iVar13;
          }
          iVar13 = (__this_08->fields).ValueSelectType;
          goto label_040763ad;
        }
        goto label_040767b3;
      }
label_040763ad:
      pSVar3 = (__this_08->fields).Values;
      if (iVar13 != 3) {
        if (pSVar3 != (System_Collections_Generic_List_object__o *)0x0) {
          System_Collections_Generic_List_object___GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffff78,pSVar3,
                     MethodInfo_List_1_T_Enumerator_System_Object_GetEnumerator);
          pIStack_38 = (Il2CppObject *)CONCAT44(in_stack_ffffffffffffff8c,in_stack_ffffffffffffff88);
          _Stack_48._4_4_ = in_stack_ffffffffffffff7c;
          _Stack_48._0_4_ = in_stack_ffffffffffffff78;
          pIStack_40 = in_stack_ffffffffffffff80;
          while (__this_03.fields._list._4_4_ = in_stack_ffffffffffffff7c,
                __this_03.fields._list._0_4_ = in_stack_ffffffffffffff78,
                __this_03.fields._8_8_ = in_stack_ffffffffffffff80,
                __this_03.fields._current._0_4_ = in_stack_ffffffffffffff88,
                __this_03.fields._current._4_4_ = in_stack_ffffffffffffff8c,
                bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                  (__this_03,(MethodInfo_321A1D0 *)&_Stack_48), pIVar10 = pIStack_38,
                (char)bVar6 != '\0') {
            iVar7 = Weather_WeatherEvent__GetValueType(__this_08,(MethodInfo *)0x0);
            pSVar9 = Weather_WeatherSchedule__SerializeValue(__this,iVar7,pIVar10,(MethodInfo *)method_00);
            lVar5 = MethodInfo_Void_Add;
            piVar1 = &(__this_09->fields)._version;
            *piVar1 = *piVar1 + 1;
            method_00 = (__this_09->fields)._items;
            if (method_00 == (System_Object_array *)0x0) {
              il2cpp_runtime_helper_022b2c90();
              goto label_04076795;
            }
            uVar2 = (__this_09->fields)._size;
            if (uVar2 < (uint)method_00->max_length) {
              (__this_09->fields)._size = uVar2 + 1;
              method_00->m_Items[(int)uVar2] = (Il2CppObject *)pSVar9;
              il2cpp_runtime_helper_022b4080(method_00->m_Items + (int)uVar2,pSVar9);
            }
            else {
              method_00 = *(System_Object_array **)(*(long *)(lVar5 + 0x20) + 0xc0);
              System_Collections_Generic_List_object___AddWithResize
                        (__this_09,(Il2CppObject *)pSVar9,(MethodInfo_362C220 *)method_00->m_Items[10]);
            }
          }
          unaff_RBP = 0;
          __this_04.fields._list._4_4_ = in_stack_ffffffffffffff7c;
          __this_04.fields._list._0_4_ = in_stack_ffffffffffffff78;
          __this_04.fields._8_8_ = in_stack_ffffffffffffff80;
          __this_04.fields._current._0_4_ = in_stack_ffffffffffffff88;
          __this_04.fields._current._4_4_ = in_stack_ffffffffffffff8c;
          System_Collections_Generic_List_Enumerator_object___Dispose
                    (__this_04,(MethodInfo_321A1C0 *)&_Stack_48);
          goto label_04076610;
        }
        goto label_040767c0;
      }
      if (pSVar3 == (System_Collections_Generic_List_object__o *)0x0) {
label_04076781:
        il2cpp_runtime_helper_022b2c90();
label_04076786:
        il2cpp_runtime_helper_022b2c90();
label_0407678b:
        il2cpp_runtime_helper_022b2c90();
label_04076790:
        il2cpp_runtime_helper_022b2c90();
        break;
      }
      unaff_RBP = 0;
      if (0 < (pSVar3->fields)._size) {
        do {
          iVar7 = Weather_WeatherEvent__GetValueType(__this_08,(MethodInfo *)0x0);
          pSVar3 = (__this_08->fields).Values;
          if (pSVar3 == (System_Collections_Generic_List_object__o *)0x0) goto label_04076790;
          iVar13 = (int)unaff_RBP;
          pIVar10 = System_Collections_Generic_List_object___get_Item(pSVar3,iVar13,MethodInfo_Object_get_Item);
          __this_01 = (__this_08->fields).Weights;
          if (__this_01 == (System_Collections_Generic_List_float__o *)0x0) goto label_0407678b;
          in_stack_ffffffffffffff78 =
               System_Collections_Generic_List_float___get_Item(__this_01,iVar13,MethodInfo_Single_get_Item);
          if (g_data_057ac324 == '\0') {
            il2cpp_runtime_helper_023445d0(&"-");
            g_data_057ac324 = '\x01';
          }
          pSVar9 = Weather_WeatherSchedule__SerializeValue(__this,iVar7,pIVar10,(MethodInfo *)method_00);
          str2 = System_Single__ToString(__this_10,(MethodInfo *)&stack0xffffffffffffff78);
          pSVar9 = System_String__Concat_3af7150(pSVar9,"-",str2,(MethodInfo *)0x0);
          lVar5 = MethodInfo_Void_Add;
          piVar1 = &(__this_09->fields)._version;
          *piVar1 = *piVar1 + 1;
          method_00 = (__this_09->fields)._items;
          if (method_00 == (System_Object_array *)0x0) goto label_04076786;
          uVar2 = (__this_09->fields)._size;
          if (uVar2 < (uint)method_00->max_length) {
            (__this_09->fields)._size = uVar2 + 1;
            method_00->m_Items[(int)uVar2] = (Il2CppObject *)pSVar9;
            il2cpp_runtime_helper_022b4080(method_00->m_Items + (int)uVar2,pSVar9);
          }
          else {
            method_00 = *(System_Object_array **)(*(long *)(lVar5 + 0x20) + 0xc0);
            System_Collections_Generic_List_object___AddWithResize
                      (__this_09,(Il2CppObject *)pSVar9,(MethodInfo_362C220 *)method_00->m_Items[10]);
          }
          unaff_RBP = (ulong)(iVar13 + 1U);
          pSVar3 = (__this_08->fields).Values;
          if (pSVar3 == (System_Collections_Generic_List_object__o *)0x0) goto label_04076781;
        } while ((int)(iVar13 + 1U) < (pSVar3->fields)._size);
      }
label_04076610:
      pSVar11 = (System_String_array *)
                System_Collections_Generic_List_object___ToArray(__this_09,MethodInfo_String_ToArray);
      _Var8 = _Stack_50;
      item = (Il2CppClass *)System_String__Join(",",pSVar11,(MethodInfo *)0x0);
      lVar5 = MethodInfo_Void_Add;
      if (_Var8.rgctx_data == (Il2CppRGCTXData *)0x0) goto label_040767a4;
      *(int32_t *)((long)_Var8.rgctx_data + 0x1c) = *(int32_t *)((long)_Var8.rgctx_data + 0x1c) + 1;
      pMVar4 = _Var8.rgctx_data[2].method;
      if (pMVar4 == (MethodInfo *)0x0) goto label_040767a9;
      uVar2 = *(uint *)(_Var8.rgctx_data + 3);
      if (uVar2 < *(uint *)&pMVar4->name) {
        *(uint *)(_Var8.rgctx_data + 3) = uVar2 + 1;
        (&pMVar4->klass)[(int)uVar2] = item;
        il2cpp_runtime_helper_022b4080(&pMVar4->klass + (int)uVar2,item);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)_Var8.rgctx_data,(Il2CppObject *)item,
                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
      }
    }
label_04076795:
    il2cpp_runtime_helper_022b2c90();
label_0407679a:
    il2cpp_runtime_helper_022b2c90();
label_0407679f:
    il2cpp_runtime_helper_022b2c90();
label_040767a4:
    il2cpp_runtime_helper_022b2c90();
label_040767a9:
    il2cpp_runtime_helper_022b2c90();
label_040767ae:
    il2cpp_runtime_helper_022b2c90();
label_040767b3:
    il2cpp_runtime_helper_022b2c90();
    il2cpp_runtime_helper_022fefe0(unaff_RBP);
label_040767c0:
    il2cpp_runtime_helper_022b2c90();
  }
  do {
    auVar14 = il2cpp_runtime_helper_022b2c90();
    if (auVar14._8_4_ != 1) {
label_04076844:
      __this_07.fields._list._4_4_ = in_stack_ffffffffffffff7c;
      __this_07.fields._list._0_4_ = in_stack_ffffffffffffff78;
      __this_07.fields._8_8_ = in_stack_ffffffffffffff80;
      __this_07.fields._current._0_4_ = in_stack_ffffffffffffff88;
      __this_07.fields._current._4_4_ = in_stack_ffffffffffffff8c;
      System_Collections_Generic_List_Enumerator_object___Dispose(__this_07,(MethodInfo_321A1C0 *)&pIStack_68)
      ;
      _Unwind_Resume(auVar14._0_8_);
    }
    plVar12 = (long *)__cxa_begin_catch(auVar14._0_8_);
    lVar5 = *plVar12;
    __cxa_end_catch();
    __this_06.fields._list._4_4_ = in_stack_ffffffffffffff7c;
    __this_06.fields._list._0_4_ = in_stack_ffffffffffffff78;
    __this_06.fields._8_8_ = in_stack_ffffffffffffff80;
    __this_06.fields._current._0_4_ = in_stack_ffffffffffffff88;
    __this_06.fields._current._4_4_ = in_stack_ffffffffffffff8c;
    System_Collections_Generic_List_Enumerator_object___Dispose(__this_06,(MethodInfo_321A1C0 *)&pIStack_68);
    if (lVar5 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar5);
      goto label_04076844;
    }
label_04076704:
    if (_Stack_50.rgctx_data != (Il2CppRGCTXData *)0x0) {
      pSVar11 = (System_String_array *)
                System_Collections_Generic_List_object___ToArray
                          ((System_Collections_Generic_List_object__o *)_Stack_50.rgctx_data,MethodInfo_String_ToArray);
      pSVar9 = System_String__Join(";\n",pSVar11,(MethodInfo *)0x0);
      return pSVar9;
    }
  } while( true );
}


// Weather.WeatherSchedule$$DeserializeFromCSV
// il2cpp: System_String_o* Weather_WeatherSchedule__DeserializeFromCSV (Weather_WeatherSchedule_o* __this, System_String_o* csv, const MethodInfo* method);
// 0x4075c50

System_String_o *
Weather_WeatherSchedule__DeserializeFromCSV
          (Weather_WeatherSchedule_o *__this,System_String_o *csv,MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  uint uVar3;
  System_Collections_Generic_List_WeatherEvent__o *pSVar4;
  Weather_WeatherEvent_array *pWVar5;
  long lVar6;
  char cVar7;
  bool_conflict bVar8;
  System_String_array *pSVar9;
  System_String_array *pSVar10;
  Weather_WeatherEvent_o *item;
  undefined8 *puVar11;
  undefined8 uVar12;
  Il2CppObject *arg0;
  System_String_o *pSVar13;
  undefined8 *puVar14;
  MethodInfo *method_00;
  uint uVar15;
  int unaff_R13D;
  undefined1 auVar16 [12];
  int local_3c;
  Weather_WeatherSchedule_o *local_38;
  
  local_38 = __this;
  if (g_data_057ac322 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&"//");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ac322 = '\x01';
  }
  pSVar4 = (local_38->fields).Events;
  if (pSVar4 != (System_Collections_Generic_List_WeatherEvent__o *)0x0) {
    piVar1 = &(pSVar4->fields)._version;
    *piVar1 = *piVar1 + 1;
    iVar2 = (pSVar4->fields)._size;
    (pSVar4->fields)._size = 0;
    if (0 < iVar2) {
      System_Array__Clear((System_Array_o *)(pSVar4->fields)._items,0,iVar2,(MethodInfo *)0x0);
    }
    if ((csv != (System_String_o *)0x0) &&
       (pSVar9 = System_String__Split(csv,0x3b,0,(MethodInfo *)0x0), pSVar9 != (System_String_array *)0x0)) {
      iVar2 = (int)pSVar9->max_length;
      if (iVar2 < 1) {
        return "";
      }
      unaff_R13D = 1;
      uVar15 = 0;
      if (iVar2 != 0) {
        do {
          if (pSVar9->m_Items[(int)uVar15] == (System_String_o *)0x0) goto label_04075e82;
          pSVar13 = System_String__Trim(pSVar9->m_Items[(int)uVar15],(MethodInfo *)0x0);
          if ((uint)pSVar9->max_length <= uVar15) goto label_04075e7d;
          if (pSVar9->m_Items[(int)uVar15] == (System_String_o *)0x0) goto label_04075e87;
          pSVar10 = System_String__Split(pSVar9->m_Items[(int)uVar15],10,0,(MethodInfo *)0x0);
          if (pSVar10 == (System_String_array *)0x0) goto label_04075e8c;
          unaff_R13D = (int)pSVar10->max_length + unaff_R13D + -1;
          bVar8 = System_String__op_Inequality
                            (pSVar13,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),
                             (MethodInfo *)0x0);
          if ((char)bVar8 != '\0') {
            if (pSVar13 == (System_String_o *)0x0) goto label_04075e91;
            bVar8 = System_String__StartsWith(pSVar13,_DAT_055be878,(MethodInfo *)0x0);
            if ((char)bVar8 == '\0') {
              pSVar4 = (local_38->fields).Events;
              item = Weather_WeatherSchedule__DeserializeLine(local_38,pSVar13,method_00);
              lVar6 = MethodInfo_Void_Add;
              if (pSVar4 == (System_Collections_Generic_List_WeatherEvent__o *)0x0) goto label_04075e96;
              piVar1 = &(pSVar4->fields)._version;
              *piVar1 = *piVar1 + 1;
              pWVar5 = (pSVar4->fields)._items;
              if (pWVar5 == (Weather_WeatherEvent_array *)0x0) goto label_04075e9b;
              uVar3 = (pSVar4->fields)._size;
              if (uVar3 < (uint)pWVar5->max_length) {
                (pSVar4->fields)._size = uVar3 + 1;
                pWVar5->m_Items[(int)uVar3] = item;
                il2cpp_runtime_helper_022b4080(pWVar5->m_Items + (int)uVar3);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)item,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
              }
            }
          }
          uVar15 = uVar15 + 1;
          uVar3 = (uint)pSVar9->max_length;
          if ((int)uVar3 <= (int)uVar15) {
            return "";
          }
        } while (uVar15 < uVar3);
      }
      il2cpp_runtime_helper_022b2ca0();
label_04075e7d:
      il2cpp_runtime_helper_022b2ca0();
label_04075e82:
      il2cpp_runtime_helper_022b2c90();
label_04075e87:
      il2cpp_runtime_helper_022b2c90();
label_04075e8c:
      il2cpp_runtime_helper_022b2c90();
label_04075e91:
      il2cpp_runtime_helper_022b2c90();
label_04075e96:
      il2cpp_runtime_helper_022b2c90();
label_04075e9b:
      il2cpp_runtime_helper_022b2c90();
    }
  }
  auVar16 = il2cpp_runtime_helper_022b2c90();
  if (auVar16._8_4_ != 1) {
    _Unwind_Resume(auVar16._0_8_);
  }
  puVar11 = (undefined8 *)__cxa_begin_catch(auVar16._0_8_);
  uVar12 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  cVar7 = il2cpp_runtime_helper_0233e000(uVar12,*(undefined8 *)*puVar11);
  if (cVar7 != '\0') {
    __cxa_end_catch();
    local_3c = unaff_R13D;
    arg0 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&local_3c);
    pSVar13 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Import failed at line {0}");
    pSVar13 = System_String__Format(pSVar13,arg0,(MethodInfo *)0x0);
    return pSVar13;
  }
  puVar14 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar14 = *puVar11;
  __cxa_throw(puVar14,&PTR_PTR_05215060,0);
}


// Weather.WeatherSchedule$$SerializeValue
// il2cpp: System_String_o* Weather_WeatherSchedule__SerializeValue (Weather_WeatherSchedule_o* __this, int32_t type, Il2CppObject* value, const MethodInfo* method);
// 0x40768f0

System_String_o *
Weather_WeatherSchedule__SerializeValue
          (Weather_WeatherSchedule_o *__this,int32_t type,Il2CppObject *value,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar3;
  System_Object_array *pSVar4;
  System_Single_array *pSVar5;
  uint uVar6;
  int32_t iVar7;
  bool_conflict bVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  byte *pbVar12;
  UnityEngine_Color_Fields *pUVar13;
  int32_t *piVar14;
  UnityEngine_Vector3_Fields *pUVar15;
  Weather_WeatherEvent_o *__this_00;
  System_String_array *pSVar16;
  Il2CppObject *pIVar17;
  System_String_array *pSVar18;
  System_String_o *pSVar19;
  MethodInfo *method_00;
  MethodInfo *pMVar20;
  undefined8 *puVar21;
  System_Collections_Generic_List_object__o *__this_01;
  uint uVar22;
  long lVar23;
  undefined4 in_register_00000034;
  Il2CppClass *method_01;
  Il2CppClass *oldValue;
  MethodInfo_36649C0 *method_02;
  System_Collections_Generic_List_float__o *__this_02;
  float __this_03;
  float __this_04;
  float extraout_XMM0_Da;
  undefined4 in_XMM1_Da;
  float in_XMM1_Db;
  uint32_t in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [8];
  float afStack_e0 [2];
  System_String_array *pSStack_d8;
  Weather_WeatherSchedule_o *pWStack_d0;
  int iStack_bc;
  undefined8 uStack_b8;
  _union_14 _Stack_a8;
  _union_14 _Stack_a0;
  Il2CppType *pIStack_98;
  float fStack_88;
  float fStack_84;
  uint32_t uStack_80;
  uint16_t uStack_7c;
  uint16_t uStack_7a;
  System_Collections_Generic_List_object__o *pSStack_70;
  Weather_WeatherSchedule_o *pWStack_68;
  System_String_o *pSStack_60;
  undefined8 *puStack_58;
  int32_t local_20;
  undefined4 local_1c;
  
  method_01 = (Il2CppClass *)CONCAT44(in_register_00000034,type);
  if (g_data_057ac323 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Convert);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    il2cpp_runtime_helper_023445d0(&";");
    il2cpp_runtime_helper_023445d0(&",");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ac323 = '\x01';
  }
  local_1c = 0;
  local_20 = 0;
  puVar21 = (undefined8 *)(ulong)(type - 1);
  pSVar19 = "";
  oldValue = ",";
  switch(puVar21) {
  case (undefined8 *)0x0:
    if (value != (Il2CppObject *)0x0) {
      method_01 = g_data_057b9be8;
      if ((value->klass->_1).element_class != (g_data_057b9be8->_1).element_class) goto label_04076b78;
      puVar11 = (undefined4 *)il2cpp_runtime_helper_02305440(value);
      local_1c = *puVar11;
      method_01 = (Il2CppClass *)0x0;
      pSVar19 = System_Single__ToString(__this_03,(MethodInfo *)&stack0xffffffffffffffe4);
      oldValue = ",";
      break;
    }
    goto label_04076b73;
  case (undefined8 *)0x1:
    if (value == (Il2CppObject *)0x0) goto label_04076b73;
    method_01 = g_data_057b9bb8;
    if ((value->klass->_1).element_class != (g_data_057b9bb8->_1).element_class) goto label_04076b78;
    piVar14 = (int32_t *)il2cpp_runtime_helper_02305440(value);
    local_20 = *piVar14;
label_04076ab0:
    method_01 = (Il2CppClass *)0x0;
    pSVar19 = System_Int32__ToString((int32_t)&local_20,(MethodInfo *)0x0);
    oldValue = ",";
    break;
  case (undefined8 *)0x2:
    pSVar19 = (System_String_o *)value;
    if ((value == (Il2CppObject *)0x0) || (method_01 = g_data_057b9c00, value->klass == g_data_057b9c00)) break;
    goto label_04076b78;
  case (undefined8 *)0x3:
    if (value == (Il2CppObject *)0x0) goto label_04076b73;
    method_01 = TypeInfo_Color;
    if ((value->klass->_1).element_class != (TypeInfo_Color->_1).element_class) goto label_04076b78;
    pUVar13 = (UnityEngine_Color_Fields *)il2cpp_runtime_helper_02305440(value);
    fVar1 = pUVar13->b;
    fVar2 = pUVar13->a;
    in_XMM1_Dc = 0;
    in_XMM1_Dd._0_2_ = 0;
    in_XMM1_Dd._2_2_ = 0;
    pSVar19 = Weather_WeatherSchedule__SerializeColor
                        (__this,(UnityEngine_Color_o)*pUVar13,(MethodInfo *)method_01);
    in_XMM1_Da = fVar1;
    in_XMM1_Db = fVar2;
    oldValue = ",";
    break;
  case (undefined8 *)0x4:
    if (*(int *)(TypeInfo_Convert + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if (value == (Il2CppObject *)0x0) goto label_04076b73;
    method_01 = g_data_057b9b98;
    if ((value->klass->_1).element_class == (g_data_057b9b98->_1).element_class) {
      pbVar12 = (byte *)il2cpp_runtime_helper_02305440(value);
      local_20 = System_Convert__ToInt32_3c15f90((uint)*pbVar12,(MethodInfo *)0x0);
      goto label_04076ab0;
    }
    goto label_04076b78;
  case (undefined8 *)0x5:
    if (value == (Il2CppObject *)0x0) goto label_04076b73;
    method_01 = TypeInfo_Vector3;
    if ((value->klass->_1).element_class != (TypeInfo_Vector3->_1).element_class) goto label_04076b78;
    pUVar15 = (UnityEngine_Vector3_Fields *)il2cpp_runtime_helper_02305440();
    in_XMM1_Da = pUVar15->z;
    in_XMM1_Db = 0.0;
    in_XMM1_Dc = 0;
    in_XMM1_Dd._0_2_ = 0;
    in_XMM1_Dd._2_2_ = 0;
    pSVar19 = Weather_WeatherSchedule__SerializeVector3
                        ((Weather_WeatherSchedule_o *)value,(UnityEngine_Vector3_o)*pUVar15,
                         (MethodInfo *)method_01);
    oldValue = ",";
  }
  value = (Il2CppObject *)pSVar19;
  "," = oldValue;
  if ((System_String_o *)value != (System_String_o *)0x0) {
    puVar21 = &g_data_057b9b70;
    pSVar19 = System_String__Replace_3af9030
                        ((System_String_o *)value,(System_String_o *)oldValue,
                         *(System_String_o **)g_data_057b9c00->static_fields,(MethodInfo *)0x0);
    method_01 = oldValue;
    if (pSVar19 != (System_String_o *)0x0) {
      pSVar19 = System_String__Replace_3af9030
                          (pSVar19,";",*(System_String_o **)g_data_057b9c00->static_fields,
                           (MethodInfo *)0x0);
      return pSVar19;
    }
  }
label_04076b73:
  il2cpp_runtime_helper_022b2c90();
label_04076b78:
  pSStack_60 = (System_String_o *)il2cpp_runtime_helper_022b2fd0();
  puStack_58 = puVar21;
  if (g_data_057ac327 == '\0') {
    pWStack_68 = (Weather_WeatherSchedule_o *)0x4076ba6;
    il2cpp_runtime_helper_023445d0(&MethodInfo_WeatherEffect_get_Item);
    pWStack_68 = (Weather_WeatherSchedule_o *)0x4076bb2;
    il2cpp_runtime_helper_023445d0(&MethodInfo_WeatherAction_get_Item);
    pWStack_68 = (Weather_WeatherSchedule_o *)0x4076bbe;
    il2cpp_runtime_helper_023445d0(&MethodInfo_WeatherValueSelectType_get_Item);
    pWStack_68 = (Weather_WeatherSchedule_o *)0x4076bca;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    pWStack_68 = (Weather_WeatherSchedule_o *)0x4076bd6;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    pWStack_68 = (Weather_WeatherSchedule_o *)0x4076be2;
    il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherEvent);
    pWStack_68 = (Weather_WeatherSchedule_o *)0x4076bee;
    il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherSchedule);
    g_data_057ac327 = '\x01';
  }
  pWStack_68 = (Weather_WeatherSchedule_o *)0x4076c04;
  __this_00 = (Weather_WeatherEvent_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WeatherEvent);
  pWStack_68 = (Weather_WeatherSchedule_o *)0x4076c11;
  Weather_WeatherEvent___ctor(__this_00,(MethodInfo *)0x0);
  __this_01 = (System_Collections_Generic_List_object__o *)0x0;
  if (method_01 != (Il2CppClass *)0x0) {
    pWStack_68 = (Weather_WeatherSchedule_o *)0x4076c2b;
    pSVar16 = System_String__Split((System_String_o *)method_01,0x2c,0,(MethodInfo *)0x0);
    __this_01 = (System_Collections_Generic_List_object__o *)&TypeInfo_WeatherSchedule;
    if (*(int *)(TypeInfo_WeatherSchedule + 0xe4) == 0) {
      pWStack_68 = (Weather_WeatherSchedule_o *)0x4076c46;
      il2cpp_runtime_helper_02337ed0();
    }
    if (pSVar16 != (System_String_array *)0x0) {
      if ((int)pSVar16->max_length == 0) goto label_0407704e;
      if ((System_Collections_Generic_Dictionary_TKey__TValue__o *)**(undefined8 **)(TypeInfo_WeatherSchedule + 0xb8) !=
          (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
        pWStack_68 = (Weather_WeatherSchedule_o *)0x4076c85;
        iVar7 = System_Collections_Generic_Dictionary_object__Int32Enum___get_Item
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)
                           **(undefined8 **)(TypeInfo_WeatherSchedule + 0xb8),(Il2CppObject *)pSVar16->m_Items[0],
                           MethodInfo_WeatherAction_get_Item);
        if (__this_00 != (Weather_WeatherEvent_o *)0x0) {
          (__this_00->fields).Action = iVar7;
          pWStack_68 = (Weather_WeatherSchedule_o *)0x4076c9c;
          bVar8 = Weather_WeatherEvent__SupportsWeatherEffects(__this_00,(MethodInfo *)0x0);
          lVar23 = 1;
          if ((char)bVar8 != '\0') {
            if (*(int *)(TypeInfo_WeatherSchedule + 0xe4) == 0) {
              pWStack_68 = (Weather_WeatherSchedule_o *)0x4076cb6;
              il2cpp_runtime_helper_02337ed0();
            }
            if ((uint)pSVar16->max_length < 2) goto label_0407704e;
            pSVar3 = *(System_Collections_Generic_Dictionary_TKey__TValue__o **)
                      (*(long *)(TypeInfo_WeatherSchedule + 0xb8) + 8);
            if (pSVar3 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_04077049;
            pWStack_68 = (Weather_WeatherSchedule_o *)0x4076ced;
            iVar7 = System_Collections_Generic_Dictionary_object__Int32Enum___get_Item
                              (pSVar3,(Il2CppObject *)pSVar16->m_Items[1],MethodInfo_WeatherEffect_get_Item);
            (__this_00->fields).Effect = iVar7;
            lVar23 = 2;
          }
          uVar22 = (uint)lVar23;
          if ((__this_00->fields).Action == 0xf) {
            (__this_00->fields).ValueSelectType = 1;
            if ((int)pSVar16->max_length <= (int)uVar22) {
              return (System_String_o *)__this_00;
            }
          }
          else {
            pWStack_68 = (Weather_WeatherSchedule_o *)0x4076d1b;
            bVar8 = Weather_WeatherEvent__SupportsWeatherValueSelectTypes(__this_00,(MethodInfo *)0x0);
            if ((char)bVar8 == '\0') {
              iVar9 = (__this_00->fields).ValueSelectType;
              uVar6 = (uint)pSVar16->max_length;
            }
            else {
              if (*(int *)(TypeInfo_WeatherSchedule + 0xe4) == 0) {
                pWStack_68 = (Weather_WeatherSchedule_o *)0x4076d34;
                il2cpp_runtime_helper_02337ed0();
              }
              if ((uint)pSVar16->max_length <= uVar22) goto label_0407704e;
              pSVar3 = *(System_Collections_Generic_Dictionary_TKey__TValue__o **)
                        (*(long *)(TypeInfo_WeatherSchedule + 0xb8) + 0x10);
              if (pSVar3 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_04077049;
              uVar22 = uVar22 + 1;
              pWStack_68 = (Weather_WeatherSchedule_o *)0x4076d6f;
              iVar9 = System_Collections_Generic_Dictionary_object__Int32Enum___get_Item
                                (pSVar3,(Il2CppObject *)pSVar16->m_Items[lVar23],MethodInfo_WeatherValueSelectType_get_Item);
              (__this_00->fields).ValueSelectType = iVar9;
              uVar6 = (uint)pSVar16->max_length;
            }
            if (iVar9 == 3) {
              if ((int)uVar6 <= (int)uVar22) {
                return (System_String_o *)__this_00;
              }
              __this = (Weather_WeatherSchedule_o *)(ulong)uVar22;
              pSStack_60 = (System_String_o *)value;
              if (uVar22 < uVar6) {
                do {
                  pSVar19 = pSStack_60;
                  if (pSVar16->m_Items[(long)__this] == (System_String_o *)0x0) goto label_04077049;
                  pMVar20 = (MethodInfo *)0x0;
                  pWStack_68 = (Weather_WeatherSchedule_o *)0x4076eda;
                  pSVar18 = System_String__Split(pSVar16->m_Items[(long)__this],0x2d,0,(MethodInfo *)0x0);
                  __this_01 = (__this_00->fields).Values;
                  pWStack_68 = (Weather_WeatherSchedule_o *)0x4076eeb;
                  iVar7 = Weather_WeatherEvent__GetValueType(__this_00,(MethodInfo *)0x0);
                  if (pSVar18 == (System_String_array *)0x0) goto label_04077049;
                  if ((int)pSVar18->max_length == 0) break;
                  pWStack_68 = (Weather_WeatherSchedule_o *)0x4076f0c;
                  pIVar17 = Weather_WeatherSchedule__DeserializeValue
                                      ((Weather_WeatherSchedule_o *)pSVar19,iVar7,pSVar18->m_Items[0],pMVar20)
                  ;
                  lVar23 = MethodInfo_Void_Add;
                  if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) goto label_04077049;
                  piVar14 = &(__this_01->fields)._version;
                  *piVar14 = *piVar14 + 1;
                  pSVar4 = (__this_01->fields)._items;
                  if (pSVar4 == (System_Object_array *)0x0) goto label_04077049;
                  uVar22 = (__this_01->fields)._size;
                  if (uVar22 < (uint)pSVar4->max_length) {
                    (__this_01->fields)._size = uVar22 + 1;
                    pSVar4->m_Items[(int)uVar22] = pIVar17;
                    pWStack_68 = (Weather_WeatherSchedule_o *)0x4076f54;
                    il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar22);
                    __this_02 = (__this_00->fields).Weights;
                    if (1 < (int)pSVar18->max_length) goto label_04076f5e;
label_04076fd4:
                    lVar23 = MethodInfo_Void_Add;
                    if (__this_02 == (System_Collections_Generic_List_float__o *)0x0) goto label_04077049;
                    piVar14 = &(__this_02->fields)._version;
                    *piVar14 = *piVar14 + 1;
                    pSVar5 = (__this_02->fields)._items;
                    if (pSVar5 == (System_Single_array *)0x0) goto label_04077049;
                    uVar22 = (__this_02->fields)._size;
                    if ((uint)pSVar5->max_length <= uVar22) {
                      method_02 = *(MethodInfo_36649C0 **)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70);
                      fVar1 = 1.0;
                      goto label_04076e9a;
                    }
                    (__this_02->fields)._size = uVar22 + 1;
                    pSVar5->m_Items[(int)uVar22] = 1.0;
                  }
                  else {
                    pWStack_68 = (Weather_WeatherSchedule_o *)0x4076fca;
                    System_Collections_Generic_List_object___AddWithResize
                              (__this_01,pIVar17,
                               *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
                    __this_02 = (__this_00->fields).Weights;
                    if ((int)pSVar18->max_length < 2) goto label_04076fd4;
label_04076f5e:
                    pWStack_68 = (Weather_WeatherSchedule_o *)0x4076f69;
                    fVar1 = System_Single__Parse(pSVar18->m_Items[1],(MethodInfo *)0x0);
                    lVar23 = MethodInfo_Void_Add;
                    if (__this_02 == (System_Collections_Generic_List_float__o *)0x0) goto label_04077049;
                    piVar14 = &(__this_02->fields)._version;
                    *piVar14 = *piVar14 + 1;
                    pSVar5 = (__this_02->fields)._items;
                    if (pSVar5 == (System_Single_array *)0x0) goto label_04077049;
                    uVar22 = (__this_02->fields)._size;
                    if (uVar22 < (uint)pSVar5->max_length) {
                      (__this_02->fields)._size = uVar22 + 1;
                      pSVar5->m_Items[(int)uVar22] = fVar1;
                    }
                    else {
                      method_02 = *(MethodInfo_36649C0 **)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70);
label_04076e9a:
                      pWStack_68 = (Weather_WeatherSchedule_o *)0x4076e9f;
                      System_Collections_Generic_List_float___AddWithResize(__this_02,fVar1,method_02);
                    }
                  }
                  uVar22 = (uint)pSVar16->max_length;
                  __this = (Weather_WeatherSchedule_o *)((long)&__this->klass + 1);
                  if ((int)uVar22 <= (int)(uint)__this) {
                    return (System_String_o *)__this_00;
                  }
                } while ((uint)__this < uVar22);
              }
              goto label_0407704e;
            }
            if ((int)uVar6 <= (int)uVar22) {
              return (System_String_o *)__this_00;
            }
          }
          pMVar20 = (MethodInfo *)(ulong)uVar22;
          __this = (Weather_WeatherSchedule_o *)&MethodInfo_Void_Add;
          while( true ) {
            __this_01 = (__this_00->fields).Values;
            pWStack_68 = (Weather_WeatherSchedule_o *)0x4076dda;
            iVar7 = Weather_WeatherEvent__GetValueType(__this_00,(MethodInfo *)0x0);
            method_00 = (MethodInfo *)(ulong)(uint)pSVar16->max_length;
            if (method_00 <= pMVar20) break;
            pWStack_68 = (Weather_WeatherSchedule_o *)0x4076df7;
            pIVar17 = Weather_WeatherSchedule__DeserializeValue
                                ((Weather_WeatherSchedule_o *)value,iVar7,pSVar16->m_Items[(long)pMVar20],
                                 method_00);
            lVar23 = MethodInfo_Void_Add;
            if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) goto label_04077049;
            piVar14 = &(__this_01->fields)._version;
            *piVar14 = *piVar14 + 1;
            pSVar4 = (__this_01->fields)._items;
            if (pSVar4 == (System_Object_array *)0x0) goto label_04077049;
            uVar22 = (__this_01->fields)._size;
            if (uVar22 < (uint)pSVar4->max_length) {
              (__this_01->fields)._size = uVar22 + 1;
              pSVar4->m_Items[(int)uVar22] = pIVar17;
              pWStack_68 = (Weather_WeatherSchedule_o *)0x4076e38;
              il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar22);
              pMVar20 = (MethodInfo *)((long)&pMVar20->methodPointer + 1);
              if ((long)(int)pSVar16->max_length <= (long)pMVar20) {
                return (System_String_o *)__this_00;
              }
            }
            else {
              pWStack_68 = (Weather_WeatherSchedule_o *)0x4076dba;
              System_Collections_Generic_List_object___AddWithResize
                        (__this_01,pIVar17,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
              pMVar20 = (MethodInfo *)((long)&pMVar20->methodPointer + 1);
              if ((long)(int)pSVar16->max_length <= (long)pMVar20) {
                return (System_String_o *)__this_00;
              }
            }
          }
          goto label_0407704e;
        }
      }
    }
  }
label_04077049:
  pWStack_68 = (Weather_WeatherSchedule_o *)0x407704e;
  il2cpp_runtime_helper_022b2c90();
label_0407704e:
  pWStack_68 = (Weather_WeatherSchedule_o *)0x4077053;
  uStack_b8 = (Il2CppType *)il2cpp_runtime_helper_022b2ca0();
  _Stack_a8._0_4_ = in_XMM1_Da;
  _Stack_a8._4_4_ = in_XMM1_Db;
  _Stack_a0._0_4_ = in_XMM1_Dc;
  _Stack_a0._4_4_ = in_XMM1_Dd;
  pSStack_70 = __this_01;
  pWStack_68 = __this;
  pIStack_98 = uStack_b8;
  if (g_data_057ac325 == '\0') {
    pWStack_d0 = (Weather_WeatherSchedule_o *)0x407708b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    pWStack_d0 = (Weather_WeatherSchedule_o *)0x4077097;
    il2cpp_runtime_helper_023445d0(&"-");
    g_data_057ac325 = '\x01';
  }
  pWStack_d0 = (Weather_WeatherSchedule_o *)0x40770b2;
  pSVar16 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string);
  iStack_bc = (int)(pIStack_98._0_4_ * 255.0);
  pWStack_d0 = (Weather_WeatherSchedule_o *)0x40770d7;
  pSVar19 = System_Int32__ToString((int32_t)&iStack_bc,(MethodInfo *)0x0);
  if (pSVar16 != (System_String_array *)0x0) {
    if ((int)pSVar16->max_length != 0) {
      __this = (Weather_WeatherSchedule_o *)pSVar16->m_Items;
      pSVar16->m_Items[0] = pSVar19;
      pWStack_d0 = (Weather_WeatherSchedule_o *)0x40770fd;
      il2cpp_runtime_helper_022b4080(__this);
      uStack_b8._0_4_ = uStack_b8._4_4_;
      iStack_bc = (int)(uStack_b8._4_4_ * 255.0);
      pWStack_d0 = (Weather_WeatherSchedule_o *)0x407712b;
      in_XMM1_Da = uStack_b8._4_4_;
      pSVar19 = System_Int32__ToString((int32_t)&iStack_bc,(MethodInfo *)0x0);
      if (1 < (uint)pSVar16->max_length) {
        pSVar16->m_Items[1] = pSVar19;
        pWStack_d0 = (Weather_WeatherSchedule_o *)0x4077145;
        il2cpp_runtime_helper_022b4080(pSVar16->m_Items + 1);
        iStack_bc = (int)((float)_Stack_a8._0_4_ * 255.0);
        pWStack_d0 = (Weather_WeatherSchedule_o *)0x4077167;
        pSVar19 = System_Int32__ToString((int32_t)&iStack_bc,(MethodInfo *)0x0);
        if (2 < (uint)pSVar16->max_length) {
          pSVar16->m_Items[2] = pSVar19;
          pWStack_d0 = (Weather_WeatherSchedule_o *)0x4077181;
          il2cpp_runtime_helper_022b4080(pSVar16->m_Items + 2);
          fStack_88 = (float)_Stack_a8._4_4_;
          fStack_84 = (float)_Stack_a8._4_4_;
          uStack_80 = _Stack_a0._0_4_;
          uStack_7c = _Stack_a0._4_2_;
          uStack_7a = _Stack_a0._6_2_;
          iStack_bc = (int)((float)_Stack_a8._4_4_ * 255.0);
          pWStack_d0 = (Weather_WeatherSchedule_o *)0x40771af;
          in_XMM1_Da = _Stack_a8._4_4_;
          pSVar19 = System_Int32__ToString((int32_t)&iStack_bc,(MethodInfo *)0x0);
          if (3 < (uint)pSVar16->max_length) {
            pSVar16->m_Items[3] = pSVar19;
            pWStack_d0 = (Weather_WeatherSchedule_o *)0x40771c8;
            il2cpp_runtime_helper_022b4080(pSVar16->m_Items + 3,pSVar19);
            if ((((pIStack_98._0_4_ != (float)_Stack_a8._0_4_) || (pIStack_98._0_4_ != (float)uStack_b8)) ||
                (NAN(pIStack_98._0_4_) || NAN((float)uStack_b8))) || ((fStack_88 != 1.0 || (NAN(fStack_88)))))
            {
              pWStack_d0 = (Weather_WeatherSchedule_o *)0x4077214;
              pSVar19 = System_String__Join("-",pSVar16,(MethodInfo *)0x0);
              return pSVar19;
            }
            if ((int)pSVar16->max_length != 0) {
              return *(System_String_o **)__this;
            }
          }
        }
      }
    }
    pWStack_d0 = (Weather_WeatherSchedule_o *)0x4077221;
    il2cpp_runtime_helper_022b2ca0();
  }
  pWStack_d0 = (Weather_WeatherSchedule_o *)0x4077226;
  auStack_e8 = (undefined1  [8])il2cpp_runtime_helper_022b2c90();
  afStack_e0[0] = (float)in_XMM1_Da;
  pSStack_d8 = pSVar16;
  pWStack_d0 = __this;
  if (g_data_057ac326 == '\0') {
    uStack_f8 = 0x4077257;
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    uStack_f8 = 0x4077263;
    il2cpp_runtime_helper_023445d0(&"-");
    g_data_057ac326 = '\x01';
  }
  uStack_f8 = 0x407727e;
  pSVar16 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string);
  uStack_f8 = 0x407728d;
  pSVar19 = System_Single__ToString(__this_04,(MethodInfo *)auStack_e8);
  if (pSVar16 != (System_String_array *)0x0) {
    if ((int)pSVar16->max_length != 0) {
      pSVar16->m_Items[0] = pSVar19;
      uStack_f8 = 0x40772ac;
      fVar1 = (float)il2cpp_runtime_helper_022b4080(pSVar16->m_Items);
      uStack_f8 = 0x40772b8;
      pSVar19 = System_Single__ToString(fVar1,(MethodInfo *)(auStack_e8 + 4));
      if (1 < (uint)pSVar16->max_length) {
        pSVar16->m_Items[1] = pSVar19;
        uStack_f8 = 0x40772d3;
        fVar1 = (float)il2cpp_runtime_helper_022b4080(pSVar16->m_Items + 1);
        uStack_f8 = 0x40772dd;
        pSVar19 = System_Single__ToString(fVar1,(MethodInfo *)afStack_e0);
        if (2 < (uint)pSVar16->max_length) {
          pSVar16->m_Items[2] = pSVar19;
          uStack_f8 = 0x40772f6;
          il2cpp_runtime_helper_022b4080(pSVar16->m_Items + 2,pSVar19);
          uStack_f8 = 0x407730a;
          pSVar19 = System_String__Join("-",pSVar16,(MethodInfo *)0x0);
          return pSVar19;
        }
      }
    }
    uStack_f8 = 0x4077317;
    il2cpp_runtime_helper_022b2ca0();
  }
  uStack_f8 = 0x407731c;
  uVar10 = il2cpp_runtime_helper_022b2c90();
  uStack_f8 = CONCAT44((int)(extraout_XMM0_Da * 255.0),uVar10);
  pSVar19 = System_Int32__ToString((int)&uStack_f8 + 4,(MethodInfo *)0x0);
  return pSVar19;
}


// Weather.WeatherSchedule$$SerializeRandomListValue
// il2cpp: System_String_o* Weather_WeatherSchedule__SerializeRandomListValue (Weather_WeatherSchedule_o* __this, int32_t type, Il2CppObject* value, float weight, const MethodInfo* method);
// 0x4076880

System_String_o *
Weather_WeatherSchedule__SerializeRandomListValue
          (Weather_WeatherSchedule_o *__this,int32_t type,Il2CppObject *value,float weight,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *str2;
  float __this_00;
  float fStack_1c;
  
  fStack_1c = weight;
  if (g_data_057ac324 == '\0') {
    il2cpp_runtime_helper_023445d0(&"-");
    g_data_057ac324 = '\x01';
  }
  pSVar1 = Weather_WeatherSchedule__SerializeValue(__this,type,value,method);
  str2 = System_Single__ToString(__this_00,(MethodInfo *)&fStack_1c);
  pSVar1 = System_String__Concat_3af7150(pSVar1,"-",str2,(MethodInfo *)0x0);
  return pSVar1;
}


// Weather.WeatherSchedule$$SerializeColor
// il2cpp: System_String_o* Weather_WeatherSchedule__SerializeColor (Weather_WeatherSchedule_o* __this, UnityEngine_Color_o color, const MethodInfo* method);
// 0x4077060

System_String_o *
Weather_WeatherSchedule__SerializeColor
          (Weather_WeatherSchedule_o *__this,UnityEngine_Color_o color,MethodInfo *method)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  System_String_array *pSVar3;
  System_String_o *pSVar4;
  System_String_o **unaff_R14;
  float __this_00;
  float fVar5;
  float extraout_XMM0_Da;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  undefined8 uStack_98;
  undefined1 auStack_88 [8];
  float afStack_80 [2];
  System_String_array *pSStack_78;
  System_String_o **ppSStack_70;
  int local_5c;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  float local_28;
  float fStack_24;
  uint32_t uStack_20;
  uint16_t uStack_1c;
  uint16_t uStack_1a;
  
  fVar5 = color.fields.b;
  local_48._8_4_ = in_XMM1_Dc;
  local_48._0_8_ = color.fields._8_8_;
  local_48._12_4_ = in_XMM1_Dd;
  local_58._8_4_ = in_XMM0_Dc;
  local_58._0_8_ = color.fields._0_8_;
  local_58._12_4_ = in_XMM0_Dd;
  local_38._8_4_ = in_XMM0_Dc;
  local_38._0_8_ = color.fields._0_8_;
  local_38._12_4_ = in_XMM0_Dd;
  if (g_data_057ac325 == '\0') {
    ppSStack_70 = (System_String_o **)0x407708b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    ppSStack_70 = (System_String_o **)0x4077097;
    il2cpp_runtime_helper_023445d0(&"-");
    g_data_057ac325 = '\x01';
  }
  ppSStack_70 = (System_String_o **)0x40770b2;
  pSVar3 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string);
  local_5c = (int)((float)local_38._0_4_ * 255.0);
  ppSStack_70 = (System_String_o **)0x40770d7;
  pSVar4 = System_Int32__ToString((int32_t)&local_5c,(MethodInfo *)0x0);
  if (pSVar3 != (System_String_array *)0x0) {
    if ((int)pSVar3->max_length != 0) {
      unaff_R14 = pSVar3->m_Items;
      pSVar3->m_Items[0] = pSVar4;
      ppSStack_70 = (System_String_o **)0x40770fd;
      il2cpp_runtime_helper_022b4080(unaff_R14);
      local_58._0_4_ = local_58._4_4_;
      local_5c = (int)((float)local_58._4_4_ * 255.0);
      ppSStack_70 = (System_String_o **)0x407712b;
      fVar5 = (float)local_58._4_4_;
      pSVar4 = System_Int32__ToString((int32_t)&local_5c,(MethodInfo *)0x0);
      if (1 < (uint)pSVar3->max_length) {
        pSVar3->m_Items[1] = pSVar4;
        ppSStack_70 = (System_String_o **)0x4077145;
        il2cpp_runtime_helper_022b4080(pSVar3->m_Items + 1);
        local_5c = (int)((float)local_48._0_4_ * 255.0);
        ppSStack_70 = (System_String_o **)0x4077167;
        pSVar4 = System_Int32__ToString((int32_t)&local_5c,(MethodInfo *)0x0);
        if (2 < (uint)pSVar3->max_length) {
          pSVar3->m_Items[2] = pSVar4;
          ppSStack_70 = (System_String_o **)0x4077181;
          il2cpp_runtime_helper_022b4080(pSVar3->m_Items + 2);
          auVar1 = local_48;
          local_28 = (float)local_48._4_4_;
          fStack_24 = (float)local_48._4_4_;
          uStack_20 = local_48._8_4_;
          uStack_1c = local_48._12_2_;
          uStack_1a = local_48._14_2_;
          local_5c = (int)((float)local_48._4_4_ * 255.0);
          ppSStack_70 = (System_String_o **)0x40771af;
          fVar5 = (float)local_48._4_4_;
          local_48 = auVar1;
          pSVar4 = System_Int32__ToString((int32_t)&local_5c,(MethodInfo *)0x0);
          if (3 < (uint)pSVar3->max_length) {
            pSVar3->m_Items[3] = pSVar4;
            ppSStack_70 = (System_String_o **)0x40771c8;
            il2cpp_runtime_helper_022b4080(pSVar3->m_Items + 3,pSVar4);
            if ((float)local_38._0_4_ != (float)local_48._0_4_) {
label_04077200:
              ppSStack_70 = (System_String_o **)0x4077214;
              pSVar4 = System_String__Join("-",pSVar3,(MethodInfo *)0x0);
              return pSVar4;
            }
            if (((((float)local_38._0_4_ != (float)local_58._0_4_) ||
                 (NAN((float)local_38._0_4_) || NAN((float)local_58._0_4_))) || (local_28 != 1.0)) ||
               (NAN(local_28))) goto label_04077200;
            if ((int)pSVar3->max_length != 0) {
              return *unaff_R14;
            }
          }
        }
      }
    }
    ppSStack_70 = (System_String_o **)0x4077221;
    il2cpp_runtime_helper_022b2ca0();
  }
  ppSStack_70 = (System_String_o **)0x4077226;
  auStack_88 = (undefined1  [8])il2cpp_runtime_helper_022b2c90();
  afStack_80[0] = fVar5;
  pSStack_78 = pSVar3;
  ppSStack_70 = unaff_R14;
  if (g_data_057ac326 == '\0') {
    uStack_98 = 0x4077257;
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    uStack_98 = 0x4077263;
    il2cpp_runtime_helper_023445d0(&"-");
    g_data_057ac326 = '\x01';
  }
  uStack_98 = 0x407727e;
  pSVar3 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string);
  uStack_98 = 0x407728d;
  pSVar4 = System_Single__ToString(__this_00,(MethodInfo *)auStack_88);
  if (pSVar3 != (System_String_array *)0x0) {
    if ((int)pSVar3->max_length != 0) {
      pSVar3->m_Items[0] = pSVar4;
      uStack_98 = 0x40772ac;
      fVar5 = (float)il2cpp_runtime_helper_022b4080(pSVar3->m_Items);
      uStack_98 = 0x40772b8;
      pSVar4 = System_Single__ToString(fVar5,(MethodInfo *)(auStack_88 + 4));
      if (1 < (uint)pSVar3->max_length) {
        pSVar3->m_Items[1] = pSVar4;
        uStack_98 = 0x40772d3;
        fVar5 = (float)il2cpp_runtime_helper_022b4080(pSVar3->m_Items + 1);
        uStack_98 = 0x40772dd;
        pSVar4 = System_Single__ToString(fVar5,(MethodInfo *)afStack_80);
        if (2 < (uint)pSVar3->max_length) {
          pSVar3->m_Items[2] = pSVar4;
          uStack_98 = 0x40772f6;
          il2cpp_runtime_helper_022b4080(pSVar3->m_Items + 2,pSVar4);
          uStack_98 = 0x407730a;
          pSVar4 = System_String__Join("-",pSVar3,(MethodInfo *)0x0);
          return pSVar4;
        }
      }
    }
    uStack_98 = 0x4077317;
    il2cpp_runtime_helper_022b2ca0();
  }
  uStack_98 = 0x407731c;
  uVar2 = il2cpp_runtime_helper_022b2c90();
  uStack_98 = CONCAT44((int)(extraout_XMM0_Da * 255.0),uVar2);
  pSVar4 = System_Int32__ToString((int)&uStack_98 + 4,(MethodInfo *)0x0);
  return pSVar4;
}


// Weather.WeatherSchedule$$SerializeColorValue
// il2cpp: System_String_o* Weather_WeatherSchedule__SerializeColorValue (Weather_WeatherSchedule_o* __this, float value, const MethodInfo* method);
// 0x4077320

System_String_o *
Weather_WeatherSchedule__SerializeColorValue(Weather_WeatherSchedule_o *__this,float value,MethodInfo *method)

{
  System_String_o *pSVar1;
  undefined1 auStack_4 [4];
  
  pSVar1 = System_Int32__ToString((int32_t)auStack_4,(MethodInfo *)0x0);
  return pSVar1;
}


// Weather.WeatherSchedule$$SerializeVector3
// il2cpp: System_String_o* Weather_WeatherSchedule__SerializeVector3 (Weather_WeatherSchedule_o* __this, UnityEngine_Vector3_o v, const MethodInfo* method);
// 0x4077230

System_String_o *
Weather_WeatherSchedule__SerializeVector3
          (Weather_WeatherSchedule_o *__this,UnityEngine_Vector3_o v,MethodInfo *method)

{
  undefined4 uVar1;
  System_String_array *value;
  System_String_o *pSVar2;
  float __this_00;
  float fVar3;
  float extraout_XMM0_Da;
  undefined8 uStack_30;
  undefined1 local_20 [8];
  float local_18 [2];
  
  local_18[0] = v.fields.z;
  local_20 = v.fields._0_8_;
  if (g_data_057ac326 == '\0') {
    uStack_30 = 0x4077257;
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    uStack_30 = 0x4077263;
    il2cpp_runtime_helper_023445d0(&"-");
    g_data_057ac326 = '\x01';
  }
  uStack_30 = 0x407727e;
  value = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string);
  uStack_30 = 0x407728d;
  pSVar2 = System_Single__ToString(__this_00,(MethodInfo *)local_20);
  if (value != (System_String_array *)0x0) {
    if ((int)value->max_length != 0) {
      value->m_Items[0] = pSVar2;
      uStack_30 = 0x40772ac;
      fVar3 = (float)il2cpp_runtime_helper_022b4080(value->m_Items);
      uStack_30 = 0x40772b8;
      pSVar2 = System_Single__ToString(fVar3,(MethodInfo *)(local_20 + 4));
      if (1 < (uint)value->max_length) {
        value->m_Items[1] = pSVar2;
        uStack_30 = 0x40772d3;
        fVar3 = (float)il2cpp_runtime_helper_022b4080(value->m_Items + 1);
        uStack_30 = 0x40772dd;
        pSVar2 = System_Single__ToString(fVar3,(MethodInfo *)local_18);
        if (2 < (uint)value->max_length) {
          value->m_Items[2] = pSVar2;
          uStack_30 = 0x40772f6;
          il2cpp_runtime_helper_022b4080(value->m_Items + 2,pSVar2);
          uStack_30 = 0x407730a;
          pSVar2 = System_String__Join("-",value,(MethodInfo *)0x0);
          return pSVar2;
        }
      }
    }
    uStack_30 = 0x4077317;
    il2cpp_runtime_helper_022b2ca0();
  }
  uStack_30 = 0x407731c;
  uVar1 = il2cpp_runtime_helper_022b2c90();
  uStack_30 = CONCAT44((int)(extraout_XMM0_Da * 255.0),uVar1);
  pSVar2 = System_Int32__ToString((int)&uStack_30 + 4,(MethodInfo *)0x0);
  return pSVar2;
}


// Weather.WeatherSchedule$$DeserializeLine
// il2cpp: Weather_WeatherEvent_o* Weather_WeatherSchedule__DeserializeLine (Weather_WeatherSchedule_o* __this, System_String_o* line, const MethodInfo* method);
// 0x4076b80

Weather_WeatherEvent_o *
Weather_WeatherSchedule__DeserializeLine
          (Weather_WeatherSchedule_o *__this,System_String_o *line,MethodInfo *method)

{
  int32_t *piVar1;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar2;
  System_Object_array *pSVar3;
  System_Single_array *pSVar4;
  uint uVar5;
  Weather_WeatherSchedule_o *__this_00;
  int32_t iVar6;
  bool_conflict bVar7;
  int iVar8;
  undefined4 uVar9;
  Weather_WeatherSchedule_o *in_RAX;
  Weather_WeatherEvent_o *pWVar10;
  System_String_array *pSVar11;
  Il2CppObject *pIVar12;
  System_String_array *pSVar13;
  System_String_o *pSVar14;
  MethodInfo *method_00;
  MethodInfo *pMVar15;
  System_Collections_Generic_List_object__o *__this_01;
  uint uVar16;
  long lVar17;
  MethodInfo_36649C0 *method_01;
  System_Collections_Generic_List_float__o *__this_02;
  System_String_o **unaff_R14;
  float __this_03;
  float fVar18;
  float extraout_XMM0_Da;
  float in_XMM1_Da;
  float in_XMM1_Db;
  uint32_t in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  undefined8 uStack_d0;
  undefined1 auStack_c0 [8];
  float afStack_b8 [2];
  System_String_array *pSStack_b0;
  System_String_o **ppSStack_a8;
  int iStack_94;
  undefined8 uStack_90;
  _union_14 _Stack_80;
  _union_14 _Stack_78;
  Il2CppType *pIStack_70;
  float fStack_60;
  float fStack_5c;
  uint32_t uStack_58;
  uint16_t uStack_54;
  uint16_t uStack_52;
  System_Collections_Generic_List_object__o *pSStack_48;
  System_String_o **ppSStack_40;
  Weather_WeatherSchedule_o *local_38;
  
  local_38 = in_RAX;
  if (g_data_057ac327 == '\0') {
    ppSStack_40 = (System_String_o **)0x4076ba6;
    il2cpp_runtime_helper_023445d0(&MethodInfo_WeatherEffect_get_Item);
    ppSStack_40 = (System_String_o **)0x4076bb2;
    il2cpp_runtime_helper_023445d0(&MethodInfo_WeatherAction_get_Item);
    ppSStack_40 = (System_String_o **)0x4076bbe;
    il2cpp_runtime_helper_023445d0(&MethodInfo_WeatherValueSelectType_get_Item);
    ppSStack_40 = (System_String_o **)0x4076bca;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    ppSStack_40 = (System_String_o **)0x4076bd6;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    ppSStack_40 = (System_String_o **)0x4076be2;
    il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherEvent);
    ppSStack_40 = (System_String_o **)0x4076bee;
    il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherSchedule);
    g_data_057ac327 = '\x01';
  }
  ppSStack_40 = (System_String_o **)0x4076c04;
  pWVar10 = (Weather_WeatherEvent_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WeatherEvent);
  ppSStack_40 = (System_String_o **)0x4076c11;
  Weather_WeatherEvent___ctor(pWVar10,(MethodInfo *)0x0);
  __this_01 = (System_Collections_Generic_List_object__o *)0x0;
  if (line != (System_String_o *)0x0) {
    ppSStack_40 = (System_String_o **)0x4076c2b;
    pSVar11 = System_String__Split(line,0x2c,0,(MethodInfo *)0x0);
    __this_01 = (System_Collections_Generic_List_object__o *)&TypeInfo_WeatherSchedule;
    if (*(int *)(TypeInfo_WeatherSchedule + 0xe4) == 0) {
      ppSStack_40 = (System_String_o **)0x4076c46;
      il2cpp_runtime_helper_02337ed0();
    }
    if (pSVar11 != (System_String_array *)0x0) {
      if ((int)pSVar11->max_length == 0) goto label_0407704e;
      if ((System_Collections_Generic_Dictionary_TKey__TValue__o *)**(undefined8 **)(TypeInfo_WeatherSchedule + 0xb8) !=
          (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
        ppSStack_40 = (System_String_o **)0x4076c85;
        iVar6 = System_Collections_Generic_Dictionary_object__Int32Enum___get_Item
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)
                           **(undefined8 **)(TypeInfo_WeatherSchedule + 0xb8),(Il2CppObject *)pSVar11->m_Items[0],
                           MethodInfo_WeatherAction_get_Item);
        if (pWVar10 != (Weather_WeatherEvent_o *)0x0) {
          (pWVar10->fields).Action = iVar6;
          ppSStack_40 = (System_String_o **)0x4076c9c;
          bVar7 = Weather_WeatherEvent__SupportsWeatherEffects(pWVar10,(MethodInfo *)0x0);
          lVar17 = 1;
          if ((char)bVar7 != '\0') {
            if (*(int *)(TypeInfo_WeatherSchedule + 0xe4) == 0) {
              ppSStack_40 = (System_String_o **)0x4076cb6;
              il2cpp_runtime_helper_02337ed0();
            }
            if ((uint)pSVar11->max_length < 2) goto label_0407704e;
            pSVar2 = *(System_Collections_Generic_Dictionary_TKey__TValue__o **)
                      (*(long *)(TypeInfo_WeatherSchedule + 0xb8) + 8);
            if (pSVar2 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_04077049;
            ppSStack_40 = (System_String_o **)0x4076ced;
            iVar6 = System_Collections_Generic_Dictionary_object__Int32Enum___get_Item
                              (pSVar2,(Il2CppObject *)pSVar11->m_Items[1],MethodInfo_WeatherEffect_get_Item);
            (pWVar10->fields).Effect = iVar6;
            lVar17 = 2;
          }
          uVar16 = (uint)lVar17;
          if ((pWVar10->fields).Action == 0xf) {
            (pWVar10->fields).ValueSelectType = 1;
            if ((int)pSVar11->max_length <= (int)uVar16) {
              return pWVar10;
            }
          }
          else {
            ppSStack_40 = (System_String_o **)0x4076d1b;
            bVar7 = Weather_WeatherEvent__SupportsWeatherValueSelectTypes(pWVar10,(MethodInfo *)0x0);
            if ((char)bVar7 == '\0') {
              iVar8 = (pWVar10->fields).ValueSelectType;
              uVar5 = (uint)pSVar11->max_length;
            }
            else {
              if (*(int *)(TypeInfo_WeatherSchedule + 0xe4) == 0) {
                ppSStack_40 = (System_String_o **)0x4076d34;
                il2cpp_runtime_helper_02337ed0();
              }
              if ((uint)pSVar11->max_length <= uVar16) goto label_0407704e;
              pSVar2 = *(System_Collections_Generic_Dictionary_TKey__TValue__o **)
                        (*(long *)(TypeInfo_WeatherSchedule + 0xb8) + 0x10);
              if (pSVar2 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_04077049;
              uVar16 = uVar16 + 1;
              ppSStack_40 = (System_String_o **)0x4076d6f;
              iVar8 = System_Collections_Generic_Dictionary_object__Int32Enum___get_Item
                                (pSVar2,(Il2CppObject *)pSVar11->m_Items[lVar17],MethodInfo_WeatherValueSelectType_get_Item);
              (pWVar10->fields).ValueSelectType = iVar8;
              uVar5 = (uint)pSVar11->max_length;
            }
            if (iVar8 == 3) {
              if ((int)uVar5 <= (int)uVar16) {
                return pWVar10;
              }
              unaff_R14 = (System_String_o **)(ulong)uVar16;
              local_38 = __this;
              if (uVar16 < uVar5) {
                do {
                  __this_00 = local_38;
                  if (pSVar11->m_Items[(long)unaff_R14] == (System_String_o *)0x0) goto label_04077049;
                  pMVar15 = (MethodInfo *)0x0;
                  ppSStack_40 = (System_String_o **)0x4076eda;
                  pSVar13 = System_String__Split(pSVar11->m_Items[(long)unaff_R14],0x2d,0,(MethodInfo *)0x0);
                  __this_01 = (pWVar10->fields).Values;
                  ppSStack_40 = (System_String_o **)0x4076eeb;
                  iVar6 = Weather_WeatherEvent__GetValueType(pWVar10,(MethodInfo *)0x0);
                  if (pSVar13 == (System_String_array *)0x0) goto label_04077049;
                  if ((int)pSVar13->max_length == 0) break;
                  ppSStack_40 = (System_String_o **)0x4076f0c;
                  pIVar12 = Weather_WeatherSchedule__DeserializeValue
                                      (__this_00,iVar6,pSVar13->m_Items[0],pMVar15);
                  lVar17 = MethodInfo_Void_Add;
                  if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) goto label_04077049;
                  piVar1 = &(__this_01->fields)._version;
                  *piVar1 = *piVar1 + 1;
                  pSVar3 = (__this_01->fields)._items;
                  if (pSVar3 == (System_Object_array *)0x0) goto label_04077049;
                  uVar16 = (__this_01->fields)._size;
                  if (uVar16 < (uint)pSVar3->max_length) {
                    (__this_01->fields)._size = uVar16 + 1;
                    pSVar3->m_Items[(int)uVar16] = pIVar12;
                    ppSStack_40 = (System_String_o **)0x4076f54;
                    il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar16);
                    __this_02 = (pWVar10->fields).Weights;
                    if (1 < (int)pSVar13->max_length) goto label_04076f5e;
label_04076fd4:
                    lVar17 = MethodInfo_Void_Add;
                    if (__this_02 == (System_Collections_Generic_List_float__o *)0x0) goto label_04077049;
                    piVar1 = &(__this_02->fields)._version;
                    *piVar1 = *piVar1 + 1;
                    pSVar4 = (__this_02->fields)._items;
                    if (pSVar4 == (System_Single_array *)0x0) goto label_04077049;
                    uVar16 = (__this_02->fields)._size;
                    if ((uint)pSVar4->max_length <= uVar16) {
                      method_01 = *(MethodInfo_36649C0 **)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70);
                      fVar18 = 1.0;
                      goto label_04076e9a;
                    }
                    (__this_02->fields)._size = uVar16 + 1;
                    pSVar4->m_Items[(int)uVar16] = 1.0;
                  }
                  else {
                    ppSStack_40 = (System_String_o **)0x4076fca;
                    System_Collections_Generic_List_object___AddWithResize
                              (__this_01,pIVar12,
                               *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
                    __this_02 = (pWVar10->fields).Weights;
                    if ((int)pSVar13->max_length < 2) goto label_04076fd4;
label_04076f5e:
                    ppSStack_40 = (System_String_o **)0x4076f69;
                    fVar18 = System_Single__Parse(pSVar13->m_Items[1],(MethodInfo *)0x0);
                    lVar17 = MethodInfo_Void_Add;
                    if (__this_02 == (System_Collections_Generic_List_float__o *)0x0) goto label_04077049;
                    piVar1 = &(__this_02->fields)._version;
                    *piVar1 = *piVar1 + 1;
                    pSVar4 = (__this_02->fields)._items;
                    if (pSVar4 == (System_Single_array *)0x0) goto label_04077049;
                    uVar16 = (__this_02->fields)._size;
                    if (uVar16 < (uint)pSVar4->max_length) {
                      (__this_02->fields)._size = uVar16 + 1;
                      pSVar4->m_Items[(int)uVar16] = fVar18;
                    }
                    else {
                      method_01 = *(MethodInfo_36649C0 **)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70);
label_04076e9a:
                      ppSStack_40 = (System_String_o **)0x4076e9f;
                      System_Collections_Generic_List_float___AddWithResize(__this_02,fVar18,method_01);
                    }
                  }
                  uVar16 = (uint)pSVar11->max_length;
                  unaff_R14 = (System_String_o **)((long)unaff_R14 + 1);
                  if ((int)uVar16 <= (int)(uint)unaff_R14) {
                    return pWVar10;
                  }
                } while ((uint)unaff_R14 < uVar16);
              }
              goto label_0407704e;
            }
            if ((int)uVar5 <= (int)uVar16) {
              return pWVar10;
            }
          }
          pMVar15 = (MethodInfo *)(ulong)uVar16;
          unaff_R14 = (System_String_o **)&MethodInfo_Void_Add;
          while( true ) {
            __this_01 = (pWVar10->fields).Values;
            ppSStack_40 = (System_String_o **)0x4076dda;
            iVar6 = Weather_WeatherEvent__GetValueType(pWVar10,(MethodInfo *)0x0);
            method_00 = (MethodInfo *)(ulong)(uint)pSVar11->max_length;
            if (method_00 <= pMVar15) break;
            ppSStack_40 = (System_String_o **)0x4076df7;
            pIVar12 = Weather_WeatherSchedule__DeserializeValue
                                (__this,iVar6,pSVar11->m_Items[(long)pMVar15],method_00);
            lVar17 = MethodInfo_Void_Add;
            if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) goto label_04077049;
            piVar1 = &(__this_01->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar3 = (__this_01->fields)._items;
            if (pSVar3 == (System_Object_array *)0x0) goto label_04077049;
            uVar16 = (__this_01->fields)._size;
            if (uVar16 < (uint)pSVar3->max_length) {
              (__this_01->fields)._size = uVar16 + 1;
              pSVar3->m_Items[(int)uVar16] = pIVar12;
              ppSStack_40 = (System_String_o **)0x4076e38;
              il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar16);
              pMVar15 = (MethodInfo *)((long)&pMVar15->methodPointer + 1);
              if ((long)(int)pSVar11->max_length <= (long)pMVar15) {
                return pWVar10;
              }
            }
            else {
              ppSStack_40 = (System_String_o **)0x4076dba;
              System_Collections_Generic_List_object___AddWithResize
                        (__this_01,pIVar12,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
              pMVar15 = (MethodInfo *)((long)&pMVar15->methodPointer + 1);
              if ((long)(int)pSVar11->max_length <= (long)pMVar15) {
                return pWVar10;
              }
            }
          }
          goto label_0407704e;
        }
      }
    }
  }
label_04077049:
  ppSStack_40 = (System_String_o **)0x407704e;
  il2cpp_runtime_helper_022b2c90();
label_0407704e:
  ppSStack_40 = (System_String_o **)0x4077053;
  uStack_90 = (Il2CppType *)il2cpp_runtime_helper_022b2ca0();
  _Stack_80._0_4_ = in_XMM1_Da;
  _Stack_80._4_4_ = in_XMM1_Db;
  _Stack_78._0_4_ = in_XMM1_Dc;
  _Stack_78._4_4_ = in_XMM1_Dd;
  pSStack_48 = __this_01;
  ppSStack_40 = unaff_R14;
  pIStack_70 = uStack_90;
  if (g_data_057ac325 == '\0') {
    ppSStack_a8 = (System_String_o **)0x407708b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    ppSStack_a8 = (System_String_o **)0x4077097;
    il2cpp_runtime_helper_023445d0(&"-");
    g_data_057ac325 = '\x01';
  }
  ppSStack_a8 = (System_String_o **)0x40770b2;
  pSVar11 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string);
  iStack_94 = (int)(pIStack_70._0_4_ * 255.0);
  ppSStack_a8 = (System_String_o **)0x40770d7;
  pSVar14 = System_Int32__ToString((int32_t)&iStack_94,(MethodInfo *)0x0);
  if (pSVar11 != (System_String_array *)0x0) {
    if ((int)pSVar11->max_length != 0) {
      unaff_R14 = pSVar11->m_Items;
      pSVar11->m_Items[0] = pSVar14;
      ppSStack_a8 = (System_String_o **)0x40770fd;
      il2cpp_runtime_helper_022b4080(unaff_R14);
      uStack_90._0_4_ = uStack_90._4_4_;
      iStack_94 = (int)(uStack_90._4_4_ * 255.0);
      ppSStack_a8 = (System_String_o **)0x407712b;
      in_XMM1_Da = uStack_90._4_4_;
      pSVar14 = System_Int32__ToString((int32_t)&iStack_94,(MethodInfo *)0x0);
      if (1 < (uint)pSVar11->max_length) {
        pSVar11->m_Items[1] = pSVar14;
        ppSStack_a8 = (System_String_o **)0x4077145;
        il2cpp_runtime_helper_022b4080(pSVar11->m_Items + 1);
        iStack_94 = (int)((float)_Stack_80._0_4_ * 255.0);
        ppSStack_a8 = (System_String_o **)0x4077167;
        pSVar14 = System_Int32__ToString((int32_t)&iStack_94,(MethodInfo *)0x0);
        if (2 < (uint)pSVar11->max_length) {
          pSVar11->m_Items[2] = pSVar14;
          ppSStack_a8 = (System_String_o **)0x4077181;
          il2cpp_runtime_helper_022b4080(pSVar11->m_Items + 2);
          fStack_60 = (float)_Stack_80._4_4_;
          fStack_5c = (float)_Stack_80._4_4_;
          uStack_58 = _Stack_78._0_4_;
          uStack_54 = _Stack_78._4_2_;
          uStack_52 = _Stack_78._6_2_;
          iStack_94 = (int)((float)_Stack_80._4_4_ * 255.0);
          ppSStack_a8 = (System_String_o **)0x40771af;
          pSVar14 = System_Int32__ToString((int32_t)&iStack_94,(MethodInfo *)0x0);
          in_XMM1_Da = (float)_Stack_80._4_4_;
          if (3 < (uint)pSVar11->max_length) {
            pSVar11->m_Items[3] = pSVar14;
            ppSStack_a8 = (System_String_o **)0x40771c8;
            il2cpp_runtime_helper_022b4080(pSVar11->m_Items + 3,pSVar14);
            if ((((pIStack_70._0_4_ != (float)_Stack_80._0_4_) || (pIStack_70._0_4_ != (float)uStack_90)) ||
                (NAN(pIStack_70._0_4_) || NAN((float)uStack_90))) || ((fStack_60 != 1.0 || (NAN(fStack_60)))))
            {
              ppSStack_a8 = (System_String_o **)0x4077214;
              pWVar10 = (Weather_WeatherEvent_o *)System_String__Join("-",pSVar11,(MethodInfo *)0x0);
              return pWVar10;
            }
            in_XMM1_Da = (float)_Stack_80._4_4_;
            if ((int)pSVar11->max_length != 0) {
              return (Weather_WeatherEvent_o *)*unaff_R14;
            }
          }
        }
      }
    }
    ppSStack_a8 = (System_String_o **)0x4077221;
    il2cpp_runtime_helper_022b2ca0();
  }
  ppSStack_a8 = (System_String_o **)0x4077226;
  auStack_c0 = (undefined1  [8])il2cpp_runtime_helper_022b2c90();
  afStack_b8[0] = in_XMM1_Da;
  pSStack_b0 = pSVar11;
  ppSStack_a8 = unaff_R14;
  if (g_data_057ac326 == '\0') {
    uStack_d0 = 0x4077257;
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    uStack_d0 = 0x4077263;
    il2cpp_runtime_helper_023445d0(&"-");
    g_data_057ac326 = '\x01';
  }
  uStack_d0 = 0x407727e;
  pSVar11 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string);
  uStack_d0 = 0x407728d;
  pSVar14 = System_Single__ToString(__this_03,(MethodInfo *)auStack_c0);
  if (pSVar11 != (System_String_array *)0x0) {
    if ((int)pSVar11->max_length != 0) {
      pSVar11->m_Items[0] = pSVar14;
      uStack_d0 = 0x40772ac;
      fVar18 = (float)il2cpp_runtime_helper_022b4080(pSVar11->m_Items);
      uStack_d0 = 0x40772b8;
      pSVar14 = System_Single__ToString(fVar18,(MethodInfo *)(auStack_c0 + 4));
      if (1 < (uint)pSVar11->max_length) {
        pSVar11->m_Items[1] = pSVar14;
        uStack_d0 = 0x40772d3;
        fVar18 = (float)il2cpp_runtime_helper_022b4080(pSVar11->m_Items + 1);
        uStack_d0 = 0x40772dd;
        pSVar14 = System_Single__ToString(fVar18,(MethodInfo *)afStack_b8);
        if (2 < (uint)pSVar11->max_length) {
          pSVar11->m_Items[2] = pSVar14;
          uStack_d0 = 0x40772f6;
          il2cpp_runtime_helper_022b4080(pSVar11->m_Items + 2,pSVar14);
          uStack_d0 = 0x407730a;
          pWVar10 = (Weather_WeatherEvent_o *)System_String__Join("-",pSVar11,(MethodInfo *)0x0);
          return pWVar10;
        }
      }
    }
    uStack_d0 = 0x4077317;
    il2cpp_runtime_helper_022b2ca0();
  }
  uStack_d0 = 0x407731c;
  uVar9 = il2cpp_runtime_helper_022b2c90();
  uStack_d0 = CONCAT44((int)(extraout_XMM0_Da * 255.0),uVar9);
  pWVar10 = (Weather_WeatherEvent_o *)System_Int32__ToString((int)&uStack_d0 + 4,(MethodInfo *)0x0);
  return pWVar10;
}


// Weather.WeatherSchedule$$DeserializeValue
// il2cpp: Il2CppObject* Weather_WeatherSchedule__DeserializeValue (Weather_WeatherSchedule_o* __this, int32_t type, System_String_o* item, const MethodInfo* method);
// 0x4077340

Il2CppObject *
Weather_WeatherSchedule__DeserializeValue
          (Weather_WeatherSchedule_o *__this,int32_t type,System_String_o *item,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  int32_t g;
  int32_t b;
  int32_t a;
  System_String_array *pSVar3;
  Utility_Color255_o *__this_00;
  Il2CppObject *extraout_RAX;
  undefined4 extraout_var;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  System_String_o *__this_01;
  System_String_o *s;
  undefined8 uVar4;
  
  method_00 = (MethodInfo *)item;
  if (g_data_057ac328 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Convert);
    __this = (Weather_WeatherSchedule_o *)&TypeInfo_Vector3;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac328 = '\x01';
    method_00 = extraout_RDX;
  }
  switch(type) {
  case 1:
    System_Single__Parse(item,(MethodInfo *)0x0);
    uVar4 = g_data_057b9be8;
    break;
  case 2:
    System_Int32__Parse(item,(MethodInfo *)0x0);
    uVar4 = g_data_057b9bb8;
    break;
  case 3:
    goto switchD_0407738f_caseD_2;
  case 4:
    __this_01 = item;
    if (g_data_057ac329 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
      g_data_057ac329 = '\x01';
    }
    if (item != (System_String_o *)0x0) {
      __this_01 = (System_String_o *)&g_data_0000002d;
      pSVar3 = System_String__Split(item,0x2d,0,(MethodInfo *)0x0);
      if (pSVar3 != (System_String_array *)0x0) {
        iVar1 = (int)pSVar3->max_length;
        if (iVar1 != 0) {
          __this_01 = (System_String_o *)0x0;
          iVar2 = System_Int32__Parse(pSVar3->m_Items[0],(MethodInfo *)0x0);
          if (iVar1 == 1) {
            __this_00 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
            a = 0xff;
            g = iVar2;
            b = iVar2;
label_04077551:
            Utility_Color255___ctor(__this_00,iVar2,g,b,a,(MethodInfo *)0x0);
            return (Il2CppObject *)__this_00;
          }
          if (1 < (uint)pSVar3->max_length) {
            __this_01 = (System_String_o *)0x0;
            g = System_Int32__Parse(pSVar3->m_Items[1],(MethodInfo *)0x0);
            if (2 < (uint)pSVar3->max_length) {
              __this_01 = (System_String_o *)0x0;
              b = System_Int32__Parse(pSVar3->m_Items[2],(MethodInfo *)0x0);
              if (3 < (uint)pSVar3->max_length) {
                a = System_Int32__Parse(pSVar3->m_Items[3],(MethodInfo *)0x0);
                __this_00 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
                goto label_04077551;
              }
            }
          }
        }
        il2cpp_runtime_helper_022b2ca0();
      }
    }
    il2cpp_runtime_helper_022b2c90();
    s = (System_String_o *)0x0;
    if (__this_01 != (System_String_o *)0x0) {
      s = (System_String_o *)&g_data_0000002d;
      pSVar3 = System_String__Split(__this_01,0x2d,0,(MethodInfo *)0x0);
      if (pSVar3 != (System_String_array *)0x0) {
        if ((int)pSVar3->max_length != 0) {
          s = (System_String_o *)0x0;
          System_Single__Parse(pSVar3->m_Items[0],(MethodInfo *)0x0);
          if (1 < (uint)pSVar3->max_length) {
            s = (System_String_o *)0x0;
            System_Single__Parse(pSVar3->m_Items[1],(MethodInfo *)0x0);
            if (2 < (uint)pSVar3->max_length) {
              System_Single__Parse(pSVar3->m_Items[2],(MethodInfo *)0x0);
              return extraout_RAX;
            }
          }
        }
        il2cpp_runtime_helper_022b2ca0();
      }
    }
    il2cpp_runtime_helper_022b2c90();
    iVar2 = System_Int32__Parse(s,(MethodInfo *)0x0);
    return (Il2CppObject *)CONCAT44(extraout_var,iVar2);
  case 5:
    iVar2 = System_Int32__Parse(item,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Convert + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    System_Convert__ToBoolean_3c1c650(iVar2,(MethodInfo *)0x0);
    uVar4 = g_data_057b9b98;
    break;
  case 6:
    Weather_WeatherSchedule__DeserializeVector3(__this,item,method_00);
    uVar4 = TypeInfo_Vector3;
    break;
  default:
    item = (System_String_o *)0x0;
    goto switchD_0407738f_caseD_2;
  }
  item = (System_String_o *)il2cpp_runtime_helper_02304f30(uVar4,&stack0xffffffffffffffd8);
switchD_0407738f_caseD_2:
  return (Il2CppObject *)item;
}


// Weather.WeatherSchedule$$DeserializeColor
// il2cpp: Utility_Color255_o* Weather_WeatherSchedule__DeserializeColor (Weather_WeatherSchedule_o* __this, System_String_o* item, const MethodInfo* method);
// 0x4077460

Utility_Color255_o *
Weather_WeatherSchedule__DeserializeColor
          (Weather_WeatherSchedule_o *__this,System_String_o *item,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  int32_t g;
  int32_t b;
  int32_t a;
  System_String_array *pSVar3;
  Utility_Color255_o *__this_00;
  Utility_Color255_o *extraout_RAX;
  undefined4 extraout_var;
  System_String_o *__this_01;
  System_String_o *s;
  
  __this_01 = item;
  if (g_data_057ac329 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
    g_data_057ac329 = '\x01';
  }
  if (item != (System_String_o *)0x0) {
    __this_01 = (System_String_o *)&g_data_0000002d;
    pSVar3 = System_String__Split(item,0x2d,0,(MethodInfo *)0x0);
    if (pSVar3 != (System_String_array *)0x0) {
      iVar1 = (int)pSVar3->max_length;
      if (iVar1 != 0) {
        __this_01 = (System_String_o *)0x0;
        iVar2 = System_Int32__Parse(pSVar3->m_Items[0],(MethodInfo *)0x0);
        if (iVar1 == 1) {
          __this_00 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
          a = 0xff;
          g = iVar2;
          b = iVar2;
label_04077551:
          Utility_Color255___ctor(__this_00,iVar2,g,b,a,(MethodInfo *)0x0);
          return __this_00;
        }
        if (1 < (uint)pSVar3->max_length) {
          __this_01 = (System_String_o *)0x0;
          g = System_Int32__Parse(pSVar3->m_Items[1],(MethodInfo *)0x0);
          if (2 < (uint)pSVar3->max_length) {
            __this_01 = (System_String_o *)0x0;
            b = System_Int32__Parse(pSVar3->m_Items[2],(MethodInfo *)0x0);
            if (3 < (uint)pSVar3->max_length) {
              a = System_Int32__Parse(pSVar3->m_Items[3],(MethodInfo *)0x0);
              __this_00 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
              goto label_04077551;
            }
          }
        }
      }
      il2cpp_runtime_helper_022b2ca0();
    }
  }
  il2cpp_runtime_helper_022b2c90();
  s = (System_String_o *)0x0;
  if (__this_01 != (System_String_o *)0x0) {
    s = (System_String_o *)&g_data_0000002d;
    pSVar3 = System_String__Split(__this_01,0x2d,0,(MethodInfo *)0x0);
    if (pSVar3 != (System_String_array *)0x0) {
      if ((int)pSVar3->max_length != 0) {
        s = (System_String_o *)0x0;
        System_Single__Parse(pSVar3->m_Items[0],(MethodInfo *)0x0);
        if (1 < (uint)pSVar3->max_length) {
          s = (System_String_o *)0x0;
          System_Single__Parse(pSVar3->m_Items[1],(MethodInfo *)0x0);
          if (2 < (uint)pSVar3->max_length) {
            System_Single__Parse(pSVar3->m_Items[2],(MethodInfo *)0x0);
            return extraout_RAX;
          }
        }
      }
      il2cpp_runtime_helper_022b2ca0();
    }
  }
  il2cpp_runtime_helper_022b2c90();
  iVar2 = System_Int32__Parse(s,(MethodInfo *)0x0);
  return (Utility_Color255_o *)CONCAT44(extraout_var,iVar2);
}


// Weather.WeatherSchedule$$DeserializeColorValue
// il2cpp: int32_t Weather_WeatherSchedule__DeserializeColorValue (Weather_WeatherSchedule_o* __this, System_String_o* str, const MethodInfo* method);
// 0x4077600

int32_t Weather_WeatherSchedule__DeserializeColorValue
                  (Weather_WeatherSchedule_o *__this,System_String_o *str,MethodInfo *method)

{
  int32_t iVar1;
  
  iVar1 = System_Int32__Parse(str,(MethodInfo *)0x0);
  return iVar1;
}


// Weather.WeatherSchedule$$DeserializeVector3
// il2cpp: UnityEngine_Vector3_o Weather_WeatherSchedule__DeserializeVector3 (Weather_WeatherSchedule_o* __this, System_String_o* item, const MethodInfo* method);
// 0x4077580

UnityEngine_Vector3_o
Weather_WeatherSchedule__DeserializeVector3
          (Weather_WeatherSchedule_o *__this,System_String_o *item,MethodInfo *method)

{
  System_String_array *pSVar1;
  System_String_o *s;
  float fVar2;
  float fVar3;
  undefined4 extraout_XMM0_Da;
  float in_XMM1_Da;
  UnityEngine_Vector3_o UVar4;
  UnityEngine_Vector3_o UVar5;
  undefined4 extraout_XMM0_Db;
  
  s = (System_String_o *)0x0;
  if (item != (System_String_o *)0x0) {
    s = (System_String_o *)&g_data_0000002d;
    pSVar1 = System_String__Split(item,0x2d,0,(MethodInfo *)0x0);
    if (pSVar1 != (System_String_array *)0x0) {
      if ((int)pSVar1->max_length != 0) {
        s = (System_String_o *)0x0;
        UVar4.fields.x = System_Single__Parse(pSVar1->m_Items[0],(MethodInfo *)0x0);
        if (1 < (uint)pSVar1->max_length) {
          s = (System_String_o *)0x0;
          fVar2 = System_Single__Parse(pSVar1->m_Items[1],(MethodInfo *)0x0);
          if (2 < (uint)pSVar1->max_length) {
            fVar3 = System_Single__Parse(pSVar1->m_Items[2],(MethodInfo *)0x0);
            UVar4.fields.y = fVar2;
            UVar4.fields.z = fVar3;
            return (UnityEngine_Vector3_o)UVar4.fields;
          }
        }
      }
      il2cpp_runtime_helper_022b2ca0();
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Int32__Parse(s,(MethodInfo *)0x0);
  UVar5.fields.y = (float)extraout_XMM0_Db;
  UVar5.fields.x = (float)extraout_XMM0_Da;
  UVar5.fields.z = in_XMM1_Da;
  return (UnityEngine_Vector3_o)UVar5.fields;
}


// Weather.WeatherSchedule$$.cctor
// il2cpp: void Weather_WeatherSchedule___cctor (const MethodInfo* method);
// 0x4077610

void Weather_WeatherSchedule___cctor(MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_Dictionary_string__T__o *pSVar2;
  
  if (g_data_057ac32a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_Weather_WeatherAction_EnumToD);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_Weather_WeatherEffect_EnumToD);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_Weather_WeatherValueSelectTyp);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherSchedule);
    g_data_057ac32a = '\x01';
  }
  if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = Utility_Util__EnumToDict_Int32Enum_(MethodInfo_Dictionary_2_System_String_Weather_WeatherAction_EnumToD);
  **(undefined8 **)(TypeInfo_WeatherSchedule + 0xb8) = pSVar2;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_WeatherSchedule + 0xb8),pSVar2);
  pSVar2 = Utility_Util__EnumToDict_Int32Enum_(MethodInfo_Dictionary_2_System_String_Weather_WeatherEffect_EnumToD);
  lVar1 = *(long *)(TypeInfo_WeatherSchedule + 0xb8);
  *(System_Collections_Generic_Dictionary_string__T__o **)(lVar1 + 8) = pSVar2;
  il2cpp_runtime_helper_022b4080(lVar1 + 8,pSVar2);
  pSVar2 = Utility_Util__EnumToDict_Int32Enum_(MethodInfo_Dictionary_2_System_String_Weather_WeatherValueSelectTyp);
  lVar1 = *(long *)(TypeInfo_WeatherSchedule + 0xb8);
  *(System_Collections_Generic_Dictionary_string__T__o **)(lVar1 + 0x10) = pSVar2;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x10,pSVar2);
  return;
}


