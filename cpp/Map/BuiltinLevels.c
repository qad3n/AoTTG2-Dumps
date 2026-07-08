// Type: Map.BuiltinLevels
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Map/BuiltinLevels.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Map/BuiltinLevels.cs  [CHANGED since prior version]
// --------------------------------

// Map.BuiltinLevels.<>c$$.cctor
// il2cpp: void Map_BuiltinLevels___c___cctor (const MethodInfo* method);
// 0x3d99150

void Map_BuiltinLevels_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_05702752 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702752 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// Map.BuiltinLevels.<>c$$.ctor
// il2cpp: void Map_BuiltinLevels___c___ctor (Map_BuiltinLevels___c_o* __this, const MethodInfo* method);
// 0x3d991c0

void Map_BuiltinLevels_<>c___ctor(Map_BuiltinLevels___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Map.BuiltinLevels.<>c$$<GetTxtFiles>b__29_0
// il2cpp: System_String_o* Map_BuiltinLevels___c___GetTxtFiles_b__29_0 (Map_BuiltinLevels___c_o* __this, System_String_o* f, const MethodInfo* method);
// 0x3d991d0

System_String_o *
Map_BuiltinLevels_<>c__<GetTxtFiles>b__29_0
          (Map_BuiltinLevels___c_o *__this,System_String_o *f,MethodInfo *method)

{
  int iVar1;
  System_String_o *pSVar2;
  
  if (DAT_05702753 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Path);
    DAT_05702753 = '\x01';
    iVar1 = *(int *)(TypeInfo_Path + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Path + 0xe4);
  }
  if (iVar1 != 0) {
    pSVar2 = System_IO_Path__GetFileName(f,(MethodInfo *)0x0);
    return pSVar2;
  }
  il2cpp_init_class();
  pSVar2 = System_IO_Path__GetFileName(f,(MethodInfo *)0x0);
  return pSVar2;
}


// Map.BuiltinLevels.<>c$$<GetClFiles>b__30_0
// il2cpp: System_String_o* Map_BuiltinLevels___c___GetClFiles_b__30_0 (Map_BuiltinLevels___c_o* __this, System_String_o* f, const MethodInfo* method);
// 0x3d99240

System_String_o *
Map_BuiltinLevels_<>c__<GetClFiles>b__30_0
          (Map_BuiltinLevels___c_o *__this,System_String_o *f,MethodInfo *method)

{
  int iVar1;
  System_String_o *pSVar2;
  
  if (DAT_05702754 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Path);
    DAT_05702754 = '\x01';
    iVar1 = *(int *)(TypeInfo_Path + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Path + 0xe4);
  }
  if (iVar1 != 0) {
    pSVar2 = System_IO_Path__GetFileName(f,(MethodInfo *)0x0);
    return pSVar2;
  }
  il2cpp_init_class();
  pSVar2 = System_IO_Path__GetFileName(f,(MethodInfo *)0x0);
  return pSVar2;
}


// Map.BuiltinLevels.<>c$$<GetAddonFiles>b__31_0
// il2cpp: System_String_o* Map_BuiltinLevels___c___GetAddonFiles_b__31_0 (Map_BuiltinLevels___c_o* __this, System_String_o* f, const MethodInfo* method);
// 0x3d992b0

System_String_o *
Map_BuiltinLevels_<>c__<GetAddonFiles>b__31_0
          (Map_BuiltinLevels___c_o *__this,System_String_o *f,MethodInfo *method)

{
  int iVar1;
  System_String_o *pSVar2;
  
  if (DAT_05702755 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Path);
    DAT_05702755 = '\x01';
    iVar1 = *(int *)(TypeInfo_Path + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Path + 0xe4);
  }
  if (iVar1 != 0) {
    pSVar2 = System_IO_Path__GetFileName(f,(MethodInfo *)0x0);
    return pSVar2;
  }
  il2cpp_init_class();
  pSVar2 = System_IO_Path__GetFileName(f,(MethodInfo *)0x0);
  return pSVar2;
}


// Map.BuiltinLevels$$Init
// il2cpp: void Map_BuiltinLevels__Init (const MethodInfo* method);
// 0x424b760

void Map_BuiltinLevels__Init(MethodInfo *method)

{
  byte bVar1;
  UnityEngine_Object_o *__this;
  System_String_o *pSVar2;
  SimpleJSONFixed_JSONNode_o *pSVar3;
  
  if (DAT_05705202 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinLevels);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    il2cpp_init_method_metadata(&TypeInfo_ResourcePaths);
    il2cpp_init_method_metadata(&TypeInfo_TextAsset);
    il2cpp_init_method_metadata(&"BuiltinMapInfo");
    DAT_05705202 = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
    il2cpp_init_class();
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
    il2cpp_init_class();
  }
  pSVar2 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 0x18);
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this = ApplicationManagers_ResourceManager__LoadAsset(pSVar2,"BuiltinMapInfo",0,(MethodInfo *)0x0);
  if (__this != (UnityEngine_Object_o *)0x0) {
    bVar1 = (TypeInfo_TextAsset->_2).naturalAligment;
    if ((bVar1 <= (__this->klass->_2).naturalAligment) &&
       ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_TextAsset)) {
      pSVar2 = UnityEngine_TextAsset__get_text((UnityEngine_TextAsset_o *)__this,(MethodInfo *)0x0);
      pSVar3 = SimpleJSONFixed_JSON__Parse(pSVar2,(MethodInfo *)0x0);
      **(undefined8 **)(TypeInfo_BuiltinLevels + 0xb8) = pSVar3;
      il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_BuiltinLevels + 0xb8),pSVar3);
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume(__this);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Map.BuiltinLevels$$LoadMap
// il2cpp: System_String_o* Map_BuiltinLevels__LoadMap (System_String_o* category, System_String_o* name, const MethodInfo* method);
// 0x424b8f0

System_String_o *
Map_BuiltinLevels__LoadMap(System_String_o *category,System_String_o *name,MethodInfo *method)

{
  MethodInfo *method_00;
  char cVar1;
  bool_conflict bVar2;
  System_String_o *pSVar3;
  SimpleJSONFixed_JSONNode_o *pSVar4;
  System_String_o *name_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  
  if (DAT_05705203 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinLevels);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    il2cpp_init_method_metadata(&TypeInfo_ResourcePaths);
    il2cpp_init_method_metadata(&"Custom");
    il2cpp_init_method_metadata(&".txt");
    il2cpp_init_method_metadata(&"/");
    il2cpp_init_method_metadata(&"Category");
    il2cpp_init_method_metadata(&"Map");
    DAT_05705203 = '\x01';
  }
  bVar2 = System_String__op_Equality(category,"Custom",(MethodInfo *)0x0);
  method_00 = extraout_RDX;
  if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
    il2cpp_init_class();
    method_00 = extraout_RDX_00;
  }
  if ((char)bVar2 == '\0') {
    pSVar4 = Map_BuiltinLevels__GetMap(category,name,method_00);
    if (pSVar4 != (SimpleJSONFixed_JSONNode_o *)0x0) {
      cVar1 = (*(pSVar4->klass->vtable)._28_HasKey.methodPtr)
                        (pSVar4,"Category",(pSVar4->klass->vtable)._28_HasKey.method);
      if (cVar1 != '\0') {
        pSVar4 = (SimpleJSONFixed_JSONNode_o *)
                 (*(pSVar4->klass->vtable)._7_get_Item.methodPtr)
                           (pSVar4,"Category",(pSVar4->klass->vtable)._7_get_Item.method);
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          il2cpp_init_class();
        }
        category = SimpleJSONFixed_JSONNode__op_Implicit(pSVar4,(MethodInfo *)0x0);
      }
      if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar3 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 0x20);
      name_00 = System_String__Concat(category,"/",name,"Map",(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar3 = ApplicationManagers_ResourceManager__TryLoadText(pSVar3,name_00,(MethodInfo *)0x0);
      return pSVar3;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pSVar3 = System_String__Concat
                     (*(System_String_o **)(*(long *)(TypeInfo_BuiltinLevels + 0xb8) + 8),"/",name,
                      ".txt",(MethodInfo *)0x0);
  bVar2 = System_IO_File__Exists(pSVar3,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pSVar3 = System_IO_File__ReadAllText(pSVar3,(MethodInfo *)0x0);
    return pSVar3;
  }
  return (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
}


// Map.BuiltinLevels$$LoadAutosave
// il2cpp: System_String_o* Map_BuiltinLevels__LoadAutosave (System_String_o* name, const MethodInfo* method);
// 0x424be60

System_String_o * Map_BuiltinLevels__LoadAutosave(System_String_o *name,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  
  if (DAT_05705204 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinLevels);
    il2cpp_init_method_metadata(&".txt");
    il2cpp_init_method_metadata(&"/");
    DAT_05705204 = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar2 = System_String__Concat
                     (*(System_String_o **)(*(long *)(TypeInfo_BuiltinLevels + 0xb8) + 0x10),"/",name
                      ,".txt",(MethodInfo *)0x0);
  bVar1 = System_IO_File__Exists(pSVar2,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    pSVar2 = System_IO_File__ReadAllText(pSVar2,(MethodInfo *)0x0);
    return pSVar2;
  }
  return (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
}


// Map.BuiltinLevels$$LoadLogic
// il2cpp: System_String_o* Map_BuiltinLevels__LoadLogic (System_String_o* name, const MethodInfo* method);
// 0x424bf30

System_String_o * Map_BuiltinLevels__LoadLogic(System_String_o *name,MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_Enumerator_o __this;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_00;
  bool_conflict bVar1;
  long *plVar2;
  SimpleJSONFixed_JSONNode_o *pSVar3;
  System_String_o *name_00;
  System_String_o *pSVar4;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o aKeyValue;
  Il2CppMethodPointer pIVar5;
  Il2CppMethodPointer pIVar6;
  InvokerMethod pIVar7;
  char *pcVar8;
  Il2CppClass *pIVar9;
  Il2CppType *pIVar10;
  Il2CppType **ppIVar11;
  _union_13 _Var12;
  _union_14 _Var13;
  Il2CppMethodPointer local_78;
  Il2CppMethodPointer pIStack_70;
  InvokerMethod local_68;
  char *pcStack_60;
  Il2CppClass *local_58;
  Il2CppType *pIStack_50;
  Il2CppType **local_48;
  _union_13 _Stack_40;
  _union_14 local_38;
  
  if (DAT_05705205 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinLevels);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    il2cpp_init_method_metadata(&TypeInfo_ResourcePaths);
    il2cpp_init_method_metadata(&"Name");
    il2cpp_init_method_metadata(&".txt");
    il2cpp_init_method_metadata(&"/");
    il2cpp_init_method_metadata(&".cl");
    il2cpp_init_method_metadata(&"Logic");
    il2cpp_init_method_metadata(&"");
    il2cpp_init_method_metadata(&"GameModes");
    DAT_05705205 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar1 = System_String__op_Equality
                      (name,*(System_String_o **)(*(long *)(TypeInfo_BuiltinLevels + 0xb8) + 0x28),
                       (MethodInfo *)0x0);
    if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
      il2cpp_init_class();
      plVar2 = *(long **)(TypeInfo_BuiltinLevels + 0xb8);
    }
    else {
      plVar2 = *(long **)(TypeInfo_BuiltinLevels + 0xb8);
    }
    if ((char)bVar1 == '\0') {
      plVar2 = (long *)*plVar2;
      if ((plVar2 == (long *)0x0) ||
         (plVar2 = (long *)(**(code **)(*plVar2 + 0x1a8))
                                     (plVar2,"GameModes",*(undefined8 *)(*plVar2 + 0x1b0)),
         plVar2 == (long *)0x0)) {
LAB_0424c2cb:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      (**(code **)(*plVar2 + 0x338))(&local_78,plVar2,*(undefined8 *)(*plVar2 + 0x340));
      pIVar5 = local_78;
      pIVar6 = pIStack_70;
      pIVar7 = local_68;
      pcVar8 = pcStack_60;
      pIVar9 = local_58;
      pIVar10 = pIStack_50;
      ppIVar11 = local_48;
      _Var12 = _Stack_40;
      _Var13 = local_38;
      do {
        __this.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar6;
        __this.fields._0_8_ = pIVar5;
        __this.fields.m_Object.fields._8_8_ = pIVar7;
        __this.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar8;
        __this.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar9;
        __this.fields.m_Object.fields._32_8_ = pIVar10;
        __this.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar11;
        __this.fields.m_Array.fields._8_8_ = _Var12.rgctx_data;
        __this.fields.m_Array.fields._current = _Var13.genericMethod;
        bVar1 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                          (__this,(MethodInfo *)&stack0xffffffffffffff38);
        if ((char)bVar1 == '\0') {
          if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar4 = System_String__Concat
                             (*(System_String_o **)(*(long *)(TypeInfo_BuiltinLevels + 0xb8) + 0x18),
                              "/",name,".cl",(MethodInfo *)0x0);
          bVar1 = System_IO_File__Exists(pSVar4,(MethodInfo *)0x0);
          if ((char)bVar1 == '\0') {
            if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar4 = System_String__Concat
                               (*(System_String_o **)(*(long *)(TypeInfo_BuiltinLevels + 0xb8) + 0x18),
                                "/",name,".txt",(MethodInfo *)0x0);
            bVar1 = System_IO_File__Exists(pSVar4,(MethodInfo *)0x0);
            if ((char)bVar1 == '\0') goto LAB_0424c013;
          }
          pSVar4 = System_IO_File__ReadAllText(pSVar4,(MethodInfo *)0x0);
          return pSVar4;
        }
        __this_00.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar6;
        __this_00.fields._0_8_ = pIVar5;
        __this_00.fields.m_Object.fields._8_8_ = pIVar7;
        __this_00.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar8;
        __this_00.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar9;
        __this_00.fields.m_Object.fields._32_8_ = pIVar10;
        __this_00.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar11;
        __this_00.fields.m_Array.fields._8_8_ = _Var12.rgctx_data;
        __this_00.fields.m_Array.fields._current = _Var13.genericMethod;
        aKeyValue = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                              (__this_00,(MethodInfo *)&stack0xffffffffffffff38);
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar3 = SimpleJSONFixed_JSONNode__op_Implicit(aKeyValue,(MethodInfo *)0x0);
        if (pSVar3 == (SimpleJSONFixed_JSONNode_o *)0x0) goto LAB_0424c2cb;
        pSVar3 = (SimpleJSONFixed_JSONNode_o *)
                 (*(pSVar3->klass->vtable)._7_get_Item.methodPtr)
                           (pSVar3,"Name",(pSVar3->klass->vtable)._7_get_Item.method);
        bVar1 = SimpleJSONFixed_JSONNode__op_Equality(pSVar3,(Il2CppObject *)name,(MethodInfo *)0x0)
        ;
      } while ((char)bVar1 == '\0');
      if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar4 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 0x28);
      name_00 = System_String__Concat(name,"Logic",(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar4 = ApplicationManagers_ResourceManager__TryLoadText(pSVar4,name_00,(MethodInfo *)0x0);
    }
    else {
      pSVar4 = (System_String_o *)plVar2[5];
    }
  }
  else {
LAB_0424c013:
    pSVar4 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  return pSVar4;
}


// Map.BuiltinLevels$$IsLogicBuiltin
// il2cpp: bool Map_BuiltinLevels__IsLogicBuiltin (System_String_o* name, const MethodInfo* method);
// 0x424c2d0

bool_conflict Map_BuiltinLevels__IsLogicBuiltin(System_String_o *name,MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_Enumerator_o __this;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_00;
  bool_conflict bVar1;
  long *plVar2;
  SimpleJSONFixed_JSONNode_o *pSVar3;
  undefined8 in_RCX;
  SimpleJSONFixed_JSONNode_c *pSVar4;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o aKeyValue;
  Il2CppMethodPointer pIVar5;
  Il2CppMethodPointer pIVar6;
  InvokerMethod pIVar7;
  char *pcVar8;
  Il2CppClass *pIVar9;
  Il2CppType *pIVar10;
  Il2CppType **ppIVar11;
  _union_13 _Var12;
  _union_14 _Var13;
  Il2CppMethodPointer local_78;
  Il2CppMethodPointer pIStack_70;
  InvokerMethod local_68;
  char *pcStack_60;
  Il2CppClass *local_58;
  Il2CppType *pIStack_50;
  Il2CppType **local_48;
  _union_13 _Stack_40;
  _union_14 local_38;
  
  if (DAT_05705206 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinLevels);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&"Name");
    il2cpp_init_method_metadata(&"GameModes");
    DAT_05705206 = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = System_String__op_Equality
                    (name,*(System_String_o **)(*(long *)(TypeInfo_BuiltinLevels + 0xb8) + 0x28),
                     (MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return (bool_conflict)CONCAT71((int7)((ulong)in_RCX >> 8),1);
  }
  if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
    il2cpp_init_class();
  }
  plVar2 = (long *)**(long **)(TypeInfo_BuiltinLevels + 0xb8);
  if ((plVar2 != (long *)0x0) &&
     (plVar2 = (long *)(**(code **)(*plVar2 + 0x1a8))
                                 (plVar2,"GameModes",*(undefined8 *)(*plVar2 + 0x1b0)),
     plVar2 != (long *)0x0)) {
    (**(code **)(*plVar2 + 0x338))(&local_78,plVar2,*(undefined8 *)(*plVar2 + 0x340));
    pIVar5 = local_78;
    pIVar6 = pIStack_70;
    pIVar7 = local_68;
    pcVar8 = pcStack_60;
    pIVar9 = local_58;
    pIVar10 = pIStack_50;
    ppIVar11 = local_48;
    _Var12 = _Stack_40;
    _Var13 = local_38;
    while( true ) {
      __this.fields.m_Object.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar6;
      __this.fields._0_8_ = pIVar5;
      __this.fields.m_Object.fields._8_8_ = pIVar7;
      __this.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar8;
      __this.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar9;
      __this.fields.m_Object.fields._32_8_ = pIVar10;
      __this.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar11;
      __this.fields.m_Array.fields._8_8_ = _Var12.rgctx_data;
      __this.fields.m_Array.fields._current = _Var13.genericMethod;
      bVar1 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                        (__this,(MethodInfo *)&stack0xffffffffffffff38);
      if ((char)bVar1 == '\0') {
        return 0;
      }
      __this_00.fields.m_Object.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar6;
      __this_00.fields._0_8_ = pIVar5;
      __this_00.fields.m_Object.fields._8_8_ = pIVar7;
      __this_00.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar8;
      __this_00.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar9;
      __this_00.fields.m_Object.fields._32_8_ = pIVar10;
      __this_00.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar11;
      __this_00.fields.m_Array.fields._8_8_ = _Var12.rgctx_data;
      __this_00.fields.m_Array.fields._current = _Var13.genericMethod;
      aKeyValue = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                            (__this_00,(MethodInfo *)&stack0xffffffffffffff38);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar3 = SimpleJSONFixed_JSONNode__op_Implicit(aKeyValue,(MethodInfo *)0x0);
      if (pSVar3 == (SimpleJSONFixed_JSONNode_o *)0x0) break;
      pSVar4 = pSVar3->klass;
      pSVar3 = (SimpleJSONFixed_JSONNode_o *)
               (*(pSVar4->vtable)._7_get_Item.methodPtr)
                         (pSVar3,"Name",(pSVar4->vtable)._7_get_Item.method);
      bVar1 = SimpleJSONFixed_JSONNode__op_Equality(pSVar3,(Il2CppObject *)name,(MethodInfo *)0x0);
      if ((char)bVar1 != '\0') {
        return (bool_conflict)CONCAT71((int7)((ulong)pSVar4 >> 8),1);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Map.BuiltinLevels$$GetMapCategories
// il2cpp: System_String_array* Map_BuiltinLevels__GetMapCategories (const MethodInfo* method);
// 0x424c4c0

System_String_array * Map_BuiltinLevels__GetMapCategories(MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  SimpleJSONFixed_JSONNode_Enumerator_o __this;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_00;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_01;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_02;
  long lVar4;
  Il2CppObject *item;
  bool_conflict bVar5;
  System_Collections_Generic_List_object__o *__this_03;
  long *plVar6;
  SimpleJSONFixed_JSONNode_o *pSVar7;
  System_String_o *item_00;
  System_String_array *pSVar8;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o SVar9;
  Il2CppMethodPointer pIVar10;
  Il2CppMethodPointer pIVar11;
  InvokerMethod pIVar12;
  char *pcVar13;
  Il2CppClass *pIVar14;
  Il2CppType *pIVar15;
  Il2CppType **ppIVar16;
  _union_13 _Var17;
  _union_14 _Var18;
  Il2CppMethodPointer local_78;
  Il2CppMethodPointer pIStack_70;
  InvokerMethod local_68;
  char *pcStack_60;
  Il2CppClass *local_58;
  Il2CppType *pIStack_50;
  Il2CppType **local_48;
  _union_13 _Stack_40;
  _union_14 local_38;
  
  if (DAT_05705207 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinLevels);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_String___ToArray);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&"MapCategories");
    il2cpp_init_method_metadata(&"Custom");
    il2cpp_init_method_metadata(&"Name");
    DAT_05705207 = '\x01';
  }
  __this_03 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_string);
  System_Collections_Generic_List<object>___ctor(__this_03,MethodInfo_List_1_System_String);
  if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
    il2cpp_init_class();
  }
  plVar6 = (long *)**(long **)(TypeInfo_BuiltinLevels + 0xb8);
  if ((plVar6 != (long *)0x0) &&
     (plVar6 = (long *)(**(code **)(*plVar6 + 0x1a8))
                                 (plVar6,"MapCategories",*(undefined8 *)(*plVar6 + 0x1b0)),
     plVar6 != (long *)0x0)) {
    (**(code **)(*plVar6 + 0x338))(&local_78,plVar6,*(undefined8 *)(*plVar6 + 0x340));
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
    bVar5 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                      (__this,(MethodInfo *)&stack0xffffffffffffff38);
    if ((char)bVar5 == '\0') {
      if (__this_03 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_0424c7f7;
    }
    else {
      pIVar10 = local_78;
      pIVar11 = pIStack_70;
      pIVar12 = local_68;
      pcVar13 = pcStack_60;
      pIVar14 = local_58;
      pIVar15 = pIStack_50;
      ppIVar16 = local_48;
      _Var17 = _Stack_40;
      _Var18 = local_38;
      if (__this_03 == (System_Collections_Generic_List_object__o *)0x0) {
        __this_02.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIStack_70;
        __this_02.fields._0_8_ = local_78;
        __this_02.fields.m_Object.fields._8_8_ = local_68;
        __this_02.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcStack_60;
        __this_02.fields.m_Object.fields._current.fields.value = (Il2CppObject *)local_58;
        __this_02.fields.m_Object.fields._32_8_ = pIStack_50;
        __this_02.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)local_48;
        __this_02.fields.m_Array.fields._8_8_ = _Stack_40.rgctx_data;
        __this_02.fields.m_Array.fields._current = local_38.genericMethod;
        SVar9 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                          (__this_02,(MethodInfo *)&stack0xffffffffffffff38);
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit(SVar9,(MethodInfo *)0x0);
        if (pSVar7 != (SimpleJSONFixed_JSONNode_o *)0x0) {
          pSVar7 = (SimpleJSONFixed_JSONNode_o *)
                   (*(pSVar7->klass->vtable)._7_get_Item.methodPtr)
                             (pSVar7,"Name",(pSVar7->klass->vtable)._7_get_Item.method);
          SimpleJSONFixed_JSONNode__op_Implicit(pSVar7,(MethodInfo *)0x0);
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        goto LAB_0424c7f7;
      }
      do {
        __this_01.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar11;
        __this_01.fields._0_8_ = pIVar10;
        __this_01.fields.m_Object.fields._8_8_ = pIVar12;
        __this_01.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar13;
        __this_01.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar14;
        __this_01.fields.m_Object.fields._32_8_ = pIVar15;
        __this_01.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar16;
        __this_01.fields.m_Array.fields._8_8_ = _Var17.rgctx_data;
        __this_01.fields.m_Array.fields._current = _Var18.genericMethod;
        SVar9 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                          (__this_01,(MethodInfo *)&stack0xffffffffffffff38);
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit(SVar9,(MethodInfo *)0x0);
        if (pSVar7 == (SimpleJSONFixed_JSONNode_o *)0x0) goto LAB_0424c7f7;
        pSVar7 = (SimpleJSONFixed_JSONNode_o *)
                 (*(pSVar7->klass->vtable)._7_get_Item.methodPtr)
                           (pSVar7,"Name",(pSVar7->klass->vtable)._7_get_Item.method);
        item_00 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar7,(MethodInfo *)0x0);
        lVar4 = MethodInfo_Void_Add;
        piVar1 = &(__this_03->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar3 = (__this_03->fields)._items;
        if (pSVar3 == (System_Object_array *)0x0) goto LAB_0424c7f7;
        uVar2 = (__this_03->fields)._size;
        if (uVar2 < (uint)pSVar3->max_length) {
          (__this_03->fields)._size = uVar2 + 1;
          pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)item_00;
          il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar2,item_00);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    (__this_03,(Il2CppObject *)item_00,
                     *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
        }
        __this_00.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar11;
        __this_00.fields._0_8_ = pIVar10;
        __this_00.fields.m_Object.fields._8_8_ = pIVar12;
        __this_00.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar13;
        __this_00.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar14;
        __this_00.fields.m_Object.fields._32_8_ = pIVar15;
        __this_00.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar16;
        __this_00.fields.m_Array.fields._8_8_ = _Var17.rgctx_data;
        __this_00.fields.m_Array.fields._current = _Var18.genericMethod;
        bVar5 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                          (__this_00,(MethodInfo *)&stack0xffffffffffffff38);
      } while ((char)bVar5 != '\0');
    }
    item = "Custom";
    lVar4 = MethodInfo_Void_Add;
    piVar1 = &(__this_03->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (__this_03->fields)._items;
    if (pSVar3 != (System_Object_array *)0x0) {
      uVar2 = (__this_03->fields)._size;
      if (uVar2 < (uint)pSVar3->max_length) {
        (__this_03->fields)._size = uVar2 + 1;
        pSVar3->m_Items[(int)uVar2] = item;
        il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar2);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  (__this_03,item,
                   *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
      }
      pSVar8 = (System_String_array *)
               System_Collections_Generic_List<object>__ToArray(__this_03,MethodInfo_String___ToArray);
      return pSVar8;
    }
  }
LAB_0424c7f7:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Map.BuiltinLevels$$GetMapNames
// il2cpp: System_String_array* Map_BuiltinLevels__GetMapNames (System_String_o* category, const MethodInfo* method);
// 0x424c830

System_String_array * Map_BuiltinLevels__GetMapNames(System_String_o *category,MethodInfo *method)

{
  int32_t *piVar1;
  System_Object_array *pSVar2;
  SimpleJSONFixed_JSONNode_Enumerator_o __this;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_00;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_01;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_02;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_03;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_04;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_05;
  long lVar3;
  bool_conflict bVar4;
  uint uVar5;
  System_String_array *pSVar6;
  System_String_o *pSVar7;
  System_Collections_Generic_List_object__o *__this_06;
  long *plVar8;
  SimpleJSONFixed_JSONNode_o *pSVar9;
  SimpleJSONFixed_JSONNode_o *a;
  SimpleJSONFixed_JSONNode_o *pSVar10;
  uint uVar11;
  MethodInfo *method_00;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o SVar12;
  undefined8 in_stack_fffffffffffffed8;
  Il2CppMethodPointer pIVar13;
  Il2CppMethodPointer pIVar14;
  InvokerMethod pIVar15;
  char *pcVar16;
  Il2CppClass *pIVar17;
  Il2CppType *pIVar18;
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
  
  if (DAT_05705208 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinLevels);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_String___ToArray);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&"MapCategories");
    il2cpp_init_method_metadata(&"Maps");
    il2cpp_init_method_metadata(&"Custom");
    il2cpp_init_method_metadata(&"Name");
    il2cpp_init_method_metadata(&".txt");
    il2cpp_init_method_metadata(&"");
    DAT_05705208 = '\x01';
  }
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
    __this_06 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_string);
    System_Collections_Generic_List<object>___ctor(__this_06,MethodInfo_List_1_System_String);
    if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
      il2cpp_init_class();
    }
    plVar8 = (long *)**(long **)(TypeInfo_BuiltinLevels + 0xb8);
    if ((plVar8 != (long *)0x0) &&
       (plVar8 = (long *)(**(code **)(*plVar8 + 0x1a8))
                                   (plVar8,"MapCategories",*(undefined8 *)(*plVar8 + 0x1b0)),
       plVar8 != (long *)0x0)) {
      (**(code **)(*plVar8 + 0x338))(&local_78,plVar8,*(undefined8 *)(*plVar8 + 0x340));
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
      pIVar13 = local_78;
      pIVar14 = pIStack_70;
      pIVar15 = local_68;
      pcVar16 = pcStack_60;
      pIVar17 = local_58;
      pIVar18 = pIStack_50;
      pSVar10 = local_48;
      bVar4 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                        (__this,(MethodInfo *)&stack0xfffffffffffffee8);
      if ((char)bVar4 != '\0') {
        do {
          __this_01.fields.m_Object.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)category;
          __this_01.fields._0_8_ = in_stack_fffffffffffffed8;
          __this_01.fields.m_Object.fields._8_8_ = pIVar13;
          __this_01.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIVar14;
          __this_01.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar15;
          __this_01.fields.m_Object.fields._32_8_ = pcVar16;
          __this_01.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pIVar17;
          __this_01.fields.m_Array.fields._8_8_ = pIVar18;
          __this_01.fields.m_Array.fields._current = pSVar10;
          SVar12 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                             (__this_01,(MethodInfo *)&stack0xfffffffffffffee8);
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar9 = SimpleJSONFixed_JSONNode__op_Implicit(SVar12,(MethodInfo *)0x0);
          if (pSVar9 == (SimpleJSONFixed_JSONNode_o *)0x0) goto LAB_0424cd67;
          a = (SimpleJSONFixed_JSONNode_o *)
              (*(pSVar9->klass->vtable)._7_get_Item.methodPtr)
                        (pSVar9,"Name",(pSVar9->klass->vtable)._7_get_Item.method);
          bVar4 = SimpleJSONFixed_JSONNode__op_Equality
                            (a,(Il2CppObject *)category,(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            plVar8 = (long *)(*(pSVar9->klass->vtable)._7_get_Item.methodPtr)
                                       (pSVar9,"Maps",
                                        (pSVar9->klass->vtable)._7_get_Item.method);
            if (plVar8 == (long *)0x0) goto LAB_0424cd67;
            (**(code **)(*plVar8 + 0x338))(&local_78,plVar8,*(undefined8 *)(*plVar8 + 0x340));
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
            __this_02.fields.m_Object.fields._8_8_ = pIVar13;
            __this_02.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIVar14;
            __this_02.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar15;
            __this_02.fields.m_Object.fields._32_8_ = pcVar16;
            __this_02.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pIVar17;
            __this_02.fields.m_Array.fields._8_8_ = pIVar18;
            __this_02.fields.m_Array.fields._current = pSVar10;
            bVar4 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext(__this_02,(MethodInfo *)local_c8);
            if ((char)bVar4 != '\0') {
              if (__this_06 == (System_Collections_Generic_List_object__o *)0x0) {
                __this_05.fields.m_Object.fields._dictionary =
                     (System_Collections_Generic_Dictionary_TKey__TValue__o *)category;
                __this_05.fields._0_8_ = in_stack_fffffffffffffed8;
                __this_05.fields.m_Object.fields._8_8_ = pIVar13;
                __this_05.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIVar14;
                __this_05.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar15;
                __this_05.fields.m_Object.fields._32_8_ = pcVar16;
                __this_05.fields.m_Array.fields._list =
                     (System_Collections_Generic_List_T__o *)pIVar17;
                __this_05.fields.m_Array.fields._8_8_ = pIVar18;
                __this_05.fields.m_Array.fields._current = pSVar10;
                SVar12 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                                   (__this_05,(MethodInfo *)local_c8);
                if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                pSVar10 = SimpleJSONFixed_JSONNode__op_Implicit(SVar12,(MethodInfo *)0x0);
                if (pSVar10 != (SimpleJSONFixed_JSONNode_o *)0x0) {
                  pSVar10 = (SimpleJSONFixed_JSONNode_o *)
                            (*(pSVar10->klass->vtable)._7_get_Item.methodPtr)
                                      (pSVar10,"Name",
                                       (pSVar10->klass->vtable)._7_get_Item.method);
                  SimpleJSONFixed_JSONNode__op_Implicit(pSVar10,(MethodInfo *)0x0);
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                goto LAB_0424cd67;
              }
              do {
                __this_04.fields.m_Object.fields._dictionary =
                     (System_Collections_Generic_Dictionary_TKey__TValue__o *)category;
                __this_04.fields._0_8_ = in_stack_fffffffffffffed8;
                __this_04.fields.m_Object.fields._8_8_ = pIVar13;
                __this_04.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIVar14;
                __this_04.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar15;
                __this_04.fields.m_Object.fields._32_8_ = pcVar16;
                __this_04.fields.m_Array.fields._list =
                     (System_Collections_Generic_List_T__o *)pIVar17;
                __this_04.fields.m_Array.fields._8_8_ = pIVar18;
                __this_04.fields.m_Array.fields._current = pSVar10;
                SVar12 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                                   (__this_04,(MethodInfo *)local_c8);
                if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                pSVar9 = SimpleJSONFixed_JSONNode__op_Implicit(SVar12,(MethodInfo *)0x0);
                if (pSVar9 == (SimpleJSONFixed_JSONNode_o *)0x0) goto LAB_0424cd67;
                pSVar9 = (SimpleJSONFixed_JSONNode_o *)
                         (*(pSVar9->klass->vtable)._7_get_Item.methodPtr)
                                   (pSVar9,"Name",(pSVar9->klass->vtable)._7_get_Item.method);
                pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar9,(MethodInfo *)0x0);
                lVar3 = MethodInfo_Void_Add;
                piVar1 = &(__this_06->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar2 = (__this_06->fields)._items;
                if (pSVar2 == (System_Object_array *)0x0) goto LAB_0424cd67;
                uVar5 = (__this_06->fields)._size;
                if (uVar5 < (uint)pSVar2->max_length) {
                  (__this_06->fields)._size = uVar5 + 1;
                  pSVar2->m_Items[(int)uVar5] = (Il2CppObject *)pSVar7;
                  il2cpp_runtime_glue(pSVar2->m_Items + (int)uVar5,pSVar7);
                }
                else {
                  System_Collections_Generic_List<object>__AddWithResize
                            (__this_06,(Il2CppObject *)pSVar7,
                             *(MethodInfo_35A7350 **)
                              (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
                }
                __this_03.fields.m_Object.fields._dictionary =
                     (System_Collections_Generic_Dictionary_TKey__TValue__o *)category;
                __this_03.fields._0_8_ = in_stack_fffffffffffffed8;
                __this_03.fields.m_Object.fields._8_8_ = pIVar13;
                __this_03.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIVar14;
                __this_03.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar15;
                __this_03.fields.m_Object.fields._32_8_ = pcVar16;
                __this_03.fields.m_Array.fields._list =
                     (System_Collections_Generic_List_T__o *)pIVar17;
                __this_03.fields.m_Array.fields._8_8_ = pIVar18;
                __this_03.fields.m_Array.fields._current = pSVar10;
                bVar4 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                                  (__this_03,(MethodInfo *)local_c8);
              } while ((char)bVar4 != '\0');
            }
          }
          __this_00.fields.m_Object.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)category;
          __this_00.fields._0_8_ = in_stack_fffffffffffffed8;
          __this_00.fields.m_Object.fields._8_8_ = pIVar13;
          __this_00.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIVar14;
          __this_00.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar15;
          __this_00.fields.m_Object.fields._32_8_ = pcVar16;
          __this_00.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pIVar17;
          __this_00.fields.m_Array.fields._8_8_ = pIVar18;
          __this_00.fields.m_Array.fields._current = pSVar10;
          bVar4 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                            (__this_00,(MethodInfo *)&stack0xfffffffffffffee8);
        } while ((char)bVar4 != '\0');
      }
      if (__this_06 != (System_Collections_Generic_List_object__o *)0x0) {
        pSVar6 = (System_String_array *)
                 System_Collections_Generic_List<object>__ToArray(__this_06,MethodInfo_String___ToArray);
        return pSVar6;
      }
    }
  }
  else {
    if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar6 = Map_BuiltinLevels__GetTxtFiles
                       (*(System_String_o **)(*(long *)(TypeInfo_BuiltinLevels + 0xb8) + 8),method_00);
    if (pSVar6 != (System_String_array *)0x0) {
      uVar5 = (uint)pSVar6->max_length;
      if (0 < (int)uVar5) {
        uVar11 = 0;
        do {
          if (uVar5 <= uVar11) {
LAB_0424cd2d:
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          if (pSVar6->m_Items[(int)uVar11] == (System_String_o *)0x0) goto LAB_0424cd67;
          pSVar7 = System_String__Replace
                             (pSVar6->m_Items[(int)uVar11],".txt","",
                              (MethodInfo *)0x0);
          if ((uint)pSVar6->max_length <= uVar11) goto LAB_0424cd2d;
          pSVar6->m_Items[(int)uVar11] = pSVar7;
          il2cpp_runtime_glue(pSVar6->m_Items + (int)uVar11,pSVar7);
          uVar11 = uVar11 + 1;
          uVar5 = (uint)pSVar6->max_length;
        } while ((int)uVar11 < (int)uVar5);
      }
      return pSVar6;
    }
  }
LAB_0424cd67:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Map.BuiltinLevels$$GetAutosaveNames
// il2cpp: System_String_array* Map_BuiltinLevels__GetAutosaveNames (const MethodInfo* method);
// 0x424cf40

System_String_array * Map_BuiltinLevels__GetAutosaveNames(MethodInfo *method)

{
  uint uVar1;
  System_String_array *pSVar2;
  System_String_o *pSVar3;
  uint uVar4;
  MethodInfo *in_RSI;
  
  if (DAT_05705209 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinLevels);
    il2cpp_init_method_metadata(&".txt");
    il2cpp_init_method_metadata(&"");
    DAT_05705209 = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar2 = Map_BuiltinLevels__GetTxtFiles
                     (*(System_String_o **)(*(long *)(TypeInfo_BuiltinLevels + 0xb8) + 0x10),in_RSI);
  if (pSVar2 != (System_String_array *)0x0) {
    uVar1 = (uint)pSVar2->max_length;
    if (0 < (int)uVar1) {
      uVar4 = 0;
      do {
        if (uVar1 <= uVar4) {
LAB_0424d020:
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        if (pSVar2->m_Items[(int)uVar4] == (System_String_o *)0x0) goto LAB_0424d025;
        pSVar3 = System_String__Replace
                           (pSVar2->m_Items[(int)uVar4],".txt","",(MethodInfo *)0x0)
        ;
        if ((uint)pSVar2->max_length <= uVar4) goto LAB_0424d020;
        pSVar2->m_Items[(int)uVar4] = pSVar3;
        il2cpp_runtime_glue(pSVar2->m_Items + (int)uVar4,pSVar3);
        uVar4 = uVar4 + 1;
        uVar1 = (uint)pSVar2->max_length;
      } while ((int)uVar4 < (int)uVar1);
    }
    return pSVar2;
  }
LAB_0424d025:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Map.BuiltinLevels$$LoadAddon
// il2cpp: System_String_o* Map_BuiltinLevels__LoadAddon (System_String_o* name, const MethodInfo* method);
// 0x424d030

System_String_o * Map_BuiltinLevels__LoadAddon(System_String_o *name,MethodInfo *method)

{
  char cVar1;
  bool_conflict bVar2;
  System_String_o *pSVar3;
  MethodInfo *method_00;
  
  if (DAT_0570520a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinLevels);
    il2cpp_init_method_metadata(&".txt");
    il2cpp_init_method_metadata(&"/");
    il2cpp_init_method_metadata(&".cl");
    il2cpp_init_method_metadata(&"");
    il2cpp_init_method_metadata(&".addon");
    DAT_0570520a = '\x01';
  }
  method_00 = "";
  bVar2 = System_String__op_Equality(name,(System_String_o *)"",(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
LAB_0424d0ab:
    return (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
    il2cpp_init_class();
    bVar2 = Map_BuiltinLevels__IsAddonBuiltin(name,method_00);
    cVar1 = (char)bVar2;
  }
  else {
    bVar2 = Map_BuiltinLevels__IsAddonBuiltin(name,method_00);
    cVar1 = (char)bVar2;
  }
  if (cVar1 != '\0') {
    if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar3 = Map_BuiltinLevels__LoadBuiltinAddon(name,method_00);
    bVar2 = System_String__IsNullOrEmpty(pSVar3,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      return pSVar3;
    }
  }
  if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar3 = System_String__Concat
                     (*(System_String_o **)(*(long *)(TypeInfo_BuiltinLevels + 0xb8) + 0x20),"/",name
                      ,".addon",(MethodInfo *)0x0);
  bVar2 = System_IO_File__Exists(pSVar3,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar3 = System_String__Concat
                       (*(System_String_o **)(*(long *)(TypeInfo_BuiltinLevels + 0xb8) + 0x20),"/",
                        name,".cl",(MethodInfo *)0x0);
    bVar2 = System_IO_File__Exists(pSVar3,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar3 = System_String__Concat
                         (*(System_String_o **)(*(long *)(TypeInfo_BuiltinLevels + 0xb8) + 0x20),"/",
                          name,".txt",(MethodInfo *)0x0);
      bVar2 = System_IO_File__Exists(pSVar3,(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') goto LAB_0424d0ab;
    }
  }
  pSVar3 = System_IO_File__ReadAllText(pSVar3,(MethodInfo *)0x0);
  return pSVar3;
}


// Map.BuiltinLevels$$LoadBuiltinAddon
// il2cpp: System_String_o* Map_BuiltinLevels__LoadBuiltinAddon (System_String_o* name, const MethodInfo* method);
// 0x424d2d0

System_String_o * Map_BuiltinLevels__LoadBuiltinAddon(System_String_o *name,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  System_String_o *path;
  bool_conflict bVar4;
  System_Object_array *pSVar5;
  System_String_o *pSVar6;
  long lVar7;
  UnityEngine_Object_o *x;
  ulong uVar8;
  ulong uVar9;
  
  if (DAT_0570520b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_Path);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    il2cpp_init_method_metadata(&TypeInfo_ResourcePaths);
    il2cpp_init_method_metadata(&MethodInfo_TextAsset___LoadAll_TextAsset);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&TypeInfo_TextAsset);
    il2cpp_init_method_metadata(&".txt");
    il2cpp_init_method_metadata(&".cl");
    il2cpp_init_method_metadata(&".addon");
    DAT_0570520b = '\x01';
  }
  if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar5 = UnityEngine_Resources__LoadAll<object>
                     (*(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 0x30),MethodInfo_TextAsset___LoadAll_TextAsset);
  if (pSVar5 != (System_Object_array *)0x0) {
    if ((int)pSVar5->max_length < 1) {
LAB_0424d48b:
      lVar7 = il2cpp_glue_02274930(TypeInfo_string,4);
      if (lVar7 == 0) goto LAB_0424d6b0;
      if (*(int *)(lVar7 + 0x18) != 0) {
        *(System_String_o **)(lVar7 + 0x20) = name;
        il2cpp_runtime_glue(lVar7 + 0x20,name);
        pSVar6 = System_String__Concat(name,".cl",(MethodInfo *)0x0);
        if (1 < *(uint *)(lVar7 + 0x18)) {
          *(System_String_o **)(lVar7 + 0x28) = pSVar6;
          il2cpp_runtime_glue(lVar7 + 0x28,pSVar6);
          pSVar6 = System_String__Concat(name,".txt",(MethodInfo *)0x0);
          if (2 < *(uint *)(lVar7 + 0x18)) {
            *(System_String_o **)(lVar7 + 0x30) = pSVar6;
            il2cpp_runtime_glue(lVar7 + 0x30,pSVar6);
            pSVar6 = System_String__Concat(name,".addon",(MethodInfo *)0x0);
            if (3 < *(uint *)(lVar7 + 0x18)) {
              *(System_String_o **)(lVar7 + 0x38) = pSVar6;
              il2cpp_runtime_glue(lVar7 + 0x38,pSVar6);
              if (0 < (int)*(ulong *)(lVar7 + 0x18)) {
                uVar9 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
                uVar8 = 0;
                do {
                  if (uVar9 <= uVar8) goto LAB_0424d6ab;
                  pSVar6 = *(System_String_o **)(lVar7 + 0x20 + uVar8 * 8);
                  if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
                    il2cpp_init_class();
                  }
                  path = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 0x30);
                  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
                    il2cpp_init_class();
                  }
                  x = ApplicationManagers_ResourceManager__LoadAsset
                                (path,pSVar6,1,(MethodInfo *)0x0);
                  if (x == (UnityEngine_Object_o *)0x0) {
LAB_0424d5fd:
                    x = (UnityEngine_Object_o *)0x0;
                    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
                  }
                  else {
                    bVar1 = (TypeInfo_TextAsset->_2).naturalAligment;
                    if ((x->klass->_2).naturalAligment < bVar1) goto LAB_0424d5fd;
                    if ((x->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_TextAsset) {
                      x = (UnityEngine_Object_o *)0x0;
                    }
                    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
                  }
                  if (iVar3 == 0) {
                    il2cpp_init_class();
                  }
                  bVar4 = UnityEngine_Object__op_Inequality
                                    (x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                  if ((char)bVar4 != '\0') {
                    if (x != (UnityEngine_Object_o *)0x0) {
LAB_0424d696:
                      pSVar6 = UnityEngine_TextAsset__get_text
                                         ((UnityEngine_TextAsset_o *)x,(MethodInfo *)0x0);
                      return pSVar6;
                    }
                    goto LAB_0424d6b0;
                  }
                  uVar8 = uVar8 + 1;
                  uVar9 = (ulong)*(uint *)(lVar7 + 0x18);
                } while ((long)uVar8 < (long)(int)*(uint *)(lVar7 + 0x18));
              }
              return (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
            }
          }
        }
      }
    }
    else {
      uVar9 = 0;
      if ((pSVar5->max_length & 0xffffffff) != 0) {
        do {
          x = (UnityEngine_Object_o *)pSVar5->m_Items[uVar9];
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar4 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar4 == '\0') {
            if (x == (UnityEngine_Object_o *)0x0) goto LAB_0424d6b0;
            pSVar6 = UnityEngine_Object__get_name(x,(MethodInfo *)0x0);
            bVar4 = System_String__op_Equality(pSVar6,name,(MethodInfo *)0x0);
            if ((char)bVar4 != '\0') goto LAB_0424d696;
            pSVar6 = UnityEngine_Object__get_name(x,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_Path + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar6 = System_IO_Path__GetFileNameWithoutExtension(pSVar6,(MethodInfo *)0x0);
            bVar4 = System_String__op_Equality(pSVar6,name,(MethodInfo *)0x0);
            if ((char)bVar4 != '\0') goto LAB_0424d696;
          }
          uVar9 = uVar9 + 1;
          uVar2 = (uint)pSVar5->max_length;
          if ((long)(int)uVar2 <= (long)uVar9) goto LAB_0424d48b;
        } while (uVar9 < uVar2);
      }
    }
LAB_0424d6ab:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_0424d6b0:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Map.BuiltinLevels$$GetAddonNames
// il2cpp: System_String_array* Map_BuiltinLevels__GetAddonNames (const MethodInfo* method);
// 0x424d6c0

System_String_array * Map_BuiltinLevels__GetAddonNames(MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_String_o *pSVar3;
  System_Object_array *pSVar4;
  long lVar5;
  bool_conflict bVar6;
  System_Collections_Generic_List_object__o *__this;
  System_Collections_Generic_HashSet_object__o *__this_00;
  System_String_array *pSVar7;
  ulong uVar8;
  ulong uVar9;
  MethodInfo *pMVar10;
  
  if (DAT_0570520c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinLevels);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_String___ToArray);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    DAT_0570520c = '\x01';
  }
  __this = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_string);
  System_Collections_Generic_List<object>___ctor(__this,MethodInfo_List_1_System_String);
  __this_00 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this_00,MethodInfo_HashSet_1_System_String);
  pMVar10 = TypeInfo_BuiltinLevels;
  if (*(int *)((long)&TypeInfo_BuiltinLevels[2].parameters + 4) == 0) {
    il2cpp_init_class();
  }
  pSVar7 = Map_BuiltinLevels__GetBuiltinAddons(pMVar10);
  if (pSVar7 != (System_String_array *)0x0) {
    if (__this_00 == (System_Collections_Generic_HashSet_object__o *)0x0) {
      if (0 < (int)pSVar7->max_length) goto LAB_0424da47;
    }
    else {
      uVar8 = pSVar7->max_length;
      uVar9 = uVar8 & 0xffffffff;
      if (__this == (System_Collections_Generic_List_object__o *)0x0) {
        if (0 < (int)uVar8) {
          uVar8 = 0;
          do {
            if (uVar9 <= uVar8) goto LAB_0424da42;
            bVar6 = System_Collections_Generic_HashSet<object>__Add
                              (__this_00,(Il2CppObject *)pSVar7->m_Items[uVar8],MethodInfo_Boolean_Add);
            if ((char)bVar6 != '\0') goto LAB_0424da47;
            uVar8 = uVar8 + 1;
            uVar2 = (uint)pSVar7->max_length;
            uVar9 = (ulong)uVar2;
          } while ((long)uVar8 < (long)(int)uVar2);
        }
      }
      else if (0 < (int)uVar8) {
        uVar9 = 0;
        if ((uVar8 & 0xffffffff) != 0) {
          do {
            pSVar3 = pSVar7->m_Items[uVar9];
            bVar6 = System_Collections_Generic_HashSet<object>__Add
                              (__this_00,(Il2CppObject *)pSVar3,MethodInfo_Boolean_Add);
            lVar5 = MethodInfo_Void_Add;
            if ((char)bVar6 != '\0') {
              piVar1 = &(__this->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar4 = (__this->fields)._items;
              if (pSVar4 == (System_Object_array *)0x0) goto LAB_0424da47;
              uVar2 = (__this->fields)._size;
              if (uVar2 < (uint)pSVar4->max_length) {
                (__this->fields)._size = uVar2 + 1;
                pSVar4->m_Items[(int)uVar2] = (Il2CppObject *)pSVar3;
                il2cpp_runtime_glue(pSVar4->m_Items + (int)uVar2,pSVar3);
              }
              else {
                System_Collections_Generic_List<object>__AddWithResize
                          (__this,(Il2CppObject *)pSVar3,
                           *(MethodInfo_35A7350 **)
                            (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
              }
            }
            uVar9 = uVar9 + 1;
            uVar2 = (uint)pSVar7->max_length;
            if ((long)(int)uVar2 <= (long)uVar9) goto LAB_0424d8d5;
          } while (uVar9 < uVar2);
        }
        goto LAB_0424da42;
      }
    }
LAB_0424d8d5:
    pMVar10 = TypeInfo_BuiltinLevels;
    if (*(int *)((long)&TypeInfo_BuiltinLevels[2].parameters + 4) == 0) {
      il2cpp_init_class();
    }
    pSVar7 = Map_BuiltinLevels__GetCustomAddons(pMVar10);
    if (pSVar7 != (System_String_array *)0x0) {
      if (__this_00 == (System_Collections_Generic_HashSet_object__o *)0x0) {
        if (0 < (int)pSVar7->max_length) goto LAB_0424da47;
      }
      else {
        uVar8 = pSVar7->max_length;
        uVar9 = uVar8 & 0xffffffff;
        if (__this == (System_Collections_Generic_List_object__o *)0x0) {
          if (0 < (int)uVar8) {
            uVar8 = 0;
            do {
              if (uVar9 <= uVar8) goto LAB_0424da42;
              bVar6 = System_Collections_Generic_HashSet<object>__Add
                                (__this_00,(Il2CppObject *)pSVar7->m_Items[uVar8],MethodInfo_Boolean_Add);
              if ((char)bVar6 != '\0') goto LAB_0424da47;
              uVar8 = uVar8 + 1;
              uVar2 = (uint)pSVar7->max_length;
              uVar9 = (ulong)uVar2;
            } while ((long)uVar8 < (long)(int)uVar2);
          }
        }
        else if (0 < (int)uVar8) {
          uVar9 = 0;
          if ((uVar8 & 0xffffffff) != 0) {
            do {
              pSVar3 = pSVar7->m_Items[uVar9];
              bVar6 = System_Collections_Generic_HashSet<object>__Add
                                (__this_00,(Il2CppObject *)pSVar3,MethodInfo_Boolean_Add);
              lVar5 = MethodInfo_Void_Add;
              if ((char)bVar6 != '\0') {
                piVar1 = &(__this->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar4 = (__this->fields)._items;
                if (pSVar4 == (System_Object_array *)0x0) goto LAB_0424da47;
                uVar2 = (__this->fields)._size;
                if (uVar2 < (uint)pSVar4->max_length) {
                  (__this->fields)._size = uVar2 + 1;
                  pSVar4->m_Items[(int)uVar2] = (Il2CppObject *)pSVar3;
                  il2cpp_runtime_glue(pSVar4->m_Items + (int)uVar2,pSVar3);
                }
                else {
                  System_Collections_Generic_List<object>__AddWithResize
                            (__this,(Il2CppObject *)pSVar3,
                             *(MethodInfo_35A7350 **)
                              (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                }
              }
              uVar9 = uVar9 + 1;
              uVar2 = (uint)pSVar7->max_length;
              if ((long)(int)uVar2 <= (long)uVar9) goto LAB_0424da1d;
            } while (uVar9 < uVar2);
          }
LAB_0424da42:
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
      }
LAB_0424da1d:
      if (__this != (System_Collections_Generic_List_object__o *)0x0) {
        pSVar7 = (System_String_array *)
                 System_Collections_Generic_List<object>__ToArray(__this,MethodInfo_String___ToArray);
        return pSVar7;
      }
    }
  }
LAB_0424da47:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Map.BuiltinLevels$$GetBuiltinAddons
// il2cpp: System_String_array* Map_BuiltinLevels__GetBuiltinAddons (const MethodInfo* method);
// 0x424da50

System_String_array * Map_BuiltinLevels__GetBuiltinAddons(MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  SimpleJSONFixed_JSONNode_Enumerator_o __this;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_00;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_01;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_02;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_03;
  long lVar4;
  char cVar5;
  bool_conflict bVar6;
  System_Collections_Generic_List_object__o *__this_04;
  long *plVar7;
  SimpleJSONFixed_JSONNode_o *pSVar8;
  System_String_o *pSVar9;
  System_String_array *pSVar10;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o SVar11;
  Il2CppMethodPointer pIVar12;
  Il2CppMethodPointer pIVar13;
  InvokerMethod pIVar14;
  char *pcVar15;
  Il2CppClass *pIVar16;
  Il2CppType *pIVar17;
  Il2CppType **ppIVar18;
  _union_13 _Var19;
  _union_14 _Var20;
  Il2CppMethodPointer local_78;
  Il2CppMethodPointer pIStack_70;
  InvokerMethod local_68;
  char *pcStack_60;
  Il2CppClass *local_58;
  Il2CppType *pIStack_50;
  Il2CppType **local_48;
  _union_13 _Stack_40;
  _union_14 local_38;
  
  if (DAT_0570520d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinLevels);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_String___ToArray);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&"Name");
    il2cpp_init_method_metadata(&"Addons");
    DAT_0570520d = '\x01';
  }
  __this_04 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_string);
  System_Collections_Generic_List<object>___ctor(__this_04,MethodInfo_List_1_System_String);
  if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar8 = (SimpleJSONFixed_JSONNode_o *)**(undefined8 **)(TypeInfo_BuiltinLevels + 0xb8);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar6 = SimpleJSONFixed_JSONNode__op_Equality(pSVar8,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
      il2cpp_init_class();
    }
    plVar7 = (long *)**(long **)(TypeInfo_BuiltinLevels + 0xb8);
    if (plVar7 == (long *)0x0) goto LAB_0424de2b;
    cVar5 = (**(code **)(*plVar7 + 0x2f8))(plVar7,"Addons",*(undefined8 *)(*plVar7 + 0x300));
    if (cVar5 != '\0') {
      if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
        il2cpp_init_class();
      }
      plVar7 = (long *)**(long **)(TypeInfo_BuiltinLevels + 0xb8);
      if ((plVar7 == (long *)0x0) ||
         (plVar7 = (long *)(**(code **)(*plVar7 + 0x1a8))
                                     (plVar7,"Addons",*(undefined8 *)(*plVar7 + 0x1b0)),
         plVar7 == (long *)0x0)) goto LAB_0424de2b;
      (**(code **)(*plVar7 + 0x338))(&local_78,plVar7,*(undefined8 *)(*plVar7 + 0x340));
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
      bVar6 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                        (__this,(MethodInfo *)&stack0xffffffffffffff38);
      if ((char)bVar6 != '\0') {
        pIVar12 = local_78;
        pIVar13 = pIStack_70;
        pIVar14 = local_68;
        pcVar15 = pcStack_60;
        pIVar16 = local_58;
        pIVar17 = pIStack_50;
        ppIVar18 = local_48;
        _Var19 = _Stack_40;
        _Var20 = local_38;
        if (__this_04 == (System_Collections_Generic_List_object__o *)0x0) {
          do {
            __this_00.fields.m_Object.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar13;
            __this_00.fields._0_8_ = pIVar12;
            __this_00.fields.m_Object.fields._8_8_ = pIVar14;
            __this_00.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar15;
            __this_00.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar16;
            __this_00.fields.m_Object.fields._32_8_ = pIVar17;
            __this_00.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar18
            ;
            __this_00.fields.m_Array.fields._8_8_ = _Var19.rgctx_data;
            __this_00.fields.m_Array.fields._current = _Var20.genericMethod;
            SVar11 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                               (__this_00,(MethodInfo *)&stack0xffffffffffffff38);
            if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar8 = SimpleJSONFixed_JSONNode__op_Implicit(SVar11,(MethodInfo *)0x0);
            if ((pSVar8 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
               (plVar7 = (long *)(*(pSVar8->klass->vtable)._7_get_Item.methodPtr)
                                           (pSVar8,"Name",
                                            (pSVar8->klass->vtable)._7_get_Item.method),
               plVar7 == (long *)0x0)) goto LAB_0424de2b;
            pSVar9 = (System_String_o *)(**(code **)(*plVar7 + 0x1c8))(plVar7);
            bVar6 = System_String__IsNullOrEmpty(pSVar9,(MethodInfo *)0x0);
            if ((char)bVar6 == '\0') goto LAB_0424de2b;
            __this_01.fields.m_Object.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar13;
            __this_01.fields._0_8_ = pIVar12;
            __this_01.fields.m_Object.fields._8_8_ = pIVar14;
            __this_01.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar15;
            __this_01.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar16;
            __this_01.fields.m_Object.fields._32_8_ = pIVar17;
            __this_01.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar18
            ;
            __this_01.fields.m_Array.fields._8_8_ = _Var19.rgctx_data;
            __this_01.fields.m_Array.fields._current = _Var20.genericMethod;
            bVar6 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                              (__this_01,(MethodInfo *)&stack0xffffffffffffff38);
          } while ((char)bVar6 != '\0');
        }
        else {
          do {
            __this_03.fields.m_Object.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar13;
            __this_03.fields._0_8_ = pIVar12;
            __this_03.fields.m_Object.fields._8_8_ = pIVar14;
            __this_03.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar15;
            __this_03.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar16;
            __this_03.fields.m_Object.fields._32_8_ = pIVar17;
            __this_03.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar18
            ;
            __this_03.fields.m_Array.fields._8_8_ = _Var19.rgctx_data;
            __this_03.fields.m_Array.fields._current = _Var20.genericMethod;
            SVar11 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                               (__this_03,(MethodInfo *)&stack0xffffffffffffff38);
            if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar8 = SimpleJSONFixed_JSONNode__op_Implicit(SVar11,(MethodInfo *)0x0);
            if ((pSVar8 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
               (plVar7 = (long *)(*(pSVar8->klass->vtable)._7_get_Item.methodPtr)
                                           (pSVar8,"Name",
                                            (pSVar8->klass->vtable)._7_get_Item.method),
               plVar7 == (long *)0x0)) goto LAB_0424de2b;
            pSVar9 = (System_String_o *)(**(code **)(*plVar7 + 0x1c8))(plVar7);
            bVar6 = System_String__IsNullOrEmpty(pSVar9,(MethodInfo *)0x0);
            lVar4 = MethodInfo_Void_Add;
            if ((char)bVar6 == '\0') {
              piVar1 = &(__this_04->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar3 = (__this_04->fields)._items;
              if (pSVar3 == (System_Object_array *)0x0) goto LAB_0424de2b;
              uVar2 = (__this_04->fields)._size;
              if (uVar2 < (uint)pSVar3->max_length) {
                (__this_04->fields)._size = uVar2 + 1;
                pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)pSVar9;
                il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar2,pSVar9);
              }
              else {
                System_Collections_Generic_List<object>__AddWithResize
                          (__this_04,(Il2CppObject *)pSVar9,
                           *(MethodInfo_35A7350 **)
                            (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
              }
            }
            __this_02.fields.m_Object.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar13;
            __this_02.fields._0_8_ = pIVar12;
            __this_02.fields.m_Object.fields._8_8_ = pIVar14;
            __this_02.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar15;
            __this_02.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar16;
            __this_02.fields.m_Object.fields._32_8_ = pIVar17;
            __this_02.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar18
            ;
            __this_02.fields.m_Array.fields._8_8_ = _Var19.rgctx_data;
            __this_02.fields.m_Array.fields._current = _Var20.genericMethod;
            bVar6 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                              (__this_02,(MethodInfo *)&stack0xffffffffffffff38);
          } while ((char)bVar6 != '\0');
        }
      }
    }
  }
  if (__this_04 != (System_Collections_Generic_List_object__o *)0x0) {
    pSVar10 = (System_String_array *)
              System_Collections_Generic_List<object>__ToArray(__this_04,MethodInfo_String___ToArray);
    return pSVar10;
  }
LAB_0424de2b:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Map.BuiltinLevels$$IsAddonBuiltin
// il2cpp: bool Map_BuiltinLevels__IsAddonBuiltin (System_String_o* name, const MethodInfo* method);
// 0x424d230

bool_conflict Map_BuiltinLevels__IsAddonBuiltin(System_String_o *name,MethodInfo *method)

{
  uint uVar1;
  bool_conflict bVar2;
  System_String_array *pSVar3;
  bool_conflict bVar4;
  ulong uVar5;
  MethodInfo *method_00;
  
  if (DAT_0570520e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinLevels);
    DAT_0570520e = '\x01';
  }
  bVar4 = 0;
  bVar2 = System_String__IsNullOrEmpty(name,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    method_00 = TypeInfo_BuiltinLevels;
    if (*(int *)((long)&TypeInfo_BuiltinLevels[2].parameters + 4) == 0) {
      il2cpp_init_class();
    }
    pSVar3 = Map_BuiltinLevels__GetBuiltinAddons(method_00);
    if (pSVar3 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    uVar5 = 0;
    do {
      uVar1 = (uint)pSVar3->max_length;
      if ((long)(int)uVar1 <= (long)uVar5) {
        return 0;
      }
      if (uVar1 <= uVar5) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      bVar2 = System_String__op_Equality(pSVar3->m_Items[uVar5],name,(MethodInfo *)0x0);
      uVar5 = uVar5 + 1;
    } while ((char)bVar2 == '\0');
    bVar4 = (bool_conflict)CONCAT71((int7)(uVar5 >> 8),1);
  }
  return bVar4;
}


// Map.BuiltinLevels$$GetCustomAddons
// il2cpp: System_String_array* Map_BuiltinLevels__GetCustomAddons (const MethodInfo* method);
// 0x424de30

System_String_array * Map_BuiltinLevels__GetCustomAddons(MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  System_Object_array *pSVar3;
  long lVar4;
  bool_conflict bVar5;
  System_Collections_Generic_List_object__o *__this;
  System_Collections_Generic_HashSet_object__o *__this_00;
  System_String_array *pSVar6;
  System_String_array *pSVar7;
  System_String_array *pSVar8;
  System_String_o *pSVar9;
  undefined8 *puVar10;
  uint uVar11;
  uint uVar12;
  MethodInfo *method_00;
  
  if (DAT_0570520f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinLevels);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_String___ToArray);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&".txt");
    il2cpp_init_method_metadata(&".cl");
    il2cpp_init_method_metadata(&"");
    il2cpp_init_method_metadata(&".addon");
    DAT_0570520f = '\x01';
  }
  __this = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_string);
  System_Collections_Generic_List<object>___ctor(__this,MethodInfo_List_1_System_String);
  __this_00 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  method_00 = MethodInfo_HashSet_1_System_String;
  System_Collections_Generic_HashSet<object>___ctor(__this_00,(MethodInfo_335BBE0 *)MethodInfo_HashSet_1_System_String);
  if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar6 = Map_BuiltinLevels__GetAddonFiles
                     (*(System_String_o **)(*(long *)(TypeInfo_BuiltinLevels + 0xb8) + 0x20),method_00);
  pSVar7 = Map_BuiltinLevels__GetClFiles
                     (*(System_String_o **)(*(long *)(TypeInfo_BuiltinLevels + 0xb8) + 0x20),method_00);
  pSVar8 = Map_BuiltinLevels__GetTxtFiles
                     (*(System_String_o **)(*(long *)(TypeInfo_BuiltinLevels + 0xb8) + 0x20),method_00);
  if (pSVar6 != (System_String_array *)0x0) {
    uVar12 = (uint)pSVar6->max_length;
    if (__this == (System_Collections_Generic_List_object__o *)0x0) {
      if (0 < (int)uVar12) {
        pSVar9 = pSVar6->m_Items[0];
        if (pSVar9 == (System_String_o *)0x0) goto LAB_0424e324;
        puVar10 = &".addon";
        goto LAB_0424e330;
      }
    }
    else if (0 < (int)uVar12) {
      uVar11 = 0;
      do {
        if (uVar12 <= uVar11) goto LAB_0424e2f1;
        if (pSVar6->m_Items[(int)uVar11] == (System_String_o *)0x0) goto LAB_0424e324;
        pSVar9 = System_String__Replace
                           (pSVar6->m_Items[(int)uVar11],".addon","",(MethodInfo *)0x0
                           );
        lVar4 = MethodInfo_Void_Add;
        piVar1 = &(__this->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar3 = (__this->fields)._items;
        if (pSVar3 == (System_Object_array *)0x0) goto LAB_0424e324;
        uVar12 = (__this->fields)._size;
        if (uVar12 < (uint)pSVar3->max_length) {
          (__this->fields)._size = uVar12 + 1;
          pSVar3->m_Items[(int)uVar12] = (Il2CppObject *)pSVar9;
          il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar12,pSVar9);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    (__this,(Il2CppObject *)pSVar9,
                     *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
        }
        if (__this_00 == (System_Collections_Generic_HashSet_object__o *)0x0) goto LAB_0424e324;
        System_Collections_Generic_HashSet<object>__Add
                  (__this_00,(Il2CppObject *)pSVar9,MethodInfo_Boolean_Add);
        uVar11 = uVar11 + 1;
        uVar12 = (uint)pSVar6->max_length;
      } while ((int)uVar11 < (int)uVar12);
    }
    if (pSVar7 == (System_String_array *)0x0) goto LAB_0424e324;
    iVar2 = (int)pSVar7->max_length;
    if (__this_00 == (System_Collections_Generic_HashSet_object__o *)0x0) {
      if (0 < iVar2) {
        pSVar9 = pSVar7->m_Items[0];
        if (pSVar9 == (System_String_o *)0x0) goto LAB_0424e324;
        puVar10 = &".cl";
        goto LAB_0424e330;
      }
    }
    else if (0 < iVar2) {
      uVar12 = 0;
      if (iVar2 != 0) {
        do {
          if (pSVar7->m_Items[(int)uVar12] == (System_String_o *)0x0) goto LAB_0424e324;
          pSVar9 = System_String__Replace
                             (pSVar7->m_Items[(int)uVar12],".cl","",
                              (MethodInfo *)0x0);
          bVar5 = System_Collections_Generic_HashSet<object>__Contains
                            (__this_00,(Il2CppObject *)pSVar9,MethodInfo_Boolean_Contains);
          lVar4 = MethodInfo_Void_Add;
          if ((char)bVar5 == '\0') {
            if (__this == (System_Collections_Generic_List_object__o *)0x0) goto LAB_0424e324;
            piVar1 = &(__this->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar3 = (__this->fields)._items;
            if (pSVar3 == (System_Object_array *)0x0) goto LAB_0424e324;
            uVar11 = (__this->fields)._size;
            if (uVar11 < (uint)pSVar3->max_length) {
              (__this->fields)._size = uVar11 + 1;
              pSVar3->m_Items[(int)uVar11] = (Il2CppObject *)pSVar9;
              il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar11,pSVar9);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        (__this,(Il2CppObject *)pSVar9,
                         *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70))
              ;
            }
            System_Collections_Generic_HashSet<object>__Add
                      (__this_00,(Il2CppObject *)pSVar9,MethodInfo_Boolean_Add);
          }
          uVar12 = uVar12 + 1;
          uVar11 = (uint)pSVar7->max_length;
          if ((int)uVar11 <= (int)uVar12) goto LAB_0424e1b8;
        } while (uVar12 < uVar11);
      }
      goto LAB_0424e2f1;
    }
LAB_0424e1b8:
    if (pSVar8 != (System_String_array *)0x0) {
      iVar2 = (int)pSVar8->max_length;
      if (__this_00 == (System_Collections_Generic_HashSet_object__o *)0x0) {
        if (0 < iVar2) {
          pSVar9 = pSVar8->m_Items[0];
          if (pSVar9 != (System_String_o *)0x0) {
            puVar10 = &".txt";
LAB_0424e330:
            System_String__Replace
                      (pSVar9,(System_String_o *)*puVar10,"",(MethodInfo *)0x0);
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          goto LAB_0424e324;
        }
      }
      else if (0 < iVar2) {
        uVar12 = 0;
        if (iVar2 != 0) {
          do {
            if (pSVar8->m_Items[(int)uVar12] == (System_String_o *)0x0) goto LAB_0424e324;
            pSVar9 = System_String__Replace
                               (pSVar8->m_Items[(int)uVar12],".txt","",
                                (MethodInfo *)0x0);
            bVar5 = System_Collections_Generic_HashSet<object>__Contains
                              (__this_00,(Il2CppObject *)pSVar9,MethodInfo_Boolean_Contains);
            lVar4 = MethodInfo_Void_Add;
            if ((char)bVar5 == '\0') {
              if (__this == (System_Collections_Generic_List_object__o *)0x0) goto LAB_0424e324;
              piVar1 = &(__this->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar3 = (__this->fields)._items;
              if (pSVar3 == (System_Object_array *)0x0) goto LAB_0424e324;
              uVar11 = (__this->fields)._size;
              if (uVar11 < (uint)pSVar3->max_length) {
                (__this->fields)._size = uVar11 + 1;
                pSVar3->m_Items[(int)uVar11] = (Il2CppObject *)pSVar9;
                il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar11,pSVar9);
              }
              else {
                System_Collections_Generic_List<object>__AddWithResize
                          (__this,(Il2CppObject *)pSVar9,
                           *(MethodInfo_35A7350 **)
                            (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
              }
              System_Collections_Generic_HashSet<object>__Add
                        (__this_00,(Il2CppObject *)pSVar9,MethodInfo_Boolean_Add);
            }
            uVar12 = uVar12 + 1;
            uVar11 = (uint)pSVar8->max_length;
            if ((int)uVar11 <= (int)uVar12) goto LAB_0424e2cc;
          } while (uVar12 < uVar11);
        }
LAB_0424e2f1:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
LAB_0424e2cc:
      if (__this != (System_Collections_Generic_List_object__o *)0x0) {
        pSVar6 = (System_String_array *)
                 System_Collections_Generic_List<object>__ToArray(__this,MethodInfo_String___ToArray);
        return pSVar6;
      }
    }
  }
LAB_0424e324:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Map.BuiltinLevels$$DeleteCustomMap
// il2cpp: void Map_BuiltinLevels__DeleteCustomMap (System_String_o* name, const MethodInfo* method);
// 0x424e690

void Map_BuiltinLevels__DeleteCustomMap(System_String_o *name,MethodInfo *method)

{
  System_String_o *path;
  
  if (DAT_05705210 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinLevels);
    il2cpp_init_method_metadata(&".txt");
    il2cpp_init_method_metadata(&"/");
    DAT_05705210 = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
    il2cpp_init_class();
  }
  path = System_String__Concat
                   (*(System_String_o **)(*(long *)(TypeInfo_BuiltinLevels + 0xb8) + 8),"/",name,
                    ".txt",(MethodInfo *)0x0);
  System_IO_File__Delete(path,(MethodInfo *)0x0);
  return;
}


// Map.BuiltinLevels$$DeleteCustomLogic
// il2cpp: void Map_BuiltinLevels__DeleteCustomLogic (System_String_o* name, const MethodInfo* method);
// 0x424e730

void Map_BuiltinLevels__DeleteCustomLogic(System_String_o *name,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (DAT_05705211 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinLevels);
    il2cpp_init_method_metadata(&".txt");
    il2cpp_init_method_metadata(&"/");
    il2cpp_init_method_metadata(&".cl");
    DAT_05705211 = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = System_String__Concat
                     (*(System_String_o **)(*(long *)(TypeInfo_BuiltinLevels + 0xb8) + 0x18),"/",name
                      ,".txt",(MethodInfo *)0x0);
  System_IO_File__Delete(pSVar1,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat
                     (*(System_String_o **)(*(long *)(TypeInfo_BuiltinLevels + 0xb8) + 0x18),"/",name
                      ,".cl",(MethodInfo *)0x0);
  System_IO_File__Delete(pSVar1,(MethodInfo *)0x0);
  return;
}


// Map.BuiltinLevels$$DeleteCustomAddon
// il2cpp: void Map_BuiltinLevels__DeleteCustomAddon (System_String_o* name, const MethodInfo* method);
// 0x424e800

void Map_BuiltinLevels__DeleteCustomAddon(System_String_o *name,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (DAT_05705212 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinLevels);
    il2cpp_init_method_metadata(&".txt");
    il2cpp_init_method_metadata(&"/");
    il2cpp_init_method_metadata(&".cl");
    il2cpp_init_method_metadata(&".addon");
    DAT_05705212 = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = System_String__Concat
                     (*(System_String_o **)(*(long *)(TypeInfo_BuiltinLevels + 0xb8) + 0x20),"/",name
                      ,".addon",(MethodInfo *)0x0);
  System_IO_File__Delete(pSVar1,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat
                     (*(System_String_o **)(*(long *)(TypeInfo_BuiltinLevels + 0xb8) + 0x20),"/",name
                      ,".cl",(MethodInfo *)0x0);
  System_IO_File__Delete(pSVar1,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat
                     (*(System_String_o **)(*(long *)(TypeInfo_BuiltinLevels + 0xb8) + 0x20),"/",name
                      ,".txt",(MethodInfo *)0x0);
  System_IO_File__Delete(pSVar1,(MethodInfo *)0x0);
  return;
}


// Map.BuiltinLevels$$SaveCustomMap
// il2cpp: void Map_BuiltinLevels__SaveCustomMap (System_String_o* name, Map_MapScript_o* script, const MethodInfo* method);
// 0x424e910

void Map_BuiltinLevels__SaveCustomMap
               (System_String_o *name,Map_MapScript_o *script,MethodInfo *method)

{
  System_String_o *path;
  System_String_o *contents;
  
  if (DAT_05705213 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinLevels);
    il2cpp_init_method_metadata(&".txt");
    il2cpp_init_method_metadata(&"/");
    DAT_05705213 = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
    il2cpp_init_class();
  }
  path = System_String__Concat
                   (*(System_String_o **)(*(long *)(TypeInfo_BuiltinLevels + 0xb8) + 8),"/",name,
                    ".txt",(MethodInfo *)0x0);
  if (script != (Map_MapScript_o *)0x0) {
    contents = (System_String_o *)
               (*(script->klass->vtable)._4_Serialize.methodPtr)
                         (script,(script->klass->vtable)._4_Serialize.method);
    System_IO_File__WriteAllText(path,contents,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Map.BuiltinLevels$$AutosaveCustomMap
// il2cpp: void Map_BuiltinLevels__AutosaveCustomMap (System_String_o* name, Map_MapScript_o* script, const MethodInfo* method);
// 0x424e9d0

void Map_BuiltinLevels__AutosaveCustomMap
               (System_String_o *name,Map_MapScript_o *script,MethodInfo *method)

{
  System_String_o *path;
  System_String_o *contents;
  
  if (DAT_05705214 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinLevels);
    il2cpp_init_method_metadata(&".txt");
    il2cpp_init_method_metadata(&"/");
    DAT_05705214 = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
    il2cpp_init_class();
  }
  path = System_String__Concat
                   (*(System_String_o **)(*(long *)(TypeInfo_BuiltinLevels + 0xb8) + 0x10),"/",name,
                    ".txt",(MethodInfo *)0x0);
  if (script != (Map_MapScript_o *)0x0) {
    contents = (System_String_o *)
               (*(script->klass->vtable)._4_Serialize.methodPtr)
                         (script,(script->klass->vtable)._4_Serialize.method);
    System_IO_File__WriteAllText(path,contents,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Map.BuiltinLevels$$SaveCustomLogic
// il2cpp: void Map_BuiltinLevels__SaveCustomLogic (System_String_o* name, System_String_o* script, const MethodInfo* method);
// 0x424ea90

void Map_BuiltinLevels__SaveCustomLogic
               (System_String_o *name,System_String_o *script,MethodInfo *method)

{
  System_String_o *path;
  
  if (DAT_05705215 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinLevels);
    il2cpp_init_method_metadata(&"/");
    il2cpp_init_method_metadata(&".cl");
    DAT_05705215 = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
    il2cpp_init_class();
  }
  path = System_String__Concat
                   (*(System_String_o **)(*(long *)(TypeInfo_BuiltinLevels + 0xb8) + 0x18),"/",name,
                    ".cl",(MethodInfo *)0x0);
  System_IO_File__WriteAllText(path,script,(MethodInfo *)0x0);
  return;
}


// Map.BuiltinLevels$$SaveCustomAddon
// il2cpp: void Map_BuiltinLevels__SaveCustomAddon (System_String_o* name, System_String_o* script, const MethodInfo* method);
// 0x424eb30

void Map_BuiltinLevels__SaveCustomAddon
               (System_String_o *name,System_String_o *script,MethodInfo *method)

{
  System_String_o *path;
  
  if (DAT_05705216 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinLevels);
    il2cpp_init_method_metadata(&"/");
    il2cpp_init_method_metadata(&".addon");
    DAT_05705216 = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
    il2cpp_init_class();
  }
  path = System_String__Concat
                   (*(System_String_o **)(*(long *)(TypeInfo_BuiltinLevels + 0xb8) + 0x20),"/",name,
                    ".addon",(MethodInfo *)0x0);
  System_IO_File__WriteAllText(path,script,(MethodInfo *)0x0);
  return;
}


// Map.BuiltinLevels$$GetGameModes
// il2cpp: System_String_array* Map_BuiltinLevels__GetGameModes (System_String_o* category, System_String_o* mapName, bool hasMapLogic, const MethodInfo* method);
// 0x424ebd0

System_String_array *
Map_BuiltinLevels__GetGameModes
          (System_String_o *category,System_String_o *mapName,bool_conflict hasMapLogic,
          MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  int iVar3;
  int32_t iVar4;
  System_Object_array *pSVar5;
  System_String_o *pSVar6;
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
  SimpleJSONFixed_JSONNode_Enumerator_o __this_14;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_15;
  long lVar7;
  char cVar8;
  bool_conflict bVar9;
  System_Collections_Generic_List_object__o *__this_16;
  long *plVar10;
  SimpleJSONFixed_JSONNode_o *pSVar11;
  Il2CppObject *pIVar12;
  SimpleJSONFixed_JSONNode_o *a;
  System_String_array *pSVar13;
  MethodInfo *method_00;
  ulong uVar14;
  MethodInfo *pMVar15;
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
  Il2CppMethodPointer local_88;
  Il2CppMethodPointer pIStack_80;
  InvokerMethod local_78;
  char *pcStack_70;
  Il2CppClass *local_68;
  Il2CppType *pIStack_60;
  Il2CppType **local_58;
  _union_13 _Stack_50;
  _union_14 local_48;
  System_String_o *local_40;
  System_String_o *local_38;
  
  if (DAT_05705217 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinLevels);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Remove);
    il2cpp_init_method_metadata(&MethodInfo_String___ToArray);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&"Name");
    il2cpp_init_method_metadata(&"ExcludedModes");
    il2cpp_init_method_metadata(&"IncludedModes");
    il2cpp_init_method_metadata(&"GameModes");
    DAT_05705217 = '\x01';
  }
  __this_16 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_string);
  System_Collections_Generic_List<object>___ctor(__this_16,MethodInfo_List_1_System_String);
  if ((char)hasMapLogic == '\0') {
LAB_0424ed52:
    iVar3 = *(int *)((long)&TypeInfo_BuiltinLevels[2].parameters + 4);
  }
  else {
    if (*(int *)((long)&TypeInfo_BuiltinLevels[2].parameters + 4) == 0) {
      il2cpp_init_class();
    }
    lVar7 = MethodInfo_Void_Add;
    if (__this_16 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_0424f75e;
    pIVar12 = *(Il2CppObject **)(TypeInfo_BuiltinLevels[2].virtualMethodPointer + 0x28);
    piVar1 = &(__this_16->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar5 = (__this_16->fields)._items;
    if (pSVar5 == (System_Object_array *)0x0) goto LAB_0424f75e;
    uVar2 = (__this_16->fields)._size;
    if (uVar2 < (uint)pSVar5->max_length) {
      (__this_16->fields)._size = uVar2 + 1;
      pSVar5->m_Items[(int)uVar2] = pIVar12;
      il2cpp_runtime_glue(pSVar5->m_Items + (int)uVar2);
      goto LAB_0424ed52;
    }
    System_Collections_Generic_List<object>__AddWithResize
              (__this_16,pIVar12,
               *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
    iVar3 = *(int *)((long)&TypeInfo_BuiltinLevels[2].parameters + 4);
  }
  if (iVar3 == 0) {
    il2cpp_init_class();
  }
  plVar10 = *(long **)TypeInfo_BuiltinLevels[2].virtualMethodPointer;
  local_40 = category;
  if ((plVar10 == (long *)0x0) ||
     (local_38 = mapName,
     plVar10 = (long *)(**(code **)(*plVar10 + 0x1a8))
                                 (plVar10,"GameModes",*(undefined8 *)(*plVar10 + 0x1b0)),
     plVar10 == (long *)0x0)) goto LAB_0424f75e;
  (**(code **)(*plVar10 + 0x338))(&local_88,plVar10,*(undefined8 *)(*plVar10 + 0x340));
  pMVar15 = (MethodInfo *)0x0;
  __this.fields.m_Object.fields._dictionary =
       (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIStack_80;
  __this.fields._0_8_ = local_88;
  __this.fields.m_Object.fields._8_8_ = local_78;
  __this.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcStack_70;
  __this.fields.m_Object.fields._current.fields.value = (Il2CppObject *)local_68;
  __this.fields.m_Object.fields._32_8_ = pIStack_60;
  __this.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)local_58;
  __this.fields.m_Array.fields._8_8_ = _Stack_50.rgctx_data;
  __this.fields.m_Array.fields._current = local_48.genericMethod;
  pIVar17 = local_88;
  pIVar18 = pIStack_80;
  pIVar19 = local_78;
  pcVar20 = pcStack_70;
  pIVar21 = local_68;
  pIVar22 = pIStack_60;
  ppIVar23 = local_58;
  _Var24 = _Stack_50;
  _Var25 = local_48;
  bVar9 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                    (__this,(MethodInfo *)&stack0xffffffffffffff28);
  if ((char)bVar9 != '\0') {
    if (__this_16 == (System_Collections_Generic_List_object__o *)0x0) {
      __this_14.fields.m_Object.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar18;
      __this_14.fields._0_8_ = pIVar17;
      __this_14.fields.m_Object.fields._8_8_ = pIVar19;
      __this_14.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar20;
      __this_14.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar21;
      __this_14.fields.m_Object.fields._32_8_ = pIVar22;
      __this_14.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar23;
      __this_14.fields.m_Array.fields._8_8_ = _Var24.rgctx_data;
      __this_14.fields.m_Array.fields._current = _Var25.genericMethod;
      SVar16 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                         (__this_14,(MethodInfo *)&stack0xffffffffffffff28);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar11 = SimpleJSONFixed_JSONNode__op_Implicit(SVar16,(MethodInfo *)0x0);
      if ((pSVar11 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
         (pSVar11 = (SimpleJSONFixed_JSONNode_o *)
                    (*(pSVar11->klass->vtable)._7_get_Item.methodPtr)
                              (pSVar11,"Name",(pSVar11->klass->vtable)._7_get_Item.method),
         pSVar11 == (SimpleJSONFixed_JSONNode_o *)0x0)) goto LAB_0424f75e;
      goto LAB_0424f796;
    }
    do {
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
      SVar16 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                         (__this_01,(MethodInfo *)&stack0xffffffffffffff28);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar11 = SimpleJSONFixed_JSONNode__op_Implicit(SVar16,(MethodInfo *)0x0);
      if ((pSVar11 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
         (plVar10 = (long *)(*(pSVar11->klass->vtable)._7_get_Item.methodPtr)
                                      (pSVar11,"Name",
                                       (pSVar11->klass->vtable)._7_get_Item.method),
         plVar10 == (long *)0x0)) goto LAB_0424f75e;
      pIVar12 = (Il2CppObject *)
                (**(code **)(*plVar10 + 0x1c8))(plVar10,*(undefined8 *)(*plVar10 + 0x1d0));
      lVar7 = MethodInfo_Void_Add;
      piVar1 = &(__this_16->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar5 = (__this_16->fields)._items;
      if (pSVar5 == (System_Object_array *)0x0) goto LAB_0424f75e;
      uVar2 = (__this_16->fields)._size;
      if (uVar2 < (uint)pSVar5->max_length) {
        (__this_16->fields)._size = uVar2 + 1;
        pSVar5->m_Items[(int)uVar2] = pIVar12;
        il2cpp_runtime_glue(pSVar5->m_Items + (int)uVar2);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  (__this_16,pIVar12,
                   *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
      }
      pMVar15 = (MethodInfo *)0x0;
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
      bVar9 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                        (__this_00,(MethodInfo *)&stack0xffffffffffffff28);
    } while ((char)bVar9 != '\0');
  }
  if (*(int *)((long)&TypeInfo_BuiltinLevels[2].parameters + 4) == 0) {
    il2cpp_init_class();
  }
  pSVar6 = local_40;
  pSVar11 = Map_BuiltinLevels__GetCategory(local_40,pMVar15);
  a = Map_BuiltinLevels__GetMap(pSVar6,local_38,method_00);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar9 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar11,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar9 != '\0') {
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar9 = SimpleJSONFixed_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar9 != '\0') {
      if (a == (SimpleJSONFixed_JSONNode_o *)0x0) goto LAB_0424f75e;
      cVar8 = (*(a->klass->vtable)._28_HasKey.methodPtr)
                        (a,"IncludedModes",(a->klass->vtable)._28_HasKey.method);
      if (cVar8 == '\0') {
        cVar8 = (*(a->klass->vtable)._28_HasKey.methodPtr)
                          (a,"ExcludedModes",(a->klass->vtable)._28_HasKey.method);
        if (cVar8 == '\0') {
          if (pSVar11 == (SimpleJSONFixed_JSONNode_o *)0x0) goto LAB_0424f75e;
          cVar8 = (*(pSVar11->klass->vtable)._28_HasKey.methodPtr)
                            (pSVar11,"IncludedModes",(pSVar11->klass->vtable)._28_HasKey.method);
          if (cVar8 == '\0') {
            cVar8 = (*(pSVar11->klass->vtable)._28_HasKey.methodPtr)
                              (pSVar11,"ExcludedModes",(pSVar11->klass->vtable)._28_HasKey.method);
            if (cVar8 != '\0') {
              plVar10 = (long *)(*(pSVar11->klass->vtable)._7_get_Item.methodPtr)
                                          (pSVar11,"ExcludedModes",
                                           (pSVar11->klass->vtable)._7_get_Item.method);
              if (plVar10 == (long *)0x0) goto LAB_0424f75e;
              (**(code **)(*plVar10 + 0x338))(&local_88,plVar10,*(undefined8 *)(*plVar10 + 0x340));
              __this_11.fields.m_Object.fields._dictionary =
                   (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIStack_80;
              __this_11.fields._0_8_ = local_88;
              __this_11.fields.m_Object.fields._8_8_ = local_78;
              __this_11.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcStack_70;
              __this_11.fields.m_Object.fields._current.fields.value = (Il2CppObject *)local_68;
              __this_11.fields.m_Object.fields._32_8_ = pIStack_60;
              __this_11.fields.m_Array.fields._list =
                   (System_Collections_Generic_List_T__o *)local_58;
              __this_11.fields.m_Array.fields._8_8_ = _Stack_50.rgctx_data;
              __this_11.fields.m_Array.fields._current = local_48.genericMethod;
              bVar9 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                                (__this_11,(MethodInfo *)&stack0xffffffffffffff28);
              if ((char)bVar9 != '\0') {
                pIVar17 = local_88;
                pIVar18 = pIStack_80;
                pIVar19 = local_78;
                pcVar20 = pcStack_70;
                pIVar21 = local_68;
                pIVar22 = pIStack_60;
                ppIVar23 = local_58;
                _Var24 = _Stack_50;
                _Var25 = local_48;
                if (__this_16 == (System_Collections_Generic_List_object__o *)0x0)
                goto LAB_0424f763;
                do {
                  __this_13.fields.m_Object.fields._dictionary =
                       (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar18;
                  __this_13.fields._0_8_ = pIVar17;
                  __this_13.fields.m_Object.fields._8_8_ = pIVar19;
                  __this_13.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar20;
                  __this_13.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar21;
                  __this_13.fields.m_Object.fields._32_8_ = pIVar22;
                  __this_13.fields.m_Array.fields._list =
                       (System_Collections_Generic_List_T__o *)ppIVar23;
                  __this_13.fields.m_Array.fields._8_8_ = _Var24.rgctx_data;
                  __this_13.fields.m_Array.fields._current = _Var25.genericMethod;
                  SVar16 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                                     (__this_13,(MethodInfo *)&stack0xffffffffffffff28);
                  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                    il2cpp_init_class();
                  }
                  pSVar11 = SimpleJSONFixed_JSONNode__op_Implicit(SVar16,(MethodInfo *)0x0);
                  if (pSVar11 == (SimpleJSONFixed_JSONNode_o *)0x0) goto LAB_0424f75e;
                  pIVar12 = (Il2CppObject *)
                            (*(pSVar11->klass->vtable)._9_get_Value.methodPtr)
                                      (pSVar11,(pSVar11->klass->vtable)._9_get_Value.method);
                  bVar9 = System_Collections_Generic_List<object>__Contains
                                    (__this_16,pIVar12,MethodInfo_Boolean_Contains);
                  if ((char)bVar9 != '\0') {
                    pIVar12 = (Il2CppObject *)
                              (*(pSVar11->klass->vtable)._9_get_Value.methodPtr)
                                        (pSVar11,(pSVar11->klass->vtable)._9_get_Value.method);
                    System_Collections_Generic_List<object>__Remove(__this_16,pIVar12,MethodInfo_Boolean_Remove);
                  }
                  __this_12.fields.m_Object.fields._dictionary =
                       (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar18;
                  __this_12.fields._0_8_ = pIVar17;
                  __this_12.fields.m_Object.fields._8_8_ = pIVar19;
                  __this_12.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar20;
                  __this_12.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar21;
                  __this_12.fields.m_Object.fields._32_8_ = pIVar22;
                  __this_12.fields.m_Array.fields._list =
                       (System_Collections_Generic_List_T__o *)ppIVar23;
                  __this_12.fields.m_Array.fields._8_8_ = _Var24.rgctx_data;
                  __this_12.fields.m_Array.fields._current = _Var25.genericMethod;
                  bVar9 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                                    (__this_12,(MethodInfo *)&stack0xffffffffffffff28);
                } while ((char)bVar9 != '\0');
              }
            }
          }
          else {
            if (__this_16 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_0424f75e;
            piVar1 = &(__this_16->fields)._version;
            *piVar1 = *piVar1 + 1;
            iVar4 = (__this_16->fields)._size;
            (__this_16->fields)._size = 0;
            if (0 < iVar4) {
              System_Array__Clear((System_Array_o *)(__this_16->fields)._items,0,iVar4,
                                  (MethodInfo *)0x0);
            }
            plVar10 = (long *)(*(pSVar11->klass->vtable)._7_get_Item.methodPtr)
                                        (pSVar11,"IncludedModes",
                                         (pSVar11->klass->vtable)._7_get_Item.method);
            if (plVar10 == (long *)0x0) goto LAB_0424f75e;
            (**(code **)(*plVar10 + 0x338))(&local_88,plVar10,*(undefined8 *)(*plVar10 + 0x340));
            __this_08.fields.m_Object.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIStack_80;
            __this_08.fields._0_8_ = local_88;
            __this_08.fields.m_Object.fields._8_8_ = local_78;
            __this_08.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcStack_70;
            __this_08.fields.m_Object.fields._current.fields.value = (Il2CppObject *)local_68;
            __this_08.fields.m_Object.fields._32_8_ = pIStack_60;
            __this_08.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)local_58
            ;
            __this_08.fields.m_Array.fields._8_8_ = _Stack_50.rgctx_data;
            __this_08.fields.m_Array.fields._current = local_48.genericMethod;
            bVar9 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                              (__this_08,(MethodInfo *)&stack0xffffffffffffff28);
            cVar8 = (char)bVar9;
            pIVar17 = local_88;
            pIVar18 = pIStack_80;
            pIVar19 = local_78;
            pcVar20 = pcStack_70;
            pIVar21 = local_68;
            pIVar22 = pIStack_60;
            ppIVar23 = local_58;
            _Var24 = _Stack_50;
            _Var25 = local_48;
            while (cVar8 != '\0') {
              __this_10.fields.m_Object.fields._dictionary =
                   (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar18;
              __this_10.fields._0_8_ = pIVar17;
              __this_10.fields.m_Object.fields._8_8_ = pIVar19;
              __this_10.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar20;
              __this_10.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar21;
              __this_10.fields.m_Object.fields._32_8_ = pIVar22;
              __this_10.fields.m_Array.fields._list =
                   (System_Collections_Generic_List_T__o *)ppIVar23;
              __this_10.fields.m_Array.fields._8_8_ = _Var24.rgctx_data;
              __this_10.fields.m_Array.fields._current = _Var25.genericMethod;
              SVar16 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                                 (__this_10,(MethodInfo *)&stack0xffffffffffffff28);
              if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar11 = SimpleJSONFixed_JSONNode__op_Implicit(SVar16,(MethodInfo *)0x0);
              if (pSVar11 == (SimpleJSONFixed_JSONNode_o *)0x0) goto LAB_0424f75e;
              pIVar12 = (Il2CppObject *)
                        (*(pSVar11->klass->vtable)._9_get_Value.methodPtr)
                                  (pSVar11,(pSVar11->klass->vtable)._9_get_Value.method);
              lVar7 = MethodInfo_Void_Add;
              piVar1 = &(__this_16->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar5 = (__this_16->fields)._items;
              if (pSVar5 == (System_Object_array *)0x0) goto LAB_0424f75e;
              uVar2 = (__this_16->fields)._size;
              if (uVar2 < (uint)pSVar5->max_length) {
                (__this_16->fields)._size = uVar2 + 1;
                pSVar5->m_Items[(int)uVar2] = pIVar12;
                il2cpp_runtime_glue(pSVar5->m_Items + (int)uVar2,pIVar12);
              }
              else {
                System_Collections_Generic_List<object>__AddWithResize
                          (__this_16,pIVar12,
                           *(MethodInfo_35A7350 **)
                            (*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
              }
              __this_09.fields.m_Object.fields._dictionary =
                   (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar18;
              __this_09.fields._0_8_ = pIVar17;
              __this_09.fields.m_Object.fields._8_8_ = pIVar19;
              __this_09.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar20;
              __this_09.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar21;
              __this_09.fields.m_Object.fields._32_8_ = pIVar22;
              __this_09.fields.m_Array.fields._list =
                   (System_Collections_Generic_List_T__o *)ppIVar23;
              __this_09.fields.m_Array.fields._8_8_ = _Var24.rgctx_data;
              __this_09.fields.m_Array.fields._current = _Var25.genericMethod;
              bVar9 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                                (__this_09,(MethodInfo *)&stack0xffffffffffffff28);
              cVar8 = (char)bVar9;
            }
          }
        }
        else {
          plVar10 = (long *)(*(a->klass->vtable)._7_get_Item.methodPtr)
                                      (a,"ExcludedModes",(a->klass->vtable)._7_get_Item.method);
          if (plVar10 == (long *)0x0) goto LAB_0424f75e;
          (**(code **)(*plVar10 + 0x338))(&local_88,plVar10,*(undefined8 *)(*plVar10 + 0x340));
          __this_05.fields.m_Object.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIStack_80;
          __this_05.fields._0_8_ = local_88;
          __this_05.fields.m_Object.fields._8_8_ = local_78;
          __this_05.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcStack_70;
          __this_05.fields.m_Object.fields._current.fields.value = (Il2CppObject *)local_68;
          __this_05.fields.m_Object.fields._32_8_ = pIStack_60;
          __this_05.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)local_58;
          __this_05.fields.m_Array.fields._8_8_ = _Stack_50.rgctx_data;
          __this_05.fields.m_Array.fields._current = local_48.genericMethod;
          bVar9 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                            (__this_05,(MethodInfo *)&stack0xffffffffffffff28);
          if ((char)bVar9 != '\0') {
            pIVar17 = local_88;
            pIVar18 = pIStack_80;
            pIVar19 = local_78;
            pcVar20 = pcStack_70;
            pIVar21 = local_68;
            pIVar22 = pIStack_60;
            ppIVar23 = local_58;
            _Var24 = _Stack_50;
            _Var25 = local_48;
            if (__this_16 == (System_Collections_Generic_List_object__o *)0x0) {
LAB_0424f763:
              __this_15.fields.m_Object.fields._dictionary =
                   (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIStack_80;
              __this_15.fields._0_8_ = local_88;
              __this_15.fields.m_Object.fields._8_8_ = local_78;
              __this_15.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcStack_70;
              __this_15.fields.m_Object.fields._current.fields.value = (Il2CppObject *)local_68;
              __this_15.fields.m_Object.fields._32_8_ = pIStack_60;
              __this_15.fields.m_Array.fields._list =
                   (System_Collections_Generic_List_T__o *)local_58;
              __this_15.fields.m_Array.fields._8_8_ = _Stack_50.rgctx_data;
              __this_15.fields.m_Array.fields._current = local_48.genericMethod;
              SVar16 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                                 (__this_15,(MethodInfo *)&stack0xffffffffffffff28);
              if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar11 = SimpleJSONFixed_JSONNode__op_Implicit(SVar16,(MethodInfo *)0x0);
              if (pSVar11 != (SimpleJSONFixed_JSONNode_o *)0x0) {
LAB_0424f796:
                (*(pSVar11->klass->vtable)._9_get_Value.methodPtr)
                          (pSVar11,(pSVar11->klass->vtable)._9_get_Value.method);
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              goto LAB_0424f75e;
            }
            do {
              __this_07.fields.m_Object.fields._dictionary =
                   (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar18;
              __this_07.fields._0_8_ = pIVar17;
              __this_07.fields.m_Object.fields._8_8_ = pIVar19;
              __this_07.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar20;
              __this_07.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar21;
              __this_07.fields.m_Object.fields._32_8_ = pIVar22;
              __this_07.fields.m_Array.fields._list =
                   (System_Collections_Generic_List_T__o *)ppIVar23;
              __this_07.fields.m_Array.fields._8_8_ = _Var24.rgctx_data;
              __this_07.fields.m_Array.fields._current = _Var25.genericMethod;
              SVar16 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                                 (__this_07,(MethodInfo *)&stack0xffffffffffffff28);
              if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar11 = SimpleJSONFixed_JSONNode__op_Implicit(SVar16,(MethodInfo *)0x0);
              if (pSVar11 == (SimpleJSONFixed_JSONNode_o *)0x0) goto LAB_0424f75e;
              pIVar12 = (Il2CppObject *)
                        (*(pSVar11->klass->vtable)._9_get_Value.methodPtr)
                                  (pSVar11,(pSVar11->klass->vtable)._9_get_Value.method);
              bVar9 = System_Collections_Generic_List<object>__Contains
                                (__this_16,pIVar12,MethodInfo_Boolean_Contains);
              if ((char)bVar9 != '\0') {
                pIVar12 = (Il2CppObject *)
                          (*(pSVar11->klass->vtable)._9_get_Value.methodPtr)
                                    (pSVar11,(pSVar11->klass->vtable)._9_get_Value.method);
                System_Collections_Generic_List<object>__Remove(__this_16,pIVar12,MethodInfo_Boolean_Remove);
              }
              __this_06.fields.m_Object.fields._dictionary =
                   (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar18;
              __this_06.fields._0_8_ = pIVar17;
              __this_06.fields.m_Object.fields._8_8_ = pIVar19;
              __this_06.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar20;
              __this_06.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar21;
              __this_06.fields.m_Object.fields._32_8_ = pIVar22;
              __this_06.fields.m_Array.fields._list =
                   (System_Collections_Generic_List_T__o *)ppIVar23;
              __this_06.fields.m_Array.fields._8_8_ = _Var24.rgctx_data;
              __this_06.fields.m_Array.fields._current = _Var25.genericMethod;
              bVar9 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                                (__this_06,(MethodInfo *)&stack0xffffffffffffff28);
            } while ((char)bVar9 != '\0');
          }
        }
      }
      else {
        if (__this_16 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_0424f75e;
        piVar1 = &(__this_16->fields)._version;
        *piVar1 = *piVar1 + 1;
        iVar4 = (__this_16->fields)._size;
        (__this_16->fields)._size = 0;
        if (0 < iVar4) {
          System_Array__Clear((System_Array_o *)(__this_16->fields)._items,0,iVar4,(MethodInfo *)0x0
                             );
        }
        plVar10 = (long *)(*(a->klass->vtable)._7_get_Item.methodPtr)
                                    (a,"IncludedModes",(a->klass->vtable)._7_get_Item.method);
        if (plVar10 == (long *)0x0) goto LAB_0424f75e;
        (**(code **)(*plVar10 + 0x338))(&local_88,plVar10,*(undefined8 *)(*plVar10 + 0x340));
        __this_02.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIStack_80;
        __this_02.fields._0_8_ = local_88;
        __this_02.fields.m_Object.fields._8_8_ = local_78;
        __this_02.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcStack_70;
        __this_02.fields.m_Object.fields._current.fields.value = (Il2CppObject *)local_68;
        __this_02.fields.m_Object.fields._32_8_ = pIStack_60;
        __this_02.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)local_58;
        __this_02.fields.m_Array.fields._8_8_ = _Stack_50.rgctx_data;
        __this_02.fields.m_Array.fields._current = local_48.genericMethod;
        bVar9 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                          (__this_02,(MethodInfo *)&stack0xffffffffffffff28);
        cVar8 = (char)bVar9;
        pIVar17 = local_88;
        pIVar18 = pIStack_80;
        pIVar19 = local_78;
        pcVar20 = pcStack_70;
        pIVar21 = local_68;
        pIVar22 = pIStack_60;
        ppIVar23 = local_58;
        _Var24 = _Stack_50;
        _Var25 = local_48;
        while (cVar8 != '\0') {
          __this_04.fields.m_Object.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar18;
          __this_04.fields._0_8_ = pIVar17;
          __this_04.fields.m_Object.fields._8_8_ = pIVar19;
          __this_04.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar20;
          __this_04.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar21;
          __this_04.fields.m_Object.fields._32_8_ = pIVar22;
          __this_04.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar23;
          __this_04.fields.m_Array.fields._8_8_ = _Var24.rgctx_data;
          __this_04.fields.m_Array.fields._current = _Var25.genericMethod;
          SVar16 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                             (__this_04,(MethodInfo *)&stack0xffffffffffffff28);
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar11 = SimpleJSONFixed_JSONNode__op_Implicit(SVar16,(MethodInfo *)0x0);
          if (pSVar11 == (SimpleJSONFixed_JSONNode_o *)0x0) goto LAB_0424f75e;
          pIVar12 = (Il2CppObject *)
                    (*(pSVar11->klass->vtable)._9_get_Value.methodPtr)
                              (pSVar11,(pSVar11->klass->vtable)._9_get_Value.method);
          lVar7 = MethodInfo_Void_Add;
          piVar1 = &(__this_16->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar5 = (__this_16->fields)._items;
          if (pSVar5 == (System_Object_array *)0x0) goto LAB_0424f75e;
          uVar2 = (__this_16->fields)._size;
          if (uVar2 < (uint)pSVar5->max_length) {
            (__this_16->fields)._size = uVar2 + 1;
            pSVar5->m_Items[(int)uVar2] = pIVar12;
            il2cpp_runtime_glue(pSVar5->m_Items + (int)uVar2,pIVar12);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      (__this_16,pIVar12,
                       *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
          }
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
          bVar9 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                            (__this_03,(MethodInfo *)&stack0xffffffffffffff28);
          cVar8 = (char)bVar9;
        }
      }
    }
  }
  pMVar15 = TypeInfo_BuiltinLevels;
  if (*(int *)((long)&TypeInfo_BuiltinLevels[2].parameters + 4) == 0) {
    il2cpp_init_class();
  }
  pSVar13 = Map_BuiltinLevels__GetCustomModes(pMVar15);
  if (pSVar13 != (System_String_array *)0x0) {
    if (__this_16 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (0 < (int)pSVar13->max_length) {
      uVar14 = 0;
      if ((pSVar13->max_length & 0xffffffff) != 0) {
        do {
          pSVar6 = pSVar13->m_Items[uVar14];
          bVar9 = System_Collections_Generic_List<object>__Contains
                            (__this_16,(Il2CppObject *)pSVar6,MethodInfo_Boolean_Contains);
          lVar7 = MethodInfo_Void_Add;
          if ((char)bVar9 == '\0') {
            piVar1 = &(__this_16->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar5 = (__this_16->fields)._items;
            if (pSVar5 == (System_Object_array *)0x0) goto LAB_0424f75e;
            uVar2 = (__this_16->fields)._size;
            if (uVar2 < (uint)pSVar5->max_length) {
              (__this_16->fields)._size = uVar2 + 1;
              pSVar5->m_Items[(int)uVar2] = (Il2CppObject *)pSVar6;
              il2cpp_runtime_glue(pSVar5->m_Items + (int)uVar2,pSVar6);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        (__this_16,(Il2CppObject *)pSVar6,
                         *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70))
              ;
            }
          }
          uVar14 = uVar14 + 1;
          uVar2 = (uint)pSVar13->max_length;
          if ((long)(int)uVar2 <= (long)uVar14) goto LAB_0424f6c9;
        } while (uVar14 < uVar2);
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
LAB_0424f6c9:
    if (__this_16 != (System_Collections_Generic_List_object__o *)0x0) {
      pSVar13 = (System_String_array *)
                System_Collections_Generic_List<object>__ToArray(__this_16,MethodInfo_String___ToArray);
      return pSVar13;
    }
  }
LAB_0424f75e:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Map.BuiltinLevels$$LoadMiscSettings
// il2cpp: void Map_BuiltinLevels__LoadMiscSettings (System_String_o* category, System_String_o* mapName, System_String_o* gameMode, Settings_InGameMiscSettings_o* settings, const MethodInfo* method);
// 0x424fd40

void Map_BuiltinLevels__LoadMiscSettings
               (System_String_o *category,System_String_o *mapName,System_String_o *gameMode,
               Settings_InGameMiscSettings_o *settings,MethodInfo *method)

{
  byte bVar1;
  System_Collections_Specialized_OrderedDictionary_o *pSVar2;
  Il2CppClass **ppIVar3;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_00;
  byte bVar4;
  bool_conflict bVar5;
  int32_t value;
  System_Collections_Generic_Dictionary_string__JSONNode__o *__this_01;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_02;
  Il2CppObject *pIVar6;
  Settings_TypedSetting_T__o *__this_03;
  Il2CppObject *pIVar7;
  Settings_InGameMiscSettings_o *method_00;
  float value_00;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *pSVar8;
  Il2CppType *pIVar9;
  Il2CppObject *pIVar10;
  undefined1 local_48 [16];
  Il2CppObject *local_38;
  
  method_00 = settings;
  if (DAT_05705218 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BaseSetting);
    il2cpp_init_method_metadata(&TypeInfo_BoolSetting);
    il2cpp_init_method_metadata(&TypeInfo_BuiltinLevels);
    il2cpp_init_method_metadata(&MethodInfo_JSONNode_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Current);
    il2cpp_init_method_metadata(&TypeInfo_FloatSetting);
    il2cpp_init_method_metadata(&TypeInfo_IntSetting);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
    il2cpp_init_method_metadata(&TypeInfo_StringSetting);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    DAT_05705218 = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this_01 = Map_BuiltinLevels__GetMiscSettings(category,mapName,gameMode,(MethodInfo *)method_00);
  if (__this_01 != (System_Collections_Generic_Dictionary_string__JSONNode__o *)0x0) {
    __this_02 = System_Collections_Generic_Dictionary<object__object>__get_Keys
                          ((System_Collections_Generic_Dictionary_object__object__o *)__this_01,
                           MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S);
    if (__this_02 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0) {
      System_Collections_Generic_Dictionary_KeyCollection<object__object>__GetEnumerator
                ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                 local_48,__this_02,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
      pSVar8 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *)
               local_48._0_8_;
      pIVar9 = (Il2CppType *)local_48._8_8_;
      while( true ) {
        do {
          while( true ) {
            while( true ) {
              while( true ) {
                do {
                  do {
                    pIVar7 = local_38;
                    __this.fields._8_8_ = pIVar9;
                    __this.fields._dictionary =
                         (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar8;
                    __this.fields._currentKey = pIVar7;
                    bVar5 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__MoveNext
                                      (__this,(MethodInfo_31D0850 *)&stack0xffffffffffffff98);
                    if ((char)bVar5 == '\0') {
                      __this_00.fields._8_8_ = pIVar9;
                      __this_00.fields._dictionary =
                           (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar8;
                      __this_00.fields._currentKey = pIVar7;
                      System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__Dispose
                                (__this_00,(MethodInfo_31D0840 *)&stack0xffffffffffffff98);
                      return;
                    }
                    pIVar10 = pIVar7;
                    pIVar6 = System_Collections_Generic_Dictionary<object__object>__get_Item
                                       ((System_Collections_Generic_Dictionary_object__object__o *)
                                        __this_01,pIVar7,MethodInfo_JSONNode_get_Item);
                    if (settings == (Settings_InGameMiscSettings_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                      il2cpp_raise_exception();
                    }
                    pSVar2 = (settings->fields).Settings;
                    if (pSVar2 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                      il2cpp_raise_exception();
                    }
                    bVar5 = System_Collections_Specialized_OrderedDictionary__Contains
                                      (pSVar2,pIVar7,(MethodInfo *)0x0);
                    local_38 = pIVar10;
                  } while ((char)bVar5 == '\0');
                  pSVar2 = (settings->fields).Settings;
                  if (pSVar2 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  __this_03 = (Settings_TypedSetting_T__o *)
                              System_Collections_Specialized_OrderedDictionary__get_Item
                                        (pSVar2,pIVar7,(MethodInfo *)0x0);
                  local_38 = pIVar10;
                } while (__this_03 == (Settings_TypedSetting_T__o *)0x0);
                bVar1 = (__this_03->klass->_2).naturalAligment;
                bVar4 = (TypeInfo_BaseSetting->_2).naturalAligment;
                if ((bVar1 < bVar4) ||
                   (ppIVar3 = (__this_03->klass->_2).typeHierarchy,
                   ppIVar3[(ulong)bVar4 - 1] != TypeInfo_BaseSetting)) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_unwind_resume(__this_03);
                }
                bVar4 = (TypeInfo_BoolSetting->_2).naturalAligment;
                if ((bVar1 < bVar4) || (ppIVar3[(ulong)bVar4 - 1] != TypeInfo_BoolSetting)) break;
                if (pIVar6 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                bVar4 = (*pIVar6->klass->vtable[0x27].methodPtr)
                                  (pIVar6,pIVar6->klass->vtable[0x27].method);
                bVar1 = (TypeInfo_BoolSetting->_2).naturalAligment;
                if (((__this_03->klass->_2).naturalAligment < bVar1) ||
                   ((__this_03->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_BoolSetting)) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_unwind_resume(__this_03);
                }
                Settings_TypedSetting<bool>__set_Value
                          ((Settings_TypedSetting_bool__o *)__this_03,(uint)bVar4,MethodInfo_Void_set_Value);
                local_38 = pIVar10;
              }
              bVar4 = (TypeInfo_IntSetting->_2).naturalAligment;
              if ((bVar1 < bVar4) || (ppIVar3[(ulong)bVar4 - 1] != TypeInfo_IntSetting)) break;
              if (pIVar6 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              value = (*pIVar6->klass->vtable[0x23].methodPtr)
                                (pIVar6,pIVar6->klass->vtable[0x23].method);
              bVar1 = (TypeInfo_IntSetting->_2).naturalAligment;
              if (((__this_03->klass->_2).naturalAligment < bVar1) ||
                 ((__this_03->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_IntSetting)) {
                    /* WARNING: Subroutine does not return */
                il2cpp_unwind_resume(__this_03);
              }
              Settings_TypedSetting<int>__set_Value
                        ((Settings_TypedSetting_int__o *)__this_03,value,MethodInfo_Void_set_Value);
              local_38 = pIVar10;
            }
            bVar4 = (TypeInfo_FloatSetting->_2).naturalAligment;
            if ((bVar1 < bVar4) || (ppIVar3[(ulong)bVar4 - 1] != TypeInfo_FloatSetting)) break;
            if (pIVar6 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            value_00 = (float)(*pIVar6->klass->vtable[0x25].methodPtr)
                                        (pIVar6,pIVar6->klass->vtable[0x25].method);
            bVar1 = (TypeInfo_FloatSetting->_2).naturalAligment;
            if (((__this_03->klass->_2).naturalAligment < bVar1) ||
               ((__this_03->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_FloatSetting)) {
                    /* WARNING: Subroutine does not return */
              il2cpp_unwind_resume(__this_03);
            }
            Settings_TypedSetting<float>__set_Value
                      ((Settings_TypedSetting_float__o *)__this_03,value_00,MethodInfo_Void_set_Value);
            local_38 = pIVar10;
          }
          bVar4 = (TypeInfo_StringSetting->_2).naturalAligment;
        } while ((bVar1 < bVar4) || (ppIVar3[(ulong)bVar4 - 1] != TypeInfo_StringSetting));
        if (pIVar6 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pIVar7 = (Il2CppObject *)
                 (*pIVar6->klass->vtable[3].methodPtr)(pIVar6,pIVar6->klass->vtable[3].method);
        bVar1 = (TypeInfo_StringSetting->_2).naturalAligment;
        if (((__this_03->klass->_2).naturalAligment < bVar1) ||
           ((__this_03->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_StringSetting)) break;
        Settings_TypedSetting<object>__set_Value(__this_03,pIVar7,MethodInfo_Void_set_Value);
        local_38 = pIVar10;
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(__this_03);
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Map.BuiltinLevels$$GetTxtFiles
// il2cpp: System_String_array* Map_BuiltinLevels__GetTxtFiles (System_String_o* path, const MethodInfo* method);
// 0x424cda0

System_String_array * Map_BuiltinLevels__GetTxtFiles(System_String_o *path,MethodInfo *method)

{
  long lVar1;
  bool_conflict bVar2;
  System_String_array *pSVar3;
  System_Func_TSource__TResult__o *selector;
  System_Collections_Generic_IEnumerable_TResult__o *source;
  
  if (DAT_05705219 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_IEnumerable_1_System_String__Select_String_Strin);
    il2cpp_init_method_metadata(&MethodInfo_String___ToArray_String);
    il2cpp_init_method_metadata(&TypeInfo_Func_string__string);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&MethodInfo_String__GetTxtFiles_b__29_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    il2cpp_init_method_metadata(&"*.txt");
    DAT_05705219 = '\x01';
  }
  bVar2 = System_IO_Directory__Exists(path,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pSVar3 = System_IO_Directory__GetFiles(path,"*.txt",0,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
      selector = *(System_Func_TSource__TResult__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
    }
    else {
      selector = *(System_Func_TSource__TResult__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
    }
    if (selector == (System_Func_TSource__TResult__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_init_class();
      }
      selector = (System_Func_TSource__TResult__o *)il2cpp_runtime_glue(TypeInfo_Func_string__string);
      System_Func<object__object>___ctor();
      lVar1 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_TSource__TResult__o **)(lVar1 + 8) = selector;
      il2cpp_runtime_glue(lVar1 + 8,selector);
    }
    source = System_Linq_Enumerable__Select<object__object>
                       ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar3,selector,
                        MethodInfo_IEnumerable_1_System_String__Select_String_Strin);
    pSVar3 = (System_String_array *)
             System_Linq_Enumerable__ToArray<object>
                       ((System_Collections_Generic_IEnumerable_TSource__o *)source,MethodInfo_String___ToArray_String);
    return pSVar3;
  }
  pSVar3 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,0);
  return pSVar3;
}


// Map.BuiltinLevels$$GetClFiles
// il2cpp: System_String_array* Map_BuiltinLevels__GetClFiles (System_String_o* path, const MethodInfo* method);
// 0x424e4f0

System_String_array * Map_BuiltinLevels__GetClFiles(System_String_o *path,MethodInfo *method)

{
  long lVar1;
  bool_conflict bVar2;
  System_String_array *pSVar3;
  System_Func_TSource__TResult__o *selector;
  System_Collections_Generic_IEnumerable_TResult__o *source;
  
  if (DAT_0570521a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_IEnumerable_1_System_String__Select_String_Strin);
    il2cpp_init_method_metadata(&MethodInfo_String___ToArray_String);
    il2cpp_init_method_metadata(&TypeInfo_Func_string__string);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&MethodInfo_String__GetClFiles_b__30_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    il2cpp_init_method_metadata(&"*.cl");
    DAT_0570521a = '\x01';
  }
  bVar2 = System_IO_Directory__Exists(path,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pSVar3 = System_IO_Directory__GetFiles(path,"*.cl",0,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
      selector = *(System_Func_TSource__TResult__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
    }
    else {
      selector = *(System_Func_TSource__TResult__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
    }
    if (selector == (System_Func_TSource__TResult__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_init_class();
      }
      selector = (System_Func_TSource__TResult__o *)il2cpp_runtime_glue(TypeInfo_Func_string__string);
      System_Func<object__object>___ctor();
      lVar1 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_TSource__TResult__o **)(lVar1 + 0x10) = selector;
      il2cpp_runtime_glue(lVar1 + 0x10,selector);
    }
    source = System_Linq_Enumerable__Select<object__object>
                       ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar3,selector,
                        MethodInfo_IEnumerable_1_System_String__Select_String_Strin);
    pSVar3 = (System_String_array *)
             System_Linq_Enumerable__ToArray<object>
                       ((System_Collections_Generic_IEnumerable_TSource__o *)source,MethodInfo_String___ToArray_String);
    return pSVar3;
  }
  pSVar3 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,0);
  return pSVar3;
}


// Map.BuiltinLevels$$GetAddonFiles
// il2cpp: System_String_array* Map_BuiltinLevels__GetAddonFiles (System_String_o* path, const MethodInfo* method);
// 0x424e350

System_String_array * Map_BuiltinLevels__GetAddonFiles(System_String_o *path,MethodInfo *method)

{
  long lVar1;
  bool_conflict bVar2;
  System_String_array *pSVar3;
  System_Func_TSource__TResult__o *selector;
  System_Collections_Generic_IEnumerable_TResult__o *source;
  
  if (DAT_0570521b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_IEnumerable_1_System_String__Select_String_Strin);
    il2cpp_init_method_metadata(&MethodInfo_String___ToArray_String);
    il2cpp_init_method_metadata(&TypeInfo_Func_string__string);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&MethodInfo_String__GetAddonFiles_b__31_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    il2cpp_init_method_metadata(&"*.addon");
    DAT_0570521b = '\x01';
  }
  bVar2 = System_IO_Directory__Exists(path,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pSVar3 = System_IO_Directory__GetFiles(path,"*.addon",0,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
      selector = *(System_Func_TSource__TResult__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
    }
    else {
      selector = *(System_Func_TSource__TResult__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
    }
    if (selector == (System_Func_TSource__TResult__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_init_class();
      }
      selector = (System_Func_TSource__TResult__o *)il2cpp_runtime_glue(TypeInfo_Func_string__string);
      System_Func<object__object>___ctor();
      lVar1 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_TSource__TResult__o **)(lVar1 + 0x18) = selector;
      il2cpp_runtime_glue(lVar1 + 0x18,selector);
    }
    source = System_Linq_Enumerable__Select<object__object>
                       ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar3,selector,
                        MethodInfo_IEnumerable_1_System_String__Select_String_Strin);
    pSVar3 = (System_String_array *)
             System_Linq_Enumerable__ToArray<object>
                       ((System_Collections_Generic_IEnumerable_TSource__o *)source,MethodInfo_String___ToArray_String);
    return pSVar3;
  }
  pSVar3 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,0);
  return pSVar3;
}


// Map.BuiltinLevels$$GetCustomModes
// il2cpp: System_String_array* Map_BuiltinLevels__GetCustomModes (const MethodInfo* method);
// 0x424f970

System_String_array * Map_BuiltinLevels__GetCustomModes(MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  System_Object_array *pSVar3;
  long lVar4;
  bool_conflict bVar5;
  System_Collections_Generic_List_object__o *__this;
  System_Collections_Generic_HashSet_object__o *__this_00;
  System_String_array *pSVar6;
  System_String_array *pSVar7;
  System_String_o *pSVar8;
  undefined8 *puVar9;
  uint uVar10;
  uint uVar11;
  MethodInfo *method_00;
  
  if (DAT_0570521c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinLevels);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_String___ToArray);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&".txt");
    il2cpp_init_method_metadata(&".cl");
    il2cpp_init_method_metadata(&"");
    DAT_0570521c = '\x01';
  }
  __this = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_string);
  System_Collections_Generic_List<object>___ctor(__this,MethodInfo_List_1_System_String);
  __this_00 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  method_00 = MethodInfo_HashSet_1_System_String;
  System_Collections_Generic_HashSet<object>___ctor(__this_00,(MethodInfo_335BBE0 *)MethodInfo_HashSet_1_System_String);
  if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar6 = Map_BuiltinLevels__GetClFiles
                     (*(System_String_o **)(*(long *)(TypeInfo_BuiltinLevels + 0xb8) + 0x18),method_00);
  pSVar7 = Map_BuiltinLevels__GetTxtFiles
                     (*(System_String_o **)(*(long *)(TypeInfo_BuiltinLevels + 0xb8) + 0x18),method_00);
  if (pSVar6 != (System_String_array *)0x0) {
    uVar10 = (uint)pSVar6->max_length;
    if (__this == (System_Collections_Generic_List_object__o *)0x0) {
      if (0 < (int)uVar10) {
        pSVar8 = pSVar6->m_Items[0];
        if (pSVar8 == (System_String_o *)0x0) goto LAB_0424fd11;
        puVar9 = &".cl";
        goto LAB_0424fd1d;
      }
    }
    else if (0 < (int)uVar10) {
      uVar11 = 0;
      do {
        if (uVar10 <= uVar11) goto LAB_0424fcf0;
        if (pSVar6->m_Items[(int)uVar11] == (System_String_o *)0x0) goto LAB_0424fd11;
        pSVar8 = System_String__Replace
                           (pSVar6->m_Items[(int)uVar11],".cl","",(MethodInfo *)0x0
                           );
        lVar4 = MethodInfo_Void_Add;
        piVar1 = &(__this->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar3 = (__this->fields)._items;
        if (pSVar3 == (System_Object_array *)0x0) goto LAB_0424fd11;
        uVar10 = (__this->fields)._size;
        if (uVar10 < (uint)pSVar3->max_length) {
          (__this->fields)._size = uVar10 + 1;
          pSVar3->m_Items[(int)uVar10] = (Il2CppObject *)pSVar8;
          il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar10,pSVar8);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    (__this,(Il2CppObject *)pSVar8,
                     *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
        }
        if (__this_00 == (System_Collections_Generic_HashSet_object__o *)0x0) goto LAB_0424fd11;
        System_Collections_Generic_HashSet<object>__Add
                  (__this_00,(Il2CppObject *)pSVar8,MethodInfo_Boolean_Add);
        uVar11 = uVar11 + 1;
        uVar10 = (uint)pSVar6->max_length;
      } while ((int)uVar11 < (int)uVar10);
    }
    if (pSVar7 != (System_String_array *)0x0) {
      iVar2 = (int)pSVar7->max_length;
      if (__this_00 == (System_Collections_Generic_HashSet_object__o *)0x0) {
        if (0 < iVar2) {
          pSVar8 = pSVar7->m_Items[0];
          if (pSVar8 != (System_String_o *)0x0) {
            puVar9 = &".txt";
LAB_0424fd1d:
            System_String__Replace(pSVar8,(System_String_o *)*puVar9,"",(MethodInfo *)0x0)
            ;
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          goto LAB_0424fd11;
        }
      }
      else if (0 < iVar2) {
        uVar10 = 0;
        if (iVar2 != 0) {
          do {
            if (pSVar7->m_Items[(int)uVar10] == (System_String_o *)0x0) goto LAB_0424fd11;
            pSVar8 = System_String__Replace
                               (pSVar7->m_Items[(int)uVar10],".txt","",
                                (MethodInfo *)0x0);
            bVar5 = System_Collections_Generic_HashSet<object>__Contains
                              (__this_00,(Il2CppObject *)pSVar8,MethodInfo_Boolean_Contains);
            lVar4 = MethodInfo_Void_Add;
            if ((char)bVar5 == '\0') {
              if (__this == (System_Collections_Generic_List_object__o *)0x0) goto LAB_0424fd11;
              piVar1 = &(__this->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar3 = (__this->fields)._items;
              if (pSVar3 == (System_Object_array *)0x0) goto LAB_0424fd11;
              uVar11 = (__this->fields)._size;
              if (uVar11 < (uint)pSVar3->max_length) {
                (__this->fields)._size = uVar11 + 1;
                pSVar3->m_Items[(int)uVar11] = (Il2CppObject *)pSVar8;
                il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar11,pSVar8);
              }
              else {
                System_Collections_Generic_List<object>__AddWithResize
                          (__this,(Il2CppObject *)pSVar8,
                           *(MethodInfo_35A7350 **)
                            (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
              }
              System_Collections_Generic_HashSet<object>__Add
                        (__this_00,(Il2CppObject *)pSVar8,MethodInfo_Boolean_Add);
            }
            uVar10 = uVar10 + 1;
            uVar11 = (uint)pSVar7->max_length;
            if ((int)uVar11 <= (int)uVar10) goto LAB_0424fccb;
          } while (uVar10 < uVar11);
        }
LAB_0424fcf0:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
LAB_0424fccb:
      if (__this != (System_Collections_Generic_List_object__o *)0x0) {
        pSVar6 = (System_String_array *)
                 System_Collections_Generic_List<object>__ToArray(__this,MethodInfo_String___ToArray);
        return pSVar6;
      }
    }
  }
LAB_0424fd11:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Map.BuiltinLevels$$GetMiscSettings
// il2cpp: System_Collections_Generic_Dictionary_string__JSONNode__o* Map_BuiltinLevels__GetMiscSettings (System_String_o* category, System_String_o* mapName, System_String_o* gameMode, const MethodInfo* method);
// 0x4250380

System_Collections_Generic_Dictionary_string__JSONNode__o *
Map_BuiltinLevels__GetMiscSettings
          (System_String_o *category,System_String_o *mapName,System_String_o *gameMode,
          MethodInfo *method)

{
  char cVar1;
  bool_conflict bVar2;
  SimpleJSONFixed_JSONNode_o *a;
  SimpleJSONFixed_JSONNode_o *a_00;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *pMVar3;
  undefined1 auVar4 [16];
  
  pMVar3 = (MethodInfo *)gameMode;
  if (DAT_0570521d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinLevels);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_SimpleJSONFixed_JSONN);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&"MiscSettings");
    DAT_0570521d = '\x01';
    pMVar3 = extraout_RDX;
  }
  if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
    il2cpp_init_class();
    pMVar3 = extraout_RDX_00;
  }
  a = Map_BuiltinLevels__GetMap(category,mapName,pMVar3);
  a_00 = Map_BuiltinLevels__GetGameMode(gameMode,(MethodInfo *)mapName);
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           il2cpp_runtime_glue(TypeInfo_Dictionary_string__JSONNode);
  System_Collections_Generic_Dictionary<object__object>___ctor(__this,MethodInfo_Dictionary_2_System_String_SimpleJSONFixed_JSONN);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = SimpleJSONFixed_JSONNode__op_Inequality(a_00,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    if (a_00 == (SimpleJSONFixed_JSONNode_o *)0x0) goto LAB_04250551;
    cVar1 = (*(a_00->klass->vtable)._28_HasKey.methodPtr)
                      (a_00,"MiscSettings",(a_00->klass->vtable)._28_HasKey.method);
    if (cVar1 != '\0') {
      auVar4 = (*(a_00->klass->vtable)._7_get_Item.methodPtr)
                         (a_00,"MiscSettings",(a_00->klass->vtable)._7_get_Item.method);
      pMVar3 = auVar4._8_8_;
      if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
        il2cpp_init_class();
        pMVar3 = extraout_RDX_01;
      }
      Map_BuiltinLevels__LoadSettings
                ((System_Collections_Generic_Dictionary_string__JSONNode__o *)__this,auVar4._0_8_,
                 pMVar3);
    }
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = SimpleJSONFixed_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    if (a == (SimpleJSONFixed_JSONNode_o *)0x0) {
LAB_04250551:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    cVar1 = (*(a->klass->vtable)._28_HasKey.methodPtr)
                      (a,"MiscSettings",(a->klass->vtable)._28_HasKey.method);
    if (cVar1 != '\0') {
      auVar4 = (*(a->klass->vtable)._7_get_Item.methodPtr)
                         (a,"MiscSettings",(a->klass->vtable)._7_get_Item.method);
      pMVar3 = auVar4._8_8_;
      if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
        il2cpp_init_class();
        pMVar3 = extraout_RDX_02;
      }
      Map_BuiltinLevels__LoadSettings
                ((System_Collections_Generic_Dictionary_string__JSONNode__o *)__this,auVar4._0_8_,
                 pMVar3);
    }
  }
  return (System_Collections_Generic_Dictionary_string__JSONNode__o *)__this;
}


// Map.BuiltinLevels$$GetMap
// il2cpp: SimpleJSONFixed_JSONNode_o* Map_BuiltinLevels__GetMap (System_String_o* category, System_String_o* mapName, const MethodInfo* method);
// 0x424bb30

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
  SimpleJSONFixed_JSONNode_o *pSVar3;
  SimpleJSONFixed_JSONNode_o *pSVar4;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o SVar5;
  undefined8 in_stack_fffffffffffffee8;
  Il2CppMethodPointer pIVar6;
  Il2CppMethodPointer pIVar7;
  InvokerMethod pIVar8;
  char *pcVar9;
  Il2CppClass *pIVar10;
  Il2CppType *pIVar11;
  SimpleJSONFixed_JSONNode_o *pSVar12;
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
  
  if (DAT_0570521e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinLevels);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&"MapCategories");
    il2cpp_init_method_metadata(&"Maps");
    il2cpp_init_method_metadata(&"Name");
    DAT_0570521e = '\x01';
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
    il2cpp_init_class();
  }
  plVar2 = (long *)**(long **)(TypeInfo_BuiltinLevels + 0xb8);
  if ((plVar2 != (long *)0x0) &&
     (plVar2 = (long *)(**(code **)(*plVar2 + 0x1a8))
                                 (plVar2,"MapCategories",*(undefined8 *)(*plVar2 + 0x1b0)),
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
    pIVar6 = local_c0;
    pIVar7 = pIStack_b8;
    pIVar8 = local_b0;
    pcVar9 = pcStack_a8;
    pIVar10 = local_a0;
    pIVar11 = pIStack_98;
    pSVar12 = local_90;
    bVar1 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                      (__this,(MethodInfo *)&stack0xfffffffffffffef8);
    if ((char)bVar1 != '\0') {
      do {
        __this_01.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)category;
        __this_01.fields._0_8_ = in_stack_fffffffffffffee8;
        __this_01.fields.m_Object.fields._8_8_ = pIVar6;
        __this_01.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIVar7;
        __this_01.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar8;
        __this_01.fields.m_Object.fields._32_8_ = pcVar9;
        __this_01.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pIVar10;
        __this_01.fields.m_Array.fields._8_8_ = pIVar11;
        __this_01.fields.m_Array.fields._current = pSVar12;
        SVar5 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                          (__this_01,(MethodInfo *)&stack0xfffffffffffffef8);
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar3 = SimpleJSONFixed_JSONNode__op_Implicit(SVar5,(MethodInfo *)0x0);
        if (pSVar3 == (SimpleJSONFixed_JSONNode_o *)0x0) goto LAB_0424be5b;
        pSVar4 = (SimpleJSONFixed_JSONNode_o *)
                 (*(pSVar3->klass->vtable)._7_get_Item.methodPtr)
                           (pSVar3,"Name",(pSVar3->klass->vtable)._7_get_Item.method);
        bVar1 = SimpleJSONFixed_JSONNode__op_Equality
                          (pSVar4,(Il2CppObject *)category,(MethodInfo *)0x0);
        if ((char)bVar1 != '\0') {
          plVar2 = (long *)(*(pSVar3->klass->vtable)._7_get_Item.methodPtr)
                                     (pSVar3,"Maps",(pSVar3->klass->vtable)._7_get_Item.method
                                     );
          if (plVar2 == (long *)0x0) goto LAB_0424be5b;
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
                __this_02.fields.m_Object.fields._8_8_ = pIVar6,
                __this_02.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIVar7,
                __this_02.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar8,
                __this_02.fields.m_Object.fields._32_8_ = pcVar9,
                __this_02.fields.m_Array.fields._list =
                     (System_Collections_Generic_List_T__o *)pIVar10,
                __this_02.fields.m_Array.fields._8_8_ = pIVar11,
                __this_02.fields.m_Array.fields._current = pSVar12,
                bVar1 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                                  (__this_02,(MethodInfo *)&local_78), (char)bVar1 != '\0') {
            __this_03.fields.m_Object.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)category;
            __this_03.fields._0_8_ = in_stack_fffffffffffffee8;
            __this_03.fields.m_Object.fields._8_8_ = pIVar6;
            __this_03.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIVar7;
            __this_03.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar8;
            __this_03.fields.m_Object.fields._32_8_ = pcVar9;
            __this_03.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pIVar10;
            __this_03.fields.m_Array.fields._8_8_ = pIVar11;
            __this_03.fields.m_Array.fields._current = pSVar12;
            SVar5 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                              (__this_03,(MethodInfo *)&local_78);
            if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar3 = SimpleJSONFixed_JSONNode__op_Implicit(SVar5,(MethodInfo *)0x0);
            if (pSVar3 == (SimpleJSONFixed_JSONNode_o *)0x0) goto LAB_0424be5b;
            pSVar4 = (SimpleJSONFixed_JSONNode_o *)
                     (*(pSVar3->klass->vtable)._7_get_Item.methodPtr)
                               (pSVar3,"Name",(pSVar3->klass->vtable)._7_get_Item.method);
            bVar1 = SimpleJSONFixed_JSONNode__op_Equality
                              (pSVar4,(Il2CppObject *)mapName,(MethodInfo *)0x0);
            if ((char)bVar1 != '\0') {
              return pSVar3;
            }
          }
        }
        __this_00.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)category;
        __this_00.fields._0_8_ = in_stack_fffffffffffffee8;
        __this_00.fields.m_Object.fields._8_8_ = pIVar6;
        __this_00.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIVar7;
        __this_00.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar8;
        __this_00.fields.m_Object.fields._32_8_ = pcVar9;
        __this_00.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pIVar10;
        __this_00.fields.m_Array.fields._8_8_ = pIVar11;
        __this_00.fields.m_Array.fields._current = pSVar12;
        bVar1 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                          (__this_00,(MethodInfo *)&stack0xfffffffffffffef8);
      } while ((char)bVar1 != '\0');
    }
    return (SimpleJSONFixed_JSONNode_o *)0x0;
  }
LAB_0424be5b:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Map.BuiltinLevels$$GetCategory
// il2cpp: SimpleJSONFixed_JSONNode_o* Map_BuiltinLevels__GetCategory (System_String_o* category, const MethodInfo* method);
// 0x424f7b0

SimpleJSONFixed_JSONNode_o *
Map_BuiltinLevels__GetCategory(System_String_o *category,MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_Enumerator_o __this;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_00;
  bool_conflict bVar1;
  long *plVar2;
  SimpleJSONFixed_JSONNode_o *pSVar3;
  SimpleJSONFixed_JSONNode_o *a;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o aKeyValue;
  Il2CppMethodPointer pIVar4;
  Il2CppMethodPointer pIVar5;
  InvokerMethod pIVar6;
  char *pcVar7;
  Il2CppClass *pIVar8;
  Il2CppType *pIVar9;
  Il2CppType **ppIVar10;
  _union_13 _Var11;
  _union_14 _Var12;
  Il2CppMethodPointer local_78;
  Il2CppMethodPointer pIStack_70;
  InvokerMethod local_68;
  char *pcStack_60;
  Il2CppClass *local_58;
  Il2CppType *pIStack_50;
  Il2CppType **local_48;
  _union_13 _Stack_40;
  _union_14 local_38;
  
  if (DAT_0570521f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinLevels);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&"MapCategories");
    il2cpp_init_method_metadata(&"Name");
    DAT_0570521f = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
    il2cpp_init_class();
  }
  plVar2 = (long *)**(long **)(TypeInfo_BuiltinLevels + 0xb8);
  if ((plVar2 != (long *)0x0) &&
     (plVar2 = (long *)(**(code **)(*plVar2 + 0x1a8))
                                 (plVar2,"MapCategories",*(undefined8 *)(*plVar2 + 0x1b0)),
     plVar2 != (long *)0x0)) {
    (**(code **)(*plVar2 + 0x338))(&local_78,plVar2,*(undefined8 *)(*plVar2 + 0x340));
    pIVar4 = local_78;
    pIVar5 = pIStack_70;
    pIVar6 = local_68;
    pcVar7 = pcStack_60;
    pIVar8 = local_58;
    pIVar9 = pIStack_50;
    ppIVar10 = local_48;
    _Var11 = _Stack_40;
    _Var12 = local_38;
    while( true ) {
      __this.fields.m_Object.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar5;
      __this.fields._0_8_ = pIVar4;
      __this.fields.m_Object.fields._8_8_ = pIVar6;
      __this.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar7;
      __this.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar8;
      __this.fields.m_Object.fields._32_8_ = pIVar9;
      __this.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar10;
      __this.fields.m_Array.fields._8_8_ = _Var11.rgctx_data;
      __this.fields.m_Array.fields._current = _Var12.genericMethod;
      bVar1 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                        (__this,(MethodInfo *)&stack0xffffffffffffff38);
      if ((char)bVar1 == '\0') {
        return (SimpleJSONFixed_JSONNode_o *)0x0;
      }
      __this_00.fields.m_Object.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar5;
      __this_00.fields._0_8_ = pIVar4;
      __this_00.fields.m_Object.fields._8_8_ = pIVar6;
      __this_00.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar7;
      __this_00.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar8;
      __this_00.fields.m_Object.fields._32_8_ = pIVar9;
      __this_00.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar10;
      __this_00.fields.m_Array.fields._8_8_ = _Var11.rgctx_data;
      __this_00.fields.m_Array.fields._current = _Var12.genericMethod;
      aKeyValue = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                            (__this_00,(MethodInfo *)&stack0xffffffffffffff38);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar3 = SimpleJSONFixed_JSONNode__op_Implicit(aKeyValue,(MethodInfo *)0x0);
      if (pSVar3 == (SimpleJSONFixed_JSONNode_o *)0x0) break;
      a = (SimpleJSONFixed_JSONNode_o *)
          (*(pSVar3->klass->vtable)._7_get_Item.methodPtr)
                    (pSVar3,"Name",(pSVar3->klass->vtable)._7_get_Item.method);
      bVar1 = SimpleJSONFixed_JSONNode__op_Equality(a,(Il2CppObject *)category,(MethodInfo *)0x0);
      if ((char)bVar1 != '\0') {
        return pSVar3;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Map.BuiltinLevels$$GetGameMode
// il2cpp: SimpleJSONFixed_JSONNode_o* Map_BuiltinLevels__GetGameMode (System_String_o* gameMode, const MethodInfo* method);
// 0x4250560

SimpleJSONFixed_JSONNode_o *
Map_BuiltinLevels__GetGameMode(System_String_o *gameMode,MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_Enumerator_o __this;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_00;
  bool_conflict bVar1;
  long *plVar2;
  SimpleJSONFixed_JSONNode_o *pSVar3;
  SimpleJSONFixed_JSONNode_o *a;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o aKeyValue;
  Il2CppMethodPointer pIVar4;
  Il2CppMethodPointer pIVar5;
  InvokerMethod pIVar6;
  char *pcVar7;
  Il2CppClass *pIVar8;
  Il2CppType *pIVar9;
  Il2CppType **ppIVar10;
  _union_13 _Var11;
  _union_14 _Var12;
  Il2CppMethodPointer local_78;
  Il2CppMethodPointer pIStack_70;
  InvokerMethod local_68;
  char *pcStack_60;
  Il2CppClass *local_58;
  Il2CppType *pIStack_50;
  Il2CppType **local_48;
  _union_13 _Stack_40;
  _union_14 local_38;
  
  if (DAT_05705220 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinLevels);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&"Name");
    il2cpp_init_method_metadata(&"GameModes");
    DAT_05705220 = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
    il2cpp_init_class();
  }
  plVar2 = (long *)**(long **)(TypeInfo_BuiltinLevels + 0xb8);
  if ((plVar2 != (long *)0x0) &&
     (plVar2 = (long *)(**(code **)(*plVar2 + 0x1a8))
                                 (plVar2,"GameModes",*(undefined8 *)(*plVar2 + 0x1b0)),
     plVar2 != (long *)0x0)) {
    (**(code **)(*plVar2 + 0x338))(&local_78,plVar2,*(undefined8 *)(*plVar2 + 0x340));
    pIVar4 = local_78;
    pIVar5 = pIStack_70;
    pIVar6 = local_68;
    pcVar7 = pcStack_60;
    pIVar8 = local_58;
    pIVar9 = pIStack_50;
    ppIVar10 = local_48;
    _Var11 = _Stack_40;
    _Var12 = local_38;
    while( true ) {
      __this.fields.m_Object.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar5;
      __this.fields._0_8_ = pIVar4;
      __this.fields.m_Object.fields._8_8_ = pIVar6;
      __this.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar7;
      __this.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar8;
      __this.fields.m_Object.fields._32_8_ = pIVar9;
      __this.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar10;
      __this.fields.m_Array.fields._8_8_ = _Var11.rgctx_data;
      __this.fields.m_Array.fields._current = _Var12.genericMethod;
      bVar1 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                        (__this,(MethodInfo *)&stack0xffffffffffffff38);
      if ((char)bVar1 == '\0') {
        return (SimpleJSONFixed_JSONNode_o *)0x0;
      }
      __this_00.fields.m_Object.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar5;
      __this_00.fields._0_8_ = pIVar4;
      __this_00.fields.m_Object.fields._8_8_ = pIVar6;
      __this_00.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar7;
      __this_00.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar8;
      __this_00.fields.m_Object.fields._32_8_ = pIVar9;
      __this_00.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar10;
      __this_00.fields.m_Array.fields._8_8_ = _Var11.rgctx_data;
      __this_00.fields.m_Array.fields._current = _Var12.genericMethod;
      aKeyValue = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                            (__this_00,(MethodInfo *)&stack0xffffffffffffff38);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar3 = SimpleJSONFixed_JSONNode__op_Implicit(aKeyValue,(MethodInfo *)0x0);
      if (pSVar3 == (SimpleJSONFixed_JSONNode_o *)0x0) break;
      a = (SimpleJSONFixed_JSONNode_o *)
          (*(pSVar3->klass->vtable)._7_get_Item.methodPtr)
                    (pSVar3,"Name",(pSVar3->klass->vtable)._7_get_Item.method);
      bVar1 = SimpleJSONFixed_JSONNode__op_Equality(a,(Il2CppObject *)gameMode,(MethodInfo *)0x0);
      if ((char)bVar1 != '\0') {
        return pSVar3;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Map.BuiltinLevels$$LoadSettings
// il2cpp: void Map_BuiltinLevels__LoadSettings (System_Collections_Generic_Dictionary_string__JSONNode__o* current, SimpleJSONFixed_JSONNode_o* node, const MethodInfo* method);
// 0x4250720

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
  Il2CppObject *value;
  Il2CppMethodPointer pIVar2;
  Il2CppMethodPointer pIVar3;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar4;
  InvokerMethod pIVar5;
  char *pcVar6;
  Il2CppObject *pIVar7;
  Il2CppClass *pIVar8;
  Il2CppType *pIVar9;
  Il2CppType **ppIVar10;
  System_Collections_Generic_List_T__o *pSVar11;
  _union_13 _Var12;
  _union_14 _Var13;
  Il2CppMethodPointer local_c0;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSStack_b8;
  InvokerMethod local_b0;
  Il2CppObject *pIStack_a8;
  Il2CppClass *local_a0;
  Il2CppType *pIStack_98;
  System_Collections_Generic_List_T__o *local_90;
  _union_13 _Stack_88;
  _union_14 local_80;
  Il2CppMethodPointer local_78;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSStack_70;
  InvokerMethod local_68;
  Il2CppObject *pIStack_60;
  Il2CppClass *local_58;
  Il2CppType *pIStack_50;
  System_Collections_Generic_List_T__o *local_48;
  _union_13 _Stack_40;
  _union_14 local_38;
  
  if (DAT_05705221 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    DAT_05705221 = '\x01';
  }
  ppIVar10 = (Il2CppType **)0x0;
  _Var12.rgctx_data = (Il2CppRGCTXData *)0x0;
  pIVar8 = (Il2CppClass *)0x0;
  pIVar9 = (Il2CppType *)0x0;
  pIVar5 = (InvokerMethod)0x0;
  pcVar6 = (char *)0x0;
  pIVar2 = (Il2CppMethodPointer)0x0;
  pIVar3 = (Il2CppMethodPointer)0x0;
  _Var13.genericMethod = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_48 = (System_Collections_Generic_List_T__o *)0x0;
  _Stack_40.rgctx_data = (Il2CppRGCTXData *)0x0;
  local_58 = (Il2CppClass *)0x0;
  pIStack_50 = (Il2CppType *)0x0;
  local_68 = (InvokerMethod)0x0;
  pIStack_60 = (Il2CppObject *)0x0;
  local_78 = (Il2CppMethodPointer)0x0;
  pSStack_70 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_38.genericMethod = (void *)0x0;
  if (node == (SimpleJSONFixed_JSONNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
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
  __this.fields.m_Enumerator.fields.m_Object.fields._dictionary =
       (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar3;
  __this.fields.m_Enumerator.fields._0_8_ = pIVar2;
  __this.fields.m_Enumerator.fields.m_Object.fields._8_8_ = pIVar5;
  __this.fields.m_Enumerator.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar6;
  __this.fields.m_Enumerator.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar8;
  __this.fields.m_Enumerator.fields.m_Object.fields._32_8_ = pIVar9;
  __this.fields.m_Enumerator.fields.m_Array.fields._list =
       (System_Collections_Generic_List_T__o *)ppIVar10;
  __this.fields.m_Enumerator.fields.m_Array.fields._8_8_ = _Var12.rgctx_data;
  __this.fields.m_Enumerator.fields.m_Array.fields._current = _Var13.genericMethod;
  SimpleJSONFixed_JSONNode_KeyEnumerator__GetEnumerator
            ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_c0,__this,(MethodInfo *)&local_78);
  __this_00.fields.m_Enumerator.fields.m_Object.fields._dictionary = pSStack_b8;
  __this_00.fields.m_Enumerator.fields._0_8_ = local_c0;
  __this_00.fields.m_Enumerator.fields.m_Object.fields._8_8_ = local_b0;
  __this_00.fields.m_Enumerator.fields.m_Object.fields._current.fields.key = pIStack_a8;
  __this_00.fields.m_Enumerator.fields.m_Object.fields._current.fields.value =
       (Il2CppObject *)local_a0;
  __this_00.fields.m_Enumerator.fields.m_Object.fields._32_8_ = pIStack_98;
  __this_00.fields.m_Enumerator.fields.m_Array.fields._list = local_90;
  __this_00.fields.m_Enumerator.fields.m_Array.fields._8_8_ = _Stack_88.rgctx_data;
  __this_00.fields.m_Enumerator.fields.m_Array.fields._current = local_80.genericMethod;
  bVar1 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                    (__this_00,(MethodInfo *)&stack0xfffffffffffffef8);
  if ((char)bVar1 != '\0') {
    pIVar2 = local_c0;
    pSVar4 = pSStack_b8;
    pIVar5 = local_b0;
    pIVar7 = pIStack_a8;
    pIVar8 = local_a0;
    pIVar9 = pIStack_98;
    pSVar11 = local_90;
    _Var12 = _Stack_88;
    _Var13 = local_80;
    if (current == (System_Collections_Generic_Dictionary_string__JSONNode__o *)0x0) {
      __this_03.fields.m_Enumerator.fields.m_Object.fields._dictionary = pSStack_b8;
      __this_03.fields.m_Enumerator.fields._0_8_ = local_c0;
      __this_03.fields.m_Enumerator.fields.m_Object.fields._8_8_ = local_b0;
      __this_03.fields.m_Enumerator.fields.m_Object.fields._current.fields.key = pIStack_a8;
      __this_03.fields.m_Enumerator.fields.m_Object.fields._current.fields.value =
           (Il2CppObject *)local_a0;
      __this_03.fields.m_Enumerator.fields.m_Object.fields._32_8_ = pIStack_98;
      __this_03.fields.m_Enumerator.fields.m_Array.fields._list = local_90;
      __this_03.fields.m_Enumerator.fields.m_Array.fields._8_8_ = _Stack_88.rgctx_data;
      __this_03.fields.m_Enumerator.fields.m_Array.fields._current = local_80.genericMethod;
      SimpleJSONFixed_JSONNode_KeyEnumerator__get_Current
                (__this_03,(MethodInfo *)&stack0xfffffffffffffef8);
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    do {
      __this_02.fields.m_Enumerator.fields.m_Object.fields._dictionary = pSVar4;
      __this_02.fields.m_Enumerator.fields._0_8_ = pIVar2;
      __this_02.fields.m_Enumerator.fields.m_Object.fields._8_8_ = pIVar5;
      __this_02.fields.m_Enumerator.fields.m_Object.fields._current.fields.key = pIVar7;
      __this_02.fields.m_Enumerator.fields.m_Object.fields._current.fields.value =
           (Il2CppObject *)pIVar8;
      __this_02.fields.m_Enumerator.fields.m_Object.fields._32_8_ = pIVar9;
      __this_02.fields.m_Enumerator.fields.m_Array.fields._list = pSVar11;
      __this_02.fields.m_Enumerator.fields.m_Array.fields._8_8_ = _Var12.rgctx_data;
      __this_02.fields.m_Enumerator.fields.m_Array.fields._current = _Var13.genericMethod;
      key = SimpleJSONFixed_JSONNode_KeyEnumerator__get_Current
                      (__this_02,(MethodInfo *)&stack0xfffffffffffffef8);
      bVar1 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                        ((System_Collections_Generic_Dictionary_object__object__o *)current,
                         (Il2CppObject *)key,MethodInfo_Boolean_ContainsKey);
      value = (Il2CppObject *)
              (*(node->klass->vtable)._7_get_Item.methodPtr)
                        (node,key,(node->klass->vtable)._7_get_Item.method);
      if ((char)bVar1 == '\0') {
        System_Collections_Generic_Dictionary<object__object>__Add
                  ((System_Collections_Generic_Dictionary_object__object__o *)current,
                   (Il2CppObject *)key,value,MethodInfo_Void_Add);
      }
      else {
        System_Collections_Generic_Dictionary<object__object>__set_Item
                  ((System_Collections_Generic_Dictionary_object__object__o *)current,
                   (Il2CppObject *)key,value,MethodInfo_Void_set_Item);
      }
      __this_01.fields.m_Enumerator.fields.m_Object.fields._dictionary = pSVar4;
      __this_01.fields.m_Enumerator.fields._0_8_ = pIVar2;
      __this_01.fields.m_Enumerator.fields.m_Object.fields._8_8_ = pIVar5;
      __this_01.fields.m_Enumerator.fields.m_Object.fields._current.fields.key = pIVar7;
      __this_01.fields.m_Enumerator.fields.m_Object.fields._current.fields.value =
           (Il2CppObject *)pIVar8;
      __this_01.fields.m_Enumerator.fields.m_Object.fields._32_8_ = pIVar9;
      __this_01.fields.m_Enumerator.fields.m_Array.fields._list = pSVar11;
      __this_01.fields.m_Enumerator.fields.m_Array.fields._8_8_ = _Var12.rgctx_data;
      __this_01.fields.m_Enumerator.fields.m_Array.fields._current = _Var13.genericMethod;
      bVar1 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                        (__this_01,(MethodInfo *)&stack0xfffffffffffffef8);
    } while ((char)bVar1 != '\0');
  }
  return;
}


// Map.BuiltinLevels$$.ctor
// il2cpp: void Map_BuiltinLevels___ctor (Map_BuiltinLevels_o* __this, const MethodInfo* method);
// 0x4250930

void Map_BuiltinLevels___ctor(Map_BuiltinLevels_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Map.BuiltinLevels$$.cctor
// il2cpp: void Map_BuiltinLevels___cctor (const MethodInfo* method);
// 0x4250940

void Map_BuiltinLevels___cctor(MethodInfo *method)

{
  long lVar1;
  
  if (DAT_05705222 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinLevels);
    il2cpp_init_method_metadata(&TypeInfo_FolderPaths);
    il2cpp_init_method_metadata(&"Map Logic");
    DAT_05705222 = '\x01';
  }
  if (*(int *)(TypeInfo_FolderPaths + 0xe4) == 0) {
    il2cpp_init_class();
  }
  lVar1 = *(long *)(TypeInfo_BuiltinLevels + 0xb8);
  *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x60);
  il2cpp_runtime_glue(lVar1 + 8);
  lVar1 = *(long *)(TypeInfo_BuiltinLevels + 0xb8);
  *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x68);
  il2cpp_runtime_glue(lVar1 + 0x10);
  lVar1 = *(long *)(TypeInfo_BuiltinLevels + 0xb8);
  *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x50);
  il2cpp_runtime_glue(lVar1 + 0x18);
  lVar1 = *(long *)(TypeInfo_BuiltinLevels + 0xb8);
  *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x58);
  il2cpp_runtime_glue(lVar1 + 0x20);
  lVar1 = *(long *)(TypeInfo_BuiltinLevels + 0xb8);
  *(undefined8 *)(lVar1 + 0x28) = "Map Logic";
  il2cpp_runtime_glue(lVar1 + 0x28);
  return;
}


