// Type: Characters.HookUseable
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/HookUseable.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/HookUseable.cs
// --------------------------------

// Characters.HookUseable$$.ctor
// il2cpp: void Characters_HookUseable___ctor (Characters_HookUseable_o* __this, Characters_BaseCharacter_o* owner, bool left, bool gun, const MethodInfo* method);
// 0x42b50c0

void Characters_HookUseable___ctor
               (Characters_HookUseable_o *__this,Characters_BaseCharacter_o *owner,bool_conflict left,
               bool_conflict gun,MethodInfo *method)

{
  System_Collections_Generic_List_Hook__o **ppSVar1;
  int32_t *piVar2;
  byte bVar3;
  uint uVar4;
  MethodInfo *pMVar5;
  long lVar6;
  System_Collections_Generic_List_object__o *__this_00;
  Il2CppObject *item;
  System_Object_array *pSVar7;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  bool_conflict bVar8;
  System_Collections_Generic_List_Hook__o *__this_06;
  Il2CppClass *pIVar9;
  System_Collections_Generic_List_object__o *__this_07;
  Il2CppRGCTXData *__this_08;
  uint uVar10;
  Characters_BaseCharacter_o *pCVar11;
  long *plVar12;
  ulong uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [12];
  System_Collections_Generic_List_Enumerator_T__c *pSVar16;
  Il2CppType *pIVar17;
  Il2CppObject *pIVar18;
  undefined1 auStack_70 [16];
  Il2CppObject *pIStack_60;
  Il2CppRGCTXData *pIStack_58;
  _union_249689 _Stack_50;
  System_Collections_Generic_List_Hook__o **ppSStack_48;
  ulong uStack_40;
  
  uVar13 = (ulong)(uint)gun;
  plVar12 = (long *)(ulong)(uint)left;
  if (g_data_057addb9 == '\0') {
    uStack_40._0_2_ = 0x50ec;
    uStack_40._2_1_ = '+';
    uStack_40._3_1_ = '\x04';
    uStack_40._4_4_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Hook);
    uStack_40._0_2_ = 0x50f8;
    uStack_40._2_1_ = '+';
    uStack_40._3_1_ = '\x04';
    uStack_40._4_4_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Human);
    uStack_40._0_2_ = 0x5104;
    uStack_40._2_1_ = '+';
    uStack_40._3_1_ = '\x04';
    uStack_40._4_4_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    uStack_40._0_2_ = 0x5110;
    uStack_40._2_1_ = '+';
    uStack_40._3_1_ = '\x04';
    uStack_40._4_4_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Characters_Hook);
    uStack_40._0_2_ = 0x511c;
    uStack_40._2_1_ = '+';
    uStack_40._3_1_ = '\x04';
    uStack_40._4_4_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Hook);
    g_data_057addb9 = '\x01';
  }
  *(undefined1 *)&(__this->fields).Enabled = 1;
  uStack_40._0_2_ = 0x5136;
  uStack_40._2_1_ = '+';
  uStack_40._3_1_ = '\x04';
  uStack_40._4_4_ = 0;
  __this_06 = (System_Collections_Generic_List_Hook__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Hook);
  uStack_40._0_2_ = 0x514b;
  uStack_40._2_1_ = '+';
  uStack_40._3_1_ = '\x04';
  uStack_40._4_4_ = 0;
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_06,MethodInfo_List_1_Characters_Hook);
  ppSVar1 = &(__this->fields).Hooks;
  (__this->fields).Hooks = __this_06;
  uStack_40._0_2_ = 0x515e;
  uStack_40._2_1_ = '+';
  uStack_40._3_1_ = '\x04';
  uStack_40._4_4_ = 0;
  il2cpp_runtime_helper_022b4080(ppSVar1);
  (__this->fields)._lastUseTime = -1000.0;
  uStack_40._0_2_ = 0x516f;
  uStack_40._2_1_ = '+';
  uStack_40._3_1_ = '\x04';
  uStack_40._4_4_ = 0;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._owner = owner;
  uStack_40._0_2_ = 0x517f;
  uStack_40._2_1_ = '+';
  uStack_40._3_1_ = '\x04';
  uStack_40._4_4_ = 0;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._owner,owner);
  (__this->fields).Cooldown = 0.0;
  (__this->fields).UsesLeft = -1;
  (__this->fields).MaxUses = -1;
  *(char *)&(__this->fields)._left = (char)left;
  (__this->fields)._hookSpeed = 3.0;
  __this_08 = (Il2CppRGCTXData *)(__this->fields).Hooks;
  pCVar11 = owner;
  if (owner == (Characters_BaseCharacter_o *)0x0) {
    if (*(int *)(TypeInfo_Hook + 0xe4) == 0) {
      uStack_40._0_2_ = 0x5272;
      uStack_40._2_1_ = '+';
      uStack_40._3_1_ = '\x04';
      uStack_40._4_4_ = 0;
      il2cpp_runtime_helper_02337ed0();
    }
    uVar10 = left & 0xff;
    uVar13 = uVar13 & 0xff;
    uStack_40._0_2_ = 0x5291;
    uStack_40._2_1_ = '+';
    uStack_40._3_1_ = '\x04';
    uStack_40._4_4_ = 0;
    pIVar9 = (Il2CppClass *)
             Characters_Hook__CreateHook((Characters_Human_o *)0x0,uVar10,0,0.8,(bool_conflict)uVar13,method);
    auVar14._8_8_ = MethodInfo_Void_Add;
    auVar14._0_8_ = pIVar9;
    if (__this_08 != (Il2CppRGCTXData *)0x0) {
      plVar12 = &MethodInfo_Void_Add;
      *(int32_t *)((long)__this_08 + 0x1c) = *(int32_t *)((long)__this_08 + 0x1c) + 1;
      pMVar5 = __this_08[2].method;
      if (pMVar5 != (MethodInfo *)0x0) {
        uVar4 = *(uint *)(__this_08 + 3);
        if (*(uint *)&pMVar5->name <= uVar4) goto label_042b5415;
        *(uint *)(__this_08 + 3) = uVar4 + 1;
        (&pMVar5->klass)[(int)uVar4] = pIVar9;
        uStack_40._0_2_ = 0x52de;
        uStack_40._2_1_ = '+';
        uStack_40._3_1_ = '\x04';
        uStack_40._4_4_ = 0;
        il2cpp_runtime_helper_022b4080(&pMVar5->klass + (int)uVar4,pIVar9);
        goto label_042b542f;
      }
    }
  }
  else {
    if (*(int *)(TypeInfo_Hook + 0xe4) == 0) {
      uStack_40._0_2_ = 0x51c5;
      uStack_40._2_1_ = '+';
      uStack_40._3_1_ = '\x04';
      uStack_40._4_4_ = 0;
      il2cpp_runtime_helper_02337ed0();
    }
    bVar3 = (TypeInfo_Human->_2).naturalAligment;
    if (((owner->klass->_2).naturalAligment < bVar3) ||
       ((owner->klass->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_Human)) {
label_042b540d:
      uVar10 = (uint)__this_06;
      uStack_40._0_2_ = 0x5415;
      uStack_40._2_1_ = '+';
      uStack_40._3_1_ = '\x04';
      uStack_40._4_4_ = 0;
      auVar14 = il2cpp_runtime_helper_022b2fd0(owner);
label_042b5415:
      uStack_40._0_2_ = 0x542f;
      uStack_40._2_1_ = '+';
      uStack_40._3_1_ = '\x04';
      uStack_40._4_4_ = 0;
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_08,auVar14._0_8_,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(auVar14._8_8_ + 0x20) + 0xc0) + 0x70));
label_042b542f:
      __this_08 = (Il2CppRGCTXData *)*ppSVar1;
      if (*(int *)(TypeInfo_Hook + 0xe4) == 0) {
        uStack_40._0_2_ = 0x544a;
        uStack_40._2_1_ = '+';
        uStack_40._3_1_ = '\x04';
        uStack_40._4_4_ = 0;
        il2cpp_runtime_helper_02337ed0();
      }
      uStack_40._0_2_ = 0x5464;
      uStack_40._2_1_ = '+';
      uStack_40._3_1_ = '\x04';
      uStack_40._4_4_ = 0;
      pCVar11 = owner;
      pIVar9 = (Il2CppClass *)
               Characters_Hook__CreateHook
                         ((Characters_Human_o *)owner,uVar10,1,0.8,(bool_conflict)uVar13,method);
      if (__this_08 != (Il2CppRGCTXData *)0x0) {
        lVar6 = *plVar12;
        *(int32_t *)((long)__this_08 + 0x1c) = *(int32_t *)((long)__this_08 + 0x1c) + 1;
        pMVar5 = __this_08[2].method;
        if (pMVar5 != (MethodInfo *)0x0) {
          uVar4 = *(uint *)(__this_08 + 3);
          if (uVar4 < *(uint *)&pMVar5->name) {
            *(uint *)(__this_08 + 3) = uVar4 + 1;
            (&pMVar5->klass)[(int)uVar4] = pIVar9;
            uStack_40._0_2_ = 0x54a6;
            uStack_40._2_1_ = '+';
            uStack_40._3_1_ = '\x04';
            uStack_40._4_4_ = 0;
            il2cpp_runtime_helper_022b4080(&pMVar5->klass + (int)uVar4,pIVar9);
          }
          else {
            uStack_40._0_2_ = 0x54c2;
            uStack_40._2_1_ = '+';
            uStack_40._3_1_ = '\x04';
            uStack_40._4_4_ = 0;
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_08,(Il2CppObject *)pIVar9,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
          }
          __this_08 = (Il2CppRGCTXData *)*ppSVar1;
          if (*(int *)(TypeInfo_Hook + 0xe4) == 0) {
            uStack_40._0_2_ = 0x54dd;
            uStack_40._2_1_ = '+';
            uStack_40._3_1_ = '\x04';
            uStack_40._4_4_ = 0;
            il2cpp_runtime_helper_02337ed0();
          }
label_042b54dd:
          uStack_40._0_2_ = 0x54f7;
          uStack_40._2_1_ = '+';
          uStack_40._3_1_ = '\x04';
          uStack_40._4_4_ = 0;
          pCVar11 = owner;
          pIVar9 = (Il2CppClass *)
                   Characters_Hook__CreateHook
                             ((Characters_Human_o *)owner,uVar10,2,0.8,(bool_conflict)uVar13,method);
          if (__this_08 != (Il2CppRGCTXData *)0x0) {
            lVar6 = *plVar12;
            *(int32_t *)((long)__this_08 + 0x1c) = *(int32_t *)((long)__this_08 + 0x1c) + 1;
            pMVar5 = __this_08[2].method;
            if (pMVar5 != (MethodInfo *)0x0) {
              uVar10 = *(uint *)(__this_08 + 3);
              if (*(uint *)&pMVar5->name <= uVar10) {
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)__this_08,(Il2CppObject *)pIVar9,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
                return;
              }
              *(uint *)(__this_08 + 3) = uVar10 + 1;
              (&pMVar5->klass)[(int)uVar10] = pIVar9;
              il2cpp_runtime_helper_022b4080(&pMVar5->klass + (int)uVar10,pIVar9);
              return;
            }
          }
        }
      }
    }
    else {
      __this_06 = (System_Collections_Generic_List_Hook__o *)((ulong)plVar12 & 0xff);
      uVar13 = uVar13 & 0xff;
      uVar10 = (uint)__this_06;
      uStack_40._0_2_ = 0x5217;
      uStack_40._2_1_ = '+';
      uStack_40._3_1_ = '\x04';
      uStack_40._4_4_ = 0;
      pIVar9 = (Il2CppClass *)
               Characters_Hook__CreateHook
                         ((Characters_Human_o *)owner,uVar10,0,0.8,(bool_conflict)uVar13,method);
      lVar6 = MethodInfo_Void_Add;
      if (__this_08 != (Il2CppRGCTXData *)0x0) {
        plVar12 = &MethodInfo_Void_Add;
        *(int32_t *)((long)__this_08 + 0x1c) = *(int32_t *)((long)__this_08 + 0x1c) + 1;
        pMVar5 = __this_08[2].method;
        if (pMVar5 != (MethodInfo *)0x0) {
          uVar4 = *(uint *)(__this_08 + 3);
          if (uVar4 < *(uint *)&pMVar5->name) {
            *(uint *)(__this_08 + 3) = uVar4 + 1;
            (&pMVar5->klass)[(int)uVar4] = pIVar9;
            uStack_40._0_2_ = 0x5264;
            uStack_40._2_1_ = '+';
            uStack_40._3_1_ = '\x04';
            uStack_40._4_4_ = 0;
            il2cpp_runtime_helper_022b4080(&pMVar5->klass + (int)uVar4,pIVar9);
          }
          else {
            uStack_40._0_2_ = 0x52fd;
            uStack_40._2_1_ = '+';
            uStack_40._3_1_ = '\x04';
            uStack_40._4_4_ = 0;
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_08,(Il2CppObject *)pIVar9,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
          }
          __this_08 = (Il2CppRGCTXData *)*ppSVar1;
          if (*(int *)(TypeInfo_Hook + 0xe4) == 0) {
            uStack_40._0_2_ = 0x5318;
            uStack_40._2_1_ = '+';
            uStack_40._3_1_ = '\x04';
            uStack_40._4_4_ = 0;
            il2cpp_runtime_helper_02337ed0();
          }
          bVar3 = (TypeInfo_Human->_2).naturalAligment;
          if (((owner->klass->_2).naturalAligment < bVar3) ||
             ((owner->klass->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_Human)) goto label_042b540d;
          uStack_40._0_2_ = 0x5365;
          uStack_40._2_1_ = '+';
          uStack_40._3_1_ = '\x04';
          uStack_40._4_4_ = 0;
          pCVar11 = owner;
          pIVar9 = (Il2CppClass *)
                   Characters_Hook__CreateHook
                             ((Characters_Human_o *)owner,uVar10,1,0.8,(bool_conflict)uVar13,method);
          lVar6 = MethodInfo_Void_Add;
          if (__this_08 != (Il2CppRGCTXData *)0x0) {
            *(int32_t *)((long)__this_08 + 0x1c) = *(int32_t *)((long)__this_08 + 0x1c) + 1;
            pMVar5 = __this_08[2].method;
            if (pMVar5 != (MethodInfo *)0x0) {
              uVar4 = *(uint *)(__this_08 + 3);
              if (uVar4 < *(uint *)&pMVar5->name) {
                *(uint *)(__this_08 + 3) = uVar4 + 1;
                (&pMVar5->klass)[(int)uVar4] = pIVar9;
                uStack_40._0_2_ = 0x53a7;
                uStack_40._2_1_ = '+';
                uStack_40._3_1_ = '\x04';
                uStack_40._4_4_ = 0;
                il2cpp_runtime_helper_022b4080(&pMVar5->klass + (int)uVar4,pIVar9);
              }
              else {
                uStack_40._0_2_ = 0x53c3;
                uStack_40._2_1_ = '+';
                uStack_40._3_1_ = '\x04';
                uStack_40._4_4_ = 0;
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)__this_08,(Il2CppObject *)pIVar9,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
              }
              __this_08 = (Il2CppRGCTXData *)*ppSVar1;
              if (*(int *)(TypeInfo_Hook + 0xe4) == 0) {
                uStack_40._0_2_ = 0x53de;
                uStack_40._2_1_ = '+';
                uStack_40._3_1_ = '\x04';
                uStack_40._4_4_ = 0;
                il2cpp_runtime_helper_02337ed0();
              }
              bVar3 = (TypeInfo_Human->_2).naturalAligment;
              if (((owner->klass->_2).naturalAligment < bVar3) ||
                 ((owner->klass->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_Human)) goto label_042b540d;
              goto label_042b54dd;
            }
          }
        }
      }
    }
  }
  uStack_40._0_2_ = 0x556c;
  uStack_40._2_1_ = '+';
  uStack_40._3_1_ = '\x04';
  uStack_40._4_4_ = 0;
  il2cpp_runtime_helper_022b2c90();
  pIStack_58 = __this_08;
  _Stack_50 = (_union_249689)owner;
  ppSStack_48 = ppSVar1;
  uStack_40 = uVar13;
  if (g_data_057addba == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Hook_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Characters_Hook_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Renderer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Renderer);
    g_data_057addba = '\x01';
  }
  pSVar16 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar17 = (Il2CppType *)0x0;
  pIVar18 = (Il2CppObject *)0x0;
  __this_07 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Renderer);
  System_Collections_Generic_List_object____ctor(__this_07,MethodInfo_List_1_UnityEngine_Renderer);
  __this_00 = (System_Collections_Generic_List_object__o *)(pCVar11->fields).RichTextName;
  if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
label_042b5718:
    il2cpp_runtime_helper_022b2c90();
label_042b571d:
    if (pIVar18 == (Il2CppObject *)0x0) {
label_042b5725:
      il2cpp_runtime_helper_022b2c90();
    }
    auVar15 = il2cpp_runtime_helper_022b2c90();
    if (auVar15._8_4_ == 1) {
      plVar12 = (long *)__cxa_begin_catch(auVar15._0_8_);
      lVar6 = *plVar12;
      __cxa_end_catch();
      __this_04.fields._8_8_ = pIVar17;
      __this_04.fields._list = (System_Collections_Generic_List_T__o *)pSVar16;
      __this_04.fields._current = pIVar18;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff70);
      if (lVar6 == 0) {
        return;
      }
      il2cpp_runtime_helper_022fefe0(lVar6);
    }
    __this_05.fields._8_8_ = pIVar17;
    __this_05.fields._list = (System_Collections_Generic_List_T__o *)pSVar16;
    __this_05.fields._current = pIVar18;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_05,(MethodInfo_321A1C0 *)&stack0xffffffffffffff70);
    _Unwind_Resume(auVar15._0_8_);
  }
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)auStack_70,__this_00,MethodInfo_List_1_T_Enumerator_Characters_Hook_GetEnumerator);
  pSVar16 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_70._0_8_;
  pIVar17 = (Il2CppType *)auStack_70._8_8_;
  pIVar18 = pIStack_60;
  if (__this_07 == (System_Collections_Generic_List_object__o *)0x0) {
    __this_02.fields._index = auStack_70._8_4_;
    __this_02.fields._version = auStack_70._12_4_;
    __this_02.fields._list = (System_Collections_Generic_List_T__o *)auStack_70._0_8_;
    __this_02.fields._current = pIStack_60;
    bVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (__this_02,(MethodInfo_321A1D0 *)&stack0xffffffffffffff70);
    pSVar16 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_70._0_8_;
    pIVar17 = (Il2CppType *)auStack_70._8_8_;
    pIVar18 = pIStack_60;
    if ((char)bVar8 != '\0') goto label_042b571d;
  }
  else {
    while (__this_01.fields._8_8_ = pIVar17,
          __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar16,
          __this_01.fields._current = pIVar18,
          bVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff70), lVar6 = MethodInfo_Void_Add,
          auStack_70._0_8_ = pSVar16, auStack_70._8_8_ = pIVar17, pIStack_60 = pIVar18, (char)bVar8 != '\0') {
      if (pIVar18 == (Il2CppObject *)0x0) goto label_042b5725;
      item = pIVar18[4].monitor;
      piVar2 = &(__this_07->fields)._version;
      *piVar2 = *piVar2 + 1;
      pSVar7 = (__this_07->fields)._items;
      if (pSVar7 == (System_Object_array *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        goto label_042b5718;
      }
      uVar10 = (__this_07->fields)._size;
      if (uVar10 < (uint)pSVar7->max_length) {
        (__this_07->fields)._size = uVar10 + 1;
        pSVar7->m_Items[(int)uVar10] = item;
        il2cpp_runtime_helper_022b4080(pSVar7->m_Items + (int)uVar10);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  (__this_07,item,*(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
      }
    }
  }
  __this_03.fields._8_8_ = auStack_70._8_8_;
  __this_03.fields._list = (System_Collections_Generic_List_T__o *)auStack_70._0_8_;
  __this_03.fields._current = pIStack_60;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff70);
  return;
}


// Characters.HookUseable$$GetRenderers
// il2cpp: System_Collections_Generic_List_Renderer__o* Characters_HookUseable__GetRenderers (Characters_HookUseable_o* __this, const MethodInfo* method);
// 0x42b5570

System_Collections_Generic_List_Renderer__o *
Characters_HookUseable__GetRenderers(Characters_HookUseable_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_Hook__o *__this_00;
  UnityEngine_Renderer_o *item;
  UnityEngine_Renderer_array *pUVar3;
  long lVar4;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  bool_conflict bVar5;
  System_Collections_Generic_List_Renderer__o *__this_06;
  long *plVar6;
  undefined1 auVar7 [12];
  System_Collections_Generic_List_Enumerator_T__c *pSVar8;
  Il2CppType *pIVar9;
  Il2CppObject *pIVar10;
  undefined1 local_38 [16];
  Il2CppObject *local_28;
  
  if (g_data_057addba == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Hook_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Characters_Hook_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Renderer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Renderer);
    g_data_057addba = '\x01';
  }
  pSVar8 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar9 = (Il2CppType *)0x0;
  pIVar10 = (Il2CppObject *)0x0;
  __this_06 = (System_Collections_Generic_List_Renderer__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Renderer);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_06,MethodInfo_List_1_UnityEngine_Renderer);
  __this_00 = (__this->fields).Hooks;
  if (__this_00 == (System_Collections_Generic_List_Hook__o *)0x0) {
label_042b5718:
    il2cpp_runtime_helper_022b2c90();
label_042b571d:
    if (pIVar10 == (Il2CppObject *)0x0) {
label_042b5725:
      il2cpp_runtime_helper_022b2c90();
    }
    auVar7 = il2cpp_runtime_helper_022b2c90();
    if (auVar7._8_4_ == 1) {
      plVar6 = (long *)__cxa_begin_catch(auVar7._0_8_);
      lVar4 = *plVar6;
      __cxa_end_catch();
      __this_04.fields._8_8_ = pIVar9;
      __this_04.fields._list = (System_Collections_Generic_List_T__o *)pSVar8;
      __this_04.fields._current = pIVar10;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa8);
      if (lVar4 == 0) {
        return __this_06;
      }
      il2cpp_runtime_helper_022fefe0(lVar4);
    }
    __this_05.fields._8_8_ = pIVar9;
    __this_05.fields._list = (System_Collections_Generic_List_T__o *)pSVar8;
    __this_05.fields._current = pIVar10;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_05,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa8);
    _Unwind_Resume(auVar7._0_8_);
  }
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_38,
             (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T_Enumerator_Characters_Hook_GetEnumerator);
  pSVar8 = (System_Collections_Generic_List_Enumerator_T__c *)local_38._0_8_;
  pIVar9 = (Il2CppType *)local_38._8_8_;
  pIVar10 = local_28;
  if (__this_06 == (System_Collections_Generic_List_Renderer__o *)0x0) {
    __this_02.fields._index = local_38._8_4_;
    __this_02.fields._version = local_38._12_4_;
    __this_02.fields._list = (System_Collections_Generic_List_T__o *)local_38._0_8_;
    __this_02.fields._current = local_28;
    bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (__this_02,(MethodInfo_321A1D0 *)&stack0xffffffffffffffa8);
    pSVar8 = (System_Collections_Generic_List_Enumerator_T__c *)local_38._0_8_;
    pIVar9 = (Il2CppType *)local_38._8_8_;
    pIVar10 = local_28;
    if ((char)bVar5 != '\0') goto label_042b571d;
  }
  else {
    while (__this_01.fields._8_8_ = pIVar9,
          __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar8,
          __this_01.fields._current = pIVar10,
          bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffffa8), lVar4 = MethodInfo_Void_Add,
          local_38._0_8_ = pSVar8, local_38._8_8_ = pIVar9, local_28 = pIVar10, (char)bVar5 != '\0') {
      if (pIVar10 == (Il2CppObject *)0x0) goto label_042b5725;
      item = pIVar10[4].monitor;
      piVar1 = &(__this_06->fields)._version;
      *piVar1 = *piVar1 + 1;
      pUVar3 = (__this_06->fields)._items;
      if (pUVar3 == (UnityEngine_Renderer_array *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        goto label_042b5718;
      }
      uVar2 = (__this_06->fields)._size;
      if (uVar2 < (uint)pUVar3->max_length) {
        (__this_06->fields)._size = uVar2 + 1;
        pUVar3->m_Items[(int)uVar2] = item;
        il2cpp_runtime_helper_022b4080(pUVar3->m_Items + (int)uVar2);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_06,(Il2CppObject *)item,
                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
      }
    }
  }
  __this_03.fields._8_8_ = local_38._8_8_;
  __this_03.fields._list = (System_Collections_Generic_List_T__o *)local_38._0_8_;
  __this_03.fields._current = local_28;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa8);
  return __this_06;
}


// Characters.HookUseable$$IsHooked
// il2cpp: bool Characters_HookUseable__IsHooked (Characters_HookUseable_o* __this, const MethodInfo* method);
// 0x42b57d0

bool_conflict Characters_HookUseable__IsHooked(Characters_HookUseable_o *__this,MethodInfo *method)

{
  int iVar1;
  Characters_Hook_o *pCVar2;
  long lVar3;
  void *pvVar4;
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar5;
  bool_conflict bVar6;
  bool_conflict extraout_EAX;
  bool_conflict extraout_EAX_00;
  bool_conflict extraout_EAX_01;
  long *plVar7;
  MethodInfo *method_00;
  MethodInfo *method_01;
  uint uVar8;
  bool_conflict *pbVar9;
  int32_t state;
  MethodInfo *pMVar10;
  Characters_Hook_o *pCVar11;
  UnityEngine_Object_o *pUVar12;
  UnityEngine_Object_o *pUVar13;
  UnityEngine_Object_o *pUVar14;
  Characters_Hook_o *pCVar15;
  void **ppvVar16;
  undefined8 in_XMM1_Qa;
  undefined4 uVar17;
  UnityEngine_Vector3_o UVar18;
  UnityEngine_Vector3_o value;
  System_Nullable_Vector3__o __this_05;
  undefined1 auVar19 [12];
  System_Collections_Generic_List_T__o *pSVar20;
  Il2CppMethodPointer pIVar21;
  Il2CppObject *pIVar22;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  UnityEngine_Object_o *pUStack_90;
  UnityEngine_Object_o *pUStack_88;
  undefined8 uStack_80;
  UnityEngine_Object_o *pUStack_78;
  UnityEngine_Object_o *pUStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  UnityEngine_Object_o *pUStack_50;
  undefined8 uStack_48;
  Characters_Hook_o *pCStack_40;
  UnityEngine_Object_o *pUStack_38;
  undefined8 uStack_30;
  Characters_HookUseable_o *pCStack_28;
  Characters_Hook_o *pCStack_20;
  
  uVar17 = (undefined4)((ulong)in_XMM1_Qa >> 0x20);
  if (g_data_057addbb == '\0') {
    pCStack_20 = (Characters_Hook_o *)0x42b57ed;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057addbb = '\x01';
  }
  pCVar15 = (__this->fields)._activeHook;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pCStack_20 = (Characters_Hook_o *)0x42b5810;
    il2cpp_runtime_helper_02337ed0();
  }
  uVar8 = 0;
  pCStack_20 = (Characters_Hook_o *)0x42b581e;
  pCVar11 = pCVar15;
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    pCVar2 = (__this->fields)._activeHook;
    if (pCVar2 == (Characters_Hook_o *)0x0) {
      pCStack_20 = (Characters_Hook_o *)0x42b583f;
      il2cpp_runtime_helper_022b2c90();
      uStack_30 = 0;
      pCStack_28 = __this;
      pCStack_20 = pCVar15;
      if (g_data_057addbc == '\0') {
        pUStack_38 = (UnityEngine_Object_o *)0x42b585d;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057addbc = '\x01';
      }
      pUVar13 = *(UnityEngine_Object_o **)&(pCVar11->fields).HasOffset;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        pUStack_38 = (UnityEngine_Object_o *)0x42b5880;
        il2cpp_runtime_helper_02337ed0();
      }
      uVar8 = 0;
      pUStack_38 = (UnityEngine_Object_o *)0x42b588e;
      pUVar12 = pUVar13;
      bVar5 = UnityEngine_Object__op_Inequality(pUVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        lVar3 = *(long *)&(pCVar11->fields).HasOffset;
        if (lVar3 == 0) {
          pUStack_38 = (UnityEngine_Object_o *)0x42b58af;
          il2cpp_runtime_helper_022b2c90();
          uStack_48 = 0;
          pCStack_40 = pCVar11;
          pUStack_38 = pUVar13;
          if (g_data_057addbd == '\0') {
            pUStack_50 = (UnityEngine_Object_o *)0x42b58cd;
            il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
            g_data_057addbd = '\x01';
          }
          pUVar13 = pUVar12[3].monitor;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            pUStack_50 = (UnityEngine_Object_o *)0x42b58f0;
            il2cpp_runtime_helper_02337ed0();
          }
          uVar8 = 0;
          pUStack_50 = (UnityEngine_Object_o *)0x42b58fe;
          bVar5 = UnityEngine_Object__op_Inequality(pUVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar5 != '\0') {
            if (pUVar12[3].monitor == (void *)0x0) {
              pUStack_50 = (UnityEngine_Object_o *)0x42b591f;
              uStack_60 = il2cpp_runtime_helper_022b2c90();
              uStack_58 = 0;
              pUStack_50 = pUVar12;
              if (g_data_057addbe == '\0') {
                pcStack_68 = (code *)0x42b593c;
                il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
                g_data_057addbe = '\x01';
              }
              pUVar12 = pUVar13[3].monitor;
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                pcStack_68 = (code *)0x42b595f;
                il2cpp_runtime_helper_02337ed0();
              }
              pcStack_68 = (code *)0x42b596b;
              pUVar14 = pUVar12;
              bVar5 = UnityEngine_Object__op_Equality(pUVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
              bVar6 = (bool_conflict)CONCAT71((uint7)(uint3)((uint)bVar5 >> 8),1);
              if ((char)bVar5 == '\0') {
                pvVar4 = pUVar13[3].monitor;
                if (pvVar4 == (void *)0x0) {
                  pcStack_68 = Characters_HookUseable__GetHookState;
                  pcStack_68 = (code *)il2cpp_runtime_helper_022b2c90();
                  if (pUVar14[3].monitor != (void *)0x0) {
                    return *(bool_conflict *)((long)pUVar14[3].monitor + 0x20);
                  }
                  pUStack_70 = (UnityEngine_Object_o *)0x42b59a4;
                  uStack_80 = il2cpp_runtime_helper_022b2c90();
                  pUStack_78 = pUVar12;
                  pUStack_70 = pUVar13;
                  if (g_data_057addbf == '\0') {
                    pUStack_88 = (UnityEngine_Object_o *)0x42b59cc;
                    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
                    g_data_057addbf = '\x01';
                  }
                  pUVar13 = pUVar14[3].monitor;
                  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                    pUStack_88 = (UnityEngine_Object_o *)0x42b59ef;
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pMVar10 = (MethodInfo *)0x0;
                  pUStack_88 = (UnityEngine_Object_o *)0x42b59fb;
                  bVar5 = UnityEngine_Object__op_Inequality
                                    (pUVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                  if ((char)bVar5 == '\0') {
                    if (g_data_057a65d5 == '\0') {
                      pUStack_88 = (UnityEngine_Object_o *)0x42b5a2a;
                      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
                      g_data_057a65d5 = '\x01';
                    }
                    return (bool_conflict)*(undefined8 *)(TypeInfo_Vector3 + 0xb8);
                  }
                  pCVar15 = pUVar14[3].monitor;
                  if (pCVar15 != (Characters_Hook_o *)0x0) {
                    pUStack_88 = (UnityEngine_Object_o *)0x42b5a0d;
                    Characters_Hook__GetHookPosition(pCVar15,pMVar10);
                    return extraout_EAX;
                  }
                  pUStack_88 = (UnityEngine_Object_o *)0x42b5a58;
                  il2cpp_runtime_helper_022b2c90();
                  pUStack_90 = pUVar13;
                  pUStack_88 = pUVar14;
                  if (g_data_057addc0 == '\0') {
                    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_UnityEngine_Vector3);
                    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
                    g_data_057addc0 = '\x01';
                  }
                  pUVar13 = *(UnityEngine_Object_o **)&(pCVar15->fields).HasOffset;
                  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pMVar10 = (MethodInfo *)0x0;
                  bVar5 = UnityEngine_Object__op_Inequality
                                    (pUVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                  if ((char)bVar5 == '\0') {
                    uStack_a8 = 0;
                  }
                  else {
                    pCVar15 = *(Characters_Hook_o **)&(pCVar15->fields).HasOffset;
                    if (pCVar15 == (Characters_Hook_o *)0x0) {
                      il2cpp_runtime_helper_022b2c90();
                      if (g_data_057addc1 == '\0') {
                        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
                        g_data_057addc1 = '\x01';
                      }
                      pUVar13 = *(UnityEngine_Object_o **)&(pCVar15->fields).HasOffset;
                      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      uVar8 = 0;
                      bVar5 = UnityEngine_Object__op_Inequality
                                        (pUVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                      if ((char)bVar5 != '\0') {
                        lVar3 = *(long *)&(pCVar15->fields).HasOffset;
                        if (lVar3 == 0) {
                          il2cpp_runtime_helper_022b2c90();
                          if (pUVar13[3].monitor != (void *)0x0) {
                            return (bool_conflict)*(undefined8 *)((long)pUVar13[3].monitor + 0x38);
                          }
                          il2cpp_runtime_helper_022b2c90();
                          if (pUVar13[3].monitor != (void *)0x0) {
                            return (bool_conflict)*(undefined8 *)((long)pUVar13[3].monitor + 0x30);
                          }
                          il2cpp_runtime_helper_022b2c90();
                          if (g_data_057addc2 == '\0') {
                            il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
                            g_data_057addc2 = '\x01';
                          }
                          pUVar12 = pUVar13[3].monitor;
                          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                            il2cpp_runtime_helper_02337ed0();
                          }
                          bVar5 = UnityEngine_Object__op_Inequality
                                            (pUVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                          if ((char)bVar5 != '\0') {
                            ppvVar16 = &pUVar13[3].monitor;
                            pCVar15 = *ppvVar16;
                            if (pCVar15 == (Characters_Hook_o *)0x0) {
                              il2cpp_runtime_helper_022b2c90();
                              if (g_data_057addc3 == '\0') {
                                il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
                                g_data_057addc3 = '\x01';
                              }
                              pUVar13 = *(UnityEngine_Object_o **)&(pCVar15->fields).HasOffset;
                              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                                il2cpp_runtime_helper_02337ed0();
                              }
                              pbVar9 = &(pCVar15->fields).HasOffset;
                              bVar5 = UnityEngine_Object__op_Inequality
                                                (pUVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                              if ((char)bVar5 != '\0') {
                                pCVar11 = *(Characters_Hook_o **)pbVar9;
                                if (pCVar11 == (Characters_Hook_o *)0x0) {
                                  il2cpp_runtime_helper_022b2c90();
                                  if (g_data_057addc4 == '\0') {
                                    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
                                    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
                                    il2cpp_runtime_helper_023445d0(&MethodInfo_Hook_get_Current);
                                    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Characters_Hook_GetEnumerator);
                                    g_data_057addc4 = '\x01';
                                  }
                                  pSVar20 = (System_Collections_Generic_List_T__o *)0x0;
                                  pIVar21 = (Il2CppMethodPointer)0x0;
                                  pIVar22 = (Il2CppObject *)0x0;
                                  __this_00 = *(System_Collections_Generic_List_object__o **)
                                               &(pCVar11->fields)._hasHookParent;
                                  if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
label_042b5deb:
                                    auVar19 = il2cpp_runtime_helper_022b2c90();
                                    if (auVar19._8_4_ == 1) {
                                      plVar7 = (long *)__cxa_begin_catch(auVar19._0_8_);
                                      lVar3 = *plVar7;
                                      __cxa_end_catch();
                                      __this_03.fields._8_8_ = pIVar21;
                                      __this_03.fields._list = pSVar20;
                                      __this_03.fields._current = pIVar22;
                                      System_Collections_Generic_List_Enumerator_object___Dispose
                                                (__this_03,(MethodInfo_321A1C0 *)&stack0xfffffffffffffed8);
                                      if (lVar3 == 0) {
                                        return extraout_EAX_01;
                                      }
                                      il2cpp_runtime_helper_022fefe0(lVar3);
                                    }
                                    __this_04.fields._8_8_ = pIVar21;
                                    __this_04.fields._list = pSVar20;
                                    __this_04.fields._current = pIVar22;
                                    System_Collections_Generic_List_Enumerator_object___Dispose
                                              (__this_04,(MethodInfo_321A1C0 *)&stack0xfffffffffffffed8);
                                    _Unwind_Resume(auVar19._0_8_);
                                  }
                                  System_Collections_Generic_List_object___GetEnumerator
                                            ((System_Collections_Generic_List_Enumerator_T__o *)
                                             &stack0xfffffffffffffed8,__this_00,MethodInfo_List_1_T_Enumerator_Characters_Hook_GetEnumerator);
label_042b5d80:
                                  __this_01.fields._8_8_ = pIVar21;
                                  __this_01.fields._list = pSVar20;
                                  __this_01.fields._current = pIVar22;
                                  bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                                    (__this_01,(MethodInfo_321A1D0 *)&stack0xfffffffffffffed8)
                                  ;
                                  if ((char)bVar5 == '\0') {
                                    __this_02.fields._8_8_ = pIVar21;
                                    __this_02.fields._list = pSVar20;
                                    __this_02.fields._current = pIVar22;
                                    System_Collections_Generic_List_Enumerator_object___Dispose
                                              (__this_02,(MethodInfo_321A1C0 *)&stack0xfffffffffffffed8);
                                    return extraout_EAX_00;
                                  }
                                  if (pIVar22 != (Il2CppObject *)0x0) goto code_r0x042b5d99;
                                  il2cpp_runtime_helper_022b2c90();
                                  goto label_042b5de6;
                                }
                                iVar1 = (pCVar11->fields).State;
                                if (iVar1 == 1) {
                                  state = 3;
                                }
                                else {
                                  if (iVar1 != 2) goto label_042b5cc9;
                                  state = 4;
                                }
                                Characters_Hook__SetHookState(pCVar11,state,method_01);
                              }
label_042b5cc9:
                              (pCVar15->fields).HasOffset = 0;
                              (pCVar15->fields)._left = 0;
                              bVar5 = il2cpp_runtime_helper_022b4080(pbVar9,0);
                              return bVar5;
                            }
                            if ((pCVar15->fields).State == 2) {
                              Characters_Hook__SetHookState(pCVar15,4,method_00);
                              *ppvVar16 = (void *)0x0;
                              bVar5 = il2cpp_runtime_helper_022b4080(ppvVar16,0);
                              return bVar5;
                            }
                          }
                          return bVar5;
                        }
                        uVar8 = (uint)(*(char *)(lVar3 + 0x50) != '\0');
                      }
                      return uVar8;
                    }
                    UVar18 = Characters_Hook__GetHookPosition(pCVar15,pMVar10);
                    value.fields.x = UVar18.fields.z;
                    value.fields.y = (float)uVar17;
                    uStack_a8 = 0;
                    uStack_a0 = 0;
                    value.fields.z = 0.0;
                    __this_05.fields.value.fields.y = (float)(int)UVar18.fields._0_8_;
                    __this_05.fields.value.fields.z = (float)(int)((ulong)UVar18.fields._0_8_ >> 0x20);
                    __this_05.fields._0_8_ = &uStack_a8;
                    System_Nullable_Vector3____ctor(__this_05,value,MethodInfo_Nullable_1_UnityEngine_Vector3);
                  }
                  return (bool_conflict)uStack_a8;
                }
                bVar6 = (bool_conflict)CONCAT71((int7)((ulong)pvVar4 >> 8),*(int *)((long)pvVar4 + 0x20) == 0)
                ;
              }
              return bVar6;
            }
            uVar8 = (uint)(*(int *)((long)pUVar12[3].monitor + 0x20) == 1);
          }
          return uVar8;
        }
        uVar8 = (uint)(*(int *)(lVar3 + 0x20) != 0);
      }
      return uVar8;
    }
    uVar8 = (uint)((pCVar2->fields).State == 2);
  }
  return uVar8;
code_r0x042b5d99:
  if (*(int *)&pIVar22[2].klass != 0) {
    *(undefined4 *)&pIVar22[2].klass = 4;
    *(undefined4 *)&pIVar22[10].klass = 0;
    if (pIVar22[0xb].klass == (Il2CppClass *)0x0) {
label_042b5de6:
      il2cpp_runtime_helper_022b2c90();
      goto label_042b5deb;
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pIVar22[0xb].klass,0,(MethodInfo *)0x0);
  }
  goto label_042b5d80;
}


// Characters.HookUseable$$HasHook
// il2cpp: bool Characters_HookUseable__HasHook (Characters_HookUseable_o* __this, const MethodInfo* method);
// 0x42b5840

bool_conflict Characters_HookUseable__HasHook(Characters_HookUseable_o *__this,MethodInfo *method)

{
  int iVar1;
  Characters_Hook_o *pCVar2;
  long lVar3;
  UnityEngine_Object_o *pUVar4;
  void *pvVar5;
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar6;
  bool_conflict bVar7;
  bool_conflict extraout_EAX;
  bool_conflict extraout_EAX_00;
  bool_conflict extraout_EAX_01;
  long *plVar8;
  MethodInfo *method_00;
  MethodInfo *method_01;
  uint uVar9;
  bool_conflict *pbVar10;
  int32_t state;
  MethodInfo *pMVar11;
  Characters_Hook_o *pCVar12;
  UnityEngine_Object_o *pUVar13;
  UnityEngine_Object_o *pUVar14;
  Characters_Hook_o *pCVar15;
  void **ppvVar16;
  undefined8 in_XMM1_Qa;
  undefined4 uVar17;
  UnityEngine_Vector3_o UVar18;
  UnityEngine_Vector3_o value;
  System_Nullable_Vector3__o __this_05;
  undefined1 auVar19 [12];
  System_Collections_Generic_List_T__o *pSVar20;
  Il2CppMethodPointer pIVar21;
  Il2CppObject *pIVar22;
  undefined8 uStack_90;
  undefined8 uStack_88;
  UnityEngine_Object_o *pUStack_78;
  UnityEngine_Object_o *pUStack_70;
  undefined8 uStack_68;
  UnityEngine_Object_o *pUStack_60;
  UnityEngine_Object_o *pUStack_58;
  code *pcStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  Characters_Hook_o *pCStack_38;
  undefined8 uStack_30;
  Characters_HookUseable_o *pCStack_28;
  Characters_Hook_o *pCStack_20;
  
  uVar17 = (undefined4)((ulong)in_XMM1_Qa >> 0x20);
  if (g_data_057addbc == '\0') {
    pCStack_20 = (Characters_Hook_o *)0x42b585d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057addbc = '\x01';
  }
  pCVar15 = (__this->fields)._activeHook;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pCStack_20 = (Characters_Hook_o *)0x42b5880;
    il2cpp_runtime_helper_02337ed0();
  }
  uVar9 = 0;
  pCStack_20 = (Characters_Hook_o *)0x42b588e;
  pCVar12 = pCVar15;
  bVar6 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    pCVar2 = (__this->fields)._activeHook;
    if (pCVar2 == (Characters_Hook_o *)0x0) {
      pCStack_20 = (Characters_Hook_o *)0x42b58af;
      il2cpp_runtime_helper_022b2c90();
      uStack_30 = 0;
      pCStack_28 = __this;
      pCStack_20 = pCVar15;
      if (g_data_057addbd == '\0') {
        pCStack_38 = (Characters_Hook_o *)0x42b58cd;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057addbd = '\x01';
      }
      pUVar13 = *(UnityEngine_Object_o **)&(pCVar12->fields).HasOffset;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        pCStack_38 = (Characters_Hook_o *)0x42b58f0;
        il2cpp_runtime_helper_02337ed0();
      }
      uVar9 = 0;
      pCStack_38 = (Characters_Hook_o *)0x42b58fe;
      bVar6 = UnityEngine_Object__op_Inequality(pUVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar6 != '\0') {
        lVar3 = *(long *)&(pCVar12->fields).HasOffset;
        if (lVar3 == 0) {
          pCStack_38 = (Characters_Hook_o *)0x42b591f;
          uStack_48 = il2cpp_runtime_helper_022b2c90();
          uStack_40 = 0;
          pCStack_38 = pCVar12;
          if (g_data_057addbe == '\0') {
            pcStack_50 = (code *)0x42b593c;
            il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
            g_data_057addbe = '\x01';
          }
          pUVar4 = pUVar13[3].monitor;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            pcStack_50 = (code *)0x42b595f;
            il2cpp_runtime_helper_02337ed0();
          }
          pcStack_50 = (code *)0x42b596b;
          pUVar14 = pUVar4;
          bVar6 = UnityEngine_Object__op_Equality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          bVar7 = (bool_conflict)CONCAT71((uint7)(uint3)((uint)bVar6 >> 8),1);
          if ((char)bVar6 == '\0') {
            pvVar5 = pUVar13[3].monitor;
            if (pvVar5 == (void *)0x0) {
              pcStack_50 = Characters_HookUseable__GetHookState;
              pcStack_50 = (code *)il2cpp_runtime_helper_022b2c90();
              if (pUVar14[3].monitor != (void *)0x0) {
                return *(bool_conflict *)((long)pUVar14[3].monitor + 0x20);
              }
              pUStack_58 = (UnityEngine_Object_o *)0x42b59a4;
              uStack_68 = il2cpp_runtime_helper_022b2c90();
              pUStack_60 = pUVar4;
              pUStack_58 = pUVar13;
              if (g_data_057addbf == '\0') {
                pUStack_70 = (UnityEngine_Object_o *)0x42b59cc;
                il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
                g_data_057addbf = '\x01';
              }
              pUVar13 = pUVar14[3].monitor;
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                pUStack_70 = (UnityEngine_Object_o *)0x42b59ef;
                il2cpp_runtime_helper_02337ed0();
              }
              pMVar11 = (MethodInfo *)0x0;
              pUStack_70 = (UnityEngine_Object_o *)0x42b59fb;
              bVar6 = UnityEngine_Object__op_Inequality(pUVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
              ;
              if ((char)bVar6 == '\0') {
                if (g_data_057a65d5 == '\0') {
                  pUStack_70 = (UnityEngine_Object_o *)0x42b5a2a;
                  il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
                  g_data_057a65d5 = '\x01';
                }
                return (bool_conflict)*(undefined8 *)(TypeInfo_Vector3 + 0xb8);
              }
              pCVar15 = pUVar14[3].monitor;
              if (pCVar15 != (Characters_Hook_o *)0x0) {
                pUStack_70 = (UnityEngine_Object_o *)0x42b5a0d;
                Characters_Hook__GetHookPosition(pCVar15,pMVar11);
                return extraout_EAX;
              }
              pUStack_70 = (UnityEngine_Object_o *)0x42b5a58;
              il2cpp_runtime_helper_022b2c90();
              pUStack_78 = pUVar13;
              pUStack_70 = pUVar14;
              if (g_data_057addc0 == '\0') {
                il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_UnityEngine_Vector3);
                il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
                g_data_057addc0 = '\x01';
              }
              pUVar13 = *(UnityEngine_Object_o **)&(pCVar15->fields).HasOffset;
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pMVar11 = (MethodInfo *)0x0;
              bVar6 = UnityEngine_Object__op_Inequality(pUVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
              ;
              if ((char)bVar6 == '\0') {
                uStack_90 = 0;
              }
              else {
                pCVar15 = *(Characters_Hook_o **)&(pCVar15->fields).HasOffset;
                if (pCVar15 == (Characters_Hook_o *)0x0) {
                  il2cpp_runtime_helper_022b2c90();
                  if (g_data_057addc1 == '\0') {
                    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
                    g_data_057addc1 = '\x01';
                  }
                  pUVar13 = *(UnityEngine_Object_o **)&(pCVar15->fields).HasOffset;
                  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  uVar9 = 0;
                  bVar6 = UnityEngine_Object__op_Inequality
                                    (pUVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                  if ((char)bVar6 != '\0') {
                    lVar3 = *(long *)&(pCVar15->fields).HasOffset;
                    if (lVar3 == 0) {
                      il2cpp_runtime_helper_022b2c90();
                      if (pUVar13[3].monitor != (void *)0x0) {
                        return (bool_conflict)*(undefined8 *)((long)pUVar13[3].monitor + 0x38);
                      }
                      il2cpp_runtime_helper_022b2c90();
                      if (pUVar13[3].monitor != (void *)0x0) {
                        return (bool_conflict)*(undefined8 *)((long)pUVar13[3].monitor + 0x30);
                      }
                      il2cpp_runtime_helper_022b2c90();
                      if (g_data_057addc2 == '\0') {
                        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
                        g_data_057addc2 = '\x01';
                      }
                      pUVar4 = pUVar13[3].monitor;
                      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      bVar6 = UnityEngine_Object__op_Inequality
                                        (pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                      if ((char)bVar6 != '\0') {
                        ppvVar16 = &pUVar13[3].monitor;
                        pCVar15 = *ppvVar16;
                        if (pCVar15 == (Characters_Hook_o *)0x0) {
                          il2cpp_runtime_helper_022b2c90();
                          if (g_data_057addc3 == '\0') {
                            il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
                            g_data_057addc3 = '\x01';
                          }
                          pUVar13 = *(UnityEngine_Object_o **)&(pCVar15->fields).HasOffset;
                          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                            il2cpp_runtime_helper_02337ed0();
                          }
                          pbVar10 = &(pCVar15->fields).HasOffset;
                          bVar6 = UnityEngine_Object__op_Inequality
                                            (pUVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                          if ((char)bVar6 != '\0') {
                            pCVar12 = *(Characters_Hook_o **)pbVar10;
                            if (pCVar12 == (Characters_Hook_o *)0x0) {
                              il2cpp_runtime_helper_022b2c90();
                              if (g_data_057addc4 == '\0') {
                                il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
                                il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
                                il2cpp_runtime_helper_023445d0(&MethodInfo_Hook_get_Current);
                                il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Characters_Hook_GetEnumerator);
                                g_data_057addc4 = '\x01';
                              }
                              pSVar20 = (System_Collections_Generic_List_T__o *)0x0;
                              pIVar21 = (Il2CppMethodPointer)0x0;
                              pIVar22 = (Il2CppObject *)0x0;
                              __this_00 = *(System_Collections_Generic_List_object__o **)
                                           &(pCVar12->fields)._hasHookParent;
                              if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
label_042b5deb:
                                auVar19 = il2cpp_runtime_helper_022b2c90();
                                if (auVar19._8_4_ == 1) {
                                  plVar8 = (long *)__cxa_begin_catch(auVar19._0_8_);
                                  lVar3 = *plVar8;
                                  __cxa_end_catch();
                                  __this_03.fields._8_8_ = pIVar21;
                                  __this_03.fields._list = pSVar20;
                                  __this_03.fields._current = pIVar22;
                                  System_Collections_Generic_List_Enumerator_object___Dispose
                                            (__this_03,(MethodInfo_321A1C0 *)&stack0xfffffffffffffef0);
                                  if (lVar3 == 0) {
                                    return extraout_EAX_01;
                                  }
                                  il2cpp_runtime_helper_022fefe0(lVar3);
                                }
                                __this_04.fields._8_8_ = pIVar21;
                                __this_04.fields._list = pSVar20;
                                __this_04.fields._current = pIVar22;
                                System_Collections_Generic_List_Enumerator_object___Dispose
                                          (__this_04,(MethodInfo_321A1C0 *)&stack0xfffffffffffffef0);
                                _Unwind_Resume(auVar19._0_8_);
                              }
                              System_Collections_Generic_List_object___GetEnumerator
                                        ((System_Collections_Generic_List_Enumerator_T__o *)
                                         &stack0xfffffffffffffef0,__this_00,MethodInfo_List_1_T_Enumerator_Characters_Hook_GetEnumerator);
label_042b5d80:
                              __this_01.fields._8_8_ = pIVar21;
                              __this_01.fields._list = pSVar20;
                              __this_01.fields._current = pIVar22;
                              bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                                (__this_01,(MethodInfo_321A1D0 *)&stack0xfffffffffffffef0);
                              if ((char)bVar6 == '\0') {
                                __this_02.fields._8_8_ = pIVar21;
                                __this_02.fields._list = pSVar20;
                                __this_02.fields._current = pIVar22;
                                System_Collections_Generic_List_Enumerator_object___Dispose
                                          (__this_02,(MethodInfo_321A1C0 *)&stack0xfffffffffffffef0);
                                return extraout_EAX_00;
                              }
                              if (pIVar22 != (Il2CppObject *)0x0) goto code_r0x042b5d99;
                              il2cpp_runtime_helper_022b2c90();
                              goto label_042b5de6;
                            }
                            iVar1 = (pCVar12->fields).State;
                            if (iVar1 == 1) {
                              state = 3;
                            }
                            else {
                              if (iVar1 != 2) goto label_042b5cc9;
                              state = 4;
                            }
                            Characters_Hook__SetHookState(pCVar12,state,method_01);
                          }
label_042b5cc9:
                          (pCVar15->fields).HasOffset = 0;
                          (pCVar15->fields)._left = 0;
                          bVar6 = il2cpp_runtime_helper_022b4080(pbVar10,0);
                          return bVar6;
                        }
                        if ((pCVar15->fields).State == 2) {
                          Characters_Hook__SetHookState(pCVar15,4,method_00);
                          *ppvVar16 = (void *)0x0;
                          bVar6 = il2cpp_runtime_helper_022b4080(ppvVar16,0);
                          return bVar6;
                        }
                      }
                      return bVar6;
                    }
                    uVar9 = (uint)(*(char *)(lVar3 + 0x50) != '\0');
                  }
                  return uVar9;
                }
                UVar18 = Characters_Hook__GetHookPosition(pCVar15,pMVar11);
                value.fields.x = UVar18.fields.z;
                value.fields.y = (float)uVar17;
                uStack_90 = 0;
                uStack_88 = 0;
                value.fields.z = 0.0;
                __this_05.fields.value.fields.y = (float)(int)UVar18.fields._0_8_;
                __this_05.fields.value.fields.z = (float)(int)((ulong)UVar18.fields._0_8_ >> 0x20);
                __this_05.fields._0_8_ = &uStack_90;
                System_Nullable_Vector3____ctor(__this_05,value,MethodInfo_Nullable_1_UnityEngine_Vector3);
              }
              return (bool_conflict)uStack_90;
            }
            bVar7 = (bool_conflict)CONCAT71((int7)((ulong)pvVar5 >> 8),*(int *)((long)pvVar5 + 0x20) == 0);
          }
          return bVar7;
        }
        uVar9 = (uint)(*(int *)(lVar3 + 0x20) == 1);
      }
      return uVar9;
    }
    uVar9 = (uint)((pCVar2->fields).State != 0);
  }
  return uVar9;
code_r0x042b5d99:
  if (*(int *)&pIVar22[2].klass != 0) {
    *(undefined4 *)&pIVar22[2].klass = 4;
    *(undefined4 *)&pIVar22[10].klass = 0;
    if (pIVar22[0xb].klass == (Il2CppClass *)0x0) {
label_042b5de6:
      il2cpp_runtime_helper_022b2c90();
      goto label_042b5deb;
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pIVar22[0xb].klass,0,(MethodInfo *)0x0);
  }
  goto label_042b5d80;
}


// Characters.HookUseable$$IsHooking
// il2cpp: bool Characters_HookUseable__IsHooking (Characters_HookUseable_o* __this, const MethodInfo* method);
// 0x42b58b0

bool_conflict Characters_HookUseable__IsHooking(Characters_HookUseable_o *__this,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar3;
  bool_conflict bVar4;
  bool_conflict extraout_EAX;
  bool_conflict extraout_EAX_00;
  bool_conflict extraout_EAX_01;
  long *plVar5;
  MethodInfo *method_00;
  MethodInfo *method_01;
  uint uVar6;
  bool_conflict *pbVar7;
  int32_t state;
  MethodInfo *pMVar8;
  Characters_Hook_o *pCVar9;
  UnityEngine_Object_o *pUVar10;
  UnityEngine_Object_o *pUVar11;
  Characters_Hook_o *pCVar12;
  void **ppvVar13;
  undefined8 in_XMM1_Qa;
  undefined4 uVar14;
  UnityEngine_Vector3_o UVar15;
  UnityEngine_Vector3_o value;
  System_Nullable_Vector3__o __this_05;
  undefined1 auVar16 [12];
  System_Collections_Generic_List_T__o *pSVar17;
  Il2CppMethodPointer pIVar18;
  Il2CppObject *pIVar19;
  undefined8 uStack_78;
  undefined8 uStack_70;
  UnityEngine_Object_o *pUStack_60;
  UnityEngine_Object_o *pUStack_58;
  undefined8 uStack_50;
  UnityEngine_Object_o *pUStack_48;
  Characters_Hook_o *pCStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  Characters_HookUseable_o *pCStack_20;
  
  uVar14 = (undefined4)((ulong)in_XMM1_Qa >> 0x20);
  if (g_data_057addbd == '\0') {
    pCStack_20 = (Characters_HookUseable_o *)0x42b58cd;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057addbd = '\x01';
  }
  pCVar9 = (__this->fields)._activeHook;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pCStack_20 = (Characters_HookUseable_o *)0x42b58f0;
    il2cpp_runtime_helper_02337ed0();
  }
  uVar6 = 0;
  pCStack_20 = (Characters_HookUseable_o *)0x42b58fe;
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    pCVar12 = (__this->fields)._activeHook;
    if (pCVar12 == (Characters_Hook_o *)0x0) {
      pCStack_20 = (Characters_HookUseable_o *)0x42b591f;
      uStack_30 = il2cpp_runtime_helper_022b2c90();
      uStack_28 = 0;
      pCStack_20 = __this;
      if (g_data_057addbe == '\0') {
        pcStack_38 = (code *)0x42b593c;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057addbe = '\x01';
      }
      pUVar11 = *(UnityEngine_Object_o **)&(pCVar9->fields).HasOffset;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        pcStack_38 = (code *)0x42b595f;
        il2cpp_runtime_helper_02337ed0();
      }
      pcStack_38 = (code *)0x42b596b;
      pUVar10 = pUVar11;
      bVar3 = UnityEngine_Object__op_Equality(pUVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      bVar4 = (bool_conflict)CONCAT71((uint7)(uint3)((uint)bVar3 >> 8),1);
      if ((char)bVar3 == '\0') {
        lVar2 = *(long *)&(pCVar9->fields).HasOffset;
        if (lVar2 == 0) {
          pcStack_38 = Characters_HookUseable__GetHookState;
          pcStack_38 = (code *)il2cpp_runtime_helper_022b2c90();
          if (pUVar10[3].monitor != (void *)0x0) {
            return *(bool_conflict *)((long)pUVar10[3].monitor + 0x20);
          }
          pCStack_40 = (Characters_Hook_o *)0x42b59a4;
          uStack_50 = il2cpp_runtime_helper_022b2c90();
          pUStack_48 = pUVar11;
          pCStack_40 = pCVar9;
          if (g_data_057addbf == '\0') {
            pUStack_58 = (UnityEngine_Object_o *)0x42b59cc;
            il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
            g_data_057addbf = '\x01';
          }
          pUVar11 = pUVar10[3].monitor;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            pUStack_58 = (UnityEngine_Object_o *)0x42b59ef;
            il2cpp_runtime_helper_02337ed0();
          }
          pMVar8 = (MethodInfo *)0x0;
          pUStack_58 = (UnityEngine_Object_o *)0x42b59fb;
          bVar3 = UnityEngine_Object__op_Inequality(pUVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar3 == '\0') {
            if (g_data_057a65d5 == '\0') {
              pUStack_58 = (UnityEngine_Object_o *)0x42b5a2a;
              il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
              g_data_057a65d5 = '\x01';
            }
            return (bool_conflict)*(undefined8 *)(TypeInfo_Vector3 + 0xb8);
          }
          pCVar9 = pUVar10[3].monitor;
          if (pCVar9 != (Characters_Hook_o *)0x0) {
            pUStack_58 = (UnityEngine_Object_o *)0x42b5a0d;
            Characters_Hook__GetHookPosition(pCVar9,pMVar8);
            return extraout_EAX;
          }
          pUStack_58 = (UnityEngine_Object_o *)0x42b5a58;
          il2cpp_runtime_helper_022b2c90();
          pUStack_60 = pUVar11;
          pUStack_58 = pUVar10;
          if (g_data_057addc0 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_UnityEngine_Vector3);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
            g_data_057addc0 = '\x01';
          }
          pUVar11 = *(UnityEngine_Object_o **)&(pCVar9->fields).HasOffset;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pMVar8 = (MethodInfo *)0x0;
          bVar3 = UnityEngine_Object__op_Inequality(pUVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar3 == '\0') {
            uStack_78 = 0;
          }
          else {
            pCVar9 = *(Characters_Hook_o **)&(pCVar9->fields).HasOffset;
            if (pCVar9 == (Characters_Hook_o *)0x0) {
              il2cpp_runtime_helper_022b2c90();
              if (g_data_057addc1 == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
                g_data_057addc1 = '\x01';
              }
              pUVar11 = *(UnityEngine_Object_o **)&(pCVar9->fields).HasOffset;
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              uVar6 = 0;
              bVar3 = UnityEngine_Object__op_Inequality(pUVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
              ;
              if ((char)bVar3 != '\0') {
                lVar2 = *(long *)&(pCVar9->fields).HasOffset;
                if (lVar2 == 0) {
                  il2cpp_runtime_helper_022b2c90();
                  if (pUVar11[3].monitor != (void *)0x0) {
                    return (bool_conflict)*(undefined8 *)((long)pUVar11[3].monitor + 0x38);
                  }
                  il2cpp_runtime_helper_022b2c90();
                  if (pUVar11[3].monitor != (void *)0x0) {
                    return (bool_conflict)*(undefined8 *)((long)pUVar11[3].monitor + 0x30);
                  }
                  il2cpp_runtime_helper_022b2c90();
                  if (g_data_057addc2 == '\0') {
                    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
                    g_data_057addc2 = '\x01';
                  }
                  pUVar10 = pUVar11[3].monitor;
                  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  bVar3 = UnityEngine_Object__op_Inequality
                                    (pUVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                  if ((char)bVar3 != '\0') {
                    ppvVar13 = &pUVar11[3].monitor;
                    pCVar9 = *ppvVar13;
                    if (pCVar9 == (Characters_Hook_o *)0x0) {
                      il2cpp_runtime_helper_022b2c90();
                      if (g_data_057addc3 == '\0') {
                        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
                        g_data_057addc3 = '\x01';
                      }
                      pUVar11 = *(UnityEngine_Object_o **)&(pCVar9->fields).HasOffset;
                      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      pbVar7 = &(pCVar9->fields).HasOffset;
                      bVar3 = UnityEngine_Object__op_Inequality
                                        (pUVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                      if ((char)bVar3 != '\0') {
                        pCVar12 = *(Characters_Hook_o **)pbVar7;
                        if (pCVar12 == (Characters_Hook_o *)0x0) {
                          il2cpp_runtime_helper_022b2c90();
                          if (g_data_057addc4 == '\0') {
                            il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
                            il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
                            il2cpp_runtime_helper_023445d0(&MethodInfo_Hook_get_Current);
                            il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Characters_Hook_GetEnumerator);
                            g_data_057addc4 = '\x01';
                          }
                          pSVar17 = (System_Collections_Generic_List_T__o *)0x0;
                          pIVar18 = (Il2CppMethodPointer)0x0;
                          pIVar19 = (Il2CppObject *)0x0;
                          __this_00 = *(System_Collections_Generic_List_object__o **)
                                       &(pCVar12->fields)._hasHookParent;
                          if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
label_042b5deb:
                            auVar16 = il2cpp_runtime_helper_022b2c90();
                            if (auVar16._8_4_ == 1) {
                              plVar5 = (long *)__cxa_begin_catch(auVar16._0_8_);
                              lVar2 = *plVar5;
                              __cxa_end_catch();
                              __this_03.fields._8_8_ = pIVar18;
                              __this_03.fields._list = pSVar17;
                              __this_03.fields._current = pIVar19;
                              System_Collections_Generic_List_Enumerator_object___Dispose
                                        (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff08);
                              if (lVar2 == 0) {
                                return extraout_EAX_01;
                              }
                              il2cpp_runtime_helper_022fefe0(lVar2);
                            }
                            __this_04.fields._8_8_ = pIVar18;
                            __this_04.fields._list = pSVar17;
                            __this_04.fields._current = pIVar19;
                            System_Collections_Generic_List_Enumerator_object___Dispose
                                      (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff08);
                            _Unwind_Resume(auVar16._0_8_);
                          }
                          System_Collections_Generic_List_object___GetEnumerator
                                    ((System_Collections_Generic_List_Enumerator_T__o *)
                                     &stack0xffffffffffffff08,__this_00,MethodInfo_List_1_T_Enumerator_Characters_Hook_GetEnumerator);
label_042b5d80:
                          __this_01.fields._8_8_ = pIVar18;
                          __this_01.fields._list = pSVar17;
                          __this_01.fields._current = pIVar19;
                          bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                            (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff08);
                          if ((char)bVar3 == '\0') {
                            __this_02.fields._8_8_ = pIVar18;
                            __this_02.fields._list = pSVar17;
                            __this_02.fields._current = pIVar19;
                            System_Collections_Generic_List_Enumerator_object___Dispose
                                      (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff08);
                            return extraout_EAX_00;
                          }
                          if (pIVar19 != (Il2CppObject *)0x0) goto code_r0x042b5d99;
                          il2cpp_runtime_helper_022b2c90();
                          goto label_042b5de6;
                        }
                        iVar1 = (pCVar12->fields).State;
                        if (iVar1 == 1) {
                          state = 3;
                        }
                        else {
                          if (iVar1 != 2) goto label_042b5cc9;
                          state = 4;
                        }
                        Characters_Hook__SetHookState(pCVar12,state,method_01);
                      }
label_042b5cc9:
                      (pCVar9->fields).HasOffset = 0;
                      (pCVar9->fields)._left = 0;
                      bVar3 = il2cpp_runtime_helper_022b4080(pbVar7,0);
                      return bVar3;
                    }
                    if ((pCVar9->fields).State == 2) {
                      Characters_Hook__SetHookState(pCVar9,4,method_00);
                      *ppvVar13 = (void *)0x0;
                      bVar3 = il2cpp_runtime_helper_022b4080(ppvVar13,0);
                      return bVar3;
                    }
                  }
                  return bVar3;
                }
                uVar6 = (uint)(*(char *)(lVar2 + 0x50) != '\0');
              }
              return uVar6;
            }
            UVar15 = Characters_Hook__GetHookPosition(pCVar9,pMVar8);
            value.fields.x = UVar15.fields.z;
            value.fields.y = (float)uVar14;
            uStack_78 = 0;
            uStack_70 = 0;
            value.fields.z = 0.0;
            __this_05.fields.value.fields.y = (float)(int)UVar15.fields._0_8_;
            __this_05.fields.value.fields.z = (float)(int)((ulong)UVar15.fields._0_8_ >> 0x20);
            __this_05.fields._0_8_ = &uStack_78;
            System_Nullable_Vector3____ctor(__this_05,value,MethodInfo_Nullable_1_UnityEngine_Vector3);
          }
          return (bool_conflict)uStack_78;
        }
        bVar4 = (bool_conflict)CONCAT71((int7)((ulong)lVar2 >> 8),*(int *)(lVar2 + 0x20) == 0);
      }
      return bVar4;
    }
    uVar6 = (uint)((pCVar12->fields).State == 1);
  }
  return uVar6;
code_r0x042b5d99:
  if (*(int *)&pIVar19[2].klass != 0) {
    *(undefined4 *)&pIVar19[2].klass = 4;
    *(undefined4 *)&pIVar19[10].klass = 0;
    if (pIVar19[0xb].klass == (Il2CppClass *)0x0) {
label_042b5de6:
      il2cpp_runtime_helper_022b2c90();
      goto label_042b5deb;
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pIVar19[0xb].klass,0,(MethodInfo *)0x0);
  }
  goto label_042b5d80;
}


// Characters.HookUseable$$IsReady
// il2cpp: bool Characters_HookUseable__IsReady (Characters_HookUseable_o* __this, const MethodInfo* method);
// 0x42b5920

bool_conflict Characters_HookUseable__IsReady(Characters_HookUseable_o *__this,MethodInfo *method)

{
  int iVar1;
  Characters_Hook_o *pCVar2;
  long lVar3;
  UnityEngine_Object_o *x;
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar4;
  bool_conflict bVar5;
  bool_conflict extraout_EAX;
  bool_conflict extraout_EAX_00;
  bool_conflict extraout_EAX_01;
  long *plVar6;
  MethodInfo *method_00;
  MethodInfo *method_01;
  uint uVar7;
  bool_conflict *pbVar8;
  int32_t state;
  MethodInfo *pMVar9;
  Characters_Hook_o *pCVar10;
  Characters_Hook_o *pCVar11;
  UnityEngine_Object_o *pUVar12;
  void **ppvVar13;
  undefined8 in_XMM1_Qa;
  undefined4 uVar14;
  UnityEngine_Vector3_o UVar15;
  UnityEngine_Vector3_o value;
  System_Nullable_Vector3__o __this_05;
  undefined1 auVar16 [12];
  System_Collections_Generic_List_T__o *pSVar17;
  Il2CppMethodPointer pIVar18;
  Il2CppObject *pIVar19;
  undefined8 uStack_60;
  undefined8 uStack_58;
  UnityEngine_Object_o *pUStack_48;
  Characters_Hook_o *pCStack_40;
  undefined8 uStack_38;
  Characters_Hook_o *pCStack_30;
  Characters_HookUseable_o *pCStack_28;
  code *pcStack_20;
  
  uVar14 = (undefined4)((ulong)in_XMM1_Qa >> 0x20);
  if (g_data_057addbe == '\0') {
    pcStack_20 = (code *)0x42b593c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057addbe = '\x01';
  }
  pCVar11 = (__this->fields)._activeHook;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pcStack_20 = (code *)0x42b595f;
    il2cpp_runtime_helper_02337ed0();
  }
  pcStack_20 = (code *)0x42b596b;
  pCVar10 = pCVar11;
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pCVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  bVar5 = (bool_conflict)CONCAT71((uint7)(uint3)((uint)bVar4 >> 8),1);
  if ((char)bVar4 == '\0') {
    pCVar2 = (__this->fields)._activeHook;
    if (pCVar2 == (Characters_Hook_o *)0x0) {
      pcStack_20 = Characters_HookUseable__GetHookState;
      pcStack_20 = (code *)il2cpp_runtime_helper_022b2c90();
      lVar3 = *(long *)&(pCVar10->fields).HasOffset;
      if (lVar3 != 0) {
        return *(bool_conflict *)(lVar3 + 0x20);
      }
      pCStack_28 = (Characters_HookUseable_o *)0x42b59a4;
      uStack_38 = il2cpp_runtime_helper_022b2c90();
      pCStack_30 = pCVar11;
      pCStack_28 = __this;
      if (g_data_057addbf == '\0') {
        pCStack_40 = (Characters_Hook_o *)0x42b59cc;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057addbf = '\x01';
      }
      pUVar12 = *(UnityEngine_Object_o **)&(pCVar10->fields).HasOffset;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        pCStack_40 = (Characters_Hook_o *)0x42b59ef;
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar9 = (MethodInfo *)0x0;
      pCStack_40 = (Characters_Hook_o *)0x42b59fb;
      bVar4 = UnityEngine_Object__op_Inequality(pUVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar4 == '\0') {
        if (g_data_057a65d5 == '\0') {
          pCStack_40 = (Characters_Hook_o *)0x42b5a2a;
          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
          g_data_057a65d5 = '\x01';
        }
        return (bool_conflict)*(undefined8 *)(TypeInfo_Vector3 + 0xb8);
      }
      pCVar11 = *(Characters_Hook_o **)&(pCVar10->fields).HasOffset;
      if (pCVar11 != (Characters_Hook_o *)0x0) {
        pCStack_40 = (Characters_Hook_o *)0x42b5a0d;
        Characters_Hook__GetHookPosition(pCVar11,pMVar9);
        return extraout_EAX;
      }
      pCStack_40 = (Characters_Hook_o *)0x42b5a58;
      il2cpp_runtime_helper_022b2c90();
      pUStack_48 = pUVar12;
      pCStack_40 = pCVar10;
      if (g_data_057addc0 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_UnityEngine_Vector3);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057addc0 = '\x01';
      }
      pUVar12 = *(UnityEngine_Object_o **)&(pCVar11->fields).HasOffset;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar9 = (MethodInfo *)0x0;
      bVar4 = UnityEngine_Object__op_Inequality(pUVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar4 == '\0') {
        uStack_60 = 0;
      }
      else {
        pCVar11 = *(Characters_Hook_o **)&(pCVar11->fields).HasOffset;
        if (pCVar11 == (Characters_Hook_o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          if (g_data_057addc1 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
            g_data_057addc1 = '\x01';
          }
          pUVar12 = *(UnityEngine_Object_o **)&(pCVar11->fields).HasOffset;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          uVar7 = 0;
          bVar4 = UnityEngine_Object__op_Inequality(pUVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            lVar3 = *(long *)&(pCVar11->fields).HasOffset;
            if (lVar3 == 0) {
              il2cpp_runtime_helper_022b2c90();
              if (pUVar12[3].monitor != (void *)0x0) {
                return (bool_conflict)*(undefined8 *)((long)pUVar12[3].monitor + 0x38);
              }
              il2cpp_runtime_helper_022b2c90();
              if (pUVar12[3].monitor != (void *)0x0) {
                return (bool_conflict)*(undefined8 *)((long)pUVar12[3].monitor + 0x30);
              }
              il2cpp_runtime_helper_022b2c90();
              if (g_data_057addc2 == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
                g_data_057addc2 = '\x01';
              }
              x = pUVar12[3].monitor;
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              bVar4 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
              if ((char)bVar4 != '\0') {
                ppvVar13 = &pUVar12[3].monitor;
                pCVar11 = *ppvVar13;
                if (pCVar11 == (Characters_Hook_o *)0x0) {
                  il2cpp_runtime_helper_022b2c90();
                  if (g_data_057addc3 == '\0') {
                    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
                    g_data_057addc3 = '\x01';
                  }
                  pUVar12 = *(UnityEngine_Object_o **)&(pCVar11->fields).HasOffset;
                  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pbVar8 = &(pCVar11->fields).HasOffset;
                  bVar4 = UnityEngine_Object__op_Inequality
                                    (pUVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                  if ((char)bVar4 != '\0') {
                    pCVar10 = *(Characters_Hook_o **)pbVar8;
                    if (pCVar10 == (Characters_Hook_o *)0x0) {
                      il2cpp_runtime_helper_022b2c90();
                      if (g_data_057addc4 == '\0') {
                        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
                        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
                        il2cpp_runtime_helper_023445d0(&MethodInfo_Hook_get_Current);
                        il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Characters_Hook_GetEnumerator);
                        g_data_057addc4 = '\x01';
                      }
                      pSVar17 = (System_Collections_Generic_List_T__o *)0x0;
                      pIVar18 = (Il2CppMethodPointer)0x0;
                      pIVar19 = (Il2CppObject *)0x0;
                      __this_00 = *(System_Collections_Generic_List_object__o **)
                                   &(pCVar10->fields)._hasHookParent;
                      if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
label_042b5deb:
                        auVar16 = il2cpp_runtime_helper_022b2c90();
                        if (auVar16._8_4_ == 1) {
                          plVar6 = (long *)__cxa_begin_catch(auVar16._0_8_);
                          lVar3 = *plVar6;
                          __cxa_end_catch();
                          __this_03.fields._8_8_ = pIVar18;
                          __this_03.fields._list = pSVar17;
                          __this_03.fields._current = pIVar19;
                          System_Collections_Generic_List_Enumerator_object___Dispose
                                    (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff20);
                          if (lVar3 == 0) {
                            return extraout_EAX_01;
                          }
                          il2cpp_runtime_helper_022fefe0(lVar3);
                        }
                        __this_04.fields._8_8_ = pIVar18;
                        __this_04.fields._list = pSVar17;
                        __this_04.fields._current = pIVar19;
                        System_Collections_Generic_List_Enumerator_object___Dispose
                                  (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff20);
                        _Unwind_Resume(auVar16._0_8_);
                      }
                      System_Collections_Generic_List_object___GetEnumerator
                                ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffff20,
                                 __this_00,MethodInfo_List_1_T_Enumerator_Characters_Hook_GetEnumerator);
label_042b5d80:
                      __this_01.fields._8_8_ = pIVar18;
                      __this_01.fields._list = pSVar17;
                      __this_01.fields._current = pIVar19;
                      bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                        (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff20);
                      if ((char)bVar4 == '\0') {
                        __this_02.fields._8_8_ = pIVar18;
                        __this_02.fields._list = pSVar17;
                        __this_02.fields._current = pIVar19;
                        System_Collections_Generic_List_Enumerator_object___Dispose
                                  (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff20);
                        return extraout_EAX_00;
                      }
                      if (pIVar19 != (Il2CppObject *)0x0) goto code_r0x042b5d99;
                      il2cpp_runtime_helper_022b2c90();
                      goto label_042b5de6;
                    }
                    iVar1 = (pCVar10->fields).State;
                    if (iVar1 == 1) {
                      state = 3;
                    }
                    else {
                      if (iVar1 != 2) goto label_042b5cc9;
                      state = 4;
                    }
                    Characters_Hook__SetHookState(pCVar10,state,method_01);
                  }
label_042b5cc9:
                  (pCVar11->fields).HasOffset = 0;
                  (pCVar11->fields)._left = 0;
                  bVar4 = il2cpp_runtime_helper_022b4080(pbVar8,0);
                  return bVar4;
                }
                if ((pCVar11->fields).State == 2) {
                  Characters_Hook__SetHookState(pCVar11,4,method_00);
                  *ppvVar13 = (void *)0x0;
                  bVar4 = il2cpp_runtime_helper_022b4080(ppvVar13,0);
                  return bVar4;
                }
              }
              return bVar4;
            }
            uVar7 = (uint)(*(char *)(lVar3 + 0x50) != '\0');
          }
          return uVar7;
        }
        UVar15 = Characters_Hook__GetHookPosition(pCVar11,pMVar9);
        value.fields.x = UVar15.fields.z;
        value.fields.y = (float)uVar14;
        uStack_60 = 0;
        uStack_58 = 0;
        value.fields.z = 0.0;
        __this_05.fields.value.fields.y = (float)(int)UVar15.fields._0_8_;
        __this_05.fields.value.fields.z = (float)(int)((ulong)UVar15.fields._0_8_ >> 0x20);
        __this_05.fields._0_8_ = &uStack_60;
        System_Nullable_Vector3____ctor(__this_05,value,MethodInfo_Nullable_1_UnityEngine_Vector3);
      }
      return (bool_conflict)uStack_60;
    }
    bVar5 = (bool_conflict)CONCAT71((int7)((ulong)pCVar2 >> 8),(pCVar2->fields).State == 0);
  }
  return bVar5;
code_r0x042b5d99:
  if (*(int *)&pIVar19[2].klass != 0) {
    *(undefined4 *)&pIVar19[2].klass = 4;
    *(undefined4 *)&pIVar19[10].klass = 0;
    if (pIVar19[0xb].klass == (Il2CppClass *)0x0) {
label_042b5de6:
      il2cpp_runtime_helper_022b2c90();
      goto label_042b5deb;
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pIVar19[0xb].klass,0,(MethodInfo *)0x0);
  }
  goto label_042b5d80;
}


// Characters.HookUseable$$GetHookState
// il2cpp: int32_t Characters_HookUseable__GetHookState (Characters_HookUseable_o* __this, const MethodInfo* method);
// 0x42b5990

int32_t Characters_HookUseable__GetHookState(Characters_HookUseable_o *__this,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  UnityEngine_Object_o *x;
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar3;
  int32_t extraout_EAX;
  int32_t iVar4;
  int32_t extraout_EAX_00;
  int32_t extraout_EAX_01;
  long *plVar5;
  MethodInfo *method_00;
  MethodInfo *method_01;
  uint uVar6;
  bool_conflict *pbVar7;
  MethodInfo *pMVar8;
  Characters_Hook_o *pCVar9;
  Characters_Hook_o *pCVar10;
  UnityEngine_Object_o *pUVar11;
  void **ppvVar12;
  undefined8 in_XMM1_Qa;
  undefined4 uVar13;
  UnityEngine_Vector3_o UVar14;
  UnityEngine_Vector3_o value;
  System_Nullable_Vector3__o __this_05;
  undefined1 auVar15 [12];
  System_Collections_Generic_List_T__o *pSVar16;
  Il2CppMethodPointer pIVar17;
  Il2CppObject *pIVar18;
  undefined8 uStack_48;
  undefined8 uStack_40;
  Characters_Hook_o *pCStack_30;
  Characters_HookUseable_o *pCStack_28;
  undefined8 uStack_20;
  
  uVar13 = (undefined4)((ulong)in_XMM1_Qa >> 0x20);
  pCVar10 = (__this->fields)._activeHook;
  if (pCVar10 != (Characters_Hook_o *)0x0) {
    return (pCVar10->fields).State;
  }
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057addbf == '\0') {
    pCStack_28 = (Characters_HookUseable_o *)0x42b59cc;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057addbf = '\x01';
  }
  pCVar10 = (__this->fields)._activeHook;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pCStack_28 = (Characters_HookUseable_o *)0x42b59ef;
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar8 = (MethodInfo *)0x0;
  pCStack_28 = (Characters_HookUseable_o *)0x42b59fb;
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    if (g_data_057a65d5 == '\0') {
      pCStack_28 = (Characters_HookUseable_o *)0x42b5a2a;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057a65d5 = '\x01';
    }
    return (int32_t)*(undefined8 *)(TypeInfo_Vector3 + 0xb8);
  }
  pCVar9 = (__this->fields)._activeHook;
  if (pCVar9 != (Characters_Hook_o *)0x0) {
    pCStack_28 = (Characters_HookUseable_o *)0x42b5a0d;
    Characters_Hook__GetHookPosition(pCVar9,pMVar8);
    return extraout_EAX;
  }
  pCStack_28 = (Characters_HookUseable_o *)0x42b5a58;
  il2cpp_runtime_helper_022b2c90();
  pCStack_30 = pCVar10;
  pCStack_28 = __this;
  if (g_data_057addc0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_UnityEngine_Vector3);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057addc0 = '\x01';
  }
  pUVar11 = *(UnityEngine_Object_o **)&(pCVar9->fields).HasOffset;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar8 = (MethodInfo *)0x0;
  bVar3 = UnityEngine_Object__op_Inequality(pUVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    uStack_48 = 0;
  }
  else {
    pCVar10 = *(Characters_Hook_o **)&(pCVar9->fields).HasOffset;
    if (pCVar10 == (Characters_Hook_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057addc1 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057addc1 = '\x01';
      }
      pUVar11 = *(UnityEngine_Object_o **)&(pCVar10->fields).HasOffset;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      uVar6 = 0;
      bVar3 = UnityEngine_Object__op_Inequality(pUVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar3 != '\0') {
        lVar2 = *(long *)&(pCVar10->fields).HasOffset;
        if (lVar2 == 0) {
          il2cpp_runtime_helper_022b2c90();
          if (pUVar11[3].monitor != (void *)0x0) {
            return (int32_t)*(undefined8 *)((long)pUVar11[3].monitor + 0x38);
          }
          il2cpp_runtime_helper_022b2c90();
          if (pUVar11[3].monitor != (void *)0x0) {
            return (int32_t)*(undefined8 *)((long)pUVar11[3].monitor + 0x30);
          }
          il2cpp_runtime_helper_022b2c90();
          if (g_data_057addc2 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
            g_data_057addc2 = '\x01';
          }
          x = pUVar11[3].monitor;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar3 != '\0') {
            ppvVar12 = &pUVar11[3].monitor;
            pCVar10 = *ppvVar12;
            if (pCVar10 == (Characters_Hook_o *)0x0) {
              il2cpp_runtime_helper_022b2c90();
              if (g_data_057addc3 == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
                g_data_057addc3 = '\x01';
              }
              pUVar11 = *(UnityEngine_Object_o **)&(pCVar10->fields).HasOffset;
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pbVar7 = &(pCVar10->fields).HasOffset;
              bVar3 = UnityEngine_Object__op_Inequality(pUVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
              ;
              if ((char)bVar3 != '\0') {
                pCVar9 = *(Characters_Hook_o **)pbVar7;
                if (pCVar9 == (Characters_Hook_o *)0x0) {
                  il2cpp_runtime_helper_022b2c90();
                  if (g_data_057addc4 == '\0') {
                    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
                    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
                    il2cpp_runtime_helper_023445d0(&MethodInfo_Hook_get_Current);
                    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Characters_Hook_GetEnumerator);
                    g_data_057addc4 = '\x01';
                  }
                  pSVar16 = (System_Collections_Generic_List_T__o *)0x0;
                  pIVar17 = (Il2CppMethodPointer)0x0;
                  pIVar18 = (Il2CppObject *)0x0;
                  __this_00 = *(System_Collections_Generic_List_object__o **)&(pCVar9->fields)._hasHookParent;
                  if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
label_042b5deb:
                    auVar15 = il2cpp_runtime_helper_022b2c90();
                    if (auVar15._8_4_ == 1) {
                      plVar5 = (long *)__cxa_begin_catch(auVar15._0_8_);
                      lVar2 = *plVar5;
                      __cxa_end_catch();
                      __this_03.fields._8_8_ = pIVar17;
                      __this_03.fields._list = pSVar16;
                      __this_03.fields._current = pIVar18;
                      System_Collections_Generic_List_Enumerator_object___Dispose
                                (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff38);
                      if (lVar2 == 0) {
                        return extraout_EAX_01;
                      }
                      il2cpp_runtime_helper_022fefe0(lVar2);
                    }
                    __this_04.fields._8_8_ = pIVar17;
                    __this_04.fields._list = pSVar16;
                    __this_04.fields._current = pIVar18;
                    System_Collections_Generic_List_Enumerator_object___Dispose
                              (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff38);
                    _Unwind_Resume(auVar15._0_8_);
                  }
                  System_Collections_Generic_List_object___GetEnumerator
                            ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffff38,
                             __this_00,MethodInfo_List_1_T_Enumerator_Characters_Hook_GetEnumerator);
label_042b5d80:
                  __this_01.fields._8_8_ = pIVar17;
                  __this_01.fields._list = pSVar16;
                  __this_01.fields._current = pIVar18;
                  bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                    (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff38);
                  if ((char)bVar3 == '\0') {
                    __this_02.fields._8_8_ = pIVar17;
                    __this_02.fields._list = pSVar16;
                    __this_02.fields._current = pIVar18;
                    System_Collections_Generic_List_Enumerator_object___Dispose
                              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff38);
                    return extraout_EAX_00;
                  }
                  if (pIVar18 != (Il2CppObject *)0x0) goto code_r0x042b5d99;
                  il2cpp_runtime_helper_022b2c90();
                  goto label_042b5de6;
                }
                iVar1 = (pCVar9->fields).State;
                if (iVar1 == 1) {
                  iVar4 = 3;
                }
                else {
                  if (iVar1 != 2) goto label_042b5cc9;
                  iVar4 = 4;
                }
                Characters_Hook__SetHookState(pCVar9,iVar4,method_01);
              }
label_042b5cc9:
              (pCVar10->fields).HasOffset = 0;
              (pCVar10->fields)._left = 0;
              iVar4 = il2cpp_runtime_helper_022b4080(pbVar7,0);
              return iVar4;
            }
            if ((pCVar10->fields).State == 2) {
              Characters_Hook__SetHookState(pCVar10,4,method_00);
              *ppvVar12 = (void *)0x0;
              iVar4 = il2cpp_runtime_helper_022b4080(ppvVar12,0);
              return iVar4;
            }
          }
          return bVar3;
        }
        uVar6 = (uint)(*(char *)(lVar2 + 0x50) != '\0');
      }
      return uVar6;
    }
    UVar14 = Characters_Hook__GetHookPosition(pCVar10,pMVar8);
    value.fields.x = UVar14.fields.z;
    value.fields.y = (float)uVar13;
    uStack_48 = 0;
    uStack_40 = 0;
    value.fields.z = 0.0;
    __this_05.fields.value.fields.y = (float)(int)UVar14.fields._0_8_;
    __this_05.fields.value.fields.z = (float)(int)((ulong)UVar14.fields._0_8_ >> 0x20);
    __this_05.fields._0_8_ = &uStack_48;
    System_Nullable_Vector3____ctor(__this_05,value,MethodInfo_Nullable_1_UnityEngine_Vector3);
  }
  return (int32_t)uStack_48;
code_r0x042b5d99:
  if (*(int *)&pIVar18[2].klass != 0) {
    *(undefined4 *)&pIVar18[2].klass = 4;
    *(undefined4 *)&pIVar18[10].klass = 0;
    if (pIVar18[0xb].klass == (Il2CppClass *)0x0) {
label_042b5de6:
      il2cpp_runtime_helper_022b2c90();
      goto label_042b5deb;
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pIVar18[0xb].klass,0,(MethodInfo *)0x0);
  }
  goto label_042b5d80;
}


// Characters.HookUseable$$GetHookPosition
// il2cpp: UnityEngine_Vector3_o Characters_HookUseable__GetHookPosition (Characters_HookUseable_o* __this, const MethodInfo* method);
// 0x42b59b0

UnityEngine_Vector3_o
Characters_HookUseable__GetHookPosition(Characters_HookUseable_o *__this,MethodInfo *method)

{
  int iVar1;
  UnityEngine_Object_o *x;
  System_Collections_Generic_List_object__o *__this_00;
  long lVar2;
  undefined8 uVar3;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar4;
  long *plVar5;
  MethodInfo *method_00;
  MethodInfo *method_01;
  bool_conflict *pbVar6;
  int32_t state;
  MethodInfo *pMVar7;
  Characters_Hook_o *pCVar8;
  Characters_Hook_o *pCVar9;
  UnityEngine_Object_o *pUVar10;
  void **ppvVar11;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 uVar12;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 uVar13;
  undefined4 extraout_XMM0_Db_02;
  ulong in_XMM1_Qa;
  UnityEngine_Vector3_Fields UVar14;
  UnityEngine_Vector3_o UVar15;
  UnityEngine_Vector3_o UVar16;
  UnityEngine_Vector3_o UVar17;
  UnityEngine_Vector3_o UVar18;
  UnityEngine_Vector3_o UVar19;
  UnityEngine_Vector3_o UVar20;
  UnityEngine_Vector3_o UVar21;
  UnityEngine_Vector3_o UVar22;
  UnityEngine_Vector3_o value;
  System_Nullable_Vector3__o __this_05;
  undefined1 auVar23 [12];
  System_Collections_Generic_List_T__o *pSVar24;
  Il2CppMethodPointer pIVar25;
  Il2CppObject *pIVar26;
  undefined8 uStack_40;
  undefined8 uStack_38;
  Characters_Hook_o *pCStack_28;
  Characters_HookUseable_o *pCStack_20;
  
  value.fields._0_8_ = in_XMM1_Qa;
  if (g_data_057addbf == '\0') {
    pCStack_20 = (Characters_HookUseable_o *)0x42b59cc;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057addbf = '\x01';
    value.fields._0_8_ = in_XMM1_Qa;
  }
  pCVar9 = (__this->fields)._activeHook;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pCStack_20 = (Characters_HookUseable_o *)0x42b59ef;
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar7 = (MethodInfo *)0x0;
  pCStack_20 = (Characters_HookUseable_o *)0x42b59fb;
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    if (g_data_057a65d5 == '\0') {
      pCStack_20 = (Characters_HookUseable_o *)0x42b5a2a;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057a65d5 = '\x01';
    }
    return (UnityEngine_Vector3_o)**(UnityEngine_Vector3_Fields **)(TypeInfo_Vector3 + 0xb8);
  }
  pCVar8 = (__this->fields)._activeHook;
  if (pCVar8 != (Characters_Hook_o *)0x0) {
    pCStack_20 = (Characters_HookUseable_o *)0x42b5a0d;
    UVar14 = (UnityEngine_Vector3_Fields)Characters_Hook__GetHookPosition(pCVar8,pMVar7);
    return (UnityEngine_Vector3_o)UVar14;
  }
  pCStack_20 = (Characters_HookUseable_o *)0x42b5a58;
  il2cpp_runtime_helper_022b2c90();
  pCStack_28 = pCVar9;
  pCStack_20 = __this;
  if (g_data_057addc0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_UnityEngine_Vector3);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057addc0 = '\x01';
  }
  pUVar10 = *(UnityEngine_Object_o **)&(pCVar8->fields).HasOffset;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar7 = (MethodInfo *)0x0;
  bVar4 = UnityEngine_Object__op_Inequality(pUVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    uStack_38 = 0;
  }
  else {
    pCVar9 = *(Characters_Hook_o **)&(pCVar8->fields).HasOffset;
    if (pCVar9 == (Characters_Hook_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057addc1 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057addc1 = '\x01';
      }
      pUVar10 = *(UnityEngine_Object_o **)&(pCVar9->fields).HasOffset;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar4 = UnityEngine_Object__op_Inequality(pUVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (((char)bVar4 == '\0') ||
         (lVar2._0_4_ = (pCVar9->fields).HasOffset, lVar2._4_4_ = (pCVar9->fields)._left, lVar2 != 0)) {
        UVar17.fields.y = (float)extraout_XMM0_Db;
        UVar17.fields.x = (float)extraout_XMM0_Da;
        UVar17.fields.z = (float)value.fields._0_8_;
        return (UnityEngine_Vector3_o)UVar17.fields;
      }
      uVar3 = il2cpp_runtime_helper_022b2c90();
      if (pUVar10[3].monitor != (void *)0x0) {
        UVar15.fields.z = (float)value.fields._0_8_;
        UVar15.fields.x = (float)(int)uVar3;
        UVar15.fields.y = (float)(int)((ulong)uVar3 >> 0x20);
        return (UnityEngine_Vector3_o)UVar15.fields;
      }
      uVar3 = il2cpp_runtime_helper_022b2c90();
      if (pUVar10[3].monitor != (void *)0x0) {
        UVar18.fields.z = (float)value.fields._0_8_;
        UVar18.fields.x = (float)(int)uVar3;
        UVar18.fields.y = (float)(int)((ulong)uVar3 >> 0x20);
        return (UnityEngine_Vector3_o)UVar18.fields;
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057addc2 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057addc2 = '\x01';
      }
      x = pUVar10[3].monitor;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar4 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      UVar20.fields.z = (float)value.fields._0_8_;
      if ((char)bVar4 != '\0') {
        ppvVar11 = &pUVar10[3].monitor;
        pCVar9 = *ppvVar11;
        if (pCVar9 == (Characters_Hook_o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          if (g_data_057addc3 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
            g_data_057addc3 = '\x01';
          }
          pUVar10 = *(UnityEngine_Object_o **)&(pCVar9->fields).HasOffset;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pbVar6 = &(pCVar9->fields).HasOffset;
          bVar4 = UnityEngine_Object__op_Inequality(pUVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          UVar20.fields.z = (float)value.fields._0_8_;
          if ((char)bVar4 != '\0') {
            pCVar8 = *(Characters_Hook_o **)pbVar6;
            if (pCVar8 == (Characters_Hook_o *)0x0) {
              il2cpp_runtime_helper_022b2c90();
              if (g_data_057addc4 == '\0') {
                il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
                il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
                il2cpp_runtime_helper_023445d0(&MethodInfo_Hook_get_Current);
                il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Characters_Hook_GetEnumerator);
                g_data_057addc4 = '\x01';
              }
              UVar20.fields.z = (float)value.fields._0_8_;
              pSVar24 = (System_Collections_Generic_List_T__o *)0x0;
              pIVar25 = (Il2CppMethodPointer)0x0;
              pIVar26 = (Il2CppObject *)0x0;
              __this_00 = *(System_Collections_Generic_List_object__o **)&(pCVar8->fields)._hasHookParent;
              if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
                System_Collections_Generic_List_object___GetEnumerator
                          ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffff40,
                           __this_00,MethodInfo_List_1_T_Enumerator_Characters_Hook_GetEnumerator);
label_042b5d80:
                __this_01.fields._8_8_ = pIVar25;
                __this_01.fields._list = pSVar24;
                __this_01.fields._current = pIVar26;
                bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                  (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff40);
                UVar20.fields.z = (float)value.fields._0_8_;
                if ((char)bVar4 != '\0') {
                  if (pIVar26 != (Il2CppObject *)0x0) goto code_r0x042b5d99;
                  il2cpp_runtime_helper_022b2c90();
                  goto label_042b5de6;
                }
                __this_02.fields._8_8_ = pIVar25;
                __this_02.fields._list = pSVar24;
                __this_02.fields._current = pIVar26;
                System_Collections_Generic_List_Enumerator_object___Dispose
                          (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff40);
                uVar12 = extraout_XMM0_Da_01;
                uVar13 = extraout_XMM0_Db_01;
label_042b5dd9:
                UVar22.fields.y = (float)uVar13;
                UVar22.fields.x = (float)uVar12;
                UVar22.fields.z = UVar20.fields.z;
                return (UnityEngine_Vector3_o)UVar22.fields;
              }
label_042b5deb:
              auVar23 = il2cpp_runtime_helper_022b2c90();
              if (auVar23._8_4_ == 1) {
                plVar5 = (long *)__cxa_begin_catch(auVar23._0_8_);
                lVar2 = *plVar5;
                __cxa_end_catch();
                __this_03.fields._8_8_ = pIVar25;
                __this_03.fields._list = pSVar24;
                __this_03.fields._current = pIVar26;
                System_Collections_Generic_List_Enumerator_object___Dispose
                          (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff40);
                uVar12 = extraout_XMM0_Da_02;
                uVar13 = extraout_XMM0_Db_02;
                if (lVar2 == 0) goto label_042b5dd9;
                il2cpp_runtime_helper_022fefe0(lVar2);
              }
              __this_04.fields._8_8_ = pIVar25;
              __this_04.fields._list = pSVar24;
              __this_04.fields._current = pIVar26;
              System_Collections_Generic_List_Enumerator_object___Dispose
                        (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff40);
              _Unwind_Resume(auVar23._0_8_);
            }
            iVar1 = (pCVar8->fields).State;
            if (iVar1 == 1) {
              state = 3;
            }
            else {
              if (iVar1 != 2) goto label_042b5cc9;
              state = 4;
            }
            Characters_Hook__SetHookState(pCVar8,state,method_01);
          }
label_042b5cc9:
          (pCVar9->fields).HasOffset = 0;
          (pCVar9->fields)._left = 0;
          uVar3 = il2cpp_runtime_helper_022b4080(pbVar6,0);
          UVar21.fields.z = UVar20.fields.z;
          UVar21.fields.x = (float)(int)uVar3;
          UVar21.fields.y = (float)(int)((ulong)uVar3 >> 0x20);
          return (UnityEngine_Vector3_o)UVar21.fields;
        }
        if ((pCVar9->fields).State == 2) {
          Characters_Hook__SetHookState(pCVar9,4,method_00);
          *ppvVar11 = (void *)0x0;
          uVar3 = il2cpp_runtime_helper_022b4080(ppvVar11,0);
          UVar19.fields.z = UVar20.fields.z;
          UVar19.fields.x = (float)(int)uVar3;
          UVar19.fields.y = (float)(int)((ulong)uVar3 >> 0x20);
          return (UnityEngine_Vector3_o)UVar19.fields;
        }
      }
      UVar20.fields.y = (float)extraout_XMM0_Db_00;
      UVar20.fields.x = (float)extraout_XMM0_Da_00;
      return (UnityEngine_Vector3_o)UVar20.fields;
    }
    UVar15 = Characters_Hook__GetHookPosition(pCVar9,pMVar7);
    value.fields._0_8_ = CONCAT44((int)(value.fields._0_8_ >> 0x20),UVar15.fields.z);
    uStack_40 = 0;
    uStack_38 = 0;
    value.fields.z = 0.0;
    __this_05.fields.value.fields.y = (float)(int)UVar15.fields._0_8_;
    __this_05.fields.value.fields.z = (float)(int)((ulong)UVar15.fields._0_8_ >> 0x20);
    __this_05.fields._0_8_ = &uStack_40;
    System_Nullable_Vector3____ctor(__this_05,value,MethodInfo_Nullable_1_UnityEngine_Vector3);
  }
  UVar16.fields.z = (float)value.fields._0_8_;
  UVar16.fields.x = (float)(undefined4)uStack_38;
  UVar16.fields.y = (float)uStack_38._4_4_;
  return (UnityEngine_Vector3_o)UVar16.fields;
code_r0x042b5d99:
  if (*(int *)&pIVar26[2].klass != 0) {
    *(undefined4 *)&pIVar26[2].klass = 4;
    *(undefined4 *)&pIVar26[10].klass = 0;
    if (pIVar26[0xb].klass == (Il2CppClass *)0x0) {
label_042b5de6:
      il2cpp_runtime_helper_022b2c90();
      goto label_042b5deb;
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pIVar26[0xb].klass,0,(MethodInfo *)0x0);
  }
  goto label_042b5d80;
}


// Characters.HookUseable$$GetCLHookPosition
// il2cpp: System_Nullable_Vector3__o Characters_HookUseable__GetCLHookPosition (Characters_HookUseable_o* __this, const MethodInfo* method);
// 0x42b5a60

System_Nullable_Vector3__o
Characters_HookUseable__GetCLHookPosition(Characters_HookUseable_o *__this,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  UnityEngine_Object_o *x;
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Nullable_Vector3__Fields SVar3;
  bool_conflict bVar4;
  undefined4 extraout_var;
  undefined8 extraout_RAX;
  undefined8 uVar5;
  long *plVar6;
  undefined8 extraout_RAX_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  ulong uVar7;
  bool_conflict *pbVar8;
  int32_t state;
  MethodInfo *method_02;
  Characters_Hook_o *pCVar9;
  UnityEngine_Object_o *pUVar10;
  Characters_Hook_o *__this_05;
  void **ppvVar11;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Da_03;
  undefined4 uVar12;
  undefined4 extraout_XMM0_Db_03;
  undefined4 uVar13;
  undefined4 extraout_XMM0_Db_04;
  undefined8 in_XMM1_Qa;
  UnityEngine_Vector3_o UVar14;
  UnityEngine_Vector3_o value;
  System_Nullable_Vector3__o __this_06;
  System_Nullable_Vector3__o SVar15;
  System_Nullable_Vector3__o SVar16;
  System_Nullable_Vector3__o SVar17;
  System_Nullable_Vector3__o SVar18;
  System_Nullable_Vector3__o SVar19;
  System_Nullable_Vector3__o SVar20;
  System_Nullable_Vector3__o SVar21;
  undefined1 auVar22 [12];
  System_Collections_Generic_List_T__o *pSVar23;
  Il2CppMethodPointer pIVar24;
  Il2CppObject *pIVar25;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  
  uVar12 = (undefined4)((ulong)in_XMM1_Qa >> 0x20);
  if (g_data_057addc0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_UnityEngine_Vector3);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057addc0 = '\x01';
  }
  pCVar9 = (__this->fields)._activeHook;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  method_02 = (MethodInfo *)0x0;
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    local_28 = 0;
    uStack_20 = 0;
  }
  else {
    pCVar9 = (__this->fields)._activeHook;
    if (pCVar9 == (Characters_Hook_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057addc1 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057addc1 = '\x01';
      }
      pUVar10 = *(UnityEngine_Object_o **)&(pCVar9->fields).HasOffset;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      uVar7 = 0;
      bVar4 = UnityEngine_Object__op_Inequality(pUVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        lVar2 = *(long *)&(pCVar9->fields).HasOffset;
        if (lVar2 == 0) {
          uVar5 = il2cpp_runtime_helper_022b2c90();
          if (pUVar10[3].monitor != (void *)0x0) {
            SVar16.fields.value.fields.y = (float)(int)uVar5;
            SVar16.fields.value.fields.z = (float)(int)((ulong)uVar5 >> 0x20);
            SVar16.fields._0_8_ = *(undefined8 *)((long)pUVar10[3].monitor + 0x38);
            return (System_Nullable_Vector3__o)SVar16.fields;
          }
          uVar5 = il2cpp_runtime_helper_022b2c90();
          if (pUVar10[3].monitor != (void *)0x0) {
            SVar17.fields.value.fields.y = (float)(int)uVar5;
            SVar17.fields.value.fields.z = (float)(int)((ulong)uVar5 >> 0x20);
            SVar17.fields._0_8_ = *(undefined8 *)((long)pUVar10[3].monitor + 0x30);
            return (System_Nullable_Vector3__o)SVar17.fields;
          }
          il2cpp_runtime_helper_022b2c90();
          if (g_data_057addc2 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
            g_data_057addc2 = '\x01';
          }
          x = pUVar10[3].monitor;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          SVar19.fields.hasValue =
               UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          SVar19.fields.value.fields.x = (float)extraout_var;
          if ((char)SVar19.fields.hasValue != '\0') {
            ppvVar11 = &pUVar10[3].monitor;
            pCVar9 = *ppvVar11;
            if (pCVar9 == (Characters_Hook_o *)0x0) {
              il2cpp_runtime_helper_022b2c90();
              if (g_data_057addc3 == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
                g_data_057addc3 = '\x01';
              }
              pUVar10 = *(UnityEngine_Object_o **)&(pCVar9->fields).HasOffset;
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pbVar8 = &(pCVar9->fields).HasOffset;
              bVar4 = UnityEngine_Object__op_Inequality(pUVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
              ;
              if ((char)bVar4 != '\0') {
                __this_05 = *(Characters_Hook_o **)pbVar8;
                if (__this_05 == (Characters_Hook_o *)0x0) {
                  il2cpp_runtime_helper_022b2c90();
                  if (g_data_057addc4 == '\0') {
                    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
                    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
                    il2cpp_runtime_helper_023445d0(&MethodInfo_Hook_get_Current);
                    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Characters_Hook_GetEnumerator);
                    g_data_057addc4 = '\x01';
                  }
                  pSVar23 = (System_Collections_Generic_List_T__o *)0x0;
                  pIVar24 = (Il2CppMethodPointer)0x0;
                  pIVar25 = (Il2CppObject *)0x0;
                  __this_00 = *(System_Collections_Generic_List_object__o **)
                               &(__this_05->fields)._hasHookParent;
                  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
                    System_Collections_Generic_List_object___GetEnumerator
                              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffff58,
                               __this_00,MethodInfo_List_1_T_Enumerator_Characters_Hook_GetEnumerator);
label_042b5d80:
                    __this_01.fields._8_8_ = pIVar24;
                    __this_01.fields._list = pSVar23;
                    __this_01.fields._current = pIVar25;
                    bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                      (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff58);
                    if ((char)bVar4 != '\0') {
                      if (pIVar25 != (Il2CppObject *)0x0) goto code_r0x042b5d99;
                      il2cpp_runtime_helper_022b2c90();
                      goto label_042b5de6;
                    }
                    __this_02.fields._8_8_ = pIVar24;
                    __this_02.fields._list = pSVar23;
                    __this_02.fields._current = pIVar25;
                    System_Collections_Generic_List_Enumerator_object___Dispose
                              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff58);
                    uVar5 = extraout_RAX;
                    uVar12 = extraout_XMM0_Da_03;
                    uVar13 = extraout_XMM0_Db_03;
label_042b5dd9:
                    SVar21.fields.value.fields.z = (float)uVar13;
                    SVar21.fields.value.fields.y = (float)uVar12;
                    SVar21.fields.hasValue = (int)uVar5;
                    SVar21.fields.value.fields.x = (float)(int)((ulong)uVar5 >> 0x20);
                    return (System_Nullable_Vector3__o)SVar21.fields;
                  }
label_042b5deb:
                  auVar22 = il2cpp_runtime_helper_022b2c90();
                  if (auVar22._8_4_ == 1) {
                    plVar6 = (long *)__cxa_begin_catch(auVar22._0_8_);
                    lVar2 = *plVar6;
                    __cxa_end_catch();
                    __this_03.fields._8_8_ = pIVar24;
                    __this_03.fields._list = pSVar23;
                    __this_03.fields._current = pIVar25;
                    System_Collections_Generic_List_Enumerator_object___Dispose
                              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff58);
                    uVar5 = extraout_RAX_00;
                    uVar12 = extraout_XMM0_Da_04;
                    uVar13 = extraout_XMM0_Db_04;
                    if (lVar2 == 0) goto label_042b5dd9;
                    il2cpp_runtime_helper_022fefe0(lVar2);
                  }
                  __this_04.fields._8_8_ = pIVar24;
                  __this_04.fields._list = pSVar23;
                  __this_04.fields._current = pIVar25;
                  System_Collections_Generic_List_Enumerator_object___Dispose
                            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff58);
                  _Unwind_Resume(auVar22._0_8_);
                }
                iVar1 = (__this_05->fields).State;
                if (iVar1 == 1) {
                  state = 3;
                }
                else {
                  if (iVar1 != 2) goto label_042b5cc9;
                  state = 4;
                }
                Characters_Hook__SetHookState(__this_05,state,method_01);
              }
label_042b5cc9:
              (pCVar9->fields).HasOffset = 0;
              (pCVar9->fields)._left = 0;
              SVar20.fields._0_8_ = il2cpp_runtime_helper_022b4080(pbVar8,0);
              SVar20.fields.value.fields.z = (float)extraout_XMM0_Db_02;
              SVar20.fields.value.fields.y = (float)extraout_XMM0_Da_02;
              return (System_Nullable_Vector3__o)SVar20.fields;
            }
            if ((pCVar9->fields).State == 2) {
              Characters_Hook__SetHookState(pCVar9,4,method_00);
              *ppvVar11 = (void *)0x0;
              SVar18.fields._0_8_ = il2cpp_runtime_helper_022b4080(ppvVar11,0);
              SVar18.fields.value.fields.z = (float)extraout_XMM0_Db_01;
              SVar18.fields.value.fields.y = (float)extraout_XMM0_Da_01;
              return (System_Nullable_Vector3__o)SVar18.fields;
            }
          }
          SVar19.fields.value.fields.z = (float)extraout_XMM0_Db_00;
          SVar19.fields.value.fields.y = (float)extraout_XMM0_Da_00;
          return (System_Nullable_Vector3__o)SVar19.fields;
        }
        uVar7 = (ulong)(*(char *)(lVar2 + 0x50) != '\0');
      }
      SVar15.fields.value.fields.z = (float)extraout_XMM0_Db;
      SVar15.fields.value.fields.y = (float)extraout_XMM0_Da;
      SVar15.fields.hasValue = (int)uVar7;
      SVar15.fields.value.fields.x = (float)(int)(uVar7 >> 0x20);
      return (System_Nullable_Vector3__o)SVar15.fields;
    }
    UVar14 = Characters_Hook__GetHookPosition(pCVar9,method_02);
    value.fields.x = UVar14.fields.z;
    value.fields.y = (float)uVar12;
    local_28 = 0;
    uStack_20 = 0;
    value.fields.z = 0.0;
    __this_06.fields.value.fields.y = (float)(int)UVar14.fields._0_8_;
    __this_06.fields.value.fields.z = (float)(int)((ulong)UVar14.fields._0_8_ >> 0x20);
    __this_06.fields._0_8_ = &local_28;
    System_Nullable_Vector3____ctor(__this_06,value,MethodInfo_Nullable_1_UnityEngine_Vector3);
  }
  SVar3.value.fields.y = (float)(undefined4)uStack_20;
  SVar3.value.fields.z = (float)uStack_20._4_4_;
  SVar3.hasValue = (undefined4)local_28;
  SVar3.value.fields.x = (float)local_28._4_4_;
  return (System_Nullable_Vector3__o)SVar3;
code_r0x042b5d99:
  if (*(int *)&pIVar25[2].klass != 0) {
    *(undefined4 *)&pIVar25[2].klass = 4;
    *(undefined4 *)&pIVar25[10].klass = 0;
    if (pIVar25[0xb].klass == (Il2CppClass *)0x0) {
label_042b5de6:
      il2cpp_runtime_helper_022b2c90();
      goto label_042b5deb;
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pIVar25[0xb].klass,0,(MethodInfo *)0x0);
  }
  goto label_042b5d80;
}


// Characters.HookUseable$$IsHookOffset
// il2cpp: bool Characters_HookUseable__IsHookOffset (Characters_HookUseable_o* __this, const MethodInfo* method);
// 0x42b5b10

bool_conflict Characters_HookUseable__IsHookOffset(Characters_HookUseable_o *__this,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  UnityEngine_Object_o *pUVar3;
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar4;
  bool_conflict extraout_EAX;
  bool_conflict extraout_EAX_00;
  long *plVar5;
  MethodInfo *method_00;
  MethodInfo *method_01;
  uint uVar6;
  int32_t state;
  Characters_Hook_o *pCVar7;
  Characters_Hook_o *pCVar8;
  bool_conflict *pbVar9;
  undefined1 auVar10 [12];
  System_Collections_Generic_List_T__o *pSVar11;
  Il2CppMethodPointer pIVar12;
  Il2CppObject *pIVar13;
  
  if (g_data_057addc1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057addc1 = '\x01';
  }
  pCVar7 = (__this->fields)._activeHook;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar6 = 0;
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    pCVar8 = (__this->fields)._activeHook;
    if (pCVar8 == (Characters_Hook_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      lVar2 = *(long *)&(pCVar7->fields).HasOffset;
      if (lVar2 != 0) {
        return (bool_conflict)*(undefined8 *)(lVar2 + 0x38);
      }
      il2cpp_runtime_helper_022b2c90();
      lVar2 = *(long *)&(pCVar7->fields).HasOffset;
      if (lVar2 != 0) {
        return (bool_conflict)*(undefined8 *)(lVar2 + 0x30);
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057addc2 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057addc2 = '\x01';
      }
      pUVar3 = *(UnityEngine_Object_o **)&(pCVar7->fields).HasOffset;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar4 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        pbVar9 = &(pCVar7->fields).HasOffset;
        pCVar8 = *(Characters_Hook_o **)pbVar9;
        if (pCVar8 == (Characters_Hook_o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          if (g_data_057addc3 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
            g_data_057addc3 = '\x01';
          }
          pUVar3 = *(UnityEngine_Object_o **)&(pCVar8->fields).HasOffset;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pbVar9 = &(pCVar8->fields).HasOffset;
          bVar4 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            pCVar7 = *(Characters_Hook_o **)pbVar9;
            if (pCVar7 == (Characters_Hook_o *)0x0) {
              il2cpp_runtime_helper_022b2c90();
              if (g_data_057addc4 == '\0') {
                il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
                il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
                il2cpp_runtime_helper_023445d0(&MethodInfo_Hook_get_Current);
                il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Characters_Hook_GetEnumerator);
                g_data_057addc4 = '\x01';
              }
              pSVar11 = (System_Collections_Generic_List_T__o *)0x0;
              pIVar12 = (Il2CppMethodPointer)0x0;
              pIVar13 = (Il2CppObject *)0x0;
              __this_00 = *(System_Collections_Generic_List_object__o **)&(pCVar7->fields)._hasHookParent;
              if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
label_042b5deb:
                auVar10 = il2cpp_runtime_helper_022b2c90();
                if (auVar10._8_4_ == 1) {
                  plVar5 = (long *)__cxa_begin_catch(auVar10._0_8_);
                  lVar2 = *plVar5;
                  __cxa_end_catch();
                  __this_03.fields._8_8_ = pIVar12;
                  __this_03.fields._list = pSVar11;
                  __this_03.fields._current = pIVar13;
                  System_Collections_Generic_List_Enumerator_object___Dispose
                            (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff80);
                  if (lVar2 == 0) {
                    return extraout_EAX_00;
                  }
                  il2cpp_runtime_helper_022fefe0(lVar2);
                }
                __this_04.fields._8_8_ = pIVar12;
                __this_04.fields._list = pSVar11;
                __this_04.fields._current = pIVar13;
                System_Collections_Generic_List_Enumerator_object___Dispose
                          (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff80);
                _Unwind_Resume(auVar10._0_8_);
              }
              System_Collections_Generic_List_object___GetEnumerator
                        ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffff80,__this_00
                         ,MethodInfo_List_1_T_Enumerator_Characters_Hook_GetEnumerator);
label_042b5d80:
              __this_01.fields._8_8_ = pIVar12;
              __this_01.fields._list = pSVar11;
              __this_01.fields._current = pIVar13;
              bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff80);
              if ((char)bVar4 == '\0') {
                __this_02.fields._8_8_ = pIVar12;
                __this_02.fields._list = pSVar11;
                __this_02.fields._current = pIVar13;
                System_Collections_Generic_List_Enumerator_object___Dispose
                          (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff80);
                return extraout_EAX;
              }
              if (pIVar13 != (Il2CppObject *)0x0) goto code_r0x042b5d99;
              il2cpp_runtime_helper_022b2c90();
              goto label_042b5de6;
            }
            iVar1 = (pCVar7->fields).State;
            if (iVar1 == 1) {
              state = 3;
            }
            else {
              if (iVar1 != 2) goto label_042b5cc9;
              state = 4;
            }
            Characters_Hook__SetHookState(pCVar7,state,method_01);
          }
label_042b5cc9:
          (pCVar8->fields).HasOffset = 0;
          (pCVar8->fields)._left = 0;
          bVar4 = il2cpp_runtime_helper_022b4080(pbVar9,0);
          return bVar4;
        }
        if ((pCVar8->fields).State == 2) {
          Characters_Hook__SetHookState(pCVar8,4,method_00);
          (pCVar7->fields).HasOffset = 0;
          (pCVar7->fields)._left = 0;
          bVar4 = il2cpp_runtime_helper_022b4080(pbVar9,0);
          return bVar4;
        }
      }
      return bVar4;
    }
    uVar6 = (uint)((char)(pCVar8->fields).HasOffset != '\0');
  }
  return uVar6;
code_r0x042b5d99:
  if (*(int *)&pIVar13[2].klass != 0) {
    *(undefined4 *)&pIVar13[2].klass = 4;
    *(undefined4 *)&pIVar13[10].klass = 0;
    if (pIVar13[0xb].klass == (Il2CppClass *)0x0) {
label_042b5de6:
      il2cpp_runtime_helper_022b2c90();
      goto label_042b5deb;
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pIVar13[0xb].klass,0,(MethodInfo *)0x0);
  }
  goto label_042b5d80;
}


// Characters.HookUseable$$GetHookParent
// il2cpp: UnityEngine_Transform_o* Characters_HookUseable__GetHookParent (Characters_HookUseable_o* __this, const MethodInfo* method);
// 0x42b5b80

UnityEngine_Transform_o *
Characters_HookUseable__GetHookParent(Characters_HookUseable_o *__this,MethodInfo *method)

{
  int iVar1;
  UnityEngine_Object_o *x;
  System_Collections_Generic_List_object__o *__this_00;
  long lVar2;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar3;
  undefined4 extraout_var;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_Transform_o *extraout_RAX;
  long *plVar5;
  UnityEngine_Transform_o *extraout_RAX_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  bool_conflict *pbVar6;
  int32_t state;
  Characters_Hook_o *pCVar7;
  Characters_Hook_o *__this_05;
  Characters_Hook_o **ppCVar8;
  undefined1 auVar9 [12];
  System_Collections_Generic_List_T__o *pSVar10;
  Il2CppMethodPointer pIVar11;
  Il2CppObject *pIVar12;
  
  pCVar7 = (__this->fields)._activeHook;
  if (pCVar7 != (Characters_Hook_o *)0x0) {
    return (pCVar7->fields).HookParent;
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar7 = (__this->fields)._activeHook;
  if (pCVar7 != (Characters_Hook_o *)0x0) {
    return (UnityEngine_Transform_o *)(pCVar7->fields).HookCharacter;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057addc2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057addc2 = '\x01';
  }
  pCVar7 = (__this->fields)._activeHook;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    ppCVar8 = &(__this->fields)._activeHook;
    pCVar7 = *ppCVar8;
    if (pCVar7 == (Characters_Hook_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057addc3 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057addc3 = '\x01';
      }
      x = *(UnityEngine_Object_o **)&(pCVar7->fields).HasOffset;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pbVar6 = &(pCVar7->fields).HasOffset;
      bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar3 != '\0') {
        __this_05 = *(Characters_Hook_o **)pbVar6;
        if (__this_05 == (Characters_Hook_o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          if (g_data_057addc4 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Hook_get_Current);
            il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Characters_Hook_GetEnumerator);
            g_data_057addc4 = '\x01';
          }
          pSVar10 = (System_Collections_Generic_List_T__o *)0x0;
          pIVar11 = (Il2CppMethodPointer)0x0;
          pIVar12 = (Il2CppObject *)0x0;
          __this_00 = *(System_Collections_Generic_List_object__o **)&(__this_05->fields)._hasHookParent;
          if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
label_042b5deb:
            auVar9 = il2cpp_runtime_helper_022b2c90();
            if (auVar9._8_4_ == 1) {
              plVar5 = (long *)__cxa_begin_catch(auVar9._0_8_);
              lVar2 = *plVar5;
              __cxa_end_catch();
              __this_03.fields._8_8_ = pIVar11;
              __this_03.fields._list = pSVar10;
              __this_03.fields._current = pIVar12;
              System_Collections_Generic_List_Enumerator_object___Dispose
                        (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
              if (lVar2 == 0) {
                return extraout_RAX_00;
              }
              il2cpp_runtime_helper_022fefe0(lVar2);
            }
            __this_04.fields._8_8_ = pIVar11;
            __this_04.fields._list = pSVar10;
            __this_04.fields._current = pIVar12;
            System_Collections_Generic_List_Enumerator_object___Dispose
                      (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
            _Unwind_Resume(auVar9._0_8_);
          }
          System_Collections_Generic_List_object___GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffff98,__this_00,
                     MethodInfo_List_1_T_Enumerator_Characters_Hook_GetEnumerator);
label_042b5d80:
          __this_01.fields._8_8_ = pIVar11;
          __this_01.fields._list = pSVar10;
          __this_01.fields._current = pIVar12;
          bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98);
          if ((char)bVar3 == '\0') {
            __this_02.fields._8_8_ = pIVar11;
            __this_02.fields._list = pSVar10;
            __this_02.fields._current = pIVar12;
            System_Collections_Generic_List_Enumerator_object___Dispose
                      (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
            return extraout_RAX;
          }
          if (pIVar12 != (Il2CppObject *)0x0) goto code_r0x042b5d99;
          il2cpp_runtime_helper_022b2c90();
          goto label_042b5de6;
        }
        iVar1 = (__this_05->fields).State;
        if (iVar1 == 1) {
          state = 3;
        }
        else {
          if (iVar1 != 2) goto label_042b5cc9;
          state = 4;
        }
        Characters_Hook__SetHookState(__this_05,state,method_01);
      }
label_042b5cc9:
      (pCVar7->fields).HasOffset = 0;
      (pCVar7->fields)._left = 0;
      pUVar4 = (UnityEngine_Transform_o *)il2cpp_runtime_helper_022b4080(pbVar6,0);
      return pUVar4;
    }
    if ((pCVar7->fields).State == 2) {
      Characters_Hook__SetHookState(pCVar7,4,method_00);
      *ppCVar8 = (Characters_Hook_o *)0x0;
      pUVar4 = (UnityEngine_Transform_o *)il2cpp_runtime_helper_022b4080(ppCVar8,0);
      return pUVar4;
    }
  }
  return (UnityEngine_Transform_o *)CONCAT44(extraout_var,bVar3);
code_r0x042b5d99:
  if (*(int *)&pIVar12[2].klass != 0) {
    *(undefined4 *)&pIVar12[2].klass = 4;
    *(undefined4 *)&pIVar12[10].klass = 0;
    if (pIVar12[0xb].klass == (Il2CppClass *)0x0) {
label_042b5de6:
      il2cpp_runtime_helper_022b2c90();
      goto label_042b5deb;
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pIVar12[0xb].klass,0,(MethodInfo *)0x0);
  }
  goto label_042b5d80;
}


// Characters.HookUseable$$GetHookCharacter
// il2cpp: Characters_BaseCharacter_o* Characters_HookUseable__GetHookCharacter (Characters_HookUseable_o* __this, const MethodInfo* method);
// 0x42b5ba0

Characters_BaseCharacter_o *
Characters_HookUseable__GetHookCharacter(Characters_HookUseable_o *__this,MethodInfo *method)

{
  int iVar1;
  UnityEngine_Object_o *x;
  System_Collections_Generic_List_object__o *__this_00;
  long lVar2;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar3;
  undefined4 extraout_var;
  Characters_BaseCharacter_o *pCVar4;
  Characters_BaseCharacter_o *extraout_RAX;
  long *plVar5;
  Characters_BaseCharacter_o *extraout_RAX_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  bool_conflict *pbVar6;
  int32_t state;
  Characters_Hook_o *pCVar7;
  Characters_Hook_o *__this_05;
  Characters_Hook_o **ppCVar8;
  undefined1 auVar9 [12];
  System_Collections_Generic_List_T__o *pSVar10;
  Il2CppMethodPointer pIVar11;
  Il2CppObject *pIVar12;
  
  pCVar7 = (__this->fields)._activeHook;
  if (pCVar7 != (Characters_Hook_o *)0x0) {
    return (pCVar7->fields).HookCharacter;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057addc2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057addc2 = '\x01';
  }
  pCVar7 = (__this->fields)._activeHook;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    ppCVar8 = &(__this->fields)._activeHook;
    pCVar7 = *ppCVar8;
    if (pCVar7 == (Characters_Hook_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057addc3 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057addc3 = '\x01';
      }
      x = *(UnityEngine_Object_o **)&(pCVar7->fields).HasOffset;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pbVar6 = &(pCVar7->fields).HasOffset;
      bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar3 != '\0') {
        __this_05 = *(Characters_Hook_o **)pbVar6;
        if (__this_05 == (Characters_Hook_o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          if (g_data_057addc4 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Hook_get_Current);
            il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Characters_Hook_GetEnumerator);
            g_data_057addc4 = '\x01';
          }
          pSVar10 = (System_Collections_Generic_List_T__o *)0x0;
          pIVar11 = (Il2CppMethodPointer)0x0;
          pIVar12 = (Il2CppObject *)0x0;
          __this_00 = *(System_Collections_Generic_List_object__o **)&(__this_05->fields)._hasHookParent;
          if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
label_042b5deb:
            auVar9 = il2cpp_runtime_helper_022b2c90();
            if (auVar9._8_4_ == 1) {
              plVar5 = (long *)__cxa_begin_catch(auVar9._0_8_);
              lVar2 = *plVar5;
              __cxa_end_catch();
              __this_03.fields._8_8_ = pIVar11;
              __this_03.fields._list = pSVar10;
              __this_03.fields._current = pIVar12;
              System_Collections_Generic_List_Enumerator_object___Dispose
                        (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa0);
              if (lVar2 == 0) {
                return extraout_RAX_00;
              }
              il2cpp_runtime_helper_022fefe0(lVar2);
            }
            __this_04.fields._8_8_ = pIVar11;
            __this_04.fields._list = pSVar10;
            __this_04.fields._current = pIVar12;
            System_Collections_Generic_List_Enumerator_object___Dispose
                      (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa0);
            _Unwind_Resume(auVar9._0_8_);
          }
          System_Collections_Generic_List_object___GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffa0,__this_00,
                     MethodInfo_List_1_T_Enumerator_Characters_Hook_GetEnumerator);
label_042b5d80:
          __this_01.fields._8_8_ = pIVar11;
          __this_01.fields._list = pSVar10;
          __this_01.fields._current = pIVar12;
          bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffffa0);
          if ((char)bVar3 == '\0') {
            __this_02.fields._8_8_ = pIVar11;
            __this_02.fields._list = pSVar10;
            __this_02.fields._current = pIVar12;
            System_Collections_Generic_List_Enumerator_object___Dispose
                      (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa0);
            return extraout_RAX;
          }
          if (pIVar12 != (Il2CppObject *)0x0) goto code_r0x042b5d99;
          il2cpp_runtime_helper_022b2c90();
          goto label_042b5de6;
        }
        iVar1 = (__this_05->fields).State;
        if (iVar1 == 1) {
          state = 3;
        }
        else {
          if (iVar1 != 2) goto label_042b5cc9;
          state = 4;
        }
        Characters_Hook__SetHookState(__this_05,state,method_01);
      }
label_042b5cc9:
      (pCVar7->fields).HasOffset = 0;
      (pCVar7->fields)._left = 0;
      pCVar4 = (Characters_BaseCharacter_o *)il2cpp_runtime_helper_022b4080(pbVar6,0);
      return pCVar4;
    }
    if ((pCVar7->fields).State == 2) {
      Characters_Hook__SetHookState(pCVar7,4,method_00);
      *ppCVar8 = (Characters_Hook_o *)0x0;
      pCVar4 = (Characters_BaseCharacter_o *)il2cpp_runtime_helper_022b4080(ppCVar8,0);
      return pCVar4;
    }
  }
  return (Characters_BaseCharacter_o *)CONCAT44(extraout_var,bVar3);
code_r0x042b5d99:
  if (*(int *)&pIVar12[2].klass != 0) {
    *(undefined4 *)&pIVar12[2].klass = 4;
    *(undefined4 *)&pIVar12[10].klass = 0;
    if (pIVar12[0xb].klass == (Il2CppClass *)0x0) {
label_042b5de6:
      il2cpp_runtime_helper_022b2c90();
      goto label_042b5deb;
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pIVar12[0xb].klass,0,(MethodInfo *)0x0);
  }
  goto label_042b5d80;
}


// Characters.HookUseable$$DisableActiveHook
// il2cpp: void Characters_HookUseable__DisableActiveHook (Characters_HookUseable_o* __this, const MethodInfo* method);
// 0x42b5bc0

void Characters_HookUseable__DisableActiveHook(Characters_HookUseable_o *__this,MethodInfo *method)

{
  int iVar1;
  UnityEngine_Object_o *x;
  System_Collections_Generic_List_object__o *__this_00;
  long lVar2;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar3;
  long *plVar4;
  MethodInfo *method_00;
  MethodInfo *method_01;
  bool_conflict *pbVar5;
  int32_t state;
  Characters_Hook_o *pCVar6;
  Characters_Hook_o *__this_05;
  Characters_Hook_o **ppCVar7;
  undefined1 auVar8 [12];
  System_Collections_Generic_List_T__o *pSVar9;
  Il2CppMethodPointer pIVar10;
  Il2CppObject *pIVar11;
  
  if (g_data_057addc2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057addc2 = '\x01';
  }
  pCVar6 = (__this->fields)._activeHook;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    ppCVar7 = &(__this->fields)._activeHook;
    pCVar6 = *ppCVar7;
    if (pCVar6 == (Characters_Hook_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057addc3 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057addc3 = '\x01';
      }
      x = *(UnityEngine_Object_o **)&(pCVar6->fields).HasOffset;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pbVar5 = &(pCVar6->fields).HasOffset;
      bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar3 != '\0') {
        __this_05 = *(Characters_Hook_o **)pbVar5;
        if (__this_05 == (Characters_Hook_o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          if (g_data_057addc4 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Hook_get_Current);
            il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Characters_Hook_GetEnumerator);
            g_data_057addc4 = '\x01';
          }
          pSVar9 = (System_Collections_Generic_List_T__o *)0x0;
          pIVar10 = (Il2CppMethodPointer)0x0;
          pIVar11 = (Il2CppObject *)0x0;
          __this_00 = *(System_Collections_Generic_List_object__o **)&(__this_05->fields)._hasHookParent;
          if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
label_042b5deb:
            auVar8 = il2cpp_runtime_helper_022b2c90();
            if (auVar8._8_4_ == 1) {
              plVar4 = (long *)__cxa_begin_catch(auVar8._0_8_);
              lVar2 = *plVar4;
              __cxa_end_catch();
              __this_03.fields._8_8_ = pIVar10;
              __this_03.fields._list = pSVar9;
              __this_03.fields._current = pIVar11;
              System_Collections_Generic_List_Enumerator_object___Dispose
                        (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa8);
              if (lVar2 == 0) {
                return;
              }
              il2cpp_runtime_helper_022fefe0(lVar2);
            }
            __this_04.fields._8_8_ = pIVar10;
            __this_04.fields._list = pSVar9;
            __this_04.fields._current = pIVar11;
            System_Collections_Generic_List_Enumerator_object___Dispose
                      (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa8);
            _Unwind_Resume(auVar8._0_8_);
          }
          System_Collections_Generic_List_object___GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffa8,__this_00,
                     MethodInfo_List_1_T_Enumerator_Characters_Hook_GetEnumerator);
label_042b5d80:
          __this_01.fields._8_8_ = pIVar10;
          __this_01.fields._list = pSVar9;
          __this_01.fields._current = pIVar11;
          bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffffa8);
          if ((char)bVar3 == '\0') {
            __this_02.fields._8_8_ = pIVar10;
            __this_02.fields._list = pSVar9;
            __this_02.fields._current = pIVar11;
            System_Collections_Generic_List_Enumerator_object___Dispose
                      (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa8);
            return;
          }
          if (pIVar11 != (Il2CppObject *)0x0) goto code_r0x042b5d99;
          il2cpp_runtime_helper_022b2c90();
          goto label_042b5de6;
        }
        iVar1 = (__this_05->fields).State;
        if (iVar1 == 1) {
          state = 3;
        }
        else {
          if (iVar1 != 2) goto label_042b5cc9;
          state = 4;
        }
        Characters_Hook__SetHookState(__this_05,state,method_01);
      }
label_042b5cc9:
      (pCVar6->fields).HasOffset = 0;
      (pCVar6->fields)._left = 0;
      il2cpp_runtime_helper_022b4080(pbVar5,0);
      return;
    }
    if ((pCVar6->fields).State == 2) {
      Characters_Hook__SetHookState(pCVar6,4,method_00);
      *ppCVar7 = (Characters_Hook_o *)0x0;
      il2cpp_runtime_helper_022b4080(ppCVar7,0);
      return;
    }
  }
  return;
code_r0x042b5d99:
  if (*(int *)&pIVar11[2].klass != 0) {
    *(undefined4 *)&pIVar11[2].klass = 4;
    *(undefined4 *)&pIVar11[10].klass = 0;
    if (pIVar11[0xb].klass == (Il2CppClass *)0x0) {
label_042b5de6:
      il2cpp_runtime_helper_022b2c90();
      goto label_042b5deb;
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pIVar11[0xb].klass,0,(MethodInfo *)0x0);
  }
  goto label_042b5d80;
}


// Characters.HookUseable$$DisableAnyHook
// il2cpp: void Characters_HookUseable__DisableAnyHook (Characters_HookUseable_o* __this, const MethodInfo* method);
// 0x42b5c50

void Characters_HookUseable__DisableAnyHook(Characters_HookUseable_o *__this,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_List_object__o *__this_00;
  long lVar2;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar3;
  long *plVar4;
  MethodInfo *method_00;
  Characters_Hook_o **ppCVar5;
  int32_t state;
  Characters_Hook_o *pCVar6;
  undefined1 auVar7 [12];
  System_Collections_Generic_List_T__o *pSVar8;
  Il2CppMethodPointer pIVar9;
  Il2CppObject *pIVar10;
  
  if (g_data_057addc3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057addc3 = '\x01';
  }
  pCVar6 = (__this->fields)._activeHook;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ppCVar5 = &(__this->fields)._activeHook;
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    pCVar6 = *ppCVar5;
    if (pCVar6 == (Characters_Hook_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057addc4 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Hook_get_Current);
        il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Characters_Hook_GetEnumerator);
        g_data_057addc4 = '\x01';
      }
      pSVar8 = (System_Collections_Generic_List_T__o *)0x0;
      pIVar9 = (Il2CppMethodPointer)0x0;
      pIVar10 = (Il2CppObject *)0x0;
      __this_00 = *(System_Collections_Generic_List_object__o **)&(pCVar6->fields)._hasHookParent;
      if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
label_042b5deb:
        auVar7 = il2cpp_runtime_helper_022b2c90();
        if (auVar7._8_4_ == 1) {
          plVar4 = (long *)__cxa_begin_catch(auVar7._0_8_);
          lVar2 = *plVar4;
          __cxa_end_catch();
          __this_03.fields._8_8_ = pIVar9;
          __this_03.fields._list = pSVar8;
          __this_03.fields._current = pIVar10;
          System_Collections_Generic_List_Enumerator_object___Dispose
                    (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc0);
          if (lVar2 == 0) {
            return;
          }
          il2cpp_runtime_helper_022fefe0(lVar2);
        }
        __this_04.fields._8_8_ = pIVar9;
        __this_04.fields._list = pSVar8;
        __this_04.fields._current = pIVar10;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc0);
        _Unwind_Resume(auVar7._0_8_);
      }
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffc0,__this_00,
                 MethodInfo_List_1_T_Enumerator_Characters_Hook_GetEnumerator);
label_042b5d80:
      __this_01.fields._8_8_ = pIVar9;
      __this_01.fields._list = pSVar8;
      __this_01.fields._current = pIVar10;
      bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffffc0);
      if ((char)bVar3 == '\0') {
        __this_02.fields._8_8_ = pIVar9;
        __this_02.fields._list = pSVar8;
        __this_02.fields._current = pIVar10;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc0);
        return;
      }
      if (pIVar10 != (Il2CppObject *)0x0) goto code_r0x042b5d99;
      il2cpp_runtime_helper_022b2c90();
      goto label_042b5de6;
    }
    iVar1 = (pCVar6->fields).State;
    if (iVar1 == 1) {
      state = 3;
    }
    else {
      if (iVar1 != 2) goto label_042b5cc9;
      state = 4;
    }
    Characters_Hook__SetHookState(pCVar6,state,method_00);
  }
label_042b5cc9:
  *ppCVar5 = (Characters_Hook_o *)0x0;
  il2cpp_runtime_helper_022b4080(ppCVar5,0);
  return;
code_r0x042b5d99:
  if (*(int *)&pIVar10[2].klass != 0) {
    *(undefined4 *)&pIVar10[2].klass = 4;
    *(undefined4 *)&pIVar10[10].klass = 0;
    if (pIVar10[0xb].klass == (Il2CppClass *)0x0) {
label_042b5de6:
      il2cpp_runtime_helper_022b2c90();
      goto label_042b5deb;
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pIVar10[0xb].klass,0,(MethodInfo *)0x0);
  }
  goto label_042b5d80;
}


// Characters.HookUseable$$LocalClearAllHooks
// il2cpp: void Characters_HookUseable__LocalClearAllHooks (Characters_HookUseable_o* __this, const MethodInfo* method);
// 0x42b5cf0

void Characters_HookUseable__LocalClearAllHooks(Characters_HookUseable_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_Hook__o *__this_00;
  long lVar1;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar2;
  long *plVar3;
  undefined1 auVar4 [12];
  System_Collections_Generic_List_T__o *pSVar5;
  Il2CppMethodPointer pIVar6;
  Il2CppObject *pIVar7;
  
  if (g_data_057addc4 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Hook_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Characters_Hook_GetEnumerator);
    g_data_057addc4 = '\x01';
  }
  pSVar5 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar6 = (Il2CppMethodPointer)0x0;
  pIVar7 = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).Hooks;
  if (__this_00 == (System_Collections_Generic_List_Hook__o *)0x0) {
label_042b5deb:
    auVar4 = il2cpp_runtime_helper_022b2c90();
    if (auVar4._8_4_ == 1) {
      plVar3 = (long *)__cxa_begin_catch(auVar4._0_8_);
      lVar1 = *plVar3;
      __cxa_end_catch();
      __this_03.fields._8_8_ = pIVar6;
      __this_03.fields._list = pSVar5;
      __this_03.fields._current = pIVar7;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffd8);
      if (lVar1 == 0) {
        return;
      }
      il2cpp_runtime_helper_022fefe0(lVar1);
    }
    __this_04.fields._8_8_ = pIVar6;
    __this_04.fields._list = pSVar5;
    __this_04.fields._current = pIVar7;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffffd8);
    _Unwind_Resume(auVar4._0_8_);
  }
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffd8,
             (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T_Enumerator_Characters_Hook_GetEnumerator);
label_042b5d80:
  __this_01.fields._8_8_ = pIVar6;
  __this_01.fields._list = pSVar5;
  __this_01.fields._current = pIVar7;
  bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                    (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffffd8);
  if ((char)bVar2 == '\0') {
    __this_02.fields._8_8_ = pIVar6;
    __this_02.fields._list = pSVar5;
    __this_02.fields._current = pIVar7;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffd8);
    return;
  }
  if (pIVar7 != (Il2CppObject *)0x0) goto code_r0x042b5d99;
  il2cpp_runtime_helper_022b2c90();
  goto label_042b5de6;
code_r0x042b5d99:
  if (*(int *)&pIVar7[2].klass != 0) {
    *(undefined4 *)&pIVar7[2].klass = 4;
    *(undefined4 *)&pIVar7[10].klass = 0;
    if (pIVar7[0xb].klass == (Il2CppClass *)0x0) {
label_042b5de6:
      il2cpp_runtime_helper_022b2c90();
      goto label_042b5deb;
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pIVar7[0xb].klass,0,(MethodInfo *)0x0);
  }
  goto label_042b5d80;
}


// Characters.HookUseable$$Activate
// il2cpp: void Characters_HookUseable__Activate (Characters_HookUseable_o* __this, const MethodInfo* method);
// 0x42b5e80

void Characters_HookUseable__Activate(Characters_HookUseable_o *__this,MethodInfo *method)

{
  Characters_HookUseable__StartHook(__this,method);
  return;
}


// Characters.HookUseable$$ActiveFixedUpdate
// il2cpp: void Characters_HookUseable__ActiveFixedUpdate (Characters_HookUseable_o* __this, const MethodInfo* method);
// 0x42b66d0

void Characters_HookUseable__ActiveFixedUpdate(Characters_HookUseable_o *__this,MethodInfo *method)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  Characters_BaseCharacter_c *pCVar4;
  Il2CppMethodPointer pIVar5;
  long lVar6;
  UnityEngine_Transform_o *pUVar7;
  UnityEngine_Rigidbody_o *__this_00;
  undefined8 *puVar8;
  Characters_HumanStats_o *__this_01;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  bool_conflict bVar15;
  Characters_Hook_o *pCVar16;
  Characters_BaseCharacter_o **unaff_RBX;
  MethodInfo *pMVar17;
  long *__this_02;
  Characters_BaseCharacter_o *__this_03;
  Il2CppClass **unaff_R12;
  long *unaff_R13;
  bool_conflict *unaff_R14;
  Characters_BaseCharacter_o *unaff_R15;
  float fVar18;
  undefined4 uVar19;
  undefined8 uVar20;
  float extraout_XMM0_Db;
  undefined4 uVar21;
  float extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  float extraout_XMM0_Dc_01;
  float extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dc_03;
  undefined4 uVar22;
  undefined4 extraout_XMM0_Dc_04;
  undefined4 extraout_XMM0_Dc_05;
  undefined4 extraout_XMM0_Dc_06;
  undefined4 extraout_XMM0_Dc_07;
  float extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  float extraout_XMM0_Dd_01;
  float extraout_XMM0_Dd_02;
  undefined4 extraout_XMM0_Dd_03;
  undefined4 uVar23;
  undefined4 extraout_XMM0_Dd_04;
  undefined4 extraout_XMM0_Dd_05;
  undefined4 extraout_XMM0_Dd_06;
  undefined4 extraout_XMM0_Dd_07;
  float fVar24;
  undefined8 extraout_XMM1_Qa;
  float fVar28;
  undefined8 extraout_XMM1_Qa_00;
  float fVar29;
  undefined8 extraout_XMM1_Qb;
  float fVar30;
  undefined8 extraout_XMM1_Qb_00;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar38;
  UnityEngine_Vector3_o UVar39;
  UnityEngine_Vector3_o relativeVelocity;
  undefined1 auVar25 [16];
  
  do {
    __this_03 = (Characters_BaseCharacter_o *)__this;
    *(Characters_BaseCharacter_o **)((long)register0x00000020 + -8) = unaff_R15;
    *(bool_conflict **)((long)register0x00000020 + -0x10) = unaff_R14;
    *(long **)((long)register0x00000020 + -0x18) = unaff_R13;
    *(Il2CppClass ***)((long)register0x00000020 + -0x20) = unaff_R12;
    *(Characters_BaseCharacter_o ***)((long)register0x00000020 + -0x28) = unaff_RBX;
    if (g_data_057addc6 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0xc0) = 0x42b5eb8;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Human);
      *(undefined8 *)((long)register0x00000020 + -0xc0) = 0x42b5ec4;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      *(undefined8 *)((long)register0x00000020 + -0xc0) = 0x42b5ed0;
      il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
      g_data_057addc6 = '\x01';
    }
    unaff_RBX = *(Characters_BaseCharacter_o ***)&(__this_03->fields).HasExplicitNameTag;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0xc0) = 0x42b5ef4;
      il2cpp_runtime_helper_02337ed0();
    }
    unaff_R14 = &(__this_03->fields).HasExplicitNameTag;
    *(undefined8 *)((long)register0x00000020 + -0xc0) = 0x42b5f04;
    __this_02 = (long *)unaff_RBX;
    bVar15 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    unaff_R12 = (Il2CppClass **)&TypeInfo_Object;
    if ((char)bVar15 == '\0') {
label_042b5f1e:
      cVar1 = (__this_03->fields).field_0x2c;
joined_r0x042b60ee:
      if (cVar1 == '\0') {
        return;
      }
      unaff_RBX = *(Characters_BaseCharacter_o ***)unaff_R14;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0xc0) = 0x42b5f3e;
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar17 = (MethodInfo *)0x0;
      *(undefined8 *)((long)register0x00000020 + -0xc0) = 0x42b5f4a;
      bVar15 = UnityEngine_Object__op_Equality
                         ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar15 == '\0') {
        return;
      }
      *(undefined8 *)((long)register0x00000020 + -0xc0) = 0x42b5f5a;
      pCVar16 = Characters_HookUseable__FindAvailableHook((Characters_HookUseable_o *)__this_03,pMVar17);
      *(Characters_Hook_o **)&(__this_03->fields).HasExplicitNameTag = pCVar16;
      *(undefined8 *)((long)register0x00000020 + -0xc0) = 0x42b5f69;
      il2cpp_runtime_helper_022b4080(unaff_R14);
      __this_02 = *(long **)&(__this_03->fields).MaxFootstepDistance;
      if ((Characters_BaseCharacter_o *)__this_02 == (Characters_BaseCharacter_o *)0x0) goto label_042b66bc;
      unaff_R12 = &TypeInfo_Human;
      bVar2 = (TypeInfo_Human->_2).naturalAligment;
      if ((bVar2 <= (((Characters_BaseCharacter_o *)__this_02)->klass->_2).naturalAligment) &&
         ((((Characters_BaseCharacter_o *)__this_02)->klass->_2).typeHierarchy[(ulong)bVar2 - 1] ==
          TypeInfo_Human)) {
        pCVar4 = ((Characters_BaseCharacter_o *)__this_02)->klass;
        bVar2 = (TypeInfo_Human->_2).naturalAligment;
        if ((bVar2 <= (pCVar4->_2).naturalAligment) &&
           ((pCVar4->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_Human)) {
          pIVar5 = (pCVar4->vtable)._66_GetAimPoint.methodPtr;
          *(undefined8 *)((long)register0x00000020 + -0xc0) = 0x42b5fde;
          uVar20 = (*pIVar5)();
          auVar37._8_8_ = extraout_XMM1_Qb;
          auVar37._0_8_ = extraout_XMM1_Qa;
          auVar31._8_4_ = (int)extraout_XMM1_Qb;
          auVar31._0_8_ = extraout_XMM1_Qa;
          auVar31._12_4_ = (int)((ulong)extraout_XMM1_Qb >> 0x20);
          fVar28 = extraout_XMM0_Dc;
          fVar18 = extraout_XMM0_Dd;
          if (*(char *)&(__this_03->fields).VisibleName == '\0') {
label_042b618a:
            lVar6 = *(long *)unaff_R14;
            if (lVar6 != 0) {
              *(undefined1 (*) [16])((long)register0x00000020 + -0xb8) = auVar31;
              *(undefined8 *)((long)register0x00000020 + -0xa8) = uVar20;
              *(float *)((long)register0x00000020 + -0xa0) = fVar28;
              *(float *)((long)register0x00000020 + -0x9c) = fVar18;
              pUVar7 = *(UnityEngine_Transform_o **)(lVar6 + 0x28);
              __this_02 = (long *)0x0;
              if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                *(undefined8 *)((long)register0x00000020 + -0xc0) = 0x42b61b3;
                UVar39 = UnityEngine_Transform__get_position(pUVar7,(MethodInfo *)0x0);
                fVar28 = UVar39.fields.z;
                auVar32._0_8_ = UVar39.fields._0_8_;
                auVar32._8_4_ = extraout_XMM0_Dc_03;
                auVar32._12_4_ = extraout_XMM0_Dd_03;
                if (g_data_057a6845 == '\0') {
                  *(float *)((long)register0x00000020 + -0x88) = fVar28;
                  *(undefined1 (*) [16])((long)register0x00000020 + -0x78) = auVar32;
                  *(undefined8 *)((long)register0x00000020 + -0xc0) = 0x42b61d6;
                  il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                  auVar32 = *(undefined1 (*) [16])((long)register0x00000020 + -0x78);
                  fVar28 = *(float *)((long)register0x00000020 + -0x88);
                  g_data_057a6845 = '\x01';
                }
                fVar18 = *(float *)((long)register0x00000020 + -0xa8) - auVar32._0_4_;
                fVar38 = *(float *)((long)register0x00000020 + -0xa4) - auVar32._4_4_;
                auVar33._4_12_ = SUB1612(*(undefined1 (*) [16])((long)register0x00000020 + -0xb8),4);
                auVar33._0_4_ = SUB164(*(undefined1 (*) [16])((long)register0x00000020 + -0xb8),0) - fVar28;
                unaff_RBX = &TypeInfo_Math;
                iVar3 = (TypeInfo_Math->fields)._stepPhase;
                *(float *)((long)register0x00000020 + -0xa8) = fVar18;
                *(float *)((long)register0x00000020 + -0xa4) = fVar38;
                *(float *)((long)register0x00000020 + -0xa0) =
                     *(float *)((long)register0x00000020 + -0xa0) - auVar32._8_4_;
                *(float *)((long)register0x00000020 + -0x9c) =
                     *(float *)((long)register0x00000020 + -0x9c) - auVar32._12_4_;
                __this_02 = (long *)TypeInfo_Math;
                if (iVar3 == 0) {
                  *(undefined1 (*) [16])((long)register0x00000020 + -0xb8) = auVar33;
                  *(undefined8 *)((long)register0x00000020 + -0xc0) = 0x42b6219;
                  il2cpp_runtime_helper_02337ed0();
                  auVar33 = *(undefined1 (*) [16])((long)register0x00000020 + -0xb8);
                  fVar18 = *(float *)((long)register0x00000020 + -0xa8);
                  fVar38 = *(float *)((long)register0x00000020 + -0xa4);
                }
                uVar19 = auVar33._8_4_;
                uVar21 = auVar33._12_4_;
                fVar28 = auVar33._0_4_ * auVar33._0_4_ + fVar38 * fVar38 + fVar18 * fVar18;
                auVar26 = ZEXT816(0);
                if (fVar28 < 0.0) {
                  *(undefined1 (*) [16])((long)register0x00000020 + -0xb8) = auVar33;
                  *(undefined8 *)((long)register0x00000020 + -0xc0) = 0x42b629d;
                  fVar28 = sqrtf(fVar28);
                  auVar33 = *(undefined1 (*) [16])((long)register0x00000020 + -0xb8);
                  uVar19 = extraout_XMM0_Dc_04;
                  uVar21 = extraout_XMM0_Dd_04;
                  if (1e-05 < fVar28) goto label_042b62aa;
label_042b6250:
                  if (g_data_057a65d5 == '\0') {
                    __this_02 = &TypeInfo_Vector3;
                    *(undefined8 *)((long)register0x00000020 + -0xc0) = 0x42b6265;
                    il2cpp_runtime_helper_023445d0();
                    auVar26._8_8_ = extraout_XMM1_Qb_00;
                    auVar26._0_8_ = extraout_XMM1_Qa_00;
                    g_data_057a65d5 = '\x01';
                  }
                  uVar20 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
                  uVar19 = (undefined4)uVar20;
                  uVar21 = (undefined4)((ulong)uVar20 >> 0x20);
                  uVar22 = 0;
                  uVar23 = 0;
                  auVar34 = ZEXT416(*(uint *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1));
                  lVar6._0_4_ = (__this_03->fields).MaxFootstepDistance;
                  lVar6._4_4_ = (__this_03->fields).MaxSoundDistance;
                }
                else {
                  fVar28 = SQRT(fVar28);
                  if (fVar28 <= 1e-05) goto label_042b6250;
label_042b62aa:
                  auVar34._4_12_ = auVar33._4_12_;
                  auVar34._0_4_ = auVar33._0_4_ / fVar28;
                  auVar12._4_4_ = fVar28;
                  auVar12._0_4_ = fVar28;
                  auVar12._8_4_ = uVar19;
                  auVar12._12_4_ = uVar21;
                  auVar26 = divps(*(undefined1 (*) [16])((long)register0x00000020 + -0xa8),auVar12);
                  uVar19 = auVar26._0_4_;
                  uVar21 = auVar26._4_4_;
                  uVar22 = auVar26._8_4_;
                  uVar23 = auVar26._12_4_;
                  lVar6._0_4_ = (__this_03->fields).MaxFootstepDistance;
                  lVar6._4_4_ = (__this_03->fields).MaxSoundDistance;
                }
                if ((lVar6 != 0) && (lVar6 = *(long *)(lVar6 + 0x70), lVar6 != 0)) {
                  *(undefined1 (*) [16])((long)register0x00000020 + -0xb8) = auVar34;
                  *(undefined4 *)((long)register0x00000020 + -0xa8) = uVar19;
                  *(undefined4 *)((long)register0x00000020 + -0xa4) = uVar21;
                  *(undefined4 *)((long)register0x00000020 + -0xa0) = uVar22;
                  *(undefined4 *)((long)register0x00000020 + -0x9c) = uVar23;
                  __this_00 = *(UnityEngine_Rigidbody_o **)(lVar6 + 0x18);
                  __this_02 = (long *)0x0;
                  if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
                    *(undefined1 (*) [16])((long)register0x00000020 + -0x68) =
                         ZEXT416(*(uint *)((long)&(__this_03->fields).Guild + 4));
                    pMVar17 = (MethodInfo *)0x0;
                    *(undefined8 *)((long)register0x00000020 + -0xc0) = 0x42b62ff;
                    UVar39 = UnityEngine_Rigidbody__get_velocity(__this_00,(MethodInfo *)0x0);
                    auVar27._4_12_ = auVar26._4_12_;
                    auVar27._0_4_ = UVar39.fields.z;
                    auVar9._8_4_ = extraout_XMM0_Dc_05;
                    auVar9._0_8_ = UVar39.fields._0_8_;
                    auVar9._12_4_ = extraout_XMM0_Dd_05;
                    *(undefined1 (*) [16])((long)register0x00000020 + -0x78) = auVar9;
                    *(undefined1 (*) [16])((long)register0x00000020 + -0x88) = auVar27;
                    if (g_data_057a65d5 == '\0') {
                      *(undefined8 *)((long)register0x00000020 + -0xc0) = 0x42b631e;
                      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
                      g_data_057a65d5 = '\x01';
                    }
                    fVar28 = *(float *)((long)register0x00000020 + -0x68);
                    fVar18 = *(float *)((long)register0x00000020 + -0x60);
                    fVar38 = *(float *)((long)register0x00000020 + -0x5c);
                    unaff_R13 = &TypeInfo_Vector3;
                    puVar8 = *(undefined8 **)(TypeInfo_Vector3 + 0xb8);
                    *(undefined8 *)((long)register0x00000020 + -0x48) = *puVar8;
                    *(undefined8 *)((long)register0x00000020 + -0x40) = 0;
                    *(undefined4 *)((long)register0x00000020 + -0x8c) = *(undefined4 *)(puVar8 + 1);
                    fVar24 = fVar28;
                    fVar29 = fVar28;
                    if (g_data_057a6845 == '\0') {
                      *(float *)((long)register0x00000020 + -0x58) = fVar28;
                      *(float *)((long)register0x00000020 + -0x54) = fVar28;
                      *(float *)((long)register0x00000020 + -0x50) = fVar18;
                      *(float *)((long)register0x00000020 + -0x4c) = fVar38;
                      *(undefined8 *)((long)register0x00000020 + -0xc0) = 0x42b6371;
                      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                      fVar24 = *(float *)((long)register0x00000020 + -0x58);
                      fVar29 = *(float *)((long)register0x00000020 + -0x54);
                      fVar18 = *(float *)((long)register0x00000020 + -0x50);
                      fVar38 = *(float *)((long)register0x00000020 + -0x4c);
                      fVar28 = *(float *)((long)register0x00000020 + -0x68);
                      g_data_057a6845 = '\x01';
                    }
                    fVar24 = *(float *)((long)register0x00000020 + -0xa8) * fVar24;
                    fVar29 = *(float *)((long)register0x00000020 + -0xa4) * fVar29;
                    auVar35._4_12_ = SUB1612(*(undefined1 (*) [16])((long)register0x00000020 + -0xb8),4);
                    auVar35._0_4_ =
                         SUB164(*(undefined1 (*) [16])((long)register0x00000020 + -0xb8),0) * fVar28;
                    iVar3 = (TypeInfo_Math->fields)._stepPhase;
                    *(undefined1 (*) [16])((long)register0x00000020 + -0xb8) = auVar35;
                    *(float *)((long)register0x00000020 + -0xa8) = fVar24;
                    *(float *)((long)register0x00000020 + -0xa4) = fVar29;
                    *(float *)((long)register0x00000020 + -0xa0) =
                         *(float *)((long)register0x00000020 + -0xa0) * fVar18;
                    *(float *)((long)register0x00000020 + -0x9c) =
                         *(float *)((long)register0x00000020 + -0x9c) * fVar38;
                    if (iVar3 == 0) {
                      *(undefined8 *)((long)register0x00000020 + -0xc0) = 0x42b63ac;
                      il2cpp_runtime_helper_02337ed0();
                      auVar35 = *(undefined1 (*) [16])((long)register0x00000020 + -0xb8);
                      fVar24 = *(float *)((long)register0x00000020 + -0xa8);
                      fVar29 = *(float *)((long)register0x00000020 + -0xa4);
                    }
                    uVar19 = auVar35._8_4_;
                    uVar21 = auVar35._12_4_;
                    fVar28 = auVar35._0_4_ * auVar35._0_4_ + fVar29 * fVar29 + fVar24 * fVar24;
                    *(float *)((long)register0x00000020 + -0x38) = fVar28;
                    *(int *)((long)register0x00000020 + -0x34) = auVar35._4_4_;
                    *(undefined4 *)((long)register0x00000020 + -0x30) = uVar19;
                    *(undefined4 *)((long)register0x00000020 + -0x2c) = uVar21;
                    if (fVar28 < 0.0) {
                      *(undefined8 *)((long)register0x00000020 + -0xc0) = 0x42b6436;
                      fVar28 = sqrtf(fVar28);
                      auVar35 = *(undefined1 (*) [16])((long)register0x00000020 + -0xb8);
                      uVar19 = extraout_XMM0_Dc_06;
                      uVar21 = extraout_XMM0_Dd_06;
                      if (1e-05 < fVar28) goto label_042b6443;
label_042b63eb:
                      if (g_data_057a65d5 == '\0') {
                        *(undefined8 *)((long)register0x00000020 + -0xc0) = 0x42b6400;
                        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
                        g_data_057a65d5 = '\x01';
                      }
                      puVar8 = *(undefined8 **)(TypeInfo_Vector3 + 0xb8);
                      *(undefined8 *)((long)register0x00000020 + -0x58) = *puVar8;
                      *(undefined8 *)((long)register0x00000020 + -0x50) = 0;
                      *(undefined4 *)((long)register0x00000020 + -0x68) = *(undefined4 *)(puVar8 + 1);
                    }
                    else {
                      fVar28 = SQRT(fVar28);
                      if (fVar28 <= 1e-05) goto label_042b63eb;
label_042b6443:
                      *(float *)((long)register0x00000020 + -0x68) = auVar35._0_4_ / fVar28;
                      auVar11._4_4_ = fVar28;
                      auVar11._0_4_ = fVar28;
                      auVar11._8_4_ = uVar19;
                      auVar11._12_4_ = uVar21;
                      auVar37 = divps(*(undefined1 (*) [16])((long)register0x00000020 + -0xa8),auVar11);
                      *(undefined1 (*) [16])((long)register0x00000020 + -0x58) = auVar37;
                    }
                    if (g_data_057a6845 == '\0') {
                      *(undefined8 *)((long)register0x00000020 + -0xc0) = 0x42b6473;
                      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                      g_data_057a6845 = '\x01';
                    }
                    if ((TypeInfo_Math->fields)._stepPhase == 0) {
                      *(undefined8 *)((long)register0x00000020 + -0xc0) = 0x42b648b;
                      il2cpp_runtime_helper_02337ed0();
                    }
                    uVar19 = *(undefined4 *)((long)register0x00000020 + -0x80);
                    uVar21 = *(undefined4 *)((long)register0x00000020 + -0x7c);
                    fVar28 = *(float *)((long)register0x00000020 + -0x88) *
                             *(float *)((long)register0x00000020 + -0x88) +
                             *(float *)((long)register0x00000020 + -0x74) *
                             *(float *)((long)register0x00000020 + -0x74) +
                             *(float *)((long)register0x00000020 + -0x78) *
                             *(float *)((long)register0x00000020 + -0x78);
                    if (fVar28 < 0.0) {
                      *(undefined8 *)((long)register0x00000020 + -0xc0) = 0x42b64f7;
                      fVar28 = sqrtf(fVar28);
                      uVar19 = extraout_XMM0_Dc_07;
                      uVar21 = extraout_XMM0_Dd_07;
                      if (1e-05 < fVar28) goto label_042b6500;
label_042b64c0:
                      if (g_data_057a65d5 == '\0') {
                        *(undefined8 *)((long)register0x00000020 + -0xc0) = 0x42b64d5;
                        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
                        g_data_057a65d5 = '\x01';
                      }
                      uVar20 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
                      fVar18 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
                    }
                    else {
                      fVar28 = SQRT(fVar28);
                      if (fVar28 <= 1e-05) goto label_042b64c0;
label_042b6500:
                      fVar18 = *(float *)((long)register0x00000020 + -0x88) / fVar28;
                      auVar10._4_4_ = fVar28;
                      auVar10._0_4_ = fVar28;
                      auVar10._8_4_ = uVar19;
                      auVar10._12_4_ = uVar21;
                      auVar37 = divps(*(undefined1 (*) [16])((long)register0x00000020 + -0x78),auVar10);
                      uVar20 = auVar37._0_8_;
                    }
                    *(undefined8 *)((long)register0x00000020 + -0xc0) = 0x42b653b;
                    fVar24 = acosf(*(float *)((long)register0x00000020 + -0x54) *
                                   (float)((ulong)uVar20 >> 0x20) +
                                   *(float *)((long)register0x00000020 + -0x58) * (float)uVar20 +
                                   *(float *)((long)register0x00000020 + -0x68) * fVar18);
                    fVar28 = *(float *)((long)register0x00000020 + -0xa8);
                    fVar18 = *(float *)((long)register0x00000020 + -0xa4);
                    fVar38 = *(float *)((long)register0x00000020 + -0xb8);
                    if (90.0 < ABS(fVar24 * 57.29578)) {
label_042b6654:
                      pCVar16 = *(Characters_Hook_o **)unaff_R14;
                      __this_02 = (long *)0x0;
                      if (pCVar16 == (Characters_Hook_o *)0x0) goto label_042b66bc;
                    }
                    else {
                      if (g_data_057a6931 == '\0') {
                        *(undefined8 *)((long)register0x00000020 + -0xc0) = 0x42b6579;
                        il2cpp_runtime_helper_023445d0(&TypeInfo_Mathf);
                        fVar38 = *(float *)((long)register0x00000020 + -0xb8);
                        g_data_057a6931 = '\x01';
                      }
                      fVar24 = *(float *)((long)register0x00000020 + -0x38);
                      if (**(float **)(TypeInfo_Mathf + 0xb8) <= fVar24) {
                        fVar28 = *(float *)((long)register0x00000020 + -0xa8);
                        fVar18 = *(float *)((long)register0x00000020 + -0xa4);
                        fVar29 = *(float *)((long)register0x00000020 + -0x88) * fVar38 +
                                 *(float *)((long)register0x00000020 + -0x74) * fVar18 +
                                 *(float *)((long)register0x00000020 + -0x78) * fVar28;
                        auVar36._0_4_ = fVar29 * fVar28;
                        auVar36._4_4_ = fVar29 * fVar18;
                        auVar36._8_4_ =
                             *(float *)((long)register0x00000020 + -0x80) *
                             *(float *)((long)register0x00000020 + -0xa0);
                        auVar36._12_4_ =
                             *(float *)((long)register0x00000020 + -0x7c) *
                             *(float *)((long)register0x00000020 + -0x9c);
                        *(float *)((long)register0x00000020 + -0x8c) = (fVar38 * fVar29) / fVar24;
                        auVar14._4_4_ = fVar24;
                        auVar14._0_4_ = fVar24;
                        auVar14._8_4_ = *(undefined4 *)((long)register0x00000020 + -0x30);
                        auVar14._12_4_ = *(undefined4 *)((long)register0x00000020 + -0x2c);
                        auVar37 = divps(auVar36,auVar14);
                        *(undefined1 (*) [16])((long)register0x00000020 + -0x48) = auVar37;
                        goto label_042b6654;
                      }
                      fVar28 = *(float *)((long)register0x00000020 + -0xa8);
                      fVar18 = *(float *)((long)register0x00000020 + -0xa4);
                      if (g_data_057a65d5 == '\0') {
                        *(undefined8 *)((long)register0x00000020 + -0xc0) = 0x42b65c0;
                        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
                        fVar38 = *(float *)((long)register0x00000020 + -0xb8);
                        fVar28 = *(float *)((long)register0x00000020 + -0xa8);
                        fVar18 = *(float *)((long)register0x00000020 + -0xa4);
                        g_data_057a65d5 = '\x01';
                      }
                      puVar8 = *(undefined8 **)(TypeInfo_Vector3 + 0xb8);
                      *(undefined8 *)((long)register0x00000020 + -0x48) = *puVar8;
                      *(undefined8 *)((long)register0x00000020 + -0x40) = 0;
                      *(undefined4 *)((long)register0x00000020 + -0x8c) = *(undefined4 *)(puVar8 + 1);
                      pCVar16 = *(Characters_Hook_o **)unaff_R14;
                      if (pCVar16 == (Characters_Hook_o *)0x0) {
                        __this_02 = (long *)0x0;
                        goto label_042b66bc;
                      }
                    }
                    relativeVelocity.fields._0_8_ =
                         SUB168(*(undefined1 (*) [16])((long)register0x00000020 + -0x48),0);
                    *(undefined8 *)((long)register0x00000020 + -0xc0) = 0x42b666c;
                    UVar39.fields.y = fVar18;
                    UVar39.fields.x = fVar28;
                    UVar39.fields.z = fVar38;
                    relativeVelocity.fields.z = *(float *)((long)register0x00000020 + -0x8c);
                    Characters_Hook__SetHooking(pCVar16,UVar39,relativeVelocity,pMVar17);
                    __this_02 = *(long **)&(__this_03->fields).MaxFootstepDistance;
                    if ((Characters_BaseCharacter_o *)__this_02 != (Characters_BaseCharacter_o *)0x0) {
                      bVar2 = (TypeInfo_Human->_2).naturalAligment;
                      if (((((Characters_BaseCharacter_o *)__this_02)->klass->_2).naturalAligment < bVar2) ||
                         ((((Characters_BaseCharacter_o *)__this_02)->klass->_2).typeHierarchy
                          [(ulong)bVar2 - 1] != TypeInfo_Human)) goto label_042b66c1;
                      __this_01 = *(Characters_HumanStats_o **)
                                   &(((Characters_BaseCharacter_o *)((long)__this_02 + 0x108))->fields).
                                    MaxFootstepDistance;
                      __this_02 = (long *)0x0;
                      if (__this_01 != (Characters_HumanStats_o *)0x0) {
                        Characters_HumanStats__UseHookGas(__this_01,(MethodInfo *)0x0);
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
          else {
            lVar6 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
            if ((lVar6 != 0) && (lVar6 = *(long *)(lVar6 + 0x28), lVar6 != 0)) {
              *(undefined1 (*) [16])((long)register0x00000020 + -0xb8) = auVar31;
              *(undefined8 *)((long)register0x00000020 + -0xa8) = uVar20;
              *(float *)((long)register0x00000020 + -0xa0) = extraout_XMM0_Dc;
              *(float *)((long)register0x00000020 + -0x9c) = extraout_XMM0_Dd;
              pUVar7 = *(UnityEngine_Transform_o **)(lVar6 + 0x10);
              __this_02 = (long *)0x0;
              if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                *(undefined8 *)((long)register0x00000020 + -0xc0) = 0x42b6034;
                UVar39 = UnityEngine_Transform__get_position(pUVar7,(MethodInfo *)0x0);
                auVar25._4_12_ = auVar37._4_12_;
                auVar25._0_4_ = UVar39.fields.z;
                uVar20 = auVar25._0_8_;
                fVar28 = UVar39.fields.x;
                fVar18 = UVar39.fields.y;
                uVar19 = extraout_XMM0_Dc_00;
                uVar21 = extraout_XMM0_Dd_00;
                if (g_data_057a68cb == '\0') {
                  *(undefined1 (*) [16])((long)register0x00000020 + -0x88) = auVar25;
                  auVar13._8_4_ = extraout_XMM0_Dc_00;
                  auVar13._0_8_ = UVar39.fields._0_8_;
                  auVar13._12_4_ = extraout_XMM0_Dd_00;
                  *(undefined1 (*) [16])((long)register0x00000020 + -0x78) = auVar13;
                  *(undefined8 *)((long)register0x00000020 + -0xc0) = 0x42b6056;
                  il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                  fVar28 = *(float *)((long)register0x00000020 + -0x78);
                  fVar18 = *(float *)((long)register0x00000020 + -0x74);
                  uVar19 = *(undefined4 *)((long)register0x00000020 + -0x70);
                  uVar21 = *(undefined4 *)((long)register0x00000020 + -0x6c);
                  uVar20 = *(undefined8 *)((long)register0x00000020 + -0x88);
                  g_data_057a68cb = '\x01';
                }
                fVar30 = SUB164(*(undefined1 (*) [16])((long)register0x00000020 + -0xa8),4);
                fVar38 = fVar18 - fVar30;
                fVar24 = (float)uVar20 - *(float *)((long)register0x00000020 + -0xb8);
                fVar28 = fVar28 - SUB164(*(undefined1 (*) [16])((long)register0x00000020 + -0xa8),0);
                fVar29 = (float)((ulong)uVar20 >> 0x20) - *(float *)((long)register0x00000020 + -0xb4);
                fVar30 = fVar18 - fVar30;
                __this_02 = (long *)TypeInfo_Math;
                if ((TypeInfo_Math->fields)._stepPhase == 0) {
                  *(float *)((long)register0x00000020 + -0x88) = fVar24;
                  *(float *)((long)register0x00000020 + -0x84) = fVar28;
                  *(float *)((long)register0x00000020 + -0x80) = fVar29;
                  *(float *)((long)register0x00000020 + -0x7c) = fVar30;
                  *(float *)((long)register0x00000020 + -0x78) = fVar38;
                  *(float *)((long)register0x00000020 + -0x74) = fVar18;
                  *(undefined4 *)((long)register0x00000020 + -0x70) = uVar19;
                  *(undefined4 *)((long)register0x00000020 + -0x6c) = uVar21;
                  *(undefined8 *)((long)register0x00000020 + -0xc0) = 0x42b60aa;
                  il2cpp_runtime_helper_02337ed0();
                  fVar38 = *(float *)((long)register0x00000020 + -0x78);
                  fVar24 = *(float *)((long)register0x00000020 + -0x88);
                  fVar28 = *(float *)((long)register0x00000020 + -0x84);
                  fVar29 = *(float *)((long)register0x00000020 + -0x80);
                  fVar30 = *(float *)((long)register0x00000020 + -0x7c);
                }
                fVar28 = fVar28 * fVar28;
                fVar29 = fVar29 * fVar29;
                fVar30 = fVar30 * fVar30;
                fVar18 = fVar28 + fVar38 * fVar38 + fVar24 * fVar24;
                if (fVar18 < 0.0) {
                  *(undefined8 *)((long)register0x00000020 + -0xc0) = 0x42b610a;
                  fVar18 = sqrtf(fVar18);
                  fVar28 = extraout_XMM0_Db;
                  fVar29 = extraout_XMM0_Dc_01;
                  fVar30 = extraout_XMM0_Dd_01;
                }
                else {
                  fVar18 = SQRT(fVar18);
                }
                fVar18 = fVar18 * *(float *)(&g_data_00d1d698 + (ulong)(50.0 < fVar18) * 4);
                if (*(char *)&(__this_03->fields).Guild != '\0') {
                  fVar18 = -fVar18;
                  fVar28 = -fVar28;
                  fVar29 = -fVar29;
                  fVar30 = -fVar30;
                }
                lVar6 = *(long *)&(__this_03->fields).MaxFootstepDistance;
                if ((lVar6 != 0) && (lVar6 = *(long *)(lVar6 + 0x70), lVar6 != 0)) {
                  *(float *)((long)register0x00000020 + -0x88) = fVar18;
                  *(float *)((long)register0x00000020 + -0x84) = fVar28;
                  *(float *)((long)register0x00000020 + -0x80) = fVar29;
                  *(float *)((long)register0x00000020 + -0x7c) = fVar30;
                  __this_02 = *(long **)(lVar6 + 0x10);
                  if ((Characters_BaseCharacter_o *)__this_02 != (Characters_BaseCharacter_o *)0x0) {
                    *(undefined8 *)((long)register0x00000020 + -0xc0) = 0x42b6167;
                    UVar39 = UnityEngine_Transform__get_right
                                       ((UnityEngine_Transform_o *)__this_02,(MethodInfo *)0x0);
                    fVar38 = *(float *)((long)register0x00000020 + -0x88);
                    uVar20 = CONCAT44(*(float *)((long)register0x00000020 + -0xa4) + fVar38 * UVar39.fields.y,
                                      *(float *)((long)register0x00000020 + -0xa8) + fVar38 * UVar39.fields.x)
                    ;
                    fVar28 = *(float *)((long)register0x00000020 + -0xa0) +
                             *(float *)((long)register0x00000020 + -0x80) * extraout_XMM0_Dc_02;
                    fVar18 = *(float *)((long)register0x00000020 + -0x9c) +
                             *(float *)((long)register0x00000020 + -0x7c) * extraout_XMM0_Dd_02;
                    auVar31._4_12_ = SUB1612(*(undefined1 (*) [16])((long)register0x00000020 + -0xb8),4);
                    auVar31._0_4_ =
                         SUB164(*(undefined1 (*) [16])((long)register0x00000020 + -0xb8),0) +
                         UVar39.fields.z * fVar38;
                    goto label_042b618a;
                  }
                }
              }
            }
          }
          goto label_042b66bc;
        }
      }
    }
    else {
      if (*(long *)unaff_R14 != 0) {
        if (*(int *)(*(long *)unaff_R14 + 0x20) != 0) goto label_042b5f1e;
        *(undefined8 *)unaff_R14 = 0;
        *(undefined8 *)((long)register0x00000020 + -0xc0) = 0x42b60e9;
        il2cpp_runtime_helper_022b4080(unaff_R14);
        cVar1 = (__this_03->fields).field_0x2c;
        goto joined_r0x042b60ee;
      }
label_042b66bc:
      *(undefined8 *)((long)register0x00000020 + -0xc0) = 0x42b66c1;
      il2cpp_runtime_helper_022b2c90();
    }
label_042b66c1:
    *(undefined8 *)((long)register0x00000020 + -0xc0) = 0x42b66c6;
    il2cpp_runtime_helper_022b2fd0();
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0xb8);
    __this = (Characters_HookUseable_o *)__this_02;
    unaff_R15 = __this_03;
  } while( true );
}


// Characters.HookUseable$$FixedUpdateMock
// il2cpp: void Characters_HookUseable__FixedUpdateMock (Characters_HookUseable_o* __this, const MethodInfo* method);
// 0x42b66e0

void Characters_HookUseable__FixedUpdateMock(Characters_HookUseable_o *__this,MethodInfo *method)

{
  Il2CppRGCTXData *x;
  System_Collections_Generic_List_object__o *pSVar1;
  long lVar2;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  System_Collections_Generic_List_Enumerator_object__o __this_07;
  bool_conflict bVar3;
  long *plVar4;
  MethodInfo *method_00;
  Characters_Hook_o *__this_08;
  undefined1 auVar5 [12];
  System_Collections_Generic_List_Enumerator_T__c *pSVar6;
  Il2CppType *pIVar7;
  Il2CppObject *pIVar8;
  undefined1 auStack_60 [16];
  Il2CppObject *pIStack_50;
  Il2CppRGCTXData *pIStack_48;
  
  if (g_data_057addc5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057addc5 = '\x01';
  }
  x = (Il2CppRGCTXData *)(__this->fields)._activeHook;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  method_00 = (MethodInfo *)0x0;
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    return;
  }
  __this_08 = (__this->fields)._activeHook;
  if (__this_08 != (Characters_Hook_o *)0x0) {
    Characters_Hook__FixedUpdateMock(__this_08,method_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pIStack_48 = x;
  if (g_data_057addc7 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Hook_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Characters_Hook_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Hook_get_Item);
    g_data_057addc7 = '\x01';
  }
  pSVar6 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar7 = (Il2CppType *)0x0;
  pIVar8 = (Il2CppObject *)0x0;
  pSVar1 = *(System_Collections_Generic_List_object__o **)&(__this_08->fields)._hasHookParent;
  if (pSVar1 == (System_Collections_Generic_List_object__o *)0x0) goto label_042b6905;
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)auStack_60,pSVar1,MethodInfo_List_1_T_Enumerator_Characters_Hook_GetEnumerator);
  pSVar6 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_60._0_8_;
  pIVar7 = (Il2CppType *)auStack_60._8_8_;
  pIVar8 = pIStack_50;
  do {
    __this_00.fields._8_8_ = pIVar7;
    __this_00.fields._list = (System_Collections_Generic_List_T__o *)pSVar6;
    __this_00.fields._current = pIVar8;
    bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffff80);
    if ((char)bVar3 == '\0') {
      __this_01.fields._8_8_ = pIVar7;
      __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar6;
      __this_01.fields._current = pIVar8;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffff80);
      pSVar1 = *(System_Collections_Generic_List_object__o **)&(__this_08->fields)._hasHookParent;
      if (pSVar1 == (System_Collections_Generic_List_object__o *)0x0) goto label_042b6905;
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)auStack_60,pSVar1,MethodInfo_List_1_T_Enumerator_Characters_Hook_GetEnumerator);
      pSVar6 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_60._0_8_;
      pIVar7 = (Il2CppType *)auStack_60._8_8_;
      pIVar8 = pIStack_50;
      goto label_042b6880;
    }
    if (pIVar8 == (Il2CppObject *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      goto label_042b6900;
    }
  } while (*(int *)&pIVar8[2].klass != 0);
  goto label_042b68a5;
label_042b6900:
  il2cpp_runtime_helper_022b2c90();
label_042b6905:
  do {
    auVar5 = il2cpp_runtime_helper_022b2c90();
    if (auVar5._8_4_ != 1) {
      __this_06.fields._8_8_ = pIVar7;
      __this_06.fields._list = (System_Collections_Generic_List_T__o *)pSVar6;
      __this_06.fields._current = pIVar8;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_06,(MethodInfo_321A1C0 *)&stack0xffffffffffffff80);
label_042b69d7:
      _Unwind_Resume(auVar5._0_8_);
    }
    plVar4 = (long *)__cxa_begin_catch(auVar5._0_8_);
    lVar2 = *plVar4;
    __cxa_end_catch();
    __this_05.fields._8_8_ = pIVar7;
    __this_05.fields._list = (System_Collections_Generic_List_T__o *)pSVar6;
    __this_05.fields._current = pIVar8;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_05,(MethodInfo_321A1C0 *)&stack0xffffffffffffff80);
    if (lVar2 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar2);
      __this_07.fields._8_8_ = pIVar7;
      __this_07.fields._list = (System_Collections_Generic_List_T__o *)pSVar6;
      __this_07.fields._current = pIVar8;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_07,(MethodInfo_321A1C0 *)&stack0xffffffffffffff80);
      goto label_042b69d7;
    }
label_042b68cb:
    pSVar1 = *(System_Collections_Generic_List_object__o **)&(__this_08->fields)._hasHookParent;
    if (pSVar1 != (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List_object___get_Item(pSVar1,0,MethodInfo_Hook_get_Item);
      return;
    }
  } while( true );
  while (1 < *(int *)&pIVar8[2].klass - 3U) {
label_042b6880:
    __this_02.fields._8_8_ = pIVar7;
    __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar6;
    __this_02.fields._current = pIVar8;
    bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (__this_02,(MethodInfo_321A1D0 *)&stack0xffffffffffffff80);
    if ((char)bVar3 == '\0') {
      __this_04.fields._8_8_ = pIVar7;
      __this_04.fields._list = (System_Collections_Generic_List_T__o *)pSVar6;
      __this_04.fields._current = pIVar8;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff80);
      goto label_042b68cb;
    }
    if (pIVar8 == (Il2CppObject *)0x0) goto label_042b6900;
  }
label_042b68a5:
  __this_03.fields._8_8_ = pIVar7;
  __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar6;
  __this_03.fields._current = pIVar8;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff80);
  return;
}


// Characters.HookUseable$$StartHook
// il2cpp: void Characters_HookUseable__StartHook (Characters_HookUseable_o* __this, const MethodInfo* method);
// 0x42b5e90

void Characters_HookUseable__StartHook(Characters_HookUseable_o *__this,MethodInfo *method)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  Characters_BaseCharacter_c *pCVar4;
  Il2CppMethodPointer pIVar5;
  long lVar6;
  UnityEngine_Transform_o *pUVar7;
  UnityEngine_Rigidbody_o *__this_00;
  undefined8 *puVar8;
  Characters_HumanStats_o *__this_01;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  bool_conflict bVar15;
  Characters_Hook_o *pCVar16;
  Characters_BaseCharacter_o **unaff_RBX;
  MethodInfo *pMVar17;
  Characters_BaseCharacter_o *__this_02;
  long *__this_03;
  Il2CppClass **unaff_R12;
  long *unaff_R13;
  bool_conflict *unaff_R14;
  Characters_BaseCharacter_o *unaff_R15;
  float fVar18;
  undefined4 uVar19;
  undefined8 uVar20;
  float extraout_XMM0_Db;
  undefined4 uVar21;
  float extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  float extraout_XMM0_Dc_01;
  float extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dc_03;
  undefined4 uVar22;
  undefined4 extraout_XMM0_Dc_04;
  undefined4 extraout_XMM0_Dc_05;
  undefined4 extraout_XMM0_Dc_06;
  undefined4 extraout_XMM0_Dc_07;
  float extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  float extraout_XMM0_Dd_01;
  float extraout_XMM0_Dd_02;
  undefined4 extraout_XMM0_Dd_03;
  undefined4 uVar23;
  undefined4 extraout_XMM0_Dd_04;
  undefined4 extraout_XMM0_Dd_05;
  undefined4 extraout_XMM0_Dd_06;
  undefined4 extraout_XMM0_Dd_07;
  float fVar24;
  undefined8 extraout_XMM1_Qa;
  float fVar28;
  undefined8 extraout_XMM1_Qa_00;
  float fVar29;
  undefined8 extraout_XMM1_Qb;
  float fVar30;
  undefined8 extraout_XMM1_Qb_00;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar38;
  UnityEngine_Vector3_o UVar39;
  UnityEngine_Vector3_o relativeVelocity;
  undefined1 auVar25 [16];
  
  do {
    __this_02 = (Characters_BaseCharacter_o *)__this;
    *(Characters_BaseCharacter_o **)((long)register0x00000020 + -8) = unaff_R15;
    *(bool_conflict **)((long)register0x00000020 + -0x10) = unaff_R14;
    *(long **)((long)register0x00000020 + -0x18) = unaff_R13;
    *(Il2CppClass ***)((long)register0x00000020 + -0x20) = unaff_R12;
    *(Characters_BaseCharacter_o ***)((long)register0x00000020 + -0x28) = unaff_RBX;
    if (g_data_057addc6 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0xc0) = 0x42b5eb8;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Human);
      *(undefined8 *)((long)register0x00000020 + -0xc0) = 0x42b5ec4;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      *(undefined8 *)((long)register0x00000020 + -0xc0) = 0x42b5ed0;
      il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
      g_data_057addc6 = '\x01';
    }
    unaff_RBX = *(Characters_BaseCharacter_o ***)&(__this_02->fields).HasExplicitNameTag;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0xc0) = 0x42b5ef4;
      il2cpp_runtime_helper_02337ed0();
    }
    unaff_R14 = &(__this_02->fields).HasExplicitNameTag;
    *(undefined8 *)((long)register0x00000020 + -0xc0) = 0x42b5f04;
    __this_03 = (long *)unaff_RBX;
    bVar15 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    unaff_R12 = (Il2CppClass **)&TypeInfo_Object;
    if ((char)bVar15 == '\0') {
label_042b5f1e:
      cVar1 = (__this_02->fields).field_0x2c;
joined_r0x042b60ee:
      if (cVar1 == '\0') {
        return;
      }
      unaff_RBX = *(Characters_BaseCharacter_o ***)unaff_R14;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0xc0) = 0x42b5f3e;
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar17 = (MethodInfo *)0x0;
      *(undefined8 *)((long)register0x00000020 + -0xc0) = 0x42b5f4a;
      bVar15 = UnityEngine_Object__op_Equality
                         ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar15 == '\0') {
        return;
      }
      *(undefined8 *)((long)register0x00000020 + -0xc0) = 0x42b5f5a;
      pCVar16 = Characters_HookUseable__FindAvailableHook((Characters_HookUseable_o *)__this_02,pMVar17);
      *(Characters_Hook_o **)&(__this_02->fields).HasExplicitNameTag = pCVar16;
      *(undefined8 *)((long)register0x00000020 + -0xc0) = 0x42b5f69;
      il2cpp_runtime_helper_022b4080(unaff_R14);
      __this_03 = *(long **)&(__this_02->fields).MaxFootstepDistance;
      if ((Characters_BaseCharacter_o *)__this_03 == (Characters_BaseCharacter_o *)0x0) goto label_042b66bc;
      unaff_R12 = &TypeInfo_Human;
      bVar2 = (TypeInfo_Human->_2).naturalAligment;
      if ((bVar2 <= (((Characters_BaseCharacter_o *)__this_03)->klass->_2).naturalAligment) &&
         ((((Characters_BaseCharacter_o *)__this_03)->klass->_2).typeHierarchy[(ulong)bVar2 - 1] ==
          TypeInfo_Human)) {
        pCVar4 = ((Characters_BaseCharacter_o *)__this_03)->klass;
        bVar2 = (TypeInfo_Human->_2).naturalAligment;
        if ((bVar2 <= (pCVar4->_2).naturalAligment) &&
           ((pCVar4->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_Human)) {
          pIVar5 = (pCVar4->vtable)._66_GetAimPoint.methodPtr;
          *(undefined8 *)((long)register0x00000020 + -0xc0) = 0x42b5fde;
          uVar20 = (*pIVar5)();
          auVar37._8_8_ = extraout_XMM1_Qb;
          auVar37._0_8_ = extraout_XMM1_Qa;
          auVar31._8_4_ = (int)extraout_XMM1_Qb;
          auVar31._0_8_ = extraout_XMM1_Qa;
          auVar31._12_4_ = (int)((ulong)extraout_XMM1_Qb >> 0x20);
          fVar28 = extraout_XMM0_Dc;
          fVar18 = extraout_XMM0_Dd;
          if (*(char *)&(__this_02->fields).VisibleName == '\0') {
label_042b618a:
            lVar6 = *(long *)unaff_R14;
            if (lVar6 != 0) {
              *(undefined1 (*) [16])((long)register0x00000020 + -0xb8) = auVar31;
              *(undefined8 *)((long)register0x00000020 + -0xa8) = uVar20;
              *(float *)((long)register0x00000020 + -0xa0) = fVar28;
              *(float *)((long)register0x00000020 + -0x9c) = fVar18;
              pUVar7 = *(UnityEngine_Transform_o **)(lVar6 + 0x28);
              __this_03 = (long *)0x0;
              if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                *(undefined8 *)((long)register0x00000020 + -0xc0) = 0x42b61b3;
                UVar39 = UnityEngine_Transform__get_position(pUVar7,(MethodInfo *)0x0);
                fVar28 = UVar39.fields.z;
                auVar32._0_8_ = UVar39.fields._0_8_;
                auVar32._8_4_ = extraout_XMM0_Dc_03;
                auVar32._12_4_ = extraout_XMM0_Dd_03;
                if (g_data_057a6845 == '\0') {
                  *(float *)((long)register0x00000020 + -0x88) = fVar28;
                  *(undefined1 (*) [16])((long)register0x00000020 + -0x78) = auVar32;
                  *(undefined8 *)((long)register0x00000020 + -0xc0) = 0x42b61d6;
                  il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                  auVar32 = *(undefined1 (*) [16])((long)register0x00000020 + -0x78);
                  fVar28 = *(float *)((long)register0x00000020 + -0x88);
                  g_data_057a6845 = '\x01';
                }
                fVar18 = *(float *)((long)register0x00000020 + -0xa8) - auVar32._0_4_;
                fVar38 = *(float *)((long)register0x00000020 + -0xa4) - auVar32._4_4_;
                auVar33._4_12_ = SUB1612(*(undefined1 (*) [16])((long)register0x00000020 + -0xb8),4);
                auVar33._0_4_ = SUB164(*(undefined1 (*) [16])((long)register0x00000020 + -0xb8),0) - fVar28;
                unaff_RBX = &TypeInfo_Math;
                iVar3 = (TypeInfo_Math->fields)._stepPhase;
                *(float *)((long)register0x00000020 + -0xa8) = fVar18;
                *(float *)((long)register0x00000020 + -0xa4) = fVar38;
                *(float *)((long)register0x00000020 + -0xa0) =
                     *(float *)((long)register0x00000020 + -0xa0) - auVar32._8_4_;
                *(float *)((long)register0x00000020 + -0x9c) =
                     *(float *)((long)register0x00000020 + -0x9c) - auVar32._12_4_;
                __this_03 = (long *)TypeInfo_Math;
                if (iVar3 == 0) {
                  *(undefined1 (*) [16])((long)register0x00000020 + -0xb8) = auVar33;
                  *(undefined8 *)((long)register0x00000020 + -0xc0) = 0x42b6219;
                  il2cpp_runtime_helper_02337ed0();
                  auVar33 = *(undefined1 (*) [16])((long)register0x00000020 + -0xb8);
                  fVar18 = *(float *)((long)register0x00000020 + -0xa8);
                  fVar38 = *(float *)((long)register0x00000020 + -0xa4);
                }
                uVar19 = auVar33._8_4_;
                uVar21 = auVar33._12_4_;
                fVar28 = auVar33._0_4_ * auVar33._0_4_ + fVar38 * fVar38 + fVar18 * fVar18;
                auVar26 = ZEXT816(0);
                if (fVar28 < 0.0) {
                  *(undefined1 (*) [16])((long)register0x00000020 + -0xb8) = auVar33;
                  *(undefined8 *)((long)register0x00000020 + -0xc0) = 0x42b629d;
                  fVar28 = sqrtf(fVar28);
                  auVar33 = *(undefined1 (*) [16])((long)register0x00000020 + -0xb8);
                  uVar19 = extraout_XMM0_Dc_04;
                  uVar21 = extraout_XMM0_Dd_04;
                  if (1e-05 < fVar28) goto label_042b62aa;
label_042b6250:
                  if (g_data_057a65d5 == '\0') {
                    __this_03 = &TypeInfo_Vector3;
                    *(undefined8 *)((long)register0x00000020 + -0xc0) = 0x42b6265;
                    il2cpp_runtime_helper_023445d0();
                    auVar26._8_8_ = extraout_XMM1_Qb_00;
                    auVar26._0_8_ = extraout_XMM1_Qa_00;
                    g_data_057a65d5 = '\x01';
                  }
                  uVar20 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
                  uVar19 = (undefined4)uVar20;
                  uVar21 = (undefined4)((ulong)uVar20 >> 0x20);
                  uVar22 = 0;
                  uVar23 = 0;
                  auVar34 = ZEXT416(*(uint *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1));
                  lVar6._0_4_ = (__this_02->fields).MaxFootstepDistance;
                  lVar6._4_4_ = (__this_02->fields).MaxSoundDistance;
                }
                else {
                  fVar28 = SQRT(fVar28);
                  if (fVar28 <= 1e-05) goto label_042b6250;
label_042b62aa:
                  auVar34._4_12_ = auVar33._4_12_;
                  auVar34._0_4_ = auVar33._0_4_ / fVar28;
                  auVar12._4_4_ = fVar28;
                  auVar12._0_4_ = fVar28;
                  auVar12._8_4_ = uVar19;
                  auVar12._12_4_ = uVar21;
                  auVar26 = divps(*(undefined1 (*) [16])((long)register0x00000020 + -0xa8),auVar12);
                  uVar19 = auVar26._0_4_;
                  uVar21 = auVar26._4_4_;
                  uVar22 = auVar26._8_4_;
                  uVar23 = auVar26._12_4_;
                  lVar6._0_4_ = (__this_02->fields).MaxFootstepDistance;
                  lVar6._4_4_ = (__this_02->fields).MaxSoundDistance;
                }
                if ((lVar6 != 0) && (lVar6 = *(long *)(lVar6 + 0x70), lVar6 != 0)) {
                  *(undefined1 (*) [16])((long)register0x00000020 + -0xb8) = auVar34;
                  *(undefined4 *)((long)register0x00000020 + -0xa8) = uVar19;
                  *(undefined4 *)((long)register0x00000020 + -0xa4) = uVar21;
                  *(undefined4 *)((long)register0x00000020 + -0xa0) = uVar22;
                  *(undefined4 *)((long)register0x00000020 + -0x9c) = uVar23;
                  __this_00 = *(UnityEngine_Rigidbody_o **)(lVar6 + 0x18);
                  __this_03 = (long *)0x0;
                  if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
                    *(undefined1 (*) [16])((long)register0x00000020 + -0x68) =
                         ZEXT416(*(uint *)((long)&(__this_02->fields).Guild + 4));
                    pMVar17 = (MethodInfo *)0x0;
                    *(undefined8 *)((long)register0x00000020 + -0xc0) = 0x42b62ff;
                    UVar39 = UnityEngine_Rigidbody__get_velocity(__this_00,(MethodInfo *)0x0);
                    auVar27._4_12_ = auVar26._4_12_;
                    auVar27._0_4_ = UVar39.fields.z;
                    auVar9._8_4_ = extraout_XMM0_Dc_05;
                    auVar9._0_8_ = UVar39.fields._0_8_;
                    auVar9._12_4_ = extraout_XMM0_Dd_05;
                    *(undefined1 (*) [16])((long)register0x00000020 + -0x78) = auVar9;
                    *(undefined1 (*) [16])((long)register0x00000020 + -0x88) = auVar27;
                    if (g_data_057a65d5 == '\0') {
                      *(undefined8 *)((long)register0x00000020 + -0xc0) = 0x42b631e;
                      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
                      g_data_057a65d5 = '\x01';
                    }
                    fVar28 = *(float *)((long)register0x00000020 + -0x68);
                    fVar18 = *(float *)((long)register0x00000020 + -0x60);
                    fVar38 = *(float *)((long)register0x00000020 + -0x5c);
                    unaff_R13 = &TypeInfo_Vector3;
                    puVar8 = *(undefined8 **)(TypeInfo_Vector3 + 0xb8);
                    *(undefined8 *)((long)register0x00000020 + -0x48) = *puVar8;
                    *(undefined8 *)((long)register0x00000020 + -0x40) = 0;
                    *(undefined4 *)((long)register0x00000020 + -0x8c) = *(undefined4 *)(puVar8 + 1);
                    fVar24 = fVar28;
                    fVar29 = fVar28;
                    if (g_data_057a6845 == '\0') {
                      *(float *)((long)register0x00000020 + -0x58) = fVar28;
                      *(float *)((long)register0x00000020 + -0x54) = fVar28;
                      *(float *)((long)register0x00000020 + -0x50) = fVar18;
                      *(float *)((long)register0x00000020 + -0x4c) = fVar38;
                      *(undefined8 *)((long)register0x00000020 + -0xc0) = 0x42b6371;
                      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                      fVar24 = *(float *)((long)register0x00000020 + -0x58);
                      fVar29 = *(float *)((long)register0x00000020 + -0x54);
                      fVar18 = *(float *)((long)register0x00000020 + -0x50);
                      fVar38 = *(float *)((long)register0x00000020 + -0x4c);
                      fVar28 = *(float *)((long)register0x00000020 + -0x68);
                      g_data_057a6845 = '\x01';
                    }
                    fVar24 = *(float *)((long)register0x00000020 + -0xa8) * fVar24;
                    fVar29 = *(float *)((long)register0x00000020 + -0xa4) * fVar29;
                    auVar35._4_12_ = SUB1612(*(undefined1 (*) [16])((long)register0x00000020 + -0xb8),4);
                    auVar35._0_4_ =
                         SUB164(*(undefined1 (*) [16])((long)register0x00000020 + -0xb8),0) * fVar28;
                    iVar3 = (TypeInfo_Math->fields)._stepPhase;
                    *(undefined1 (*) [16])((long)register0x00000020 + -0xb8) = auVar35;
                    *(float *)((long)register0x00000020 + -0xa8) = fVar24;
                    *(float *)((long)register0x00000020 + -0xa4) = fVar29;
                    *(float *)((long)register0x00000020 + -0xa0) =
                         *(float *)((long)register0x00000020 + -0xa0) * fVar18;
                    *(float *)((long)register0x00000020 + -0x9c) =
                         *(float *)((long)register0x00000020 + -0x9c) * fVar38;
                    if (iVar3 == 0) {
                      *(undefined8 *)((long)register0x00000020 + -0xc0) = 0x42b63ac;
                      il2cpp_runtime_helper_02337ed0();
                      auVar35 = *(undefined1 (*) [16])((long)register0x00000020 + -0xb8);
                      fVar24 = *(float *)((long)register0x00000020 + -0xa8);
                      fVar29 = *(float *)((long)register0x00000020 + -0xa4);
                    }
                    uVar19 = auVar35._8_4_;
                    uVar21 = auVar35._12_4_;
                    fVar28 = auVar35._0_4_ * auVar35._0_4_ + fVar29 * fVar29 + fVar24 * fVar24;
                    *(float *)((long)register0x00000020 + -0x38) = fVar28;
                    *(int *)((long)register0x00000020 + -0x34) = auVar35._4_4_;
                    *(undefined4 *)((long)register0x00000020 + -0x30) = uVar19;
                    *(undefined4 *)((long)register0x00000020 + -0x2c) = uVar21;
                    if (fVar28 < 0.0) {
                      *(undefined8 *)((long)register0x00000020 + -0xc0) = 0x42b6436;
                      fVar28 = sqrtf(fVar28);
                      auVar35 = *(undefined1 (*) [16])((long)register0x00000020 + -0xb8);
                      uVar19 = extraout_XMM0_Dc_06;
                      uVar21 = extraout_XMM0_Dd_06;
                      if (1e-05 < fVar28) goto label_042b6443;
label_042b63eb:
                      if (g_data_057a65d5 == '\0') {
                        *(undefined8 *)((long)register0x00000020 + -0xc0) = 0x42b6400;
                        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
                        g_data_057a65d5 = '\x01';
                      }
                      puVar8 = *(undefined8 **)(TypeInfo_Vector3 + 0xb8);
                      *(undefined8 *)((long)register0x00000020 + -0x58) = *puVar8;
                      *(undefined8 *)((long)register0x00000020 + -0x50) = 0;
                      *(undefined4 *)((long)register0x00000020 + -0x68) = *(undefined4 *)(puVar8 + 1);
                    }
                    else {
                      fVar28 = SQRT(fVar28);
                      if (fVar28 <= 1e-05) goto label_042b63eb;
label_042b6443:
                      *(float *)((long)register0x00000020 + -0x68) = auVar35._0_4_ / fVar28;
                      auVar11._4_4_ = fVar28;
                      auVar11._0_4_ = fVar28;
                      auVar11._8_4_ = uVar19;
                      auVar11._12_4_ = uVar21;
                      auVar37 = divps(*(undefined1 (*) [16])((long)register0x00000020 + -0xa8),auVar11);
                      *(undefined1 (*) [16])((long)register0x00000020 + -0x58) = auVar37;
                    }
                    if (g_data_057a6845 == '\0') {
                      *(undefined8 *)((long)register0x00000020 + -0xc0) = 0x42b6473;
                      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                      g_data_057a6845 = '\x01';
                    }
                    if ((TypeInfo_Math->fields)._stepPhase == 0) {
                      *(undefined8 *)((long)register0x00000020 + -0xc0) = 0x42b648b;
                      il2cpp_runtime_helper_02337ed0();
                    }
                    uVar19 = *(undefined4 *)((long)register0x00000020 + -0x80);
                    uVar21 = *(undefined4 *)((long)register0x00000020 + -0x7c);
                    fVar28 = *(float *)((long)register0x00000020 + -0x88) *
                             *(float *)((long)register0x00000020 + -0x88) +
                             *(float *)((long)register0x00000020 + -0x74) *
                             *(float *)((long)register0x00000020 + -0x74) +
                             *(float *)((long)register0x00000020 + -0x78) *
                             *(float *)((long)register0x00000020 + -0x78);
                    if (fVar28 < 0.0) {
                      *(undefined8 *)((long)register0x00000020 + -0xc0) = 0x42b64f7;
                      fVar28 = sqrtf(fVar28);
                      uVar19 = extraout_XMM0_Dc_07;
                      uVar21 = extraout_XMM0_Dd_07;
                      if (1e-05 < fVar28) goto label_042b6500;
label_042b64c0:
                      if (g_data_057a65d5 == '\0') {
                        *(undefined8 *)((long)register0x00000020 + -0xc0) = 0x42b64d5;
                        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
                        g_data_057a65d5 = '\x01';
                      }
                      uVar20 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
                      fVar18 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
                    }
                    else {
                      fVar28 = SQRT(fVar28);
                      if (fVar28 <= 1e-05) goto label_042b64c0;
label_042b6500:
                      fVar18 = *(float *)((long)register0x00000020 + -0x88) / fVar28;
                      auVar10._4_4_ = fVar28;
                      auVar10._0_4_ = fVar28;
                      auVar10._8_4_ = uVar19;
                      auVar10._12_4_ = uVar21;
                      auVar37 = divps(*(undefined1 (*) [16])((long)register0x00000020 + -0x78),auVar10);
                      uVar20 = auVar37._0_8_;
                    }
                    *(undefined8 *)((long)register0x00000020 + -0xc0) = 0x42b653b;
                    fVar24 = acosf(*(float *)((long)register0x00000020 + -0x54) *
                                   (float)((ulong)uVar20 >> 0x20) +
                                   *(float *)((long)register0x00000020 + -0x58) * (float)uVar20 +
                                   *(float *)((long)register0x00000020 + -0x68) * fVar18);
                    fVar28 = *(float *)((long)register0x00000020 + -0xa8);
                    fVar18 = *(float *)((long)register0x00000020 + -0xa4);
                    fVar38 = *(float *)((long)register0x00000020 + -0xb8);
                    if (90.0 < ABS(fVar24 * 57.29578)) {
label_042b6654:
                      pCVar16 = *(Characters_Hook_o **)unaff_R14;
                      __this_03 = (long *)0x0;
                      if (pCVar16 == (Characters_Hook_o *)0x0) goto label_042b66bc;
                    }
                    else {
                      if (g_data_057a6931 == '\0') {
                        *(undefined8 *)((long)register0x00000020 + -0xc0) = 0x42b6579;
                        il2cpp_runtime_helper_023445d0(&TypeInfo_Mathf);
                        fVar38 = *(float *)((long)register0x00000020 + -0xb8);
                        g_data_057a6931 = '\x01';
                      }
                      fVar24 = *(float *)((long)register0x00000020 + -0x38);
                      if (**(float **)(TypeInfo_Mathf + 0xb8) <= fVar24) {
                        fVar28 = *(float *)((long)register0x00000020 + -0xa8);
                        fVar18 = *(float *)((long)register0x00000020 + -0xa4);
                        fVar29 = *(float *)((long)register0x00000020 + -0x88) * fVar38 +
                                 *(float *)((long)register0x00000020 + -0x74) * fVar18 +
                                 *(float *)((long)register0x00000020 + -0x78) * fVar28;
                        auVar36._0_4_ = fVar29 * fVar28;
                        auVar36._4_4_ = fVar29 * fVar18;
                        auVar36._8_4_ =
                             *(float *)((long)register0x00000020 + -0x80) *
                             *(float *)((long)register0x00000020 + -0xa0);
                        auVar36._12_4_ =
                             *(float *)((long)register0x00000020 + -0x7c) *
                             *(float *)((long)register0x00000020 + -0x9c);
                        *(float *)((long)register0x00000020 + -0x8c) = (fVar38 * fVar29) / fVar24;
                        auVar14._4_4_ = fVar24;
                        auVar14._0_4_ = fVar24;
                        auVar14._8_4_ = *(undefined4 *)((long)register0x00000020 + -0x30);
                        auVar14._12_4_ = *(undefined4 *)((long)register0x00000020 + -0x2c);
                        auVar37 = divps(auVar36,auVar14);
                        *(undefined1 (*) [16])((long)register0x00000020 + -0x48) = auVar37;
                        goto label_042b6654;
                      }
                      fVar28 = *(float *)((long)register0x00000020 + -0xa8);
                      fVar18 = *(float *)((long)register0x00000020 + -0xa4);
                      if (g_data_057a65d5 == '\0') {
                        *(undefined8 *)((long)register0x00000020 + -0xc0) = 0x42b65c0;
                        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
                        fVar38 = *(float *)((long)register0x00000020 + -0xb8);
                        fVar28 = *(float *)((long)register0x00000020 + -0xa8);
                        fVar18 = *(float *)((long)register0x00000020 + -0xa4);
                        g_data_057a65d5 = '\x01';
                      }
                      puVar8 = *(undefined8 **)(TypeInfo_Vector3 + 0xb8);
                      *(undefined8 *)((long)register0x00000020 + -0x48) = *puVar8;
                      *(undefined8 *)((long)register0x00000020 + -0x40) = 0;
                      *(undefined4 *)((long)register0x00000020 + -0x8c) = *(undefined4 *)(puVar8 + 1);
                      pCVar16 = *(Characters_Hook_o **)unaff_R14;
                      if (pCVar16 == (Characters_Hook_o *)0x0) {
                        __this_03 = (long *)0x0;
                        goto label_042b66bc;
                      }
                    }
                    relativeVelocity.fields._0_8_ =
                         SUB168(*(undefined1 (*) [16])((long)register0x00000020 + -0x48),0);
                    *(undefined8 *)((long)register0x00000020 + -0xc0) = 0x42b666c;
                    UVar39.fields.y = fVar18;
                    UVar39.fields.x = fVar28;
                    UVar39.fields.z = fVar38;
                    relativeVelocity.fields.z = *(float *)((long)register0x00000020 + -0x8c);
                    Characters_Hook__SetHooking(pCVar16,UVar39,relativeVelocity,pMVar17);
                    __this_03 = *(long **)&(__this_02->fields).MaxFootstepDistance;
                    if ((Characters_BaseCharacter_o *)__this_03 != (Characters_BaseCharacter_o *)0x0) {
                      bVar2 = (TypeInfo_Human->_2).naturalAligment;
                      if (((((Characters_BaseCharacter_o *)__this_03)->klass->_2).naturalAligment < bVar2) ||
                         ((((Characters_BaseCharacter_o *)__this_03)->klass->_2).typeHierarchy
                          [(ulong)bVar2 - 1] != TypeInfo_Human)) goto label_042b66c1;
                      __this_01 = *(Characters_HumanStats_o **)
                                   &(((Characters_BaseCharacter_o *)((long)__this_03 + 0x108))->fields).
                                    MaxFootstepDistance;
                      __this_03 = (long *)0x0;
                      if (__this_01 != (Characters_HumanStats_o *)0x0) {
                        Characters_HumanStats__UseHookGas(__this_01,(MethodInfo *)0x0);
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
          else {
            lVar6 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
            if ((lVar6 != 0) && (lVar6 = *(long *)(lVar6 + 0x28), lVar6 != 0)) {
              *(undefined1 (*) [16])((long)register0x00000020 + -0xb8) = auVar31;
              *(undefined8 *)((long)register0x00000020 + -0xa8) = uVar20;
              *(float *)((long)register0x00000020 + -0xa0) = extraout_XMM0_Dc;
              *(float *)((long)register0x00000020 + -0x9c) = extraout_XMM0_Dd;
              pUVar7 = *(UnityEngine_Transform_o **)(lVar6 + 0x10);
              __this_03 = (long *)0x0;
              if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                *(undefined8 *)((long)register0x00000020 + -0xc0) = 0x42b6034;
                UVar39 = UnityEngine_Transform__get_position(pUVar7,(MethodInfo *)0x0);
                auVar25._4_12_ = auVar37._4_12_;
                auVar25._0_4_ = UVar39.fields.z;
                uVar20 = auVar25._0_8_;
                fVar28 = UVar39.fields.x;
                fVar18 = UVar39.fields.y;
                uVar19 = extraout_XMM0_Dc_00;
                uVar21 = extraout_XMM0_Dd_00;
                if (g_data_057a68cb == '\0') {
                  *(undefined1 (*) [16])((long)register0x00000020 + -0x88) = auVar25;
                  auVar13._8_4_ = extraout_XMM0_Dc_00;
                  auVar13._0_8_ = UVar39.fields._0_8_;
                  auVar13._12_4_ = extraout_XMM0_Dd_00;
                  *(undefined1 (*) [16])((long)register0x00000020 + -0x78) = auVar13;
                  *(undefined8 *)((long)register0x00000020 + -0xc0) = 0x42b6056;
                  il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                  fVar28 = *(float *)((long)register0x00000020 + -0x78);
                  fVar18 = *(float *)((long)register0x00000020 + -0x74);
                  uVar19 = *(undefined4 *)((long)register0x00000020 + -0x70);
                  uVar21 = *(undefined4 *)((long)register0x00000020 + -0x6c);
                  uVar20 = *(undefined8 *)((long)register0x00000020 + -0x88);
                  g_data_057a68cb = '\x01';
                }
                fVar30 = SUB164(*(undefined1 (*) [16])((long)register0x00000020 + -0xa8),4);
                fVar38 = fVar18 - fVar30;
                fVar24 = (float)uVar20 - *(float *)((long)register0x00000020 + -0xb8);
                fVar28 = fVar28 - SUB164(*(undefined1 (*) [16])((long)register0x00000020 + -0xa8),0);
                fVar29 = (float)((ulong)uVar20 >> 0x20) - *(float *)((long)register0x00000020 + -0xb4);
                fVar30 = fVar18 - fVar30;
                __this_03 = (long *)TypeInfo_Math;
                if ((TypeInfo_Math->fields)._stepPhase == 0) {
                  *(float *)((long)register0x00000020 + -0x88) = fVar24;
                  *(float *)((long)register0x00000020 + -0x84) = fVar28;
                  *(float *)((long)register0x00000020 + -0x80) = fVar29;
                  *(float *)((long)register0x00000020 + -0x7c) = fVar30;
                  *(float *)((long)register0x00000020 + -0x78) = fVar38;
                  *(float *)((long)register0x00000020 + -0x74) = fVar18;
                  *(undefined4 *)((long)register0x00000020 + -0x70) = uVar19;
                  *(undefined4 *)((long)register0x00000020 + -0x6c) = uVar21;
                  *(undefined8 *)((long)register0x00000020 + -0xc0) = 0x42b60aa;
                  il2cpp_runtime_helper_02337ed0();
                  fVar38 = *(float *)((long)register0x00000020 + -0x78);
                  fVar24 = *(float *)((long)register0x00000020 + -0x88);
                  fVar28 = *(float *)((long)register0x00000020 + -0x84);
                  fVar29 = *(float *)((long)register0x00000020 + -0x80);
                  fVar30 = *(float *)((long)register0x00000020 + -0x7c);
                }
                fVar28 = fVar28 * fVar28;
                fVar29 = fVar29 * fVar29;
                fVar30 = fVar30 * fVar30;
                fVar18 = fVar28 + fVar38 * fVar38 + fVar24 * fVar24;
                if (fVar18 < 0.0) {
                  *(undefined8 *)((long)register0x00000020 + -0xc0) = 0x42b610a;
                  fVar18 = sqrtf(fVar18);
                  fVar28 = extraout_XMM0_Db;
                  fVar29 = extraout_XMM0_Dc_01;
                  fVar30 = extraout_XMM0_Dd_01;
                }
                else {
                  fVar18 = SQRT(fVar18);
                }
                fVar18 = fVar18 * *(float *)(&g_data_00d1d698 + (ulong)(50.0 < fVar18) * 4);
                if (*(char *)&(__this_02->fields).Guild != '\0') {
                  fVar18 = -fVar18;
                  fVar28 = -fVar28;
                  fVar29 = -fVar29;
                  fVar30 = -fVar30;
                }
                lVar6 = *(long *)&(__this_02->fields).MaxFootstepDistance;
                if ((lVar6 != 0) && (lVar6 = *(long *)(lVar6 + 0x70), lVar6 != 0)) {
                  *(float *)((long)register0x00000020 + -0x88) = fVar18;
                  *(float *)((long)register0x00000020 + -0x84) = fVar28;
                  *(float *)((long)register0x00000020 + -0x80) = fVar29;
                  *(float *)((long)register0x00000020 + -0x7c) = fVar30;
                  __this_03 = *(long **)(lVar6 + 0x10);
                  if ((Characters_BaseCharacter_o *)__this_03 != (Characters_BaseCharacter_o *)0x0) {
                    *(undefined8 *)((long)register0x00000020 + -0xc0) = 0x42b6167;
                    UVar39 = UnityEngine_Transform__get_right
                                       ((UnityEngine_Transform_o *)__this_03,(MethodInfo *)0x0);
                    fVar38 = *(float *)((long)register0x00000020 + -0x88);
                    uVar20 = CONCAT44(*(float *)((long)register0x00000020 + -0xa4) + fVar38 * UVar39.fields.y,
                                      *(float *)((long)register0x00000020 + -0xa8) + fVar38 * UVar39.fields.x)
                    ;
                    fVar28 = *(float *)((long)register0x00000020 + -0xa0) +
                             *(float *)((long)register0x00000020 + -0x80) * extraout_XMM0_Dc_02;
                    fVar18 = *(float *)((long)register0x00000020 + -0x9c) +
                             *(float *)((long)register0x00000020 + -0x7c) * extraout_XMM0_Dd_02;
                    auVar31._4_12_ = SUB1612(*(undefined1 (*) [16])((long)register0x00000020 + -0xb8),4);
                    auVar31._0_4_ =
                         SUB164(*(undefined1 (*) [16])((long)register0x00000020 + -0xb8),0) +
                         UVar39.fields.z * fVar38;
                    goto label_042b618a;
                  }
                }
              }
            }
          }
          goto label_042b66bc;
        }
      }
    }
    else {
      if (*(long *)unaff_R14 != 0) {
        if (*(int *)(*(long *)unaff_R14 + 0x20) != 0) goto label_042b5f1e;
        *(undefined8 *)unaff_R14 = 0;
        *(undefined8 *)((long)register0x00000020 + -0xc0) = 0x42b60e9;
        il2cpp_runtime_helper_022b4080(unaff_R14);
        cVar1 = (__this_02->fields).field_0x2c;
        goto joined_r0x042b60ee;
      }
label_042b66bc:
      *(undefined8 *)((long)register0x00000020 + -0xc0) = 0x42b66c1;
      il2cpp_runtime_helper_022b2c90();
    }
label_042b66c1:
    *(undefined8 *)((long)register0x00000020 + -0xc0) = 0x42b66c6;
    il2cpp_runtime_helper_022b2fd0();
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0xb8);
    __this = (Characters_HookUseable_o *)__this_03;
    unaff_R15 = __this_02;
  } while( true );
}


// Characters.HookUseable$$Deactivate
// il2cpp: void Characters_HookUseable__Deactivate (Characters_HookUseable_o* __this, const MethodInfo* method);
// 0x42b69f0

void Characters_HookUseable__Deactivate(Characters_HookUseable_o *__this,MethodInfo *method)

{
  return;
}


// Characters.HookUseable$$FindAvailableHook
// il2cpp: Characters_Hook_o* Characters_HookUseable__FindAvailableHook (Characters_HookUseable_o* __this, const MethodInfo* method);
// 0x42b6760

Characters_Hook_o *
Characters_HookUseable__FindAvailableHook(Characters_HookUseable_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_Hook__o *pSVar1;
  long lVar2;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  System_Collections_Generic_List_Enumerator_object__o __this_07;
  bool_conflict bVar3;
  long *plVar4;
  undefined1 auVar5 [12];
  System_Collections_Generic_List_Enumerator_T__c *pSVar6;
  Il2CppType *pIVar7;
  Characters_Hook_o *pCVar8;
  undefined1 local_48 [16];
  Characters_Hook_o *local_38;
  
  if (g_data_057addc7 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Hook_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Characters_Hook_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Hook_get_Item);
    g_data_057addc7 = '\x01';
  }
  pSVar6 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar7 = (Il2CppType *)0x0;
  pCVar8 = (Characters_Hook_o *)0x0;
  pSVar1 = (__this->fields).Hooks;
  if (pSVar1 == (System_Collections_Generic_List_Hook__o *)0x0) goto label_042b6905;
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
             (System_Collections_Generic_List_object__o *)pSVar1,MethodInfo_List_1_T_Enumerator_Characters_Hook_GetEnumerator);
  pSVar6 = (System_Collections_Generic_List_Enumerator_T__c *)local_48._0_8_;
  pIVar7 = (Il2CppType *)local_48._8_8_;
  pCVar8 = local_38;
  do {
    __this_00.fields._8_8_ = pIVar7;
    __this_00.fields._list = (System_Collections_Generic_List_T__o *)pSVar6;
    __this_00.fields._current = (Il2CppObject *)pCVar8;
    bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98);
    if ((char)bVar3 == '\0') {
      __this_01.fields._8_8_ = pIVar7;
      __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar6;
      __this_01.fields._current = (Il2CppObject *)pCVar8;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
      pSVar1 = (__this->fields).Hooks;
      if (pSVar1 == (System_Collections_Generic_List_Hook__o *)0x0) goto label_042b6905;
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
                 (System_Collections_Generic_List_object__o *)pSVar1,MethodInfo_List_1_T_Enumerator_Characters_Hook_GetEnumerator);
      pSVar6 = (System_Collections_Generic_List_Enumerator_T__c *)local_48._0_8_;
      pIVar7 = (Il2CppType *)local_48._8_8_;
      pCVar8 = local_38;
      goto label_042b6880;
    }
    if (pCVar8 == (Characters_Hook_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      goto label_042b6900;
    }
  } while ((pCVar8->fields).State != 0);
  goto label_042b68a5;
label_042b6900:
  il2cpp_runtime_helper_022b2c90();
label_042b6905:
  do {
    auVar5 = il2cpp_runtime_helper_022b2c90();
    if (auVar5._8_4_ != 1) {
      __this_06.fields._8_8_ = pIVar7;
      __this_06.fields._list = (System_Collections_Generic_List_T__o *)pSVar6;
      __this_06.fields._current = (Il2CppObject *)pCVar8;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_06,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
label_042b69d7:
      _Unwind_Resume(auVar5._0_8_);
    }
    plVar4 = (long *)__cxa_begin_catch(auVar5._0_8_);
    lVar2 = *plVar4;
    __cxa_end_catch();
    __this_05.fields._8_8_ = pIVar7;
    __this_05.fields._list = (System_Collections_Generic_List_T__o *)pSVar6;
    __this_05.fields._current = (Il2CppObject *)pCVar8;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_05,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
    if (lVar2 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar2);
      __this_07.fields._8_8_ = pIVar7;
      __this_07.fields._list = (System_Collections_Generic_List_T__o *)pSVar6;
      __this_07.fields._current = (Il2CppObject *)pCVar8;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_07,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
      goto label_042b69d7;
    }
label_042b68cb:
    pSVar1 = (__this->fields).Hooks;
    if (pSVar1 != (System_Collections_Generic_List_Hook__o *)0x0) {
      pCVar8 = (Characters_Hook_o *)
               System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar1,0,MethodInfo_Hook_get_Item);
      return pCVar8;
    }
  } while( true );
  while (1 < (pCVar8->fields).State - 3U) {
label_042b6880:
    __this_02.fields._8_8_ = pIVar7;
    __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar6;
    __this_02.fields._current = (Il2CppObject *)pCVar8;
    bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (__this_02,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98);
    if ((char)bVar3 == '\0') {
      __this_04.fields._8_8_ = pIVar7;
      __this_04.fields._list = (System_Collections_Generic_List_T__o *)pSVar6;
      __this_04.fields._current = (Il2CppObject *)pCVar8;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
      goto label_042b68cb;
    }
    if (pCVar8 == (Characters_Hook_o *)0x0) goto label_042b6900;
  }
label_042b68a5:
  __this_03.fields._8_8_ = pIVar7;
  __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar6;
  __this_03.fields._current = (Il2CppObject *)pCVar8;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
  return pCVar8;
}


