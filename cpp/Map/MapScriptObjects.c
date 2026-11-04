// Type: Map.MapScriptObjects
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Map/MapScriptObjects.cs
// Prior real C# source (older reference): Assets/Scripts/Map/MapScript/MapScriptObjects.cs
// --------------------------------

// Map.MapScriptObjects$$DeserializeValue
// il2cpp: Il2CppObject* Map_MapScriptObjects__DeserializeValue (Map_MapScriptObjects_o* __this, System_Type_o* t, System_String_o* value, const MethodInfo* method);
// 0x181ed9f70

Il2CppObject *
Map_MapScriptObjects__DeserializeValue
          (Map_MapScriptObjects_o *__this,System_Type_o *t,System_String_o *value,MethodInfo *method)

{
  System_String_o *pSVar1;
  bool bVar2;
  int32_t iVar3;
  Map_MapScriptSceneObject_o *__this_00;
  System_String_array *pSVar4;
  Map_MapScriptBaseMaterial_o *__this_01;
  System_Collections_Generic_List_MapScriptComponent__o *__this_02;
  
  if (Il2CppMethodInitialized_184345107 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_BaseCSVObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptSceneObject);
    il2cpp_codegen_initialize_runtime_metadata(&"Scene");
    Il2CppMethodInitialized_184345107 = '\x01';
  }
  __this_00 = (Map_MapScriptSceneObject_o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_BaseCSVObject);
  Utility_BaseCSVObject___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Map_MapScriptSceneObject_o *)0x0) {
    iVar3 = (*(((Utility_BaseCSVObject_c *)__this_00->klass)->vtable)._4_get_Delimiter.methodPtr)(__this_00);
    if (value != (System_String_o *)0x0) {
      pSVar4 = System_String__Split(value,(uint16_t)iVar3,0,(MethodInfo *)0x0);
      if (pSVar4 != (System_String_array *)0x0) {
        if ((int)pSVar4->max_length == 0) {
          ThrowIndexOutOfRangeException();
        }
        bVar2 = System_String__op_Equality(pSVar4->m_Items[0],"Scene",(MethodInfo *)0x0);
        if (bVar2) {
          __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScriptSceneObject);
          if (Il2CppMethodInitialized_18434510a == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_System_Collections_Generic_List_MapScriptComponent_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Collections_Generic_List_MapScriptComponent);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObjectCollideMode);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObjectCollideWith);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptBaseMaterial);
            il2cpp_codegen_initialize_runtime_metadata(&"Default");
            il2cpp_codegen_initialize_runtime_metadata(&"Scene");
            Il2CppMethodInitialized_18434510a = '\x01';
          }
          if ((TypeInfo_Map_MapObjectCollideMode->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideMode);
          }
          pSVar1 = TypeInfo_Map_MapObjectCollideMode->static_fields->Physical;
          (__this_00->fields).CollideMode = pSVar1;
          Il2CppCodeGenWriteBarrier(&(__this_00->fields).CollideMode,pSVar1);
          if ((TypeInfo_Map_MapObjectCollideWith->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideWith);
          }
          pSVar1 = TypeInfo_Map_MapObjectCollideWith->static_fields->Entities;
          (__this_00->fields).CollideWith = pSVar1;
          Il2CppCodeGenWriteBarrier(&(__this_00->fields).CollideWith,pSVar1);
          (__this_00->fields).PhysicsMaterial = "Default";
          Il2CppCodeGenWriteBarrier(&(__this_00->fields).PhysicsMaterial,"Default");
          __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScriptBaseMaterial);
          Map_MapScriptBaseMaterial___ctor(__this_01,(MethodInfo *)0x0);
          (__this_00->fields).Material = __this_01;
          Il2CppCodeGenWriteBarrier(&(__this_00->fields).Material,__this_01);
          __this_02 = il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_MapScriptComponent);
          System_Collections_Generic_List_object____ctor
                    ((System_Collections_Generic_LowLevelList_T__o *)__this_02,
                     (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_MapScriptComponent_ctor);
          (__this_00->fields).Components = __this_02;
          Il2CppCodeGenWriteBarrier(&(__this_00->fields).Components,__this_02);
          Map_MapScriptBaseObject___ctor((Map_MapScriptBaseObject_o *)__this_00,(MethodInfo *)0x0);
          (__this_00->fields).Type = "Scene";
          Il2CppCodeGenWriteBarrier(&(__this_00->fields).Type,"Scene");
          if (__this_00 == (Map_MapScriptSceneObject_o *)0x0) goto label_181eda1df;
        }
        (*(((Utility_BaseCSVObject_c *)__this_00->klass)->vtable)._9_Deserialize.methodPtr)
                  (__this_00,value,
                   (((Utility_BaseCSVObject_c *)__this_00->klass)->vtable)._9_Deserialize.method);
        return (Il2CppObject *)__this_00;
      }
    }
  }
label_181eda1df:
  ThrowNullReferenceException();
}


// Map.MapScriptObjects$$.ctor
// il2cpp: void Map_MapScriptObjects___ctor (Map_MapScriptObjects_o* __this, const MethodInfo* method);
// 0x181eda1f0

void Map_MapScriptObjects___ctor(Map_MapScriptObjects_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_MapScriptBaseObject__o *__this_00;
  
  if (Il2CppMethodInitialized_184345108 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_MapScriptBaseObject);
    Il2CppMethodInitialized_184345108 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_MapScriptBaseObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_ctor);
  (__this->fields).Objects = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Objects,__this_00);
  Utility_BaseCSVContainer___ctor((Utility_BaseCSVContainer_o *)__this,(MethodInfo *)0x0);
  return;
}


