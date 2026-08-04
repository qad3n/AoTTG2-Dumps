// Type: Map.BuiltinLevels
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Map/BuiltinLevels.cs
// Prior real C# source (older reference): Assets/Scripts/Map/BuiltinLevels.cs
// --------------------------------

// Map.BuiltinLevels.<>c$$.cctor
// il2cpp: void Map_BuiltinLevels___c___cctor (const MethodInfo* method);
// 0x409f060

void Map_BuiltinLevels___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (g_data_057ac487 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac487 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// Map.BuiltinLevels.<>c$$.ctor
// il2cpp: void Map_BuiltinLevels___c___ctor (Map_BuiltinLevels___c_o* __this, const MethodInfo* method);
// 0x409f0d0

void Map_BuiltinLevels___c___ctor(Map_BuiltinLevels___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Map.BuiltinLevels.<>c$$<GetTxtFiles>b__28_0
// il2cpp: System_String_o* Map_BuiltinLevels___c___GetTxtFiles_b__28_0 (Map_BuiltinLevels___c_o* __this, System_String_o* f, const MethodInfo* method);
// 0x409f0e0

System_String_o *
Map_BuiltinLevels___c___GetTxtFiles_b__28_0
          (Map_BuiltinLevels___c_o *__this,System_String_o *f,MethodInfo *method)

{
  int iVar1;
  System_String_o *pSVar2;
  
  if (g_data_057ac488 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Path);
    g_data_057ac488 = '\x01';
    iVar1 = *(int *)(TypeInfo_Path + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Path + 0xe4);
  }
  if (iVar1 != 0) {
    pSVar2 = System_IO_Path__GetFileName(f,(MethodInfo *)0x0);
    return pSVar2;
  }
  il2cpp_runtime_helper_02337ed0();
  pSVar2 = System_IO_Path__GetFileName(f,(MethodInfo *)0x0);
  return pSVar2;
}


// Map.BuiltinLevels.<>c$$<GetClFiles>b__29_0
// il2cpp: System_String_o* Map_BuiltinLevels___c___GetClFiles_b__29_0 (Map_BuiltinLevels___c_o* __this, System_String_o* f, const MethodInfo* method);
// 0x409f150

System_String_o *
Map_BuiltinLevels___c___GetClFiles_b__29_0
          (Map_BuiltinLevels___c_o *__this,System_String_o *f,MethodInfo *method)

{
  int iVar1;
  System_String_o *pSVar2;
  
  if (g_data_057ac489 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Path);
    g_data_057ac489 = '\x01';
    iVar1 = *(int *)(TypeInfo_Path + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Path + 0xe4);
  }
  if (iVar1 != 0) {
    pSVar2 = System_IO_Path__GetFileName(f,(MethodInfo *)0x0);
    return pSVar2;
  }
  il2cpp_runtime_helper_02337ed0();
  pSVar2 = System_IO_Path__GetFileName(f,(MethodInfo *)0x0);
  return pSVar2;
}


// Map.BuiltinLevels$$Init
// il2cpp: void Map_BuiltinLevels__Init (const MethodInfo* method);
// 0x409aa30

void Map_BuiltinLevels__Init(MethodInfo *method)

{
  byte bVar1;
  SimpleJSONFixed_JSONNode_Enumerator_o __this;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_00;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_01;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_02;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_03;
  MethodInfo *method_00;
  char cVar2;
  uint uVar3;
  bool_conflict bVar4;
  System_String_o *pSVar5;
  System_String_o *pSVar6;
  SimpleJSONFixed_JSONNode_o *pSVar7;
  long *plVar8;
  System_String_o *pSVar9;
  SimpleJSONFixed_JSONNode_o *pSVar10;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  Il2CppClass *pIVar11;
  Il2CppClass *b;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o SVar12;
  undefined8 in_stack_fffffffffffffea8;
  Il2CppMethodPointer pIVar13;
  Il2CppMethodPointer pIVar14;
  InvokerMethod pIVar15;
  char *pcVar16;
  Il2CppType *pIVar17;
  Il2CppMethodPointer pIStack_100;
  Il2CppMethodPointer pIStack_f8;
  InvokerMethod pIStack_f0;
  char *pcStack_e8;
  Il2CppClass *pIStack_e0;
  Il2CppType *pIStack_d8;
  SimpleJSONFixed_JSONNode_o *pSStack_d0;
  _union_13 _Stack_c8;
  _union_14 _Stack_c0;
  undefined1 auStack_b8 [88];
  
  if (g_data_057ac468 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinLevels);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TextAsset);
    il2cpp_runtime_helper_023445d0(&"BuiltinMapInfo");
    g_data_057ac468 = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  System_IO_Directory__CreateDirectory
            (*(System_String_o **)(*(long *)(TypeInfo_BuiltinLevels + 0xb8) + 8),(MethodInfo *)0x0);
  System_IO_Directory__CreateDirectory
            (*(System_String_o **)(*(long *)(TypeInfo_BuiltinLevels + 0xb8) + 0x18),(MethodInfo *)0x0);
  System_IO_Directory__CreateDirectory
            (*(System_String_o **)(*(long *)(TypeInfo_BuiltinLevels + 0xb8) + 0x10),(MethodInfo *)0x0);
  System_IO_Directory__CreateDirectory
            (*(System_String_o **)(*(long *)(TypeInfo_BuiltinLevels + 0xb8) + 0x20),(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar6 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 0x18);
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar11 = "BuiltinMapInfo";
  pSVar5 = (System_String_o *)
           ApplicationManagers_ResourceManager__LoadAsset
                     (pSVar6,(System_String_o *)"BuiltinMapInfo",0,(MethodInfo *)0x0);
  if (pSVar5 != (System_String_o *)0x0) {
    bVar1 = (TypeInfo_TextAsset->_2).naturalAligment;
    if ((bVar1 <= (pSVar5->klass->_2).naturalAligment) &&
       ((pSVar5->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_TextAsset)) {
      pSVar6 = UnityEngine_TextAsset__get_text((UnityEngine_TextAsset_o *)pSVar5,(MethodInfo *)0x0);
      pSVar7 = SimpleJSONFixed_JSON__Parse(pSVar6,(MethodInfo *)0x0);
      **(undefined8 **)(TypeInfo_BuiltinLevels + 0xb8) = pSVar7;
      il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_BuiltinLevels + 0xb8),pSVar7);
      return;
    }
    pIVar11 = TypeInfo_TextAsset;
    il2cpp_runtime_helper_022b2fd0();
    pSVar6 = pSVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac469 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinLevels);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&"Custom");
    il2cpp_runtime_helper_023445d0(&".txt");
    il2cpp_runtime_helper_023445d0(&"/");
    il2cpp_runtime_helper_023445d0(&"Category");
    il2cpp_runtime_helper_023445d0(&"Map");
    g_data_057ac469 = '\x01';
  }
  uVar3 = System_String__op_Equality(pSVar6,"Custom",(MethodInfo *)0x0);
  method_00 = extraout_RDX;
  if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    method_00 = extraout_RDX_00;
  }
  if ((char)uVar3 != '\0') {
    pSVar6 = System_String__Concat_3af7470
                       (*(System_String_o **)(*(long *)(TypeInfo_BuiltinLevels + 0xb8) + 8),"/",
                        (System_String_o *)pIVar11,".txt",(MethodInfo *)0x0);
    bVar4 = System_IO_File__Exists(pSVar6,(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      return;
    }
    System_IO_File__ReadAllText(pSVar6,(MethodInfo *)0x0);
    return;
  }
  b = pIVar11;
  pSVar5 = pSVar6;
  pSVar7 = Map_BuiltinLevels__GetMap(pSVar6,(System_String_o *)pIVar11,method_00);
  if (pSVar7 != (SimpleJSONFixed_JSONNode_o *)0x0) {
    cVar2 = (*(pSVar7->klass->vtable)._28_HasKey.methodPtr)
                      (pSVar7,"Category",(pSVar7->klass->vtable)._28_HasKey.method);
    if (cVar2 != '\0') {
      pSVar7 = (SimpleJSONFixed_JSONNode_o *)
               (*(pSVar7->klass->vtable)._7_get_Item.methodPtr)
                         (pSVar7,"Category",(pSVar7->klass->vtable)._7_get_Item.method);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar6 = SimpleJSONFixed_JSONNode__op_Implicit_3f79b00(pSVar7,(MethodInfo *)0x0);
    }
    if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar5 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 0x20);
    pSVar6 = System_String__Concat_3af7470
                       (pSVar6,"/",(System_String_o *)pIVar11,"Map",(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    ApplicationManagers_ResourceManager__TryLoadText(pSVar5,pSVar6,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  auStack_b8._72_8_ = (ulong)uVar3;
  auStack_b8._80_8_ = pSVar6;
  if (g_data_057ac482 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinLevels);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&"MapCategories");
    il2cpp_runtime_helper_023445d0(&"Maps");
    il2cpp_runtime_helper_023445d0(&"Name");
    g_data_057ac482 = '\x01';
  }
  auStack_b8._48_8_ = (SimpleJSONFixed_JSONNode_o *)0x0;
  auStack_b8._56_8_ = (Il2CppRGCTXData *)0x0;
  auStack_b8._32_8_ = (Il2CppClass *)0x0;
  auStack_b8._40_8_ = (Il2CppType *)0x0;
  auStack_b8._16_8_ = (InvokerMethod)0x0;
  auStack_b8._24_8_ = (char *)0x0;
  auStack_b8._0_8_ = (Il2CppMethodPointer)0x0;
  auStack_b8._8_8_ = (Il2CppMethodPointer)0x0;
  auStack_b8._64_8_ = (void *)0x0;
  if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar6 = (System_String_o *)**(long **)(TypeInfo_BuiltinLevels + 0xb8);
  if ((pSVar6 != (System_String_o *)0x0) &&
     (plVar8 = (long *)(*(((SimpleJSONFixed_JSONNode_c *)pSVar6->klass)->vtable)._7_get_Item.methodPtr)
                                 (pSVar6,"MapCategories",
                                  (((SimpleJSONFixed_JSONNode_c *)pSVar6->klass)->vtable)._7_get_Item.method),
     plVar8 != (long *)0x0)) {
    (**(code **)(*plVar8 + 0x338))(&pIStack_100,plVar8,*(undefined8 *)(*plVar8 + 0x340));
    __this.fields.m_Object.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar5;
    __this.fields._0_8_ = in_stack_fffffffffffffea8;
    __this.fields.m_Object.fields._8_8_ = pIStack_100;
    __this.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIStack_f8;
    __this.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIStack_f0;
    __this.fields.m_Object.fields._32_8_ = pcStack_e8;
    __this.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pIStack_e0;
    __this.fields.m_Array.fields._8_8_ = pIStack_d8;
    __this.fields.m_Array.fields._current = pSStack_d0;
    pIVar13 = pIStack_100;
    pIVar14 = pIStack_f8;
    pIVar15 = pIStack_f0;
    pcVar16 = pcStack_e8;
    pIVar11 = pIStack_e0;
    pIVar17 = pIStack_d8;
    pSVar7 = pSStack_d0;
    bVar4 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext(__this,(MethodInfo *)&stack0xfffffffffffffeb8);
    if ((char)bVar4 != '\0') {
      do {
        __this_01.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar5;
        __this_01.fields._0_8_ = in_stack_fffffffffffffea8;
        __this_01.fields.m_Object.fields._8_8_ = pIVar13;
        __this_01.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIVar14;
        __this_01.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar15;
        __this_01.fields.m_Object.fields._32_8_ = pcVar16;
        __this_01.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pIVar11;
        __this_01.fields.m_Array.fields._8_8_ = pIVar17;
        __this_01.fields.m_Array.fields._current = pSVar7;
        SVar12 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                           (__this_01,(MethodInfo *)&stack0xfffffffffffffeb8);
        pSVar6 = SVar12.fields.key;
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar9 = (System_String_o *)SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0(SVar12,(MethodInfo *)0x0);
        if (pSVar9 == (System_String_o *)0x0) goto label_0409b12b;
        pSVar10 = (SimpleJSONFixed_JSONNode_o *)
                  (*(((SimpleJSONFixed_JSONNode_c *)pSVar9->klass)->vtable)._7_get_Item.methodPtr)
                            (pSVar9,"Name",
                             (((SimpleJSONFixed_JSONNode_c *)pSVar9->klass)->vtable)._7_get_Item.method);
        bVar4 = SimpleJSONFixed_JSONNode__op_Equality(pSVar10,(Il2CppObject *)pSVar5,(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          plVar8 = (long *)(*(((SimpleJSONFixed_JSONNode_c *)pSVar9->klass)->vtable)._7_get_Item.methodPtr)
                                     (pSVar9,"Maps",
                                      (((SimpleJSONFixed_JSONNode_c *)pSVar9->klass)->vtable)._7_get_Item.
                                      method);
          pSVar6 = pSVar9;
          if (plVar8 == (long *)0x0) goto label_0409b12b;
          (**(code **)(*plVar8 + 0x338))(&pIStack_100,plVar8,*(undefined8 *)(*plVar8 + 0x340));
          auStack_b8._64_8_ = _Stack_c0;
          auStack_b8._48_8_ = pSStack_d0;
          auStack_b8._56_8_ = _Stack_c8;
          auStack_b8._32_8_ = pIStack_e0;
          auStack_b8._40_8_ = pIStack_d8;
          auStack_b8._16_8_ = pIStack_f0;
          auStack_b8._24_8_ = pcStack_e8;
          auStack_b8._0_8_ = pIStack_100;
          auStack_b8._8_8_ = pIStack_f8;
          while (__this_02.fields.m_Object.fields._dictionary =
                      (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar5,
                __this_02.fields._0_8_ = in_stack_fffffffffffffea8,
                __this_02.fields.m_Object.fields._8_8_ = pIVar13,
                __this_02.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIVar14,
                __this_02.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar15,
                __this_02.fields.m_Object.fields._32_8_ = pcVar16,
                __this_02.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pIVar11,
                __this_02.fields.m_Array.fields._8_8_ = pIVar17,
                __this_02.fields.m_Array.fields._current = pSVar7,
                bVar4 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext(__this_02,(MethodInfo *)auStack_b8),
                (char)bVar4 != '\0') {
            __this_03.fields.m_Object.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar5;
            __this_03.fields._0_8_ = in_stack_fffffffffffffea8;
            __this_03.fields.m_Object.fields._8_8_ = pIVar13;
            __this_03.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIVar14;
            __this_03.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar15;
            __this_03.fields.m_Object.fields._32_8_ = pcVar16;
            __this_03.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pIVar11;
            __this_03.fields.m_Array.fields._8_8_ = pIVar17;
            __this_03.fields.m_Array.fields._current = pSVar7;
            SVar12 = SimpleJSONFixed_JSONNode_Enumerator__get_Current(__this_03,(MethodInfo *)auStack_b8);
            pSVar6 = SVar12.fields.key;
            if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar10 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0(SVar12,(MethodInfo *)0x0);
            if (pSVar10 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_0409b12b;
            pSVar10 = (SimpleJSONFixed_JSONNode_o *)
                      (*(pSVar10->klass->vtable)._7_get_Item.methodPtr)
                                (pSVar10,"Name",(pSVar10->klass->vtable)._7_get_Item.method);
            bVar4 = SimpleJSONFixed_JSONNode__op_Equality(pSVar10,(Il2CppObject *)b,(MethodInfo *)0x0);
            if ((char)bVar4 != '\0') {
              return;
            }
          }
        }
        __this_00.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar5;
        __this_00.fields._0_8_ = in_stack_fffffffffffffea8;
        __this_00.fields.m_Object.fields._8_8_ = pIVar13;
        __this_00.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIVar14;
        __this_00.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar15;
        __this_00.fields.m_Object.fields._32_8_ = pcVar16;
        __this_00.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pIVar11;
        __this_00.fields.m_Array.fields._8_8_ = pIVar17;
        __this_00.fields.m_Array.fields._current = pSVar7;
        bVar4 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                          (__this_00,(MethodInfo *)&stack0xfffffffffffffeb8);
      } while ((char)bVar4 != '\0');
    }
    return;
  }
label_0409b12b:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac46a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinLevels);
    il2cpp_runtime_helper_023445d0(&".txt");
    il2cpp_runtime_helper_023445d0(&"/");
    g_data_057ac46a = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar6 = System_String__Concat_3af7470
                     (*(System_String_o **)(*(long *)(TypeInfo_BuiltinLevels + 0xb8) + 0x10),"/",pSVar6,
                      ".txt",(MethodInfo *)0x0);
  bVar4 = System_IO_File__Exists(pSVar6,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    return;
  }
  System_IO_File__ReadAllText(pSVar6,(MethodInfo *)0x0);
  return;
}


// Map.BuiltinLevels$$LoadMap
// il2cpp: System_String_o* Map_BuiltinLevels__LoadMap (System_String_o* category, System_String_o* name, const MethodInfo* method);
// 0x409abc0

System_String_o *
Map_BuiltinLevels__LoadMap(System_String_o *category,System_String_o *name,MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_Enumerator_o __this;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_00;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_01;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_02;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_03;
  MethodInfo *method_00;
  char cVar1;
  uint uVar2;
  bool_conflict bVar3;
  System_String_o *pSVar4;
  SimpleJSONFixed_JSONNode_o *pSVar5;
  System_String_o *pSVar6;
  long *plVar7;
  System_String_o *str2;
  System_String_o *pSVar8;
  SimpleJSONFixed_JSONNode_o *pSVar9;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o SVar10;
  undefined8 in_stack_fffffffffffffec0;
  Il2CppMethodPointer pIVar11;
  Il2CppMethodPointer pIVar12;
  InvokerMethod pIVar13;
  char *pcVar14;
  Il2CppClass *pIVar15;
  Il2CppType *pIVar16;
  Il2CppMethodPointer pIStack_e8;
  Il2CppMethodPointer pIStack_e0;
  InvokerMethod pIStack_d8;
  char *pcStack_d0;
  Il2CppClass *pIStack_c8;
  Il2CppType *pIStack_c0;
  SimpleJSONFixed_JSONNode_o *pSStack_b8;
  _union_13 _Stack_b0;
  _union_14 _Stack_a8;
  undefined1 auStack_a0 [88];
  
  if (g_data_057ac469 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinLevels);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&"Custom");
    il2cpp_runtime_helper_023445d0(&".txt");
    il2cpp_runtime_helper_023445d0(&"/");
    il2cpp_runtime_helper_023445d0(&"Category");
    il2cpp_runtime_helper_023445d0(&"Map");
    g_data_057ac469 = '\x01';
  }
  uVar2 = System_String__op_Equality(category,"Custom",(MethodInfo *)0x0);
  method_00 = extraout_RDX;
  if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    method_00 = extraout_RDX_00;
  }
  if ((char)uVar2 != '\0') {
    pSVar4 = System_String__Concat_3af7470
                       (*(System_String_o **)(*(long *)(TypeInfo_BuiltinLevels + 0xb8) + 8),"/",name,
                        ".txt",(MethodInfo *)0x0);
    bVar3 = System_IO_File__Exists(pSVar4,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    pSVar4 = System_IO_File__ReadAllText(pSVar4,(MethodInfo *)0x0);
    return pSVar4;
  }
  pSVar4 = name;
  pSVar6 = category;
  pSVar5 = Map_BuiltinLevels__GetMap(category,name,method_00);
  if (pSVar5 != (SimpleJSONFixed_JSONNode_o *)0x0) {
    cVar1 = (*(pSVar5->klass->vtable)._28_HasKey.methodPtr)
                      (pSVar5,"Category",(pSVar5->klass->vtable)._28_HasKey.method);
    if (cVar1 != '\0') {
      pSVar5 = (SimpleJSONFixed_JSONNode_o *)
               (*(pSVar5->klass->vtable)._7_get_Item.methodPtr)
                         (pSVar5,"Category",(pSVar5->klass->vtable)._7_get_Item.method);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      category = SimpleJSONFixed_JSONNode__op_Implicit_3f79b00(pSVar5,(MethodInfo *)0x0);
    }
    if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar4 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 0x20);
    pSVar6 = System_String__Concat_3af7470(category,"/",name,"Map",(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar4 = ApplicationManagers_ResourceManager__TryLoadText(pSVar4,pSVar6,(MethodInfo *)0x0);
    return pSVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  auStack_a0._72_8_ = (ulong)uVar2;
  auStack_a0._80_8_ = category;
  if (g_data_057ac482 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinLevels);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&"MapCategories");
    il2cpp_runtime_helper_023445d0(&"Maps");
    il2cpp_runtime_helper_023445d0(&"Name");
    g_data_057ac482 = '\x01';
  }
  auStack_a0._48_8_ = (SimpleJSONFixed_JSONNode_o *)0x0;
  auStack_a0._56_8_ = (Il2CppRGCTXData *)0x0;
  auStack_a0._32_8_ = (Il2CppClass *)0x0;
  auStack_a0._40_8_ = (Il2CppType *)0x0;
  auStack_a0._16_8_ = (InvokerMethod)0x0;
  auStack_a0._24_8_ = (char *)0x0;
  auStack_a0._0_8_ = (Il2CppMethodPointer)0x0;
  auStack_a0._8_8_ = (Il2CppMethodPointer)0x0;
  auStack_a0._64_8_ = (void *)0x0;
  if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  str2 = (System_String_o *)**(long **)(TypeInfo_BuiltinLevels + 0xb8);
  if ((str2 != (System_String_o *)0x0) &&
     (plVar7 = (long *)(*(((SimpleJSONFixed_JSONNode_c *)str2->klass)->vtable)._7_get_Item.methodPtr)
                                 (str2,"MapCategories",
                                  (((SimpleJSONFixed_JSONNode_c *)str2->klass)->vtable)._7_get_Item.method),
     plVar7 != (long *)0x0)) {
    (**(code **)(*plVar7 + 0x338))(&pIStack_e8,plVar7,*(undefined8 *)(*plVar7 + 0x340));
    __this.fields.m_Object.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar6;
    __this.fields._0_8_ = in_stack_fffffffffffffec0;
    __this.fields.m_Object.fields._8_8_ = pIStack_e8;
    __this.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIStack_e0;
    __this.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIStack_d8;
    __this.fields.m_Object.fields._32_8_ = pcStack_d0;
    __this.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pIStack_c8;
    __this.fields.m_Array.fields._8_8_ = pIStack_c0;
    __this.fields.m_Array.fields._current = pSStack_b8;
    pIVar11 = pIStack_e8;
    pIVar12 = pIStack_e0;
    pIVar13 = pIStack_d8;
    pcVar14 = pcStack_d0;
    pIVar15 = pIStack_c8;
    pIVar16 = pIStack_c0;
    pSVar5 = pSStack_b8;
    bVar3 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext(__this,(MethodInfo *)&stack0xfffffffffffffed0);
    if ((char)bVar3 != '\0') {
      do {
        __this_01.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar6;
        __this_01.fields._0_8_ = in_stack_fffffffffffffec0;
        __this_01.fields.m_Object.fields._8_8_ = pIVar11;
        __this_01.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIVar12;
        __this_01.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar13;
        __this_01.fields.m_Object.fields._32_8_ = pcVar14;
        __this_01.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pIVar15;
        __this_01.fields.m_Array.fields._8_8_ = pIVar16;
        __this_01.fields.m_Array.fields._current = pSVar5;
        SVar10 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                           (__this_01,(MethodInfo *)&stack0xfffffffffffffed0);
        str2 = SVar10.fields.key;
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar8 = (System_String_o *)SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0(SVar10,(MethodInfo *)0x0);
        if (pSVar8 == (System_String_o *)0x0) goto label_0409b12b;
        pSVar9 = (SimpleJSONFixed_JSONNode_o *)
                 (*(((SimpleJSONFixed_JSONNode_c *)pSVar8->klass)->vtable)._7_get_Item.methodPtr)
                           (pSVar8,"Name",
                            (((SimpleJSONFixed_JSONNode_c *)pSVar8->klass)->vtable)._7_get_Item.method);
        bVar3 = SimpleJSONFixed_JSONNode__op_Equality(pSVar9,(Il2CppObject *)pSVar6,(MethodInfo *)0x0);
        if ((char)bVar3 != '\0') {
          plVar7 = (long *)(*(((SimpleJSONFixed_JSONNode_c *)pSVar8->klass)->vtable)._7_get_Item.methodPtr)
                                     (pSVar8,"Maps",
                                      (((SimpleJSONFixed_JSONNode_c *)pSVar8->klass)->vtable)._7_get_Item.
                                      method);
          str2 = pSVar8;
          if (plVar7 == (long *)0x0) goto label_0409b12b;
          (**(code **)(*plVar7 + 0x338))(&pIStack_e8,plVar7,*(undefined8 *)(*plVar7 + 0x340));
          auStack_a0._64_8_ = _Stack_a8;
          auStack_a0._48_8_ = pSStack_b8;
          auStack_a0._56_8_ = _Stack_b0;
          auStack_a0._32_8_ = pIStack_c8;
          auStack_a0._40_8_ = pIStack_c0;
          auStack_a0._16_8_ = pIStack_d8;
          auStack_a0._24_8_ = pcStack_d0;
          auStack_a0._0_8_ = pIStack_e8;
          auStack_a0._8_8_ = pIStack_e0;
          while (__this_02.fields.m_Object.fields._dictionary =
                      (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar6,
                __this_02.fields._0_8_ = in_stack_fffffffffffffec0,
                __this_02.fields.m_Object.fields._8_8_ = pIVar11,
                __this_02.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIVar12,
                __this_02.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar13,
                __this_02.fields.m_Object.fields._32_8_ = pcVar14,
                __this_02.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pIVar15,
                __this_02.fields.m_Array.fields._8_8_ = pIVar16,
                __this_02.fields.m_Array.fields._current = pSVar5,
                bVar3 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext(__this_02,(MethodInfo *)auStack_a0),
                (char)bVar3 != '\0') {
            __this_03.fields.m_Object.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar6;
            __this_03.fields._0_8_ = in_stack_fffffffffffffec0;
            __this_03.fields.m_Object.fields._8_8_ = pIVar11;
            __this_03.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIVar12;
            __this_03.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar13;
            __this_03.fields.m_Object.fields._32_8_ = pcVar14;
            __this_03.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pIVar15;
            __this_03.fields.m_Array.fields._8_8_ = pIVar16;
            __this_03.fields.m_Array.fields._current = pSVar5;
            SVar10 = SimpleJSONFixed_JSONNode_Enumerator__get_Current(__this_03,(MethodInfo *)auStack_a0);
            str2 = SVar10.fields.key;
            if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar8 = (System_String_o *)
                     SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0(SVar10,(MethodInfo *)0x0);
            if (pSVar8 == (System_String_o *)0x0) goto label_0409b12b;
            pSVar9 = (SimpleJSONFixed_JSONNode_o *)
                     (*(((SimpleJSONFixed_JSONNode_c *)pSVar8->klass)->vtable)._7_get_Item.methodPtr)
                               (pSVar8,"Name",
                                (((SimpleJSONFixed_JSONNode_c *)pSVar8->klass)->vtable)._7_get_Item.method);
            bVar3 = SimpleJSONFixed_JSONNode__op_Equality(pSVar9,(Il2CppObject *)pSVar4,(MethodInfo *)0x0);
            if ((char)bVar3 != '\0') {
              return pSVar8;
            }
          }
        }
        __this_00.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar6;
        __this_00.fields._0_8_ = in_stack_fffffffffffffec0;
        __this_00.fields.m_Object.fields._8_8_ = pIVar11;
        __this_00.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIVar12;
        __this_00.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar13;
        __this_00.fields.m_Object.fields._32_8_ = pcVar14;
        __this_00.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pIVar15;
        __this_00.fields.m_Array.fields._8_8_ = pIVar16;
        __this_00.fields.m_Array.fields._current = pSVar5;
        bVar3 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                          (__this_00,(MethodInfo *)&stack0xfffffffffffffed0);
      } while ((char)bVar3 != '\0');
    }
    return (System_String_o *)0x0;
  }
label_0409b12b:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac46a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinLevels);
    il2cpp_runtime_helper_023445d0(&".txt");
    il2cpp_runtime_helper_023445d0(&"/");
    g_data_057ac46a = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar4 = System_String__Concat_3af7470
                     (*(System_String_o **)(*(long *)(TypeInfo_BuiltinLevels + 0xb8) + 0x10),"/",str2,
                      ".txt",(MethodInfo *)0x0);
  bVar3 = System_IO_File__Exists(pSVar4,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  pSVar4 = System_IO_File__ReadAllText(pSVar4,(MethodInfo *)0x0);
  return pSVar4;
}


// Map.BuiltinLevels$$LoadAutosave
// il2cpp: System_String_o* Map_BuiltinLevels__LoadAutosave (System_String_o* name, const MethodInfo* method);
// 0x409b130

System_String_o * Map_BuiltinLevels__LoadAutosave(System_String_o *name,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  
  if (g_data_057ac46a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinLevels);
    il2cpp_runtime_helper_023445d0(&".txt");
    il2cpp_runtime_helper_023445d0(&"/");
    g_data_057ac46a = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = System_String__Concat_3af7470
                     (*(System_String_o **)(*(long *)(TypeInfo_BuiltinLevels + 0xb8) + 0x10),"/",name,
                      ".txt",(MethodInfo *)0x0);
  bVar1 = System_IO_File__Exists(pSVar2,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    pSVar2 = System_IO_File__ReadAllText(pSVar2,(MethodInfo *)0x0);
    return pSVar2;
  }
  return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
}


// Map.BuiltinLevels$$LoadLogic
// il2cpp: System_String_o* Map_BuiltinLevels__LoadLogic (System_String_o* name, const MethodInfo* method);
// 0x409b200

System_String_o * Map_BuiltinLevels__LoadLogic(System_String_o *name,MethodInfo *method)

{
  int32_t *piVar1;
  ulong *puVar2;
  long lVar3;
  System_Collections_Generic_KeyValuePair_string__JSONNode__Fields SVar4;
  SimpleJSONFixed_JSONNode_Enumerator_o __this;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_00;
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
  SimpleJSONFixed_JSONNode_Enumerator_o __this_12;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_13;
  bool_conflict bVar5;
  uint uVar6;
  long *plVar7;
  SimpleJSONFixed_JSONNode_o *pSVar8;
  System_String_o *pSVar9;
  System_String_o *pSVar10;
  System_Collections_Generic_List_object__o *pSVar11;
  long *plVar12;
  System_Object_array *pSVar13;
  System_String_array *pSVar14;
  SimpleJSONFixed_JSONNode_o *pSVar15;
  SimpleJSONFixed_JSONNode_o *a;
  System_Func_TSource__TResult__o *selector;
  System_Collections_Generic_IEnumerable_TResult__o *source;
  SimpleJSONFixed_JSONNode_c *in_RCX;
  ulong uVar16;
  SimpleJSONFixed_JSONNode_c *pSVar17;
  uint uVar18;
  long *plVar19;
  MethodInfo *pMVar20;
  SimpleJSONFixed_JSONNode_o *unaff_R12;
  SimpleJSONFixed_JSONNode_o *unaff_R13;
  undefined1 *unaff_R15;
  System_String_o **ppSVar21;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o SVar22;
  System_Collections_Generic_KeyValuePair_string__JSONNode__Fields aKeyValue;
  System_Collections_Generic_KeyValuePair_string__JSONNode__Fields aKeyValue_00;
  System_Collections_Generic_KeyValuePair_string__JSONNode__Fields aKeyValue_01;
  undefined8 in_stack_fffffffffffffc80;
  Il2CppMethodPointer pIVar23;
  Il2CppMethodPointer pIVar24;
  InvokerMethod pIVar25;
  char *pcVar26;
  Il2CppClass *pIVar27;
  Il2CppType *pIVar28;
  undefined1 auStack_320 [80];
  Il2CppMethodPointer pIStack_2d0;
  Il2CppMethodPointer pIStack_2c8;
  InvokerMethod pIStack_2c0;
  char *pcStack_2b8;
  Il2CppClass *pIStack_2b0;
  Il2CppType *pIStack_2a8;
  SimpleJSONFixed_JSONNode_o *pSStack_2a0;
  _union_13 _Stack_298;
  _union_14 _Stack_290;
  System_String_o *pSStack_288;
  SimpleJSONFixed_JSONNode_o *pSStack_280;
  SimpleJSONFixed_JSONNode_o *pSStack_278;
  SimpleJSONFixed_JSONNode_o *pSStack_270;
  System_Collections_Generic_List_object__o *pSStack_268;
  long *plStack_260;
  System_String_c *pSVar29;
  System_String_Fields SVar30;
  Il2CppType **ppIVar31;
  _union_13 _Var32;
  _union_14 _Var33;
  System_String_c *pSStack_208;
  Il2CppMethodPointer pIStack_200;
  System_String_Fields SStack_1f8;
  char *pcStack_1f0;
  Il2CppClass *pIStack_1e8;
  Il2CppType *pIStack_1e0;
  Il2CppType **ppIStack_1d8;
  _union_13 _Stack_1d0;
  _union_14 _Stack_1c8;
  System_String_o *pSStack_1c0;
  SimpleJSONFixed_JSONNode_o *pSStack_1b8;
  SimpleJSONFixed_JSONNode_o *pSStack_1b0;
  System_String_o *pSStack_1a8;
  System_String_o *pSStack_1a0;
  long *plStack_198;
  SimpleJSONFixed_JSONNode_c *pSVar34;
  SimpleJSONFixed_JSONNode_c *pSStack_140;
  Il2CppMethodPointer pIStack_138;
  InvokerMethod pIStack_130;
  char *pcStack_128;
  Il2CppClass *pIStack_120;
  Il2CppType *pIStack_118;
  Il2CppType **ppIStack_110;
  _union_13 _Stack_108;
  _union_14 _Stack_100;
  System_String_o *pSStack_f8;
  SimpleJSONFixed_JSONNode_o *pSStack_f0;
  SimpleJSONFixed_JSONNode_o *pSStack_e8;
  System_String_o *pSStack_e0;
  undefined1 *puStack_d8;
  code *pcStack_d0;
  Il2CppMethodPointer local_78;
  Il2CppMethodPointer pIStack_70;
  InvokerMethod local_68;
  char *pcStack_60;
  Il2CppClass *local_58;
  Il2CppType *pIStack_50;
  Il2CppType **local_48;
  _union_13 _Stack_40;
  _union_14 local_38;
  
  if (g_data_057ac46b == '\0') {
    pcStack_d0 = (code *)0x409b22d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinLevels);
    pcStack_d0 = (code *)0x409b239;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    pcStack_d0 = (code *)0x409b245;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    pcStack_d0 = (code *)0x409b251;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    pcStack_d0 = (code *)0x409b25d;
    il2cpp_runtime_helper_023445d0(&"Name");
    pcStack_d0 = (code *)0x409b269;
    il2cpp_runtime_helper_023445d0(&".txt");
    pcStack_d0 = (code *)0x409b275;
    il2cpp_runtime_helper_023445d0(&"/");
    pcStack_d0 = (code *)0x409b281;
    il2cpp_runtime_helper_023445d0(&".cl");
    pcStack_d0 = (code *)0x409b28d;
    il2cpp_runtime_helper_023445d0(&"Logic");
    pcStack_d0 = (code *)0x409b299;
    il2cpp_runtime_helper_023445d0(&"");
    pcStack_d0 = (code *)0x409b2a5;
    il2cpp_runtime_helper_023445d0(&"GameModes");
    g_data_057ac46b = '\x01';
  }
  pcStack_d0 = (code *)0x409b2df;
  bVar5 = System_String__op_Equality(name,"",(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
label_0409b2e3:
    return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  plVar19 = &TypeInfo_BuiltinLevels;
  if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
    pcStack_d0 = (code *)0x409b319;
    il2cpp_runtime_helper_02337ed0();
  }
  pcStack_d0 = (code *)0x409b332;
  uVar6 = System_String__op_Equality
                    (name,*(System_String_o **)(*(long *)(TypeInfo_BuiltinLevels + 0xb8) + 0x28),(MethodInfo *)0x0);
  pSVar10 = (System_String_o *)(ulong)uVar6;
  if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
    pcStack_d0 = (code *)0x409b35a;
    il2cpp_runtime_helper_02337ed0();
    puVar2 = *(ulong **)(TypeInfo_BuiltinLevels + 0xb8);
  }
  else {
    puVar2 = *(ulong **)(TypeInfo_BuiltinLevels + 0xb8);
  }
  if ((char)uVar6 != '\0') {
    return (System_String_o *)puVar2[5];
  }
  pSVar9 = (System_String_o *)*puVar2;
  if (pSVar9 != (System_String_o *)0x0) {
    pcStack_d0 = (code *)0x409b38f;
    plVar7 = (long *)(*(pSVar9->klass->vtable)._7_CompareTo.methodPtr)
                               (pSVar9,"GameModes",(pSVar9->klass->vtable)._7_CompareTo.method);
    if (plVar7 != (long *)0x0) {
      in_RCX = (SimpleJSONFixed_JSONNode_c *)*plVar7;
      pcStack_d0 = (code *)0x409b3b0;
      (*(in_RCX->vtable)._32_unknown.methodPtr)(&local_78,plVar7,(in_RCX->vtable)._32_unknown.method);
      plVar19 = &TypeInfo_JSONNode;
      unaff_R13 = (SimpleJSONFixed_JSONNode_o *)&"Name";
      pIVar23 = local_78;
      pIVar24 = pIStack_70;
      pIVar25 = local_68;
      pcVar26 = pcStack_60;
      pIVar27 = local_58;
      pIVar28 = pIStack_50;
      ppIVar31 = local_48;
      _Var32 = _Stack_40;
      _Var33 = local_38;
      while( true ) {
        pcStack_d0 = (code *)0x409b40a;
        __this_12.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar24;
        __this_12.fields._0_8_ = pIVar23;
        __this_12.fields.m_Object.fields._8_8_ = pIVar25;
        __this_12.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar26;
        __this_12.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar27;
        __this_12.fields.m_Object.fields._32_8_ = pIVar28;
        __this_12.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar31;
        __this_12.fields.m_Array.fields._8_8_ = _Var32.rgctx_data;
        __this_12.fields.m_Array.fields._current = _Var33.genericMethod;
        bVar5 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                          (__this_12,(MethodInfo *)&stack0xffffffffffffff38);
        if ((char)bVar5 == '\0') break;
        pcStack_d0 = (code *)0x409b41c;
        __this_13.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar24;
        __this_13.fields._0_8_ = pIVar23;
        __this_13.fields.m_Object.fields._8_8_ = pIVar25;
        __this_13.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar26;
        __this_13.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar27;
        __this_13.fields.m_Object.fields._32_8_ = pIVar28;
        __this_13.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar31;
        __this_13.fields.m_Array.fields._8_8_ = _Var32.rgctx_data;
        __this_13.fields.m_Array.fields._current = _Var33.genericMethod;
        SVar22 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                           (__this_13,(MethodInfo *)&stack0xffffffffffffff38);
        unaff_R12 = SVar22.fields.value;
        pSVar10 = SVar22.fields.key;
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          pcStack_d0 = (code *)0x409b434;
          il2cpp_runtime_helper_02337ed0();
        }
        pcStack_d0 = (code *)0x409b441;
        pSVar9 = pSVar10;
        pSVar8 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0(SVar22,(MethodInfo *)0x0);
        unaff_R15 = &stack0xffffffffffffff38;
        if (pSVar8 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_0409b59b;
        in_RCX = pSVar8->klass;
        pcStack_d0 = (code *)0x409b461;
        pSVar8 = (SimpleJSONFixed_JSONNode_o *)
                 (*(in_RCX->vtable)._7_get_Item.methodPtr)
                           (pSVar8,"Name",(in_RCX->vtable)._7_get_Item.method);
        pcStack_d0 = (code *)0x409b46e;
        bVar5 = SimpleJSONFixed_JSONNode__op_Equality(pSVar8,(Il2CppObject *)name,(MethodInfo *)0x0);
        if ((char)bVar5 != '\0') {
          if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
            pcStack_d0 = (code *)0x409b48a;
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar10 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 0x28);
          pcStack_d0 = (code *)0x409b4ac;
          pSVar9 = System_String__Concat_3ae5ba0(name,"Logic",(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
            pcStack_d0 = (code *)0x409b4c7;
            il2cpp_runtime_helper_02337ed0();
          }
          pcStack_d0 = (code *)0x409b4d4;
          pSVar10 = ApplicationManagers_ResourceManager__TryLoadText(pSVar10,pSVar9,(MethodInfo *)0x0);
          return pSVar10;
        }
      }
      if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
        pcStack_d0 = (code *)0x409b4f2;
        il2cpp_runtime_helper_02337ed0();
      }
      pcStack_d0 = (code *)0x409b520;
      pSVar10 = System_String__Concat_3af7470
                          (*(System_String_o **)(*(long *)(TypeInfo_BuiltinLevels + 0xb8) + 0x18),"/",name,
                           ".cl",(MethodInfo *)0x0);
      pcStack_d0 = (code *)0x409b52d;
      bVar5 = System_IO_File__Exists(pSVar10,(MethodInfo *)0x0);
      if ((char)bVar5 == '\0') {
        if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
          pcStack_d0 = (code *)0x409b543;
          il2cpp_runtime_helper_02337ed0();
        }
        pcStack_d0 = (code *)0x409b56a;
        pSVar10 = System_String__Concat_3af7470
                            (*(System_String_o **)(*(long *)(TypeInfo_BuiltinLevels + 0xb8) + 0x18),"/",name,
                             ".txt",(MethodInfo *)0x0);
        pcStack_d0 = (code *)0x409b577;
        bVar5 = System_IO_File__Exists(pSVar10,(MethodInfo *)0x0);
        if ((char)bVar5 == '\0') goto label_0409b2e3;
      }
      pcStack_d0 = (code *)0x409b589;
      pSVar10 = System_IO_File__ReadAllText(pSVar10,(MethodInfo *)0x0);
      return pSVar10;
    }
  }
label_0409b59b:
  pcStack_d0 = Map_BuiltinLevels__IsLogicBuiltin;
  il2cpp_runtime_helper_022b2c90();
  pSStack_f8 = pSVar10;
  pSStack_f0 = unaff_R12;
  pSStack_e8 = unaff_R13;
  pSStack_e0 = name;
  puStack_d8 = unaff_R15;
  pcStack_d0 = (code *)plVar19;
  if (g_data_057ac46c == '\0') {
    plStack_198 = (long *)0x409b5c9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinLevels);
    plStack_198 = (long *)0x409b5d5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    plStack_198 = (long *)0x409b5e1;
    il2cpp_runtime_helper_023445d0(&"Name");
    plStack_198 = (long *)0x409b5ed;
    il2cpp_runtime_helper_023445d0(&"GameModes");
    g_data_057ac46c = '\x01';
  }
  SVar4.value = unaff_R13;
  SVar4.key = (System_String_o *)&TypeInfo_BuiltinLevels;
  aKeyValue.value = unaff_R13;
  aKeyValue.key = (System_String_o *)&TypeInfo_BuiltinLevels;
  if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
    plStack_198 = (long *)0x409b62b;
    il2cpp_runtime_helper_02337ed0();
  }
  plStack_198 = (long *)0x409b643;
  bVar5 = System_String__op_Equality
                    (pSVar9,*(System_String_o **)(*(long *)(TypeInfo_BuiltinLevels + 0xb8) + 0x28),(MethodInfo *)0x0);
  uVar16 = CONCAT71((int7)((ulong)in_RCX >> 8),1);
  if ((char)bVar5 != '\0') {
label_0409b76f:
    return (System_String_o *)(uVar16 & 0xffffffff);
  }
  if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
    plStack_198 = (long *)0x409b65e;
    il2cpp_runtime_helper_02337ed0();
  }
  plVar7 = (long *)**(long **)(TypeInfo_BuiltinLevels + 0xb8);
  if (plVar7 != (long *)0x0) {
    plStack_198 = (long *)0x409b68e;
    plVar7 = (long *)(**(code **)(*plVar7 + 0x1a8))(plVar7,"GameModes",*(undefined8 *)(*plVar7 + 0x1b0));
    aKeyValue = SVar4;
    if (plVar7 != (long *)0x0) {
      plStack_198 = (long *)0x409b6af;
      (**(code **)(*plVar7 + 0x338))(&pSStack_140,plVar7,*(undefined8 *)(*plVar7 + 0x340));
      plVar19 = &TypeInfo_JSONNode;
      name = (System_String_o *)&"Name";
      pSVar34 = pSStack_140;
      pIVar23 = pIStack_138;
      pIVar25 = pIStack_130;
      pcVar26 = pcStack_128;
      pIVar27 = pIStack_120;
      pIVar28 = pIStack_118;
      ppIVar31 = ppIStack_110;
      _Var32 = _Stack_108;
      _Var33 = _Stack_100;
      do {
        plStack_198 = (long *)0x409b70a;
        __this_10.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar23;
        __this_10.fields._0_8_ = pSVar34;
        __this_10.fields.m_Object.fields._8_8_ = pIVar25;
        __this_10.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar26;
        __this_10.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar27;
        __this_10.fields.m_Object.fields._32_8_ = pIVar28;
        __this_10.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar31;
        __this_10.fields.m_Array.fields._8_8_ = _Var32.rgctx_data;
        __this_10.fields.m_Array.fields._current = _Var33.genericMethod;
        bVar5 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                          (__this_10,(MethodInfo *)&stack0xfffffffffffffe70);
        if ((char)bVar5 == '\0') {
          uVar16 = 0;
          goto label_0409b76f;
        }
        plStack_198 = (long *)0x409b718;
        __this_11.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar23;
        __this_11.fields._0_8_ = pSVar34;
        __this_11.fields.m_Object.fields._8_8_ = pIVar25;
        __this_11.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar26;
        __this_11.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar27;
        __this_11.fields.m_Object.fields._32_8_ = pIVar28;
        __this_11.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar31;
        __this_11.fields.m_Array.fields._8_8_ = _Var32.rgctx_data;
        __this_11.fields.m_Array.fields._current = _Var33.genericMethod;
        aKeyValue = (System_Collections_Generic_KeyValuePair_string__JSONNode__Fields)
                    SimpleJSONFixed_JSONNode_Enumerator__get_Current
                              (__this_11,(MethodInfo *)&stack0xfffffffffffffe70);
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          plStack_198 = (long *)0x409b730;
          il2cpp_runtime_helper_02337ed0();
        }
        plStack_198 = (long *)0x409b73d;
        pSVar8 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0
                           ((System_Collections_Generic_KeyValuePair_string__JSONNode__o)aKeyValue,
                            (MethodInfo *)0x0);
        unaff_R12 = (SimpleJSONFixed_JSONNode_o *)&stack0xfffffffffffffe70;
        if (pSVar8 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_0409b783;
        pSVar17 = pSVar8->klass;
        plStack_198 = (long *)0x409b758;
        pSVar8 = (SimpleJSONFixed_JSONNode_o *)
                 (*(pSVar17->vtable)._7_get_Item.methodPtr)
                           (pSVar8,"Name",(pSVar17->vtable)._7_get_Item.method);
        plStack_198 = (long *)0x409b765;
        bVar5 = SimpleJSONFixed_JSONNode__op_Equality(pSVar8,(Il2CppObject *)pSVar9,(MethodInfo *)0x0);
      } while ((char)bVar5 == '\0');
      uVar16 = CONCAT71((int7)((ulong)pSVar17 >> 8),1);
      goto label_0409b76f;
    }
  }
label_0409b783:
  plVar7 = (long *)aKeyValue.value;
  plStack_198 = (long *)0x409b788;
  il2cpp_runtime_helper_022b2c90();
  pSStack_1b8 = unaff_R12;
  pSStack_1a8 = name;
  pSStack_1a0 = pSVar9;
  plStack_198 = plVar19;
  if (g_data_057ac46d == '\0') {
    plStack_260 = (long *)0x409b7b6;
    pSStack_1c0 = aKeyValue.key;
    pSStack_1b0 = (SimpleJSONFixed_JSONNode_o *)plVar7;
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinLevels);
    plStack_260 = (long *)0x409b7c2;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    plStack_260 = (long *)0x409b7ce;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    plStack_260 = (long *)0x409b7da;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    plStack_260 = (long *)0x409b7e6;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    plStack_260 = (long *)0x409b7f2;
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    plStack_260 = (long *)0x409b7fe;
    il2cpp_runtime_helper_023445d0(&"MapCategories");
    plStack_260 = (long *)0x409b80a;
    il2cpp_runtime_helper_023445d0(&"Custom");
    plStack_260 = (long *)0x409b816;
    il2cpp_runtime_helper_023445d0(&"Name");
    aKeyValue.value = pSStack_1b0;
    aKeyValue.key = pSStack_1c0;
    g_data_057ac46d = '\x01';
  }
  pSStack_1b0 = aKeyValue.value;
  pSStack_1c0 = aKeyValue.key;
  plStack_260 = (long *)0x409b84b;
  pSVar11 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  plStack_260 = (long *)0x409b860;
  System_Collections_Generic_List_object____ctor(pSVar11,MethodInfo_List_1_System_String);
  aKeyValue_00.value = unaff_R12;
  aKeyValue_00.key = (System_String_o *)&TypeInfo_BuiltinLevels;
  if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
    plStack_260 = (long *)0x409b878;
    il2cpp_runtime_helper_02337ed0();
  }
  plVar12 = (long *)**(long **)(TypeInfo_BuiltinLevels + 0xb8);
  if (plVar12 != (long *)0x0) {
    plStack_260 = (long *)0x409b8a8;
    plVar12 = (long *)(**(code **)(*plVar12 + 0x1a8))(plVar12,"MapCategories",*(undefined8 *)(*plVar12 + 0x1b0));
    if (plVar12 != (long *)0x0) {
      plStack_260 = (long *)0x409b8c9;
      (**(code **)(*plVar12 + 0x338))(&pSStack_208,plVar12,*(undefined8 *)(*plVar12 + 0x340));
      plStack_260 = (long *)0x409b90a;
      __this_06.fields.m_Object.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIStack_200;
      __this_06.fields._0_8_ = pSStack_208;
      __this_06.fields.m_Object.fields._8_8_ = SStack_1f8;
      __this_06.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcStack_1f0;
      __this_06.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIStack_1e8;
      __this_06.fields.m_Object.fields._32_8_ = pIStack_1e0;
      __this_06.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIStack_1d8;
      __this_06.fields.m_Array.fields._8_8_ = _Stack_1d0.rgctx_data;
      __this_06.fields.m_Array.fields._current = _Stack_1c8.genericMethod;
      bVar5 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext(__this_06,(MethodInfo *)&stack0xfffffffffffffda8);
      if ((char)bVar5 == '\0') {
        if (pSVar11 != (System_Collections_Generic_List_object__o *)0x0) goto label_0409ba08;
      }
      else if (pSVar11 == (System_Collections_Generic_List_object__o *)0x0) {
        plStack_260 = (long *)0x409ba97;
        __this_09.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIStack_200;
        __this_09.fields._0_8_ = pSStack_208;
        __this_09.fields.m_Object.fields._8_8_ = SStack_1f8;
        __this_09.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcStack_1f0;
        __this_09.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIStack_1e8;
        __this_09.fields.m_Object.fields._32_8_ = pIStack_1e0;
        __this_09.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIStack_1d8;
        __this_09.fields.m_Array.fields._8_8_ = _Stack_1d0.rgctx_data;
        __this_09.fields.m_Array.fields._current = _Stack_1c8.genericMethod;
        aKeyValue_01 = (System_Collections_Generic_KeyValuePair_string__JSONNode__Fields)
                       SimpleJSONFixed_JSONNode_Enumerator__get_Current
                                 (__this_09,(MethodInfo *)&stack0xfffffffffffffda8);
        name = (System_String_o *)aKeyValue_01.value;
        aKeyValue_00.key = aKeyValue_01.key;
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          plStack_260 = (long *)0x409bab5;
          il2cpp_runtime_helper_02337ed0();
        }
        plStack_260 = (long *)0x409bac2;
        pSVar8 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0
                           ((System_Collections_Generic_KeyValuePair_string__JSONNode__o)aKeyValue_01,
                            (MethodInfo *)0x0);
        if (pSVar8 != (SimpleJSONFixed_JSONNode_o *)0x0) goto label_0409bacc;
      }
      else {
        plVar19 = &"Name";
        plVar7 = &MethodInfo_Void_Add;
        pSVar29 = pSStack_208;
        pIVar23 = pIStack_200;
        SVar30 = SStack_1f8;
        pcVar26 = pcStack_1f0;
        pIVar27 = pIStack_1e8;
        pIVar28 = pIStack_1e0;
        ppIVar31 = ppIStack_1d8;
        _Var32 = _Stack_1d0;
        _Var33 = _Stack_1c8;
        do {
          plStack_260 = (long *)0x409b966;
          __this_08.fields.m_Object.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar23;
          __this_08.fields._0_8_ = pSVar29;
          __this_08.fields.m_Object.fields._8_8_ = SVar30;
          __this_08.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar26;
          __this_08.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar27;
          __this_08.fields.m_Object.fields._32_8_ = pIVar28;
          __this_08.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar31;
          __this_08.fields.m_Array.fields._8_8_ = _Var32.rgctx_data;
          __this_08.fields.m_Array.fields._current = _Var33.genericMethod;
          aKeyValue_00 = (System_Collections_Generic_KeyValuePair_string__JSONNode__Fields)
                         SimpleJSONFixed_JSONNode_Enumerator__get_Current
                                   (__this_08,(MethodInfo *)&stack0xfffffffffffffda8);
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            plStack_260 = (long *)0x409b984;
            il2cpp_runtime_helper_02337ed0();
          }
          plStack_260 = (long *)0x409b991;
          pSVar8 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0
                             ((System_Collections_Generic_KeyValuePair_string__JSONNode__o)aKeyValue_00,
                              (MethodInfo *)0x0);
          name = (System_String_o *)&stack0xfffffffffffffda8;
          if (pSVar8 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_0409bac7;
          plStack_260 = (long *)0x409b9b1;
          pSVar8 = (SimpleJSONFixed_JSONNode_o *)
                   (*(pSVar8->klass->vtable)._7_get_Item.methodPtr)
                             (pSVar8,"Name",(pSVar8->klass->vtable)._7_get_Item.method);
          plStack_260 = (long *)0x409b9bb;
          pSVar10 = SimpleJSONFixed_JSONNode__op_Implicit_3f79b00(pSVar8,(MethodInfo *)0x0);
          lVar3 = MethodInfo_Void_Add;
          piVar1 = &(pSVar11->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar13 = (pSVar11->fields)._items;
          name = (System_String_o *)&stack0xfffffffffffffda8;
          if (pSVar13 == (System_Object_array *)0x0) goto label_0409bac7;
          uVar6 = (pSVar11->fields)._size;
          if (uVar6 < (uint)pSVar13->max_length) {
            (pSVar11->fields)._size = uVar6 + 1;
            pSVar13->m_Items[(int)uVar6] = (Il2CppObject *)pSVar10;
            plStack_260 = (long *)0x409b9fa;
            il2cpp_runtime_helper_022b4080(pSVar13->m_Items + (int)uVar6,pSVar10);
          }
          else {
            plStack_260 = (long *)0x409b94a;
            System_Collections_Generic_List_object___AddWithResize
                      (pSVar11,(Il2CppObject *)pSVar10,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
          }
          plStack_260 = (long *)0x409b954;
          __this_07.fields.m_Object.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar23;
          __this_07.fields._0_8_ = pSVar29;
          __this_07.fields.m_Object.fields._8_8_ = SVar30;
          __this_07.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar26;
          __this_07.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar27;
          __this_07.fields.m_Object.fields._32_8_ = pIVar28;
          __this_07.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar31;
          __this_07.fields.m_Array.fields._8_8_ = _Var32.rgctx_data;
          __this_07.fields.m_Array.fields._current = _Var33.genericMethod;
          bVar5 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                            (__this_07,(MethodInfo *)&stack0xfffffffffffffda8);
          name = (System_String_o *)&stack0xfffffffffffffda8;
        } while ((char)bVar5 != '\0');
label_0409ba08:
        pMVar20 = "Custom";
        lVar3 = MethodInfo_Void_Add;
        piVar1 = &(pSVar11->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar13 = (pSVar11->fields)._items;
        if (pSVar13 != (System_Object_array *)0x0) {
          uVar6 = (pSVar11->fields)._size;
          if (uVar6 < (uint)pSVar13->max_length) {
            (pSVar11->fields)._size = uVar6 + 1;
            pSVar13->m_Items[(int)uVar6] = (Il2CppObject *)pMVar20;
            plStack_260 = (long *)0x409ba50;
            il2cpp_runtime_helper_022b4080(pSVar13->m_Items + (int)uVar6);
          }
          else {
            plStack_260 = (long *)0x409ba69;
            System_Collections_Generic_List_object___AddWithResize
                      (pSVar11,(Il2CppObject *)pMVar20,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
          }
          plStack_260 = (long *)0x409ba7b;
          pSVar13 = System_Collections_Generic_List_object___ToArray(pSVar11,MethodInfo_String_ToArray);
          return (System_String_o *)pSVar13;
        }
      }
    }
  }
label_0409bac7:
  unaff_R12 = aKeyValue_00.value;
  aKeyValue_01.value = (SimpleJSONFixed_JSONNode_o *)name;
  aKeyValue_01.key = aKeyValue_00.key;
  plStack_260 = (long *)0x409bacc;
  pSVar8 = (SimpleJSONFixed_JSONNode_o *)il2cpp_runtime_helper_022b2c90();
label_0409bacc:
  plStack_260 = (long *)0x409bae9;
  pSVar10 = (System_String_o *)
            (*(pSVar8->klass->vtable)._7_get_Item.methodPtr)
                      (pSVar8,"Name",(pSVar8->klass->vtable)._7_get_Item.method);
  plStack_260 = (long *)0x409baf3;
  SimpleJSONFixed_JSONNode__op_Implicit_3f79b00((SimpleJSONFixed_JSONNode_o *)pSVar10,(MethodInfo *)0x0);
  plStack_260 = (long *)0x409baf8;
  il2cpp_runtime_helper_022b2c90();
  pSStack_280 = unaff_R12;
  pSStack_278 = (SimpleJSONFixed_JSONNode_o *)plVar7;
  pSStack_268 = pSVar11;
  plStack_260 = plVar19;
  if (g_data_057ac46e == '\0') {
    pSStack_288 = aKeyValue_01.key;
    pSStack_270 = aKeyValue_01.value;
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinLevels);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&"MapCategories");
    il2cpp_runtime_helper_023445d0(&"Maps");
    il2cpp_runtime_helper_023445d0(&"Custom");
    il2cpp_runtime_helper_023445d0(&"Name");
    il2cpp_runtime_helper_023445d0(&".txt");
    il2cpp_runtime_helper_023445d0(&"");
    aKeyValue_01.value = pSStack_270;
    aKeyValue_01.key = pSStack_288;
    g_data_057ac46e = '\x01';
  }
  pSStack_270 = aKeyValue_01.value;
  pSStack_288 = aKeyValue_01.key;
  pSVar8 = (SimpleJSONFixed_JSONNode_o *)0x0;
  pIVar27 = (Il2CppClass *)0x0;
  pIVar28 = (Il2CppType *)0x0;
  pIVar25 = (InvokerMethod)0x0;
  pcVar26 = (char *)0x0;
  pIVar23 = (Il2CppMethodPointer)0x0;
  pIVar24 = (Il2CppMethodPointer)0x0;
  auStack_320._48_8_ = (SimpleJSONFixed_JSONNode_o *)0x0;
  auStack_320._56_8_ = (Il2CppRGCTXData *)0x0;
  auStack_320._32_8_ = (Il2CppClass *)0x0;
  auStack_320._40_8_ = (Il2CppType *)0x0;
  auStack_320._16_8_ = (InvokerMethod)0x0;
  auStack_320._24_8_ = (char *)0x0;
  auStack_320._0_8_ = (Il2CppMethodPointer)0x0;
  auStack_320._8_8_ = (Il2CppMethodPointer)0x0;
  auStack_320._64_8_ = (void *)0x0;
  pMVar20 = "Custom";
  bVar5 = System_String__op_Equality(pSVar10,(System_String_o *)"Custom",(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    pSVar11 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
    System_Collections_Generic_List_object____ctor(pSVar11,MethodInfo_List_1_System_String);
    plVar19 = &TypeInfo_BuiltinLevels;
    if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    plVar7 = (long *)**(long **)(TypeInfo_BuiltinLevels + 0xb8);
    if ((plVar7 != (long *)0x0) &&
       (plVar7 = (long *)(**(code **)(*plVar7 + 0x1a8))(plVar7,"MapCategories",*(undefined8 *)(*plVar7 + 0x1b0)),
       plVar7 != (long *)0x0)) {
      (**(code **)(*plVar7 + 0x338))(&pIStack_2d0,plVar7,*(undefined8 *)(*plVar7 + 0x340));
      __this.fields.m_Object.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar10;
      __this.fields._0_8_ = in_stack_fffffffffffffc80;
      __this.fields.m_Object.fields._8_8_ = pIStack_2d0;
      __this.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIStack_2c8;
      __this.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIStack_2c0;
      __this.fields.m_Object.fields._32_8_ = pcStack_2b8;
      __this.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pIStack_2b0;
      __this.fields.m_Array.fields._8_8_ = pIStack_2a8;
      __this.fields.m_Array.fields._current = pSStack_2a0;
      pIVar23 = pIStack_2d0;
      pIVar24 = pIStack_2c8;
      pIVar25 = pIStack_2c0;
      pcVar26 = pcStack_2b8;
      pIVar27 = pIStack_2b0;
      pIVar28 = pIStack_2a8;
      pSVar8 = pSStack_2a0;
      bVar5 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext(__this,(MethodInfo *)&stack0xfffffffffffffc90);
      if ((char)bVar5 != '\0') {
        plVar7 = &"Name";
        do {
          __this_01.fields.m_Object.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar10;
          __this_01.fields._0_8_ = in_stack_fffffffffffffc80;
          __this_01.fields.m_Object.fields._8_8_ = pIVar23;
          __this_01.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIVar24;
          __this_01.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar25;
          __this_01.fields.m_Object.fields._32_8_ = pcVar26;
          __this_01.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pIVar27;
          __this_01.fields.m_Array.fields._8_8_ = pIVar28;
          __this_01.fields.m_Array.fields._current = pSVar8;
          SVar22 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                             (__this_01,(MethodInfo *)&stack0xfffffffffffffc90);
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar15 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0(SVar22,(MethodInfo *)0x0);
          plVar19 = plVar7;
          if (pSVar15 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_0409c037;
          a = (SimpleJSONFixed_JSONNode_o *)
              (*(pSVar15->klass->vtable)._7_get_Item.methodPtr)
                        (pSVar15,"Name",(pSVar15->klass->vtable)._7_get_Item.method);
          bVar5 = SimpleJSONFixed_JSONNode__op_Equality(a,(Il2CppObject *)pSVar10,(MethodInfo *)0x0);
          if ((char)bVar5 != '\0') {
            plVar12 = (long *)(*(pSVar15->klass->vtable)._7_get_Item.methodPtr)
                                        (pSVar15,"Maps",(pSVar15->klass->vtable)._7_get_Item.method);
            if (plVar12 == (long *)0x0) goto label_0409c037;
            (**(code **)(*plVar12 + 0x338))(&pIStack_2d0,plVar12,*(undefined8 *)(*plVar12 + 0x340));
            auStack_320._64_8_ = _Stack_290;
            auStack_320._48_8_ = pSStack_2a0;
            auStack_320._56_8_ = _Stack_298;
            auStack_320._32_8_ = pIStack_2b0;
            auStack_320._40_8_ = pIStack_2a8;
            auStack_320._16_8_ = pIStack_2c0;
            auStack_320._24_8_ = pcStack_2b8;
            auStack_320._0_8_ = pIStack_2d0;
            auStack_320._8_8_ = pIStack_2c8;
            __this_02.fields.m_Object.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar10;
            __this_02.fields._0_8_ = in_stack_fffffffffffffc80;
            __this_02.fields.m_Object.fields._8_8_ = pIVar23;
            __this_02.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIVar24;
            __this_02.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar25;
            __this_02.fields.m_Object.fields._32_8_ = pcVar26;
            __this_02.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pIVar27;
            __this_02.fields.m_Array.fields._8_8_ = pIVar28;
            __this_02.fields.m_Array.fields._current = pSVar8;
            bVar5 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext(__this_02,(MethodInfo *)auStack_320);
            if ((char)bVar5 != '\0') {
              ppSVar21 = (System_String_o **)&TypeInfo_JSONNode;
              if (pSVar11 == (System_Collections_Generic_List_object__o *)0x0) goto label_0409c002;
              do {
                __this_04.fields.m_Object.fields._dictionary =
                     (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar10;
                __this_04.fields._0_8_ = in_stack_fffffffffffffc80;
                __this_04.fields.m_Object.fields._8_8_ = pIVar23;
                __this_04.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIVar24;
                __this_04.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar25;
                __this_04.fields.m_Object.fields._32_8_ = pcVar26;
                __this_04.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pIVar27;
                __this_04.fields.m_Array.fields._8_8_ = pIVar28;
                __this_04.fields.m_Array.fields._current = pSVar8;
                SVar22 = SimpleJSONFixed_JSONNode_Enumerator__get_Current(__this_04,(MethodInfo *)auStack_320)
                ;
                plVar19 = (long *)SVar22.fields.value;
                if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar15 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0(SVar22,(MethodInfo *)0x0);
                if (pSVar15 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_0409c037;
                pSVar15 = (SimpleJSONFixed_JSONNode_o *)
                          (*(pSVar15->klass->vtable)._7_get_Item.methodPtr)
                                    (pSVar15,"Name",(pSVar15->klass->vtable)._7_get_Item.method);
                pSVar9 = SimpleJSONFixed_JSONNode__op_Implicit_3f79b00(pSVar15,(MethodInfo *)0x0);
                lVar3 = MethodInfo_Void_Add;
                piVar1 = &(pSVar11->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar13 = (pSVar11->fields)._items;
                if (pSVar13 == (System_Object_array *)0x0) goto label_0409c037;
                uVar6 = (pSVar11->fields)._size;
                if (uVar6 < (uint)pSVar13->max_length) {
                  (pSVar11->fields)._size = uVar6 + 1;
                  pSVar13->m_Items[(int)uVar6] = (Il2CppObject *)pSVar9;
                  il2cpp_runtime_helper_022b4080(pSVar13->m_Items + (int)uVar6,pSVar9);
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize
                            (pSVar11,(Il2CppObject *)pSVar9,
                             *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
                }
                __this_03.fields.m_Object.fields._dictionary =
                     (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar10;
                __this_03.fields._0_8_ = in_stack_fffffffffffffc80;
                __this_03.fields.m_Object.fields._8_8_ = pIVar23;
                __this_03.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIVar24;
                __this_03.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar25;
                __this_03.fields.m_Object.fields._32_8_ = pcVar26;
                __this_03.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pIVar27;
                __this_03.fields.m_Array.fields._8_8_ = pIVar28;
                __this_03.fields.m_Array.fields._current = pSVar8;
                bVar5 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext(__this_03,(MethodInfo *)auStack_320);
              } while ((char)bVar5 != '\0');
            }
          }
          __this_00.fields.m_Object.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar10;
          __this_00.fields._0_8_ = in_stack_fffffffffffffc80;
          __this_00.fields.m_Object.fields._8_8_ = pIVar23;
          __this_00.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIVar24;
          __this_00.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar25;
          __this_00.fields.m_Object.fields._32_8_ = pcVar26;
          __this_00.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pIVar27;
          __this_00.fields.m_Array.fields._8_8_ = pIVar28;
          __this_00.fields.m_Array.fields._current = pSVar8;
          bVar5 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                            (__this_00,(MethodInfo *)&stack0xfffffffffffffc90);
        } while ((char)bVar5 != '\0');
      }
      if (pSVar11 != (System_Collections_Generic_List_object__o *)0x0) {
        pSVar13 = System_Collections_Generic_List_object___ToArray(pSVar11,MethodInfo_String_ToArray);
        return (System_String_o *)pSVar13;
      }
    }
  }
  else {
    plVar7 = &TypeInfo_BuiltinLevels;
    if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar14 = Map_BuiltinLevels__GetTxtFiles
                        (*(System_String_o **)(*(long *)(TypeInfo_BuiltinLevels + 0xb8) + 8),pMVar20);
    plVar19 = plVar7;
    if (pSVar14 != (System_String_array *)0x0) {
      uVar6 = (uint)pSVar14->max_length;
      if (0 < (int)uVar6) {
        uVar18 = 0;
        ppSVar21 = &"";
        do {
          if (uVar6 <= uVar18) {
label_0409bffd:
            il2cpp_runtime_helper_022b2ca0();
label_0409c002:
            __this_05.fields.m_Object.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar10;
            __this_05.fields._0_8_ = in_stack_fffffffffffffc80;
            __this_05.fields.m_Object.fields._8_8_ = pIVar23;
            __this_05.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIVar24;
            __this_05.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar25;
            __this_05.fields.m_Object.fields._32_8_ = pcVar26;
            __this_05.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pIVar27;
            __this_05.fields.m_Array.fields._8_8_ = pIVar28;
            __this_05.fields.m_Array.fields._current = pSVar8;
            SVar22 = SimpleJSONFixed_JSONNode_Enumerator__get_Current(__this_05,(MethodInfo *)auStack_320);
            if (*(int *)((long)&(*ppSVar21)[9].monitor + 4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar8 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0(SVar22,(MethodInfo *)0x0);
            plVar19 = plVar7;
            if (pSVar8 != (SimpleJSONFixed_JSONNode_o *)0x0) goto label_0409c03c;
            goto label_0409c037;
          }
          plVar7 = (long *)(long)(int)uVar18;
          plVar19 = plVar7;
          if (pSVar14->m_Items[(long)plVar7] == (System_String_o *)0x0) goto label_0409c037;
          pSVar9 = System_String__Replace_3af9030
                             (pSVar14->m_Items[(long)plVar7],".txt","",(MethodInfo *)0x0);
          if ((uint)pSVar14->max_length <= uVar18) goto label_0409bffd;
          pSVar14->m_Items[(long)plVar7] = pSVar9;
          il2cpp_runtime_helper_022b4080(pSVar14->m_Items + (long)plVar7,pSVar9);
          uVar18 = uVar18 + 1;
          uVar6 = (uint)pSVar14->max_length;
        } while ((int)uVar18 < (int)uVar6);
      }
      return (System_String_o *)pSVar14;
    }
  }
label_0409c037:
  pSVar8 = (SimpleJSONFixed_JSONNode_o *)il2cpp_runtime_helper_022b2c90();
label_0409c03c:
  pSVar10 = (System_String_o *)
            (*(pSVar8->klass->vtable)._7_get_Item.methodPtr)
                      (pSVar8,((SimpleJSONFixed_JSONNode_o *)plVar19)->klass,
                       (pSVar8->klass->vtable)._7_get_Item.method);
  SimpleJSONFixed_JSONNode__op_Implicit_3f79b00((SimpleJSONFixed_JSONNode_o *)pSVar10,(MethodInfo *)0x0);
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac47e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_String_Select_String_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_string_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_GetTxtFiles_b__28_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"*.txt");
    g_data_057ac47e = '\x01';
  }
  bVar5 = System_IO_Directory__Exists(pSVar10,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    pSVar14 = System_IO_Directory__GetFiles_3bfd9f0(pSVar10,"*.txt",0,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      selector = *(System_Func_TSource__TResult__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
    }
    else {
      selector = *(System_Func_TSource__TResult__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
    }
    if (selector == (System_Func_TSource__TResult__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      selector = (System_Func_TSource__TResult__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_string_string);
      System_Func_object__object____ctor();
      lVar3 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_TSource__TResult__o **)(lVar3 + 8) = selector;
      il2cpp_runtime_helper_022b4080(lVar3 + 8,selector);
    }
    source = System_Linq_Enumerable__Select_object__object_
                       ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar14,selector,MethodInfo_IEnumerable_1_System_String_Select_String_String);
    pSVar13 = System_Linq_Enumerable__ToArray_object_
                        ((System_Collections_Generic_IEnumerable_TSource__o *)source,MethodInfo_String_ToArray_String);
    return (System_String_o *)pSVar13;
  }
  pSVar10 = (System_String_o *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,0);
  return pSVar10;
}


// Map.BuiltinLevels$$IsLogicBuiltin
// il2cpp: bool Map_BuiltinLevels__IsLogicBuiltin (System_String_o* name, const MethodInfo* method);
// 0x409b5a0

bool_conflict Map_BuiltinLevels__IsLogicBuiltin(System_String_o *name,MethodInfo *method)

{
  int32_t *piVar1;
  long lVar2;
  SimpleJSONFixed_JSONNode_Enumerator_o __this;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_00;
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
  bool_conflict bVar3;
  uint uVar4;
  long *plVar5;
  SimpleJSONFixed_JSONNode_o *pSVar6;
  System_Collections_Generic_List_object__o *pSVar7;
  System_String_o *pSVar8;
  System_Object_array *pSVar9;
  System_String_array *pSVar10;
  System_String_o *pSVar11;
  SimpleJSONFixed_JSONNode_o *pSVar12;
  SimpleJSONFixed_JSONNode_o *a;
  long *plVar13;
  System_Func_TSource__TResult__o *selector;
  System_Collections_Generic_IEnumerable_TResult__o *source;
  undefined8 in_RCX;
  SimpleJSONFixed_JSONNode_c *pSVar14;
  long *plVar15;
  uint uVar16;
  long *unaff_RBP;
  MethodInfo *pMVar17;
  SimpleJSONFixed_JSONNode_o *unaff_R12;
  long *unaff_R13;
  SimpleJSONFixed_JSONNode_o *unaff_R14;
  System_String_o **ppSVar18;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o SVar19;
  System_Collections_Generic_KeyValuePair_string__JSONNode__Fields aKeyValue;
  System_Collections_Generic_KeyValuePair_string__JSONNode__Fields aKeyValue_00;
  undefined8 in_stack_fffffffffffffd48;
  Il2CppMethodPointer pIVar20;
  Il2CppMethodPointer pIVar21;
  InvokerMethod pIVar22;
  char *pcVar23;
  Il2CppClass *pIVar24;
  Il2CppType *pIVar25;
  undefined1 auStack_258 [80];
  Il2CppMethodPointer pIStack_208;
  Il2CppMethodPointer pIStack_200;
  InvokerMethod pIStack_1f8;
  char *pcStack_1f0;
  Il2CppClass *pIStack_1e8;
  Il2CppType *pIStack_1e0;
  SimpleJSONFixed_JSONNode_o *pSStack_1d8;
  _union_13 _Stack_1d0;
  _union_14 _Stack_1c8;
  System_String_o *pSStack_1c0;
  SimpleJSONFixed_JSONNode_o *pSStack_1b8;
  SimpleJSONFixed_JSONNode_o *pSStack_1b0;
  SimpleJSONFixed_JSONNode_o *pSStack_1a8;
  System_Collections_Generic_List_object__o *pSStack_1a0;
  long *plStack_198;
  SimpleJSONFixed_JSONNode_c *pSVar26;
  Il2CppType **ppIVar27;
  _union_13 _Var28;
  _union_14 _Var29;
  SimpleJSONFixed_JSONNode_c *pSStack_140;
  Il2CppMethodPointer pIStack_138;
  InvokerMethod pIStack_130;
  char *pcStack_128;
  Il2CppClass *pIStack_120;
  Il2CppType *pIStack_118;
  Il2CppType **ppIStack_110;
  _union_13 _Stack_108;
  _union_14 _Stack_100;
  System_String_o *pSStack_f8;
  SimpleJSONFixed_JSONNode_o *pSStack_f0;
  SimpleJSONFixed_JSONNode_o *pSStack_e8;
  SimpleJSONFixed_JSONNode_o *pSStack_e0;
  System_String_o *pSStack_d8;
  long *plStack_d0;
  SimpleJSONFixed_JSONNode_c *local_78;
  Il2CppMethodPointer pIStack_70;
  InvokerMethod local_68;
  char *pcStack_60;
  Il2CppClass *local_58;
  Il2CppType *pIStack_50;
  Il2CppType **local_48;
  _union_13 _Stack_40;
  _union_14 local_38;
  
  if (g_data_057ac46c == '\0') {
    plStack_d0 = (long *)0x409b5c9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinLevels);
    plStack_d0 = (long *)0x409b5d5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    plStack_d0 = (long *)0x409b5e1;
    il2cpp_runtime_helper_023445d0(&"Name");
    plStack_d0 = (long *)0x409b5ed;
    il2cpp_runtime_helper_023445d0(&"GameModes");
    g_data_057ac46c = '\x01';
  }
  plVar15 = &TypeInfo_BuiltinLevels;
  if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
    plStack_d0 = (long *)0x409b62b;
    il2cpp_runtime_helper_02337ed0();
  }
  plStack_d0 = (long *)0x409b643;
  bVar3 = System_String__op_Equality
                    (name,*(System_String_o **)(*(long *)(TypeInfo_BuiltinLevels + 0xb8) + 0x28),(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    return (bool_conflict)CONCAT71((int7)((ulong)in_RCX >> 8),1);
  }
  if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
    plStack_d0 = (long *)0x409b65e;
    il2cpp_runtime_helper_02337ed0();
  }
  plVar5 = (long *)**(long **)(TypeInfo_BuiltinLevels + 0xb8);
  if (plVar5 != (long *)0x0) {
    plStack_d0 = (long *)0x409b68e;
    plVar5 = (long *)(**(code **)(*plVar5 + 0x1a8))(plVar5,"GameModes",*(undefined8 *)(*plVar5 + 0x1b0));
    if (plVar5 != (long *)0x0) {
      plStack_d0 = (long *)0x409b6af;
      (**(code **)(*plVar5 + 0x338))(&local_78,plVar5,*(undefined8 *)(*plVar5 + 0x340));
      unaff_RBP = &TypeInfo_JSONNode;
      unaff_R14 = (SimpleJSONFixed_JSONNode_o *)&"Name";
      pSVar26 = local_78;
      pIVar20 = pIStack_70;
      pIVar22 = local_68;
      pcVar23 = pcStack_60;
      pIVar24 = local_58;
      pIVar25 = pIStack_50;
      ppIVar27 = local_48;
      _Var28 = _Stack_40;
      _Var29 = local_38;
      while( true ) {
        plStack_d0 = (long *)0x409b70a;
        __this_10.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar20;
        __this_10.fields._0_8_ = pSVar26;
        __this_10.fields.m_Object.fields._8_8_ = pIVar22;
        __this_10.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar23;
        __this_10.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar24;
        __this_10.fields.m_Object.fields._32_8_ = pIVar25;
        __this_10.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar27;
        __this_10.fields.m_Array.fields._8_8_ = _Var28.rgctx_data;
        __this_10.fields.m_Array.fields._current = _Var29.genericMethod;
        bVar3 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                          (__this_10,(MethodInfo *)&stack0xffffffffffffff38);
        if ((char)bVar3 == '\0') {
          return 0;
        }
        plStack_d0 = (long *)0x409b718;
        __this_11.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar20;
        __this_11.fields._0_8_ = pSVar26;
        __this_11.fields.m_Object.fields._8_8_ = pIVar22;
        __this_11.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar23;
        __this_11.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar24;
        __this_11.fields.m_Object.fields._32_8_ = pIVar25;
        __this_11.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar27;
        __this_11.fields.m_Array.fields._8_8_ = _Var28.rgctx_data;
        __this_11.fields.m_Array.fields._current = _Var29.genericMethod;
        SVar19 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                           (__this_11,(MethodInfo *)&stack0xffffffffffffff38);
        unaff_R13 = (long *)SVar19.fields.value;
        plVar15 = (long *)SVar19.fields.key;
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          plStack_d0 = (long *)0x409b730;
          il2cpp_runtime_helper_02337ed0();
        }
        plStack_d0 = (long *)0x409b73d;
        pSVar6 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0(SVar19,(MethodInfo *)0x0);
        unaff_R12 = (SimpleJSONFixed_JSONNode_o *)&stack0xffffffffffffff38;
        if (pSVar6 == (SimpleJSONFixed_JSONNode_o *)0x0) break;
        pSVar14 = pSVar6->klass;
        plStack_d0 = (long *)0x409b758;
        pSVar6 = (SimpleJSONFixed_JSONNode_o *)
                 (*(pSVar14->vtable)._7_get_Item.methodPtr)
                           (pSVar6,"Name",(pSVar14->vtable)._7_get_Item.method);
        plStack_d0 = (long *)0x409b765;
        bVar3 = SimpleJSONFixed_JSONNode__op_Equality(pSVar6,(Il2CppObject *)name,(MethodInfo *)0x0);
        if ((char)bVar3 != '\0') {
          return (bool_conflict)CONCAT71((int7)((ulong)pSVar14 >> 8),1);
        }
      }
    }
  }
  plStack_d0 = (long *)0x409b788;
  il2cpp_runtime_helper_022b2c90();
  pSStack_f8 = (System_String_o *)plVar15;
  pSStack_f0 = unaff_R12;
  pSStack_e8 = (SimpleJSONFixed_JSONNode_o *)unaff_R13;
  pSStack_e0 = unaff_R14;
  pSStack_d8 = name;
  plStack_d0 = unaff_RBP;
  if (g_data_057ac46d == '\0') {
    plStack_198 = (long *)0x409b7b6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinLevels);
    plStack_198 = (long *)0x409b7c2;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    plStack_198 = (long *)0x409b7ce;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    plStack_198 = (long *)0x409b7da;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    plStack_198 = (long *)0x409b7e6;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    plStack_198 = (long *)0x409b7f2;
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    plStack_198 = (long *)0x409b7fe;
    il2cpp_runtime_helper_023445d0(&"MapCategories");
    plStack_198 = (long *)0x409b80a;
    il2cpp_runtime_helper_023445d0(&"Custom");
    plStack_198 = (long *)0x409b816;
    il2cpp_runtime_helper_023445d0(&"Name");
    g_data_057ac46d = '\x01';
  }
  plStack_198 = (long *)0x409b84b;
  pSVar7 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  plStack_198 = (long *)0x409b860;
  System_Collections_Generic_List_object____ctor(pSVar7,MethodInfo_List_1_System_String);
  aKeyValue.value = unaff_R12;
  aKeyValue.key = (System_String_o *)&TypeInfo_BuiltinLevels;
  if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
    plStack_198 = (long *)0x409b878;
    il2cpp_runtime_helper_02337ed0();
  }
  plVar15 = (long *)**(long **)(TypeInfo_BuiltinLevels + 0xb8);
  if (plVar15 == (long *)0x0) {
label_0409bac7:
    unaff_R12 = aKeyValue.value;
    aKeyValue_00.value = unaff_R14;
    aKeyValue_00.key = aKeyValue.key;
    plStack_198 = (long *)0x409bacc;
    pSVar6 = (SimpleJSONFixed_JSONNode_o *)il2cpp_runtime_helper_022b2c90();
  }
  else {
    plStack_198 = (long *)0x409b8a8;
    plVar15 = (long *)(**(code **)(*plVar15 + 0x1a8))(plVar15,"MapCategories",*(undefined8 *)(*plVar15 + 0x1b0));
    if (plVar15 == (long *)0x0) goto label_0409bac7;
    plStack_198 = (long *)0x409b8c9;
    (**(code **)(*plVar15 + 0x338))(&pSStack_140,plVar15,*(undefined8 *)(*plVar15 + 0x340));
    plStack_198 = (long *)0x409b90a;
    __this_06.fields.m_Object.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIStack_138;
    __this_06.fields._0_8_ = pSStack_140;
    __this_06.fields.m_Object.fields._8_8_ = pIStack_130;
    __this_06.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcStack_128;
    __this_06.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIStack_120;
    __this_06.fields.m_Object.fields._32_8_ = pIStack_118;
    __this_06.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIStack_110;
    __this_06.fields.m_Array.fields._8_8_ = _Stack_108.rgctx_data;
    __this_06.fields.m_Array.fields._current = _Stack_100.genericMethod;
    bVar3 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext(__this_06,(MethodInfo *)&stack0xfffffffffffffe70);
    if ((char)bVar3 == '\0') {
      if (pSVar7 != (System_Collections_Generic_List_object__o *)0x0) goto label_0409ba08;
      goto label_0409bac7;
    }
    if (pSVar7 != (System_Collections_Generic_List_object__o *)0x0) {
      unaff_RBP = &"Name";
      unaff_R13 = &MethodInfo_Void_Add;
      pSVar26 = pSStack_140;
      pIVar20 = pIStack_138;
      pIVar22 = pIStack_130;
      pcVar23 = pcStack_128;
      pIVar24 = pIStack_120;
      pIVar25 = pIStack_118;
      ppIVar27 = ppIStack_110;
      _Var28 = _Stack_108;
      _Var29 = _Stack_100;
      do {
        plStack_198 = (long *)0x409b966;
        __this_08.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar20;
        __this_08.fields._0_8_ = pSVar26;
        __this_08.fields.m_Object.fields._8_8_ = pIVar22;
        __this_08.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar23;
        __this_08.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar24;
        __this_08.fields.m_Object.fields._32_8_ = pIVar25;
        __this_08.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar27;
        __this_08.fields.m_Array.fields._8_8_ = _Var28.rgctx_data;
        __this_08.fields.m_Array.fields._current = _Var29.genericMethod;
        aKeyValue = (System_Collections_Generic_KeyValuePair_string__JSONNode__Fields)
                    SimpleJSONFixed_JSONNode_Enumerator__get_Current
                              (__this_08,(MethodInfo *)&stack0xfffffffffffffe70);
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          plStack_198 = (long *)0x409b984;
          il2cpp_runtime_helper_02337ed0();
        }
        plStack_198 = (long *)0x409b991;
        pSVar6 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0
                           ((System_Collections_Generic_KeyValuePair_string__JSONNode__o)aKeyValue,
                            (MethodInfo *)0x0);
        unaff_R14 = (SimpleJSONFixed_JSONNode_o *)&stack0xfffffffffffffe70;
        if (pSVar6 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_0409bac7;
        plStack_198 = (long *)0x409b9b1;
        pSVar6 = (SimpleJSONFixed_JSONNode_o *)
                 (*(pSVar6->klass->vtable)._7_get_Item.methodPtr)
                           (pSVar6,"Name",(pSVar6->klass->vtable)._7_get_Item.method);
        plStack_198 = (long *)0x409b9bb;
        pSVar8 = SimpleJSONFixed_JSONNode__op_Implicit_3f79b00(pSVar6,(MethodInfo *)0x0);
        lVar2 = MethodInfo_Void_Add;
        piVar1 = &(pSVar7->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar9 = (pSVar7->fields)._items;
        unaff_R14 = (SimpleJSONFixed_JSONNode_o *)&stack0xfffffffffffffe70;
        if (pSVar9 == (System_Object_array *)0x0) goto label_0409bac7;
        uVar4 = (pSVar7->fields)._size;
        if (uVar4 < (uint)pSVar9->max_length) {
          (pSVar7->fields)._size = uVar4 + 1;
          pSVar9->m_Items[(int)uVar4] = (Il2CppObject *)pSVar8;
          plStack_198 = (long *)0x409b9fa;
          il2cpp_runtime_helper_022b4080(pSVar9->m_Items + (int)uVar4,pSVar8);
        }
        else {
          plStack_198 = (long *)0x409b94a;
          System_Collections_Generic_List_object___AddWithResize
                    (pSVar7,(Il2CppObject *)pSVar8,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
        plStack_198 = (long *)0x409b954;
        __this_07.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar20;
        __this_07.fields._0_8_ = pSVar26;
        __this_07.fields.m_Object.fields._8_8_ = pIVar22;
        __this_07.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar23;
        __this_07.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar24;
        __this_07.fields.m_Object.fields._32_8_ = pIVar25;
        __this_07.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar27;
        __this_07.fields.m_Array.fields._8_8_ = _Var28.rgctx_data;
        __this_07.fields.m_Array.fields._current = _Var29.genericMethod;
        bVar3 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                          (__this_07,(MethodInfo *)&stack0xfffffffffffffe70);
        unaff_R14 = (SimpleJSONFixed_JSONNode_o *)&stack0xfffffffffffffe70;
      } while ((char)bVar3 != '\0');
label_0409ba08:
      pMVar17 = "Custom";
      lVar2 = MethodInfo_Void_Add;
      piVar1 = &(pSVar7->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar9 = (pSVar7->fields)._items;
      if (pSVar9 != (System_Object_array *)0x0) {
        uVar4 = (pSVar7->fields)._size;
        if (uVar4 < (uint)pSVar9->max_length) {
          (pSVar7->fields)._size = uVar4 + 1;
          pSVar9->m_Items[(int)uVar4] = (Il2CppObject *)pMVar17;
          plStack_198 = (long *)0x409ba50;
          il2cpp_runtime_helper_022b4080(pSVar9->m_Items + (int)uVar4);
        }
        else {
          plStack_198 = (long *)0x409ba69;
          System_Collections_Generic_List_object___AddWithResize
                    (pSVar7,(Il2CppObject *)pMVar17,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
        plStack_198 = (long *)0x409ba7b;
        pSVar9 = System_Collections_Generic_List_object___ToArray(pSVar7,MethodInfo_String_ToArray);
        return (bool_conflict)pSVar9;
      }
      goto label_0409bac7;
    }
    plStack_198 = (long *)0x409ba97;
    __this_09.fields.m_Object.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIStack_138;
    __this_09.fields._0_8_ = pSStack_140;
    __this_09.fields.m_Object.fields._8_8_ = pIStack_130;
    __this_09.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcStack_128;
    __this_09.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIStack_120;
    __this_09.fields.m_Object.fields._32_8_ = pIStack_118;
    __this_09.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIStack_110;
    __this_09.fields.m_Array.fields._8_8_ = _Stack_108.rgctx_data;
    __this_09.fields.m_Array.fields._current = _Stack_100.genericMethod;
    aKeyValue_00 = (System_Collections_Generic_KeyValuePair_string__JSONNode__Fields)
                   SimpleJSONFixed_JSONNode_Enumerator__get_Current
                             (__this_09,(MethodInfo *)&stack0xfffffffffffffe70);
    unaff_R14 = aKeyValue_00.value;
    aKeyValue.key = aKeyValue_00.key;
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      plStack_198 = (long *)0x409bab5;
      il2cpp_runtime_helper_02337ed0();
    }
    plStack_198 = (long *)0x409bac2;
    pSVar6 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0
                       ((System_Collections_Generic_KeyValuePair_string__JSONNode__o)aKeyValue_00,
                        (MethodInfo *)0x0);
    if (pSVar6 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_0409bac7;
  }
  plStack_198 = (long *)0x409bae9;
  pSVar8 = (System_String_o *)
           (*(pSVar6->klass->vtable)._7_get_Item.methodPtr)
                     (pSVar6,"Name",(pSVar6->klass->vtable)._7_get_Item.method);
  plStack_198 = (long *)0x409baf3;
  SimpleJSONFixed_JSONNode__op_Implicit_3f79b00((SimpleJSONFixed_JSONNode_o *)pSVar8,(MethodInfo *)0x0);
  plStack_198 = (long *)0x409baf8;
  il2cpp_runtime_helper_022b2c90();
  pSStack_1b8 = unaff_R12;
  pSStack_1b0 = (SimpleJSONFixed_JSONNode_o *)unaff_R13;
  pSStack_1a0 = pSVar7;
  plStack_198 = unaff_RBP;
  if (g_data_057ac46e == '\0') {
    pSStack_1c0 = aKeyValue_00.key;
    pSStack_1a8 = aKeyValue_00.value;
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinLevels);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&"MapCategories");
    il2cpp_runtime_helper_023445d0(&"Maps");
    il2cpp_runtime_helper_023445d0(&"Custom");
    il2cpp_runtime_helper_023445d0(&"Name");
    il2cpp_runtime_helper_023445d0(&".txt");
    il2cpp_runtime_helper_023445d0(&"");
    aKeyValue_00.value = pSStack_1a8;
    aKeyValue_00.key = pSStack_1c0;
    g_data_057ac46e = '\x01';
  }
  pSStack_1a8 = aKeyValue_00.value;
  pSStack_1c0 = aKeyValue_00.key;
  pSVar6 = (SimpleJSONFixed_JSONNode_o *)0x0;
  pIVar24 = (Il2CppClass *)0x0;
  pIVar25 = (Il2CppType *)0x0;
  pIVar22 = (InvokerMethod)0x0;
  pcVar23 = (char *)0x0;
  pIVar20 = (Il2CppMethodPointer)0x0;
  pIVar21 = (Il2CppMethodPointer)0x0;
  auStack_258._48_8_ = (SimpleJSONFixed_JSONNode_o *)0x0;
  auStack_258._56_8_ = (Il2CppRGCTXData *)0x0;
  auStack_258._32_8_ = (Il2CppClass *)0x0;
  auStack_258._40_8_ = (Il2CppType *)0x0;
  auStack_258._16_8_ = (InvokerMethod)0x0;
  auStack_258._24_8_ = (char *)0x0;
  auStack_258._0_8_ = (Il2CppMethodPointer)0x0;
  auStack_258._8_8_ = (Il2CppMethodPointer)0x0;
  auStack_258._64_8_ = (void *)0x0;
  pMVar17 = "Custom";
  bVar3 = System_String__op_Equality(pSVar8,(System_String_o *)"Custom",(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    pSVar7 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
    System_Collections_Generic_List_object____ctor(pSVar7,MethodInfo_List_1_System_String);
    plVar15 = &TypeInfo_BuiltinLevels;
    if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    plVar5 = (long *)**(long **)(TypeInfo_BuiltinLevels + 0xb8);
    if ((plVar5 != (long *)0x0) &&
       (plVar5 = (long *)(**(code **)(*plVar5 + 0x1a8))(plVar5,"MapCategories",*(undefined8 *)(*plVar5 + 0x1b0)),
       plVar5 != (long *)0x0)) {
      (**(code **)(*plVar5 + 0x338))(&pIStack_208,plVar5,*(undefined8 *)(*plVar5 + 0x340));
      __this.fields.m_Object.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar8;
      __this.fields._0_8_ = in_stack_fffffffffffffd48;
      __this.fields.m_Object.fields._8_8_ = pIStack_208;
      __this.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIStack_200;
      __this.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIStack_1f8;
      __this.fields.m_Object.fields._32_8_ = pcStack_1f0;
      __this.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pIStack_1e8;
      __this.fields.m_Array.fields._8_8_ = pIStack_1e0;
      __this.fields.m_Array.fields._current = pSStack_1d8;
      pIVar20 = pIStack_208;
      pIVar21 = pIStack_200;
      pIVar22 = pIStack_1f8;
      pcVar23 = pcStack_1f0;
      pIVar24 = pIStack_1e8;
      pIVar25 = pIStack_1e0;
      pSVar6 = pSStack_1d8;
      bVar3 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext(__this,(MethodInfo *)&stack0xfffffffffffffd58);
      if ((char)bVar3 != '\0') {
        plVar5 = &"Name";
        do {
          __this_01.fields.m_Object.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar8;
          __this_01.fields._0_8_ = in_stack_fffffffffffffd48;
          __this_01.fields.m_Object.fields._8_8_ = pIVar20;
          __this_01.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIVar21;
          __this_01.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar22;
          __this_01.fields.m_Object.fields._32_8_ = pcVar23;
          __this_01.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pIVar24;
          __this_01.fields.m_Array.fields._8_8_ = pIVar25;
          __this_01.fields.m_Array.fields._current = pSVar6;
          SVar19 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                             (__this_01,(MethodInfo *)&stack0xfffffffffffffd58);
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar12 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0(SVar19,(MethodInfo *)0x0);
          plVar15 = plVar5;
          if (pSVar12 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_0409c037;
          a = (SimpleJSONFixed_JSONNode_o *)
              (*(pSVar12->klass->vtable)._7_get_Item.methodPtr)
                        (pSVar12,"Name",(pSVar12->klass->vtable)._7_get_Item.method);
          bVar3 = SimpleJSONFixed_JSONNode__op_Equality(a,(Il2CppObject *)pSVar8,(MethodInfo *)0x0);
          if ((char)bVar3 != '\0') {
            plVar13 = (long *)(*(pSVar12->klass->vtable)._7_get_Item.methodPtr)
                                        (pSVar12,"Maps",(pSVar12->klass->vtable)._7_get_Item.method);
            if (plVar13 == (long *)0x0) goto label_0409c037;
            (**(code **)(*plVar13 + 0x338))(&pIStack_208,plVar13,*(undefined8 *)(*plVar13 + 0x340));
            auStack_258._64_8_ = _Stack_1c8;
            auStack_258._48_8_ = pSStack_1d8;
            auStack_258._56_8_ = _Stack_1d0;
            auStack_258._32_8_ = pIStack_1e8;
            auStack_258._40_8_ = pIStack_1e0;
            auStack_258._16_8_ = pIStack_1f8;
            auStack_258._24_8_ = pcStack_1f0;
            auStack_258._0_8_ = pIStack_208;
            auStack_258._8_8_ = pIStack_200;
            __this_02.fields.m_Object.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar8;
            __this_02.fields._0_8_ = in_stack_fffffffffffffd48;
            __this_02.fields.m_Object.fields._8_8_ = pIVar20;
            __this_02.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIVar21;
            __this_02.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar22;
            __this_02.fields.m_Object.fields._32_8_ = pcVar23;
            __this_02.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pIVar24;
            __this_02.fields.m_Array.fields._8_8_ = pIVar25;
            __this_02.fields.m_Array.fields._current = pSVar6;
            bVar3 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext(__this_02,(MethodInfo *)auStack_258);
            if ((char)bVar3 != '\0') {
              ppSVar18 = (System_String_o **)&TypeInfo_JSONNode;
              if (pSVar7 == (System_Collections_Generic_List_object__o *)0x0) goto label_0409c002;
              do {
                __this_04.fields.m_Object.fields._dictionary =
                     (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar8;
                __this_04.fields._0_8_ = in_stack_fffffffffffffd48;
                __this_04.fields.m_Object.fields._8_8_ = pIVar20;
                __this_04.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIVar21;
                __this_04.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar22;
                __this_04.fields.m_Object.fields._32_8_ = pcVar23;
                __this_04.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pIVar24;
                __this_04.fields.m_Array.fields._8_8_ = pIVar25;
                __this_04.fields.m_Array.fields._current = pSVar6;
                SVar19 = SimpleJSONFixed_JSONNode_Enumerator__get_Current(__this_04,(MethodInfo *)auStack_258)
                ;
                plVar15 = (long *)SVar19.fields.value;
                if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar12 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0(SVar19,(MethodInfo *)0x0);
                if (pSVar12 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_0409c037;
                pSVar12 = (SimpleJSONFixed_JSONNode_o *)
                          (*(pSVar12->klass->vtable)._7_get_Item.methodPtr)
                                    (pSVar12,"Name",(pSVar12->klass->vtable)._7_get_Item.method);
                pSVar11 = SimpleJSONFixed_JSONNode__op_Implicit_3f79b00(pSVar12,(MethodInfo *)0x0);
                lVar2 = MethodInfo_Void_Add;
                piVar1 = &(pSVar7->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar9 = (pSVar7->fields)._items;
                if (pSVar9 == (System_Object_array *)0x0) goto label_0409c037;
                uVar4 = (pSVar7->fields)._size;
                if (uVar4 < (uint)pSVar9->max_length) {
                  (pSVar7->fields)._size = uVar4 + 1;
                  pSVar9->m_Items[(int)uVar4] = (Il2CppObject *)pSVar11;
                  il2cpp_runtime_helper_022b4080(pSVar9->m_Items + (int)uVar4,pSVar11);
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize
                            (pSVar7,(Il2CppObject *)pSVar11,
                             *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                }
                __this_03.fields.m_Object.fields._dictionary =
                     (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar8;
                __this_03.fields._0_8_ = in_stack_fffffffffffffd48;
                __this_03.fields.m_Object.fields._8_8_ = pIVar20;
                __this_03.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIVar21;
                __this_03.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar22;
                __this_03.fields.m_Object.fields._32_8_ = pcVar23;
                __this_03.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pIVar24;
                __this_03.fields.m_Array.fields._8_8_ = pIVar25;
                __this_03.fields.m_Array.fields._current = pSVar6;
                bVar3 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext(__this_03,(MethodInfo *)auStack_258);
              } while ((char)bVar3 != '\0');
            }
          }
          __this_00.fields.m_Object.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar8;
          __this_00.fields._0_8_ = in_stack_fffffffffffffd48;
          __this_00.fields.m_Object.fields._8_8_ = pIVar20;
          __this_00.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIVar21;
          __this_00.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar22;
          __this_00.fields.m_Object.fields._32_8_ = pcVar23;
          __this_00.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pIVar24;
          __this_00.fields.m_Array.fields._8_8_ = pIVar25;
          __this_00.fields.m_Array.fields._current = pSVar6;
          bVar3 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                            (__this_00,(MethodInfo *)&stack0xfffffffffffffd58);
        } while ((char)bVar3 != '\0');
      }
      if (pSVar7 != (System_Collections_Generic_List_object__o *)0x0) {
        pSVar10 = (System_String_array *)System_Collections_Generic_List_object___ToArray(pSVar7,MethodInfo_String_ToArray)
        ;
        goto label_0409bfe8;
      }
    }
  }
  else {
    plVar5 = &TypeInfo_BuiltinLevels;
    if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar10 = Map_BuiltinLevels__GetTxtFiles
                        (*(System_String_o **)(*(long *)(TypeInfo_BuiltinLevels + 0xb8) + 8),pMVar17);
    plVar15 = plVar5;
    if (pSVar10 != (System_String_array *)0x0) {
      uVar4 = (uint)pSVar10->max_length;
      if (0 < (int)uVar4) {
        uVar16 = 0;
        ppSVar18 = &"";
        do {
          if (uVar4 <= uVar16) {
label_0409bffd:
            il2cpp_runtime_helper_022b2ca0();
label_0409c002:
            __this_05.fields.m_Object.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar8;
            __this_05.fields._0_8_ = in_stack_fffffffffffffd48;
            __this_05.fields.m_Object.fields._8_8_ = pIVar20;
            __this_05.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIVar21;
            __this_05.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar22;
            __this_05.fields.m_Object.fields._32_8_ = pcVar23;
            __this_05.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pIVar24;
            __this_05.fields.m_Array.fields._8_8_ = pIVar25;
            __this_05.fields.m_Array.fields._current = pSVar6;
            SVar19 = SimpleJSONFixed_JSONNode_Enumerator__get_Current(__this_05,(MethodInfo *)auStack_258);
            if (*(int *)((long)&(*ppSVar18)[9].monitor + 4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar6 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0(SVar19,(MethodInfo *)0x0);
            plVar15 = plVar5;
            if (pSVar6 != (SimpleJSONFixed_JSONNode_o *)0x0) goto label_0409c03c;
            goto label_0409c037;
          }
          plVar5 = (long *)(long)(int)uVar16;
          plVar15 = plVar5;
          if (pSVar10->m_Items[(long)plVar5] == (System_String_o *)0x0) goto label_0409c037;
          pSVar11 = System_String__Replace_3af9030
                              (pSVar10->m_Items[(long)plVar5],".txt","",(MethodInfo *)0x0);
          if ((uint)pSVar10->max_length <= uVar16) goto label_0409bffd;
          pSVar10->m_Items[(long)plVar5] = pSVar11;
          il2cpp_runtime_helper_022b4080(pSVar10->m_Items + (long)plVar5,pSVar11);
          uVar16 = uVar16 + 1;
          uVar4 = (uint)pSVar10->max_length;
        } while ((int)uVar16 < (int)uVar4);
      }
label_0409bfe8:
      return (bool_conflict)pSVar10;
    }
  }
label_0409c037:
  pSVar6 = (SimpleJSONFixed_JSONNode_o *)il2cpp_runtime_helper_022b2c90();
label_0409c03c:
  pSVar8 = (System_String_o *)
           (*(pSVar6->klass->vtable)._7_get_Item.methodPtr)
                     (pSVar6,((SimpleJSONFixed_JSONNode_o *)plVar15)->klass,
                      (pSVar6->klass->vtable)._7_get_Item.method);
  SimpleJSONFixed_JSONNode__op_Implicit_3f79b00((SimpleJSONFixed_JSONNode_o *)pSVar8,(MethodInfo *)0x0);
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac47e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_String_Select_String_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_string_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_GetTxtFiles_b__28_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"*.txt");
    g_data_057ac47e = '\x01';
  }
  bVar3 = System_IO_Directory__Exists(pSVar8,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    pSVar10 = System_IO_Directory__GetFiles_3bfd9f0(pSVar8,"*.txt",0,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      selector = *(System_Func_TSource__TResult__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
    }
    else {
      selector = *(System_Func_TSource__TResult__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
    }
    if (selector == (System_Func_TSource__TResult__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      selector = (System_Func_TSource__TResult__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_string_string);
      System_Func_object__object____ctor();
      lVar2 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_TSource__TResult__o **)(lVar2 + 8) = selector;
      il2cpp_runtime_helper_022b4080(lVar2 + 8,selector);
    }
    source = System_Linq_Enumerable__Select_object__object_
                       ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar10,selector,MethodInfo_IEnumerable_1_System_String_Select_String_String);
    pSVar9 = System_Linq_Enumerable__ToArray_object_
                       ((System_Collections_Generic_IEnumerable_TSource__o *)source,MethodInfo_String_ToArray_String);
    return (bool_conflict)pSVar9;
  }
  bVar3 = il2cpp_runtime_helper_022b2a40(TypeInfo_string,0);
  return bVar3;
}


// Map.BuiltinLevels$$GetMapCategories
// il2cpp: System_String_array* Map_BuiltinLevels__GetMapCategories (const MethodInfo* method);
// 0x409b790

System_String_array * Map_BuiltinLevels__GetMapCategories(MethodInfo *method)

{
  int32_t *piVar1;
  System_Object_array *pSVar2;
  long lVar3;
  SimpleJSONFixed_JSONNode_Enumerator_o __this;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_00;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_01;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_02;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_03;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_04;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_05;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_06;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_07;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_08;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_09;
  bool_conflict bVar4;
  uint uVar5;
  System_Collections_Generic_List_object__o *pSVar6;
  long *plVar7;
  SimpleJSONFixed_JSONNode_o *pSVar8;
  System_String_o *pSVar9;
  System_String_array *pSVar10;
  System_String_o *pSVar11;
  SimpleJSONFixed_JSONNode_o *pSVar12;
  SimpleJSONFixed_JSONNode_o *a;
  long *plVar13;
  System_Func_TSource__TResult__o *selector;
  System_Collections_Generic_IEnumerable_TResult__o *source;
  long *plVar14;
  uint uVar15;
  undefined8 *unaff_RBP;
  MethodInfo *pMVar16;
  SimpleJSONFixed_JSONNode_o *unaff_R12;
  long *unaff_R13;
  SimpleJSONFixed_JSONNode_o *unaff_R14;
  System_String_o **ppSVar17;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o SVar18;
  System_Collections_Generic_KeyValuePair_string__JSONNode__Fields aKeyValue;
  undefined8 in_stack_fffffffffffffe10;
  Il2CppMethodPointer pIVar19;
  Il2CppMethodPointer pIVar20;
  InvokerMethod pIVar21;
  char *pcVar22;
  Il2CppClass *pIVar23;
  Il2CppType *pIVar24;
  undefined1 auStack_190 [80];
  Il2CppMethodPointer pIStack_140;
  Il2CppMethodPointer pIStack_138;
  InvokerMethod pIStack_130;
  char *pcStack_128;
  Il2CppClass *pIStack_120;
  Il2CppType *pIStack_118;
  SimpleJSONFixed_JSONNode_o *pSStack_110;
  _union_13 _Stack_108;
  _union_14 _Stack_100;
  System_String_o *pSStack_f8;
  SimpleJSONFixed_JSONNode_o *pSStack_f0;
  long *plStack_e8;
  SimpleJSONFixed_JSONNode_o *pSStack_e0;
  System_Collections_Generic_List_object__o *pSStack_d8;
  undefined8 *puStack_d0;
  SimpleJSONFixed_JSONNode_c *pSVar25;
  Il2CppType **ppIVar26;
  _union_13 _Var27;
  _union_14 _Var28;
  SimpleJSONFixed_JSONNode_c *local_78;
  Il2CppMethodPointer pIStack_70;
  InvokerMethod local_68;
  char *pcStack_60;
  Il2CppClass *local_58;
  Il2CppType *pIStack_50;
  Il2CppType **local_48;
  _union_13 _Stack_40;
  _union_14 local_38;
  
  if (g_data_057ac46d == '\0') {
    puStack_d0 = (undefined8 *)0x409b7b6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinLevels);
    puStack_d0 = (undefined8 *)0x409b7c2;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    puStack_d0 = (undefined8 *)0x409b7ce;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    puStack_d0 = (undefined8 *)0x409b7da;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    puStack_d0 = (undefined8 *)0x409b7e6;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    puStack_d0 = (undefined8 *)0x409b7f2;
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    puStack_d0 = (undefined8 *)0x409b7fe;
    il2cpp_runtime_helper_023445d0(&"MapCategories");
    puStack_d0 = (undefined8 *)0x409b80a;
    il2cpp_runtime_helper_023445d0(&"Custom");
    puStack_d0 = (undefined8 *)0x409b816;
    il2cpp_runtime_helper_023445d0(&"Name");
    g_data_057ac46d = '\x01';
  }
  puStack_d0 = (undefined8 *)0x409b84b;
  pSVar6 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  puStack_d0 = (undefined8 *)0x409b860;
  System_Collections_Generic_List_object____ctor(pSVar6,MethodInfo_List_1_System_String);
  plVar14 = &TypeInfo_BuiltinLevels;
  if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
    puStack_d0 = (undefined8 *)0x409b878;
    il2cpp_runtime_helper_02337ed0();
  }
  plVar7 = (long *)**(long **)(TypeInfo_BuiltinLevels + 0xb8);
  if (plVar7 != (long *)0x0) {
    puStack_d0 = (undefined8 *)0x409b8a8;
    plVar7 = (long *)(**(code **)(*plVar7 + 0x1a8))(plVar7,"MapCategories",*(undefined8 *)(*plVar7 + 0x1b0));
    if (plVar7 != (long *)0x0) {
      puStack_d0 = (undefined8 *)0x409b8c9;
      (**(code **)(*plVar7 + 0x338))(&local_78,plVar7,*(undefined8 *)(*plVar7 + 0x340));
      puStack_d0 = (undefined8 *)0x409b90a;
      __this_06.fields.m_Object.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIStack_70;
      __this_06.fields._0_8_ = local_78;
      __this_06.fields.m_Object.fields._8_8_ = local_68;
      __this_06.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcStack_60;
      __this_06.fields.m_Object.fields._current.fields.value = (Il2CppObject *)local_58;
      __this_06.fields.m_Object.fields._32_8_ = pIStack_50;
      __this_06.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)local_48;
      __this_06.fields.m_Array.fields._8_8_ = _Stack_40.rgctx_data;
      __this_06.fields.m_Array.fields._current = local_38.genericMethod;
      bVar4 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext(__this_06,(MethodInfo *)&stack0xffffffffffffff38);
      if ((char)bVar4 == '\0') {
        if (pSVar6 != (System_Collections_Generic_List_object__o *)0x0) goto label_0409ba08;
      }
      else if (pSVar6 == (System_Collections_Generic_List_object__o *)0x0) {
        puStack_d0 = (undefined8 *)0x409ba97;
        __this_09.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIStack_70;
        __this_09.fields._0_8_ = local_78;
        __this_09.fields.m_Object.fields._8_8_ = local_68;
        __this_09.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcStack_60;
        __this_09.fields.m_Object.fields._current.fields.value = (Il2CppObject *)local_58;
        __this_09.fields.m_Object.fields._32_8_ = pIStack_50;
        __this_09.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)local_48;
        __this_09.fields.m_Array.fields._8_8_ = _Stack_40.rgctx_data;
        __this_09.fields.m_Array.fields._current = local_38.genericMethod;
        aKeyValue = (System_Collections_Generic_KeyValuePair_string__JSONNode__Fields)
                    SimpleJSONFixed_JSONNode_Enumerator__get_Current
                              (__this_09,(MethodInfo *)&stack0xffffffffffffff38);
        unaff_R14 = aKeyValue.value;
        plVar14 = (long *)aKeyValue.key;
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          puStack_d0 = (undefined8 *)0x409bab5;
          il2cpp_runtime_helper_02337ed0();
        }
        puStack_d0 = (undefined8 *)0x409bac2;
        pSVar8 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0
                           ((System_Collections_Generic_KeyValuePair_string__JSONNode__o)aKeyValue,
                            (MethodInfo *)0x0);
        if (pSVar8 != (SimpleJSONFixed_JSONNode_o *)0x0) goto label_0409bacc;
      }
      else {
        unaff_RBP = &"Name";
        unaff_R13 = &MethodInfo_Void_Add;
        pSVar25 = local_78;
        pIVar19 = pIStack_70;
        pIVar21 = local_68;
        pcVar22 = pcStack_60;
        pIVar23 = local_58;
        pIVar24 = pIStack_50;
        ppIVar26 = local_48;
        _Var27 = _Stack_40;
        _Var28 = local_38;
        do {
          puStack_d0 = (undefined8 *)0x409b966;
          __this_08.fields.m_Object.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar19;
          __this_08.fields._0_8_ = pSVar25;
          __this_08.fields.m_Object.fields._8_8_ = pIVar21;
          __this_08.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar22;
          __this_08.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar23;
          __this_08.fields.m_Object.fields._32_8_ = pIVar24;
          __this_08.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar26;
          __this_08.fields.m_Array.fields._8_8_ = _Var27.rgctx_data;
          __this_08.fields.m_Array.fields._current = _Var28.genericMethod;
          SVar18 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                             (__this_08,(MethodInfo *)&stack0xffffffffffffff38);
          unaff_R12 = SVar18.fields.value;
          plVar14 = (long *)SVar18.fields.key;
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            puStack_d0 = (undefined8 *)0x409b984;
            il2cpp_runtime_helper_02337ed0();
          }
          puStack_d0 = (undefined8 *)0x409b991;
          pSVar8 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0(SVar18,(MethodInfo *)0x0);
          unaff_R14 = (SimpleJSONFixed_JSONNode_o *)&stack0xffffffffffffff38;
          if (pSVar8 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_0409bac7;
          puStack_d0 = (undefined8 *)0x409b9b1;
          pSVar8 = (SimpleJSONFixed_JSONNode_o *)
                   (*(pSVar8->klass->vtable)._7_get_Item.methodPtr)
                             (pSVar8,"Name",(pSVar8->klass->vtable)._7_get_Item.method);
          puStack_d0 = (undefined8 *)0x409b9bb;
          pSVar9 = SimpleJSONFixed_JSONNode__op_Implicit_3f79b00(pSVar8,(MethodInfo *)0x0);
          lVar3 = MethodInfo_Void_Add;
          piVar1 = &(pSVar6->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar2 = (pSVar6->fields)._items;
          unaff_R14 = (SimpleJSONFixed_JSONNode_o *)&stack0xffffffffffffff38;
          if (pSVar2 == (System_Object_array *)0x0) goto label_0409bac7;
          uVar5 = (pSVar6->fields)._size;
          if (uVar5 < (uint)pSVar2->max_length) {
            (pSVar6->fields)._size = uVar5 + 1;
            pSVar2->m_Items[(int)uVar5] = (Il2CppObject *)pSVar9;
            puStack_d0 = (undefined8 *)0x409b9fa;
            il2cpp_runtime_helper_022b4080(pSVar2->m_Items + (int)uVar5,pSVar9);
          }
          else {
            puStack_d0 = (undefined8 *)0x409b94a;
            System_Collections_Generic_List_object___AddWithResize
                      (pSVar6,(Il2CppObject *)pSVar9,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
          }
          puStack_d0 = (undefined8 *)0x409b954;
          __this_07.fields.m_Object.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar19;
          __this_07.fields._0_8_ = pSVar25;
          __this_07.fields.m_Object.fields._8_8_ = pIVar21;
          __this_07.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar22;
          __this_07.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar23;
          __this_07.fields.m_Object.fields._32_8_ = pIVar24;
          __this_07.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar26;
          __this_07.fields.m_Array.fields._8_8_ = _Var27.rgctx_data;
          __this_07.fields.m_Array.fields._current = _Var28.genericMethod;
          bVar4 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                            (__this_07,(MethodInfo *)&stack0xffffffffffffff38);
          unaff_R14 = (SimpleJSONFixed_JSONNode_o *)&stack0xffffffffffffff38;
        } while ((char)bVar4 != '\0');
label_0409ba08:
        pMVar16 = "Custom";
        lVar3 = MethodInfo_Void_Add;
        piVar1 = &(pSVar6->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar2 = (pSVar6->fields)._items;
        if (pSVar2 != (System_Object_array *)0x0) {
          uVar5 = (pSVar6->fields)._size;
          if (uVar5 < (uint)pSVar2->max_length) {
            (pSVar6->fields)._size = uVar5 + 1;
            pSVar2->m_Items[(int)uVar5] = (Il2CppObject *)pMVar16;
            puStack_d0 = (undefined8 *)0x409ba50;
            il2cpp_runtime_helper_022b4080(pSVar2->m_Items + (int)uVar5);
          }
          else {
            puStack_d0 = (undefined8 *)0x409ba69;
            System_Collections_Generic_List_object___AddWithResize
                      (pSVar6,(Il2CppObject *)pMVar16,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
          }
          puStack_d0 = (undefined8 *)0x409ba7b;
          pSVar10 = (System_String_array *)
                    System_Collections_Generic_List_object___ToArray(pSVar6,MethodInfo_String_ToArray);
          return pSVar10;
        }
      }
    }
  }
label_0409bac7:
  aKeyValue.value = unaff_R14;
  aKeyValue.key = (System_String_o *)plVar14;
  puStack_d0 = (undefined8 *)0x409bacc;
  pSVar8 = (SimpleJSONFixed_JSONNode_o *)il2cpp_runtime_helper_022b2c90();
label_0409bacc:
  puStack_d0 = (undefined8 *)0x409bae9;
  pSVar9 = (System_String_o *)
           (*(pSVar8->klass->vtable)._7_get_Item.methodPtr)
                     (pSVar8,"Name",(pSVar8->klass->vtable)._7_get_Item.method);
  puStack_d0 = (undefined8 *)0x409baf3;
  SimpleJSONFixed_JSONNode__op_Implicit_3f79b00((SimpleJSONFixed_JSONNode_o *)pSVar9,(MethodInfo *)0x0);
  puStack_d0 = (undefined8 *)0x409baf8;
  il2cpp_runtime_helper_022b2c90();
  pSStack_f0 = unaff_R12;
  plStack_e8 = unaff_R13;
  pSStack_d8 = pSVar6;
  puStack_d0 = unaff_RBP;
  if (g_data_057ac46e == '\0') {
    pSStack_f8 = aKeyValue.key;
    pSStack_e0 = aKeyValue.value;
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinLevels);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&"MapCategories");
    il2cpp_runtime_helper_023445d0(&"Maps");
    il2cpp_runtime_helper_023445d0(&"Custom");
    il2cpp_runtime_helper_023445d0(&"Name");
    il2cpp_runtime_helper_023445d0(&".txt");
    il2cpp_runtime_helper_023445d0(&"");
    aKeyValue.value = pSStack_e0;
    aKeyValue.key = pSStack_f8;
    g_data_057ac46e = '\x01';
  }
  pSStack_e0 = aKeyValue.value;
  pSStack_f8 = aKeyValue.key;
  pSVar8 = (SimpleJSONFixed_JSONNode_o *)0x0;
  pIVar23 = (Il2CppClass *)0x0;
  pIVar24 = (Il2CppType *)0x0;
  pIVar21 = (InvokerMethod)0x0;
  pcVar22 = (char *)0x0;
  pIVar19 = (Il2CppMethodPointer)0x0;
  pIVar20 = (Il2CppMethodPointer)0x0;
  auStack_190._48_8_ = (SimpleJSONFixed_JSONNode_o *)0x0;
  auStack_190._56_8_ = (Il2CppRGCTXData *)0x0;
  auStack_190._32_8_ = (Il2CppClass *)0x0;
  auStack_190._40_8_ = (Il2CppType *)0x0;
  auStack_190._16_8_ = (InvokerMethod)0x0;
  auStack_190._24_8_ = (char *)0x0;
  auStack_190._0_8_ = (Il2CppMethodPointer)0x0;
  auStack_190._8_8_ = (Il2CppMethodPointer)0x0;
  auStack_190._64_8_ = (void *)0x0;
  pMVar16 = "Custom";
  bVar4 = System_String__op_Equality(pSVar9,(System_String_o *)"Custom",(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    pSVar6 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
    System_Collections_Generic_List_object____ctor(pSVar6,MethodInfo_List_1_System_String);
    plVar14 = &TypeInfo_BuiltinLevels;
    if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    plVar7 = (long *)**(long **)(TypeInfo_BuiltinLevels + 0xb8);
    if ((plVar7 != (long *)0x0) &&
       (plVar7 = (long *)(**(code **)(*plVar7 + 0x1a8))(plVar7,"MapCategories",*(undefined8 *)(*plVar7 + 0x1b0)),
       plVar7 != (long *)0x0)) {
      (**(code **)(*plVar7 + 0x338))(&pIStack_140,plVar7,*(undefined8 *)(*plVar7 + 0x340));
      __this.fields.m_Object.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar9;
      __this.fields._0_8_ = in_stack_fffffffffffffe10;
      __this.fields.m_Object.fields._8_8_ = pIStack_140;
      __this.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIStack_138;
      __this.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIStack_130;
      __this.fields.m_Object.fields._32_8_ = pcStack_128;
      __this.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pIStack_120;
      __this.fields.m_Array.fields._8_8_ = pIStack_118;
      __this.fields.m_Array.fields._current = pSStack_110;
      pIVar19 = pIStack_140;
      pIVar20 = pIStack_138;
      pIVar21 = pIStack_130;
      pcVar22 = pcStack_128;
      pIVar23 = pIStack_120;
      pIVar24 = pIStack_118;
      pSVar8 = pSStack_110;
      bVar4 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext(__this,(MethodInfo *)&stack0xfffffffffffffe20);
      if ((char)bVar4 != '\0') {
        plVar7 = &"Name";
        do {
          __this_01.fields.m_Object.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar9;
          __this_01.fields._0_8_ = in_stack_fffffffffffffe10;
          __this_01.fields.m_Object.fields._8_8_ = pIVar19;
          __this_01.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIVar20;
          __this_01.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar21;
          __this_01.fields.m_Object.fields._32_8_ = pcVar22;
          __this_01.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pIVar23;
          __this_01.fields.m_Array.fields._8_8_ = pIVar24;
          __this_01.fields.m_Array.fields._current = pSVar8;
          SVar18 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                             (__this_01,(MethodInfo *)&stack0xfffffffffffffe20);
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar12 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0(SVar18,(MethodInfo *)0x0);
          plVar14 = plVar7;
          if (pSVar12 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_0409c037;
          a = (SimpleJSONFixed_JSONNode_o *)
              (*(pSVar12->klass->vtable)._7_get_Item.methodPtr)
                        (pSVar12,"Name",(pSVar12->klass->vtable)._7_get_Item.method);
          bVar4 = SimpleJSONFixed_JSONNode__op_Equality(a,(Il2CppObject *)pSVar9,(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            plVar13 = (long *)(*(pSVar12->klass->vtable)._7_get_Item.methodPtr)
                                        (pSVar12,"Maps",(pSVar12->klass->vtable)._7_get_Item.method);
            if (plVar13 == (long *)0x0) goto label_0409c037;
            (**(code **)(*plVar13 + 0x338))(&pIStack_140,plVar13,*(undefined8 *)(*plVar13 + 0x340));
            auStack_190._64_8_ = _Stack_100;
            auStack_190._48_8_ = pSStack_110;
            auStack_190._56_8_ = _Stack_108;
            auStack_190._32_8_ = pIStack_120;
            auStack_190._40_8_ = pIStack_118;
            auStack_190._16_8_ = pIStack_130;
            auStack_190._24_8_ = pcStack_128;
            auStack_190._0_8_ = pIStack_140;
            auStack_190._8_8_ = pIStack_138;
            __this_02.fields.m_Object.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar9;
            __this_02.fields._0_8_ = in_stack_fffffffffffffe10;
            __this_02.fields.m_Object.fields._8_8_ = pIVar19;
            __this_02.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIVar20;
            __this_02.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar21;
            __this_02.fields.m_Object.fields._32_8_ = pcVar22;
            __this_02.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pIVar23;
            __this_02.fields.m_Array.fields._8_8_ = pIVar24;
            __this_02.fields.m_Array.fields._current = pSVar8;
            bVar4 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext(__this_02,(MethodInfo *)auStack_190);
            if ((char)bVar4 != '\0') {
              ppSVar17 = (System_String_o **)&TypeInfo_JSONNode;
              if (pSVar6 == (System_Collections_Generic_List_object__o *)0x0) goto label_0409c002;
              do {
                __this_04.fields.m_Object.fields._dictionary =
                     (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar9;
                __this_04.fields._0_8_ = in_stack_fffffffffffffe10;
                __this_04.fields.m_Object.fields._8_8_ = pIVar19;
                __this_04.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIVar20;
                __this_04.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar21;
                __this_04.fields.m_Object.fields._32_8_ = pcVar22;
                __this_04.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pIVar23;
                __this_04.fields.m_Array.fields._8_8_ = pIVar24;
                __this_04.fields.m_Array.fields._current = pSVar8;
                SVar18 = SimpleJSONFixed_JSONNode_Enumerator__get_Current(__this_04,(MethodInfo *)auStack_190)
                ;
                plVar14 = (long *)SVar18.fields.value;
                if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar12 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0(SVar18,(MethodInfo *)0x0);
                if (pSVar12 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_0409c037;
                pSVar12 = (SimpleJSONFixed_JSONNode_o *)
                          (*(pSVar12->klass->vtable)._7_get_Item.methodPtr)
                                    (pSVar12,"Name",(pSVar12->klass->vtable)._7_get_Item.method);
                pSVar11 = SimpleJSONFixed_JSONNode__op_Implicit_3f79b00(pSVar12,(MethodInfo *)0x0);
                lVar3 = MethodInfo_Void_Add;
                piVar1 = &(pSVar6->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar2 = (pSVar6->fields)._items;
                if (pSVar2 == (System_Object_array *)0x0) goto label_0409c037;
                uVar5 = (pSVar6->fields)._size;
                if (uVar5 < (uint)pSVar2->max_length) {
                  (pSVar6->fields)._size = uVar5 + 1;
                  pSVar2->m_Items[(int)uVar5] = (Il2CppObject *)pSVar11;
                  il2cpp_runtime_helper_022b4080(pSVar2->m_Items + (int)uVar5,pSVar11);
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize
                            (pSVar6,(Il2CppObject *)pSVar11,
                             *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
                }
                __this_03.fields.m_Object.fields._dictionary =
                     (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar9;
                __this_03.fields._0_8_ = in_stack_fffffffffffffe10;
                __this_03.fields.m_Object.fields._8_8_ = pIVar19;
                __this_03.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIVar20;
                __this_03.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar21;
                __this_03.fields.m_Object.fields._32_8_ = pcVar22;
                __this_03.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pIVar23;
                __this_03.fields.m_Array.fields._8_8_ = pIVar24;
                __this_03.fields.m_Array.fields._current = pSVar8;
                bVar4 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext(__this_03,(MethodInfo *)auStack_190);
              } while ((char)bVar4 != '\0');
            }
          }
          __this_00.fields.m_Object.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar9;
          __this_00.fields._0_8_ = in_stack_fffffffffffffe10;
          __this_00.fields.m_Object.fields._8_8_ = pIVar19;
          __this_00.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIVar20;
          __this_00.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar21;
          __this_00.fields.m_Object.fields._32_8_ = pcVar22;
          __this_00.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pIVar23;
          __this_00.fields.m_Array.fields._8_8_ = pIVar24;
          __this_00.fields.m_Array.fields._current = pSVar8;
          bVar4 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                            (__this_00,(MethodInfo *)&stack0xfffffffffffffe20);
        } while ((char)bVar4 != '\0');
      }
      if (pSVar6 != (System_Collections_Generic_List_object__o *)0x0) {
        pSVar10 = (System_String_array *)System_Collections_Generic_List_object___ToArray(pSVar6,MethodInfo_String_ToArray)
        ;
        return pSVar10;
      }
    }
  }
  else {
    plVar7 = &TypeInfo_BuiltinLevels;
    if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar10 = Map_BuiltinLevels__GetTxtFiles
                        (*(System_String_o **)(*(long *)(TypeInfo_BuiltinLevels + 0xb8) + 8),pMVar16);
    plVar14 = plVar7;
    if (pSVar10 != (System_String_array *)0x0) {
      uVar5 = (uint)pSVar10->max_length;
      if (0 < (int)uVar5) {
        uVar15 = 0;
        ppSVar17 = &"";
        do {
          if (uVar5 <= uVar15) {
label_0409bffd:
            il2cpp_runtime_helper_022b2ca0();
label_0409c002:
            __this_05.fields.m_Object.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar9;
            __this_05.fields._0_8_ = in_stack_fffffffffffffe10;
            __this_05.fields.m_Object.fields._8_8_ = pIVar19;
            __this_05.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIVar20;
            __this_05.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar21;
            __this_05.fields.m_Object.fields._32_8_ = pcVar22;
            __this_05.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pIVar23;
            __this_05.fields.m_Array.fields._8_8_ = pIVar24;
            __this_05.fields.m_Array.fields._current = pSVar8;
            SVar18 = SimpleJSONFixed_JSONNode_Enumerator__get_Current(__this_05,(MethodInfo *)auStack_190);
            if (*(int *)((long)&(*ppSVar17)[9].monitor + 4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar8 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0(SVar18,(MethodInfo *)0x0);
            plVar14 = plVar7;
            if (pSVar8 != (SimpleJSONFixed_JSONNode_o *)0x0) goto label_0409c03c;
            goto label_0409c037;
          }
          plVar7 = (long *)(long)(int)uVar15;
          plVar14 = plVar7;
          if (pSVar10->m_Items[(long)plVar7] == (System_String_o *)0x0) goto label_0409c037;
          pSVar11 = System_String__Replace_3af9030
                              (pSVar10->m_Items[(long)plVar7],".txt","",(MethodInfo *)0x0);
          if ((uint)pSVar10->max_length <= uVar15) goto label_0409bffd;
          pSVar10->m_Items[(long)plVar7] = pSVar11;
          il2cpp_runtime_helper_022b4080(pSVar10->m_Items + (long)plVar7,pSVar11);
          uVar15 = uVar15 + 1;
          uVar5 = (uint)pSVar10->max_length;
        } while ((int)uVar15 < (int)uVar5);
      }
      return pSVar10;
    }
  }
label_0409c037:
  pSVar8 = (SimpleJSONFixed_JSONNode_o *)il2cpp_runtime_helper_022b2c90();
label_0409c03c:
  pSVar9 = (System_String_o *)
           (*(pSVar8->klass->vtable)._7_get_Item.methodPtr)
                     (pSVar8,((SimpleJSONFixed_JSONNode_o *)plVar14)->klass,
                      (pSVar8->klass->vtable)._7_get_Item.method);
  SimpleJSONFixed_JSONNode__op_Implicit_3f79b00((SimpleJSONFixed_JSONNode_o *)pSVar9,(MethodInfo *)0x0);
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac47e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_String_Select_String_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_string_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_GetTxtFiles_b__28_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"*.txt");
    g_data_057ac47e = '\x01';
  }
  bVar4 = System_IO_Directory__Exists(pSVar9,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    pSVar10 = System_IO_Directory__GetFiles_3bfd9f0(pSVar9,"*.txt",0,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      selector = *(System_Func_TSource__TResult__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
    }
    else {
      selector = *(System_Func_TSource__TResult__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
    }
    if (selector == (System_Func_TSource__TResult__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      selector = (System_Func_TSource__TResult__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_string_string);
      System_Func_object__object____ctor();
      lVar3 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_TSource__TResult__o **)(lVar3 + 8) = selector;
      il2cpp_runtime_helper_022b4080(lVar3 + 8,selector);
    }
    source = System_Linq_Enumerable__Select_object__object_
                       ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar10,selector,MethodInfo_IEnumerable_1_System_String_Select_String_String);
    pSVar10 = (System_String_array *)
              System_Linq_Enumerable__ToArray_object_
                        ((System_Collections_Generic_IEnumerable_TSource__o *)source,MethodInfo_String_ToArray_String);
    return pSVar10;
  }
  pSVar10 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,0);
  return pSVar10;
}


// Map.BuiltinLevels$$GetMapNames
// il2cpp: System_String_array* Map_BuiltinLevels__GetMapNames (System_String_o* category, const MethodInfo* method);
// 0x409bb00

System_String_array * Map_BuiltinLevels__GetMapNames(System_String_o *category,MethodInfo *method)

{
  int32_t *piVar1;
  System_Object_array *pSVar2;
  long lVar3;
  SimpleJSONFixed_JSONNode_Enumerator_o __this;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_00;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_01;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_02;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_03;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_04;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_05;
  bool_conflict bVar4;
  uint uVar5;
  System_String_array *pSVar6;
  System_String_o *pSVar7;
  System_Collections_Generic_List_object__o *__this_06;
  SimpleJSONFixed_JSONNode_o *pSVar8;
  SimpleJSONFixed_JSONNode_o *a;
  long *plVar9;
  SimpleJSONFixed_JSONNode_o *pSVar10;
  System_Func_TSource__TResult__o *selector;
  System_Collections_Generic_IEnumerable_TResult__o *source;
  long *plVar11;
  long *plVar12;
  uint uVar13;
  MethodInfo *method_00;
  System_String_o **ppSVar14;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o SVar15;
  undefined8 in_stack_fffffffffffffed8;
  Il2CppMethodPointer pIVar16;
  Il2CppMethodPointer pIVar17;
  InvokerMethod pIVar18;
  char *pcVar19;
  Il2CppClass *pIVar20;
  Il2CppType *pIVar21;
  undefined1 local_c8 [80];
  Il2CppMethodPointer local_78;
  Il2CppMethodPointer pIStack_70;
  InvokerMethod local_68;
  char *pcStack_60;
  Il2CppClass *local_58;
  Il2CppType *pIStack_50;
  SimpleJSONFixed_JSONNode_o *local_48;
  _union_13 _Stack_40;
  _union_14 local_38;
  
  if (g_data_057ac46e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinLevels);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&"MapCategories");
    il2cpp_runtime_helper_023445d0(&"Maps");
    il2cpp_runtime_helper_023445d0(&"Custom");
    il2cpp_runtime_helper_023445d0(&"Name");
    il2cpp_runtime_helper_023445d0(&".txt");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ac46e = '\x01';
  }
  pSVar10 = (SimpleJSONFixed_JSONNode_o *)0x0;
  pIVar20 = (Il2CppClass *)0x0;
  pIVar21 = (Il2CppType *)0x0;
  pIVar18 = (InvokerMethod)0x0;
  pcVar19 = (char *)0x0;
  pIVar16 = (Il2CppMethodPointer)0x0;
  pIVar17 = (Il2CppMethodPointer)0x0;
  local_c8._48_8_ = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_c8._56_8_ = (Il2CppRGCTXData *)0x0;
  local_c8._32_8_ = (Il2CppClass *)0x0;
  local_c8._40_8_ = (Il2CppType *)0x0;
  local_c8._16_8_ = (InvokerMethod)0x0;
  local_c8._24_8_ = (char *)0x0;
  local_c8._0_8_ = (Il2CppMethodPointer)0x0;
  local_c8._8_8_ = (Il2CppMethodPointer)0x0;
  local_c8._64_8_ = (void *)0x0;
  method_00 = "Custom";
  bVar4 = System_String__op_Equality(category,(System_String_o *)"Custom",(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    __this_06 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
    System_Collections_Generic_List_object____ctor(__this_06,MethodInfo_List_1_System_String);
    plVar12 = &TypeInfo_BuiltinLevels;
    if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    plVar11 = (long *)**(long **)(TypeInfo_BuiltinLevels + 0xb8);
    if ((plVar11 != (long *)0x0) &&
       (plVar11 = (long *)(**(code **)(*plVar11 + 0x1a8))
                                    (plVar11,"MapCategories",*(undefined8 *)(*plVar11 + 0x1b0)),
       plVar11 != (long *)0x0)) {
      (**(code **)(*plVar11 + 0x338))(&local_78,plVar11,*(undefined8 *)(*plVar11 + 0x340));
      __this.fields.m_Object.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)category;
      __this.fields._0_8_ = in_stack_fffffffffffffed8;
      __this.fields.m_Object.fields._8_8_ = local_78;
      __this.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIStack_70;
      __this.fields.m_Object.fields._current.fields.value = (Il2CppObject *)local_68;
      __this.fields.m_Object.fields._32_8_ = pcStack_60;
      __this.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)local_58;
      __this.fields.m_Array.fields._8_8_ = pIStack_50;
      __this.fields.m_Array.fields._current = local_48;
      pIVar16 = local_78;
      pIVar17 = pIStack_70;
      pIVar18 = local_68;
      pcVar19 = pcStack_60;
      pIVar20 = local_58;
      pIVar21 = pIStack_50;
      pSVar10 = local_48;
      bVar4 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext(__this,(MethodInfo *)&stack0xfffffffffffffee8);
      if ((char)bVar4 != '\0') {
        plVar11 = &"Name";
        do {
          __this_01.fields.m_Object.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)category;
          __this_01.fields._0_8_ = in_stack_fffffffffffffed8;
          __this_01.fields.m_Object.fields._8_8_ = pIVar16;
          __this_01.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIVar17;
          __this_01.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar18;
          __this_01.fields.m_Object.fields._32_8_ = pcVar19;
          __this_01.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pIVar20;
          __this_01.fields.m_Array.fields._8_8_ = pIVar21;
          __this_01.fields.m_Array.fields._current = pSVar10;
          SVar15 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                             (__this_01,(MethodInfo *)&stack0xfffffffffffffee8);
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar8 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0(SVar15,(MethodInfo *)0x0);
          plVar12 = plVar11;
          if (pSVar8 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_0409c037;
          a = (SimpleJSONFixed_JSONNode_o *)
              (*(pSVar8->klass->vtable)._7_get_Item.methodPtr)
                        (pSVar8,"Name",(pSVar8->klass->vtable)._7_get_Item.method);
          bVar4 = SimpleJSONFixed_JSONNode__op_Equality(a,(Il2CppObject *)category,(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            plVar9 = (long *)(*(pSVar8->klass->vtable)._7_get_Item.methodPtr)
                                       (pSVar8,"Maps",(pSVar8->klass->vtable)._7_get_Item.method);
            if (plVar9 == (long *)0x0) goto label_0409c037;
            (**(code **)(*plVar9 + 0x338))(&local_78,plVar9,*(undefined8 *)(*plVar9 + 0x340));
            local_c8._64_8_ = local_38;
            local_c8._48_8_ = local_48;
            local_c8._56_8_ = _Stack_40;
            local_c8._32_8_ = local_58;
            local_c8._40_8_ = pIStack_50;
            local_c8._16_8_ = local_68;
            local_c8._24_8_ = pcStack_60;
            local_c8._0_8_ = local_78;
            local_c8._8_8_ = pIStack_70;
            __this_02.fields.m_Object.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)category;
            __this_02.fields._0_8_ = in_stack_fffffffffffffed8;
            __this_02.fields.m_Object.fields._8_8_ = pIVar16;
            __this_02.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIVar17;
            __this_02.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar18;
            __this_02.fields.m_Object.fields._32_8_ = pcVar19;
            __this_02.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pIVar20;
            __this_02.fields.m_Array.fields._8_8_ = pIVar21;
            __this_02.fields.m_Array.fields._current = pSVar10;
            bVar4 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext(__this_02,(MethodInfo *)local_c8);
            if ((char)bVar4 != '\0') {
              ppSVar14 = (System_String_o **)&TypeInfo_JSONNode;
              if (__this_06 == (System_Collections_Generic_List_object__o *)0x0) goto label_0409c002;
              do {
                __this_04.fields.m_Object.fields._dictionary =
                     (System_Collections_Generic_Dictionary_TKey__TValue__o *)category;
                __this_04.fields._0_8_ = in_stack_fffffffffffffed8;
                __this_04.fields.m_Object.fields._8_8_ = pIVar16;
                __this_04.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIVar17;
                __this_04.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar18;
                __this_04.fields.m_Object.fields._32_8_ = pcVar19;
                __this_04.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pIVar20;
                __this_04.fields.m_Array.fields._8_8_ = pIVar21;
                __this_04.fields.m_Array.fields._current = pSVar10;
                SVar15 = SimpleJSONFixed_JSONNode_Enumerator__get_Current(__this_04,(MethodInfo *)local_c8);
                plVar12 = (long *)SVar15.fields.value;
                if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar8 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0(SVar15,(MethodInfo *)0x0);
                if (pSVar8 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_0409c037;
                pSVar8 = (SimpleJSONFixed_JSONNode_o *)
                         (*(pSVar8->klass->vtable)._7_get_Item.methodPtr)
                                   (pSVar8,"Name",(pSVar8->klass->vtable)._7_get_Item.method);
                pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit_3f79b00(pSVar8,(MethodInfo *)0x0);
                lVar3 = MethodInfo_Void_Add;
                piVar1 = &(__this_06->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar2 = (__this_06->fields)._items;
                if (pSVar2 == (System_Object_array *)0x0) goto label_0409c037;
                uVar5 = (__this_06->fields)._size;
                if (uVar5 < (uint)pSVar2->max_length) {
                  (__this_06->fields)._size = uVar5 + 1;
                  pSVar2->m_Items[(int)uVar5] = (Il2CppObject *)pSVar7;
                  il2cpp_runtime_helper_022b4080(pSVar2->m_Items + (int)uVar5,pSVar7);
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize
                            (__this_06,(Il2CppObject *)pSVar7,
                             *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
                }
                __this_03.fields.m_Object.fields._dictionary =
                     (System_Collections_Generic_Dictionary_TKey__TValue__o *)category;
                __this_03.fields._0_8_ = in_stack_fffffffffffffed8;
                __this_03.fields.m_Object.fields._8_8_ = pIVar16;
                __this_03.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIVar17;
                __this_03.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar18;
                __this_03.fields.m_Object.fields._32_8_ = pcVar19;
                __this_03.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pIVar20;
                __this_03.fields.m_Array.fields._8_8_ = pIVar21;
                __this_03.fields.m_Array.fields._current = pSVar10;
                bVar4 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext(__this_03,(MethodInfo *)local_c8);
              } while ((char)bVar4 != '\0');
            }
          }
          __this_00.fields.m_Object.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)category;
          __this_00.fields._0_8_ = in_stack_fffffffffffffed8;
          __this_00.fields.m_Object.fields._8_8_ = pIVar16;
          __this_00.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIVar17;
          __this_00.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar18;
          __this_00.fields.m_Object.fields._32_8_ = pcVar19;
          __this_00.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pIVar20;
          __this_00.fields.m_Array.fields._8_8_ = pIVar21;
          __this_00.fields.m_Array.fields._current = pSVar10;
          bVar4 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                            (__this_00,(MethodInfo *)&stack0xfffffffffffffee8);
        } while ((char)bVar4 != '\0');
      }
      if (__this_06 != (System_Collections_Generic_List_object__o *)0x0) {
        pSVar6 = (System_String_array *)
                 System_Collections_Generic_List_object___ToArray(__this_06,MethodInfo_String_ToArray);
        return pSVar6;
      }
    }
  }
  else {
    plVar11 = &TypeInfo_BuiltinLevels;
    if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar6 = Map_BuiltinLevels__GetTxtFiles
                       (*(System_String_o **)(*(long *)(TypeInfo_BuiltinLevels + 0xb8) + 8),method_00);
    plVar12 = plVar11;
    if (pSVar6 != (System_String_array *)0x0) {
      uVar5 = (uint)pSVar6->max_length;
      if (0 < (int)uVar5) {
        uVar13 = 0;
        ppSVar14 = &"";
        do {
          if (uVar5 <= uVar13) {
label_0409bffd:
            il2cpp_runtime_helper_022b2ca0();
label_0409c002:
            __this_05.fields.m_Object.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)category;
            __this_05.fields._0_8_ = in_stack_fffffffffffffed8;
            __this_05.fields.m_Object.fields._8_8_ = pIVar16;
            __this_05.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIVar17;
            __this_05.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar18;
            __this_05.fields.m_Object.fields._32_8_ = pcVar19;
            __this_05.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pIVar20;
            __this_05.fields.m_Array.fields._8_8_ = pIVar21;
            __this_05.fields.m_Array.fields._current = pSVar10;
            SVar15 = SimpleJSONFixed_JSONNode_Enumerator__get_Current(__this_05,(MethodInfo *)local_c8);
            if (*(int *)((long)&(*ppSVar14)[9].monitor + 4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar10 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0(SVar15,(MethodInfo *)0x0);
            plVar12 = plVar11;
            if (pSVar10 != (SimpleJSONFixed_JSONNode_o *)0x0) goto label_0409c03c;
            goto label_0409c037;
          }
          plVar11 = (long *)(long)(int)uVar13;
          plVar12 = plVar11;
          if (pSVar6->m_Items[(long)plVar11] == (System_String_o *)0x0) goto label_0409c037;
          pSVar7 = System_String__Replace_3af9030
                             (pSVar6->m_Items[(long)plVar11],".txt","",(MethodInfo *)0x0);
          if ((uint)pSVar6->max_length <= uVar13) goto label_0409bffd;
          pSVar6->m_Items[(long)plVar11] = pSVar7;
          il2cpp_runtime_helper_022b4080(pSVar6->m_Items + (long)plVar11,pSVar7);
          uVar13 = uVar13 + 1;
          uVar5 = (uint)pSVar6->max_length;
        } while ((int)uVar13 < (int)uVar5);
      }
      return pSVar6;
    }
  }
label_0409c037:
  pSVar10 = (SimpleJSONFixed_JSONNode_o *)il2cpp_runtime_helper_022b2c90();
label_0409c03c:
  pSVar7 = (System_String_o *)
           (*(pSVar10->klass->vtable)._7_get_Item.methodPtr)
                     (pSVar10,((SimpleJSONFixed_JSONNode_o *)plVar12)->klass,
                      (pSVar10->klass->vtable)._7_get_Item.method);
  SimpleJSONFixed_JSONNode__op_Implicit_3f79b00((SimpleJSONFixed_JSONNode_o *)pSVar7,(MethodInfo *)0x0);
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac47e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_String_Select_String_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_string_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_GetTxtFiles_b__28_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"*.txt");
    g_data_057ac47e = '\x01';
  }
  bVar4 = System_IO_Directory__Exists(pSVar7,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    pSVar6 = System_IO_Directory__GetFiles_3bfd9f0(pSVar7,"*.txt",0,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      selector = *(System_Func_TSource__TResult__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
    }
    else {
      selector = *(System_Func_TSource__TResult__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
    }
    if (selector == (System_Func_TSource__TResult__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      selector = (System_Func_TSource__TResult__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_string_string);
      System_Func_object__object____ctor();
      lVar3 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_TSource__TResult__o **)(lVar3 + 8) = selector;
      il2cpp_runtime_helper_022b4080(lVar3 + 8,selector);
    }
    source = System_Linq_Enumerable__Select_object__object_
                       ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar6,selector,MethodInfo_IEnumerable_1_System_String_Select_String_String);
    pSVar6 = (System_String_array *)
             System_Linq_Enumerable__ToArray_object_
                       ((System_Collections_Generic_IEnumerable_TSource__o *)source,MethodInfo_String_ToArray_String);
    return pSVar6;
  }
  pSVar6 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,0);
  return pSVar6;
}


// Map.BuiltinLevels$$GetAutosaveNames
// il2cpp: System_String_array* Map_BuiltinLevels__GetAutosaveNames (const MethodInfo* method);
// 0x409c210

System_String_array * Map_BuiltinLevels__GetAutosaveNames(MethodInfo *method)

{
  int32_t *piVar1;
  ulong uVar2;
  System_Object_array *pSVar3;
  long lVar4;
  SimpleJSONFixed_JSONNode_Enumerator_o __this;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_00;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_01;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_02;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_03;
  char cVar5;
  uint uVar6;
  bool_conflict bVar7;
  System_String_array *pSVar8;
  System_String_o *pSVar9;
  System_Collections_Generic_List_object__o *pSVar10;
  System_Collections_Generic_HashSet_object__o *__this_04;
  long *plVar11;
  SimpleJSONFixed_JSONNode_o *pSVar12;
  System_String_c *pSVar13;
  System_Func_TSource__TResult__o *selector;
  System_Collections_Generic_IEnumerable_TResult__o *source;
  MethodInfo *pMVar14;
  uint uVar15;
  MethodInfo **item;
  MethodInfo_33E1AF0 **unaff_RBP;
  MethodInfo *in_RSI;
  System_String_o **unaff_R12;
  MethodInfo_33E1AF0 **unaff_R13;
  System_String_array *unaff_R14;
  System_String_o **unaff_R15;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o SVar16;
  Il2CppMethodPointer pIVar17;
  Il2CppMethodPointer pIVar18;
  InvokerMethod pIVar19;
  char *pcVar20;
  Il2CppClass *pIVar21;
  Il2CppType *pIVar22;
  Il2CppType **ppIVar23;
  _union_13 _Var24;
  _union_14 _Var25;
  Il2CppMethodPointer pIStack_d8;
  Il2CppMethodPointer pIStack_d0;
  InvokerMethod pIStack_c8;
  char *pcStack_c0;
  Il2CppClass *pIStack_b8;
  Il2CppType *pIStack_b0;
  Il2CppType **ppIStack_a8;
  _union_13 _Stack_a0;
  _union_14 _Stack_98;
  System_String_o *pSStack_90;
  System_String_array *pSStack_88;
  MethodInfo_33E1AF0 **ppMStack_80;
  System_Collections_Generic_HashSet_object__o *pSStack_78;
  System_Collections_Generic_List_object__o *pSStack_70;
  MethodInfo_33E1AF0 **ppMStack_68;
  undefined8 uStack_60;
  System_String_o *pSStack_58;
  System_String_array *pSStack_50;
  MethodInfo_33E1AF0 **ppMStack_48;
  System_String_array *pSStack_40;
  System_String_o **ppSStack_38;
  
  if (g_data_057ac46f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinLevels);
    il2cpp_runtime_helper_023445d0(&".txt");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ac46f = '\x01';
  }
  item = &TypeInfo_BuiltinLevels;
  if (*(int *)((long)&TypeInfo_BuiltinLevels[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar8 = Map_BuiltinLevels__GetTxtFiles
                     (*(System_String_o **)(TypeInfo_BuiltinLevels[2].virtualMethodPointer + 0x10),in_RSI);
  if (pSVar8 != (System_String_array *)0x0) {
    uVar6 = (uint)pSVar8->max_length;
    if (0 < (int)uVar6) {
      item = (MethodInfo **)0x0;
      unaff_R15 = &".txt";
      unaff_R12 = &"";
      do {
        uVar15 = (uint)item;
        unaff_R14 = pSVar8;
        if (uVar6 <= uVar15) {
label_0409c2f0:
          il2cpp_runtime_helper_022b2ca0();
          goto label_0409c2f5;
        }
        unaff_R13 = (MethodInfo_33E1AF0 **)(long)(int)uVar15;
        if (pSVar8->m_Items[(long)unaff_R13] == (System_String_o *)0x0) goto label_0409c2f5;
        pSVar9 = System_String__Replace_3af9030
                           (pSVar8->m_Items[(long)unaff_R13],".txt","",(MethodInfo *)0x0);
        if ((uint)pSVar8->max_length <= uVar15) goto label_0409c2f0;
        pSVar8->m_Items[(long)unaff_R13] = pSVar9;
        il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (long)unaff_R13,pSVar9);
        item = (MethodInfo **)(ulong)(uVar15 + 1);
        uVar6 = (uint)pSVar8->max_length;
      } while ((int)(uVar15 + 1) < (int)uVar6);
    }
    return pSVar8;
  }
label_0409c2f5:
  uStack_60 = il2cpp_runtime_helper_022b2c90();
  pSStack_58 = (System_String_o *)item;
  pSStack_50 = (System_String_array *)unaff_R12;
  ppMStack_48 = unaff_R13;
  pSStack_40 = unaff_R14;
  ppSStack_38 = unaff_R15;
  if (g_data_057ac471 == '\0') {
    ppMStack_68 = (MethodInfo_33E1AF0 **)0x409c320;
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinLevels);
    ppMStack_68 = (MethodInfo_33E1AF0 **)0x409c32c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    ppMStack_68 = (MethodInfo_33E1AF0 **)0x409c338;
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    ppMStack_68 = (MethodInfo_33E1AF0 **)0x409c344;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    ppMStack_68 = (MethodInfo_33E1AF0 **)0x409c350;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    ppMStack_68 = (MethodInfo_33E1AF0 **)0x409c35c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    ppMStack_68 = (MethodInfo_33E1AF0 **)0x409c368;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    ppMStack_68 = (MethodInfo_33E1AF0 **)0x409c374;
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    g_data_057ac471 = '\x01';
  }
  ppMStack_68 = (MethodInfo_33E1AF0 **)0x409c38a;
  pSVar10 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  ppMStack_68 = (MethodInfo_33E1AF0 **)0x409c39f;
  System_Collections_Generic_List_object____ctor(pSVar10,MethodInfo_List_1_System_String);
  ppMStack_68 = (MethodInfo_33E1AF0 **)0x409c3ae;
  __this_04 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  ppMStack_68 = (MethodInfo_33E1AF0 **)0x409c3c3;
  System_Collections_Generic_HashSet_object____ctor(__this_04,MethodInfo_HashSet_1_System_String);
  pMVar14 = TypeInfo_BuiltinLevels;
  if (*(int *)((long)&TypeInfo_BuiltinLevels[2].parameters + 4) == 0) {
    ppMStack_68 = (MethodInfo_33E1AF0 **)0x409c3db;
    il2cpp_runtime_helper_02337ed0();
  }
  ppMStack_68 = (MethodInfo_33E1AF0 **)0x409c3e0;
  pSVar8 = Map_BuiltinLevels__GetBuiltinAddons(pMVar14);
  pSStack_88 = (System_String_array *)unaff_R12;
  if (pSVar8 != (System_String_array *)0x0) {
    pSStack_88 = pSVar8;
    if (__this_04 == (System_Collections_Generic_HashSet_object__o *)0x0) {
      if ((int)pSVar8->max_length < 1) goto label_0409c515;
    }
    else {
      uVar2 = pSVar8->max_length;
      pSVar9 = (System_String_o *)(uVar2 & 0xffffffff);
      if (pSVar10 == (System_Collections_Generic_List_object__o *)0x0) {
        if (0 < (int)uVar2) {
          item = (MethodInfo **)0x0;
          unaff_RBP = &MethodInfo_Boolean_Add;
          do {
            if (pSVar9 <= item) goto label_0409c682;
            ppMStack_68 = (MethodInfo_33E1AF0 **)0x409c4fc;
            bVar7 = System_Collections_Generic_HashSet_object___Add
                              (__this_04,(Il2CppObject *)pSVar8->m_Items[(long)item],MethodInfo_Boolean_Add);
            if ((char)bVar7 != '\0') goto label_0409c687;
            item = (MethodInfo **)((long)&((System_String_o *)item)->klass + 1);
            uVar6 = (uint)pSVar8->max_length;
            pSVar9 = (System_String_o *)(ulong)uVar6;
          } while ((long)item < (long)(int)uVar6);
        }
label_0409c515:
        pMVar14 = TypeInfo_BuiltinLevels;
        if (*(int *)((long)&TypeInfo_BuiltinLevels[2].parameters + 4) == 0) {
          ppMStack_68 = (MethodInfo_33E1AF0 **)0x409c52d;
          il2cpp_runtime_helper_02337ed0();
        }
        ppMStack_68 = (MethodInfo_33E1AF0 **)0x409c532;
        pSVar8 = Map_BuiltinLevels__GetCustomAddons(pMVar14);
        if (pSVar8 != (System_String_array *)0x0) {
          pSStack_88 = pSVar8;
          if (__this_04 == (System_Collections_Generic_HashSet_object__o *)0x0) {
            if (0 < (int)pSVar8->max_length) goto label_0409c687;
          }
          else {
            uVar2 = pSVar8->max_length;
            pSVar9 = (System_String_o *)(uVar2 & 0xffffffff);
            if (pSVar10 == (System_Collections_Generic_List_object__o *)0x0) {
              if (0 < (int)uVar2) {
                item = (MethodInfo **)0x0;
                unaff_RBP = &MethodInfo_Boolean_Add;
                do {
                  if (pSVar9 <= item) goto label_0409c682;
                  ppMStack_68 = (MethodInfo_33E1AF0 **)0x409c648;
                  bVar7 = System_Collections_Generic_HashSet_object___Add
                                    (__this_04,(Il2CppObject *)pSVar8->m_Items[(long)item],MethodInfo_Boolean_Add);
                  if ((char)bVar7 != '\0') goto label_0409c687;
                  item = (MethodInfo **)((long)&((System_String_o *)item)->klass + 1);
                  uVar6 = (uint)pSVar8->max_length;
                  pSVar9 = (System_String_o *)(ulong)uVar6;
                } while ((long)item < (long)(int)uVar6);
              }
            }
            else if (0 < (int)uVar2) {
              unaff_RBP = (MethodInfo_33E1AF0 **)0x0;
              unaff_R13 = &MethodInfo_Boolean_Add;
              if ((uVar2 & 0xffffffff) != 0) {
                do {
                  item = (MethodInfo **)pSVar8->m_Items[(long)unaff_RBP];
                  ppMStack_68 = (MethodInfo_33E1AF0 **)0x409c5ce;
                  bVar7 = System_Collections_Generic_HashSet_object___Add
                                    (__this_04,(Il2CppObject *)item,MethodInfo_Boolean_Add);
                  lVar4 = MethodInfo_Void_Add;
                  if ((char)bVar7 != '\0') {
                    piVar1 = &(pSVar10->fields)._version;
                    *piVar1 = *piVar1 + 1;
                    pSVar3 = (pSVar10->fields)._items;
                    if (pSVar3 == (System_Object_array *)0x0) goto label_0409c687;
                    uVar6 = (pSVar10->fields)._size;
                    if (uVar6 < (uint)pSVar3->max_length) {
                      (pSVar10->fields)._size = uVar6 + 1;
                      pSVar3->m_Items[(int)uVar6] = (Il2CppObject *)item;
                      ppMStack_68 = (MethodInfo_33E1AF0 **)0x409c613;
                      il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar6,item);
                    }
                    else {
                      ppMStack_68 = (MethodInfo_33E1AF0 **)0x409c59a;
                      System_Collections_Generic_List_object___AddWithResize
                                (pSVar10,(Il2CppObject *)item,
                                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
                    }
                  }
                  unaff_RBP = (MethodInfo_33E1AF0 **)((long)unaff_RBP + 1);
                  uVar6 = (uint)pSVar8->max_length;
                  if ((long)(int)uVar6 <= (long)unaff_RBP) goto label_0409c65d;
                } while (unaff_RBP < (MethodInfo_33E1AF0 **)(ulong)uVar6);
              }
              goto label_0409c682;
            }
          }
label_0409c65d:
          if (pSVar10 != (System_Collections_Generic_List_object__o *)0x0) {
            pSVar8 = (System_String_array *)
                     System_Collections_Generic_List_object___ToArray(pSVar10,MethodInfo_String_ToArray);
            return pSVar8;
          }
        }
      }
      else {
        if ((int)uVar2 < 1) goto label_0409c515;
        unaff_RBP = (MethodInfo_33E1AF0 **)0x0;
        unaff_R13 = &MethodInfo_Boolean_Add;
        if ((uVar2 & 0xffffffff) != 0) {
          do {
            item = (MethodInfo **)pSVar8->m_Items[(long)unaff_RBP];
            ppMStack_68 = (MethodInfo_33E1AF0 **)0x409c47e;
            bVar7 = System_Collections_Generic_HashSet_object___Add
                              (__this_04,(Il2CppObject *)item,MethodInfo_Boolean_Add);
            lVar4 = MethodInfo_Void_Add;
            if ((char)bVar7 != '\0') {
              piVar1 = &(pSVar10->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar3 = (pSVar10->fields)._items;
              if (pSVar3 == (System_Object_array *)0x0) goto label_0409c687;
              uVar6 = (pSVar10->fields)._size;
              if (uVar6 < (uint)pSVar3->max_length) {
                (pSVar10->fields)._size = uVar6 + 1;
                pSVar3->m_Items[(int)uVar6] = (Il2CppObject *)item;
                ppMStack_68 = (MethodInfo_33E1AF0 **)0x409c4c3;
                il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar6,item);
              }
              else {
                ppMStack_68 = (MethodInfo_33E1AF0 **)0x409c44a;
                System_Collections_Generic_List_object___AddWithResize
                          (pSVar10,(Il2CppObject *)item,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
              }
            }
            unaff_RBP = (MethodInfo_33E1AF0 **)((long)unaff_RBP + 1);
            uVar6 = (uint)pSVar8->max_length;
            if ((long)(int)uVar6 <= (long)unaff_RBP) goto label_0409c515;
          } while (unaff_RBP < (MethodInfo_33E1AF0 **)(ulong)uVar6);
        }
label_0409c682:
        ppMStack_68 = (MethodInfo_33E1AF0 **)0x409c687;
        il2cpp_runtime_helper_022b2ca0();
        pSStack_88 = pSVar8;
      }
    }
  }
label_0409c687:
  ppMStack_68 = (MethodInfo_33E1AF0 **)0x409c68c;
  il2cpp_runtime_helper_022b2c90();
  pSStack_90 = (System_String_o *)item;
  ppMStack_80 = unaff_R13;
  pSStack_78 = __this_04;
  pSStack_70 = pSVar10;
  ppMStack_68 = unaff_RBP;
  if (g_data_057ac472 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinLevels);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&"Name");
    il2cpp_runtime_helper_023445d0(&"Addons");
    g_data_057ac472 = '\x01';
  }
  pSVar10 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor(pSVar10,MethodInfo_List_1_System_String);
  if (*(int *)((long)&TypeInfo_BuiltinLevels[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar12 = *(SimpleJSONFixed_JSONNode_o **)TypeInfo_BuiltinLevels[2].virtualMethodPointer;
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar14 = (MethodInfo *)0x0;
  bVar7 = SimpleJSONFixed_JSONNode__op_Equality(pSVar12,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
    if (*(int *)((long)&TypeInfo_BuiltinLevels[2].parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    plVar11 = *(long **)TypeInfo_BuiltinLevels[2].virtualMethodPointer;
    if (plVar11 == (long *)0x0) goto label_0409ca6b;
    pMVar14 = "Addons";
    cVar5 = (**(code **)(*plVar11 + 0x2f8))(plVar11,"Addons",*(undefined8 *)(*plVar11 + 0x300));
    if (cVar5 != '\0') {
      if (*(int *)((long)&TypeInfo_BuiltinLevels[2].parameters + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      plVar11 = *(long **)TypeInfo_BuiltinLevels[2].virtualMethodPointer;
      if ((plVar11 == (long *)0x0) ||
         (pMVar14 = "Addons",
         plVar11 = (long *)(**(code **)(*plVar11 + 0x1a8))
                                     (plVar11,"Addons",*(undefined8 *)(*plVar11 + 0x1b0)),
         plVar11 == (long *)0x0)) goto label_0409ca6b;
      (**(code **)(*plVar11 + 0x338))(&pIStack_d8,plVar11,*(undefined8 *)(*plVar11 + 0x340));
      pMVar14 = (MethodInfo *)0x0;
      __this.fields.m_Object.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIStack_d0;
      __this.fields._0_8_ = pIStack_d8;
      __this.fields.m_Object.fields._8_8_ = pIStack_c8;
      __this.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcStack_c0;
      __this.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIStack_b8;
      __this.fields.m_Object.fields._32_8_ = pIStack_b0;
      __this.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIStack_a8;
      __this.fields.m_Array.fields._8_8_ = _Stack_a0.rgctx_data;
      __this.fields.m_Array.fields._current = _Stack_98.genericMethod;
      bVar7 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext(__this,(MethodInfo *)&stack0xfffffffffffffed8);
      if ((char)bVar7 != '\0') {
        pIVar17 = pIStack_d8;
        pIVar18 = pIStack_d0;
        pIVar19 = pIStack_c8;
        pcVar20 = pcStack_c0;
        pIVar21 = pIStack_b8;
        pIVar22 = pIStack_b0;
        ppIVar23 = ppIStack_a8;
        _Var24 = _Stack_a0;
        _Var25 = _Stack_98;
        if (pSVar10 == (System_Collections_Generic_List_object__o *)0x0) {
          do {
            __this_00.fields.m_Object.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar18;
            __this_00.fields._0_8_ = pIVar17;
            __this_00.fields.m_Object.fields._8_8_ = pIVar19;
            __this_00.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar20;
            __this_00.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar21;
            __this_00.fields.m_Object.fields._32_8_ = pIVar22;
            __this_00.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar23;
            __this_00.fields.m_Array.fields._8_8_ = _Var24.rgctx_data;
            __this_00.fields.m_Array.fields._current = _Var25.genericMethod;
            SVar16 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                               (__this_00,(MethodInfo *)&stack0xfffffffffffffed8);
            pMVar14 = (MethodInfo *)SVar16.fields.value;
            if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar12 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0(SVar16,(MethodInfo *)0x0);
            if ((pSVar12 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
               (pMVar14 = "Name",
               plVar11 = (long *)(*(pSVar12->klass->vtable)._7_get_Item.methodPtr)
                                           (pSVar12,"Name",(pSVar12->klass->vtable)._7_get_Item.method),
               plVar11 == (long *)0x0)) goto label_0409ca6b;
            pSVar9 = (System_String_o *)(**(code **)(*plVar11 + 0x1c8))(plVar11);
            pMVar14 = (MethodInfo *)0x0;
            bVar7 = System_String__IsNullOrEmpty(pSVar9,(MethodInfo *)0x0);
            if ((char)bVar7 == '\0') goto label_0409ca6b;
            pMVar14 = (MethodInfo *)0x0;
            __this_01.fields.m_Object.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar18;
            __this_01.fields._0_8_ = pIVar17;
            __this_01.fields.m_Object.fields._8_8_ = pIVar19;
            __this_01.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar20;
            __this_01.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar21;
            __this_01.fields.m_Object.fields._32_8_ = pIVar22;
            __this_01.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar23;
            __this_01.fields.m_Array.fields._8_8_ = _Var24.rgctx_data;
            __this_01.fields.m_Array.fields._current = _Var25.genericMethod;
            bVar7 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                              (__this_01,(MethodInfo *)&stack0xfffffffffffffed8);
          } while ((char)bVar7 != '\0');
        }
        else {
          do {
            __this_03.fields.m_Object.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar18;
            __this_03.fields._0_8_ = pIVar17;
            __this_03.fields.m_Object.fields._8_8_ = pIVar19;
            __this_03.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar20;
            __this_03.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar21;
            __this_03.fields.m_Object.fields._32_8_ = pIVar22;
            __this_03.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar23;
            __this_03.fields.m_Array.fields._8_8_ = _Var24.rgctx_data;
            __this_03.fields.m_Array.fields._current = _Var25.genericMethod;
            SVar16 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                               (__this_03,(MethodInfo *)&stack0xfffffffffffffed8);
            pMVar14 = (MethodInfo *)SVar16.fields.value;
            if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar12 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0(SVar16,(MethodInfo *)0x0);
            if ((pSVar12 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
               (pMVar14 = "Name",
               plVar11 = (long *)(*(pSVar12->klass->vtable)._7_get_Item.methodPtr)
                                           (pSVar12,"Name",(pSVar12->klass->vtable)._7_get_Item.method),
               plVar11 == (long *)0x0)) goto label_0409ca6b;
            pSVar9 = (System_String_o *)(**(code **)(*plVar11 + 0x1c8))(plVar11);
            pMVar14 = (MethodInfo *)0x0;
            bVar7 = System_String__IsNullOrEmpty(pSVar9,(MethodInfo *)0x0);
            lVar4 = MethodInfo_Void_Add;
            if ((char)bVar7 == '\0') {
              piVar1 = &(pSVar10->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar3 = (pSVar10->fields)._items;
              if (pSVar3 == (System_Object_array *)0x0) goto label_0409ca6b;
              uVar6 = (pSVar10->fields)._size;
              if (uVar6 < (uint)pSVar3->max_length) {
                (pSVar10->fields)._size = uVar6 + 1;
                pSVar3->m_Items[(int)uVar6] = (Il2CppObject *)pSVar9;
                il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar6);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          (pSVar10,(Il2CppObject *)pSVar9,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
              }
            }
            pMVar14 = (MethodInfo *)0x0;
            __this_02.fields.m_Object.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar18;
            __this_02.fields._0_8_ = pIVar17;
            __this_02.fields.m_Object.fields._8_8_ = pIVar19;
            __this_02.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar20;
            __this_02.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar21;
            __this_02.fields.m_Object.fields._32_8_ = pIVar22;
            __this_02.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar23;
            __this_02.fields.m_Array.fields._8_8_ = _Var24.rgctx_data;
            __this_02.fields.m_Array.fields._current = _Var25.genericMethod;
            bVar7 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                              (__this_02,(MethodInfo *)&stack0xfffffffffffffed8);
          } while ((char)bVar7 != '\0');
        }
      }
    }
  }
  if (pSVar10 != (System_Collections_Generic_List_object__o *)0x0) {
    pSVar8 = (System_String_array *)System_Collections_Generic_List_object___ToArray(pSVar10,MethodInfo_String_ToArray);
    return pSVar8;
  }
label_0409ca6b:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac474 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinLevels);
    il2cpp_runtime_helper_023445d0(&".cl");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ac474 = '\x01';
  }
  if (*(int *)((long)&TypeInfo_BuiltinLevels[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar9 = *(System_String_o **)(TypeInfo_BuiltinLevels[2].virtualMethodPointer + 0x20);
  pSVar8 = Map_BuiltinLevels__GetClFiles(pSVar9,pMVar14);
  if (pSVar8 != (System_String_array *)0x0) {
    uVar6 = (uint)pSVar8->max_length;
    if (0 < (int)uVar6) {
      uVar15 = 0;
      do {
        if (uVar6 <= uVar15) {
label_0409cb50:
          il2cpp_runtime_helper_022b2ca0();
          goto label_0409cb55;
        }
        pSVar9 = pSVar8->m_Items[(int)uVar15];
        if (pSVar9 == (System_String_o *)0x0) goto label_0409cb55;
        pSVar13 = (System_String_c *)
                  System_String__Replace_3af9030(pSVar9,".cl","",(MethodInfo *)0x0);
        if ((uint)pSVar8->max_length <= uVar15) goto label_0409cb50;
        pSVar9 = (System_String_o *)(pSVar8->m_Items + (int)uVar15);
        pSVar9->klass = pSVar13;
        il2cpp_runtime_helper_022b4080();
        uVar15 = uVar15 + 1;
        uVar6 = (uint)pSVar8->max_length;
      } while ((int)uVar15 < (int)uVar6);
    }
    return pSVar8;
  }
label_0409cb55:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac47f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_String_Select_String_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_string_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_GetClFiles_b__29_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"*.cl");
    g_data_057ac47f = '\x01';
  }
  bVar7 = System_IO_Directory__Exists(pSVar9,(MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
    pSVar8 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,0);
    return pSVar8;
  }
  pSVar8 = System_IO_Directory__GetFiles_3bfd9f0(pSVar9,"*.cl",0,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    selector = *(System_Func_TSource__TResult__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
  }
  else {
    selector = *(System_Func_TSource__TResult__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
  }
  if (selector == (System_Func_TSource__TResult__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    selector = (System_Func_TSource__TResult__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_string_string);
    System_Func_object__object____ctor();
    lVar4 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_TSource__TResult__o **)(lVar4 + 0x10) = selector;
    il2cpp_runtime_helper_022b4080(lVar4 + 0x10,selector);
  }
  source = System_Linq_Enumerable__Select_object__object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar8,selector,MethodInfo_IEnumerable_1_System_String_Select_String_String);
  pSVar8 = (System_String_array *)
           System_Linq_Enumerable__ToArray_object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source,MethodInfo_String_ToArray_String);
  return pSVar8;
}


// Map.BuiltinLevels$$LoadAddon
// il2cpp: System_String_o* Map_BuiltinLevels__LoadAddon (System_String_o* name, const MethodInfo* method);
// 0x4098a40

System_String_o * Map_BuiltinLevels__LoadAddon(System_String_o *name,MethodInfo *method)

{
  char cVar1;
  bool_conflict bVar2;
  System_String_o *name_00;
  System_String_o *pSVar3;
  MethodInfo *method_00;
  
  if (g_data_057ac470 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinLevels);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&"/");
    il2cpp_runtime_helper_023445d0(&".cl");
    il2cpp_runtime_helper_023445d0(&"Logic");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ac470 = '\x01';
  }
  method_00 = "";
  bVar2 = System_String__op_Equality(name,(System_String_o *)"",(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      bVar2 = Map_BuiltinLevels__IsAddonBuiltin(name,method_00);
      cVar1 = (char)bVar2;
    }
    else {
      bVar2 = Map_BuiltinLevels__IsAddonBuiltin(name,method_00);
      cVar1 = (char)bVar2;
    }
    if (cVar1 != '\0') {
      if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar3 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 0x30);
      name_00 = System_String__Concat_3ae5ba0(name,"Logic",(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar3 = ApplicationManagers_ResourceManager__TryLoadText(pSVar3,name_00,(MethodInfo *)0x0);
      return pSVar3;
    }
    if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar3 = System_String__Concat_3af7470
                       (*(System_String_o **)(*(long *)(TypeInfo_BuiltinLevels + 0xb8) + 0x20),"/",name,
                        ".cl",(MethodInfo *)0x0);
    bVar2 = System_IO_File__Exists(pSVar3,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      pSVar3 = System_IO_File__ReadAllText(pSVar3,(MethodInfo *)0x0);
      return pSVar3;
    }
  }
  return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
}


// Map.BuiltinLevels$$GetAddonNames
// il2cpp: System_String_array* Map_BuiltinLevels__GetAddonNames (const MethodInfo* method);
// 0x409c300

System_String_array * Map_BuiltinLevels__GetAddonNames(MethodInfo *method)

{
  int32_t *piVar1;
  ulong uVar2;
  System_Object_array *pSVar3;
  long lVar4;
  SimpleJSONFixed_JSONNode_Enumerator_o __this;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_00;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_01;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_02;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_03;
  char cVar5;
  bool_conflict bVar6;
  uint uVar7;
  System_Collections_Generic_List_object__o *pSVar8;
  System_Collections_Generic_HashSet_object__o *__this_04;
  System_String_array *pSVar9;
  long *plVar10;
  SimpleJSONFixed_JSONNode_o *pSVar11;
  System_String_o *pSVar12;
  System_String_c *pSVar13;
  System_Func_TSource__TResult__o *selector;
  System_Collections_Generic_IEnumerable_TResult__o *source;
  MethodInfo *pMVar14;
  uint uVar15;
  System_String_o *unaff_RBX;
  MethodInfo_33E1AF0 **unaff_RBP;
  System_String_array *unaff_R12;
  MethodInfo_33E1AF0 **unaff_R13;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o SVar16;
  Il2CppMethodPointer pIVar17;
  Il2CppMethodPointer pIVar18;
  InvokerMethod pIVar19;
  char *pcVar20;
  Il2CppClass *pIVar21;
  Il2CppType *pIVar22;
  Il2CppType **ppIVar23;
  _union_13 _Var24;
  _union_14 _Var25;
  Il2CppMethodPointer pIStack_b0;
  Il2CppMethodPointer pIStack_a8;
  InvokerMethod pIStack_a0;
  char *pcStack_98;
  Il2CppClass *pIStack_90;
  Il2CppType *pIStack_88;
  Il2CppType **ppIStack_80;
  _union_13 _Stack_78;
  _union_14 _Stack_70;
  System_String_o *pSStack_68;
  System_String_array *pSStack_60;
  MethodInfo_33E1AF0 **ppMStack_58;
  System_Collections_Generic_HashSet_object__o *pSStack_50;
  System_Collections_Generic_List_object__o *pSStack_48;
  MethodInfo_33E1AF0 **ppMStack_40;
  
  if (g_data_057ac471 == '\0') {
    ppMStack_40 = (MethodInfo_33E1AF0 **)0x409c320;
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinLevels);
    ppMStack_40 = (MethodInfo_33E1AF0 **)0x409c32c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    ppMStack_40 = (MethodInfo_33E1AF0 **)0x409c338;
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    ppMStack_40 = (MethodInfo_33E1AF0 **)0x409c344;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    ppMStack_40 = (MethodInfo_33E1AF0 **)0x409c350;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    ppMStack_40 = (MethodInfo_33E1AF0 **)0x409c35c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    ppMStack_40 = (MethodInfo_33E1AF0 **)0x409c368;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    ppMStack_40 = (MethodInfo_33E1AF0 **)0x409c374;
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    g_data_057ac471 = '\x01';
  }
  ppMStack_40 = (MethodInfo_33E1AF0 **)0x409c38a;
  pSVar8 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  ppMStack_40 = (MethodInfo_33E1AF0 **)0x409c39f;
  System_Collections_Generic_List_object____ctor(pSVar8,MethodInfo_List_1_System_String);
  ppMStack_40 = (MethodInfo_33E1AF0 **)0x409c3ae;
  __this_04 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  ppMStack_40 = (MethodInfo_33E1AF0 **)0x409c3c3;
  System_Collections_Generic_HashSet_object____ctor(__this_04,MethodInfo_HashSet_1_System_String);
  pMVar14 = TypeInfo_BuiltinLevels;
  if (*(int *)((long)&TypeInfo_BuiltinLevels[2].parameters + 4) == 0) {
    ppMStack_40 = (MethodInfo_33E1AF0 **)0x409c3db;
    il2cpp_runtime_helper_02337ed0();
  }
  ppMStack_40 = (MethodInfo_33E1AF0 **)0x409c3e0;
  pSVar9 = Map_BuiltinLevels__GetBuiltinAddons(pMVar14);
  pSStack_60 = unaff_R12;
  if (pSVar9 != (System_String_array *)0x0) {
    pSStack_60 = pSVar9;
    if (__this_04 == (System_Collections_Generic_HashSet_object__o *)0x0) {
      if ((int)pSVar9->max_length < 1) goto label_0409c515;
    }
    else {
      uVar2 = pSVar9->max_length;
      pSVar12 = (System_String_o *)(uVar2 & 0xffffffff);
      if (pSVar8 == (System_Collections_Generic_List_object__o *)0x0) {
        if (0 < (int)uVar2) {
          unaff_RBX = (System_String_o *)0x0;
          unaff_RBP = &MethodInfo_Boolean_Add;
          do {
            if (pSVar12 <= unaff_RBX) goto label_0409c682;
            ppMStack_40 = (MethodInfo_33E1AF0 **)0x409c4fc;
            bVar6 = System_Collections_Generic_HashSet_object___Add
                              (__this_04,(Il2CppObject *)pSVar9->m_Items[(long)unaff_RBX],MethodInfo_Boolean_Add);
            if ((char)bVar6 != '\0') goto label_0409c687;
            unaff_RBX = (System_String_o *)((long)&unaff_RBX->klass + 1);
            uVar7 = (uint)pSVar9->max_length;
            pSVar12 = (System_String_o *)(ulong)uVar7;
          } while ((long)unaff_RBX < (long)(int)uVar7);
        }
label_0409c515:
        pMVar14 = TypeInfo_BuiltinLevels;
        if (*(int *)((long)&TypeInfo_BuiltinLevels[2].parameters + 4) == 0) {
          ppMStack_40 = (MethodInfo_33E1AF0 **)0x409c52d;
          il2cpp_runtime_helper_02337ed0();
        }
        ppMStack_40 = (MethodInfo_33E1AF0 **)0x409c532;
        pSVar9 = Map_BuiltinLevels__GetCustomAddons(pMVar14);
        if (pSVar9 != (System_String_array *)0x0) {
          pSStack_60 = pSVar9;
          if (__this_04 == (System_Collections_Generic_HashSet_object__o *)0x0) {
            if (0 < (int)pSVar9->max_length) goto label_0409c687;
          }
          else {
            uVar2 = pSVar9->max_length;
            pSVar12 = (System_String_o *)(uVar2 & 0xffffffff);
            if (pSVar8 == (System_Collections_Generic_List_object__o *)0x0) {
              if (0 < (int)uVar2) {
                unaff_RBX = (System_String_o *)0x0;
                unaff_RBP = &MethodInfo_Boolean_Add;
                do {
                  if (pSVar12 <= unaff_RBX) goto label_0409c682;
                  ppMStack_40 = (MethodInfo_33E1AF0 **)0x409c648;
                  bVar6 = System_Collections_Generic_HashSet_object___Add
                                    (__this_04,(Il2CppObject *)pSVar9->m_Items[(long)unaff_RBX],MethodInfo_Boolean_Add);
                  if ((char)bVar6 != '\0') goto label_0409c687;
                  unaff_RBX = (System_String_o *)((long)&unaff_RBX->klass + 1);
                  uVar7 = (uint)pSVar9->max_length;
                  pSVar12 = (System_String_o *)(ulong)uVar7;
                } while ((long)unaff_RBX < (long)(int)uVar7);
              }
            }
            else if (0 < (int)uVar2) {
              unaff_RBP = (MethodInfo_33E1AF0 **)0x0;
              unaff_R13 = &MethodInfo_Boolean_Add;
              if ((uVar2 & 0xffffffff) != 0) {
                do {
                  unaff_RBX = pSVar9->m_Items[(long)unaff_RBP];
                  ppMStack_40 = (MethodInfo_33E1AF0 **)0x409c5ce;
                  bVar6 = System_Collections_Generic_HashSet_object___Add
                                    (__this_04,(Il2CppObject *)unaff_RBX,MethodInfo_Boolean_Add);
                  lVar4 = MethodInfo_Void_Add;
                  if ((char)bVar6 != '\0') {
                    piVar1 = &(pSVar8->fields)._version;
                    *piVar1 = *piVar1 + 1;
                    pSVar3 = (pSVar8->fields)._items;
                    if (pSVar3 == (System_Object_array *)0x0) goto label_0409c687;
                    uVar7 = (pSVar8->fields)._size;
                    if (uVar7 < (uint)pSVar3->max_length) {
                      (pSVar8->fields)._size = uVar7 + 1;
                      pSVar3->m_Items[(int)uVar7] = (Il2CppObject *)unaff_RBX;
                      ppMStack_40 = (MethodInfo_33E1AF0 **)0x409c613;
                      il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar7,unaff_RBX);
                    }
                    else {
                      ppMStack_40 = (MethodInfo_33E1AF0 **)0x409c59a;
                      System_Collections_Generic_List_object___AddWithResize
                                (pSVar8,(Il2CppObject *)unaff_RBX,
                                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
                    }
                  }
                  unaff_RBP = (MethodInfo_33E1AF0 **)((long)unaff_RBP + 1);
                  uVar7 = (uint)pSVar9->max_length;
                  if ((long)(int)uVar7 <= (long)unaff_RBP) goto label_0409c65d;
                } while (unaff_RBP < (MethodInfo_33E1AF0 **)(ulong)uVar7);
              }
              goto label_0409c682;
            }
          }
label_0409c65d:
          if (pSVar8 != (System_Collections_Generic_List_object__o *)0x0) {
            pSVar9 = (System_String_array *)
                     System_Collections_Generic_List_object___ToArray(pSVar8,MethodInfo_String_ToArray);
            return pSVar9;
          }
        }
      }
      else {
        if ((int)uVar2 < 1) goto label_0409c515;
        unaff_RBP = (MethodInfo_33E1AF0 **)0x0;
        unaff_R13 = &MethodInfo_Boolean_Add;
        if ((uVar2 & 0xffffffff) != 0) {
          do {
            unaff_RBX = pSVar9->m_Items[(long)unaff_RBP];
            ppMStack_40 = (MethodInfo_33E1AF0 **)0x409c47e;
            bVar6 = System_Collections_Generic_HashSet_object___Add
                              (__this_04,(Il2CppObject *)unaff_RBX,MethodInfo_Boolean_Add);
            lVar4 = MethodInfo_Void_Add;
            if ((char)bVar6 != '\0') {
              piVar1 = &(pSVar8->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar3 = (pSVar8->fields)._items;
              if (pSVar3 == (System_Object_array *)0x0) goto label_0409c687;
              uVar7 = (pSVar8->fields)._size;
              if (uVar7 < (uint)pSVar3->max_length) {
                (pSVar8->fields)._size = uVar7 + 1;
                pSVar3->m_Items[(int)uVar7] = (Il2CppObject *)unaff_RBX;
                ppMStack_40 = (MethodInfo_33E1AF0 **)0x409c4c3;
                il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar7,unaff_RBX);
              }
              else {
                ppMStack_40 = (MethodInfo_33E1AF0 **)0x409c44a;
                System_Collections_Generic_List_object___AddWithResize
                          (pSVar8,(Il2CppObject *)unaff_RBX,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
              }
            }
            unaff_RBP = (MethodInfo_33E1AF0 **)((long)unaff_RBP + 1);
            uVar7 = (uint)pSVar9->max_length;
            if ((long)(int)uVar7 <= (long)unaff_RBP) goto label_0409c515;
          } while (unaff_RBP < (MethodInfo_33E1AF0 **)(ulong)uVar7);
        }
label_0409c682:
        ppMStack_40 = (MethodInfo_33E1AF0 **)0x409c687;
        il2cpp_runtime_helper_022b2ca0();
        pSStack_60 = pSVar9;
      }
    }
  }
label_0409c687:
  ppMStack_40 = (MethodInfo_33E1AF0 **)0x409c68c;
  il2cpp_runtime_helper_022b2c90();
  pSStack_68 = unaff_RBX;
  ppMStack_58 = unaff_R13;
  pSStack_50 = __this_04;
  pSStack_48 = pSVar8;
  ppMStack_40 = unaff_RBP;
  if (g_data_057ac472 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinLevels);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&"Name");
    il2cpp_runtime_helper_023445d0(&"Addons");
    g_data_057ac472 = '\x01';
  }
  pSVar8 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor(pSVar8,MethodInfo_List_1_System_String);
  if (*(int *)((long)&TypeInfo_BuiltinLevels[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar11 = *(SimpleJSONFixed_JSONNode_o **)TypeInfo_BuiltinLevels[2].virtualMethodPointer;
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar14 = (MethodInfo *)0x0;
  bVar6 = SimpleJSONFixed_JSONNode__op_Equality(pSVar11,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    if (*(int *)((long)&TypeInfo_BuiltinLevels[2].parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    plVar10 = *(long **)TypeInfo_BuiltinLevels[2].virtualMethodPointer;
    if (plVar10 == (long *)0x0) goto label_0409ca6b;
    pMVar14 = "Addons";
    cVar5 = (**(code **)(*plVar10 + 0x2f8))(plVar10,"Addons",*(undefined8 *)(*plVar10 + 0x300));
    if (cVar5 != '\0') {
      if (*(int *)((long)&TypeInfo_BuiltinLevels[2].parameters + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      plVar10 = *(long **)TypeInfo_BuiltinLevels[2].virtualMethodPointer;
      if ((plVar10 == (long *)0x0) ||
         (pMVar14 = "Addons",
         plVar10 = (long *)(**(code **)(*plVar10 + 0x1a8))
                                     (plVar10,"Addons",*(undefined8 *)(*plVar10 + 0x1b0)),
         plVar10 == (long *)0x0)) goto label_0409ca6b;
      (**(code **)(*plVar10 + 0x338))(&pIStack_b0,plVar10,*(undefined8 *)(*plVar10 + 0x340));
      pMVar14 = (MethodInfo *)0x0;
      __this.fields.m_Object.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIStack_a8;
      __this.fields._0_8_ = pIStack_b0;
      __this.fields.m_Object.fields._8_8_ = pIStack_a0;
      __this.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcStack_98;
      __this.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIStack_90;
      __this.fields.m_Object.fields._32_8_ = pIStack_88;
      __this.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIStack_80;
      __this.fields.m_Array.fields._8_8_ = _Stack_78.rgctx_data;
      __this.fields.m_Array.fields._current = _Stack_70.genericMethod;
      bVar6 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext(__this,(MethodInfo *)&stack0xffffffffffffff00);
      if ((char)bVar6 != '\0') {
        pIVar17 = pIStack_b0;
        pIVar18 = pIStack_a8;
        pIVar19 = pIStack_a0;
        pcVar20 = pcStack_98;
        pIVar21 = pIStack_90;
        pIVar22 = pIStack_88;
        ppIVar23 = ppIStack_80;
        _Var24 = _Stack_78;
        _Var25 = _Stack_70;
        if (pSVar8 == (System_Collections_Generic_List_object__o *)0x0) {
          do {
            __this_00.fields.m_Object.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar18;
            __this_00.fields._0_8_ = pIVar17;
            __this_00.fields.m_Object.fields._8_8_ = pIVar19;
            __this_00.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar20;
            __this_00.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar21;
            __this_00.fields.m_Object.fields._32_8_ = pIVar22;
            __this_00.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar23;
            __this_00.fields.m_Array.fields._8_8_ = _Var24.rgctx_data;
            __this_00.fields.m_Array.fields._current = _Var25.genericMethod;
            SVar16 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                               (__this_00,(MethodInfo *)&stack0xffffffffffffff00);
            pMVar14 = (MethodInfo *)SVar16.fields.value;
            if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar11 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0(SVar16,(MethodInfo *)0x0);
            if ((pSVar11 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
               (pMVar14 = "Name",
               plVar10 = (long *)(*(pSVar11->klass->vtable)._7_get_Item.methodPtr)
                                           (pSVar11,"Name",(pSVar11->klass->vtable)._7_get_Item.method),
               plVar10 == (long *)0x0)) goto label_0409ca6b;
            pSVar12 = (System_String_o *)(**(code **)(*plVar10 + 0x1c8))(plVar10);
            pMVar14 = (MethodInfo *)0x0;
            bVar6 = System_String__IsNullOrEmpty(pSVar12,(MethodInfo *)0x0);
            if ((char)bVar6 == '\0') goto label_0409ca6b;
            pMVar14 = (MethodInfo *)0x0;
            __this_01.fields.m_Object.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar18;
            __this_01.fields._0_8_ = pIVar17;
            __this_01.fields.m_Object.fields._8_8_ = pIVar19;
            __this_01.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar20;
            __this_01.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar21;
            __this_01.fields.m_Object.fields._32_8_ = pIVar22;
            __this_01.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar23;
            __this_01.fields.m_Array.fields._8_8_ = _Var24.rgctx_data;
            __this_01.fields.m_Array.fields._current = _Var25.genericMethod;
            bVar6 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                              (__this_01,(MethodInfo *)&stack0xffffffffffffff00);
          } while ((char)bVar6 != '\0');
        }
        else {
          do {
            __this_03.fields.m_Object.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar18;
            __this_03.fields._0_8_ = pIVar17;
            __this_03.fields.m_Object.fields._8_8_ = pIVar19;
            __this_03.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar20;
            __this_03.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar21;
            __this_03.fields.m_Object.fields._32_8_ = pIVar22;
            __this_03.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar23;
            __this_03.fields.m_Array.fields._8_8_ = _Var24.rgctx_data;
            __this_03.fields.m_Array.fields._current = _Var25.genericMethod;
            SVar16 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                               (__this_03,(MethodInfo *)&stack0xffffffffffffff00);
            pMVar14 = (MethodInfo *)SVar16.fields.value;
            if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar11 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0(SVar16,(MethodInfo *)0x0);
            if ((pSVar11 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
               (pMVar14 = "Name",
               plVar10 = (long *)(*(pSVar11->klass->vtable)._7_get_Item.methodPtr)
                                           (pSVar11,"Name",(pSVar11->klass->vtable)._7_get_Item.method),
               plVar10 == (long *)0x0)) goto label_0409ca6b;
            pSVar12 = (System_String_o *)(**(code **)(*plVar10 + 0x1c8))(plVar10);
            pMVar14 = (MethodInfo *)0x0;
            bVar6 = System_String__IsNullOrEmpty(pSVar12,(MethodInfo *)0x0);
            lVar4 = MethodInfo_Void_Add;
            if ((char)bVar6 == '\0') {
              piVar1 = &(pSVar8->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar3 = (pSVar8->fields)._items;
              if (pSVar3 == (System_Object_array *)0x0) goto label_0409ca6b;
              uVar7 = (pSVar8->fields)._size;
              if (uVar7 < (uint)pSVar3->max_length) {
                (pSVar8->fields)._size = uVar7 + 1;
                pSVar3->m_Items[(int)uVar7] = (Il2CppObject *)pSVar12;
                il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar7);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          (pSVar8,(Il2CppObject *)pSVar12,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
              }
            }
            pMVar14 = (MethodInfo *)0x0;
            __this_02.fields.m_Object.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar18;
            __this_02.fields._0_8_ = pIVar17;
            __this_02.fields.m_Object.fields._8_8_ = pIVar19;
            __this_02.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar20;
            __this_02.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar21;
            __this_02.fields.m_Object.fields._32_8_ = pIVar22;
            __this_02.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar23;
            __this_02.fields.m_Array.fields._8_8_ = _Var24.rgctx_data;
            __this_02.fields.m_Array.fields._current = _Var25.genericMethod;
            bVar6 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                              (__this_02,(MethodInfo *)&stack0xffffffffffffff00);
          } while ((char)bVar6 != '\0');
        }
      }
    }
  }
  if (pSVar8 != (System_Collections_Generic_List_object__o *)0x0) {
    pSVar9 = (System_String_array *)System_Collections_Generic_List_object___ToArray(pSVar8,MethodInfo_String_ToArray);
    return pSVar9;
  }
label_0409ca6b:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac474 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinLevels);
    il2cpp_runtime_helper_023445d0(&".cl");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ac474 = '\x01';
  }
  if (*(int *)((long)&TypeInfo_BuiltinLevels[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar12 = *(System_String_o **)(TypeInfo_BuiltinLevels[2].virtualMethodPointer + 0x20);
  pSVar9 = Map_BuiltinLevels__GetClFiles(pSVar12,pMVar14);
  if (pSVar9 != (System_String_array *)0x0) {
    uVar7 = (uint)pSVar9->max_length;
    if (0 < (int)uVar7) {
      uVar15 = 0;
      do {
        if (uVar7 <= uVar15) {
label_0409cb50:
          il2cpp_runtime_helper_022b2ca0();
          goto label_0409cb55;
        }
        pSVar12 = pSVar9->m_Items[(int)uVar15];
        if (pSVar12 == (System_String_o *)0x0) goto label_0409cb55;
        pSVar13 = (System_String_c *)
                  System_String__Replace_3af9030(pSVar12,".cl","",(MethodInfo *)0x0);
        if ((uint)pSVar9->max_length <= uVar15) goto label_0409cb50;
        pSVar12 = (System_String_o *)(pSVar9->m_Items + (int)uVar15);
        pSVar12->klass = pSVar13;
        il2cpp_runtime_helper_022b4080();
        uVar15 = uVar15 + 1;
        uVar7 = (uint)pSVar9->max_length;
      } while ((int)uVar15 < (int)uVar7);
    }
    return pSVar9;
  }
label_0409cb55:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac47f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_String_Select_String_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_string_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_GetClFiles_b__29_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"*.cl");
    g_data_057ac47f = '\x01';
  }
  bVar6 = System_IO_Directory__Exists(pSVar12,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    pSVar9 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,0);
    return pSVar9;
  }
  pSVar9 = System_IO_Directory__GetFiles_3bfd9f0(pSVar12,"*.cl",0,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    selector = *(System_Func_TSource__TResult__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
  }
  else {
    selector = *(System_Func_TSource__TResult__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
  }
  if (selector == (System_Func_TSource__TResult__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    selector = (System_Func_TSource__TResult__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_string_string);
    System_Func_object__object____ctor();
    lVar4 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_TSource__TResult__o **)(lVar4 + 0x10) = selector;
    il2cpp_runtime_helper_022b4080(lVar4 + 0x10,selector);
  }
  source = System_Linq_Enumerable__Select_object__object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar9,selector,MethodInfo_IEnumerable_1_System_String_Select_String_String);
  pSVar9 = (System_String_array *)
           System_Linq_Enumerable__ToArray_object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source,MethodInfo_String_ToArray_String);
  return pSVar9;
}


// Map.BuiltinLevels$$GetBuiltinAddons
// il2cpp: System_String_array* Map_BuiltinLevels__GetBuiltinAddons (const MethodInfo* method);
// 0x409c690

System_String_array * Map_BuiltinLevels__GetBuiltinAddons(MethodInfo *method)

{
  int32_t *piVar1;
  System_Object_array *pSVar2;
  long lVar3;
  SimpleJSONFixed_JSONNode_Enumerator_o __this;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_00;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_01;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_02;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_03;
  char cVar4;
  bool_conflict bVar5;
  uint uVar6;
  System_Collections_Generic_List_object__o *__this_04;
  long *plVar7;
  SimpleJSONFixed_JSONNode_o *pSVar8;
  System_String_o *pSVar9;
  System_String_array *pSVar10;
  System_String_c *pSVar11;
  System_Func_TSource__TResult__o *selector;
  System_Collections_Generic_IEnumerable_TResult__o *source;
  MethodInfo *method_00;
  uint uVar12;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o SVar13;
  Il2CppMethodPointer pIVar14;
  Il2CppMethodPointer pIVar15;
  InvokerMethod pIVar16;
  char *pcVar17;
  Il2CppClass *pIVar18;
  Il2CppType *pIVar19;
  Il2CppType **ppIVar20;
  _union_13 _Var21;
  _union_14 _Var22;
  Il2CppMethodPointer local_78;
  Il2CppMethodPointer pIStack_70;
  InvokerMethod local_68;
  char *pcStack_60;
  Il2CppClass *local_58;
  Il2CppType *pIStack_50;
  Il2CppType **local_48;
  _union_13 _Stack_40;
  _union_14 local_38;
  
  if (g_data_057ac472 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinLevels);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&"Name");
    il2cpp_runtime_helper_023445d0(&"Addons");
    g_data_057ac472 = '\x01';
  }
  __this_04 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor(__this_04,MethodInfo_List_1_System_String);
  if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar8 = (SimpleJSONFixed_JSONNode_o *)**(undefined8 **)(TypeInfo_BuiltinLevels + 0xb8);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  method_00 = (MethodInfo *)0x0;
  bVar5 = SimpleJSONFixed_JSONNode__op_Equality(pSVar8,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    plVar7 = (long *)**(long **)(TypeInfo_BuiltinLevels + 0xb8);
    if (plVar7 == (long *)0x0) goto label_0409ca6b;
    method_00 = "Addons";
    cVar4 = (**(code **)(*plVar7 + 0x2f8))(plVar7,"Addons",*(undefined8 *)(*plVar7 + 0x300));
    if (cVar4 != '\0') {
      if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      plVar7 = (long *)**(long **)(TypeInfo_BuiltinLevels + 0xb8);
      if ((plVar7 == (long *)0x0) ||
         (method_00 = "Addons",
         plVar7 = (long *)(**(code **)(*plVar7 + 0x1a8))(plVar7,"Addons",*(undefined8 *)(*plVar7 + 0x1b0))
         , plVar7 == (long *)0x0)) goto label_0409ca6b;
      (**(code **)(*plVar7 + 0x338))(&local_78,plVar7,*(undefined8 *)(*plVar7 + 0x340));
      method_00 = (MethodInfo *)0x0;
      __this.fields.m_Object.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIStack_70;
      __this.fields._0_8_ = local_78;
      __this.fields.m_Object.fields._8_8_ = local_68;
      __this.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcStack_60;
      __this.fields.m_Object.fields._current.fields.value = (Il2CppObject *)local_58;
      __this.fields.m_Object.fields._32_8_ = pIStack_50;
      __this.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)local_48;
      __this.fields.m_Array.fields._8_8_ = _Stack_40.rgctx_data;
      __this.fields.m_Array.fields._current = local_38.genericMethod;
      bVar5 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext(__this,(MethodInfo *)&stack0xffffffffffffff38);
      if ((char)bVar5 != '\0') {
        pIVar14 = local_78;
        pIVar15 = pIStack_70;
        pIVar16 = local_68;
        pcVar17 = pcStack_60;
        pIVar18 = local_58;
        pIVar19 = pIStack_50;
        ppIVar20 = local_48;
        _Var21 = _Stack_40;
        _Var22 = local_38;
        if (__this_04 == (System_Collections_Generic_List_object__o *)0x0) {
          do {
            __this_00.fields.m_Object.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar15;
            __this_00.fields._0_8_ = pIVar14;
            __this_00.fields.m_Object.fields._8_8_ = pIVar16;
            __this_00.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar17;
            __this_00.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar18;
            __this_00.fields.m_Object.fields._32_8_ = pIVar19;
            __this_00.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar20;
            __this_00.fields.m_Array.fields._8_8_ = _Var21.rgctx_data;
            __this_00.fields.m_Array.fields._current = _Var22.genericMethod;
            SVar13 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                               (__this_00,(MethodInfo *)&stack0xffffffffffffff38);
            method_00 = (MethodInfo *)SVar13.fields.value;
            if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar8 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0(SVar13,(MethodInfo *)0x0);
            if ((pSVar8 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
               (method_00 = "Name",
               plVar7 = (long *)(*(pSVar8->klass->vtable)._7_get_Item.methodPtr)
                                          (pSVar8,"Name",(pSVar8->klass->vtable)._7_get_Item.method),
               plVar7 == (long *)0x0)) goto label_0409ca6b;
            pSVar9 = (System_String_o *)(**(code **)(*plVar7 + 0x1c8))(plVar7);
            method_00 = (MethodInfo *)0x0;
            bVar5 = System_String__IsNullOrEmpty(pSVar9,(MethodInfo *)0x0);
            if ((char)bVar5 == '\0') goto label_0409ca6b;
            method_00 = (MethodInfo *)0x0;
            __this_01.fields.m_Object.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar15;
            __this_01.fields._0_8_ = pIVar14;
            __this_01.fields.m_Object.fields._8_8_ = pIVar16;
            __this_01.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar17;
            __this_01.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar18;
            __this_01.fields.m_Object.fields._32_8_ = pIVar19;
            __this_01.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar20;
            __this_01.fields.m_Array.fields._8_8_ = _Var21.rgctx_data;
            __this_01.fields.m_Array.fields._current = _Var22.genericMethod;
            bVar5 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                              (__this_01,(MethodInfo *)&stack0xffffffffffffff38);
          } while ((char)bVar5 != '\0');
        }
        else {
          do {
            __this_03.fields.m_Object.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar15;
            __this_03.fields._0_8_ = pIVar14;
            __this_03.fields.m_Object.fields._8_8_ = pIVar16;
            __this_03.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar17;
            __this_03.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar18;
            __this_03.fields.m_Object.fields._32_8_ = pIVar19;
            __this_03.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar20;
            __this_03.fields.m_Array.fields._8_8_ = _Var21.rgctx_data;
            __this_03.fields.m_Array.fields._current = _Var22.genericMethod;
            SVar13 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                               (__this_03,(MethodInfo *)&stack0xffffffffffffff38);
            method_00 = (MethodInfo *)SVar13.fields.value;
            if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar8 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0(SVar13,(MethodInfo *)0x0);
            if ((pSVar8 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
               (method_00 = "Name",
               plVar7 = (long *)(*(pSVar8->klass->vtable)._7_get_Item.methodPtr)
                                          (pSVar8,"Name",(pSVar8->klass->vtable)._7_get_Item.method),
               plVar7 == (long *)0x0)) goto label_0409ca6b;
            pSVar9 = (System_String_o *)(**(code **)(*plVar7 + 0x1c8))(plVar7);
            method_00 = (MethodInfo *)0x0;
            bVar5 = System_String__IsNullOrEmpty(pSVar9,(MethodInfo *)0x0);
            lVar3 = MethodInfo_Void_Add;
            if ((char)bVar5 == '\0') {
              piVar1 = &(__this_04->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar2 = (__this_04->fields)._items;
              if (pSVar2 == (System_Object_array *)0x0) goto label_0409ca6b;
              uVar6 = (__this_04->fields)._size;
              if (uVar6 < (uint)pSVar2->max_length) {
                (__this_04->fields)._size = uVar6 + 1;
                pSVar2->m_Items[(int)uVar6] = (Il2CppObject *)pSVar9;
                il2cpp_runtime_helper_022b4080(pSVar2->m_Items + (int)uVar6);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          (__this_04,(Il2CppObject *)pSVar9,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
              }
            }
            method_00 = (MethodInfo *)0x0;
            __this_02.fields.m_Object.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar15;
            __this_02.fields._0_8_ = pIVar14;
            __this_02.fields.m_Object.fields._8_8_ = pIVar16;
            __this_02.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar17;
            __this_02.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar18;
            __this_02.fields.m_Object.fields._32_8_ = pIVar19;
            __this_02.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar20;
            __this_02.fields.m_Array.fields._8_8_ = _Var21.rgctx_data;
            __this_02.fields.m_Array.fields._current = _Var22.genericMethod;
            bVar5 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                              (__this_02,(MethodInfo *)&stack0xffffffffffffff38);
          } while ((char)bVar5 != '\0');
        }
      }
    }
  }
  if (__this_04 != (System_Collections_Generic_List_object__o *)0x0) {
    pSVar10 = (System_String_array *)System_Collections_Generic_List_object___ToArray(__this_04,MethodInfo_String_ToArray);
    return pSVar10;
  }
label_0409ca6b:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac474 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinLevels);
    il2cpp_runtime_helper_023445d0(&".cl");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ac474 = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar9 = *(System_String_o **)(*(long *)(TypeInfo_BuiltinLevels + 0xb8) + 0x20);
  pSVar10 = Map_BuiltinLevels__GetClFiles(pSVar9,method_00);
  if (pSVar10 != (System_String_array *)0x0) {
    uVar6 = (uint)pSVar10->max_length;
    if (0 < (int)uVar6) {
      uVar12 = 0;
      do {
        if (uVar6 <= uVar12) {
label_0409cb50:
          il2cpp_runtime_helper_022b2ca0();
          goto label_0409cb55;
        }
        pSVar9 = pSVar10->m_Items[(int)uVar12];
        if (pSVar9 == (System_String_o *)0x0) goto label_0409cb55;
        pSVar11 = (System_String_c *)
                  System_String__Replace_3af9030(pSVar9,".cl","",(MethodInfo *)0x0);
        if ((uint)pSVar10->max_length <= uVar12) goto label_0409cb50;
        pSVar9 = (System_String_o *)(pSVar10->m_Items + (int)uVar12);
        pSVar9->klass = pSVar11;
        il2cpp_runtime_helper_022b4080();
        uVar12 = uVar12 + 1;
        uVar6 = (uint)pSVar10->max_length;
      } while ((int)uVar12 < (int)uVar6);
    }
    return pSVar10;
  }
label_0409cb55:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac47f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_String_Select_String_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_string_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_GetClFiles_b__29_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"*.cl");
    g_data_057ac47f = '\x01';
  }
  bVar5 = System_IO_Directory__Exists(pSVar9,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    pSVar10 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,0);
    return pSVar10;
  }
  pSVar10 = System_IO_Directory__GetFiles_3bfd9f0(pSVar9,"*.cl",0,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    selector = *(System_Func_TSource__TResult__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
  }
  else {
    selector = *(System_Func_TSource__TResult__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
  }
  if (selector == (System_Func_TSource__TResult__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    selector = (System_Func_TSource__TResult__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_string_string);
    System_Func_object__object____ctor();
    lVar3 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_TSource__TResult__o **)(lVar3 + 0x10) = selector;
    il2cpp_runtime_helper_022b4080(lVar3 + 0x10,selector);
  }
  source = System_Linq_Enumerable__Select_object__object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar10,selector,MethodInfo_IEnumerable_1_System_String_Select_String_String);
  pSVar10 = (System_String_array *)
            System_Linq_Enumerable__ToArray_object_
                      ((System_Collections_Generic_IEnumerable_TSource__o *)source,MethodInfo_String_ToArray_String);
  return pSVar10;
}


// Map.BuiltinLevels$$IsAddonBuiltin
// il2cpp: bool Map_BuiltinLevels__IsAddonBuiltin (System_String_o* name, const MethodInfo* method);
// 0x40989a0

bool_conflict Map_BuiltinLevels__IsAddonBuiltin(System_String_o *name,MethodInfo *method)

{
  uint uVar1;
  char cVar2;
  bool_conflict bVar3;
  System_String_array *pSVar4;
  System_String_o *name_00;
  System_String_o *pSVar5;
  bool_conflict bVar6;
  ulong uVar7;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if (g_data_057ac473 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinLevels);
    g_data_057ac473 = '\x01';
  }
  bVar6 = 0;
  bVar3 = System_String__IsNullOrEmpty(name,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    method_01 = TypeInfo_BuiltinLevels;
    if (*(int *)((long)&TypeInfo_BuiltinLevels[2].parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar4 = Map_BuiltinLevels__GetBuiltinAddons(method_01);
    if (pSVar4 == (System_String_array *)0x0) {
label_04098a3b:
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ac470 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinLevels);
        il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
        il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
        il2cpp_runtime_helper_023445d0(&"/");
        il2cpp_runtime_helper_023445d0(&".cl");
        il2cpp_runtime_helper_023445d0(&"Logic");
        il2cpp_runtime_helper_023445d0(&"");
        g_data_057ac470 = '\x01';
      }
      method_00 = "";
      bVar3 = System_String__op_Equality
                        ((System_String_o *)method_01,(System_String_o *)"",(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        if (*(int *)((long)&TypeInfo_BuiltinLevels[2].parameters + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          bVar3 = Map_BuiltinLevels__IsAddonBuiltin((System_String_o *)method_01,method_00);
          cVar2 = (char)bVar3;
        }
        else {
          bVar3 = Map_BuiltinLevels__IsAddonBuiltin((System_String_o *)method_01,method_00);
          cVar2 = (char)bVar3;
        }
        if (cVar2 != '\0') {
          if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar5 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 0x30);
          name_00 = System_String__Concat_3ae5ba0((System_String_o *)method_01,"Logic",(MethodInfo *)0x0)
          ;
          if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar5 = ApplicationManagers_ResourceManager__TryLoadText(pSVar5,name_00,(MethodInfo *)0x0);
          return (bool_conflict)pSVar5;
        }
        if (*(int *)((long)&TypeInfo_BuiltinLevels[2].parameters + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar5 = System_String__Concat_3af7470
                           (*(System_String_o **)(TypeInfo_BuiltinLevels[2].virtualMethodPointer + 0x20),"/",
                            (System_String_o *)method_01,".cl",(MethodInfo *)0x0);
        bVar3 = System_IO_File__Exists(pSVar5,(MethodInfo *)0x0);
        if ((char)bVar3 != '\0') {
          pSVar5 = System_IO_File__ReadAllText(pSVar5,(MethodInfo *)0x0);
          return (bool_conflict)pSVar5;
        }
      }
      return (bool_conflict)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    uVar7 = 0;
    do {
      uVar1 = (uint)pSVar4->max_length;
      if ((long)(int)uVar1 <= (long)uVar7) {
        return 0;
      }
      if (uVar1 <= uVar7) {
        il2cpp_runtime_helper_022b2ca0();
        goto label_04098a3b;
      }
      method_01 = (MethodInfo *)pSVar4->m_Items[uVar7];
      bVar3 = System_String__op_Equality((System_String_o *)method_01,name,(MethodInfo *)0x0);
      uVar7 = uVar7 + 1;
    } while ((char)bVar3 == '\0');
    bVar6 = (bool_conflict)CONCAT71((int7)(uVar7 >> 8),1);
  }
  return bVar6;
}


// Map.BuiltinLevels$$GetCustomAddons
// il2cpp: System_String_array* Map_BuiltinLevels__GetCustomAddons (const MethodInfo* method);
// 0x409ca70

System_String_array * Map_BuiltinLevels__GetCustomAddons(MethodInfo *method)

{
  long lVar1;
  uint uVar2;
  bool_conflict bVar3;
  System_String_array *pSVar4;
  System_String_c *pSVar5;
  System_Func_TSource__TResult__o *selector;
  System_Collections_Generic_IEnumerable_TResult__o *source;
  uint uVar6;
  MethodInfo *in_RSI;
  System_String_o *path;
  
  if (g_data_057ac474 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinLevels);
    il2cpp_runtime_helper_023445d0(&".cl");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ac474 = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  path = *(System_String_o **)(*(long *)(TypeInfo_BuiltinLevels + 0xb8) + 0x20);
  pSVar4 = Map_BuiltinLevels__GetClFiles(path,in_RSI);
  if (pSVar4 == (System_String_array *)0x0) {
label_0409cb55:
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ac47f == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_String_Select_String_String);
      il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray_String);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Func_string_string);
      il2cpp_runtime_helper_023445d0(&TypeInfo_string);
      il2cpp_runtime_helper_023445d0(&MethodInfo_String_GetClFiles_b__29_0);
      il2cpp_runtime_helper_023445d0(&TypeInfo_c);
      il2cpp_runtime_helper_023445d0(&"*.cl");
      g_data_057ac47f = '\x01';
    }
    bVar3 = System_IO_Directory__Exists(path,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      pSVar4 = System_IO_Directory__GetFiles_3bfd9f0(path,"*.cl",0,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        selector = *(System_Func_TSource__TResult__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
      }
      else {
        selector = *(System_Func_TSource__TResult__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
      }
      if (selector == (System_Func_TSource__TResult__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        selector = (System_Func_TSource__TResult__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_string_string);
        System_Func_object__object____ctor();
        lVar1 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_TSource__TResult__o **)(lVar1 + 0x10) = selector;
        il2cpp_runtime_helper_022b4080(lVar1 + 0x10,selector);
      }
      source = System_Linq_Enumerable__Select_object__object_
                         ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar4,selector,MethodInfo_IEnumerable_1_System_String_Select_String_String);
      pSVar4 = (System_String_array *)
               System_Linq_Enumerable__ToArray_object_
                         ((System_Collections_Generic_IEnumerable_TSource__o *)source,MethodInfo_String_ToArray_String);
      return pSVar4;
    }
    pSVar4 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,0);
    return pSVar4;
  }
  uVar2 = (uint)pSVar4->max_length;
  if (0 < (int)uVar2) {
    uVar6 = 0;
    do {
      if (uVar2 <= uVar6) {
label_0409cb50:
        il2cpp_runtime_helper_022b2ca0();
        goto label_0409cb55;
      }
      path = pSVar4->m_Items[(int)uVar6];
      if (path == (System_String_o *)0x0) goto label_0409cb55;
      pSVar5 = (System_String_c *)
               System_String__Replace_3af9030(path,".cl","",(MethodInfo *)0x0);
      if ((uint)pSVar4->max_length <= uVar6) goto label_0409cb50;
      path = (System_String_o *)(pSVar4->m_Items + (int)uVar6);
      path->klass = pSVar5;
      il2cpp_runtime_helper_022b4080();
      uVar6 = uVar6 + 1;
      uVar2 = (uint)pSVar4->max_length;
    } while ((int)uVar6 < (int)uVar2);
  }
  return pSVar4;
}


// Map.BuiltinLevels$$DeleteCustomMap
// il2cpp: void Map_BuiltinLevels__DeleteCustomMap (System_String_o* name, const MethodInfo* method);
// 0x409cd00

void Map_BuiltinLevels__DeleteCustomMap(System_String_o *name,MethodInfo *method)

{
  System_String_o *path;
  
  if (g_data_057ac475 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinLevels);
    il2cpp_runtime_helper_023445d0(&".txt");
    il2cpp_runtime_helper_023445d0(&"/");
    g_data_057ac475 = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  path = System_String__Concat_3af7470
                   (*(System_String_o **)(*(long *)(TypeInfo_BuiltinLevels + 0xb8) + 8),"/",name,".txt",
                    (MethodInfo *)0x0);
  System_IO_File__Delete(path,(MethodInfo *)0x0);
  return;
}


// Map.BuiltinLevels$$DeleteCustomLogic
// il2cpp: void Map_BuiltinLevels__DeleteCustomLogic (System_String_o* name, const MethodInfo* method);
// 0x409cda0

void Map_BuiltinLevels__DeleteCustomLogic(System_String_o *name,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (g_data_057ac476 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinLevels);
    il2cpp_runtime_helper_023445d0(&".txt");
    il2cpp_runtime_helper_023445d0(&"/");
    il2cpp_runtime_helper_023445d0(&".cl");
    g_data_057ac476 = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar1 = System_String__Concat_3af7470
                     (*(System_String_o **)(*(long *)(TypeInfo_BuiltinLevels + 0xb8) + 0x18),"/",name,
                      ".txt",(MethodInfo *)0x0);
  System_IO_File__Delete(pSVar1,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat_3af7470
                     (*(System_String_o **)(*(long *)(TypeInfo_BuiltinLevels + 0xb8) + 0x18),"/",name,
                      ".cl",(MethodInfo *)0x0);
  System_IO_File__Delete(pSVar1,(MethodInfo *)0x0);
  return;
}


// Map.BuiltinLevels$$DeleteCustomAddon
// il2cpp: void Map_BuiltinLevels__DeleteCustomAddon (System_String_o* name, const MethodInfo* method);
// 0x409ce70

void Map_BuiltinLevels__DeleteCustomAddon(System_String_o *name,MethodInfo *method)

{
  System_String_o *path;
  
  if (g_data_057ac477 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinLevels);
    il2cpp_runtime_helper_023445d0(&"/");
    il2cpp_runtime_helper_023445d0(&".cl");
    g_data_057ac477 = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  path = System_String__Concat_3af7470
                   (*(System_String_o **)(*(long *)(TypeInfo_BuiltinLevels + 0xb8) + 0x20),"/",name,
                    ".cl",(MethodInfo *)0x0);
  System_IO_File__Delete(path,(MethodInfo *)0x0);
  return;
}


// Map.BuiltinLevels$$SaveCustomMap
// il2cpp: void Map_BuiltinLevels__SaveCustomMap (System_String_o* name, Map_MapScript_o* script, const MethodInfo* method);
// 0x409cf10

void Map_BuiltinLevels__SaveCustomMap(System_String_o *name,Map_MapScript_o *script,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  System_String_o *contents;
  
  if (g_data_057ac478 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinLevels);
    il2cpp_runtime_helper_023445d0(&".txt");
    il2cpp_runtime_helper_023445d0(&"/");
    g_data_057ac478 = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = *(System_String_o **)(*(long *)(TypeInfo_BuiltinLevels + 0xb8) + 8);
  pSVar3 = "/";
  pSVar1 = System_String__Concat_3af7470(pSVar2,"/",name,".txt",(MethodInfo *)0x0);
  if (script != (Map_MapScript_o *)0x0) {
    pSVar2 = (System_String_o *)
             (*(script->klass->vtable)._4_Serialize.methodPtr)
                       (script,(script->klass->vtable)._4_Serialize.method);
    System_IO_File__WriteAllText(pSVar1,pSVar2,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac479 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinLevels);
    il2cpp_runtime_helper_023445d0(&".txt");
    il2cpp_runtime_helper_023445d0(&"/");
    g_data_057ac479 = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar1 = *(System_String_o **)(*(long *)(TypeInfo_BuiltinLevels + 0xb8) + 0x10);
  contents = "/";
  pSVar2 = System_String__Concat_3af7470(pSVar1,"/",pSVar2,".txt",(MethodInfo *)0x0);
  if (pSVar3 != (System_String_o *)0x0) {
    pSVar3 = (System_String_o *)
             (*(pSVar3->klass->vtable)._4_CompareTo.methodPtr)
                       (pSVar3,(pSVar3->klass->vtable)._4_CompareTo.method);
    System_IO_File__WriteAllText(pSVar2,pSVar3,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac47a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinLevels);
    il2cpp_runtime_helper_023445d0(&"/");
    il2cpp_runtime_helper_023445d0(&".cl");
    g_data_057ac47a = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = System_String__Concat_3af7470
                     (*(System_String_o **)(*(long *)(TypeInfo_BuiltinLevels + 0xb8) + 0x18),"/",pSVar1,
                      ".cl",(MethodInfo *)0x0);
  System_IO_File__WriteAllText(pSVar2,contents,(MethodInfo *)0x0);
  return;
}


// Map.BuiltinLevels$$AutosaveCustomMap
// il2cpp: void Map_BuiltinLevels__AutosaveCustomMap (System_String_o* name, Map_MapScript_o* script, const MethodInfo* method);
// 0x409cfd0

void Map_BuiltinLevels__AutosaveCustomMap(System_String_o *name,Map_MapScript_o *script,MethodInfo *method)

{
  System_String_o *path;
  System_String_o *pSVar1;
  System_String_o *contents;
  
  if (g_data_057ac479 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinLevels);
    il2cpp_runtime_helper_023445d0(&".txt");
    il2cpp_runtime_helper_023445d0(&"/");
    g_data_057ac479 = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar1 = *(System_String_o **)(*(long *)(TypeInfo_BuiltinLevels + 0xb8) + 0x10);
  contents = "/";
  path = System_String__Concat_3af7470(pSVar1,"/",name,".txt",(MethodInfo *)0x0);
  if (script != (Map_MapScript_o *)0x0) {
    pSVar1 = (System_String_o *)
             (*(script->klass->vtable)._4_Serialize.methodPtr)
                       (script,(script->klass->vtable)._4_Serialize.method);
    System_IO_File__WriteAllText(path,pSVar1,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac47a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinLevels);
    il2cpp_runtime_helper_023445d0(&"/");
    il2cpp_runtime_helper_023445d0(&".cl");
    g_data_057ac47a = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar1 = System_String__Concat_3af7470
                     (*(System_String_o **)(*(long *)(TypeInfo_BuiltinLevels + 0xb8) + 0x18),"/",pSVar1,
                      ".cl",(MethodInfo *)0x0);
  System_IO_File__WriteAllText(pSVar1,contents,(MethodInfo *)0x0);
  return;
}


// Map.BuiltinLevels$$SaveCustomLogic
// il2cpp: void Map_BuiltinLevels__SaveCustomLogic (System_String_o* name, System_String_o* script, const MethodInfo* method);
// 0x409d090

void Map_BuiltinLevels__SaveCustomLogic(System_String_o *name,System_String_o *script,MethodInfo *method)

{
  System_String_o *path;
  
  if (g_data_057ac47a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinLevels);
    il2cpp_runtime_helper_023445d0(&"/");
    il2cpp_runtime_helper_023445d0(&".cl");
    g_data_057ac47a = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  path = System_String__Concat_3af7470
                   (*(System_String_o **)(*(long *)(TypeInfo_BuiltinLevels + 0xb8) + 0x18),"/",name,
                    ".cl",(MethodInfo *)0x0);
  System_IO_File__WriteAllText(path,script,(MethodInfo *)0x0);
  return;
}


// Map.BuiltinLevels$$SaveCustomAddon
// il2cpp: void Map_BuiltinLevels__SaveCustomAddon (System_String_o* name, System_String_o* script, const MethodInfo* method);
// 0x409d130

void Map_BuiltinLevels__SaveCustomAddon(System_String_o *name,System_String_o *script,MethodInfo *method)

{
  System_String_o *path;
  
  if (g_data_057ac47b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinLevels);
    il2cpp_runtime_helper_023445d0(&"/");
    il2cpp_runtime_helper_023445d0(&".cl");
    g_data_057ac47b = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  path = System_String__Concat_3af7470
                   (*(System_String_o **)(*(long *)(TypeInfo_BuiltinLevels + 0xb8) + 0x20),"/",name,
                    ".cl",(MethodInfo *)0x0);
  System_IO_File__WriteAllText(path,script,(MethodInfo *)0x0);
  return;
}


// Map.BuiltinLevels$$GetGameModes
// il2cpp: System_String_array* Map_BuiltinLevels__GetGameModes (System_String_o* category, System_String_o* mapName, bool hasMapLogic, const MethodInfo* method);
// 0x409d1d0

System_String_array *
Map_BuiltinLevels__GetGameModes
          (System_String_o *category,System_String_o *mapName,bool_conflict hasMapLogic,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  int iVar3;
  System_Object_array *pSVar4;
  Il2CppClass *pIVar5;
  System_String_o *pSVar6;
  Il2CppClass **ppIVar7;
  long lVar8;
  System_Collections_Generic_KeyValuePair_string__JSONNode__Fields SVar9;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_00;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_02;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_03;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_04;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_05;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_06;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_07;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_08;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_09;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_10;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_11;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_12;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_13;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_14;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_15;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_16;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_17;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_18;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_19;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_20;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_21;
  char cVar10;
  byte bVar11;
  bool_conflict bVar12;
  uint uVar13;
  int32_t iVar14;
  long *plVar15;
  long *plVar16;
  SimpleJSONFixed_JSONNode_o *pSVar17;
  Il2CppObject *pIVar18;
  System_String_array *pSVar19;
  long *plVar20;
  System_Collections_Generic_HashSet_object__o *__this_22;
  System_Collections_Generic_HashSet_object__o *__this_23;
  _union_233249 item;
  System_String_o **ppSVar21;
  System_Collections_Generic_Dictionary_string__JSONNode__o *__this_24;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_25;
  Il2CppObject *pIVar22;
  Il2CppObject *pIVar23;
  System_String_array *extraout_RAX;
  System_String_array *extraout_RAX_00;
  MethodInfo *pMVar24;
  MethodInfo *pMVar25;
  MethodInfo *method_00;
  System_String_o *gameMode;
  uint uVar26;
  MethodInfo **item_00;
  ulong uVar27;
  MethodInfo_33E0DF0 **ppMVar28;
  System_String_o *pSVar29;
  System_Collections_Generic_HashSet_object__o *path;
  long *unaff_R12;
  float value;
  undefined1 auVar30 [12];
  System_Collections_Generic_KeyValuePair_string__JSONNode__o SVar31;
  System_Collections_Generic_KeyValuePair_string__JSONNode__Fields aKeyValue;
  System_Collections_Generic_KeyValuePair_string__JSONNode__Fields aKeyValue_00;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *pSVar32;
  Il2CppType *pIVar33;
  undefined1 auStack_220 [16];
  Il2CppObject *pIStack_210;
  Il2CppRGCTXData *pIStack_208;
  _union_233249 _Stack_200;
  System_Collections_Generic_HashSet_object__o *pSStack_1f8;
  System_Collections_Generic_HashSet_object__o *pSStack_1f0;
  System_String_array *pSStack_1e8;
  System_String_o *pSStack_1e0;
  undefined8 uStack_1d8;
  System_Collections_Generic_KeyValuePair_string__JSONNode__Fields SStack_1d0;
  System_Collections_Generic_List_object__o *pSStack_1c0;
  Il2CppObject *pIStack_1b8;
  System_String_array *pSStack_1b0;
  System_String_o *pSStack_1a8;
  Il2CppClass *pIStack_150;
  System_String_o *pSStack_148;
  System_String_o *pSStack_140;
  System_String_o *pSStack_138;
  Il2CppClass *pIStack_130;
  System_String_o *pSStack_128;
  System_String_o *pSStack_120;
  _union_13 _Stack_118;
  _union_14 _Stack_110;
  System_String_o *pSStack_108;
  System_String_o *pSStack_100;
  System_Collections_Generic_List_object__o *pSStack_f8;
  System_String_array *pSStack_f0;
  System_String_array *pSStack_e8;
  System_String_o *pSStack_e0;
  Il2CppClass *pIVar34;
  System_String_o *pSVar35;
  System_String_o *pSVar36;
  Il2CppClass *pIVar37;
  System_String_o *pSVar38;
  System_String_o *pSVar39;
  _union_13 _Var40;
  _union_14 _Var41;
  Il2CppClass *local_88;
  System_String_o *pSStack_80;
  System_String_o *local_78;
  System_String_o *pSStack_70;
  Il2CppClass *local_68;
  System_String_o *pSStack_60;
  System_String_o *local_58;
  _union_13 _Stack_50;
  _union_14 local_48;
  System_String_o *local_40;
  System_String_o *local_38;
  
  if (g_data_057ac47c == '\0') {
    pSStack_e0 = (System_String_o *)0x409d202;
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinLevels);
    pSStack_e0 = (System_String_o *)0x409d20e;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    pSStack_e0 = (System_String_o *)0x409d21a;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    pSStack_e0 = (System_String_o *)0x409d226;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    pSStack_e0 = (System_String_o *)0x409d232;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    pSStack_e0 = (System_String_o *)0x409d23e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    pSStack_e0 = (System_String_o *)0x409d24a;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    pSStack_e0 = (System_String_o *)0x409d256;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    pSStack_e0 = (System_String_o *)0x409d262;
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    pSStack_e0 = (System_String_o *)0x409d26e;
    il2cpp_runtime_helper_023445d0(&"Name");
    pSStack_e0 = (System_String_o *)0x409d27a;
    il2cpp_runtime_helper_023445d0(&"ExcludedModes");
    pSStack_e0 = (System_String_o *)0x409d286;
    il2cpp_runtime_helper_023445d0(&"IncludedModes");
    pSStack_e0 = (System_String_o *)0x409d292;
    il2cpp_runtime_helper_023445d0(&"GameModes");
    g_data_057ac47c = '\x01';
  }
  pSVar39 = (System_String_o *)0x0;
  _Var40.rgctx_data = (Il2CppRGCTXData *)0x0;
  pIVar37 = (Il2CppClass *)0x0;
  pSVar38 = (System_String_o *)0x0;
  pSVar35 = (System_String_o *)0x0;
  pSVar36 = (System_String_o *)0x0;
  pIVar34 = (Il2CppClass *)0x0;
  pSVar29 = (System_String_o *)0x0;
  _Var41.genericMethod = (SimpleJSONFixed_JSONNode_o *)0x0;
  pSStack_e0 = (System_String_o *)0x409d2c7;
  plVar15 = (long *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  pSStack_e0 = (System_String_o *)0x409d2dc;
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)plVar15,MethodInfo_List_1_System_String);
  pSVar19 = (System_String_array *)mapName;
  if ((char)hasMapLogic == '\0') {
label_0409d352:
    iVar3 = *(int *)((long)&TypeInfo_BuiltinLevels[2].parameters + 4);
joined_r0x0409d363:
    if (iVar3 == 0) {
      pSStack_e0 = (System_String_o *)0x409d36a;
      il2cpp_runtime_helper_02337ed0();
    }
    plVar16 = *(long **)TypeInfo_BuiltinLevels[2].virtualMethodPointer;
    local_40 = category;
    if (plVar16 != (long *)0x0) {
      pSStack_e0 = (System_String_o *)0x409d3aa;
      local_38 = mapName;
      plVar16 = (long *)(**(code **)(*plVar16 + 0x1a8))
                                  (plVar16,"GameModes",*(undefined8 *)(*plVar16 + 0x1b0));
      if (plVar16 != (long *)0x0) {
        pSStack_e0 = (System_String_o *)0x409d3cb;
        (**(code **)(*plVar16 + 0x338))(&local_88,plVar16,*(undefined8 *)(*plVar16 + 0x340));
        pMVar25 = (MethodInfo *)0x0;
        pSStack_e0 = (System_String_o *)0x409d40c;
        __this_05.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSStack_80;
        __this_05.fields._0_8_ = local_88;
        __this_05.fields.m_Object.fields._8_8_ = local_78;
        __this_05.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pSStack_70;
        __this_05.fields.m_Object.fields._current.fields.value = (Il2CppObject *)local_68;
        __this_05.fields.m_Object.fields._32_8_ = pSStack_60;
        __this_05.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)local_58;
        __this_05.fields.m_Array.fields._8_8_ = _Stack_50.rgctx_data;
        __this_05.fields.m_Array.fields._current = local_48.genericMethod;
        pIVar34 = local_88;
        pSVar29 = pSStack_80;
        pSVar35 = local_78;
        pSVar36 = pSStack_70;
        pIVar37 = local_68;
        pSVar38 = pSStack_60;
        pSVar39 = local_58;
        _Var40 = _Stack_50;
        _Var41 = local_48;
        bVar12 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                           (__this_05,(MethodInfo *)&stack0xffffffffffffff28);
        if ((char)bVar12 == '\0') {
label_0409d50f:
          if (*(int *)((long)&TypeInfo_BuiltinLevels[2].parameters + 4) == 0) {
            pSStack_e0 = (System_String_o *)0x409d527;
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar6 = local_40;
          pSStack_e0 = (System_String_o *)0x409d537;
          unaff_R12 = (long *)Map_BuiltinLevels__GetCategory(local_40,pMVar25);
          pSStack_e0 = (System_String_o *)0x409d54a;
          pSVar19 = (System_String_array *)Map_BuiltinLevels__GetMap(pSVar6,local_38,method_00);
          plVar16 = &TypeInfo_JSONNode;
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            pSStack_e0 = (System_String_o *)0x409d565;
            il2cpp_runtime_helper_02337ed0();
          }
          pSStack_e0 = (System_String_o *)0x409d571;
          bVar12 = SimpleJSONFixed_JSONNode__op_Inequality
                             ((SimpleJSONFixed_JSONNode_o *)unaff_R12,(Il2CppObject *)0x0,(MethodInfo *)0x0);
          category = (System_String_o *)plVar16;
          if ((char)bVar12 != '\0') {
            if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
              pSStack_e0 = (System_String_o *)0x409d58a;
              il2cpp_runtime_helper_02337ed0();
            }
            pSStack_e0 = (System_String_o *)0x409d596;
            bVar12 = SimpleJSONFixed_JSONNode__op_Inequality
                               ((SimpleJSONFixed_JSONNode_o *)pSVar19,(Il2CppObject *)0x0,(MethodInfo *)0x0);
            if ((char)bVar12 != '\0') {
              if (pSVar19 != (System_String_array *)0x0) {
                pIVar5 = (pSVar19->obj).klass;
                pSStack_e0 = (System_String_o *)0x409d5c4;
                cVar10 = (*(((SimpleJSONFixed_JSONNode_VTable *)pIVar5->vtable)->_28_HasKey).methodPtr)
                                   (pSVar19,"IncludedModes",
                                    (((SimpleJSONFixed_JSONNode_VTable *)pIVar5->vtable)->_28_HasKey).method);
                if (cVar10 == '\0') {
                  pIVar5 = (pSVar19->obj).klass;
                  pSStack_e0 = (System_String_o *)0x409d79b;
                  cVar10 = (*(((SimpleJSONFixed_JSONNode_VTable *)pIVar5->vtable)->_28_HasKey).methodPtr)
                                     (pSVar19,"ExcludedModes",
                                      (((SimpleJSONFixed_JSONNode_VTable *)pIVar5->vtable)->_28_HasKey).method
                                     );
                  if (cVar10 == '\0') {
                    if ((System_String_o *)unaff_R12 != (System_String_o *)0x0) {
                      pSStack_e0 = (System_String_o *)0x409d8ff;
                      cVar10 = (*(((SimpleJSONFixed_JSONNode_c *)((System_String_o *)unaff_R12)->klass)->
                                 vtable)._28_HasKey.methodPtr)
                                         (unaff_R12,"IncludedModes",
                                          (((SimpleJSONFixed_JSONNode_c *)
                                           ((System_String_o *)unaff_R12)->klass)->vtable)._28_HasKey.method);
                      if (cVar10 == '\0') {
                        pSStack_e0 = (System_String_o *)0x409da92;
                        cVar10 = (*(((SimpleJSONFixed_JSONNode_c *)((System_String_o *)unaff_R12)->klass)->
                                   vtable)._28_HasKey.methodPtr)
                                           (unaff_R12,"ExcludedModes",
                                            (((SimpleJSONFixed_JSONNode_c *)
                                             ((System_String_o *)unaff_R12)->klass)->vtable)._28_HasKey.method
                                           );
                        if (cVar10 != '\0') {
                          pSStack_e0 = (System_String_o *)0x409dab2;
                          plVar20 = (long *)(*(((SimpleJSONFixed_JSONNode_c *)
                                               ((System_String_o *)unaff_R12)->klass)->vtable)._7_get_Item.
                                              methodPtr)(unaff_R12,"ExcludedModes",
                                                         (((SimpleJSONFixed_JSONNode_c *)
                                                          ((System_String_o *)unaff_R12)->klass)->vtable).
                                                         _7_get_Item.method);
                          if (plVar20 == (long *)0x0) goto label_0409dd5e;
                          pSStack_e0 = (System_String_o *)0x409dad3;
                          (**(code **)(*plVar20 + 0x338))(&local_88,plVar20,*(undefined8 *)(*plVar20 + 0x340))
                          ;
                          pSStack_e0 = (System_String_o *)0x409db14;
                          __this_17.fields.m_Object.fields._dictionary =
                               (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSStack_80;
                          __this_17.fields._0_8_ = local_88;
                          __this_17.fields.m_Object.fields._8_8_ = local_78;
                          __this_17.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pSStack_70;
                          __this_17.fields.m_Object.fields._current.fields.value = (Il2CppObject *)local_68;
                          __this_17.fields.m_Object.fields._32_8_ = pSStack_60;
                          __this_17.fields.m_Array.fields._list =
                               (System_Collections_Generic_List_T__o *)local_58;
                          __this_17.fields.m_Array.fields._8_8_ = _Stack_50.rgctx_data;
                          __this_17.fields.m_Array.fields._current = local_48.genericMethod;
                          bVar12 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                                             (__this_17,(MethodInfo *)&stack0xffffffffffffff28);
                          pIVar34 = local_88;
                          pSVar29 = pSStack_80;
                          pSVar35 = local_78;
                          pSVar36 = pSStack_70;
                          pIVar37 = local_68;
                          pSVar38 = pSStack_60;
                          pSVar39 = local_58;
                          _Var40 = _Stack_50;
                          _Var41 = local_48;
                          if ((char)bVar12 != '\0') {
                            if ((System_Collections_Generic_List_object__o *)plVar15 ==
                                (System_Collections_Generic_List_object__o *)0x0) goto label_0409dd63;
                            do {
                              pSStack_e0 = (System_String_o *)0x409db5c;
                              __this_19.fields.m_Object.fields._dictionary =
                                   (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar29;
                              __this_19.fields._0_8_ = pIVar34;
                              __this_19.fields.m_Object.fields._8_8_ = pSVar35;
                              __this_19.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pSVar36;
                              __this_19.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar37
                              ;
                              __this_19.fields.m_Object.fields._32_8_ = pSVar38;
                              __this_19.fields.m_Array.fields._list =
                                   (System_Collections_Generic_List_T__o *)pSVar39;
                              __this_19.fields.m_Array.fields._8_8_ = _Var40.rgctx_data;
                              __this_19.fields.m_Array.fields._current = _Var41.genericMethod;
                              SVar31 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                                                 (__this_19,(MethodInfo *)&stack0xffffffffffffff28);
                              if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                                pSStack_e0 = (System_String_o *)0x409db73;
                                il2cpp_runtime_helper_02337ed0();
                              }
                              pSStack_e0 = (System_String_o *)0x409db80;
                              pSVar17 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0
                                                  (SVar31,(MethodInfo *)0x0);
                              unaff_R12 = (long *)&MethodInfo_Boolean_Contains;
                              pSVar19 = (System_String_array *)&stack0xffffffffffffff28;
                              if (pSVar17 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_0409dd5e;
                              pSStack_e0 = (System_String_o *)0x409db9f;
                              pIVar18 = (Il2CppObject *)
                                        (*(pSVar17->klass->vtable)._9_get_Value.methodPtr)
                                                  (pSVar17,(pSVar17->klass->vtable)._9_get_Value.method);
                              pSStack_e0 = (System_String_o *)0x409dbae;
                              bVar12 = System_Collections_Generic_List_object___Contains
                                                 ((System_Collections_Generic_List_object__o *)plVar15,pIVar18
                                                  ,MethodInfo_Boolean_Contains);
                              if ((char)bVar12 != '\0') {
                                pSStack_e0 = (System_String_o *)0x409dbc5;
                                pIVar18 = (Il2CppObject *)
                                          (*(pSVar17->klass->vtable)._9_get_Value.methodPtr)
                                                    (pSVar17,(pSVar17->klass->vtable)._9_get_Value.method);
                                pSStack_e0 = (System_String_o *)0x409dbda;
                                System_Collections_Generic_List_object___Remove
                                          ((System_Collections_Generic_List_object__o *)plVar15,pIVar18,
                                           MethodInfo_Boolean_Remove);
                              }
                              pSStack_e0 = (System_String_o *)0x409db4a;
                              __this_18.fields.m_Object.fields._dictionary =
                                   (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar29;
                              __this_18.fields._0_8_ = pIVar34;
                              __this_18.fields.m_Object.fields._8_8_ = pSVar35;
                              __this_18.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pSVar36;
                              __this_18.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar37
                              ;
                              __this_18.fields.m_Object.fields._32_8_ = pSVar38;
                              __this_18.fields.m_Array.fields._list =
                                   (System_Collections_Generic_List_T__o *)pSVar39;
                              __this_18.fields.m_Array.fields._8_8_ = _Var40.rgctx_data;
                              __this_18.fields.m_Array.fields._current = _Var41.genericMethod;
                              bVar12 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                                                 (__this_18,(MethodInfo *)&stack0xffffffffffffff28);
                              pSVar19 = (System_String_array *)&stack0xffffffffffffff28;
                            } while ((char)bVar12 != '\0');
                          }
                        }
                        goto label_0409dbdf;
                      }
                      if ((System_Collections_Generic_List_object__o *)plVar15 !=
                          (System_Collections_Generic_List_object__o *)0x0) {
                        piVar1 = &(((System_Collections_Generic_List_object__o *)plVar15)->fields)._version;
                        *piVar1 = *piVar1 + 1;
                        iVar14 = (((System_Collections_Generic_List_object__o *)plVar15)->fields)._size;
                        (((System_Collections_Generic_List_object__o *)plVar15)->fields)._size = 0;
                        if (0 < iVar14) {
                          pSStack_e0 = (System_String_o *)0x409d932;
                          System_Array__Clear((System_Array_o *)
                                              (((System_Collections_Generic_List_object__o *)plVar15)->fields)
                                              ._items,0,iVar14,(MethodInfo *)0x0);
                        }
                        pSStack_e0 = (System_String_o *)0x409d949;
                        plVar20 = (long *)(*(((SimpleJSONFixed_JSONNode_c *)
                                             ((System_String_o *)unaff_R12)->klass)->vtable)._7_get_Item.
                                            methodPtr)(unaff_R12,"IncludedModes",
                                                       (((SimpleJSONFixed_JSONNode_c *)
                                                        ((System_String_o *)unaff_R12)->klass)->vtable).
                                                       _7_get_Item.method);
                        if (plVar20 != (long *)0x0) {
                          pSStack_e0 = (System_String_o *)0x409d96a;
                          (**(code **)(*plVar20 + 0x338))(&local_88,plVar20,*(undefined8 *)(*plVar20 + 0x340))
                          ;
                          pSStack_e0 = (System_String_o *)0x409d9ab;
                          __this_14.fields.m_Object.fields._dictionary =
                               (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSStack_80;
                          __this_14.fields._0_8_ = local_88;
                          __this_14.fields.m_Object.fields._8_8_ = local_78;
                          __this_14.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pSStack_70;
                          __this_14.fields.m_Object.fields._current.fields.value = (Il2CppObject *)local_68;
                          __this_14.fields.m_Object.fields._32_8_ = pSStack_60;
                          __this_14.fields.m_Array.fields._list =
                               (System_Collections_Generic_List_T__o *)local_58;
                          __this_14.fields.m_Array.fields._8_8_ = _Stack_50.rgctx_data;
                          __this_14.fields.m_Array.fields._current = local_48.genericMethod;
                          bVar12 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                                             (__this_14,(MethodInfo *)&stack0xffffffffffffff28);
                          pIVar34 = local_88;
                          pSVar29 = pSStack_80;
                          pSVar35 = local_78;
                          pSVar36 = pSStack_70;
                          pIVar37 = local_68;
                          pSVar38 = pSStack_60;
                          pSVar39 = local_58;
                          _Var40 = _Stack_50;
                          _Var41 = local_48;
                          if ((char)bVar12 != '\0') {
                            unaff_R12 = &MethodInfo_Void_Add;
                            do {
                              pSStack_e0 = (System_String_o *)0x409d9f6;
                              __this_16.fields.m_Object.fields._dictionary =
                                   (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar29;
                              __this_16.fields._0_8_ = pIVar34;
                              __this_16.fields.m_Object.fields._8_8_ = pSVar35;
                              __this_16.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pSVar36;
                              __this_16.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar37
                              ;
                              __this_16.fields.m_Object.fields._32_8_ = pSVar38;
                              __this_16.fields.m_Array.fields._list =
                                   (System_Collections_Generic_List_T__o *)pSVar39;
                              __this_16.fields.m_Array.fields._8_8_ = _Var40.rgctx_data;
                              __this_16.fields.m_Array.fields._current = _Var41.genericMethod;
                              SVar31 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                                                 (__this_16,(MethodInfo *)&stack0xffffffffffffff28);
                              if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                                pSStack_e0 = (System_String_o *)0x409da0d;
                                il2cpp_runtime_helper_02337ed0();
                              }
                              pSStack_e0 = (System_String_o *)0x409da1a;
                              pSVar17 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0
                                                  (SVar31,(MethodInfo *)0x0);
                              pSVar19 = (System_String_array *)&stack0xffffffffffffff28;
                              if (pSVar17 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_0409dd5e;
                              pSStack_e0 = (System_String_o *)0x409da36;
                              pIVar18 = (Il2CppObject *)
                                        (*(pSVar17->klass->vtable)._9_get_Value.methodPtr)
                                                  (pSVar17,(pSVar17->klass->vtable)._9_get_Value.method);
                              lVar8 = MethodInfo_Void_Add;
                              piVar1 = &(((System_Collections_Generic_List_object__o *)plVar15)->fields).
                                        _version;
                              *piVar1 = *piVar1 + 1;
                              pSVar4 = (((System_Collections_Generic_List_object__o *)plVar15)->fields)._items
                              ;
                              pSVar19 = (System_String_array *)&stack0xffffffffffffff28;
                              if (pSVar4 == (System_Object_array *)0x0) goto label_0409dd5e;
                              uVar13 = (((System_Collections_Generic_List_object__o *)plVar15)->fields)._size;
                              if (uVar13 < (uint)pSVar4->max_length) {
                                (((System_Collections_Generic_List_object__o *)plVar15)->fields)._size =
                                     uVar13 + 1;
                                pSVar4->m_Items[(int)uVar13] = pIVar18;
                                pSStack_e0 = (System_String_o *)0x409da75;
                                il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar13,pIVar18);
                              }
                              else {
                                pSStack_e0 = (System_String_o *)0x409d9da;
                                System_Collections_Generic_List_object___AddWithResize
                                          ((System_Collections_Generic_List_object__o *)plVar15,pIVar18,
                                           *(MethodInfo_362C220 **)
                                            (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                              }
                              pSStack_e0 = (System_String_o *)0x409d9e4;
                              __this_15.fields.m_Object.fields._dictionary =
                                   (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar29;
                              __this_15.fields._0_8_ = pIVar34;
                              __this_15.fields.m_Object.fields._8_8_ = pSVar35;
                              __this_15.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pSVar36;
                              __this_15.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar37
                              ;
                              __this_15.fields.m_Object.fields._32_8_ = pSVar38;
                              __this_15.fields.m_Array.fields._list =
                                   (System_Collections_Generic_List_T__o *)pSVar39;
                              __this_15.fields.m_Array.fields._8_8_ = _Var40.rgctx_data;
                              __this_15.fields.m_Array.fields._current = _Var41.genericMethod;
                              bVar12 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                                                 (__this_15,(MethodInfo *)&stack0xffffffffffffff28);
                              pSVar19 = (System_String_array *)&stack0xffffffffffffff28;
                            } while ((char)bVar12 != '\0');
                          }
                          goto label_0409dbdf;
                        }
                      }
                    }
                  }
                  else {
                    pIVar5 = (pSVar19->obj).klass;
                    pSStack_e0 = (System_String_o *)0x409d7ba;
                    plVar20 = (long *)(*(((SimpleJSONFixed_JSONNode_VTable *)pIVar5->vtable)->_7_get_Item).
                                        methodPtr)(pSVar19,"ExcludedModes",
                                                   (((SimpleJSONFixed_JSONNode_VTable *)pIVar5->vtable)->
                                                   _7_get_Item).method);
                    if (plVar20 != (long *)0x0) {
                      pSStack_e0 = (System_String_o *)0x409d7db;
                      (**(code **)(*plVar20 + 0x338))(&local_88,plVar20,*(undefined8 *)(*plVar20 + 0x340));
                      pSStack_e0 = (System_String_o *)0x409d81c;
                      __this_11.fields.m_Object.fields._dictionary =
                           (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSStack_80;
                      __this_11.fields._0_8_ = local_88;
                      __this_11.fields.m_Object.fields._8_8_ = local_78;
                      __this_11.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pSStack_70;
                      __this_11.fields.m_Object.fields._current.fields.value = (Il2CppObject *)local_68;
                      __this_11.fields.m_Object.fields._32_8_ = pSStack_60;
                      __this_11.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)local_58
                      ;
                      __this_11.fields.m_Array.fields._8_8_ = _Stack_50.rgctx_data;
                      __this_11.fields.m_Array.fields._current = local_48.genericMethod;
                      bVar12 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                                         (__this_11,(MethodInfo *)&stack0xffffffffffffff28);
                      pIVar34 = local_88;
                      pSVar29 = pSStack_80;
                      pSVar35 = local_78;
                      pSVar36 = pSStack_70;
                      pIVar37 = local_68;
                      pSVar38 = pSStack_60;
                      pSVar39 = local_58;
                      _Var40 = _Stack_50;
                      _Var41 = local_48;
                      if ((char)bVar12 != '\0') {
                        if ((System_Collections_Generic_List_object__o *)plVar15 ==
                            (System_Collections_Generic_List_object__o *)0x0) goto label_0409dd63;
                        do {
                          pSStack_e0 = (System_String_o *)0x409d85c;
                          __this_13.fields.m_Object.fields._dictionary =
                               (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar29;
                          __this_13.fields._0_8_ = pIVar34;
                          __this_13.fields.m_Object.fields._8_8_ = pSVar35;
                          __this_13.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pSVar36;
                          __this_13.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar37;
                          __this_13.fields.m_Object.fields._32_8_ = pSVar38;
                          __this_13.fields.m_Array.fields._list =
                               (System_Collections_Generic_List_T__o *)pSVar39;
                          __this_13.fields.m_Array.fields._8_8_ = _Var40.rgctx_data;
                          __this_13.fields.m_Array.fields._current = _Var41.genericMethod;
                          SVar31 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                                             (__this_13,(MethodInfo *)&stack0xffffffffffffff28);
                          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                            pSStack_e0 = (System_String_o *)0x409d873;
                            il2cpp_runtime_helper_02337ed0();
                          }
                          pSStack_e0 = (System_String_o *)0x409d880;
                          pSVar17 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0(SVar31,(MethodInfo *)0x0);
                          unaff_R12 = (long *)&MethodInfo_Boolean_Contains;
                          pSVar19 = (System_String_array *)&stack0xffffffffffffff28;
                          if (pSVar17 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_0409dd5e;
                          pSStack_e0 = (System_String_o *)0x409d89f;
                          pIVar18 = (Il2CppObject *)
                                    (*(pSVar17->klass->vtable)._9_get_Value.methodPtr)
                                              (pSVar17,(pSVar17->klass->vtable)._9_get_Value.method);
                          pSStack_e0 = (System_String_o *)0x409d8ae;
                          bVar12 = System_Collections_Generic_List_object___Contains
                                             ((System_Collections_Generic_List_object__o *)plVar15,pIVar18,
                                              MethodInfo_Boolean_Contains);
                          if ((char)bVar12 != '\0') {
                            pSStack_e0 = (System_String_o *)0x409d8c5;
                            pIVar18 = (Il2CppObject *)
                                      (*(pSVar17->klass->vtable)._9_get_Value.methodPtr)
                                                (pSVar17,(pSVar17->klass->vtable)._9_get_Value.method);
                            pSStack_e0 = (System_String_o *)0x409d8da;
                            System_Collections_Generic_List_object___Remove
                                      ((System_Collections_Generic_List_object__o *)plVar15,pIVar18,
                                       MethodInfo_Boolean_Remove);
                          }
                          pSStack_e0 = (System_String_o *)0x409d84a;
                          __this_12.fields.m_Object.fields._dictionary =
                               (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar29;
                          __this_12.fields._0_8_ = pIVar34;
                          __this_12.fields.m_Object.fields._8_8_ = pSVar35;
                          __this_12.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pSVar36;
                          __this_12.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar37;
                          __this_12.fields.m_Object.fields._32_8_ = pSVar38;
                          __this_12.fields.m_Array.fields._list =
                               (System_Collections_Generic_List_T__o *)pSVar39;
                          __this_12.fields.m_Array.fields._8_8_ = _Var40.rgctx_data;
                          __this_12.fields.m_Array.fields._current = _Var41.genericMethod;
                          bVar12 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                                             (__this_12,(MethodInfo *)&stack0xffffffffffffff28);
                          pSVar19 = (System_String_array *)&stack0xffffffffffffff28;
                        } while ((char)bVar12 != '\0');
                      }
                      goto label_0409dbdf;
                    }
                  }
                }
                else if ((System_Collections_Generic_List_object__o *)plVar15 !=
                         (System_Collections_Generic_List_object__o *)0x0) {
                  piVar1 = &(((System_Collections_Generic_List_object__o *)plVar15)->fields)._version;
                  *piVar1 = *piVar1 + 1;
                  iVar14 = (((System_Collections_Generic_List_object__o *)plVar15)->fields)._size;
                  (((System_Collections_Generic_List_object__o *)plVar15)->fields)._size = 0;
                  if (0 < iVar14) {
                    pSStack_e0 = (System_String_o *)0x409d5f7;
                    System_Array__Clear((System_Array_o *)
                                        (((System_Collections_Generic_List_object__o *)plVar15)->fields).
                                        _items,0,iVar14,(MethodInfo *)0x0);
                  }
                  pIVar5 = (pSVar19->obj).klass;
                  pSStack_e0 = (System_String_o *)0x409d60d;
                  plVar20 = (long *)(*(((SimpleJSONFixed_JSONNode_VTable *)pIVar5->vtable)->_7_get_Item).
                                      methodPtr)(pSVar19,"IncludedModes",
                                                 (((SimpleJSONFixed_JSONNode_VTable *)pIVar5->vtable)->
                                                 _7_get_Item).method);
                  if (plVar20 != (long *)0x0) {
                    pSStack_e0 = (System_String_o *)0x409d62e;
                    (**(code **)(*plVar20 + 0x338))(&local_88,plVar20,*(undefined8 *)(*plVar20 + 0x340));
                    pSStack_e0 = (System_String_o *)0x409d66f;
                    __this_08.fields.m_Object.fields._dictionary =
                         (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSStack_80;
                    __this_08.fields._0_8_ = local_88;
                    __this_08.fields.m_Object.fields._8_8_ = local_78;
                    __this_08.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pSStack_70;
                    __this_08.fields.m_Object.fields._current.fields.value = (Il2CppObject *)local_68;
                    __this_08.fields.m_Object.fields._32_8_ = pSStack_60;
                    __this_08.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)local_58;
                    __this_08.fields.m_Array.fields._8_8_ = _Stack_50.rgctx_data;
                    __this_08.fields.m_Array.fields._current = local_48.genericMethod;
                    bVar12 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                                       (__this_08,(MethodInfo *)&stack0xffffffffffffff28);
                    pIVar34 = local_88;
                    pSVar29 = pSStack_80;
                    pSVar35 = local_78;
                    pSVar36 = pSStack_70;
                    pIVar37 = local_68;
                    pSVar38 = pSStack_60;
                    pSVar39 = local_58;
                    _Var40 = _Stack_50;
                    _Var41 = local_48;
                    if ((char)bVar12 != '\0') {
                      unaff_R12 = &MethodInfo_Void_Add;
                      do {
                        pSStack_e0 = (System_String_o *)0x409d6c6;
                        __this_10.fields.m_Object.fields._dictionary =
                             (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar29;
                        __this_10.fields._0_8_ = pIVar34;
                        __this_10.fields.m_Object.fields._8_8_ = pSVar35;
                        __this_10.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pSVar36;
                        __this_10.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar37;
                        __this_10.fields.m_Object.fields._32_8_ = pSVar38;
                        __this_10.fields.m_Array.fields._list =
                             (System_Collections_Generic_List_T__o *)pSVar39;
                        __this_10.fields.m_Array.fields._8_8_ = _Var40.rgctx_data;
                        __this_10.fields.m_Array.fields._current = _Var41.genericMethod;
                        SVar31 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                                           (__this_10,(MethodInfo *)&stack0xffffffffffffff28);
                        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                          pSStack_e0 = (System_String_o *)0x409d6dd;
                          il2cpp_runtime_helper_02337ed0();
                        }
                        pSStack_e0 = (System_String_o *)0x409d6ea;
                        pSVar17 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0(SVar31,(MethodInfo *)0x0);
                        pSVar19 = (System_String_array *)&stack0xffffffffffffff28;
                        if (pSVar17 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_0409dd5e;
                        pSStack_e0 = (System_String_o *)0x409d706;
                        pIVar18 = (Il2CppObject *)
                                  (*(pSVar17->klass->vtable)._9_get_Value.methodPtr)
                                            (pSVar17,(pSVar17->klass->vtable)._9_get_Value.method);
                        lVar8 = MethodInfo_Void_Add;
                        piVar1 = &(((System_Collections_Generic_List_object__o *)plVar15)->fields)._version;
                        *piVar1 = *piVar1 + 1;
                        pSVar4 = (((System_Collections_Generic_List_object__o *)plVar15)->fields)._items;
                        pSVar19 = (System_String_array *)&stack0xffffffffffffff28;
                        if (pSVar4 == (System_Object_array *)0x0) goto label_0409dd5e;
                        uVar13 = (((System_Collections_Generic_List_object__o *)plVar15)->fields)._size;
                        if (uVar13 < (uint)pSVar4->max_length) {
                          (((System_Collections_Generic_List_object__o *)plVar15)->fields)._size = uVar13 + 1;
                          pSVar4->m_Items[(int)uVar13] = pIVar18;
                          pSStack_e0 = (System_String_o *)0x409d745;
                          il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar13,pIVar18);
                        }
                        else {
                          pSStack_e0 = (System_String_o *)0x409d6aa;
                          System_Collections_Generic_List_object___AddWithResize
                                    ((System_Collections_Generic_List_object__o *)plVar15,pIVar18,
                                     *(MethodInfo_362C220 **)
                                      (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                        }
                        pSStack_e0 = (System_String_o *)0x409d6b4;
                        __this_09.fields.m_Object.fields._dictionary =
                             (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar29;
                        __this_09.fields._0_8_ = pIVar34;
                        __this_09.fields.m_Object.fields._8_8_ = pSVar35;
                        __this_09.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pSVar36;
                        __this_09.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar37;
                        __this_09.fields.m_Object.fields._32_8_ = pSVar38;
                        __this_09.fields.m_Array.fields._list =
                             (System_Collections_Generic_List_T__o *)pSVar39;
                        __this_09.fields.m_Array.fields._8_8_ = _Var40.rgctx_data;
                        __this_09.fields.m_Array.fields._current = _Var41.genericMethod;
                        bVar12 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                                           (__this_09,(MethodInfo *)&stack0xffffffffffffff28);
                        pSVar19 = (System_String_array *)&stack0xffffffffffffff28;
                      } while ((char)bVar12 != '\0');
                    }
                    goto label_0409dbdf;
                  }
                }
              }
              goto label_0409dd5e;
            }
          }
label_0409dbdf:
          pMVar25 = TypeInfo_BuiltinLevels;
          if (*(int *)((long)&TypeInfo_BuiltinLevels[2].parameters + 4) == 0) {
            pSStack_e0 = (System_String_o *)0x409dbf7;
            il2cpp_runtime_helper_02337ed0();
          }
          pSStack_e0 = (System_String_o *)0x409dbfc;
          mapName = (System_String_o *)Map_BuiltinLevels__GetCustomModes(pMVar25);
          if ((System_String_array *)mapName == (System_String_array *)0x0) goto label_0409dd5e;
          if ((System_Collections_Generic_List_object__o *)plVar15 !=
              (System_Collections_Generic_List_object__o *)0x0) {
            pSVar19 = (System_String_array *)mapName;
            if ((int)((System_String_array *)mapName)->max_length < 1) {
label_0409dcc9:
              if ((System_Collections_Generic_List_object__o *)plVar15 !=
                  (System_Collections_Generic_List_object__o *)0x0) {
                pSStack_e0 = (System_String_o *)0x409dce4;
                pSVar19 = (System_String_array *)
                          System_Collections_Generic_List_object___ToArray
                                    ((System_Collections_Generic_List_object__o *)plVar15,MethodInfo_String_ToArray);
                return pSVar19;
              }
              goto label_0409dd5e;
            }
            uVar27 = 0;
            unaff_R12 = &MethodInfo_Void_Add;
            if ((((System_String_array *)mapName)->max_length & 0xffffffff) != 0) {
              do {
                pSVar6 = ((System_String_array *)mapName)->m_Items[uVar27];
                pSStack_e0 = (System_String_o *)0x409dc88;
                bVar12 = System_Collections_Generic_List_object___Contains
                                   ((System_Collections_Generic_List_object__o *)plVar15,
                                    (Il2CppObject *)pSVar6,MethodInfo_Boolean_Contains);
                lVar8 = MethodInfo_Void_Add;
                category = (System_String_o *)&MethodInfo_Boolean_Contains;
                if ((char)bVar12 == '\0') {
                  piVar1 = &(((System_Collections_Generic_List_object__o *)plVar15)->fields)._version;
                  *piVar1 = *piVar1 + 1;
                  pSVar4 = (((System_Collections_Generic_List_object__o *)plVar15)->fields)._items;
                  if (pSVar4 == (System_Object_array *)0x0) goto label_0409dd5e;
                  uVar13 = (((System_Collections_Generic_List_object__o *)plVar15)->fields)._size;
                  if (uVar13 < (uint)pSVar4->max_length) {
                    (((System_Collections_Generic_List_object__o *)plVar15)->fields)._size = uVar13 + 1;
                    pSVar4->m_Items[(int)uVar13] = (Il2CppObject *)pSVar6;
                    pSStack_e0 = (System_String_o *)0x409dcc7;
                    il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar13,pSVar6);
                  }
                  else {
                    pSStack_e0 = (System_String_o *)0x409dc5a;
                    System_Collections_Generic_List_object___AddWithResize
                              ((System_Collections_Generic_List_object__o *)plVar15,(Il2CppObject *)pSVar6,
                               *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                  }
                }
                uVar27 = uVar27 + 1;
                uVar13 = (uint)((System_String_array *)mapName)->max_length;
                if ((long)(int)uVar13 <= (long)uVar27) goto label_0409dcc9;
              } while (uVar27 < uVar13);
            }
            pSStack_e0 = (System_String_o *)0x409dcfb;
            il2cpp_runtime_helper_022b2ca0();
            plVar16 = (long *)&MethodInfo_Boolean_Contains;
          }
          pSStack_e0 = (System_String_o *)0x409dd02;
          il2cpp_runtime_helper_022b2c90();
          category = (System_String_o *)plVar16;
        }
        else if ((System_Collections_Generic_List_object__o *)plVar15 !=
                 (System_Collections_Generic_List_object__o *)0x0) {
          category = (System_String_o *)&"Name";
          do {
            pSStack_e0 = (System_String_o *)0x409d466;
            __this_07.fields.m_Object.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar29;
            __this_07.fields._0_8_ = pIVar34;
            __this_07.fields.m_Object.fields._8_8_ = pSVar35;
            __this_07.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pSVar36;
            __this_07.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar37;
            __this_07.fields.m_Object.fields._32_8_ = pSVar38;
            __this_07.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pSVar39;
            __this_07.fields.m_Array.fields._8_8_ = _Var40.rgctx_data;
            __this_07.fields.m_Array.fields._current = _Var41.genericMethod;
            SVar31 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                               (__this_07,(MethodInfo *)&stack0xffffffffffffff28);
            if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
              pSStack_e0 = (System_String_o *)0x409d484;
              il2cpp_runtime_helper_02337ed0();
            }
            pSStack_e0 = (System_String_o *)0x409d491;
            pSVar17 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0(SVar31,(MethodInfo *)0x0);
            unaff_R12 = (long *)&stack0xffffffffffffff28;
            pSVar19 = (System_String_array *)&MethodInfo_Void_Add;
            if (pSVar17 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_0409dd5e;
            pSStack_e0 = (System_String_o *)0x409d4b0;
            plVar16 = (long *)(*(pSVar17->klass->vtable)._7_get_Item.methodPtr)
                                        (pSVar17,"Name",(pSVar17->klass->vtable)._7_get_Item.method);
            unaff_R12 = (long *)&stack0xffffffffffffff28;
            pSVar19 = (System_String_array *)&MethodInfo_Void_Add;
            if (plVar16 == (long *)0x0) goto label_0409dd5e;
            pSStack_e0 = (System_String_o *)0x409d4cc;
            pIVar18 = (Il2CppObject *)
                      (**(code **)(*plVar16 + 0x1c8))(plVar16,*(undefined8 *)(*plVar16 + 0x1d0));
            lVar8 = MethodInfo_Void_Add;
            piVar1 = &(((System_Collections_Generic_List_object__o *)plVar15)->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar4 = (((System_Collections_Generic_List_object__o *)plVar15)->fields)._items;
            unaff_R12 = (long *)&stack0xffffffffffffff28;
            pSVar19 = (System_String_array *)&MethodInfo_Void_Add;
            if (pSVar4 == (System_Object_array *)0x0) goto label_0409dd5e;
            uVar13 = (((System_Collections_Generic_List_object__o *)plVar15)->fields)._size;
            if (uVar13 < (uint)pSVar4->max_length) {
              (((System_Collections_Generic_List_object__o *)plVar15)->fields)._size = uVar13 + 1;
              pSVar4->m_Items[(int)uVar13] = pIVar18;
              pSStack_e0 = (System_String_o *)0x409d50a;
              il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar13);
            }
            else {
              pSStack_e0 = (System_String_o *)0x409d44a;
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)plVar15,pIVar18,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
            }
            pMVar25 = (MethodInfo *)0x0;
            pSStack_e0 = (System_String_o *)0x409d454;
            __this_06.fields.m_Object.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar29;
            __this_06.fields._0_8_ = pIVar34;
            __this_06.fields.m_Object.fields._8_8_ = pSVar35;
            __this_06.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pSVar36;
            __this_06.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar37;
            __this_06.fields.m_Object.fields._32_8_ = pSVar38;
            __this_06.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pSVar39;
            __this_06.fields.m_Array.fields._8_8_ = _Var40.rgctx_data;
            __this_06.fields.m_Array.fields._current = _Var41.genericMethod;
            bVar12 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                               (__this_06,(MethodInfo *)&stack0xffffffffffffff28);
          } while ((char)bVar12 != '\0');
          goto label_0409d50f;
        }
        pSStack_e0 = (System_String_o *)0x409dd0c;
        __this_20.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar29;
        __this_20.fields._0_8_ = pIVar34;
        __this_20.fields.m_Object.fields._8_8_ = pSVar35;
        __this_20.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pSVar36;
        __this_20.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar37;
        __this_20.fields.m_Object.fields._32_8_ = pSVar38;
        __this_20.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pSVar39;
        __this_20.fields.m_Array.fields._8_8_ = _Var40.rgctx_data;
        __this_20.fields.m_Array.fields._current = _Var41.genericMethod;
        aKeyValue = (System_Collections_Generic_KeyValuePair_string__JSONNode__Fields)
                    SimpleJSONFixed_JSONNode_Enumerator__get_Current
                              (__this_20,(MethodInfo *)&stack0xffffffffffffff28);
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          pSStack_e0 = (System_String_o *)0x409dd2a;
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_e0 = (System_String_o *)0x409dd37;
        pSVar17 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0
                            ((System_Collections_Generic_KeyValuePair_string__JSONNode__o)aKeyValue,
                             (MethodInfo *)0x0);
        pSVar19 = (System_String_array *)mapName;
        if (pSVar17 != (SimpleJSONFixed_JSONNode_o *)0x0) {
          pSStack_e0 = (System_String_o *)0x409dd59;
          pIVar18 = (Il2CppObject *)
                    (*(pSVar17->klass->vtable)._7_get_Item.methodPtr)
                              (pSVar17,"Name",(pSVar17->klass->vtable)._7_get_Item.method);
          goto joined_r0x0409dd5c;
        }
      }
    }
  }
  else {
    if (*(int *)((long)&TypeInfo_BuiltinLevels[2].parameters + 4) == 0) {
      pSStack_e0 = (System_String_o *)0x409d2f9;
      il2cpp_runtime_helper_02337ed0();
    }
    lVar8 = MethodInfo_Void_Add;
    if ((System_Collections_Generic_List_object__o *)plVar15 !=
        (System_Collections_Generic_List_object__o *)0x0) {
      pIVar18 = *(Il2CppObject **)(TypeInfo_BuiltinLevels[2].virtualMethodPointer + 0x28);
      piVar1 = &(((System_Collections_Generic_List_object__o *)plVar15)->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar4 = (((System_Collections_Generic_List_object__o *)plVar15)->fields)._items;
      if (pSVar4 != (System_Object_array *)0x0) {
        uVar13 = (((System_Collections_Generic_List_object__o *)plVar15)->fields)._size;
        if (uVar13 < (uint)pSVar4->max_length) {
          (((System_Collections_Generic_List_object__o *)plVar15)->fields)._size = uVar13 + 1;
          pSVar4->m_Items[(int)uVar13] = pIVar18;
          pSStack_e0 = (System_String_o *)0x409d352;
          il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar13);
          goto label_0409d352;
        }
        pSStack_e0 = (System_String_o *)0x409d761;
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)plVar15,pIVar18,
                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
        iVar3 = *(int *)((long)&TypeInfo_BuiltinLevels[2].parameters + 4);
        goto joined_r0x0409d363;
      }
    }
  }
label_0409dd5e:
  do {
    pSStack_e0 = (System_String_o *)0x409dd63;
    il2cpp_runtime_helper_022b2c90();
label_0409dd63:
    pSStack_e0 = (System_String_o *)0x409dd6d;
    __this_21.fields.m_Object.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar29;
    __this_21.fields._0_8_ = pIVar34;
    __this_21.fields.m_Object.fields._8_8_ = pSVar35;
    __this_21.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pSVar36;
    __this_21.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar37;
    __this_21.fields.m_Object.fields._32_8_ = pSVar38;
    __this_21.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pSVar39;
    __this_21.fields.m_Array.fields._8_8_ = _Var40.rgctx_data;
    __this_21.fields.m_Array.fields._current = _Var41.genericMethod;
    aKeyValue = (System_Collections_Generic_KeyValuePair_string__JSONNode__Fields)
                SimpleJSONFixed_JSONNode_Enumerator__get_Current
                          (__this_21,(MethodInfo *)&stack0xffffffffffffff28);
    if (*(int *)&(((((System_String_array *)category)->obj).klass)->_2).field_0x1c == 0) {
      pSStack_e0 = (System_String_o *)0x409dd84;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_e0 = (System_String_o *)0x409dd91;
    pIVar18 = (Il2CppObject *)
              SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0
                        ((System_Collections_Generic_KeyValuePair_string__JSONNode__o)aKeyValue,
                         (MethodInfo *)0x0);
joined_r0x0409dd5c:
  } while (pIVar18 == (Il2CppObject *)0x0);
  ppMVar28 = (MethodInfo_33E0DF0 **)aKeyValue.value;
  pSStack_e0 = (System_String_o *)0x409dda9;
  (*(((SimpleJSONFixed_JSONNode_VTable *)pIVar18->klass->vtable)->_9_get_Value).methodPtr)
            (pIVar18,(((SimpleJSONFixed_JSONNode_VTable *)pIVar18->klass->vtable)->_9_get_Value).method);
  pSStack_e0 = (System_String_o *)0x409ddae;
  il2cpp_runtime_helper_022b2c90();
  pSStack_100 = (System_String_o *)unaff_R12;
  pSStack_f8 = (System_Collections_Generic_List_object__o *)plVar15;
  pSStack_f0 = pSVar19;
  pSStack_e8 = (System_String_array *)category;
  if (g_data_057ac483 == '\0') {
    pSStack_1a8 = (System_String_o *)0x409ddd9;
    pSStack_108 = aKeyValue.key;
    pSStack_e0 = (System_String_o *)ppMVar28;
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinLevels);
    pSStack_1a8 = (System_String_o *)0x409dde5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    pSStack_1a8 = (System_String_o *)0x409ddf1;
    il2cpp_runtime_helper_023445d0(&"MapCategories");
    pSStack_1a8 = (System_String_o *)0x409ddfd;
    il2cpp_runtime_helper_023445d0(&"Name");
    aKeyValue.value = (SimpleJSONFixed_JSONNode_o *)pSStack_e0;
    aKeyValue.key = pSStack_108;
    g_data_057ac483 = '\x01';
  }
  pSStack_e0 = (System_String_o *)aKeyValue.value;
  pSStack_108 = aKeyValue.key;
  SVar9.value = (SimpleJSONFixed_JSONNode_o *)unaff_R12;
  SVar9.key = (System_String_o *)&TypeInfo_BuiltinLevels;
  aKeyValue_00.value = (SimpleJSONFixed_JSONNode_o *)unaff_R12;
  aKeyValue_00.key = (System_String_o *)&TypeInfo_BuiltinLevels;
  if (*(int *)((long)&TypeInfo_BuiltinLevels[2].parameters + 4) == 0) {
    pSStack_1a8 = (System_String_o *)0x409de3b;
    il2cpp_runtime_helper_02337ed0();
    aKeyValue.value = (SimpleJSONFixed_JSONNode_o *)pSStack_e0;
    aKeyValue.key = pSStack_108;
  }
  pSStack_e0 = (System_String_o *)aKeyValue.value;
  pSStack_108 = aKeyValue.key;
  plVar16 = *(long **)TypeInfo_BuiltinLevels[2].virtualMethodPointer;
  if (plVar16 != (long *)0x0) {
    pSStack_1a8 = (System_String_o *)0x409de6b;
    plVar16 = (long *)(**(code **)(*plVar16 + 0x1a8))(plVar16,"MapCategories",*(undefined8 *)(*plVar16 + 0x1b0));
    aKeyValue.value = (SimpleJSONFixed_JSONNode_o *)pSStack_e0;
    aKeyValue.key = pSStack_108;
    aKeyValue_00 = SVar9;
    if (plVar16 != (long *)0x0) {
      pSStack_1a8 = (System_String_o *)0x409de8c;
      (**(code **)(*plVar16 + 0x338))(&stack0xfffffffffffffeb0,plVar16,*(undefined8 *)(*plVar16 + 0x340));
      plVar15 = &TypeInfo_JSONNode;
      ppMVar28 = (MethodInfo_33E0DF0 **)&"Name";
      pIVar34 = pIStack_150;
      pSVar29 = pSStack_148;
      pSVar35 = pSStack_140;
      pSVar36 = pSStack_138;
      pIVar37 = pIStack_130;
      pSVar38 = pSStack_128;
      pSVar39 = pSStack_120;
      _Var40 = _Stack_118;
      _Var41 = _Stack_110;
      while( true ) {
        pSStack_1a8 = (System_String_o *)0x409deea;
        __this_03.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar29;
        __this_03.fields._0_8_ = pIVar34;
        __this_03.fields.m_Object.fields._8_8_ = pSVar35;
        __this_03.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pSVar36;
        __this_03.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar37;
        __this_03.fields.m_Object.fields._32_8_ = pSVar38;
        __this_03.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pSVar39;
        __this_03.fields.m_Array.fields._8_8_ = _Var40.rgctx_data;
        __this_03.fields.m_Array.fields._current = _Var41.genericMethod;
        bVar12 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                           (__this_03,(MethodInfo *)&stack0xfffffffffffffe60);
        if ((char)bVar12 == '\0') {
          return (System_String_array *)0x0;
        }
        pSStack_1a8 = (System_String_o *)0x409defd;
        __this_04.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar29;
        __this_04.fields._0_8_ = pIVar34;
        __this_04.fields.m_Object.fields._8_8_ = pSVar35;
        __this_04.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pSVar36;
        __this_04.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar37;
        __this_04.fields.m_Object.fields._32_8_ = pSVar38;
        __this_04.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pSVar39;
        __this_04.fields.m_Array.fields._8_8_ = _Var40.rgctx_data;
        __this_04.fields.m_Array.fields._current = _Var41.genericMethod;
        aKeyValue_00 = (System_Collections_Generic_KeyValuePair_string__JSONNode__Fields)
                       SimpleJSONFixed_JSONNode_Enumerator__get_Current
                                 (__this_04,(MethodInfo *)&stack0xfffffffffffffe60);
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          pSStack_1a8 = (System_String_o *)0x409df15;
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_1a8 = (System_String_o *)0x409df22;
        pSVar19 = (System_String_array *)
                  SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0
                            ((System_Collections_Generic_KeyValuePair_string__JSONNode__o)aKeyValue_00,
                             (MethodInfo *)0x0);
        aKeyValue.value = (SimpleJSONFixed_JSONNode_o *)pSStack_e0;
        aKeyValue.key = pSStack_108;
        category = (System_String_o *)&stack0xfffffffffffffe60;
        if (pSVar19 == (System_String_array *)0x0) break;
        pIVar5 = (pSVar19->obj).klass;
        pSStack_1a8 = (System_String_o *)0x409df41;
        pSVar17 = (SimpleJSONFixed_JSONNode_o *)
                  (*(((SimpleJSONFixed_JSONNode_VTable *)pIVar5->vtable)->_7_get_Item).methodPtr)
                            (pSVar19,"Name",
                             (((SimpleJSONFixed_JSONNode_VTable *)pIVar5->vtable)->_7_get_Item).method);
        pSStack_1a8 = (System_String_o *)0x409df4e;
        bVar12 = SimpleJSONFixed_JSONNode__op_Equality(pSVar17,pIVar18,(MethodInfo *)0x0);
        if ((char)bVar12 != '\0') {
          return pSVar19;
        }
      }
    }
  }
  pSStack_e0 = (System_String_o *)aKeyValue.value;
  pSStack_108 = aKeyValue.key;
  pSStack_1a8 = (System_String_o *)0x409df6c;
  uStack_1d8 = il2cpp_runtime_helper_022b2c90();
  SStack_1d0 = aKeyValue_00;
  pSStack_1c0 = (System_Collections_Generic_List_object__o *)plVar15;
  pIStack_1b8 = pIVar18;
  pSStack_1b0 = (System_String_array *)category;
  pSStack_1a8 = (System_String_o *)ppMVar28;
  if (g_data_057ac480 == '\0') {
    pSStack_1e0 = (System_String_o *)0x409df94;
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinLevels);
    pSStack_1e0 = (System_String_o *)0x409dfa0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    pSStack_1e0 = (System_String_o *)0x409dfac;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    pSStack_1e0 = (System_String_o *)0x409dfb8;
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    pSStack_1e0 = (System_String_o *)0x409dfc4;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    pSStack_1e0 = (System_String_o *)0x409dfd0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    pSStack_1e0 = (System_String_o *)0x409dfdc;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    pSStack_1e0 = (System_String_o *)0x409dfe8;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    pSStack_1e0 = (System_String_o *)0x409dff4;
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    pSStack_1e0 = (System_String_o *)0x409e000;
    il2cpp_runtime_helper_023445d0(&".txt");
    pSStack_1e0 = (System_String_o *)0x409e00c;
    il2cpp_runtime_helper_023445d0(&".cl");
    pSStack_1e0 = (System_String_o *)0x409e018;
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ac480 = '\x01';
  }
  pSStack_1e0 = (System_String_o *)0x409e02e;
  __this_22 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  pSStack_1e0 = (System_String_o *)0x409e043;
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_22,MethodInfo_List_1_System_String);
  pSStack_1e0 = (System_String_o *)0x409e052;
  __this_23 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  pSStack_1e0 = (System_String_o *)0x409e067;
  pMVar25 = MethodInfo_HashSet_1_System_String;
  System_Collections_Generic_HashSet_object____ctor(__this_23,(MethodInfo_33E0570 *)MethodInfo_HashSet_1_System_String);
  item_00 = &TypeInfo_BuiltinLevels;
  if (*(int *)((long)&TypeInfo_BuiltinLevels[2].parameters + 4) == 0) {
    pSStack_1e0 = (System_String_o *)0x409e07f;
    il2cpp_runtime_helper_02337ed0();
  }
  pSStack_1e0 = (System_String_o *)0x409e092;
  item.genericMethod =
       Map_BuiltinLevels__GetClFiles
                 (*(System_String_o **)(TypeInfo_BuiltinLevels[2].virtualMethodPointer + 0x18),pMVar25);
  path = *(System_Collections_Generic_HashSet_object__o **)(TypeInfo_BuiltinLevels[2].virtualMethodPointer + 0x18);
  pSStack_1e0 = (System_String_o *)0x409e0a8;
  pSVar19 = Map_BuiltinLevels__GetTxtFiles((System_String_o *)path,pMVar25);
  if (item.genericMethod == (System_String_array *)0x0) {
label_0409e311:
    pSStack_1e0 = (System_String_o *)0x409e316;
    il2cpp_runtime_helper_022b2c90();
    pSVar19 = (System_String_array *)category;
  }
  else {
    uVar13 = *(uint *)((long)item.genericMethod + 0x18);
    category = (System_String_o *)pSVar19;
    if (__this_22 == (System_Collections_Generic_HashSet_object__o *)0x0) {
      if ((int)uVar13 < 1) goto label_0409e1b2;
label_0409e2f5:
      path = *(System_Collections_Generic_HashSet_object__o **)((long)item.genericMethod + 0x20);
      if (path != (System_Collections_Generic_HashSet_object__o *)0x0) {
        ppSVar21 = &".cl";
        goto label_0409e31d;
      }
      goto label_0409e311;
    }
    if (0 < (int)uVar13) {
      ppMVar28 = (MethodInfo_33E0DF0 **)0x0;
      do {
        uVar26 = (uint)ppMVar28;
        if (uVar13 <= uVar26) goto label_0409e2f0;
        path = *(System_Collections_Generic_HashSet_object__o **)
                ((long)item.genericMethod + (long)(int)uVar26 * 8 + 0x20);
        if (path == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_0409e311;
        pSStack_1e0 = (System_String_o *)0x409e104;
        item_00 = (MethodInfo **)
                  System_String__Replace_3af9030
                            ((System_String_o *)path,".cl","",(MethodInfo *)0x0);
        lVar8 = MethodInfo_Void_Add;
        piVar1 = (int32_t *)((long)&(__this_22->fields)._slots + 4);
        *piVar1 = *piVar1 + 1;
        pSVar4 = (System_Object_array *)(__this_22->fields)._buckets;
        if (pSVar4 == (System_Object_array *)0x0) goto label_0409e311;
        uVar13 = *(uint *)&(__this_22->fields)._slots;
        if (uVar13 < (uint)pSVar4->max_length) {
          *(uint *)&(__this_22->fields)._slots = uVar13 + 1;
          path = (System_Collections_Generic_HashSet_object__o *)(pSVar4->m_Items + (int)uVar13);
          pSVar4->m_Items[(int)uVar13] = (Il2CppObject *)item_00;
          pSStack_1e0 = (System_String_o *)0x409e148;
          il2cpp_runtime_helper_022b4080(path,item_00);
        }
        else {
          pSStack_1e0 = (System_String_o *)0x409e17a;
          path = __this_22;
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_22,(Il2CppObject *)item_00,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
        }
        if (__this_23 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_0409e311;
        pSStack_1e0 = (System_String_o *)0x409e198;
        path = __this_23;
        System_Collections_Generic_HashSet_object___Add(__this_23,(Il2CppObject *)item_00,MethodInfo_Boolean_Add);
        ppMVar28 = (MethodInfo_33E0DF0 **)(ulong)(uVar26 + 1);
        uVar13 = *(uint *)((long)item.genericMethod + 0x18);
      } while ((int)(uVar26 + 1) < (int)uVar13);
    }
label_0409e1b2:
    if (pSVar19 == (System_String_array *)0x0) goto label_0409e311;
    iVar3 = (int)pSVar19->max_length;
    if (__this_23 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      if (0 < iVar3) {
        item_00 = (MethodInfo **)0x0;
        ppMVar28 = &MethodInfo_Boolean_Contains;
        if (iVar3 != 0) {
          do {
            path = (System_Collections_Generic_HashSet_object__o *)0x0;
            if (pSVar19->m_Items[(int)item_00] == (System_String_o *)0x0) goto label_0409e311;
            pSStack_1e0 = (System_String_o *)0x409e262;
            item.genericMethod =
                 System_String__Replace_3af9030
                           (pSVar19->m_Items[(int)item_00],".txt","",(MethodInfo *)0x0);
            pSStack_1e0 = (System_String_o *)0x409e274;
            path = __this_23;
            bVar12 = System_Collections_Generic_HashSet_object___Contains
                               (__this_23,item.genericMethod,MethodInfo_Boolean_Contains);
            lVar8 = MethodInfo_Void_Add;
            if ((char)bVar12 == '\0') {
              if (__this_22 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_0409e311;
              piVar1 = (int32_t *)((long)&(__this_22->fields)._slots + 4);
              *piVar1 = *piVar1 + 1;
              pSVar4 = (System_Object_array *)(__this_22->fields)._buckets;
              if (pSVar4 == (System_Object_array *)0x0) goto label_0409e311;
              uVar13 = *(uint *)&(__this_22->fields)._slots;
              if (uVar13 < (uint)pSVar4->max_length) {
                *(uint *)&(__this_22->fields)._slots = uVar13 + 1;
                ((_union_233249 *)(pSVar4->m_Items + (int)uVar13))->genericMethod = (void *)item;
                pSStack_1e0 = (System_String_o *)0x409e2c2;
                il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar13,item.genericMethod);
              }
              else {
                pSStack_1e0 = (System_String_o *)0x409e20a;
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)__this_22,item.genericMethod,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
              }
              pSStack_1e0 = (System_String_o *)0x409e21f;
              path = __this_23;
              System_Collections_Generic_HashSet_object___Add(__this_23,item.genericMethod,MethodInfo_Boolean_Add);
            }
            uVar26 = (int)item_00 + 1;
            item_00 = (MethodInfo **)(ulong)uVar26;
            uVar13 = (uint)pSVar19->max_length;
            if ((int)uVar13 <= (int)uVar26) goto label_0409e2cb;
          } while (uVar26 < uVar13);
        }
label_0409e2f0:
        pSStack_1e0 = (System_String_o *)0x409e2f5;
        il2cpp_runtime_helper_022b2ca0();
        goto label_0409e2f5;
      }
label_0409e2cb:
      if (__this_22 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        pSVar19 = (System_String_array *)
                  System_Collections_Generic_List_object___ToArray
                            ((System_Collections_Generic_List_object__o *)__this_22,MethodInfo_String_ToArray);
        return pSVar19;
      }
      goto label_0409e311;
    }
    if (iVar3 < 1) goto label_0409e2cb;
    path = (System_Collections_Generic_HashSet_object__o *)pSVar19->m_Items[0];
    if (path == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_0409e311;
  }
  ppSVar21 = &".txt";
label_0409e31d:
  pSVar29 = *ppSVar21;
  pMVar24 = (MethodInfo *)0x0;
  pSStack_1e0 = (System_String_o *)0x409e331;
  System_String__Replace_3af9030((System_String_o *)path,pSVar29,"",(MethodInfo *)0x0);
  pSStack_1e0 = (System_String_o *)0x409e336;
  il2cpp_runtime_helper_022b2c90();
  pMVar25 = pMVar24;
  pIStack_208 = (Il2CppRGCTXData *)item_00;
  _Stack_200 = item;
  pSStack_1f8 = __this_22;
  pSStack_1f0 = __this_23;
  pSStack_1e8 = pSVar19;
  pSStack_1e0 = (System_String_o *)ppMVar28;
  if (g_data_057ac47d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_BoolSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinLevels);
    il2cpp_runtime_helper_023445d0(&MethodInfo_JSONNode_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Sim);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_FloatSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    g_data_057ac47d = '\x01';
  }
  pSVar32 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *)0x0;
  pIVar33 = (Il2CppType *)0x0;
  pIVar18 = (Il2CppObject *)0x0;
  if (*(int *)((long)&TypeInfo_BuiltinLevels[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_24 = Map_BuiltinLevels__GetMiscSettings((System_String_o *)path,pSVar29,gameMode,pMVar25);
  if ((__this_24 == (System_Collections_Generic_Dictionary_string__JSONNode__o *)0x0) ||
     (__this_25 = System_Collections_Generic_Dictionary_object__object___get_Keys
                            ((System_Collections_Generic_Dictionary_object__object__o *)__this_24,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Sim
                            ),
     __this_25 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)) {
label_0409e7ca:
    il2cpp_runtime_helper_022b2c90();
label_0409e7cf:
    il2cpp_runtime_helper_022b2c90();
label_0409e7d4:
    il2cpp_runtime_helper_022b2c90();
label_0409e7d9:
    il2cpp_runtime_helper_022b2fd0(__this_22);
label_0409e7e1:
    il2cpp_runtime_helper_022b2fd0(__this_22);
label_0409e7e9:
    il2cpp_runtime_helper_022b2fd0(__this_22);
label_0409e7f1:
    il2cpp_runtime_helper_022b2c90();
label_0409e7f6:
    il2cpp_runtime_helper_022b2fd0(__this_22);
label_0409e7fe:
    auVar30 = il2cpp_runtime_helper_022b2c90();
    if (auVar30._8_4_ == 1) {
      plVar15 = (long *)__cxa_begin_catch(auVar30._0_8_);
      lVar8 = *plVar15;
      __cxa_end_catch();
      __this_01.fields._8_8_ = pIVar33;
      __this_01.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar32;
      __this_01.fields._currentKey = pIVar18;
      System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                (__this_01,(MethodInfo_3251B10 *)&stack0xfffffffffffffdc0);
      if (lVar8 == 0) {
        return extraout_RAX_00;
      }
      il2cpp_runtime_helper_022fefe0(lVar8);
    }
    __this_02.fields._8_8_ = pIVar33;
    __this_02.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar32;
    __this_02.fields._currentKey = pIVar18;
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
              (__this_02,(MethodInfo_3251B10 *)&stack0xfffffffffffffdc0);
    _Unwind_Resume(auVar30._0_8_);
  }
  System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
            ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)auStack_220,
             __this_25,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
  pSVar32 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *)
            auStack_220._0_8_;
  pIVar33 = (Il2CppType *)auStack_220._8_8_;
label_0409e4c0:
  do {
    pIVar23 = pIStack_210;
    __this.fields._8_8_ = pIVar33;
    __this.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar32;
    __this.fields._currentKey = pIVar23;
    bVar12 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                       (__this,(MethodInfo_3251B20 *)&stack0xfffffffffffffdc0);
    if ((char)bVar12 == '\0') {
      __this_00.fields._8_8_ = pIVar33;
      __this_00.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar32;
      __this_00.fields._currentKey = pIVar23;
      System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                (__this_00,(MethodInfo_3251B10 *)&stack0xfffffffffffffdc0);
      return extraout_RAX;
    }
    pIVar18 = pIVar23;
    pIVar22 = System_Collections_Generic_Dictionary_object__object___get_Item
                        ((System_Collections_Generic_Dictionary_object__object__o *)__this_24,pIVar23,
                         MethodInfo_JSONNode_get_Item);
    if (pMVar24 == (MethodInfo *)0x0) {
      il2cpp_runtime_helper_022b2c90();
label_0409e7b8:
      il2cpp_runtime_helper_022b2c90();
      goto label_0409e7bd;
    }
    if ((System_Collections_Specialized_OrderedDictionary_o *)pMVar24->invoker_method ==
        (System_Collections_Specialized_OrderedDictionary_o *)0x0) goto label_0409e7b8;
    bVar12 = System_Collections_Specialized_OrderedDictionary__Contains
                       ((System_Collections_Specialized_OrderedDictionary_o *)pMVar24->invoker_method,pIVar23,
                        (MethodInfo *)0x0);
    pIStack_210 = pIVar18;
  } while ((char)bVar12 == '\0');
  if ((System_Collections_Specialized_OrderedDictionary_o *)pMVar24->invoker_method ==
      (System_Collections_Specialized_OrderedDictionary_o *)0x0) {
label_0409e7bd:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    __this_22 = (System_Collections_Generic_HashSet_object__o *)
                System_Collections_Specialized_OrderedDictionary__get_Item
                          ((System_Collections_Specialized_OrderedDictionary_o *)pMVar24->invoker_method,
                           pIVar23,(MethodInfo *)0x0);
    pIStack_210 = pIVar18;
    if (__this_22 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_0409e4c0;
    bVar2 = (((System_Collections_Generic_List_object__c *)__this_22->klass)->_2).naturalAligment;
    bVar11 = (TypeInfo_BaseSetting->_2).naturalAligment;
    if ((bVar11 <= bVar2) &&
       (ppIVar7 = (((System_Collections_Generic_List_object__c *)__this_22->klass)->_2).typeHierarchy,
       ppIVar7[(ulong)bVar11 - 1] == TypeInfo_BaseSetting)) {
      bVar11 = (TypeInfo_BoolSetting->_2).naturalAligment;
      if ((bVar2 < bVar11) || (ppIVar7[(ulong)bVar11 - 1] != TypeInfo_BoolSetting)) {
        bVar11 = (TypeInfo_IntSetting->_2).naturalAligment;
        if ((bVar2 < bVar11) || (ppIVar7[(ulong)bVar11 - 1] != TypeInfo_IntSetting)) {
          bVar11 = (TypeInfo_FloatSetting->_2).naturalAligment;
          if ((bVar2 < bVar11) || (ppIVar7[(ulong)bVar11 - 1] != TypeInfo_FloatSetting)) {
            bVar11 = (TypeInfo_StringSetting->_2).naturalAligment;
            if ((bVar11 <= bVar2) && (ppIVar7[(ulong)bVar11 - 1] == TypeInfo_StringSetting)) {
              if (pIVar22 == (Il2CppObject *)0x0) goto label_0409e7f1;
              pIVar23 = (Il2CppObject *)
                        (*pIVar22->klass->vtable[3].methodPtr)(pIVar22,pIVar22->klass->vtable[3].method);
              bVar2 = (TypeInfo_StringSetting->_2).naturalAligment;
              if (((((System_Collections_Generic_List_object__c *)__this_22->klass)->_2).naturalAligment <
                   bVar2) ||
                 ((((System_Collections_Generic_List_object__c *)__this_22->klass)->_2).typeHierarchy
                  [(ulong)bVar2 - 1] != TypeInfo_StringSetting)) goto label_0409e7e9;
              Settings_TypedSetting_object___set_Value
                        ((Settings_TypedSetting_T__o *)__this_22,pIVar23,MethodInfo_Void_set_Value);
              pIStack_210 = pIVar18;
            }
          }
          else {
            if (pIVar22 == (Il2CppObject *)0x0) goto label_0409e7d4;
            value = (float)(*pIVar22->klass->vtable[0x25].methodPtr)
                                     (pIVar22,pIVar22->klass->vtable[0x25].method);
            bVar2 = (TypeInfo_FloatSetting->_2).naturalAligment;
            if (((((System_Collections_Generic_List_object__c *)__this_22->klass)->_2).naturalAligment < bVar2
                ) || ((((System_Collections_Generic_List_object__c *)__this_22->klass)->_2).typeHierarchy
                      [(ulong)bVar2 - 1] != TypeInfo_FloatSetting)) goto label_0409e7d9;
            Settings_TypedSetting_float___set_Value
                      ((Settings_TypedSetting_float__o *)__this_22,value,MethodInfo_Void_set_Value);
            pIStack_210 = pIVar18;
          }
        }
        else {
          if (pIVar22 == (Il2CppObject *)0x0) goto label_0409e7fe;
          iVar14 = (*pIVar22->klass->vtable[0x23].methodPtr)(pIVar22,pIVar22->klass->vtable[0x23].method);
          bVar2 = (TypeInfo_IntSetting->_2).naturalAligment;
          if (((((System_Collections_Generic_List_object__c *)__this_22->klass)->_2).naturalAligment < bVar2)
             || ((((System_Collections_Generic_List_object__c *)__this_22->klass)->_2).typeHierarchy
                 [(ulong)bVar2 - 1] != TypeInfo_IntSetting)) goto label_0409e7f6;
          Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)__this_22,iVar14,MethodInfo_Void_set_Value)
          ;
          pIStack_210 = pIVar18;
        }
      }
      else {
        if (pIVar22 == (Il2CppObject *)0x0) goto label_0409e7cf;
        bVar11 = (*pIVar22->klass->vtable[0x27].methodPtr)(pIVar22,pIVar22->klass->vtable[0x27].method);
        bVar2 = (TypeInfo_BoolSetting->_2).naturalAligment;
        if (((((System_Collections_Generic_List_object__c *)__this_22->klass)->_2).naturalAligment < bVar2) ||
           ((((System_Collections_Generic_List_object__c *)__this_22->klass)->_2).typeHierarchy
            [(ulong)bVar2 - 1] != TypeInfo_BoolSetting)) goto label_0409e7e1;
        Settings_TypedSetting_bool___set_Value
                  ((Settings_TypedSetting_bool__o *)__this_22,(uint)bVar11,MethodInfo_Void_set_Value);
        pIStack_210 = pIVar18;
      }
      goto label_0409e4c0;
    }
  }
  il2cpp_runtime_helper_022b2fd0(__this_22);
  goto label_0409e7ca;
}


// Map.BuiltinLevels$$LoadMiscSettings
// il2cpp: void Map_BuiltinLevels__LoadMiscSettings (System_String_o* category, System_String_o* mapName, System_String_o* gameMode, Settings_InGameMiscSettings_o* settings, const MethodInfo* method);
// 0x409e340

void Map_BuiltinLevels__LoadMiscSettings
               (System_String_o *category,System_String_o *mapName,System_String_o *gameMode,
               Settings_InGameMiscSettings_o *settings,MethodInfo *method)

{
  byte bVar1;
  System_Collections_Specialized_OrderedDictionary_o *pSVar2;
  Il2CppClass **ppIVar3;
  long lVar4;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_00;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_02;
  byte bVar5;
  bool_conflict bVar6;
  int32_t value;
  System_Collections_Generic_Dictionary_string__JSONNode__o *__this_03;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_04;
  Il2CppObject *pIVar7;
  Il2CppObject *pIVar8;
  long *plVar9;
  Settings_InGameMiscSettings_o *method_00;
  Settings_TypedSetting_T__o *unaff_R13;
  float value_00;
  undefined1 auVar10 [12];
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *pSVar11;
  Il2CppType *pIVar12;
  Il2CppObject *pIVar13;
  undefined1 local_48 [16];
  Il2CppObject *local_38;
  
  method_00 = settings;
  if (g_data_057ac47d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_BoolSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinLevels);
    il2cpp_runtime_helper_023445d0(&MethodInfo_JSONNode_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Sim);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_FloatSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    g_data_057ac47d = '\x01';
  }
  pSVar11 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *)0x0;
  pIVar12 = (Il2CppType *)0x0;
  pIVar13 = (Il2CppObject *)0x0;
  if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_03 = Map_BuiltinLevels__GetMiscSettings(category,mapName,gameMode,(MethodInfo *)method_00);
  if ((__this_03 == (System_Collections_Generic_Dictionary_string__JSONNode__o *)0x0) ||
     (__this_04 = System_Collections_Generic_Dictionary_object__object___get_Keys
                            ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Sim
                            ),
     __this_04 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)) {
label_0409e7ca:
    il2cpp_runtime_helper_022b2c90();
label_0409e7cf:
    il2cpp_runtime_helper_022b2c90();
label_0409e7d4:
    il2cpp_runtime_helper_022b2c90();
label_0409e7d9:
    il2cpp_runtime_helper_022b2fd0(unaff_R13);
label_0409e7e1:
    il2cpp_runtime_helper_022b2fd0(unaff_R13);
label_0409e7e9:
    il2cpp_runtime_helper_022b2fd0(unaff_R13);
label_0409e7f1:
    il2cpp_runtime_helper_022b2c90();
label_0409e7f6:
    il2cpp_runtime_helper_022b2fd0(unaff_R13);
label_0409e7fe:
    auVar10 = il2cpp_runtime_helper_022b2c90();
    if (auVar10._8_4_ == 1) {
      plVar9 = (long *)__cxa_begin_catch(auVar10._0_8_);
      lVar4 = *plVar9;
      __cxa_end_catch();
      __this_01.fields._8_8_ = pIVar12;
      __this_01.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar11;
      __this_01.fields._currentKey = pIVar13;
      System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                (__this_01,(MethodInfo_3251B10 *)&stack0xffffffffffffff98);
      if (lVar4 == 0) {
        return;
      }
      il2cpp_runtime_helper_022fefe0(lVar4);
    }
    __this_02.fields._8_8_ = pIVar12;
    __this_02.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar11;
    __this_02.fields._currentKey = pIVar13;
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
              (__this_02,(MethodInfo_3251B10 *)&stack0xffffffffffffff98);
    _Unwind_Resume(auVar10._0_8_);
  }
  System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
            ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)local_48,
             __this_04,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
  pSVar11 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *)local_48._0_8_;
  pIVar12 = (Il2CppType *)local_48._8_8_;
label_0409e4c0:
  do {
    pIVar8 = local_38;
    __this.fields._8_8_ = pIVar12;
    __this.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar11;
    __this.fields._currentKey = pIVar8;
    bVar6 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                      (__this,(MethodInfo_3251B20 *)&stack0xffffffffffffff98);
    if ((char)bVar6 == '\0') {
      __this_00.fields._8_8_ = pIVar12;
      __this_00.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar11;
      __this_00.fields._currentKey = pIVar8;
      System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                (__this_00,(MethodInfo_3251B10 *)&stack0xffffffffffffff98);
      return;
    }
    pIVar13 = pIVar8;
    pIVar7 = System_Collections_Generic_Dictionary_object__object___get_Item
                       ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,pIVar8,
                        MethodInfo_JSONNode_get_Item);
    if (settings == (Settings_InGameMiscSettings_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
label_0409e7b8:
      il2cpp_runtime_helper_022b2c90();
      goto label_0409e7bd;
    }
    pSVar2 = (settings->fields).Settings;
    if (pSVar2 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) goto label_0409e7b8;
    bVar6 = System_Collections_Specialized_OrderedDictionary__Contains(pSVar2,pIVar8,(MethodInfo *)0x0);
    local_38 = pIVar13;
  } while ((char)bVar6 == '\0');
  pSVar2 = (settings->fields).Settings;
  if (pSVar2 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) {
label_0409e7bd:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    unaff_R13 = (Settings_TypedSetting_T__o *)
                System_Collections_Specialized_OrderedDictionary__get_Item(pSVar2,pIVar8,(MethodInfo *)0x0);
    local_38 = pIVar13;
    if (unaff_R13 == (Settings_TypedSetting_T__o *)0x0) goto label_0409e4c0;
    bVar1 = (unaff_R13->klass->_2).naturalAligment;
    bVar5 = (TypeInfo_BaseSetting->_2).naturalAligment;
    if ((bVar5 <= bVar1) &&
       (ppIVar3 = (unaff_R13->klass->_2).typeHierarchy, ppIVar3[(ulong)bVar5 - 1] == TypeInfo_BaseSetting)) {
      bVar5 = (TypeInfo_BoolSetting->_2).naturalAligment;
      if ((bVar1 < bVar5) || (ppIVar3[(ulong)bVar5 - 1] != TypeInfo_BoolSetting)) {
        bVar5 = (TypeInfo_IntSetting->_2).naturalAligment;
        if ((bVar1 < bVar5) || (ppIVar3[(ulong)bVar5 - 1] != TypeInfo_IntSetting)) {
          bVar5 = (TypeInfo_FloatSetting->_2).naturalAligment;
          if ((bVar1 < bVar5) || (ppIVar3[(ulong)bVar5 - 1] != TypeInfo_FloatSetting)) {
            bVar5 = (TypeInfo_StringSetting->_2).naturalAligment;
            if ((bVar5 <= bVar1) && (ppIVar3[(ulong)bVar5 - 1] == TypeInfo_StringSetting)) {
              if (pIVar7 == (Il2CppObject *)0x0) goto label_0409e7f1;
              pIVar8 = (Il2CppObject *)
                       (*pIVar7->klass->vtable[3].methodPtr)(pIVar7,pIVar7->klass->vtable[3].method);
              bVar1 = (TypeInfo_StringSetting->_2).naturalAligment;
              if (((unaff_R13->klass->_2).naturalAligment < bVar1) ||
                 ((unaff_R13->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_StringSetting)) goto label_0409e7e9;
              Settings_TypedSetting_object___set_Value(unaff_R13,pIVar8,MethodInfo_Void_set_Value);
              local_38 = pIVar13;
            }
          }
          else {
            if (pIVar7 == (Il2CppObject *)0x0) goto label_0409e7d4;
            value_00 = (float)(*pIVar7->klass->vtable[0x25].methodPtr)
                                        (pIVar7,pIVar7->klass->vtable[0x25].method);
            bVar1 = (TypeInfo_FloatSetting->_2).naturalAligment;
            if (((unaff_R13->klass->_2).naturalAligment < bVar1) ||
               ((unaff_R13->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_FloatSetting)) goto label_0409e7d9;
            Settings_TypedSetting_float___set_Value
                      ((Settings_TypedSetting_float__o *)unaff_R13,value_00,MethodInfo_Void_set_Value);
            local_38 = pIVar13;
          }
        }
        else {
          if (pIVar7 == (Il2CppObject *)0x0) goto label_0409e7fe;
          value = (*pIVar7->klass->vtable[0x23].methodPtr)(pIVar7,pIVar7->klass->vtable[0x23].method);
          bVar1 = (TypeInfo_IntSetting->_2).naturalAligment;
          if (((unaff_R13->klass->_2).naturalAligment < bVar1) ||
             ((unaff_R13->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_IntSetting)) goto label_0409e7f6;
          Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)unaff_R13,value,MethodInfo_Void_set_Value);
          local_38 = pIVar13;
        }
      }
      else {
        if (pIVar7 == (Il2CppObject *)0x0) goto label_0409e7cf;
        bVar5 = (*pIVar7->klass->vtable[0x27].methodPtr)(pIVar7,pIVar7->klass->vtable[0x27].method);
        bVar1 = (TypeInfo_BoolSetting->_2).naturalAligment;
        if (((unaff_R13->klass->_2).naturalAligment < bVar1) ||
           ((unaff_R13->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_BoolSetting)) goto label_0409e7e1;
        Settings_TypedSetting_bool___set_Value
                  ((Settings_TypedSetting_bool__o *)unaff_R13,(uint)bVar5,MethodInfo_Void_set_Value);
        local_38 = pIVar13;
      }
      goto label_0409e4c0;
    }
  }
  il2cpp_runtime_helper_022b2fd0(unaff_R13);
  goto label_0409e7ca;
}


// Map.BuiltinLevels$$GetTxtFiles
// il2cpp: System_String_array* Map_BuiltinLevels__GetTxtFiles (System_String_o* path, const MethodInfo* method);
// 0x409c070

System_String_array * Map_BuiltinLevels__GetTxtFiles(System_String_o *path,MethodInfo *method)

{
  long lVar1;
  bool_conflict bVar2;
  System_String_array *pSVar3;
  System_Func_TSource__TResult__o *selector;
  System_Collections_Generic_IEnumerable_TResult__o *source;
  
  if (g_data_057ac47e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_String_Select_String_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_string_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_GetTxtFiles_b__28_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"*.txt");
    g_data_057ac47e = '\x01';
  }
  bVar2 = System_IO_Directory__Exists(path,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pSVar3 = System_IO_Directory__GetFiles_3bfd9f0(path,"*.txt",0,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      selector = *(System_Func_TSource__TResult__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
    }
    else {
      selector = *(System_Func_TSource__TResult__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
    }
    if (selector == (System_Func_TSource__TResult__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      selector = (System_Func_TSource__TResult__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_string_string);
      System_Func_object__object____ctor();
      lVar1 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_TSource__TResult__o **)(lVar1 + 8) = selector;
      il2cpp_runtime_helper_022b4080(lVar1 + 8,selector);
    }
    source = System_Linq_Enumerable__Select_object__object_
                       ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar3,selector,MethodInfo_IEnumerable_1_System_String_Select_String_String);
    pSVar3 = (System_String_array *)
             System_Linq_Enumerable__ToArray_object_
                       ((System_Collections_Generic_IEnumerable_TSource__o *)source,MethodInfo_String_ToArray_String);
    return pSVar3;
  }
  pSVar3 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,0);
  return pSVar3;
}


// Map.BuiltinLevels$$GetClFiles
// il2cpp: System_String_array* Map_BuiltinLevels__GetClFiles (System_String_o* path, const MethodInfo* method);
// 0x409cb60

System_String_array * Map_BuiltinLevels__GetClFiles(System_String_o *path,MethodInfo *method)

{
  long lVar1;
  bool_conflict bVar2;
  System_String_array *pSVar3;
  System_Func_TSource__TResult__o *selector;
  System_Collections_Generic_IEnumerable_TResult__o *source;
  
  if (g_data_057ac47f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_String_Select_String_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_string_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_GetClFiles_b__29_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"*.cl");
    g_data_057ac47f = '\x01';
  }
  bVar2 = System_IO_Directory__Exists(path,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pSVar3 = System_IO_Directory__GetFiles_3bfd9f0(path,"*.cl",0,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      selector = *(System_Func_TSource__TResult__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
    }
    else {
      selector = *(System_Func_TSource__TResult__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
    }
    if (selector == (System_Func_TSource__TResult__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      selector = (System_Func_TSource__TResult__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_string_string);
      System_Func_object__object____ctor();
      lVar1 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_TSource__TResult__o **)(lVar1 + 0x10) = selector;
      il2cpp_runtime_helper_022b4080(lVar1 + 0x10,selector);
    }
    source = System_Linq_Enumerable__Select_object__object_
                       ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar3,selector,MethodInfo_IEnumerable_1_System_String_Select_String_String);
    pSVar3 = (System_String_array *)
             System_Linq_Enumerable__ToArray_object_
                       ((System_Collections_Generic_IEnumerable_TSource__o *)source,MethodInfo_String_ToArray_String);
    return pSVar3;
  }
  pSVar3 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,0);
  return pSVar3;
}


// Map.BuiltinLevels$$GetCustomModes
// il2cpp: System_String_array* Map_BuiltinLevels__GetCustomModes (const MethodInfo* method);
// 0x409df70

System_String_array * Map_BuiltinLevels__GetCustomModes(MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  int iVar3;
  System_Object_array *pSVar4;
  Il2CppClass **ppIVar5;
  long lVar6;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_00;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_02;
  byte bVar7;
  uint uVar8;
  bool_conflict bVar9;
  int32_t value;
  System_Collections_Generic_HashSet_object__o *__this_03;
  System_Collections_Generic_HashSet_object__o *__this_04;
  _union_233249 item;
  System_String_array *pSVar10;
  System_String_o **ppSVar11;
  System_Collections_Generic_Dictionary_string__JSONNode__o *__this_05;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_06;
  Il2CppObject *pIVar12;
  Il2CppObject *pIVar13;
  System_String_array *extraout_RAX;
  System_String_array *extraout_RAX_00;
  MethodInfo *pMVar14;
  MethodInfo *pMVar15;
  System_String_o *gameMode;
  uint uVar16;
  long *plVar17;
  MethodInfo_33E0DF0 **unaff_RBP;
  System_String_o *oldValue;
  System_Collections_Generic_HashSet_object__o *path;
  System_String_array *unaff_R15;
  float value_00;
  undefined1 auVar18 [12];
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *pSVar19;
  Il2CppType *pIVar20;
  Il2CppObject *pIVar21;
  undefined1 auStack_80 [16];
  Il2CppObject *pIStack_70;
  Il2CppRGCTXData *pIStack_68;
  _union_233249 _Stack_60;
  System_Collections_Generic_HashSet_object__o *pSStack_58;
  System_Collections_Generic_HashSet_object__o *pSStack_50;
  System_String_array *pSStack_48;
  MethodInfo_33E0DF0 **ppMStack_40;
  
  if (g_data_057ac480 == '\0') {
    ppMStack_40 = (MethodInfo_33E0DF0 **)0x409df94;
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinLevels);
    ppMStack_40 = (MethodInfo_33E0DF0 **)0x409dfa0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    ppMStack_40 = (MethodInfo_33E0DF0 **)0x409dfac;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    ppMStack_40 = (MethodInfo_33E0DF0 **)0x409dfb8;
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    ppMStack_40 = (MethodInfo_33E0DF0 **)0x409dfc4;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    ppMStack_40 = (MethodInfo_33E0DF0 **)0x409dfd0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    ppMStack_40 = (MethodInfo_33E0DF0 **)0x409dfdc;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    ppMStack_40 = (MethodInfo_33E0DF0 **)0x409dfe8;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    ppMStack_40 = (MethodInfo_33E0DF0 **)0x409dff4;
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    ppMStack_40 = (MethodInfo_33E0DF0 **)0x409e000;
    il2cpp_runtime_helper_023445d0(&".txt");
    ppMStack_40 = (MethodInfo_33E0DF0 **)0x409e00c;
    il2cpp_runtime_helper_023445d0(&".cl");
    ppMStack_40 = (MethodInfo_33E0DF0 **)0x409e018;
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ac480 = '\x01';
  }
  ppMStack_40 = (MethodInfo_33E0DF0 **)0x409e02e;
  __this_03 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  ppMStack_40 = (MethodInfo_33E0DF0 **)0x409e043;
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_03,MethodInfo_List_1_System_String);
  ppMStack_40 = (MethodInfo_33E0DF0 **)0x409e052;
  __this_04 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  ppMStack_40 = (MethodInfo_33E0DF0 **)0x409e067;
  pMVar15 = MethodInfo_HashSet_1_System_String;
  System_Collections_Generic_HashSet_object____ctor(__this_04,(MethodInfo_33E0570 *)MethodInfo_HashSet_1_System_String);
  plVar17 = &TypeInfo_BuiltinLevels;
  if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
    ppMStack_40 = (MethodInfo_33E0DF0 **)0x409e07f;
    il2cpp_runtime_helper_02337ed0();
  }
  ppMStack_40 = (MethodInfo_33E0DF0 **)0x409e092;
  item.genericMethod =
       Map_BuiltinLevels__GetClFiles(*(System_String_o **)(*(long *)(TypeInfo_BuiltinLevels + 0xb8) + 0x18),pMVar15);
  path = *(System_Collections_Generic_HashSet_object__o **)(*(long *)(TypeInfo_BuiltinLevels + 0xb8) + 0x18);
  ppMStack_40 = (MethodInfo_33E0DF0 **)0x409e0a8;
  pSVar10 = Map_BuiltinLevels__GetTxtFiles((System_String_o *)path,pMVar15);
  if (item.genericMethod == (System_String_array *)0x0) {
label_0409e311:
    ppMStack_40 = (MethodInfo_33E0DF0 **)0x409e316;
    il2cpp_runtime_helper_022b2c90();
    pSVar10 = unaff_R15;
  }
  else {
    uVar8 = *(uint *)((long)item.genericMethod + 0x18);
    unaff_R15 = pSVar10;
    if (__this_03 == (System_Collections_Generic_HashSet_object__o *)0x0) {
      if ((int)uVar8 < 1) goto label_0409e1b2;
label_0409e2f5:
      path = *(System_Collections_Generic_HashSet_object__o **)((long)item.genericMethod + 0x20);
      if (path != (System_Collections_Generic_HashSet_object__o *)0x0) {
        ppSVar11 = &".cl";
        goto label_0409e31d;
      }
      goto label_0409e311;
    }
    if (0 < (int)uVar8) {
      unaff_RBP = (MethodInfo_33E0DF0 **)0x0;
      do {
        uVar16 = (uint)unaff_RBP;
        if (uVar8 <= uVar16) goto label_0409e2f0;
        path = *(System_Collections_Generic_HashSet_object__o **)
                ((long)item.genericMethod + (long)(int)uVar16 * 8 + 0x20);
        if (path == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_0409e311;
        ppMStack_40 = (MethodInfo_33E0DF0 **)0x409e104;
        plVar17 = (long *)System_String__Replace_3af9030
                                    ((System_String_o *)path,".cl","",(MethodInfo *)0x0);
        lVar6 = MethodInfo_Void_Add;
        piVar1 = (int32_t *)((long)&(__this_03->fields)._slots + 4);
        *piVar1 = *piVar1 + 1;
        pSVar4 = (System_Object_array *)(__this_03->fields)._buckets;
        if (pSVar4 == (System_Object_array *)0x0) goto label_0409e311;
        uVar8 = *(uint *)&(__this_03->fields)._slots;
        if (uVar8 < (uint)pSVar4->max_length) {
          *(uint *)&(__this_03->fields)._slots = uVar8 + 1;
          path = (System_Collections_Generic_HashSet_object__o *)(pSVar4->m_Items + (int)uVar8);
          pSVar4->m_Items[(int)uVar8] = (Il2CppObject *)plVar17;
          ppMStack_40 = (MethodInfo_33E0DF0 **)0x409e148;
          il2cpp_runtime_helper_022b4080(path,plVar17);
        }
        else {
          ppMStack_40 = (MethodInfo_33E0DF0 **)0x409e17a;
          path = __this_03;
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_03,(Il2CppObject *)plVar17,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
        }
        if (__this_04 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_0409e311;
        ppMStack_40 = (MethodInfo_33E0DF0 **)0x409e198;
        path = __this_04;
        System_Collections_Generic_HashSet_object___Add(__this_04,(Il2CppObject *)plVar17,MethodInfo_Boolean_Add);
        unaff_RBP = (MethodInfo_33E0DF0 **)(ulong)(uVar16 + 1);
        uVar8 = *(uint *)((long)item.genericMethod + 0x18);
      } while ((int)(uVar16 + 1) < (int)uVar8);
    }
label_0409e1b2:
    if (pSVar10 == (System_String_array *)0x0) goto label_0409e311;
    iVar3 = (int)pSVar10->max_length;
    if (__this_04 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      if (0 < iVar3) {
        plVar17 = (long *)0x0;
        unaff_RBP = &MethodInfo_Boolean_Contains;
        if (iVar3 != 0) {
          do {
            path = (System_Collections_Generic_HashSet_object__o *)0x0;
            if (pSVar10->m_Items[(int)plVar17] == (System_String_o *)0x0) goto label_0409e311;
            ppMStack_40 = (MethodInfo_33E0DF0 **)0x409e262;
            item.genericMethod =
                 System_String__Replace_3af9030
                           (pSVar10->m_Items[(int)plVar17],".txt","",(MethodInfo *)0x0);
            ppMStack_40 = (MethodInfo_33E0DF0 **)0x409e274;
            path = __this_04;
            bVar9 = System_Collections_Generic_HashSet_object___Contains
                              (__this_04,item.genericMethod,MethodInfo_Boolean_Contains);
            lVar6 = MethodInfo_Void_Add;
            if ((char)bVar9 == '\0') {
              if (__this_03 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_0409e311;
              piVar1 = (int32_t *)((long)&(__this_03->fields)._slots + 4);
              *piVar1 = *piVar1 + 1;
              pSVar4 = (System_Object_array *)(__this_03->fields)._buckets;
              if (pSVar4 == (System_Object_array *)0x0) goto label_0409e311;
              uVar8 = *(uint *)&(__this_03->fields)._slots;
              if (uVar8 < (uint)pSVar4->max_length) {
                *(uint *)&(__this_03->fields)._slots = uVar8 + 1;
                ((_union_233249 *)(pSVar4->m_Items + (int)uVar8))->genericMethod = (void *)item;
                ppMStack_40 = (MethodInfo_33E0DF0 **)0x409e2c2;
                il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar8,item.genericMethod);
              }
              else {
                ppMStack_40 = (MethodInfo_33E0DF0 **)0x409e20a;
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)__this_03,item.genericMethod,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
              }
              ppMStack_40 = (MethodInfo_33E0DF0 **)0x409e21f;
              path = __this_04;
              System_Collections_Generic_HashSet_object___Add(__this_04,item.genericMethod,MethodInfo_Boolean_Add);
            }
            uVar16 = (int)plVar17 + 1;
            plVar17 = (long *)(ulong)uVar16;
            uVar8 = (uint)pSVar10->max_length;
            if ((int)uVar8 <= (int)uVar16) goto label_0409e2cb;
          } while (uVar16 < uVar8);
        }
label_0409e2f0:
        ppMStack_40 = (MethodInfo_33E0DF0 **)0x409e2f5;
        il2cpp_runtime_helper_022b2ca0();
        goto label_0409e2f5;
      }
label_0409e2cb:
      if (__this_03 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        pSVar10 = (System_String_array *)
                  System_Collections_Generic_List_object___ToArray
                            ((System_Collections_Generic_List_object__o *)__this_03,MethodInfo_String_ToArray);
        return pSVar10;
      }
      goto label_0409e311;
    }
    if (iVar3 < 1) goto label_0409e2cb;
    path = (System_Collections_Generic_HashSet_object__o *)pSVar10->m_Items[0];
    if (path == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_0409e311;
  }
  ppSVar11 = &".txt";
label_0409e31d:
  oldValue = *ppSVar11;
  pMVar14 = (MethodInfo *)0x0;
  ppMStack_40 = (MethodInfo_33E0DF0 **)0x409e331;
  System_String__Replace_3af9030((System_String_o *)path,oldValue,"",(MethodInfo *)0x0);
  ppMStack_40 = (MethodInfo_33E0DF0 **)0x409e336;
  il2cpp_runtime_helper_022b2c90();
  pMVar15 = pMVar14;
  pIStack_68 = (Il2CppRGCTXData *)plVar17;
  _Stack_60 = item;
  pSStack_58 = __this_03;
  pSStack_50 = __this_04;
  pSStack_48 = pSVar10;
  ppMStack_40 = unaff_RBP;
  if (g_data_057ac47d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_BoolSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinLevels);
    il2cpp_runtime_helper_023445d0(&MethodInfo_JSONNode_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Sim);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_FloatSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    g_data_057ac47d = '\x01';
  }
  pSVar19 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *)0x0;
  pIVar20 = (Il2CppType *)0x0;
  pIVar21 = (Il2CppObject *)0x0;
  if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_05 = Map_BuiltinLevels__GetMiscSettings((System_String_o *)path,oldValue,gameMode,pMVar15);
  if ((__this_05 == (System_Collections_Generic_Dictionary_string__JSONNode__o *)0x0) ||
     (__this_06 = System_Collections_Generic_Dictionary_object__object___get_Keys
                            ((System_Collections_Generic_Dictionary_object__object__o *)__this_05,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Sim
                            ),
     __this_06 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)) {
label_0409e7ca:
    il2cpp_runtime_helper_022b2c90();
label_0409e7cf:
    il2cpp_runtime_helper_022b2c90();
label_0409e7d4:
    il2cpp_runtime_helper_022b2c90();
label_0409e7d9:
    il2cpp_runtime_helper_022b2fd0(__this_03);
label_0409e7e1:
    il2cpp_runtime_helper_022b2fd0(__this_03);
label_0409e7e9:
    il2cpp_runtime_helper_022b2fd0(__this_03);
label_0409e7f1:
    il2cpp_runtime_helper_022b2c90();
label_0409e7f6:
    il2cpp_runtime_helper_022b2fd0(__this_03);
label_0409e7fe:
    auVar18 = il2cpp_runtime_helper_022b2c90();
    if (auVar18._8_4_ == 1) {
      plVar17 = (long *)__cxa_begin_catch(auVar18._0_8_);
      lVar6 = *plVar17;
      __cxa_end_catch();
      __this_01.fields._8_8_ = pIVar20;
      __this_01.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar19;
      __this_01.fields._currentKey = pIVar21;
      System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                (__this_01,(MethodInfo_3251B10 *)&stack0xffffffffffffff60);
      if (lVar6 == 0) {
        return extraout_RAX_00;
      }
      il2cpp_runtime_helper_022fefe0(lVar6);
    }
    __this_02.fields._8_8_ = pIVar20;
    __this_02.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar19;
    __this_02.fields._currentKey = pIVar21;
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
              (__this_02,(MethodInfo_3251B10 *)&stack0xffffffffffffff60);
    _Unwind_Resume(auVar18._0_8_);
  }
  System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
            ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)auStack_80,
             __this_06,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
  pSVar19 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *)auStack_80._0_8_
  ;
  pIVar20 = (Il2CppType *)auStack_80._8_8_;
label_0409e4c0:
  do {
    pIVar13 = pIStack_70;
    __this.fields._8_8_ = pIVar20;
    __this.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar19;
    __this.fields._currentKey = pIVar13;
    bVar9 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                      (__this,(MethodInfo_3251B20 *)&stack0xffffffffffffff60);
    if ((char)bVar9 == '\0') {
      __this_00.fields._8_8_ = pIVar20;
      __this_00.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar19;
      __this_00.fields._currentKey = pIVar13;
      System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                (__this_00,(MethodInfo_3251B10 *)&stack0xffffffffffffff60);
      return extraout_RAX;
    }
    pIVar21 = pIVar13;
    pIVar12 = System_Collections_Generic_Dictionary_object__object___get_Item
                        ((System_Collections_Generic_Dictionary_object__object__o *)__this_05,pIVar13,
                         MethodInfo_JSONNode_get_Item);
    if (pMVar14 == (MethodInfo *)0x0) {
      il2cpp_runtime_helper_022b2c90();
label_0409e7b8:
      il2cpp_runtime_helper_022b2c90();
      goto label_0409e7bd;
    }
    if ((System_Collections_Specialized_OrderedDictionary_o *)pMVar14->invoker_method ==
        (System_Collections_Specialized_OrderedDictionary_o *)0x0) goto label_0409e7b8;
    bVar9 = System_Collections_Specialized_OrderedDictionary__Contains
                      ((System_Collections_Specialized_OrderedDictionary_o *)pMVar14->invoker_method,pIVar13,
                       (MethodInfo *)0x0);
    pIStack_70 = pIVar21;
  } while ((char)bVar9 == '\0');
  if ((System_Collections_Specialized_OrderedDictionary_o *)pMVar14->invoker_method ==
      (System_Collections_Specialized_OrderedDictionary_o *)0x0) {
label_0409e7bd:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    __this_03 = (System_Collections_Generic_HashSet_object__o *)
                System_Collections_Specialized_OrderedDictionary__get_Item
                          ((System_Collections_Specialized_OrderedDictionary_o *)pMVar14->invoker_method,
                           pIVar13,(MethodInfo *)0x0);
    pIStack_70 = pIVar21;
    if (__this_03 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_0409e4c0;
    bVar2 = (((System_Collections_Generic_List_object__c *)__this_03->klass)->_2).naturalAligment;
    bVar7 = (TypeInfo_BaseSetting->_2).naturalAligment;
    if ((bVar7 <= bVar2) &&
       (ppIVar5 = (((System_Collections_Generic_List_object__c *)__this_03->klass)->_2).typeHierarchy,
       ppIVar5[(ulong)bVar7 - 1] == TypeInfo_BaseSetting)) {
      bVar7 = (TypeInfo_BoolSetting->_2).naturalAligment;
      if ((bVar2 < bVar7) || (ppIVar5[(ulong)bVar7 - 1] != TypeInfo_BoolSetting)) {
        bVar7 = (TypeInfo_IntSetting->_2).naturalAligment;
        if ((bVar2 < bVar7) || (ppIVar5[(ulong)bVar7 - 1] != TypeInfo_IntSetting)) {
          bVar7 = (TypeInfo_FloatSetting->_2).naturalAligment;
          if ((bVar2 < bVar7) || (ppIVar5[(ulong)bVar7 - 1] != TypeInfo_FloatSetting)) {
            bVar7 = (TypeInfo_StringSetting->_2).naturalAligment;
            if ((bVar7 <= bVar2) && (ppIVar5[(ulong)bVar7 - 1] == TypeInfo_StringSetting)) {
              if (pIVar12 == (Il2CppObject *)0x0) goto label_0409e7f1;
              pIVar13 = (Il2CppObject *)
                        (*pIVar12->klass->vtable[3].methodPtr)(pIVar12,pIVar12->klass->vtable[3].method);
              bVar2 = (TypeInfo_StringSetting->_2).naturalAligment;
              if (((((System_Collections_Generic_List_object__c *)__this_03->klass)->_2).naturalAligment <
                   bVar2) ||
                 ((((System_Collections_Generic_List_object__c *)__this_03->klass)->_2).typeHierarchy
                  [(ulong)bVar2 - 1] != TypeInfo_StringSetting)) goto label_0409e7e9;
              Settings_TypedSetting_object___set_Value
                        ((Settings_TypedSetting_T__o *)__this_03,pIVar13,MethodInfo_Void_set_Value);
              pIStack_70 = pIVar21;
            }
          }
          else {
            if (pIVar12 == (Il2CppObject *)0x0) goto label_0409e7d4;
            value_00 = (float)(*pIVar12->klass->vtable[0x25].methodPtr)
                                        (pIVar12,pIVar12->klass->vtable[0x25].method);
            bVar2 = (TypeInfo_FloatSetting->_2).naturalAligment;
            if (((((System_Collections_Generic_List_object__c *)__this_03->klass)->_2).naturalAligment < bVar2
                ) || ((((System_Collections_Generic_List_object__c *)__this_03->klass)->_2).typeHierarchy
                      [(ulong)bVar2 - 1] != TypeInfo_FloatSetting)) goto label_0409e7d9;
            Settings_TypedSetting_float___set_Value
                      ((Settings_TypedSetting_float__o *)__this_03,value_00,MethodInfo_Void_set_Value);
            pIStack_70 = pIVar21;
          }
        }
        else {
          if (pIVar12 == (Il2CppObject *)0x0) goto label_0409e7fe;
          value = (*pIVar12->klass->vtable[0x23].methodPtr)(pIVar12,pIVar12->klass->vtable[0x23].method);
          bVar2 = (TypeInfo_IntSetting->_2).naturalAligment;
          if (((((System_Collections_Generic_List_object__c *)__this_03->klass)->_2).naturalAligment < bVar2)
             || ((((System_Collections_Generic_List_object__c *)__this_03->klass)->_2).typeHierarchy
                 [(ulong)bVar2 - 1] != TypeInfo_IntSetting)) goto label_0409e7f6;
          Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)__this_03,value,MethodInfo_Void_set_Value);
          pIStack_70 = pIVar21;
        }
      }
      else {
        if (pIVar12 == (Il2CppObject *)0x0) goto label_0409e7cf;
        bVar7 = (*pIVar12->klass->vtable[0x27].methodPtr)(pIVar12,pIVar12->klass->vtable[0x27].method);
        bVar2 = (TypeInfo_BoolSetting->_2).naturalAligment;
        if (((((System_Collections_Generic_List_object__c *)__this_03->klass)->_2).naturalAligment < bVar2) ||
           ((((System_Collections_Generic_List_object__c *)__this_03->klass)->_2).typeHierarchy
            [(ulong)bVar2 - 1] != TypeInfo_BoolSetting)) goto label_0409e7e1;
        Settings_TypedSetting_bool___set_Value
                  ((Settings_TypedSetting_bool__o *)__this_03,(uint)bVar7,MethodInfo_Void_set_Value);
        pIStack_70 = pIVar21;
      }
      goto label_0409e4c0;
    }
  }
  il2cpp_runtime_helper_022b2fd0(__this_03);
  goto label_0409e7ca;
}


// Map.BuiltinLevels$$GetMiscSettings
// il2cpp: System_Collections_Generic_Dictionary_string__JSONNode__o* Map_BuiltinLevels__GetMiscSettings (System_String_o* category, System_String_o* mapName, System_String_o* gameMode, const MethodInfo* method);
// 0x409e980

System_Collections_Generic_Dictionary_string__JSONNode__o *
Map_BuiltinLevels__GetMiscSettings
          (System_String_o *category,System_String_o *mapName,System_String_o *gameMode,MethodInfo *method)

{
  System_Collections_Generic_KeyValuePair_string__JSONNode__Fields SVar1;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_00;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_01;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_02;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_03;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_04;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_05;
  char cVar2;
  bool_conflict bVar3;
  Il2CppObject *pIVar4;
  Il2CppObject *pIVar5;
  System_Collections_Generic_Dictionary_object__object__o *pSVar6;
  long *plVar7;
  System_Collections_Generic_Dictionary_string__JSONNode__o *pSVar8;
  SimpleJSONFixed_JSONNode_o *pSVar9;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  System_String_o *pSVar10;
  System_Collections_Generic_Dictionary_string__JSONNode__o *extraout_RAX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *pMVar11;
  undefined8 *unaff_RBP;
  Il2CppObject *b;
  undefined1 auVar12 [16];
  System_Collections_Generic_KeyValuePair_string__JSONNode__Fields aKeyValue;
  System_Collections_Generic_KeyValuePair_string__JSONNode__Fields SVar13;
  Il2CppClass *pIVar14;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar15;
  InvokerMethod pIVar16;
  Il2CppClass *pIVar17;
  Il2CppType *pIVar18;
  System_Collections_Generic_List_T__o *pSVar19;
  _union_13 _Var20;
  _union_14 _Var21;
  Il2CppClass *pIStack_1c0;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSStack_1b8;
  InvokerMethod pIStack_1b0;
  Il2CppObject *pIStack_1a8;
  Il2CppClass *pIStack_1a0;
  Il2CppType *pIStack_198;
  System_Collections_Generic_List_T__o *pSStack_190;
  _union_13 _Stack_188;
  _union_14 _Stack_180;
  undefined1 auStack_178 [88];
  long *plStack_120;
  Il2CppObject *pIStack_118;
  Il2CppObject *pIStack_110;
  undefined8 *puStack_108;
  Il2CppMethodPointer pIVar22;
  char *pcVar23;
  Il2CppType **ppIVar24;
  Il2CppClass *pIStack_b0;
  Il2CppMethodPointer pIStack_a8;
  InvokerMethod pIStack_a0;
  char *pcStack_98;
  Il2CppClass *pIStack_90;
  Il2CppType *pIStack_88;
  Il2CppType **ppIStack_80;
  _union_13 _Stack_78;
  _union_14 _Stack_70;
  Il2CppObject *pIStack_68;
  long *plStack_60;
  long *plStack_58;
  System_Collections_Generic_Dictionary_object__object__o *pSStack_50;
  Il2CppObject *pIStack_48;
  undefined8 *puStack_40;
  
  pMVar11 = (MethodInfo *)gameMode;
  if (g_data_057ac481 == '\0') {
    puStack_40 = (undefined8 *)0x409e9a9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinLevels);
    puStack_40 = (undefined8 *)0x409e9b5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_SimpleJSONFixed_JSONNode);
    puStack_40 = (undefined8 *)0x409e9c1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_JSONNode);
    puStack_40 = (undefined8 *)0x409e9cd;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    puStack_40 = (undefined8 *)0x409e9d9;
    il2cpp_runtime_helper_023445d0(&"MiscSettings");
    g_data_057ac481 = '\x01';
    pMVar11 = extraout_RDX;
  }
  if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
    puStack_40 = (undefined8 *)0x409e9f9;
    il2cpp_runtime_helper_02337ed0();
    pMVar11 = extraout_RDX_00;
  }
  puStack_40 = (undefined8 *)0x409ea04;
  pIVar4 = (Il2CppObject *)Map_BuiltinLevels__GetMap(category,mapName,pMVar11);
  puStack_40 = (undefined8 *)0x409ea0f;
  pIVar5 = (Il2CppObject *)Map_BuiltinLevels__GetGameMode(gameMode,(MethodInfo *)mapName);
  puStack_40 = (undefined8 *)0x409ea21;
  pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_JSONNode);
  puStack_40 = (undefined8 *)0x409ea36;
  System_Collections_Generic_Dictionary_object__object____ctor(pSVar6,MethodInfo_Dictionary_2_System_String_SimpleJSONFixed_JSONNode);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    puStack_40 = (undefined8 *)0x409ea4f;
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar9 = (SimpleJSONFixed_JSONNode_o *)0x0;
  puStack_40 = (undefined8 *)0x409ea5b;
  b = pIVar5;
  bVar3 = SimpleJSONFixed_JSONNode__op_Inequality
                    ((SimpleJSONFixed_JSONNode_o *)pIVar5,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
label_0409eac1:
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      puStack_40 = (undefined8 *)0x409ead3;
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar9 = (SimpleJSONFixed_JSONNode_o *)0x0;
    puStack_40 = (undefined8 *)0x409eadf;
    b = pIVar4;
    bVar3 = SimpleJSONFixed_JSONNode__op_Inequality
                      ((SimpleJSONFixed_JSONNode_o *)pIVar4,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      return (System_Collections_Generic_Dictionary_string__JSONNode__o *)pSVar6;
    }
    if (pIVar4 != (Il2CppObject *)0x0) {
      puStack_40 = (undefined8 *)0x409eb05;
      cVar2 = (*(((SimpleJSONFixed_JSONNode_VTable *)pIVar4->klass->vtable)->_28_HasKey).methodPtr)
                        (pIVar4,"MiscSettings",
                         (((SimpleJSONFixed_JSONNode_VTable *)pIVar4->klass->vtable)->_28_HasKey).method);
      if (cVar2 == '\0') {
        return (System_Collections_Generic_Dictionary_string__JSONNode__o *)pSVar6;
      }
      puStack_40 = (undefined8 *)0x409eb1f;
      auVar12 = (*(((SimpleJSONFixed_JSONNode_VTable *)pIVar4->klass->vtable)->_7_get_Item).methodPtr)
                          (pIVar4,"MiscSettings",
                           (((SimpleJSONFixed_JSONNode_VTable *)pIVar4->klass->vtable)->_7_get_Item).method);
      pMVar11 = auVar12._8_8_;
      if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
        puStack_40 = (undefined8 *)0x409eb34;
        il2cpp_runtime_helper_02337ed0();
        pMVar11 = extraout_RDX_02;
      }
      puStack_40 = (undefined8 *)0x409eb3f;
      Map_BuiltinLevels__LoadSettings
                ((System_Collections_Generic_Dictionary_string__JSONNode__o *)pSVar6,auVar12._0_8_,pMVar11);
      return (System_Collections_Generic_Dictionary_string__JSONNode__o *)pSVar6;
    }
  }
  else if (pIVar5 != (Il2CppObject *)0x0) {
    unaff_RBP = &"MiscSettings";
    puStack_40 = (undefined8 *)0x409ea86;
    cVar2 = (*(((SimpleJSONFixed_JSONNode_VTable *)pIVar5->klass->vtable)->_28_HasKey).methodPtr)
                      (pIVar5,"MiscSettings",
                       (((SimpleJSONFixed_JSONNode_VTable *)pIVar5->klass->vtable)->_28_HasKey).method);
    if (cVar2 != '\0') {
      puStack_40 = (undefined8 *)0x409eaa1;
      auVar12 = (*(((SimpleJSONFixed_JSONNode_VTable *)pIVar5->klass->vtable)->_7_get_Item).methodPtr)
                          (pIVar5,"MiscSettings",
                           (((SimpleJSONFixed_JSONNode_VTable *)pIVar5->klass->vtable)->_7_get_Item).method);
      pMVar11 = auVar12._8_8_;
      pIVar5 = auVar12._0_8_;
      if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
        puStack_40 = (undefined8 *)0x409eab6;
        il2cpp_runtime_helper_02337ed0();
        pMVar11 = extraout_RDX_01;
      }
      puStack_40 = (undefined8 *)0x409eac1;
      Map_BuiltinLevels__LoadSettings
                ((System_Collections_Generic_Dictionary_string__JSONNode__o *)pSVar6,
                 (SimpleJSONFixed_JSONNode_o *)pIVar5,pMVar11);
    }
    goto label_0409eac1;
  }
  puStack_40 = (undefined8 *)0x409eb56;
  il2cpp_runtime_helper_022b2c90();
  plStack_58 = &TypeInfo_JSONNode;
  plStack_60 = &TypeInfo_BuiltinLevels;
  pIStack_68 = pIVar5;
  pSStack_50 = pSVar6;
  pIStack_48 = pIVar4;
  puStack_40 = unaff_RBP;
  if (g_data_057ac484 == '\0') {
    puStack_108 = (undefined8 *)0x409eb89;
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinLevels);
    puStack_108 = (undefined8 *)0x409eb95;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    puStack_108 = (undefined8 *)0x409eba1;
    il2cpp_runtime_helper_023445d0(&"Name");
    puStack_108 = (undefined8 *)0x409ebad;
    il2cpp_runtime_helper_023445d0(&"GameModes");
    g_data_057ac484 = '\x01';
  }
  SVar1.value = (SimpleJSONFixed_JSONNode_o *)&TypeInfo_BuiltinLevels;
  SVar1.key = (System_String_o *)&TypeInfo_BuiltinLevels;
  aKeyValue.value = (SimpleJSONFixed_JSONNode_o *)&TypeInfo_BuiltinLevels;
  aKeyValue.key = (System_String_o *)&TypeInfo_BuiltinLevels;
  if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
    puStack_108 = (undefined8 *)0x409ebeb;
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar10 = (System_String_o *)**(long **)(TypeInfo_BuiltinLevels + 0xb8);
  SVar13.value = pSVar9;
  SVar13.key = pSVar10;
  if (pSVar10 != (System_String_o *)0x0) {
    puStack_108 = (undefined8 *)0x409ec1b;
    pSVar9 = "GameModes";
    plVar7 = (long *)(*(pSVar10->klass->vtable)._7_CompareTo.methodPtr)
                               (pSVar10,"GameModes",(pSVar10->klass->vtable)._7_CompareTo.method);
    SVar13.value = pSVar9;
    SVar13.key = pSVar10;
    aKeyValue = SVar1;
    if (plVar7 != (long *)0x0) {
      puStack_108 = (undefined8 *)0x409ec3c;
      (**(code **)(*plVar7 + 0x338))(&pIStack_b0,plVar7,*(undefined8 *)(*plVar7 + 0x340));
      unaff_RBP = &"Name";
      pIVar14 = pIStack_b0;
      pIVar22 = pIStack_a8;
      pIVar16 = pIStack_a0;
      pcVar23 = pcStack_98;
      pIVar17 = pIStack_90;
      pIVar18 = pIStack_88;
      ppIVar24 = ppIStack_80;
      _Var20 = _Stack_78;
      _Var21 = _Stack_70;
      while( true ) {
        puStack_108 = (undefined8 *)0x409ec9a;
        __this_04.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar22;
        __this_04.fields._0_8_ = pIVar14;
        __this_04.fields.m_Object.fields._8_8_ = pIVar16;
        __this_04.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar23;
        __this_04.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar17;
        __this_04.fields.m_Object.fields._32_8_ = pIVar18;
        __this_04.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar24;
        __this_04.fields.m_Array.fields._8_8_ = _Var20.rgctx_data;
        __this_04.fields.m_Array.fields._current = _Var21.genericMethod;
        bVar3 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                          (__this_04,(MethodInfo *)&stack0xffffffffffffff00);
        if ((char)bVar3 == '\0') {
          return (System_Collections_Generic_Dictionary_string__JSONNode__o *)0x0;
        }
        puStack_108 = (undefined8 *)0x409ecad;
        __this_05.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar22;
        __this_05.fields._0_8_ = pIVar14;
        __this_05.fields.m_Object.fields._8_8_ = pIVar16;
        __this_05.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar23;
        __this_05.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar17;
        __this_05.fields.m_Object.fields._32_8_ = pIVar18;
        __this_05.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar24;
        __this_05.fields.m_Array.fields._8_8_ = _Var20.rgctx_data;
        __this_05.fields.m_Array.fields._current = _Var21.genericMethod;
        aKeyValue = (System_Collections_Generic_KeyValuePair_string__JSONNode__Fields)
                    SimpleJSONFixed_JSONNode_Enumerator__get_Current
                              (__this_05,(MethodInfo *)&stack0xffffffffffffff00);
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          puStack_108 = (undefined8 *)0x409ecc5;
          il2cpp_runtime_helper_02337ed0();
        }
        puStack_108 = (undefined8 *)0x409ecd2;
        SVar13 = aKeyValue;
        pSVar8 = (System_Collections_Generic_Dictionary_string__JSONNode__o *)
                 SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0
                           ((System_Collections_Generic_KeyValuePair_string__JSONNode__o)aKeyValue,
                            (MethodInfo *)0x0);
        pIVar4 = (Il2CppObject *)&stack0xffffffffffffff00;
        if (pSVar8 == (System_Collections_Generic_Dictionary_string__JSONNode__o *)0x0) break;
        puStack_108 = (undefined8 *)0x409ecf1;
        pSVar9 = (SimpleJSONFixed_JSONNode_o *)
                 (*(((SimpleJSONFixed_JSONNode_c *)pSVar8->klass)->vtable)._7_get_Item.methodPtr)
                           (pSVar8,"Name",
                            (((SimpleJSONFixed_JSONNode_c *)pSVar8->klass)->vtable)._7_get_Item.method);
        puStack_108 = (undefined8 *)0x409ecfe;
        bVar3 = SimpleJSONFixed_JSONNode__op_Equality(pSVar9,b,(MethodInfo *)0x0);
        if ((char)bVar3 != '\0') {
          return pSVar8;
        }
      }
    }
  }
  puStack_108 = (undefined8 *)0x409ed1c;
  il2cpp_runtime_helper_022b2c90();
  pSVar9 = SVar13.value;
  pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)SVar13.key;
  plStack_120 = &TypeInfo_JSONNode;
  pIVar5 = (Il2CppObject *)&stack0xfffffffffffffdf8;
  auStack_178._72_16_ = (undefined1  [16])aKeyValue;
  pIStack_118 = b;
  pIStack_110 = pIVar4;
  puStack_108 = unaff_RBP;
  if (g_data_057ac485 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    g_data_057ac485 = '\x01';
  }
  pSVar19 = (System_Collections_Generic_List_T__o *)0x0;
  _Var20.rgctx_data = (Il2CppRGCTXData *)0x0;
  pIVar17 = (Il2CppClass *)0x0;
  pIVar18 = (Il2CppType *)0x0;
  pIVar16 = (InvokerMethod)0x0;
  pIVar4 = (Il2CppObject *)0x0;
  pIVar14 = (Il2CppClass *)0x0;
  pSVar15 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  _Var21.genericMethod = (SimpleJSONFixed_JSONNode_o *)0x0;
  auStack_178._48_8_ = (System_Collections_Generic_List_T__o *)0x0;
  auStack_178._56_8_ = (Il2CppRGCTXData *)0x0;
  auStack_178._32_8_ = (Il2CppClass *)0x0;
  auStack_178._40_8_ = (Il2CppType *)0x0;
  auStack_178._16_8_ = (InvokerMethod)0x0;
  auStack_178._24_8_ = (Il2CppObject *)0x0;
  auStack_178._0_8_ = (Il2CppClass *)0x0;
  auStack_178._8_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  auStack_178._64_8_ = (SimpleJSONFixed_JSONNode_o *)0x0;
  if (pSVar9 != (SimpleJSONFixed_JSONNode_o *)0x0) {
    SimpleJSONFixed_JSONNode__get_Keys
              ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&pIStack_1c0,pSVar9,(MethodInfo *)0x0);
    auStack_178._64_8_ = _Stack_180;
    auStack_178._48_8_ = pSStack_190;
    auStack_178._56_8_ = _Stack_188;
    auStack_178._32_8_ = pIStack_1a0;
    auStack_178._40_8_ = pIStack_198;
    auStack_178._16_8_ = pIStack_1b0;
    auStack_178._24_8_ = pIStack_1a8;
    auStack_178._0_8_ = pIStack_1c0;
    auStack_178._8_8_ = pSStack_1b8;
    __this.fields.m_Enumerator.fields.m_Object.fields._dictionary = pSVar15;
    __this.fields.m_Enumerator.fields._0_8_ = pIVar14;
    __this.fields.m_Enumerator.fields.m_Object.fields._8_8_ = pIVar16;
    __this.fields.m_Enumerator.fields.m_Object.fields._current.fields.key = pIVar4;
    __this.fields.m_Enumerator.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar17;
    __this.fields.m_Enumerator.fields.m_Object.fields._32_8_ = pIVar18;
    __this.fields.m_Enumerator.fields.m_Array.fields._list = pSVar19;
    __this.fields.m_Enumerator.fields.m_Array.fields._8_8_ = _Var20.rgctx_data;
    __this.fields.m_Enumerator.fields.m_Array.fields._current = _Var21.genericMethod;
    SimpleJSONFixed_JSONNode_KeyEnumerator__GetEnumerator
              ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&pIStack_1c0,__this,(MethodInfo *)auStack_178);
    __this_00.fields.m_Enumerator.fields.m_Object.fields._dictionary = pSStack_1b8;
    __this_00.fields.m_Enumerator.fields._0_8_ = pIStack_1c0;
    __this_00.fields.m_Enumerator.fields.m_Object.fields._8_8_ = pIStack_1b0;
    __this_00.fields.m_Enumerator.fields.m_Object.fields._current.fields.key = pIStack_1a8;
    __this_00.fields.m_Enumerator.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIStack_1a0;
    __this_00.fields.m_Enumerator.fields.m_Object.fields._32_8_ = pIStack_198;
    __this_00.fields.m_Enumerator.fields.m_Array.fields._list = pSStack_190;
    __this_00.fields.m_Enumerator.fields.m_Array.fields._8_8_ = _Stack_188.rgctx_data;
    __this_00.fields.m_Enumerator.fields.m_Array.fields._current = _Stack_180.genericMethod;
    bVar3 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext(__this_00,(MethodInfo *)&stack0xfffffffffffffdf8)
    ;
    pSVar8 = (System_Collections_Generic_Dictionary_string__JSONNode__o *)CONCAT44(extraout_var,bVar3);
    if ((char)bVar3 != '\0') {
      pIVar14 = pIStack_1c0;
      pSVar15 = pSStack_1b8;
      pIVar16 = pIStack_1b0;
      pIVar4 = pIStack_1a8;
      pIVar17 = pIStack_1a0;
      pIVar18 = pIStack_198;
      pSVar19 = pSStack_190;
      _Var20 = _Stack_188;
      _Var21 = _Stack_180;
      if (pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_0409ef21;
      do {
        __this_02.fields.m_Enumerator.fields.m_Object.fields._dictionary = pSVar15;
        __this_02.fields.m_Enumerator.fields._0_8_ = pIVar14;
        __this_02.fields.m_Enumerator.fields.m_Object.fields._8_8_ = pIVar16;
        __this_02.fields.m_Enumerator.fields.m_Object.fields._current.fields.key = pIVar4;
        __this_02.fields.m_Enumerator.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar17;
        __this_02.fields.m_Enumerator.fields.m_Object.fields._32_8_ = pIVar18;
        __this_02.fields.m_Enumerator.fields.m_Array.fields._list = pSVar19;
        __this_02.fields.m_Enumerator.fields.m_Array.fields._8_8_ = _Var20.rgctx_data;
        __this_02.fields.m_Enumerator.fields.m_Array.fields._current = _Var21.genericMethod;
        pSVar10 = SimpleJSONFixed_JSONNode_KeyEnumerator__get_Current
                            (__this_02,(MethodInfo *)&stack0xfffffffffffffdf8);
        bVar3 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                          (pSVar6,(Il2CppObject *)pSVar10,MethodInfo_Boolean_ContainsKey);
        pIVar5 = (Il2CppObject *)
                 (*(pSVar9->klass->vtable)._7_get_Item.methodPtr)
                           (pSVar9,pSVar10,(pSVar9->klass->vtable)._7_get_Item.method);
        if ((char)bVar3 == '\0') {
          System_Collections_Generic_Dictionary_object__object___Add
                    (pSVar6,(Il2CppObject *)pSVar10,pIVar5,MethodInfo_Void_Add);
        }
        else {
          System_Collections_Generic_Dictionary_object__object___set_Item
                    (pSVar6,(Il2CppObject *)pSVar10,pIVar5,_DAT_05589620);
        }
        __this_01.fields.m_Enumerator.fields.m_Object.fields._dictionary = pSVar15;
        __this_01.fields.m_Enumerator.fields._0_8_ = pIVar14;
        __this_01.fields.m_Enumerator.fields.m_Object.fields._8_8_ = pIVar16;
        __this_01.fields.m_Enumerator.fields.m_Object.fields._current.fields.key = pIVar4;
        __this_01.fields.m_Enumerator.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar17;
        __this_01.fields.m_Enumerator.fields.m_Object.fields._32_8_ = pIVar18;
        __this_01.fields.m_Enumerator.fields.m_Array.fields._list = pSVar19;
        __this_01.fields.m_Enumerator.fields.m_Array.fields._8_8_ = _Var20.rgctx_data;
        __this_01.fields.m_Enumerator.fields.m_Array.fields._current = _Var21.genericMethod;
        bVar3 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                          (__this_01,(MethodInfo *)&stack0xfffffffffffffdf8);
        pSVar8 = (System_Collections_Generic_Dictionary_string__JSONNode__o *)CONCAT44(extraout_var_00,bVar3);
      } while ((char)bVar3 != '\0');
    }
    return pSVar8;
  }
  il2cpp_runtime_helper_022b2c90();
label_0409ef21:
  __this_03.fields.m_Enumerator.fields.m_Object.fields._dictionary = pSVar15;
  __this_03.fields.m_Enumerator.fields._0_8_ = pIVar14;
  __this_03.fields.m_Enumerator.fields.m_Object.fields._8_8_ = pIVar16;
  __this_03.fields.m_Enumerator.fields.m_Object.fields._current.fields.key = pIVar4;
  __this_03.fields.m_Enumerator.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar17;
  __this_03.fields.m_Enumerator.fields.m_Object.fields._32_8_ = pIVar18;
  __this_03.fields.m_Enumerator.fields.m_Array.fields._list = pSVar19;
  __this_03.fields.m_Enumerator.fields.m_Array.fields._8_8_ = _Var20.rgctx_data;
  __this_03.fields.m_Enumerator.fields.m_Array.fields._current = _Var21.genericMethod;
  SimpleJSONFixed_JSONNode_KeyEnumerator__get_Current(__this_03,(MethodInfo *)&stack0xfffffffffffffdf8);
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(pIVar5,(MethodInfo *)0x0);
  return extraout_RAX;
}


// Map.BuiltinLevels$$GetMap
// il2cpp: SimpleJSONFixed_JSONNode_o* Map_BuiltinLevels__GetMap (System_String_o* category, System_String_o* mapName, const MethodInfo* method);
// 0x409ae00

SimpleJSONFixed_JSONNode_o *
Map_BuiltinLevels__GetMap(System_String_o *category,System_String_o *mapName,MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_Enumerator_o __this;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_00;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_01;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_02;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_03;
  bool_conflict bVar1;
  long *plVar2;
  System_String_o *pSVar3;
  SimpleJSONFixed_JSONNode_o *pSVar4;
  SimpleJSONFixed_JSONNode_o *a;
  System_String_o *pSVar5;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o SVar6;
  undefined8 in_stack_fffffffffffffee8;
  Il2CppMethodPointer pIVar7;
  Il2CppMethodPointer pIVar8;
  InvokerMethod pIVar9;
  char *pcVar10;
  Il2CppClass *pIVar11;
  Il2CppType *pIVar12;
  SimpleJSONFixed_JSONNode_o *pSVar13;
  Il2CppMethodPointer local_c0;
  Il2CppMethodPointer pIStack_b8;
  InvokerMethod local_b0;
  char *pcStack_a8;
  Il2CppClass *local_a0;
  Il2CppType *pIStack_98;
  SimpleJSONFixed_JSONNode_o *local_90;
  _union_13 _Stack_88;
  _union_14 local_80;
  Il2CppMethodPointer local_78;
  Il2CppMethodPointer pIStack_70;
  InvokerMethod local_68;
  char *pcStack_60;
  Il2CppClass *local_58;
  Il2CppType *pIStack_50;
  SimpleJSONFixed_JSONNode_o *local_48;
  _union_13 _Stack_40;
  _union_14 local_38;
  
  if (g_data_057ac482 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinLevels);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&"MapCategories");
    il2cpp_runtime_helper_023445d0(&"Maps");
    il2cpp_runtime_helper_023445d0(&"Name");
    g_data_057ac482 = '\x01';
  }
  local_48 = (SimpleJSONFixed_JSONNode_o *)0x0;
  _Stack_40.rgctx_data = (Il2CppRGCTXData *)0x0;
  local_58 = (Il2CppClass *)0x0;
  pIStack_50 = (Il2CppType *)0x0;
  local_68 = (InvokerMethod)0x0;
  pcStack_60 = (char *)0x0;
  local_78 = (Il2CppMethodPointer)0x0;
  pIStack_70 = (Il2CppMethodPointer)0x0;
  local_38.genericMethod = (void *)0x0;
  if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar5 = (System_String_o *)**(long **)(TypeInfo_BuiltinLevels + 0xb8);
  if ((pSVar5 != (System_String_o *)0x0) &&
     (plVar2 = (long *)(*(((SimpleJSONFixed_JSONNode_c *)pSVar5->klass)->vtable)._7_get_Item.methodPtr)
                                 (pSVar5,"MapCategories",
                                  (((SimpleJSONFixed_JSONNode_c *)pSVar5->klass)->vtable)._7_get_Item.method),
     plVar2 != (long *)0x0)) {
    (**(code **)(*plVar2 + 0x338))(&local_c0,plVar2,*(undefined8 *)(*plVar2 + 0x340));
    __this.fields.m_Object.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)category;
    __this.fields._0_8_ = in_stack_fffffffffffffee8;
    __this.fields.m_Object.fields._8_8_ = local_c0;
    __this.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIStack_b8;
    __this.fields.m_Object.fields._current.fields.value = (Il2CppObject *)local_b0;
    __this.fields.m_Object.fields._32_8_ = pcStack_a8;
    __this.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)local_a0;
    __this.fields.m_Array.fields._8_8_ = pIStack_98;
    __this.fields.m_Array.fields._current = local_90;
    pIVar7 = local_c0;
    pIVar8 = pIStack_b8;
    pIVar9 = local_b0;
    pcVar10 = pcStack_a8;
    pIVar11 = local_a0;
    pIVar12 = pIStack_98;
    pSVar13 = local_90;
    bVar1 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext(__this,(MethodInfo *)&stack0xfffffffffffffef8);
    if ((char)bVar1 != '\0') {
      do {
        __this_01.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)category;
        __this_01.fields._0_8_ = in_stack_fffffffffffffee8;
        __this_01.fields.m_Object.fields._8_8_ = pIVar7;
        __this_01.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIVar8;
        __this_01.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar9;
        __this_01.fields.m_Object.fields._32_8_ = pcVar10;
        __this_01.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pIVar11;
        __this_01.fields.m_Array.fields._8_8_ = pIVar12;
        __this_01.fields.m_Array.fields._current = pSVar13;
        SVar6 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                          (__this_01,(MethodInfo *)&stack0xfffffffffffffef8);
        pSVar5 = SVar6.fields.key;
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar3 = (System_String_o *)SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0(SVar6,(MethodInfo *)0x0);
        if (pSVar3 == (System_String_o *)0x0) goto label_0409b12b;
        pSVar4 = (SimpleJSONFixed_JSONNode_o *)
                 (*(((SimpleJSONFixed_JSONNode_c *)pSVar3->klass)->vtable)._7_get_Item.methodPtr)
                           (pSVar3,"Name",
                            (((SimpleJSONFixed_JSONNode_c *)pSVar3->klass)->vtable)._7_get_Item.method);
        bVar1 = SimpleJSONFixed_JSONNode__op_Equality(pSVar4,(Il2CppObject *)category,(MethodInfo *)0x0);
        if ((char)bVar1 != '\0') {
          plVar2 = (long *)(*(((SimpleJSONFixed_JSONNode_c *)pSVar3->klass)->vtable)._7_get_Item.methodPtr)
                                     (pSVar3,"Maps",
                                      (((SimpleJSONFixed_JSONNode_c *)pSVar3->klass)->vtable)._7_get_Item.
                                      method);
          pSVar5 = pSVar3;
          if (plVar2 == (long *)0x0) goto label_0409b12b;
          (**(code **)(*plVar2 + 0x338))(&local_c0,plVar2,*(undefined8 *)(*plVar2 + 0x340));
          local_38 = local_80;
          local_48 = local_90;
          _Stack_40 = _Stack_88;
          local_58 = local_a0;
          pIStack_50 = pIStack_98;
          local_68 = local_b0;
          pcStack_60 = pcStack_a8;
          local_78 = local_c0;
          pIStack_70 = pIStack_b8;
          while (__this_02.fields.m_Object.fields._dictionary =
                      (System_Collections_Generic_Dictionary_TKey__TValue__o *)category,
                __this_02.fields._0_8_ = in_stack_fffffffffffffee8,
                __this_02.fields.m_Object.fields._8_8_ = pIVar7,
                __this_02.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIVar8,
                __this_02.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar9,
                __this_02.fields.m_Object.fields._32_8_ = pcVar10,
                __this_02.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pIVar11,
                __this_02.fields.m_Array.fields._8_8_ = pIVar12,
                __this_02.fields.m_Array.fields._current = pSVar13,
                bVar1 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext(__this_02,(MethodInfo *)&local_78),
                (char)bVar1 != '\0') {
            __this_03.fields.m_Object.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)category;
            __this_03.fields._0_8_ = in_stack_fffffffffffffee8;
            __this_03.fields.m_Object.fields._8_8_ = pIVar7;
            __this_03.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIVar8;
            __this_03.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar9;
            __this_03.fields.m_Object.fields._32_8_ = pcVar10;
            __this_03.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pIVar11;
            __this_03.fields.m_Array.fields._8_8_ = pIVar12;
            __this_03.fields.m_Array.fields._current = pSVar13;
            SVar6 = SimpleJSONFixed_JSONNode_Enumerator__get_Current(__this_03,(MethodInfo *)&local_78);
            pSVar5 = SVar6.fields.key;
            if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar4 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0(SVar6,(MethodInfo *)0x0);
            if (pSVar4 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_0409b12b;
            a = (SimpleJSONFixed_JSONNode_o *)
                (*(pSVar4->klass->vtable)._7_get_Item.methodPtr)
                          (pSVar4,"Name",(pSVar4->klass->vtable)._7_get_Item.method);
            bVar1 = SimpleJSONFixed_JSONNode__op_Equality(a,(Il2CppObject *)mapName,(MethodInfo *)0x0);
            if ((char)bVar1 != '\0') {
              return pSVar4;
            }
          }
        }
        __this_00.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)category;
        __this_00.fields._0_8_ = in_stack_fffffffffffffee8;
        __this_00.fields.m_Object.fields._8_8_ = pIVar7;
        __this_00.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIVar8;
        __this_00.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar9;
        __this_00.fields.m_Object.fields._32_8_ = pcVar10;
        __this_00.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pIVar11;
        __this_00.fields.m_Array.fields._8_8_ = pIVar12;
        __this_00.fields.m_Array.fields._current = pSVar13;
        bVar1 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                          (__this_00,(MethodInfo *)&stack0xfffffffffffffef8);
      } while ((char)bVar1 != '\0');
    }
    return (SimpleJSONFixed_JSONNode_o *)0x0;
  }
label_0409b12b:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac46a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinLevels);
    il2cpp_runtime_helper_023445d0(&".txt");
    il2cpp_runtime_helper_023445d0(&"/");
    g_data_057ac46a = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar5 = System_String__Concat_3af7470
                     (*(System_String_o **)(*(long *)(TypeInfo_BuiltinLevels + 0xb8) + 0x10),"/",pSVar5,
                      ".txt",(MethodInfo *)0x0);
  bVar1 = System_IO_File__Exists(pSVar5,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    return (SimpleJSONFixed_JSONNode_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  pSVar5 = System_IO_File__ReadAllText(pSVar5,(MethodInfo *)0x0);
  return (SimpleJSONFixed_JSONNode_o *)pSVar5;
}


// Map.BuiltinLevels$$GetCategory
// il2cpp: SimpleJSONFixed_JSONNode_o* Map_BuiltinLevels__GetCategory (System_String_o* category, const MethodInfo* method);
// 0x409ddb0

SimpleJSONFixed_JSONNode_o * Map_BuiltinLevels__GetCategory(System_String_o *category,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  int iVar3;
  Il2CppClass **ppIVar4;
  long lVar5;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_00;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_02;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_03;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_04;
  byte bVar6;
  bool_conflict bVar7;
  uint uVar8;
  int32_t value;
  long *plVar9;
  SimpleJSONFixed_JSONNode_o *pSVar10;
  SimpleJSONFixed_JSONNode_o *a;
  System_Collections_Generic_HashSet_object__o *__this_05;
  System_Collections_Generic_HashSet_object__o *__this_06;
  _union_233249 item;
  System_String_array *pSVar11;
  System_Object_array *pSVar12;
  System_String_o **ppSVar13;
  System_Collections_Generic_Dictionary_string__JSONNode__o *__this_07;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_08;
  Il2CppObject *pIVar14;
  Il2CppObject *pIVar15;
  SimpleJSONFixed_JSONNode_o *extraout_RAX;
  SimpleJSONFixed_JSONNode_o *extraout_RAX_00;
  MethodInfo *pMVar16;
  MethodInfo *pMVar17;
  System_String_o *gameMode;
  uint uVar18;
  long *plVar19;
  MethodInfo_33E0DF0 **unaff_RBP;
  System_String_o *pSVar20;
  System_Collections_Generic_HashSet_object__o *path;
  SimpleJSONFixed_JSONNode_o *unaff_R12;
  long *unaff_R13;
  System_String_array *unaff_R15;
  float value_00;
  undefined1 auVar21 [12];
  System_Collections_Generic_KeyValuePair_string__JSONNode__o aKeyValue;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *pSVar22;
  Il2CppType *pIVar23;
  Il2CppObject *pIVar24;
  undefined1 auStack_148 [16];
  Il2CppObject *pIStack_138;
  Il2CppRGCTXData *pIStack_130;
  _union_233249 _Stack_128;
  System_Collections_Generic_HashSet_object__o *pSStack_120;
  System_Collections_Generic_HashSet_object__o *pSStack_118;
  System_String_array *pSStack_110;
  MethodInfo_33E0DF0 **ppMStack_108;
  undefined8 uStack_100;
  System_String_o *pSStack_f8;
  SimpleJSONFixed_JSONNode_o *pSStack_f0;
  long *plStack_e8;
  System_String_o *pSStack_e0;
  System_String_array *pSStack_d8;
  MethodInfo_33E0DF0 **ppMStack_d0;
  Il2CppClass *pIVar25;
  System_String_o *pSVar26;
  System_String_o *pSVar27;
  Il2CppClass *pIVar28;
  System_String_o *pSVar29;
  System_String_o *pSVar30;
  _union_13 _Var31;
  _union_14 _Var32;
  Il2CppClass *local_78;
  System_String_o *pSStack_70;
  System_String_o *local_68;
  System_String_o *pSStack_60;
  Il2CppClass *local_58;
  System_String_o *pSStack_50;
  System_String_o *local_48;
  _union_13 _Stack_40;
  _union_14 local_38;
  
  if (g_data_057ac483 == '\0') {
    ppMStack_d0 = (MethodInfo_33E0DF0 **)0x409ddd9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinLevels);
    ppMStack_d0 = (MethodInfo_33E0DF0 **)0x409dde5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    ppMStack_d0 = (MethodInfo_33E0DF0 **)0x409ddf1;
    il2cpp_runtime_helper_023445d0(&"MapCategories");
    ppMStack_d0 = (MethodInfo_33E0DF0 **)0x409ddfd;
    il2cpp_runtime_helper_023445d0(&"Name");
    g_data_057ac483 = '\x01';
  }
  plVar19 = &TypeInfo_BuiltinLevels;
  if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
    ppMStack_d0 = (MethodInfo_33E0DF0 **)0x409de3b;
    il2cpp_runtime_helper_02337ed0();
  }
  plVar9 = (long *)**(long **)(TypeInfo_BuiltinLevels + 0xb8);
  if (plVar9 != (long *)0x0) {
    ppMStack_d0 = (MethodInfo_33E0DF0 **)0x409de6b;
    plVar9 = (long *)(**(code **)(*plVar9 + 0x1a8))(plVar9,"MapCategories",*(undefined8 *)(*plVar9 + 0x1b0));
    if (plVar9 != (long *)0x0) {
      ppMStack_d0 = (MethodInfo_33E0DF0 **)0x409de8c;
      (**(code **)(*plVar9 + 0x338))(&stack0xffffffffffffff88,plVar9,*(undefined8 *)(*plVar9 + 0x340));
      unaff_R13 = &TypeInfo_JSONNode;
      unaff_RBP = (MethodInfo_33E0DF0 **)&"Name";
      pIVar25 = local_78;
      pSVar20 = pSStack_70;
      pSVar26 = local_68;
      pSVar27 = pSStack_60;
      pIVar28 = local_58;
      pSVar29 = pSStack_50;
      pSVar30 = local_48;
      _Var31 = _Stack_40;
      _Var32 = local_38;
      while( true ) {
        ppMStack_d0 = (MethodInfo_33E0DF0 **)0x409deea;
        __this_03.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar20;
        __this_03.fields._0_8_ = pIVar25;
        __this_03.fields.m_Object.fields._8_8_ = pSVar26;
        __this_03.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pSVar27;
        __this_03.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar28;
        __this_03.fields.m_Object.fields._32_8_ = pSVar29;
        __this_03.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pSVar30;
        __this_03.fields.m_Array.fields._8_8_ = _Var31.rgctx_data;
        __this_03.fields.m_Array.fields._current = _Var32.genericMethod;
        bVar7 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                          (__this_03,(MethodInfo *)&stack0xffffffffffffff38);
        if ((char)bVar7 == '\0') {
          return (SimpleJSONFixed_JSONNode_o *)0x0;
        }
        ppMStack_d0 = (MethodInfo_33E0DF0 **)0x409defd;
        __this_04.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar20;
        __this_04.fields._0_8_ = pIVar25;
        __this_04.fields.m_Object.fields._8_8_ = pSVar26;
        __this_04.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pSVar27;
        __this_04.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar28;
        __this_04.fields.m_Object.fields._32_8_ = pSVar29;
        __this_04.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pSVar30;
        __this_04.fields.m_Array.fields._8_8_ = _Var31.rgctx_data;
        __this_04.fields.m_Array.fields._current = _Var32.genericMethod;
        aKeyValue = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                              (__this_04,(MethodInfo *)&stack0xffffffffffffff38);
        unaff_R12 = aKeyValue.fields.value;
        plVar19 = (long *)aKeyValue.fields.key;
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          ppMStack_d0 = (MethodInfo_33E0DF0 **)0x409df15;
          il2cpp_runtime_helper_02337ed0();
        }
        ppMStack_d0 = (MethodInfo_33E0DF0 **)0x409df22;
        pSVar10 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0(aKeyValue,(MethodInfo *)0x0);
        unaff_R15 = (System_String_array *)&stack0xffffffffffffff38;
        if (pSVar10 == (SimpleJSONFixed_JSONNode_o *)0x0) break;
        ppMStack_d0 = (MethodInfo_33E0DF0 **)0x409df41;
        a = (SimpleJSONFixed_JSONNode_o *)
            (*(pSVar10->klass->vtable)._7_get_Item.methodPtr)
                      (pSVar10,"Name",(pSVar10->klass->vtable)._7_get_Item.method);
        ppMStack_d0 = (MethodInfo_33E0DF0 **)0x409df4e;
        bVar7 = SimpleJSONFixed_JSONNode__op_Equality(a,(Il2CppObject *)category,(MethodInfo *)0x0);
        if ((char)bVar7 != '\0') {
          return pSVar10;
        }
      }
    }
  }
  ppMStack_d0 = (MethodInfo_33E0DF0 **)0x409df6c;
  uStack_100 = il2cpp_runtime_helper_022b2c90();
  pSStack_f8 = (System_String_o *)plVar19;
  pSStack_f0 = unaff_R12;
  plStack_e8 = unaff_R13;
  pSStack_e0 = category;
  pSStack_d8 = unaff_R15;
  ppMStack_d0 = unaff_RBP;
  if (g_data_057ac480 == '\0') {
    ppMStack_108 = (MethodInfo_33E0DF0 **)0x409df94;
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinLevels);
    ppMStack_108 = (MethodInfo_33E0DF0 **)0x409dfa0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    ppMStack_108 = (MethodInfo_33E0DF0 **)0x409dfac;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    ppMStack_108 = (MethodInfo_33E0DF0 **)0x409dfb8;
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    ppMStack_108 = (MethodInfo_33E0DF0 **)0x409dfc4;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    ppMStack_108 = (MethodInfo_33E0DF0 **)0x409dfd0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    ppMStack_108 = (MethodInfo_33E0DF0 **)0x409dfdc;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    ppMStack_108 = (MethodInfo_33E0DF0 **)0x409dfe8;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    ppMStack_108 = (MethodInfo_33E0DF0 **)0x409dff4;
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    ppMStack_108 = (MethodInfo_33E0DF0 **)0x409e000;
    il2cpp_runtime_helper_023445d0(&".txt");
    ppMStack_108 = (MethodInfo_33E0DF0 **)0x409e00c;
    il2cpp_runtime_helper_023445d0(&".cl");
    ppMStack_108 = (MethodInfo_33E0DF0 **)0x409e018;
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ac480 = '\x01';
  }
  ppMStack_108 = (MethodInfo_33E0DF0 **)0x409e02e;
  __this_05 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  ppMStack_108 = (MethodInfo_33E0DF0 **)0x409e043;
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_05,MethodInfo_List_1_System_String);
  ppMStack_108 = (MethodInfo_33E0DF0 **)0x409e052;
  __this_06 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  ppMStack_108 = (MethodInfo_33E0DF0 **)0x409e067;
  pMVar17 = MethodInfo_HashSet_1_System_String;
  System_Collections_Generic_HashSet_object____ctor(__this_06,(MethodInfo_33E0570 *)MethodInfo_HashSet_1_System_String);
  plVar19 = &TypeInfo_BuiltinLevels;
  if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
    ppMStack_108 = (MethodInfo_33E0DF0 **)0x409e07f;
    il2cpp_runtime_helper_02337ed0();
  }
  ppMStack_108 = (MethodInfo_33E0DF0 **)0x409e092;
  item.genericMethod =
       Map_BuiltinLevels__GetClFiles(*(System_String_o **)(*(long *)(TypeInfo_BuiltinLevels + 0xb8) + 0x18),pMVar17);
  path = *(System_Collections_Generic_HashSet_object__o **)(*(long *)(TypeInfo_BuiltinLevels + 0xb8) + 0x18);
  ppMStack_108 = (MethodInfo_33E0DF0 **)0x409e0a8;
  pSVar11 = Map_BuiltinLevels__GetTxtFiles((System_String_o *)path,pMVar17);
  if (item.genericMethod == (System_String_array *)0x0) {
label_0409e311:
    ppMStack_108 = (MethodInfo_33E0DF0 **)0x409e316;
    il2cpp_runtime_helper_022b2c90();
    pSVar11 = unaff_R15;
  }
  else {
    uVar8 = *(uint *)((long)item.genericMethod + 0x18);
    unaff_R15 = pSVar11;
    if (__this_05 == (System_Collections_Generic_HashSet_object__o *)0x0) {
      if ((int)uVar8 < 1) goto label_0409e1b2;
label_0409e2f5:
      path = *(System_Collections_Generic_HashSet_object__o **)((long)item.genericMethod + 0x20);
      if (path != (System_Collections_Generic_HashSet_object__o *)0x0) {
        ppSVar13 = &".cl";
        goto label_0409e31d;
      }
      goto label_0409e311;
    }
    if (0 < (int)uVar8) {
      unaff_RBP = (MethodInfo_33E0DF0 **)0x0;
      do {
        uVar18 = (uint)unaff_RBP;
        if (uVar8 <= uVar18) goto label_0409e2f0;
        path = *(System_Collections_Generic_HashSet_object__o **)
                ((long)item.genericMethod + (long)(int)uVar18 * 8 + 0x20);
        if (path == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_0409e311;
        ppMStack_108 = (MethodInfo_33E0DF0 **)0x409e104;
        plVar19 = (long *)System_String__Replace_3af9030
                                    ((System_String_o *)path,".cl","",(MethodInfo *)0x0);
        lVar5 = MethodInfo_Void_Add;
        piVar1 = (int32_t *)((long)&(__this_05->fields)._slots + 4);
        *piVar1 = *piVar1 + 1;
        pSVar12 = (System_Object_array *)(__this_05->fields)._buckets;
        if (pSVar12 == (System_Object_array *)0x0) goto label_0409e311;
        uVar8 = *(uint *)&(__this_05->fields)._slots;
        if (uVar8 < (uint)pSVar12->max_length) {
          *(uint *)&(__this_05->fields)._slots = uVar8 + 1;
          path = (System_Collections_Generic_HashSet_object__o *)(pSVar12->m_Items + (int)uVar8);
          pSVar12->m_Items[(int)uVar8] = (Il2CppObject *)plVar19;
          ppMStack_108 = (MethodInfo_33E0DF0 **)0x409e148;
          il2cpp_runtime_helper_022b4080(path,plVar19);
        }
        else {
          ppMStack_108 = (MethodInfo_33E0DF0 **)0x409e17a;
          path = __this_05;
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_05,(Il2CppObject *)plVar19,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
        }
        if (__this_06 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_0409e311;
        ppMStack_108 = (MethodInfo_33E0DF0 **)0x409e198;
        path = __this_06;
        System_Collections_Generic_HashSet_object___Add(__this_06,(Il2CppObject *)plVar19,MethodInfo_Boolean_Add);
        unaff_RBP = (MethodInfo_33E0DF0 **)(ulong)(uVar18 + 1);
        uVar8 = *(uint *)((long)item.genericMethod + 0x18);
      } while ((int)(uVar18 + 1) < (int)uVar8);
    }
label_0409e1b2:
    if (pSVar11 == (System_String_array *)0x0) goto label_0409e311;
    iVar3 = (int)pSVar11->max_length;
    if (__this_06 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      if (0 < iVar3) {
        plVar19 = (long *)0x0;
        unaff_RBP = &MethodInfo_Boolean_Contains;
        if (iVar3 != 0) {
          do {
            path = (System_Collections_Generic_HashSet_object__o *)0x0;
            if (pSVar11->m_Items[(int)plVar19] == (System_String_o *)0x0) goto label_0409e311;
            ppMStack_108 = (MethodInfo_33E0DF0 **)0x409e262;
            item.genericMethod =
                 System_String__Replace_3af9030
                           (pSVar11->m_Items[(int)plVar19],".txt","",(MethodInfo *)0x0);
            ppMStack_108 = (MethodInfo_33E0DF0 **)0x409e274;
            path = __this_06;
            bVar7 = System_Collections_Generic_HashSet_object___Contains
                              (__this_06,item.genericMethod,MethodInfo_Boolean_Contains);
            lVar5 = MethodInfo_Void_Add;
            if ((char)bVar7 == '\0') {
              if (__this_05 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_0409e311;
              piVar1 = (int32_t *)((long)&(__this_05->fields)._slots + 4);
              *piVar1 = *piVar1 + 1;
              pSVar12 = (System_Object_array *)(__this_05->fields)._buckets;
              if (pSVar12 == (System_Object_array *)0x0) goto label_0409e311;
              uVar8 = *(uint *)&(__this_05->fields)._slots;
              if (uVar8 < (uint)pSVar12->max_length) {
                *(uint *)&(__this_05->fields)._slots = uVar8 + 1;
                ((_union_233249 *)(pSVar12->m_Items + (int)uVar8))->genericMethod = (void *)item;
                ppMStack_108 = (MethodInfo_33E0DF0 **)0x409e2c2;
                il2cpp_runtime_helper_022b4080(pSVar12->m_Items + (int)uVar8,item.genericMethod);
              }
              else {
                ppMStack_108 = (MethodInfo_33E0DF0 **)0x409e20a;
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)__this_05,item.genericMethod,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
              }
              ppMStack_108 = (MethodInfo_33E0DF0 **)0x409e21f;
              path = __this_06;
              System_Collections_Generic_HashSet_object___Add(__this_06,item.genericMethod,MethodInfo_Boolean_Add);
            }
            uVar18 = (int)plVar19 + 1;
            plVar19 = (long *)(ulong)uVar18;
            uVar8 = (uint)pSVar11->max_length;
            if ((int)uVar8 <= (int)uVar18) goto label_0409e2cb;
          } while (uVar18 < uVar8);
        }
label_0409e2f0:
        ppMStack_108 = (MethodInfo_33E0DF0 **)0x409e2f5;
        il2cpp_runtime_helper_022b2ca0();
        goto label_0409e2f5;
      }
label_0409e2cb:
      if (__this_05 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        pSVar12 = System_Collections_Generic_List_object___ToArray
                            ((System_Collections_Generic_List_object__o *)__this_05,MethodInfo_String_ToArray);
        return (SimpleJSONFixed_JSONNode_o *)pSVar12;
      }
      goto label_0409e311;
    }
    if (iVar3 < 1) goto label_0409e2cb;
    path = (System_Collections_Generic_HashSet_object__o *)pSVar11->m_Items[0];
    if (path == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_0409e311;
  }
  ppSVar13 = &".txt";
label_0409e31d:
  pSVar20 = *ppSVar13;
  pMVar16 = (MethodInfo *)0x0;
  ppMStack_108 = (MethodInfo_33E0DF0 **)0x409e331;
  System_String__Replace_3af9030((System_String_o *)path,pSVar20,"",(MethodInfo *)0x0);
  ppMStack_108 = (MethodInfo_33E0DF0 **)0x409e336;
  il2cpp_runtime_helper_022b2c90();
  pMVar17 = pMVar16;
  pIStack_130 = (Il2CppRGCTXData *)plVar19;
  _Stack_128 = item;
  pSStack_120 = __this_05;
  pSStack_118 = __this_06;
  pSStack_110 = pSVar11;
  ppMStack_108 = unaff_RBP;
  if (g_data_057ac47d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_BoolSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinLevels);
    il2cpp_runtime_helper_023445d0(&MethodInfo_JSONNode_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Sim);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_FloatSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    g_data_057ac47d = '\x01';
  }
  pSVar22 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *)0x0;
  pIVar23 = (Il2CppType *)0x0;
  pIVar24 = (Il2CppObject *)0x0;
  if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_07 = Map_BuiltinLevels__GetMiscSettings((System_String_o *)path,pSVar20,gameMode,pMVar17);
  if ((__this_07 == (System_Collections_Generic_Dictionary_string__JSONNode__o *)0x0) ||
     (__this_08 = System_Collections_Generic_Dictionary_object__object___get_Keys
                            ((System_Collections_Generic_Dictionary_object__object__o *)__this_07,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Sim
                            ),
     __this_08 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)) {
label_0409e7ca:
    il2cpp_runtime_helper_022b2c90();
label_0409e7cf:
    il2cpp_runtime_helper_022b2c90();
label_0409e7d4:
    il2cpp_runtime_helper_022b2c90();
label_0409e7d9:
    il2cpp_runtime_helper_022b2fd0(__this_05);
label_0409e7e1:
    il2cpp_runtime_helper_022b2fd0(__this_05);
label_0409e7e9:
    il2cpp_runtime_helper_022b2fd0(__this_05);
label_0409e7f1:
    il2cpp_runtime_helper_022b2c90();
label_0409e7f6:
    il2cpp_runtime_helper_022b2fd0(__this_05);
label_0409e7fe:
    auVar21 = il2cpp_runtime_helper_022b2c90();
    if (auVar21._8_4_ == 1) {
      plVar19 = (long *)__cxa_begin_catch(auVar21._0_8_);
      lVar5 = *plVar19;
      __cxa_end_catch();
      __this_01.fields._8_8_ = pIVar23;
      __this_01.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar22;
      __this_01.fields._currentKey = pIVar24;
      System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                (__this_01,(MethodInfo_3251B10 *)&stack0xfffffffffffffe98);
      if (lVar5 == 0) {
        return extraout_RAX_00;
      }
      il2cpp_runtime_helper_022fefe0(lVar5);
    }
    __this_02.fields._8_8_ = pIVar23;
    __this_02.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar22;
    __this_02.fields._currentKey = pIVar24;
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
              (__this_02,(MethodInfo_3251B10 *)&stack0xfffffffffffffe98);
    _Unwind_Resume(auVar21._0_8_);
  }
  System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
            ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)auStack_148,
             __this_08,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
  pSVar22 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *)
            auStack_148._0_8_;
  pIVar23 = (Il2CppType *)auStack_148._8_8_;
label_0409e4c0:
  do {
    pIVar15 = pIStack_138;
    __this.fields._8_8_ = pIVar23;
    __this.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar22;
    __this.fields._currentKey = pIVar15;
    bVar7 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                      (__this,(MethodInfo_3251B20 *)&stack0xfffffffffffffe98);
    if ((char)bVar7 == '\0') {
      __this_00.fields._8_8_ = pIVar23;
      __this_00.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar22;
      __this_00.fields._currentKey = pIVar15;
      System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                (__this_00,(MethodInfo_3251B10 *)&stack0xfffffffffffffe98);
      return extraout_RAX;
    }
    pIVar24 = pIVar15;
    pIVar14 = System_Collections_Generic_Dictionary_object__object___get_Item
                        ((System_Collections_Generic_Dictionary_object__object__o *)__this_07,pIVar15,
                         MethodInfo_JSONNode_get_Item);
    if (pMVar16 == (MethodInfo *)0x0) {
      il2cpp_runtime_helper_022b2c90();
label_0409e7b8:
      il2cpp_runtime_helper_022b2c90();
      goto label_0409e7bd;
    }
    if ((System_Collections_Specialized_OrderedDictionary_o *)pMVar16->invoker_method ==
        (System_Collections_Specialized_OrderedDictionary_o *)0x0) goto label_0409e7b8;
    bVar7 = System_Collections_Specialized_OrderedDictionary__Contains
                      ((System_Collections_Specialized_OrderedDictionary_o *)pMVar16->invoker_method,pIVar15,
                       (MethodInfo *)0x0);
    pIStack_138 = pIVar24;
  } while ((char)bVar7 == '\0');
  if ((System_Collections_Specialized_OrderedDictionary_o *)pMVar16->invoker_method ==
      (System_Collections_Specialized_OrderedDictionary_o *)0x0) {
label_0409e7bd:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    __this_05 = (System_Collections_Generic_HashSet_object__o *)
                System_Collections_Specialized_OrderedDictionary__get_Item
                          ((System_Collections_Specialized_OrderedDictionary_o *)pMVar16->invoker_method,
                           pIVar15,(MethodInfo *)0x0);
    pIStack_138 = pIVar24;
    if (__this_05 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_0409e4c0;
    bVar2 = (((System_Collections_Generic_List_object__c *)__this_05->klass)->_2).naturalAligment;
    bVar6 = (TypeInfo_BaseSetting->_2).naturalAligment;
    if ((bVar6 <= bVar2) &&
       (ppIVar4 = (((System_Collections_Generic_List_object__c *)__this_05->klass)->_2).typeHierarchy,
       ppIVar4[(ulong)bVar6 - 1] == TypeInfo_BaseSetting)) {
      bVar6 = (TypeInfo_BoolSetting->_2).naturalAligment;
      if ((bVar2 < bVar6) || (ppIVar4[(ulong)bVar6 - 1] != TypeInfo_BoolSetting)) {
        bVar6 = (TypeInfo_IntSetting->_2).naturalAligment;
        if ((bVar2 < bVar6) || (ppIVar4[(ulong)bVar6 - 1] != TypeInfo_IntSetting)) {
          bVar6 = (TypeInfo_FloatSetting->_2).naturalAligment;
          if ((bVar2 < bVar6) || (ppIVar4[(ulong)bVar6 - 1] != TypeInfo_FloatSetting)) {
            bVar6 = (TypeInfo_StringSetting->_2).naturalAligment;
            if ((bVar6 <= bVar2) && (ppIVar4[(ulong)bVar6 - 1] == TypeInfo_StringSetting)) {
              if (pIVar14 == (Il2CppObject *)0x0) goto label_0409e7f1;
              pIVar15 = (Il2CppObject *)
                        (*pIVar14->klass->vtable[3].methodPtr)(pIVar14,pIVar14->klass->vtable[3].method);
              bVar2 = (TypeInfo_StringSetting->_2).naturalAligment;
              if (((((System_Collections_Generic_List_object__c *)__this_05->klass)->_2).naturalAligment <
                   bVar2) ||
                 ((((System_Collections_Generic_List_object__c *)__this_05->klass)->_2).typeHierarchy
                  [(ulong)bVar2 - 1] != TypeInfo_StringSetting)) goto label_0409e7e9;
              Settings_TypedSetting_object___set_Value
                        ((Settings_TypedSetting_T__o *)__this_05,pIVar15,MethodInfo_Void_set_Value);
              pIStack_138 = pIVar24;
            }
          }
          else {
            if (pIVar14 == (Il2CppObject *)0x0) goto label_0409e7d4;
            value_00 = (float)(*pIVar14->klass->vtable[0x25].methodPtr)
                                        (pIVar14,pIVar14->klass->vtable[0x25].method);
            bVar2 = (TypeInfo_FloatSetting->_2).naturalAligment;
            if (((((System_Collections_Generic_List_object__c *)__this_05->klass)->_2).naturalAligment < bVar2
                ) || ((((System_Collections_Generic_List_object__c *)__this_05->klass)->_2).typeHierarchy
                      [(ulong)bVar2 - 1] != TypeInfo_FloatSetting)) goto label_0409e7d9;
            Settings_TypedSetting_float___set_Value
                      ((Settings_TypedSetting_float__o *)__this_05,value_00,MethodInfo_Void_set_Value);
            pIStack_138 = pIVar24;
          }
        }
        else {
          if (pIVar14 == (Il2CppObject *)0x0) goto label_0409e7fe;
          value = (*pIVar14->klass->vtable[0x23].methodPtr)(pIVar14,pIVar14->klass->vtable[0x23].method);
          bVar2 = (TypeInfo_IntSetting->_2).naturalAligment;
          if (((((System_Collections_Generic_List_object__c *)__this_05->klass)->_2).naturalAligment < bVar2)
             || ((((System_Collections_Generic_List_object__c *)__this_05->klass)->_2).typeHierarchy
                 [(ulong)bVar2 - 1] != TypeInfo_IntSetting)) goto label_0409e7f6;
          Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)__this_05,value,MethodInfo_Void_set_Value);
          pIStack_138 = pIVar24;
        }
      }
      else {
        if (pIVar14 == (Il2CppObject *)0x0) goto label_0409e7cf;
        bVar6 = (*pIVar14->klass->vtable[0x27].methodPtr)(pIVar14,pIVar14->klass->vtable[0x27].method);
        bVar2 = (TypeInfo_BoolSetting->_2).naturalAligment;
        if (((((System_Collections_Generic_List_object__c *)__this_05->klass)->_2).naturalAligment < bVar2) ||
           ((((System_Collections_Generic_List_object__c *)__this_05->klass)->_2).typeHierarchy
            [(ulong)bVar2 - 1] != TypeInfo_BoolSetting)) goto label_0409e7e1;
        Settings_TypedSetting_bool___set_Value
                  ((Settings_TypedSetting_bool__o *)__this_05,(uint)bVar6,MethodInfo_Void_set_Value);
        pIStack_138 = pIVar24;
      }
      goto label_0409e4c0;
    }
  }
  il2cpp_runtime_helper_022b2fd0(__this_05);
  goto label_0409e7ca;
}


// Map.BuiltinLevels$$GetGameMode
// il2cpp: SimpleJSONFixed_JSONNode_o* Map_BuiltinLevels__GetGameMode (System_String_o* gameMode, const MethodInfo* method);
// 0x409eb60

SimpleJSONFixed_JSONNode_o * Map_BuiltinLevels__GetGameMode(System_String_o *gameMode,MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_00;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_01;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_02;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_03;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_04;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_05;
  bool_conflict bVar1;
  long *plVar2;
  SimpleJSONFixed_JSONNode_o *pSVar3;
  SimpleJSONFixed_JSONNode_o *pSVar4;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  System_String_o *pSVar5;
  Il2CppObject *pIVar6;
  SimpleJSONFixed_JSONNode_o *extraout_RAX;
  long *plVar7;
  undefined8 *unaff_RBP;
  System_Collections_Generic_Dictionary_object__object__o *__this_06;
  SimpleJSONFixed_JSONNode_o *unaff_R12;
  long *unaff_R13;
  undefined1 *unaff_R15;
  System_Collections_Generic_KeyValuePair_string__JSONNode__Fields aKeyValue;
  Il2CppClass *pIVar8;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar9;
  InvokerMethod pIVar10;
  Il2CppObject *pIVar11;
  Il2CppClass *pIVar12;
  Il2CppType *pIVar13;
  System_Collections_Generic_List_T__o *pSVar14;
  _union_13 _Var15;
  _union_14 _Var16;
  Il2CppClass *pIStack_188;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSStack_180;
  InvokerMethod pIStack_178;
  Il2CppObject *pIStack_170;
  Il2CppClass *pIStack_168;
  Il2CppType *pIStack_160;
  System_Collections_Generic_List_T__o *pSStack_158;
  _union_13 _Stack_150;
  _union_14 _Stack_148;
  undefined1 auStack_140 [80];
  SimpleJSONFixed_JSONNode_o *pSStack_f0;
  long *plStack_e8;
  System_String_o *pSStack_e0;
  undefined1 *puStack_d8;
  undefined8 *puStack_d0;
  Il2CppMethodPointer pIVar17;
  Il2CppMethodPointer pIVar18;
  char *pcVar19;
  Il2CppType **ppIVar20;
  Il2CppMethodPointer local_78;
  Il2CppMethodPointer pIStack_70;
  InvokerMethod local_68;
  char *pcStack_60;
  Il2CppClass *local_58;
  Il2CppType *pIStack_50;
  Il2CppType **local_48;
  _union_13 _Stack_40;
  _union_14 local_38;
  
  if (g_data_057ac484 == '\0') {
    puStack_d0 = (undefined8 *)0x409eb89;
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinLevels);
    puStack_d0 = (undefined8 *)0x409eb95;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    puStack_d0 = (undefined8 *)0x409eba1;
    il2cpp_runtime_helper_023445d0(&"Name");
    puStack_d0 = (undefined8 *)0x409ebad;
    il2cpp_runtime_helper_023445d0(&"GameModes");
    g_data_057ac484 = '\x01';
  }
  plVar7 = &TypeInfo_BuiltinLevels;
  if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
    puStack_d0 = (undefined8 *)0x409ebeb;
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar5 = (System_String_o *)**(long **)(TypeInfo_BuiltinLevels + 0xb8);
  aKeyValue.value = (SimpleJSONFixed_JSONNode_o *)method;
  aKeyValue.key = pSVar5;
  if (pSVar5 != (System_String_o *)0x0) {
    puStack_d0 = (undefined8 *)0x409ec1b;
    pSVar3 = "GameModes";
    plVar2 = (long *)(*(pSVar5->klass->vtable)._7_CompareTo.methodPtr)
                               (pSVar5,"GameModes",(pSVar5->klass->vtable)._7_CompareTo.method);
    aKeyValue.value = pSVar3;
    aKeyValue.key = pSVar5;
    if (plVar2 != (long *)0x0) {
      puStack_d0 = (undefined8 *)0x409ec3c;
      (**(code **)(*plVar2 + 0x338))(&local_78,plVar2,*(undefined8 *)(*plVar2 + 0x340));
      unaff_R13 = &TypeInfo_JSONNode;
      unaff_RBP = &"Name";
      pIVar17 = local_78;
      pIVar18 = pIStack_70;
      pIVar10 = local_68;
      pcVar19 = pcStack_60;
      pIVar8 = local_58;
      pIVar13 = pIStack_50;
      ppIVar20 = local_48;
      _Var15 = _Stack_40;
      _Var16 = local_38;
      while( true ) {
        puStack_d0 = (undefined8 *)0x409ec9a;
        __this_04.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar18;
        __this_04.fields._0_8_ = pIVar17;
        __this_04.fields.m_Object.fields._8_8_ = pIVar10;
        __this_04.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar19;
        __this_04.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar8;
        __this_04.fields.m_Object.fields._32_8_ = pIVar13;
        __this_04.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar20;
        __this_04.fields.m_Array.fields._8_8_ = _Var15.rgctx_data;
        __this_04.fields.m_Array.fields._current = _Var16.genericMethod;
        bVar1 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                          (__this_04,(MethodInfo *)&stack0xffffffffffffff38);
        if ((char)bVar1 == '\0') {
          return (SimpleJSONFixed_JSONNode_o *)0x0;
        }
        puStack_d0 = (undefined8 *)0x409ecad;
        __this_05.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar18;
        __this_05.fields._0_8_ = pIVar17;
        __this_05.fields.m_Object.fields._8_8_ = pIVar10;
        __this_05.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar19;
        __this_05.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar8;
        __this_05.fields.m_Object.fields._32_8_ = pIVar13;
        __this_05.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar20;
        __this_05.fields.m_Array.fields._8_8_ = _Var15.rgctx_data;
        __this_05.fields.m_Array.fields._current = _Var16.genericMethod;
        aKeyValue = (System_Collections_Generic_KeyValuePair_string__JSONNode__Fields)
                    SimpleJSONFixed_JSONNode_Enumerator__get_Current
                              (__this_05,(MethodInfo *)&stack0xffffffffffffff38);
        unaff_R12 = aKeyValue.value;
        plVar7 = (long *)aKeyValue.key;
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          puStack_d0 = (undefined8 *)0x409ecc5;
          il2cpp_runtime_helper_02337ed0();
        }
        puStack_d0 = (undefined8 *)0x409ecd2;
        pSVar3 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0
                           ((System_Collections_Generic_KeyValuePair_string__JSONNode__o)aKeyValue,
                            (MethodInfo *)0x0);
        unaff_R15 = &stack0xffffffffffffff38;
        if (pSVar3 == (SimpleJSONFixed_JSONNode_o *)0x0) break;
        puStack_d0 = (undefined8 *)0x409ecf1;
        pSVar4 = (SimpleJSONFixed_JSONNode_o *)
                 (*(pSVar3->klass->vtable)._7_get_Item.methodPtr)
                           (pSVar3,"Name",(pSVar3->klass->vtable)._7_get_Item.method);
        puStack_d0 = (undefined8 *)0x409ecfe;
        bVar1 = SimpleJSONFixed_JSONNode__op_Equality(pSVar4,(Il2CppObject *)gameMode,(MethodInfo *)0x0);
        if ((char)bVar1 != '\0') {
          return pSVar3;
        }
      }
    }
  }
  puStack_d0 = (undefined8 *)0x409ed1c;
  il2cpp_runtime_helper_022b2c90();
  pSVar3 = aKeyValue.value;
  __this_06 = (System_Collections_Generic_Dictionary_object__object__o *)aKeyValue.key;
  pIVar6 = (Il2CppObject *)&stack0xfffffffffffffe30;
  auStack_140._72_8_ = plVar7;
  pSStack_f0 = unaff_R12;
  plStack_e8 = unaff_R13;
  pSStack_e0 = gameMode;
  puStack_d8 = unaff_R15;
  puStack_d0 = unaff_RBP;
  if (g_data_057ac485 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    g_data_057ac485 = '\x01';
  }
  pSVar14 = (System_Collections_Generic_List_T__o *)0x0;
  _Var15.rgctx_data = (Il2CppRGCTXData *)0x0;
  pIVar12 = (Il2CppClass *)0x0;
  pIVar13 = (Il2CppType *)0x0;
  pIVar10 = (InvokerMethod)0x0;
  pIVar11 = (Il2CppObject *)0x0;
  pIVar8 = (Il2CppClass *)0x0;
  pSVar9 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  _Var16.genericMethod = (SimpleJSONFixed_JSONNode_o *)0x0;
  auStack_140._48_8_ = (System_Collections_Generic_List_T__o *)0x0;
  auStack_140._56_8_ = (Il2CppRGCTXData *)0x0;
  auStack_140._32_8_ = (Il2CppClass *)0x0;
  auStack_140._40_8_ = (Il2CppType *)0x0;
  auStack_140._16_8_ = (InvokerMethod)0x0;
  auStack_140._24_8_ = (Il2CppObject *)0x0;
  auStack_140._0_8_ = (Il2CppClass *)0x0;
  auStack_140._8_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  auStack_140._64_8_ = (SimpleJSONFixed_JSONNode_o *)0x0;
  if (pSVar3 != (SimpleJSONFixed_JSONNode_o *)0x0) {
    SimpleJSONFixed_JSONNode__get_Keys
              ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&pIStack_188,pSVar3,(MethodInfo *)0x0);
    auStack_140._64_8_ = _Stack_148;
    auStack_140._48_8_ = pSStack_158;
    auStack_140._56_8_ = _Stack_150;
    auStack_140._32_8_ = pIStack_168;
    auStack_140._40_8_ = pIStack_160;
    auStack_140._16_8_ = pIStack_178;
    auStack_140._24_8_ = pIStack_170;
    auStack_140._0_8_ = pIStack_188;
    auStack_140._8_8_ = pSStack_180;
    __this.fields.m_Enumerator.fields.m_Object.fields._dictionary = pSVar9;
    __this.fields.m_Enumerator.fields._0_8_ = pIVar8;
    __this.fields.m_Enumerator.fields.m_Object.fields._8_8_ = pIVar10;
    __this.fields.m_Enumerator.fields.m_Object.fields._current.fields.key = pIVar11;
    __this.fields.m_Enumerator.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar12;
    __this.fields.m_Enumerator.fields.m_Object.fields._32_8_ = pIVar13;
    __this.fields.m_Enumerator.fields.m_Array.fields._list = pSVar14;
    __this.fields.m_Enumerator.fields.m_Array.fields._8_8_ = _Var15.rgctx_data;
    __this.fields.m_Enumerator.fields.m_Array.fields._current = _Var16.genericMethod;
    SimpleJSONFixed_JSONNode_KeyEnumerator__GetEnumerator
              ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&pIStack_188,__this,(MethodInfo *)auStack_140);
    __this_00.fields.m_Enumerator.fields.m_Object.fields._dictionary = pSStack_180;
    __this_00.fields.m_Enumerator.fields._0_8_ = pIStack_188;
    __this_00.fields.m_Enumerator.fields.m_Object.fields._8_8_ = pIStack_178;
    __this_00.fields.m_Enumerator.fields.m_Object.fields._current.fields.key = pIStack_170;
    __this_00.fields.m_Enumerator.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIStack_168;
    __this_00.fields.m_Enumerator.fields.m_Object.fields._32_8_ = pIStack_160;
    __this_00.fields.m_Enumerator.fields.m_Array.fields._list = pSStack_158;
    __this_00.fields.m_Enumerator.fields.m_Array.fields._8_8_ = _Stack_150.rgctx_data;
    __this_00.fields.m_Enumerator.fields.m_Array.fields._current = _Stack_148.genericMethod;
    bVar1 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext(__this_00,(MethodInfo *)&stack0xfffffffffffffe30)
    ;
    pSVar4 = (SimpleJSONFixed_JSONNode_o *)CONCAT44(extraout_var,bVar1);
    if ((char)bVar1 != '\0') {
      pIVar8 = pIStack_188;
      pSVar9 = pSStack_180;
      pIVar10 = pIStack_178;
      pIVar11 = pIStack_170;
      pIVar12 = pIStack_168;
      pIVar13 = pIStack_160;
      pSVar14 = pSStack_158;
      _Var15 = _Stack_150;
      _Var16 = _Stack_148;
      if (__this_06 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_0409ef21;
      do {
        __this_02.fields.m_Enumerator.fields.m_Object.fields._dictionary = pSVar9;
        __this_02.fields.m_Enumerator.fields._0_8_ = pIVar8;
        __this_02.fields.m_Enumerator.fields.m_Object.fields._8_8_ = pIVar10;
        __this_02.fields.m_Enumerator.fields.m_Object.fields._current.fields.key = pIVar11;
        __this_02.fields.m_Enumerator.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar12;
        __this_02.fields.m_Enumerator.fields.m_Object.fields._32_8_ = pIVar13;
        __this_02.fields.m_Enumerator.fields.m_Array.fields._list = pSVar14;
        __this_02.fields.m_Enumerator.fields.m_Array.fields._8_8_ = _Var15.rgctx_data;
        __this_02.fields.m_Enumerator.fields.m_Array.fields._current = _Var16.genericMethod;
        pSVar5 = SimpleJSONFixed_JSONNode_KeyEnumerator__get_Current
                           (__this_02,(MethodInfo *)&stack0xfffffffffffffe30);
        bVar1 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                          (__this_06,(Il2CppObject *)pSVar5,MethodInfo_Boolean_ContainsKey);
        pIVar6 = (Il2CppObject *)
                 (*(pSVar3->klass->vtable)._7_get_Item.methodPtr)
                           (pSVar3,pSVar5,(pSVar3->klass->vtable)._7_get_Item.method);
        if ((char)bVar1 == '\0') {
          System_Collections_Generic_Dictionary_object__object___Add
                    (__this_06,(Il2CppObject *)pSVar5,pIVar6,MethodInfo_Void_Add);
        }
        else {
          System_Collections_Generic_Dictionary_object__object___set_Item
                    (__this_06,(Il2CppObject *)pSVar5,pIVar6,_DAT_05589620);
        }
        __this_01.fields.m_Enumerator.fields.m_Object.fields._dictionary = pSVar9;
        __this_01.fields.m_Enumerator.fields._0_8_ = pIVar8;
        __this_01.fields.m_Enumerator.fields.m_Object.fields._8_8_ = pIVar10;
        __this_01.fields.m_Enumerator.fields.m_Object.fields._current.fields.key = pIVar11;
        __this_01.fields.m_Enumerator.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar12;
        __this_01.fields.m_Enumerator.fields.m_Object.fields._32_8_ = pIVar13;
        __this_01.fields.m_Enumerator.fields.m_Array.fields._list = pSVar14;
        __this_01.fields.m_Enumerator.fields.m_Array.fields._8_8_ = _Var15.rgctx_data;
        __this_01.fields.m_Enumerator.fields.m_Array.fields._current = _Var16.genericMethod;
        bVar1 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                          (__this_01,(MethodInfo *)&stack0xfffffffffffffe30);
        pSVar4 = (SimpleJSONFixed_JSONNode_o *)CONCAT44(extraout_var_00,bVar1);
      } while ((char)bVar1 != '\0');
    }
    return pSVar4;
  }
  il2cpp_runtime_helper_022b2c90();
label_0409ef21:
  __this_03.fields.m_Enumerator.fields.m_Object.fields._dictionary = pSVar9;
  __this_03.fields.m_Enumerator.fields._0_8_ = pIVar8;
  __this_03.fields.m_Enumerator.fields.m_Object.fields._8_8_ = pIVar10;
  __this_03.fields.m_Enumerator.fields.m_Object.fields._current.fields.key = pIVar11;
  __this_03.fields.m_Enumerator.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar12;
  __this_03.fields.m_Enumerator.fields.m_Object.fields._32_8_ = pIVar13;
  __this_03.fields.m_Enumerator.fields.m_Array.fields._list = pSVar14;
  __this_03.fields.m_Enumerator.fields.m_Array.fields._8_8_ = _Var15.rgctx_data;
  __this_03.fields.m_Enumerator.fields.m_Array.fields._current = _Var16.genericMethod;
  SimpleJSONFixed_JSONNode_KeyEnumerator__get_Current(__this_03,(MethodInfo *)&stack0xfffffffffffffe30);
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(pIVar6,(MethodInfo *)0x0);
  return extraout_RAX;
}


// Map.BuiltinLevels$$LoadSettings
// il2cpp: void Map_BuiltinLevels__LoadSettings (System_Collections_Generic_Dictionary_string__JSONNode__o* current, SimpleJSONFixed_JSONNode_o* node, const MethodInfo* method);
// 0x409ed20

void Map_BuiltinLevels__LoadSettings
               (System_Collections_Generic_Dictionary_string__JSONNode__o *current,
               SimpleJSONFixed_JSONNode_o *node,MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_00;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_01;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_02;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_03;
  bool_conflict bVar1;
  System_String_o *key;
  Il2CppObject *pIVar2;
  Il2CppClass *pIVar3;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar4;
  InvokerMethod pIVar5;
  Il2CppObject *pIVar6;
  Il2CppClass *pIVar7;
  Il2CppType *pIVar8;
  System_Collections_Generic_List_T__o *pSVar9;
  _union_13 _Var10;
  _union_14 _Var11;
  Il2CppClass *local_c0;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSStack_b8;
  InvokerMethod local_b0;
  Il2CppObject *pIStack_a8;
  Il2CppClass *local_a0;
  Il2CppType *pIStack_98;
  System_Collections_Generic_List_T__o *local_90;
  _union_13 _Stack_88;
  _union_14 local_80;
  Il2CppClass *local_78;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSStack_70;
  InvokerMethod local_68;
  Il2CppObject *pIStack_60;
  Il2CppClass *local_58;
  Il2CppType *pIStack_50;
  System_Collections_Generic_List_T__o *local_48;
  _union_13 _Stack_40;
  _union_14 local_38;
  
  pIVar2 = (Il2CppObject *)&stack0xfffffffffffffef8;
  if (g_data_057ac485 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    g_data_057ac485 = '\x01';
  }
  pSVar9 = (System_Collections_Generic_List_T__o *)0x0;
  _Var10.rgctx_data = (Il2CppRGCTXData *)0x0;
  pIVar7 = (Il2CppClass *)0x0;
  pIVar8 = (Il2CppType *)0x0;
  pIVar5 = (InvokerMethod)0x0;
  pIVar6 = (Il2CppObject *)0x0;
  pIVar3 = (Il2CppClass *)0x0;
  pSVar4 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  _Var11.genericMethod = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_48 = (System_Collections_Generic_List_T__o *)0x0;
  _Stack_40.rgctx_data = (Il2CppRGCTXData *)0x0;
  local_58 = (Il2CppClass *)0x0;
  pIStack_50 = (Il2CppType *)0x0;
  local_68 = (InvokerMethod)0x0;
  pIStack_60 = (Il2CppObject *)0x0;
  local_78 = (Il2CppClass *)0x0;
  pSStack_70 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_38.genericMethod = (SimpleJSONFixed_JSONNode_o *)0x0;
  if (node == (SimpleJSONFixed_JSONNode_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
label_0409ef21:
    __this_03.fields.m_Enumerator.fields.m_Object.fields._dictionary = pSVar4;
    __this_03.fields.m_Enumerator.fields._0_8_ = pIVar3;
    __this_03.fields.m_Enumerator.fields.m_Object.fields._8_8_ = pIVar5;
    __this_03.fields.m_Enumerator.fields.m_Object.fields._current.fields.key = pIVar6;
    __this_03.fields.m_Enumerator.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar7;
    __this_03.fields.m_Enumerator.fields.m_Object.fields._32_8_ = pIVar8;
    __this_03.fields.m_Enumerator.fields.m_Array.fields._list = pSVar9;
    __this_03.fields.m_Enumerator.fields.m_Array.fields._8_8_ = _Var10.rgctx_data;
    __this_03.fields.m_Enumerator.fields.m_Array.fields._current = _Var11.genericMethod;
    SimpleJSONFixed_JSONNode_KeyEnumerator__get_Current(__this_03,(MethodInfo *)&stack0xfffffffffffffef8);
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor(pIVar2,(MethodInfo *)0x0);
    return;
  }
  SimpleJSONFixed_JSONNode__get_Keys
            ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_c0,node,(MethodInfo *)0x0);
  local_38.genericMethod = local_80.genericMethod;
  local_48 = local_90;
  _Stack_40.methodMetadataHandle = _Stack_88.methodMetadataHandle;
  local_58 = local_a0;
  pIStack_50 = pIStack_98;
  local_68 = local_b0;
  pIStack_60 = pIStack_a8;
  local_78 = local_c0;
  pSStack_70 = pSStack_b8;
  __this.fields.m_Enumerator.fields.m_Object.fields._dictionary = pSVar4;
  __this.fields.m_Enumerator.fields._0_8_ = pIVar3;
  __this.fields.m_Enumerator.fields.m_Object.fields._8_8_ = pIVar5;
  __this.fields.m_Enumerator.fields.m_Object.fields._current.fields.key = pIVar6;
  __this.fields.m_Enumerator.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar7;
  __this.fields.m_Enumerator.fields.m_Object.fields._32_8_ = pIVar8;
  __this.fields.m_Enumerator.fields.m_Array.fields._list = pSVar9;
  __this.fields.m_Enumerator.fields.m_Array.fields._8_8_ = _Var10.rgctx_data;
  __this.fields.m_Enumerator.fields.m_Array.fields._current = _Var11.genericMethod;
  SimpleJSONFixed_JSONNode_KeyEnumerator__GetEnumerator
            ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_c0,__this,(MethodInfo *)&local_78);
  __this_00.fields.m_Enumerator.fields.m_Object.fields._dictionary = pSStack_b8;
  __this_00.fields.m_Enumerator.fields._0_8_ = local_c0;
  __this_00.fields.m_Enumerator.fields.m_Object.fields._8_8_ = local_b0;
  __this_00.fields.m_Enumerator.fields.m_Object.fields._current.fields.key = pIStack_a8;
  __this_00.fields.m_Enumerator.fields.m_Object.fields._current.fields.value = (Il2CppObject *)local_a0;
  __this_00.fields.m_Enumerator.fields.m_Object.fields._32_8_ = pIStack_98;
  __this_00.fields.m_Enumerator.fields.m_Array.fields._list = local_90;
  __this_00.fields.m_Enumerator.fields.m_Array.fields._8_8_ = _Stack_88.rgctx_data;
  __this_00.fields.m_Enumerator.fields.m_Array.fields._current = local_80.genericMethod;
  bVar1 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext(__this_00,(MethodInfo *)&stack0xfffffffffffffef8);
  if ((char)bVar1 != '\0') {
    pIVar3 = local_c0;
    pSVar4 = pSStack_b8;
    pIVar5 = local_b0;
    pIVar6 = pIStack_a8;
    pIVar7 = local_a0;
    pIVar8 = pIStack_98;
    pSVar9 = local_90;
    _Var10 = _Stack_88;
    _Var11 = local_80;
    if (current == (System_Collections_Generic_Dictionary_string__JSONNode__o *)0x0) goto label_0409ef21;
    do {
      __this_02.fields.m_Enumerator.fields.m_Object.fields._dictionary = pSVar4;
      __this_02.fields.m_Enumerator.fields._0_8_ = pIVar3;
      __this_02.fields.m_Enumerator.fields.m_Object.fields._8_8_ = pIVar5;
      __this_02.fields.m_Enumerator.fields.m_Object.fields._current.fields.key = pIVar6;
      __this_02.fields.m_Enumerator.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar7;
      __this_02.fields.m_Enumerator.fields.m_Object.fields._32_8_ = pIVar8;
      __this_02.fields.m_Enumerator.fields.m_Array.fields._list = pSVar9;
      __this_02.fields.m_Enumerator.fields.m_Array.fields._8_8_ = _Var10.rgctx_data;
      __this_02.fields.m_Enumerator.fields.m_Array.fields._current = _Var11.genericMethod;
      key = SimpleJSONFixed_JSONNode_KeyEnumerator__get_Current
                      (__this_02,(MethodInfo *)&stack0xfffffffffffffef8);
      bVar1 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                        ((System_Collections_Generic_Dictionary_object__object__o *)current,
                         (Il2CppObject *)key,MethodInfo_Boolean_ContainsKey);
      pIVar2 = (Il2CppObject *)
               (*(node->klass->vtable)._7_get_Item.methodPtr)
                         (node,key,(node->klass->vtable)._7_get_Item.method);
      if ((char)bVar1 == '\0') {
        System_Collections_Generic_Dictionary_object__object___Add
                  ((System_Collections_Generic_Dictionary_object__object__o *)current,(Il2CppObject *)key,
                   pIVar2,MethodInfo_Void_Add);
      }
      else {
        System_Collections_Generic_Dictionary_object__object___set_Item
                  ((System_Collections_Generic_Dictionary_object__object__o *)current,(Il2CppObject *)key,
                   pIVar2,_DAT_05589620);
      }
      __this_01.fields.m_Enumerator.fields.m_Object.fields._dictionary = pSVar4;
      __this_01.fields.m_Enumerator.fields._0_8_ = pIVar3;
      __this_01.fields.m_Enumerator.fields.m_Object.fields._8_8_ = pIVar5;
      __this_01.fields.m_Enumerator.fields.m_Object.fields._current.fields.key = pIVar6;
      __this_01.fields.m_Enumerator.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar7;
      __this_01.fields.m_Enumerator.fields.m_Object.fields._32_8_ = pIVar8;
      __this_01.fields.m_Enumerator.fields.m_Array.fields._list = pSVar9;
      __this_01.fields.m_Enumerator.fields.m_Array.fields._8_8_ = _Var10.rgctx_data;
      __this_01.fields.m_Enumerator.fields.m_Array.fields._current = _Var11.genericMethod;
      bVar1 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                        (__this_01,(MethodInfo *)&stack0xfffffffffffffef8);
    } while ((char)bVar1 != '\0');
  }
  return;
}


// Map.BuiltinLevels$$.ctor
// il2cpp: void Map_BuiltinLevels___ctor (Map_BuiltinLevels_o* __this, const MethodInfo* method);
// 0x409ef30

void Map_BuiltinLevels___ctor(Map_BuiltinLevels_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Map.BuiltinLevels$$.cctor
// il2cpp: void Map_BuiltinLevels___cctor (const MethodInfo* method);
// 0x409ef40

void Map_BuiltinLevels___cctor(MethodInfo *method)

{
  long lVar1;
  
  if (g_data_057ac486 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinLevels);
    il2cpp_runtime_helper_023445d0(&TypeInfo_FolderPaths);
    il2cpp_runtime_helper_023445d0(&"Map Logic");
    g_data_057ac486 = '\x01';
  }
  if (*(int *)(TypeInfo_FolderPaths + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar1 = *(long *)(TypeInfo_BuiltinLevels + 0xb8);
  *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x60);
  il2cpp_runtime_helper_022b4080(lVar1 + 8);
  lVar1 = *(long *)(TypeInfo_BuiltinLevels + 0xb8);
  *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x68);
  il2cpp_runtime_helper_022b4080(lVar1 + 0x10);
  lVar1 = *(long *)(TypeInfo_BuiltinLevels + 0xb8);
  *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x50);
  il2cpp_runtime_helper_022b4080(lVar1 + 0x18);
  lVar1 = *(long *)(TypeInfo_BuiltinLevels + 0xb8);
  *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x58);
  il2cpp_runtime_helper_022b4080(lVar1 + 0x20);
  lVar1 = *(long *)(TypeInfo_BuiltinLevels + 0xb8);
  *(undefined8 *)(lVar1 + 0x28) = "Map Logic";
  il2cpp_runtime_helper_022b4080(lVar1 + 0x28);
  return;
}


