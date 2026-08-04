// Type: CustomLogic.CustomLogicCollisionHandler
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicCollisionHandler.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Component/CustomLogicCollisionHandler.cs
// --------------------------------

// CustomLogic.CustomLogicCollisionHandler$$RegisterInstance
// il2cpp: void CustomLogic_CustomLogicCollisionHandler__RegisterInstance (CustomLogic_CustomLogicCollisionHandler_o* __this, CustomLogic_CustomLogicComponentInstance_o* classInstance, const MethodInfo* method);
// 0x42548d0

void CustomLogic_CustomLogicCollisionHandler__RegisterInstance
               (CustomLogic_CustomLogicCollisionHandler_o *__this,
               CustomLogic_CustomLogicComponentInstance_o *classInstance,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  CustomLogic_CustomLogicComponentInstance_array *pCVar5;
  Characters_Human_c *pCVar6;
  System_Collections_Generic_List_object__o *__this_00;
  CustomLogic_CustomLogicEvaluator_o *__this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  System_Collections_Generic_List_Enumerator_object__o __this_07;
  System_Collections_Generic_List_Enumerator_object__o __this_08;
  System_Collections_Generic_List_Enumerator_object__o __this_09;
  System_String_o *methodName;
  bool_conflict bVar7;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar8;
  CustomLogic_CustomLogicTitanBuiltin_o *__this_10;
  CustomLogic_CustomLogicWallColossalBuiltin_o *__this_11;
  CustomLogic_CustomLogicShifterBuiltin_o *__this_12;
  undefined8 uVar9;
  CustomLogic_CustomLogicClassInstance_o *classInstance_00;
  System_Object_array *parameterValues;
  long lVar10;
  Il2CppObject *pIVar11;
  CustomLogic_CustomLogicHumanBuiltin_o *pCVar12;
  long *plVar13;
  long in_RCX;
  Il2CppObject *extraout_RDX;
  Characters_Human_o *pCVar14;
  System_Collections_Generic_List_CustomLogicComponentInstance__o *__this_13;
  Il2CppObject *in_R8;
  Il2CppObject *in_R9;
  float in_XMM1_Da;
  undefined1 auVar15 [12];
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o value_00;
  undefined1 in_stack_fffffffffffffea0 [12];
  System_Collections_Generic_List_T__o *pSVar16;
  undefined8 in_stack_ffffffffffffff60;
  undefined4 uVar17;
  float fVar18;
  Characters_Human_o *pCStack_80;
  
  pCVar14 = (Characters_Human_o *)classInstance;
  if (g_data_057adb90 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    g_data_057adb90 = '\x01';
  }
  lVar10 = MethodInfo_Void_Add;
  __this_13 = (__this->fields)._classInstances;
  if (__this_13 != (System_Collections_Generic_List_CustomLogicComponentInstance__o *)0x0) {
    piVar1 = &(__this_13->fields)._version;
    *piVar1 = *piVar1 + 1;
    pCVar5 = (__this_13->fields)._items;
    in_RCX = lVar10;
    if (pCVar5 != (CustomLogic_CustomLogicComponentInstance_array *)0x0) {
      uVar4 = (__this_13->fields)._size;
      if ((uint)pCVar5->max_length <= uVar4) {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_13,(Il2CppObject *)classInstance,
                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
        return;
      }
      (__this_13->fields)._size = uVar4 + 1;
      pCVar5->m_Items[(int)uVar4] = classInstance;
      il2cpp_runtime_helper_022b4080(pCVar5->m_Items + (int)uVar4,classInstance);
      return;
    }
  }
  uVar17 = (undefined4)in_RCX;
  uVar9 = il2cpp_runtime_helper_022b2c90();
  fVar18 = in_XMM1_Da;
  if (g_data_057adb91 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseShifter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_BasicTitan);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicHumanBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicShifterBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicTitanBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicWallColossalBuiltin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicComponentInstance_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Human);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_CustomLogic_CustomLogicComponentInst);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WallColossalShifter);
    g_data_057adb91 = '\x01';
  }
  pIVar11 = (Il2CppObject *)0x0;
  pCStack_80 = (Characters_Human_o *)0x0;
  if (pCVar14 == (Characters_Human_o *)0x0) {
label_04254b11:
    __this_00 = (System_Collections_Generic_List_object__o *)(__this_13->fields)._syncRoot;
joined_r0x04254b1b:
    while (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
label_04254c2c:
      __this_10 = (CustomLogic_CustomLogicTitanBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicTitanBuiltin);
      bVar2 = (((Il2CppClass *)__this->klass)->_2).naturalAligment;
      if (((pCVar14->klass->_2).naturalAligment < bVar2) ||
         ((pCVar14->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)__this->klass))
      goto label_04254d39;
      CustomLogic_CustomLogicTitanBuiltin___ctor
                (__this_10,(Characters_BasicTitan_o *)pCVar14,(MethodInfo *)0x0);
      __this_00 = (System_Collections_Generic_List_object__o *)(__this_13->fields)._syncRoot;
    }
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffff70,__this_00,
               MethodInfo_List_1_T_Enumerator_CustomLogic_CustomLogicComponentInst);
    __this_06.fields._index = uVar17;
    __this_06.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff60;
    __this_06.fields._version = (int32_t)fVar18;
    __this_06.fields._current = pIVar11;
    bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (__this_06,(MethodInfo_321A1D0 *)&stack0xffffffffffffff70);
    if ((char)bVar7 == '\0') {
      __this_07.fields._index = uVar17;
      __this_07.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff60;
      __this_07.fields._version = (int32_t)fVar18;
      __this_07.fields._current = pIVar11;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_07,(MethodInfo_321A1C0 *)&stack0xffffffffffffff70);
      return;
    }
    in_XMM1_Da = fVar18;
    pCVar8 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    value.fields.z = in_XMM1_Da;
    value.fields.x = (float)(int)uVar9;
    value.fields.y = (float)(int)((ulong)uVar9 >> 0x20);
    fVar18 = in_XMM1_Da;
    CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar8,value,(MethodInfo *)0x0);
    il2cpp_runtime_helper_022b2c90();
    pCVar14 = pCStack_80;
  }
  else {
    __this = (CustomLogic_CustomLogicCollisionHandler_o *)&TypeInfo_Human;
    pCVar6 = pCVar14->klass;
    bVar2 = (pCVar6->_2).naturalAligment;
    bVar3 = (TypeInfo_Human->_2).naturalAligment;
    if ((bVar2 < bVar3) || ((pCVar6->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_Human)) {
      __this = (CustomLogic_CustomLogicCollisionHandler_o *)&TypeInfo_BasicTitan;
      bVar3 = (TypeInfo_BasicTitan->_2).naturalAligment;
      if ((bVar3 <= bVar2) && ((pCVar6->_2).typeHierarchy[(ulong)bVar3 - 1] == TypeInfo_BasicTitan))
      goto label_04254c2c;
      __this = (CustomLogic_CustomLogicCollisionHandler_o *)&TypeInfo_WallColossalShifter;
      bVar3 = (TypeInfo_WallColossalShifter->_2).naturalAligment;
      if ((bVar2 < bVar3) || ((pCVar6->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_WallColossalShifter)) {
        __this = (CustomLogic_CustomLogicCollisionHandler_o *)&TypeInfo_BaseShifter;
        bVar3 = (TypeInfo_BaseShifter->_2).naturalAligment;
        if ((bVar2 < bVar3) || ((pCVar6->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_BaseShifter))
        goto label_04254b11;
        __this_12 = (CustomLogic_CustomLogicShifterBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicShifterBuiltin);
        bVar2 = (TypeInfo_BaseShifter->_2).naturalAligment;
        if ((bVar2 <= (pCVar14->klass->_2).naturalAligment) &&
           ((pCVar14->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_BaseShifter)) {
          CustomLogic_CustomLogicShifterBuiltin___ctor
                    (__this_12,(Characters_BaseShifter_o *)pCVar14,(MethodInfo *)0x0);
          __this_00 = (System_Collections_Generic_List_object__o *)(__this_13->fields)._syncRoot;
          goto joined_r0x04254b1b;
        }
      }
      else {
        __this_11 = (CustomLogic_CustomLogicWallColossalBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicWallColossalBuiltin);
        bVar2 = (TypeInfo_WallColossalShifter->_2).naturalAligment;
        if ((bVar2 <= (pCVar14->klass->_2).naturalAligment) &&
           ((pCVar14->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_WallColossalShifter)) {
          CustomLogic_CustomLogicWallColossalBuiltin___ctor
                    (__this_11,(Characters_WallColossalShifter_o *)pCVar14,(MethodInfo *)0x0);
          __this_00 = (System_Collections_Generic_List_object__o *)(__this_13->fields)._syncRoot;
          goto joined_r0x04254b1b;
        }
      }
    }
    else {
      pCVar12 = (CustomLogic_CustomLogicHumanBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicHumanBuiltin);
      bVar2 = (TypeInfo_Human->_2).naturalAligment;
      if ((bVar2 <= (pCVar14->klass->_2).naturalAligment) &&
         ((pCVar14->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_Human)) {
        CustomLogic_CustomLogicHumanBuiltin___ctor(pCVar12,pCVar14,(MethodInfo *)0x0);
        __this_00 = (System_Collections_Generic_List_object__o *)(__this_13->fields)._syncRoot;
        goto joined_r0x04254b1b;
      }
    }
  }
label_04254d39:
  auVar15 = il2cpp_runtime_helper_022b2fd0(pCVar14);
  uVar9 = auVar15._0_8_;
  if (auVar15._8_4_ == 1) {
    plVar13 = (long *)__cxa_begin_catch(uVar9);
    lVar10 = *plVar13;
    __cxa_end_catch();
    __this_08.fields._index = uVar17;
    __this_08.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff60;
    __this_08.fields._version = (int32_t)fVar18;
    __this_08.fields._current = pIVar11;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_08,(MethodInfo_321A1C0 *)&stack0xffffffffffffff70);
    if (lVar10 == 0) {
      return;
    }
    uVar9 = il2cpp_runtime_helper_022fefe0(lVar10);
  }
  else {
    lVar10 = 0;
  }
  __this_09.fields._index = uVar17;
  __this_09.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff60;
  __this_09.fields._version = (int32_t)fVar18;
  __this_09.fields._current = pIVar11;
  pIVar11 = MethodInfo_Void_Dispose;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_09,(MethodInfo_321A1C0 *)&stack0xffffffffffffff70);
  if (lVar10 == 0) {
    _Unwind_Resume(uVar9);
  }
  classInstance_00 = (CustomLogic_CustomLogicClassInstance_o *)il2cpp_runtime_helper_022fefe0(lVar10);
  il2cpp_runtime_helper_01f66400();
  if (g_data_057adba1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&"OnGetHit");
    g_data_057adba1 = '\x01';
  }
  pCVar14 = (Characters_Human_o *)&g_data_00000005;
  lVar10 = TypeInfo_object;
  parameterValues = (System_Object_array *)il2cpp_runtime_helper_022b2a40();
  if (parameterValues == (System_Object_array *)0x0) goto label_0425501a;
  if ((pIVar11 == (Il2CppObject *)0x0) || (lVar10 = il2cpp_runtime_helper_023051f0(pIVar11), lVar10 != 0)) {
    if ((int)parameterValues->max_length != 0) {
      parameterValues->m_Items[0] = pIVar11;
      il2cpp_runtime_helper_022b4080(parameterValues->m_Items);
      if ((extraout_RDX != (Il2CppObject *)0x0) && (lVar10 = il2cpp_runtime_helper_023051f0(extraout_RDX), lVar10 == 0))
      goto label_0425500b;
      if (1 < (uint)parameterValues->max_length) {
        parameterValues->m_Items[1] = extraout_RDX;
        il2cpp_runtime_helper_022b4080(parameterValues->m_Items + 1,extraout_RDX);
        pIVar11 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8);
        if ((pIVar11 != (Il2CppObject *)0x0) && (lVar10 = il2cpp_runtime_helper_023051f0(pIVar11), lVar10 == 0))
        goto label_0425500b;
        if (2 < (uint)parameterValues->max_length) {
          parameterValues->m_Items[2] = pIVar11;
          il2cpp_runtime_helper_022b4080(parameterValues->m_Items + 2);
          if ((in_R8 != (Il2CppObject *)0x0) && (lVar10 = il2cpp_runtime_helper_023051f0(in_R8), lVar10 == 0))
          goto label_0425500b;
          if (3 < (uint)parameterValues->max_length) {
            parameterValues->m_Items[3] = in_R8;
            il2cpp_runtime_helper_022b4080(parameterValues->m_Items + 3);
            if ((in_R9 != (Il2CppObject *)0x0) && (lVar10 = il2cpp_runtime_helper_023051f0(in_R9), lVar10 == 0))
            goto label_0425500b;
            if (4 < (uint)parameterValues->max_length) {
              parameterValues->m_Items[4] = in_R9;
              il2cpp_runtime_helper_022b4080(parameterValues->m_Items + 4,in_R9);
              methodName = "OnGetHit";
              if (g_data_057adba3 == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
                g_data_057adba3 = '\x01';
              }
              if ((char)(classInstance_00->fields).Enabled != '\0') {
                if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                __this_01 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
                if ((__this_01 != (CustomLogic_CustomLogicEvaluator_o *)0x0) &&
                   (bVar7 = CustomLogic_CustomLogicEvaluator__HasMethod
                                      (__this_01,classInstance_00,methodName,(MethodInfo *)0x0),
                   (char)bVar7 != '\0')) {
                  CustomLogic_CustomLogicEvaluator__EvaluateMethod
                            (__this_01,classInstance_00,methodName,parameterValues,0,(MethodInfo *)0x0);
                }
              }
              return;
            }
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_0425500b:
  lVar10 = il2cpp_runtime_helper_0231b270();
  pCVar14 = (Characters_Human_o *)0x0;
  il2cpp_runtime_helper_022b2b10();
label_0425501a:
  uVar9 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057adb92 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicHumanBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicComponentInstance_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_CustomLogic_CustomLogicComponentInst);
    g_data_057adb92 = '\x01';
  }
  pSVar16 = (System_Collections_Generic_List_T__o *)0x0;
  pCVar12 = (CustomLogic_CustomLogicHumanBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicHumanBuiltin);
  CustomLogic_CustomLogicHumanBuiltin___ctor(pCVar12,pCVar14,(MethodInfo *)0x0);
  if (*(System_Collections_Generic_List_object__o **)(lVar10 + 0x20) !=
      (System_Collections_Generic_List_object__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xfffffffffffffeb0,
               *(System_Collections_Generic_List_object__o **)(lVar10 + 0x20),MethodInfo_List_1_T_Enumerator_CustomLogic_CustomLogicComponentInst);
    __this_02.fields._version = (int32_t)in_XMM1_Da;
    __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffea0._0_8_;
    __this_02.fields._index = in_stack_fffffffffffffea0._8_4_;
    __this_02.fields._current = (Il2CppObject *)pSVar16;
    bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (__this_02,(MethodInfo_321A1D0 *)&stack0xfffffffffffffeb0);
    if ((char)bVar7 == '\0') {
      __this_03.fields._version = (int32_t)in_XMM1_Da;
      __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffea0._0_8_;
      __this_03.fields._index = in_stack_fffffffffffffea0._8_4_;
      __this_03.fields._current = (Il2CppObject *)pSVar16;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_03,(MethodInfo_321A1C0 *)&stack0xfffffffffffffeb0);
      return;
    }
    pCVar8 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    value_00.fields.z = in_XMM1_Da;
    value_00.fields.x = (float)(int)uVar9;
    value_00.fields.y = (float)(int)((ulong)uVar9 >> 0x20);
    CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar8,value_00,(MethodInfo *)0x0);
    il2cpp_runtime_helper_022b2c90();
  }
  auVar15 = il2cpp_runtime_helper_022b2c90();
  if (auVar15._8_4_ == 1) {
    plVar13 = (long *)__cxa_begin_catch(auVar15._0_8_);
    lVar10 = *plVar13;
    __cxa_end_catch();
    __this_04.fields._version = (int32_t)in_XMM1_Da;
    __this_04.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffea0._0_8_;
    __this_04.fields._index = in_stack_fffffffffffffea0._8_4_;
    __this_04.fields._current = (Il2CppObject *)pSVar16;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_04,(MethodInfo_321A1C0 *)&stack0xfffffffffffffeb0);
    if (lVar10 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar10);
  }
  __this_05.fields._version = (int32_t)in_XMM1_Da;
  __this_05.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffea0._0_8_;
  __this_05.fields._index = in_stack_fffffffffffffea0._8_4_;
  __this_05.fields._current = (Il2CppObject *)pSVar16;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_05,(MethodInfo_321A1C0 *)&stack0xfffffffffffffeb0);
  _Unwind_Resume(auVar15._0_8_);
}


// CustomLogic.CustomLogicCollisionHandler$$GetHit
// il2cpp: void CustomLogic_CustomLogicCollisionHandler__GetHit (CustomLogic_CustomLogicCollisionHandler_o* __this, Characters_BaseCharacter_o* character, System_String_o* name, int32_t damage, System_String_o* type, UnityEngine_Vector3_o position, const MethodInfo* method);
// 0x4254970

void CustomLogic_CustomLogicCollisionHandler__GetHit
               (CustomLogic_CustomLogicCollisionHandler_o *__this,Characters_BaseCharacter_o *character,
               System_String_o *name,int32_t damage,System_String_o *type,UnityEngine_Vector3_o position,
               MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  Characters_BaseCharacter_c *pCVar3;
  System_Collections_Generic_List_CustomLogicComponentInstance__o *__this_00;
  CustomLogic_CustomLogicEvaluator_o *__this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  System_Collections_Generic_List_Enumerator_object__o __this_07;
  System_Collections_Generic_List_Enumerator_object__o __this_08;
  System_Collections_Generic_List_Enumerator_object__o __this_09;
  System_String_o *methodName;
  bool_conflict bVar4;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar5;
  CustomLogic_CustomLogicTitanBuiltin_o *__this_10;
  CustomLogic_CustomLogicWallColossalBuiltin_o *__this_11;
  CustomLogic_CustomLogicShifterBuiltin_o *__this_12;
  undefined8 uVar6;
  CustomLogic_CustomLogicClassInstance_o *classInstance;
  System_Object_array *parameterValues;
  long lVar7;
  Il2CppObject *pIVar8;
  CustomLogic_CustomLogicHumanBuiltin_o *pCVar9;
  long *plVar10;
  Il2CppObject *extraout_RDX;
  long *unaff_RBX;
  Characters_Human_o *human;
  float fVar11;
  undefined1 auVar12 [12];
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o value_00;
  undefined1 in_stack_fffffffffffffeb8 [12];
  System_Collections_Generic_List_T__o *pSVar13;
  undefined8 in_stack_ffffffffffffff78;
  float fVar14;
  Characters_BaseCharacter_o *local_68;
  
  fVar11 = position.fields.z;
  fVar14 = fVar11;
  if (g_data_057adb91 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseShifter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_BasicTitan);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicHumanBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicShifterBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicTitanBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicWallColossalBuiltin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicComponentInstance_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Human);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_CustomLogic_CustomLogicComponentInst);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WallColossalShifter);
    g_data_057adb91 = '\x01';
  }
  pIVar8 = (Il2CppObject *)0x0;
  local_68 = (Characters_BaseCharacter_o *)0x0;
  if (character == (Characters_BaseCharacter_o *)0x0) {
label_04254b11:
    __this_00 = (__this->fields)._classInstances;
joined_r0x04254b1b:
    while (__this_00 == (System_Collections_Generic_List_CustomLogicComponentInstance__o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
label_04254c2c:
      __this_10 = (CustomLogic_CustomLogicTitanBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicTitanBuiltin);
      bVar1 = (((Il2CppClass *)*unaff_RBX)->_2).naturalAligment;
      if (((character->klass->_2).naturalAligment < bVar1) ||
         ((character->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)*unaff_RBX))
      goto label_04254d39;
      CustomLogic_CustomLogicTitanBuiltin___ctor
                (__this_10,(Characters_BasicTitan_o *)character,(MethodInfo *)0x0);
      __this_00 = (__this->fields)._classInstances;
    }
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffff88,
               (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T_Enumerator_CustomLogic_CustomLogicComponentInst);
    __this_06.fields._index = damage;
    __this_06.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff78;
    __this_06.fields._version = (int32_t)fVar14;
    __this_06.fields._current = pIVar8;
    bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (__this_06,(MethodInfo_321A1D0 *)&stack0xffffffffffffff88);
    if ((char)bVar4 == '\0') {
      __this_07.fields._index = damage;
      __this_07.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff78;
      __this_07.fields._version = (int32_t)fVar14;
      __this_07.fields._current = pIVar8;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_07,(MethodInfo_321A1C0 *)&stack0xffffffffffffff88);
      return;
    }
    fVar11 = fVar14;
    pCVar5 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    value.fields.z = fVar11;
    value.fields.x = (float)(int)position.fields._0_8_;
    value.fields.y = (float)(int)((ulong)position.fields._0_8_ >> 0x20);
    fVar14 = fVar11;
    CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar5,value,(MethodInfo *)0x0);
    il2cpp_runtime_helper_022b2c90();
    character = local_68;
  }
  else {
    unaff_RBX = (long *)&TypeInfo_Human;
    pCVar3 = character->klass;
    bVar1 = (pCVar3->_2).naturalAligment;
    bVar2 = (TypeInfo_Human->_2).naturalAligment;
    if ((bVar1 < bVar2) || ((pCVar3->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_Human)) {
      unaff_RBX = (long *)&TypeInfo_BasicTitan;
      bVar2 = (TypeInfo_BasicTitan->_2).naturalAligment;
      if ((bVar2 <= bVar1) && ((pCVar3->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_BasicTitan))
      goto label_04254c2c;
      unaff_RBX = (long *)&TypeInfo_WallColossalShifter;
      bVar2 = (TypeInfo_WallColossalShifter->_2).naturalAligment;
      if ((bVar1 < bVar2) || ((pCVar3->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_WallColossalShifter)) {
        unaff_RBX = (long *)&TypeInfo_BaseShifter;
        bVar2 = (TypeInfo_BaseShifter->_2).naturalAligment;
        if ((bVar1 < bVar2) || ((pCVar3->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_BaseShifter))
        goto label_04254b11;
        __this_12 = (CustomLogic_CustomLogicShifterBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicShifterBuiltin);
        bVar1 = (TypeInfo_BaseShifter->_2).naturalAligment;
        if ((bVar1 <= (character->klass->_2).naturalAligment) &&
           ((character->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_BaseShifter)) {
          CustomLogic_CustomLogicShifterBuiltin___ctor
                    (__this_12,(Characters_BaseShifter_o *)character,(MethodInfo *)0x0);
          __this_00 = (__this->fields)._classInstances;
          goto joined_r0x04254b1b;
        }
      }
      else {
        __this_11 = (CustomLogic_CustomLogicWallColossalBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicWallColossalBuiltin);
        bVar1 = (TypeInfo_WallColossalShifter->_2).naturalAligment;
        if ((bVar1 <= (character->klass->_2).naturalAligment) &&
           ((character->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_WallColossalShifter)) {
          CustomLogic_CustomLogicWallColossalBuiltin___ctor
                    (__this_11,(Characters_WallColossalShifter_o *)character,(MethodInfo *)0x0);
          __this_00 = (__this->fields)._classInstances;
          goto joined_r0x04254b1b;
        }
      }
    }
    else {
      pCVar9 = (CustomLogic_CustomLogicHumanBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicHumanBuiltin);
      bVar1 = (TypeInfo_Human->_2).naturalAligment;
      if ((bVar1 <= (character->klass->_2).naturalAligment) &&
         ((character->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_Human)) {
        CustomLogic_CustomLogicHumanBuiltin___ctor(pCVar9,(Characters_Human_o *)character,(MethodInfo *)0x0);
        __this_00 = (__this->fields)._classInstances;
        goto joined_r0x04254b1b;
      }
    }
  }
label_04254d39:
  auVar12 = il2cpp_runtime_helper_022b2fd0(character);
  uVar6 = auVar12._0_8_;
  if (auVar12._8_4_ == 1) {
    plVar10 = (long *)__cxa_begin_catch(uVar6);
    lVar7 = *plVar10;
    __cxa_end_catch();
    __this_08.fields._index = damage;
    __this_08.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff78;
    __this_08.fields._version = (int32_t)fVar14;
    __this_08.fields._current = pIVar8;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_08,(MethodInfo_321A1C0 *)&stack0xffffffffffffff88);
    if (lVar7 == 0) {
      return;
    }
    uVar6 = il2cpp_runtime_helper_022fefe0(lVar7);
  }
  else {
    lVar7 = 0;
  }
  __this_09.fields._index = damage;
  __this_09.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff78;
  __this_09.fields._version = (int32_t)fVar14;
  __this_09.fields._current = pIVar8;
  pIVar8 = MethodInfo_Void_Dispose;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_09,(MethodInfo_321A1C0 *)&stack0xffffffffffffff88);
  if (lVar7 == 0) {
    _Unwind_Resume(uVar6);
  }
  classInstance = (CustomLogic_CustomLogicClassInstance_o *)il2cpp_runtime_helper_022fefe0(lVar7);
  il2cpp_runtime_helper_01f66400();
  if (g_data_057adba1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&"OnGetHit");
    g_data_057adba1 = '\x01';
  }
  human = (Characters_Human_o *)&g_data_00000005;
  lVar7 = TypeInfo_object;
  parameterValues = (System_Object_array *)il2cpp_runtime_helper_022b2a40();
  if (parameterValues == (System_Object_array *)0x0) goto label_0425501a;
  if ((pIVar8 == (Il2CppObject *)0x0) || (lVar7 = il2cpp_runtime_helper_023051f0(pIVar8), lVar7 != 0)) {
    if ((int)parameterValues->max_length != 0) {
      parameterValues->m_Items[0] = pIVar8;
      il2cpp_runtime_helper_022b4080(parameterValues->m_Items);
      if ((extraout_RDX != (Il2CppObject *)0x0) && (lVar7 = il2cpp_runtime_helper_023051f0(extraout_RDX), lVar7 == 0))
      goto label_0425500b;
      if (1 < (uint)parameterValues->max_length) {
        parameterValues->m_Items[1] = extraout_RDX;
        il2cpp_runtime_helper_022b4080(parameterValues->m_Items + 1,extraout_RDX);
        pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8);
        if ((pIVar8 != (Il2CppObject *)0x0) && (lVar7 = il2cpp_runtime_helper_023051f0(pIVar8), lVar7 == 0))
        goto label_0425500b;
        if (2 < (uint)parameterValues->max_length) {
          parameterValues->m_Items[2] = pIVar8;
          il2cpp_runtime_helper_022b4080(parameterValues->m_Items + 2);
          if ((type != (System_String_o *)0x0) && (lVar7 = il2cpp_runtime_helper_023051f0(type), lVar7 == 0))
          goto label_0425500b;
          if (3 < (uint)parameterValues->max_length) {
            parameterValues->m_Items[3] = (Il2CppObject *)type;
            il2cpp_runtime_helper_022b4080(parameterValues->m_Items + 3);
            if ((method != (MethodInfo *)0x0) && (lVar7 = il2cpp_runtime_helper_023051f0(method), lVar7 == 0))
            goto label_0425500b;
            if (4 < (uint)parameterValues->max_length) {
              parameterValues->m_Items[4] = (Il2CppObject *)method;
              il2cpp_runtime_helper_022b4080(parameterValues->m_Items + 4,method);
              methodName = "OnGetHit";
              if (g_data_057adba3 == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
                g_data_057adba3 = '\x01';
              }
              if ((char)(classInstance->fields).Enabled != '\0') {
                if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                __this_01 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
                if ((__this_01 != (CustomLogic_CustomLogicEvaluator_o *)0x0) &&
                   (bVar4 = CustomLogic_CustomLogicEvaluator__HasMethod
                                      (__this_01,classInstance,methodName,(MethodInfo *)0x0),
                   (char)bVar4 != '\0')) {
                  CustomLogic_CustomLogicEvaluator__EvaluateMethod
                            (__this_01,classInstance,methodName,parameterValues,0,(MethodInfo *)0x0);
                }
              }
              return;
            }
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_0425500b:
  lVar7 = il2cpp_runtime_helper_0231b270();
  human = (Characters_Human_o *)0x0;
  il2cpp_runtime_helper_022b2b10();
label_0425501a:
  uVar6 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057adb92 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicHumanBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicComponentInstance_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_CustomLogic_CustomLogicComponentInst);
    g_data_057adb92 = '\x01';
  }
  pSVar13 = (System_Collections_Generic_List_T__o *)0x0;
  pCVar9 = (CustomLogic_CustomLogicHumanBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicHumanBuiltin);
  CustomLogic_CustomLogicHumanBuiltin___ctor(pCVar9,human,(MethodInfo *)0x0);
  if (*(System_Collections_Generic_List_object__o **)(lVar7 + 0x20) !=
      (System_Collections_Generic_List_object__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xfffffffffffffec8,
               *(System_Collections_Generic_List_object__o **)(lVar7 + 0x20),MethodInfo_List_1_T_Enumerator_CustomLogic_CustomLogicComponentInst);
    __this_02.fields._version = (int32_t)fVar11;
    __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffeb8._0_8_;
    __this_02.fields._index = in_stack_fffffffffffffeb8._8_4_;
    __this_02.fields._current = (Il2CppObject *)pSVar13;
    bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (__this_02,(MethodInfo_321A1D0 *)&stack0xfffffffffffffec8);
    if ((char)bVar4 == '\0') {
      __this_03.fields._version = (int32_t)fVar11;
      __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffeb8._0_8_;
      __this_03.fields._index = in_stack_fffffffffffffeb8._8_4_;
      __this_03.fields._current = (Il2CppObject *)pSVar13;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_03,(MethodInfo_321A1C0 *)&stack0xfffffffffffffec8);
      return;
    }
    pCVar5 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    value_00.fields.z = fVar11;
    value_00.fields.x = (float)(int)uVar6;
    value_00.fields.y = (float)(int)((ulong)uVar6 >> 0x20);
    CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(pCVar5,value_00,(MethodInfo *)0x0);
    il2cpp_runtime_helper_022b2c90();
  }
  auVar12 = il2cpp_runtime_helper_022b2c90();
  if (auVar12._8_4_ == 1) {
    plVar10 = (long *)__cxa_begin_catch(auVar12._0_8_);
    lVar7 = *plVar10;
    __cxa_end_catch();
    __this_04.fields._version = (int32_t)fVar11;
    __this_04.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffeb8._0_8_;
    __this_04.fields._index = in_stack_fffffffffffffeb8._8_4_;
    __this_04.fields._current = (Il2CppObject *)pSVar13;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_04,(MethodInfo_321A1C0 *)&stack0xfffffffffffffec8);
    if (lVar7 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar7);
  }
  __this_05.fields._version = (int32_t)fVar11;
  __this_05.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffeb8._0_8_;
  __this_05.fields._index = in_stack_fffffffffffffeb8._8_4_;
  __this_05.fields._current = (Il2CppObject *)pSVar13;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_05,(MethodInfo_321A1C0 *)&stack0xfffffffffffffec8);
  _Unwind_Resume(auVar12._0_8_);
}


// CustomLogic.CustomLogicCollisionHandler$$GetHooked
// il2cpp: void CustomLogic_CustomLogicCollisionHandler__GetHooked (CustomLogic_CustomLogicCollisionHandler_o* __this, Characters_Human_o* human, UnityEngine_Vector3_o position, bool left, const MethodInfo* method);
// 0x4255020

void CustomLogic_CustomLogicCollisionHandler__GetHooked
               (CustomLogic_CustomLogicCollisionHandler_o *__this,Characters_Human_o *human,
               UnityEngine_Vector3_o position,bool_conflict left,MethodInfo *method)

{
  System_Collections_Generic_List_CustomLogicComponentInstance__o *__this_00;
  long lVar1;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar2;
  CustomLogic_CustomLogicHumanBuiltin_o *__this_05;
  CustomLogic_CustomLogicVector3Builtin_o *__this_06;
  long *plVar3;
  float fVar4;
  undefined1 auVar5 [12];
  UnityEngine_Vector3_o value;
  undefined1 in_stack_ffffffffffffff88 [12];
  System_Collections_Generic_List_T__o *pSVar6;
  
  fVar4 = position.fields.z;
  if (g_data_057adb92 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicHumanBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVector3Builtin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicComponentInstance_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_CustomLogic_CustomLogicComponentInst);
    g_data_057adb92 = '\x01';
  }
  pSVar6 = (System_Collections_Generic_List_T__o *)0x0;
  __this_05 = (CustomLogic_CustomLogicHumanBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicHumanBuiltin);
  CustomLogic_CustomLogicHumanBuiltin___ctor(__this_05,human,(MethodInfo *)0x0);
  __this_00 = (__this->fields)._classInstances;
  if (__this_00 != (System_Collections_Generic_List_CustomLogicComponentInstance__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffff98,
               (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T_Enumerator_CustomLogic_CustomLogicComponentInst);
    __this_01.fields._version = (int32_t)fVar4;
    __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88._0_8_;
    __this_01.fields._index = in_stack_ffffffffffffff88._8_4_;
    __this_01.fields._current = (Il2CppObject *)pSVar6;
    bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98);
    if ((char)bVar2 == '\0') {
      __this_02.fields._version = (int32_t)fVar4;
      __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88._0_8_;
      __this_02.fields._index = in_stack_ffffffffffffff88._8_4_;
      __this_02.fields._current = (Il2CppObject *)pSVar6;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
      return;
    }
    __this_06 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVector3Builtin);
    value.fields.z = fVar4;
    value.fields.x = (float)(int)position.fields._0_8_;
    value.fields.y = (float)(int)((ulong)position.fields._0_8_ >> 0x20);
    CustomLogic_CustomLogicVector3Builtin___ctor_3fd3330(__this_06,value,(MethodInfo *)0x0);
    il2cpp_runtime_helper_022b2c90();
  }
  auVar5 = il2cpp_runtime_helper_022b2c90();
  if (auVar5._8_4_ == 1) {
    plVar3 = (long *)__cxa_begin_catch(auVar5._0_8_);
    lVar1 = *plVar3;
    __cxa_end_catch();
    __this_03.fields._version = (int32_t)fVar4;
    __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88._0_8_;
    __this_03.fields._index = in_stack_ffffffffffffff88._8_4_;
    __this_03.fields._current = (Il2CppObject *)pSVar6;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
    if (lVar1 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar1);
  }
  __this_04.fields._version = (int32_t)fVar4;
  __this_04.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88._0_8_;
  __this_04.fields._index = in_stack_ffffffffffffff88._8_4_;
  __this_04.fields._current = (Il2CppObject *)pSVar6;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
  _Unwind_Resume(auVar5._0_8_);
}


// CustomLogic.CustomLogicCollisionHandler$$OnCollisionEnter
// il2cpp: void CustomLogic_CustomLogicCollisionHandler__OnCollisionEnter (CustomLogic_CustomLogicCollisionHandler_o* __this, UnityEngine_Collision_o* other, const MethodInfo* method);
// 0x42553e0

void CustomLogic_CustomLogicCollisionHandler__OnCollisionEnter
               (CustomLogic_CustomLogicCollisionHandler_o *__this,UnityEngine_Collision_o *other,
               MethodInfo *method)

{
  System_Collections_Generic_List_CustomLogicComponentInstance__o *__this_00;
  long lVar1;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar2;
  UnityEngine_Collider_o *other_00;
  CustomLogic_BuiltinClassInstance_o *other_01;
  long *plVar3;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  undefined1 auVar4 [12];
  System_Collections_Generic_List_T__o *pSVar5;
  Il2CppMethodPointer pIVar6;
  CustomLogic_CustomLogicComponentInstance_o *__this_05;
  
  if (g_data_057adb93 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicComponentInstance_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_CustomLogic_CustomLogicComponentInst);
    g_data_057adb93 = '\x01';
  }
  pSVar5 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar6 = (Il2CppMethodPointer)0x0;
  __this_05 = (CustomLogic_CustomLogicComponentInstance_o *)0x0;
  if (other != (UnityEngine_Collision_o *)0x0) {
    method_00 = (MethodInfo *)0x0;
    other_00 = UnityEngine_Collision__get_collider(other,(MethodInfo *)0x0);
    other_01 = CustomLogic_CustomLogicCollisionHandler__GetBuiltin(other_00,method_00);
    if (other_01 == (CustomLogic_BuiltinClassInstance_o *)0x0) {
      return;
    }
    __this_00 = (__this->fields)._classInstances;
    if (__this_00 != (System_Collections_Generic_List_CustomLogicComponentInstance__o *)0x0) {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffc8,
                 (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T_Enumerator_CustomLogic_CustomLogicComponentInst);
      while( true ) {
        __this_01.fields._8_8_ = pIVar6;
        __this_01.fields._list = pSVar5;
        __this_01.fields._current = (Il2CppObject *)__this_05;
        bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffffc8);
        if ((char)bVar2 == '\0') {
          __this_02.fields._8_8_ = pIVar6;
          __this_02.fields._list = pSVar5;
          __this_02.fields._current = (Il2CppObject *)__this_05;
          System_Collections_Generic_List_Enumerator_object___Dispose
                    (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
          return;
        }
        if (__this_05 == (CustomLogic_CustomLogicComponentInstance_o *)0x0) break;
        CustomLogic_CustomLogicComponentInstance__OnCollisionEnter
                  (__this_05,other_01,(CustomLogic_BuiltinClassInstance_o *)0x0,in_RCX);
      }
      il2cpp_runtime_helper_022b2c90();
    }
  }
  auVar4 = il2cpp_runtime_helper_022b2c90();
  if (auVar4._8_4_ == 1) {
    plVar3 = (long *)__cxa_begin_catch(auVar4._0_8_);
    lVar1 = *plVar3;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pIVar6;
    __this_03.fields._list = pSVar5;
    __this_03.fields._current = (Il2CppObject *)__this_05;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
    if (lVar1 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar1);
  }
  __this_04.fields._8_8_ = pIVar6;
  __this_04.fields._list = pSVar5;
  __this_04.fields._current = (Il2CppObject *)__this_05;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
  _Unwind_Resume(auVar4._0_8_);
}


// CustomLogic.CustomLogicCollisionHandler$$OnCollisionStay
// il2cpp: void CustomLogic_CustomLogicCollisionHandler__OnCollisionStay (CustomLogic_CustomLogicCollisionHandler_o* __this, UnityEngine_Collision_o* other, const MethodInfo* method);
// 0x4255b10

void CustomLogic_CustomLogicCollisionHandler__OnCollisionStay
               (CustomLogic_CustomLogicCollisionHandler_o *__this,UnityEngine_Collision_o *other,
               MethodInfo *method)

{
  System_Collections_Generic_List_CustomLogicComponentInstance__o *__this_00;
  long lVar1;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar2;
  UnityEngine_Collider_o *other_00;
  CustomLogic_BuiltinClassInstance_o *other_01;
  long *plVar3;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  undefined1 auVar4 [12];
  System_Collections_Generic_List_T__o *pSVar5;
  Il2CppMethodPointer pIVar6;
  CustomLogic_CustomLogicComponentInstance_o *__this_05;
  
  if (g_data_057adb94 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicComponentInstance_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_CustomLogic_CustomLogicComponentInst);
    g_data_057adb94 = '\x01';
  }
  pSVar5 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar6 = (Il2CppMethodPointer)0x0;
  __this_05 = (CustomLogic_CustomLogicComponentInstance_o *)0x0;
  if (other != (UnityEngine_Collision_o *)0x0) {
    method_00 = (MethodInfo *)0x0;
    other_00 = UnityEngine_Collision__get_collider(other,(MethodInfo *)0x0);
    other_01 = CustomLogic_CustomLogicCollisionHandler__GetBuiltin(other_00,method_00);
    if (other_01 == (CustomLogic_BuiltinClassInstance_o *)0x0) {
      return;
    }
    __this_00 = (__this->fields)._classInstances;
    if (__this_00 != (System_Collections_Generic_List_CustomLogicComponentInstance__o *)0x0) {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffc8,
                 (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T_Enumerator_CustomLogic_CustomLogicComponentInst);
      while( true ) {
        __this_01.fields._8_8_ = pIVar6;
        __this_01.fields._list = pSVar5;
        __this_01.fields._current = (Il2CppObject *)__this_05;
        bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffffc8);
        if ((char)bVar2 == '\0') {
          __this_02.fields._8_8_ = pIVar6;
          __this_02.fields._list = pSVar5;
          __this_02.fields._current = (Il2CppObject *)__this_05;
          System_Collections_Generic_List_Enumerator_object___Dispose
                    (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
          return;
        }
        if (__this_05 == (CustomLogic_CustomLogicComponentInstance_o *)0x0) break;
        CustomLogic_CustomLogicComponentInstance__OnCollisionStay
                  (__this_05,other_01,(CustomLogic_BuiltinClassInstance_o *)0x0,in_RCX);
      }
      il2cpp_runtime_helper_022b2c90();
    }
  }
  auVar4 = il2cpp_runtime_helper_022b2c90();
  if (auVar4._8_4_ == 1) {
    plVar3 = (long *)__cxa_begin_catch(auVar4._0_8_);
    lVar1 = *plVar3;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pIVar6;
    __this_03.fields._list = pSVar5;
    __this_03.fields._current = (Il2CppObject *)__this_05;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
    if (lVar1 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar1);
  }
  __this_04.fields._8_8_ = pIVar6;
  __this_04.fields._list = pSVar5;
  __this_04.fields._current = (Il2CppObject *)__this_05;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
  _Unwind_Resume(auVar4._0_8_);
}


// CustomLogic.CustomLogicCollisionHandler$$OnCollisionExit
// il2cpp: void CustomLogic_CustomLogicCollisionHandler__OnCollisionExit (CustomLogic_CustomLogicCollisionHandler_o* __this, UnityEngine_Collision_o* other, const MethodInfo* method);
// 0x4255e30

void CustomLogic_CustomLogicCollisionHandler__OnCollisionExit
               (CustomLogic_CustomLogicCollisionHandler_o *__this,UnityEngine_Collision_o *other,
               MethodInfo *method)

{
  System_Collections_Generic_List_CustomLogicComponentInstance__o *__this_00;
  long lVar1;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar2;
  UnityEngine_Collider_o *other_00;
  CustomLogic_BuiltinClassInstance_o *other_01;
  long *plVar3;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  undefined1 auVar4 [12];
  System_Collections_Generic_List_T__o *pSVar5;
  Il2CppMethodPointer pIVar6;
  CustomLogic_CustomLogicComponentInstance_o *__this_05;
  
  if (g_data_057adb95 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicComponentInstance_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_CustomLogic_CustomLogicComponentInst);
    g_data_057adb95 = '\x01';
  }
  pSVar5 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar6 = (Il2CppMethodPointer)0x0;
  __this_05 = (CustomLogic_CustomLogicComponentInstance_o *)0x0;
  if (other != (UnityEngine_Collision_o *)0x0) {
    method_00 = (MethodInfo *)0x0;
    other_00 = UnityEngine_Collision__get_collider(other,(MethodInfo *)0x0);
    other_01 = CustomLogic_CustomLogicCollisionHandler__GetBuiltin(other_00,method_00);
    if (other_01 == (CustomLogic_BuiltinClassInstance_o *)0x0) {
      return;
    }
    __this_00 = (__this->fields)._classInstances;
    if (__this_00 != (System_Collections_Generic_List_CustomLogicComponentInstance__o *)0x0) {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffc8,
                 (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T_Enumerator_CustomLogic_CustomLogicComponentInst);
      while( true ) {
        __this_01.fields._8_8_ = pIVar6;
        __this_01.fields._list = pSVar5;
        __this_01.fields._current = (Il2CppObject *)__this_05;
        bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffffc8);
        if ((char)bVar2 == '\0') {
          __this_02.fields._8_8_ = pIVar6;
          __this_02.fields._list = pSVar5;
          __this_02.fields._current = (Il2CppObject *)__this_05;
          System_Collections_Generic_List_Enumerator_object___Dispose
                    (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
          return;
        }
        if (__this_05 == (CustomLogic_CustomLogicComponentInstance_o *)0x0) break;
        CustomLogic_CustomLogicComponentInstance__OnCollisionExit
                  (__this_05,other_01,(CustomLogic_BuiltinClassInstance_o *)0x0,in_RCX);
      }
      il2cpp_runtime_helper_022b2c90();
    }
  }
  auVar4 = il2cpp_runtime_helper_022b2c90();
  if (auVar4._8_4_ == 1) {
    plVar3 = (long *)__cxa_begin_catch(auVar4._0_8_);
    lVar1 = *plVar3;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pIVar6;
    __this_03.fields._list = pSVar5;
    __this_03.fields._current = (Il2CppObject *)__this_05;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
    if (lVar1 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar1);
  }
  __this_04.fields._8_8_ = pIVar6;
  __this_04.fields._list = pSVar5;
  __this_04.fields._current = (Il2CppObject *)__this_05;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
  _Unwind_Resume(auVar4._0_8_);
}


// CustomLogic.CustomLogicCollisionHandler$$OnTriggerEnter
// il2cpp: void CustomLogic_CustomLogicCollisionHandler__OnTriggerEnter (CustomLogic_CustomLogicCollisionHandler_o* __this, UnityEngine_Collider_o* other, const MethodInfo* method);
// 0x4256150

void CustomLogic_CustomLogicCollisionHandler__OnTriggerEnter
               (CustomLogic_CustomLogicCollisionHandler_o *__this,UnityEngine_Collider_o *other,
               MethodInfo *method)

{
  float *pfVar1;
  System_Collections_Generic_List_CustomLogicComponentInstance__o *__this_00;
  long lVar2;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar3;
  CustomLogic_BuiltinClassInstance_o *other_00;
  long *plVar4;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  float fVar5;
  undefined1 auVar6 [12];
  System_Collections_Generic_List_T__o *pSVar7;
  Il2CppMethodPointer pIVar8;
  CustomLogic_CustomLogicComponentInstance_o *__this_05;
  
  method_00 = (MethodInfo *)other;
  if (g_data_057adb96 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicComponentInstance_get_Current);
    il2cpp_runtime_helper_023445d0();
    g_data_057adb96 = '\x01';
  }
  pSVar7 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar8 = (Il2CppMethodPointer)0x0;
  __this_05 = (CustomLogic_CustomLogicComponentInstance_o *)0x0;
  fVar5 = UnityEngine_Time__get_fixedTime((MethodInfo *)0x0);
  pfVar1 = &(__this->fields)._lastEnterTime;
  if ((fVar5 != *pfVar1) || (NAN(fVar5) || NAN(*pfVar1))) {
    fVar5 = UnityEngine_Time__get_fixedTime((MethodInfo *)0x0);
    (__this->fields)._lastEnterTime = fVar5;
    other_00 = CustomLogic_CustomLogicCollisionHandler__GetBuiltin(other,method_00);
    if (other_00 != (CustomLogic_BuiltinClassInstance_o *)0x0) {
      __this_00 = (__this->fields)._classInstances;
      if (__this_00 == (System_Collections_Generic_List_CustomLogicComponentInstance__o *)0x0) {
label_04256256:
        auVar6 = il2cpp_runtime_helper_022b2c90();
        if (auVar6._8_4_ == 1) {
          plVar4 = (long *)__cxa_begin_catch(auVar6._0_8_);
          lVar2 = *plVar4;
          __cxa_end_catch();
          __this_03.fields._8_8_ = pIVar8;
          __this_03.fields._list = pSVar7;
          __this_03.fields._current = (Il2CppObject *)__this_05;
          System_Collections_Generic_List_Enumerator_object___Dispose
                    (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
          if (lVar2 == 0) {
            return;
          }
          il2cpp_runtime_helper_022fefe0(lVar2);
        }
        __this_04.fields._8_8_ = pIVar8;
        __this_04.fields._list = pSVar7;
        __this_04.fields._current = (Il2CppObject *)__this_05;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
        _Unwind_Resume(auVar6._0_8_);
      }
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffc8,
                 (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T_Enumerator_CustomLogic_CustomLogicComponentInst);
      while (__this_01.fields._8_8_ = pIVar8, __this_01.fields._list = pSVar7,
            __this_01.fields._current = (Il2CppObject *)__this_05,
            bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffffc8), (char)bVar3 != '\0')
      {
        if (__this_05 == (CustomLogic_CustomLogicComponentInstance_o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          goto label_04256256;
        }
        CustomLogic_CustomLogicComponentInstance__OnCollisionEnter
                  (__this_05,other_00,(CustomLogic_BuiltinClassInstance_o *)0x0,in_RCX);
      }
      __this_02.fields._8_8_ = pIVar8;
      __this_02.fields._list = pSVar7;
      __this_02.fields._current = (Il2CppObject *)__this_05;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
    }
  }
  return;
}


// CustomLogic.CustomLogicCollisionHandler$$OnTriggerStay
// il2cpp: void CustomLogic_CustomLogicCollisionHandler__OnTriggerStay (CustomLogic_CustomLogicCollisionHandler_o* __this, UnityEngine_Collider_o* other, const MethodInfo* method);
// 0x42562e0

void CustomLogic_CustomLogicCollisionHandler__OnTriggerStay
               (CustomLogic_CustomLogicCollisionHandler_o *__this,UnityEngine_Collider_o *other,
               MethodInfo *method)

{
  System_Collections_Generic_List_CustomLogicComponentInstance__o *__this_00;
  long lVar1;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar2;
  CustomLogic_BuiltinClassInstance_o *other_00;
  long *plVar3;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  undefined1 auVar4 [12];
  System_Collections_Generic_List_T__o *pSVar5;
  Il2CppMethodPointer pIVar6;
  CustomLogic_CustomLogicComponentInstance_o *__this_05;
  
  method_00 = (MethodInfo *)other;
  if (g_data_057adb97 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicComponentInstance_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_CustomLogic_CustomLogicComponentInst);
    g_data_057adb97 = '\x01';
  }
  pSVar5 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar6 = (Il2CppMethodPointer)0x0;
  __this_05 = (CustomLogic_CustomLogicComponentInstance_o *)0x0;
  other_00 = CustomLogic_CustomLogicCollisionHandler__GetBuiltin(other,method_00);
  if (other_00 != (CustomLogic_BuiltinClassInstance_o *)0x0) {
    __this_00 = (__this->fields)._classInstances;
    if (__this_00 == (System_Collections_Generic_List_CustomLogicComponentInstance__o *)0x0) {
label_042563c6:
      auVar4 = il2cpp_runtime_helper_022b2c90();
      if (auVar4._8_4_ == 1) {
        plVar3 = (long *)__cxa_begin_catch(auVar4._0_8_);
        lVar1 = *plVar3;
        __cxa_end_catch();
        __this_03.fields._8_8_ = pIVar6;
        __this_03.fields._list = pSVar5;
        __this_03.fields._current = (Il2CppObject *)__this_05;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
        if (lVar1 == 0) {
          return;
        }
        il2cpp_runtime_helper_022fefe0(lVar1);
      }
      __this_04.fields._8_8_ = pIVar6;
      __this_04.fields._list = pSVar5;
      __this_04.fields._current = (Il2CppObject *)__this_05;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
      _Unwind_Resume(auVar4._0_8_);
    }
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffc8,
               (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T_Enumerator_CustomLogic_CustomLogicComponentInst);
    while (__this_01.fields._8_8_ = pIVar6, __this_01.fields._list = pSVar5,
          __this_01.fields._current = (Il2CppObject *)__this_05,
          bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffffc8), (char)bVar2 != '\0') {
      if (__this_05 == (CustomLogic_CustomLogicComponentInstance_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        goto label_042563c6;
      }
      CustomLogic_CustomLogicComponentInstance__OnCollisionStay
                (__this_05,other_00,(CustomLogic_BuiltinClassInstance_o *)0x0,in_RCX);
    }
    __this_02.fields._8_8_ = pIVar6;
    __this_02.fields._list = pSVar5;
    __this_02.fields._current = (Il2CppObject *)__this_05;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
  }
  return;
}


// CustomLogic.CustomLogicCollisionHandler$$OnTriggerExit
// il2cpp: void CustomLogic_CustomLogicCollisionHandler__OnTriggerExit (CustomLogic_CustomLogicCollisionHandler_o* __this, UnityEngine_Collider_o* other, const MethodInfo* method);
// 0x4256450

void CustomLogic_CustomLogicCollisionHandler__OnTriggerExit
               (CustomLogic_CustomLogicCollisionHandler_o *__this,UnityEngine_Collider_o *other,
               MethodInfo *method)

{
  System_Collections_Generic_List_CustomLogicComponentInstance__o *__this_00;
  long lVar1;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar2;
  CustomLogic_BuiltinClassInstance_o *other_00;
  long *plVar3;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  undefined1 auVar4 [12];
  System_Collections_Generic_List_T__o *pSVar5;
  Il2CppMethodPointer pIVar6;
  CustomLogic_CustomLogicComponentInstance_o *__this_05;
  
  method_00 = (MethodInfo *)other;
  if (g_data_057adb98 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicComponentInstance_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_CustomLogic_CustomLogicComponentInst);
    g_data_057adb98 = '\x01';
  }
  pSVar5 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar6 = (Il2CppMethodPointer)0x0;
  __this_05 = (CustomLogic_CustomLogicComponentInstance_o *)0x0;
  other_00 = CustomLogic_CustomLogicCollisionHandler__GetBuiltin(other,method_00);
  if (other_00 != (CustomLogic_BuiltinClassInstance_o *)0x0) {
    __this_00 = (__this->fields)._classInstances;
    if (__this_00 == (System_Collections_Generic_List_CustomLogicComponentInstance__o *)0x0) {
label_04256536:
      auVar4 = il2cpp_runtime_helper_022b2c90();
      if (auVar4._8_4_ == 1) {
        plVar3 = (long *)__cxa_begin_catch(auVar4._0_8_);
        lVar1 = *plVar3;
        __cxa_end_catch();
        __this_03.fields._8_8_ = pIVar6;
        __this_03.fields._list = pSVar5;
        __this_03.fields._current = (Il2CppObject *)__this_05;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
        if (lVar1 == 0) {
          return;
        }
        il2cpp_runtime_helper_022fefe0(lVar1);
      }
      __this_04.fields._8_8_ = pIVar6;
      __this_04.fields._list = pSVar5;
      __this_04.fields._current = (Il2CppObject *)__this_05;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
      _Unwind_Resume(auVar4._0_8_);
    }
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffc8,
               (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T_Enumerator_CustomLogic_CustomLogicComponentInst);
    while (__this_01.fields._8_8_ = pIVar6, __this_01.fields._list = pSVar5,
          __this_01.fields._current = (Il2CppObject *)__this_05,
          bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffffc8), (char)bVar2 != '\0') {
      if (__this_05 == (CustomLogic_CustomLogicComponentInstance_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        goto label_04256536;
      }
      CustomLogic_CustomLogicComponentInstance__OnCollisionExit
                (__this_05,other_00,(CustomLogic_BuiltinClassInstance_o *)0x0,in_RCX);
    }
    __this_02.fields._8_8_ = pIVar6;
    __this_02.fields._list = pSVar5;
    __this_02.fields._current = (Il2CppObject *)__this_05;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
  }
  return;
}


// CustomLogic.CustomLogicCollisionHandler$$GetBuiltin
// il2cpp: CustomLogic_BuiltinClassInstance_o* CustomLogic_CustomLogicCollisionHandler__GetBuiltin (UnityEngine_Collider_o* other, const MethodInfo* method);
// 0x4255560

CustomLogic_BuiltinClassInstance_o *
CustomLogic_CustomLogicCollisionHandler__GetBuiltin(UnityEngine_Collider_o *other,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  Characters_Human_c *pCVar3;
  CustomLogic_CustomLogicEvaluator_o *pCVar4;
  System_Collections_Generic_List_Enumerator_object__o __this;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_String_o *methodName;
  bool_conflict bVar5;
  UnityEngine_Transform_o *pUVar6;
  CustomLogic_CustomLogicShifterBuiltin_o *__this_03;
  Map_MapObject_o *obj;
  CustomLogic_CustomLogicMapObjectBuiltin_o *pCVar7;
  CustomLogic_CustomLogicHumanBuiltin_o *__this_04;
  CustomLogic_CustomLogicTitanBuiltin_o *__this_05;
  CustomLogic_CustomLogicWallColossalBuiltin_o *__this_06;
  System_Object_array *parameterValues;
  long lVar8;
  CustomLogic_BuiltinClassInstance_o *pCVar9;
  undefined4 extraout_var;
  UnityEngine_Collider_o *other_00;
  CustomLogic_BuiltinClassInstance_o *extraout_RAX;
  long *plVar10;
  CustomLogic_BuiltinClassInstance_o *extraout_RAX_00;
  MethodInfo *in_RCX;
  Il2CppObject *extraout_RDX;
  Il2CppClass *pIVar11;
  UnityEngine_Collision_o *__this_07;
  MethodInfo *method_00;
  Characters_Human_o *unaff_R14;
  undefined1 auVar12 [12];
  System_Collections_Generic_List_T__o *pSVar13;
  Il2CppMethodPointer pIVar14;
  CustomLogic_CustomLogicComponentInstance_o *__this_08;
  
  if (g_data_057adb99 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseShifter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_BasicTitan);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicHumanBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicShifterBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicTitanBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicWallColossalBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Human);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WallColossalShifter);
    g_data_057adb99 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar11 = (Il2CppClass *)0x0;
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)other,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    return (CustomLogic_BuiltinClassInstance_o *)0x0;
  }
  if (other == (UnityEngine_Collider_o *)0x0) {
label_04255963:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)other,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar5 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      return (CustomLogic_BuiltinClassInstance_o *)0x0;
    }
    pIVar11 = (Il2CppClass *)0x0;
    pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)other,(MethodInfo *)0x0);
    if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto label_04255963;
    pUVar6 = UnityEngine_Transform__get_root(pUVar6,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar11 = (Il2CppClass *)0x0;
    bVar5 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      return (CustomLogic_BuiltinClassInstance_o *)0x0;
    }
    unaff_R14 = (Characters_Human_o *)0x0;
    if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto label_04255963;
    unaff_R14 = (Characters_Human_o *)
                UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar6,MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar5 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)unaff_R14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') {
      if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      obj = Map_MapLoader__FindObjectFromCollider(other,(MethodInfo *)0x0);
      if (obj != (Map_MapObject_o *)0x0) {
        if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pCVar4 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
        if (pCVar4 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
          return (CustomLogic_BuiltinClassInstance_o *)0x0;
        }
        pCVar7 = CustomLogic_CustomLogicEvaluator__GetOrCreateMapObjectBuiltin(pCVar4,obj,(MethodInfo *)0x0);
        return (CustomLogic_BuiltinClassInstance_o *)pCVar7;
      }
      return (CustomLogic_BuiltinClassInstance_o *)0x0;
    }
    if (unaff_R14 == (Characters_Human_o *)0x0) {
      return (CustomLogic_BuiltinClassInstance_o *)0x0;
    }
    pCVar3 = unaff_R14->klass;
    bVar1 = (pCVar3->_2).naturalAligment;
    bVar2 = (TypeInfo_Human->_2).naturalAligment;
    if ((bVar1 < bVar2) || ((pCVar3->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_Human)) {
      bVar2 = (TypeInfo_BasicTitan->_2).naturalAligment;
      if ((bVar1 < bVar2) || ((pCVar3->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_BasicTitan)) {
        bVar2 = (TypeInfo_WallColossalShifter->_2).naturalAligment;
        if ((bVar1 < bVar2) || ((pCVar3->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_WallColossalShifter)) {
          bVar2 = (TypeInfo_BaseShifter->_2).naturalAligment;
          if (bVar1 < bVar2) {
            return (CustomLogic_BuiltinClassInstance_o *)0x0;
          }
          if ((pCVar3->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_BaseShifter) {
            return (CustomLogic_BuiltinClassInstance_o *)0x0;
          }
          __this_03 = (CustomLogic_CustomLogicShifterBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicShifterBuiltin);
          bVar1 = (TypeInfo_BaseShifter->_2).naturalAligment;
          in_RCX = (MethodInfo *)(ulong)bVar1;
          pIVar11 = TypeInfo_BaseShifter;
          if ((bVar1 <= (unaff_R14->klass->_2).naturalAligment) &&
             ((unaff_R14->klass->_2).typeHierarchy[(long)&in_RCX[-1].field_0x57] == TypeInfo_BaseShifter)) {
            CustomLogic_CustomLogicShifterBuiltin___ctor
                      (__this_03,(Characters_BaseShifter_o *)unaff_R14,(MethodInfo *)0x0);
            return (CustomLogic_BuiltinClassInstance_o *)__this_03;
          }
        }
        else {
          __this_06 = (CustomLogic_CustomLogicWallColossalBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicWallColossalBuiltin);
          bVar1 = (TypeInfo_WallColossalShifter->_2).naturalAligment;
          in_RCX = (MethodInfo *)(ulong)bVar1;
          pIVar11 = TypeInfo_WallColossalShifter;
          if ((bVar1 <= (unaff_R14->klass->_2).naturalAligment) &&
             ((unaff_R14->klass->_2).typeHierarchy[(long)&in_RCX[-1].field_0x57] == TypeInfo_WallColossalShifter)) {
            CustomLogic_CustomLogicWallColossalBuiltin___ctor
                      (__this_06,(Characters_WallColossalShifter_o *)unaff_R14,(MethodInfo *)0x0);
            return (CustomLogic_BuiltinClassInstance_o *)__this_06;
          }
        }
      }
      else {
        __this_05 = (CustomLogic_CustomLogicTitanBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicTitanBuiltin);
        bVar1 = (TypeInfo_BasicTitan->_2).naturalAligment;
        in_RCX = (MethodInfo *)(ulong)bVar1;
        pIVar11 = TypeInfo_BasicTitan;
        if ((bVar1 <= (unaff_R14->klass->_2).naturalAligment) &&
           ((unaff_R14->klass->_2).typeHierarchy[(long)&in_RCX[-1].field_0x57] == TypeInfo_BasicTitan)) {
          CustomLogic_CustomLogicTitanBuiltin___ctor
                    (__this_05,(Characters_BasicTitan_o *)unaff_R14,(MethodInfo *)0x0);
          return (CustomLogic_BuiltinClassInstance_o *)__this_05;
        }
      }
    }
    else {
      __this_04 = (CustomLogic_CustomLogicHumanBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicHumanBuiltin);
      bVar1 = (TypeInfo_Human->_2).naturalAligment;
      in_RCX = (MethodInfo *)(ulong)bVar1;
      pIVar11 = TypeInfo_Human;
      if ((bVar1 <= (unaff_R14->klass->_2).naturalAligment) &&
         ((unaff_R14->klass->_2).typeHierarchy[(long)&in_RCX[-1].field_0x57] == TypeInfo_Human)) {
        CustomLogic_CustomLogicHumanBuiltin___ctor(__this_04,unaff_R14,(MethodInfo *)0x0);
        return (CustomLogic_BuiltinClassInstance_o *)__this_04;
      }
    }
  }
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057adb9f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&"OnCollisionEnter");
    g_data_057adb9f = '\x01';
  }
  __this_07 = (UnityEngine_Collision_o *)0x2;
  lVar8 = TypeInfo_object;
  parameterValues = (System_Object_array *)il2cpp_runtime_helper_022b2a40();
  if (parameterValues == (System_Object_array *)0x0) goto label_04255afc;
  if ((pIVar11 == (Il2CppClass *)0x0) || (lVar8 = il2cpp_runtime_helper_023051f0(pIVar11), lVar8 != 0)) {
    if ((int)parameterValues->max_length != 0) {
      parameterValues->m_Items[0] = (Il2CppObject *)pIVar11;
      il2cpp_runtime_helper_022b4080(parameterValues->m_Items);
      if ((extraout_RDX != (Il2CppObject *)0x0) && (lVar8 = il2cpp_runtime_helper_023051f0(extraout_RDX), lVar8 == 0))
      goto label_04255aed;
      if (1 < (uint)parameterValues->max_length) {
        parameterValues->m_Items[1] = extraout_RDX;
        il2cpp_runtime_helper_022b4080(parameterValues->m_Items + 1,extraout_RDX);
        methodName = "OnCollisionEnter";
        pCVar9 = (CustomLogic_BuiltinClassInstance_o *)&"OnCollisionEnter";
        if (g_data_057adba3 == '\0') {
          pCVar9 = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
          g_data_057adba3 = '\x01';
        }
        if ((char)(unaff_R14->fields).m_CachedPtr != '\0') {
          if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
            pCVar9 = *(CustomLogic_BuiltinClassInstance_o **)(TypeInfo_CustomLogicManager + 0xb8);
            pCVar4 = pCVar9->monitor;
          }
          else {
            pCVar9 = *(CustomLogic_BuiltinClassInstance_o **)(TypeInfo_CustomLogicManager + 0xb8);
            pCVar4 = pCVar9->monitor;
          }
          if (pCVar4 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
            bVar5 = CustomLogic_CustomLogicEvaluator__HasMethod
                              (pCVar4,(CustomLogic_CustomLogicClassInstance_o *)unaff_R14,methodName,
                               (MethodInfo *)0x0);
            pCVar9 = (CustomLogic_BuiltinClassInstance_o *)CONCAT44(extraout_var,bVar5);
            if ((char)bVar5 != '\0') {
              pCVar9 = (CustomLogic_BuiltinClassInstance_o *)
                       CustomLogic_CustomLogicEvaluator__EvaluateMethod
                                 (pCVar4,(CustomLogic_CustomLogicClassInstance_o *)unaff_R14,methodName,
                                  parameterValues,0,(MethodInfo *)0x0);
              return pCVar9;
            }
          }
        }
        return pCVar9;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_04255aed:
  lVar8 = il2cpp_runtime_helper_0231b270();
  __this_07 = (UnityEngine_Collision_o *)0x0;
  il2cpp_runtime_helper_022b2b10();
label_04255afc:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adb94 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicComponentInstance_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_CustomLogic_CustomLogicComponentInst);
    g_data_057adb94 = '\x01';
  }
  pSVar13 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar14 = (Il2CppMethodPointer)0x0;
  __this_08 = (CustomLogic_CustomLogicComponentInstance_o *)0x0;
  if (__this_07 != (UnityEngine_Collision_o *)0x0) {
    method_00 = (MethodInfo *)0x0;
    other_00 = UnityEngine_Collision__get_collider(__this_07,(MethodInfo *)0x0);
    pCVar9 = CustomLogic_CustomLogicCollisionHandler__GetBuiltin(other_00,method_00);
    if (pCVar9 == (CustomLogic_BuiltinClassInstance_o *)0x0) {
      return (CustomLogic_BuiltinClassInstance_o *)0x0;
    }
    if (*(System_Collections_Generic_List_object__o **)(lVar8 + 0x20) !=
        (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffff78,
                 *(System_Collections_Generic_List_object__o **)(lVar8 + 0x20),MethodInfo_List_1_T_Enumerator_CustomLogic_CustomLogicComponentInst);
      while( true ) {
        __this.fields._8_8_ = pIVar14;
        __this.fields._list = pSVar13;
        __this.fields._current = (Il2CppObject *)__this_08;
        bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (__this,(MethodInfo_321A1D0 *)&stack0xffffffffffffff78);
        if ((char)bVar5 == '\0') {
          __this_00.fields._8_8_ = pIVar14;
          __this_00.fields._list = pSVar13;
          __this_00.fields._current = (Il2CppObject *)__this_08;
          System_Collections_Generic_List_Enumerator_object___Dispose
                    (__this_00,(MethodInfo_321A1C0 *)&stack0xffffffffffffff78);
          return extraout_RAX;
        }
        if (__this_08 == (CustomLogic_CustomLogicComponentInstance_o *)0x0) break;
        CustomLogic_CustomLogicComponentInstance__OnCollisionStay
                  (__this_08,pCVar9,(CustomLogic_BuiltinClassInstance_o *)0x0,in_RCX);
      }
      il2cpp_runtime_helper_022b2c90();
    }
  }
  auVar12 = il2cpp_runtime_helper_022b2c90();
  if (auVar12._8_4_ == 1) {
    plVar10 = (long *)__cxa_begin_catch(auVar12._0_8_);
    lVar8 = *plVar10;
    __cxa_end_catch();
    __this_01.fields._8_8_ = pIVar14;
    __this_01.fields._list = pSVar13;
    __this_01.fields._current = (Il2CppObject *)__this_08;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffff78);
    if (lVar8 == 0) {
      return extraout_RAX_00;
    }
    il2cpp_runtime_helper_022fefe0(lVar8);
  }
  __this_02.fields._8_8_ = pIVar14;
  __this_02.fields._list = pSVar13;
  __this_02.fields._current = (Il2CppObject *)__this_08;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff78);
  _Unwind_Resume(auVar12._0_8_);
}


// CustomLogic.CustomLogicCollisionHandler$$.ctor
// il2cpp: void CustomLogic_CustomLogicCollisionHandler___ctor (CustomLogic_CustomLogicCollisionHandler_o* __this, const MethodInfo* method);
// 0x42565c0

void CustomLogic_CustomLogicCollisionHandler___ctor
               (CustomLogic_CustomLogicCollisionHandler_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_CustomLogicComponentInstance__o *__this_00;
  
  if (g_data_057adb9a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_CustomLogic_CustomLogicComponentInstance);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_CustomLogicComponentInstance);
    g_data_057adb9a = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_CustomLogicComponentInstance__o *)
              il2cpp_runtime_helper_023052d0(TypeInfo_List_CustomLogicComponentInstance);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_CustomLogic_CustomLogicComponentInstance);
  (__this->fields)._classInstances = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._classInstances);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


