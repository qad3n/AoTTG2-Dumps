// Type: Characters.HookUseable
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Characters/HookUseable.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Characters/Human/HookUseable.cs  [CHANGED since prior version]
// --------------------------------

// Characters.HookUseable$$.ctor
// il2cpp: void Characters_HookUseable___ctor (Characters_HookUseable_o* __this, Characters_BaseCharacter_o* owner, bool left, bool gun, const MethodInfo* method);
// 0x3fa8820

void Characters_HookUseable___ctor
               (Characters_HookUseable_o *__this,Characters_BaseCharacter_o *owner,
               bool_conflict left,bool_conflict gun,MethodInfo *method)

{
  System_Collections_Generic_List_Hook__o **ppSVar1;
  int32_t *piVar2;
  byte bVar3;
  uint uVar4;
  Characters_Hook_array *pCVar5;
  long lVar6;
  System_Collections_Generic_List_Hook__o *pSVar7;
  Characters_Hook_o *pCVar8;
  
  if (DAT_0570404b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Hook);
    il2cpp_init_method_metadata(&TypeInfo_Human);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Characters_Hook);
    il2cpp_init_method_metadata(&TypeInfo_List_Hook);
    DAT_0570404b = '\x01';
  }
  *(undefined1 *)&(__this->fields).Enabled = 1;
  pSVar7 = (System_Collections_Generic_List_Hook__o *)il2cpp_runtime_glue(TypeInfo_List_Hook);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar7,MethodInfo_List_1_Characters_Hook);
  ppSVar1 = &(__this->fields).Hooks;
  (__this->fields).Hooks = pSVar7;
  il2cpp_runtime_glue(ppSVar1);
  (__this->fields)._lastUseTime = -1000.0;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._owner = owner;
  il2cpp_runtime_glue(&(__this->fields)._owner,owner);
  (__this->fields).Cooldown = 0.0;
  (__this->fields).UsesLeft = -1;
  (__this->fields).MaxUses = -1;
  *(char *)&(__this->fields)._left = (char)left;
  (__this->fields)._hookSpeed = 3.0;
  pSVar7 = (__this->fields).Hooks;
  if (owner == (Characters_BaseCharacter_o *)0x0) {
    if (*(int *)(TypeInfo_Hook + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pCVar8 = Characters_Hook__CreateHook
                       ((Characters_Human_o *)0x0,left & 0xffU,0,0.8,gun & 0xffU,method);
    lVar6 = MethodInfo_Void_Add;
    if (pSVar7 == (System_Collections_Generic_List_Hook__o *)0x0) goto LAB_03fa8cc7;
    piVar2 = &(pSVar7->fields)._version;
    *piVar2 = *piVar2 + 1;
    pCVar5 = (pSVar7->fields)._items;
    if (pCVar5 == (Characters_Hook_array *)0x0) goto LAB_03fa8cc7;
    uVar4 = (pSVar7->fields)._size;
    if (uVar4 < (uint)pCVar5->max_length) {
      (pSVar7->fields)._size = uVar4 + 1;
      pCVar5->m_Items[(int)uVar4] = pCVar8;
      il2cpp_runtime_glue(pCVar5->m_Items + (int)uVar4,pCVar8);
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar7,(Il2CppObject *)pCVar8,
                 *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
    }
    pSVar7 = *ppSVar1;
    if (*(int *)(TypeInfo_Hook + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pCVar8 = Characters_Hook__CreateHook
                       ((Characters_Human_o *)0x0,left & 0xffU,1,0.8,gun & 0xffU,method);
    lVar6 = MethodInfo_Void_Add;
    if (pSVar7 == (System_Collections_Generic_List_Hook__o *)0x0) goto LAB_03fa8cc7;
    piVar2 = &(pSVar7->fields)._version;
    *piVar2 = *piVar2 + 1;
    pCVar5 = (pSVar7->fields)._items;
    if (pCVar5 == (Characters_Hook_array *)0x0) goto LAB_03fa8cc7;
    uVar4 = (pSVar7->fields)._size;
    if (uVar4 < (uint)pCVar5->max_length) {
      (pSVar7->fields)._size = uVar4 + 1;
      pCVar5->m_Items[(int)uVar4] = pCVar8;
      il2cpp_runtime_glue(pCVar5->m_Items + (int)uVar4,pCVar8);
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar7,(Il2CppObject *)pCVar8,
                 *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
    }
    pSVar7 = *ppSVar1;
    if (*(int *)(TypeInfo_Hook + 0xe4) == 0) {
      il2cpp_init_class();
    }
  }
  else {
    if (*(int *)(TypeInfo_Hook + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar3 = (TypeInfo_Human->_2).naturalAligment;
    if (((owner->klass->_2).naturalAligment < bVar3) ||
       ((owner->klass->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_Human)) {
LAB_03fa8b6d:
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(owner);
    }
    pCVar8 = Characters_Hook__CreateHook
                       ((Characters_Human_o *)owner,left & 0xffU,0,0.8,gun & 0xffU,method);
    lVar6 = MethodInfo_Void_Add;
    if (pSVar7 == (System_Collections_Generic_List_Hook__o *)0x0) goto LAB_03fa8cc7;
    piVar2 = &(pSVar7->fields)._version;
    *piVar2 = *piVar2 + 1;
    pCVar5 = (pSVar7->fields)._items;
    if (pCVar5 == (Characters_Hook_array *)0x0) goto LAB_03fa8cc7;
    uVar4 = (pSVar7->fields)._size;
    if (uVar4 < (uint)pCVar5->max_length) {
      (pSVar7->fields)._size = uVar4 + 1;
      pCVar5->m_Items[(int)uVar4] = pCVar8;
      il2cpp_runtime_glue(pCVar5->m_Items + (int)uVar4,pCVar8);
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar7,(Il2CppObject *)pCVar8,
                 *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
    }
    pSVar7 = *ppSVar1;
    if (*(int *)(TypeInfo_Hook + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar3 = (TypeInfo_Human->_2).naturalAligment;
    if (((owner->klass->_2).naturalAligment < bVar3) ||
       ((owner->klass->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_Human)) goto LAB_03fa8b6d;
    pCVar8 = Characters_Hook__CreateHook
                       ((Characters_Human_o *)owner,left & 0xffU,1,0.8,gun & 0xffU,method);
    lVar6 = MethodInfo_Void_Add;
    if (pSVar7 == (System_Collections_Generic_List_Hook__o *)0x0) goto LAB_03fa8cc7;
    piVar2 = &(pSVar7->fields)._version;
    *piVar2 = *piVar2 + 1;
    pCVar5 = (pSVar7->fields)._items;
    if (pCVar5 == (Characters_Hook_array *)0x0) goto LAB_03fa8cc7;
    uVar4 = (pSVar7->fields)._size;
    if (uVar4 < (uint)pCVar5->max_length) {
      (pSVar7->fields)._size = uVar4 + 1;
      pCVar5->m_Items[(int)uVar4] = pCVar8;
      il2cpp_runtime_glue(pCVar5->m_Items + (int)uVar4,pCVar8);
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar7,(Il2CppObject *)pCVar8,
                 *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
    }
    pSVar7 = *ppSVar1;
    if (*(int *)(TypeInfo_Hook + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar3 = (TypeInfo_Human->_2).naturalAligment;
    if (((owner->klass->_2).naturalAligment < bVar3) ||
       ((owner->klass->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_Human)) goto LAB_03fa8b6d;
  }
  pCVar8 = Characters_Hook__CreateHook
                     ((Characters_Human_o *)owner,left & 0xff,2,0.8,gun & 0xff,method);
  lVar6 = MethodInfo_Void_Add;
  if (pSVar7 != (System_Collections_Generic_List_Hook__o *)0x0) {
    piVar2 = &(pSVar7->fields)._version;
    *piVar2 = *piVar2 + 1;
    pCVar5 = (pSVar7->fields)._items;
    if (pCVar5 != (Characters_Hook_array *)0x0) {
      uVar4 = (pSVar7->fields)._size;
      if (uVar4 < (uint)pCVar5->max_length) {
        (pSVar7->fields)._size = uVar4 + 1;
        pCVar5->m_Items[(int)uVar4] = pCVar8;
        il2cpp_runtime_glue(pCVar5->m_Items + (int)uVar4,pCVar8);
        return;
      }
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar7,(Il2CppObject *)pCVar8,
                 *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
      return;
    }
  }
LAB_03fa8cc7:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.HookUseable$$GetRenderers
// il2cpp: System_Collections_Generic_List_Renderer__o* Characters_HookUseable__GetRenderers (Characters_HookUseable_o* __this, const MethodInfo* method);
// 0x3fa8cd0

System_Collections_Generic_List_Renderer__o *
Characters_HookUseable__GetRenderers(Characters_HookUseable_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_Hook__o *__this_00;
  UnityEngine_Renderer_o *item;
  UnityEngine_Renderer_array *pUVar3;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  long lVar4;
  bool_conflict bVar5;
  System_Collections_Generic_List_Renderer__o *__this_04;
  System_Collections_Generic_List_Enumerator_T__c *pSVar6;
  Il2CppType *pIVar7;
  Il2CppObject *pIVar8;
  undefined1 local_38 [16];
  Il2CppObject *local_28;
  
  if (DAT_0570404c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Hook_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_Characters_Hook__GetEnumera);
    il2cpp_init_method_metadata(&MethodInfo_List_1_UnityEngine_Renderer);
    il2cpp_init_method_metadata(&TypeInfo_List_Renderer);
    DAT_0570404c = '\x01';
  }
  __this_04 = (System_Collections_Generic_List_Renderer__o *)il2cpp_runtime_glue(TypeInfo_List_Renderer);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_04,MethodInfo_List_1_UnityEngine_Renderer);
  __this_00 = (__this->fields).Hooks;
  if (__this_00 == (System_Collections_Generic_List_Hook__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_38,
             (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T__Enumerator_Characters_Hook__GetEnumera);
  pSVar6 = (System_Collections_Generic_List_Enumerator_T__c *)local_38._0_8_;
  pIVar7 = (Il2CppType *)local_38._8_8_;
  pIVar8 = local_28;
  if (__this_04 == (System_Collections_Generic_List_Renderer__o *)0x0) {
    __this_02.fields._index = local_38._8_4_;
    __this_02.fields._version = local_38._12_4_;
    __this_02.fields._list = (System_Collections_Generic_List_T__o *)local_38._0_8_;
    __this_02.fields._current = local_28;
    bVar5 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (__this_02,(MethodInfo_3185E20 *)&stack0xffffffffffffffa8);
    if ((char)bVar5 != '\0') {
      if (local_28 != (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
LAB_03fa8e85:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  else {
    while (__this_01.fields._8_8_ = pIVar7,
          __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar6,
          __this_01.fields._current = pIVar8,
          bVar5 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffffa8),
          lVar4 = MethodInfo_Void_Add, local_38._0_8_ = pSVar6, local_38._8_8_ = pIVar7, local_28 = pIVar8,
          (char)bVar5 != '\0') {
      if (pIVar8 == (Il2CppObject *)0x0) goto LAB_03fa8e85;
      item = pIVar8[4].monitor;
      piVar1 = &(__this_04->fields)._version;
      *piVar1 = *piVar1 + 1;
      pUVar3 = (__this_04->fields)._items;
      if (pUVar3 == (UnityEngine_Renderer_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      uVar2 = (__this_04->fields)._size;
      if (uVar2 < (uint)pUVar3->max_length) {
        (__this_04->fields)._size = uVar2 + 1;
        pUVar3->m_Items[(int)uVar2] = item;
        il2cpp_runtime_glue(pUVar3->m_Items + (int)uVar2);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_04,(Il2CppObject *)item,
                   *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
      }
    }
  }
  __this_03.fields._8_8_ = local_38._8_8_;
  __this_03.fields._list = (System_Collections_Generic_List_T__o *)local_38._0_8_;
  __this_03.fields._current = local_28;
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (__this_03,(MethodInfo_3185E10 *)&stack0xffffffffffffffa8);
  return __this_04;
}


// Characters.HookUseable$$IsHooked
// il2cpp: bool Characters_HookUseable__IsHooked (Characters_HookUseable_o* __this, const MethodInfo* method);
// 0x3fa8f30

bool_conflict Characters_HookUseable__IsHooked(Characters_HookUseable_o *__this,MethodInfo *method)

{
  Characters_Hook_o *pCVar1;
  bool_conflict bVar2;
  uint uVar3;
  
  if (DAT_0570404d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_0570404d = '\x01';
  }
  pCVar1 = (__this->fields)._activeHook;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  uVar3 = 0;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pCVar1 = (__this->fields)._activeHook;
    if (pCVar1 == (Characters_Hook_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    uVar3 = (uint)((pCVar1->fields).State == 2);
  }
  return uVar3;
}


// Characters.HookUseable$$HasHook
// il2cpp: bool Characters_HookUseable__HasHook (Characters_HookUseable_o* __this, const MethodInfo* method);
// 0x3fa8fa0

bool_conflict Characters_HookUseable__HasHook(Characters_HookUseable_o *__this,MethodInfo *method)

{
  Characters_Hook_o *pCVar1;
  bool_conflict bVar2;
  uint uVar3;
  
  if (DAT_0570404e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_0570404e = '\x01';
  }
  pCVar1 = (__this->fields)._activeHook;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  uVar3 = 0;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pCVar1 = (__this->fields)._activeHook;
    if (pCVar1 == (Characters_Hook_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    uVar3 = (uint)((pCVar1->fields).State != 0);
  }
  return uVar3;
}


// Characters.HookUseable$$IsHooking
// il2cpp: bool Characters_HookUseable__IsHooking (Characters_HookUseable_o* __this, const MethodInfo* method);
// 0x3fa9010

bool_conflict Characters_HookUseable__IsHooking(Characters_HookUseable_o *__this,MethodInfo *method)

{
  Characters_Hook_o *pCVar1;
  bool_conflict bVar2;
  uint uVar3;
  
  if (DAT_0570404f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_0570404f = '\x01';
  }
  pCVar1 = (__this->fields)._activeHook;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  uVar3 = 0;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pCVar1 = (__this->fields)._activeHook;
    if (pCVar1 == (Characters_Hook_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    uVar3 = (uint)((pCVar1->fields).State == 1);
  }
  return uVar3;
}


// Characters.HookUseable$$IsReady
// il2cpp: bool Characters_HookUseable__IsReady (Characters_HookUseable_o* __this, const MethodInfo* method);
// 0x3fa9080

bool_conflict Characters_HookUseable__IsReady(Characters_HookUseable_o *__this,MethodInfo *method)

{
  Characters_Hook_o *pCVar1;
  bool_conflict bVar2;
  bool_conflict bVar3;
  
  if (DAT_05704050 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704050 = '\x01';
  }
  pCVar1 = (__this->fields)._activeHook;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  bVar3 = (bool_conflict)CONCAT71((uint7)(uint3)((uint)bVar2 >> 8),1);
  if ((char)bVar2 == '\0') {
    pCVar1 = (__this->fields)._activeHook;
    if (pCVar1 == (Characters_Hook_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    bVar3 = (bool_conflict)CONCAT71((int7)((ulong)pCVar1 >> 8),(pCVar1->fields).State == 0);
  }
  return bVar3;
}


// Characters.HookUseable$$GetHookState
// il2cpp: int32_t Characters_HookUseable__GetHookState (Characters_HookUseable_o* __this, const MethodInfo* method);
// 0x3fa90f0

int32_t Characters_HookUseable__GetHookState(Characters_HookUseable_o *__this,MethodInfo *method)

{
  Characters_Hook_o *pCVar1;
  
  pCVar1 = (__this->fields)._activeHook;
  if (pCVar1 != (Characters_Hook_o *)0x0) {
    return (pCVar1->fields).State;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.HookUseable$$GetHookPosition
// il2cpp: UnityEngine_Vector3_o Characters_HookUseable__GetHookPosition (Characters_HookUseable_o* __this, const MethodInfo* method);
// 0x3fa9110

UnityEngine_Vector3_o
Characters_HookUseable__GetHookPosition(Characters_HookUseable_o *__this,MethodInfo *method)

{
  Characters_Hook_o *pCVar1;
  bool_conflict bVar2;
  MethodInfo *method_00;
  UnityEngine_Vector3_Fields UVar3;
  
  if (DAT_05704051 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704051 = '\x01';
  }
  pCVar1 = (__this->fields)._activeHook;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  method_00 = (MethodInfo *)0x0;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pCVar1 = (__this->fields)._activeHook;
    if (pCVar1 != (Characters_Hook_o *)0x0) {
      UVar3 = (UnityEngine_Vector3_Fields)Characters_Hook__GetHookPosition(pCVar1,method_00);
      return (UnityEngine_Vector3_o)UVar3;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (DAT_056fdd15 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_056fdd15 = '\x01';
  }
  return (UnityEngine_Vector3_o)**(UnityEngine_Vector3_Fields **)(TypeInfo_Vector3 + 0xb8);
}


// Characters.HookUseable$$GetCLHookPosition
// il2cpp: System_Nullable_Vector3__o Characters_HookUseable__GetCLHookPosition (Characters_HookUseable_o* __this, const MethodInfo* method);
// 0x3fa91c0

System_Nullable_Vector3__o
Characters_HookUseable__GetCLHookPosition(Characters_HookUseable_o *__this,MethodInfo *method)

{
  Characters_Hook_o *pCVar1;
  System_Nullable_Vector3__Fields SVar2;
  bool_conflict bVar3;
  MethodInfo *method_00;
  undefined8 in_XMM1_Qa;
  undefined4 uVar4;
  UnityEngine_Vector3_o UVar5;
  UnityEngine_Vector3_o value;
  System_Nullable_Vector3__o __this_00;
  undefined8 local_28;
  undefined8 uStack_20;
  
  uVar4 = (undefined4)((ulong)in_XMM1_Qa >> 0x20);
  if (DAT_05704052 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Nullable_1_UnityEngine_Vector3);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704052 = '\x01';
  }
  pCVar1 = (__this->fields)._activeHook;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  method_00 = (MethodInfo *)0x0;
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    local_28 = 0;
    uStack_20 = 0;
  }
  else {
    pCVar1 = (__this->fields)._activeHook;
    if (pCVar1 == (Characters_Hook_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    UVar5 = Characters_Hook__GetHookPosition(pCVar1,method_00);
    value.fields.x = UVar5.fields.z;
    value.fields.y = (float)uVar4;
    local_28 = 0;
    uStack_20 = 0;
    value.fields.z = 0.0;
    __this_00.fields.value.fields.y = (float)(int)UVar5.fields._0_8_;
    __this_00.fields.value.fields.z = (float)(int)((ulong)UVar5.fields._0_8_ >> 0x20);
    __this_00.fields._0_8_ = &local_28;
    System_Nullable<Vector3>___ctor(__this_00,value,MethodInfo_Nullable_1_UnityEngine_Vector3);
  }
  SVar2.value.fields.y = (float)(undefined4)uStack_20;
  SVar2.value.fields.z = (float)uStack_20._4_4_;
  SVar2.hasValue = (undefined4)local_28;
  SVar2.value.fields.x = (float)local_28._4_4_;
  return (System_Nullable_Vector3__o)SVar2;
}


// Characters.HookUseable$$IsHookOffset
// il2cpp: bool Characters_HookUseable__IsHookOffset (Characters_HookUseable_o* __this, const MethodInfo* method);
// 0x3fa9270

bool_conflict
Characters_HookUseable__IsHookOffset(Characters_HookUseable_o *__this,MethodInfo *method)

{
  Characters_Hook_o *pCVar1;
  bool_conflict bVar2;
  uint uVar3;
  
  if (DAT_05704053 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704053 = '\x01';
  }
  pCVar1 = (__this->fields)._activeHook;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  uVar3 = 0;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pCVar1 = (__this->fields)._activeHook;
    if (pCVar1 == (Characters_Hook_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    uVar3 = (uint)((char)(pCVar1->fields).HasOffset != '\0');
  }
  return uVar3;
}


// Characters.HookUseable$$GetHookParent
// il2cpp: UnityEngine_Transform_o* Characters_HookUseable__GetHookParent (Characters_HookUseable_o* __this, const MethodInfo* method);
// 0x3fa92e0

UnityEngine_Transform_o *
Characters_HookUseable__GetHookParent(Characters_HookUseable_o *__this,MethodInfo *method)

{
  Characters_Hook_o *pCVar1;
  
  pCVar1 = (__this->fields)._activeHook;
  if (pCVar1 != (Characters_Hook_o *)0x0) {
    return (pCVar1->fields).HookParent;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.HookUseable$$GetHookCharacter
// il2cpp: Characters_BaseCharacter_o* Characters_HookUseable__GetHookCharacter (Characters_HookUseable_o* __this, const MethodInfo* method);
// 0x3fa9300

Characters_BaseCharacter_o *
Characters_HookUseable__GetHookCharacter(Characters_HookUseable_o *__this,MethodInfo *method)

{
  Characters_Hook_o *pCVar1;
  
  pCVar1 = (__this->fields)._activeHook;
  if (pCVar1 != (Characters_Hook_o *)0x0) {
    return (pCVar1->fields).HookCharacter;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.HookUseable$$DisableActiveHook
// il2cpp: void Characters_HookUseable__DisableActiveHook (Characters_HookUseable_o* __this, const MethodInfo* method);
// 0x3fa9320

void Characters_HookUseable__DisableActiveHook(Characters_HookUseable_o *__this,MethodInfo *method)

{
  Characters_Hook_o *pCVar1;
  bool_conflict bVar2;
  MethodInfo *method_00;
  Characters_Hook_o **ppCVar3;
  
  if (DAT_05704054 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704054 = '\x01';
  }
  pCVar1 = (__this->fields)._activeHook;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    ppCVar3 = &(__this->fields)._activeHook;
    pCVar1 = *ppCVar3;
    if (pCVar1 == (Characters_Hook_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if ((pCVar1->fields).State == 2) {
      Characters_Hook__SetHookState(pCVar1,4,method_00);
      *ppCVar3 = (Characters_Hook_o *)0x0;
      il2cpp_runtime_glue(ppCVar3,0);
      return;
    }
  }
  return;
}


// Characters.HookUseable$$DisableAnyHook
// il2cpp: void Characters_HookUseable__DisableAnyHook (Characters_HookUseable_o* __this, const MethodInfo* method);
// 0x3fa93b0

void Characters_HookUseable__DisableAnyHook(Characters_HookUseable_o *__this,MethodInfo *method)

{
  int iVar1;
  Characters_Hook_o *pCVar2;
  bool_conflict bVar3;
  MethodInfo *method_00;
  Characters_Hook_o **ppCVar4;
  int32_t state;
  
  if (DAT_05704055 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704055 = '\x01';
  }
  pCVar2 = (__this->fields)._activeHook;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  ppCVar4 = &(__this->fields)._activeHook;
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    pCVar2 = *ppCVar4;
    if (pCVar2 == (Characters_Hook_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    iVar1 = (pCVar2->fields).State;
    if (iVar1 == 1) {
      state = 3;
    }
    else {
      if (iVar1 != 2) goto LAB_03fa9429;
      state = 4;
    }
    Characters_Hook__SetHookState(pCVar2,state,method_00);
  }
LAB_03fa9429:
  *ppCVar4 = (Characters_Hook_o *)0x0;
  il2cpp_runtime_glue(ppCVar4,0);
  return;
}


// Characters.HookUseable$$LocalClearAllHooks
// il2cpp: void Characters_HookUseable__LocalClearAllHooks (Characters_HookUseable_o* __this, const MethodInfo* method);
// 0x3fa9450

void Characters_HookUseable__LocalClearAllHooks(Characters_HookUseable_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_Hook__o *__this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  bool_conflict bVar1;
  System_Collections_Generic_List_T__o *pSVar2;
  Il2CppMethodPointer pIVar3;
  Il2CppObject *pIVar4;
  
  if (DAT_05704056 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Hook_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_Characters_Hook__GetEnumera);
    DAT_05704056 = '\x01';
  }
  pSVar2 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar3 = (Il2CppMethodPointer)0x0;
  pIVar4 = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).Hooks;
  if (__this_00 != (System_Collections_Generic_List_Hook__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffd8,
               (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T__Enumerator_Characters_Hook__GetEnumera);
    while( true ) {
      __this_01.fields._8_8_ = pIVar3;
      __this_01.fields._list = pSVar2;
      __this_01.fields._current = pIVar4;
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffffd8);
      if ((char)bVar1 == '\0') {
        __this_02.fields._8_8_ = pIVar3;
        __this_02.fields._list = pSVar2;
        __this_02.fields._current = pIVar4;
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (__this_02,(MethodInfo_3185E10 *)&stack0xffffffffffffffd8);
        return;
      }
      if (pIVar4 == (Il2CppObject *)0x0) break;
      if (*(int *)&pIVar4[2].klass != 0) {
        *(undefined4 *)&pIVar4[2].klass = 4;
        *(undefined4 *)&pIVar4[10].klass = 0;
        if (pIVar4[0xb].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        UnityEngine_GameObject__SetActive
                  ((UnityEngine_GameObject_o *)pIVar4[0xb].klass,0,(MethodInfo *)0x0);
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.HookUseable$$Activate
// il2cpp: void Characters_HookUseable__Activate (Characters_HookUseable_o* __this, const MethodInfo* method);
// 0x3fa95e0

void Characters_HookUseable__Activate(Characters_HookUseable_o *__this,MethodInfo *method)

{
  Characters_HookUseable__StartHook(__this,method);
  return;
}


// Characters.HookUseable$$ActiveFixedUpdate
// il2cpp: void Characters_HookUseable__ActiveFixedUpdate (Characters_HookUseable_o* __this, const MethodInfo* method);
// 0x3fa9e30

void Characters_HookUseable__ActiveFixedUpdate(Characters_HookUseable_o *__this,MethodInfo *method)

{
  Characters_HookUseable__StartHook(__this,method);
  return;
}


// Characters.HookUseable$$FixedUpdateMock
// il2cpp: void Characters_HookUseable__FixedUpdateMock (Characters_HookUseable_o* __this, const MethodInfo* method);
// 0x3fa9e40

void Characters_HookUseable__FixedUpdateMock(Characters_HookUseable_o *__this,MethodInfo *method)

{
  Characters_Hook_o *pCVar1;
  bool_conflict bVar2;
  MethodInfo *method_00;
  
  if (DAT_05704057 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704057 = '\x01';
  }
  pCVar1 = (__this->fields)._activeHook;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  method_00 = (MethodInfo *)0x0;
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    return;
  }
  pCVar1 = (__this->fields)._activeHook;
  if (pCVar1 != (Characters_Hook_o *)0x0) {
    Characters_Hook__FixedUpdateMock(pCVar1,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.HookUseable$$StartHook
// il2cpp: void Characters_HookUseable__StartHook (Characters_HookUseable_o* __this, const MethodInfo* method);
// 0x3fa95f0

void Characters_HookUseable__StartHook(Characters_HookUseable_o *__this,MethodInfo *method)

{
  Characters_Hook_o **ppCVar1;
  byte bVar2;
  char cVar3;
  Characters_BaseCharacter_o *pCVar4;
  Characters_BaseCharacter_c *pCVar5;
  long lVar6;
  UnityEngine_Transform_o *pUVar7;
  UnityEngine_Rigidbody_o *__this_00;
  Characters_HumanStats_o *__this_01;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  bool_conflict bVar15;
  Characters_Hook_o *pCVar16;
  MethodInfo *pMVar17;
  float fVar18;
  undefined8 uVar19;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  float extraout_XMM0_Dc_01;
  float extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dc_03;
  undefined4 uVar20;
  undefined4 extraout_XMM0_Dc_04;
  undefined4 extraout_XMM0_Dc_05;
  undefined4 uVar21;
  float extraout_XMM0_Dc_06;
  float fVar22;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  float extraout_XMM0_Dd_01;
  float extraout_XMM0_Dd_02;
  undefined4 extraout_XMM0_Dd_03;
  undefined4 extraout_XMM0_Dd_04;
  undefined4 extraout_XMM0_Dd_05;
  undefined4 uVar23;
  float extraout_XMM0_Dd_06;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined8 extraout_XMM1_Qa;
  float fVar30;
  undefined8 extraout_XMM1_Qa_00;
  undefined8 uVar28;
  undefined8 extraout_XMM1_Qb;
  float fVar31;
  undefined8 extraout_XMM1_Qb_00;
  undefined1 auVar29 [16];
  float fVar32;
  undefined8 uVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar37;
  UnityEngine_Vector3_o UVar38;
  UnityEngine_Vector3_o baseVelocity;
  float local_b8;
  float fStack_b4;
  float local_8c;
  float fStack_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  float local_58;
  float fStack_54;
  undefined8 local_48;
  
  if (DAT_05704058 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Human);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    DAT_05704058 = '\x01';
  }
  pCVar16 = (__this->fields)._activeHook;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  ppCVar1 = &(__this->fields)._activeHook;
  bVar15 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pCVar16,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
  ;
  if ((char)bVar15 == '\0') {
LAB_03fa967e:
    cVar3 = (char)(__this->fields).Enabled;
  }
  else {
    if (*ppCVar1 == (Characters_Hook_o *)0x0) goto LAB_03fa9e1c;
    if (((*ppCVar1)->fields).State != 0) goto LAB_03fa967e;
    *ppCVar1 = (Characters_Hook_o *)0x0;
    il2cpp_runtime_glue(ppCVar1);
    cVar3 = (char)(__this->fields).Enabled;
  }
  if (cVar3 == '\0') {
    return;
  }
  pCVar16 = *ppCVar1;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pMVar17 = (MethodInfo *)0x0;
  bVar15 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pCVar16,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
  ;
  if ((char)bVar15 == '\0') {
    return;
  }
  pCVar16 = Characters_HookUseable__FindAvailableHook(__this,pMVar17);
  (__this->fields)._activeHook = pCVar16;
  il2cpp_runtime_glue(ppCVar1,pCVar16);
  pCVar4 = (__this->fields)._owner;
  if (pCVar4 == (Characters_BaseCharacter_o *)0x0) goto LAB_03fa9e1c;
  bVar2 = (TypeInfo_Human->_2).naturalAligment;
  if (((pCVar4->klass->_2).naturalAligment < bVar2) ||
     ((pCVar4->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_Human)) goto LAB_03fa9e21;
  pCVar5 = pCVar4->klass;
  bVar2 = (TypeInfo_Human->_2).naturalAligment;
  if (((pCVar5->_2).naturalAligment < bVar2) ||
     ((pCVar5->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_Human)) goto LAB_03fa9e21;
  uVar19 = (*(pCVar5->vtable)._66_GetAimPoint.methodPtr)();
  fVar32 = (float)((ulong)uVar19 >> 0x20);
  auVar36._8_8_ = extraout_XMM1_Qb;
  auVar36._0_8_ = extraout_XMM1_Qa;
  auVar34._8_4_ = (int)extraout_XMM1_Qb;
  auVar34._0_8_ = extraout_XMM1_Qa;
  auVar34._12_4_ = (int)((ulong)extraout_XMM1_Qb >> 0x20);
  fVar25 = extraout_XMM0_Dc;
  fVar31 = extraout_XMM0_Dd;
  if ((char)(__this->fields).HookBoth != '\0') {
    lVar6 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
    if (((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0x28), lVar6 == 0)) ||
       (pUVar7 = *(UnityEngine_Transform_o **)(lVar6 + 0x10),
       pUVar7 == (UnityEngine_Transform_o *)0x0)) goto LAB_03fa9e1c;
    UVar38 = UnityEngine_Transform__get_position(pUVar7,(MethodInfo *)0x0);
    if (DAT_056fdea6 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Math);
      DAT_056fdea6 = '\x01';
    }
    fVar37 = UVar38.fields.y - fVar32;
    local_b8 = (float)extraout_XMM1_Qa;
    fStack_b4 = (float)((ulong)extraout_XMM1_Qa >> 0x20);
    fVar25 = UVar38.fields.z - local_b8;
    fVar30 = UVar38.fields.x - (float)uVar19;
    fStack_b4 = auVar36._4_4_ - fStack_b4;
    fVar31 = UVar38.fields.y - fVar32;
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_init_class();
    }
    fStack_b4 = fStack_b4 * fStack_b4;
    fVar31 = fVar31 * fVar31;
    fVar30 = fVar30 * fVar30 + fVar37 * fVar37 + fVar25 * fVar25;
    if (fVar30 < 0.0) {
      fVar30 = sqrtf(fVar30);
      fStack_b4 = extraout_XMM0_Dc_00;
      fVar31 = extraout_XMM0_Dd_00;
    }
    else {
      fVar30 = SQRT(fVar30);
    }
    fVar30 = fVar30 * *(float *)(&DAT_00cd1000 + (ulong)(50.0 < fVar30) * 4);
    if ((char)(__this->fields)._left != '\0') {
      fVar30 = -fVar30;
      fStack_b4 = -fStack_b4;
      fVar31 = -fVar31;
    }
    pCVar4 = (__this->fields)._owner;
    if (((pCVar4 == (Characters_BaseCharacter_o *)0x0) ||
        (lVar6 = *(long *)&(pCVar4->fields).Dead, lVar6 == 0)) ||
       (pUVar7 = *(UnityEngine_Transform_o **)(lVar6 + 0x10),
       pUVar7 == (UnityEngine_Transform_o *)0x0)) goto LAB_03fa9e1c;
    UVar38 = UnityEngine_Transform__get_right(pUVar7,(MethodInfo *)0x0);
    uVar19 = CONCAT44(fVar32 + fVar30 * UVar38.fields.y,(float)uVar19 + fVar30 * UVar38.fields.x);
    fVar25 = extraout_XMM0_Dc + fStack_b4 * extraout_XMM0_Dc_01;
    fVar31 = extraout_XMM0_Dd + fVar31 * extraout_XMM0_Dd_01;
    auVar34._0_4_ = local_b8 + UVar38.fields.z * fVar30;
  }
  if ((*ppCVar1 == (Characters_Hook_o *)0x0) ||
     (pUVar7 = ((*ppCVar1)->fields).Anchor, pUVar7 == (UnityEngine_Transform_o *)0x0))
  goto LAB_03fa9e1c;
  UVar38 = UnityEngine_Transform__get_position(pUVar7,(MethodInfo *)0x0);
  if (DAT_056fde20 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056fde20 = '\x01';
  }
  fVar30 = (float)uVar19 - UVar38.fields.x;
  fVar37 = (float)((ulong)uVar19 >> 0x20) - UVar38.fields.y;
  uVar19 = auVar34._8_8_;
  fVar32 = auVar34._0_4_ - UVar38.fields.z;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_init_class();
  }
  uVar20 = auVar34._8_4_;
  uVar21 = auVar34._12_4_;
  fVar18 = fVar32 * fVar32 + fVar37 * fVar37 + fVar30 * fVar30;
  auVar29 = ZEXT816(0);
  if (fVar18 < 0.0) {
    fVar18 = sqrtf(fVar18);
    uVar20 = extraout_XMM0_Dc_03;
    uVar21 = extraout_XMM0_Dd_03;
    if (1e-05 < fVar18) goto LAB_03fa9a0a;
LAB_03fa99b0:
    if (DAT_056fdd15 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      auVar29._8_8_ = extraout_XMM1_Qb_00;
      auVar29._0_8_ = extraout_XMM1_Qa_00;
      DAT_056fdd15 = '\x01';
    }
    uVar19 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    fVar25 = (float)uVar19;
    fVar31 = (float)((ulong)uVar19 >> 0x20);
    fVar30 = 0.0;
    fVar37 = 0.0;
    fVar32 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    uVar19 = 0;
    pCVar4 = (__this->fields)._owner;
  }
  else {
    fVar18 = SQRT(fVar18);
    if (fVar18 <= 1e-05) goto LAB_03fa99b0;
LAB_03fa9a0a:
    fVar32 = fVar32 / fVar18;
    auVar13._4_4_ = fVar37;
    auVar13._0_4_ = fVar30;
    auVar13._8_4_ = fVar25 - extraout_XMM0_Dc_02;
    auVar13._12_4_ = fVar31 - extraout_XMM0_Dd_02;
    auVar11._4_4_ = fVar18;
    auVar11._0_4_ = fVar18;
    auVar11._8_4_ = uVar20;
    auVar11._12_4_ = uVar21;
    auVar29 = divps(auVar13,auVar11);
    fVar25 = auVar29._0_4_;
    fVar31 = auVar29._4_4_;
    fVar30 = auVar29._8_4_;
    fVar37 = auVar29._12_4_;
    pCVar4 = (__this->fields)._owner;
  }
  if (((pCVar4 == (Characters_BaseCharacter_o *)0x0) ||
      (lVar6 = *(long *)&(pCVar4->fields).Dead, lVar6 == 0)) ||
     (__this_00 = *(UnityEngine_Rigidbody_o **)(lVar6 + 0x18),
     __this_00 == (UnityEngine_Rigidbody_o *)0x0)) goto LAB_03fa9e1c;
  fVar18 = (__this->fields)._hookSpeed;
  pMVar17 = (MethodInfo *)0x0;
  UVar38 = UnityEngine_Rigidbody__get_velocity(__this_00,(MethodInfo *)0x0);
  fVar26 = UVar38.fields.z;
  auVar8._8_4_ = extraout_XMM0_Dc_04;
  auVar8._0_8_ = UVar38.fields._0_8_;
  auVar8._12_4_ = extraout_XMM0_Dd_04;
  if (DAT_056fdd15 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_056fdd15 = '\x01';
  }
  local_48 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
  local_8c = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  if (DAT_056fde20 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056fde20 = '\x01';
  }
  baseVelocity.fields.x = fVar25 * fVar18;
  baseVelocity.fields.y = fVar31 * fVar18;
  fVar32 = fVar32 * fVar18;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_init_class();
  }
  uVar20 = (undefined4)((ulong)uVar19 >> 0x20);
  fVar25 = fVar32 * fVar32 +
           baseVelocity.fields.y * baseVelocity.fields.y +
           baseVelocity.fields.x * baseVelocity.fields.x;
  if (fVar25 < 0.0) {
    fVar31 = sqrtf(fVar25);
    uVar21 = extraout_XMM0_Dc_05;
    uVar23 = extraout_XMM0_Dd_05;
    if (1e-05 < fVar31) goto LAB_03fa9ba3;
LAB_03fa9b4b:
    if (DAT_056fdd15 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fdd15 = '\x01';
    }
    uVar28 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    fVar18 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  }
  else {
    fVar31 = SQRT(fVar25);
    uVar21 = (int)uVar19;
    uVar23 = uVar20;
    if (fVar31 <= 1e-05) goto LAB_03fa9b4b;
LAB_03fa9ba3:
    fVar18 = fVar32 / fVar31;
    auVar14._4_4_ = baseVelocity.fields.y;
    auVar14._0_4_ = baseVelocity.fields.x;
    auVar14._8_4_ = fVar30 * 0.0;
    auVar14._12_4_ = fVar37 * 0.0;
    auVar10._4_4_ = fVar31;
    auVar10._0_4_ = fVar31;
    auVar10._8_4_ = uVar21;
    auVar10._12_4_ = uVar23;
    auVar36 = divps(auVar14,auVar10);
    uVar28 = auVar36._0_8_;
  }
  if (DAT_056fde20 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056fde20 = '\x01';
  }
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_init_class();
  }
  local_78 = UVar38.fields.x;
  fStack_74 = UVar38.fields.y;
  fStack_80 = auVar29._8_4_;
  fStack_7c = auVar29._12_4_;
  fVar31 = fVar26 * fVar26 + fStack_74 * fStack_74 + local_78 * local_78;
  if (fVar31 < 0.0) {
    fVar31 = sqrtf(fVar31);
    fVar22 = extraout_XMM0_Dc_06;
    fVar24 = extraout_XMM0_Dd_06;
    if (1e-05 < fVar31) goto LAB_03fa9c60;
LAB_03fa9c20:
    if (DAT_056fdd15 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fdd15 = '\x01';
    }
    uVar33 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    fVar27 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  }
  else {
    fVar31 = SQRT(fVar31);
    fVar22 = fStack_80;
    fVar24 = fStack_7c;
    if (fVar31 <= 1e-05) goto LAB_03fa9c20;
LAB_03fa9c60:
    fVar27 = fVar26 / fVar31;
    auVar9._4_4_ = fVar31;
    auVar9._0_4_ = fVar31;
    auVar9._8_4_ = fVar22;
    auVar9._12_4_ = fVar24;
    auVar36 = divps(auVar8,auVar9);
    uVar33 = auVar36._0_8_;
  }
  local_58 = (float)uVar28;
  fStack_54 = (float)((ulong)uVar28 >> 0x20);
  fVar31 = acosf(fStack_54 * (float)((ulong)uVar33 >> 0x20) + local_58 * (float)uVar33 +
                 fVar18 * fVar27);
  if (90.0 < ABS(fVar31 * 57.29578)) {
LAB_03fa9db4:
    pCVar16 = *ppCVar1;
  }
  else {
    if (DAT_056fe076 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Mathf);
      DAT_056fe076 = '\x01';
    }
    if (**(float **)(TypeInfo_Mathf + 0xb8) <= fVar25) {
      fVar31 = fVar26 * fVar32 +
               fStack_74 * baseVelocity.fields.y + local_78 * baseVelocity.fields.x;
      auVar35._0_4_ = fVar31 * baseVelocity.fields.x;
      auVar35._4_4_ = fVar31 * baseVelocity.fields.y;
      auVar35._8_4_ = fStack_80 * fVar30 * 0.0;
      auVar35._12_4_ = fStack_7c * fVar37 * 0.0;
      local_8c = (fVar32 * fVar31) / fVar25;
      auVar12._4_4_ = fVar25;
      auVar12._0_4_ = fVar25;
      auVar12._8_4_ = (int)uVar19;
      auVar12._12_4_ = uVar20;
      auVar36 = divps(auVar35,auVar12);
      local_48 = auVar36._0_8_;
      goto LAB_03fa9db4;
    }
    if (DAT_056fdd15 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fdd15 = '\x01';
    }
    local_48 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    local_8c = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    pCVar16 = *ppCVar1;
  }
  if (pCVar16 != (Characters_Hook_o *)0x0) {
    baseVelocity.fields.z = fVar32;
    UVar38.fields.z = local_8c;
    UVar38.fields.x = (float)(int)local_48;
    UVar38.fields.y = (float)(int)((ulong)local_48 >> 0x20);
    Characters_Hook__SetHooking(pCVar16,baseVelocity,UVar38,pMVar17);
    pCVar4 = (__this->fields)._owner;
    if (pCVar4 != (Characters_BaseCharacter_o *)0x0) {
      bVar2 = (TypeInfo_Human->_2).naturalAligment;
      if (((pCVar4->klass->_2).naturalAligment < bVar2) ||
         ((pCVar4->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_Human)) {
LAB_03fa9e21:
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume();
      }
      __this_01 = *(Characters_HumanStats_o **)&pCVar4[1].fields.MaxFootstepDistance;
      if (__this_01 != (Characters_HumanStats_o *)0x0) {
        Characters_HumanStats__UseHookGas(__this_01,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_03fa9e1c:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.HookUseable$$Deactivate
// il2cpp: void Characters_HookUseable__Deactivate (Characters_HookUseable_o* __this, const MethodInfo* method);
// 0x3faa150

void Characters_HookUseable__Deactivate(Characters_HookUseable_o *__this,MethodInfo *method)

{
  return;
}


// Characters.HookUseable$$FindAvailableHook
// il2cpp: Characters_Hook_o* Characters_HookUseable__FindAvailableHook (Characters_HookUseable_o* __this, const MethodInfo* method);
// 0x3fa9ec0

Characters_Hook_o *
Characters_HookUseable__FindAvailableHook(Characters_HookUseable_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_Hook__o *pSVar1;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar2;
  Characters_Hook_o *pCVar3;
  System_Collections_Generic_List_Enumerator_T__c *pSVar4;
  Il2CppType *pIVar5;
  undefined1 local_48 [16];
  Characters_Hook_o *local_38;
  
  if (DAT_05704059 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Hook_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_Characters_Hook__GetEnumera);
    il2cpp_init_method_metadata(&MethodInfo_Hook_get_Item);
    DAT_05704059 = '\x01';
  }
  pSVar1 = (__this->fields).Hooks;
  if (pSVar1 == (System_Collections_Generic_List_Hook__o *)0x0) {
LAB_03faa065:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
             (System_Collections_Generic_List_object__o *)pSVar1,MethodInfo_List_1_T__Enumerator_Characters_Hook__GetEnumera);
  pSVar4 = (System_Collections_Generic_List_Enumerator_T__c *)local_48._0_8_;
  pIVar5 = (Il2CppType *)local_48._8_8_;
  pCVar3 = local_38;
  do {
    __this_00.fields._8_8_ = pIVar5;
    __this_00.fields._list = (System_Collections_Generic_List_T__o *)pSVar4;
    __this_00.fields._current = (Il2CppObject *)pCVar3;
    bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (__this_00,(MethodInfo_3185E20 *)&stack0xffffffffffffff98);
    if ((char)bVar2 == '\0') {
      __this_01.fields._8_8_ = pIVar5;
      __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar4;
      __this_01.fields._current = (Il2CppObject *)pCVar3;
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (__this_01,(MethodInfo_3185E10 *)&stack0xffffffffffffff98);
      pSVar1 = (__this->fields).Hooks;
      if (pSVar1 == (System_Collections_Generic_List_Hook__o *)0x0) goto LAB_03faa065;
      System_Collections_Generic_List<object>__GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
                 (System_Collections_Generic_List_object__o *)pSVar1,MethodInfo_List_1_T__Enumerator_Characters_Hook__GetEnumera);
      pSVar4 = (System_Collections_Generic_List_Enumerator_T__c *)local_48._0_8_;
      pIVar5 = (Il2CppType *)local_48._8_8_;
      pCVar3 = local_38;
      goto LAB_03fa9fe0;
    }
    if (pCVar3 == (Characters_Hook_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  } while ((pCVar3->fields).State != 0);
LAB_03faa005:
  __this_03.fields._8_8_ = pIVar5;
  __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar4;
  __this_03.fields._current = (Il2CppObject *)pCVar3;
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (__this_03,(MethodInfo_3185E10 *)&stack0xffffffffffffff98);
  return pCVar3;
  while( true ) {
    if (pCVar3 == (Characters_Hook_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if ((pCVar3->fields).State - 3U < 2) break;
LAB_03fa9fe0:
    __this_02.fields._8_8_ = pIVar5;
    __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar4;
    __this_02.fields._current = (Il2CppObject *)pCVar3;
    bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (__this_02,(MethodInfo_3185E20 *)&stack0xffffffffffffff98);
    if ((char)bVar2 == '\0') {
      __this_04.fields._8_8_ = pIVar5;
      __this_04.fields._list = (System_Collections_Generic_List_T__o *)pSVar4;
      __this_04.fields._current = (Il2CppObject *)pCVar3;
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (__this_04,(MethodInfo_3185E10 *)&stack0xffffffffffffff98);
      pSVar1 = (__this->fields).Hooks;
      if (pSVar1 != (System_Collections_Generic_List_Hook__o *)0x0) {
        pCVar3 = (Characters_Hook_o *)
                 System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar1,0,MethodInfo_Hook_get_Item);
        return pCVar3;
      }
      goto LAB_03faa065;
    }
  }
  goto LAB_03faa005;
}


