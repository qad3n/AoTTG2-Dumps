// Type: Map.MapScriptSceneObject
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Map/MapScriptSceneObject.cs
// Prior real C# source (older reference): Assets/Scripts/Map/MapScript/MapScriptSceneObject.cs
// --------------------------------

// Map.MapScriptSceneObject$$.ctor
// il2cpp: void Map_MapScriptSceneObject___ctor (Map_MapScriptSceneObject_o* __this, const MethodInfo* method);
// 0x59a1da0

void Map_MapScriptSceneObject___ctor(Map_MapScriptSceneObject_o *__this,MethodInfo *method)

{
  Map_MapScriptBaseMaterial_o *__this_00;
  MethodInfo *pMVar1;
  
  if (Il2CppMethodInitialized_07545aa3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapScriptComponent_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_MapScriptComponent);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObjectCollideMode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObjectCollideWith);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptBaseMaterial);
    il2cpp_codegen_initialize_runtime_metadata(&"Default");
    il2cpp_codegen_initialize_runtime_metadata(&"Scene");
    Il2CppMethodInitialized_07545aa3 = '\x01';
  }
  if ((TypeInfo_Map_MapObjectCollideMode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideMode);
  }
  (__this->fields).CollideMode = TypeInfo_Map_MapObjectCollideMode->static_fields->Physical;
  Il2CppCodeGenWriteBarrier(&(__this->fields).CollideMode);
  if ((TypeInfo_Map_MapObjectCollideWith->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideWith);
  }
  (__this->fields).CollideWith = TypeInfo_Map_MapObjectCollideWith->static_fields->Entities;
  Il2CppCodeGenWriteBarrier(&(__this->fields).CollideWith);
  pMVar1 = (MethodInfo *)"Default";
  (__this->fields).PhysicsMaterial = "Default";
  Il2CppCodeGenWriteBarrier(&(__this->fields).PhysicsMaterial);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScriptBaseMaterial);
  Map_MapScriptBaseMaterial___ctor(__this_00,pMVar1);
  (__this->fields).Material = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Material);
  pMVar1 = (MethodInfo *)
           il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_MapScriptComponent);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pMVar1,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_MapScriptComponent_ctor);
  (__this->fields).Components = (System_Collections_Generic_List_MapScriptComponent__o *)pMVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Components);
  Map_MapScriptBaseObject___ctor((Map_MapScriptBaseObject_o *)__this,pMVar1);
  (__this->fields).Type = "Scene";
  Il2CppCodeGenWriteBarrier(&(__this->fields).Type);
  return;
}


// Map.MapScriptSceneObject$$DeserializeValue
// il2cpp: Il2CppObject* Map_MapScriptSceneObject__DeserializeValue (Map_MapScriptSceneObject_o* __this, System_Type_o* t, System_String_o* value, const MethodInfo* method);
// 0x59a4920

Il2CppObject *
Map_MapScriptSceneObject__DeserializeValue
          (Map_MapScriptSceneObject_o *__this,System_Type_o *t,System_String_o *value,MethodInfo *method)

{
  Il2CppType *handle;
  bool bVar1;
  System_Type_o *pSVar2;
  Map_MapScriptBaseMaterial_o *pMVar3;
  Il2CppObject *pIVar4;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07545aa4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_Map_MapScriptBaseMaterial);
    Il2CppMethodInitialized_07545aa4 = '\x01';
  }
  handle = TypeRef_Map_MapScriptBaseMaterial;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  pSVar2 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (pSVar2 == (System_Type_o *)0x0) {
    ThrowNullReferenceException();
  }
  method_00 = (MethodInfo *)t;
  bVar1 = (*(pSVar2->klass->vtable)._22_IsAssignableFrom.methodPtr)
                    (pSVar2,t,(pSVar2->klass->vtable)._22_IsAssignableFrom.method);
  if (bVar1) {
    pMVar3 = Map_MapScriptSceneObject__DeserializeMaterial(value,method_00);
    return (Il2CppObject *)pMVar3;
  }
  pIVar4 = Utility_BaseCSVObject__DeserializeValue
                     ((Utility_BaseCSVObject_o *)__this,t,value,(MethodInfo *)0x0);
  return pIVar4;
}


// Map.MapScriptSceneObject$$DeserializeMaterial
// il2cpp: Map_MapScriptBaseMaterial_o* Map_MapScriptSceneObject__DeserializeMaterial (System_String_o* value, const MethodInfo* method);
// 0x59a49d0

Map_MapScriptBaseMaterial_o *
Map_MapScriptSceneObject__DeserializeMaterial(System_String_o *value,MethodInfo *method)

{
  System_String_o *a;
  bool bVar1;
  uint16_t separator;
  Map_MapScriptReflectiveMaterial_o *__this;
  System_String_array *pSVar2;
  Map_MapScriptDefaultTiledMaterial_c **ppMVar3;
  MethodInfo *pMVar4;
  
  if (Il2CppMethodInitialized_07545aa5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObjectShader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptBaseMaterial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptBasicMaterial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptDefaultTiledMaterial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptLegacyMaterial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptReflectiveMaterial);
    Il2CppMethodInitialized_07545aa5 = '\x01';
  }
  __this = (Map_MapScriptReflectiveMaterial_o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScriptBaseMaterial);
  Map_MapScriptBaseMaterial___ctor((Map_MapScriptBaseMaterial_o *)__this,method);
  if (__this != (Map_MapScriptReflectiveMaterial_o *)0x0) {
    separator = (*(((Map_MapScriptBaseMaterial_c *)__this->klass)->vtable)._4_get_Delimiter.methodPtr)
                          (__this,(((Map_MapScriptBaseMaterial_c *)__this->klass)->vtable)._4_get_Delimiter.
                                  method);
    if (value == (System_String_o *)0x0) goto label_059a4c91;
    pSVar2 = System_String__Split(value,separator,0,(MethodInfo *)0x0);
    if (pSVar2 == (System_String_array *)0x0) goto label_059a4c91;
    if ((int)pSVar2->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    a = pSVar2->m_Items[0];
    if ((TypeInfo_Map_MapObjectShader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectShader);
    }
    pMVar4 = (MethodInfo *)TypeInfo_Map_MapObjectShader->static_fields->Basic;
    bVar1 = System_String__op_Equality(a,(System_String_o *)pMVar4,(MethodInfo *)0x0);
    if (!bVar1) {
      if ((TypeInfo_Map_MapObjectShader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectShader);
      }
      pMVar4 = (MethodInfo *)TypeInfo_Map_MapObjectShader->static_fields->Transparent;
      bVar1 = System_String__op_Equality(a,(System_String_o *)pMVar4,(MethodInfo *)0x0);
      if (!bVar1) {
        if ((TypeInfo_Map_MapObjectShader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectShader);
        }
        pMVar4 = (MethodInfo *)TypeInfo_Map_MapObjectShader->static_fields->DefaultTiled;
        bVar1 = System_String__op_Equality(a,(System_String_o *)pMVar4,(MethodInfo *)0x0);
        if (bVar1) {
          ppMVar3 = &TypeInfo_Map_MapScriptDefaultTiledMaterial;
        }
        else {
          if ((TypeInfo_Map_MapObjectShader->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectShader);
          }
          pMVar4 = (MethodInfo *)TypeInfo_Map_MapObjectShader->static_fields->Reflective;
          bVar1 = System_String__op_Equality(a,(System_String_o *)pMVar4,(MethodInfo *)0x0);
          if (bVar1) {
            __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScriptReflectiveMaterial);
            if (Il2CppMethodInitialized_07545aba == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
              Il2CppMethodInitialized_07545aba = '\x01';
            }
            pMVar4 = (MethodInfo *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
            Utility_Color255___ctor_5ce7770((Utility_Color255_o *)pMVar4,(MethodInfo *)0x0);
            (__this->fields).ReflectColor = (Utility_Color255_o *)pMVar4;
            Il2CppCodeGenWriteBarrier(&(__this->fields).ReflectColor);
            Map_MapScriptBasicMaterial___ctor((Map_MapScriptBasicMaterial_o *)__this,pMVar4);
            goto label_059a4b20;
          }
          if ((TypeInfo_Map_MapObjectShader->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectShader);
          }
          bVar1 = Map_MapObjectShader__IsLegacyShader(a,pMVar4);
          if (!bVar1) goto label_059a4b20;
          ppMVar3 = (Map_MapScriptDefaultTiledMaterial_c **)&TypeInfo_Map_MapScriptLegacyMaterial;
        }
        __this = (Map_MapScriptReflectiveMaterial_o *)il2cpp_codegen_object_new((Il2CppClass *)*ppMVar3);
        if (Il2CppMethodInitialized_07542885 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
          Il2CppMethodInitialized_07542885 = '\x01';
        }
        (__this->fields).Texture =
             (System_String_o *)(TypeInfo_UnityEngine_Vector2->static_fields->oneVector).fields;
        Map_MapScriptBaseMaterial___ctor((Map_MapScriptBaseMaterial_o *)__this,pMVar4);
        goto label_059a4b20;
      }
    }
    __this = (Map_MapScriptReflectiveMaterial_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScriptBasicMaterial);
    Map_MapScriptBasicMaterial___ctor((Map_MapScriptBasicMaterial_o *)__this,pMVar4);
    if (__this != (Map_MapScriptReflectiveMaterial_o *)0x0) {
label_059a4b20:
      (*(((Map_MapScriptBaseMaterial_c *)__this->klass)->vtable)._9_Deserialize.methodPtr)
                (__this,value,(((Map_MapScriptBaseMaterial_c *)__this->klass)->vtable)._9_Deserialize.method);
      return (Map_MapScriptBaseMaterial_o *)__this;
    }
  }
label_059a4c91:
  ThrowNullReferenceException();
}


