// Type: Map.MapScriptObjects
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Map/MapScriptObjects.cs
// Prior real C# source (older reference): Assets/Scripts/Map/MapScript/MapScriptObjects.cs
// --------------------------------

// Map.MapScriptObjects$$DeserializeValue
// il2cpp: Il2CppObject* Map_MapScriptObjects__DeserializeValue (Map_MapScriptObjects_o* __this, System_Type_o* t, System_String_o* value, const MethodInfo* method);
// 0x40b5e10

Il2CppObject *
Map_MapScriptObjects__DeserializeValue
          (Map_MapScriptObjects_o *__this,System_Type_o *t,System_String_o *value,MethodInfo *method)

{
  uint16_t separator;
  bool_conflict bVar1;
  Map_MapScriptSceneObject_o *__this_00;
  System_String_array *pSVar2;
  undefined8 uVar3;
  MethodInfo *method_00;
  
  if (g_data_057ac4e7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseCSVObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptSceneObject);
    il2cpp_runtime_helper_023445d0(&"Scene");
    g_data_057ac4e7 = '\x01';
  }
  __this_00 = (Map_MapScriptSceneObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BaseCSVObject);
  Utility_BaseCSVObject___ctor((Utility_BaseCSVObject_o *)__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Map_MapScriptSceneObject_o *)0x0) {
    separator = (*(((Utility_BaseCSVObject_c *)__this_00->klass)->vtable)._4_get_Delimiter.methodPtr)
                          (__this_00,
                           (((Utility_BaseCSVObject_c *)__this_00->klass)->vtable)._4_get_Delimiter.method);
    if (value != (System_String_o *)0x0) {
      pSVar2 = System_String__Split(value,separator,0,(MethodInfo *)0x0);
      if (pSVar2 != (System_String_array *)0x0) {
        if ((int)pSVar2->max_length == 0) goto label_040b5f00;
        method_00 = "Scene";
        bVar1 = System_String__op_Equality
                          (pSVar2->m_Items[0],(System_String_o *)"Scene",(MethodInfo *)0x0);
        if ((char)bVar1 == '\0') {
label_040b5eda:
          (*(((Utility_BaseCSVObject_c *)__this_00->klass)->vtable)._9_Deserialize.methodPtr)
                    (__this_00,value,
                     (((Utility_BaseCSVObject_c *)__this_00->klass)->vtable)._9_Deserialize.method);
          return (Il2CppObject *)__this_00;
        }
        __this_00 = (Map_MapScriptSceneObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptSceneObject);
        Map_MapScriptSceneObject___ctor(__this_00,method_00);
        if (__this_00 != (Map_MapScriptSceneObject_o *)0x0) goto label_040b5eda;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_040b5f00:
  uVar3 = il2cpp_runtime_helper_022b2ca0();
  return (Il2CppObject *)CONCAT71((int7)((ulong)uVar3 >> 8),1);
}


// Map.MapScriptObjects$$.ctor
// il2cpp: void Map_MapScriptObjects___ctor (Map_MapScriptObjects_o* __this, const MethodInfo* method);
// 0x40b5c10

void Map_MapScriptObjects___ctor(Map_MapScriptObjects_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_MapScriptBaseObject__o *__this_00;
  
  if (g_data_057ac4e8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Map_MapScriptBaseObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_MapScriptBaseObject);
    g_data_057ac4e8 = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_MapScriptBaseObject__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_MapScriptBaseObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_Map_MapScriptBaseObject);
  (__this->fields).Objects = __this_00;
  il2cpp_runtime_helper_022b4080(&__this->fields);
  Utility_BaseCSVContainer___ctor((Utility_BaseCSVContainer_o *)__this,(MethodInfo *)0x0);
  return;
}


