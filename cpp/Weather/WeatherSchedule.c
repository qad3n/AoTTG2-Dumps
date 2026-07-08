// Type: Weather.WeatherSchedule
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Weather/WeatherSchedule.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Weather/WeatherSchedule.cs  [CHANGED since prior version]
// --------------------------------

// Weather.WeatherSchedule$$.ctor
// il2cpp: void Weather_WeatherSchedule___ctor (Weather_WeatherSchedule_o* __this, const MethodInfo* method);
// 0x3d80200

void Weather_WeatherSchedule___ctor(Weather_WeatherSchedule_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_WeatherEvent__o *__this_00;
  
  if (DAT_0570266f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_List_1_Weather_WeatherEvent);
    il2cpp_init_method_metadata(&TypeInfo_List_WeatherEvent);
    DAT_0570266f = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_WeatherEvent__o *)il2cpp_runtime_glue(TypeInfo_List_WeatherEvent);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_Weather_WeatherEvent);
  (__this->fields).Events = __this_00;
  il2cpp_runtime_glue(&__this->fields);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Weather.WeatherSchedule$$.ctor
// il2cpp: void Weather_WeatherSchedule___ctor (Weather_WeatherSchedule_o* __this, System_String_o* csv, const MethodInfo* method);
// 0x3d80280

void Weather_WeatherSchedule___ctor
               (Weather_WeatherSchedule_o *__this,System_String_o *csv,MethodInfo *method)

{
  System_Collections_Generic_List_WeatherEvent__o *__this_00;
  MethodInfo *method_00;
  
  if (DAT_05702670 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_List_1_Weather_WeatherEvent);
    il2cpp_init_method_metadata(&TypeInfo_List_WeatherEvent);
    DAT_05702670 = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_WeatherEvent__o *)il2cpp_runtime_glue(TypeInfo_List_WeatherEvent);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_Weather_WeatherEvent);
  (__this->fields).Events = __this_00;
  il2cpp_runtime_glue(&__this->fields);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  Weather_WeatherSchedule__DeserializeFromCSV(__this,csv,method_00);
  return;
}


// Weather.WeatherSchedule$$SerializeToCSV
// il2cpp: System_String_o* Weather_WeatherSchedule__SerializeToCSV (Weather_WeatherSchedule_o* __this, const MethodInfo* method);
// 0x3d80680

/* WARNING: Removing unreachable block (ram,0x03d80ca9) */
/* WARNING: Removing unreachable block (ram,0x03d80de7) */
/* WARNING: Removing unreachable block (ram,0x03d80cb1) */
/* WARNING: Removing unreachable block (ram,0x03d80e68) */

System_String_o *
Weather_WeatherSchedule__SerializeToCSV(Weather_WeatherSchedule_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_WeatherEvent__o *__this_00;
  System_Collections_Generic_List_object__o *pSVar3;
  System_Collections_Generic_List_float__o *__this_01;
  MethodInfo *pMVar4;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  long lVar5;
  Weather_WeatherEvent_o *__this_06;
  bool_conflict bVar6;
  int iVar7;
  int32_t type;
  _union_13 _Var8;
  System_Collections_Generic_List_object__o *__this_07;
  System_String_o *pSVar9;
  Il2CppObject *pIVar10;
  System_String_o *str2;
  System_String_array *pSVar11;
  Il2CppClass *item;
  System_Object_array *method_00;
  int32_t iVar12;
  float __this_08;
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
  
  if (DAT_05702671 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_WeatherEvent_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Object_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_System_Object__GetEnumerato);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_Weather_WeatherEvent__GetEn);
    il2cpp_init_method_metadata(&MethodInfo_String___ToArray);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_Object_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Single_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&TypeInfo_WeatherAction);
    il2cpp_init_method_metadata(&TypeInfo_WeatherEffect);
    il2cpp_init_method_metadata(&TypeInfo_WeatherValueSelectType);
    il2cpp_init_method_metadata(&";\n");
    il2cpp_init_method_metadata(&",");
    DAT_05702671 = '\x01';
  }
  pIStack_68 = (Il2CppClass *)0x0;
  pIStack_60 = (Il2CppType *)0x0;
  pWStack_58 = (Weather_WeatherEvent_o *)0x0;
  _Stack_48.genericMethod = (void *)0x0;
  pIStack_40 = (Il2CppType *)0x0;
  pIStack_38 = (Il2CppObject *)0x0;
  _Var8.rgctx_data = (Il2CppRGCTXData *)il2cpp_runtime_glue(TypeInfo_List_string);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)_Var8.rgctx_data,MethodInfo_List_1_System_String);
  __this_00 = (__this->fields).Events;
  if (__this_00 != (System_Collections_Generic_List_WeatherEvent__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffff78,
               (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T__Enumerator_Weather_WeatherEvent__GetEn);
    pWStack_58 = (Weather_WeatherEvent_o *)
                 CONCAT44(in_stack_ffffffffffffff8c,in_stack_ffffffffffffff88);
    pIStack_68 = (Il2CppClass *)CONCAT44(in_stack_ffffffffffffff7c,in_stack_ffffffffffffff78);
    pIStack_60 = in_stack_ffffffffffffff80;
    _Stack_50.rgctx_data = _Var8.rgctx_data;
    while (__this_02.fields._list._4_4_ = in_stack_ffffffffffffff7c,
          __this_02.fields._list._0_4_ = in_stack_ffffffffffffff78,
          __this_02.fields._8_8_ = in_stack_ffffffffffffff80,
          __this_02.fields._current._0_4_ = in_stack_ffffffffffffff88,
          __this_02.fields._current._4_4_ = in_stack_ffffffffffffff8c,
          bVar6 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (__this_02,(MethodInfo_3185E20 *)&pIStack_68), __this_06 = pWStack_58,
          (char)bVar6 != '\0') {
      __this_07 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_string);
      System_Collections_Generic_List<object>___ctor(__this_07,MethodInfo_List_1_System_String);
      if (__this_06 == (Weather_WeatherEvent_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      in_stack_ffffffffffffff78 = (float)TypeInfo_WeatherAction;
      in_stack_ffffffffffffff7c = (undefined4)((ulong)TypeInfo_WeatherAction >> 0x20);
      in_stack_ffffffffffffff80 = (Il2CppType *)0xffffffffffffffff;
      in_stack_ffffffffffffff88 = (__this_06->fields).Action;
      pSVar9 = System_Enum__ToString((System_Enum_o *)&stack0xffffffffffffff78,(MethodInfo *)0x0);
      lVar5 = MethodInfo_Void_Add;
      if (__this_07 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      piVar1 = &(__this_07->fields)._version;
      *piVar1 = *piVar1 + 1;
      method_00 = (__this_07->fields)._items;
      if (method_00 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      uVar2 = (__this_07->fields)._size;
      if (uVar2 < (uint)method_00->max_length) {
        (__this_07->fields)._size = uVar2 + 1;
        method_00->m_Items[(int)uVar2] = (Il2CppObject *)pSVar9;
        il2cpp_runtime_glue(method_00->m_Items + (int)uVar2);
      }
      else {
        method_00 = *(System_Object_array **)(*(long *)(lVar5 + 0x20) + 0xc0);
        System_Collections_Generic_List<object>__AddWithResize
                  (__this_07,(Il2CppObject *)pSVar9,(MethodInfo_35A7350 *)method_00->m_Items[10]);
      }
      if ((__this_06->fields).Effect != 0) {
        in_stack_ffffffffffffff78 = (float)TypeInfo_WeatherEffect;
        in_stack_ffffffffffffff7c = (undefined4)((ulong)TypeInfo_WeatherEffect >> 0x20);
        in_stack_ffffffffffffff80 = (Il2CppType *)0xffffffffffffffff;
        in_stack_ffffffffffffff88 = (__this_06->fields).Effect;
        pSVar9 = System_Enum__ToString((System_Enum_o *)&stack0xffffffffffffff78,(MethodInfo *)0x0);
        lVar5 = MethodInfo_Void_Add;
        piVar1 = &(__this_07->fields)._version;
        *piVar1 = *piVar1 + 1;
        method_00 = (__this_07->fields)._items;
        if (method_00 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        uVar2 = (__this_07->fields)._size;
        if (uVar2 < (uint)method_00->max_length) {
          (__this_07->fields)._size = uVar2 + 1;
          method_00->m_Items[(int)uVar2] = (Il2CppObject *)pSVar9;
          il2cpp_runtime_glue(method_00->m_Items + (int)uVar2);
        }
        else {
          method_00 = *(System_Object_array **)(*(long *)(lVar5 + 0x20) + 0xc0);
          System_Collections_Generic_List<object>__AddWithResize
                    (__this_07,(Il2CppObject *)pSVar9,(MethodInfo_35A7350 *)method_00->m_Items[10]);
        }
      }
      iVar7 = (__this_06->fields).ValueSelectType;
      if (iVar7 != 0) {
        if ((__this_06->fields).Action != 0xf) {
          in_stack_ffffffffffffff78 = (float)TypeInfo_WeatherValueSelectType;
          in_stack_ffffffffffffff7c = (undefined4)((ulong)TypeInfo_WeatherValueSelectType >> 0x20);
          in_stack_ffffffffffffff80 = (Il2CppType *)0xffffffffffffffff;
          pSVar9 = System_Enum__ToString
                             ((System_Enum_o *)&stack0xffffffffffffff78,(MethodInfo *)0x0);
          lVar5 = MethodInfo_Void_Add;
          piVar1 = &(__this_07->fields)._version;
          *piVar1 = *piVar1 + 1;
          method_00 = (__this_07->fields)._items;
          if (method_00 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          uVar2 = (__this_07->fields)._size;
          if (uVar2 < (uint)method_00->max_length) {
            (__this_07->fields)._size = uVar2 + 1;
            method_00->m_Items[(int)uVar2] = (Il2CppObject *)pSVar9;
            il2cpp_runtime_glue(method_00->m_Items + (int)uVar2,pSVar9);
            in_stack_ffffffffffffff88 = iVar7;
          }
          else {
            method_00 = *(System_Object_array **)(*(long *)(lVar5 + 0x20) + 0xc0);
            System_Collections_Generic_List<object>__AddWithResize
                      (__this_07,(Il2CppObject *)pSVar9,(MethodInfo_35A7350 *)method_00->m_Items[10]
                      );
            in_stack_ffffffffffffff88 = iVar7;
          }
          iVar7 = (__this_06->fields).ValueSelectType;
        }
        pSVar3 = (__this_06->fields).Values;
        if (iVar7 == 3) {
          if (pSVar3 == (System_Collections_Generic_List_object__o *)0x0) {
LAB_03d80e31:
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          iVar12 = 0;
          if (0 < (pSVar3->fields)._size) {
            do {
              type = Weather_WeatherEvent__GetValueType(__this_06,(MethodInfo *)0x0);
              pSVar3 = (__this_06->fields).Values;
              if (pSVar3 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              pIVar10 = System_Collections_Generic_List<object>__get_Item
                                  (pSVar3,iVar12,MethodInfo_Object_get_Item);
              __this_01 = (__this_06->fields).Weights;
              if (__this_01 == (System_Collections_Generic_List_float__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              in_stack_ffffffffffffff78 =
                   System_Collections_Generic_List<float>__get_Item(__this_01,iVar12,MethodInfo_Single_get_Item);
              if (DAT_05702674 == '\0') {
                il2cpp_init_method_metadata(&"-");
                DAT_05702674 = '\x01';
              }
              pSVar9 = Weather_WeatherSchedule__SerializeValue
                                 (__this,type,pIVar10,(MethodInfo *)method_00);
              str2 = System_Single__ToString(__this_08,(MethodInfo *)&stack0xffffffffffffff78);
              pSVar9 = System_String__Concat(pSVar9,"-",str2,(MethodInfo *)0x0);
              lVar5 = MethodInfo_Void_Add;
              piVar1 = &(__this_07->fields)._version;
              *piVar1 = *piVar1 + 1;
              method_00 = (__this_07->fields)._items;
              if (method_00 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              uVar2 = (__this_07->fields)._size;
              if (uVar2 < (uint)method_00->max_length) {
                (__this_07->fields)._size = uVar2 + 1;
                method_00->m_Items[(int)uVar2] = (Il2CppObject *)pSVar9;
                il2cpp_runtime_glue(method_00->m_Items + (int)uVar2,pSVar9);
              }
              else {
                method_00 = *(System_Object_array **)(*(long *)(lVar5 + 0x20) + 0xc0);
                System_Collections_Generic_List<object>__AddWithResize
                          (__this_07,(Il2CppObject *)pSVar9,
                           (MethodInfo_35A7350 *)method_00->m_Items[10]);
              }
              iVar12 = iVar12 + 1;
              pSVar3 = (__this_06->fields).Values;
              if (pSVar3 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03d80e31;
            } while (iVar12 < (pSVar3->fields)._size);
          }
        }
        else {
          if (pSVar3 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          System_Collections_Generic_List<object>__GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffff78,
                     pSVar3,MethodInfo_List_1_T__Enumerator_System_Object__GetEnumerato);
          pIStack_38 = (Il2CppObject *)CONCAT44(in_stack_ffffffffffffff8c,in_stack_ffffffffffffff88)
          ;
          _Stack_48._4_4_ = in_stack_ffffffffffffff7c;
          _Stack_48._0_4_ = in_stack_ffffffffffffff78;
          pIStack_40 = in_stack_ffffffffffffff80;
          while (__this_03.fields._list._4_4_ = in_stack_ffffffffffffff7c,
                __this_03.fields._list._0_4_ = in_stack_ffffffffffffff78,
                __this_03.fields._8_8_ = in_stack_ffffffffffffff80,
                __this_03.fields._current._0_4_ = in_stack_ffffffffffffff88,
                __this_03.fields._current._4_4_ = in_stack_ffffffffffffff8c,
                bVar6 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                  (__this_03,(MethodInfo_3185E20 *)&_Stack_48), pIVar10 = pIStack_38
                , (char)bVar6 != '\0') {
            iVar12 = Weather_WeatherEvent__GetValueType(__this_06,(MethodInfo *)0x0);
            pSVar9 = Weather_WeatherSchedule__SerializeValue
                               (__this,iVar12,pIVar10,(MethodInfo *)method_00);
            lVar5 = MethodInfo_Void_Add;
            piVar1 = &(__this_07->fields)._version;
            *piVar1 = *piVar1 + 1;
            method_00 = (__this_07->fields)._items;
            if (method_00 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            uVar2 = (__this_07->fields)._size;
            if (uVar2 < (uint)method_00->max_length) {
              (__this_07->fields)._size = uVar2 + 1;
              method_00->m_Items[(int)uVar2] = (Il2CppObject *)pSVar9;
              il2cpp_runtime_glue(method_00->m_Items + (int)uVar2,pSVar9);
            }
            else {
              method_00 = *(System_Object_array **)(*(long *)(lVar5 + 0x20) + 0xc0);
              System_Collections_Generic_List<object>__AddWithResize
                        (__this_07,(Il2CppObject *)pSVar9,
                         (MethodInfo_35A7350 *)method_00->m_Items[10]);
            }
          }
          __this_04.fields._list._4_4_ = in_stack_ffffffffffffff7c;
          __this_04.fields._list._0_4_ = in_stack_ffffffffffffff78;
          __this_04.fields._8_8_ = in_stack_ffffffffffffff80;
          __this_04.fields._current._0_4_ = in_stack_ffffffffffffff88;
          __this_04.fields._current._4_4_ = in_stack_ffffffffffffff8c;
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (__this_04,(MethodInfo_3185E10 *)&_Stack_48);
        }
      }
      pSVar11 = (System_String_array *)
                System_Collections_Generic_List<object>__ToArray(__this_07,MethodInfo_String___ToArray);
      _Var8 = _Stack_50;
      item = (Il2CppClass *)System_String__Join(",",pSVar11,(MethodInfo *)0x0);
      lVar5 = MethodInfo_Void_Add;
      if (_Var8.rgctx_data == (Il2CppRGCTXData *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      *(int32_t *)((long)_Var8.rgctx_data + 0x1c) = *(int32_t *)((long)_Var8.rgctx_data + 0x1c) + 1;
      pMVar4 = _Var8.rgctx_data[2].method;
      if (pMVar4 == (MethodInfo *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      uVar2 = *(uint *)(_Var8.rgctx_data + 3);
      if (uVar2 < *(uint *)&pMVar4->name) {
        *(uint *)(_Var8.rgctx_data + 3) = uVar2 + 1;
        (&pMVar4->klass)[(int)uVar2] = item;
        il2cpp_runtime_glue(&pMVar4->klass + (int)uVar2,item);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)_Var8.rgctx_data,
                   (Il2CppObject *)item,
                   *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
      }
    }
    __this_05.fields._list._4_4_ = in_stack_ffffffffffffff7c;
    __this_05.fields._list._0_4_ = in_stack_ffffffffffffff78;
    __this_05.fields._8_8_ = in_stack_ffffffffffffff80;
    __this_05.fields._current._0_4_ = in_stack_ffffffffffffff88;
    __this_05.fields._current._4_4_ = in_stack_ffffffffffffff8c;
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (__this_05,(MethodInfo_3185E10 *)&pIStack_68);
    if (_Stack_50.rgctx_data != (Il2CppRGCTXData *)0x0) {
      pSVar11 = (System_String_array *)
                System_Collections_Generic_List<object>__ToArray
                          ((System_Collections_Generic_List_object__o *)_Stack_50.rgctx_data,
                           MethodInfo_String___ToArray);
      pSVar9 = System_String__Join(";\n",pSVar11,(MethodInfo *)0x0);
      return pSVar9;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Weather.WeatherSchedule$$DeserializeFromCSV
// il2cpp: System_String_o* Weather_WeatherSchedule__DeserializeFromCSV (Weather_WeatherSchedule_o* __this, System_String_o* csv, const MethodInfo* method);
// 0x3d80300

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
  bool_conflict bVar7;
  System_String_array *pSVar8;
  System_String_o *a;
  System_String_array *pSVar9;
  Weather_WeatherEvent_o *item;
  MethodInfo *method_00;
  uint uVar10;
  
  if (DAT_05702672 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&"//");
    il2cpp_init_method_metadata(&"");
    DAT_05702672 = '\x01';
  }
  pSVar4 = (__this->fields).Events;
  if (pSVar4 != (System_Collections_Generic_List_WeatherEvent__o *)0x0) {
    piVar1 = &(pSVar4->fields)._version;
    *piVar1 = *piVar1 + 1;
    iVar2 = (pSVar4->fields)._size;
    (pSVar4->fields)._size = 0;
    if (0 < iVar2) {
      System_Array__Clear((System_Array_o *)(pSVar4->fields)._items,0,iVar2,(MethodInfo *)0x0);
    }
    if ((csv != (System_String_o *)0x0) &&
       (pSVar8 = System_String__Split(csv,0x3b,0,(MethodInfo *)0x0),
       pSVar8 != (System_String_array *)0x0)) {
      iVar2 = (int)pSVar8->max_length;
      if (iVar2 < 1) {
        return "";
      }
      uVar10 = 0;
      if (iVar2 != 0) {
        do {
          if (pSVar8->m_Items[(int)uVar10] == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          a = System_String__Trim(pSVar8->m_Items[(int)uVar10],(MethodInfo *)0x0);
          if ((uint)pSVar8->max_length <= uVar10) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          if (pSVar8->m_Items[(int)uVar10] == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          pSVar9 = System_String__Split(pSVar8->m_Items[(int)uVar10],10,0,(MethodInfo *)0x0);
          if (pSVar9 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          bVar7 = System_String__op_Inequality
                            (a,(System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),
                             (MethodInfo *)0x0);
          if ((char)bVar7 != '\0') {
            if (a == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            bVar7 = System_String__StartsWith(a,"//",(MethodInfo *)0x0);
            if ((char)bVar7 == '\0') {
              pSVar4 = (__this->fields).Events;
              item = Weather_WeatherSchedule__DeserializeLine(__this,a,method_00);
              lVar6 = MethodInfo_Void_Add;
              if (pSVar4 == (System_Collections_Generic_List_WeatherEvent__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              piVar1 = &(pSVar4->fields)._version;
              *piVar1 = *piVar1 + 1;
              pWVar5 = (pSVar4->fields)._items;
              if (pWVar5 == (Weather_WeatherEvent_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              uVar3 = (pSVar4->fields)._size;
              if (uVar3 < (uint)pWVar5->max_length) {
                (pSVar4->fields)._size = uVar3 + 1;
                pWVar5->m_Items[(int)uVar3] = item;
                il2cpp_runtime_glue(pWVar5->m_Items + (int)uVar3);
              }
              else {
                System_Collections_Generic_List<object>__AddWithResize
                          ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)item,
                           *(MethodInfo_35A7350 **)
                            (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
              }
            }
          }
          uVar10 = uVar10 + 1;
          uVar3 = (uint)pSVar8->max_length;
          if ((int)uVar3 <= (int)uVar10) {
            return "";
          }
        } while (uVar10 < uVar3);
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Weather.WeatherSchedule$$SerializeValue
// il2cpp: System_String_o* Weather_WeatherSchedule__SerializeValue (Weather_WeatherSchedule_o* __this, int32_t type, Il2CppObject* value, const MethodInfo* method);
// 0x3d80fa0

System_String_o *
Weather_WeatherSchedule__SerializeValue
          (Weather_WeatherSchedule_o *__this,int32_t type,Il2CppObject *value,MethodInfo *method)

{
  undefined4 *puVar1;
  byte *pbVar2;
  UnityEngine_Color_Fields *pUVar3;
  int32_t *piVar4;
  UnityEngine_Vector3_Fields *pUVar5;
  System_String_o *pSVar6;
  MethodInfo *pMVar7;
  float __this_00;
  int32_t local_20;
  undefined4 local_1c;
  
  if (DAT_05702673 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Color);
    il2cpp_init_method_metadata(&TypeInfo_Convert);
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    il2cpp_init_method_metadata(&";");
    il2cpp_init_method_metadata(&",");
    il2cpp_init_method_metadata(&"");
    DAT_05702673 = '\x01';
  }
  local_1c = 0;
  local_20 = 0;
  switch(type) {
  case 1:
    if (value == (Il2CppObject *)0x0) goto LAB_03d81223;
    if ((value->klass->_1).element_class != *(Il2CppClass **)(DAT_05711098 + 0x40))
    goto LAB_03d81228;
    puVar1 = (undefined4 *)il2cpp_glue_022c7330(value);
    local_1c = *puVar1;
    value = (Il2CppObject *)
            System_Single__ToString(__this_00,(MethodInfo *)&stack0xffffffffffffffe4);
    break;
  case 2:
    if (value == (Il2CppObject *)0x0) goto LAB_03d81223;
    if ((value->klass->_1).element_class != *(Il2CppClass **)(DAT_05711068 + 0x40))
    goto LAB_03d81228;
    piVar4 = (int32_t *)il2cpp_glue_022c7330(value);
    local_20 = *piVar4;
    goto LAB_03d81160;
  case 3:
    if ((value != (Il2CppObject *)0x0) && (value->klass != DAT_057110b0)) {
LAB_03d81228:
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(value);
    }
    break;
  case 4:
    if (value == (Il2CppObject *)0x0) goto LAB_03d81223;
    if ((value->klass->_1).element_class != (TypeInfo_Color->field8_0x40).genericMethod)
    goto LAB_03d81228;
    pMVar7 = TypeInfo_Color;
    pUVar3 = (UnityEngine_Color_Fields *)il2cpp_glue_022c7330(value);
    value = (Il2CppObject *)
            Weather_WeatherSchedule__SerializeColor(__this,(UnityEngine_Color_o)*pUVar3,pMVar7);
    break;
  case 5:
    if (*(int *)(TypeInfo_Convert + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (value == (Il2CppObject *)0x0) goto LAB_03d81223;
    if ((value->klass->_1).element_class != *(Il2CppClass **)(DAT_05711048 + 0x40))
    goto LAB_03d81228;
    pbVar2 = (byte *)il2cpp_glue_022c7330(value);
    local_20 = System_Convert__ToInt32((uint)*pbVar2,(MethodInfo *)0x0);
LAB_03d81160:
    value = (Il2CppObject *)System_Int32__ToString((int32_t)&local_20,(MethodInfo *)0x0);
    break;
  case 6:
    if (value == (Il2CppObject *)0x0) goto LAB_03d81223;
    if ((value->klass->_1).element_class != (TypeInfo_Vector3->field8_0x40).genericMethod)
    goto LAB_03d81228;
    pMVar7 = TypeInfo_Vector3;
    pUVar5 = (UnityEngine_Vector3_Fields *)il2cpp_glue_022c7330();
    value = (Il2CppObject *)
            Weather_WeatherSchedule__SerializeVector3
                      ((Weather_WeatherSchedule_o *)value,(UnityEngine_Vector3_o)*pUVar5,pMVar7);
    break;
  default:
    value = (Il2CppObject *)"";
    if ("" == (System_String_o *)0x0) goto LAB_03d81223;
    goto LAB_03d811b4;
  }
  if ((System_String_o *)value != (System_String_o *)0x0) {
LAB_03d811b4:
    pSVar6 = System_String__Replace
                       ((System_String_o *)value,",",
                        *(System_String_o **)DAT_057110b0->static_fields,(MethodInfo *)0x0);
    if (pSVar6 != (System_String_o *)0x0) {
      pSVar6 = System_String__Replace
                         (pSVar6,";",*(System_String_o **)DAT_057110b0->static_fields,
                          (MethodInfo *)0x0);
      return pSVar6;
    }
  }
LAB_03d81223:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Weather.WeatherSchedule$$SerializeRandomListValue
// il2cpp: System_String_o* Weather_WeatherSchedule__SerializeRandomListValue (Weather_WeatherSchedule_o* __this, int32_t type, Il2CppObject* value, float weight, const MethodInfo* method);
// 0x3d80f30

System_String_o *
Weather_WeatherSchedule__SerializeRandomListValue
          (Weather_WeatherSchedule_o *__this,int32_t type,Il2CppObject *value,float weight,
          MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *str2;
  float __this_00;
  float fStack_1c;
  
  fStack_1c = weight;
  if (DAT_05702674 == '\0') {
    il2cpp_init_method_metadata(&"-");
    DAT_05702674 = '\x01';
  }
  pSVar1 = Weather_WeatherSchedule__SerializeValue(__this,type,value,method);
  str2 = System_Single__ToString(__this_00,(MethodInfo *)&fStack_1c);
  pSVar1 = System_String__Concat(pSVar1,"-",str2,(MethodInfo *)0x0);
  return pSVar1;
}


// Weather.WeatherSchedule$$SerializeColor
// il2cpp: System_String_o* Weather_WeatherSchedule__SerializeColor (Weather_WeatherSchedule_o* __this, UnityEngine_Color_o color, const MethodInfo* method);
// 0x3d81710

System_String_o *
Weather_WeatherSchedule__SerializeColor
          (Weather_WeatherSchedule_o *__this,UnityEngine_Color_o color,MethodInfo *method)

{
  System_String_array *value;
  System_String_o *pSVar1;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  int local_5c;
  undefined1 local_58 [16];
  undefined1 local_48 [8];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_38 [16];
  float local_28;
  float fStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uStack_40 = in_XMM1_Dc;
  local_48 = color.fields._8_8_;
  uStack_3c = in_XMM1_Dd;
  local_58._8_4_ = in_XMM0_Dc;
  local_58._0_8_ = color.fields._0_8_;
  local_58._12_4_ = in_XMM0_Dd;
  local_38._8_4_ = in_XMM0_Dc;
  local_38._0_8_ = color.fields._0_8_;
  local_38._12_4_ = in_XMM0_Dd;
  if (DAT_05702675 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&"-");
    DAT_05702675 = '\x01';
  }
  value = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string);
  local_5c = (int)((float)local_38._0_4_ * 255.0);
  pSVar1 = System_Int32__ToString((int32_t)&local_5c,(MethodInfo *)0x0);
  if (value == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)value->max_length != 0) {
    value->m_Items[0] = pSVar1;
    il2cpp_runtime_glue(value->m_Items);
    local_58._0_4_ = local_58._4_4_;
    local_5c = (int)((float)local_58._4_4_ * 255.0);
    pSVar1 = System_Int32__ToString((int32_t)&local_5c,(MethodInfo *)0x0);
    if (1 < (uint)value->max_length) {
      value->m_Items[1] = pSVar1;
      il2cpp_runtime_glue(value->m_Items + 1);
      local_5c = (int)((float)local_48._0_4_ * 255.0);
      pSVar1 = System_Int32__ToString((int32_t)&local_5c,(MethodInfo *)0x0);
      if (2 < (uint)value->max_length) {
        value->m_Items[2] = pSVar1;
        il2cpp_runtime_glue(value->m_Items + 2);
        local_28 = (float)local_48._4_4_;
        fStack_24 = (float)local_48._4_4_;
        uStack_20 = uStack_40;
        uStack_1c = uStack_3c;
        local_5c = (int)((float)local_48._4_4_ * 255.0);
        pSVar1 = System_Int32__ToString((int32_t)&local_5c,(MethodInfo *)0x0);
        if (3 < (uint)value->max_length) {
          value->m_Items[3] = pSVar1;
          il2cpp_runtime_glue(value->m_Items + 3,pSVar1);
          if ((float)local_38._0_4_ == (float)local_48._0_4_) {
            if (((((float)local_38._0_4_ == (float)local_58._0_4_) &&
                 (!NAN((float)local_38._0_4_) && !NAN((float)local_58._0_4_))) && (local_28 == 1.0))
               && (!NAN(local_28))) {
              if ((int)value->max_length != 0) {
                return value->m_Items[0];
              }
              goto LAB_03d818cc;
            }
          }
          pSVar1 = System_String__Join("-",value,(MethodInfo *)0x0);
          return pSVar1;
        }
      }
    }
  }
LAB_03d818cc:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Weather.WeatherSchedule$$SerializeColorValue
// il2cpp: System_String_o* Weather_WeatherSchedule__SerializeColorValue (Weather_WeatherSchedule_o* __this, float value, const MethodInfo* method);
// 0x3d819d0

System_String_o *
Weather_WeatherSchedule__SerializeColorValue
          (Weather_WeatherSchedule_o *__this,float value,MethodInfo *method)

{
  System_String_o *pSVar1;
  undefined1 auStack_4 [4];
  
  pSVar1 = System_Int32__ToString((int32_t)auStack_4,(MethodInfo *)0x0);
  return pSVar1;
}


// Weather.WeatherSchedule$$SerializeVector3
// il2cpp: System_String_o* Weather_WeatherSchedule__SerializeVector3 (Weather_WeatherSchedule_o* __this, UnityEngine_Vector3_o v, const MethodInfo* method);
// 0x3d818e0

System_String_o *
Weather_WeatherSchedule__SerializeVector3
          (Weather_WeatherSchedule_o *__this,UnityEngine_Vector3_o v,MethodInfo *method)

{
  System_String_array *value;
  System_String_o *pSVar1;
  float __this_00;
  float fVar2;
  undefined1 local_20 [8];
  float local_18 [2];
  
  local_18[0] = v.fields.z;
  local_20 = v.fields._0_8_;
  if (DAT_05702676 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&"-");
    DAT_05702676 = '\x01';
  }
  value = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,3);
  pSVar1 = System_Single__ToString(__this_00,(MethodInfo *)local_20);
  if (value != (System_String_array *)0x0) {
    if ((int)value->max_length != 0) {
      value->m_Items[0] = pSVar1;
      fVar2 = (float)il2cpp_runtime_glue(value->m_Items,pSVar1);
      pSVar1 = System_Single__ToString(fVar2,(MethodInfo *)(local_20 + 4));
      if (1 < (uint)value->max_length) {
        value->m_Items[1] = pSVar1;
        fVar2 = (float)il2cpp_runtime_glue(value->m_Items + 1,pSVar1);
        pSVar1 = System_Single__ToString(fVar2,(MethodInfo *)local_18);
        if (2 < (uint)value->max_length) {
          value->m_Items[2] = pSVar1;
          il2cpp_runtime_glue(value->m_Items + 2,pSVar1);
          pSVar1 = System_String__Join("-",value,(MethodInfo *)0x0);
          return pSVar1;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Weather.WeatherSchedule$$DeserializeLine
// il2cpp: Weather_WeatherEvent_o* Weather_WeatherSchedule__DeserializeLine (Weather_WeatherSchedule_o* __this, System_String_o* line, const MethodInfo* method);
// 0x3d81230

Weather_WeatherEvent_o *
Weather_WeatherSchedule__DeserializeLine
          (Weather_WeatherSchedule_o *__this,System_String_o *line,MethodInfo *method)

{
  int32_t *piVar1;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar2;
  System_Collections_Generic_List_object__o *pSVar3;
  System_Object_array *pSVar4;
  System_Single_array *pSVar5;
  uint uVar6;
  int32_t iVar7;
  bool_conflict bVar8;
  int iVar9;
  Weather_WeatherEvent_o *__this_00;
  System_String_array *pSVar10;
  Il2CppObject *pIVar11;
  System_String_array *pSVar12;
  MethodInfo *method_00;
  MethodInfo *pMVar13;
  uint uVar14;
  long lVar15;
  MethodInfo_35DFAF0 *method_01;
  System_Collections_Generic_List_float__o *__this_01;
  ulong uVar16;
  float item;
  
  if (DAT_05702677 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_WeatherEffect_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_WeatherAction_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_WeatherValueSelectType_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&TypeInfo_WeatherEvent);
    il2cpp_init_method_metadata(&TypeInfo_WeatherSchedule);
    DAT_05702677 = '\x01';
  }
  __this_00 = (Weather_WeatherEvent_o *)il2cpp_runtime_glue(TypeInfo_WeatherEvent);
  Weather_WeatherEvent___ctor(__this_00,(MethodInfo *)0x0);
  if (line != (System_String_o *)0x0) {
    pSVar10 = System_String__Split(line,0x2c,0,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_WeatherSchedule + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (pSVar10 != (System_String_array *)0x0) {
      if ((int)pSVar10->max_length != 0) {
        if (((System_Collections_Generic_Dictionary_TKey__TValue__o *)
             **(undefined8 **)(TypeInfo_WeatherSchedule + 0xb8) ==
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) ||
           (iVar7 = System_Collections_Generic_Dictionary<object__Int32Enum>__get_Item
                              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)
                               **(undefined8 **)(TypeInfo_WeatherSchedule + 0xb8),
                               (Il2CppObject *)pSVar10->m_Items[0],MethodInfo_WeatherAction_get_Item),
           __this_00 == (Weather_WeatherEvent_o *)0x0)) goto LAB_03d816f9;
        (__this_00->fields).Action = iVar7;
        bVar8 = Weather_WeatherEvent__SupportsWeatherEffects(__this_00,(MethodInfo *)0x0);
        lVar15 = 1;
        if ((char)bVar8 != '\0') {
          if (*(int *)(TypeInfo_WeatherSchedule + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if ((uint)pSVar10->max_length < 2) goto LAB_03d816fe;
          pSVar2 = *(System_Collections_Generic_Dictionary_TKey__TValue__o **)
                    (*(long *)(TypeInfo_WeatherSchedule + 0xb8) + 8);
          if (pSVar2 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0)
          goto LAB_03d816f9;
          iVar7 = System_Collections_Generic_Dictionary<object__Int32Enum>__get_Item
                            (pSVar2,(Il2CppObject *)pSVar10->m_Items[1],MethodInfo_WeatherEffect_get_Item);
          (__this_00->fields).Effect = iVar7;
          lVar15 = 2;
        }
        uVar14 = (uint)lVar15;
        if ((__this_00->fields).Action == 0xf) {
          (__this_00->fields).ValueSelectType = 1;
          if ((int)pSVar10->max_length <= (int)uVar14) {
            return __this_00;
          }
        }
        else {
          bVar8 = Weather_WeatherEvent__SupportsWeatherValueSelectTypes(__this_00,(MethodInfo *)0x0)
          ;
          if ((char)bVar8 == '\0') {
            iVar9 = (__this_00->fields).ValueSelectType;
            uVar6 = (uint)pSVar10->max_length;
          }
          else {
            if (*(int *)(TypeInfo_WeatherSchedule + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if ((uint)pSVar10->max_length <= uVar14) goto LAB_03d816fe;
            pSVar2 = *(System_Collections_Generic_Dictionary_TKey__TValue__o **)
                      (*(long *)(TypeInfo_WeatherSchedule + 0xb8) + 0x10);
            if (pSVar2 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0)
            goto LAB_03d816f9;
            uVar14 = uVar14 + 1;
            iVar9 = System_Collections_Generic_Dictionary<object__Int32Enum>__get_Item
                              (pSVar2,(Il2CppObject *)pSVar10->m_Items[lVar15],MethodInfo_WeatherValueSelectType_get_Item);
            (__this_00->fields).ValueSelectType = iVar9;
            uVar6 = (uint)pSVar10->max_length;
          }
          if (iVar9 == 3) {
            if ((int)uVar6 <= (int)uVar14) {
              return __this_00;
            }
            uVar16 = (ulong)uVar14;
            if (uVar14 < uVar6) {
              do {
                if (pSVar10->m_Items[uVar16] == (System_String_o *)0x0) goto LAB_03d816f9;
                pMVar13 = (MethodInfo *)0x0;
                pSVar12 = System_String__Split(pSVar10->m_Items[uVar16],0x2d,0,(MethodInfo *)0x0);
                pSVar3 = (__this_00->fields).Values;
                iVar7 = Weather_WeatherEvent__GetValueType(__this_00,(MethodInfo *)0x0);
                if (pSVar12 == (System_String_array *)0x0) goto LAB_03d816f9;
                if ((int)pSVar12->max_length == 0) break;
                pIVar11 = Weather_WeatherSchedule__DeserializeValue
                                    (__this,iVar7,pSVar12->m_Items[0],pMVar13);
                lVar15 = MethodInfo_Void_Add;
                if (pSVar3 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03d816f9;
                piVar1 = &(pSVar3->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar4 = (pSVar3->fields)._items;
                if (pSVar4 == (System_Object_array *)0x0) goto LAB_03d816f9;
                uVar14 = (pSVar3->fields)._size;
                if (uVar14 < (uint)pSVar4->max_length) {
                  (pSVar3->fields)._size = uVar14 + 1;
                  pSVar4->m_Items[(int)uVar14] = pIVar11;
                  il2cpp_runtime_glue(pSVar4->m_Items + (int)uVar14);
                  __this_01 = (__this_00->fields).Weights;
                  if ((int)pSVar12->max_length < 2) goto LAB_03d81684;
LAB_03d8160e:
                  item = System_Single__Parse(pSVar12->m_Items[1],(MethodInfo *)0x0);
                  lVar15 = MethodInfo_Void_Add;
                  if (__this_01 == (System_Collections_Generic_List_float__o *)0x0)
                  goto LAB_03d816f9;
                  piVar1 = &(__this_01->fields)._version;
                  *piVar1 = *piVar1 + 1;
                  pSVar5 = (__this_01->fields)._items;
                  if (pSVar5 == (System_Single_array *)0x0) goto LAB_03d816f9;
                  uVar14 = (__this_01->fields)._size;
                  if ((uint)pSVar5->max_length <= uVar14) {
                    method_01 = *(MethodInfo_35DFAF0 **)
                                 (*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70);
                    goto LAB_03d8154a;
                  }
                  (__this_01->fields)._size = uVar14 + 1;
                  pSVar5->m_Items[(int)uVar14] = item;
                }
                else {
                  System_Collections_Generic_List<object>__AddWithResize
                            (pSVar3,pIVar11,
                             *(MethodInfo_35A7350 **)
                              (*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
                  __this_01 = (__this_00->fields).Weights;
                  if (1 < (int)pSVar12->max_length) goto LAB_03d8160e;
LAB_03d81684:
                  lVar15 = MethodInfo_Void_Add;
                  if (__this_01 == (System_Collections_Generic_List_float__o *)0x0)
                  goto LAB_03d816f9;
                  piVar1 = &(__this_01->fields)._version;
                  *piVar1 = *piVar1 + 1;
                  pSVar5 = (__this_01->fields)._items;
                  if (pSVar5 == (System_Single_array *)0x0) goto LAB_03d816f9;
                  uVar14 = (__this_01->fields)._size;
                  if (uVar14 < (uint)pSVar5->max_length) {
                    (__this_01->fields)._size = uVar14 + 1;
                    pSVar5->m_Items[(int)uVar14] = 1.0;
                  }
                  else {
                    method_01 = *(MethodInfo_35DFAF0 **)
                                 (*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70);
                    item = 1.0;
LAB_03d8154a:
                    System_Collections_Generic_List<float>__AddWithResize(__this_01,item,method_01);
                  }
                }
                uVar14 = (uint)pSVar10->max_length;
                uVar16 = uVar16 + 1;
                if ((int)uVar14 <= (int)(uint)uVar16) {
                  return __this_00;
                }
              } while ((uint)uVar16 < uVar14);
            }
            goto LAB_03d816fe;
          }
          if ((int)uVar6 <= (int)uVar14) {
            return __this_00;
          }
        }
        pMVar13 = (MethodInfo *)(ulong)uVar14;
        while( true ) {
          pSVar3 = (__this_00->fields).Values;
          iVar7 = Weather_WeatherEvent__GetValueType(__this_00,(MethodInfo *)0x0);
          method_00 = (MethodInfo *)(ulong)(uint)pSVar10->max_length;
          if (method_00 <= pMVar13) break;
          pIVar11 = Weather_WeatherSchedule__DeserializeValue
                              (__this,iVar7,pSVar10->m_Items[(long)pMVar13],method_00);
          lVar15 = MethodInfo_Void_Add;
          if (pSVar3 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03d816f9;
          piVar1 = &(pSVar3->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar4 = (pSVar3->fields)._items;
          if (pSVar4 == (System_Object_array *)0x0) goto LAB_03d816f9;
          uVar14 = (pSVar3->fields)._size;
          if (uVar14 < (uint)pSVar4->max_length) {
            (pSVar3->fields)._size = uVar14 + 1;
            pSVar4->m_Items[(int)uVar14] = pIVar11;
            il2cpp_runtime_glue(pSVar4->m_Items + (int)uVar14);
            pMVar13 = (MethodInfo *)((long)&pMVar13->methodPointer + 1);
            if ((long)(int)pSVar10->max_length <= (long)pMVar13) {
              return __this_00;
            }
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      (pSVar3,pIVar11,
                       *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
            pMVar13 = (MethodInfo *)((long)&pMVar13->methodPointer + 1);
            if ((long)(int)pSVar10->max_length <= (long)pMVar13) {
              return __this_00;
            }
          }
        }
      }
LAB_03d816fe:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
LAB_03d816f9:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Weather.WeatherSchedule$$DeserializeValue
// il2cpp: Il2CppObject* Weather_WeatherSchedule__DeserializeValue (Weather_WeatherSchedule_o* __this, int32_t type, System_String_o* item, const MethodInfo* method);
// 0x3d819f0

Il2CppObject *
Weather_WeatherSchedule__DeserializeValue
          (Weather_WeatherSchedule_o *__this,int32_t type,System_String_o *item,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  bool_conflict bVar3;
  int32_t g;
  int32_t b;
  int32_t a;
  System_String_array *pSVar4;
  Utility_Color255_o *__this_00;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  undefined8 uVar5;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  UnityEngine_Vector3_o UVar6;
  float local_28;
  float fStack_24;
  float local_20;
  undefined4 uStack_1c;
  
  method_00 = (MethodInfo *)item;
  if (DAT_05702678 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Convert);
    __this = (Weather_WeatherSchedule_o *)&TypeInfo_Vector3;
    il2cpp_init_method_metadata();
    DAT_05702678 = '\x01';
    method_00 = extraout_RDX;
  }
  switch(type) {
  case 1:
    local_28 = System_Single__Parse(item,(MethodInfo *)0x0);
    uVar5 = DAT_05711098;
    break;
  case 2:
    local_28 = (float)System_Int32__Parse(item,(MethodInfo *)0x0);
    uVar5 = DAT_05711068;
    break;
  case 3:
    goto switchD_03d81a3f_caseD_3;
  case 4:
    local_20 = (float)unaff_R13;
    uStack_1c = (undefined4)((ulong)unaff_R13 >> 0x20);
    local_28 = (float)unaff_R12;
    fStack_24 = (float)((ulong)unaff_R12 >> 0x20);
    if (DAT_05702679 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Color255);
      DAT_05702679 = '\x01';
    }
    if ((item == (System_String_o *)0x0) ||
       (pSVar4 = System_String__Split(item,0x2d,0,(MethodInfo *)0x0),
       pSVar4 == (System_String_array *)0x0)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    iVar1 = (int)pSVar4->max_length;
    if (iVar1 == 0) {
LAB_03d81c1b:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    iVar2 = System_Int32__Parse(pSVar4->m_Items[0],(MethodInfo *)0x0);
    if (iVar1 == 1) {
      __this_00 = (Utility_Color255_o *)il2cpp_runtime_glue(TypeInfo_Color255);
      a = 0xff;
      g = iVar2;
      b = iVar2;
    }
    else {
      if ((((uint)pSVar4->max_length < 2) ||
          (g = System_Int32__Parse(pSVar4->m_Items[1],(MethodInfo *)0x0),
          (uint)pSVar4->max_length < 3)) ||
         (b = System_Int32__Parse(pSVar4->m_Items[2],(MethodInfo *)0x0),
         (uint)pSVar4->max_length < 4)) goto LAB_03d81c1b;
      a = System_Int32__Parse(pSVar4->m_Items[3],(MethodInfo *)0x0);
      __this_00 = (Utility_Color255_o *)il2cpp_runtime_glue(TypeInfo_Color255);
    }
    Utility_Color255___ctor(__this_00,iVar2,g,b,a,(MethodInfo *)0x0);
    return (Il2CppObject *)__this_00;
  case 5:
    iVar2 = System_Int32__Parse(item,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Convert + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar3 = System_Convert__ToBoolean(iVar2,(MethodInfo *)0x0);
    local_28 = (float)CONCAT31(local_28._1_3_,(char)bVar3);
    uVar5 = DAT_05711048;
    break;
  case 6:
    UVar6 = Weather_WeatherSchedule__DeserializeVector3(__this,item,method_00);
    local_28 = UVar6.fields.x;
    fStack_24 = UVar6.fields.y;
    local_20 = UVar6.fields.z;
    uVar5 = TypeInfo_Vector3;
    break;
  default:
    item = (System_String_o *)0x0;
    goto switchD_03d81a3f_caseD_3;
  }
  item = (System_String_o *)il2cpp_runtime_glue(uVar5,&local_28);
switchD_03d81a3f_caseD_3:
  return (Il2CppObject *)item;
}


// Weather.WeatherSchedule$$DeserializeColor
// il2cpp: Utility_Color255_o* Weather_WeatherSchedule__DeserializeColor (Weather_WeatherSchedule_o* __this, System_String_o* item, const MethodInfo* method);
// 0x3d81b10

Utility_Color255_o *
Weather_WeatherSchedule__DeserializeColor
          (Weather_WeatherSchedule_o *__this,System_String_o *item,MethodInfo *method)

{
  int iVar1;
  int32_t r;
  int32_t g;
  int32_t b;
  int32_t a;
  System_String_array *pSVar2;
  Utility_Color255_o *__this_00;
  
  if (DAT_05702679 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Color255);
    DAT_05702679 = '\x01';
  }
  if (item != (System_String_o *)0x0) {
    pSVar2 = System_String__Split(item,0x2d,0,(MethodInfo *)0x0);
    if (pSVar2 != (System_String_array *)0x0) {
      iVar1 = (int)pSVar2->max_length;
      if (iVar1 != 0) {
        r = System_Int32__Parse(pSVar2->m_Items[0],(MethodInfo *)0x0);
        if (iVar1 == 1) {
          __this_00 = (Utility_Color255_o *)il2cpp_runtime_glue(TypeInfo_Color255);
          a = 0xff;
          g = r;
          b = r;
LAB_03d81c01:
          Utility_Color255___ctor(__this_00,r,g,b,a,(MethodInfo *)0x0);
          return __this_00;
        }
        if (1 < (uint)pSVar2->max_length) {
          g = System_Int32__Parse(pSVar2->m_Items[1],(MethodInfo *)0x0);
          if (2 < (uint)pSVar2->max_length) {
            b = System_Int32__Parse(pSVar2->m_Items[2],(MethodInfo *)0x0);
            if (3 < (uint)pSVar2->max_length) {
              a = System_Int32__Parse(pSVar2->m_Items[3],(MethodInfo *)0x0);
              __this_00 = (Utility_Color255_o *)il2cpp_runtime_glue(TypeInfo_Color255);
              goto LAB_03d81c01;
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Weather.WeatherSchedule$$DeserializeColorValue
// il2cpp: int32_t Weather_WeatherSchedule__DeserializeColorValue (Weather_WeatherSchedule_o* __this, System_String_o* str, const MethodInfo* method);
// 0x3d81cb0

int32_t Weather_WeatherSchedule__DeserializeColorValue
                  (Weather_WeatherSchedule_o *__this,System_String_o *str,MethodInfo *method)

{
  int32_t iVar1;
  
  iVar1 = System_Int32__Parse(str,(MethodInfo *)0x0);
  return iVar1;
}


// Weather.WeatherSchedule$$DeserializeVector3
// il2cpp: UnityEngine_Vector3_o Weather_WeatherSchedule__DeserializeVector3 (Weather_WeatherSchedule_o* __this, System_String_o* item, const MethodInfo* method);
// 0x3d81c30

UnityEngine_Vector3_o
Weather_WeatherSchedule__DeserializeVector3
          (Weather_WeatherSchedule_o *__this,System_String_o *item,MethodInfo *method)

{
  System_String_array *pSVar1;
  float fVar2;
  float fVar3;
  UnityEngine_Vector3_o UVar4;
  
  if (item != (System_String_o *)0x0) {
    pSVar1 = System_String__Split(item,0x2d,0,(MethodInfo *)0x0);
    if (pSVar1 != (System_String_array *)0x0) {
      if ((int)pSVar1->max_length != 0) {
        UVar4.fields.x = System_Single__Parse(pSVar1->m_Items[0],(MethodInfo *)0x0);
        if (1 < (uint)pSVar1->max_length) {
          fVar2 = System_Single__Parse(pSVar1->m_Items[1],(MethodInfo *)0x0);
          if (2 < (uint)pSVar1->max_length) {
            fVar3 = System_Single__Parse(pSVar1->m_Items[2],(MethodInfo *)0x0);
            UVar4.fields.y = fVar2;
            UVar4.fields.z = fVar3;
            return (UnityEngine_Vector3_o)UVar4.fields;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Weather.WeatherSchedule$$.cctor
// il2cpp: void Weather_WeatherSchedule___cctor (const MethodInfo* method);
// 0x3d81cc0

void Weather_WeatherSchedule___cctor(MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_Dictionary_string__T__o *pSVar2;
  
  if (DAT_0570267a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_Weather_WeatherAction);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_Weather_WeatherEffect);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_Weather_WeatherValueS);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    il2cpp_init_method_metadata(&TypeInfo_WeatherSchedule);
    DAT_0570267a = '\x01';
  }
  if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar2 = Utility_Util__EnumToDict<Int32Enum>(MethodInfo_Dictionary_2_System_String_Weather_WeatherAction);
  **(undefined8 **)(TypeInfo_WeatherSchedule + 0xb8) = pSVar2;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_WeatherSchedule + 0xb8),pSVar2);
  pSVar2 = Utility_Util__EnumToDict<Int32Enum>(MethodInfo_Dictionary_2_System_String_Weather_WeatherEffect);
  lVar1 = *(long *)(TypeInfo_WeatherSchedule + 0xb8);
  *(System_Collections_Generic_Dictionary_string__T__o **)(lVar1 + 8) = pSVar2;
  il2cpp_runtime_glue(lVar1 + 8,pSVar2);
  pSVar2 = Utility_Util__EnumToDict<Int32Enum>(MethodInfo_Dictionary_2_System_String_Weather_WeatherValueS);
  lVar1 = *(long *)(TypeInfo_WeatherSchedule + 0xb8);
  *(System_Collections_Generic_Dictionary_string__T__o **)(lVar1 + 0x10) = pSVar2;
  il2cpp_runtime_glue(lVar1 + 0x10,pSVar2);
  return;
}


