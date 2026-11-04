// Type: Map.MapScriptSceneObject
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Map/MapScriptSceneObject.cs
// Prior real C# source (older reference): Assets/Scripts/Map/MapScript/MapScriptSceneObject.cs
// --------------------------------

// Map.MapScriptSceneObject$$.ctor
// il2cpp: void Map_MapScriptSceneObject___ctor (Map_MapScriptSceneObject_o* __this, const MethodInfo* method);
// 0x181eda710

void Map_MapScriptSceneObject___ctor(Map_MapScriptSceneObject_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  Map_MapScriptBaseMaterial_o *__this_00;
  System_Collections_Generic_List_MapScriptComponent__o *__this_01;
  
  if (Il2CppMethodInitialized_18434510a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapScriptComponent_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_MapScriptComponent);
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
  (__this->fields).CollideMode = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).CollideMode,pSVar1);
  if ((TypeInfo_Map_MapObjectCollideWith->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideWith);
  }
  pSVar1 = TypeInfo_Map_MapObjectCollideWith->static_fields->Entities;
  (__this->fields).CollideWith = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).CollideWith,pSVar1);
  (__this->fields).PhysicsMaterial = "Default";
  Il2CppCodeGenWriteBarrier(&(__this->fields).PhysicsMaterial,"Default");
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScriptBaseMaterial);
  Map_MapScriptBaseMaterial___ctor(__this_00,(MethodInfo *)0x0);
  (__this->fields).Material = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Material,__this_00);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_MapScriptComponent);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_01,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_MapScriptComponent_ctor);
  (__this->fields).Components = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Components,__this_01);
  Map_MapScriptBaseObject___ctor((Map_MapScriptBaseObject_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Type = "Scene";
  Il2CppCodeGenWriteBarrier(&(__this->fields).Type,"Scene");
  return;
}


// Map.MapScriptSceneObject$$DeserializeValue
// il2cpp: Il2CppObject* Map_MapScriptSceneObject__DeserializeValue (Map_MapScriptSceneObject_o* __this, System_Type_o* t, System_String_o* value, const MethodInfo* method);
// 0x181eda660

Il2CppObject *
Map_MapScriptSceneObject__DeserializeValue
          (Map_MapScriptSceneObject_o *__this,System_Type_o *t,System_String_o *value,MethodInfo *method)

{
  Il2CppType *handle;
  bool bVar1;
  System_Type_o *pSVar2;
  Il2CppObject *pIVar3;
  Map_MapScriptBaseMaterial_o *pMVar4;
  
  if (Il2CppMethodInitialized_18434510b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_Map_MapScriptBaseMaterial);
    Il2CppMethodInitialized_18434510b = '\x01';
  }
  handle = TypeRef_Map_MapScriptBaseMaterial;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  pSVar2 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (pSVar2 != (System_Type_o *)0x0) {
    bVar1 = (*(pSVar2->klass->vtable)._22_IsAssignableFrom.methodPtr)
                      (pSVar2,t,(pSVar2->klass->vtable)._22_IsAssignableFrom.method);
    if (!bVar1) {
      pIVar3 = Utility_BaseCSVObject__DeserializeValue
                         ((Utility_BaseCSVObject_o *)__this,t,value,(MethodInfo *)0x0);
      return pIVar3;
    }
    pMVar4 = Map_MapScriptSceneObject__DeserializeMaterial(value,(MethodInfo *)0x0);
    return (Il2CppObject *)pMVar4;
  }
  ThrowNullReferenceException();
}


// Map.MapScriptSceneObject$$DeserializeMaterial
// il2cpp: Map_MapScriptBaseMaterial_o* Map_MapScriptSceneObject__DeserializeMaterial (System_String_o* value, const MethodInfo* method);
// 0x181eda360
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181eda54b: mov rcx, qword ptr [rip + 0x21e66f6]  ; TypeInfo_Map_MapScriptLegacyMaterial
// asm:   0x181eda5fd: mov rcx, qword ptr [rip + 0x21e6564]  ; TypeInfo_Map_MapScriptDefaultTiledMaterial
// asm:   0x181eda604: jmp 0x181eda552

Map_MapScriptBaseMaterial_o *
Map_MapScriptSceneObject__DeserializeMaterial(System_String_o *value,MethodInfo *method)

{
  float fVar1;
  System_String_o *a;
  bool bVar2;
  uint16_t separator;
  Map_MapScriptReflectiveMaterial_o *__this;
  System_String_array *pSVar3;
  Utility_Color255_o *__this_00;
  Il2CppClass *klass;
  
  if (Il2CppMethodInitialized_18434510c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObjectShader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptBaseMaterial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptBasicMaterial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptDefaultTiledMaterial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptLegacyMaterial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptReflectiveMaterial);
    Il2CppMethodInitialized_18434510c = '\x01';
  }
  __this = (Map_MapScriptReflectiveMaterial_o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScriptBaseMaterial);
  Map_MapScriptBaseMaterial___ctor((Map_MapScriptBaseMaterial_o *)__this,(MethodInfo *)0x0);
  if (((__this == (Map_MapScriptReflectiveMaterial_o *)0x0) ||
      (separator = (*(((Map_MapScriptBaseMaterial_c *)__this->klass)->vtable)._4_get_Delimiter.methodPtr)
                             (__this,(((Map_MapScriptBaseMaterial_c *)__this->klass)->vtable)._4_get_Delimiter
                                     .method), value == (System_String_o *)0x0)) ||
     (pSVar3 = System_String__Split(value,separator,0,(MethodInfo *)0x0), pSVar3 == (System_String_array *)0x0
     )) goto label_181eda651;
  if ((int)pSVar3->max_length == 0) {
    ThrowIndexOutOfRangeException();
  }
  a = pSVar3->m_Items[0];
  if ((TypeInfo_Map_MapObjectShader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectShader);
  }
  bVar2 = System_String__op_Equality(a,TypeInfo_Map_MapObjectShader->static_fields->Basic,(MethodInfo *)0x0);
  if (bVar2) {
label_181eda609:
    __this = (Map_MapScriptReflectiveMaterial_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScriptBasicMaterial);
label_181eda61b:
    Map_MapScriptBasicMaterial___ctor((Map_MapScriptBasicMaterial_o *)__this,(MethodInfo *)0x0);
  }
  else {
    if ((TypeInfo_Map_MapObjectShader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectShader);
    }
    bVar2 = System_String__op_Equality
                      (a,TypeInfo_Map_MapObjectShader->static_fields->Transparent,(MethodInfo *)0x0);
    if (bVar2) goto label_181eda609;
    if ((TypeInfo_Map_MapObjectShader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectShader);
    }
    bVar2 = System_String__op_Equality
                      (a,TypeInfo_Map_MapObjectShader->static_fields->DefaultTiled,(MethodInfo *)0x0);
    klass = (Il2CppClass *)TypeInfo_Map_MapScriptDefaultTiledMaterial;
    if (!bVar2) {
      if ((TypeInfo_Map_MapObjectShader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectShader);
      }
      bVar2 = System_String__op_Equality
                        (a,TypeInfo_Map_MapObjectShader->static_fields->Reflective,(MethodInfo *)0x0);
      if (!bVar2) {
        if ((TypeInfo_Map_MapObjectShader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectShader);
        }
        bVar2 = Map_MapObjectShader__IsLegacyShader(a,(MethodInfo *)0x0);
        klass = (Il2CppClass *)TypeInfo_Map_MapScriptLegacyMaterial;
        if (!bVar2) goto label_181eda627;
        goto label_181eda552;
      }
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScriptReflectiveMaterial);
      if (Il2CppMethodInitialized_184345121 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
        Il2CppMethodInitialized_184345121 = '\x01';
      }
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
      Utility_Color255___ctor_2332720(__this_00,(MethodInfo *)0x0);
      (__this->fields).ReflectColor = __this_00;
      Il2CppCodeGenWriteBarrier(&(__this->fields).ReflectColor,__this_00);
      goto label_181eda61b;
    }
label_181eda552:
    __this = (Map_MapScriptReflectiveMaterial_o *)il2cpp_codegen_object_new(klass);
    if (Il2CppMethodInitialized_184341f36 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
      Il2CppMethodInitialized_184341f36 = '\x01';
    }
    fVar1 = (TypeInfo_UnityEngine_Vector2->static_fields->oneVector).fields.y;
    *(float *)&(__this->fields).Texture = (TypeInfo_UnityEngine_Vector2->static_fields->oneVector).fields.x;
    *(float *)((longlong)&(__this->fields).Texture + 4) = fVar1;
    Map_MapScriptBaseMaterial___ctor((Map_MapScriptBaseMaterial_o *)__this,(MethodInfo *)0x0);
  }
  if (__this != (Map_MapScriptReflectiveMaterial_o *)0x0) {
label_181eda627:
    (*(((Map_MapScriptBaseMaterial_c *)__this->klass)->vtable)._9_Deserialize.methodPtr)
              (__this,value,(((Map_MapScriptBaseMaterial_c *)__this->klass)->vtable)._9_Deserialize.method);
    return (Map_MapScriptBaseMaterial_o *)__this;
  }
label_181eda651:
  ThrowNullReferenceException();
}


