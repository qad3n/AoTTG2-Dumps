// Type: Gisketch.Aottg2UI.Code.AottgActionRegistry
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Code/AottgActionRegistry.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Code.AottgActionRegistry$$Clear
// il2cpp: void Gisketch_Aottg2UI_Code_AottgActionRegistry__Clear (Gisketch_Aottg2UI_Code_AottgActionRegistry_o* __this, const MethodInfo* method);
// 0x3af0680

void Gisketch_Aottg2UI_Code_AottgActionRegistry__Clear
               (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  
  if (DAT_05701422 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    DAT_05701422 = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._actions;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object__object>__Clear(__this_00,MethodInfo_Void_Clear);
    (__this->fields)._next = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Code.AottgActionRegistry$$ClearOwner
// il2cpp: void Gisketch_Aottg2UI_Code_AottgActionRegistry__ClearOwner (Gisketch_Aottg2UI_Code_AottgActionRegistry_o* __this, System_String_o* ownerId, const MethodInfo* method);
// 0x3af06d0

void Gisketch_Aottg2UI_Code_AottgActionRegistry__ClearOwner
               (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *__this,System_String_o *ownerId,
               MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  System_Object_array *pSVar4;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_00;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  long lVar5;
  bool_conflict bVar6;
  System_String_o *pSVar7;
  System_Collections_Generic_List_object__o *__this_05;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_06;
  _union_231280 _Var8;
  Il2CppType *pIVar9;
  System_String_o *pSVar10;
  System_String_o *__this_07;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *local_68;
  Il2CppType *pIStack_60;
  Il2CppObject *local_58;
  _union_231280 local_48;
  Il2CppType *pIStack_40;
  System_String_o *local_38;
  
  if (DAT_05701423 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Remove);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_System_String__GetEnumerato);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&"code.");
    il2cpp_init_method_metadata(&".");
    DAT_05701423 = '\x01';
  }
  local_68 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *)0x0;
  pIStack_60 = (Il2CppType *)0x0;
  local_58 = (Il2CppObject *)0x0;
  bVar6 = System_String__IsNullOrEmpty(ownerId,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    return;
  }
  if (ownerId != (System_String_o *)0x0) {
    pSVar7 = System_String__Replace(ownerId,0x20,0x2d,(MethodInfo *)0x0);
    pSVar7 = System_String__Concat("code.",pSVar7,".",(MethodInfo *)0x0);
    __this_05 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_string);
    System_Collections_Generic_List<object>___ctor(__this_05,MethodInfo_List_1_System_String);
    pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._actions;
    if ((pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
       (__this_06 = System_Collections_Generic_Dictionary<object__object>__get_Keys
                              (pSVar3,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S),
       __this_06 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)) {
      System_Collections_Generic_Dictionary_KeyCollection<object__object>__GetEnumerator
                ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                 &local_48,__this_06,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
      _Var8 = local_48;
      pIVar9 = pIStack_40;
      __this_07 = local_38;
      if (__this_05 == (System_Collections_Generic_List_object__o *)0x0) {
        while (__this_01.fields._8_8_ = pIVar9, __this_01.fields._dictionary = _Var8.genericMethod,
              __this_01.fields._currentKey = (Il2CppObject *)__this_07,
              bVar6 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__MoveNext
                                (__this_01,(MethodInfo_31D0850 *)&stack0xffffffffffffff78),
              (char)bVar6 != '\0') {
          if (__this_07 == (System_String_o *)0x0) goto LAB_03af0a20;
          bVar6 = System_String__StartsWith(__this_07,pSVar7,5,(MethodInfo *)0x0);
          if ((char)bVar6 != '\0') {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
        }
      }
      else {
        while (__this_07 = local_38, __this_00.fields._8_8_ = pIVar9,
              __this_00.fields._dictionary = _Var8.genericMethod,
              __this_00.fields._currentKey = (Il2CppObject *)__this_07,
              bVar6 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__MoveNext
                                (__this_00,(MethodInfo_31D0850 *)&stack0xffffffffffffff78),
              (char)bVar6 != '\0') {
          if (__this_07 == (System_String_o *)0x0) {
LAB_03af0a20:
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          pSVar10 = __this_07;
          bVar6 = System_String__StartsWith(__this_07,pSVar7,5,(MethodInfo *)0x0);
          lVar5 = MethodInfo_Void_Add;
          local_38 = pSVar10;
          if ((char)bVar6 != '\0') {
            piVar1 = &(__this_05->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar4 = (__this_05->fields)._items;
            if (pSVar4 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            uVar2 = (__this_05->fields)._size;
            if (uVar2 < (uint)pSVar4->max_length) {
              (__this_05->fields)._size = uVar2 + 1;
              pSVar4->m_Items[(int)uVar2] = (Il2CppObject *)__this_07;
              il2cpp_runtime_glue(pSVar4->m_Items + (int)uVar2,__this_07);
              local_38 = pSVar10;
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        (__this_05,(Il2CppObject *)__this_07,
                         *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70))
              ;
              local_38 = pSVar10;
            }
          }
        }
      }
      __this_02.fields._8_8_ = pIVar9;
      __this_02.fields._dictionary = _Var8.genericMethod;
      __this_02.fields._currentKey = (Il2CppObject *)__this_07;
      System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__Dispose
                (__this_02,(MethodInfo_31D0840 *)&stack0xffffffffffffff78);
      if (__this_05 != (System_Collections_Generic_List_object__o *)0x0) {
        System_Collections_Generic_List<object>__GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)&local_68,__this_05,
                   MethodInfo_List_1_T__Enumerator_System_String__GetEnumerato);
        while( true ) {
          __this_03.fields._8_8_ = pIVar9;
          __this_03.fields._list = _Var8.genericMethod;
          __this_03.fields._current = (Il2CppObject *)__this_07;
          bVar6 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (__this_03,(MethodInfo_3185E20 *)&local_68);
          if ((char)bVar6 == '\0') {
            __this_04.fields._8_8_ = pIVar9;
            __this_04.fields._list = _Var8.genericMethod;
            __this_04.fields._current = (Il2CppObject *)__this_07;
            System_Collections_Generic_List_Enumerator<object>__Dispose
                      (__this_04,(MethodInfo_3185E10 *)&local_68);
            return;
          }
          pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                   (__this->fields)._actions;
          if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
          System_Collections_Generic_Dictionary<object__object>__Remove
                    (pSVar3,local_58,MethodInfo_Boolean_Remove);
        }
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Code.AottgActionRegistry$$Register
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_AottgActionRegistry__Register (Gisketch_Aottg2UI_Code_AottgActionRegistry_o* __this, System_String_o* ownerId, System_Action_GisketchActionContext__o* action, const MethodInfo* method);
// 0x3af0b60

System_String_o *
Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
          (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *__this,System_String_o *ownerId,
          System_Action_GisketchActionContext__o *action,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool_conflict bVar1;
  System_String_o *str3;
  System_String_o *pSVar2;
  int local_1c;
  
  if (DAT_05701424 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&"surface");
    il2cpp_init_method_metadata(&"code.");
    il2cpp_init_method_metadata(&".");
    DAT_05701424 = '\x01';
  }
  local_1c = 0;
  if (action == (System_Action_GisketchActionContext__o *)0x0) {
    pSVar2 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  else {
    bVar1 = System_String__IsNullOrEmpty(ownerId,(MethodInfo *)0x0);
    pSVar2 = "surface";
    if ((char)bVar1 == '\0') {
      if (ownerId == (System_String_o *)0x0) goto LAB_03af0c7e;
      pSVar2 = System_String__Replace(ownerId,0x20,0x2d,(MethodInfo *)0x0);
    }
    local_1c = (__this->fields)._next;
    (__this->fields)._next = local_1c + 1;
    str3 = System_Int32__ToString((int32_t)&local_1c,(MethodInfo *)0x0);
    pSVar2 = System_String__Concat("code.",pSVar2,".",str3,(MethodInfo *)0x0);
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._actions
    ;
    if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
LAB_03af0c7e:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    System_Collections_Generic_Dictionary<object__object>__set_Item
              (__this_00,(Il2CppObject *)pSVar2,(Il2CppObject *)action,MethodInfo_Void_set_Item);
  }
  return pSVar2;
}


// Gisketch.Aottg2UI.Code.AottgActionRegistry$$TryHandle
// il2cpp: bool Gisketch_Aottg2UI_Code_AottgActionRegistry__TryHandle (Gisketch_Aottg2UI_Code_AottgActionRegistry_o* __this, System_String_o* actionId, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x3af0c90

bool_conflict
Gisketch_Aottg2UI_Code_AottgActionRegistry__TryHandle
          (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *__this,System_String_o *actionId,
          Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool_conflict bVar1;
  bool_conflict bVar2;
  Il2CppObject *local_40;
  System_String_o *local_38;
  UnityEngine_GameObject_o *pUStack_30;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *local_28;
  int32_t iStack_20;
  undefined4 uStack_1c;
  
  if (DAT_05701425 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
    DAT_05701425 = '\x01';
  }
  local_40 = (Il2CppObject *)0x0;
  bVar2 = 0;
  bVar1 = System_String__IsNullOrEmpty(actionId,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._actions
    ;
    if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
LAB_03af0d48:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    bVar1 = System_Collections_Generic_Dictionary<object__object>__TryGetValue
                      (__this_00,(Il2CppObject *)actionId,&local_40,MethodInfo_Boolean_TryGetValue);
    if ((char)bVar1 == '\0') {
      bVar2 = 0;
    }
    else {
      local_28 = context.fields.Node;
      iStack_20 = context.fields.InputSource;
      uStack_1c = context.fields._28_4_;
      local_38 = context.fields.ElementId;
      pUStack_30 = context.fields.GameObject;
      if (local_40 == (Il2CppObject *)0x0) goto LAB_03af0d48;
      (*local_40[1].monitor)(local_40[4].klass,local_40[2].monitor);
      bVar2 = 1;
    }
  }
  return bVar2;
}


// Gisketch.Aottg2UI.Code.AottgActionRegistry$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_AottgActionRegistry___ctor (Gisketch_Aottg2UI_Code_AottgActionRegistry_o* __this, const MethodInfo* method);
// 0x3af0d50

void Gisketch_Aottg2UI_Code_AottgActionRegistry___ctor
               (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *__this,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_IEqualityComparer_TKey__o *comparer;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  
  if (DAT_05701426 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_System_Action_1_Giske);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__Action_GisketchActionContext);
    il2cpp_init_method_metadata(&TypeInfo_StringComparer);
    DAT_05701426 = '\x01';
    iVar1 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_0570136f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_StringComparer);
    DAT_0570136f = '\x01';
    iVar1 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  comparer = *(System_Collections_Generic_IEqualityComparer_TKey__o **)
              (*(long *)(TypeInfo_StringComparer + 0xb8) + 0x18);
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              il2cpp_runtime_glue(TypeInfo_Dictionary_string__Action_GisketchActionContext);
  System_Collections_Generic_Dictionary<object__object>___ctor(__this_00,comparer,MethodInfo_Dictionary_2_System_String_System_Action_1_Giske);
  (__this->fields)._actions =
       (System_Collections_Generic_Dictionary_string__Action_GisketchActionContext___o *)__this_00;
  il2cpp_runtime_glue(&__this->fields);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


