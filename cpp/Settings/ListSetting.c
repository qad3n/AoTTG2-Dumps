// Type: Settings.ListSetting
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Settings/ListSetting.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Settings/SettingTypes/ListSetting.cs  [CHANGED since prior version]
// --------------------------------

// Settings.ListSetting<object>$$.ctor
// il2cpp: void Settings_ListSetting_object____ctor (Settings_ListSetting_T__o* __this, System_Collections_Generic_List_T__o* defaultValue, const MethodInfo_349A880* method);
// 0x359a880

void Settings_ListSetting<object>___ctor
               (Settings_ListSetting_T__o *__this,System_Collections_Generic_List_T__o *defaultValue
               ,MethodInfo_349A880 *method)

{
  Settings_TypedSetting<object>___ctor
            ((Settings_TypedSetting_T__o *)__this,(Il2CppObject *)defaultValue,
             (MethodInfo_29B42E0 *)
             method->klass->rgctx_data->_1_Settings_TypedSetting_List_T____ctor);
  return;
}


// Settings.ListSetting<object>$$.ctor
// il2cpp: void Settings_ListSetting_object____ctor (Settings_ListSetting_T__o* __this, Il2CppObject* defaultValue, const MethodInfo_349A8A0* method);
// 0x359a8a0

void Settings_ListSetting<object>___ctor
               (Settings_ListSetting_T__o *__this,Il2CppObject *defaultValue,
               MethodInfo_349A8A0 *method)

{
  int32_t *piVar1;
  uint uVar2;
  MethodInfo *pMVar3;
  System_Object_array *pSVar4;
  Il2CppMethodPointer vtable_dispatch;
  Il2CppClass *pIVar5;
  System_Collections_Generic_List_object__o *__this_00;
  undefined8 extraout_RDX;
  
  Settings_TypedSetting<object>___ctor
            ((Settings_TypedSetting_T__o *)__this,
             (MethodInfo_29B42D0 *)
             method->klass->rgctx_data->_3_Settings_TypedSetting_List_T____ctor);
  pIVar5 = method->klass->rgctx_data->_0_System_Collections_Generic_List_T_;
  if (((pIVar5->_2).field_0x6d & 1) == 0) {
    pIVar5 = (Il2CppClass *)il2cpp_glue_022c28b0();
  }
  __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(pIVar5);
  System_Collections_Generic_List<object>___ctor
            (__this_00,
             (MethodInfo_35A69E0 *)
             method->klass->rgctx_data->_4_System_Collections_Generic_List_T___ctor);
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    pMVar3 = method->klass->rgctx_data->_6_System_Collections_Generic_List_T__Add;
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar4 = (__this_00->fields)._items;
    if (pSVar4 != (System_Object_array *)0x0) {
      uVar2 = (__this_00->fields)._size;
      if (uVar2 < (uint)pSVar4->max_length) {
        (__this_00->fields)._size = uVar2 + 1;
        pSVar4->m_Items[(int)uVar2] = defaultValue;
        il2cpp_runtime_glue(pSVar4->m_Items + (int)uVar2,defaultValue);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  (__this_00,defaultValue,
                   (MethodInfo_35A7350 *)pMVar3->klass->rgctx_data[0xe].method);
      }
      (__this->fields).DefaultValue = (System_Collections_Generic_List_T__o *)__this_00;
      il2cpp_runtime_glue(&__this->fields,__this_00);
      if (__this != (Settings_ListSetting_T__o *)0x0) {
        vtable_dispatch = (__this->klass->vtable)._4_SetDefault.methodPtr;
        (*vtable_dispatch)
                  (__this,(__this->klass->vtable)._4_SetDefault.method,extraout_RDX,
                   vtable_dispatch);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Settings.ListSetting<object>$$.ctor
// il2cpp: void Settings_ListSetting_object____ctor (Settings_ListSetting_T__o* __this, Il2CppObject* defaultValue, int32_t count, const MethodInfo_349A9B0* method);
// 0x359a9b0

void Settings_ListSetting<object>___ctor
               (Settings_ListSetting_T__o *__this,Il2CppObject *defaultValue,int32_t count,
               MethodInfo_349A9B0 *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  Il2CppMethodPointer vtable_dispatch;
  Il2CppClass *pIVar4;
  System_Collections_Generic_List_object__o *__this_00;
  undefined8 uVar5;
  Il2CppObject *pIVar6;
  MethodInfo *method_00;
  undefined8 extraout_RDX;
  MethodInfo *pMVar7;
  
  method_00 = (MethodInfo *)method;
  Settings_TypedSetting<object>___ctor
            ((Settings_TypedSetting_T__o *)__this,
             (MethodInfo_29B42D0 *)
             method->klass->rgctx_data->_3_Settings_TypedSetting_List_T____ctor);
  pIVar4 = method->klass->rgctx_data->_0_System_Collections_Generic_List_T_;
  if (((pIVar4->_2).field_0x6d & 1) == 0) {
    pIVar4 = (Il2CppClass *)il2cpp_glue_022c28b0();
  }
  __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(pIVar4);
  System_Collections_Generic_List<object>___ctor
            (__this_00,
             (MethodInfo_35A69E0 *)
             method->klass->rgctx_data->_4_System_Collections_Generic_List_T___ctor);
  if (defaultValue != (Il2CppObject *)0x0) {
    uVar5 = (*defaultValue->klass->vtable[5].methodPtr)
                      (defaultValue,defaultValue->klass->vtable[5].method);
    if (0 < count) {
      if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
        pMVar7 = method->klass->rgctx_data->_8_System_Activator_CreateInstance_T_;
        pIVar6 = System_Activator__CreateInstance<object>((MethodInfo_239C6C0 *)pMVar7);
        Settings_ListSetting<object>__CopyLimits
                  ((Settings_ListSetting_T__o *)pMVar7,defaultValue,pIVar6,
                   (MethodInfo_349B920 *)method_00);
        if (pIVar6 != (Il2CppObject *)0x0) {
          (*pIVar6->klass->vtable[6].methodPtr)(pIVar6,uVar5,pIVar6->klass->vtable[6].method);
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        goto LAB_0359ab91;
      }
      do {
        while( true ) {
          pMVar7 = method->klass->rgctx_data->_8_System_Activator_CreateInstance_T_;
          pIVar6 = System_Activator__CreateInstance<object>((MethodInfo_239C6C0 *)pMVar7);
          Settings_ListSetting<object>__CopyLimits
                    ((Settings_ListSetting_T__o *)pMVar7,defaultValue,pIVar6,
                     (MethodInfo_349B920 *)method_00);
          if (pIVar6 == (Il2CppObject *)0x0) goto LAB_0359ab91;
          (*pIVar6->klass->vtable[6].methodPtr)(pIVar6,uVar5,pIVar6->klass->vtable[6].method);
          method_00 = method->klass->rgctx_data->_6_System_Collections_Generic_List_T__Add;
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar3 = (__this_00->fields)._items;
          if (pSVar3 == (System_Object_array *)0x0) goto LAB_0359ab91;
          uVar2 = (__this_00->fields)._size;
          if ((uint)pSVar3->max_length <= uVar2) break;
          method_00 = (MethodInfo *)(ulong)(uVar2 + 1);
          (__this_00->fields)._size = uVar2 + 1;
          pSVar3->m_Items[(int)uVar2] = pIVar6;
          il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar2,pIVar6);
          count = count + -1;
          if (count == 0) goto LAB_0359ab53;
        }
        System_Collections_Generic_List<object>__AddWithResize
                  (__this_00,pIVar6,(MethodInfo_35A7350 *)method_00->klass->rgctx_data[0xe].method);
        count = count + -1;
      } while (count != 0);
    }
LAB_0359ab53:
    (__this->fields).DefaultValue = (System_Collections_Generic_List_T__o *)__this_00;
    il2cpp_runtime_glue(&__this->fields,__this_00);
    if (__this != (Settings_ListSetting_T__o *)0x0) {
      vtable_dispatch = (__this->klass->vtable)._4_SetDefault.methodPtr;
      (*vtable_dispatch)
                (__this,(__this->klass->vtable)._4_SetDefault.method,extraout_RDX,
                 vtable_dispatch);
      return;
    }
  }
LAB_0359ab91:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Settings.ListSetting<object>$$.ctor
// il2cpp: void Settings_ListSetting_object____ctor (Settings_ListSetting_T__o* __this, const MethodInfo_349ABA0* method);
// 0x359aba0

void Settings_ListSetting<object>___ctor
               (Settings_ListSetting_T__o *__this,MethodInfo_349ABA0 *method)

{
  Il2CppMethodPointer vtable_dispatch;
  Il2CppClass *pIVar1;
  System_Collections_Generic_List_object__o *__this_00;
  undefined8 extraout_RDX;
  
  Settings_TypedSetting<object>___ctor
            ((Settings_TypedSetting_T__o *)__this,
             (MethodInfo_29B42D0 *)
             method->klass->rgctx_data->_3_Settings_TypedSetting_List_T____ctor);
  pIVar1 = method->klass->rgctx_data->_0_System_Collections_Generic_List_T_;
  if (((pIVar1->_2).field_0x6d & 1) == 0) {
    pIVar1 = (Il2CppClass *)il2cpp_glue_022c28b0();
  }
  __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(pIVar1);
  System_Collections_Generic_List<object>___ctor
            (__this_00,
             (MethodInfo_35A69E0 *)
             method->klass->rgctx_data->_4_System_Collections_Generic_List_T___ctor);
  (__this->fields).DefaultValue = (System_Collections_Generic_List_T__o *)__this_00;
  il2cpp_runtime_glue(&__this->fields,__this_00);
  if (__this != (Settings_ListSetting_T__o *)0x0) {
    vtable_dispatch = (__this->klass->vtable)._4_SetDefault.methodPtr;
    (*vtable_dispatch)
              (__this,(__this->klass->vtable)._4_SetDefault.method,extraout_RDX,
               vtable_dispatch);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Settings.ListSetting<object>$$SetDefault
// il2cpp: void Settings_ListSetting_object___SetDefault (Settings_ListSetting_T__o* __this, const MethodInfo_349AC40* method);
// 0x359ac40

/* WARNING: Removing unreachable block (ram,0x0359ae8c) */

void Settings_ListSetting<object>__SetDefault
               (Settings_ListSetting_T__o *__this,MethodInfo_349AC40 *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  bool_conflict bVar4;
  Il2CppClass *pIVar5;
  System_Collections_Generic_List_object__o *__this_03;
  Il2CppObject *pIVar6;
  Il2CppObject *from;
  undefined8 uVar7;
  Il2CppObject *pIVar8;
  MethodInfo *in_RCX;
  System_Collections_Generic_List_object__o *pSVar9;
  System_Collections_Generic_List_Enumerator_T__c *pSVar10;
  Il2CppType *pIVar11;
  Il2CppObject *pIVar12;
  undefined1 auStack_48 [16];
  Il2CppObject *pIStack_38;
  
  pIVar5 = method->klass->rgctx_data->_0_System_Collections_Generic_List_T_;
  if (((pIVar5->_2).field_0x6d & 1) == 0) {
    pIVar5 = (Il2CppClass *)il2cpp_glue_022c28b0();
  }
  __this_03 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(pIVar5);
  System_Collections_Generic_List<object>___ctor
            (__this_03,
             (MethodInfo_35A69E0 *)
             method->klass->rgctx_data->_4_System_Collections_Generic_List_T___ctor);
  pSVar9 = (System_Collections_Generic_List_object__o *)(__this->fields).DefaultValue;
  if (pSVar9 != (System_Collections_Generic_List_object__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)auStack_48,pSVar9,
               (MethodInfo_35A7FE0 *)
               method->klass->rgctx_data->_10_System_Collections_Generic_List_T__GetEnumerator);
    pSVar10 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_48._0_8_;
    pIVar11 = (Il2CppType *)auStack_48._8_8_;
    pIVar12 = pIStack_38;
    if (__this_03 == (System_Collections_Generic_List_object__o *)0x0) {
      __this_01.fields._index = auStack_48._8_4_;
      __this_01.fields._version = auStack_48._12_4_;
      __this_01.fields._list = (System_Collections_Generic_List_T__o *)auStack_48._0_8_;
      __this_01.fields._current = pIStack_38;
      bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffff98);
      if ((char)bVar4 != '\0') {
        pIVar8 = System_Activator__CreateInstance<object>
                           ((MethodInfo_239C6C0 *)
                            method->klass->rgctx_data->_8_System_Activator_CreateInstance_T_);
        pSVar9 = (System_Collections_Generic_List_object__o *)(__this->fields).DefaultValue;
        if (pSVar9 != (System_Collections_Generic_List_object__o *)0x0) {
          if (0 < (pSVar9->fields)._size) {
            pIVar6 = System_Collections_Generic_List<object>__get_Item
                               (pSVar9,0,(MethodInfo_35A7000 *)
                                         method->klass->rgctx_data->
                                         _14_Settings_ListSetting_T__CopyDefaultLimits->klass->
                                         rgctx_data[0x14].method);
            Settings_ListSetting<object>__CopyLimits
                      ((Settings_ListSetting_T__o *)pSVar9,pIVar6,pIVar8,
                       (MethodInfo_349B920 *)in_RCX);
          }
          if (pIVar12 != (Il2CppObject *)0x0) {
            uVar7 = (*pIVar12->klass->vtable[5].methodPtr)(pIVar12,pIVar12->klass->vtable[5].method)
            ;
            if (pIVar8 != (Il2CppObject *)0x0) {
              (*pIVar8->klass->vtable[6].methodPtr)(pIVar8,uVar7,pIVar8->klass->vtable[6].method);
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
LAB_0359af1a:
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
LAB_0359aefc:
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
LAB_0359aeb6:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
    else {
      while (__this_00.fields._8_8_ = pIVar11,
            __this_00.fields._list = (System_Collections_Generic_List_T__o *)pSVar10,
            __this_00.fields._current = pIVar12,
            bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                              (__this_00,(MethodInfo_3185E20 *)&stack0xffffffffffffff98),
            auStack_48._0_8_ = pSVar10, auStack_48._8_8_ = pIVar11, (char)bVar4 != '\0') {
        pIVar8 = pIVar12;
        pIVar6 = System_Activator__CreateInstance<object>
                           ((MethodInfo_239C6C0 *)
                            method->klass->rgctx_data->_8_System_Activator_CreateInstance_T_);
        pSVar9 = (System_Collections_Generic_List_object__o *)(__this->fields).DefaultValue;
        if (pSVar9 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_0359aeb6;
        if (0 < (pSVar9->fields)._size) {
          from = System_Collections_Generic_List<object>__get_Item
                           (pSVar9,0,(MethodInfo_35A7000 *)
                                     method->klass->rgctx_data->
                                     _14_Settings_ListSetting_T__CopyDefaultLimits->klass->
                                     rgctx_data[0x14].method);
          Settings_ListSetting<object>__CopyLimits
                    ((Settings_ListSetting_T__o *)pSVar9,from,pIVar6,(MethodInfo_349B920 *)in_RCX);
        }
        if (pIVar12 == (Il2CppObject *)0x0) goto LAB_0359aefc;
        uVar7 = (*pIVar12->klass->vtable[5].methodPtr)(pIVar12,pIVar12->klass->vtable[5].method);
        if (pIVar6 == (Il2CppObject *)0x0) goto LAB_0359af1a;
        (*pIVar6->klass->vtable[6].methodPtr)(pIVar6,uVar7,pIVar6->klass->vtable[6].method);
        in_RCX = method->klass->rgctx_data->_6_System_Collections_Generic_List_T__Add;
        piVar1 = &(__this_03->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar3 = (__this_03->fields)._items;
        if (pSVar3 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        uVar2 = (__this_03->fields)._size;
        if (uVar2 < (uint)pSVar3->max_length) {
          in_RCX = (MethodInfo *)(ulong)(uVar2 + 1);
          (__this_03->fields)._size = uVar2 + 1;
          pSVar3->m_Items[(int)uVar2] = pIVar6;
          il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar2,pIVar6);
          pIVar12 = pIVar8;
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    (__this_03,pIVar6,(MethodInfo_35A7350 *)in_RCX->klass->rgctx_data[0xe].method);
          pIVar12 = pIVar8;
        }
      }
    }
    __this_02.fields._8_8_ = auStack_48._8_8_;
    __this_02.fields._list = (System_Collections_Generic_List_T__o *)auStack_48._0_8_;
    __this_02.fields._current = pIVar12;
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (__this_02,(MethodInfo_3185E10 *)&stack0xffffffffffffff98);
    if (__this != (Settings_ListSetting_T__o *)0x0) {
      Settings_TypedSetting<object>__set_Value
                ((Settings_TypedSetting_T__o *)__this,(Il2CppObject *)__this_03,
                 (MethodInfo_29B42A0 *)
                 method->klass->rgctx_data->_18_Settings_TypedSetting_List_T___get_Value);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Settings.ListSetting<object>$$DeserializeFromJsonObject
// il2cpp: void Settings_ListSetting_object___DeserializeFromJsonObject (Settings_ListSetting_T__o* __this, SimpleJSONFixed_JSONNode_o* json, const MethodInfo_349B010* method);
// 0x359b010

void Settings_ListSetting<object>__DeserializeFromJsonObject
               (Settings_ListSetting_T__o *__this,SimpleJSONFixed_JSONNode_o *json,
               MethodInfo_349B010 *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_00;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_01;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_02;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_03;
  bool_conflict bVar4;
  Il2CppClass *pIVar5;
  System_Collections_Generic_List_object__o *pSVar6;
  long *plVar7;
  SimpleJSONFixed_JSONNode_o *pSVar8;
  Il2CppObject *pIVar9;
  Il2CppObject *pIVar10;
  MethodInfo *method_00;
  System_Collections_Generic_List_object__o *__this_04;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o SVar11;
  Il2CppMethodPointer pIVar12;
  Il2CppMethodPointer pIVar13;
  InvokerMethod pIVar14;
  char *pcVar15;
  Il2CppType *pIVar16;
  Il2CppType **ppIVar17;
  _union_13 _Var18;
  _union_14 _Var19;
  Il2CppMethodPointer pIStack_78;
  Il2CppMethodPointer pIStack_70;
  InvokerMethod pIStack_68;
  char *pcStack_60;
  Il2CppClass *pIStack_58;
  Il2CppType *pIStack_50;
  Il2CppType **ppIStack_48;
  _union_13 _Stack_40;
  _union_14 _Stack_38;
  
  if (DAT_0570080d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    DAT_0570080d = '\x01';
  }
  pIVar5 = method->klass->rgctx_data->_0_System_Collections_Generic_List_T_;
  if (((pIVar5->_2).field_0x6d & 1) == 0) {
    pIVar5 = (Il2CppClass *)il2cpp_glue_022c28b0();
  }
  pSVar6 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(pIVar5);
  System_Collections_Generic_List<object>___ctor
            (pSVar6,(MethodInfo_35A69E0 *)
                    method->klass->rgctx_data->_4_System_Collections_Generic_List_T___ctor);
  if ((json != (SimpleJSONFixed_JSONNode_o *)0x0) &&
     (plVar7 = (long *)(*(json->klass->vtable)._45_get_AsArray.methodPtr)
                                 (json,(json->klass->vtable)._45_get_AsArray.method),
     plVar7 != (long *)0x0)) {
    method_00 = (MethodInfo *)*plVar7;
    (*(code *)method_00[9].klass)(&pIStack_78,plVar7,method_00[9].return_type);
    __this_00.fields.m_Object.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIStack_70;
    __this_00.fields._0_8_ = pIStack_78;
    __this_00.fields.m_Object.fields._8_8_ = pIStack_68;
    __this_00.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcStack_60;
    __this_00.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIStack_58;
    __this_00.fields.m_Object.fields._32_8_ = pIStack_50;
    __this_00.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIStack_48;
    __this_00.fields.m_Array.fields._8_8_ = _Stack_40.rgctx_data;
    __this_00.fields.m_Array.fields._current = _Stack_38.genericMethod;
    bVar4 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                      (__this_00,(MethodInfo *)&stack0xffffffffffffff38);
    if ((char)bVar4 == '\0') {
      if (__this != (Settings_ListSetting_T__o *)0x0) goto LAB_0359b278;
    }
    else {
      pIVar12 = pIStack_78;
      pIVar13 = pIStack_70;
      pIVar14 = pIStack_68;
      pcVar15 = pcStack_60;
      pIVar5 = pIStack_58;
      pIVar16 = pIStack_50;
      ppIVar17 = ppIStack_48;
      _Var18 = _Stack_40;
      _Var19 = _Stack_38;
      if (pSVar6 != (System_Collections_Generic_List_object__o *)0x0) {
        do {
          __this_02.fields.m_Object.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar13;
          __this_02.fields._0_8_ = pIVar12;
          __this_02.fields.m_Object.fields._8_8_ = pIVar14;
          __this_02.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar15;
          __this_02.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar5;
          __this_02.fields.m_Object.fields._32_8_ = pIVar16;
          __this_02.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar17;
          __this_02.fields.m_Array.fields._8_8_ = _Var18.rgctx_data;
          __this_02.fields.m_Array.fields._current = _Var19.genericMethod;
          SVar11 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                             (__this_02,(MethodInfo *)&stack0xffffffffffffff38);
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar8 = SimpleJSONFixed_JSONNode__op_Implicit(SVar11,(MethodInfo *)0x0);
          pIVar9 = System_Activator__CreateInstance<object>
                             ((MethodInfo_239C6C0 *)
                              method->klass->rgctx_data->_8_System_Activator_CreateInstance_T_);
          __this_04 = (System_Collections_Generic_List_object__o *)(__this->fields).DefaultValue;
          if (__this_04 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_0359b33d;
          if (0 < (__this_04->fields)._size) {
            pIVar10 = System_Collections_Generic_List<object>__get_Item
                                (__this_04,0,
                                 (MethodInfo_35A7000 *)
                                 method->klass->rgctx_data->
                                 _14_Settings_ListSetting_T__CopyDefaultLimits->klass->rgctx_data
                                 [0x14].method);
            Settings_ListSetting<object>__CopyLimits
                      ((Settings_ListSetting_T__o *)__this_04,pIVar10,pIVar9,
                       (MethodInfo_349B920 *)method_00);
          }
          if (pIVar9 == (Il2CppObject *)0x0) goto LAB_0359b33d;
          (*pIVar9->klass->vtable[6].methodPtr)(pIVar9,pSVar8,pIVar9->klass->vtable[6].method);
          method_00 = method->klass->rgctx_data->_6_System_Collections_Generic_List_T__Add;
          piVar1 = &(pSVar6->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar3 = (pSVar6->fields)._items;
          if (pSVar3 == (System_Object_array *)0x0) goto LAB_0359b33d;
          uVar2 = (pSVar6->fields)._size;
          if (uVar2 < (uint)pSVar3->max_length) {
            method_00 = (MethodInfo *)(ulong)(uVar2 + 1);
            (pSVar6->fields)._size = uVar2 + 1;
            pSVar3->m_Items[(int)uVar2] = pIVar9;
            il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar2,pIVar9);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      (pSVar6,pIVar9,(MethodInfo_35A7350 *)method_00->klass->rgctx_data[0xe].method)
            ;
          }
          __this_01.fields.m_Object.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar13;
          __this_01.fields._0_8_ = pIVar12;
          __this_01.fields.m_Object.fields._8_8_ = pIVar14;
          __this_01.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar15;
          __this_01.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar5;
          __this_01.fields.m_Object.fields._32_8_ = pIVar16;
          __this_01.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar17;
          __this_01.fields.m_Array.fields._8_8_ = _Var18.rgctx_data;
          __this_01.fields.m_Array.fields._current = _Var19.genericMethod;
          bVar4 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                            (__this_01,(MethodInfo *)&stack0xffffffffffffff38);
        } while ((char)bVar4 != '\0');
LAB_0359b278:
        Settings_TypedSetting<object>__set_Value
                  ((Settings_TypedSetting_T__o *)__this,(Il2CppObject *)pSVar6,
                   (MethodInfo_29B42A0 *)
                   method->klass->rgctx_data->_18_Settings_TypedSetting_List_T___get_Value);
        return;
      }
      __this_03.fields.m_Object.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIStack_70;
      __this_03.fields._0_8_ = pIStack_78;
      __this_03.fields.m_Object.fields._8_8_ = pIStack_68;
      __this_03.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcStack_60;
      __this_03.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIStack_58;
      __this_03.fields.m_Object.fields._32_8_ = pIStack_50;
      __this_03.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIStack_48;
      __this_03.fields.m_Array.fields._8_8_ = _Stack_40.rgctx_data;
      __this_03.fields.m_Array.fields._current = _Stack_38.genericMethod;
      SVar11 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                         (__this_03,(MethodInfo *)&stack0xffffffffffffff38);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar8 = SimpleJSONFixed_JSONNode__op_Implicit(SVar11,(MethodInfo *)0x0);
      pIVar9 = System_Activator__CreateInstance<object>
                         ((MethodInfo_239C6C0 *)
                          method->klass->rgctx_data->_8_System_Activator_CreateInstance_T_);
      pSVar6 = (System_Collections_Generic_List_object__o *)(__this->fields).DefaultValue;
      if (pSVar6 != (System_Collections_Generic_List_object__o *)0x0) {
        if (0 < (pSVar6->fields)._size) {
          pIVar10 = System_Collections_Generic_List<object>__get_Item
                              (pSVar6,0,(MethodInfo_35A7000 *)
                                        method->klass->rgctx_data->
                                        _14_Settings_ListSetting_T__CopyDefaultLimits->klass->
                                        rgctx_data[0x14].method);
          Settings_ListSetting<object>__CopyLimits
                    ((Settings_ListSetting_T__o *)pSVar6,pIVar10,pIVar9,
                     (MethodInfo_349B920 *)method_00);
        }
        if (pIVar9 != (Il2CppObject *)0x0) {
          (*pIVar9->klass->vtable[6].methodPtr)(pIVar9,pSVar8,pIVar9->klass->vtable[6].method);
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
      }
    }
  }
LAB_0359b33d:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Settings.ListSetting<object>$$SerializeToJsonObject
// il2cpp: SimpleJSONFixed_JSONNode_o* Settings_ListSetting_object___SerializeToJsonObject (Settings_ListSetting_T__o* __this, const MethodInfo_349B360* method);
// 0x359b360

/* WARNING: Removing unreachable block (ram,0x0359b4b2) */

SimpleJSONFixed_JSONNode_o *
Settings_ListSetting<object>__SerializeToJsonObject
          (Settings_ListSetting_T__o *__this,MethodInfo_349B360 *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  bool_conflict bVar1;
  SimpleJSONFixed_JSONArray_o *__this_04;
  undefined8 uVar2;
  System_Collections_Generic_List_Enumerator_T__c *pSVar3;
  Il2CppType *pIVar4;
  Il2CppObject *pIVar5;
  undefined1 local_38 [16];
  Il2CppObject *local_28;
  
  if (DAT_0570080e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONArray);
    DAT_0570080e = '\x01';
  }
  __this_04 = (SimpleJSONFixed_JSONArray_o *)il2cpp_runtime_glue(TypeInfo_JSONArray);
  SimpleJSONFixed_JSONArray___ctor(__this_04,(MethodInfo *)0x0);
  if ((__this == (Settings_ListSetting_T__o *)0x0) ||
     (__this_00 = (System_Collections_Generic_List_object__o *)(__this->fields)._value,
     __this_00 == (System_Collections_Generic_List_object__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_38,__this_00,
             (MethodInfo_35A7FE0 *)
             method->klass->rgctx_data->_10_System_Collections_Generic_List_T__GetEnumerator);
  pSVar3 = (System_Collections_Generic_List_Enumerator_T__c *)local_38._0_8_;
  pIVar4 = (Il2CppType *)local_38._8_8_;
  pIVar5 = local_28;
  if (__this_04 == (SimpleJSONFixed_JSONArray_o *)0x0) {
    __this_02.fields._index = local_38._8_4_;
    __this_02.fields._version = local_38._12_4_;
    __this_02.fields._list = (System_Collections_Generic_List_T__o *)local_38._0_8_;
    __this_02.fields._current = local_28;
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (__this_02,(MethodInfo_3185E20 *)&stack0xffffffffffffffa8);
    if ((char)bVar1 != '\0') {
      if (local_28 != (Il2CppObject *)0x0) {
        (*local_28->klass->vtable[5].methodPtr)(local_28,local_28->klass->vtable[5].method);
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
LAB_0359b4c4:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  else {
    while (__this_01.fields._8_8_ = pIVar4,
          __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar3,
          __this_01.fields._current = pIVar5,
          bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffffa8),
          local_38._0_8_ = pSVar3, local_38._8_8_ = pIVar4, local_28 = pIVar5, (char)bVar1 != '\0')
    {
      if (pIVar5 == (Il2CppObject *)0x0) goto LAB_0359b4c4;
      uVar2 = (*pIVar5->klass->vtable[5].methodPtr)(pIVar5,pIVar5->klass->vtable[5].method);
      (*(__this_04->klass->vtable)._21_Add.methodPtr)
                (__this_04,uVar2,(__this_04->klass->vtable)._21_Add.method);
    }
  }
  __this_03.fields._8_8_ = local_38._8_8_;
  __this_03.fields._list = (System_Collections_Generic_List_T__o *)local_38._0_8_;
  __this_03.fields._current = local_28;
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (__this_03,(MethodInfo_3185E10 *)&stack0xffffffffffffffa8);
  return (SimpleJSONFixed_JSONNode_o *)__this_04;
}


// Settings.ListSetting<object>$$GetCount
// il2cpp: int32_t Settings_ListSetting_object___GetCount (Settings_ListSetting_T__o* __this, const MethodInfo_349B570* method);
// 0x359b570

int32_t Settings_ListSetting<object>__GetCount
                  (Settings_ListSetting_T__o *__this,MethodInfo_349B570 *method)

{
  System_Collections_Generic_List_T__o *pSVar1;
  
  if ((__this != (Settings_ListSetting_T__o *)0x0) &&
     (pSVar1 = (__this->fields)._value, pSVar1 != (System_Collections_Generic_List_T__o *)0x0)) {
    return (pSVar1->fields)._size;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Settings.ListSetting<object>$$GetItemAt
// il2cpp: Settings_BaseSetting_o* Settings_ListSetting_object___GetItemAt (Settings_ListSetting_T__o* __this, int32_t index, const MethodInfo_349B590* method);
// 0x359b590

Settings_BaseSetting_o *
Settings_ListSetting<object>__GetItemAt
          (Settings_ListSetting_T__o *__this,int32_t index,MethodInfo_349B590 *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  Il2CppObject *pIVar1;
  
  if ((__this != (Settings_ListSetting_T__o *)0x0) &&
     (__this_00 = (System_Collections_Generic_List_object__o *)(__this->fields)._value,
     __this_00 != (System_Collections_Generic_List_object__o *)0x0)) {
    pIVar1 = System_Collections_Generic_List<object>__get_Item
                       (__this_00,index,
                        (MethodInfo_35A7000 *)
                        method->klass->rgctx_data->_21_System_Collections_Generic_List_T__Clear);
    return (Settings_BaseSetting_o *)pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Settings.ListSetting<object>$$GetItems
// il2cpp: System_Collections_Generic_List_BaseSetting__o* Settings_ListSetting_object___GetItems (Settings_ListSetting_T__o* __this, const MethodInfo_349B5C0* method);
// 0x359b5c0

/* WARNING: Removing unreachable block (ram,0x0359b763) */

System_Collections_Generic_List_BaseSetting__o *
Settings_ListSetting<object>__GetItems(Settings_ListSetting_T__o *__this,MethodInfo_349B5C0 *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_object__o *__this_00;
  System_Object_array *pSVar3;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  long lVar4;
  bool_conflict bVar5;
  System_Collections_Generic_List_object__o *__this_04;
  System_Collections_Generic_List_T__o *pSVar6;
  System_Collections_Generic_List_Enumerator_T__c *pSVar7;
  Il2CppType *item;
  undefined1 local_40 [16];
  Il2CppType *local_30;
  
  if (DAT_0570080f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Settings_BaseSetting);
    il2cpp_init_method_metadata(&TypeInfo_List_BaseSetting);
    DAT_0570080f = '\x01';
  }
  __this_04 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_BaseSetting);
  System_Collections_Generic_List<object>___ctor(__this_04,MethodInfo_List_1_Settings_BaseSetting);
  if ((__this != (Settings_ListSetting_T__o *)0x0) &&
     (__this_00 = (System_Collections_Generic_List_object__o *)(__this->fields)._value,
     __this_00 != (System_Collections_Generic_List_object__o *)0x0)) {
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_40,__this_00,
               (MethodInfo_35A7FE0 *)
               method->klass->rgctx_data->_10_System_Collections_Generic_List_T__GetEnumerator);
    pSVar6 = (System_Collections_Generic_List_T__o *)local_40._0_8_;
    pSVar7 = (System_Collections_Generic_List_Enumerator_T__c *)local_40._8_8_;
    item = local_30;
    if (__this_04 == (System_Collections_Generic_List_object__o *)0x0) {
      __this_02.fields._index = local_40._8_4_;
      __this_02.fields._version = local_40._12_4_;
      __this_02.fields._list = (System_Collections_Generic_List_T__o *)local_40._0_8_;
      __this_02.fields._current = (Il2CppObject *)local_30;
      bVar5 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (__this_02,(MethodInfo_3185E20 *)&stack0xffffffffffffffa8);
      if ((char)bVar5 != '\0') {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
    else {
      while (__this_01.fields._8_8_ = pSVar7, __this_01.fields._list = pSVar6,
            __this_01.fields._current = (Il2CppObject *)item,
            bVar5 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                              (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffffa8),
            lVar4 = MethodInfo_Void_Add, local_40._0_8_ = pSVar6, local_40._8_8_ = pSVar7, local_30 = item,
            (char)bVar5 != '\0') {
        piVar1 = &(__this_04->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar3 = (__this_04->fields)._items;
        if (pSVar3 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        uVar2 = (__this_04->fields)._size;
        if (uVar2 < (uint)pSVar3->max_length) {
          (__this_04->fields)._size = uVar2 + 1;
          pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)item;
          il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    (__this_04,(Il2CppObject *)item,
                     *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
        }
      }
    }
    __this_03.fields._8_8_ = local_40._8_8_;
    __this_03.fields._list = (System_Collections_Generic_List_T__o *)local_40._0_8_;
    __this_03.fields._current = (Il2CppObject *)local_30;
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (__this_03,(MethodInfo_3185E10 *)&stack0xffffffffffffffa8);
    return (System_Collections_Generic_List_BaseSetting__o *)__this_04;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Settings.ListSetting<object>$$AddItem
// il2cpp: void Settings_ListSetting_object___AddItem (Settings_ListSetting_T__o* __this, Settings_BaseSetting_o* item, const MethodInfo_349B7F0* method);
// 0x359b7f0

void Settings_ListSetting<object>__AddItem
               (Settings_ListSetting_T__o *__this,Settings_BaseSetting_o *item,
               MethodInfo_349B7F0 *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_object__o *__this_00;
  MethodInfo *pMVar3;
  System_Object_array *pSVar4;
  Il2CppClass *pIVar5;
  Il2CppObject *item_00;
  
  if ((__this != (Settings_ListSetting_T__o *)0x0) &&
     (__this_00 = (System_Collections_Generic_List_object__o *)(__this->fields)._value,
     __this_00 != (System_Collections_Generic_List_object__o *)0x0)) {
    pIVar5 = method->klass->rgctx_data->_5_T;
    if (((pIVar5->_2).field_0x6d & 1) == 0) {
      pIVar5 = (Il2CppClass *)il2cpp_glue_022c28b0(pIVar5);
    }
    if (item == (Settings_BaseSetting_o *)0x0) {
      item_00 = (Il2CppObject *)0x0;
    }
    else {
      item_00 = (Il2CppObject *)il2cpp_runtime_glue(item,pIVar5);
      if (item_00 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(item,pIVar5);
      }
    }
    pMVar3 = method->klass->rgctx_data->_6_System_Collections_Generic_List_T__Add;
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar4 = (__this_00->fields)._items;
    if (pSVar4 != (System_Object_array *)0x0) {
      uVar2 = (__this_00->fields)._size;
      if (uVar2 < (uint)pSVar4->max_length) {
        (__this_00->fields)._size = uVar2 + 1;
        pSVar4->m_Items[(int)uVar2] = item_00;
        il2cpp_runtime_glue(pSVar4->m_Items + (int)uVar2);
        return;
      }
      System_Collections_Generic_List<object>__AddWithResize
                (__this_00,item_00,(MethodInfo_35A7350 *)pMVar3->klass->rgctx_data[0xe].method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Settings.ListSetting<object>$$Clear
// il2cpp: void Settings_ListSetting_object___Clear (Settings_ListSetting_T__o* __this, const MethodInfo_349B8E0* method);
// 0x359b8e0

void Settings_ListSetting<object>__Clear
               (Settings_ListSetting_T__o *__this,MethodInfo_349B8E0 *method)

{
  int32_t *piVar1;
  int32_t length;
  System_Collections_Generic_List_T__o *pSVar2;
  
  if ((__this != (Settings_ListSetting_T__o *)0x0) &&
     (pSVar2 = (__this->fields)._value, pSVar2 != (System_Collections_Generic_List_T__o *)0x0)) {
    piVar1 = &(pSVar2->fields)._version;
    *piVar1 = *piVar1 + 1;
    length = (pSVar2->fields)._size;
    (pSVar2->fields)._size = 0;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Settings.ListSetting<object>$$CopyLimits
// il2cpp: void Settings_ListSetting_object___CopyLimits (Settings_ListSetting_T__o* __this, Il2CppObject* from, Il2CppObject* to, const MethodInfo_349B920* method);
// 0x359b920

void Settings_ListSetting<object>__CopyLimits
               (Settings_ListSetting_T__o *__this,Il2CppObject *from,Il2CppObject *to,
               MethodInfo_349B920 *method)

{
  byte bVar1;
  byte bVar2;
  Il2CppClass *pIVar3;
  Il2CppClass *pIVar4;
  ulong uVar5;
  Il2CppClass *pIVar6;
  
  if (DAT_05700810 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ColorSetting,from,to,(char)method);
    il2cpp_init_method_metadata(&TypeInfo_FloatSetting);
    il2cpp_init_method_metadata(&TypeInfo_IntSetting);
    il2cpp_init_method_metadata(&TypeInfo_NameSetting);
    il2cpp_init_method_metadata(&TypeInfo_StringSetting);
    DAT_05700810 = '\x01';
  }
  pIVar4 = TypeInfo_NameSetting;
  if (from == (Il2CppObject *)0x0) {
    return;
  }
  pIVar3 = from->klass;
  bVar1 = (pIVar3->_2).naturalAligment;
  bVar2 = (TypeInfo_IntSetting->_2).naturalAligment;
  uVar5 = (ulong)bVar2;
  if ((bVar1 < bVar2) ||
     (pIVar6 = TypeInfo_IntSetting, (pIVar3->_2).typeHierarchy[uVar5 - 1] != TypeInfo_IntSetting)) {
    bVar2 = (TypeInfo_ColorSetting->_2).naturalAligment;
    uVar5 = (ulong)bVar2;
    if ((bVar1 < bVar2) ||
       (pIVar6 = TypeInfo_ColorSetting, (pIVar3->_2).typeHierarchy[uVar5 - 1] != TypeInfo_ColorSetting)) {
      bVar2 = (TypeInfo_FloatSetting->_2).naturalAligment;
      uVar5 = (ulong)bVar2;
      if ((bVar2 <= bVar1) &&
         (pIVar6 = TypeInfo_FloatSetting, (pIVar3->_2).typeHierarchy[uVar5 - 1] == TypeInfo_FloatSetting))
      goto LAB_0359ba4f;
      bVar2 = (TypeInfo_StringSetting->_2).naturalAligment;
      uVar5 = (ulong)bVar2;
      if ((bVar1 < bVar2) ||
         (pIVar6 = TypeInfo_StringSetting, (pIVar3->_2).typeHierarchy[uVar5 - 1] != TypeInfo_StringSetting)) {
        bVar2 = (TypeInfo_NameSetting->_2).naturalAligment;
        if (bVar1 < bVar2) {
          return;
        }
        if ((pIVar3->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_NameSetting) {
          return;
        }
        if (to == (Il2CppObject *)0x0) goto LAB_0359bb3e;
        if ((bVar2 <= (to->klass->_2).naturalAligment) &&
           ((to->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_NameSetting)) {
          *(undefined4 *)&to[2].klass = *(undefined4 *)&from[2].klass;
          if ((bVar2 <= (from->klass->_2).naturalAligment) &&
             ((from->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == pIVar4)) {
            *(undefined4 *)((long)&to[2].klass + 4) = *(undefined4 *)((long)&from[2].klass + 4);
            return;
          }
          goto LAB_0359bb36;
        }
        goto LAB_0359bb2e;
      }
    }
    if (to == (Il2CppObject *)0x0) goto LAB_0359bb3e;
    if (((byte)uVar5 <= (to->klass->_2).naturalAligment) &&
       ((to->klass->_2).typeHierarchy[uVar5 - 1] == pIVar6)) {
      *(undefined4 *)&to[2].klass = *(undefined4 *)&from[2].klass;
      return;
    }
  }
  else {
LAB_0359ba4f:
    if (to == (Il2CppObject *)0x0) {
LAB_0359bb3e:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (((byte)uVar5 <= (to->klass->_2).naturalAligment) &&
       ((to->klass->_2).typeHierarchy[uVar5 - 1] == pIVar6)) {
      *(undefined4 *)&to[1].monitor = *(undefined4 *)&from[1].monitor;
      if (((byte)uVar5 <= (from->klass->_2).naturalAligment) &&
         ((from->klass->_2).typeHierarchy[uVar5 - 1] == pIVar6)) {
        *(undefined4 *)((long)&to[1].monitor + 4) = *(undefined4 *)((long)&from[1].monitor + 4);
        return;
      }
LAB_0359bb36:
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(from);
    }
  }
LAB_0359bb2e:
                    /* WARNING: Subroutine does not return */
  il2cpp_unwind_resume(to);
}


// Settings.ListSetting<object>$$CopyDefaultLimits
// il2cpp: void Settings_ListSetting_object___CopyDefaultLimits (Settings_ListSetting_T__o* __this, Il2CppObject* to, const MethodInfo_349BB50* method);
// 0x359bb50

void Settings_ListSetting<object>__CopyDefaultLimits
               (Settings_ListSetting_T__o *__this,Il2CppObject *to,MethodInfo_349BB50 *method)

{
  Il2CppObject *from;
  MethodInfo_349B920 *in_RCX;
  System_Collections_Generic_List_object__o *__this_00;
  
  __this_00 = (System_Collections_Generic_List_object__o *)(__this->fields).DefaultValue;
  if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (0 < (__this_00->fields)._size) {
    from = System_Collections_Generic_List<object>__get_Item
                     (__this_00,0,
                      (MethodInfo_35A7000 *)
                      method->klass->rgctx_data->_21_System_Collections_Generic_List_T__Clear);
    Settings_ListSetting<object>__CopyLimits((Settings_ListSetting_T__o *)__this_00,from,to,in_RCX);
    return;
  }
  return;
}


