// Type: CustomLogic.CustomLogicCollisionHandler
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicCollisionHandler.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/CustomLogic/Component/CustomLogicCollisionHandler.cs  [CHANGED since prior version]
// --------------------------------

// CustomLogic.CustomLogicCollisionHandler$$RegisterInstance
// il2cpp: void CustomLogic_CustomLogicCollisionHandler__RegisterInstance (CustomLogic_CustomLogicCollisionHandler_o* __this, CustomLogic_CustomLogicComponentInstance_o* classInstance, const MethodInfo* method);
// 0x3f493b0

void CustomLogic_CustomLogicCollisionHandler__RegisterInstance
               (CustomLogic_CustomLogicCollisionHandler_o *__this,
               CustomLogic_CustomLogicComponentInstance_o *classInstance,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_CustomLogicComponentInstance__o *__this_00;
  CustomLogic_CustomLogicComponentInstance_array *pCVar3;
  long lVar4;
  
  if (DAT_05703e25 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    DAT_05703e25 = '\x01';
  }
  lVar4 = MethodInfo_Void_Add;
  __this_00 = (__this->fields)._classInstances;
  if (__this_00 != (System_Collections_Generic_List_CustomLogicComponentInstance__o *)0x0) {
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pCVar3 = (__this_00->fields)._items;
    if (pCVar3 != (CustomLogic_CustomLogicComponentInstance_array *)0x0) {
      uVar2 = (__this_00->fields)._size;
      if (uVar2 < (uint)pCVar3->max_length) {
        (__this_00->fields)._size = uVar2 + 1;
        pCVar3->m_Items[(int)uVar2] = classInstance;
        il2cpp_runtime_glue(pCVar3->m_Items + (int)uVar2,classInstance);
        return;
      }
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,
                 (Il2CppObject *)classInstance,
                 *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCollisionHandler$$GetHit
// il2cpp: void CustomLogic_CustomLogicCollisionHandler__GetHit (CustomLogic_CustomLogicCollisionHandler_o* __this, Characters_BaseCharacter_o* character, System_String_o* name, int32_t damage, System_String_o* type, UnityEngine_Vector3_o position, const MethodInfo* method);
// 0x3f49450

/* WARNING: Removing unreachable block (ram,0x03f4966e) */

void CustomLogic_CustomLogicCollisionHandler__GetHit
               (CustomLogic_CustomLogicCollisionHandler_o *__this,
               Characters_BaseCharacter_o *character,System_String_o *name,int32_t damage,
               System_String_o *type,UnityEngine_Vector3_o position,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  Characters_BaseCharacter_c *pCVar3;
  System_Collections_Generic_List_CustomLogicComponentInstance__o *__this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  bool_conflict bVar4;
  CustomLogic_CustomLogicVector3Builtin_o *__this_03;
  CustomLogic_CustomLogicHumanBuiltin_o *__this_04;
  CustomLogic_CustomLogicTitanBuiltin_o *__this_05;
  CustomLogic_CustomLogicWallColossalBuiltin_o *__this_06;
  CustomLogic_CustomLogicShifterBuiltin_o *__this_07;
  float fVar5;
  UnityEngine_Vector3_o value;
  undefined8 in_stack_ffffffffffffff78;
  Il2CppObject *pIVar6;
  
  fVar5 = position.fields.z;
  if (DAT_05703e26 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BaseShifter);
    il2cpp_init_method_metadata(&TypeInfo_BasicTitan);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicShifterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicTitanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicWallColossalBuiltin);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicComponentInstance_get_Current);
    il2cpp_init_method_metadata(&TypeInfo_Human);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_CustomLogic_CustomLogicComp);
    il2cpp_init_method_metadata(&TypeInfo_WallColossalShifter);
    DAT_05703e26 = '\x01';
  }
  pIVar6 = (Il2CppObject *)0x0;
  if (character != (Characters_BaseCharacter_o *)0x0) {
    pCVar3 = character->klass;
    bVar1 = (pCVar3->_2).naturalAligment;
    bVar2 = (TypeInfo_Human->_2).naturalAligment;
    if ((bVar2 <= bVar1) && ((pCVar3->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_Human)) {
      __this_04 = (CustomLogic_CustomLogicHumanBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicHumanBuiltin);
      bVar1 = (TypeInfo_Human->_2).naturalAligment;
      if (((character->klass->_2).naturalAligment < bVar1) ||
         ((character->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_Human)) {
LAB_03f49819:
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(character);
      }
      CustomLogic_CustomLogicHumanBuiltin___ctor
                (__this_04,(Characters_Human_o *)character,(MethodInfo *)0x0);
      __this_00 = (__this->fields)._classInstances;
      goto joined_r0x03f497b4;
    }
    bVar2 = (TypeInfo_BasicTitan->_2).naturalAligment;
    if ((bVar2 <= bVar1) && ((pCVar3->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_BasicTitan)) {
      __this_05 = (CustomLogic_CustomLogicTitanBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicTitanBuiltin);
      bVar1 = (TypeInfo_BasicTitan->_2).naturalAligment;
      if (((character->klass->_2).naturalAligment < bVar1) ||
         ((character->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_BasicTitan))
      goto LAB_03f49819;
      CustomLogic_CustomLogicTitanBuiltin___ctor
                (__this_05,(Characters_BasicTitan_o *)character,(MethodInfo *)0x0);
      __this_00 = (__this->fields)._classInstances;
      goto joined_r0x03f497b4;
    }
    bVar2 = (TypeInfo_WallColossalShifter->_2).naturalAligment;
    if ((bVar2 <= bVar1) && ((pCVar3->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_WallColossalShifter)) {
      __this_06 = (CustomLogic_CustomLogicWallColossalBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicWallColossalBuiltin);
      bVar1 = (TypeInfo_WallColossalShifter->_2).naturalAligment;
      if (((character->klass->_2).naturalAligment < bVar1) ||
         ((character->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_WallColossalShifter))
      goto LAB_03f49819;
      CustomLogic_CustomLogicWallColossalBuiltin___ctor
                (__this_06,(Characters_WallColossalShifter_o *)character,(MethodInfo *)0x0);
      __this_00 = (__this->fields)._classInstances;
      goto joined_r0x03f497b4;
    }
    bVar2 = (TypeInfo_BaseShifter->_2).naturalAligment;
    if ((bVar2 <= bVar1) && ((pCVar3->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_BaseShifter)) {
      __this_07 = (CustomLogic_CustomLogicShifterBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicShifterBuiltin);
      bVar1 = (TypeInfo_BaseShifter->_2).naturalAligment;
      if (((character->klass->_2).naturalAligment < bVar1) ||
         ((character->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_BaseShifter))
      goto LAB_03f49819;
      CustomLogic_CustomLogicShifterBuiltin___ctor
                (__this_07,(Characters_BaseShifter_o *)character,(MethodInfo *)0x0);
      __this_00 = (__this->fields)._classInstances;
      goto joined_r0x03f497b4;
    }
  }
  __this_00 = (__this->fields)._classInstances;
joined_r0x03f497b4:
  if (__this_00 == (System_Collections_Generic_List_CustomLogicComponentInstance__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffff88,
             (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T__Enumerator_CustomLogic_CustomLogicComp);
  __this_01.fields._index = damage;
  __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff78;
  __this_01.fields._version = (int32_t)fVar5;
  __this_01.fields._current = pIVar6;
  bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                    (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffff88);
  if ((char)bVar4 != '\0') {
    __this_03 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
    value.fields.z = fVar5;
    value.fields.x = (float)(int)position.fields._0_8_;
    value.fields.y = (float)(int)((ulong)position.fields._0_8_ >> 0x20);
    CustomLogic_CustomLogicVector3Builtin___ctor(__this_03,value,(MethodInfo *)0x0);
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  __this_02.fields._index = damage;
  __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff78;
  __this_02.fields._version = (int32_t)fVar5;
  __this_02.fields._current = pIVar6;
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (__this_02,(MethodInfo_3185E10 *)&stack0xffffffffffffff88);
  return;
}


// CustomLogic.CustomLogicCollisionHandler$$GetHooked
// il2cpp: void CustomLogic_CustomLogicCollisionHandler__GetHooked (CustomLogic_CustomLogicCollisionHandler_o* __this, Characters_Human_o* human, UnityEngine_Vector3_o position, bool left, const MethodInfo* method);
// 0x3f49b00

/* WARNING: Removing unreachable block (ram,0x03f49c1c) */

void CustomLogic_CustomLogicCollisionHandler__GetHooked
               (CustomLogic_CustomLogicCollisionHandler_o *__this,Characters_Human_o *human,
               UnityEngine_Vector3_o position,bool_conflict left,MethodInfo *method)

{
  System_Collections_Generic_List_CustomLogicComponentInstance__o *__this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  bool_conflict bVar1;
  CustomLogic_CustomLogicHumanBuiltin_o *__this_03;
  CustomLogic_CustomLogicVector3Builtin_o *__this_04;
  float fVar2;
  UnityEngine_Vector3_o value;
  undefined1 in_stack_ffffffffffffff88 [12];
  System_Collections_Generic_List_T__o *pSVar3;
  
  fVar2 = position.fields.z;
  if (DAT_05703e27 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicComponentInstance_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_CustomLogic_CustomLogicComp);
    DAT_05703e27 = '\x01';
  }
  pSVar3 = (System_Collections_Generic_List_T__o *)0x0;
  __this_03 = (CustomLogic_CustomLogicHumanBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicHumanBuiltin);
  CustomLogic_CustomLogicHumanBuiltin___ctor(__this_03,human,(MethodInfo *)0x0);
  __this_00 = (__this->fields)._classInstances;
  if (__this_00 == (System_Collections_Generic_List_CustomLogicComponentInstance__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffff98,
             (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T__Enumerator_CustomLogic_CustomLogicComp);
  __this_01.fields._version = (int32_t)fVar2;
  __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88._0_8_;
  __this_01.fields._index = in_stack_ffffffffffffff88._8_4_;
  __this_01.fields._current = (Il2CppObject *)pSVar3;
  bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                    (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffff98);
  if ((char)bVar1 != '\0') {
    __this_04 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
    value.fields.z = fVar2;
    value.fields.x = (float)(int)position.fields._0_8_;
    value.fields.y = (float)(int)((ulong)position.fields._0_8_ >> 0x20);
    CustomLogic_CustomLogicVector3Builtin___ctor(__this_04,value,(MethodInfo *)0x0);
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  __this_02.fields._version = (int32_t)fVar2;
  __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88._0_8_;
  __this_02.fields._index = in_stack_ffffffffffffff88._8_4_;
  __this_02.fields._current = (Il2CppObject *)pSVar3;
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (__this_02,(MethodInfo_3185E10 *)&stack0xffffffffffffff98);
  return;
}


// CustomLogic.CustomLogicCollisionHandler$$OnCollisionEnter
// il2cpp: void CustomLogic_CustomLogicCollisionHandler__OnCollisionEnter (CustomLogic_CustomLogicCollisionHandler_o* __this, UnityEngine_Collision_o* other, const MethodInfo* method);
// 0x3f49ec0

void CustomLogic_CustomLogicCollisionHandler__OnCollisionEnter
               (CustomLogic_CustomLogicCollisionHandler_o *__this,UnityEngine_Collision_o *other,
               MethodInfo *method)

{
  System_Collections_Generic_List_CustomLogicComponentInstance__o *__this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  bool_conflict bVar1;
  UnityEngine_Collider_o *other_00;
  CustomLogic_BuiltinClassInstance_o *other_01;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  System_Collections_Generic_List_T__o *pSVar2;
  Il2CppMethodPointer pIVar3;
  CustomLogic_CustomLogicComponentInstance_o *__this_03;
  
  if (DAT_05703e28 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicComponentInstance_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_CustomLogic_CustomLogicComp);
    DAT_05703e28 = '\x01';
  }
  pSVar2 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar3 = (Il2CppMethodPointer)0x0;
  __this_03 = (CustomLogic_CustomLogicComponentInstance_o *)0x0;
  if (other != (UnityEngine_Collision_o *)0x0) {
    method_00 = (MethodInfo *)0x0;
    other_00 = UnityEngine_Collision__get_collider(other,(MethodInfo *)0x0);
    other_01 = CustomLogic_CustomLogicCollisionHandler__GetBuiltin(other_00,method_00);
    if (other_01 != (CustomLogic_BuiltinClassInstance_o *)0x0) {
      __this_00 = (__this->fields)._classInstances;
      if (__this_00 == (System_Collections_Generic_List_CustomLogicComponentInstance__o *)0x0)
      goto LAB_03f49fb6;
      System_Collections_Generic_List<object>__GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffc8,
                 (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T__Enumerator_CustomLogic_CustomLogicComp);
      while( true ) {
        __this_01.fields._8_8_ = pIVar3;
        __this_01.fields._list = pSVar2;
        __this_01.fields._current = (Il2CppObject *)__this_03;
        bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffffc8);
        if ((char)bVar1 == '\0') break;
        if (__this_03 == (CustomLogic_CustomLogicComponentInstance_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        CustomLogic_CustomLogicComponentInstance__OnCollisionEnter
                  (__this_03,other_01,(CustomLogic_BuiltinClassInstance_o *)0x0,in_RCX);
      }
      __this_02.fields._8_8_ = pIVar3;
      __this_02.fields._list = pSVar2;
      __this_02.fields._current = (Il2CppObject *)__this_03;
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (__this_02,(MethodInfo_3185E10 *)&stack0xffffffffffffffc8);
    }
    return;
  }
LAB_03f49fb6:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCollisionHandler$$OnCollisionStay
// il2cpp: void CustomLogic_CustomLogicCollisionHandler__OnCollisionStay (CustomLogic_CustomLogicCollisionHandler_o* __this, UnityEngine_Collision_o* other, const MethodInfo* method);
// 0x3f4a690

void CustomLogic_CustomLogicCollisionHandler__OnCollisionStay
               (CustomLogic_CustomLogicCollisionHandler_o *__this,UnityEngine_Collision_o *other,
               MethodInfo *method)

{
  System_Collections_Generic_List_CustomLogicComponentInstance__o *__this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  bool_conflict bVar1;
  UnityEngine_Collider_o *other_00;
  CustomLogic_BuiltinClassInstance_o *other_01;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  System_Collections_Generic_List_T__o *pSVar2;
  Il2CppMethodPointer pIVar3;
  CustomLogic_CustomLogicComponentInstance_o *__this_03;
  
  if (DAT_05703e29 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicComponentInstance_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_CustomLogic_CustomLogicComp);
    DAT_05703e29 = '\x01';
  }
  pSVar2 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar3 = (Il2CppMethodPointer)0x0;
  __this_03 = (CustomLogic_CustomLogicComponentInstance_o *)0x0;
  if (other != (UnityEngine_Collision_o *)0x0) {
    method_00 = (MethodInfo *)0x0;
    other_00 = UnityEngine_Collision__get_collider(other,(MethodInfo *)0x0);
    other_01 = CustomLogic_CustomLogicCollisionHandler__GetBuiltin(other_00,method_00);
    if (other_01 != (CustomLogic_BuiltinClassInstance_o *)0x0) {
      __this_00 = (__this->fields)._classInstances;
      if (__this_00 == (System_Collections_Generic_List_CustomLogicComponentInstance__o *)0x0)
      goto LAB_03f4a786;
      System_Collections_Generic_List<object>__GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffc8,
                 (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T__Enumerator_CustomLogic_CustomLogicComp);
      while( true ) {
        __this_01.fields._8_8_ = pIVar3;
        __this_01.fields._list = pSVar2;
        __this_01.fields._current = (Il2CppObject *)__this_03;
        bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffffc8);
        if ((char)bVar1 == '\0') break;
        if (__this_03 == (CustomLogic_CustomLogicComponentInstance_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        CustomLogic_CustomLogicComponentInstance__OnCollisionStay
                  (__this_03,other_01,(CustomLogic_BuiltinClassInstance_o *)0x0,in_RCX);
      }
      __this_02.fields._8_8_ = pIVar3;
      __this_02.fields._list = pSVar2;
      __this_02.fields._current = (Il2CppObject *)__this_03;
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (__this_02,(MethodInfo_3185E10 *)&stack0xffffffffffffffc8);
    }
    return;
  }
LAB_03f4a786:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCollisionHandler$$OnCollisionExit
// il2cpp: void CustomLogic_CustomLogicCollisionHandler__OnCollisionExit (CustomLogic_CustomLogicCollisionHandler_o* __this, UnityEngine_Collision_o* other, const MethodInfo* method);
// 0x3f4a9b0

void CustomLogic_CustomLogicCollisionHandler__OnCollisionExit
               (CustomLogic_CustomLogicCollisionHandler_o *__this,UnityEngine_Collision_o *other,
               MethodInfo *method)

{
  System_Collections_Generic_List_CustomLogicComponentInstance__o *__this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  bool_conflict bVar1;
  UnityEngine_Collider_o *other_00;
  CustomLogic_BuiltinClassInstance_o *other_01;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  System_Collections_Generic_List_T__o *pSVar2;
  Il2CppMethodPointer pIVar3;
  CustomLogic_CustomLogicComponentInstance_o *__this_03;
  
  if (DAT_05703e2a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicComponentInstance_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_CustomLogic_CustomLogicComp);
    DAT_05703e2a = '\x01';
  }
  pSVar2 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar3 = (Il2CppMethodPointer)0x0;
  __this_03 = (CustomLogic_CustomLogicComponentInstance_o *)0x0;
  if (other != (UnityEngine_Collision_o *)0x0) {
    method_00 = (MethodInfo *)0x0;
    other_00 = UnityEngine_Collision__get_collider(other,(MethodInfo *)0x0);
    other_01 = CustomLogic_CustomLogicCollisionHandler__GetBuiltin(other_00,method_00);
    if (other_01 != (CustomLogic_BuiltinClassInstance_o *)0x0) {
      __this_00 = (__this->fields)._classInstances;
      if (__this_00 == (System_Collections_Generic_List_CustomLogicComponentInstance__o *)0x0)
      goto LAB_03f4aaa6;
      System_Collections_Generic_List<object>__GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffc8,
                 (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T__Enumerator_CustomLogic_CustomLogicComp);
      while( true ) {
        __this_01.fields._8_8_ = pIVar3;
        __this_01.fields._list = pSVar2;
        __this_01.fields._current = (Il2CppObject *)__this_03;
        bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffffc8);
        if ((char)bVar1 == '\0') break;
        if (__this_03 == (CustomLogic_CustomLogicComponentInstance_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        CustomLogic_CustomLogicComponentInstance__OnCollisionExit
                  (__this_03,other_01,(CustomLogic_BuiltinClassInstance_o *)0x0,in_RCX);
      }
      __this_02.fields._8_8_ = pIVar3;
      __this_02.fields._list = pSVar2;
      __this_02.fields._current = (Il2CppObject *)__this_03;
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (__this_02,(MethodInfo_3185E10 *)&stack0xffffffffffffffc8);
    }
    return;
  }
LAB_03f4aaa6:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCollisionHandler$$OnTriggerEnter
// il2cpp: void CustomLogic_CustomLogicCollisionHandler__OnTriggerEnter (CustomLogic_CustomLogicCollisionHandler_o* __this, UnityEngine_Collider_o* other, const MethodInfo* method);
// 0x3f4acd0

void CustomLogic_CustomLogicCollisionHandler__OnTriggerEnter
               (CustomLogic_CustomLogicCollisionHandler_o *__this,UnityEngine_Collider_o *other,
               MethodInfo *method)

{
  float *pfVar1;
  System_Collections_Generic_List_CustomLogicComponentInstance__o *__this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  bool_conflict bVar2;
  CustomLogic_BuiltinClassInstance_o *other_00;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  float fVar3;
  System_Collections_Generic_List_T__o *pSVar4;
  Il2CppMethodPointer pIVar5;
  CustomLogic_CustomLogicComponentInstance_o *__this_03;
  
  method_00 = (MethodInfo *)other;
  if (DAT_05703e2b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicComponentInstance_get_Current);
    il2cpp_init_method_metadata();
    DAT_05703e2b = '\x01';
  }
  pSVar4 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar5 = (Il2CppMethodPointer)0x0;
  __this_03 = (CustomLogic_CustomLogicComponentInstance_o *)0x0;
  fVar3 = UnityEngine_Time__get_fixedTime((MethodInfo *)0x0);
  pfVar1 = &(__this->fields)._lastEnterTime;
  if ((fVar3 != *pfVar1) || (NAN(fVar3) || NAN(*pfVar1))) {
    fVar3 = UnityEngine_Time__get_fixedTime((MethodInfo *)0x0);
    (__this->fields)._lastEnterTime = fVar3;
    other_00 = CustomLogic_CustomLogicCollisionHandler__GetBuiltin(other,method_00);
    if (other_00 != (CustomLogic_BuiltinClassInstance_o *)0x0) {
      __this_00 = (__this->fields)._classInstances;
      if (__this_00 == (System_Collections_Generic_List_CustomLogicComponentInstance__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      System_Collections_Generic_List<object>__GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffc8,
                 (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T__Enumerator_CustomLogic_CustomLogicComp);
      while( true ) {
        __this_01.fields._8_8_ = pIVar5;
        __this_01.fields._list = pSVar4;
        __this_01.fields._current = (Il2CppObject *)__this_03;
        bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffffc8);
        if ((char)bVar2 == '\0') break;
        if (__this_03 == (CustomLogic_CustomLogicComponentInstance_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        CustomLogic_CustomLogicComponentInstance__OnCollisionEnter
                  (__this_03,other_00,(CustomLogic_BuiltinClassInstance_o *)0x0,in_RCX);
      }
      __this_02.fields._8_8_ = pIVar5;
      __this_02.fields._list = pSVar4;
      __this_02.fields._current = (Il2CppObject *)__this_03;
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (__this_02,(MethodInfo_3185E10 *)&stack0xffffffffffffffc8);
    }
  }
  return;
}


// CustomLogic.CustomLogicCollisionHandler$$OnTriggerStay
// il2cpp: void CustomLogic_CustomLogicCollisionHandler__OnTriggerStay (CustomLogic_CustomLogicCollisionHandler_o* __this, UnityEngine_Collider_o* other, const MethodInfo* method);
// 0x3f4ae60

void CustomLogic_CustomLogicCollisionHandler__OnTriggerStay
               (CustomLogic_CustomLogicCollisionHandler_o *__this,UnityEngine_Collider_o *other,
               MethodInfo *method)

{
  System_Collections_Generic_List_CustomLogicComponentInstance__o *__this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  bool_conflict bVar1;
  CustomLogic_BuiltinClassInstance_o *other_00;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  System_Collections_Generic_List_T__o *pSVar2;
  Il2CppMethodPointer pIVar3;
  CustomLogic_CustomLogicComponentInstance_o *__this_03;
  
  method_00 = (MethodInfo *)other;
  if (DAT_05703e2c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicComponentInstance_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_CustomLogic_CustomLogicComp);
    DAT_05703e2c = '\x01';
  }
  pSVar2 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar3 = (Il2CppMethodPointer)0x0;
  __this_03 = (CustomLogic_CustomLogicComponentInstance_o *)0x0;
  other_00 = CustomLogic_CustomLogicCollisionHandler__GetBuiltin(other,method_00);
  if (other_00 != (CustomLogic_BuiltinClassInstance_o *)0x0) {
    __this_00 = (__this->fields)._classInstances;
    if (__this_00 == (System_Collections_Generic_List_CustomLogicComponentInstance__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffc8,
               (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T__Enumerator_CustomLogic_CustomLogicComp);
    while( true ) {
      __this_01.fields._8_8_ = pIVar3;
      __this_01.fields._list = pSVar2;
      __this_01.fields._current = (Il2CppObject *)__this_03;
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffffc8);
      if ((char)bVar1 == '\0') break;
      if (__this_03 == (CustomLogic_CustomLogicComponentInstance_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      CustomLogic_CustomLogicComponentInstance__OnCollisionStay
                (__this_03,other_00,(CustomLogic_BuiltinClassInstance_o *)0x0,in_RCX);
    }
    __this_02.fields._8_8_ = pIVar3;
    __this_02.fields._list = pSVar2;
    __this_02.fields._current = (Il2CppObject *)__this_03;
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (__this_02,(MethodInfo_3185E10 *)&stack0xffffffffffffffc8);
  }
  return;
}


// CustomLogic.CustomLogicCollisionHandler$$OnTriggerExit
// il2cpp: void CustomLogic_CustomLogicCollisionHandler__OnTriggerExit (CustomLogic_CustomLogicCollisionHandler_o* __this, UnityEngine_Collider_o* other, const MethodInfo* method);
// 0x3f4afd0

void CustomLogic_CustomLogicCollisionHandler__OnTriggerExit
               (CustomLogic_CustomLogicCollisionHandler_o *__this,UnityEngine_Collider_o *other,
               MethodInfo *method)

{
  System_Collections_Generic_List_CustomLogicComponentInstance__o *__this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  bool_conflict bVar1;
  CustomLogic_BuiltinClassInstance_o *other_00;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  System_Collections_Generic_List_T__o *pSVar2;
  Il2CppMethodPointer pIVar3;
  CustomLogic_CustomLogicComponentInstance_o *__this_03;
  
  method_00 = (MethodInfo *)other;
  if (DAT_05703e2d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicComponentInstance_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_CustomLogic_CustomLogicComp);
    DAT_05703e2d = '\x01';
  }
  pSVar2 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar3 = (Il2CppMethodPointer)0x0;
  __this_03 = (CustomLogic_CustomLogicComponentInstance_o *)0x0;
  other_00 = CustomLogic_CustomLogicCollisionHandler__GetBuiltin(other,method_00);
  if (other_00 != (CustomLogic_BuiltinClassInstance_o *)0x0) {
    __this_00 = (__this->fields)._classInstances;
    if (__this_00 == (System_Collections_Generic_List_CustomLogicComponentInstance__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffc8,
               (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T__Enumerator_CustomLogic_CustomLogicComp);
    while( true ) {
      __this_01.fields._8_8_ = pIVar3;
      __this_01.fields._list = pSVar2;
      __this_01.fields._current = (Il2CppObject *)__this_03;
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffffc8);
      if ((char)bVar1 == '\0') break;
      if (__this_03 == (CustomLogic_CustomLogicComponentInstance_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      CustomLogic_CustomLogicComponentInstance__OnCollisionExit
                (__this_03,other_00,(CustomLogic_BuiltinClassInstance_o *)0x0,in_RCX);
    }
    __this_02.fields._8_8_ = pIVar3;
    __this_02.fields._list = pSVar2;
    __this_02.fields._current = (Il2CppObject *)__this_03;
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (__this_02,(MethodInfo_3185E10 *)&stack0xffffffffffffffc8);
  }
  return;
}


// CustomLogic.CustomLogicCollisionHandler$$GetBuiltin
// il2cpp: CustomLogic_BuiltinClassInstance_o* CustomLogic_CustomLogicCollisionHandler__GetBuiltin (UnityEngine_Collider_o* other, const MethodInfo* method);
// 0x3f4a040

CustomLogic_BuiltinClassInstance_o *
CustomLogic_CustomLogicCollisionHandler__GetBuiltin
          (UnityEngine_Collider_o *other,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  Characters_Human_c *pCVar3;
  System_Collections_Generic_Dictionary_object__object__o *pSVar4;
  CustomLogic_CustomLogicEvaluator_o *__this;
  bool_conflict bVar5;
  UnityEngine_Transform_o *pUVar6;
  Characters_Human_o *human;
  CustomLogic_CustomLogicShifterBuiltin_o *__this_00;
  UnityEngine_GameObject_o *pUVar7;
  Map_MapObject_o *obj;
  CustomLogic_CustomLogicMapObjectBuiltin_o *pCVar8;
  CustomLogic_CustomLogicHumanBuiltin_o *__this_01;
  CustomLogic_CustomLogicTitanBuiltin_o *__this_02;
  CustomLogic_CustomLogicWallColossalBuiltin_o *__this_03;
  
  if (DAT_05703e2e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BaseShifter);
    il2cpp_init_method_metadata(&TypeInfo_BasicTitan);
    il2cpp_init_method_metadata(&MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicShifterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicTitanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicWallColossalBuiltin);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_MapObject_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_Human);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_WallColossalShifter);
    DAT_05703e2e = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)other,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    return (CustomLogic_BuiltinClassInstance_o *)0x0;
  }
  if (other != (UnityEngine_Collider_o *)0x0) {
    pUVar6 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)other,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar5 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar5 != '\0') {
      return (CustomLogic_BuiltinClassInstance_o *)0x0;
    }
    pUVar6 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)other,(MethodInfo *)0x0);
    if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
      pUVar6 = UnityEngine_Transform__get_root(pUVar6,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar5 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        return (CustomLogic_BuiltinClassInstance_o *)0x0;
      }
      if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
        human = (Characters_Human_o *)
                UnityEngine_Component__GetComponent<object>
                          ((UnityEngine_Component_o *)pUVar6,MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar5 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)human,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if ((char)bVar5 == '\0') {
          if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar4 = *(System_Collections_Generic_Dictionary_object__object__o **)
                    (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x10);
          pUVar7 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pUVar6,(MethodInfo *)0x0);
          if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
          goto LAB_03f4a4d4;
          bVar5 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                            (pSVar4,(Il2CppObject *)pUVar7,MethodInfo_Boolean_ContainsKey);
          if ((char)bVar5 != '\0') {
            if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar4 = *(System_Collections_Generic_Dictionary_object__object__o **)
                      (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x10);
            pUVar7 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pUVar6,(MethodInfo *)0x0);
            if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
            goto LAB_03f4a4d4;
            obj = (Map_MapObject_o *)
                  System_Collections_Generic_Dictionary<object__object>__get_Item
                            (pSVar4,(Il2CppObject *)pUVar7,MethodInfo_MapObject_get_Item);
            if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
              il2cpp_init_class();
            }
            __this = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
            if (__this != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
              pCVar8 = CustomLogic_CustomLogicEvaluator__GetOrCreateMapObjectBuiltin
                                 (__this,obj,(MethodInfo *)0x0);
              return (CustomLogic_BuiltinClassInstance_o *)pCVar8;
            }
          }
        }
        else if (human != (Characters_Human_o *)0x0) {
          pCVar3 = human->klass;
          bVar1 = (pCVar3->_2).naturalAligment;
          bVar2 = (TypeInfo_Human->_2).naturalAligment;
          if ((bVar1 < bVar2) || ((pCVar3->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_Human)) {
            bVar2 = (TypeInfo_BasicTitan->_2).naturalAligment;
            if ((bVar1 < bVar2) || ((pCVar3->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_BasicTitan)) {
              bVar2 = (TypeInfo_WallColossalShifter->_2).naturalAligment;
              if ((bVar1 < bVar2) || ((pCVar3->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_WallColossalShifter))
              {
                bVar2 = (TypeInfo_BaseShifter->_2).naturalAligment;
                if (bVar1 < bVar2) {
                  return (CustomLogic_BuiltinClassInstance_o *)0x0;
                }
                if ((pCVar3->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_BaseShifter) {
                  return (CustomLogic_BuiltinClassInstance_o *)0x0;
                }
                __this_00 = (CustomLogic_CustomLogicShifterBuiltin_o *)
                            il2cpp_runtime_glue(TypeInfo_CustomLogicShifterBuiltin);
                bVar1 = (TypeInfo_BaseShifter->_2).naturalAligment;
                if ((bVar1 <= (human->klass->_2).naturalAligment) &&
                   ((human->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_BaseShifter)) {
                  CustomLogic_CustomLogicShifterBuiltin___ctor
                            (__this_00,(Characters_BaseShifter_o *)human,(MethodInfo *)0x0);
                  return (CustomLogic_BuiltinClassInstance_o *)__this_00;
                }
              }
              else {
                __this_03 = (CustomLogic_CustomLogicWallColossalBuiltin_o *)
                            il2cpp_runtime_glue(TypeInfo_CustomLogicWallColossalBuiltin);
                bVar1 = (TypeInfo_WallColossalShifter->_2).naturalAligment;
                if ((bVar1 <= (human->klass->_2).naturalAligment) &&
                   ((human->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_WallColossalShifter)) {
                  CustomLogic_CustomLogicWallColossalBuiltin___ctor
                            (__this_03,(Characters_WallColossalShifter_o *)human,(MethodInfo *)0x0);
                  return (CustomLogic_BuiltinClassInstance_o *)__this_03;
                }
              }
            }
            else {
              __this_02 = (CustomLogic_CustomLogicTitanBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicTitanBuiltin);
              bVar1 = (TypeInfo_BasicTitan->_2).naturalAligment;
              if ((bVar1 <= (human->klass->_2).naturalAligment) &&
                 ((human->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_BasicTitan)) {
                CustomLogic_CustomLogicTitanBuiltin___ctor
                          (__this_02,(Characters_BasicTitan_o *)human,(MethodInfo *)0x0);
                return (CustomLogic_BuiltinClassInstance_o *)__this_02;
              }
            }
          }
          else {
            __this_01 = (CustomLogic_CustomLogicHumanBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicHumanBuiltin);
            bVar1 = (TypeInfo_Human->_2).naturalAligment;
            if ((bVar1 <= (human->klass->_2).naturalAligment) &&
               ((human->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_Human)) {
              CustomLogic_CustomLogicHumanBuiltin___ctor(__this_01,human,(MethodInfo *)0x0);
              return (CustomLogic_BuiltinClassInstance_o *)__this_01;
            }
          }
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume(human);
        }
        return (CustomLogic_BuiltinClassInstance_o *)0x0;
      }
    }
  }
LAB_03f4a4d4:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCollisionHandler$$.ctor
// il2cpp: void CustomLogic_CustomLogicCollisionHandler___ctor (CustomLogic_CustomLogicCollisionHandler_o* __this, const MethodInfo* method);
// 0x3f4b140

void CustomLogic_CustomLogicCollisionHandler___ctor
               (CustomLogic_CustomLogicCollisionHandler_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_CustomLogicComponentInstance__o *__this_00;
  
  if (DAT_05703e2f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_List_1_CustomLogic_CustomLogicComponentInstance);
    il2cpp_init_method_metadata(&TypeInfo_List_CustomLogicComponentInstance);
    DAT_05703e2f = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_CustomLogicComponentInstance__o *)
              il2cpp_runtime_glue(TypeInfo_List_CustomLogicComponentInstance);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_CustomLogic_CustomLogicComponentInstance);
  (__this->fields)._classInstances = __this_00;
  il2cpp_runtime_glue(&(__this->fields)._classInstances);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


