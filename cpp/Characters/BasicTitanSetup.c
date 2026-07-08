// Type: Characters.BasicTitanSetup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Characters/BasicTitanSetup.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Characters/Titan/BasicTitanSetup.cs  [CHANGED since prior version]
// --------------------------------

// Characters.BasicTitanSetup$$Init
// il2cpp: void Characters_BasicTitanSetup__Init (const MethodInfo* method);
// 0x40126c0

void Characters_BasicTitanSetup__Init(MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  uint uVar3;
  System_Collections_Generic_List_object__o *pSVar4;
  System_Object_array *pSVar5;
  System_Collections_Generic_Dictionary_object__object__o *pSVar6;
  System_Collections_Generic_List_int__o *__this;
  System_Int32_array *pSVar7;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_00;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_01;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_02;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_03;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_04;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_05;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_06;
  undefined4 uVar8;
  bool_conflict bVar9;
  int32_t iVar10;
  int32_t b;
  int32_t a;
  System_String_o *pSVar11;
  SimpleJSONFixed_JSONNode_o *pSVar12;
  long *plVar13;
  System_String_o *pSVar14;
  SimpleJSONFixed_JSONNode_o *pSVar15;
  Utility_Color255_o *__this_07;
  System_Collections_Generic_HashSet_int__o *__this_08;
  int iVar16;
  long lVar17;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o SVar18;
  undefined4 in_stack_ffffffffffffff28;
  int iVar19;
  int iVar20;
  int32_t in_stack_ffffffffffffff34;
  Il2CppMethodPointer pIVar21;
  Il2CppMethodPointer pIVar22;
  InvokerMethod pIVar23;
  char *pcVar24;
  Il2CppClass *pIVar25;
  Il2CppType *pIVar26;
  Il2CppMethodPointer local_78;
  Il2CppMethodPointer pIStack_70;
  InvokerMethod local_68;
  char *pcStack_60;
  Il2CppClass *local_58;
  Il2CppType *pIStack_50;
  SimpleJSONFixed_JSONNode_o *local_48;
  
  if (DAT_05704281 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BasicTitanSetup);
    il2cpp_init_method_metadata(&TypeInfo_Color255);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_Int32);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_int);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    il2cpp_init_method_metadata(&TypeInfo_ResourcePaths);
    il2cpp_init_method_metadata(&"HeadCount");
    il2cpp_init_method_metadata(&"TitanSetupInfo");
    il2cpp_init_method_metadata(&"BodyCount");
    il2cpp_init_method_metadata(&"HairColors");
    il2cpp_init_method_metadata(&"EyeCount");
    il2cpp_init_method_metadata(&"AIExcludedEyes");
    il2cpp_init_method_metadata(&"HairF");
    il2cpp_init_method_metadata(&"HairM");
    DAT_05704281 = '\x01';
  }
  if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar11 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 0x10);
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar11 = ApplicationManagers_ResourceManager__TryLoadText(pSVar11,"TitanSetupInfo",(MethodInfo *)0x0)
  ;
  pSVar12 = SimpleJSONFixed_JSON__Parse(pSVar11,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_BasicTitanSetup + 0xe4) == 0) {
    il2cpp_init_class();
  }
  **(undefined8 **)(TypeInfo_BasicTitanSetup + 0xb8) = pSVar12;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_BasicTitanSetup + 0xb8),pSVar12);
  plVar13 = (long *)**(long **)(TypeInfo_BasicTitanSetup + 0xb8);
  if ((plVar13 != (long *)0x0) &&
     (plVar13 = (long *)(**(code **)(*plVar13 + 0x1a8))
                                  (plVar13,"BodyCount",*(undefined8 *)(*plVar13 + 0x1b0)),
     plVar13 != (long *)0x0)) {
    uVar8 = (**(code **)(*plVar13 + 0x368))(plVar13,*(undefined8 *)(*plVar13 + 0x370));
    plVar13 = *(long **)(TypeInfo_BasicTitanSetup + 0xb8);
    *(undefined4 *)(plVar13 + 1) = uVar8;
    plVar13 = (long *)*plVar13;
    if ((plVar13 != (long *)0x0) &&
       (plVar13 = (long *)(**(code **)(*plVar13 + 0x1a8))
                                    (plVar13,"HeadCount",*(undefined8 *)(*plVar13 + 0x1b0)),
       plVar13 != (long *)0x0)) {
      uVar8 = (**(code **)(*plVar13 + 0x368))(plVar13,*(undefined8 *)(*plVar13 + 0x370));
      plVar13 = *(long **)(TypeInfo_BasicTitanSetup + 0xb8);
      *(undefined4 *)((long)plVar13 + 0xc) = uVar8;
      plVar13 = (long *)*plVar13;
      if ((plVar13 != (long *)0x0) &&
         (plVar13 = (long *)(**(code **)(*plVar13 + 0x1a8))
                                      (plVar13,"EyeCount",*(undefined8 *)(*plVar13 + 0x1b0)),
         plVar13 != (long *)0x0)) {
        uVar8 = (**(code **)(*plVar13 + 0x368))(plVar13,*(undefined8 *)(*plVar13 + 0x370));
        plVar13 = *(long **)(TypeInfo_BasicTitanSetup + 0xb8);
        *(undefined4 *)(plVar13 + 2) = uVar8;
        plVar13 = (long *)*plVar13;
        if ((plVar13 != (long *)0x0) &&
           (plVar13 = (long *)(**(code **)(*plVar13 + 0x1a8))
                                        (plVar13,"HairM",*(undefined8 *)(*plVar13 + 0x1b0)),
           plVar13 != (long *)0x0)) {
          uVar8 = (**(code **)(*plVar13 + 0x1e8))(plVar13,*(undefined8 *)(*plVar13 + 0x1f0));
          plVar13 = *(long **)(TypeInfo_BasicTitanSetup + 0xb8);
          *(undefined4 *)((long)plVar13 + 0x14) = uVar8;
          plVar13 = (long *)*plVar13;
          if ((plVar13 != (long *)0x0) &&
             (plVar13 = (long *)(**(code **)(*plVar13 + 0x1a8))
                                          (plVar13,"HairF",*(undefined8 *)(*plVar13 + 0x1b0)),
             plVar13 != (long *)0x0)) {
            uVar8 = (**(code **)(*plVar13 + 0x1e8))(plVar13);
            lVar17 = TypeInfo_BasicTitanSetup;
            *(undefined4 *)(*(long *)(TypeInfo_BasicTitanSetup + 0xb8) + 0x18) = uVar8;
            iVar16 = 0;
            iVar2 = *(int *)(lVar17 + 0xe4);
            while( true ) {
              iVar20 = iVar16;
              if (iVar2 == 0) {
                il2cpp_init_class();
                lVar17 = TypeInfo_BasicTitanSetup;
              }
              if (*(int *)(*(long *)(lVar17 + 0xb8) + 0x14) <= iVar16) {
                iVar16 = 0;
                iVar2 = *(int *)(lVar17 + 0xe4);
                goto joined_r0x04012bef;
              }
              pSVar11 = System_Int32__ToString((int32_t)&stack0xffffffffffffff30,(MethodInfo *)0x0);
              pSVar11 = System_String__Concat("HairM",pSVar11,(MethodInfo *)0x0);
              if (*(int *)(TypeInfo_BasicTitanSetup + 0xe4) == 0) {
                il2cpp_init_class();
              }
              lVar17 = MethodInfo_Void_Add;
              pSVar4 = *(System_Collections_Generic_List_object__o **)
                        (*(long *)(TypeInfo_BasicTitanSetup + 0xb8) + 0x28);
              if (pSVar4 == (System_Collections_Generic_List_object__o *)0x0) break;
              piVar1 = &(pSVar4->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar5 = (pSVar4->fields)._items;
              if (pSVar5 == (System_Object_array *)0x0) break;
              uVar3 = (pSVar4->fields)._size;
              if (uVar3 < (uint)pSVar5->max_length) {
                (pSVar4->fields)._size = uVar3 + 1;
                pSVar5->m_Items[(int)uVar3] = (Il2CppObject *)pSVar11;
                il2cpp_runtime_glue(pSVar5->m_Items + (int)uVar3,pSVar11);
              }
              else {
                System_Collections_Generic_List<object>__AddWithResize
                          (pSVar4,(Il2CppObject *)pSVar11,
                           *(MethodInfo_35A7350 **)
                            (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
              }
              plVar13 = (long *)**(long **)(TypeInfo_BasicTitanSetup + 0xb8);
              if (plVar13 == (long *)0x0) break;
              pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)
                       (*(long **)(TypeInfo_BasicTitanSetup + 0xb8))[4];
              plVar13 = (long *)(**(code **)(*plVar13 + 0x1a8))
                                          (plVar13,"HairM",*(undefined8 *)(*plVar13 + 0x1b0));
              if (plVar13 == (long *)0x0) break;
              pSVar12 = (SimpleJSONFixed_JSONNode_o *)
                        (**(code **)(*plVar13 + 0x188))
                                  (plVar13,iVar20,*(undefined8 *)(*plVar13 + 400));
              if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar14 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar12,(MethodInfo *)0x0);
              if (pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
              System_Collections_Generic_Dictionary<object__object>__set_Item
                        (pSVar6,(Il2CppObject *)pSVar11,(Il2CppObject *)pSVar14,MethodInfo_Void_set_Item);
              iVar16 = iVar20 + 1;
              iVar2 = *(int *)(TypeInfo_BasicTitanSetup + 0xe4);
              lVar17 = TypeInfo_BasicTitanSetup;
            }
          }
        }
      }
    }
  }
  goto LAB_0401331b;
joined_r0x04012bef:
  iVar19 = iVar16;
  if (iVar2 == 0) {
    il2cpp_init_class();
    lVar17 = TypeInfo_BasicTitanSetup;
  }
  if (*(int *)(*(long *)(lVar17 + 0xb8) + 0x18) <= iVar16) {
    if (*(int *)(lVar17 + 0xe4) == 0) {
      il2cpp_init_class();
      lVar17 = TypeInfo_BasicTitanSetup;
    }
    plVar13 = (long *)**(long **)(lVar17 + 0xb8);
    if (((plVar13 != (long *)0x0) &&
        (plVar13 = (long *)(**(code **)(*plVar13 + 0x1a8))
                                     (plVar13,"HairColors",*(undefined8 *)(*plVar13 + 0x1b0)),
        plVar13 != (long *)0x0)) &&
       (plVar13 = (long *)(**(code **)(*plVar13 + 0x408))(plVar13,*(undefined8 *)(*plVar13 + 0x410))
       , plVar13 != (long *)0x0)) {
      (**(code **)(*plVar13 + 0x338))(&local_78,plVar13,*(undefined8 *)(*plVar13 + 0x340));
      __this_00.fields._4_4_ = iVar19;
      __this_00.fields.type = in_stack_ffffffffffffff28;
      __this_00.fields.m_Object.fields._dictionary._0_4_ = iVar20;
      __this_00.fields.m_Object.fields._dictionary._4_4_ = in_stack_ffffffffffffff34;
      __this_00.fields.m_Object.fields._8_8_ = local_78;
      __this_00.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIStack_70;
      __this_00.fields.m_Object.fields._current.fields.value = (Il2CppObject *)local_68;
      __this_00.fields.m_Object.fields._32_8_ = pcStack_60;
      __this_00.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)local_58;
      __this_00.fields.m_Array.fields._8_8_ = pIStack_50;
      __this_00.fields.m_Array.fields._current = local_48;
      pIVar21 = local_78;
      pIVar22 = pIStack_70;
      pIVar23 = local_68;
      pcVar24 = pcStack_60;
      pIVar25 = local_58;
      pIVar26 = pIStack_50;
      pSVar12 = local_48;
      bVar9 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                        (__this_00,(MethodInfo *)&stack0xffffffffffffff38);
      if ((char)bVar9 == '\0') goto LAB_0401303e;
      goto LAB_04012e7c;
    }
    goto LAB_0401331b;
  }
  pSVar11 = System_Int32__ToString((int32_t)&stack0xffffffffffffff2c,(MethodInfo *)0x0);
  pSVar11 = System_String__Concat("HairF",pSVar11,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_BasicTitanSetup + 0xe4) == 0) {
    il2cpp_init_class();
  }
  lVar17 = MethodInfo_Void_Add;
  pSVar4 = *(System_Collections_Generic_List_object__o **)(*(long *)(TypeInfo_BasicTitanSetup + 0xb8) + 0x28);
  if (pSVar4 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_0401331b;
  piVar1 = &(pSVar4->fields)._version;
  *piVar1 = *piVar1 + 1;
  pSVar5 = (pSVar4->fields)._items;
  if (pSVar5 == (System_Object_array *)0x0) goto LAB_0401331b;
  uVar3 = (pSVar4->fields)._size;
  if (uVar3 < (uint)pSVar5->max_length) {
    (pSVar4->fields)._size = uVar3 + 1;
    pSVar5->m_Items[(int)uVar3] = (Il2CppObject *)pSVar11;
    il2cpp_runtime_glue(pSVar5->m_Items + (int)uVar3,pSVar11);
  }
  else {
    System_Collections_Generic_List<object>__AddWithResize
              (pSVar4,(Il2CppObject *)pSVar11,
               *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
  }
  plVar13 = (long *)**(long **)(TypeInfo_BasicTitanSetup + 0xb8);
  if (plVar13 == (long *)0x0) goto LAB_0401331b;
  pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)
           (*(long **)(TypeInfo_BasicTitanSetup + 0xb8))[4];
  plVar13 = (long *)(**(code **)(*plVar13 + 0x1a8))
                              (plVar13,"HairF",*(undefined8 *)(*plVar13 + 0x1b0));
  if (plVar13 == (long *)0x0) goto LAB_0401331b;
  pSVar12 = (SimpleJSONFixed_JSONNode_o *)
            (**(code **)(*plVar13 + 0x188))(plVar13,iVar19,*(undefined8 *)(*plVar13 + 400));
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar14 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar12,(MethodInfo *)0x0);
  if (pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto LAB_0401331b;
  System_Collections_Generic_Dictionary<object__object>__set_Item
            (pSVar6,(Il2CppObject *)pSVar11,(Il2CppObject *)pSVar14,MethodInfo_Void_set_Item);
  iVar16 = iVar19 + 1;
  iVar2 = *(int *)(TypeInfo_BasicTitanSetup + 0xe4);
  lVar17 = TypeInfo_BasicTitanSetup;
  goto joined_r0x04012bef;
  while( true ) {
    pSVar4 = *(System_Collections_Generic_List_object__o **)(*(long *)(TypeInfo_BasicTitanSetup + 0xb8) + 0x38);
    plVar13 = (long *)(*(pSVar15->klass->vtable)._5_get_Item.methodPtr)
                                (pSVar15,0,(pSVar15->klass->vtable)._5_get_Item.method);
    if (plVar13 == (long *)0x0) goto LAB_0401331b;
    in_stack_ffffffffffffff34 =
         (**(code **)(*plVar13 + 0x368))(plVar13,*(undefined8 *)(*plVar13 + 0x370));
    plVar13 = (long *)(*(pSVar15->klass->vtable)._5_get_Item.methodPtr)
                                (pSVar15,1,(pSVar15->klass->vtable)._5_get_Item.method);
    if (plVar13 == (long *)0x0) goto LAB_0401331b;
    iVar10 = (**(code **)(*plVar13 + 0x368))(plVar13,*(undefined8 *)(*plVar13 + 0x370));
    plVar13 = (long *)(*(pSVar15->klass->vtable)._5_get_Item.methodPtr)
                                (pSVar15,2,(pSVar15->klass->vtable)._5_get_Item.method);
    if (plVar13 == (long *)0x0) goto LAB_0401331b;
    b = (**(code **)(*plVar13 + 0x368))(plVar13,*(undefined8 *)(*plVar13 + 0x370));
    plVar13 = (long *)(*(pSVar15->klass->vtable)._5_get_Item.methodPtr)
                                (pSVar15,3,(pSVar15->klass->vtable)._5_get_Item.method);
    if (plVar13 == (long *)0x0) goto LAB_0401331b;
    a = (**(code **)(*plVar13 + 0x368))(plVar13,*(undefined8 *)(*plVar13 + 0x370));
    __this_07 = (Utility_Color255_o *)il2cpp_runtime_glue(TypeInfo_Color255);
    Utility_Color255___ctor(__this_07,in_stack_ffffffffffffff34,iVar10,b,a,(MethodInfo *)0x0);
    lVar17 = MethodInfo_Void_Add;
    if (pSVar4 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_0401331b;
    piVar1 = &(pSVar4->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar5 = (pSVar4->fields)._items;
    if (pSVar5 == (System_Object_array *)0x0) goto LAB_0401331b;
    uVar3 = (pSVar4->fields)._size;
    if (uVar3 < (uint)pSVar5->max_length) {
      (pSVar4->fields)._size = uVar3 + 1;
      pSVar5->m_Items[(int)uVar3] = (Il2CppObject *)__this_07;
      il2cpp_runtime_glue(pSVar5->m_Items + (int)uVar3,__this_07);
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                (pSVar4,(Il2CppObject *)__this_07,
                 *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
    }
    __this_01.fields._4_4_ = iVar19;
    __this_01.fields.type = in_stack_ffffffffffffff28;
    __this_01.fields.m_Object.fields._dictionary._0_4_ = iVar20;
    __this_01.fields.m_Object.fields._dictionary._4_4_ = in_stack_ffffffffffffff34;
    __this_01.fields.m_Object.fields._8_8_ = pIVar21;
    __this_01.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIVar22;
    __this_01.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar23;
    __this_01.fields.m_Object.fields._32_8_ = pcVar24;
    __this_01.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pIVar25;
    __this_01.fields.m_Array.fields._8_8_ = pIVar26;
    __this_01.fields.m_Array.fields._current = pSVar12;
    bVar9 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                      (__this_01,(MethodInfo *)&stack0xffffffffffffff38);
    if ((char)bVar9 == '\0') break;
LAB_04012e7c:
    __this_02.fields._4_4_ = iVar19;
    __this_02.fields.type = in_stack_ffffffffffffff28;
    __this_02.fields.m_Object.fields._dictionary._0_4_ = iVar20;
    __this_02.fields.m_Object.fields._dictionary._4_4_ = in_stack_ffffffffffffff34;
    __this_02.fields.m_Object.fields._8_8_ = pIVar21;
    __this_02.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIVar22;
    __this_02.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar23;
    __this_02.fields.m_Object.fields._32_8_ = pcVar24;
    __this_02.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pIVar25;
    __this_02.fields.m_Array.fields._8_8_ = pIVar26;
    __this_02.fields.m_Array.fields._current = pSVar12;
    SVar18 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                       (__this_02,(MethodInfo *)&stack0xffffffffffffff38);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar15 = SimpleJSONFixed_JSONNode__op_Implicit(SVar18,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_BasicTitanSetup + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (pSVar15 == (SimpleJSONFixed_JSONNode_o *)0x0) goto LAB_0401331b;
  }
LAB_0401303e:
  __this_08 = (System_Collections_Generic_HashSet_int__o *)il2cpp_runtime_glue(TypeInfo_HashSet_int);
  System_Collections_Generic_HashSet<int>___ctor(__this_08,MethodInfo_HashSet_1_System_Int32);
  if (*(int *)(TypeInfo_BasicTitanSetup + 0xe4) == 0) {
    il2cpp_init_class();
  }
  plVar13 = (long *)**(long **)(TypeInfo_BasicTitanSetup + 0xb8);
  if (((plVar13 != (long *)0x0) &&
      (plVar13 = (long *)(**(code **)(*plVar13 + 0x1a8))
                                   (plVar13,"AIExcludedEyes",*(undefined8 *)(*plVar13 + 0x1b0)),
      plVar13 != (long *)0x0)) &&
     (plVar13 = (long *)(**(code **)(*plVar13 + 0x408))(plVar13,*(undefined8 *)(*plVar13 + 0x410)),
     plVar13 != (long *)0x0)) {
    (**(code **)(*plVar13 + 0x338))(&local_78,plVar13,*(undefined8 *)(*plVar13 + 0x340));
    __this_03.fields._4_4_ = iVar19;
    __this_03.fields.type = in_stack_ffffffffffffff28;
    __this_03.fields.m_Object.fields._dictionary._0_4_ = iVar20;
    __this_03.fields.m_Object.fields._dictionary._4_4_ = in_stack_ffffffffffffff34;
    __this_03.fields.m_Object.fields._8_8_ = local_78;
    __this_03.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIStack_70;
    __this_03.fields.m_Object.fields._current.fields.value = (Il2CppObject *)local_68;
    __this_03.fields.m_Object.fields._32_8_ = pcStack_60;
    __this_03.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)local_58;
    __this_03.fields.m_Array.fields._8_8_ = pIStack_50;
    __this_03.fields.m_Array.fields._current = local_48;
    bVar9 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                      (__this_03,(MethodInfo *)&stack0xffffffffffffff38);
    if ((char)bVar9 != '\0') {
      if (__this_08 == (System_Collections_Generic_HashSet_int__o *)0x0) {
        __this_06.fields._4_4_ = iVar19;
        __this_06.fields.type = in_stack_ffffffffffffff28;
        __this_06.fields.m_Object.fields._dictionary._0_4_ = iVar20;
        __this_06.fields.m_Object.fields._dictionary._4_4_ = in_stack_ffffffffffffff34;
        __this_06.fields.m_Object.fields._8_8_ = local_78;
        __this_06.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIStack_70;
        __this_06.fields.m_Object.fields._current.fields.value = (Il2CppObject *)local_68;
        __this_06.fields.m_Object.fields._32_8_ = pcStack_60;
        __this_06.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)local_58;
        __this_06.fields.m_Array.fields._8_8_ = pIStack_50;
        __this_06.fields.m_Array.fields._current = local_48;
        SVar18 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                           (__this_06,(MethodInfo *)&stack0xffffffffffffff38);
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar12 = SimpleJSONFixed_JSONNode__op_Implicit(SVar18,(MethodInfo *)0x0);
        if (pSVar12 != (SimpleJSONFixed_JSONNode_o *)0x0) {
          (*(pSVar12->klass->vtable)._35_get_AsInt.methodPtr)
                    (pSVar12,(pSVar12->klass->vtable)._35_get_AsInt.method);
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        goto LAB_0401331b;
      }
      pIVar21 = local_78;
      pIVar22 = pIStack_70;
      pIVar23 = local_68;
      pcVar24 = pcStack_60;
      pIVar25 = local_58;
      pIVar26 = pIStack_50;
      pSVar12 = local_48;
      do {
        __this_04.fields._4_4_ = iVar19;
        __this_04.fields.type = in_stack_ffffffffffffff28;
        __this_04.fields.m_Object.fields._dictionary._0_4_ = iVar20;
        __this_04.fields.m_Object.fields._dictionary._4_4_ = in_stack_ffffffffffffff34;
        __this_04.fields.m_Object.fields._8_8_ = pIVar21;
        __this_04.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIVar22;
        __this_04.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar23;
        __this_04.fields.m_Object.fields._32_8_ = pcVar24;
        __this_04.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pIVar25;
        __this_04.fields.m_Array.fields._8_8_ = pIVar26;
        __this_04.fields.m_Array.fields._current = pSVar12;
        SVar18 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                           (__this_04,(MethodInfo *)&stack0xffffffffffffff38);
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar15 = SimpleJSONFixed_JSONNode__op_Implicit(SVar18,(MethodInfo *)0x0);
        if (pSVar15 == (SimpleJSONFixed_JSONNode_o *)0x0) goto LAB_0401331b;
        iVar10 = (*(pSVar15->klass->vtable)._35_get_AsInt.methodPtr)
                           (pSVar15,(pSVar15->klass->vtable)._35_get_AsInt.method);
        System_Collections_Generic_HashSet<int>__Add(__this_08,iVar10,MethodInfo_Boolean_Add);
        __this_05.fields._4_4_ = iVar19;
        __this_05.fields.type = in_stack_ffffffffffffff28;
        __this_05.fields.m_Object.fields._dictionary._0_4_ = iVar20;
        __this_05.fields.m_Object.fields._dictionary._4_4_ = in_stack_ffffffffffffff34;
        __this_05.fields.m_Object.fields._8_8_ = pIVar21;
        __this_05.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIVar22;
        __this_05.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar23;
        __this_05.fields.m_Object.fields._32_8_ = pcVar24;
        __this_05.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pIVar25;
        __this_05.fields.m_Array.fields._8_8_ = pIVar26;
        __this_05.fields.m_Array.fields._current = pSVar12;
        bVar9 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                          (__this_05,(MethodInfo *)&stack0xffffffffffffff38);
      } while ((char)bVar9 != '\0');
    }
    if (__this_08 == (System_Collections_Generic_HashSet_int__o *)0x0) {
      if (*(int *)(TypeInfo_BasicTitanSetup + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (0 < *(int *)(*(long *)(TypeInfo_BasicTitanSetup + 0xb8) + 0x10)) goto LAB_0401331b;
    }
    else {
      iVar16 = 0;
      iVar2 = *(int *)(TypeInfo_BasicTitanSetup + 0xe4);
      while( true ) {
        if (iVar2 == 0) {
          il2cpp_init_class();
        }
        if (*(int *)(*(long *)(TypeInfo_BasicTitanSetup + 0xb8) + 0x10) <= iVar16) break;
        bVar9 = System_Collections_Generic_HashSet<int>__Contains(__this_08,iVar16,MethodInfo_Boolean_Contains);
        if ((char)bVar9 == '\0') {
          if (*(int *)(TypeInfo_BasicTitanSetup + 0xe4) == 0) {
            il2cpp_init_class();
          }
          lVar17 = MethodInfo_Void_Add;
          __this = *(System_Collections_Generic_List_int__o **)
                    (*(long *)(TypeInfo_BasicTitanSetup + 0xb8) + 0x30);
          if (__this == (System_Collections_Generic_List_int__o *)0x0) goto LAB_0401331b;
          piVar1 = &(__this->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar7 = (__this->fields)._items;
          if (pSVar7 == (System_Int32_array *)0x0) goto LAB_0401331b;
          uVar3 = (__this->fields)._size;
          if (uVar3 < (uint)pSVar7->max_length) {
            (__this->fields)._size = uVar3 + 1;
            pSVar7->m_Items[(int)uVar3] = iVar16;
          }
          else {
            System_Collections_Generic_List<int>__AddWithResize
                      (__this,iVar16,
                       *(MethodInfo_3579120 **)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
          }
        }
        iVar16 = iVar16 + 1;
        iVar2 = *(int *)(TypeInfo_BasicTitanSetup + 0xe4);
      }
    }
    return;
  }
LAB_0401331b:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BasicTitanSetup$$GetRandomBodyHeadCombo
// il2cpp: System_Int32_array* Characters_BasicTitanSetup__GetRandomBodyHeadCombo (SimpleJSONFixed_JSONNode_o* node, const MethodInfo* method);
// 0x4013340

System_Int32_array *
Characters_BasicTitanSetup__GetRandomBodyHeadCombo
          (SimpleJSONFixed_JSONNode_o *node,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  System_Object_array *pSVar6;
  System_Single_array *pSVar7;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_00;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_01;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_02;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_03;
  bool_conflict bVar8;
  int32_t iVar9;
  System_Int32_array *pSVar10;
  Il2CppObject *pIVar11;
  long *plVar12;
  System_Collections_Generic_List_object__o *__this_04;
  System_Collections_Generic_List_float__o *__this_05;
  float item;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o SVar13;
  undefined8 in_stack_ffffffffffffff28;
  Il2CppMethodPointer pIVar14;
  Il2CppMethodPointer pIVar15;
  InvokerMethod pIVar16;
  char *pcVar17;
  Il2CppClass *pIVar18;
  Il2CppType *pIVar19;
  SimpleJSONFixed_JSONNode_o *pSVar20;
  Il2CppMethodPointer local_78;
  Il2CppMethodPointer pIStack_70;
  InvokerMethod local_68;
  char *pcStack_60;
  Il2CppClass *local_58;
  Il2CppType *pIStack_50;
  SimpleJSONFixed_JSONNode_o *local_48;
  
  if (DAT_05704282 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterData);
    il2cpp_init_method_metadata(&MethodInfo_JSONNode_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_int);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_Object);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_Single);
    il2cpp_init_method_metadata(&TypeInfo_List_float);
    il2cpp_init_method_metadata(&TypeInfo_List_object);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    il2cpp_init_method_metadata(&"Chance");
    il2cpp_init_method_metadata(&"Body");
    il2cpp_init_method_metadata(&"Titan");
    il2cpp_init_method_metadata(&"Head");
    il2cpp_init_method_metadata(&"Default");
    il2cpp_init_method_metadata(&"BodyHeadCombos");
    DAT_05704282 = '\x01';
  }
  pSVar10 = (System_Int32_array *)il2cpp_glue_02274930(TypeInfo_int);
  lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
  if (((lVar5 != 0) && (lVar5 = *(long *)(lVar5 + 0x50), lVar5 != 0)) &&
     (lVar5 = *(long *)(lVar5 + 0xa0), lVar5 != 0)) {
    if (*(char *)(lVar5 + 0x11) == '\0') {
      if (*(int *)&(TypeInfo_JSONNode->_2).field_0x1c == 0) {
        il2cpp_init_class();
      }
      bVar8 = SimpleJSONFixed_JSONNode__op_Equality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if ((char)bVar8 != '\0') {
        if (*(int *)(TypeInfo_CharacterData + 0xe4) == 0) {
          il2cpp_init_class();
        }
        __this = *(System_Collections_Generic_Dictionary_object__object__o **)
                  (*(long *)(TypeInfo_CharacterData + 0xb8) + 8);
        if ((__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
           (pIVar11 = System_Collections_Generic_Dictionary<object__object>__get_Item
                                (__this,"Titan",MethodInfo_JSONNode_get_Item), pIVar11 == (Il2CppObject *)0x0))
        goto LAB_040138d7;
        node = (SimpleJSONFixed_JSONNode_o *)
               (*pIVar11->klass->vtable[7].methodPtr)
                         (pIVar11,"Default",pIVar11->klass->vtable[7].method);
      }
      if (node != (SimpleJSONFixed_JSONNode_o *)0x0) {
        plVar12 = (long *)(*(node->klass->vtable)._7_get_Item.methodPtr)
                                    (node,"BodyHeadCombos",(node->klass->vtable)._7_get_Item.method);
        __this_04 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_object);
        System_Collections_Generic_List<object>___ctor(__this_04,MethodInfo_List_1_System_Object);
        __this_05 = (System_Collections_Generic_List_float__o *)il2cpp_runtime_glue(TypeInfo_List_float);
        System_Collections_Generic_List<float>___ctor(__this_05,MethodInfo_List_1_System_Single);
        if (plVar12 != (long *)0x0) {
          (**(code **)(*plVar12 + 0x338))(&local_78,plVar12,*(undefined8 *)(*plVar12 + 0x340));
          __this_00.fields.m_Object.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar10;
          __this_00.fields._0_8_ = in_stack_ffffffffffffff28;
          __this_00.fields.m_Object.fields._8_8_ = local_78;
          __this_00.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIStack_70;
          __this_00.fields.m_Object.fields._current.fields.value = (Il2CppObject *)local_68;
          __this_00.fields.m_Object.fields._32_8_ = pcStack_60;
          __this_00.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)local_58;
          __this_00.fields.m_Array.fields._8_8_ = pIStack_50;
          __this_00.fields.m_Array.fields._current = local_48;
          bVar8 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                            (__this_00,(MethodInfo *)&stack0xffffffffffffff38);
          if ((char)bVar8 != '\0') {
            if (__this_04 == (System_Collections_Generic_List_object__o *)0x0) {
              __this_03.fields.m_Object.fields._dictionary =
                   (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar10;
              __this_03.fields._0_8_ = in_stack_ffffffffffffff28;
              __this_03.fields.m_Object.fields._8_8_ = local_78;
              __this_03.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIStack_70;
              __this_03.fields.m_Object.fields._current.fields.value = (Il2CppObject *)local_68;
              __this_03.fields.m_Object.fields._32_8_ = pcStack_60;
              __this_03.fields.m_Array.fields._list =
                   (System_Collections_Generic_List_T__o *)local_58;
              __this_03.fields.m_Array.fields._8_8_ = pIStack_50;
              __this_03.fields.m_Array.fields._current = local_48;
              SVar13 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                                 (__this_03,(MethodInfo *)&stack0xffffffffffffff38);
              if (*(int *)&(TypeInfo_JSONNode->_2).field_0x1c == 0) {
                il2cpp_init_class();
              }
              SimpleJSONFixed_JSONNode__op_Implicit(SVar13,(MethodInfo *)0x0);
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            pIVar14 = local_78;
            pIVar15 = pIStack_70;
            pIVar16 = local_68;
            pcVar17 = pcStack_60;
            pIVar18 = local_58;
            pIVar19 = pIStack_50;
            pSVar20 = local_48;
            do {
              __this_02.fields.m_Object.fields._dictionary =
                   (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar10;
              __this_02.fields._0_8_ = in_stack_ffffffffffffff28;
              __this_02.fields.m_Object.fields._8_8_ = pIVar14;
              __this_02.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIVar15;
              __this_02.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar16;
              __this_02.fields.m_Object.fields._32_8_ = pcVar17;
              __this_02.fields.m_Array.fields._list =
                   (System_Collections_Generic_List_T__o *)pIVar18;
              __this_02.fields.m_Array.fields._8_8_ = pIVar19;
              __this_02.fields.m_Array.fields._current = pSVar20;
              SVar13 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                                 (__this_02,(MethodInfo *)&stack0xffffffffffffff38);
              if (*(int *)&(TypeInfo_JSONNode->_2).field_0x1c == 0) {
                il2cpp_init_class();
              }
              pIVar11 = (Il2CppObject *)
                        SimpleJSONFixed_JSONNode__op_Implicit(SVar13,(MethodInfo *)0x0);
              lVar5 = MethodInfo_Void_Add;
              piVar1 = &(__this_04->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar6 = (__this_04->fields)._items;
              if (pSVar6 == (System_Object_array *)0x0) goto LAB_040138d7;
              uVar4 = (__this_04->fields)._size;
              if (uVar4 < (uint)pSVar6->max_length) {
                (__this_04->fields)._size = uVar4 + 1;
                pSVar6->m_Items[(int)uVar4] = pIVar11;
                il2cpp_runtime_glue(pSVar6->m_Items + (int)uVar4,pIVar11);
              }
              else {
                System_Collections_Generic_List<object>__AddWithResize
                          (__this_04,pIVar11,
                           *(MethodInfo_35A7350 **)
                            (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
              }
              if (((pIVar11 == (Il2CppObject *)0x0) ||
                  (plVar12 = (long *)(*pIVar11->klass->vtable[7].methodPtr)
                                               (pIVar11,"Chance",
                                                pIVar11->klass->vtable[7].method),
                  plVar12 == (long *)0x0)) ||
                 (item = (float)(**(code **)(*plVar12 + 0x388))
                                          (plVar12,*(undefined8 *)(*plVar12 + 0x390)),
                 lVar5 = MethodInfo_Void_Add, __this_05 == (System_Collections_Generic_List_float__o *)0x0)
                 ) goto LAB_040138d7;
              piVar1 = &(__this_05->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar7 = (__this_05->fields)._items;
              if (pSVar7 == (System_Single_array *)0x0) goto LAB_040138d7;
              uVar4 = (__this_05->fields)._size;
              if (uVar4 < (uint)pSVar7->max_length) {
                (__this_05->fields)._size = uVar4 + 1;
                pSVar7->m_Items[(int)uVar4] = item;
              }
              else {
                System_Collections_Generic_List<float>__AddWithResize
                          (__this_05,item,
                           *(MethodInfo_35DFAF0 **)
                            (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
              }
              __this_01.fields.m_Object.fields._dictionary =
                   (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar10;
              __this_01.fields._0_8_ = in_stack_ffffffffffffff28;
              __this_01.fields.m_Object.fields._8_8_ = pIVar14;
              __this_01.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIVar15;
              __this_01.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar16;
              __this_01.fields.m_Object.fields._32_8_ = pcVar17;
              __this_01.fields.m_Array.fields._list =
                   (System_Collections_Generic_List_T__o *)pIVar18;
              __this_01.fields.m_Array.fields._8_8_ = pIVar19;
              __this_01.fields.m_Array.fields._current = pSVar20;
              bVar8 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                                (__this_01,(MethodInfo *)&stack0xffffffffffffff38);
            } while ((char)bVar8 != '\0');
          }
          if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pIVar11 = Utility_Util__GetRandomFromWeightedList(__this_04,__this_05,(MethodInfo *)0x0);
          if (pIVar11 != (Il2CppObject *)0x0) {
            bVar2 = (TypeInfo_JSONNode->_2).naturalAligment;
            if (((pIVar11->klass->_2).naturalAligment < bVar2) ||
               ((pIVar11->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_JSONNode)) {
                    /* WARNING: Subroutine does not return */
              il2cpp_unwind_resume(pIVar11);
            }
            plVar12 = (long *)(*pIVar11->klass->vtable[7].methodPtr)
                                        (pIVar11,"Body",pIVar11->klass->vtable[7].method);
            if ((plVar12 != (long *)0x0) &&
               (iVar9 = (**(code **)(*plVar12 + 0x368))(plVar12,*(undefined8 *)(*plVar12 + 0x370)),
               pSVar10 != (System_Int32_array *)0x0)) {
              if ((int)pSVar10->max_length != 0) {
                pSVar10->m_Items[0] = iVar9;
                plVar12 = (long *)(*pIVar11->klass->vtable[7].methodPtr)
                                            (pIVar11,"Head",pIVar11->klass->vtable[7].method);
                if (plVar12 == (long *)0x0) goto LAB_040138d7;
                iVar9 = (**(code **)(*plVar12 + 0x368))(plVar12,*(undefined8 *)(*plVar12 + 0x370));
                if (1 < (uint)pSVar10->max_length) goto LAB_040138bf;
              }
LAB_040138dc:
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
          }
        }
      }
    }
    else if (pSVar10 != (System_Int32_array *)0x0) {
      iVar3 = (int)pSVar10->max_length;
      if (iVar3 != 0) {
        pSVar10->m_Items[0] = 0;
        iVar9 = 0;
        if (iVar3 != 1) {
LAB_040138bf:
          pSVar10->m_Items[1] = iVar9;
          return pSVar10;
        }
      }
      goto LAB_040138dc;
    }
  }
LAB_040138d7:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BasicTitanSetup$$CreateRandomSet
// il2cpp: Settings_TitanCustomSet_o* Characters_BasicTitanSetup__CreateRandomSet (Characters_BasicTitanSetup_o* __this, int32_t headPrefab, const MethodInfo* method);
// 0x4013930

Settings_TitanCustomSet_o *
Characters_BasicTitanSetup__CreateRandomSet
          (Characters_BasicTitanSetup_o *__this,int32_t headPrefab,MethodInfo *method)

{
  Settings_IntSetting_o *pSVar1;
  Settings_StringSetting_o *__this_00;
  System_Collections_Generic_List_T__o *list;
  Settings_ColorSetting_o *pSVar2;
  int32_t iVar3;
  Settings_TitanCustomSet_o *__this_01;
  Il2CppObject *pIVar4;
  Utility_Color255_o *__this_02;
  
  if (DAT_05704283 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BasicTitanSetup);
    il2cpp_init_method_metadata(&TypeInfo_Color255);
    il2cpp_init_method_metadata(&MethodInfo_Color255_GetRandomItem_Color255);
    il2cpp_init_method_metadata(&MethodInfo_Int32_GetRandomItem_Int32);
    il2cpp_init_method_metadata(&MethodInfo_String_GetRandomItem_String);
    il2cpp_init_method_metadata(&TypeInfo_MiscExtensions);
    il2cpp_init_method_metadata(&TypeInfo_TitanCustomSet);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    DAT_05704283 = '\x01';
  }
  __this_01 = (Settings_TitanCustomSet_o *)il2cpp_runtime_glue(TypeInfo_TitanCustomSet);
  Settings_TitanCustomSet___ctor(__this_01,(MethodInfo *)0x0);
  if ((__this_01 != (Settings_TitanCustomSet_o *)0x0) &&
     (pSVar1 = (__this_01->fields).Head, pSVar1 != (Settings_IntSetting_o *)0x0)) {
    Settings_TypedSetting<int>__set_Value
              ((Settings_TypedSetting_int__o *)pSVar1,headPrefab,MethodInfo_Void_set_Value);
    __this_00 = (__this_01->fields).Hair;
    if (*(int *)(TypeInfo_BasicTitanSetup + 0xe4) == 0) {
      il2cpp_init_class();
    }
    list = *(System_Collections_Generic_List_T__o **)(*(long *)(TypeInfo_BasicTitanSetup + 0xb8) + 0x28);
    if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pIVar4 = MiscExtensions__GetRandomItem<object>(list,MethodInfo_String_GetRandomItem_String);
    if (__this_00 != (Settings_StringSetting_o *)0x0) {
      Settings_TypedSetting<object>__set_Value
                ((Settings_TypedSetting_T__o *)__this_00,pIVar4,MethodInfo_Void_set_Value);
      pSVar2 = (__this_01->fields).HairColor;
      pIVar4 = MiscExtensions__GetRandomItem<object>
                         (*(System_Collections_Generic_List_T__o **)
                           (*(long *)(TypeInfo_BasicTitanSetup + 0xb8) + 0x38),MethodInfo_Color255_GetRandomItem_Color255);
      if (pSVar2 != (Settings_ColorSetting_o *)0x0) {
        Settings_TypedSetting<object>__set_Value
                  ((Settings_TypedSetting_T__o *)pSVar2,pIVar4,MethodInfo_Void_set_Value);
        pSVar1 = (__this_01->fields).Eye;
        iVar3 = MiscExtensions__GetRandomItem<int>
                          (*(System_Collections_Generic_List_T__o **)
                            (*(long *)(TypeInfo_BasicTitanSetup + 0xb8) + 0x30),MethodInfo_Int32_GetRandomItem_Int32);
        if (pSVar1 != (Settings_IntSetting_o *)0x0) {
          Settings_TypedSetting<int>__set_Value
                    ((Settings_TypedSetting_int__o *)pSVar1,iVar3,MethodInfo_Void_set_Value);
          iVar3 = UnityEngine_Random__Range(0xa0,0x100,(MethodInfo *)0x0);
          pSVar2 = (__this_01->fields).SkinColor;
          __this_02 = (Utility_Color255_o *)il2cpp_runtime_glue(TypeInfo_Color255);
          Utility_Color255___ctor(__this_02,iVar3,iVar3,iVar3,0xff,(MethodInfo *)0x0);
          if (pSVar2 != (Settings_ColorSetting_o *)0x0) {
            Settings_TypedSetting<object>__set_Value
                      ((Settings_TypedSetting_T__o *)pSVar2,(Il2CppObject *)__this_02,MethodInfo_Void_set_Value);
            return __this_01;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BasicTitanSetup$$Load
// il2cpp: void Characters_BasicTitanSetup__Load (Characters_BasicTitanSetup_o* __this, Settings_TitanCustomSet_o* set, const MethodInfo* method);
// 0x4006700

void Characters_BasicTitanSetup__Load
               (Characters_BasicTitanSetup_o *__this,Settings_TitanCustomSet_o *set,
               MethodInfo *method)

{
  Settings_IntSetting_o *pSVar1;
  Settings_ColorSetting_o *pSVar2;
  Utility_Color255_o *pUVar3;
  Settings_StringSetting_o *pSVar4;
  System_Collections_Generic_Dictionary_object__object__o *pSVar5;
  undefined1 auVar6 [16];
  Characters_BasicTitanSetup_o *to;
  undefined1 auVar7 [16];
  int index;
  uint uVar8;
  bool_conflict bVar9;
  UnityEngine_Transform_o *pUVar10;
  Characters_BasicTitanSetup_o *pCVar11;
  UnityEngine_Renderer_o *pUVar12;
  UnityEngine_Material_o *pUVar13;
  UnityEngine_Transform_o *pUVar14;
  UnityEngine_Object_o *obj;
  System_String_o *pSVar15;
  UnityEngine_GameObject_o *pUVar16;
  System_Object_array *pSVar17;
  System_String_o *pSVar18;
  UnityEngine_Transform_o *pUVar19;
  UnityEngine_Renderer_o *__this_00;
  UnityEngine_SkinnedMeshRenderer_o *__this_01;
  UnityEngine_SkinnedMeshRenderer_o *__this_02;
  UnityEngine_Mesh_o *pUVar20;
  UnityEngine_BoxCollider_o *__this_03;
  UnityEngine_MeshFilter_o *__this_04;
  UnityEngine_MeshFilter_o *__this_05;
  uint uVar21;
  MethodInfo *in_R9;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  UnityEngine_Vector3_o UVar22;
  UnityEngine_Color_o UVar23;
  UnityEngine_Quaternion_o UVar24;
  int32_t local_70;
  int32_t local_6c;
  undefined1 local_68 [16];
  Characters_BasicTitanSetup_o *local_50;
  undefined1 local_48 [16];
  
  if (DAT_05704284 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BasicTitanSetup);
    il2cpp_init_method_metadata(&MethodInfo_MeshFilter_GetComponent_MeshFilter);
    il2cpp_init_method_metadata(&MethodInfo_MeshRenderer_GetComponent_MeshRenderer);
    il2cpp_init_method_metadata(&MethodInfo_SkinnedMeshRenderer_GetComponent_SkinnedMeshRend);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_BoxCollider_AddComponent_BoxCollider);
    il2cpp_init_method_metadata(&MethodInfo_Renderer___GetComponentsInChildren_Renderer);
    il2cpp_init_method_metadata(&TypeInfo_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_HumanSetupMaterials);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_PhysicsLayer);
    il2cpp_init_method_metadata(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    il2cpp_init_method_metadata(&TypeInfo_ResourcePaths);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Color255_get_Value);
    il2cpp_init_method_metadata(&"EyesHurtbox");
    il2cpp_init_method_metadata(&"TitanHeadCollider");
    il2cpp_init_method_metadata(&"TitanEyes");
    il2cpp_init_method_metadata(&"Eyes");
    il2cpp_init_method_metadata(&"Bone");
    il2cpp_init_method_metadata(&"Titans/Hairs/Prefabs/");
    il2cpp_init_method_metadata(&"Nose");
    il2cpp_init_method_metadata(&"Titans/Heads/Prefabs/");
    il2cpp_init_method_metadata(&"TitanHead");
    il2cpp_init_method_metadata(&"Body");
    il2cpp_init_method_metadata(&"Head");
    il2cpp_init_method_metadata(&"Eye");
    il2cpp_init_method_metadata(&"Amarture_VER2/Core/Controller.Body/hip/spine/chest/neck/head");
    il2cpp_init_method_metadata(&"HairSocket");
    DAT_05704284 = '\x01';
  }
  local_70 = 0;
  local_6c = 0;
  pUVar10 = UnityEngine_Component__get_transform
                      ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (((pUVar10 != (UnityEngine_Transform_o *)0x0) &&
      (pCVar11 = (Characters_BasicTitanSetup_o *)
                 UnityEngine_Transform__Find(pUVar10,"Amarture_VER2/Core/Controller.Body/hip/spine/chest/neck/head",(MethodInfo *)0x0),
      set != (Settings_TitanCustomSet_o *)0x0)) &&
     (pSVar1 = (set->fields).Head, pSVar1 != (Settings_IntSetting_o *)0x0)) {
    local_70 = (pSVar1->fields)._value;
    pSVar2 = (set->fields).SkinColor;
    if ((pSVar2 != (Settings_ColorSetting_o *)0x0) &&
       (pUVar3 = (pSVar2->fields)._value, pUVar3 != (Utility_Color255_o *)0x0)) {
      UVar23 = Utility_Color255__ToColor(pUVar3,(MethodInfo *)0x0);
      local_68._8_4_ = extraout_XMM0_Dc;
      local_68._0_8_ = UVar23.fields._0_8_;
      local_68._12_4_ = extraout_XMM0_Dd;
      local_48._8_4_ = in_XMM1_Dc;
      local_48._0_8_ = UVar23.fields._8_8_;
      local_48._12_4_ = in_XMM1_Dd;
      pUVar10 = UnityEngine_Component__get_transform
                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (((pUVar10 != (UnityEngine_Transform_o *)0x0) &&
          ((pUVar10 = UnityEngine_Transform__Find(pUVar10,"Body",(MethodInfo *)0x0),
           pUVar10 != (UnityEngine_Transform_o *)0x0 &&
           (pUVar12 = (UnityEngine_Renderer_o *)
                      UnityEngine_Component__GetComponent<object>
                                ((UnityEngine_Component_o *)pUVar10,MethodInfo_SkinnedMeshRenderer_GetComponent_SkinnedMeshRend),
           pUVar12 != (UnityEngine_Renderer_o *)0x0)))) &&
         (pUVar13 = UnityEngine_Renderer__get_material(pUVar12,(MethodInfo *)0x0), auVar7 = local_48
         , auVar6 = local_68, pUVar13 != (UnityEngine_Material_o *)0x0)) {
        UVar23.fields.b = (float)local_48._0_4_;
        UVar23.fields.a = (float)local_48._4_4_;
        UVar23.fields.r = (float)local_68._0_4_;
        UVar23.fields.g = (float)local_68._4_4_;
        local_68 = auVar6;
        local_48 = auVar7;
        UnityEngine_Material__set_color(pUVar13,UVar23,(MethodInfo *)0x0);
        if ((pCVar11 != (Characters_BasicTitanSetup_o *)0x0) &&
           (pUVar10 = UnityEngine_Transform__Find
                                ((UnityEngine_Transform_o *)pCVar11,"HairSocket",(MethodInfo *)0x0),
           pUVar10 != (UnityEngine_Transform_o *)0x0)) {
          local_68._0_8_ = __this;
          index = UnityEngine_Transform__get_childCount(pUVar10,(MethodInfo *)0x0);
          while (index = index + -1, -1 < index) {
            pUVar14 = UnityEngine_Transform__GetChild(pUVar10,index,(MethodInfo *)0x0);
            if (pUVar14 == (UnityEngine_Transform_o *)0x0) goto LAB_040073e0;
            obj = (UnityEngine_Object_o *)
                  UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pUVar14,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_init_class();
            }
            UnityEngine_Object__DestroyImmediate(obj,(MethodInfo *)0x0);
          }
          local_50 = pCVar11;
          if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar18 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8);
          if (*(int *)(TypeInfo_BasicTitanSetup + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar4 = (set->fields).Hair;
          if ((pSVar4 != (Settings_StringSetting_o *)0x0) &&
             (pSVar5 = *(System_Collections_Generic_Dictionary_object__object__o **)
                        (*(long *)(TypeInfo_BasicTitanSetup + 0xb8) + 0x20),
             pSVar5 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
            pSVar15 = (System_String_o *)
                      System_Collections_Generic_Dictionary<object__object>__get_Item
                                (pSVar5,(Il2CppObject *)(pSVar4->fields)._value,MethodInfo_String_get_Item);
            pSVar15 = System_String__Concat("Titans/Hairs/Prefabs/",pSVar15,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pUVar16 = (UnityEngine_GameObject_o *)
                      ApplicationManagers_ResourceManager__InstantiateAsset<object>
                                (pSVar18,pSVar15,1,MethodInfo_GameObject_InstantiateAsset_GameObject);
            if ((pUVar16 != (UnityEngine_GameObject_o *)0x0) &&
               (pUVar14 = UnityEngine_GameObject__get_transform(pUVar16,(MethodInfo *)0x0),
               pUVar14 != (UnityEngine_Transform_o *)0x0)) {
              UnityEngine_Transform__SetParent(pUVar14,pUVar10,(MethodInfo *)0x0);
              pUVar10 = UnityEngine_GameObject__get_transform(pUVar16,(MethodInfo *)0x0);
              if (DAT_056fdd15 == '\0') {
                il2cpp_init_method_metadata(&TypeInfo_Vector3);
                DAT_056fdd15 = '\x01';
              }
              if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
                UnityEngine_Transform__set_localPosition
                          (pUVar10,(UnityEngine_Vector3_o)
                                   **(UnityEngine_Vector3_Fields **)(TypeInfo_Vector3 + 0xb8),
                           (MethodInfo *)0x0);
                pUVar10 = UnityEngine_GameObject__get_transform(pUVar16,(MethodInfo *)0x0);
                UVar24 = UnityEngine_Quaternion__Internal_FromEulerRad
                                   ((UnityEngine_Vector3_o)ZEXT812(0xbfc90fdb),(MethodInfo *)0x0);
                if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
                  UnityEngine_Transform__set_localRotation(pUVar10,UVar24,(MethodInfo *)0x0);
                  pUVar10 = UnityEngine_GameObject__get_transform(pUVar16,(MethodInfo *)0x0);
                  if (DAT_056fe077 == '\0') {
                    il2cpp_init_method_metadata(&TypeInfo_Vector3);
                    DAT_056fe077 = '\x01';
                  }
                  if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
                    UnityEngine_Transform__set_localScale
                              (pUVar10,(UnityEngine_Vector3_o)
                                       *(UnityEngine_Vector3_Fields *)
                                        (*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc),(MethodInfo *)0x0);
                    pSVar17 = UnityEngine_GameObject__GetComponentsInChildren<object>
                                        (pUVar16,MethodInfo_Renderer___GetComponentsInChildren_Renderer);
                    if (pSVar17 != (System_Object_array *)0x0) {
                      uVar8 = (uint)pSVar17->max_length;
                      if (0 < (int)uVar8) {
                        uVar21 = 0;
                        do {
                          if (uVar8 <= uVar21) {
                    /* WARNING: Subroutine does not return */
                            il2cpp_raise_exception();
                          }
                          pUVar12 = (UnityEngine_Renderer_o *)pSVar17->m_Items[(int)uVar21];
                          if (*(int *)(TypeInfo_BasicTitanSetup + 0xe4) == 0) {
                            il2cpp_init_class();
                          }
                          pSVar4 = (set->fields).Hair;
                          if ((pSVar4 == (Settings_StringSetting_o *)0x0) ||
                             (pSVar5 = *(System_Collections_Generic_Dictionary_object__object__o **)
                                        (*(long *)(TypeInfo_BasicTitanSetup + 0xb8) + 0x20),
                             pSVar5 == (System_Collections_Generic_Dictionary_object__object__o *)
                                       0x0)) goto LAB_040073e0;
                          pSVar18 = (System_String_o *)
                                    System_Collections_Generic_Dictionary<object__object>__get_Item
                                              (pSVar5,(Il2CppObject *)(pSVar4->fields)._value,
                                               MethodInfo_String_get_Item);
                          if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
                            il2cpp_init_class();
                          }
                          pUVar13 = Characters_HumanSetupMaterials__GetHairMaterial
                                              (pSVar18,(MethodInfo *)0x0);
                          if (pUVar12 == (UnityEngine_Renderer_o *)0x0) goto LAB_040073e0;
                          UnityEngine_Renderer__set_material(pUVar12,pUVar13,(MethodInfo *)0x0);
                          pUVar13 = UnityEngine_Renderer__get_material(pUVar12,(MethodInfo *)0x0);
                          pSVar2 = (set->fields).HairColor;
                          if (((pSVar2 == (Settings_ColorSetting_o *)0x0) ||
                              (pUVar3 = (pSVar2->fields)._value, pUVar3 == (Utility_Color255_o *)0x0
                              )) || (UVar23 = Utility_Color255__ToColor(pUVar3,(MethodInfo *)0x0),
                                    pUVar13 == (UnityEngine_Material_o *)0x0)) goto LAB_040073e0;
                          UnityEngine_Material__set_color(pUVar13,UVar23,(MethodInfo *)0x0);
                          uVar21 = uVar21 + 1;
                          uVar8 = (uint)pSVar17->max_length;
                        } while ((int)uVar21 < (int)uVar8);
                      }
                      pSVar18 = System_Int32__ToString((int32_t)&local_70,(MethodInfo *)0x0);
                      pSVar18 = System_String__Concat("TitanHead",pSVar18,(MethodInfo *)0x0);
                      pUVar10 = UnityEngine_Component__get_transform
                                          ((UnityEngine_Component_o *)local_68._0_8_,
                                           (MethodInfo *)0x0);
                      if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
                        pUVar10 = UnityEngine_Transform__Find
                                            (pUVar10,"Head",(MethodInfo *)0x0);
                        if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
                          il2cpp_init_class();
                        }
                        pSVar15 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8);
                        pSVar18 = System_String__Concat("Titans/Heads/Prefabs/",pSVar18,(MethodInfo *)0x0);
                        if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
                          il2cpp_init_class();
                        }
                        pCVar11 = (Characters_BasicTitanSetup_o *)
                                  ApplicationManagers_ResourceManager__LoadAsset
                                            (pSVar15,pSVar18,1,(MethodInfo *)0x0);
                        if (pCVar11 != (Characters_BasicTitanSetup_o *)0x0) {
                          if (pCVar11->klass != TypeInfo_GameObject) {
LAB_040073ea:
                    /* WARNING: Subroutine does not return */
                            il2cpp_unwind_resume(pCVar11);
                          }
                          pUVar14 = UnityEngine_GameObject__get_transform
                                              ((UnityEngine_GameObject_o *)pCVar11,(MethodInfo *)0x0
                                              );
                          if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
                            pUVar12 = (UnityEngine_Renderer_o *)
                                      UnityEngine_Component__GetComponent<object>
                                                ((UnityEngine_Component_o *)pUVar10,MethodInfo_SkinnedMeshRenderer_GetComponent_SkinnedMeshRend);
                            pUVar19 = UnityEngine_Component__get_transform
                                                ((UnityEngine_Component_o *)local_68._0_8_,
                                                 (MethodInfo *)0x0);
                            if (((pUVar19 != (UnityEngine_Transform_o *)0x0) &&
                                (pUVar19 = UnityEngine_Transform__Find
                                                     (pUVar19,"Body",(MethodInfo *)0x0),
                                pUVar19 != (UnityEngine_Transform_o *)0x0)) &&
                               ((__this_00 = (UnityEngine_Renderer_o *)
                                             UnityEngine_Component__GetComponent<object>
                                                       ((UnityEngine_Component_o *)pUVar19,
                                                        MethodInfo_SkinnedMeshRenderer_GetComponent_SkinnedMeshRend),
                                __this_00 != (UnityEngine_Renderer_o *)0x0 &&
                                (pUVar13 = UnityEngine_Renderer__get_material
                                                     (__this_00,(MethodInfo *)0x0),
                                pUVar12 != (UnityEngine_Renderer_o *)0x0)))) {
                              UnityEngine_Renderer__set_material(pUVar12,pUVar13,(MethodInfo *)0x0);
                              __this_01 = (UnityEngine_SkinnedMeshRenderer_o *)
                                          UnityEngine_Component__GetComponent<object>
                                                    ((UnityEngine_Component_o *)pUVar10,MethodInfo_SkinnedMeshRenderer_GetComponent_SkinnedMeshRend
                                                    );
                              if (((pUVar14 != (UnityEngine_Transform_o *)0x0) &&
                                  (__this_02 = (UnityEngine_SkinnedMeshRenderer_o *)
                                               UnityEngine_Component__GetComponent<object>
                                                         ((UnityEngine_Component_o *)pUVar14,
                                                          MethodInfo_SkinnedMeshRenderer_GetComponent_SkinnedMeshRend), to = local_50,
                                  __this_02 != (UnityEngine_SkinnedMeshRenderer_o *)0x0)) &&
                                 (pUVar20 = UnityEngine_SkinnedMeshRenderer__get_sharedMesh
                                                      (__this_02,(MethodInfo *)0x0),
                                 __this_01 != (UnityEngine_SkinnedMeshRenderer_o *)0x0)) {
                                UnityEngine_SkinnedMeshRenderer__set_sharedMesh
                                          (__this_01,pUVar20,(MethodInfo *)0x0);
                                pSVar18 = System_Int32__ToString
                                                    ((int32_t)&local_70,(MethodInfo *)0x0);
                                pSVar15 = System_String__Concat
                                                    ("TitanHeadCollider",pSVar18,(MethodInfo *)0x0);
                                pSVar18 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8);
                                pSVar15 = System_String__Concat
                                                    ("Titans/Heads/Prefabs/",pSVar15,(MethodInfo *)0x0);
                                pCVar11 = (Characters_BasicTitanSetup_o *)
                                          ApplicationManagers_ResourceManager__LoadAsset
                                                    (pSVar18,pSVar15,1,(MethodInfo *)0x0);
                                if (pCVar11 != (Characters_BasicTitanSetup_o *)0x0) {
                                  if (pCVar11->klass != TypeInfo_GameObject) goto LAB_040073ea;
                                  pUVar10 = UnityEngine_GameObject__get_transform
                                                      ((UnityEngine_GameObject_o *)pCVar11,
                                                       (MethodInfo *)0x0);
                                  Characters_BasicTitanSetup__CopyColliders
                                            (pCVar11,pUVar10,(UnityEngine_Transform_o *)to,1,0,in_R9
                                            );
                                  if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
                                    pUVar14 = UnityEngine_Transform__Find
                                                        (pUVar10,"Bone",(MethodInfo *)0x0);
                                    pCVar11 = to;
                                    pUVar19 = UnityEngine_Transform__Find
                                                        ((UnityEngine_Transform_o *)to,"Bone",
                                                         (MethodInfo *)0x0);
                                    Characters_BasicTitanSetup__CopyColliders
                                              (pCVar11,pUVar14,pUVar19,0,0,in_R9);
                                    pUVar14 = UnityEngine_Transform__Find
                                                        (pUVar10,"EyesHurtbox",(MethodInfo *)0x0);
                                    pCVar11 = to;
                                    pUVar19 = UnityEngine_Transform__Find
                                                        ((UnityEngine_Transform_o *)to,"EyesHurtbox",
                                                         (MethodInfo *)0x0);
                                    Characters_BasicTitanSetup__CopyColliders
                                              (pCVar11,pUVar14,pUVar19,0,1,in_R9);
                                    pUVar14 = UnityEngine_Transform__Find
                                                        (pUVar10,"HairSocket",(MethodInfo *)0x0);
                                    pUVar19 = UnityEngine_Transform__Find
                                                        ((UnityEngine_Transform_o *)to,"HairSocket",
                                                         (MethodInfo *)0x0);
                                    if ((pUVar14 != (UnityEngine_Transform_o *)0x0) &&
                                       (UVar22 = UnityEngine_Transform__get_localPosition
                                                           (pUVar14,(MethodInfo *)0x0),
                                       pUVar19 != (UnityEngine_Transform_o *)0x0)) {
                                      UnityEngine_Transform__set_localPosition
                                                (pUVar19,UVar22,(MethodInfo *)0x0);
                                      UVar24 = UnityEngine_Transform__get_localRotation
                                                         (pUVar14,(MethodInfo *)0x0);
                                      UnityEngine_Transform__set_localRotation
                                                (pUVar19,UVar24,(MethodInfo *)0x0);
                                      UVar22 = UnityEngine_Transform__get_localScale
                                                         (pUVar14,(MethodInfo *)0x0);
                                      UnityEngine_Transform__set_localScale
                                                (pUVar19,UVar22,(MethodInfo *)0x0);
                                      pUVar14 = UnityEngine_Transform__Find
                                                          (pUVar10,"Nose",(MethodInfo *)0x0);
                                      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                                        il2cpp_init_class();
                                      }
                                      bVar9 = UnityEngine_Object__op_Inequality
                                                        ((UnityEngine_Object_o *)pUVar14,
                                                         (UnityEngine_Object_o *)0x0,
                                                         (MethodInfo *)0x0);
                                      if ((char)bVar9 != '\0') {
                                        pUVar10 = UnityEngine_Transform__Find
                                                            (pUVar10,"Nose",(MethodInfo *)0x0)
                                        ;
                                        pUVar16 = (UnityEngine_GameObject_o *)
                                                  il2cpp_runtime_glue(TypeInfo_GameObject);
                                        UnityEngine_GameObject___ctor(pUVar16,(MethodInfo *)0x0);
                                        if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
                                          il2cpp_init_class();
                                        }
                                        if (pUVar16 == (UnityEngine_GameObject_o *)0x0)
                                        goto LAB_040073e0;
                                        UnityEngine_GameObject__set_layer
                                                  (pUVar16,*(int32_t *)
                                                            (*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0x14),
                                                   (MethodInfo *)0x0);
                                        pUVar14 = UnityEngine_GameObject__get_transform
                                                            (pUVar16,(MethodInfo *)0x0);
                                        if (pUVar14 == (UnityEngine_Transform_o *)0x0)
                                        goto LAB_040073e0;
                                        UnityEngine_Transform__SetParent
                                                  (pUVar14,(UnityEngine_Transform_o *)to,
                                                   (MethodInfo *)0x0);
                                        pUVar14 = UnityEngine_GameObject__get_transform
                                                            (pUVar16,(MethodInfo *)0x0);
                                        if ((pUVar10 == (UnityEngine_Transform_o *)0x0) ||
                                           (UVar22 = UnityEngine_Transform__get_localPosition
                                                               (pUVar10,(MethodInfo *)0x0),
                                           pUVar14 == (UnityEngine_Transform_o *)0x0))
                                        goto LAB_040073e0;
                                        UnityEngine_Transform__set_localPosition
                                                  (pUVar14,UVar22,(MethodInfo *)0x0);
                                        pUVar14 = UnityEngine_GameObject__get_transform
                                                            (pUVar16,(MethodInfo *)0x0);
                                        UVar24 = UnityEngine_Transform__get_localRotation
                                                           (pUVar10,(MethodInfo *)0x0);
                                        if (pUVar14 == (UnityEngine_Transform_o *)0x0)
                                        goto LAB_040073e0;
                                        UnityEngine_Transform__set_localRotation
                                                  (pUVar14,UVar24,(MethodInfo *)0x0);
                                        pUVar14 = UnityEngine_GameObject__get_transform
                                                            (pUVar16,(MethodInfo *)0x0);
                                        UVar22 = UnityEngine_Transform__get_localScale
                                                           (pUVar10,(MethodInfo *)0x0);
                                        if (pUVar14 == (UnityEngine_Transform_o *)0x0)
                                        goto LAB_040073e0;
                                        UnityEngine_Transform__set_localScale
                                                  (pUVar14,UVar22,(MethodInfo *)0x0);
                                        __this_03 = (UnityEngine_BoxCollider_o *)
                                                    UnityEngine_GameObject__AddComponent<object>
                                                              (pUVar16,MethodInfo_BoxCollider_AddComponent_BoxCollider);
                                        if (DAT_056fdd15 == '\0') {
                                          il2cpp_init_method_metadata(&TypeInfo_Vector3);
                                          DAT_056fdd15 = '\x01';
                                        }
                                        if (__this_03 == (UnityEngine_BoxCollider_o *)0x0)
                                        goto LAB_040073e0;
                                        UnityEngine_BoxCollider__set_center
                                                  (__this_03,
                                                   (UnityEngine_Vector3_o)
                                                   **(UnityEngine_Vector3_Fields **)
                                                     (TypeInfo_Vector3 + 0xb8),(MethodInfo *)0x0);
                                        if (DAT_056fe077 == '\0') {
                                          il2cpp_init_method_metadata(&TypeInfo_Vector3);
                                          DAT_056fe077 = '\x01';
                                        }
                                        UnityEngine_BoxCollider__set_size
                                                  (__this_03,
                                                   (UnityEngine_Vector3_o)
                                                   *(UnityEngine_Vector3_Fields *)
                                                    (*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc),
                                                   (MethodInfo *)0x0);
                                      }
                                      pSVar18 = System_Int32__ToString
                                                          ((int32_t)&local_70,(MethodInfo *)0x0);
                                      pSVar18 = System_String__Concat
                                                          ("TitanEyes",pSVar18,(MethodInfo *)0x0);
                                      pSVar1 = (set->fields).Eye;
                                      if (pSVar1 != (Settings_IntSetting_o *)0x0) {
                                        local_6c = (pSVar1->fields)._value;
                                        pUVar10 = UnityEngine_Transform__Find
                                                            ((UnityEngine_Transform_o *)to,
                                                             "Eyes",(MethodInfo *)0x0);
                                        if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
                                          il2cpp_init_class();
                                        }
                                        pSVar15 = *(System_String_o **)
                                                   (*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8);
                                        pSVar18 = System_String__Concat
                                                            ("Titans/Heads/Prefabs/",pSVar18,(MethodInfo *)0x0)
                                        ;
                                        if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
                                          il2cpp_init_class();
                                        }
                                        pCVar11 = (Characters_BasicTitanSetup_o *)
                                                  ApplicationManagers_ResourceManager__LoadAsset
                                                            (pSVar15,pSVar18,1,(MethodInfo *)0x0);
                                        if (pCVar11 != (Characters_BasicTitanSetup_o *)0x0) {
                                          if (pCVar11->klass != TypeInfo_GameObject) goto LAB_040073ea;
                                          pUVar14 = UnityEngine_GameObject__get_transform
                                                              ((UnityEngine_GameObject_o *)pCVar11,
                                                               (MethodInfo *)0x0);
                                          if ((((pUVar10 != (UnityEngine_Transform_o *)0x0) &&
                                               (__this_04 = (UnityEngine_MeshFilter_o *)
                                                                                                                        
                                                  UnityEngine_Component__GetComponent<object>
                                                            ((UnityEngine_Component_o *)pUVar10,
                                                             MethodInfo_MeshFilter_GetComponent_MeshFilter),
                                               pUVar14 != (UnityEngine_Transform_o *)0x0)) &&
                                              (__this_05 = (UnityEngine_MeshFilter_o *)
                                                                                                                      
                                                  UnityEngine_Component__GetComponent<object>
                                                            ((UnityEngine_Component_o *)pUVar14,
                                                             MethodInfo_MeshFilter_GetComponent_MeshFilter),
                                              __this_05 != (UnityEngine_MeshFilter_o *)0x0)) &&
                                             (pUVar20 = UnityEngine_MeshFilter__get_sharedMesh
                                                                  (__this_05,(MethodInfo *)0x0),
                                             __this_04 != (UnityEngine_MeshFilter_o *)0x0)) {
                                            UnityEngine_MeshFilter__set_sharedMesh
                                                      (__this_04,pUVar20,(MethodInfo *)0x0);
                                            pUVar12 = (UnityEngine_Renderer_o *)
                                                      UnityEngine_Component__GetComponent<object>
                                                                ((UnityEngine_Component_o *)pUVar10,
                                                                 MethodInfo_MeshRenderer_GetComponent_MeshRenderer);
                                            pSVar18 = System_Int32__ToString
                                                                ((int32_t)&local_6c,
                                                                 (MethodInfo *)0x0);
                                            pSVar18 = System_String__Concat
                                                                ("Eye",pSVar18,
                                                                 (MethodInfo *)0x0);
                                            if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
                                              il2cpp_init_class();
                                            }
                                            pUVar13 = 
                                                  Characters_HumanSetupMaterials__GetTitanEyeMaterial
                                                            (pSVar18,(MethodInfo *)0x0);
                                            if (pUVar12 != (UnityEngine_Renderer_o *)0x0) {
                                              UnityEngine_Renderer__set_material
                                                        (pUVar12,pUVar13,(MethodInfo *)0x0);
                                              return;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_040073e0:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BasicTitanSetup$$CopyColliders
// il2cpp: void Characters_BasicTitanSetup__CopyColliders (Characters_BasicTitanSetup_o* __this, UnityEngine_Transform_o* from, UnityEngine_Transform_o* to, bool capsule, bool moveTransform, const MethodInfo* method);
// 0x4013b60

void Characters_BasicTitanSetup__CopyColliders
               (Characters_BasicTitanSetup_o *__this,UnityEngine_Transform_o *from,
               UnityEngine_Transform_o *to,bool_conflict capsule,bool_conflict moveTransform,
               MethodInfo *method)

{
  UnityEngine_Component_o *__this_00;
  UnityEngine_Component_o *__this_01;
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_Transform_o *pUVar2;
  float fVar3;
  UnityEngine_Vector3_o UVar4;
  UnityEngine_Quaternion_o value;
  
  if (DAT_05704285 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_BoxCollider_GetComponent_BoxCollider);
    il2cpp_init_method_metadata(&MethodInfo_CapsuleCollider_GetComponent_CapsuleCollider);
    DAT_05704285 = '\x01';
  }
  if (from != (UnityEngine_Transform_o *)0x0) {
    if ((char)capsule == '\0') {
      __this_00 = (UnityEngine_Component_o *)
                  UnityEngine_Component__GetComponent<object>
                            ((UnityEngine_Component_o *)from,MethodInfo_BoxCollider_GetComponent_BoxCollider);
      if (((to == (UnityEngine_Transform_o *)0x0) ||
          (__this_01 = (UnityEngine_Component_o *)
                       UnityEngine_Component__GetComponent<object>
                                 ((UnityEngine_Component_o *)to,MethodInfo_BoxCollider_GetComponent_BoxCollider),
          __this_00 == (UnityEngine_Component_o *)0x0)) ||
         (UVar4 = UnityEngine_BoxCollider__get_center
                            ((UnityEngine_BoxCollider_o *)__this_00,(MethodInfo *)0x0),
         __this_01 == (UnityEngine_Component_o *)0x0)) goto LAB_04013d52;
      UnityEngine_BoxCollider__set_center
                ((UnityEngine_BoxCollider_o *)__this_01,UVar4,(MethodInfo *)0x0);
      UVar4 = UnityEngine_BoxCollider__get_size
                        ((UnityEngine_BoxCollider_o *)__this_00,(MethodInfo *)0x0);
      UnityEngine_BoxCollider__set_size
                ((UnityEngine_BoxCollider_o *)__this_01,UVar4,(MethodInfo *)0x0);
    }
    else {
      __this_00 = (UnityEngine_Component_o *)
                  UnityEngine_Component__GetComponent<object>
                            ((UnityEngine_Component_o *)from,MethodInfo_CapsuleCollider_GetComponent_CapsuleCollider);
      if (((to == (UnityEngine_Transform_o *)0x0) ||
          (__this_01 = (UnityEngine_Component_o *)
                       UnityEngine_Component__GetComponent<object>
                                 ((UnityEngine_Component_o *)to,MethodInfo_CapsuleCollider_GetComponent_CapsuleCollider),
          __this_00 == (UnityEngine_Component_o *)0x0)) ||
         (UVar4 = UnityEngine_CapsuleCollider__get_center
                            ((UnityEngine_CapsuleCollider_o *)__this_00,(MethodInfo *)0x0),
         __this_01 == (UnityEngine_Component_o *)0x0)) goto LAB_04013d52;
      UnityEngine_CapsuleCollider__set_center
                ((UnityEngine_CapsuleCollider_o *)__this_01,UVar4,(MethodInfo *)0x0);
      fVar3 = UnityEngine_CapsuleCollider__get_radius
                        ((UnityEngine_CapsuleCollider_o *)__this_00,(MethodInfo *)0x0);
      UnityEngine_CapsuleCollider__set_radius
                ((UnityEngine_CapsuleCollider_o *)__this_01,fVar3,(MethodInfo *)0x0);
      fVar3 = UnityEngine_CapsuleCollider__get_height
                        ((UnityEngine_CapsuleCollider_o *)__this_00,(MethodInfo *)0x0);
      UnityEngine_CapsuleCollider__set_height
                ((UnityEngine_CapsuleCollider_o *)__this_01,fVar3,(MethodInfo *)0x0);
    }
    if ((char)moveTransform == '\0') {
      return;
    }
    pUVar1 = UnityEngine_Component__get_transform(__this_01,(MethodInfo *)0x0);
    pUVar2 = UnityEngine_Component__get_transform(__this_00,(MethodInfo *)0x0);
    if ((pUVar2 != (UnityEngine_Transform_o *)0x0) &&
       (UVar4 = UnityEngine_Transform__get_localPosition(pUVar2,(MethodInfo *)0x0),
       pUVar1 != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__set_localPosition(pUVar1,UVar4,(MethodInfo *)0x0);
      pUVar1 = UnityEngine_Component__get_transform(__this_01,(MethodInfo *)0x0);
      pUVar2 = UnityEngine_Component__get_transform(__this_00,(MethodInfo *)0x0);
      if ((pUVar2 != (UnityEngine_Transform_o *)0x0) &&
         (value = UnityEngine_Transform__get_localRotation(pUVar2,(MethodInfo *)0x0),
         pUVar1 != (UnityEngine_Transform_o *)0x0)) {
        UnityEngine_Transform__set_localRotation(pUVar1,value,(MethodInfo *)0x0);
        pUVar1 = UnityEngine_Component__get_transform(__this_01,(MethodInfo *)0x0);
        pUVar2 = UnityEngine_Component__get_transform(__this_00,(MethodInfo *)0x0);
        if ((pUVar2 != (UnityEngine_Transform_o *)0x0) &&
           (UVar4 = UnityEngine_Transform__get_localScale(pUVar2,(MethodInfo *)0x0),
           pUVar1 != (UnityEngine_Transform_o *)0x0)) {
          UnityEngine_Transform__set_localScale(pUVar1,UVar4,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_04013d52:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BasicTitanSetup$$.ctor
// il2cpp: void Characters_BasicTitanSetup___ctor (Characters_BasicTitanSetup_o* __this, const MethodInfo* method);
// 0x4013d60

void Characters_BasicTitanSetup___ctor(Characters_BasicTitanSetup_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Characters.BasicTitanSetup$$.cctor
// il2cpp: void Characters_BasicTitanSetup___cctor (const MethodInfo* method);
// 0x4013d70

void Characters_BasicTitanSetup___cctor(MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  System_Collections_Generic_List_object__o *pSVar2;
  System_Collections_Generic_List_int__o *__this_00;
  
  if (DAT_05704286 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BasicTitanSetup);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_System_String);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__string);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Utility_Color255);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_Int32);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_int);
    il2cpp_init_method_metadata(&TypeInfo_List_Color255);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    DAT_05704286 = '\x01';
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           il2cpp_runtime_glue(TypeInfo_Dictionary_string__string);
  System_Collections_Generic_Dictionary<object__object>___ctor(__this,MethodInfo_Dictionary_2_System_String_System_String);
  lVar1 = *(long *)(TypeInfo_BasicTitanSetup + 0xb8);
  *(System_Collections_Generic_Dictionary_object__object__o **)(lVar1 + 0x20) = __this;
  il2cpp_runtime_glue(lVar1 + 0x20,__this);
  pSVar2 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_string);
  System_Collections_Generic_List<object>___ctor(pSVar2,MethodInfo_List_1_System_String);
  lVar1 = *(long *)(TypeInfo_BasicTitanSetup + 0xb8);
  *(System_Collections_Generic_List_object__o **)(lVar1 + 0x28) = pSVar2;
  il2cpp_runtime_glue(lVar1 + 0x28,pSVar2);
  __this_00 = (System_Collections_Generic_List_int__o *)il2cpp_runtime_glue(TypeInfo_List_int);
  System_Collections_Generic_List<int>___ctor(__this_00,MethodInfo_List_1_System_Int32);
  lVar1 = *(long *)(TypeInfo_BasicTitanSetup + 0xb8);
  *(System_Collections_Generic_List_int__o **)(lVar1 + 0x30) = __this_00;
  il2cpp_runtime_glue(lVar1 + 0x30,__this_00);
  pSVar2 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_Color255);
  System_Collections_Generic_List<object>___ctor(pSVar2,MethodInfo_List_1_Utility_Color255);
  lVar1 = *(long *)(TypeInfo_BasicTitanSetup + 0xb8);
  *(System_Collections_Generic_List_object__o **)(lVar1 + 0x38) = pSVar2;
  il2cpp_runtime_glue(lVar1 + 0x38,pSVar2);
  return;
}


