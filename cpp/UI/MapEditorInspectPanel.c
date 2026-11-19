// Type: UI.MapEditorInspectPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp_body_deref/Scripts/UI/MapEditorInspectPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MapEditorMenu/MapEditorInspectPanel.cs
// --------------------------------

// UI.MapEditorInspectPanel.<>c$$.cctor
// il2cpp: void UI_MapEditorInspectPanel___c___cctor (const MethodInfo* method);
// 0x5d92750

void UI_MapEditorInspectPanel___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_0754803a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorInspectPanel_c);
    Il2CppMethodInitialized_0754803a = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_UI_MapEditorInspectPanel_c->static_fields->__9 = (UI_MapEditorInspectPanel___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_UI_MapEditorInspectPanel_c->static_fields->__9);
  return;
}


// UI.MapEditorInspectPanel.<>c$$.ctor
// il2cpp: void UI_MapEditorInspectPanel___c___ctor (UI_MapEditorInspectPanel___c_o* __this, const MethodInfo* method);
// 0x5d927c0

void UI_MapEditorInspectPanel___c___ctor(UI_MapEditorInspectPanel___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorInspectPanel.<>c$$<PasteTransform>b__69_0
// il2cpp: bool UI_MapEditorInspectPanel___c___PasteTransform_b__69_0 (UI_MapEditorInspectPanel___c_o* __this, System_String_o* key, const MethodInfo* method);
// 0x5d927d0

bool UI_MapEditorInspectPanel___c___PasteTransform_b__69_0
               (UI_MapEditorInspectPanel___c_o *__this,System_String_o *key,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_0754803b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Scale");
    il2cpp_codegen_initialize_runtime_metadata(&"Position");
    il2cpp_codegen_initialize_runtime_metadata(&"Rotation");
    Il2CppMethodInitialized_0754803b = '\x01';
  }
  if (key == (System_String_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = System_String__StartsWith(key,"Position",(MethodInfo *)0x0);
  if (!bVar1) {
    bVar1 = System_String__StartsWith(key,"Rotation",(MethodInfo *)0x0);
    if (!bVar1) {
      bVar1 = System_String__StartsWith(key,"Scale",(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return true;
}


// UI.MapEditorInspectPanel.<>c$$<Show>b__82_19
// il2cpp: bool UI_MapEditorInspectPanel___c___Show_b__82_19 (UI_MapEditorInspectPanel___c_o* __this, Map_MapObject_o* o, const MethodInfo* method);
// 0x5d92860

bool UI_MapEditorInspectPanel___c___Show_b__82_19
               (UI_MapEditorInspectPanel___c_o *__this,Map_MapObject_o *o,MethodInfo *method)

{
  byte bVar1;
  Map_MapScriptBaseObject_o *pMVar2;
  System_String_o *pSVar3;
  System_String_Fields a;
  bool bVar4;
  
  if (Il2CppMethodInitialized_0754803c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObjectShader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptSceneObject);
    Il2CppMethodInitialized_0754803c = '\x01';
  }
  if ((o != (Map_MapObject_o *)0x0) &&
     (pMVar2 = (o->fields).ScriptObject, pMVar2 != (Map_MapScriptBaseObject_o *)0x0)) {
    bVar1 = (TypeInfo_Map_MapScriptSceneObject->_2).typeHierarchyDepth;
    if (((pMVar2->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pMVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_Map_MapScriptSceneObject)) {
      il2cpp_codegen_raise_invalid_cast_exception();
    }
    pSVar3 = (*(uint64_t *)((char *)pMVar2 + 0x78));
    if (pSVar3 != (System_String_o *)0x0) {
      a = pSVar3->fields;
      if ((TypeInfo_Map_MapObjectShader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectShader);
      }
      bVar4 = System_String__op_Inequality
                        ((System_String_o *)a,TypeInfo_Map_MapObjectShader->static_fields->DefaultNoTint,
                         (MethodInfo *)0x0);
      return bVar4;
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel.<>c$$<Show>b__82_20
// il2cpp: bool UI_MapEditorInspectPanel___c___Show_b__82_20 (UI_MapEditorInspectPanel___c_o* __this, Map_MapObject_o* o, const MethodInfo* method);
// 0x5d92920

bool UI_MapEditorInspectPanel___c___Show_b__82_20
               (UI_MapEditorInspectPanel___c_o *__this,Map_MapObject_o *o,MethodInfo *method)

{
  byte bVar1;
  Map_MapScriptBaseObject_o *pMVar2;
  System_String_o *pSVar3;
  System_String_Fields shader;
  bool bVar4;
  
  if (Il2CppMethodInitialized_0754803d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObjectShader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptSceneObject);
    Il2CppMethodInitialized_0754803d = '\x01';
  }
  if ((o != (Map_MapObject_o *)0x0) &&
     (pMVar2 = (o->fields).ScriptObject, pMVar2 != (Map_MapScriptBaseObject_o *)0x0)) {
    bVar1 = (TypeInfo_Map_MapScriptSceneObject->_2).typeHierarchyDepth;
    if (((pMVar2->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pMVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_Map_MapScriptSceneObject)) {
      il2cpp_codegen_raise_invalid_cast_exception();
    }
    pSVar3 = (*(uint64_t *)((char *)pMVar2 + 0x78));
    if (pSVar3 != (System_String_o *)0x0) {
      shader = pSVar3->fields;
      if ((TypeInfo_Map_MapObjectShader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectShader);
        bVar4 = Map_MapObjectShader__IsLegacyShader((System_String_o *)shader,(MethodInfo *)0x0);
        return bVar4;
      }
      bVar4 = Map_MapObjectShader__IsLegacyShader((System_String_o *)shader,(MethodInfo *)0x0);
      return bVar4;
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel.<>c$$<Show>b__82_21
// il2cpp: bool UI_MapEditorInspectPanel___c___Show_b__82_21 (UI_MapEditorInspectPanel___c_o* __this, Map_MapObject_o* o, const MethodInfo* method);
// 0x5d929d0

bool UI_MapEditorInspectPanel___c___Show_b__82_21
               (UI_MapEditorInspectPanel___c_o *__this,Map_MapObject_o *o,MethodInfo *method)

{
  byte bVar1;
  Map_MapScriptBaseObject_o *pMVar2;
  System_String_o *pSVar3;
  System_String_Fields a;
  bool bVar4;
  
  if (Il2CppMethodInitialized_0754803e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObjectShader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptSceneObject);
    Il2CppMethodInitialized_0754803e = '\x01';
  }
  if ((o != (Map_MapObject_o *)0x0) &&
     (pMVar2 = (o->fields).ScriptObject, pMVar2 != (Map_MapScriptBaseObject_o *)0x0)) {
    bVar1 = (TypeInfo_Map_MapScriptSceneObject->_2).typeHierarchyDepth;
    if (((pMVar2->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pMVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_Map_MapScriptSceneObject)) {
      il2cpp_codegen_raise_invalid_cast_exception();
    }
    pSVar3 = (*(uint64_t *)((char *)pMVar2 + 0x78));
    if (pSVar3 != (System_String_o *)0x0) {
      a = pSVar3->fields;
      if ((TypeInfo_Map_MapObjectShader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectShader);
      }
      bVar4 = System_String__op_Equality
                        ((System_String_o *)a,TypeInfo_Map_MapObjectShader->static_fields->DefaultTiled,
                         (MethodInfo *)0x0);
      return bVar4;
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel.<>c$$<Show>b__82_22
// il2cpp: bool UI_MapEditorInspectPanel___c___Show_b__82_22 (UI_MapEditorInspectPanel___c_o* __this, Map_MapObject_o* o, const MethodInfo* method);
// 0x5d92a90

bool UI_MapEditorInspectPanel___c___Show_b__82_22
               (UI_MapEditorInspectPanel___c_o *__this,Map_MapObject_o *o,MethodInfo *method)

{
  byte bVar1;
  Map_MapScriptBaseObject_o *pMVar2;
  System_String_o *__this_00;
  Il2CppType *handle;
  bool bVar3;
  System_Type_o *pSVar4;
  System_Type_o *pSVar5;
  
  if (Il2CppMethodInitialized_0754803f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_Map_MapScriptBasicMaterial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptSceneObject);
    Il2CppMethodInitialized_0754803f = '\x01';
  }
  handle = TypeRef_Map_MapScriptBasicMaterial;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  pSVar4 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if ((o != (Map_MapObject_o *)0x0) &&
     (pMVar2 = (o->fields).ScriptObject, pMVar2 != (Map_MapScriptBaseObject_o *)0x0)) {
    bVar1 = (TypeInfo_Map_MapScriptSceneObject->_2).typeHierarchyDepth;
    if (((pMVar2->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pMVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_Map_MapScriptSceneObject)) {
      il2cpp_codegen_raise_invalid_cast_exception();
    }
    __this_00 = (*(uint64_t *)((char *)pMVar2 + 0x78));
    if (__this_00 != (System_String_o *)0x0) {
      pSVar5 = System_Object__GetType((Il2CppObject *)__this_00,(MethodInfo *)0x0);
      if (pSVar4 != (System_Type_o *)0x0) {
        bVar3 = (*(pSVar4->klass->vtable)._22_IsAssignableFrom.methodPtr)
                          (pSVar4,pSVar5,(pSVar4->klass->vtable)._22_IsAssignableFrom.method);
        return bVar3;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel.<>c$$<Show>b__82_23
// il2cpp: bool UI_MapEditorInspectPanel___c___Show_b__82_23 (UI_MapEditorInspectPanel___c_o* __this, Map_MapObject_o* o, const MethodInfo* method);
// 0x5d92b70

bool UI_MapEditorInspectPanel___c___Show_b__82_23
               (UI_MapEditorInspectPanel___c_o *__this,Map_MapObject_o *o,MethodInfo *method)

{
  byte bVar1;
  Map_MapScriptBaseObject_o *pMVar2;
  System_String_o *pSVar3;
  System_String_Fields a;
  bool bVar4;
  
  if (Il2CppMethodInitialized_07548040 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObjectShader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptSceneObject);
    Il2CppMethodInitialized_07548040 = '\x01';
  }
  if ((o != (Map_MapObject_o *)0x0) &&
     (pMVar2 = (o->fields).ScriptObject, pMVar2 != (Map_MapScriptBaseObject_o *)0x0)) {
    bVar1 = (TypeInfo_Map_MapScriptSceneObject->_2).typeHierarchyDepth;
    if (((pMVar2->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pMVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_Map_MapScriptSceneObject)) {
      il2cpp_codegen_raise_invalid_cast_exception();
    }
    pSVar3 = (*(uint64_t *)((char *)pMVar2 + 0x78));
    if (pSVar3 != (System_String_o *)0x0) {
      a = pSVar3->fields;
      if ((TypeInfo_Map_MapObjectShader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectShader);
      }
      bVar4 = System_String__op_Equality
                        ((System_String_o *)a,TypeInfo_Map_MapObjectShader->static_fields->Reflective,
                         (MethodInfo *)0x0);
      return bVar4;
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel.<>c$$<SerializeMapObjectIds>b__86_0
// il2cpp: int32_t UI_MapEditorInspectPanel___c___SerializeMapObjectIds_b__86_0 (UI_MapEditorInspectPanel___c_o* __this, int32_t id, const MethodInfo* method);
// 0x5d92c30

int32_t UI_MapEditorInspectPanel___c___SerializeMapObjectIds_b__86_0
                  (UI_MapEditorInspectPanel___c_o *__this,int32_t id,MethodInfo *method)

{
  return id;
}


// UI.MapEditorInspectPanel.<>c$$<SerializeMapObjectIds>b__86_1
// il2cpp: System_String_o* UI_MapEditorInspectPanel___c___SerializeMapObjectIds_b__86_1 (UI_MapEditorInspectPanel___c_o* __this, int32_t id, const MethodInfo* method);
// 0x5d92c40

System_String_o *
UI_MapEditorInspectPanel___c___SerializeMapObjectIds_b__86_1
          (UI_MapEditorInspectPanel___c_o *__this,int32_t id,MethodInfo *method)

{
  System_String_o *pSVar1;
  int32_t iStack_4;
  
  pSVar1 = System_Int32__ToString(&iStack_4,(MethodInfo *)0x0);
  return pSVar1;
}


// UI.MapEditorInspectPanel.<>c$$<OnChange>b__104_1
// il2cpp: System_String_o* UI_MapEditorInspectPanel___c___OnChange_b__104_1 (UI_MapEditorInspectPanel___c_o* __this, System_Collections_Generic_KeyValuePair_string__string__o field, const MethodInfo* method);
// 0x5d92c60

System_String_o *
UI_MapEditorInspectPanel___c___OnChange_b__104_1
          (UI_MapEditorInspectPanel___c_o *__this,
          System_Collections_Generic_KeyValuePair_string__string__o field,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07548041 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_string_get_Key);
    Il2CppMethodInitialized_07548041 = '\x01';
  }
  return field.fields.key;
}


// UI.MapEditorInspectPanel.<>c$$<OnChange>b__104_2
// il2cpp: System_String_o* UI_MapEditorInspectPanel___c___OnChange_b__104_2 (UI_MapEditorInspectPanel___c_o* __this, System_Collections_Generic_KeyValuePair_string__string__o field, const MethodInfo* method);
// 0x5d92c90

System_String_o *
UI_MapEditorInspectPanel___c___OnChange_b__104_2
          (UI_MapEditorInspectPanel___c_o *__this,
          System_Collections_Generic_KeyValuePair_string__string__o field,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07548042 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_string_get_Value);
    Il2CppMethodInitialized_07548042 = '\x01';
  }
  return field.fields.value;
}


// UI.MapEditorInspectPanel.<>c$$<SerializeSetting>b__105_0
// il2cpp: int32_t UI_MapEditorInspectPanel___c___SerializeSetting_b__105_0 (UI_MapEditorInspectPanel___c_o* __this, int32_t value, const MethodInfo* method);
// 0x5d92cc0

int32_t UI_MapEditorInspectPanel___c___SerializeSetting_b__105_0
                  (UI_MapEditorInspectPanel___c_o *__this,int32_t value,MethodInfo *method)

{
  return value;
}


// UI.MapEditorInspectPanel.<>c$$<SerializeSetting>b__105_1
// il2cpp: System_String_o* UI_MapEditorInspectPanel___c___SerializeSetting_b__105_1 (UI_MapEditorInspectPanel___c_o* __this, int32_t value, const MethodInfo* method);
// 0x5d92cd0

System_String_o *
UI_MapEditorInspectPanel___c___SerializeSetting_b__105_1
          (UI_MapEditorInspectPanel___c_o *__this,int32_t value,MethodInfo *method)

{
  System_String_o *pSVar1;
  int32_t iStack_4;
  
  pSVar1 = System_Int32__ToString(&iStack_4,(MethodInfo *)0x0);
  return pSVar1;
}


// UI.MapEditorInspectPanel.<>c$$<PropagateTransformToDescendants>b__106_0
// il2cpp: int32_t UI_MapEditorInspectPanel___c___PropagateTransformToDescendants_b__106_0 (UI_MapEditorInspectPanel___c_o* __this, Map_MapObject_o* o, const MethodInfo* method);
// 0x5d92cf0

int32_t UI_MapEditorInspectPanel___c___PropagateTransformToDescendants_b__106_0
                  (UI_MapEditorInspectPanel___c_o *__this,Map_MapObject_o *o,MethodInfo *method)

{
  Map_MapScriptBaseObject_o *pMVar1;
  
  if ((o == (Map_MapObject_o *)0x0) ||
     (pMVar1 = (o->fields).ScriptObject, pMVar1 == (Map_MapScriptBaseObject_o *)0x0)) {
    ThrowNullReferenceException();
  }
  return (pMVar1->fields).Id;
}


// UI.MapEditorInspectPanel.<>c$$<PropagateTransformToDescendants>b__106_1
// il2cpp: int32_t UI_MapEditorInspectPanel___c___PropagateTransformToDescendants_b__106_1 (UI_MapEditorInspectPanel___c_o* __this, Map_MapObject_o* o, const MethodInfo* method);
// 0x5d92d10

int32_t UI_MapEditorInspectPanel___c___PropagateTransformToDescendants_b__106_1
                  (UI_MapEditorInspectPanel___c_o *__this,Map_MapObject_o *o,MethodInfo *method)

{
  Map_MapScriptBaseObject_o *pMVar1;
  
  if ((o == (Map_MapObject_o *)0x0) ||
     (pMVar1 = (o->fields).ScriptObject, pMVar1 == (Map_MapScriptBaseObject_o *)0x0)) {
    ThrowNullReferenceException();
  }
  return (pMVar1->fields).Id;
}


// UI.MapEditorInspectPanel.<>c$$<PropagateTransformToDescendants>b__106_2
// il2cpp: int32_t UI_MapEditorInspectPanel___c___PropagateTransformToDescendants_b__106_2 (UI_MapEditorInspectPanel___c_o* __this, Map_MapObject_o* o, const MethodInfo* method);
// 0x5d92d30

int32_t UI_MapEditorInspectPanel___c___PropagateTransformToDescendants_b__106_2
                  (UI_MapEditorInspectPanel___c_o *__this,Map_MapObject_o *o,MethodInfo *method)

{
  Map_MapScriptBaseObject_o *pMVar1;
  
  if ((o == (Map_MapObject_o *)0x0) ||
     (pMVar1 = (o->fields).ScriptObject, pMVar1 == (Map_MapScriptBaseObject_o *)0x0)) {
    ThrowNullReferenceException();
  }
  return (pMVar1->fields).Id;
}


// UI.MapEditorInspectPanel.<>c__DisplayClass100_0$$.ctor
// il2cpp: void UI_MapEditorInspectPanel___c__DisplayClass100_0___ctor (UI_MapEditorInspectPanel___c__DisplayClass100_0_o* __this, const MethodInfo* method);
// 0x5d92d50

void UI_MapEditorInspectPanel___c__DisplayClass100_0___ctor
               (UI_MapEditorInspectPanel___c__DisplayClass100_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorInspectPanel.<>c__DisplayClass100_0$$<MergeComponent>b__0
// il2cpp: bool UI_MapEditorInspectPanel___c__DisplayClass100_0___MergeComponent_b__0 (UI_MapEditorInspectPanel___c__DisplayClass100_0_o* __this, System_String_o* parameter, const MethodInfo* method);
// 0x5d92d60

bool UI_MapEditorInspectPanel___c__DisplayClass100_0___MergeComponent_b__0
               (UI_MapEditorInspectPanel___c__DisplayClass100_0_o *__this,System_String_o *parameter,
               MethodInfo *method)

{
  bool bVar1;
  System_String_o *value;
  
  if (Il2CppMethodInitialized_07548043 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_string_get_Key);
    il2cpp_codegen_initialize_runtime_metadata(&":");
    Il2CppMethodInitialized_07548043 = '\x01';
  }
  value = System_String__Concat_52f0320
                    ((__this->fields).changed.fields.key,":",(MethodInfo *)0x0);
  if (parameter == (System_String_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = System_String__StartsWith(parameter,value,(MethodInfo *)0x0);
  return bVar1;
}


// UI.MapEditorInspectPanel.<>c__DisplayClass102_0$$.ctor
// il2cpp: void UI_MapEditorInspectPanel___c__DisplayClass102_0___ctor (UI_MapEditorInspectPanel___c__DisplayClass102_0_o* __this, const MethodInfo* method);
// 0x5d92dd0

void UI_MapEditorInspectPanel___c__DisplayClass102_0___ctor
               (UI_MapEditorInspectPanel___c__DisplayClass102_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorInspectPanel.<>c__DisplayClass102_0$$<ApplyMixedIndicators>b__0
// il2cpp: void UI_MapEditorInspectPanel___c__DisplayClass102_0___ApplyMixedIndicators_b__0 (UI_MapEditorInspectPanel___c__DisplayClass102_0_o* __this, System_String_o* val, const MethodInfo* method);
// 0x5d92de0

void UI_MapEditorInspectPanel___c__DisplayClass102_0___ApplyMixedIndicators_b__0
               (UI_MapEditorInspectPanel___c__DisplayClass102_0_o *__this,System_String_o *val,
               MethodInfo *method)

{
  UI_MapEditorInspectPanel_o *pUVar1;
  System_Collections_Generic_HashSet_object__o *__this_00;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07548044 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Remove);
    il2cpp_codegen_initialize_runtime_metadata(&"--");
    Il2CppMethodInitialized_07548044 = '\x01';
  }
  bVar2 = System_String__op_Inequality(val,"--",(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = (__this->fields).__4__this;
    if ((pUVar1 != (UI_MapEditorInspectPanel_o *)0x0) &&
       (__this_00 = (System_Collections_Generic_HashSet_object__o *)(pUVar1->fields)._mixedFields,
       __this_00 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
      System_Collections_Generic_HashSet_object___Remove
                (__this_00,(Il2CppObject *)(__this->fields).capturedKey,
                 (MethodInfo_4FB39F0 *)MethodInfo_System_Collections_Generic_HashSet_string_Remove);
      pUVar1 = (__this->fields).__4__this;
      if (pUVar1 != (UI_MapEditorInspectPanel_o *)0x0) {
        UI_MapEditorInspectPanel__OnChange(pUVar1,(MethodInfo *)0x0);
        return;
      }
    }
    ThrowNullReferenceException();
  }
  return;
}


// UI.MapEditorInspectPanel.<>c__DisplayClass102_1$$.ctor
// il2cpp: void UI_MapEditorInspectPanel___c__DisplayClass102_1___ctor (UI_MapEditorInspectPanel___c__DisplayClass102_1_o* __this, const MethodInfo* method);
// 0x5d92e80

void UI_MapEditorInspectPanel___c__DisplayClass102_1___ctor
               (UI_MapEditorInspectPanel___c__DisplayClass102_1_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorInspectPanel.<>c__DisplayClass102_1$$<ApplyMixedIndicators>b__1
// il2cpp: void UI_MapEditorInspectPanel___c__DisplayClass102_1___ApplyMixedIndicators_b__1 (UI_MapEditorInspectPanel___c__DisplayClass102_1_o* __this, bool __, const MethodInfo* method);
// 0x5d92e90

void UI_MapEditorInspectPanel___c__DisplayClass102_1___ApplyMixedIndicators_b__1
               (UI_MapEditorInspectPanel___c__DisplayClass102_1_o *__this,bool __,MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  UnityEngine_UI_Image_o *__this_00;
  UI_MapEditorInspectPanel_o *pUVar2;
  System_Collections_Generic_HashSet_object__o *__this_01;
  bool bVar3;
  
  if (Il2CppMethodInitialized_07548045 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Remove);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07548045 = '\x01';
  }
  pUVar1 = (UnityEngine_Object_o *)(__this->fields).labelGO;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pUVar1 = (UnityEngine_Object_o *)(__this->fields).labelGO;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_69214e0(pUVar1,(MethodInfo *)0x0);
  }
  __this_00 = (__this->fields).checkmark;
  if (__this_00 != (UnityEngine_UI_Image_o *)0x0) {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this_00,true,(MethodInfo *)0x0);
    pUVar2 = (__this->fields).__4__this;
    if ((pUVar2 != (UI_MapEditorInspectPanel_o *)0x0) &&
       (__this_01 = (System_Collections_Generic_HashSet_object__o *)(pUVar2->fields)._mixedFields,
       __this_01 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
      System_Collections_Generic_HashSet_object___Remove
                (__this_01,(Il2CppObject *)(__this->fields).capturedKey,
                 (MethodInfo_4FB39F0 *)MethodInfo_System_Collections_Generic_HashSet_string_Remove);
      pUVar2 = (__this->fields).__4__this;
      if (pUVar2 != (UI_MapEditorInspectPanel_o *)0x0) {
        UI_MapEditorInspectPanel__OnChange(pUVar2,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel.<>c__DisplayClass104_0$$.ctor
// il2cpp: void UI_MapEditorInspectPanel___c__DisplayClass104_0___ctor (UI_MapEditorInspectPanel___c__DisplayClass104_0_o* __this, const MethodInfo* method);
// 0x5d92f70

void UI_MapEditorInspectPanel___c__DisplayClass104_0___ctor
               (UI_MapEditorInspectPanel___c__DisplayClass104_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorInspectPanel.<>c__DisplayClass104_0$$<OnChange>b__0
// il2cpp: bool UI_MapEditorInspectPanel___c__DisplayClass104_0___OnChange_b__0 (UI_MapEditorInspectPanel___c__DisplayClass104_0_o* __this, System_Collections_Generic_KeyValuePair_string__string__o field, const MethodInfo* method);
// 0x5d92f80

bool UI_MapEditorInspectPanel___c__DisplayClass104_0___OnChange_b__0
               (UI_MapEditorInspectPanel___c__DisplayClass104_0_o *__this,
               System_Collections_Generic_KeyValuePair_string__string__o field,MethodInfo *method)

{
  UI_MapEditorInspectPanel_o *pUVar1;
  System_Collections_Generic_HashSet_object__o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  bool bVar3;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  
  pSVar5 = field.fields.key;
  if (Il2CppMethodInitialized_07548046 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_string_get_Key);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorInspectPanel);
    Il2CppMethodInitialized_07548046 = '\x01';
  }
  pUVar1 = (__this->fields).__4__this;
  if (pUVar1 != (UI_MapEditorInspectPanel_o *)0x0) {
    __this_00 = (System_Collections_Generic_HashSet_object__o *)(pUVar1->fields)._mixedFields;
    pSVar4 = (__this->fields).componentName;
    if ((TypeInfo_UI_MapEditorInspectPanel->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel);
    }
    pSVar4 = UI_MapEditorInspectPanel__GetComponentFieldKey(pSVar4,pSVar5,(MethodInfo *)0x0);
    if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      bVar3 = System_Collections_Generic_HashSet_object___Contains
                        (__this_00,(Il2CppObject *)pSVar4,
                         (MethodInfo_4FB3720 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
      if (bVar3) {
        return false;
      }
      pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).syncedFields;
      if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        bVar3 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                          (pSVar2,(Il2CppObject *)pSVar5,
                           (MethodInfo_4AAD6F0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_string_ContainsKey);
        if (!bVar3) {
          return true;
        }
        pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).syncedFields;
        if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          pSVar5 = System_Collections_Generic_Dictionary_object__object___get_Item
                             (pSVar2,(Il2CppObject *)pSVar5,
                              (MethodInfo_4AAD450 *)
                              MethodInfo_System_Collections_Generic_Dictionary_string_string_get_Item);
          bVar3 = System_String__op_Inequality(pSVar5,field.fields.value,(MethodInfo *)0x0);
          return bVar3;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel.<>c__DisplayClass104_0$$<OnChange>b__3
// il2cpp: bool UI_MapEditorInspectPanel___c__DisplayClass104_0___OnChange_b__3 (UI_MapEditorInspectPanel___c__DisplayClass104_0_o* __this, Map_MapScriptComponent_o* item, const MethodInfo* method);
// 0x5d930b0

bool UI_MapEditorInspectPanel___c__DisplayClass104_0___OnChange_b__3
               (UI_MapEditorInspectPanel___c__DisplayClass104_0_o *__this,Map_MapScriptComponent_o *item,
               MethodInfo *method)

{
  bool bVar1;
  
  if (item == (Map_MapScriptComponent_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = System_String__op_Equality
                    ((item->fields).ComponentName,(__this->fields).componentName,(MethodInfo *)0x0);
  return bVar1;
}


// UI.MapEditorInspectPanel.<>c__DisplayClass63_0$$.ctor
// il2cpp: void UI_MapEditorInspectPanel___c__DisplayClass63_0___ctor (UI_MapEditorInspectPanel___c__DisplayClass63_0_o* __this, const MethodInfo* method);
// 0x5d930d0

void UI_MapEditorInspectPanel___c__DisplayClass63_0___ctor
               (UI_MapEditorInspectPanel___c__DisplayClass63_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorInspectPanel.<>c__DisplayClass63_0$$<CreateSection>b__0
// il2cpp: void UI_MapEditorInspectPanel___c__DisplayClass63_0___CreateSection_b__0 (UI_MapEditorInspectPanel___c__DisplayClass63_0_o* __this, bool expanded, const MethodInfo* method);
// 0x5d930e0

void UI_MapEditorInspectPanel___c__DisplayClass63_0___CreateSection_b__0
               (UI_MapEditorInspectPanel___c__DisplayClass63_0_o *__this,bool expanded,MethodInfo *method)

{
  uint32_t uVar1;
  System_Collections_Generic_HashSet_object__o *pSVar2;
  
  if (Il2CppMethodInitialized_07548047 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Remove);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorInspectPanel);
    Il2CppMethodInitialized_07548047 = '\x01';
  }
  uVar1 = (TypeInfo_UI_MapEditorInspectPanel->_2).cctor_finished_or_no_cctor;
  if (expanded) {
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel);
    }
    pSVar2 = (System_Collections_Generic_HashSet_object__o *)
             TypeInfo_UI_MapEditorInspectPanel->static_fields->CollapsedSections;
    if (pSVar2 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet_object___Remove
                (pSVar2,(Il2CppObject *)(__this->fields).key,
                 (MethodInfo_4FB39F0 *)MethodInfo_System_Collections_Generic_HashSet_string_Remove);
      return;
    }
  }
  else {
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel);
    }
    pSVar2 = (System_Collections_Generic_HashSet_object__o *)
             TypeInfo_UI_MapEditorInspectPanel->static_fields->CollapsedSections;
    if (pSVar2 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet_object___Add
                (pSVar2,(Il2CppObject *)(__this->fields).key,
                 (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel.<>c__DisplayClass63_0$$<CreateSection>b__1
// il2cpp: void UI_MapEditorInspectPanel___c__DisplayClass63_0___CreateSection_b__1 (UI_MapEditorInspectPanel___c__DisplayClass63_0_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x5d931a0

void UI_MapEditorInspectPanel___c__DisplayClass63_0___CreateSection_b__1
               (UI_MapEditorInspectPanel___c__DisplayClass63_0_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  UI_MapEditorInspectPanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 == (UI_MapEditorInspectPanel_o *)0x0) {
    ThrowNullReferenceException();
  }
  UI_MapEditorInspectPanel__ShowSectionContextMenu(__this_00,(__this->fields).key,eventData,(MethodInfo *)0x0)
  ;
  return;
}


// UI.MapEditorInspectPanel.<>c__DisplayClass64_0$$.ctor
// il2cpp: void UI_MapEditorInspectPanel___c__DisplayClass64_0___ctor (UI_MapEditorInspectPanel___c__DisplayClass64_0_o* __this, const MethodInfo* method);
// 0x5d931d0

void UI_MapEditorInspectPanel___c__DisplayClass64_0___ctor
               (UI_MapEditorInspectPanel___c__DisplayClass64_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorInspectPanel.<>c__DisplayClass64_0$$<ShowSectionContextMenu>b__0
// il2cpp: void UI_MapEditorInspectPanel___c__DisplayClass64_0___ShowSectionContextMenu_b__0 (UI_MapEditorInspectPanel___c__DisplayClass64_0_o* __this, const MethodInfo* method);
// 0x5d931e0

void UI_MapEditorInspectPanel___c__DisplayClass64_0___ShowSectionContextMenu_b__0
               (UI_MapEditorInspectPanel___c__DisplayClass64_0_o *__this,MethodInfo *method)

{
  UI_MapEditorInspectPanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 == (UI_MapEditorInspectPanel_o *)0x0) {
    ThrowNullReferenceException();
  }
  UI_MapEditorInspectPanel__CopyComponent(__this_00,(__this->fields).componentName,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorInspectPanel.<>c__DisplayClass64_0$$<ShowSectionContextMenu>b__1
// il2cpp: void UI_MapEditorInspectPanel___c__DisplayClass64_0___ShowSectionContextMenu_b__1 (UI_MapEditorInspectPanel___c__DisplayClass64_0_o* __this, const MethodInfo* method);
// 0x5d93200

void UI_MapEditorInspectPanel___c__DisplayClass64_0___ShowSectionContextMenu_b__1
               (UI_MapEditorInspectPanel___c__DisplayClass64_0_o *__this,MethodInfo *method)

{
  UI_MapEditorInspectPanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 == (UI_MapEditorInspectPanel_o *)0x0) {
    ThrowNullReferenceException();
  }
  UI_MapEditorInspectPanel__DeleteComponent(__this_00,(__this->fields).componentName,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorInspectPanel.<>c__DisplayClass70_0$$.ctor
// il2cpp: void UI_MapEditorInspectPanel___c__DisplayClass70_0___ctor (UI_MapEditorInspectPanel___c__DisplayClass70_0_o* __this, const MethodInfo* method);
// 0x5d93220

void UI_MapEditorInspectPanel___c__DisplayClass70_0___ctor
               (UI_MapEditorInspectPanel___c__DisplayClass70_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorInspectPanel.<>c__DisplayClass70_0$$<CopyComponent>b__0
// il2cpp: bool UI_MapEditorInspectPanel___c__DisplayClass70_0___CopyComponent_b__0 (UI_MapEditorInspectPanel___c__DisplayClass70_0_o* __this, Map_MapScriptComponent_o* item, const MethodInfo* method);
// 0x5d93230

bool UI_MapEditorInspectPanel___c__DisplayClass70_0___CopyComponent_b__0
               (UI_MapEditorInspectPanel___c__DisplayClass70_0_o *__this,Map_MapScriptComponent_o *item,
               MethodInfo *method)

{
  bool bVar1;
  
  if (item == (Map_MapScriptComponent_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = System_String__op_Equality
                    ((item->fields).ComponentName,(__this->fields).componentName,(MethodInfo *)0x0);
  return bVar1;
}


// UI.MapEditorInspectPanel.<>c__DisplayClass72_0$$.ctor
// il2cpp: void UI_MapEditorInspectPanel___c__DisplayClass72_0___ctor (UI_MapEditorInspectPanel___c__DisplayClass72_0_o* __this, const MethodInfo* method);
// 0x5d93250

void UI_MapEditorInspectPanel___c__DisplayClass72_0___ctor
               (UI_MapEditorInspectPanel___c__DisplayClass72_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorInspectPanel.<>c__DisplayClass72_0$$<PasteComponent>b__0
// il2cpp: bool UI_MapEditorInspectPanel___c__DisplayClass72_0___PasteComponent_b__0 (UI_MapEditorInspectPanel___c__DisplayClass72_0_o* __this, Map_MapScriptComponent_o* item, const MethodInfo* method);
// 0x5d93260

bool UI_MapEditorInspectPanel___c__DisplayClass72_0___PasteComponent_b__0
               (UI_MapEditorInspectPanel___c__DisplayClass72_0_o *__this,Map_MapScriptComponent_o *item,
               MethodInfo *method)

{
  Map_MapScriptComponent_o *pMVar1;
  bool bVar2;
  
  if ((item == (Map_MapScriptComponent_o *)0x0) ||
     (pMVar1 = (__this->fields).copied, pMVar1 == (Map_MapScriptComponent_o *)0x0)) {
    ThrowNullReferenceException();
  }
  bVar2 = System_String__op_Equality
                    ((item->fields).ComponentName,(pMVar1->fields).ComponentName,(MethodInfo *)0x0);
  return bVar2;
}


// UI.MapEditorInspectPanel.<>c__DisplayClass73_0$$.ctor
// il2cpp: void UI_MapEditorInspectPanel___c__DisplayClass73_0___ctor (UI_MapEditorInspectPanel___c__DisplayClass73_0_o* __this, const MethodInfo* method);
// 0x5d93290

void UI_MapEditorInspectPanel___c__DisplayClass73_0___ctor
               (UI_MapEditorInspectPanel___c__DisplayClass73_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorInspectPanel.<>c__DisplayClass73_0$$<DeleteComponent>b__0
// il2cpp: bool UI_MapEditorInspectPanel___c__DisplayClass73_0___DeleteComponent_b__0 (UI_MapEditorInspectPanel___c__DisplayClass73_0_o* __this, Map_MapScriptComponent_o* item, const MethodInfo* method);
// 0x5d932a0

bool UI_MapEditorInspectPanel___c__DisplayClass73_0___DeleteComponent_b__0
               (UI_MapEditorInspectPanel___c__DisplayClass73_0_o *__this,Map_MapScriptComponent_o *item,
               MethodInfo *method)

{
  bool bVar1;
  
  if (item == (Map_MapScriptComponent_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = System_String__op_Equality
                    ((item->fields).ComponentName,(__this->fields).componentName,(MethodInfo *)0x0);
  return bVar1;
}


// UI.MapEditorInspectPanel.<>c__DisplayClass82_0$$.ctor
// il2cpp: void UI_MapEditorInspectPanel___c__DisplayClass82_0___ctor (UI_MapEditorInspectPanel___c__DisplayClass82_0_o* __this, const MethodInfo* method);
// 0x5d932c0

void UI_MapEditorInspectPanel___c__DisplayClass82_0___ctor
               (UI_MapEditorInspectPanel___c__DisplayClass82_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorInspectPanel.<>c__DisplayClass82_0$$<Show>b__39
// il2cpp: void UI_MapEditorInspectPanel___c__DisplayClass82_0___Show_b__39 (UI_MapEditorInspectPanel___c__DisplayClass82_0_o* __this, const MethodInfo* method);
// 0x5d932d0

void UI_MapEditorInspectPanel___c__DisplayClass82_0___Show_b__39
               (UI_MapEditorInspectPanel___c__DisplayClass82_0_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  UI_MapEditorInspectPanel_o *pUVar2;
  UI_MapEditorMenu_o *pUVar3;
  UI_ConfirmPopup_o *__this_00;
  System_String_o *pSVar4;
  UnityEngine_Events_UnityAction_o *__this_01;
  MethodInfo *in_R9;
  
  if (Il2CppMethodInitialized_07548048 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass82_0_Show_b__48);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"DeleteWarning");
    Il2CppMethodInitialized_07548048 = '\x01';
  }
  pUVar2 = (__this->fields).__4__this;
  if ((pUVar2 == (UI_MapEditorInspectPanel_o *)0x0) ||
     (pUVar3 = (pUVar2->fields)._menu, pUVar3 == (UI_MapEditorMenu_o *)0x0)) goto label_05d9346a;
  __this_00 = (pUVar3->fields).ConfirmPopup;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    if (g_data_07548101 != '\0') goto label_05d9336c;
label_05d93424:
    pSVar4 = "DeleteWarning";
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Common");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    g_data_07548101 = '\x01';
    uVar1 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    if (g_data_07548101 == '\0') goto label_05d93424;
label_05d9336c:
    uVar1 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
    pSVar4 = "DeleteWarning";
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar4 = UI_UIManager__GetLocale
                     ("Common",pSVar4,"","",
                      "",in_R9);
  __this_01 = (__this->fields).__9__48;
  if (__this_01 == (UnityEngine_Events_UnityAction_o *)0x0) {
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              (__this_01,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass82_0_Show_b__48,(MethodInfo *)0x0)
    ;
    (__this->fields).__9__48 = __this_01;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__9__48);
  }
  if (__this_00 != (UI_ConfirmPopup_o *)0x0) {
    UI_ConfirmPopup__Show(__this_00,pSVar4,__this_01,(System_String_o *)0x0,(MethodInfo *)0x0);
    return;
  }
label_05d9346a:
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel.<>c__DisplayClass82_0$$<Show>b__48
// il2cpp: void UI_MapEditorInspectPanel___c__DisplayClass82_0___Show_b__48 (UI_MapEditorInspectPanel___c__DisplayClass82_0_o* __this, const MethodInfo* method);
// 0x5d934f0

void UI_MapEditorInspectPanel___c__DisplayClass82_0___Show_b__48
               (UI_MapEditorInspectPanel___c__DisplayClass82_0_o *__this,MethodInfo *method)

{
  UI_MapEditorInspectPanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 == (UI_MapEditorInspectPanel_o *)0x0) {
    ThrowNullReferenceException();
  }
  UI_MapEditorInspectPanel__DeleteComponent(__this_00,(__this->fields).componentName,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorInspectPanel.<>c__DisplayClass82_1$$.ctor
// il2cpp: void UI_MapEditorInspectPanel___c__DisplayClass82_1___ctor (UI_MapEditorInspectPanel___c__DisplayClass82_1_o* __this, const MethodInfo* method);
// 0x5d93510

void UI_MapEditorInspectPanel___c__DisplayClass82_1___ctor
               (UI_MapEditorInspectPanel___c__DisplayClass82_1_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorInspectPanel.<>c__DisplayClass82_1$$<Show>b__41
// il2cpp: void UI_MapEditorInspectPanel___c__DisplayClass82_1___Show_b__41 (UI_MapEditorInspectPanel___c__DisplayClass82_1_o* __this, const MethodInfo* method);
// 0x5d93520

void UI_MapEditorInspectPanel___c__DisplayClass82_1___Show_b__41
               (UI_MapEditorInspectPanel___c__DisplayClass82_1_o *__this,MethodInfo *method)

{
  UI_MapEditorInspectPanel___c__DisplayClass82_0_o *pUVar1;
  UI_MapEditorInspectPanel_o *__this_00;
  
  pUVar1 = (__this->fields).CS___8__locals1;
  if ((pUVar1 == (UI_MapEditorInspectPanel___c__DisplayClass82_0_o *)0x0) ||
     (__this_00 = (pUVar1->fields).__4__this, __this_00 == (UI_MapEditorInspectPanel_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UI_MapEditorInspectPanel__OnComponentFieldChanged
            (__this_00,(pUVar1->fields).componentName,(__this->fields).fieldName,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorInspectPanel.<>c__DisplayClass82_1$$<Show>b__40
// il2cpp: void UI_MapEditorInspectPanel___c__DisplayClass82_1___Show_b__40 (UI_MapEditorInspectPanel___c__DisplayClass82_1_o* __this, const MethodInfo* method);
// 0x5d93550

void UI_MapEditorInspectPanel___c__DisplayClass82_1___Show_b__40
               (UI_MapEditorInspectPanel___c__DisplayClass82_1_o *__this,MethodInfo *method)

{
  UI_MapEditorInspectPanel___c__DisplayClass82_0_o *pUVar1;
  UI_MapEditorInspectPanel_o *__this_00;
  
  pUVar1 = (__this->fields).CS___8__locals1;
  if ((pUVar1 == (UI_MapEditorInspectPanel___c__DisplayClass82_0_o *)0x0) ||
     (__this_00 = (pUVar1->fields).__4__this, __this_00 == (UI_MapEditorInspectPanel_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UI_MapEditorInspectPanel__OnComponentFieldChanged
            (__this_00,(pUVar1->fields).componentName,(__this->fields).fieldName,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorInspectPanel.<>c__DisplayClass82_1$$<Show>b__42
// il2cpp: void UI_MapEditorInspectPanel___c__DisplayClass82_1___Show_b__42 (UI_MapEditorInspectPanel___c__DisplayClass82_1_o* __this, const MethodInfo* method);
// 0x5d93580

void UI_MapEditorInspectPanel___c__DisplayClass82_1___Show_b__42
               (UI_MapEditorInspectPanel___c__DisplayClass82_1_o *__this,MethodInfo *method)

{
  UI_MapEditorInspectPanel___c__DisplayClass82_0_o *pUVar1;
  UI_MapEditorInspectPanel_o *__this_00;
  
  pUVar1 = (__this->fields).CS___8__locals1;
  if ((pUVar1 == (UI_MapEditorInspectPanel___c__DisplayClass82_0_o *)0x0) ||
     (__this_00 = (pUVar1->fields).__4__this, __this_00 == (UI_MapEditorInspectPanel_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UI_MapEditorInspectPanel__OnComponentFieldChanged
            (__this_00,(pUVar1->fields).componentName,(__this->fields).fieldName,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorInspectPanel.<>c__DisplayClass82_1$$<Show>b__43
// il2cpp: void UI_MapEditorInspectPanel___c__DisplayClass82_1___Show_b__43 (UI_MapEditorInspectPanel___c__DisplayClass82_1_o* __this, const MethodInfo* method);
// 0x5d935b0

void UI_MapEditorInspectPanel___c__DisplayClass82_1___Show_b__43
               (UI_MapEditorInspectPanel___c__DisplayClass82_1_o *__this,MethodInfo *method)

{
  UI_MapEditorInspectPanel___c__DisplayClass82_0_o *pUVar1;
  UI_MapEditorInspectPanel_o *__this_00;
  
  pUVar1 = (__this->fields).CS___8__locals1;
  if ((pUVar1 == (UI_MapEditorInspectPanel___c__DisplayClass82_0_o *)0x0) ||
     (__this_00 = (pUVar1->fields).__4__this, __this_00 == (UI_MapEditorInspectPanel_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UI_MapEditorInspectPanel__OnComponentFieldChanged
            (__this_00,(pUVar1->fields).componentName,(__this->fields).fieldName,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorInspectPanel.<>c__DisplayClass82_1$$<Show>b__46
// il2cpp: void UI_MapEditorInspectPanel___c__DisplayClass82_1___Show_b__46 (UI_MapEditorInspectPanel___c__DisplayClass82_1_o* __this, const MethodInfo* method);
// 0x5d935e0

void UI_MapEditorInspectPanel___c__DisplayClass82_1___Show_b__46
               (UI_MapEditorInspectPanel___c__DisplayClass82_1_o *__this,MethodInfo *method)

{
  UI_MapEditorInspectPanel___c__DisplayClass82_0_o *pUVar1;
  UI_MapEditorInspectPanel_o *__this_00;
  
  pUVar1 = (__this->fields).CS___8__locals1;
  if ((pUVar1 == (UI_MapEditorInspectPanel___c__DisplayClass82_0_o *)0x0) ||
     (__this_00 = (pUVar1->fields).__4__this, __this_00 == (UI_MapEditorInspectPanel_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UI_MapEditorInspectPanel__OnComponentFieldChanged
            (__this_00,(pUVar1->fields).componentName,(__this->fields).fieldName,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorInspectPanel.<>c__DisplayClass82_1$$<Show>b__47
// il2cpp: void UI_MapEditorInspectPanel___c__DisplayClass82_1___Show_b__47 (UI_MapEditorInspectPanel___c__DisplayClass82_1_o* __this, const MethodInfo* method);
// 0x5d93610

void UI_MapEditorInspectPanel___c__DisplayClass82_1___Show_b__47
               (UI_MapEditorInspectPanel___c__DisplayClass82_1_o *__this,MethodInfo *method)

{
  UI_MapEditorInspectPanel___c__DisplayClass82_0_o *pUVar1;
  UI_MapEditorInspectPanel_o *__this_00;
  
  pUVar1 = (__this->fields).CS___8__locals1;
  if ((pUVar1 == (UI_MapEditorInspectPanel___c__DisplayClass82_0_o *)0x0) ||
     (__this_00 = (pUVar1->fields).__4__this, __this_00 == (UI_MapEditorInspectPanel_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UI_MapEditorInspectPanel__OnComponentFieldChanged
            (__this_00,(pUVar1->fields).componentName,(__this->fields).fieldName,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorInspectPanel.<>c__DisplayClass83_0$$.ctor
// il2cpp: void UI_MapEditorInspectPanel___c__DisplayClass83_0___ctor (UI_MapEditorInspectPanel___c__DisplayClass83_0_o* __this, const MethodInfo* method);
// 0x5d93640

void UI_MapEditorInspectPanel___c__DisplayClass83_0___ctor
               (UI_MapEditorInspectPanel___c__DisplayClass83_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorInspectPanel.<>c__DisplayClass83_0$$<CreateMapObjectSetting>b__0
// il2cpp: void UI_MapEditorInspectPanel___c__DisplayClass83_0___CreateMapObjectSetting_b__0 (UI_MapEditorInspectPanel___c__DisplayClass83_0_o* __this, const MethodInfo* method);
// 0x5d93650

void UI_MapEditorInspectPanel___c__DisplayClass83_0___CreateMapObjectSetting_b__0
               (UI_MapEditorInspectPanel___c__DisplayClass83_0_o *__this,MethodInfo *method)

{
  System_Action_o *pSVar1;
  code *vtableDispatch;
  undefined8 in_RDX;
  
  pSVar1 = (__this->fields).onChanged;
  if (pSVar1 == (System_Action_o *)0x0) {
    ThrowNullReferenceException();
  }
  vtableDispatch = (code *)(pSVar1->fields).invoke_impl;
  (*vtableDispatch)((pSVar1->fields).method_code,(pSVar1->fields).method,in_RDX,vtableDispatch);
  return;
}


// UI.MapEditorInspectPanel.<>c__DisplayClass83_0$$<CreateMapObjectSetting>b__1
// il2cpp: void UI_MapEditorInspectPanel___c__DisplayClass83_0___CreateMapObjectSetting_b__1 (UI_MapEditorInspectPanel___c__DisplayClass83_0_o* __this, const MethodInfo* method);
// 0x5d93670

void UI_MapEditorInspectPanel___c__DisplayClass83_0___CreateMapObjectSetting_b__1
               (UI_MapEditorInspectPanel___c__DisplayClass83_0_o *__this,MethodInfo *method)

{
  UI_MapEditorInspectPanel_o *pUVar1;
  UI_MapEditorMenu_o *pUVar2;
  UI_MapEditorMapObjectPickerPopup_o *__this_00;
  System_Action_int__o *__this_01;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07548049 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_int);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass83_0_CreateMapObjectSetting_b__2);
    Il2CppMethodInitialized_07548049 = '\x01';
  }
  pUVar1 = (__this->fields).__4__this;
  if ((pUVar1 != (UI_MapEditorInspectPanel_o *)0x0) &&
     (pUVar2 = (pUVar1->fields)._menu, pUVar2 != (UI_MapEditorMenu_o *)0x0)) {
    __this_00 = (pUVar2->fields).MapObjectPickerPopup;
    __this_01 = (__this->fields).__9__2;
    if (__this_01 == (System_Action_int__o *)0x0) {
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_int);
      System_Action_int____ctor
                (__this_01,(Il2CppObject *)__this,
                 (intptr_t)MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass83_0_CreateMapObjectSetting_b__2
                 ,(MethodInfo_4A80B60 *)0x0);
      (__this->fields).__9__2 = __this_01;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__9__2);
    }
    if (__this_00 != (UI_MapEditorMapObjectPickerPopup_o *)0x0) {
      (__this_00->fields)._multiple = false;
      (__this_00->fields)._onSelect = __this_01;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields)._onSelect);
      (__this_00->fields)._onSelectMultiple = (System_Action_HashSet_int___o *)0x0;
      method_00 = (MethodInfo *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields)._onSelectMultiple);
      UI_MapEditorMapObjectPickerPopup__PrepareAndShow(__this_00,method_00);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel.<>c__DisplayClass83_0$$<CreateMapObjectSetting>b__2
// il2cpp: void UI_MapEditorInspectPanel___c__DisplayClass83_0___CreateMapObjectSetting_b__2 (UI_MapEditorInspectPanel___c__DisplayClass83_0_o* __this, int32_t id, const MethodInfo* method);
// 0x5d937a0

void UI_MapEditorInspectPanel___c__DisplayClass83_0___CreateMapObjectSetting_b__2
               (UI_MapEditorInspectPanel___c__DisplayClass83_0_o *__this,int32_t id,MethodInfo *method)

{
  Settings_IntSetting_o *__this_00;
  UI_InputSettingElement_o *pUVar1;
  System_Action_o *pSVar2;
  code *vtableDispatch;
  undefined8 extraout_RDX;
  
  if (Il2CppMethodInitialized_0754804a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    Il2CppMethodInitialized_0754804a = '\x01';
  }
  __this_00 = (__this->fields).setting;
  if (__this_00 != (Settings_IntSetting_o *)0x0) {
    Settings_TypedSetting_int___set_Value
              ((Settings_TypedSetting_int__o *)__this_00,id,
               (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
    pUVar1 = (__this->fields).input;
    if (pUVar1 != (UI_InputSettingElement_o *)0x0) {
      (*(pUVar1->klass->vtable)._6_SyncElement.methodPtr)
                (pUVar1,(pUVar1->klass->vtable)._6_SyncElement.method);
      pSVar2 = (__this->fields).onChanged;
      if (pSVar2 != (System_Action_o *)0x0) {
        vtableDispatch = (code *)(pSVar2->fields).invoke_impl;
        (*vtableDispatch)
                  ((pSVar2->fields).method_code,(pSVar2->fields).method,extraout_RDX,vtableDispatch);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel.<>c__DisplayClass84_0$$.ctor
// il2cpp: void UI_MapEditorInspectPanel___c__DisplayClass84_0___ctor (UI_MapEditorInspectPanel___c__DisplayClass84_0_o* __this, const MethodInfo* method);
// 0x5d93820

void UI_MapEditorInspectPanel___c__DisplayClass84_0___ctor
               (UI_MapEditorInspectPanel___c__DisplayClass84_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorInspectPanel.<>c__DisplayClass84_0$$<CreateMapObjectListSetting>b__0
// il2cpp: void UI_MapEditorInspectPanel___c__DisplayClass84_0___CreateMapObjectListSetting_b__0 (UI_MapEditorInspectPanel___c__DisplayClass84_0_o* __this, const MethodInfo* method);
// 0x5d93830

void UI_MapEditorInspectPanel___c__DisplayClass84_0___CreateMapObjectListSetting_b__0
               (UI_MapEditorInspectPanel___c__DisplayClass84_0_o *__this,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  Settings_HashSetSetting_int__o *pSVar2;
  System_Action_o *pSVar3;
  System_Collections_Generic_HashSet_int__o *value;
  System_String_o *pSVar4;
  
  if (Il2CppMethodInitialized_0754804b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorInspectPanel);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_HashSet_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_HashSet_int_set_Value);
    Il2CppMethodInitialized_0754804b = '\x01';
  }
  pSVar1 = (__this->fields).serialized;
  if (pSVar1 != (Settings_StringSetting_o *)0x0) {
    pSVar2 = (__this->fields).setting;
    pSVar4 = (pSVar1->fields)._value;
    if ((TypeInfo_UI_MapEditorInspectPanel->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel);
    }
    value = UI_MapEditorInspectPanel__ParseMapObjectIds(pSVar4,(MethodInfo *)0x0);
    if (pSVar2 != (Settings_HashSetSetting_int__o *)0x0) {
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)pSVar2,(Il2CppObject *)value,
                 (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_HashSet_int_set_Value);
      pSVar2 = (__this->fields).setting;
      if (pSVar2 != (Settings_HashSetSetting_int__o *)0x0) {
        pSVar1 = (__this->fields).serialized;
        pSVar4 = UI_MapEditorInspectPanel__SerializeMapObjectIds
                           ((System_Collections_Generic_IEnumerable_int__o *)(pSVar2->fields)._value,
                            (MethodInfo *)0x0);
        if (pSVar1 != (Settings_StringSetting_o *)0x0) {
          Settings_TypedSetting_object___set_Value
                    ((Settings_TypedSetting_T__o *)pSVar1,(Il2CppObject *)pSVar4,
                     (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
          pSVar3 = (__this->fields).onChanged;
          if (pSVar3 != (System_Action_o *)0x0) {
            (*(code *)(pSVar3->fields).invoke_impl)((pSVar3->fields).method_code,(pSVar3->fields).method);
            return;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel.<>c__DisplayClass84_0$$<CreateMapObjectListSetting>b__1
// il2cpp: void UI_MapEditorInspectPanel___c__DisplayClass84_0___CreateMapObjectListSetting_b__1 (UI_MapEditorInspectPanel___c__DisplayClass84_0_o* __this, const MethodInfo* method);
// 0x5d93930

void UI_MapEditorInspectPanel___c__DisplayClass84_0___CreateMapObjectListSetting_b__1
               (UI_MapEditorInspectPanel___c__DisplayClass84_0_o *__this,MethodInfo *method)

{
  UI_MapEditorInspectPanel_o *pUVar1;
  UI_MapEditorMenu_o *pUVar2;
  UI_MapEditorMapObjectPickerPopup_o *__this_00;
  Il2CppClass *selectedIds;
  System_Action_HashSet_int___o *__this_01;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0754804c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_HashSet_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_HashSet_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass84_0_CreateMapObjectListSetting_b__2);
    Il2CppMethodInitialized_0754804c = '\x01';
  }
  pUVar1 = (__this->fields).__4__this;
  if (((pUVar1 != (UI_MapEditorInspectPanel_o *)0x0) &&
      (pUVar2 = (pUVar1->fields)._menu, pUVar2 != (UI_MapEditorMenu_o *)0x0)) &&
     (method_00 = (MethodInfo *)(__this->fields).setting, method_00 != (MethodInfo *)0x0)) {
    __this_00 = (pUVar2->fields).MapObjectPickerPopup;
    selectedIds = method_00->klass;
    __this_01 = (__this->fields).__9__2;
    if (__this_01 == (System_Action_HashSet_int___o *)0x0) {
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_HashSet_int);
      method_00 = (MethodInfo *)0x0;
      System_Action_object____ctor
                ((System_Action_object__o *)__this_01,(Il2CppObject *)__this,
                 (intptr_t)
                 MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass84_0_CreateMapObjectListSetting_b__2,
                 (MethodInfo_4A81BE0 *)0x0);
      (__this->fields).__9__2 = __this_01;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__9__2);
    }
    if (__this_00 != (UI_MapEditorMapObjectPickerPopup_o *)0x0) {
      UI_MapEditorMapObjectPickerPopup__Show_5c93a10
                (__this_00,(System_Collections_Generic_HashSet_int__o *)selectedIds,__this_01,method_00);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel.<>c__DisplayClass84_0$$<CreateMapObjectListSetting>b__2
// il2cpp: void UI_MapEditorInspectPanel___c__DisplayClass84_0___CreateMapObjectListSetting_b__2 (UI_MapEditorInspectPanel___c__DisplayClass84_0_o* __this, System_Collections_Generic_HashSet_int__o* ids, const MethodInfo* method);
// 0x5d93b10

void UI_MapEditorInspectPanel___c__DisplayClass84_0___CreateMapObjectListSetting_b__2
               (UI_MapEditorInspectPanel___c__DisplayClass84_0_o *__this,
               System_Collections_Generic_HashSet_int__o *ids,MethodInfo *method)

{
  Settings_HashSetSetting_int__o *__this_00;
  Settings_StringSetting_o *__this_01;
  UI_InputSettingElement_o *pUVar1;
  System_Action_o *pSVar2;
  code *vtableDispatch;
  System_String_o *value;
  undefined8 extraout_RDX;
  
  if (Il2CppMethodInitialized_0754804d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorInspectPanel);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_HashSet_int_set_Value);
    Il2CppMethodInitialized_0754804d = '\x01';
  }
  __this_00 = (__this->fields).setting;
  if (__this_00 != (Settings_HashSetSetting_int__o *)0x0) {
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)ids,
               (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_HashSet_int_set_Value);
    __this_01 = (__this->fields).serialized;
    if ((TypeInfo_UI_MapEditorInspectPanel->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel);
    }
    value = UI_MapEditorInspectPanel__SerializeMapObjectIds
                      ((System_Collections_Generic_IEnumerable_int__o *)ids,(MethodInfo *)0x0);
    if (__this_01 != (Settings_StringSetting_o *)0x0) {
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)__this_01,(Il2CppObject *)value,
                 (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
      pUVar1 = (__this->fields).input;
      if (pUVar1 != (UI_InputSettingElement_o *)0x0) {
        (*(pUVar1->klass->vtable)._6_SyncElement.methodPtr)
                  (pUVar1,(pUVar1->klass->vtable)._6_SyncElement.method);
        pSVar2 = (__this->fields).onChanged;
        if (pSVar2 != (System_Action_o *)0x0) {
          vtableDispatch = (code *)(pSVar2->fields).invoke_impl;
          (*vtableDispatch)
                    ((pSVar2->fields).method_code,(pSVar2->fields).method,extraout_RDX,vtableDispatch);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel.<>c__DisplayClass91_0$$.ctor
// il2cpp: void UI_MapEditorInspectPanel___c__DisplayClass91_0___ctor (UI_MapEditorInspectPanel___c__DisplayClass91_0_o* __this, const MethodInfo* method);
// 0x5d93bf0

void UI_MapEditorInspectPanel___c__DisplayClass91_0___ctor
               (UI_MapEditorInspectPanel___c__DisplayClass91_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorInspectPanel.<>c__DisplayClass91_0$$<OnButtonClick>b__1
// il2cpp: void UI_MapEditorInspectPanel___c__DisplayClass91_0___OnButtonClick_b__1 (UI_MapEditorInspectPanel___c__DisplayClass91_0_o* __this, const MethodInfo* method);
// 0x5d93c00

void UI_MapEditorInspectPanel___c__DisplayClass91_0___OnButtonClick_b__1
               (UI_MapEditorInspectPanel___c__DisplayClass91_0_o *__this,MethodInfo *method)

{
  UI_MapEditorInspectPanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 == (UI_MapEditorInspectPanel_o *)0x0) {
    ThrowNullReferenceException();
  }
  UI_MapEditorInspectPanel__OnDeleteComponent(__this_00,(__this->fields).index,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorInspectPanel.<>c__DisplayClass95_0$$.ctor
// il2cpp: void UI_MapEditorInspectPanel___c__DisplayClass95_0___ctor (UI_MapEditorInspectPanel___c__DisplayClass95_0_o* __this, const MethodInfo* method);
// 0x5d93c20

void UI_MapEditorInspectPanel___c__DisplayClass95_0___ctor
               (UI_MapEditorInspectPanel___c__DisplayClass95_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorInspectPanel.<>c__DisplayClass95_0$$<SyncSettings>b__0
// il2cpp: bool UI_MapEditorInspectPanel___c__DisplayClass95_0___SyncSettings_b__0 (UI_MapEditorInspectPanel___c__DisplayClass95_0_o* __this, Map_MapObject_o* mapObject, const MethodInfo* method);
// 0x5d93c30

bool UI_MapEditorInspectPanel___c__DisplayClass95_0___SyncSettings_b__0
               (UI_MapEditorInspectPanel___c__DisplayClass95_0_o *__this,Map_MapObject_o *mapObject,
               MethodInfo *method)

{
  byte bVar1;
  Map_MapScriptBaseObject_o *pMVar2;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  bool bVar3;
  System_Func_TSource__bool__o *__this_00;
  
  if (Il2CppMethodInitialized_0754804e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Any_MapScriptComponent);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_MapScriptComponent_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptSceneObject);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass95_0_SyncSettings_b__1);
    Il2CppMethodInitialized_0754804e = '\x01';
  }
  if ((mapObject == (Map_MapObject_o *)0x0) ||
     (pMVar2 = (mapObject->fields).ScriptObject, pMVar2 == (Map_MapScriptBaseObject_o *)0x0)) {
    ThrowNullReferenceException();
  }
  bVar1 = (TypeInfo_Map_MapScriptSceneObject->_2).typeHierarchyDepth;
  if (((pMVar2->klass->_2).typeHierarchyDepth < bVar1) ||
     ((pMVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Map_MapScriptSceneObject)
     ) {
    il2cpp_codegen_raise_invalid_cast_exception();
  }
  source = *(System_Collections_Generic_IEnumerable_TSource__o **)&(*(uint32_t *)((char *)pMVar2 + 0x80));
  __this_00 = (System_Func_TSource__bool__o *)(__this->fields).__9__1;
  if (__this_00 == (System_Func_TSource__bool__o *)0x0) {
    __this_00 = (System_Func_TSource__bool__o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_MapScriptComponent_bool);
    System_Func_object__bool____ctor
              ((System_Func_object__bool__o *)__this_00,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass95_0_SyncSettings_b__1,
               (MethodInfo_4F19300 *)0x0);
    (__this->fields).__9__1 = (System_Func_MapScriptComponent__bool__o *)__this_00;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__9__1);
  }
  bVar3 = System_Linq_Enumerable__Any_object__34dfce0
                    (source,__this_00,
                     (MethodInfo_34DFCE0 *)MethodInfo_System_Linq_Enumerable_Any_MapScriptComponent);
  return bVar3;
}


// UI.MapEditorInspectPanel.<>c__DisplayClass95_0$$<SyncSettings>b__1
// il2cpp: bool UI_MapEditorInspectPanel___c__DisplayClass95_0___SyncSettings_b__1 (UI_MapEditorInspectPanel___c__DisplayClass95_0_o* __this, Map_MapScriptComponent_o* item, const MethodInfo* method);
// 0x5d93d40

bool UI_MapEditorInspectPanel___c__DisplayClass95_0___SyncSettings_b__1
               (UI_MapEditorInspectPanel___c__DisplayClass95_0_o *__this,Map_MapScriptComponent_o *item,
               MethodInfo *method)

{
  Map_MapScriptComponent_o *pMVar1;
  bool bVar2;
  
  if ((item == (Map_MapScriptComponent_o *)0x0) ||
     (pMVar1 = (__this->fields).component, pMVar1 == (Map_MapScriptComponent_o *)0x0)) {
    ThrowNullReferenceException();
  }
  bVar2 = System_String__op_Equality
                    ((item->fields).ComponentName,(pMVar1->fields).ComponentName,(MethodInfo *)0x0);
  return bVar2;
}


// UI.MapEditorInspectPanel.<>c__DisplayClass95_0$$<SyncSettings>b__2
// il2cpp: bool UI_MapEditorInspectPanel___c__DisplayClass95_0___SyncSettings_b__2 (UI_MapEditorInspectPanel___c__DisplayClass95_0_o* __this, Map_MapScriptComponent_o* item, const MethodInfo* method);
// 0x5d93d70

bool UI_MapEditorInspectPanel___c__DisplayClass95_0___SyncSettings_b__2
               (UI_MapEditorInspectPanel___c__DisplayClass95_0_o *__this,Map_MapScriptComponent_o *item,
               MethodInfo *method)

{
  Map_MapScriptComponent_o *pMVar1;
  bool bVar2;
  
  if ((item == (Map_MapScriptComponent_o *)0x0) ||
     (pMVar1 = (__this->fields).component, pMVar1 == (Map_MapScriptComponent_o *)0x0)) {
    ThrowNullReferenceException();
  }
  bVar2 = System_String__op_Equality
                    ((item->fields).ComponentName,(pMVar1->fields).ComponentName,(MethodInfo *)0x0);
  return bVar2;
}


// UI.MapEditorInspectPanel.<RestoreScrollPositionAfterLayout>d__89$$.ctor
// il2cpp: void UI_MapEditorInspectPanel__RestoreScrollPositionAfterLayout_d__89___ctor (UI_MapEditorInspectPanel__RestoreScrollPositionAfterLayout_d__89_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5d93da0

void UI_MapEditorInspectPanel__RestoreScrollPositionAfterLayout_d__89___ctor
               (UI_MapEditorInspectPanel__RestoreScrollPositionAfterLayout_d__89_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.MapEditorInspectPanel.<RestoreScrollPositionAfterLayout>d__89$$System.IDisposable.Dispose
// il2cpp: void UI_MapEditorInspectPanel__RestoreScrollPositionAfterLayout_d__89__System_IDisposable_Dispose (UI_MapEditorInspectPanel__RestoreScrollPositionAfterLayout_d__89_o* __this, const MethodInfo* method);
// 0x5d93dc0

void UI_MapEditorInspectPanel__RestoreScrollPositionAfterLayout_d__89__System_IDisposable_Dispose
               (UI_MapEditorInspectPanel__RestoreScrollPositionAfterLayout_d__89_o *__this,MethodInfo *method)

{
  return;
}


// UI.MapEditorInspectPanel.<RestoreScrollPositionAfterLayout>d__89$$MoveNext
// il2cpp: bool UI_MapEditorInspectPanel__RestoreScrollPositionAfterLayout_d__89__MoveNext (UI_MapEditorInspectPanel__RestoreScrollPositionAfterLayout_d__89_o* __this, const MethodInfo* method);
// 0x5d93dd0

bool UI_MapEditorInspectPanel__RestoreScrollPositionAfterLayout_d__89__MoveNext
               (UI_MapEditorInspectPanel__RestoreScrollPositionAfterLayout_d__89_o *__this,MethodInfo *method)

{
  int iVar1;
  UI_MapEditorInspectPanel_o *pUVar2;
  bool bVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_UI_ScrollRect_o *__this_00;
  Il2CppObject *__this_01;
  
  if (Il2CppMethodInitialized_0754804f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_ScrollRect);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForEndOfFrame);
    Il2CppMethodInitialized_0754804f = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    __this_01 = (Il2CppObject *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame);
    UnityEngine_WaitForEndOfFrame___ctor((UnityEngine_WaitForEndOfFrame_o *)__this_01,(MethodInfo *)0x0);
    (__this->fields).__2__current = __this_01;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
    (__this->fields).__1__state = 1;
  }
  else {
    if (iVar1 != 1) goto label_05d93f35;
    pUVar2 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
    if (pUVar2 == (UI_MapEditorInspectPanel_o *)0x0) goto label_05d93f49;
    pUVar4 = (pUVar2->fields).SinglePanel;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    __this_00 = (UnityEngine_UI_ScrollRect_o *)0x0;
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      pUVar4 = (pUVar2->fields).SinglePanel;
      if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto label_05d93f49;
      pUVar4 = UnityEngine_Transform__get_parent(pUVar4,(MethodInfo *)0x0);
      if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto label_05d93f49;
      pUVar4 = UnityEngine_Transform__get_parent(pUVar4,(MethodInfo *)0x0);
      if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto label_05d93f49;
      __this_00 = UnityEngine_Component__GetComponent_object_
                            ((UnityEngine_Component_o *)pUVar4,
                             (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_ScrollRect);
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      if (__this_00 == (UnityEngine_UI_ScrollRect_o *)0x0) {
label_05d93f49:
        ThrowNullReferenceException();
      }
      UnityEngine_UI_ScrollRect__set_verticalNormalizedPosition
                (__this_00,(__this->fields).position,(MethodInfo *)0x0);
    }
  }
label_05d93f35:
  return iVar1 == 0;
}


// UI.MapEditorInspectPanel.<RestoreScrollPositionAfterLayout>d__89$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_MapEditorInspectPanel__RestoreScrollPositionAfterLayout_d__89__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_MapEditorInspectPanel__RestoreScrollPositionAfterLayout_d__89_o* __this, const MethodInfo* method);
// 0x5d93f50

Il2CppObject *
UI_MapEditorInspectPanel__RestoreScrollPositionAfterLayout_d__89__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (UI_MapEditorInspectPanel__RestoreScrollPositionAfterLayout_d__89_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.MapEditorInspectPanel.<RestoreScrollPositionAfterLayout>d__89$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_MapEditorInspectPanel__RestoreScrollPositionAfterLayout_d__89__System_Collections_IEnumerator_Reset (UI_MapEditorInspectPanel__RestoreScrollPositionAfterLayout_d__89_o* __this, const MethodInfo* method);
// 0x5d93f60

void UI_MapEditorInspectPanel__RestoreScrollPositionAfterLayout_d__89__System_Collections_IEnumerator_Reset
               (UI_MapEditorInspectPanel__RestoreScrollPositionAfterLayout_d__89_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&
                  MethodInfo_UI_MapEditorInspectPanel_RestoreScrollPositionAfterLayout_d__89_System_Collections_IEnumerator_R
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// UI.MapEditorInspectPanel.<RestoreScrollPositionAfterLayout>d__89$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_MapEditorInspectPanel__RestoreScrollPositionAfterLayout_d__89__System_Collections_IEnumerator_get_Current (UI_MapEditorInspectPanel__RestoreScrollPositionAfterLayout_d__89_o* __this, const MethodInfo* method);
// 0x5d93fa0

Il2CppObject *
UI_MapEditorInspectPanel__RestoreScrollPositionAfterLayout_d__89__System_Collections_IEnumerator_get_Current
          (UI_MapEditorInspectPanel__RestoreScrollPositionAfterLayout_d__89_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.MapEditorInspectPanel.<WaitAndEnablePanel>d__90$$.ctor
// il2cpp: void UI_MapEditorInspectPanel__WaitAndEnablePanel_d__90___ctor (UI_MapEditorInspectPanel__WaitAndEnablePanel_d__90_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5d93fb0

void UI_MapEditorInspectPanel__WaitAndEnablePanel_d__90___ctor
               (UI_MapEditorInspectPanel__WaitAndEnablePanel_d__90_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.MapEditorInspectPanel.<WaitAndEnablePanel>d__90$$System.IDisposable.Dispose
// il2cpp: void UI_MapEditorInspectPanel__WaitAndEnablePanel_d__90__System_IDisposable_Dispose (UI_MapEditorInspectPanel__WaitAndEnablePanel_d__90_o* __this, const MethodInfo* method);
// 0x5d93fd0

void UI_MapEditorInspectPanel__WaitAndEnablePanel_d__90__System_IDisposable_Dispose
               (UI_MapEditorInspectPanel__WaitAndEnablePanel_d__90_o *__this,MethodInfo *method)

{
  return;
}


// UI.MapEditorInspectPanel.<WaitAndEnablePanel>d__90$$MoveNext
// il2cpp: bool UI_MapEditorInspectPanel__WaitAndEnablePanel_d__90__MoveNext (UI_MapEditorInspectPanel__WaitAndEnablePanel_d__90_o* __this, const MethodInfo* method);
// 0x5d93fe0

bool UI_MapEditorInspectPanel__WaitAndEnablePanel_d__90__MoveNext
               (UI_MapEditorInspectPanel__WaitAndEnablePanel_d__90_o *__this,MethodInfo *method)

{
  int iVar1;
  UI_MapEditorInspectPanel_o *pUVar2;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  Il2CppObject *__this_02;
  
  if (Il2CppMethodInitialized_07548050 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForEndOfFrame);
    Il2CppMethodInitialized_07548050 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    __this_02 = (Il2CppObject *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame);
    UnityEngine_WaitForEndOfFrame___ctor((UnityEngine_WaitForEndOfFrame_o *)__this_02,(MethodInfo *)0x0);
    (__this->fields).__2__current = __this_02;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
    (__this->fields).__1__state = 1;
  }
  else if (iVar1 == 1) {
    pUVar2 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if ((pUVar2 != (UI_MapEditorInspectPanel_o *)0x0) &&
       (__this_00 = (pUVar2->fields).SinglePanel, __this_00 != (UnityEngine_Transform_o *)0x0)) {
      __this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
      if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(__this_01,true,(MethodInfo *)0x0);
        goto label_05d9407f;
      }
    }
    ThrowNullReferenceException();
  }
label_05d9407f:
  return iVar1 == 0;
}


// UI.MapEditorInspectPanel.<WaitAndEnablePanel>d__90$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_MapEditorInspectPanel__WaitAndEnablePanel_d__90__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_MapEditorInspectPanel__WaitAndEnablePanel_d__90_o* __this, const MethodInfo* method);
// 0x5d94090

Il2CppObject *
UI_MapEditorInspectPanel__WaitAndEnablePanel_d__90__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (UI_MapEditorInspectPanel__WaitAndEnablePanel_d__90_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.MapEditorInspectPanel.<WaitAndEnablePanel>d__90$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_MapEditorInspectPanel__WaitAndEnablePanel_d__90__System_Collections_IEnumerator_Reset (UI_MapEditorInspectPanel__WaitAndEnablePanel_d__90_o* __this, const MethodInfo* method);
// 0x5d940a0

void UI_MapEditorInspectPanel__WaitAndEnablePanel_d__90__System_Collections_IEnumerator_Reset
               (UI_MapEditorInspectPanel__WaitAndEnablePanel_d__90_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&
                  MethodInfo_UI_MapEditorInspectPanel_WaitAndEnablePanel_d__90_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// UI.MapEditorInspectPanel.<WaitAndEnablePanel>d__90$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_MapEditorInspectPanel__WaitAndEnablePanel_d__90__System_Collections_IEnumerator_get_Current (UI_MapEditorInspectPanel__WaitAndEnablePanel_d__90_o* __this, const MethodInfo* method);
// 0x5d940e0

Il2CppObject *
UI_MapEditorInspectPanel__WaitAndEnablePanel_d__90__System_Collections_IEnumerator_get_Current
          (UI_MapEditorInspectPanel__WaitAndEnablePanel_d__90_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.MapEditorInspectPanel$$get_Width
// il2cpp: float UI_MapEditorInspectPanel__get_Width (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x5d7e7a0

float UI_MapEditorInspectPanel__get_Width(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  return 400.0;
}


// UI.MapEditorInspectPanel$$get_Height
// il2cpp: float UI_MapEditorInspectPanel__get_Height (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x5d7e7b0

float UI_MapEditorInspectPanel__get_Height(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  return 990.0;
}


// UI.MapEditorInspectPanel$$get_TopBarHeight
// il2cpp: float UI_MapEditorInspectPanel__get_TopBarHeight (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x5d7e7c0

float UI_MapEditorInspectPanel__get_TopBarHeight(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.MapEditorInspectPanel$$get_BottomBarHeight
// il2cpp: float UI_MapEditorInspectPanel__get_BottomBarHeight (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x5d7e7d0

float UI_MapEditorInspectPanel__get_BottomBarHeight(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.MapEditorInspectPanel$$GetWidth
// il2cpp: float UI_MapEditorInspectPanel__GetWidth (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x5d7e7e0

float UI_MapEditorInspectPanel__GetWidth(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  Settings_MapEditorSettings_o *pSVar1;
  Settings_FloatSetting_o *pSVar2;
  
  if (Il2CppMethodInitialized_07548005 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    Il2CppMethodInitialized_07548005 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->MapEditorSettings;
  if ((pSVar1 == (Settings_MapEditorSettings_o *)0x0) ||
     (pSVar2 = (pSVar1->fields).InspectorPanelWidth, pSVar2 == (Settings_FloatSetting_o *)0x0)) {
    ThrowNullReferenceException();
  }
  return (pSVar2->fields)._value;
}


// UI.MapEditorInspectPanel$$GetHeight
// il2cpp: float UI_MapEditorInspectPanel__GetHeight (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x5d7e840
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d7e918: shufps xmm1, xmm1, 0x55
// asm:   0x5d7e91c: xorps xmm0, xmm0
// asm:   0x5d7e91f: ucomiss xmm1, xmm0
// asm:   0x5d7e922: jbe 0x5d7e971

float UI_MapEditorInspectPanel__GetHeight(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Canvas_o *x;
  UnityEngine_RectTransform_o *__this_00;
  Il2CppClass *klass;
  float fVar2;
  UnityEngine_Rect_o UVar3;
  
  if (Il2CppMethodInitialized_07548006 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponentInParent_Canvas);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorInspectPanel);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_07548006 = '\x01';
  }
  x = UnityEngine_Component__GetComponentInParent_object__34b0d00
                ((UnityEngine_Component_o *)__this,
                 (MethodInfo_34B0D00 *)MethodInfo_UnityEngine_Component_GetComponentInParent_Canvas);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((x == (UnityEngine_Canvas_o *)0x0) ||
       (__this_00 = UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)x,
                               (MethodInfo_34B0830 *)
                               MethodInfo_UnityEngine_Component_GetComponent_RectTransform),
       __this_00 == (UnityEngine_RectTransform_o *)0x0)) {
      ThrowNullReferenceException();
    }
    UVar3 = UnityEngine_RectTransform__get_rect(__this_00,(MethodInfo *)0x0);
    klass = (Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel;
    if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
      klass = (Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel;
    }
    TypeInfo_UI_MapEditorInspectPanel = (UI_MapEditorInspectPanel_c *)klass;
    if (0.0 < UVar3.fields.m_Height) {
      if ((klass->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(klass);
      }
      fVar2 = UI_MapEditorInspectPanel__GetTopOffset((MethodInfo *)klass);
      return UVar3.fields.m_Height - fVar2;
    }
  }
  fVar2 = (*(__this->klass->vtable)._6_get_Height.methodPtr)
                    (__this,(__this->klass->vtable)._6_get_Height.method);
  return fVar2;
}


// UI.MapEditorInspectPanel$$GetTopOffset
// il2cpp: float UI_MapEditorInspectPanel__GetTopOffset (const MethodInfo* method);
// 0x5d7e9a0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d7e9d5: jmp 0x5d7ea5c
// asm:   0x5d7eb4b: jmp 0x5d7ea71

float UI_MapEditorInspectPanel__GetTopOffset(MethodInfo *method)

{
  byte bVar1;
  uint32_t uVar2;
  System_Collections_Generic_List_BasePopup__o *pSVar3;
  UnityEngine_Vector2_o UVar4;
  UnityEngine_Vector2_o UVar5;
  bool bVar6;
  UI_BaseMenu_o *pUVar7;
  UnityEngine_RectTransform_o *__this;
  UI_BaseMenu_o *x;
  float fVar8;
  float fStack_24;
  
  if (Il2CppMethodInitialized_07548007 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_07548007 = '\x01';
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) goto label_05d7ea24;
label_05d7e9c5:
    pUVar7 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if (pUVar7 == (UI_BaseMenu_o *)0x0) goto label_05d7ea5c;
label_05d7ea3c:
    bVar1 = (TypeInfo_UI_MapEditorMenu->_2).typeHierarchyDepth;
    if ((pUVar7->klass->_2).typeHierarchyDepth < bVar1) goto label_05d7ea5c;
    x = (UI_BaseMenu_o *)0x0;
    if ((pUVar7->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_UI_MapEditorMenu) {
      x = pUVar7;
    }
    uVar2 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  else {
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor != 0) goto label_05d7e9c5;
label_05d7ea24:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    pUVar7 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if (pUVar7 != (UI_BaseMenu_o *)0x0) goto label_05d7ea3c;
label_05d7ea5c:
    x = (UI_BaseMenu_o *)0x0;
    uVar2 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar6 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  fVar8 = 55.0;
  if (bVar6) {
    if (x == (UI_BaseMenu_o *)0x0) {
label_05d7eb50:
      ThrowNullReferenceException();
    }
    pSVar3 = (*(uint64_t *)((char *)x + 0xb8));
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar6 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pSVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    fVar8 = 55.0;
    if (bVar6) {
      pSVar3 = (*(uint64_t *)((char *)x + 0xb8));
      if ((pSVar3 == (System_Collections_Generic_List_BasePopup__o *)0x0) ||
         (__this = UnityEngine_Component__GetComponent_object_
                             ((UnityEngine_Component_o *)pSVar3,
                              (MethodInfo_34B0830 *)
                              MethodInfo_UnityEngine_Component_GetComponent_RectTransform),
         __this == (UnityEngine_RectTransform_o *)0x0)) goto label_05d7eb50;
      UVar4 = UnityEngine_RectTransform__get_sizeDelta(__this,(MethodInfo *)0x0);
      UVar5 = UnityEngine_RectTransform__get_anchoredPosition(__this,(MethodInfo *)0x0);
      fStack_24 = UVar4.fields.y;
      fStack_24 = fStack_24 - UVar5.fields.y;
      fVar8 = 0.0;
      if (0.0 <= fStack_24) {
        fVar8 = fStack_24;
      }
    }
  }
  return fVar8;
}


// UI.MapEditorInspectPanel$$get_VerticalSpacing
// il2cpp: float UI_MapEditorInspectPanel__get_VerticalSpacing (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x5d7eb60

float UI_MapEditorInspectPanel__get_VerticalSpacing(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  return 10.0;
}


// UI.MapEditorInspectPanel$$get_HorizontalPadding
// il2cpp: int32_t UI_MapEditorInspectPanel__get_HorizontalPadding (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x5d7eb70

int32_t UI_MapEditorInspectPanel__get_HorizontalPadding(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  return 0x19;
}


// UI.MapEditorInspectPanel$$get_VerticalPadding
// il2cpp: int32_t UI_MapEditorInspectPanel__get_VerticalPadding (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x5d7eb80

int32_t UI_MapEditorInspectPanel__get_VerticalPadding(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  return 0xf;
}


// UI.MapEditorInspectPanel$$get_ScrollBar
// il2cpp: bool UI_MapEditorInspectPanel__get_ScrollBar (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x5d7eb90

bool UI_MapEditorInspectPanel__get_ScrollBar(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  return true;
}


// UI.MapEditorInspectPanel$$Locale
// il2cpp: System_String_o* UI_MapEditorInspectPanel__Locale (System_String_o* item, const MethodInfo* method);
// 0x5d7eba0

System_String_o * UI_MapEditorInspectPanel__Locale(System_String_o *item,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_07548008 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"MapEditor");
    il2cpp_codegen_initialize_runtime_metadata(&"Inspect");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07548008 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar1 = UI_UIManager__GetLocale
                     ("MapEditor","Inspect",item,"",
                      "",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.MapEditorInspectPanel$$GetComponentFieldKey
// il2cpp: System_String_o* UI_MapEditorInspectPanel__GetComponentFieldKey (System_String_o* componentName, System_String_o* fieldName, const MethodInfo* method);
// 0x5d7ec30

System_String_o *
UI_MapEditorInspectPanel__GetComponentFieldKey
          (System_String_o *componentName,System_String_o *fieldName,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_07548009 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&":");
    il2cpp_codegen_initialize_runtime_metadata(&"Component:");
    Il2CppMethodInitialized_07548009 = '\x01';
  }
  pSVar1 = System_String__Concat_5302810
                     ("Component:",componentName,":",fieldName,(MethodInfo *)0x0);
  return pSVar1;
}


// UI.MapEditorInspectPanel$$OnComponentFieldChanged
// il2cpp: void UI_MapEditorInspectPanel__OnComponentFieldChanged (UI_MapEditorInspectPanel_o* __this, System_String_o* componentName, System_String_o* fieldName, const MethodInfo* method);
// 0x5d7ec90
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d7ece4: cmp byte ptr [rip + 0x17c931e], 0
// asm:   0x5d7eceb: jne 0x5d7ed0c
// asm:   0x5d7ed69: jmp 0x5d7ed0c

void UI_MapEditorInspectPanel__OnComponentFieldChanged
               (UI_MapEditorInspectPanel_o *__this,System_String_o *componentName,System_String_o *fieldName,
               MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0754800a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Remove);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorInspectPanel);
    Il2CppMethodInitialized_0754800a = '\x01';
  }
  __this_00 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._mixedFields;
  if ((TypeInfo_UI_MapEditorInspectPanel->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel);
  }
  if (Il2CppMethodInitialized_07548009 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&":");
    il2cpp_codegen_initialize_runtime_metadata(&"Component:");
    Il2CppMethodInitialized_07548009 = '\x01';
  }
  method_00 = (MethodInfo *)
              System_String__Concat_5302810
                        ("Component:",componentName,":",fieldName,(MethodInfo *)0x0
                        );
  if (__this_00 == (System_Collections_Generic_HashSet_object__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Remove
            (__this_00,(Il2CppObject *)method_00,
             (MethodInfo_4FB39F0 *)MethodInfo_System_Collections_Generic_HashSet_string_Remove);
  UI_MapEditorInspectPanel__OnChange(__this,method_00);
  return;
}


// UI.MapEditorInspectPanel$$CreateSection
// il2cpp: UnityEngine_Transform_o* UI_MapEditorInspectPanel__CreateSection (UI_MapEditorInspectPanel_o* __this, System_String_o* key, System_String_o* title, UI_ElementStyle_o* style, bool contextMenu, UnityEngine_Transform_o* parent, const MethodInfo* method);
// 0x5d82c70
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d82dac: jmp 0x5d82efb

UnityEngine_Transform_o *
UI_MapEditorInspectPanel__CreateSection
          (UI_MapEditorInspectPanel_o *__this,System_String_o *key,System_String_o *title,
          UI_ElementStyle_o *style,bool contextMenu,UnityEngine_Transform_o *parent,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  bool bVar1;
  UI_MapEditorInspectPanel___c__DisplayClass63_0_o *__this_01;
  System_Action_bool__o *__this_02;
  UI_CollapsibleSection_o *__this_03;
  UnityEngine_GameObject_o *pUVar2;
  UI_RightClickHandler_o *pUVar3;
  System_Action_PointerEventData__o *__this_04;
  UnityEngine_Transform_o *pUVar4;
  float spacing;
  
  if (Il2CppMethodInitialized_0754800b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_PointerEventData);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_RightClickHandler);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorInspectPanel);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass63_0_CreateSection_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass63_0_CreateSection_b__1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorInspectPanel_c__DisplayClass63_0);
    Il2CppMethodInitialized_0754800b = '\x01';
  }
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel_c__DisplayClass63_0);
  UI_MapEditorInspectPanel___c__DisplayClass63_0___ctor(__this_01,(MethodInfo *)0x0);
  if (__this_01 != (UI_MapEditorInspectPanel___c__DisplayClass63_0_o *)0x0) {
    (__this_01->fields).key = key;
    Il2CppCodeGenWriteBarrier(&(__this_01->fields).key);
    (__this_01->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(__this_01->fields).__4__this);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)parent,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      parent = (__this->fields).SinglePanel;
    }
    if ((TypeInfo_UI_MapEditorInspectPanel->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel);
      __this_00 = (System_Collections_Generic_HashSet_object__o *)
                  TypeInfo_UI_MapEditorInspectPanel->static_fields->CollapsedSections;
    }
    else {
      __this_00 = (System_Collections_Generic_HashSet_object__o *)
                  TypeInfo_UI_MapEditorInspectPanel->static_fields->CollapsedSections;
    }
    if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      bVar1 = System_Collections_Generic_HashSet_object___Contains
                        (__this_00,(Il2CppObject *)(__this_01->fields).key,
                         (MethodInfo_4FB3720 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
      __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_bool);
      System_Action_bool____ctor
                (__this_02,(Il2CppObject *)__this_01,
                 (intptr_t)MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass63_0_CreateSection_b__0,
                 (MethodInfo_4A7F1E0 *)0x0);
      __this_03 = UI_ElementFactory__CreateCollapsibleSection
                            (parent,style,title,!bVar1,__this_02,(MethodInfo *)0x0);
      if (contextMenu) {
        if ((__this_03 == (UI_CollapsibleSection_o *)0x0) ||
           (pUVar2 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0),
           pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto label_05d82efb;
        pUVar3 = UnityEngine_GameObject__AddComponent_object_
                           (pUVar2,(MethodInfo_353B6A0 *)
                                   MethodInfo_UnityEngine_GameObject_AddComponent_RightClickHandler);
        __this_04 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_PointerEventData);
        System_Action_object____ctor
                  ((System_Action_object__o *)__this_04,(Il2CppObject *)__this_01,
                   (intptr_t)MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass63_0_CreateSection_b__1,
                   (MethodInfo_4A81BE0 *)0x0);
        if (pUVar3 == (UI_RightClickHandler_o *)0x0) goto label_05d82efb;
        (pUVar3->fields)._onRightClick = __this_04;
        Il2CppCodeGenWriteBarrier(&(pUVar3->fields)._onRightClick);
      }
      spacing = (*(__this->klass->vtable)._11_get_VerticalSpacing.methodPtr)
                          (__this,(__this->klass->vtable)._11_get_VerticalSpacing.method);
      pUVar2 = UI_ElementFactory__CreateVerticalGroup(parent,spacing,0,(MethodInfo *)0x0);
      if ((__this_03 != (UI_CollapsibleSection_o *)0x0) &&
         (UI_CollapsibleSection__AddChild(__this_03,pUVar2,(MethodInfo *)0x0),
         pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
        pUVar4 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0);
        return pUVar4;
      }
    }
  }
label_05d82efb:
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel$$ShowSectionContextMenu
// il2cpp: void UI_MapEditorInspectPanel__ShowSectionContextMenu (UI_MapEditorInspectPanel_o* __this, System_String_o* key, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x5d82f00

void UI_MapEditorInspectPanel__ShowSectionContextMenu
               (UI_MapEditorInspectPanel_o *__this,System_String_o *key,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  int32_t *piVar1;
  UI_MapEditorContextMenu_o **targetAddress;
  uint uVar2;
  UI_MapEditorMenu_o *pUVar3;
  UI_MapEditorContextMenu_Item_array *pUVar4;
  UI_MapEditorContextMenu_Item_o item;
  UI_MapEditorContextMenu_Item_o item_00;
  UI_MapEditorContextMenu_Item_o item_01;
  UI_MapEditorContextMenu_Item_o item_02;
  UI_MapEditorContextMenu_Item_o item_03;
  UI_MapEditorContextMenu_Item_o *pUVar5;
  bool bVar6;
  UI_MapEditorInspectPanel___c__DisplayClass64_0_o *__this_00;
  UnityEngine_Transform_o *pUVar7;
  System_String_o *pSVar8;
  UI_MapEditorContextMenu_o *pUVar9;
  System_Collections_Generic_List_MapEditorContextMenu_Item__o *__this_01;
  System_Action_o *pSVar10;
  MethodInfo *pMVar11;
  MethodInfo *method_00;
  long lVar12;
  UnityEngine_EventSystems_PointerEventData_o *eventData_00;
  System_String_o *pSStack_c8;
  System_Action_o *pSStack_c0;
  undefined8 uStack_b8;
  System_String_o *pSStack_b0;
  System_Action_o *pSStack_a8;
  undefined8 uStack_a0;
  UI_MapEditorContextMenu_o *pUStack_98;
  System_String_o *pSStack_90;
  System_Action_o *pSStack_88;
  undefined8 uStack_80;
  UnityEngine_EventSystems_PointerEventData_o *pUStack_78;
  UI_MapEditorContextMenu_o *pUStack_70;
  UnityEngine_Vector3_Fields UStack_68;
  UnityEngine_Vector3_Fields UStack_58;
  UnityEngine_Vector3_Fields UStack_48;
  Map_MapScriptComponent_o *pMStack_38;
  
  if (Il2CppMethodInitialized_0754800c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapEditorContextMenu_Item_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapEditorContextMenu_Item_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_MapEditorContextMenu_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorContextMenu);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorInspectPanel_CopyTransform);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorInspectPanel_PasteComponent);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorInspectPanel_PasteTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorInspectPanel);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass64_0_ShowSectionContextMenu_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass64_0_ShowSectionContextMenu_b__1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorInspectPanel_c__DisplayClass64_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Transform");
    il2cpp_codegen_initialize_runtime_metadata(&"Keybinds");
    il2cpp_codegen_initialize_runtime_metadata(&"Copy");
    il2cpp_codegen_initialize_runtime_metadata(&"Delete");
    il2cpp_codegen_initialize_runtime_metadata(&"Paste");
    il2cpp_codegen_initialize_runtime_metadata(&"Component:");
    il2cpp_codegen_initialize_runtime_metadata(&"MapEditorSettings");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_0754800c = '\x01';
  }
  pMStack_38 = (Map_MapScriptComponent_o *)0x0;
  UStack_48.z = 0.0;
  UStack_48.x = 0.0;
  UStack_48.y = 0.0;
  UStack_58.z = 0.0;
  UStack_58.x = 0.0;
  UStack_58.y = 0.0;
  UStack_68.z = 0.0;
  UStack_68.x = 0.0;
  UStack_68.y = 0.0;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel_c__DisplayClass64_0);
  UI_MapEditorInspectPanel___c__DisplayClass64_0___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (UI_MapEditorInspectPanel___c__DisplayClass64_0_o *)0x0) {
    (__this_00->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
    pUVar3 = (__this->fields)._menu;
    if (pUVar3 != (UI_MapEditorMenu_o *)0x0) {
      bVar6 = UI_MapEditorMenu__IsPopupActive(pUVar3,(MethodInfo *)0x0);
      if (!bVar6) {
        targetAddress = &(__this->fields)._contextMenu;
        pUStack_78 = eventData;
        if ((__this->fields)._contextMenu == (UI_MapEditorContextMenu_o *)0x0) {
          pUVar3 = (__this->fields)._menu;
          pUStack_98 = (UI_MapEditorContextMenu_o *)key;
          if (pUVar3 == (UI_MapEditorMenu_o *)0x0) goto label_05d83815;
          pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0);
          pSVar8 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                             (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
          pUVar9 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MapEditorContextMenu);
          System_Object___ctor((Il2CppObject *)pUVar9,(MethodInfo *)0x0);
          (pUVar9->fields)._parent = pUVar7;
          Il2CppCodeGenWriteBarrier(&(pUVar9->fields)._parent);
          (pUVar9->fields)._themePanel = pSVar8;
          Il2CppCodeGenWriteBarrier(&(pUVar9->fields)._themePanel);
          (__this->fields)._contextMenu = pUVar9;
          Il2CppCodeGenWriteBarrier(targetAddress);
          key = (System_String_o *)pUStack_98;
        }
        bVar6 = System_String__op_Equality(key,"Transform",(MethodInfo *)0x0);
        if (bVar6) {
          pUStack_98 = *targetAddress;
          __this_01 = il2cpp_codegen_object_new
                                ((Il2CppClass *)
                                 TypeInfo_System_Collections_Generic_List_MapEditorContextMenu_Item);
          System_Collections_Generic_List_MapEditorContextMenu_Item____ctor
                    (__this_01,
                     (MethodInfo_3AA6D40 *)
                     MethodInfo_System_Collections_Generic_List_MapEditorContextMenu_Item_ctor);
          if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
          }
          pSVar8 = UI_UIManager__GetLocaleCommon("Copy",(MethodInfo *)0x0);
          pSVar10 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
          System_Action___ctor
                    (pSVar10,(Il2CppObject *)__this,
                     (intptr_t)MethodInfo_UI_MapEditorInspectPanel_CopyTransform,(MethodInfo *)0x0);
          pSStack_a8 = (System_Action_o *)0x0;
          uStack_a0 = 0;
          pSStack_b0 = pSVar8;
          Il2CppCodeGenWriteBarrier(&pSStack_b0);
          pSStack_a8 = pSVar10;
          Il2CppCodeGenWriteBarrier(&pSStack_a8);
          pMVar11 = MethodInfo_System_Collections_Generic_List_MapEditorContextMenu_Item_Add;
          uStack_a0 = CONCAT62(uStack_a0._2_6_,1);
          if (__this_01 == (System_Collections_Generic_List_MapEditorContextMenu_Item__o *)0x0)
          goto label_05d83815;
          piVar1 = &(__this_01->fields)._version;
          *piVar1 = *piVar1 + 1;
          pUVar4 = (__this_01->fields)._items;
          if (pUVar4 == (UI_MapEditorContextMenu_Item_array *)0x0) goto label_05d83815;
          uVar2 = (__this_01->fields)._size;
          if (uVar2 < (uint)pUVar4->max_length) {
            (__this_01->fields)._size = uVar2 + 1;
            pUVar5 = pUVar4->m_Items + (int)uVar2;
            uStack_a0._0_1_ = (undefined1)1;
            uStack_a0._1_1_ = (undefined1)(1 >> 8);
            (pUVar5->fields).Enabled = (bool)(undefined1)uStack_a0;
            (pUVar5->fields).SeparatorBefore = (bool)uStack_a0._1_1_;
            *(undefined6 *)&(pUVar5->fields).field_0x12 = uStack_a0._2_6_;
            pUVar4->m_Items[(int)uVar2].fields.Label = pSStack_b0;
            pUVar4->m_Items[(int)uVar2].fields.Action = pSStack_a8;
            Il2CppCodeGenWriteBarrier((void **)(pUVar4->m_Items + (int)uVar2));
          }
          else {
            item.fields.Action = pSStack_a8;
            item.fields.Label = pSStack_b0;
            uStack_a0._0_1_ = (undefined1)1;
            uStack_a0._1_1_ = (undefined1)(1 >> 8);
            item.fields.Enabled = (bool)(undefined1)uStack_a0;
            item.fields.SeparatorBefore = (bool)uStack_a0._1_1_;
            item.fields._18_6_ = uStack_a0._2_6_;
            System_Collections_Generic_List_MapEditorContextMenu_Item___AddWithResize
                      (__this_01,item,(MethodInfo_3AA76F0 *)pMVar11->klass->rgctx_data[0xe].method);
          }
          pSVar8 = UI_UIManager__GetLocale
                             ("MapEditorSettings","Keybinds","Paste",
                              "","",(MethodInfo *)0x0);
          pSVar10 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
          pMVar11 = (MethodInfo *)0x0;
          System_Action___ctor
                    (pSVar10,(Il2CppObject *)__this,
                     (intptr_t)MethodInfo_UI_MapEditorInspectPanel_PasteTransform,(MethodInfo *)0x0);
          if ((TypeInfo_UI_MapEditorInspectPanel->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel);
          }
          bVar6 = UI_MapEditorInspectPanel__TryReadTransformClipboard
                            ((UnityEngine_Vector3_o *)&UStack_48,(UnityEngine_Vector3_o *)&UStack_58,
                             (UnityEngine_Vector3_o *)&UStack_68,pMVar11);
          pSStack_c0 = (System_Action_o *)0x0;
          uStack_b8 = 0;
          pSStack_c8 = pSVar8;
          Il2CppCodeGenWriteBarrier(&pSStack_c8);
          pSStack_c0 = pSVar10;
          Il2CppCodeGenWriteBarrier(&pSStack_c0);
          pMVar11 = MethodInfo_System_Collections_Generic_List_MapEditorContextMenu_Item_Add;
          uStack_b8._0_2_ = (ushort)bVar6;
          piVar1 = &(__this_01->fields)._version;
          *piVar1 = *piVar1 + 1;
          pUVar4 = (__this_01->fields)._items;
          if (pUVar4 == (UI_MapEditorContextMenu_Item_array *)0x0) goto label_05d83815;
          uVar2 = (__this_01->fields)._size;
          lVar12 = (long)(int)uVar2;
          if (uVar2 < (uint)pUVar4->max_length) {
            (__this_01->fields)._size = uVar2 + 1;
            pMVar11 = (MethodInfo *)(lVar12 * 3);
            pUVar5 = pUVar4->m_Items + lVar12;
            (pUVar5->fields).Enabled = (bool)(undefined1)uStack_b8;
            (pUVar5->fields).SeparatorBefore = (bool)uStack_b8._1_1_;
            *(undefined6 *)&(pUVar5->fields).field_0x12 = uStack_b8._2_6_;
            pUVar4->m_Items[lVar12].fields.Label = pSStack_c8;
            pUVar4->m_Items[lVar12].fields.Action = pSStack_c0;
            Il2CppCodeGenWriteBarrier((void **)(pUVar4->m_Items + lVar12));
          }
          else {
            item_00.fields.Action = pSStack_c0;
            item_00.fields.Label = pSStack_c8;
            item_00.fields.Enabled = (bool)(undefined1)uStack_b8;
            item_00.fields.SeparatorBefore = (bool)uStack_b8._1_1_;
            item_00.fields._18_6_ = uStack_b8._2_6_;
            System_Collections_Generic_List_MapEditorContextMenu_Item___AddWithResize
                      (__this_01,item_00,(MethodInfo_3AA76F0 *)pMVar11->klass->rgctx_data[0xe].method);
          }
          if (pUStack_98 == (UI_MapEditorContextMenu_o *)0x0) goto label_05d83815;
          eventData_00 = pUStack_78;
          pUVar9 = pUStack_98;
        }
        else {
          if ((UI_MapEditorContextMenu_o *)key == (UI_MapEditorContextMenu_o *)0x0) goto label_05d83815;
          bVar6 = System_String__StartsWith(key,"Component:",(MethodInfo *)0x0);
          if (!bVar6) {
            return;
          }
          if ("Component:" == (System_String_o *)0x0) goto label_05d83815;
          pSVar8 = System_String__Substring
                             (key,("Component:"->fields)._stringLength,(MethodInfo *)0x0);
          (__this_00->fields).componentName = pSVar8;
          Il2CppCodeGenWriteBarrier(&(__this_00->fields).componentName);
          bVar6 = UI_MapEditorInspectPanel__TryReadComponentClipboard(__this,&pMStack_38,method_00);
          pUStack_98 = (UI_MapEditorContextMenu_o *)CONCAT71(pUStack_98._1_7_,bVar6);
          pUStack_70 = (__this->fields)._contextMenu;
          __this_01 = il2cpp_codegen_object_new
                                ((Il2CppClass *)
                                 TypeInfo_System_Collections_Generic_List_MapEditorContextMenu_Item);
          System_Collections_Generic_List_MapEditorContextMenu_Item____ctor
                    (__this_01,
                     (MethodInfo_3AA6D40 *)
                     MethodInfo_System_Collections_Generic_List_MapEditorContextMenu_Item_ctor);
          if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
          }
          pSVar8 = UI_UIManager__GetLocaleCommon("Copy",(MethodInfo *)0x0);
          pSVar10 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
          System_Action___ctor
                    (pSVar10,(Il2CppObject *)__this_00,
                     (intptr_t)
                     MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass64_0_ShowSectionContextMenu_b__0,
                     (MethodInfo *)0x0);
          pSStack_a8 = (System_Action_o *)0x0;
          uStack_a0 = 0;
          pSStack_b0 = pSVar8;
          Il2CppCodeGenWriteBarrier(&pSStack_b0);
          pSStack_a8 = pSVar10;
          Il2CppCodeGenWriteBarrier(&pSStack_a8);
          pMVar11 = MethodInfo_System_Collections_Generic_List_MapEditorContextMenu_Item_Add;
          uStack_a0 = CONCAT62(uStack_a0._2_6_,1);
          if (__this_01 == (System_Collections_Generic_List_MapEditorContextMenu_Item__o *)0x0)
          goto label_05d83815;
          piVar1 = &(__this_01->fields)._version;
          *piVar1 = *piVar1 + 1;
          pUVar4 = (__this_01->fields)._items;
          if (pUVar4 == (UI_MapEditorContextMenu_Item_array *)0x0) goto label_05d83815;
          uVar2 = (__this_01->fields)._size;
          if (uVar2 < (uint)pUVar4->max_length) {
            (__this_01->fields)._size = uVar2 + 1;
            pUVar5 = pUVar4->m_Items + (int)uVar2;
            uStack_a0._0_1_ = (undefined1)1;
            uStack_a0._1_1_ = (undefined1)(1 >> 8);
            (pUVar5->fields).Enabled = (bool)(undefined1)uStack_a0;
            (pUVar5->fields).SeparatorBefore = (bool)uStack_a0._1_1_;
            *(undefined6 *)&(pUVar5->fields).field_0x12 = uStack_a0._2_6_;
            pUVar4->m_Items[(int)uVar2].fields.Label = pSStack_b0;
            pUVar4->m_Items[(int)uVar2].fields.Action = pSStack_a8;
            Il2CppCodeGenWriteBarrier((void **)(pUVar4->m_Items + (int)uVar2));
          }
          else {
            item_01.fields.Action = pSStack_a8;
            item_01.fields.Label = pSStack_b0;
            uStack_a0._0_1_ = (undefined1)1;
            uStack_a0._1_1_ = (undefined1)(1 >> 8);
            item_01.fields.Enabled = (bool)(undefined1)uStack_a0;
            item_01.fields.SeparatorBefore = (bool)uStack_a0._1_1_;
            item_01.fields._18_6_ = uStack_a0._2_6_;
            System_Collections_Generic_List_MapEditorContextMenu_Item___AddWithResize
                      (__this_01,item_01,(MethodInfo_3AA76F0 *)pMVar11->klass->rgctx_data[0xe].method);
          }
          pSVar8 = UI_UIManager__GetLocale
                             ("MapEditorSettings","Keybinds","Paste",
                              "","",(MethodInfo *)0x0);
          pSVar10 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
          System_Action___ctor
                    (pSVar10,(Il2CppObject *)__this,
                     (intptr_t)MethodInfo_UI_MapEditorInspectPanel_PasteComponent,(MethodInfo *)0x0);
          pSStack_c0 = (System_Action_o *)0x0;
          uStack_b8 = 0;
          pSStack_c8 = pSVar8;
          Il2CppCodeGenWriteBarrier(&pSStack_c8);
          pSStack_c0 = pSVar10;
          Il2CppCodeGenWriteBarrier(&pSStack_c0);
          pMVar11 = MethodInfo_System_Collections_Generic_List_MapEditorContextMenu_Item_Add;
          uStack_b8._0_2_ = (ushort)(byte)pUStack_98;
          piVar1 = &(__this_01->fields)._version;
          *piVar1 = *piVar1 + 1;
          pUVar4 = (__this_01->fields)._items;
          if (pUVar4 == (UI_MapEditorContextMenu_Item_array *)0x0) goto label_05d83815;
          uVar2 = (__this_01->fields)._size;
          if (uVar2 < (uint)pUVar4->max_length) {
            (__this_01->fields)._size = uVar2 + 1;
            pUVar5 = pUVar4->m_Items + (int)uVar2;
            (pUVar5->fields).Enabled = (bool)(undefined1)uStack_b8;
            (pUVar5->fields).SeparatorBefore = (bool)uStack_b8._1_1_;
            *(undefined6 *)&(pUVar5->fields).field_0x12 = uStack_b8._2_6_;
            pUVar4->m_Items[(int)uVar2].fields.Label = pSStack_c8;
            pUVar4->m_Items[(int)uVar2].fields.Action = pSStack_c0;
            Il2CppCodeGenWriteBarrier((void **)(pUVar4->m_Items + (int)uVar2));
          }
          else {
            item_02.fields.Action = pSStack_c0;
            item_02.fields.Label = pSStack_c8;
            item_02.fields.Enabled = (bool)(undefined1)uStack_b8;
            item_02.fields.SeparatorBefore = (bool)uStack_b8._1_1_;
            item_02.fields._18_6_ = uStack_b8._2_6_;
            System_Collections_Generic_List_MapEditorContextMenu_Item___AddWithResize
                      (__this_01,item_02,(MethodInfo_3AA76F0 *)pMVar11->klass->rgctx_data[0xe].method);
          }
          pSVar8 = UI_UIManager__GetLocaleCommon("Delete",(MethodInfo *)0x0);
          pSVar10 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
          System_Action___ctor
                    (pSVar10,(Il2CppObject *)__this_00,
                     (intptr_t)
                     MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass64_0_ShowSectionContextMenu_b__1,
                     (MethodInfo *)0x0);
          pSStack_88 = (System_Action_o *)0x0;
          uStack_80 = 0;
          pSStack_90 = pSVar8;
          Il2CppCodeGenWriteBarrier(&pSStack_90);
          pSStack_88 = pSVar10;
          Il2CppCodeGenWriteBarrier(&pSStack_88);
          eventData_00 = pUStack_78;
          pMVar11 = MethodInfo_System_Collections_Generic_List_MapEditorContextMenu_Item_Add;
          uStack_80 = CONCAT62(uStack_80._2_6_,0x101);
          piVar1 = &(__this_01->fields)._version;
          *piVar1 = *piVar1 + 1;
          pUVar4 = (__this_01->fields)._items;
          if (pUVar4 == (UI_MapEditorContextMenu_Item_array *)0x0) goto label_05d83815;
          uVar2 = (__this_01->fields)._size;
          lVar12 = (long)(int)uVar2;
          if (uVar2 < (uint)pUVar4->max_length) {
            (__this_01->fields)._size = uVar2 + 1;
            pMVar11 = (MethodInfo *)(lVar12 * 3);
            pUVar5 = pUVar4->m_Items + lVar12;
            uStack_80._0_1_ = (undefined1)0x101;
            uStack_80._1_1_ = (undefined1)(0x101 >> 8);
            (pUVar5->fields).Enabled = (bool)(undefined1)uStack_80;
            (pUVar5->fields).SeparatorBefore = (bool)uStack_80._1_1_;
            *(undefined6 *)&(pUVar5->fields).field_0x12 = uStack_80._2_6_;
            pUVar4->m_Items[lVar12].fields.Label = pSStack_90;
            pUVar4->m_Items[lVar12].fields.Action = pSStack_88;
            Il2CppCodeGenWriteBarrier((void **)(pUVar4->m_Items + lVar12));
          }
          else {
            item_03.fields.Action = pSStack_88;
            item_03.fields.Label = pSStack_90;
            uStack_80._0_1_ = (undefined1)0x101;
            uStack_80._1_1_ = (undefined1)(0x101 >> 8);
            item_03.fields.Enabled = (bool)(undefined1)uStack_80;
            item_03.fields.SeparatorBefore = (bool)uStack_80._1_1_;
            item_03.fields._18_6_ = uStack_80._2_6_;
            System_Collections_Generic_List_MapEditorContextMenu_Item___AddWithResize
                      (__this_01,item_03,(MethodInfo_3AA76F0 *)pMVar11->klass->rgctx_data[0xe].method);
          }
          if (pUStack_70 == (UI_MapEditorContextMenu_o *)0x0) goto label_05d83815;
          pUVar9 = pUStack_70;
        }
        UI_MapEditorContextMenu__Show
                  (pUVar9,eventData_00,
                   (System_Collections_Generic_IList_MapEditorContextMenu_Item__o *)__this_01,pMVar11);
      }
      return;
    }
  }
label_05d83815:
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel$$CopyTransform
// il2cpp: void UI_MapEditorInspectPanel__CopyTransform (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x5d83dc0

void UI_MapEditorInspectPanel__CopyTransform(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  byte bVar1;
  Map_MapObject_o *pMVar2;
  System_String_array *value;
  System_String_o *pSVar3;
  System_Text_Encoding_o *pSVar4;
  System_Byte_array *inArray;
  UI_MapEditorInspectPanel_c *method_00;
  Map_MapScriptBaseObject_o *method_01;
  Map_MapScriptBaseObject_o *__this_00;
  UnityEngine_Vector3_o UVar5;
  
  if (Il2CppMethodInitialized_0754800d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Convert);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GUIUtility);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorInspectPanel);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptSceneObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"|");
    il2cpp_codegen_initialize_runtime_metadata(&"AOTTG2_TRANSFORM_V1:");
    Il2CppMethodInitialized_0754800d = '\x01';
  }
  pMVar2 = (__this->fields)._mapObject;
  if (pMVar2 != (Map_MapObject_o *)0x0) {
    __this_00 = (pMVar2->fields).ScriptObject;
    if (__this_00 == (Map_MapScriptBaseObject_o *)0x0) {
      SZArrayNew(TypeInfo_string_array,3);
      ThrowNullReferenceException();
    }
    bVar1 = (TypeInfo_Map_MapScriptSceneObject->_2).typeHierarchyDepth;
    if (((__this_00->klass->_2).typeHierarchyDepth < bVar1) ||
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_Map_MapScriptSceneObject)) {
      il2cpp_codegen_raise_invalid_cast_exception(__this_00);
    }
    value = (System_String_array *)SZArrayNew(TypeInfo_string_array,3);
    UVar5 = Map_MapScriptBaseObject__GetPosition(__this_00,(MethodInfo *)0x0);
    method_00 = TypeInfo_UI_MapEditorInspectPanel;
    if ((TypeInfo_UI_MapEditorInspectPanel->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel);
    }
    pSVar3 = UI_MapEditorInspectPanel__SerializeVector(UVar5,(MethodInfo *)method_00);
    if (value != (System_String_array *)0x0) {
      if ((int)value->max_length != 0) {
        value->m_Items[0] = pSVar3;
        Il2CppCodeGenWriteBarrier(value->m_Items);
        method_01 = __this_00;
        UVar5 = Map_MapScriptBaseObject__GetRotation(__this_00,(MethodInfo *)0x0);
        pSVar3 = UI_MapEditorInspectPanel__SerializeVector(UVar5,(MethodInfo *)method_01);
        if ((value->max_length & 0xfffffffe) != 0) {
          value->m_Items[1] = pSVar3;
          Il2CppCodeGenWriteBarrier(value->m_Items + 1);
          UVar5 = Map_MapScriptBaseObject__GetScale(__this_00,(MethodInfo *)0x0);
          pSVar3 = UI_MapEditorInspectPanel__SerializeVector(UVar5,(MethodInfo *)__this_00);
          if (2 < (uint)value->max_length) {
            value->m_Items[2] = pSVar3;
            Il2CppCodeGenWriteBarrier(value->m_Items + 2);
            pSVar3 = System_String__Join("|",value,(MethodInfo *)0x0);
            pSVar4 = System_Text_Encoding__get_UTF8((MethodInfo *)0x0);
            if (pSVar4 != (System_Text_Encoding_o *)0x0) {
              inArray = (*(pSVar4->klass->vtable)._18_GetBytes.methodPtr)
                                  (pSVar4,pSVar3,(pSVar4->klass->vtable)._18_GetBytes.method);
              if ((TypeInfo_System_Convert->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Convert);
              }
              pSVar3 = System_Convert__ToBase64String(inArray,(MethodInfo *)0x0);
              pSVar3 = System_String__Concat_52f0320("AOTTG2_TRANSFORM_V1:",pSVar3,(MethodInfo *)0x0);
              if ((TypeInfo_UnityEngine_GUIUtility->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_GUIUtility);
              }
              UnityEngine_GUIUtility__set_systemCopyBuffer(pSVar3,(MethodInfo *)0x0);
              return;
            }
            goto label_05d83ff3;
          }
        }
      }
      ThrowIndexOutOfRangeException();
    }
  }
label_05d83ff3:
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel$$SerializeVector
// il2cpp: System_String_o* UI_MapEditorInspectPanel__SerializeVector (UnityEngine_Vector3_o value, const MethodInfo* method);
// 0x5d84020

System_String_o * UI_MapEditorInspectPanel__SerializeVector(UnityEngine_Vector3_o value,MethodInfo *method)

{
  System_String_array *value_00;
  System_Globalization_CultureInfo_o *pSVar1;
  System_String_o *pSVar2;
  undefined8 local_28;
  float local_20 [2];
  
  local_20[0] = value.fields.z;
  local_28 = value.fields._0_8_;
  if (Il2CppMethodInitialized_0754800e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"R");
    il2cpp_codegen_initialize_runtime_metadata(&",");
    Il2CppMethodInitialized_0754800e = '\x01';
  }
  value_00 = (System_String_array *)SZArrayNew(TypeInfo_string_array,3);
  if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
  }
  pSVar1 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
  pSVar2 = System_Single__ToString_54d0ad0
                     ((float *)&local_28,"R",(System_IFormatProvider_o *)pSVar1,
                      (MethodInfo *)0x0);
  if (value_00 == (System_String_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)value_00->max_length != 0) {
    value_00->m_Items[0] = pSVar2;
    Il2CppCodeGenWriteBarrier(value_00->m_Items);
    pSVar1 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
    pSVar2 = System_Single__ToString_54d0ad0
                       ((float *)((long)&local_28 + 4),"R",
                        (System_IFormatProvider_o *)pSVar1,(MethodInfo *)0x0);
    if ((value_00->max_length & 0xfffffffe) != 0) {
      value_00->m_Items[1] = pSVar2;
      Il2CppCodeGenWriteBarrier(value_00->m_Items + 1);
      pSVar1 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
      pSVar2 = System_Single__ToString_54d0ad0
                         (local_20,"R",(System_IFormatProvider_o *)pSVar1,(MethodInfo *)0x0)
      ;
      if (2 < (uint)value_00->max_length) {
        value_00->m_Items[2] = pSVar2;
        Il2CppCodeGenWriteBarrier(value_00->m_Items + 2);
        pSVar2 = System_String__Join(",",value_00,(MethodInfo *)0x0);
        return pSVar2;
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// UI.MapEditorInspectPanel$$TryReadTransformClipboard
// il2cpp: bool UI_MapEditorInspectPanel__TryReadTransformClipboard (UnityEngine_Vector3_o* position, UnityEngine_Vector3_o* rotation, UnityEngine_Vector3_o* scale, const MethodInfo* method);
// 0x5d83820
// eh: try 0x5d8392c..0x5d83a7f -> pad 0x5d83a95 (+16 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: TypeInfo_System_FormatException]
// eh: try 0x5d83aae..0x5d83b07 -> pad 0x5d83b07 (+1 call sites) cleanup
// eh: try 0x5d83b0a..0x5d83b0f -> pad 0x5d83b17 catch (...) [compiler noexcept guard]
// asm: 44 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d83a7f: jmp 0x5d83a9b
// asm:   0x5d83a81: jmp 0x5d83a9b
// asm:   0x5d83a83: jmp 0x5d83a9b
// asm:   0x5d83a85: jmp 0x5d83a9b
// asm:   0x5d83a87: jmp 0x5d83a9b
// asm:   0x5d83a89: jmp 0x5d83a9b
// asm:   0x5d83a8b: jmp 0x5d83a9b
// asm:   0x5d83a8d: jmp 0x5d83a9b
// asm:   0x5d83a8f: jmp 0x5d83a9b
// asm:   0x5d83a91: jmp 0x5d83a9b
// asm:   0x5d83a93: jmp 0x5d83a9b
// asm:   0x5d83a95: jmp 0x5d83a9b
// asm:   0x5d83a97: jmp 0x5d83a9b
// asm:   0x5d83a99: jmp 0x5d83a9b
// asm:   0x5d83a9b: mov rbx, rax
// asm:   0x5d83a9e: cmp edx, 1
// asm:   0x5d83aa1: jne 0x5d83b0f
// asm:   0x5d83aa3: mov rdi, rbx
// asm:   0x5d83aa6: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d83aab: mov rbx, rax
// asm:   0x5d83aae: lea rdi, [rip + 0x14f4a2b]  ; TypeInfo_System_FormatException
// asm:   0x5d83ab5: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5d83aba: mov rcx, qword ptr [rbx]
// asm:   0x5d83abd: mov rsi, qword ptr [rcx]
// asm:   0x5d83ac0: mov rdi, rax
// asm:   0x5d83ac3: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5d83ac8: test al, al
// asm:   0x5d83aca: je 0x5d83ae6
// asm:   0x5d83acc: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d83ad1: xor r12d, r12d
// asm:   0x5d83ae6: mov edi, 8
// asm:   0x5d83aeb: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5d83af0: mov rcx, qword ptr [rbx]
// asm:   0x5d83af3: mov qword ptr [rax], rcx
// asm:   0x5d83af6: lea rsi, [rip + 0x10a9a03]
// asm:   0x5d83afd: mov rdi, rax
// asm:   0x5d83b00: xor edx, edx
// asm:   0x5d83b02: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5d83b07: mov rbx, rax
// asm:   0x5d83b0a: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d83b0f: mov rdi, rbx
// asm:   0x5d83b12: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5d83b17: mov rdi, rax
// asm:   0x5d83b1a: call 0x2ab61e0  ; __clang_call_terminate()

bool UI_MapEditorInspectPanel__TryReadTransformClipboard
               (UnityEngine_Vector3_o *position,UnityEngine_Vector3_o *rotation,UnityEngine_Vector3_o *scale,
               MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  UnityEngine_Vector3_StaticFields *pUVar4;
  bool bVar5;
  System_String_o *pSVar6;
  System_Text_Encoding_o *pSVar7;
  System_Byte_array *pSVar8;
  System_String_array *pSVar9;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *pMVar10;
  
  if (Il2CppMethodInitialized_0754800f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Convert);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GUIUtility);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorInspectPanel);
    il2cpp_codegen_initialize_runtime_metadata(&"AOTTG2_TRANSFORM_V1:");
    Il2CppMethodInitialized_0754800f = '\x01';
  }
  if (Il2CppMethodInitialized_0753e4b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e4b6 = '\x01';
  }
  pUVar4 = TypeInfo_UnityEngine_Vector3->static_fields;
  uVar2 = (pUVar4->zeroVector).fields.x;
  uVar3 = (pUVar4->zeroVector).fields.y;
  fVar1 = (pUVar4->zeroVector).fields.z;
  (scale->fields).x = (float)uVar2;
  (scale->fields).y = (float)uVar3;
  (scale->fields).z = fVar1;
  (rotation->fields).x = (float)uVar2;
  (rotation->fields).y = (float)uVar3;
  (rotation->fields).z = fVar1;
  (position->fields).x = (float)uVar2;
  (position->fields).y = (float)uVar3;
  (position->fields).z = fVar1;
  if ((TypeInfo_UnityEngine_GUIUtility->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_GUIUtility);
  }
  pSVar6 = UnityEngine_GUIUtility__get_systemCopyBuffer((MethodInfo *)0x0);
  bVar5 = System_String__IsNullOrEmpty(pSVar6,(MethodInfo *)0x0);
  if (!bVar5) {
    if (pSVar6 == (System_String_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar5 = System_String__StartsWith(pSVar6,"AOTTG2_TRANSFORM_V1:",(MethodInfo *)0x0);
    if (bVar5) {
      pSVar7 = System_Text_Encoding__get_UTF8((MethodInfo *)0x0);
      if ("AOTTG2_TRANSFORM_V1:" == (System_String_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar6 = System_String__Substring
                         (pSVar6,("AOTTG2_TRANSFORM_V1:"->fields)._stringLength,(MethodInfo *)0x0);
      if ((TypeInfo_System_Convert->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Convert);
      }
      pSVar8 = System_Convert__FromBase64String(pSVar6,(MethodInfo *)0x0);
      if (pSVar7 == (System_Text_Encoding_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar6 = (*(pSVar7->klass->vtable)._35_GetString.methodPtr)
                         (pSVar7,pSVar8,(pSVar7->klass->vtable)._35_GetString.method);
      if (pSVar6 == (System_String_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar9 = System_String__Split(pSVar6,0x7c,0,(MethodInfo *)0x0);
      if (pSVar9 == (System_String_array *)0x0) {
        ThrowNullReferenceException();
      }
      if ((int)pSVar9->max_length == 3) {
        pSVar6 = pSVar9->m_Items[0];
        pMVar10 = extraout_RDX;
        if ((TypeInfo_UI_MapEditorInspectPanel->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel);
          pMVar10 = extraout_RDX_00;
        }
        bVar5 = UI_MapEditorInspectPanel__TryParseVector(pSVar6,position,pMVar10);
        if (bVar5) {
          if ((pSVar9->max_length & 0xfffffffe) == 0) {
            ThrowIndexOutOfRangeException();
          }
          pSVar6 = pSVar9->m_Items[1];
          pMVar10 = extraout_RDX_01;
          if ((TypeInfo_UI_MapEditorInspectPanel->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel);
            pMVar10 = extraout_RDX_02;
          }
          bVar5 = UI_MapEditorInspectPanel__TryParseVector(pSVar6,rotation,pMVar10);
          if (bVar5) {
            if ((uint)pSVar9->max_length < 3) {
              ThrowIndexOutOfRangeException();
            }
            pSVar6 = pSVar9->m_Items[2];
            pMVar10 = extraout_RDX_03;
            if ((TypeInfo_UI_MapEditorInspectPanel->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel);
              pMVar10 = extraout_RDX_04;
            }
            bVar5 = UI_MapEditorInspectPanel__TryParseVector(pSVar6,scale,pMVar10);
            return bVar5;
          }
        }
      }
    }
  }
  return false;
}


// UI.MapEditorInspectPanel$$TryParseVector
// il2cpp: bool UI_MapEditorInspectPanel__TryParseVector (System_String_o* serialized, UnityEngine_Vector3_o* value, const MethodInfo* method);
// 0x5d84180

bool UI_MapEditorInspectPanel__TryParseVector
               (System_String_o *serialized,UnityEngine_Vector3_o *value,MethodInfo *method)

{
  float fVar1;
  UnityEngine_Vector3_StaticFields *pUVar2;
  System_String_o *pSVar3;
  float fVar4;
  bool bVar5;
  System_String_array *pSVar6;
  System_Globalization_CultureInfo_o *pSVar7;
  bool bVar8;
  float local_34;
  float local_30;
  float local_2c;
  
  if (Il2CppMethodInitialized_07548010 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    Il2CppMethodInitialized_07548010 = '\x01';
  }
  local_2c = 0.0;
  local_30 = 0.0;
  local_34 = 0.0;
  if (Il2CppMethodInitialized_0753e4b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e4b6 = '\x01';
  }
  pUVar2 = TypeInfo_UnityEngine_Vector3->static_fields;
  fVar4 = (pUVar2->zeroVector).fields.y;
  fVar1 = (pUVar2->zeroVector).fields.z;
  (value->fields).x = (pUVar2->zeroVector).fields.x;
  (value->fields).y = fVar4;
  (value->fields).z = fVar1;
  if (serialized != (System_String_o *)0x0) {
    pSVar6 = System_String__Split(serialized,0x2c,0,(MethodInfo *)0x0);
    if (pSVar6 != (System_String_array *)0x0) {
      if ((int)pSVar6->max_length == 3) {
        pSVar3 = pSVar6->m_Items[0];
        if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
        }
        bVar8 = false;
        pSVar7 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
        bVar5 = System_Single__TryParse_54d11a0
                          (pSVar3,0xa7,(System_IFormatProvider_o *)pSVar7,&local_2c,(MethodInfo *)0x0);
        if (bVar5) {
          if ((pSVar6->max_length & 0xfffffffe) == 0) {
label_05d8434b:
            ThrowIndexOutOfRangeException();
          }
          pSVar3 = pSVar6->m_Items[1];
          if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
          }
          bVar8 = false;
          pSVar7 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
          bVar5 = System_Single__TryParse_54d11a0
                            (pSVar3,0xa7,(System_IFormatProvider_o *)pSVar7,&local_30,(MethodInfo *)0x0);
          if (bVar5) {
            if ((uint)pSVar6->max_length < 3) goto label_05d8434b;
            pSVar3 = pSVar6->m_Items[2];
            if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
            }
            bVar8 = false;
            pSVar7 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
            bVar5 = System_Single__TryParse_54d11a0
                              (pSVar3,0xa7,(System_IFormatProvider_o *)pSVar7,&local_34,(MethodInfo *)0x0);
            if (bVar5) {
              (value->fields).x = local_2c;
              (value->fields).y = local_30;
              (value->fields).z = local_34;
              bVar8 = true;
            }
          }
        }
      }
      else {
        bVar8 = false;
      }
      return bVar8;
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel$$PasteTransform
// il2cpp: void UI_MapEditorInspectPanel__PasteTransform (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x5d84350
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d84443: test r14, r14
// asm:   0x5d8444c: jmp 0x5d8462d

void UI_MapEditorInspectPanel__PasteTransform(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  Il2CppObject *object;
  Settings_FloatSetting_o *pSVar1;
  UI_MapEditorMenu_o *__this_01;
  bool bVar2;
  UI_MapEditorInspectPanel___c_StaticFields *pUVar3;
  System_Predicate_T__o *match;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  UnityEngine_Vector3_Fields UStack_58;
  UnityEngine_Vector3_Fields UStack_48;
  UnityEngine_Vector3_Fields UStack_38;
  
  if (Il2CppMethodInitialized_07548011 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_string_RemoveWhere);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorInspectPanel);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Predicate_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorInspectPanel_c_PasteTransform_b__69_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorInspectPanel_c);
    Il2CppMethodInitialized_07548011 = '\x01';
  }
  UStack_38.z = 0.0;
  UStack_38.x = 0.0;
  UStack_38.y = 0.0;
  UStack_48.z = 0.0;
  UStack_48.x = 0.0;
  UStack_48.y = 0.0;
  UStack_58.z = 0.0;
  UStack_58.x = 0.0;
  UStack_58.y = 0.0;
  if ((TypeInfo_UI_MapEditorInspectPanel->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel);
  }
  bVar2 = UI_MapEditorInspectPanel__TryReadTransformClipboard
                    ((UnityEngine_Vector3_o *)&UStack_38,(UnityEngine_Vector3_o *)&UStack_48,
                     (UnityEngine_Vector3_o *)&UStack_58,in_RCX);
  if (!bVar2) {
    return;
  }
  __this_00 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._mixedFields;
  if ((TypeInfo_UI_MapEditorInspectPanel_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel_c);
    pUVar3 = TypeInfo_UI_MapEditorInspectPanel_c->static_fields;
    match = (System_Predicate_T__o *)pUVar3->__9__69_0;
  }
  else {
    pUVar3 = TypeInfo_UI_MapEditorInspectPanel_c->static_fields;
    match = (System_Predicate_T__o *)pUVar3->__9__69_0;
  }
  if (match == (System_Predicate_T__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel_c)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel_c);
      pUVar3 = TypeInfo_UI_MapEditorInspectPanel_c->static_fields;
    }
    object = (Il2CppObject *)pUVar3->__9;
    match = (System_Predicate_T__o *)
            il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Predicate_string);
    System_Predicate_object____ctor
              ((System_Predicate_object__o *)match,object,
               (intptr_t)MethodInfo_UI_MapEditorInspectPanel_c_PasteTransform_b__69_0,
               (MethodInfo_3DC95B0 *)0x0);
    pUVar3 = TypeInfo_UI_MapEditorInspectPanel_c->static_fields;
    pUVar3->__9__69_0 = (System_Predicate_string__o *)match;
    Il2CppCodeGenWriteBarrier(&pUVar3->__9__69_0);
  }
  if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___RemoveWhere
              (__this_00,match,
               (MethodInfo_4FB6160 *)MethodInfo_System_Collections_Generic_HashSet_string_RemoveWhere);
    pSVar1 = (__this->fields)._positionX;
    if (pSVar1 != (Settings_FloatSetting_o *)0x0) {
      Settings_TypedSetting_float___set_Value
                ((Settings_TypedSetting_float__o *)pSVar1,UStack_38.x,
                 (MethodInfo_42DA3B0 *)MethodInfo_Settings_TypedSetting_float_set_Value);
      pSVar1 = (__this->fields)._positionY;
      if (pSVar1 != (Settings_FloatSetting_o *)0x0) {
        Settings_TypedSetting_float___set_Value
                  ((Settings_TypedSetting_float__o *)pSVar1,UStack_38.y,
                   (MethodInfo_42DA3B0 *)MethodInfo_Settings_TypedSetting_float_set_Value);
        pSVar1 = (__this->fields)._positionZ;
        if (pSVar1 != (Settings_FloatSetting_o *)0x0) {
          Settings_TypedSetting_float___set_Value
                    ((Settings_TypedSetting_float__o *)pSVar1,UStack_38.z,
                     (MethodInfo_42DA3B0 *)MethodInfo_Settings_TypedSetting_float_set_Value);
          pSVar1 = (__this->fields)._rotationX;
          if (pSVar1 != (Settings_FloatSetting_o *)0x0) {
            Settings_TypedSetting_float___set_Value
                      ((Settings_TypedSetting_float__o *)pSVar1,UStack_48.x,
                       (MethodInfo_42DA3B0 *)MethodInfo_Settings_TypedSetting_float_set_Value);
            pSVar1 = (__this->fields)._rotationY;
            if (pSVar1 != (Settings_FloatSetting_o *)0x0) {
              Settings_TypedSetting_float___set_Value
                        ((Settings_TypedSetting_float__o *)pSVar1,UStack_48.y,
                         (MethodInfo_42DA3B0 *)MethodInfo_Settings_TypedSetting_float_set_Value);
              pSVar1 = (__this->fields)._rotationZ;
              if (pSVar1 != (Settings_FloatSetting_o *)0x0) {
                Settings_TypedSetting_float___set_Value
                          ((Settings_TypedSetting_float__o *)pSVar1,UStack_48.z,
                           (MethodInfo_42DA3B0 *)MethodInfo_Settings_TypedSetting_float_set_Value);
                pSVar1 = (__this->fields)._scaleX;
                if (pSVar1 != (Settings_FloatSetting_o *)0x0) {
                  Settings_TypedSetting_float___set_Value
                            ((Settings_TypedSetting_float__o *)pSVar1,UStack_58.x,
                             (MethodInfo_42DA3B0 *)MethodInfo_Settings_TypedSetting_float_set_Value);
                  pSVar1 = (__this->fields)._scaleY;
                  if (pSVar1 != (Settings_FloatSetting_o *)0x0) {
                    Settings_TypedSetting_float___set_Value
                              ((Settings_TypedSetting_float__o *)pSVar1,UStack_58.y,
                               (MethodInfo_42DA3B0 *)MethodInfo_Settings_TypedSetting_float_set_Value);
                    pSVar1 = (__this->fields)._scaleZ;
                    if (pSVar1 != (Settings_FloatSetting_o *)0x0) {
                      method_00 = MethodInfo_Settings_TypedSetting_float_set_Value;
                      Settings_TypedSetting_float___set_Value
                                ((Settings_TypedSetting_float__o *)pSVar1,UStack_58.z,
                                 (MethodInfo_42DA3B0 *)MethodInfo_Settings_TypedSetting_float_set_Value);
                      UI_MapEditorInspectPanel__OnChange(__this,method_00);
                      __this_01 = (__this->fields)._menu;
                      if (__this_01 != (UI_MapEditorMenu_o *)0x0) {
                        UI_MapEditorMenu__ShowInspector_5c96630
                                  (__this_01,(__this->fields)._mapObjects,(MethodInfo *)0x0);
                        return;
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
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel$$CopyComponent
// il2cpp: void UI_MapEditorInspectPanel__CopyComponent (UI_MapEditorInspectPanel_o* __this, System_String_o* componentName, const MethodInfo* method);
// 0x5d84640

void UI_MapEditorInspectPanel__CopyComponent
               (UI_MapEditorInspectPanel_o *__this,System_String_o *componentName,MethodInfo *method)

{
  byte bVar1;
  Map_MapObject_o *pMVar2;
  Map_MapScriptBaseObject_o *pMVar3;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  UI_MapEditorInspectPanel___c__DisplayClass70_0_o *__this_00;
  System_Func_MapScriptComponent__bool__o *__this_01;
  Map_MapScriptComponent_o *pMVar4;
  System_Text_Encoding_o *pSVar5;
  System_String_o *pSVar6;
  System_Byte_array *inArray;
  
  if (Il2CppMethodInitialized_07548012 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Convert);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_FirstOrDefault_MapScriptComponent);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_MapScriptComponent_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GUIUtility);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptSceneObject);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass70_0_CopyComponent_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorInspectPanel_c__DisplayClass70_0);
    il2cpp_codegen_initialize_runtime_metadata(&"AOTTG2_COMPONENT_V1:");
    Il2CppMethodInitialized_07548012 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel_c__DisplayClass70_0);
  UI_MapEditorInspectPanel___c__DisplayClass70_0___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (UI_MapEditorInspectPanel___c__DisplayClass70_0_o *)0x0) {
    (__this_00->fields).componentName = componentName;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).componentName);
    pMVar2 = (__this->fields)._mapObject;
    if ((pMVar2 != (Map_MapObject_o *)0x0) &&
       (pMVar3 = (pMVar2->fields).ScriptObject, pMVar3 != (Map_MapScriptBaseObject_o *)0x0)) {
      bVar1 = (TypeInfo_Map_MapScriptSceneObject->_2).typeHierarchyDepth;
      if (((pMVar3->klass->_2).typeHierarchyDepth < bVar1) ||
         ((pMVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_Map_MapScriptSceneObject)) {
        il2cpp_codegen_raise_invalid_cast_exception();
      }
      source = *(System_Collections_Generic_IEnumerable_TSource__o **)&(*(uint32_t *)((char *)pMVar3 + 0x80));
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_MapScriptComponent_bool);
      System_Func_object__bool____ctor
                ((System_Func_object__bool__o *)__this_01,(Il2CppObject *)__this_00,
                 (intptr_t)MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass70_0_CopyComponent_b__0,
                 (MethodInfo_4F19300 *)0x0);
      pMVar4 = System_Linq_Enumerable__FirstOrDefault_object__34ed9e0
                         (source,(System_Func_TSource__bool__o *)__this_01,
                          (MethodInfo_34ED9E0 *)
                          MethodInfo_System_Linq_Enumerable_FirstOrDefault_MapScriptComponent);
      if (pMVar4 == (Map_MapScriptComponent_o *)0x0) {
        return;
      }
      pSVar5 = System_Text_Encoding__get_UTF8((MethodInfo *)0x0);
      pSVar6 = (*(pMVar4->klass->vtable)._8_Serialize.methodPtr)
                         (pMVar4,(pMVar4->klass->vtable)._8_Serialize.method);
      if (pSVar5 != (System_Text_Encoding_o *)0x0) {
        inArray = (*(pSVar5->klass->vtable)._18_GetBytes.methodPtr)
                            (pSVar5,pSVar6,(pSVar5->klass->vtable)._18_GetBytes.method);
        if ((TypeInfo_System_Convert->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Convert);
        }
        pSVar6 = System_Convert__ToBase64String(inArray,(MethodInfo *)0x0);
        pSVar6 = System_String__Concat_52f0320("AOTTG2_COMPONENT_V1:",pSVar6,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_GUIUtility->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_GUIUtility);
        }
        UnityEngine_GUIUtility__set_systemCopyBuffer(pSVar6,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel$$TryReadComponentClipboard
// il2cpp: bool UI_MapEditorInspectPanel__TryReadComponentClipboard (UI_MapEditorInspectPanel_o* __this, Map_MapScriptComponent_o** component, const MethodInfo* method);
// 0x5d83b20
// eh: try 0x5d83bfa..0x5d83d1f -> pad 0x5d83d35 (+14 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: TypeInfo_System_Exception]
// eh: try 0x5d83d4a..0x5d83da1 -> pad 0x5d83da1 (+1 call sites) cleanup
// eh: try 0x5d83da4..0x5d83da9 -> pad 0x5d83db1 catch (...) [compiler noexcept guard]
// asm: 42 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d83d1f: jmp 0x5d83d37
// asm:   0x5d83d21: jmp 0x5d83d37
// asm:   0x5d83d23: jmp 0x5d83d37
// asm:   0x5d83d25: jmp 0x5d83d37
// asm:   0x5d83d27: jmp 0x5d83d37
// asm:   0x5d83d29: jmp 0x5d83d37
// asm:   0x5d83d2b: jmp 0x5d83d37
// asm:   0x5d83d2d: jmp 0x5d83d37
// asm:   0x5d83d2f: jmp 0x5d83d37
// asm:   0x5d83d31: jmp 0x5d83d37
// asm:   0x5d83d33: jmp 0x5d83d37
// asm:   0x5d83d35: jmp 0x5d83d37
// asm:   0x5d83d37: mov rbx, rax
// asm:   0x5d83d3a: cmp edx, 1
// asm:   0x5d83d3d: jne 0x5d83da9
// asm:   0x5d83d3f: mov rdi, rbx
// asm:   0x5d83d42: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d83d47: mov rbx, rax
// asm:   0x5d83d4a: lea rdi, [rip + 0x14f436f]  ; TypeInfo_System_Exception
// asm:   0x5d83d51: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5d83d56: mov rcx, qword ptr [rbx]
// asm:   0x5d83d59: mov rsi, qword ptr [rcx]
// asm:   0x5d83d5c: mov rdi, rax
// asm:   0x5d83d5f: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5d83d64: test al, al
// asm:   0x5d83d66: je 0x5d83d80
// asm:   0x5d83d68: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d83d6d: xor ebx, ebx
// asm:   0x5d83d80: mov edi, 8
// asm:   0x5d83d85: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5d83d8a: mov rcx, qword ptr [rbx]
// asm:   0x5d83d8d: mov qword ptr [rax], rcx
// asm:   0x5d83d90: lea rsi, [rip + 0x10a9769]
// asm:   0x5d83d97: mov rdi, rax
// asm:   0x5d83d9a: xor edx, edx
// asm:   0x5d83d9c: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5d83da1: mov rbx, rax
// asm:   0x5d83da4: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d83da9: mov rdi, rbx
// asm:   0x5d83dac: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5d83db1: mov rdi, rax
// asm:   0x5d83db4: call 0x2ab61e0  ; __clang_call_terminate()

bool UI_MapEditorInspectPanel__TryReadComponentClipboard
               (UI_MapEditorInspectPanel_o *__this,Map_MapScriptComponent_o **component,MethodInfo *method)

{
  GameManagers_MapEditorGameManager_o *pGVar1;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  bool bVar2;
  System_String_o *pSVar3;
  Map_MapScriptComponent_o *__this_01;
  System_Text_Encoding_o *pSVar4;
  System_Byte_array *pSVar5;
  System_Collections_Generic_List_string__o *__this_02;
  
  if (Il2CppMethodInitialized_07548013 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Convert);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GUIUtility);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptComponent);
    il2cpp_codegen_initialize_runtime_metadata(&"AOTTG2_COMPONENT_V1:");
    Il2CppMethodInitialized_07548013 = '\x01';
  }
  *component = (Map_MapScriptComponent_o *)0x0;
  Il2CppCodeGenWriteBarrier(component);
  if ((TypeInfo_UnityEngine_GUIUtility->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_GUIUtility);
  }
  pSVar3 = UnityEngine_GUIUtility__get_systemCopyBuffer((MethodInfo *)0x0);
  bVar2 = System_String__IsNullOrEmpty(pSVar3,(MethodInfo *)0x0);
  if (!bVar2) {
    if (pSVar3 == (System_String_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar2 = System_String__StartsWith(pSVar3,"AOTTG2_COMPONENT_V1:",(MethodInfo *)0x0);
    if (bVar2) {
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScriptComponent);
      Map_MapScriptComponent___ctor(__this_01,(MethodInfo *)0x0);
      pSVar4 = System_Text_Encoding__get_UTF8((MethodInfo *)0x0);
      if ("AOTTG2_COMPONENT_V1:" == (System_String_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar3 = System_String__Substring
                         (pSVar3,("AOTTG2_COMPONENT_V1:"->fields)._stringLength,(MethodInfo *)0x0);
      if ((TypeInfo_System_Convert->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Convert);
      }
      pSVar5 = System_Convert__FromBase64String(pSVar3,(MethodInfo *)0x0);
      if (pSVar4 == (System_Text_Encoding_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar3 = (*(pSVar4->klass->vtable)._35_GetString.methodPtr)
                         (pSVar4,pSVar5,(pSVar4->klass->vtable)._35_GetString.method);
      if (__this_01 == (Map_MapScriptComponent_o *)0x0) {
        ThrowNullReferenceException();
      }
      (*(__this_01->klass->vtable)._9_Deserialize.methodPtr)
                (__this_01,pSVar3,(__this_01->klass->vtable)._9_Deserialize.method);
      bVar2 = System_String__IsNullOrEmpty((__this_01->fields).ComponentName,(MethodInfo *)0x0);
      if (!bVar2) {
        pGVar1 = (__this->fields)._gameManager;
        if (pGVar1 == (GameManagers_MapEditorGameManager_o *)0x0) {
          ThrowNullReferenceException();
        }
        __this_00 = (pGVar1->fields).LogicEvaluator;
        if (__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
          ThrowNullReferenceException();
        }
        __this_02 = CustomLogic_CustomLogicEvaluator__GetComponentNames(__this_00,(MethodInfo *)0x0);
        if (__this_02 == (System_Collections_Generic_List_string__o *)0x0) {
          ThrowNullReferenceException();
        }
        bVar2 = System_Collections_Generic_List_object___Contains
                          ((System_Collections_Generic_List_object__o *)__this_02,
                           (Il2CppObject *)(__this_01->fields).ComponentName,
                           (MethodInfo_395D6D0 *)MethodInfo_System_Collections_Generic_List_string_Contains);
        if (bVar2) {
          *component = __this_01;
          Il2CppCodeGenWriteBarrier(component);
          return true;
        }
      }
    }
  }
  return false;
}


// UI.MapEditorInspectPanel$$PasteComponent
// il2cpp: void UI_MapEditorInspectPanel__PasteComponent (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x5d84860
// eh: try 0x5d849cb..0x5d84bc3 -> pad 0x5d84bcc (+14 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5d84bff..0x5d84c04 -> pad 0x5d84c29 cleanup
// eh: try 0x5d84c2c..0x5d84c36 -> pad 0x5d84c3e catch (...) [compiler noexcept guard]
// asm: 37 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d84bc8: jmp 0x5d84be2
// asm:   0x5d84bca: jmp 0x5d84be2
// asm:   0x5d84bcc: jmp 0x5d84be2
// asm:   0x5d84bce: jmp 0x5d84be2
// asm:   0x5d84bd0: jmp 0x5d84be2
// asm:   0x5d84bd2: jmp 0x5d84be2
// asm:   0x5d84bd4: jmp 0x5d84be2
// asm:   0x5d84bd6: jmp 0x5d84be2
// asm:   0x5d84bd8: jmp 0x5d84be2
// asm:   0x5d84bda: jmp 0x5d84be2
// asm:   0x5d84bdc: jmp 0x5d84be2
// asm:   0x5d84bde: jmp 0x5d84be2
// asm:   0x5d84be0: jmp 0x5d84be2
// asm:   0x5d84be2: mov rbx, rax
// asm:   0x5d84be5: mov rbp, qword ptr [rsp + 8]
// asm:   0x5d84bea: cmp edx, 1
// asm:   0x5d84bed: jne 0x5d84c2c
// asm:   0x5d84bef: mov rdi, rbx
// asm:   0x5d84bf2: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d84bf7: mov rbx, qword ptr [rax]
// asm:   0x5d84bfa: mov qword ptr [rsp + 0x30], rbx
// asm:   0x5d84bff: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d84c04: lea rax, [rip + 0x15097b5]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_Dispose
// asm:   0x5d84c0b: mov rsi, qword ptr [rax]
// asm:   0x5d84c0e: lea rdi, [rsp + 0x10]
// asm:   0x5d84c13: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5d84c18: test rbx, rbx
// asm:   0x5d84c1b: je 0x5d84b79
// asm:   0x5d84c21: mov rdi, rbx
// asm:   0x5d84c24: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d84c29: mov rbx, rax
// asm:   0x5d84c2c: lea rdi, [rsp + 0x30]
// asm:   0x5d84c31: call 0x2fdd520  ; il2cpp_runtime_helper_02fdd520()
// asm:   0x5d84c36: mov rdi, rbx
// asm:   0x5d84c39: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5d84c3e: mov rdi, rax
// asm:   0x5d84c41: call 0x2ab61e0  ; __clang_call_terminate()

void UI_MapEditorInspectPanel__PasteComponent(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  System_Collections_Generic_List_MapObject__o *__this_00;
  Il2CppClass *pIVar4;
  void *pvVar5;
  System_Collections_Generic_List_object__o *pSVar6;
  System_Object_array *pSVar7;
  UI_MapEditorMenu_o *__this_01;
  MethodInfo *pMVar8;
  bool bVar9;
  int32_t index;
  UI_MapEditorInspectPanel___c__DisplayClass72_0_o *__this_02;
  System_Predicate_T__o *match;
  Map_MapScriptComponent_o *pMVar10;
  MethodInfo *method_00;
  System_Predicate_MapScriptComponent__o **targetAddress;
  undefined1 auStack_68 [8];
  undefined1 *puStack_60;
  Il2CppObject *pIStack_58;
  undefined1 auStack_48 [16];
  Il2CppObject *pIStack_38;
  
  if (Il2CppMethodInitialized_07548014 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapScriptComponent_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapScriptComponent_FindIndex);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapObject_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapScriptComponent_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorInspectPanel);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptSceneObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Predicate_MapScriptComponent);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass72_0_PasteComponent_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorInspectPanel_c__DisplayClass72_0);
    Il2CppMethodInitialized_07548014 = '\x01';
  }
  auStack_68 = (undefined1  [8])0x0;
  puStack_60 = (undefined1 *)0x0;
  pIStack_58 = (Il2CppObject *)0x0;
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel_c__DisplayClass72_0);
  UI_MapEditorInspectPanel___c__DisplayClass72_0___ctor(__this_02,(MethodInfo *)0x0);
  if (__this_02 != (UI_MapEditorInspectPanel___c__DisplayClass72_0_o *)0x0) {
    bVar9 = UI_MapEditorInspectPanel__TryReadComponentClipboard(__this,&(__this_02->fields).copied,method_00);
    if (!bVar9) {
      return;
    }
    __this_00 = (__this->fields)._mapObjects;
    if (__this_00 != (System_Collections_Generic_List_MapObject__o *)0x0) {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)auStack_48,
                 (System_Collections_Generic_List_object__o *)__this_00,
                 (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_MapObject_GetEnumerator);
      pIStack_58 = pIStack_38;
      auStack_68 = (undefined1  [8])auStack_48._0_8_;
      puStack_60 = (undefined1 *)auStack_48._8_8_;
      auStack_48._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      auStack_48._8_8_ = auStack_68;
      targetAddress = &(__this_02->fields).__9__0;
      while (bVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext
                               ((System_Collections_Generic_List_Enumerator_object__o *)auStack_68,
                                (MethodInfo_4C45C50 *)
                                MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_MoveNext),
            bVar9) {
        if (pIStack_58 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar4 = pIStack_58[2].klass;
        if (pIVar4 == (Il2CppClass *)0x0) {
          ThrowNullReferenceException();
        }
        pvVar5 = (pIVar4->_1).image;
        bVar2 = (TypeInfo_Map_MapScriptSceneObject->_2).typeHierarchyDepth;
        if ((*(byte *)((long)pvVar5 + 0x130) < bVar2) ||
           (*(Map_MapScriptSceneObject_c **)(*(long *)((long)pvVar5 + 200) + -8 + (ulong)bVar2 * 8) !=
            TypeInfo_Map_MapScriptSceneObject)) {
          il2cpp_codegen_raise_invalid_cast_exception(pIVar4);
        }
        pSVar6 = (pIVar4->_1).fields;
        match = (System_Predicate_T__o *)*targetAddress;
        if (match == (System_Predicate_T__o *)0x0) {
          match = (System_Predicate_T__o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Predicate_MapScriptComponent);
          System_Predicate_object____ctor
                    ((System_Predicate_object__o *)match,(Il2CppObject *)__this_02,
                     (intptr_t)MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass72_0_PasteComponent_b__0,
                     (MethodInfo_3DC95B0 *)0x0);
          *targetAddress = (System_Predicate_MapScriptComponent__o *)match;
          Il2CppCodeGenWriteBarrier(targetAddress);
        }
        if (pSVar6 == (System_Collections_Generic_List_object__o *)0x0) {
          ThrowNullReferenceException();
        }
        index = System_Collections_Generic_List_object___FindIndex
                          (pSVar6,match,
                           (MethodInfo_395DCC0 *)
                           MethodInfo_System_Collections_Generic_List_MapScriptComponent_FindIndex);
        pMVar10 = (__this_02->fields).copied;
        if ((TypeInfo_UI_MapEditorInspectPanel->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel);
        }
        pMVar10 = UI_MapEditorInspectPanel__CloneComponent(pMVar10,(MethodInfo *)match);
        pMVar8 = MethodInfo_System_Collections_Generic_List_MapScriptComponent_Add;
        pSVar6 = (pIVar4->_1).fields;
        if (index < 0) {
          if (pSVar6 == (System_Collections_Generic_List_object__o *)0x0) {
label_05d84bb9:
            ThrowNullReferenceException();
          }
          piVar1 = &(pSVar6->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar7 = (pSVar6->fields)._items;
          if (pSVar7 == (System_Object_array *)0x0) goto label_05d84bb9;
          uVar3 = (pSVar6->fields)._size;
          if (uVar3 < (uint)pSVar7->max_length) {
            (pSVar6->fields)._size = uVar3 + 1;
            pSVar7->m_Items[(int)uVar3] = (Il2CppObject *)pMVar10;
            Il2CppCodeGenWriteBarrier(pSVar7->m_Items + (int)uVar3);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      (pSVar6,(Il2CppObject *)pMVar10,
                       (MethodInfo_395D230 *)pMVar8->klass->rgctx_data[0xe].method);
          }
        }
        else {
          if (pSVar6 == (System_Collections_Generic_List_object__o *)0x0) {
            ThrowNullReferenceException();
          }
          System_Collections_Generic_List_object___set_Item
                    (pSVar6,index,(Il2CppObject *)pMVar10,
                     (MethodInfo_395CF60 *)
                     MethodInfo_System_Collections_Generic_List_MapScriptComponent_set_Item);
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((System_Collections_Generic_List_Enumerator_object__o *)auStack_68,
                 (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_Dispose
                );
      __this_01 = (__this->fields)._menu;
      if (__this_01 != (UI_MapEditorMenu_o *)0x0) {
        UI_MapEditorMenu__ShowInspector_5c96630(__this_01,(__this->fields)._mapObjects,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel$$DeleteComponent
// il2cpp: void UI_MapEditorInspectPanel__DeleteComponent (UI_MapEditorInspectPanel_o* __this, System_String_o* componentName, const MethodInfo* method);
// 0x5d84d10
// eh: try 0x5d84e43..0x5d84f57 -> pad 0x5d84f66 (+7 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5d84f84..0x5d84f89 -> pad 0x5d84fae cleanup
// eh: try 0x5d84fb1..0x5d84fbb -> pad 0x5d84fc3 catch (...) [compiler noexcept guard]
// asm: 30 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d84f5c: jmp 0x5d84f68
// asm:   0x5d84f5e: jmp 0x5d84f68
// asm:   0x5d84f60: jmp 0x5d84f68
// asm:   0x5d84f62: jmp 0x5d84f68
// asm:   0x5d84f64: jmp 0x5d84f68
// asm:   0x5d84f66: jmp 0x5d84f68
// asm:   0x5d84f68: mov rbx, rax
// asm:   0x5d84f6b: mov rbp, qword ptr [rsp]
// asm:   0x5d84f6f: cmp edx, 1
// asm:   0x5d84f72: jne 0x5d84fb1
// asm:   0x5d84f74: mov rdi, rbx
// asm:   0x5d84f77: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d84f7c: mov rbx, qword ptr [rax]
// asm:   0x5d84f7f: mov qword ptr [rsp + 8], rbx
// asm:   0x5d84f84: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d84f89: lea rax, [rip + 0x1509430]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_Dispose
// asm:   0x5d84f90: mov rsi, qword ptr [rax]
// asm:   0x5d84f93: lea rdi, [rsp + 0x20]
// asm:   0x5d84f98: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5d84f9d: test rbx, rbx
// asm:   0x5d84fa0: je 0x5d84f1a
// asm:   0x5d84fa6: mov rdi, rbx
// asm:   0x5d84fa9: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d84fae: mov rbx, rax
// asm:   0x5d84fb1: lea rdi, [rsp + 8]
// asm:   0x5d84fb6: call 0x2fdd550  ; il2cpp_runtime_helper_02fdd550()
// asm:   0x5d84fbb: mov rdi, rbx
// asm:   0x5d84fbe: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5d84fc3: mov rdi, rax
// asm:   0x5d84fc6: call 0x2ab61e0  ; __clang_call_terminate()

void UI_MapEditorInspectPanel__DeleteComponent
               (UI_MapEditorInspectPanel_o *__this,System_String_o *componentName,MethodInfo *method)

{
  byte bVar1;
  System_Collections_Generic_List_MapObject__o *__this_00;
  Il2CppClass *pIVar2;
  void *pvVar3;
  System_Collections_Generic_List_object__o *__this_01;
  UI_MapEditorMenu_o *__this_02;
  bool bVar4;
  UI_MapEditorInspectPanel___c__DisplayClass73_0_o *__this_03;
  System_Predicate_T__o *match;
  System_Predicate_MapScriptComponent__o **targetAddress;
  undefined1 auStack_70 [16];
  Il2CppObject *pIStack_60;
  undefined1 auStack_58 [16];
  Il2CppObject *pIStack_48;
  UI_MapEditorInspectPanel___c__DisplayClass73_0_o *pUStack_38;
  
  if (Il2CppMethodInitialized_07548015 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapObject_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapScriptComponent_RemoveAll);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptSceneObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Predicate_MapScriptComponent);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass73_0_DeleteComponent_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorInspectPanel_c__DisplayClass73_0);
    Il2CppMethodInitialized_07548015 = '\x01';
  }
  __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel_c__DisplayClass73_0);
  UI_MapEditorInspectPanel___c__DisplayClass73_0___ctor(__this_03,(MethodInfo *)0x0);
  if (__this_03 != (UI_MapEditorInspectPanel___c__DisplayClass73_0_o *)0x0) {
    (__this_03->fields).componentName = componentName;
    Il2CppCodeGenWriteBarrier(&(__this_03->fields).componentName);
    __this_00 = (__this->fields)._mapObjects;
    if (__this_00 != (System_Collections_Generic_List_MapObject__o *)0x0) {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)auStack_70,
                 (System_Collections_Generic_List_object__o *)__this_00,
                 (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_MapObject_GetEnumerator);
      pIStack_48 = pIStack_60;
      auStack_58._0_8_ = auStack_70._0_8_;
      auStack_58._8_8_ = auStack_70._8_8_;
      auStack_70._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      targetAddress = &(__this_03->fields).__9__0;
      auStack_70._8_8_ = (System_Collections_Generic_List_Enumerator_object__o *)auStack_58;
      pUStack_38 = __this_03;
      while( true ) {
        bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          ((System_Collections_Generic_List_Enumerator_object__o *)auStack_58,
                           (MethodInfo_4C45C50 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_MoveNext);
        if (!bVar4) break;
        if (pIStack_48 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar2 = pIStack_48[2].klass;
        if (pIVar2 == (Il2CppClass *)0x0) {
          ThrowNullReferenceException();
        }
        pvVar3 = (pIVar2->_1).image;
        bVar1 = (TypeInfo_Map_MapScriptSceneObject->_2).typeHierarchyDepth;
        if ((*(byte *)((long)pvVar3 + 0x130) < bVar1) ||
           (*(Map_MapScriptSceneObject_c **)(*(long *)((long)pvVar3 + 200) + -8 + (ulong)bVar1 * 8) !=
            TypeInfo_Map_MapScriptSceneObject)) {
          il2cpp_codegen_raise_invalid_cast_exception();
        }
        __this_01 = (pIVar2->_1).fields;
        match = (System_Predicate_T__o *)*targetAddress;
        if (match == (System_Predicate_T__o *)0x0) {
          match = (System_Predicate_T__o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Predicate_MapScriptComponent);
          System_Predicate_object____ctor
                    ((System_Predicate_object__o *)match,(Il2CppObject *)pUStack_38,
                     (intptr_t)MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass73_0_DeleteComponent_b__0,
                     (MethodInfo_3DC95B0 *)0x0);
          *targetAddress = (System_Predicate_MapScriptComponent__o *)match;
          Il2CppCodeGenWriteBarrier(targetAddress);
        }
        if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) {
          ThrowNullReferenceException();
        }
        System_Collections_Generic_List_object___RemoveAll
                  (__this_01,match,
                   (MethodInfo_395EF50 *)
                   MethodInfo_System_Collections_Generic_List_MapScriptComponent_RemoveAll);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((System_Collections_Generic_List_Enumerator_object__o *)auStack_58,
                 (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_Dispose
                );
      __this_02 = (__this->fields)._menu;
      if (__this_02 != (UI_MapEditorMenu_o *)0x0) {
        UI_MapEditorMenu__ShowInspector_5c96630(__this_02,(__this->fields)._mapObjects,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel$$CloneComponent
// il2cpp: Map_MapScriptComponent_o* UI_MapEditorInspectPanel__CloneComponent (Map_MapScriptComponent_o* source, const MethodInfo* method);
// 0x5d84c50

Map_MapScriptComponent_o *
UI_MapEditorInspectPanel__CloneComponent(Map_MapScriptComponent_o *source,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *collection;
  Map_MapScriptComponent_o *__this;
  System_Collections_Generic_List_string__o *__this_00;
  
  if (Il2CppMethodInitialized_07548016 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_ctor_7196948);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptComponent);
    Il2CppMethodInitialized_07548016 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScriptComponent);
  Map_MapScriptComponent___ctor(__this,(MethodInfo *)0x0);
  if ((source == (Map_MapScriptComponent_o *)0x0) || (__this == (Map_MapScriptComponent_o *)0x0)) {
    ThrowNullReferenceException();
  }
  (__this->fields).ComponentName = (source->fields).ComponentName;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ComponentName);
  collection = (source->fields).Parameters;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor_395ca70
            ((System_Collections_Generic_List_object__o *)__this_00,
             (System_Collections_Generic_IEnumerable_T__o *)collection,
             (MethodInfo_395CA70 *)MethodInfo_System_Collections_Generic_List_string_ctor_7196948);
  (__this->fields).Parameters = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Parameters);
  return __this;
}


// UI.MapEditorInspectPanel$$OnDestroy
// il2cpp: void UI_MapEditorInspectPanel__OnDestroy (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x5d84fd0

void UI_MapEditorInspectPanel__OnDestroy(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorContextMenu_o *pUVar1;
  UnityEngine_Object_o *pUVar2;
  bool bVar3;
  
  pUVar1 = (__this->fields)._contextMenu;
  if (pUVar1 != (UI_MapEditorContextMenu_o *)0x0) {
    if (Il2CppMethodInitialized_07547fa2 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_07547fa2 = '\x01';
    }
    pUVar2 = (UnityEngine_Object_o *)(pUVar1->fields)._root;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      pUVar2 = (UnityEngine_Object_o *)(pUVar1->fields)._root;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      UnityEngine_Object__Destroy_69214e0(pUVar2,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// UI.MapEditorInspectPanel$$Setup
// il2cpp: void UI_MapEditorInspectPanel__Setup (UI_MapEditorInspectPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x5d85060
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d85134: lea rdi, [rbx + 0x98]
// asm:   0x5d8513b: jmp 0x5d85167
// asm:   0x5d851d0: lea rdi, [rbx + 0x90]
// asm:   0x5d851d7: jmp 0x5d851eb

void UI_MapEditorInspectPanel__Setup
               (UI_MapEditorInspectPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  byte bVar1;
  GameManagers_MapEditorGameManager_c *pGVar2;
  UI_MapEditorMenu_o *method_00;
  
  if (Il2CppMethodInitialized_07548017 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_MapEditorGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_07548017 = '\x01';
  }
  UI_MapEditorScaledPanel__Setup((UI_MapEditorScaledPanel_o *)__this,parent,(MethodInfo *)0x0);
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    method_00 = (UI_MapEditorMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if (method_00 != (UI_MapEditorMenu_o *)0x0) goto label_05d850da;
label_05d85155:
    (__this->fields)._menu = (UI_MapEditorMenu_o *)0x0;
  }
  else {
    method_00 = (UI_MapEditorMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if (method_00 == (UI_MapEditorMenu_o *)0x0) goto label_05d85155;
label_05d850da:
    pGVar2 = (GameManagers_MapEditorGameManager_c *)TypeInfo_UI_MapEditorMenu;
    bVar1 = (TypeInfo_UI_MapEditorMenu->_2).typeHierarchyDepth;
    if (((((GameManagers_BaseGameManager_c *)method_00->klass)->_2).typeHierarchyDepth < bVar1) ||
       ((((GameManagers_BaseGameManager_c *)method_00->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_UI_MapEditorMenu)) goto label_05d851ff;
    (__this->fields)._menu = method_00;
    if (((((GameManagers_BaseGameManager_c *)method_00->klass)->_2).typeHierarchyDepth < bVar1) ||
       ((((GameManagers_BaseGameManager_c *)method_00->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)pGVar2)) goto label_05d851ff;
  }
  Il2CppCodeGenWriteBarrier(&(__this->fields)._menu);
  pGVar2 = TypeInfo_GameManagers_MapEditorGameManager;
  method_00 = (UI_MapEditorMenu_o *)
              TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if (method_00 == (UI_MapEditorMenu_o *)0x0) {
    (__this->fields)._gameManager = (GameManagers_MapEditorGameManager_o *)0x0;
label_05d851eb:
    Il2CppCodeGenWriteBarrier(&(__this->fields)._gameManager);
    UI_MapEditorInspectPanel__AddResizeHandle(__this,(MethodInfo *)method_00);
    return;
  }
  bVar1 = (TypeInfo_GameManagers_MapEditorGameManager->_2).typeHierarchyDepth;
  if ((bVar1 <= (((GameManagers_BaseGameManager_c *)method_00->klass)->_2).typeHierarchyDepth) &&
     ((((GameManagers_BaseGameManager_c *)method_00->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] ==
      (Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager)) {
    (__this->fields)._gameManager = (GameManagers_MapEditorGameManager_o *)method_00;
    if ((bVar1 <= (((GameManagers_BaseGameManager_c *)method_00->klass)->_2).typeHierarchyDepth) &&
       ((((GameManagers_BaseGameManager_c *)method_00->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)pGVar2)) goto label_05d851eb;
  }
label_05d851ff:
  il2cpp_codegen_raise_invalid_cast_exception(method_00,pGVar2);
}


// UI.MapEditorInspectPanel$$AddResizeHandle
// il2cpp: void UI_MapEditorInspectPanel__AddResizeHandle (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x5d85210

void UI_MapEditorInspectPanel__AddResizeHandle(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Transform_o *parent;
  UnityEngine_RectTransform_o *__this_02;
  UnityEngine_UI_Image_o *pUVar1;
  UI_PanelResizeHandle_o *pUVar2;
  System_Action_float__o *__this_03;
  UnityEngine_Color_o UVar3;
  
  if (Il2CppMethodInitialized_07548018 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_float);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_PanelResizeHandle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorInspectPanel_AddResizeHandle_b__77_0);
    il2cpp_codegen_initialize_runtime_metadata(&"ResizeHandle");
    Il2CppMethodInitialized_07548018 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
  UnityEngine_GameObject___ctor(__this_00,"ResizeHandle",(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__SetParent_692d510(__this_01,parent,false,(MethodInfo *)0x0);
      __this_02 = UnityEngine_GameObject__AddComponent_object_
                            (__this_00,
                             (MethodInfo_353B6A0 *)
                             MethodInfo_UnityEngine_GameObject_AddComponent_RectTransform);
      if (__this_02 != (UnityEngine_RectTransform_o *)0x0) {
        UnityEngine_RectTransform__set_anchorMin(__this_02,(UnityEngine_Vector2_o)0x0,(MethodInfo *)0x0);
        UnityEngine_RectTransform__set_anchorMax
                  (__this_02,(UnityEngine_Vector2_o)0x3f80000000000000,(MethodInfo *)0x0);
        UnityEngine_RectTransform__set_offsetMin
                  (__this_02,(UnityEngine_Vector2_o)0xc1000000,(MethodInfo *)0x0);
        UnityEngine_RectTransform__set_offsetMax(__this_02,(UnityEngine_Vector2_o)0x0,(MethodInfo *)0x0);
        pUVar1 = UnityEngine_GameObject__AddComponent_object_
                           (__this_00,
                            (MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_Image);
        if (pUVar1 != (UnityEngine_UI_Image_o *)0x0) {
          UVar3.fields.b = 1.0;
          UVar3.fields.a = 0.04;
          UVar3.fields.r = 1.0;
          UVar3.fields.g = 1.0;
          (*(pUVar1->klass->vtable)._23_set_color.methodPtr)
                    (pUVar1,UVar3,(pUVar1->klass->vtable)._23_set_color.method);
          pUVar2 = UnityEngine_GameObject__AddComponent_object_
                             (__this_00,
                              (MethodInfo_353B6A0 *)
                              MethodInfo_UnityEngine_GameObject_AddComponent_PanelResizeHandle);
          if (pUVar2 != (UI_PanelResizeHandle_o *)0x0) {
            (pUVar2->fields).IsRightEdge = false;
            (pUVar2->fields).MinWidth = 200.0;
            (pUVar2->fields).MaxWidth = 700.0;
            __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_float);
            System_Action_float____ctor
                      (__this_03,(Il2CppObject *)__this,
                       (intptr_t)MethodInfo_UI_MapEditorInspectPanel_AddResizeHandle_b__77_0,
                       (MethodInfo_4A82E50 *)0x0);
            (pUVar2->fields).OnResize = __this_03;
            Il2CppCodeGenWriteBarrier(&(pUVar2->fields).OnResize);
            return;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel$$HasNonConvexMeshCollider
// il2cpp: bool UI_MapEditorInspectPanel__HasNonConvexMeshCollider (UI_MapEditorInspectPanel_o* __this, Map_MapObject_o* mapObject, const MethodInfo* method);
// 0x5d853f0

bool UI_MapEditorInspectPanel__HasNonConvexMeshCollider
               (UI_MapEditorInspectPanel_o *__this,Map_MapObject_o *mapObject,MethodInfo *method)

{
  byte bVar1;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_MeshCollider_o *__this_01;
  bool bVar2;
  System_Object_array *pSVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (Il2CppMethodInitialized_07548019 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Collider);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_MeshCollider);
    Il2CppMethodInitialized_07548019 = '\x01';
  }
  if ((mapObject != (Map_MapObject_o *)0x0) &&
     (__this_00 = (mapObject->fields).GameObject, __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    pSVar3 = UnityEngine_GameObject__GetComponentsInChildren_object__353c030
                       (__this_00,
                        (MethodInfo_353C030 *)
                        MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Collider);
    if (pSVar3 != (System_Object_array *)0x0) {
      if (0 < (int)pSVar3->max_length) {
        uVar4 = pSVar3->max_length & 0xffffffff;
        uVar5 = 0;
        do {
          if (uVar4 <= uVar5) {
            ThrowIndexOutOfRangeException();
          }
          __this_01 = (UnityEngine_MeshCollider_o *)pSVar3->m_Items[uVar5];
          if (__this_01 != (UnityEngine_MeshCollider_o *)0x0) {
            bVar1 = (TypeInfo_UnityEngine_MeshCollider->_2).typeHierarchyDepth;
            if ((bVar1 <= (__this_01->klass->_2).typeHierarchyDepth) &&
               ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
                (Il2CppClass *)TypeInfo_UnityEngine_MeshCollider)) {
              bVar2 = UnityEngine_MeshCollider__get_convex(__this_01,(MethodInfo *)0x0);
              if (!bVar2) {
                return true;
              }
              uVar4 = (ulong)(uint)pSVar3->max_length;
            }
          }
          uVar5 = uVar5 + 1;
        } while ((long)uVar5 < (long)(int)uVar4);
      }
      return false;
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel$$CopyID
// il2cpp: void UI_MapEditorInspectPanel__CopyID (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x5d854e0

void UI_MapEditorInspectPanel__CopyID(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  Map_MapScriptBaseObject_o *pMVar2;
  System_String_o *value;
  
  if (Il2CppMethodInitialized_0754801a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GUIUtility);
    Il2CppMethodInitialized_0754801a = '\x01';
  }
  pMVar1 = (__this->fields)._mapObject;
  if ((pMVar1 == (Map_MapObject_o *)0x0) ||
     (pMVar2 = (pMVar1->fields).ScriptObject, pMVar2 == (Map_MapScriptBaseObject_o *)0x0)) {
    ThrowNullReferenceException();
  }
  value = System_Int32__ToString(&(pMVar2->fields).Id,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_GUIUtility->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_GUIUtility);
    UnityEngine_GUIUtility__set_systemCopyBuffer(value,(MethodInfo *)0x0);
    return;
  }
  UnityEngine_GUIUtility__set_systemCopyBuffer(value,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorInspectPanel$$CopyAssetCSV
// il2cpp: void UI_MapEditorInspectPanel__CopyAssetCSV (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x5d85560

void UI_MapEditorInspectPanel__CopyAssetCSV(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  Map_MapScriptBaseObject_o *pMVar2;
  System_String_o *value;
  
  if (Il2CppMethodInitialized_0754801b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GUIUtility);
    Il2CppMethodInitialized_0754801b = '\x01';
  }
  pMVar1 = (__this->fields)._mapObject;
  if ((pMVar1 == (Map_MapObject_o *)0x0) ||
     (pMVar2 = (pMVar1->fields).ScriptObject, pMVar2 == (Map_MapScriptBaseObject_o *)0x0)) {
    ThrowNullReferenceException();
  }
  value = (*(pMVar2->klass->vtable)._8_Serialize.methodPtr)
                    (pMVar2,(pMVar2->klass->vtable)._8_Serialize.method);
  if ((TypeInfo_UnityEngine_GUIUtility->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_GUIUtility);
    UnityEngine_GUIUtility__set_systemCopyBuffer(value,(MethodInfo *)0x0);
    return;
  }
  UnityEngine_GUIUtility__set_systemCopyBuffer(value,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorInspectPanel$$Show
// il2cpp: void UI_MapEditorInspectPanel__Show (UI_MapEditorInspectPanel_o* __this, Map_MapObject_o* mapObject, const MethodInfo* method);
// 0x5d855e0

void UI_MapEditorInspectPanel__Show
               (UI_MapEditorInspectPanel_o *__this,Map_MapObject_o *mapObject,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  Map_MapObject_array *pMVar3;
  System_Collections_Generic_List_MapObject__o *mapObjects;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar4;
  
  if (Il2CppMethodInitialized_0754801c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_MapObject_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_MapObject_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_MapObject);
    Il2CppMethodInitialized_0754801c = '\x01';
  }
  mapObjects = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_MapObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)mapObjects,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_MapObject_ctor);
  pMVar4 = MethodInfo_System_Collections_Generic_List_MapObject_Add;
  if (mapObjects != (System_Collections_Generic_List_MapObject__o *)0x0) {
    piVar1 = &(mapObjects->fields)._version;
    *piVar1 = *piVar1 + 1;
    pMVar3 = (mapObjects->fields)._items;
    if (pMVar3 != (Map_MapObject_array *)0x0) {
      uVar2 = (mapObjects->fields)._size;
      if (uVar2 < (uint)pMVar3->max_length) {
        (mapObjects->fields)._size = uVar2 + 1;
        pMVar3->m_Items[(int)uVar2] = mapObject;
        Il2CppCodeGenWriteBarrier(pMVar3->m_Items + (int)uVar2);
        pMVar4 = extraout_RDX;
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)mapObjects,(Il2CppObject *)mapObject,
                   (MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
        pMVar4 = extraout_RDX_00;
      }
      UI_MapEditorInspectPanel__Show_5c856c0(__this,mapObjects,pMVar4);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel$$Show
// il2cpp: void UI_MapEditorInspectPanel__Show (UI_MapEditorInspectPanel_o* __this, System_Collections_Generic_List_MapObject__o* mapObjects, const MethodInfo* method);
// 0x5d856c0
// eh: try 0x5d88eda..0x5d892a7 -> pad 0x5d8a130 (+12 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5d892c8..0x5d892dd -> pad 0x5d8a138 catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x5d892f4..0x5d89f30 -> pad 0x5d8a0de (+71 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5d8a109..0x5d8a166 -> pad 0x5d8a5d1 (+1 call sites) cleanup
// eh: try 0x5d8a5c5..0x5d8a5de -> pad 0x5d8a5e6 catch (...) [compiler noexcept guard]
// asm: 169 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d87d12: jmp 0x5d87e20
// asm:   0x5d87eb7: jmp 0x5d87ed2
// asm:   0x5d87f64: jmp 0x5d87f7f
// asm:   0x5d88f64: nop word ptr cs:[rax + rax]
// asm:   0x5d89289: nop dword ptr [rax]
// asm:   0x5d8938b: nop dword ptr [rax + rax]
// asm:   0x5d893db: nop dword ptr [rax + rax]
// asm:   0x5d89f35: jmp 0x5d8a145
// asm:   0x5d89f3a: jmp 0x5d8a0e6
// asm:   0x5d89f3f: jmp 0x5d8a0e6
// asm:   0x5d89f44: jmp 0x5d8a0e6
// asm:   0x5d89f49: jmp 0x5d8a0e6
// asm:   0x5d89f4e: jmp 0x5d89fb2
// asm:   0x5d89f50: jmp 0x5d8a145
// asm:   0x5d89f55: jmp 0x5d89fb2
// asm:   0x5d89f57: jmp 0x5d8a0e6
// asm:   0x5d89f5c: jmp 0x5d8a0e6
// asm:   0x5d89f61: jmp 0x5d8a0e6
// asm:   0x5d89f66: jmp 0x5d8a0e6
// asm:   0x5d89f6b: jmp 0x5d8a0e6
// asm:   0x5d89f70: jmp 0x5d8a0e6
// asm:   0x5d89f75: jmp 0x5d8a0e6
// asm:   0x5d89f7a: jmp 0x5d8a0e6
// asm:   0x5d89f7f: jmp 0x5d8a0e6
// asm:   0x5d89f84: jmp 0x5d8a0e6
// asm:   0x5d89f89: jmp 0x5d89fb2
// asm:   0x5d89f8b: jmp 0x5d89fb2
// asm:   0x5d89f8d: jmp 0x5d89fb2
// asm:   0x5d89f8f: jmp 0x5d8a145
// asm:   0x5d89f94: jmp 0x5d8a145
// asm:   0x5d89f99: jmp 0x5d8a0e6
// asm:   0x5d89f9e: jmp 0x5d8a0e6
// asm:   0x5d89fa3: jmp 0x5d8a0e6
// asm:   0x5d89fa8: jmp 0x5d8a0e6
// asm:   0x5d89fad: jmp 0x5d8a0e6
// asm:   0x5d89fb2: mov rbx, rax
// asm:   0x5d89fb5: mov r13, qword ptr [rsp + 0x50]
// asm:   0x5d89fba: jmp 0x5d8a148
// asm:   0x5d89fbf: jmp 0x5d8a145
// asm:   0x5d89fc4: jmp 0x5d8a145
// asm:   0x5d89fc9: jmp 0x5d8a0e6
// asm:   0x5d89fce: jmp 0x5d8a0e6
// asm:   0x5d89fd3: jmp 0x5d8a0e6
// asm:   0x5d89fd8: jmp 0x5d8a0e6
// asm:   0x5d89fdd: jmp 0x5d8a145
// asm:   0x5d89fe2: jmp 0x5d8a145
// asm:   0x5d89fe7: jmp 0x5d8a145
// asm:   0x5d89fec: jmp 0x5d8a0e6
// asm:   0x5d89ff1: jmp 0x5d8a0e6
// asm:   0x5d89ff6: jmp 0x5d8a0e6
// asm:   0x5d89ffb: jmp 0x5d8a0e6
// asm:   0x5d8a000: jmp 0x5d8a0e6
// asm:   0x5d8a005: jmp 0x5d8a0e6
// asm:   0x5d8a00a: jmp 0x5d8a145
// asm:   0x5d8a00f: jmp 0x5d8a0e6
// asm:   0x5d8a014: jmp 0x5d8a0e6
// asm:   0x5d8a019: jmp 0x5d8a0e6
// asm:   0x5d8a01e: mov rbx, rax
// asm:   0x5d8a021: cmp edx, 1
// asm:   0x5d8a024: je 0x5d8a0f9
// asm:   0x5d8a02a: jmp 0x5d8a5d4
// asm:   0x5d8a02f: jmp 0x5d8a0e6
// asm:   0x5d8a034: mov rbx, rax
// asm:   0x5d8a037: cmp edx, 1
// asm:   0x5d8a03a: je 0x5d8a0f9
// asm:   0x5d8a040: jmp 0x5d8a5d4
// asm:   0x5d8a045: jmp 0x5d8a0e6
// asm:   0x5d8a04a: jmp 0x5d8a0e6
// asm:   0x5d8a04f: jmp 0x5d8a0e6
// asm:   0x5d8a054: mov rbx, rax
// asm:   0x5d8a057: cmp edx, 1
// asm:   0x5d8a05a: je 0x5d8a0f9
// asm:   0x5d8a060: jmp 0x5d8a5d4
// asm:   0x5d8a065: mov rbx, rax
// asm:   0x5d8a068: cmp edx, 1
// asm:   0x5d8a06b: je 0x5d8a0f9
// asm:   0x5d8a071: jmp 0x5d8a5d4
// asm:   0x5d8a076: mov rbx, rax
// asm:   0x5d8a079: cmp edx, 1
// asm:   0x5d8a07c: je 0x5d8a0f9
// asm:   0x5d8a07e: jmp 0x5d8a5d4
// asm:   0x5d8a083: mov rbx, rax
// asm:   0x5d8a086: cmp edx, 1
// asm:   0x5d8a089: je 0x5d8a0f9
// asm:   0x5d8a08b: jmp 0x5d8a5d4
// asm:   0x5d8a090: mov rbx, rax
// asm:   0x5d8a093: cmp edx, 1
// asm:   0x5d8a096: je 0x5d8a0f9
// asm:   0x5d8a098: jmp 0x5d8a5d4
// asm:   0x5d8a09d: mov rbx, rax
// asm:   0x5d8a0a0: cmp edx, 1
// asm:   0x5d8a0a3: je 0x5d8a0f9
// asm:   0x5d8a0a5: jmp 0x5d8a5d4
// asm:   0x5d8a0aa: jmp 0x5d8a0e6
// asm:   0x5d8a0ac: jmp 0x5d8a0e6
// asm:   0x5d8a0ae: jmp 0x5d8a0e6
// asm:   0x5d8a0b0: jmp 0x5d8a0e6
// asm:   0x5d8a0b2: jmp 0x5d8a0e6
// asm:   0x5d8a0b4: jmp 0x5d8a0e6
// asm:   0x5d8a0b6: jmp 0x5d8a0e6
// asm:   0x5d8a0b8: jmp 0x5d8a0e6
// asm:   0x5d8a0ba: jmp 0x5d8a0e6
// asm:   0x5d8a0bc: jmp 0x5d8a0e6
// asm:   0x5d8a0be: mov rbx, rax
// asm:   0x5d8a0c1: cmp edx, 1
// asm:   0x5d8a0c4: je 0x5d8a0f9
// asm:   0x5d8a0c6: jmp 0x5d8a5d4
// asm:   0x5d8a0cb: jmp 0x5d8a145
// asm:   0x5d8a0cd: mov rbx, rax
// asm:   0x5d8a0d0: cmp edx, 1
// asm:   0x5d8a0d3: je 0x5d8a0f9
// asm:   0x5d8a0d5: jmp 0x5d8a5d4
// asm:   0x5d8a0da: jmp 0x5d8a0e6
// asm:   0x5d8a0dc: jmp 0x5d8a0e6
// asm:   0x5d8a0de: jmp 0x5d8a0e6
// asm:   0x5d8a0e0: jmp 0x5d8a145
// asm:   0x5d8a0e2: jmp 0x5d8a145
// asm:   0x5d8a0e4: jmp 0x5d8a145
// asm:   0x5d8a0e6: mov rbx, rax
// asm:   0x5d8a0e9: lea r13, [rip + 0x1543938]  ; ""
// asm:   0x5d8a0f0: cmp edx, 1
// asm:   0x5d8a0f3: jne 0x5d8a5d4
// asm:   0x5d8a0f9: mov rdi, rbx
// asm:   0x5d8a0fc: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d8a101: mov rbx, qword ptr [rax]
// asm:   0x5d8a104: mov qword ptr [rsp + 0x68], rbx
// asm:   0x5d8a109: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d8a10e: lea rax, [rip + 0x1505d1b]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_BaseSetting_Dispose
// asm:   0x5d8a115: mov rsi, qword ptr [rax]
// asm:   0x5d8a118: lea rdi, [rsp + 0x80]
// asm:   0x5d8a120: call 0x4de7070  ; System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose()
// asm:   0x5d8a125: test rbx, rbx
// asm:   0x5d8a128: je 0x5d89da7
// asm:   0x5d8a12e: jmp 0x5d8a186
// asm:   0x5d8a130: jmp 0x5d8a145
// asm:   0x5d8a132: jmp 0x5d8a145
// asm:   0x5d8a134: jmp 0x5d8a145
// asm:   0x5d8a136: jmp 0x5d8a145
// asm:   0x5d8a138: mov rbx, rax
// asm:   0x5d8a13b: cmp edx, 1
// asm:   0x5d8a13e: je 0x5d8a0f9
// asm:   0x5d8a140: jmp 0x5d8a5d4
// asm:   0x5d8a145: mov rbx, rax
// asm:   0x5d8a148: cmp edx, 1
// asm:   0x5d8a14b: jne 0x5d8a5c5
// asm:   0x5d8a151: mov rdi, rbx
// asm:   0x5d8a154: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d8a159: mov rbx, qword ptr [rax]
// asm:   0x5d8a15c: mov qword ptr [rsp + 0x68], rbx
// asm:   0x5d8a161: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d8a166: lea rax, [rip + 0x1505cc3]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_BaseSetting_Dispose
// asm:   0x5d8a16d: mov rsi, qword ptr [rax]
// asm:   0x5d8a170: lea rdi, [rsp + 0x80]
// asm:   0x5d8a178: call 0x4de7070  ; System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose()
// asm:   0x5d8a17d: test rbx, rbx
// asm:   0x5d8a180: je 0x5d89227
// asm:   0x5d8a186: mov rdi, rbx
// asm:   0x5d8a189: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d8a5c2: mov rbx, rax
// asm:   0x5d8a5c5: lea rdi, [rsp + 0x68]
// asm:   0x5d8a5ca: call 0x2fdd580  ; il2cpp_runtime_helper_02fdd580()
// asm:   0x5d8a5cf: jmp 0x5d8a5de
// asm:   0x5d8a5d1: mov rbx, rax
// asm:   0x5d8a5d4: lea rdi, [rsp + 0x68]
// asm:   0x5d8a5d9: call 0x2fdd5b0  ; il2cpp_runtime_helper_02fdd5b0()
// asm:   0x5d8a5de: mov rdi, rbx
// asm:   0x5d8a5e1: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5d8a5e6: mov rdi, rax
// asm:   0x5d8a5e9: call 0x2ab61e0  ; __clang_call_terminate()

void UI_MapEditorInspectPanel__Show_5c856c0
               (UI_MapEditorInspectPanel_o *__this,System_Collections_Generic_List_MapObject__o *mapObjects,
               MethodInfo *method)

{
  int32_t *piVar1;
  System_Collections_Generic_List_MapObject__o **targetAddress;
  Map_MapObject_o **targetAddress_00;
  UI_MapEditorInspectPanel___c__DisplayClass82_0_o **targetAddress_01;
  byte bVar2;
  uint32_t uVar3;
  uint uVar4;
  System_Collections_Generic_HashSet_object__o *pSVar5;
  System_Collections_Generic_List_GameObject__o *pSVar6;
  Map_MapScriptBaseObject_o *pMVar7;
  Settings_BoolSetting_o *pSVar8;
  Settings_StringSetting_o *pSVar9;
  UI_MapEditorInspectPanel___c__DisplayClass82_0_c *pUVar10;
  Settings_ColorSetting_o *pSVar11;
  System_Collections_Generic_List_Dictionary_string__BaseSetting___o *pSVar12;
  System_String_array *pSVar13;
  Settings_InspectorSettingMetadata_o *pSVar14;
  System_String_o *str3;
  UI_MapEditorMenu_o *pUVar15;
  UI_Vector3Popup_o *vector3Popup;
  UI_ColorPickPopup_o *pUVar16;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar17;
  bool bVar18;
  char cVar19;
  System_Collections_Generic_List_MapObject__o *pSVar20;
  Map_MapObject_o *pMVar21;
  System_String_o *pSVar22;
  UI_ElementStyle_o *pUVar23;
  UnityEngine_GameObject_o *pUVar24;
  UnityEngine_Transform_o *pUVar25;
  UnityEngine_Events_UnityAction_o *pUVar26;
  Il2CppObject *pIVar27;
  UI_ElementStyle_o *__this_01;
  UnityEngine_Transform_o *pUVar28;
  System_Func_TSource__bool__o *method_00;
  System_Func_MapObject__bool__o *pSVar29;
  System_String_array *pSVar30;
  UnityEngine_Events_UnityAction_o *__this_02;
  MethodInfo **ppMVar31;
  UI_MapEditorInspectPanel___c_StaticFields *pUVar32;
  System_Func_TSource__bool__o *__this_03;
  UnityEngine_UI_LayoutElement_o *pUVar33;
  UI_MapEditorInspectPanel___c__DisplayClass82_0_o *pUVar34;
  System_Collections_Generic_Dictionary_string__BaseSetting__o *settings;
  System_Collections_Generic_Dictionary_string__string____o *__this_04;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *pSVar35;
  Settings_BaseSetting_o *pSVar36;
  System_Collections_Generic_List_string__o *pSVar37;
  ulong uVar38;
  System_String_o *pSVar39;
  System_Object_array *value;
  UI_MapEditorInspectPanel___c__DisplayClass82_1_o *__this_05;
  Settings_IntSetting_o *pSVar40;
  Settings_IntSetting_c *pSVar41;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  UnityEngine_Events_UnityAction_o *pUVar42;
  UI_MapEditorInspectPanel__WaitAndEnablePanel_d__90_o *__this_06;
  byte bVar43;
  System_String_o **ppSVar44;
  int32_t iVar45;
  uint uVar46;
  System_String_o **ppSVar47;
  Settings_FloatSetting_o *pSVar48;
  MethodInfo *pMVar49;
  UnityEngine_Transform_o *pUStack_b0;
  System_Collections_Generic_Dictionary_object__object__o *pSStack_a8;
  System_String_o *pSStack_a0;
  UI_MapEditorInspectPanel___c__DisplayClass82_0_o *pUStack_98;
  undefined1 auStack_90 [16];
  System_String_o *pSStack_80;
  undefined1 auStack_78 [8];
  undefined1 *puStack_70;
  System_String_o *pSStack_68;
  UnityEngine_Transform_o *pUStack_60;
  System_Collections_Generic_Dictionary_string__string____o *pSStack_58;
  System_Collections_Generic_Dictionary_string__string__o *pSStack_50;
  float fStack_44;
  System_Collections_Generic_Dictionary_string__Transform__o *pSStack_40;
  ulong uStack_38;
  
  if (Il2CppMethodInitialized_0754801d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BoolSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ColorSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_array_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Transform_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_array_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Transform_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_array_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_get_Keys);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Transform_set_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_array_set_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_string_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_Transform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_All_MapObject);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Any_MapObject);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Concat_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToArray_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_BaseSetting_Dispose
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_BaseSetting_MoveNext
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_BaseSetting_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_FloatSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_MapObject_bool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_HashSetSetting_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_BaseSetting_GetEnumerator
              );
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapObject_ctor_7195590);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Dictionary_string_BaseSetting_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapObject_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_MapObject_get_Item)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Dictionary_string_BaseSetting_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_MapObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorInspectPanel_HasNonConvexMeshCollider);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorInspectPanel_Show_b__82_0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorInspectPanel_Show_b__82_10);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorInspectPanel_Show_b__82_11);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorInspectPanel_Show_b__82_12);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorInspectPanel_Show_b__82_13);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorInspectPanel_Show_b__82_14);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorInspectPanel_Show_b__82_15);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorInspectPanel_Show_b__82_16);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorInspectPanel_Show_b__82_17);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorInspectPanel_Show_b__82_18);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorInspectPanel_Show_b__82_1);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorInspectPanel_Show_b__82_24);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorInspectPanel_Show_b__82_25);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorInspectPanel_Show_b__82_26);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorInspectPanel_Show_b__82_27);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorInspectPanel_Show_b__82_28);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorInspectPanel_Show_b__82_29);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorInspectPanel_Show_b__82_2);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorInspectPanel_Show_b__82_30);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorInspectPanel_Show_b__82_31);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorInspectPanel_Show_b__82_32);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorInspectPanel_Show_b__82_33);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorInspectPanel_Show_b__82_34);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorInspectPanel_Show_b__82_35);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorInspectPanel_Show_b__82_36);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorInspectPanel_Show_b__82_37);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorInspectPanel_Show_b__82_38);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorInspectPanel_Show_b__82_3);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorInspectPanel_Show_b__82_44);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorInspectPanel_Show_b__82_45);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorInspectPanel_Show_b__82_4);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorInspectPanel_Show_b__82_5);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorInspectPanel_Show_b__82_6);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorInspectPanel_Show_b__82_7);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorInspectPanel_Show_b__82_8);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorInspectPanel_Show_b__82_9);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorInspectPanel);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObjectCollideMode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObjectCollideWith);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObjectPhysicsMaterial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObjectShader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorInspectPanel_c_Show_b__82_19);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorInspectPanel_c_Show_b__82_20);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorInspectPanel_c_Show_b__82_21);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorInspectPanel_c_Show_b__82_22);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorInspectPanel_c_Show_b__82_23);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass82_0_Show_b__39);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorInspectPanel_c__DisplayClass82_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass82_1_Show_b__40);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass82_1_Show_b__41);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass82_1_Show_b__42);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass82_1_Show_b__43);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass82_1_Show_b__46);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass82_1_Show_b__47);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorInspectPanel_c__DisplayClass82_1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorInspectPanel_c);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_Vector3Setting);
    il2cpp_codegen_initialize_runtime_metadata(&"Asset");
    il2cpp_codegen_initialize_runtime_metadata(&"Scale");
    il2cpp_codegen_initialize_runtime_metadata(&"OffsetY");
    il2cpp_codegen_initialize_runtime_metadata(&"TilingX");
    il2cpp_codegen_initialize_runtime_metadata(&"CollideMode");
    il2cpp_codegen_initialize_runtime_metadata(&"Color");
    il2cpp_codegen_initialize_runtime_metadata(&"Z");
    il2cpp_codegen_initialize_runtime_metadata(&"Transform");
    il2cpp_codegen_initialize_runtime_metadata(&"ReflectColor");
    il2cpp_codegen_initialize_runtime_metadata(&"Dropbox");
    il2cpp_codegen_initialize_runtime_metadata(&"Networked");
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"Position");
    il2cpp_codegen_initialize_runtime_metadata(&"TilingY");
    il2cpp_codegen_initialize_runtime_metadata(&"Name");
    il2cpp_codegen_initialize_runtime_metadata(&"--");
    il2cpp_codegen_initialize_runtime_metadata(&"AddComponent");
    il2cpp_codegen_initialize_runtime_metadata(&"Visible");
    il2cpp_codegen_initialize_runtime_metadata(&"Texture");
    il2cpp_codegen_initialize_runtime_metadata(&"ParentId");
    il2cpp_codegen_initialize_runtime_metadata(&"Delete");
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/Navigation/CopyIcon");
    il2cpp_codegen_initialize_runtime_metadata(&"Active");
    il2cpp_codegen_initialize_runtime_metadata(&"Rotation");
    il2cpp_codegen_initialize_runtime_metadata(&"Tooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"OffsetX");
    il2cpp_codegen_initialize_runtime_metadata(&"Shader");
    il2cpp_codegen_initialize_runtime_metadata(&"Component:");
    il2cpp_codegen_initialize_runtime_metadata(&"Static");
    il2cpp_codegen_initialize_runtime_metadata(&"Id");
    il2cpp_codegen_initialize_runtime_metadata(&"Y");
    il2cpp_codegen_initialize_runtime_metadata(&"Collision");
    il2cpp_codegen_initialize_runtime_metadata(&":Group:");
    il2cpp_codegen_initialize_runtime_metadata(&"CollideWith");
    il2cpp_codegen_initialize_runtime_metadata(&"X");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"SelectedCount");
    il2cpp_codegen_initialize_runtime_metadata(&"Description");
    il2cpp_codegen_initialize_runtime_metadata(&"PhysicsMaterial");
    Il2CppMethodInitialized_0754801d = '\x01';
  }
  auStack_78 = (undefined1  [8])0x0;
  puStack_70 = (undefined1 *)0x0;
  pSStack_68 = (System_String_o *)0x0;
  pUStack_b0 = (UnityEngine_Transform_o *)0x0;
  UI_BasePanel__Show((UI_BasePanel_o *)__this,(MethodInfo *)0x0);
  pSVar20 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_MapObject);
  System_Collections_Generic_List_object____ctor_395ca70
            ((System_Collections_Generic_List_object__o *)pSVar20,
             (System_Collections_Generic_IEnumerable_T__o *)mapObjects,
             (MethodInfo_395CA70 *)MethodInfo_System_Collections_Generic_List_MapObject_ctor_7195590);
  targetAddress = &(__this->fields)._mapObjects;
  (__this->fields)._mapObjects = pSVar20;
  Il2CppCodeGenWriteBarrier(targetAddress);
  pSVar20 = (__this->fields)._mapObjects;
  if (pSVar20 == (System_Collections_Generic_List_MapObject__o *)0x0) goto label_05d8a5b8;
  pMVar21 = System_Collections_Generic_List_object___get_Item
                      ((System_Collections_Generic_List_object__o *)pSVar20,0,
                       (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_MapObject_get_Item);
  targetAddress_00 = &(__this->fields)._mapObject;
  (__this->fields)._mapObject = pMVar21;
  Il2CppCodeGenWriteBarrier(targetAddress_00);
  pSVar5 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._mixedFields;
  if (pSVar5 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_05d8a5b8;
  pMVar49 = MethodInfo_System_Collections_Generic_HashSet_string_Clear;
  System_Collections_Generic_HashSet_object___Clear
            (pSVar5,(MethodInfo_4FB36D0 *)MethodInfo_System_Collections_Generic_HashSet_string_Clear);
  pSVar6 = (__this->fields)._mixedNumericElements;
  if (pSVar6 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_05d8a5b8;
  piVar1 = &(pSVar6->fields)._version;
  *piVar1 = *piVar1 + 1;
  iVar45 = (pSVar6->fields)._size;
  (pSVar6->fields)._size = 0;
  if (0 < iVar45) {
    pMVar49 = (MethodInfo *)0x0;
    System_Array__Clear((System_Array_o *)(pSVar6->fields)._items,0,iVar45,(MethodInfo *)0x0);
  }
  UI_MapEditorInspectPanel__SyncSettings(__this,pMVar49);
  pSVar22 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                      (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  pUVar23 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(pUVar23,0x12,80.0,10.0,pSVar22,(MethodInfo *)0x0);
  pSVar20 = (__this->fields)._mapObjects;
  if (pSVar20 == (System_Collections_Generic_List_MapObject__o *)0x0) goto label_05d8a5b8;
  pUVar25 = (__this->fields).SinglePanel;
  pUStack_98 = (UI_MapEditorInspectPanel___c__DisplayClass82_0_o *)targetAddress;
  if ((pSVar20->fields)._size == 1) {
    pUVar24 = UI_ElementFactory__CreateHorizontalGroup(pUVar25,20.0,3,(MethodInfo *)0x0);
    if (pUVar24 == (UnityEngine_GameObject_o *)0x0) goto label_05d8a5b8;
    pUVar25 = UnityEngine_GameObject__get_transform(pUVar24,(MethodInfo *)0x0);
    pUVar26 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              (pUVar26,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_MapEditorInspectPanel_Show_b__82_30,
               (MethodInfo *)0x0);
    UI_ElementFactory__CreateIconButton
              (pUVar25,pUVar23,"Icons/Navigation/CopyIcon",32.0,32.0,pUVar26,(System_String_o *)0x0,
               (MethodInfo *)0x0);
    pUVar25 = UnityEngine_GameObject__get_transform(pUVar24,(MethodInfo *)0x0);
    pUVar24 = UI_ElementFactory__CreateVerticalGroup(pUVar25,10.0,0,(MethodInfo *)0x0);
    if (pUVar24 == (UnityEngine_GameObject_o *)0x0) goto label_05d8a5b8;
    pUVar25 = UnityEngine_GameObject__get_transform(pUVar24,(MethodInfo *)0x0);
    if ((TypeInfo_UI_MapEditorInspectPanel->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel);
      if (Il2CppMethodInitialized_07548008 != '\0') goto label_05d86073;
label_05d8a3fd:
      pSVar22 = "Id";
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
      il2cpp_codegen_initialize_runtime_metadata(&"MapEditor");
      il2cpp_codegen_initialize_runtime_metadata(&"Inspect");
      il2cpp_codegen_initialize_runtime_metadata(&"");
      Il2CppMethodInitialized_07548008 = '\x01';
      uVar3 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
    }
    else {
      if (Il2CppMethodInitialized_07548008 == '\0') goto label_05d8a3fd;
label_05d86073:
      uVar3 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
      pSVar22 = "Id";
    }
    if (uVar3 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pSVar22 = UI_UIManager__GetLocale
                        ("MapEditor","Inspect",pSVar22,"",
                         "",(MethodInfo *)0x0);
    if ((*targetAddress_00 == (Map_MapObject_o *)0x0) ||
       (pMVar7 = ((*targetAddress_00)->fields).ScriptObject, pMVar7 == (Map_MapScriptBaseObject_o *)0x0))
    goto label_05d8a5b8;
    auStack_90._0_4_ = (pMVar7->fields).Id;
    pIVar27 = il2cpp_vm_Object_Box(g_data_07556710,auStack_90);
    pSVar22 = System_String__Format(pSVar22,pIVar27,(MethodInfo *)0x0);
    pUVar26 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              (pUVar26,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_MapEditorInspectPanel_Show_b__82_31,
               (MethodInfo *)0x0);
    UI_ElementFactory__CreateTextButton(pUVar25,pUVar23,pSVar22,0.0,pUVar26,(MethodInfo *)0x0);
    pUVar25 = UnityEngine_GameObject__get_transform(pUVar24,(MethodInfo *)0x0);
    pSVar22 = "Asset";
    if (Il2CppMethodInitialized_07548008 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
      il2cpp_codegen_initialize_runtime_metadata(&"MapEditor");
      il2cpp_codegen_initialize_runtime_metadata(&"Inspect");
      il2cpp_codegen_initialize_runtime_metadata(&"");
      Il2CppMethodInitialized_07548008 = '\x01';
    }
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pSVar22 = UI_UIManager__GetLocale
                        ("MapEditor","Inspect",pSVar22,"",
                         "",(MethodInfo *)0x0);
    if ((*targetAddress_00 == (Map_MapObject_o *)0x0) ||
       (pMVar7 = ((*targetAddress_00)->fields).ScriptObject, pMVar7 == (Map_MapScriptBaseObject_o *)0x0))
    goto label_05d8a5b8;
    pSVar22 = System_String__Format(pSVar22,(Il2CppObject *)(pMVar7->fields).Asset,(MethodInfo *)0x0);
    pUVar26 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              (pUVar26,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_MapEditorInspectPanel_Show_b__82_32,
               (MethodInfo *)0x0);
    UI_ElementFactory__CreateTextButton(pUVar25,pUVar23,pSVar22,0.0,pUVar26,(MethodInfo *)0x0);
  }
  else {
    if ((TypeInfo_UI_MapEditorInspectPanel->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel);
      if (Il2CppMethodInitialized_07548008 != '\0') goto label_05d8627c;
label_05d8a389:
      pSVar22 = "SelectedCount";
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
      il2cpp_codegen_initialize_runtime_metadata(&"MapEditor");
      il2cpp_codegen_initialize_runtime_metadata(&"Inspect");
      il2cpp_codegen_initialize_runtime_metadata(&"");
      Il2CppMethodInitialized_07548008 = '\x01';
      uVar3 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
    }
    else {
      if (Il2CppMethodInitialized_07548008 == '\0') goto label_05d8a389;
label_05d8627c:
      uVar3 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
      pSVar22 = "SelectedCount";
    }
    if (uVar3 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pSVar22 = UI_UIManager__GetLocale
                        ("MapEditor","Inspect",pSVar22,"",
                         "",(MethodInfo *)0x0);
    if (*targetAddress == (System_Collections_Generic_List_MapObject__o *)0x0) goto label_05d8a5b8;
    auStack_90._0_4_ = ((*targetAddress)->fields)._size;
    pIVar27 = il2cpp_vm_Object_Box(g_data_07556710,auStack_90);
    pSVar22 = System_String__Format(pSVar22,pIVar27,(MethodInfo *)0x0);
    UI_ElementFactory__CreateDefaultLabel(pUVar25,pUVar23,pSVar22,0,3,(MethodInfo *)0x0);
  }
  pUVar24 = UI_ElementFactory__CreateHorizontalGroup((__this->fields).SinglePanel,20.0,3,(MethodInfo *)0x0);
  if (pUVar24 == (UnityEngine_GameObject_o *)0x0) goto label_05d8a5b8;
  pUVar25 = UnityEngine_GameObject__get_transform(pUVar24,(MethodInfo *)0x0);
  pSVar22 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                      (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_01,0xf,45.0,10.0,pSVar22,(MethodInfo *)0x0);
  pSVar8 = (__this->fields)._active;
  if ((TypeInfo_UI_MapEditorInspectPanel->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel);
    if (Il2CppMethodInitialized_07548008 != '\0') goto label_05d863ca;
label_05d87d33:
    pSVar22 = "Active";
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"MapEditor");
    il2cpp_codegen_initialize_runtime_metadata(&"Inspect");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07548008 = '\x01';
    uVar3 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    if (Il2CppMethodInitialized_07548008 == '\0') goto label_05d87d33;
label_05d863ca:
    uVar3 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
    pSVar22 = "Active";
  }
  if (uVar3 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar22 = UI_UIManager__GetLocale
                      ("MapEditor","Inspect",pSVar22,"",
                       "",(MethodInfo *)0x0);
  pUVar26 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            (pUVar26,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_MapEditorInspectPanel_Show_b__82_0,
             (MethodInfo *)0x0);
  UI_ElementFactory__CreateToggleSetting
            (pUVar25,__this_01,(Settings_BaseSetting_o *)pSVar8,pSVar22,"",25.0,25.0,
             pUVar26,(MethodInfo *)0x0);
  pSVar22 = "Static";
  pSVar8 = (__this->fields)._static;
  if (Il2CppMethodInitialized_07548008 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"MapEditor");
    il2cpp_codegen_initialize_runtime_metadata(&"Inspect");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07548008 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar22 = UI_UIManager__GetLocale
                      ("MapEditor","Inspect",pSVar22,"",
                       "",(MethodInfo *)0x0);
  pUVar26 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            (pUVar26,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_MapEditorInspectPanel_Show_b__82_1,
             (MethodInfo *)0x0);
  UI_ElementFactory__CreateToggleSetting
            (pUVar25,__this_01,(Settings_BaseSetting_o *)pSVar8,pSVar22,"",25.0,25.0,
             pUVar26,(MethodInfo *)0x0);
  if (__this_01 == (UI_ElementStyle_o *)0x0) goto label_05d8a5b8;
  (__this_01->fields).TitleWidth = 80.0;
  pSVar22 = "Networked";
  pSVar8 = (__this->fields)._networked;
  if (Il2CppMethodInitialized_07548008 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"MapEditor");
    il2cpp_codegen_initialize_runtime_metadata(&"Inspect");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07548008 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar22 = UI_UIManager__GetLocale
                      ("MapEditor","Inspect",pSVar22,"",
                       "",(MethodInfo *)0x0);
  pUVar26 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            (pUVar26,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_MapEditorInspectPanel_Show_b__82_2,
             (MethodInfo *)0x0);
  UI_ElementFactory__CreateToggleSetting
            (pUVar25,__this_01,(Settings_BaseSetting_o *)pSVar8,pSVar22,"",25.0,25.0,
             pUVar26,(MethodInfo *)0x0);
  pUVar25 = (__this->fields).SinglePanel;
  pSVar9 = (__this->fields)._name;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar22 = UI_UIManager__GetLocaleCommon("Name",(MethodInfo *)0x0);
  pUVar26 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            (pUVar26,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_MapEditorInspectPanel_Show_b__82_3,
             (MethodInfo *)0x0);
  UI_ElementFactory__CreateInputSetting
            (pUVar25,pUVar23,(Settings_BaseSetting_o *)pSVar9,pSVar22,"",140.0,35.0,false,
             (UnityEngine_Events_UnityAction_o *)0x0,pUVar26,(System_Func_string__bool__o *)0x0,
             (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
  pSVar22 = "ParentId";
  pUVar25 = (__this->fields).SinglePanel;
  pSVar40 = (__this->fields)._parent;
  if (Il2CppMethodInitialized_07548008 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"MapEditor");
    il2cpp_codegen_initialize_runtime_metadata(&"Inspect");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07548008 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar22 = UI_UIManager__GetLocale
                      ("MapEditor","Inspect",pSVar22,"",
                       "",(MethodInfo *)0x0);
  pUVar26 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            (pUVar26,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_MapEditorInspectPanel_Show_b__82_4,
             (MethodInfo *)0x0);
  pMVar49 = (MethodInfo *)0x0;
  UI_ElementFactory__CreateInputSetting
            (pUVar25,pUVar23,(Settings_BaseSetting_o *)pSVar40,pSVar22,"",140.0,35.0,false,
             (UnityEngine_Events_UnityAction_o *)0x0,pUVar26,(System_Func_string__bool__o *)0x0,
             (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
  UI_BasePanel__CreateHorizontalDivider
            ((UI_BasePanel_o *)__this,(__this->fields).SinglePanel,1.0,(MethodInfo *)0x0);
  pSVar22 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                      (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  pUVar23 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(pUVar23,0x12,15.0,5.0,pSVar22,(MethodInfo *)0x0);
  pSVar22 = "Transform";
  if (Il2CppMethodInitialized_07548008 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"MapEditor");
    il2cpp_codegen_initialize_runtime_metadata(&"Inspect");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07548008 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar22 = UI_UIManager__GetLocale
                      ("MapEditor","Inspect",pSVar22,"",
                       "",(MethodInfo *)0x0);
  pUVar25 = UI_MapEditorInspectPanel__CreateSection
                      (__this,"Transform",pSVar22,pUVar23,true,(UnityEngine_Transform_o *)0x0,
                       pMVar49);
  pSVar22 = "Position";
  if (Il2CppMethodInitialized_07548008 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"MapEditor");
    il2cpp_codegen_initialize_runtime_metadata(&"Inspect");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07548008 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar22 = UI_UIManager__GetLocale
                      ("MapEditor","Inspect",pSVar22,"",
                       "",(MethodInfo *)0x0);
  UI_ElementFactory__CreateDefaultLabel(pUVar25,pUVar23,pSVar22,0,4,(MethodInfo *)0x0);
  pUVar24 = UI_ElementFactory__CreateHorizontalGroup(pUVar25,15.0,3,(MethodInfo *)0x0);
  if (pUVar24 == (UnityEngine_GameObject_o *)0x0) goto label_05d8a5b8;
  pUVar28 = UnityEngine_GameObject__get_transform(pUVar24,(MethodInfo *)0x0);
  pSVar48 = (__this->fields)._positionX;
  pUVar26 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            (pUVar26,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_MapEditorInspectPanel_Show_b__82_5,
             (MethodInfo *)0x0);
  UI_ElementFactory__CreateInputSetting
            (pUVar28,pUVar23,(Settings_BaseSetting_o *)pSVar48,"X","",
             80.0,35.0,false,(UnityEngine_Events_UnityAction_o *)0x0,pUVar26,
             (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
  pSVar48 = (__this->fields)._positionY;
  pUVar26 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            (pUVar26,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_MapEditorInspectPanel_Show_b__82_6,
             (MethodInfo *)0x0);
  UI_ElementFactory__CreateInputSetting
            (pUVar28,pUVar23,(Settings_BaseSetting_o *)pSVar48,"Y","",
             80.0,35.0,false,(UnityEngine_Events_UnityAction_o *)0x0,pUVar26,
             (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
  pSVar48 = (__this->fields)._positionZ;
  pUVar26 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            (pUVar26,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_MapEditorInspectPanel_Show_b__82_7,
             (MethodInfo *)0x0);
  UI_ElementFactory__CreateInputSetting
            (pUVar28,pUVar23,(Settings_BaseSetting_o *)pSVar48,"Z","",
             80.0,35.0,false,(UnityEngine_Events_UnityAction_o *)0x0,pUVar26,
             (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
  pSVar22 = "Rotation";
  if (Il2CppMethodInitialized_07548008 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"MapEditor");
    il2cpp_codegen_initialize_runtime_metadata(&"Inspect");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07548008 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar22 = UI_UIManager__GetLocale
                      ("MapEditor","Inspect",pSVar22,"",
                       "",(MethodInfo *)0x0);
  UI_ElementFactory__CreateDefaultLabel(pUVar25,pUVar23,pSVar22,0,4,(MethodInfo *)0x0);
  pUVar24 = UI_ElementFactory__CreateHorizontalGroup(pUVar25,15.0,3,(MethodInfo *)0x0);
  if (pUVar24 == (UnityEngine_GameObject_o *)0x0) goto label_05d8a5b8;
  pUVar28 = UnityEngine_GameObject__get_transform(pUVar24,(MethodInfo *)0x0);
  pSVar48 = (__this->fields)._rotationX;
  pUVar26 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            (pUVar26,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_MapEditorInspectPanel_Show_b__82_8,
             (MethodInfo *)0x0);
  UI_ElementFactory__CreateInputSetting
            (pUVar28,pUVar23,(Settings_BaseSetting_o *)pSVar48,"X","",
             80.0,35.0,false,(UnityEngine_Events_UnityAction_o *)0x0,pUVar26,
             (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
  pSVar48 = (__this->fields)._rotationY;
  pUVar26 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            (pUVar26,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_MapEditorInspectPanel_Show_b__82_9,
             (MethodInfo *)0x0);
  UI_ElementFactory__CreateInputSetting
            (pUVar28,pUVar23,(Settings_BaseSetting_o *)pSVar48,"Y","",
             80.0,35.0,false,(UnityEngine_Events_UnityAction_o *)0x0,pUVar26,
             (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
  pSVar48 = (__this->fields)._rotationZ;
  pUVar26 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            (pUVar26,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_MapEditorInspectPanel_Show_b__82_10,
             (MethodInfo *)0x0);
  UI_ElementFactory__CreateInputSetting
            (pUVar28,pUVar23,(Settings_BaseSetting_o *)pSVar48,"Z","",
             80.0,35.0,false,(UnityEngine_Events_UnityAction_o *)0x0,pUVar26,
             (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
  pSVar22 = "Scale";
  if (Il2CppMethodInitialized_07548008 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"MapEditor");
    il2cpp_codegen_initialize_runtime_metadata(&"Inspect");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07548008 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar22 = UI_UIManager__GetLocale
                      ("MapEditor","Inspect",pSVar22,"",
                       "",(MethodInfo *)0x0);
  UI_ElementFactory__CreateDefaultLabel(pUVar25,pUVar23,pSVar22,0,4,(MethodInfo *)0x0);
  pUVar24 = UI_ElementFactory__CreateHorizontalGroup(pUVar25,15.0,3,(MethodInfo *)0x0);
  if (pUVar24 == (UnityEngine_GameObject_o *)0x0) goto label_05d8a5b8;
  pUVar25 = UnityEngine_GameObject__get_transform(pUVar24,(MethodInfo *)0x0);
  pSVar48 = (__this->fields)._scaleX;
  pUVar26 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            (pUVar26,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_MapEditorInspectPanel_Show_b__82_11,
             (MethodInfo *)0x0);
  UI_ElementFactory__CreateInputSetting
            (pUVar25,pUVar23,(Settings_BaseSetting_o *)pSVar48,"X","",
             80.0,35.0,false,(UnityEngine_Events_UnityAction_o *)0x0,pUVar26,
             (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
  pSVar48 = (__this->fields)._scaleY;
  pUVar26 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            (pUVar26,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_MapEditorInspectPanel_Show_b__82_12,
             (MethodInfo *)0x0);
  UI_ElementFactory__CreateInputSetting
            (pUVar25,pUVar23,(Settings_BaseSetting_o *)pSVar48,"Y","",
             80.0,35.0,false,(UnityEngine_Events_UnityAction_o *)0x0,pUVar26,
             (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
  pSVar48 = (__this->fields)._scaleZ;
  pUVar26 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            (pUVar26,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_MapEditorInspectPanel_Show_b__82_13,
             (MethodInfo *)0x0);
  pMVar49 = (MethodInfo *)0x0;
  UI_ElementFactory__CreateInputSetting
            (pUVar25,pUVar23,(Settings_BaseSetting_o *)pSVar48,"Z","",
             80.0,35.0,false,(UnityEngine_Events_UnityAction_o *)0x0,pUVar26,
             (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
  UI_BasePanel__CreateHorizontalDivider
            ((UI_BasePanel_o *)__this,(__this->fields).SinglePanel,1.0,(MethodInfo *)0x0);
  pSVar22 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                      (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  method_00 = (System_Func_TSource__bool__o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor((UI_ElementStyle_o *)method_00,0x12,160.0,20.0,pSVar22,(MethodInfo *)0x0);
  pSVar22 = "Collision";
  if (Il2CppMethodInitialized_07548008 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"MapEditor");
    il2cpp_codegen_initialize_runtime_metadata(&"Inspect");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07548008 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar22 = UI_UIManager__GetLocale
                      ("MapEditor","Inspect",pSVar22,"",
                       "",(MethodInfo *)0x0);
  pUVar25 = UI_MapEditorInspectPanel__CreateSection
                      (__this,"Collision",pSVar22,(UI_ElementStyle_o *)method_00,false,
                       (UnityEngine_Transform_o *)0x0,pMVar49);
  pSVar20 = (__this->fields)._mapObjects;
  pSVar29 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_MapObject_bool);
  System_Func_object__bool____ctor
            ((System_Func_object__bool__o *)pSVar29,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_MapEditorInspectPanel_HasNonConvexMeshCollider,(MethodInfo_4F19300 *)0x0)
  ;
  bVar17 = System_Linq_Enumerable__Any_object__34dfce0
                     ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar20,
                      (System_Func_TSource__bool__o *)pSVar29,
                      (MethodInfo_34DFCE0 *)MethodInfo_System_Linq_Enumerable_Any_MapObject);
  if (bVar17) {
    pSVar30 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
    if ((TypeInfo_Map_MapObjectCollideMode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideMode);
    }
    if (pSVar30 == (System_String_array *)0x0) goto label_05d8a5b8;
    if ((int)pSVar30->max_length == 0) goto label_05d8a5bd;
    pSVar30->m_Items[0] = TypeInfo_Map_MapObjectCollideMode->static_fields->Physical;
    Il2CppCodeGenWriteBarrier(pSVar30->m_Items);
    if ((pSVar30->max_length & 0xfffffffe) == 0) goto label_05d8a5bd;
    ppSVar47 = pSVar30->m_Items + 1;
    pSVar30->m_Items[1] = TypeInfo_Map_MapObjectCollideMode->static_fields->None;
  }
  else {
    pSVar30 = (System_String_array *)SZArrayNew(TypeInfo_string_array,3);
    if ((TypeInfo_Map_MapObjectCollideMode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideMode);
    }
    if (pSVar30 == (System_String_array *)0x0) goto label_05d8a5b8;
    if ((int)pSVar30->max_length == 0) goto label_05d8a5bd;
    pSVar30->m_Items[0] = TypeInfo_Map_MapObjectCollideMode->static_fields->Physical;
    Il2CppCodeGenWriteBarrier(pSVar30->m_Items);
    if ((pSVar30->max_length & 0xfffffffe) == 0) goto label_05d8a5bd;
    pSVar30->m_Items[1] = TypeInfo_Map_MapObjectCollideMode->static_fields->Region;
    Il2CppCodeGenWriteBarrier(pSVar30->m_Items + 1);
    if ((uint)pSVar30->max_length < 3) goto label_05d8a5bd;
    ppSVar47 = pSVar30->m_Items + 2;
    pSVar30->m_Items[2] = TypeInfo_Map_MapObjectCollideMode->static_fields->None;
  }
  Il2CppCodeGenWriteBarrier(ppSVar47);
  pSVar9 = (__this->fields)._collideMode;
  if ((TypeInfo_UI_MapEditorInspectPanel->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel);
    if (Il2CppMethodInitialized_07548008 != '\0') goto label_05d872fd;
label_05d87daf:
    pSVar22 = "CollideMode";
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"MapEditor");
    il2cpp_codegen_initialize_runtime_metadata(&"Inspect");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07548008 = '\x01';
    uVar3 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    if (Il2CppMethodInitialized_07548008 == '\0') goto label_05d87daf;
label_05d872fd:
    uVar3 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
    pSVar22 = "CollideMode";
  }
  if (uVar3 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pMVar49 = (MethodInfo *)"";
  pSVar22 = UI_UIManager__GetLocale
                      ("MapEditor","Inspect",pSVar22,"",
                       "",(MethodInfo *)0x0);
  pSVar30 = UI_MapEditorInspectPanel__WithMixedOption
                      (__this,pSVar30,"CollideMode",(__this->fields)._collideMode,pMVar49);
  pUVar26 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            (pUVar26,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_MapEditorInspectPanel_Show_b__82_14,
             (MethodInfo *)0x0);
  UI_ElementFactory__CreateDropdownSetting
            (pUVar25,(UI_ElementStyle_o *)method_00,(Settings_BaseSetting_o *)pSVar9,pSVar22,pSVar30,
             "",140.0,30.0,300.0,(System_Nullable_float__o)0x0,pUVar26,
             (System_Int32_array *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
  pSVar22 = "CollideWith";
  pSVar9 = (__this->fields)._collideWith;
  if (Il2CppMethodInitialized_07548008 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"MapEditor");
    il2cpp_codegen_initialize_runtime_metadata(&"Inspect");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07548008 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pMVar49 = (MethodInfo *)"";
  pSVar22 = UI_UIManager__GetLocale
                      ("MapEditor","Inspect",pSVar22,"",
                       "",(MethodInfo *)0x0);
  pSVar30 = (System_String_array *)SZArrayNew(TypeInfo_string_array,8);
  if ((TypeInfo_Map_MapObjectCollideWith->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideWith);
  }
  if (pSVar30 == (System_String_array *)0x0) goto label_05d8a5b8;
  if ((int)pSVar30->max_length == 0) {
label_05d8a5bd:
    ThrowIndexOutOfRangeException();
  }
  pSVar30->m_Items[0] = TypeInfo_Map_MapObjectCollideWith->static_fields->Entities;
  Il2CppCodeGenWriteBarrier(pSVar30->m_Items);
  if ((pSVar30->max_length & 0xfffffffe) == 0) goto label_05d8a5bd;
  pSVar30->m_Items[1] = TypeInfo_Map_MapObjectCollideWith->static_fields->Characters;
  Il2CppCodeGenWriteBarrier(pSVar30->m_Items + 1);
  if ((uint)pSVar30->max_length < 3) goto label_05d8a5bd;
  pSVar30->m_Items[2] = TypeInfo_Map_MapObjectCollideWith->static_fields->Titans;
  Il2CppCodeGenWriteBarrier(pSVar30->m_Items + 2);
  if ((pSVar30->max_length & 0xfffffffc) == 0) goto label_05d8a5bd;
  pSVar30->m_Items[3] = TypeInfo_Map_MapObjectCollideWith->static_fields->Humans;
  Il2CppCodeGenWriteBarrier(pSVar30->m_Items + 3);
  if ((uint)pSVar30->max_length < 5) goto label_05d8a5bd;
  pSVar30->m_Items[4] = TypeInfo_Map_MapObjectCollideWith->static_fields->Projectiles;
  Il2CppCodeGenWriteBarrier(pSVar30->m_Items + 4);
  if ((uint)pSVar30->max_length < 6) goto label_05d8a5bd;
  pSVar30->m_Items[5] = TypeInfo_Map_MapObjectCollideWith->static_fields->Hitboxes;
  Il2CppCodeGenWriteBarrier(pSVar30->m_Items + 5);
  if ((uint)pSVar30->max_length < 7) goto label_05d8a5bd;
  pSVar30->m_Items[6] = TypeInfo_Map_MapObjectCollideWith->static_fields->MapObjects;
  Il2CppCodeGenWriteBarrier(pSVar30->m_Items + 6);
  if ((pSVar30->max_length & 0xfffffff8) == 0) goto label_05d8a5bd;
  pSVar30->m_Items[7] = TypeInfo_Map_MapObjectCollideWith->static_fields->All;
  Il2CppCodeGenWriteBarrier(pSVar30->m_Items + 7);
  pSVar30 = UI_MapEditorInspectPanel__WithMixedOption
                      (__this,pSVar30,"CollideWith",(__this->fields)._collideWith,pMVar49);
  pUVar26 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            (pUVar26,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_MapEditorInspectPanel_Show_b__82_15,
             (MethodInfo *)0x0);
  UI_ElementFactory__CreateDropdownSetting
            (pUVar25,(UI_ElementStyle_o *)method_00,(Settings_BaseSetting_o *)pSVar9,pSVar22,pSVar30,
             "",140.0,30.0,300.0,(System_Nullable_float__o)0x0,pUVar26,
             (System_Int32_array *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
  pSVar22 = "PhysicsMaterial";
  pSVar9 = (__this->fields)._physicsMaterial;
  if (Il2CppMethodInitialized_07548008 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"MapEditor");
    il2cpp_codegen_initialize_runtime_metadata(&"Inspect");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07548008 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pMVar49 = (MethodInfo *)"";
  pSVar22 = UI_UIManager__GetLocale
                      ("MapEditor","Inspect",pSVar22,"",
                       "",(MethodInfo *)0x0);
  pSVar30 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
  if ((TypeInfo_Map_MapObjectPhysicsMaterial->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectPhysicsMaterial);
  }
  if (pSVar30 == (System_String_array *)0x0) goto label_05d8a5b8;
  if ((int)pSVar30->max_length == 0) goto label_05d8a5bd;
  pSVar30->m_Items[0] = TypeInfo_Map_MapObjectPhysicsMaterial->static_fields->Default;
  Il2CppCodeGenWriteBarrier(pSVar30->m_Items);
  if ((pSVar30->max_length & 0xfffffffe) == 0) goto label_05d8a5bd;
  pSVar30->m_Items[1] = TypeInfo_Map_MapObjectPhysicsMaterial->static_fields->Ice;
  Il2CppCodeGenWriteBarrier(pSVar30->m_Items + 1);
  pSVar30 = UI_MapEditorInspectPanel__WithMixedOption
                      (__this,pSVar30,"PhysicsMaterial",(__this->fields)._physicsMaterial,pMVar49);
  pUVar26 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            (pUVar26,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_MapEditorInspectPanel_Show_b__82_16,
             (MethodInfo *)0x0);
  pMVar49 = (MethodInfo *)0x0;
  UI_ElementFactory__CreateDropdownSetting
            (pUVar25,(UI_ElementStyle_o *)method_00,(Settings_BaseSetting_o *)pSVar9,pSVar22,pSVar30,
             "",140.0,30.0,300.0,(System_Nullable_float__o)0x0,pUVar26,
             (System_Int32_array *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
  UI_BasePanel__CreateHorizontalDivider
            ((UI_BasePanel_o *)__this,(__this->fields).SinglePanel,1.0,(MethodInfo *)0x0);
  pSVar22 = "Shader";
  if (Il2CppMethodInitialized_07548008 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"MapEditor");
    il2cpp_codegen_initialize_runtime_metadata(&"Inspect");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07548008 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar22 = UI_UIManager__GetLocale
                      ("MapEditor","Inspect",pSVar22,"",
                       "",(MethodInfo *)0x0);
  pUVar25 = UI_MapEditorInspectPanel__CreateSection
                      (__this,"Shader",pSVar22,(UI_ElementStyle_o *)method_00,false,
                       (UnityEngine_Transform_o *)0x0,pMVar49);
  pSVar22 = "Visible";
  pSVar8 = (__this->fields)._visible;
  if (Il2CppMethodInitialized_07548008 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"MapEditor");
    il2cpp_codegen_initialize_runtime_metadata(&"Inspect");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07548008 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar22 = UI_UIManager__GetLocale
                      ("MapEditor","Inspect",pSVar22,"",
                       "",(MethodInfo *)0x0);
  pUVar26 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            (pUVar26,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_MapEditorInspectPanel_Show_b__82_17,
             (MethodInfo *)0x0);
  UI_ElementFactory__CreateToggleSetting
            (pUVar25,(UI_ElementStyle_o *)method_00,(Settings_BaseSetting_o *)pSVar8,pSVar22,
             "",25.0,25.0,pUVar26,(MethodInfo *)0x0);
  pSVar22 = "Shader";
  pSVar9 = (__this->fields)._shader;
  if (Il2CppMethodInitialized_07548008 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"MapEditor");
    il2cpp_codegen_initialize_runtime_metadata(&"Inspect");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07548008 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pMVar49 = (MethodInfo *)"";
  pSVar22 = UI_UIManager__GetLocale
                      ("MapEditor","Inspect",pSVar22,"",
                       "",(MethodInfo *)0x0);
  pSVar30 = (System_String_array *)SZArrayNew(TypeInfo_string_array,6);
  if ((TypeInfo_Map_MapObjectShader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectShader);
  }
  if (pSVar30 == (System_String_array *)0x0) goto label_05d8a5b8;
  if ((int)pSVar30->max_length == 0) goto label_05d8a5bd;
  pSVar30->m_Items[0] = TypeInfo_Map_MapObjectShader->static_fields->Default;
  Il2CppCodeGenWriteBarrier(pSVar30->m_Items);
  if ((pSVar30->max_length & 0xfffffffe) == 0) goto label_05d8a5bd;
  pSVar30->m_Items[1] = TypeInfo_Map_MapObjectShader->static_fields->Basic;
  Il2CppCodeGenWriteBarrier(pSVar30->m_Items + 1);
  if ((uint)pSVar30->max_length < 3) goto label_05d8a5bd;
  pSVar30->m_Items[2] = TypeInfo_Map_MapObjectShader->static_fields->Transparent;
  Il2CppCodeGenWriteBarrier(pSVar30->m_Items + 2);
  if ((pSVar30->max_length & 0xfffffffc) == 0) goto label_05d8a5bd;
  pSVar30->m_Items[3] = TypeInfo_Map_MapObjectShader->static_fields->Reflective;
  Il2CppCodeGenWriteBarrier(pSVar30->m_Items + 3);
  if ((uint)pSVar30->max_length < 5) goto label_05d8a5bd;
  pSVar30->m_Items[4] = TypeInfo_Map_MapObjectShader->static_fields->DefaultNoTint;
  Il2CppCodeGenWriteBarrier(pSVar30->m_Items + 4);
  if ((uint)pSVar30->max_length < 6) goto label_05d8a5bd;
  pSVar30->m_Items[5] = TypeInfo_Map_MapObjectShader->static_fields->DefaultTiled;
  Il2CppCodeGenWriteBarrier(pSVar30->m_Items + 5);
  pSVar30 = UI_MapEditorInspectPanel__WithMixedOption
                      (__this,pSVar30,"Shader",(__this->fields)._shader,pMVar49);
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            (__this_02,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_MapEditorInspectPanel_Show_b__82_18,
             (MethodInfo *)0x0);
  pUVar26 = (UnityEngine_Events_UnityAction_o *)0x0;
  UI_ElementFactory__CreateDropdownSetting
            (pUVar25,(UI_ElementStyle_o *)method_00,(Settings_BaseSetting_o *)pSVar9,pSVar22,pSVar30,
             "",140.0,30.0,300.0,(System_Nullable_float__o)0x0,__this_02,
             (System_Int32_array *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
  pSVar20 = (__this->fields)._mapObjects;
  if ((TypeInfo_UI_MapEditorInspectPanel_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel_c);
  }
  pUVar32 = TypeInfo_UI_MapEditorInspectPanel_c->static_fields;
  pSVar29 = pUVar32->__9__82_19;
  if (pSVar29 == (System_Func_MapObject__bool__o *)0x0) {
    if ((TypeInfo_UI_MapEditorInspectPanel_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel_c);
      pUVar32 = TypeInfo_UI_MapEditorInspectPanel_c->static_fields;
    }
    pIVar27 = (Il2CppObject *)pUVar32->__9;
    pSVar29 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_MapObject_bool);
    System_Func_object__bool____ctor
              ((System_Func_object__bool__o *)pSVar29,pIVar27,
               (intptr_t)MethodInfo_UI_MapEditorInspectPanel_c_Show_b__82_19,(MethodInfo_4F19300 *)0x0);
    pUVar32 = TypeInfo_UI_MapEditorInspectPanel_c->static_fields;
    pUVar32->__9__82_19 = pSVar29;
    Il2CppCodeGenWriteBarrier(&pUVar32->__9__82_19);
  }
  pUVar34 = pUStack_98;
  bVar17 = System_Linq_Enumerable__All_object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar20,
                      (System_Func_TSource__bool__o *)pSVar29,
                      (MethodInfo_34DEBD0 *)MethodInfo_System_Linq_Enumerable_All_MapObject);
  pUVar10 = pUVar34->klass;
  if ((TypeInfo_UI_MapEditorInspectPanel_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel_c);
    pUVar32 = TypeInfo_UI_MapEditorInspectPanel_c->static_fields;
    pSVar29 = pUVar32->__9__82_20;
  }
  else {
    pUVar32 = TypeInfo_UI_MapEditorInspectPanel_c->static_fields;
    pSVar29 = pUVar32->__9__82_20;
  }
  if (pSVar29 == (System_Func_MapObject__bool__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel_c)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel_c);
      pUVar32 = TypeInfo_UI_MapEditorInspectPanel_c->static_fields;
    }
    pIVar27 = (Il2CppObject *)pUVar32->__9;
    pSVar29 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_MapObject_bool);
    System_Func_object__bool____ctor
              ((System_Func_object__bool__o *)pSVar29,pIVar27,
               (intptr_t)MethodInfo_UI_MapEditorInspectPanel_c_Show_b__82_20,(MethodInfo_4F19300 *)0x0);
    pUVar32 = TypeInfo_UI_MapEditorInspectPanel_c->static_fields;
    pUVar32->__9__82_20 = pSVar29;
    Il2CppCodeGenWriteBarrier(&pUVar32->__9__82_20);
    pUVar34 = pUStack_98;
  }
  bVar18 = System_Linq_Enumerable__All_object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)pUVar10,
                      (System_Func_TSource__bool__o *)pSVar29,
                      (MethodInfo_34DEBD0 *)MethodInfo_System_Linq_Enumerable_All_MapObject);
  pUStack_98 = (UI_MapEditorInspectPanel___c__DisplayClass82_0_o *)CONCAT71(pUStack_98._1_7_,bVar18);
  pUVar10 = pUVar34->klass;
  if ((TypeInfo_UI_MapEditorInspectPanel_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel_c);
    pUVar32 = TypeInfo_UI_MapEditorInspectPanel_c->static_fields;
    pSVar29 = pUVar32->__9__82_21;
  }
  else {
    pUVar32 = TypeInfo_UI_MapEditorInspectPanel_c->static_fields;
    pSVar29 = pUVar32->__9__82_21;
  }
  if (pSVar29 == (System_Func_MapObject__bool__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel_c)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel_c);
      pUVar32 = TypeInfo_UI_MapEditorInspectPanel_c->static_fields;
    }
    pIVar27 = (Il2CppObject *)pUVar32->__9;
    pSVar29 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_MapObject_bool);
    System_Func_object__bool____ctor
              ((System_Func_object__bool__o *)pSVar29,pIVar27,
               (intptr_t)MethodInfo_UI_MapEditorInspectPanel_c_Show_b__82_21,(MethodInfo_4F19300 *)0x0);
    pUVar32 = TypeInfo_UI_MapEditorInspectPanel_c->static_fields;
    pUVar32->__9__82_21 = pSVar29;
    Il2CppCodeGenWriteBarrier(&pUVar32->__9__82_21);
  }
  bVar18 = System_Linq_Enumerable__All_object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)pUVar10,
                      (System_Func_TSource__bool__o *)pSVar29,
                      (MethodInfo_34DEBD0 *)MethodInfo_System_Linq_Enumerable_All_MapObject);
  pSStack_a8 = (System_Collections_Generic_Dictionary_object__object__o *)CONCAT71(pSStack_a8._1_7_,bVar18);
  pUVar10 = pUVar34->klass;
  if ((TypeInfo_UI_MapEditorInspectPanel_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel_c);
    pUVar32 = TypeInfo_UI_MapEditorInspectPanel_c->static_fields;
    pSVar29 = pUVar32->__9__82_22;
  }
  else {
    pUVar32 = TypeInfo_UI_MapEditorInspectPanel_c->static_fields;
    pSVar29 = pUVar32->__9__82_22;
  }
  if (pSVar29 == (System_Func_MapObject__bool__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel_c)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel_c);
      pUVar32 = TypeInfo_UI_MapEditorInspectPanel_c->static_fields;
    }
    pIVar27 = (Il2CppObject *)pUVar32->__9;
    pSVar29 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_MapObject_bool);
    System_Func_object__bool____ctor
              ((System_Func_object__bool__o *)pSVar29,pIVar27,
               (intptr_t)MethodInfo_UI_MapEditorInspectPanel_c_Show_b__82_22,(MethodInfo_4F19300 *)0x0);
    pUVar32 = TypeInfo_UI_MapEditorInspectPanel_c->static_fields;
    pUVar32->__9__82_22 = pSVar29;
    Il2CppCodeGenWriteBarrier(&pUVar32->__9__82_22);
  }
  bVar18 = System_Linq_Enumerable__All_object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)pUVar10,
                      (System_Func_TSource__bool__o *)pSVar29,
                      (MethodInfo_34DEBD0 *)MethodInfo_System_Linq_Enumerable_All_MapObject);
  pUVar10 = pUVar34->klass;
  if ((TypeInfo_UI_MapEditorInspectPanel_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel_c);
  }
  pUVar32 = TypeInfo_UI_MapEditorInspectPanel_c->static_fields;
  __this_03 = (System_Func_TSource__bool__o *)pUVar32->__9__82_23;
  if (__this_03 == (System_Func_TSource__bool__o *)0x0) {
    if ((TypeInfo_UI_MapEditorInspectPanel_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel_c);
      pUVar32 = TypeInfo_UI_MapEditorInspectPanel_c->static_fields;
    }
    pIVar27 = (Il2CppObject *)pUVar32->__9;
    __this_03 = (System_Func_TSource__bool__o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_MapObject_bool);
    System_Func_object__bool____ctor
              ((System_Func_object__bool__o *)__this_03,pIVar27,
               (intptr_t)MethodInfo_UI_MapEditorInspectPanel_c_Show_b__82_23,(MethodInfo_4F19300 *)0x0);
    pUVar32 = TypeInfo_UI_MapEditorInspectPanel_c->static_fields;
    pUVar32->__9__82_23 = (System_Func_MapObject__bool__o *)__this_03;
    Il2CppCodeGenWriteBarrier(&pUVar32->__9__82_23);
    cVar19 = System_Linq_Enumerable__All_object_
                       ((System_Collections_Generic_IEnumerable_TSource__o *)pUVar10,__this_03,
                        (MethodInfo_34DEBD0 *)MethodInfo_System_Linq_Enumerable_All_MapObject);
    if (!bVar17) goto label_05d88038;
label_05d88292:
    pSStack_a0 = (System_String_o *)CONCAT71(pSStack_a0._1_7_,cVar19);
    pSVar11 = (__this->fields)._color;
    if ((TypeInfo_UI_MapEditorInspectPanel->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel);
    }
    pSVar22 = "Color";
    if (Il2CppMethodInitialized_07548008 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
      il2cpp_codegen_initialize_runtime_metadata(&"MapEditor");
      il2cpp_codegen_initialize_runtime_metadata(&"Inspect");
      il2cpp_codegen_initialize_runtime_metadata(&"");
      Il2CppMethodInitialized_07548008 = '\x01';
    }
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pSVar22 = UI_UIManager__GetLocale
                        ("MapEditor","Inspect",pSVar22,"",
                         "",(MethodInfo *)0x0);
    pUVar15 = (__this->fields)._menu;
    if (pUVar15 == (UI_MapEditorMenu_o *)0x0) goto label_05d8a5b8;
    pUVar16 = (pUVar15->fields).ColorPickPopup;
    pUVar26 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              (pUVar26,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_MapEditorInspectPanel_Show_b__82_24,
               (MethodInfo *)0x0);
    __this_02 = (UnityEngine_Events_UnityAction_o *)0x0;
    __this_03 = method_00;
    UI_ElementFactory__CreateColorSetting
              (pUVar25,(UI_ElementStyle_o *)method_00,(Settings_BaseSetting_o *)pSVar11,pSVar22,pUVar16,
               "",90.0,25.0,pUVar26,(MethodInfo *)0x0);
    cVar19 = (char)pSStack_a0;
    if ((char)pUStack_98 != '\0') goto label_05d88043;
label_05d883f0:
    if ((char)pSStack_a8 == '\0') {
      if (!bVar18) goto label_05d88bde;
      if (cVar19 != '\0') {
        pSVar11 = (__this->fields)._reflectColor;
        if ((TypeInfo_UI_MapEditorInspectPanel->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel);
        }
        pSVar22 = UI_MapEditorInspectPanel__Locale("ReflectColor",(MethodInfo *)__this_03);
        pUVar15 = (__this->fields)._menu;
        if (pUVar15 == (UI_MapEditorMenu_o *)0x0) goto label_05d8a5b8;
        pUVar16 = (pUVar15->fields).ColorPickPopup;
        pUVar26 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
        UnityEngine_Events_UnityAction___ctor
                  (pUVar26,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_MapEditorInspectPanel_Show_b__82_33,
                   (MethodInfo *)0x0);
        UI_ElementFactory__CreateColorSetting
                  (pUVar25,(UI_ElementStyle_o *)method_00,(Settings_BaseSetting_o *)pSVar11,pSVar22,pUVar16,
                   "",90.0,25.0,pUVar26,(MethodInfo *)0x0);
      }
      pUVar24 = UI_ElementFactory__CreateHorizontalGroup(pUVar25,20.0,3,(MethodInfo *)0x0);
      if (pUVar24 == (UnityEngine_GameObject_o *)0x0) goto label_05d8a5b8;
      pUVar28 = UnityEngine_GameObject__get_transform(pUVar24,(MethodInfo *)0x0);
      if ((TypeInfo_UI_MapEditorInspectPanel->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel);
        if (Il2CppMethodInitialized_07548008 != '\0') goto label_05d886c1;
label_05d8a560:
        pSVar22 = "Texture";
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
        il2cpp_codegen_initialize_runtime_metadata(&"MapEditor");
        il2cpp_codegen_initialize_runtime_metadata(&"Inspect");
        il2cpp_codegen_initialize_runtime_metadata(&"");
        Il2CppMethodInitialized_07548008 = '\x01';
        uVar3 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
      }
      else {
        if (Il2CppMethodInitialized_07548008 == '\0') goto label_05d8a560;
label_05d886c1:
        uVar3 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
        pSVar22 = "Texture";
      }
      if (uVar3 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pSVar22 = UI_UIManager__GetLocale
                          ("MapEditor","Inspect",pSVar22,"",
                           "",(MethodInfo *)0x0);
      pUVar24 = UI_ElementFactory__CreateDefaultLabel
                          (pUVar28,(UI_ElementStyle_o *)method_00,pSVar22,0,3,(MethodInfo *)0x0);
      if ((pUVar24 == (UnityEngine_GameObject_o *)0x0) ||
         (pUVar33 = UnityEngine_GameObject__GetComponent_object_
                              (pUVar24,(MethodInfo_353B730 *)
                                       MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement),
         pUVar33 == (UnityEngine_UI_LayoutElement_o *)0x0)) {
label_05d8a5b8:
        ThrowNullReferenceException();
      }
      (*(pUVar33->klass->vtable)._36_set_preferredWidth.methodPtr)
                (pUVar33,160.0,(pUVar33->klass->vtable)._36_set_preferredWidth.method);
      pSVar9 = (__this->fields)._texture;
      if (pSVar9 == (Settings_StringSetting_o *)0x0) goto label_05d8a5b8;
      pSVar22 = (pSVar9->fields)._value;
      pUVar26 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
      UnityEngine_Events_UnityAction___ctor
                (pUVar26,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_MapEditorInspectPanel_Show_b__82_34,
                 (MethodInfo *)0x0);
      UI_ElementFactory__CreateDefaultButton
                (pUVar28,(UI_ElementStyle_o *)method_00,pSVar22,0.0,0.0,pUVar26,(MethodInfo *)0x0);
      pSVar22 = "TilingX";
      pSVar48 = (__this->fields)._tilingX;
      if (Il2CppMethodInitialized_07548008 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
        il2cpp_codegen_initialize_runtime_metadata(&"MapEditor");
        il2cpp_codegen_initialize_runtime_metadata(&"Inspect");
        il2cpp_codegen_initialize_runtime_metadata(&"");
        Il2CppMethodInitialized_07548008 = '\x01';
      }
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pSVar22 = UI_UIManager__GetLocale
                          ("MapEditor","Inspect",pSVar22,"",
                           "",(MethodInfo *)0x0);
      pUVar26 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
      UnityEngine_Events_UnityAction___ctor
                (pUVar26,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_MapEditorInspectPanel_Show_b__82_35,
                 (MethodInfo *)0x0);
      UI_ElementFactory__CreateInputSetting
                (pUVar25,(UI_ElementStyle_o *)method_00,(Settings_BaseSetting_o *)pSVar48,pSVar22,
                 "",80.0,35.0,false,(UnityEngine_Events_UnityAction_o *)0x0,pUVar26,
                 (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
      pSVar22 = "TilingY";
      pSVar48 = (__this->fields)._tilingY;
      if (Il2CppMethodInitialized_07548008 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
        il2cpp_codegen_initialize_runtime_metadata(&"MapEditor");
        il2cpp_codegen_initialize_runtime_metadata(&"Inspect");
        il2cpp_codegen_initialize_runtime_metadata(&"");
        Il2CppMethodInitialized_07548008 = '\x01';
      }
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pSVar22 = UI_UIManager__GetLocale
                          ("MapEditor","Inspect",pSVar22,"",
                           "",(MethodInfo *)0x0);
      pUVar26 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
      UnityEngine_Events_UnityAction___ctor
                (pUVar26,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_MapEditorInspectPanel_Show_b__82_36,
                 (MethodInfo *)0x0);
      UI_ElementFactory__CreateInputSetting
                (pUVar25,(UI_ElementStyle_o *)method_00,(Settings_BaseSetting_o *)pSVar48,pSVar22,
                 "",80.0,35.0,false,(UnityEngine_Events_UnityAction_o *)0x0,pUVar26,
                 (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
      pSVar22 = "OffsetX";
      pSVar48 = (__this->fields)._offsetX;
      if (Il2CppMethodInitialized_07548008 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
        il2cpp_codegen_initialize_runtime_metadata(&"MapEditor");
        il2cpp_codegen_initialize_runtime_metadata(&"Inspect");
        il2cpp_codegen_initialize_runtime_metadata(&"");
        Il2CppMethodInitialized_07548008 = '\x01';
      }
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pSVar22 = UI_UIManager__GetLocale
                          ("MapEditor","Inspect",pSVar22,"",
                           "",(MethodInfo *)0x0);
      pUVar26 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
      UnityEngine_Events_UnityAction___ctor
                (pUVar26,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_MapEditorInspectPanel_Show_b__82_37,
                 (MethodInfo *)0x0);
      UI_ElementFactory__CreateInputSetting
                (pUVar25,(UI_ElementStyle_o *)method_00,(Settings_BaseSetting_o *)pSVar48,pSVar22,
                 "",80.0,35.0,false,(UnityEngine_Events_UnityAction_o *)0x0,pUVar26,
                 (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
      pSVar22 = "OffsetY";
      pSVar48 = (__this->fields)._offsetY;
      if (Il2CppMethodInitialized_07548008 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
        il2cpp_codegen_initialize_runtime_metadata(&"MapEditor");
        il2cpp_codegen_initialize_runtime_metadata(&"Inspect");
        il2cpp_codegen_initialize_runtime_metadata(&"");
        Il2CppMethodInitialized_07548008 = '\x01';
      }
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pSVar22 = UI_UIManager__GetLocale
                          ("MapEditor","Inspect",pSVar22,"",
                           "",(MethodInfo *)0x0);
      __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
      ppMVar31 = &MethodInfo_UI_MapEditorInspectPanel_Show_b__82_38;
    }
    else {
      pSVar48 = (__this->fields)._tilingX;
      if ((TypeInfo_UI_MapEditorInspectPanel->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel);
        if (Il2CppMethodInitialized_07548008 != '\0') goto label_05d8843f;
label_05d8a4ec:
        pSVar22 = "TilingX";
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
        il2cpp_codegen_initialize_runtime_metadata(&"MapEditor");
        il2cpp_codegen_initialize_runtime_metadata(&"Inspect");
        il2cpp_codegen_initialize_runtime_metadata(&"");
        Il2CppMethodInitialized_07548008 = '\x01';
        uVar3 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
      }
      else {
        if (Il2CppMethodInitialized_07548008 == '\0') goto label_05d8a4ec;
label_05d8843f:
        uVar3 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
        pSVar22 = "TilingX";
      }
      if (uVar3 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pSVar22 = UI_UIManager__GetLocale
                          ("MapEditor","Inspect",pSVar22,"",
                           "",(MethodInfo *)0x0);
      pUVar26 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
      UnityEngine_Events_UnityAction___ctor
                (pUVar26,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_MapEditorInspectPanel_Show_b__82_27,
                 (MethodInfo *)0x0);
      UI_ElementFactory__CreateInputSetting
                (pUVar25,(UI_ElementStyle_o *)method_00,(Settings_BaseSetting_o *)pSVar48,pSVar22,
                 "",80.0,35.0,false,(UnityEngine_Events_UnityAction_o *)0x0,pUVar26,
                 (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
      pSVar22 = "TilingY";
      pSVar48 = (__this->fields)._tilingY;
      if (Il2CppMethodInitialized_07548008 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
        il2cpp_codegen_initialize_runtime_metadata(&"MapEditor");
        il2cpp_codegen_initialize_runtime_metadata(&"Inspect");
        il2cpp_codegen_initialize_runtime_metadata(&"");
        Il2CppMethodInitialized_07548008 = '\x01';
      }
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pSVar22 = UI_UIManager__GetLocale
                          ("MapEditor","Inspect",pSVar22,"",
                           "",(MethodInfo *)0x0);
      __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
      ppMVar31 = &MethodInfo_UI_MapEditorInspectPanel_Show_b__82_28;
    }
  }
  else {
    cVar19 = System_Linq_Enumerable__All_object_
                       ((System_Collections_Generic_IEnumerable_TSource__o *)pUVar10,__this_03,
                        (MethodInfo_34DEBD0 *)MethodInfo_System_Linq_Enumerable_All_MapObject);
    if (bVar17) goto label_05d88292;
label_05d88038:
    if ((char)pUStack_98 == '\0') goto label_05d883f0;
label_05d88043:
    pUVar24 = UI_ElementFactory__CreateHorizontalGroup((__this->fields).SinglePanel,20.0,3,(MethodInfo *)0x0);
    if (pUVar24 == (UnityEngine_GameObject_o *)0x0) goto label_05d8a5b8;
    UnityEngine_GameObject__get_transform(pUVar24,(MethodInfo *)0x0);
    pSVar48 = (__this->fields)._tilingX;
    if ((TypeInfo_UI_MapEditorInspectPanel->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel);
      if (Il2CppMethodInitialized_07548008 != '\0') goto label_05d880ac;
label_05d8a471:
      pSVar22 = "TilingX";
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
      il2cpp_codegen_initialize_runtime_metadata(&"MapEditor");
      il2cpp_codegen_initialize_runtime_metadata(&"Inspect");
      il2cpp_codegen_initialize_runtime_metadata(&"");
      Il2CppMethodInitialized_07548008 = '\x01';
      uVar3 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
    }
    else {
      if (Il2CppMethodInitialized_07548008 == '\0') goto label_05d8a471;
label_05d880ac:
      uVar3 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
      pSVar22 = "TilingX";
    }
    if (uVar3 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pSVar22 = UI_UIManager__GetLocale
                        ("MapEditor","Inspect",pSVar22,"",
                         "",(MethodInfo *)0x0);
    pUVar26 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              (pUVar26,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_MapEditorInspectPanel_Show_b__82_25,
               (MethodInfo *)0x0);
    UI_ElementFactory__CreateInputSetting
              (pUVar25,(UI_ElementStyle_o *)method_00,(Settings_BaseSetting_o *)pSVar48,pSVar22,
               "",80.0,35.0,false,(UnityEngine_Events_UnityAction_o *)0x0,pUVar26,
               (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
    pSVar22 = "TilingY";
    pSVar48 = (__this->fields)._tilingY;
    if (Il2CppMethodInitialized_07548008 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
      il2cpp_codegen_initialize_runtime_metadata(&"MapEditor");
      il2cpp_codegen_initialize_runtime_metadata(&"Inspect");
      il2cpp_codegen_initialize_runtime_metadata(&"");
      Il2CppMethodInitialized_07548008 = '\x01';
    }
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pSVar22 = UI_UIManager__GetLocale
                        ("MapEditor","Inspect",pSVar22,"",
                         "",(MethodInfo *)0x0);
    __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    ppMVar31 = &MethodInfo_UI_MapEditorInspectPanel_Show_b__82_26;
  }
  UnityEngine_Events_UnityAction___ctor
            (__this_02,(Il2CppObject *)__this,(intptr_t)*ppMVar31,(MethodInfo *)0x0);
  pUVar26 = (UnityEngine_Events_UnityAction_o *)0x0;
  UI_ElementFactory__CreateInputSetting
            (pUVar25,(UI_ElementStyle_o *)method_00,(Settings_BaseSetting_o *)pSVar48,pSVar22,
             "",80.0,35.0,false,(UnityEngine_Events_UnityAction_o *)0x0,__this_02,
             (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
label_05d88bde:
  uVar38 = 0;
  UI_BasePanel__CreateHorizontalDivider
            ((UI_BasePanel_o *)__this,(__this->fields).SinglePanel,1.0,(MethodInfo *)0x0);
label_05d88c86:
  pSVar12 = (__this->fields)._components;
  if (pSVar12 != (System_Collections_Generic_List_Dictionary_string__BaseSetting___o *)0x0) {
    iVar45 = (int32_t)uVar38;
    if (iVar45 < (pSVar12->fields)._size) {
      pUVar34 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel_c__DisplayClass82_0);
      UI_MapEditorInspectPanel___c__DisplayClass82_0___ctor(pUVar34,(MethodInfo *)0x0);
      if (pUVar34 != (UI_MapEditorInspectPanel___c__DisplayClass82_0_o *)0x0) {
        (pUVar34->fields).__4__this = __this;
        Il2CppCodeGenWriteBarrier(&(pUVar34->fields).__4__this);
        pSVar37 = (__this->fields)._componentNames;
        if (pSVar37 != (System_Collections_Generic_List_string__o *)0x0) {
          pSVar22 = System_Collections_Generic_List_object___get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar37,iVar45,
                               (MethodInfo_395CF20 *)
                               MethodInfo_System_Collections_Generic_List_string_get_Item);
          (pUVar34->fields).componentName = pSVar22;
          Il2CppCodeGenWriteBarrier(&(pUVar34->fields).componentName);
          pSVar22 = System_String__Concat_52f0320
                              ("Component:",(pUVar34->fields).componentName,(MethodInfo *)0x0);
          pUStack_98 = pUVar34;
          pUStack_60 = UI_MapEditorInspectPanel__CreateSection
                                 (__this,pSVar22,(pUVar34->fields).componentName,
                                  (UI_ElementStyle_o *)method_00,true,(UnityEngine_Transform_o *)0x0,
                                  (MethodInfo *)pUVar26);
          pSVar12 = (__this->fields)._components;
          if (pSVar12 != (System_Collections_Generic_List_Dictionary_string__BaseSetting___o *)0x0) {
            uStack_38 = uVar38;
            settings = (System_Collections_Generic_Dictionary_string__BaseSetting__o *)
                       System_Collections_Generic_List_object___get_Item
                                 ((System_Collections_Generic_List_object__o *)pSVar12,iVar45,
                                  (MethodInfo_395CF20 *)
                                  MethodInfo_System_Collections_Generic_List_Dictionary_string_BaseSetting_get_Item
                                 );
            if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
            }
            pSStack_a8 = (System_Collections_Generic_Dictionary_object__object__o *)settings;
            pSVar22 = CustomLogic_CustomLogicManager__GetModeDescription(settings,(MethodInfo *)0x0);
            bVar17 = System_String__op_Inequality(pSVar22,"",(MethodInfo *)0x0);
            if (bVar17) {
              UI_ElementFactory__CreateDefaultLabel
                        (pUStack_60,(UI_ElementStyle_o *)method_00,pSVar22,0,3,(MethodInfo *)0x0);
            }
            pSStack_50 = il2cpp_codegen_object_new
                                   ((Il2CppClass *)
                                    TypeInfo_System_Collections_Generic_Dictionary_string_string);
            System_Collections_Generic_Dictionary_object__object____ctor
                      ((System_Collections_Generic_Dictionary_object__object__o *)pSStack_50,
                       (MethodInfo_4AAC8D0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
            __this_04 = il2cpp_codegen_object_new
                                  ((Il2CppClass *)
                                   TypeInfo_System_Collections_Generic_Dictionary_string_string_array);
            System_Collections_Generic_Dictionary_object__object____ctor
                      ((System_Collections_Generic_Dictionary_object__object__o *)__this_04,
                       (MethodInfo_4AAC8D0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_string_array_ctor);
            pSStack_40 = il2cpp_codegen_object_new
                                   ((Il2CppClass *)
                                    TypeInfo_System_Collections_Generic_Dictionary_string_Transform);
            System_Collections_Generic_Dictionary_object__object____ctor
                      ((System_Collections_Generic_Dictionary_object__object__o *)pSStack_40,
                       (MethodInfo_4AAC8D0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_Transform_ctor);
            __this_00 = pSStack_a8;
            if ((pSStack_a8 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
               (pSStack_58 = __this_04,
               pSVar35 = System_Collections_Generic_Dictionary_object__object___get_Keys
                                   (pSStack_a8,
                                    (MethodInfo_4AAD0F0 *)
                                    MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_get_Keys
                                   ),
               pSVar35 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)) {
              System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
                        ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                         auStack_90,pSVar35,
                         (MethodInfo_511A520 *)
                         MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_BaseSetting_GetEnumerator
                        );
              pSStack_68 = pSStack_80;
              auStack_78 = (undefined1  [8])auStack_90._0_8_;
              puStack_70 = (undefined1 *)auStack_90._8_8_;
              auStack_90._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
              auStack_90._8_8_ = auStack_78;
label_05d88ed0:
              bVar17 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                                 ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o
                                   *)auStack_78,
                                  (MethodInfo_4CE7080 *)
                                  MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_BaseSetting_MoveNext
                                 );
              pSVar22 = pSStack_68;
              if (bVar17) {
                pSVar36 = System_Collections_Generic_Dictionary_object__object___get_Item
                                    (__this_00,(Il2CppObject *)pSStack_68,
                                     (MethodInfo_4AAD450 *)
                                     MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_get_Item
                                    );
                if (pSVar22 == (System_String_o *)0x0) {
                  ThrowNullReferenceException();
                }
                bVar17 = System_String__EndsWith(pSVar22,"Tooltip",(MethodInfo *)0x0);
                if ((bVar17) && (pSVar36 != (Settings_BaseSetting_o *)0x0)) {
                  bVar43 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
                  if ((bVar43 <= (pSVar36->klass->_2).typeHierarchyDepth) &&
                     ((pSVar36->klass->_2).typeHierarchy[(ulong)bVar43 - 1] ==
                      (Il2CppClass *)TypeInfo_Settings_StringSetting)) {
                    pSVar22 = System_String__Substring_53042f0
                                        (pSVar22,0,(pSVar22->fields)._stringLength + -7,(MethodInfo *)0x0);
                    bVar43 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
                    if (((pSVar36->klass->_2).typeHierarchyDepth < bVar43) ||
                       ((pSVar36->klass->_2).typeHierarchy[(ulong)bVar43 - 1] !=
                        (Il2CppClass *)TypeInfo_Settings_StringSetting)) {
                      il2cpp_codegen_raise_invalid_cast_exception(pSVar36);
                    }
                    if (pSStack_50 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) {
                      ThrowNullReferenceException();
                    }
                    System_Collections_Generic_Dictionary_object__object___set_Item
                              ((System_Collections_Generic_Dictionary_object__object__o *)pSStack_50,
                               (Il2CppObject *)pSVar22,(*(uint64_t *)((char *)pSVar36 + 0x20)),
                               (MethodInfo_4AAD4C0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
                    goto label_05d88ed0;
                  }
                }
                bVar17 = System_String__EndsWith(pSVar22,"Dropbox",(MethodInfo *)0x0);
                if ((bVar17) && (pSVar36 != (Settings_BaseSetting_o *)0x0)) {
                  bVar43 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
                  if ((bVar43 <= (pSVar36->klass->_2).typeHierarchyDepth) &&
                     ((pSVar36->klass->_2).typeHierarchy[(ulong)bVar43 - 1] ==
                      (Il2CppClass *)TypeInfo_Settings_StringSetting)) {
                    pSVar37 = il2cpp_codegen_object_new
                                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
                    System_Collections_Generic_List_object____ctor
                              ((System_Collections_Generic_List_object__o *)pSVar37,
                               (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
                    bVar43 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
                    if (((pSVar36->klass->_2).typeHierarchyDepth < bVar43) ||
                       ((pSVar36->klass->_2).typeHierarchy[(ulong)bVar43 - 1] !=
                        (Il2CppClass *)TypeInfo_Settings_StringSetting)) {
                      il2cpp_codegen_raise_invalid_cast_exception(pSVar36);
                    }
                    if ((*(uint64_t *)((char *)pSVar36 + 0x20)) == (System_String_o *)0x0) {
                      ThrowNullReferenceException();
                    }
                    pSVar30 = System_String__Split((*(uint64_t *)((char *)pSVar36 + 0x20)),0x2c,0,(MethodInfo *)0x0);
                    if (pSVar30 == (System_String_array *)0x0) {
                      ThrowNullReferenceException();
                    }
                    uVar38 = pSVar30->max_length;
                    if (pSVar37 == (System_Collections_Generic_List_string__o *)0x0) {
                      if ((int)uVar38 < 1) {
                        ThrowNullReferenceException();
                      }
                      if ((uVar38 & 0xffffffff) != 0) {
                        if (pSVar30->m_Items[0] != (System_String_o *)0x0) {
                          System_String__Trim(pSVar30->m_Items[0],(MethodInfo *)0x0);
label_05d89f2b:
                          ThrowNullReferenceException();
                        }
label_05d89f1a:
                        ThrowNullReferenceException();
                      }
label_05d89eb7:
                      ThrowIndexOutOfRangeException();
                    }
                    if (0 < (int)uVar38) {
                      uVar46 = 0;
                      do {
                        if ((uint)uVar38 <= uVar46) goto label_05d89eb7;
                        if (pSVar30->m_Items[(int)uVar46] == (System_String_o *)0x0) goto label_05d89f1a;
                        pSVar39 = System_String__Trim(pSVar30->m_Items[(int)uVar46],(MethodInfo *)0x0);
                        pMVar49 = MethodInfo_System_Collections_Generic_List_string_Add;
                        piVar1 = &(pSVar37->fields)._version;
                        *piVar1 = *piVar1 + 1;
                        pSVar13 = (pSVar37->fields)._items;
                        if (pSVar13 == (System_String_array *)0x0) goto label_05d89f2b;
                        uVar4 = (pSVar37->fields)._size;
                        if (uVar4 < (uint)pSVar13->max_length) {
                          (pSVar37->fields)._size = uVar4 + 1;
                          pSVar13->m_Items[(int)uVar4] = pSVar39;
                          Il2CppCodeGenWriteBarrier(pSVar13->m_Items + (int)uVar4);
                        }
                        else {
                          System_Collections_Generic_List_object___AddWithResize
                                    ((System_Collections_Generic_List_object__o *)pSVar37,
                                     (Il2CppObject *)pSVar39,
                                     (MethodInfo_395D230 *)pMVar49->klass->rgctx_data[0xe].method);
                        }
                        uVar46 = uVar46 + 1;
                        uVar4 = (uint)pSVar30->max_length;
                        uVar38 = (ulong)uVar4;
                      } while ((int)uVar46 < (int)uVar4);
                    }
                    pSVar39 = "None";
                    pMVar49 = MethodInfo_System_Collections_Generic_List_string_Add;
                    if ((pSVar37->fields)._size == 0) {
                      piVar1 = &(pSVar37->fields)._version;
                      *piVar1 = *piVar1 + 1;
                      pSVar30 = (pSVar37->fields)._items;
                      if (pSVar30 == (System_String_array *)0x0) {
                        ThrowNullReferenceException();
                      }
                      if ((int)pSVar30->max_length == 0) {
                        System_Collections_Generic_List_object___AddWithResize
                                  ((System_Collections_Generic_List_object__o *)pSVar37,
                                   (Il2CppObject *)pSVar39,
                                   (MethodInfo_395D230 *)pMVar49->klass->rgctx_data[0xe].method);
                      }
                      else {
                        (pSVar37->fields)._size = 1;
                        pSVar30->m_Items[0] = pSVar39;
                        Il2CppCodeGenWriteBarrier(pSVar30->m_Items);
                      }
                    }
                    pSVar22 = System_String__Substring_53042f0
                                        (pSVar22,0,(pSVar22->fields)._stringLength + -7,(MethodInfo *)0x0);
                    value = System_Collections_Generic_List_object___ToArray
                                      ((System_Collections_Generic_List_object__o *)pSVar37,
                                       (MethodInfo_395F5A0 *)
                                       MethodInfo_System_Collections_Generic_List_string_ToArray);
                    if (pSStack_58 == (System_Collections_Generic_Dictionary_string__string____o *)0x0) {
                      ThrowNullReferenceException();
                    }
                    System_Collections_Generic_Dictionary_object__object___set_Item
                              ((System_Collections_Generic_Dictionary_object__object__o *)pSStack_58,
                               (Il2CppObject *)pSVar22,&value->obj,
                               (MethodInfo_4AAD4C0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_string_string_array_set_Item);
                  }
                }
                goto label_05d88ed0;
              }
              System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                        ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                         auStack_78,
                         (MethodInfo_4CE7070 *)
                         MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_BaseSetting_Dispose
                        );
              pSVar35 = System_Collections_Generic_Dictionary_object__object___get_Keys
                                  (__this_00,
                                   (MethodInfo_4AAD0F0 *)
                                   MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_get_Keys
                                  );
              if (pSVar35 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0) {
                System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
                          ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                           auStack_90,pSVar35,
                           (MethodInfo_511A520 *)
                           MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_BaseSetting_GetEnumerator
                          );
                pSStack_68 = pSStack_80;
                auStack_78 = (undefined1  [8])auStack_90._0_8_;
                puStack_70 = (undefined1 *)auStack_90._8_8_;
                auStack_90._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
                auStack_90._8_8_ = auStack_78;
label_05d89290:
                do {
                  bVar17 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                                     ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o
                                       *)auStack_78,
                                      (MethodInfo_4CE7080 *)
                                      MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_BaseSetting_MoveNext
                                     );
                  pSVar22 = pSStack_68;
                  if (!bVar17) goto label_05d89d90;
                  __this_05 = il2cpp_codegen_object_new
                                        ((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel_c__DisplayClass82_1)
                  ;
                  UI_MapEditorInspectPanel___c__DisplayClass82_1___ctor(__this_05,(MethodInfo *)0x0);
                  if (__this_05 == (UI_MapEditorInspectPanel___c__DisplayClass82_1_o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  targetAddress_01 = &(__this_05->fields).CS___8__locals1;
                  (__this_05->fields).CS___8__locals1 = pUStack_98;
                  Il2CppCodeGenWriteBarrier(targetAddress_01);
                  pSVar40 = (Settings_IntSetting_o *)
                            System_Collections_Generic_Dictionary_object__object___get_Item
                                      (pSStack_a8,(Il2CppObject *)pSVar22,
                                       (MethodInfo_4AAD450 *)
                                       MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_get_Item
                                      );
                  bVar17 = System_String__op_Equality(pSVar22,"Description",(MethodInfo *)0x0);
                  if (!bVar17) {
                    if (pSVar22 == (System_String_o *)0x0) {
                      ThrowNullReferenceException();
                    }
                    bVar17 = System_String__EndsWith(pSVar22,"Tooltip",(MethodInfo *)0x0);
                    if ((bVar17) && (pSVar40 != (Settings_IntSetting_o *)0x0)) {
                      bVar43 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
                      if ((bVar43 <= (pSVar40->klass->_2).typeHierarchyDepth) &&
                         ((pSVar40->klass->_2).typeHierarchy[(ulong)bVar43 - 1] ==
                          (Il2CppClass *)TypeInfo_Settings_StringSetting)) goto label_05d89290;
                    }
                    bVar17 = System_String__EndsWith(pSVar22,"Dropbox",(MethodInfo *)0x0);
                    pSVar39 = "";
                    if ((bVar17) && (pSVar40 != (Settings_IntSetting_o *)0x0)) {
                      bVar43 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
                      if ((bVar43 <= (pSVar40->klass->_2).typeHierarchyDepth) &&
                         ((pSVar40->klass->_2).typeHierarchy[(ulong)bVar43 - 1] ==
                          (Il2CppClass *)TypeInfo_Settings_StringSetting)) goto label_05d89290;
                    }
                    if (pSStack_50 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) {
                      ThrowNullReferenceException();
                    }
                    bVar17 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                                       ((System_Collections_Generic_Dictionary_object__object__o *)pSStack_50,
                                        (Il2CppObject *)pSVar22,
                                        (MethodInfo_4AAD6F0 *)
                                        MethodInfo_System_Collections_Generic_Dictionary_string_string_ContainsKey
                                       );
                    if (bVar17) {
                      pSVar39 = System_Collections_Generic_Dictionary_object__object___get_Item
                                          ((System_Collections_Generic_Dictionary_object__object__o *)
                                           pSStack_50,(Il2CppObject *)pSVar22,
                                           (MethodInfo_4AAD450 *)
                                           MethodInfo_System_Collections_Generic_Dictionary_string_string_get_Item
                                          );
                    }
                    if (pSVar40 == (Settings_IntSetting_o *)0x0) {
                      ThrowNullReferenceException();
                    }
                    pSVar14 = (pSVar40->fields).InspectorMetadata;
                    if (pSVar14 == (Settings_InspectorSettingMetadata_o *)0x0) {
                      ThrowNullReferenceException();
                    }
                    bVar17 = System_String__IsNullOrEmpty((pSVar14->fields).Tooltip,(MethodInfo *)0x0);
                    if (!bVar17) {
                      pSVar39 = (pSVar14->fields).Tooltip;
                    }
                    pUStack_b0 = pUStack_60;
                    bVar17 = System_String__IsNullOrEmpty((pSVar14->fields).GroupId,(MethodInfo *)0x0);
                    pSStack_a0 = pSVar39;
                    if (!bVar17) {
                      if (pSStack_40 == (System_Collections_Generic_Dictionary_string__Transform__o *)0x0) {
                        ThrowNullReferenceException();
                      }
                      ppSVar47 = &(pSVar14->fields).GroupId;
                      bVar17 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                                         ((System_Collections_Generic_Dictionary_object__object__o *)
                                          pSStack_40,(Il2CppObject *)*ppSVar47,(Il2CppObject **)&pUStack_b0,
                                          (MethodInfo_4AAF440 *)
                                          MethodInfo_System_Collections_Generic_Dictionary_string_Transform_TryGetValue
                                         );
                      if (!bVar17) {
                        if (*targetAddress_01 == (UI_MapEditorInspectPanel___c__DisplayClass82_0_o *)0x0) {
                          ThrowNullReferenceException();
                        }
                        pSVar39 = System_String__Concat_5302810
                                            ("Component:",((*targetAddress_01)->fields).componentName
                                             ,":Group:",*ppSVar47,(MethodInfo *)0x0);
                        bVar17 = System_String__IsNullOrEmpty((pSVar14->fields).GroupHeader,(MethodInfo *)0x0)
                        ;
                        ppSVar44 = &(pSVar14->fields).GroupHeader;
                        if (bVar17) {
                          ppSVar44 = ppSVar47;
                        }
                        pUStack_b0 = UI_MapEditorInspectPanel__CreateSection
                                               (__this,pSVar39,*ppSVar44,(UI_ElementStyle_o *)method_00,false,
                                                pUStack_60,(MethodInfo *)pUVar26);
                        System_Collections_Generic_Dictionary_object__object___set_Item
                                  ((System_Collections_Generic_Dictionary_object__object__o *)pSStack_40,
                                   (Il2CppObject *)*ppSVar47,(Il2CppObject *)pUStack_b0,
                                   (MethodInfo_4AAD4C0 *)
                                   MethodInfo_System_Collections_Generic_Dictionary_string_Transform_set_Item)
                        ;
                      }
                    }
                    bVar17 = System_String__IsNullOrEmpty((pSVar14->fields).Header,(MethodInfo *)0x0);
                    if (!bVar17) {
                      UI_ElementFactory__CreateDefaultLabel
                                (pUStack_b0,(UI_ElementStyle_o *)method_00,(pSVar14->fields).Header,1,3,
                                 (MethodInfo *)0x0);
                    }
                    (__this_05->fields).fieldName = pSVar22;
                    Il2CppCodeGenWriteBarrier(&(__this_05->fields).fieldName);
                    if (*targetAddress_01 == (UI_MapEditorInspectPanel___c__DisplayClass82_0_o *)0x0) {
                      ThrowNullReferenceException();
                    }
                    pSVar39 = ((*targetAddress_01)->fields).componentName;
                    str3 = (__this_05->fields).fieldName;
                    if ((TypeInfo_UI_MapEditorInspectPanel->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel);
                    }
                    if (Il2CppMethodInitialized_07548009 == '\0') {
                      il2cpp_codegen_initialize_runtime_metadata(&":");
                      il2cpp_codegen_initialize_runtime_metadata(&"Component:");
                      Il2CppMethodInitialized_07548009 = '\x01';
                    }
                    pSVar39 = System_String__Concat_5302810
                                        ("Component:",pSVar39,":",str3,
                                         (MethodInfo *)0x0);
                    pSVar37 = (pSVar14->fields).Dropbox;
                    if (pSVar37 == (System_Collections_Generic_List_string__o *)0x0) {
                      ThrowNullReferenceException();
                    }
                    if (((pSVar37->fields)._size < 1) ||
                       (pSVar30 = (System_String_array *)
                                  System_Collections_Generic_List_object___ToArray
                                            ((System_Collections_Generic_List_object__o *)pSVar37,
                                             (MethodInfo_395F5A0 *)
                                             MethodInfo_System_Collections_Generic_List_string_ToArray),
                       pSVar30 == (System_String_array *)0x0)) {
                      if (pSStack_58 == (System_Collections_Generic_Dictionary_string__string____o *)0x0) {
                        ThrowNullReferenceException();
                      }
                      bVar17 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                                         ((System_Collections_Generic_Dictionary_object__object__o *)
                                          pSStack_58,(Il2CppObject *)pSVar22,
                                          (MethodInfo_4AAD6F0 *)
                                          MethodInfo_System_Collections_Generic_Dictionary_string_string_array_ContainsKey
                                         );
                      if (bVar17) {
                        bVar17 = true;
                        pSVar30 = (System_String_array *)0x0;
                        goto label_05d8966b;
                      }
                    }
                    else {
                      bVar17 = false;
label_05d8966b:
                      bVar43 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
                      if ((bVar43 <= (pSVar40->klass->_2).typeHierarchyDepth) &&
                         ((pSVar40->klass->_2).typeHierarchy[(ulong)bVar43 - 1] ==
                          (Il2CppClass *)TypeInfo_Settings_StringSetting)) {
                        if (bVar17) {
                          if (pSStack_58 == (System_Collections_Generic_Dictionary_string__string____o *)0x0)
                          {
                            ThrowNullReferenceException();
                          }
                          pSVar30 = (System_String_array *)
                                    System_Collections_Generic_Dictionary_object__object___get_Item
                                              ((System_Collections_Generic_Dictionary_object__object__o *)
                                               pSStack_58,(Il2CppObject *)pSVar22,
                                               (MethodInfo_4AAD450 *)
                                               MethodInfo_System_Collections_Generic_Dictionary_string_string_array_get_Item
                                              );
                        }
                        pSVar5 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._mixedFields
                        ;
                        if (pSVar5 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                          ThrowNullReferenceException();
                        }
                        bVar17 = System_Collections_Generic_HashSet_object___Contains
                                           (pSVar5,(Il2CppObject *)pSVar39,
                                            (MethodInfo_4FB3720 *)
                                            MethodInfo_System_Collections_Generic_HashSet_string_Contains);
                        if (bVar17) {
                          bVar43 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
                          if (((pSVar40->klass->_2).typeHierarchyDepth < bVar43) ||
                             ((pSVar40->klass->_2).typeHierarchy[(ulong)bVar43 - 1] !=
                              (Il2CppClass *)TypeInfo_Settings_StringSetting)) {
                            il2cpp_codegen_raise_invalid_cast_exception(pSVar40);
                          }
                          Settings_TypedSetting_object___set_Value
                                    ((Settings_TypedSetting_T__o *)pSVar40,
                                     (Il2CppObject *)"--",
                                     (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
                          pIVar27 = SZArrayNew(TypeInfo_string_array,1);
                          if (pIVar27 == (Il2CppObject *)0x0) {
                            ThrowNullReferenceException();
                          }
                          if (*(int *)&pIVar27[1].monitor == 0) {
                            ThrowIndexOutOfRangeException();
                          }
                          pIVar27[2].klass = (Il2CppClass *)"--";
                          Il2CppCodeGenWriteBarrier(&pIVar27[2].klass);
                          source = System_Linq_Enumerable__Concat_object_
                                             ((System_Collections_Generic_IEnumerable_TSource__o *)pIVar27,
                                              (System_Collections_Generic_IEnumerable_TSource__o *)pSVar30,
                                              (MethodInfo_34E5C10 *)
                                              MethodInfo_System_Linq_Enumerable_Concat_string);
                          pSVar30 = (System_String_array *)
                                    System_Linq_Enumerable__ToArray_object_
                                              (source,(MethodInfo_34FEA80 *)
                                                      MethodInfo_System_Linq_Enumerable_ToArray_string);
                        }
                        pUVar25 = pUStack_b0;
                        __this_02 = il2cpp_codegen_object_new
                                              ((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
                        UnityEngine_Events_UnityAction___ctor
                                  (__this_02,(Il2CppObject *)__this_05,
                                   (intptr_t)
                                   MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass82_1_Show_b__41,
                                   (MethodInfo *)0x0);
                        pUVar26 = (UnityEngine_Events_UnityAction_o *)0x0;
                        UI_ElementFactory__CreateDropdownSetting
                                  (pUVar25,(UI_ElementStyle_o *)method_00,(Settings_BaseSetting_o *)pSVar40,
                                   pSVar22,pSVar30,pSStack_a0,140.0,35.0,300.0,(System_Nullable_float__o)0x0,
                                   __this_02,(System_Int32_array *)0x0,(System_Func_string__string__o *)0x0,
                                   (MethodInfo *)0x0);
                        goto label_05d89290;
                      }
                    }
                    pUVar25 = pUStack_b0;
                    if ((pSVar14->fields).MapObject != false) {
                      bVar43 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
                      if ((bVar43 <= (pSVar40->klass->_2).typeHierarchyDepth) &&
                         ((pSVar40->klass->_2).typeHierarchy[(ulong)bVar43 - 1] ==
                          (Il2CppClass *)TypeInfo_Settings_IntSetting)) {
                        pUVar26 = (UnityEngine_Events_UnityAction_o *)
                                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
                        System_Action___ctor
                                  ((System_Action_o *)pUVar26,(Il2CppObject *)__this_05,
                                   (intptr_t)
                                   MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass82_1_Show_b__40,
                                   (MethodInfo *)0x0);
                        bVar43 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
                        if (((pSVar40->klass->_2).typeHierarchyDepth < bVar43) ||
                           ((pSVar40->klass->_2).typeHierarchy[(ulong)bVar43 - 1] !=
                            (Il2CppClass *)TypeInfo_Settings_IntSetting)) {
                          il2cpp_codegen_raise_invalid_cast_exception(pSVar40);
                        }
                        UI_MapEditorInspectPanel__CreateMapObjectSetting
                                  (__this,pUVar25,(UI_ElementStyle_o *)method_00,pSVar40,pSVar22,pSStack_a0,
                                   (System_Action_o *)pUVar26,(MethodInfo *)__this_02);
                        goto label_05d89290;
                      }
                    }
                    if ((pSVar14->fields).MapObjectList != false) {
                      bVar43 = (TypeInfo_Settings_HashSetSetting_int->_2).typeHierarchyDepth;
                      if ((bVar43 <= (pSVar40->klass->_2).typeHierarchyDepth) &&
                         ((pSVar40->klass->_2).typeHierarchy[(ulong)bVar43 - 1] ==
                          (Il2CppClass *)TypeInfo_Settings_HashSetSetting_int)) {
                        pUVar26 = (UnityEngine_Events_UnityAction_o *)
                                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
                        System_Action___ctor
                                  ((System_Action_o *)pUVar26,(Il2CppObject *)__this_05,
                                   (intptr_t)
                                   MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass82_1_Show_b__42,
                                   (MethodInfo *)0x0);
                        UI_MapEditorInspectPanel__CreateMapObjectListSetting
                                  (__this,pUVar25,(UI_ElementStyle_o *)method_00,
                                   (Settings_HashSetSetting_int__o *)pSVar40,pSVar22,pSStack_a0,
                                   (System_Action_o *)pUVar26,(MethodInfo *)__this_02);
                        goto label_05d89290;
                      }
                    }
                    if ((pSVar14->fields).HasSlider == false) {
                      pSVar41 = pSVar40->klass;
                      bVar43 = (pSVar41->_2).typeHierarchyDepth;
                    }
                    else {
                      pSVar41 = pSVar40->klass;
                      bVar43 = (pSVar41->_2).typeHierarchyDepth;
                      bVar2 = (TypeInfo_Settings_FloatSetting->_2).typeHierarchyDepth;
                      if (((bVar2 <= bVar43) &&
                          ((pSVar41->_2).typeHierarchy[(ulong)bVar2 - 1] ==
                           (Il2CppClass *)TypeInfo_Settings_FloatSetting)) ||
                         ((bVar2 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth, bVar2 <= bVar43 &&
                          ((pSVar41->_2).typeHierarchy[(ulong)bVar2 - 1] ==
                           (Il2CppClass *)TypeInfo_Settings_IntSetting)))) {
                        fStack_44 = (pSVar14->fields).SliderInterval;
                        pUVar26 = il2cpp_codegen_object_new
                                            ((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
                        UnityEngine_Events_UnityAction___ctor
                                  (pUVar26,(Il2CppObject *)__this_05,
                                   (intptr_t)
                                   MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass82_1_Show_b__43,
                                   (MethodInfo *)0x0);
                        __this_02 = (UnityEngine_Events_UnityAction_o *)0x0;
                        UI_ElementFactory__CreateSliderSetting
                                  (pUVar25,(UI_ElementStyle_o *)method_00,(Settings_BaseSetting_o *)pSVar40,
                                   pSVar22,pSStack_a0,140.0,16.0,2,fStack_44,pUVar26,(MethodInfo *)0x0);
                        goto label_05d89290;
                      }
                    }
                    bVar2 = (TypeInfo_Settings_BoolSetting->_2).typeHierarchyDepth;
                    if ((bVar43 < bVar2) ||
                       ((pSVar41->_2).typeHierarchy[(ulong)bVar2 - 1] !=
                        (Il2CppClass *)TypeInfo_Settings_BoolSetting)) {
                      bVar2 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
                      if ((((bVar43 < bVar2) ||
                           ((pSVar41->_2).typeHierarchy[(ulong)bVar2 - 1] !=
                            (Il2CppClass *)TypeInfo_Settings_StringSetting)) &&
                          ((bVar2 = (TypeInfo_Settings_FloatSetting->_2).typeHierarchyDepth, bVar43 < bVar2 ||
                           ((pSVar41->_2).typeHierarchy[(ulong)bVar2 - 1] !=
                            (Il2CppClass *)TypeInfo_Settings_FloatSetting)))) &&
                         ((bVar2 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth, bVar43 < bVar2 ||
                          ((pSVar41->_2).typeHierarchy[(ulong)bVar2 - 1] !=
                           (Il2CppClass *)TypeInfo_Settings_IntSetting)))) {
                        bVar2 = (TypeInfo_Settings_ColorSetting->_2).typeHierarchyDepth;
                        if ((bVar43 < bVar2) ||
                           ((pSVar41->_2).typeHierarchy[(ulong)bVar2 - 1] !=
                            (Il2CppClass *)TypeInfo_Settings_ColorSetting)) {
                          bVar2 = (TypeInfo_Settings_Vector3Setting->_2).typeHierarchyDepth;
                          if ((bVar2 <= bVar43) &&
                             ((pSVar41->_2).typeHierarchy[(ulong)bVar2 - 1] ==
                              (Il2CppClass *)TypeInfo_Settings_Vector3Setting)) {
                            pUVar15 = (__this->fields)._menu;
                            if (pUVar15 == (UI_MapEditorMenu_o *)0x0) {
                              ThrowNullReferenceException();
                            }
                            vector3Popup = (pUVar15->fields).Vector3Popup;
                            pUVar26 = il2cpp_codegen_object_new
                                                ((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
                            UnityEngine_Events_UnityAction___ctor
                                      (pUVar26,(Il2CppObject *)__this_05,
                                       (intptr_t)
                                       MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass82_1_Show_b__47,
                                       (MethodInfo *)0x0);
                            __this_02 = (UnityEngine_Events_UnityAction_o *)0x0;
                            UI_ElementFactory__CreateVector3Setting
                                      (pUVar25,(UI_ElementStyle_o *)method_00,
                                       (Settings_BaseSetting_o *)pSVar40,pSVar22,vector3Popup,pSStack_a0,90.0,
                                       30.0,pUVar26,(MethodInfo *)0x0);
                          }
                        }
                        else {
                          pUVar15 = (__this->fields)._menu;
                          if (pUVar15 == (UI_MapEditorMenu_o *)0x0) {
                            ThrowNullReferenceException();
                          }
                          pUVar16 = (pUVar15->fields).ColorPickPopup;
                          pUVar26 = il2cpp_codegen_object_new
                                              ((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
                          UnityEngine_Events_UnityAction___ctor
                                    (pUVar26,(Il2CppObject *)__this_05,
                                     (intptr_t)
                                     MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass82_1_Show_b__46,
                                     (MethodInfo *)0x0);
                          __this_02 = (UnityEngine_Events_UnityAction_o *)0x0;
                          UI_ElementFactory__CreateColorSetting
                                    (pUVar25,(UI_ElementStyle_o *)method_00,(Settings_BaseSetting_o *)pSVar40,
                                     pSVar22,pUVar16,pSStack_a0,90.0,30.0,pUVar26,(MethodInfo *)0x0);
                        }
                      }
                      else {
                        __this_02 = il2cpp_codegen_object_new
                                              ((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
                        UnityEngine_Events_UnityAction___ctor
                                  (__this_02,(Il2CppObject *)__this,
                                   (intptr_t)MethodInfo_UI_MapEditorInspectPanel_Show_b__82_45,
                                   (MethodInfo *)0x0);
                        pUVar26 = (UnityEngine_Events_UnityAction_o *)0x0;
                        UI_ElementFactory__CreateInputSetting
                                  (pUVar25,(UI_ElementStyle_o *)method_00,(Settings_BaseSetting_o *)pSVar40,
                                   pSVar22,pSStack_a0,140.0,35.0,false,(UnityEngine_Events_UnityAction_o *)0x0
                                   ,__this_02,(System_Func_string__bool__o *)0x0,
                                   (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
                      }
                    }
                    else {
                      pUVar42 = il2cpp_codegen_object_new
                                          ((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
                      UnityEngine_Events_UnityAction___ctor
                                (pUVar42,(Il2CppObject *)__this,
                                 (intptr_t)MethodInfo_UI_MapEditorInspectPanel_Show_b__82_44,(MethodInfo *)0x0
                                );
                      pUVar26 = (UnityEngine_Events_UnityAction_o *)0x0;
                      UI_ElementFactory__CreateToggleSetting
                                (pUVar25,(UI_ElementStyle_o *)method_00,(Settings_BaseSetting_o *)pSVar40,
                                 pSVar22,pSStack_a0,30.0,30.0,pUVar42,(MethodInfo *)0x0);
                    }
                  }
                } while( true );
              }
            }
          }
        }
      }
    }
    else {
      pUVar25 = (__this->fields).SinglePanel;
      if ((TypeInfo_UI_MapEditorInspectPanel->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel);
        if (Il2CppMethodInitialized_07548008 != '\0') goto label_05d8a1c1;
label_05d8a315:
        pSVar22 = "AddComponent";
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
        il2cpp_codegen_initialize_runtime_metadata(&"MapEditor");
        il2cpp_codegen_initialize_runtime_metadata(&"Inspect");
        il2cpp_codegen_initialize_runtime_metadata(&"");
        Il2CppMethodInitialized_07548008 = '\x01';
        uVar3 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
      }
      else {
        if (Il2CppMethodInitialized_07548008 == '\0') goto label_05d8a315;
label_05d8a1c1:
        uVar3 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
        pSVar22 = "AddComponent";
      }
      if (uVar3 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pSVar22 = UI_UIManager__GetLocale
                          ("MapEditor","Inspect",pSVar22,"",
                           "",(MethodInfo *)0x0);
      pUVar26 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
      UnityEngine_Events_UnityAction___ctor
                (pUVar26,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_MapEditorInspectPanel_Show_b__82_29,
                 (MethodInfo *)0x0);
      UI_ElementFactory__CreateDefaultButton
                (pUVar25,(UI_ElementStyle_o *)method_00,pSVar22,0.0,0.0,pUVar26,(MethodInfo *)0x0);
      UI_MapEditorInspectPanel__ApplyMixedIndicators(__this,(MethodInfo *)method_00);
      UI_MapEditorInspectPanel__CaptureSyncedValues(__this,(MethodInfo *)method_00);
      pUVar25 = (__this->fields).SinglePanel;
      if ((pUVar25 != (UnityEngine_Transform_o *)0x0) &&
         (pUVar24 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pUVar25,(MethodInfo *)0x0),
         pUVar24 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar24,false,(MethodInfo *)0x0);
        if (Il2CppMethodInitialized_07548024 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_UI_MapEditorInspectPanel_WaitAndEnablePanel_d__90);
          Il2CppMethodInitialized_07548024 = '\x01';
        }
        __this_06 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel_WaitAndEnablePanel_d__90);
        UI_MapEditorInspectPanel__WaitAndEnablePanel_d__90___ctor(__this_06,0,(MethodInfo *)0x0);
        if (__this_06 != (UI_MapEditorInspectPanel__WaitAndEnablePanel_d__90_o *)0x0) {
          (__this_06->fields).__4__this = __this;
          Il2CppCodeGenWriteBarrier(&(__this_06->fields).__4__this);
          UnityEngine_MonoBehaviour__StartCoroutine_691c390
                    ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_06,
                     (MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  goto label_05d8a5b8;
label_05d89d90:
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
            ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)auStack_78,
             (MethodInfo_4CE7070 *)
             MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_BaseSetting_Dispose
            );
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar22 = UI_UIManager__GetLocaleCommon("Delete",(MethodInfo *)0x0);
  pUVar42 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            (pUVar42,(Il2CppObject *)pUStack_98,
             (intptr_t)MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass82_0_Show_b__39,(MethodInfo *)0x0);
  UI_ElementFactory__CreateDefaultButton
            (pUStack_60,(UI_ElementStyle_o *)method_00,pSVar22,0.0,0.0,pUVar42,(MethodInfo *)0x0);
  UI_BasePanel__CreateHorizontalDivider
            ((UI_BasePanel_o *)__this,(__this->fields).SinglePanel,1.0,(MethodInfo *)0x0);
  uVar38 = (ulong)((int)uStack_38 + 1);
  goto label_05d88c86;
}


// UI.MapEditorInspectPanel$$CreateMapObjectSetting
// il2cpp: void UI_MapEditorInspectPanel__CreateMapObjectSetting (UI_MapEditorInspectPanel_o* __this, UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, Settings_IntSetting_o* setting, System_String_o* title, System_String_o* tooltip, System_Action_o* onChanged, const MethodInfo* method);
// 0x5d8c490

void UI_MapEditorInspectPanel__CreateMapObjectSetting
               (UI_MapEditorInspectPanel_o *__this,UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,
               Settings_IntSetting_o *setting,System_String_o *title,System_String_o *tooltip,
               System_Action_o *onChanged,MethodInfo *method)

{
  int32_t fontSize;
  Settings_IntSetting_o *setting_00;
  UI_MapEditorInspectPanel___c__DisplayClass83_0_o *__this_00;
  UI_ElementStyle_o *__this_01;
  UnityEngine_GameObject_o *pUVar1;
  UnityEngine_Transform_o *parent_00;
  UnityEngine_Events_UnityAction_o *pUVar2;
  UI_InputSettingElement_o *pUVar3;
  System_String_o *pSVar4;
  
  if (Il2CppMethodInitialized_0754801e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_InputSettingElement);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass83_0_CreateMapObjectSetting_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass83_0_CreateMapObjectSetting_b__1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorInspectPanel_c__DisplayClass83_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"Search");
    Il2CppMethodInitialized_0754801e = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel_c__DisplayClass83_0);
  UI_MapEditorInspectPanel___c__DisplayClass83_0___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (UI_MapEditorInspectPanel___c__DisplayClass83_0_o *)0x0) {
    (__this_00->fields).onChanged = onChanged;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).onChanged);
    (__this_00->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
    (__this_00->fields).setting = setting;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).setting);
    if (style != (UI_ElementStyle_o *)0x0) {
      fontSize = (style->fields).FontSize;
      pSVar4 = (style->fields).ThemePanel;
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
      UI_ElementStyle___ctor(__this_01,fontSize,90.0,5.0,pSVar4,(MethodInfo *)0x0);
      pUVar1 = UI_ElementFactory__CreateHorizontalGroup(parent,8.0,3,(MethodInfo *)0x0);
      if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
        parent_00 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0);
        setting_00 = (__this_00->fields).setting;
        pUVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
        UnityEngine_Events_UnityAction___ctor
                  (pUVar2,(Il2CppObject *)__this_00,
                   (intptr_t)
                   MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass83_0_CreateMapObjectSetting_b__0,
                   (MethodInfo *)0x0);
        pUVar1 = UI_ElementFactory__CreateInputSetting
                           (parent_00,__this_01,(Settings_BaseSetting_o *)setting_00,title,tooltip,100.0,35.0,
                            false,(UnityEngine_Events_UnityAction_o *)0x0,pUVar2,
                            (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                            (MethodInfo *)0x0);
        if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
          pUVar3 = UnityEngine_GameObject__GetComponent_object_
                             (pUVar1,(MethodInfo_353B730 *)
                                     MethodInfo_UnityEngine_GameObject_GetComponent_InputSettingElement);
          (__this_00->fields).input = pUVar3;
          Il2CppCodeGenWriteBarrier(&(__this_00->fields).input);
          if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
          }
          pSVar4 = UI_UIManager__GetLocaleCommon("Search",(MethodInfo *)0x0);
          pUVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
          UnityEngine_Events_UnityAction___ctor
                    (pUVar2,(Il2CppObject *)__this_00,
                     (intptr_t)
                     MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass83_0_CreateMapObjectSetting_b__1,
                     (MethodInfo *)0x0);
          UI_ElementFactory__CreateDefaultButton
                    (parent_00,__this_01,pSVar4,80.0,35.0,pUVar2,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel$$CreateMapObjectListSetting
// il2cpp: void UI_MapEditorInspectPanel__CreateMapObjectListSetting (UI_MapEditorInspectPanel_o* __this, UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, Settings_HashSetSetting_int__o* setting, System_String_o* title, System_String_o* tooltip, System_Action_o* onChanged, const MethodInfo* method);
// 0x5d8c720

void UI_MapEditorInspectPanel__CreateMapObjectListSetting
               (UI_MapEditorInspectPanel_o *__this,UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,
               Settings_HashSetSetting_int__o *setting,System_String_o *title,System_String_o *tooltip,
               System_Action_o *onChanged,MethodInfo *method)

{
  uint fontSize;
  Settings_HashSetSetting_int__o *pSVar1;
  System_Collections_Generic_HashSet_T__o *ids;
  UI_MapEditorInspectPanel___c__DisplayClass84_0_o *__this_00;
  UI_ElementStyle_o *__this_01;
  System_String_o *pSVar2;
  Settings_StringSetting_o *pSVar3;
  UnityEngine_GameObject_o *pUVar4;
  UnityEngine_Transform_o *parent_00;
  UnityEngine_Events_UnityAction_o *pUVar5;
  UI_InputSettingElement_o *pUVar6;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0754801f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_InputSettingElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorInspectPanel);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_HashSet_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass84_0_CreateMapObjectListSetting_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass84_0_CreateMapObjectListSetting_b__1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorInspectPanel_c__DisplayClass84_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"Search");
    Il2CppMethodInitialized_0754801f = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel_c__DisplayClass84_0);
  UI_MapEditorInspectPanel___c__DisplayClass84_0___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (UI_MapEditorInspectPanel___c__DisplayClass84_0_o *)0x0) {
    (__this_00->fields).setting = setting;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).setting);
    (__this_00->fields).onChanged = onChanged;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).onChanged);
    (__this_00->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
    if (style != (UI_ElementStyle_o *)0x0) {
      fontSize = (style->fields).FontSize;
      pSVar2 = (style->fields).ThemePanel;
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
      method_00 = (MethodInfo *)(ulong)fontSize;
      UI_ElementStyle___ctor(__this_01,fontSize,90.0,5.0,pSVar2,(MethodInfo *)0x0);
      pSVar1 = (__this_00->fields).setting;
      if (pSVar1 != (Settings_HashSetSetting_int__o *)0x0) {
        ids = (pSVar1->fields)._value;
        if ((TypeInfo_UI_MapEditorInspectPanel->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel);
        }
        pSVar2 = UI_MapEditorInspectPanel__SerializeMapObjectIds
                           ((System_Collections_Generic_IEnumerable_int__o *)ids,method_00);
        pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
        Settings_StringSetting___ctor_5b7b730(pSVar3,pSVar2,0x7fffffff,(MethodInfo *)0x0);
        (__this_00->fields).serialized = pSVar3;
        Il2CppCodeGenWriteBarrier(&(__this_00->fields).serialized);
        pUVar4 = UI_ElementFactory__CreateHorizontalGroup(parent,8.0,3,(MethodInfo *)0x0);
        if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
          parent_00 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
          pSVar3 = (__this_00->fields).serialized;
          pUVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
          UnityEngine_Events_UnityAction___ctor
                    (pUVar5,(Il2CppObject *)__this_00,
                     (intptr_t)
                     MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass84_0_CreateMapObjectListSetting_b__0,
                     (MethodInfo *)0x0);
          pUVar4 = UI_ElementFactory__CreateInputSetting
                             (parent_00,__this_01,(Settings_BaseSetting_o *)pSVar3,title,tooltip,140.0,35.0,
                              false,(UnityEngine_Events_UnityAction_o *)0x0,pUVar5,
                              (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                              (MethodInfo *)0x0);
          if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
            pUVar6 = UnityEngine_GameObject__GetComponent_object_
                               (pUVar4,(MethodInfo_353B730 *)
                                       MethodInfo_UnityEngine_GameObject_GetComponent_InputSettingElement);
            (__this_00->fields).input = pUVar6;
            Il2CppCodeGenWriteBarrier(&(__this_00->fields).input);
            if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
            }
            pSVar2 = UI_UIManager__GetLocaleCommon("Search",(MethodInfo *)0x0);
            pUVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
            UnityEngine_Events_UnityAction___ctor
                      (pUVar5,(Il2CppObject *)__this_00,
                       (intptr_t)
                       MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass84_0_CreateMapObjectListSetting_b__1
                       ,(MethodInfo *)0x0);
            UI_ElementFactory__CreateDefaultButton
                      (parent_00,__this_01,pSVar2,80.0,35.0,pUVar5,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel$$ParseMapObjectIds
// il2cpp: System_Collections_Generic_HashSet_int__o* UI_MapEditorInspectPanel__ParseMapObjectIds (System_String_o* value, const MethodInfo* method);
// 0x5d8ee40

System_Collections_Generic_HashSet_int__o *
UI_MapEditorInspectPanel__ParseMapObjectIds(System_String_o *value,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  System_Collections_Generic_HashSet_int__o *__this;
  System_Char_array *separator;
  System_String_array *pSVar4;
  System_String_o *pSVar5;
  uint uVar6;
  long lVar7;
  int32_t local_2c;
  
  if (Il2CppMethodInitialized_07548020 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_char_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_int);
    Il2CppMethodInitialized_07548020 = '\x01';
  }
  local_2c = 0;
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
  System_Collections_Generic_HashSet_int____ctor
            (__this,(MethodInfo_4FA7520 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor);
  separator = (System_Char_array *)SZArrayNew(TypeInfo_char_array,2);
  if (separator != (System_Char_array *)0x0) {
    iVar1 = (int)separator->max_length;
    if ((iVar1 == 0) || (separator->m_Items[0] = 0x2c, iVar1 == 1)) {
label_05d8efef:
      ThrowIndexOutOfRangeException();
    }
    separator->m_Items[1] = 0x2f;
    if (value != (System_String_o *)0x0) {
      pSVar4 = System_String__Split_5305000(value,separator,1,(MethodInfo *)0x0);
      if (pSVar4 != (System_String_array *)0x0) {
        uVar3 = (uint)pSVar4->max_length;
        if (__this == (System_Collections_Generic_HashSet_int__o *)0x0) {
          if (0 < (int)uVar3) {
            lVar7 = 0;
            do {
              if (uVar3 <= (uint)lVar7) goto label_05d8efef;
              if (pSVar4->m_Items[lVar7] == (System_String_o *)0x0) goto label_05d8efd9;
              pSVar5 = System_String__Trim(pSVar4->m_Items[lVar7],(MethodInfo *)0x0);
              bVar2 = System_Int32__TryParse(pSVar5,&local_2c,(MethodInfo *)0x0);
              if ((bVar2) && (-1 < local_2c)) goto label_05d8efd9;
              uVar3 = (uint)pSVar4->max_length;
              lVar7 = lVar7 + 1;
            } while ((int)lVar7 < (int)uVar3);
          }
        }
        else if (0 < (int)uVar3) {
          uVar6 = 0;
          do {
            if (uVar3 <= uVar6) goto label_05d8efef;
            if (pSVar4->m_Items[(int)uVar6] == (System_String_o *)0x0) goto label_05d8efd9;
            pSVar5 = System_String__Trim(pSVar4->m_Items[(int)uVar6],(MethodInfo *)0x0);
            bVar2 = System_Int32__TryParse(pSVar5,&local_2c,(MethodInfo *)0x0);
            if ((bVar2) && (-1 < local_2c)) {
              System_Collections_Generic_HashSet_int___Add
                        (__this,local_2c,
                         (MethodInfo_4FA8AF0 *)MethodInfo_System_Collections_Generic_HashSet_int_Add);
            }
            uVar6 = uVar6 + 1;
            uVar3 = (uint)pSVar4->max_length;
          } while ((int)uVar6 < (int)uVar3);
        }
        return __this;
      }
    }
  }
label_05d8efd9:
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel$$SerializeMapObjectIds
// il2cpp: System_String_o* UI_MapEditorInspectPanel__SerializeMapObjectIds (System_Collections_Generic_IEnumerable_int__o* ids, const MethodInfo* method);
// 0x5d8ec30
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d8ed84: jmp 0x5d8ed9f

System_String_o *
UI_MapEditorInspectPanel__SerializeMapObjectIds
          (System_Collections_Generic_IEnumerable_int__o *ids,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  System_Func_int__int__o *__this;
  System_Linq_IOrderedEnumerable_TSource__o *source;
  UI_MapEditorInspectPanel___c_StaticFields *pUVar2;
  System_Func_int__string__o *__this_00;
  System_Collections_Generic_IEnumerable_TResult__o *source_00;
  System_String_array *value;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_07548021 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_OrderBy_int_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Select_int_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToArray_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_int_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_int_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorInspectPanel_c_SerializeMapObjectIds_b__86_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorInspectPanel_c_SerializeMapObjectIds_b__86_1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorInspectPanel_c);
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    Il2CppMethodInitialized_07548021 = '\x01';
  }
  if ((TypeInfo_UI_MapEditorInspectPanel_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel_c);
  }
  pSVar3 = "/";
  pUVar2 = TypeInfo_UI_MapEditorInspectPanel_c->static_fields;
  __this = pUVar2->__9__86_0;
  if (__this == (System_Func_int__int__o *)0x0) {
    if ((TypeInfo_UI_MapEditorInspectPanel_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel_c);
      pUVar2 = TypeInfo_UI_MapEditorInspectPanel_c->static_fields;
    }
    pIVar1 = (Il2CppObject *)pUVar2->__9;
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_int_int);
    System_Func_int__int____ctor
              (__this,pIVar1,(intptr_t)MethodInfo_UI_MapEditorInspectPanel_c_SerializeMapObjectIds_b__86_0,
               (MethodInfo_4F12F40 *)0x0);
    pUVar2 = TypeInfo_UI_MapEditorInspectPanel_c->static_fields;
    pUVar2->__9__86_0 = __this;
    Il2CppCodeGenWriteBarrier(&pUVar2->__9__86_0);
  }
  source = System_Linq_Enumerable__OrderBy_int__int_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)ids,
                      (System_Func_TSource__TKey__o *)__this,
                      (MethodInfo_34F1B50 *)MethodInfo_System_Linq_Enumerable_OrderBy_int_int);
  if ((TypeInfo_UI_MapEditorInspectPanel_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel_c);
    pUVar2 = TypeInfo_UI_MapEditorInspectPanel_c->static_fields;
    __this_00 = pUVar2->__9__86_1;
  }
  else {
    pUVar2 = TypeInfo_UI_MapEditorInspectPanel_c->static_fields;
    __this_00 = pUVar2->__9__86_1;
  }
  if (__this_00 == (System_Func_int__string__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel_c)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel_c);
      pUVar2 = TypeInfo_UI_MapEditorInspectPanel_c->static_fields;
    }
    pIVar1 = (Il2CppObject *)pUVar2->__9;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_int_string);
    System_Func_int__object____ctor
              ((System_Func_int__object__o *)__this_00,pIVar1,
               (intptr_t)MethodInfo_UI_MapEditorInspectPanel_c_SerializeMapObjectIds_b__86_1,
               (MethodInfo_4F13000 *)0x0);
    pUVar2 = TypeInfo_UI_MapEditorInspectPanel_c->static_fields;
    pUVar2->__9__86_1 = __this_00;
    Il2CppCodeGenWriteBarrier(&pUVar2->__9__86_1);
  }
  source_00 = System_Linq_Enumerable__Select_int__object_
                        ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                         (System_Func_TSource__TResult__o *)__this_00,
                         (MethodInfo_34F48F0 *)MethodInfo_System_Linq_Enumerable_Select_int_string);
  value = (System_String_array *)
          System_Linq_Enumerable__ToArray_object_
                    ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,
                     (MethodInfo_34FEA80 *)MethodInfo_System_Linq_Enumerable_ToArray_string);
  pSVar3 = System_String__Join(pSVar3,value,(MethodInfo *)0x0);
  return pSVar3;
}


// UI.MapEditorInspectPanel$$GetScrollPosition
// il2cpp: float UI_MapEditorInspectPanel__GetScrollPosition (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x5d8f000

float UI_MapEditorInspectPanel__GetScrollPosition(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_UI_ScrollRect_o *__this_00;
  float fVar3;
  
  if (Il2CppMethodInitialized_07548022 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_ScrollRect);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07548022 = '\x01';
  }
  pUVar2 = (__this->fields).SinglePanel;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  __this_00 = (UnityEngine_UI_ScrollRect_o *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar2 = (__this->fields).SinglePanel;
    if (pUVar2 == (UnityEngine_Transform_o *)0x0) goto label_05d8f0f0;
    pUVar2 = UnityEngine_Transform__get_parent(pUVar2,(MethodInfo *)0x0);
    if (pUVar2 == (UnityEngine_Transform_o *)0x0) goto label_05d8f0f0;
    pUVar2 = UnityEngine_Transform__get_parent(pUVar2,(MethodInfo *)0x0);
    if (pUVar2 == (UnityEngine_Transform_o *)0x0) goto label_05d8f0f0;
    __this_00 = UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)pUVar2,
                           (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_ScrollRect);
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return 1.0;
  }
  if (__this_00 != (UnityEngine_UI_ScrollRect_o *)0x0) {
    fVar3 = UnityEngine_UI_ScrollRect__get_verticalNormalizedPosition(__this_00,(MethodInfo *)0x0);
    return fVar3;
  }
label_05d8f0f0:
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel$$RestoreScrollPosition
// il2cpp: void UI_MapEditorInspectPanel__RestoreScrollPosition (UI_MapEditorInspectPanel_o* __this, float position, const MethodInfo* method);
// 0x5d8f100

void UI_MapEditorInspectPanel__RestoreScrollPosition
               (UI_MapEditorInspectPanel_o *__this,float position,MethodInfo *method)

{
  UI_MapEditorInspectPanel__RestoreScrollPositionAfterLayout_d__89_o *__this_00;
  
  if (Il2CppMethodInitialized_07548023 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_UI_MapEditorInspectPanel_RestoreScrollPositionAfterLayout_d__89);
    Il2CppMethodInitialized_07548023 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_UI_MapEditorInspectPanel_RestoreScrollPositionAfterLayout_d__89);
  UI_MapEditorInspectPanel__RestoreScrollPositionAfterLayout_d__89___ctor(__this_00,0,(MethodInfo *)0x0);
  if (__this_00 == (UI_MapEditorInspectPanel__RestoreScrollPositionAfterLayout_d__89_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  (__this_00->fields).position = position;
  UnityEngine_MonoBehaviour__StartCoroutine_691c390
            ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
             (MethodInfo *)0x0);
  return;
}


// UI.MapEditorInspectPanel$$RestoreScrollPositionAfterLayout
// il2cpp: System_Collections_IEnumerator_o* UI_MapEditorInspectPanel__RestoreScrollPositionAfterLayout (UI_MapEditorInspectPanel_o* __this, float position, const MethodInfo* method);
// 0x5d8f190

System_Collections_IEnumerator_o *
UI_MapEditorInspectPanel__RestoreScrollPositionAfterLayout
          (UI_MapEditorInspectPanel_o *__this,float position,MethodInfo *method)

{
  UI_MapEditorInspectPanel__RestoreScrollPositionAfterLayout_d__89_o *__this_00;
  
  if (Il2CppMethodInitialized_07548023 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_UI_MapEditorInspectPanel_RestoreScrollPositionAfterLayout_d__89);
    Il2CppMethodInitialized_07548023 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_UI_MapEditorInspectPanel_RestoreScrollPositionAfterLayout_d__89);
  UI_MapEditorInspectPanel__RestoreScrollPositionAfterLayout_d__89___ctor(__this_00,0,(MethodInfo *)0x0);
  if (__this_00 == (UI_MapEditorInspectPanel__RestoreScrollPositionAfterLayout_d__89_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  (__this_00->fields).position = position;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// UI.MapEditorInspectPanel$$WaitAndEnablePanel
// il2cpp: System_Collections_IEnumerator_o* UI_MapEditorInspectPanel__WaitAndEnablePanel (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x5d8ebc0

System_Collections_IEnumerator_o *
UI_MapEditorInspectPanel__WaitAndEnablePanel(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorInspectPanel__WaitAndEnablePanel_d__90_o *__this_00;
  
  if (Il2CppMethodInitialized_07548024 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorInspectPanel_WaitAndEnablePanel_d__90);
    Il2CppMethodInitialized_07548024 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel_WaitAndEnablePanel_d__90);
  UI_MapEditorInspectPanel__WaitAndEnablePanel_d__90___ctor(__this_00,0,(MethodInfo *)0x0);
  if (__this_00 == (UI_MapEditorInspectPanel__WaitAndEnablePanel_d__90_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// UI.MapEditorInspectPanel$$OnButtonClick
// il2cpp: void UI_MapEditorInspectPanel__OnButtonClick (UI_MapEditorInspectPanel_o* __this, System_String_o* name, const MethodInfo* method);
// 0x5d8f210

void UI_MapEditorInspectPanel__OnButtonClick
               (UI_MapEditorInspectPanel_o *__this,System_String_o *name,MethodInfo *method)

{
  UI_MapEditorMenu_o *pUVar1;
  UI_MapEditorTexturePopup_o *pUVar2;
  UI_MapEditorAddComponentPopup_o *__this_00;
  UI_ConfirmPopup_o *__this_01;
  bool bVar3;
  int32_t iVar4;
  UnityEngine_Events_UnityAction_o *pUVar5;
  UI_MapEditorInspectPanel___c__DisplayClass91_0_o *__this_02;
  System_String_o *pSVar6;
  
  if (Il2CppMethodInitialized_07548025 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorInspectPanel_OnButtonClick_b__91_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass91_0_OnButtonClick_b__1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorInspectPanel_c__DisplayClass91_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"DeleteComponent");
    il2cpp_codegen_initialize_runtime_metadata(&"AddComponent");
    il2cpp_codegen_initialize_runtime_metadata(&"Texture");
    il2cpp_codegen_initialize_runtime_metadata(&"DeleteWarning");
    Il2CppMethodInitialized_07548025 = '\x01';
  }
  pUVar1 = (__this->fields)._menu;
  if (pUVar1 != (UI_MapEditorMenu_o *)0x0) {
    bVar3 = UI_MapEditorMenu__IsPopupActive(pUVar1,(MethodInfo *)0x0);
    if (bVar3) {
      return;
    }
    bVar3 = System_String__op_Equality(name,"Texture",(MethodInfo *)0x0);
    if (bVar3) {
      pUVar1 = (__this->fields)._menu;
      if ((pUVar1 != (UI_MapEditorMenu_o *)0x0) &&
         (pUVar2 = (pUVar1->fields).TexturePopup, pUVar2 != (UI_MapEditorTexturePopup_o *)0x0)) {
        (*(pUVar2->klass->vtable)._21_Show.methodPtr)(pUVar2,(pUVar2->klass->vtable)._21_Show.method);
        return;
      }
    }
    else {
      bVar3 = System_String__op_Equality(name,"AddComponent",(MethodInfo *)0x0);
      if (bVar3) {
        pUVar1 = (__this->fields)._menu;
        if (pUVar1 != (UI_MapEditorMenu_o *)0x0) {
          __this_00 = (pUVar1->fields).AddComponentPopup;
          pUVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
          UnityEngine_Events_UnityAction___ctor
                    (pUVar5,(Il2CppObject *)__this,
                     (intptr_t)MethodInfo_UI_MapEditorInspectPanel_OnButtonClick_b__91_0,(MethodInfo *)0x0);
          if (__this_00 != (UI_MapEditorAddComponentPopup_o *)0x0) {
            UI_MapEditorAddComponentPopup__Show(__this_00,pUVar5,(MethodInfo *)0x0);
            return;
          }
        }
      }
      else if (name != (System_String_o *)0x0) {
        bVar3 = System_String__StartsWith(name,"DeleteComponent",(MethodInfo *)0x0);
        if (!bVar3) {
          return;
        }
        __this_02 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel_c__DisplayClass91_0);
        UI_MapEditorInspectPanel___c__DisplayClass91_0___ctor(__this_02,(MethodInfo *)0x0);
        if (__this_02 != (UI_MapEditorInspectPanel___c__DisplayClass91_0_o *)0x0) {
          (__this_02->fields).__4__this = __this;
          Il2CppCodeGenWriteBarrier(&(__this_02->fields).__4__this);
          if ("DeleteComponent" != (System_String_o *)0x0) {
            pSVar6 = System_String__Substring
                               (name,("DeleteComponent"->fields)._stringLength,(MethodInfo *)0x0);
            iVar4 = System_Int32__Parse(pSVar6,(MethodInfo *)0x0);
            (__this_02->fields).index = iVar4;
            pUVar1 = (__this->fields)._menu;
            if (pUVar1 != (UI_MapEditorMenu_o *)0x0) {
              __this_01 = (pUVar1->fields).ConfirmPopup;
              if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
              }
              pSVar6 = UI_UIManager__GetLocaleCommon("DeleteWarning",(MethodInfo *)0x0);
              pUVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
              UnityEngine_Events_UnityAction___ctor
                        (pUVar5,(Il2CppObject *)__this_02,
                         (intptr_t)MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass91_0_OnButtonClick_b__1,
                         (MethodInfo *)0x0);
              if (__this_01 != (UI_ConfirmPopup_o *)0x0) {
                UI_ConfirmPopup__Show(__this_01,pSVar6,pUVar5,(System_String_o *)0x0,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel$$OnAddComponent
// il2cpp: void UI_MapEditorInspectPanel__OnAddComponent (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x5d8f4b0

void UI_MapEditorInspectPanel__OnAddComponent(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  UI_MapEditorMenu_o *pUVar3;
  UI_MapEditorAddComponentPopup_o *pUVar4;
  Settings_StringSetting_o *pSVar5;
  GameManagers_MapEditorGameManager_o *pGVar6;
  System_Collections_Generic_List_Dictionary_string__BaseSetting___o *__this_00;
  CustomLogic_CustomLogicEvaluator_o *__this_01;
  System_Collections_Generic_Dictionary_string__BaseSetting__array *pSVar7;
  System_String_array *pSVar8;
  bool bVar9;
  System_Collections_Generic_List_string__o *pSVar10;
  System_Collections_Generic_Dictionary_string__BaseSetting__o *item;
  MethodInfo *pMVar11;
  MethodInfo *component;
  
  if (Il2CppMethodInitialized_07548026 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Dictionary_string_BaseSetting_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_07548026 = '\x01';
  }
  pUVar3 = (__this->fields)._menu;
  if ((((pUVar3 != (UI_MapEditorMenu_o *)0x0) &&
       (pUVar4 = (pUVar3->fields).AddComponentPopup, pUVar4 != (UI_MapEditorAddComponentPopup_o *)0x0)) &&
      (pSVar5 = (pUVar4->fields).FinishSetting, pSVar5 != (Settings_StringSetting_o *)0x0)) &&
     (pSVar10 = (__this->fields)._componentNames, pSVar10 != (System_Collections_Generic_List_string__o *)0x0)
     ) {
    component = (MethodInfo *)(pSVar5->fields)._value;
    pMVar11 = component;
    bVar9 = System_Collections_Generic_List_object___Contains
                      ((System_Collections_Generic_List_object__o *)pSVar10,(Il2CppObject *)component,
                       (MethodInfo_395D6D0 *)MethodInfo_System_Collections_Generic_List_string_Contains);
    if (bVar9) {
label_05d8f68c:
      UI_MapEditorInspectPanel__OnChange(__this,pMVar11);
      return;
    }
    pGVar6 = (__this->fields)._gameManager;
    if (pGVar6 != (GameManagers_MapEditorGameManager_o *)0x0) {
      __this_00 = (__this->fields)._components;
      __this_01 = (pGVar6->fields).LogicEvaluator;
      pSVar10 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
      System_Collections_Generic_List_object____ctor
                ((System_Collections_Generic_List_object__o *)pSVar10,
                 (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
      if (__this_01 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
        item = CustomLogic_CustomLogicEvaluator__GetComponentSettings
                         (__this_01,(System_String_o *)component,pSVar10,(MethodInfo *)0x0);
        pMVar11 = MethodInfo_System_Collections_Generic_List_Dictionary_string_BaseSetting_Add;
        if (__this_00 != (System_Collections_Generic_List_Dictionary_string__BaseSetting___o *)0x0) {
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar7 = (__this_00->fields)._items;
          if (pSVar7 != (System_Collections_Generic_Dictionary_string__BaseSetting__array *)0x0) {
            uVar2 = (__this_00->fields)._size;
            if (uVar2 < (uint)pSVar7->max_length) {
              (__this_00->fields)._size = uVar2 + 1;
              pSVar7->m_Items[(int)uVar2] = item;
              Il2CppCodeGenWriteBarrier(pSVar7->m_Items + (int)uVar2);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item,
                         (MethodInfo_395D230 *)pMVar11->klass->rgctx_data[0xe].method);
            }
            pMVar11 = MethodInfo_System_Collections_Generic_List_string_Add;
            pSVar10 = (__this->fields)._componentNames;
            if (pSVar10 != (System_Collections_Generic_List_string__o *)0x0) {
              piVar1 = &(pSVar10->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar8 = (pSVar10->fields)._items;
              if (pSVar8 != (System_String_array *)0x0) {
                uVar2 = (pSVar10->fields)._size;
                if (uVar2 < (uint)pSVar8->max_length) {
                  (pSVar10->fields)._size = uVar2 + 1;
                  pSVar8->m_Items[(int)uVar2] = (System_String_o *)component;
                  Il2CppCodeGenWriteBarrier(pSVar8->m_Items + (int)uVar2);
                  pMVar11 = component;
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize
                            ((System_Collections_Generic_List_object__o *)pSVar10,(Il2CppObject *)component,
                             (MethodInfo_395D230 *)pMVar11->klass->rgctx_data[0xe].method);
                  pMVar11 = component;
                }
                goto label_05d8f68c;
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel$$OnDeleteComponent
// il2cpp: void UI_MapEditorInspectPanel__OnDeleteComponent (UI_MapEditorInspectPanel_o* __this, int32_t index, const MethodInfo* method);
// 0x5d8f6b0

void UI_MapEditorInspectPanel__OnDeleteComponent
               (UI_MapEditorInspectPanel_o *__this,int32_t index,MethodInfo *method)

{
  System_Collections_Generic_List_Dictionary_string__BaseSetting___o *__this_00;
  System_Collections_Generic_List_string__o *__this_01;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)(ulong)(uint)index;
  if (Il2CppMethodInitialized_07548027 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_RemoveAt);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Dictionary_string_BaseSetting_RemoveAt);
    Il2CppMethodInitialized_07548027 = '\x01';
  }
  __this_00 = (__this->fields)._components;
  if (__this_00 != (System_Collections_Generic_List_Dictionary_string__BaseSetting___o *)0x0) {
    System_Collections_Generic_List_object___RemoveAt
              ((System_Collections_Generic_List_object__o *)__this_00,index,
               (MethodInfo_395F100 *)
               MethodInfo_System_Collections_Generic_List_Dictionary_string_BaseSetting_RemoveAt);
    __this_01 = (__this->fields)._componentNames;
    if (__this_01 != (System_Collections_Generic_List_string__o *)0x0) {
      System_Collections_Generic_List_object___RemoveAt
                ((System_Collections_Generic_List_object__o *)__this_01,index,
                 (MethodInfo_395F100 *)MethodInfo_System_Collections_Generic_List_string_RemoveAt);
      UI_MapEditorInspectPanel__OnChange(__this,method_00);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel$$SanitizeName
// il2cpp: System_String_o* UI_MapEditorInspectPanel__SanitizeName (UI_MapEditorInspectPanel_o* __this, System_String_o* name, const MethodInfo* method);
// 0x5d8f730

System_String_o *
UI_MapEditorInspectPanel__SanitizeName
          (UI_MapEditorInspectPanel_o *__this,System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *array;
  ulong uVar2;
  System_String_o *pSVar3;
  ulong uVar4;
  uint16_t local_2a;
  
  if (Il2CppMethodInitialized_07548028 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_char_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               FieldRva_PrivateImplementationDetails_619EB2C637D6EE6BE496B015CCC320AC0B7F976E145A6080B09E8587538D44D0
              );
    Il2CppMethodInitialized_07548028 = '\x01';
  }
  local_2a = 0;
  bVar1 = System_String__IsNullOrEmpty(name,(MethodInfo *)0x0);
  if (bVar1) {
    return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  array = SZArrayNew(TypeInfo_char_array,8);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_53cbb40
            ((System_Array_o *)array,
             FieldRva_PrivateImplementationDetails_619EB2C637D6EE6BE496B015CCC320AC0B7F976E145A6080B09E8587538D44D0
             ,(MethodInfo *)0x0);
  if (array != (Il2CppObject *)0x0) {
    if (0 < (int)array[1].monitor) {
      uVar2 = (ulong)array[1].monitor & 0xffffffff;
      uVar4 = 0;
      do {
        if (uVar2 <= uVar4) {
          ThrowIndexOutOfRangeException();
        }
        local_2a = *(uint16_t *)((long)&array[2].klass + uVar4 * 2);
        if ((g_data_07556750->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(g_data_07556750);
        }
        pSVar3 = System_Char__ToString(&local_2a,(MethodInfo *)0x0);
        if (name == (System_String_o *)0x0) goto label_05d8f89b;
        name = System_String__Replace_5304550
                         (name,pSVar3,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),
                          (MethodInfo *)0x0);
        uVar4 = uVar4 + 1;
        uVar2 = (ulong)*(uint *)&array[1].monitor;
      } while ((long)uVar4 < (long)(int)*(uint *)&array[1].monitor);
    }
    if ((name != (System_String_o *)0x0) &&
       (((name->fields)._stringLength < 0x100 ||
        (name = System_String__Substring_53042f0(name,0,0xff,(MethodInfo *)0x0),
        name != (System_String_o *)0x0)))) {
      pSVar3 = System_String__Trim(name,(MethodInfo *)0x0);
      return pSVar3;
    }
  }
label_05d8f89b:
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel$$SyncSettings
// il2cpp: void UI_MapEditorInspectPanel__SyncSettings (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x5d8a5f0
// eh: try 0x5d8b96a..0x5d8c176 -> pad 0x5d8c2d8 (+43 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5d8c181..0x5d8c18e -> pad 0x5d8c290 catch (...) [compiler noexcept guard]
// eh: try 0x5d8c1e9..0x5d8c280 -> pad 0x5d8c298 (+9 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5d8c2a3..0x5d8c2b0 -> pad 0x5d8c348 catch (...) [compiler noexcept guard]
// eh: try 0x5d8c306..0x5d8c30b -> pad 0x5d8c330 cleanup
// eh: try 0x5d8c333..0x5d8c340 -> pad 0x5d8c348 catch (...) [compiler noexcept guard]
// asm: 149 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d8b75d: nop dword ptr [rax]
// asm:   0x5d8bc79: nop dword ptr [rax]
// asm:   0x5d8beaf: nop 
// asm:   0x5d8bfc8: mov ebp, 0x1f
// asm:   0x5d8bfcd: xor ebx, ebx
// asm:   0x5d8bfcf: lea rax, [rip + 0x15041a2]  ; MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_string_Dispose
// asm:   0x5d8bfd6: mov rsi, qword ptr [rax]
// asm:   0x5d8bfd9: lea rdi, [rsp + 0x70]
// asm:   0x5d8bfde: call 0x4de67f0  ; System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose()
// asm:   0x5d8bfe3: mov r14, qword ptr [rsp + 0x30]
// asm:   0x5d8bfe8: test rbx, rbx
// asm:   0x5d8bfeb: jne 0x5d8c169
// asm:   0x5d8bff1: cmp ebp, 0x1f
// asm:   0x5d8bff4: je 0x5d8bc40
// asm:   0x5d8bffa: test ebp, ebp
// asm:   0x5d8bffc: je 0x5d8bc40
// asm:   0x5d8c002: jmp 0x5d8c075
// asm:   0x5d8c022: jmp 0x5d8c034
// asm:   0x5d8c024: jmp 0x5d8c034
// asm:   0x5d8c026: jmp 0x5d8c034
// asm:   0x5d8c028: jmp 0x5d8c034
// asm:   0x5d8c02a: jmp 0x5d8c034
// asm:   0x5d8c02c: jmp 0x5d8c034
// asm:   0x5d8c02e: jmp 0x5d8c034
// asm:   0x5d8c030: jmp 0x5d8c034
// asm:   0x5d8c032: jmp 0x5d8c034
// asm:   0x5d8c034: mov r14, rdx
// asm:   0x5d8c037: mov rbx, rax
// asm:   0x5d8c03a: cmp r14d, 1
// asm:   0x5d8c03e: jne 0x5d8c181
// asm:   0x5d8c044: mov rdi, rbx
// asm:   0x5d8c047: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d8c04c: mov rbx, qword ptr [rax]
// asm:   0x5d8c04f: mov qword ptr [rsp + 0xa0], rbx
// asm:   0x5d8c057: xor ebp, ebp
// asm:   0x5d8c059: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d8c05e: jmp 0x5d8bfcf
// asm:   0x5d8c0e6: test r14, r14
// asm:   0x5d8c0e9: jne 0x5d8c278
// asm:   0x5d8c0ef: cmp ebp, 0x1d
// asm:   0x5d8c0f2: je 0x5d8b960
// asm:   0x5d8c0f8: test ebp, ebp
// asm:   0x5d8c0fa: je 0x5d8b960
// asm:   0x5d8c100: jmp 0x5d8c22d
// asm:   0x5d8c169: mov rdi, rbx
// asm:   0x5d8c16c: mov rbp, qword ptr [rsp + 0x10]
// asm:   0x5d8c171: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d8c17b: mov r14, rdx
// asm:   0x5d8c17e: mov rbx, rax
// asm:   0x5d8c181: lea rdi, [rsp + 0xa0]
// asm:   0x5d8c189: call 0x2fdd5e0  ; il2cpp_runtime_helper_02fdd5e0()
// asm:   0x5d8c18e: mov rbp, qword ptr [rsp + 0x10]
// asm:   0x5d8c193: jmp 0x5d8c1ca
// asm:   0x5d8c195: jmp 0x5d8c1b1
// asm:   0x5d8c197: jmp 0x5d8c1b1
// asm:   0x5d8c199: jmp 0x5d8c1b1
// asm:   0x5d8c19b: jmp 0x5d8c1c4
// asm:   0x5d8c19d: jmp 0x5d8c1c4
// asm:   0x5d8c19f: jmp 0x5d8c1c4
// asm:   0x5d8c1a1: jmp 0x5d8c1c4
// asm:   0x5d8c1a3: jmp 0x5d8c1c4
// asm:   0x5d8c1a5: jmp 0x5d8c1c4
// asm:   0x5d8c1a7: jmp 0x5d8c1c4
// asm:   0x5d8c1a9: jmp 0x5d8c1c4
// asm:   0x5d8c1ab: jmp 0x5d8c1c4
// asm:   0x5d8c1ad: jmp 0x5d8c1c4
// asm:   0x5d8c1af: jmp 0x5d8c1c4
// asm:   0x5d8c1b1: mov r14, rdx
// asm:   0x5d8c1b4: mov rbx, rax
// asm:   0x5d8c1b7: mov rbp, qword ptr [rsp + 0x10]
// asm:   0x5d8c1bc: jmp 0x5d8c1ca
// asm:   0x5d8c1be: jmp 0x5d8c1c4
// asm:   0x5d8c1c0: jmp 0x5d8c1c4
// asm:   0x5d8c1c2: jmp 0x5d8c1c4
// asm:   0x5d8c1c4: mov r14, rdx
// asm:   0x5d8c1c7: mov rbx, rax
// asm:   0x5d8c1ca: cmp r14d, 1
// asm:   0x5d8c1ce: jne 0x5d8c2a3
// asm:   0x5d8c1d4: mov rdi, rbx
// asm:   0x5d8c1d7: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d8c1dc: mov r14, qword ptr [rax]
// asm:   0x5d8c1df: mov qword ptr [rsp + 0xd8], r14
// asm:   0x5d8c1e7: xor ebp, ebp
// asm:   0x5d8c1e9: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d8c1ee: jmp 0x5d8c078
// asm:   0x5d8c22d: lea rax, [rip + 0x15021bc]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptComponent_Dispose
// asm:   0x5d8c234: mov rsi, qword ptr [rax]
// asm:   0x5d8c237: lea rdi, [rsp + 0x50]
// asm:   0x5d8c23c: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5d8c241: jmp 0x5d8c21b
// asm:   0x5d8c248: mov rdi, rbx
// asm:   0x5d8c278: mov rdi, r14
// asm:   0x5d8c27b: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d8c290: mov rdi, rax
// asm:   0x5d8c293: call 0x2ab61e0  ; __clang_call_terminate()
// asm:   0x5d8c298: mov r14, rdx
// asm:   0x5d8c29b: mov rbx, rax
// asm:   0x5d8c29e: mov rbp, qword ptr [rsp + 0x10]
// asm:   0x5d8c2a3: lea rdi, [rsp + 0xd8]
// asm:   0x5d8c2ab: call 0x2fdd610  ; il2cpp_runtime_helper_02fdd610()
// asm:   0x5d8c2b0: jmp 0x5d8c2ed
// asm:   0x5d8c2b2: jmp 0x5d8c2e2
// asm:   0x5d8c2b4: jmp 0x5d8c2da
// asm:   0x5d8c2b6: jmp 0x5d8c2da
// asm:   0x5d8c2b8: jmp 0x5d8c2da
// asm:   0x5d8c2ba: jmp 0x5d8c2e2
// asm:   0x5d8c2bc: jmp 0x5d8c2e2
// asm:   0x5d8c2be: jmp 0x5d8c2e2
// asm:   0x5d8c2c0: jmp 0x5d8c2e2
// asm:   0x5d8c2c2: jmp 0x5d8c2e2
// asm:   0x5d8c2c4: jmp 0x5d8c2da
// asm:   0x5d8c2c6: jmp 0x5d8c2da
// asm:   0x5d8c2c8: jmp 0x5d8c2e2
// asm:   0x5d8c2ca: jmp 0x5d8c2da
// asm:   0x5d8c2cc: jmp 0x5d8c2e2
// asm:   0x5d8c2ce: jmp 0x5d8c2da
// asm:   0x5d8c2d0: jmp 0x5d8c2e2
// asm:   0x5d8c2d2: jmp 0x5d8c2e2
// asm:   0x5d8c2d4: jmp 0x5d8c2e2
// asm:   0x5d8c2d6: jmp 0x5d8c2e2
// asm:   0x5d8c2d8: jmp 0x5d8c2e2
// asm:   0x5d8c2da: mov r14, rdx
// asm:   0x5d8c2dd: mov rbx, rax
// asm:   0x5d8c2e0: jmp 0x5d8c2ed
// asm:   0x5d8c2e2: mov r14, rdx
// asm:   0x5d8c2e5: mov rbx, rax
// asm:   0x5d8c2e8: mov rbp, qword ptr [rsp + 0x10]
// asm:   0x5d8c2ed: cmp r14d, 1
// asm:   0x5d8c2f1: jne 0x5d8c333
// asm:   0x5d8c2f3: mov rdi, rbx
// asm:   0x5d8c2f6: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d8c2fb: mov rbx, qword ptr [rax]
// asm:   0x5d8c2fe: mov qword ptr [rsp + 0xe8], rbx
// asm:   0x5d8c306: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d8c30b: lea rax, [rip + 0x15020de]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptComponent_Dispose
// asm:   0x5d8c312: mov rsi, qword ptr [rax]
// asm:   0x5d8c315: lea rdi, [rsp + 0x50]
// asm:   0x5d8c31a: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5d8c31f: test rbx, rbx
// asm:   0x5d8c322: je 0x5d8c207
// asm:   0x5d8c328: mov rdi, rbx
// asm:   0x5d8c32b: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d8c330: mov rbx, rax
// asm:   0x5d8c333: lea rdi, [rsp + 0xe8]
// asm:   0x5d8c33b: call 0x2fdd6a0  ; il2cpp_runtime_helper_02fdd6a0()
// asm:   0x5d8c340: mov rdi, rbx
// asm:   0x5d8c343: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5d8c348: mov rdi, rax
// asm:   0x5d8c34b: call 0x2ab61e0  ; __clang_call_terminate()

void UI_MapEditorInspectPanel__SyncSettings(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  float *pfVar1;
  UI_MapEditorInspectPanel___c__DisplayClass95_0_Fields *targetAddress;
  int32_t *piVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  Settings_StringSetting_o *pSVar6;
  Settings_BoolSetting_o *pSVar7;
  Settings_IntSetting_o *pSVar8;
  Settings_FloatSetting_o *pSVar9;
  Settings_ColorSetting_o *pSVar10;
  System_String_c *pSVar11;
  System_Collections_Generic_List_object__o *__this_00;
  System_String_array *pSVar12;
  GameManagers_MapEditorGameManager_o *pGVar13;
  CustomLogic_CustomLogicEvaluator_o *pCVar14;
  System_Collections_Generic_Dictionary_string__BaseSetting__array *pSVar15;
  Il2CppClass *pIVar16;
  Il2CppRuntimeInterfaceOffsetPair *pIVar17;
  void *pvVar18;
  System_Collections_Generic_HashSet_object__o *__this_01;
  Il2CppType *handle;
  bool bVar19;
  System_String_o *pSVar20;
  Utility_Color255_o *pUVar21;
  System_Type_o *pSVar22;
  System_Type_o *pSVar23;
  System_Collections_Generic_HashSet_string__o **ppSVar24;
  Map_MapObject_o *pMVar25;
  System_Collections_Generic_List_Dictionary_string__BaseSetting___o *pSVar26;
  System_Collections_Generic_List_string__o *pSVar27;
  UI_MapEditorInspectPanel___c__DisplayClass95_0_o *__this_02;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar28;
  System_Func_MapObject__bool__o *__this_03;
  System_Collections_Generic_Dictionary_string__BaseSetting__o *pSVar29;
  System_Collections_Generic_Dictionary_string__string__o *__this_04;
  Il2CppObject *pIVar30;
  VirtualInvokeData *pVVar31;
  System_Func_MapScriptComponent__bool__o **targetAddress_00;
  System_Func_MapScriptComponent__bool__o *__this_05;
  Map_MapScriptComponent_o *pMVar32;
  System_Collections_Generic_Dictionary_string__string__o *__this_06;
  ulong uVar33;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *pMVar34;
  MethodInfo *method_01;
  int index;
  System_String_o **__this_07;
  UI_MapEditorInspectPanel_o *__this_08;
  long lVar35;
  Map_MapScriptBaseObject_o *pMVar36;
  float fVar37;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  UnityEngine_Vector3_o UVar38;
  float fStack_114;
  Il2CppObject *local_100;
  undefined1 local_f8 [24];
  UI_MapEditorInspectPanel___c__DisplayClass95_0_o *local_e0;
  undefined1 local_d8 [8];
  undefined8 uStack_d0;
  Map_MapScriptComponent_o *local_c8;
  System_String_o *local_c0;
  undefined1 local_b8 [8];
  undefined1 *puStack_b0;
  Map_MapScriptComponent_o *local_a8;
  System_String_o *pSStack_a0;
  undefined8 local_98;
  undefined1 local_88 [16];
  Map_MapScriptComponent_o *local_78;
  System_String_o *pSStack_70;
  int32_t local_68;
  undefined4 uStack_64;
  System_Collections_Generic_List_Dictionary_string__BaseSetting___o **local_60;
  System_Collections_Generic_List_string__o **local_58;
  undefined8 local_50;
  Il2CppObject **local_48;
  undefined8 local_40;
  undefined1 *local_38;
  
  __this_07 = (System_String_o **)__this;
  if (Il2CppMethodInitialized_07548029 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_All_MapObject);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_First_MapScriptComponent);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Skip_MapObject);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_string_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptComponent_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptComponent_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_string_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_string_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptComponent_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_MapObject_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_MapScriptComponent_bool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerable_MapObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerator_MapObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_string_get_Key);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Dictionary_string_BaseSetting_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapScriptComponent_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Dictionary_string_BaseSetting_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapObject_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_MapObject_get_Item)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_Dictionary_string_BaseSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorInspectPanel);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_Map_MapScriptBasicMaterial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptBasicMaterial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptDefaultTiledMaterial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptLegacyMaterial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptReflectiveMaterial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptSceneObject);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass95_0_SyncSettings_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass95_0_SyncSettings_b__2);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorInspectPanel_c__DisplayClass95_0);
    il2cpp_codegen_initialize_runtime_metadata(&"CollideMode");
    il2cpp_codegen_initialize_runtime_metadata(&"Color");
    il2cpp_codegen_initialize_runtime_metadata(&"ScaleY");
    il2cpp_codegen_initialize_runtime_metadata(&"RotationZ");
    il2cpp_codegen_initialize_runtime_metadata(&"Networked");
    il2cpp_codegen_initialize_runtime_metadata(&"Name");
    il2cpp_codegen_initialize_runtime_metadata(&"--");
    il2cpp_codegen_initialize_runtime_metadata(&"RotationY");
    il2cpp_codegen_initialize_runtime_metadata(&"Visible");
    il2cpp_codegen_initialize_runtime_metadata(&"Misc/None");
    il2cpp_codegen_initialize_runtime_metadata(&"Texture");
    il2cpp_codegen_initialize_runtime_metadata(&"RotationX");
    il2cpp_codegen_initialize_runtime_metadata(&"PositionZ");
    il2cpp_codegen_initialize_runtime_metadata(&"Active");
    il2cpp_codegen_initialize_runtime_metadata(&"Parent");
    il2cpp_codegen_initialize_runtime_metadata(&"ScaleX");
    il2cpp_codegen_initialize_runtime_metadata(&"Shader");
    il2cpp_codegen_initialize_runtime_metadata(&"Static");
    il2cpp_codegen_initialize_runtime_metadata(&"ScaleZ");
    il2cpp_codegen_initialize_runtime_metadata(&"PositionY");
    il2cpp_codegen_initialize_runtime_metadata(&"CollideWith");
    il2cpp_codegen_initialize_runtime_metadata(&"PositionX");
    __this_07 = &"PhysicsMaterial";
    il2cpp_codegen_initialize_runtime_metadata(&"PhysicsMaterial");
    Il2CppMethodInitialized_07548029 = '\x01';
    in_RDX = extraout_RDX;
  }
  local_d8 = (undefined1  [8])0x0;
  uStack_d0._0_4_ = 0;
  uStack_d0._4_4_ = 0;
  local_c8 = (Map_MapScriptComponent_o *)0x0;
  local_100 = (Il2CppObject *)0x0;
  local_a8 = (Map_MapScriptComponent_o *)0x0;
  pSStack_a0 = (System_String_o *)0x0;
  local_b8 = (undefined1  [8])0x0;
  puStack_b0 = (undefined1 *)0x0;
  local_98._0_4_ = 0;
  local_98._4_4_ = 0;
  local_c0 = (System_String_o *)0x0;
  pMVar25 = (__this->fields)._mapObject;
  if ((pMVar25 == (Map_MapObject_o *)0x0) ||
     (pMVar36 = (pMVar25->fields).ScriptObject, pMVar36 == (Map_MapScriptBaseObject_o *)0x0))
  goto label_05d8c243;
  bVar3 = (TypeInfo_Map_MapScriptSceneObject->_2).typeHierarchyDepth;
  if (((pMVar36->klass->_2).typeHierarchyDepth < bVar3) ||
     ((pMVar36->klass->_2).typeHierarchy[(ulong)bVar3 - 1] != (Il2CppClass *)TypeInfo_Map_MapScriptSceneObject
     )) {
    il2cpp_codegen_raise_invalid_cast_exception(pMVar36);
  }
  pSVar6 = (__this->fields)._name;
  pSVar20 = UI_MapEditorInspectPanel__SanitizeName
                      ((UI_MapEditorInspectPanel_o *)__this_07,(pMVar36->fields).Name,in_RDX);
  if (pSVar6 == (Settings_StringSetting_o *)0x0) goto label_05d8c243;
  Settings_TypedSetting_object___set_Value
            ((Settings_TypedSetting_T__o *)pSVar6,(Il2CppObject *)pSVar20,
             (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
  pSVar7 = (__this->fields)._active;
  if (pSVar7 == (Settings_BoolSetting_o *)0x0) goto label_05d8c243;
  Settings_TypedSetting_bool___set_Value
            ((Settings_TypedSetting_bool__o *)pSVar7,(pMVar36->fields).Active,
             (MethodInfo_42DA020 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
  pSVar7 = (__this->fields)._static;
  if (pSVar7 == (Settings_BoolSetting_o *)0x0) goto label_05d8c243;
  Settings_TypedSetting_bool___set_Value
            ((Settings_TypedSetting_bool__o *)pSVar7,(pMVar36->fields).Static,
             (MethodInfo_42DA020 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
  pSVar7 = (__this->fields)._networked;
  if (pSVar7 == (Settings_BoolSetting_o *)0x0) goto label_05d8c243;
  Settings_TypedSetting_bool___set_Value
            ((Settings_TypedSetting_bool__o *)pSVar7,(pMVar36->fields).Networked,
             (MethodInfo_42DA020 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
  pSVar8 = (__this->fields)._parent;
  if (pSVar8 == (Settings_IntSetting_o *)0x0) goto label_05d8c243;
  Settings_TypedSetting_int___set_Value
            ((Settings_TypedSetting_int__o *)pSVar8,(pMVar36->fields).Parent,
             (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
  pSVar7 = (__this->fields)._visible;
  if (pSVar7 == (Settings_BoolSetting_o *)0x0) goto label_05d8c243;
  Settings_TypedSetting_bool___set_Value
            ((Settings_TypedSetting_bool__o *)pSVar7,(pMVar36->fields).Visible,
             (MethodInfo_42DA020 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
  UVar38 = Map_MapScriptBaseObject__GetPosition(pMVar36,(MethodInfo *)0x0);
  pSVar9 = (__this->fields)._positionX;
  if (pSVar9 == (Settings_FloatSetting_o *)0x0) goto label_05d8c243;
  Settings_TypedSetting_float___set_Value
            ((Settings_TypedSetting_float__o *)pSVar9,UVar38.fields.x,
             (MethodInfo_42DA3B0 *)MethodInfo_Settings_TypedSetting_float_set_Value);
  pSVar9 = (__this->fields)._positionY;
  if (pSVar9 == (Settings_FloatSetting_o *)0x0) goto label_05d8c243;
  fStack_114 = UVar38.fields.y;
  Settings_TypedSetting_float___set_Value
            ((Settings_TypedSetting_float__o *)pSVar9,fStack_114,
             (MethodInfo_42DA3B0 *)MethodInfo_Settings_TypedSetting_float_set_Value);
  pSVar9 = (__this->fields)._positionZ;
  if (pSVar9 == (Settings_FloatSetting_o *)0x0) goto label_05d8c243;
  Settings_TypedSetting_float___set_Value
            ((Settings_TypedSetting_float__o *)pSVar9,UVar38.fields.z,
             (MethodInfo_42DA3B0 *)MethodInfo_Settings_TypedSetting_float_set_Value);
  UVar38 = Map_MapScriptBaseObject__GetRotation(pMVar36,(MethodInfo *)0x0);
  pSVar9 = (__this->fields)._rotationX;
  if (pSVar9 == (Settings_FloatSetting_o *)0x0) goto label_05d8c243;
  Settings_TypedSetting_float___set_Value
            ((Settings_TypedSetting_float__o *)pSVar9,UVar38.fields.x,
             (MethodInfo_42DA3B0 *)MethodInfo_Settings_TypedSetting_float_set_Value);
  pSVar9 = (__this->fields)._rotationY;
  if (pSVar9 == (Settings_FloatSetting_o *)0x0) goto label_05d8c243;
  fStack_114 = UVar38.fields.y;
  Settings_TypedSetting_float___set_Value
            ((Settings_TypedSetting_float__o *)pSVar9,fStack_114,
             (MethodInfo_42DA3B0 *)MethodInfo_Settings_TypedSetting_float_set_Value);
  pSVar9 = (__this->fields)._rotationZ;
  if (pSVar9 == (Settings_FloatSetting_o *)0x0) goto label_05d8c243;
  Settings_TypedSetting_float___set_Value
            ((Settings_TypedSetting_float__o *)pSVar9,UVar38.fields.z,
             (MethodInfo_42DA3B0 *)MethodInfo_Settings_TypedSetting_float_set_Value);
  UVar38 = Map_MapScriptBaseObject__GetScale(pMVar36,(MethodInfo *)0x0);
  pSVar9 = (__this->fields)._scaleX;
  if (pSVar9 == (Settings_FloatSetting_o *)0x0) goto label_05d8c243;
  Settings_TypedSetting_float___set_Value
            ((Settings_TypedSetting_float__o *)pSVar9,UVar38.fields.x,
             (MethodInfo_42DA3B0 *)MethodInfo_Settings_TypedSetting_float_set_Value);
  pSVar9 = (__this->fields)._scaleY;
  if (pSVar9 == (Settings_FloatSetting_o *)0x0) goto label_05d8c243;
  fStack_114 = UVar38.fields.y;
  Settings_TypedSetting_float___set_Value
            ((Settings_TypedSetting_float__o *)pSVar9,fStack_114,
             (MethodInfo_42DA3B0 *)MethodInfo_Settings_TypedSetting_float_set_Value);
  pSVar9 = (__this->fields)._scaleZ;
  if (pSVar9 == (Settings_FloatSetting_o *)0x0) goto label_05d8c243;
  Settings_TypedSetting_float___set_Value
            ((Settings_TypedSetting_float__o *)pSVar9,UVar38.fields.z,
             (MethodInfo_42DA3B0 *)MethodInfo_Settings_TypedSetting_float_set_Value);
  pSVar6 = (__this->fields)._collideMode;
  if (pSVar6 == (Settings_StringSetting_o *)0x0) goto label_05d8c243;
  Settings_TypedSetting_object___set_Value
            ((Settings_TypedSetting_T__o *)pSVar6,(Il2CppObject *)(*(uint64_t *)((char *)pMVar36 + 0x60)),
             (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
  pSVar6 = (__this->fields)._collideWith;
  if (pSVar6 == (Settings_StringSetting_o *)0x0) goto label_05d8c243;
  Settings_TypedSetting_object___set_Value
            ((Settings_TypedSetting_T__o *)pSVar6,(*(uint64_t *)((char *)pMVar36 + 0x68)),
             (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
  pSVar6 = (__this->fields)._physicsMaterial;
  if (pSVar6 == (Settings_StringSetting_o *)0x0) goto label_05d8c243;
  Settings_TypedSetting_object___set_Value
            ((Settings_TypedSetting_T__o *)pSVar6,(Il2CppObject *)(*(uint64_t *)((char *)pMVar36 + 0x70)),
             (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
  pSVar20 = (*(uint64_t *)((char *)pMVar36 + 0x78));
  if ((pSVar20 == (System_String_o *)0x0) ||
     (pSVar6 = (__this->fields)._shader, pSVar6 == (Settings_StringSetting_o *)0x0)) goto label_05d8c243;
  Settings_TypedSetting_object___set_Value
            ((Settings_TypedSetting_T__o *)pSVar6,(Il2CppObject *)pSVar20->fields,
             (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
  pSVar20 = (*(uint64_t *)((char *)pMVar36 + 0x78));
  if ((pSVar20 == (System_String_o *)0x0) ||
     (pSVar10 = (__this->fields)._color, pSVar10 == (Settings_ColorSetting_o *)0x0)) goto label_05d8c243;
  Settings_TypedSetting_object___set_Value
            ((Settings_TypedSetting_T__o *)pSVar10,(Il2CppObject *)(*(uint64_t *)((char *)pSVar20 + 0x18)),
             (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_Color255_set_Value);
  pSVar10 = (__this->fields)._reflectColor;
  pUVar21 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
  Utility_Color255___ctor_5ce7770(pUVar21,(MethodInfo *)0x0);
  if (pSVar10 == (Settings_ColorSetting_o *)0x0) goto label_05d8c243;
  Settings_TypedSetting_object___set_Value
            ((Settings_TypedSetting_T__o *)pSVar10,(Il2CppObject *)pUVar21,
             (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_Color255_set_Value);
  pSVar6 = (__this->fields)._texture;
  if (pSVar6 == (Settings_StringSetting_o *)0x0) goto label_05d8c243;
  Settings_TypedSetting_object___set_Value
            ((Settings_TypedSetting_T__o *)pSVar6,(Il2CppObject *)"Misc/None",
             (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
  pSVar9 = (__this->fields)._tilingX;
  if (pSVar9 == (Settings_FloatSetting_o *)0x0) goto label_05d8c243;
  Settings_TypedSetting_float___set_Value
            ((Settings_TypedSetting_float__o *)pSVar9,1.0,
             (MethodInfo_42DA3B0 *)MethodInfo_Settings_TypedSetting_float_set_Value);
  pSVar9 = (__this->fields)._tilingY;
  if (pSVar9 == (Settings_FloatSetting_o *)0x0) goto label_05d8c243;
  Settings_TypedSetting_float___set_Value
            ((Settings_TypedSetting_float__o *)pSVar9,1.0,
             (MethodInfo_42DA3B0 *)MethodInfo_Settings_TypedSetting_float_set_Value);
  pSVar9 = (__this->fields)._offsetX;
  if (pSVar9 == (Settings_FloatSetting_o *)0x0) goto label_05d8c243;
  Settings_TypedSetting_float___set_Value
            ((Settings_TypedSetting_float__o *)pSVar9,0.0,
             (MethodInfo_42DA3B0 *)MethodInfo_Settings_TypedSetting_float_set_Value);
  pSVar9 = (__this->fields)._offsetY;
  if (pSVar9 == (Settings_FloatSetting_o *)0x0) goto label_05d8c243;
  Settings_TypedSetting_float___set_Value
            ((Settings_TypedSetting_float__o *)pSVar9,0.0,
             (MethodInfo_42DA3B0 *)MethodInfo_Settings_TypedSetting_float_set_Value);
  handle = TypeRef_Map_MapScriptBasicMaterial;
  pSVar20 = (*(uint64_t *)((char *)pMVar36 + 0x78));
  if (pSVar20 == (System_String_o *)0x0) {
label_05d8ae28:
    if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_075567a8);
    }
    pSVar22 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
    pSVar20 = (*(uint64_t *)((char *)pMVar36 + 0x78));
    if ((pSVar20 == (System_String_o *)0x0) ||
       (pSVar23 = System_Object__GetType((Il2CppObject *)pSVar20,(MethodInfo *)0x0),
       pSVar22 == (System_Type_o *)0x0)) goto label_05d8c243;
    bVar19 = (*(pSVar22->klass->vtable)._22_IsAssignableFrom.methodPtr)
                       (pSVar22,pSVar23,(pSVar22->klass->vtable)._22_IsAssignableFrom.method);
    if (bVar19) {
      pSVar20 = (*(uint64_t *)((char *)pMVar36 + 0x78));
      if (pSVar20 == (System_String_o *)0x0) goto label_05d8c243;
      bVar3 = (TypeInfo_Map_MapScriptBasicMaterial->_2).typeHierarchyDepth;
      if (((pSVar20->klass->_2).typeHierarchyDepth < bVar3) ||
         ((pSVar20->klass->_2).typeHierarchy[(ulong)bVar3 - 1] !=
          (Il2CppClass *)TypeInfo_Map_MapScriptBasicMaterial)) {
        il2cpp_codegen_raise_invalid_cast_exception(pSVar20);
      }
      pSVar6 = (__this->fields)._texture;
      if (pSVar6 == (Settings_StringSetting_o *)0x0) goto label_05d8c243;
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)pSVar6,(*(uint64_t *)((char *)pSVar20 + 0x20)),
                 (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
      pSVar9 = (__this->fields)._tilingX;
      if (pSVar9 == (Settings_FloatSetting_o *)0x0) goto label_05d8c243;
      Settings_TypedSetting_float___set_Value
                ((Settings_TypedSetting_float__o *)pSVar9,(float)(*(uint32_t *)((char *)pSVar20 + 0x28)),
                 (MethodInfo_42DA3B0 *)MethodInfo_Settings_TypedSetting_float_set_Value);
      pSVar9 = (__this->fields)._tilingY;
      if (pSVar9 == (Settings_FloatSetting_o *)0x0) goto label_05d8c243;
      Settings_TypedSetting_float___set_Value
                ((Settings_TypedSetting_float__o *)pSVar9,*(float *)&(*(uint16_t *)((char *)pSVar20 + 0x2c)),
                 (MethodInfo_42DA3B0 *)MethodInfo_Settings_TypedSetting_float_set_Value);
      pSVar9 = (__this->fields)._offsetX;
      if (pSVar9 == (Settings_FloatSetting_o *)0x0) goto label_05d8c243;
      Settings_TypedSetting_float___set_Value
                ((Settings_TypedSetting_float__o *)pSVar9,*(float *)&(*(uint64_t *)((char *)pSVar20 + 0x30)),
                 (MethodInfo_42DA3B0 *)MethodInfo_Settings_TypedSetting_float_set_Value);
      pSVar9 = (__this->fields)._offsetY;
      if (pSVar9 == (Settings_FloatSetting_o *)0x0) goto label_05d8c243;
      Settings_TypedSetting_float___set_Value
                ((Settings_TypedSetting_float__o *)pSVar9,*(float *)((long)&(*(uint64_t *)((char *)pSVar20 + 0x30)) + 4),
                 (MethodInfo_42DA3B0 *)MethodInfo_Settings_TypedSetting_float_set_Value);
      pSVar20 = (*(uint64_t *)((char *)pMVar36 + 0x78));
      if (pSVar20 != (System_String_o *)0x0) {
        bVar3 = (TypeInfo_Map_MapScriptReflectiveMaterial->_2).typeHierarchyDepth;
        if ((bVar3 <= (pSVar20->klass->_2).typeHierarchyDepth) &&
           ((pSVar20->klass->_2).typeHierarchy[(ulong)bVar3 - 1] ==
            (Il2CppClass *)TypeInfo_Map_MapScriptReflectiveMaterial)) {
          pSVar10 = (__this->fields)._reflectColor;
          if (pSVar10 == (Settings_ColorSetting_o *)0x0) goto label_05d8c243;
          Settings_TypedSetting_object___set_Value
                    ((Settings_TypedSetting_T__o *)pSVar10,(*(uint64_t *)((char *)pSVar20 + 0x38)),
                     (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_Color255_set_Value);
        }
      }
    }
  }
  else {
    pSVar11 = pSVar20->klass;
    bVar3 = (pSVar11->_2).typeHierarchyDepth;
    bVar4 = (TypeInfo_Map_MapScriptLegacyMaterial->_2).typeHierarchyDepth;
    if (((bVar3 < bVar4) ||
        ((pSVar11->_2).typeHierarchy[(ulong)bVar4 - 1] != (Il2CppClass *)TypeInfo_Map_MapScriptLegacyMaterial)
        ) && ((bVar4 = (TypeInfo_Map_MapScriptDefaultTiledMaterial->_2).typeHierarchyDepth, bVar3 < bVar4 ||
              ((pSVar11->_2).typeHierarchy[(ulong)bVar4 - 1] !=
               (Il2CppClass *)TypeInfo_Map_MapScriptDefaultTiledMaterial)))) goto label_05d8ae28;
    pSVar9 = (__this->fields)._tilingX;
    if (pSVar9 == (Settings_FloatSetting_o *)0x0) goto label_05d8c243;
    Settings_TypedSetting_float___set_Value
              ((Settings_TypedSetting_float__o *)pSVar9,*(float *)&(*(uint64_t *)((char *)pSVar20 + 0x20)),
               (MethodInfo_42DA3B0 *)MethodInfo_Settings_TypedSetting_float_set_Value);
    pSVar9 = (__this->fields)._tilingY;
    if (pSVar9 == (Settings_FloatSetting_o *)0x0) goto label_05d8c243;
    Settings_TypedSetting_float___set_Value
              ((Settings_TypedSetting_float__o *)pSVar9,*(float *)((long)&(*(uint64_t *)((char *)pSVar20 + 0x20)) + 4),
               (MethodInfo_42DA3B0 *)MethodInfo_Settings_TypedSetting_float_set_Value);
  }
  __this_08 = (UI_MapEditorInspectPanel_o *)(__this->fields)._mapObjects;
  if (__this_08 != (UI_MapEditorInspectPanel_o *)0x0) {
    ppSVar24 = &(__this->fields)._mixedFields;
    index = 1;
    while (index < *(int *)&(__this_08->fields).m_CancellationTokenSource) {
      pMVar25 = System_Collections_Generic_List_object___get_Item
                          ((System_Collections_Generic_List_object__o *)__this_08,index,
                           (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_MapObject_get_Item
                          );
      if ((pMVar25 == (Map_MapObject_o *)0x0) ||
         (pMVar36 = (pMVar25->fields).ScriptObject, pMVar36 == (Map_MapScriptBaseObject_o *)0x0))
      goto label_05d8c243;
      bVar3 = (TypeInfo_Map_MapScriptSceneObject->_2).typeHierarchyDepth;
      if (((pMVar36->klass->_2).typeHierarchyDepth < bVar3) ||
         ((pMVar36->klass->_2).typeHierarchy[(ulong)bVar3 - 1] !=
          (Il2CppClass *)TypeInfo_Map_MapScriptSceneObject)) goto label_05d8c24b;
      pSVar20 = UI_MapEditorInspectPanel__SanitizeName(__this_08,(pMVar36->fields).Name,method_00);
      pSVar6 = (__this->fields)._name;
      if (pSVar6 == (Settings_StringSetting_o *)0x0) goto label_05d8c243;
      bVar19 = System_String__op_Inequality(pSVar20,(pSVar6->fields)._value,(MethodInfo *)0x0);
      if (bVar19) {
        if ((System_Collections_Generic_HashSet_object__o *)*ppSVar24 ==
            (System_Collections_Generic_HashSet_object__o *)0x0) goto label_05d8c243;
        System_Collections_Generic_HashSet_object___Add
                  ((System_Collections_Generic_HashSet_object__o *)*ppSVar24,
                   (Il2CppObject *)"Name",
                   (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
      }
      pSVar7 = (__this->fields)._active;
      if (pSVar7 == (Settings_BoolSetting_o *)0x0) goto label_05d8c243;
      if ((pMVar36->fields).Active != (pSVar7->fields)._value) {
        if ((System_Collections_Generic_HashSet_object__o *)*ppSVar24 ==
            (System_Collections_Generic_HashSet_object__o *)0x0) goto label_05d8c243;
        System_Collections_Generic_HashSet_object___Add
                  ((System_Collections_Generic_HashSet_object__o *)*ppSVar24,
                   (Il2CppObject *)"Active",
                   (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
      }
      pSVar7 = (__this->fields)._static;
      if (pSVar7 == (Settings_BoolSetting_o *)0x0) goto label_05d8c243;
      if ((pMVar36->fields).Static != (pSVar7->fields)._value) {
        if ((System_Collections_Generic_HashSet_object__o *)*ppSVar24 ==
            (System_Collections_Generic_HashSet_object__o *)0x0) goto label_05d8c243;
        System_Collections_Generic_HashSet_object___Add
                  ((System_Collections_Generic_HashSet_object__o *)*ppSVar24,
                   (Il2CppObject *)"Static",
                   (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
      }
      pSVar7 = (__this->fields)._networked;
      if (pSVar7 == (Settings_BoolSetting_o *)0x0) goto label_05d8c243;
      if ((pMVar36->fields).Networked != (pSVar7->fields)._value) {
        if ((System_Collections_Generic_HashSet_object__o *)*ppSVar24 ==
            (System_Collections_Generic_HashSet_object__o *)0x0) goto label_05d8c243;
        System_Collections_Generic_HashSet_object___Add
                  ((System_Collections_Generic_HashSet_object__o *)*ppSVar24,
                   (Il2CppObject *)"Networked",
                   (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
      }
      pSVar7 = (__this->fields)._visible;
      if (pSVar7 == (Settings_BoolSetting_o *)0x0) goto label_05d8c243;
      if ((pMVar36->fields).Visible != (pSVar7->fields)._value) {
        if ((System_Collections_Generic_HashSet_object__o *)*ppSVar24 ==
            (System_Collections_Generic_HashSet_object__o *)0x0) goto label_05d8c243;
        System_Collections_Generic_HashSet_object___Add
                  ((System_Collections_Generic_HashSet_object__o *)*ppSVar24,
                   (Il2CppObject *)"Visible",
                   (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
      }
      pSVar8 = (__this->fields)._parent;
      if (pSVar8 == (Settings_IntSetting_o *)0x0) goto label_05d8c243;
      if ((pMVar36->fields).Parent != (pSVar8->fields)._value) {
        if ((System_Collections_Generic_HashSet_object__o *)*ppSVar24 ==
            (System_Collections_Generic_HashSet_object__o *)0x0) goto label_05d8c243;
        System_Collections_Generic_HashSet_object___Add
                  ((System_Collections_Generic_HashSet_object__o *)*ppSVar24,
                   (Il2CppObject *)"Parent",
                   (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
      }
      UVar38 = Map_MapScriptBaseObject__GetPosition(pMVar36,(MethodInfo *)0x0);
      pSVar9 = (__this->fields)._positionX;
      if (pSVar9 == (Settings_FloatSetting_o *)0x0) goto label_05d8c243;
      pfVar1 = &(pSVar9->fields)._value;
      if ((UVar38.fields.x != *pfVar1) || (fVar37 = UVar38.fields.y, NAN(UVar38.fields.x) || NAN(*pfVar1))) {
        local_f8._8_4_ = extraout_XMM0_Dc;
        local_f8._0_8_ = UVar38.fields._0_8_;
        local_f8._12_4_ = extraout_XMM0_Dd;
        if ((System_Collections_Generic_HashSet_object__o *)*ppSVar24 ==
            (System_Collections_Generic_HashSet_object__o *)0x0) goto label_05d8c243;
        System_Collections_Generic_HashSet_object___Add
                  ((System_Collections_Generic_HashSet_object__o *)*ppSVar24,
                   (Il2CppObject *)"PositionX",
                   (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
        fVar37 = (float)local_f8._4_4_;
      }
      pSVar9 = (__this->fields)._positionY;
      if (pSVar9 == (Settings_FloatSetting_o *)0x0) goto label_05d8c243;
      pfVar1 = &(pSVar9->fields)._value;
      if ((fVar37 != *pfVar1) || (NAN(fVar37) || NAN(*pfVar1))) {
        if ((System_Collections_Generic_HashSet_object__o *)*ppSVar24 ==
            (System_Collections_Generic_HashSet_object__o *)0x0) goto label_05d8c243;
        System_Collections_Generic_HashSet_object___Add
                  ((System_Collections_Generic_HashSet_object__o *)*ppSVar24,
                   (Il2CppObject *)"PositionY",
                   (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
      }
      pSVar9 = (__this->fields)._positionZ;
      if (pSVar9 == (Settings_FloatSetting_o *)0x0) goto label_05d8c243;
      pfVar1 = &(pSVar9->fields)._value;
      if ((UVar38.fields.z != *pfVar1) || (NAN(UVar38.fields.z) || NAN(*pfVar1))) {
        if ((System_Collections_Generic_HashSet_object__o *)*ppSVar24 ==
            (System_Collections_Generic_HashSet_object__o *)0x0) goto label_05d8c243;
        System_Collections_Generic_HashSet_object___Add
                  ((System_Collections_Generic_HashSet_object__o *)*ppSVar24,
                   (Il2CppObject *)"PositionZ",
                   (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
      }
      UVar38 = Map_MapScriptBaseObject__GetRotation(pMVar36,(MethodInfo *)0x0);
      pSVar9 = (__this->fields)._rotationX;
      if (pSVar9 == (Settings_FloatSetting_o *)0x0) goto label_05d8c243;
      pfVar1 = &(pSVar9->fields)._value;
      if ((UVar38.fields.x != *pfVar1) || (fVar37 = UVar38.fields.y, NAN(UVar38.fields.x) || NAN(*pfVar1))) {
        local_f8._8_4_ = extraout_XMM0_Dc_00;
        local_f8._0_8_ = UVar38.fields._0_8_;
        local_f8._12_4_ = extraout_XMM0_Dd_00;
        if ((System_Collections_Generic_HashSet_object__o *)*ppSVar24 ==
            (System_Collections_Generic_HashSet_object__o *)0x0) goto label_05d8c243;
        System_Collections_Generic_HashSet_object___Add
                  ((System_Collections_Generic_HashSet_object__o *)*ppSVar24,
                   (Il2CppObject *)"RotationX",
                   (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
        fVar37 = (float)local_f8._4_4_;
      }
      pSVar9 = (__this->fields)._rotationY;
      if (pSVar9 == (Settings_FloatSetting_o *)0x0) goto label_05d8c243;
      pfVar1 = &(pSVar9->fields)._value;
      if ((fVar37 != *pfVar1) || (NAN(fVar37) || NAN(*pfVar1))) {
        if ((System_Collections_Generic_HashSet_object__o *)*ppSVar24 ==
            (System_Collections_Generic_HashSet_object__o *)0x0) goto label_05d8c243;
        System_Collections_Generic_HashSet_object___Add
                  ((System_Collections_Generic_HashSet_object__o *)*ppSVar24,
                   (Il2CppObject *)"RotationY",
                   (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
      }
      pSVar9 = (__this->fields)._rotationZ;
      if (pSVar9 == (Settings_FloatSetting_o *)0x0) goto label_05d8c243;
      pfVar1 = &(pSVar9->fields)._value;
      if ((UVar38.fields.z != *pfVar1) || (NAN(UVar38.fields.z) || NAN(*pfVar1))) {
        if ((System_Collections_Generic_HashSet_object__o *)*ppSVar24 ==
            (System_Collections_Generic_HashSet_object__o *)0x0) goto label_05d8c243;
        System_Collections_Generic_HashSet_object___Add
                  ((System_Collections_Generic_HashSet_object__o *)*ppSVar24,
                   (Il2CppObject *)"RotationZ",
                   (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
      }
      UVar38 = Map_MapScriptBaseObject__GetScale(pMVar36,(MethodInfo *)0x0);
      pSVar9 = (__this->fields)._scaleX;
      if (pSVar9 == (Settings_FloatSetting_o *)0x0) goto label_05d8c243;
      pfVar1 = &(pSVar9->fields)._value;
      if ((UVar38.fields.x != *pfVar1) || (fVar37 = UVar38.fields.y, NAN(UVar38.fields.x) || NAN(*pfVar1))) {
        local_f8._8_4_ = extraout_XMM0_Dc_01;
        local_f8._0_8_ = UVar38.fields._0_8_;
        local_f8._12_4_ = extraout_XMM0_Dd_01;
        if ((System_Collections_Generic_HashSet_object__o *)*ppSVar24 ==
            (System_Collections_Generic_HashSet_object__o *)0x0) goto label_05d8c243;
        System_Collections_Generic_HashSet_object___Add
                  ((System_Collections_Generic_HashSet_object__o *)*ppSVar24,
                   (Il2CppObject *)"ScaleX",
                   (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
        fVar37 = (float)local_f8._4_4_;
      }
      pSVar9 = (__this->fields)._scaleY;
      if (pSVar9 == (Settings_FloatSetting_o *)0x0) goto label_05d8c243;
      pfVar1 = &(pSVar9->fields)._value;
      if ((fVar37 != *pfVar1) || (NAN(fVar37) || NAN(*pfVar1))) {
        if ((System_Collections_Generic_HashSet_object__o *)*ppSVar24 ==
            (System_Collections_Generic_HashSet_object__o *)0x0) goto label_05d8c243;
        System_Collections_Generic_HashSet_object___Add
                  ((System_Collections_Generic_HashSet_object__o *)*ppSVar24,
                   (Il2CppObject *)"ScaleY",
                   (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
      }
      pSVar9 = (__this->fields)._scaleZ;
      if (pSVar9 == (Settings_FloatSetting_o *)0x0) goto label_05d8c243;
      pfVar1 = &(pSVar9->fields)._value;
      if ((UVar38.fields.z != *pfVar1) || (NAN(UVar38.fields.z) || NAN(*pfVar1))) {
        if ((System_Collections_Generic_HashSet_object__o *)*ppSVar24 ==
            (System_Collections_Generic_HashSet_object__o *)0x0) goto label_05d8c243;
        System_Collections_Generic_HashSet_object___Add
                  ((System_Collections_Generic_HashSet_object__o *)*ppSVar24,
                   (Il2CppObject *)"ScaleZ",
                   (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
      }
      pSVar6 = (__this->fields)._collideMode;
      if (pSVar6 == (Settings_StringSetting_o *)0x0) goto label_05d8c243;
      bVar19 = System_String__op_Inequality
                         ((System_String_o *)(*(uint64_t *)((char *)pMVar36 + 0x60)),(pSVar6->fields)._value,(MethodInfo *)0x0);
      if (bVar19) {
        if ((System_Collections_Generic_HashSet_object__o *)*ppSVar24 ==
            (System_Collections_Generic_HashSet_object__o *)0x0) goto label_05d8c243;
        System_Collections_Generic_HashSet_object___Add
                  ((System_Collections_Generic_HashSet_object__o *)*ppSVar24,
                   (Il2CppObject *)"CollideMode",
                   (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
      }
      pSVar6 = (__this->fields)._collideWith;
      if (pSVar6 == (Settings_StringSetting_o *)0x0) goto label_05d8c243;
      bVar19 = System_String__op_Inequality((*(uint64_t *)((char *)pMVar36 + 0x68)),(pSVar6->fields)._value,(MethodInfo *)0x0);
      if (bVar19) {
        if ((System_Collections_Generic_HashSet_object__o *)*ppSVar24 ==
            (System_Collections_Generic_HashSet_object__o *)0x0) goto label_05d8c243;
        System_Collections_Generic_HashSet_object___Add
                  ((System_Collections_Generic_HashSet_object__o *)*ppSVar24,
                   (Il2CppObject *)"CollideWith",
                   (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
      }
      pSVar6 = (__this->fields)._physicsMaterial;
      if (pSVar6 == (Settings_StringSetting_o *)0x0) goto label_05d8c243;
      bVar19 = System_String__op_Inequality((*(uint64_t *)((char *)pMVar36 + 0x70)),(pSVar6->fields)._value,(MethodInfo *)0x0);
      if (bVar19) {
        if ((System_Collections_Generic_HashSet_object__o *)*ppSVar24 ==
            (System_Collections_Generic_HashSet_object__o *)0x0) goto label_05d8c243;
        System_Collections_Generic_HashSet_object___Add
                  ((System_Collections_Generic_HashSet_object__o *)*ppSVar24,
                   (Il2CppObject *)"PhysicsMaterial",
                   (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
      }
      pSVar20 = (*(uint64_t *)((char *)pMVar36 + 0x78));
      if ((pSVar20 == (System_String_o *)0x0) ||
         (pSVar6 = (__this->fields)._shader, pSVar6 == (Settings_StringSetting_o *)0x0)) goto label_05d8c243;
      bVar19 = System_String__op_Inequality
                         ((System_String_o *)pSVar20->fields,(pSVar6->fields)._value,(MethodInfo *)0x0);
      if (bVar19) {
        if ((System_Collections_Generic_HashSet_object__o *)*ppSVar24 ==
            (System_Collections_Generic_HashSet_object__o *)0x0) goto label_05d8c243;
        System_Collections_Generic_HashSet_object___Add
                  ((System_Collections_Generic_HashSet_object__o *)*ppSVar24,
                   (Il2CppObject *)"Shader",
                   (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
      }
      pSVar20 = (*(uint64_t *)((char *)pMVar36 + 0x78));
      if ((pSVar20 == (System_String_o *)0x0) ||
         (pSVar10 = (__this->fields)._color, pSVar10 == (Settings_ColorSetting_o *)0x0)) goto label_05d8c243;
      pSVar11 = (*(uint64_t *)((char *)pSVar20 + 0x18));
      pUVar21 = (pSVar10->fields)._value;
      if ((TypeInfo_UI_MapEditorInspectPanel->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel);
      }
      if ((pSVar11 == (System_String_c *)0x0) || (pUVar21 == (Utility_Color255_o *)0x0)) goto label_05d8c243;
      if ((*(int *)&(pSVar11->_1).name != (pUVar21->fields).R) ||
         (((*(int *)((long)&(pSVar11->_1).name + 4) != (pUVar21->fields).G ||
           (*(int *)&(pSVar11->_1).namespaze != (pUVar21->fields).B)) ||
          (*(int *)((long)&(pSVar11->_1).namespaze + 4) != (pUVar21->fields).A)))) {
        if ((System_Collections_Generic_HashSet_object__o *)*ppSVar24 ==
            (System_Collections_Generic_HashSet_object__o *)0x0) goto label_05d8c243;
        System_Collections_Generic_HashSet_object___Add
                  ((System_Collections_Generic_HashSet_object__o *)*ppSVar24,
                   (Il2CppObject *)"Color",
                   (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
      }
      index = index + 1;
      __this_08 = (UI_MapEditorInspectPanel_o *)(__this->fields)._mapObjects;
      if (__this_08 == (UI_MapEditorInspectPanel_o *)0x0) goto label_05d8c243;
    }
    if ((System_Collections_Generic_HashSet_object__o *)*ppSVar24 !=
        (System_Collections_Generic_HashSet_object__o *)0x0) {
      bVar19 = System_Collections_Generic_HashSet_object___Contains
                         ((System_Collections_Generic_HashSet_object__o *)*ppSVar24,
                          (Il2CppObject *)"Name",
                          (MethodInfo_4FB3720 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains)
      ;
      if (bVar19) {
        pSVar6 = (__this->fields)._name;
        if (pSVar6 == (Settings_StringSetting_o *)0x0) goto label_05d8c243;
        Settings_TypedSetting_object___set_Value
                  ((Settings_TypedSetting_T__o *)pSVar6,(Il2CppObject *)"--",
                   (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
      }
      if ((System_Collections_Generic_HashSet_object__o *)*ppSVar24 !=
          (System_Collections_Generic_HashSet_object__o *)0x0) {
        bVar19 = System_Collections_Generic_HashSet_object___Contains
                           ((System_Collections_Generic_HashSet_object__o *)*ppSVar24,
                            (Il2CppObject *)"Texture",
                            (MethodInfo_4FB3720 *)
                            MethodInfo_System_Collections_Generic_HashSet_string_Contains);
        if (bVar19) {
          pSVar6 = (__this->fields)._texture;
          if (pSVar6 == (Settings_StringSetting_o *)0x0) goto label_05d8c243;
          Settings_TypedSetting_object___set_Value
                    ((Settings_TypedSetting_T__o *)pSVar6,(Il2CppObject *)"--",
                     (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
        }
        pSVar26 = il2cpp_codegen_object_new
                            ((Il2CppClass *)
                             TypeInfo_System_Collections_Generic_List_Dictionary_string_BaseSetting);
        System_Collections_Generic_List_object____ctor
                  ((System_Collections_Generic_List_object__o *)pSVar26,
                   (MethodInfo_395C910 *)
                   MethodInfo_System_Collections_Generic_List_Dictionary_string_BaseSetting_ctor);
        local_60 = &(__this->fields)._components;
        (__this->fields)._components = pSVar26;
        Il2CppCodeGenWriteBarrier(local_60);
        pSVar27 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
        System_Collections_Generic_List_object____ctor
                  ((System_Collections_Generic_List_object__o *)pSVar27,
                   (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
        local_58 = &(__this->fields)._componentNames;
        (__this->fields)._componentNames = pSVar27;
        Il2CppCodeGenWriteBarrier(local_58);
        pMVar25 = (__this->fields)._mapObject;
        if ((pMVar25 != (Map_MapObject_o *)0x0) &&
           (pMVar36 = (pMVar25->fields).ScriptObject, pMVar36 != (Map_MapScriptBaseObject_o *)0x0)) {
          bVar3 = (TypeInfo_Map_MapScriptSceneObject->_2).typeHierarchyDepth;
          if (((pMVar36->klass->_2).typeHierarchyDepth < bVar3) ||
             ((pMVar36->klass->_2).typeHierarchy[(ulong)bVar3 - 1] !=
              (Il2CppClass *)TypeInfo_Map_MapScriptSceneObject)) {
label_05d8c24b:
            il2cpp_codegen_raise_invalid_cast_exception(pMVar36);
          }
          __this_00 = *(System_Collections_Generic_List_object__o **)&(*(uint32_t *)((char *)pMVar36 + 0x80));
          if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
            System_Collections_Generic_List_object___GetEnumerator
                      ((System_Collections_Generic_List_Enumerator_T__o *)local_88,__this_00,
                       (MethodInfo_395E050 *)
                       MethodInfo_System_Collections_Generic_List_MapScriptComponent_GetEnumerator);
            local_c8 = local_78;
            local_d8 = (undefined1  [8])local_88._0_8_;
            uStack_d0 = (undefined1 *)local_88._8_8_;
            local_40 = 0;
            local_38 = local_d8;
            goto label_05d8b960;
          }
        }
      }
    }
  }
label_05d8c243:
  ThrowNullReferenceException();
label_05d8c075:
  if (local_100 != (Il2CppObject *)0x0) {
    pIVar16 = local_100->klass;
    uVar33 = (ulong)(pIVar16->_2).interface_offsets_count;
    if (uVar33 != 0) {
      pIVar17 = (pIVar16->_1).interfaceOffsets;
      lVar35 = 0;
      do {
        if (*(System_IDisposable_c **)((long)&pIVar17->interfaceType + lVar35) == TypeInfo_System_IDisposable)
        {
          pVVar31 = pIVar16->vtable + *(int *)((long)&pIVar17->offset + lVar35);
          goto label_05d8c0dd;
        }
        lVar35 = lVar35 + 0x10;
      } while (uVar33 * 0x10 != lVar35);
    }
    pVVar31 = GetInterfaceInvokeDataFromVTableSlowPath(local_100,(Il2CppClass *)TypeInfo_System_IDisposable,0)
    ;
label_05d8c0dd:
    (*pVVar31->methodPtr)(pIVar30,pVVar31->method);
  }
label_05d8b960:
  do {
    bVar19 = System_Collections_Generic_List_Enumerator_object___MoveNext
                       ((System_Collections_Generic_List_Enumerator_object__o *)local_d8,
                        (MethodInfo_4C45C50 *)
                        MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptComponent_MoveNext);
    if (!bVar19) {
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((System_Collections_Generic_List_Enumerator_object__o *)local_d8,
                 (MethodInfo_4C45C40 *)
                 MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptComponent_Dispose);
      (*(__this->klass->vtable)._23_SyncSettingElements.methodPtr)
                (__this,(__this->klass->vtable)._23_SyncSettingElements.method);
      return;
    }
    __this_02 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel_c__DisplayClass95_0);
    UI_MapEditorInspectPanel___c__DisplayClass95_0___ctor(__this_02,(MethodInfo *)0x0);
    if (__this_02 == (UI_MapEditorInspectPanel___c__DisplayClass95_0_o *)0x0) {
      ThrowNullReferenceException();
    }
    targetAddress = &__this_02->fields;
    (__this_02->fields).component = local_c8;
    local_e0 = __this_02;
    Il2CppCodeGenWriteBarrier(&targetAddress->component);
    pSVar28 = System_Linq_Enumerable__Skip_object_
                        ((System_Collections_Generic_IEnumerable_TSource__o *)(__this->fields)._mapObjects,1,
                         (MethodInfo_34FD7B0 *)MethodInfo_System_Linq_Enumerable_Skip_MapObject);
    __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_MapObject_bool);
    System_Func_object__bool____ctor
              ((System_Func_object__bool__o *)__this_03,(Il2CppObject *)local_e0,
               (intptr_t)MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass95_0_SyncSettings_b__0,
               (MethodInfo_4F19300 *)0x0);
    bVar19 = System_Linq_Enumerable__All_object_
                       (pSVar28,(System_Func_TSource__bool__o *)__this_03,
                        (MethodInfo_34DEBD0 *)MethodInfo_System_Linq_Enumerable_All_MapObject);
    pMVar34 = MethodInfo_System_Collections_Generic_List_string_Add;
  } while (!bVar19);
  if (targetAddress->component == (Map_MapScriptComponent_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar27 = *local_58;
  if (pSVar27 != (System_Collections_Generic_List_string__o *)0x0) {
    pSVar20 = (targetAddress->component->fields).ComponentName;
    piVar2 = &(pSVar27->fields)._version;
    *piVar2 = *piVar2 + 1;
    pSVar12 = (pSVar27->fields)._items;
    if (pSVar12 != (System_String_array *)0x0) {
      uVar5 = (pSVar27->fields)._size;
      if (uVar5 < (uint)pSVar12->max_length) {
        (pSVar27->fields)._size = uVar5 + 1;
        pSVar12->m_Items[(int)uVar5] = pSVar20;
        Il2CppCodeGenWriteBarrier(pSVar12->m_Items + (int)uVar5);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar27,(Il2CppObject *)pSVar20,
                   (MethodInfo_395D230 *)pMVar34->klass->rgctx_data[0xe].method);
      }
      pGVar13 = (__this->fields)._gameManager;
      if (pGVar13 == (GameManagers_MapEditorGameManager_o *)0x0) {
        ThrowNullReferenceException();
      }
      pMVar32 = targetAddress->component;
      if (pMVar32 == (Map_MapScriptComponent_o *)0x0) {
        ThrowNullReferenceException();
      }
      pCVar14 = (pGVar13->fields).LogicEvaluator;
      if (pCVar14 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar29 = CustomLogic_CustomLogicEvaluator__GetComponentSettings
                          (pCVar14,(pMVar32->fields).ComponentName,(pMVar32->fields).Parameters,
                           (MethodInfo *)0x0);
      pMVar34 = MethodInfo_System_Collections_Generic_List_Dictionary_string_BaseSetting_Add;
      pSVar26 = *local_60;
      if (pSVar26 != (System_Collections_Generic_List_Dictionary_string__BaseSetting___o *)0x0) {
        piVar2 = &(pSVar26->fields)._version;
        *piVar2 = *piVar2 + 1;
        pSVar15 = (pSVar26->fields)._items;
        if (pSVar15 != (System_Collections_Generic_Dictionary_string__BaseSetting__array *)0x0) {
          uVar5 = (pSVar26->fields)._size;
          if (uVar5 < (uint)pSVar15->max_length) {
            (pSVar26->fields)._size = uVar5 + 1;
            pSVar15->m_Items[(int)uVar5] = pSVar29;
            Il2CppCodeGenWriteBarrier(pSVar15->m_Items + (int)uVar5);
            pMVar34 = extraout_RDX_00;
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar26,(Il2CppObject *)pSVar29,
                       (MethodInfo_395D230 *)pMVar34->klass->rgctx_data[0xe].method);
            pMVar34 = extraout_RDX_01;
          }
          __this_04 = UI_MapEditorInspectPanel__SerializeComponentFields(__this,pSVar29,pMVar34);
          pIVar30 = (Il2CppObject *)
                    System_Linq_Enumerable__Skip_object_
                              ((System_Collections_Generic_IEnumerable_TSource__o *)
                               (__this->fields)._mapObjects,1,
                               (MethodInfo_34FD7B0 *)MethodInfo_System_Linq_Enumerable_Skip_MapObject);
          if (pIVar30 == (Il2CppObject *)0x0) {
            ThrowNullReferenceException();
          }
          pIVar16 = pIVar30->klass;
          uVar33 = (ulong)(pIVar16->_2).interface_offsets_count;
          if (uVar33 != 0) {
            pIVar17 = (pIVar16->_1).interfaceOffsets;
            lVar35 = 0;
            do {
              if (*(System_Collections_Generic_IEnumerable_MapObject__c **)
                   ((long)&pIVar17->interfaceType + lVar35) ==
                  TypeInfo_System_Collections_Generic_IEnumerable_MapObject) {
                pVVar31 = pIVar16->vtable + *(int *)((long)&pIVar17->offset + lVar35);
                goto label_05d8bbf1;
              }
              lVar35 = lVar35 + 0x10;
            } while (uVar33 * 0x10 != lVar35);
          }
          pVVar31 = GetInterfaceInvokeDataFromVTableSlowPath
                              (pIVar30,(Il2CppClass *)
                                       TypeInfo_System_Collections_Generic_IEnumerable_MapObject,0);
label_05d8bbf1:
          local_100 = (*pVVar31->methodPtr)(pIVar30,pVVar31->method);
          local_50 = 0;
          local_48 = &local_100;
          if (local_100 == (Il2CppObject *)0x0) {
label_05d8c10f:
            ThrowNullReferenceException();
          }
          targetAddress_00 = &(local_e0->fields).__9__2;
          local_f8._0_8_ = __this_04;
          do {
            pIVar30 = local_100;
            pIVar16 = local_100->klass;
            uVar33 = (ulong)(pIVar16->_2).interface_offsets_count;
            if (uVar33 != 0) {
              pIVar17 = (pIVar16->_1).interfaceOffsets;
              lVar35 = 0;
              do {
                if (*(System_Collections_IEnumerator_c **)((long)&pIVar17->interfaceType + lVar35) ==
                    TypeInfo_System_Collections_IEnumerator) {
                  pVVar31 = pIVar16->vtable + *(int *)((long)&pIVar17->offset + lVar35);
                  goto label_05d8bcb3;
                }
                lVar35 = lVar35 + 0x10;
              } while (uVar33 * 0x10 != lVar35);
            }
            pVVar31 = GetInterfaceInvokeDataFromVTableSlowPath
                                (local_100,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_05d8bcb3:
            bVar19 = (*pVVar31->methodPtr)(pIVar30,pVVar31->method);
            pIVar30 = local_100;
            if (!bVar19) goto label_05d8c075;
            if (local_100 == (Il2CppObject *)0x0) {
              ThrowNullReferenceException();
            }
            pIVar16 = local_100->klass;
            uVar33 = (ulong)(pIVar16->_2).interface_offsets_count;
            if (uVar33 != 0) {
              pIVar17 = (pIVar16->_1).interfaceOffsets;
              lVar35 = 0;
              do {
                if (*(System_Collections_Generic_IEnumerator_MapObject__c **)
                     ((long)&pIVar17->interfaceType + lVar35) ==
                    TypeInfo_System_Collections_Generic_IEnumerator_MapObject) {
                  pVVar31 = pIVar16->vtable + *(int *)((long)&pIVar17->offset + lVar35);
                  goto label_05d8bd33;
                }
                lVar35 = lVar35 + 0x10;
              } while (uVar33 * 0x10 != lVar35);
            }
            pVVar31 = GetInterfaceInvokeDataFromVTableSlowPath
                                (local_100,
                                 (Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_MapObject,0);
label_05d8bd33:
            pIVar30 = (*pVVar31->methodPtr)(pIVar30,pVVar31->method);
            if (pIVar30 == (Il2CppObject *)0x0) {
              ThrowNullReferenceException();
            }
            pIVar16 = pIVar30[2].klass;
            if (pIVar16 == (Il2CppClass *)0x0) {
              ThrowNullReferenceException();
            }
            pvVar18 = (pIVar16->_1).image;
            bVar3 = (TypeInfo_Map_MapScriptSceneObject->_2).typeHierarchyDepth;
            if ((*(byte *)((long)pvVar18 + 0x130) < bVar3) ||
               (*(Map_MapScriptSceneObject_c **)(*(long *)((long)pvVar18 + 200) + -8 + (ulong)bVar3 * 8) !=
                TypeInfo_Map_MapScriptSceneObject)) {
              il2cpp_codegen_raise_invalid_cast_exception();
            }
            pSVar28 = (pIVar16->_1).fields;
            __this_05 = *targetAddress_00;
            if (__this_05 == (System_Func_MapScriptComponent__bool__o *)0x0) {
              __this_05 = il2cpp_codegen_object_new
                                    ((Il2CppClass *)TypeInfo_System_Func_MapScriptComponent_bool);
              System_Func_object__bool____ctor
                        ((System_Func_object__bool__o *)__this_05,(Il2CppObject *)local_e0,
                         (intptr_t)MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass95_0_SyncSettings_b__2,
                         (MethodInfo_4F19300 *)0x0);
              *targetAddress_00 = __this_05;
              Il2CppCodeGenWriteBarrier(targetAddress_00);
            }
            pMVar32 = System_Linq_Enumerable__First_object__34eb960
                                (pSVar28,(System_Func_TSource__bool__o *)__this_05,
                                 (MethodInfo_34EB960 *)
                                 MethodInfo_System_Linq_Enumerable_First_MapScriptComponent);
            pGVar13 = (__this->fields)._gameManager;
            if (pGVar13 == (GameManagers_MapEditorGameManager_o *)0x0) {
              ThrowNullReferenceException();
            }
            if (targetAddress->component == (Map_MapScriptComponent_o *)0x0) {
              ThrowNullReferenceException();
            }
            if (pMVar32 == (Map_MapScriptComponent_o *)0x0) {
              ThrowNullReferenceException();
            }
            pCVar14 = (pGVar13->fields).LogicEvaluator;
            if (pCVar14 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
              ThrowNullReferenceException();
            }
            pSVar29 = CustomLogic_CustomLogicEvaluator__GetComponentSettings
                                (pCVar14,(targetAddress->component->fields).ComponentName,
                                 (pMVar32->fields).Parameters,(MethodInfo *)0x0);
            __this_06 = UI_MapEditorInspectPanel__SerializeComponentFields(__this,pSVar29,method_01);
            if (__this_04 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) {
              ThrowNullReferenceException();
            }
            System_Collections_Generic_Dictionary_object__object___GetEnumerator
                      ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)local_88,
                       (System_Collections_Generic_Dictionary_object__object__o *)__this_04,
                       (MethodInfo_4AAD970 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_string_GetEnumerator);
            local_98._0_4_ = local_68;
            local_98._4_4_ = uStack_64;
            local_a8 = local_78;
            pSStack_a0 = pSStack_70;
            local_b8 = (undefined1  [8])local_88._0_8_;
            puStack_b0 = (undefined1 *)local_88._8_8_;
            local_88._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
            local_88._8_8_ = local_b8;
            if (__this_06 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) {
              bVar19 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                                 ((System_Collections_Generic_Dictionary_Enumerator_object__object__o *)
                                  local_b8,(MethodInfo_4CE66D0 *)
                                           MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_string_MoveNext
                                 );
              if (bVar19) {
                ThrowNullReferenceException();
              }
            }
            else {
              while( true ) {
                bVar19 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                                   ((System_Collections_Generic_Dictionary_Enumerator_object__object__o *)
                                    local_b8,(MethodInfo_4CE66D0 *)
                                             MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_string_MoveNext
                                   );
                pSVar20 = pSStack_a0;
                pMVar32 = local_a8;
                if (!bVar19) break;
                bVar19 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                                   ((System_Collections_Generic_Dictionary_object__object__o *)__this_06,
                                    (Il2CppObject *)local_a8,(Il2CppObject **)&local_c0,
                                    (MethodInfo_4AAF440 *)
                                    MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue
                                   );
                if ((!bVar19) ||
                   (bVar19 = System_String__op_Inequality(local_c0,pSVar20,(MethodInfo *)0x0), bVar19)) {
                  if (targetAddress->component == (Map_MapScriptComponent_o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  __this_01 = (System_Collections_Generic_HashSet_object__o *)*ppSVar24;
                  pSVar20 = (targetAddress->component->fields).ComponentName;
                  if ((TypeInfo_UI_MapEditorInspectPanel->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel);
                  }
                  if (Il2CppMethodInitialized_07548009 == '\0') {
                    il2cpp_codegen_initialize_runtime_metadata(&":");
                    il2cpp_codegen_initialize_runtime_metadata(&"Component:");
                    Il2CppMethodInitialized_07548009 = '\x01';
                  }
                  pSVar20 = System_String__Concat_5302810
                                      ("Component:",pSVar20,":",
                                       (System_String_o *)pMVar32,(MethodInfo *)0x0);
                  if (__this_01 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  System_Collections_Generic_HashSet_object___Add
                            (__this_01,(Il2CppObject *)pSVar20,
                             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
                }
              }
            }
            System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                      ((System_Collections_Generic_Dictionary_Enumerator_object__object__o *)local_b8,
                       (MethodInfo_4CE67F0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_string_Dispose);
            __this_04 = (System_Collections_Generic_Dictionary_string__string__o *)local_f8._0_8_;
            if (local_100 == (Il2CppObject *)0x0) goto label_05d8c10f;
          } while( true );
        }
      }
      ThrowNullReferenceException();
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel$$ColorEquals
// il2cpp: bool UI_MapEditorInspectPanel__ColorEquals (Utility_Color255_o* a, Utility_Color255_o* b, const MethodInfo* method);
// 0x5d8f8b0

bool UI_MapEditorInspectPanel__ColorEquals(Utility_Color255_o *a,Utility_Color255_o *b,MethodInfo *method)

{
  if ((a == (Utility_Color255_o *)0x0) || (b == (Utility_Color255_o *)0x0)) {
    ThrowNullReferenceException();
  }
  if ((((a->fields).R == (b->fields).R) && ((a->fields).G == (b->fields).G)) &&
     ((a->fields).B == (b->fields).B)) {
    return (a->fields).A == (b->fields).A;
  }
  return false;
}


// UI.MapEditorInspectPanel$$WithMixedOption
// il2cpp: System_String_array* UI_MapEditorInspectPanel__WithMixedOption (UI_MapEditorInspectPanel_o* __this, System_String_array* options, System_String_o* fieldKey, Settings_StringSetting_o* setting, const MethodInfo* method);
// 0x5d8c350

System_String_array *
UI_MapEditorInspectPanel__WithMixedOption
          (UI_MapEditorInspectPanel_o *__this,System_String_array *options,System_String_o *fieldKey,
          Settings_StringSetting_o *setting,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  bool bVar1;
  System_Collections_Generic_List_string__o *__this_01;
  System_String_array *pSVar2;
  
  if (Il2CppMethodInitialized_0754802a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Insert);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_ctor_7196948);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"--");
    Il2CppMethodInitialized_0754802a = '\x01';
  }
  __this_00 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._mixedFields;
  if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    bVar1 = System_Collections_Generic_HashSet_object___Contains
                      (__this_00,(Il2CppObject *)fieldKey,
                       (MethodInfo_4FB3720 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
    if (!bVar1) {
      return options;
    }
    if (setting != (Settings_StringSetting_o *)0x0) {
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)setting,(Il2CppObject *)"--",
                 (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
      System_Collections_Generic_List_object____ctor_395ca70
                ((System_Collections_Generic_List_object__o *)__this_01,
                 (System_Collections_Generic_IEnumerable_T__o *)options,
                 (MethodInfo_395CA70 *)MethodInfo_System_Collections_Generic_List_string_ctor_7196948);
      if (__this_01 != (System_Collections_Generic_List_string__o *)0x0) {
        System_Collections_Generic_List_object___Insert
                  ((System_Collections_Generic_List_object__o *)__this_01,0,
                   (Il2CppObject *)"--",
                   (MethodInfo_395E3E0 *)MethodInfo_System_Collections_Generic_List_string_Insert);
        pSVar2 = (System_String_array *)
                 System_Collections_Generic_List_object___ToArray
                           ((System_Collections_Generic_List_object__o *)__this_01,
                            (MethodInfo_395F5A0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
        return pSVar2;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel$$CaptureSyncedValues
// il2cpp: void UI_MapEditorInspectPanel__CaptureSyncedValues (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x5d8d920
// eh: try 0x5d8e9aa..0x5d8eb2e -> pad 0x5d8eb3c (+7 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5d8eb56..0x5d8eb5b -> pad 0x5d8eb94 cleanup
// eh: try 0x5d8eb97..0x5d8eba1 -> pad 0x5d8eba9 catch (...) [compiler noexcept guard]
// asm: 32 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d8e8dc: nop dword ptr [rax]
// asm:   0x5d8eb20: jmp 0x5d8eb8f
// asm:   0x5d8eb30: jmp 0x5d8eb3e
// asm:   0x5d8eb32: jmp 0x5d8eb3e
// asm:   0x5d8eb34: jmp 0x5d8eb3e
// asm:   0x5d8eb36: jmp 0x5d8eb3e
// asm:   0x5d8eb38: jmp 0x5d8eb3e
// asm:   0x5d8eb3a: jmp 0x5d8eb3e
// asm:   0x5d8eb3c: jmp 0x5d8eb3e
// asm:   0x5d8eb3e: mov r14, rax
// asm:   0x5d8eb41: cmp edx, 1
// asm:   0x5d8eb44: jne 0x5d8eb97
// asm:   0x5d8eb46: mov rdi, r14
// asm:   0x5d8eb49: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d8eb4e: mov r14, qword ptr [rax]
// asm:   0x5d8eb51: mov qword ptr [rsp + 0x30], r14
// asm:   0x5d8eb56: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d8eb5b: lea rax, [rip + 0x14fff96]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose
// asm:   0x5d8eb62: mov rsi, qword ptr [rax]
// asm:   0x5d8eb65: lea rdi, [rsp + 0x10]
// asm:   0x5d8eb6a: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5d8eb6f: test r14, r14
// asm:   0x5d8eb72: je 0x5d8eab4
// asm:   0x5d8eb78: mov rdi, r14
// asm:   0x5d8eb7b: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d8eb94: mov r14, rax
// asm:   0x5d8eb97: lea rdi, [rsp + 0x30]
// asm:   0x5d8eb9c: call 0x2fdd6d0  ; il2cpp_runtime_helper_02fdd6d0()
// asm:   0x5d8eba1: mov rdi, r14
// asm:   0x5d8eba4: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5d8eba9: mov rdi, rax
// asm:   0x5d8ebac: call 0x2ab61e0  ; __clang_call_terminate()

void UI_MapEditorInspectPanel__CaptureSyncedValues(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  System_Collections_Generic_HashSet_object__o *pSVar3;
  Settings_BoolSetting_o *pSVar4;
  Settings_IntSetting_o *pSVar5;
  Settings_FloatSetting_o *pSVar6;
  System_Collections_Generic_List_Dictionary_string__BaseSetting___o *__this_00;
  bool bVar7;
  System_String_o *pSVar8;
  System_Collections_Generic_List_string__o *pSVar9;
  System_Collections_Generic_Dictionary_string__BaseSetting__o *settings;
  System_Collections_Generic_Dictionary_string__string__o *__this_01;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *source;
  System_Collections_Generic_List_TSource__o *__this_02;
  System_String_o *pSVar10;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  UI_MapEditorInspectPanel_o *__this_03;
  UI_MapEditorInspectPanel_o *__this_04;
  int32_t index;
  bool local_71;
  float local_70;
  int32_t local_6c;
  undefined1 local_68 [8];
  undefined1 *puStack_60;
  System_String_o *local_58;
  System_Collections_Generic_Dictionary_string__string__o *local_50;
  undefined1 local_48 [16];
  System_String_o *local_38;
  
  if (Il2CppMethodInitialized_0754802b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_string_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_get_Keys);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_string_set_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToList_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Dictionary_string_BaseSetting_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorInspectPanel);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"OffsetY");
    il2cpp_codegen_initialize_runtime_metadata(&"TilingX");
    il2cpp_codegen_initialize_runtime_metadata(&"CollideMode");
    il2cpp_codegen_initialize_runtime_metadata(&"Color");
    il2cpp_codegen_initialize_runtime_metadata(&"ReflectColor");
    il2cpp_codegen_initialize_runtime_metadata(&"R");
    il2cpp_codegen_initialize_runtime_metadata(&"ScaleY");
    il2cpp_codegen_initialize_runtime_metadata(&"RotationZ");
    il2cpp_codegen_initialize_runtime_metadata(&"Networked");
    il2cpp_codegen_initialize_runtime_metadata(&"TilingY");
    il2cpp_codegen_initialize_runtime_metadata(&"Name");
    il2cpp_codegen_initialize_runtime_metadata(&"--");
    il2cpp_codegen_initialize_runtime_metadata(&"RotationY");
    il2cpp_codegen_initialize_runtime_metadata(&"Visible");
    il2cpp_codegen_initialize_runtime_metadata(&"Texture");
    il2cpp_codegen_initialize_runtime_metadata(&"RotationX");
    il2cpp_codegen_initialize_runtime_metadata(&"PositionZ");
    il2cpp_codegen_initialize_runtime_metadata(&"Active");
    il2cpp_codegen_initialize_runtime_metadata(&"Parent");
    il2cpp_codegen_initialize_runtime_metadata(&"ScaleX");
    il2cpp_codegen_initialize_runtime_metadata(&"OffsetX");
    il2cpp_codegen_initialize_runtime_metadata(&"Shader");
    il2cpp_codegen_initialize_runtime_metadata(&"Static");
    il2cpp_codegen_initialize_runtime_metadata(&"ScaleZ");
    il2cpp_codegen_initialize_runtime_metadata(&"PositionY");
    il2cpp_codegen_initialize_runtime_metadata(&"CollideWith");
    il2cpp_codegen_initialize_runtime_metadata(&"PositionX");
    il2cpp_codegen_initialize_runtime_metadata(&"PhysicsMaterial");
    Il2CppMethodInitialized_0754802b = '\x01';
  }
  local_71 = false;
  local_6c = 0;
  local_70 = 0.0;
  local_68 = (undefined1  [8])0x0;
  puStack_60 = (undefined1 *)0x0;
  local_58 = (System_String_o *)0x0;
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._syncedSerialized;
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___Clear
              (pSVar1,(MethodInfo_4AAD690 *)
                      MethodInfo_System_Collections_Generic_Dictionary_string_string_Clear);
    pSVar2 = (__this->fields)._name;
    if ((pSVar2 != (Settings_StringSetting_o *)0x0) &&
       (pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._syncedSerialized
       , pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
      System_Collections_Generic_Dictionary_object__object___set_Item
                (pSVar1,(Il2CppObject *)"Name",(Il2CppObject *)(pSVar2->fields)._value,
                 (MethodInfo_4AAD4C0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item
                );
      pSVar3 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._mixedFields;
      if (pSVar3 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._syncedSerialized
        ;
        bVar7 = System_Collections_Generic_HashSet_object___Contains
                          (pSVar3,(Il2CppObject *)"Active",
                           (MethodInfo_4FB3720 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains
                          );
        pSVar8 = "Active";
        if (bVar7) {
          pSVar10 = "--";
        }
        else {
          pSVar4 = (__this->fields)._active;
          if (pSVar4 == (Settings_BoolSetting_o *)0x0) goto label_05d8eb8f;
          local_71 = (pSVar4->fields)._value;
          if ((g_data_075566f0->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init(g_data_075566f0);
          }
          pSVar10 = System_Boolean__ToString(&local_71,(MethodInfo *)0x0);
        }
        if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary_object__object___set_Item
                    (pSVar1,(Il2CppObject *)pSVar8,(Il2CppObject *)pSVar10,
                     (MethodInfo_4AAD4C0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
          pSVar3 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._mixedFields;
          if (pSVar3 != (System_Collections_Generic_HashSet_object__o *)0x0) {
            pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                     (__this->fields)._syncedSerialized;
            bVar7 = System_Collections_Generic_HashSet_object___Contains
                              (pSVar3,(Il2CppObject *)"Static",
                               (MethodInfo_4FB3720 *)
                               MethodInfo_System_Collections_Generic_HashSet_string_Contains);
            pSVar8 = "Static";
            if (bVar7) {
              pSVar10 = "--";
            }
            else {
              pSVar4 = (__this->fields)._static;
              if (pSVar4 == (Settings_BoolSetting_o *)0x0) goto label_05d8eb8f;
              local_71 = (pSVar4->fields)._value;
              if ((g_data_075566f0->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init(g_data_075566f0);
              }
              pSVar10 = System_Boolean__ToString(&local_71,(MethodInfo *)0x0);
            }
            if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              System_Collections_Generic_Dictionary_object__object___set_Item
                        (pSVar1,(Il2CppObject *)pSVar8,(Il2CppObject *)pSVar10,
                         (MethodInfo_4AAD4C0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
              pSVar3 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._mixedFields;
              if (pSVar3 != (System_Collections_Generic_HashSet_object__o *)0x0) {
                pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                         (__this->fields)._syncedSerialized;
                bVar7 = System_Collections_Generic_HashSet_object___Contains
                                  (pSVar3,(Il2CppObject *)"Networked",
                                   (MethodInfo_4FB3720 *)
                                   MethodInfo_System_Collections_Generic_HashSet_string_Contains);
                pSVar8 = "Networked";
                if (bVar7) {
                  pSVar10 = "--";
                }
                else {
                  pSVar4 = (__this->fields)._networked;
                  if (pSVar4 == (Settings_BoolSetting_o *)0x0) goto label_05d8eb8f;
                  local_71 = (pSVar4->fields)._value;
                  if ((g_data_075566f0->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init(g_data_075566f0);
                  }
                  pSVar10 = System_Boolean__ToString(&local_71,(MethodInfo *)0x0);
                }
                if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                  System_Collections_Generic_Dictionary_object__object___set_Item
                            (pSVar1,(Il2CppObject *)pSVar8,(Il2CppObject *)pSVar10,
                             (MethodInfo_4AAD4C0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
                  pSVar3 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._mixedFields;
                  if (pSVar3 != (System_Collections_Generic_HashSet_object__o *)0x0) {
                    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                             (__this->fields)._syncedSerialized;
                    bVar7 = System_Collections_Generic_HashSet_object___Contains
                                      (pSVar3,(Il2CppObject *)"Visible",
                                       (MethodInfo_4FB3720 *)
                                       MethodInfo_System_Collections_Generic_HashSet_string_Contains);
                    pSVar8 = "Visible";
                    if (bVar7) {
                      pSVar10 = "--";
                    }
                    else {
                      pSVar4 = (__this->fields)._visible;
                      if (pSVar4 == (Settings_BoolSetting_o *)0x0) goto label_05d8eb8f;
                      local_71 = (pSVar4->fields)._value;
                      if ((g_data_075566f0->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init(g_data_075566f0);
                      }
                      pSVar10 = System_Boolean__ToString(&local_71,(MethodInfo *)0x0);
                    }
                    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                      System_Collections_Generic_Dictionary_object__object___set_Item
                                (pSVar1,(Il2CppObject *)pSVar8,(Il2CppObject *)pSVar10,
                                 (MethodInfo_4AAD4C0 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
                      pSVar3 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._mixedFields;
                      if (pSVar3 != (System_Collections_Generic_HashSet_object__o *)0x0) {
                        pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                                 (__this->fields)._syncedSerialized;
                        bVar7 = System_Collections_Generic_HashSet_object___Contains
                                          (pSVar3,(Il2CppObject *)"Parent",
                                           (MethodInfo_4FB3720 *)
                                           MethodInfo_System_Collections_Generic_HashSet_string_Contains);
                        pSVar8 = "Parent";
                        if (bVar7) {
                          pSVar10 = "--";
                        }
                        else {
                          pSVar5 = (__this->fields)._parent;
                          if (pSVar5 == (Settings_IntSetting_o *)0x0) goto label_05d8eb8f;
                          local_6c = (pSVar5->fields)._value;
                          pSVar10 = System_Int32__ToString(&local_6c,(MethodInfo *)0x0);
                        }
                        if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                          System_Collections_Generic_Dictionary_object__object___set_Item
                                    (pSVar1,(Il2CppObject *)pSVar8,(Il2CppObject *)pSVar10,
                                     (MethodInfo_4AAD4C0 *)
                                     MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
                          pSVar3 = (System_Collections_Generic_HashSet_object__o *)
                                   (__this->fields)._mixedFields;
                          if (pSVar3 != (System_Collections_Generic_HashSet_object__o *)0x0) {
                            pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                                     (__this->fields)._syncedSerialized;
                            bVar7 = System_Collections_Generic_HashSet_object___Contains
                                              (pSVar3,(Il2CppObject *)"PositionX",
                                               (MethodInfo_4FB3720 *)
                                               MethodInfo_System_Collections_Generic_HashSet_string_Contains);
                            pSVar8 = "PositionX";
                            if (bVar7) {
                              pSVar10 = "--";
                            }
                            else {
                              pSVar6 = (__this->fields)._positionX;
                              if (pSVar6 == (Settings_FloatSetting_o *)0x0) goto label_05d8eb8f;
                              local_70 = (pSVar6->fields)._value;
                              pSVar10 = System_Single__ToString_54d0a60
                                                  (&local_70,"R",(MethodInfo *)0x0);
                            }
                            if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                              System_Collections_Generic_Dictionary_object__object___set_Item
                                        (pSVar1,(Il2CppObject *)pSVar8,(Il2CppObject *)pSVar10,
                                         (MethodInfo_4AAD4C0 *)
                                         MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item
                                        );
                              pSVar3 = (System_Collections_Generic_HashSet_object__o *)
                                       (__this->fields)._mixedFields;
                              if (pSVar3 != (System_Collections_Generic_HashSet_object__o *)0x0) {
                                pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                                         (__this->fields)._syncedSerialized;
                                bVar7 = System_Collections_Generic_HashSet_object___Contains
                                                  (pSVar3,(Il2CppObject *)"PositionY",
                                                   (MethodInfo_4FB3720 *)
                                                   MethodInfo_System_Collections_Generic_HashSet_string_Contains
                                                  );
                                pSVar8 = "PositionY";
                                if (bVar7) {
                                  pSVar10 = "--";
                                }
                                else {
                                  pSVar6 = (__this->fields)._positionY;
                                  if (pSVar6 == (Settings_FloatSetting_o *)0x0) goto label_05d8eb8f;
                                  local_70 = (pSVar6->fields)._value;
                                  pSVar10 = System_Single__ToString_54d0a60
                                                      (&local_70,"R",(MethodInfo *)0x0);
                                }
                                if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)
                                {
                                  System_Collections_Generic_Dictionary_object__object___set_Item
                                            (pSVar1,(Il2CppObject *)pSVar8,(Il2CppObject *)pSVar10,
                                             (MethodInfo_4AAD4C0 *)
                                             MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item
                                            );
                                  pSVar3 = (System_Collections_Generic_HashSet_object__o *)
                                           (__this->fields)._mixedFields;
                                  if (pSVar3 != (System_Collections_Generic_HashSet_object__o *)0x0) {
                                    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                                             (__this->fields)._syncedSerialized;
                                    bVar7 = System_Collections_Generic_HashSet_object___Contains
                                                      (pSVar3,(Il2CppObject *)"PositionZ",
                                                       (MethodInfo_4FB3720 *)
                                                       MethodInfo_System_Collections_Generic_HashSet_string_Contains
                                                      );
                                    pSVar8 = "PositionZ";
                                    if (bVar7) {
                                      pSVar10 = "--";
                                    }
                                    else {
                                      pSVar6 = (__this->fields)._positionZ;
                                      if (pSVar6 == (Settings_FloatSetting_o *)0x0) goto label_05d8eb8f;
                                      local_70 = (pSVar6->fields)._value;
                                      pSVar10 = System_Single__ToString_54d0a60
                                                          (&local_70,"R",(MethodInfo *)0x0);
                                    }
                                    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)
                                                  0x0) {
                                      System_Collections_Generic_Dictionary_object__object___set_Item
                                                (pSVar1,(Il2CppObject *)pSVar8,(Il2CppObject *)pSVar10,
                                                 (MethodInfo_4AAD4C0 *)
                                                 MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item
                                                );
                                      pSVar3 = (System_Collections_Generic_HashSet_object__o *)
                                               (__this->fields)._mixedFields;
                                      if (pSVar3 != (System_Collections_Generic_HashSet_object__o *)0x0) {
                                        pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                                                 (__this->fields)._syncedSerialized;
                                        bVar7 = System_Collections_Generic_HashSet_object___Contains
                                                          (pSVar3,(Il2CppObject *)"RotationX",
                                                           (MethodInfo_4FB3720 *)
                                                                                                                      
                                                       MethodInfo_System_Collections_Generic_HashSet_string_Contains
                                                       );
                                        pSVar8 = "RotationX";
                                        if (bVar7) {
                                          pSVar10 = "--";
                                        }
                                        else {
                                          pSVar6 = (__this->fields)._rotationX;
                                          if (pSVar6 == (Settings_FloatSetting_o *)0x0) goto label_05d8eb8f;
                                          local_70 = (pSVar6->fields)._value;
                                          pSVar10 = System_Single__ToString_54d0a60
                                                              (&local_70,"R",
                                                               (MethodInfo *)0x0);
                                        }
                                        if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                          System_Collections_Generic_Dictionary_object__object___set_Item
                                                    (pSVar1,(Il2CppObject *)pSVar8,(Il2CppObject *)pSVar10,
                                                     (MethodInfo_4AAD4C0 *)
                                                     MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item
                                                    );
                                          pSVar3 = (System_Collections_Generic_HashSet_object__o *)
                                                   (__this->fields)._mixedFields;
                                          if (pSVar3 != (System_Collections_Generic_HashSet_object__o *)0x0) {
                                            pSVar1 = (System_Collections_Generic_Dictionary_object__object__o
                                                      *)(__this->fields)._syncedSerialized;
                                            bVar7 = System_Collections_Generic_HashSet_object___Contains
                                                              (pSVar3,(Il2CppObject *)"RotationY",
                                                               (MethodInfo_4FB3720 *)
                                                                                                                              
                                                       MethodInfo_System_Collections_Generic_HashSet_string_Contains
                                                       );
                                            pSVar8 = "RotationY";
                                            if (bVar7) {
                                              pSVar10 = "--";
                                            }
                                            else {
                                              pSVar6 = (__this->fields)._rotationY;
                                              if (pSVar6 == (Settings_FloatSetting_o *)0x0) goto label_05d8eb8f;
                                              local_70 = (pSVar6->fields)._value;
                                              pSVar10 = System_Single__ToString_54d0a60
                                                                  (&local_70,"R",
                                                                   (MethodInfo *)0x0);
                                            }
                                            if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                              System_Collections_Generic_Dictionary_object__object___set_Item
                                                        (pSVar1,(Il2CppObject *)pSVar8,(Il2CppObject *)pSVar10
                                                         ,(MethodInfo_4AAD4C0 *)
                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item
                                                       );
                                              pSVar3 = (System_Collections_Generic_HashSet_object__o *)
                                                       (__this->fields)._mixedFields;
                                              if (pSVar3 != (System_Collections_Generic_HashSet_object__o *)
                                                            0x0) {
                                                pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._syncedSerialized;
                                                bVar7 = System_Collections_Generic_HashSet_object___Contains
                                                                  (pSVar3,(Il2CppObject *)
                                                                          "RotationZ",
                                                                   (MethodInfo_4FB3720 *)
                                                                                                                                      
                                                       MethodInfo_System_Collections_Generic_HashSet_string_Contains
                                                       );
                                                pSVar8 = "RotationZ";
                                                if (bVar7) {
                                                  pSVar10 = "--";
                                                }
                                                else {
                                                  pSVar6 = (__this->fields)._rotationZ;
                                                  if (pSVar6 == (Settings_FloatSetting_o *)0x0)
                                                  goto label_05d8eb8f;
                                                  local_70 = (pSVar6->fields)._value;
                                                  pSVar10 = System_Single__ToString_54d0a60
                                                                      (&local_70,"R",
                                                                       (MethodInfo *)0x0);
                                                }
                                                if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                  System_Collections_Generic_Dictionary_object__object___set_Item
                                                            (pSVar1,(Il2CppObject *)pSVar8,
                                                             (Il2CppObject *)pSVar10,
                                                             (MethodInfo_4AAD4C0 *)
                                                                                                                          
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item
                                                       );
                                                  pSVar3 = (System_Collections_Generic_HashSet_object__o *)
                                                           (__this->fields)._mixedFields;
                                                  if (pSVar3 != (System_Collections_Generic_HashSet_object__o
                                                                 *)0x0) {
                                                    pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._syncedSerialized;
                                                    bVar7 = 
                                                       System_Collections_Generic_HashSet_object___Contains
                                                                 (pSVar3,(Il2CppObject *)"ScaleX"
                                                                  ,(MethodInfo_4FB3720 *)
                                                                                                                                      
                                                       MethodInfo_System_Collections_Generic_HashSet_string_Contains
                                                       );
                                                    pSVar8 = "ScaleX";
                                                    if (bVar7) {
                                                      pSVar10 = "--";
                                                    }
                                                    else {
                                                      pSVar6 = (__this->fields)._scaleX;
                                                      if (pSVar6 == (Settings_FloatSetting_o *)0x0)
                                                      goto label_05d8eb8f;
                                                      local_70 = (pSVar6->fields)._value;
                                                      pSVar10 = System_Single__ToString_54d0a60
                                                                          (&local_70,"R",
                                                                           (MethodInfo *)0x0);
                                                    }
                                                    if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                      System_Collections_Generic_Dictionary_object__object___set_Item
                                                                (pSVar1,(Il2CppObject *)pSVar8,
                                                                 (Il2CppObject *)pSVar10,
                                                                 (MethodInfo_4AAD4C0 *)
                                                                                                                                  
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item
                                                       );
                                                      pSVar3 = (System_Collections_Generic_HashSet_object__o *
                                                               )(__this->fields)._mixedFields;
                                                      if (pSVar3 != (
                                                       System_Collections_Generic_HashSet_object__o *)0x0) {
                                                        pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._syncedSerialized;
                                                       bVar7 = 
                                                       System_Collections_Generic_HashSet_object___Contains
                                                                 (pSVar3,(Il2CppObject *)"ScaleY"
                                                                  ,(MethodInfo_4FB3720 *)
                                                                                                                                      
                                                       MethodInfo_System_Collections_Generic_HashSet_string_Contains
                                                       );
                                                       pSVar8 = "ScaleY";
                                                       if (bVar7) {
                                                         pSVar10 = "--";
                                                       }
                                                       else {
                                                         pSVar6 = (__this->fields)._scaleY;
                                                         if (pSVar6 == (Settings_FloatSetting_o *)0x0)
                                                         goto label_05d8eb8f;
                                                         local_70 = (pSVar6->fields)._value;
                                                         pSVar10 = System_Single__ToString_54d0a60
                                                                             (&local_70,"R",
                                                                              (MethodInfo *)0x0);
                                                       }
                                                       if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar1,(Il2CppObject *)pSVar8,
                                                                  (Il2CppObject *)pSVar10,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item
                                                       );
                                                       pSVar3 = (System_Collections_Generic_HashSet_object__o
                                                                 *)(__this->fields)._mixedFields;
                                                       if (pSVar3 != (
                                                       System_Collections_Generic_HashSet_object__o *)0x0) {
                                                         pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._syncedSerialized;
                                                       bVar7 = 
                                                       System_Collections_Generic_HashSet_object___Contains
                                                                 (pSVar3,(Il2CppObject *)"ScaleZ"
                                                                  ,(MethodInfo_4FB3720 *)
                                                                                                                                      
                                                       MethodInfo_System_Collections_Generic_HashSet_string_Contains
                                                       );
                                                       pSVar8 = "ScaleZ";
                                                       if (bVar7) {
                                                         pSVar10 = "--";
                                                       }
                                                       else {
                                                         pSVar6 = (__this->fields)._scaleZ;
                                                         if (pSVar6 == (Settings_FloatSetting_o *)0x0)
                                                         goto label_05d8eb8f;
                                                         local_70 = (pSVar6->fields)._value;
                                                         pSVar10 = System_Single__ToString_54d0a60
                                                                             (&local_70,"R",
                                                                              (MethodInfo *)0x0);
                                                       }
                                                       if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar1,(Il2CppObject *)pSVar8,
                                                                  (Il2CppObject *)pSVar10,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item
                                                       );
                                                       pSVar2 = (__this->fields)._collideMode;
                                                       if ((pSVar2 != (Settings_StringSetting_o *)0x0) &&
                                                          (pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._syncedSerialized,
                                                       pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0)) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar1,(Il2CppObject *)"CollideMode"
                                                                  ,(Il2CppObject *)(pSVar2->fields)._value,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item
                                                       );
                                                       pSVar2 = (__this->fields)._collideWith;
                                                       if ((pSVar2 != (Settings_StringSetting_o *)0x0) &&
                                                          (pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._syncedSerialized,
                                                       pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0)) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar1,(Il2CppObject *)"CollideWith"
                                                                  ,(Il2CppObject *)(pSVar2->fields)._value,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item
                                                       );
                                                       pSVar2 = (__this->fields)._physicsMaterial;
                                                       if ((pSVar2 != (Settings_StringSetting_o *)0x0) &&
                                                          (pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._syncedSerialized,
                                                       pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0)) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar1,(Il2CppObject *)"PhysicsMaterial"
                                                                  ,(Il2CppObject *)(pSVar2->fields)._value,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item
                                                       );
                                                       pSVar2 = (__this->fields)._shader;
                                                       if ((pSVar2 != (Settings_StringSetting_o *)0x0) &&
                                                          (__this_03 = (UI_MapEditorInspectPanel_o *)
                                                                       (__this->fields)._syncedSerialized,
                                                          __this_03 != (UI_MapEditorInspectPanel_o *)0x0)) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 ((
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)__this_03,(Il2CppObject *)"Shader",
                                                       (Il2CppObject *)(pSVar2->fields)._value,
                                                       (MethodInfo_4AAD4C0 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item
                                                       );
                                                       __this_04 = (UI_MapEditorInspectPanel_o *)
                                                                   (__this->fields)._syncedSerialized;
                                                       pSVar8 = UI_MapEditorInspectPanel__SerializeSetting
                                                                          (__this_03,
                                                                           (Settings_BaseSetting_o *)
                                                                           (__this->fields)._color,method_00);
                                                       if (__this_04 != (UI_MapEditorInspectPanel_o *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 ((
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)__this_04,(Il2CppObject *)"Color",
                                                       (Il2CppObject *)pSVar8,
                                                       (MethodInfo_4AAD4C0 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item
                                                       );
                                                       pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._syncedSerialized;
                                                       pSVar8 = UI_MapEditorInspectPanel__SerializeSetting
                                                                          (__this_04,
                                                                           (Settings_BaseSetting_o *)
                                                                           (__this->fields)._reflectColor,
                                                                           method_01);
                                                       if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar1,(Il2CppObject *)"ReflectColor"
                                                                  ,(Il2CppObject *)pSVar8,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item
                                                       );
                                                       pSVar2 = (__this->fields)._texture;
                                                       if ((pSVar2 != (Settings_StringSetting_o *)0x0) &&
                                                          (pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._syncedSerialized,
                                                       pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0)) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar1,(Il2CppObject *)"Texture"
                                                                  ,(Il2CppObject *)(pSVar2->fields)._value,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item
                                                       );
                                                       pSVar3 = (System_Collections_Generic_HashSet_object__o
                                                                 *)(__this->fields)._mixedFields;
                                                       if (pSVar3 != (
                                                       System_Collections_Generic_HashSet_object__o *)0x0) {
                                                         pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._syncedSerialized;
                                                       bVar7 = 
                                                       System_Collections_Generic_HashSet_object___Contains
                                                                 (pSVar3,(Il2CppObject *)"TilingX"
                                                                  ,(MethodInfo_4FB3720 *)
                                                                                                                                      
                                                       MethodInfo_System_Collections_Generic_HashSet_string_Contains
                                                       );
                                                       pSVar8 = "TilingX";
                                                       if (bVar7) {
                                                         pSVar10 = "--";
                                                       }
                                                       else {
                                                         pSVar6 = (__this->fields)._tilingX;
                                                         if (pSVar6 == (Settings_FloatSetting_o *)0x0)
                                                         goto label_05d8eb8f;
                                                         local_70 = (pSVar6->fields)._value;
                                                         pSVar10 = System_Single__ToString_54d0a60
                                                                             (&local_70,"R",
                                                                              (MethodInfo *)0x0);
                                                       }
                                                       if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar1,(Il2CppObject *)pSVar8,
                                                                  (Il2CppObject *)pSVar10,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item
                                                       );
                                                       pSVar3 = (System_Collections_Generic_HashSet_object__o
                                                                 *)(__this->fields)._mixedFields;
                                                       if (pSVar3 != (
                                                       System_Collections_Generic_HashSet_object__o *)0x0) {
                                                         pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._syncedSerialized;
                                                       bVar7 = 
                                                       System_Collections_Generic_HashSet_object___Contains
                                                                 (pSVar3,(Il2CppObject *)"TilingY"
                                                                  ,(MethodInfo_4FB3720 *)
                                                                                                                                      
                                                       MethodInfo_System_Collections_Generic_HashSet_string_Contains
                                                       );
                                                       pSVar8 = "TilingY";
                                                       if (bVar7) {
                                                         pSVar10 = "--";
                                                       }
                                                       else {
                                                         pSVar6 = (__this->fields)._tilingY;
                                                         if (pSVar6 == (Settings_FloatSetting_o *)0x0)
                                                         goto label_05d8eb8f;
                                                         local_70 = (pSVar6->fields)._value;
                                                         pSVar10 = System_Single__ToString_54d0a60
                                                                             (&local_70,"R",
                                                                              (MethodInfo *)0x0);
                                                       }
                                                       if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar1,(Il2CppObject *)pSVar8,
                                                                  (Il2CppObject *)pSVar10,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item
                                                       );
                                                       pSVar3 = (System_Collections_Generic_HashSet_object__o
                                                                 *)(__this->fields)._mixedFields;
                                                       if (pSVar3 != (
                                                       System_Collections_Generic_HashSet_object__o *)0x0) {
                                                         pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._syncedSerialized;
                                                       bVar7 = 
                                                       System_Collections_Generic_HashSet_object___Contains
                                                                 (pSVar3,(Il2CppObject *)"OffsetX"
                                                                  ,(MethodInfo_4FB3720 *)
                                                                                                                                      
                                                       MethodInfo_System_Collections_Generic_HashSet_string_Contains
                                                       );
                                                       pSVar8 = "OffsetX";
                                                       if (bVar7) {
                                                         pSVar10 = "--";
                                                       }
                                                       else {
                                                         pSVar6 = (__this->fields)._offsetX;
                                                         if (pSVar6 == (Settings_FloatSetting_o *)0x0)
                                                         goto label_05d8eb8f;
                                                         local_70 = (pSVar6->fields)._value;
                                                         pSVar10 = System_Single__ToString_54d0a60
                                                                             (&local_70,"R",
                                                                              (MethodInfo *)0x0);
                                                       }
                                                       if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar1,(Il2CppObject *)pSVar8,
                                                                  (Il2CppObject *)pSVar10,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item
                                                       );
                                                       pSVar3 = (System_Collections_Generic_HashSet_object__o
                                                                 *)(__this->fields)._mixedFields;
                                                       if (pSVar3 != (
                                                       System_Collections_Generic_HashSet_object__o *)0x0) {
                                                         pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._syncedSerialized;
                                                       bVar7 = 
                                                       System_Collections_Generic_HashSet_object___Contains
                                                                 (pSVar3,(Il2CppObject *)"OffsetY"
                                                                  ,(MethodInfo_4FB3720 *)
                                                                                                                                      
                                                       MethodInfo_System_Collections_Generic_HashSet_string_Contains
                                                       );
                                                       pSVar8 = "OffsetY";
                                                       if (bVar7) {
                                                         pSVar10 = "--";
                                                       }
                                                       else {
                                                         pSVar6 = (__this->fields)._offsetY;
                                                         if (pSVar6 == (Settings_FloatSetting_o *)0x0)
                                                         goto label_05d8eb8f;
                                                         local_70 = (pSVar6->fields)._value;
                                                         pSVar10 = System_Single__ToString_54d0a60
                                                                             (&local_70,"R",
                                                                              (MethodInfo *)0x0);
                                                       }
                                                       if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar1,(Il2CppObject *)pSVar8,
                                                                  (Il2CppObject *)pSVar10,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item
                                                       );
                                                       pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._syncedComponentFields;
                                                       if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___Clear
                                                                 (pSVar1,(MethodInfo_4AAD690 *)
                                                                                                                                                  
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_string_Clear
                                                       );
                                                       pSVar9 = (__this->fields)._componentNames;
                                                       if (pSVar9 != (
                                                       System_Collections_Generic_List_string__o *)0x0) {
                                                         index = 0;
                                                         do {
                                                           if ((pSVar9->fields)._size <= index) {
                                                             return;
                                                           }
                                                           __this_00 = (__this->fields)._components;
                                                           if (__this_00 ==
                                                               (
                                                       System_Collections_Generic_List_Dictionary_string__BaseSetting___o
                                                       *)0x0) break;
                                                       settings = (
                                                       System_Collections_Generic_Dictionary_string__BaseSetting__o
                                                       *)System_Collections_Generic_List_object___get_Item
                                                                   ((System_Collections_Generic_List_object__o
                                                                     *)__this_00,index,
                                                                    (MethodInfo_395CF20 *)
                                                                                                                                        
                                                       MethodInfo_System_Collections_Generic_List_Dictionary_string_BaseSetting_get_Item
                                                       );
                                                       __this_01 = 
                                                       UI_MapEditorInspectPanel__SerializeComponentFields
                                                                 (__this,settings,method_02);
                                                       if (__this_01 ==
                                                           (
                                                       System_Collections_Generic_Dictionary_string__string__o
                                                       *)0x0) break;
                                                       local_50 = __this_01;
                                                       source = 
                                                       System_Collections_Generic_Dictionary_object__object___get_Keys
                                                                 ((
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)__this_01,
                                                       (MethodInfo_4AAD0F0 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_string_get_Keys
                                                       );
                                                       __this_02 = System_Linq_Enumerable__ToList_object_
                                                                             ((
                                                       System_Collections_Generic_IEnumerable_TSource__o *)
                                                       source,(MethodInfo_35011B0 *)
                                                              MethodInfo_System_Linq_Enumerable_ToList_string)
                                                       ;
                                                       if (__this_02 ==
                                                           (System_Collections_Generic_List_TSource__o *)0x0)
                                                       break;
                                                       System_Collections_Generic_List_object___GetEnumerator
                                                                 ((
                                                       System_Collections_Generic_List_Enumerator_T__o *)
                                                       local_48,(System_Collections_Generic_List_object__o *)
                                                                __this_02,
                                                       (MethodInfo_395E050 *)
                                                       MethodInfo_System_Collections_Generic_List_string_GetEnumerator
                                                       );
                                                       local_58 = local_38;
                                                       local_68 = (undefined1  [8])local_48._0_8_;
                                                       puStack_60 = (undefined1 *)local_48._8_8_;
                                                       local_48._0_8_ =
                                                            (System_Collections_Generic_List_T__o *)0x0;
                                                       local_48._8_8_ = local_68;
                                                       while (bVar7 = 
                                                       System_Collections_Generic_List_Enumerator_object___MoveNext
                                                                 ((
                                                       System_Collections_Generic_List_Enumerator_object__o *)
                                                       local_68,(MethodInfo_4C45C50 *)
                                                                                                                                
                                                       MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext
                                                       ), pSVar8 = local_58, bVar7) {
                                                         pSVar9 = (__this->fields)._componentNames;
                                                         if (pSVar9 == (
                                                       System_Collections_Generic_List_string__o *)0x0) {
                                                         ThrowNullReferenceException();
                                                       }
                                                       pSVar3 = (System_Collections_Generic_HashSet_object__o
                                                                 *)(__this->fields)._mixedFields;
                                                       pSVar10 = 
                                                       System_Collections_Generic_List_object___get_Item
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )pSVar9,index,
                                                                  (MethodInfo_395CF20 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_List_string_get_Item
                                                       );
                                                       if ((TypeInfo_UI_MapEditorInspectPanel->_2).
                                                           cctor_finished_or_no_cctor == 0) {
                                                         il2cpp_codegen_runtime_class_init
                                                                   ((Il2CppClass *)
                                                                    TypeInfo_UI_MapEditorInspectPanel);
                                                       }
                                                       if (Il2CppMethodInitialized_07548009 == '\0') {
                                                         il2cpp_codegen_initialize_runtime_metadata
                                                                   (&":");
                                                         il2cpp_codegen_initialize_runtime_metadata
                                                                   (&"Component:");
                                                         Il2CppMethodInitialized_07548009 = '\x01';
                                                       }
                                                       pSVar10 = System_String__Concat_5302810
                                                                           ("Component:",pSVar10,
                                                                            ":",pSVar8,
                                                                            (MethodInfo *)0x0);
                                                       if (pSVar3 == (
                                                       System_Collections_Generic_HashSet_object__o *)0x0) {
                                                         ThrowNullReferenceException();
                                                       }
                                                       bVar7 = 
                                                       System_Collections_Generic_HashSet_object___Contains
                                                                 (pSVar3,(Il2CppObject *)pSVar10,
                                                                  (MethodInfo_4FB3720 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_HashSet_string_Contains
                                                       );
                                                       if (bVar7) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 ((
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)local_50,(Il2CppObject *)pSVar8,
                                                       (Il2CppObject *)"--",
                                                       (MethodInfo_4AAD4C0 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item
                                                       );
                                                       }
                                                       }
                                                       System_Collections_Generic_List_Enumerator_object___Dispose
                                                                 ((
                                                       System_Collections_Generic_List_Enumerator_object__o *)
                                                       local_68,(MethodInfo_4C45C40 *)
                                                                                                                                
                                                       MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose
                                                       );
                                                       pSVar9 = (__this->fields)._componentNames;
                                                       if (pSVar9 == (
                                                       System_Collections_Generic_List_string__o *)0x0) break;
                                                       pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._syncedComponentFields;
                                                       pSVar8 = 
                                                       System_Collections_Generic_List_object___get_Item
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )pSVar9,index,
                                                                  (MethodInfo_395CF20 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_List_string_get_Item
                                                       );
                                                       if (pSVar1 == (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) break;
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar1,(Il2CppObject *)pSVar8,
                                                                  (Il2CppObject *)local_50,
                                                                  (MethodInfo_4AAD4C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_string_set_Item
                                                       );
                                                       index = index + 1;
                                                       pSVar9 = (__this->fields)._componentNames;
                                                       } while (pSVar9 != (
                                                       System_Collections_Generic_List_string__o *)0x0);
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
label_05d8eb8f:
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel$$SerializeComponentFields
// il2cpp: System_Collections_Generic_Dictionary_string__string__o* UI_MapEditorInspectPanel__SerializeComponentFields (UI_MapEditorInspectPanel_o* __this, System_Collections_Generic_Dictionary_string__BaseSetting__o* settings, const MethodInfo* method);
// 0x5d8f8f0
// eh: try 0x5d8fa74..0x5d8fbcf -> pad 0x5d8fbee (+13 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5d8fc06..0x5d8fc0b -> pad 0x5d8fc2c cleanup
// eh: try 0x5d8fc2f..0x5d8fc39 -> pad 0x5d8fc41 catch (...) [compiler noexcept guard]
// asm: 36 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d8fbd4: jmp 0x5d8fbee
// asm:   0x5d8fbd6: jmp 0x5d8fbee
// asm:   0x5d8fbd8: jmp 0x5d8fbee
// asm:   0x5d8fbda: jmp 0x5d8fbee
// asm:   0x5d8fbdc: jmp 0x5d8fbee
// asm:   0x5d8fbde: jmp 0x5d8fbee
// asm:   0x5d8fbe0: jmp 0x5d8fbee
// asm:   0x5d8fbe2: jmp 0x5d8fbee
// asm:   0x5d8fbe4: jmp 0x5d8fbee
// asm:   0x5d8fbe6: jmp 0x5d8fbee
// asm:   0x5d8fbe8: jmp 0x5d8fbee
// asm:   0x5d8fbea: jmp 0x5d8fbee
// asm:   0x5d8fbec: jmp 0x5d8fbee
// asm:   0x5d8fbee: mov rbx, rax
// asm:   0x5d8fbf1: cmp edx, 1
// asm:   0x5d8fbf4: jne 0x5d8fc2f
// asm:   0x5d8fbf6: mov rdi, rbx
// asm:   0x5d8fbf9: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d8fbfe: mov rbx, qword ptr [rax]
// asm:   0x5d8fc01: mov qword ptr [rsp + 0x30], rbx
// asm:   0x5d8fc06: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d8fc0b: lea rax, [rip + 0x150021e]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_BaseSetting_Dispose
// asm:   0x5d8fc12: mov rsi, qword ptr [rax]
// asm:   0x5d8fc15: lea rdi, [rsp + 0x10]
// asm:   0x5d8fc1a: call 0x4de7070  ; System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose()
// asm:   0x5d8fc1f: test rbx, rbx
// asm:   0x5d8fc22: je 0x5d8fbb6
// asm:   0x5d8fc24: mov rdi, rbx
// asm:   0x5d8fc27: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d8fc2c: mov rbx, rax
// asm:   0x5d8fc2f: lea rdi, [rsp + 0x30]
// asm:   0x5d8fc34: call 0x2fdd700  ; il2cpp_runtime_helper_02fdd700()
// asm:   0x5d8fc39: mov rdi, rbx
// asm:   0x5d8fc3c: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5d8fc41: mov rdi, rax
// asm:   0x5d8fc44: call 0x2ab61e0  ; __clang_call_terminate()

System_Collections_Generic_Dictionary_string__string__o *
UI_MapEditorInspectPanel__SerializeComponentFields
          (UI_MapEditorInspectPanel_o *__this,
          System_Collections_Generic_Dictionary_string__BaseSetting__o *settings,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  System_Collections_Generic_Dictionary_string__string__o *__this_00;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_01;
  Settings_BaseSetting_o *pSVar3;
  System_String_o *value;
  MethodInfo *method_00;
  MethodInfo *method_01;
  UI_MapEditorInspectPanel_o *pUVar4;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o local_68;
  UI_MapEditorInspectPanel_o *local_50;
  undefined1 local_48 [16];
  System_String_o *local_38;
  
  if (Il2CppMethodInitialized_0754802c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_get_Keys);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_BaseSetting_Dispose
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_BaseSetting_MoveNext
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_BaseSetting_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_BaseSetting_GetEnumerator
              );
    il2cpp_codegen_initialize_runtime_metadata(&"Dropbox");
    il2cpp_codegen_initialize_runtime_metadata(&"Tooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"Description");
    Il2CppMethodInitialized_0754802c = '\x01';
  }
  local_68.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_68.fields._index = 0;
  local_68.fields._version = 0;
  local_68.fields._currentKey = (Il2CppObject *)0x0;
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_string);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
             (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
  if (settings != (System_Collections_Generic_Dictionary_string__BaseSetting__o *)0x0) {
    __this_01 = System_Collections_Generic_Dictionary_object__object___get_Keys
                          ((System_Collections_Generic_Dictionary_object__object__o *)settings,
                           (MethodInfo_4AAD0F0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_get_Keys);
    if (__this_01 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0) {
      local_50 = (UI_MapEditorInspectPanel_o *)settings;
      System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
                ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)local_48,
                 __this_01,
                 (MethodInfo_511A520 *)
                 MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_BaseSetting_GetEnumerator
                );
      local_68.fields._currentKey = (Il2CppObject *)local_38;
      local_68.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)local_48._0_8_;
      local_68.fields._index = local_48._8_4_;
      local_68.fields._version = local_48._12_4_;
      local_48._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
      local_48._8_8_ = &local_68;
      if (__this_00 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) {
        while( true ) {
          bVar2 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                            (&local_68,
                             (MethodInfo_4CE7080 *)
                             MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_BaseSetting_MoveNext
                            );
          pIVar1 = local_68.fields._currentKey;
          if (!bVar2) break;
          bVar2 = System_String__op_Equality
                            ((System_String_o *)local_68.fields._currentKey,"Description",
                             (MethodInfo *)0x0);
          if (!bVar2) {
            if ((System_String_o *)pIVar1 == (System_String_o *)0x0) goto label_05d8fbca;
            bVar2 = System_String__EndsWith((System_String_o *)pIVar1,"Tooltip",(MethodInfo *)0x0)
            ;
            if (!bVar2) {
              bVar2 = System_String__EndsWith
                                ((System_String_o *)pIVar1,"Dropbox",(MethodInfo *)0x0);
              if (!bVar2) {
                pUVar4 = local_50;
                pSVar3 = System_Collections_Generic_Dictionary_object__object___get_Item
                                   ((System_Collections_Generic_Dictionary_object__object__o *)local_50,pIVar1
                                    ,(MethodInfo_4AAD450 *)
                                     MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_get_Item
                                   );
                UI_MapEditorInspectPanel__SerializeSetting(pUVar4,pSVar3,method_01);
                ThrowNullReferenceException();
              }
            }
          }
        }
      }
      else {
        while( true ) {
          bVar2 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                            (&local_68,
                             (MethodInfo_4CE7080 *)
                             MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_BaseSetting_MoveNext
                            );
          pIVar1 = local_68.fields._currentKey;
          if (!bVar2) break;
          bVar2 = System_String__op_Equality
                            ((System_String_o *)local_68.fields._currentKey,"Description",
                             (MethodInfo *)0x0);
          if (!bVar2) {
            if ((System_String_o *)pIVar1 == (System_String_o *)0x0) {
label_05d8fbca:
              ThrowNullReferenceException();
            }
            bVar2 = System_String__EndsWith((System_String_o *)pIVar1,"Tooltip",(MethodInfo *)0x0)
            ;
            if (!bVar2) {
              bVar2 = System_String__EndsWith
                                ((System_String_o *)pIVar1,"Dropbox",(MethodInfo *)0x0);
              if (!bVar2) {
                pUVar4 = local_50;
                pSVar3 = System_Collections_Generic_Dictionary_object__object___get_Item
                                   ((System_Collections_Generic_Dictionary_object__object__o *)local_50,pIVar1
                                    ,(MethodInfo_4AAD450 *)
                                     MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_get_Item
                                   );
                value = UI_MapEditorInspectPanel__SerializeSetting(pUVar4,pSVar3,method_00);
                System_Collections_Generic_Dictionary_object__object___set_Item
                          ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,pIVar1,
                           (Il2CppObject *)value,
                           (MethodInfo_4AAD4C0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
              }
            }
          }
        }
      }
      System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                (&local_68,
                 (MethodInfo_4CE7070 *)
                 MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_BaseSetting_Dispose
                );
      return __this_00;
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel$$MergeComponent
// il2cpp: Map_MapScriptComponent_o* UI_MapEditorInspectPanel__MergeComponent (UI_MapEditorInspectPanel_o* __this, System_String_o* componentName, Map_MapScriptComponent_o* previous, System_Collections_Generic_Dictionary_string__string__o* changedFields, const MethodInfo* method);
// 0x5d902a0
// eh: try 0x5d9048a..0x5d9069b -> pad 0x5d906a9 (+14 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5d906cf..0x5d906d4 -> pad 0x5d906f7 cleanup
// eh: try 0x5d906fa..0x5d90704 -> pad 0x5d9070c catch (...) [compiler noexcept guard]
// asm: 42 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d903e3: jmp 0x5d9062e
// asm:   0x5d90463: mov r15, rsp
// asm:   0x5d90466: lea r14, [rip + 0x1506523]  ; MethodInfo_System_Collections_Generic_List_string_FindIndex
// asm:   0x5d9046d: lea r13, [rip + 0x1541afc]  ; ":"
// asm:   0x5d90474: jmp 0x5d90497
// asm:   0x5d9069b: jmp 0x5d906b7
// asm:   0x5d9069d: jmp 0x5d906b7
// asm:   0x5d9069f: jmp 0x5d906b7
// asm:   0x5d906a1: jmp 0x5d906b7
// asm:   0x5d906a3: jmp 0x5d906b7
// asm:   0x5d906a5: jmp 0x5d906b7
// asm:   0x5d906a7: jmp 0x5d906b7
// asm:   0x5d906a9: jmp 0x5d906b7
// asm:   0x5d906ab: jmp 0x5d906b7
// asm:   0x5d906ad: jmp 0x5d906b7
// asm:   0x5d906af: jmp 0x5d906b7
// asm:   0x5d906b1: jmp 0x5d906b7
// asm:   0x5d906b3: jmp 0x5d906b7
// asm:   0x5d906b5: jmp 0x5d906b7
// asm:   0x5d906b7: mov r15, rax
// asm:   0x5d906ba: cmp edx, 1
// asm:   0x5d906bd: jne 0x5d906fa
// asm:   0x5d906bf: mov rdi, r15
// asm:   0x5d906c2: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d906c7: mov rbx, qword ptr [rax]
// asm:   0x5d906ca: mov qword ptr [rsp + 0x30], rbx
// asm:   0x5d906cf: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d906d4: lea rax, [rip + 0x14ffa9d]  ; MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_string_Dispose
// asm:   0x5d906db: mov rsi, qword ptr [rax]
// asm:   0x5d906de: mov rdi, rsp
// asm:   0x5d906e1: call 0x4de67f0  ; System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose()
// asm:   0x5d906e6: test rbx, rbx
// asm:   0x5d906e9: je 0x5d905d1
// asm:   0x5d906ef: mov rdi, rbx
// asm:   0x5d906f2: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d906f7: mov r15, rax
// asm:   0x5d906fa: lea rdi, [rsp + 0x30]
// asm:   0x5d906ff: call 0x2fdd730  ; il2cpp_runtime_helper_02fdd730()
// asm:   0x5d90704: mov rdi, r15
// asm:   0x5d90707: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5d9070c: mov rdi, rax
// asm:   0x5d9070f: call 0x2ab61e0  ; __clang_call_terminate()

Map_MapScriptComponent_o *
UI_MapEditorInspectPanel__MergeComponent
          (UI_MapEditorInspectPanel_o *__this,System_String_o *componentName,
          Map_MapScriptComponent_o *previous,
          System_Collections_Generic_Dictionary_string__string__o *changedFields,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_string__o *collection;
  System_String_array *pSVar3;
  MethodInfo *pMVar4;
  bool bVar5;
  int32_t index;
  System_Collections_Generic_List_string__o *__this_00;
  UI_MapEditorInspectPanel___c__DisplayClass100_0_o *pUVar6;
  System_Predicate_T__o *match;
  System_String_o *value;
  Map_MapScriptComponent_o *__this_01;
  System_Predicate_string__o *__this_02;
  undefined1 local_88 [8];
  undefined1 *puStack_80;
  System_String_o *local_78;
  System_String_o *pSStack_70;
  undefined8 local_68;
  System_String_o *local_60;
  undefined1 local_58 [16];
  System_String_o *local_48;
  System_String_o *pSStack_40;
  int32_t local_38;
  undefined4 uStack_34;
  
  local_60 = componentName;
  if (Il2CppMethodInitialized_0754802d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_string_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_string_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_string_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_string_get_Key);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_FindIndex);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_ctor_7196948);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptComponent);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Predicate_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass100_0_MergeComponent_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorInspectPanel_c__DisplayClass100_0);
    il2cpp_codegen_initialize_runtime_metadata(&":");
    Il2CppMethodInitialized_0754802d = '\x01';
  }
  local_78 = (System_String_o *)0x0;
  pSStack_70 = (System_String_o *)0x0;
  local_88 = (undefined1  [8])0x0;
  puStack_80 = (undefined1 *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  if (previous == (Map_MapScriptComponent_o *)0x0) {
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)__this_00,
               (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  }
  else {
    collection = (previous->fields).Parameters;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
    System_Collections_Generic_List_object____ctor_395ca70
              ((System_Collections_Generic_List_object__o *)__this_00,
               (System_Collections_Generic_IEnumerable_T__o *)collection,
               (MethodInfo_395CA70 *)MethodInfo_System_Collections_Generic_List_string_ctor_7196948);
  }
  if (changedFields != (System_Collections_Generic_Dictionary_string__string__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___GetEnumerator
              ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)local_58,
               (System_Collections_Generic_Dictionary_object__object__o *)changedFields,
               (MethodInfo_4AAD970 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_string_GetEnumerator);
    local_68._0_4_ = local_38;
    local_68._4_4_ = uStack_34;
    local_78 = local_48;
    pSStack_70 = pSStack_40;
    local_88 = (undefined1  [8])local_58._0_8_;
    puStack_80 = (undefined1 *)local_58._8_8_;
    local_58._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
    local_58._8_8_ = local_88;
    if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) {
      local_58._8_8_ = local_88;
      bVar5 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                        ((System_Collections_Generic_Dictionary_Enumerator_object__object__o *)local_88,
                         (MethodInfo_4CE66D0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_string_MoveNext);
      if (bVar5) {
        pUVar6 = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel_c__DisplayClass100_0);
        UI_MapEditorInspectPanel___c__DisplayClass100_0___ctor(pUVar6,(MethodInfo *)0x0);
        if (pUVar6 != (UI_MapEditorInspectPanel___c__DisplayClass100_0_o *)0x0) {
          (pUVar6->fields).changed.fields.key = local_78;
          (pUVar6->fields).changed.fields.value = pSStack_70;
          Il2CppCodeGenWriteBarrier((void **)&pUVar6->fields);
          __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Predicate_string);
          System_Predicate_object____ctor
                    ((System_Predicate_object__o *)__this_02,(Il2CppObject *)pUVar6,
                     (intptr_t)MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass100_0_MergeComponent_b__0,
                     (MethodInfo_3DC95B0 *)0x0);
          ThrowNullReferenceException();
        }
label_05d90654:
        ThrowNullReferenceException();
      }
    }
    else {
      while (bVar5 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                               ((System_Collections_Generic_Dictionary_Enumerator_object__object__o *)local_88
                                ,(MethodInfo_4CE66D0 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_string_MoveNext
                               ), bVar5) {
        pUVar6 = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel_c__DisplayClass100_0);
        UI_MapEditorInspectPanel___c__DisplayClass100_0___ctor(pUVar6,(MethodInfo *)0x0);
        if (pUVar6 == (UI_MapEditorInspectPanel___c__DisplayClass100_0_o *)0x0) goto label_05d90654;
        (pUVar6->fields).changed.fields.key = local_78;
        (pUVar6->fields).changed.fields.value = pSStack_70;
        Il2CppCodeGenWriteBarrier((void **)&pUVar6->fields);
        match = (System_Predicate_T__o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Predicate_string);
        System_Predicate_object____ctor
                  ((System_Predicate_object__o *)match,(Il2CppObject *)pUVar6,
                   (intptr_t)MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass100_0_MergeComponent_b__0,
                   (MethodInfo_3DC95B0 *)0x0);
        index = System_Collections_Generic_List_object___FindIndex
                          ((System_Collections_Generic_List_object__o *)__this_00,match,
                           (MethodInfo_395DCC0 *)MethodInfo_System_Collections_Generic_List_string_FindIndex);
        value = System_String__Concat_5301f10
                          ((pUVar6->fields).changed.fields.key,":",
                           (pUVar6->fields).changed.fields.value,(MethodInfo *)0x0);
        pMVar4 = MethodInfo_System_Collections_Generic_List_string_Add;
        if (index < 0) {
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar3 = (__this_00->fields)._items;
          if (pSVar3 == (System_String_array *)0x0) {
            ThrowNullReferenceException();
          }
          uVar2 = (__this_00->fields)._size;
          if (uVar2 < (uint)pSVar3->max_length) {
            (__this_00->fields)._size = uVar2 + 1;
            pSVar3->m_Items[(int)uVar2] = value;
            Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)value,
                       (MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
          }
        }
        else {
          System_Collections_Generic_List_object___set_Item
                    ((System_Collections_Generic_List_object__o *)__this_00,index,(Il2CppObject *)value,
                     (MethodInfo_395CF60 *)MethodInfo_System_Collections_Generic_List_string_set_Item);
        }
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
              ((System_Collections_Generic_Dictionary_Enumerator_object__object__o *)local_88,
               (MethodInfo_4CE67F0 *)
               MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_string_Dispose);
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScriptComponent);
    Map_MapScriptComponent___ctor(__this_01,(MethodInfo *)0x0);
    if (__this_01 != (Map_MapScriptComponent_o *)0x0) {
      (__this_01->fields).ComponentName = local_60;
      Il2CppCodeGenWriteBarrier(&(__this_01->fields).ComponentName);
      (__this_01->fields).Parameters = __this_00;
      Il2CppCodeGenWriteBarrier(&(__this_01->fields).Parameters);
      return __this_01;
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel$$IsModified
// il2cpp: bool UI_MapEditorInspectPanel__IsModified (UI_MapEditorInspectPanel_o* __this, System_String_o* key, System_String_o* current, const MethodInfo* method);
// 0x5d90720

bool UI_MapEditorInspectPanel__IsModified
               (UI_MapEditorInspectPanel_o *__this,System_String_o *key,System_String_o *current,
               MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar1;
  bool bVar2;
  System_String_o *pSStack_20;
  
  if (Il2CppMethodInitialized_0754802e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
    Il2CppMethodInitialized_0754802e = '\x01';
  }
  pSStack_20 = (System_String_o *)0x0;
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._syncedSerialized;
  if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                    (__this_00,(Il2CppObject *)key,(Il2CppObject **)&pSStack_20,
                     (MethodInfo_4AAF440 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
  bVar2 = true;
  if (bVar1) {
    bVar2 = System_String__op_Inequality(pSStack_20,current,(MethodInfo *)0x0);
  }
  return bVar2;
}


// UI.MapEditorInspectPanel$$ApplyMixedIndicators
// il2cpp: void UI_MapEditorInspectPanel__ApplyMixedIndicators (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x5d8ca50
// eh: try 0x5d8d03a..0x5d8d125 -> pad 0x5d8d130 (+4 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5d8d14e..0x5d8d153 -> pad 0x5d8d8fd cleanup
// eh: try 0x5d8d900..0x5d8d90a -> pad 0x5d8d912 catch (...) [compiler noexcept guard]
// asm: 37 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d8d11b: jmp 0x5d8d8f3
// asm:   0x5d8d12a: jmp 0x5d8d132
// asm:   0x5d8d12c: jmp 0x5d8d132
// asm:   0x5d8d12e: jmp 0x5d8d132
// asm:   0x5d8d130: jmp 0x5d8d132
// asm:   0x5d8d132: mov r14, rax
// asm:   0x5d8d135: cmp edx, 1
// asm:   0x5d8d138: jne 0x5d8d900
// asm:   0x5d8d13e: mov rdi, r14
// asm:   0x5d8d141: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d8d146: mov r14, qword ptr [rax]
// asm:   0x5d8d149: mov qword ptr [rsp + 0x78], r14
// asm:   0x5d8d14e: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d8d153: lea rax, [rip + 0x1502cbe]  ; MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_BaseSetting_Dispose
// asm:   0x5d8d15a: mov rsi, qword ptr [rax]
// asm:   0x5d8d15d: lea rdi, [rsp + 0x50]
// asm:   0x5d8d162: call 0x4de67f0  ; System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose()
// asm:   0x5d8d167: test r14, r14
// asm:   0x5d8d16a: je 0x5d8d104
// asm:   0x5d8d16c: mov rdi, r14
// asm:   0x5d8d16f: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d8d2c0: lea r14, [rip + 0x14e89f9]  ; TypeInfo_Settings_BaseSetting
// asm:   0x5d8d2c7: nop word ptr [rax + rax]
// asm:   0x5d8d4d5: lea r14, [rip + 0x14fbd04]  ; MethodInfo_System_Collections_Generic_Dictionary_BaseSetting_string_TryGetValue
// asm:   0x5d8d4dc: lea rbx, [rip + 0x14e87dd]  ; TypeInfo_Settings_BaseSetting
// asm:   0x5d8d4e3: nop word ptr cs:[rax + rax]
// asm:   0x5d8d705: je 0x5d8d72e
// asm:   0x5d8d8e0: lea rbx, [rip + 0x14e83d9]  ; TypeInfo_Settings_BaseSetting
// asm:   0x5d8d8e7: lea r14, [rip + 0x14fb8f2]  ; MethodInfo_System_Collections_Generic_Dictionary_BaseSetting_string_TryGetValue
// asm:   0x5d8d8ee: jmp 0x5d8d4f0
// asm:   0x5d8d8fd: mov r14, rax
// asm:   0x5d8d900: lea rdi, [rsp + 0x78]
// asm:   0x5d8d905: call 0x2fdd760  ; il2cpp_runtime_helper_02fdd760()
// asm:   0x5d8d90a: mov rdi, r14
// asm:   0x5d8d90d: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5d8d912: mov rdi, rax
// asm:   0x5d8d915: call 0x2ab61e0  ; __clang_call_terminate()

void UI_MapEditorInspectPanel__ApplyMixedIndicators(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  System_Collections_Generic_List_string__o *__this_00;
  UnityEngine_Component_o *pUVar3;
  System_Collections_Generic_HashSet_object__o *pSVar4;
  UnityEngine_UI_InputField_EndEditEvent_o *__this_01;
  UnityEngine_Events_UnityEvent_bool__o *__this_02;
  Il2CppType *handle;
  bool bVar5;
  System_Collections_Generic_Dictionary_BaseSetting__string__o *__this_03;
  System_Collections_Generic_Dictionary_object__object__o *__this_04;
  System_String_o *str1;
  System_String_o *pSVar6;
  System_Type_o *pSVar7;
  System_Reflection_FieldInfo_o *left;
  System_Object_array *pSVar8;
  ulong uVar9;
  Il2CppObject *pIVar10;
  UnityEngine_Transform_o *pUVar11;
  UI_MapEditorInspectPanel___c__DisplayClass102_0_o *__this_05;
  UnityEngine_Events_UnityAction_T0__o *pUVar12;
  UI_MapEditorInspectPanel___c__DisplayClass102_1_o *__this_06;
  UnityEngine_RectTransform_o *__this_07;
  UnityEngine_UI_Text_o *__this_08;
  UnityEngine_GameObject_o *pUVar13;
  UnityEngine_UI_Toggle_o *x;
  int iVar14;
  int32_t fontSize;
  UnityEngine_UI_Image_o *pUVar15;
  System_Collections_Generic_List_Dictionary_string__BaseSetting___o *__this_09;
  ulong uVar16;
  UnityEngine_UI_InputField_o *__this_10;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  UnityEngine_Rect_o UVar17;
  UnityEngine_Color_o color;
  System_String_o *local_c0;
  System_String_o *local_b8;
  UnityEngine_Transform_o *local_b0;
  UnityEngine_UI_Toggle_o *local_a8;
  UnityEngine_Transform_o *local_a0;
  undefined1 local_98 [8];
  undefined1 *puStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 local_70 [16];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  int32_t local_50;
  undefined4 uStack_4c;
  undefined1 local_48 [24];
  
  if (Il2CppMethodInitialized_0754802f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UI_BaseSettingElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BaseSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_InputField);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Toggle);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_InputSettingElement_71a4fb0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_ToggleSettingElement);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_BaseSetting_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_BaseSetting_string_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_BaseSetting_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_BaseSetting_string_set_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_BaseSetting_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_BaseSetting_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_BaseSetting_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_BaseSetting_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_BaseSetting_get_Key);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_BaseSetting_get_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Dictionary_string_BaseSetting_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Dictionary_string_BaseSetting_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorInspectPanel);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass102_0_ApplyMixedIndicators_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorInspectPanel_c__DisplayClass102_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass102_1_ApplyMixedIndicators_b__1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorInspectPanel_c__DisplayClass102_1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction_bool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Events_UnityEvent_bool_AddListener);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Events_UnityEvent_string_AddListener);
    il2cpp_codegen_initialize_runtime_metadata(&"OffsetY");
    il2cpp_codegen_initialize_runtime_metadata(&"TilingX");
    il2cpp_codegen_initialize_runtime_metadata(&"InputField");
    il2cpp_codegen_initialize_runtime_metadata(&"ScaleY");
    il2cpp_codegen_initialize_runtime_metadata(&"RotationZ");
    il2cpp_codegen_initialize_runtime_metadata(&"Networked");
    il2cpp_codegen_initialize_runtime_metadata(&"Background");
    il2cpp_codegen_initialize_runtime_metadata(&"_setting");
    il2cpp_codegen_initialize_runtime_metadata(&"TilingY");
    il2cpp_codegen_initialize_runtime_metadata(&"--");
    il2cpp_codegen_initialize_runtime_metadata(&"RotationY");
    il2cpp_codegen_initialize_runtime_metadata(&"Visible");
    il2cpp_codegen_initialize_runtime_metadata(&"RotationX");
    il2cpp_codegen_initialize_runtime_metadata(&"PositionZ");
    il2cpp_codegen_initialize_runtime_metadata(&"Active");
    il2cpp_codegen_initialize_runtime_metadata(&"Parent");
    il2cpp_codegen_initialize_runtime_metadata(&"ScaleX");
    il2cpp_codegen_initialize_runtime_metadata(&"OffsetX");
    il2cpp_codegen_initialize_runtime_metadata(&"Static");
    il2cpp_codegen_initialize_runtime_metadata(&"ScaleZ");
    il2cpp_codegen_initialize_runtime_metadata(&"PositionY");
    il2cpp_codegen_initialize_runtime_metadata(&"PositionX");
    il2cpp_codegen_initialize_runtime_metadata(&"Toggle");
    il2cpp_codegen_initialize_runtime_metadata(&"Checkmark");
    Il2CppMethodInitialized_0754802f = '\x01';
  }
  local_88 = (System_String_o *)0x0;
  uStack_80 = (Il2CppObject *)0x0;
  local_98 = (undefined1  [8])0x0;
  puStack_90 = (undefined1 *)0x0;
  local_78._0_4_ = 0;
  local_78._4_4_ = 0;
  local_b8 = (System_String_o *)0x0;
  local_c0 = (System_String_o *)0x0;
  __this_03 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_BaseSetting_string);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
             (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_BaseSetting_string_ctor);
  if (__this_03 != (System_Collections_Generic_Dictionary_BaseSetting__string__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___Add
              ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
               (Il2CppObject *)(__this->fields)._positionX,(Il2CppObject *)"PositionX",
               (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_BaseSetting_string_Add);
    System_Collections_Generic_Dictionary_object__object___Add
              ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
               (Il2CppObject *)(__this->fields)._positionY,(Il2CppObject *)"PositionY",
               (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_BaseSetting_string_Add);
    System_Collections_Generic_Dictionary_object__object___Add
              ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
               (Il2CppObject *)(__this->fields)._positionZ,(Il2CppObject *)"PositionZ",
               (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_BaseSetting_string_Add);
    System_Collections_Generic_Dictionary_object__object___Add
              ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
               (Il2CppObject *)(__this->fields)._rotationX,(Il2CppObject *)"RotationX",
               (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_BaseSetting_string_Add);
    System_Collections_Generic_Dictionary_object__object___Add
              ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
               (Il2CppObject *)(__this->fields)._rotationY,(Il2CppObject *)"RotationY",
               (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_BaseSetting_string_Add);
    System_Collections_Generic_Dictionary_object__object___Add
              ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
               (Il2CppObject *)(__this->fields)._rotationZ,(Il2CppObject *)"RotationZ",
               (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_BaseSetting_string_Add);
    System_Collections_Generic_Dictionary_object__object___Add
              ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
               (Il2CppObject *)(__this->fields)._scaleX,(Il2CppObject *)"ScaleX",
               (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_BaseSetting_string_Add);
    System_Collections_Generic_Dictionary_object__object___Add
              ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
               (Il2CppObject *)(__this->fields)._scaleY,(Il2CppObject *)"ScaleY",
               (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_BaseSetting_string_Add);
    System_Collections_Generic_Dictionary_object__object___Add
              ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
               (Il2CppObject *)(__this->fields)._scaleZ,(Il2CppObject *)"ScaleZ",
               (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_BaseSetting_string_Add);
    System_Collections_Generic_Dictionary_object__object___Add
              ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
               (Il2CppObject *)(__this->fields)._tilingX,(Il2CppObject *)"TilingX",
               (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_BaseSetting_string_Add);
    System_Collections_Generic_Dictionary_object__object___Add
              ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
               (Il2CppObject *)(__this->fields)._tilingY,(Il2CppObject *)"TilingY",
               (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_BaseSetting_string_Add);
    System_Collections_Generic_Dictionary_object__object___Add
              ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
               (Il2CppObject *)(__this->fields)._offsetX,(Il2CppObject *)"OffsetX",
               (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_BaseSetting_string_Add);
    System_Collections_Generic_Dictionary_object__object___Add
              ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
               (Il2CppObject *)(__this->fields)._offsetY,(Il2CppObject *)"OffsetY",
               (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_BaseSetting_string_Add);
    System_Collections_Generic_Dictionary_object__object___Add
              ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
               (Il2CppObject *)(__this->fields)._parent,(Il2CppObject *)"Parent",
               (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_BaseSetting_string_Add);
    System_Collections_Generic_Dictionary_object__object___Add
              ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
               (Il2CppObject *)(__this->fields)._active,(Il2CppObject *)"Active",
               (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_BaseSetting_string_Add);
    System_Collections_Generic_Dictionary_object__object___Add
              ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
               (Il2CppObject *)(__this->fields)._static,(Il2CppObject *)"Static",
               (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_BaseSetting_string_Add);
    System_Collections_Generic_Dictionary_object__object___Add
              ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
               (Il2CppObject *)(__this->fields)._networked,(Il2CppObject *)"Networked",
               (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_BaseSetting_string_Add);
    System_Collections_Generic_Dictionary_object__object___Add
              ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
               (Il2CppObject *)(__this->fields)._visible,(Il2CppObject *)"Visible",
               (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_BaseSetting_string_Add);
    __this_09 = (__this->fields)._components;
    if (__this_09 != (System_Collections_Generic_List_Dictionary_string__BaseSetting___o *)0x0) {
      iVar14 = 0;
      do {
        handle = TypeRef_UI_BaseSettingElement;
        if ((__this_09->fields)._size <= iVar14) {
          if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init(g_data_075567a8);
          }
          pSVar7 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
          if (pSVar7 != (System_Type_o *)0x0) {
            left = (System_Reflection_FieldInfo_o *)
                   (*(pSVar7->klass->vtable)._90_unknown.methodPtr)(pSVar7,"_setting",0x24);
            bVar5 = System_Reflection_FieldInfo__op_Equality
                              (left,(System_Reflection_FieldInfo_o *)0x0,(MethodInfo *)0x0);
            if (bVar5) {
              return;
            }
            pUVar11 = (__this->fields).SinglePanel;
            if ((pUVar11 != (UnityEngine_Transform_o *)0x0) &&
               (pSVar8 = UnityEngine_Component__GetComponentsInChildren_object_
                                   ((UnityEngine_Component_o *)pUVar11,true,
                                    (MethodInfo_34B1260 *)
                                    MethodInfo_UnityEngine_Component_GetComponentsInChildren_InputSettingElement_71a4fb0
                                   ), pSVar8 != (System_Object_array *)0x0)) {
              iVar14 = (int)pSVar8->max_length;
              if (left != (System_Reflection_FieldInfo_o *)0x0) {
                if (iVar14 < 1) goto label_05d8d241;
                uVar9 = pSVar8->max_length & 0xffffffff;
                uVar16 = 0;
                goto label_05d8d2e2;
              }
              if (iVar14 < 1) goto label_05d8d241;
            }
          }
          break;
        }
        __this_04 = (System_Collections_Generic_Dictionary_object__object__o *)
                    System_Collections_Generic_List_object___get_Item
                              ((System_Collections_Generic_List_object__o *)__this_09,iVar14,
                               (MethodInfo_395CF20 *)
                               MethodInfo_System_Collections_Generic_List_Dictionary_string_BaseSetting_get_Item
                              );
        if (__this_04 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
        System_Collections_Generic_Dictionary_object__object___GetEnumerator
                  ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)local_70,__this_04,
                   (MethodInfo_4AAD970 *)
                   MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_GetEnumerator);
        local_78._0_4_ = local_50;
        local_78._4_4_ = uStack_4c;
        local_88 = (System_String_o *)CONCAT44(uStack_5c,local_60);
        uStack_80 = (Il2CppObject *)CONCAT44(uStack_54,uStack_58);
        local_98 = (undefined1  [8])local_70._0_8_;
        puStack_90 = (undefined1 *)local_70._8_8_;
        local_70._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
        local_70._8_8_ = local_98;
        in_XMM1_Dc = uStack_58;
        in_XMM1_Dd = uStack_54;
        while (bVar5 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                                 ((System_Collections_Generic_Dictionary_Enumerator_object__object__o *)
                                  local_98,(MethodInfo_4CE66D0 *)
                                           MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_BaseSetting_MoveNext
                                 ), pIVar10 = uStack_80, pSVar6 = local_88, bVar5) {
          __this_00 = (__this->fields)._componentNames;
          if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) {
            ThrowNullReferenceException();
          }
          str1 = System_Collections_Generic_List_object___get_Item
                           ((System_Collections_Generic_List_object__o *)__this_00,iVar14,
                            (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_string_get_Item);
          if ((TypeInfo_UI_MapEditorInspectPanel->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel);
          }
          if (Il2CppMethodInitialized_07548009 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&":");
            il2cpp_codegen_initialize_runtime_metadata(&"Component:");
            Il2CppMethodInitialized_07548009 = '\x01';
          }
          pSVar6 = System_String__Concat_5302810
                             ("Component:",str1,":",pSVar6,(MethodInfo *)0x0);
          System_Collections_Generic_Dictionary_object__object___set_Item
                    ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,pIVar10,
                     (Il2CppObject *)pSVar6,
                     (MethodInfo_4AAD4C0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_BaseSetting_string_set_Item);
        }
        System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                  ((System_Collections_Generic_Dictionary_Enumerator_object__object__o *)local_98,
                   (MethodInfo_4CE67F0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_BaseSetting_Dispose);
        iVar14 = iVar14 + 1;
        __this_09 = (__this->fields)._components;
      } while (__this_09 != (System_Collections_Generic_List_Dictionary_string__BaseSetting___o *)0x0);
    }
  }
  goto label_05d8d8f3;
  while( true ) {
    pUVar3 = (UnityEngine_Component_o *)pSVar8->m_Items[uVar16];
    pIVar10 = (Il2CppObject *)
              (*(left->klass->vtable)._26_unknown.methodPtr)
                        (left,pUVar3,(left->klass->vtable)._26_unknown.method);
    if (pIVar10 != (Il2CppObject *)0x0) {
      bVar1 = (TypeInfo_Settings_BaseSetting->_2).typeHierarchyDepth;
      if (((bVar1 <= (pIVar10->klass->_2).typeHierarchyDepth) &&
          ((pIVar10->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
           (Il2CppClass *)TypeInfo_Settings_BaseSetting)) &&
         (bVar5 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                            ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,pIVar10,
                             (Il2CppObject **)&local_b8,
                             (MethodInfo_4AAF440 *)
                             MethodInfo_System_Collections_Generic_Dictionary_BaseSetting_string_TryGetValue),
         bVar5)) {
        pSVar4 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._mixedFields;
        if (pSVar4 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_05d8d8f3;
        bVar5 = System_Collections_Generic_HashSet_object___Contains
                          (pSVar4,(Il2CppObject *)local_b8,
                           (MethodInfo_4FB3720 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains
                          );
        if (bVar5) {
          if ((pUVar3 == (UnityEngine_Component_o *)0x0) ||
             (pUVar11 = UnityEngine_Component__get_transform(pUVar3,(MethodInfo *)0x0),
             pUVar11 == (UnityEngine_Transform_o *)0x0)) goto label_05d8d8f3;
          pUVar11 = UnityEngine_Transform__Find(pUVar11,"InputField",(MethodInfo *)0x0);
          __this_10 = (UnityEngine_UI_InputField_o *)0x0;
          if (pUVar11 != (UnityEngine_Transform_o *)0x0) {
            if (pUVar11 == (UnityEngine_Transform_o *)0x0) goto label_05d8d8f3;
            __this_10 = UnityEngine_Component__GetComponent_object_
                                  ((UnityEngine_Component_o *)pUVar11,
                                   (MethodInfo_34B0830 *)
                                   MethodInfo_UnityEngine_Component_GetComponent_InputField);
          }
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar5 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)__this_10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar5) {
            __this_05 = il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel_c__DisplayClass102_0);
            UI_MapEditorInspectPanel___c__DisplayClass102_0___ctor(__this_05,(MethodInfo *)0x0);
            if (__this_05 == (UI_MapEditorInspectPanel___c__DisplayClass102_0_o *)0x0) goto label_05d8d8f3;
            (__this_05->fields).__4__this = __this;
            Il2CppCodeGenWriteBarrier(&(__this_05->fields).__4__this);
            if (__this_10 == (UnityEngine_UI_InputField_o *)0x0) goto label_05d8d8f3;
            UnityEngine_UI_InputField__set_text(__this_10,"--",(MethodInfo *)0x0);
            (__this_05->fields).capturedKey = local_b8;
            Il2CppCodeGenWriteBarrier(&(__this_05->fields).capturedKey);
            __this_01 = (__this_10->fields).m_OnDidEndEdit;
            pUVar12 = (UnityEngine_Events_UnityAction_T0__o *)
                      il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction_string)
            ;
            UnityEngine_Events_UnityAction_object____ctor
                      (pUVar12,(Il2CppObject *)__this_05,
                       (intptr_t)
                       MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass102_0_ApplyMixedIndicators_b__0,
                       (MethodInfo_4311A10 *)0x0);
            if (__this_01 == (UnityEngine_UI_InputField_EndEditEvent_o *)0x0) goto label_05d8d8f3;
            UnityEngine_Events_UnityEvent_object___AddListener
                      ((UnityEngine_Events_UnityEvent_T0__o *)__this_01,pUVar12,
                       (MethodInfo_4318F80 *)MethodInfo_UnityEngine_Events_UnityEvent_string_AddListener);
          }
        }
      }
    }
    uVar16 = uVar16 + 1;
    uVar2 = (uint)pSVar8->max_length;
    uVar9 = (ulong)uVar2;
    if ((long)(int)uVar2 <= (long)uVar16) break;
label_05d8d2e2:
    if (uVar9 <= uVar16) goto label_05d8d8f8;
  }
label_05d8d241:
  pUVar11 = (__this->fields).SinglePanel;
  if ((pUVar11 != (UnityEngine_Transform_o *)0x0) &&
     (pSVar8 = UnityEngine_Component__GetComponentsInChildren_object_
                         ((UnityEngine_Component_o *)pUVar11,true,
                          (MethodInfo_34B1260 *)
                          MethodInfo_UnityEngine_Component_GetComponentsInChildren_ToggleSettingElement),
     pSVar8 != (System_Object_array *)0x0)) {
    iVar14 = (int)pSVar8->max_length;
    if (left == (System_Reflection_FieldInfo_o *)0x0) {
      if (0 < iVar14) goto label_05d8d8f3;
    }
    else if (0 < iVar14) {
      uVar9 = pSVar8->max_length & 0xffffffff;
      local_a0 = (UnityEngine_Transform_o *)0x0;
      uVar16 = 0;
      do {
        if (uVar9 <= uVar16) {
label_05d8d8f8:
          ThrowIndexOutOfRangeException();
        }
        pUVar3 = (UnityEngine_Component_o *)pSVar8->m_Items[uVar16];
        pIVar10 = (Il2CppObject *)
                  (*(left->klass->vtable)._26_unknown.methodPtr)
                            (left,pUVar3,(left->klass->vtable)._26_unknown.method);
        if (pIVar10 != (Il2CppObject *)0x0) {
          bVar1 = (TypeInfo_Settings_BaseSetting->_2).typeHierarchyDepth;
          if (((bVar1 <= (pIVar10->klass->_2).typeHierarchyDepth) &&
              ((pIVar10->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
               (Il2CppClass *)TypeInfo_Settings_BaseSetting)) &&
             (bVar5 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                                ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,pIVar10,
                                 (Il2CppObject **)&local_c0,
                                 (MethodInfo_4AAF440 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_BaseSetting_string_TryGetValue
                                ), bVar5)) {
            pSVar4 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._mixedFields;
            if (pSVar4 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_05d8d8f3;
            bVar5 = System_Collections_Generic_HashSet_object___Contains
                              (pSVar4,(Il2CppObject *)local_c0,
                               (MethodInfo_4FB3720 *)
                               MethodInfo_System_Collections_Generic_HashSet_string_Contains);
            if (bVar5) {
              __this_06 = il2cpp_codegen_object_new
                                    ((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel_c__DisplayClass102_1);
              UI_MapEditorInspectPanel___c__DisplayClass102_1___ctor(__this_06,(MethodInfo *)0x0);
              if (__this_06 == (UI_MapEditorInspectPanel___c__DisplayClass102_1_o *)0x0) goto label_05d8d8f3;
              (__this_06->fields).__4__this = __this;
              Il2CppCodeGenWriteBarrier(&(__this_06->fields).__4__this);
              if ((pUVar3 == (UnityEngine_Component_o *)0x0) ||
                 (pUVar11 = UnityEngine_Component__get_transform(pUVar3,(MethodInfo *)0x0),
                 pUVar11 == (UnityEngine_Transform_o *)0x0)) goto label_05d8d8f3;
              pUVar11 = UnityEngine_Transform__Find(pUVar11,"Toggle",(MethodInfo *)0x0);
              x = (UnityEngine_UI_Toggle_o *)0x0;
              if (pUVar11 != (UnityEngine_Transform_o *)0x0) {
                if (pUVar11 == (UnityEngine_Transform_o *)0x0) goto label_05d8d8f3;
                x = UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)pUVar11,
                               (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Toggle);
              }
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar5 = UnityEngine_Object__op_Equality
                                ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
              if (!bVar5) {
                if ((x == (UnityEngine_UI_Toggle_o *)0x0) ||
                   (local_a8 = x,
                   pUVar11 = UnityEngine_Component__get_transform
                                       ((UnityEngine_Component_o *)x,(MethodInfo *)0x0),
                   pUVar11 == (UnityEngine_Transform_o *)0x0)) goto label_05d8d8f3;
                pUVar11 = UnityEngine_Transform__Find(pUVar11,"Background",(MethodInfo *)0x0);
                if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                }
                bVar5 = UnityEngine_Object__op_Inequality
                                  ((UnityEngine_Object_o *)pUVar11,(UnityEngine_Object_o *)0x0,
                                   (MethodInfo *)0x0);
                local_b0 = pUVar11;
                if (bVar5) {
                  if (pUVar11 == (UnityEngine_Transform_o *)0x0) goto label_05d8d8f3;
                  pUVar11 = UnityEngine_Transform__Find(pUVar11,"Checkmark",(MethodInfo *)0x0);
                  pUVar15 = (UnityEngine_UI_Image_o *)0x0;
                  if (pUVar11 == (UnityEngine_Transform_o *)0x0) {
                  }
                  else {
                    if (pUVar11 == (UnityEngine_Transform_o *)0x0) goto label_05d8d8f3;
                    pUVar15 = UnityEngine_Component__GetComponent_object_
                                        ((UnityEngine_Component_o *)pUVar11,
                                         (MethodInfo_34B0830 *)
                                         MethodInfo_UnityEngine_Component_GetComponent_Image);
                    local_a0 = pUVar11;
                  }
                }
                else {
                  pUVar15 = (UnityEngine_UI_Image_o *)0x0;
                }
                (__this_06->fields).checkmark = pUVar15;
                Il2CppCodeGenWriteBarrier(&(__this_06->fields).checkmark);
                pUVar15 = (__this_06->fields).checkmark;
                if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                }
                bVar5 = UnityEngine_Object__op_Equality
                                  ((UnityEngine_Object_o *)pUVar15,(UnityEngine_Object_o *)0x0,
                                   (MethodInfo *)0x0);
                if (!bVar5) {
                  UnityEngine_UI_Toggle__SetIsOnWithoutNotify(local_a8,false,(MethodInfo *)0x0);
                  pUVar15 = (__this_06->fields).checkmark;
                  if (((pUVar15 == (UnityEngine_UI_Image_o *)0x0) ||
                      (UnityEngine_Behaviour__set_enabled
                                 ((UnityEngine_Behaviour_o *)pUVar15,false,(MethodInfo *)0x0),
                      local_b0 == (UnityEngine_Transform_o *)0x0)) ||
                     (__this_07 = UnityEngine_Component__GetComponent_object_
                                            ((UnityEngine_Component_o *)local_b0,
                                             (MethodInfo_34B0830 *)
                                             MethodInfo_UnityEngine_Component_GetComponent_RectTransform),
                     __this_07 == (UnityEngine_RectTransform_o *)0x0)) goto label_05d8d8f3;
                  UVar17 = UnityEngine_RectTransform__get_rect(__this_07,(MethodInfo *)0x0);
                  local_48._8_4_ = in_XMM1_Dc;
                  local_48._0_8_ = UVar17.fields._8_8_;
                  local_48._12_4_ = in_XMM1_Dd;
                  if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
                  }
                  pUVar11 = UnityEngine_Component__get_transform(pUVar3,(MethodInfo *)0x0);
                  pUVar15 = (__this_06->fields).checkmark;
                  if (pUVar15 == (UnityEngine_UI_Image_o *)0x0) goto label_05d8d8f3;
                  fontSize = (int32_t)((float)local_48._4_4_ * 0.9);
                  if (fontSize < 0xb) {
                    fontSize = 10;
                  }
                  color = (*(pUVar15->klass->vtable)._22_get_color.methodPtr)
                                    (pUVar15,(pUVar15->klass->vtable)._22_get_color.method);
                  __this_08 = UI_ElementFactory__CreateOverlayLabel
                                        (local_b0,pUVar11,"--",color,4,1,fontSize,
                                         (MethodInfo *)0x0);
                  if (__this_08 == (UnityEngine_UI_Text_o *)0x0) goto label_05d8d8f3;
                  pUVar13 = UnityEngine_Component__get_gameObject
                                      ((UnityEngine_Component_o *)__this_08,(MethodInfo *)0x0);
                  (__this_06->fields).labelGO = pUVar13;
                  Il2CppCodeGenWriteBarrier(&(__this_06->fields).labelGO);
                  (__this_06->fields).capturedKey = local_c0;
                  Il2CppCodeGenWriteBarrier(&(__this_06->fields).capturedKey);
                  __this_02 = (UnityEngine_Events_UnityEvent_bool__o *)(local_a8->fields).onValueChanged;
                  pUVar12 = (UnityEngine_Events_UnityAction_T0__o *)
                            il2cpp_codegen_object_new
                                      ((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction_bool);
                  UnityEngine_Events_UnityAction_bool____ctor
                            ((UnityEngine_Events_UnityAction_bool__o *)pUVar12,(Il2CppObject *)__this_06,
                             (intptr_t)
                             MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass102_1_ApplyMixedIndicators_b__1
                             ,(MethodInfo_4311710 *)0x0);
                  if (__this_02 == (UnityEngine_Events_UnityEvent_bool__o *)0x0) goto label_05d8d8f3;
                  UnityEngine_Events_UnityEvent_bool___AddListener
                            (__this_02,pUVar12,
                             (MethodInfo_43179D0 *)MethodInfo_UnityEngine_Events_UnityEvent_bool_AddListener);
                }
              }
            }
          }
        }
        uVar16 = uVar16 + 1;
        uVar2 = (uint)pSVar8->max_length;
        uVar9 = (ulong)uVar2;
      } while ((long)uVar16 < (long)(int)uVar2);
    }
    return;
  }
label_05d8d8f3:
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel$$OnSelectTexture
// il2cpp: void UI_MapEditorInspectPanel__OnSelectTexture (UI_MapEditorInspectPanel_o* __this, System_String_o* texture, const MethodInfo* method);
// 0x5d907a0

void UI_MapEditorInspectPanel__OnSelectTexture
               (UI_MapEditorInspectPanel_o *__this,System_String_o *texture,MethodInfo *method)

{
  Settings_StringSetting_o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  Map_MapScriptBasicMaterial_o *pMVar1;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07548030 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinMapTextures);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_MapScriptBasicMaterial_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    Il2CppMethodInitialized_07548030 = '\x01';
  }
  __this_00 = (__this->fields)._texture;
  if ((TypeInfo_Map_BuiltinMapTextures->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinMapTextures);
  }
  __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
              TypeInfo_Map_BuiltinMapTextures->static_fields->AllTextures;
  if (__this_01 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pMVar1 = System_Collections_Generic_Dictionary_object__object___get_Item
                       (__this_01,(Il2CppObject *)texture,
                        (MethodInfo_4AAD450 *)
                        MethodInfo_System_Collections_Generic_Dictionary_string_MapScriptBasicMaterial_get_Item
                       );
    if ((pMVar1 != (Map_MapScriptBasicMaterial_o *)0x0) && (__this_00 != (Settings_StringSetting_o *)0x0)) {
      method_00 = (MethodInfo *)(pMVar1->fields).Texture;
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)method_00,
                 (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
      UI_MapEditorInspectPanel__OnChange(__this,method_00);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel$$OnChange
// il2cpp: void UI_MapEditorInspectPanel__OnChange (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x5d7ed70
// eh: try 0x5d80a8c..0x5d81c5c -> pad 0x5d82b83 (+60 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5d81d2b..0x5d81d3d -> pad 0x5d82c5d catch Il2CppExceptionWrapper, cleanup
// eh: try 0x5d81d54..0x5d81d5c -> pad 0x5d82bc4 catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5d81d76..0x5d81d98 -> pad 0x5d82c55 catch Il2CppExceptionWrapper, cleanup
// eh: try 0x5d81db6..0x5d81e04 -> pad 0x5d82bb6 (+2 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5d81e12..0x5d81ed5 -> pad 0x5d82c45 (+2 call sites) catch Il2CppExceptionWrapper, cleanup
// eh: try 0x5d81ef8..0x5d8202e -> pad 0x5d82ba1 (+7 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5d8204c..0x5d8206b -> pad 0x5d82c3b catch Il2CppExceptionWrapper, cleanup
// eh: try 0x5d8207e..0x5d8222c -> pad 0x5d82b9d (+8 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5d825a3..0x5d825a8 -> pad 0x5d82c2e catch Il2CppExceptionWrapper, cleanup
// eh: try 0x5d825a8..0x5d8279d -> pad 0x5d82bbe (+96 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5d82bdc..0x5d82be1 -> pad 0x5d82c11 cleanup
// eh: try 0x5d82c14..0x5d82c1e -> pad 0x5d82c26 catch (...) [compiler noexcept guard]
// asm: 350 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d80d3d: nop dword ptr [rax]
// asm:   0x5d80d83: jmp 0x5d80f70
// asm:   0x5d80de0: movaps xmm3, xmm0
// asm:   0x5d80de3: shufps xmm3, xmm0, 0x55
// asm:   0x5d80de7: movaps xmm4, xmm1
// asm:   0x5d80dea: cmp byte ptr [rsp + 0x94], 0
// asm:   0x5d80df4: jmp 0x5d80e5c
// asm:   0x5d80e10: movaps xmm2, xmm0
// asm:   0x5d80e13: cmp byte ptr [rsp + 0x98], 0
// asm:   0x5d80fb7: movaps xmm3, xmm0
// asm:   0x5d80fba: shufps xmm3, xmm0, 0x55
// asm:   0x5d80fbe: movaps xmm4, xmm1
// asm:   0x5d80fc1: cmp byte ptr [rsp + 0x64], 0
// asm:   0x5d80fc8: jmp 0x5d81016
// asm:   0x5d80fd0: movaps xmm2, xmm0
// asm:   0x5d80fd3: cmp byte ptr [rsp + 0x78], 0
// asm:   0x5d8114f: nop 
// asm:   0x5d81197: movaps xmm3, xmm0
// asm:   0x5d8119a: shufps xmm3, xmm0, 0x55
// asm:   0x5d8119e: movaps xmm4, xmm1
// asm:   0x5d811a1: cmp byte ptr [rsp + 0x58], 0
// asm:   0x5d811a8: jmp 0x5d811f6
// asm:   0x5d811b0: movaps xmm2, xmm0
// asm:   0x5d811b3: cmp byte ptr [rsp + 0x5c], 0
// asm:   0x5d8190b: jmp 0x5d81cae
// asm:   0x5d81a96: jmp 0x5d81c94
// asm:   0x5d81b82: jmp 0x5d80d55
// asm:   0x5d81cbc: nop dword ptr [rax]
// asm:   0x5d81ec0: jmp 0x5d81f8c
// asm:   0x5d82479: jmp 0x5d824de
// asm:   0x5d824b4: mov rdi, rbx
// asm:   0x5d824b7: mov rsi, rax
// asm:   0x5d824ba: jmp 0x5d82519
// asm:   0x5d82513: mov rdi, r14
// asm:   0x5d82516: mov rsi, rbx
// asm:   0x5d8275e: call 0x30d63a0  ; ThrowNullReferenceException()
// asm:   0x5d82763: call 0x30d63a0  ; ThrowNullReferenceException()
// asm:   0x5d82772: call 0x30d63a0  ; ThrowNullReferenceException()
// asm:   0x5d8279d: jmp 0x5d82bc4
// asm:   0x5d827a2: jmp 0x5d82bc4
// asm:   0x5d827a7: jmp 0x5d82bc4
// asm:   0x5d827ac: jmp 0x5d82bc4
// asm:   0x5d827b1: mov rbp, rax
// asm:   0x5d827b4: jmp 0x5d82bc7
// asm:   0x5d827b9: jmp 0x5d82bc4
// asm:   0x5d827be: mov rbp, rax
// asm:   0x5d827c1: jmp 0x5d82bc7
// asm:   0x5d827c6: jmp 0x5d82bc4
// asm:   0x5d827cb: jmp 0x5d82bc4
// asm:   0x5d827d0: jmp 0x5d82c2e
// asm:   0x5d827d5: jmp 0x5d82c2e
// asm:   0x5d827da: jmp 0x5d82c2e
// asm:   0x5d827df: jmp 0x5d82bc4
// asm:   0x5d827e4: jmp 0x5d82c2e
// asm:   0x5d827e9: jmp 0x5d82c2e
// asm:   0x5d827ee: jmp 0x5d82c2e
// asm:   0x5d827f3: jmp 0x5d82c2e
// asm:   0x5d827f8: jmp 0x5d82bc4
// asm:   0x5d827fd: jmp 0x5d82bc4
// asm:   0x5d82802: mov rbp, rax
// asm:   0x5d82805: jmp 0x5d82bc7
// asm:   0x5d8280a: mov rbp, rax
// asm:   0x5d8280d: jmp 0x5d82bc7
// asm:   0x5d82812: jmp 0x5d82bc4
// asm:   0x5d82817: jmp 0x5d82c2e
// asm:   0x5d8281c: jmp 0x5d82c2e
// asm:   0x5d82821: jmp 0x5d82823
// asm:   0x5d82823: mov rbp, rax
// asm:   0x5d82826: mov cl, 1
// asm:   0x5d82828: mov qword ptr [rsp + 0x18], rcx
// asm:   0x5d8282d: jmp 0x5d82bc7
// asm:   0x5d82832: jmp 0x5d82bc4
// asm:   0x5d82837: jmp 0x5d82bc4
// asm:   0x5d8283c: mov rbp, rax
// asm:   0x5d8283f: jmp 0x5d82bc7
// asm:   0x5d82844: mov rbp, rax
// asm:   0x5d82847: jmp 0x5d82bc7
// asm:   0x5d8284c: mov rbp, rax
// asm:   0x5d8284f: jmp 0x5d82bc7
// asm:   0x5d82854: mov rbp, rax
// asm:   0x5d82857: jmp 0x5d82bc7
// asm:   0x5d8285c: mov rbp, rax
// asm:   0x5d8285f: jmp 0x5d82bc7
// asm:   0x5d82864: jmp 0x5d82bc4
// asm:   0x5d82869: mov rbp, rax
// asm:   0x5d8286c: jmp 0x5d82bc7
// asm:   0x5d82871: mov rbp, rax
// asm:   0x5d82874: jmp 0x5d82bc7
// asm:   0x5d82879: jmp 0x5d82c2e
// asm:   0x5d8287e: jmp 0x5d82c2e
// asm:   0x5d82883: jmp 0x5d82c2e
// asm:   0x5d82888: jmp 0x5d82c2e
// asm:   0x5d8288d: jmp 0x5d82c2e
// asm:   0x5d82892: jmp 0x5d82c2e
// asm:   0x5d82897: jmp 0x5d82c2e
// asm:   0x5d8289c: jmp 0x5d82c2e
// asm:   0x5d828a1: mov rbp, rax
// asm:   0x5d828a4: jmp 0x5d82bc7
// asm:   0x5d828a9: mov rbp, rax
// asm:   0x5d828ac: jmp 0x5d82bc7
// asm:   0x5d828b1: mov rbp, rax
// asm:   0x5d828b4: jmp 0x5d82bc7
// asm:   0x5d828b9: jmp 0x5d82bc4
// asm:   0x5d828be: mov rbp, rax
// asm:   0x5d828c1: jmp 0x5d82bc7
// asm:   0x5d828c6: mov rbp, rax
// asm:   0x5d828c9: jmp 0x5d82bc7
// asm:   0x5d828ce: mov rbp, rax
// asm:   0x5d828d1: jmp 0x5d82bc7
// asm:   0x5d828d6: jmp 0x5d82bc4
// asm:   0x5d828db: mov rbp, rax
// asm:   0x5d828de: jmp 0x5d82bc7
// asm:   0x5d828e3: mov rbp, rax
// asm:   0x5d828e6: jmp 0x5d82bc7
// asm:   0x5d828eb: mov rbp, rax
// asm:   0x5d828ee: jmp 0x5d82bc7
// asm:   0x5d828f3: mov rbp, rax
// asm:   0x5d828f6: jmp 0x5d82bc7
// asm:   0x5d828fb: jmp 0x5d82c2e
// asm:   0x5d82900: mov rbp, rax
// asm:   0x5d82903: jmp 0x5d82bc7
// asm:   0x5d82908: mov rbp, rax
// asm:   0x5d8290b: jmp 0x5d82bc7
// asm:   0x5d82910: jmp 0x5d82c2e
// asm:   0x5d82915: jmp 0x5d82c2e
// asm:   0x5d8291a: jmp 0x5d82bc4
// asm:   0x5d8291f: mov rbp, rax
// asm:   0x5d82922: jmp 0x5d82bc7
// asm:   0x5d82927: mov rbp, rax
// asm:   0x5d8292a: jmp 0x5d82bc7
// asm:   0x5d8292f: mov rbp, rax
// asm:   0x5d82932: jmp 0x5d82bc7
// asm:   0x5d82937: mov rbp, rax
// asm:   0x5d8293a: jmp 0x5d82bc7
// asm:   0x5d8293f: jmp 0x5d82bc4
// asm:   0x5d82944: mov rbp, rax
// asm:   0x5d82947: jmp 0x5d82bc7
// asm:   0x5d8294c: mov rbp, rax
// asm:   0x5d8294f: jmp 0x5d82bc7
// asm:   0x5d82954: mov rbp, rax
// asm:   0x5d82957: jmp 0x5d82bc7
// asm:   0x5d8295c: mov rbp, rax
// asm:   0x5d8295f: jmp 0x5d82bc7
// asm:   0x5d82964: mov rbp, rax
// asm:   0x5d82967: jmp 0x5d82bc7
// asm:   0x5d8296c: mov rbp, rax
// asm:   0x5d8296f: jmp 0x5d82bc7
// asm:   0x5d82974: mov rbp, rax
// asm:   0x5d82977: jmp 0x5d82bc7
// asm:   0x5d8297c: mov rbp, rax
// asm:   0x5d8297f: jmp 0x5d82bc7
// asm:   0x5d82984: jmp 0x5d82bc4
// asm:   0x5d82989: mov rbp, rax
// asm:   0x5d8298c: jmp 0x5d82bc7
// asm:   0x5d82991: mov rbp, rax
// asm:   0x5d82994: jmp 0x5d82bc7
// asm:   0x5d82999: jmp 0x5d82bc4
// asm:   0x5d8299e: mov rbp, rax
// asm:   0x5d829a1: jmp 0x5d82bc7
// asm:   0x5d829a6: mov rbp, rax
// asm:   0x5d829a9: jmp 0x5d82bc7
// asm:   0x5d829ae: mov rbp, rax
// asm:   0x5d829b1: jmp 0x5d82bc7
// asm:   0x5d829b6: mov rbp, rax
// asm:   0x5d829b9: jmp 0x5d82bc7
// asm:   0x5d829be: mov rbp, rax
// asm:   0x5d829c1: jmp 0x5d82bc7
// asm:   0x5d829c6: mov rbp, rax
// asm:   0x5d829c9: jmp 0x5d82bc7
// asm:   0x5d829ce: mov rbp, rax
// asm:   0x5d829d1: jmp 0x5d82bc7
// asm:   0x5d829d6: mov rbp, rax
// asm:   0x5d829d9: jmp 0x5d82bc7
// asm:   0x5d829de: mov rbp, rax
// asm:   0x5d829e1: jmp 0x5d82bc7
// asm:   0x5d829e6: mov rbp, rax
// asm:   0x5d829e9: jmp 0x5d82bc7
// asm:   0x5d829ee: mov rbp, rax
// asm:   0x5d829f1: jmp 0x5d82bc7
// asm:   0x5d829f6: mov rbp, rax
// asm:   0x5d829f9: jmp 0x5d82bc7
// asm:   0x5d829fe: mov rbp, rax
// asm:   0x5d82a01: jmp 0x5d82bc7
// asm:   0x5d82a06: jmp 0x5d82bc4
// asm:   0x5d82a0b: mov rbp, rax
// asm:   0x5d82a0e: jmp 0x5d82bc7
// asm:   0x5d82a13: jmp 0x5d82c2e
// asm:   0x5d82a18: mov rbp, rax
// asm:   0x5d82a1b: jmp 0x5d82bc7
// asm:   0x5d82a20: mov rbp, rax
// asm:   0x5d82a23: jmp 0x5d82bc7
// asm:   0x5d82a28: jmp 0x5d82c2e
// asm:   0x5d82a2d: jmp 0x5d82c2e
// asm:   0x5d82a32: jmp 0x5d82c2e
// asm:   0x5d82a37: jmp 0x5d82c2e
// asm:   0x5d82a3c: mov rbp, rax
// asm:   0x5d82a3f: jmp 0x5d82bc7
// asm:   0x5d82a44: jmp 0x5d82c2e
// asm:   0x5d82a49: jmp 0x5d82c2e
// asm:   0x5d82a4e: mov rbp, rax
// asm:   0x5d82a51: jmp 0x5d82bc7
// asm:   0x5d82a56: mov rbp, rax
// asm:   0x5d82a59: jmp 0x5d82bc7
// asm:   0x5d82a5e: mov rbp, rax
// asm:   0x5d82a61: jmp 0x5d82bc7
// asm:   0x5d82a66: mov rbp, rax
// asm:   0x5d82a69: jmp 0x5d82bc7
// asm:   0x5d82a6e: mov rbp, rax
// asm:   0x5d82a71: jmp 0x5d82bc7
// asm:   0x5d82a76: mov rbp, rax
// asm:   0x5d82a79: jmp 0x5d82bc7
// asm:   0x5d82a7e: mov rbp, rax
// asm:   0x5d82a81: jmp 0x5d82bc7
// asm:   0x5d82a86: mov rbp, rax
// asm:   0x5d82a89: jmp 0x5d82bc7
// asm:   0x5d82a8e: mov rbp, rax
// asm:   0x5d82a91: jmp 0x5d82bc7
// asm:   0x5d82a96: mov rbp, rax
// asm:   0x5d82a99: jmp 0x5d82bc7
// asm:   0x5d82a9e: mov rbp, rax
// asm:   0x5d82aa1: jmp 0x5d82bc7
// asm:   0x5d82aa6: jmp 0x5d82bc4
// asm:   0x5d82aab: mov rbp, rax
// asm:   0x5d82aae: jmp 0x5d82bc7
// asm:   0x5d82ab3: mov rbp, rax
// asm:   0x5d82ab6: jmp 0x5d82bc7
// asm:   0x5d82abb: mov rbp, rax
// asm:   0x5d82abe: jmp 0x5d82bc7
// asm:   0x5d82ac3: jmp 0x5d82bc4
// asm:   0x5d82ac8: mov rbp, rax
// asm:   0x5d82acb: jmp 0x5d82bc7
// asm:   0x5d82ad0: mov rbp, rax
// asm:   0x5d82ad3: jmp 0x5d82bc7
// asm:   0x5d82ad8: mov rbp, rax
// asm:   0x5d82adb: jmp 0x5d82bc7
// asm:   0x5d82ae0: mov rbp, rax
// asm:   0x5d82ae3: jmp 0x5d82bc7
// asm:   0x5d82ae8: mov rbp, rax
// asm:   0x5d82aeb: jmp 0x5d82bc7
// asm:   0x5d82af0: mov rbp, rax
// asm:   0x5d82af3: jmp 0x5d82bc7
// asm:   0x5d82af8: mov rbp, rax
// asm:   0x5d82afb: jmp 0x5d82bc7
// asm:   0x5d82b00: mov rbp, rax
// asm:   0x5d82b03: jmp 0x5d82bc7
// asm:   0x5d82b08: jmp 0x5d82bc4
// asm:   0x5d82b0d: mov rbp, rax
// asm:   0x5d82b10: jmp 0x5d82bc7
// asm:   0x5d82b15: mov rbp, rax
// asm:   0x5d82b18: jmp 0x5d82bc7
// asm:   0x5d82b1d: mov rbp, rax
// asm:   0x5d82b20: jmp 0x5d82bc7
// asm:   0x5d82b25: mov rbp, rax
// asm:   0x5d82b28: jmp 0x5d82bc7
// asm:   0x5d82b2d: mov rbp, rax
// asm:   0x5d82b30: jmp 0x5d82bc7
// asm:   0x5d82b35: mov rbp, rax
// asm:   0x5d82b38: jmp 0x5d82bc7
// asm:   0x5d82b3d: mov rbp, rax
// asm:   0x5d82b40: jmp 0x5d82bc7
// asm:   0x5d82b45: mov rbp, rax
// asm:   0x5d82b48: jmp 0x5d82bc7
// asm:   0x5d82b4a: mov rbp, rax
// asm:   0x5d82b4d: jmp 0x5d82bc7
// asm:   0x5d82b4f: mov rbp, rax
// asm:   0x5d82b52: jmp 0x5d82bc7
// asm:   0x5d82b54: mov rbp, rax
// asm:   0x5d82b57: jmp 0x5d82bc7
// asm:   0x5d82b59: mov rbp, rax
// asm:   0x5d82b5c: jmp 0x5d82bc7
// asm:   0x5d82b5e: jmp 0x5d82c2e
// asm:   0x5d82b63: jmp 0x5d82c2e
// asm:   0x5d82b68: jmp 0x5d82c2e
// asm:   0x5d82b6d: jmp 0x5d82c2e
// asm:   0x5d82b72: jmp 0x5d82c2e
// asm:   0x5d82b77: mov rbp, rax
// asm:   0x5d82b7a: jmp 0x5d82bc7
// asm:   0x5d82b7c: jmp 0x5d82bc4
// asm:   0x5d82b7e: mov rbp, rax
// asm:   0x5d82b81: jmp 0x5d82bc7
// asm:   0x5d82b83: mov rbp, rax
// asm:   0x5d82b86: jmp 0x5d82bc7
// asm:   0x5d82b88: mov rbp, rax
// asm:   0x5d82b8b: jmp 0x5d82bc7
// asm:   0x5d82b8d: jmp 0x5d82bc4
// asm:   0x5d82b8f: jmp 0x5d82bc4
// asm:   0x5d82b91: jmp 0x5d82bc4
// asm:   0x5d82b93: jmp 0x5d82bc4
// asm:   0x5d82b95: jmp 0x5d82bc4
// asm:   0x5d82b97: jmp 0x5d82bc4
// asm:   0x5d82b99: jmp 0x5d82bc4
// asm:   0x5d82b9b: jmp 0x5d82bc4
// asm:   0x5d82b9d: jmp 0x5d82bc4
// asm:   0x5d82b9f: jmp 0x5d82bc4
// asm:   0x5d82ba1: mov rbp, rax
// asm:   0x5d82ba4: jmp 0x5d82bc7
// asm:   0x5d82ba6: mov rbp, rax
// asm:   0x5d82ba9: jmp 0x5d82bc7
// asm:   0x5d82bab: mov rbp, rax
// asm:   0x5d82bae: jmp 0x5d82bc7
// asm:   0x5d82bb0: jmp 0x5d82bc4
// asm:   0x5d82bb2: jmp 0x5d82bc4
// asm:   0x5d82bb4: jmp 0x5d82bc4
// asm:   0x5d82bb6: jmp 0x5d82bc4
// asm:   0x5d82bb8: jmp 0x5d82bc4
// asm:   0x5d82bba: jmp 0x5d82bc4
// asm:   0x5d82bbc: jmp 0x5d82bc4
// asm:   0x5d82bbe: jmp 0x5d82bc4
// asm:   0x5d82bc0: jmp 0x5d82bc4
// asm:   0x5d82bc2: jmp 0x5d82bc4
// asm:   0x5d82bc4: mov rbp, rax
// asm:   0x5d82bc7: cmp edx, 1
// asm:   0x5d82bca: jne 0x5d82c14
// asm:   0x5d82bcc: mov rdi, rbp
// asm:   0x5d82bcf: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d82bd4: mov rbx, qword ptr [rax]
// asm:   0x5d82bd7: mov qword ptr [rsp + 0x38], rbx
// asm:   0x5d82bdc: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d82be1: mov r12, qword ptr [rsp + 0xe8]
// asm:   0x5d82be9: lea rax, [rip + 0x150b7d0]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_Dispose
// asm:   0x5d82bf0: mov rsi, qword ptr [rax]
// asm:   0x5d82bf3: lea rdi, [rsp + 0x150]
// asm:   0x5d82bfb: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5d82c00: test rbx, rbx
// asm:   0x5d82c03: je 0x5d82248
// asm:   0x5d82c09: mov rdi, rbx
// asm:   0x5d82c0c: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d82c11: mov rbp, rax
// asm:   0x5d82c14: lea rdi, [rsp + 0x38]
// asm:   0x5d82c19: call 0x2fdd790  ; il2cpp_runtime_helper_02fdd790()
// asm:   0x5d82c1e: mov rdi, rbp
// asm:   0x5d82c21: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5d82c26: mov rdi, rax
// asm:   0x5d82c29: call 0x2ab61e0  ; __clang_call_terminate()
// asm:   0x5d82c2e: mov rbp, rax
// asm:   0x5d82c31: mov eax, r14d
// asm:   0x5d82c34: mov qword ptr [rsp + 0x18], rax
// asm:   0x5d82c39: jmp 0x5d82bc7
// asm:   0x5d82c3b: mov rbp, rax
// asm:   0x5d82c3e: jmp 0x5d82bc7
// asm:   0x5d82c40: mov rbp, rax
// asm:   0x5d82c43: jmp 0x5d82bc7
// asm:   0x5d82c45: mov rbp, rax
// asm:   0x5d82c48: jmp 0x5d82bc7
// asm:   0x5d82c4d: mov rbp, rax
// asm:   0x5d82c50: jmp 0x5d82bc7
// asm:   0x5d82c55: mov rbp, rax
// asm:   0x5d82c58: jmp 0x5d82bc7
// asm:   0x5d82c5d: mov rbp, rax
// asm:   0x5d82c60: jmp 0x5d82bc7

void UI_MapEditorInspectPanel__OnChange(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  System_String_o **ppSVar1;
  int32_t *piVar2;
  void **targetAddress;
  byte bVar3;
  uint32_t uVar4;
  uint uVar5;
  Settings_StringSetting_o *pSVar6;
  System_Collections_Generic_Dictionary_object__object__o *pSVar7;
  Settings_BoolSetting_o *pSVar8;
  Settings_IntSetting_o *pSVar9;
  System_Collections_Generic_HashSet_object__o *pSVar10;
  System_Collections_Generic_List_MapObject__o *pSVar11;
  System_Collections_Generic_Dictionary_int__object__o *pSVar12;
  UnityEngine_GameObject_o *pUVar13;
  Map_MapObject_array *pMVar14;
  Settings_ColorSetting_o *pSVar15;
  System_String_c *pSVar16;
  Il2CppClass **ppIVar17;
  System_Collections_Generic_List_Dictionary_string__BaseSetting___o *__this_00;
  Il2CppObject *pIVar18;
  System_Object_array *pSVar19;
  UI_MapEditorMenu_o *pUVar20;
  undefined1 auVar21 [16];
  float fVar22;
  Il2CppType *handle;
  Map_MapScriptReflectiveMaterial_c *pMVar23;
  MethodInfo *pMVar24;
  Map_MapScriptBaseObject_o *pMVar25;
  Map_MapObject_o *obj;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  bool bVar29;
  int32_t iVar30;
  System_String_o *pSVar31;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined7 extraout_var_01;
  undefined7 extraout_var_02;
  undefined7 extraout_var_03;
  undefined7 extraout_var_04;
  undefined7 extraout_var_05;
  undefined7 extraout_var_06;
  undefined7 extraout_var_07;
  undefined7 extraout_var_08;
  undefined7 extraout_var_09;
  undefined7 extraout_var_10;
  undefined7 extraout_var_11;
  undefined7 extraout_var_12;
  undefined7 extraout_var_13;
  undefined7 extraout_var_14;
  undefined7 extraout_var_15;
  undefined7 extraout_var_16;
  undefined7 extraout_var_17;
  undefined7 extraout_var_18;
  undefined7 extraout_var_19;
  undefined7 extraout_var_20;
  undefined7 extraout_var_21;
  undefined7 extraout_var_22;
  System_Collections_Generic_List_MapObject__o *scaleObjects;
  System_String_o *pSVar32;
  Map_MapObject_o *pMVar33;
  UnityEngine_Transform_o *pUVar34;
  Map_MapScriptBaseMaterial_o *__this_01;
  System_Type_o *pSVar35;
  System_Type_o *pSVar36;
  float *pfVar37;
  Map_MapScriptDefaultTiledMaterial_o *__this_02;
  Map_MapScriptBasicMaterial_o *__this_03;
  Settings_FloatSetting_o *pSVar38;
  UI_MapEditorInspectPanel___c__DisplayClass104_0_o *__this_04;
  System_Collections_Generic_Dictionary_string__BaseSetting__o *settings;
  System_Collections_Generic_Dictionary_string__string__o *source;
  System_Collections_Generic_Dictionary_string__string__o *__this_05;
  System_Func_T__TResult__o *pSVar39;
  System_Collections_Generic_IEnumerable_TSource__o *source_00;
  UI_MapEditorInspectPanel___c_StaticFields *pUVar40;
  System_Func_T__TResult__o *__this_06;
  System_Collections_Generic_Dictionary_TKey__TElement__o *__this_07;
  System_Predicate_T__o *match;
  Map_MapScriptComponent_o *pMVar41;
  Map_MapScriptReflectiveMaterial_o *__this_08;
  Map_MapScriptLegacyMaterial_o *__this_09;
  System_Collections_Generic_List_object__o *pSVar42;
  MethodInfo *pMVar43;
  System_Collections_Generic_List_string__o *pSVar44;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *method_00;
  MethodInfo *method_01;
  char cVar45;
  byte bVar46;
  System_Collections_Generic_Dictionary_string__string__o **ppSVar47;
  UI_MapEditorInspectPanel_c *pUVar48;
  UI_MapEditorInspectPanel_o *pUVar49;
  GameManagers_MapEditorGameManager_o *pGVar50;
  MethodInfo *in_R8;
  System_String_o **material;
  ulong uVar51;
  undefined7 uVar52;
  int iVar53;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar54 [16];
  float in_XMM1_Db;
  float fVar55;
  undefined4 uVar56;
  float in_XMM1_Dc;
  float fVar57;
  undefined4 uVar58;
  float in_XMM1_Dd;
  float fVar59;
  undefined4 uVar60;
  undefined1 auVar61 [16];
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  UnityEngine_Vector3_o UVar66;
  UnityEngine_Vector3_o a;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o value_00;
  UnityEngine_Quaternion_o value_01;
  UnityEngine_Vector3_o b;
  bool local_199;
  float local_198;
  byte local_191;
  ulong local_190;
  byte local_181;
  Map_MapScriptBaseObject_o *local_180;
  byte local_173;
  byte local_172;
  byte local_171;
  undefined1 local_170 [16];
  Map_MapObject_o *local_160;
  bool local_157;
  bool local_156;
  byte local_155;
  uint local_154;
  uint local_150;
  uint local_14c;
  uint local_148;
  uint local_144;
  uint local_140;
  uint local_13c;
  uint local_138;
  uint local_134;
  uint local_130;
  uint local_12c;
  uint local_128;
  uint local_124;
  uint local_120;
  uint local_11c;
  uint local_118;
  uint local_114;
  uint local_110;
  uint local_10c;
  undefined8 local_108;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  ulong local_e0;
  uint local_d8;
  uint local_d4;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  int32_t local_c4;
  System_Collections_Generic_List_MapObject__o *local_c0;
  System_Collections_Generic_List_MapObject__o *local_b8;
  System_Collections_Generic_List_MapObject__o *local_b0;
  undefined8 local_a8;
  float local_a0;
  undefined8 local_98;
  float local_90;
  undefined8 local_88;
  float local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58 [8];
  undefined1 *puStack_50;
  Map_MapObject_o *local_48;
  System_Threading_CancellationTokenSource_o *local_40;
  float local_38;
  
  if (Il2CppMethodInitialized_07548031 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MapEditor_CompositeCommand);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_string_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_ToDictionary_KeyValuePair_string_string_string_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_Where_KeyValuePair_string_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_KeyValuePair_string_string_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_KeyValuePair_string_string_bool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_MapObject_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapScriptComponent_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_BaseCommand_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapScriptComponent_FindIndex);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapObject_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_BaseCommand_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_MapObject_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BaseCommand_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapObject_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapScriptComponent_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Dictionary_string_BaseSetting_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BaseCommand_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapScriptComponent_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_MapObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_BaseCommand);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObjectShader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptBaseMaterial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_Map_MapScriptBasicMaterial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptBasicMaterial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptDefaultTiledMaterial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptLegacyMaterial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptReflectiveMaterial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptSceneObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Predicate_MapScriptComponent);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MapEditor_TransformPositionCommand);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MapEditor_TransformRotationCommand);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MapEditor_TransformScaleCommand);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorInspectPanel_c_OnChange_b__104_1);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorInspectPanel_c_OnChange_b__104_2);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass104_0_OnChange_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass104_0_OnChange_b__3);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorInspectPanel_c__DisplayClass104_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorInspectPanel_c);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    il2cpp_codegen_initialize_runtime_metadata(&"OffsetY");
    il2cpp_codegen_initialize_runtime_metadata(&"TilingX");
    il2cpp_codegen_initialize_runtime_metadata(&"CollideMode");
    il2cpp_codegen_initialize_runtime_metadata(&"Color");
    il2cpp_codegen_initialize_runtime_metadata(&"ReflectColor");
    il2cpp_codegen_initialize_runtime_metadata(&"R");
    il2cpp_codegen_initialize_runtime_metadata(&"ScaleY");
    il2cpp_codegen_initialize_runtime_metadata(&"RotationZ");
    il2cpp_codegen_initialize_runtime_metadata(&"Networked");
    il2cpp_codegen_initialize_runtime_metadata(&"TilingY");
    il2cpp_codegen_initialize_runtime_metadata(&"Name");
    il2cpp_codegen_initialize_runtime_metadata(&"--");
    il2cpp_codegen_initialize_runtime_metadata(&"RotationY");
    il2cpp_codegen_initialize_runtime_metadata(&"Visible");
    il2cpp_codegen_initialize_runtime_metadata(&"Texture");
    il2cpp_codegen_initialize_runtime_metadata(&"RotationX");
    il2cpp_codegen_initialize_runtime_metadata(&"PositionZ");
    il2cpp_codegen_initialize_runtime_metadata(&"Active");
    il2cpp_codegen_initialize_runtime_metadata(&"Parent");
    il2cpp_codegen_initialize_runtime_metadata(&"ScaleX");
    il2cpp_codegen_initialize_runtime_metadata(&"OffsetX");
    il2cpp_codegen_initialize_runtime_metadata(&"Shader");
    il2cpp_codegen_initialize_runtime_metadata(&"Static");
    il2cpp_codegen_initialize_runtime_metadata(&"ScaleZ");
    il2cpp_codegen_initialize_runtime_metadata(&"PositionY");
    il2cpp_codegen_initialize_runtime_metadata(&"CollideWith");
    il2cpp_codegen_initialize_runtime_metadata(&"PositionX");
    il2cpp_codegen_initialize_runtime_metadata(&"PhysicsMaterial");
    Il2CppMethodInitialized_07548031 = '\x01';
  }
  pSVar32 = "Name";
  local_199 = false;
  local_c4 = 0;
  local_198 = 0.0;
  local_58 = (undefined1  [8])0x0;
  puStack_50 = (undefined1 *)0x0;
  local_48 = (Map_MapObject_o *)0x0;
  local_80 = 0.0;
  local_88 = 0;
  local_90 = 0.0;
  local_98 = 0;
  local_a0 = 0.0;
  local_a8 = 0;
  pSVar6 = (__this->fields)._name;
  local_108 = (UI_MapEditorInspectPanel___c__DisplayClass104_0_Fields *)
              CONCAT44(local_108._4_4_,(float)local_108);
  if (pSVar6 == (Settings_StringSetting_o *)0x0) goto label_05d825d5;
  pSVar31 = (pSVar6->fields)._value;
  if (Il2CppMethodInitialized_0754802e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
    Il2CppMethodInitialized_0754802e = '\x01';
  }
  local_170._0_8_ = (UI_MapEditorInspectPanel_c *)0x0;
  pSVar7 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._syncedSerialized;
  local_108 = (UI_MapEditorInspectPanel___c__DisplayClass104_0_Fields *)
              CONCAT44(local_108._4_4_,(float)local_108);
  if (pSVar7 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05d825d5;
  bVar26 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                     (pSVar7,(Il2CppObject *)pSVar32,(Il2CppObject **)local_170,
                      (MethodInfo_4AAF440 *)
                      MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
  bVar27 = true;
  if (bVar26) {
    bVar27 = System_String__op_Inequality((System_String_o *)local_170._0_8_,pSVar31,(MethodInfo *)0x0);
  }
  pSVar8 = (__this->fields)._active;
  local_108 = (UI_MapEditorInspectPanel___c__DisplayClass104_0_Fields *)
              CONCAT44(local_108._4_4_,(float)local_108);
  if (pSVar8 == (Settings_BoolSetting_o *)0x0) goto label_05d825d5;
  local_199 = (pSVar8->fields)._value;
  if ((g_data_075566f0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075566f0);
  }
  ppSVar47 = &(__this->fields)._syncedSerialized;
  pSVar31 = System_Boolean__ToString(&local_199,(MethodInfo *)0x0);
  pSVar32 = "Active";
  if (Il2CppMethodInitialized_0754802e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
    Il2CppMethodInitialized_0754802e = '\x01';
  }
  local_170._0_8_ = (UI_MapEditorInspectPanel_c *)0x0;
  local_108 = (UI_MapEditorInspectPanel___c__DisplayClass104_0_Fields *)
              CONCAT44(local_108._4_4_,(float)local_108);
  if ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar47 ==
      (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05d825d5;
  bVar26 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                     ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar47,
                      (Il2CppObject *)pSVar32,(Il2CppObject **)local_170,
                      (MethodInfo_4AAF440 *)
                      MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
  bVar28 = true;
  if (bVar26) {
    bVar28 = System_String__op_Inequality((System_String_o *)local_170._0_8_,pSVar31,(MethodInfo *)0x0);
  }
  pSVar8 = (__this->fields)._static;
  local_108 = (UI_MapEditorInspectPanel___c__DisplayClass104_0_Fields *)
              CONCAT44(local_108._4_4_,(float)local_108);
  if (pSVar8 == (Settings_BoolSetting_o *)0x0) goto label_05d825d5;
  local_199 = (pSVar8->fields)._value;
  pSVar31 = System_Boolean__ToString(&local_199,(MethodInfo *)0x0);
  pSVar32 = "Static";
  if (Il2CppMethodInitialized_0754802e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
    Il2CppMethodInitialized_0754802e = '\x01';
  }
  local_108._0_4_ = (float)CONCAT31(local_108._1_3_,bVar27);
  local_170._0_8_ = (UI_MapEditorInspectPanel_c *)0x0;
  local_108 = (UI_MapEditorInspectPanel___c__DisplayClass104_0_Fields *)
              CONCAT44(local_108._4_4_,(float)local_108);
  if ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar47 ==
      (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05d825d5;
  bVar26 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                     ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar47,
                      (Il2CppObject *)pSVar32,(Il2CppObject **)local_170,
                      (MethodInfo_4AAF440 *)
                      MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
  bVar27 = true;
  if (bVar26) {
    bVar27 = System_String__op_Inequality((System_String_o *)local_170._0_8_,pSVar31,(MethodInfo *)0x0);
  }
  pSVar8 = (__this->fields)._networked;
  local_108 = (UI_MapEditorInspectPanel___c__DisplayClass104_0_Fields *)
              CONCAT44(local_108._4_4_,(float)local_108);
  if (pSVar8 == (Settings_BoolSetting_o *)0x0) goto label_05d825d5;
  local_199 = (pSVar8->fields)._value;
  pSVar31 = System_Boolean__ToString(&local_199,(MethodInfo *)0x0);
  pSVar32 = "Networked";
  if (Il2CppMethodInitialized_0754802e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
    Il2CppMethodInitialized_0754802e = '\x01';
  }
  local_170._0_8_ = (UI_MapEditorInspectPanel_c *)0x0;
  local_108 = (UI_MapEditorInspectPanel___c__DisplayClass104_0_Fields *)
              CONCAT44(local_108._4_4_,(float)local_108);
  if ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar47 ==
      (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05d825d5;
  bVar26 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                     ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar47,
                      (Il2CppObject *)pSVar32,(Il2CppObject **)local_170,
                      (MethodInfo_4AAF440 *)
                      MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
  bVar29 = true;
  if (bVar26) {
    bVar29 = System_String__op_Inequality((System_String_o *)local_170._0_8_,pSVar31,(MethodInfo *)0x0);
  }
  local_180 = (Map_MapScriptBaseObject_o *)CONCAT71(local_180._1_7_,bVar29);
  pSVar8 = (__this->fields)._visible;
  local_108 = (UI_MapEditorInspectPanel___c__DisplayClass104_0_Fields *)
              CONCAT44(local_108._4_4_,(float)local_108);
  if (pSVar8 == (Settings_BoolSetting_o *)0x0) goto label_05d825d5;
  local_199 = (pSVar8->fields)._value;
  pSVar31 = System_Boolean__ToString(&local_199,(MethodInfo *)0x0);
  pSVar32 = "Visible";
  if (Il2CppMethodInitialized_0754802e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
    Il2CppMethodInitialized_0754802e = '\x01';
  }
  local_170._0_8_ = (UI_MapEditorInspectPanel_c *)0x0;
  local_108 = (UI_MapEditorInspectPanel___c__DisplayClass104_0_Fields *)
              CONCAT44(local_108._4_4_,(float)local_108);
  if ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar47 ==
      (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05d825d5;
  bVar26 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                     ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar47,
                      (Il2CppObject *)pSVar32,(Il2CppObject **)local_170,
                      (MethodInfo_4AAF440 *)
                      MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
  bVar29 = true;
  if (bVar26) {
    bVar29 = System_String__op_Inequality((System_String_o *)local_170._0_8_,pSVar31,(MethodInfo *)0x0);
  }
  local_190 = CONCAT71(local_190._1_7_,bVar29);
  pSVar9 = (__this->fields)._parent;
  local_108 = (UI_MapEditorInspectPanel___c__DisplayClass104_0_Fields *)
              CONCAT44(local_108._4_4_,(float)local_108);
  if (pSVar9 == (Settings_IntSetting_o *)0x0) goto label_05d825d5;
  local_c4 = (pSVar9->fields)._value;
  pSVar31 = System_Int32__ToString(&local_c4,(MethodInfo *)0x0);
  pSVar32 = "Parent";
  if (Il2CppMethodInitialized_0754802e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
    Il2CppMethodInitialized_0754802e = '\x01';
  }
  local_170._0_8_ = (UI_MapEditorInspectPanel_c *)0x0;
  local_108 = (UI_MapEditorInspectPanel___c__DisplayClass104_0_Fields *)
              CONCAT44(local_108._4_4_,(float)local_108);
  if ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar47 ==
      (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05d825d5;
  bVar26 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                     ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar47,
                      (Il2CppObject *)pSVar32,(Il2CppObject **)local_170,
                      (MethodInfo_4AAF440 *)
                      MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
  bVar29 = true;
  if (bVar26) {
    bVar29 = System_String__op_Inequality((System_String_o *)local_170._0_8_,pSVar31,(MethodInfo *)0x0);
  }
  local_e0 = CONCAT71(local_e0._1_7_,bVar29);
  local_f8 = (float)CONCAT31(local_f8._1_3_,bVar27);
  pSVar38 = (__this->fields)._positionX;
  local_108 = (UI_MapEditorInspectPanel___c__DisplayClass104_0_Fields *)
              CONCAT44(local_108._4_4_,(float)local_108);
  if (pSVar38 == (Settings_FloatSetting_o *)0x0) goto label_05d825d5;
  local_198 = (pSVar38->fields)._value;
  pSVar31 = System_Single__ToString_54d0a60(&local_198,"R",(MethodInfo *)0x0);
  pSVar32 = "PositionX";
  if (Il2CppMethodInitialized_0754802e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
    Il2CppMethodInitialized_0754802e = '\x01';
  }
  local_170._0_8_ = (UI_MapEditorInspectPanel_c *)0x0;
  local_108 = (UI_MapEditorInspectPanel___c__DisplayClass104_0_Fields *)
              CONCAT44(local_108._4_4_,(float)local_108);
  if ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar47 ==
      (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05d825d5;
  bVar26 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                     ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar47,
                      (Il2CppObject *)pSVar32,(Il2CppObject **)local_170,
                      (MethodInfo_4AAF440 *)
                      MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
  bVar27 = true;
  if (bVar26) {
    bVar27 = System_String__op_Inequality((System_String_o *)local_170._0_8_,pSVar31,(MethodInfo *)0x0);
  }
  local_c0 = (System_Collections_Generic_List_MapObject__o *)CONCAT71(local_c0._1_7_,bVar27);
  pSVar38 = (__this->fields)._positionY;
  local_108 = (UI_MapEditorInspectPanel___c__DisplayClass104_0_Fields *)
              CONCAT44(local_108._4_4_,(float)local_108);
  if (pSVar38 == (Settings_FloatSetting_o *)0x0) goto label_05d825d5;
  local_198 = (pSVar38->fields)._value;
  pSVar31 = System_Single__ToString_54d0a60(&local_198,"R",(MethodInfo *)0x0);
  pSVar32 = "PositionY";
  if (Il2CppMethodInitialized_0754802e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
    Il2CppMethodInitialized_0754802e = '\x01';
  }
  local_170._0_8_ = (UI_MapEditorInspectPanel_c *)0x0;
  local_108 = (UI_MapEditorInspectPanel___c__DisplayClass104_0_Fields *)
              CONCAT44(local_108._4_4_,(float)local_108);
  if ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar47 ==
      (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05d825d5;
  bVar26 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                     ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar47,
                      (Il2CppObject *)pSVar32,(Il2CppObject **)local_170,
                      (MethodInfo_4AAF440 *)
                      MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
  local_181 = true;
  if (bVar26) {
    local_181 = System_String__op_Inequality((System_String_o *)local_170._0_8_,pSVar31,(MethodInfo *)0x0);
  }
  pSVar38 = (__this->fields)._positionZ;
  local_108 = (UI_MapEditorInspectPanel___c__DisplayClass104_0_Fields *)
              CONCAT44(local_108._4_4_,(float)local_108);
  if (pSVar38 == (Settings_FloatSetting_o *)0x0) goto label_05d825d5;
  local_198 = (pSVar38->fields)._value;
  pSVar31 = System_Single__ToString_54d0a60(&local_198,"R",(MethodInfo *)0x0);
  pSVar32 = "PositionZ";
  if (Il2CppMethodInitialized_0754802e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
    Il2CppMethodInitialized_0754802e = '\x01';
  }
  local_170._0_8_ = (UI_MapEditorInspectPanel_c *)0x0;
  local_108 = (UI_MapEditorInspectPanel___c__DisplayClass104_0_Fields *)
              CONCAT44(local_108._4_4_,(float)local_108);
  if ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar47 ==
      (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05d825d5;
  bVar26 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                     ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar47,
                      (Il2CppObject *)pSVar32,(Il2CppObject **)local_170,
                      (MethodInfo_4AAF440 *)
                      MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
  local_171 = true;
  if (bVar26) {
    local_171 = System_String__op_Inequality((System_String_o *)local_170._0_8_,pSVar31,(MethodInfo *)0x0);
  }
  pSVar38 = (__this->fields)._rotationX;
  local_108 = (UI_MapEditorInspectPanel___c__DisplayClass104_0_Fields *)
              CONCAT44(local_108._4_4_,(float)local_108);
  if (pSVar38 == (Settings_FloatSetting_o *)0x0) goto label_05d825d5;
  local_198 = (pSVar38->fields)._value;
  pSVar31 = System_Single__ToString_54d0a60(&local_198,"R",(MethodInfo *)0x0);
  pSVar32 = "RotationX";
  if (Il2CppMethodInitialized_0754802e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
    Il2CppMethodInitialized_0754802e = '\x01';
  }
  local_170._0_8_ = (UI_MapEditorInspectPanel_c *)0x0;
  local_108 = (UI_MapEditorInspectPanel___c__DisplayClass104_0_Fields *)
              CONCAT44(local_108._4_4_,(float)local_108);
  if ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar47 ==
      (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05d825d5;
  bVar26 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                     ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar47,
                      (Il2CppObject *)pSVar32,(Il2CppObject **)local_170,
                      (MethodInfo_4AAF440 *)
                      MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
  local_172 = true;
  if (bVar26) {
    local_172 = System_String__op_Inequality((System_String_o *)local_170._0_8_,pSVar31,(MethodInfo *)0x0);
  }
  pSVar38 = (__this->fields)._rotationY;
  local_108 = (UI_MapEditorInspectPanel___c__DisplayClass104_0_Fields *)
              CONCAT44(local_108._4_4_,(float)local_108);
  if (pSVar38 == (Settings_FloatSetting_o *)0x0) goto label_05d825d5;
  local_198 = (pSVar38->fields)._value;
  pSVar31 = System_Single__ToString_54d0a60(&local_198,"R",(MethodInfo *)0x0);
  pSVar32 = "RotationY";
  if (Il2CppMethodInitialized_0754802e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
    Il2CppMethodInitialized_0754802e = '\x01';
  }
  local_170._0_8_ = (UI_MapEditorInspectPanel_c *)0x0;
  local_108 = (UI_MapEditorInspectPanel___c__DisplayClass104_0_Fields *)
              CONCAT44(local_108._4_4_,(float)local_108);
  if ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar47 ==
      (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05d825d5;
  bVar26 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                     ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar47,
                      (Il2CppObject *)pSVar32,(Il2CppObject **)local_170,
                      (MethodInfo_4AAF440 *)
                      MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
  local_191 = true;
  if (bVar26) {
    local_191 = System_String__op_Inequality((System_String_o *)local_170._0_8_,pSVar31,(MethodInfo *)0x0);
  }
  pSVar38 = (__this->fields)._rotationZ;
  local_108 = (UI_MapEditorInspectPanel___c__DisplayClass104_0_Fields *)
              CONCAT44(local_108._4_4_,(float)local_108);
  if (pSVar38 == (Settings_FloatSetting_o *)0x0) goto label_05d825d5;
  local_198 = (pSVar38->fields)._value;
  pSVar31 = System_Single__ToString_54d0a60(&local_198,"R",(MethodInfo *)0x0);
  pSVar32 = "RotationZ";
  if (Il2CppMethodInitialized_0754802e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
    Il2CppMethodInitialized_0754802e = '\x01';
  }
  local_170._0_8_ = (UI_MapEditorInspectPanel_c *)0x0;
  local_108 = (UI_MapEditorInspectPanel___c__DisplayClass104_0_Fields *)
              CONCAT44(local_108._4_4_,(float)local_108);
  if ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar47 ==
      (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05d825d5;
  bVar26 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                     ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar47,
                      (Il2CppObject *)pSVar32,(Il2CppObject **)local_170,
                      (MethodInfo_4AAF440 *)
                      MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
  bVar27 = true;
  if (bVar26) {
    bVar27 = System_String__op_Inequality((System_String_o *)local_170._0_8_,pSVar31,(MethodInfo *)0x0);
  }
  local_144 = CONCAT31(local_144._1_3_,bVar27);
  pSVar38 = (__this->fields)._scaleX;
  local_108 = (UI_MapEditorInspectPanel___c__DisplayClass104_0_Fields *)
              CONCAT44(local_108._4_4_,(float)local_108);
  if (pSVar38 == (Settings_FloatSetting_o *)0x0) goto label_05d825d5;
  local_198 = (pSVar38->fields)._value;
  pSVar31 = System_Single__ToString_54d0a60(&local_198,"R",(MethodInfo *)0x0);
  pSVar32 = "ScaleX";
  if (Il2CppMethodInitialized_0754802e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
    Il2CppMethodInitialized_0754802e = '\x01';
  }
  local_170._0_8_ = (UI_MapEditorInspectPanel_c *)0x0;
  local_108 = (UI_MapEditorInspectPanel___c__DisplayClass104_0_Fields *)
              CONCAT44(local_108._4_4_,(float)local_108);
  if ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar47 ==
      (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05d825d5;
  bVar26 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                     ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar47,
                      (Il2CppObject *)pSVar32,(Il2CppObject **)local_170,
                      (MethodInfo_4AAF440 *)
                      MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
  bVar27 = true;
  if (bVar26) {
    bVar27 = System_String__op_Inequality((System_String_o *)local_170._0_8_,pSVar31,(MethodInfo *)0x0);
  }
  local_148 = CONCAT31(local_148._1_3_,bVar27);
  pSVar38 = (__this->fields)._scaleY;
  local_108 = (UI_MapEditorInspectPanel___c__DisplayClass104_0_Fields *)
              CONCAT44(local_108._4_4_,(float)local_108);
  if (pSVar38 == (Settings_FloatSetting_o *)0x0) goto label_05d825d5;
  local_198 = (pSVar38->fields)._value;
  pSVar31 = System_Single__ToString_54d0a60(&local_198,"R",(MethodInfo *)0x0);
  pSVar32 = "ScaleY";
  if (Il2CppMethodInitialized_0754802e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
    Il2CppMethodInitialized_0754802e = '\x01';
  }
  local_170._0_8_ = (UI_MapEditorInspectPanel_c *)0x0;
  local_108 = (UI_MapEditorInspectPanel___c__DisplayClass104_0_Fields *)
              CONCAT44(local_108._4_4_,(float)local_108);
  if ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar47 ==
      (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05d825d5;
  bVar26 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                     ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar47,
                      (Il2CppObject *)pSVar32,(Il2CppObject **)local_170,
                      (MethodInfo_4AAF440 *)
                      MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
  bVar27 = true;
  if (bVar26) {
    bVar27 = System_String__op_Inequality((System_String_o *)local_170._0_8_,pSVar31,(MethodInfo *)0x0);
  }
  local_14c = CONCAT31(local_14c._1_3_,bVar27);
  pSVar38 = (__this->fields)._scaleZ;
  local_108 = (UI_MapEditorInspectPanel___c__DisplayClass104_0_Fields *)
              CONCAT44(local_108._4_4_,(float)local_108);
  if (pSVar38 == (Settings_FloatSetting_o *)0x0) goto label_05d825d5;
  local_198 = (pSVar38->fields)._value;
  pSVar31 = System_Single__ToString_54d0a60(&local_198,"R",(MethodInfo *)0x0);
  pSVar32 = "ScaleZ";
  if (Il2CppMethodInitialized_0754802e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
    Il2CppMethodInitialized_0754802e = '\x01';
  }
  local_170._0_8_ = (UI_MapEditorInspectPanel_c *)0x0;
  local_108 = (UI_MapEditorInspectPanel___c__DisplayClass104_0_Fields *)
              CONCAT44(local_108._4_4_,(float)local_108);
  if ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar47 ==
      (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05d825d5;
  bVar26 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                     ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar47,
                      (Il2CppObject *)pSVar32,(Il2CppObject **)local_170,
                      (MethodInfo_4AAF440 *)
                      MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
  bVar27 = true;
  if (bVar26) {
    bVar27 = System_String__op_Inequality((System_String_o *)local_170._0_8_,pSVar31,(MethodInfo *)0x0);
  }
  pSVar32 = "CollideMode";
  local_150 = CONCAT31(local_150._1_3_,bVar27);
  pSVar6 = (__this->fields)._collideMode;
  local_108 = (UI_MapEditorInspectPanel___c__DisplayClass104_0_Fields *)
              CONCAT44(local_108._4_4_,(float)local_108);
  if (pSVar6 == (Settings_StringSetting_o *)0x0) goto label_05d825d5;
  pSVar31 = (pSVar6->fields)._value;
  if (Il2CppMethodInitialized_0754802e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
    Il2CppMethodInitialized_0754802e = '\x01';
  }
  local_170._0_8_ = (UI_MapEditorInspectPanel_c *)0x0;
  local_108 = (UI_MapEditorInspectPanel___c__DisplayClass104_0_Fields *)
              CONCAT44(local_108._4_4_,(float)local_108);
  if ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar47 ==
      (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05d825d5;
  bVar26 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                     ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar47,
                      (Il2CppObject *)pSVar32,(Il2CppObject **)local_170,
                      (MethodInfo_4AAF440 *)
                      MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
  bVar27 = true;
  if (bVar26) {
    bVar27 = System_String__op_Inequality((System_String_o *)local_170._0_8_,pSVar31,(MethodInfo *)0x0);
  }
  pSVar32 = "CollideWith";
  local_138 = CONCAT31(local_138._1_3_,bVar27);
  pSVar6 = (__this->fields)._collideWith;
  local_108 = (UI_MapEditorInspectPanel___c__DisplayClass104_0_Fields *)
              CONCAT44(local_108._4_4_,(float)local_108);
  if (pSVar6 == (Settings_StringSetting_o *)0x0) goto label_05d825d5;
  pSVar31 = (pSVar6->fields)._value;
  if (Il2CppMethodInitialized_0754802e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
    Il2CppMethodInitialized_0754802e = '\x01';
  }
  local_170._0_8_ = (UI_MapEditorInspectPanel_c *)0x0;
  local_108 = (UI_MapEditorInspectPanel___c__DisplayClass104_0_Fields *)
              CONCAT44(local_108._4_4_,(float)local_108);
  if ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar47 ==
      (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05d825d5;
  bVar26 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                     ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar47,
                      (Il2CppObject *)pSVar32,(Il2CppObject **)local_170,
                      (MethodInfo_4AAF440 *)
                      MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
  bVar27 = true;
  if (bVar26) {
    bVar27 = System_String__op_Inequality((System_String_o *)local_170._0_8_,pSVar31,(MethodInfo *)0x0);
  }
  pSVar32 = "PhysicsMaterial";
  local_120 = CONCAT31(local_120._1_3_,bVar27);
  pSVar6 = (__this->fields)._physicsMaterial;
  local_108 = (UI_MapEditorInspectPanel___c__DisplayClass104_0_Fields *)
              CONCAT44(local_108._4_4_,(float)local_108);
  if (pSVar6 == (Settings_StringSetting_o *)0x0) goto label_05d825d5;
  pSVar31 = (pSVar6->fields)._value;
  if (Il2CppMethodInitialized_0754802e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
    Il2CppMethodInitialized_0754802e = '\x01';
  }
  local_170._0_8_ = (UI_MapEditorInspectPanel_c *)0x0;
  local_108 = (UI_MapEditorInspectPanel___c__DisplayClass104_0_Fields *)
              CONCAT44(local_108._4_4_,(float)local_108);
  if ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar47 ==
      (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05d825d5;
  bVar26 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                     ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar47,
                      (Il2CppObject *)pSVar32,(Il2CppObject **)local_170,
                      (MethodInfo_4AAF440 *)
                      MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
  bVar27 = true;
  if (bVar26) {
    bVar27 = System_String__op_Inequality((System_String_o *)local_170._0_8_,pSVar31,(MethodInfo *)0x0);
  }
  pSVar32 = "Shader";
  local_124 = CONCAT31(local_124._1_3_,bVar27);
  pSVar6 = (__this->fields)._shader;
  local_108 = (UI_MapEditorInspectPanel___c__DisplayClass104_0_Fields *)
              CONCAT44(local_108._4_4_,(float)local_108);
  if (pSVar6 == (Settings_StringSetting_o *)0x0) goto label_05d825d5;
  pSVar31 = (pSVar6->fields)._value;
  if (Il2CppMethodInitialized_0754802e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
    Il2CppMethodInitialized_0754802e = '\x01';
  }
  local_170._0_8_ = (UI_MapEditorInspectPanel_c *)0x0;
  pUVar48 = (UI_MapEditorInspectPanel_c *)*ppSVar47;
  local_108 = (UI_MapEditorInspectPanel___c__DisplayClass104_0_Fields *)
              CONCAT44(local_108._4_4_,(float)local_108);
  if (pUVar48 == (UI_MapEditorInspectPanel_c *)0x0) goto label_05d825d5;
  bVar26 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                     ((System_Collections_Generic_Dictionary_object__object__o *)pUVar48,
                      (Il2CppObject *)pSVar32,(Il2CppObject **)local_170,
                      (MethodInfo_4AAF440 *)
                      MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
  bVar27 = true;
  pMVar43 = extraout_RDX;
  if (bVar26) {
    pUVar48 = (UI_MapEditorInspectPanel_c *)local_170._0_8_;
    bVar27 = System_String__op_Inequality((System_String_o *)local_170._0_8_,pSVar31,(MethodInfo *)0x0);
    pMVar43 = extraout_RDX_00;
  }
  local_128 = CONCAT31(local_128._1_3_,bVar27);
  pSVar31 = UI_MapEditorInspectPanel__SerializeSetting
                      ((UI_MapEditorInspectPanel_o *)pUVar48,(Settings_BaseSetting_o *)(__this->fields)._color
                       ,pMVar43);
  pSVar32 = "Color";
  if (Il2CppMethodInitialized_0754802e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
    Il2CppMethodInitialized_0754802e = '\x01';
  }
  local_170._0_8_ = (UI_MapEditorInspectPanel_c *)0x0;
  pUVar48 = (UI_MapEditorInspectPanel_c *)*ppSVar47;
  local_108 = (UI_MapEditorInspectPanel___c__DisplayClass104_0_Fields *)
              CONCAT44(local_108._4_4_,(float)local_108);
  if (pUVar48 == (UI_MapEditorInspectPanel_c *)0x0) goto label_05d825d5;
  bVar26 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                     ((System_Collections_Generic_Dictionary_object__object__o *)pUVar48,
                      (Il2CppObject *)pSVar32,(Il2CppObject **)local_170,
                      (MethodInfo_4AAF440 *)
                      MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
  local_156 = true;
  pMVar43 = extraout_RDX_01;
  if (bVar26) {
    pUVar48 = (UI_MapEditorInspectPanel_c *)local_170._0_8_;
    local_156 = System_String__op_Inequality((System_String_o *)local_170._0_8_,pSVar31,(MethodInfo *)0x0);
    pMVar43 = extraout_RDX_02;
  }
  pSVar31 = UI_MapEditorInspectPanel__SerializeSetting
                      ((UI_MapEditorInspectPanel_o *)pUVar48,
                       (Settings_BaseSetting_o *)(__this->fields)._reflectColor,pMVar43);
  pSVar32 = "ReflectColor";
  if (Il2CppMethodInitialized_0754802e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
    Il2CppMethodInitialized_0754802e = '\x01';
  }
  local_170._0_8_ = (UI_MapEditorInspectPanel_c *)0x0;
  local_108 = (UI_MapEditorInspectPanel___c__DisplayClass104_0_Fields *)
              CONCAT44(local_108._4_4_,(float)local_108);
  if ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar47 ==
      (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05d825d5;
  bVar26 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                     ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar47,
                      (Il2CppObject *)pSVar32,(Il2CppObject **)local_170,
                      (MethodInfo_4AAF440 *)
                      MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
  local_157 = true;
  if (bVar26) {
    local_157 = System_String__op_Inequality((System_String_o *)local_170._0_8_,pSVar31,(MethodInfo *)0x0);
  }
  pSVar32 = "Texture";
  pSVar6 = (__this->fields)._texture;
  local_108 = (UI_MapEditorInspectPanel___c__DisplayClass104_0_Fields *)
              CONCAT44(local_108._4_4_,(float)local_108);
  if (pSVar6 == (Settings_StringSetting_o *)0x0) goto label_05d825d5;
  pSVar31 = (pSVar6->fields)._value;
  if (Il2CppMethodInitialized_0754802e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
    Il2CppMethodInitialized_0754802e = '\x01';
  }
  local_13c = CONCAT31(local_13c._1_3_,bVar28);
  local_170._0_8_ = (UI_MapEditorInspectPanel_c *)0x0;
  local_108 = (UI_MapEditorInspectPanel___c__DisplayClass104_0_Fields *)
              CONCAT44(local_108._4_4_,(float)local_108);
  if ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar47 ==
      (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05d825d5;
  bVar26 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                     ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar47,
                      (Il2CppObject *)pSVar32,(Il2CppObject **)local_170,
                      (MethodInfo_4AAF440 *)
                      MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
  bVar27 = true;
  if (bVar26) {
    bVar27 = System_String__op_Inequality((System_String_o *)local_170._0_8_,pSVar31,(MethodInfo *)0x0);
  }
  pSVar38 = (__this->fields)._tilingX;
  local_108 = (UI_MapEditorInspectPanel___c__DisplayClass104_0_Fields *)
              CONCAT44(local_108._4_4_,(float)local_108);
  if (pSVar38 == (Settings_FloatSetting_o *)0x0) goto label_05d825d5;
  local_198 = (pSVar38->fields)._value;
  pSVar31 = System_Single__ToString_54d0a60(&local_198,"R",(MethodInfo *)0x0);
  pSVar32 = "TilingX";
  if (Il2CppMethodInitialized_0754802e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
    Il2CppMethodInitialized_0754802e = '\x01';
  }
  local_170._0_8_ = (UI_MapEditorInspectPanel_c *)0x0;
  local_108 = (UI_MapEditorInspectPanel___c__DisplayClass104_0_Fields *)
              CONCAT44(local_108._4_4_,(float)local_108);
  if ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar47 ==
      (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05d825d5;
  bVar26 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                     ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar47,
                      (Il2CppObject *)pSVar32,(Il2CppObject **)local_170,
                      (MethodInfo_4AAF440 *)
                      MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
  bVar28 = true;
  if (bVar26) {
    bVar28 = System_String__op_Inequality((System_String_o *)local_170._0_8_,pSVar31,(MethodInfo *)0x0);
  }
  local_68 = CONCAT71(local_68._1_7_,bVar28);
  pSVar38 = (__this->fields)._tilingY;
  local_108 = (UI_MapEditorInspectPanel___c__DisplayClass104_0_Fields *)
              CONCAT44(local_108._4_4_,(float)local_108);
  if (pSVar38 == (Settings_FloatSetting_o *)0x0) goto label_05d825d5;
  local_198 = (pSVar38->fields)._value;
  pSVar31 = System_Single__ToString_54d0a60(&local_198,"R",(MethodInfo *)0x0);
  pSVar32 = "TilingY";
  if (Il2CppMethodInitialized_0754802e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
    Il2CppMethodInitialized_0754802e = '\x01';
  }
  local_170._0_8_ = (UI_MapEditorInspectPanel_c *)0x0;
  local_108 = (UI_MapEditorInspectPanel___c__DisplayClass104_0_Fields *)
              CONCAT44(local_108._4_4_,(float)local_108);
  if ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar47 ==
      (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05d825d5;
  bVar26 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                     ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar47,
                      (Il2CppObject *)pSVar32,(Il2CppObject **)local_170,
                      (MethodInfo_4AAF440 *)
                      MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
  bVar28 = true;
  if (bVar26) {
    bVar28 = System_String__op_Inequality((System_String_o *)local_170._0_8_,pSVar31,(MethodInfo *)0x0);
  }
  local_78 = CONCAT71(local_78._1_7_,bVar28);
  pSVar38 = (__this->fields)._offsetX;
  local_108 = (UI_MapEditorInspectPanel___c__DisplayClass104_0_Fields *)
              CONCAT44(local_108._4_4_,(float)local_108);
  if (pSVar38 == (Settings_FloatSetting_o *)0x0) goto label_05d825d5;
  local_198 = (pSVar38->fields)._value;
  pSVar31 = System_Single__ToString_54d0a60(&local_198,"R",(MethodInfo *)0x0);
  pSVar32 = "OffsetX";
  if (Il2CppMethodInitialized_0754802e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
    Il2CppMethodInitialized_0754802e = '\x01';
  }
  local_170._0_8_ = (UI_MapEditorInspectPanel_c *)0x0;
  local_108 = (UI_MapEditorInspectPanel___c__DisplayClass104_0_Fields *)
              CONCAT44(local_108._4_4_,(float)local_108);
  if ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar47 ==
      (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05d825d5;
  bVar26 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                     ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar47,
                      (Il2CppObject *)pSVar32,(Il2CppObject **)local_170,
                      (MethodInfo_4AAF440 *)
                      MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
  local_173 = true;
  if (bVar26) {
    local_173 = System_String__op_Inequality((System_String_o *)local_170._0_8_,pSVar31,(MethodInfo *)0x0);
  }
  pSVar38 = (__this->fields)._offsetY;
  local_108 = (UI_MapEditorInspectPanel___c__DisplayClass104_0_Fields *)
              CONCAT44(local_108._4_4_,(float)local_108);
  if (pSVar38 == (Settings_FloatSetting_o *)0x0) goto label_05d825d5;
  local_198 = (pSVar38->fields)._value;
  pSVar31 = System_Single__ToString_54d0a60(&local_198,"R",(MethodInfo *)0x0);
  pSVar32 = "OffsetY";
  material = &"OffsetY";
  if (Il2CppMethodInitialized_0754802e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
    Il2CppMethodInitialized_0754802e = '\x01';
  }
  local_170._0_8_ = (UI_MapEditorInspectPanel_c *)0x0;
  local_108 = (UI_MapEditorInspectPanel___c__DisplayClass104_0_Fields *)
              CONCAT44(local_108._4_4_,(float)local_108);
  if ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar47 ==
      (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05d825d5;
  bVar26 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                     ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar47,
                      (Il2CppObject *)pSVar32,(Il2CppObject **)local_170,
                      (MethodInfo_4AAF440 *)
                      MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
  bVar28 = true;
  if (bVar26) {
    bVar28 = System_String__op_Inequality((System_String_o *)local_170._0_8_,pSVar31,(MethodInfo *)0x0);
  }
  if ((char)local_108 == '\0') {
    local_c8 = 0;
    if (bVar27 == false) goto label_05d8013d;
label_05d8050d:
    pSVar6 = (__this->fields)._texture;
    cVar45 = (char)local_13c;
    if (pSVar6 == (Settings_StringSetting_o *)0x0) goto label_05d825d5;
    bVar26 = System_String__op_Equality((pSVar6->fields)._value,"--",(MethodInfo *)0x0);
    local_118 = (uint)CONCAT71(extraout_var_11,bVar26) ^ 1;
    if ((char)local_138 != '\0') goto label_05d80158;
label_05d8054f:
    local_cc = 0;
    if ((char)local_120 == '\0') goto label_05d80198;
label_05d80568:
    pSVar6 = (__this->fields)._collideWith;
    if (pSVar6 == (Settings_StringSetting_o *)0x0) goto label_05d825d5;
    bVar26 = System_String__op_Equality((pSVar6->fields)._value,"--",(MethodInfo *)0x0);
    local_d0 = (uint)CONCAT71(extraout_var_12,bVar26) ^ 1;
    if ((char)local_124 != '\0') goto label_05d801b1;
label_05d805a8:
    local_d4 = 0;
    if ((char)local_128 == '\0') goto label_05d801f1;
label_05d805c1:
    pSVar6 = (__this->fields)._shader;
    if (pSVar6 == (Settings_StringSetting_o *)0x0) goto label_05d825d5;
    bVar26 = System_String__op_Equality((pSVar6->fields)._value,"--",(MethodInfo *)0x0);
    local_d8 = (uint)CONCAT71(extraout_var_13,bVar26) ^ 1;
    if (cVar45 != '\0') goto label_05d80204;
label_05d805fb:
    local_120 = 0;
    if (local_f8._0_1_ == '\0') goto label_05d80248;
label_05d80614:
    pSVar10 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._mixedFields;
    if (pSVar10 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_05d825d5;
    bVar26 = System_Collections_Generic_HashSet_object___Contains
                       (pSVar10,(Il2CppObject *)"Static",
                        (MethodInfo_4FB3720 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
    local_124 = (uint)CONCAT71(extraout_var_14,bVar26) ^ 1;
    if ((char)local_180 != '\0') goto label_05d8025e;
label_05d80655:
    local_128 = 0;
    if ((char)local_190 == '\0') goto label_05d8029f;
label_05d8066b:
    pSVar10 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._mixedFields;
    if (pSVar10 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_05d825d5;
    bVar26 = System_Collections_Generic_HashSet_object___Contains
                       (pSVar10,(Il2CppObject *)"Visible",
                        (MethodInfo_4FB3720 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
    local_13c = (uint)CONCAT71(extraout_var_15,bVar26) ^ 1;
    if ((char)local_e0 != '\0') goto label_05d802b5;
label_05d806ac:
    local_138 = 0;
    if ((char)local_c0 == '\0') goto label_05d802f6;
label_05d806c2:
    pSVar10 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._mixedFields;
    if (pSVar10 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_05d825d5;
    bVar26 = System_Collections_Generic_HashSet_object___Contains
                       (pSVar10,(Il2CppObject *)"PositionX",
                        (MethodInfo_4FB3720 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
    local_10c = (uint)CONCAT71(extraout_var_16,bVar26) ^ 1;
    if (local_181 != 0) goto label_05d8030c;
label_05d80703:
    local_110 = 0;
    if (local_171 == 0) goto label_05d8034d;
label_05d80719:
    pSVar10 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._mixedFields;
    if (pSVar10 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_05d825d5;
    bVar26 = System_Collections_Generic_HashSet_object___Contains
                       (pSVar10,(Il2CppObject *)"PositionZ",
                        (MethodInfo_4FB3720 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
    local_114 = (uint)CONCAT71(extraout_var_17,bVar26) ^ 1;
    if (local_172 != 0) goto label_05d80363;
label_05d8075a:
    local_12c = 0;
    if (local_191 == 0) goto label_05d803a1;
label_05d8076d:
    pSVar10 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._mixedFields;
    if (pSVar10 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_05d825d5;
    bVar26 = System_Collections_Generic_HashSet_object___Contains
                       (pSVar10,(Il2CppObject *)"RotationY",
                        (MethodInfo_4FB3720 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
    local_130 = (uint)CONCAT71(extraout_var_18,bVar26) ^ 1;
    if ((byte)local_144 != '\0') goto label_05d803b4;
label_05d807ab:
    local_144 = 0;
    if ((byte)local_148 == '\0') goto label_05d803f2;
label_05d807be:
    pSVar10 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._mixedFields;
    if (pSVar10 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_05d825d5;
    bVar26 = System_Collections_Generic_HashSet_object___Contains
                       (pSVar10,(Il2CppObject *)"ScaleX",
                        (MethodInfo_4FB3720 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
    local_148 = (uint)CONCAT71(extraout_var_19,bVar26) ^ 1;
    if ((byte)local_14c != '\0') goto label_05d80405;
label_05d807fc:
    local_14c = 0;
    if ((byte)local_150 == '\0') goto label_05d80443;
label_05d8080f:
    pSVar10 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._mixedFields;
    if (pSVar10 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_05d825d5;
    bVar26 = System_Collections_Generic_HashSet_object___Contains
                       (pSVar10,(Il2CppObject *)"ScaleZ",
                        (MethodInfo_4FB3720 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
    local_150 = (uint)CONCAT71(extraout_var_20,bVar26) ^ 1;
    if ((char)local_68 != '\0') goto label_05d80459;
label_05d80850:
    local_140 = 0;
    if ((char)local_78 == '\0') goto label_05d8049a;
label_05d80866:
    pSVar10 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._mixedFields;
    if (pSVar10 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_05d825d5;
    bVar26 = System_Collections_Generic_HashSet_object___Contains
                       (pSVar10,(Il2CppObject *)"TilingY",
                        (MethodInfo_4FB3720 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
    local_154 = (uint)CONCAT71(extraout_var_21,bVar26) ^ 1;
    if (local_173 != 0) goto label_05d804ad;
label_05d808a4:
    local_11c = 0;
    if (bVar28 == false) goto label_05d804ec;
label_05d808b8:
    pSVar10 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._mixedFields;
    if (pSVar10 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_05d825d5;
    bVar26 = System_Collections_Generic_HashSet_object___Contains
                       (pSVar10,(Il2CppObject *)"OffsetY",
                        (MethodInfo_4FB3720 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
    local_134 = (uint)CONCAT71(extraout_var_22,bVar26) ^ 1;
  }
  else {
    pSVar6 = (__this->fields)._name;
    local_108 = (UI_MapEditorInspectPanel___c__DisplayClass104_0_Fields *)
                CONCAT44(local_108._4_4_,(float)local_108);
    if (pSVar6 == (Settings_StringSetting_o *)0x0) goto label_05d825d5;
    bVar26 = System_String__op_Equality((pSVar6->fields)._value,"--",(MethodInfo *)0x0);
    local_c8 = (uint)CONCAT71(extraout_var,bVar26) ^ 1;
    if (bVar27 != false) goto label_05d8050d;
label_05d8013d:
    local_118 = 0;
    cVar45 = (char)local_13c;
    if ((char)local_138 == '\0') goto label_05d8054f;
label_05d80158:
    pSVar6 = (__this->fields)._collideMode;
    if (pSVar6 == (Settings_StringSetting_o *)0x0) goto label_05d825d5;
    bVar26 = System_String__op_Equality((pSVar6->fields)._value,"--",(MethodInfo *)0x0);
    local_cc = (uint)CONCAT71(extraout_var_00,bVar26) ^ 1;
    if ((char)local_120 != '\0') goto label_05d80568;
label_05d80198:
    local_d0 = 0;
    if ((char)local_124 == '\0') goto label_05d805a8;
label_05d801b1:
    pSVar6 = (__this->fields)._physicsMaterial;
    if (pSVar6 == (Settings_StringSetting_o *)0x0) goto label_05d825d5;
    bVar26 = System_String__op_Equality((pSVar6->fields)._value,"--",(MethodInfo *)0x0);
    local_d4 = (uint)CONCAT71(extraout_var_01,bVar26) ^ 1;
    if ((char)local_128 != '\0') goto label_05d805c1;
label_05d801f1:
    local_d8 = 0;
    if (cVar45 == '\0') goto label_05d805fb;
label_05d80204:
    pSVar10 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._mixedFields;
    if (pSVar10 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_05d825d5;
    bVar26 = System_Collections_Generic_HashSet_object___Contains
                       (pSVar10,(Il2CppObject *)"Active",
                        (MethodInfo_4FB3720 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
    local_120 = (uint)CONCAT71(extraout_var_02,bVar26) ^ 1;
    if (local_f8._0_1_ != '\0') goto label_05d80614;
label_05d80248:
    local_124 = 0;
    if ((char)local_180 == '\0') goto label_05d80655;
label_05d8025e:
    pSVar10 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._mixedFields;
    if (pSVar10 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_05d825d5;
    bVar26 = System_Collections_Generic_HashSet_object___Contains
                       (pSVar10,(Il2CppObject *)"Networked",
                        (MethodInfo_4FB3720 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
    local_128 = (uint)CONCAT71(extraout_var_03,bVar26) ^ 1;
    if ((char)local_190 != '\0') goto label_05d8066b;
label_05d8029f:
    local_13c = 0;
    if ((char)local_e0 == '\0') goto label_05d806ac;
label_05d802b5:
    pSVar10 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._mixedFields;
    if (pSVar10 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_05d825d5;
    bVar26 = System_Collections_Generic_HashSet_object___Contains
                       (pSVar10,(Il2CppObject *)"Parent",
                        (MethodInfo_4FB3720 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
    local_138 = (uint)CONCAT71(extraout_var_04,bVar26) ^ 1;
    if ((char)local_c0 != '\0') goto label_05d806c2;
label_05d802f6:
    local_10c = 0;
    if (local_181 == 0) goto label_05d80703;
label_05d8030c:
    pSVar10 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._mixedFields;
    if (pSVar10 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_05d825d5;
    bVar26 = System_Collections_Generic_HashSet_object___Contains
                       (pSVar10,(Il2CppObject *)"PositionY",
                        (MethodInfo_4FB3720 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
    local_110 = (uint)CONCAT71(extraout_var_05,bVar26) ^ 1;
    if (local_171 != 0) goto label_05d80719;
label_05d8034d:
    local_114 = 0;
    if (local_172 == 0) goto label_05d8075a;
label_05d80363:
    pSVar10 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._mixedFields;
    if (pSVar10 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_05d825d5;
    bVar26 = System_Collections_Generic_HashSet_object___Contains
                       (pSVar10,(Il2CppObject *)"RotationX",
                        (MethodInfo_4FB3720 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
    local_12c = (uint)CONCAT71(extraout_var_06,bVar26) ^ 1;
    if (local_191 != 0) goto label_05d8076d;
label_05d803a1:
    local_130 = 0;
    if ((byte)local_144 == '\0') goto label_05d807ab;
label_05d803b4:
    pSVar10 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._mixedFields;
    if (pSVar10 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_05d825d5;
    bVar26 = System_Collections_Generic_HashSet_object___Contains
                       (pSVar10,(Il2CppObject *)"RotationZ",
                        (MethodInfo_4FB3720 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
    local_144 = (uint)CONCAT71(extraout_var_07,bVar26) ^ 1;
    if ((byte)local_148 != '\0') goto label_05d807be;
label_05d803f2:
    local_148 = 0;
    if ((byte)local_14c == '\0') goto label_05d807fc;
label_05d80405:
    pSVar10 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._mixedFields;
    if (pSVar10 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_05d825d5;
    bVar26 = System_Collections_Generic_HashSet_object___Contains
                       (pSVar10,(Il2CppObject *)"ScaleY",
                        (MethodInfo_4FB3720 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
    local_14c = (uint)CONCAT71(extraout_var_08,bVar26) ^ 1;
    if ((byte)local_150 != '\0') goto label_05d8080f;
label_05d80443:
    local_150 = 0;
    if ((char)local_68 == '\0') goto label_05d80850;
label_05d80459:
    pSVar10 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._mixedFields;
    if (pSVar10 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_05d825d5;
    bVar26 = System_Collections_Generic_HashSet_object___Contains
                       (pSVar10,(Il2CppObject *)"TilingX",
                        (MethodInfo_4FB3720 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
    local_140 = (uint)CONCAT71(extraout_var_09,bVar26) ^ 1;
    if ((char)local_78 != '\0') goto label_05d80866;
label_05d8049a:
    local_154 = 0;
    if (local_173 == 0) goto label_05d808a4;
label_05d804ad:
    pSVar10 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._mixedFields;
    if (pSVar10 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_05d825d5;
    bVar26 = System_Collections_Generic_HashSet_object___Contains
                       (pSVar10,(Il2CppObject *)"OffsetX",
                        (MethodInfo_4FB3720 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
    local_11c = (uint)CONCAT71(extraout_var_10,bVar26) ^ 1;
    if (bVar28 != false) goto label_05d808b8;
label_05d804ec:
    local_134 = 0;
  }
  local_181 = (byte)local_10c | (byte)local_110 | (byte)local_114;
  bVar46 = local_181 | (byte)local_12c | (byte)local_130 | (byte)local_144 | (byte)local_148 | (byte)local_14c
           | (byte)local_150;
  if ((bVar46 & 1) != 0) {
    pGVar50 = (__this->fields)._gameManager;
    if (pGVar50 == (GameManagers_MapEditorGameManager_o *)0x0) goto label_05d825d5;
    GameManagers_MapEditorGameManager__SetupTemporaryPhysicalParenting(pGVar50,(MethodInfo *)0x0);
  }
  local_155 = bVar46;
  local_b0 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_MapObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)local_b0,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_MapObject_ctor);
  local_b8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_MapObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)local_b8,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_MapObject_ctor);
  scaleObjects = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_MapObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)scaleObjects,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_MapObject_ctor);
  pSVar11 = (__this->fields)._mapObjects;
  if (pSVar11 == (System_Collections_Generic_List_MapObject__o *)0x0) goto label_05d825d5;
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_170,
             (System_Collections_Generic_List_object__o *)pSVar11,
             (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_MapObject_GetEnumerator);
  local_48 = local_160;
  local_58 = (undefined1  [8])local_170._0_8_;
  puStack_50 = (undefined1 *)local_170._8_8_;
  local_170._0_8_ = (UI_MapEditorInspectPanel_c *)0x0;
  local_170._8_8_ = local_58;
  local_171 = (byte)local_12c | (byte)local_130 | (byte)local_144;
  local_172 = (byte)local_148 | (byte)local_14c | (byte)local_150;
  local_191 = (byte)local_140 | (byte)local_154;
  local_173 = (byte)local_11c | (byte)local_134;
  local_e0 = 0;
  local_190 = 0;
  local_c0 = scaleObjects;
  while( true ) {
    pUVar49 = (UI_MapEditorInspectPanel_o *)local_58;
    bVar26 = System_Collections_Generic_List_Enumerator_object___MoveNext
                       ((System_Collections_Generic_List_Enumerator_object__o *)pUVar49,
                        (MethodInfo_4C45C50 *)
                        MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_MoveNext);
    obj = local_48;
    if (!bVar26) break;
    if (local_48 == (Map_MapObject_o *)0x0) {
      ThrowNullReferenceException();
    }
    local_180 = (local_48->fields).ScriptObject;
    if (local_180 != (Map_MapScriptBaseObject_o *)0x0) {
      bVar46 = (TypeInfo_Map_MapScriptSceneObject->_2).typeHierarchyDepth;
      if (((local_180->klass->_2).typeHierarchyDepth < bVar46) ||
         ((local_180->klass->_2).typeHierarchy[(ulong)bVar46 - 1] !=
          (Il2CppClass *)TypeInfo_Map_MapScriptSceneObject)) {
        il2cpp_codegen_raise_invalid_cast_exception(local_180);
      }
    }
    if ((char)local_c8 != '\0') {
      pSVar6 = (__this->fields)._name;
      if (pSVar6 == (Settings_StringSetting_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar32 = UI_MapEditorInspectPanel__SanitizeName(pUVar49,(pSVar6->fields)._value,method_00);
      pMVar25 = local_180;
      if (local_180 == (Map_MapScriptBaseObject_o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar26 = System_String__op_Inequality((local_180->fields).Name,pSVar32,(MethodInfo *)0x0);
      ppSVar1 = &(pMVar25->fields).Name;
      local_e0 = local_e0 & 0xff;
      if (bVar26) {
        local_e0 = 1;
      }
      *ppSVar1 = pSVar32;
      Il2CppCodeGenWriteBarrier(ppSVar1);
    }
    if ((char)local_120 != '\0') {
      pSVar8 = (__this->fields)._active;
      if (pSVar8 == (Settings_BoolSetting_o *)0x0) {
        ThrowNullReferenceException();
      }
      if (local_180 == (Map_MapScriptBaseObject_o *)0x0) {
        ThrowNullReferenceException();
      }
      (local_180->fields).Active = (pSVar8->fields)._value;
    }
    if ((char)local_124 != '\0') {
      pSVar8 = (__this->fields)._static;
      if (pSVar8 == (Settings_BoolSetting_o *)0x0) {
        ThrowNullReferenceException();
      }
      if (local_180 == (Map_MapScriptBaseObject_o *)0x0) {
        ThrowNullReferenceException();
      }
      (local_180->fields).Static = (pSVar8->fields)._value;
    }
    if ((char)local_128 != '\0') {
      pSVar8 = (__this->fields)._networked;
      if (pSVar8 == (Settings_BoolSetting_o *)0x0) {
        ThrowNullReferenceException();
      }
      if (local_180 == (Map_MapScriptBaseObject_o *)0x0) {
        ThrowNullReferenceException();
      }
      (local_180->fields).Networked = (pSVar8->fields)._value;
    }
    if ((char)local_13c != '\0') {
      pSVar8 = (__this->fields)._visible;
      if (pSVar8 == (Settings_BoolSetting_o *)0x0) {
        ThrowNullReferenceException();
      }
      if (local_180 == (Map_MapScriptBaseObject_o *)0x0) {
        ThrowNullReferenceException();
      }
      (local_180->fields).Visible = (pSVar8->fields)._value;
    }
    if ((char)local_138 == '\0') {
      if (local_181 != 0) {
        fVar55 = in_XMM1_Db;
        fVar57 = in_XMM1_Dd;
        if (local_180 == (Map_MapScriptBaseObject_o *)0x0) {
          ThrowNullReferenceException();
        }
        goto label_05d80da7;
      }
    }
    else {
      pSVar9 = (__this->fields)._parent;
      if (pSVar9 == (Settings_IntSetting_o *)0x0) {
        ThrowNullReferenceException();
      }
      iVar30 = (pSVar9->fields)._value;
      if (iVar30 < 1) {
label_05d80d40:
        pMVar33 = (Map_MapObject_o *)0x0;
        uVar4 = (TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor;
      }
      else {
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        pSVar12 = (System_Collections_Generic_Dictionary_int__object__o *)
                  TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
        if (pSVar12 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
          ThrowNullReferenceException();
        }
        bVar26 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                           (pSVar12,iVar30,
                            (MethodInfo_4A0F950 *)
                            MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
        if (!bVar26) goto label_05d80d40;
        if (local_180 == (Map_MapScriptBaseObject_o *)0x0) {
          ThrowNullReferenceException();
        }
        if (iVar30 == (local_180->fields).Id) goto label_05d80d40;
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        pSVar12 = (System_Collections_Generic_Dictionary_int__object__o *)
                  TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
        if (pSVar12 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
          ThrowNullReferenceException();
        }
        pMVar33 = System_Collections_Generic_Dictionary_int__object___get_Item
                            (pSVar12,iVar30,
                             (MethodInfo_4A0F690 *)
                             MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
        if (pMVar33 == (Map_MapObject_o *)0x0) {
          ThrowNullReferenceException();
        }
        if ((pMVar33->fields).Parent == (local_180->fields).Id) goto label_05d80d40;
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        pSVar12 = (System_Collections_Generic_Dictionary_int__object__o *)
                  TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
        if (pSVar12 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
          ThrowNullReferenceException();
        }
        pMVar33 = System_Collections_Generic_Dictionary_int__object___get_Item
                            (pSVar12,iVar30,
                             (MethodInfo_4A0F690 *)
                             MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
        uVar4 = (TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor;
      }
      if (uVar4 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      Map_MapLoader__SetParentLogical(obj,pMVar33,(MethodInfo *)0x0);
      if (local_180 == (Map_MapScriptBaseObject_o *)0x0) {
        ThrowNullReferenceException();
      }
      (local_180->fields).Parent = (obj->fields).Parent;
      fVar55 = in_XMM1_Db;
      fVar57 = in_XMM1_Dd;
      if (local_181 != 0) {
label_05d80da7:
        UVar66 = Map_MapScriptBaseObject__GetPosition(local_180,(MethodInfo *)0x0);
        in_XMM1_Db = UVar66.fields.x;
        in_XMM1_Dd = UVar66.fields.y;
        fVar59 = in_XMM1_Db;
        if ((char)local_10c != '\0') {
          pSVar38 = (__this->fields)._positionX;
          if (pSVar38 == (Settings_FloatSetting_o *)0x0) {
            ThrowNullReferenceException();
          }
          fVar59 = (pSVar38->fields)._value;
        }
        fVar22 = in_XMM1_Dd;
        if ((byte)local_110 != '\0') {
          pSVar38 = (__this->fields)._positionY;
          if (pSVar38 == (Settings_FloatSetting_o *)0x0) {
            ThrowNullReferenceException();
          }
          fVar22 = (pSVar38->fields)._value;
        }
        fVar63 = UVar66.fields.z;
        fVar64 = fVar55;
        fVar65 = in_XMM1_Dc;
        if ((byte)local_114 != '\0') {
          pSVar38 = (__this->fields)._positionZ;
          if (pSVar38 == (Settings_FloatSetting_o *)0x0) {
            ThrowNullReferenceException();
          }
          fVar57 = 0.0;
          fVar63 = (pSVar38->fields)._value;
          fVar64 = 0.0;
          fVar65 = 0.0;
        }
        local_108 = (UI_MapEditorInspectPanel___c__DisplayClass104_0_Fields *)CONCAT44(fVar64,fVar63);
        local_88 = CONCAT44(fVar22,fVar59);
        fStack_f0 = 0.0;
        fStack_ec = 0.0;
        fVar62 = fVar63 - UVar66.fields.z;
        in_XMM1_Dc = fVar55;
        fStack_100 = fVar65;
        fStack_fc = fVar57;
        local_f8 = fVar59;
        fStack_f4 = fVar22;
        local_80 = fVar63;
        if (9.9999994e-11 <=
            (fVar22 - in_XMM1_Dd) * (fVar22 - in_XMM1_Dd) + (fVar59 - in_XMM1_Db) * (fVar59 - in_XMM1_Db) +
            fVar62 * fVar62) {
          pUVar13 = (obj->fields).GameObject;
          local_108._0_4_ = fVar63;
          local_108._4_4_ = fVar64;
          if (pUVar13 == (UnityEngine_GameObject_o *)0x0) {
            ThrowNullReferenceException();
          }
          pUVar34 = UnityEngine_GameObject__get_transform(pUVar13,(MethodInfo *)0x0);
          if (pUVar34 == (UnityEngine_Transform_o *)0x0) {
            ThrowNullReferenceException();
          }
          UVar66.fields.y = fStack_f4;
          UVar66.fields.x = local_f8;
          UVar66.fields.z = (float)local_108;
          in_XMM1_Db = local_108._4_4_;
          in_XMM1_Dc = fStack_100;
          in_XMM1_Dd = fStack_fc;
          UnityEngine_Transform__set_position(pUVar34,UVar66,(MethodInfo *)0x0);
          pMVar43 = MethodInfo_System_Collections_Generic_List_MapObject_Add;
          if (local_b0 == (System_Collections_Generic_List_MapObject__o *)0x0) {
label_05d82611:
            ThrowNullReferenceException();
          }
          piVar2 = &(local_b0->fields)._version;
          *piVar2 = *piVar2 + 1;
          pMVar14 = (local_b0->fields)._items;
          if (pMVar14 == (Map_MapObject_array *)0x0) goto label_05d82611;
          uVar5 = (local_b0->fields)._size;
          if (uVar5 < (uint)pMVar14->max_length) {
            (local_b0->fields)._size = uVar5 + 1;
            pMVar14->m_Items[(int)uVar5] = obj;
            Il2CppCodeGenWriteBarrier(pMVar14->m_Items + (int)uVar5);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)local_b0,(Il2CppObject *)obj,
                       (MethodInfo_395D230 *)pMVar43->klass->rgctx_data[0xe].method);
          }
        }
      }
    }
    fVar55 = in_XMM1_Db;
    fVar57 = in_XMM1_Dc;
    fVar59 = in_XMM1_Dd;
    if (local_171 != 0) {
      if (local_180 == (Map_MapScriptBaseObject_o *)0x0) {
        ThrowNullReferenceException();
      }
      UVar66 = Map_MapScriptBaseObject__GetRotation(local_180,(MethodInfo *)0x0);
      fVar55 = UVar66.fields.x;
      fVar59 = UVar66.fields.y;
      fVar22 = fVar55;
      if ((byte)local_12c != '\0') {
        pSVar38 = (__this->fields)._rotationX;
        if (pSVar38 == (Settings_FloatSetting_o *)0x0) {
          ThrowNullReferenceException();
        }
        fVar22 = (pSVar38->fields)._value;
      }
      fVar63 = fVar59;
      if ((byte)local_130 != '\0') {
        pSVar38 = (__this->fields)._rotationY;
        if (pSVar38 == (Settings_FloatSetting_o *)0x0) {
          ThrowNullReferenceException();
        }
        fVar63 = (pSVar38->fields)._value;
      }
      fVar64 = UVar66.fields.z;
      fVar65 = in_XMM1_Db;
      if ((byte)local_144 != '\0') {
        pSVar38 = (__this->fields)._rotationZ;
        if (pSVar38 == (Settings_FloatSetting_o *)0x0) {
          ThrowNullReferenceException();
        }
        in_XMM1_Dc = 0.0;
        in_XMM1_Dd = 0.0;
        fVar64 = (pSVar38->fields)._value;
        fVar65 = 0.0;
      }
      local_108 = (UI_MapEditorInspectPanel___c__DisplayClass104_0_Fields *)CONCAT44(fVar65,fVar64);
      local_98 = CONCAT44(fVar63,fVar22);
      fStack_f0 = 0.0;
      fStack_ec = 0.0;
      fVar62 = fVar64 - UVar66.fields.z;
      fVar57 = in_XMM1_Db;
      fStack_100 = in_XMM1_Dc;
      fStack_fc = in_XMM1_Dd;
      local_f8 = fVar22;
      fStack_f4 = fVar63;
      local_90 = fVar64;
      if (9.9999994e-11 <=
          (fVar63 - fVar59) * (fVar63 - fVar59) + (fVar22 - fVar55) * (fVar22 - fVar55) + fVar62 * fVar62) {
        pUVar13 = (obj->fields).GameObject;
        local_108._0_4_ = fVar64;
        local_108._4_4_ = fVar65;
        if (pUVar13 == (UnityEngine_GameObject_o *)0x0) {
          ThrowNullReferenceException();
        }
        pUVar34 = UnityEngine_GameObject__get_transform(pUVar13,(MethodInfo *)0x0);
        fVar57 = fStack_f0 * 0.0;
        fVar59 = fStack_ec * 0.0;
        local_38 = (float)local_108 * 0.017453292;
        local_40 = (System_Threading_CancellationTokenSource_o *)
                   CONCAT44(fStack_f4 * 0.017453292,local_f8 * 0.017453292);
        value_01 = UnityEngine_Quaternion__Internal_FromEulerRad
                             ((UnityEngine_Vector3_o *)&local_40,(MethodInfo *)0x0);
        fVar55 = value_01.fields.w;
        if (pUVar34 == (UnityEngine_Transform_o *)0x0) {
          ThrowNullReferenceException();
        }
        UnityEngine_Transform__set_rotation(pUVar34,value_01,(MethodInfo *)0x0);
        pMVar43 = MethodInfo_System_Collections_Generic_List_MapObject_Add;
        if (local_b8 == (System_Collections_Generic_List_MapObject__o *)0x0) {
label_05d82634:
          ThrowNullReferenceException();
        }
        piVar2 = &(local_b8->fields)._version;
        *piVar2 = *piVar2 + 1;
        pMVar14 = (local_b8->fields)._items;
        if (pMVar14 == (Map_MapObject_array *)0x0) goto label_05d82634;
        uVar5 = (local_b8->fields)._size;
        if (uVar5 < (uint)pMVar14->max_length) {
          (local_b8->fields)._size = uVar5 + 1;
          pMVar14->m_Items[(int)uVar5] = obj;
          Il2CppCodeGenWriteBarrier(pMVar14->m_Items + (int)uVar5);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)local_b8,(Il2CppObject *)obj,
                     (MethodInfo_395D230 *)pMVar43->klass->rgctx_data[0xe].method);
        }
      }
    }
    in_XMM1_Db = fVar55;
    in_XMM1_Dc = fVar57;
    in_XMM1_Dd = fVar59;
    if (local_172 != 0) {
      if (local_180 == (Map_MapScriptBaseObject_o *)0x0) {
        ThrowNullReferenceException();
      }
      UVar66 = Map_MapScriptBaseObject__GetScale(local_180,(MethodInfo *)0x0);
      in_XMM1_Db = UVar66.fields.x;
      in_XMM1_Dd = UVar66.fields.y;
      fVar22 = in_XMM1_Db;
      if ((byte)local_148 != '\0') {
        pSVar38 = (__this->fields)._scaleX;
        if (pSVar38 == (Settings_FloatSetting_o *)0x0) {
          ThrowNullReferenceException();
        }
        fVar22 = (pSVar38->fields)._value;
      }
      fVar63 = in_XMM1_Dd;
      if ((byte)local_14c != '\0') {
        pSVar38 = (__this->fields)._scaleY;
        if (pSVar38 == (Settings_FloatSetting_o *)0x0) {
          ThrowNullReferenceException();
        }
        fVar63 = (pSVar38->fields)._value;
      }
      fVar64 = UVar66.fields.z;
      fVar65 = fVar55;
      if ((byte)local_150 != '\0') {
        pSVar38 = (__this->fields)._scaleZ;
        if (pSVar38 == (Settings_FloatSetting_o *)0x0) {
          ThrowNullReferenceException();
        }
        fVar57 = 0.0;
        fVar59 = 0.0;
        fVar64 = (pSVar38->fields)._value;
        fVar65 = 0.0;
      }
      local_108 = (UI_MapEditorInspectPanel___c__DisplayClass104_0_Fields *)CONCAT44(fVar65,fVar64);
      local_a8 = CONCAT44(fVar63,fVar22);
      fStack_f0 = 0.0;
      fStack_ec = 0.0;
      fVar62 = fVar64 - UVar66.fields.z;
      in_XMM1_Dc = fVar55;
      fStack_100 = fVar57;
      fStack_fc = fVar59;
      local_f8 = fVar22;
      fStack_f4 = fVar63;
      local_a0 = fVar64;
      if (9.9999994e-11 <=
          (fVar63 - in_XMM1_Dd) * (fVar63 - in_XMM1_Dd) + (fVar22 - in_XMM1_Db) * (fVar22 - in_XMM1_Db) +
          fVar62 * fVar62) {
        local_68._0_4_ = (obj->fields).BaseScale.fields.x;
        local_68._4_4_ = (obj->fields).BaseScale.fields.y;
        uStack_60 = 0;
        local_78 = CONCAT44(local_78._4_4_,(obj->fields).BaseScale.fields.z);
        local_108._0_4_ = fVar64;
        local_108._4_4_ = fVar65;
        if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
        }
        uVar56 = 0;
        uVar58 = 0;
        uVar60 = 0;
        b.fields.y = fStack_f4;
        b.fields.x = local_f8;
        a.fields.z = (float)local_78;
        a.fields.x = (float)local_68;
        a.fields.y = (float)local_68._4_4_;
        b.fields.z = (float)local_108;
        UVar66 = Utility_Util__MultiplyVectors(a,b,(MethodInfo *)0x0);
        local_108._0_4_ = UVar66.fields.z;
        local_f8 = UVar66.fields.x;
        fStack_f4 = UVar66.fields.y;
        fStack_f0 = (float)extraout_XMM0_Qb;
        fStack_ec = (float)((ulong)extraout_XMM0_Qb >> 0x20);
        pUVar13 = (obj->fields).GameObject;
        if (pUVar13 == (UnityEngine_GameObject_o *)0x0) {
          ThrowNullReferenceException();
        }
        pUVar34 = UnityEngine_GameObject__get_transform(pUVar13,(MethodInfo *)0x0);
        if (pUVar34 == (UnityEngine_Transform_o *)0x0) {
          ThrowNullReferenceException();
        }
        pUVar34 = UnityEngine_Transform__get_parent(pUVar34,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar26 = UnityEngine_Object__op_Inequality
                           ((UnityEngine_Object_o *)pUVar34,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar26) {
          if (pUVar34 == (UnityEngine_Transform_o *)0x0) {
            ThrowNullReferenceException();
          }
          UVar66 = UnityEngine_Transform__get_lossyScale(pUVar34,(MethodInfo *)0x0);
          local_78 = UVar66.fields._0_8_;
          local_68 = CONCAT44(uVar56,UVar66.fields.z);
          uStack_60 = CONCAT44(uVar60,uVar58);
          pUVar13 = (obj->fields).GameObject;
          if (pUVar13 == (UnityEngine_GameObject_o *)0x0) {
            ThrowNullReferenceException();
          }
          uStack_70 = extraout_XMM0_Qb_00;
          pUVar34 = UnityEngine_GameObject__get_transform(pUVar13,(MethodInfo *)0x0);
          if (pUVar34 == (UnityEngine_Transform_o *)0x0) {
            ThrowNullReferenceException();
          }
          auVar61._0_8_ =
               CONCAT44(-(uint)(local_78._4_4_ == 0.0),-(uint)((float)local_78 == 0.0)) & 0x3f8000003f800000;
          auVar61._8_8_ = 0;
          auVar54._4_4_ = ~-(uint)(local_78._4_4_ == 0.0) & (uint)local_78._4_4_;
          auVar54._0_4_ = ~-(uint)((float)local_78 == 0.0) & (uint)(float)local_78;
          auVar54._8_4_ = ~-(uint)((float)uStack_70 == 0.0) & (uint)(float)uStack_70;
          auVar54._12_4_ = ~-(uint)(uStack_70._4_4_ == 0.0) & (uint)uStack_70._4_4_;
          auVar21._4_4_ = fStack_f4;
          auVar21._0_4_ = local_f8;
          auVar21._8_4_ = fStack_f0;
          auVar21._12_4_ = fStack_ec;
          auVar54 = divps(auVar21,auVar61 | auVar54);
          in_XMM1_Db = 0.0;
          in_XMM1_Dc = 0.0;
          in_XMM1_Dd = 0.0;
          value.fields.z =
               (float)local_108 /
               (float)(~-(uint)((float)local_68 == 0.0) & (uint)(float)local_68 |
                      -(uint)((float)local_68 == 0.0) & 0x3f800000);
          value.fields._0_8_ = auVar54._0_8_;
          UnityEngine_Transform__set_localScale(pUVar34,value,(MethodInfo *)0x0);
        }
        else {
          pUVar13 = (obj->fields).GameObject;
          if (pUVar13 == (UnityEngine_GameObject_o *)0x0) {
            ThrowNullReferenceException();
          }
          pUVar34 = UnityEngine_GameObject__get_transform(pUVar13,(MethodInfo *)0x0);
          if (pUVar34 == (UnityEngine_Transform_o *)0x0) {
            ThrowNullReferenceException();
          }
          value_00.fields.y = fStack_f4;
          value_00.fields.x = local_f8;
          in_XMM1_Db = 0.0;
          in_XMM1_Dc = 0.0;
          in_XMM1_Dd = 0.0;
          value_00.fields.z = (float)local_108;
          UnityEngine_Transform__set_localScale(pUVar34,value_00,(MethodInfo *)0x0);
        }
        pMVar43 = MethodInfo_System_Collections_Generic_List_MapObject_Add;
        if (scaleObjects == (System_Collections_Generic_List_MapObject__o *)0x0) {
label_05d8267a:
          ThrowNullReferenceException();
        }
        piVar2 = &(scaleObjects->fields)._version;
        *piVar2 = *piVar2 + 1;
        pMVar14 = (scaleObjects->fields)._items;
        if (pMVar14 == (Map_MapObject_array *)0x0) goto label_05d8267a;
        uVar5 = (scaleObjects->fields)._size;
        if (uVar5 < (uint)pMVar14->max_length) {
          (scaleObjects->fields)._size = uVar5 + 1;
          pMVar14->m_Items[(int)uVar5] = obj;
          Il2CppCodeGenWriteBarrier(pMVar14->m_Items + (int)uVar5);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)scaleObjects,(Il2CppObject *)obj,
                     (MethodInfo_395D230 *)pMVar43->klass->rgctx_data[0xe].method);
        }
      }
    }
    if ((char)local_cc != '\0') {
      pSVar6 = (__this->fields)._collideMode;
      if (pSVar6 == (Settings_StringSetting_o *)0x0) {
        ThrowNullReferenceException();
      }
      if (local_180 == (Map_MapScriptBaseObject_o *)0x0) {
        ThrowNullReferenceException();
      }
      (*(uint64_t *)((char *)local_180 + 0x60)) = (Map_MapScriptBaseObject_c *)(pSVar6->fields)._value;
      Il2CppCodeGenWriteBarrier(&(*(uint64_t *)((char *)local_180 + 0x60)));
    }
    if ((char)local_d0 != '\0') {
      pSVar6 = (__this->fields)._collideWith;
      if (pSVar6 == (Settings_StringSetting_o *)0x0) {
        ThrowNullReferenceException();
      }
      if (local_180 == (Map_MapScriptBaseObject_o *)0x0) {
        ThrowNullReferenceException();
      }
      (*(uint64_t *)((char *)local_180 + 0x68)) = (pSVar6->fields)._value;
      Il2CppCodeGenWriteBarrier(&(*(uint64_t *)((char *)local_180 + 0x68)));
    }
    if ((char)local_d4 != '\0') {
      pSVar6 = (__this->fields)._physicsMaterial;
      if (pSVar6 == (Settings_StringSetting_o *)0x0) {
        ThrowNullReferenceException();
      }
      if (local_180 == (Map_MapScriptBaseObject_o *)0x0) {
        ThrowNullReferenceException();
      }
      (*(uint64_t *)((char *)local_180 + 0x70)) = (pSVar6->fields)._value;
      Il2CppCodeGenWriteBarrier(&(*(uint64_t *)((char *)local_180 + 0x70)));
    }
    if ((char)local_d8 == '\0') {
label_05d816f0:
      uVar51 = local_190 & 0xffffffff;
      if (local_156 != false) goto label_05d816a4;
label_05d816ff:
      if (local_180 == (Map_MapScriptBaseObject_o *)0x0) {
        ThrowNullReferenceException();
      }
    }
    else {
      pSVar6 = (__this->fields)._shader;
      if (pSVar6 == (Settings_StringSetting_o *)0x0) {
        ThrowNullReferenceException();
      }
      if (local_180 == (Map_MapScriptBaseObject_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar32 = (*(uint64_t *)((char *)local_180 + 0x78));
      if (pSVar32 == (System_String_o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar26 = System_String__op_Inequality
                         ((pSVar6->fields)._value,(System_String_o *)pSVar32->fields,(MethodInfo *)0x0);
      if (!bVar26) goto label_05d816f0;
      pSVar6 = (__this->fields)._shader;
      if (pSVar6 == (Settings_StringSetting_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar32 = (pSVar6->fields)._value;
      if ((TypeInfo_Map_MapObjectShader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectShader);
      }
      bVar26 = System_String__op_Equality
                         (pSVar32,TypeInfo_Map_MapObjectShader->static_fields->Default,(MethodInfo *)0x0);
      ppSVar1 = &(*(uint64_t *)((char *)local_180 + 0x78));
      if (bVar26) {
label_05d8163d:
        __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScriptBaseMaterial);
        Map_MapScriptBaseMaterial___ctor(__this_01,(MethodInfo *)0x0);
        *ppSVar1 = (System_String_o *)__this_01;
        Il2CppCodeGenWriteBarrier(ppSVar1);
      }
      else {
        pSVar6 = (__this->fields)._shader;
        if (pSVar6 == (Settings_StringSetting_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar32 = (pSVar6->fields)._value;
        if ((TypeInfo_Map_MapObjectShader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectShader);
        }
        bVar26 = System_String__op_Equality
                           (pSVar32,TypeInfo_Map_MapObjectShader->static_fields->DefaultNoTint,
                            (MethodInfo *)0x0);
        if (bVar26) goto label_05d8163d;
        pSVar6 = (__this->fields)._shader;
        if (pSVar6 == (Settings_StringSetting_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar32 = (pSVar6->fields)._value;
        if ((TypeInfo_Map_MapObjectShader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectShader);
        }
        bVar26 = System_String__op_Equality
                           (pSVar32,TypeInfo_Map_MapObjectShader->static_fields->DefaultTiled,
                            (MethodInfo *)0x0);
        if (bVar26) {
          __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScriptDefaultTiledMaterial);
          Map_MapScriptDefaultTiledMaterial___ctor(__this_02,(MethodInfo *)0x0);
          *ppSVar1 = (System_String_o *)__this_02;
          Il2CppCodeGenWriteBarrier(ppSVar1);
        }
        else {
          pSVar6 = (__this->fields)._shader;
          if (pSVar6 == (Settings_StringSetting_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar32 = (pSVar6->fields)._value;
          if ((TypeInfo_Map_MapObjectShader->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectShader);
          }
          bVar26 = System_String__op_Equality
                             (pSVar32,TypeInfo_Map_MapObjectShader->static_fields->Basic,(MethodInfo *)0x0);
          if (!bVar26) {
            pSVar6 = (__this->fields)._shader;
            if (pSVar6 == (Settings_StringSetting_o *)0x0) {
              ThrowNullReferenceException();
            }
            pSVar32 = (pSVar6->fields)._value;
            if ((TypeInfo_Map_MapObjectShader->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectShader);
            }
            bVar26 = System_String__op_Equality
                               (pSVar32,TypeInfo_Map_MapObjectShader->static_fields->Transparent,
                                (MethodInfo *)0x0);
            if (!bVar26) {
              pSVar6 = (__this->fields)._shader;
              if (pSVar6 == (Settings_StringSetting_o *)0x0) {
                ThrowNullReferenceException();
              }
              pSVar32 = (pSVar6->fields)._value;
              if ((TypeInfo_Map_MapObjectShader->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectShader);
              }
              bVar26 = System_String__op_Equality
                                 (pSVar32,TypeInfo_Map_MapObjectShader->static_fields->Reflective,
                                  (MethodInfo *)0x0);
              if (bVar26) {
                __this_08 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScriptReflectiveMaterial)
                ;
                Map_MapScriptReflectiveMaterial___ctor(__this_08,(MethodInfo *)0x0);
                *ppSVar1 = (System_String_o *)__this_08;
                Il2CppCodeGenWriteBarrier(ppSVar1);
              }
              else {
                __this_09 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScriptLegacyMaterial);
                Map_MapScriptLegacyMaterial___ctor(__this_09,(MethodInfo *)0x0);
                *ppSVar1 = (System_String_o *)__this_09;
                Il2CppCodeGenWriteBarrier(ppSVar1);
              }
              goto label_05d81668;
            }
          }
          __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScriptBasicMaterial);
          Map_MapScriptBasicMaterial___ctor(__this_03,(MethodInfo *)0x0);
          *ppSVar1 = (System_String_o *)__this_03;
          Il2CppCodeGenWriteBarrier(ppSVar1);
        }
      }
label_05d81668:
      pSVar6 = (__this->fields)._shader;
      if (pSVar6 == (Settings_StringSetting_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar32 = *ppSVar1;
      if (pSVar32 == (System_String_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar32->fields = (System_String_Fields)(pSVar6->fields)._value;
      uVar51 = CONCAT71((int7)((ulong)material >> 8),1);
      Il2CppCodeGenWriteBarrier((void **)&pSVar32->fields);
      if (local_156 == false) goto label_05d816ff;
label_05d816a4:
      if (local_180 == (Map_MapScriptBaseObject_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar15 = (__this->fields)._color;
      if (pSVar15 == (Settings_ColorSetting_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar32 = (*(uint64_t *)((char *)local_180 + 0x78));
      if (pSVar32 == (System_String_o *)0x0) {
        ThrowNullReferenceException();
      }
      (*(uint64_t *)((char *)pSVar32 + 0x18)) = (System_String_c *)(pSVar15->fields)._value;
      Il2CppCodeGenWriteBarrier(&(*(uint64_t *)((char *)pSVar32 + 0x18)));
    }
    handle = TypeRef_Map_MapScriptBasicMaterial;
    pSVar32 = (*(uint64_t *)((char *)local_180 + 0x78));
    if (pSVar32 == (System_String_o *)0x0) {
label_05d81770:
      if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(g_data_075567a8);
      }
      pSVar35 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
      pSVar32 = (*(uint64_t *)((char *)local_180 + 0x78));
      if (pSVar32 == (System_String_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar36 = System_Object__GetType((Il2CppObject *)pSVar32,(MethodInfo *)0x0);
      if (pSVar35 == (System_Type_o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar26 = (*(pSVar35->klass->vtable)._22_IsAssignableFrom.methodPtr)
                         (pSVar35,pSVar36,(pSVar35->klass->vtable)._22_IsAssignableFrom.method);
      if (bVar26) {
        pSVar32 = (*(uint64_t *)((char *)local_180 + 0x78));
        if (pSVar32 == (System_String_o *)0x0) {
          if ((char)local_118 != '\0') {
            ThrowNullReferenceException();
          }
        }
        else {
          bVar46 = (TypeInfo_Map_MapScriptBasicMaterial->_2).typeHierarchyDepth;
          if (((pSVar32->klass->_2).typeHierarchyDepth < bVar46) ||
             ((pSVar32->klass->_2).typeHierarchy[(ulong)bVar46 - 1] !=
              (Il2CppClass *)TypeInfo_Map_MapScriptBasicMaterial)) {
            il2cpp_codegen_raise_invalid_cast_exception(pSVar32);
          }
          if ((char)local_118 != '\0') {
            pSVar6 = (__this->fields)._texture;
            if (pSVar6 == (Settings_StringSetting_o *)0x0) {
              ThrowNullReferenceException();
            }
            targetAddress = &(*(uint64_t *)((char *)pSVar32 + 0x20));
            bVar26 = System_String__op_Inequality(*targetAddress,(pSVar6->fields)._value,(MethodInfo *)0x0);
            if (bVar26) {
              pSVar6 = (__this->fields)._texture;
              if (pSVar6 == (Settings_StringSetting_o *)0x0) {
                ThrowNullReferenceException();
              }
              *targetAddress = (pSVar6->fields)._value;
              uVar51 = CONCAT71((int7)(uVar51 >> 8),1);
              Il2CppCodeGenWriteBarrier(targetAddress);
            }
          }
        }
        if (local_191 != 0) {
          if ((char)local_140 == '\0') {
            if (pSVar32 == (System_String_o *)0x0) {
              ThrowNullReferenceException();
            }
            fVar55 = (float)(*(uint32_t *)((char *)pSVar32 + 0x28));
            if ((byte)local_154 == '\0') goto label_05d8193f;
label_05d81925:
            pSVar38 = (__this->fields)._tilingY;
            if (pSVar38 == (Settings_FloatSetting_o *)0x0) {
              ThrowNullReferenceException();
            }
            pfVar37 = &(pSVar38->fields)._value;
          }
          else {
            pSVar38 = (__this->fields)._tilingX;
            if (pSVar38 == (Settings_FloatSetting_o *)0x0) {
              ThrowNullReferenceException();
            }
            fVar55 = (pSVar38->fields)._value;
            if ((byte)local_154 != '\0') goto label_05d81925;
            if (pSVar32 == (System_String_o *)0x0) {
              ThrowNullReferenceException();
            }
label_05d8193f:
            pfVar37 = (float *)&(*(uint16_t *)((char *)pSVar32 + 0x2c));
          }
          if (pSVar32 == (System_String_o *)0x0) {
            ThrowNullReferenceException();
          }
          fVar57 = *pfVar37;
          (*(uint32_t *)((char *)pSVar32 + 0x28)) = (int32_t)fVar55;
          *(float *)&(*(uint16_t *)((char *)pSVar32 + 0x2c)) = fVar57;
        }
        if (local_173 != 0) {
          if ((char)local_11c == '\0') {
            if (pSVar32 == (System_String_o *)0x0) {
              ThrowNullReferenceException();
            }
            fVar55 = *(float *)&(*(uint64_t *)((char *)pSVar32 + 0x30));
            if ((byte)local_134 == '\0') goto label_05d819c0;
label_05d819a6:
            pSVar38 = (__this->fields)._offsetY;
            if (pSVar38 == (Settings_FloatSetting_o *)0x0) {
              ThrowNullReferenceException();
            }
            pfVar37 = &(pSVar38->fields)._value;
          }
          else {
            pSVar38 = (__this->fields)._offsetX;
            if (pSVar38 == (Settings_FloatSetting_o *)0x0) {
              ThrowNullReferenceException();
            }
            fVar55 = (pSVar38->fields)._value;
            if ((byte)local_134 != '\0') goto label_05d819a6;
            if (pSVar32 == (System_String_o *)0x0) {
              ThrowNullReferenceException();
            }
label_05d819c0:
            pfVar37 = (float *)((long)&(*(uint64_t *)((char *)pSVar32 + 0x30)) + 4);
          }
          if (pSVar32 == (System_String_o *)0x0) {
            ThrowNullReferenceException();
          }
          fVar57 = *pfVar37;
          *(float *)&(*(uint64_t *)((char *)pSVar32 + 0x30)) = fVar55;
          *(float *)((long)&(*(uint64_t *)((char *)pSVar32 + 0x30)) + 4) = fVar57;
        }
        pMVar23 = TypeInfo_Map_MapScriptReflectiveMaterial;
        if ((local_157 != false) && (pSVar32 != (System_String_o *)0x0)) {
          bVar46 = (TypeInfo_Map_MapScriptReflectiveMaterial->_2).typeHierarchyDepth;
          if ((bVar46 <= (pSVar32->klass->_2).typeHierarchyDepth) &&
             (ppIVar17 = (pSVar32->klass->_2).typeHierarchy,
             ppIVar17[(ulong)bVar46 - 1] == (Il2CppClass *)TypeInfo_Map_MapScriptReflectiveMaterial)) {
            pSVar15 = (__this->fields)._reflectColor;
            if (pSVar15 == (Settings_ColorSetting_o *)0x0) {
              ThrowNullReferenceException();
            }
            (*(uint64_t *)((char *)pSVar32 + 0x38)) = (pSVar15->fields)._value;
            if (ppIVar17[(ulong)bVar46 - 1] != (Il2CppClass *)pMVar23) {
              il2cpp_codegen_raise_invalid_cast_exception(pSVar32);
            }
            Il2CppCodeGenWriteBarrier(&(*(uint64_t *)((char *)pSVar32 + 0x38)));
          }
        }
      }
    }
    else {
      pSVar16 = pSVar32->klass;
      bVar46 = (pSVar16->_2).typeHierarchyDepth;
      bVar3 = (TypeInfo_Map_MapScriptLegacyMaterial->_2).typeHierarchyDepth;
      if ((bVar46 < bVar3) ||
         ((pSVar16->_2).typeHierarchy[(ulong)bVar3 - 1] != (Il2CppClass *)TypeInfo_Map_MapScriptLegacyMaterial
         )) {
        bVar3 = (TypeInfo_Map_MapScriptDefaultTiledMaterial->_2).typeHierarchyDepth;
        if ((bVar46 < bVar3) ||
           ((pSVar16->_2).typeHierarchy[(ulong)bVar3 - 1] !=
            (Il2CppClass *)TypeInfo_Map_MapScriptDefaultTiledMaterial)) goto label_05d81770;
        if (local_191 != 0) {
          if ((char)local_140 == '\0') {
            fVar55 = *(float *)&(*(uint64_t *)((char *)pSVar32 + 0x20));
          }
          else {
            pSVar38 = (__this->fields)._tilingX;
            if (pSVar38 == (Settings_FloatSetting_o *)0x0) {
              ThrowNullReferenceException();
            }
            fVar55 = (pSVar38->fields)._value;
          }
          if ((byte)local_154 == '\0') goto label_05d81cae;
          pSVar38 = (__this->fields)._tilingY;
          if (pSVar38 == (Settings_FloatSetting_o *)0x0) {
            ThrowNullReferenceException();
          }
          goto label_05d81ca8;
        }
      }
      else if (local_191 != 0) {
        if ((char)local_140 == '\0') {
          fVar55 = *(float *)&(*(uint64_t *)((char *)pSVar32 + 0x20));
        }
        else {
          pSVar38 = (__this->fields)._tilingX;
          if (pSVar38 == (Settings_FloatSetting_o *)0x0) {
            ThrowNullReferenceException();
          }
          fVar55 = (pSVar38->fields)._value;
        }
        if ((byte)local_154 == '\0') {
label_05d81cae:
          pfVar37 = (float *)((long)&(*(uint64_t *)((char *)pSVar32 + 0x20)) + 4);
        }
        else {
          pSVar38 = (__this->fields)._tilingY;
          if (pSVar38 == (Settings_FloatSetting_o *)0x0) {
            ThrowNullReferenceException();
          }
label_05d81ca8:
          pfVar37 = &(pSVar38->fields)._value;
        }
        fVar57 = *pfVar37;
        *(float *)&(*(uint64_t *)((char *)pSVar32 + 0x20)) = fVar55;
        *(float *)((long)&(*(uint64_t *)((char *)pSVar32 + 0x20)) + 4) = fVar57;
      }
    }
    local_f8 = SUB84(obj,0);
    fStack_f4 = (float)((ulong)obj >> 0x20);
    pSVar44 = (__this->fields)._componentNames;
    if (pSVar44 == (System_Collections_Generic_List_string__o *)0x0) {
label_05d825a3:
      ThrowNullReferenceException();
    }
    iVar53 = 0;
    local_190 = uVar51 & 0xffffffff;
    while (scaleObjects = local_c0, iVar53 < (pSVar44->fields)._size) {
      __this_04 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel_c__DisplayClass104_0);
      UI_MapEditorInspectPanel___c__DisplayClass104_0___ctor(__this_04,(MethodInfo *)0x0);
      if (__this_04 == (UI_MapEditorInspectPanel___c__DisplayClass104_0_o *)0x0) {
        ThrowNullReferenceException();
      }
      (__this_04->fields).__4__this = __this;
      Il2CppCodeGenWriteBarrier(&(__this_04->fields).__4__this);
      pSVar44 = (__this->fields)._componentNames;
      if (pSVar44 == (System_Collections_Generic_List_string__o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar32 = System_Collections_Generic_List_object___get_Item
                          ((System_Collections_Generic_List_object__o *)pSVar44,iVar53,
                           (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_string_get_Item);
      local_108 = &__this_04->fields;
      (__this_04->fields).componentName = pSVar32;
      Il2CppCodeGenWriteBarrier(&local_108->componentName);
      __this_00 = (__this->fields)._components;
      if (__this_00 == (System_Collections_Generic_List_Dictionary_string__BaseSetting___o *)0x0) {
        ThrowNullReferenceException();
      }
      settings = (System_Collections_Generic_Dictionary_string__BaseSetting__o *)
                 System_Collections_Generic_List_object___get_Item
                           ((System_Collections_Generic_List_object__o *)__this_00,iVar53,
                            (MethodInfo_395CF20 *)
                            MethodInfo_System_Collections_Generic_List_Dictionary_string_BaseSetting_get_Item)
      ;
      source = UI_MapEditorInspectPanel__SerializeComponentFields(__this,settings,method_01);
      pSVar7 = (System_Collections_Generic_Dictionary_object__object__o *)
               (__this->fields)._syncedComponentFields;
      if (pSVar7 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        ThrowNullReferenceException();
      }
      ppSVar47 = &(__this_04->fields).syncedFields;
      bVar26 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                         (pSVar7,(Il2CppObject *)local_108->componentName,(Il2CppObject **)ppSVar47,
                          (MethodInfo_4AAF440 *)
                          MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_string_TryGetValue
                         );
      if (!bVar26) {
        __this_05 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_string);
        System_Collections_Generic_Dictionary_object__object____ctor
                  ((System_Collections_Generic_Dictionary_object__object__o *)__this_05,
                   (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
        *ppSVar47 = __this_05;
        Il2CppCodeGenWriteBarrier(ppSVar47);
      }
      pSVar39 = (System_Func_T__TResult__o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_KeyValuePair_string_string_bool)
      ;
      System_Func_KeyValuePair_object__object___bool____ctor
                (pSVar39,(Il2CppObject *)__this_04,
                 (intptr_t)MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass104_0_OnChange_b__0,
                 (MethodInfo_4F10020 *)0x0);
      source_00 = System_Linq_Enumerable__Where_KeyValuePair_object__object__
                            ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                             (System_Func_TSource__bool__o *)pSVar39,
                             (MethodInfo_3501CC0 *)
                             MethodInfo_System_Linq_Enumerable_Where_KeyValuePair_string_string);
      if ((TypeInfo_UI_MapEditorInspectPanel_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel_c);
        pUVar40 = TypeInfo_UI_MapEditorInspectPanel_c->static_fields;
        pSVar39 = (System_Func_T__TResult__o *)pUVar40->__9__104_1;
        if (pSVar39 != (System_Func_T__TResult__o *)0x0) goto label_05d81e9f;
label_05d81eef:
        if ((TypeInfo_UI_MapEditorInspectPanel_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel_c);
          pUVar40 = TypeInfo_UI_MapEditorInspectPanel_c->static_fields;
        }
        pIVar18 = (Il2CppObject *)pUVar40->__9;
        pSVar39 = (System_Func_T__TResult__o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Func_KeyValuePair_string_string_string);
        System_Func_KeyValuePair_object__object___object____ctor
                  (pSVar39,pIVar18,(intptr_t)MethodInfo_UI_MapEditorInspectPanel_c_OnChange_b__104_1,
                   (MethodInfo_4F10320 *)0x0);
        pUVar40 = TypeInfo_UI_MapEditorInspectPanel_c->static_fields;
        pUVar40->__9__104_1 = (System_Func_KeyValuePair_string__string___string__o *)pSVar39;
        Il2CppCodeGenWriteBarrier(&pUVar40->__9__104_1);
        if ((TypeInfo_UI_MapEditorInspectPanel_c->_2).cctor_finished_or_no_cctor != 0) goto label_05d81eac;
label_05d81f6d:
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel_c);
        pUVar40 = TypeInfo_UI_MapEditorInspectPanel_c->static_fields;
        __this_06 = (System_Func_T__TResult__o *)pUVar40->__9__104_2;
      }
      else {
        pUVar40 = TypeInfo_UI_MapEditorInspectPanel_c->static_fields;
        pSVar39 = (System_Func_T__TResult__o *)pUVar40->__9__104_1;
        if (pSVar39 == (System_Func_T__TResult__o *)0x0) goto label_05d81eef;
label_05d81e9f:
        if ((TypeInfo_UI_MapEditorInspectPanel_c->_2).cctor_finished_or_no_cctor == 0) goto label_05d81f6d;
label_05d81eac:
        pUVar40 = TypeInfo_UI_MapEditorInspectPanel_c->static_fields;
        __this_06 = (System_Func_T__TResult__o *)pUVar40->__9__104_2;
      }
      if (__this_06 == (System_Func_T__TResult__o *)0x0) {
        if ((((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel_c)->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel_c);
          pUVar40 = TypeInfo_UI_MapEditorInspectPanel_c->static_fields;
        }
        pIVar18 = (Il2CppObject *)pUVar40->__9;
        __this_06 = (System_Func_T__TResult__o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Func_KeyValuePair_string_string_string);
        System_Func_KeyValuePair_object__object___object____ctor
                  (__this_06,pIVar18,(intptr_t)MethodInfo_UI_MapEditorInspectPanel_c_OnChange_b__104_2,
                   (MethodInfo_4F10320 *)0x0);
        pUVar40 = TypeInfo_UI_MapEditorInspectPanel_c->static_fields;
        pUVar40->__9__104_2 = (System_Func_KeyValuePair_string__string___string__o *)__this_06;
        Il2CppCodeGenWriteBarrier(&pUVar40->__9__104_2);
      }
      __this_07 = System_Linq_Enumerable__ToDictionary_KeyValuePair_object__object___object__object_
                            (source_00,(System_Func_TSource__TKey__o *)pSVar39,
                             (System_Func_TSource__TElement__o *)__this_06,
                             (MethodInfo_34FEC80 *)
                             MethodInfo_System_Linq_Enumerable_ToDictionary_KeyValuePair_string_string_string_string
                            );
      if (__this_07 == (System_Collections_Generic_Dictionary_TKey__TElement__o *)0x0) {
        ThrowNullReferenceException();
      }
      iVar30 = System_Collections_Generic_Dictionary_object__object___get_Count
                         ((System_Collections_Generic_Dictionary_object__object__o *)__this_07,
                          (MethodInfo_4AAD0E0 *)
                          MethodInfo_System_Collections_Generic_Dictionary_string_string_get_Count);
      if (iVar30 == 0) {
label_05d81cf0:
        uVar51 = local_190 & 0xffffffff;
      }
      else {
        pUVar49 = *(UI_MapEditorInspectPanel_o **)&(*(uint32_t *)((char *)local_180 + 0x80));
        match = (System_Predicate_T__o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Predicate_MapScriptComponent);
        System_Predicate_object____ctor
                  ((System_Predicate_object__o *)match,(Il2CppObject *)__this_04,
                   (intptr_t)MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass104_0_OnChange_b__3,
                   (MethodInfo_3DC95B0 *)0x0);
        if (pUVar49 == (UI_MapEditorInspectPanel_o *)0x0) {
          ThrowNullReferenceException();
        }
        iVar30 = System_Collections_Generic_List_object___FindIndex
                           ((System_Collections_Generic_List_object__o *)pUVar49,match,
                            (MethodInfo_395DCC0 *)
                            MethodInfo_System_Collections_Generic_List_MapScriptComponent_FindIndex);
        if (iVar30 < 0) {
          pMVar41 = (Map_MapScriptComponent_o *)0x0;
        }
        else {
          pUVar49 = *(UI_MapEditorInspectPanel_o **)&(*(uint32_t *)((char *)local_180 + 0x80));
          if (pUVar49 == (UI_MapEditorInspectPanel_o *)0x0) {
            ThrowNullReferenceException();
          }
          pMVar41 = System_Collections_Generic_List_object___get_Item
                              ((System_Collections_Generic_List_object__o *)pUVar49,iVar30,
                               (MethodInfo_395CF20 *)
                               MethodInfo_System_Collections_Generic_List_MapScriptComponent_get_Item);
        }
        pMVar41 = UI_MapEditorInspectPanel__MergeComponent
                            (pUVar49,local_108->componentName,pMVar41,
                             (System_Collections_Generic_Dictionary_string__string__o *)__this_07,in_R8);
        pMVar43 = MethodInfo_System_Collections_Generic_List_MapScriptComponent_Add;
        pSVar42 = *(System_Collections_Generic_List_object__o **)&(*(uint32_t *)((char *)local_180 + 0x80));
        if (-1 < iVar30) {
          if (pSVar42 == (System_Collections_Generic_List_object__o *)0x0) {
            ThrowNullReferenceException();
          }
          System_Collections_Generic_List_object___set_Item
                    (pSVar42,iVar30,(Il2CppObject *)pMVar41,
                     (MethodInfo_395CF60 *)
                     MethodInfo_System_Collections_Generic_List_MapScriptComponent_set_Item);
          goto label_05d81cf0;
        }
        if (pSVar42 == (System_Collections_Generic_List_object__o *)0x0) {
label_05d825c6:
          ThrowNullReferenceException();
        }
        piVar2 = &(pSVar42->fields)._version;
        *piVar2 = *piVar2 + 1;
        pSVar19 = (pSVar42->fields)._items;
        if (pSVar19 == (System_Object_array *)0x0) goto label_05d825c6;
        uVar5 = (pSVar42->fields)._size;
        uVar52 = (undefined7)((ulong)__this_07 >> 8);
        if (uVar5 < (uint)pSVar19->max_length) {
          (pSVar42->fields)._size = uVar5 + 1;
          pSVar19->m_Items[(int)uVar5] = (Il2CppObject *)pMVar41;
          uVar51 = CONCAT71(uVar52,1);
          Il2CppCodeGenWriteBarrier(pSVar19->m_Items + (int)uVar5);
        }
        else {
          uVar51 = CONCAT71(uVar52,1);
          System_Collections_Generic_List_object___AddWithResize
                    (pSVar42,(Il2CppObject *)pMVar41,
                     (MethodInfo_395D230 *)pMVar43->klass->rgctx_data[0xe].method);
        }
      }
      iVar53 = iVar53 + 1;
      pSVar44 = (__this->fields)._componentNames;
      local_190 = uVar51 & 0xffffffff;
      if (pSVar44 == (System_Collections_Generic_List_string__o *)0x0) goto label_05d825a3;
    }
    pUVar13 = *(UnityEngine_GameObject_o **)(CONCAT44(fStack_f4,local_f8) + 0x18);
    pSVar32 = (local_180->fields).Asset;
    material = (System_String_o **)(*(uint64_t *)((char *)local_180 + 0x78));
    bVar26 = (local_180->fields).Visible;
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    in_R8 = (MethodInfo *)0x1;
    Map_MapLoader__SetMaterial
              (pUVar13,pSVar32,(Map_MapScriptBaseMaterial_o *)material,bVar26,true,(MethodInfo *)0x0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose
            ((System_Collections_Generic_List_Enumerator_object__o *)local_58,
             (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_Dispose);
  if ((local_155 & 1) != 0) {
    pGVar50 = (__this->fields)._gameManager;
    if (pGVar50 == (GameManagers_MapEditorGameManager_o *)0x0) goto label_05d825d5;
    GameManagers_MapEditorGameManager__TeardownTemporaryPhysicalParenting(pGVar50,(MethodInfo *)0x0);
    pGVar50 = (__this->fields)._gameManager;
    if (pGVar50 == (GameManagers_MapEditorGameManager_o *)0x0) goto label_05d825d5;
    if ((pGVar50->fields).HierarchyTreeViewEnabled != false) {
      UI_MapEditorInspectPanel__PropagateTransformToDescendants(__this,local_b0,local_b8,scaleObjects,in_R8);
    }
  }
  pSVar42 = (System_Collections_Generic_List_object__o *)
            il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_BaseCommand);
  pMVar43 = MethodInfo_System_Collections_Generic_List_BaseCommand_ctor;
  System_Collections_Generic_List_object____ctor
            (pSVar42,(MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_BaseCommand_ctor);
  pSVar11 = local_b0;
  if (local_b0 == (System_Collections_Generic_List_MapObject__o *)0x0) goto label_05d825d5;
  if (0 < (local_b0->fields)._size) {
    pMVar43 = (MethodInfo *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_MapEditor_TransformPositionCommand);
    MapEditor_TransformPositionCommand___ctor
              ((MapEditor_TransformPositionCommand_o *)pMVar43,pSVar11,(MethodInfo *)0x0);
    pMVar24 = MethodInfo_System_Collections_Generic_List_BaseCommand_Add;
    if (pSVar42 == (System_Collections_Generic_List_object__o *)0x0) goto label_05d825d5;
    piVar2 = &(pSVar42->fields)._version;
    *piVar2 = *piVar2 + 1;
    pSVar19 = (pSVar42->fields)._items;
    if (pSVar19 == (System_Object_array *)0x0) goto label_05d825d5;
    uVar5 = (pSVar42->fields)._size;
    if (uVar5 < (uint)pSVar19->max_length) {
      (pSVar42->fields)._size = uVar5 + 1;
      pSVar19->m_Items[(int)uVar5] = (Il2CppObject *)pMVar43;
      Il2CppCodeGenWriteBarrier(pSVar19->m_Items + (int)uVar5);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                (pSVar42,(Il2CppObject *)pMVar43,(MethodInfo_395D230 *)pMVar24->klass->rgctx_data[0xe].method)
      ;
    }
  }
  pSVar11 = local_b8;
  if (local_b8 == (System_Collections_Generic_List_MapObject__o *)0x0) goto label_05d825d5;
  if (0 < (local_b8->fields)._size) {
    pMVar43 = (MethodInfo *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_MapEditor_TransformRotationCommand);
    MapEditor_TransformRotationCommand___ctor
              ((MapEditor_TransformRotationCommand_o *)pMVar43,pSVar11,(MethodInfo *)0x0);
    pMVar24 = MethodInfo_System_Collections_Generic_List_BaseCommand_Add;
    if (pSVar42 == (System_Collections_Generic_List_object__o *)0x0) goto label_05d825d5;
    piVar2 = &(pSVar42->fields)._version;
    *piVar2 = *piVar2 + 1;
    pSVar19 = (pSVar42->fields)._items;
    if (pSVar19 == (System_Object_array *)0x0) goto label_05d825d5;
    uVar5 = (pSVar42->fields)._size;
    if (uVar5 < (uint)pSVar19->max_length) {
      (pSVar42->fields)._size = uVar5 + 1;
      pSVar19->m_Items[(int)uVar5] = (Il2CppObject *)pMVar43;
      Il2CppCodeGenWriteBarrier(pSVar19->m_Items + (int)uVar5);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                (pSVar42,(Il2CppObject *)pMVar43,(MethodInfo_395D230 *)pMVar24->klass->rgctx_data[0xe].method)
      ;
    }
  }
  if (scaleObjects == (System_Collections_Generic_List_MapObject__o *)0x0) goto label_05d825d5;
  if ((scaleObjects->fields)._size < 1) {
    if (pSVar42 == (System_Collections_Generic_List_object__o *)0x0) goto label_05d825d5;
    iVar53 = (pSVar42->fields)._size;
joined_r0x05d8248a:
    bVar26 = false;
    if (iVar53 == 1) goto label_05d8248c;
label_05d824de:
    if (!bVar26 && 0 < iVar53) {
      pGVar50 = (__this->fields)._gameManager;
      pMVar43 = (MethodInfo *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_MapEditor_CompositeCommand);
      MapEditor_CompositeCommand___ctor
                ((MapEditor_CompositeCommand_o *)pMVar43,
                 (System_Collections_Generic_List_BaseCommand__o *)pSVar42,(MethodInfo *)0x0);
      if (pGVar50 == (GameManagers_MapEditorGameManager_o *)0x0) goto label_05d825d5;
      goto label_05d82519;
    }
  }
  else {
    pMVar43 = (MethodInfo *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_MapEditor_TransformScaleCommand)
    ;
    MapEditor_TransformScaleCommand___ctor
              ((MapEditor_TransformScaleCommand_o *)pMVar43,scaleObjects,(MethodInfo *)0x0);
    pMVar24 = MethodInfo_System_Collections_Generic_List_BaseCommand_Add;
    if (pSVar42 == (System_Collections_Generic_List_object__o *)0x0) goto label_05d825d5;
    piVar2 = &(pSVar42->fields)._version;
    *piVar2 = *piVar2 + 1;
    pSVar19 = (pSVar42->fields)._items;
    if (pSVar19 == (System_Object_array *)0x0) goto label_05d825d5;
    uVar5 = (pSVar42->fields)._size;
    if ((uint)pSVar19->max_length <= uVar5) {
      System_Collections_Generic_List_object___AddWithResize
                (pSVar42,(Il2CppObject *)pMVar43,(MethodInfo_395D230 *)pMVar24->klass->rgctx_data[0xe].method)
      ;
      iVar53 = (pSVar42->fields)._size;
      goto joined_r0x05d8248a;
    }
    (pSVar42->fields)._size = uVar5 + 1;
    pSVar19->m_Items[(int)uVar5] = (Il2CppObject *)pMVar43;
    Il2CppCodeGenWriteBarrier(pSVar19->m_Items + (int)uVar5);
    iVar53 = (pSVar42->fields)._size;
    bVar26 = iVar53 == 1;
    if (!bVar26) goto label_05d824de;
label_05d8248c:
    pGVar50 = (__this->fields)._gameManager;
    pMVar43 = (MethodInfo *)
              System_Collections_Generic_List_object___get_Item
                        (pSVar42,0,
                         (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_BaseCommand_get_Item
                        );
    if (pGVar50 == (GameManagers_MapEditorGameManager_o *)0x0) goto label_05d825d5;
label_05d82519:
    GameManagers_MapEditorGameManager__NewCommand
              (pGVar50,(MapEditor_BaseCommand_o *)pMVar43,false,(MethodInfo *)0x0);
  }
  UI_MapEditorInspectPanel__CaptureSyncedValues(__this,pMVar43);
  pGVar50 = (__this->fields)._gameManager;
  if (pGVar50 == (GameManagers_MapEditorGameManager_o *)0x0) {
label_05d825d5:
    ThrowNullReferenceException();
  }
  GameManagers_MapEditorGameManager__SyncGizmos(pGVar50,(MethodInfo *)0x0);
  if ((local_190 & 1) != 0) {
    pUVar20 = (__this->fields)._menu;
    if (pUVar20 == (UI_MapEditorMenu_o *)0x0) goto label_05d825d5;
    UI_MapEditorMenu__RebuildInspectorPreservingScroll(pUVar20,(__this->fields)._mapObjects,(MethodInfo *)0x0)
    ;
  }
  if ((local_e0 & 1) != 0 || (char)local_138 != '\0') {
    pUVar20 = (__this->fields)._menu;
    if (pUVar20 == (UI_MapEditorMenu_o *)0x0) goto label_05d825d5;
    UI_MapEditorMenu__SyncHierarchyPanel(pUVar20,(MethodInfo *)0x0);
  }
  return;
}


// UI.MapEditorInspectPanel$$SerializeSetting
// il2cpp: System_String_o* UI_MapEditorInspectPanel__SerializeSetting (UI_MapEditorInspectPanel_o* __this, Settings_BaseSetting_o* setting, const MethodInfo* method);
// 0x5d8fc50
// asm: 25 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d90096: lea r14, [rsp + 8]
// asm:   0x5d9009b: mov rdi, rbx
// asm:   0x5d9009e: xor esi, esi
// asm:   0x5d900a0: mov rdx, rax
// asm:   0x5d900a3: call 0x2ac8d10  ; il2cpp_codegen_array_set_ref()
// asm:   0x5d900a8: lea rdi, [rsp + 4]
// asm:   0x5d900ad: xor esi, esi
// asm:   0x5d900af: call 0x55d0980  ; System_Single__ToString()
// asm:   0x5d900b4: mov esi, 1
// asm:   0x5d900b9: mov rdi, rbx
// asm:   0x5d900bc: mov rdx, rax
// asm:   0x5d900bf: call 0x2ac8d10  ; il2cpp_codegen_array_set_ref()
// asm:   0x5d900c4: mov rdi, r14
// asm:   0x5d900c7: xor esi, esi
// asm:   0x5d900c9: call 0x55d0980  ; System_Single__ToString()
// asm:   0x5d900ce: mov esi, 2
// asm:   0x5d900d3: mov rdi, rbx
// asm:   0x5d900d6: mov rdx, rax
// asm:   0x5d900d9: call 0x2ac8d10  ; il2cpp_codegen_array_set_ref()
// asm:   0x5d900de: lea rax, [rip + 0x1541413]  ; "/"
// asm:   0x5d900e5: mov rdi, qword ptr [rax]
// asm:   0x5d900e8: mov rsi, rbx
// asm:   0x5d900eb: xor edx, edx
// asm:   0x5d900ed: call 0x54030a0  ; System_String__Join()
// asm:   0x5d900f2: jmp 0x5d8fef8

System_String_o *
UI_MapEditorInspectPanel__SerializeSetting
          (UI_MapEditorInspectPanel_o *__this,Settings_BaseSetting_o *setting,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  Settings_BaseSetting_c *pSVar3;
  Il2CppClass *pIVar4;
  System_String_o **ppSVar5;
  Il2CppObject *pIVar6;
  System_Func_int__int__o *__this_00;
  System_Linq_IOrderedEnumerable_TSource__o *source;
  UI_MapEditorInspectPanel___c_StaticFields *pUVar7;
  System_Func_int__string__o *__this_01;
  System_Collections_Generic_IEnumerable_TResult__o *source_00;
  System_String_array *pSVar8;
  System_String_o *pSVar9;
  undefined8 local_38;
  float local_30 [2];
  
  if (Il2CppMethodInitialized_07548032 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BoolSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ColorSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_OrderBy_int_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Select_int_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToArray_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_FloatSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_int_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_int_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_HashSetSetting_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptComponent);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_HashSet_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Vector3_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_get_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorInspectPanel_c_SerializeSetting_b__105_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorInspectPanel_c_SerializeSetting_b__105_1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorInspectPanel_c);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_Vector3Setting);
    il2cpp_codegen_initialize_runtime_metadata(&"false");
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    il2cpp_codegen_initialize_runtime_metadata(&"true");
    Il2CppMethodInitialized_07548032 = '\x01';
  }
  if (setting != (Settings_BaseSetting_o *)0x0) {
    pSVar3 = setting->klass;
    bVar1 = (pSVar3->_2).typeHierarchyDepth;
    bVar2 = (TypeInfo_Settings_FloatSetting->_2).typeHierarchyDepth;
    if ((bVar2 <= bVar1) &&
       ((pSVar3->_2).typeHierarchy[(ulong)bVar2 - 1] == (Il2CppClass *)TypeInfo_Settings_FloatSetting)) {
      local_38 = CONCAT44(local_38._4_4_,*(undefined4 *)((long)&(*(uint64_t *)((char *)setting + 0x18)) + 4));
      pSVar9 = System_Single__ToString((float *)&local_38,(MethodInfo *)0x0);
      return pSVar9;
    }
    bVar2 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
    if ((bVar2 <= bVar1) &&
       ((pSVar3->_2).typeHierarchy[(ulong)bVar2 - 1] == (Il2CppClass *)TypeInfo_Settings_IntSetting)) {
      local_38 = CONCAT44(local_38._4_4_,*(undefined4 *)((long)&(*(uint64_t *)((char *)setting + 0x18)) + 4));
      pSVar9 = System_Int32__ToString((int32_t *)&local_38,(MethodInfo *)0x0);
      return pSVar9;
    }
    bVar2 = (TypeInfo_Settings_BoolSetting->_2).typeHierarchyDepth;
    if ((bVar2 <= bVar1) &&
       ((pSVar3->_2).typeHierarchy[(ulong)bVar2 - 1] == (Il2CppClass *)TypeInfo_Settings_BoolSetting)) {
      if (*(char *)((long)&(*(uint64_t *)((char *)setting + 0x18)) + 1) == '\0') {
        ppSVar5 = &"false";
      }
      else {
        ppSVar5 = &"true";
      }
      goto label_05d8fef5;
    }
    bVar2 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
    if ((bVar2 <= bVar1) &&
       ((pSVar3->_2).typeHierarchy[(ulong)bVar2 - 1] == (Il2CppClass *)TypeInfo_Settings_StringSetting)) {
      pSVar9 = (*(uint64_t *)((char *)setting + 0x20));
      if ((TypeInfo_Map_MapScriptComponent->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapScriptComponent);
      }
      pSVar9 = Map_MapScriptComponent__SanitizeParameter(pSVar9,(MethodInfo *)0x0);
      return pSVar9;
    }
    bVar2 = (TypeInfo_Settings_ColorSetting->_2).typeHierarchyDepth;
    if ((bVar2 <= bVar1) &&
       ((pSVar3->_2).typeHierarchy[(ulong)bVar2 - 1] == (Il2CppClass *)TypeInfo_Settings_ColorSetting)) {
      pIVar6 = il2cpp_codegen_is_inst_class
                         ((Il2CppObject *)setting,(Il2CppClass *)TypeInfo_Settings_ColorSetting);
      if (pIVar6 != (Il2CppObject *)0x0) {
        pIVar6 = il2cpp_codegen_is_inst_class
                           ((Il2CppObject *)setting,(Il2CppClass *)TypeInfo_Settings_ColorSetting);
        pIVar4 = pIVar6[2].klass;
        pSVar8 = (System_String_array *)SZArrayNew(TypeInfo_string_array,4);
        if ((pIVar4 != (Il2CppClass *)0x0) &&
           (pSVar9 = System_Int32__ToString((int32_t *)&(pIVar4->_1).name,(MethodInfo *)0x0),
           pSVar8 != (System_String_array *)0x0)) {
          il2cpp_codegen_array_set_ref((System_Array_o *)pSVar8,0,(Il2CppObject *)pSVar9);
          pSVar9 = System_Int32__ToString((int32_t *)((long)&(pIVar4->_1).name + 4),(MethodInfo *)0x0);
          il2cpp_codegen_array_set_ref((System_Array_o *)pSVar8,1,(Il2CppObject *)pSVar9);
          pSVar9 = System_Int32__ToString((int32_t *)&(pIVar4->_1).namespaze,(MethodInfo *)0x0);
          il2cpp_codegen_array_set_ref((System_Array_o *)pSVar8,2,(Il2CppObject *)pSVar9);
          pSVar9 = System_Int32__ToString((int32_t *)((long)&(pIVar4->_1).namespaze + 4),(MethodInfo *)0x0);
          il2cpp_codegen_array_set_ref((System_Array_o *)pSVar8,3,(Il2CppObject *)pSVar9);
          pSVar9 = "/";
label_05d90279:
          pSVar9 = System_String__Join(pSVar9,pSVar8,(MethodInfo *)0x0);
          return pSVar9;
        }
      }
label_05d90299:
      ThrowNullReferenceException();
    }
    bVar2 = (TypeInfo_Settings_Vector3Setting->_2).typeHierarchyDepth;
    if ((bVar2 <= bVar1) &&
       ((pSVar3->_2).typeHierarchy[(ulong)bVar2 - 1] == (Il2CppClass *)TypeInfo_Settings_Vector3Setting)) {
      pIVar6 = il2cpp_codegen_is_inst_class
                         ((Il2CppObject *)setting,(Il2CppClass *)TypeInfo_Settings_Vector3Setting);
      if (pIVar6 != (Il2CppObject *)0x0) {
        pIVar6 = il2cpp_codegen_is_inst_class
                           ((Il2CppObject *)setting,(Il2CppClass *)TypeInfo_Settings_Vector3Setting);
        local_38 = *(undefined8 *)((long)&pIVar6[2].klass + 4);
        local_30[0] = *(float *)((long)&pIVar6[2].monitor + 4);
        pSVar8 = (System_String_array *)SZArrayNew(TypeInfo_string_array,3);
        pSVar9 = System_Single__ToString((float *)&local_38,(MethodInfo *)0x0);
        if (pSVar8 != (System_String_array *)0x0) {
          il2cpp_codegen_array_set_ref((System_Array_o *)pSVar8,0,(Il2CppObject *)pSVar9);
          pSVar9 = System_Single__ToString((float *)((long)&local_38 + 4),(MethodInfo *)0x0);
          il2cpp_codegen_array_set_ref((System_Array_o *)pSVar8,1,(Il2CppObject *)pSVar9);
          pSVar9 = System_Single__ToString(local_30,(MethodInfo *)0x0);
          il2cpp_codegen_array_set_ref((System_Array_o *)pSVar8,2,(Il2CppObject *)pSVar9);
          pSVar9 = System_String__Join("/",pSVar8,(MethodInfo *)0x0);
          return pSVar9;
        }
      }
      goto label_05d90299;
    }
    bVar2 = (TypeInfo_Settings_HashSetSetting_int->_2).typeHierarchyDepth;
    if ((bVar2 <= bVar1) &&
       ((pSVar3->_2).typeHierarchy[(ulong)bVar2 - 1] == (Il2CppClass *)TypeInfo_Settings_HashSetSetting_int))
    {
      pIVar6 = il2cpp_codegen_is_inst_class
                         ((Il2CppObject *)setting,(Il2CppClass *)TypeInfo_Settings_HashSetSetting_int);
      if (pIVar6 != (Il2CppObject *)0x0) {
        pIVar6 = il2cpp_codegen_is_inst_class
                           ((Il2CppObject *)setting,(Il2CppClass *)TypeInfo_Settings_HashSetSetting_int);
        pIVar4 = pIVar6[2].klass;
        if ((TypeInfo_UI_MapEditorInspectPanel_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel_c);
        }
        pSVar9 = "/";
        pUVar7 = TypeInfo_UI_MapEditorInspectPanel_c->static_fields;
        __this_00 = pUVar7->__9__105_0;
        if (__this_00 == (System_Func_int__int__o *)0x0) {
          if ((TypeInfo_UI_MapEditorInspectPanel_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel_c);
            pUVar7 = TypeInfo_UI_MapEditorInspectPanel_c->static_fields;
          }
          pIVar6 = (Il2CppObject *)pUVar7->__9;
          __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_int_int);
          System_Func_int__int____ctor
                    (__this_00,pIVar6,
                     (intptr_t)MethodInfo_UI_MapEditorInspectPanel_c_SerializeSetting_b__105_0,
                     (MethodInfo_4F12F40 *)0x0);
          pUVar7 = TypeInfo_UI_MapEditorInspectPanel_c->static_fields;
          pUVar7->__9__105_0 = __this_00;
          Il2CppCodeGenWriteBarrier(&pUVar7->__9__105_0);
        }
        source = System_Linq_Enumerable__OrderBy_int__int_
                           ((System_Collections_Generic_IEnumerable_TSource__o *)pIVar4,
                            (System_Func_TSource__TKey__o *)__this_00,
                            (MethodInfo_34F1B50 *)MethodInfo_System_Linq_Enumerable_OrderBy_int_int);
        if ((TypeInfo_UI_MapEditorInspectPanel_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel_c);
        }
        pUVar7 = TypeInfo_UI_MapEditorInspectPanel_c->static_fields;
        __this_01 = pUVar7->__9__105_1;
        if (__this_01 == (System_Func_int__string__o *)0x0) {
          if ((TypeInfo_UI_MapEditorInspectPanel_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel_c);
            pUVar7 = TypeInfo_UI_MapEditorInspectPanel_c->static_fields;
          }
          pIVar6 = (Il2CppObject *)pUVar7->__9;
          __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_int_string);
          System_Func_int__object____ctor
                    ((System_Func_int__object__o *)__this_01,pIVar6,
                     (intptr_t)MethodInfo_UI_MapEditorInspectPanel_c_SerializeSetting_b__105_1,
                     (MethodInfo_4F13000 *)0x0);
          pUVar7 = TypeInfo_UI_MapEditorInspectPanel_c->static_fields;
          pUVar7->__9__105_1 = __this_01;
          Il2CppCodeGenWriteBarrier(&pUVar7->__9__105_1);
        }
        source_00 = System_Linq_Enumerable__Select_int__object_
                              ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                               (System_Func_TSource__TResult__o *)__this_01,
                               (MethodInfo_34F48F0 *)MethodInfo_System_Linq_Enumerable_Select_int_string);
        pSVar8 = (System_String_array *)
                 System_Linq_Enumerable__ToArray_object_
                           ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,
                            (MethodInfo_34FEA80 *)MethodInfo_System_Linq_Enumerable_ToArray_string);
        goto label_05d90279;
      }
      goto label_05d90299;
    }
  }
  ppSVar5 = *(System_String_o ***)(g_data_07556758 + 0xb8);
label_05d8fef5:
  return *ppSVar5;
}


// UI.MapEditorInspectPanel$$PropagateTransformToDescendants
// il2cpp: void UI_MapEditorInspectPanel__PropagateTransformToDescendants (UI_MapEditorInspectPanel_o* __this, System_Collections_Generic_List_MapObject__o* posObjects, System_Collections_Generic_List_MapObject__o* rotObjects, System_Collections_Generic_List_MapObject__o* scaleObjects, const MethodInfo* method);
// 0x5d90860
// eh: try 0x5d90a74..0x5d9158c -> pad 0x5d91727 (+60 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5d91696..0x5d9169b -> pad 0x5d916c4 cleanup
// eh: try 0x5d916c7..0x5d916d1 -> pad 0x5d91827 catch (...) [compiler noexcept guard]
// eh: try 0x5d916ee..0x5d916f3 -> pad 0x5d91715 cleanup
// eh: try 0x5d91718..0x5d91722 -> pad 0x5d91827 catch (...) [compiler noexcept guard]
// eh: try 0x5d9173f..0x5d91744 -> pad 0x5d91763 cleanup
// eh: try 0x5d91766..0x5d91770 -> pad 0x5d91827 catch (...) [compiler noexcept guard]
// eh: try 0x5d91790..0x5d91795 -> pad 0x5d917ba cleanup
// eh: try 0x5d917bd..0x5d917c7 -> pad 0x5d91827 catch (...) [compiler noexcept guard]
// eh: try 0x5d917e7..0x5d917ec -> pad 0x5d91818 cleanup
// eh: try 0x5d9181b..0x5d91825 -> pad 0x5d91827 catch (...) [compiler noexcept guard]
// asm: 160 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d90a6e: nop 
// asm:   0x5d90d51: jmp 0x5d90d71
// asm:   0x5d90efd: jmp 0x5d90f18
// asm:   0x5d9158c: jmp 0x5d9167e
// asm:   0x5d91591: jmp 0x5d916d6
// asm:   0x5d91596: jmp 0x5d91727
// asm:   0x5d9159b: jmp 0x5d9167e
// asm:   0x5d915a0: jmp 0x5d916d6
// asm:   0x5d915a5: jmp 0x5d91727
// asm:   0x5d915aa: jmp 0x5d91778
// asm:   0x5d915af: jmp 0x5d91778
// asm:   0x5d915b4: jmp 0x5d91778
// asm:   0x5d915b9: jmp 0x5d91778
// asm:   0x5d915be: jmp 0x5d91778
// asm:   0x5d915c3: jmp 0x5d91778
// asm:   0x5d915c8: jmp 0x5d91778
// asm:   0x5d915cd: jmp 0x5d91778
// asm:   0x5d915d2: jmp 0x5d91778
// asm:   0x5d915d7: jmp 0x5d91778
// asm:   0x5d915dc: jmp 0x5d91778
// asm:   0x5d915e1: jmp 0x5d91778
// asm:   0x5d915e6: jmp 0x5d91778
// asm:   0x5d915eb: jmp 0x5d91778
// asm:   0x5d915f0: jmp 0x5d91778
// asm:   0x5d915f5: jmp 0x5d91778
// asm:   0x5d915fa: jmp 0x5d91778
// asm:   0x5d915ff: jmp 0x5d91778
// asm:   0x5d91604: jmp 0x5d91778
// asm:   0x5d91609: jmp 0x5d91778
// asm:   0x5d9160e: jmp 0x5d91778
// asm:   0x5d91613: jmp 0x5d91778
// asm:   0x5d91618: jmp 0x5d91778
// asm:   0x5d9161d: jmp 0x5d91778
// asm:   0x5d91622: jmp 0x5d91778
// asm:   0x5d91627: jmp 0x5d91778
// asm:   0x5d9162c: jmp 0x5d91778
// asm:   0x5d91631: jmp 0x5d91778
// asm:   0x5d91636: jmp 0x5d91778
// asm:   0x5d9163b: jmp 0x5d91778
// asm:   0x5d91640: jmp 0x5d91778
// asm:   0x5d91645: jmp 0x5d91778
// asm:   0x5d9164a: jmp 0x5d91778
// asm:   0x5d9164f: jmp 0x5d91778
// asm:   0x5d91654: jmp 0x5d91778
// asm:   0x5d91659: jmp 0x5d91778
// asm:   0x5d9165e: jmp 0x5d91778
// asm:   0x5d91663: jmp 0x5d9167e
// asm:   0x5d91665: jmp 0x5d916d6
// asm:   0x5d91667: jmp 0x5d91727
// asm:   0x5d9166c: jmp 0x5d9167e
// asm:   0x5d9166e: jmp 0x5d916d6
// asm:   0x5d91670: jmp 0x5d91727
// asm:   0x5d91675: jmp 0x5d9167e
// asm:   0x5d91677: jmp 0x5d916d6
// asm:   0x5d91679: jmp 0x5d91727
// asm:   0x5d9167e: mov rbx, rax
// asm:   0x5d91681: cmp edx, 1
// asm:   0x5d91684: jne 0x5d916c7
// asm:   0x5d91686: mov rdi, rbx
// asm:   0x5d91689: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d9168e: mov rbx, qword ptr [rax]
// asm:   0x5d91691: mov qword ptr [rsp + 8], rbx
// asm:   0x5d91696: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d9169b: lea rax, [rip + 0x14fcd1e]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_Dispose
// asm:   0x5d916a2: mov rsi, qword ptr [rax]
// asm:   0x5d916a5: lea rdi, [rsp + 0x20]
// asm:   0x5d916aa: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5d916af: test rbx, rbx
// asm:   0x5d916b2: lea r13, [rip + 0x14df1c7]  ; TypeInfo_System_Collections_Generic_HashSet_int
// asm:   0x5d916b9: je 0x5d90c72
// asm:   0x5d916bf: jmp 0x5d917b2
// asm:   0x5d916c4: mov rbx, rax
// asm:   0x5d916c7: lea rdi, [rsp + 8]
// asm:   0x5d916cc: call 0x2fdd820  ; il2cpp_runtime_helper_02fdd820()
// asm:   0x5d916d1: jmp 0x5d917c7
// asm:   0x5d916d6: mov rbx, rax
// asm:   0x5d916d9: cmp edx, 1
// asm:   0x5d916dc: jne 0x5d91718
// asm:   0x5d916de: mov rdi, rbx
// asm:   0x5d916e1: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d916e6: mov rbx, qword ptr [rax]
// asm:   0x5d916e9: mov qword ptr [rsp + 8], rbx
// asm:   0x5d916ee: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d916f3: lea rax, [rip + 0x14fccc6]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_Dispose
// asm:   0x5d916fa: mov rsi, qword ptr [rax]
// asm:   0x5d916fd: lea rdi, [rsp + 0x20]
// asm:   0x5d91702: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5d91707: test rbx, rbx
// asm:   0x5d9170a: je 0x5d90b9b
// asm:   0x5d91710: jmp 0x5d917b2
// asm:   0x5d91715: mov rbx, rax
// asm:   0x5d91718: lea rdi, [rsp + 8]
// asm:   0x5d9171d: call 0x2fdd7f0  ; il2cpp_runtime_helper_02fdd7f0()
// asm:   0x5d91722: jmp 0x5d917c7
// asm:   0x5d91727: mov rbx, rax
// asm:   0x5d9172a: cmp edx, 1
// asm:   0x5d9172d: jne 0x5d91766
// asm:   0x5d9172f: mov rdi, rbx
// asm:   0x5d91732: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d91737: mov rbx, qword ptr [rax]
// asm:   0x5d9173a: mov qword ptr [rsp + 8], rbx
// asm:   0x5d9173f: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d91744: lea rax, [rip + 0x14fcc75]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_Dispose
// asm:   0x5d9174b: mov rsi, qword ptr [rax]
// asm:   0x5d9174e: lea rdi, [rsp + 0x20]
// asm:   0x5d91753: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5d91758: test rbx, rbx
// asm:   0x5d9175b: je 0x5d90adb
// asm:   0x5d91761: jmp 0x5d917b2
// asm:   0x5d91763: mov rbx, rax
// asm:   0x5d91766: lea rdi, [rsp + 8]
// asm:   0x5d9176b: call 0x2fdd7c0  ; il2cpp_runtime_helper_02fdd7c0()
// asm:   0x5d91770: jmp 0x5d917c7
// asm:   0x5d91772: jmp 0x5d91778
// asm:   0x5d91774: jmp 0x5d91778
// asm:   0x5d91776: jmp 0x5d917cf
// asm:   0x5d91778: mov rbx, rax
// asm:   0x5d9177b: cmp edx, 1
// asm:   0x5d9177e: jne 0x5d917bd
// asm:   0x5d91780: mov rdi, rbx
// asm:   0x5d91783: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d91788: mov rbx, qword ptr [rax]
// asm:   0x5d9178b: mov qword ptr [rsp + 8], rbx
// asm:   0x5d91790: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d91795: lea rax, [rip + 0x14fca44]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_Dispose
// asm:   0x5d9179c: mov rsi, qword ptr [rax]
// asm:   0x5d9179f: lea rdi, [rsp + 0x40]
// asm:   0x5d917a4: call 0x4d3aed0  ; System_Collections_Generic_HashSet_Enumerator_int___Dispose()
// asm:   0x5d917a9: test rbx, rbx
// asm:   0x5d917ac: je 0x5d914c5
// asm:   0x5d917b2: mov rdi, rbx
// asm:   0x5d917b5: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d917ba: mov rbx, rax
// asm:   0x5d917bd: lea rdi, [rsp + 8]
// asm:   0x5d917c2: call 0x2fdd880  ; il2cpp_runtime_helper_02fdd880()
// asm:   0x5d917c7: mov rdi, rbx
// asm:   0x5d917ca: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5d917cf: mov rbx, rax
// asm:   0x5d917d2: cmp edx, 1
// asm:   0x5d917d5: jne 0x5d9181b
// asm:   0x5d917d7: mov rdi, rbx
// asm:   0x5d917da: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d917df: mov rbp, qword ptr [rax]
// asm:   0x5d917e2: mov qword ptr [rsp + 8], rbp
// asm:   0x5d917e7: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d917ec: lea rax, [rip + 0x14fc9ed]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_Dispose
// asm:   0x5d917f3: mov rsi, qword ptr [rax]
// asm:   0x5d917f6: lea rdi, [rsp + 0x40]
// asm:   0x5d917fb: call 0x4d3aed0  ; System_Collections_Generic_HashSet_Enumerator_int___Dispose()
// asm:   0x5d91800: test rbp, rbp
// asm:   0x5d91803: lea r13, [rip + 0x14df076]  ; TypeInfo_System_Collections_Generic_HashSet_int
// asm:   0x5d9180a: je 0x5d90d24
// asm:   0x5d91810: mov rdi, rbp
// asm:   0x5d91813: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d91818: mov rbx, rax
// asm:   0x5d9181b: lea rdi, [rsp + 8]
// asm:   0x5d91820: call 0x2fdd850  ; il2cpp_runtime_helper_02fdd850()
// asm:   0x5d91825: jmp 0x5d917c7
// asm:   0x5d91827: mov rdi, rax
// asm:   0x5d9182a: call 0x2ab61e0  ; __clang_call_terminate()

void UI_MapEditorInspectPanel__PropagateTransformToDescendants
               (UI_MapEditorInspectPanel_o *__this,System_Collections_Generic_List_MapObject__o *posObjects,
               System_Collections_Generic_List_MapObject__o *rotObjects,
               System_Collections_Generic_List_MapObject__o *scaleObjects,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  Il2CppObject *pIVar3;
  System_Collections_Generic_Dictionary_int__object__o *pSVar4;
  UnityEngine_GameObject_o *__this_00;
  Map_MapScriptBaseObject_o *pMVar5;
  Map_MapObject_array *pMVar6;
  int32_t key;
  bool bVar7;
  System_Collections_Generic_HashSet_int__o *pSVar8;
  System_Collections_Generic_HashSet_int__o *__this_01;
  System_Func_MapObject__int__o *pSVar9;
  System_Collections_Generic_IEnumerable_TResult__o *pSVar10;
  UI_MapEditorInspectPanel_o *pUVar11;
  UI_MapEditorInspectPanel___c_StaticFields *pUVar12;
  System_Collections_Generic_HashSet_int__o *__this_02;
  Map_MapObject_o *item;
  UnityEngine_Transform_o *__this_03;
  MethodInfo *pMVar13;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  float in_XMM1_Db;
  float in_XMM1_Dc;
  float in_XMM1_Dd;
  float fVar14;
  float fVar15;
  float fVar16;
  UnityEngine_Vector3_o UVar17;
  UnityEngine_Vector3_o euler;
  UnityEngine_Vector3_o b;
  undefined1 local_f0 [16];
  Il2CppObject *local_e0;
  undefined1 local_d8 [8];
  System_Collections_Generic_HashSet_Enumerator_T__o *pSStack_d0;
  Il2CppObject *local_c8;
  System_Collections_Generic_List_MapObject__o *local_c0;
  undefined1 local_b8 [8];
  System_Collections_Generic_HashSet_Enumerator_T__o *pSStack_b0;
  Il2CppObject *local_a8;
  System_Collections_Generic_List_MapObject__o *local_98;
  UI_MapEditorInspectPanel_o *local_90;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  undefined1 local_78 [16];
  System_Collections_Generic_List_MapObject__o *local_68;
  float local_5c;
  UnityEngine_Quaternion_Fields local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  
  pMVar13 = (MethodInfo *)scaleObjects;
  local_c0 = posObjects;
  local_98 = rotObjects;
  if (Il2CppMethodInitialized_07548033 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Select_MapObject_int);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_MapObject_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Contains);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_int_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_int_ctor_71912f0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_MapObject_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapObject_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorInspectPanel_c_PropagateTransformToDescendants_b__106_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorInspectPanel_c_PropagateTransformToDescendants_b__106_1);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorInspectPanel_c_PropagateTransformToDescendants_b__106_2);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorInspectPanel_c);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_07548033 = '\x01';
  }
  local_d8 = (undefined1  [8])0x0;
  pSStack_d0 = (System_Collections_Generic_HashSet_Enumerator_T__o *)0x0;
  local_c8 = (Il2CppObject *)0x0;
  local_b8 = (undefined1  [8])0x0;
  pSStack_b0 = (System_Collections_Generic_HashSet_Enumerator_T__o *)0x0;
  local_a8 = (Il2CppObject *)0x0;
  local_58 = (UnityEngine_Quaternion_Fields)ZEXT816(0);
  pSVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
  System_Collections_Generic_HashSet_int____ctor
            (pSVar8,(MethodInfo_4FA7520 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor);
  if (local_c0 != (System_Collections_Generic_List_MapObject__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_f0,
               (System_Collections_Generic_List_object__o *)local_c0,
               (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_MapObject_GetEnumerator);
    local_c8 = local_e0;
    local_d8 = (undefined1  [8])local_f0._0_8_;
    pSStack_d0 = (System_Collections_Generic_HashSet_Enumerator_T__o *)local_f0._8_8_;
    local_f0._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
    local_f0._8_8_ = (System_Collections_Generic_HashSet_Enumerator_T__o *)local_d8;
    local_90 = __this;
    local_68 = scaleObjects;
    if (pSVar8 == (System_Collections_Generic_HashSet_int__o *)0x0) {
      bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o *)local_d8,
                         (MethodInfo_4C45C50 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_MoveNext);
      if (bVar7) {
        if (local_c8 != (Il2CppObject *)0x0) {
          if (local_c8[2].klass != (Il2CppClass *)0x0) {
            ThrowNullReferenceException();
          }
label_05d91560:
          ThrowNullReferenceException();
        }
label_05d91536:
        ThrowNullReferenceException();
      }
    }
    else {
      while (bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                               ((System_Collections_Generic_List_Enumerator_object__o *)local_d8,
                                (MethodInfo_4C45C50 *)
                                MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_MoveNext),
            bVar7) {
        if (local_c8 == (Il2CppObject *)0x0) goto label_05d91536;
        if (local_c8[2].klass == (Il2CppClass *)0x0) goto label_05d91560;
        System_Collections_Generic_HashSet_int___Add
                  (pSVar8,*(int32_t *)&((local_c8[2].klass)->_1).byval_arg.data,
                   (MethodInfo_4FA8AF0 *)MethodInfo_System_Collections_Generic_HashSet_int_Add);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o *)local_d8,
               (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_Dispose);
    if (local_98 != (System_Collections_Generic_List_MapObject__o *)0x0) {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_f0,
                 (System_Collections_Generic_List_object__o *)local_98,
                 (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_MapObject_GetEnumerator);
      local_c8 = local_e0;
      local_d8 = (undefined1  [8])local_f0._0_8_;
      pSStack_d0 = (System_Collections_Generic_HashSet_Enumerator_T__o *)local_f0._8_8_;
      local_f0._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
      if (pSVar8 == (System_Collections_Generic_HashSet_int__o *)0x0) {
        local_f0._8_8_ = (System_Collections_Generic_HashSet_Enumerator_T__o *)local_d8;
        bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          ((System_Collections_Generic_List_Enumerator_object__o *)local_d8,
                           (MethodInfo_4C45C50 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_MoveNext);
        if (bVar7) {
          if (local_c8 != (Il2CppObject *)0x0) {
            if (local_c8[2].klass != (Il2CppClass *)0x0) {
              ThrowNullReferenceException();
            }
label_05d9156c:
            ThrowNullReferenceException();
          }
label_05d91545:
          ThrowNullReferenceException();
        }
      }
      else {
        local_f0._8_8_ = (System_Collections_Generic_HashSet_Enumerator_T__o *)local_d8;
        while (bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                 ((System_Collections_Generic_List_Enumerator_object__o *)local_d8,
                                  (MethodInfo_4C45C50 *)
                                  MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_MoveNext),
              bVar7) {
          if (local_c8 == (Il2CppObject *)0x0) goto label_05d91545;
          if (local_c8[2].klass == (Il2CppClass *)0x0) goto label_05d9156c;
          System_Collections_Generic_HashSet_int___Add
                    (pSVar8,*(int32_t *)&((local_c8[2].klass)->_1).byval_arg.data,
                     (MethodInfo_4FA8AF0 *)MethodInfo_System_Collections_Generic_HashSet_int_Add);
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((System_Collections_Generic_List_Enumerator_object__o *)local_d8,
                 (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_Dispose
                );
      if (local_68 != (System_Collections_Generic_List_MapObject__o *)0x0) {
        System_Collections_Generic_List_object___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)local_f0,
                   (System_Collections_Generic_List_object__o *)local_68,
                   (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_MapObject_GetEnumerator);
        local_c8 = local_e0;
        local_d8 = (undefined1  [8])local_f0._0_8_;
        pSStack_d0 = (System_Collections_Generic_HashSet_Enumerator_T__o *)local_f0._8_8_;
        local_f0._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
        if (pSVar8 == (System_Collections_Generic_HashSet_int__o *)0x0) {
          local_f0._8_8_ = (System_Collections_Generic_HashSet_Enumerator_T__o *)local_d8;
          bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            ((System_Collections_Generic_List_Enumerator_object__o *)local_d8,
                             (MethodInfo_4C45C50 *)
                             MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_MoveNext);
          if (bVar7) {
            if (local_c8 != (Il2CppObject *)0x0) {
              if (local_c8[2].klass != (Il2CppClass *)0x0) {
                ThrowNullReferenceException();
              }
label_05d91578:
              ThrowNullReferenceException();
            }
label_05d91554:
            ThrowNullReferenceException();
          }
        }
        else {
          local_f0._8_8_ = (System_Collections_Generic_HashSet_Enumerator_T__o *)local_d8;
          while (bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                   ((System_Collections_Generic_List_Enumerator_object__o *)local_d8,
                                    (MethodInfo_4C45C50 *)
                                    MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_MoveNext),
                bVar7) {
            if (local_c8 == (Il2CppObject *)0x0) goto label_05d91554;
            if (local_c8[2].klass == (Il2CppClass *)0x0) goto label_05d91578;
            System_Collections_Generic_HashSet_int___Add
                      (pSVar8,*(int32_t *)&((local_c8[2].klass)->_1).byval_arg.data,
                       (MethodInfo_4FA8AF0 *)MethodInfo_System_Collections_Generic_HashSet_int_Add);
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((System_Collections_Generic_List_Enumerator_object__o *)local_d8,
                   (MethodInfo_4C45C40 *)
                   MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_Dispose);
        __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
        System_Collections_Generic_HashSet_int____ctor
                  (__this_01,(MethodInfo_4FA7520 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor);
        pUVar11 = local_90;
        if (pSVar8 != (System_Collections_Generic_HashSet_int__o *)0x0) {
          System_Collections_Generic_HashSet_int___GetEnumerator
                    ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_f0,pSVar8,
                     (MethodInfo_4FA8440 *)MethodInfo_System_Collections_Generic_HashSet_int_GetEnumerator);
          local_a8 = local_e0;
          local_b8 = (undefined1  [8])local_f0._0_8_;
          pSStack_b0 = (System_Collections_Generic_HashSet_Enumerator_T__o *)local_f0._8_8_;
          local_f0._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
          local_f0._8_8_ = (System_Collections_Generic_HashSet_Enumerator_T__o *)local_b8;
          while (bVar7 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext
                                   ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_b8,
                                    (MethodInfo_4C3AEE0 *)
                                    MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_MoveNext),
                bVar7) {
            UI_MapEditorInspectPanel__CollectDescendantIds(pUVar11,(int32_t)local_a8,__this_01,pMVar13);
          }
          System_Collections_Generic_HashSet_Enumerator_int___Dispose
                    ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_b8,
                     (MethodInfo_4C3AED0 *)
                     MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_Dispose);
          if ((TypeInfo_UI_MapEditorInspectPanel_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel_c);
            pUVar12 = TypeInfo_UI_MapEditorInspectPanel_c->static_fields;
            pSVar9 = pUVar12->__9__106_0;
          }
          else {
            pUVar12 = TypeInfo_UI_MapEditorInspectPanel_c->static_fields;
            pSVar9 = pUVar12->__9__106_0;
          }
          if (pSVar9 == (System_Func_MapObject__int__o *)0x0) {
            if ((((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel_c)->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel_c);
              pUVar12 = TypeInfo_UI_MapEditorInspectPanel_c->static_fields;
            }
            pIVar3 = (Il2CppObject *)pUVar12->__9;
            pSVar9 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_MapObject_int);
            System_Func_object__int____ctor
                      ((System_Func_object__int__o *)pSVar9,pIVar3,
                       (intptr_t)
                       MethodInfo_UI_MapEditorInspectPanel_c_PropagateTransformToDescendants_b__106_0,
                       (MethodInfo_4F198F0 *)0x0);
            pUVar12 = TypeInfo_UI_MapEditorInspectPanel_c->static_fields;
            pUVar12->__9__106_0 = pSVar9;
            Il2CppCodeGenWriteBarrier(&pUVar12->__9__106_0);
          }
          pSVar10 = System_Linq_Enumerable__Select_object__int_
                              ((System_Collections_Generic_IEnumerable_TSource__o *)local_c0,
                               (System_Func_TSource__TResult__o *)pSVar9,
                               (MethodInfo_34F5DF0 *)MethodInfo_System_Linq_Enumerable_Select_MapObject_int);
          pUVar11 = (UI_MapEditorInspectPanel_o *)
                    il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
          System_Collections_Generic_HashSet_int____ctor_4fa7660
                    ((System_Collections_Generic_HashSet_int__o *)pUVar11,
                     (System_Collections_Generic_IEnumerable_T__o *)pSVar10,
                     (MethodInfo_4FA7660 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor_71912f0);
          if ((TypeInfo_UI_MapEditorInspectPanel_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel_c);
          }
          pUVar12 = TypeInfo_UI_MapEditorInspectPanel_c->static_fields;
          pSVar9 = pUVar12->__9__106_1;
          local_90 = pUVar11;
          if (pSVar9 == (System_Func_MapObject__int__o *)0x0) {
            if ((TypeInfo_UI_MapEditorInspectPanel_c->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel_c);
              pUVar12 = TypeInfo_UI_MapEditorInspectPanel_c->static_fields;
            }
            pIVar3 = (Il2CppObject *)pUVar12->__9;
            pSVar9 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_MapObject_int);
            System_Func_object__int____ctor
                      ((System_Func_object__int__o *)pSVar9,pIVar3,
                       (intptr_t)
                       MethodInfo_UI_MapEditorInspectPanel_c_PropagateTransformToDescendants_b__106_1,
                       (MethodInfo_4F198F0 *)0x0);
            pUVar12 = TypeInfo_UI_MapEditorInspectPanel_c->static_fields;
            pUVar12->__9__106_1 = pSVar9;
            Il2CppCodeGenWriteBarrier(&pUVar12->__9__106_1);
          }
          pSVar10 = System_Linq_Enumerable__Select_object__int_
                              ((System_Collections_Generic_IEnumerable_TSource__o *)local_98,
                               (System_Func_TSource__TResult__o *)pSVar9,
                               (MethodInfo_34F5DF0 *)MethodInfo_System_Linq_Enumerable_Select_MapObject_int);
          pSVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
          System_Collections_Generic_HashSet_int____ctor_4fa7660
                    (pSVar8,(System_Collections_Generic_IEnumerable_T__o *)pSVar10,
                     (MethodInfo_4FA7660 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor_71912f0);
          if ((TypeInfo_UI_MapEditorInspectPanel_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel_c);
            pUVar12 = TypeInfo_UI_MapEditorInspectPanel_c->static_fields;
            pSVar9 = pUVar12->__9__106_2;
          }
          else {
            pUVar12 = TypeInfo_UI_MapEditorInspectPanel_c->static_fields;
            pSVar9 = pUVar12->__9__106_2;
          }
          if (pSVar9 == (System_Func_MapObject__int__o *)0x0) {
            if ((((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel_c)->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel_c);
              pUVar12 = TypeInfo_UI_MapEditorInspectPanel_c->static_fields;
            }
            pIVar3 = (Il2CppObject *)pUVar12->__9;
            pSVar9 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_MapObject_int);
            System_Func_object__int____ctor
                      ((System_Func_object__int__o *)pSVar9,pIVar3,
                       (intptr_t)
                       MethodInfo_UI_MapEditorInspectPanel_c_PropagateTransformToDescendants_b__106_2,
                       (MethodInfo_4F198F0 *)0x0);
            pUVar12 = TypeInfo_UI_MapEditorInspectPanel_c->static_fields;
            pUVar12->__9__106_2 = pSVar9;
            Il2CppCodeGenWriteBarrier(&pUVar12->__9__106_2);
          }
          pSVar10 = System_Linq_Enumerable__Select_object__int_
                              ((System_Collections_Generic_IEnumerable_TSource__o *)local_68,
                               (System_Func_TSource__TResult__o *)pSVar9,
                               (MethodInfo_34F5DF0 *)MethodInfo_System_Linq_Enumerable_Select_MapObject_int);
          __this_02 = il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
          System_Collections_Generic_HashSet_int____ctor_4fa7660
                    (__this_02,(System_Collections_Generic_IEnumerable_T__o *)pSVar10,
                     (MethodInfo_4FA7660 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor_71912f0);
          if (__this_01 != (System_Collections_Generic_HashSet_int__o *)0x0) {
            System_Collections_Generic_HashSet_int___GetEnumerator
                      ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_f0,__this_01,
                       (MethodInfo_4FA8440 *)MethodInfo_System_Collections_Generic_HashSet_int_GetEnumerator);
            local_a8 = local_e0;
            local_b8 = (undefined1  [8])local_f0._0_8_;
            pSStack_b0 = (System_Collections_Generic_HashSet_Enumerator_T__o *)local_f0._8_8_;
            local_f0._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
            local_f0._8_8_ = local_b8;
            while( true ) {
              do {
                bVar7 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext
                                  ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_b8,
                                   (MethodInfo_4C3AEE0 *)
                                   MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_MoveNext);
                if (!bVar7) {
                  System_Collections_Generic_HashSet_Enumerator_int___Dispose
                            ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_b8,
                             (MethodInfo_4C3AED0 *)
                             MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_Dispose);
                  return;
                }
                key = (int32_t)local_a8;
                if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
                }
                pSVar4 = (System_Collections_Generic_Dictionary_int__object__o *)
                         TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
                if (pSVar4 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
                  ThrowNullReferenceException();
                }
                bVar7 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                                  (pSVar4,key,
                                   (MethodInfo_4A0F950 *)
                                   MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey)
                ;
              } while (!bVar7);
              fVar16 = in_XMM1_Db;
              if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
                fVar16 = in_XMM1_Db;
              }
              pSVar4 = (System_Collections_Generic_Dictionary_int__object__o *)
                       TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
              if (pSVar4 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
                ThrowNullReferenceException();
              }
              item = System_Collections_Generic_Dictionary_int__object___get_Item
                               (pSVar4,key,
                                (MethodInfo_4A0F690 *)
                                MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
              if (item == (Map_MapObject_o *)0x0) {
                ThrowNullReferenceException();
              }
              __this_00 = (item->fields).GameObject;
              if (__this_00 == (UnityEngine_GameObject_o *)0x0) break;
              __this_03 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
              if (local_90 == (UI_MapEditorInspectPanel_o *)0x0) {
                ThrowNullReferenceException();
              }
              bVar7 = System_Collections_Generic_HashSet_int___Contains
                                ((System_Collections_Generic_HashSet_int__o *)local_90,key,
                                 (MethodInfo_4FA7E00 *)
                                 MethodInfo_System_Collections_Generic_HashSet_int_Contains);
              in_XMM1_Db = fVar16;
              fVar14 = in_XMM1_Dc;
              if (!bVar7) {
                if (__this_03 == (UnityEngine_Transform_o *)0x0) {
                  ThrowNullReferenceException();
                }
                UVar17 = UnityEngine_Transform__get_localPosition(__this_03,(MethodInfo *)0x0);
                local_88 = UVar17.fields.z;
                local_78._8_4_ = extraout_XMM0_Dc;
                local_78._0_8_ = UVar17.fields._0_8_;
                local_78._12_4_ = extraout_XMM0_Dd;
                pMVar5 = (item->fields).ScriptObject;
                fStack_84 = fVar16;
                fStack_80 = in_XMM1_Dc;
                fStack_7c = in_XMM1_Dd;
                if (pMVar5 == (Map_MapScriptBaseObject_o *)0x0) {
                  ThrowNullReferenceException();
                }
                UVar17 = Map_MapScriptBaseObject__GetPosition(pMVar5,(MethodInfo *)0x0);
                in_XMM1_Db = UVar17.fields.x;
                in_XMM1_Dd = UVar17.fields.y;
                fVar15 = local_88 - UVar17.fields.z;
                fVar14 = fVar16;
                if (1e-08 < ((float)local_78._4_4_ - in_XMM1_Dd) * ((float)local_78._4_4_ - in_XMM1_Dd) +
                            ((float)local_78._0_4_ - in_XMM1_Db) * ((float)local_78._0_4_ - in_XMM1_Db) +
                            fVar15 * fVar15) {
                  System_Collections_Generic_HashSet_int___Add
                            ((System_Collections_Generic_HashSet_int__o *)local_90,key,
                             (MethodInfo_4FA8AF0 *)MethodInfo_System_Collections_Generic_HashSet_int_Add);
                  pMVar13 = MethodInfo_System_Collections_Generic_List_MapObject_Add;
                  piVar1 = &(local_c0->fields)._version;
                  *piVar1 = *piVar1 + 1;
                  pMVar6 = (local_c0->fields)._items;
                  if (pMVar6 == (Map_MapObject_array *)0x0) {
                    ThrowNullReferenceException();
                  }
                  uVar2 = (local_c0->fields)._size;
                  if (uVar2 < (uint)pMVar6->max_length) {
                    (local_c0->fields)._size = uVar2 + 1;
                    pMVar6->m_Items[(int)uVar2] = item;
                    Il2CppCodeGenWriteBarrier(pMVar6->m_Items + (int)uVar2);
                    fVar14 = fVar16;
                  }
                  else {
                    System_Collections_Generic_List_object___AddWithResize
                              ((System_Collections_Generic_List_object__o *)local_c0,(Il2CppObject *)item,
                               (MethodInfo_395D230 *)pMVar13->klass->rgctx_data[0xe].method);
                    fVar14 = fVar16;
                  }
                }
              }
              if (pSVar8 == (System_Collections_Generic_HashSet_int__o *)0x0) {
                ThrowNullReferenceException();
              }
              bVar7 = System_Collections_Generic_HashSet_int___Contains
                                (pSVar8,key,
                                 (MethodInfo_4FA7E00 *)
                                 MethodInfo_System_Collections_Generic_HashSet_int_Contains);
              in_XMM1_Dc = fVar14;
              if (!bVar7) {
                if (__this_03 == (UnityEngine_Transform_o *)0x0) {
                  ThrowNullReferenceException();
                }
                local_58 = (UnityEngine_Quaternion_Fields)
                           UnityEngine_Transform__get_localRotation(__this_03,(MethodInfo *)0x0);
                in_XMM1_Dc = local_58.w;
                UVar17 = UnityEngine_Quaternion__Internal_ToEulerRad
                                   ((UnityEngine_Quaternion_o *)&local_58,(MethodInfo *)0x0);
                euler.fields.z = UVar17.fields.z * 57.29578;
                euler.fields.y = UVar17.fields.y * 57.29578;
                euler.fields.x = UVar17.fields.x * 57.29578;
                UVar17 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
                local_88 = UVar17.fields.z;
                local_78._8_4_ = extraout_XMM0_Dc_00;
                local_78._0_8_ = UVar17.fields._0_8_;
                local_78._12_4_ = extraout_XMM0_Dd_00;
                pMVar5 = (item->fields).ScriptObject;
                fStack_84 = in_XMM1_Dc;
                fStack_80 = fVar14;
                fStack_7c = in_XMM1_Dd;
                if (pMVar5 == (Map_MapScriptBaseObject_o *)0x0) {
                  ThrowNullReferenceException();
                }
                UVar17 = Map_MapScriptBaseObject__GetRotation(pMVar5,(MethodInfo *)0x0);
                in_XMM1_Db = UVar17.fields.x;
                in_XMM1_Dd = UVar17.fields.y;
                fVar16 = local_88 - UVar17.fields.z;
                if (1e-06 < ((float)local_78._4_4_ - in_XMM1_Dd) * ((float)local_78._4_4_ - in_XMM1_Dd) +
                            ((float)local_78._0_4_ - in_XMM1_Db) * ((float)local_78._0_4_ - in_XMM1_Db) +
                            fVar16 * fVar16) {
                  System_Collections_Generic_HashSet_int___Add
                            (pSVar8,key,
                             (MethodInfo_4FA8AF0 *)MethodInfo_System_Collections_Generic_HashSet_int_Add);
                  pMVar13 = MethodInfo_System_Collections_Generic_List_MapObject_Add;
                  piVar1 = &(local_98->fields)._version;
                  *piVar1 = *piVar1 + 1;
                  pMVar6 = (local_98->fields)._items;
                  if (pMVar6 == (Map_MapObject_array *)0x0) {
                    ThrowNullReferenceException();
                  }
                  uVar2 = (local_98->fields)._size;
                  if (uVar2 < (uint)pMVar6->max_length) {
                    (local_98->fields)._size = uVar2 + 1;
                    pMVar6->m_Items[(int)uVar2] = item;
                    Il2CppCodeGenWriteBarrier(pMVar6->m_Items + (int)uVar2);
                  }
                  else {
                    System_Collections_Generic_List_object___AddWithResize
                              ((System_Collections_Generic_List_object__o *)local_98,(Il2CppObject *)item,
                               (MethodInfo_395D230 *)pMVar13->klass->rgctx_data[0xe].method);
                  }
                }
              }
              if (__this_02 == (System_Collections_Generic_HashSet_int__o *)0x0) {
                ThrowNullReferenceException();
              }
              bVar7 = System_Collections_Generic_HashSet_int___Contains
                                (__this_02,key,
                                 (MethodInfo_4FA7E00 *)
                                 MethodInfo_System_Collections_Generic_HashSet_int_Contains);
              if (!bVar7) {
                if (__this_03 == (UnityEngine_Transform_o *)0x0) {
                  ThrowNullReferenceException();
                }
                UVar17 = UnityEngine_Transform__get_localScale(__this_03,(MethodInfo *)0x0);
                local_88 = UVar17.fields.z;
                local_78._8_4_ = extraout_XMM0_Dc_01;
                local_78._0_8_ = UVar17.fields._0_8_;
                local_78._12_4_ = extraout_XMM0_Dd_01;
                local_48._0_4_ = (item->fields).BaseScale.fields.x;
                local_48._4_4_ = (item->fields).BaseScale.fields.y;
                uStack_40 = 0;
                local_5c = (item->fields).BaseScale.fields.z;
                if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
                }
                in_XMM1_Dc = 0.0;
                fVar16 = 0.0;
                fVar14 = 0.0;
                UVar17.fields.z = local_88;
                UVar17.fields.x = (float)local_78._0_4_;
                UVar17.fields.y = (float)local_78._4_4_;
                b.fields.z = local_5c;
                b.fields.x = (float)(undefined4)local_48;
                b.fields.y = (float)local_48._4_4_;
                UVar17 = Utility_Util__DivideVectors(UVar17,b,(MethodInfo *)0x0);
                local_88 = UVar17.fields.z;
                local_78._8_4_ = extraout_XMM0_Dc_02;
                local_78._0_8_ = UVar17.fields._0_8_;
                local_78._12_4_ = extraout_XMM0_Dd_02;
                pMVar5 = (item->fields).ScriptObject;
                fStack_84 = in_XMM1_Dc;
                fStack_80 = fVar16;
                fStack_7c = fVar14;
                if (pMVar5 == (Map_MapScriptBaseObject_o *)0x0) {
                  ThrowNullReferenceException();
                }
                UVar17 = Map_MapScriptBaseObject__GetScale(pMVar5,(MethodInfo *)0x0);
                in_XMM1_Db = UVar17.fields.x;
                in_XMM1_Dd = UVar17.fields.y;
                fVar16 = local_88 - UVar17.fields.z;
                if (1e-08 < ((float)local_78._4_4_ - in_XMM1_Dd) * ((float)local_78._4_4_ - in_XMM1_Dd) +
                            ((float)local_78._0_4_ - in_XMM1_Db) * ((float)local_78._0_4_ - in_XMM1_Db) +
                            fVar16 * fVar16) {
                  System_Collections_Generic_HashSet_int___Add
                            (__this_02,key,
                             (MethodInfo_4FA8AF0 *)MethodInfo_System_Collections_Generic_HashSet_int_Add);
                  pMVar13 = MethodInfo_System_Collections_Generic_List_MapObject_Add;
                  piVar1 = &(local_68->fields)._version;
                  *piVar1 = *piVar1 + 1;
                  pMVar6 = (local_68->fields)._items;
                  if (pMVar6 == (Map_MapObject_array *)0x0) {
                    ThrowNullReferenceException();
                  }
                  uVar2 = (local_68->fields)._size;
                  if (uVar2 < (uint)pMVar6->max_length) {
                    (local_68->fields)._size = uVar2 + 1;
                    pMVar6->m_Items[(int)uVar2] = item;
                    Il2CppCodeGenWriteBarrier(pMVar6->m_Items + (int)uVar2);
                  }
                  else {
                    System_Collections_Generic_List_object___AddWithResize
                              ((System_Collections_Generic_List_object__o *)local_68,(Il2CppObject *)item,
                               (MethodInfo_395D230 *)pMVar13->klass->rgctx_data[0xe].method);
                  }
                }
              }
            }
            ThrowNullReferenceException();
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel$$CollectDescendantIds
// il2cpp: void UI_MapEditorInspectPanel__CollectDescendantIds (UI_MapEditorInspectPanel_o* __this, int32_t id, System_Collections_Generic_HashSet_int__o* result, const MethodInfo* method);
// 0x5d91830
// eh: try 0x5d919a4..0x5d91a16 -> pad 0x5d91a1e (+4 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5d91a36..0x5d91a3b -> pad 0x5d91a5a cleanup
// eh: try 0x5d91a5d..0x5d91a67 -> pad 0x5d91a6f catch (...) [compiler noexcept guard]
// asm: 31 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d91982: lea r12, [rip + 0x14fc85f]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_MoveNext
// asm:   0x5d91989: mov r15, rsp
// asm:   0x5d9198c: lea r13, [rip + 0x14ff96d]  ; MethodInfo_System_Collections_Generic_HashSet_int_Add
// asm:   0x5d91993: nop word ptr cs:[rax + rax]
// asm:   0x5d91a16: jmp 0x5d91a1e
// asm:   0x5d91a18: jmp 0x5d91a1e
// asm:   0x5d91a1a: jmp 0x5d91a1e
// asm:   0x5d91a1c: jmp 0x5d91a1e
// asm:   0x5d91a1e: mov rbx, rax
// asm:   0x5d91a21: cmp edx, 1
// asm:   0x5d91a24: jne 0x5d91a5d
// asm:   0x5d91a26: mov rdi, rbx
// asm:   0x5d91a29: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d91a2e: mov rbx, qword ptr [rax]
// asm:   0x5d91a31: mov qword ptr [rsp + 0x18], rbx
// asm:   0x5d91a36: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d91a3b: lea rax, [rip + 0x14fc79e]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_Dispose
// asm:   0x5d91a42: mov rsi, qword ptr [rax]
// asm:   0x5d91a45: mov rdi, rsp
// asm:   0x5d91a48: call 0x4d3aed0  ; System_Collections_Generic_HashSet_Enumerator_int___Dispose()
// asm:   0x5d91a4d: test rbx, rbx
// asm:   0x5d91a50: je 0x5d919fd
// asm:   0x5d91a52: mov rdi, rbx
// asm:   0x5d91a55: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d91a5a: mov rbx, rax
// asm:   0x5d91a5d: lea rdi, [rsp + 0x18]
// asm:   0x5d91a62: call 0x2fdd8b0  ; il2cpp_runtime_helper_02fdd8b0()
// asm:   0x5d91a67: mov rdi, rbx
// asm:   0x5d91a6a: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5d91a6f: mov rdi, rax
// asm:   0x5d91a72: call 0x2ab61e0  ; __clang_call_terminate()

void UI_MapEditorInspectPanel__CollectDescendantIds
               (UI_MapEditorInspectPanel_o *__this,int32_t id,
               System_Collections_Generic_HashSet_int__o *result,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__object__o *pSVar1;
  int32_t id_00;
  System_Collections_Generic_HashSet_Enumerator_T__o *pSVar2;
  bool bVar3;
  System_Collections_Generic_HashSet_int__o *__this_00;
  MethodInfo **method_00;
  System_Collections_Generic_HashSet_Enumerator_T__o local_58;
  undefined8 local_40;
  undefined1 *local_38;
  
  if (Il2CppMethodInitialized_07548034 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_HashSet_int_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_HashSet_int_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_int_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_07548034 = '\x01';
  }
  local_58.fields._set = (System_Collections_Generic_HashSet_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._current = (Il2CppObject *)0x0;
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)
           TypeInfo_Map_MapLoader->static_fields->IdToChildren;
  if (pSVar1 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
    bVar3 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                      (pSVar1,id,
                       (MethodInfo_4A0F950 *)
                       MethodInfo_System_Collections_Generic_Dictionary_int_HashSet_int_ContainsKey);
    if (!bVar3) {
      return;
    }
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)
             TypeInfo_Map_MapLoader->static_fields->IdToChildren;
    if (pSVar1 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
      __this_00 = (System_Collections_Generic_HashSet_int__o *)
                  System_Collections_Generic_Dictionary_int__object___get_Item
                            (pSVar1,id,
                             (MethodInfo_4A0F690 *)
                             MethodInfo_System_Collections_Generic_Dictionary_int_HashSet_int_get_Item);
      local_38 = (undefined1 *)&local_58;
      if (__this_00 != (System_Collections_Generic_HashSet_int__o *)0x0) {
        method_00 = &MethodInfo_System_Collections_Generic_HashSet_int_GetEnumerator;
        System_Collections_Generic_HashSet_int___GetEnumerator
                  (&local_58,__this_00,
                   (MethodInfo_4FA8440 *)MethodInfo_System_Collections_Generic_HashSet_int_GetEnumerator);
        local_40 = 0;
        pSVar2 = &local_58;
        if (result == (System_Collections_Generic_HashSet_int__o *)0x0) {
          bVar3 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext
                            (&local_58,
                             (MethodInfo_4C3AEE0 *)
                             MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_MoveNext);
          if (bVar3) {
            ThrowNullReferenceException();
          }
        }
        else {
          while (local_38 = (undefined1 *)pSVar2,
                bVar3 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext
                                  (&local_58,
                                   (MethodInfo_4C3AEE0 *)
                                   MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_MoveNext),
                bVar3) {
            id_00 = (int32_t)local_58.fields._current;
            bVar3 = System_Collections_Generic_HashSet_int___Add
                              (result,(int32_t)local_58.fields._current,
                               (MethodInfo_4FA8AF0 *)MethodInfo_System_Collections_Generic_HashSet_int_Add);
            pSVar2 = (System_Collections_Generic_HashSet_Enumerator_T__o *)local_38;
            if (bVar3) {
              UI_MapEditorInspectPanel__CollectDescendantIds(__this,id_00,result,(MethodInfo *)method_00);
              pSVar2 = (System_Collections_Generic_HashSet_Enumerator_T__o *)local_38;
            }
          }
        }
        System_Collections_Generic_HashSet_Enumerator_int___Dispose
                  (&local_58,
                   (MethodInfo_4C3AED0 *)MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_Dispose)
        ;
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel$$.ctor
// il2cpp: void UI_MapEditorInspectPanel___ctor (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x5d91a80

void UI_MapEditorInspectPanel___ctor(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_MapObject__o *__this_00;
  System_Collections_Generic_HashSet_string__o *__this_01;
  System_Collections_Generic_Dictionary_string__string__o *__this_02;
  System_Collections_Generic_List_GameObject__o *__this_03;
  Settings_IntSetting_o *__this_04;
  Settings_StringSetting_o *pSVar1;
  Settings_BoolSetting_o *pSVar2;
  Settings_FloatSetting_o *pSVar3;
  Settings_ColorSetting_o *pSVar4;
  System_Collections_Generic_List_Dictionary_string__BaseSetting___o *__this_05;
  System_Collections_Generic_List_string__o *__this_06;
  System_Collections_Generic_Dictionary_string__Dictionary_string__string___o *__this_07;
  
  if (Il2CppMethodInitialized_07548035 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BoolSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ColorSetting);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_FloatSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Dictionary_string_BaseSetting_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_MapObject_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_Dictionary_string_BaseSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_MapObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&"Misc/None");
    Il2CppMethodInitialized_07548035 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_MapObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_MapObject_ctor);
  (__this->fields)._mapObjects = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._mapObjects);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this_01,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  (__this->fields)._mixedFields = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._mixedFields);
  __this_02 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_string);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_02,
             (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
  (__this->fields)._syncedSerialized = __this_02;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._syncedSerialized);
  __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GameObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_03,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_GameObject_ctor);
  (__this->fields)._mixedNumericElements = __this_03;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._mixedNumericElements);
  __this_04 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  Settings_IntSetting___ctor(__this_04,(MethodInfo *)0x0);
  (__this->fields)._parent = __this_04;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._parent);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor(pSVar1,(MethodInfo *)0x0);
  (__this->fields)._name = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._name);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  Settings_BoolSetting___ctor(pSVar2,(MethodInfo *)0x0);
  (__this->fields)._active = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._active);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  Settings_BoolSetting___ctor(pSVar2,(MethodInfo *)0x0);
  (__this->fields)._static = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._static);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  Settings_BoolSetting___ctor(pSVar2,(MethodInfo *)0x0);
  (__this->fields)._networked = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._networked);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  Settings_BoolSetting___ctor(pSVar2,(MethodInfo *)0x0);
  (__this->fields)._visible = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._visible);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor(pSVar3,(MethodInfo *)0x0);
  (__this->fields)._positionX = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._positionX);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor(pSVar3,(MethodInfo *)0x0);
  (__this->fields)._positionY = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._positionY);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor(pSVar3,(MethodInfo *)0x0);
  (__this->fields)._positionZ = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._positionZ);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor(pSVar3,(MethodInfo *)0x0);
  (__this->fields)._rotationX = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._rotationX);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor(pSVar3,(MethodInfo *)0x0);
  (__this->fields)._rotationY = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._rotationY);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor(pSVar3,(MethodInfo *)0x0);
  (__this->fields)._rotationZ = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._rotationZ);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor(pSVar3,(MethodInfo *)0x0);
  (__this->fields)._scaleX = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._scaleX);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor(pSVar3,(MethodInfo *)0x0);
  (__this->fields)._scaleY = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._scaleY);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor(pSVar3,(MethodInfo *)0x0);
  (__this->fields)._scaleZ = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._scaleZ);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor(pSVar1,(MethodInfo *)0x0);
  (__this->fields)._collideMode = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._collideMode);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor(pSVar1,(MethodInfo *)0x0);
  (__this->fields)._collideWith = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._collideWith);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor(pSVar1,(MethodInfo *)0x0);
  (__this->fields)._physicsMaterial = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._physicsMaterial);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor(pSVar1,(MethodInfo *)0x0);
  (__this->fields)._shader = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._shader);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ColorSetting);
  Settings_ColorSetting___ctor(pSVar4,(MethodInfo *)0x0);
  (__this->fields)._color = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._color);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ColorSetting);
  Settings_ColorSetting___ctor(pSVar4,(MethodInfo *)0x0);
  (__this->fields)._reflectColor = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._reflectColor);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_5b7b730(pSVar1,"Misc/None",0x7fffffff,(MethodInfo *)0x0);
  (__this->fields)._texture = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._texture);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor_5a411f0(pSVar3,1.0,-3.4028235e+38,3.4028235e+38,(MethodInfo *)0x0);
  (__this->fields)._tilingX = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._tilingX);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor_5a411f0(pSVar3,1.0,-3.4028235e+38,3.4028235e+38,(MethodInfo *)0x0);
  (__this->fields)._tilingY = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._tilingY);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor(pSVar3,(MethodInfo *)0x0);
  (__this->fields)._offsetX = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._offsetX);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor(pSVar3,(MethodInfo *)0x0);
  (__this->fields)._offsetY = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._offsetY);
  __this_05 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Dictionary_string_BaseSetting
                        );
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_05,
             (MethodInfo_395C910 *)
             MethodInfo_System_Collections_Generic_List_Dictionary_string_BaseSetting_ctor);
  (__this->fields)._components = __this_05;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._components);
  __this_06 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_06,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  (__this->fields)._componentNames = __this_06;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._componentNames);
  __this_07 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_string);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_07,
             (MethodInfo_4AAC8D0 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_string_ctor);
  (__this->fields)._syncedComponentFields = __this_07;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._syncedComponentFields);
  UI_MapEditorScaledPanel___ctor((UI_MapEditorScaledPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorInspectPanel$$.cctor
// il2cpp: void UI_MapEditorInspectPanel___cctor (const MethodInfo* method);
// 0x5d92210

void UI_MapEditorInspectPanel___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_07548036 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorInspectPanel);
    Il2CppMethodInitialized_07548036 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  TypeInfo_UI_MapEditorInspectPanel->static_fields->CollapsedSections = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_UI_MapEditorInspectPanel->static_fields->CollapsedSections);
  return;
}


// UI.MapEditorInspectPanel$$<AddResizeHandle>b__77_0
// il2cpp: void UI_MapEditorInspectPanel___AddResizeHandle_b__77_0 (UI_MapEditorInspectPanel_o* __this, float w, const MethodInfo* method);
// 0x5d92290

void UI_MapEditorInspectPanel___AddResizeHandle_b__77_0
               (UI_MapEditorInspectPanel_o *__this,float w,MethodInfo *method)

{
  Settings_MapEditorSettings_o *pSVar1;
  Settings_FloatSetting_o *__this_00;
  UI_MapEditorMenu_o *__this_01;
  
  if (Il2CppMethodInitialized_07548037 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_set_Value);
    Il2CppMethodInitialized_07548037 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->MapEditorSettings;
  if ((pSVar1 != (Settings_MapEditorSettings_o *)0x0) &&
     (__this_00 = (pSVar1->fields).InspectorPanelWidth, __this_00 != (Settings_FloatSetting_o *)0x0)) {
    Settings_TypedSetting_float___set_Value
              ((Settings_TypedSetting_float__o *)__this_00,w,
               (MethodInfo_42DA3B0 *)MethodInfo_Settings_TypedSetting_float_set_Value);
    pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->MapEditorSettings;
    if (pSVar1 != (Settings_MapEditorSettings_o *)0x0) {
      (*(pSVar1->klass->vtable)._18_Save.methodPtr)(pSVar1,(pSVar1->klass->vtable)._18_Save.method);
      __this_01 = (__this->fields)._menu;
      if (__this_01 != (UI_MapEditorMenu_o *)0x0) {
        UI_MapEditorMenu__SyncInspector(__this_01,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel$$<Show>b__82_30
// il2cpp: void UI_MapEditorInspectPanel___Show_b__82_30 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x5d92350

void UI_MapEditorInspectPanel___Show_b__82_30(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  Map_MapScriptBaseObject_o *pMVar2;
  System_String_o *value;
  
  if (Il2CppMethodInitialized_0754801b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GUIUtility);
    Il2CppMethodInitialized_0754801b = '\x01';
  }
  pMVar1 = (__this->fields)._mapObject;
  if ((pMVar1 == (Map_MapObject_o *)0x0) ||
     (pMVar2 = (pMVar1->fields).ScriptObject, pMVar2 == (Map_MapScriptBaseObject_o *)0x0)) {
    ThrowNullReferenceException();
  }
  value = (*(pMVar2->klass->vtable)._8_Serialize.methodPtr)
                    (pMVar2,(pMVar2->klass->vtable)._8_Serialize.method);
  if ((TypeInfo_UnityEngine_GUIUtility->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_GUIUtility);
    UnityEngine_GUIUtility__set_systemCopyBuffer(value,(MethodInfo *)0x0);
    return;
  }
  UnityEngine_GUIUtility__set_systemCopyBuffer(value,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorInspectPanel$$<Show>b__82_31
// il2cpp: void UI_MapEditorInspectPanel___Show_b__82_31 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x5d923d0

void UI_MapEditorInspectPanel___Show_b__82_31(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  Map_MapScriptBaseObject_o *pMVar2;
  System_String_o *value;
  
  if (Il2CppMethodInitialized_0754801a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GUIUtility);
    Il2CppMethodInitialized_0754801a = '\x01';
  }
  pMVar1 = (__this->fields)._mapObject;
  if ((pMVar1 == (Map_MapObject_o *)0x0) ||
     (pMVar2 = (pMVar1->fields).ScriptObject, pMVar2 == (Map_MapScriptBaseObject_o *)0x0)) {
    ThrowNullReferenceException();
  }
  value = System_Int32__ToString(&(pMVar2->fields).Id,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_GUIUtility->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_GUIUtility);
    UnityEngine_GUIUtility__set_systemCopyBuffer(value,(MethodInfo *)0x0);
    return;
  }
  UnityEngine_GUIUtility__set_systemCopyBuffer(value,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorInspectPanel$$<Show>b__82_32
// il2cpp: void UI_MapEditorInspectPanel___Show_b__82_32 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x5d92450

void UI_MapEditorInspectPanel___Show_b__82_32(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  Map_MapScriptBaseObject_o *pMVar2;
  System_String_o *value;
  
  if (Il2CppMethodInitialized_0754801b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GUIUtility);
    Il2CppMethodInitialized_0754801b = '\x01';
  }
  pMVar1 = (__this->fields)._mapObject;
  if ((pMVar1 == (Map_MapObject_o *)0x0) ||
     (pMVar2 = (pMVar1->fields).ScriptObject, pMVar2 == (Map_MapScriptBaseObject_o *)0x0)) {
    ThrowNullReferenceException();
  }
  value = (*(pMVar2->klass->vtable)._8_Serialize.methodPtr)
                    (pMVar2,(pMVar2->klass->vtable)._8_Serialize.method);
  if ((TypeInfo_UnityEngine_GUIUtility->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_GUIUtility);
    UnityEngine_GUIUtility__set_systemCopyBuffer(value,(MethodInfo *)0x0);
    return;
  }
  UnityEngine_GUIUtility__set_systemCopyBuffer(value,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorInspectPanel$$<Show>b__82_0
// il2cpp: void UI_MapEditorInspectPanel___Show_b__82_0 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x5d924d0

void UI_MapEditorInspectPanel___Show_b__82_0(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorInspectPanel__OnChange(__this,method);
  return;
}


// UI.MapEditorInspectPanel$$<Show>b__82_1
// il2cpp: void UI_MapEditorInspectPanel___Show_b__82_1 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x5d924e0

void UI_MapEditorInspectPanel___Show_b__82_1(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorInspectPanel__OnChange(__this,method);
  return;
}


// UI.MapEditorInspectPanel$$<Show>b__82_2
// il2cpp: void UI_MapEditorInspectPanel___Show_b__82_2 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x5d924f0

void UI_MapEditorInspectPanel___Show_b__82_2(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorInspectPanel__OnChange(__this,method);
  return;
}


// UI.MapEditorInspectPanel$$<Show>b__82_3
// il2cpp: void UI_MapEditorInspectPanel___Show_b__82_3 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x5d92500

void UI_MapEditorInspectPanel___Show_b__82_3(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorInspectPanel__OnChange(__this,method);
  return;
}


// UI.MapEditorInspectPanel$$<Show>b__82_4
// il2cpp: void UI_MapEditorInspectPanel___Show_b__82_4 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x5d92510

void UI_MapEditorInspectPanel___Show_b__82_4(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorInspectPanel__OnChange(__this,method);
  return;
}


// UI.MapEditorInspectPanel$$<Show>b__82_5
// il2cpp: void UI_MapEditorInspectPanel___Show_b__82_5 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x5d92520

void UI_MapEditorInspectPanel___Show_b__82_5(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorInspectPanel__OnChange(__this,method);
  return;
}


// UI.MapEditorInspectPanel$$<Show>b__82_6
// il2cpp: void UI_MapEditorInspectPanel___Show_b__82_6 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x5d92530

void UI_MapEditorInspectPanel___Show_b__82_6(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorInspectPanel__OnChange(__this,method);
  return;
}


// UI.MapEditorInspectPanel$$<Show>b__82_7
// il2cpp: void UI_MapEditorInspectPanel___Show_b__82_7 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x5d92540

void UI_MapEditorInspectPanel___Show_b__82_7(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorInspectPanel__OnChange(__this,method);
  return;
}


// UI.MapEditorInspectPanel$$<Show>b__82_8
// il2cpp: void UI_MapEditorInspectPanel___Show_b__82_8 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x5d92550

void UI_MapEditorInspectPanel___Show_b__82_8(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorInspectPanel__OnChange(__this,method);
  return;
}


// UI.MapEditorInspectPanel$$<Show>b__82_9
// il2cpp: void UI_MapEditorInspectPanel___Show_b__82_9 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x5d92560

void UI_MapEditorInspectPanel___Show_b__82_9(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorInspectPanel__OnChange(__this,method);
  return;
}


// UI.MapEditorInspectPanel$$<Show>b__82_10
// il2cpp: void UI_MapEditorInspectPanel___Show_b__82_10 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x5d92570

void UI_MapEditorInspectPanel___Show_b__82_10(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorInspectPanel__OnChange(__this,method);
  return;
}


// UI.MapEditorInspectPanel$$<Show>b__82_11
// il2cpp: void UI_MapEditorInspectPanel___Show_b__82_11 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x5d92580

void UI_MapEditorInspectPanel___Show_b__82_11(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorInspectPanel__OnChange(__this,method);
  return;
}


// UI.MapEditorInspectPanel$$<Show>b__82_12
// il2cpp: void UI_MapEditorInspectPanel___Show_b__82_12 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x5d92590

void UI_MapEditorInspectPanel___Show_b__82_12(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorInspectPanel__OnChange(__this,method);
  return;
}


// UI.MapEditorInspectPanel$$<Show>b__82_13
// il2cpp: void UI_MapEditorInspectPanel___Show_b__82_13 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x5d925a0

void UI_MapEditorInspectPanel___Show_b__82_13(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorInspectPanel__OnChange(__this,method);
  return;
}


// UI.MapEditorInspectPanel$$<Show>b__82_14
// il2cpp: void UI_MapEditorInspectPanel___Show_b__82_14 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x5d925b0

void UI_MapEditorInspectPanel___Show_b__82_14(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorInspectPanel__OnChange(__this,method);
  return;
}


// UI.MapEditorInspectPanel$$<Show>b__82_15
// il2cpp: void UI_MapEditorInspectPanel___Show_b__82_15 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x5d925c0

void UI_MapEditorInspectPanel___Show_b__82_15(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorInspectPanel__OnChange(__this,method);
  return;
}


// UI.MapEditorInspectPanel$$<Show>b__82_16
// il2cpp: void UI_MapEditorInspectPanel___Show_b__82_16 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x5d925d0

void UI_MapEditorInspectPanel___Show_b__82_16(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorInspectPanel__OnChange(__this,method);
  return;
}


// UI.MapEditorInspectPanel$$<Show>b__82_17
// il2cpp: void UI_MapEditorInspectPanel___Show_b__82_17 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x5d925e0

void UI_MapEditorInspectPanel___Show_b__82_17(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorInspectPanel__OnChange(__this,method);
  return;
}


// UI.MapEditorInspectPanel$$<Show>b__82_18
// il2cpp: void UI_MapEditorInspectPanel___Show_b__82_18 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x5d925f0

void UI_MapEditorInspectPanel___Show_b__82_18(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorInspectPanel__OnChange(__this,method);
  return;
}


// UI.MapEditorInspectPanel$$<Show>b__82_24
// il2cpp: void UI_MapEditorInspectPanel___Show_b__82_24 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x5d92600

void UI_MapEditorInspectPanel___Show_b__82_24(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorInspectPanel__OnChange(__this,method);
  return;
}


// UI.MapEditorInspectPanel$$<Show>b__82_25
// il2cpp: void UI_MapEditorInspectPanel___Show_b__82_25 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x5d92610

void UI_MapEditorInspectPanel___Show_b__82_25(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorInspectPanel__OnChange(__this,method);
  return;
}


// UI.MapEditorInspectPanel$$<Show>b__82_26
// il2cpp: void UI_MapEditorInspectPanel___Show_b__82_26 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x5d92620

void UI_MapEditorInspectPanel___Show_b__82_26(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorInspectPanel__OnChange(__this,method);
  return;
}


// UI.MapEditorInspectPanel$$<Show>b__82_27
// il2cpp: void UI_MapEditorInspectPanel___Show_b__82_27 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x5d92630

void UI_MapEditorInspectPanel___Show_b__82_27(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorInspectPanel__OnChange(__this,method);
  return;
}


// UI.MapEditorInspectPanel$$<Show>b__82_28
// il2cpp: void UI_MapEditorInspectPanel___Show_b__82_28 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x5d92640

void UI_MapEditorInspectPanel___Show_b__82_28(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorInspectPanel__OnChange(__this,method);
  return;
}


// UI.MapEditorInspectPanel$$<Show>b__82_33
// il2cpp: void UI_MapEditorInspectPanel___Show_b__82_33 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x5d92650

void UI_MapEditorInspectPanel___Show_b__82_33(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorInspectPanel__OnChange(__this,method);
  return;
}


// UI.MapEditorInspectPanel$$<Show>b__82_34
// il2cpp: void UI_MapEditorInspectPanel___Show_b__82_34 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x5d92660

void UI_MapEditorInspectPanel___Show_b__82_34(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (Il2CppMethodInitialized_07548038 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Texture");
    Il2CppMethodInitialized_07548038 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_MapEditorInspectPanel__OnButtonClick(__this,"Texture",in_RDX);
  return;
}


// UI.MapEditorInspectPanel$$<Show>b__82_35
// il2cpp: void UI_MapEditorInspectPanel___Show_b__82_35 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x5d926a0

void UI_MapEditorInspectPanel___Show_b__82_35(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorInspectPanel__OnChange(__this,method);
  return;
}


// UI.MapEditorInspectPanel$$<Show>b__82_36
// il2cpp: void UI_MapEditorInspectPanel___Show_b__82_36 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x5d926b0

void UI_MapEditorInspectPanel___Show_b__82_36(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorInspectPanel__OnChange(__this,method);
  return;
}


// UI.MapEditorInspectPanel$$<Show>b__82_37
// il2cpp: void UI_MapEditorInspectPanel___Show_b__82_37 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x5d926c0

void UI_MapEditorInspectPanel___Show_b__82_37(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorInspectPanel__OnChange(__this,method);
  return;
}


// UI.MapEditorInspectPanel$$<Show>b__82_38
// il2cpp: void UI_MapEditorInspectPanel___Show_b__82_38 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x5d926d0

void UI_MapEditorInspectPanel___Show_b__82_38(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorInspectPanel__OnChange(__this,method);
  return;
}


// UI.MapEditorInspectPanel$$<Show>b__82_44
// il2cpp: void UI_MapEditorInspectPanel___Show_b__82_44 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x5d926e0

void UI_MapEditorInspectPanel___Show_b__82_44(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorInspectPanel__OnChange(__this,method);
  return;
}


// UI.MapEditorInspectPanel$$<Show>b__82_45
// il2cpp: void UI_MapEditorInspectPanel___Show_b__82_45 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x5d926f0

void UI_MapEditorInspectPanel___Show_b__82_45(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorInspectPanel__OnChange(__this,method);
  return;
}


// UI.MapEditorInspectPanel$$<Show>b__82_29
// il2cpp: void UI_MapEditorInspectPanel___Show_b__82_29 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x5d92700

void UI_MapEditorInspectPanel___Show_b__82_29(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (Il2CppMethodInitialized_07548039 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"AddComponent");
    Il2CppMethodInitialized_07548039 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_MapEditorInspectPanel__OnButtonClick(__this,"AddComponent",in_RDX);
  return;
}


// UI.MapEditorInspectPanel$$<OnButtonClick>b__91_0
// il2cpp: void UI_MapEditorInspectPanel___OnButtonClick_b__91_0 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x5d92740

void UI_MapEditorInspectPanel___OnButtonClick_b__91_0(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorInspectPanel__OnAddComponent(__this,method);
  return;
}


