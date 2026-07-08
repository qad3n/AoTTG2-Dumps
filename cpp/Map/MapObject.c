// Type: Map.MapObject
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Map/MapObject.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Map/MapObject.cs  [CHANGED since prior version]
// --------------------------------

// Map.MapObject$$.ctor
// il2cpp: void Map_MapObject___ctor (Map_MapObject_o* __this, int32_t parent, UnityEngine_GameObject_o* gameObject, Map_MapScriptBaseObject_o* scriptObject, const MethodInfo* method);
// 0x3da0a90

void Map_MapObject___ctor
               (Map_MapObject_o *__this,int32_t parent,UnityEngine_GameObject_o *gameObject,
               Map_MapScriptBaseObject_o *scriptObject,MethodInfo *method)

{
  UnityEngine_GameObject_o **ppUVar1;
  UnityEngine_GameObject_o *pUVar2;
  System_Collections_Generic_List_CustomLogicComponentInstance__o *__this_00;
  UnityEngine_Collider_array *pUVar3;
  UnityEngine_Renderer_array *pUVar4;
  
  if (DAT_057027a7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Collider___GetComponentsInChildren_Collider);
    il2cpp_init_method_metadata(&MethodInfo_Renderer___GetComponentsInChildren_Renderer);
    il2cpp_init_method_metadata(&MethodInfo_List_1_CustomLogic_CustomLogicComponentInstance);
    il2cpp_init_method_metadata(&TypeInfo_List_CustomLogicComponentInstance);
    il2cpp_init_method_metadata(&TypeInfo_Renderer);
    DAT_057027a7 = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_CustomLogicComponentInstance__o *)
              il2cpp_runtime_glue(TypeInfo_List_CustomLogicComponentInstance);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_CustomLogic_CustomLogicComponentInstance);
  (__this->fields).ComponentInstances = __this_00;
  il2cpp_runtime_glue(&(__this->fields).ComponentInstances);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).Parent = parent;
  ppUVar1 = &(__this->fields).GameObject;
  (__this->fields).GameObject = gameObject;
  il2cpp_runtime_glue(ppUVar1,gameObject);
  (__this->fields).ScriptObject = scriptObject;
  il2cpp_runtime_glue(&(__this->fields).ScriptObject,scriptObject);
  pUVar2 = (__this->fields).GameObject;
  if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
    pUVar3 = (UnityEngine_Collider_array *)
             UnityEngine_GameObject__GetComponentsInChildren<object>(pUVar2,MethodInfo_Collider___GetComponentsInChildren_Collider);
    (__this->fields).colliderCache = pUVar3;
    il2cpp_runtime_glue(&(__this->fields).colliderCache,pUVar3);
    if (scriptObject != (Map_MapScriptBaseObject_o *)0x0) {
      if (*(char *)((long)&(scriptObject->fields).Active + 1) == '\0') {
        pUVar2 = *ppUVar1;
        if (pUVar2 == (UnityEngine_GameObject_o *)0x0) goto LAB_03da0bcf;
        pUVar4 = (UnityEngine_Renderer_array *)
                 UnityEngine_GameObject__GetComponentsInChildren<object>(pUVar2,MethodInfo_Renderer___GetComponentsInChildren_Renderer);
      }
      else {
        pUVar4 = (UnityEngine_Renderer_array *)il2cpp_glue_02274930(TypeInfo_Renderer,0);
      }
      (__this->fields).renderCache = pUVar4;
      il2cpp_runtime_glue(&(__this->fields).renderCache,pUVar4);
      return;
    }
  }
LAB_03da0bcf:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Map.MapObject$$RegisterComponentInstance
// il2cpp: void Map_MapObject__RegisterComponentInstance (Map_MapObject_o* __this, CustomLogic_CustomLogicComponentInstance_o* instance, const MethodInfo* method);
// 0x3daec10

void Map_MapObject__RegisterComponentInstance
               (Map_MapObject_o *__this,CustomLogic_CustomLogicComponentInstance_o *instance,
               MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_CustomLogicComponentInstance__o *__this_00;
  CustomLogic_CustomLogicComponentInstance_array *pCVar3;
  long lVar4;
  
  if (DAT_057027a8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    DAT_057027a8 = '\x01';
  }
  lVar4 = MethodInfo_Void_Add;
  __this_00 = (__this->fields).ComponentInstances;
  if (__this_00 != (System_Collections_Generic_List_CustomLogicComponentInstance__o *)0x0) {
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pCVar3 = (__this_00->fields)._items;
    if (pCVar3 != (CustomLogic_CustomLogicComponentInstance_array *)0x0) {
      uVar2 = (__this_00->fields)._size;
      if (uVar2 < (uint)pCVar3->max_length) {
        (__this_00->fields)._size = uVar2 + 1;
        pCVar3->m_Items[(int)uVar2] = instance;
        il2cpp_runtime_glue(pCVar3->m_Items + (int)uVar2,instance);
        return;
      }
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)instance,
                 *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Map.MapObject$$FindComponentInstance
// il2cpp: CustomLogic_CustomLogicComponentInstance_o* Map_MapObject__FindComponentInstance (Map_MapObject_o* __this, System_String_o* name, const MethodInfo* method);
// 0x3daecb0

CustomLogic_CustomLogicComponentInstance_o *
Map_MapObject__FindComponentInstance
          (Map_MapObject_o *__this,System_String_o *name,MethodInfo *method)

{
  System_Collections_Generic_List_CustomLogicComponentInstance__o *__this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  bool_conflict bVar1;
  System_String_o *a;
  CustomLogic_CustomLogicComponentInstance_o *pCVar2;
  int iVar3;
  System_Collections_Generic_List_T__o *pSVar4;
  Il2CppMethodPointer pIVar5;
  CustomLogic_CustomLogicComponentInstance_o *pCVar6;
  CustomLogic_CustomLogicComponentInstance_o *pCVar7;
  
  if (DAT_057027a9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicComponentInstance_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_CustomLogic_CustomLogicComp);
    DAT_057027a9 = '\x01';
  }
  pSVar4 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar5 = (Il2CppMethodPointer)0x0;
  pCVar6 = (CustomLogic_CustomLogicComponentInstance_o *)0x0;
  __this_00 = (__this->fields).ComponentInstances;
  if (__this_00 == (System_Collections_Generic_List_CustomLogicComponentInstance__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffb8,
             (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T__Enumerator_CustomLogic_CustomLogicComp);
  do {
    pCVar7 = pCVar6;
    __this_01.fields._8_8_ = pIVar5;
    __this_01.fields._list = pSVar4;
    __this_01.fields._current = (Il2CppObject *)pCVar7;
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffffb8);
    if ((char)bVar1 == '\0') {
      iVar3 = 5;
      pCVar2 = (CustomLogic_CustomLogicComponentInstance_o *)0x0;
      goto LAB_03daed8c;
    }
    if (pCVar7 == (CustomLogic_CustomLogicComponentInstance_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pCVar6 = pCVar7;
    a = (System_String_o *)
        (*((Il2CppClass *)pCVar7->klass)->vtable[4].methodPtr)
                  (pCVar7,((Il2CppClass *)pCVar7->klass)->vtable[4].method);
    bVar1 = System_String__op_Equality(a,name,(MethodInfo *)0x0);
  } while ((char)bVar1 == '\0');
  iVar3 = 4;
  pCVar2 = pCVar7;
  pCVar7 = pCVar6;
LAB_03daed8c:
  __this_02.fields._8_8_ = pIVar5;
  __this_02.fields._list = pSVar4;
  __this_02.fields._current = (Il2CppObject *)pCVar7;
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (__this_02,(MethodInfo_3185E10 *)&stack0xffffffffffffffb8);
  pCVar6 = (CustomLogic_CustomLogicComponentInstance_o *)0x0;
  if (iVar3 == 4) {
    pCVar6 = pCVar2;
  }
  return pCVar6;
}


