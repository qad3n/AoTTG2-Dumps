// Type: Map.MapScriptSceneObject
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Map/MapScriptSceneObject.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Map/MapScript/MapScriptSceneObject.cs  [CHANGED since prior version]
// --------------------------------

// Map.MapScriptSceneObject$$.ctor
// il2cpp: void Map_MapScriptSceneObject___ctor (Map_MapScriptSceneObject_o* __this, const MethodInfo* method);
// 0x3d9a7a0

void Map_MapScriptSceneObject___ctor(Map_MapScriptSceneObject_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  Map_MapScriptBaseMaterial_o *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  MethodInfo *method_00;
  
  if (DAT_057027b5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_List_1_Map_MapScriptComponent);
    il2cpp_init_method_metadata(&TypeInfo_List_MapScriptComponent);
    il2cpp_init_method_metadata(&TypeInfo_MapObjectCollideMode);
    il2cpp_init_method_metadata(&TypeInfo_MapObjectCollideWith);
    il2cpp_init_method_metadata(&TypeInfo_MapScriptBaseMaterial);
    il2cpp_init_method_metadata(&"Default");
    il2cpp_init_method_metadata(&"Scene");
    DAT_057027b5 = '\x01';
  }
  if (*(int *)(TypeInfo_MapObjectCollideMode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  *(undefined8 *)&(__this->fields).ScaleZ = **(undefined8 **)(TypeInfo_MapObjectCollideMode + 0xb8);
  il2cpp_runtime_glue(&(__this->fields).ScaleZ);
  if (*(int *)(TypeInfo_MapObjectCollideWith + 0xe4) == 0) {
    il2cpp_init_class();
  }
  (__this->fields).CollideMode = *(System_String_o **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x30);
  il2cpp_runtime_glue(&(__this->fields).CollideMode);
  method_00 = "Default";
  (__this->fields).CollideWith = (System_String_o *)"Default";
  il2cpp_runtime_glue(&(__this->fields).CollideWith);
  __this_00 = (Map_MapScriptBaseMaterial_o *)il2cpp_runtime_glue(TypeInfo_MapScriptBaseMaterial);
  Map_MapScriptBaseMaterial___ctor(__this_00,method_00);
  (__this->fields).PhysicsMaterial = (System_String_o *)__this_00;
  il2cpp_runtime_glue(&(__this->fields).PhysicsMaterial,__this_00);
  __this_01 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_MapScriptComponent);
  System_Collections_Generic_List<object>___ctor(__this_01,MethodInfo_List_1_Map_MapScriptComponent);
  (__this->fields).Material = (Map_MapScriptBaseMaterial_o *)__this_01;
  il2cpp_runtime_glue(&(__this->fields).Material,__this_01);
  if (DAT_057027af == '\0') {
    il2cpp_init_method_metadata(&"None");
    il2cpp_init_method_metadata(&"Unnamed");
    DAT_057027af = '\x01';
  }
  (__this->fields).Asset = "None";
  il2cpp_runtime_glue(&(__this->fields).Asset);
  *(undefined2 *)&(__this->fields).Active = 0x101;
  *(undefined1 *)((long)&(__this->fields).Active + 2) = 1;
  uVar1 = "Unnamed"._4_4_;
  (__this->fields).Visible = (undefined4)"Unnamed";
  (__this->fields).Networked = uVar1;
  il2cpp_runtime_glue(&(__this->fields).Visible);
  (__this->fields).RotationY = 1.0;
  (__this->fields).RotationZ = 1.0;
  (__this->fields).ScaleX = 1.0;
  Utility_BaseCSVRow___ctor((Utility_BaseCSVRow_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Type = "Scene";
  il2cpp_runtime_glue(&__this->fields);
  return;
}


// Map.MapScriptSceneObject$$DeserializeValue
// il2cpp: Il2CppObject* Map_MapScriptSceneObject__DeserializeValue (Map_MapScriptSceneObject_o* __this, System_Type_o* t, System_String_o* value, const MethodInfo* method);
// 0x3db0010

Il2CppObject *
Map_MapScriptSceneObject__DeserializeValue
          (Map_MapScriptSceneObject_o *__this,System_Type_o *t,System_String_o *value,
          MethodInfo *method)

{
  System_RuntimeTypeHandle_o handle;
  char cVar1;
  System_Type_o *pSVar2;
  Map_MapScriptBaseMaterial_o *pMVar3;
  Il2CppObject *pIVar4;
  MethodInfo *method_00;
  
  if (DAT_057027b6 == '\0') {
    il2cpp_init_method_metadata(&TypeRef_MapScriptBaseMaterial);
    DAT_057027b6 = '\x01';
  }
  handle.fields.value = TypeRef_MapScriptBaseMaterial.fields.value;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar2 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (pSVar2 != (System_Type_o *)0x0) {
    method_00 = (MethodInfo *)t;
    cVar1 = (*(pSVar2->klass->vtable)._22_IsAssignableFrom.methodPtr)
                      (pSVar2,t,(pSVar2->klass->vtable)._22_IsAssignableFrom.method);
    if (cVar1 != '\0') {
      pMVar3 = Map_MapScriptSceneObject__DeserializeMaterial(value,method_00);
      return (Il2CppObject *)pMVar3;
    }
    pIVar4 = Utility_BaseCSVObject__DeserializeValue
                       ((Utility_BaseCSVObject_o *)__this,t,value,(MethodInfo *)0x0);
    return pIVar4;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Map.MapScriptSceneObject$$DeserializeMaterial
// il2cpp: Map_MapScriptBaseMaterial_o* Map_MapScriptSceneObject__DeserializeMaterial (System_String_o* value, const MethodInfo* method);
// 0x3d9a990

Map_MapScriptBaseMaterial_o *
Map_MapScriptSceneObject__DeserializeMaterial(System_String_o *value,MethodInfo *method)

{
  System_String_o *a;
  uint16_t separator;
  bool_conflict bVar1;
  Map_MapScriptBasicMaterial_o *__this;
  System_String_array *pSVar2;
  undefined8 *puVar3;
  Map_MapScriptBasicMaterial_c *method_00;
  MethodInfo *pMVar4;
  
  if (DAT_057027b7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MapObjectShader);
    il2cpp_init_method_metadata(&TypeInfo_MapScriptBaseMaterial);
    il2cpp_init_method_metadata(&TypeInfo_MapScriptBasicMaterial);
    il2cpp_init_method_metadata(&TypeInfo_MapScriptDefaultTiledMaterial);
    il2cpp_init_method_metadata(&TypeInfo_MapScriptLegacyMaterial);
    il2cpp_init_method_metadata(&TypeInfo_MapScriptReflectiveMaterial);
    DAT_057027b7 = '\x01';
  }
  __this = (Map_MapScriptBasicMaterial_o *)il2cpp_runtime_glue(TypeInfo_MapScriptBaseMaterial);
  Map_MapScriptBaseMaterial___ctor((Map_MapScriptBaseMaterial_o *)__this,method);
  if (((__this == (Map_MapScriptBasicMaterial_o *)0x0) ||
      (separator = (*(((Map_MapScriptBaseMaterial_c *)__this->klass)->vtable)._4_get_Delimiter.
                     methodPtr)(__this,(((Map_MapScriptBaseMaterial_c *)__this->klass)->vtable).
                                       _4_get_Delimiter.method), value == (System_String_o *)0x0))
     || (pSVar2 = System_String__Split(value,separator,0,(MethodInfo *)0x0),
        pSVar2 == (System_String_array *)0x0)) goto LAB_03d9ac2e;
  if ((int)pSVar2->max_length == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  a = pSVar2->m_Items[0];
  if (*(int *)(TypeInfo_MapObjectShader + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pMVar4 = *(MethodInfo **)(*(long *)(TypeInfo_MapObjectShader + 0xb8) + 0x18);
  bVar1 = System_String__op_Equality(a,(System_String_o *)pMVar4,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    if (*(int *)(TypeInfo_MapObjectShader + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pMVar4 = *(MethodInfo **)(*(long *)(TypeInfo_MapObjectShader + 0xb8) + 0x20);
    bVar1 = System_String__op_Equality(a,(System_String_o *)pMVar4,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') goto LAB_03d9aabd;
    if (*(int *)(TypeInfo_MapObjectShader + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pMVar4 = *(MethodInfo **)(*(long *)(TypeInfo_MapObjectShader + 0xb8) + 0x10);
    bVar1 = System_String__op_Equality(a,(System_String_o *)pMVar4,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      if (*(int *)(TypeInfo_MapObjectShader + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pMVar4 = *(MethodInfo **)(*(long *)(TypeInfo_MapObjectShader + 0xb8) + 0x28);
      bVar1 = System_String__op_Equality(a,(System_String_o *)pMVar4,(MethodInfo *)0x0);
      if ((char)bVar1 == '\0') {
        if (*(int *)(TypeInfo_MapObjectShader + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar1 = Map_MapObjectShader__IsLegacyShader(a,pMVar4);
        if ((char)bVar1 == '\0') goto LAB_03d9aae0;
        puVar3 = &TypeInfo_MapScriptLegacyMaterial;
        goto LAB_03d9ab3b;
      }
      __this = (Map_MapScriptBasicMaterial_o *)il2cpp_runtime_glue(TypeInfo_MapScriptReflectiveMaterial);
      if (DAT_057027ba == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Color255);
        DAT_057027ba = '\x01';
      }
      method_00 = (Map_MapScriptBasicMaterial_c *)il2cpp_runtime_glue(TypeInfo_Color255);
      Utility_Color255___ctor((Utility_Color255_o *)method_00,(MethodInfo *)0x0);
      __this[1].klass = method_00;
      il2cpp_runtime_glue(__this + 1);
      Map_MapScriptBasicMaterial___ctor(__this,(MethodInfo *)method_00);
    }
    else {
      puVar3 = &TypeInfo_MapScriptDefaultTiledMaterial;
LAB_03d9ab3b:
      __this = (Map_MapScriptBasicMaterial_o *)il2cpp_runtime_glue(*puVar3);
      if (DAT_0570136e == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Vector2);
        DAT_0570136e = '\x01';
      }
      (__this->fields).Texture = *(System_String_o **)(*(long *)(TypeInfo_Vector2 + 0xb8) + 8);
      Map_MapScriptBaseMaterial___ctor((Map_MapScriptBaseMaterial_o *)__this,pMVar4);
    }
  }
  else {
LAB_03d9aabd:
    __this = (Map_MapScriptBasicMaterial_o *)il2cpp_runtime_glue(TypeInfo_MapScriptBasicMaterial);
    Map_MapScriptBasicMaterial___ctor(__this,pMVar4);
  }
  if (__this != (Map_MapScriptBasicMaterial_o *)0x0) {
LAB_03d9aae0:
    (*(((Map_MapScriptBaseMaterial_c *)__this->klass)->vtable)._9_Deserialize.methodPtr)
              (__this,value,
               (((Map_MapScriptBaseMaterial_c *)__this->klass)->vtable)._9_Deserialize.method);
    return (Map_MapScriptBaseMaterial_o *)__this;
  }
LAB_03d9ac2e:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


