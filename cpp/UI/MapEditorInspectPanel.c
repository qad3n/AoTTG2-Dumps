// Type: UI.MapEditorInspectPanel
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/UI/MapEditorInspectPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MapEditorMenu/MapEditorInspectPanel.cs
// --------------------------------

// UI.MapEditorInspectPanel.<>c$$.cctor
// il2cpp: void UI_MapEditorInspectPanel___c___cctor (const MethodInfo* method);
// 0x1822d1290

void UI_MapEditorInspectPanel___c___cctor(MethodInfo *method)

{
  UI_MapEditorInspectPanel___c_o *__this;
  
  if (Il2CppMethodInitialized_18434757f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorInspectPanel_c);
    Il2CppMethodInitialized_18434757f = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_UI_MapEditorInspectPanel_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_UI_MapEditorInspectPanel_c->static_fields->__9,__this);
  return;
}


// UI.MapEditorInspectPanel.<>c$$.ctor
// il2cpp: void UI_MapEditorInspectPanel___c___ctor (UI_MapEditorInspectPanel___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_MapEditorInspectPanel___c___ctor(UI_MapEditorInspectPanel___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorInspectPanel.<>c$$<PasteTransform>b__68_0
// il2cpp: bool UI_MapEditorInspectPanel___c___PasteTransform_b__68_0 (UI_MapEditorInspectPanel___c_o* __this, System_String_o* key, const MethodInfo* method);
// 0x1822cf8e0

bool UI_MapEditorInspectPanel___c___PasteTransform_b__68_0
               (UI_MapEditorInspectPanel___c_o *__this,System_String_o *key,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184347580 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Scale");
    il2cpp_codegen_initialize_runtime_metadata(&"Position");
    il2cpp_codegen_initialize_runtime_metadata(&"Rotation");
    Il2CppMethodInitialized_184347580 = '\x01';
  }
  if (key != (System_String_o *)0x0) {
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
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel.<>c$$<Show>b__81_19
// il2cpp: bool UI_MapEditorInspectPanel___c___Show_b__81_19 (UI_MapEditorInspectPanel___c_o* __this, Map_MapObject_o* o, const MethodInfo* method);
// 0x1822cf9e0

bool UI_MapEditorInspectPanel___c___Show_b__81_19
               (UI_MapEditorInspectPanel___c_o *__this,Map_MapObject_o *o,MethodInfo *method)

{
  byte bVar1;
  Map_MapScriptBaseObject_o *pMVar2;
  System_String_o *pSVar3;
  System_String_Fields a;
  bool bVar4;
  
  if (Il2CppMethodInitialized_184347581 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObjectShader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptSceneObject);
    Il2CppMethodInitialized_184347581 = '\x01';
  }
  if ((o != (Map_MapObject_o *)0x0) &&
     (pMVar2 = (o->fields).ScriptObject, pMVar2 != (Map_MapScriptBaseObject_o *)0x0)) {
    bVar1 = (TypeInfo_Map_MapScriptSceneObject->_2).typeHierarchyDepth;
    if (((pMVar2->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pMVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_Map_MapScriptSceneObject)) {
      il2cpp_codegen_raise_invalid_cast_exception(pMVar2);
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


// UI.MapEditorInspectPanel.<>c$$<Show>b__81_20
// il2cpp: bool UI_MapEditorInspectPanel___c___Show_b__81_20 (UI_MapEditorInspectPanel___c_o* __this, Map_MapObject_o* o, const MethodInfo* method);
// 0x1822cfaa0

bool UI_MapEditorInspectPanel___c___Show_b__81_20
               (UI_MapEditorInspectPanel___c_o *__this,Map_MapObject_o *o,MethodInfo *method)

{
  byte bVar1;
  Map_MapScriptBaseObject_o *pMVar2;
  System_String_o *pSVar3;
  System_String_Fields shader;
  bool bVar4;
  
  if (Il2CppMethodInitialized_184347582 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObjectShader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptSceneObject);
    Il2CppMethodInitialized_184347582 = '\x01';
  }
  if ((o != (Map_MapObject_o *)0x0) &&
     (pMVar2 = (o->fields).ScriptObject, pMVar2 != (Map_MapScriptBaseObject_o *)0x0)) {
    bVar1 = (TypeInfo_Map_MapScriptSceneObject->_2).typeHierarchyDepth;
    if (((pMVar2->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pMVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_Map_MapScriptSceneObject)) {
      il2cpp_codegen_raise_invalid_cast_exception(pMVar2);
    }
    pSVar3 = (*(uint64_t *)((char *)pMVar2 + 0x78));
    if (pSVar3 != (System_String_o *)0x0) {
      shader = pSVar3->fields;
      if ((TypeInfo_Map_MapObjectShader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectShader);
      }
      bVar4 = Map_MapObjectShader__IsLegacyShader((System_String_o *)shader,(MethodInfo *)0x0);
      return bVar4;
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel.<>c$$<Show>b__81_21
// il2cpp: bool UI_MapEditorInspectPanel___c___Show_b__81_21 (UI_MapEditorInspectPanel___c_o* __this, Map_MapObject_o* o, const MethodInfo* method);
// 0x1822cfb50

bool UI_MapEditorInspectPanel___c___Show_b__81_21
               (UI_MapEditorInspectPanel___c_o *__this,Map_MapObject_o *o,MethodInfo *method)

{
  byte bVar1;
  Map_MapScriptBaseObject_o *pMVar2;
  System_String_o *pSVar3;
  System_String_Fields a;
  bool bVar4;
  
  if (Il2CppMethodInitialized_184347583 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObjectShader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptSceneObject);
    Il2CppMethodInitialized_184347583 = '\x01';
  }
  if ((o != (Map_MapObject_o *)0x0) &&
     (pMVar2 = (o->fields).ScriptObject, pMVar2 != (Map_MapScriptBaseObject_o *)0x0)) {
    bVar1 = (TypeInfo_Map_MapScriptSceneObject->_2).typeHierarchyDepth;
    if (((pMVar2->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pMVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_Map_MapScriptSceneObject)) {
      il2cpp_codegen_raise_invalid_cast_exception(pMVar2);
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


// UI.MapEditorInspectPanel.<>c$$<Show>b__81_22
// il2cpp: bool UI_MapEditorInspectPanel___c___Show_b__81_22 (UI_MapEditorInspectPanel___c_o* __this, Map_MapObject_o* o, const MethodInfo* method);
// 0x1822cfc10

bool UI_MapEditorInspectPanel___c___Show_b__81_22
               (UI_MapEditorInspectPanel___c_o *__this,Map_MapObject_o *o,MethodInfo *method)

{
  byte bVar1;
  Map_MapScriptBaseObject_o *pMVar2;
  System_String_o *__this_00;
  Il2CppType *handle;
  bool bVar3;
  System_Type_o *pSVar4;
  System_Type_o *pSVar5;
  
  if (Il2CppMethodInitialized_184347584 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_Map_MapScriptBasicMaterial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptSceneObject);
    Il2CppMethodInitialized_184347584 = '\x01';
  }
  handle = TypeRef_Map_MapScriptBasicMaterial;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  pSVar4 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if ((o != (Map_MapObject_o *)0x0) &&
     (pMVar2 = (o->fields).ScriptObject, pMVar2 != (Map_MapScriptBaseObject_o *)0x0)) {
    bVar1 = (TypeInfo_Map_MapScriptSceneObject->_2).typeHierarchyDepth;
    if (((pMVar2->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pMVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_Map_MapScriptSceneObject)) {
      il2cpp_codegen_raise_invalid_cast_exception(pMVar2);
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


// UI.MapEditorInspectPanel.<>c$$<Show>b__81_23
// il2cpp: bool UI_MapEditorInspectPanel___c___Show_b__81_23 (UI_MapEditorInspectPanel___c_o* __this, Map_MapObject_o* o, const MethodInfo* method);
// 0x1822cfcf0

bool UI_MapEditorInspectPanel___c___Show_b__81_23
               (UI_MapEditorInspectPanel___c_o *__this,Map_MapObject_o *o,MethodInfo *method)

{
  byte bVar1;
  Map_MapScriptBaseObject_o *pMVar2;
  System_String_o *pSVar3;
  System_String_Fields a;
  bool bVar4;
  
  if (Il2CppMethodInitialized_184347585 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObjectShader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptSceneObject);
    Il2CppMethodInitialized_184347585 = '\x01';
  }
  if ((o != (Map_MapObject_o *)0x0) &&
     (pMVar2 = (o->fields).ScriptObject, pMVar2 != (Map_MapScriptBaseObject_o *)0x0)) {
    bVar1 = (TypeInfo_Map_MapScriptSceneObject->_2).typeHierarchyDepth;
    if (((pMVar2->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pMVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_Map_MapScriptSceneObject)) {
      il2cpp_codegen_raise_invalid_cast_exception(pMVar2);
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


// UI.MapEditorInspectPanel.<>c$$<SerializeMapObjectIds>b__85_0
// il2cpp: int32_t UI_MapEditorInspectPanel___c___SerializeMapObjectIds_b__85_0 (UI_MapEditorInspectPanel___c_o* __this, int32_t id, const MethodInfo* method);
// 0x180c8a8c0

int32_t
UI_MapEditorInspectPanel___c___SerializeMapObjectIds_b__85_0(UI_MapEditorInspectPanel___c_o* __this, int32_t id, MethodInfo* method)

{
  return value;
}


// UI.MapEditorInspectPanel.<>c$$<SerializeMapObjectIds>b__85_1
// il2cpp: System_String_o* UI_MapEditorInspectPanel___c___SerializeMapObjectIds_b__85_1 (UI_MapEditorInspectPanel___c_o* __this, int32_t id, const MethodInfo* method);
// 0x1822cf9c0

System_String_o*
UI_MapEditorInspectPanel___c___SerializeMapObjectIds_b__85_1(UI_MapEditorInspectPanel___c_o* __this, int32_t id, MethodInfo* method)

{
  System_String_o *pSVar1;
  int32_t local_res10 [6];
  
  local_res10[0] = value;
  pSVar1 = System_Int32__ToString(local_res10,(MethodInfo *)0x0);
  return pSVar1;
}


// UI.MapEditorInspectPanel.<>c$$<OnChange>b__103_1
// il2cpp: System_String_o* UI_MapEditorInspectPanel___c___OnChange_b__103_1 (UI_MapEditorInspectPanel___c_o* __this, System_Collections_Generic_KeyValuePair_string__string__o field, const MethodInfo* method);
// 0x1822cf860

System_String_o *
UI_MapEditorInspectPanel___c___OnChange_b__103_1
          (UI_MapEditorInspectPanel___c_o *__this,
          System_Collections_Generic_KeyValuePair_string__string__o *field,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347586 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_string_get_Key);
    Il2CppMethodInitialized_184347586 = 1;
    return (field->fields).key;
  }
  return (field->fields).key;
}


// UI.MapEditorInspectPanel.<>c$$<OnChange>b__103_2
// il2cpp: System_String_o* UI_MapEditorInspectPanel___c___OnChange_b__103_2 (UI_MapEditorInspectPanel___c_o* __this, System_Collections_Generic_KeyValuePair_string__string__o field, const MethodInfo* method);
// 0x1822cf8a0

System_String_o *
UI_MapEditorInspectPanel___c___OnChange_b__103_2
          (UI_MapEditorInspectPanel___c_o *__this,
          System_Collections_Generic_KeyValuePair_string__string__o *field,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347587 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_string_get_Value);
    Il2CppMethodInitialized_184347587 = 1;
    return (field->fields).value;
  }
  return (field->fields).value;
}


// UI.MapEditorInspectPanel.<>c$$<SerializeSetting>b__104_0
// il2cpp: int32_t UI_MapEditorInspectPanel___c___SerializeSetting_b__104_0 (UI_MapEditorInspectPanel___c_o* __this, int32_t value, const MethodInfo* method);
// 0x180c8a8c0

int32_t
UI_MapEditorInspectPanel___c___SerializeSetting_b__104_0(UI_MapEditorInspectPanel___c_o* __this, int32_t value, MethodInfo* method)

{
  return value;
}


// UI.MapEditorInspectPanel.<>c$$<SerializeSetting>b__104_1
// il2cpp: System_String_o* UI_MapEditorInspectPanel___c___SerializeSetting_b__104_1 (UI_MapEditorInspectPanel___c_o* __this, int32_t value, const MethodInfo* method);
// 0x1822cf9c0

System_String_o *
UI_MapEditorInspectPanel___c___SerializeSetting_b__104_1
          (UI_MapEditorInspectPanel___c_o *__this,int32_t value,MethodInfo *method)

{
  System_String_o *pSVar1;
  int32_t local_res10 [6];
  
  local_res10[0] = value;
  pSVar1 = System_Int32__ToString(local_res10,(MethodInfo *)0x0);
  return pSVar1;
}


// UI.MapEditorInspectPanel.<>c$$<PropagateTransformToDescendants>b__105_0
// il2cpp: int32_t UI_MapEditorInspectPanel___c___PropagateTransformToDescendants_b__105_0 (UI_MapEditorInspectPanel___c_o* __this, Map_MapObject_o* o, const MethodInfo* method);
// 0x181e7b690

int32_t
UI_MapEditorInspectPanel___c___PropagateTransformToDescendants_b__105_0(UI_MapEditorInspectPanel___c_o* __this, Map_MapObject_o* o, MethodInfo* method)

{
  Map_MapScriptBaseObject_o *pMVar1;
  
  if ((o != (Map_MapObject_o *)0x0) &&
     (pMVar1 = (o->fields).ScriptObject, pMVar1 != (Map_MapScriptBaseObject_o *)0x0)) {
    return (pMVar1->fields).Id;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel.<>c$$<PropagateTransformToDescendants>b__105_1
// il2cpp: int32_t UI_MapEditorInspectPanel___c___PropagateTransformToDescendants_b__105_1 (UI_MapEditorInspectPanel___c_o* __this, Map_MapObject_o* o, const MethodInfo* method);
// 0x181e7b690

int32_t
UI_MapEditorInspectPanel___c___PropagateTransformToDescendants_b__105_1(UI_MapEditorInspectPanel___c_o* __this, Map_MapObject_o* o, MethodInfo* method)

{
  Map_MapScriptBaseObject_o *pMVar1;
  
  if ((o != (Map_MapObject_o *)0x0) &&
     (pMVar1 = (o->fields).ScriptObject, pMVar1 != (Map_MapScriptBaseObject_o *)0x0)) {
    return (pMVar1->fields).Id;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel.<>c$$<PropagateTransformToDescendants>b__105_2
// il2cpp: int32_t UI_MapEditorInspectPanel___c___PropagateTransformToDescendants_b__105_2 (UI_MapEditorInspectPanel___c_o* __this, Map_MapObject_o* o, const MethodInfo* method);
// 0x181e7b690

int32_t UI_MapEditorInspectPanel___c___PropagateTransformToDescendants_b__105_2
                  (UI_MapEditorInspectPanel___c_o *__this,Map_MapObject_o *o,MethodInfo *method)

{
  Map_MapScriptBaseObject_o *pMVar1;
  
  if ((o != (Map_MapObject_o *)0x0) &&
     (pMVar1 = (o->fields).ScriptObject, pMVar1 != (Map_MapScriptBaseObject_o *)0x0)) {
    return (pMVar1->fields).Id;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel.<>c__DisplayClass101_0$$.ctor
// il2cpp: void UI_MapEditorInspectPanel___c__DisplayClass101_0___ctor (UI_MapEditorInspectPanel___c__DisplayClass101_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_MapEditorInspectPanel___c__DisplayClass101_0___ctor(UI_MapEditorInspectPanel___c__DisplayClass101_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorInspectPanel.<>c__DisplayClass101_0$$<ApplyMixedIndicators>b__0
// il2cpp: void UI_MapEditorInspectPanel___c__DisplayClass101_0___ApplyMixedIndicators_b__0 (UI_MapEditorInspectPanel___c__DisplayClass101_0_o* __this, System_String_o* val, const MethodInfo* method);
// 0x1822cfdb0

void UI_MapEditorInspectPanel___c__DisplayClass101_0___ApplyMixedIndicators_b__0
               (UI_MapEditorInspectPanel___c__DisplayClass101_0_o *__this,System_String_o *val,
               MethodInfo *method)

{
  UI_MapEditorInspectPanel_o *pUVar1;
  System_Collections_Generic_HashSet_object__o *__this_00;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184347588 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Remove);
    il2cpp_codegen_initialize_runtime_metadata(&"--");
    Il2CppMethodInitialized_184347588 = '\x01';
  }
  bVar2 = System_String__op_Inequality(val,"--",(MethodInfo *)0x0);
  if (!bVar2) {
    return;
  }
  pUVar1 = (__this->fields).__4__this;
  if ((pUVar1 != (UI_MapEditorInspectPanel_o *)0x0) &&
     (__this_00 = (System_Collections_Generic_HashSet_object__o *)(pUVar1->fields)._mixedFields,
     __this_00 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
    System_Collections_Generic_HashSet_object___Remove
              (__this_00,(Il2CppObject *)(__this->fields).capturedKey,
               (MethodInfo_1766930 *)MethodInfo_System_Collections_Generic_HashSet_string_Remove);
    pUVar1 = (__this->fields).__4__this;
    if (pUVar1 != (UI_MapEditorInspectPanel_o *)0x0) {
      UI_MapEditorInspectPanel__OnChange(pUVar1,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel.<>c__DisplayClass101_1$$.ctor
// il2cpp: void UI_MapEditorInspectPanel___c__DisplayClass101_1___ctor (UI_MapEditorInspectPanel___c__DisplayClass101_1_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_MapEditorInspectPanel___c__DisplayClass101_1___ctor(UI_MapEditorInspectPanel___c__DisplayClass101_1_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorInspectPanel.<>c__DisplayClass101_1$$<ApplyMixedIndicators>b__1
// il2cpp: void UI_MapEditorInspectPanel___c__DisplayClass101_1___ApplyMixedIndicators_b__1 (UI_MapEditorInspectPanel___c__DisplayClass101_1_o* __this, bool __, const MethodInfo* method);
// 0x1822cfe50

void UI_MapEditorInspectPanel___c__DisplayClass101_1___ApplyMixedIndicators_b__1
               (UI_MapEditorInspectPanel___c__DisplayClass101_1_o *__this,bool __,MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  UnityEngine_UI_Image_o *__this_00;
  UI_MapEditorInspectPanel_o *pUVar2;
  System_Collections_Generic_HashSet_object__o *__this_01;
  bool bVar3;
  
  if (Il2CppMethodInitialized_184347589 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Remove);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347589 = '\x01';
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
    UnityEngine_Object__Destroy_2f1ff70(pUVar1,(MethodInfo *)0x0);
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
                 (MethodInfo_1766930 *)MethodInfo_System_Collections_Generic_HashSet_string_Remove);
      pUVar2 = (__this->fields).__4__this;
      if (pUVar2 != (UI_MapEditorInspectPanel_o *)0x0) {
        UI_MapEditorInspectPanel__OnChange(pUVar2,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel.<>c__DisplayClass103_0$$.ctor
// il2cpp: void UI_MapEditorInspectPanel___c__DisplayClass103_0___ctor (UI_MapEditorInspectPanel___c__DisplayClass103_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_MapEditorInspectPanel___c__DisplayClass103_0___ctor(UI_MapEditorInspectPanel___c__DisplayClass103_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorInspectPanel.<>c__DisplayClass103_0$$<OnChange>b__0
// il2cpp: bool UI_MapEditorInspectPanel___c__DisplayClass103_0___OnChange_b__0 (UI_MapEditorInspectPanel___c__DisplayClass103_0_o* __this, System_Collections_Generic_KeyValuePair_string__string__o field, const MethodInfo* method);
// 0x1822cff30

bool UI_MapEditorInspectPanel___c__DisplayClass103_0___OnChange_b__0
               (UI_MapEditorInspectPanel___c__DisplayClass103_0_o *__this,
               System_Collections_Generic_KeyValuePair_string__string__o *field,MethodInfo *method)

{
  UI_MapEditorInspectPanel_o *pUVar1;
  System_Collections_Generic_HashSet_object__o *__this_00;
  System_Collections_Generic_Dictionary_string__string__o *__this_01;
  System_Collections_Generic_Dictionary_object__object__o *__this_02;
  bool bVar2;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_18434758a == '\0') {
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
    Il2CppMethodInitialized_18434758a = '\x01';
  }
  pUVar1 = (__this->fields).__4__this;
  if (pUVar1 != (UI_MapEditorInspectPanel_o *)0x0) {
    __this_00 = (System_Collections_Generic_HashSet_object__o *)(pUVar1->fields)._mixedFields;
    pSVar3 = (__this->fields).componentName;
    if ((TypeInfo_UI_MapEditorInspectPanel->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel);
    }
    if (Il2CppMethodInitialized_18434754e == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&":");
      il2cpp_codegen_initialize_runtime_metadata(&"Component:");
      Il2CppMethodInitialized_18434754e = '\x01';
    }
    pSVar3 = System_String__Concat_1969590
                       ("Component:",pSVar3,":",(field->fields).key,
                        (MethodInfo *)0x0);
    if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      bVar2 = System_Collections_Generic_HashSet_object___Contains
                        (__this_00,(Il2CppObject *)pSVar3,
                         (MethodInfo_1759E40 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
      if (bVar2) {
        return false;
      }
      __this_01 = (__this->fields).syncedFields;
      if (__this_01 != (System_Collections_Generic_Dictionary_string__string__o *)0x0) {
        bVar2 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
                           (Il2CppObject *)(field->fields).key,
                           (MethodInfo_1455450 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_string_ContainsKey);
        if (!bVar2) {
          return true;
        }
        __this_02 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).syncedFields;
        if (__this_02 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          pSVar3 = System_Collections_Generic_Dictionary_object__object___get_Item
                             (__this_02,(Il2CppObject *)(field->fields).key,
                              (MethodInfo_147A5B0 *)
                              MethodInfo_System_Collections_Generic_Dictionary_string_string_get_Item);
          bVar2 = System_String__op_Inequality(pSVar3,(field->fields).value,(MethodInfo *)0x0);
          return bVar2;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel.<>c__DisplayClass103_0$$<OnChange>b__3
// il2cpp: bool UI_MapEditorInspectPanel___c__DisplayClass103_0___OnChange_b__3 (UI_MapEditorInspectPanel___c__DisplayClass103_0_o* __this, Map_MapScriptComponent_o* item, const MethodInfo* method);
// 0x181c31620

bool
UI_MapEditorInspectPanel___c__DisplayClass103_0___OnChange_b__3(UI_MapEditorInspectPanel___c__DisplayClass103_0_o* __this, Map_MapScriptComponent_o* item, MethodInfo* method)

{
  bool bVar1;
  
  if (d != (Newtonsoft_Json_Utilities_ImmutableCollectionsUtils_ImmutableCollectionTypeInfo_o *)0x0) {
    bVar1 = System_String__op_Equality
                      ((d->fields)._ContractTypeName_k__BackingField,(__this->fields).componentName,(MethodInfo *)0x0);
    return bVar1;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel.<>c__DisplayClass62_0$$.ctor
// il2cpp: void UI_MapEditorInspectPanel___c__DisplayClass62_0___ctor (UI_MapEditorInspectPanel___c__DisplayClass62_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_MapEditorInspectPanel___c__DisplayClass62_0___ctor(UI_MapEditorInspectPanel___c__DisplayClass62_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorInspectPanel.<>c__DisplayClass62_0$$<CreateSection>b__0
// il2cpp: void UI_MapEditorInspectPanel___c__DisplayClass62_0___CreateSection_b__0 (UI_MapEditorInspectPanel___c__DisplayClass62_0_o* __this, bool expanded, const MethodInfo* method);
// 0x1822d0480

void UI_MapEditorInspectPanel___c__DisplayClass62_0___CreateSection_b__0
               (UI_MapEditorInspectPanel___c__DisplayClass62_0_o *__this,bool expanded,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *pSVar1;
  
  if (Il2CppMethodInitialized_18434758b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Remove);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorInspectPanel);
    Il2CppMethodInitialized_18434758b = '\x01';
  }
  if (expanded) {
    if ((TypeInfo_UI_MapEditorInspectPanel->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel);
    }
    pSVar1 = (System_Collections_Generic_HashSet_object__o *)
             TypeInfo_UI_MapEditorInspectPanel->static_fields->CollapsedSections;
    if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet_object___Remove
                (pSVar1,(Il2CppObject *)(__this->fields).key,
                 (MethodInfo_1766930 *)MethodInfo_System_Collections_Generic_HashSet_string_Remove);
      return;
    }
  }
  else {
    if ((TypeInfo_UI_MapEditorInspectPanel->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel);
    }
    pSVar1 = (System_Collections_Generic_HashSet_object__o *)
             TypeInfo_UI_MapEditorInspectPanel->static_fields->CollapsedSections;
    if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet_object___Add
                (pSVar1,(Il2CppObject *)(__this->fields).key,
                 (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel.<>c__DisplayClass62_0$$<CreateSection>b__1
// il2cpp: void UI_MapEditorInspectPanel___c__DisplayClass62_0___CreateSection_b__1 (UI_MapEditorInspectPanel___c__DisplayClass62_0_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x1822d0560

void UI_MapEditorInspectPanel___c__DisplayClass62_0___CreateSection_b__1
               (UI_MapEditorInspectPanel___c__DisplayClass62_0_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  UI_MapEditorInspectPanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_MapEditorInspectPanel_o *)0x0) {
    UI_MapEditorInspectPanel__ShowSectionContextMenu
              (__this_00,(__this->fields).key,eventData,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel.<>c__DisplayClass63_0$$.ctor
// il2cpp: void UI_MapEditorInspectPanel___c__DisplayClass63_0___ctor (UI_MapEditorInspectPanel___c__DisplayClass63_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_MapEditorInspectPanel___c__DisplayClass63_0___ctor(UI_MapEditorInspectPanel___c__DisplayClass63_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorInspectPanel.<>c__DisplayClass63_0$$<ShowSectionContextMenu>b__0
// il2cpp: void UI_MapEditorInspectPanel___c__DisplayClass63_0___ShowSectionContextMenu_b__0 (UI_MapEditorInspectPanel___c__DisplayClass63_0_o* __this, const MethodInfo* method);
// 0x1822d0590

void UI_MapEditorInspectPanel___c__DisplayClass63_0___ShowSectionContextMenu_b__0
               (UI_MapEditorInspectPanel___c__DisplayClass63_0_o *__this,MethodInfo *method)

{
  UI_MapEditorInspectPanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_MapEditorInspectPanel_o *)0x0) {
    UI_MapEditorInspectPanel__CopyComponent(__this_00,(__this->fields).componentName,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel.<>c__DisplayClass63_0$$<ShowSectionContextMenu>b__1
// il2cpp: void UI_MapEditorInspectPanel___c__DisplayClass63_0___ShowSectionContextMenu_b__1 (UI_MapEditorInspectPanel___c__DisplayClass63_0_o* __this, const MethodInfo* method);
// 0x1822d05c0

void UI_MapEditorInspectPanel___c__DisplayClass63_0___ShowSectionContextMenu_b__1
               (UI_MapEditorInspectPanel___c__DisplayClass63_0_o *__this,MethodInfo *method)

{
  UI_MapEditorInspectPanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_MapEditorInspectPanel_o *)0x0) {
    UI_MapEditorInspectPanel__DeleteComponent(__this_00,(__this->fields).componentName,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel.<>c__DisplayClass69_0$$.ctor
// il2cpp: void UI_MapEditorInspectPanel___c__DisplayClass69_0___ctor (UI_MapEditorInspectPanel___c__DisplayClass69_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_MapEditorInspectPanel___c__DisplayClass69_0___ctor(UI_MapEditorInspectPanel___c__DisplayClass69_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorInspectPanel.<>c__DisplayClass69_0$$<CopyComponent>b__0
// il2cpp: bool UI_MapEditorInspectPanel___c__DisplayClass69_0___CopyComponent_b__0 (UI_MapEditorInspectPanel___c__DisplayClass69_0_o* __this, Map_MapScriptComponent_o* item, const MethodInfo* method);
// 0x181c31620

bool
UI_MapEditorInspectPanel___c__DisplayClass69_0___CopyComponent_b__0(UI_MapEditorInspectPanel___c__DisplayClass69_0_o* __this, Map_MapScriptComponent_o* item, MethodInfo* method)

{
  bool bVar1;
  
  if (d != (Newtonsoft_Json_Utilities_ImmutableCollectionsUtils_ImmutableCollectionTypeInfo_o *)0x0) {
    bVar1 = System_String__op_Equality
                      ((d->fields)._ContractTypeName_k__BackingField,(__this->fields).componentName,(MethodInfo *)0x0);
    return bVar1;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel.<>c__DisplayClass71_0$$.ctor
// il2cpp: void UI_MapEditorInspectPanel___c__DisplayClass71_0___ctor (UI_MapEditorInspectPanel___c__DisplayClass71_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_MapEditorInspectPanel___c__DisplayClass71_0___ctor(UI_MapEditorInspectPanel___c__DisplayClass71_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorInspectPanel.<>c__DisplayClass71_0$$<PasteComponent>b__0
// il2cpp: bool UI_MapEditorInspectPanel___c__DisplayClass71_0___PasteComponent_b__0 (UI_MapEditorInspectPanel___c__DisplayClass71_0_o* __this, Map_MapScriptComponent_o* item, const MethodInfo* method);
// 0x1822d05f0

bool
UI_MapEditorInspectPanel___c__DisplayClass71_0___PasteComponent_b__0(UI_MapEditorInspectPanel___c__DisplayClass71_0_o* __this, Map_MapScriptComponent_o* item, MethodInfo* method)

{
  Map_MapScriptComponent_o *pMVar1;
  bool bVar2;
  
  if ((item != (Map_MapScriptComponent_o *)0x0) &&
     (pMVar1 = (__this->fields).copied, pMVar1 != (Map_MapScriptComponent_o *)0x0)) {
    bVar2 = System_String__op_Equality
                      ((item->fields).ComponentName,(pMVar1->fields).ComponentName,(MethodInfo *)0x0);
    return bVar2;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel.<>c__DisplayClass72_0$$.ctor
// il2cpp: void UI_MapEditorInspectPanel___c__DisplayClass72_0___ctor (UI_MapEditorInspectPanel___c__DisplayClass72_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_MapEditorInspectPanel___c__DisplayClass72_0___ctor(UI_MapEditorInspectPanel___c__DisplayClass72_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorInspectPanel.<>c__DisplayClass72_0$$<DeleteComponent>b__0
// il2cpp: bool UI_MapEditorInspectPanel___c__DisplayClass72_0___DeleteComponent_b__0 (UI_MapEditorInspectPanel___c__DisplayClass72_0_o* __this, Map_MapScriptComponent_o* item, const MethodInfo* method);
// 0x181c31620

bool
UI_MapEditorInspectPanel___c__DisplayClass72_0___DeleteComponent_b__0(UI_MapEditorInspectPanel___c__DisplayClass72_0_o* __this, Map_MapScriptComponent_o* item, MethodInfo* method)

{
  bool bVar1;
  
  if (d != (Newtonsoft_Json_Utilities_ImmutableCollectionsUtils_ImmutableCollectionTypeInfo_o *)0x0) {
    bVar1 = System_String__op_Equality
                      ((d->fields)._ContractTypeName_k__BackingField,(__this->fields).componentName,(MethodInfo *)0x0);
    return bVar1;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel.<>c__DisplayClass81_0$$.ctor
// il2cpp: void UI_MapEditorInspectPanel___c__DisplayClass81_0___ctor (UI_MapEditorInspectPanel___c__DisplayClass81_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_MapEditorInspectPanel___c__DisplayClass81_0___ctor(UI_MapEditorInspectPanel___c__DisplayClass81_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorInspectPanel.<>c__DisplayClass81_0$$<Show>b__39
// il2cpp: void UI_MapEditorInspectPanel___c__DisplayClass81_0___Show_b__39 (UI_MapEditorInspectPanel___c__DisplayClass81_0_o* __this, const MethodInfo* method);
// 0x1822d0620

void UI_MapEditorInspectPanel___c__DisplayClass81_0___Show_b__39
               (UI_MapEditorInspectPanel___c__DisplayClass81_0_o *__this,MethodInfo *method)

{
  UI_MapEditorInspectPanel_o *pUVar1;
  UI_MapEditorMenu_o *pUVar2;
  UI_ConfirmPopup_o *__this_00;
  System_String_o *message;
  UnityEngine_Events_UnityAction_o *__this_01;
  
  if (Il2CppMethodInitialized_18434758c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass81_0_Show_b__48);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"Delete this component?");
    Il2CppMethodInitialized_18434758c = '\x01';
  }
  message = "Delete this component?";
  pUVar1 = (__this->fields).__4__this;
  if ((pUVar1 != (UI_MapEditorInspectPanel_o *)0x0) &&
     (pUVar2 = (pUVar1->fields)._menu, pUVar2 != (UI_MapEditorMenu_o *)0x0)) {
    __this_01 = (__this->fields).__9__48;
    __this_00 = (pUVar2->fields).ConfirmPopup;
    if (__this_01 == (UnityEngine_Events_UnityAction_o *)0x0) {
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
      UnityEngine_Events_UnityAction___ctor
                ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_01,(Il2CppObject *)__this,
                 (intptr_t)MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass81_0_Show_b__48,
                 (MethodInfo *)0x0);
      (__this->fields).__9__48 = __this_01;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__9__48,__this_01);
    }
    if (__this_00 != (UI_ConfirmPopup_o *)0x0) {
      UI_ConfirmPopup__Show(__this_00,message,__this_01,(System_String_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel.<>c__DisplayClass81_0$$<Show>b__48
// il2cpp: void UI_MapEditorInspectPanel___c__DisplayClass81_0___Show_b__48 (UI_MapEditorInspectPanel___c__DisplayClass81_0_o* __this, const MethodInfo* method);
// 0x1822d0710

void UI_MapEditorInspectPanel___c__DisplayClass81_0___Show_b__48
               (UI_MapEditorInspectPanel___c__DisplayClass81_0_o *__this,MethodInfo *method)

{
  UI_MapEditorInspectPanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_MapEditorInspectPanel_o *)0x0) {
    UI_MapEditorInspectPanel__DeleteComponent(__this_00,(__this->fields).componentName,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel.<>c__DisplayClass81_1$$.ctor
// il2cpp: void UI_MapEditorInspectPanel___c__DisplayClass81_1___ctor (UI_MapEditorInspectPanel___c__DisplayClass81_1_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_MapEditorInspectPanel___c__DisplayClass81_1___ctor(UI_MapEditorInspectPanel___c__DisplayClass81_1_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorInspectPanel.<>c__DisplayClass81_1$$<Show>b__41
// il2cpp: void UI_MapEditorInspectPanel___c__DisplayClass81_1___Show_b__41 (UI_MapEditorInspectPanel___c__DisplayClass81_1_o* __this, const MethodInfo* method);
// 0x1822d0740

void
UI_MapEditorInspectPanel___c__DisplayClass81_1___Show_b__41(UI_MapEditorInspectPanel___c__DisplayClass81_1_o* __this, MethodInfo* method)

{
  UI_MapEditorInspectPanel___c__DisplayClass81_0_o *pUVar1;
  UI_MapEditorInspectPanel_o *__this_00;
  
  pUVar1 = (__this->fields).CS___8__locals1;
  if ((pUVar1 != (UI_MapEditorInspectPanel___c__DisplayClass81_0_o *)0x0) &&
     (__this_00 = (pUVar1->fields).__4__this, __this_00 != (UI_MapEditorInspectPanel_o *)0x0)) {
    UI_MapEditorInspectPanel__OnComponentFieldChanged
              (__this_00,(pUVar1->fields).componentName,(__this->fields).fieldName,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel.<>c__DisplayClass81_1$$<Show>b__40
// il2cpp: void UI_MapEditorInspectPanel___c__DisplayClass81_1___Show_b__40 (UI_MapEditorInspectPanel___c__DisplayClass81_1_o* __this, const MethodInfo* method);
// 0x1822d0740

void
UI_MapEditorInspectPanel___c__DisplayClass81_1___Show_b__40(UI_MapEditorInspectPanel___c__DisplayClass81_1_o* __this, MethodInfo* method)

{
  UI_MapEditorInspectPanel___c__DisplayClass81_0_o *pUVar1;
  UI_MapEditorInspectPanel_o *__this_00;
  
  pUVar1 = (__this->fields).CS___8__locals1;
  if ((pUVar1 != (UI_MapEditorInspectPanel___c__DisplayClass81_0_o *)0x0) &&
     (__this_00 = (pUVar1->fields).__4__this, __this_00 != (UI_MapEditorInspectPanel_o *)0x0)) {
    UI_MapEditorInspectPanel__OnComponentFieldChanged
              (__this_00,(pUVar1->fields).componentName,(__this->fields).fieldName,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel.<>c__DisplayClass81_1$$<Show>b__42
// il2cpp: void UI_MapEditorInspectPanel___c__DisplayClass81_1___Show_b__42 (UI_MapEditorInspectPanel___c__DisplayClass81_1_o* __this, const MethodInfo* method);
// 0x1822d0740

void
UI_MapEditorInspectPanel___c__DisplayClass81_1___Show_b__42(UI_MapEditorInspectPanel___c__DisplayClass81_1_o* __this, MethodInfo* method)

{
  UI_MapEditorInspectPanel___c__DisplayClass81_0_o *pUVar1;
  UI_MapEditorInspectPanel_o *__this_00;
  
  pUVar1 = (__this->fields).CS___8__locals1;
  if ((pUVar1 != (UI_MapEditorInspectPanel___c__DisplayClass81_0_o *)0x0) &&
     (__this_00 = (pUVar1->fields).__4__this, __this_00 != (UI_MapEditorInspectPanel_o *)0x0)) {
    UI_MapEditorInspectPanel__OnComponentFieldChanged
              (__this_00,(pUVar1->fields).componentName,(__this->fields).fieldName,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel.<>c__DisplayClass81_1$$<Show>b__43
// il2cpp: void UI_MapEditorInspectPanel___c__DisplayClass81_1___Show_b__43 (UI_MapEditorInspectPanel___c__DisplayClass81_1_o* __this, const MethodInfo* method);
// 0x1822d0740

void
UI_MapEditorInspectPanel___c__DisplayClass81_1___Show_b__43(UI_MapEditorInspectPanel___c__DisplayClass81_1_o* __this, MethodInfo* method)

{
  UI_MapEditorInspectPanel___c__DisplayClass81_0_o *pUVar1;
  UI_MapEditorInspectPanel_o *__this_00;
  
  pUVar1 = (__this->fields).CS___8__locals1;
  if ((pUVar1 != (UI_MapEditorInspectPanel___c__DisplayClass81_0_o *)0x0) &&
     (__this_00 = (pUVar1->fields).__4__this, __this_00 != (UI_MapEditorInspectPanel_o *)0x0)) {
    UI_MapEditorInspectPanel__OnComponentFieldChanged
              (__this_00,(pUVar1->fields).componentName,(__this->fields).fieldName,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel.<>c__DisplayClass81_1$$<Show>b__46
// il2cpp: void UI_MapEditorInspectPanel___c__DisplayClass81_1___Show_b__46 (UI_MapEditorInspectPanel___c__DisplayClass81_1_o* __this, const MethodInfo* method);
// 0x1822d0740

void
UI_MapEditorInspectPanel___c__DisplayClass81_1___Show_b__46(UI_MapEditorInspectPanel___c__DisplayClass81_1_o* __this, MethodInfo* method)

{
  UI_MapEditorInspectPanel___c__DisplayClass81_0_o *pUVar1;
  UI_MapEditorInspectPanel_o *__this_00;
  
  pUVar1 = (__this->fields).CS___8__locals1;
  if ((pUVar1 != (UI_MapEditorInspectPanel___c__DisplayClass81_0_o *)0x0) &&
     (__this_00 = (pUVar1->fields).__4__this, __this_00 != (UI_MapEditorInspectPanel_o *)0x0)) {
    UI_MapEditorInspectPanel__OnComponentFieldChanged
              (__this_00,(pUVar1->fields).componentName,(__this->fields).fieldName,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel.<>c__DisplayClass81_1$$<Show>b__47
// il2cpp: void UI_MapEditorInspectPanel___c__DisplayClass81_1___Show_b__47 (UI_MapEditorInspectPanel___c__DisplayClass81_1_o* __this, const MethodInfo* method);
// 0x1822d0740

void UI_MapEditorInspectPanel___c__DisplayClass81_1___Show_b__47
               (UI_MapEditorInspectPanel___c__DisplayClass81_1_o *__this,MethodInfo *method)

{
  UI_MapEditorInspectPanel___c__DisplayClass81_0_o *pUVar1;
  UI_MapEditorInspectPanel_o *__this_00;
  
  pUVar1 = (__this->fields).CS___8__locals1;
  if ((pUVar1 != (UI_MapEditorInspectPanel___c__DisplayClass81_0_o *)0x0) &&
     (__this_00 = (pUVar1->fields).__4__this, __this_00 != (UI_MapEditorInspectPanel_o *)0x0)) {
    UI_MapEditorInspectPanel__OnComponentFieldChanged
              (__this_00,(pUVar1->fields).componentName,(__this->fields).fieldName,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel.<>c__DisplayClass82_0$$.ctor
// il2cpp: void UI_MapEditorInspectPanel___c__DisplayClass82_0___ctor (UI_MapEditorInspectPanel___c__DisplayClass82_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_MapEditorInspectPanel___c__DisplayClass82_0___ctor(UI_MapEditorInspectPanel___c__DisplayClass82_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorInspectPanel.<>c__DisplayClass82_0$$<CreateMapObjectSetting>b__0
// il2cpp: void UI_MapEditorInspectPanel___c__DisplayClass82_0___CreateMapObjectSetting_b__0 (UI_MapEditorInspectPanel___c__DisplayClass82_0_o* __this, const MethodInfo* method);
// 0x181c31460

void
UI_MapEditorInspectPanel___c__DisplayClass82_0___CreateMapObjectSetting_b__0(UI_MapEditorInspectPanel___c__DisplayClass82_0_o* __this, MethodInfo* method)

{
  System_Func_object__o *pSVar1;
  Il2CppObject *pIVar2;
  
  pSVar1 = (__this->fields).onChanged;
  if (pSVar1 != (System_Func_object__o *)0x0) {
    pIVar2 = (Il2CppObject *)
             (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,(pSVar1->fields).method);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel.<>c__DisplayClass82_0$$<CreateMapObjectSetting>b__1
// il2cpp: void UI_MapEditorInspectPanel___c__DisplayClass82_0___CreateMapObjectSetting_b__1 (UI_MapEditorInspectPanel___c__DisplayClass82_0_o* __this, const MethodInfo* method);
// 0x1822d0780

void UI_MapEditorInspectPanel___c__DisplayClass82_0___CreateMapObjectSetting_b__1
               (UI_MapEditorInspectPanel___c__DisplayClass82_0_o *__this,MethodInfo *method)

{
  UI_MapEditorInspectPanel_o *pUVar1;
  UI_MapEditorMenu_o *pUVar2;
  UI_MapEditorMapObjectPickerPopup_o *__this_00;
  UnityEngine_AudioClip_PCMSetPositionCallback_o *__this_01;
  
  if (Il2CppMethodInitialized_18434758d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_int);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass82_0_CreateMapObjectSetting_b__2);
    Il2CppMethodInitialized_18434758d = '\x01';
  }
  pUVar1 = (__this->fields).__4__this;
  if ((pUVar1 != (UI_MapEditorInspectPanel_o *)0x0) &&
     (pUVar2 = (pUVar1->fields)._menu, pUVar2 != (UI_MapEditorMenu_o *)0x0)) {
    __this_01 = (UnityEngine_AudioClip_PCMSetPositionCallback_o *)(__this->fields).__9__2;
    __this_00 = (pUVar2->fields).MapObjectPickerPopup;
    if (__this_01 == (UnityEngine_AudioClip_PCMSetPositionCallback_o *)0x0) {
      __this_01 = (UnityEngine_AudioClip_PCMSetPositionCallback_o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_int);
      System_Action_int____ctor
                (__this_01,(Il2CppObject *)__this,
                 (intptr_t)MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass82_0_CreateMapObjectSetting_b__2
                 ,(MethodInfo *)0x0);
      (__this->fields).__9__2 = (System_Action_int__o *)__this_01;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__9__2,__this_01);
    }
    if (__this_00 != (UI_MapEditorMapObjectPickerPopup_o *)0x0) {
      (__this_00->fields)._multiple = false;
      (__this_00->fields)._onSelect = (System_Action_int__o *)__this_01;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields)._onSelect,__this_01);
      (__this_00->fields)._onSelectMultiple = (System_Action_HashSet_int___o *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields)._onSelectMultiple,(void *)0x0);
      UI_MapEditorMapObjectPickerPopup__PrepareAndShow(__this_00,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel.<>c__DisplayClass82_0$$<CreateMapObjectSetting>b__2
// il2cpp: void UI_MapEditorInspectPanel___c__DisplayClass82_0___CreateMapObjectSetting_b__2 (UI_MapEditorInspectPanel___c__DisplayClass82_0_o* __this, int32_t id, const MethodInfo* method);
// 0x1822d0880

void UI_MapEditorInspectPanel___c__DisplayClass82_0___CreateMapObjectSetting_b__2
               (UI_MapEditorInspectPanel___c__DisplayClass82_0_o *__this,int32_t id,MethodInfo *method)

{
  Settings_IntSetting_o *__this_00;
  UI_InputSettingElement_o *pUVar1;
  System_Action_o *pSVar2;
  
  if (Il2CppMethodInitialized_18434758e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    Il2CppMethodInitialized_18434758e = '\x01';
  }
  __this_00 = (__this->fields).setting;
  if (__this_00 != (Settings_IntSetting_o *)0x0) {
    Settings_TypedSetting_int___set_Value
              ((Settings_TypedSetting_int__o *)__this_00,id,
               (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
    pUVar1 = (__this->fields).input;
    if (pUVar1 != (UI_InputSettingElement_o *)0x0) {
      (*(pUVar1->klass->vtable)._6_SyncElement.methodPtr)
                (pUVar1,(pUVar1->klass->vtable)._6_SyncElement.method);
      pSVar2 = (__this->fields).onChanged;
      if (pSVar2 != (System_Action_o *)0x0) {
        (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,(pSVar2->fields).method);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel.<>c__DisplayClass83_0$$.ctor
// il2cpp: void UI_MapEditorInspectPanel___c__DisplayClass83_0___ctor (UI_MapEditorInspectPanel___c__DisplayClass83_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_MapEditorInspectPanel___c__DisplayClass83_0___ctor(UI_MapEditorInspectPanel___c__DisplayClass83_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorInspectPanel.<>c__DisplayClass83_0$$<CreateMapObjectListSetting>b__0
// il2cpp: void UI_MapEditorInspectPanel___c__DisplayClass83_0___CreateMapObjectListSetting_b__0 (UI_MapEditorInspectPanel___c__DisplayClass83_0_o* __this, const MethodInfo* method);
// 0x1822d0900

void UI_MapEditorInspectPanel___c__DisplayClass83_0___CreateMapObjectListSetting_b__0
               (UI_MapEditorInspectPanel___c__DisplayClass83_0_o *__this,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  Settings_HashSetSetting_int__o *pSVar2;
  System_Action_o *pSVar3;
  bool bVar4;
  System_Collections_Generic_HashSet_int__o *__this_00;
  System_Char_array *separator;
  System_String_array *pSVar5;
  System_String_o *pSVar6;
  uint uVar7;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_18434758f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorInspectPanel);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_HashSet_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_HashSet_int_set_Value);
    Il2CppMethodInitialized_18434758f = '\x01';
  }
  pSVar1 = (__this->fields).serialized;
  if (pSVar1 != (Settings_StringSetting_o *)0x0) {
    pSVar2 = (__this->fields).setting;
    pSVar6 = (pSVar1->fields)._value;
    if ((TypeInfo_UI_MapEditorInspectPanel->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel);
    }
    if (Il2CppMethodInitialized_184347565 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_char_array);
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Add);
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_ctor);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_int);
      Il2CppMethodInitialized_184347565 = '\x01';
    }
    local_res8[0] = 0;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
    System_Collections_Generic_HashSet_int____ctor
              (__this_00,(MethodInfo_176CDF0 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor);
    separator = (System_Char_array *)SZArrayNew(TypeInfo_char_array,2);
    if (separator != (System_Char_array *)0x0) {
      if (((int)separator->max_length == 0) || (separator->m_Items[0] = 0x2c, (uint)separator->max_length < 2)
         ) {
label_1822d0b3a:
        ThrowIndexOutOfRangeException();
      }
      separator->m_Items[1] = 0x2f;
      if (pSVar6 != (System_String_o *)0x0) {
        pSVar5 = System_String__Split_1972160(pSVar6,separator,1,(MethodInfo *)0x0);
        if (pSVar5 != (System_String_array *)0x0) {
          for (uVar7 = 0; (int)uVar7 < (int)pSVar5->max_length; uVar7 = uVar7 + 1) {
            if ((uint)pSVar5->max_length <= uVar7) goto label_1822d0b3a;
            if (pSVar5->m_Items[(int)uVar7] == (System_String_o *)0x0) goto label_1822d0b40;
            pSVar6 = System_String__Trim(pSVar5->m_Items[(int)uVar7],(MethodInfo *)0x0);
            bVar4 = System_Int32__TryParse(pSVar6,local_res8,(MethodInfo *)0x0);
            if ((bVar4) && (-1 < local_res8[0])) {
              if (__this_00 == (System_Collections_Generic_HashSet_int__o *)0x0) goto label_1822d0b40;
              System_Collections_Generic_HashSet_int___Add
                        (__this_00,local_res8[0],
                         (MethodInfo_1757D20 *)MethodInfo_System_Collections_Generic_HashSet_int_Add);
            }
          }
          if (pSVar2 != (Settings_HashSetSetting_int__o *)0x0) {
            Settings_TypedSetting_object___set_Value
                      ((Settings_TypedSetting_T__o *)pSVar2,(Il2CppObject *)__this_00,
                       (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_HashSet_int_set_Value);
            pSVar2 = (__this->fields).setting;
            if (pSVar2 != (Settings_HashSetSetting_int__o *)0x0) {
              pSVar1 = (__this->fields).serialized;
              pSVar6 = UI_MapEditorInspectPanel__SerializeMapObjectIds
                                 ((System_Collections_Generic_IEnumerable_int__o *)(pSVar2->fields)._value,
                                  (MethodInfo *)0x0);
              if (pSVar1 != (Settings_StringSetting_o *)0x0) {
                Settings_TypedSetting_object___set_Value
                          ((Settings_TypedSetting_T__o *)pSVar1,(Il2CppObject *)pSVar6,
                           (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
                pSVar3 = (__this->fields).onChanged;
                if (pSVar3 != (System_Action_o *)0x0) {
                  (*(code *)(pSVar3->fields).invoke_impl)
                            ((pSVar3->fields).method_code,(pSVar3->fields).method);
                  return;
                }
              }
            }
          }
          goto label_1822d0b34;
        }
      }
    }
label_1822d0b40:
    ThrowNullReferenceException();
  }
label_1822d0b34:
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel.<>c__DisplayClass83_0$$<CreateMapObjectListSetting>b__1
// il2cpp: void UI_MapEditorInspectPanel___c__DisplayClass83_0___CreateMapObjectListSetting_b__1 (UI_MapEditorInspectPanel___c__DisplayClass83_0_o* __this, const MethodInfo* method);
// 0x1822d0b50

void UI_MapEditorInspectPanel___c__DisplayClass83_0___CreateMapObjectListSetting_b__1
               (UI_MapEditorInspectPanel___c__DisplayClass83_0_o *__this,MethodInfo *method)

{
  UI_MapEditorInspectPanel_o *pUVar1;
  UI_MapEditorMenu_o *pUVar2;
  Settings_HashSetSetting_int__o *pSVar3;
  UI_MapEditorMapObjectPickerPopup_o *__this_00;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_01;
  System_Collections_Generic_HashSet_int__o *__this_02;
  System_Collections_Generic_HashSet_int__o *__this_03;
  
  if (Il2CppMethodInitialized_184347590 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_HashSet_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_HashSet_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass83_0_CreateMapObjectListSetting_b__2);
    Il2CppMethodInitialized_184347590 = '\x01';
  }
  pUVar1 = (__this->fields).__4__this;
  if (((pUVar1 != (UI_MapEditorInspectPanel_o *)0x0) &&
      (pUVar2 = (pUVar1->fields)._menu, pUVar2 != (UI_MapEditorMenu_o *)0x0)) &&
     (pSVar3 = (__this->fields).setting, pSVar3 != (Settings_HashSetSetting_int__o *)0x0)) {
    __this_01 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)(__this->fields).__9__2;
    __this_00 = (pUVar2->fields).MapObjectPickerPopup;
    __this_02 = (System_Collections_Generic_HashSet_int__o *)(pSVar3->fields)._value;
    if (__this_01 == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
      __this_01 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_HashSet_int);
      System_Action_object____ctor
                (__this_01,(Il2CppObject *)__this,
                 (intptr_t)
                 MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass83_0_CreateMapObjectListSetting_b__2,
                 (MethodInfo *)0x0);
      (__this->fields).__9__2 = (System_Action_HashSet_int___o *)__this_01;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__9__2,__this_01);
    }
    if (__this_00 != (UI_MapEditorMapObjectPickerPopup_o *)0x0) {
      if (Il2CppMethodInitialized_184347598 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_HashSet_int_ctor_40dc988);
        il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_ctor);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_int);
        Il2CppMethodInitialized_184347598 = '\x01';
      }
      (__this_00->fields)._multiple = true;
      if (__this_02 == (System_Collections_Generic_HashSet_int__o *)0x0) {
        __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
        System_Collections_Generic_HashSet_int____ctor
                  (__this_02,(MethodInfo_176CDF0 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor);
      }
      __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
      System_Collections_Generic_HashSet_int____ctor_176c3b0
                (__this_03,(System_Collections_Generic_IEnumerable_T__o *)__this_02,
                 (MethodInfo_176C3B0 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor_40dc988);
      (__this_00->fields)._selectedIds = __this_03;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields)._selectedIds,__this_03);
      (__this_00->fields)._onSelect = (System_Action_int__o *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields)._onSelect,(void *)0x0);
      (__this_00->fields)._onSelectMultiple = (System_Action_HashSet_int___o *)__this_01;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields)._onSelectMultiple,__this_01);
      UI_MapEditorMapObjectPickerPopup__PrepareAndShow(__this_00,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel.<>c__DisplayClass83_0$$<CreateMapObjectListSetting>b__2
// il2cpp: void UI_MapEditorInspectPanel___c__DisplayClass83_0___CreateMapObjectListSetting_b__2 (UI_MapEditorInspectPanel___c__DisplayClass83_0_o* __this, System_Collections_Generic_HashSet_int__o* ids, const MethodInfo* method);
// 0x1822d0d00

void UI_MapEditorInspectPanel___c__DisplayClass83_0___CreateMapObjectListSetting_b__2
               (UI_MapEditorInspectPanel___c__DisplayClass83_0_o *__this,
               System_Collections_Generic_HashSet_int__o *ids,MethodInfo *method)

{
  Settings_HashSetSetting_int__o *__this_00;
  Settings_StringSetting_o *__this_01;
  UI_InputSettingElement_o *pUVar1;
  System_Action_o *pSVar2;
  System_String_o *value;
  
  if (Il2CppMethodInitialized_184347591 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorInspectPanel);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_HashSet_int_set_Value);
    Il2CppMethodInitialized_184347591 = '\x01';
  }
  __this_00 = (__this->fields).setting;
  if (__this_00 != (Settings_HashSetSetting_int__o *)0x0) {
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)ids,
               (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_HashSet_int_set_Value);
    __this_01 = (__this->fields).serialized;
    if ((TypeInfo_UI_MapEditorInspectPanel->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel);
    }
    value = UI_MapEditorInspectPanel__SerializeMapObjectIds
                      ((System_Collections_Generic_IEnumerable_int__o *)ids,(MethodInfo *)0x0);
    if (__this_01 != (Settings_StringSetting_o *)0x0) {
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)__this_01,(Il2CppObject *)value,
                 (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
      pUVar1 = (__this->fields).input;
      if (pUVar1 != (UI_InputSettingElement_o *)0x0) {
        (*(pUVar1->klass->vtable)._6_SyncElement.methodPtr)
                  (pUVar1,(pUVar1->klass->vtable)._6_SyncElement.method);
        pSVar2 = (__this->fields).onChanged;
        if (pSVar2 != (System_Action_o *)0x0) {
          (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,(pSVar2->fields).method);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel.<>c__DisplayClass90_0$$.ctor
// il2cpp: void UI_MapEditorInspectPanel___c__DisplayClass90_0___ctor (UI_MapEditorInspectPanel___c__DisplayClass90_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_MapEditorInspectPanel___c__DisplayClass90_0___ctor(UI_MapEditorInspectPanel___c__DisplayClass90_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorInspectPanel.<>c__DisplayClass90_0$$<OnButtonClick>b__1
// il2cpp: void UI_MapEditorInspectPanel___c__DisplayClass90_0___OnButtonClick_b__1 (UI_MapEditorInspectPanel___c__DisplayClass90_0_o* __this, const MethodInfo* method);
// 0x1822d0fa0

void UI_MapEditorInspectPanel___c__DisplayClass90_0___OnButtonClick_b__1
               (UI_MapEditorInspectPanel___c__DisplayClass90_0_o *__this,MethodInfo *method)

{
  int32_t index;
  UI_MapEditorInspectPanel_o *__this_00;
  System_Collections_Generic_List_Dictionary_string__BaseSetting___o *__this_01;
  System_Collections_Generic_List_string__o *__this_02;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_MapEditorInspectPanel_o *)0x0) {
    index = (__this->fields).index;
    if (Il2CppMethodInitialized_18434756c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_RemoveAt);
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_List_Dictionary_string_BaseSetting_RemoveAt);
      Il2CppMethodInitialized_18434756c = '\x01';
    }
    __this_01 = (__this_00->fields)._components;
    if (__this_01 != (System_Collections_Generic_List_Dictionary_string__BaseSetting___o *)0x0) {
      System_Collections_Generic_List_object___RemoveAt
                ((System_Collections_Generic_List_object__o *)__this_01,index,
                 (MethodInfo_947010 *)
                 MethodInfo_System_Collections_Generic_List_Dictionary_string_BaseSetting_RemoveAt);
      __this_02 = (__this_00->fields)._componentNames;
      if (__this_02 != (System_Collections_Generic_List_string__o *)0x0) {
        System_Collections_Generic_List_object___RemoveAt
                  ((System_Collections_Generic_List_object__o *)__this_02,index,
                   (MethodInfo_947010 *)MethodInfo_System_Collections_Generic_List_string_RemoveAt);
        UI_MapEditorInspectPanel__OnChange(__this_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel.<>c__DisplayClass94_0$$.ctor
// il2cpp: void UI_MapEditorInspectPanel___c__DisplayClass94_0___ctor (UI_MapEditorInspectPanel___c__DisplayClass94_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_MapEditorInspectPanel___c__DisplayClass94_0___ctor(UI_MapEditorInspectPanel___c__DisplayClass94_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorInspectPanel.<>c__DisplayClass94_0$$<SyncSettings>b__0
// il2cpp: bool UI_MapEditorInspectPanel___c__DisplayClass94_0___SyncSettings_b__0 (UI_MapEditorInspectPanel___c__DisplayClass94_0_o* __this, Map_MapObject_o* mapObject, const MethodInfo* method);
// 0x1822d1030

bool UI_MapEditorInspectPanel___c__DisplayClass94_0___SyncSettings_b__0
               (UI_MapEditorInspectPanel___c__DisplayClass94_0_o *__this,Map_MapObject_o *mapObject,
               MethodInfo *method)

{
  byte bVar1;
  Map_MapScriptBaseObject_o *pMVar2;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  bool bVar3;
  System_Func_MapScriptComponent__bool__o *__this_00;
  
  if (Il2CppMethodInitialized_184347592 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Any_MapScriptComponent);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_MapScriptComponent_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptSceneObject);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass94_0_SyncSettings_b__1);
    Il2CppMethodInitialized_184347592 = '\x01';
  }
  if ((mapObject != (Map_MapObject_o *)0x0) &&
     (pMVar2 = (mapObject->fields).ScriptObject, pMVar2 != (Map_MapScriptBaseObject_o *)0x0)) {
    bVar1 = (TypeInfo_Map_MapScriptSceneObject->_2).typeHierarchyDepth;
    if ((bVar1 <= (pMVar2->klass->_2).typeHierarchyDepth) &&
       ((pMVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_Map_MapScriptSceneObject)) {
      __this_00 = (__this->fields).__9__1;
      source = *(System_Collections_Generic_IEnumerable_TSource__o **)&(*(uint32_t *)((char *)pMVar2 + 0x80));
      if (__this_00 == (System_Func_MapScriptComponent__bool__o *)0x0) {
        __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_MapScriptComponent_bool);
        System_Func_object__bool____ctor
                  ((System_Predicate_object__o *)__this_00,(Il2CppObject *)__this,
                   (intptr_t)MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass94_0_SyncSettings_b__1,
                   (MethodInfo_B61EB0 *)0x0);
        (__this->fields).__9__1 = __this_00;
        Il2CppCodeGenWriteBarrier(&(__this->fields).__9__1,__this_00);
      }
      bVar3 = System_Linq_Enumerable__Any_object__6b6920
                        (source,(System_Func_TSource__bool__o *)__this_00,
                         (MethodInfo_6B6920 *)MethodInfo_System_Linq_Enumerable_Any_MapScriptComponent);
      return bVar3;
    }
    il2cpp_codegen_raise_invalid_cast_exception(pMVar2);
  }
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel.<>c__DisplayClass94_0$$<SyncSettings>b__1
// il2cpp: bool UI_MapEditorInspectPanel___c__DisplayClass94_0___SyncSettings_b__1 (UI_MapEditorInspectPanel___c__DisplayClass94_0_o* __this, Map_MapScriptComponent_o* item, const MethodInfo* method);
// 0x1822d05f0

bool
UI_MapEditorInspectPanel___c__DisplayClass94_0___SyncSettings_b__1(UI_MapEditorInspectPanel___c__DisplayClass94_0_o* __this, Map_MapScriptComponent_o* item, MethodInfo* method)

{
  Map_MapScriptComponent_o *pMVar1;
  bool bVar2;
  
  if ((item != (Map_MapScriptComponent_o *)0x0) &&
     (pMVar1 = (__this->fields).component, pMVar1 != (Map_MapScriptComponent_o *)0x0)) {
    bVar2 = System_String__op_Equality
                      ((item->fields).ComponentName,(pMVar1->fields).ComponentName,(MethodInfo *)0x0);
    return bVar2;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel.<>c__DisplayClass94_0$$<SyncSettings>b__2
// il2cpp: bool UI_MapEditorInspectPanel___c__DisplayClass94_0___SyncSettings_b__2 (UI_MapEditorInspectPanel___c__DisplayClass94_0_o* __this, Map_MapScriptComponent_o* item, const MethodInfo* method);
// 0x1822d05f0

bool UI_MapEditorInspectPanel___c__DisplayClass94_0___SyncSettings_b__2
               (UI_MapEditorInspectPanel___c__DisplayClass94_0_o *__this,Map_MapScriptComponent_o *item,
               MethodInfo *method)

{
  Map_MapScriptComponent_o *pMVar1;
  bool bVar2;
  
  if ((item != (Map_MapScriptComponent_o *)0x0) &&
     (pMVar1 = (__this->fields).component, pMVar1 != (Map_MapScriptComponent_o *)0x0)) {
    bVar2 = System_String__op_Equality
                      ((item->fields).ComponentName,(pMVar1->fields).ComponentName,(MethodInfo *)0x0);
    return bVar2;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel.<>c__DisplayClass99_0$$.ctor
// il2cpp: void UI_MapEditorInspectPanel___c__DisplayClass99_0___ctor (UI_MapEditorInspectPanel___c__DisplayClass99_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_MapEditorInspectPanel___c__DisplayClass99_0___ctor(UI_MapEditorInspectPanel___c__DisplayClass99_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorInspectPanel.<>c__DisplayClass99_0$$<MergeComponent>b__0
// il2cpp: bool UI_MapEditorInspectPanel___c__DisplayClass99_0___MergeComponent_b__0 (UI_MapEditorInspectPanel___c__DisplayClass99_0_o* __this, System_String_o* parameter, const MethodInfo* method);
// 0x1822d1140

bool UI_MapEditorInspectPanel___c__DisplayClass99_0___MergeComponent_b__0
               (UI_MapEditorInspectPanel___c__DisplayClass99_0_o *__this,System_String_o *parameter,
               MethodInfo *method)

{
  bool bVar1;
  System_String_o *value;
  
  if (Il2CppMethodInitialized_184347593 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_string_get_Key);
    il2cpp_codegen_initialize_runtime_metadata(&":");
    Il2CppMethodInitialized_184347593 = '\x01';
  }
  value = System_String__Concat_1969e50
                    ((__this->fields).changed.fields.key,":",(MethodInfo *)0x0);
  if (parameter != (System_String_o *)0x0) {
    bVar1 = System_String__StartsWith(parameter,value,(MethodInfo *)0x0);
    return bVar1;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel.<RestoreScrollPositionAfterLayout>d__88$$.ctor
// il2cpp: void UI_MapEditorInspectPanel__RestoreScrollPositionAfterLayout_d__88___ctor (UI_MapEditorInspectPanel__RestoreScrollPositionAfterLayout_d__88_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
UI_MapEditorInspectPanel__RestoreScrollPositionAfterLayout_d__88___ctor(UI_MapEditorInspectPanel__RestoreScrollPositionAfterLayout_d__88_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.MapEditorInspectPanel.<RestoreScrollPositionAfterLayout>d__88$$System.IDisposable.Dispose
// il2cpp: void UI_MapEditorInspectPanel__RestoreScrollPositionAfterLayout_d__88__System_IDisposable_Dispose (UI_MapEditorInspectPanel__RestoreScrollPositionAfterLayout_d__88_o* __this, const MethodInfo* method);
// 0x180547020

void
UI_MapEditorInspectPanel__RestoreScrollPositionAfterLayout_d__88__System_IDisposable_Dispose(UI_MapEditorInspectPanel__RestoreScrollPositionAfterLayout_d__88_o* __this, MethodInfo* method)

{
  return;
}


// UI.MapEditorInspectPanel.<RestoreScrollPositionAfterLayout>d__88$$MoveNext
// il2cpp: bool UI_MapEditorInspectPanel__RestoreScrollPositionAfterLayout_d__88__MoveNext (UI_MapEditorInspectPanel__RestoreScrollPositionAfterLayout_d__88_o* __this, const MethodInfo* method);
// 0x1822cf590

bool UI_MapEditorInspectPanel__RestoreScrollPositionAfterLayout_d__88__MoveNext
               (UI_MapEditorInspectPanel__RestoreScrollPositionAfterLayout_d__88_o *__this,MethodInfo *method)

{
  int iVar1;
  UI_MapEditorInspectPanel_o *pUVar2;
  bool bVar3;
  Il2CppObject *__this_00;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_UI_ScrollRect_o *__this_01;
  
  if (Il2CppMethodInitialized_184347594 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_ScrollRect);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForEndOfFrame);
    Il2CppMethodInitialized_184347594 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    __this_00 = (Il2CppObject *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame);
    UnityEngine_WaitForEndOfFrame___ctor
              ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this_00,(MethodInfo *)0x0);
    (__this->fields).__2__current = __this_00;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,__this_00);
    (__this->fields).__1__state = 1;
    return true;
  }
  if (iVar1 == 1) {
    pUVar2 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
    if (pUVar2 == (UI_MapEditorInspectPanel_o *)0x0) goto label_1822cf6f7;
    pUVar4 = (pUVar2->fields).SinglePanel;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      pUVar4 = (pUVar2->fields).SinglePanel;
      if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto label_1822cf6f7;
      pUVar4 = UnityEngine_Transform__GetParent(pUVar4,(MethodInfo *)0x0);
      if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto label_1822cf6f7;
      pUVar4 = UnityEngine_Transform__GetParent(pUVar4,(MethodInfo *)0x0);
      if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto label_1822cf6f7;
      __this_01 = UnityEngine_Component__GetComponent_object_
                            ((UnityEngine_Component_o *)pUVar4,
                             (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_ScrollRect);
    }
    else {
      __this_01 = (UnityEngine_UI_ScrollRect_o *)0x0;
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      if (__this_01 == (UnityEngine_UI_ScrollRect_o *)0x0) {
label_1822cf6f7:
        ThrowNullReferenceException();
      }
      UnityEngine_UI_ScrollRect__set_verticalNormalizedPosition
                (__this_01,(__this->fields).position,(MethodInfo *)0x0);
    }
  }
  return false;
}


// UI.MapEditorInspectPanel.<RestoreScrollPositionAfterLayout>d__88$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_MapEditorInspectPanel__RestoreScrollPositionAfterLayout_d__88__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_MapEditorInspectPanel__RestoreScrollPositionAfterLayout_d__88_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
UI_MapEditorInspectPanel__RestoreScrollPositionAfterLayout_d__88__System_Collections_Generic_IEnumerator_System_Object__get_Current(UI_MapEditorInspectPanel__RestoreScrollPositionAfterLayout_d__88_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// UI.MapEditorInspectPanel.<RestoreScrollPositionAfterLayout>d__88$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_MapEditorInspectPanel__RestoreScrollPositionAfterLayout_d__88__System_Collections_IEnumerator_Reset (UI_MapEditorInspectPanel__RestoreScrollPositionAfterLayout_d__88_o* __this, const MethodInfo* method);
// 0x1822cf700

void UI_MapEditorInspectPanel__RestoreScrollPositionAfterLayout_d__88__System_Collections_IEnumerator_Reset
               (UI_MapEditorInspectPanel__RestoreScrollPositionAfterLayout_d__88_o *__this,MethodInfo *method)

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
                  MethodInfo_UI_MapEditorInspectPanel_RestoreScrollPositionAfterLayout_d__88_System_Collections_IEnumerator_R
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// UI.MapEditorInspectPanel.<RestoreScrollPositionAfterLayout>d__88$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_MapEditorInspectPanel__RestoreScrollPositionAfterLayout_d__88__System_Collections_IEnumerator_get_Current (UI_MapEditorInspectPanel__RestoreScrollPositionAfterLayout_d__88_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
UI_MapEditorInspectPanel__RestoreScrollPositionAfterLayout_d__88__System_Collections_IEnumerator_get_Current(UI_MapEditorInspectPanel__RestoreScrollPositionAfterLayout_d__88_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// UI.MapEditorInspectPanel.<WaitAndEnablePanel>d__89$$.ctor
// il2cpp: void UI_MapEditorInspectPanel__WaitAndEnablePanel_d__89___ctor (UI_MapEditorInspectPanel__WaitAndEnablePanel_d__89_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
UI_MapEditorInspectPanel__WaitAndEnablePanel_d__89___ctor(UI_MapEditorInspectPanel__WaitAndEnablePanel_d__89_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.MapEditorInspectPanel.<WaitAndEnablePanel>d__89$$System.IDisposable.Dispose
// il2cpp: void UI_MapEditorInspectPanel__WaitAndEnablePanel_d__89__System_IDisposable_Dispose (UI_MapEditorInspectPanel__WaitAndEnablePanel_d__89_o* __this, const MethodInfo* method);
// 0x180547020

void
UI_MapEditorInspectPanel__WaitAndEnablePanel_d__89__System_IDisposable_Dispose(UI_MapEditorInspectPanel__WaitAndEnablePanel_d__89_o* __this, MethodInfo* method)

{
  return;
}


// UI.MapEditorInspectPanel.<WaitAndEnablePanel>d__89$$MoveNext
// il2cpp: bool UI_MapEditorInspectPanel__WaitAndEnablePanel_d__89__MoveNext (UI_MapEditorInspectPanel__WaitAndEnablePanel_d__89_o* __this, const MethodInfo* method);
// 0x1822d1300

bool UI_MapEditorInspectPanel__WaitAndEnablePanel_d__89__MoveNext
               (UI_MapEditorInspectPanel__WaitAndEnablePanel_d__89_o *__this,MethodInfo *method)

{
  int iVar1;
  UI_MapEditorInspectPanel_o *pUVar2;
  UnityEngine_Transform_o *__this_00;
  Il2CppObject *__this_01;
  UnityEngine_GameObject_o *__this_02;
  
  if (Il2CppMethodInitialized_184347595 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForEndOfFrame);
    Il2CppMethodInitialized_184347595 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    __this_01 = (Il2CppObject *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame);
    UnityEngine_WaitForEndOfFrame___ctor
              ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this_01,(MethodInfo *)0x0);
    (__this->fields).__2__current = __this_01;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,__this_01);
    (__this->fields).__1__state = 1;
    return true;
  }
  if (iVar1 != 1) {
    return false;
  }
  pUVar2 = (__this->fields).__4__this;
  (__this->fields).__1__state = -1;
  if (((pUVar2 != (UI_MapEditorInspectPanel_o *)0x0) &&
      (__this_00 = (pUVar2->fields).SinglePanel, __this_00 != (UnityEngine_Transform_o *)0x0)) &&
     (__this_02 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_02 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_02,true,(MethodInfo *)0x0);
    return false;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel.<WaitAndEnablePanel>d__89$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_MapEditorInspectPanel__WaitAndEnablePanel_d__89__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_MapEditorInspectPanel__WaitAndEnablePanel_d__89_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
UI_MapEditorInspectPanel__WaitAndEnablePanel_d__89__System_Collections_Generic_IEnumerator_System_Object__get_Current(UI_MapEditorInspectPanel__WaitAndEnablePanel_d__89_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// UI.MapEditorInspectPanel.<WaitAndEnablePanel>d__89$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_MapEditorInspectPanel__WaitAndEnablePanel_d__89__System_Collections_IEnumerator_Reset (UI_MapEditorInspectPanel__WaitAndEnablePanel_d__89_o* __this, const MethodInfo* method);
// 0x1822d13c0

void UI_MapEditorInspectPanel__WaitAndEnablePanel_d__89__System_Collections_IEnumerator_Reset
               (UI_MapEditorInspectPanel__WaitAndEnablePanel_d__89_o *__this,MethodInfo *method)

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
                  MethodInfo_UI_MapEditorInspectPanel_WaitAndEnablePanel_d__89_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// UI.MapEditorInspectPanel.<WaitAndEnablePanel>d__89$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_MapEditorInspectPanel__WaitAndEnablePanel_d__89__System_Collections_IEnumerator_get_Current (UI_MapEditorInspectPanel__WaitAndEnablePanel_d__89_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
UI_MapEditorInspectPanel__WaitAndEnablePanel_d__89__System_Collections_IEnumerator_get_Current(UI_MapEditorInspectPanel__WaitAndEnablePanel_d__89_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// UI.MapEditorInspectPanel$$get_Width
// il2cpp: float UI_MapEditorInspectPanel__get_Width (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x181da8b00

float
UI_MapEditorInspectPanel__get_Width(UI_MapEditorInspectPanel_o* __this, MethodInfo* method)

{
  return 400.0;
}


// UI.MapEditorInspectPanel$$get_Height
// il2cpp: float UI_MapEditorInspectPanel__get_Height (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x18229a1f0

float
UI_MapEditorInspectPanel__get_Height(UI_MapEditorInspectPanel_o* __this, MethodInfo* method)

{
  return 990.0;
}


// UI.MapEditorInspectPanel$$get_TopBarHeight
// il2cpp: float UI_MapEditorInspectPanel__get_TopBarHeight (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x180560480

float
UI_MapEditorInspectPanel__get_TopBarHeight(UI_MapEditorInspectPanel_o* __this, MethodInfo* method)

{
  return 0.0;
}


// UI.MapEditorInspectPanel$$get_BottomBarHeight
// il2cpp: float UI_MapEditorInspectPanel__get_BottomBarHeight (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x180560480

float
UI_MapEditorInspectPanel__get_BottomBarHeight(UI_MapEditorInspectPanel_o* __this, MethodInfo* method)

{
  return 0.0;
}


// UI.MapEditorInspectPanel$$GetWidth
// il2cpp: float UI_MapEditorInspectPanel__GetWidth (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x1822bdde0

float UI_MapEditorInspectPanel__GetWidth(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  Settings_MapEditorSettings_o *pSVar1;
  Settings_FloatSetting_o *pSVar2;
  
  if (Il2CppMethodInitialized_18434754b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    Il2CppMethodInitialized_18434754b = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->MapEditorSettings;
  if ((pSVar1 != (Settings_MapEditorSettings_o *)0x0) &&
     (pSVar2 = (pSVar1->fields).InspectorPanelWidth, pSVar2 != (Settings_FloatSetting_o *)0x0)) {
    return (pSVar2->fields)._value;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel$$GetHeight
// il2cpp: float UI_MapEditorInspectPanel__GetHeight (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x1822bd8a0

float UI_MapEditorInspectPanel__GetHeight(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  byte bVar1;
  UI_BaseMenu_o *pUVar2;
  System_Collections_Generic_List_BasePopup__o *pSVar3;
  bool bVar4;
  UnityEngine_Canvas_o *x;
  UnityEngine_RectTransform_o *pUVar5;
  UnityEngine_Rect_o *pUVar6;
  UnityEngine_Vector2_o UVar7;
  UnityEngine_Vector2_o UVar8;
  UI_BaseMenu_o *x_00;
  float fVar9;
  float fVar10;
  float fStackX_1c;
  float fStackX_24;
  UnityEngine_Rect_o local_38 [3];
  
  if (Il2CppMethodInitialized_18434754c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponentInParent_Canvas);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorInspectPanel);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_18434754c = '\x01';
  }
  x = UnityEngine_Component__GetComponentInParent_object__664f20
                ((UnityEngine_Component_o *)__this,
                 (MethodInfo_664F20 *)MethodInfo_UnityEngine_Component_GetComponentInParent_Canvas);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    if ((x == (UnityEngine_Canvas_o *)0x0) ||
       (pUVar5 = UnityEngine_Component__GetComponent_object_
                           ((UnityEngine_Component_o *)x,
                            (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_RectTransform),
       pUVar5 == (UnityEngine_RectTransform_o *)0x0)) goto label_1822bdb49;
    pUVar6 = UnityEngine_RectTransform__get_rect(local_38,pUVar5,(MethodInfo *)0x0);
    fVar9 = (pUVar6->fields).m_Height;
    if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
    }
    if (0.0 < fVar9) {
      if ((TypeInfo_UI_MapEditorInspectPanel->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel);
      }
      if (Il2CppMethodInitialized_18434754d == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorMenu);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
        Il2CppMethodInitialized_18434754d = '\x01';
      }
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pUVar2 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
      x_00 = (UI_BaseMenu_o *)0x0;
      if (pUVar2 != (UI_BaseMenu_o *)0x0) {
        bVar1 = (TypeInfo_UI_MapEditorMenu->_2).typeHierarchyDepth;
        if (((pUVar2->klass->_2).typeHierarchyDepth < bVar1) ||
           (bVar4 = true,
           (pUVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UI_MapEditorMenu
           )) {
          bVar4 = false;
        }
        if (bVar4) {
          x_00 = pUVar2;
        }
      }
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar4 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar4) {
label_1822bdb10:
        return fVar9 - 55.0;
      }
      if (x_00 != (UI_BaseMenu_o *)0x0) {
        pSVar3 = (*(uint64_t *)((char *)x_00 + 0xb8));
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar4 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pSVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (!bVar4) goto label_1822bdb10;
        pSVar3 = (*(uint64_t *)((char *)x_00 + 0xb8));
        if ((pSVar3 != (System_Collections_Generic_List_BasePopup__o *)0x0) &&
           (pUVar5 = UnityEngine_Component__GetComponent_object_
                               ((UnityEngine_Component_o *)pSVar3,
                                (MethodInfo_6651A0 *)
                                MethodInfo_UnityEngine_Component_GetComponent_RectTransform),
           pUVar5 != (UnityEngine_RectTransform_o *)0x0)) {
          UVar7 = UnityEngine_RectTransform__get_sizeDelta(pUVar5,(MethodInfo *)0x0);
          UVar8 = UnityEngine_RectTransform__get_anchoredPosition(pUVar5,(MethodInfo *)0x0);
          fStackX_1c = UVar7.fields.y;
          fStackX_24 = UVar8.fields.y;
          fVar10 = 0.0;
          if (0.0 <= fStackX_1c - fStackX_24) {
            fVar10 = fStackX_1c - fStackX_24;
          }
          return fVar9 - fVar10;
        }
      }
label_1822bdb49:
      ThrowNullReferenceException();
    }
  }
  fVar9 = (*(__this->klass->vtable)._6_get_Height.methodPtr)
                    (__this,(__this->klass->vtable)._6_get_Height.method);
  return fVar9;
}


// UI.MapEditorInspectPanel$$GetTopOffset
// il2cpp: float UI_MapEditorInspectPanel__GetTopOffset (const MethodInfo* method);
// 0x1822bdc50

float UI_MapEditorInspectPanel__GetTopOffset(MethodInfo *method)

{
  byte bVar1;
  UI_BaseMenu_o *pUVar2;
  System_Collections_Generic_List_BasePopup__o *pSVar3;
  bool bVar4;
  UnityEngine_RectTransform_o *__this;
  UnityEngine_Vector2_o UVar5;
  UnityEngine_Vector2_o UVar6;
  UI_BaseMenu_o *x;
  float fVar7;
  float fStackX_14;
  float fStackX_1c;
  
  if (Il2CppMethodInitialized_18434754d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_18434754d = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pUVar2 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  x = (UI_BaseMenu_o *)0x0;
  if (pUVar2 != (UI_BaseMenu_o *)0x0) {
    bVar1 = (TypeInfo_UI_MapEditorMenu->_2).typeHierarchyDepth;
    if (((pUVar2->klass->_2).typeHierarchyDepth < bVar1) ||
       (bVar4 = true,
       (pUVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UI_MapEditorMenu)) {
      bVar4 = false;
    }
    if (bVar4) {
      x = pUVar2;
    }
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar4) {
    return 55.0;
  }
  if (x != (UI_BaseMenu_o *)0x0) {
    pSVar3 = (*(uint64_t *)((char *)x + 0xb8));
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pSVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar4) {
      return 55.0;
    }
    pSVar3 = (*(uint64_t *)((char *)x + 0xb8));
    if ((pSVar3 != (System_Collections_Generic_List_BasePopup__o *)0x0) &&
       (__this = UnityEngine_Component__GetComponent_object_
                           ((UnityEngine_Component_o *)pSVar3,
                            (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_RectTransform),
       __this != (UnityEngine_RectTransform_o *)0x0)) {
      UVar5 = UnityEngine_RectTransform__get_sizeDelta(__this,(MethodInfo *)0x0);
      UVar6 = UnityEngine_RectTransform__get_anchoredPosition(__this,(MethodInfo *)0x0);
      fStackX_14 = UVar5.fields.y;
      fStackX_1c = UVar6.fields.y;
      fVar7 = 0.0;
      if (0.0 <= fStackX_14 - fStackX_1c) {
        fVar7 = fStackX_14 - fStackX_1c;
      }
      return fVar7;
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel$$get_VerticalSpacing
// il2cpp: float UI_MapEditorInspectPanel__get_VerticalSpacing (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x1820b9980

float
UI_MapEditorInspectPanel__get_VerticalSpacing(UI_MapEditorInspectPanel_o* __this, MethodInfo* method)

{
  return 10.0;
}


// UI.MapEditorInspectPanel$$get_HorizontalPadding
// il2cpp: int32_t UI_MapEditorInspectPanel__get_HorizontalPadding (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x1821d1fa0

int32_t
UI_MapEditorInspectPanel__get_HorizontalPadding(UI_MapEditorInspectPanel_o* __this, MethodInfo* method)

{
  return 0x19;
}


// UI.MapEditorInspectPanel$$get_VerticalPadding
// il2cpp: int32_t UI_MapEditorInspectPanel__get_VerticalPadding (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x181b9be70

int32_t
UI_MapEditorInspectPanel__get_VerticalPadding(UI_MapEditorInspectPanel_o* __this, MethodInfo* method)

{
  return 0xf;
}


// UI.MapEditorInspectPanel$$get_ScrollBar
// il2cpp: bool UI_MapEditorInspectPanel__get_ScrollBar (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
UI_MapEditorInspectPanel__get_ScrollBar(UI_MapEditorInspectPanel_o* __this, MethodInfo* method)

{
  return true;
}


// UI.MapEditorInspectPanel$$GetComponentFieldKey
// il2cpp: System_String_o* UI_MapEditorInspectPanel__GetComponentFieldKey (System_String_o* componentName, System_String_o* fieldName, const MethodInfo* method);
// 0x1822bd830

System_String_o *
UI_MapEditorInspectPanel__GetComponentFieldKey
          (System_String_o *componentName,System_String_o *fieldName,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_18434754e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&":");
    il2cpp_codegen_initialize_runtime_metadata(&"Component:");
    Il2CppMethodInitialized_18434754e = '\x01';
  }
  pSVar1 = System_String__Concat_1969590
                     ("Component:",componentName,":",fieldName,(MethodInfo *)0x0);
  return pSVar1;
}


// UI.MapEditorInspectPanel$$OnComponentFieldChanged
// il2cpp: void UI_MapEditorInspectPanel__OnComponentFieldChanged (UI_MapEditorInspectPanel_o* __this, System_String_o* componentName, System_String_o* fieldName, const MethodInfo* method);
// 0x1822c1400

void UI_MapEditorInspectPanel__OnComponentFieldChanged
               (UI_MapEditorInspectPanel_o *__this,System_String_o *componentName,System_String_o *fieldName,
               MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  System_String_o *item;
  
  if (Il2CppMethodInitialized_18434754f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Remove);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorInspectPanel);
    Il2CppMethodInitialized_18434754f = '\x01';
  }
  __this_00 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._mixedFields;
  if ((TypeInfo_UI_MapEditorInspectPanel->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel);
  }
  if (Il2CppMethodInitialized_18434754e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&":");
    il2cpp_codegen_initialize_runtime_metadata(&"Component:");
    Il2CppMethodInitialized_18434754e = '\x01';
  }
  item = System_String__Concat_1969590
                   ("Component:",componentName,":",fieldName,(MethodInfo *)0x0);
  if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___Remove
              (__this_00,(Il2CppObject *)item,
               (MethodInfo_1766930 *)MethodInfo_System_Collections_Generic_HashSet_string_Remove);
    UI_MapEditorInspectPanel__OnChange(__this,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel$$CreateSection
// il2cpp: UnityEngine_Transform_o* UI_MapEditorInspectPanel__CreateSection (UI_MapEditorInspectPanel_o* __this, System_String_o* key, System_String_o* title, UI_ElementStyle_o* style, bool contextMenu, UnityEngine_Transform_o* parent, const MethodInfo* method);
// 0x1822bd310

UnityEngine_Transform_o *
UI_MapEditorInspectPanel__CreateSection
          (UI_MapEditorInspectPanel_o *__this,System_String_o *key,System_String_o *title,
          UI_ElementStyle_o *style,bool contextMenu,UnityEngine_Transform_o *parent,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  bool bVar1;
  UI_MapEditorInspectPanel___c__DisplayClass62_0_o *object;
  UnityEngine_AudioSettings_AudioConfigurationChangeHandler_o *__this_01;
  UI_CollapsibleSection_o *__this_02;
  UnityEngine_GameObject_o *pUVar2;
  UI_RightClickHandler_o *pUVar3;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_03;
  UnityEngine_Transform_o *pUVar4;
  float spacing;
  
  if (Il2CppMethodInitialized_184347550 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_PointerEventData);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_RightClickHandler);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorInspectPanel);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass62_0_CreateSection_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass62_0_CreateSection_b__1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorInspectPanel_c__DisplayClass62_0);
    Il2CppMethodInitialized_184347550 = '\x01';
  }
  object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel_c__DisplayClass62_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (UI_MapEditorInspectPanel___c__DisplayClass62_0_o *)0x0) {
    (object->fields).key = key;
    Il2CppCodeGenWriteBarrier(&(object->fields).key,key);
    (object->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(object->fields).__4__this,__this);
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
    }
    __this_00 = (System_Collections_Generic_HashSet_object__o *)
                TypeInfo_UI_MapEditorInspectPanel->static_fields->CollapsedSections;
    if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      bVar1 = System_Collections_Generic_HashSet_object___Contains
                        (__this_00,(Il2CppObject *)(object->fields).key,
                         (MethodInfo_1759E40 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
      __this_01 = (UnityEngine_AudioSettings_AudioConfigurationChangeHandler_o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_bool);
      System_Action_bool____ctor
                (__this_01,(Il2CppObject *)object,
                 (intptr_t)MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass62_0_CreateSection_b__0,
                 (MethodInfo *)0x0);
      __this_02 = UI_ElementFactory__CreateCollapsibleSection
                            (parent,style,title,!bVar1,(System_Action_bool__o *)__this_01,(MethodInfo *)0x0);
      if (contextMenu) {
        if (__this_02 == (UI_CollapsibleSection_o *)0x0) goto label_1822bd58c;
        pUVar2 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0)
        ;
        if (pUVar2 == (UnityEngine_GameObject_o *)0x0) goto label_1822bd58c;
        pUVar3 = UnityEngine_GameObject__AddComponent_object_
                           (pUVar2,(MethodInfo_6F4D60 *)
                                   MethodInfo_UnityEngine_GameObject_AddComponent_RightClickHandler);
        __this_03 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                    il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_PointerEventData);
        System_Action_object____ctor
                  (__this_03,(Il2CppObject *)object,
                   (intptr_t)MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass62_0_CreateSection_b__1,
                   (MethodInfo *)0x0);
        if (pUVar3 == (UI_RightClickHandler_o *)0x0) goto label_1822bd58c;
        (pUVar3->fields)._onRightClick = (System_Action_PointerEventData__o *)__this_03;
        Il2CppCodeGenWriteBarrier(&(pUVar3->fields)._onRightClick,__this_03);
      }
      spacing = (*(__this->klass->vtable)._11_get_VerticalSpacing.methodPtr)(__this);
      pUVar2 = UI_ElementFactory__CreateVerticalGroup(parent,spacing,0,(MethodInfo *)0x0);
      if (__this_02 != (UI_CollapsibleSection_o *)0x0) {
        UI_CollapsibleSection__AddChild(__this_02,pUVar2,(MethodInfo *)0x0);
        if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
          pUVar4 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0);
          return pUVar4;
        }
      }
    }
  }
label_1822bd58c:
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel$$ShowSectionContextMenu
// il2cpp: void UI_MapEditorInspectPanel__ShowSectionContextMenu (UI_MapEditorInspectPanel_o* __this, System_String_o* key, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x1822c3cf0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822c4101: jmp 0x1822c4250

void UI_MapEditorInspectPanel__ShowSectionContextMenu
               (UI_MapEditorInspectPanel_o *__this,System_String_o *key,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  UI_MapEditorMenu_o *pUVar1;
  bool bVar2;
  UI_MapEditorInspectPanel___c__DisplayClass63_0_o *object;
  System_String_o *pSVar3;
  System_String_o *_language;
  UI_MapEditorContextMenu_o *pUVar4;
  System_Collections_Generic_List_MapEditorContextMenu_Item__o *__this_00;
  System_Action_o *pSVar5;
  UI_MapEditorContextMenu_Item_o local_d8;
  UI_MapEditorContextMenu_Item_o local_b8;
  UI_MapEditorContextMenu_Item_o local_a0;
  UI_MapEditorContextMenu_Item_o local_88;
  Map_MapScriptComponent_o *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  bool local_58;
  bool bStack_57;
  undefined6 uStack_56;
  UI_MapEditorContextMenu_Item_o local_48;
  
  if (Il2CppMethodInitialized_184347551 == '\0') {
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
              (&MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass63_0_ShowSectionContextMenu_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass63_0_ShowSectionContextMenu_b__1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorInspectPanel_c__DisplayClass63_0);
    il2cpp_codegen_initialize_runtime_metadata(&"Transform");
    il2cpp_codegen_initialize_runtime_metadata(&"Copy");
    il2cpp_codegen_initialize_runtime_metadata(&"Delete");
    il2cpp_codegen_initialize_runtime_metadata(&"Paste");
    il2cpp_codegen_initialize_runtime_metadata(&"Component:");
    Il2CppMethodInitialized_184347551 = '\x01';
  }
  local_88.fields.Label = (System_String_o *)0x0;
  local_88.fields.Action = (System_Action_o *)((ulonglong)local_88.fields.Action._4_4_ << 0x20);
  local_a0.fields.Label = (System_String_o *)0x0;
  local_a0.fields.Action = (System_Action_o *)((ulonglong)local_a0.fields.Action._4_4_ << 0x20);
  local_b8.fields.Label = (System_String_o *)0x0;
  local_b8.fields.Action = (System_Action_o *)((ulonglong)local_b8.fields.Action._4_4_ << 0x20);
  local_70 = (Map_MapScriptComponent_o *)0x0;
  object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel_c__DisplayClass63_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (UI_MapEditorInspectPanel___c__DisplayClass63_0_o *)0x0) {
    (object->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(object->fields).__4__this,__this);
    pUVar1 = (__this->fields)._menu;
    if (pUVar1 != (UI_MapEditorMenu_o *)0x0) {
      bVar2 = UI_MapEditorMenu__IsPopupActive(pUVar1,(MethodInfo *)0x0);
      if (!bVar2) {
        if ((__this->fields)._contextMenu == (UI_MapEditorContextMenu_o *)0x0) {
          pUVar1 = (__this->fields)._menu;
          if (pUVar1 == (UI_MapEditorMenu_o *)0x0) goto label_1822c428a;
          pSVar3 = (System_String_o *)
                   UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
          _language = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                                (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
          pUVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MapEditorContextMenu);
          UI_MapEditorContextMenu___ctor
                    ((UnityEngine_Android_AndroidLocale_o *)pUVar4,pSVar3,_language,(MethodInfo *)0x0);
          (__this->fields)._contextMenu = pUVar4;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._contextMenu,pUVar4);
        }
        bVar2 = System_String__op_Equality(key,"Transform",(MethodInfo *)0x0);
        if (bVar2) {
          pUVar4 = (__this->fields)._contextMenu;
          __this_00 = il2cpp_codegen_object_new
                                ((Il2CppClass *)
                                 TypeInfo_System_Collections_Generic_List_MapEditorContextMenu_Item);
          System_Collections_Generic_List_MapEditorContextMenu_Item____ctor
                    ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
                     (MethodInfo_92A240 *)
                     MethodInfo_System_Collections_Generic_List_MapEditorContextMenu_Item_ctor);
          pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
          System_Action___ctor
                    ((UnityEngine_Font_FontTextureRebuildCallback_o *)pSVar5,(Il2CppObject *)__this,
                     (intptr_t)MethodInfo_UI_MapEditorInspectPanel_CopyTransform,(MethodInfo *)0x0);
          local_48.fields.Enabled = false;
          local_48.fields.SeparatorBefore = false;
          local_48.fields._18_6_ = 0;
          local_48.fields.Label = (System_String_o *)0x0;
          local_48.fields.Action = (System_Action_o *)0x0;
          UI_MapEditorContextMenu_Item___ctor
                    (&local_48,"Copy",pSVar5,true,false,(MethodInfo *)0x0);
          if (__this_00 == (System_Collections_Generic_List_MapEditorContextMenu_Item__o *)0x0) {
label_1822c4296:
            ThrowNullReferenceException();
          }
          local_68 = local_48.fields.Label._0_4_;
          uStack_64 = local_48.fields.Label._4_4_;
          uStack_60 = local_48.fields.Action._0_4_;
          uStack_5c = local_48.fields.Action._4_4_;
          local_58 = local_48.fields.Enabled;
          bStack_57 = local_48.fields.SeparatorBefore;
          uStack_56 = local_48.fields._18_6_;
          il2cpp_runtime_helper_18000e230(__this_00,&local_68,
                        MethodInfo_System_Collections_Generic_List_MapEditorContextMenu_Item_Add);
          pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
          System_Action___ctor
                    ((UnityEngine_Font_FontTextureRebuildCallback_o *)pSVar5,(Il2CppObject *)__this,
                     (intptr_t)MethodInfo_UI_MapEditorInspectPanel_PasteTransform,(MethodInfo *)0x0);
          if ((TypeInfo_UI_MapEditorInspectPanel->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel);
          }
          bVar2 = UI_MapEditorInspectPanel__TryReadTransformClipboard
                            ((UnityEngine_Vector3_o *)&local_88,(UnityEngine_Vector3_o *)&local_a0,
                             (UnityEngine_Vector3_o *)&local_b8,(MethodInfo *)0x0);
          local_d8.fields.Enabled = false;
          local_d8.fields.SeparatorBefore = false;
          local_d8.fields._18_6_ = 0;
          local_d8.fields.Label = (System_String_o *)0x0;
          local_d8.fields.Action = (System_Action_o *)0x0;
          UI_MapEditorContextMenu_Item___ctor
                    (&local_d8,"Paste",pSVar5,bVar2,false,(MethodInfo *)0x0);
          local_68 = local_d8.fields.Label._0_4_;
          uStack_64 = local_d8.fields.Label._4_4_;
          uStack_60 = local_d8.fields.Action._0_4_;
          uStack_5c = local_d8.fields.Action._4_4_;
          local_58 = local_d8.fields.Enabled;
          bStack_57 = local_d8.fields.SeparatorBefore;
          uStack_56 = local_d8.fields._18_6_;
          il2cpp_runtime_helper_18000e230(__this_00,&local_68,
                        MethodInfo_System_Collections_Generic_List_MapEditorContextMenu_Item_Add);
          if (pUVar4 == (UI_MapEditorContextMenu_o *)0x0) goto label_1822c4296;
        }
        else {
          if (key == (System_String_o *)0x0) goto label_1822c428a;
          bVar2 = System_String__StartsWith(key,"Component:",(MethodInfo *)0x0);
          if (!bVar2) {
            return;
          }
          if ("Component:" == (System_String_o *)0x0) {
label_1822c4290:
            ThrowNullReferenceException();
          }
          pSVar3 = System_String__Substring
                             (key,("Component:"->fields)._stringLength,(MethodInfo *)0x0);
          (object->fields).componentName = pSVar3;
          Il2CppCodeGenWriteBarrier(&(object->fields).componentName,pSVar3);
          bVar2 = UI_MapEditorInspectPanel__TryReadComponentClipboard(__this,&local_70,(MethodInfo *)0x0);
          pUVar4 = (__this->fields)._contextMenu;
          __this_00 = il2cpp_codegen_object_new
                                ((Il2CppClass *)
                                 TypeInfo_System_Collections_Generic_List_MapEditorContextMenu_Item);
          System_Collections_Generic_List_MapEditorContextMenu_Item____ctor
                    ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
                     (MethodInfo_92A240 *)
                     MethodInfo_System_Collections_Generic_List_MapEditorContextMenu_Item_ctor);
          pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
          System_Action___ctor
                    ((UnityEngine_Font_FontTextureRebuildCallback_o *)pSVar5,(Il2CppObject *)object,
                     (intptr_t)
                     MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass63_0_ShowSectionContextMenu_b__0,
                     (MethodInfo *)0x0);
          local_88.fields.Label = (System_String_o *)0x0;
          local_88.fields.Action = (System_Action_o *)0x0;
          local_88.fields.Enabled = false;
          local_88.fields.SeparatorBefore = false;
          local_88.fields._18_6_ = 0;
          UI_MapEditorContextMenu_Item___ctor
                    (&local_88,"Copy",pSVar5,true,false,(MethodInfo *)0x0);
          if (__this_00 == (System_Collections_Generic_List_MapEditorContextMenu_Item__o *)0x0)
          goto label_1822c4290;
          local_d8.fields.Label = local_88.fields.Label;
          local_d8.fields.Action = local_88.fields.Action;
          local_d8.fields.Enabled = local_88.fields.Enabled;
          local_d8.fields.SeparatorBefore = local_88.fields.SeparatorBefore;
          local_d8.fields._18_6_ = local_88.fields._18_6_;
          il2cpp_runtime_helper_18000e230(__this_00,&local_d8,
                        MethodInfo_System_Collections_Generic_List_MapEditorContextMenu_Item_Add);
          pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
          System_Action___ctor
                    ((UnityEngine_Font_FontTextureRebuildCallback_o *)pSVar5,(Il2CppObject *)__this,
                     (intptr_t)MethodInfo_UI_MapEditorInspectPanel_PasteComponent,(MethodInfo *)0x0);
          local_a0.fields.Enabled = false;
          local_a0.fields.SeparatorBefore = false;
          local_a0.fields._18_6_ = 0;
          local_a0.fields.Label = (System_String_o *)0x0;
          local_a0.fields.Action = (System_Action_o *)0x0;
          UI_MapEditorContextMenu_Item___ctor
                    (&local_a0,"Paste",pSVar5,bVar2,false,(MethodInfo *)0x0);
          local_d8.fields.Label = local_a0.fields.Label;
          local_d8.fields.Action = local_a0.fields.Action;
          local_d8.fields.Enabled = local_a0.fields.Enabled;
          local_d8.fields.SeparatorBefore = local_a0.fields.SeparatorBefore;
          local_d8.fields._18_6_ = local_a0.fields._18_6_;
          il2cpp_runtime_helper_18000e230(__this_00,&local_d8,
                        MethodInfo_System_Collections_Generic_List_MapEditorContextMenu_Item_Add);
          pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
          System_Action___ctor
                    ((UnityEngine_Font_FontTextureRebuildCallback_o *)pSVar5,(Il2CppObject *)object,
                     (intptr_t)
                     MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass63_0_ShowSectionContextMenu_b__1,
                     (MethodInfo *)0x0);
          local_b8.fields.Enabled = false;
          local_b8.fields.SeparatorBefore = false;
          local_b8.fields._18_6_ = 0;
          local_b8.fields.Label = (System_String_o *)0x0;
          local_b8.fields.Action = (System_Action_o *)0x0;
          UI_MapEditorContextMenu_Item___ctor
                    (&local_b8,"Delete",pSVar5,true,true,(MethodInfo *)0x0);
          local_d8.fields.Label = local_b8.fields.Label;
          local_d8.fields.Action = local_b8.fields.Action;
          local_d8.fields.Enabled = local_b8.fields.Enabled;
          local_d8.fields.SeparatorBefore = local_b8.fields.SeparatorBefore;
          local_d8.fields._18_6_ = local_b8.fields._18_6_;
          il2cpp_runtime_helper_18000e230(__this_00,&local_d8,
                        MethodInfo_System_Collections_Generic_List_MapEditorContextMenu_Item_Add);
          if (pUVar4 == (UI_MapEditorContextMenu_o *)0x0) goto label_1822c4290;
        }
        UI_MapEditorContextMenu__Show
                  (pUVar4,eventData,(System_Collections_Generic_IList_MapEditorContextMenu_Item__o *)__this_00
                   ,(MethodInfo *)0x0);
      }
      return;
    }
  }
label_1822c428a:
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel$$CopyTransform
// il2cpp: void UI_MapEditorInspectPanel__CopyTransform (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x1822bcac0

void UI_MapEditorInspectPanel__CopyTransform(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  byte bVar1;
  Map_MapObject_o *pMVar2;
  Map_MapScriptBaseObject_o *__this_00;
  System_String_array *value;
  UnityEngine_Vector3_o *pUVar3;
  System_String_o *pSVar4;
  System_Text_Encoding_o *pSVar5;
  System_Byte_array *inArray;
  UnityEngine_Vector3_Fields local_38;
  UnityEngine_Vector3_o local_28 [2];
  
  if (Il2CppMethodInitialized_184347552 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Convert);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GUIUtility);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorInspectPanel);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptSceneObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"|");
    il2cpp_codegen_initialize_runtime_metadata(&"AOTTG2_TRANSFORM_V1:");
    Il2CppMethodInitialized_184347552 = '\x01';
  }
  pMVar2 = (__this->fields)._mapObject;
  if (pMVar2 != (Map_MapObject_o *)0x0) {
    __this_00 = (pMVar2->fields).ScriptObject;
    if (__this_00 == (Map_MapScriptBaseObject_o *)0x0) {
      SZArrayNew(TypeInfo_string_array,3);
    }
    else {
      bVar1 = (TypeInfo_Map_MapScriptSceneObject->_2).typeHierarchyDepth;
      if (((__this_00->klass->_2).typeHierarchyDepth < bVar1) ||
         ((__this_00->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_Map_MapScriptSceneObject)) {
        il2cpp_codegen_raise_invalid_cast_exception(__this_00);
      }
      value = (System_String_array *)SZArrayNew(TypeInfo_string_array,3);
      pUVar3 = Map_MapScriptBaseObject__GetPosition
                         ((UnityEngine_Vector3_o *)&local_38,__this_00,(MethodInfo *)0x0);
      local_38.x = (pUVar3->fields).x;
      local_38.y = (pUVar3->fields).y;
      local_38.z = (pUVar3->fields).z;
      if ((TypeInfo_UI_MapEditorInspectPanel->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel);
      }
      pSVar4 = UI_MapEditorInspectPanel__SerializeVector((UnityEngine_Vector3_o *)&local_38,(MethodInfo *)0x0)
      ;
      if (value != (System_String_array *)0x0) {
        if ((int)value->max_length != 0) {
          value->m_Items[0] = pSVar4;
          Il2CppCodeGenWriteBarrier(value->m_Items,pSVar4);
          pUVar3 = Map_MapScriptBaseObject__GetRotation(local_28,__this_00,(MethodInfo *)0x0);
          local_38.x = (pUVar3->fields).x;
          local_38.y = (pUVar3->fields).y;
          local_38.z = (pUVar3->fields).z;
          pSVar4 = UI_MapEditorInspectPanel__SerializeVector
                             ((UnityEngine_Vector3_o *)&local_38,(MethodInfo *)0x0);
          if (1 < (uint)value->max_length) {
            value->m_Items[1] = pSVar4;
            Il2CppCodeGenWriteBarrier(value->m_Items + 1,pSVar4);
            pUVar3 = Map_MapScriptBaseObject__GetScale(local_28,__this_00,(MethodInfo *)0x0);
            local_38.x = (pUVar3->fields).x;
            local_38.y = (pUVar3->fields).y;
            local_38.z = (pUVar3->fields).z;
            pSVar4 = UI_MapEditorInspectPanel__SerializeVector
                               ((UnityEngine_Vector3_o *)&local_38,(MethodInfo *)0x0);
            if (2 < (uint)value->max_length) {
              value->m_Items[2] = pSVar4;
              Il2CppCodeGenWriteBarrier(value->m_Items + 2,pSVar4);
              pSVar4 = System_String__Join("|",value,(MethodInfo *)0x0);
              pSVar5 = System_Text_Encoding__get_UTF8((MethodInfo *)0x0);
              if (pSVar5 != (System_Text_Encoding_o *)0x0) {
                inArray = (*(pSVar5->klass->vtable)._18_GetBytes.methodPtr)
                                    (pSVar5,pSVar4,(pSVar5->klass->vtable)._18_GetBytes.method);
                if ((TypeInfo_System_Convert->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Convert);
                }
                pSVar4 = System_Convert__ToBase64String(inArray,(MethodInfo *)0x0);
                pSVar4 = System_String__Concat_1969e50("AOTTG2_TRANSFORM_V1:",pSVar4,(MethodInfo *)0x0);
                if ((TypeInfo_UnityEngine_GUIUtility->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_GUIUtility);
                }
                UnityEngine_GUIUtility__set_systemCopyBuffer(pSVar4,(MethodInfo *)0x0);
                return;
              }
              goto label_1822bcd53;
            }
          }
        }
        ThrowIndexOutOfRangeException();
      }
    }
  }
label_1822bcd53:
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel$$SerializeVector
// il2cpp: System_String_o* UI_MapEditorInspectPanel__SerializeVector (UnityEngine_Vector3_o value, const MethodInfo* method);
// 0x1822c39c0

System_String_o * UI_MapEditorInspectPanel__SerializeVector(UnityEngine_Vector3_o *value,MethodInfo *method)

{
  System_String_array *value_00;
  System_Globalization_CultureInfo_o *pSVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_184347553 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"R");
    il2cpp_codegen_initialize_runtime_metadata(&",");
    Il2CppMethodInitialized_184347553 = '\x01';
  }
  value_00 = (System_String_array *)SZArrayNew(TypeInfo_string_array,3);
  if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
  }
  pSVar1 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
  pSVar2 = System_Single__ToString_1b4a0d0
                     ((float *)value,"R",(System_IFormatProvider_o *)pSVar1,
                      (MethodInfo *)0x0);
  if (value_00 != (System_String_array *)0x0) {
    if ((int)value_00->max_length != 0) {
      value_00->m_Items[0] = pSVar2;
      Il2CppCodeGenWriteBarrier(value_00->m_Items,pSVar2);
      pSVar1 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
      pSVar2 = System_Single__ToString_1b4a0d0
                         (&(value->fields).y,"R",(System_IFormatProvider_o *)pSVar1,
                          (MethodInfo *)0x0);
      if (1 < (uint)value_00->max_length) {
        value_00->m_Items[1] = pSVar2;
        Il2CppCodeGenWriteBarrier(value_00->m_Items + 1,pSVar2);
        pSVar1 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
        pSVar2 = System_Single__ToString_1b4a0d0
                           (&(value->fields).z,"R",(System_IFormatProvider_o *)pSVar1,
                            (MethodInfo *)0x0);
        if (2 < (uint)value_00->max_length) {
          value_00->m_Items[2] = pSVar2;
          Il2CppCodeGenWriteBarrier(value_00->m_Items + 2,pSVar2);
          pSVar2 = System_String__Join(",",value_00,(MethodInfo *)0x0);
          return pSVar2;
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel$$TryReadTransformClipboard
// il2cpp: bool UI_MapEditorInspectPanel__TryReadTransformClipboard (UnityEngine_Vector3_o* position, UnityEngine_Vector3_o* rotation, UnityEngine_Vector3_o* scale, const MethodInfo* method);
// 0x1822c9b40
// eh: try 0x1822c9c33..0x1822c9d92 -> pad 0x18333ff70 (+1 call sites) catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_FormatException]
// asm: 28 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18333ff70: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333ff75: push rbx
// asm:   0x18333ff76: push rbp
// asm:   0x18333ff77: push rdi
// asm:   0x18333ff78: sub rsp, 0x20
// asm:   0x18333ff7c: mov rbp, rdx
// asm:   0x18333ff7f: mov rdi, qword ptr [rbp + 0x28]
// asm:   0x18333ff83: mov rax, qword ptr [rdi]
// asm:   0x18333ff86: mov rbx, qword ptr [rax]
// asm:   0x18333ff89: lea rcx, [rip + 0xd40260]  ; TypeInfo_System_FormatException
// asm:   0x18333ff90: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x18333ff95: mov rcx, rax
// asm:   0x18333ff98: mov rdx, rbx
// asm:   0x18333ff9b: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x18333ffa0: test al, al
// asm:   0x18333ffa2: je 0x18333ffb0
// asm:   0x18333ffa4: movabs rax, 0
// asm:   0x18333ffae: jmp 0x18333ffc8
// asm:   0x18333ffb0: mov rax, qword ptr [rdi]
// asm:   0x18333ffb3: mov qword ptr [rbp + 0x20], rax
// asm:   0x18333ffb7: lea rdx, [rip + 0xc9bfca]
// asm:   0x18333ffbe: lea rcx, [rbp + 0x20]
// asm:   0x18333ffc2: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x18333ffc8: add rsp, 0x20
// asm:   0x18333ffcc: pop rdi
// asm:   0x18333ffcd: pop rbp
// asm:   0x18333ffce: pop rbx
// asm:   0x18333ffcf: ret 

bool UI_MapEditorInspectPanel__TryReadTransformClipboard
               (UnityEngine_Vector3_o *position,UnityEngine_Vector3_o *rotation,UnityEngine_Vector3_o *scale,
               MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  UnityEngine_Vector3_StaticFields *pUVar4;
  bool bVar5;
  System_String_o *pSVar6;
  System_Text_Encoding_o *pSVar7;
  System_Byte_array *pSVar8;
  System_String_array *pSVar9;
  
  if (Il2CppMethodInitialized_184347554 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Convert);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GUIUtility);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorInspectPanel);
    il2cpp_codegen_initialize_runtime_metadata(&"AOTTG2_TRANSFORM_V1:");
    Il2CppMethodInitialized_184347554 = '\x01';
  }
  if (Il2CppMethodInitialized_18433dbea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433dbea = '\x01';
  }
  pUVar4 = TypeInfo_UnityEngine_Vector3->static_fields;
  fVar3 = (pUVar4->zeroVector).fields.z;
  uVar1 = (pUVar4->zeroVector).fields.x;
  uVar2 = (pUVar4->zeroVector).fields.y;
  (scale->fields).x = (float)uVar1;
  (scale->fields).y = (float)uVar2;
  (scale->fields).z = fVar3;
  (rotation->fields).x = (float)uVar1;
  (rotation->fields).y = (float)uVar2;
  (rotation->fields).z = fVar3;
  (position->fields).x = (float)uVar1;
  (position->fields).y = (float)uVar2;
  (position->fields).z = fVar3;
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
      pSVar6 = (*(pSVar7->klass->vtable)._34_GetString.methodPtr)
                         (pSVar7,pSVar8,(pSVar7->klass->vtable)._34_GetString.method);
      if (pSVar6 == (System_String_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar9 = System_String__Split(pSVar6,0x7c,0,(MethodInfo *)0x0);
      if (pSVar9 != (System_String_array *)0x0) {
        if ((int)pSVar9->max_length == 3) {
          pSVar6 = pSVar9->m_Items[0];
          if ((TypeInfo_UI_MapEditorInspectPanel->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel);
          }
          bVar5 = UI_MapEditorInspectPanel__TryParseVector(pSVar6,position,(MethodInfo *)0x0);
          if (bVar5) {
            if ((uint)pSVar9->max_length < 2) {
              ThrowIndexOutOfRangeException();
            }
            pSVar6 = pSVar9->m_Items[1];
            if ((TypeInfo_UI_MapEditorInspectPanel->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel);
            }
            bVar5 = UI_MapEditorInspectPanel__TryParseVector(pSVar6,rotation,(MethodInfo *)0x0);
            if (bVar5) {
              if (2 < (uint)pSVar9->max_length) {
                pSVar6 = pSVar9->m_Items[2];
                if ((TypeInfo_UI_MapEditorInspectPanel->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel);
                }
                bVar5 = UI_MapEditorInspectPanel__TryParseVector(pSVar6,scale,(MethodInfo *)0x0);
                return bVar5;
              }
              ThrowIndexOutOfRangeException();
            }
          }
        }
        return false;
      }
      ThrowNullReferenceException();
    }
  }
  return false;
}


// UI.MapEditorInspectPanel$$TryParseVector
// il2cpp: bool UI_MapEditorInspectPanel__TryParseVector (System_String_o* serialized, UnityEngine_Vector3_o* value, const MethodInfo* method);
// 0x1822c9760

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
  float local_res8 [2];
  float local_res10 [4];
  float local_res20 [2];
  
  if (Il2CppMethodInitialized_184347555 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    Il2CppMethodInitialized_184347555 = '\x01';
  }
  local_res8[0] = 0.0;
  local_res10[0] = 0.0;
  local_res20[0] = 0.0;
  if (Il2CppMethodInitialized_18433dbea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433dbea = '\x01';
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
        if ((int)pSVar6->max_length == 0) {
label_1822c993a:
          ThrowIndexOutOfRangeException();
        }
        pSVar3 = pSVar6->m_Items[0];
        if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
        }
        pSVar7 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
        bVar5 = System_Single__TryParse_1b4a540
                          (pSVar3,0xa7,(System_IFormatProvider_o *)pSVar7,local_res8,(MethodInfo *)0x0);
        if (bVar5) {
          if ((uint)pSVar6->max_length < 2) goto label_1822c993a;
          pSVar3 = pSVar6->m_Items[1];
          if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
          }
          pSVar7 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
          bVar5 = System_Single__TryParse_1b4a540
                            (pSVar3,0xa7,(System_IFormatProvider_o *)pSVar7,local_res10,(MethodInfo *)0x0);
          if (bVar5) {
            if ((uint)pSVar6->max_length < 3) goto label_1822c993a;
            pSVar3 = pSVar6->m_Items[2];
            if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
            }
            pSVar7 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
            bVar5 = System_Single__TryParse_1b4a540
                              (pSVar3,0xa7,(System_IFormatProvider_o *)pSVar7,local_res20,(MethodInfo *)0x0);
            if (bVar5) {
              (value->fields).x = local_res8[0];
              (value->fields).y = local_res10[0];
              (value->fields).z = local_res20[0];
              return true;
            }
          }
        }
      }
      return false;
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel$$PasteTransform
// il2cpp: void UI_MapEditorInspectPanel__PasteTransform (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x1822c1ac0

void UI_MapEditorInspectPanel__PasteTransform(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  Il2CppObject *object;
  Settings_FloatSetting_o *pSVar1;
  UI_MapEditorMenu_o *__this_01;
  bool bVar2;
  System_Predicate_T__o *match;
  UnityEngine_Vector3_Fields local_38;
  UnityEngine_Vector3_Fields local_28;
  UnityEngine_Vector3_Fields local_18;
  
  if (Il2CppMethodInitialized_184347556 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_string_RemoveWhere);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorInspectPanel);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Predicate_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorInspectPanel_c_PasteTransform_b__68_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorInspectPanel_c);
    Il2CppMethodInitialized_184347556 = '\x01';
  }
  local_38.x = 0.0;
  local_38.y = 0.0;
  local_38.z = 0.0;
  local_28.x = 0.0;
  local_28.y = 0.0;
  local_28.z = 0.0;
  local_18.x = 0.0;
  local_18.y = 0.0;
  local_18.z = 0.0;
  if ((TypeInfo_UI_MapEditorInspectPanel->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel);
  }
  bVar2 = UI_MapEditorInspectPanel__TryReadTransformClipboard
                    ((UnityEngine_Vector3_o *)&local_38,(UnityEngine_Vector3_o *)&local_28,
                     (UnityEngine_Vector3_o *)&local_18,(MethodInfo *)0x0);
  if (!bVar2) {
    return;
  }
  __this_00 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._mixedFields;
  if ((TypeInfo_UI_MapEditorInspectPanel_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel_c);
  }
  match = (System_Predicate_T__o *)TypeInfo_UI_MapEditorInspectPanel_c->static_fields->__9__68_0;
  if (match == (System_Predicate_T__o *)0x0) {
    if ((TypeInfo_UI_MapEditorInspectPanel_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel_c);
    }
    object = (Il2CppObject *)TypeInfo_UI_MapEditorInspectPanel_c->static_fields->__9;
    match = (System_Predicate_T__o *)
            il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Predicate_string);
    System_Predicate_object____ctor
              ((System_Predicate_object__o *)match,object,
               (intptr_t)MethodInfo_UI_MapEditorInspectPanel_c_PasteTransform_b__68_0,(MethodInfo_B61EB0 *)0x0
              );
    TypeInfo_UI_MapEditorInspectPanel_c->static_fields->__9__68_0 = (System_Predicate_string__o *)match;
    Il2CppCodeGenWriteBarrier(&TypeInfo_UI_MapEditorInspectPanel_c->static_fields->__9__68_0,match);
  }
  if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___RemoveWhere
              (__this_00,match,
               (MethodInfo_1766120 *)MethodInfo_System_Collections_Generic_HashSet_string_RemoveWhere);
    pSVar1 = (__this->fields)._positionX;
    if (pSVar1 != (Settings_FloatSetting_o *)0x0) {
      Settings_TypedSetting_float___set_Value
                ((Settings_TypedSetting_float__o *)pSVar1,local_38.x,
                 (MethodInfo_E8F490 *)MethodInfo_Settings_TypedSetting_float_set_Value);
      pSVar1 = (__this->fields)._positionY;
      if (pSVar1 != (Settings_FloatSetting_o *)0x0) {
        Settings_TypedSetting_float___set_Value
                  ((Settings_TypedSetting_float__o *)pSVar1,local_38.y,
                   (MethodInfo_E8F490 *)MethodInfo_Settings_TypedSetting_float_set_Value);
        pSVar1 = (__this->fields)._positionZ;
        if (pSVar1 != (Settings_FloatSetting_o *)0x0) {
          Settings_TypedSetting_float___set_Value
                    ((Settings_TypedSetting_float__o *)pSVar1,local_38.z,
                     (MethodInfo_E8F490 *)MethodInfo_Settings_TypedSetting_float_set_Value);
          pSVar1 = (__this->fields)._rotationX;
          if (pSVar1 != (Settings_FloatSetting_o *)0x0) {
            Settings_TypedSetting_float___set_Value
                      ((Settings_TypedSetting_float__o *)pSVar1,local_28.x,
                       (MethodInfo_E8F490 *)MethodInfo_Settings_TypedSetting_float_set_Value);
            pSVar1 = (__this->fields)._rotationY;
            if (pSVar1 != (Settings_FloatSetting_o *)0x0) {
              Settings_TypedSetting_float___set_Value
                        ((Settings_TypedSetting_float__o *)pSVar1,local_28.y,
                         (MethodInfo_E8F490 *)MethodInfo_Settings_TypedSetting_float_set_Value);
              pSVar1 = (__this->fields)._rotationZ;
              if (pSVar1 != (Settings_FloatSetting_o *)0x0) {
                Settings_TypedSetting_float___set_Value
                          ((Settings_TypedSetting_float__o *)pSVar1,local_28.z,
                           (MethodInfo_E8F490 *)MethodInfo_Settings_TypedSetting_float_set_Value);
                pSVar1 = (__this->fields)._scaleX;
                if (pSVar1 != (Settings_FloatSetting_o *)0x0) {
                  Settings_TypedSetting_float___set_Value
                            ((Settings_TypedSetting_float__o *)pSVar1,local_18.x,
                             (MethodInfo_E8F490 *)MethodInfo_Settings_TypedSetting_float_set_Value);
                  pSVar1 = (__this->fields)._scaleY;
                  if (pSVar1 != (Settings_FloatSetting_o *)0x0) {
                    Settings_TypedSetting_float___set_Value
                              ((Settings_TypedSetting_float__o *)pSVar1,local_18.y,
                               (MethodInfo_E8F490 *)MethodInfo_Settings_TypedSetting_float_set_Value);
                    pSVar1 = (__this->fields)._scaleZ;
                    if (pSVar1 != (Settings_FloatSetting_o *)0x0) {
                      Settings_TypedSetting_float___set_Value
                                ((Settings_TypedSetting_float__o *)pSVar1,local_18.z,
                                 (MethodInfo_E8F490 *)MethodInfo_Settings_TypedSetting_float_set_Value);
                      UI_MapEditorInspectPanel__OnChange(__this,(MethodInfo *)0x0);
                      __this_01 = (__this->fields)._menu;
                      if (__this_01 != (UI_MapEditorMenu_o *)0x0) {
                        UI_MapEditorMenu__ShowInspector_22cd590
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
// 0x1822bc840

void UI_MapEditorInspectPanel__CopyComponent
               (UI_MapEditorInspectPanel_o *__this,System_String_o *componentName,MethodInfo *method)

{
  byte bVar1;
  Map_MapObject_o *pMVar2;
  Map_MapScriptBaseObject_o *pMVar3;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  UI_MapEditorInspectPanel___c__DisplayClass69_0_o *object;
  System_Func_MapScriptComponent__bool__o *__this_00;
  Map_MapScriptComponent_o *pMVar4;
  System_Text_Encoding_o *pSVar5;
  System_String_o *pSVar6;
  System_Byte_array *inArray;
  
  if (Il2CppMethodInitialized_184347557 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Convert);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_FirstOrDefault_MapScriptComponent);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_MapScriptComponent_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GUIUtility);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptSceneObject);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass69_0_CopyComponent_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorInspectPanel_c__DisplayClass69_0);
    il2cpp_codegen_initialize_runtime_metadata(&"AOTTG2_COMPONENT_V1:");
    Il2CppMethodInitialized_184347557 = '\x01';
  }
  object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel_c__DisplayClass69_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (UI_MapEditorInspectPanel___c__DisplayClass69_0_o *)0x0) {
    (object->fields).componentName = componentName;
    Il2CppCodeGenWriteBarrier(&(object->fields).componentName,componentName);
    pMVar2 = (__this->fields)._mapObject;
    if ((pMVar2 != (Map_MapObject_o *)0x0) &&
       (pMVar3 = (pMVar2->fields).ScriptObject, pMVar3 != (Map_MapScriptBaseObject_o *)0x0)) {
      bVar1 = (TypeInfo_Map_MapScriptSceneObject->_2).typeHierarchyDepth;
      if (((pMVar3->klass->_2).typeHierarchyDepth < bVar1) ||
         ((pMVar3->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_Map_MapScriptSceneObject)) {
        il2cpp_codegen_raise_invalid_cast_exception(pMVar3);
      }
      source = *(System_Collections_Generic_IEnumerable_TSource__o **)&(*(uint32_t *)((char *)pMVar3 + 0x80));
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_MapScriptComponent_bool);
      System_Func_object__bool____ctor
                ((System_Predicate_object__o *)__this_00,(Il2CppObject *)object,
                 (intptr_t)MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass69_0_CopyComponent_b__0,
                 (MethodInfo_B61EB0 *)0x0);
      pMVar4 = System_Linq_Enumerable__FirstOrDefault_object__6bd2c0
                         (source,(System_Func_TSource__bool__o *)__this_00,
                          (MethodInfo_6BD2C0 *)
                          MethodInfo_System_Linq_Enumerable_FirstOrDefault_MapScriptComponent);
      if (pMVar4 != (Map_MapScriptComponent_o *)0x0) {
        pSVar5 = System_Text_Encoding__get_UTF8((MethodInfo *)0x0);
        pSVar6 = (*(pMVar4->klass->vtable)._8_Serialize.methodPtr)
                           (pMVar4,(pMVar4->klass->vtable)._8_Serialize.method);
        if (pSVar5 == (System_Text_Encoding_o *)0x0) goto label_1822bca30;
        inArray = (*(pSVar5->klass->vtable)._18_GetBytes.methodPtr)
                            (pSVar5,pSVar6,(pSVar5->klass->vtable)._18_GetBytes.method);
        if ((TypeInfo_System_Convert->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Convert);
        }
        pSVar6 = System_Convert__ToBase64String(inArray,(MethodInfo *)0x0);
        pSVar6 = System_String__Concat_1969e50("AOTTG2_COMPONENT_V1:",pSVar6,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_GUIUtility->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_GUIUtility);
        }
        UnityEngine_GUIUtility__set_systemCopyBuffer(pSVar6,(MethodInfo *)0x0);
      }
      return;
    }
  }
label_1822bca30:
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel$$TryReadComponentClipboard
// il2cpp: bool UI_MapEditorInspectPanel__TryReadComponentClipboard (UI_MapEditorInspectPanel_o* __this, Map_MapScriptComponent_o** component, const MethodInfo* method);
// 0x1822c9940
// eh: try 0x1822c9a03..0x1822c9b37 -> pad 0x183331bd0 (+1 call sites) catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// asm: 28 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x183331bd0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183331bd5: push rbx
// asm:   0x183331bd6: push rbp
// asm:   0x183331bd7: push rdi
// asm:   0x183331bd8: sub rsp, 0x20
// asm:   0x183331bdc: mov rbp, rdx
// asm:   0x183331bdf: mov rdi, qword ptr [rbp + 0x28]
// asm:   0x183331be3: mov rax, qword ptr [rdi]
// asm:   0x183331be6: mov rbx, qword ptr [rax]
// asm:   0x183331be9: lea rcx, [rip + 0xd47368]  ; TypeInfo_System_Exception
// asm:   0x183331bf0: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x183331bf5: mov rcx, rax
// asm:   0x183331bf8: mov rdx, rbx
// asm:   0x183331bfb: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x183331c00: test al, al
// asm:   0x183331c02: je 0x183331c10
// asm:   0x183331c04: movabs rax, 0
// asm:   0x183331c0e: jmp 0x183331c28
// asm:   0x183331c10: mov rax, qword ptr [rdi]
// asm:   0x183331c13: mov qword ptr [rbp + 0x20], rax
// asm:   0x183331c17: lea rdx, [rip + 0xcaa36a]
// asm:   0x183331c1e: lea rcx, [rbp + 0x20]
// asm:   0x183331c22: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x183331c28: add rsp, 0x20
// asm:   0x183331c2c: pop rdi
// asm:   0x183331c2d: pop rbp
// asm:   0x183331c2e: pop rbx
// asm:   0x183331c2f: ret 

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
  
  if (Il2CppMethodInitialized_184347558 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Convert);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GUIUtility);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptComponent);
    il2cpp_codegen_initialize_runtime_metadata(&"AOTTG2_COMPONENT_V1:");
    Il2CppMethodInitialized_184347558 = '\x01';
  }
  *component = (Map_MapScriptComponent_o *)0x0;
  Il2CppCodeGenWriteBarrier(component,(void *)0x0);
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
      pSVar3 = (*(pSVar4->klass->vtable)._34_GetString.methodPtr)
                         (pSVar4,pSVar5,(pSVar4->klass->vtable)._34_GetString.method);
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
                           (MethodInfo_93FC70 *)MethodInfo_System_Collections_Generic_List_string_Contains);
        if (bVar2) {
          *component = __this_01;
          Il2CppCodeGenWriteBarrier(component,__this_01);
          return true;
        }
      }
      return false;
    }
  }
  return false;
}


// UI.MapEditorInspectPanel$$PasteComponent
// il2cpp: void UI_MapEditorInspectPanel__PasteComponent (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x1822c17b0
// eh: try 0x1822c1900..0x1822c1ab8 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822c1a43: mov rdx, qword ptr [rip + 0x1dc9a7e]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_Dispose
// asm:   0x1822c1a4a: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1822c1a4f: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1822c1a54: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1822c1a59: test rcx, rcx
// asm:   0x1822c1a5c: jne 0x1822c1ab8
// asm:   0x1822c1a5e: mov r13, qword ptr [rsp + 0xa0]
// asm:   0x1822c1ab8: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

void UI_MapEditorInspectPanel__PasteComponent(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  byte bVar1;
  System_Collections_Generic_List_MapObject__o *__this_00;
  Il2CppClass *pIVar2;
  void *pvVar3;
  System_Collections_Generic_List_T__o *__this_01;
  System_Collections_Generic_List_object__o *__this_02;
  UI_MapEditorMenu_o *__this_03;
  bool bVar4;
  int32_t index;
  UI_MapEditorInspectPanel___c__DisplayClass71_0_o *object;
  System_Predicate_T__o *match;
  Map_MapScriptComponent_o *pMVar5;
  undefined1 local_70 [16];
  Il2CppObject *local_60;
  undefined1 local_58 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_50;
  Il2CppObject *local_48;
  
  if (Il2CppMethodInitialized_184347559 == '\0') {
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
              (&MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass71_0_PasteComponent_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorInspectPanel_c__DisplayClass71_0);
    Il2CppMethodInitialized_184347559 = '\x01';
  }
  local_58 = (undefined1  [8])0x0;
  pUStack_50 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_48 = (Il2CppObject *)0x0;
  object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel_c__DisplayClass71_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (UI_MapEditorInspectPanel___c__DisplayClass71_0_o *)0x0) {
    bVar4 = UI_MapEditorInspectPanel__TryReadComponentClipboard
                      (__this,&(object->fields).copied,(MethodInfo *)0x0);
    if (!bVar4) {
      return;
    }
    __this_00 = (__this->fields)._mapObjects;
    if (__this_00 != (System_Collections_Generic_List_MapObject__o *)0x0) {
      System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_70,
                 (System_Collections_Generic_List_T__o *)__this_00,
                 (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_MapObject_GetEnumerator);
      local_58 = (undefined1  [8])local_70._0_8_;
      pUStack_50 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_70._8_8_;
      local_48 = local_60;
      local_70._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      local_70._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_58;
      while (bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                               ((System_Collections_Generic_List_Enumerator_object__o *)local_58,
                                (MethodInfo_153A2A0 *)
                                MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_MoveNext),
            bVar4) {
        if (local_48 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar2 = local_48[2].klass;
        if (pIVar2 == (Il2CppClass *)0x0) {
          ThrowNullReferenceException();
        }
        pvVar3 = (pIVar2->_1).image;
        bVar1 = (TypeInfo_Map_MapScriptSceneObject->_2).typeHierarchyDepth;
        if ((*(byte *)((longlong)pvVar3 + 0x130) < bVar1) ||
           (*(Map_MapScriptSceneObject_c **)
             (*(longlong *)((longlong)pvVar3 + 200) + -8 + (ulonglong)bVar1 * 8) !=
            TypeInfo_Map_MapScriptSceneObject)) {
          il2cpp_codegen_raise_invalid_cast_exception(pIVar2);
        }
        __this_01 = (pIVar2->_1).fields;
        match = (System_Predicate_T__o *)(object->fields).__9__0;
        if (match == (System_Predicate_T__o *)0x0) {
          match = (System_Predicate_T__o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Predicate_MapScriptComponent);
          System_Predicate_object____ctor
                    ((System_Predicate_object__o *)match,(Il2CppObject *)object,
                     (intptr_t)MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass71_0_PasteComponent_b__0,
                     (MethodInfo_B61EB0 *)0x0);
          (object->fields).__9__0 = (System_Predicate_MapScriptComponent__o *)match;
          Il2CppCodeGenWriteBarrier(&(object->fields).__9__0,match);
        }
        if (__this_01 == (System_Collections_Generic_List_T__o *)0x0) {
          ThrowNullReferenceException();
        }
        index = System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___FindIndex
                          (__this_01,match,
                           (MethodInfo_91D870 *)
                           MethodInfo_System_Collections_Generic_List_MapScriptComponent_FindIndex);
        pMVar5 = (object->fields).copied;
        if ((TypeInfo_UI_MapEditorInspectPanel->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel);
        }
        pMVar5 = UI_MapEditorInspectPanel__CloneComponent(pMVar5,(MethodInfo *)0x0);
        __this_02 = (pIVar2->_1).fields;
        if (index < 0) {
          if (__this_02 == (System_Collections_Generic_List_object__o *)0x0) {
            ThrowNullReferenceException();
          }
          il2cpp_runtime_helper_180012890(__this_02,pMVar5);
        }
        else {
          if (__this_02 == (System_Collections_Generic_List_object__o *)0x0) {
            ThrowNullReferenceException();
          }
          System_Collections_Generic_List_object___set_Item
                    (__this_02,index,(Il2CppObject *)pMVar5,
                     (MethodInfo_950000 *)
                     MethodInfo_System_Collections_Generic_List_MapScriptComponent_set_Item);
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_58,
                 MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_Dispose);
      __this_03 = (__this->fields)._menu;
      if (__this_03 != (UI_MapEditorMenu_o *)0x0) {
        UI_MapEditorMenu__ShowInspector_22cd590(__this_03,(__this->fields)._mapObjects,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel$$DeleteComponent
// il2cpp: void UI_MapEditorInspectPanel__DeleteComponent (UI_MapEditorInspectPanel_o* __this, System_String_o* componentName, const MethodInfo* method);
// 0x1822bd5a0
// eh: try 0x1822bd6d0..0x1822bd81f -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822bd7ac: mov rdx, qword ptr [rip + 0x1dcdd15]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_Dispose
// asm:   0x1822bd7b3: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1822bd7b8: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1822bd7bd: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1822bd7c2: test rcx, rcx
// asm:   0x1822bd7c5: jne 0x1822bd81f
// asm:   0x1822bd7c7: mov r15, qword ptr [rsp + 0x80]
// asm:   0x1822bd81f: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

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
  UI_MapEditorInspectPanel___c__DisplayClass72_0_o *object;
  System_Predicate_T__o *match;
  undefined1 local_50 [16];
  Il2CppObject *local_40;
  undefined1 local_38 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_30;
  Il2CppObject *local_28;
  
  if (Il2CppMethodInitialized_18434755a == '\0') {
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
              (&MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass72_0_DeleteComponent_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorInspectPanel_c__DisplayClass72_0);
    Il2CppMethodInitialized_18434755a = '\x01';
  }
  local_38 = (undefined1  [8])0x0;
  pUStack_30 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_28 = (Il2CppObject *)0x0;
  object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel_c__DisplayClass72_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (UI_MapEditorInspectPanel___c__DisplayClass72_0_o *)0x0) {
    (object->fields).componentName = componentName;
    Il2CppCodeGenWriteBarrier(&(object->fields).componentName,componentName);
    __this_00 = (__this->fields)._mapObjects;
    if (__this_00 != (System_Collections_Generic_List_MapObject__o *)0x0) {
      System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_50,
                 (System_Collections_Generic_List_T__o *)__this_00,
                 (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_MapObject_GetEnumerator);
      local_38 = (undefined1  [8])local_50._0_8_;
      pUStack_30 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_50._8_8_;
      local_28 = local_40;
      local_50._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      local_50._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_38;
      while( true ) {
        bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          ((System_Collections_Generic_List_Enumerator_object__o *)local_38,
                           (MethodInfo_153A2A0 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_MoveNext);
        if (!bVar4) break;
        if (local_28 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar2 = local_28[2].klass;
        if (pIVar2 == (Il2CppClass *)0x0) {
          ThrowNullReferenceException();
        }
        pvVar3 = (pIVar2->_1).image;
        bVar1 = (TypeInfo_Map_MapScriptSceneObject->_2).typeHierarchyDepth;
        if ((*(byte *)((longlong)pvVar3 + 0x130) < bVar1) ||
           (*(Map_MapScriptSceneObject_c **)
             (*(longlong *)((longlong)pvVar3 + 200) + -8 + (ulonglong)bVar1 * 8) !=
            TypeInfo_Map_MapScriptSceneObject)) {
          il2cpp_codegen_raise_invalid_cast_exception(pIVar2);
        }
        __this_01 = (pIVar2->_1).fields;
        match = (System_Predicate_T__o *)(object->fields).__9__0;
        if (match == (System_Predicate_T__o *)0x0) {
          match = (System_Predicate_T__o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Predicate_MapScriptComponent);
          System_Predicate_object____ctor
                    ((System_Predicate_object__o *)match,(Il2CppObject *)object,
                     (intptr_t)MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass72_0_DeleteComponent_b__0,
                     (MethodInfo_B61EB0 *)0x0);
          (object->fields).__9__0 = (System_Predicate_MapScriptComponent__o *)match;
          Il2CppCodeGenWriteBarrier(&(object->fields).__9__0,match);
        }
        if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) {
          ThrowNullReferenceException();
        }
        System_Collections_Generic_List_object___RemoveAll
                  (__this_01,match,
                   (MethodInfo_946210 *)
                   MethodInfo_System_Collections_Generic_List_MapScriptComponent_RemoveAll);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_38,
                 MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_Dispose);
      __this_02 = (__this->fields)._menu;
      if (__this_02 != (UI_MapEditorMenu_o *)0x0) {
        UI_MapEditorMenu__ShowInspector_22cd590(__this_02,(__this->fields)._mapObjects,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel$$CloneComponent
// il2cpp: Map_MapScriptComponent_o* UI_MapEditorInspectPanel__CloneComponent (Map_MapScriptComponent_o* source, const MethodInfo* method);
// 0x1822bc4b0

Map_MapScriptComponent_o *
UI_MapEditorInspectPanel__CloneComponent(Map_MapScriptComponent_o *source,MethodInfo *method)

{
  System_String_o *value;
  System_Collections_Generic_List_string__o *collection;
  Map_MapScriptComponent_o *__this;
  System_Collections_Generic_List_string__o *__this_00;
  
  if (Il2CppMethodInitialized_18434755b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_ctor_40dbf80);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptComponent);
    Il2CppMethodInitialized_18434755b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScriptComponent);
  Map_MapScriptComponent___ctor(__this,(MethodInfo *)0x0);
  if ((source != (Map_MapScriptComponent_o *)0x0) && (__this != (Map_MapScriptComponent_o *)0x0)) {
    value = (source->fields).ComponentName;
    (__this->fields).ComponentName = value;
    Il2CppCodeGenWriteBarrier(&(__this->fields).ComponentName,value);
    collection = (source->fields).Parameters;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
    System_Collections_Generic_List_object____ctor_94fb10
              ((System_Collections_Generic_List_object__o *)__this_00,
               (System_Collections_Generic_IEnumerable_T__o *)collection,
               (MethodInfo_94FB10 *)MethodInfo_System_Collections_Generic_List_string_ctor_40dbf80);
    (__this->fields).Parameters = __this_00;
    Il2CppCodeGenWriteBarrier(&(__this->fields).Parameters,__this_00);
    return __this;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel$$OnDestroy
// il2cpp: void UI_MapEditorInspectPanel__OnDestroy (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x1822c1560

void UI_MapEditorInspectPanel__OnDestroy(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  if ((__this->fields)._contextMenu != (UI_MapEditorContextMenu_o *)0x0) {
    UI_MapEditorContextMenu__Destroy((__this->fields)._contextMenu,(MethodInfo *)0x0);
    return;
  }
  return;
}


// UI.MapEditorInspectPanel$$Setup
// il2cpp: void UI_MapEditorInspectPanel__Setup (UI_MapEditorInspectPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x1822c3b10

void UI_MapEditorInspectPanel__Setup
               (UI_MapEditorInspectPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  byte bVar1;
  UI_MapEditorMenu_o *pUVar2;
  
  if (Il2CppMethodInitialized_18434755c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_MapEditorGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_18434755c = '\x01';
  }
  UI_MapEditorScaledPanel__Setup((UI_MapEditorScaledPanel_o *)__this,parent,(MethodInfo *)0x0);
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pUVar2 = (UI_MapEditorMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  if (pUVar2 == (UI_MapEditorMenu_o *)0x0) {
    (__this->fields)._menu = (UI_MapEditorMenu_o *)0x0;
    pUVar2 = (UI_MapEditorMenu_o *)0x0;
  }
  else {
    bVar1 = (TypeInfo_UI_MapEditorMenu->_2).typeHierarchyDepth;
    if (((((UI_BaseMenu_c *)pUVar2->klass)->_2).typeHierarchyDepth < bVar1) ||
       ((((UI_BaseMenu_c *)pUVar2->klass)->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_UI_MapEditorMenu)) {
      il2cpp_codegen_raise_invalid_cast_exception(pUVar2);
    }
    (__this->fields)._menu = pUVar2;
    bVar1 = (TypeInfo_UI_MapEditorMenu->_2).typeHierarchyDepth;
    if (((((UI_BaseMenu_c *)pUVar2->klass)->_2).typeHierarchyDepth < bVar1) ||
       ((((UI_BaseMenu_c *)pUVar2->klass)->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_UI_MapEditorMenu)) {
      il2cpp_codegen_raise_invalid_cast_exception(pUVar2);
    }
  }
  Il2CppCodeGenWriteBarrier(&(__this->fields)._menu,pUVar2);
  pUVar2 = (UI_MapEditorMenu_o *)TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if (pUVar2 == (UI_MapEditorMenu_o *)0x0) {
    (__this->fields)._gameManager = (GameManagers_MapEditorGameManager_o *)0x0;
    pUVar2 = (UI_MapEditorMenu_o *)0x0;
  }
  else {
    bVar1 = (TypeInfo_GameManagers_MapEditorGameManager->_2).typeHierarchyDepth;
    if (((((UI_BaseMenu_c *)pUVar2->klass)->_2).typeHierarchyDepth < bVar1) ||
       ((((UI_BaseMenu_c *)pUVar2->klass)->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager)) {
      il2cpp_codegen_raise_invalid_cast_exception(pUVar2);
    }
    (__this->fields)._gameManager = (GameManagers_MapEditorGameManager_o *)pUVar2;
    bVar1 = (TypeInfo_GameManagers_MapEditorGameManager->_2).typeHierarchyDepth;
    if (((((UI_BaseMenu_c *)pUVar2->klass)->_2).typeHierarchyDepth < bVar1) ||
       ((((UI_BaseMenu_c *)pUVar2->klass)->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager)) {
      il2cpp_codegen_raise_invalid_cast_exception(pUVar2);
    }
  }
  Il2CppCodeGenWriteBarrier(&(__this->fields)._gameManager,pUVar2);
  UI_MapEditorInspectPanel__AddResizeHandle(__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorInspectPanel$$AddResizeHandle
// il2cpp: void UI_MapEditorInspectPanel__AddResizeHandle (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x1822ba360

void UI_MapEditorInspectPanel__AddResizeHandle(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Transform_o *parent;
  UnityEngine_RectTransform_o *__this_02;
  UnityEngine_UI_Image_o *pUVar1;
  UI_PanelResizeHandle_o *pUVar2;
  DG_Tweening_Core_DOSetter_float__o *__this_03;
  UnityEngine_Color_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_18434755d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_float);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_PanelResizeHandle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorInspectPanel_AddResizeHandle_b__76_0);
    il2cpp_codegen_initialize_runtime_metadata(&"ResizeHandle");
    Il2CppMethodInitialized_18434755d = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
  UnityEngine_GameObject___ctor(__this_00,"ResizeHandle",(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__SetParent_2f5a7e0(__this_01,parent,false,(MethodInfo *)0x0);
      __this_02 = UnityEngine_GameObject__AddComponent_object_
                            (__this_00,
                             (MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_RectTransform
                            );
      if (__this_02 != (UnityEngine_RectTransform_o *)0x0) {
        UnityEngine_RectTransform__set_anchorMin(__this_02,(UnityEngine_Vector2_o)0x0,(MethodInfo *)0x0);
        UnityEngine_RectTransform__set_anchorMax
                  (__this_02,(UnityEngine_Vector2_o)0x3f80000000000000,(MethodInfo *)0x0);
        UnityEngine_RectTransform__set_offsetMin
                  (__this_02,(UnityEngine_Vector2_o)0xc1000000,(MethodInfo *)0x0);
        UnityEngine_RectTransform__set_offsetMax(__this_02,(UnityEngine_Vector2_o)0x0,(MethodInfo *)0x0);
        pUVar1 = UnityEngine_GameObject__AddComponent_object_
                           (__this_00,
                            (MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_Image);
        if (pUVar1 != (UnityEngine_UI_Image_o *)0x0) {
          local_28[0].r = 1.0;
          local_28[0].g = 1.0;
          local_28[0].b = 1.0;
          local_28[0].a = 0.04;
          (*(pUVar1->klass->vtable)._23_set_color.methodPtr)
                    (pUVar1,(UnityEngine_Color_o *)local_28,(pUVar1->klass->vtable)._23_set_color.method);
          pUVar2 = UnityEngine_GameObject__AddComponent_object_
                             (__this_00,
                              (MethodInfo_6F4D60 *)
                              MethodInfo_UnityEngine_GameObject_AddComponent_PanelResizeHandle);
          if (pUVar2 != (UI_PanelResizeHandle_o *)0x0) {
            (pUVar2->fields).IsRightEdge = false;
            (pUVar2->fields).MinWidth = 200.0;
            (pUVar2->fields).MaxWidth = 700.0;
            __this_03 = (DG_Tweening_Core_DOSetter_float__o *)
                        il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_float);
            System_Action_float____ctor
                      (__this_03,(Il2CppObject *)__this,
                       (intptr_t)MethodInfo_UI_MapEditorInspectPanel_AddResizeHandle_b__76_0,
                       (MethodInfo_E5A750 *)0x0);
            (pUVar2->fields).OnResize = (System_Action_float__o *)__this_03;
            Il2CppCodeGenWriteBarrier(&(pUVar2->fields).OnResize,__this_03);
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
// 0x1822bde40
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822bdeaf: nop 
// asm:   0x1822bdf25: mov r8, qword ptr [rip + 0x1e066dc]  ; TypeInfo_UnityEngine_MeshCollider

bool UI_MapEditorInspectPanel__HasNonConvexMeshCollider
               (UI_MapEditorInspectPanel_o *__this,Map_MapObject_o *mapObject,MethodInfo *method)

{
  byte bVar1;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_MeshCollider_o *__this_01;
  UnityEngine_MeshCollider_c *pUVar2;
  bool bVar3;
  System_Object_array *pSVar4;
  uint uVar5;
  Il2CppClass *pIVar6;
  
  if (Il2CppMethodInitialized_18434755e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Collider);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_MeshCollider);
    Il2CppMethodInitialized_18434755e = '\x01';
  }
  if (((mapObject != (Map_MapObject_o *)0x0) &&
      (__this_00 = (mapObject->fields).GameObject, __this_00 != (UnityEngine_GameObject_o *)0x0)) &&
     (pSVar4 = UnityEngine_GameObject__GetComponentsInChildren_object__6f5810
                         (__this_00,
                          (MethodInfo_6F5810 *)
                          MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Collider),
     pSVar4 != (System_Object_array *)0x0)) {
    uVar5 = 0;
    pIVar6 = (Il2CppClass *)TypeInfo_UnityEngine_MeshCollider;
    while( true ) {
      if ((int)pSVar4->max_length <= (int)uVar5) {
        return false;
      }
      if ((uint)pSVar4->max_length <= uVar5) break;
      __this_01 = (UnityEngine_MeshCollider_o *)pSVar4->m_Items[(int)uVar5];
      if (__this_01 != (UnityEngine_MeshCollider_o *)0x0) {
        pUVar2 = __this_01->klass;
        bVar1 = (pIVar6->_2).typeHierarchyDepth;
        if ((bVar1 <= (pUVar2->_2).typeHierarchyDepth) &&
           ((pUVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] == pIVar6)) {
          bVar1 = (pIVar6->_2).typeHierarchyDepth;
          if (((pUVar2->_2).typeHierarchyDepth < bVar1) ||
             ((pUVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] != pIVar6)) {
            il2cpp_codegen_raise_invalid_cast_exception(__this_01,pIVar6);
          }
          bVar3 = UnityEngine_MeshCollider__get_convex(__this_01,(MethodInfo *)0x0);
          pIVar6 = (Il2CppClass *)TypeInfo_UnityEngine_MeshCollider;
          if (!bVar3) {
            return true;
          }
        }
      }
      uVar5 = uVar5 + 1;
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel$$CopyID
// il2cpp: void UI_MapEditorInspectPanel__CopyID (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x1822bca40

void
UI_MapEditorInspectPanel__CopyID(UI_MapEditorInspectPanel_o* __this, MethodInfo* method)

{
  Map_MapObject_o *pMVar1;
  Map_MapScriptBaseObject_o *pMVar2;
  System_String_o *value;
  
  if (Il2CppMethodInitialized_18434755f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GUIUtility);
    Il2CppMethodInitialized_18434755f = '\x01';
  }
  pMVar1 = (__this->fields)._mapObject;
  if ((pMVar1 != (Map_MapObject_o *)0x0) &&
     (pMVar2 = (pMVar1->fields).ScriptObject, pMVar2 != (Map_MapScriptBaseObject_o *)0x0)) {
    value = System_Int32__ToString(&(pMVar2->fields).Id,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_GUIUtility->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_GUIUtility);
    }
    UnityEngine_GUIUtility__set_systemCopyBuffer(value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel$$CopyAssetCSV
// il2cpp: void UI_MapEditorInspectPanel__CopyAssetCSV (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x1822bc7c0

void UI_MapEditorInspectPanel__CopyAssetCSV(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  Map_MapScriptBaseObject_o *pMVar2;
  System_String_o *value;
  
  if (Il2CppMethodInitialized_184347560 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GUIUtility);
    Il2CppMethodInitialized_184347560 = '\x01';
  }
  pMVar1 = (__this->fields)._mapObject;
  if ((pMVar1 != (Map_MapObject_o *)0x0) &&
     (pMVar2 = (pMVar1->fields).ScriptObject, pMVar2 != (Map_MapScriptBaseObject_o *)0x0)) {
    value = (*(pMVar2->klass->vtable)._8_Serialize.methodPtr)
                      (pMVar2,(pMVar2->klass->vtable)._8_Serialize.method);
    if ((TypeInfo_UnityEngine_GUIUtility->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_GUIUtility);
    }
    UnityEngine_GUIUtility__set_systemCopyBuffer(value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel$$Show
// il2cpp: void UI_MapEditorInspectPanel__Show (UI_MapEditorInspectPanel_o* __this, Map_MapObject_o* mapObject, const MethodInfo* method);
// 0x1822c7cb0

void UI_MapEditorInspectPanel__Show
               (UI_MapEditorInspectPanel_o *__this,Map_MapObject_o *mapObject,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  Map_MapObject_array *pMVar3;
  MethodInfo *pMVar4;
  System_Collections_Generic_List_MapObject__o *mapObjects;
  
  if (Il2CppMethodInitialized_184347561 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_MapObject_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_MapObject_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_MapObject);
    Il2CppMethodInitialized_184347561 = '\x01';
  }
  mapObjects = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_MapObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)mapObjects,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_MapObject_ctor);
  pMVar4 = MethodInfo_System_Collections_Generic_List_MapObject_Add;
  if (mapObjects != (System_Collections_Generic_List_MapObject__o *)0x0) {
    piVar1 = &(mapObjects->fields)._version;
    *piVar1 = *piVar1 + 1;
    pMVar3 = (mapObjects->fields)._items;
    if (pMVar3 != (Map_MapObject_array *)0x0) {
      uVar2 = (mapObjects->fields)._size;
      if (uVar2 < (uint)pMVar3->max_length) {
        (mapObjects->fields)._size = uVar2 + 1;
        if ((uint)pMVar3->max_length <= uVar2) {
          ThrowIndexOutOfRangeException();
        }
        pMVar3->m_Items[(int)uVar2] = mapObject;
        Il2CppCodeGenWriteBarrier(pMVar3->m_Items + (int)uVar2,mapObject);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)mapObjects,(Il2CppObject *)mapObject,
                   (MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
      }
      UI_MapEditorInspectPanel__Show_22c42a0(__this,mapObjects,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel$$Show
// il2cpp: void UI_MapEditorInspectPanel__Show (UI_MapEditorInspectPanel_o* __this, System_Collections_Generic_List_MapObject__o* mapObjects, const MethodInfo* method);
// 0x1822c42a0
// eh: try 0x1822c6a2b..0x1822c7c92 -> pad 0x18333fe60 (+3 call sites) catch Il2CppExceptionWrapper
// asm: 79 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822c62df: movss xmm13, dword ptr [rip + 0x1092a04]
// asm:   0x1822c67ee: nop 
// asm:   0x1822c6a2d: mov rsi, qword ptr [rsp + 0xb0]
// asm:   0x1822c6c0b: nop dword ptr [rax + rax]
// asm:   0x1822c6d04: mov rdx, qword ptr [rip + 0x1df1ef5]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_BaseSetting_Dispose
// asm:   0x1822c6d0b: mov rcx, qword ptr [rsp + 0x100]
// asm:   0x1822c6d13: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1822c6d18: mov rcx, qword ptr [rsp + 0xf8]
// asm:   0x1822c6d20: test rcx, rcx
// asm:   0x1822c6d23: jne 0x1822c7c2b
// asm:   0x1822c6d29: xor ebx, ebx
// asm:   0x1822c6d2b: mov r12, qword ptr [rsp + 0x230]
// asm:   0x1822c6d33: mov r13, qword ptr [rsp + 0xe8]
// asm:   0x1822c6d3b: mov qword ptr [rsp + 0x78], r13
// asm:   0x1822c6d40: mov rax, qword ptr [rsp + 0xf0]
// asm:   0x1822c6d48: mov qword ptr [rsp + 0xb8], rax
// asm:   0x1822c6d50: mov r14, qword ptr [rsp + 0x88]
// asm:   0x1822c6d58: mov qword ptr [rsp + 0x90], r14
// asm:   0x1822c6d60: mov rax, qword ptr [rsp + 0xa0]
// asm:   0x1822c6d68: mov qword ptr [rsp + 0xc0], rax
// asm:   0x1822c6d70: mov rsi, qword ptr [rsp + 0x248]
// asm:   0x1822c6d78: xorps xmm15, xmm15
// asm:   0x1822c6d7c: movss xmm12, dword ptr [rip + 0x10920d7]
// asm:   0x1822c6d85: movss xmm11, dword ptr [rip + 0x11792c2]
// asm:   0x1822c6d8e: movss xmm14, dword ptr [rip + 0x1092b8d]
// asm:   0x1822c6d97: movss xmm10, dword ptr [rip + 0x1092924]
// asm:   0x1822c6da0: movss xmm13, dword ptr [rip + 0x1091f43]
// asm:   0x1822c6da9: movss xmm7, dword ptr [rip + 0x10928eb]
// asm:   0x1822c6e29: mov r13, qword ptr [rsp + 0x78]
// asm:   0x1822c6e2e: mov rsi, qword ptr [rsp + 0x248]
// asm:   0x1822c719a: jmp 0x1822c71a4
// asm:   0x1822c71cf: mov rdx, qword ptr [rsp + 0x88]
// asm:   0x1822c7210: mov r14, qword ptr [rsp + 0x88]
// asm:   0x1822c7218: jmp 0x1822c7240
// asm:   0x1822c73b4: mov r9, qword ptr [rip + 0x1dab595]  ; TypeInfo_Settings_StringSetting
// asm:   0x1822c79a5: mov rdx, qword ptr [rip + 0x1df1254]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_BaseSetting_Dispose
// asm:   0x1822c79ac: mov rcx, qword ptr [rsp + 0x110]
// asm:   0x1822c79b4: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1822c79b9: mov rcx, qword ptr [rsp + 0x108]
// asm:   0x1822c79c1: test rcx, rcx
// asm:   0x1822c79c4: jne 0x1822c7c92
// asm:   0x1822c79ca: xor ebx, ebx
// asm:   0x1822c79cc: mov r12, qword ptr [rsp + 0x230]
// asm:   0x1822c79d4: mov r13, qword ptr [rsp + 0xe8]
// asm:   0x1822c79dc: mov qword ptr [rsp + 0x78], r13
// asm:   0x1822c79e1: mov rax, qword ptr [rsp + 0xf0]
// asm:   0x1822c79e9: mov qword ptr [rsp + 0xb8], rax
// asm:   0x1822c79f1: mov rsi, qword ptr [rsp + 0x118]
// asm:   0x1822c79f9: xorps xmm15, xmm15
// asm:   0x1822c79fd: movss xmm12, dword ptr [rip + 0x1091456]
// asm:   0x1822c7a06: movss xmm11, dword ptr [rip + 0x1178641]
// asm:   0x1822c7a0f: movss xmm14, dword ptr [rip + 0x1091f0c]
// asm:   0x1822c7a18: movss xmm10, dword ptr [rip + 0x1091ca3]
// asm:   0x1822c7a21: movss xmm13, dword ptr [rip + 0x10912c2]
// asm:   0x1822c7a2a: movss xmm7, dword ptr [rip + 0x1091c6a]
// asm:   0x1822c7c2b: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1822c7c92: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x18333fe60: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333fe65: push rbp
// asm:   0x18333fe66: sub rsp, 0x70
// asm:   0x18333fe6a: mov rbp, rdx
// asm:   0x18333fe6d: mov rax, qword ptr [rbp + 0x138]
// asm:   0x18333fe74: mov rcx, qword ptr [rax]
// asm:   0x18333fe77: mov qword ptr [rbp + 0xf8], rcx
// asm:   0x18333fe7e: movabs rax, 0
// asm:   0x18333fe88: add rsp, 0x70
// asm:   0x18333fe8c: pop rbp
// asm:   0x18333fe8d: ret 
// asm:   0x18333fe90: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333fe95: push rbp
// asm:   0x18333fe96: sub rsp, 0x70
// asm:   0x18333fe9a: mov rbp, rdx
// asm:   0x18333fe9d: mov rax, qword ptr [rbp + 0x140]
// asm:   0x18333fea4: mov rcx, qword ptr [rax]
// asm:   0x18333fea7: mov qword ptr [rbp + 0x108], rcx
// asm:   0x18333feae: movabs rax, 0
// asm:   0x18333feb8: add rsp, 0x70
// asm:   0x18333febc: pop rbp
// asm:   0x18333febd: ret 

void UI_MapEditorInspectPanel__Show_22c42a0
               (UI_MapEditorInspectPanel_o *__this,System_Collections_Generic_List_MapObject__o *mapObjects,
               MethodInfo *method)

{
  int32_t *piVar1;
  float interval;
  byte bVar2;
  int32_t length;
  System_Collections_Generic_HashSet_BallotBox_Ballot__o *__this_00;
  System_Collections_Generic_List_GameObject__o *pSVar3;
  Map_MapScriptBaseObject_o *pMVar4;
  Settings_BoolSetting_o *pSVar5;
  Settings_StringSetting_o *pSVar6;
  Il2CppObject *pIVar7;
  UI_MapEditorMenu_o *pUVar8;
  Settings_ColorSetting_o *pSVar9;
  UI_ColorPickPopup_o *pUVar10;
  System_Collections_Generic_List_Dictionary_string__BaseSetting___o *pSVar11;
  Settings_InspectorSettingMetadata_o *pSVar12;
  UI_MapEditorInspectPanel___c__DisplayClass81_0_o *pUVar13;
  System_String_o *fieldName;
  System_Collections_Generic_HashSet_object__o *__this_01;
  Settings_IntSetting_c *pSVar14;
  UI_Vector3Popup_o *vector3Popup;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  System_Collections_Generic_List_MapObject__o *pSVar20;
  Map_MapObject_o *pMVar21;
  System_String_o *pSVar22;
  UI_ElementStyle_o *pUVar23;
  UnityEngine_GameObject_o *pUVar24;
  UnityEngine_Transform_o *pUVar25;
  UI_ElementStyle_o *__this_02;
  UnityEngine_Events_UnityAction_o *pUVar26;
  UnityEngine_Transform_o *pUVar27;
  System_Func_MapObject__bool__o *pSVar28;
  System_String_array *pSVar29;
  UnityEngine_UI_LayoutElement_o *pUVar30;
  UI_MapEditorInspectPanel___c__DisplayClass81_0_o *object;
  System_Collections_Generic_Dictionary_string__BaseSetting__o *settings;
  System_Collections_Generic_Dictionary_string__string__o *__this_03;
  System_Collections_Generic_Dictionary_string__string____o *__this_04;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *pSVar31;
  Settings_BaseSetting_o *pSVar32;
  System_Collections_Generic_List_string__o *pSVar33;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *value;
  UI_MapEditorInspectPanel___c__DisplayClass81_1_o *object_00;
  Settings_IntSetting_o *pSVar34;
  Il2CppObject *first;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  System_Action_o *pSVar35;
  UI_MapEditorInspectPanel__WaitAndEnablePanel_d__89_o *routine;
  System_String_o **targetAddress;
  Settings_FloatSetting_o *pSVar36;
  MethodInfo *method_00;
  int local_res10;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *local_1a0;
  UnityEngine_Transform_o *local_190;
  System_Collections_Generic_Dictionary_string__string____o *local_188;
  uint local_180 [2];
  System_Collections_Generic_Dictionary_string__BaseSetting__o *local_178;
  UnityEngine_Transform_o *local_170;
  System_Collections_Generic_Dictionary_string__string____o *local_168;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o local_160;
  System_Collections_Generic_Dictionary_string__Transform__o *local_148;
  UI_ElementStyle_o *local_140;
  UnityEngine_Transform_o *local_138;
  undefined8 local_130;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *local_128;
  undefined8 local_120;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *local_118;
  UI_MapEditorInspectPanel___c__DisplayClass81_0_o *local_110;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_108 [8];
  
  if (Il2CppMethodInitialized_184347562 == '\0') {
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
              (&MethodInfo_System_Collections_Generic_List_MapObject_ctor_40bb3a8);
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
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorInspectPanel_Show_b__81_0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorInspectPanel_Show_b__81_10);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorInspectPanel_Show_b__81_11);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorInspectPanel_Show_b__81_12);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorInspectPanel_Show_b__81_13);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorInspectPanel_Show_b__81_14);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorInspectPanel_Show_b__81_15);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorInspectPanel_Show_b__81_16);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorInspectPanel_Show_b__81_17);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorInspectPanel_Show_b__81_18);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorInspectPanel_Show_b__81_1);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorInspectPanel_Show_b__81_24);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorInspectPanel_Show_b__81_25);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorInspectPanel_Show_b__81_26);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorInspectPanel_Show_b__81_27);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorInspectPanel_Show_b__81_28);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorInspectPanel_Show_b__81_29);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorInspectPanel_Show_b__81_2);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorInspectPanel_Show_b__81_30);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorInspectPanel_Show_b__81_31);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorInspectPanel_Show_b__81_32);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorInspectPanel_Show_b__81_33);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorInspectPanel_Show_b__81_34);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorInspectPanel_Show_b__81_35);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorInspectPanel_Show_b__81_36);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorInspectPanel_Show_b__81_37);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorInspectPanel_Show_b__81_38);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorInspectPanel_Show_b__81_3);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorInspectPanel_Show_b__81_44);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorInspectPanel_Show_b__81_45);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorInspectPanel_Show_b__81_4);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorInspectPanel_Show_b__81_5);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorInspectPanel_Show_b__81_6);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorInspectPanel_Show_b__81_7);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorInspectPanel_Show_b__81_8);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorInspectPanel_Show_b__81_9);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorInspectPanel);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObjectCollideMode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObjectCollideWith);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObjectPhysicsMaterial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObjectShader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorInspectPanel_c_Show_b__81_19);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorInspectPanel_c_Show_b__81_20);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorInspectPanel_c_Show_b__81_21);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorInspectPanel_c_Show_b__81_22);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorInspectPanel_c_Show_b__81_23);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass81_0_Show_b__39);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorInspectPanel_c__DisplayClass81_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass81_1_Show_b__40);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass81_1_Show_b__41);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass81_1_Show_b__42);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass81_1_Show_b__43);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass81_1_Show_b__46);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass81_1_Show_b__47);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorInspectPanel_c__DisplayClass81_1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorInspectPanel_c);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_Vector3Setting);
    il2cpp_codegen_initialize_runtime_metadata(&"Scale");
    il2cpp_codegen_initialize_runtime_metadata(&"CollideMode");
    il2cpp_codegen_initialize_runtime_metadata(&"Color");
    il2cpp_codegen_initialize_runtime_metadata(&"Z");
    il2cpp_codegen_initialize_runtime_metadata(&"Transform");
    il2cpp_codegen_initialize_runtime_metadata(&"Id: ");
    il2cpp_codegen_initialize_runtime_metadata(&"Add Component");
    il2cpp_codegen_initialize_runtime_metadata(&"Offset X");
    il2cpp_codegen_initialize_runtime_metadata(&"Offset Y");
    il2cpp_codegen_initialize_runtime_metadata(&"Asset: ");
    il2cpp_codegen_initialize_runtime_metadata(&"Dropbox");
    il2cpp_codegen_initialize_runtime_metadata(&"Networked");
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"Position");
    il2cpp_codegen_initialize_runtime_metadata(&"Name");
    il2cpp_codegen_initialize_runtime_metadata(&"--");
    il2cpp_codegen_initialize_runtime_metadata(&"Visible");
    il2cpp_codegen_initialize_runtime_metadata(&"Physics Material");
    il2cpp_codegen_initialize_runtime_metadata(&" objects");
    il2cpp_codegen_initialize_runtime_metadata(&"Texture");
    il2cpp_codegen_initialize_runtime_metadata(&"Selected ");
    il2cpp_codegen_initialize_runtime_metadata(&"Delete");
    il2cpp_codegen_initialize_runtime_metadata(&"Tiling Y");
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/Navigation/CopyIcon");
    il2cpp_codegen_initialize_runtime_metadata(&"Active");
    il2cpp_codegen_initialize_runtime_metadata(&"Rotation");
    il2cpp_codegen_initialize_runtime_metadata(&"Tooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"Tiling X");
    il2cpp_codegen_initialize_runtime_metadata(&"Shader");
    il2cpp_codegen_initialize_runtime_metadata(&"Component:");
    il2cpp_codegen_initialize_runtime_metadata(&"Parent Id");
    il2cpp_codegen_initialize_runtime_metadata(&"Static");
    il2cpp_codegen_initialize_runtime_metadata(&"Y");
    il2cpp_codegen_initialize_runtime_metadata(&"Collision");
    il2cpp_codegen_initialize_runtime_metadata(&":Group:");
    il2cpp_codegen_initialize_runtime_metadata(&"CollideWith");
    il2cpp_codegen_initialize_runtime_metadata(&"X");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"Reflect color");
    il2cpp_codegen_initialize_runtime_metadata(&"Description");
    il2cpp_codegen_initialize_runtime_metadata(&"Collide Mode");
    il2cpp_codegen_initialize_runtime_metadata(&"Collide With");
    il2cpp_codegen_initialize_runtime_metadata(&"PhysicsMaterial");
    Il2CppMethodInitialized_184347562 = '\x01';
  }
  local_180[0] = 0;
  local_160.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_160.fields._index = 0;
  local_160.fields._version = 0;
  local_160.fields._currentKey = (Il2CppObject *)0x0;
  local_190 = (UnityEngine_Transform_o *)0x0;
  UI_BasePanel__Show((UI_BasePanel_o *)__this,(MethodInfo *)0x0);
  pSVar20 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_MapObject);
  System_Collections_Generic_List_object____ctor_94fb10
            ((System_Collections_Generic_List_object__o *)pSVar20,
             (System_Collections_Generic_IEnumerable_T__o *)mapObjects,
             (MethodInfo_94FB10 *)MethodInfo_System_Collections_Generic_List_MapObject_ctor_40bb3a8);
  (__this->fields)._mapObjects = pSVar20;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._mapObjects,pSVar20);
  pSVar20 = (__this->fields)._mapObjects;
  if (pSVar20 == (System_Collections_Generic_List_MapObject__o *)0x0) {
label_1822c7be3:
    ThrowNullReferenceException();
  }
  pMVar21 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                      ((System_Collections_Generic_List_object__o *)pSVar20,0,
                       (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_MapObject_get_Item);
  (__this->fields)._mapObject = pMVar21;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._mapObject,pMVar21);
  __this_00 = (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)(__this->fields)._mixedFields;
  if (__this_00 == (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)0x0) goto label_1822c7be3;
  System_Collections_Generic_HashSet_BallotBox_Ballot___Clear
            (__this_00,(MethodInfo_17592A0 *)MethodInfo_System_Collections_Generic_HashSet_string_Clear);
  pSVar3 = (__this->fields)._mixedNumericElements;
  if (pSVar3 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_1822c7be3;
  piVar1 = &(pSVar3->fields)._version;
  *piVar1 = *piVar1 + 1;
  length = (pSVar3->fields)._size;
  (pSVar3->fields)._size = 0;
  if (0 < length) {
    System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,length,(MethodInfo *)0x0);
  }
  UI_MapEditorInspectPanel__SyncSettings(__this,(MethodInfo *)0x0);
  pSVar22 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                      (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  pUVar23 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(pUVar23,0x12,80.0,10.0,pSVar22,(MethodInfo *)0x0);
  pSVar20 = (__this->fields)._mapObjects;
  if (pSVar20 == (System_Collections_Generic_List_MapObject__o *)0x0) goto label_1822c7be3;
  pUVar25 = (__this->fields).SinglePanel;
  if ((pSVar20->fields)._size == 1) {
    pUVar24 = UI_ElementFactory__CreateHorizontalGroup(pUVar25,20.0,3,(MethodInfo *)0x0);
    if (pUVar24 == (UnityEngine_GameObject_o *)0x0) goto label_1822c7be3;
    pUVar25 = UnityEngine_GameObject__get_transform(pUVar24,(MethodInfo *)0x0);
    pUVar26 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar26,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_UI_MapEditorInspectPanel_Show_b__81_30,(MethodInfo *)0x0);
    UI_ElementFactory__CreateIconButton
              (pUVar25,pUVar23,"Icons/Navigation/CopyIcon",32.0,32.0,pUVar26,(MethodInfo *)0x0);
    pUVar25 = UnityEngine_GameObject__get_transform(pUVar24,(MethodInfo *)0x0);
    pUVar24 = UI_ElementFactory__CreateVerticalGroup(pUVar25,10.0,0,(MethodInfo *)0x0);
    if (pUVar24 == (UnityEngine_GameObject_o *)0x0) goto label_1822c7be3;
    pUVar25 = UnityEngine_GameObject__get_transform(pUVar24,(MethodInfo *)0x0);
    pMVar21 = (__this->fields)._mapObject;
    if ((pMVar21 == (Map_MapObject_o *)0x0) ||
       (pMVar4 = (pMVar21->fields).ScriptObject, pMVar4 == (Map_MapScriptBaseObject_o *)0x0))
    goto label_1822c7be3;
    pSVar22 = System_Int32__ToString(&(pMVar4->fields).Id,(MethodInfo *)0x0);
    pSVar22 = System_String__Concat_1969e50("Id: ",pSVar22,(MethodInfo *)0x0);
    pUVar26 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar26,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_UI_MapEditorInspectPanel_Show_b__81_31,(MethodInfo *)0x0);
    UI_ElementFactory__CreateTextButton(pUVar25,pUVar23,pSVar22,0.0,pUVar26,(MethodInfo *)0x0);
    pUVar25 = UnityEngine_GameObject__get_transform(pUVar24,(MethodInfo *)0x0);
    pMVar21 = (__this->fields)._mapObject;
    if ((pMVar21 == (Map_MapObject_o *)0x0) ||
       (pMVar4 = (pMVar21->fields).ScriptObject, pMVar4 == (Map_MapScriptBaseObject_o *)0x0))
    goto label_1822c7be3;
    pSVar22 = System_String__Concat_1969e50("Asset: ",(pMVar4->fields).Asset,(MethodInfo *)0x0);
    pUVar26 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar26,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_UI_MapEditorInspectPanel_Show_b__81_32,(MethodInfo *)0x0);
    UI_ElementFactory__CreateTextButton(pUVar25,pUVar23,pSVar22,0.0,pUVar26,(MethodInfo *)0x0);
  }
  else {
    local_180[0] = (pSVar20->fields)._size;
    pSVar22 = System_Int32__ToString((int32_t *)local_180,(MethodInfo *)0x0);
    pSVar22 = System_String__Concat_1969b70
                        ("Selected ",pSVar22," objects",(MethodInfo *)0x0);
    UI_ElementFactory__CreateDefaultLabel(pUVar25,pUVar23,pSVar22,0,3,(MethodInfo *)0x0);
  }
  pUVar24 = UI_ElementFactory__CreateHorizontalGroup((__this->fields).SinglePanel,20.0,3,(MethodInfo *)0x0);
  if (pUVar24 == (UnityEngine_GameObject_o *)0x0) goto label_1822c7be3;
  pUVar25 = UnityEngine_GameObject__get_transform(pUVar24,(MethodInfo *)0x0);
  pSVar22 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                      (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_02,0xf,45.0,10.0,pSVar22,(MethodInfo *)0x0);
  pSVar5 = (__this->fields)._active;
  pUVar26 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar26,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_MapEditorInspectPanel_Show_b__81_0,(MethodInfo *)0x0);
  UI_ElementFactory__CreateToggleSetting
            (pUVar25,__this_02,(Settings_BaseSetting_o *)pSVar5,"Active","",
             25.0,25.0,pUVar26,(MethodInfo *)0x0);
  pSVar5 = (__this->fields)._static;
  pUVar26 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar26,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_MapEditorInspectPanel_Show_b__81_1,(MethodInfo *)0x0);
  UI_ElementFactory__CreateToggleSetting
            (pUVar25,__this_02,(Settings_BaseSetting_o *)pSVar5,"Static","",
             25.0,25.0,pUVar26,(MethodInfo *)0x0);
  if (__this_02 == (UI_ElementStyle_o *)0x0) goto label_1822c7be3;
  (__this_02->fields).TitleWidth = 80.0;
  pSVar5 = (__this->fields)._networked;
  pUVar26 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar26,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_MapEditorInspectPanel_Show_b__81_2,(MethodInfo *)0x0);
  UI_ElementFactory__CreateToggleSetting
            (pUVar25,__this_02,(Settings_BaseSetting_o *)pSVar5,"Networked","",
             25.0,25.0,pUVar26,(MethodInfo *)0x0);
  pUVar25 = (__this->fields).SinglePanel;
  pSVar6 = (__this->fields)._name;
  pUVar26 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar26,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_MapEditorInspectPanel_Show_b__81_3,(MethodInfo *)0x0);
  UI_ElementFactory__CreateInputSetting
            (pUVar25,pUVar23,(Settings_BaseSetting_o *)pSVar6,"Name","",
             140.0,35.0,false,(UnityEngine_Events_UnityAction_o *)0x0,pUVar26,
             (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
  pUVar25 = (__this->fields).SinglePanel;
  pSVar34 = (__this->fields)._parent;
  pUVar26 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar26,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_MapEditorInspectPanel_Show_b__81_4,(MethodInfo *)0x0);
  UI_ElementFactory__CreateInputSetting
            (pUVar25,pUVar23,(Settings_BaseSetting_o *)pSVar34,"Parent Id","",
             140.0,35.0,false,(UnityEngine_Events_UnityAction_o *)0x0,pUVar26,
             (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
  UI_BasePanel__CreateHorizontalDivider
            ((UI_BasePanel_o *)__this,(__this->fields).SinglePanel,1.0,(MethodInfo *)0x0);
  pSVar22 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                      (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  pUVar23 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(pUVar23,0x12,15.0,5.0,pSVar22,(MethodInfo *)0x0);
  pUVar25 = UI_MapEditorInspectPanel__CreateSection
                      (__this,"Transform","Transform",pUVar23,true,
                       (UnityEngine_Transform_o *)0x0,(MethodInfo *)0x0);
  UI_ElementFactory__CreateDefaultLabel(pUVar25,pUVar23,"Position",0,4,(MethodInfo *)0x0);
  pUVar24 = UI_ElementFactory__CreateHorizontalGroup(pUVar25,15.0,3,(MethodInfo *)0x0);
  if (pUVar24 == (UnityEngine_GameObject_o *)0x0) goto label_1822c7be3;
  pUVar27 = UnityEngine_GameObject__get_transform(pUVar24,(MethodInfo *)0x0);
  pSVar36 = (__this->fields)._positionX;
  pUVar26 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar26,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_MapEditorInspectPanel_Show_b__81_5,(MethodInfo *)0x0);
  UI_ElementFactory__CreateInputSetting
            (pUVar27,pUVar23,(Settings_BaseSetting_o *)pSVar36,"X","",
             80.0,35.0,false,(UnityEngine_Events_UnityAction_o *)0x0,pUVar26,
             (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
  pSVar36 = (__this->fields)._positionY;
  pUVar26 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar26,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_MapEditorInspectPanel_Show_b__81_6,(MethodInfo *)0x0);
  UI_ElementFactory__CreateInputSetting
            (pUVar27,pUVar23,(Settings_BaseSetting_o *)pSVar36,"Y","",
             80.0,35.0,false,(UnityEngine_Events_UnityAction_o *)0x0,pUVar26,
             (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
  pSVar36 = (__this->fields)._positionZ;
  pUVar26 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar26,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_MapEditorInspectPanel_Show_b__81_7,(MethodInfo *)0x0);
  UI_ElementFactory__CreateInputSetting
            (pUVar27,pUVar23,(Settings_BaseSetting_o *)pSVar36,"Z","",
             80.0,35.0,false,(UnityEngine_Events_UnityAction_o *)0x0,pUVar26,
             (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
  UI_ElementFactory__CreateDefaultLabel(pUVar25,pUVar23,"Rotation",0,4,(MethodInfo *)0x0);
  pUVar24 = UI_ElementFactory__CreateHorizontalGroup(pUVar25,15.0,3,(MethodInfo *)0x0);
  if (pUVar24 == (UnityEngine_GameObject_o *)0x0) goto label_1822c7be3;
  pUVar27 = UnityEngine_GameObject__get_transform(pUVar24,(MethodInfo *)0x0);
  pSVar36 = (__this->fields)._rotationX;
  pUVar26 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar26,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_MapEditorInspectPanel_Show_b__81_8,(MethodInfo *)0x0);
  UI_ElementFactory__CreateInputSetting
            (pUVar27,pUVar23,(Settings_BaseSetting_o *)pSVar36,"X","",
             80.0,35.0,false,(UnityEngine_Events_UnityAction_o *)0x0,pUVar26,
             (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
  pSVar36 = (__this->fields)._rotationY;
  pUVar26 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar26,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_MapEditorInspectPanel_Show_b__81_9,(MethodInfo *)0x0);
  UI_ElementFactory__CreateInputSetting
            (pUVar27,pUVar23,(Settings_BaseSetting_o *)pSVar36,"Y","",
             80.0,35.0,false,(UnityEngine_Events_UnityAction_o *)0x0,pUVar26,
             (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
  pSVar36 = (__this->fields)._rotationZ;
  pUVar26 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar26,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_MapEditorInspectPanel_Show_b__81_10,(MethodInfo *)0x0);
  UI_ElementFactory__CreateInputSetting
            (pUVar27,pUVar23,(Settings_BaseSetting_o *)pSVar36,"Z","",
             80.0,35.0,false,(UnityEngine_Events_UnityAction_o *)0x0,pUVar26,
             (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
  UI_ElementFactory__CreateDefaultLabel(pUVar25,pUVar23,"Scale",0,4,(MethodInfo *)0x0);
  pUVar24 = UI_ElementFactory__CreateHorizontalGroup(pUVar25,15.0,3,(MethodInfo *)0x0);
  if (pUVar24 == (UnityEngine_GameObject_o *)0x0) goto label_1822c7be3;
  pUVar25 = UnityEngine_GameObject__get_transform(pUVar24,(MethodInfo *)0x0);
  pSVar36 = (__this->fields)._scaleX;
  pUVar26 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar26,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_MapEditorInspectPanel_Show_b__81_11,(MethodInfo *)0x0);
  UI_ElementFactory__CreateInputSetting
            (pUVar25,pUVar23,(Settings_BaseSetting_o *)pSVar36,"X","",
             80.0,35.0,false,(UnityEngine_Events_UnityAction_o *)0x0,pUVar26,
             (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
  pSVar36 = (__this->fields)._scaleY;
  pUVar26 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar26,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_MapEditorInspectPanel_Show_b__81_12,(MethodInfo *)0x0);
  UI_ElementFactory__CreateInputSetting
            (pUVar25,pUVar23,(Settings_BaseSetting_o *)pSVar36,"Y","",
             80.0,35.0,false,(UnityEngine_Events_UnityAction_o *)0x0,pUVar26,
             (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
  pSVar36 = (__this->fields)._scaleZ;
  pUVar26 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar26,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_MapEditorInspectPanel_Show_b__81_13,(MethodInfo *)0x0);
  UI_ElementFactory__CreateInputSetting
            (pUVar25,pUVar23,(Settings_BaseSetting_o *)pSVar36,"Z","",
             80.0,35.0,false,(UnityEngine_Events_UnityAction_o *)0x0,pUVar26,
             (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
  UI_BasePanel__CreateHorizontalDivider
            ((UI_BasePanel_o *)__this,(__this->fields).SinglePanel,1.0,(MethodInfo *)0x0);
  pSVar22 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                      (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  pUVar23 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(pUVar23,0x12,160.0,20.0,pSVar22,(MethodInfo *)0x0);
  pUVar25 = UI_MapEditorInspectPanel__CreateSection
                      (__this,"Collision","Collision",pUVar23,false,
                       (UnityEngine_Transform_o *)0x0,(MethodInfo *)0x0);
  pSVar20 = (__this->fields)._mapObjects;
  pSVar28 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_MapObject_bool);
  System_Func_object__bool____ctor
            ((System_Predicate_object__o *)pSVar28,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_MapEditorInspectPanel_HasNonConvexMeshCollider,(MethodInfo_B61EB0 *)0x0);
  bVar15 = System_Linq_Enumerable__Any_object__6b6920
                     ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar20,
                      (System_Func_TSource__bool__o *)pSVar28,
                      (MethodInfo_6B6920 *)MethodInfo_System_Linq_Enumerable_Any_MapObject);
  if (bVar15) {
    pSVar29 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
    if ((TypeInfo_Map_MapObjectCollideMode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideMode);
    }
    if (pSVar29 == (System_String_array *)0x0) goto label_1822c7be3;
    if ((int)pSVar29->max_length == 0) goto label_1822c7ca4;
    pSVar22 = TypeInfo_Map_MapObjectCollideMode->static_fields->Physical;
    pSVar29->m_Items[0] = pSVar22;
    Il2CppCodeGenWriteBarrier(pSVar29->m_Items,pSVar22);
    if ((uint)pSVar29->max_length < 2) goto label_1822c7ca4;
    pSVar22 = TypeInfo_Map_MapObjectCollideMode->static_fields->None;
    pSVar29->m_Items[1] = pSVar22;
    targetAddress = pSVar29->m_Items + 1;
  }
  else {
    pSVar29 = (System_String_array *)SZArrayNew(TypeInfo_string_array,3);
    if ((TypeInfo_Map_MapObjectCollideMode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideMode);
    }
    if (pSVar29 == (System_String_array *)0x0) goto label_1822c7be3;
    if ((int)pSVar29->max_length == 0) goto label_1822c7ca4;
    pSVar22 = TypeInfo_Map_MapObjectCollideMode->static_fields->Physical;
    pSVar29->m_Items[0] = pSVar22;
    Il2CppCodeGenWriteBarrier(pSVar29->m_Items,pSVar22);
    if ((uint)pSVar29->max_length < 2) goto label_1822c7ca4;
    pSVar22 = TypeInfo_Map_MapObjectCollideMode->static_fields->Region;
    pSVar29->m_Items[1] = pSVar22;
    Il2CppCodeGenWriteBarrier(pSVar29->m_Items + 1,pSVar22);
    if ((uint)pSVar29->max_length < 3) goto label_1822c7ca4;
    pSVar22 = TypeInfo_Map_MapObjectCollideMode->static_fields->None;
    pSVar29->m_Items[2] = pSVar22;
    targetAddress = pSVar29->m_Items + 2;
  }
  Il2CppCodeGenWriteBarrier(targetAddress,pSVar22);
  pSVar6 = (__this->fields)._collideMode;
  pSVar29 = UI_MapEditorInspectPanel__WithMixedOption
                      (__this,pSVar29,"CollideMode",pSVar6,(MethodInfo *)0x0);
  pUVar26 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar26,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_MapEditorInspectPanel_Show_b__81_14,(MethodInfo *)0x0);
  UI_ElementFactory__CreateDropdownSetting
            (pUVar25,pUVar23,(Settings_BaseSetting_o *)pSVar6,"Collide Mode",pSVar29,
             "",140.0,30.0,300.0,(System_Nullable_float__o)0x0,pUVar26,
             (System_Int32_array *)0x0,(MethodInfo *)0x0);
  pSVar6 = (__this->fields)._collideWith;
  pSVar29 = (System_String_array *)SZArrayNew(TypeInfo_string_array,8);
  if ((TypeInfo_Map_MapObjectCollideWith->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideWith);
  }
  if (pSVar29 == (System_String_array *)0x0) goto label_1822c7be3;
  if ((int)pSVar29->max_length == 0) {
label_1822c7ca4:
    ThrowIndexOutOfRangeException();
  }
  pSVar22 = TypeInfo_Map_MapObjectCollideWith->static_fields->Entities;
  pSVar29->m_Items[0] = pSVar22;
  Il2CppCodeGenWriteBarrier(pSVar29->m_Items,pSVar22);
  if ((uint)pSVar29->max_length < 2) goto label_1822c7ca4;
  pSVar22 = TypeInfo_Map_MapObjectCollideWith->static_fields->Characters;
  pSVar29->m_Items[1] = pSVar22;
  Il2CppCodeGenWriteBarrier(pSVar29->m_Items + 1,pSVar22);
  if ((uint)pSVar29->max_length < 3) goto label_1822c7ca4;
  pSVar22 = TypeInfo_Map_MapObjectCollideWith->static_fields->Titans;
  pSVar29->m_Items[2] = pSVar22;
  Il2CppCodeGenWriteBarrier(pSVar29->m_Items + 2,pSVar22);
  if ((uint)pSVar29->max_length < 4) goto label_1822c7ca4;
  pSVar22 = TypeInfo_Map_MapObjectCollideWith->static_fields->Humans;
  pSVar29->m_Items[3] = pSVar22;
  Il2CppCodeGenWriteBarrier(pSVar29->m_Items + 3,pSVar22);
  if ((uint)pSVar29->max_length < 5) goto label_1822c7ca4;
  pSVar22 = TypeInfo_Map_MapObjectCollideWith->static_fields->Projectiles;
  pSVar29->m_Items[4] = pSVar22;
  Il2CppCodeGenWriteBarrier(pSVar29->m_Items + 4,pSVar22);
  if ((uint)pSVar29->max_length < 6) goto label_1822c7ca4;
  pSVar22 = TypeInfo_Map_MapObjectCollideWith->static_fields->Hitboxes;
  pSVar29->m_Items[5] = pSVar22;
  Il2CppCodeGenWriteBarrier(pSVar29->m_Items + 5,pSVar22);
  if ((uint)pSVar29->max_length < 7) goto label_1822c7ca4;
  pSVar22 = TypeInfo_Map_MapObjectCollideWith->static_fields->MapObjects;
  pSVar29->m_Items[6] = pSVar22;
  Il2CppCodeGenWriteBarrier(pSVar29->m_Items + 6,pSVar22);
  if ((uint)pSVar29->max_length < 8) goto label_1822c7ca4;
  pSVar22 = TypeInfo_Map_MapObjectCollideWith->static_fields->All;
  pSVar29->m_Items[7] = pSVar22;
  Il2CppCodeGenWriteBarrier(pSVar29->m_Items + 7,pSVar22);
  pSVar29 = UI_MapEditorInspectPanel__WithMixedOption
                      (__this,pSVar29,"CollideWith",(__this->fields)._collideWith,(MethodInfo *)0x0);
  pUVar26 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar26,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_MapEditorInspectPanel_Show_b__81_15,(MethodInfo *)0x0);
  UI_ElementFactory__CreateDropdownSetting
            (pUVar25,pUVar23,(Settings_BaseSetting_o *)pSVar6,"Collide With",pSVar29,
             "",140.0,30.0,300.0,(System_Nullable_float__o)0x0,pUVar26,
             (System_Int32_array *)0x0,(MethodInfo *)0x0);
  pSVar6 = (__this->fields)._physicsMaterial;
  pSVar29 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
  if ((TypeInfo_Map_MapObjectPhysicsMaterial->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectPhysicsMaterial);
  }
  if (pSVar29 == (System_String_array *)0x0) goto label_1822c7be3;
  if ((int)pSVar29->max_length == 0) goto label_1822c7ca4;
  pSVar22 = TypeInfo_Map_MapObjectPhysicsMaterial->static_fields->Default;
  pSVar29->m_Items[0] = pSVar22;
  Il2CppCodeGenWriteBarrier(pSVar29->m_Items,pSVar22);
  if ((uint)pSVar29->max_length < 2) goto label_1822c7ca4;
  pSVar22 = TypeInfo_Map_MapObjectPhysicsMaterial->static_fields->Ice;
  pSVar29->m_Items[1] = pSVar22;
  Il2CppCodeGenWriteBarrier(pSVar29->m_Items + 1,pSVar22);
  pSVar29 = UI_MapEditorInspectPanel__WithMixedOption
                      (__this,pSVar29,"PhysicsMaterial",(__this->fields)._physicsMaterial,
                       (MethodInfo *)0x0);
  pUVar26 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar26,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_MapEditorInspectPanel_Show_b__81_16,(MethodInfo *)0x0);
  UI_ElementFactory__CreateDropdownSetting
            (pUVar25,pUVar23,(Settings_BaseSetting_o *)pSVar6,"Physics Material",pSVar29,
             "",140.0,30.0,300.0,(System_Nullable_float__o)0x0,pUVar26,
             (System_Int32_array *)0x0,(MethodInfo *)0x0);
  UI_BasePanel__CreateHorizontalDivider
            ((UI_BasePanel_o *)__this,(__this->fields).SinglePanel,1.0,(MethodInfo *)0x0);
  pUVar25 = UI_MapEditorInspectPanel__CreateSection
                      (__this,"Shader","Shader",pUVar23,false,
                       (UnityEngine_Transform_o *)0x0,(MethodInfo *)0x0);
  pSVar5 = (__this->fields)._visible;
  pUVar26 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar26,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_MapEditorInspectPanel_Show_b__81_17,(MethodInfo *)0x0);
  UI_ElementFactory__CreateToggleSetting
            (pUVar25,pUVar23,(Settings_BaseSetting_o *)pSVar5,"Visible","",25.0
             ,25.0,pUVar26,(MethodInfo *)0x0);
  pSVar6 = (__this->fields)._shader;
  pSVar29 = (System_String_array *)SZArrayNew(TypeInfo_string_array,6);
  if ((TypeInfo_Map_MapObjectShader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectShader);
  }
  if (pSVar29 == (System_String_array *)0x0) goto label_1822c7c9e;
  if ((int)pSVar29->max_length == 0) {
label_1822c7c98:
    ThrowIndexOutOfRangeException();
  }
  pSVar22 = TypeInfo_Map_MapObjectShader->static_fields->Default;
  pSVar29->m_Items[0] = pSVar22;
  Il2CppCodeGenWriteBarrier(pSVar29->m_Items,pSVar22);
  if ((uint)pSVar29->max_length < 2) goto label_1822c7c98;
  pSVar22 = TypeInfo_Map_MapObjectShader->static_fields->Basic;
  pSVar29->m_Items[1] = pSVar22;
  Il2CppCodeGenWriteBarrier(pSVar29->m_Items + 1,pSVar22);
  if ((uint)pSVar29->max_length < 3) goto label_1822c7c98;
  pSVar22 = TypeInfo_Map_MapObjectShader->static_fields->Transparent;
  pSVar29->m_Items[2] = pSVar22;
  Il2CppCodeGenWriteBarrier(pSVar29->m_Items + 2,pSVar22);
  if ((uint)pSVar29->max_length < 4) goto label_1822c7c98;
  pSVar22 = TypeInfo_Map_MapObjectShader->static_fields->Reflective;
  pSVar29->m_Items[3] = pSVar22;
  Il2CppCodeGenWriteBarrier(pSVar29->m_Items + 3,pSVar22);
  if ((uint)pSVar29->max_length < 5) goto label_1822c7c98;
  pSVar22 = TypeInfo_Map_MapObjectShader->static_fields->DefaultNoTint;
  pSVar29->m_Items[4] = pSVar22;
  Il2CppCodeGenWriteBarrier(pSVar29->m_Items + 4,pSVar22);
  if ((uint)pSVar29->max_length < 6) goto label_1822c7c98;
  pSVar22 = TypeInfo_Map_MapObjectShader->static_fields->DefaultTiled;
  pSVar29->m_Items[5] = pSVar22;
  Il2CppCodeGenWriteBarrier(pSVar29->m_Items + 5,pSVar22);
  pSVar29 = UI_MapEditorInspectPanel__WithMixedOption
                      (__this,pSVar29,"Shader",(__this->fields)._shader,(MethodInfo *)0x0);
  pUVar26 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar26,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_MapEditorInspectPanel_Show_b__81_18,(MethodInfo *)0x0);
  UI_ElementFactory__CreateDropdownSetting
            (pUVar25,pUVar23,(Settings_BaseSetting_o *)pSVar6,"Shader",pSVar29,
             "",140.0,30.0,300.0,(System_Nullable_float__o)0x0,pUVar26,
             (System_Int32_array *)0x0,(MethodInfo *)0x0);
  pSVar20 = (__this->fields)._mapObjects;
  if ((TypeInfo_UI_MapEditorInspectPanel_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel_c);
  }
  pSVar28 = TypeInfo_UI_MapEditorInspectPanel_c->static_fields->__9__81_19;
  if (pSVar28 == (System_Func_MapObject__bool__o *)0x0) {
    if ((TypeInfo_UI_MapEditorInspectPanel_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel_c);
    }
    pIVar7 = (Il2CppObject *)TypeInfo_UI_MapEditorInspectPanel_c->static_fields->__9;
    pSVar28 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_MapObject_bool);
    System_Func_object__bool____ctor
              ((System_Predicate_object__o *)pSVar28,pIVar7,
               (intptr_t)MethodInfo_UI_MapEditorInspectPanel_c_Show_b__81_19,(MethodInfo_B61EB0 *)0x0);
    TypeInfo_UI_MapEditorInspectPanel_c->static_fields->__9__81_19 = pSVar28;
    Il2CppCodeGenWriteBarrier(&TypeInfo_UI_MapEditorInspectPanel_c->static_fields->__9__81_19,pSVar28);
  }
  bVar15 = System_Linq_Enumerable__All_object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar20,
                      (System_Func_TSource__bool__o *)pSVar28,
                      (MethodInfo_6B5F20 *)MethodInfo_System_Linq_Enumerable_All_MapObject);
  pSVar20 = (__this->fields)._mapObjects;
  if ((TypeInfo_UI_MapEditorInspectPanel_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel_c);
  }
  pSVar28 = TypeInfo_UI_MapEditorInspectPanel_c->static_fields->__9__81_20;
  if (pSVar28 == (System_Func_MapObject__bool__o *)0x0) {
    if ((TypeInfo_UI_MapEditorInspectPanel_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel_c);
    }
    pIVar7 = (Il2CppObject *)TypeInfo_UI_MapEditorInspectPanel_c->static_fields->__9;
    pSVar28 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_MapObject_bool);
    System_Func_object__bool____ctor
              ((System_Predicate_object__o *)pSVar28,pIVar7,
               (intptr_t)MethodInfo_UI_MapEditorInspectPanel_c_Show_b__81_20,(MethodInfo_B61EB0 *)0x0);
    TypeInfo_UI_MapEditorInspectPanel_c->static_fields->__9__81_20 = pSVar28;
    Il2CppCodeGenWriteBarrier(&TypeInfo_UI_MapEditorInspectPanel_c->static_fields->__9__81_20,pSVar28);
  }
  bVar16 = System_Linq_Enumerable__All_object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar20,
                      (System_Func_TSource__bool__o *)pSVar28,
                      (MethodInfo_6B5F20 *)MethodInfo_System_Linq_Enumerable_All_MapObject);
  pSVar20 = (__this->fields)._mapObjects;
  if ((TypeInfo_UI_MapEditorInspectPanel_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel_c);
  }
  pSVar28 = TypeInfo_UI_MapEditorInspectPanel_c->static_fields->__9__81_21;
  if (pSVar28 == (System_Func_MapObject__bool__o *)0x0) {
    if ((TypeInfo_UI_MapEditorInspectPanel_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel_c);
    }
    pIVar7 = (Il2CppObject *)TypeInfo_UI_MapEditorInspectPanel_c->static_fields->__9;
    pSVar28 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_MapObject_bool);
    System_Func_object__bool____ctor
              ((System_Predicate_object__o *)pSVar28,pIVar7,
               (intptr_t)MethodInfo_UI_MapEditorInspectPanel_c_Show_b__81_21,(MethodInfo_B61EB0 *)0x0);
    TypeInfo_UI_MapEditorInspectPanel_c->static_fields->__9__81_21 = pSVar28;
    Il2CppCodeGenWriteBarrier(&TypeInfo_UI_MapEditorInspectPanel_c->static_fields->__9__81_21,pSVar28);
  }
  bVar17 = System_Linq_Enumerable__All_object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar20,
                      (System_Func_TSource__bool__o *)pSVar28,
                      (MethodInfo_6B5F20 *)MethodInfo_System_Linq_Enumerable_All_MapObject);
  pSVar20 = (__this->fields)._mapObjects;
  if ((TypeInfo_UI_MapEditorInspectPanel_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel_c);
  }
  pSVar28 = TypeInfo_UI_MapEditorInspectPanel_c->static_fields->__9__81_22;
  if (pSVar28 == (System_Func_MapObject__bool__o *)0x0) {
    if ((TypeInfo_UI_MapEditorInspectPanel_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel_c);
    }
    pIVar7 = (Il2CppObject *)TypeInfo_UI_MapEditorInspectPanel_c->static_fields->__9;
    pSVar28 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_MapObject_bool);
    System_Func_object__bool____ctor
              ((System_Predicate_object__o *)pSVar28,pIVar7,
               (intptr_t)MethodInfo_UI_MapEditorInspectPanel_c_Show_b__81_22,(MethodInfo_B61EB0 *)0x0);
    TypeInfo_UI_MapEditorInspectPanel_c->static_fields->__9__81_22 = pSVar28;
    Il2CppCodeGenWriteBarrier(&TypeInfo_UI_MapEditorInspectPanel_c->static_fields->__9__81_22,pSVar28);
  }
  bVar18 = System_Linq_Enumerable__All_object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar20,
                      (System_Func_TSource__bool__o *)pSVar28,
                      (MethodInfo_6B5F20 *)MethodInfo_System_Linq_Enumerable_All_MapObject);
  pSVar20 = (__this->fields)._mapObjects;
  if ((TypeInfo_UI_MapEditorInspectPanel_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel_c);
  }
  pSVar28 = TypeInfo_UI_MapEditorInspectPanel_c->static_fields->__9__81_23;
  if (pSVar28 == (System_Func_MapObject__bool__o *)0x0) {
    if ((TypeInfo_UI_MapEditorInspectPanel_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel_c);
    }
    pIVar7 = (Il2CppObject *)TypeInfo_UI_MapEditorInspectPanel_c->static_fields->__9;
    pSVar28 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_MapObject_bool);
    System_Func_object__bool____ctor
              ((System_Predicate_object__o *)pSVar28,pIVar7,
               (intptr_t)MethodInfo_UI_MapEditorInspectPanel_c_Show_b__81_23,(MethodInfo_B61EB0 *)0x0);
    TypeInfo_UI_MapEditorInspectPanel_c->static_fields->__9__81_23 = pSVar28;
    Il2CppCodeGenWriteBarrier(&TypeInfo_UI_MapEditorInspectPanel_c->static_fields->__9__81_23,pSVar28);
  }
  bVar19 = System_Linq_Enumerable__All_object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar20,
                      (System_Func_TSource__bool__o *)pSVar28,
                      (MethodInfo_6B5F20 *)MethodInfo_System_Linq_Enumerable_All_MapObject);
  if (bVar15) {
    pUVar8 = (__this->fields)._menu;
    if (pUVar8 == (UI_MapEditorMenu_o *)0x0) goto label_1822c7c9e;
    pSVar9 = (__this->fields)._color;
    pUVar10 = (pUVar8->fields).ColorPickPopup;
    pUVar26 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar26,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_UI_MapEditorInspectPanel_Show_b__81_24,(MethodInfo *)0x0);
    UI_ElementFactory__CreateColorSetting
              (pUVar25,pUVar23,(Settings_BaseSetting_o *)pSVar9,"Color",pUVar10,
               "",90.0,25.0,pUVar26,(MethodInfo *)0x0);
  }
  if (bVar16) {
    pUVar24 = UI_ElementFactory__CreateHorizontalGroup((__this->fields).SinglePanel,20.0,3,(MethodInfo *)0x0);
    if (pUVar24 == (UnityEngine_GameObject_o *)0x0) goto label_1822c7c9e;
    UnityEngine_GameObject__get_transform(pUVar24,(MethodInfo *)0x0);
    pSVar36 = (__this->fields)._tilingX;
    pUVar26 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar26,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_UI_MapEditorInspectPanel_Show_b__81_25,(MethodInfo *)0x0);
    UI_ElementFactory__CreateInputSetting
              (pUVar25,pUVar23,(Settings_BaseSetting_o *)pSVar36,"Tiling X","",
               80.0,35.0,false,(UnityEngine_Events_UnityAction_o *)0x0,pUVar26,
               (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
    pSVar36 = (__this->fields)._tilingY;
    pUVar26 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    method_00 = MethodInfo_UI_MapEditorInspectPanel_Show_b__81_26;
label_1822c6761:
    UnityEngine_Events_UnityAction___ctor
              ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar26,(Il2CppObject *)__this,
               (intptr_t)method_00,(MethodInfo *)0x0);
    pSVar22 = "Tiling Y";
  }
  else {
    if (bVar17) {
      pSVar36 = (__this->fields)._tilingX;
      pUVar26 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
      UnityEngine_Events_UnityAction___ctor
                ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar26,(Il2CppObject *)__this,
                 (intptr_t)MethodInfo_UI_MapEditorInspectPanel_Show_b__81_27,(MethodInfo *)0x0);
      UI_ElementFactory__CreateInputSetting
                (pUVar25,pUVar23,(Settings_BaseSetting_o *)pSVar36,"Tiling X",""
                 ,80.0,35.0,false,(UnityEngine_Events_UnityAction_o *)0x0,pUVar26,
                 (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
      pSVar36 = (__this->fields)._tilingY;
      pUVar26 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
      method_00 = MethodInfo_UI_MapEditorInspectPanel_Show_b__81_28;
      goto label_1822c6761;
    }
    if (!bVar18) goto label_1822c67bd;
    if (bVar19) {
      pUVar8 = (__this->fields)._menu;
      if (pUVar8 == (UI_MapEditorMenu_o *)0x0) goto label_1822c7c9e;
      pSVar9 = (__this->fields)._reflectColor;
      pUVar10 = (pUVar8->fields).ColorPickPopup;
      pUVar26 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
      UnityEngine_Events_UnityAction___ctor
                ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar26,(Il2CppObject *)__this,
                 (intptr_t)MethodInfo_UI_MapEditorInspectPanel_Show_b__81_33,(MethodInfo *)0x0);
      UI_ElementFactory__CreateColorSetting
                (pUVar25,pUVar23,(Settings_BaseSetting_o *)pSVar9,"Reflect color",pUVar10,
                 "",90.0,25.0,pUVar26,(MethodInfo *)0x0);
    }
    pUVar24 = UI_ElementFactory__CreateHorizontalGroup(pUVar25,20.0,3,(MethodInfo *)0x0);
    if (pUVar24 == (UnityEngine_GameObject_o *)0x0) {
label_1822c7c9e:
      ThrowNullReferenceException();
    }
    pUVar27 = UnityEngine_GameObject__get_transform(pUVar24,(MethodInfo *)0x0);
    pUVar24 = UI_ElementFactory__CreateDefaultLabel
                        (pUVar27,pUVar23,"Texture",0,3,(MethodInfo *)0x0);
    if ((pUVar24 == (UnityEngine_GameObject_o *)0x0) ||
       (pUVar30 = UnityEngine_GameObject__GetComponent_object_
                            (pUVar24,(MethodInfo_6F5650 *)
                                     MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement),
       pUVar30 == (UnityEngine_UI_LayoutElement_o *)0x0)) goto label_1822c7c9e;
    (*(pUVar30->klass->vtable)._36_set_preferredWidth.methodPtr)
              (pUVar30,160.0,(pUVar30->klass->vtable)._36_set_preferredWidth.method);
    pSVar6 = (__this->fields)._texture;
    if (pSVar6 == (Settings_StringSetting_o *)0x0) goto label_1822c7c9e;
    pSVar22 = (pSVar6->fields)._value;
    pUVar26 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar26,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_UI_MapEditorInspectPanel_Show_b__81_34,(MethodInfo *)0x0);
    UI_ElementFactory__CreateDefaultButton(pUVar27,pUVar23,pSVar22,0.0,0.0,pUVar26,(MethodInfo *)0x0);
    pSVar36 = (__this->fields)._tilingX;
    pUVar26 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar26,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_UI_MapEditorInspectPanel_Show_b__81_35,(MethodInfo *)0x0);
    UI_ElementFactory__CreateInputSetting
              (pUVar25,pUVar23,(Settings_BaseSetting_o *)pSVar36,"Tiling X","",
               80.0,35.0,false,(UnityEngine_Events_UnityAction_o *)0x0,pUVar26,
               (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
    pSVar36 = (__this->fields)._tilingY;
    pUVar26 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar26,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_UI_MapEditorInspectPanel_Show_b__81_36,(MethodInfo *)0x0);
    UI_ElementFactory__CreateInputSetting
              (pUVar25,pUVar23,(Settings_BaseSetting_o *)pSVar36,"Tiling Y","",
               80.0,35.0,false,(UnityEngine_Events_UnityAction_o *)0x0,pUVar26,
               (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
    pSVar36 = (__this->fields)._offsetX;
    pUVar26 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar26,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_UI_MapEditorInspectPanel_Show_b__81_37,(MethodInfo *)0x0);
    UI_ElementFactory__CreateInputSetting
              (pUVar25,pUVar23,(Settings_BaseSetting_o *)pSVar36,"Offset X","",
               80.0,35.0,false,(UnityEngine_Events_UnityAction_o *)0x0,pUVar26,
               (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
    pSVar36 = (__this->fields)._offsetY;
    pUVar26 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar26,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_UI_MapEditorInspectPanel_Show_b__81_38,(MethodInfo *)0x0);
    pSVar22 = "Offset Y";
  }
  UI_ElementFactory__CreateInputSetting
            (pUVar25,pUVar23,(Settings_BaseSetting_o *)pSVar36,pSVar22,"",80.0,35.0,false,
             (UnityEngine_Events_UnityAction_o *)0x0,pUVar26,(System_Func_string__bool__o *)0x0,
             (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
label_1822c67bd:
  local_140 = pUVar23;
  UI_BasePanel__CreateHorizontalDivider
            ((UI_BasePanel_o *)__this,(__this->fields).SinglePanel,1.0,(MethodInfo *)0x0);
  local_res10 = 0;
label_1822c67f0:
  pSVar11 = (__this->fields)._components;
  if (pSVar11 != (System_Collections_Generic_List_Dictionary_string__BaseSetting___o *)0x0) {
    if (local_res10 < (pSVar11->fields)._size) {
      object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel_c__DisplayClass81_0)
      ;
      System_Configuration_ConfigurationCollectionAttribute___ctor
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
      if (object != (UI_MapEditorInspectPanel___c__DisplayClass81_0_o *)0x0) {
        (object->fields).__4__this = __this;
        Il2CppCodeGenWriteBarrier(&(object->fields).__4__this,__this);
        pSVar33 = (__this->fields)._componentNames;
        if (pSVar33 != (System_Collections_Generic_List_string__o *)0x0) {
          pSVar22 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar33,local_res10,
                               (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_string_get_Item
                              );
          (object->fields).componentName = pSVar22;
          Il2CppCodeGenWriteBarrier(&(object->fields).componentName,pSVar22);
          pSVar22 = System_String__Concat_1969e50
                              ("Component:",(object->fields).componentName,(MethodInfo *)0x0);
          pUVar25 = UI_MapEditorInspectPanel__CreateSection
                              (__this,pSVar22,(object->fields).componentName,pUVar23,true,
                               (UnityEngine_Transform_o *)0x0,(MethodInfo *)0x0);
          pSVar11 = (__this->fields)._components;
          local_170 = pUVar25;
          if (pSVar11 != (System_Collections_Generic_List_Dictionary_string__BaseSetting___o *)0x0) {
            local_138 = pUVar25;
            settings = (System_Collections_Generic_Dictionary_string__BaseSetting__o *)
                       System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                 ((System_Collections_Generic_List_object__o *)pSVar11,local_res10,
                                  (MethodInfo_92B830 *)
                                  MethodInfo_System_Collections_Generic_List_Dictionary_string_BaseSetting_get_Item
                                 );
            local_178 = settings;
            if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
            }
            pSVar22 = CustomLogic_CustomLogicManager__GetModeDescription(settings,(MethodInfo *)0x0);
            bVar15 = System_String__op_Inequality(pSVar22,"",(MethodInfo *)0x0);
            if (bVar15) {
              UI_ElementFactory__CreateDefaultLabel(pUVar25,pUVar23,pSVar22,0,3,(MethodInfo *)0x0);
            }
            __this_03 = il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_string
                                  );
            System_Collections_Generic_Dictionary_object__object____ctor
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_03,
                       (MethodInfo_1454140 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
            __this_04 = il2cpp_codegen_object_new
                                  ((Il2CppClass *)
                                   TypeInfo_System_Collections_Generic_Dictionary_string_string_array);
            local_168 = __this_04;
            System_Collections_Generic_Dictionary_object__object____ctor
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_04,
                       (MethodInfo_1454140 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_string_array_ctor);
            local_148 = il2cpp_codegen_object_new
                                  ((Il2CppClass *)
                                   TypeInfo_System_Collections_Generic_Dictionary_string_Transform);
            System_Collections_Generic_Dictionary_object__ProbeReferenceVolume_CellData_PerScenarioData____ctor
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)local_148,
                       (MethodInfo_1454140 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_Transform_ctor);
            if ((settings != (System_Collections_Generic_Dictionary_string__BaseSetting__o *)0x0) &&
               (pSVar31 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
                          System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys
                                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)settings,
                                     (MethodInfo_13C6500 *)
                                     MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_get_Keys
                                    ),
               pSVar31 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
              local_188 = __this_04;
              System_Collections_Generic_Dictionary_ValueCollection_fsPortableReflection_AttributeQuery__object___GetEnumerator
                        (local_108,pSVar31,
                         (MethodInfo_F1E4D0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_BaseSetting_GetEnumerator
                        );
              local_160.fields._dictionary = local_108[0].fields._dictionary;
              local_160.fields._index = local_108[0].fields._index;
              local_160.fields._version = local_108[0].fields._version;
              local_160.fields._currentKey = local_108[0].fields._currentValue;
              local_130 = 0;
              local_128 = &local_160;
label_1822c6a35:
              bVar15 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__StyleComplexSelector_PseudoStateData___MoveNext
                                 (&local_160,
                                  (MethodInfo_156BDD0 *)
                                  MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_BaseSetting_MoveNext
                                 );
              pIVar7 = local_160.fields._currentKey;
              if (bVar15) {
                pSVar32 = System_Collections_Generic_Dictionary_object__object___get_Item
                                    ((System_Collections_Generic_Dictionary_object__object__o *)settings,
                                     local_160.fields._currentKey,
                                     (MethodInfo_147A5B0 *)
                                     MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_get_Item
                                    );
                if ((System_String_o *)pIVar7 == (System_String_o *)0x0) {
                  ThrowNullReferenceException();
                }
                bVar15 = System_String__EndsWith
                                   ((System_String_o *)pIVar7,"Tooltip",(MethodInfo *)0x0);
                if ((bVar15) && (pSVar32 != (Settings_BaseSetting_o *)0x0)) {
                  bVar2 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
                  if ((bVar2 <= (pSVar32->klass->_2).typeHierarchyDepth) &&
                     ((pSVar32->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] ==
                      (Il2CppClass *)TypeInfo_Settings_StringSetting)) {
                    pSVar22 = System_String__Substring_1972740
                                        ((System_String_o *)pIVar7,0,
                                         ((System_String_Fields *)((longlong)pIVar7 + 0x10))->_stringLength +
                                         -7,(MethodInfo *)0x0);
                    bVar2 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
                    if (((pSVar32->klass->_2).typeHierarchyDepth < bVar2) ||
                       ((pSVar32->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
                        (Il2CppClass *)TypeInfo_Settings_StringSetting)) {
                      il2cpp_codegen_raise_invalid_cast_exception(pSVar32,TypeInfo_Settings_StringSetting);
                    }
                    if (__this_03 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) {
                      ThrowNullReferenceException();
                    }
                    System_Collections_Generic_Dictionary_object__object___set_Item
                              ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
                               (Il2CppObject *)pSVar22,(*(uint64_t *)((char *)pSVar32 + 0x20)),
                               (MethodInfo_147A7F0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
                    settings = local_178;
                    goto label_1822c6a35;
                  }
                }
                bVar15 = System_String__EndsWith
                                   ((System_String_o *)pIVar7,"Dropbox",(MethodInfo *)0x0);
                settings = local_178;
                if ((bVar15) && (pSVar32 != (Settings_BaseSetting_o *)0x0)) {
                  bVar2 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
                  if ((bVar2 <= (pSVar32->klass->_2).typeHierarchyDepth) &&
                     ((pSVar32->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] ==
                      (Il2CppClass *)TypeInfo_Settings_StringSetting)) {
                    pSVar33 = il2cpp_codegen_object_new
                                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
                    System_Collections_Generic_List_object____ctor
                              ((System_Collections_Generic_LowLevelList_T__o *)pSVar33,
                               (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
                    bVar2 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
                    if (((pSVar32->klass->_2).typeHierarchyDepth < bVar2) ||
                       ((pSVar32->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
                        (Il2CppClass *)TypeInfo_Settings_StringSetting)) {
                      il2cpp_codegen_raise_invalid_cast_exception(pSVar32);
                    }
                    if ((*(uint64_t *)((char *)pSVar32 + 0x20)) == (System_String_o *)0x0) {
                      ThrowNullReferenceException();
                    }
                    pSVar29 = System_String__Split((*(uint64_t *)((char *)pSVar32 + 0x20)),0x2c,0,(MethodInfo *)0x0);
                    local_180[0] = 0;
                    if (pSVar29 == (System_String_array *)0x0) {
                      ThrowNullReferenceException();
                    }
                    for (; (int)local_180[0] < (int)pSVar29->max_length; local_180[0] = local_180[0] + 1) {
                      if ((uint)pSVar29->max_length <= local_180[0]) {
                        ThrowIndexOutOfRangeException();
                      }
                      if (pSVar29->m_Items[(int)local_180[0]] == (System_String_o *)0x0) {
                        ThrowNullReferenceException();
                      }
                      pSVar22 = System_String__Trim(pSVar29->m_Items[(int)local_180[0]],(MethodInfo *)0x0);
                      if (pSVar33 == (System_Collections_Generic_List_string__o *)0x0) {
                        ThrowNullReferenceException();
                      }
                      il2cpp_runtime_helper_180012890(pSVar33,pSVar22,MethodInfo_System_Collections_Generic_List_string_Add);
                    }
                    if (pSVar33 == (System_Collections_Generic_List_string__o *)0x0) {
                      ThrowNullReferenceException();
                    }
                    if ((pSVar33->fields)._size == 0) {
                      il2cpp_runtime_helper_180012890(pSVar33,"None",
                                    MethodInfo_System_Collections_Generic_List_string_Add);
                    }
                    pSVar22 = System_String__Substring_1972740
                                        ((System_String_o *)pIVar7,0,
                                         ((System_String_Fields *)((longlong)pIVar7 + 0x10))->_stringLength +
                                         -7,(MethodInfo *)0x0);
                    value = System_Collections_Generic_List_object___ToArray
                                      ((System_Collections_Generic_List_T__o *)pSVar33,
                                       (MethodInfo_929FE0 *)
                                       MethodInfo_System_Collections_Generic_List_string_ToArray);
                    if (local_168 == (System_Collections_Generic_Dictionary_string__string____o *)0x0) {
                      ThrowNullReferenceException();
                    }
                    System_Collections_Generic_Dictionary_object__object___set_Item
                              ((System_Collections_Generic_Dictionary_object__object__o *)local_168,
                               (Il2CppObject *)pSVar22,&value->obj,
                               (MethodInfo_147A7F0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_string_string_array_set_Item);
                    settings = local_178;
                  }
                }
                goto label_1822c6a35;
              }
              System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                        ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_160,
                         MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_BaseSetting_Dispose
                        );
              local_110 = object;
              pSVar31 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
                        System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys
                                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)local_178,
                                   (MethodInfo_13C6500 *)
                                   MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_get_Keys
                                  );
              if (pSVar31 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
                System_Collections_Generic_Dictionary_ValueCollection_fsPortableReflection_AttributeQuery__object___GetEnumerator
                          (local_108,pSVar31,
                           (MethodInfo_F1E4D0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_BaseSetting_GetEnumerator
                          );
                local_160.fields._dictionary = local_108[0].fields._dictionary;
                local_160.fields._index = local_108[0].fields._index;
                local_160.fields._version = local_108[0].fields._version;
                local_160.fields._currentKey = local_108[0].fields._currentValue;
                local_120 = 0;
                local_118 = &local_160;
label_1822c6e36:
                do {
                  bVar15 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__StyleComplexSelector_PseudoStateData___MoveNext
                                     (&local_160,
                                      (MethodInfo_156BDD0 *)
                                      MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_BaseSetting_MoveNext
                                     );
                  pIVar7 = local_160.fields._currentKey;
                  if (!bVar15) goto label_1822c7991;
                  object_00 = il2cpp_codegen_object_new
                                        ((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel_c__DisplayClass81_1)
                  ;
                  System_Configuration_ConfigurationCollectionAttribute___ctor
                            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object_00,
                             (MethodInfo *)0x0);
                  if (object_00 == (UI_MapEditorInspectPanel___c__DisplayClass81_1_o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  (object_00->fields).CS___8__locals1 = object;
                  Il2CppCodeGenWriteBarrier(&(object_00->fields).CS___8__locals1,object);
                  pSVar34 = (Settings_IntSetting_o *)
                            System_Collections_Generic_Dictionary_object__object___get_Item
                                      ((System_Collections_Generic_Dictionary_object__object__o *)local_178,
                                       pIVar7,(MethodInfo_147A5B0 *)
                                              MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_get_Item
                                      );
                  bVar15 = System_String__op_Equality
                                     ((System_String_o *)pIVar7,"Description",(MethodInfo *)0x0);
                  if (!bVar15) {
                    if ((System_String_o *)pIVar7 == (System_String_o *)0x0) {
                      ThrowNullReferenceException();
                    }
                    bVar15 = System_String__EndsWith
                                       ((System_String_o *)pIVar7,"Tooltip",(MethodInfo *)0x0);
                    if ((bVar15) && (pSVar34 != (Settings_IntSetting_o *)0x0)) {
                      bVar2 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
                      if ((bVar2 <= (pSVar34->klass->_2).typeHierarchyDepth) &&
                         ((pSVar34->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] ==
                          (Il2CppClass *)TypeInfo_Settings_StringSetting)) goto label_1822c6e36;
                    }
                    bVar15 = System_String__EndsWith
                                       ((System_String_o *)pIVar7,"Dropbox",(MethodInfo *)0x0);
                    if ((bVar15) && (pSVar34 != (Settings_IntSetting_o *)0x0)) {
                      bVar2 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
                      if ((bVar2 <= (pSVar34->klass->_2).typeHierarchyDepth) &&
                         ((pSVar34->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] ==
                          (Il2CppClass *)TypeInfo_Settings_StringSetting)) goto label_1822c6e36;
                    }
                    if (__this_03 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) {
                      ThrowNullReferenceException();
                    }
                    local_188 = (System_Collections_Generic_Dictionary_string__string____o *)
                                "";
                    bVar15 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                                       ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_03,
                                        pIVar7,(MethodInfo_1455450 *)
                                               MethodInfo_System_Collections_Generic_Dictionary_string_string_ContainsKey
                                       );
                    if (bVar15) {
                      local_188 = (System_Collections_Generic_Dictionary_string__string____o *)
                                  System_Collections_Generic_Dictionary_object__object___get_Item
                                            ((System_Collections_Generic_Dictionary_object__object__o *)
                                             __this_03,pIVar7,
                                             (MethodInfo_147A5B0 *)
                                             MethodInfo_System_Collections_Generic_Dictionary_string_string_get_Item
                                            );
                    }
                    if (pSVar34 == (Settings_IntSetting_o *)0x0) {
                      ThrowNullReferenceException();
                    }
                    pSVar12 = (pSVar34->fields).InspectorMetadata;
                    if (pSVar12 == (Settings_InspectorSettingMetadata_o *)0x0) {
                      ThrowNullReferenceException();
                    }
                    bVar15 = System_String__IsNullOrEmpty((pSVar12->fields).Tooltip,(MethodInfo *)0x0);
                    if (!bVar15) {
                      local_188 = (System_Collections_Generic_Dictionary_string__string____o *)
                                  (pSVar12->fields).Tooltip;
                    }
                    local_190 = local_170;
                    bVar15 = System_String__IsNullOrEmpty((pSVar12->fields).GroupId,(MethodInfo *)0x0);
                    if (!bVar15) {
                      if (local_148 == (System_Collections_Generic_Dictionary_string__Transform__o *)0x0) {
                        ThrowNullReferenceException();
                      }
                      bVar15 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                                         ((System_Collections_Generic_Dictionary_object__object__o *)local_148
                                          ,(Il2CppObject *)(pSVar12->fields).GroupId,
                                          (Il2CppObject **)&local_190,
                                          (MethodInfo_14769C0 *)
                                          MethodInfo_System_Collections_Generic_Dictionary_string_Transform_TryGetValue
                                         );
                      if (!bVar15) {
                        pUVar13 = (object_00->fields).CS___8__locals1;
                        if (pUVar13 == (UI_MapEditorInspectPanel___c__DisplayClass81_0_o *)0x0) {
                          ThrowNullReferenceException();
                        }
                        pSVar22 = System_String__Concat_1969590
                                            ("Component:",(pUVar13->fields).componentName,
                                             ":Group:",(pSVar12->fields).GroupId,(MethodInfo *)0x0
                                            );
                        bVar15 = System_String__IsNullOrEmpty((pSVar12->fields).GroupHeader,(MethodInfo *)0x0)
                        ;
                        local_190 = UI_MapEditorInspectPanel__CreateSection
                                              (__this,pSVar22,(&(pSVar12->fields).GroupId)[!bVar15],pUVar23,
                                               false,local_170,(MethodInfo *)0x0);
                        System_Collections_Generic_Dictionary_object__object___set_Item
                                  ((System_Collections_Generic_Dictionary_object__object__o *)local_148,
                                   (Il2CppObject *)(pSVar12->fields).GroupId,(Il2CppObject *)local_190,
                                   (MethodInfo_147A7F0 *)
                                   MethodInfo_System_Collections_Generic_Dictionary_string_Transform_set_Item)
                        ;
                      }
                    }
                    bVar15 = System_String__IsNullOrEmpty((pSVar12->fields).Header,(MethodInfo *)0x0);
                    if (!bVar15) {
                      UI_ElementFactory__CreateDefaultLabel
                                (local_190,pUVar23,(pSVar12->fields).Header,1,3,(MethodInfo *)0x0);
                    }
                    (object_00->fields).fieldName = (System_String_o *)pIVar7;
                    Il2CppCodeGenWriteBarrier(&(object_00->fields).fieldName,pIVar7);
                    pUVar13 = (object_00->fields).CS___8__locals1;
                    if (pUVar13 == (UI_MapEditorInspectPanel___c__DisplayClass81_0_o *)0x0) {
                      ThrowNullReferenceException();
                    }
                    pSVar22 = (pUVar13->fields).componentName;
                    fieldName = (object_00->fields).fieldName;
                    if ((TypeInfo_UI_MapEditorInspectPanel->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel);
                    }
                    pSVar22 = UI_MapEditorInspectPanel__GetComponentFieldKey
                                        (pSVar22,fieldName,(MethodInfo *)0x0);
                    pSVar33 = (pSVar12->fields).Dropbox;
                    if (pSVar33 == (System_Collections_Generic_List_string__o *)0x0) {
                      ThrowNullReferenceException();
                    }
                    if ((pSVar33->fields)._size < 1) {
                      local_1a0 = (UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
                                   *)0x0;
label_1822c71a4:
                      if (local_168 == (System_Collections_Generic_Dictionary_string__string____o *)0x0) {
                        ThrowNullReferenceException();
                      }
                      bVar15 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                                         ((System_Collections_Generic_Dictionary_TKey__TValue__o *)local_168,
                                          pIVar7,(MethodInfo_1455450 *)
                                                 MethodInfo_System_Collections_Generic_Dictionary_string_string_array_ContainsKey
                                         );
                      if (bVar15) goto label_1822c71d7;
                    }
                    else {
                      local_1a0 = System_Collections_Generic_List_object___ToArray
                                            ((System_Collections_Generic_List_T__o *)pSVar33,
                                             (MethodInfo_929FE0 *)
                                             MethodInfo_System_Collections_Generic_List_string_ToArray);
                      if (local_1a0 ==
                          (UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
                           *)0x0) goto label_1822c71a4;
label_1822c71d7:
                      bVar2 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
                      if ((bVar2 <= (pSVar34->klass->_2).typeHierarchyDepth) &&
                         ((pSVar34->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] ==
                          (Il2CppClass *)TypeInfo_Settings_StringSetting)) {
                        if (local_1a0 ==
                            (UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
                             *)0x0) {
                          if (local_168 == (System_Collections_Generic_Dictionary_string__string____o *)0x0) {
                            ThrowNullReferenceException();
                          }
                          local_1a0 = (UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
                                       *)System_Collections_Generic_Dictionary_object__object___get_Item
                                                   ((System_Collections_Generic_Dictionary_object__object__o *
                                                    )local_168,pIVar7,
                                                    (MethodInfo_147A5B0 *)
                                                    MethodInfo_System_Collections_Generic_Dictionary_string_string_array_get_Item
                                                   );
                        }
                        __this_01 = (System_Collections_Generic_HashSet_object__o *)
                                    (__this->fields)._mixedFields;
                        if (__this_01 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                          ThrowNullReferenceException();
                        }
                        bVar15 = System_Collections_Generic_HashSet_object___Contains
                                           (__this_01,(Il2CppObject *)pSVar22,
                                            (MethodInfo_1759E40 *)
                                            MethodInfo_System_Collections_Generic_HashSet_string_Contains);
                        if (bVar15) {
                          bVar2 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
                          if (((pSVar34->klass->_2).typeHierarchyDepth < bVar2) ||
                             ((pSVar34->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
                              (Il2CppClass *)TypeInfo_Settings_StringSetting)) {
                            il2cpp_codegen_raise_invalid_cast_exception(pSVar34);
                          }
                          Settings_TypedSetting_object___set_Value
                                    ((Settings_TypedSetting_T__o *)pSVar34,
                                     (Il2CppObject *)"--",
                                     (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
                          first = SZArrayNew(TypeInfo_string_array,1);
                          pSVar22 = "--";
                          if (first == (Il2CppObject *)0x0) {
                            ThrowNullReferenceException();
                          }
                          if (*(int *)&first[1].monitor == 0) {
                            ThrowIndexOutOfRangeException();
                          }
                          first[2].klass = (Il2CppClass *)"--";
                          Il2CppCodeGenWriteBarrier(&first[2].klass,pSVar22);
                          source = System_Linq_Enumerable__Concat_object_
                                             ((System_Collections_Generic_IEnumerable_TSource__o *)first,
                                              (System_Collections_Generic_IEnumerable_TSource__o *)local_1a0,
                                              (MethodInfo_6B9850 *)
                                              MethodInfo_System_Linq_Enumerable_Concat_string);
                          local_1a0 = (UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
                                       *)System_Linq_Enumerable__ToArray_object_
                                                   (source,(MethodInfo_6C7D90 *)
                                                           MethodInfo_System_Linq_Enumerable_ToArray_string);
                        }
                        pUVar25 = local_190;
                        pUVar26 = il2cpp_codegen_object_new
                                            ((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
                        UnityEngine_Events_UnityAction___ctor
                                  ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar26,
                                   (Il2CppObject *)object_00,
                                   (intptr_t)
                                   MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass81_1_Show_b__41,
                                   (MethodInfo *)0x0);
                        UI_ElementFactory__CreateDropdownSetting
                                  (pUVar25,pUVar23,(Settings_BaseSetting_o *)pSVar34,(System_String_o *)pIVar7
                                   ,(System_String_array *)local_1a0,(System_String_o *)local_188,140.0,35.0,
                                   300.0,(System_Nullable_float__o)0x0,pUVar26,(System_Int32_array *)0x0,
                                   (MethodInfo *)0x0);
                        goto label_1822c6e36;
                      }
                    }
                    pUVar25 = local_190;
                    if ((pSVar12->fields).MapObject != false) {
                      bVar2 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
                      if ((bVar2 <= (pSVar34->klass->_2).typeHierarchyDepth) &&
                         ((pSVar34->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] ==
                          (Il2CppClass *)TypeInfo_Settings_IntSetting)) {
                        pSVar35 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
                        System_Action___ctor
                                  ((UnityEngine_Font_FontTextureRebuildCallback_o *)pSVar35,
                                   (Il2CppObject *)object_00,
                                   (intptr_t)
                                   MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass81_1_Show_b__40,
                                   (MethodInfo *)0x0);
                        bVar2 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
                        if (((pSVar34->klass->_2).typeHierarchyDepth < bVar2) ||
                           ((pSVar34->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
                            (Il2CppClass *)TypeInfo_Settings_IntSetting)) {
                          il2cpp_codegen_raise_invalid_cast_exception(pSVar34);
                        }
                        UI_MapEditorInspectPanel__CreateMapObjectSetting
                                  (__this,pUVar25,pUVar23,pSVar34,(System_String_o *)pIVar7,
                                   (System_String_o *)local_188,pSVar35,(MethodInfo *)0x0);
                        goto label_1822c6e36;
                      }
                    }
                    if ((pSVar12->fields).MapObjectList != false) {
                      bVar2 = (TypeInfo_Settings_HashSetSetting_int->_2).typeHierarchyDepth;
                      if ((bVar2 <= (pSVar34->klass->_2).typeHierarchyDepth) &&
                         ((pSVar34->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] ==
                          (Il2CppClass *)TypeInfo_Settings_HashSetSetting_int)) {
                        pSVar35 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
                        System_Action___ctor
                                  ((UnityEngine_Font_FontTextureRebuildCallback_o *)pSVar35,
                                   (Il2CppObject *)object_00,
                                   (intptr_t)
                                   MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass81_1_Show_b__42,
                                   (MethodInfo *)0x0);
                        UI_MapEditorInspectPanel__CreateMapObjectListSetting
                                  (__this,pUVar25,pUVar23,(Settings_HashSetSetting_int__o *)pSVar34,
                                   (System_String_o *)pIVar7,(System_String_o *)local_188,pSVar35,
                                   (MethodInfo *)0x0);
                        goto label_1822c6e36;
                      }
                    }
                    if ((pSVar12->fields).HasSlider != false) {
                      pSVar14 = pSVar34->klass;
                      bVar2 = (TypeInfo_Settings_FloatSetting->_2).typeHierarchyDepth;
                      if (((bVar2 <= (pSVar14->_2).typeHierarchyDepth) &&
                          ((pSVar14->_2).typeHierarchy[(ulonglong)bVar2 - 1] ==
                           (Il2CppClass *)TypeInfo_Settings_FloatSetting)) ||
                         ((bVar2 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth,
                          bVar2 <= (pSVar14->_2).typeHierarchyDepth &&
                          ((pSVar14->_2).typeHierarchy[(ulonglong)bVar2 - 1] ==
                           (Il2CppClass *)TypeInfo_Settings_IntSetting)))) {
                        interval = (pSVar12->fields).SliderInterval;
                        pUVar26 = il2cpp_codegen_object_new
                                            ((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
                        UnityEngine_Events_UnityAction___ctor
                                  ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar26,
                                   (Il2CppObject *)object_00,
                                   (intptr_t)
                                   MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass81_1_Show_b__43,
                                   (MethodInfo *)0x0);
                        UI_ElementFactory__CreateSliderSetting
                                  (pUVar25,pUVar23,(Settings_BaseSetting_o *)pSVar34,(System_String_o *)pIVar7
                                   ,(System_String_o *)local_188,140.0,16.0,2,interval,pUVar26,
                                   (MethodInfo *)0x0);
                        goto label_1822c6e36;
                      }
                    }
                    pSVar14 = pSVar34->klass;
                    bVar2 = (TypeInfo_Settings_BoolSetting->_2).typeHierarchyDepth;
                    if (((pSVar14->_2).typeHierarchyDepth < bVar2) ||
                       ((pSVar14->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
                        (Il2CppClass *)TypeInfo_Settings_BoolSetting)) {
                      bVar2 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
                      if (((((pSVar14->_2).typeHierarchyDepth < bVar2) ||
                           ((pSVar14->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
                            (Il2CppClass *)TypeInfo_Settings_StringSetting)) &&
                          ((bVar2 = (TypeInfo_Settings_FloatSetting->_2).typeHierarchyDepth,
                           (pSVar14->_2).typeHierarchyDepth < bVar2 ||
                           ((pSVar14->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
                            (Il2CppClass *)TypeInfo_Settings_FloatSetting)))) &&
                         ((bVar2 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth,
                          (pSVar14->_2).typeHierarchyDepth < bVar2 ||
                          ((pSVar14->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
                           (Il2CppClass *)TypeInfo_Settings_IntSetting)))) {
                        bVar2 = (TypeInfo_Settings_ColorSetting->_2).typeHierarchyDepth;
                        if (((pSVar14->_2).typeHierarchyDepth < bVar2) ||
                           ((pSVar14->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
                            (Il2CppClass *)TypeInfo_Settings_ColorSetting)) {
                          bVar2 = (TypeInfo_Settings_Vector3Setting->_2).typeHierarchyDepth;
                          if ((bVar2 <= (pSVar14->_2).typeHierarchyDepth) &&
                             ((pSVar14->_2).typeHierarchy[(ulonglong)bVar2 - 1] ==
                              (Il2CppClass *)TypeInfo_Settings_Vector3Setting)) {
                            pUVar8 = (__this->fields)._menu;
                            if (pUVar8 == (UI_MapEditorMenu_o *)0x0) {
                              ThrowNullReferenceException();
                            }
                            vector3Popup = (pUVar8->fields).Vector3Popup;
                            pUVar26 = il2cpp_codegen_object_new
                                                ((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
                            UnityEngine_Events_UnityAction___ctor
                                      ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar26,
                                       (Il2CppObject *)object_00,
                                       (intptr_t)
                                       MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass81_1_Show_b__47,
                                       (MethodInfo *)0x0);
                            UI_ElementFactory__CreateVector3Setting
                                      (pUVar25,pUVar23,(Settings_BaseSetting_o *)pSVar34,
                                       (System_String_o *)pIVar7,vector3Popup,(System_String_o *)local_188,
                                       90.0,30.0,pUVar26,(MethodInfo *)0x0);
                          }
                        }
                        else {
                          pUVar8 = (__this->fields)._menu;
                          if (pUVar8 == (UI_MapEditorMenu_o *)0x0) {
                            ThrowNullReferenceException();
                          }
                          pUVar10 = (pUVar8->fields).ColorPickPopup;
                          pUVar26 = il2cpp_codegen_object_new
                                              ((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
                          UnityEngine_Events_UnityAction___ctor
                                    ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar26,
                                     (Il2CppObject *)object_00,
                                     (intptr_t)
                                     MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass81_1_Show_b__46,
                                     (MethodInfo *)0x0);
                          UI_ElementFactory__CreateColorSetting
                                    (pUVar25,pUVar23,(Settings_BaseSetting_o *)pSVar34,
                                     (System_String_o *)pIVar7,pUVar10,(System_String_o *)local_188,90.0,30.0,
                                     pUVar26,(MethodInfo *)0x0);
                        }
                      }
                      else {
                        pUVar26 = il2cpp_codegen_object_new
                                            ((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
                        UnityEngine_Events_UnityAction___ctor
                                  ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar26,
                                   (Il2CppObject *)__this,
                                   (intptr_t)MethodInfo_UI_MapEditorInspectPanel_Show_b__81_45,
                                   (MethodInfo *)0x0);
                        UI_ElementFactory__CreateInputSetting
                                  (pUVar25,pUVar23,(Settings_BaseSetting_o *)pSVar34,(System_String_o *)pIVar7
                                   ,(System_String_o *)local_188,140.0,35.0,false,
                                   (UnityEngine_Events_UnityAction_o *)0x0,pUVar26,
                                   (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                                   (MethodInfo *)0x0);
                      }
                    }
                    else {
                      pUVar26 = il2cpp_codegen_object_new
                                          ((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
                      UnityEngine_Events_UnityAction___ctor
                                ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar26,
                                 (Il2CppObject *)__this,
                                 (intptr_t)MethodInfo_UI_MapEditorInspectPanel_Show_b__81_44,(MethodInfo *)0x0
                                );
                      UI_ElementFactory__CreateToggleSetting
                                (pUVar25,pUVar23,(Settings_BaseSetting_o *)pSVar34,(System_String_o *)pIVar7,
                                 (System_String_o *)local_188,30.0,30.0,pUVar26,(MethodInfo *)0x0);
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
      pUVar26 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
      UnityEngine_Events_UnityAction___ctor
                ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar26,(Il2CppObject *)__this,
                 (intptr_t)MethodInfo_UI_MapEditorInspectPanel_Show_b__81_29,(MethodInfo *)0x0);
      UI_ElementFactory__CreateDefaultButton
                (pUVar25,pUVar23,"Add Component",0.0,0.0,pUVar26,(MethodInfo *)0x0);
      UI_MapEditorInspectPanel__ApplyMixedIndicators(__this,(MethodInfo *)0x0);
      UI_MapEditorInspectPanel__CaptureSyncedValues(__this,(MethodInfo *)0x0);
      pUVar25 = (__this->fields).SinglePanel;
      if ((pUVar25 != (UnityEngine_Transform_o *)0x0) &&
         (pUVar24 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pUVar25,(MethodInfo *)0x0),
         pUVar24 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar24,false,(MethodInfo *)0x0);
        if (Il2CppMethodInitialized_184347569 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_UI_MapEditorInspectPanel_WaitAndEnablePanel_d__89);
          Il2CppMethodInitialized_184347569 = '\x01';
        }
        routine = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel_WaitAndEnablePanel_d__89);
        System_Object___ctor
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)routine,(MethodInfo *)0x0);
        (routine->fields).__1__state = 0;
        (routine->fields).__4__this = __this;
        Il2CppCodeGenWriteBarrier(&(routine->fields).__4__this,__this);
        UnityEngine_MonoBehaviour__StartCoroutine_Auto
                  ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)routine,
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
  goto label_1822c7c9e;
label_1822c7991:
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_160,
             MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_BaseSetting_Dispose
            );
  pUVar26 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar26,(Il2CppObject *)object,
             (intptr_t)MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass81_0_Show_b__39,(MethodInfo *)0x0);
  UI_ElementFactory__CreateDefaultButton
            (local_170,pUVar23,"Delete",0.0,0.0,pUVar26,(MethodInfo *)0x0);
  UI_BasePanel__CreateHorizontalDivider
            ((UI_BasePanel_o *)__this,(__this->fields).SinglePanel,1.0,(MethodInfo *)0x0);
  local_res10 = local_res10 + 1;
  goto label_1822c67f0;
}


// UI.MapEditorInspectPanel$$CreateMapObjectSetting
// il2cpp: void UI_MapEditorInspectPanel__CreateMapObjectSetting (UI_MapEditorInspectPanel_o* __this, UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, Settings_IntSetting_o* setting, System_String_o* title, System_String_o* tooltip, System_Action_o* onChanged, const MethodInfo* method);
// 0x1822bd080

void UI_MapEditorInspectPanel__CreateMapObjectSetting
               (UI_MapEditorInspectPanel_o *__this,UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,
               Settings_IntSetting_o *setting,System_String_o *title,System_String_o *tooltip,
               System_Action_o *onChanged,MethodInfo *method)

{
  int32_t fontSize;
  System_String_o *themePanel;
  Settings_IntSetting_o *setting_00;
  UI_MapEditorInspectPanel___c__DisplayClass82_0_o *object;
  UI_ElementStyle_o *__this_00;
  UnityEngine_GameObject_o *pUVar1;
  UnityEngine_Transform_o *parent_00;
  UnityEngine_Events_UnityAction_o *pUVar2;
  UI_InputSettingElement_o *value;
  
  if (Il2CppMethodInitialized_184347563 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_InputSettingElement);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass82_0_CreateMapObjectSetting_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass82_0_CreateMapObjectSetting_b__1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorInspectPanel_c__DisplayClass82_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"Search");
    Il2CppMethodInitialized_184347563 = '\x01';
  }
  object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel_c__DisplayClass82_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (UI_MapEditorInspectPanel___c__DisplayClass82_0_o *)0x0) {
    (object->fields).onChanged = onChanged;
    Il2CppCodeGenWriteBarrier(&(object->fields).onChanged,onChanged);
    (object->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(object->fields).__4__this,__this);
    (object->fields).setting = setting;
    Il2CppCodeGenWriteBarrier(&(object->fields).setting,setting);
    if (style != (UI_ElementStyle_o *)0x0) {
      fontSize = (style->fields).FontSize;
      themePanel = (style->fields).ThemePanel;
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
      UI_ElementStyle___ctor(__this_00,fontSize,90.0,5.0,themePanel,(MethodInfo *)0x0);
      pUVar1 = UI_ElementFactory__CreateHorizontalGroup(parent,8.0,3,(MethodInfo *)0x0);
      if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
        parent_00 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0);
        setting_00 = (object->fields).setting;
        pUVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
        UnityEngine_Events_UnityAction___ctor
                  ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar2,(Il2CppObject *)object,
                   (intptr_t)
                   MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass82_0_CreateMapObjectSetting_b__0,
                   (MethodInfo *)0x0);
        pUVar1 = UI_ElementFactory__CreateInputSetting
                           (parent_00,__this_00,(Settings_BaseSetting_o *)setting_00,title,tooltip,100.0,35.0,
                            false,(UnityEngine_Events_UnityAction_o *)0x0,pUVar2,
                            (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                            (MethodInfo *)0x0);
        if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
          value = UnityEngine_GameObject__GetComponent_object_
                            (pUVar1,(MethodInfo_6F5650 *)
                                    MethodInfo_UnityEngine_GameObject_GetComponent_InputSettingElement);
          (object->fields).input = value;
          Il2CppCodeGenWriteBarrier(&(object->fields).input,value);
          pUVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
          UnityEngine_Events_UnityAction___ctor
                    ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar2,(Il2CppObject *)object,
                     (intptr_t)
                     MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass82_0_CreateMapObjectSetting_b__1,
                     (MethodInfo *)0x0);
          UI_ElementFactory__CreateDefaultButton
                    (parent_00,__this_00,"Search",80.0,35.0,pUVar2,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel$$CreateMapObjectListSetting
// il2cpp: void UI_MapEditorInspectPanel__CreateMapObjectListSetting (UI_MapEditorInspectPanel_o* __this, UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, Settings_HashSetSetting_int__o* setting, System_String_o* title, System_String_o* tooltip, System_Action_o* onChanged, const MethodInfo* method);
// 0x1822bcd60

void UI_MapEditorInspectPanel__CreateMapObjectListSetting
               (UI_MapEditorInspectPanel_o *__this,UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,
               Settings_HashSetSetting_int__o *setting,System_String_o *title,System_String_o *tooltip,
               System_Action_o *onChanged,MethodInfo *method)

{
  int32_t fontSize;
  Settings_HashSetSetting_int__o *pSVar1;
  System_Collections_Generic_HashSet_T__o *ids;
  UI_MapEditorInspectPanel___c__DisplayClass83_0_o *object;
  UI_ElementStyle_o *__this_00;
  System_String_o *pSVar2;
  Settings_StringSetting_o *pSVar3;
  UnityEngine_GameObject_o *pUVar4;
  UnityEngine_Transform_o *parent_00;
  UnityEngine_Events_UnityAction_o *pUVar5;
  UI_InputSettingElement_o *value;
  
  if (Il2CppMethodInitialized_184347564 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_InputSettingElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorInspectPanel);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_HashSet_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass83_0_CreateMapObjectListSetting_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass83_0_CreateMapObjectListSetting_b__1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorInspectPanel_c__DisplayClass83_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"Search");
    Il2CppMethodInitialized_184347564 = '\x01';
  }
  object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel_c__DisplayClass83_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (UI_MapEditorInspectPanel___c__DisplayClass83_0_o *)0x0) {
    (object->fields).setting = setting;
    Il2CppCodeGenWriteBarrier(&(object->fields).setting,setting);
    (object->fields).onChanged = onChanged;
    Il2CppCodeGenWriteBarrier(&(object->fields).onChanged,onChanged);
    (object->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(object->fields).__4__this,__this);
    if (style != (UI_ElementStyle_o *)0x0) {
      fontSize = (style->fields).FontSize;
      pSVar2 = (style->fields).ThemePanel;
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
      UI_ElementStyle___ctor(__this_00,fontSize,90.0,5.0,pSVar2,(MethodInfo *)0x0);
      pSVar1 = (object->fields).setting;
      if (pSVar1 != (Settings_HashSetSetting_int__o *)0x0) {
        ids = (pSVar1->fields)._value;
        if ((TypeInfo_UI_MapEditorInspectPanel->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel);
        }
        pSVar2 = UI_MapEditorInspectPanel__SerializeMapObjectIds
                           ((System_Collections_Generic_IEnumerable_int__o *)ids,(MethodInfo *)0x0);
        pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
        Settings_StringSetting___ctor_1f27ee0(pSVar3,pSVar2,0x7fffffff,(MethodInfo *)0x0);
        (object->fields).serialized = pSVar3;
        Il2CppCodeGenWriteBarrier(&(object->fields).serialized,pSVar3);
        pUVar4 = UI_ElementFactory__CreateHorizontalGroup(parent,8.0,3,(MethodInfo *)0x0);
        if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
          parent_00 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
          pSVar3 = (object->fields).serialized;
          pUVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
          UnityEngine_Events_UnityAction___ctor
                    ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar5,(Il2CppObject *)object,
                     (intptr_t)
                     MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass83_0_CreateMapObjectListSetting_b__0,
                     (MethodInfo *)0x0);
          pUVar4 = UI_ElementFactory__CreateInputSetting
                             (parent_00,__this_00,(Settings_BaseSetting_o *)pSVar3,title,tooltip,140.0,35.0,
                              false,(UnityEngine_Events_UnityAction_o *)0x0,pUVar5,
                              (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                              (MethodInfo *)0x0);
          if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
            value = UnityEngine_GameObject__GetComponent_object_
                              (pUVar4,(MethodInfo_6F5650 *)
                                      MethodInfo_UnityEngine_GameObject_GetComponent_InputSettingElement);
            (object->fields).input = value;
            Il2CppCodeGenWriteBarrier(&(object->fields).input,value);
            pUVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
            UnityEngine_Events_UnityAction___ctor
                      ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar5,(Il2CppObject *)object,
                       (intptr_t)
                       MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass83_0_CreateMapObjectListSetting_b__1
                       ,(MethodInfo *)0x0);
            UI_ElementFactory__CreateDefaultButton
                      (parent_00,__this_00,"Search",80.0,35.0,pUVar5,(MethodInfo *)0x0);
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
// 0x1822c1650

System_Collections_Generic_HashSet_int__o *
UI_MapEditorInspectPanel__ParseMapObjectIds(System_String_o *value,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_HashSet_int__o *__this;
  System_Char_array *separator;
  System_String_array *pSVar2;
  System_String_o *s;
  uint uVar3;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_184347565 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_char_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_int);
    Il2CppMethodInitialized_184347565 = '\x01';
  }
  local_res8[0] = 0;
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
  System_Collections_Generic_HashSet_int____ctor
            (__this,(MethodInfo_176CDF0 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor);
  separator = (System_Char_array *)SZArrayNew(TypeInfo_char_array,2);
  if (separator != (System_Char_array *)0x0) {
    if (((int)separator->max_length == 0) || (separator->m_Items[0] = 0x2c, (uint)separator->max_length < 2))
    {
label_1822c179d:
      ThrowIndexOutOfRangeException();
    }
    separator->m_Items[1] = 0x2f;
    if (value != (System_String_o *)0x0) {
      pSVar2 = System_String__Split_1972160(value,separator,1,(MethodInfo *)0x0);
      if (pSVar2 != (System_String_array *)0x0) {
        uVar3 = 0;
        while( true ) {
          if ((int)pSVar2->max_length <= (int)uVar3) {
            return __this;
          }
          if ((uint)pSVar2->max_length <= uVar3) break;
          if (pSVar2->m_Items[(int)uVar3] == (System_String_o *)0x0) goto label_1822c1797;
          s = System_String__Trim(pSVar2->m_Items[(int)uVar3],(MethodInfo *)0x0);
          bVar1 = System_Int32__TryParse(s,local_res8,(MethodInfo *)0x0);
          if ((bVar1) && (-1 < local_res8[0])) {
            if (__this == (System_Collections_Generic_HashSet_int__o *)0x0) goto label_1822c1797;
            System_Collections_Generic_HashSet_int___Add
                      (__this,local_res8[0],
                       (MethodInfo_1757D20 *)MethodInfo_System_Collections_Generic_HashSet_int_Add);
          }
          uVar3 = uVar3 + 1;
        }
        goto label_1822c179d;
      }
    }
  }
label_1822c1797:
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel$$SerializeMapObjectIds
// il2cpp: System_String_o* UI_MapEditorInspectPanel__SerializeMapObjectIds (System_Collections_Generic_IEnumerable_int__o* ids, const MethodInfo* method);
// 0x1822c2f60

System_String_o *
UI_MapEditorInspectPanel__SerializeMapObjectIds
          (System_Collections_Generic_IEnumerable_int__o *ids,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_x509verify_result_to_string_t_o *pMVar2;
  System_Linq_IOrderedEnumerable_TSource__o *source;
  System_Collections_Generic_IEnumerable_TResult__o *source_00;
  System_String_array *value;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_184347566 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_OrderBy_int_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Select_int_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToArray_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_int_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_int_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorInspectPanel_c_SerializeMapObjectIds_b__85_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorInspectPanel_c_SerializeMapObjectIds_b__85_1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorInspectPanel_c);
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    Il2CppMethodInitialized_184347566 = '\x01';
  }
  if ((TypeInfo_UI_MapEditorInspectPanel_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel_c);
  }
  pSVar3 = "/";
  pMVar2 = (Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_x509verify_result_to_string_t_o *)
           TypeInfo_UI_MapEditorInspectPanel_c->static_fields->__9__85_0;
  if (pMVar2 == (Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_x509verify_result_to_string_t_o *)0x0)
  {
    if ((TypeInfo_UI_MapEditorInspectPanel_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel_c);
    }
    pIVar1 = (Il2CppObject *)TypeInfo_UI_MapEditorInspectPanel_c->static_fields->__9;
    pMVar2 = (Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_x509verify_result_to_string_t_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_int_int);
    System_Func_int__object____ctor
              (pMVar2,pIVar1,(intptr_t)MethodInfo_UI_MapEditorInspectPanel_c_SerializeMapObjectIds_b__85_0,
               (MethodInfo *)0x0);
    TypeInfo_UI_MapEditorInspectPanel_c->static_fields->__9__85_0 = (System_Func_int__int__o *)pMVar2;
    Il2CppCodeGenWriteBarrier(&TypeInfo_UI_MapEditorInspectPanel_c->static_fields->__9__85_0,pMVar2);
  }
  source = System_Linq_Enumerable__OrderBy_object__int_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)ids,
                      (System_Func_TSource__TKey__o *)pMVar2,
                      (MethodInfo_6C12E0 *)MethodInfo_System_Linq_Enumerable_OrderBy_int_int);
  if ((TypeInfo_UI_MapEditorInspectPanel_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel_c);
  }
  pMVar2 = (Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_x509verify_result_to_string_t_o *)
           TypeInfo_UI_MapEditorInspectPanel_c->static_fields->__9__85_1;
  if (pMVar2 == (Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_x509verify_result_to_string_t_o *)0x0)
  {
    if ((TypeInfo_UI_MapEditorInspectPanel_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel_c);
    }
    pIVar1 = (Il2CppObject *)TypeInfo_UI_MapEditorInspectPanel_c->static_fields->__9;
    pMVar2 = (Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_x509verify_result_to_string_t_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_int_string);
    System_Func_int__object____ctor
              (pMVar2,pIVar1,(intptr_t)MethodInfo_UI_MapEditorInspectPanel_c_SerializeMapObjectIds_b__85_1,
               (MethodInfo *)0x0);
    TypeInfo_UI_MapEditorInspectPanel_c->static_fields->__9__85_1 = (System_Func_int__string__o *)pMVar2;
    Il2CppCodeGenWriteBarrier(&TypeInfo_UI_MapEditorInspectPanel_c->static_fields->__9__85_1,pMVar2);
  }
  source_00 = System_Linq_Enumerable__Select_Vector3__object_
                        ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                         (System_Func_TSource__TResult__o *)pMVar2,
                         (MethodInfo_6C2170 *)MethodInfo_System_Linq_Enumerable_Select_int_string);
  value = (System_String_array *)
          System_Linq_Enumerable__ToArray_object_
                    ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,
                     (MethodInfo_6C7D90 *)MethodInfo_System_Linq_Enumerable_ToArray_string);
  pSVar3 = System_String__Join(pSVar3,value,(MethodInfo *)0x0);
  return pSVar3;
}


// UI.MapEditorInspectPanel$$GetScrollPosition
// il2cpp: float UI_MapEditorInspectPanel__GetScrollPosition (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x1822bdb50

float UI_MapEditorInspectPanel__GetScrollPosition(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_UI_ScrollRect_o *__this_00;
  float fVar3;
  
  if (Il2CppMethodInitialized_184347567 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_ScrollRect);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347567 = '\x01';
  }
  pUVar2 = (__this->fields).SinglePanel;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar2 = (__this->fields).SinglePanel;
    if (pUVar2 == (UnityEngine_Transform_o *)0x0) goto label_1822bdc3f;
    pUVar2 = UnityEngine_Transform__GetParent(pUVar2,(MethodInfo *)0x0);
    if (pUVar2 == (UnityEngine_Transform_o *)0x0) goto label_1822bdc3f;
    pUVar2 = UnityEngine_Transform__GetParent(pUVar2,(MethodInfo *)0x0);
    if (pUVar2 == (UnityEngine_Transform_o *)0x0) goto label_1822bdc3f;
    __this_00 = UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)pUVar2,
                           (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_ScrollRect);
  }
  else {
    __this_00 = (UnityEngine_UI_ScrollRect_o *)0x0;
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
label_1822bdc3f:
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel$$RestoreScrollPosition
// il2cpp: void UI_MapEditorInspectPanel__RestoreScrollPosition (UI_MapEditorInspectPanel_o* __this, float position, const MethodInfo* method);
// 0x1822c2b10

void UI_MapEditorInspectPanel__RestoreScrollPosition
               (UI_MapEditorInspectPanel_o *__this,float position,MethodInfo *method)

{
  UI_MapEditorInspectPanel__RestoreScrollPositionAfterLayout_d__88_o *routine;
  
  if (Il2CppMethodInitialized_184347568 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_UI_MapEditorInspectPanel_RestoreScrollPositionAfterLayout_d__88);
    Il2CppMethodInitialized_184347568 = '\x01';
  }
  routine = il2cpp_codegen_object_new
                      ((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel_RestoreScrollPositionAfterLayout_d__88
                      );
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)routine,(MethodInfo *)0x0);
  (routine->fields).__1__state = 0;
  (routine->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(routine->fields).__4__this,__this);
  (routine->fields).position = position;
  UnityEngine_MonoBehaviour__StartCoroutine_Auto
            ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)routine,
             (MethodInfo *)0x0);
  return;
}


// UI.MapEditorInspectPanel$$RestoreScrollPositionAfterLayout
// il2cpp: System_Collections_IEnumerator_o* UI_MapEditorInspectPanel__RestoreScrollPositionAfterLayout (UI_MapEditorInspectPanel_o* __this, float position, const MethodInfo* method);
// 0x1822c2a90

System_Collections_IEnumerator_o *
UI_MapEditorInspectPanel__RestoreScrollPositionAfterLayout
          (UI_MapEditorInspectPanel_o *__this,float position,MethodInfo *method)

{
  UI_MapEditorInspectPanel__RestoreScrollPositionAfterLayout_d__88_o *__this_00;
  
  if (Il2CppMethodInitialized_184347568 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_UI_MapEditorInspectPanel_RestoreScrollPositionAfterLayout_d__88);
    Il2CppMethodInitialized_184347568 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_UI_MapEditorInspectPanel_RestoreScrollPositionAfterLayout_d__88);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
  (__this_00->fields).position = position;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// UI.MapEditorInspectPanel$$WaitAndEnablePanel
// il2cpp: System_Collections_IEnumerator_o* UI_MapEditorInspectPanel__WaitAndEnablePanel (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x1822c9f70

System_Collections_IEnumerator_o *
UI_MapEditorInspectPanel__WaitAndEnablePanel(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorInspectPanel__WaitAndEnablePanel_d__89_o *__this_00;
  
  if (Il2CppMethodInitialized_184347569 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorInspectPanel_WaitAndEnablePanel_d__89);
    Il2CppMethodInitialized_184347569 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel_WaitAndEnablePanel_d__89);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// UI.MapEditorInspectPanel$$OnButtonClick
// il2cpp: void UI_MapEditorInspectPanel__OnButtonClick (UI_MapEditorInspectPanel_o* __this, System_String_o* name, const MethodInfo* method);
// 0x1822be4e0

void UI_MapEditorInspectPanel__OnButtonClick
               (UI_MapEditorInspectPanel_o *__this,System_String_o *name,MethodInfo *method)

{
  UI_MapEditorMenu_o *pUVar1;
  UI_ConfirmPopup_o *__this_00;
  UI_MapEditorAddComponentPopup_o *__this_01;
  UI_MapEditorTexturePopup_o *pUVar2;
  bool bVar3;
  int32_t iVar4;
  UI_MapEditorInspectPanel___c__DisplayClass90_0_o *object;
  System_String_o *s;
  UnityEngine_Events_UnityAction_o *pUVar5;
  
  if (Il2CppMethodInitialized_18434756a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorInspectPanel_OnButtonClick_b__90_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass90_0_OnButtonClick_b__1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorInspectPanel_c__DisplayClass90_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"DeleteComponent");
    il2cpp_codegen_initialize_runtime_metadata(&"AddComponent");
    il2cpp_codegen_initialize_runtime_metadata(&"Texture");
    il2cpp_codegen_initialize_runtime_metadata(&"Delete this component?");
    Il2CppMethodInitialized_18434756a = '\x01';
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
          __this_01 = (pUVar1->fields).AddComponentPopup;
          pUVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
          UnityEngine_Events_UnityAction___ctor
                    ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar5,(Il2CppObject *)__this,
                     (intptr_t)MethodInfo_UI_MapEditorInspectPanel_OnButtonClick_b__90_0,(MethodInfo *)0x0);
          if (__this_01 != (UI_MapEditorAddComponentPopup_o *)0x0) {
            UI_MapEditorAddComponentPopup__Show(__this_01,pUVar5,(MethodInfo *)0x0);
            return;
          }
        }
      }
      else if (name != (System_String_o *)0x0) {
        bVar3 = System_String__StartsWith(name,"DeleteComponent",(MethodInfo *)0x0);
        if (!bVar3) {
          return;
        }
        object = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel_c__DisplayClass90_0);
        System_Object___ctor
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
        if (object != (UI_MapEditorInspectPanel___c__DisplayClass90_0_o *)0x0) {
          (object->fields).__4__this = __this;
          Il2CppCodeGenWriteBarrier(&(object->fields).__4__this,__this);
          if ("DeleteComponent" != (System_String_o *)0x0) {
            s = System_String__Substring(name,("DeleteComponent"->fields)._stringLength,(MethodInfo *)0x0)
            ;
            iVar4 = System_Int32__Parse(s,(MethodInfo *)0x0);
            (object->fields).index = iVar4;
            pUVar1 = (__this->fields)._menu;
            if (pUVar1 != (UI_MapEditorMenu_o *)0x0) {
              __this_00 = (pUVar1->fields).ConfirmPopup;
              pUVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
              UnityEngine_Events_UnityAction___ctor
                        ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar5,(Il2CppObject *)object,
                         (intptr_t)MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass90_0_OnButtonClick_b__1,
                         (MethodInfo *)0x0);
              if (__this_00 != (UI_ConfirmPopup_o *)0x0) {
                UI_ConfirmPopup__Show
                          (__this_00,"Delete this component?",pUVar5,(System_String_o *)0x0,(MethodInfo *)0x0);
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
// 0x1822be360

void
UI_MapEditorInspectPanel__OnAddComponent(UI_MapEditorInspectPanel_o* __this, MethodInfo* method)

{
  UI_MapEditorMenu_o *pUVar1;
  UI_MapEditorAddComponentPopup_o *pUVar2;
  Settings_StringSetting_o *pSVar3;
  System_String_o *component;
  GameManagers_MapEditorGameManager_o *pGVar4;
  System_Collections_Generic_List_Dictionary_string__BaseSetting___o *pSVar5;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  bool bVar6;
  System_Collections_Generic_List_string__o *pSVar7;
  System_Collections_Generic_Dictionary_string__BaseSetting__o *pSVar8;
  
  if (Il2CppMethodInitialized_18434756b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Dictionary_string_BaseSetting_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_18434756b = '\x01';
  }
  pUVar1 = (__this->fields)._menu;
  if ((((pUVar1 != (UI_MapEditorMenu_o *)0x0) &&
       (pUVar2 = (pUVar1->fields).AddComponentPopup, pUVar2 != (UI_MapEditorAddComponentPopup_o *)0x0)) &&
      (pSVar3 = (pUVar2->fields).FinishSetting, pSVar3 != (Settings_StringSetting_o *)0x0)) &&
     (pSVar7 = (__this->fields)._componentNames, pSVar7 != (System_Collections_Generic_List_string__o *)0x0))
  {
    component = (pSVar3->fields)._value;
    bVar6 = System_Collections_Generic_List_object___Contains
                      ((System_Collections_Generic_List_object__o *)pSVar7,(Il2CppObject *)component,
                       (MethodInfo_93FC70 *)MethodInfo_System_Collections_Generic_List_string_Contains);
    if (bVar6) {
label_1822be4b1:
      UI_MapEditorInspectPanel__OnChange(__this,(MethodInfo *)0x0);
      return;
    }
    pGVar4 = (__this->fields)._gameManager;
    if (pGVar4 != (GameManagers_MapEditorGameManager_o *)0x0) {
      pSVar5 = (__this->fields)._components;
      __this_00 = (pGVar4->fields).LogicEvaluator;
      pSVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
      System_Collections_Generic_List_object____ctor
                ((System_Collections_Generic_LowLevelList_T__o *)pSVar7,
                 (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
      if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
        pSVar8 = CustomLogic_CustomLogicEvaluator__GetComponentSettings
                           (__this_00,component,pSVar7,(MethodInfo *)0x0);
        if (pSVar5 != (System_Collections_Generic_List_Dictionary_string__BaseSetting___o *)0x0) {
          il2cpp_runtime_helper_180012890(pSVar5,pSVar8,
                        MethodInfo_System_Collections_Generic_List_Dictionary_string_BaseSetting_Add);
          pSVar7 = (__this->fields)._componentNames;
          if (pSVar7 != (System_Collections_Generic_List_string__o *)0x0) {
            il2cpp_runtime_helper_180012890(pSVar7,component,MethodInfo_System_Collections_Generic_List_string_Add);
            goto label_1822be4b1;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel$$OnDeleteComponent
// il2cpp: void UI_MapEditorInspectPanel__OnDeleteComponent (UI_MapEditorInspectPanel_o* __this, int32_t index, const MethodInfo* method);
// 0x1822c14d0

void UI_MapEditorInspectPanel__OnDeleteComponent
               (UI_MapEditorInspectPanel_o *__this,int32_t index,MethodInfo *method)

{
  System_Collections_Generic_List_Dictionary_string__BaseSetting___o *__this_00;
  System_Collections_Generic_List_string__o *__this_01;
  
  if (Il2CppMethodInitialized_18434756c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_RemoveAt);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Dictionary_string_BaseSetting_RemoveAt);
    Il2CppMethodInitialized_18434756c = '\x01';
  }
  __this_00 = (__this->fields)._components;
  if (__this_00 != (System_Collections_Generic_List_Dictionary_string__BaseSetting___o *)0x0) {
    System_Collections_Generic_List_object___RemoveAt
              ((System_Collections_Generic_List_object__o *)__this_00,index,
               (MethodInfo_947010 *)
               MethodInfo_System_Collections_Generic_List_Dictionary_string_BaseSetting_RemoveAt);
    __this_01 = (__this->fields)._componentNames;
    if (__this_01 != (System_Collections_Generic_List_string__o *)0x0) {
      System_Collections_Generic_List_object___RemoveAt
                ((System_Collections_Generic_List_object__o *)__this_01,index,
                 (MethodInfo_947010 *)MethodInfo_System_Collections_Generic_List_string_RemoveAt);
      UI_MapEditorInspectPanel__OnChange(__this,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel$$SanitizeName
// il2cpp: System_String_o* UI_MapEditorInspectPanel__SanitizeName (UI_MapEditorInspectPanel_o* __this, System_String_o* name, const MethodInfo* method);
// 0x1822c2ba0

System_String_o *
UI_MapEditorInspectPanel__SanitizeName
          (UI_MapEditorInspectPanel_o *__this,System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *array;
  System_String_o *pSVar2;
  uint uVar3;
  MethodInfo *method_00;
  uint16_t local_res10 [4];
  
  if (Il2CppMethodInitialized_18434756d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_char_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               FieldRva_PrivateImplementationDetails_619EB2C637D6EE6BE496B015CCC320AC0B7F976E145A6080B09E8587538D44D0
              );
    Il2CppMethodInitialized_18434756d = '\x01';
  }
  local_res10[0] = 0;
  bVar1 = System_String__IsNullOrEmpty(name,(MethodInfo *)0x0);
  if (bVar1) {
    return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  array = SZArrayNew(TypeInfo_char_array,8);
  method_00 = (MethodInfo *)0x0;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_1a54600
            ((System_Array_o *)array,
             FieldRva_PrivateImplementationDetails_619EB2C637D6EE6BE496B015CCC320AC0B7F976E145A6080B09E8587538D44D0
             ,(MethodInfo *)0x0);
  if (array != (Il2CppObject *)0x0) {
    for (uVar3 = 0; (int)uVar3 < *(int *)&array[1].monitor; uVar3 = uVar3 + 1) {
      if (*(uint *)&array[1].monitor <= uVar3) {
        ThrowIndexOutOfRangeException();
      }
      local_res10[0] = *(uint16_t *)((longlong)&array[2].klass + (longlong)(int)uVar3 * 2);
      if ((g_data_184354e48->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(g_data_184354e48);
      }
      pSVar2 = System_Char__ToString(local_res10,(System_IFormatProvider_o *)0x0,method_00);
      if (name == (System_String_o *)0x0) goto label_1822c2cf4;
      method_00 = (MethodInfo *)**(undefined8 **)(g_data_184354e50 + 0xb8);
      name = System_String__Replace_1970e80(name,pSVar2,(System_String_o *)method_00,(MethodInfo *)0x0);
    }
    if (name != (System_String_o *)0x0) {
      if (0xff < (name->fields)._stringLength) {
        name = System_String__Substring_1972740(name,0,0xff,(MethodInfo *)0x0);
        if (name == (System_String_o *)0x0) goto label_1822c2cf4;
      }
      pSVar2 = System_String__Trim(name,(MethodInfo *)0x0);
      return pSVar2;
    }
  }
label_1822c2cf4:
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel$$SyncSettings
// il2cpp: void UI_MapEditorInspectPanel__SyncSettings (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x1822c7da0
// eh: try 0x1822c893b..0x1822c8957 -> pad 0x180356180 cleanup
// eh: try 0x1822c9140..0x1822c9742 -> pad 0x18333ff40 (+8 call sites) catch Il2CppExceptionWrapper
// asm: 77 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822c86cb: nop dword ptr [rax + rax]
// asm:   0x1822c8901: movss xmm0, dword ptr [rsp + 0x74]
// asm:   0x1822c8907: movss xmm6, dword ptr [rsp + 0x78]
// asm:   0x1822c890d: jmp 0x1822c8b55
// asm:   0x1822c893b: jmp 0x1822c8671
// asm:   0x1822c8c00: movss xmm0, dword ptr [rsp + 0x54]
// asm:   0x1822c8c06: movss xmm6, dword ptr [rsp + 0x58]
// asm:   0x1822c8c0c: jmp 0x1822c8c45
// asm:   0x1822c949c: nop dword ptr [rax]
// asm:   0x1822c9583: mov rdx, qword ptr [rip + 0x1df4d16]  ; MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_string_Dispose
// asm:   0x1822c958a: mov rcx, qword ptr [rsp + 0xa0]
// asm:   0x1822c9592: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1822c9597: mov rcx, qword ptr [rsp + 0x98]
// asm:   0x1822c959f: test rcx, rcx
// asm:   0x1822c95a2: jne 0x1822c96de
// asm:   0x1822c95a8: mov rsi, qword ptr [rsp + 0x1a0]
// asm:   0x1822c95b0: mov r15, qword ptr [rsp + 0x60]
// asm:   0x1822c95b5: mov r12, qword ptr [rsp + 0x70]
// asm:   0x1822c95ba: mov qword ptr [rsp + 0x20], r12
// asm:   0x1822c95bf: mov rdi, qword ptr [rsp + 0x88]
// asm:   0x1822c95c7: jmp 0x1822c92f0
// asm:   0x1822c95e3: jmp 0x1822c9140
// asm:   0x1822c95e8: mov r8, qword ptr [rsp + 0x88]
// asm:   0x1822c95f0: cmp qword ptr [r8], 0
// asm:   0x1822c95f4: je 0x1822c9607
// asm:   0x1822c95f6: xor ecx, ecx
// asm:   0x1822c95f8: mov r8, qword ptr [r8]
// asm:   0x1822c95fb: mov rdx, qword ptr [rip + 0x1dcfcfe]  ; TypeInfo_System_IDisposable
// asm:   0x1822c9602: call 0x180014840  ; InterfaceInvoker0_Invoke()
// asm:   0x1822c9607: mov rcx, qword ptr [rsp + 0x80]
// asm:   0x1822c960f: test rcx, rcx
// asm:   0x1822c9612: jne 0x1822c9714
// asm:   0x1822c9618: mov rsi, qword ptr [rsp + 0x1a0]
// asm:   0x1822c9620: jmp 0x1822c9140
// asm:   0x1822c9638: mov rdx, qword ptr [rip + 0x1dc23c9]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptComponent_Dispose
// asm:   0x1822c963f: mov rcx, qword ptr [rsp + 0x48]
// asm:   0x1822c9644: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1822c9649: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x1822c964e: test rcx, rcx
// asm:   0x1822c9651: jne 0x1822c9742
// asm:   0x1822c9657: mov rsi, qword ptr [rsp + 0x1a0]
// asm:   0x1822c96de: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1822c9714: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1822c9742: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x18333fee0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333fee5: push rbp
// asm:   0x18333fee6: sub rsp, 0x20
// asm:   0x18333feea: mov rbp, rdx
// asm:   0x18333feed: mov rax, qword ptr [rbp + 0xf8]
// asm:   0x18333fef4: mov rcx, qword ptr [rax]
// asm:   0x18333fef7: mov qword ptr [rbp + 0x98], rcx
// asm:   0x18333fefe: movabs rax, 0
// asm:   0x18333ff08: add rsp, 0x20
// asm:   0x18333ff0c: pop rbp
// asm:   0x18333ff0d: ret 
// asm:   0x18333ff10: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333ff15: push rbp
// asm:   0x18333ff16: sub rsp, 0x20
// asm:   0x18333ff1a: mov rbp, rdx
// asm:   0x18333ff1d: mov rax, qword ptr [rbp + 0x100]
// asm:   0x18333ff24: mov rcx, qword ptr [rax]
// asm:   0x18333ff27: mov qword ptr [rbp + 0x80], rcx
// asm:   0x18333ff2e: movabs rax, 0
// asm:   0x18333ff38: add rsp, 0x20
// asm:   0x18333ff3c: pop rbp
// asm:   0x18333ff3d: ret 
// asm:   0x18333ff40: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333ff45: push rbp
// asm:   0x18333ff46: sub rsp, 0x20
// asm:   0x18333ff4a: mov rbp, rdx
// asm:   0x18333ff4d: mov rax, qword ptr [rbp + 0x108]
// asm:   0x18333ff54: mov rcx, qword ptr [rax]
// asm:   0x18333ff57: mov qword ptr [rbp + 0x40], rcx
// asm:   0x18333ff5b: movabs rax, 0
// asm:   0x18333ff65: add rsp, 0x20
// asm:   0x18333ff69: pop rbp
// asm:   0x18333ff6a: ret 

void UI_MapEditorInspectPanel__SyncSettings(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  Map_MapScriptBaseObject_o *pMVar4;
  Settings_StringSetting_o *pSVar5;
  Settings_BoolSetting_o *pSVar6;
  Settings_IntSetting_o *pSVar7;
  Settings_FloatSetting_o *pSVar8;
  Settings_ColorSetting_o *pSVar9;
  System_String_c *pSVar10;
  System_Collections_Generic_HashSet_object__o *pSVar11;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined8 uVar12;
  System_Collections_Generic_List_T__o *__this_00;
  GameManagers_MapEditorGameManager_o *pGVar13;
  CustomLogic_CustomLogicEvaluator_o *pCVar14;
  longlong *plVar15;
  Map_MapScriptComponent_o *pMVar16;
  Il2CppType *handle;
  Il2CppObject *b;
  bool bVar19;
  System_String_o *pSVar20;
  UnityEngine_Vector3_o *pUVar21;
  Utility_Color255_o *pUVar22;
  System_String_o *pSVar23;
  System_Collections_Generic_List_MapObject__o *pSVar24;
  Map_MapObject_o *pMVar25;
  System_Type_o *pSVar26;
  System_Type_o *pSVar27;
  System_Collections_Generic_List_Dictionary_string__BaseSetting___o *pSVar28;
  System_Collections_Generic_List_string__o *pSVar29;
  UI_MapEditorInspectPanel___c__DisplayClass94_0_o *object;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar30;
  System_Func_MapObject__bool__o *__this_01;
  System_Collections_Generic_Dictionary_string__BaseSetting__o *pSVar31;
  System_Collections_Generic_Dictionary_string__string__o *__this_02;
  Il2CppObject *pIVar32;
  void *pvVar33;
  System_Func_MapScriptComponent__bool__o *__this_03;
  Map_MapScriptComponent_o *pMVar34;
  System_Collections_Generic_Dictionary_object__object__o *__this_04;
  int index;
  Il2CppObject *local_res18;
  System_String_o *local_res20;
  undefined4 local_178;
  float fStack_174;
  UnityEngine_Vector3_o local_168;
  undefined1 local_158 [16];
  undefined4 uStack_148;
  float local_144;
  float fStack_140;
  undefined4 local_138;
  float fStack_134;
  float local_130;
  undefined4 uStack_128;
  float local_124;
  float fStack_120;
  undefined1 local_118 [16];
  Map_MapScriptComponent_o *local_108;
  undefined1 local_100 [16];
  undefined1 local_f0 [8];
  uint64_t uStack_e8;
  Map_MapScriptComponent_o *local_e0;
  float local_d4;
  float fStack_d0;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o local_c8;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_88 [2];
  
  if (Il2CppMethodInitialized_18434756e == '\0') {
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
              (&MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass94_0_SyncSettings_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass94_0_SyncSettings_b__2);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorInspectPanel_c__DisplayClass94_0);
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
    il2cpp_codegen_initialize_runtime_metadata(&"PhysicsMaterial");
    Il2CppMethodInitialized_18434756e = '\x01';
  }
  local_f0 = (undefined1  [8])0x0;
  uStack_e8 = 0;
  local_e0 = (Map_MapScriptComponent_o *)0x0;
  local_res18 = (Il2CppObject *)0x0;
  local_c8.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_c8.fields._version = 0;
  local_c8.fields._index = 0;
  local_c8.fields._current.fields.key = (Il2CppObject *)0x0;
  local_c8.fields._current.fields.value = (Il2CppObject *)0x0;
  local_c8.fields._getEnumeratorRetType = 0;
  local_c8.fields._36_4_ = 0;
  local_res20 = (System_String_o *)0x0;
  pMVar25 = (__this->fields)._mapObject;
  if ((pMVar25 == (Map_MapObject_o *)0x0) ||
     (pMVar4 = (pMVar25->fields).ScriptObject, pMVar4 == (Map_MapScriptBaseObject_o *)0x0))
  goto label_1822c9695;
  bVar1 = (TypeInfo_Map_MapScriptSceneObject->_2).typeHierarchyDepth;
  if (((pMVar4->klass->_2).typeHierarchyDepth < bVar1) ||
     ((pMVar4->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
      (Il2CppClass *)TypeInfo_Map_MapScriptSceneObject)) {
    il2cpp_codegen_raise_invalid_cast_exception(pMVar4);
  }
  pSVar5 = (__this->fields)._name;
  pSVar20 = UI_MapEditorInspectPanel__SanitizeName(__this,(pMVar4->fields).Name,(MethodInfo *)0x0);
  if (pSVar5 == (Settings_StringSetting_o *)0x0) goto label_1822c9695;
  Settings_TypedSetting_object___set_Value
            ((Settings_TypedSetting_T__o *)pSVar5,(Il2CppObject *)pSVar20,
             (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
  pSVar6 = (__this->fields)._active;
  if (pSVar6 == (Settings_BoolSetting_o *)0x0) goto label_1822c9695;
  Settings_TypedSetting_bool___set_Value
            ((Settings_TypedSetting_bool__o *)pSVar6,(pMVar4->fields).Active,
             (MethodInfo_E8F540 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
  pSVar6 = (__this->fields)._static;
  if (pSVar6 == (Settings_BoolSetting_o *)0x0) goto label_1822c9695;
  Settings_TypedSetting_bool___set_Value
            ((Settings_TypedSetting_bool__o *)pSVar6,(pMVar4->fields).Static,
             (MethodInfo_E8F540 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
  pSVar6 = (__this->fields)._networked;
  if (pSVar6 == (Settings_BoolSetting_o *)0x0) goto label_1822c9695;
  Settings_TypedSetting_bool___set_Value
            ((Settings_TypedSetting_bool__o *)pSVar6,(pMVar4->fields).Networked,
             (MethodInfo_E8F540 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
  pSVar7 = (__this->fields)._parent;
  if (pSVar7 == (Settings_IntSetting_o *)0x0) goto label_1822c9695;
  Settings_TypedSetting_int___set_Value
            ((Settings_TypedSetting_int__o *)pSVar7,(pMVar4->fields).Parent,
             (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
  pSVar6 = (__this->fields)._visible;
  if (pSVar6 == (Settings_BoolSetting_o *)0x0) goto label_1822c9695;
  Settings_TypedSetting_bool___set_Value
            ((Settings_TypedSetting_bool__o *)pSVar6,(pMVar4->fields).Visible,
             (MethodInfo_E8F540 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
  pUVar21 = Map_MapScriptBaseObject__GetPosition(&local_168,pMVar4,(MethodInfo *)0x0);
  pSVar8 = (__this->fields)._positionX;
  if (pSVar8 == (Settings_FloatSetting_o *)0x0) goto label_1822c9695;
  uVar12._0_4_ = (pUVar21->fields).y;
  uVar12._4_4_ = (pUVar21->fields).z;
  Settings_TypedSetting_float___set_Value
            ((Settings_TypedSetting_float__o *)pSVar8,(pUVar21->fields).x,
             (MethodInfo_E8F490 *)MethodInfo_Settings_TypedSetting_float_set_Value);
  pSVar8 = (__this->fields)._positionY;
  if (pSVar8 == (Settings_FloatSetting_o *)0x0) goto label_1822c9695;
  Settings_TypedSetting_float___set_Value
            ((Settings_TypedSetting_float__o *)pSVar8,(float)uVar12,
             (MethodInfo_E8F490 *)MethodInfo_Settings_TypedSetting_float_set_Value);
  pSVar8 = (__this->fields)._positionZ;
  if (pSVar8 == (Settings_FloatSetting_o *)0x0) goto label_1822c9695;
  Settings_TypedSetting_float___set_Value
            ((Settings_TypedSetting_float__o *)pSVar8,uVar12._4_4_,
             (MethodInfo_E8F490 *)MethodInfo_Settings_TypedSetting_float_set_Value);
  pUVar21 = Map_MapScriptBaseObject__GetRotation(&local_168,pMVar4,(MethodInfo *)0x0);
  pSVar8 = (__this->fields)._rotationX;
  if (pSVar8 == (Settings_FloatSetting_o *)0x0) goto label_1822c9695;
  uVar12._0_4_ = (pUVar21->fields).y;
  uVar12._4_4_ = (pUVar21->fields).z;
  Settings_TypedSetting_float___set_Value
            ((Settings_TypedSetting_float__o *)pSVar8,(pUVar21->fields).x,
             (MethodInfo_E8F490 *)MethodInfo_Settings_TypedSetting_float_set_Value);
  pSVar8 = (__this->fields)._rotationY;
  if (pSVar8 == (Settings_FloatSetting_o *)0x0) goto label_1822c9695;
  Settings_TypedSetting_float___set_Value
            ((Settings_TypedSetting_float__o *)pSVar8,(float)uVar12,
             (MethodInfo_E8F490 *)MethodInfo_Settings_TypedSetting_float_set_Value);
  pSVar8 = (__this->fields)._rotationZ;
  if (pSVar8 == (Settings_FloatSetting_o *)0x0) goto label_1822c9695;
  Settings_TypedSetting_float___set_Value
            ((Settings_TypedSetting_float__o *)pSVar8,uVar12._4_4_,
             (MethodInfo_E8F490 *)MethodInfo_Settings_TypedSetting_float_set_Value);
  pUVar21 = Map_MapScriptBaseObject__GetScale(&local_168,pMVar4,(MethodInfo *)0x0);
  pSVar8 = (__this->fields)._scaleX;
  if (pSVar8 == (Settings_FloatSetting_o *)0x0) goto label_1822c9695;
  uVar12._0_4_ = (pUVar21->fields).y;
  uVar12._4_4_ = (pUVar21->fields).z;
  Settings_TypedSetting_float___set_Value
            ((Settings_TypedSetting_float__o *)pSVar8,(pUVar21->fields).x,
             (MethodInfo_E8F490 *)MethodInfo_Settings_TypedSetting_float_set_Value);
  pSVar8 = (__this->fields)._scaleY;
  if (pSVar8 == (Settings_FloatSetting_o *)0x0) goto label_1822c9695;
  Settings_TypedSetting_float___set_Value
            ((Settings_TypedSetting_float__o *)pSVar8,(float)uVar12,
             (MethodInfo_E8F490 *)MethodInfo_Settings_TypedSetting_float_set_Value);
  pSVar8 = (__this->fields)._scaleZ;
  if (pSVar8 == (Settings_FloatSetting_o *)0x0) goto label_1822c9695;
  Settings_TypedSetting_float___set_Value
            ((Settings_TypedSetting_float__o *)pSVar8,uVar12._4_4_,
             (MethodInfo_E8F490 *)MethodInfo_Settings_TypedSetting_float_set_Value);
  pSVar5 = (__this->fields)._collideMode;
  if (pSVar5 == (Settings_StringSetting_o *)0x0) goto label_1822c9695;
  Settings_TypedSetting_object___set_Value
            ((Settings_TypedSetting_T__o *)pSVar5,(Il2CppObject *)(*(uint64_t *)((char *)pMVar4 + 0x60)),
             (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
  pSVar5 = (__this->fields)._collideWith;
  if (pSVar5 == (Settings_StringSetting_o *)0x0) goto label_1822c9695;
  Settings_TypedSetting_object___set_Value
            ((Settings_TypedSetting_T__o *)pSVar5,(*(uint64_t *)((char *)pMVar4 + 0x68)),
             (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
  pSVar5 = (__this->fields)._physicsMaterial;
  if (pSVar5 == (Settings_StringSetting_o *)0x0) goto label_1822c9695;
  Settings_TypedSetting_object___set_Value
            ((Settings_TypedSetting_T__o *)pSVar5,(Il2CppObject *)(*(uint64_t *)((char *)pMVar4 + 0x70)),
             (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
  pSVar20 = (*(uint64_t *)((char *)pMVar4 + 0x78));
  if ((pSVar20 == (System_String_o *)0x0) ||
     (pSVar5 = (__this->fields)._shader, pSVar5 == (Settings_StringSetting_o *)0x0)) goto label_1822c9695;
  Settings_TypedSetting_object___set_Value
            ((Settings_TypedSetting_T__o *)pSVar5,(Il2CppObject *)pSVar20->fields,
             (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
  pSVar20 = (*(uint64_t *)((char *)pMVar4 + 0x78));
  if ((pSVar20 == (System_String_o *)0x0) ||
     (pSVar9 = (__this->fields)._color, pSVar9 == (Settings_ColorSetting_o *)0x0)) goto label_1822c9695;
  Settings_TypedSetting_object___set_Value
            ((Settings_TypedSetting_T__o *)pSVar9,(Il2CppObject *)(*(uint64_t *)((char *)pSVar20 + 0x18)),
             (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_Color255_set_Value);
  pSVar9 = (__this->fields)._reflectColor;
  pUVar22 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
  Utility_Color255___ctor_2332720(pUVar22,(MethodInfo *)0x0);
  if (pSVar9 == (Settings_ColorSetting_o *)0x0) goto label_1822c9695;
  Settings_TypedSetting_object___set_Value
            ((Settings_TypedSetting_T__o *)pSVar9,(Il2CppObject *)pUVar22,
             (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_Color255_set_Value);
  pSVar5 = (__this->fields)._texture;
  if (pSVar5 == (Settings_StringSetting_o *)0x0) goto label_1822c9695;
  Settings_TypedSetting_object___set_Value
            ((Settings_TypedSetting_T__o *)pSVar5,(Il2CppObject *)"Misc/None",
             (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
  pSVar8 = (__this->fields)._tilingX;
  if (pSVar8 == (Settings_FloatSetting_o *)0x0) goto label_1822c9695;
  Settings_TypedSetting_float___set_Value
            ((Settings_TypedSetting_float__o *)pSVar8,1.0,
             (MethodInfo_E8F490 *)MethodInfo_Settings_TypedSetting_float_set_Value);
  pSVar8 = (__this->fields)._tilingY;
  if (pSVar8 == (Settings_FloatSetting_o *)0x0) goto label_1822c9695;
  Settings_TypedSetting_float___set_Value
            ((Settings_TypedSetting_float__o *)pSVar8,1.0,
             (MethodInfo_E8F490 *)MethodInfo_Settings_TypedSetting_float_set_Value);
  pSVar8 = (__this->fields)._offsetX;
  if (pSVar8 == (Settings_FloatSetting_o *)0x0) goto label_1822c9695;
  Settings_TypedSetting_float___set_Value
            ((Settings_TypedSetting_float__o *)pSVar8,0.0,
             (MethodInfo_E8F490 *)MethodInfo_Settings_TypedSetting_float_set_Value);
  pSVar8 = (__this->fields)._offsetY;
  if (pSVar8 == (Settings_FloatSetting_o *)0x0) goto label_1822c9695;
  Settings_TypedSetting_float___set_Value
            ((Settings_TypedSetting_float__o *)pSVar8,0.0,
             (MethodInfo_E8F490 *)MethodInfo_Settings_TypedSetting_float_set_Value);
  handle = TypeRef_Map_MapScriptBasicMaterial;
  pSVar20 = (*(uint64_t *)((char *)pMVar4 + 0x78));
  if (pSVar20 == (System_String_o *)0x0) {
label_1822c8940:
    if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_184354ea0);
    }
    pSVar26 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
    pSVar20 = (*(uint64_t *)((char *)pMVar4 + 0x78));
    if ((pSVar20 == (System_String_o *)0x0) ||
       (pSVar27 = System_Object__GetType((Il2CppObject *)pSVar20,(MethodInfo *)0x0),
       pSVar26 == (System_Type_o *)0x0)) goto label_1822c9695;
    bVar19 = (*(pSVar26->klass->vtable)._22_IsAssignableFrom.methodPtr)
                       (pSVar26,pSVar27,(pSVar26->klass->vtable)._22_IsAssignableFrom.method);
    if (bVar19) {
      pSVar20 = (*(uint64_t *)((char *)pMVar4 + 0x78));
      if (pSVar20 == (System_String_o *)0x0) goto label_1822c9695;
      bVar1 = (TypeInfo_Map_MapScriptBasicMaterial->_2).typeHierarchyDepth;
      if (((pSVar20->klass->_2).typeHierarchyDepth < bVar1) ||
         ((pSVar20->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_Map_MapScriptBasicMaterial)) {
        il2cpp_codegen_raise_invalid_cast_exception(pSVar20);
      }
      pSVar5 = (__this->fields)._texture;
      if (pSVar5 == (Settings_StringSetting_o *)0x0) goto label_1822c9695;
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)pSVar5,(*(uint64_t *)((char *)pSVar20 + 0x20)),
                 (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
      pSVar8 = (__this->fields)._tilingX;
      if (pSVar8 == (Settings_FloatSetting_o *)0x0) goto label_1822c9695;
      Settings_TypedSetting_float___set_Value
                ((Settings_TypedSetting_float__o *)pSVar8,(float)(*(uint32_t *)((char *)pSVar20 + 0x28)),
                 (MethodInfo_E8F490 *)MethodInfo_Settings_TypedSetting_float_set_Value);
      pSVar8 = (__this->fields)._tilingY;
      if (pSVar8 == (Settings_FloatSetting_o *)0x0) goto label_1822c9695;
      Settings_TypedSetting_float___set_Value
                ((Settings_TypedSetting_float__o *)pSVar8,*(float *)&(*(uint16_t *)((char *)pSVar20 + 0x2c)),
                 (MethodInfo_E8F490 *)MethodInfo_Settings_TypedSetting_float_set_Value);
      pSVar8 = (__this->fields)._offsetX;
      if (pSVar8 == (Settings_FloatSetting_o *)0x0) goto label_1822c9695;
      Settings_TypedSetting_float___set_Value
                ((Settings_TypedSetting_float__o *)pSVar8,*(float *)&(*(uint64_t *)((char *)pSVar20 + 0x30)),
                 (MethodInfo_E8F490 *)MethodInfo_Settings_TypedSetting_float_set_Value);
      pSVar8 = (__this->fields)._offsetY;
      if (pSVar8 == (Settings_FloatSetting_o *)0x0) goto label_1822c9695;
      Settings_TypedSetting_float___set_Value
                ((Settings_TypedSetting_float__o *)pSVar8,*(float *)((longlong)&(*(uint64_t *)((char *)pSVar20 + 0x30)) + 4),
                 (MethodInfo_E8F490 *)MethodInfo_Settings_TypedSetting_float_set_Value);
      pSVar20 = (*(uint64_t *)((char *)pMVar4 + 0x78));
      if (pSVar20 != (System_String_o *)0x0) {
        pSVar10 = pSVar20->klass;
        bVar1 = (TypeInfo_Map_MapScriptReflectiveMaterial->_2).typeHierarchyDepth;
        if ((bVar1 <= (pSVar10->_2).typeHierarchyDepth) &&
           ((pSVar10->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
            (Il2CppClass *)TypeInfo_Map_MapScriptReflectiveMaterial)) {
          pSVar20 = (*(uint64_t *)((char *)pMVar4 + 0x78));
          bVar1 = (TypeInfo_Map_MapScriptReflectiveMaterial->_2).typeHierarchyDepth;
          if (((pSVar20->klass->_2).typeHierarchyDepth < bVar1) ||
             ((pSVar20->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
              (Il2CppClass *)TypeInfo_Map_MapScriptReflectiveMaterial)) {
            il2cpp_codegen_raise_invalid_cast_exception(pSVar20);
          }
          pSVar9 = (__this->fields)._reflectColor;
          if (pSVar9 == (Settings_ColorSetting_o *)0x0) goto label_1822c9695;
          Settings_TypedSetting_object___set_Value
                    ((Settings_TypedSetting_T__o *)pSVar9,(*(uint64_t *)((char *)pSVar20 + 0x38)),
                     (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_Color255_set_Value);
        }
      }
    }
  }
  else {
    pSVar10 = pSVar20->klass;
    bVar1 = (TypeInfo_Map_MapScriptLegacyMaterial->_2).typeHierarchyDepth;
    if (((pSVar10->_2).typeHierarchyDepth < bVar1) ||
       ((pSVar10->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_Map_MapScriptLegacyMaterial)) {
      bVar19 = false;
    }
    else {
      bVar19 = true;
    }
    pSVar23 = (System_String_o *)0x0;
    if (bVar19) {
      pSVar23 = pSVar20;
    }
    if (pSVar23 == (System_String_o *)0x0) {
      if (((pSVar20 == (System_String_o *)0x0) ||
          (bVar1 = (TypeInfo_Map_MapScriptDefaultTiledMaterial->_2).typeHierarchyDepth,
          (pSVar10->_2).typeHierarchyDepth < bVar1)) ||
         ((pSVar10->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_Map_MapScriptDefaultTiledMaterial)) goto label_1822c8940;
      if (pSVar20 == (System_String_o *)0x0) goto label_1822c9695;
      bVar1 = (TypeInfo_Map_MapScriptDefaultTiledMaterial->_2).typeHierarchyDepth;
      if (((pSVar10->_2).typeHierarchyDepth < bVar1) ||
         ((pSVar10->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_Map_MapScriptDefaultTiledMaterial)) {
        il2cpp_codegen_raise_invalid_cast_exception(pSVar20);
      }
    }
    else {
      bVar1 = (TypeInfo_Map_MapScriptLegacyMaterial->_2).typeHierarchyDepth;
      if (((pSVar10->_2).typeHierarchyDepth < bVar1) ||
         ((pSVar10->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_Map_MapScriptLegacyMaterial)) {
        il2cpp_codegen_raise_invalid_cast_exception(pSVar20);
      }
    }
    pSVar8 = (__this->fields)._tilingX;
    if (pSVar8 == (Settings_FloatSetting_o *)0x0) goto label_1822c9695;
    Settings_TypedSetting_float___set_Value
              ((Settings_TypedSetting_float__o *)pSVar8,*(float *)&(*(uint64_t *)((char *)pSVar20 + 0x20)),
               (MethodInfo_E8F490 *)MethodInfo_Settings_TypedSetting_float_set_Value);
    pSVar8 = (__this->fields)._tilingY;
    if (pSVar8 == (Settings_FloatSetting_o *)0x0) goto label_1822c9695;
    Settings_TypedSetting_float___set_Value
              ((Settings_TypedSetting_float__o *)pSVar8,*(float *)((longlong)&(*(uint64_t *)((char *)pSVar20 + 0x20)) + 4),
               (MethodInfo_E8F490 *)MethodInfo_Settings_TypedSetting_float_set_Value);
  }
  index = 1;
  pSVar24 = (__this->fields)._mapObjects;
  if (pSVar24 != (System_Collections_Generic_List_MapObject__o *)0x0) {
    for (; index < (pSVar24->fields)._size; index = index + 1) {
      pSVar24 = (__this->fields)._mapObjects;
      if (((pSVar24 == (System_Collections_Generic_List_MapObject__o *)0x0) ||
          (pMVar25 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar24,index,
                                (MethodInfo_92B830 *)
                                MethodInfo_System_Collections_Generic_List_MapObject_get_Item),
          pMVar25 == (Map_MapObject_o *)0x0)) ||
         (pMVar4 = (pMVar25->fields).ScriptObject, pMVar4 == (Map_MapScriptBaseObject_o *)0x0))
      goto label_1822c9695;
      bVar1 = (TypeInfo_Map_MapScriptSceneObject->_2).typeHierarchyDepth;
      if (((pMVar4->klass->_2).typeHierarchyDepth < bVar1) ||
         ((pMVar4->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_Map_MapScriptSceneObject)) {
        il2cpp_codegen_raise_invalid_cast_exception(pMVar4);
      }
      pSVar20 = UI_MapEditorInspectPanel__SanitizeName(__this,(pMVar4->fields).Name,(MethodInfo *)0x0);
      pSVar5 = (__this->fields)._name;
      if (pSVar5 == (Settings_StringSetting_o *)0x0) goto label_1822c9695;
      bVar19 = System_String__op_Inequality(pSVar20,(pSVar5->fields)._value,(MethodInfo *)0x0);
      if (bVar19) {
        pSVar11 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._mixedFields;
        if (pSVar11 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_1822c9695;
        System_Collections_Generic_HashSet_object___Add
                  (pSVar11,(Il2CppObject *)"Name",
                   (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
      }
      pSVar6 = (__this->fields)._active;
      if (pSVar6 == (Settings_BoolSetting_o *)0x0) goto label_1822c9695;
      if ((pMVar4->fields).Active != (pSVar6->fields)._value) {
        pSVar11 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._mixedFields;
        if (pSVar11 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_1822c9695;
        System_Collections_Generic_HashSet_object___Add
                  (pSVar11,(Il2CppObject *)"Active",
                   (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
      }
      pSVar6 = (__this->fields)._static;
      if (pSVar6 == (Settings_BoolSetting_o *)0x0) goto label_1822c9695;
      if ((pMVar4->fields).Static != (pSVar6->fields)._value) {
        pSVar11 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._mixedFields;
        if (pSVar11 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_1822c9695;
        System_Collections_Generic_HashSet_object___Add
                  (pSVar11,(Il2CppObject *)"Static",
                   (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
      }
      pSVar6 = (__this->fields)._networked;
      if (pSVar6 == (Settings_BoolSetting_o *)0x0) goto label_1822c9695;
      if ((pMVar4->fields).Networked != (pSVar6->fields)._value) {
        pSVar11 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._mixedFields;
        if (pSVar11 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_1822c9695;
        System_Collections_Generic_HashSet_object___Add
                  (pSVar11,(Il2CppObject *)"Networked",
                   (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
      }
      pSVar6 = (__this->fields)._visible;
      if (pSVar6 == (Settings_BoolSetting_o *)0x0) goto label_1822c9695;
      if ((pMVar4->fields).Visible != (pSVar6->fields)._value) {
        pSVar11 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._mixedFields;
        if (pSVar11 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_1822c9695;
        System_Collections_Generic_HashSet_object___Add
                  (pSVar11,(Il2CppObject *)"Visible",
                   (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
      }
      pSVar7 = (__this->fields)._parent;
      if (pSVar7 == (Settings_IntSetting_o *)0x0) goto label_1822c9695;
      if ((pMVar4->fields).Parent != (pSVar7->fields)._value) {
        pSVar11 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._mixedFields;
        if (pSVar11 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_1822c9695;
        System_Collections_Generic_HashSet_object___Add
                  (pSVar11,(Il2CppObject *)"Parent",
                   (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
      }
      pUVar21 = Map_MapScriptBaseObject__GetPosition
                          ((UnityEngine_Vector3_o *)local_100,pMVar4,(MethodInfo *)0x0);
      uVar2 = (pUVar21->fields).y;
      uVar17 = (pUVar21->fields).z;
      pSVar8 = (__this->fields)._positionX;
      local_124 = (float)uVar2;
      fStack_120 = (float)uVar17;
      if (pSVar8 == (Settings_FloatSetting_o *)0x0) goto label_1822c9695;
      uVar12._0_4_ = (float)uVar2;
      uVar12._4_4_ = (float)uVar17;
      if ((pUVar21->fields).x != (pSVar8->fields)._value) {
        pSVar11 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._mixedFields;
        if (pSVar11 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_1822c9695;
        fStack_134 = (float)uVar2;
        local_130 = (float)uVar17;
        System_Collections_Generic_HashSet_object___Add
                  (pSVar11,(Il2CppObject *)"PositionX",
                   (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
        uVar12._0_4_ = fStack_134;
        uVar12._4_4_ = local_130;
      }
      pSVar8 = (__this->fields)._positionY;
      if (pSVar8 == (Settings_FloatSetting_o *)0x0) goto label_1822c9695;
      if ((float)uVar12 != (pSVar8->fields)._value) {
        pSVar11 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._mixedFields;
        if (pSVar11 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_1822c9695;
        System_Collections_Generic_HashSet_object___Add
                  (pSVar11,(Il2CppObject *)"PositionY",
                   (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
      }
      pSVar8 = (__this->fields)._positionZ;
      if (pSVar8 == (Settings_FloatSetting_o *)0x0) goto label_1822c9695;
      if (uVar12._4_4_ != (pSVar8->fields)._value) {
        pSVar11 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._mixedFields;
        if (pSVar11 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_1822c9695;
        System_Collections_Generic_HashSet_object___Add
                  (pSVar11,(Il2CppObject *)"PositionZ",
                   (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
      }
      pUVar21 = Map_MapScriptBaseObject__GetRotation
                          ((UnityEngine_Vector3_o *)local_158,pMVar4,(MethodInfo *)0x0);
      uVar3 = (pUVar21->fields).y;
      uVar18 = (pUVar21->fields).z;
      pSVar8 = (__this->fields)._rotationX;
      local_144 = (float)uVar3;
      fStack_140 = (float)uVar18;
      if (pSVar8 == (Settings_FloatSetting_o *)0x0) goto label_1822c9695;
      if ((pUVar21->fields).x != (pSVar8->fields)._value) {
        pSVar11 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._mixedFields;
        if (pSVar11 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_1822c9695;
        System_Collections_Generic_HashSet_object___Add
                  (pSVar11,(Il2CppObject *)"RotationX",
                   (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
      }
      pSVar8 = (__this->fields)._rotationY;
      if (pSVar8 == (Settings_FloatSetting_o *)0x0) goto label_1822c9695;
      if ((float)uVar3 != (pSVar8->fields)._value) {
        pSVar11 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._mixedFields;
        if (pSVar11 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_1822c9695;
        System_Collections_Generic_HashSet_object___Add
                  (pSVar11,(Il2CppObject *)"RotationY",
                   (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
      }
      pSVar8 = (__this->fields)._rotationZ;
      if (pSVar8 == (Settings_FloatSetting_o *)0x0) goto label_1822c9695;
      if ((float)uVar18 != (pSVar8->fields)._value) {
        pSVar11 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._mixedFields;
        if (pSVar11 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_1822c9695;
        System_Collections_Generic_HashSet_object___Add
                  (pSVar11,(Il2CppObject *)"RotationZ",
                   (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
      }
      pUVar21 = Map_MapScriptBaseObject__GetScale((UnityEngine_Vector3_o *)local_118,pMVar4,(MethodInfo *)0x0)
      ;
      uVar12._0_4_ = (pUVar21->fields).y;
      uVar12._4_4_ = (pUVar21->fields).z;
      pSVar8 = (__this->fields)._scaleX;
      _local_d4 = uVar12;
      if (pSVar8 == (Settings_FloatSetting_o *)0x0) goto label_1822c9695;
      if ((pUVar21->fields).x == (pSVar8->fields)._value) {
      }
      else {
        pSVar11 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._mixedFields;
        if (pSVar11 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_1822c9695;
        local_168.fields._4_8_ = uVar12;
        System_Collections_Generic_HashSet_object___Add
                  (pSVar11,(Il2CppObject *)"ScaleX",
                   (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
        uVar12._0_4_ = local_168.fields.y;
        uVar12._4_4_ = local_168.fields.z;
      }
      pSVar8 = (__this->fields)._scaleY;
      if (pSVar8 == (Settings_FloatSetting_o *)0x0) goto label_1822c9695;
      if ((float)uVar12 != (pSVar8->fields)._value) {
        pSVar11 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._mixedFields;
        if (pSVar11 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_1822c9695;
        System_Collections_Generic_HashSet_object___Add
                  (pSVar11,(Il2CppObject *)"ScaleY",
                   (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
      }
      pSVar8 = (__this->fields)._scaleZ;
      if (pSVar8 == (Settings_FloatSetting_o *)0x0) goto label_1822c9695;
      if (uVar12._4_4_ != (pSVar8->fields)._value) {
        pSVar11 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._mixedFields;
        if (pSVar11 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_1822c9695;
        System_Collections_Generic_HashSet_object___Add
                  (pSVar11,(Il2CppObject *)"ScaleZ",
                   (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
      }
      pSVar5 = (__this->fields)._collideMode;
      if (pSVar5 == (Settings_StringSetting_o *)0x0) goto label_1822c9695;
      bVar19 = System_String__op_Inequality
                         ((System_String_o *)(*(uint64_t *)((char *)pMVar4 + 0x60)),(pSVar5->fields)._value,(MethodInfo *)0x0);
      if (bVar19) {
        pSVar11 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._mixedFields;
        if (pSVar11 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_1822c9695;
        System_Collections_Generic_HashSet_object___Add
                  (pSVar11,(Il2CppObject *)"CollideMode",
                   (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
      }
      pSVar5 = (__this->fields)._collideWith;
      if (pSVar5 == (Settings_StringSetting_o *)0x0) goto label_1822c9695;
      bVar19 = System_String__op_Inequality((*(uint64_t *)((char *)pMVar4 + 0x68)),(pSVar5->fields)._value,(MethodInfo *)0x0);
      if (bVar19) {
        pSVar11 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._mixedFields;
        if (pSVar11 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_1822c9695;
        System_Collections_Generic_HashSet_object___Add
                  (pSVar11,(Il2CppObject *)"CollideWith",
                   (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
      }
      pSVar5 = (__this->fields)._physicsMaterial;
      if (pSVar5 == (Settings_StringSetting_o *)0x0) goto label_1822c9695;
      bVar19 = System_String__op_Inequality((*(uint64_t *)((char *)pMVar4 + 0x70)),(pSVar5->fields)._value,(MethodInfo *)0x0);
      if (bVar19) {
        pSVar11 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._mixedFields;
        if (pSVar11 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_1822c9695;
        System_Collections_Generic_HashSet_object___Add
                  (pSVar11,(Il2CppObject *)"PhysicsMaterial",
                   (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
      }
      pSVar20 = (*(uint64_t *)((char *)pMVar4 + 0x78));
      if ((pSVar20 == (System_String_o *)0x0) ||
         (pSVar5 = (__this->fields)._shader, pSVar5 == (Settings_StringSetting_o *)0x0)) goto label_1822c9695;
      bVar19 = System_String__op_Inequality
                         ((System_String_o *)pSVar20->fields,(pSVar5->fields)._value,(MethodInfo *)0x0);
      if (bVar19) {
        pSVar11 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._mixedFields;
        if (pSVar11 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_1822c9695;
        System_Collections_Generic_HashSet_object___Add
                  (pSVar11,(Il2CppObject *)"Shader",
                   (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
      }
      pSVar20 = (*(uint64_t *)((char *)pMVar4 + 0x78));
      if ((pSVar20 == (System_String_o *)0x0) ||
         (pSVar9 = (__this->fields)._color, pSVar9 == (Settings_ColorSetting_o *)0x0)) goto label_1822c9695;
      pSVar10 = (*(uint64_t *)((char *)pSVar20 + 0x18));
      pUVar22 = (pSVar9->fields)._value;
      if ((TypeInfo_UI_MapEditorInspectPanel->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel);
      }
      if ((pSVar10 == (System_String_c *)0x0) || (pUVar22 == (Utility_Color255_o *)0x0)) goto label_1822c9695;
      if ((*(int *)&(pSVar10->_1).name != (pUVar22->fields).R) ||
         (((*(int *)((longlong)&(pSVar10->_1).name + 4) != (pUVar22->fields).G ||
           (*(int *)&(pSVar10->_1).namespaze != (pUVar22->fields).B)) ||
          (*(int *)((longlong)&(pSVar10->_1).namespaze + 4) != (pUVar22->fields).A)))) {
        pSVar11 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._mixedFields;
        if (pSVar11 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_1822c9695;
        System_Collections_Generic_HashSet_object___Add
                  (pSVar11,(Il2CppObject *)"Color",
                   (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
      }
      pSVar24 = (__this->fields)._mapObjects;
      if (pSVar24 == (System_Collections_Generic_List_MapObject__o *)0x0) goto label_1822c9695;
    }
    pSVar11 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._mixedFields;
    if (pSVar11 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      bVar19 = System_Collections_Generic_HashSet_object___Contains
                         (pSVar11,(Il2CppObject *)"Name",
                          (MethodInfo_1759E40 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains)
      ;
      if (bVar19) {
        pSVar5 = (__this->fields)._name;
        if (pSVar5 == (Settings_StringSetting_o *)0x0) goto label_1822c9695;
        Settings_TypedSetting_object___set_Value
                  ((Settings_TypedSetting_T__o *)pSVar5,(Il2CppObject *)"--",
                   (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
      }
      pSVar11 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._mixedFields;
      if (pSVar11 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        bVar19 = System_Collections_Generic_HashSet_object___Contains
                           (pSVar11,(Il2CppObject *)"Texture",
                            (MethodInfo_1759E40 *)
                            MethodInfo_System_Collections_Generic_HashSet_string_Contains);
        if (bVar19) {
          pSVar5 = (__this->fields)._texture;
          if (pSVar5 == (Settings_StringSetting_o *)0x0) goto label_1822c9695;
          Settings_TypedSetting_object___set_Value
                    ((Settings_TypedSetting_T__o *)pSVar5,(Il2CppObject *)"--",
                     (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
        }
        pSVar28 = il2cpp_codegen_object_new
                            ((Il2CppClass *)
                             TypeInfo_System_Collections_Generic_List_Dictionary_string_BaseSetting);
        System_Collections_Generic_List_object____ctor
                  ((System_Collections_Generic_LowLevelList_T__o *)pSVar28,
                   (MethodInfo_92A240 *)
                   MethodInfo_System_Collections_Generic_List_Dictionary_string_BaseSetting_ctor);
        (__this->fields)._components = pSVar28;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._components,pSVar28);
        pSVar29 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
        System_Collections_Generic_List_object____ctor
                  ((System_Collections_Generic_LowLevelList_T__o *)pSVar29,
                   (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
        (__this->fields)._componentNames = pSVar29;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._componentNames,pSVar29);
        pMVar25 = (__this->fields)._mapObject;
        if ((pMVar25 != (Map_MapObject_o *)0x0) &&
           (pMVar4 = (pMVar25->fields).ScriptObject, pMVar4 != (Map_MapScriptBaseObject_o *)0x0)) {
          bVar1 = (TypeInfo_Map_MapScriptSceneObject->_2).typeHierarchyDepth;
          if (((pMVar4->klass->_2).typeHierarchyDepth < bVar1) ||
             ((pMVar4->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
              (Il2CppClass *)TypeInfo_Map_MapScriptSceneObject)) {
            il2cpp_codegen_raise_invalid_cast_exception(pMVar4);
          }
          __this_00 = *(System_Collections_Generic_List_T__o **)&(*(uint32_t *)((char *)pMVar4 + 0x80));
          if (__this_00 != (System_Collections_Generic_List_T__o *)0x0) {
            System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                      ((System_Collections_Generic_List_Enumerator_T__o *)local_118,__this_00,
                       (MethodInfo_91F180 *)
                       MethodInfo_System_Collections_Generic_List_MapScriptComponent_GetEnumerator);
            local_f0 = (undefined1  [8])local_118._0_8_;
            uStack_e8 = local_118._8_8_;
            local_e0 = local_108;
            local_158._0_4_ = 0.0;
            local_158._4_4_ = 0.0;
            local_158._8_8_ = local_f0;
            while( true ) {
              do {
                bVar19 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                   ((System_Collections_Generic_List_Enumerator_object__o *)local_f0,
                                    (MethodInfo_153A2A0 *)
                                    MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptComponent_MoveNext
                                   );
                if (!bVar19) {
                  System_Collections_Generic_List_Enumerator_object___Dispose
                            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_158._8_8_,
                             MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptComponent_Dispose)
                  ;
                  (*(__this->klass->vtable)._23_SyncSettingElements.methodPtr)
                            (__this,(__this->klass->vtable)._23_SyncSettingElements.method);
                  return;
                }
                object = il2cpp_codegen_object_new
                                   ((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel_c__DisplayClass94_0);
                System_Object___ctor
                          ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,
                           (MethodInfo *)0x0);
                local_138 = SUB84(object,0);
                fStack_134 = (float)((ulonglong)object >> 0x20);
                if (object == (UI_MapEditorInspectPanel___c__DisplayClass94_0_o *)0x0) {
                  ThrowNullReferenceException();
                }
                (object->fields).component = local_e0;
                Il2CppCodeGenWriteBarrier(&(object->fields).component,local_e0);
                pSVar30 = System_Linq_Enumerable__Skip_object_
                                    ((System_Collections_Generic_IEnumerable_TSource__o *)
                                     (__this->fields)._mapObjects,1,
                                     (MethodInfo_6C73A0 *)MethodInfo_System_Linq_Enumerable_Skip_MapObject);
                __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_MapObject_bool);
                System_Func_object__bool____ctor
                          ((System_Predicate_object__o *)__this_01,(Il2CppObject *)object,
                           (intptr_t)MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass94_0_SyncSettings_b__0
                           ,(MethodInfo_B61EB0 *)0x0);
                bVar19 = System_Linq_Enumerable__All_object_
                                   (pSVar30,(System_Func_TSource__bool__o *)__this_01,
                                    (MethodInfo_6B5F20 *)MethodInfo_System_Linq_Enumerable_All_MapObject);
              } while (!bVar19);
              pMVar34 = (object->fields).component;
              if (pMVar34 == (Map_MapScriptComponent_o *)0x0) {
                ThrowNullReferenceException();
              }
              pSVar29 = (__this->fields)._componentNames;
              if (pSVar29 == (System_Collections_Generic_List_string__o *)0x0) {
                ThrowNullReferenceException();
              }
              il2cpp_runtime_helper_180012890(pSVar29,(pMVar34->fields).ComponentName,
                            MethodInfo_System_Collections_Generic_List_string_Add);
              pGVar13 = (__this->fields)._gameManager;
              if (pGVar13 == (GameManagers_MapEditorGameManager_o *)0x0) {
                ThrowNullReferenceException();
              }
              pMVar34 = (object->fields).component;
              if (pMVar34 == (Map_MapScriptComponent_o *)0x0) {
                ThrowNullReferenceException();
              }
              pCVar14 = (pGVar13->fields).LogicEvaluator;
              if (pCVar14 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
                ThrowNullReferenceException();
              }
              pSVar31 = CustomLogic_CustomLogicEvaluator__GetComponentSettings
                                  (pCVar14,(pMVar34->fields).ComponentName,(pMVar34->fields).Parameters,
                                   (MethodInfo *)0x0);
              pSVar28 = (__this->fields)._components;
              if (pSVar28 == (System_Collections_Generic_List_Dictionary_string__BaseSetting___o *)0x0) break;
              il2cpp_runtime_helper_180012890(pSVar28,pSVar31);
              __this_02 = UI_MapEditorInspectPanel__SerializeComponentFields(__this,pSVar31,(MethodInfo *)0x0)
              ;
              local_178 = SUB84(__this_02,0);
              fStack_174 = (float)((ulonglong)__this_02 >> 0x20);
              pIVar32 = (Il2CppObject *)
                        System_Linq_Enumerable__Skip_object_
                                  ((System_Collections_Generic_IEnumerable_TSource__o *)
                                   (__this->fields)._mapObjects,1,
                                   (MethodInfo_6C73A0 *)MethodInfo_System_Linq_Enumerable_Skip_MapObject);
              if (pIVar32 == (Il2CppObject *)0x0) {
                ThrowNullReferenceException();
              }
              uStack_128 = local_178;
              local_124 = fStack_174;
              local_res18 = InterfaceInvoker0_Invoke
                                      (0,(Il2CppClass *)
                                         TypeInfo_System_Collections_Generic_IEnumerable_MapObject,pIVar32);
              local_118._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
              local_118._8_8_ = &local_res18;
              while( true ) {
                if (local_res18 == (Il2CppObject *)0x0) {
                  ThrowNullReferenceException();
                }
                pvVar33 = InterfaceInvoker0_Invoke
                                    (0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,local_res18);
                if ((char)pvVar33 == '\0') break;
                if (local_res18 == (Il2CppObject *)0x0) {
                  ThrowNullReferenceException();
                }
                pvVar33 = InterfaceInvoker0_Invoke
                                    (0,(Il2CppClass *)
                                       TypeInfo_System_Collections_Generic_IEnumerator_MapObject,local_res18);
                if (pvVar33 == (void *)0x0) {
                  ThrowNullReferenceException();
                }
                plVar15 = *(longlong **)((longlong)pvVar33 + 0x20);
                if (plVar15 == (longlong *)0x0) {
                  ThrowNullReferenceException();
                }
                bVar1 = (TypeInfo_Map_MapScriptSceneObject->_2).typeHierarchyDepth;
                if ((*(byte *)(*plVar15 + 0x130) < bVar1) ||
                   (*(Map_MapScriptSceneObject_c **)
                     (*(longlong *)(*plVar15 + 200) + -8 + (ulonglong)bVar1 * 8) !=
                    TypeInfo_Map_MapScriptSceneObject)) {
                  il2cpp_codegen_raise_invalid_cast_exception(plVar15);
                }
                pSVar30 = (System_Collections_Generic_IEnumerable_TSource__o *)plVar15[0x10];
                __this_03 = (object->fields).__9__2;
                if (__this_03 == (System_Func_MapScriptComponent__bool__o *)0x0) {
                  __this_03 = il2cpp_codegen_object_new
                                        ((Il2CppClass *)TypeInfo_System_Func_MapScriptComponent_bool);
                  System_Func_object__bool____ctor
                            ((System_Predicate_object__o *)__this_03,(Il2CppObject *)object,
                             (intptr_t)
                             MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass94_0_SyncSettings_b__2,
                             (MethodInfo_B61EB0 *)0x0);
                  (object->fields).__9__2 = __this_03;
                  Il2CppCodeGenWriteBarrier(&(object->fields).__9__2,__this_03);
                }
                pMVar34 = System_Linq_Enumerable__First_object__6be530
                                    (pSVar30,(System_Func_TSource__bool__o *)__this_03,
                                     (MethodInfo_6BE530 *)
                                     MethodInfo_System_Linq_Enumerable_First_MapScriptComponent);
                pGVar13 = (__this->fields)._gameManager;
                if (pGVar13 == (GameManagers_MapEditorGameManager_o *)0x0) {
                  ThrowNullReferenceException();
                }
                pMVar16 = (object->fields).component;
                if (pMVar16 == (Map_MapScriptComponent_o *)0x0) {
                  ThrowNullReferenceException();
                }
                if (pMVar34 == (Map_MapScriptComponent_o *)0x0) {
                  ThrowNullReferenceException();
                }
                pCVar14 = (pGVar13->fields).LogicEvaluator;
                if (pCVar14 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
                  ThrowNullReferenceException();
                }
                pSVar31 = CustomLogic_CustomLogicEvaluator__GetComponentSettings
                                    (pCVar14,(pMVar16->fields).ComponentName,(pMVar34->fields).Parameters,
                                     (MethodInfo *)0x0);
                __this_04 = (System_Collections_Generic_Dictionary_object__object__o *)
                            UI_MapEditorInspectPanel__SerializeComponentFields
                                      (__this,pSVar31,(MethodInfo *)0x0);
                uStack_148 = SUB84(__this_04,0);
                local_144 = (float)((ulonglong)__this_04 >> 0x20);
                if (__this_02 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) {
                  ThrowNullReferenceException();
                }
                System_Collections_Generic_Dictionary_PhotonNetwork_RaiseEventBatch__object___GetEnumerator
                          (local_88,(System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_02,
                           (MethodInfo_13C1150 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_string_GetEnumerator);
                local_c8.fields._dictionary = local_88[0].fields._dictionary;
                local_c8.fields._version = local_88[0].fields._version;
                local_c8.fields._index = local_88[0].fields._index;
                local_c8.fields._current.fields.key = local_88[0].fields._current.fields.key;
                local_c8.fields._current.fields.value = local_88[0].fields._current.fields.value;
                local_c8.fields._getEnumeratorRetType = local_88[0].fields._getEnumeratorRetType;
                local_c8.fields._36_4_ = local_88[0].fields._36_4_;
                local_100._0_4_ = 0.0;
                local_100._4_4_ = 0.0;
                local_100._8_8_ = &local_c8;
                while (bVar19 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                                          (&local_c8,
                                           (MethodInfo_1585360 *)
                                           MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_string_MoveNext
                                          ), b = local_c8.fields._current.fields.value,
                      pIVar32 = local_c8.fields._current.fields.key, bVar19) {
                  if (__this_04 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  bVar19 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                                     (__this_04,local_c8.fields._current.fields.key,
                                      (Il2CppObject **)&local_res20,
                                      (MethodInfo_14769C0 *)
                                      MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue
                                     );
                  if ((!bVar19) ||
                     (bVar19 = System_String__op_Inequality
                                         (local_res20,(System_String_o *)b,(MethodInfo *)0x0), bVar19)) {
                    pMVar34 = (object->fields).component;
                    if (pMVar34 == (Map_MapScriptComponent_o *)0x0) {
                      ThrowNullReferenceException();
                    }
                    pSVar11 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._mixedFields;
                    pSVar20 = (pMVar34->fields).ComponentName;
                    if ((TypeInfo_UI_MapEditorInspectPanel->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel);
                    }
                    pSVar20 = UI_MapEditorInspectPanel__GetComponentFieldKey
                                        (pSVar20,(System_String_o *)pIVar32,(MethodInfo *)0x0);
                    if (pSVar11 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                      ThrowNullReferenceException();
                    }
                    System_Collections_Generic_HashSet_object___Add
                              (pSVar11,(Il2CppObject *)pSVar20,
                               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add)
                    ;
                    __this_04 = (System_Collections_Generic_Dictionary_object__object__o *)
                                CONCAT44(local_144,uStack_148);
                  }
                }
                System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                          ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_c8,
                           MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_string_Dispose);
              }
              if (local_res18 != (Il2CppObject *)0x0) {
                InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,local_res18);
              }
            }
            ThrowNullReferenceException();
          }
        }
      }
    }
  }
label_1822c9695:
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel$$ColorEquals
// il2cpp: bool UI_MapEditorInspectPanel__ColorEquals (Utility_Color255_o* a, Utility_Color255_o* b, const MethodInfo* method);
// 0x1822bc770

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
// 0x1822c9fe0

System_String_array *
UI_MapEditorInspectPanel__WithMixedOption
          (UI_MapEditorInspectPanel_o *__this,System_String_array *options,System_String_o *fieldKey,
          Settings_StringSetting_o *setting,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  bool bVar1;
  System_Collections_Generic_List_string__o *__this_01;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *pUVar2;
  
  if (Il2CppMethodInitialized_18434756f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Insert);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_ctor_40dbf80);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"--");
    Il2CppMethodInitialized_18434756f = '\x01';
  }
  __this_00 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._mixedFields;
  if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    bVar1 = System_Collections_Generic_HashSet_object___Contains
                      (__this_00,(Il2CppObject *)fieldKey,
                       (MethodInfo_1759E40 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
    if (!bVar1) {
      return options;
    }
    if (setting != (Settings_StringSetting_o *)0x0) {
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)setting,(Il2CppObject *)"--",
                 (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
      System_Collections_Generic_List_object____ctor_94fb10
                ((System_Collections_Generic_List_object__o *)__this_01,
                 (System_Collections_Generic_IEnumerable_T__o *)options,
                 (MethodInfo_94FB10 *)MethodInfo_System_Collections_Generic_List_string_ctor_40dbf80);
      if (__this_01 != (System_Collections_Generic_List_string__o *)0x0) {
        System_Collections_Generic_List_object___Insert
                  ((System_Collections_Generic_List_object__o *)__this_01,0,
                   (Il2CppObject *)"--",
                   (MethodInfo_945FE0 *)MethodInfo_System_Collections_Generic_List_string_Insert);
        pUVar2 = System_Collections_Generic_List_object___ToArray
                           ((System_Collections_Generic_List_T__o *)__this_01,
                            (MethodInfo_929FE0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
        return (System_String_array *)pUVar2;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel$$CaptureSyncedValues
// il2cpp: void UI_MapEditorInspectPanel__CaptureSyncedValues (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x1822bb330
// eh: try 0x1822bc350..0x1822bc49c -> pad 0x18331abe0 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 76 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822bb63d: mov rax, qword ptr [rip + 0x1e12334]  ; "--"
// asm:   0x1822bb644: mov rbx, qword ptr [rip + 0x1dc96cd]  ; "Active"
// asm:   0x1822bb64b: jmp 0x1822bb693
// asm:   0x1822bb6df: mov rax, qword ptr [rip + 0x1e12292]  ; "--"
// asm:   0x1822bb6e6: mov rbx, qword ptr [rip + 0x1df783b]  ; "Static"
// asm:   0x1822bb6ed: jmp 0x1822bb735
// asm:   0x1822bb781: mov rax, qword ptr [rip + 0x1e121f0]  ; "--"
// asm:   0x1822bb788: mov rbx, qword ptr [rip + 0x1dd1631]  ; "Networked"
// asm:   0x1822bb78f: jmp 0x1822bb7d7
// asm:   0x1822bb823: mov rax, qword ptr [rip + 0x1e1214e]  ; "--"
// asm:   0x1822bb82a: mov rbx, qword ptr [rip + 0x1df94ff]  ; "Visible"
// asm:   0x1822bb831: jmp 0x1822bb879
// asm:   0x1822bb8c5: mov rax, qword ptr [rip + 0x1e120ac]  ; "--"
// asm:   0x1822bb8cc: mov rbx, qword ptr [rip + 0x1e095dd]  ; "Parent"
// asm:   0x1822bb8d3: jmp 0x1822bb8ff
// asm:   0x1822bb94b: mov rax, qword ptr [rip + 0x1e12026]  ; "--"
// asm:   0x1822bb952: mov rbx, qword ptr [rip + 0x1e179a7]  ; "PositionX"
// asm:   0x1822bb959: jmp 0x1822bb997
// asm:   0x1822bb9e3: mov rax, qword ptr [rip + 0x1e11f8e]  ; "--"
// asm:   0x1822bb9ea: mov rbx, qword ptr [rip + 0x1e179ef]  ; "PositionY"
// asm:   0x1822bb9f1: jmp 0x1822bba2f
// asm:   0x1822bba7b: mov rax, qword ptr [rip + 0x1e11ef6]  ; "--"
// asm:   0x1822bba82: mov rbx, qword ptr [rip + 0x1e17a37]  ; "PositionZ"
// asm:   0x1822bba89: jmp 0x1822bbac7
// asm:   0x1822bbb13: mov rax, qword ptr [rip + 0x1e11e5e]  ; "--"
// asm:   0x1822bbb1a: mov rbx, qword ptr [rip + 0x1db61d7]  ; "RotationX"
// asm:   0x1822bbb21: jmp 0x1822bbb5f
// asm:   0x1822bbbab: mov rax, qword ptr [rip + 0x1e11dc6]  ; "--"
// asm:   0x1822bbbb2: mov rbx, qword ptr [rip + 0x1db621f]  ; "RotationY"
// asm:   0x1822bbbb9: jmp 0x1822bbbf7
// asm:   0x1822bbc43: mov rax, qword ptr [rip + 0x1e11d2e]  ; "--"
// asm:   0x1822bbc4a: mov rbx, qword ptr [rip + 0x1db6267]  ; "RotationZ"
// asm:   0x1822bbc51: jmp 0x1822bbc8f
// asm:   0x1822bbcdb: mov rax, qword ptr [rip + 0x1e11c96]  ; "--"
// asm:   0x1822bbce2: mov rbx, qword ptr [rip + 0x1dc02c7]  ; "ScaleX"
// asm:   0x1822bbce9: jmp 0x1822bbd27
// asm:   0x1822bbd73: mov rax, qword ptr [rip + 0x1e11bfe]  ; "--"
// asm:   0x1822bbd7a: mov rbx, qword ptr [rip + 0x1dc030f]  ; "ScaleY"
// asm:   0x1822bbd81: jmp 0x1822bbdbf
// asm:   0x1822bbe0b: mov rax, qword ptr [rip + 0x1e11b66]  ; "--"
// asm:   0x1822bbe12: mov rbx, qword ptr [rip + 0x1dc0357]  ; "ScaleZ"
// asm:   0x1822bbe19: jmp 0x1822bbe57
// asm:   0x1822bc02c: mov rax, qword ptr [rip + 0x1e11945]  ; "--"
// asm:   0x1822bc033: mov rbx, qword ptr [rip + 0x1db376e]  ; "TilingX"
// asm:   0x1822bc03a: jmp 0x1822bc078
// asm:   0x1822bc0c4: mov rax, qword ptr [rip + 0x1e118ad]  ; "--"
// asm:   0x1822bc0cb: mov rbx, qword ptr [rip + 0x1db37b6]  ; "TilingY"
// asm:   0x1822bc0d2: jmp 0x1822bc110
// asm:   0x1822bc15c: mov rax, qword ptr [rip + 0x1e11815]  ; "--"
// asm:   0x1822bc163: mov rbx, qword ptr [rip + 0x1deebf6]  ; "OffsetX"
// asm:   0x1822bc16a: jmp 0x1822bc1a8
// asm:   0x1822bc1f4: mov rax, qword ptr [rip + 0x1e1177d]  ; "--"
// asm:   0x1822bc1fb: mov rbx, qword ptr [rip + 0x1deec3e]  ; "OffsetY"
// asm:   0x1822bc202: jmp 0x1822bc240
// asm:   0x1822bc34c: nop dword ptr [rax]
// asm:   0x1822bc40c: mov rdx, qword ptr [rip + 0x1ddb505]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose
// asm:   0x1822bc413: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1822bc418: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1822bc41d: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1822bc422: test rcx, rcx
// asm:   0x1822bc425: jne 0x1822bc49c
// asm:   0x1822bc427: mov rdi, qword ptr [rsp + 0xc0]
// asm:   0x1822bc42f: mov r15d, dword ptr [rsp + 0x24]
// asm:   0x1822bc434: mov r12, qword ptr [rsp + 0x50]
// asm:   0x1822bc49c: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x18331abe0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18331abe5: push rbp
// asm:   0x18331abe6: sub rsp, 0x20
// asm:   0x18331abea: mov rbp, rdx
// asm:   0x18331abed: mov rax, qword ptr [rbp + 0x58]
// asm:   0x18331abf1: mov rcx, qword ptr [rax]
// asm:   0x18331abf4: mov qword ptr [rbp + 0x28], rcx
// asm:   0x18331abf8: movabs rax, 0
// asm:   0x18331ac02: add rsp, 0x20
// asm:   0x18331ac06: pop rbp
// asm:   0x18331ac07: ret 

void UI_MapEditorInspectPanel__CaptureSyncedValues(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  System_Collections_Generic_HashSet_object__o *pSVar3;
  Settings_BoolSetting_o *pSVar4;
  Settings_IntSetting_o *pSVar5;
  Settings_FloatSetting_o *pSVar6;
  System_Collections_Generic_Dictionary_string__Dictionary_string__string___o *__this_00;
  System_Collections_Generic_List_string__o *pSVar7;
  System_Collections_Generic_List_Dictionary_string__BaseSetting___o *__this_01;
  Il2CppObject *fieldName;
  bool bVar8;
  System_String_o *pSVar9;
  System_String_o *pSVar10;
  System_Collections_Generic_Dictionary_string__BaseSetting__o *settings;
  System_Collections_Generic_Dictionary_string__string__o *pSVar11;
  System_Collections_Generic_IEnumerable_TKey__o *source;
  System_Collections_Generic_List_TSource__o *__this_02;
  int index;
  bool local_res18 [8];
  float local_res20 [2];
  int32_t local_98;
  int local_94;
  undefined8 local_90;
  System_Collections_Generic_List_Enumerator_object__o *local_88;
  System_Collections_Generic_List_Enumerator_object__o local_80;
  System_Collections_Generic_Dictionary_string__string__o *local_68;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  
  if (Il2CppMethodInitialized_184347570 == '\0') {
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
    Il2CppMethodInitialized_184347570 = '\x01';
  }
  local_res18[0] = false;
  local_98 = 0;
  local_res20[0] = 0.0;
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  pSVar11 = (__this->fields)._syncedSerialized;
  if (pSVar11 != (System_Collections_Generic_Dictionary_string__string__o *)0x0) {
    System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar11,
               (MethodInfo_13BF1C0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Clear);
    pSVar1 = (__this->fields)._name;
    if ((pSVar1 != (Settings_StringSetting_o *)0x0) &&
       (pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._syncedSerialized
       , pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
      System_Collections_Generic_Dictionary_object__object___set_Item
                (pSVar2,(Il2CppObject *)"Name",(Il2CppObject *)(pSVar1->fields)._value,
                 (MethodInfo_147A7F0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item
                );
      pSVar3 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._mixedFields;
      if (pSVar3 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._syncedSerialized
        ;
        bVar8 = System_Collections_Generic_HashSet_object___Contains
                          (pSVar3,(Il2CppObject *)"Active",
                           (MethodInfo_1759E40 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains
                          );
        pSVar9 = "Active";
        pSVar10 = "--";
        if (!bVar8) {
          pSVar4 = (__this->fields)._active;
          if (pSVar4 == (Settings_BoolSetting_o *)0x0) goto label_1822bc4a2;
          local_res18[0] = (pSVar4->fields)._value;
          if ((g_data_184354de8->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init(g_data_184354de8);
          }
          pSVar10 = System_Boolean__ToString(local_res18,(MethodInfo *)0x0);
        }
        if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary_object__object___set_Item
                    (pSVar2,(Il2CppObject *)pSVar9,(Il2CppObject *)pSVar10,
                     (MethodInfo_147A7F0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
          pSVar3 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._mixedFields;
          if (pSVar3 != (System_Collections_Generic_HashSet_object__o *)0x0) {
            pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                     (__this->fields)._syncedSerialized;
            bVar8 = System_Collections_Generic_HashSet_object___Contains
                              (pSVar3,(Il2CppObject *)"Static",
                               (MethodInfo_1759E40 *)
                               MethodInfo_System_Collections_Generic_HashSet_string_Contains);
            pSVar9 = "Static";
            pSVar10 = "--";
            if (!bVar8) {
              pSVar4 = (__this->fields)._static;
              if (pSVar4 == (Settings_BoolSetting_o *)0x0) goto label_1822bc4a2;
              local_res18[0] = (pSVar4->fields)._value;
              if ((g_data_184354de8->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init(g_data_184354de8);
              }
              pSVar10 = System_Boolean__ToString(local_res18,(MethodInfo *)0x0);
            }
            if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              System_Collections_Generic_Dictionary_object__object___set_Item
                        (pSVar2,(Il2CppObject *)pSVar9,(Il2CppObject *)pSVar10,
                         (MethodInfo_147A7F0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
              pSVar3 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._mixedFields;
              if (pSVar3 != (System_Collections_Generic_HashSet_object__o *)0x0) {
                pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                         (__this->fields)._syncedSerialized;
                bVar8 = System_Collections_Generic_HashSet_object___Contains
                                  (pSVar3,(Il2CppObject *)"Networked",
                                   (MethodInfo_1759E40 *)
                                   MethodInfo_System_Collections_Generic_HashSet_string_Contains);
                pSVar9 = "Networked";
                pSVar10 = "--";
                if (!bVar8) {
                  pSVar4 = (__this->fields)._networked;
                  if (pSVar4 == (Settings_BoolSetting_o *)0x0) goto label_1822bc4a2;
                  local_res18[0] = (pSVar4->fields)._value;
                  if ((g_data_184354de8->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init(g_data_184354de8);
                  }
                  pSVar10 = System_Boolean__ToString(local_res18,(MethodInfo *)0x0);
                }
                if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                  System_Collections_Generic_Dictionary_object__object___set_Item
                            (pSVar2,(Il2CppObject *)pSVar9,(Il2CppObject *)pSVar10,
                             (MethodInfo_147A7F0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
                  pSVar3 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._mixedFields;
                  if (pSVar3 != (System_Collections_Generic_HashSet_object__o *)0x0) {
                    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                             (__this->fields)._syncedSerialized;
                    bVar8 = System_Collections_Generic_HashSet_object___Contains
                                      (pSVar3,(Il2CppObject *)"Visible",
                                       (MethodInfo_1759E40 *)
                                       MethodInfo_System_Collections_Generic_HashSet_string_Contains);
                    pSVar9 = "Visible";
                    pSVar10 = "--";
                    if (!bVar8) {
                      pSVar4 = (__this->fields)._visible;
                      if (pSVar4 == (Settings_BoolSetting_o *)0x0) goto label_1822bc4a2;
                      local_res18[0] = (pSVar4->fields)._value;
                      if ((g_data_184354de8->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init(g_data_184354de8);
                      }
                      pSVar10 = System_Boolean__ToString(local_res18,(MethodInfo *)0x0);
                    }
                    if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                      System_Collections_Generic_Dictionary_object__object___set_Item
                                (pSVar2,(Il2CppObject *)pSVar9,(Il2CppObject *)pSVar10,
                                 (MethodInfo_147A7F0 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
                      pSVar3 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._mixedFields;
                      if (pSVar3 != (System_Collections_Generic_HashSet_object__o *)0x0) {
                        pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                                 (__this->fields)._syncedSerialized;
                        bVar8 = System_Collections_Generic_HashSet_object___Contains
                                          (pSVar3,(Il2CppObject *)"Parent",
                                           (MethodInfo_1759E40 *)
                                           MethodInfo_System_Collections_Generic_HashSet_string_Contains);
                        pSVar9 = "Parent";
                        pSVar10 = "--";
                        if (!bVar8) {
                          pSVar5 = (__this->fields)._parent;
                          if (pSVar5 == (Settings_IntSetting_o *)0x0) goto label_1822bc4a2;
                          local_98 = (pSVar5->fields)._value;
                          pSVar10 = System_Int32__ToString(&local_98,(MethodInfo *)0x0);
                        }
                        if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                          System_Collections_Generic_Dictionary_object__object___set_Item
                                    (pSVar2,(Il2CppObject *)pSVar9,(Il2CppObject *)pSVar10,
                                     (MethodInfo_147A7F0 *)
                                     MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
                          pSVar3 = (System_Collections_Generic_HashSet_object__o *)
                                   (__this->fields)._mixedFields;
                          if (pSVar3 != (System_Collections_Generic_HashSet_object__o *)0x0) {
                            pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                                     (__this->fields)._syncedSerialized;
                            bVar8 = System_Collections_Generic_HashSet_object___Contains
                                              (pSVar3,(Il2CppObject *)"PositionX",
                                               (MethodInfo_1759E40 *)
                                               MethodInfo_System_Collections_Generic_HashSet_string_Contains);
                            pSVar9 = "PositionX";
                            pSVar10 = "--";
                            if (!bVar8) {
                              pSVar6 = (__this->fields)._positionX;
                              if (pSVar6 == (Settings_FloatSetting_o *)0x0) goto label_1822bc4a2;
                              local_res20[0] = (pSVar6->fields)._value;
                              pSVar10 = System_Single__ToString_1b49f60
                                                  (local_res20,"R",(MethodInfo *)0x0);
                            }
                            if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                              System_Collections_Generic_Dictionary_object__object___set_Item
                                        (pSVar2,(Il2CppObject *)pSVar9,(Il2CppObject *)pSVar10,
                                         (MethodInfo_147A7F0 *)
                                         MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item
                                        );
                              pSVar3 = (System_Collections_Generic_HashSet_object__o *)
                                       (__this->fields)._mixedFields;
                              if (pSVar3 != (System_Collections_Generic_HashSet_object__o *)0x0) {
                                pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                                         (__this->fields)._syncedSerialized;
                                bVar8 = System_Collections_Generic_HashSet_object___Contains
                                                  (pSVar3,(Il2CppObject *)"PositionY",
                                                   (MethodInfo_1759E40 *)
                                                   MethodInfo_System_Collections_Generic_HashSet_string_Contains
                                                  );
                                pSVar9 = "PositionY";
                                pSVar10 = "--";
                                if (!bVar8) {
                                  pSVar6 = (__this->fields)._positionY;
                                  if (pSVar6 == (Settings_FloatSetting_o *)0x0) goto label_1822bc4a2;
                                  local_res20[0] = (pSVar6->fields)._value;
                                  pSVar10 = System_Single__ToString_1b49f60
                                                      (local_res20,"R",(MethodInfo *)0x0);
                                }
                                if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)
                                {
                                  System_Collections_Generic_Dictionary_object__object___set_Item
                                            (pSVar2,(Il2CppObject *)pSVar9,(Il2CppObject *)pSVar10,
                                             (MethodInfo_147A7F0 *)
                                             MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item
                                            );
                                  pSVar3 = (System_Collections_Generic_HashSet_object__o *)
                                           (__this->fields)._mixedFields;
                                  if (pSVar3 != (System_Collections_Generic_HashSet_object__o *)0x0) {
                                    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                                             (__this->fields)._syncedSerialized;
                                    bVar8 = System_Collections_Generic_HashSet_object___Contains
                                                      (pSVar3,(Il2CppObject *)"PositionZ",
                                                       (MethodInfo_1759E40 *)
                                                       MethodInfo_System_Collections_Generic_HashSet_string_Contains
                                                      );
                                    pSVar9 = "PositionZ";
                                    pSVar10 = "--";
                                    if (!bVar8) {
                                      pSVar6 = (__this->fields)._positionZ;
                                      if (pSVar6 == (Settings_FloatSetting_o *)0x0) goto label_1822bc4a2;
                                      local_res20[0] = (pSVar6->fields)._value;
                                      pSVar10 = System_Single__ToString_1b49f60
                                                          (local_res20,"R",(MethodInfo *)0x0
                                                          );
                                    }
                                    if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)
                                                  0x0) {
                                      System_Collections_Generic_Dictionary_object__object___set_Item
                                                (pSVar2,(Il2CppObject *)pSVar9,(Il2CppObject *)pSVar10,
                                                 (MethodInfo_147A7F0 *)
                                                 MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item
                                                );
                                      pSVar3 = (System_Collections_Generic_HashSet_object__o *)
                                               (__this->fields)._mixedFields;
                                      if (pSVar3 != (System_Collections_Generic_HashSet_object__o *)0x0) {
                                        pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                                                 (__this->fields)._syncedSerialized;
                                        bVar8 = System_Collections_Generic_HashSet_object___Contains
                                                          (pSVar3,(Il2CppObject *)"RotationX",
                                                           (MethodInfo_1759E40 *)
                                                                                                                      
                                                       MethodInfo_System_Collections_Generic_HashSet_string_Contains
                                                       );
                                        pSVar9 = "RotationX";
                                        pSVar10 = "--";
                                        if (!bVar8) {
                                          pSVar6 = (__this->fields)._rotationX;
                                          if (pSVar6 == (Settings_FloatSetting_o *)0x0) goto label_1822bc4a2;
                                          local_res20[0] = (pSVar6->fields)._value;
                                          pSVar10 = System_Single__ToString_1b49f60
                                                              (local_res20,"R",
                                                               (MethodInfo *)0x0);
                                        }
                                        if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                          System_Collections_Generic_Dictionary_object__object___set_Item
                                                    (pSVar2,(Il2CppObject *)pSVar9,(Il2CppObject *)pSVar10,
                                                     (MethodInfo_147A7F0 *)
                                                     MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item
                                                    );
                                          pSVar3 = (System_Collections_Generic_HashSet_object__o *)
                                                   (__this->fields)._mixedFields;
                                          if (pSVar3 != (System_Collections_Generic_HashSet_object__o *)0x0) {
                                            pSVar2 = (System_Collections_Generic_Dictionary_object__object__o
                                                      *)(__this->fields)._syncedSerialized;
                                            bVar8 = System_Collections_Generic_HashSet_object___Contains
                                                              (pSVar3,(Il2CppObject *)"RotationY",
                                                               (MethodInfo_1759E40 *)
                                                                                                                              
                                                       MethodInfo_System_Collections_Generic_HashSet_string_Contains
                                                       );
                                            pSVar9 = "RotationY";
                                            pSVar10 = "--";
                                            if (!bVar8) {
                                              pSVar6 = (__this->fields)._rotationY;
                                              if (pSVar6 == (Settings_FloatSetting_o *)0x0)
                                              goto label_1822bc4a2;
                                              local_res20[0] = (pSVar6->fields)._value;
                                              pSVar10 = System_Single__ToString_1b49f60
                                                                  (local_res20,"R",
                                                                   (MethodInfo *)0x0);
                                            }
                                            if (pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                              System_Collections_Generic_Dictionary_object__object___set_Item
                                                        (pSVar2,(Il2CppObject *)pSVar9,(Il2CppObject *)pSVar10
                                                         ,(MethodInfo_147A7F0 *)
                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item
                                                       );
                                              pSVar3 = (System_Collections_Generic_HashSet_object__o *)
                                                       (__this->fields)._mixedFields;
                                              if (pSVar3 != (System_Collections_Generic_HashSet_object__o *)
                                                            0x0) {
                                                pSVar2 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._syncedSerialized;
                                                bVar8 = System_Collections_Generic_HashSet_object___Contains
                                                                  (pSVar3,(Il2CppObject *)
                                                                          "RotationZ",
                                                                   (MethodInfo_1759E40 *)
                                                                                                                                      
                                                       MethodInfo_System_Collections_Generic_HashSet_string_Contains
                                                       );
                                                pSVar9 = "RotationZ";
                                                pSVar10 = "--";
                                                if (!bVar8) {
                                                  pSVar6 = (__this->fields)._rotationZ;
                                                  if (pSVar6 == (Settings_FloatSetting_o *)0x0)
                                                  goto label_1822bc4a2;
                                                  local_res20[0] = (pSVar6->fields)._value;
                                                  pSVar10 = System_Single__ToString_1b49f60
                                                                      (local_res20,"R",
                                                                       (MethodInfo *)0x0);
                                                }
                                                if (pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                  System_Collections_Generic_Dictionary_object__object___set_Item
                                                            (pSVar2,(Il2CppObject *)pSVar9,
                                                             (Il2CppObject *)pSVar10,
                                                             (MethodInfo_147A7F0 *)
                                                                                                                          
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item
                                                       );
                                                  pSVar3 = (System_Collections_Generic_HashSet_object__o *)
                                                           (__this->fields)._mixedFields;
                                                  if (pSVar3 != (System_Collections_Generic_HashSet_object__o
                                                                 *)0x0) {
                                                    pSVar2 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._syncedSerialized;
                                                    bVar8 = 
                                                       System_Collections_Generic_HashSet_object___Contains
                                                                 (pSVar3,(Il2CppObject *)"ScaleX"
                                                                  ,(MethodInfo_1759E40 *)
                                                                                                                                      
                                                       MethodInfo_System_Collections_Generic_HashSet_string_Contains
                                                       );
                                                    pSVar9 = "ScaleX";
                                                    pSVar10 = "--";
                                                    if (!bVar8) {
                                                      pSVar6 = (__this->fields)._scaleX;
                                                      if (pSVar6 == (Settings_FloatSetting_o *)0x0)
                                                      goto label_1822bc4a2;
                                                      local_res20[0] = (pSVar6->fields)._value;
                                                      pSVar10 = System_Single__ToString_1b49f60
                                                                          (local_res20,"R",
                                                                           (MethodInfo *)0x0);
                                                    }
                                                    if (pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                      System_Collections_Generic_Dictionary_object__object___set_Item
                                                                (pSVar2,(Il2CppObject *)pSVar9,
                                                                 (Il2CppObject *)pSVar10,
                                                                 (MethodInfo_147A7F0 *)
                                                                                                                                  
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item
                                                       );
                                                      pSVar3 = (System_Collections_Generic_HashSet_object__o *
                                                               )(__this->fields)._mixedFields;
                                                      if (pSVar3 != (
                                                       System_Collections_Generic_HashSet_object__o *)0x0) {
                                                        pSVar2 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._syncedSerialized;
                                                       bVar8 = 
                                                       System_Collections_Generic_HashSet_object___Contains
                                                                 (pSVar3,(Il2CppObject *)"ScaleY"
                                                                  ,(MethodInfo_1759E40 *)
                                                                                                                                      
                                                       MethodInfo_System_Collections_Generic_HashSet_string_Contains
                                                       );
                                                       pSVar9 = "ScaleY";
                                                       pSVar10 = "--";
                                                       if (!bVar8) {
                                                         pSVar6 = (__this->fields)._scaleY;
                                                         if (pSVar6 == (Settings_FloatSetting_o *)0x0)
                                                         goto label_1822bc4a2;
                                                         local_res20[0] = (pSVar6->fields)._value;
                                                         pSVar10 = System_Single__ToString_1b49f60
                                                                             (local_res20,
                                                                              "R",
                                                                              (MethodInfo *)0x0);
                                                       }
                                                       if (pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar2,(Il2CppObject *)pSVar9,
                                                                  (Il2CppObject *)pSVar10,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item
                                                       );
                                                       pSVar3 = (System_Collections_Generic_HashSet_object__o
                                                                 *)(__this->fields)._mixedFields;
                                                       if (pSVar3 != (
                                                       System_Collections_Generic_HashSet_object__o *)0x0) {
                                                         pSVar2 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._syncedSerialized;
                                                       bVar8 = 
                                                       System_Collections_Generic_HashSet_object___Contains
                                                                 (pSVar3,(Il2CppObject *)"ScaleZ"
                                                                  ,(MethodInfo_1759E40 *)
                                                                                                                                      
                                                       MethodInfo_System_Collections_Generic_HashSet_string_Contains
                                                       );
                                                       pSVar9 = "ScaleZ";
                                                       pSVar10 = "--";
                                                       if (!bVar8) {
                                                         pSVar6 = (__this->fields)._scaleZ;
                                                         if (pSVar6 == (Settings_FloatSetting_o *)0x0)
                                                         goto label_1822bc4a2;
                                                         local_res20[0] = (pSVar6->fields)._value;
                                                         pSVar10 = System_Single__ToString_1b49f60
                                                                             (local_res20,
                                                                              "R",
                                                                              (MethodInfo *)0x0);
                                                       }
                                                       if (pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar2,(Il2CppObject *)pSVar9,
                                                                  (Il2CppObject *)pSVar10,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item
                                                       );
                                                       pSVar1 = (__this->fields)._collideMode;
                                                       if ((pSVar1 != (Settings_StringSetting_o *)0x0) &&
                                                          (pSVar2 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._syncedSerialized,
                                                       pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0)) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar2,(Il2CppObject *)"CollideMode"
                                                                  ,(Il2CppObject *)(pSVar1->fields)._value,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item
                                                       );
                                                       pSVar1 = (__this->fields)._collideWith;
                                                       if ((pSVar1 != (Settings_StringSetting_o *)0x0) &&
                                                          (pSVar2 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._syncedSerialized,
                                                       pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0)) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar2,(Il2CppObject *)"CollideWith"
                                                                  ,(Il2CppObject *)(pSVar1->fields)._value,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item
                                                       );
                                                       pSVar1 = (__this->fields)._physicsMaterial;
                                                       if ((pSVar1 != (Settings_StringSetting_o *)0x0) &&
                                                          (pSVar2 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._syncedSerialized,
                                                       pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0)) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar2,(Il2CppObject *)"PhysicsMaterial"
                                                                  ,(Il2CppObject *)(pSVar1->fields)._value,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item
                                                       );
                                                       pSVar1 = (__this->fields)._shader;
                                                       if ((pSVar1 != (Settings_StringSetting_o *)0x0) &&
                                                          (pSVar2 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._syncedSerialized,
                                                       pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0)) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar2,(Il2CppObject *)"Shader"
                                                                  ,(Il2CppObject *)(pSVar1->fields)._value,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item
                                                       );
                                                       pSVar2 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._syncedSerialized;
                                                       pSVar9 = UI_MapEditorInspectPanel__SerializeSetting
                                                                          (__this,(Settings_BaseSetting_o *)
                                                                                  (__this->fields)._color,
                                                                           (MethodInfo *)0x0);
                                                       if (pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar2,(Il2CppObject *)"Color"
                                                                  ,(Il2CppObject *)pSVar9,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item
                                                       );
                                                       pSVar2 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._syncedSerialized;
                                                       pSVar9 = UI_MapEditorInspectPanel__SerializeSetting
                                                                          (__this,(Settings_BaseSetting_o *)
                                                                                  (__this->fields).
                                                                                  _reflectColor,
                                                                           (MethodInfo *)0x0);
                                                       if (pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar2,(Il2CppObject *)"ReflectColor"
                                                                  ,(Il2CppObject *)pSVar9,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item
                                                       );
                                                       pSVar1 = (__this->fields)._texture;
                                                       if ((pSVar1 != (Settings_StringSetting_o *)0x0) &&
                                                          (pSVar2 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._syncedSerialized,
                                                       pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0)) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar2,(Il2CppObject *)"Texture"
                                                                  ,(Il2CppObject *)(pSVar1->fields)._value,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item
                                                       );
                                                       pSVar3 = (System_Collections_Generic_HashSet_object__o
                                                                 *)(__this->fields)._mixedFields;
                                                       if (pSVar3 != (
                                                       System_Collections_Generic_HashSet_object__o *)0x0) {
                                                         pSVar2 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._syncedSerialized;
                                                       bVar8 = 
                                                       System_Collections_Generic_HashSet_object___Contains
                                                                 (pSVar3,(Il2CppObject *)"TilingX"
                                                                  ,(MethodInfo_1759E40 *)
                                                                                                                                      
                                                       MethodInfo_System_Collections_Generic_HashSet_string_Contains
                                                       );
                                                       pSVar9 = "TilingX";
                                                       pSVar10 = "--";
                                                       if (!bVar8) {
                                                         pSVar6 = (__this->fields)._tilingX;
                                                         if (pSVar6 == (Settings_FloatSetting_o *)0x0)
                                                         goto label_1822bc4a2;
                                                         local_res20[0] = (pSVar6->fields)._value;
                                                         pSVar10 = System_Single__ToString_1b49f60
                                                                             (local_res20,
                                                                              "R",
                                                                              (MethodInfo *)0x0);
                                                       }
                                                       if (pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar2,(Il2CppObject *)pSVar9,
                                                                  (Il2CppObject *)pSVar10,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item
                                                       );
                                                       pSVar3 = (System_Collections_Generic_HashSet_object__o
                                                                 *)(__this->fields)._mixedFields;
                                                       if (pSVar3 != (
                                                       System_Collections_Generic_HashSet_object__o *)0x0) {
                                                         pSVar2 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._syncedSerialized;
                                                       bVar8 = 
                                                       System_Collections_Generic_HashSet_object___Contains
                                                                 (pSVar3,(Il2CppObject *)"TilingY"
                                                                  ,(MethodInfo_1759E40 *)
                                                                                                                                      
                                                       MethodInfo_System_Collections_Generic_HashSet_string_Contains
                                                       );
                                                       pSVar9 = "TilingY";
                                                       pSVar10 = "--";
                                                       if (!bVar8) {
                                                         pSVar6 = (__this->fields)._tilingY;
                                                         if (pSVar6 == (Settings_FloatSetting_o *)0x0)
                                                         goto label_1822bc4a2;
                                                         local_res20[0] = (pSVar6->fields)._value;
                                                         pSVar10 = System_Single__ToString_1b49f60
                                                                             (local_res20,
                                                                              "R",
                                                                              (MethodInfo *)0x0);
                                                       }
                                                       if (pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar2,(Il2CppObject *)pSVar9,
                                                                  (Il2CppObject *)pSVar10,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item
                                                       );
                                                       pSVar3 = (System_Collections_Generic_HashSet_object__o
                                                                 *)(__this->fields)._mixedFields;
                                                       if (pSVar3 != (
                                                       System_Collections_Generic_HashSet_object__o *)0x0) {
                                                         pSVar2 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._syncedSerialized;
                                                       bVar8 = 
                                                       System_Collections_Generic_HashSet_object___Contains
                                                                 (pSVar3,(Il2CppObject *)"OffsetX"
                                                                  ,(MethodInfo_1759E40 *)
                                                                                                                                      
                                                       MethodInfo_System_Collections_Generic_HashSet_string_Contains
                                                       );
                                                       pSVar9 = "OffsetX";
                                                       pSVar10 = "--";
                                                       if (!bVar8) {
                                                         pSVar6 = (__this->fields)._offsetX;
                                                         if (pSVar6 == (Settings_FloatSetting_o *)0x0)
                                                         goto label_1822bc4a2;
                                                         local_res20[0] = (pSVar6->fields)._value;
                                                         pSVar10 = System_Single__ToString_1b49f60
                                                                             (local_res20,
                                                                              "R",
                                                                              (MethodInfo *)0x0);
                                                       }
                                                       if (pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar2,(Il2CppObject *)pSVar9,
                                                                  (Il2CppObject *)pSVar10,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item
                                                       );
                                                       pSVar3 = (System_Collections_Generic_HashSet_object__o
                                                                 *)(__this->fields)._mixedFields;
                                                       if (pSVar3 != (
                                                       System_Collections_Generic_HashSet_object__o *)0x0) {
                                                         pSVar2 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._syncedSerialized;
                                                       bVar8 = 
                                                       System_Collections_Generic_HashSet_object___Contains
                                                                 (pSVar3,(Il2CppObject *)"OffsetY"
                                                                  ,(MethodInfo_1759E40 *)
                                                                                                                                      
                                                       MethodInfo_System_Collections_Generic_HashSet_string_Contains
                                                       );
                                                       pSVar9 = "OffsetY";
                                                       pSVar10 = "--";
                                                       if (!bVar8) {
                                                         pSVar6 = (__this->fields)._offsetY;
                                                         if (pSVar6 == (Settings_FloatSetting_o *)0x0)
                                                         goto label_1822bc4a2;
                                                         local_res20[0] = (pSVar6->fields)._value;
                                                         pSVar10 = System_Single__ToString_1b49f60
                                                                             (local_res20,
                                                                              "R",
                                                                              (MethodInfo *)0x0);
                                                       }
                                                       if (pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar2,(Il2CppObject *)pSVar9,
                                                                  (Il2CppObject *)pSVar10,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item
                                                       );
                                                       __this_00 = (__this->fields)._syncedComponentFields;
                                                       if (__this_00 !=
                                                           (
                                                       System_Collections_Generic_Dictionary_string__Dictionary_string__string___o
                                                       *)0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
                                                                 ((
                                                       System_Collections_Generic_Dictionary_TKey__TValue__o *
                                                       )__this_00,
                                                       (MethodInfo_13BF1C0 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_string_Clear
                                                       );
                                                       index = 0;
                                                       while (pSVar7 = (__this->fields)._componentNames,
                                                             local_94 = index,
                                                             pSVar7 != (
                                                       System_Collections_Generic_List_string__o *)0x0) {
                                                         if ((pSVar7->fields)._size <= index) {
                                                           return;
                                                         }
                                                         __this_01 = (__this->fields)._components;
                                                         if (__this_01 ==
                                                             (
                                                       System_Collections_Generic_List_Dictionary_string__BaseSetting___o
                                                       *)0x0) break;
                                                       settings = (
                                                       System_Collections_Generic_Dictionary_string__BaseSetting__o
                                                       *)
                                                       System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )__this_01,index,
                                                                  (MethodInfo_92B830 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_List_Dictionary_string_BaseSetting_get_Item
                                                       );
                                                       pSVar11 = 
                                                       UI_MapEditorInspectPanel__SerializeComponentFields
                                                                 (__this,settings,(MethodInfo *)0x0);
                                                       local_68 = pSVar11;
                                                       if (pSVar11 ==
                                                           (
                                                       System_Collections_Generic_Dictionary_string__string__o
                                                       *)0x0) break;
                                                       source = 
                                                       System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys
                                                                 ((
                                                       System_Collections_Generic_Dictionary_TKey__TValue__o *
                                                       )pSVar11,(MethodInfo_13C6500 *)
                                                                                                                                
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_string_get_Keys
                                                       );
                                                       __this_02 = System_Linq_Enumerable__ToList_object_
                                                                             ((
                                                       System_Collections_Generic_IEnumerable_TSource__o *)
                                                       source,(MethodInfo_6C9C10 *)
                                                              MethodInfo_System_Linq_Enumerable_ToList_string)
                                                       ;
                                                       if (__this_02 ==
                                                           (System_Collections_Generic_List_TSource__o *)0x0)
                                                       break;
                                                       System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                                                                 (&local_58,
                                                                  (System_Collections_Generic_List_T__o *)
                                                                  __this_02,
                                                                  (MethodInfo_91F180 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_List_string_GetEnumerator
                                                       );
                                                       local_80.fields._list = local_58.fields._list;
                                                       local_80.fields._index = local_58.fields._index;
                                                       local_80.fields._version = local_58.fields._version;
                                                       local_80.fields._current = local_58.fields._current;
                                                       local_90 = 0;
                                                       local_88 = &local_80;
                                                       while (bVar8 = 
                                                       System_Collections_Generic_List_Enumerator_object___MoveNext
                                                                 (&local_80,
                                                                  (MethodInfo_153A2A0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext
                                                       ), fieldName = local_80.fields._current, bVar8) {
                                                         pSVar7 = (__this->fields)._componentNames;
                                                         if (pSVar7 == (
                                                       System_Collections_Generic_List_string__o *)0x0) {
                                                         ThrowNullReferenceException();
                                                       }
                                                       pSVar3 = (System_Collections_Generic_HashSet_object__o
                                                                 *)(__this->fields)._mixedFields;
                                                       pSVar9 = 
                                                       System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )pSVar7,index,
                                                                  (MethodInfo_92B830 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_List_string_get_Item
                                                       );
                                                       if ((TypeInfo_UI_MapEditorInspectPanel->_2).
                                                           cctor_finished_or_no_cctor == 0) {
                                                         il2cpp_codegen_runtime_class_init
                                                                   ((Il2CppClass *)
                                                                    TypeInfo_UI_MapEditorInspectPanel);
                                                       }
                                                       pSVar9 = UI_MapEditorInspectPanel__GetComponentFieldKey
                                                                          (pSVar9,(System_String_o *)fieldName
                                                                           ,(MethodInfo *)0x0);
                                                       if (pSVar3 == (
                                                       System_Collections_Generic_HashSet_object__o *)0x0) {
                                                         ThrowNullReferenceException();
                                                       }
                                                       bVar8 = 
                                                       System_Collections_Generic_HashSet_object___Contains
                                                                 (pSVar3,(Il2CppObject *)pSVar9,
                                                                  (MethodInfo_1759E40 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_HashSet_string_Contains
                                                       );
                                                       if (bVar8) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 ((
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)pSVar11,fieldName,
                                                       (Il2CppObject *)"--",
                                                       (MethodInfo_147A7F0 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item
                                                       );
                                                       }
                                                       }
                                                       System_Collections_Generic_List_Enumerator_object___Dispose
                                                                 ((
                                                       UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o
                                                       *)&local_80,
                                                       MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose
                                                       );
                                                       pSVar7 = (__this->fields)._componentNames;
                                                       if (pSVar7 == (
                                                       System_Collections_Generic_List_string__o *)0x0) break;
                                                       pSVar2 = (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)(__this->fields)._syncedComponentFields;
                                                       pSVar9 = 
                                                       System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )pSVar7,index,
                                                                  (MethodInfo_92B830 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_List_string_get_Item
                                                       );
                                                       if (pSVar2 == (
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)0x0) break;
                                                       System_Collections_Generic_Dictionary_object__object___set_Item
                                                                 (pSVar2,(Il2CppObject *)pSVar9,
                                                                  (Il2CppObject *)pSVar11,
                                                                  (MethodInfo_147A7F0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_string_set_Item
                                                       );
                                                       index = index + 1;
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
label_1822bc4a2:
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel$$SerializeComponentFields
// il2cpp: System_Collections_Generic_Dictionary_string__string__o* UI_MapEditorInspectPanel__SerializeComponentFields (UI_MapEditorInspectPanel_o* __this, System_Collections_Generic_Dictionary_string__BaseSetting__o* settings, const MethodInfo* method);
// 0x1822c2d00
// eh: try 0x1822c2e50..0x1822c2f57 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822c2f09: mov rdx, qword ptr [rip + 0x1df5cf0]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_BaseSetting_Dispose
// asm:   0x1822c2f10: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1822c2f15: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1822c2f1a: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1822c2f1f: test rcx, rcx
// asm:   0x1822c2f22: jne 0x1822c2f57
// asm:   0x1822c2f24: mov rsi, qword ptr [rsp + 0x88]
// asm:   0x1822c2f57: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

System_Collections_Generic_Dictionary_string__string__o *
UI_MapEditorInspectPanel__SerializeComponentFields
          (UI_MapEditorInspectPanel_o *__this,
          System_Collections_Generic_Dictionary_string__BaseSetting__o *settings,MethodInfo *method)

{
  Il2CppObject *__this_00;
  bool bVar1;
  System_Collections_Generic_Dictionary_string__string__o *__this_01;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_02;
  Settings_BaseSetting_o *setting;
  System_String_o *value;
  undefined1 local_50 [16];
  System_String_o *local_40;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o local_38;
  
  if (Il2CppMethodInitialized_184347571 == '\0') {
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
    Il2CppMethodInitialized_184347571 = '\x01';
  }
  local_38.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._currentKey = (Il2CppObject *)0x0;
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_string);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
  if (settings != (System_Collections_Generic_Dictionary_string__BaseSetting__o *)0x0) {
    __this_02 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
                System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)settings,
                           (MethodInfo_13C6500 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_get_Keys);
    if (__this_02 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
      System_Collections_Generic_Dictionary_ValueCollection_fsPortableReflection_AttributeQuery__object___GetEnumerator
                ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)local_50,
                 __this_02,
                 (MethodInfo_F1E4D0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_BaseSetting_GetEnumerator
                );
      local_38.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)local_50._0_8_;
      local_38.fields._index = local_50._8_4_;
      local_38.fields._version = local_50._12_4_;
      local_38.fields._currentKey = (Il2CppObject *)local_40;
      local_50._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
      local_50._8_8_ = &local_38;
      while( true ) {
        do {
          bVar1 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__StyleComplexSelector_PseudoStateData___MoveNext
                            (&local_38,
                             (MethodInfo_156BDD0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_BaseSetting_MoveNext
                            );
          __this_00 = local_38.fields._currentKey;
          if (!bVar1) {
            System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                      ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_38,
                       MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_BaseSetting_Dispose
                      );
            return __this_01;
          }
          bVar1 = System_String__op_Equality
                            ((System_String_o *)local_38.fields._currentKey,"Description",
                             (MethodInfo *)0x0);
        } while (bVar1);
        if ((System_String_o *)__this_00 == (System_String_o *)0x0) break;
        bVar1 = System_String__EndsWith((System_String_o *)__this_00,"Tooltip",(MethodInfo *)0x0);
        if (!bVar1) {
          bVar1 = System_String__EndsWith
                            ((System_String_o *)__this_00,"Dropbox",(MethodInfo *)0x0);
          if (!bVar1) {
            setting = System_Collections_Generic_Dictionary_object__object___get_Item
                                ((System_Collections_Generic_Dictionary_object__object__o *)settings,__this_00
                                 ,(MethodInfo_147A5B0 *)
                                  MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_get_Item
                                );
            value = UI_MapEditorInspectPanel__SerializeSetting(__this,setting,(MethodInfo *)0x0);
            if (__this_01 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) {
              ThrowNullReferenceException();
            }
            System_Collections_Generic_Dictionary_object__object___set_Item
                      ((System_Collections_Generic_Dictionary_object__object__o *)__this_01,__this_00,
                       (Il2CppObject *)value,
                       (MethodInfo_147A7F0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
          }
        }
      }
      ThrowNullReferenceException();
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel$$MergeComponent
// il2cpp: Map_MapScriptComponent_o* UI_MapEditorInspectPanel__MergeComponent (UI_MapEditorInspectPanel_o* __this, System_String_o* componentName, Map_MapScriptComponent_o* previous, System_Collections_Generic_Dictionary_string__string__o* changedFields, const MethodInfo* method);
// 0x1822be010
// eh: try 0x1822be1d0..0x1822be353 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 20 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822be2bc: mov rdx, qword ptr [rip + 0x1dfffdd]  ; MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_string_Dispose
// asm:   0x1822be2c3: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1822be2c8: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1822be2cd: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1822be2d2: test rcx, rcx
// asm:   0x1822be2d5: jne 0x1822be353
// asm:   0x1822be2d7: mov r15, qword ptr [rsp + 0xb8]
// asm:   0x1822be2df: mov rsi, qword ptr [rsp + 0xc0]
// asm:   0x1822be353: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

Map_MapScriptComponent_o *
UI_MapEditorInspectPanel__MergeComponent
          (UI_MapEditorInspectPanel_o *__this,System_String_o *componentName,
          Map_MapScriptComponent_o *previous,
          System_Collections_Generic_Dictionary_string__string__o *changedFields,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *collection;
  bool bVar1;
  int32_t index;
  System_Collections_Generic_List_string__o *__this_00;
  UI_MapEditorInspectPanel___c__DisplayClass99_0_o *object;
  System_Predicate_T__o *match;
  System_String_o *value;
  Map_MapScriptComponent_o *__this_01;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o local_70;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_48;
  
  if (Il2CppMethodInitialized_184347572 == '\0') {
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
              (&MethodInfo_System_Collections_Generic_List_string_ctor_40dbf80);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptComponent);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Predicate_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass99_0_MergeComponent_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorInspectPanel_c__DisplayClass99_0);
    il2cpp_codegen_initialize_runtime_metadata(&":");
    Il2CppMethodInitialized_184347572 = '\x01';
  }
  local_70.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_70.fields._version = 0;
  local_70.fields._index = 0;
  local_70.fields._current.fields.key = (Il2CppObject *)0x0;
  local_70.fields._current.fields.value = (Il2CppObject *)0x0;
  local_70.fields._getEnumeratorRetType = 0;
  local_70.fields._36_4_ = 0;
  if (previous == (Map_MapScriptComponent_o *)0x0) {
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
               (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  }
  else {
    collection = (previous->fields).Parameters;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
    System_Collections_Generic_List_object____ctor_94fb10
              ((System_Collections_Generic_List_object__o *)__this_00,
               (System_Collections_Generic_IEnumerable_T__o *)collection,
               (MethodInfo_94FB10 *)MethodInfo_System_Collections_Generic_List_string_ctor_40dbf80);
  }
  if (changedFields != (System_Collections_Generic_Dictionary_string__string__o *)0x0) {
    System_Collections_Generic_Dictionary_PhotonNetwork_RaiseEventBatch__object___GetEnumerator
              (&local_48,(System_Collections_Generic_Dictionary_TKey__TValue__o *)changedFields,
               (MethodInfo_13C1150 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_string_GetEnumerator);
    local_70.fields._dictionary = local_48.fields._dictionary;
    local_70.fields._version = local_48.fields._version;
    local_70.fields._index = local_48.fields._index;
    local_70.fields._current.fields.key = local_48.fields._current.fields.key;
    local_70.fields._current.fields.value = local_48.fields._current.fields.value;
    local_70.fields._getEnumeratorRetType = local_48.fields._getEnumeratorRetType;
    local_70.fields._36_4_ = local_48.fields._36_4_;
    while( true ) {
      bVar1 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                        (&local_70,
                         (MethodInfo_1585360 *)
                         MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_string_MoveNext);
      if (!bVar1) break;
      object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel_c__DisplayClass99_0)
      ;
      System_Configuration_ConfigurationCollectionAttribute___ctor
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
      if (object == (UI_MapEditorInspectPanel___c__DisplayClass99_0_o *)0x0) {
        ThrowNullReferenceException();
      }
      (object->fields).changed.fields.key = (System_String_o *)local_70.fields._current.fields.key;
      (object->fields).changed.fields.value = (System_String_o *)local_70.fields._current.fields.value;
      Il2CppCodeGenWriteBarrier((void **)&object->fields,(void *)0x0);
      match = (System_Predicate_T__o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Predicate_string);
      System_Predicate_object____ctor
                ((System_Predicate_object__o *)match,(Il2CppObject *)object,
                 (intptr_t)MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass99_0_MergeComponent_b__0,
                 (MethodInfo_B61EB0 *)0x0);
      if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) {
        ThrowNullReferenceException();
      }
      index = System_Collections_Generic_List_object___FindIndex
                        ((System_Collections_Generic_List_T__o *)__this_00,match,
                         (MethodInfo_91D870 *)MethodInfo_System_Collections_Generic_List_string_FindIndex);
      value = System_String__Concat_1969b70
                        ((object->fields).changed.fields.key,":",
                         (object->fields).changed.fields.value,(MethodInfo *)0x0);
      if (index < 0) {
        il2cpp_runtime_helper_180012890(__this_00,value,MethodInfo_System_Collections_Generic_List_string_Add);
      }
      else {
        System_Collections_Generic_List_object___set_Item
                  ((System_Collections_Generic_List_object__o *)__this_00,index,(Il2CppObject *)value,
                   (MethodInfo_950000 *)MethodInfo_System_Collections_Generic_List_string_set_Item);
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_70,
               MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_string_Dispose);
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScriptComponent);
    Map_MapScriptComponent___ctor(__this_01,(MethodInfo *)0x0);
    if (__this_01 != (Map_MapScriptComponent_o *)0x0) {
      (__this_01->fields).ComponentName = componentName;
      Il2CppCodeGenWriteBarrier(&(__this_01->fields).ComponentName,componentName);
      (__this_01->fields).Parameters = __this_00;
      Il2CppCodeGenWriteBarrier(&(__this_01->fields).Parameters,__this_00);
      return __this_01;
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel$$IsModified
// il2cpp: bool UI_MapEditorInspectPanel__IsModified (UI_MapEditorInspectPanel_o* __this, System_String_o* key, System_String_o* current, const MethodInfo* method);
// 0x1822bdf70

bool UI_MapEditorInspectPanel__IsModified
               (UI_MapEditorInspectPanel_o *__this,System_String_o *key,System_String_o *current,
               MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar1;
  System_String_o *local_res8;
  
  if (Il2CppMethodInitialized_184347573 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
    Il2CppMethodInitialized_184347573 = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._syncedSerialized;
  local_res8 = (System_String_o *)0x0;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (__this_00,(Il2CppObject *)key,(Il2CppObject **)&local_res8,
                       (MethodInfo_14769C0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
    if (bVar1) {
      bVar1 = System_String__op_Inequality(local_res8,current,(MethodInfo *)0x0);
      return bVar1;
    }
    return true;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel$$ApplyMixedIndicators
// il2cpp: void UI_MapEditorInspectPanel__ApplyMixedIndicators (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x1822ba570
// eh: try 0x1822bab60..0x1822bb31b -> pad 0x18333fd30 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 32 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822babf9: mov rdx, qword ptr [rip + 0x1dfdd60]  ; MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_BaseSetting_Dispose
// asm:   0x1822bac00: mov rcx, qword ptr [rsp + 0x68]
// asm:   0x1822bac05: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1822bac0a: mov rcx, qword ptr [rsp + 0x60]
// asm:   0x1822bac0f: test rcx, rcx
// asm:   0x1822bac12: jne 0x1822bb31b
// asm:   0x1822bac18: xor r13d, r13d
// asm:   0x1822bac1b: mov rdi, qword ptr [rsp + 0x150]
// asm:   0x1822bac23: mov r14, qword ptr [rsp + 0x40]
// asm:   0x1822bac28: mov qword ptr [rsp + 0x48], r14
// asm:   0x1822bac2d: mov esi, dword ptr [rsp + 0x160]
// asm:   0x1822bacd2: mov r15d, r13d
// asm:   0x1822bacd5: mov eax, r13d
// asm:   0x1822bacd8: nop dword ptr [rax + rax]
// asm:   0x1822baded: mov rsi, r13
// asm:   0x1822baf0b: mov eax, r13d
// asm:   0x1822baf0e: mov ecx, r13d
// asm:   0x1822baf11: movss xmm7, dword ptr [rip + 0x109e743]
// asm:   0x1822bb05c: mov r15, r13
// asm:   0x1822bb111: mov rax, r13
// asm:   0x1822bb31b: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x18333fd30: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333fd35: push rbp
// asm:   0x18333fd36: sub rsp, 0x40
// asm:   0x18333fd3a: mov rbp, rdx
// asm:   0x18333fd3d: mov rax, qword ptr [rbp + 0x98]
// asm:   0x18333fd44: mov rcx, qword ptr [rax]
// asm:   0x18333fd47: mov qword ptr [rbp + 0x60], rcx
// asm:   0x18333fd4b: movabs rax, 0
// asm:   0x18333fd55: add rsp, 0x40
// asm:   0x18333fd59: pop rbp
// asm:   0x18333fd5a: ret 

void UI_MapEditorInspectPanel__ApplyMixedIndicators(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  float fVar1;
  byte bVar2;
  System_Collections_Generic_List_Dictionary_string__BaseSetting___o *__this_00;
  System_Collections_Generic_List_string__o *__this_01;
  UnityEngine_Component_o *pUVar3;
  System_Collections_Generic_HashSet_object__o *pSVar4;
  UnityEngine_Events_UnityEvent_Vector2__o *pUVar5;
  UnityEngine_UI_Image_o *pUVar6;
  Il2CppType *handle;
  Il2CppObject *key;
  bool bVar7;
  uint uVar8;
  int32_t fontSize;
  System_Collections_Generic_Dictionary_BaseSetting__string__o *__this_02;
  System_Collections_Generic_Dictionary_TKey__TValue__o *__this_03;
  System_String_o *pSVar9;
  System_Type_o *pSVar10;
  Unity_VisualScripting_Namespace_o *a;
  System_Object_array *pSVar11;
  Il2CppObject *pIVar12;
  UnityEngine_Transform_o *pUVar13;
  UnityEngine_UI_InputField_o *pUVar14;
  UI_MapEditorInspectPanel___c__DisplayClass101_0_o *object;
  DG_Tweening_Core_DOSetter_T__o *__this_04;
  UI_MapEditorInspectPanel___c__DisplayClass101_1_o *object_00;
  UnityEngine_Transform_o *pUVar15;
  UnityEngine_UI_InputField_o *value;
  UnityEngine_RectTransform_o *__this_05;
  UnityEngine_Rect_o *pUVar16;
  Unity_Hierarchy_ReadOnlyNativeVector_HierarchyFlattenedNode__o *pUVar17;
  UnityEngine_UI_Text_o *__this_06;
  UnityEngine_GameObject_o *value_00;
  UnityEngine_AudioSettings_AudioConfigurationChangeHandler_o *__this_07;
  int index;
  UnityEngine_UI_InputField_o *pUVar18;
  System_String_o *local_res20;
  System_String_o *local_f8 [2];
  undefined1 local_e8 [16];
  System_Collections_Generic_Dictionary_Enumerator_object__object__o local_d8;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_a8;
  UnityEngine_Rect_o local_80;
  Unity_Hierarchy_ReadOnlyNativeVector_HierarchyFlattenedNode__o local_70 [3];
  
  if (Il2CppMethodInitialized_184347574 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UI_BaseSettingElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BaseSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_InputField);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Toggle);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_InputSettingElement_40abeb8);
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
              (&MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass101_0_ApplyMixedIndicators_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorInspectPanel_c__DisplayClass101_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass101_1_ApplyMixedIndicators_b__1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorInspectPanel_c__DisplayClass101_1);
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
    Il2CppMethodInitialized_184347574 = '\x01';
  }
  local_d8.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_d8.fields._version = 0;
  local_d8.fields._index = 0;
  local_d8.fields._current.fields.key = (Il2CppObject *)0x0;
  local_d8.fields._current.fields.value = (Il2CppObject *)0x0;
  local_d8.fields._getEnumeratorRetType = 0;
  local_d8.fields._36_4_ = 0;
  pUVar18 = (UnityEngine_UI_InputField_o *)0x0;
  local_res20 = (System_String_o *)0x0;
  local_f8[0] = (System_String_o *)0x0;
  __this_02 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_BaseSetting_string);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_02,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_BaseSetting_string_ctor);
  if (__this_02 != (System_Collections_Generic_Dictionary_BaseSetting__string__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___Add
              ((System_Collections_Generic_Dictionary_object__object__o *)__this_02,
               (Il2CppObject *)(__this->fields)._positionX,(Il2CppObject *)"PositionX",
               (MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_BaseSetting_string_Add);
    System_Collections_Generic_Dictionary_object__object___Add
              ((System_Collections_Generic_Dictionary_object__object__o *)__this_02,
               (Il2CppObject *)(__this->fields)._positionY,(Il2CppObject *)"PositionY",
               (MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_BaseSetting_string_Add);
    System_Collections_Generic_Dictionary_object__object___Add
              ((System_Collections_Generic_Dictionary_object__object__o *)__this_02,
               (Il2CppObject *)(__this->fields)._positionZ,(Il2CppObject *)"PositionZ",
               (MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_BaseSetting_string_Add);
    System_Collections_Generic_Dictionary_object__object___Add
              ((System_Collections_Generic_Dictionary_object__object__o *)__this_02,
               (Il2CppObject *)(__this->fields)._rotationX,(Il2CppObject *)"RotationX",
               (MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_BaseSetting_string_Add);
    System_Collections_Generic_Dictionary_object__object___Add
              ((System_Collections_Generic_Dictionary_object__object__o *)__this_02,
               (Il2CppObject *)(__this->fields)._rotationY,(Il2CppObject *)"RotationY",
               (MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_BaseSetting_string_Add);
    System_Collections_Generic_Dictionary_object__object___Add
              ((System_Collections_Generic_Dictionary_object__object__o *)__this_02,
               (Il2CppObject *)(__this->fields)._rotationZ,(Il2CppObject *)"RotationZ",
               (MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_BaseSetting_string_Add);
    System_Collections_Generic_Dictionary_object__object___Add
              ((System_Collections_Generic_Dictionary_object__object__o *)__this_02,
               (Il2CppObject *)(__this->fields)._scaleX,(Il2CppObject *)"ScaleX",
               (MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_BaseSetting_string_Add);
    System_Collections_Generic_Dictionary_object__object___Add
              ((System_Collections_Generic_Dictionary_object__object__o *)__this_02,
               (Il2CppObject *)(__this->fields)._scaleY,(Il2CppObject *)"ScaleY",
               (MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_BaseSetting_string_Add);
    System_Collections_Generic_Dictionary_object__object___Add
              ((System_Collections_Generic_Dictionary_object__object__o *)__this_02,
               (Il2CppObject *)(__this->fields)._scaleZ,(Il2CppObject *)"ScaleZ",
               (MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_BaseSetting_string_Add);
    System_Collections_Generic_Dictionary_object__object___Add
              ((System_Collections_Generic_Dictionary_object__object__o *)__this_02,
               (Il2CppObject *)(__this->fields)._tilingX,(Il2CppObject *)"TilingX",
               (MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_BaseSetting_string_Add);
    System_Collections_Generic_Dictionary_object__object___Add
              ((System_Collections_Generic_Dictionary_object__object__o *)__this_02,
               (Il2CppObject *)(__this->fields)._tilingY,(Il2CppObject *)"TilingY",
               (MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_BaseSetting_string_Add);
    System_Collections_Generic_Dictionary_object__object___Add
              ((System_Collections_Generic_Dictionary_object__object__o *)__this_02,
               (Il2CppObject *)(__this->fields)._offsetX,(Il2CppObject *)"OffsetX",
               (MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_BaseSetting_string_Add);
    System_Collections_Generic_Dictionary_object__object___Add
              ((System_Collections_Generic_Dictionary_object__object__o *)__this_02,
               (Il2CppObject *)(__this->fields)._offsetY,(Il2CppObject *)"OffsetY",
               (MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_BaseSetting_string_Add);
    System_Collections_Generic_Dictionary_object__object___Add
              ((System_Collections_Generic_Dictionary_object__object__o *)__this_02,
               (Il2CppObject *)(__this->fields)._parent,(Il2CppObject *)"Parent",
               (MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_BaseSetting_string_Add);
    System_Collections_Generic_Dictionary_object__object___Add
              ((System_Collections_Generic_Dictionary_object__object__o *)__this_02,
               (Il2CppObject *)(__this->fields)._active,(Il2CppObject *)"Active",
               (MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_BaseSetting_string_Add);
    System_Collections_Generic_Dictionary_object__object___Add
              ((System_Collections_Generic_Dictionary_object__object__o *)__this_02,
               (Il2CppObject *)(__this->fields)._static,(Il2CppObject *)"Static",
               (MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_BaseSetting_string_Add);
    System_Collections_Generic_Dictionary_object__object___Add
              ((System_Collections_Generic_Dictionary_object__object__o *)__this_02,
               (Il2CppObject *)(__this->fields)._networked,(Il2CppObject *)"Networked",
               (MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_BaseSetting_string_Add);
    System_Collections_Generic_Dictionary_object__object___Add
              ((System_Collections_Generic_Dictionary_object__object__o *)__this_02,
               (Il2CppObject *)(__this->fields)._visible,(Il2CppObject *)"Visible",
               (MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_BaseSetting_string_Add);
    pUVar14 = pUVar18;
    while( true ) {
      handle = TypeRef_UI_BaseSettingElement;
      index = (int)pUVar14;
      __this_00 = (__this->fields)._components;
      if (__this_00 == (System_Collections_Generic_List_Dictionary_string__BaseSetting___o *)0x0) break;
      if ((__this_00->fields)._size <= index) {
        if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(g_data_184354ea0);
        }
        pSVar10 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
        if (pSVar10 != (System_Type_o *)0x0) {
          a = (Unity_VisualScripting_Namespace_o *)
              (*(pSVar10->klass->vtable)._90_unknown.methodPtr)
                        (pSVar10,"_setting",0x24,(pSVar10->klass->vtable)._90_unknown.method);
          bVar7 = Unity_VisualScripting_Namespace__op_Equality
                            (a,(Unity_VisualScripting_Namespace_o *)0x0,(MethodInfo *)0x0);
          if (bVar7) {
            return;
          }
          pUVar13 = (__this->fields).SinglePanel;
          if ((pUVar13 != (UnityEngine_Transform_o *)0x0) &&
             (pSVar11 = UnityEngine_Component__GetComponentsInChildren_object_
                                  ((UnityEngine_Component_o *)pUVar13,true,
                                   (MethodInfo_665440 *)
                                   MethodInfo_UnityEngine_Component_GetComponentsInChildren_InputSettingElement_40abeb8
                                  ), pUVar14 = pUVar18, pSVar11 != (System_Object_array *)0x0))
          goto label_1822bace0;
        }
        break;
      }
      __this_03 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                  System_Collections_Generic_List_object___System_Collections_IList_get_Item
                            ((System_Collections_Generic_List_object__o *)__this_00,index,
                             (MethodInfo_92B830 *)
                             MethodInfo_System_Collections_Generic_List_Dictionary_string_BaseSetting_get_Item
                            );
      if (__this_03 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) break;
      System_Collections_Generic_Dictionary_PhotonNetwork_RaiseEventBatch__object___GetEnumerator
                (&local_a8,__this_03,
                 (MethodInfo_13C1150 *)
                 MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_GetEnumerator);
      local_d8.fields._dictionary = local_a8.fields._dictionary;
      local_d8.fields._version = local_a8.fields._version;
      local_d8.fields._index = local_a8.fields._index;
      local_d8.fields._current.fields.key = local_a8.fields._current.fields.key;
      local_d8.fields._current.fields.value = local_a8.fields._current.fields.value;
      local_d8.fields._getEnumeratorRetType = local_a8.fields._getEnumeratorRetType;
      local_d8.fields._36_4_ = local_a8.fields._36_4_;
      local_e8._0_8_ = 0;
      local_e8._8_8_ = &local_d8;
      while (bVar7 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                               (&local_d8,
                                (MethodInfo_1585360 *)
                                MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_BaseSetting_MoveNext
                               ), key = local_d8.fields._current.fields.value,
            pIVar12 = local_d8.fields._current.fields.key, bVar7) {
        __this_01 = (__this->fields)._componentNames;
        if (__this_01 == (System_Collections_Generic_List_string__o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar9 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                           ((System_Collections_Generic_List_object__o *)__this_01,index,
                            (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_string_get_Item);
        if ((TypeInfo_UI_MapEditorInspectPanel->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel);
        }
        pSVar9 = UI_MapEditorInspectPanel__GetComponentFieldKey
                           (pSVar9,(System_String_o *)pIVar12,(MethodInfo *)0x0);
        System_Collections_Generic_Dictionary_object__object___set_Item
                  ((System_Collections_Generic_Dictionary_object__object__o *)__this_02,key,
                   (Il2CppObject *)pSVar9,
                   (MethodInfo_147A7F0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_BaseSetting_string_set_Item);
      }
      System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_d8,
                 MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_BaseSetting_Dispose);
      pUVar14 = (UnityEngine_UI_InputField_o *)(ulonglong)(index + 1);
    }
  }
  goto label_1822bb327;
label_1822bace0:
  uVar8 = (uint)pUVar14;
  if ((int)pSVar11->max_length <= (int)uVar8) goto label_1822baedf;
  if ((uint)pSVar11->max_length <= uVar8) goto label_1822bb321;
  if (a == (Unity_VisualScripting_Namespace_o *)0x0) goto label_1822bb327;
  pUVar3 = (UnityEngine_Component_o *)pSVar11->m_Items[(int)uVar8];
  pIVar12 = (Il2CppObject *)
            (*(code *)((Il2CppClass *)a->klass)->vtable[26].methodPtr)
                      (a,pUVar3,((Il2CppClass *)a->klass)->vtable[26].method);
  if (pIVar12 != (Il2CppObject *)0x0) {
    bVar2 = (TypeInfo_Settings_BaseSetting->_2).typeHierarchyDepth;
    if (((bVar2 <= (pIVar12->klass->_2).typeHierarchyDepth) &&
        ((pIVar12->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] ==
         (Il2CppClass *)TypeInfo_Settings_BaseSetting)) &&
       (bVar7 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                          ((System_Collections_Generic_Dictionary_object__object__o *)__this_02,pIVar12,
                           (Il2CppObject **)&local_res20,
                           (MethodInfo_14769C0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_BaseSetting_string_TryGetValue),
       bVar7)) {
      pSVar4 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._mixedFields;
      if (pSVar4 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_1822bb327;
      bVar7 = System_Collections_Generic_HashSet_object___Contains
                        (pSVar4,(Il2CppObject *)local_res20,
                         (MethodInfo_1759E40 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
      if (bVar7) {
        if ((pUVar3 == (UnityEngine_Component_o *)0x0) ||
           (pUVar13 = UnityEngine_Component__get_transform(pUVar3,(MethodInfo *)0x0),
           pUVar13 == (UnityEngine_Transform_o *)0x0)) goto label_1822bb327;
        pUVar13 = UnityEngine_Transform__Find(pUVar13,"InputField",(MethodInfo *)0x0);
        pUVar14 = pUVar18;
        if (pUVar13 != (UnityEngine_Transform_o *)0x0) {
          pUVar14 = UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)pUVar13,
                               (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_InputField);
        }
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar7 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar7) {
          object = il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel_c__DisplayClass101_0);
          System_Object___ctor
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
          if (object == (UI_MapEditorInspectPanel___c__DisplayClass101_0_o *)0x0) goto label_1822bb327;
          (object->fields).__4__this = __this;
          Il2CppCodeGenWriteBarrier(&(object->fields).__4__this,__this);
          if (pUVar14 == (UnityEngine_UI_InputField_o *)0x0) goto label_1822bb327;
          UnityEngine_UI_InputField__set_text(pUVar14,"--",(MethodInfo *)0x0);
          (object->fields).capturedKey = local_res20;
          Il2CppCodeGenWriteBarrier(&(object->fields).capturedKey,local_res20);
          pUVar5 = (UnityEngine_Events_UnityEvent_Vector2__o *)(pUVar14->fields).m_OnDidEndEdit;
          __this_04 = (DG_Tweening_Core_DOSetter_T__o *)
                      il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction_string)
          ;
          DG_Tweening_Core_DOSetter_object____ctor
                    (__this_04,(Il2CppObject *)object,
                     (intptr_t)
                     MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass101_0_ApplyMixedIndicators_b__0,
                     (MethodInfo_EB6EC0 *)0x0);
          if (pUVar5 == (UnityEngine_Events_UnityEvent_Vector2__o *)0x0) goto label_1822bb327;
          UnityEngine_Events_UnityEvent_Vector2___AddListener
                    (pUVar5,(UnityEngine_Events_UnityAction_T0__o *)__this_04,
                     (MethodInfo_EBBB50 *)MethodInfo_UnityEngine_Events_UnityEvent_string_AddListener);
        }
      }
    }
  }
  pUVar14 = (UnityEngine_UI_InputField_o *)(ulonglong)(uVar8 + 1);
  goto label_1822bace0;
label_1822baedf:
  pUVar13 = (__this->fields).SinglePanel;
  if ((pUVar13 != (UnityEngine_Transform_o *)0x0) &&
     (pSVar11 = UnityEngine_Component__GetComponentsInChildren_object_
                          ((UnityEngine_Component_o *)pUVar13,true,
                           (MethodInfo_665440 *)
                           MethodInfo_UnityEngine_Component_GetComponentsInChildren_ToggleSettingElement),
     pUVar14 = pUVar18, pSVar11 != (System_Object_array *)0x0)) {
    do {
      uVar8 = (uint)pUVar14;
      if ((int)pSVar11->max_length <= (int)uVar8) {
        return;
      }
      if ((uint)pSVar11->max_length <= uVar8) {
label_1822bb321:
        ThrowIndexOutOfRangeException();
      }
      if (a == (Unity_VisualScripting_Namespace_o *)0x0) break;
      pUVar3 = (UnityEngine_Component_o *)pSVar11->m_Items[(int)uVar8];
      pIVar12 = (Il2CppObject *)
                (*(code *)((Il2CppClass *)a->klass)->vtable[26].methodPtr)
                          (a,pUVar3,((Il2CppClass *)a->klass)->vtable[26].method);
      if (pIVar12 != (Il2CppObject *)0x0) {
        bVar2 = (TypeInfo_Settings_BaseSetting->_2).typeHierarchyDepth;
        if (((bVar2 <= (pIVar12->klass->_2).typeHierarchyDepth) &&
            ((pIVar12->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] ==
             (Il2CppClass *)TypeInfo_Settings_BaseSetting)) &&
           (bVar7 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                              ((System_Collections_Generic_Dictionary_object__object__o *)__this_02,pIVar12,
                               (Il2CppObject **)local_f8,
                               (MethodInfo_14769C0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_BaseSetting_string_TryGetValue
                              ), bVar7)) {
          pSVar4 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._mixedFields;
          if (pSVar4 == (System_Collections_Generic_HashSet_object__o *)0x0) break;
          bVar7 = System_Collections_Generic_HashSet_object___Contains
                            (pSVar4,(Il2CppObject *)local_f8[0],
                             (MethodInfo_1759E40 *)
                             MethodInfo_System_Collections_Generic_HashSet_string_Contains);
          if (bVar7) {
            object_00 = il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel_c__DisplayClass101_1);
            System_Object___ctor
                      ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object_00,
                       (MethodInfo *)0x0);
            if (object_00 == (UI_MapEditorInspectPanel___c__DisplayClass101_1_o *)0x0) break;
            (object_00->fields).__4__this = __this;
            Il2CppCodeGenWriteBarrier(&(object_00->fields).__4__this,__this);
            if ((pUVar3 == (UnityEngine_Component_o *)0x0) ||
               (pUVar13 = UnityEngine_Component__get_transform(pUVar3,(MethodInfo *)0x0),
               pUVar13 == (UnityEngine_Transform_o *)0x0)) break;
            pUVar13 = UnityEngine_Transform__Find(pUVar13,"Toggle",(MethodInfo *)0x0);
            pUVar14 = pUVar18;
            if (pUVar13 != (UnityEngine_Transform_o *)0x0) {
              pUVar14 = (UnityEngine_UI_InputField_o *)
                        UnityEngine_Component__GetComponent_object_
                                  ((UnityEngine_Component_o *)pUVar13,
                                   (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Toggle);
            }
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar7 = UnityEngine_Object__op_Equality
                              ((UnityEngine_Object_o *)pUVar14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if (!bVar7) {
              if ((pUVar14 == (UnityEngine_UI_InputField_o *)0x0) ||
                 (pUVar13 = UnityEngine_Component__get_transform
                                      ((UnityEngine_Component_o *)pUVar14,(MethodInfo *)0x0),
                 pUVar13 == (UnityEngine_Transform_o *)0x0)) break;
              pUVar13 = UnityEngine_Transform__Find(pUVar13,"Background",(MethodInfo *)0x0);
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar7 = UnityEngine_Object__op_Inequality
                                ((UnityEngine_Object_o *)pUVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                                );
              value = pUVar18;
              if (bVar7) {
                if (pUVar13 == (UnityEngine_Transform_o *)0x0) break;
                pUVar15 = UnityEngine_Transform__Find(pUVar13,"Checkmark",(MethodInfo *)0x0);
                if (pUVar15 != (UnityEngine_Transform_o *)0x0) {
                  value = (UnityEngine_UI_InputField_o *)
                          UnityEngine_Component__GetComponent_object_
                                    ((UnityEngine_Component_o *)pUVar15,
                                     (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Image)
                  ;
                }
              }
              (object_00->fields).checkmark = (UnityEngine_UI_Image_o *)value;
              Il2CppCodeGenWriteBarrier(&(object_00->fields).checkmark,value);
              pUVar6 = (object_00->fields).checkmark;
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar7 = UnityEngine_Object__op_Equality
                                ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
              ;
              if (!bVar7) {
                UnityEngine_UI_Toggle__SetIsOnWithoutNotify
                          ((UnityEngine_UI_Toggle_o *)pUVar14,false,(MethodInfo *)0x0);
                pUVar6 = (object_00->fields).checkmark;
                if (((pUVar6 == (UnityEngine_UI_Image_o *)0x0) ||
                    (UnityEngine_Behaviour__set_enabled
                               ((UnityEngine_Behaviour_o *)pUVar6,false,(MethodInfo *)0x0),
                    pUVar13 == (UnityEngine_Transform_o *)0x0)) ||
                   (__this_05 = UnityEngine_Component__GetComponent_object_
                                          ((UnityEngine_Component_o *)pUVar13,
                                           (MethodInfo_6651A0 *)
                                           MethodInfo_UnityEngine_Component_GetComponent_RectTransform),
                   __this_05 == (UnityEngine_RectTransform_o *)0x0)) break;
                pUVar16 = UnityEngine_RectTransform__get_rect(&local_80,__this_05,(MethodInfo *)0x0);
                fVar1 = (pUVar16->fields).m_Height;
                if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
                }
                fontSize = (int32_t)(fVar1 * 0.9);
                if (fontSize < 10) {
                  fontSize = 10;
                }
                pUVar15 = UnityEngine_Component__get_transform(pUVar3,(MethodInfo *)0x0);
                pUVar6 = (object_00->fields).checkmark;
                if (pUVar6 == (UnityEngine_UI_Image_o *)0x0) break;
                pUVar17 = (*(pUVar6->klass->vtable)._22_get_color.methodPtr)
                                    (local_70,pUVar6,(pUVar6->klass->vtable)._22_get_color.method);
                local_e8._0_8_ = (pUVar17->fields).m_Ptr;
                local_e8._8_8_ = *(undefined8 *)&(pUVar17->fields).m_Count;
                __this_06 = UI_ElementFactory__CreateOverlayLabel
                                      (pUVar13,pUVar15,"--",(UnityEngine_Color_o *)local_e8,4
                                       ,1,fontSize,(MethodInfo *)0x0);
                if (__this_06 == (UnityEngine_UI_Text_o *)0x0) break;
                value_00 = UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)__this_06,(MethodInfo *)0x0);
                (object_00->fields).labelGO = value_00;
                Il2CppCodeGenWriteBarrier(&(object_00->fields).labelGO,value_00);
                (object_00->fields).capturedKey = local_f8[0];
                Il2CppCodeGenWriteBarrier(&(object_00->fields).capturedKey,local_f8[0]);
                pUVar5 = *(UnityEngine_Events_UnityEvent_Vector2__o **)&(pUVar14->fields).m_ContentType;
                __this_07 = (UnityEngine_AudioSettings_AudioConfigurationChangeHandler_o *)
                            il2cpp_codegen_object_new
                                      ((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction_bool);
                UnityEngine_Events_UnityAction_bool____ctor
                          (__this_07,(Il2CppObject *)object_00,
                           (intptr_t)
                           MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass101_1_ApplyMixedIndicators_b__1,
                           (MethodInfo *)0x0);
                if (pUVar5 == (UnityEngine_Events_UnityEvent_Vector2__o *)0x0) break;
                UnityEngine_Events_UnityEvent_Vector2___AddListener
                          (pUVar5,(UnityEngine_Events_UnityAction_T0__o *)__this_07,
                           (MethodInfo_EBBB50 *)MethodInfo_UnityEngine_Events_UnityEvent_bool_AddListener);
              }
            }
          }
        }
      }
      pUVar14 = (UnityEngine_UI_InputField_o *)(ulonglong)(uVar8 + 1);
    } while( true );
  }
label_1822bb327:
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel$$OnSelectTexture
// il2cpp: void UI_MapEditorInspectPanel__OnSelectTexture (UI_MapEditorInspectPanel_o* __this, System_String_o* texture, const MethodInfo* method);
// 0x1822c1580

void UI_MapEditorInspectPanel__OnSelectTexture
               (UI_MapEditorInspectPanel_o *__this,System_String_o *texture,MethodInfo *method)

{
  Settings_StringSetting_o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  Map_MapScriptBasicMaterial_o *pMVar1;
  
  if (Il2CppMethodInitialized_184347575 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinMapTextures);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_MapScriptBasicMaterial_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    Il2CppMethodInitialized_184347575 = '\x01';
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
                        (MethodInfo_147A5B0 *)
                        MethodInfo_System_Collections_Generic_Dictionary_string_MapScriptBasicMaterial_get_Item
                       );
    if ((pMVar1 != (Map_MapScriptBasicMaterial_o *)0x0) && (__this_00 != (Settings_StringSetting_o *)0x0)) {
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)(pMVar1->fields).Texture,
                 (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
      UI_MapEditorInspectPanel__OnChange(__this,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel$$OnChange
// il2cpp: void UI_MapEditorInspectPanel__OnChange (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x1822be750
// eh: try 0x1822bf9d4..0x1822c13f2 -> pad 0x18333fd70 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 82 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822bf27e: mov dword ptr [rsp + 0x74], edx
// asm:   0x1822bf282: jmp 0x1822bf289
// asm:   0x1822bf2ba: mov dword ptr [rsp + 0xa0], edx
// asm:   0x1822bf2c1: jmp 0x1822bf2cb
// asm:   0x1822bf2fe: mov dword ptr [rsp + 0x90], edx
// asm:   0x1822bf305: jmp 0x1822bf30f
// asm:   0x1822bf342: mov dword ptr [rsp + 0x94], edx
// asm:   0x1822bf349: jmp 0x1822bf353
// asm:   0x1822bf386: mov dword ptr [rsp + 0x98], edx
// asm:   0x1822bf38d: jmp 0x1822bf397
// asm:   0x1822bf3c7: mov dword ptr [rsp + 0x9c], edx
// asm:   0x1822bf3ce: jmp 0x1822bf3d8
// asm:   0x1822bf411: mov dword ptr [rsp + 0x78], edx
// asm:   0x1822bf415: jmp 0x1822bf41c
// asm:   0x1822bf452: mov dword ptr [rsp + 0x7c], edx
// asm:   0x1822bf456: jmp 0x1822bf45d
// asm:   0x1822bf493: mov dword ptr [rsp + 0x80], edx
// asm:   0x1822bf49a: jmp 0x1822bf4a4
// asm:   0x1822bf4da: mov dword ptr [rsp + 0x84], edx
// asm:   0x1822bf4e1: jmp 0x1822bf4eb
// asm:   0x1822bf521: mov dword ptr [rsp + 0x48], edx
// asm:   0x1822bf525: jmp 0x1822bf52c
// asm:   0x1822bf562: mov dword ptr [rsp + 0x4c], edx
// asm:   0x1822bf566: jmp 0x1822bf56d
// asm:   0x1822bf5a3: mov dword ptr [rsp + 0x5c], edx
// asm:   0x1822bf5a7: jmp 0x1822bf5ae
// asm:   0x1822bf5e4: mov dword ptr [rsp + 0x58], edx
// asm:   0x1822bf5e8: jmp 0x1822bf5ef
// asm:   0x1822bf625: mov dword ptr [rsp + 0x50], edx
// asm:   0x1822bf629: jmp 0x1822bf630
// asm:   0x1822bf666: mov dword ptr [rsp + 0x64], edx
// asm:   0x1822bf66a: jmp 0x1822bf671
// asm:   0x1822bf6a7: mov dword ptr [rsp + 0x60], edx
// asm:   0x1822bf6ab: jmp 0x1822bf6b2
// asm:   0x1822bf6ea: jmp 0x1822bf6ef
// asm:   0x1822bf72c: jmp 0x1822bf731
// asm:   0x1822bf76f: jmp 0x1822bf774
// asm:   0x1822bf7b1: jmp 0x1822bf7b5
// asm:   0x1822bf7f1: jmp 0x1822bf7f6
// asm:   0x1822bf834: jmp 0x1822bf838
// asm:   0x1822bf875: jmp 0x1822bf879
// asm:   0x1822bfd10: mov rdx, rax
// asm:   0x1822bfd34: movaps xmm7, xmm1
// asm:   0x1822bfd57: movaps xmm6, xmm3
// asm:   0x1822bfe51: mov rdx, rax
// asm:   0x1822bfe75: movaps xmm7, xmm1
// asm:   0x1822bfe98: movaps xmm6, xmm3
// asm:   0x1822bffd1: mov rdx, rax
// asm:   0x1822bfff5: movaps xmm7, xmm1
// asm:   0x1822c0018: movaps xmm6, xmm3
// asm:   0x1822c0ed9: mov rdx, qword ptr [rip + 0x1dca5e8]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_Dispose
// asm:   0x1822c0ee0: mov rcx, qword ptr [rsp + 0x128]
// asm:   0x1822c0ee8: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1822c0eed: mov rcx, qword ptr [rsp + 0x120]
// asm:   0x1822c0ef5: test rcx, rcx
// asm:   0x1822c0ef8: jne 0x1822c13f2
// asm:   0x1822c0efe: mov rsi, qword ptr [rsp + 0x2d0]
// asm:   0x1822c0f06: movzx r12d, byte ptr [rsp + 0x34]
// asm:   0x1822c0f0c: mov rdi, qword ptr [rsp + 0x168]
// asm:   0x1822c0f14: mov qword ptr [rsp + 0xb8], rdi
// asm:   0x1822c0f1c: mov r14, qword ptr [rsp + 0x178]
// asm:   0x1822c0f24: mov rbx, qword ptr [rsp + 0x170]
// asm:   0x1822c0f2c: mov qword ptr [rsp + 0xc0], rbx
// asm:   0x1822c0f34: movzx eax, byte ptr [rsp + 0x37]
// asm:   0x1822c0f39: mov dword ptr [rsp + 0x48], eax
// asm:   0x1822c0f3d: movzx r13d, byte ptr [rsp + 0x36]
// asm:   0x1822c0f43: movzx r15d, byte ptr [rsp + 0x2e8]
// asm:   0x1822c10da: mov rdx, r14
// asm:   0x1822c10dd: jmp 0x1822c1103
// asm:   0x1822c1100: mov rdx, rax
// asm:   0x1822c13f2: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x18333fd70: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333fd75: push rbp
// asm:   0x18333fd76: sub rsp, 0x30
// asm:   0x18333fd7a: mov rbp, rdx
// asm:   0x18333fd7d: mov rax, qword ptr [rbp + 0x1a8]
// asm:   0x18333fd84: mov rcx, qword ptr [rax]
// asm:   0x18333fd87: mov qword ptr [rbp + 0x120], rcx
// asm:   0x18333fd8e: movabs rax, 0
// asm:   0x18333fd98: add rsp, 0x30
// asm:   0x18333fd9c: pop rbp
// asm:   0x18333fd9d: ret 

void UI_MapEditorInspectPanel__OnChange(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  int iVar2;
  Settings_StringSetting_o *pSVar3;
  Settings_BoolSetting_o *pSVar4;
  Settings_IntSetting_o *pSVar5;
  Settings_FloatSetting_o *pSVar6;
  System_Collections_Generic_HashSet_object__o *pSVar7;
  GameManagers_MapEditorGameManager_o *pGVar8;
  System_Collections_Generic_List_MapObject__o *pSVar9;
  Map_MapScriptBaseObject_o *__this_00;
  System_Collections_Generic_Dictionary_int__ulong__o *pSVar10;
  UnityEngine_GameObject_o *pUVar11;
  Map_MapScriptBaseObject_c *value;
  System_String_Fields value_00;
  Settings_ColorSetting_o *pSVar12;
  System_String_c *pSVar13;
  System_Collections_Generic_List_string__o *pSVar14;
  System_Collections_Generic_List_Dictionary_string__BaseSetting___o *__this_01;
  System_Collections_Generic_Dictionary_object__object__o *__this_02;
  Il2CppObject *pIVar15;
  System_Collections_Generic_List_T__o *__this_03;
  Utility_Color255_o *value_01;
  UI_MapEditorMenu_o *pUVar16;
  UI_MapEditorHierarchyPanel_o *__this_04;
  Il2CppType *handle;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  char cVar24;
  System_String_o *pSVar25;
  System_String_o *pSVar26;
  System_Collections_Generic_List_MapObject__o *pSVar27;
  System_Collections_Generic_List_MapObject__o *pSVar28;
  System_Collections_Generic_List_MapObject__o *__this_05;
  uint64_t uVar29;
  Map_MapObject_o *parent;
  float *pfVar30;
  UnityEngine_Transform_o *pUVar31;
  UnityEngine_Quaternion_o *pUVar32;
  Unity_Mathematics_float3_o *pUVar33;
  UnityEngine_Vector3_o *pUVar34;
  Map_MapScriptReflectiveMaterial_o *__this_06;
  Map_MapScriptBaseMaterial_o *pMVar35;
  UI_MapEditorInspectPanel___c__DisplayClass103_0_o *object;
  System_Collections_Generic_Dictionary_string__BaseSetting__o *settings;
  System_Collections_Generic_Dictionary_string__string__o *source;
  System_Collections_Generic_Dictionary_string__string__o *__this_07;
  System_Predicate_T__o *pSVar36;
  System_Func_KeyValuePair_string__string___string__o *__this_08;
  System_Func_KeyValuePair_string__string___string__o *__this_09;
  System_Collections_Generic_Dictionary_TKey__TElement__o *changedFields;
  Map_MapScriptComponent_o *pMVar37;
  System_Type_o *pSVar38;
  System_Type_o *pSVar39;
  System_Collections_Generic_List_object__o *pSVar40;
  MapEditor_TransformPositionCommand_o *__this_10;
  MapEditor_TransformRotationCommand_o *__this_11;
  MapEditor_TransformScaleCommand_o *__this_12;
  MapEditor_CompositeCommand_o *__this_13;
  uint uVar41;
  float *pfVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  int32_t iVar46;
  byte bVar47;
  char cVar48;
  uint uVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  bool local_res18 [8];
  byte local_res20;
  float local_298;
  byte local_294;
  byte local_293;
  byte local_292;
  byte local_291;
  byte local_290;
  byte local_28f;
  byte local_28e;
  byte local_28d;
  byte local_28c;
  byte local_28b;
  byte local_28a;
  byte local_289;
  byte local_288;
  byte local_287;
  byte local_286;
  byte local_285;
  byte local_284;
  char local_283;
  char local_282;
  uint local_280;
  uint local_27c;
  uint local_278;
  uint local_274;
  uint local_270;
  uint local_26c;
  uint local_268;
  uint local_264;
  uint local_260;
  uint local_25c;
  int32_t local_258;
  uint local_254;
  uint local_250;
  uint local_24c;
  uint local_248;
  uint local_244;
  uint local_240;
  uint local_23c;
  uint local_238;
  uint local_234;
  uint local_230;
  uint local_22c;
  uint local_228;
  uint local_224;
  uint local_220;
  int32_t local_21c;
  uint local_218;
  System_Collections_Generic_List_MapObject__o *local_210;
  System_Collections_Generic_List_MapObject__o *local_208;
  System_Collections_Generic_List_MapObject__o *local_200;
  UnityEngine_Vector3_o local_1f8;
  UnityEngine_Vector3_o local_1e8;
  Unity_Mathematics_float3_o local_1d8;
  UnityEngine_Vector3_o local_1c8;
  UnityEngine_Vector3_o local_1b8;
  undefined8 local_1a8;
  System_Collections_Generic_List_Enumerator_object__o *local_1a0;
  System_Collections_Generic_List_Enumerator_object__o local_198;
  System_Collections_Generic_IEnumerable_TSource__o *local_178 [2];
  Map_MapObject_o *local_168;
  System_Collections_Generic_List_MapObject__o *local_160;
  System_Collections_Generic_List_MapObject__o *local_158;
  System_Collections_Generic_List_MapObject__o *local_150;
  Unity_Mathematics_float3_Fields local_148;
  System_Collections_Generic_List_Enumerator_T__o local_138;
  UnityEngine_Vector3_o local_118;
  UnityEngine_Vector3_o local_108;
  UnityEngine_Vector3_o local_f8;
  Unity_Mathematics_float3_o local_e8;
  UnityEngine_Vector3_o local_d8 [13];
  
  if (Il2CppMethodInitialized_184347576 == '\0') {
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
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorInspectPanel_c_OnChange_b__103_1);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorInspectPanel_c_OnChange_b__103_2);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass103_0_OnChange_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass103_0_OnChange_b__3);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorInspectPanel_c__DisplayClass103_0);
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
    Il2CppMethodInitialized_184347576 = '\x01';
  }
  local_res18[0] = false;
  local_258 = 0;
  local_298 = 0.0;
  local_198.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_198.fields._index = 0;
  local_198.fields._version = 0;
  local_198.fields._current = (Il2CppObject *)0x0;
  pSVar3 = (__this->fields)._name;
  if (pSVar3 == (Settings_StringSetting_o *)0x0) {
label_1822c11cb:
    ThrowNullReferenceException();
  }
  bVar17 = UI_MapEditorInspectPanel__IsModified
                     (__this,"Name",(pSVar3->fields)._value,(MethodInfo *)0x0);
  pSVar4 = (__this->fields)._active;
  if (pSVar4 == (Settings_BoolSetting_o *)0x0) goto label_1822c11cb;
  local_res18[0] = (pSVar4->fields)._value;
  if ((g_data_184354de8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354de8);
  }
  pSVar25 = System_Boolean__ToString(local_res18,(MethodInfo *)0x0);
  local_res20 = UI_MapEditorInspectPanel__IsModified(__this,"Active",pSVar25,(MethodInfo *)0x0);
  pSVar4 = (__this->fields)._static;
  if (pSVar4 == (Settings_BoolSetting_o *)0x0) goto label_1822c11cb;
  local_res18[0] = (pSVar4->fields)._value;
  pSVar25 = System_Boolean__ToString(local_res18,(MethodInfo *)0x0);
  local_294 = UI_MapEditorInspectPanel__IsModified(__this,"Static",pSVar25,(MethodInfo *)0x0);
  pSVar4 = (__this->fields)._networked;
  if (pSVar4 == (Settings_BoolSetting_o *)0x0) goto label_1822c11cb;
  local_res18[0] = (pSVar4->fields)._value;
  pSVar25 = System_Boolean__ToString(local_res18,(MethodInfo *)0x0);
  local_290 = UI_MapEditorInspectPanel__IsModified(__this,"Networked",pSVar25,(MethodInfo *)0x0);
  pSVar4 = (__this->fields)._visible;
  if (pSVar4 == (Settings_BoolSetting_o *)0x0) goto label_1822c11cb;
  local_res18[0] = (pSVar4->fields)._value;
  pSVar25 = System_Boolean__ToString(local_res18,(MethodInfo *)0x0);
  local_28f = UI_MapEditorInspectPanel__IsModified(__this,"Visible",pSVar25,(MethodInfo *)0x0);
  pSVar5 = (__this->fields)._parent;
  if (pSVar5 == (Settings_IntSetting_o *)0x0) goto label_1822c11cb;
  local_258 = (pSVar5->fields)._value;
  pSVar25 = System_Int32__ToString(&local_258,(MethodInfo *)0x0);
  local_28e = UI_MapEditorInspectPanel__IsModified(__this,"Parent",pSVar25,(MethodInfo *)0x0);
  pSVar6 = (__this->fields)._positionX;
  if (pSVar6 == (Settings_FloatSetting_o *)0x0) goto label_1822c11cb;
  local_298 = (pSVar6->fields)._value;
  pSVar25 = System_Single__ToString_1b49f60(&local_298,"R",(MethodInfo *)0x0);
  local_28d = UI_MapEditorInspectPanel__IsModified(__this,"PositionX",pSVar25,(MethodInfo *)0x0);
  pSVar6 = (__this->fields)._positionY;
  if (pSVar6 == (Settings_FloatSetting_o *)0x0) goto label_1822c11cb;
  local_298 = (pSVar6->fields)._value;
  pSVar25 = System_Single__ToString_1b49f60(&local_298,"R",(MethodInfo *)0x0);
  local_28c = UI_MapEditorInspectPanel__IsModified(__this,"PositionY",pSVar25,(MethodInfo *)0x0);
  pSVar6 = (__this->fields)._positionZ;
  if (pSVar6 == (Settings_FloatSetting_o *)0x0) goto label_1822c11cb;
  local_298 = (pSVar6->fields)._value;
  pSVar25 = System_Single__ToString_1b49f60(&local_298,"R",(MethodInfo *)0x0);
  local_28b = UI_MapEditorInspectPanel__IsModified(__this,"PositionZ",pSVar25,(MethodInfo *)0x0);
  pSVar6 = (__this->fields)._rotationX;
  if (pSVar6 == (Settings_FloatSetting_o *)0x0) goto label_1822c11cb;
  local_298 = (pSVar6->fields)._value;
  pSVar25 = System_Single__ToString_1b49f60(&local_298,"R",(MethodInfo *)0x0);
  local_28a = UI_MapEditorInspectPanel__IsModified(__this,"RotationX",pSVar25,(MethodInfo *)0x0);
  pSVar6 = (__this->fields)._rotationY;
  if (pSVar6 == (Settings_FloatSetting_o *)0x0) goto label_1822c11cb;
  local_298 = (pSVar6->fields)._value;
  pSVar25 = System_Single__ToString_1b49f60(&local_298,"R",(MethodInfo *)0x0);
  local_284 = UI_MapEditorInspectPanel__IsModified(__this,"RotationY",pSVar25,(MethodInfo *)0x0);
  pSVar6 = (__this->fields)._rotationZ;
  if (pSVar6 == (Settings_FloatSetting_o *)0x0) goto label_1822c11cb;
  local_298 = (pSVar6->fields)._value;
  pSVar25 = System_Single__ToString_1b49f60(&local_298,"R",(MethodInfo *)0x0);
  local_289 = UI_MapEditorInspectPanel__IsModified(__this,"RotationZ",pSVar25,(MethodInfo *)0x0);
  pSVar6 = (__this->fields)._scaleX;
  if (pSVar6 == (Settings_FloatSetting_o *)0x0) goto label_1822c11cb;
  local_298 = (pSVar6->fields)._value;
  pSVar25 = System_Single__ToString_1b49f60(&local_298,"R",(MethodInfo *)0x0);
  local_288 = UI_MapEditorInspectPanel__IsModified(__this,"ScaleX",pSVar25,(MethodInfo *)0x0);
  pSVar6 = (__this->fields)._scaleY;
  if (pSVar6 == (Settings_FloatSetting_o *)0x0) goto label_1822c11cb;
  local_298 = (pSVar6->fields)._value;
  pSVar25 = System_Single__ToString_1b49f60(&local_298,"R",(MethodInfo *)0x0);
  local_287 = UI_MapEditorInspectPanel__IsModified(__this,"ScaleY",pSVar25,(MethodInfo *)0x0);
  pSVar6 = (__this->fields)._scaleZ;
  if (pSVar6 == (Settings_FloatSetting_o *)0x0) goto label_1822c11cb;
  local_298 = (pSVar6->fields)._value;
  pSVar25 = System_Single__ToString_1b49f60(&local_298,"R",(MethodInfo *)0x0);
  local_286 = UI_MapEditorInspectPanel__IsModified(__this,"ScaleZ",pSVar25,(MethodInfo *)0x0);
  pSVar3 = (__this->fields)._collideMode;
  if (pSVar3 == (Settings_StringSetting_o *)0x0) goto label_1822c11cb;
  bVar18 = UI_MapEditorInspectPanel__IsModified
                     (__this,"CollideMode",(pSVar3->fields)._value,(MethodInfo *)0x0);
  pSVar3 = (__this->fields)._collideWith;
  if (pSVar3 == (Settings_StringSetting_o *)0x0) goto label_1822c11cb;
  bVar19 = UI_MapEditorInspectPanel__IsModified
                     (__this,"CollideWith",(pSVar3->fields)._value,(MethodInfo *)0x0);
  pSVar3 = (__this->fields)._physicsMaterial;
  if (pSVar3 == (Settings_StringSetting_o *)0x0) goto label_1822c11cb;
  bVar20 = UI_MapEditorInspectPanel__IsModified
                     (__this,"PhysicsMaterial",(pSVar3->fields)._value,(MethodInfo *)0x0);
  pSVar3 = (__this->fields)._shader;
  if (pSVar3 == (Settings_StringSetting_o *)0x0) goto label_1822c11cb;
  bVar21 = UI_MapEditorInspectPanel__IsModified
                     (__this,"Shader",(pSVar3->fields)._value,(MethodInfo *)0x0);
  pSVar25 = UI_MapEditorInspectPanel__SerializeSetting
                      (__this,(Settings_BaseSetting_o *)(__this->fields)._color,(MethodInfo *)0x0);
  local_283 = UI_MapEditorInspectPanel__IsModified(__this,"Color",pSVar25,(MethodInfo *)0x0);
  pSVar25 = UI_MapEditorInspectPanel__SerializeSetting
                      (__this,(Settings_BaseSetting_o *)(__this->fields)._reflectColor,(MethodInfo *)0x0);
  local_282 = UI_MapEditorInspectPanel__IsModified(__this,"ReflectColor",pSVar25,(MethodInfo *)0x0);
  pSVar3 = (__this->fields)._texture;
  if (pSVar3 == (Settings_StringSetting_o *)0x0) goto label_1822c11cb;
  bVar22 = UI_MapEditorInspectPanel__IsModified
                     (__this,"Texture",(pSVar3->fields)._value,(MethodInfo *)0x0);
  pSVar6 = (__this->fields)._tilingX;
  if (pSVar6 == (Settings_FloatSetting_o *)0x0) goto label_1822c11cb;
  local_298 = (pSVar6->fields)._value;
  pSVar25 = System_Single__ToString_1b49f60(&local_298,"R",(MethodInfo *)0x0);
  local_285 = UI_MapEditorInspectPanel__IsModified(__this,"TilingX",pSVar25,(MethodInfo *)0x0);
  pSVar6 = (__this->fields)._tilingY;
  if (pSVar6 == (Settings_FloatSetting_o *)0x0) goto label_1822c11cb;
  local_298 = (pSVar6->fields)._value;
  pSVar25 = System_Single__ToString_1b49f60(&local_298,"R",(MethodInfo *)0x0);
  local_292 = UI_MapEditorInspectPanel__IsModified(__this,"TilingY",pSVar25,(MethodInfo *)0x0);
  pSVar6 = (__this->fields)._offsetX;
  if (pSVar6 == (Settings_FloatSetting_o *)0x0) goto label_1822c11cb;
  local_298 = (pSVar6->fields)._value;
  pSVar25 = System_Single__ToString_1b49f60(&local_298,"R",(MethodInfo *)0x0);
  local_291 = UI_MapEditorInspectPanel__IsModified(__this,"OffsetX",pSVar25,(MethodInfo *)0x0);
  pSVar6 = (__this->fields)._offsetY;
  if (pSVar6 == (Settings_FloatSetting_o *)0x0) goto label_1822c11cb;
  local_298 = (pSVar6->fields)._value;
  pSVar26 = System_Single__ToString_1b49f60(&local_298,"R",(MethodInfo *)0x0);
  pSVar25 = "OffsetY";
  local_293 = UI_MapEditorInspectPanel__IsModified(__this,"OffsetY",pSVar26,(MethodInfo *)0x0);
  uVar41 = (uint)pSVar25;
  if (bVar17) {
    pSVar3 = (__this->fields)._name;
    if (pSVar3 == (Settings_StringSetting_o *)0x0) goto label_1822c11cb;
    bVar23 = System_String__op_Equality((pSVar3->fields)._value,"--",(MethodInfo *)0x0);
    uVar41 = 0;
    local_254 = uVar41;
    if (!bVar23) {
      uVar41 = (uint)bVar17;
      local_254 = uVar41;
    }
  }
  else {
    local_254 = local_254 & 0xffffff00;
  }
  if (bVar22) {
    pSVar3 = (__this->fields)._texture;
    if (pSVar3 == (Settings_StringSetting_o *)0x0) goto label_1822c11cb;
    bVar17 = System_String__op_Equality((pSVar3->fields)._value,"--",(MethodInfo *)0x0);
    uVar41 = 0;
    local_228 = uVar41;
    if (!bVar17) {
      uVar41 = (uint)bVar22;
      local_228 = uVar41;
    }
  }
  else {
    local_228 = local_228 & 0xffffff00;
  }
  if (bVar18) {
    pSVar3 = (__this->fields)._collideMode;
    if (pSVar3 == (Settings_StringSetting_o *)0x0) goto label_1822c11cb;
    bVar17 = System_String__op_Equality((pSVar3->fields)._value,"--",(MethodInfo *)0x0);
    uVar41 = 0;
    local_238 = uVar41;
    if (!bVar17) {
      uVar41 = (uint)bVar18;
      local_238 = uVar41;
    }
  }
  else {
    local_238 = local_238 & 0xffffff00;
  }
  if (bVar19) {
    pSVar3 = (__this->fields)._collideWith;
    if (pSVar3 == (Settings_StringSetting_o *)0x0) goto label_1822c11cb;
    bVar17 = System_String__op_Equality((pSVar3->fields)._value,"--",(MethodInfo *)0x0);
    uVar41 = 0;
    local_234 = uVar41;
    if (!bVar17) {
      uVar41 = (uint)bVar19;
      local_234 = uVar41;
    }
  }
  else {
    local_234 = local_234 & 0xffffff00;
  }
  if (bVar20) {
    pSVar3 = (__this->fields)._physicsMaterial;
    if (pSVar3 == (Settings_StringSetting_o *)0x0) goto label_1822c11cb;
    bVar17 = System_String__op_Equality((pSVar3->fields)._value,"--",(MethodInfo *)0x0);
    uVar41 = 0;
    local_230 = uVar41;
    if (!bVar17) {
      uVar41 = (uint)bVar20;
      local_230 = uVar41;
    }
  }
  else {
    local_230 = local_230 & 0xffffff00;
  }
  if (bVar21) {
    pSVar3 = (__this->fields)._shader;
    if (pSVar3 == (Settings_StringSetting_o *)0x0) goto label_1822c11cb;
    bVar17 = System_String__op_Equality((pSVar3->fields)._value,"--",(MethodInfo *)0x0);
    uVar41 = 0;
    local_22c = 0;
    if (!bVar17) {
      uVar41 = (uint)bVar21;
      local_22c = (uint)bVar21;
    }
  }
  else {
    local_22c = local_22c & 0xffffff00;
  }
  bVar47 = local_res20;
  if (local_res20 == 0) {
    local_250 = local_250 & 0xffffff00;
  }
  else {
    pSVar7 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._mixedFields;
    if (pSVar7 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_1822c11cb;
    bVar17 = System_Collections_Generic_HashSet_object___Contains
                       (pSVar7,(Il2CppObject *)"Active",
                        (MethodInfo_1759E40 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
    uVar41 = 0;
    local_250 = uVar41;
    if (!bVar17) {
      uVar41 = (uint)bVar47;
      local_250 = uVar41;
    }
  }
  bVar47 = local_294;
  if (local_294 == 0) {
    local_24c = local_24c & 0xffffff00;
  }
  else {
    pSVar7 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._mixedFields;
    if (pSVar7 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_1822c11cb;
    bVar17 = System_Collections_Generic_HashSet_object___Contains
                       (pSVar7,(Il2CppObject *)"Static",
                        (MethodInfo_1759E40 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
    uVar41 = 0;
    local_24c = uVar41;
    if (!bVar17) {
      uVar41 = (uint)bVar47;
      local_24c = uVar41;
    }
  }
  bVar47 = local_290;
  if (local_290 == 0) {
    local_248 = local_248 & 0xffffff00;
  }
  else {
    pSVar7 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._mixedFields;
    if (pSVar7 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_1822c11cb;
    bVar17 = System_Collections_Generic_HashSet_object___Contains
                       (pSVar7,(Il2CppObject *)"Networked",
                        (MethodInfo_1759E40 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
    uVar41 = 0;
    local_248 = uVar41;
    if (!bVar17) {
      uVar41 = (uint)bVar47;
      local_248 = uVar41;
    }
  }
  bVar47 = local_28f;
  if (local_28f == 0) {
    local_244 = local_244 & 0xffffff00;
  }
  else {
    pSVar7 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._mixedFields;
    if (pSVar7 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_1822c11cb;
    bVar17 = System_Collections_Generic_HashSet_object___Contains
                       (pSVar7,(Il2CppObject *)"Visible",
                        (MethodInfo_1759E40 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
    uVar41 = 0;
    local_244 = uVar41;
    if (!bVar17) {
      uVar41 = (uint)bVar47;
      local_244 = uVar41;
    }
  }
  bVar47 = local_28e;
  if (local_28e == 0) {
    local_280 = local_280 & 0xffffff00;
  }
  else {
    pSVar7 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._mixedFields;
    if (pSVar7 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_1822c11cb;
    bVar17 = System_Collections_Generic_HashSet_object___Contains
                       (pSVar7,(Il2CppObject *)"Parent",
                        (MethodInfo_1759E40 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
    uVar41 = 0;
    local_280 = uVar41;
    if (!bVar17) {
      uVar41 = (uint)bVar47;
      local_280 = uVar41;
    }
  }
  bVar47 = local_28d;
  if (local_28d == 0) {
    local_27c = local_27c & 0xffffff00;
  }
  else {
    pSVar7 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._mixedFields;
    if (pSVar7 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_1822c11cb;
    bVar17 = System_Collections_Generic_HashSet_object___Contains
                       (pSVar7,(Il2CppObject *)"PositionX",
                        (MethodInfo_1759E40 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
    uVar41 = 0;
    local_27c = uVar41;
    if (!bVar17) {
      uVar41 = (uint)bVar47;
      local_27c = uVar41;
    }
  }
  bVar47 = local_28c;
  if (local_28c == 0) {
    local_26c = local_26c & 0xffffff00;
  }
  else {
    pSVar7 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._mixedFields;
    if (pSVar7 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_1822c11cb;
    bVar17 = System_Collections_Generic_HashSet_object___Contains
                       (pSVar7,(Il2CppObject *)"PositionY",
                        (MethodInfo_1759E40 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
    uVar41 = 0;
    local_26c = uVar41;
    if (!bVar17) {
      uVar41 = (uint)bVar47;
      local_26c = uVar41;
    }
  }
  bVar47 = local_28b;
  if (local_28b == 0) {
    local_270 = local_270 & 0xffffff00;
  }
  else {
    pSVar7 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._mixedFields;
    if (pSVar7 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_1822c11cb;
    bVar17 = System_Collections_Generic_HashSet_object___Contains
                       (pSVar7,(Il2CppObject *)"PositionZ",
                        (MethodInfo_1759E40 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
    uVar41 = 0;
    local_270 = uVar41;
    if (!bVar17) {
      uVar41 = (uint)bVar47;
      local_270 = uVar41;
    }
  }
  bVar47 = local_28a;
  if (local_28a == 0) {
    local_278 = local_278 & 0xffffff00;
  }
  else {
    pSVar7 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._mixedFields;
    if (pSVar7 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_1822c11cb;
    bVar17 = System_Collections_Generic_HashSet_object___Contains
                       (pSVar7,(Il2CppObject *)"RotationX",
                        (MethodInfo_1759E40 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
    uVar41 = 0;
    local_278 = uVar41;
    if (!bVar17) {
      uVar41 = (uint)bVar47;
      local_278 = uVar41;
    }
  }
  bVar47 = local_284;
  if (local_284 == 0) {
    local_264 = local_264 & 0xffffff00;
  }
  else {
    pSVar7 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._mixedFields;
    if (pSVar7 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_1822c11cb;
    bVar17 = System_Collections_Generic_HashSet_object___Contains
                       (pSVar7,(Il2CppObject *)"RotationY",
                        (MethodInfo_1759E40 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
    uVar41 = 0;
    local_264 = uVar41;
    if (!bVar17) {
      uVar41 = (uint)bVar47;
      local_264 = uVar41;
    }
  }
  bVar47 = local_289;
  if (local_289 == 0) {
    local_268 = local_268 & 0xffffff00;
  }
  else {
    pSVar7 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._mixedFields;
    if (pSVar7 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_1822c11cb;
    bVar17 = System_Collections_Generic_HashSet_object___Contains
                       (pSVar7,(Il2CppObject *)"RotationZ",
                        (MethodInfo_1759E40 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
    uVar41 = 0;
    local_268 = uVar41;
    if (!bVar17) {
      uVar41 = (uint)bVar47;
      local_268 = uVar41;
    }
  }
  bVar47 = local_288;
  if (local_288 == 0) {
    uVar44 = 0;
  }
  else {
    pSVar7 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._mixedFields;
    if (pSVar7 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_1822c11cb;
    pSVar25 = "ScaleX";
    bVar17 = System_Collections_Generic_HashSet_object___Contains
                       (pSVar7,(Il2CppObject *)"ScaleX",
                        (MethodInfo_1759E40 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
    uVar41 = (uint)pSVar25;
    uVar44 = 0;
    if (!bVar17) {
      uVar44 = (uint)bVar47;
    }
  }
  bVar47 = local_287;
  local_260 = uVar44;
  if (local_287 == 0) {
    uVar49 = 0;
  }
  else {
    pSVar7 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._mixedFields;
    if (pSVar7 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_1822c11cb;
    pSVar25 = "ScaleY";
    bVar17 = System_Collections_Generic_HashSet_object___Contains
                       (pSVar7,(Il2CppObject *)"ScaleY",
                        (MethodInfo_1759E40 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
    uVar41 = (uint)pSVar25;
    uVar49 = 0;
    if (!bVar17) {
      uVar49 = (uint)bVar47;
    }
  }
  bVar47 = local_286;
  local_23c = uVar49;
  if (local_286 == 0) {
    uVar43 = 0;
  }
  else {
    pSVar7 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._mixedFields;
    if (pSVar7 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_1822c11cb;
    pSVar25 = "ScaleZ";
    bVar17 = System_Collections_Generic_HashSet_object___Contains
                       (pSVar7,(Il2CppObject *)"ScaleZ",
                        (MethodInfo_1759E40 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
    uVar41 = (uint)pSVar25;
    uVar43 = 0;
    if (!bVar17) {
      uVar43 = (uint)bVar47;
    }
  }
  bVar47 = local_285;
  local_240 = uVar43;
  if (local_285 == 0) {
    uVar41 = uVar41 & 0xffffff00;
  }
  else {
    pSVar7 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._mixedFields;
    if (pSVar7 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_1822c11cb;
    bVar17 = System_Collections_Generic_HashSet_object___Contains
                       (pSVar7,(Il2CppObject *)"TilingX",
                        (MethodInfo_1759E40 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
    uVar41 = 0;
    if (!bVar17) {
      uVar41 = (uint)bVar47;
    }
  }
  bVar47 = local_292;
  local_274 = uVar41;
  if (local_292 == 0) {
    uVar45 = 0;
  }
  else {
    pSVar7 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._mixedFields;
    if (pSVar7 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_1822c11cb;
    pSVar25 = "TilingY";
    bVar17 = System_Collections_Generic_HashSet_object___Contains
                       (pSVar7,(Il2CppObject *)"TilingY",
                        (MethodInfo_1759E40 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
    uVar41 = (uint)pSVar25;
    uVar45 = 0;
    if (!bVar17) {
      uVar45 = (uint)bVar47;
    }
  }
  bVar47 = local_291;
  local_218 = uVar45;
  if (local_291 == 0) {
    local_220 = uVar41 & 0xffffff00;
  }
  else {
    pSVar7 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._mixedFields;
    if (pSVar7 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_1822c11cb;
    bVar17 = System_Collections_Generic_HashSet_object___Contains
                       (pSVar7,(Il2CppObject *)"OffsetX",
                        (MethodInfo_1759E40 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
    local_220 = 0;
    if (!bVar17) {
      local_220 = (uint)bVar47;
    }
  }
  bVar47 = local_293;
  if (local_293 == 0) {
    local_224 = local_220 & 0xffffff00;
  }
  else {
    pSVar7 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._mixedFields;
    if (pSVar7 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_1822c11cb;
    bVar17 = System_Collections_Generic_HashSet_object___Contains
                       (pSVar7,(Il2CppObject *)"OffsetY",
                        (MethodInfo_1759E40 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
    local_224 = 0;
    if (!bVar17) {
      local_224 = (uint)bVar47;
    }
  }
  local_293 = (byte)uVar43 | (byte)uVar49 | (byte)uVar44 | (byte)local_268 | (byte)local_264 | (byte)local_278
              | (byte)local_270 | (byte)local_26c | (byte)local_27c;
  local_292 = local_293;
  if (local_293 != 0) {
    pGVar8 = (__this->fields)._gameManager;
    if (pGVar8 == (GameManagers_MapEditorGameManager_o *)0x0) goto label_1822c11cb;
    GameManagers_MapEditorGameManager__SetupTemporaryPhysicalParenting(pGVar8,(MethodInfo *)0x0);
  }
  pSVar27 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_MapObject);
  local_210 = pSVar27;
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar27,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_MapObject_ctor);
  pSVar28 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_MapObject);
  local_200 = pSVar28;
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar28,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_MapObject_ctor);
  __this_05 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_MapObject);
  local_208 = __this_05;
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_05,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_MapObject_ctor);
  pSVar9 = (__this->fields)._mapObjects;
  if (pSVar9 == (System_Collections_Generic_List_MapObject__o *)0x0) goto label_1822c11cb;
  local_res20 = '\0';
  local_25c = 0;
  local_294 = 0;
  local_291 = (byte)local_280;
  local_160 = pSVar27;
  local_158 = __this_05;
  local_150 = pSVar28;
  System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
            (&local_138,(System_Collections_Generic_List_T__o *)pSVar9,
             (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_MapObject_GetEnumerator);
  local_198.fields._list = local_138.fields._list;
  local_198.fields._index = local_138.fields._index;
  local_198.fields._version = local_138.fields._version;
  local_198.fields._current = local_138.fields._current;
  local_1a8 = 0;
  bVar47 = '\0';
  uVar41 = 0;
  local_1a0 = &local_198;
  while (bVar17 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (&local_198,
                             (MethodInfo_153A2A0 *)
                             MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_MoveNext),
        pIVar15 = local_198.fields._current, bVar17) {
    local_168 = (Map_MapObject_o *)local_198.fields._current;
    if ((Map_MapObject_o *)local_198.fields._current == (Map_MapObject_o *)0x0) {
      ThrowNullReferenceException();
    }
    __this_00 = ((Map_MapObject_Fields *)((longlong)local_198.fields._current + 0x10))->ScriptObject;
    if (__this_00 != (Map_MapScriptBaseObject_o *)0x0) {
      bVar47 = (TypeInfo_Map_MapScriptSceneObject->_2).typeHierarchyDepth;
      if (((__this_00->klass->_2).typeHierarchyDepth < bVar47) ||
         ((__this_00->klass->_2).typeHierarchy[(ulonglong)bVar47 - 1] !=
          (Il2CppClass *)TypeInfo_Map_MapScriptSceneObject)) {
        il2cpp_codegen_raise_invalid_cast_exception(__this_00);
      }
    }
    if ((char)local_254 != '\0') {
      if (__this_00 == (Map_MapScriptBaseObject_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar3 = (__this->fields)._name;
      if (pSVar3 == (Settings_StringSetting_o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar17 = System_String__op_Inequality
                         ((__this_00->fields).Name,(pSVar3->fields)._value,(MethodInfo *)0x0);
      local_25c = uVar41 & 0xff;
      if (bVar17) {
        local_25c = 1;
      }
      local_294 = (byte)local_25c;
      pSVar3 = (__this->fields)._name;
      if (pSVar3 == (Settings_StringSetting_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar25 = (pSVar3->fields)._value;
      (__this_00->fields).Name = pSVar25;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).Name,pSVar25);
    }
    if ((char)local_250 != '\0') {
      pSVar4 = (__this->fields)._active;
      if (pSVar4 == (Settings_BoolSetting_o *)0x0) {
        ThrowNullReferenceException();
      }
      if (__this_00 == (Map_MapScriptBaseObject_o *)0x0) {
        ThrowNullReferenceException();
      }
      (__this_00->fields).Active = (pSVar4->fields)._value;
    }
    if ((char)local_24c != '\0') {
      pSVar4 = (__this->fields)._static;
      if (pSVar4 == (Settings_BoolSetting_o *)0x0) {
        ThrowNullReferenceException();
      }
      if (__this_00 == (Map_MapScriptBaseObject_o *)0x0) {
        ThrowNullReferenceException();
      }
      (__this_00->fields).Static = (pSVar4->fields)._value;
    }
    if ((char)local_248 != '\0') {
      pSVar4 = (__this->fields)._networked;
      if (pSVar4 == (Settings_BoolSetting_o *)0x0) {
        ThrowNullReferenceException();
      }
      if (__this_00 == (Map_MapScriptBaseObject_o *)0x0) {
        ThrowNullReferenceException();
      }
      (__this_00->fields).Networked = (pSVar4->fields)._value;
    }
    if ((char)local_244 != '\0') {
      pSVar4 = (__this->fields)._visible;
      if (pSVar4 == (Settings_BoolSetting_o *)0x0) {
        ThrowNullReferenceException();
      }
      if (__this_00 == (Map_MapScriptBaseObject_o *)0x0) {
        ThrowNullReferenceException();
      }
      (__this_00->fields).Visible = (pSVar4->fields)._value;
    }
    if ((byte)local_280 != '\0') {
      pSVar5 = (__this->fields)._parent;
      if (pSVar5 == (Settings_IntSetting_o *)0x0) {
        ThrowNullReferenceException();
      }
      iVar2 = (pSVar5->fields)._value;
      if (iVar2 < 1) {
label_1822bfc87:
        parent = (Map_MapObject_o *)0x0;
      }
      else {
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        pSVar10 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                  TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
        if (pSVar10 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
          ThrowNullReferenceException();
        }
        bVar17 = System_Collections_Generic_Dictionary_int__ulong___ContainsKey
                           (pSVar10,iVar2,
                            (MethodInfo_1407110 *)
                            MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
        if (!bVar17) goto label_1822bfc87;
        if (__this_00 == (Map_MapScriptBaseObject_o *)0x0) {
          ThrowNullReferenceException();
        }
        if (iVar2 == (__this_00->fields).Id) goto label_1822bfc87;
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        pSVar10 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                  TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
        if (pSVar10 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
          ThrowNullReferenceException();
        }
        uVar29 = System_Collections_Generic_Dictionary_int__ulong___get_Item
                           (pSVar10,iVar2,
                            (MethodInfo_14156F0 *)
                            MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
        if (uVar29 == 0) {
          ThrowNullReferenceException();
        }
        if (*(int *)(uVar29 + 0x10) == (__this_00->fields).Id) goto label_1822bfc87;
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        pSVar10 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                  TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
        if (pSVar10 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
          ThrowNullReferenceException();
        }
        parent = (Map_MapObject_o *)
                 System_Collections_Generic_Dictionary_int__ulong___get_Item
                           (pSVar10,iVar2,
                            (MethodInfo_14156F0 *)
                            MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
      }
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      Map_MapLoader__SetParentLogical((Map_MapObject_o *)pIVar15,parent,(MethodInfo *)0x0);
      if (__this_00 == (Map_MapScriptBaseObject_o *)0x0) {
        ThrowNullReferenceException();
      }
      (__this_00->fields).Parent = ((Map_MapObject_Fields *)((longlong)pIVar15 + 0x10))->Parent;
    }
    cVar24 = (char)local_270;
    cVar48 = (char)local_26c;
    if ((cVar24 != '\0' || cVar48 != '\0') || (byte)local_27c != '\0') {
      if (__this_00 == (Map_MapScriptBaseObject_o *)0x0) {
        ThrowNullReferenceException();
      }
      pfVar30 = (float *)Map_MapScriptBaseObject__GetPosition(&local_118,__this_00,(MethodInfo *)0x0);
      pfVar42 = pfVar30;
      if ((byte)local_27c != '\0') {
        pSVar6 = (__this->fields)._positionX;
        if (pSVar6 == (Settings_FloatSetting_o *)0x0) {
          ThrowNullReferenceException();
        }
        pfVar42 = &(pSVar6->fields)._value;
      }
      fVar55 = pfVar30[1];
      if (cVar48 != '\0') {
        pSVar6 = (__this->fields)._positionY;
        if (pSVar6 == (Settings_FloatSetting_o *)0x0) {
          ThrowNullReferenceException();
        }
        fVar55 = (pSVar6->fields)._value;
      }
      fVar54 = pfVar30[2];
      if (cVar24 != '\0') {
        pSVar6 = (__this->fields)._positionZ;
        if (pSVar6 == (Settings_FloatSetting_o *)0x0) {
          ThrowNullReferenceException();
        }
        fVar54 = (pSVar6->fields)._value;
      }
      fVar53 = *pfVar42;
      fVar50 = fVar53 - *pfVar30;
      fVar52 = fVar55 - pfVar30[1];
      fVar51 = fVar54 - pfVar30[2];
      if (9.9999994e-11 <= fVar51 * fVar51 + fVar52 * fVar52 + fVar50 * fVar50) {
        pUVar11 = ((Map_MapObject_Fields *)((longlong)pIVar15 + 0x10))->GameObject;
        if (pUVar11 == (UnityEngine_GameObject_o *)0x0) {
          ThrowNullReferenceException();
        }
        pUVar31 = UnityEngine_GameObject__get_transform(pUVar11,(MethodInfo *)0x0);
        if (pUVar31 == (UnityEngine_Transform_o *)0x0) {
          ThrowNullReferenceException();
        }
        local_1f8.fields.x = fVar53;
        local_1f8.fields.y = fVar55;
        local_1f8.fields.z = fVar54;
        UnityEngine_Transform__set_position(pUVar31,&local_1f8,(MethodInfo *)0x0);
        if (local_210 == (System_Collections_Generic_List_MapObject__o *)0x0) {
          ThrowNullReferenceException();
        }
        il2cpp_runtime_helper_180012890();
      }
    }
    cVar24 = (char)local_268;
    cVar48 = (char)local_264;
    if ((cVar24 != '\0' || cVar48 != '\0') || (byte)local_278 != '\0') {
      if (__this_00 == (Map_MapScriptBaseObject_o *)0x0) {
        ThrowNullReferenceException();
      }
      pfVar30 = (float *)Map_MapScriptBaseObject__GetRotation(&local_108,__this_00,(MethodInfo *)0x0);
      pfVar42 = pfVar30;
      if ((byte)local_278 != '\0') {
        pSVar6 = (__this->fields)._rotationX;
        if (pSVar6 == (Settings_FloatSetting_o *)0x0) {
          ThrowNullReferenceException();
        }
        pfVar42 = &(pSVar6->fields)._value;
      }
      fVar55 = pfVar30[1];
      if (cVar48 != '\0') {
        pSVar6 = (__this->fields)._rotationY;
        if (pSVar6 == (Settings_FloatSetting_o *)0x0) {
          ThrowNullReferenceException();
        }
        fVar55 = (pSVar6->fields)._value;
      }
      fVar54 = pfVar30[2];
      if (cVar24 != '\0') {
        pSVar6 = (__this->fields)._rotationZ;
        if (pSVar6 == (Settings_FloatSetting_o *)0x0) {
          ThrowNullReferenceException();
        }
        fVar54 = (pSVar6->fields)._value;
      }
      fVar53 = *pfVar42;
      fVar50 = fVar53 - *pfVar30;
      fVar52 = fVar55 - pfVar30[1];
      fVar51 = fVar54 - pfVar30[2];
      if (9.9999994e-11 <= fVar51 * fVar51 + fVar52 * fVar52 + fVar50 * fVar50) {
        pUVar11 = ((Map_MapObject_Fields *)((longlong)pIVar15 + 0x10))->GameObject;
        if (pUVar11 == (UnityEngine_GameObject_o *)0x0) {
          ThrowNullReferenceException();
        }
        pUVar31 = UnityEngine_GameObject__get_transform(pUVar11,(MethodInfo *)0x0);
        local_1e8.fields.x = fVar53 * 0.017453292;
        local_1e8.fields.y = fVar55 * 0.017453292;
        local_1e8.fields.z = fVar54 * 0.017453292;
        pUVar32 = UnityEngine_Quaternion__Internal_FromEulerRad
                            ((UnityEngine_Quaternion_o *)&local_138,&local_1e8,(MethodInfo *)0x0);
        if (pUVar31 == (UnityEngine_Transform_o *)0x0) {
          ThrowNullReferenceException();
        }
        local_178[0] = *(System_Collections_Generic_IEnumerable_TSource__o **)&pUVar32->fields;
        local_178[1]._0_4_ = (pUVar32->fields).z;
        local_178[1]._4_4_ = (pUVar32->fields).w;
        UnityEngine_Transform__set_rotation(pUVar31,(UnityEngine_Quaternion_o *)local_178,(MethodInfo *)0x0);
        if (local_200 == (System_Collections_Generic_List_MapObject__o *)0x0) {
          ThrowNullReferenceException();
        }
        il2cpp_runtime_helper_180012890();
      }
    }
    cVar24 = (char)local_240;
    cVar48 = (char)local_23c;
    if ((cVar24 != '\0' || cVar48 != '\0') || (char)local_260 != '\0') {
      if (__this_00 == (Map_MapScriptBaseObject_o *)0x0) {
        ThrowNullReferenceException();
      }
      pfVar30 = (float *)Map_MapScriptBaseObject__GetScale(&local_f8,__this_00,(MethodInfo *)0x0);
      pfVar42 = pfVar30;
      if ((char)local_260 != '\0') {
        pSVar6 = (__this->fields)._scaleX;
        if (pSVar6 == (Settings_FloatSetting_o *)0x0) {
          ThrowNullReferenceException();
        }
        pfVar42 = &(pSVar6->fields)._value;
      }
      fVar55 = pfVar30[1];
      if (cVar48 != '\0') {
        pSVar6 = (__this->fields)._scaleY;
        if (pSVar6 == (Settings_FloatSetting_o *)0x0) {
          ThrowNullReferenceException();
        }
        fVar55 = (pSVar6->fields)._value;
      }
      fVar54 = pfVar30[2];
      if (cVar24 != '\0') {
        pSVar6 = (__this->fields)._scaleZ;
        if (pSVar6 == (Settings_FloatSetting_o *)0x0) {
          ThrowNullReferenceException();
        }
        fVar54 = (pSVar6->fields)._value;
      }
      fVar53 = *pfVar42;
      fVar50 = fVar53 - *pfVar30;
      fVar52 = fVar55 - pfVar30[1];
      fVar51 = fVar54 - pfVar30[2];
      if (9.9999994e-11 <= fVar51 * fVar51 + fVar52 * fVar52 + fVar50 * fVar50) {
        uVar1._0_4_ = *(float *)&pIVar15[2].monitor;
        uVar1._4_4_ = *(float *)((longlong)&pIVar15[2].monitor + 4);
        fVar50 = (((Map_MapObject_Fields *)((longlong)pIVar15 + 0x10))->BaseScale).fields.z;
        if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
        }
        local_1d8.fields.x = fVar53;
        local_1d8.fields.y = fVar55;
        local_1d8.fields.z = fVar54;
        local_148._0_8_ = uVar1;
        local_148.z = fVar50;
        pUVar33 = Unity_Mathematics_float3__op_Multiply
                            (&local_e8,(Unity_Mathematics_float3_o *)&local_148,&local_1d8,(MethodInfo *)0x0);
        pUVar11 = ((Map_MapObject_Fields *)((longlong)pIVar15 + 0x10))->GameObject;
        if (pUVar11 == (UnityEngine_GameObject_o *)0x0) {
          ThrowNullReferenceException();
        }
        fVar55 = (pUVar33->fields).x;
        fVar54 = (pUVar33->fields).y;
        fVar53 = (pUVar33->fields).z;
        pUVar31 = UnityEngine_GameObject__get_transform(pUVar11,(MethodInfo *)0x0);
        if (pUVar31 == (UnityEngine_Transform_o *)0x0) {
          ThrowNullReferenceException();
        }
        pUVar31 = UnityEngine_Transform__GetParent(pUVar31,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar17 = UnityEngine_Object__op_Inequality
                           ((UnityEngine_Object_o *)pUVar31,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar17) {
          if (pUVar31 == (UnityEngine_Transform_o *)0x0) {
            ThrowNullReferenceException();
          }
          pUVar34 = UnityEngine_Transform__get_lossyScale(local_d8,pUVar31,(MethodInfo *)0x0);
          pUVar11 = ((Map_MapObject_Fields *)((longlong)pIVar15 + 0x10))->GameObject;
          if (pUVar11 == (UnityEngine_GameObject_o *)0x0) {
            ThrowNullReferenceException();
          }
          fVar50 = (pUVar34->fields).x;
          fVar51 = (pUVar34->fields).y;
          fVar52 = (pUVar34->fields).z;
          pUVar31 = UnityEngine_GameObject__get_transform(pUVar11,(MethodInfo *)0x0);
          if (fVar50 != 0.0) {
            fVar55 = fVar55 / fVar50;
          }
          if (fVar51 != 0.0) {
            fVar54 = fVar54 / fVar51;
          }
          if (fVar52 != 0.0) {
            fVar53 = fVar53 / fVar52;
          }
          if (pUVar31 == (UnityEngine_Transform_o *)0x0) {
            ThrowNullReferenceException();
          }
          local_1b8.fields.x = fVar55;
          local_1b8.fields.y = fVar54;
          local_1b8.fields.z = fVar53;
          UnityEngine_Transform__set_localScale(pUVar31,&local_1b8,(MethodInfo *)0x0);
        }
        else {
          pUVar11 = ((Map_MapObject_Fields *)((longlong)pIVar15 + 0x10))->GameObject;
          if (pUVar11 == (UnityEngine_GameObject_o *)0x0) {
            ThrowNullReferenceException();
          }
          pUVar31 = UnityEngine_GameObject__get_transform(pUVar11,(MethodInfo *)0x0);
          if (pUVar31 == (UnityEngine_Transform_o *)0x0) {
            ThrowNullReferenceException();
          }
          local_1c8.fields.x = fVar55;
          local_1c8.fields.y = fVar54;
          local_1c8.fields.z = fVar53;
          UnityEngine_Transform__set_localScale(pUVar31,&local_1c8,(MethodInfo *)0x0);
        }
        if (local_208 == (System_Collections_Generic_List_MapObject__o *)0x0) {
          ThrowNullReferenceException();
        }
        il2cpp_runtime_helper_180012890();
      }
    }
    if ((char)local_238 != '\0') {
      pSVar3 = (__this->fields)._collideMode;
      if (pSVar3 == (Settings_StringSetting_o *)0x0) {
        ThrowNullReferenceException();
      }
      if (__this_00 == (Map_MapScriptBaseObject_o *)0x0) {
        ThrowNullReferenceException();
      }
      value = (Map_MapScriptBaseObject_c *)(pSVar3->fields)._value;
      (*(uint64_t *)((char *)__this_00 + 0x60)) = value;
      Il2CppCodeGenWriteBarrier(&(*(uint64_t *)((char *)__this_00 + 0x60)),value);
    }
    if ((char)local_234 != '\0') {
      pSVar3 = (__this->fields)._collideWith;
      if (pSVar3 == (Settings_StringSetting_o *)0x0) {
        ThrowNullReferenceException();
      }
      if (__this_00 == (Map_MapScriptBaseObject_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar25 = (pSVar3->fields)._value;
      (*(uint64_t *)((char *)__this_00 + 0x68)) = pSVar25;
      Il2CppCodeGenWriteBarrier(&(*(uint64_t *)((char *)__this_00 + 0x68)),pSVar25);
    }
    if ((char)local_230 != '\0') {
      pSVar3 = (__this->fields)._physicsMaterial;
      if (pSVar3 == (Settings_StringSetting_o *)0x0) {
        ThrowNullReferenceException();
      }
      if (__this_00 == (Map_MapScriptBaseObject_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar25 = (pSVar3->fields)._value;
      (*(uint64_t *)((char *)__this_00 + 0x70)) = pSVar25;
      Il2CppCodeGenWriteBarrier(&(*(uint64_t *)((char *)__this_00 + 0x70)),pSVar25);
    }
    if ((char)local_22c != '\0') {
      pSVar3 = (__this->fields)._shader;
      if (pSVar3 == (Settings_StringSetting_o *)0x0) {
        ThrowNullReferenceException();
      }
      if (__this_00 == (Map_MapScriptBaseObject_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar25 = (*(uint64_t *)((char *)__this_00 + 0x78));
      if (pSVar25 == (System_String_o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar17 = System_String__op_Inequality
                         ((pSVar3->fields)._value,(System_String_o *)pSVar25->fields,(MethodInfo *)0x0);
      if (bVar17) {
        pSVar3 = (__this->fields)._shader;
        if (pSVar3 == (Settings_StringSetting_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar25 = (pSVar3->fields)._value;
        if ((TypeInfo_Map_MapObjectShader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectShader);
        }
        bVar17 = System_String__op_Equality
                           (pSVar25,TypeInfo_Map_MapObjectShader->static_fields->Default,(MethodInfo *)0x0);
        if (bVar17) {
label_1822c057d:
          pMVar35 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScriptBaseMaterial);
          Map_MapScriptBaseMaterial___ctor(pMVar35,(MethodInfo *)0x0);
          (*(uint64_t *)((char *)__this_00 + 0x78)) = (System_String_o *)pMVar35;
          Il2CppCodeGenWriteBarrier(&(*(uint64_t *)((char *)__this_00 + 0x78)),pMVar35);
        }
        else {
          pSVar3 = (__this->fields)._shader;
          if (pSVar3 == (Settings_StringSetting_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar25 = (pSVar3->fields)._value;
          if ((TypeInfo_Map_MapObjectShader->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectShader);
          }
          bVar17 = System_String__op_Equality
                             (pSVar25,TypeInfo_Map_MapObjectShader->static_fields->DefaultNoTint,
                              (MethodInfo *)0x0);
          if (bVar17) goto label_1822c057d;
          pSVar3 = (__this->fields)._shader;
          if (pSVar3 == (Settings_StringSetting_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar25 = (pSVar3->fields)._value;
          if ((TypeInfo_Map_MapObjectShader->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectShader);
          }
          bVar17 = System_String__op_Equality
                             (pSVar25,TypeInfo_Map_MapObjectShader->static_fields->DefaultTiled,
                              (MethodInfo *)0x0);
          if (bVar17) {
            __this_06 = (Map_MapScriptReflectiveMaterial_o *)
                        il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScriptDefaultTiledMaterial);
            Map_MapScriptLegacyMaterial___ctor((Map_MapScriptLegacyMaterial_o *)__this_06,(MethodInfo *)0x0);
          }
          else {
            pSVar3 = (__this->fields)._shader;
            if (pSVar3 == (Settings_StringSetting_o *)0x0) {
              ThrowNullReferenceException();
            }
            pSVar25 = (pSVar3->fields)._value;
            if ((TypeInfo_Map_MapObjectShader->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectShader);
            }
            bVar17 = System_String__op_Equality
                               (pSVar25,TypeInfo_Map_MapObjectShader->static_fields->Basic,(MethodInfo *)0x0);
            if (!bVar17) {
              pSVar3 = (__this->fields)._shader;
              if (pSVar3 == (Settings_StringSetting_o *)0x0) {
                ThrowNullReferenceException();
              }
              pSVar25 = (pSVar3->fields)._value;
              if ((TypeInfo_Map_MapObjectShader->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectShader);
              }
              bVar17 = System_String__op_Equality
                                 (pSVar25,TypeInfo_Map_MapObjectShader->static_fields->Transparent,
                                  (MethodInfo *)0x0);
              if (!bVar17) {
                pSVar3 = (__this->fields)._shader;
                if (pSVar3 == (Settings_StringSetting_o *)0x0) {
                  ThrowNullReferenceException();
                }
                pSVar25 = (pSVar3->fields)._value;
                if ((TypeInfo_Map_MapObjectShader->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectShader);
                }
                bVar17 = System_String__op_Equality
                                   (pSVar25,TypeInfo_Map_MapObjectShader->static_fields->Reflective,
                                    (MethodInfo *)0x0);
                if (bVar17) {
                  __this_06 = il2cpp_codegen_object_new
                                        ((Il2CppClass *)TypeInfo_Map_MapScriptReflectiveMaterial);
                  Map_MapScriptReflectiveMaterial___ctor(__this_06,(MethodInfo *)0x0);
                }
                else {
                  __this_06 = (Map_MapScriptReflectiveMaterial_o *)
                              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScriptLegacyMaterial);
                  Map_MapScriptLegacyMaterial___ctor
                            ((Map_MapScriptLegacyMaterial_o *)__this_06,(MethodInfo *)0x0);
                }
                goto label_1822c056b;
              }
            }
            __this_06 = (Map_MapScriptReflectiveMaterial_o *)
                        il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScriptBasicMaterial);
            Map_MapScriptBasicMaterial___ctor((Map_MapScriptBasicMaterial_o *)__this_06,(MethodInfo *)0x0);
          }
label_1822c056b:
          (*(uint64_t *)((char *)__this_00 + 0x78)) = (System_String_o *)__this_06;
          Il2CppCodeGenWriteBarrier(&(*(uint64_t *)((char *)__this_00 + 0x78)),__this_06);
        }
        pSVar3 = (__this->fields)._shader;
        if (pSVar3 == (Settings_StringSetting_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar25 = (*(uint64_t *)((char *)__this_00 + 0x78));
        if (pSVar25 == (System_String_o *)0x0) {
          ThrowNullReferenceException();
        }
        value_00 = (System_String_Fields)(pSVar3->fields)._value;
        pSVar25->fields = value_00;
        Il2CppCodeGenWriteBarrier((void **)&pSVar25->fields,(void *)value_00);
        local_res20 = '\x01';
      }
    }
    if (local_283 == '\0') {
      if (__this_00 == (Map_MapScriptBaseObject_o *)0x0) {
        ThrowNullReferenceException();
      }
    }
    else {
      if (__this_00 == (Map_MapScriptBaseObject_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar12 = (__this->fields)._color;
      if (pSVar12 == (Settings_ColorSetting_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar25 = (*(uint64_t *)((char *)__this_00 + 0x78));
      if (pSVar25 == (System_String_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar13 = (System_String_c *)(pSVar12->fields)._value;
      (*(uint64_t *)((char *)pSVar25 + 0x18)) = pSVar13;
      Il2CppCodeGenWriteBarrier(&(*(uint64_t *)((char *)pSVar25 + 0x18)),pSVar13);
    }
    handle = TypeRef_Map_MapScriptBasicMaterial;
    pSVar25 = (*(uint64_t *)((char *)__this_00 + 0x78));
    cVar24 = (char)uVar45;
    if (pSVar25 == (System_String_o *)0x0) {
label_1822c0b03:
      if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(g_data_184354ea0);
      }
      pSVar38 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
      pSVar25 = (*(uint64_t *)((char *)__this_00 + 0x78));
      if (pSVar25 == (System_String_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar39 = System_Object__GetType((Il2CppObject *)pSVar25,(MethodInfo *)0x0);
      if (pSVar38 == (System_Type_o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar17 = (*(pSVar38->klass->vtable)._22_IsAssignableFrom.methodPtr)
                         (pSVar38,pSVar39,(pSVar38->klass->vtable)._22_IsAssignableFrom.method);
      if (bVar17) {
        pSVar25 = (*(uint64_t *)((char *)__this_00 + 0x78));
        if (pSVar25 != (System_String_o *)0x0) {
          bVar47 = (TypeInfo_Map_MapScriptBasicMaterial->_2).typeHierarchyDepth;
          if (((pSVar25->klass->_2).typeHierarchyDepth < bVar47) ||
             ((pSVar25->klass->_2).typeHierarchy[(ulonglong)bVar47 - 1] !=
              (Il2CppClass *)TypeInfo_Map_MapScriptBasicMaterial)) {
            il2cpp_codegen_raise_invalid_cast_exception(pSVar25);
          }
        }
        if ((char)local_228 != '\0') {
          if (pSVar25 == (System_String_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar3 = (__this->fields)._texture;
          if (pSVar3 == (Settings_StringSetting_o *)0x0) {
            ThrowNullReferenceException();
          }
          bVar17 = System_String__op_Inequality((*(uint64_t *)((char *)pSVar25 + 0x20)),(pSVar3->fields)._value,(MethodInfo *)0x0);
          if (bVar17) {
            local_res20 = '\x01';
            pSVar3 = (__this->fields)._texture;
            if (pSVar3 == (Settings_StringSetting_o *)0x0) {
              ThrowNullReferenceException();
            }
            pSVar26 = (pSVar3->fields)._value;
            (*(uint64_t *)((char *)pSVar25 + 0x20)) = pSVar26;
            Il2CppCodeGenWriteBarrier(&(*(uint64_t *)((char *)pSVar25 + 0x20)),pSVar26);
          }
        }
        if (cVar24 != '\0' || (char)local_274 != '\0') {
          if ((char)local_274 == '\0') {
            if (pSVar25 == (System_String_o *)0x0) {
              ThrowNullReferenceException();
            }
            fVar55 = (float)(*(uint32_t *)((char *)pSVar25 + 0x28));
          }
          else {
            pSVar6 = (__this->fields)._tilingX;
            if (pSVar6 == (Settings_FloatSetting_o *)0x0) {
              ThrowNullReferenceException();
            }
            fVar55 = (pSVar6->fields)._value;
          }
          if (cVar24 == '\0') {
            if (pSVar25 == (System_String_o *)0x0) {
              ThrowNullReferenceException();
            }
            fVar54 = *(float *)&(*(uint16_t *)((char *)pSVar25 + 0x2c));
          }
          else {
            pSVar6 = (__this->fields)._tilingY;
            if (pSVar6 == (Settings_FloatSetting_o *)0x0) {
              ThrowNullReferenceException();
            }
            if (pSVar25 == (System_String_o *)0x0) {
              ThrowNullReferenceException();
            }
            fVar54 = (pSVar6->fields)._value;
          }
          (*(uint32_t *)((char *)pSVar25 + 0x28)) = (int32_t)fVar55;
          *(float *)&(*(uint16_t *)((char *)pSVar25 + 0x2c)) = fVar54;
        }
        if ((char)local_224 != '\0' || (char)local_220 != '\0') {
          if ((char)local_220 == '\0') {
            if (pSVar25 == (System_String_o *)0x0) {
              ThrowNullReferenceException();
            }
            fVar55 = *(float *)&(*(uint64_t *)((char *)pSVar25 + 0x30));
          }
          else {
            pSVar6 = (__this->fields)._offsetX;
            if (pSVar6 == (Settings_FloatSetting_o *)0x0) {
              ThrowNullReferenceException();
            }
            fVar55 = (pSVar6->fields)._value;
          }
          if ((char)local_224 == '\0') {
            if (pSVar25 == (System_String_o *)0x0) {
              ThrowNullReferenceException();
            }
            fVar54 = *(float *)((longlong)&(*(uint64_t *)((char *)pSVar25 + 0x30)) + 4);
          }
          else {
            pSVar6 = (__this->fields)._offsetY;
            if (pSVar6 == (Settings_FloatSetting_o *)0x0) {
              ThrowNullReferenceException();
            }
            if (pSVar25 == (System_String_o *)0x0) {
              ThrowNullReferenceException();
            }
            fVar54 = (pSVar6->fields)._value;
          }
          *(float *)&(*(uint64_t *)((char *)pSVar25 + 0x30)) = fVar55;
          *(float *)((longlong)&(*(uint64_t *)((char *)pSVar25 + 0x30)) + 4) = fVar54;
        }
        if ((local_282 != '\0') && (pSVar25 != (System_String_o *)0x0)) {
          pSVar13 = pSVar25->klass;
          bVar47 = (TypeInfo_Map_MapScriptReflectiveMaterial->_2).typeHierarchyDepth;
          if ((bVar47 <= (pSVar13->_2).typeHierarchyDepth) &&
             ((pSVar13->_2).typeHierarchy[(ulonglong)bVar47 - 1] ==
              (Il2CppClass *)TypeInfo_Map_MapScriptReflectiveMaterial)) {
            pSVar12 = (__this->fields)._reflectColor;
            if (pSVar12 == (Settings_ColorSetting_o *)0x0) {
              ThrowNullReferenceException();
            }
            bVar47 = (TypeInfo_Map_MapScriptReflectiveMaterial->_2).typeHierarchyDepth;
            if (((pSVar13->_2).typeHierarchyDepth < bVar47) ||
               ((pSVar13->_2).typeHierarchy[(ulonglong)bVar47 - 1] !=
                (Il2CppClass *)TypeInfo_Map_MapScriptReflectiveMaterial)) {
              il2cpp_codegen_raise_invalid_cast_exception(pSVar25);
            }
            value_01 = (pSVar12->fields)._value;
            (*(uint64_t *)((char *)pSVar25 + 0x38)) = value_01;
            bVar47 = (TypeInfo_Map_MapScriptReflectiveMaterial->_2).typeHierarchyDepth;
            if (((pSVar13->_2).typeHierarchyDepth < bVar47) ||
               ((pSVar13->_2).typeHierarchy[(ulonglong)bVar47 - 1] !=
                (Il2CppClass *)TypeInfo_Map_MapScriptReflectiveMaterial)) {
              il2cpp_codegen_raise_invalid_cast_exception(pSVar25);
            }
            Il2CppCodeGenWriteBarrier(&(*(uint64_t *)((char *)pSVar25 + 0x38)),value_01);
          }
        }
      }
    }
    else {
      bVar47 = (TypeInfo_Map_MapScriptLegacyMaterial->_2).typeHierarchyDepth;
      if (((pSVar25->klass->_2).typeHierarchyDepth < bVar47) ||
         ((pSVar25->klass->_2).typeHierarchy[(ulonglong)bVar47 - 1] !=
          (Il2CppClass *)TypeInfo_Map_MapScriptLegacyMaterial)) {
        bVar17 = false;
      }
      else {
        bVar17 = true;
      }
      pSVar26 = (System_String_o *)0x0;
      if (bVar17) {
        pSVar26 = pSVar25;
      }
      pSVar25 = (*(uint64_t *)((char *)__this_00 + 0x78));
      pSVar13 = pSVar25->klass;
      cVar48 = (char)local_274;
      if (pSVar26 == (System_String_o *)0x0) {
        bVar47 = (TypeInfo_Map_MapScriptDefaultTiledMaterial->_2).typeHierarchyDepth;
        if (((pSVar13->_2).typeHierarchyDepth < bVar47) ||
           ((pSVar13->_2).typeHierarchy[(ulonglong)bVar47 - 1] !=
            (Il2CppClass *)TypeInfo_Map_MapScriptDefaultTiledMaterial)) goto label_1822c0b03;
        if (pSVar25 != (System_String_o *)0x0) {
          bVar47 = (TypeInfo_Map_MapScriptDefaultTiledMaterial->_2).typeHierarchyDepth;
          if (((pSVar25->klass->_2).typeHierarchyDepth < bVar47) ||
             ((pSVar25->klass->_2).typeHierarchy[(ulonglong)bVar47 - 1] !=
              (Il2CppClass *)TypeInfo_Map_MapScriptDefaultTiledMaterial)) {
            il2cpp_codegen_raise_invalid_cast_exception(pSVar25);
          }
        }
        if (cVar24 != '\0' || cVar48 != '\0') {
          if (cVar48 == '\0') {
            if (pSVar25 == (System_String_o *)0x0) {
              ThrowNullReferenceException();
            }
            fVar55 = *(float *)&(*(uint64_t *)((char *)pSVar25 + 0x20));
          }
          else {
            pSVar6 = (__this->fields)._tilingX;
            if (pSVar6 == (Settings_FloatSetting_o *)0x0) {
              ThrowNullReferenceException();
            }
            fVar55 = (pSVar6->fields)._value;
          }
          if (cVar24 == '\0') {
            if (pSVar25 == (System_String_o *)0x0) {
              ThrowNullReferenceException();
            }
            goto label_1822c0743;
          }
          pSVar6 = (__this->fields)._tilingY;
          if (pSVar6 == (Settings_FloatSetting_o *)0x0) {
            ThrowNullReferenceException();
          }
          if (pSVar25 == (System_String_o *)0x0) {
            ThrowNullReferenceException();
          }
          fVar54 = (pSVar6->fields)._value;
          goto label_1822c0749;
        }
      }
      else {
        bVar47 = (TypeInfo_Map_MapScriptLegacyMaterial->_2).typeHierarchyDepth;
        if (((pSVar13->_2).typeHierarchyDepth < bVar47) ||
           ((pSVar13->_2).typeHierarchy[(ulonglong)bVar47 - 1] !=
            (Il2CppClass *)TypeInfo_Map_MapScriptLegacyMaterial)) {
          il2cpp_codegen_raise_invalid_cast_exception(pSVar25);
        }
        if (cVar24 != '\0' || cVar48 != '\0') {
          if (cVar48 == '\0') {
            fVar55 = *(float *)&(*(uint64_t *)((char *)pSVar25 + 0x20));
          }
          else {
            pSVar6 = (__this->fields)._tilingX;
            if (pSVar6 == (Settings_FloatSetting_o *)0x0) {
              ThrowNullReferenceException();
            }
            fVar55 = (pSVar6->fields)._value;
          }
          if (cVar24 == '\0') {
label_1822c0743:
            fVar54 = *(float *)((longlong)&(*(uint64_t *)((char *)pSVar25 + 0x20)) + 4);
          }
          else {
            pSVar6 = (__this->fields)._tilingY;
            if (pSVar6 == (Settings_FloatSetting_o *)0x0) {
              ThrowNullReferenceException();
            }
            fVar54 = (pSVar6->fields)._value;
          }
label_1822c0749:
          *(float *)&(*(uint64_t *)((char *)pSVar25 + 0x20)) = fVar55;
          *(float *)((longlong)&(*(uint64_t *)((char *)pSVar25 + 0x20)) + 4) = fVar54;
        }
      }
    }
    iVar46 = 0;
    while( true ) {
      pSVar14 = (__this->fields)._componentNames;
      local_21c = iVar46;
      if (pSVar14 == (System_Collections_Generic_List_string__o *)0x0) {
        ThrowNullReferenceException();
      }
      if ((pSVar14->fields)._size <= iVar46) break;
      object = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel_c__DisplayClass103_0);
      System_Object___ctor
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
      if (object == (UI_MapEditorInspectPanel___c__DisplayClass103_0_o *)0x0) {
        ThrowNullReferenceException();
      }
      (object->fields).__4__this = __this;
      Il2CppCodeGenWriteBarrier(&(object->fields).__4__this,__this);
      pSVar14 = (__this->fields)._componentNames;
      if (pSVar14 == (System_Collections_Generic_List_string__o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar25 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                          ((System_Collections_Generic_List_object__o *)pSVar14,iVar46,
                           (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_string_get_Item);
      (object->fields).componentName = pSVar25;
      Il2CppCodeGenWriteBarrier(&(object->fields).componentName,pSVar25);
      __this_01 = (__this->fields)._components;
      if (__this_01 == (System_Collections_Generic_List_Dictionary_string__BaseSetting___o *)0x0) {
        ThrowNullReferenceException();
      }
      settings = (System_Collections_Generic_Dictionary_string__BaseSetting__o *)
                 System_Collections_Generic_List_object___System_Collections_IList_get_Item
                           ((System_Collections_Generic_List_object__o *)__this_01,iVar46,
                            (MethodInfo_92B830 *)
                            MethodInfo_System_Collections_Generic_List_Dictionary_string_BaseSetting_get_Item)
      ;
      source = UI_MapEditorInspectPanel__SerializeComponentFields(__this,settings,(MethodInfo *)0x0);
      __this_02 = (System_Collections_Generic_Dictionary_object__object__o *)
                  (__this->fields)._syncedComponentFields;
      if (__this_02 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar17 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                         (__this_02,(Il2CppObject *)(object->fields).componentName,
                          (Il2CppObject **)&(object->fields).syncedFields,
                          (MethodInfo_14769C0 *)
                          MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_string_TryGetValue
                         );
      if (!bVar17) {
        __this_07 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_string);
        System_Collections_Generic_Dictionary_object__object____ctor
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_07,
                   (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
        (object->fields).syncedFields = __this_07;
        Il2CppCodeGenWriteBarrier(&(object->fields).syncedFields,__this_07);
      }
      pSVar36 = (System_Predicate_T__o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_KeyValuePair_string_string_bool)
      ;
      System_Predicate_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo____ctor
                (pSVar36,(Il2CppObject *)object,
                 (intptr_t)MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass103_0_OnChange_b__0,
                 (MethodInfo_B61280 *)0x0);
      local_178[0] = System_Linq_Enumerable__Where_RoleSpriteDefinition_
                               ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                                (System_Func_TSource__bool__o *)pSVar36,
                                (MethodInfo_6CA8B0 *)
                                MethodInfo_System_Linq_Enumerable_Where_KeyValuePair_string_string);
      if ((TypeInfo_UI_MapEditorInspectPanel_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel_c);
      }
      __this_08 = TypeInfo_UI_MapEditorInspectPanel_c->static_fields->__9__103_1;
      if (__this_08 == (System_Func_KeyValuePair_string__string___string__o *)0x0) {
        if ((TypeInfo_UI_MapEditorInspectPanel_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel_c);
        }
        pIVar15 = (Il2CppObject *)TypeInfo_UI_MapEditorInspectPanel_c->static_fields->__9;
        __this_08 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Func_KeyValuePair_string_string_string);
        System_Func_KeyValuePair_object__object___object____ctor
                  ((System_Converter_AccelStructAdapter_InstanceIDs__int__o *)__this_08,pIVar15,
                   (intptr_t)MethodInfo_UI_MapEditorInspectPanel_c_OnChange_b__103_1,(MethodInfo_13859D0 *)0x0
                  );
        TypeInfo_UI_MapEditorInspectPanel_c->static_fields->__9__103_1 = __this_08;
        Il2CppCodeGenWriteBarrier(&TypeInfo_UI_MapEditorInspectPanel_c->static_fields->__9__103_1,__this_08);
      }
      if ((TypeInfo_UI_MapEditorInspectPanel_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel_c);
      }
      __this_09 = TypeInfo_UI_MapEditorInspectPanel_c->static_fields->__9__103_2;
      if (__this_09 == (System_Func_KeyValuePair_string__string___string__o *)0x0) {
        if ((TypeInfo_UI_MapEditorInspectPanel_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel_c);
        }
        pIVar15 = (Il2CppObject *)TypeInfo_UI_MapEditorInspectPanel_c->static_fields->__9;
        __this_09 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Func_KeyValuePair_string_string_string);
        System_Func_KeyValuePair_object__object___object____ctor
                  ((System_Converter_AccelStructAdapter_InstanceIDs__int__o *)__this_09,pIVar15,
                   (intptr_t)MethodInfo_UI_MapEditorInspectPanel_c_OnChange_b__103_2,(MethodInfo_13859D0 *)0x0
                  );
        TypeInfo_UI_MapEditorInspectPanel_c->static_fields->__9__103_2 = __this_09;
        Il2CppCodeGenWriteBarrier(&TypeInfo_UI_MapEditorInspectPanel_c->static_fields->__9__103_2,__this_09);
      }
      changedFields =
           System_Linq_Enumerable__ToDictionary_ValueTuple_object__object___object__object_
                     (local_178[0],(System_Func_TSource__TKey__o *)__this_08,
                      (System_Func_TSource__TElement__o *)__this_09,
                      (MethodInfo_6C8670 *)
                      MethodInfo_System_Linq_Enumerable_ToDictionary_KeyValuePair_string_string_string_string)
      ;
      if (changedFields == (System_Collections_Generic_Dictionary_TKey__TElement__o *)0x0) {
        ThrowNullReferenceException();
      }
      iVar46 = System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___get_Count
                         ((System_Collections_Generic_Dictionary_TKey__TValue__o *)changedFields,
                          (MethodInfo_13CDEB0 *)
                          MethodInfo_System_Collections_Generic_Dictionary_string_string_get_Count);
      if (iVar46 == 0) {
label_1822c0e02:
        iVar46 = local_21c + 1;
      }
      else {
        __this_03 = *(System_Collections_Generic_List_T__o **)&(*(uint32_t *)((char *)__this_00 + 0x80));
        pSVar36 = (System_Predicate_T__o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Predicate_MapScriptComponent);
        System_Predicate_object____ctor
                  ((System_Predicate_object__o *)pSVar36,(Il2CppObject *)object,
                   (intptr_t)MethodInfo_UI_MapEditorInspectPanel_c__DisplayClass103_0_OnChange_b__3,
                   (MethodInfo_B61EB0 *)0x0);
        if (__this_03 == (System_Collections_Generic_List_T__o *)0x0) {
          ThrowNullReferenceException();
        }
        iVar46 = System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___FindIndex
                           (__this_03,pSVar36,
                            (MethodInfo_91D870 *)
                            MethodInfo_System_Collections_Generic_List_MapScriptComponent_FindIndex);
        if (iVar46 < 0) {
          pMVar37 = (Map_MapScriptComponent_o *)0x0;
        }
        else {
          pSVar40 = *(System_Collections_Generic_List_object__o **)&(*(uint32_t *)((char *)__this_00 + 0x80));
          if (pSVar40 == (System_Collections_Generic_List_object__o *)0x0) {
            ThrowNullReferenceException();
          }
          pMVar37 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                              (pSVar40,iVar46,
                               (MethodInfo_92B830 *)
                               MethodInfo_System_Collections_Generic_List_MapScriptComponent_get_Item);
        }
        pMVar37 = UI_MapEditorInspectPanel__MergeComponent
                            (__this,(object->fields).componentName,pMVar37,
                             (System_Collections_Generic_Dictionary_string__string__o *)changedFields,
                             (MethodInfo *)0x0);
        pSVar40 = *(System_Collections_Generic_List_object__o **)&(*(uint32_t *)((char *)__this_00 + 0x80));
        if (iVar46 < 0) {
          if (pSVar40 == (System_Collections_Generic_List_object__o *)0x0) {
            ThrowNullReferenceException();
          }
          il2cpp_runtime_helper_180012890(pSVar40,pMVar37,MethodInfo_System_Collections_Generic_List_MapScriptComponent_Add);
          local_res20 = '\x01';
          goto label_1822c0e02;
        }
        if (pSVar40 == (System_Collections_Generic_List_object__o *)0x0) {
          ThrowNullReferenceException();
        }
        System_Collections_Generic_List_object___set_Item
                  (pSVar40,iVar46,(Il2CppObject *)pMVar37,
                   (MethodInfo_950000 *)MethodInfo_System_Collections_Generic_List_MapScriptComponent_set_Item
                  );
        iVar46 = local_21c + 1;
      }
    }
    pUVar11 = (local_168->fields).GameObject;
    pSVar25 = (__this_00->fields).Asset;
    pMVar35 = (Map_MapScriptBaseMaterial_o *)(*(uint64_t *)((char *)__this_00 + 0x78));
    bVar17 = (__this_00->fields).Visible;
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    Map_MapLoader__SetMaterial(pUVar11,pSVar25,pMVar35,bVar17,true,(MethodInfo *)0x0);
    uVar45 = local_218;
    bVar47 = local_res20;
    uVar41 = local_25c;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_198,
             MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_Dispose);
  pSVar28 = local_200;
  pSVar27 = local_208;
  pSVar9 = local_210;
  uVar41 = local_25c;
  if (local_293 != 0) {
    pGVar8 = (__this->fields)._gameManager;
    if (pGVar8 == (GameManagers_MapEditorGameManager_o *)0x0) goto label_1822c13f8;
    GameManagers_MapEditorGameManager__TeardownTemporaryPhysicalParenting(pGVar8,(MethodInfo *)0x0);
    pGVar8 = (__this->fields)._gameManager;
    if (pGVar8 == (GameManagers_MapEditorGameManager_o *)0x0) goto label_1822c13f8;
    if ((pGVar8->fields).HierarchyTreeViewEnabled != false) {
      UI_MapEditorInspectPanel__PropagateTransformToDescendants
                (__this,pSVar9,pSVar28,pSVar27,(MethodInfo *)0x0);
    }
  }
  pSVar40 = (System_Collections_Generic_List_object__o *)
            il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_BaseCommand);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar40,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_BaseCommand_ctor);
  if (pSVar9 == (System_Collections_Generic_List_MapObject__o *)0x0) goto label_1822c13f8;
  if (0 < (pSVar9->fields)._size) {
    __this_10 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_MapEditor_TransformPositionCommand);
    MapEditor_TransformPositionCommand___ctor(__this_10,local_210,(MethodInfo *)0x0);
    if (pSVar40 == (System_Collections_Generic_List_object__o *)0x0) goto label_1822c13f8;
    il2cpp_runtime_helper_180012890(pSVar40);
  }
  if (pSVar28 == (System_Collections_Generic_List_MapObject__o *)0x0) goto label_1822c13f8;
  if (0 < (pSVar28->fields)._size) {
    __this_11 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_MapEditor_TransformRotationCommand);
    MapEditor_TransformRotationCommand___ctor(__this_11,pSVar28,(MethodInfo *)0x0);
    if (pSVar40 == (System_Collections_Generic_List_object__o *)0x0) goto label_1822c13f8;
    il2cpp_runtime_helper_180012890(pSVar40);
  }
  pSVar9 = local_208;
  if (local_208 == (System_Collections_Generic_List_MapObject__o *)0x0) goto label_1822c13f8;
  if ((local_208->fields)._size < 1) {
    if (pSVar40 == (System_Collections_Generic_List_object__o *)0x0) goto label_1822c13f8;
  }
  else {
    __this_12 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_MapEditor_TransformScaleCommand);
    MapEditor_TransformScaleCommand___ctor(__this_12,pSVar9,(MethodInfo *)0x0);
    if (pSVar40 == (System_Collections_Generic_List_object__o *)0x0) goto label_1822c13f8;
    il2cpp_runtime_helper_180012890(pSVar40);
  }
  iVar2 = (pSVar40->fields)._size;
  if (iVar2 == 1) {
    pGVar8 = (__this->fields)._gameManager;
    __this_13 = (MapEditor_CompositeCommand_o *)
                System_Collections_Generic_List_object___System_Collections_IList_get_Item
                          (pSVar40,0,
                           (MethodInfo_92B830 *)
                           MethodInfo_System_Collections_Generic_List_BaseCommand_get_Item);
joined_r0x0001822c10fa:
    if (pGVar8 == (GameManagers_MapEditorGameManager_o *)0x0) goto label_1822c13f8;
    GameManagers_MapEditorGameManager__NewCommand
              (pGVar8,(MapEditor_BaseCommand_o *)__this_13,false,(MethodInfo *)0x0);
  }
  else if (1 < iVar2) {
    pGVar8 = (__this->fields)._gameManager;
    __this_13 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_MapEditor_CompositeCommand);
    MapEditor_CompositeCommand___ctor
              (__this_13,(System_Collections_Generic_List_BaseCommand__o *)pSVar40,(MethodInfo *)0x0);
    goto joined_r0x0001822c10fa;
  }
  UI_MapEditorInspectPanel__CaptureSyncedValues(__this,(MethodInfo *)0x0);
  pGVar8 = (__this->fields)._gameManager;
  if (pGVar8 == (GameManagers_MapEditorGameManager_o *)0x0) {
label_1822c13f8:
    ThrowNullReferenceException();
  }
  GameManagers_MapEditorGameManager__SyncGizmos(pGVar8,(MethodInfo *)0x0);
  if (bVar47 != '\0') {
    pUVar16 = (__this->fields)._menu;
    if (pUVar16 == (UI_MapEditorMenu_o *)0x0) goto label_1822c13f8;
    UI_MapEditorMenu__RebuildInspectorPreservingScroll(pUVar16,(__this->fields)._mapObjects,(MethodInfo *)0x0)
    ;
  }
  bVar47 = (byte)local_280 | (byte)uVar41;
  local_280 = CONCAT31(local_280._1_3_,bVar47);
  if (bVar47 != 0) {
    pUVar16 = (__this->fields)._menu;
    if ((pUVar16 == (UI_MapEditorMenu_o *)0x0) ||
       (__this_04 = (pUVar16->fields).HierarchyPanel, __this_04 == (UI_MapEditorHierarchyPanel_o *)0x0))
    goto label_1822c13f8;
    UI_MapEditorHierarchyPanel__Sync(__this_04,(MethodInfo *)0x0);
  }
  return;
}


// UI.MapEditorInspectPanel$$SerializeSetting
// il2cpp: System_String_o* UI_MapEditorInspectPanel__SerializeSetting (UI_MapEditorInspectPanel_o* __this, Settings_BaseSetting_o* setting, const MethodInfo* method);
// 0x1822c3190

System_String_o *
UI_MapEditorInspectPanel__SerializeSetting
          (UI_MapEditorInspectPanel_o *__this,Settings_BaseSetting_o *setting,MethodInfo *method)

{
  byte bVar1;
  Settings_BaseSetting_c *pSVar2;
  void *pvVar3;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  Il2CppObject *pIVar4;
  System_String_o *pSVar5;
  System_String_array *pSVar6;
  Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_x509verify_result_to_string_t_o *pMVar7;
  System_Linq_IOrderedEnumerable_TSource__o *source_00;
  System_Collections_Generic_IEnumerable_TResult__o *source_01;
  System_String_o **targetAddress;
  float local_res10 [4];
  int32_t local_res20 [2];
  undefined8 local_28;
  float local_20 [2];
  
  if (Il2CppMethodInitialized_184347577 == '\0') {
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
              (&MethodInfo_UI_MapEditorInspectPanel_c_SerializeSetting_b__104_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorInspectPanel_c_SerializeSetting_b__104_1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorInspectPanel_c);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_Vector3Setting);
    il2cpp_codegen_initialize_runtime_metadata(&"false");
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    il2cpp_codegen_initialize_runtime_metadata(&"true");
    Il2CppMethodInitialized_184347577 = '\x01';
  }
  local_res10[0] = 0.0;
  local_res20[0] = 0;
  local_28 = 0;
  local_20[0] = 0.0;
  if (setting != (Settings_BaseSetting_o *)0x0) {
    pSVar2 = setting->klass;
    bVar1 = (TypeInfo_Settings_FloatSetting->_2).typeHierarchyDepth;
    if ((bVar1 <= (pSVar2->_2).typeHierarchyDepth) &&
       ((pSVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Settings_FloatSetting)) {
      bVar1 = (TypeInfo_Settings_FloatSetting->_2).typeHierarchyDepth;
      if ((bVar1 <= (pSVar2->_2).typeHierarchyDepth) &&
         ((pSVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Settings_FloatSetting))
      {
        local_res10[0] = *(float *)((longlong)&(*(uint64_t *)((char *)setting + 0x18)) + 4);
        pSVar5 = System_Single__ToString(local_res10,(MethodInfo *)0x0);
        return pSVar5;
      }
      il2cpp_codegen_raise_invalid_cast_exception(setting);
    }
    bVar1 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
    if ((bVar1 <= (pSVar2->_2).typeHierarchyDepth) &&
       ((pSVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Settings_IntSetting)) {
      bVar1 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
      if ((bVar1 <= (pSVar2->_2).typeHierarchyDepth) &&
         ((pSVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Settings_IntSetting)) {
        local_res20[0] = *(int32_t *)((longlong)&(*(uint64_t *)((char *)setting + 0x18)) + 4);
        pSVar5 = System_Int32__ToString(local_res20,(MethodInfo *)0x0);
        return pSVar5;
      }
      il2cpp_codegen_raise_invalid_cast_exception(setting);
    }
    bVar1 = (TypeInfo_Settings_BoolSetting->_2).typeHierarchyDepth;
    if ((bVar1 <= (pSVar2->_2).typeHierarchyDepth) &&
       ((pSVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Settings_BoolSetting)) {
      bVar1 = (TypeInfo_Settings_BoolSetting->_2).typeHierarchyDepth;
      if ((bVar1 <= (pSVar2->_2).typeHierarchyDepth) &&
         ((pSVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Settings_BoolSetting)) {
        pSVar5 = "false";
        if (*(char *)((longlong)&(*(uint64_t *)((char *)setting + 0x18)) + 1) != '\0') {
          pSVar5 = "true";
        }
        return pSVar5;
      }
      il2cpp_codegen_raise_invalid_cast_exception(setting);
    }
    bVar1 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
    if (((pSVar2->_2).typeHierarchyDepth < bVar1) ||
       ((pSVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_StringSetting)) {
      bVar1 = (TypeInfo_Settings_ColorSetting->_2).typeHierarchyDepth;
      if (((pSVar2->_2).typeHierarchyDepth < bVar1) ||
         ((pSVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_ColorSetting))
      {
        bVar1 = (TypeInfo_Settings_Vector3Setting->_2).typeHierarchyDepth;
        if (((pSVar2->_2).typeHierarchyDepth < bVar1) ||
           ((pSVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_Settings_Vector3Setting)) {
          bVar1 = (TypeInfo_Settings_HashSetSetting_int->_2).typeHierarchyDepth;
          if ((bVar1 <= (pSVar2->_2).typeHierarchyDepth) &&
             ((pSVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
              (Il2CppClass *)TypeInfo_Settings_HashSetSetting_int)) {
            bVar1 = (TypeInfo_Settings_HashSetSetting_int->_2).typeHierarchyDepth;
            if ((bVar1 <= (pSVar2->_2).typeHierarchyDepth) &&
               ((pSVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
                (Il2CppClass *)TypeInfo_Settings_HashSetSetting_int)) {
              source = (*(uint64_t *)((char *)setting + 0x20));
              if ((TypeInfo_UI_MapEditorInspectPanel_c->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel_c);
              }
              pSVar5 = "/";
              pMVar7 = (Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_x509verify_result_to_string_t_o
                        *)TypeInfo_UI_MapEditorInspectPanel_c->static_fields->__9__104_0;
              if (pMVar7 == (Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_x509verify_result_to_string_t_o
                             *)0x0) {
                if ((TypeInfo_UI_MapEditorInspectPanel_c->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel_c);
                }
                pIVar4 = (Il2CppObject *)TypeInfo_UI_MapEditorInspectPanel_c->static_fields->__9;
                pMVar7 = (Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_x509verify_result_to_string_t_o
                          *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_int_int);
                System_Func_int__object____ctor
                          (pMVar7,pIVar4,
                           (intptr_t)MethodInfo_UI_MapEditorInspectPanel_c_SerializeSetting_b__104_0,
                           (MethodInfo *)0x0);
                TypeInfo_UI_MapEditorInspectPanel_c->static_fields->__9__104_0 =
                     (System_Func_int__int__o *)pMVar7;
                Il2CppCodeGenWriteBarrier
                          (&TypeInfo_UI_MapEditorInspectPanel_c->static_fields->__9__104_0,pMVar7);
              }
              source_00 = System_Linq_Enumerable__OrderBy_object__int_
                                    (source,(System_Func_TSource__TKey__o *)pMVar7,
                                     (MethodInfo_6C12E0 *)MethodInfo_System_Linq_Enumerable_OrderBy_int_int);
              if ((TypeInfo_UI_MapEditorInspectPanel_c->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel_c);
              }
              pMVar7 = (Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_x509verify_result_to_string_t_o
                        *)TypeInfo_UI_MapEditorInspectPanel_c->static_fields->__9__104_1;
              if (pMVar7 == (Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_x509verify_result_to_string_t_o
                             *)0x0) {
                if ((TypeInfo_UI_MapEditorInspectPanel_c->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel_c);
                }
                pIVar4 = (Il2CppObject *)TypeInfo_UI_MapEditorInspectPanel_c->static_fields->__9;
                pMVar7 = (Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_x509verify_result_to_string_t_o
                          *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_int_string);
                System_Func_int__object____ctor
                          (pMVar7,pIVar4,
                           (intptr_t)MethodInfo_UI_MapEditorInspectPanel_c_SerializeSetting_b__104_1,
                           (MethodInfo *)0x0);
                TypeInfo_UI_MapEditorInspectPanel_c->static_fields->__9__104_1 =
                     (System_Func_int__string__o *)pMVar7;
                Il2CppCodeGenWriteBarrier
                          (&TypeInfo_UI_MapEditorInspectPanel_c->static_fields->__9__104_1,pMVar7);
              }
              source_01 = System_Linq_Enumerable__Select_Vector3__object_
                                    ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,
                                     (System_Func_TSource__TResult__o *)pMVar7,
                                     (MethodInfo_6C2170 *)MethodInfo_System_Linq_Enumerable_Select_int_string)
              ;
              pSVar6 = (System_String_array *)
                       System_Linq_Enumerable__ToArray_object_
                                 ((System_Collections_Generic_IEnumerable_TSource__o *)source_01,
                                  (MethodInfo_6C7D90 *)MethodInfo_System_Linq_Enumerable_ToArray_string);
              pSVar5 = System_String__Join(pSVar5,pSVar6,(MethodInfo *)0x0);
              return pSVar5;
            }
            il2cpp_codegen_raise_invalid_cast_exception(setting);
          }
          goto label_1822c3950;
        }
        bVar1 = (TypeInfo_Settings_Vector3Setting->_2).typeHierarchyDepth;
        if (((pSVar2->_2).typeHierarchyDepth < bVar1) ||
           ((pSVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_Settings_Vector3Setting)) {
          il2cpp_codegen_raise_invalid_cast_exception(setting);
        }
        local_28 = *(undefined8 *)((longlong)&(*(uint64_t *)((char *)setting + 0x20)) + 4);
        local_20[0] = *(float *)((longlong)&(*(uint64_t *)((char *)setting + 0x28)) + 4);
        pSVar6 = (System_String_array *)SZArrayNew(TypeInfo_string_array,3);
        pSVar5 = System_Single__ToString((float *)&local_28,(MethodInfo *)0x0);
        if (pSVar6 != (System_String_array *)0x0) {
          if ((int)pSVar6->max_length != 0) {
            pSVar6->m_Items[0] = pSVar5;
            Il2CppCodeGenWriteBarrier(pSVar6->m_Items,pSVar5);
            pSVar5 = System_Single__ToString((float *)((longlong)&local_28 + 4),(MethodInfo *)0x0);
            if (1 < (uint)pSVar6->max_length) {
              pSVar6->m_Items[1] = pSVar5;
              Il2CppCodeGenWriteBarrier(pSVar6->m_Items + 1,pSVar5);
              pSVar5 = System_Single__ToString(local_20,(MethodInfo *)0x0);
              if (2 < (uint)pSVar6->max_length) {
                pSVar6->m_Items[2] = pSVar5;
                targetAddress = pSVar6->m_Items + 2;
label_1822c3633:
                Il2CppCodeGenWriteBarrier(targetAddress,pSVar5);
                pSVar5 = System_String__Join("/",pSVar6,(MethodInfo *)0x0);
                return pSVar5;
              }
            }
          }
          goto label_1822c3999;
        }
      }
      else {
        bVar1 = (TypeInfo_Settings_ColorSetting->_2).typeHierarchyDepth;
        if (((pSVar2->_2).typeHierarchyDepth < bVar1) ||
           ((pSVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_ColorSetting)
           ) {
          il2cpp_codegen_raise_invalid_cast_exception(setting);
        }
        pvVar3 = (*(uint64_t *)((char *)setting + 0x20));
        pSVar6 = (System_String_array *)SZArrayNew(TypeInfo_string_array,4);
        if (pvVar3 != (void *)0x0) {
          pSVar5 = System_Int32__ToString((int32_t *)((longlong)pvVar3 + 0x10),(MethodInfo *)0x0);
          if (pSVar6 != (System_String_array *)0x0) {
            if ((int)pSVar6->max_length != 0) {
              pSVar6->m_Items[0] = pSVar5;
              Il2CppCodeGenWriteBarrier(pSVar6->m_Items,pSVar5);
              pSVar5 = System_Int32__ToString((int32_t *)((longlong)pvVar3 + 0x14),(MethodInfo *)0x0);
              if (1 < (uint)pSVar6->max_length) {
                pSVar6->m_Items[1] = pSVar5;
                Il2CppCodeGenWriteBarrier(pSVar6->m_Items + 1,pSVar5);
                pSVar5 = System_Int32__ToString((int32_t *)((longlong)pvVar3 + 0x18),(MethodInfo *)0x0);
                if (2 < (uint)pSVar6->max_length) {
                  pSVar6->m_Items[2] = pSVar5;
                  Il2CppCodeGenWriteBarrier(pSVar6->m_Items + 2,pSVar5);
                  pSVar5 = System_Int32__ToString((int32_t *)((longlong)pvVar3 + 0x1c),(MethodInfo *)0x0);
                  if (3 < (uint)pSVar6->max_length) {
                    pSVar6->m_Items[3] = pSVar5;
                    targetAddress = pSVar6->m_Items + 3;
                    goto label_1822c3633;
                  }
                }
              }
            }
label_1822c3999:
            ThrowIndexOutOfRangeException();
          }
        }
      }
    }
    else {
      bVar1 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
      if (((pSVar2->_2).typeHierarchyDepth < bVar1) ||
         ((pSVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_StringSetting))
      {
        il2cpp_codegen_raise_invalid_cast_exception(setting);
      }
      if ((*(uint64_t *)((char *)setting + 0x20)) != (System_String_o *)0x0) {
        pSVar5 = System_String__Replace((*(uint64_t *)((char *)setting + 0x20)),0x2c,0x20,(MethodInfo *)0x0);
        if (pSVar5 != (System_String_o *)0x0) {
          pSVar5 = System_String__Replace(pSVar5,0x3a,0x20,(MethodInfo *)0x0);
          if (pSVar5 != (System_String_o *)0x0) {
            pSVar5 = System_String__Replace(pSVar5,0x7c,0x20,(MethodInfo *)0x0);
            return pSVar5;
          }
        }
      }
    }
    ThrowNullReferenceException();
  }
label_1822c3950:
  return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
}


// UI.MapEditorInspectPanel$$PropagateTransformToDescendants
// il2cpp: void UI_MapEditorInspectPanel__PropagateTransformToDescendants (UI_MapEditorInspectPanel_o* __this, System_Collections_Generic_List_MapObject__o* posObjects, System_Collections_Generic_List_MapObject__o* rotObjects, System_Collections_Generic_List_MapObject__o* scaleObjects, const MethodInfo* method);
// 0x1822c1db0
// eh: try 0x1822c1fc0..0x1822c2a7b -> pad 0x18333fdb0 (+8 call sites) catch Il2CppExceptionWrapper
// asm: 97 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822c1fbe: nop 
// asm:   0x1822c201e: mov rdx, qword ptr [rip + 0x1dc94a3]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_Dispose
// asm:   0x1822c2025: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1822c202a: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1822c202f: mov rcx, qword ptr [rsp + 0x20]
// asm:   0x1822c2034: test rcx, rcx
// asm:   0x1822c2037: jne 0x1822c2a01
// asm:   0x1822c203d: mov rdi, qword ptr [rsp + 0x30]
// asm:   0x1822c2042: mov rsi, qword ptr [rsp + 0x220]
// asm:   0x1822c20ee: mov rdx, qword ptr [rip + 0x1dc93d3]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_Dispose
// asm:   0x1822c20f5: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1822c20fa: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1822c20ff: mov rcx, qword ptr [rsp + 0x20]
// asm:   0x1822c2104: test rcx, rcx
// asm:   0x1822c2107: jne 0x1822c2a17
// asm:   0x1822c210d: mov rdi, qword ptr [rsp + 0x30]
// asm:   0x1822c21be: mov rdx, qword ptr [rip + 0x1dc9303]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_Dispose
// asm:   0x1822c21c5: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1822c21ca: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1822c21cf: mov rcx, qword ptr [rsp + 0x20]
// asm:   0x1822c21d4: test rcx, rcx
// asm:   0x1822c21d7: jne 0x1822c2a2d
// asm:   0x1822c21dd: mov rdi, qword ptr [rsp + 0x30]
// asm:   0x1822c228f: mov rdx, qword ptr [rip + 0x1dc5db2]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_Dispose
// asm:   0x1822c2296: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1822c229b: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1822c22a0: mov rcx, qword ptr [rsp + 0x20]
// asm:   0x1822c22a5: test rcx, rcx
// asm:   0x1822c22a8: jne 0x1822c2a33
// asm:   0x1822c22ae: mov rsi, qword ptr [rsp + 0x30]
// asm:   0x1822c259e: nop 
// asm:   0x1822c2996: mov rdx, qword ptr [rip + 0x1dc56ab]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_Dispose
// asm:   0x1822c299d: mov rcx, qword ptr [rsp + 0x98]
// asm:   0x1822c29a5: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1822c29aa: mov rcx, qword ptr [rsp + 0x90]
// asm:   0x1822c29b2: test rcx, rcx
// asm:   0x1822c29b5: jne 0x1822c2a7b
// asm:   0x1822c2a01: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1822c2a17: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1822c2a2d: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1822c2a33: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1822c2a7b: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183335570: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183335575: push rbp
// asm:   0x183335576: sub rsp, 0x20
// asm:   0x18333557a: mov rbp, rdx
// asm:   0x18333557d: mov rax, qword ptr [rbp + 0xd8]
// asm:   0x183335584: mov rcx, qword ptr [rax]
// asm:   0x183335587: mov qword ptr [rbp + 0x20], rcx
// asm:   0x18333558b: movabs rax, 0
// asm:   0x183335595: add rsp, 0x20
// asm:   0x183335599: pop rbp
// asm:   0x18333559a: ret 
// asm:   0x18333b500: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333b505: push rbp
// asm:   0x18333b506: sub rsp, 0x20
// asm:   0x18333b50a: mov rbp, rdx
// asm:   0x18333b50d: mov rax, qword ptr [rbp + 0xe0]
// asm:   0x18333b514: mov rcx, qword ptr [rax]
// asm:   0x18333b517: mov qword ptr [rbp + 0x20], rcx
// asm:   0x18333b51b: movabs rax, 0
// asm:   0x18333b525: add rsp, 0x20
// asm:   0x18333b529: pop rbp
// asm:   0x18333b52a: ret 
// asm:   0x18333fdb0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333fdb5: push rbp
// asm:   0x18333fdb6: sub rsp, 0x20
// asm:   0x18333fdba: mov rbp, rdx
// asm:   0x18333fdbd: mov rax, qword ptr [rbp + 0xd0]
// asm:   0x18333fdc4: mov rcx, qword ptr [rax]
// asm:   0x18333fdc7: mov qword ptr [rbp + 0x20], rcx
// asm:   0x18333fdcb: movabs rax, 0
// asm:   0x18333fdd5: add rsp, 0x20
// asm:   0x18333fdd9: pop rbp
// asm:   0x18333fdda: ret 
// asm:   0x18333fde0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333fde5: push rbp
// asm:   0x18333fde6: sub rsp, 0x20
// asm:   0x18333fdea: mov rbp, rdx
// asm:   0x18333fded: mov rax, qword ptr [rbp + 0xe8]
// asm:   0x18333fdf4: mov rcx, qword ptr [rax]
// asm:   0x18333fdf7: mov qword ptr [rbp + 0x20], rcx
// asm:   0x18333fdfb: movabs rax, 0
// asm:   0x18333fe05: add rsp, 0x20
// asm:   0x18333fe09: pop rbp
// asm:   0x18333fe0a: ret 
// asm:   0x18333fe10: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333fe15: push rbp
// asm:   0x18333fe16: sub rsp, 0x20
// asm:   0x18333fe1a: mov rbp, rdx
// asm:   0x18333fe1d: mov rax, qword ptr [rbp + 0xf0]
// asm:   0x18333fe24: mov rcx, qword ptr [rax]
// asm:   0x18333fe27: mov qword ptr [rbp + 0x90], rcx
// asm:   0x18333fe2e: movabs rax, 0
// asm:   0x18333fe38: add rsp, 0x20
// asm:   0x18333fe3c: pop rbp
// asm:   0x18333fe3d: ret 

void UI_MapEditorInspectPanel__PropagateTransformToDescendants
               (UI_MapEditorInspectPanel_o *__this,System_Collections_Generic_List_MapObject__o *posObjects,
               System_Collections_Generic_List_MapObject__o *rotObjects,
               System_Collections_Generic_List_MapObject__o *scaleObjects,MethodInfo *method)

{
  undefined8 uVar1;
  undefined8 uVar2;
  Il2CppObject *pIVar3;
  System_Collections_Generic_Dictionary_int__ulong__o *pSVar4;
  int32_t key;
  bool bVar5;
  System_Collections_Generic_HashSet_int__o *pSVar6;
  System_Collections_Generic_HashSet_int__o *__this_00;
  Newtonsoft_Json_Serialization_ObjectConstructor_T__o *pNVar7;
  System_Collections_Generic_IEnumerable_TResult__o *pSVar8;
  System_Collections_Generic_HashSet_int__o *__this_01;
  System_Collections_Generic_HashSet_int__o *__this_02;
  uint64_t uVar9;
  UnityEngine_Transform_o *__this_03;
  UnityEngine_Vector3_o *pUVar10;
  UnityEngine_Quaternion_o *pUVar11;
  Unity_Mathematics_float3_o *pUVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 local_1e8 [16];
  System_Collections_Generic_HashSet_int__o *local_1d8;
  System_Collections_Generic_List_Enumerator_object__o local_1d0;
  System_Collections_Generic_List_Enumerator_T__o local_1b8;
  System_Collections_Generic_List_Enumerator_object__o local_1a0;
  UnityEngine_Vector3_o local_188;
  undefined8 local_178;
  System_Collections_Generic_List_Enumerator_object__o *local_170;
  Unity_Mathematics_float3_Fields local_168;
  Unity_Mathematics_float3_Fields local_158;
  UnityEngine_Quaternion_Fields local_148 [3];
  UnityEngine_Vector3_o local_110;
  UnityEngine_Vector3_o local_100;
  UnityEngine_Vector3_o local_f0;
  UnityEngine_Vector3_o local_e0;
  UnityEngine_Vector3_o local_d0;
  UnityEngine_Vector3_o local_c0;
  Unity_Mathematics_float3_o local_b0 [10];
  
  if (Il2CppMethodInitialized_184347578 == '\0') {
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
              (&MethodInfo_System_Collections_Generic_HashSet_int_ctor_40dc988);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_MapObject_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapObject_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorInspectPanel_c_PropagateTransformToDescendants_b__105_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorInspectPanel_c_PropagateTransformToDescendants_b__105_1);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorInspectPanel_c_PropagateTransformToDescendants_b__105_2);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorInspectPanel_c);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_184347578 = '\x01';
  }
  local_1d0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_1d0.fields._index = 0;
  local_1d0.fields._version = 0;
  local_1d0.fields._current = (Il2CppObject *)0x0;
  local_1a0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_1a0.fields._index = 0;
  local_1a0.fields._version = 0;
  local_1a0.fields._current = (Il2CppObject *)0x0;
  local_148[0].x = 0.0;
  local_148[0].y = 0.0;
  local_148[0].z = 0.0;
  local_148[0].w = 0.0;
  pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
  System_Collections_Generic_HashSet_int____ctor
            (pSVar6,(MethodInfo_176CDF0 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor);
  if (posObjects != (System_Collections_Generic_List_MapObject__o *)0x0) {
    local_1d8 = pSVar6;
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              (&local_1b8,(System_Collections_Generic_List_T__o *)posObjects,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_MapObject_GetEnumerator);
    local_1d0.fields._list = local_1b8.fields._list;
    local_1d0.fields._index = local_1b8.fields._index;
    local_1d0.fields._version = local_1b8.fields._version;
    local_1d0.fields._current = local_1b8.fields._current;
    local_1e8._0_4_ = 0.0;
    local_1e8._4_4_ = 0.0;
    local_1e8._8_8_ = &local_1d0;
    while( true ) {
      bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (&local_1d0,
                         (MethodInfo_153A2A0 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_MoveNext);
      if (!bVar5) break;
      if (local_1d0.fields._current == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      if (local_1d0.fields._current[2].klass == (Il2CppClass *)0x0) {
        ThrowNullReferenceException();
      }
      if (pSVar6 == (System_Collections_Generic_HashSet_int__o *)0x0) {
        ThrowNullReferenceException();
      }
      System_Collections_Generic_HashSet_int___Add
                (pSVar6,*(int32_t *)&((local_1d0.fields._current[2].klass)->_1).byval_arg.data,
                 (MethodInfo_1757D20 *)MethodInfo_System_Collections_Generic_HashSet_int_Add);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_1d0,
               MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_Dispose);
    if (rotObjects != (System_Collections_Generic_List_MapObject__o *)0x0) {
      System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                (&local_1b8,(System_Collections_Generic_List_T__o *)rotObjects,
                 (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_MapObject_GetEnumerator);
      local_1d0.fields._list = local_1b8.fields._list;
      local_1d0.fields._index = local_1b8.fields._index;
      local_1d0.fields._version = local_1b8.fields._version;
      local_1d0.fields._current = local_1b8.fields._current;
      local_1e8._0_4_ = 0.0;
      local_1e8._4_4_ = 0.0;
      local_1e8._8_8_ = &local_1d0;
      while( true ) {
        bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (&local_1d0,
                           (MethodInfo_153A2A0 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_MoveNext);
        if (!bVar5) break;
        if (local_1d0.fields._current == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        if (local_1d0.fields._current[2].klass == (Il2CppClass *)0x0) {
          ThrowNullReferenceException();
        }
        if (pSVar6 == (System_Collections_Generic_HashSet_int__o *)0x0) {
          ThrowNullReferenceException();
        }
        System_Collections_Generic_HashSet_int___Add
                  (pSVar6,*(int32_t *)&((local_1d0.fields._current[2].klass)->_1).byval_arg.data,
                   (MethodInfo_1757D20 *)MethodInfo_System_Collections_Generic_HashSet_int_Add);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_1d0,
                 MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_Dispose);
      if (scaleObjects != (System_Collections_Generic_List_MapObject__o *)0x0) {
        System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                  (&local_1b8,(System_Collections_Generic_List_T__o *)scaleObjects,
                   (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_MapObject_GetEnumerator);
        local_1d0.fields._list = local_1b8.fields._list;
        local_1d0.fields._index = local_1b8.fields._index;
        local_1d0.fields._version = local_1b8.fields._version;
        local_1d0.fields._current = local_1b8.fields._current;
        local_1e8._0_4_ = 0.0;
        local_1e8._4_4_ = 0.0;
        local_1e8._8_8_ = &local_1d0;
        while( true ) {
          bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (&local_1d0,
                             (MethodInfo_153A2A0 *)
                             MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_MoveNext);
          if (!bVar5) break;
          if (local_1d0.fields._current == (Il2CppObject *)0x0) {
            ThrowNullReferenceException();
          }
          if (local_1d0.fields._current[2].klass == (Il2CppClass *)0x0) {
            ThrowNullReferenceException();
          }
          if (pSVar6 == (System_Collections_Generic_HashSet_int__o *)0x0) {
            ThrowNullReferenceException();
          }
          System_Collections_Generic_HashSet_int___Add
                    (pSVar6,*(int32_t *)&((local_1d0.fields._current[2].klass)->_1).byval_arg.data,
                     (MethodInfo_1757D20 *)MethodInfo_System_Collections_Generic_HashSet_int_Add);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_1d0,
                   MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_Dispose);
        __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
        System_Collections_Generic_HashSet_int____ctor
                  (__this_00,(MethodInfo_176CDF0 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor);
        if (pSVar6 != (System_Collections_Generic_HashSet_int__o *)0x0) {
          local_1d8 = __this_00;
          System_Collections_Generic_HashSet_uint___GetEnumerator
                    ((System_Collections_Generic_HashSet_Enumerator_T__o *)&local_1b8,
                     (System_Collections_Generic_HashSet_uint__o *)pSVar6,
                     (MethodInfo_175C240 *)MethodInfo_System_Collections_Generic_HashSet_int_GetEnumerator);
          local_1a0.fields._list = local_1b8.fields._list;
          local_1a0.fields._index = local_1b8.fields._index;
          local_1a0.fields._version = local_1b8.fields._version;
          local_1a0.fields._current = local_1b8.fields._current;
          local_1e8._0_4_ = 0.0;
          local_1e8._4_4_ = 0.0;
          local_1e8._8_8_ = &local_1a0;
          while( true ) {
            bVar5 = System_Collections_Generic_HashSet_Enumerator_uint___MoveNext
                              ((System_Collections_Generic_HashSet_Enumerator_T__o *)&local_1a0,
                               (MethodInfo_1537E90 *)
                               MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_MoveNext);
            if (!bVar5) break;
            UI_MapEditorInspectPanel__CollectDescendantIds
                      (__this,(int32_t)local_1a0.fields._current,__this_00,(MethodInfo *)0x0);
          }
          System_Collections_Generic_HashSet_Enumerator_int___Dispose
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_1a0,
                     MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_Dispose);
          if ((TypeInfo_UI_MapEditorInspectPanel_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel_c);
          }
          pNVar7 = (Newtonsoft_Json_Serialization_ObjectConstructor_T__o *)
                   TypeInfo_UI_MapEditorInspectPanel_c->static_fields->__9__105_0;
          if (pNVar7 == (Newtonsoft_Json_Serialization_ObjectConstructor_T__o *)0x0) {
            if ((TypeInfo_UI_MapEditorInspectPanel_c->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel_c);
            }
            pIVar3 = (Il2CppObject *)TypeInfo_UI_MapEditorInspectPanel_c->static_fields->__9;
            pNVar7 = (Newtonsoft_Json_Serialization_ObjectConstructor_T__o *)
                     il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_MapObject_int);
            System_Func_object__int____ctor
                      (pNVar7,pIVar3,
                       (intptr_t)
                       MethodInfo_UI_MapEditorInspectPanel_c_PropagateTransformToDescendants_b__105_0,
                       (MethodInfo_AF4D50 *)0x0);
            TypeInfo_UI_MapEditorInspectPanel_c->static_fields->__9__105_0 =
                 (System_Func_MapObject__int__o *)pNVar7;
            Il2CppCodeGenWriteBarrier(&TypeInfo_UI_MapEditorInspectPanel_c->static_fields->__9__105_0,pNVar7);
          }
          pSVar8 = System_Linq_Enumerable__Select_Vector3__object_
                             ((System_Collections_Generic_IEnumerable_TSource__o *)posObjects,
                              (System_Func_TSource__TResult__o *)pNVar7,
                              (MethodInfo_6C2170 *)MethodInfo_System_Linq_Enumerable_Select_MapObject_int);
          pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
          local_1d8 = pSVar6;
          System_Collections_Generic_HashSet_int____ctor_176c3b0
                    (pSVar6,(System_Collections_Generic_IEnumerable_T__o *)pSVar8,
                     (MethodInfo_176C3B0 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor_40dc988);
          if ((TypeInfo_UI_MapEditorInspectPanel_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel_c);
          }
          pNVar7 = (Newtonsoft_Json_Serialization_ObjectConstructor_T__o *)
                   TypeInfo_UI_MapEditorInspectPanel_c->static_fields->__9__105_1;
          if (pNVar7 == (Newtonsoft_Json_Serialization_ObjectConstructor_T__o *)0x0) {
            if ((TypeInfo_UI_MapEditorInspectPanel_c->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel_c);
            }
            pIVar3 = (Il2CppObject *)TypeInfo_UI_MapEditorInspectPanel_c->static_fields->__9;
            pNVar7 = (Newtonsoft_Json_Serialization_ObjectConstructor_T__o *)
                     il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_MapObject_int);
            System_Func_object__int____ctor
                      (pNVar7,pIVar3,
                       (intptr_t)
                       MethodInfo_UI_MapEditorInspectPanel_c_PropagateTransformToDescendants_b__105_1,
                       (MethodInfo_AF4D50 *)0x0);
            TypeInfo_UI_MapEditorInspectPanel_c->static_fields->__9__105_1 =
                 (System_Func_MapObject__int__o *)pNVar7;
            Il2CppCodeGenWriteBarrier(&TypeInfo_UI_MapEditorInspectPanel_c->static_fields->__9__105_1,pNVar7);
          }
          pSVar8 = System_Linq_Enumerable__Select_Vector3__object_
                             ((System_Collections_Generic_IEnumerable_TSource__o *)rotObjects,
                              (System_Func_TSource__TResult__o *)pNVar7,
                              (MethodInfo_6C2170 *)MethodInfo_System_Linq_Enumerable_Select_MapObject_int);
          __this_01 = il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
          System_Collections_Generic_HashSet_int____ctor_176c3b0
                    (__this_01,(System_Collections_Generic_IEnumerable_T__o *)pSVar8,
                     (MethodInfo_176C3B0 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor_40dc988);
          if ((TypeInfo_UI_MapEditorInspectPanel_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel_c);
          }
          pNVar7 = (Newtonsoft_Json_Serialization_ObjectConstructor_T__o *)
                   TypeInfo_UI_MapEditorInspectPanel_c->static_fields->__9__105_2;
          if (pNVar7 == (Newtonsoft_Json_Serialization_ObjectConstructor_T__o *)0x0) {
            if ((TypeInfo_UI_MapEditorInspectPanel_c->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorInspectPanel_c);
            }
            pIVar3 = (Il2CppObject *)TypeInfo_UI_MapEditorInspectPanel_c->static_fields->__9;
            pNVar7 = (Newtonsoft_Json_Serialization_ObjectConstructor_T__o *)
                     il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_MapObject_int);
            System_Func_object__int____ctor
                      (pNVar7,pIVar3,
                       (intptr_t)
                       MethodInfo_UI_MapEditorInspectPanel_c_PropagateTransformToDescendants_b__105_2,
                       (MethodInfo_AF4D50 *)0x0);
            TypeInfo_UI_MapEditorInspectPanel_c->static_fields->__9__105_2 =
                 (System_Func_MapObject__int__o *)pNVar7;
            Il2CppCodeGenWriteBarrier(&TypeInfo_UI_MapEditorInspectPanel_c->static_fields->__9__105_2,pNVar7);
          }
          pSVar8 = System_Linq_Enumerable__Select_Vector3__object_
                             ((System_Collections_Generic_IEnumerable_TSource__o *)scaleObjects,
                              (System_Func_TSource__TResult__o *)pNVar7,
                              (MethodInfo_6C2170 *)MethodInfo_System_Linq_Enumerable_Select_MapObject_int);
          __this_02 = il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
          System_Collections_Generic_HashSet_int____ctor_176c3b0
                    (__this_02,(System_Collections_Generic_IEnumerable_T__o *)pSVar8,
                     (MethodInfo_176C3B0 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor_40dc988);
          if (__this_00 != (System_Collections_Generic_HashSet_int__o *)0x0) {
            System_Collections_Generic_HashSet_uint___GetEnumerator
                      ((System_Collections_Generic_HashSet_Enumerator_T__o *)&local_1b8,
                       (System_Collections_Generic_HashSet_uint__o *)__this_00,
                       (MethodInfo_175C240 *)MethodInfo_System_Collections_Generic_HashSet_int_GetEnumerator);
            local_1a0.fields._list = local_1b8.fields._list;
            local_1a0.fields._index = local_1b8.fields._index;
            local_1a0.fields._version = local_1b8.fields._version;
            local_1a0.fields._current = local_1b8.fields._current;
            local_178 = 0;
            local_170 = &local_1a0;
            while( true ) {
              do {
                bVar5 = System_Collections_Generic_HashSet_Enumerator_uint___MoveNext
                                  ((System_Collections_Generic_HashSet_Enumerator_T__o *)&local_1a0,
                                   (MethodInfo_1537E90 *)
                                   MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_MoveNext);
                if (!bVar5) {
                  System_Collections_Generic_HashSet_Enumerator_int___Dispose
                            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_1a0,
                             MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_Dispose);
                  return;
                }
                key = (int32_t)local_1a0.fields._current;
                if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
                }
                pSVar4 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                         TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
                if (pSVar4 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
                  ThrowNullReferenceException();
                }
                bVar5 = System_Collections_Generic_Dictionary_int__ulong___ContainsKey
                                  (pSVar4,key,
                                   (MethodInfo_1407110 *)
                                   MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey)
                ;
              } while (!bVar5);
              if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
              }
              pSVar4 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                       TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
              if (pSVar4 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
                ThrowNullReferenceException();
              }
              uVar9 = System_Collections_Generic_Dictionary_int__ulong___get_Item
                                (pSVar4,key,
                                 (MethodInfo_14156F0 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
              if (uVar9 == 0) {
                ThrowNullReferenceException();
              }
              if (*(UnityEngine_GameObject_o **)(uVar9 + 0x18) == (UnityEngine_GameObject_o *)0x0) break;
              __this_03 = UnityEngine_GameObject__get_transform
                                    (*(UnityEngine_GameObject_o **)(uVar9 + 0x18),(MethodInfo *)0x0);
              if (pSVar6 == (System_Collections_Generic_HashSet_int__o *)0x0) {
                ThrowNullReferenceException();
              }
              bVar5 = System_Collections_Generic_HashSet_int___Contains
                                ((System_Collections_Generic_HashSet_T__o *)pSVar6,key,
                                 (MethodInfo_1759C90 *)
                                 MethodInfo_System_Collections_Generic_HashSet_int_Contains);
              if (!bVar5) {
                if (__this_03 == (UnityEngine_Transform_o *)0x0) {
                  ThrowNullReferenceException();
                }
                pUVar10 = UnityEngine_Transform__get_localPosition(&local_110,__this_03,(MethodInfo *)0x0);
                if (*(Map_MapScriptBaseObject_o **)(uVar9 + 0x20) == (Map_MapScriptBaseObject_o *)0x0) {
                  ThrowNullReferenceException();
                }
                fVar15 = (pUVar10->fields).x;
                fVar13 = (pUVar10->fields).y;
                fVar14 = (pUVar10->fields).z;
                pUVar10 = Map_MapScriptBaseObject__GetPosition
                                    (&local_100,*(Map_MapScriptBaseObject_o **)(uVar9 + 0x20),
                                     (MethodInfo *)0x0);
                fVar15 = fVar15 - (pUVar10->fields).x;
                fVar13 = fVar13 - (pUVar10->fields).y;
                fVar14 = fVar14 - (pUVar10->fields).z;
                if (1e-08 < fVar14 * fVar14 + fVar13 * fVar13 + fVar15 * fVar15) {
                  System_Collections_Generic_HashSet_int___Add
                            (pSVar6,key,
                             (MethodInfo_1757D20 *)MethodInfo_System_Collections_Generic_HashSet_int_Add);
                  il2cpp_runtime_helper_180012890(posObjects,uVar9,MethodInfo_System_Collections_Generic_List_MapObject_Add);
                }
              }
              if (__this_01 == (System_Collections_Generic_HashSet_int__o *)0x0) {
                ThrowNullReferenceException();
              }
              bVar5 = System_Collections_Generic_HashSet_int___Contains
                                ((System_Collections_Generic_HashSet_T__o *)__this_01,key,
                                 (MethodInfo_1759C90 *)
                                 MethodInfo_System_Collections_Generic_HashSet_int_Contains);
              if (!bVar5) {
                if (__this_03 == (UnityEngine_Transform_o *)0x0) {
                  ThrowNullReferenceException();
                }
                pUVar11 = UnityEngine_Transform__get_localRotation
                                    ((UnityEngine_Quaternion_o *)&local_1b8,__this_03,(MethodInfo *)0x0);
                local_148[0].x = (pUVar11->fields).x;
                local_148[0].y = (pUVar11->fields).y;
                local_148[0].z = (pUVar11->fields).z;
                local_148[0].w = (pUVar11->fields).w;
                pUVar10 = UnityEngine_Quaternion__Internal_ToEulerRad
                                    (&local_f0,(UnityEngine_Quaternion_o *)local_148,(MethodInfo *)0x0);
                local_188.fields.x = (pUVar10->fields).x * 57.29578;
                local_188.fields.y = (pUVar10->fields).y * 57.29578;
                local_188.fields.z = (pUVar10->fields).z * 57.29578;
                pUVar10 = UnityEngine_Quaternion__Internal_MakePositive
                                    (&local_e0,&local_188,(MethodInfo *)0x0);
                if (*(Map_MapScriptBaseObject_o **)(uVar9 + 0x20) == (Map_MapScriptBaseObject_o *)0x0) {
                  ThrowNullReferenceException();
                }
                fVar15 = (pUVar10->fields).x;
                fVar13 = (pUVar10->fields).y;
                fVar14 = (pUVar10->fields).z;
                pUVar10 = Map_MapScriptBaseObject__GetRotation
                                    (&local_d0,*(Map_MapScriptBaseObject_o **)(uVar9 + 0x20),(MethodInfo *)0x0
                                    );
                fVar15 = fVar15 - (pUVar10->fields).x;
                fVar13 = fVar13 - (pUVar10->fields).y;
                fVar14 = fVar14 - (pUVar10->fields).z;
                if (1e-06 < fVar14 * fVar14 + fVar13 * fVar13 + fVar15 * fVar15) {
                  System_Collections_Generic_HashSet_int___Add
                            (__this_01,key,
                             (MethodInfo_1757D20 *)MethodInfo_System_Collections_Generic_HashSet_int_Add);
                  il2cpp_runtime_helper_180012890(rotObjects,uVar9,MethodInfo_System_Collections_Generic_List_MapObject_Add);
                }
              }
              if (__this_02 == (System_Collections_Generic_HashSet_int__o *)0x0) {
                ThrowNullReferenceException();
              }
              bVar5 = System_Collections_Generic_HashSet_int___Contains
                                ((System_Collections_Generic_HashSet_T__o *)__this_02,key,
                                 (MethodInfo_1759C90 *)
                                 MethodInfo_System_Collections_Generic_HashSet_int_Contains);
              if (!bVar5) {
                if (__this_03 == (UnityEngine_Transform_o *)0x0) {
                  ThrowNullReferenceException();
                }
                pUVar10 = UnityEngine_Transform__get_localScale(&local_c0,__this_03,(MethodInfo *)0x0);
                uVar1._0_4_ = (pUVar10->fields).x;
                uVar1._4_4_ = (pUVar10->fields).y;
                fVar15 = (pUVar10->fields).z;
                uVar2 = *(undefined8 *)(uVar9 + 0x28);
                fVar13 = *(float *)(uVar9 + 0x30);
                if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
                }
                local_168._0_8_ = uVar2;
                local_168.z = fVar13;
                local_158._0_8_ = uVar1;
                local_158.z = fVar15;
                pUVar12 = Unity_Mathematics_float3__op_Division
                                    (local_b0,(Unity_Mathematics_float3_o *)&local_158,
                                     (Unity_Mathematics_float3_o *)&local_168,(MethodInfo *)0x0);
                if (*(Map_MapScriptBaseObject_o **)(uVar9 + 0x20) == (Map_MapScriptBaseObject_o *)0x0) {
                  ThrowNullReferenceException();
                }
                fVar15 = (pUVar12->fields).x;
                fVar13 = (pUVar12->fields).y;
                fVar14 = (pUVar12->fields).z;
                pUVar10 = Map_MapScriptBaseObject__GetScale
                                    ((UnityEngine_Vector3_o *)local_1e8,
                                     *(Map_MapScriptBaseObject_o **)(uVar9 + 0x20),(MethodInfo *)0x0);
                pSVar6 = local_1d8;
                fVar15 = fVar15 - (pUVar10->fields).x;
                fVar13 = fVar13 - (pUVar10->fields).y;
                fVar14 = fVar14 - (pUVar10->fields).z;
                if (1e-08 < fVar14 * fVar14 + fVar13 * fVar13 + fVar15 * fVar15) {
                  System_Collections_Generic_HashSet_int___Add
                            (__this_02,key,
                             (MethodInfo_1757D20 *)MethodInfo_System_Collections_Generic_HashSet_int_Add);
                  il2cpp_runtime_helper_180012890(scaleObjects,uVar9,MethodInfo_System_Collections_Generic_List_MapObject_Add);
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
// 0x1822bc580
// eh: try 0x1822bc6e1..0x1822bc762 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822bc737: mov rdx, qword ptr [rip + 0x1dcb90a]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_Dispose
// asm:   0x1822bc73e: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1822bc743: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1822bc748: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1822bc74d: test rcx, rcx
// asm:   0x1822bc750: jne 0x1822bc762
// asm:   0x1822bc762: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

void UI_MapEditorInspectPanel__CollectDescendantIds
               (UI_MapEditorInspectPanel_o *__this,int32_t id,
               System_Collections_Generic_HashSet_int__o *result,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__ulong__o *pSVar1;
  int32_t id_00;
  bool bVar2;
  System_Collections_Generic_HashSet_uint__o *__this_00;
  undefined1 local_60 [16];
  Il2CppObject *local_50;
  System_Collections_Generic_HashSet_Enumerator_T__o local_48;
  
  if (Il2CppMethodInitialized_184347579 == '\0') {
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
    Il2CppMethodInitialized_184347579 = '\x01';
  }
  local_48.fields._set = (System_Collections_Generic_HashSet_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  pSVar1 = (System_Collections_Generic_Dictionary_int__ulong__o *)
           TypeInfo_Map_MapLoader->static_fields->IdToChildren;
  if (pSVar1 != (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary_int__ulong___ContainsKey
                      (pSVar1,id,
                       (MethodInfo_1407110 *)
                       MethodInfo_System_Collections_Generic_Dictionary_int_HashSet_int_ContainsKey);
    if (!bVar2) {
      return;
    }
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    pSVar1 = (System_Collections_Generic_Dictionary_int__ulong__o *)
             TypeInfo_Map_MapLoader->static_fields->IdToChildren;
    if ((pSVar1 != (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) &&
       (__this_00 = (System_Collections_Generic_HashSet_uint__o *)
                    System_Collections_Generic_Dictionary_int__ulong___get_Item
                              (pSVar1,id,
                               (MethodInfo_14156F0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_int_HashSet_int_get_Item),
       __this_00 != (System_Collections_Generic_HashSet_uint__o *)0x0)) {
      System_Collections_Generic_HashSet_uint___GetEnumerator
                ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_60,__this_00,
                 (MethodInfo_175C240 *)MethodInfo_System_Collections_Generic_HashSet_int_GetEnumerator);
      local_48.fields._set = (System_Collections_Generic_HashSet_T__o *)local_60._0_8_;
      local_48.fields._index = local_60._8_4_;
      local_48.fields._version = local_60._12_4_;
      local_48.fields._current = local_50;
      local_60._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
      local_60._8_8_ = &local_48;
      while( true ) {
        bVar2 = System_Collections_Generic_HashSet_Enumerator_uint___MoveNext
                          (&local_48,
                           (MethodInfo_1537E90 *)
                           MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_MoveNext);
        if (!bVar2) {
          System_Collections_Generic_HashSet_Enumerator_int___Dispose
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_48,
                     MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_Dispose);
          return;
        }
        if (result == (System_Collections_Generic_HashSet_int__o *)0x0) break;
        id_00 = (int32_t)local_48.fields._current;
        bVar2 = System_Collections_Generic_HashSet_int___Add
                          (result,(int32_t)local_48.fields._current,
                           (MethodInfo_1757D20 *)MethodInfo_System_Collections_Generic_HashSet_int_Add);
        if (bVar2) {
          UI_MapEditorInspectPanel__CollectDescendantIds(__this,id_00,result,(MethodInfo *)0x0);
        }
      }
      ThrowNullReferenceException();
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel$$.ctor
// il2cpp: void UI_MapEditorInspectPanel___ctor (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x1822ca190

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
  
  if (Il2CppMethodInitialized_18434757a == '\0') {
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
    Il2CppMethodInitialized_18434757a = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_MapObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_MapObject_ctor);
  (__this->fields)._mapObjects = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._mapObjects,__this_00);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this_01,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  (__this->fields)._mixedFields = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._mixedFields,__this_01);
  __this_02 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_string);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_02,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
  (__this->fields)._syncedSerialized = __this_02;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._syncedSerialized,__this_02);
  __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GameObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_03,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_GameObject_ctor);
  (__this->fields)._mixedNumericElements = __this_03;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._mixedNumericElements,__this_03);
  __this_04 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  Settings_IntSetting___ctor(__this_04,(MethodInfo *)0x0);
  (__this->fields)._parent = __this_04;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._parent,__this_04);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor(pSVar1,(MethodInfo *)0x0);
  (__this->fields)._name = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._name,pSVar1);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  Settings_BoolSetting___ctor(pSVar2,(MethodInfo *)0x0);
  (__this->fields)._active = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._active,pSVar2);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  Settings_BoolSetting___ctor(pSVar2,(MethodInfo *)0x0);
  (__this->fields)._static = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._static,pSVar2);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  Settings_BoolSetting___ctor(pSVar2,(MethodInfo *)0x0);
  (__this->fields)._networked = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._networked,pSVar2);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  Settings_BoolSetting___ctor(pSVar2,(MethodInfo *)0x0);
  (__this->fields)._visible = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._visible,pSVar2);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor(pSVar3,(MethodInfo *)0x0);
  (__this->fields)._positionX = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._positionX,pSVar3);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor(pSVar3,(MethodInfo *)0x0);
  (__this->fields)._positionY = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._positionY,pSVar3);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor(pSVar3,(MethodInfo *)0x0);
  (__this->fields)._positionZ = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._positionZ,pSVar3);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor(pSVar3,(MethodInfo *)0x0);
  (__this->fields)._rotationX = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._rotationX,pSVar3);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor(pSVar3,(MethodInfo *)0x0);
  (__this->fields)._rotationY = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._rotationY,pSVar3);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor(pSVar3,(MethodInfo *)0x0);
  (__this->fields)._rotationZ = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._rotationZ,pSVar3);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor(pSVar3,(MethodInfo *)0x0);
  (__this->fields)._scaleX = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._scaleX,pSVar3);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor(pSVar3,(MethodInfo *)0x0);
  (__this->fields)._scaleY = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._scaleY,pSVar3);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor(pSVar3,(MethodInfo *)0x0);
  (__this->fields)._scaleZ = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._scaleZ,pSVar3);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor(pSVar1,(MethodInfo *)0x0);
  (__this->fields)._collideMode = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._collideMode,pSVar1);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor(pSVar1,(MethodInfo *)0x0);
  (__this->fields)._collideWith = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._collideWith,pSVar1);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor(pSVar1,(MethodInfo *)0x0);
  (__this->fields)._physicsMaterial = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._physicsMaterial,pSVar1);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor(pSVar1,(MethodInfo *)0x0);
  (__this->fields)._shader = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._shader,pSVar1);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ColorSetting);
  Settings_ColorSetting___ctor(pSVar4,(MethodInfo *)0x0);
  (__this->fields)._color = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._color,pSVar4);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ColorSetting);
  Settings_ColorSetting___ctor(pSVar4,(MethodInfo *)0x0);
  (__this->fields)._reflectColor = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._reflectColor,pSVar4);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_1f27ee0(pSVar1,"Misc/None",0x7fffffff,(MethodInfo *)0x0);
  (__this->fields)._texture = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._texture,pSVar1);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor_1f12570(pSVar3,1.0,-3.4028235e+38,3.4028235e+38,(MethodInfo *)0x0);
  (__this->fields)._tilingX = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._tilingX,pSVar3);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor_1f12570(pSVar3,1.0,-3.4028235e+38,3.4028235e+38,(MethodInfo *)0x0);
  (__this->fields)._tilingY = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._tilingY,pSVar3);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor(pSVar3,(MethodInfo *)0x0);
  (__this->fields)._offsetX = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._offsetX,pSVar3);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor(pSVar3,(MethodInfo *)0x0);
  (__this->fields)._offsetY = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._offsetY,pSVar3);
  __this_05 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Dictionary_string_BaseSetting
                        );
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_05,
             (MethodInfo_92A240 *)
             MethodInfo_System_Collections_Generic_List_Dictionary_string_BaseSetting_ctor);
  (__this->fields)._components = __this_05;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._components,__this_05);
  __this_06 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_06,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  (__this->fields)._componentNames = __this_06;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._componentNames,__this_06);
  __this_07 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_string);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_07,
             (MethodInfo_1454140 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_string_ctor);
  (__this->fields)._syncedComponentFields = __this_07;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._syncedComponentFields,__this_07);
  UI_MapEditorScaledPanel___ctor((UI_SnapshotViewerMainPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorInspectPanel$$.cctor
// il2cpp: void UI_MapEditorInspectPanel___cctor (const MethodInfo* method);
// 0x1822ca100

void UI_MapEditorInspectPanel___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_18434757b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorInspectPanel);
    Il2CppMethodInitialized_18434757b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  TypeInfo_UI_MapEditorInspectPanel->static_fields->CollapsedSections = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_UI_MapEditorInspectPanel->static_fields->CollapsedSections,__this);
  return;
}


// UI.MapEditorInspectPanel$$<AddResizeHandle>b__76_0
// il2cpp: void UI_MapEditorInspectPanel___AddResizeHandle_b__76_0 (UI_MapEditorInspectPanel_o* __this, float w, const MethodInfo* method);
// 0x1822c9da0

void UI_MapEditorInspectPanel___AddResizeHandle_b__76_0
               (UI_MapEditorInspectPanel_o *__this,float w,MethodInfo *method)

{
  Settings_MapEditorSettings_o *pSVar1;
  Settings_FloatSetting_o *__this_00;
  UI_MapEditorMenu_o *__this_01;
  UI_MapEditorInspectPanel_o *pUVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_18434757c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_set_Value);
    Il2CppMethodInitialized_18434757c = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->MapEditorSettings;
  if ((pSVar1 != (Settings_MapEditorSettings_o *)0x0) &&
     (__this_00 = (pSVar1->fields).InspectorPanelWidth, __this_00 != (Settings_FloatSetting_o *)0x0)) {
    Settings_TypedSetting_float___set_Value
              ((Settings_TypedSetting_float__o *)__this_00,w,
               (MethodInfo_E8F490 *)MethodInfo_Settings_TypedSetting_float_set_Value);
    pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->MapEditorSettings;
    if (pSVar1 != (Settings_MapEditorSettings_o *)0x0) {
      (*(pSVar1->klass->vtable)._18_Save.methodPtr)(pSVar1,(pSVar1->klass->vtable)._18_Save.method);
      __this_01 = (__this->fields)._menu;
      if (__this_01 != (UI_MapEditorMenu_o *)0x0) {
        if (Il2CppMethodInitialized_1843475af == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
          Il2CppMethodInitialized_1843475af = '\x01';
        }
        pUVar2 = (__this_01->fields).InspectPanel;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar3 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar3) {
          pUVar2 = (__this_01->fields).InspectPanel;
          if (pUVar2 == (UI_MapEditorInspectPanel_o *)0x0) goto label_1822c9ec6;
          UI_MapEditorMenu__ShowInspector_22cd590(__this_01,(pUVar2->fields)._mapObjects,(MethodInfo *)0x0);
        }
        return;
      }
    }
  }
label_1822c9ec6:
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel$$<Show>b__81_30
// il2cpp: void UI_MapEditorInspectPanel___Show_b__81_30 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x1822c9f20

void
UI_MapEditorInspectPanel___Show_b__81_30(UI_MapEditorInspectPanel_o* __this, MethodInfo* method)

{
  UI_MapEditorInspectPanel__CopyAssetCSV(__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorInspectPanel$$<Show>b__81_31
// il2cpp: void UI_MapEditorInspectPanel___Show_b__81_31 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x1822bca40

void UI_MapEditorInspectPanel___Show_b__81_31(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  Map_MapScriptBaseObject_o *pMVar2;
  System_String_o *value;
  
  if (Il2CppMethodInitialized_18434755f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GUIUtility);
    Il2CppMethodInitialized_18434755f = '\x01';
  }
  pMVar1 = (__this->fields)._mapObject;
  if ((pMVar1 != (Map_MapObject_o *)0x0) &&
     (pMVar2 = (pMVar1->fields).ScriptObject, pMVar2 != (Map_MapScriptBaseObject_o *)0x0)) {
    value = System_Int32__ToString(&(pMVar2->fields).Id,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_GUIUtility->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_GUIUtility);
    }
    UnityEngine_GUIUtility__set_systemCopyBuffer(value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorInspectPanel$$<Show>b__81_32
// il2cpp: void UI_MapEditorInspectPanel___Show_b__81_32 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x1822c9f20

void UI_MapEditorInspectPanel___Show_b__81_32(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorInspectPanel__CopyAssetCSV(__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorInspectPanel$$<Show>b__81_0
// il2cpp: void UI_MapEditorInspectPanel___Show_b__81_0 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x1822c9ed0

void
UI_MapEditorInspectPanel___Show_b__81_0(UI_MapEditorInspectPanel_o* __this, MethodInfo* method)

{
  UI_MapEditorInspectPanel__OnChange(__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorInspectPanel$$<Show>b__81_1
// il2cpp: void UI_MapEditorInspectPanel___Show_b__81_1 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x1822c9ed0

void
UI_MapEditorInspectPanel___Show_b__81_1(UI_MapEditorInspectPanel_o* __this, MethodInfo* method)

{
  UI_MapEditorInspectPanel__OnChange(__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorInspectPanel$$<Show>b__81_2
// il2cpp: void UI_MapEditorInspectPanel___Show_b__81_2 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x1822c9ed0

void
UI_MapEditorInspectPanel___Show_b__81_2(UI_MapEditorInspectPanel_o* __this, MethodInfo* method)

{
  UI_MapEditorInspectPanel__OnChange(__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorInspectPanel$$<Show>b__81_3
// il2cpp: void UI_MapEditorInspectPanel___Show_b__81_3 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x1822c9ed0

void
UI_MapEditorInspectPanel___Show_b__81_3(UI_MapEditorInspectPanel_o* __this, MethodInfo* method)

{
  UI_MapEditorInspectPanel__OnChange(__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorInspectPanel$$<Show>b__81_4
// il2cpp: void UI_MapEditorInspectPanel___Show_b__81_4 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x1822c9ed0

void
UI_MapEditorInspectPanel___Show_b__81_4(UI_MapEditorInspectPanel_o* __this, MethodInfo* method)

{
  UI_MapEditorInspectPanel__OnChange(__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorInspectPanel$$<Show>b__81_5
// il2cpp: void UI_MapEditorInspectPanel___Show_b__81_5 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x1822c9ed0

void
UI_MapEditorInspectPanel___Show_b__81_5(UI_MapEditorInspectPanel_o* __this, MethodInfo* method)

{
  UI_MapEditorInspectPanel__OnChange(__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorInspectPanel$$<Show>b__81_6
// il2cpp: void UI_MapEditorInspectPanel___Show_b__81_6 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x1822c9ed0

void
UI_MapEditorInspectPanel___Show_b__81_6(UI_MapEditorInspectPanel_o* __this, MethodInfo* method)

{
  UI_MapEditorInspectPanel__OnChange(__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorInspectPanel$$<Show>b__81_7
// il2cpp: void UI_MapEditorInspectPanel___Show_b__81_7 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x1822c9ed0

void
UI_MapEditorInspectPanel___Show_b__81_7(UI_MapEditorInspectPanel_o* __this, MethodInfo* method)

{
  UI_MapEditorInspectPanel__OnChange(__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorInspectPanel$$<Show>b__81_8
// il2cpp: void UI_MapEditorInspectPanel___Show_b__81_8 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x1822c9ed0

void
UI_MapEditorInspectPanel___Show_b__81_8(UI_MapEditorInspectPanel_o* __this, MethodInfo* method)

{
  UI_MapEditorInspectPanel__OnChange(__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorInspectPanel$$<Show>b__81_9
// il2cpp: void UI_MapEditorInspectPanel___Show_b__81_9 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x1822c9ed0

void
UI_MapEditorInspectPanel___Show_b__81_9(UI_MapEditorInspectPanel_o* __this, MethodInfo* method)

{
  UI_MapEditorInspectPanel__OnChange(__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorInspectPanel$$<Show>b__81_10
// il2cpp: void UI_MapEditorInspectPanel___Show_b__81_10 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x1822c9ed0

void
UI_MapEditorInspectPanel___Show_b__81_10(UI_MapEditorInspectPanel_o* __this, MethodInfo* method)

{
  UI_MapEditorInspectPanel__OnChange(__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorInspectPanel$$<Show>b__81_11
// il2cpp: void UI_MapEditorInspectPanel___Show_b__81_11 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x1822c9ed0

void
UI_MapEditorInspectPanel___Show_b__81_11(UI_MapEditorInspectPanel_o* __this, MethodInfo* method)

{
  UI_MapEditorInspectPanel__OnChange(__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorInspectPanel$$<Show>b__81_12
// il2cpp: void UI_MapEditorInspectPanel___Show_b__81_12 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x1822c9ed0

void
UI_MapEditorInspectPanel___Show_b__81_12(UI_MapEditorInspectPanel_o* __this, MethodInfo* method)

{
  UI_MapEditorInspectPanel__OnChange(__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorInspectPanel$$<Show>b__81_13
// il2cpp: void UI_MapEditorInspectPanel___Show_b__81_13 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x1822c9ed0

void
UI_MapEditorInspectPanel___Show_b__81_13(UI_MapEditorInspectPanel_o* __this, MethodInfo* method)

{
  UI_MapEditorInspectPanel__OnChange(__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorInspectPanel$$<Show>b__81_14
// il2cpp: void UI_MapEditorInspectPanel___Show_b__81_14 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x1822c9ed0

void
UI_MapEditorInspectPanel___Show_b__81_14(UI_MapEditorInspectPanel_o* __this, MethodInfo* method)

{
  UI_MapEditorInspectPanel__OnChange(__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorInspectPanel$$<Show>b__81_15
// il2cpp: void UI_MapEditorInspectPanel___Show_b__81_15 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x1822c9ed0

void
UI_MapEditorInspectPanel___Show_b__81_15(UI_MapEditorInspectPanel_o* __this, MethodInfo* method)

{
  UI_MapEditorInspectPanel__OnChange(__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorInspectPanel$$<Show>b__81_16
// il2cpp: void UI_MapEditorInspectPanel___Show_b__81_16 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x1822c9ed0

void
UI_MapEditorInspectPanel___Show_b__81_16(UI_MapEditorInspectPanel_o* __this, MethodInfo* method)

{
  UI_MapEditorInspectPanel__OnChange(__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorInspectPanel$$<Show>b__81_17
// il2cpp: void UI_MapEditorInspectPanel___Show_b__81_17 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x1822c9ed0

void
UI_MapEditorInspectPanel___Show_b__81_17(UI_MapEditorInspectPanel_o* __this, MethodInfo* method)

{
  UI_MapEditorInspectPanel__OnChange(__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorInspectPanel$$<Show>b__81_18
// il2cpp: void UI_MapEditorInspectPanel___Show_b__81_18 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x1822c9ed0

void
UI_MapEditorInspectPanel___Show_b__81_18(UI_MapEditorInspectPanel_o* __this, MethodInfo* method)

{
  UI_MapEditorInspectPanel__OnChange(__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorInspectPanel$$<Show>b__81_24
// il2cpp: void UI_MapEditorInspectPanel___Show_b__81_24 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x1822c9ed0

void
UI_MapEditorInspectPanel___Show_b__81_24(UI_MapEditorInspectPanel_o* __this, MethodInfo* method)

{
  UI_MapEditorInspectPanel__OnChange(__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorInspectPanel$$<Show>b__81_25
// il2cpp: void UI_MapEditorInspectPanel___Show_b__81_25 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x1822c9ed0

void
UI_MapEditorInspectPanel___Show_b__81_25(UI_MapEditorInspectPanel_o* __this, MethodInfo* method)

{
  UI_MapEditorInspectPanel__OnChange(__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorInspectPanel$$<Show>b__81_26
// il2cpp: void UI_MapEditorInspectPanel___Show_b__81_26 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x1822c9ed0

void
UI_MapEditorInspectPanel___Show_b__81_26(UI_MapEditorInspectPanel_o* __this, MethodInfo* method)

{
  UI_MapEditorInspectPanel__OnChange(__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorInspectPanel$$<Show>b__81_27
// il2cpp: void UI_MapEditorInspectPanel___Show_b__81_27 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x1822c9ed0

void
UI_MapEditorInspectPanel___Show_b__81_27(UI_MapEditorInspectPanel_o* __this, MethodInfo* method)

{
  UI_MapEditorInspectPanel__OnChange(__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorInspectPanel$$<Show>b__81_28
// il2cpp: void UI_MapEditorInspectPanel___Show_b__81_28 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x1822c9ed0

void
UI_MapEditorInspectPanel___Show_b__81_28(UI_MapEditorInspectPanel_o* __this, MethodInfo* method)

{
  UI_MapEditorInspectPanel__OnChange(__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorInspectPanel$$<Show>b__81_33
// il2cpp: void UI_MapEditorInspectPanel___Show_b__81_33 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x1822c9ed0

void
UI_MapEditorInspectPanel___Show_b__81_33(UI_MapEditorInspectPanel_o* __this, MethodInfo* method)

{
  UI_MapEditorInspectPanel__OnChange(__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorInspectPanel$$<Show>b__81_34
// il2cpp: void UI_MapEditorInspectPanel___Show_b__81_34 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x1822c9f30

void UI_MapEditorInspectPanel___Show_b__81_34(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434757d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Texture");
    Il2CppMethodInitialized_18434757d = '\x01';
  }
  UI_MapEditorInspectPanel__OnButtonClick(__this,"Texture",(MethodInfo *)0x0);
  return;
}


// UI.MapEditorInspectPanel$$<Show>b__81_35
// il2cpp: void UI_MapEditorInspectPanel___Show_b__81_35 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x1822c9ed0

void
UI_MapEditorInspectPanel___Show_b__81_35(UI_MapEditorInspectPanel_o* __this, MethodInfo* method)

{
  UI_MapEditorInspectPanel__OnChange(__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorInspectPanel$$<Show>b__81_36
// il2cpp: void UI_MapEditorInspectPanel___Show_b__81_36 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x1822c9ed0

void
UI_MapEditorInspectPanel___Show_b__81_36(UI_MapEditorInspectPanel_o* __this, MethodInfo* method)

{
  UI_MapEditorInspectPanel__OnChange(__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorInspectPanel$$<Show>b__81_37
// il2cpp: void UI_MapEditorInspectPanel___Show_b__81_37 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x1822c9ed0

void
UI_MapEditorInspectPanel___Show_b__81_37(UI_MapEditorInspectPanel_o* __this, MethodInfo* method)

{
  UI_MapEditorInspectPanel__OnChange(__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorInspectPanel$$<Show>b__81_38
// il2cpp: void UI_MapEditorInspectPanel___Show_b__81_38 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x1822c9ed0

void
UI_MapEditorInspectPanel___Show_b__81_38(UI_MapEditorInspectPanel_o* __this, MethodInfo* method)

{
  UI_MapEditorInspectPanel__OnChange(__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorInspectPanel$$<Show>b__81_44
// il2cpp: void UI_MapEditorInspectPanel___Show_b__81_44 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x1822c9ed0

void
UI_MapEditorInspectPanel___Show_b__81_44(UI_MapEditorInspectPanel_o* __this, MethodInfo* method)

{
  UI_MapEditorInspectPanel__OnChange(__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorInspectPanel$$<Show>b__81_45
// il2cpp: void UI_MapEditorInspectPanel___Show_b__81_45 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x1822c9ed0

void UI_MapEditorInspectPanel___Show_b__81_45(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorInspectPanel__OnChange(__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorInspectPanel$$<Show>b__81_29
// il2cpp: void UI_MapEditorInspectPanel___Show_b__81_29 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x1822c9ee0

void UI_MapEditorInspectPanel___Show_b__81_29(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434757e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"AddComponent");
    Il2CppMethodInitialized_18434757e = '\x01';
  }
  UI_MapEditorInspectPanel__OnButtonClick(__this,"AddComponent",(MethodInfo *)0x0);
  return;
}


// UI.MapEditorInspectPanel$$<OnButtonClick>b__90_0
// il2cpp: void UI_MapEditorInspectPanel___OnButtonClick_b__90_0 (UI_MapEditorInspectPanel_o* __this, const MethodInfo* method);
// 0x1822be360

void UI_MapEditorInspectPanel___OnButtonClick_b__90_0(UI_MapEditorInspectPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorMenu_o *pUVar1;
  UI_MapEditorAddComponentPopup_o *pUVar2;
  Settings_StringSetting_o *pSVar3;
  System_String_o *component;
  GameManagers_MapEditorGameManager_o *pGVar4;
  System_Collections_Generic_List_Dictionary_string__BaseSetting___o *pSVar5;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  bool bVar6;
  System_Collections_Generic_List_string__o *pSVar7;
  System_Collections_Generic_Dictionary_string__BaseSetting__o *pSVar8;
  
  if (Il2CppMethodInitialized_18434756b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Dictionary_string_BaseSetting_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_18434756b = '\x01';
  }
  pUVar1 = (__this->fields)._menu;
  if ((((pUVar1 != (UI_MapEditorMenu_o *)0x0) &&
       (pUVar2 = (pUVar1->fields).AddComponentPopup, pUVar2 != (UI_MapEditorAddComponentPopup_o *)0x0)) &&
      (pSVar3 = (pUVar2->fields).FinishSetting, pSVar3 != (Settings_StringSetting_o *)0x0)) &&
     (pSVar7 = (__this->fields)._componentNames, pSVar7 != (System_Collections_Generic_List_string__o *)0x0))
  {
    component = (pSVar3->fields)._value;
    bVar6 = System_Collections_Generic_List_object___Contains
                      ((System_Collections_Generic_List_object__o *)pSVar7,(Il2CppObject *)component,
                       (MethodInfo_93FC70 *)MethodInfo_System_Collections_Generic_List_string_Contains);
    if (bVar6) {
label_1822be4b1:
      UI_MapEditorInspectPanel__OnChange(__this,(MethodInfo *)0x0);
      return;
    }
    pGVar4 = (__this->fields)._gameManager;
    if (pGVar4 != (GameManagers_MapEditorGameManager_o *)0x0) {
      pSVar5 = (__this->fields)._components;
      __this_00 = (pGVar4->fields).LogicEvaluator;
      pSVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
      System_Collections_Generic_List_object____ctor
                ((System_Collections_Generic_LowLevelList_T__o *)pSVar7,
                 (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
      if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
        pSVar8 = CustomLogic_CustomLogicEvaluator__GetComponentSettings
                           (__this_00,component,pSVar7,(MethodInfo *)0x0);
        if (pSVar5 != (System_Collections_Generic_List_Dictionary_string__BaseSetting___o *)0x0) {
          il2cpp_runtime_helper_180012890(pSVar5,pSVar8,
                        MethodInfo_System_Collections_Generic_List_Dictionary_string_BaseSetting_Add);
          pSVar7 = (__this->fields)._componentNames;
          if (pSVar7 != (System_Collections_Generic_List_string__o *)0x0) {
            il2cpp_runtime_helper_180012890(pSVar7,component,MethodInfo_System_Collections_Generic_List_string_Add);
            goto label_1822be4b1;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


