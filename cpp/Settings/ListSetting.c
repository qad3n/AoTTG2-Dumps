// Type: Settings.ListSetting
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/ListSetting.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingTypes/ListSetting.cs
// --------------------------------

// Settings.ListSetting<object>$$.ctor
// il2cpp: void Settings_ListSetting_object____ctor (Settings_ListSetting_T__o* __this, System_Collections_Generic_List_T__o* defaultValue, const MethodInfo_3520E50* method);
// 0x3620e50

void Settings_ListSetting_object____ctor
               (Settings_ListSetting_T__o *__this,System_Collections_Generic_List_T__o *defaultValue,
               MethodInfo_3520E50 *method)

{
  Settings_TypedSetting_object____ctor_2a240d0
            ((Settings_TypedSetting_T__o *)__this,(Il2CppObject *)defaultValue,
             (MethodInfo_2A240D0 *)method->klass->rgctx_data->_1_Settings_TypedSetting_List_T____ctor);
  return;
}


// Settings.ListSetting<object>$$.ctor
// il2cpp: void Settings_ListSetting_object____ctor (Settings_ListSetting_T__o* __this, Il2CppObject* defaultValue, const MethodInfo_3520E70* method);
// 0x3620e70

void Settings_ListSetting_object____ctor_3520e70
               (Settings_ListSetting_T__o *__this,Il2CppObject *defaultValue,MethodInfo_3520E70 *method)

{
  int *piVar1;
  int32_t *piVar2;
  uint uVar3;
  InvokerMethod pIVar4;
  Il2CppMethodPointer vtableDispatch;
  code *UNRECOVERED_JUMPTABLE_00;
  System_Object_array *pSVar5;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  MethodInfo *pMVar6;
  bool_conflict bVar7;
  Il2CppClass *pIVar8;
  MethodInfo *pMVar9;
  MethodInfo *__this_04;
  MethodInfo *pMVar10;
  Il2CppRGCTXData *__this_05;
  System_Collections_Generic_List_object__o *__this_06;
  _union_249689 *to;
  Il2CppObject *pIVar11;
  undefined8 uVar12;
  _union_249689 *to_00;
  undefined8 *puVar13;
  _union_249689 in_RCX;
  _union_249689 method_00;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  int iVar14;
  _union_249689 *p_Var15;
  MethodInfo *method_01;
  Il2CppRGCTXData *pIVar16;
  MethodInfo *pMVar17;
  Settings_TypedSetting_T__o *__this_07;
  System_Collections_Generic_List_object__o *pSVar18;
  System_Collections_Generic_List_object__o *__this_08;
  MethodInfo *unaff_R13;
  undefined1 auVar19 [12];
  System_Collections_Generic_List_Enumerator_T__c *pSVar20;
  Il2CppType *pIVar21;
  _union_249689 *p_Var22;
  undefined1 auStack_c0 [16];
  _union_249689 *p_Stack_b0;
  Il2CppRGCTXData *pIStack_a8;
  _union_249689 _Stack_a0;
  MethodInfo *pMStack_98;
  MethodInfo *pMStack_90;
  MethodInfo *pMStack_88;
  _union_249689 *p_Stack_80;
  MethodInfo *pMStack_78;
  MethodInfo *pMStack_70;
  MethodInfo *pMStack_68;
  MethodInfo *pMStack_60;
  MethodInfo *pMStack_58;
  MethodInfo_3520E70 *pMStack_50;
  
  Settings_TypedSetting_object____ctor
            ((Settings_TypedSetting_T__o *)__this,
             (MethodInfo_2A240C0 *)method->klass->rgctx_data->_3_Settings_TypedSetting_List_T____ctor);
  pIVar8 = method->klass->rgctx_data->_0_System_Collections_Generic_List_T_;
  if (((pIVar8->_2).field_0x6d & 1) == 0) {
    pIVar8 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
  }
  pMVar9 = (MethodInfo *)il2cpp_runtime_helper_023052d0(pIVar8);
  method_01 = method->klass->rgctx_data->_4_System_Collections_Generic_List_T___ctor;
  pMVar17 = pMVar9;
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pMVar9,(MethodInfo_362B8B0 *)method_01);
  if (pMVar9 != (MethodInfo *)0x0) {
    in_RCX = (_union_249689)method->klass->rgctx_data->_6_System_Collections_Generic_List_T__Add;
    piVar1 = (int *)((long)&pMVar9->name + 4);
    *piVar1 = *piVar1 + 1;
    pIVar4 = pMVar9->invoker_method;
    if (pIVar4 != (InvokerMethod)0x0) {
      uVar3 = *(uint *)&pMVar9->name;
      if (uVar3 < *(uint *)(pIVar4 + 0x18)) {
        in_RCX._0_4_ = uVar3 + 1;
        in_RCX._4_4_ = 0;
        *(uint *)&pMVar9->name = in_RCX._0_4_;
        *(Il2CppObject **)(pIVar4 + (long)(int)uVar3 * 8 + 0x20) = defaultValue;
        il2cpp_runtime_helper_022b4080(pIVar4 + (long)(int)uVar3 * 8 + 0x20,defaultValue);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)pMVar9,defaultValue,
                   (MethodInfo_362C220 *)
                   (*(Il2CppClass **)((long)in_RCX.genericMethod + 0x20))->rgctx_data[0xe].method);
      }
      pMVar17 = (MethodInfo *)&__this->fields;
      (__this->fields).DefaultValue = (System_Collections_Generic_List_T__o *)pMVar9;
      method_01 = pMVar9;
      il2cpp_runtime_helper_022b4080();
      if (__this != (Settings_ListSetting_T__o *)0x0) {
        vtableDispatch = (__this->klass->vtable)._4_SetDefault.methodPtr;
        (*vtableDispatch)
                  (__this,(__this->klass->vtable)._4_SetDefault.method,extraout_RDX,vtableDispatch);
        return;
      }
    }
  }
  auVar19 = il2cpp_runtime_helper_022b2c90();
  pMStack_60 = auVar19._0_8_;
  to = (_union_249689 *)(ulong)auVar19._8_4_;
  pMStack_68 = (MethodInfo *)0x3620faa;
  method_00 = in_RCX;
  pMStack_58 = pMVar9;
  pMStack_50 = method;
  Settings_TypedSetting_object____ctor
            ((Settings_TypedSetting_T__o *)pMVar17,
             (MethodInfo_2A240C0 *)
             (*(Il2CppClass **)((long)in_RCX.genericMethod + 0x20))->rgctx_data[3].method);
  pIVar8 = (*(Il2CppClass **)((long)in_RCX.genericMethod + 0x20))->rgctx_data->klass;
  if (((pIVar8->_2).field_0x6d & 1) == 0) {
    pMStack_68 = (MethodInfo *)0x3620fc7;
    pIVar8 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
  }
  pMStack_68 = (MethodInfo *)0x3620fd3;
  pMStack_60 = pMVar17;
  __this_04 = (MethodInfo *)il2cpp_runtime_helper_023052d0(pIVar8);
  pMVar9 = (*(Il2CppClass **)((long)in_RCX.genericMethod + 0x20))->rgctx_data[4].method;
  pMStack_68 = (MethodInfo *)0x3620fee;
  pMVar17 = __this_04;
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_04,(MethodInfo_362B8B0 *)pMVar9);
  pMVar10 = unaff_R13;
  if (method_01 != (MethodInfo *)0x0) {
    pMStack_68 = (MethodInfo *)0x362100a;
    pMVar10 = (MethodInfo *)
              (**(code **)(method_01->methodPointer + 0x188))
                        (method_01,*(undefined8 *)(method_01->methodPointer + 400));
    if ((int)auVar19._8_4_ < 1) {
label_03621123:
      pMVar10 = unaff_R13;
      pMVar6 = pMStack_60;
      pMVar17 = (MethodInfo *)&pMStack_60->invoker_method;
      pMStack_60->invoker_method = (InvokerMethod)__this_04;
      pMStack_68 = (MethodInfo *)0x3621137;
      pMVar9 = __this_04;
      il2cpp_runtime_helper_022b4080();
      to = (_union_249689 *)0x0;
      if (pMVar6 != (MethodInfo *)0x0) {
        UNRECOVERED_JUMPTABLE_00 = *(code **)(pMVar6->methodPointer + 0x178);
        (*UNRECOVERED_JUMPTABLE_00)
                  (pMVar6,*(undefined8 *)(pMVar6->methodPointer + 0x180),extraout_RDX_00,
                   UNRECOVERED_JUMPTABLE_00);
        return;
      }
    }
    else {
      if (__this_04 != (MethodInfo *)0x0) goto label_03621093;
      pMVar17 = (*(Il2CppClass **)((long)in_RCX.genericMethod + 0x20))->rgctx_data[8].method;
      pMStack_68 = (MethodInfo *)0x362102f;
      __this_04 = (MethodInfo *)System_Activator__CreateInstance_object_((MethodInfo_23DA7D0 *)pMVar17);
      pMStack_68 = (MethodInfo *)0x362103d;
      pMVar9 = method_01;
      Settings_ListSetting_object___CopyLimits
                ((Settings_ListSetting_T__o *)pMVar17,(Il2CppObject *)method_01,(Il2CppObject *)__this_04,
                 method_00.genericMethod);
      if (__this_04 != (MethodInfo *)0x0) {
        pMStack_68 = (MethodInfo *)0x362105c;
        (**(code **)(__this_04->methodPointer + 0x198))
                  (__this_04,pMVar10,*(undefined8 *)(__this_04->methodPointer + 0x1a0));
        pMStack_68 = (MethodInfo *)0x3621061;
        il2cpp_runtime_helper_022b2c90();
        do {
          pMStack_68 = (MethodInfo *)0x362108a;
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_04,defaultValue,
                     (MethodInfo_362C220 *)
                     (*(Il2CppClass **)((long)method_00.genericMethod + 0x20))->rgctx_data[0xe].method);
          iVar14 = (int)to;
          while( true ) {
            to = (_union_249689 *)(ulong)(iVar14 - 1U);
            unaff_R13 = pMVar10;
            if (iVar14 - 1U == 0) goto label_03621123;
label_03621093:
            pMVar17 = (*(Il2CppClass **)((long)in_RCX.genericMethod + 0x20))->rgctx_data[8].method;
            pMStack_68 = (MethodInfo *)0x36210a8;
            defaultValue = System_Activator__CreateInstance_object_((MethodInfo_23DA7D0 *)pMVar17);
            pMStack_68 = (MethodInfo *)0x36210b6;
            pMVar9 = method_01;
            Settings_ListSetting_object___CopyLimits
                      ((Settings_ListSetting_T__o *)pMVar17,(Il2CppObject *)method_01,defaultValue,
                       method_00.genericMethod);
            if ((MethodInfo *)defaultValue == (MethodInfo *)0x0) goto label_03621161;
            pMStack_68 = (MethodInfo *)0x36210d5;
            pMVar9 = pMVar10;
            pMVar17 = (MethodInfo *)defaultValue;
            (**(code **)(((MethodInfo *)defaultValue)->methodPointer + 0x198))
                      (defaultValue,pMVar10,
                       *(undefined8 *)(((MethodInfo *)defaultValue)->methodPointer + 0x1a0));
            method_00 = (_union_249689)
                        (*(Il2CppClass **)((long)in_RCX.genericMethod + 0x20))->rgctx_data[6].method;
            piVar1 = (int *)((long)&__this_04->name + 4);
            *piVar1 = *piVar1 + 1;
            pIVar4 = __this_04->invoker_method;
            if (pIVar4 == (InvokerMethod)0x0) goto label_03621161;
            uVar3 = *(uint *)&__this_04->name;
            if (*(uint *)(pIVar4 + 0x18) <= uVar3) break;
            method_00._0_4_ = uVar3 + 1;
            method_00._4_4_ = 0;
            *(uint *)&__this_04->name = method_00._0_4_;
            *(Il2CppObject **)(pIVar4 + (long)(int)uVar3 * 8 + 0x20) = defaultValue;
            pMStack_68 = (MethodInfo *)0x362111a;
            il2cpp_runtime_helper_022b4080(pIVar4 + (long)(int)uVar3 * 8 + 0x20,defaultValue);
            iVar14 = (int)to;
          }
        } while( true );
      }
    }
  }
label_03621161:
  pMStack_68 = (MethodInfo *)0x3621166;
  il2cpp_runtime_helper_022b2c90();
  p_Stack_80 = (_union_249689 *)0x362118f;
  pMStack_78 = __this_04;
  pMStack_70 = (MethodInfo *)defaultValue;
  pMStack_68 = method_01;
  Settings_TypedSetting_object____ctor
            ((Settings_TypedSetting_T__o *)pMVar17,(MethodInfo_2A240C0 *)pMVar9->klass->rgctx_data[3].method);
  pIVar8 = pMVar9->klass->rgctx_data->klass;
  if (((pIVar8->_2).field_0x6d & 1) == 0) {
    p_Stack_80 = (_union_249689 *)0x36211ab;
    pIVar8 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
  }
  p_Stack_80 = (_union_249689 *)0x36211b3;
  __this_05 = (Il2CppRGCTXData *)il2cpp_runtime_helper_023052d0(pIVar8);
  p_Stack_80 = (_union_249689 *)0x36211cd;
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_05,
             (MethodInfo_362B8B0 *)pMVar9->klass->rgctx_data[4].method);
  __this_07 = (Settings_TypedSetting_T__o *)&pMVar17->invoker_method;
  pMVar17->invoker_method = (InvokerMethod)__this_05;
  p_Stack_80 = (_union_249689 *)0x36211dd;
  pIVar16 = __this_05;
  il2cpp_runtime_helper_022b4080();
  if (pMVar17 != (MethodInfo *)0x0) {
    UNRECOVERED_JUMPTABLE_00 = *(code **)(pMVar17->methodPointer + 0x178);
    (*UNRECOVERED_JUMPTABLE_00)
              (pMVar17,*(undefined8 *)(pMVar17->methodPointer + 0x180),extraout_RDX_01,
               UNRECOVERED_JUMPTABLE_00);
    return;
  }
  p_Stack_80 = (_union_249689 *)0x3621202;
  il2cpp_runtime_helper_022b2c90();
  pSVar20 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar21 = (Il2CppType *)0x0;
  p_Var22 = (_union_249689 *)0x0;
  pIVar8 = (pIVar16[4].klass)->rgctx_data->klass;
  pIStack_a8 = __this_05;
  _Stack_a0 = in_RCX;
  pMStack_98 = pMVar10;
  pMStack_90 = pMVar9;
  pMStack_88 = pMVar17;
  p_Stack_80 = to;
  if (((pIVar8->_2).field_0x6d & 1) == 0) {
    pIVar8 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
  }
  __this_06 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(pIVar8);
  System_Collections_Generic_List_object____ctor
            (__this_06,(MethodInfo_362B8B0 *)(pIVar16[4].klass)->rgctx_data[4].method);
  pSVar18 = (System_Collections_Generic_List_object__o *)(__this_07->fields).DefaultValue;
  if (pSVar18 == (System_Collections_Generic_List_object__o *)0x0) goto label_03621457;
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)auStack_c0,pSVar18,
             (MethodInfo_362CEB0 *)(pIVar16[4].klass)->rgctx_data[10].method);
  p_Var15 = to;
  pSVar20 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_c0._0_8_;
  pIVar21 = (Il2CppType *)auStack_c0._8_8_;
  to_00 = p_Stack_b0;
  if (__this_06 == (System_Collections_Generic_List_object__o *)0x0) {
    __this_01.fields._index = auStack_c0._8_4_;
    __this_01.fields._version = auStack_c0._12_4_;
    __this_01.fields._list = (System_Collections_Generic_List_T__o *)auStack_c0._0_8_;
    __this_01.fields._current = (Il2CppObject *)p_Stack_b0;
    bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff20);
    pSVar20 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_c0._0_8_;
    pIVar21 = (Il2CppType *)auStack_c0._8_8_;
    p_Var15 = p_Stack_b0;
    if ((char)bVar7 != '\0') goto label_03621464;
  }
  else {
    while (__this_00.fields._8_8_ = pIVar21,
          __this_00.fields._list = (System_Collections_Generic_List_T__o *)pSVar20,
          __this_00.fields._current = (Il2CppObject *)to_00,
          bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffff20),
          auStack_c0._0_8_ = pSVar20, auStack_c0._8_8_ = pIVar21, p_Stack_b0 = to_00, (char)bVar7 != '\0') {
      p_Var22 = to_00;
      to = (_union_249689 *)
           System_Activator__CreateInstance_object_
                     ((MethodInfo_23DA7D0 *)(pIVar16[4].klass)->rgctx_data[8].method);
      pSVar18 = (System_Collections_Generic_List_object__o *)(__this_07->fields).DefaultValue;
      __this_08 = (System_Collections_Generic_List_object__o *)0x0;
      if (pSVar18 == (System_Collections_Generic_List_object__o *)0x0) goto label_03621486;
      if (0 < (pSVar18->fields)._size) {
        pIVar11 = System_Collections_Generic_List_object___get_Item
                            (pSVar18,0,
                             (MethodInfo_362BED0 *)
                             ((pIVar16[4].klass)->rgctx_data[0xe].method)->klass->rgctx_data[0x14].method);
        Settings_ListSetting_object___CopyLimits
                  ((Settings_ListSetting_T__o *)pSVar18,pIVar11,(Il2CppObject *)to,method_00.genericMethod);
      }
      if (to_00 == (_union_249689 *)0x0) goto label_036214cc;
      uVar12 = (**(code **)((long)to_00->genericMethod + 0x188))
                         (to_00,*(undefined8 *)((long)to_00->genericMethod + 400));
      if (to == (_union_249689 *)0x0) goto label_036214ea;
      (**(code **)((long)to->genericMethod + 0x198))
                (to,uVar12,*(undefined8 *)((long)to->genericMethod + 0x1a0));
      method_00 = (_union_249689)(pIVar16[4].klass)->rgctx_data[6].method;
      piVar2 = &(__this_06->fields)._version;
      *piVar2 = *piVar2 + 1;
      pSVar5 = (__this_06->fields)._items;
      if (pSVar5 == (System_Object_array *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        goto label_03621457;
      }
      uVar3 = (__this_06->fields)._size;
      p_Var15 = to;
      if (uVar3 < (uint)pSVar5->max_length) {
        method_00._0_4_ = uVar3 + 1;
        method_00._4_4_ = 0;
        (__this_06->fields)._size = method_00._0_4_;
        pSVar5->m_Items[(int)uVar3] = (Il2CppObject *)to;
        il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar3,to);
        to_00 = p_Var22;
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  (__this_06,(Il2CppObject *)to,
                   (MethodInfo_362C220 *)
                   (*(Il2CppClass **)((long)method_00.genericMethod + 0x20))->rgctx_data[0xe].method);
        to_00 = p_Var22;
      }
    }
  }
  to = (_union_249689 *)0x0;
  pSVar20 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_c0._0_8_;
  pIVar21 = (Il2CppType *)auStack_c0._8_8_;
  p_Var22 = p_Stack_b0;
  while( true ) {
    __this_02.fields._8_8_ = pIVar21;
    __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar20;
    __this_02.fields._current = (Il2CppObject *)p_Var22;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff20);
    if (to == (_union_249689 *)0x0) {
      if (__this_07 != (Settings_TypedSetting_T__o *)0x0) {
        Settings_TypedSetting_object___set_Value
                  (__this_07,(Il2CppObject *)__this_06,
                   (MethodInfo_2A24090 *)(pIVar16[4].klass)->rgctx_data[0x11].method);
        return;
      }
label_03621457:
      il2cpp_runtime_helper_022b2c90();
    }
    il2cpp_runtime_helper_022fefe0(to);
    p_Var15 = p_Var22;
label_03621464:
    p_Var22 = p_Var15;
    to_00 = (_union_249689 *)
            System_Activator__CreateInstance_object_
                      ((MethodInfo_23DA7D0 *)(pIVar16[4].klass)->rgctx_data[8].method);
    __this_08 = (System_Collections_Generic_List_object__o *)(__this_07->fields).DefaultValue;
    to = p_Var15;
    if (__this_08 == (System_Collections_Generic_List_object__o *)0x0) {
label_03621486:
      to_00 = (_union_249689 *)il2cpp_runtime_helper_022b2c90();
      to = p_Var15;
    }
    if (0 < (__this_08->fields)._size) {
      pIVar11 = System_Collections_Generic_List_object___get_Item
                          (__this_08,0,
                           (MethodInfo_362BED0 *)
                           ((pIVar16[4].klass)->rgctx_data[0xe].method)->klass->rgctx_data[0x14].method);
      Settings_ListSetting_object___CopyLimits
                ((Settings_ListSetting_T__o *)__this_08,pIVar11,(Il2CppObject *)to_00,method_00.genericMethod)
      ;
    }
    if (to == (_union_249689 *)0x0) {
label_036214cc:
      il2cpp_runtime_helper_022b2c90();
    }
    uVar12 = (**(code **)((long)to->genericMethod + 0x188))(to,*(undefined8 *)((long)to->genericMethod + 400))
    ;
    if (to_00 == (_union_249689 *)0x0) {
label_036214ea:
      uVar12 = il2cpp_runtime_helper_022b2c90();
    }
    method_00 = (_union_249689)to_00->genericMethod;
    (*(code *)*(_union_13 *)((long)method_00.genericMethod + 0x198))
              (to_00,uVar12,((_union_148064 *)((long)method_00.genericMethod + 0x1a0))->genericMethod);
    auVar19 = il2cpp_runtime_helper_022b2c90();
    if (auVar19._8_4_ != 1) break;
    puVar13 = (undefined8 *)__cxa_begin_catch(auVar19._0_8_);
    to = (_union_249689 *)*puVar13;
    __cxa_end_catch();
  }
  __this_03.fields._8_8_ = pIVar21;
  __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar20;
  __this_03.fields._current = (Il2CppObject *)p_Var22;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff20);
  _Unwind_Resume(auVar19._0_8_);
}


// Settings.ListSetting<object>$$.ctor
// il2cpp: void Settings_ListSetting_object____ctor (Settings_ListSetting_T__o* __this, Il2CppObject* defaultValue, int32_t count, const MethodInfo_3520F80* method);
// 0x3620f80

void Settings_ListSetting_object____ctor_3520f80
               (Settings_ListSetting_T__o *__this,Il2CppObject *defaultValue,int32_t count,
               MethodInfo_3520F80 *method)

{
  int *piVar1;
  int32_t *piVar2;
  uint uVar3;
  InvokerMethod pIVar4;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  code *vtableDispatch;
  System_Object_array *pSVar5;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  Settings_ListSetting_T__o *pSVar6;
  bool_conflict bVar7;
  Il2CppClass *pIVar8;
  MethodInfo *__this_04;
  MethodInfo *pMVar9;
  Il2CppRGCTXData *__this_05;
  System_Collections_Generic_List_object__o *__this_06;
  Il2CppObject *to;
  Il2CppObject *pIVar10;
  undefined8 uVar11;
  Il2CppObject *to_00;
  undefined8 *puVar12;
  Il2CppClass *method_00;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  int iVar13;
  MethodInfo *method_01;
  Il2CppRGCTXData *pIVar14;
  MethodInfo *method_02;
  Settings_TypedSetting_T__o *__this_07;
  System_Collections_Generic_List_object__o *pSVar15;
  System_Collections_Generic_List_object__o *__this_08;
  MethodInfo *unaff_R13;
  MethodInfo *unaff_R14;
  undefined1 auVar16 [12];
  System_Collections_Generic_List_Enumerator_T__c *pSVar17;
  Il2CppType *pIVar18;
  Il2CppObject *pIVar19;
  undefined1 auStack_98 [16];
  Il2CppObject *pIStack_88;
  Il2CppRGCTXData *pIStack_80;
  _union_249689 _Stack_78;
  MethodInfo *pMStack_70;
  MethodInfo *pMStack_68;
  MethodInfo *pMStack_60;
  Il2CppObject *pIStack_58;
  MethodInfo *pMStack_50;
  MethodInfo *pMStack_48;
  Il2CppObject *pIStack_40;
  Settings_ListSetting_T__o *local_38;
  
  to = (Il2CppObject *)(ulong)(uint)count;
  pIStack_40 = (Il2CppObject *)0x3620faa;
  method_00 = (Il2CppClass *)method;
  Settings_TypedSetting_object____ctor
            ((Settings_TypedSetting_T__o *)__this,
             (MethodInfo_2A240C0 *)method->klass->rgctx_data->_3_Settings_TypedSetting_List_T____ctor);
  pIVar8 = method->klass->rgctx_data->_0_System_Collections_Generic_List_T_;
  if (((pIVar8->_2).field_0x6d & 1) == 0) {
    pIStack_40 = (Il2CppObject *)0x3620fc7;
    pIVar8 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
  }
  pIStack_40 = (Il2CppObject *)0x3620fd3;
  local_38 = __this;
  __this_04 = (MethodInfo *)il2cpp_runtime_helper_023052d0(pIVar8);
  method_01 = method->klass->rgctx_data->_4_System_Collections_Generic_List_T___ctor;
  pIStack_40 = (Il2CppObject *)0x3620fee;
  method_02 = __this_04;
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_04,(MethodInfo_362B8B0 *)method_01);
  pMVar9 = unaff_R13;
  if (defaultValue != (Il2CppObject *)0x0) {
    pIStack_40 = (Il2CppObject *)0x362100a;
    pMVar9 = (MethodInfo *)
             (*defaultValue->klass->vtable[5].methodPtr)(defaultValue,defaultValue->klass->vtable[5].method);
    if (count < 1) {
label_03621123:
      pMVar9 = unaff_R13;
      pSVar6 = local_38;
      method_02 = (MethodInfo *)&local_38->fields;
      (local_38->fields).DefaultValue = (System_Collections_Generic_List_T__o *)__this_04;
      pIStack_40 = (Il2CppObject *)0x3621137;
      method_01 = __this_04;
      il2cpp_runtime_helper_022b4080();
      to = (Il2CppObject *)0x0;
      if (pSVar6 != (Settings_ListSetting_T__o *)0x0) {
        UNRECOVERED_JUMPTABLE_00 = (pSVar6->klass->vtable)._4_SetDefault.methodPtr;
        (*UNRECOVERED_JUMPTABLE_00)
                  (pSVar6,(pSVar6->klass->vtable)._4_SetDefault.method,extraout_RDX,UNRECOVERED_JUMPTABLE_00);
        return;
      }
    }
    else {
      if (__this_04 != (MethodInfo *)0x0) goto label_03621093;
      method_02 = method->klass->rgctx_data->_8_System_Activator_CreateInstance_T_;
      pIStack_40 = (Il2CppObject *)0x362102f;
      __this_04 = (MethodInfo *)System_Activator__CreateInstance_object_((MethodInfo_23DA7D0 *)method_02);
      pIStack_40 = (Il2CppObject *)0x362103d;
      method_01 = (MethodInfo *)defaultValue;
      Settings_ListSetting_object___CopyLimits
                ((Settings_ListSetting_T__o *)method_02,defaultValue,(Il2CppObject *)__this_04,
                 (MethodInfo_3521EF0 *)method_00);
      if (__this_04 != (MethodInfo *)0x0) {
        pIStack_40 = (Il2CppObject *)0x362105c;
        (**(code **)(__this_04->methodPointer + 0x198))
                  (__this_04,pMVar9,*(undefined8 *)(__this_04->methodPointer + 0x1a0));
        pIStack_40 = (Il2CppObject *)0x3621061;
        il2cpp_runtime_helper_022b2c90();
        do {
          pIStack_40 = (Il2CppObject *)0x362108a;
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_04,(Il2CppObject *)unaff_R14,
                     *(MethodInfo_362C220 **)(*(long *)((long)(method_00->_1).byval_arg.data + 0xc0) + 0x70));
          iVar13 = (int)to;
          while( true ) {
            to = (Il2CppObject *)(ulong)(iVar13 - 1U);
            unaff_R13 = pMVar9;
            if (iVar13 - 1U == 0) goto label_03621123;
label_03621093:
            method_02 = method->klass->rgctx_data->_8_System_Activator_CreateInstance_T_;
            pIStack_40 = (Il2CppObject *)0x36210a8;
            unaff_R14 = (MethodInfo *)
                        System_Activator__CreateInstance_object_((MethodInfo_23DA7D0 *)method_02);
            pIStack_40 = (Il2CppObject *)0x36210b6;
            method_01 = (MethodInfo *)defaultValue;
            Settings_ListSetting_object___CopyLimits
                      ((Settings_ListSetting_T__o *)method_02,defaultValue,(Il2CppObject *)unaff_R14,
                       (MethodInfo_3521EF0 *)method_00);
            if (unaff_R14 == (MethodInfo *)0x0) goto label_03621161;
            pIStack_40 = (Il2CppObject *)0x36210d5;
            method_01 = pMVar9;
            method_02 = unaff_R14;
            (**(code **)(unaff_R14->methodPointer + 0x198))
                      (unaff_R14,pMVar9,*(undefined8 *)(unaff_R14->methodPointer + 0x1a0));
            method_00 = (Il2CppClass *)method->klass->rgctx_data->_6_System_Collections_Generic_List_T__Add;
            piVar1 = (int *)((long)&__this_04->name + 4);
            *piVar1 = *piVar1 + 1;
            pIVar4 = __this_04->invoker_method;
            if (pIVar4 == (InvokerMethod)0x0) goto label_03621161;
            uVar3 = *(uint *)&__this_04->name;
            if (*(uint *)(pIVar4 + 0x18) <= uVar3) break;
            method_00 = (Il2CppClass *)(ulong)(uVar3 + 1);
            *(uint *)&__this_04->name = uVar3 + 1;
            *(MethodInfo **)(pIVar4 + (long)(int)uVar3 * 8 + 0x20) = unaff_R14;
            pIStack_40 = (Il2CppObject *)0x362111a;
            il2cpp_runtime_helper_022b4080(pIVar4 + (long)(int)uVar3 * 8 + 0x20,unaff_R14);
            iVar13 = (int)to;
          }
        } while( true );
      }
    }
  }
label_03621161:
  pIStack_40 = (Il2CppObject *)0x3621166;
  il2cpp_runtime_helper_022b2c90();
  pIStack_58 = (Il2CppObject *)0x362118f;
  pMStack_50 = __this_04;
  pMStack_48 = unaff_R14;
  pIStack_40 = defaultValue;
  Settings_TypedSetting_object____ctor
            ((Settings_TypedSetting_T__o *)method_02,
             (MethodInfo_2A240C0 *)method_01->klass->rgctx_data[3].method);
  pIVar8 = method_01->klass->rgctx_data->klass;
  if (((pIVar8->_2).field_0x6d & 1) == 0) {
    pIStack_58 = (Il2CppObject *)0x36211ab;
    pIVar8 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
  }
  pIStack_58 = (Il2CppObject *)0x36211b3;
  __this_05 = (Il2CppRGCTXData *)il2cpp_runtime_helper_023052d0(pIVar8);
  pIStack_58 = (Il2CppObject *)0x36211cd;
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_05,
             (MethodInfo_362B8B0 *)method_01->klass->rgctx_data[4].method);
  __this_07 = (Settings_TypedSetting_T__o *)&method_02->invoker_method;
  method_02->invoker_method = (InvokerMethod)__this_05;
  pIStack_58 = (Il2CppObject *)0x36211dd;
  pIVar14 = __this_05;
  il2cpp_runtime_helper_022b4080();
  if (method_02 != (MethodInfo *)0x0) {
    vtableDispatch = *(code **)(method_02->methodPointer + 0x178);
    (*vtableDispatch)
              (method_02,*(undefined8 *)(method_02->methodPointer + 0x180),extraout_RDX_00,
               vtableDispatch);
    return;
  }
  pIStack_58 = (Il2CppObject *)0x3621202;
  il2cpp_runtime_helper_022b2c90();
  pSVar17 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar18 = (Il2CppType *)0x0;
  pIVar19 = (Il2CppObject *)0x0;
  pIVar8 = (pIVar14[4].klass)->rgctx_data->klass;
  pIStack_80 = __this_05;
  _Stack_78 = (_union_249689)method;
  pMStack_70 = pMVar9;
  pMStack_68 = method_01;
  pMStack_60 = method_02;
  pIStack_58 = to;
  if (((pIVar8->_2).field_0x6d & 1) == 0) {
    pIVar8 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
  }
  __this_06 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(pIVar8);
  System_Collections_Generic_List_object____ctor
            (__this_06,(MethodInfo_362B8B0 *)(pIVar14[4].klass)->rgctx_data[4].method);
  pSVar15 = (System_Collections_Generic_List_object__o *)(__this_07->fields).DefaultValue;
  if (pSVar15 == (System_Collections_Generic_List_object__o *)0x0) goto label_03621457;
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)auStack_98,pSVar15,
             (MethodInfo_362CEB0 *)(pIVar14[4].klass)->rgctx_data[10].method);
  pIVar10 = to;
  pSVar17 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_98._0_8_;
  pIVar18 = (Il2CppType *)auStack_98._8_8_;
  to_00 = pIStack_88;
  if (__this_06 == (System_Collections_Generic_List_object__o *)0x0) {
    __this_01.fields._index = auStack_98._8_4_;
    __this_01.fields._version = auStack_98._12_4_;
    __this_01.fields._list = (System_Collections_Generic_List_T__o *)auStack_98._0_8_;
    __this_01.fields._current = pIStack_88;
    bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff48);
    pSVar17 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_98._0_8_;
    pIVar18 = (Il2CppType *)auStack_98._8_8_;
    pIVar10 = pIStack_88;
    if ((char)bVar7 != '\0') goto label_03621464;
  }
  else {
    while (__this_00.fields._8_8_ = pIVar18,
          __this_00.fields._list = (System_Collections_Generic_List_T__o *)pSVar17,
          __this_00.fields._current = to_00,
          bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffff48),
          auStack_98._0_8_ = pSVar17, auStack_98._8_8_ = pIVar18, pIStack_88 = to_00, (char)bVar7 != '\0') {
      pIVar19 = to_00;
      to = System_Activator__CreateInstance_object_
                     ((MethodInfo_23DA7D0 *)(pIVar14[4].klass)->rgctx_data[8].method);
      pSVar15 = (System_Collections_Generic_List_object__o *)(__this_07->fields).DefaultValue;
      __this_08 = (System_Collections_Generic_List_object__o *)0x0;
      if (pSVar15 == (System_Collections_Generic_List_object__o *)0x0) goto label_03621486;
      if (0 < (pSVar15->fields)._size) {
        pIVar10 = System_Collections_Generic_List_object___get_Item
                            (pSVar15,0,
                             (MethodInfo_362BED0 *)
                             ((pIVar14[4].klass)->rgctx_data[0xe].method)->klass->rgctx_data[0x14].method);
        Settings_ListSetting_object___CopyLimits
                  ((Settings_ListSetting_T__o *)pSVar15,pIVar10,to,(MethodInfo_3521EF0 *)method_00);
      }
      if (to_00 == (Il2CppObject *)0x0) goto label_036214cc;
      uVar11 = (*to_00->klass->vtable[5].methodPtr)(to_00,to_00->klass->vtable[5].method);
      if (to == (Il2CppObject *)0x0) goto label_036214ea;
      (*to->klass->vtable[6].methodPtr)(to,uVar11,to->klass->vtable[6].method);
      method_00 = (Il2CppClass *)(pIVar14[4].klass)->rgctx_data[6].method;
      piVar2 = &(__this_06->fields)._version;
      *piVar2 = *piVar2 + 1;
      pSVar5 = (__this_06->fields)._items;
      if (pSVar5 == (System_Object_array *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        goto label_03621457;
      }
      uVar3 = (__this_06->fields)._size;
      pIVar10 = to;
      if (uVar3 < (uint)pSVar5->max_length) {
        method_00 = (Il2CppClass *)(ulong)(uVar3 + 1);
        (__this_06->fields)._size = uVar3 + 1;
        pSVar5->m_Items[(int)uVar3] = to;
        il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar3,to);
        to_00 = pIVar19;
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  (__this_06,to,
                   *(MethodInfo_362C220 **)(*(long *)((long)(method_00->_1).byval_arg.data + 0xc0) + 0x70));
        to_00 = pIVar19;
      }
    }
  }
  to = (Il2CppObject *)0x0;
  pSVar17 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_98._0_8_;
  pIVar18 = (Il2CppType *)auStack_98._8_8_;
  pIVar19 = pIStack_88;
  while( true ) {
    __this_02.fields._8_8_ = pIVar18;
    __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar17;
    __this_02.fields._current = pIVar19;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff48);
    if (to == (Il2CppObject *)0x0) {
      if (__this_07 != (Settings_TypedSetting_T__o *)0x0) {
        Settings_TypedSetting_object___set_Value
                  (__this_07,(Il2CppObject *)__this_06,
                   (MethodInfo_2A24090 *)(pIVar14[4].klass)->rgctx_data[0x11].method);
        return;
      }
label_03621457:
      il2cpp_runtime_helper_022b2c90();
    }
    il2cpp_runtime_helper_022fefe0(to);
    pIVar10 = pIVar19;
label_03621464:
    pIVar19 = pIVar10;
    to_00 = System_Activator__CreateInstance_object_
                      ((MethodInfo_23DA7D0 *)(pIVar14[4].klass)->rgctx_data[8].method);
    __this_08 = (System_Collections_Generic_List_object__o *)(__this_07->fields).DefaultValue;
    to = pIVar10;
    if (__this_08 == (System_Collections_Generic_List_object__o *)0x0) {
label_03621486:
      to_00 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
      to = pIVar10;
    }
    if (0 < (__this_08->fields)._size) {
      pIVar10 = System_Collections_Generic_List_object___get_Item
                          (__this_08,0,
                           (MethodInfo_362BED0 *)
                           ((pIVar14[4].klass)->rgctx_data[0xe].method)->klass->rgctx_data[0x14].method);
      Settings_ListSetting_object___CopyLimits
                ((Settings_ListSetting_T__o *)__this_08,pIVar10,to_00,(MethodInfo_3521EF0 *)method_00);
    }
    if (to == (Il2CppObject *)0x0) {
label_036214cc:
      il2cpp_runtime_helper_022b2c90();
    }
    uVar11 = (*to->klass->vtable[5].methodPtr)(to,to->klass->vtable[5].method);
    if (to_00 == (Il2CppObject *)0x0) {
label_036214ea:
      uVar11 = il2cpp_runtime_helper_022b2c90();
    }
    method_00 = to_00->klass;
    (*method_00->vtable[6].methodPtr)(to_00,uVar11,method_00->vtable[6].method);
    auVar16 = il2cpp_runtime_helper_022b2c90();
    if (auVar16._8_4_ != 1) break;
    puVar12 = (undefined8 *)__cxa_begin_catch(auVar16._0_8_);
    to = (Il2CppObject *)*puVar12;
    __cxa_end_catch();
  }
  __this_03.fields._8_8_ = pIVar18;
  __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar17;
  __this_03.fields._current = pIVar19;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff48);
  _Unwind_Resume(auVar16._0_8_);
}


// Settings.ListSetting<object>$$.ctor
// il2cpp: void Settings_ListSetting_object____ctor (Settings_ListSetting_T__o* __this, const MethodInfo_3521170* method);
// 0x3621170

void Settings_ListSetting_object____ctor_3521170(Settings_ListSetting_T__o *__this,MethodInfo_3521170 *method)

{
  int32_t *piVar1;
  uint uVar2;
  Il2CppMethodPointer vtableDispatch;
  System_Object_array *pSVar3;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  bool_conflict bVar4;
  Il2CppClass *pIVar5;
  Il2CppRGCTXData *__this_04;
  System_Collections_Generic_List_object__o *__this_05;
  Il2CppObject *pIVar6;
  undefined8 uVar7;
  Il2CppObject *to;
  undefined8 *puVar8;
  Il2CppClass *in_RCX;
  undefined8 extraout_RDX;
  Il2CppObject *unaff_RBP;
  Il2CppRGCTXData *pIVar9;
  Settings_TypedSetting_T__o *__this_06;
  System_Collections_Generic_List_object__o *pSVar10;
  System_Collections_Generic_List_object__o *__this_07;
  undefined1 auVar11 [12];
  System_Collections_Generic_List_Enumerator_T__c *pSVar12;
  Il2CppType *pIVar13;
  Il2CppObject *pIVar14;
  undefined1 local_60 [16];
  Il2CppObject *local_50;
  Il2CppRGCTXData *pIStack_48;
  
  Settings_TypedSetting_object____ctor
            ((Settings_TypedSetting_T__o *)__this,
             (MethodInfo_2A240C0 *)method->klass->rgctx_data->_3_Settings_TypedSetting_List_T____ctor);
  pIVar5 = method->klass->rgctx_data->_0_System_Collections_Generic_List_T_;
  if (((pIVar5->_2).field_0x6d & 1) == 0) {
    pIVar5 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
  }
  __this_04 = (Il2CppRGCTXData *)il2cpp_runtime_helper_023052d0(pIVar5);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_04,
             (MethodInfo_362B8B0 *)method->klass->rgctx_data->_4_System_Collections_Generic_List_T___ctor);
  __this_06 = (Settings_TypedSetting_T__o *)&__this->fields;
  (__this->fields).DefaultValue = (System_Collections_Generic_List_T__o *)__this_04;
  pIVar9 = __this_04;
  il2cpp_runtime_helper_022b4080();
  if (__this != (Settings_ListSetting_T__o *)0x0) {
    vtableDispatch = (__this->klass->vtable)._4_SetDefault.methodPtr;
    (*vtableDispatch)
              (__this,(__this->klass->vtable)._4_SetDefault.method,extraout_RDX,vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar12 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar13 = (Il2CppType *)0x0;
  pIVar14 = (Il2CppObject *)0x0;
  pIVar5 = (pIVar9[4].klass)->rgctx_data->klass;
  pIStack_48 = __this_04;
  if (((pIVar5->_2).field_0x6d & 1) == 0) {
    pIVar5 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
  }
  __this_05 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(pIVar5);
  System_Collections_Generic_List_object____ctor
            (__this_05,(MethodInfo_362B8B0 *)(pIVar9[4].klass)->rgctx_data[4].method);
  pSVar10 = (System_Collections_Generic_List_object__o *)(__this_06->fields).DefaultValue;
  if (pSVar10 == (System_Collections_Generic_List_object__o *)0x0) goto label_03621457;
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_60,pSVar10,
             (MethodInfo_362CEB0 *)(pIVar9[4].klass)->rgctx_data[10].method);
  pIVar6 = unaff_RBP;
  pSVar12 = (System_Collections_Generic_List_Enumerator_T__c *)local_60._0_8_;
  pIVar13 = (Il2CppType *)local_60._8_8_;
  to = local_50;
  if (__this_05 == (System_Collections_Generic_List_object__o *)0x0) {
    __this_01.fields._index = local_60._8_4_;
    __this_01.fields._version = local_60._12_4_;
    __this_01.fields._list = (System_Collections_Generic_List_T__o *)local_60._0_8_;
    __this_01.fields._current = local_50;
    bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff80);
    pSVar12 = (System_Collections_Generic_List_Enumerator_T__c *)local_60._0_8_;
    pIVar13 = (Il2CppType *)local_60._8_8_;
    pIVar6 = local_50;
    if ((char)bVar4 != '\0') goto label_03621464;
  }
  else {
    while (__this_00.fields._8_8_ = pIVar13,
          __this_00.fields._list = (System_Collections_Generic_List_T__o *)pSVar12,
          __this_00.fields._current = to,
          bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffff80),
          local_60._0_8_ = pSVar12, local_60._8_8_ = pIVar13, local_50 = to, (char)bVar4 != '\0') {
      pIVar14 = to;
      unaff_RBP = System_Activator__CreateInstance_object_
                            ((MethodInfo_23DA7D0 *)(pIVar9[4].klass)->rgctx_data[8].method);
      pSVar10 = (System_Collections_Generic_List_object__o *)(__this_06->fields).DefaultValue;
      __this_07 = (System_Collections_Generic_List_object__o *)0x0;
      if (pSVar10 == (System_Collections_Generic_List_object__o *)0x0) goto label_03621486;
      if (0 < (pSVar10->fields)._size) {
        pIVar6 = System_Collections_Generic_List_object___get_Item
                           (pSVar10,0,
                            (MethodInfo_362BED0 *)
                            ((pIVar9[4].klass)->rgctx_data[0xe].method)->klass->rgctx_data[0x14].method);
        Settings_ListSetting_object___CopyLimits
                  ((Settings_ListSetting_T__o *)pSVar10,pIVar6,unaff_RBP,(MethodInfo_3521EF0 *)in_RCX);
      }
      if (to == (Il2CppObject *)0x0) goto label_036214cc;
      uVar7 = (*to->klass->vtable[5].methodPtr)(to,to->klass->vtable[5].method);
      if (unaff_RBP == (Il2CppObject *)0x0) goto label_036214ea;
      (*unaff_RBP->klass->vtable[6].methodPtr)(unaff_RBP,uVar7,unaff_RBP->klass->vtable[6].method);
      in_RCX = (Il2CppClass *)(pIVar9[4].klass)->rgctx_data[6].method;
      piVar1 = &(__this_05->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar3 = (__this_05->fields)._items;
      if (pSVar3 == (System_Object_array *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        goto label_03621457;
      }
      uVar2 = (__this_05->fields)._size;
      pIVar6 = unaff_RBP;
      if (uVar2 < (uint)pSVar3->max_length) {
        in_RCX = (Il2CppClass *)(ulong)(uVar2 + 1);
        (__this_05->fields)._size = uVar2 + 1;
        pSVar3->m_Items[(int)uVar2] = unaff_RBP;
        il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2,unaff_RBP);
        to = pIVar14;
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  (__this_05,unaff_RBP,
                   *(MethodInfo_362C220 **)(*(long *)((long)(in_RCX->_1).byval_arg.data + 0xc0) + 0x70));
        to = pIVar14;
      }
    }
  }
  unaff_RBP = (Il2CppObject *)0x0;
  pSVar12 = (System_Collections_Generic_List_Enumerator_T__c *)local_60._0_8_;
  pIVar13 = (Il2CppType *)local_60._8_8_;
  pIVar14 = local_50;
  while( true ) {
    __this_02.fields._8_8_ = pIVar13;
    __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar12;
    __this_02.fields._current = pIVar14;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff80);
    if (unaff_RBP == (Il2CppObject *)0x0) {
      if (__this_06 != (Settings_TypedSetting_T__o *)0x0) {
        Settings_TypedSetting_object___set_Value
                  (__this_06,(Il2CppObject *)__this_05,
                   (MethodInfo_2A24090 *)(pIVar9[4].klass)->rgctx_data[0x11].method);
        return;
      }
label_03621457:
      il2cpp_runtime_helper_022b2c90();
    }
    il2cpp_runtime_helper_022fefe0(unaff_RBP);
    pIVar6 = pIVar14;
label_03621464:
    pIVar14 = pIVar6;
    to = System_Activator__CreateInstance_object_
                   ((MethodInfo_23DA7D0 *)(pIVar9[4].klass)->rgctx_data[8].method);
    __this_07 = (System_Collections_Generic_List_object__o *)(__this_06->fields).DefaultValue;
    unaff_RBP = pIVar6;
    if (__this_07 == (System_Collections_Generic_List_object__o *)0x0) {
label_03621486:
      to = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
      unaff_RBP = pIVar6;
    }
    if (0 < (__this_07->fields)._size) {
      pIVar6 = System_Collections_Generic_List_object___get_Item
                         (__this_07,0,
                          (MethodInfo_362BED0 *)
                          ((pIVar9[4].klass)->rgctx_data[0xe].method)->klass->rgctx_data[0x14].method);
      Settings_ListSetting_object___CopyLimits
                ((Settings_ListSetting_T__o *)__this_07,pIVar6,to,(MethodInfo_3521EF0 *)in_RCX);
    }
    if (unaff_RBP == (Il2CppObject *)0x0) {
label_036214cc:
      il2cpp_runtime_helper_022b2c90();
    }
    uVar7 = (*unaff_RBP->klass->vtable[5].methodPtr)(unaff_RBP,unaff_RBP->klass->vtable[5].method);
    if (to == (Il2CppObject *)0x0) {
label_036214ea:
      uVar7 = il2cpp_runtime_helper_022b2c90();
    }
    in_RCX = to->klass;
    (*in_RCX->vtable[6].methodPtr)(to,uVar7,in_RCX->vtable[6].method);
    auVar11 = il2cpp_runtime_helper_022b2c90();
    if (auVar11._8_4_ != 1) break;
    puVar8 = (undefined8 *)__cxa_begin_catch(auVar11._0_8_);
    unaff_RBP = (Il2CppObject *)*puVar8;
    __cxa_end_catch();
  }
  __this_03.fields._8_8_ = pIVar13;
  __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar12;
  __this_03.fields._current = pIVar14;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff80);
  _Unwind_Resume(auVar11._0_8_);
}


// Settings.ListSetting<object>$$SetDefault
// il2cpp: void Settings_ListSetting_object___SetDefault (Settings_ListSetting_T__o* __this, const MethodInfo_3521210* method);
// 0x3621210

void Settings_ListSetting_object___SetDefault(Settings_ListSetting_T__o *__this,MethodInfo_3521210 *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  bool_conflict bVar4;
  Il2CppClass *pIVar5;
  System_Collections_Generic_List_object__o *__this_04;
  Il2CppObject *pIVar6;
  undefined8 uVar7;
  Il2CppObject *to;
  undefined8 *puVar8;
  Il2CppClass *in_RCX;
  Il2CppObject *unaff_RBP;
  System_Collections_Generic_List_object__o *pSVar9;
  System_Collections_Generic_List_object__o *__this_05;
  undefined1 auVar10 [12];
  System_Collections_Generic_List_Enumerator_T__c *pSVar11;
  Il2CppType *pIVar12;
  Il2CppObject *pIVar13;
  undefined1 auStack_48 [16];
  Il2CppObject *pIStack_38;
  
  pSVar11 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar12 = (Il2CppType *)0x0;
  pIVar13 = (Il2CppObject *)0x0;
  pIVar5 = method->klass->rgctx_data->_0_System_Collections_Generic_List_T_;
  if (((pIVar5->_2).field_0x6d & 1) == 0) {
    pIVar5 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
  }
  __this_04 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(pIVar5);
  System_Collections_Generic_List_object____ctor
            (__this_04,
             (MethodInfo_362B8B0 *)method->klass->rgctx_data->_4_System_Collections_Generic_List_T___ctor);
  pSVar9 = (System_Collections_Generic_List_object__o *)(__this->fields).DefaultValue;
  if (pSVar9 == (System_Collections_Generic_List_object__o *)0x0) goto label_03621457;
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)auStack_48,pSVar9,
             (MethodInfo_362CEB0 *)
             method->klass->rgctx_data->_10_System_Collections_Generic_List_T__GetEnumerator);
  pIVar6 = unaff_RBP;
  pSVar11 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_48._0_8_;
  pIVar12 = (Il2CppType *)auStack_48._8_8_;
  to = pIStack_38;
  if (__this_04 == (System_Collections_Generic_List_object__o *)0x0) {
    __this_01.fields._index = auStack_48._8_4_;
    __this_01.fields._version = auStack_48._12_4_;
    __this_01.fields._list = (System_Collections_Generic_List_T__o *)auStack_48._0_8_;
    __this_01.fields._current = pIStack_38;
    bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98);
    pSVar11 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_48._0_8_;
    pIVar12 = (Il2CppType *)auStack_48._8_8_;
    pIVar6 = pIStack_38;
    if ((char)bVar4 != '\0') goto label_03621464;
  }
  else {
    while (__this_00.fields._8_8_ = pIVar12,
          __this_00.fields._list = (System_Collections_Generic_List_T__o *)pSVar11,
          __this_00.fields._current = to,
          bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98),
          auStack_48._0_8_ = pSVar11, auStack_48._8_8_ = pIVar12, pIStack_38 = to, (char)bVar4 != '\0') {
      pIVar13 = to;
      unaff_RBP = System_Activator__CreateInstance_object_
                            ((MethodInfo_23DA7D0 *)
                             method->klass->rgctx_data->_8_System_Activator_CreateInstance_T_);
      pSVar9 = (System_Collections_Generic_List_object__o *)(__this->fields).DefaultValue;
      __this_05 = (System_Collections_Generic_List_object__o *)0x0;
      if (pSVar9 == (System_Collections_Generic_List_object__o *)0x0) goto label_03621486;
      if (0 < (pSVar9->fields)._size) {
        pIVar6 = System_Collections_Generic_List_object___get_Item
                           (pSVar9,0,(MethodInfo_362BED0 *)
                                     method->klass->rgctx_data->_14_Settings_ListSetting_T__CopyDefaultLimits
                                     ->klass->rgctx_data[0x14].method);
        Settings_ListSetting_object___CopyLimits
                  ((Settings_ListSetting_T__o *)pSVar9,pIVar6,unaff_RBP,(MethodInfo_3521EF0 *)in_RCX);
      }
      if (to == (Il2CppObject *)0x0) goto label_036214cc;
      uVar7 = (*to->klass->vtable[5].methodPtr)(to,to->klass->vtable[5].method);
      if (unaff_RBP == (Il2CppObject *)0x0) goto label_036214ea;
      (*unaff_RBP->klass->vtable[6].methodPtr)(unaff_RBP,uVar7,unaff_RBP->klass->vtable[6].method);
      in_RCX = (Il2CppClass *)method->klass->rgctx_data->_6_System_Collections_Generic_List_T__Add;
      piVar1 = &(__this_04->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar3 = (__this_04->fields)._items;
      if (pSVar3 == (System_Object_array *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        goto label_03621457;
      }
      uVar2 = (__this_04->fields)._size;
      pIVar6 = unaff_RBP;
      if (uVar2 < (uint)pSVar3->max_length) {
        in_RCX = (Il2CppClass *)(ulong)(uVar2 + 1);
        (__this_04->fields)._size = uVar2 + 1;
        pSVar3->m_Items[(int)uVar2] = unaff_RBP;
        il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2,unaff_RBP);
        to = pIVar13;
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  (__this_04,unaff_RBP,
                   *(MethodInfo_362C220 **)(*(long *)((long)(in_RCX->_1).byval_arg.data + 0xc0) + 0x70));
        to = pIVar13;
      }
    }
  }
  unaff_RBP = (Il2CppObject *)0x0;
  pSVar11 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_48._0_8_;
  pIVar12 = (Il2CppType *)auStack_48._8_8_;
  pIVar13 = pIStack_38;
  while( true ) {
    __this_02.fields._8_8_ = pIVar12;
    __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar11;
    __this_02.fields._current = pIVar13;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
    if (unaff_RBP == (Il2CppObject *)0x0) {
      if (__this != (Settings_ListSetting_T__o *)0x0) {
        Settings_TypedSetting_object___set_Value
                  ((Settings_TypedSetting_T__o *)__this,(Il2CppObject *)__this_04,
                   (MethodInfo_2A24090 *)
                   method->klass->rgctx_data->_18_Settings_TypedSetting_List_T___get_Value);
        return;
      }
label_03621457:
      il2cpp_runtime_helper_022b2c90();
    }
    il2cpp_runtime_helper_022fefe0(unaff_RBP);
    pIVar6 = pIVar13;
label_03621464:
    pIVar13 = pIVar6;
    to = System_Activator__CreateInstance_object_
                   ((MethodInfo_23DA7D0 *)method->klass->rgctx_data->_8_System_Activator_CreateInstance_T_);
    __this_05 = (System_Collections_Generic_List_object__o *)(__this->fields).DefaultValue;
    unaff_RBP = pIVar6;
    if (__this_05 == (System_Collections_Generic_List_object__o *)0x0) {
label_03621486:
      to = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
      unaff_RBP = pIVar6;
    }
    if (0 < (__this_05->fields)._size) {
      pIVar6 = System_Collections_Generic_List_object___get_Item
                         (__this_05,0,
                          (MethodInfo_362BED0 *)
                          method->klass->rgctx_data->_14_Settings_ListSetting_T__CopyDefaultLimits->klass->
                          rgctx_data[0x14].method);
      Settings_ListSetting_object___CopyLimits
                ((Settings_ListSetting_T__o *)__this_05,pIVar6,to,(MethodInfo_3521EF0 *)in_RCX);
    }
    if (unaff_RBP == (Il2CppObject *)0x0) {
label_036214cc:
      il2cpp_runtime_helper_022b2c90();
    }
    uVar7 = (*unaff_RBP->klass->vtable[5].methodPtr)(unaff_RBP,unaff_RBP->klass->vtable[5].method);
    if (to == (Il2CppObject *)0x0) {
label_036214ea:
      uVar7 = il2cpp_runtime_helper_022b2c90();
    }
    in_RCX = to->klass;
    (*in_RCX->vtable[6].methodPtr)(to,uVar7,in_RCX->vtable[6].method);
    auVar10 = il2cpp_runtime_helper_022b2c90();
    if (auVar10._8_4_ != 1) break;
    puVar8 = (undefined8 *)__cxa_begin_catch(auVar10._0_8_);
    unaff_RBP = (Il2CppObject *)*puVar8;
    __cxa_end_catch();
  }
  __this_03.fields._8_8_ = pIVar12;
  __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar11;
  __this_03.fields._current = pIVar13;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
  _Unwind_Resume(auVar10._0_8_);
}


// Settings.ListSetting<object>$$DeserializeFromJsonObject
// il2cpp: void Settings_ListSetting_object___DeserializeFromJsonObject (Settings_ListSetting_T__o* __this, SimpleJSONFixed_JSONNode_o* json, const MethodInfo_35215E0* method);
// 0x36215e0

void Settings_ListSetting_object___DeserializeFromJsonObject
               (Settings_ListSetting_T__o *__this,SimpleJSONFixed_JSONNode_o *json,MethodInfo_35215E0 *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_04;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_05;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_06;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_07;
  bool_conflict bVar4;
  Il2CppClass *pIVar5;
  System_Collections_Generic_List_object__o *pSVar6;
  long *plVar7;
  Il2CppRGCTXData *pIVar8;
  Il2CppObject *pIVar9;
  SimpleJSONFixed_JSONArray_o *__this_08;
  undefined8 uVar10;
  undefined8 *puVar11;
  MethodInfo *method_00;
  Il2CppObject *unaff_RBP;
  System_Collections_Generic_List_object__o *__this_09;
  _union_249689 unaff_R12;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o SVar12;
  undefined1 auVar13 [12];
  System_Collections_Generic_List_Enumerator_T__c *pSVar14;
  Il2CppType *pIVar15;
  Il2CppObject *pIVar16;
  Il2CppObject *pIVar17;
  undefined1 auStack_100 [16];
  Il2CppObject *pIStack_f0;
  Il2CppRGCTXData *pIStack_e8;
  _union_249689 _Stack_e0;
  Settings_ListSetting_T__o *pSStack_d8;
  MethodInfo_35215E0 *pMStack_d0;
  Il2CppMethodPointer pIVar18;
  Il2CppMethodPointer pIVar19;
  InvokerMethod pIVar20;
  char *pcVar21;
  Il2CppType **ppIVar22;
  _union_13 _Var23;
  _union_14 _Var24;
  Il2CppMethodPointer pIStack_78;
  Il2CppMethodPointer pIStack_70;
  InvokerMethod pIStack_68;
  char *pcStack_60;
  Il2CppClass *pIStack_58;
  Il2CppType *pIStack_50;
  Il2CppType **ppIStack_48;
  _union_13 _Stack_40;
  _union_14 _Stack_38;
  
  if (g_data_057a9155 == '\0') {
    pMStack_d0 = (MethodInfo_35215E0 *)0x362160f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057a9155 = '\x01';
  }
  pIVar5 = method->klass->rgctx_data->_0_System_Collections_Generic_List_T_;
  if (((pIVar5->_2).field_0x6d & 1) == 0) {
    pMStack_d0 = (MethodInfo_35215E0 *)0x3621651;
    pIVar5 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
  }
  pMStack_d0 = (MethodInfo_35215E0 *)0x3621659;
  pSVar6 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(pIVar5);
  pMStack_d0 = (MethodInfo_35215E0 *)0x3621673;
  System_Collections_Generic_List_object____ctor
            (pSVar6,(MethodInfo_362B8B0 *)
                    method->klass->rgctx_data->_4_System_Collections_Generic_List_T___ctor);
  if (json != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pMStack_d0 = (MethodInfo_35215E0 *)0x362168f;
    plVar7 = (long *)(*(json->klass->vtable)._45_get_AsArray.methodPtr)
                               (json,(json->klass->vtable)._45_get_AsArray.method);
    if (plVar7 != (long *)0x0) {
      method_00 = (MethodInfo *)*plVar7;
      pMStack_d0 = (MethodInfo_35215E0 *)0x36216b0;
      (*(code *)method_00[9].klass)(&pIStack_78,plVar7,method_00[9].return_type);
      pMStack_d0 = (MethodInfo_35215E0 *)0x36216f1;
      __this_04.fields.m_Object.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIStack_70;
      __this_04.fields._0_8_ = pIStack_78;
      __this_04.fields.m_Object.fields._8_8_ = pIStack_68;
      __this_04.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcStack_60;
      __this_04.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIStack_58;
      __this_04.fields.m_Object.fields._32_8_ = pIStack_50;
      __this_04.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIStack_48;
      __this_04.fields.m_Array.fields._8_8_ = _Stack_40.rgctx_data;
      __this_04.fields.m_Array.fields._current = _Stack_38.genericMethod;
      bVar4 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext(__this_04,(MethodInfo *)&stack0xffffffffffffff38);
      if ((char)bVar4 == '\0') {
        if (__this != (Settings_ListSetting_T__o *)0x0) goto label_03621848;
      }
      else {
        pIVar18 = pIStack_78;
        pIVar19 = pIStack_70;
        pIVar20 = pIStack_68;
        pcVar21 = pcStack_60;
        pIVar5 = pIStack_58;
        pIVar15 = pIStack_50;
        ppIVar22 = ppIStack_48;
        _Var23 = _Stack_40;
        _Var24 = _Stack_38;
        if (pSVar6 != (System_Collections_Generic_List_object__o *)0x0) {
          do {
            pMStack_d0 = (MethodInfo_35215E0 *)0x3621746;
            __this_06.fields.m_Object.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar19;
            __this_06.fields._0_8_ = pIVar18;
            __this_06.fields.m_Object.fields._8_8_ = pIVar20;
            __this_06.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar21;
            __this_06.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar5;
            __this_06.fields.m_Object.fields._32_8_ = pIVar15;
            __this_06.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar22;
            __this_06.fields.m_Array.fields._8_8_ = _Var23.rgctx_data;
            __this_06.fields.m_Array.fields._current = _Var24.genericMethod;
            SVar12 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                               (__this_06,(MethodInfo *)&stack0xffffffffffffff38);
            if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
              pMStack_d0 = (MethodInfo_35215E0 *)0x3621764;
              il2cpp_runtime_helper_02337ed0();
            }
            pMStack_d0 = (MethodInfo_35215E0 *)0x3621771;
            unaff_RBP = (Il2CppObject *)
                        SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0(SVar12,(MethodInfo *)0x0);
            pMStack_d0 = (MethodInfo_35215E0 *)0x3621788;
            pIVar8 = (Il2CppRGCTXData *)
                     System_Activator__CreateInstance_object_
                               ((MethodInfo_23DA7D0 *)
                                method->klass->rgctx_data->_8_System_Activator_CreateInstance_T_);
            __this_09 = (System_Collections_Generic_List_object__o *)(__this->fields).DefaultValue;
            json = (SimpleJSONFixed_JSONNode_o *)SVar12.fields.key;
            unaff_R12.genericMethod = &stack0xffffffffffffff38;
            if (__this_09 == (System_Collections_Generic_List_object__o *)0x0) goto label_0362190d;
            if (0 < (__this_09->fields)._size) {
              pMStack_d0 = (MethodInfo_35215E0 *)0x36217c6;
              pIVar9 = System_Collections_Generic_List_object___get_Item
                                 (__this_09,0,
                                  (MethodInfo_362BED0 *)
                                  method->klass->rgctx_data->_14_Settings_ListSetting_T__CopyDefaultLimits->
                                  klass->rgctx_data[0x14].method);
              pMStack_d0 = (MethodInfo_35215E0 *)0x36217d1;
              Settings_ListSetting_object___CopyLimits
                        ((Settings_ListSetting_T__o *)__this_09,pIVar9,(Il2CppObject *)pIVar8,
                         (MethodInfo_3521EF0 *)method_00);
            }
            json = (SimpleJSONFixed_JSONNode_o *)pIVar8;
            unaff_R12.genericMethod = &stack0xffffffffffffff38;
            if (pIVar8 == (Il2CppRGCTXData *)0x0) goto label_0362190d;
            pMStack_d0 = (MethodInfo_35215E0 *)0x36217f0;
            (*pIVar8->klass->vtable[6].methodPtr)(pIVar8,unaff_RBP,pIVar8->klass->vtable[6].method);
            method_00 = method->klass->rgctx_data->_6_System_Collections_Generic_List_T__Add;
            piVar1 = &(pSVar6->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar3 = (pSVar6->fields)._items;
            unaff_R12.genericMethod = &stack0xffffffffffffff38;
            if (pSVar3 == (System_Object_array *)0x0) goto label_0362190d;
            uVar2 = (pSVar6->fields)._size;
            if (uVar2 < (uint)pSVar3->max_length) {
              method_00 = (MethodInfo *)(ulong)(uVar2 + 1);
              (pSVar6->fields)._size = uVar2 + 1;
              pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)pIVar8;
              pMStack_d0 = (MethodInfo_35215E0 *)0x362183a;
              il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2,pIVar8);
            }
            else {
              pMStack_d0 = (MethodInfo_35215E0 *)0x362172a;
              System_Collections_Generic_List_object___AddWithResize
                        (pSVar6,(Il2CppObject *)pIVar8,
                         (MethodInfo_362C220 *)method_00->klass->rgctx_data[0xe].method);
            }
            pMStack_d0 = (MethodInfo_35215E0 *)0x3621734;
            __this_05.fields.m_Object.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar19;
            __this_05.fields._0_8_ = pIVar18;
            __this_05.fields.m_Object.fields._8_8_ = pIVar20;
            __this_05.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar21;
            __this_05.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar5;
            __this_05.fields.m_Object.fields._32_8_ = pIVar15;
            __this_05.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar22;
            __this_05.fields.m_Array.fields._8_8_ = _Var23.rgctx_data;
            __this_05.fields.m_Array.fields._current = _Var24.genericMethod;
            bVar4 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                              (__this_05,(MethodInfo *)&stack0xffffffffffffff38);
          } while ((char)bVar4 != '\0');
label_03621848:
          pMStack_d0 = (MethodInfo_35215E0 *)0x3621865;
          Settings_TypedSetting_object___set_Value
                    ((Settings_TypedSetting_T__o *)__this,(Il2CppObject *)pSVar6,
                     (MethodInfo_2A24090 *)
                     method->klass->rgctx_data->_18_Settings_TypedSetting_List_T___get_Value);
          return;
        }
        pMStack_d0 = (MethodInfo_35215E0 *)0x3621881;
        __this_07.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIStack_70;
        __this_07.fields._0_8_ = pIStack_78;
        __this_07.fields.m_Object.fields._8_8_ = pIStack_68;
        __this_07.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcStack_60;
        __this_07.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIStack_58;
        __this_07.fields.m_Object.fields._32_8_ = pIStack_50;
        __this_07.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIStack_48;
        __this_07.fields.m_Array.fields._8_8_ = _Stack_40.rgctx_data;
        __this_07.fields.m_Array.fields._current = _Stack_38.genericMethod;
        SVar12 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                           (__this_07,(MethodInfo *)&stack0xffffffffffffff38);
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          pMStack_d0 = (MethodInfo_35215E0 *)0x362189f;
          il2cpp_runtime_helper_02337ed0();
        }
        pMStack_d0 = (MethodInfo_35215E0 *)0x36218ac;
        json = SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0(SVar12,(MethodInfo *)0x0);
        pMStack_d0 = (MethodInfo_35215E0 *)0x36218c3;
        pIVar9 = System_Activator__CreateInstance_object_
                           ((MethodInfo_23DA7D0 *)
                            method->klass->rgctx_data->_8_System_Activator_CreateInstance_T_);
        pSVar6 = (System_Collections_Generic_List_object__o *)(__this->fields).DefaultValue;
        unaff_RBP = (Il2CppObject *)SVar12.fields.value;
        if (pSVar6 != (System_Collections_Generic_List_object__o *)0x0) {
          if (0 < (pSVar6->fields)._size) {
            pMStack_d0 = (MethodInfo_35215E0 *)0x36218fd;
            pIVar16 = System_Collections_Generic_List_object___get_Item
                                (pSVar6,0,(MethodInfo_362BED0 *)
                                          method->klass->rgctx_data->
                                          _14_Settings_ListSetting_T__CopyDefaultLimits->klass->rgctx_data
                                          [0x14].method);
            pMStack_d0 = (MethodInfo_35215E0 *)0x3621908;
            Settings_ListSetting_object___CopyLimits
                      ((Settings_ListSetting_T__o *)pSVar6,pIVar16,pIVar9,(MethodInfo_3521EF0 *)method_00);
          }
          unaff_RBP = pIVar9;
          if (pIVar9 != (Il2CppObject *)0x0) goto label_03621912;
        }
      }
    }
  }
label_0362190d:
  pMStack_d0 = (MethodInfo_35215E0 *)0x3621912;
  il2cpp_runtime_helper_022b2c90();
  pIVar9 = unaff_RBP;
label_03621912:
  pMStack_d0 = (MethodInfo_35215E0 *)0x3621929;
  pIVar8 = (Il2CppRGCTXData *)json;
  (*(((SimpleJSONFixed_JSONNode_VTable *)pIVar9->klass->vtable)->_6_set_Item).methodPtr)
            (pIVar9,json,(((SimpleJSONFixed_JSONNode_VTable *)pIVar9->klass->vtable)->_6_set_Item).method);
  pMStack_d0 = (MethodInfo_35215E0 *)0x362192e;
  il2cpp_runtime_helper_022b2c90();
  pIStack_e8 = (Il2CppRGCTXData *)json;
  _Stack_e0 = unaff_R12;
  pSStack_d8 = __this;
  pMStack_d0 = method;
  if (g_data_057a9156 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONArray);
    g_data_057a9156 = '\x01';
  }
  pSVar14 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar15 = (Il2CppType *)0x0;
  pIVar16 = (Il2CppObject *)0x0;
  __this_08 = (SimpleJSONFixed_JSONArray_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONArray);
  SimpleJSONFixed_JSONArray___ctor(__this_08,(MethodInfo *)0x0);
  if ((pIVar9 == (Il2CppObject *)0x0) ||
     (pIVar9[1].monitor == (System_Collections_Generic_List_object__o *)0x0)) {
    il2cpp_runtime_helper_022b2c90();
    goto label_03621a82;
  }
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)auStack_100,pIVar9[1].monitor,
             (MethodInfo_362CEB0 *)(pIVar8[4].klass)->rgctx_data[10].method);
  if (__this_08 == (SimpleJSONFixed_JSONArray_o *)0x0) {
    __this_01.fields._index = auStack_100._8_4_;
    __this_01.fields._version = auStack_100._12_4_;
    __this_01.fields._list = (System_Collections_Generic_List_T__o *)auStack_100._0_8_;
    __this_01.fields._current = pIStack_f0;
    bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (__this_01,(MethodInfo_321A1D0 *)&stack0xfffffffffffffee0);
    pSVar14 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_100._0_8_;
    pIVar15 = (Il2CppType *)auStack_100._8_8_;
    pIVar16 = pIStack_f0;
    if ((char)bVar4 != '\0') goto label_03621a8a;
    pIVar9 = (Il2CppObject *)0x0;
    goto label_03621a4f;
  }
  pIVar9 = (Il2CppObject *)0x0;
  pSVar14 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_100._0_8_;
  pIVar15 = (Il2CppType *)auStack_100._8_8_;
  pIVar16 = pIStack_f0;
  while( true ) {
    __this_00.fields._8_8_ = pIVar15;
    __this_00.fields._list = (System_Collections_Generic_List_T__o *)pSVar14;
    __this_00.fields._current = pIVar16;
    bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (__this_00,(MethodInfo_321A1D0 *)&stack0xfffffffffffffee0);
    if ((char)bVar4 == '\0') goto label_03621a4f;
    if (pIVar16 == (Il2CppObject *)0x0) break;
    uVar10 = (*pIVar16->klass->vtable[5].methodPtr)(pIVar16,pIVar16->klass->vtable[5].method);
    (*(__this_08->klass->vtable)._21_Add.methodPtr)
              (__this_08,uVar10,(__this_08->klass->vtable)._21_Add.method);
  }
  do {
    pIVar17 = pIVar16;
    il2cpp_runtime_helper_022b2c90();
    do {
      (*pIVar16->klass->vtable[5].methodPtr)();
      auVar13 = il2cpp_runtime_helper_022b2c90();
      if (auVar13._8_4_ != 1) {
        __this_03.fields._8_8_ = pIVar15;
        __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar14;
        __this_03.fields._current = pIVar17;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_03,(MethodInfo_321A1C0 *)&stack0xfffffffffffffee0);
        _Unwind_Resume(auVar13._0_8_);
      }
      puVar11 = (undefined8 *)__cxa_begin_catch(auVar13._0_8_);
      pIVar9 = (Il2CppObject *)*puVar11;
      __cxa_end_catch();
      pIVar16 = pIVar17;
label_03621a4f:
      __this_02.fields._8_8_ = pIVar15;
      __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar14;
      __this_02.fields._current = pIVar16;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_02,(MethodInfo_321A1C0 *)&stack0xfffffffffffffee0);
      if (pIVar9 == (Il2CppObject *)0x0) {
        return;
      }
label_03621a82:
      il2cpp_runtime_helper_022fefe0(pIVar9);
label_03621a8a:
      pIVar17 = pIVar16;
    } while (pIVar16 != (Il2CppObject *)0x0);
  } while( true );
}


// Settings.ListSetting<object>$$SerializeToJsonObject
// il2cpp: SimpleJSONFixed_JSONNode_o* Settings_ListSetting_object___SerializeToJsonObject (Settings_ListSetting_T__o* __this, const MethodInfo_3521930* method);
// 0x3621930

SimpleJSONFixed_JSONNode_o *
Settings_ListSetting_object___SerializeToJsonObject
          (Settings_ListSetting_T__o *__this,MethodInfo_3521930 *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar1;
  SimpleJSONFixed_JSONArray_o *__this_05;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [12];
  System_Collections_Generic_List_Enumerator_T__c *pSVar5;
  Il2CppType *pIVar6;
  Il2CppObject *pIVar7;
  Il2CppObject *pIVar8;
  undefined1 auStack_38 [16];
  Il2CppObject *pIStack_28;
  
  if (g_data_057a9156 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONArray);
    g_data_057a9156 = '\x01';
  }
  pSVar5 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar6 = (Il2CppType *)0x0;
  pIVar7 = (Il2CppObject *)0x0;
  __this_05 = (SimpleJSONFixed_JSONArray_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONArray);
  SimpleJSONFixed_JSONArray___ctor(__this_05,(MethodInfo *)0x0);
  if ((__this == (Settings_ListSetting_T__o *)0x0) ||
     (__this_00 = (System_Collections_Generic_List_object__o *)(__this->fields)._value,
     __this_00 == (System_Collections_Generic_List_object__o *)0x0)) {
    il2cpp_runtime_helper_022b2c90();
    goto label_03621a82;
  }
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)auStack_38,__this_00,
             (MethodInfo_362CEB0 *)
             method->klass->rgctx_data->_10_System_Collections_Generic_List_T__GetEnumerator);
  if (__this_05 == (SimpleJSONFixed_JSONArray_o *)0x0) {
    __this_02.fields._index = auStack_38._8_4_;
    __this_02.fields._version = auStack_38._12_4_;
    __this_02.fields._list = (System_Collections_Generic_List_T__o *)auStack_38._0_8_;
    __this_02.fields._current = pIStack_28;
    bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (__this_02,(MethodInfo_321A1D0 *)&stack0xffffffffffffffa8);
    pSVar5 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_38._0_8_;
    pIVar6 = (Il2CppType *)auStack_38._8_8_;
    pIVar7 = pIStack_28;
    if ((char)bVar1 != '\0') goto label_03621a8a;
    __this = (Settings_ListSetting_T__o *)0x0;
    goto label_03621a4f;
  }
  __this = (Settings_ListSetting_T__o *)0x0;
  pSVar5 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_38._0_8_;
  pIVar6 = (Il2CppType *)auStack_38._8_8_;
  pIVar7 = pIStack_28;
  while( true ) {
    __this_01.fields._8_8_ = pIVar6;
    __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar5;
    __this_01.fields._current = pIVar7;
    bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffffa8);
    if ((char)bVar1 == '\0') goto label_03621a4f;
    if (pIVar7 == (Il2CppObject *)0x0) break;
    uVar2 = (*pIVar7->klass->vtable[5].methodPtr)(pIVar7,pIVar7->klass->vtable[5].method);
    (*(__this_05->klass->vtable)._21_Add.methodPtr)(__this_05,uVar2,(__this_05->klass->vtable)._21_Add.method)
    ;
  }
  do {
    pIVar8 = pIVar7;
    il2cpp_runtime_helper_022b2c90();
    do {
      (*pIVar7->klass->vtable[5].methodPtr)();
      auVar4 = il2cpp_runtime_helper_022b2c90();
      if (auVar4._8_4_ != 1) {
        __this_04.fields._8_8_ = pIVar6;
        __this_04.fields._list = (System_Collections_Generic_List_T__o *)pSVar5;
        __this_04.fields._current = pIVar8;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa8);
        _Unwind_Resume(auVar4._0_8_);
      }
      puVar3 = (undefined8 *)__cxa_begin_catch(auVar4._0_8_);
      __this = (Settings_ListSetting_T__o *)*puVar3;
      __cxa_end_catch();
      pIVar7 = pIVar8;
label_03621a4f:
      __this_03.fields._8_8_ = pIVar6;
      __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar5;
      __this_03.fields._current = pIVar7;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa8);
      if (__this == (Settings_ListSetting_T__o *)0x0) {
        return (SimpleJSONFixed_JSONNode_o *)__this_05;
      }
label_03621a82:
      il2cpp_runtime_helper_022fefe0(__this);
label_03621a8a:
      pIVar8 = pIVar7;
    } while (pIVar7 != (Il2CppObject *)0x0);
  } while( true );
}


// Settings.ListSetting<object>$$GetCount
// il2cpp: int32_t Settings_ListSetting_object___GetCount (Settings_ListSetting_T__o* __this, const MethodInfo_3521B40* method);
// 0x3621b40

int32_t Settings_ListSetting_object___GetCount(Settings_ListSetting_T__o *__this,MethodInfo_3521B40 *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  long lVar4;
  bool_conflict bVar5;
  Il2CppObject *pIVar6;
  System_Collections_Generic_List_object__o *pSVar7;
  long *plVar8;
  long extraout_RDX;
  long lVar9;
  undefined1 auVar10 [12];
  System_Collections_Generic_List_T__o *pSVar11;
  System_Collections_Generic_List_Enumerator_T__c *pSVar12;
  Il2CppType *item;
  undefined1 auStack_50 [16];
  Il2CppType *pIStack_40;
  
  if ((__this != (Settings_ListSetting_T__o *)0x0) &&
     (pSVar11 = (__this->fields)._value, pSVar11 != (System_Collections_Generic_List_T__o *)0x0)) {
    return (pSVar11->fields)._size;
  }
  il2cpp_runtime_helper_022b2c90();
  if ((__this != (Settings_ListSetting_T__o *)0x0) &&
     (pSVar7 = (System_Collections_Generic_List_object__o *)(__this->fields)._value,
     pSVar7 != (System_Collections_Generic_List_object__o *)0x0)) {
    pIVar6 = System_Collections_Generic_List_object___get_Item
                       (pSVar7,(int32_t)method,
                        *(MethodInfo_362BED0 **)(*(long *)(*(long *)(extraout_RDX + 0x20) + 0xc0) + 0xa0));
    return (int32_t)pIVar6;
  }
  lVar9 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9157 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Settings_BaseSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_BaseSetting);
    g_data_057a9157 = '\x01';
  }
  pSVar11 = (System_Collections_Generic_List_T__o *)0x0;
  pSVar12 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  item = (Il2CppType *)0x0;
  pSVar7 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_BaseSetting);
  System_Collections_Generic_List_object____ctor(pSVar7,MethodInfo_List_1_Settings_BaseSetting);
  if ((lVar9 != 0) &&
     (*(System_Collections_Generic_List_object__o **)(lVar9 + 0x18) !=
      (System_Collections_Generic_List_object__o *)0x0)) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)auStack_50,
               *(System_Collections_Generic_List_object__o **)(lVar9 + 0x18),
               (MethodInfo_362CEB0 *)
               method->klass->rgctx_data->_10_System_Collections_Generic_List_T__GetEnumerator);
    if (pSVar7 == (System_Collections_Generic_List_object__o *)0x0) {
      __this_01.fields._index = auStack_50._8_4_;
      __this_01.fields._version = auStack_50._12_4_;
      __this_01.fields._list = (System_Collections_Generic_List_T__o *)auStack_50._0_8_;
      __this_01.fields._current = (Il2CppObject *)pIStack_40;
      bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98);
      if ((char)bVar5 != '\0') goto label_03621d3b;
      lVar9 = 0;
      pSVar11 = (System_Collections_Generic_List_T__o *)auStack_50._0_8_;
      pSVar12 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_50._8_8_;
      item = pIStack_40;
      goto label_03621cf9;
    }
    lVar9 = 0;
    pSVar11 = (System_Collections_Generic_List_T__o *)auStack_50._0_8_;
    pSVar12 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_50._8_8_;
    item = pIStack_40;
    while( true ) {
      __this_00.fields._8_8_ = pSVar12;
      __this_00.fields._list = pSVar11;
      __this_00.fields._current = (Il2CppObject *)item;
      bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98);
      lVar4 = MethodInfo_Void_Add;
      if ((char)bVar5 == '\0') goto label_03621cf9;
      piVar1 = &(pSVar7->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar3 = (pSVar7->fields)._items;
      if (pSVar3 == (System_Object_array *)0x0) break;
      uVar2 = (pSVar7->fields)._size;
      if (uVar2 < (uint)pSVar3->max_length) {
        (pSVar7->fields)._size = uVar2 + 1;
        pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)item;
        il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  (pSVar7,(Il2CppObject *)item,
                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
      }
    }
    il2cpp_runtime_helper_022b2c90();
  }
  il2cpp_runtime_helper_022b2c90();
  do {
    il2cpp_runtime_helper_022fefe0(lVar9);
    auStack_50._0_8_ = pSVar11;
    auStack_50._8_8_ = pSVar12;
    pIStack_40 = item;
label_03621d3b:
    auVar10 = il2cpp_runtime_helper_022b2c90();
    if (auVar10._8_4_ != 1) {
      __this_03.fields._8_8_ = auStack_50._8_8_;
      __this_03.fields._list = (System_Collections_Generic_List_T__o *)auStack_50._0_8_;
      __this_03.fields._current = (Il2CppObject *)pIStack_40;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
      _Unwind_Resume(auVar10._0_8_);
    }
    plVar8 = (long *)__cxa_begin_catch(auVar10._0_8_);
    lVar9 = *plVar8;
    __cxa_end_catch();
    pSVar11 = (System_Collections_Generic_List_T__o *)auStack_50._0_8_;
    pSVar12 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_50._8_8_;
    item = pIStack_40;
label_03621cf9:
    __this_02.fields._8_8_ = pSVar12;
    __this_02.fields._list = pSVar11;
    __this_02.fields._current = (Il2CppObject *)item;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
  } while (lVar9 != 0);
  return (int32_t)pSVar7;
}


// Settings.ListSetting<object>$$GetItemAt
// il2cpp: Settings_BaseSetting_o* Settings_ListSetting_object___GetItemAt (Settings_ListSetting_T__o* __this, int32_t index, const MethodInfo_3521B60* method);
// 0x3621b60

Settings_BaseSetting_o *
Settings_ListSetting_object___GetItemAt
          (Settings_ListSetting_T__o *__this,int32_t index,MethodInfo_3521B60 *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  bool_conflict bVar4;
  Il2CppObject *pIVar5;
  System_Collections_Generic_List_object__o *pSVar6;
  long *plVar7;
  undefined4 in_register_00000034;
  long lVar8;
  long lVar9;
  undefined1 auVar10 [12];
  System_Collections_Generic_List_T__o *pSVar11;
  System_Collections_Generic_List_Enumerator_T__c *pSVar12;
  Il2CppType *item;
  undefined1 auStack_48 [16];
  Il2CppType *pIStack_38;
  
  lVar8 = CONCAT44(in_register_00000034,index);
  if ((__this != (Settings_ListSetting_T__o *)0x0) &&
     (pSVar6 = (System_Collections_Generic_List_object__o *)(__this->fields)._value,
     pSVar6 != (System_Collections_Generic_List_object__o *)0x0)) {
    pIVar5 = System_Collections_Generic_List_object___get_Item
                       (pSVar6,index,
                        (MethodInfo_362BED0 *)
                        method->klass->rgctx_data->_21_System_Collections_Generic_List_T__Clear);
    return (Settings_BaseSetting_o *)pIVar5;
  }
  lVar9 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9157 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Settings_BaseSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_BaseSetting);
    g_data_057a9157 = '\x01';
  }
  pSVar11 = (System_Collections_Generic_List_T__o *)0x0;
  pSVar12 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  item = (Il2CppType *)0x0;
  pSVar6 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_BaseSetting);
  System_Collections_Generic_List_object____ctor(pSVar6,MethodInfo_List_1_Settings_BaseSetting);
  if ((lVar9 != 0) &&
     (*(System_Collections_Generic_List_object__o **)(lVar9 + 0x18) !=
      (System_Collections_Generic_List_object__o *)0x0)) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)auStack_48,
               *(System_Collections_Generic_List_object__o **)(lVar9 + 0x18),
               *(MethodInfo_362CEB0 **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x50));
    if (pSVar6 == (System_Collections_Generic_List_object__o *)0x0) {
      __this_01.fields._index = auStack_48._8_4_;
      __this_01.fields._version = auStack_48._12_4_;
      __this_01.fields._list = (System_Collections_Generic_List_T__o *)auStack_48._0_8_;
      __this_01.fields._current = (Il2CppObject *)pIStack_38;
      bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffffa0);
      if ((char)bVar4 != '\0') goto label_03621d3b;
      lVar9 = 0;
      pSVar11 = (System_Collections_Generic_List_T__o *)auStack_48._0_8_;
      pSVar12 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_48._8_8_;
      item = pIStack_38;
      goto label_03621cf9;
    }
    lVar9 = 0;
    pSVar11 = (System_Collections_Generic_List_T__o *)auStack_48._0_8_;
    pSVar12 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_48._8_8_;
    item = pIStack_38;
    while( true ) {
      __this_00.fields._8_8_ = pSVar12;
      __this_00.fields._list = pSVar11;
      __this_00.fields._current = (Il2CppObject *)item;
      bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffffa0);
      lVar8 = MethodInfo_Void_Add;
      if ((char)bVar4 == '\0') goto label_03621cf9;
      piVar1 = &(pSVar6->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar3 = (pSVar6->fields)._items;
      if (pSVar3 == (System_Object_array *)0x0) break;
      uVar2 = (pSVar6->fields)._size;
      if (uVar2 < (uint)pSVar3->max_length) {
        (pSVar6->fields)._size = uVar2 + 1;
        pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)item;
        il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  (pSVar6,(Il2CppObject *)item,
                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
      }
    }
    il2cpp_runtime_helper_022b2c90();
  }
  il2cpp_runtime_helper_022b2c90();
  do {
    il2cpp_runtime_helper_022fefe0(lVar9);
    auStack_48._0_8_ = pSVar11;
    auStack_48._8_8_ = pSVar12;
    pIStack_38 = item;
label_03621d3b:
    auVar10 = il2cpp_runtime_helper_022b2c90();
    if (auVar10._8_4_ != 1) {
      __this_03.fields._8_8_ = auStack_48._8_8_;
      __this_03.fields._list = (System_Collections_Generic_List_T__o *)auStack_48._0_8_;
      __this_03.fields._current = (Il2CppObject *)pIStack_38;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa0);
      _Unwind_Resume(auVar10._0_8_);
    }
    plVar7 = (long *)__cxa_begin_catch(auVar10._0_8_);
    lVar9 = *plVar7;
    __cxa_end_catch();
    pSVar11 = (System_Collections_Generic_List_T__o *)auStack_48._0_8_;
    pSVar12 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_48._8_8_;
    item = pIStack_38;
label_03621cf9:
    __this_02.fields._8_8_ = pSVar12;
    __this_02.fields._list = pSVar11;
    __this_02.fields._current = (Il2CppObject *)item;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa0);
  } while (lVar9 != 0);
  return (Settings_BaseSetting_o *)pSVar6;
}


// Settings.ListSetting<object>$$GetItems
// il2cpp: System_Collections_Generic_List_BaseSetting__o* Settings_ListSetting_object___GetItems (Settings_ListSetting_T__o* __this, const MethodInfo_3521B90* method);
// 0x3621b90

System_Collections_Generic_List_BaseSetting__o *
Settings_ListSetting_object___GetItems(Settings_ListSetting_T__o *__this,MethodInfo_3521B90 *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_object__o *__this_00;
  System_Object_array *pSVar3;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  long lVar4;
  bool_conflict bVar5;
  System_Collections_Generic_List_object__o *__this_05;
  undefined8 *puVar6;
  undefined1 auVar7 [12];
  System_Collections_Generic_List_T__o *pSVar8;
  System_Collections_Generic_List_Enumerator_T__c *pSVar9;
  Il2CppType *item;
  undefined1 local_40 [16];
  Il2CppType *local_30;
  
  if (g_data_057a9157 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Settings_BaseSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_BaseSetting);
    g_data_057a9157 = '\x01';
  }
  pSVar8 = (System_Collections_Generic_List_T__o *)0x0;
  pSVar9 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  item = (Il2CppType *)0x0;
  __this_05 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_BaseSetting);
  System_Collections_Generic_List_object____ctor(__this_05,MethodInfo_List_1_Settings_BaseSetting);
  if ((__this != (Settings_ListSetting_T__o *)0x0) &&
     (__this_00 = (System_Collections_Generic_List_object__o *)(__this->fields)._value,
     __this_00 != (System_Collections_Generic_List_object__o *)0x0)) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_40,__this_00,
               (MethodInfo_362CEB0 *)
               method->klass->rgctx_data->_10_System_Collections_Generic_List_T__GetEnumerator);
    if (__this_05 == (System_Collections_Generic_List_object__o *)0x0) {
      __this_02.fields._index = local_40._8_4_;
      __this_02.fields._version = local_40._12_4_;
      __this_02.fields._list = (System_Collections_Generic_List_T__o *)local_40._0_8_;
      __this_02.fields._current = (Il2CppObject *)local_30;
      bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_02,(MethodInfo_321A1D0 *)&stack0xffffffffffffffa8);
      if ((char)bVar5 != '\0') goto label_03621d3b;
      __this = (Settings_ListSetting_T__o *)0x0;
      pSVar8 = (System_Collections_Generic_List_T__o *)local_40._0_8_;
      pSVar9 = (System_Collections_Generic_List_Enumerator_T__c *)local_40._8_8_;
      item = local_30;
      goto label_03621cf9;
    }
    __this = (Settings_ListSetting_T__o *)0x0;
    pSVar8 = (System_Collections_Generic_List_T__o *)local_40._0_8_;
    pSVar9 = (System_Collections_Generic_List_Enumerator_T__c *)local_40._8_8_;
    item = local_30;
    while( true ) {
      __this_01.fields._8_8_ = pSVar9;
      __this_01.fields._list = pSVar8;
      __this_01.fields._current = (Il2CppObject *)item;
      bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffffa8);
      lVar4 = MethodInfo_Void_Add;
      if ((char)bVar5 == '\0') goto label_03621cf9;
      piVar1 = &(__this_05->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar3 = (__this_05->fields)._items;
      if (pSVar3 == (System_Object_array *)0x0) break;
      uVar2 = (__this_05->fields)._size;
      if (uVar2 < (uint)pSVar3->max_length) {
        (__this_05->fields)._size = uVar2 + 1;
        pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)item;
        il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  (__this_05,(Il2CppObject *)item,
                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
      }
    }
    il2cpp_runtime_helper_022b2c90();
  }
  il2cpp_runtime_helper_022b2c90();
  do {
    il2cpp_runtime_helper_022fefe0(__this);
    local_40._0_8_ = pSVar8;
    local_40._8_8_ = pSVar9;
    local_30 = item;
label_03621d3b:
    auVar7 = il2cpp_runtime_helper_022b2c90();
    if (auVar7._8_4_ != 1) {
      __this_04.fields._8_8_ = local_40._8_8_;
      __this_04.fields._list = (System_Collections_Generic_List_T__o *)local_40._0_8_;
      __this_04.fields._current = (Il2CppObject *)local_30;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa8);
      _Unwind_Resume(auVar7._0_8_);
    }
    puVar6 = (undefined8 *)__cxa_begin_catch(auVar7._0_8_);
    __this = (Settings_ListSetting_T__o *)*puVar6;
    __cxa_end_catch();
    pSVar8 = (System_Collections_Generic_List_T__o *)local_40._0_8_;
    pSVar9 = (System_Collections_Generic_List_Enumerator_T__c *)local_40._8_8_;
    item = local_30;
label_03621cf9:
    __this_03.fields._8_8_ = pSVar9;
    __this_03.fields._list = pSVar8;
    __this_03.fields._current = (Il2CppObject *)item;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa8);
  } while (__this != (Settings_ListSetting_T__o *)0x0);
  return (System_Collections_Generic_List_BaseSetting__o *)__this_05;
}


// Settings.ListSetting<object>$$AddItem
// il2cpp: void Settings_ListSetting_object___AddItem (Settings_ListSetting_T__o* __this, Settings_BaseSetting_o* item, const MethodInfo_3521DC0* method);
// 0x3621dc0

void Settings_ListSetting_object___AddItem
               (Settings_ListSetting_T__o *__this,Settings_BaseSetting_o *item,MethodInfo_3521DC0 *method)

{
  int32_t *piVar1;
  code cVar2;
  code cVar3;
  uint uVar4;
  int32_t length;
  System_Collections_Generic_List_object__o *__this_00;
  MethodInfo *pMVar5;
  System_Object_array *pSVar6;
  char *pcVar7;
  System_Collections_Generic_List_object__c *pSVar8;
  MethodInfo_362BED0 *method_00;
  Il2CppClass *pIVar9;
  Il2CppClass *item_00;
  undefined8 uVar10;
  long lVar11;
  MethodInfo_3521DC0 *pMVar12;
  ulong uVar13;
  long extraout_RDX;
  Il2CppClass *unaff_RBX;
  undefined8 *puVar14;
  Il2CppClass *pIVar15;
  MethodInfo_3521DC0 *unaff_R14;
  undefined1 auVar16 [16];
  undefined8 auStack_30 [2];
  
  item_00 = (Il2CppClass *)item;
  if ((__this == (Settings_ListSetting_T__o *)0x0) ||
     (__this_00 = (System_Collections_Generic_List_object__o *)(__this->fields)._value,
     __this_00 == (System_Collections_Generic_List_object__o *)0x0)) goto label_03621e9c;
  unaff_RBX = method->klass->rgctx_data->_5_T;
  if (((unaff_RBX->_2).field_0x6d & 1) == 0) {
    auStack_30[0] = 0x3621e04;
    __this = (Settings_ListSetting_T__o *)unaff_RBX;
    unaff_RBX = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
  }
  if (item == (Settings_BaseSetting_o *)0x0) {
label_03621e2a:
    item_00 = (Il2CppClass *)0x0;
  }
  else {
    auStack_30[0] = 0x3621e17;
    __this = (Settings_ListSetting_T__o *)item;
    item_00 = (Il2CppClass *)il2cpp_runtime_helper_023051f0(item,unaff_RBX);
    if (item_00 == (Il2CppClass *)0x0) {
      auStack_30[0] = 0x3621e2a;
      il2cpp_runtime_helper_022b2fd0();
      __this = (Settings_ListSetting_T__o *)item;
      goto label_03621e2a;
    }
  }
  pMVar5 = method->klass->rgctx_data->_6_System_Collections_Generic_List_T__Add;
  piVar1 = &(__this_00->fields)._version;
  *piVar1 = *piVar1 + 1;
  pSVar6 = (__this_00->fields)._items;
  unaff_R14 = method;
  if (pSVar6 != (System_Object_array *)0x0) {
    uVar4 = (__this_00->fields)._size;
    if ((uint)pSVar6->max_length <= uVar4) {
      System_Collections_Generic_List_object___AddWithResize
                (__this_00,(Il2CppObject *)item_00,(MethodInfo_362C220 *)pMVar5->klass->rgctx_data[0xe].method
                );
      return;
    }
    (__this_00->fields)._size = uVar4 + 1;
    pSVar6->m_Items[(int)uVar4] = (Il2CppObject *)item_00;
    il2cpp_runtime_helper_022b4080(pSVar6->m_Items + (int)uVar4);
    return;
  }
label_03621e9c:
  auStack_30[0] = 0x3621ea1;
  auStack_30[0] = il2cpp_runtime_helper_022b2c90();
  if (((Il2CppClass *)__this != (Il2CppClass *)0x0) &&
     (pcVar7 = (((Il2CppClass *)__this)->_1).namespaze, pcVar7 != (char *)0x0)) {
    *(int *)(pcVar7 + 0x1c) = *(int *)(pcVar7 + 0x1c) + 1;
    length = *(int32_t *)(pcVar7 + 0x18);
    pcVar7[0x18] = '\0';
    pcVar7[0x19] = '\0';
    pcVar7[0x1a] = '\0';
    pcVar7[0x1b] = '\0';
    if (length < 1) {
      return;
    }
    System_Array__Clear(*(System_Array_o **)(pcVar7 + 0x10),0,length,(MethodInfo *)0x0);
    return;
  }
  auVar16 = il2cpp_runtime_helper_022b2c90();
  puVar14 = auStack_30;
  do {
    pMVar12 = auVar16._8_8_;
    *(MethodInfo_3521DC0 **)((long)puVar14 + -8) = unaff_R14;
    *(Il2CppClass **)((long)puVar14 + -0x10) = unaff_RBX;
    *(long *)((long)puVar14 + -0x18) = auVar16._0_8_;
    if (g_data_057a9158 == '\0') {
      *(undefined8 *)((long)puVar14 + -0x20) = 0x3621f0f;
      il2cpp_runtime_helper_023445d0(&TypeInfo_ColorSetting);
      *(undefined8 *)((long)puVar14 + -0x20) = 0x3621f1b;
      il2cpp_runtime_helper_023445d0(&TypeInfo_FloatSetting);
      *(undefined8 *)((long)puVar14 + -0x20) = 0x3621f27;
      il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
      *(undefined8 *)((long)puVar14 + -0x20) = 0x3621f33;
      il2cpp_runtime_helper_023445d0(&TypeInfo_NameSetting);
      __this = (Settings_ListSetting_T__o *)&TypeInfo_StringSetting;
      *(undefined8 *)((long)puVar14 + -0x20) = 0x3621f3f;
      il2cpp_runtime_helper_023445d0();
      g_data_057a9158 = '\x01';
    }
    pIVar15 = TypeInfo_NameSetting;
    if (item_00 == (Il2CppClass *)0x0) {
      return;
    }
    pSVar8 = (item_00->_1).image;
    cVar2 = (code)(pSVar8->_2).naturalAligment;
    cVar3 = (code)(TypeInfo_IntSetting->_2).naturalAligment;
    uVar13 = (ulong)(byte)cVar3;
    if (((byte)cVar2 < (byte)cVar3) ||
       (__this = (Settings_ListSetting_T__o *)(pSVar8->_2).typeHierarchy, pIVar9 = TypeInfo_IntSetting,
       *(Il2CppClass **)((long)__this + uVar13 * 8 + -8) != TypeInfo_IntSetting)) {
      cVar3 = (code)(TypeInfo_ColorSetting->_2).naturalAligment;
      uVar13 = (ulong)(byte)cVar3;
      if (((byte)cVar2 < (byte)cVar3) ||
         (__this = (Settings_ListSetting_T__o *)(pSVar8->_2).typeHierarchy, pIVar9 = TypeInfo_ColorSetting,
         *(Il2CppClass **)((long)__this + uVar13 * 8 + -8) != TypeInfo_ColorSetting)) {
        cVar3 = (code)(TypeInfo_FloatSetting->_2).naturalAligment;
        uVar13 = (ulong)(byte)cVar3;
        if (((byte)cVar3 <= (byte)cVar2) &&
           (__this = (Settings_ListSetting_T__o *)(pSVar8->_2).typeHierarchy, pIVar9 = TypeInfo_FloatSetting,
           *(Il2CppClass **)((long)__this + uVar13 * 8 + -8) == TypeInfo_FloatSetting)) goto label_0362201f;
        cVar3 = (code)(TypeInfo_StringSetting->_2).naturalAligment;
        uVar13 = (ulong)(byte)cVar3;
        if (((byte)cVar3 <= (byte)cVar2) &&
           (__this = (Settings_ListSetting_T__o *)(pSVar8->_2).typeHierarchy, pIVar9 = TypeInfo_StringSetting,
           *(Il2CppClass **)((long)__this + uVar13 * 8 + -8) == TypeInfo_StringSetting)) goto label_03622080;
        cVar3 = (code)(TypeInfo_NameSetting->_2).naturalAligment;
        uVar13 = (ulong)(byte)cVar3;
        if ((byte)cVar2 < (byte)cVar3) {
          return;
        }
        if ((pSVar8->_2).typeHierarchy[uVar13 - 1] != TypeInfo_NameSetting) {
          return;
        }
        if (pMVar12 == (MethodInfo_3521DC0 *)0x0) goto label_0362210e;
        if (((byte)pMVar12->methodPointer[0x130] < (byte)cVar3) ||
           (*(Il2CppClass **)(*(long *)(pMVar12->methodPointer + 200) + -8 + uVar13 * 8) != TypeInfo_NameSetting))
        goto label_036220fe;
        *(undefined4 *)&pMVar12->klass = *(undefined4 *)&(item_00->_1).byval_arg.data;
        pSVar8 = (item_00->_1).image;
        if (((byte)cVar3 <= (pSVar8->_2).naturalAligment) &&
           ((pSVar8->_2).typeHierarchy[uVar13 - 1] == pIVar15)) {
          *(undefined4 *)((long)&pMVar12->klass + 4) =
               *(undefined4 *)((long)&(item_00->_1).byval_arg.data + 4);
          return;
        }
        goto label_03622106;
      }
label_03622080:
      pIVar15 = pIVar9;
      if (pMVar12 != (MethodInfo_3521DC0 *)0x0) {
        if (((byte)SUB81(uVar13,0) <= (byte)pMVar12->methodPointer[0x130]) &&
           (*(Il2CppClass **)(*(long *)(pMVar12->methodPointer + 200) + -8 + uVar13 * 8) == pIVar15)) {
          *(undefined4 *)&pMVar12->klass = *(undefined4 *)&(item_00->_1).byval_arg.data;
          return;
        }
        goto label_036220fe;
      }
    }
    else {
label_0362201f:
      pIVar15 = pIVar9;
      if (pMVar12 != (MethodInfo_3521DC0 *)0x0) {
        if (((byte)pMVar12->methodPointer[0x130] < (byte)SUB81(uVar13,0)) ||
           (*(Il2CppClass **)(*(long *)(pMVar12->methodPointer + 200) + -8 + uVar13 * 8) != pIVar15)) {
label_036220fe:
          *(undefined8 *)((long)puVar14 + -0x20) = 0x3622106;
          il2cpp_runtime_helper_022b2fd0(pMVar12);
        }
        else {
          *(int32_t *)&pMVar12->name = *(int32_t *)&(item_00->_1).namespaze;
          pSVar8 = (item_00->_1).image;
          if (((byte)SUB81(uVar13,0) <= (pSVar8->_2).naturalAligment) &&
             ((pSVar8->_2).typeHierarchy[uVar13 - 1] == pIVar15)) {
            *(int32_t *)((long)&pMVar12->name + 4) = *(int32_t *)((long)&(item_00->_1).namespaze + 4);
            return;
          }
        }
label_03622106:
        *(undefined8 *)((long)puVar14 + -0x20) = 0x362210e;
        __this = (Settings_ListSetting_T__o *)item_00;
        il2cpp_runtime_helper_022b2fd0();
      }
    }
label_0362210e:
    *(undefined8 *)((long)puVar14 + -0x20) = 0x3622113;
    il2cpp_runtime_helper_022b2c90();
    *(Il2CppClass **)((long)puVar14 + -0x20) = item_00;
    __this = (Settings_ListSetting_T__o *)
             ((System_Collections_Generic_List_object__Fields *)&(((Il2CppClass *)__this)->_1).name)->_items;
    if ((System_Collections_Generic_List_object__o *)__this ==
        (System_Collections_Generic_List_object__o *)0x0) {
      *(undefined8 *)((long)puVar14 + -0x28) = 0x362215f;
      uVar10 = il2cpp_runtime_helper_022b2c90();
      *(MethodInfo_3521DC0 **)((long)puVar14 + -0x28) = pMVar12;
      *(Il2CppClass **)((long)puVar14 + -0x30) = item_00;
      *(undefined8 *)((long)puVar14 + -0x38) = uVar10;
      *(undefined8 *)((long)puVar14 + -0x40) = 0x3622171;
      System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
      lVar11 = *(long *)(*(long *)((long)(pIVar15->_1).byval_arg.data + 0xc0) + 0x10);
      if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
        *(undefined8 *)((long)puVar14 + -0x40) = 0x362218e;
        lVar11 = il2cpp_runtime_helper_023009c0();
      }
      if (*(int *)(lVar11 + 0xe4) == 0) {
        *(undefined8 *)((long)puVar14 + -0x40) = 0x362219f;
        il2cpp_runtime_helper_02337ed0();
      }
      lVar11 = *(long *)(*(long *)((long)(pIVar15->_1).byval_arg.data + 0xc0) + 0x10);
      if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
        *(undefined8 *)((long)puVar14 + -0x40) = 0x36221bf;
        lVar11 = il2cpp_runtime_helper_023009c0(lVar11);
      }
      ((System_Object_array *)__this)->bounds = (Il2CppArrayBounds *)**(undefined8 **)(lVar11 + 0xb8);
      il2cpp_runtime_helper_022b4080(&((System_Object_array *)__this)->bounds);
      return;
    }
    if ((int)((System_Object_array *)__this)->max_length < 1) {
      return;
    }
    method_00 = *(MethodInfo_362BED0 **)(*(long *)(*(long *)(extraout_RDX + 0x20) + 0xc0) + 0xa0);
    *(undefined8 *)((long)puVar14 + -0x28) = 0x362214c;
    item_00 = (Il2CppClass *)
              System_Collections_Generic_List_object___get_Item
                        ((System_Collections_Generic_List_object__o *)__this,0,method_00);
    auVar16._8_8_ = pIVar15;
    auVar16._0_8_ = item_00;
    unaff_RBX = *(Il2CppClass **)((long)puVar14 + -0x20);
    puVar14 = (undefined8 *)((long)puVar14 + -0x18);
    unaff_R14 = pMVar12;
  } while( true );
}


// Settings.ListSetting<object>$$Clear
// il2cpp: void Settings_ListSetting_object___Clear (Settings_ListSetting_T__o* __this, const MethodInfo_3521EB0* method);
// 0x3621eb0

void Settings_ListSetting_object___Clear(Settings_ListSetting_T__o *__this,MethodInfo_3521EB0 *method)

{
  int32_t *piVar1;
  byte bVar2;
  byte bVar3;
  int32_t length;
  System_Collections_Generic_List_T__o *pSVar4;
  System_Collections_Generic_List_object__c *pSVar5;
  MethodInfo_362BED0 *method_00;
  Il2CppClass *pIVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long extraout_RDX;
  undefined8 unaff_RBX;
  undefined1 *puVar11;
  Il2CppClass *pIVar12;
  long *unaff_R14;
  undefined1 auVar13 [16];
  undefined1 auStack_8 [8];
  
  if ((__this != (Settings_ListSetting_T__o *)0x0) &&
     (pSVar4 = (__this->fields)._value, pSVar4 != (System_Collections_Generic_List_T__o *)0x0)) {
    piVar1 = &(pSVar4->fields)._version;
    *piVar1 = *piVar1 + 1;
    length = (pSVar4->fields)._size;
    (pSVar4->fields)._size = 0;
    if (length < 1) {
      return;
    }
    System_Array__Clear((System_Array_o *)(pSVar4->fields)._items,0,length,(MethodInfo *)0x0);
    return;
  }
  auVar13 = il2cpp_runtime_helper_022b2c90();
  puVar11 = auStack_8;
  do {
    plVar9 = auVar13._8_8_;
    *(long **)(puVar11 + -8) = unaff_R14;
    *(undefined8 *)(puVar11 + -0x10) = unaff_RBX;
    *(long *)(puVar11 + -0x18) = auVar13._0_8_;
    if (g_data_057a9158 == '\0') {
      *(undefined8 *)(puVar11 + -0x20) = 0x3621f0f;
      il2cpp_runtime_helper_023445d0(&TypeInfo_ColorSetting);
      *(undefined8 *)(puVar11 + -0x20) = 0x3621f1b;
      il2cpp_runtime_helper_023445d0(&TypeInfo_FloatSetting);
      *(undefined8 *)(puVar11 + -0x20) = 0x3621f27;
      il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
      *(undefined8 *)(puVar11 + -0x20) = 0x3621f33;
      il2cpp_runtime_helper_023445d0(&TypeInfo_NameSetting);
      __this = (Settings_ListSetting_T__o *)&TypeInfo_StringSetting;
      *(undefined8 *)(puVar11 + -0x20) = 0x3621f3f;
      il2cpp_runtime_helper_023445d0();
      g_data_057a9158 = '\x01';
    }
    pIVar12 = TypeInfo_NameSetting;
    if (method == (MethodInfo_3521EB0 *)0x0) {
      return;
    }
    pSVar5 = (System_Collections_Generic_List_object__c *)method->methodPointer;
    bVar2 = (pSVar5->_2).naturalAligment;
    bVar3 = (TypeInfo_IntSetting->_2).naturalAligment;
    uVar10 = (ulong)bVar3;
    if ((bVar2 < bVar3) ||
       (__this = (Settings_ListSetting_T__o *)(pSVar5->_2).typeHierarchy, pIVar6 = TypeInfo_IntSetting,
       *(Il2CppClass **)((long)__this + uVar10 * 8 + -8) != TypeInfo_IntSetting)) {
      bVar3 = (TypeInfo_ColorSetting->_2).naturalAligment;
      uVar10 = (ulong)bVar3;
      if ((bVar2 < bVar3) ||
         (__this = (Settings_ListSetting_T__o *)(pSVar5->_2).typeHierarchy, pIVar6 = TypeInfo_ColorSetting,
         *(Il2CppClass **)((long)__this + uVar10 * 8 + -8) != TypeInfo_ColorSetting)) {
        bVar3 = (TypeInfo_FloatSetting->_2).naturalAligment;
        uVar10 = (ulong)bVar3;
        if ((bVar3 <= bVar2) &&
           (__this = (Settings_ListSetting_T__o *)(pSVar5->_2).typeHierarchy, pIVar6 = TypeInfo_FloatSetting,
           *(Il2CppClass **)((long)__this + uVar10 * 8 + -8) == TypeInfo_FloatSetting)) goto label_0362201f;
        bVar3 = (TypeInfo_StringSetting->_2).naturalAligment;
        uVar10 = (ulong)bVar3;
        if ((bVar3 <= bVar2) &&
           (__this = (Settings_ListSetting_T__o *)(pSVar5->_2).typeHierarchy, pIVar6 = TypeInfo_StringSetting,
           *(Il2CppClass **)((long)__this + uVar10 * 8 + -8) == TypeInfo_StringSetting)) goto label_03622080;
        bVar3 = (TypeInfo_NameSetting->_2).naturalAligment;
        uVar10 = (ulong)bVar3;
        if (bVar2 < bVar3) {
          return;
        }
        if ((pSVar5->_2).typeHierarchy[uVar10 - 1] != TypeInfo_NameSetting) {
          return;
        }
        if (plVar9 == (long *)0x0) goto label_0362210e;
        if ((*(byte *)(*plVar9 + 0x130) < bVar3) ||
           (*(Il2CppClass **)(*(long *)(*plVar9 + 200) + -8 + uVar10 * 8) != TypeInfo_NameSetting)) goto label_036220fe;
        *(undefined4 *)(plVar9 + 4) = *(undefined4 *)&method->klass;
        if ((bVar3 <= (((System_Collections_Generic_List_object__c *)method->methodPointer)->_2).
                      naturalAligment) &&
           ((((System_Collections_Generic_List_object__c *)method->methodPointer)->_2).typeHierarchy
            [uVar10 - 1] == pIVar12)) {
          *(undefined4 *)((long)plVar9 + 0x24) = *(undefined4 *)((long)&method->klass + 4);
          return;
        }
        goto label_03622106;
      }
label_03622080:
      pIVar12 = pIVar6;
      if (plVar9 != (long *)0x0) {
        if (((byte)uVar10 <= *(byte *)(*plVar9 + 0x130)) &&
           (*(Il2CppClass **)(*(long *)(*plVar9 + 200) + -8 + uVar10 * 8) == pIVar12)) {
          *(undefined4 *)(plVar9 + 4) = *(undefined4 *)&method->klass;
          return;
        }
        goto label_036220fe;
      }
    }
    else {
label_0362201f:
      pIVar12 = pIVar6;
      if (plVar9 != (long *)0x0) {
        if ((*(byte *)(*plVar9 + 0x130) < (byte)uVar10) ||
           (*(Il2CppClass **)(*(long *)(*plVar9 + 200) + -8 + uVar10 * 8) != pIVar12)) {
label_036220fe:
          *(undefined8 *)(puVar11 + -0x20) = 0x3622106;
          il2cpp_runtime_helper_022b2fd0(plVar9);
        }
        else {
          *(int32_t *)(plVar9 + 3) = *(int32_t *)&method->name;
          if (((byte)uVar10 <=
               (((System_Collections_Generic_List_object__c *)method->methodPointer)->_2).naturalAligment) &&
             ((((System_Collections_Generic_List_object__c *)method->methodPointer)->_2).typeHierarchy
              [uVar10 - 1] == pIVar12)) {
            *(int32_t *)((long)plVar9 + 0x1c) = *(int32_t *)((long)&method->name + 4);
            return;
          }
        }
label_03622106:
        *(undefined8 *)(puVar11 + -0x20) = 0x362210e;
        __this = (Settings_ListSetting_T__o *)method;
        il2cpp_runtime_helper_022b2fd0();
      }
    }
label_0362210e:
    *(undefined8 *)(puVar11 + -0x20) = 0x3622113;
    il2cpp_runtime_helper_022b2c90();
    *(MethodInfo_3521EB0 **)(puVar11 + -0x20) = method;
    __this = (Settings_ListSetting_T__o *)
             ((System_Collections_Generic_List_object__Fields *)
             &((MethodInfo_3521EB0 *)__this)->invoker_method)->_items;
    if ((System_Collections_Generic_List_object__o *)__this ==
        (System_Collections_Generic_List_object__o *)0x0) {
      *(undefined8 *)(puVar11 + -0x28) = 0x362215f;
      uVar7 = il2cpp_runtime_helper_022b2c90();
      *(long **)(puVar11 + -0x28) = plVar9;
      *(MethodInfo_3521EB0 **)(puVar11 + -0x30) = method;
      *(undefined8 *)(puVar11 + -0x38) = uVar7;
      *(undefined8 *)(puVar11 + -0x40) = 0x3622171;
      System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
      lVar8 = *(long *)(*(long *)((long)(pIVar12->_1).byval_arg.data + 0xc0) + 0x10);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        *(undefined8 *)(puVar11 + -0x40) = 0x362218e;
        lVar8 = il2cpp_runtime_helper_023009c0();
      }
      if (*(int *)(lVar8 + 0xe4) == 0) {
        *(undefined8 *)(puVar11 + -0x40) = 0x362219f;
        il2cpp_runtime_helper_02337ed0();
      }
      lVar8 = *(long *)(*(long *)((long)(pIVar12->_1).byval_arg.data + 0xc0) + 0x10);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        *(undefined8 *)(puVar11 + -0x40) = 0x36221bf;
        lVar8 = il2cpp_runtime_helper_023009c0(lVar8);
      }
      ((System_Object_array *)__this)->bounds = (Il2CppArrayBounds *)**(undefined8 **)(lVar8 + 0xb8);
      il2cpp_runtime_helper_022b4080(&((System_Object_array *)__this)->bounds);
      return;
    }
    if ((int)((System_Object_array *)__this)->max_length < 1) {
      return;
    }
    method_00 = *(MethodInfo_362BED0 **)(*(long *)(*(long *)(extraout_RDX + 0x20) + 0xc0) + 0xa0);
    *(undefined8 *)(puVar11 + -0x28) = 0x362214c;
    method = (MethodInfo_3521EB0 *)
             System_Collections_Generic_List_object___get_Item
                       ((System_Collections_Generic_List_object__o *)__this,0,method_00);
    auVar13._8_8_ = pIVar12;
    auVar13._0_8_ = method;
    unaff_RBX = *(undefined8 *)(puVar11 + -0x20);
    puVar11 = puVar11 + -0x18;
    unaff_R14 = plVar9;
  } while( true );
}


// Settings.ListSetting<object>$$CopyLimits
// il2cpp: void Settings_ListSetting_object___CopyLimits (Settings_ListSetting_T__o* __this, Il2CppObject* from, Il2CppObject* to, const MethodInfo_3521EF0* method);
// 0x3621ef0

void Settings_ListSetting_object___CopyLimits
               (Settings_ListSetting_T__o *__this,Il2CppObject *from,Il2CppObject *to,
               MethodInfo_3521EF0 *method)

{
  byte bVar1;
  byte bVar2;
  System_Collections_Generic_List_object__c *pSVar3;
  void *pvVar4;
  MethodInfo_362BED0 *method_00;
  Il2CppClass *pIVar5;
  System_Collections_Generic_List_object__o *in_RAX;
  undefined8 uVar6;
  long lVar7;
  Il2CppClass *pIVar8;
  ulong uVar9;
  long extraout_RDX;
  undefined8 unaff_RBX;
  Il2CppClass *unaff_R14;
  
  do {
    pIVar8 = (Il2CppClass *)to;
    *(Il2CppClass **)((long)register0x00000020 + -8) = unaff_R14;
    *(undefined8 *)((long)register0x00000020 + -0x10) = unaff_RBX;
    *(System_Collections_Generic_List_object__o **)((long)register0x00000020 + -0x18) = in_RAX;
    if (g_data_057a9158 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3621f0f;
      il2cpp_runtime_helper_023445d0(&TypeInfo_ColorSetting);
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3621f1b;
      il2cpp_runtime_helper_023445d0(&TypeInfo_FloatSetting);
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3621f27;
      il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3621f33;
      il2cpp_runtime_helper_023445d0(&TypeInfo_NameSetting);
      __this = (Settings_ListSetting_T__o *)&TypeInfo_StringSetting;
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3621f3f;
      il2cpp_runtime_helper_023445d0();
      g_data_057a9158 = '\x01';
    }
    to = (Il2CppObject *)TypeInfo_NameSetting;
    if ((System_Collections_Generic_List_object__o *)from == (System_Collections_Generic_List_object__o *)0x0)
    {
      return;
    }
    pSVar3 = ((System_Collections_Generic_List_object__o *)from)->klass;
    bVar1 = (pSVar3->_2).naturalAligment;
    bVar2 = (TypeInfo_IntSetting->_2).naturalAligment;
    uVar9 = (ulong)bVar2;
    if ((bVar1 < bVar2) ||
       (__this = (Settings_ListSetting_T__o *)(pSVar3->_2).typeHierarchy, pIVar5 = TypeInfo_IntSetting,
       *(Il2CppClass **)((long)__this + uVar9 * 8 + -8) != TypeInfo_IntSetting)) {
      bVar2 = (TypeInfo_ColorSetting->_2).naturalAligment;
      uVar9 = (ulong)bVar2;
      if ((bVar1 < bVar2) ||
         (__this = (Settings_ListSetting_T__o *)(pSVar3->_2).typeHierarchy, pIVar5 = TypeInfo_ColorSetting,
         *(Il2CppClass **)((long)__this + uVar9 * 8 + -8) != TypeInfo_ColorSetting)) {
        bVar2 = (TypeInfo_FloatSetting->_2).naturalAligment;
        uVar9 = (ulong)bVar2;
        if ((bVar2 <= bVar1) &&
           (__this = (Settings_ListSetting_T__o *)(pSVar3->_2).typeHierarchy, pIVar5 = TypeInfo_FloatSetting,
           *(Il2CppClass **)((long)__this + uVar9 * 8 + -8) == TypeInfo_FloatSetting)) goto label_0362201f;
        bVar2 = (TypeInfo_StringSetting->_2).naturalAligment;
        uVar9 = (ulong)bVar2;
        if ((bVar2 <= bVar1) &&
           (__this = (Settings_ListSetting_T__o *)(pSVar3->_2).typeHierarchy, pIVar5 = TypeInfo_StringSetting,
           *(Il2CppClass **)((long)__this + uVar9 * 8 + -8) == TypeInfo_StringSetting)) goto label_03622080;
        bVar2 = (TypeInfo_NameSetting->_2).naturalAligment;
        uVar9 = (ulong)bVar2;
        if (bVar1 < bVar2) {
          return;
        }
        if ((pSVar3->_2).typeHierarchy[uVar9 - 1] != TypeInfo_NameSetting) {
          return;
        }
        if (pIVar8 == (Il2CppClass *)0x0) goto label_0362210e;
        pvVar4 = (pIVar8->_1).image;
        if ((*(byte *)((long)pvVar4 + 0x130) < bVar2) ||
           (*(Il2CppClass **)(*(long *)((long)pvVar4 + 200) + -8 + uVar9 * 8) != TypeInfo_NameSetting))
        goto label_036220fe;
        *(undefined4 *)&(pIVar8->_1).byval_arg.data =
             *(undefined4 *)&(((System_Collections_Generic_List_object__o *)from)->fields)._syncRoot;
        if ((bVar2 <= (((System_Collections_Generic_List_object__o *)from)->klass->_2).naturalAligment) &&
           ((((System_Collections_Generic_List_object__o *)from)->klass->_2).typeHierarchy[uVar9 - 1] ==
            (Il2CppClass *)to)) {
          *(undefined4 *)((long)&(pIVar8->_1).byval_arg.data + 4) =
               *(undefined4 *)
                ((long)&(((System_Collections_Generic_List_object__o *)from)->fields)._syncRoot + 4);
          return;
        }
        goto label_03622106;
      }
label_03622080:
      to = (Il2CppObject *)pIVar5;
      if (pIVar8 != (Il2CppClass *)0x0) {
        pvVar4 = (pIVar8->_1).image;
        if (((byte)uVar9 <= *(byte *)((long)pvVar4 + 0x130)) &&
           (*(Il2CppClass **)(*(long *)((long)pvVar4 + 200) + -8 + uVar9 * 8) == (Il2CppClass *)to)) {
          *(undefined4 *)&(pIVar8->_1).byval_arg.data =
               *(undefined4 *)&(((System_Collections_Generic_List_object__o *)from)->fields)._syncRoot;
          return;
        }
        goto label_036220fe;
      }
    }
    else {
label_0362201f:
      to = (Il2CppObject *)pIVar5;
      if (pIVar8 != (Il2CppClass *)0x0) {
        pvVar4 = (pIVar8->_1).image;
        if ((*(byte *)((long)pvVar4 + 0x130) < (byte)uVar9) ||
           (*(Il2CppClass **)(*(long *)((long)pvVar4 + 200) + -8 + uVar9 * 8) != (Il2CppClass *)to)) {
label_036220fe:
          *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3622106;
          il2cpp_runtime_helper_022b2fd0(pIVar8);
        }
        else {
          *(int32_t *)&(pIVar8->_1).namespaze =
               (((System_Collections_Generic_List_object__o *)from)->fields)._size;
          if (((byte)uVar9 <= (((System_Collections_Generic_List_object__o *)from)->klass->_2).naturalAligment
              ) && ((((System_Collections_Generic_List_object__o *)from)->klass->_2).typeHierarchy[uVar9 - 1]
                    == (Il2CppClass *)to)) {
            *(int32_t *)((long)&(pIVar8->_1).namespaze + 4) =
                 (((System_Collections_Generic_List_object__o *)from)->fields)._version;
            return;
          }
        }
label_03622106:
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x362210e;
        __this = (Settings_ListSetting_T__o *)from;
        il2cpp_runtime_helper_022b2fd0();
      }
    }
label_0362210e:
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3622113;
    il2cpp_runtime_helper_022b2c90();
    *(Il2CppObject **)((long)register0x00000020 + -0x20) = from;
    __this = (Settings_ListSetting_T__o *)
             (((System_Collections_Generic_List_object__o *)__this)->fields)._items;
    if ((System_Collections_Generic_List_object__o *)__this ==
        (System_Collections_Generic_List_object__o *)0x0) {
      *(undefined8 *)((long)register0x00000020 + -0x28) = 0x362215f;
      uVar6 = il2cpp_runtime_helper_022b2c90();
      *(Il2CppClass **)((long)register0x00000020 + -0x28) = pIVar8;
      *(Il2CppObject **)((long)register0x00000020 + -0x30) = from;
      *(undefined8 *)((long)register0x00000020 + -0x38) = uVar6;
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3622171;
      System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
      lVar7 = *(long *)(*(long *)((long)(((Il2CppClass *)to)->_1).byval_arg.data + 0xc0) + 0x10);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x362218e;
        lVar7 = il2cpp_runtime_helper_023009c0();
      }
      if (*(int *)(lVar7 + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x362219f;
        il2cpp_runtime_helper_02337ed0();
      }
      lVar7 = *(long *)(*(long *)((long)(((Il2CppClass *)to)->_1).byval_arg.data + 0xc0) + 0x10);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x36221bf;
        lVar7 = il2cpp_runtime_helper_023009c0(lVar7);
      }
      ((System_Object_array *)__this)->bounds = (Il2CppArrayBounds *)**(undefined8 **)(lVar7 + 0xb8);
      il2cpp_runtime_helper_022b4080(&((System_Object_array *)__this)->bounds);
      return;
    }
    if ((int)((System_Object_array *)__this)->max_length < 1) {
      return;
    }
    method_00 = *(MethodInfo_362BED0 **)(*(long *)(*(long *)(extraout_RDX + 0x20) + 0xc0) + 0xa0);
    *(undefined8 *)((long)register0x00000020 + -0x28) = 0x362214c;
    in_RAX = (System_Collections_Generic_List_object__o *)
             System_Collections_Generic_List_object___get_Item
                       ((System_Collections_Generic_List_object__o *)__this,0,method_00);
    unaff_RBX = *(undefined8 *)((long)register0x00000020 + -0x20);
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x18);
    from = (Il2CppObject *)in_RAX;
    unaff_R14 = pIVar8;
  } while( true );
}


// Settings.ListSetting<object>$$CopyDefaultLimits
// il2cpp: void Settings_ListSetting_object___CopyDefaultLimits (Settings_ListSetting_T__o* __this, Il2CppObject* to, const MethodInfo_3522120* method);
// 0x3622120

void Settings_ListSetting_object___CopyDefaultLimits
               (Settings_ListSetting_T__o *__this,Il2CppObject *to,MethodInfo_3522120 *method)

{
  byte bVar1;
  byte bVar2;
  System_Collections_Generic_List_object__c *pSVar3;
  void *pvVar4;
  MethodInfo *method_00;
  Il2CppClass *pIVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  MethodInfo_3522120 *extraout_RDX;
  System_Collections_Generic_List_object__o *unaff_RBX;
  Il2CppClass *pIVar9;
  Il2CppClass *unaff_R14;
  
  do {
    pIVar9 = (Il2CppClass *)to;
    *(System_Collections_Generic_List_object__o **)((long)register0x00000020 + -8) = unaff_RBX;
    __this = (Settings_ListSetting_T__o *)
             (((System_Collections_Generic_List_object__o *)__this)->fields)._items;
    if ((System_Collections_Generic_List_object__o *)__this ==
        (System_Collections_Generic_List_object__o *)0x0) {
      *(undefined8 *)((long)register0x00000020 + -0x10) = 0x362215f;
      uVar6 = il2cpp_runtime_helper_022b2c90();
      *(Il2CppClass **)((long)register0x00000020 + -0x10) = unaff_R14;
      *(System_Collections_Generic_List_object__o **)((long)register0x00000020 + -0x18) = unaff_RBX;
      *(undefined8 *)((long)register0x00000020 + -0x20) = uVar6;
      *(undefined8 *)((long)register0x00000020 + -0x28) = 0x3622171;
      System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
      lVar7 = *(long *)(*(long *)((long)(pIVar9->_1).byval_arg.data + 0xc0) + 0x10);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x28) = 0x362218e;
        lVar7 = il2cpp_runtime_helper_023009c0();
      }
      if (*(int *)(lVar7 + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x28) = 0x362219f;
        il2cpp_runtime_helper_02337ed0();
      }
      lVar7 = *(long *)(*(long *)((long)(pIVar9->_1).byval_arg.data + 0xc0) + 0x10);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x28) = 0x36221bf;
        lVar7 = il2cpp_runtime_helper_023009c0(lVar7);
      }
      ((System_Object_array *)__this)->bounds = (Il2CppArrayBounds *)**(undefined8 **)(lVar7 + 0xb8);
      il2cpp_runtime_helper_022b4080(&((System_Object_array *)__this)->bounds);
      return;
    }
    if ((int)((System_Object_array *)__this)->max_length < 1) {
      return;
    }
    method_00 = method->klass->rgctx_data->_21_System_Collections_Generic_List_T__Clear;
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0x362214c;
    unaff_RBX = (System_Collections_Generic_List_object__o *)
                System_Collections_Generic_List_object___get_Item
                          ((System_Collections_Generic_List_object__o *)__this,0,
                           (MethodInfo_362BED0 *)method_00);
    uVar6 = *(undefined8 *)((long)register0x00000020 + -8);
    *(Il2CppClass **)((long)register0x00000020 + -8) = unaff_R14;
    *(undefined8 *)((long)register0x00000020 + -0x10) = uVar6;
    *(System_Collections_Generic_List_object__o **)((long)register0x00000020 + -0x18) = unaff_RBX;
    if (g_data_057a9158 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3621f0f;
      il2cpp_runtime_helper_023445d0(&TypeInfo_ColorSetting);
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3621f1b;
      il2cpp_runtime_helper_023445d0(&TypeInfo_FloatSetting);
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3621f27;
      il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3621f33;
      il2cpp_runtime_helper_023445d0(&TypeInfo_NameSetting);
      __this = (Settings_ListSetting_T__o *)&TypeInfo_StringSetting;
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3621f3f;
      il2cpp_runtime_helper_023445d0();
      g_data_057a9158 = '\x01';
    }
    to = (Il2CppObject *)TypeInfo_NameSetting;
    if (unaff_RBX == (System_Collections_Generic_List_object__o *)0x0) {
      return;
    }
    pSVar3 = unaff_RBX->klass;
    bVar1 = (pSVar3->_2).naturalAligment;
    bVar2 = (TypeInfo_IntSetting->_2).naturalAligment;
    uVar8 = (ulong)bVar2;
    if ((bVar1 < bVar2) ||
       (__this = (Settings_ListSetting_T__o *)(pSVar3->_2).typeHierarchy, pIVar5 = TypeInfo_IntSetting,
       *(Il2CppClass **)((long)__this + uVar8 * 8 + -8) != TypeInfo_IntSetting)) {
      bVar2 = (TypeInfo_ColorSetting->_2).naturalAligment;
      uVar8 = (ulong)bVar2;
      if ((bVar1 < bVar2) ||
         (__this = (Settings_ListSetting_T__o *)(pSVar3->_2).typeHierarchy, pIVar5 = TypeInfo_ColorSetting,
         *(Il2CppClass **)((long)__this + uVar8 * 8 + -8) != TypeInfo_ColorSetting)) {
        bVar2 = (TypeInfo_FloatSetting->_2).naturalAligment;
        uVar8 = (ulong)bVar2;
        if ((bVar2 <= bVar1) &&
           (__this = (Settings_ListSetting_T__o *)(pSVar3->_2).typeHierarchy, pIVar5 = TypeInfo_FloatSetting,
           *(Il2CppClass **)((long)__this + uVar8 * 8 + -8) == TypeInfo_FloatSetting)) goto label_0362201f;
        bVar2 = (TypeInfo_StringSetting->_2).naturalAligment;
        uVar8 = (ulong)bVar2;
        if ((bVar2 <= bVar1) &&
           (__this = (Settings_ListSetting_T__o *)(pSVar3->_2).typeHierarchy, pIVar5 = TypeInfo_StringSetting,
           *(Il2CppClass **)((long)__this + uVar8 * 8 + -8) == TypeInfo_StringSetting)) goto label_03622080;
        bVar2 = (TypeInfo_NameSetting->_2).naturalAligment;
        uVar8 = (ulong)bVar2;
        if (bVar1 < bVar2) {
          return;
        }
        if ((pSVar3->_2).typeHierarchy[uVar8 - 1] != TypeInfo_NameSetting) {
          return;
        }
        if (pIVar9 == (Il2CppClass *)0x0) goto label_0362210e;
        pvVar4 = (pIVar9->_1).image;
        if ((*(byte *)((long)pvVar4 + 0x130) < bVar2) ||
           (*(Il2CppClass **)(*(long *)((long)pvVar4 + 200) + -8 + uVar8 * 8) != TypeInfo_NameSetting))
        goto label_036220fe;
        *(undefined4 *)&(pIVar9->_1).byval_arg.data = *(undefined4 *)&(unaff_RBX->fields)._syncRoot;
        if ((bVar2 <= (unaff_RBX->klass->_2).naturalAligment) &&
           ((unaff_RBX->klass->_2).typeHierarchy[uVar8 - 1] == (Il2CppClass *)to)) {
          *(undefined4 *)((long)&(pIVar9->_1).byval_arg.data + 4) =
               *(undefined4 *)((long)&(unaff_RBX->fields)._syncRoot + 4);
          return;
        }
        goto label_03622106;
      }
label_03622080:
      to = (Il2CppObject *)pIVar5;
      if (pIVar9 != (Il2CppClass *)0x0) {
        pvVar4 = (pIVar9->_1).image;
        if (((byte)uVar8 <= *(byte *)((long)pvVar4 + 0x130)) &&
           (*(Il2CppClass **)(*(long *)((long)pvVar4 + 200) + -8 + uVar8 * 8) == (Il2CppClass *)to)) {
          *(undefined4 *)&(pIVar9->_1).byval_arg.data = *(undefined4 *)&(unaff_RBX->fields)._syncRoot;
          return;
        }
        goto label_036220fe;
      }
    }
    else {
label_0362201f:
      to = (Il2CppObject *)pIVar5;
      if (pIVar9 != (Il2CppClass *)0x0) {
        pvVar4 = (pIVar9->_1).image;
        if ((*(byte *)((long)pvVar4 + 0x130) < (byte)uVar8) ||
           (*(Il2CppClass **)(*(long *)((long)pvVar4 + 200) + -8 + uVar8 * 8) != (Il2CppClass *)to)) {
label_036220fe:
          *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3622106;
          il2cpp_runtime_helper_022b2fd0(pIVar9);
        }
        else {
          *(int32_t *)&(pIVar9->_1).namespaze = (unaff_RBX->fields)._size;
          if (((byte)uVar8 <= (unaff_RBX->klass->_2).naturalAligment) &&
             ((unaff_RBX->klass->_2).typeHierarchy[uVar8 - 1] == (Il2CppClass *)to)) {
            *(int32_t *)((long)&(pIVar9->_1).namespaze + 4) = (unaff_RBX->fields)._version;
            return;
          }
        }
label_03622106:
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x362210e;
        __this = (Settings_ListSetting_T__o *)unaff_RBX;
        il2cpp_runtime_helper_022b2fd0();
      }
    }
label_0362210e:
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3622113;
    il2cpp_runtime_helper_022b2c90();
    method = extraout_RDX;
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x18);
    unaff_R14 = pIVar9;
  } while( true );
}


