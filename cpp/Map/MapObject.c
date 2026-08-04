// Type: Map.MapObject
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Map/MapObject.cs
// Prior real C# source (older reference): Assets/Scripts/Map/MapObject.cs
// --------------------------------

// Map.MapObject$$.ctor
// il2cpp: void Map_MapObject___ctor (Map_MapObject_o* __this, int32_t parent, UnityEngine_GameObject_o* gameObject, Map_MapScriptBaseObject_o* scriptObject, const MethodInfo* method);
// 0x40b4670

void Map_MapObject___ctor
               (Map_MapObject_o *__this,int32_t parent,UnityEngine_GameObject_o *gameObject,
               Map_MapScriptBaseObject_o *scriptObject,MethodInfo *method)

{
  UnityEngine_GameObject_o **ppUVar1;
  int32_t *piVar2;
  uint uVar3;
  UnityEngine_GameObject_o *pUVar4;
  System_Object_array *pSVar5;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  bool_conflict bVar6;
  System_Collections_Generic_List_CustomLogicComponentInstance__o *__this_04;
  UnityEngine_Collider_array *item;
  UnityEngine_Renderer_array *pUVar7;
  System_String_o *a;
  long *plVar8;
  undefined8 uVar9;
  Utility_BaseCSVRow_o *__this_05;
  Map_MapScriptBaseMaterial_o *__this_06;
  Utility_BaseCSVRow_c *pUVar10;
  long lVar11;
  UnityEngine_Collider_array *b;
  UnityEngine_Collider_array **ppUVar12;
  System_Collections_Generic_List_object__o *__this_07;
  undefined1 auVar13 [12];
  System_Collections_Generic_List_T__o *pSVar14;
  Il2CppMethodPointer pIVar15;
  Il2CppObject *pIVar16;
  
  if (g_data_057ac4dc == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_GetComponentsInChildren_Collider);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_GetComponentsInChildren_Renderer);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_CustomLogic_CustomLogicComponentInstance);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_CustomLogicComponentInstance);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Renderer);
    g_data_057ac4dc = '\x01';
  }
  __this_04 = (System_Collections_Generic_List_CustomLogicComponentInstance__o *)
              il2cpp_runtime_helper_023052d0(TypeInfo_List_CustomLogicComponentInstance);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_04,MethodInfo_List_1_CustomLogic_CustomLogicComponentInstance);
  (__this->fields).ComponentInstances = __this_04;
  il2cpp_runtime_helper_022b4080(&(__this->fields).ComponentInstances);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).Parent = parent;
  ppUVar1 = &(__this->fields).GameObject;
  (__this->fields).GameObject = gameObject;
  il2cpp_runtime_helper_022b4080(ppUVar1,gameObject);
  (__this->fields).ScriptObject = scriptObject;
  item = (UnityEngine_Collider_array *)scriptObject;
  il2cpp_runtime_helper_022b4080(&(__this->fields).ScriptObject);
  pUVar4 = (__this->fields).GameObject;
  ppUVar12 = (UnityEngine_Collider_array **)0x0;
  if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
    item = (UnityEngine_Collider_array *)
           UnityEngine_GameObject__GetComponentsInChildren_object__255ab00(pUVar4,MethodInfo_Collider_GetComponentsInChildren_Collider);
    ppUVar12 = &(__this->fields).colliderCache;
    (__this->fields).colliderCache = item;
    il2cpp_runtime_helper_022b4080();
    if (scriptObject != (Map_MapScriptBaseObject_o *)0x0) {
      if (*(char *)((long)&(scriptObject->fields).Active + 1) == '\0') {
        pUVar4 = *ppUVar1;
        ppUVar12 = (UnityEngine_Collider_array **)0x0;
        if (pUVar4 == (UnityEngine_GameObject_o *)0x0) goto label_040b47af;
        pUVar7 = (UnityEngine_Renderer_array *)
                 UnityEngine_GameObject__GetComponentsInChildren_object__255ab00(pUVar4,MethodInfo_Renderer_GetComponentsInChildren_Renderer);
      }
      else {
        pUVar7 = (UnityEngine_Renderer_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Renderer,0);
      }
      (__this->fields).renderCache = pUVar7;
      il2cpp_runtime_helper_022b4080(&(__this->fields).renderCache,pUVar7);
      return;
    }
  }
label_040b47af:
  il2cpp_runtime_helper_022b2c90();
  b = item;
  if (g_data_057ac4dd == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    g_data_057ac4dd = '\x01';
  }
  lVar11 = MethodInfo_Void_Add;
  __this_07 = (System_Collections_Generic_List_object__o *)ppUVar12[7];
  if (__this_07 != (System_Collections_Generic_List_object__o *)0x0) {
    piVar2 = &(__this_07->fields)._version;
    *piVar2 = *piVar2 + 1;
    pSVar5 = (__this_07->fields)._items;
    if (pSVar5 != (System_Object_array *)0x0) {
      uVar3 = (__this_07->fields)._size;
      if (uVar3 < (uint)pSVar5->max_length) {
        (__this_07->fields)._size = uVar3 + 1;
        pSVar5->m_Items[(int)uVar3] = &item->obj;
        il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar3,item);
        return;
      }
      System_Collections_Generic_List_object___AddWithResize
                (__this_07,&item->obj,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac4de == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicComponentInstance_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_CustomLogic_CustomLogicComponentInst);
    g_data_057ac4de = '\x01';
  }
  pSVar14 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar15 = (Il2CppMethodPointer)0x0;
  pIVar16 = (Il2CppObject *)0x0;
  pSVar5 = __this_07[1].fields._items;
  if (pSVar5 == (System_Object_array *)0x0) {
label_040b4969:
    auVar13 = il2cpp_runtime_helper_022b2c90();
    uVar9 = auVar13._0_8_;
    if (auVar13._8_4_ == 1) {
      plVar8 = (long *)__cxa_begin_catch(uVar9);
      lVar11 = *plVar8;
      __cxa_end_catch();
      __this_02.fields._8_8_ = pIVar15;
      __this_02.fields._list = pSVar14;
      __this_02.fields._current = pIVar16;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff78);
      if (lVar11 == 0) {
        return;
      }
      uVar9 = il2cpp_runtime_helper_022fefe0(lVar11);
    }
    else {
      lVar11 = 0;
    }
    __this_03.fields._8_8_ = pIVar15;
    __this_03.fields._list = pSVar14;
    __this_03.fields._current = pIVar16;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff78);
    if (lVar11 == 0) {
      _Unwind_Resume(uVar9);
    }
    __this_05 = (Utility_BaseCSVRow_o *)il2cpp_runtime_helper_022fefe0(lVar11);
    il2cpp_runtime_helper_01f66400();
    if (g_data_057ac4ea == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Map_MapScriptComponent);
      il2cpp_runtime_helper_023445d0(&TypeInfo_List_MapScriptComponent);
      il2cpp_runtime_helper_023445d0(&TypeInfo_MapObjectCollideMode);
      il2cpp_runtime_helper_023445d0(&TypeInfo_MapObjectCollideWith);
      il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptBaseMaterial);
      il2cpp_runtime_helper_023445d0(&"Default");
      il2cpp_runtime_helper_023445d0(&"Scene");
      g_data_057ac4ea = '\x01';
    }
    if (*(int *)(TypeInfo_MapObjectCollideMode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_05[6].klass = (Utility_BaseCSVRow_c *)**(undefined8 **)(TypeInfo_MapObjectCollideMode + 0xb8);
    il2cpp_runtime_helper_022b4080(__this_05 + 6);
    if (*(int *)(TypeInfo_MapObjectCollideWith + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_05[6].monitor = *(void **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x30);
    il2cpp_runtime_helper_022b4080(&__this_05[6].monitor);
    pUVar10 = "Default";
    __this_05[7].klass = "Default";
    il2cpp_runtime_helper_022b4080(__this_05 + 7);
    __this_06 = (Map_MapScriptBaseMaterial_o *)il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptBaseMaterial);
    Map_MapScriptBaseMaterial___ctor(__this_06,(MethodInfo *)pUVar10);
    __this_05[7].monitor = __this_06;
    il2cpp_runtime_helper_022b4080(&__this_05[7].monitor,__this_06);
    pUVar10 = (Utility_BaseCSVRow_c *)il2cpp_runtime_helper_023052d0(TypeInfo_List_MapScriptComponent);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)pUVar10,MethodInfo_List_1_Map_MapScriptComponent);
    __this_05[8].klass = pUVar10;
    il2cpp_runtime_helper_022b4080(__this_05 + 8,pUVar10);
    if (g_data_057ac4e4 == '\0') {
      il2cpp_runtime_helper_023445d0(&"None");
      il2cpp_runtime_helper_023445d0(&"Unnamed");
      g_data_057ac4e4 = '\x01';
    }
    __this_05[1].monitor = "None";
    il2cpp_runtime_helper_022b4080(&__this_05[1].monitor);
    *(undefined2 *)&__this_05[2].monitor = 0x101;
    *(undefined1 *)((long)&__this_05[2].monitor + 2) = 1;
    __this_05[3].klass = "Unnamed";
    il2cpp_runtime_helper_022b4080(__this_05 + 3);
    __this_05[5].klass = (Utility_BaseCSVRow_c *)0x3f8000003f800000;
    *(undefined4 *)&__this_05[5].monitor = 0x3f800000;
    Utility_BaseCSVRow___ctor(__this_05,(MethodInfo *)0x0);
    __this_05[1].klass = "Scene";
    il2cpp_runtime_helper_022b4080(__this_05 + 1);
    return;
  }
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffff78,
             (System_Collections_Generic_List_object__o *)pSVar5,MethodInfo_List_1_T_Enumerator_CustomLogic_CustomLogicComponentInst);
  do {
    __this_00.fields._8_8_ = pIVar15;
    __this_00.fields._list = pSVar14;
    __this_00.fields._current = pIVar16;
    bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffff78);
    if ((char)bVar6 == '\0') break;
    if (pIVar16 == (Il2CppObject *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      goto label_040b4969;
    }
    a = (System_String_o *)(*pIVar16->klass->vtable[4].methodPtr)(pIVar16,pIVar16->klass->vtable[4].method);
    bVar6 = System_String__op_Equality(a,(System_String_o *)b,(MethodInfo *)0x0);
  } while ((char)bVar6 == '\0');
  __this_01.fields._8_8_ = pIVar15;
  __this_01.fields._list = pSVar14;
  __this_01.fields._current = pIVar16;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffff78);
  return;
}


// Map.MapObject$$RegisterComponentInstance
// il2cpp: void Map_MapObject__RegisterComponentInstance (Map_MapObject_o* __this, CustomLogic_CustomLogicComponentInstance_o* instance, const MethodInfo* method);
// 0x40b47c0

void Map_MapObject__RegisterComponentInstance
               (Map_MapObject_o *__this,CustomLogic_CustomLogicComponentInstance_o *instance,
               MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  CustomLogic_CustomLogicComponentInstance_array *pCVar3;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  bool_conflict bVar4;
  System_String_o *a;
  long *plVar5;
  undefined8 uVar6;
  Utility_BaseCSVRow_o *__this_04;
  Map_MapScriptBaseMaterial_o *__this_05;
  Utility_BaseCSVRow_c *pUVar7;
  long lVar8;
  CustomLogic_CustomLogicComponentInstance_o *b;
  System_Collections_Generic_List_CustomLogicComponentInstance__o *__this_06;
  undefined1 auVar9 [12];
  System_Collections_Generic_List_T__o *pSVar10;
  Il2CppMethodPointer pIVar11;
  Il2CppObject *pIVar12;
  
  b = instance;
  if (g_data_057ac4dd == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    g_data_057ac4dd = '\x01';
  }
  lVar8 = MethodInfo_Void_Add;
  __this_06 = (__this->fields).ComponentInstances;
  if (__this_06 != (System_Collections_Generic_List_CustomLogicComponentInstance__o *)0x0) {
    piVar1 = &(__this_06->fields)._version;
    *piVar1 = *piVar1 + 1;
    pCVar3 = (__this_06->fields)._items;
    if (pCVar3 != (CustomLogic_CustomLogicComponentInstance_array *)0x0) {
      uVar2 = (__this_06->fields)._size;
      if (uVar2 < (uint)pCVar3->max_length) {
        (__this_06->fields)._size = uVar2 + 1;
        pCVar3->m_Items[(int)uVar2] = instance;
        il2cpp_runtime_helper_022b4080(pCVar3->m_Items + (int)uVar2,instance);
        return;
      }
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_06,(Il2CppObject *)instance,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac4de == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicComponentInstance_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_CustomLogic_CustomLogicComponentInst);
    g_data_057ac4de = '\x01';
  }
  pSVar10 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar11 = (Il2CppMethodPointer)0x0;
  pIVar12 = (Il2CppObject *)0x0;
  pCVar3 = __this_06[1].fields._items;
  if (pCVar3 == (CustomLogic_CustomLogicComponentInstance_array *)0x0) {
label_040b4969:
    auVar9 = il2cpp_runtime_helper_022b2c90();
    uVar6 = auVar9._0_8_;
    if (auVar9._8_4_ == 1) {
      plVar5 = (long *)__cxa_begin_catch(uVar6);
      lVar8 = *plVar5;
      __cxa_end_catch();
      __this_02.fields._8_8_ = pIVar11;
      __this_02.fields._list = pSVar10;
      __this_02.fields._current = pIVar12;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa0);
      if (lVar8 == 0) {
        return;
      }
      uVar6 = il2cpp_runtime_helper_022fefe0(lVar8);
    }
    else {
      lVar8 = 0;
    }
    __this_03.fields._8_8_ = pIVar11;
    __this_03.fields._list = pSVar10;
    __this_03.fields._current = pIVar12;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa0);
    if (lVar8 == 0) {
      _Unwind_Resume(uVar6);
    }
    __this_04 = (Utility_BaseCSVRow_o *)il2cpp_runtime_helper_022fefe0(lVar8);
    il2cpp_runtime_helper_01f66400();
    if (g_data_057ac4ea == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Map_MapScriptComponent);
      il2cpp_runtime_helper_023445d0(&TypeInfo_List_MapScriptComponent);
      il2cpp_runtime_helper_023445d0(&TypeInfo_MapObjectCollideMode);
      il2cpp_runtime_helper_023445d0(&TypeInfo_MapObjectCollideWith);
      il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptBaseMaterial);
      il2cpp_runtime_helper_023445d0(&"Default");
      il2cpp_runtime_helper_023445d0(&"Scene");
      g_data_057ac4ea = '\x01';
    }
    if (*(int *)(TypeInfo_MapObjectCollideMode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_04[6].klass = (Utility_BaseCSVRow_c *)**(undefined8 **)(TypeInfo_MapObjectCollideMode + 0xb8);
    il2cpp_runtime_helper_022b4080(__this_04 + 6);
    if (*(int *)(TypeInfo_MapObjectCollideWith + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_04[6].monitor = *(void **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x30);
    il2cpp_runtime_helper_022b4080(&__this_04[6].monitor);
    pUVar7 = "Default";
    __this_04[7].klass = "Default";
    il2cpp_runtime_helper_022b4080(__this_04 + 7);
    __this_05 = (Map_MapScriptBaseMaterial_o *)il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptBaseMaterial);
    Map_MapScriptBaseMaterial___ctor(__this_05,(MethodInfo *)pUVar7);
    __this_04[7].monitor = __this_05;
    il2cpp_runtime_helper_022b4080(&__this_04[7].monitor,__this_05);
    pUVar7 = (Utility_BaseCSVRow_c *)il2cpp_runtime_helper_023052d0(TypeInfo_List_MapScriptComponent);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)pUVar7,MethodInfo_List_1_Map_MapScriptComponent);
    __this_04[8].klass = pUVar7;
    il2cpp_runtime_helper_022b4080(__this_04 + 8,pUVar7);
    if (g_data_057ac4e4 == '\0') {
      il2cpp_runtime_helper_023445d0(&"None");
      il2cpp_runtime_helper_023445d0(&"Unnamed");
      g_data_057ac4e4 = '\x01';
    }
    __this_04[1].monitor = "None";
    il2cpp_runtime_helper_022b4080(&__this_04[1].monitor);
    *(undefined2 *)&__this_04[2].monitor = 0x101;
    *(undefined1 *)((long)&__this_04[2].monitor + 2) = 1;
    __this_04[3].klass = "Unnamed";
    il2cpp_runtime_helper_022b4080(__this_04 + 3);
    __this_04[5].klass = (Utility_BaseCSVRow_c *)0x3f8000003f800000;
    *(undefined4 *)&__this_04[5].monitor = 0x3f800000;
    Utility_BaseCSVRow___ctor(__this_04,(MethodInfo *)0x0);
    __this_04[1].klass = "Scene";
    il2cpp_runtime_helper_022b4080(__this_04 + 1);
    return;
  }
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffa0,
             (System_Collections_Generic_List_object__o *)pCVar3,MethodInfo_List_1_T_Enumerator_CustomLogic_CustomLogicComponentInst);
  do {
    __this_00.fields._8_8_ = pIVar11;
    __this_00.fields._list = pSVar10;
    __this_00.fields._current = pIVar12;
    bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffffa0);
    if ((char)bVar4 == '\0') break;
    if (pIVar12 == (Il2CppObject *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      goto label_040b4969;
    }
    a = (System_String_o *)(*pIVar12->klass->vtable[4].methodPtr)(pIVar12,pIVar12->klass->vtable[4].method);
    bVar4 = System_String__op_Equality(a,(System_String_o *)b,(MethodInfo *)0x0);
  } while ((char)bVar4 == '\0');
  __this_01.fields._8_8_ = pIVar11;
  __this_01.fields._list = pSVar10;
  __this_01.fields._current = pIVar12;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa0);
  return;
}


// Map.MapObject$$FindComponentInstance
// il2cpp: CustomLogic_CustomLogicComponentInstance_o* Map_MapObject__FindComponentInstance (Map_MapObject_o* __this, System_String_o* name, const MethodInfo* method);
// 0x40b4860

CustomLogic_CustomLogicComponentInstance_o *
Map_MapObject__FindComponentInstance(Map_MapObject_o *__this,System_String_o *name,MethodInfo *method)

{
  System_Collections_Generic_List_CustomLogicComponentInstance__o *__this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar1;
  System_String_o *a;
  long *plVar2;
  undefined8 uVar3;
  Utility_BaseCSVRow_o *__this_05;
  Map_MapScriptBaseMaterial_o *__this_06;
  Utility_BaseCSVRow_c *pUVar4;
  CustomLogic_CustomLogicComponentInstance_o *pCVar5;
  long lVar6;
  int iVar7;
  undefined1 auVar8 [12];
  System_Collections_Generic_List_T__o *pSVar9;
  Il2CppMethodPointer pIVar10;
  CustomLogic_CustomLogicComponentInstance_o *pCVar11;
  CustomLogic_CustomLogicComponentInstance_o *pCVar12;
  
  if (g_data_057ac4de == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicComponentInstance_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_CustomLogic_CustomLogicComponentInst);
    g_data_057ac4de = '\x01';
  }
  pSVar9 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar10 = (Il2CppMethodPointer)0x0;
  pCVar11 = (CustomLogic_CustomLogicComponentInstance_o *)0x0;
  __this_00 = (__this->fields).ComponentInstances;
  if (__this_00 != (System_Collections_Generic_List_CustomLogicComponentInstance__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffb8,
               (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T_Enumerator_CustomLogic_CustomLogicComponentInst);
    pCVar12 = pCVar11;
    do {
      pCVar11 = pCVar12;
      __this_01.fields._8_8_ = pIVar10;
      __this_01.fields._list = pSVar9;
      __this_01.fields._current = (Il2CppObject *)pCVar11;
      bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffffb8);
      if ((char)bVar1 == '\0') {
        iVar7 = 5;
        pCVar5 = (CustomLogic_CustomLogicComponentInstance_o *)0x0;
        goto label_040b493c;
      }
      if (pCVar11 == (CustomLogic_CustomLogicComponentInstance_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        goto label_040b4969;
      }
      pCVar12 = pCVar11;
      a = (System_String_o *)
          (*((Il2CppClass *)pCVar11->klass)->vtable[4].methodPtr)
                    (pCVar11,((Il2CppClass *)pCVar11->klass)->vtable[4].method);
      bVar1 = System_String__op_Equality(a,name,(MethodInfo *)0x0);
    } while ((char)bVar1 == '\0');
    iVar7 = 4;
    pCVar5 = pCVar11;
    pCVar11 = pCVar12;
label_040b493c:
    __this_02.fields._8_8_ = pIVar10;
    __this_02.fields._list = pSVar9;
    __this_02.fields._current = (Il2CppObject *)pCVar11;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb8);
label_040b494e:
    pCVar11 = (CustomLogic_CustomLogicComponentInstance_o *)0x0;
    if (iVar7 == 4) {
      pCVar11 = pCVar5;
    }
    return pCVar11;
  }
label_040b4969:
  auVar8 = il2cpp_runtime_helper_022b2c90();
  uVar3 = auVar8._0_8_;
  if (auVar8._8_4_ == 1) {
    plVar2 = (long *)__cxa_begin_catch(uVar3);
    lVar6 = *plVar2;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pIVar10;
    __this_03.fields._list = pSVar9;
    __this_03.fields._current = (Il2CppObject *)pCVar11;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb8);
    if (lVar6 == 0) {
      pCVar5 = (CustomLogic_CustomLogicComponentInstance_o *)0x0;
      iVar7 = 0;
      goto label_040b494e;
    }
    uVar3 = il2cpp_runtime_helper_022fefe0(lVar6);
  }
  else {
    lVar6 = 0;
  }
  __this_04.fields._8_8_ = pIVar10;
  __this_04.fields._list = pSVar9;
  __this_04.fields._current = (Il2CppObject *)pCVar11;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb8);
  if (lVar6 == 0) {
    _Unwind_Resume(uVar3);
  }
  __this_05 = (Utility_BaseCSVRow_o *)il2cpp_runtime_helper_022fefe0(lVar6);
  il2cpp_runtime_helper_01f66400();
  if (g_data_057ac4ea == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Map_MapScriptComponent);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_MapScriptComponent);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapObjectCollideMode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapObjectCollideWith);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptBaseMaterial);
    il2cpp_runtime_helper_023445d0(&"Default");
    il2cpp_runtime_helper_023445d0(&"Scene");
    g_data_057ac4ea = '\x01';
  }
  if (*(int *)(TypeInfo_MapObjectCollideMode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_05[6].klass = (Utility_BaseCSVRow_c *)**(undefined8 **)(TypeInfo_MapObjectCollideMode + 0xb8);
  il2cpp_runtime_helper_022b4080(__this_05 + 6);
  if (*(int *)(TypeInfo_MapObjectCollideWith + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_05[6].monitor = *(void **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x30);
  il2cpp_runtime_helper_022b4080(&__this_05[6].monitor);
  pUVar4 = "Default";
  __this_05[7].klass = "Default";
  il2cpp_runtime_helper_022b4080(__this_05 + 7);
  __this_06 = (Map_MapScriptBaseMaterial_o *)il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptBaseMaterial);
  Map_MapScriptBaseMaterial___ctor(__this_06,(MethodInfo *)pUVar4);
  __this_05[7].monitor = __this_06;
  il2cpp_runtime_helper_022b4080(&__this_05[7].monitor,__this_06);
  pUVar4 = (Utility_BaseCSVRow_c *)il2cpp_runtime_helper_023052d0(TypeInfo_List_MapScriptComponent);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pUVar4,MethodInfo_List_1_Map_MapScriptComponent);
  __this_05[8].klass = pUVar4;
  il2cpp_runtime_helper_022b4080(__this_05 + 8,pUVar4);
  if (g_data_057ac4e4 == '\0') {
    il2cpp_runtime_helper_023445d0(&"None");
    il2cpp_runtime_helper_023445d0(&"Unnamed");
    g_data_057ac4e4 = '\x01';
  }
  __this_05[1].monitor = "None";
  il2cpp_runtime_helper_022b4080(&__this_05[1].monitor);
  *(undefined2 *)&__this_05[2].monitor = 0x101;
  *(undefined1 *)((long)&__this_05[2].monitor + 2) = 1;
  __this_05[3].klass = "Unnamed";
  il2cpp_runtime_helper_022b4080(__this_05 + 3);
  __this_05[5].klass = (Utility_BaseCSVRow_c *)0x3f8000003f800000;
  *(undefined4 *)&__this_05[5].monitor = 0x3f800000;
  Utility_BaseCSVRow___ctor(__this_05,(MethodInfo *)0x0);
  __this_05[1].klass = "Scene";
  pCVar11 = (CustomLogic_CustomLogicComponentInstance_o *)il2cpp_runtime_helper_022b4080(__this_05 + 1);
  return pCVar11;
}


