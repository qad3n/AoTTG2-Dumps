// Type: Characters.BasicTitanSetup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/BasicTitanSetup.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Titan/BasicTitanSetup.cs
// --------------------------------

// Characters.BasicTitanSetup$$Init
// il2cpp: void Characters_BasicTitanSetup__Init (const MethodInfo* method);
// 0x431f0c0

void Characters_BasicTitanSetup__Init(MethodInfo *method)

{
  int32_t *piVar1;
  System_Object_array *pSVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  System_Collections_Generic_List_int__o *__this;
  System_Int32_array *pSVar4;
  System_Single_array *pSVar5;
  Settings_IntSetting_o *pSVar6;
  Settings_StringSetting_o *__this_00;
  Settings_ColorSetting_o *pSVar7;
  System_Collections_Generic_KeyValuePair_string__JSONNode__Fields SVar8;
  System_Collections_Generic_KeyValuePair_string__JSONNode__Fields SVar9;
  System_Collections_Generic_KeyValuePair_string__JSONNode__Fields SVar10;
  System_Collections_Generic_KeyValuePair_string__JSONNode__Fields SVar11;
  System_Collections_Generic_KeyValuePair_string__JSONNode__Fields SVar12;
  System_Collections_Generic_KeyValuePair_string__JSONNode__Fields SVar13;
  System_Collections_Generic_KeyValuePair_string__JSONNode__Fields SVar14;
  System_Collections_Generic_KeyValuePair_string__JSONNode__Fields SVar15;
  System_Collections_Generic_KeyValuePair_string__JSONNode__Fields SVar16;
  System_Collections_Generic_KeyValuePair_string__JSONNode__Fields SVar17;
  System_Collections_Generic_KeyValuePair_string__JSONNode__Fields SVar18;
  System_Collections_Generic_KeyValuePair_string__JSONNode__Fields SVar19;
  System_Collections_Generic_KeyValuePair_string__JSONNode__Fields SVar20;
  System_Collections_Generic_KeyValuePair_string__JSONNode__Fields SVar21;
  System_Collections_Generic_KeyValuePair_string__JSONNode__Fields SVar22;
  System_Collections_Generic_KeyValuePair_string__JSONNode__Fields SVar23;
  System_Collections_Generic_KeyValuePair_string__JSONNode__Fields SVar24;
  System_Collections_Generic_KeyValuePair_string__JSONNode__Fields SVar25;
  System_Collections_Generic_KeyValuePair_string__JSONNode__Fields SVar26;
  System_Collections_Generic_KeyValuePair_string__JSONNode__Fields SVar27;
  System_Collections_Generic_KeyValuePair_string__JSONNode__Fields SVar28;
  System_Collections_Generic_KeyValuePair_string__JSONNode__Fields SVar29;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_01;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_02;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_03;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_04;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_05;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_06;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_07;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_08;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_09;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_10;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_11;
  undefined4 uVar30;
  uint uVar31;
  uint b;
  uint a;
  bool_conflict bVar32;
  int32_t iVar33;
  System_String_o *pSVar34;
  long *plVar35;
  System_String_o *pSVar36;
  long *plVar37;
  SimpleJSONFixed_JSONNode_o *pSVar38;
  Il2CppObject *pIVar39;
  long lVar40;
  Il2CppObject *item;
  System_Collections_Generic_List_object__o *pSVar41;
  System_Collections_Generic_List_float__o *__this_12;
  Settings_TitanCustomSet_o *pSVar42;
  UnityEngine_Component_o *__this_13;
  UnityEngine_Transform_o *pUVar43;
  Settings_TitanCustomSet_o *pSVar44;
  byte bVar45;
  Il2CppClass *pIVar46;
  Il2CppClass *pIVar47;
  long lVar48;
  Settings_TitanCustomSet_o *__this_14;
  int iVar49;
  SimpleJSONFixed_JSONNode_o *pSVar50;
  MethodInfo_24E7B40 **list;
  char cVar51;
  System_Collections_Generic_HashSet_int__o *in_R8;
  MethodInfo_3104DF0 **unaff_R12;
  long *unaff_R13;
  System_String_o **unaff_R14;
  long *unaff_R15;
  float fVar52;
  System_Collections_Generic_KeyValuePair_string__JSONNode__Fields aKeyValue;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o SVar53;
  UnityEngine_Vector3_o UVar54;
  UnityEngine_Quaternion_o value;
  undefined8 in_stack_fffffffffffffe50;
  long in_stack_fffffffffffffe58;
  Il2CppMethodPointer pIVar55;
  Il2CppMethodPointer pIVar56;
  InvokerMethod pIVar57;
  char *pcVar58;
  Il2CppClass *pIVar59;
  Il2CppType *pIVar60;
  Il2CppMethodPointer pIStack_150;
  Il2CppMethodPointer pIStack_148;
  InvokerMethod pIStack_140;
  char *pcStack_138;
  Il2CppClass *pIStack_130;
  Il2CppType *pIStack_128;
  SimpleJSONFixed_JSONNode_o *pSStack_120;
  System_String_o *pSStack_108;
  MethodInfo_3104DF0 **ppMStack_100;
  System_Collections_Generic_List_object__o *pSStack_f8;
  System_Collections_Generic_HashSet_int__o *pSStack_f0;
  MethodInfo *pMStack_e8;
  SimpleJSONFixed_JSONNode_o *pSStack_e0;
  undefined4 in_stack_ffffffffffffff28;
  uint uVar61;
  uint uVar62;
  uint in_stack_ffffffffffffff34;
  Il2CppMethodPointer local_78;
  Il2CppMethodPointer pIStack_70;
  InvokerMethod local_68;
  char *pcStack_60;
  Il2CppClass *local_58;
  Il2CppType *pIStack_50;
  SimpleJSONFixed_JSONNode_o *local_48;
  
  if (g_data_057adfef == '\0') {
    pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x431f0ea;
    il2cpp_runtime_helper_023445d0(&TypeInfo_BasicTitanSetup);
    pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x431f0f6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
    pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x431f102;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x431f10e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x431f11a;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x431f126;
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_Int32);
    pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x431f132;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_int);
    pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x431f13e;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x431f14a;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x431f156;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x431f162;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x431f16e;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x431f17a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x431f186;
    il2cpp_runtime_helper_023445d0(&"HeadCount");
    pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x431f192;
    il2cpp_runtime_helper_023445d0(&"TitanSetupInfo");
    pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x431f19e;
    il2cpp_runtime_helper_023445d0(&"BodyCount");
    pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x431f1aa;
    il2cpp_runtime_helper_023445d0(&"HairColors");
    pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x431f1b6;
    il2cpp_runtime_helper_023445d0(&"EyeCount");
    pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x431f1c2;
    il2cpp_runtime_helper_023445d0(&"AIExcludedEyes");
    pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x431f1ce;
    il2cpp_runtime_helper_023445d0(&"HairF");
    pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x431f1da;
    il2cpp_runtime_helper_023445d0(&"HairM");
    g_data_057adfef = '\x01';
  }
  if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
    pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x431f229;
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar34 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 0x10);
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x431f24f;
    il2cpp_runtime_helper_02337ed0();
  }
  pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x431f263;
  pSVar34 = ApplicationManagers_ResourceManager__TryLoadText(pSVar34,"TitanSetupInfo",(MethodInfo *)0x0);
  pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x431f26d;
  pSVar34 = (System_String_o *)SimpleJSONFixed_JSON__Parse(pSVar34,(MethodInfo *)0x0);
  SVar16.value = (SimpleJSONFixed_JSONNode_o *)&TypeInfo_BasicTitanSetup;
  SVar16.key = pSVar34;
  SVar15.value = (SimpleJSONFixed_JSONNode_o *)&TypeInfo_BasicTitanSetup;
  SVar15.key = pSVar34;
  SVar14.value = (SimpleJSONFixed_JSONNode_o *)&TypeInfo_BasicTitanSetup;
  SVar14.key = pSVar34;
  SVar13.value = (SimpleJSONFixed_JSONNode_o *)&TypeInfo_BasicTitanSetup;
  SVar13.key = pSVar34;
  SVar12.value = (SimpleJSONFixed_JSONNode_o *)&TypeInfo_BasicTitanSetup;
  SVar12.key = pSVar34;
  SVar11.value = (SimpleJSONFixed_JSONNode_o *)&TypeInfo_BasicTitanSetup;
  SVar11.key = pSVar34;
  SVar10.value = (SimpleJSONFixed_JSONNode_o *)&TypeInfo_BasicTitanSetup;
  SVar10.key = pSVar34;
  SVar9.value = (SimpleJSONFixed_JSONNode_o *)&TypeInfo_BasicTitanSetup;
  SVar9.key = pSVar34;
  SVar8.value = (SimpleJSONFixed_JSONNode_o *)&TypeInfo_BasicTitanSetup;
  SVar8.key = pSVar34;
  aKeyValue.value = (SimpleJSONFixed_JSONNode_o *)&TypeInfo_BasicTitanSetup;
  aKeyValue.key = pSVar34;
  if (*(int *)(TypeInfo_BasicTitanSetup + 0xe4) == 0) {
    pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x431f289;
    il2cpp_runtime_helper_02337ed0();
  }
  **(undefined8 **)(TypeInfo_BasicTitanSetup + 0xb8) = pSVar34;
  pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x431f2aa;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_BasicTitanSetup + 0xb8),pSVar34);
  plVar35 = (long *)**(long **)(TypeInfo_BasicTitanSetup + 0xb8);
  if (plVar35 != (long *)0x0) {
    pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x431f2db;
    plVar35 = (long *)(**(code **)(*plVar35 + 0x1a8))(plVar35,"BodyCount",*(undefined8 *)(*plVar35 + 0x1b0));
    aKeyValue = SVar8;
    if (plVar35 != (long *)0x0) {
      pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x431f2f7;
      uVar30 = (**(code **)(*plVar35 + 0x368))(plVar35,*(undefined8 *)(*plVar35 + 0x370));
      plVar35 = *(long **)(TypeInfo_BasicTitanSetup + 0xb8);
      *(undefined4 *)(plVar35 + 1) = uVar30;
      plVar35 = (long *)*plVar35;
      aKeyValue = SVar9;
      if (plVar35 != (long *)0x0) {
        pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x431f32b;
        plVar35 = (long *)(**(code **)(*plVar35 + 0x1a8))
                                    (plVar35,"HeadCount",*(undefined8 *)(*plVar35 + 0x1b0));
        aKeyValue = SVar10;
        if (plVar35 != (long *)0x0) {
          pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x431f347;
          uVar30 = (**(code **)(*plVar35 + 0x368))(plVar35,*(undefined8 *)(*plVar35 + 0x370));
          plVar35 = *(long **)(TypeInfo_BasicTitanSetup + 0xb8);
          *(undefined4 *)((long)plVar35 + 0xc) = uVar30;
          plVar35 = (long *)*plVar35;
          aKeyValue = SVar11;
          if (plVar35 != (long *)0x0) {
            pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x431f37b;
            plVar35 = (long *)(**(code **)(*plVar35 + 0x1a8))
                                        (plVar35,"EyeCount",*(undefined8 *)(*plVar35 + 0x1b0));
            aKeyValue = SVar12;
            if (plVar35 != (long *)0x0) {
              pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x431f397;
              uVar30 = (**(code **)(*plVar35 + 0x368))(plVar35,*(undefined8 *)(*plVar35 + 0x370));
              plVar35 = *(long **)(TypeInfo_BasicTitanSetup + 0xb8);
              *(undefined4 *)(plVar35 + 2) = uVar30;
              plVar35 = (long *)*plVar35;
              aKeyValue = SVar13;
              if (plVar35 != (long *)0x0) {
                unaff_R14 = &"HairM";
                pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x431f3cb;
                plVar35 = (long *)(**(code **)(*plVar35 + 0x1a8))
                                            (plVar35,"HairM",*(undefined8 *)(*plVar35 + 0x1b0));
                aKeyValue = SVar14;
                if (plVar35 != (long *)0x0) {
                  pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x431f3e7;
                  uVar30 = (**(code **)(*plVar35 + 0x1e8))(plVar35,*(undefined8 *)(*plVar35 + 0x1f0));
                  plVar35 = *(long **)(TypeInfo_BasicTitanSetup + 0xb8);
                  *(undefined4 *)((long)plVar35 + 0x14) = uVar30;
                  plVar35 = (long *)*plVar35;
                  aKeyValue = SVar15;
                  if (plVar35 != (long *)0x0) {
                    pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x431f41b;
                    plVar35 = (long *)(**(code **)(*plVar35 + 0x1a8))
                                                (plVar35,"HairF",*(undefined8 *)(*plVar35 + 0x1b0));
                    aKeyValue = SVar16;
                    if (plVar35 != (long *)0x0) {
                      pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x431f437;
                      uVar30 = (**(code **)(*plVar35 + 0x1e8))(plVar35);
                      lVar48 = TypeInfo_BasicTitanSetup;
                      *(undefined4 *)(*(long *)(TypeInfo_BasicTitanSetup + 0xb8) + 0x18) = uVar30;
                      pSVar34 = (System_String_o *)0x0;
                      unaff_R13 = &MethodInfo_Void_Add;
                      unaff_R12 = &MethodInfo_Void_set_Item;
                      uVar62 = 0;
                      iVar49 = *(int *)(lVar48 + 0xe4);
                      while( true ) {
                        if (iVar49 == 0) {
                          pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x431f475;
                          il2cpp_runtime_helper_02337ed0();
                          lVar48 = TypeInfo_BasicTitanSetup;
                        }
                        SVar18.value = (SimpleJSONFixed_JSONNode_o *)&TypeInfo_BasicTitanSetup;
                        SVar18.key = pSVar34;
                        SVar17.value = (SimpleJSONFixed_JSONNode_o *)&TypeInfo_BasicTitanSetup;
                        SVar17.key = pSVar34;
                        aKeyValue.value = (SimpleJSONFixed_JSONNode_o *)&TypeInfo_BasicTitanSetup;
                        aKeyValue.key = pSVar34;
                        if (*(int *)(*(long *)(lVar48 + 0xb8) + 0x14) <= (int)pSVar34) {
                          pSVar34 = (System_String_o *)0x0;
                          unaff_R14 = (System_String_o **)&stack0xffffffffffffff2c;
                          uVar61 = 0;
                          iVar49 = *(int *)(lVar48 + 0xe4);
                          goto joined_r0x0431f5ef;
                        }
                        pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x431f495;
                        pSVar36 = System_Int32__ToString((int32_t)&stack0xffffffffffffff30,(MethodInfo *)0x0);
                        pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x431f4a2;
                        unaff_R15 = (long *)System_String__Concat_3ae5ba0
                                                      ("HairM",pSVar36,(MethodInfo *)0x0);
                        if (*(int *)(TypeInfo_BasicTitanSetup + 0xe4) == 0) {
                          pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x431f4b7;
                          il2cpp_runtime_helper_02337ed0();
                        }
                        lVar48 = MethodInfo_Void_Add;
                        pSVar41 = *(System_Collections_Generic_List_object__o **)
                                   (*(long *)(TypeInfo_BasicTitanSetup + 0xb8) + 0x28);
                        if (pSVar41 == (System_Collections_Generic_List_object__o *)0x0) break;
                        piVar1 = &(pSVar41->fields)._version;
                        *piVar1 = *piVar1 + 1;
                        pSVar2 = (pSVar41->fields)._items;
                        aKeyValue = SVar17;
                        if (pSVar2 == (System_Object_array *)0x0) break;
                        uVar61 = (pSVar41->fields)._size;
                        if (uVar61 < (uint)pSVar2->max_length) {
                          (pSVar41->fields)._size = uVar61 + 1;
                          pSVar2->m_Items[(int)uVar61] = (Il2CppObject *)unaff_R15;
                          pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x431f508;
                          il2cpp_runtime_helper_022b4080(pSVar2->m_Items + (int)uVar61,unaff_R15);
                        }
                        else {
                          pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x431f527;
                          System_Collections_Generic_List_object___AddWithResize
                                    (pSVar41,(Il2CppObject *)unaff_R15,
                                     *(MethodInfo_362C220 **)
                                      (*(long *)(*(long *)(lVar48 + 0x20) + 0xc0) + 0x70));
                        }
                        plVar35 = (long *)**(long **)(TypeInfo_BasicTitanSetup + 0xb8);
                        aKeyValue = SVar18;
                        if (plVar35 == (long *)0x0) break;
                        pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                                 (*(long **)(TypeInfo_BasicTitanSetup + 0xb8))[4];
                        aKeyValue.value = (SimpleJSONFixed_JSONNode_o *)pSVar3;
                        pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x431f555;
                        plVar35 = (long *)(**(code **)(*plVar35 + 0x1a8))
                                                    (plVar35,"HairM",*(undefined8 *)(*plVar35 + 0x1b0));
                        if (plVar35 == (long *)0x0) break;
                        pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x431f575;
                        pSVar34 = (System_String_o *)
                                  (**(code **)(*plVar35 + 0x188))
                                            (plVar35,uVar62,*(undefined8 *)(*plVar35 + 400));
                        aKeyValue.key = pSVar34;
                        if (*(int *)&(TypeInfo_JSONNode->_2).field_0x1c == 0) {
                          pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x431f590;
                          il2cpp_runtime_helper_02337ed0();
                        }
                        pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x431f59a;
                        pSVar34 = SimpleJSONFixed_JSONNode__op_Implicit_3f79b00
                                            ((SimpleJSONFixed_JSONNode_o *)pSVar34,(MethodInfo *)0x0);
                        if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
                        pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x431f5b5;
                        System_Collections_Generic_Dictionary_object__object___set_Item
                                  (pSVar3,(Il2CppObject *)unaff_R15,(Il2CppObject *)pSVar34,MethodInfo_Void_set_Item);
                        uVar62 = uVar62 + 1;
                        pSVar34 = (System_String_o *)(ulong)uVar62;
                        iVar49 = *(int *)(TypeInfo_BasicTitanSetup + 0xe4);
                        lVar48 = TypeInfo_BasicTitanSetup;
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
label_0431fd1b:
  pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x431fd20;
  pIVar39 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
  goto label_0431fd20;
joined_r0x0431f5ef:
  if (iVar49 == 0) {
    pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x431f605;
    il2cpp_runtime_helper_02337ed0();
    lVar48 = TypeInfo_BasicTitanSetup;
  }
  plVar35 = &TypeInfo_BasicTitanSetup;
  SVar23.value = (SimpleJSONFixed_JSONNode_o *)&TypeInfo_BasicTitanSetup;
  SVar23.key = pSVar34;
  SVar22.value = (SimpleJSONFixed_JSONNode_o *)&TypeInfo_BasicTitanSetup;
  SVar22.key = pSVar34;
  aKeyValue.value = (SimpleJSONFixed_JSONNode_o *)&TypeInfo_BasicTitanSetup;
  aKeyValue.key = pSVar34;
  SVar21.value = (SimpleJSONFixed_JSONNode_o *)&TypeInfo_BasicTitanSetup;
  SVar21.key = pSVar34;
  SVar20.value = (SimpleJSONFixed_JSONNode_o *)&TypeInfo_BasicTitanSetup;
  SVar20.key = pSVar34;
  SVar19.value = (SimpleJSONFixed_JSONNode_o *)&TypeInfo_BasicTitanSetup;
  SVar19.key = pSVar34;
  if (*(int *)(*(long *)(lVar48 + 0xb8) + 0x18) <= (int)pSVar34) {
    if (*(int *)(lVar48 + 0xe4) == 0) {
      pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x431f782;
      il2cpp_runtime_helper_02337ed0();
      lVar48 = TypeInfo_BasicTitanSetup;
    }
    plVar37 = (long *)**(long **)(lVar48 + 0xb8);
    if (plVar37 != (long *)0x0) {
      pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x431f7b3;
      plVar37 = (long *)(**(code **)(*plVar37 + 0x1a8))
                                  (plVar37,"HairColors",*(undefined8 *)(*plVar37 + 0x1b0));
      aKeyValue = SVar22;
      if (plVar37 != (long *)0x0) {
        pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x431f7cf;
        plVar37 = (long *)(**(code **)(*plVar37 + 0x408))(plVar37,*(undefined8 *)(*plVar37 + 0x410));
        aKeyValue = SVar23;
        if (plVar37 != (long *)0x0) {
          pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x431f7f0;
          (**(code **)(*plVar37 + 0x338))(&local_78,plVar37,*(undefined8 *)(*plVar37 + 0x340));
          pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x431f837;
          __this_05.fields._4_4_ = uVar61;
          __this_05.fields.type = in_stack_ffffffffffffff28;
          __this_05.fields.m_Object.fields._dictionary._0_4_ = uVar62;
          __this_05.fields.m_Object.fields._dictionary._4_4_ = in_stack_ffffffffffffff34;
          __this_05.fields.m_Object.fields._8_8_ = local_78;
          __this_05.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIStack_70;
          __this_05.fields.m_Object.fields._current.fields.value = (Il2CppObject *)local_68;
          __this_05.fields.m_Object.fields._32_8_ = pcStack_60;
          __this_05.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)local_58;
          __this_05.fields.m_Array.fields._8_8_ = pIStack_50;
          __this_05.fields.m_Array.fields._current = local_48;
          pIVar55 = local_78;
          pIVar56 = pIStack_70;
          pIVar57 = local_68;
          pcVar58 = pcStack_60;
          pIVar47 = local_58;
          pIVar60 = pIStack_50;
          pSVar50 = local_48;
          bVar32 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                             (__this_05,(MethodInfo *)&stack0xffffffffffffff38);
          if ((char)bVar32 == '\0') goto label_0431fa3e;
          unaff_R15 = (long *)&stack0xffffffffffffff38;
          goto label_0431f87c;
        }
      }
    }
    goto label_0431fd1b;
  }
  pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x431f623;
  pSVar36 = System_Int32__ToString((int32_t)unaff_R14,(MethodInfo *)0x0);
  pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x431f637;
  unaff_R15 = (long *)System_String__Concat_3ae5ba0("HairF",pSVar36,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_BasicTitanSetup + 0xe4) == 0) {
    pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x431f64c;
    il2cpp_runtime_helper_02337ed0();
  }
  lVar48 = MethodInfo_Void_Add;
  pSVar41 = *(System_Collections_Generic_List_object__o **)(*(long *)(TypeInfo_BasicTitanSetup + 0xb8) + 0x28);
  aKeyValue = SVar19;
  if (pSVar41 == (System_Collections_Generic_List_object__o *)0x0) goto label_0431fd1b;
  piVar1 = &(pSVar41->fields)._version;
  *piVar1 = *piVar1 + 1;
  pSVar2 = (pSVar41->fields)._items;
  aKeyValue = SVar20;
  if (pSVar2 == (System_Object_array *)0x0) goto label_0431fd1b;
  uVar31 = (pSVar41->fields)._size;
  if (uVar31 < (uint)pSVar2->max_length) {
    (pSVar41->fields)._size = uVar31 + 1;
    pSVar2->m_Items[(int)uVar31] = (Il2CppObject *)unaff_R15;
    pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x431f69d;
    il2cpp_runtime_helper_022b4080(pSVar2->m_Items + (int)uVar31,unaff_R15);
  }
  else {
    pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x431f6b7;
    System_Collections_Generic_List_object___AddWithResize
              (pSVar41,(Il2CppObject *)unaff_R15,
               *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar48 + 0x20) + 0xc0) + 0x70));
  }
  plVar35 = (long *)**(long **)(TypeInfo_BasicTitanSetup + 0xb8);
  aKeyValue = SVar21;
  if (plVar35 == (long *)0x0) goto label_0431fd1b;
  pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(*(long **)(TypeInfo_BasicTitanSetup + 0xb8))[4];
  aKeyValue.value = (SimpleJSONFixed_JSONNode_o *)pSVar3;
  pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x431f6ec;
  plVar35 = (long *)(**(code **)(*plVar35 + 0x1a8))(plVar35,"HairF",*(undefined8 *)(*plVar35 + 0x1b0));
  if (plVar35 == (long *)0x0) goto label_0431fd1b;
  pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x431f70c;
  pSVar34 = (System_String_o *)(**(code **)(*plVar35 + 0x188))(plVar35,uVar61,*(undefined8 *)(*plVar35 + 400))
  ;
  aKeyValue.key = pSVar34;
  if (*(int *)&(TypeInfo_JSONNode->_2).field_0x1c == 0) {
    pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x431f727;
    il2cpp_runtime_helper_02337ed0();
  }
  pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x431f731;
  pSVar34 = SimpleJSONFixed_JSONNode__op_Implicit_3f79b00
                      ((SimpleJSONFixed_JSONNode_o *)pSVar34,(MethodInfo *)0x0);
  if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_0431fd1b;
  pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x431f74c;
  System_Collections_Generic_Dictionary_object__object___set_Item
            (pSVar3,(Il2CppObject *)unaff_R15,(Il2CppObject *)pSVar34,MethodInfo_Void_set_Item);
  uVar61 = uVar61 + 1;
  pSVar34 = (System_String_o *)(ulong)uVar61;
  iVar49 = *(int *)(TypeInfo_BasicTitanSetup + 0xe4);
  lVar48 = TypeInfo_BasicTitanSetup;
  goto joined_r0x0431f5ef;
  while( true ) {
    unaff_R13 = *(long **)(*(long *)(TypeInfo_BasicTitanSetup + 0xb8) + 0x38);
    pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x431f8f9;
    plVar35 = (long *)(*(pSVar38->klass->vtable)._5_get_Item.methodPtr)
                                (pSVar38,0,(pSVar38->klass->vtable)._5_get_Item.method);
    aKeyValue = SVar24;
    if (plVar35 == (long *)0x0) goto label_0431fd1b;
    pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x431f915;
    in_stack_ffffffffffffff34 = (**(code **)(*plVar35 + 0x368))(plVar35,*(undefined8 *)(*plVar35 + 0x370));
    SVar25.value = pSVar38;
    SVar25.key = (System_String_o *)(ulong)in_stack_ffffffffffffff34;
    aKeyValue.key = (System_String_o *)(ulong)in_stack_ffffffffffffff34;
    pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x431f930;
    plVar35 = (long *)(*(pSVar38->klass->vtable)._5_get_Item.methodPtr)
                                (pSVar38,1,(pSVar38->klass->vtable)._5_get_Item.method);
    if (plVar35 == (long *)0x0) goto label_0431fd1b;
    pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x431f950;
    uVar31 = (**(code **)(*plVar35 + 0x368))(plVar35,*(undefined8 *)(*plVar35 + 0x370));
    unaff_R12 = (MethodInfo_3104DF0 **)(ulong)uVar31;
    pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x431f96c;
    plVar35 = (long *)(*(pSVar38->klass->vtable)._5_get_Item.methodPtr)
                                (pSVar38,2,(pSVar38->klass->vtable)._5_get_Item.method);
    aKeyValue = SVar25;
    if (plVar35 == (long *)0x0) goto label_0431fd1b;
    pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x431f988;
    b = (**(code **)(*plVar35 + 0x368))(plVar35,*(undefined8 *)(*plVar35 + 0x370));
    pSVar34 = (System_String_o *)(ulong)b;
    aKeyValue.key = pSVar34;
    pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x431f9a3;
    plVar35 = (long *)(*(pSVar38->klass->vtable)._5_get_Item.methodPtr)
                                (pSVar38,3,(pSVar38->klass->vtable)._5_get_Item.method);
    if (plVar35 == (long *)0x0) goto label_0431fd1b;
    pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x431f9bf;
    a = (**(code **)(*plVar35 + 0x368))(plVar35,*(undefined8 *)(*plVar35 + 0x370));
    unaff_R14 = (System_String_o **)(ulong)a;
    pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x431f9d1;
    plVar35 = (long *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
    SVar26.value = (SimpleJSONFixed_JSONNode_o *)plVar35;
    SVar26.key = pSVar34;
    aKeyValue.value = (SimpleJSONFixed_JSONNode_o *)plVar35;
    pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x431f9eb;
    in_R8 = (System_Collections_Generic_HashSet_int__o *)unaff_R14;
    Utility_Color255___ctor
              ((Utility_Color255_o *)plVar35,in_stack_ffffffffffffff34,uVar31,b,a,(MethodInfo *)0x0);
    lVar48 = MethodInfo_Void_Add;
    if ((System_Collections_Generic_List_object__o *)unaff_R13 ==
        (System_Collections_Generic_List_object__o *)0x0) goto label_0431fd1b;
    piVar1 = &(((System_Collections_Generic_List_object__o *)unaff_R13)->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar2 = (((System_Collections_Generic_List_object__o *)unaff_R13)->fields)._items;
    aKeyValue = SVar26;
    if (pSVar2 == (System_Object_array *)0x0) goto label_0431fd1b;
    uVar31 = (((System_Collections_Generic_List_object__o *)unaff_R13)->fields)._size;
    if (uVar31 < (uint)pSVar2->max_length) {
      (((System_Collections_Generic_List_object__o *)unaff_R13)->fields)._size = uVar31 + 1;
      pSVar2->m_Items[(int)uVar31] = (Il2CppObject *)plVar35;
      pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x431fa39;
      il2cpp_runtime_helper_022b4080(pSVar2->m_Items + (int)uVar31,plVar35);
    }
    else {
      pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x431f86a;
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)unaff_R13,(Il2CppObject *)plVar35,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar48 + 0x20) + 0xc0) + 0x70));
    }
    pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x431f874;
    __this_06.fields._4_4_ = uVar61;
    __this_06.fields.type = in_stack_ffffffffffffff28;
    __this_06.fields.m_Object.fields._dictionary._0_4_ = uVar62;
    __this_06.fields.m_Object.fields._dictionary._4_4_ = in_stack_ffffffffffffff34;
    __this_06.fields.m_Object.fields._8_8_ = pIVar55;
    __this_06.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIVar56;
    __this_06.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar57;
    __this_06.fields.m_Object.fields._32_8_ = pcVar58;
    __this_06.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pIVar47;
    __this_06.fields.m_Array.fields._8_8_ = pIVar60;
    __this_06.fields.m_Array.fields._current = pSVar50;
    bVar32 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext(__this_06,(MethodInfo *)unaff_R15);
    if ((char)bVar32 == '\0') break;
label_0431f87c:
    pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x431f886;
    __this_07.fields._4_4_ = uVar61;
    __this_07.fields.type = in_stack_ffffffffffffff28;
    __this_07.fields.m_Object.fields._dictionary._0_4_ = uVar62;
    __this_07.fields.m_Object.fields._dictionary._4_4_ = in_stack_ffffffffffffff34;
    __this_07.fields.m_Object.fields._8_8_ = pIVar55;
    __this_07.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIVar56;
    __this_07.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar57;
    __this_07.fields.m_Object.fields._32_8_ = pcVar58;
    __this_07.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pIVar47;
    __this_07.fields.m_Array.fields._8_8_ = pIVar60;
    __this_07.fields.m_Array.fields._current = pSVar50;
    SVar53 = SimpleJSONFixed_JSONNode_Enumerator__get_Current(__this_07,(MethodInfo *)unaff_R15);
    if (*(int *)&(TypeInfo_JSONNode->_2).field_0x1c == 0) {
      pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x431f8a4;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x431f8b1;
    pSVar38 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0(SVar53,(MethodInfo *)0x0);
    SVar24.value = pSVar38;
    SVar24.key = (System_String_o *)&TypeInfo_BasicTitanSetup;
    aKeyValue.value = pSVar38;
    aKeyValue.key = (System_String_o *)&TypeInfo_BasicTitanSetup;
    if (*(int *)(TypeInfo_BasicTitanSetup + 0xe4) == 0) {
      pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x431f8cc;
      il2cpp_runtime_helper_02337ed0();
    }
    if (pSVar38 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_0431fd1b;
  }
label_0431fa3e:
  pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x431fa4d;
  unaff_R14 = (System_String_o **)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_int);
  pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x431fa62;
  System_Collections_Generic_HashSet_int____ctor
            ((System_Collections_Generic_HashSet_int__o *)unaff_R14,MethodInfo_HashSet_1_System_Int32);
  SVar28.value = (SimpleJSONFixed_JSONNode_o *)plVar35;
  SVar28.key = (System_String_o *)&TypeInfo_BasicTitanSetup;
  SVar27.value = (SimpleJSONFixed_JSONNode_o *)plVar35;
  SVar27.key = (System_String_o *)&TypeInfo_BasicTitanSetup;
  aKeyValue.value = (SimpleJSONFixed_JSONNode_o *)plVar35;
  aKeyValue.key = (System_String_o *)&TypeInfo_BasicTitanSetup;
  if (*(int *)(TypeInfo_BasicTitanSetup + 0xe4) == 0) {
    pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x431fa7a;
    il2cpp_runtime_helper_02337ed0();
  }
  plVar37 = (long *)**(long **)(TypeInfo_BasicTitanSetup + 0xb8);
  if (plVar37 == (long *)0x0) goto label_0431fd1b;
  pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x431faaa;
  plVar37 = (long *)(**(code **)(*plVar37 + 0x1a8))(plVar37,"AIExcludedEyes",*(undefined8 *)(*plVar37 + 0x1b0));
  aKeyValue = SVar27;
  if (plVar37 == (long *)0x0) goto label_0431fd1b;
  pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x431fac6;
  plVar37 = (long *)(**(code **)(*plVar37 + 0x408))(plVar37,*(undefined8 *)(*plVar37 + 0x410));
  aKeyValue = SVar28;
  if (plVar37 == (long *)0x0) goto label_0431fd1b;
  pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x431fae7;
  (**(code **)(*plVar37 + 0x338))(&local_78,plVar37,*(undefined8 *)(*plVar37 + 0x340));
  pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x431fb2e;
  __this_08.fields._4_4_ = uVar61;
  __this_08.fields.type = in_stack_ffffffffffffff28;
  __this_08.fields.m_Object.fields._dictionary._0_4_ = uVar62;
  __this_08.fields.m_Object.fields._dictionary._4_4_ = in_stack_ffffffffffffff34;
  __this_08.fields.m_Object.fields._8_8_ = local_78;
  __this_08.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIStack_70;
  __this_08.fields.m_Object.fields._current.fields.value = (Il2CppObject *)local_68;
  __this_08.fields.m_Object.fields._32_8_ = pcStack_60;
  __this_08.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)local_58;
  __this_08.fields.m_Array.fields._8_8_ = pIStack_50;
  __this_08.fields.m_Array.fields._current = local_48;
  bVar32 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext(__this_08,(MethodInfo *)&stack0xffffffffffffff38);
  if ((char)bVar32 == '\0') {
label_0431fbbd:
    if ((System_Collections_Generic_HashSet_int__o *)unaff_R14 !=
        (System_Collections_Generic_HashSet_int__o *)0x0) {
      pSVar50 = (SimpleJSONFixed_JSONNode_o *)0x0;
      unaff_R15 = &MethodInfo_Void_Add;
      iVar49 = *(int *)(TypeInfo_BasicTitanSetup + 0xe4);
      do {
        if (iVar49 == 0) {
          pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x431fc21;
          il2cpp_runtime_helper_02337ed0();
        }
        iVar49 = (int)pSVar50;
        if (*(int *)(*(long *)(TypeInfo_BasicTitanSetup + 0xb8) + 0x10) <= iVar49) {
          return;
        }
        pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x431fc42;
        bVar32 = System_Collections_Generic_HashSet_int___Contains
                           ((System_Collections_Generic_HashSet_int__o *)unaff_R14,iVar49,MethodInfo_Boolean_Contains);
        if ((char)bVar32 == '\0') {
          SVar29.value = pSVar50;
          SVar29.key = (System_String_o *)&TypeInfo_BasicTitanSetup;
          aKeyValue.value = pSVar50;
          aKeyValue.key = (System_String_o *)&TypeInfo_BasicTitanSetup;
          if (*(int *)(TypeInfo_BasicTitanSetup + 0xe4) == 0) {
            pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x431fc5e;
            il2cpp_runtime_helper_02337ed0();
          }
          lVar48 = MethodInfo_Void_Add;
          __this = *(System_Collections_Generic_List_int__o **)(*(long *)(TypeInfo_BasicTitanSetup + 0xb8) + 0x30);
          unaff_R12 = (MethodInfo_3104DF0 **)&MethodInfo_Boolean_Contains;
          if (__this == (System_Collections_Generic_List_int__o *)0x0) goto label_0431fd1b;
          piVar1 = &(__this->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar4 = (__this->fields)._items;
          aKeyValue = SVar29;
          if (pSVar4 == (System_Int32_array *)0x0) goto label_0431fd1b;
          uVar62 = (__this->fields)._size;
          if (uVar62 < (uint)pSVar4->max_length) {
            (__this->fields)._size = uVar62 + 1;
            pSVar4->m_Items[(int)uVar62] = iVar49;
          }
          else {
            pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x431fc06;
            System_Collections_Generic_List_int___AddWithResize
                      (__this,iVar49,
                       *(MethodInfo_35FDFF0 **)(*(long *)(*(long *)(lVar48 + 0x20) + 0xc0) + 0x70));
          }
        }
        pSVar50 = (SimpleJSONFixed_JSONNode_o *)(ulong)(iVar49 + 1);
        iVar49 = *(int *)(TypeInfo_BasicTitanSetup + 0xe4);
      } while( true );
    }
    aKeyValue.value = (SimpleJSONFixed_JSONNode_o *)plVar35;
    aKeyValue.key = (System_String_o *)&TypeInfo_BasicTitanSetup;
    if (*(int *)(TypeInfo_BasicTitanSetup + 0xe4) == 0) {
      pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x431fcbd;
      il2cpp_runtime_helper_02337ed0();
    }
    if (*(int *)(*(long *)(TypeInfo_BasicTitanSetup + 0xb8) + 0x10) < 1) {
      return;
    }
    goto label_0431fd1b;
  }
  if ((System_Collections_Generic_HashSet_int__o *)unaff_R14 !=
      (System_Collections_Generic_HashSet_int__o *)0x0) {
    unaff_R15 = (long *)&stack0xffffffffffffff38;
    pIVar55 = local_78;
    pIVar56 = pIStack_70;
    pIVar57 = local_68;
    pcVar58 = pcStack_60;
    pIVar47 = local_58;
    pIVar60 = pIStack_50;
    pSVar50 = local_48;
    do {
      pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x431fb5a;
      __this_09.fields._4_4_ = uVar61;
      __this_09.fields.type = in_stack_ffffffffffffff28;
      __this_09.fields.m_Object.fields._dictionary._0_4_ = uVar62;
      __this_09.fields.m_Object.fields._dictionary._4_4_ = in_stack_ffffffffffffff34;
      __this_09.fields.m_Object.fields._8_8_ = pIVar55;
      __this_09.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIVar56;
      __this_09.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar57;
      __this_09.fields.m_Object.fields._32_8_ = pcVar58;
      __this_09.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pIVar47;
      __this_09.fields.m_Array.fields._8_8_ = pIVar60;
      __this_09.fields.m_Array.fields._current = pSVar50;
      aKeyValue = (System_Collections_Generic_KeyValuePair_string__JSONNode__Fields)
                  SimpleJSONFixed_JSONNode_Enumerator__get_Current(__this_09,(MethodInfo *)unaff_R15);
      plVar35 = (long *)aKeyValue.value;
      if (*(int *)&(TypeInfo_JSONNode->_2).field_0x1c == 0) {
        pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x431fb78;
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x431fb85;
      pSVar38 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0
                          ((System_Collections_Generic_KeyValuePair_string__JSONNode__o)aKeyValue,
                           (MethodInfo *)0x0);
      unaff_R12 = (MethodInfo_3104DF0 **)&MethodInfo_Boolean_Add;
      if (pSVar38 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_0431fd1b;
      pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x431fba1;
      iVar33 = (*(pSVar38->klass->vtable)._35_get_AsInt.methodPtr)
                         (pSVar38,(pSVar38->klass->vtable)._35_get_AsInt.method);
      pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x431fbaf;
      System_Collections_Generic_HashSet_int___Add
                ((System_Collections_Generic_HashSet_int__o *)unaff_R14,iVar33,MethodInfo_Boolean_Add);
      pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x431fbb9;
      __this_10.fields._4_4_ = uVar61;
      __this_10.fields.type = in_stack_ffffffffffffff28;
      __this_10.fields.m_Object.fields._dictionary._0_4_ = uVar62;
      __this_10.fields.m_Object.fields._dictionary._4_4_ = in_stack_ffffffffffffff34;
      __this_10.fields.m_Object.fields._8_8_ = pIVar55;
      __this_10.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIVar56;
      __this_10.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar57;
      __this_10.fields.m_Object.fields._32_8_ = pcVar58;
      __this_10.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pIVar47;
      __this_10.fields.m_Array.fields._8_8_ = pIVar60;
      __this_10.fields.m_Array.fields._current = pSVar50;
      bVar32 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext(__this_10,(MethodInfo *)unaff_R15);
    } while ((char)bVar32 != '\0');
    goto label_0431fbbd;
  }
  pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x431fceb;
  __this_11.fields._4_4_ = uVar61;
  __this_11.fields.type = in_stack_ffffffffffffff28;
  __this_11.fields.m_Object.fields._dictionary._0_4_ = uVar62;
  __this_11.fields.m_Object.fields._dictionary._4_4_ = in_stack_ffffffffffffff34;
  __this_11.fields.m_Object.fields._8_8_ = local_78;
  __this_11.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIStack_70;
  __this_11.fields.m_Object.fields._current.fields.value = (Il2CppObject *)local_68;
  __this_11.fields.m_Object.fields._32_8_ = pcStack_60;
  __this_11.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)local_58;
  __this_11.fields.m_Array.fields._8_8_ = pIStack_50;
  __this_11.fields.m_Array.fields._current = local_48;
  aKeyValue = (System_Collections_Generic_KeyValuePair_string__JSONNode__Fields)
              SimpleJSONFixed_JSONNode_Enumerator__get_Current
                        (__this_11,(MethodInfo *)&stack0xffffffffffffff38);
  if (*(int *)&(TypeInfo_JSONNode->_2).field_0x1c == 0) {
    pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x431fd09;
    il2cpp_runtime_helper_02337ed0();
  }
  pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x431fd16;
  pIVar39 = (Il2CppObject *)
            SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0
                      ((System_Collections_Generic_KeyValuePair_string__JSONNode__o)aKeyValue,
                       (MethodInfo *)0x0);
  if (pIVar39 == (Il2CppObject *)0x0) goto label_0431fd1b;
label_0431fd20:
  pIVar47 = pIVar39->klass;
  pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x431fd33;
  (*pIVar47->vtable[0x23].methodPtr)(pIVar39,pIVar47->vtable[0x23].method);
  pSStack_e0 = (SimpleJSONFixed_JSONNode_o *)0x431fd38;
  il2cpp_runtime_helper_022b2c90();
  ppMStack_100 = unaff_R12;
  pSStack_f8 = (System_Collections_Generic_List_object__o *)unaff_R13;
  pSStack_f0 = (System_Collections_Generic_HashSet_int__o *)unaff_R14;
  pMStack_e8 = (MethodInfo *)unaff_R15;
  if (g_data_057adff0 == '\0') {
    pSStack_108 = aKeyValue.key;
    pSStack_e0 = aKeyValue.value;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterData);
    il2cpp_runtime_helper_023445d0(&MethodInfo_JSONNode_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_int);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Single);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_float);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    il2cpp_runtime_helper_023445d0(&"Chance");
    il2cpp_runtime_helper_023445d0(&"Body");
    il2cpp_runtime_helper_023445d0(&"Titan");
    il2cpp_runtime_helper_023445d0(&"Head");
    il2cpp_runtime_helper_023445d0(&"Default");
    il2cpp_runtime_helper_023445d0(&"BodyHeadCombos");
    aKeyValue.value = pSStack_e0;
    aKeyValue.key = pSStack_108;
    g_data_057adff0 = '\x01';
  }
  pSStack_e0 = aKeyValue.value;
  pSStack_108 = aKeyValue.key;
  pSVar50 = (SimpleJSONFixed_JSONNode_o *)0x0;
  pIVar59 = (Il2CppClass *)0x0;
  pIVar60 = (Il2CppType *)0x0;
  pIVar57 = (InvokerMethod)0x0;
  pcVar58 = (char *)0x0;
  pIVar55 = (Il2CppMethodPointer)0x0;
  pIVar56 = (Il2CppMethodPointer)0x0;
  lVar40 = il2cpp_runtime_helper_022b2a40(TypeInfo_int);
  cVar51 = (char)in_R8;
  lVar48 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
  pIVar46 = pIVar47;
  item = pIVar39;
  if (((lVar48 == 0) || (lVar48 = *(long *)(lVar48 + 0x50), lVar48 == 0)) ||
     (lVar48 = *(long *)(lVar48 + 0xa0), lVar48 == 0)) goto label_043202d7;
  if (*(char *)(lVar48 + 0x11) != '\0') {
    if (lVar40 == 0) goto label_043202d7;
    iVar49 = *(int *)(lVar40 + 0x18);
    if (iVar49 != 0) {
      *(undefined4 *)(lVar40 + 0x20) = 0;
      uVar30 = 0;
      if (iVar49 != 1) goto label_043202bf;
    }
    goto label_043202dc;
  }
  if (*(int *)&(TypeInfo_JSONNode->_2).field_0x1c == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar32 = SimpleJSONFixed_JSONNode__op_Equality
                     ((SimpleJSONFixed_JSONNode_o *)pIVar39,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar32 == '\0') {
label_0431ff88:
    cVar51 = (char)in_R8;
    pIVar46 = pIVar47;
    item = (Il2CppObject *)0x0;
    if (pIVar39 == (Il2CppObject *)0x0) goto label_043202d7;
    item = (Il2CppObject *)
           (*pIVar39->klass->vtable[7].methodPtr)(pIVar39,"BodyHeadCombos",pIVar39->klass->vtable[7].method);
    pSVar41 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_object);
    System_Collections_Generic_List_object____ctor(pSVar41,MethodInfo_List_1_System_Object);
    __this_12 = (System_Collections_Generic_List_float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_float);
    System_Collections_Generic_List_float____ctor(__this_12,MethodInfo_List_1_System_Single);
    cVar51 = (char)in_R8;
    pIVar46 = pIVar47;
    in_stack_fffffffffffffe58 = lVar40;
    if (item == (Il2CppObject *)0x0) goto label_043202d7;
    (*item->klass->vtable[0x20].methodPtr)(&pIStack_150,item,item->klass->vtable[0x20].method);
    __this_01.fields.m_Object.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)lVar40;
    __this_01.fields._0_8_ = in_stack_fffffffffffffe50;
    __this_01.fields.m_Object.fields._8_8_ = pIStack_150;
    __this_01.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIStack_148;
    __this_01.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIStack_140;
    __this_01.fields.m_Object.fields._32_8_ = pcStack_138;
    __this_01.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pIStack_130;
    __this_01.fields.m_Array.fields._8_8_ = pIStack_128;
    __this_01.fields.m_Array.fields._current = pSStack_120;
    bVar32 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext(__this_01,(MethodInfo *)&stack0xfffffffffffffe60);
    cVar51 = (char)in_R8;
    bVar45 = (byte)pIVar47;
    pIVar55 = pIStack_150;
    pIVar56 = pIStack_148;
    pIVar57 = pIStack_140;
    pcVar58 = pcStack_138;
    pIVar59 = pIStack_130;
    pIVar60 = pIStack_128;
    pSVar50 = pSStack_120;
    if ((char)bVar32 == '\0') {
label_043201d9:
      pIVar46 = pIVar47;
      if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        pIVar46 = pIVar47;
      }
      pIVar39 = Utility_Util__GetRandomFromWeightedList(pSVar41,__this_12,(MethodInfo *)0x0);
      in_stack_fffffffffffffe58 = lVar40;
      if (pIVar39 == (Il2CppObject *)0x0) goto label_043202d7;
      bVar45 = (TypeInfo_JSONNode->_2).naturalAligment;
      pIVar46 = (Il2CppClass *)(ulong)bVar45;
      if ((bVar45 <= (pIVar39->klass->_2).naturalAligment) &&
         ((pIVar39->klass->_2).typeHierarchy[(long)((long)&pIVar46[-1].vtable[0xfe].method + 7)] ==
          TypeInfo_JSONNode)) {
        plVar35 = (long *)(*pIVar39->klass->vtable[7].methodPtr)
                                    (pIVar39,"Body",pIVar39->klass->vtable[7].method);
        item = pIVar39;
        if (plVar35 == (long *)0x0) goto label_043202d7;
        pIVar46 = (Il2CppClass *)*plVar35;
        uVar30 = (*pIVar46->vtable[0x23].methodPtr)(plVar35,pIVar46->vtable[0x23].method);
        iVar49 = (int)pIVar46;
        if (lVar40 == 0) goto label_043202d7;
        if (*(int *)(lVar40 + 0x18) != 0) {
          *(undefined4 *)(lVar40 + 0x20) = uVar30;
          plVar35 = (long *)(*pIVar39->klass->vtable[7].methodPtr)
                                      (pIVar39,"Head",pIVar39->klass->vtable[7].method);
          if (plVar35 == (long *)0x0) goto label_043202d7;
          lVar48 = *plVar35;
          uVar30 = (**(code **)(lVar48 + 0x368))(plVar35,*(undefined8 *)(lVar48 + 0x370));
          iVar49 = (int)lVar48;
          if (1 < *(uint *)(lVar40 + 0x18)) {
label_043202bf:
            *(undefined4 *)(lVar40 + 0x24) = uVar30;
            return;
          }
        }
        goto label_043202dc;
      }
      goto label_043202e1;
    }
    if (pSVar41 != (System_Collections_Generic_List_object__o *)0x0) {
      do {
        __this_03.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)lVar40;
        __this_03.fields._0_8_ = in_stack_fffffffffffffe50;
        __this_03.fields.m_Object.fields._8_8_ = pIVar55;
        __this_03.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIVar56;
        __this_03.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar57;
        __this_03.fields.m_Object.fields._32_8_ = pcVar58;
        __this_03.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pIVar59;
        __this_03.fields.m_Array.fields._8_8_ = pIVar60;
        __this_03.fields.m_Array.fields._current = pSVar50;
        SVar53 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                           (__this_03,(MethodInfo *)&stack0xfffffffffffffe60);
        if (*(int *)&(TypeInfo_JSONNode->_2).field_0x1c == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        item = (Il2CppObject *)SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0(SVar53,(MethodInfo *)0x0);
        pIVar46 = MethodInfo_Void_Add;
        cVar51 = (char)in_R8;
        piVar1 = &(pSVar41->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar2 = (pSVar41->fields)._items;
        in_stack_fffffffffffffe58 = lVar40;
        if (pSVar2 == (System_Object_array *)0x0) goto label_043202d7;
        uVar62 = (pSVar41->fields)._size;
        if (uVar62 < (uint)pSVar2->max_length) {
          pIVar46 = (Il2CppClass *)(ulong)(uVar62 + 1);
          (pSVar41->fields)._size = uVar62 + 1;
          pSVar2->m_Items[(int)uVar62] = item;
          il2cpp_runtime_helper_022b4080(pSVar2->m_Items + (int)uVar62,item);
          cVar51 = (char)in_R8;
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (pSVar41,item,
                     *(MethodInfo_362C220 **)(*(long *)((long)(pIVar46->_1).byval_arg.data + 0xc0) + 0x70));
          cVar51 = (char)in_R8;
        }
        in_stack_fffffffffffffe58 = lVar40;
        if (item == (Il2CppObject *)0x0) goto label_043202d7;
        plVar35 = (long *)(*item->klass->vtable[7].methodPtr)(item,"Chance",item->klass->vtable[7].method)
        ;
        cVar51 = (char)in_R8;
        in_stack_fffffffffffffe58 = lVar40;
        if (plVar35 == (long *)0x0) goto label_043202d7;
        pIVar46 = (Il2CppClass *)*plVar35;
        fVar52 = (float)(*pIVar46->vtable[0x25].methodPtr)(plVar35,pIVar46->vtable[0x25].method);
        pIVar47 = MethodInfo_Void_Add;
        cVar51 = (char)in_R8;
        in_stack_fffffffffffffe58 = lVar40;
        if (__this_12 == (System_Collections_Generic_List_float__o *)0x0) goto label_043202d7;
        piVar1 = &(__this_12->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar5 = (__this_12->fields)._items;
        pIVar46 = pIVar47;
        if (pSVar5 == (System_Single_array *)0x0) goto label_043202d7;
        uVar62 = (__this_12->fields)._size;
        if (uVar62 < (uint)pSVar5->max_length) {
          pIVar47 = (Il2CppClass *)(ulong)(uVar62 + 1);
          (__this_12->fields)._size = uVar62 + 1;
          pSVar5->m_Items[(int)uVar62] = fVar52;
        }
        else {
          System_Collections_Generic_List_float___AddWithResize
                    (__this_12,fVar52,
                     *(MethodInfo_36649C0 **)(*(long *)((long)(pIVar47->_1).byval_arg.data + 0xc0) + 0x70));
        }
        __this_02.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)lVar40;
        __this_02.fields._0_8_ = in_stack_fffffffffffffe50;
        __this_02.fields.m_Object.fields._8_8_ = pIVar55;
        __this_02.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIVar56;
        __this_02.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar57;
        __this_02.fields.m_Object.fields._32_8_ = pcVar58;
        __this_02.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pIVar59;
        __this_02.fields.m_Array.fields._8_8_ = pIVar60;
        __this_02.fields.m_Array.fields._current = pSVar50;
        bVar32 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                           (__this_02,(MethodInfo *)&stack0xfffffffffffffe60);
        cVar51 = (char)in_R8;
      } while ((char)bVar32 != '\0');
      goto label_043201d9;
    }
  }
  else {
    if (*(int *)(TypeInfo_CharacterData + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    cVar51 = (char)in_R8;
    pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)(*(long *)(TypeInfo_CharacterData + 0xb8) + 8)
    ;
    pIVar46 = pIVar47;
    item = (Il2CppObject *)&TypeInfo_CharacterData;
    if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pIVar39 = System_Collections_Generic_Dictionary_object__object___get_Item
                          (pSVar3,"Titan",MethodInfo_JSONNode_get_Item);
      cVar51 = (char)in_R8;
      pIVar46 = pIVar47;
      if (pIVar39 != (Il2CppObject *)0x0) {
        pIVar47 = pIVar39->klass;
        pIVar39 = (Il2CppObject *)
                  (*pIVar47->vtable[7].methodPtr)(pIVar39,"Default",pIVar47->vtable[7].method);
        goto label_0431ff88;
      }
    }
label_043202d7:
    iVar49 = (int)pIVar46;
    il2cpp_runtime_helper_022b2c90();
    pIVar39 = item;
label_043202dc:
    bVar45 = (byte)iVar49;
    il2cpp_runtime_helper_022b2ca0();
    lVar40 = in_stack_fffffffffffffe58;
label_043202e1:
    il2cpp_runtime_helper_022b2fd0(pIVar39);
    pIStack_150 = pIVar55;
    pIStack_148 = pIVar56;
    pIStack_140 = pIVar57;
    pcStack_138 = pcVar58;
    pIStack_130 = pIVar59;
    pIStack_128 = pIVar60;
    pSStack_120 = pSVar50;
  }
  __this_04.fields.m_Object.fields._dictionary =
       (System_Collections_Generic_Dictionary_TKey__TValue__o *)lVar40;
  __this_04.fields._0_8_ = in_stack_fffffffffffffe50;
  __this_04.fields.m_Object.fields._8_8_ = pIStack_150;
  __this_04.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIStack_148;
  __this_04.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIStack_140;
  __this_04.fields.m_Object.fields._32_8_ = pcStack_138;
  __this_04.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pIStack_130;
  __this_04.fields.m_Array.fields._8_8_ = pIStack_128;
  __this_04.fields.m_Array.fields._current = pSStack_120;
  SVar53 = SimpleJSONFixed_JSONNode_Enumerator__get_Current(__this_04,(MethodInfo *)&stack0xfffffffffffffe60);
  iVar33 = (int32_t)SVar53.fields.value;
  if (*(int *)&(TypeInfo_JSONNode->_2).field_0x1c == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0(SVar53,(MethodInfo *)0x0);
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adff1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BasicTitanSetup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Color255_GetRandomItem_Color255);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_GetRandomItem_Int32);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_GetRandomItem_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanCustomSet);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    g_data_057adff1 = '\x01';
  }
  pSVar42 = (Settings_TitanCustomSet_o *)il2cpp_runtime_helper_023052d0(TypeInfo_TitanCustomSet);
  pSVar44 = (Settings_TitanCustomSet_o *)0x0;
  list = (MethodInfo_24E7B40 **)pSVar42;
  Settings_TitanCustomSet___ctor(pSVar42,(MethodInfo *)0x0);
  if (pSVar42 != (Settings_TitanCustomSet_o *)0x0) {
    pSVar6 = (pSVar42->fields).Head;
    list = (MethodInfo_24E7B40 **)0x0;
    if (pSVar6 != (Settings_IntSetting_o *)0x0) {
      Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pSVar6,iVar33,MethodInfo_Void_set_Value);
      __this_00 = (pSVar42->fields).Hair;
      if (*(int *)(TypeInfo_BasicTitanSetup + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      list = *(MethodInfo_24E7B40 ***)(*(long *)(TypeInfo_BasicTitanSetup + 0xb8) + 0x28);
      if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar44 = MethodInfo_String_GetRandomItem_String;
      pIVar39 = MiscExtensions__GetRandomItem_object_
                          ((System_Collections_Generic_List_T__o *)list,(MethodInfo_2583990 *)MethodInfo_String_GetRandomItem_String);
      if (__this_00 != (Settings_StringSetting_o *)0x0) {
        bVar45 = 0xa8;
        Settings_TypedSetting_object___set_Value((Settings_TypedSetting_T__o *)__this_00,pIVar39,MethodInfo_Void_set_Value)
        ;
        pSVar7 = (pSVar42->fields).HairColor;
        list = *(MethodInfo_24E7B40 ***)(*(long *)(TypeInfo_BasicTitanSetup + 0xb8) + 0x38);
        pSVar44 = MethodInfo_Color255_GetRandomItem_Color255;
        pIVar39 = MiscExtensions__GetRandomItem_object_
                            ((System_Collections_Generic_List_T__o *)list,(MethodInfo_2583990 *)MethodInfo_Color255_GetRandomItem_Color255);
        if (pSVar7 != (Settings_ColorSetting_o *)0x0) {
          Settings_TypedSetting_object___set_Value((Settings_TypedSetting_T__o *)pSVar7,pIVar39,MethodInfo_Void_set_Value);
          pSVar6 = (pSVar42->fields).Eye;
          list = *(MethodInfo_24E7B40 ***)(*(long *)(TypeInfo_BasicTitanSetup + 0xb8) + 0x30);
          pSVar44 = MethodInfo_Int32_GetRandomItem_Int32;
          iVar33 = MiscExtensions__GetRandomItem_int_
                             ((System_Collections_Generic_List_T__o *)list,(MethodInfo_2583420 *)MethodInfo_Int32_GetRandomItem_Int32)
          ;
          if (pSVar6 != (Settings_IntSetting_o *)0x0) {
            Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pSVar6,iVar33,MethodInfo_Void_set_Value);
            uVar62 = UnityEngine_Random__Range_4df2410(0xa0,0x100,(MethodInfo *)0x0);
            pSVar7 = (pSVar42->fields).SkinColor;
            pSVar42 = (Settings_TitanCustomSet_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
            pSVar44 = (Settings_TitanCustomSet_o *)(ulong)uVar62;
            cVar51 = -1;
            list = (MethodInfo_24E7B40 **)pSVar42;
            Utility_Color255___ctor((Utility_Color255_o *)pSVar42,uVar62,uVar62,uVar62,0xff,(MethodInfo *)0x0)
            ;
            bVar45 = (byte)uVar62;
            if (pSVar7 != (Settings_ColorSetting_o *)0x0) {
              Settings_TypedSetting_object___set_Value
                        ((Settings_TypedSetting_T__o *)pSVar7,(Il2CppObject *)pSVar42,MethodInfo_Void_set_Value);
              return;
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adff3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_BoxCollider_GetComponent_BoxCollider);
    list = &MethodInfo_CapsuleCollider_GetComponent_CapsuleCollider;
    il2cpp_runtime_helper_023445d0();
    g_data_057adff3 = '\x01';
  }
  if (pSVar44 != (Settings_TitanCustomSet_o *)0x0) {
    if (bVar45 == 0) {
      pSVar42 = (Settings_TitanCustomSet_o *)
                UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pSVar44,MethodInfo_BoxCollider_GetComponent_BoxCollider);
      list = (MethodInfo_24E7B40 **)pSVar44;
      if (((__this_14 == (Settings_TitanCustomSet_o *)0x0) ||
          (list = (MethodInfo_24E7B40 **)__this_14,
          __this_13 = (UnityEngine_Component_o *)
                      UnityEngine_Component__GetComponent_object_
                                ((UnityEngine_Component_o *)__this_14,MethodInfo_BoxCollider_GetComponent_BoxCollider),
          pSVar42 == (Settings_TitanCustomSet_o *)0x0)) ||
         (list = (MethodInfo_24E7B40 **)pSVar42,
         UVar54 = UnityEngine_BoxCollider__get_center((UnityEngine_BoxCollider_o *)pSVar42,(MethodInfo *)0x0),
         __this_13 == (UnityEngine_Component_o *)0x0)) goto label_04320752;
      UnityEngine_BoxCollider__set_center((UnityEngine_BoxCollider_o *)__this_13,UVar54,(MethodInfo *)0x0);
      UVar54 = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)pSVar42,(MethodInfo *)0x0);
      UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)__this_13,UVar54,(MethodInfo *)0x0);
    }
    else {
      pSVar42 = (Settings_TitanCustomSet_o *)
                UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pSVar44,MethodInfo_CapsuleCollider_GetComponent_CapsuleCollider);
      list = (MethodInfo_24E7B40 **)pSVar44;
      if (((__this_14 == (Settings_TitanCustomSet_o *)0x0) ||
          (list = (MethodInfo_24E7B40 **)__this_14,
          __this_13 = (UnityEngine_Component_o *)
                      UnityEngine_Component__GetComponent_object_
                                ((UnityEngine_Component_o *)__this_14,MethodInfo_CapsuleCollider_GetComponent_CapsuleCollider),
          pSVar42 == (Settings_TitanCustomSet_o *)0x0)) ||
         (list = (MethodInfo_24E7B40 **)pSVar42,
         UVar54 = UnityEngine_CapsuleCollider__get_center
                            ((UnityEngine_CapsuleCollider_o *)pSVar42,(MethodInfo *)0x0),
         __this_13 == (UnityEngine_Component_o *)0x0)) goto label_04320752;
      UnityEngine_CapsuleCollider__set_center
                ((UnityEngine_CapsuleCollider_o *)__this_13,UVar54,(MethodInfo *)0x0);
      fVar52 = UnityEngine_CapsuleCollider__get_radius
                         ((UnityEngine_CapsuleCollider_o *)pSVar42,(MethodInfo *)0x0);
      UnityEngine_CapsuleCollider__set_radius
                ((UnityEngine_CapsuleCollider_o *)__this_13,fVar52,(MethodInfo *)0x0);
      fVar52 = UnityEngine_CapsuleCollider__get_height
                         ((UnityEngine_CapsuleCollider_o *)pSVar42,(MethodInfo *)0x0);
      UnityEngine_CapsuleCollider__set_height
                ((UnityEngine_CapsuleCollider_o *)__this_13,fVar52,(MethodInfo *)0x0);
    }
    if (cVar51 == '\0') {
      return;
    }
    pUVar43 = UnityEngine_Component__get_transform(__this_13,(MethodInfo *)0x0);
    list = (MethodInfo_24E7B40 **)pSVar42;
    pSVar44 = (Settings_TitanCustomSet_o *)
              UnityEngine_Component__get_transform((UnityEngine_Component_o *)pSVar42,(MethodInfo *)0x0);
    if ((pSVar44 != (Settings_TitanCustomSet_o *)0x0) &&
       (UVar54 = UnityEngine_Transform__get_localPosition
                           ((UnityEngine_Transform_o *)pSVar44,(MethodInfo *)0x0),
       list = (MethodInfo_24E7B40 **)pSVar44, pUVar43 != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__set_localPosition(pUVar43,UVar54,(MethodInfo *)0x0);
      pUVar43 = UnityEngine_Component__get_transform(__this_13,(MethodInfo *)0x0);
      list = (MethodInfo_24E7B40 **)pSVar42;
      pSVar44 = (Settings_TitanCustomSet_o *)
                UnityEngine_Component__get_transform((UnityEngine_Component_o *)pSVar42,(MethodInfo *)0x0);
      if ((pSVar44 != (Settings_TitanCustomSet_o *)0x0) &&
         (value = UnityEngine_Transform__get_localRotation
                            ((UnityEngine_Transform_o *)pSVar44,(MethodInfo *)0x0),
         list = (MethodInfo_24E7B40 **)pSVar44, pUVar43 != (UnityEngine_Transform_o *)0x0)) {
        UnityEngine_Transform__set_localRotation(pUVar43,value,(MethodInfo *)0x0);
        pUVar43 = UnityEngine_Component__get_transform(__this_13,(MethodInfo *)0x0);
        pSVar44 = (Settings_TitanCustomSet_o *)
                  UnityEngine_Component__get_transform((UnityEngine_Component_o *)pSVar42,(MethodInfo *)0x0);
        list = (MethodInfo_24E7B40 **)pSVar42;
        if ((pSVar44 != (Settings_TitanCustomSet_o *)0x0) &&
           (UVar54 = UnityEngine_Transform__get_localScale
                               ((UnityEngine_Transform_o *)pSVar44,(MethodInfo *)0x0),
           list = (MethodInfo_24E7B40 **)pSVar44, pUVar43 != (UnityEngine_Transform_o *)0x0)) {
          UnityEngine_Transform__set_localScale(pUVar43,UVar54,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
label_04320752:
  il2cpp_runtime_helper_022b2c90();
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)list,(MethodInfo *)0x0);
  return;
}


// Characters.BasicTitanSetup$$GetRandomBodyHeadCombo
// il2cpp: System_Int32_array* Characters_BasicTitanSetup__GetRandomBodyHeadCombo (SimpleJSONFixed_JSONNode_o* node, const MethodInfo* method);
// 0x431fd40

System_Int32_array *
Characters_BasicTitanSetup__GetRandomBodyHeadCombo(SimpleJSONFixed_JSONNode_o *node,MethodInfo *method)

{
  int32_t *piVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  System_Object_array *pSVar2;
  System_Single_array *pSVar3;
  Settings_TypedSetting_T__o *pSVar4;
  Settings_TypedSetting_int__o *__this_00;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_01;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_02;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_03;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_04;
  bool_conflict bVar5;
  int32_t iVar6;
  uint uVar7;
  System_Int32_array *pSVar8;
  Il2CppObject *pIVar9;
  System_Collections_Generic_List_object__o *__this_05;
  System_Collections_Generic_List_float__o *__this_06;
  long *plVar10;
  System_Int32_array *pSVar11;
  Il2CppObject *pIVar12;
  System_Int32_array *__this_07;
  UnityEngine_Component_o *__this_08;
  System_Int32_array *extraout_RAX;
  System_Int32_array *extraout_RAX_00;
  UnityEngine_Transform_o *pUVar13;
  System_Int32_array *extraout_RAX_01;
  System_Int32_array *extraout_RAX_02;
  byte bVar14;
  int iVar15;
  Il2CppClass *in_RCX;
  Il2CppClass *pIVar16;
  long lVar17;
  System_Int32_array *__this_09;
  MethodInfo_24E7B40 **list;
  char cVar18;
  undefined8 in_R8;
  float fVar19;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o SVar20;
  UnityEngine_Vector3_o UVar21;
  UnityEngine_Quaternion_o value;
  undefined8 in_stack_ffffffffffffff28;
  System_Int32_array *in_stack_ffffffffffffff30;
  Il2CppMethodPointer pIVar22;
  Il2CppMethodPointer pIVar23;
  InvokerMethod pIVar24;
  char *pcVar25;
  Il2CppClass *pIVar26;
  Il2CppType *pIVar27;
  SimpleJSONFixed_JSONNode_o *pSVar28;
  Il2CppMethodPointer local_78;
  Il2CppMethodPointer pIStack_70;
  InvokerMethod local_68;
  char *pcStack_60;
  Il2CppClass *local_58;
  Il2CppType *pIStack_50;
  SimpleJSONFixed_JSONNode_o *local_48;
  
  if (g_data_057adff0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterData);
    il2cpp_runtime_helper_023445d0(&MethodInfo_JSONNode_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_int);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Single);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_float);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    il2cpp_runtime_helper_023445d0(&"Chance");
    il2cpp_runtime_helper_023445d0(&"Body");
    il2cpp_runtime_helper_023445d0(&"Titan");
    il2cpp_runtime_helper_023445d0(&"Head");
    il2cpp_runtime_helper_023445d0(&"Default");
    il2cpp_runtime_helper_023445d0(&"BodyHeadCombos");
    g_data_057adff0 = '\x01';
  }
  pSVar28 = (SimpleJSONFixed_JSONNode_o *)0x0;
  pIVar26 = (Il2CppClass *)0x0;
  pIVar27 = (Il2CppType *)0x0;
  pIVar24 = (InvokerMethod)0x0;
  pcVar25 = (char *)0x0;
  pIVar22 = (Il2CppMethodPointer)0x0;
  pIVar23 = (Il2CppMethodPointer)0x0;
  pSVar8 = (System_Int32_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_int);
  cVar18 = (char)in_R8;
  lVar17 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
  pIVar16 = in_RCX;
  pIVar12 = (Il2CppObject *)node;
  if (((lVar17 == 0) || (lVar17 = *(long *)(lVar17 + 0x50), lVar17 == 0)) ||
     (lVar17 = *(long *)(lVar17 + 0xa0), lVar17 == 0)) goto label_043202d7;
  if (*(char *)(lVar17 + 0x11) != '\0') {
    if (pSVar8 == (System_Int32_array *)0x0) goto label_043202d7;
    iVar15 = (int)pSVar8->max_length;
    if (iVar15 != 0) {
      pSVar8->m_Items[0] = 0;
      iVar6 = 0;
      if (iVar15 != 1) goto label_043202bf;
    }
    goto label_043202dc;
  }
  if (*(int *)&(TypeInfo_JSONNode->_2).field_0x1c == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = SimpleJSONFixed_JSONNode__op_Equality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
label_0431ff88:
    cVar18 = (char)in_R8;
    pIVar16 = in_RCX;
    pIVar12 = (Il2CppObject *)0x0;
    if (node == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_043202d7;
    pIVar12 = (Il2CppObject *)
              (*(node->klass->vtable)._7_get_Item.methodPtr)
                        (node,"BodyHeadCombos",(node->klass->vtable)._7_get_Item.method);
    __this_05 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_object);
    System_Collections_Generic_List_object____ctor(__this_05,MethodInfo_List_1_System_Object);
    __this_06 = (System_Collections_Generic_List_float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_float);
    System_Collections_Generic_List_float____ctor(__this_06,MethodInfo_List_1_System_Single);
    cVar18 = (char)in_R8;
    pIVar16 = in_RCX;
    in_stack_ffffffffffffff30 = pSVar8;
    if (pIVar12 == (Il2CppObject *)0x0) goto label_043202d7;
    (*pIVar12->klass->vtable[0x20].methodPtr)(&local_78,pIVar12,pIVar12->klass->vtable[0x20].method);
    __this_01.fields.m_Object.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar8;
    __this_01.fields._0_8_ = in_stack_ffffffffffffff28;
    __this_01.fields.m_Object.fields._8_8_ = local_78;
    __this_01.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIStack_70;
    __this_01.fields.m_Object.fields._current.fields.value = (Il2CppObject *)local_68;
    __this_01.fields.m_Object.fields._32_8_ = pcStack_60;
    __this_01.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)local_58;
    __this_01.fields.m_Array.fields._8_8_ = pIStack_50;
    __this_01.fields.m_Array.fields._current = local_48;
    bVar5 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext(__this_01,(MethodInfo *)&stack0xffffffffffffff38);
    cVar18 = (char)in_R8;
    bVar14 = (byte)in_RCX;
    pIVar22 = local_78;
    pIVar23 = pIStack_70;
    pIVar24 = local_68;
    pcVar25 = pcStack_60;
    pIVar26 = local_58;
    pIVar27 = pIStack_50;
    pSVar28 = local_48;
    if ((char)bVar5 == '\0') {
label_043201d9:
      pIVar16 = in_RCX;
      if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        pIVar16 = in_RCX;
      }
      node = (SimpleJSONFixed_JSONNode_o *)
             Utility_Util__GetRandomFromWeightedList(__this_05,__this_06,(MethodInfo *)0x0);
      in_stack_ffffffffffffff30 = pSVar8;
      if ((Il2CppObject *)node == (Il2CppObject *)0x0) goto label_043202d7;
      bVar14 = (TypeInfo_JSONNode->_2).naturalAligment;
      pIVar16 = (Il2CppClass *)(ulong)bVar14;
      if ((bVar14 <= (((Il2CppObject *)node)->klass->_2).naturalAligment) &&
         ((((Il2CppObject *)node)->klass->_2).typeHierarchy
          [(long)((long)&pIVar16[-1].vtable[0xfe].method + 7)] == TypeInfo_JSONNode)) {
        plVar10 = (long *)(*((Il2CppObject *)node)->klass->vtable[7].methodPtr)
                                    (node,"Body",((Il2CppObject *)node)->klass->vtable[7].method);
        pIVar12 = (Il2CppObject *)node;
        if (plVar10 == (long *)0x0) goto label_043202d7;
        pIVar16 = (Il2CppClass *)*plVar10;
        iVar6 = (*pIVar16->vtable[0x23].methodPtr)(plVar10,pIVar16->vtable[0x23].method);
        iVar15 = (int)pIVar16;
        if (pSVar8 == (System_Int32_array *)0x0) goto label_043202d7;
        if ((int)pSVar8->max_length != 0) {
          pSVar8->m_Items[0] = iVar6;
          plVar10 = (long *)(*((Il2CppObject *)node)->klass->vtable[7].methodPtr)
                                      (node,"Head",((Il2CppObject *)node)->klass->vtable[7].method);
          if (plVar10 == (long *)0x0) goto label_043202d7;
          lVar17 = *plVar10;
          iVar6 = (**(code **)(lVar17 + 0x368))(plVar10,*(undefined8 *)(lVar17 + 0x370));
          iVar15 = (int)lVar17;
          if (1 < (uint)pSVar8->max_length) {
label_043202bf:
            pSVar8->m_Items[1] = iVar6;
            return pSVar8;
          }
        }
        goto label_043202dc;
      }
      goto label_043202e1;
    }
    if (__this_05 != (System_Collections_Generic_List_object__o *)0x0) {
      do {
        __this_03.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar8;
        __this_03.fields._0_8_ = in_stack_ffffffffffffff28;
        __this_03.fields.m_Object.fields._8_8_ = pIVar22;
        __this_03.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIVar23;
        __this_03.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar24;
        __this_03.fields.m_Object.fields._32_8_ = pcVar25;
        __this_03.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pIVar26;
        __this_03.fields.m_Array.fields._8_8_ = pIVar27;
        __this_03.fields.m_Array.fields._current = pSVar28;
        SVar20 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                           (__this_03,(MethodInfo *)&stack0xffffffffffffff38);
        if (*(int *)&(TypeInfo_JSONNode->_2).field_0x1c == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pIVar12 = (Il2CppObject *)SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0(SVar20,(MethodInfo *)0x0);
        pIVar16 = MethodInfo_Void_Add;
        cVar18 = (char)in_R8;
        piVar1 = &(__this_05->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar2 = (__this_05->fields)._items;
        in_stack_ffffffffffffff30 = pSVar8;
        if (pSVar2 == (System_Object_array *)0x0) goto label_043202d7;
        uVar7 = (__this_05->fields)._size;
        if (uVar7 < (uint)pSVar2->max_length) {
          pIVar16 = (Il2CppClass *)(ulong)(uVar7 + 1);
          (__this_05->fields)._size = uVar7 + 1;
          pSVar2->m_Items[(int)uVar7] = pIVar12;
          il2cpp_runtime_helper_022b4080(pSVar2->m_Items + (int)uVar7,pIVar12);
          cVar18 = (char)in_R8;
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (__this_05,pIVar12,
                     *(MethodInfo_362C220 **)(*(long *)((long)(pIVar16->_1).byval_arg.data + 0xc0) + 0x70));
          cVar18 = (char)in_R8;
        }
        in_stack_ffffffffffffff30 = pSVar8;
        if (pIVar12 == (Il2CppObject *)0x0) goto label_043202d7;
        plVar10 = (long *)(*pIVar12->klass->vtable[7].methodPtr)
                                    (pIVar12,"Chance",pIVar12->klass->vtable[7].method);
        cVar18 = (char)in_R8;
        in_stack_ffffffffffffff30 = pSVar8;
        if (plVar10 == (long *)0x0) goto label_043202d7;
        pIVar16 = (Il2CppClass *)*plVar10;
        fVar19 = (float)(*pIVar16->vtable[0x25].methodPtr)(plVar10,pIVar16->vtable[0x25].method);
        in_RCX = MethodInfo_Void_Add;
        cVar18 = (char)in_R8;
        in_stack_ffffffffffffff30 = pSVar8;
        if (__this_06 == (System_Collections_Generic_List_float__o *)0x0) goto label_043202d7;
        piVar1 = &(__this_06->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar3 = (__this_06->fields)._items;
        pIVar16 = in_RCX;
        if (pSVar3 == (System_Single_array *)0x0) goto label_043202d7;
        uVar7 = (__this_06->fields)._size;
        if (uVar7 < (uint)pSVar3->max_length) {
          in_RCX = (Il2CppClass *)(ulong)(uVar7 + 1);
          (__this_06->fields)._size = uVar7 + 1;
          pSVar3->m_Items[(int)uVar7] = fVar19;
        }
        else {
          System_Collections_Generic_List_float___AddWithResize
                    (__this_06,fVar19,
                     *(MethodInfo_36649C0 **)(*(long *)((long)(in_RCX->_1).byval_arg.data + 0xc0) + 0x70));
        }
        __this_02.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar8;
        __this_02.fields._0_8_ = in_stack_ffffffffffffff28;
        __this_02.fields.m_Object.fields._8_8_ = pIVar22;
        __this_02.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIVar23;
        __this_02.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar24;
        __this_02.fields.m_Object.fields._32_8_ = pcVar25;
        __this_02.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pIVar26;
        __this_02.fields.m_Array.fields._8_8_ = pIVar27;
        __this_02.fields.m_Array.fields._current = pSVar28;
        bVar5 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                          (__this_02,(MethodInfo *)&stack0xffffffffffffff38);
        cVar18 = (char)in_R8;
      } while ((char)bVar5 != '\0');
      goto label_043201d9;
    }
  }
  else {
    if (*(int *)(TypeInfo_CharacterData + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    cVar18 = (char)in_R8;
    __this = *(System_Collections_Generic_Dictionary_object__object__o **)(*(long *)(TypeInfo_CharacterData + 0xb8) + 8)
    ;
    pIVar16 = in_RCX;
    pIVar12 = (Il2CppObject *)&TypeInfo_CharacterData;
    if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pIVar9 = System_Collections_Generic_Dictionary_object__object___get_Item
                         (__this,"Titan",MethodInfo_JSONNode_get_Item);
      cVar18 = (char)in_R8;
      pIVar16 = in_RCX;
      pIVar12 = (Il2CppObject *)&TypeInfo_CharacterData;
      if (pIVar9 != (Il2CppObject *)0x0) {
        in_RCX = pIVar9->klass;
        node = (SimpleJSONFixed_JSONNode_o *)
               (*in_RCX->vtable[7].methodPtr)(pIVar9,"Default",in_RCX->vtable[7].method);
        goto label_0431ff88;
      }
    }
label_043202d7:
    iVar15 = (int)pIVar16;
    il2cpp_runtime_helper_022b2c90();
    node = (SimpleJSONFixed_JSONNode_o *)pIVar12;
label_043202dc:
    bVar14 = (byte)iVar15;
    il2cpp_runtime_helper_022b2ca0();
    pSVar8 = in_stack_ffffffffffffff30;
label_043202e1:
    il2cpp_runtime_helper_022b2fd0(node);
    local_78 = pIVar22;
    pIStack_70 = pIVar23;
    local_68 = pIVar24;
    pcStack_60 = pcVar25;
    local_58 = pIVar26;
    pIStack_50 = pIVar27;
    local_48 = pSVar28;
  }
  __this_04.fields.m_Object.fields._dictionary =
       (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar8;
  __this_04.fields._0_8_ = in_stack_ffffffffffffff28;
  __this_04.fields.m_Object.fields._8_8_ = local_78;
  __this_04.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIStack_70;
  __this_04.fields.m_Object.fields._current.fields.value = (Il2CppObject *)local_68;
  __this_04.fields.m_Object.fields._32_8_ = pcStack_60;
  __this_04.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)local_58;
  __this_04.fields.m_Array.fields._8_8_ = pIStack_50;
  __this_04.fields.m_Array.fields._current = local_48;
  SVar20 = SimpleJSONFixed_JSONNode_Enumerator__get_Current(__this_04,(MethodInfo *)&stack0xffffffffffffff38);
  iVar6 = (int32_t)SVar20.fields.value;
  if (*(int *)&(TypeInfo_JSONNode->_2).field_0x1c == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0(SVar20,(MethodInfo *)0x0);
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adff1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BasicTitanSetup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Color255_GetRandomItem_Color255);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_GetRandomItem_Int32);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_GetRandomItem_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanCustomSet);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    g_data_057adff1 = '\x01';
  }
  pSVar11 = (System_Int32_array *)il2cpp_runtime_helper_023052d0(TypeInfo_TitanCustomSet);
  pSVar8 = (System_Int32_array *)0x0;
  list = (MethodInfo_24E7B40 **)pSVar11;
  Settings_TitanCustomSet___ctor((Settings_TitanCustomSet_o *)pSVar11,(MethodInfo *)0x0);
  if (pSVar11 != (System_Int32_array *)0x0) {
    list = (MethodInfo_24E7B40 **)0x0;
    if (*(Settings_TypedSetting_int__o **)(pSVar11->m_Items + 6) != (Settings_TypedSetting_int__o *)0x0) {
      Settings_TypedSetting_int___set_Value
                (*(Settings_TypedSetting_int__o **)(pSVar11->m_Items + 6),iVar6,MethodInfo_Void_set_Value);
      pSVar4 = *(Settings_TypedSetting_T__o **)(pSVar11->m_Items + 0xc);
      if (*(int *)(TypeInfo_BasicTitanSetup + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      list = *(MethodInfo_24E7B40 ***)(*(long *)(TypeInfo_BasicTitanSetup + 0xb8) + 0x28);
      if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar8 = MethodInfo_String_GetRandomItem_String;
      pIVar12 = MiscExtensions__GetRandomItem_object_
                          ((System_Collections_Generic_List_T__o *)list,(MethodInfo_2583990 *)MethodInfo_String_GetRandomItem_String);
      if (pSVar4 != (Settings_TypedSetting_T__o *)0x0) {
        bVar14 = 0xa8;
        Settings_TypedSetting_object___set_Value(pSVar4,pIVar12,MethodInfo_Void_set_Value);
        pSVar4 = *(Settings_TypedSetting_T__o **)(pSVar11->m_Items + 0x10);
        list = *(MethodInfo_24E7B40 ***)(*(long *)(TypeInfo_BasicTitanSetup + 0xb8) + 0x38);
        pSVar8 = MethodInfo_Color255_GetRandomItem_Color255;
        pIVar12 = MiscExtensions__GetRandomItem_object_
                            ((System_Collections_Generic_List_T__o *)list,(MethodInfo_2583990 *)MethodInfo_Color255_GetRandomItem_Color255);
        if (pSVar4 != (Settings_TypedSetting_T__o *)0x0) {
          Settings_TypedSetting_object___set_Value(pSVar4,pIVar12,MethodInfo_Void_set_Value);
          __this_00 = *(Settings_TypedSetting_int__o **)(pSVar11->m_Items + 10);
          list = *(MethodInfo_24E7B40 ***)(*(long *)(TypeInfo_BasicTitanSetup + 0xb8) + 0x30);
          pSVar8 = MethodInfo_Int32_GetRandomItem_Int32;
          iVar6 = MiscExtensions__GetRandomItem_int_
                            ((System_Collections_Generic_List_T__o *)list,(MethodInfo_2583420 *)MethodInfo_Int32_GetRandomItem_Int32);
          if (__this_00 != (Settings_TypedSetting_int__o *)0x0) {
            Settings_TypedSetting_int___set_Value(__this_00,iVar6,MethodInfo_Void_set_Value);
            uVar7 = UnityEngine_Random__Range_4df2410(0xa0,0x100,(MethodInfo *)0x0);
            pSVar4 = *(Settings_TypedSetting_T__o **)(pSVar11->m_Items + 0xe);
            __this_07 = (System_Int32_array *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
            pSVar8 = (System_Int32_array *)(ulong)uVar7;
            cVar18 = -1;
            list = (MethodInfo_24E7B40 **)__this_07;
            Utility_Color255___ctor((Utility_Color255_o *)__this_07,uVar7,uVar7,uVar7,0xff,(MethodInfo *)0x0);
            bVar14 = (byte)uVar7;
            if (pSVar4 != (Settings_TypedSetting_T__o *)0x0) {
              Settings_TypedSetting_object___set_Value(pSVar4,(Il2CppObject *)__this_07,MethodInfo_Void_set_Value);
              return pSVar11;
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adff3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_BoxCollider_GetComponent_BoxCollider);
    list = &MethodInfo_CapsuleCollider_GetComponent_CapsuleCollider;
    il2cpp_runtime_helper_023445d0();
    g_data_057adff3 = '\x01';
  }
  if (pSVar8 != (System_Int32_array *)0x0) {
    if (bVar14 == 0) {
      pSVar11 = (System_Int32_array *)
                UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pSVar8,MethodInfo_BoxCollider_GetComponent_BoxCollider);
      list = (MethodInfo_24E7B40 **)pSVar8;
      if (((__this_09 == (System_Int32_array *)0x0) ||
          (list = (MethodInfo_24E7B40 **)__this_09,
          __this_08 = (UnityEngine_Component_o *)
                      UnityEngine_Component__GetComponent_object_
                                ((UnityEngine_Component_o *)__this_09,MethodInfo_BoxCollider_GetComponent_BoxCollider),
          pSVar11 == (System_Int32_array *)0x0)) ||
         (list = (MethodInfo_24E7B40 **)pSVar11,
         UVar21 = UnityEngine_BoxCollider__get_center((UnityEngine_BoxCollider_o *)pSVar11,(MethodInfo *)0x0),
         __this_08 == (UnityEngine_Component_o *)0x0)) goto label_04320752;
      UnityEngine_BoxCollider__set_center((UnityEngine_BoxCollider_o *)__this_08,UVar21,(MethodInfo *)0x0);
      UVar21 = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)pSVar11,(MethodInfo *)0x0);
      UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)__this_08,UVar21,(MethodInfo *)0x0);
      pSVar8 = extraout_RAX_00;
    }
    else {
      pSVar11 = (System_Int32_array *)
                UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pSVar8,MethodInfo_CapsuleCollider_GetComponent_CapsuleCollider);
      list = (MethodInfo_24E7B40 **)pSVar8;
      if (((__this_09 == (System_Int32_array *)0x0) ||
          (list = (MethodInfo_24E7B40 **)__this_09,
          __this_08 = (UnityEngine_Component_o *)
                      UnityEngine_Component__GetComponent_object_
                                ((UnityEngine_Component_o *)__this_09,MethodInfo_CapsuleCollider_GetComponent_CapsuleCollider),
          pSVar11 == (System_Int32_array *)0x0)) ||
         (list = (MethodInfo_24E7B40 **)pSVar11,
         UVar21 = UnityEngine_CapsuleCollider__get_center
                            ((UnityEngine_CapsuleCollider_o *)pSVar11,(MethodInfo *)0x0),
         __this_08 == (UnityEngine_Component_o *)0x0)) goto label_04320752;
      UnityEngine_CapsuleCollider__set_center
                ((UnityEngine_CapsuleCollider_o *)__this_08,UVar21,(MethodInfo *)0x0);
      fVar19 = UnityEngine_CapsuleCollider__get_radius
                         ((UnityEngine_CapsuleCollider_o *)pSVar11,(MethodInfo *)0x0);
      UnityEngine_CapsuleCollider__set_radius
                ((UnityEngine_CapsuleCollider_o *)__this_08,fVar19,(MethodInfo *)0x0);
      fVar19 = UnityEngine_CapsuleCollider__get_height
                         ((UnityEngine_CapsuleCollider_o *)pSVar11,(MethodInfo *)0x0);
      UnityEngine_CapsuleCollider__set_height
                ((UnityEngine_CapsuleCollider_o *)__this_08,fVar19,(MethodInfo *)0x0);
      pSVar8 = extraout_RAX;
    }
    if (cVar18 == '\0') {
      return pSVar8;
    }
    pUVar13 = UnityEngine_Component__get_transform(__this_08,(MethodInfo *)0x0);
    list = (MethodInfo_24E7B40 **)pSVar11;
    pSVar8 = (System_Int32_array *)
             UnityEngine_Component__get_transform((UnityEngine_Component_o *)pSVar11,(MethodInfo *)0x0);
    if ((pSVar8 != (System_Int32_array *)0x0) &&
       (UVar21 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)pSVar8,(MethodInfo *)0x0)
       , list = (MethodInfo_24E7B40 **)pSVar8, pUVar13 != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__set_localPosition(pUVar13,UVar21,(MethodInfo *)0x0);
      pUVar13 = UnityEngine_Component__get_transform(__this_08,(MethodInfo *)0x0);
      list = (MethodInfo_24E7B40 **)pSVar11;
      pSVar8 = (System_Int32_array *)
               UnityEngine_Component__get_transform((UnityEngine_Component_o *)pSVar11,(MethodInfo *)0x0);
      if ((pSVar8 != (System_Int32_array *)0x0) &&
         (value = UnityEngine_Transform__get_localRotation
                            ((UnityEngine_Transform_o *)pSVar8,(MethodInfo *)0x0),
         list = (MethodInfo_24E7B40 **)pSVar8, pUVar13 != (UnityEngine_Transform_o *)0x0)) {
        UnityEngine_Transform__set_localRotation(pUVar13,value,(MethodInfo *)0x0);
        pUVar13 = UnityEngine_Component__get_transform(__this_08,(MethodInfo *)0x0);
        pSVar8 = (System_Int32_array *)
                 UnityEngine_Component__get_transform((UnityEngine_Component_o *)pSVar11,(MethodInfo *)0x0);
        list = (MethodInfo_24E7B40 **)pSVar11;
        if ((pSVar8 != (System_Int32_array *)0x0) &&
           (UVar21 = UnityEngine_Transform__get_localScale
                               ((UnityEngine_Transform_o *)pSVar8,(MethodInfo *)0x0),
           list = (MethodInfo_24E7B40 **)pSVar8, pUVar13 != (UnityEngine_Transform_o *)0x0)) {
          UnityEngine_Transform__set_localScale(pUVar13,UVar21,(MethodInfo *)0x0);
          return extraout_RAX_01;
        }
      }
    }
  }
label_04320752:
  il2cpp_runtime_helper_022b2c90();
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)list,(MethodInfo *)0x0);
  return extraout_RAX_02;
}


// Characters.BasicTitanSetup$$CreateRandomSet
// il2cpp: Settings_TitanCustomSet_o* Characters_BasicTitanSetup__CreateRandomSet (Characters_BasicTitanSetup_o* __this, int32_t headPrefab, const MethodInfo* method);
// 0x4320330

Settings_TitanCustomSet_o *
Characters_BasicTitanSetup__CreateRandomSet
          (Characters_BasicTitanSetup_o *__this,int32_t headPrefab,MethodInfo *method)

{
  Settings_IntSetting_o *pSVar1;
  Settings_StringSetting_o *__this_00;
  Settings_ColorSetting_o *pSVar2;
  int32_t value;
  uint r;
  Settings_TitanCustomSet_o *pSVar3;
  Il2CppObject *pIVar4;
  Settings_TitanCustomSet_o *__this_01;
  UnityEngine_Component_o *__this_02;
  Settings_TitanCustomSet_o *extraout_RAX;
  Settings_TitanCustomSet_o *extraout_RAX_00;
  UnityEngine_Transform_o *pUVar5;
  Settings_TitanCustomSet_o *pSVar6;
  Settings_TitanCustomSet_o *extraout_RAX_01;
  Settings_TitanCustomSet_o *extraout_RAX_02;
  char in_CL;
  Settings_TitanCustomSet_o *__this_03;
  Settings_TitanCustomSet_o *pSVar7;
  char in_R8B;
  float fVar8;
  UnityEngine_Vector3_o UVar9;
  UnityEngine_Quaternion_o value_00;
  
  if (g_data_057adff1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BasicTitanSetup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Color255_GetRandomItem_Color255);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_GetRandomItem_Int32);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_GetRandomItem_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanCustomSet);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    g_data_057adff1 = '\x01';
  }
  pSVar3 = (Settings_TitanCustomSet_o *)il2cpp_runtime_helper_023052d0(TypeInfo_TitanCustomSet);
  pSVar6 = (Settings_TitanCustomSet_o *)0x0;
  pSVar7 = pSVar3;
  Settings_TitanCustomSet___ctor(pSVar3,(MethodInfo *)0x0);
  if (pSVar3 != (Settings_TitanCustomSet_o *)0x0) {
    pSVar1 = (pSVar3->fields).Head;
    pSVar7 = (Settings_TitanCustomSet_o *)0x0;
    if (pSVar1 != (Settings_IntSetting_o *)0x0) {
      Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pSVar1,headPrefab,MethodInfo_Void_set_Value);
      __this_00 = (pSVar3->fields).Hair;
      if (*(int *)(TypeInfo_BasicTitanSetup + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar7 = *(Settings_TitanCustomSet_o **)(*(long *)(TypeInfo_BasicTitanSetup + 0xb8) + 0x28);
      if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar6 = MethodInfo_String_GetRandomItem_String;
      pIVar4 = MiscExtensions__GetRandomItem_object_
                         ((System_Collections_Generic_List_T__o *)pSVar7,(MethodInfo_2583990 *)MethodInfo_String_GetRandomItem_String);
      if (__this_00 != (Settings_StringSetting_o *)0x0) {
        in_CL = -0x58;
        Settings_TypedSetting_object___set_Value((Settings_TypedSetting_T__o *)__this_00,pIVar4,MethodInfo_Void_set_Value);
        pSVar2 = (pSVar3->fields).HairColor;
        pSVar7 = *(Settings_TitanCustomSet_o **)(*(long *)(TypeInfo_BasicTitanSetup + 0xb8) + 0x38);
        pSVar6 = MethodInfo_Color255_GetRandomItem_Color255;
        pIVar4 = MiscExtensions__GetRandomItem_object_
                           ((System_Collections_Generic_List_T__o *)pSVar7,(MethodInfo_2583990 *)MethodInfo_Color255_GetRandomItem_Color255)
        ;
        if (pSVar2 != (Settings_ColorSetting_o *)0x0) {
          Settings_TypedSetting_object___set_Value((Settings_TypedSetting_T__o *)pSVar2,pIVar4,MethodInfo_Void_set_Value);
          pSVar1 = (pSVar3->fields).Eye;
          pSVar7 = *(Settings_TitanCustomSet_o **)(*(long *)(TypeInfo_BasicTitanSetup + 0xb8) + 0x30);
          pSVar6 = MethodInfo_Int32_GetRandomItem_Int32;
          value = MiscExtensions__GetRandomItem_int_
                            ((System_Collections_Generic_List_T__o *)pSVar7,(MethodInfo_2583420 *)MethodInfo_Int32_GetRandomItem_Int32
                            );
          if (pSVar1 != (Settings_IntSetting_o *)0x0) {
            Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pSVar1,value,MethodInfo_Void_set_Value);
            r = UnityEngine_Random__Range_4df2410(0xa0,0x100,(MethodInfo *)0x0);
            pSVar2 = (pSVar3->fields).SkinColor;
            __this_01 = (Settings_TitanCustomSet_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
            pSVar6 = (Settings_TitanCustomSet_o *)(ulong)r;
            in_R8B = -1;
            pSVar7 = __this_01;
            Utility_Color255___ctor((Utility_Color255_o *)__this_01,r,r,r,0xff,(MethodInfo *)0x0);
            in_CL = (char)r;
            if (pSVar2 != (Settings_ColorSetting_o *)0x0) {
              Settings_TypedSetting_object___set_Value
                        ((Settings_TypedSetting_T__o *)pSVar2,(Il2CppObject *)__this_01,MethodInfo_Void_set_Value);
              return pSVar3;
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adff3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_BoxCollider_GetComponent_BoxCollider);
    pSVar7 = (Settings_TitanCustomSet_o *)&MethodInfo_CapsuleCollider_GetComponent_CapsuleCollider;
    il2cpp_runtime_helper_023445d0();
    g_data_057adff3 = '\x01';
  }
  if (pSVar6 != (Settings_TitanCustomSet_o *)0x0) {
    if (in_CL == '\0') {
      pSVar3 = (Settings_TitanCustomSet_o *)
               UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pSVar6,MethodInfo_BoxCollider_GetComponent_BoxCollider);
      pSVar7 = pSVar6;
      if (((__this_03 == (Settings_TitanCustomSet_o *)0x0) ||
          (pSVar7 = __this_03,
          __this_02 = (UnityEngine_Component_o *)
                      UnityEngine_Component__GetComponent_object_
                                ((UnityEngine_Component_o *)__this_03,MethodInfo_BoxCollider_GetComponent_BoxCollider),
          pSVar3 == (Settings_TitanCustomSet_o *)0x0)) ||
         (pSVar7 = pSVar3,
         UVar9 = UnityEngine_BoxCollider__get_center((UnityEngine_BoxCollider_o *)pSVar3,(MethodInfo *)0x0),
         __this_02 == (UnityEngine_Component_o *)0x0)) goto label_04320752;
      UnityEngine_BoxCollider__set_center((UnityEngine_BoxCollider_o *)__this_02,UVar9,(MethodInfo *)0x0);
      UVar9 = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)pSVar3,(MethodInfo *)0x0);
      UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)__this_02,UVar9,(MethodInfo *)0x0);
      pSVar7 = extraout_RAX_00;
    }
    else {
      pSVar3 = (Settings_TitanCustomSet_o *)
               UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pSVar6,MethodInfo_CapsuleCollider_GetComponent_CapsuleCollider);
      pSVar7 = pSVar6;
      if (((__this_03 == (Settings_TitanCustomSet_o *)0x0) ||
          (pSVar7 = __this_03,
          __this_02 = (UnityEngine_Component_o *)
                      UnityEngine_Component__GetComponent_object_
                                ((UnityEngine_Component_o *)__this_03,MethodInfo_CapsuleCollider_GetComponent_CapsuleCollider),
          pSVar3 == (Settings_TitanCustomSet_o *)0x0)) ||
         (pSVar7 = pSVar3,
         UVar9 = UnityEngine_CapsuleCollider__get_center
                           ((UnityEngine_CapsuleCollider_o *)pSVar3,(MethodInfo *)0x0),
         __this_02 == (UnityEngine_Component_o *)0x0)) goto label_04320752;
      UnityEngine_CapsuleCollider__set_center
                ((UnityEngine_CapsuleCollider_o *)__this_02,UVar9,(MethodInfo *)0x0);
      fVar8 = UnityEngine_CapsuleCollider__get_radius
                        ((UnityEngine_CapsuleCollider_o *)pSVar3,(MethodInfo *)0x0);
      UnityEngine_CapsuleCollider__set_radius
                ((UnityEngine_CapsuleCollider_o *)__this_02,fVar8,(MethodInfo *)0x0);
      fVar8 = UnityEngine_CapsuleCollider__get_height
                        ((UnityEngine_CapsuleCollider_o *)pSVar3,(MethodInfo *)0x0);
      UnityEngine_CapsuleCollider__set_height
                ((UnityEngine_CapsuleCollider_o *)__this_02,fVar8,(MethodInfo *)0x0);
      pSVar7 = extraout_RAX;
    }
    if (in_R8B == '\0') {
      return pSVar7;
    }
    pUVar5 = UnityEngine_Component__get_transform(__this_02,(MethodInfo *)0x0);
    pSVar7 = pSVar3;
    pSVar6 = (Settings_TitanCustomSet_o *)
             UnityEngine_Component__get_transform((UnityEngine_Component_o *)pSVar3,(MethodInfo *)0x0);
    if ((pSVar6 != (Settings_TitanCustomSet_o *)0x0) &&
       (UVar9 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)pSVar6,(MethodInfo *)0x0),
       pSVar7 = pSVar6, pUVar5 != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__set_localPosition(pUVar5,UVar9,(MethodInfo *)0x0);
      pUVar5 = UnityEngine_Component__get_transform(__this_02,(MethodInfo *)0x0);
      pSVar7 = pSVar3;
      pSVar6 = (Settings_TitanCustomSet_o *)
               UnityEngine_Component__get_transform((UnityEngine_Component_o *)pSVar3,(MethodInfo *)0x0);
      if ((pSVar6 != (Settings_TitanCustomSet_o *)0x0) &&
         (value_00 = UnityEngine_Transform__get_localRotation
                               ((UnityEngine_Transform_o *)pSVar6,(MethodInfo *)0x0), pSVar7 = pSVar6,
         pUVar5 != (UnityEngine_Transform_o *)0x0)) {
        UnityEngine_Transform__set_localRotation(pUVar5,value_00,(MethodInfo *)0x0);
        pUVar5 = UnityEngine_Component__get_transform(__this_02,(MethodInfo *)0x0);
        pSVar6 = (Settings_TitanCustomSet_o *)
                 UnityEngine_Component__get_transform((UnityEngine_Component_o *)pSVar3,(MethodInfo *)0x0);
        pSVar7 = pSVar3;
        if ((pSVar6 != (Settings_TitanCustomSet_o *)0x0) &&
           (UVar9 = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)pSVar6,(MethodInfo *)0x0)
           , pSVar7 = pSVar6, pUVar5 != (UnityEngine_Transform_o *)0x0)) {
          UnityEngine_Transform__set_localScale(pUVar5,UVar9,(MethodInfo *)0x0);
          return extraout_RAX_01;
        }
      }
    }
  }
label_04320752:
  il2cpp_runtime_helper_022b2c90();
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)pSVar7,(MethodInfo *)0x0);
  return extraout_RAX_02;
}


// Characters.BasicTitanSetup$$Load
// il2cpp: void Characters_BasicTitanSetup__Load (Characters_BasicTitanSetup_o* __this, Settings_TitanCustomSet_o* set, const MethodInfo* method);
// 0x4313010

void Characters_BasicTitanSetup__Load
               (Characters_BasicTitanSetup_o *__this,Settings_TitanCustomSet_o *set,MethodInfo *method)

{
  Settings_IntSetting_o *pSVar1;
  Settings_ColorSetting_o *pSVar2;
  Utility_Color255_o *pUVar3;
  Settings_StringSetting_o *pSVar4;
  System_Collections_Generic_Dictionary_object__object__o *pSVar5;
  undefined1 auVar6 [16];
  int index;
  uint uVar7;
  bool_conflict bVar8;
  UnityEngine_Transform_o *pUVar9;
  Characters_BasicTitanSetup_o *pCVar10;
  UnityEngine_Renderer_o *pUVar11;
  UnityEngine_Material_o *pUVar12;
  UnityEngine_Transform_o *pUVar13;
  UnityEngine_Object_o *obj;
  System_String_o *pSVar14;
  UnityEngine_GameObject_o *pUVar15;
  System_Object_array *pSVar16;
  System_String_o *pSVar17;
  Characters_BaseTitan_o *__this_00;
  UnityEngine_Transform_o *pUVar18;
  UnityEngine_Renderer_o *__this_01;
  UnityEngine_SkinnedMeshRenderer_o *__this_02;
  UnityEngine_SkinnedMeshRenderer_o *__this_03;
  UnityEngine_Mesh_o *pUVar19;
  UnityEngine_BoxCollider_o *__this_04;
  UnityEngine_MeshFilter_o *__this_05;
  UnityEngine_MeshFilter_o *__this_06;
  Characters_BasicTitanComponentCache_o *__this_07;
  uint uVar20;
  Characters_BasicTitanSetup_o *pCVar21;
  MethodInfo *in_R9;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  undefined1 auVar22 [16];
  UnityEngine_Vector3_o UVar23;
  UnityEngine_Color_o UVar24;
  UnityEngine_Quaternion_o UVar25;
  int32_t local_70;
  int32_t local_6c;
  undefined1 local_68 [16];
  Characters_BasicTitanSetup_o *local_50;
  undefined1 local_48 [16];
  
  if (g_data_057adff2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BasicTitanSetup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MeshFilter_GetComponent_MeshFilter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MeshRenderer_GetComponent_MeshRenderer);
    il2cpp_runtime_helper_023445d0(&MethodInfo_SkinnedMeshRenderer_GetComponent_SkinnedMeshRenderer);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BoxCollider_AddComponent_BoxCollider);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_GetComponentsInChildren_Renderer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetupMaterials);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhysicsLayer);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Color255_get_Value);
    il2cpp_runtime_helper_023445d0(&"EyesHurtbox");
    il2cpp_runtime_helper_023445d0(&"TitanHeadCollider");
    il2cpp_runtime_helper_023445d0(&"TitanEyes");
    il2cpp_runtime_helper_023445d0(&"Eyes");
    il2cpp_runtime_helper_023445d0(&"Bone");
    il2cpp_runtime_helper_023445d0(&"Titans/Hairs/Prefabs/");
    il2cpp_runtime_helper_023445d0(&"Nose");
    il2cpp_runtime_helper_023445d0(&"Titans/Heads/Prefabs/");
    il2cpp_runtime_helper_023445d0(&"TitanHead");
    il2cpp_runtime_helper_023445d0(&"Body");
    il2cpp_runtime_helper_023445d0(&"Head");
    il2cpp_runtime_helper_023445d0(&"Eye");
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2/Core/Controller.Body/hip/spine/chest/neck/head");
    il2cpp_runtime_helper_023445d0(&"HairSocket");
    g_data_057adff2 = '\x01';
  }
  local_70 = 0;
  local_6c = 0;
  pUVar9 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (((pUVar9 != (UnityEngine_Transform_o *)0x0) &&
      (pCVar10 = (Characters_BasicTitanSetup_o *)
                 UnityEngine_Transform__Find(pUVar9,"Amarture_VER2/Core/Controller.Body/hip/spine/chest/neck/head",(MethodInfo *)0x0),
      set != (Settings_TitanCustomSet_o *)0x0)) &&
     (pSVar1 = (set->fields).Head, pSVar1 != (Settings_IntSetting_o *)0x0)) {
    local_70 = (pSVar1->fields)._value;
    pSVar2 = (set->fields).SkinColor;
    if ((pSVar2 != (Settings_ColorSetting_o *)0x0) &&
       (pUVar3 = (pSVar2->fields)._value, pUVar3 != (Utility_Color255_o *)0x0)) {
      UVar24 = Utility_Color255__ToColor(pUVar3,(MethodInfo *)0x0);
      local_68._8_4_ = extraout_XMM0_Dc;
      local_68._0_8_ = UVar24.fields._0_8_;
      local_68._12_4_ = extraout_XMM0_Dd;
      local_48._8_4_ = in_XMM1_Dc;
      local_48._0_8_ = UVar24.fields._8_8_;
      local_48._12_4_ = in_XMM1_Dd;
      pUVar9 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (((pUVar9 != (UnityEngine_Transform_o *)0x0) &&
          ((pUVar9 = UnityEngine_Transform__Find(pUVar9,"Body",(MethodInfo *)0x0),
           pUVar9 != (UnityEngine_Transform_o *)0x0 &&
           (pUVar11 = (UnityEngine_Renderer_o *)
                      UnityEngine_Component__GetComponent_object_
                                ((UnityEngine_Component_o *)pUVar9,MethodInfo_SkinnedMeshRenderer_GetComponent_SkinnedMeshRenderer),
           pUVar11 != (UnityEngine_Renderer_o *)0x0)))) &&
         (pUVar12 = UnityEngine_Renderer__get_material(pUVar11,(MethodInfo *)0x0), auVar6 = local_48,
         auVar22 = local_68, pUVar12 != (UnityEngine_Material_o *)0x0)) {
        UVar24.fields.b = (float)local_48._0_4_;
        UVar24.fields.a = (float)local_48._4_4_;
        UVar24.fields.r = (float)local_68._0_4_;
        UVar24.fields.g = (float)local_68._4_4_;
        local_68 = auVar22;
        local_48 = auVar6;
        UnityEngine_Material__set_color(pUVar12,UVar24,(MethodInfo *)0x0);
        if ((pCVar10 != (Characters_BasicTitanSetup_o *)0x0) &&
           (pUVar9 = UnityEngine_Transform__Find
                               ((UnityEngine_Transform_o *)pCVar10,"HairSocket",(MethodInfo *)0x0),
           pUVar9 != (UnityEngine_Transform_o *)0x0)) {
          local_68._0_8_ = __this;
          index = UnityEngine_Transform__get_childCount(pUVar9,(MethodInfo *)0x0);
          while (index = index + -1, -1 < index) {
            pUVar13 = UnityEngine_Transform__GetChild(pUVar9,index,(MethodInfo *)0x0);
            if (pUVar13 == (UnityEngine_Transform_o *)0x0) goto label_04313cf0;
            obj = (UnityEngine_Object_o *)
                  UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar13,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            UnityEngine_Object__DestroyImmediate_4e01e00(obj,(MethodInfo *)0x0);
          }
          local_50 = pCVar10;
          if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar17 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8);
          if (*(int *)(TypeInfo_BasicTitanSetup + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar4 = (set->fields).Hair;
          if ((pSVar4 != (Settings_StringSetting_o *)0x0) &&
             (pSVar5 = *(System_Collections_Generic_Dictionary_object__object__o **)
                        (*(long *)(TypeInfo_BasicTitanSetup + 0xb8) + 0x20),
             pSVar5 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
            pSVar14 = (System_String_o *)
                      System_Collections_Generic_Dictionary_object__object___get_Item
                                (pSVar5,(Il2CppObject *)(pSVar4->fields)._value,MethodInfo_String_get_Item);
            pSVar14 = System_String__Concat_3ae5ba0("Titans/Hairs/Prefabs/",pSVar14,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pUVar15 = (UnityEngine_GameObject_o *)
                      ApplicationManagers_ResourceManager__InstantiateAsset_object_
                                (pSVar17,pSVar14,1,MethodInfo_GameObject_InstantiateAsset_GameObject);
            if ((pUVar15 != (UnityEngine_GameObject_o *)0x0) &&
               (pUVar13 = UnityEngine_GameObject__get_transform(pUVar15,(MethodInfo *)0x0),
               pUVar13 != (UnityEngine_Transform_o *)0x0)) {
              UnityEngine_Transform__SetParent(pUVar13,pUVar9,(MethodInfo *)0x0);
              pUVar9 = UnityEngine_GameObject__get_transform(pUVar15,(MethodInfo *)0x0);
              if (g_data_057a65d5 == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
                g_data_057a65d5 = '\x01';
              }
              if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
                UnityEngine_Transform__set_localPosition
                          (pUVar9,(UnityEngine_Vector3_o)
                                  **(UnityEngine_Vector3_Fields **)(TypeInfo_Vector3 + 0xb8),(MethodInfo *)0x0);
                pUVar9 = UnityEngine_GameObject__get_transform(pUVar15,(MethodInfo *)0x0);
                UVar25 = UnityEngine_Quaternion__Internal_FromEulerRad
                                   ((UnityEngine_Vector3_o)ZEXT812(0xbfc90fdb),(MethodInfo *)0x0);
                if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
                  UnityEngine_Transform__set_localRotation(pUVar9,UVar25,(MethodInfo *)0x0);
                  pUVar9 = UnityEngine_GameObject__get_transform(pUVar15,(MethodInfo *)0x0);
                  if (g_data_057a6932 == '\0') {
                    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
                    g_data_057a6932 = '\x01';
                  }
                  if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
                    UnityEngine_Transform__set_localScale
                              (pUVar9,(UnityEngine_Vector3_o)
                                      *(UnityEngine_Vector3_Fields *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc),
                               (MethodInfo *)0x0);
                    pSVar16 = UnityEngine_GameObject__GetComponentsInChildren_object__255ab00
                                        (pUVar15,MethodInfo_Renderer_GetComponentsInChildren_Renderer);
                    if (pSVar16 != (System_Object_array *)0x0) {
                      uVar7 = (uint)pSVar16->max_length;
                      if (0 < (int)uVar7) {
                        uVar20 = 0;
                        do {
                          if (uVar7 <= uVar20) goto label_04313cf5;
                          pUVar11 = (UnityEngine_Renderer_o *)pSVar16->m_Items[(int)uVar20];
                          if (*(int *)(TypeInfo_BasicTitanSetup + 0xe4) == 0) {
                            il2cpp_runtime_helper_02337ed0();
                          }
                          pSVar4 = (set->fields).Hair;
                          if ((pSVar4 == (Settings_StringSetting_o *)0x0) ||
                             (pSVar5 = *(System_Collections_Generic_Dictionary_object__object__o **)
                                        (*(long *)(TypeInfo_BasicTitanSetup + 0xb8) + 0x20),
                             pSVar5 == (System_Collections_Generic_Dictionary_object__object__o *)0x0))
                          goto label_04313cf0;
                          pSVar17 = (System_String_o *)
                                    System_Collections_Generic_Dictionary_object__object___get_Item
                                              (pSVar5,(Il2CppObject *)(pSVar4->fields)._value,MethodInfo_String_get_Item);
                          if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
                            il2cpp_runtime_helper_02337ed0();
                          }
                          pUVar12 = Characters_HumanSetupMaterials__GetHairMaterial(pSVar17,(MethodInfo *)0x0)
                          ;
                          if (pUVar11 == (UnityEngine_Renderer_o *)0x0) goto label_04313cf0;
                          UnityEngine_Renderer__set_material(pUVar11,pUVar12,(MethodInfo *)0x0);
                          pUVar12 = UnityEngine_Renderer__get_material(pUVar11,(MethodInfo *)0x0);
                          pSVar2 = (set->fields).HairColor;
                          if (((pSVar2 == (Settings_ColorSetting_o *)0x0) ||
                              (pUVar3 = (pSVar2->fields)._value, pUVar3 == (Utility_Color255_o *)0x0)) ||
                             (UVar24 = Utility_Color255__ToColor(pUVar3,(MethodInfo *)0x0),
                             pUVar12 == (UnityEngine_Material_o *)0x0)) goto label_04313cf0;
                          UnityEngine_Material__set_color(pUVar12,UVar24,(MethodInfo *)0x0);
                          uVar20 = uVar20 + 1;
                          uVar7 = (uint)pSVar16->max_length;
                        } while ((int)uVar20 < (int)uVar7);
                      }
                      pSVar17 = System_Int32__ToString((int32_t)&local_70,(MethodInfo *)0x0);
                      pSVar17 = System_String__Concat_3ae5ba0("TitanHead",pSVar17,(MethodInfo *)0x0);
                      pUVar9 = UnityEngine_Component__get_transform
                                         ((UnityEngine_Component_o *)local_68._0_8_,(MethodInfo *)0x0);
                      if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
                        pUVar9 = UnityEngine_Transform__Find(pUVar9,"Head",(MethodInfo *)0x0);
                        if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
                          il2cpp_runtime_helper_02337ed0();
                        }
                        pSVar14 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8);
                        pSVar17 = System_String__Concat_3ae5ba0("Titans/Heads/Prefabs/",pSVar17,(MethodInfo *)0x0);
                        if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
                          il2cpp_runtime_helper_02337ed0();
                        }
                        __this_00 = (Characters_BaseTitan_o *)
                                    ApplicationManagers_ResourceManager__LoadAsset
                                              (pSVar14,pSVar17,1,(MethodInfo *)0x0);
                        if (__this_00 != (Characters_BaseTitan_o *)0x0) {
                          if (__this_00->klass != TypeInfo_GameObject) goto label_04313cfa;
                          pUVar13 = UnityEngine_GameObject__get_transform
                                              ((UnityEngine_GameObject_o *)__this_00,(MethodInfo *)0x0);
                          if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
                            pUVar11 = (UnityEngine_Renderer_o *)
                                      UnityEngine_Component__GetComponent_object_
                                                ((UnityEngine_Component_o *)pUVar9,MethodInfo_SkinnedMeshRenderer_GetComponent_SkinnedMeshRenderer);
                            pUVar18 = UnityEngine_Component__get_transform
                                                ((UnityEngine_Component_o *)local_68._0_8_,(MethodInfo *)0x0);
                            if (((pUVar18 != (UnityEngine_Transform_o *)0x0) &&
                                (pUVar18 = UnityEngine_Transform__Find(pUVar18,"Body",(MethodInfo *)0x0)
                                , pUVar18 != (UnityEngine_Transform_o *)0x0)) &&
                               ((__this_01 = (UnityEngine_Renderer_o *)
                                             UnityEngine_Component__GetComponent_object_
                                                       ((UnityEngine_Component_o *)pUVar18,MethodInfo_SkinnedMeshRenderer_GetComponent_SkinnedMeshRenderer),
                                __this_01 != (UnityEngine_Renderer_o *)0x0 &&
                                (pUVar12 = UnityEngine_Renderer__get_material(__this_01,(MethodInfo *)0x0),
                                pUVar11 != (UnityEngine_Renderer_o *)0x0)))) {
                              UnityEngine_Renderer__set_material(pUVar11,pUVar12,(MethodInfo *)0x0);
                              __this_02 = (UnityEngine_SkinnedMeshRenderer_o *)
                                          UnityEngine_Component__GetComponent_object_
                                                    ((UnityEngine_Component_o *)pUVar9,MethodInfo_SkinnedMeshRenderer_GetComponent_SkinnedMeshRenderer);
                              if (((pUVar13 != (UnityEngine_Transform_o *)0x0) &&
                                  (__this_03 = (UnityEngine_SkinnedMeshRenderer_o *)
                                               UnityEngine_Component__GetComponent_object_
                                                         ((UnityEngine_Component_o *)pUVar13,MethodInfo_SkinnedMeshRenderer_GetComponent_SkinnedMeshRenderer),
                                  pCVar10 = local_50, __this_03 != (UnityEngine_SkinnedMeshRenderer_o *)0x0))
                                 && (pUVar19 = UnityEngine_SkinnedMeshRenderer__get_sharedMesh
                                                         (__this_03,(MethodInfo *)0x0),
                                    __this_02 != (UnityEngine_SkinnedMeshRenderer_o *)0x0)) {
                                UnityEngine_SkinnedMeshRenderer__set_sharedMesh
                                          (__this_02,pUVar19,(MethodInfo *)0x0);
                                pSVar17 = System_Int32__ToString((int32_t)&local_70,(MethodInfo *)0x0);
                                pSVar14 = System_String__Concat_3ae5ba0
                                                    ("TitanHeadCollider",pSVar17,(MethodInfo *)0x0);
                                pSVar17 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8);
                                pSVar14 = System_String__Concat_3ae5ba0
                                                    ("Titans/Heads/Prefabs/",pSVar14,(MethodInfo *)0x0);
                                __this_00 = (Characters_BaseTitan_o *)
                                            ApplicationManagers_ResourceManager__LoadAsset
                                                      (pSVar17,pSVar14,1,(MethodInfo *)0x0);
                                if (__this_00 != (Characters_BaseTitan_o *)0x0) {
                                  if (__this_00->klass != TypeInfo_GameObject) goto label_04313cfa;
                                  pUVar9 = UnityEngine_GameObject__get_transform
                                                     ((UnityEngine_GameObject_o *)__this_00,(MethodInfo *)0x0)
                                  ;
                                  Characters_BasicTitanSetup__CopyColliders
                                            ((Characters_BasicTitanSetup_o *)__this_00,pUVar9,
                                             (UnityEngine_Transform_o *)pCVar10,1,0,in_R9);
                                  if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
                                    pUVar13 = UnityEngine_Transform__Find
                                                        (pUVar9,"Bone",(MethodInfo *)0x0);
                                    pCVar21 = pCVar10;
                                    pUVar18 = UnityEngine_Transform__Find
                                                        ((UnityEngine_Transform_o *)pCVar10,"Bone",
                                                         (MethodInfo *)0x0);
                                    Characters_BasicTitanSetup__CopyColliders
                                              (pCVar21,pUVar13,pUVar18,0,0,in_R9);
                                    pUVar13 = UnityEngine_Transform__Find
                                                        (pUVar9,"EyesHurtbox",(MethodInfo *)0x0);
                                    pCVar21 = pCVar10;
                                    pUVar18 = UnityEngine_Transform__Find
                                                        ((UnityEngine_Transform_o *)pCVar10,"EyesHurtbox",
                                                         (MethodInfo *)0x0);
                                    Characters_BasicTitanSetup__CopyColliders
                                              (pCVar21,pUVar13,pUVar18,0,1,in_R9);
                                    pUVar13 = UnityEngine_Transform__Find
                                                        (pUVar9,"HairSocket",(MethodInfo *)0x0);
                                    pUVar18 = UnityEngine_Transform__Find
                                                        ((UnityEngine_Transform_o *)pCVar10,"HairSocket",
                                                         (MethodInfo *)0x0);
                                    if ((pUVar13 != (UnityEngine_Transform_o *)0x0) &&
                                       (UVar23 = UnityEngine_Transform__get_localPosition
                                                           (pUVar13,(MethodInfo *)0x0),
                                       pUVar18 != (UnityEngine_Transform_o *)0x0)) {
                                      UnityEngine_Transform__set_localPosition
                                                (pUVar18,UVar23,(MethodInfo *)0x0);
                                      UVar25 = UnityEngine_Transform__get_localRotation
                                                         (pUVar13,(MethodInfo *)0x0);
                                      UnityEngine_Transform__set_localRotation
                                                (pUVar18,UVar25,(MethodInfo *)0x0);
                                      UVar23 = UnityEngine_Transform__get_localScale
                                                         (pUVar13,(MethodInfo *)0x0);
                                      UnityEngine_Transform__set_localScale(pUVar18,UVar23,(MethodInfo *)0x0);
                                      pUVar13 = UnityEngine_Transform__Find
                                                          (pUVar9,"Nose",(MethodInfo *)0x0);
                                      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                                        il2cpp_runtime_helper_02337ed0();
                                      }
                                      bVar8 = UnityEngine_Object__op_Inequality
                                                        ((UnityEngine_Object_o *)pUVar13,
                                                         (UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                                      if ((char)bVar8 == '\0') {
label_04313b41:
                                        pSVar17 = System_Int32__ToString((int32_t)&local_70,(MethodInfo *)0x0)
                                        ;
                                        pSVar17 = System_String__Concat_3ae5ba0
                                                            ("TitanEyes",pSVar17,(MethodInfo *)0x0);
                                        pSVar1 = (set->fields).Eye;
                                        if (pSVar1 != (Settings_IntSetting_o *)0x0) {
                                          local_6c = (pSVar1->fields)._value;
                                          pUVar9 = UnityEngine_Transform__Find
                                                             ((UnityEngine_Transform_o *)pCVar10,"Eyes",
                                                              (MethodInfo *)0x0);
                                          if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
                                            il2cpp_runtime_helper_02337ed0();
                                          }
                                          pSVar14 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8);
                                          pSVar17 = System_String__Concat_3ae5ba0
                                                              ("Titans/Heads/Prefabs/",pSVar17,(MethodInfo *)0x0);
                                          if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
                                            il2cpp_runtime_helper_02337ed0();
                                          }
                                          __this_00 = (Characters_BaseTitan_o *)
                                                      ApplicationManagers_ResourceManager__LoadAsset
                                                                (pSVar14,pSVar17,1,(MethodInfo *)0x0);
                                          if (__this_00 != (Characters_BaseTitan_o *)0x0) {
                                            if (__this_00->klass != TypeInfo_GameObject) goto label_04313cfa;
                                            pUVar13 = UnityEngine_GameObject__get_transform
                                                                ((UnityEngine_GameObject_o *)__this_00,
                                                                 (MethodInfo *)0x0);
                                            if ((((pUVar9 != (UnityEngine_Transform_o *)0x0) &&
                                                 (__this_05 = (UnityEngine_MeshFilter_o *)
                                                              UnityEngine_Component__GetComponent_object_
                                                                        ((UnityEngine_Component_o *)pUVar9,
                                                                         MethodInfo_MeshFilter_GetComponent_MeshFilter),
                                                 pUVar13 != (UnityEngine_Transform_o *)0x0)) &&
                                                (__this_06 = (UnityEngine_MeshFilter_o *)
                                                             UnityEngine_Component__GetComponent_object_
                                                                       ((UnityEngine_Component_o *)pUVar13,
                                                                        MethodInfo_MeshFilter_GetComponent_MeshFilter),
                                                __this_06 != (UnityEngine_MeshFilter_o *)0x0)) &&
                                               (pUVar19 = UnityEngine_MeshFilter__get_sharedMesh
                                                                    (__this_06,(MethodInfo *)0x0),
                                               __this_05 != (UnityEngine_MeshFilter_o *)0x0)) {
                                              UnityEngine_MeshFilter__set_sharedMesh
                                                        (__this_05,pUVar19,(MethodInfo *)0x0);
                                              pUVar11 = (UnityEngine_Renderer_o *)
                                                        UnityEngine_Component__GetComponent_object_
                                                                  ((UnityEngine_Component_o *)pUVar9,
                                                                   MethodInfo_MeshRenderer_GetComponent_MeshRenderer);
                                              pSVar17 = System_Int32__ToString
                                                                  ((int32_t)&local_6c,(MethodInfo *)0x0);
                                              pSVar17 = System_String__Concat_3ae5ba0
                                                                  ("Eye",pSVar17,(MethodInfo *)0x0);
                                              if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
                                                il2cpp_runtime_helper_02337ed0();
                                              }
                                              pUVar12 = Characters_HumanSetupMaterials__GetTitanEyeMaterial
                                                                  (pSVar17,(MethodInfo *)0x0);
                                              if (pUVar11 != (UnityEngine_Renderer_o *)0x0) {
                                                UnityEngine_Renderer__set_material
                                                          (pUVar11,pUVar12,(MethodInfo *)0x0);
                                                return;
                                              }
                                            }
                                          }
                                        }
                                      }
                                      else {
                                        pUVar9 = UnityEngine_Transform__Find
                                                           (pUVar9,"Nose",(MethodInfo *)0x0);
                                        pUVar15 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject)
                                        ;
                                        UnityEngine_GameObject___ctor_4dfc3c0(pUVar15,(MethodInfo *)0x0);
                                        if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
                                          il2cpp_runtime_helper_02337ed0();
                                        }
                                        if (pUVar15 != (UnityEngine_GameObject_o *)0x0) {
                                          UnityEngine_GameObject__set_layer
                                                    (pUVar15,*(int32_t *)
                                                              (*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0x14),
                                                     (MethodInfo *)0x0);
                                          pUVar13 = UnityEngine_GameObject__get_transform
                                                              (pUVar15,(MethodInfo *)0x0);
                                          if (pUVar13 != (UnityEngine_Transform_o *)0x0) {
                                            UnityEngine_Transform__SetParent
                                                      (pUVar13,(UnityEngine_Transform_o *)pCVar10,
                                                       (MethodInfo *)0x0);
                                            pUVar13 = UnityEngine_GameObject__get_transform
                                                                (pUVar15,(MethodInfo *)0x0);
                                            if ((pUVar9 != (UnityEngine_Transform_o *)0x0) &&
                                               (UVar23 = UnityEngine_Transform__get_localPosition
                                                                   (pUVar9,(MethodInfo *)0x0),
                                               pUVar13 != (UnityEngine_Transform_o *)0x0)) {
                                              UnityEngine_Transform__set_localPosition
                                                        (pUVar13,UVar23,(MethodInfo *)0x0);
                                              pUVar13 = UnityEngine_GameObject__get_transform
                                                                  (pUVar15,(MethodInfo *)0x0);
                                              UVar25 = UnityEngine_Transform__get_localRotation
                                                                 (pUVar9,(MethodInfo *)0x0);
                                              if (pUVar13 != (UnityEngine_Transform_o *)0x0) {
                                                UnityEngine_Transform__set_localRotation
                                                          (pUVar13,UVar25,(MethodInfo *)0x0);
                                                pUVar13 = UnityEngine_GameObject__get_transform
                                                                    (pUVar15,(MethodInfo *)0x0);
                                                UVar23 = UnityEngine_Transform__get_localScale
                                                                   (pUVar9,(MethodInfo *)0x0);
                                                if (pUVar13 != (UnityEngine_Transform_o *)0x0) {
                                                  UnityEngine_Transform__set_localScale
                                                            (pUVar13,UVar23,(MethodInfo *)0x0);
                                                  __this_04 = (UnityEngine_BoxCollider_o *)
                                                              UnityEngine_GameObject__AddComponent_object_
                                                                        (pUVar15,MethodInfo_BoxCollider_AddComponent_BoxCollider);
                                                  if (g_data_057a65d5 == '\0') {
                                                    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
                                                    g_data_057a65d5 = '\x01';
                                                  }
                                                  if (__this_04 != (UnityEngine_BoxCollider_o *)0x0) {
                                                    UnityEngine_BoxCollider__set_center
                                                              (__this_04,
                                                               (UnityEngine_Vector3_o)
                                                               **(UnityEngine_Vector3_Fields **)
                                                                 (TypeInfo_Vector3 + 0xb8),(MethodInfo *)0x0);
                                                    if (g_data_057a6932 == '\0') {
                                                      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
                                                      g_data_057a6932 = '\x01';
                                                    }
                                                    UnityEngine_BoxCollider__set_size
                                                              (__this_04,
                                                               (UnityEngine_Vector3_o)
                                                               *(UnityEngine_Vector3_Fields *)
                                                                (*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc),
                                                               (MethodInfo *)0x0);
                                                    goto label_04313b41;
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
      }
    }
  }
label_04313cf0:
  il2cpp_runtime_helper_022b2c90();
label_04313cf5:
  __this_00 = (Characters_BaseTitan_o *)il2cpp_runtime_helper_022b2ca0();
label_04313cfa:
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057adfba == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BasicTitanComponentCache);
    g_data_057adfba = '\x01';
  }
  pUVar15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
  auVar22 = il2cpp_runtime_helper_023052d0(TypeInfo_BasicTitanComponentCache);
  __this_07 = auVar22._0_8_;
  Characters_BasicTitanComponentCache___ctor(__this_07,pUVar15,auVar22._8_8_);
  *(Characters_BasicTitanComponentCache_o **)&(__this_00->fields)._furthestCoreLocalPosition.fields =
       __this_07;
  il2cpp_runtime_helper_022b4080(&(__this_00->fields)._furthestCoreLocalPosition,__this_07);
  Characters_BaseTitan__CreateCache
            (__this_00,
             *(Utility_BaseComponentCache_o **)&(__this_00->fields)._furthestCoreLocalPosition.fields,
             (MethodInfo *)0x0);
  return;
}


// Characters.BasicTitanSetup$$CopyColliders
// il2cpp: void Characters_BasicTitanSetup__CopyColliders (Characters_BasicTitanSetup_o* __this, UnityEngine_Transform_o* from, UnityEngine_Transform_o* to, bool capsule, bool moveTransform, const MethodInfo* method);
// 0x4320560

void Characters_BasicTitanSetup__CopyColliders
               (Characters_BasicTitanSetup_o *__this,UnityEngine_Transform_o *from,UnityEngine_Transform_o *to
               ,bool_conflict capsule,bool_conflict moveTransform,MethodInfo *method)

{
  Characters_BasicTitanSetup_o *__this_00;
  UnityEngine_Component_o *__this_01;
  UnityEngine_Transform_o *pUVar1;
  Characters_BasicTitanSetup_o *pCVar2;
  float fVar3;
  UnityEngine_Vector3_o UVar4;
  UnityEngine_Quaternion_o value;
  
  if (g_data_057adff3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_BoxCollider_GetComponent_BoxCollider);
    __this = (Characters_BasicTitanSetup_o *)&MethodInfo_CapsuleCollider_GetComponent_CapsuleCollider;
    il2cpp_runtime_helper_023445d0();
    g_data_057adff3 = '\x01';
  }
  if (from != (UnityEngine_Transform_o *)0x0) {
    if ((char)capsule == '\0') {
      __this_00 = (Characters_BasicTitanSetup_o *)
                  UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)from,MethodInfo_BoxCollider_GetComponent_BoxCollider);
      __this = (Characters_BasicTitanSetup_o *)from;
      if (((to == (UnityEngine_Transform_o *)0x0) ||
          (__this_01 = (UnityEngine_Component_o *)
                       UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)to,MethodInfo_BoxCollider_GetComponent_BoxCollider)
          , __this = (Characters_BasicTitanSetup_o *)to, __this_00 == (Characters_BasicTitanSetup_o *)0x0)) ||
         (__this = __this_00,
         UVar4 = UnityEngine_BoxCollider__get_center((UnityEngine_BoxCollider_o *)__this_00,(MethodInfo *)0x0)
         , __this_01 == (UnityEngine_Component_o *)0x0)) goto label_04320752;
      UnityEngine_BoxCollider__set_center((UnityEngine_BoxCollider_o *)__this_01,UVar4,(MethodInfo *)0x0);
      UVar4 = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)__this_00,(MethodInfo *)0x0);
      UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)__this_01,UVar4,(MethodInfo *)0x0);
    }
    else {
      __this_00 = (Characters_BasicTitanSetup_o *)
                  UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)from,MethodInfo_CapsuleCollider_GetComponent_CapsuleCollider);
      __this = (Characters_BasicTitanSetup_o *)from;
      if (((to == (UnityEngine_Transform_o *)0x0) ||
          (__this_01 = (UnityEngine_Component_o *)
                       UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)to,MethodInfo_CapsuleCollider_GetComponent_CapsuleCollider)
          , __this = (Characters_BasicTitanSetup_o *)to, __this_00 == (Characters_BasicTitanSetup_o *)0x0)) ||
         (__this = __this_00,
         UVar4 = UnityEngine_CapsuleCollider__get_center
                           ((UnityEngine_CapsuleCollider_o *)__this_00,(MethodInfo *)0x0),
         __this_01 == (UnityEngine_Component_o *)0x0)) goto label_04320752;
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
    __this = __this_00;
    pCVar2 = (Characters_BasicTitanSetup_o *)
             UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    if ((pCVar2 != (Characters_BasicTitanSetup_o *)0x0) &&
       (UVar4 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)pCVar2,(MethodInfo *)0x0),
       __this = pCVar2, pUVar1 != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__set_localPosition(pUVar1,UVar4,(MethodInfo *)0x0);
      pUVar1 = UnityEngine_Component__get_transform(__this_01,(MethodInfo *)0x0);
      __this = __this_00;
      pCVar2 = (Characters_BasicTitanSetup_o *)
               UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
      if ((pCVar2 != (Characters_BasicTitanSetup_o *)0x0) &&
         (value = UnityEngine_Transform__get_localRotation
                            ((UnityEngine_Transform_o *)pCVar2,(MethodInfo *)0x0), __this = pCVar2,
         pUVar1 != (UnityEngine_Transform_o *)0x0)) {
        UnityEngine_Transform__set_localRotation(pUVar1,value,(MethodInfo *)0x0);
        pUVar1 = UnityEngine_Component__get_transform(__this_01,(MethodInfo *)0x0);
        pCVar2 = (Characters_BasicTitanSetup_o *)
                 UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
        __this = __this_00;
        if ((pCVar2 != (Characters_BasicTitanSetup_o *)0x0) &&
           (UVar4 = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)pCVar2,(MethodInfo *)0x0)
           , __this = pCVar2, pUVar1 != (UnityEngine_Transform_o *)0x0)) {
          UnityEngine_Transform__set_localScale(pUVar1,UVar4,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
label_04320752:
  il2cpp_runtime_helper_022b2c90();
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Characters.BasicTitanSetup$$.ctor
// il2cpp: void Characters_BasicTitanSetup___ctor (Characters_BasicTitanSetup_o* __this, const MethodInfo* method);
// 0x4320760

void Characters_BasicTitanSetup___ctor(Characters_BasicTitanSetup_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Characters.BasicTitanSetup$$.cctor
// il2cpp: void Characters_BasicTitanSetup___cctor (const MethodInfo* method);
// 0x4320770

void Characters_BasicTitanSetup___cctor(MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  System_Collections_Generic_List_object__o *pSVar2;
  System_Collections_Generic_List_int__o *__this_00;
  
  if (g_data_057adff4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BasicTitanSetup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Utility_Color255);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Int32);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_int);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Color255);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    g_data_057adff4 = '\x01';
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_string);
  System_Collections_Generic_Dictionary_object__object____ctor(__this,MethodInfo_Dictionary_2_System_String_System_String);
  lVar1 = *(long *)(TypeInfo_BasicTitanSetup + 0xb8);
  *(System_Collections_Generic_Dictionary_object__object__o **)(lVar1 + 0x20) = __this;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x20,__this);
  pSVar2 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor(pSVar2,MethodInfo_List_1_System_String);
  lVar1 = *(long *)(TypeInfo_BasicTitanSetup + 0xb8);
  *(System_Collections_Generic_List_object__o **)(lVar1 + 0x28) = pSVar2;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x28,pSVar2);
  __this_00 = (System_Collections_Generic_List_int__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_int);
  System_Collections_Generic_List_int____ctor(__this_00,MethodInfo_List_1_System_Int32);
  lVar1 = *(long *)(TypeInfo_BasicTitanSetup + 0xb8);
  *(System_Collections_Generic_List_int__o **)(lVar1 + 0x30) = __this_00;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x30,__this_00);
  pSVar2 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Color255);
  System_Collections_Generic_List_object____ctor(pSVar2,MethodInfo_List_1_Utility_Color255);
  lVar1 = *(long *)(TypeInfo_BasicTitanSetup + 0xb8);
  *(System_Collections_Generic_List_object__o **)(lVar1 + 0x38) = pSVar2;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x38,pSVar2);
  return;
}


