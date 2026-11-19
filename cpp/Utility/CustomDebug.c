// Type: Utility.CustomDebug
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Utility/CustomDebug.cs
// Prior real C# source: none
// --------------------------------

// Utility.CustomDebug.<DrawLineCoroutine>d__17$$.ctor
// il2cpp: void Utility_CustomDebug__DrawLineCoroutine_d__17___ctor (Utility_CustomDebug__DrawLineCoroutine_d__17_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5dde4a0

void Utility_CustomDebug__DrawLineCoroutine_d__17___ctor
               (Utility_CustomDebug__DrawLineCoroutine_d__17_o *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Utility.CustomDebug.<DrawLineCoroutine>d__17$$System.IDisposable.Dispose
// il2cpp: void Utility_CustomDebug__DrawLineCoroutine_d__17__System_IDisposable_Dispose (Utility_CustomDebug__DrawLineCoroutine_d__17_o* __this, const MethodInfo* method);
// 0x5dde560

void Utility_CustomDebug__DrawLineCoroutine_d__17__System_IDisposable_Dispose
               (Utility_CustomDebug__DrawLineCoroutine_d__17_o *__this,MethodInfo *method)

{
  return;
}


// Utility.CustomDebug.<DrawLineCoroutine>d__17$$MoveNext
// il2cpp: bool Utility_CustomDebug__DrawLineCoroutine_d__17__MoveNext (Utility_CustomDebug__DrawLineCoroutine_d__17_o* __this, const MethodInfo* method);
// 0x5dde570

bool Utility_CustomDebug__DrawLineCoroutine_d__17__MoveNext
               (Utility_CustomDebug__DrawLineCoroutine_d__17_o *__this,MethodInfo *method)

{
  UnityEngine_Color_o *pUVar1;
  float seconds;
  int iVar2;
  UnityEngine_Object_o *obj;
  UnityEngine_Color_Fields value;
  UnityEngine_GameObject_o *pUVar3;
  UnityEngine_LineRenderer_o *__this_00;
  UnityEngine_Shader_o *shader;
  UnityEngine_Material_o *__this_01;
  UnityEngine_WaitForSeconds_o *__this_02;
  
  if (Il2CppMethodInitialized_0754826b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_LineRenderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Material);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForSeconds);
    il2cpp_codegen_initialize_runtime_metadata(&"DebugLine");
    il2cpp_codegen_initialize_runtime_metadata(&"Sprites/Default");
    Il2CppMethodInitialized_0754826b = '\x01';
  }
  iVar2 = (__this->fields).__1__state;
  if (iVar2 == 0) {
    (__this->fields).__1__state = -1;
    pUVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
    UnityEngine_GameObject___ctor(pUVar3,"DebugLine",(MethodInfo *)0x0);
    (__this->fields)._lineObj_5__2 = pUVar3;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._lineObj_5__2);
    pUVar3 = (__this->fields)._lineObj_5__2;
    if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
      __this_00 = UnityEngine_GameObject__AddComponent_object_
                            (pUVar3,(MethodInfo_353B6A0 *)
                                    MethodInfo_UnityEngine_GameObject_AddComponent_LineRenderer);
      if (__this_00 != (UnityEngine_LineRenderer_o *)0x0) {
        UnityEngine_LineRenderer__set_positionCount(__this_00,2,(MethodInfo *)0x0);
        UnityEngine_LineRenderer__SetPosition
                  (__this_00,0,(UnityEngine_Vector3_o)(__this->fields).start.fields,(MethodInfo *)0x0);
        UnityEngine_LineRenderer__SetPosition
                  (__this_00,1,(UnityEngine_Vector3_o)(__this->fields).end.fields,(MethodInfo *)0x0);
        shader = UnityEngine_Shader__Find("Sprites/Default",(MethodInfo *)0x0);
        __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Material);
        UnityEngine_Material___ctor(__this_01,shader,(MethodInfo *)0x0);
        UnityEngine_Renderer__set_material((UnityEngine_Renderer_o *)__this_00,__this_01,(MethodInfo *)0x0);
        pUVar1 = &(__this->fields).color;
        value = pUVar1->fields;
        UnityEngine_LineRenderer__set_endColor
                  (__this_00,(UnityEngine_Color_o)pUVar1->fields,(MethodInfo *)0x0);
        UnityEngine_LineRenderer__set_startColor(__this_00,(UnityEngine_Color_o)value,(MethodInfo *)0x0);
        UnityEngine_LineRenderer__set_endWidth(__this_00,0.05,(MethodInfo *)0x0);
        UnityEngine_LineRenderer__set_startWidth(__this_00,0.05,(MethodInfo *)0x0);
        seconds = (__this->fields).duration;
        __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
        UnityEngine_WaitForSeconds___ctor(__this_02,seconds,(MethodInfo *)0x0);
        (__this->fields).__2__current = (Il2CppObject *)__this_02;
        Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
        (__this->fields).__1__state = 1;
        goto label_05dde7a9;
      }
    }
    ThrowNullReferenceException();
  }
  if (iVar2 == 1) {
    (__this->fields).__1__state = -1;
    obj = (UnityEngine_Object_o *)(__this->fields)._lineObj_5__2;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_69214e0(obj,(MethodInfo *)0x0);
  }
label_05dde7a9:
  return iVar2 == 0;
}


// Utility.CustomDebug.<DrawLineCoroutine>d__17$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Utility_CustomDebug__DrawLineCoroutine_d__17__System_Collections_Generic_IEnumerator_System_Object__get_Current (Utility_CustomDebug__DrawLineCoroutine_d__17_o* __this, const MethodInfo* method);
// 0x5dde7c0

Il2CppObject *
Utility_CustomDebug__DrawLineCoroutine_d__17__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Utility_CustomDebug__DrawLineCoroutine_d__17_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Utility.CustomDebug.<DrawLineCoroutine>d__17$$System.Collections.IEnumerator.Reset
// il2cpp: void Utility_CustomDebug__DrawLineCoroutine_d__17__System_Collections_IEnumerator_Reset (Utility_CustomDebug__DrawLineCoroutine_d__17_o* __this, const MethodInfo* method);
// 0x5dde7d0

void Utility_CustomDebug__DrawLineCoroutine_d__17__System_Collections_IEnumerator_Reset
               (Utility_CustomDebug__DrawLineCoroutine_d__17_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_Utility_CustomDebug_DrawLineCoroutine_d__17_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Utility.CustomDebug.<DrawLineCoroutine>d__17$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Utility_CustomDebug__DrawLineCoroutine_d__17__System_Collections_IEnumerator_get_Current (Utility_CustomDebug__DrawLineCoroutine_d__17_o* __this, const MethodInfo* method);
// 0x5dde810

Il2CppObject *
Utility_CustomDebug__DrawLineCoroutine_d__17__System_Collections_IEnumerator_get_Current
          (Utility_CustomDebug__DrawLineCoroutine_d__17_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Utility.CustomDebug.<SpawnPrimitiveCoroutine>d__18$$.ctor
// il2cpp: void Utility_CustomDebug__SpawnPrimitiveCoroutine_d__18___ctor (Utility_CustomDebug__SpawnPrimitiveCoroutine_d__18_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5dde4c0

void Utility_CustomDebug__SpawnPrimitiveCoroutine_d__18___ctor
               (Utility_CustomDebug__SpawnPrimitiveCoroutine_d__18_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Utility.CustomDebug.<SpawnPrimitiveCoroutine>d__18$$System.IDisposable.Dispose
// il2cpp: void Utility_CustomDebug__SpawnPrimitiveCoroutine_d__18__System_IDisposable_Dispose (Utility_CustomDebug__SpawnPrimitiveCoroutine_d__18_o* __this, const MethodInfo* method);
// 0x5dde820

void Utility_CustomDebug__SpawnPrimitiveCoroutine_d__18__System_IDisposable_Dispose
               (Utility_CustomDebug__SpawnPrimitiveCoroutine_d__18_o *__this,MethodInfo *method)

{
  return;
}


// Utility.CustomDebug.<SpawnPrimitiveCoroutine>d__18$$MoveNext
// il2cpp: bool Utility_CustomDebug__SpawnPrimitiveCoroutine_d__18__MoveNext (Utility_CustomDebug__SpawnPrimitiveCoroutine_d__18_o* __this, const MethodInfo* method);
// 0x5dde830

bool Utility_CustomDebug__SpawnPrimitiveCoroutine_d__18__MoveNext
               (Utility_CustomDebug__SpawnPrimitiveCoroutine_d__18_o *__this,MethodInfo *method)

{
  float seconds;
  int iVar1;
  UnityEngine_Object_o *pUVar2;
  bool bVar3;
  UnityEngine_GameObject_o *pUVar4;
  UnityEngine_WaitForSeconds_o *__this_00;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  UnityEngine_WaitForSeconds_c **__this_01;
  
  __this_01 = (UnityEngine_WaitForSeconds_c **)__this;
  if (Il2CppMethodInitialized_0754826c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    __this_01 = &TypeInfo_UnityEngine_WaitForSeconds;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForSeconds);
    Il2CppMethodInitialized_0754826c = '\x01';
    in_RDX = extraout_RDX;
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    if ((__this->fields).__4__this == (Utility_CustomDebug_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar4 = Utility_CustomDebug__SpawnPrimitiveObject
                       ((Utility_CustomDebug_o *)__this_01,(__this->fields).type,
                        (UnityEngine_Vector3_o)(__this->fields).position.fields,
                        (UnityEngine_Quaternion_o)(__this->fields).Rotation.fields,
                        (UnityEngine_Vector3_o)(__this->fields).size.fields,
                        (UnityEngine_Color_o)(__this->fields).color.fields,in_RDX);
    (__this->fields)._obj_5__2 = pUVar4;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._obj_5__2);
    seconds = (__this->fields).duration;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
    UnityEngine_WaitForSeconds___ctor(__this_00,seconds,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)__this_00;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
    (__this->fields).__1__state = 1;
  }
  else if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    pUVar2 = (UnityEngine_Object_o *)(__this->fields)._obj_5__2;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      pUVar2 = (UnityEngine_Object_o *)(__this->fields)._obj_5__2;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      UnityEngine_Object__Destroy_69214e0(pUVar2,(MethodInfo *)0x0);
    }
  }
  return iVar1 == 0;
}


// Utility.CustomDebug.<SpawnPrimitiveCoroutine>d__18$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Utility_CustomDebug__SpawnPrimitiveCoroutine_d__18__System_Collections_Generic_IEnumerator_System_Object__get_Current (Utility_CustomDebug__SpawnPrimitiveCoroutine_d__18_o* __this, const MethodInfo* method);
// 0x5dde980

Il2CppObject *
Utility_CustomDebug__SpawnPrimitiveCoroutine_d__18__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Utility_CustomDebug__SpawnPrimitiveCoroutine_d__18_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Utility.CustomDebug.<SpawnPrimitiveCoroutine>d__18$$System.Collections.IEnumerator.Reset
// il2cpp: void Utility_CustomDebug__SpawnPrimitiveCoroutine_d__18__System_Collections_IEnumerator_Reset (Utility_CustomDebug__SpawnPrimitiveCoroutine_d__18_o* __this, const MethodInfo* method);
// 0x5dde990

void Utility_CustomDebug__SpawnPrimitiveCoroutine_d__18__System_Collections_IEnumerator_Reset
               (Utility_CustomDebug__SpawnPrimitiveCoroutine_d__18_o *__this,MethodInfo *method)

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
                  MethodInfo_Utility_CustomDebug_SpawnPrimitiveCoroutine_d__18_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Utility.CustomDebug.<SpawnPrimitiveCoroutine>d__18$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Utility_CustomDebug__SpawnPrimitiveCoroutine_d__18__System_Collections_IEnumerator_get_Current (Utility_CustomDebug__SpawnPrimitiveCoroutine_d__18_o* __this, const MethodInfo* method);
// 0x5dde9d0

Il2CppObject *
Utility_CustomDebug__SpawnPrimitiveCoroutine_d__18__System_Collections_IEnumerator_get_Current
          (Utility_CustomDebug__SpawnPrimitiveCoroutine_d__18_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Utility.CustomDebug$$Init
// il2cpp: void Utility_CustomDebug__Init (const MethodInfo* method);
// 0x5ddc680

void Utility_CustomDebug__Init(MethodInfo *method)

{
  Utility_CustomDebug_o *pUVar1;
  
  if (Il2CppMethodInitialized_07548257 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CustomDebug);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Utility_SingletonFactory_CreateSingleton_CustomDebug);
    Il2CppMethodInitialized_07548257 = '\x01';
  }
  pUVar1 = Utility_SingletonFactory__CreateSingleton_object_
                     ((Il2CppObject *)TypeInfo_Utility_CustomDebug->static_fields->_instance,
                      (MethodInfo_3680650 *)MethodInfo_Utility_SingletonFactory_CreateSingleton_CustomDebug);
  TypeInfo_Utility_CustomDebug->static_fields->_instance = pUVar1;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Utility_CustomDebug->static_fields->_instance);
  return;
}


// Utility.CustomDebug$$RemoveDebugVisual
// il2cpp: void Utility_CustomDebug__RemoveDebugVisual (System_String_o* name, const MethodInfo* method);
// 0x5ddc6f0

void Utility_CustomDebug__RemoveDebugVisual(System_String_o *name,MethodInfo *method)

{
  Utility_CustomDebug_o *pUVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  bool bVar3;
  UnityEngine_Object_o *obj;
  
  if (Il2CppMethodInitialized_07548258 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CustomDebug);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_Remove);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07548258 = '\x01';
  }
  pUVar1 = TypeInfo_Utility_CustomDebug->static_fields->_instance;
  if ((pUVar1 != (Utility_CustomDebug_o *)0x0) &&
     (pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(pUVar1->fields)._debugObjects,
     pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
    bVar3 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar2,(Il2CppObject *)name,
                       (MethodInfo_4AAD6F0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_ContainsKey);
    if (!bVar3) {
      return;
    }
    pUVar1 = TypeInfo_Utility_CustomDebug->static_fields->_instance;
    if ((pUVar1 != (Utility_CustomDebug_o *)0x0) &&
       (pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(pUVar1->fields)._debugObjects,
       pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
      obj = (UnityEngine_Object_o *)
            System_Collections_Generic_Dictionary_object__object___get_Item
                      (pSVar2,(Il2CppObject *)name,
                       (MethodInfo_4AAD450 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_get_Item);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      UnityEngine_Object__Destroy_69214e0(obj,(MethodInfo *)0x0);
      pUVar1 = TypeInfo_Utility_CustomDebug->static_fields->_instance;
      if ((pUVar1 != (Utility_CustomDebug_o *)0x0) &&
         (pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(pUVar1->fields)._debugObjects,
         pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
        System_Collections_Generic_Dictionary_object__object___Remove
                  (pSVar2,(Il2CppObject *)name,
                   (MethodInfo_4AAED10 *)
                   MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_Remove);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Utility.CustomDebug$$DrawRay
// il2cpp: System_String_o* Utility_CustomDebug__DrawRay (UnityEngine_Vector3_o origin, UnityEngine_Vector3_o direction, UnityEngine_Color_o color, System_String_o* name, const MethodInfo* method);
// 0x5ddc820

System_String_o *
Utility_CustomDebug__DrawRay
          (UnityEngine_Vector3_o origin,UnityEngine_Vector3_o direction,UnityEngine_Color_o color,
          System_String_o *name,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  UnityEngine_Object_o *__this_00;
  System_String_o *key;
  Utility_CustomDebug_o *pUVar1;
  UnityEngine_Vector3_o end;
  float fStack_48;
  float fStack_44;
  
  if (Il2CppMethodInitialized_07548259 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CustomDebug);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_Add);
    Il2CppMethodInitialized_07548259 = '\x01';
  }
  pUVar1 = (Utility_CustomDebug_o *)name;
  Utility_CustomDebug__RemoveDebugVisual(name,method);
  if (TypeInfo_Utility_CustomDebug->static_fields->_instance != (Utility_CustomDebug_o *)0x0) {
    end.fields.z = direction.fields.z + origin.fields.z;
    fStack_48 = direction.fields.x;
    fStack_44 = direction.fields.y;
    end.fields.x = fStack_48 + origin.fields.x;
    end.fields.y = fStack_44 + origin.fields.y;
    __this_00 = (UnityEngine_Object_o *)
                Utility_CustomDebug__DrawLineObject(pUVar1,origin,end,color,0.0,method);
    if (__this_00 != (UnityEngine_Object_o *)0x0) {
      UnityEngine_Object__set_name(__this_00,name,(MethodInfo *)0x0);
      pUVar1 = TypeInfo_Utility_CustomDebug->static_fields->_instance;
      if (pUVar1 != (Utility_CustomDebug_o *)0x0) {
        __this = (System_Collections_Generic_Dictionary_object__object__o *)(pUVar1->fields)._debugObjects;
        key = UnityEngine_Object__get_name(__this_00,(MethodInfo *)0x0);
        if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary_object__object___Add
                    (__this,(Il2CppObject *)key,(Il2CppObject *)__this_00,
                     (MethodInfo_4AAD4E0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_Add);
          return name;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Utility.CustomDebug$$DrawLine
// il2cpp: System_String_o* Utility_CustomDebug__DrawLine (UnityEngine_Vector3_o start, UnityEngine_Vector3_o end, UnityEngine_Color_o color, System_String_o* name, const MethodInfo* method);
// 0x5ddcb10

System_String_o *
Utility_CustomDebug__DrawLine
          (UnityEngine_Vector3_o start,UnityEngine_Vector3_o end,UnityEngine_Color_o color,
          System_String_o *name,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  UnityEngine_Object_o *__this_00;
  System_String_o *key;
  Utility_CustomDebug_o *pUVar1;
  
  if (Il2CppMethodInitialized_0754825a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CustomDebug);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_Add);
    Il2CppMethodInitialized_0754825a = '\x01';
  }
  pUVar1 = (Utility_CustomDebug_o *)name;
  Utility_CustomDebug__RemoveDebugVisual(name,method);
  if (TypeInfo_Utility_CustomDebug->static_fields->_instance != (Utility_CustomDebug_o *)0x0) {
    __this_00 = (UnityEngine_Object_o *)Utility_CustomDebug__DrawLineObject(pUVar1,start,end,color,0.0,method)
    ;
    if (__this_00 != (UnityEngine_Object_o *)0x0) {
      UnityEngine_Object__set_name(__this_00,name,(MethodInfo *)0x0);
      pUVar1 = TypeInfo_Utility_CustomDebug->static_fields->_instance;
      if (pUVar1 != (Utility_CustomDebug_o *)0x0) {
        __this = (System_Collections_Generic_Dictionary_object__object__o *)(pUVar1->fields)._debugObjects;
        key = UnityEngine_Object__get_name(__this_00,(MethodInfo *)0x0);
        if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary_object__object___Add
                    (__this,(Il2CppObject *)key,(Il2CppObject *)__this_00,
                     (MethodInfo_4AAD4E0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_Add);
          return name;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Utility.CustomDebug$$SpawnCube
// il2cpp: System_String_o* Utility_CustomDebug__SpawnCube (UnityEngine_Vector3_o position, UnityEngine_Color_o color, System_String_o* name, const MethodInfo* method);
// 0x5ddcc20

System_String_o *
Utility_CustomDebug__SpawnCube
          (UnityEngine_Vector3_o position,UnityEngine_Color_o color,System_String_o *name,MethodInfo *method)

{
  Utility_CustomDebug_o *pUVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  UnityEngine_Quaternion_Fields Rotation;
  UnityEngine_Object_o *__this_00;
  System_String_o *key;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *method_00;
  UnityEngine_Quaternion_c **ppUVar2;
  UnityEngine_Vector3_c **__this_01;
  
  if (Il2CppMethodInitialized_0754825b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CustomDebug);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_Add);
    Il2CppMethodInitialized_0754825b = '\x01';
  }
  __this_01 = (UnityEngine_Vector3_c **)name;
  Utility_CustomDebug__RemoveDebugVisual(name,method);
  pUVar1 = TypeInfo_Utility_CustomDebug->static_fields->_instance;
  method_00 = extraout_RDX;
  if (Il2CppMethodInitialized_0753e72b == '\0') {
    ppUVar2 = &TypeInfo_UnityEngine_Quaternion;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
    Il2CppMethodInitialized_0753e72b = '\x01';
    method_00 = extraout_RDX_00;
    __this_01 = (UnityEngine_Vector3_c **)ppUVar2;
  }
  Rotation = *(UnityEngine_Quaternion_Fields *)TypeInfo_UnityEngine_Quaternion->static_fields;
  if (Il2CppMethodInitialized_0753e4b7 == '\0') {
    __this_01 = &TypeInfo_UnityEngine_Vector3;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e4b7 = '\x01';
    method_00 = extraout_RDX_01;
  }
  if (pUVar1 != (Utility_CustomDebug_o *)0x0) {
    __this_00 = (UnityEngine_Object_o *)
                Utility_CustomDebug__SpawnPrimitiveObject
                          ((Utility_CustomDebug_o *)__this_01,3,position,(UnityEngine_Quaternion_o)Rotation,
                           (UnityEngine_Vector3_o)
                           (TypeInfo_UnityEngine_Vector3->static_fields->oneVector).fields,color,method_00);
    if (__this_00 != (UnityEngine_Object_o *)0x0) {
      UnityEngine_Object__set_name(__this_00,name,(MethodInfo *)0x0);
      pUVar1 = TypeInfo_Utility_CustomDebug->static_fields->_instance;
      if (pUVar1 != (Utility_CustomDebug_o *)0x0) {
        __this = (System_Collections_Generic_Dictionary_object__object__o *)(pUVar1->fields)._debugObjects;
        key = UnityEngine_Object__get_name(__this_00,(MethodInfo *)0x0);
        if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary_object__object___Add
                    (__this,(Il2CppObject *)key,(Il2CppObject *)__this_00,
                     (MethodInfo_4AAD4E0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_Add);
          return name;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Utility.CustomDebug$$SpawnSphere
// il2cpp: System_String_o* Utility_CustomDebug__SpawnSphere (UnityEngine_Vector3_o position, float radius, UnityEngine_Color_o color, System_String_o* name, const MethodInfo* method);
// 0x5ddcfe0

System_String_o *
Utility_CustomDebug__SpawnSphere
          (UnityEngine_Vector3_o position,float radius,UnityEngine_Color_o color,System_String_o *name,
          MethodInfo *method)

{
  Utility_CustomDebug_o *pUVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  UnityEngine_Object_o *__this_00;
  System_String_o *key;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  UnityEngine_Quaternion_c **__this_01;
  UnityEngine_Vector3_o size;
  
  if (Il2CppMethodInitialized_0754825c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CustomDebug);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_Add);
    Il2CppMethodInitialized_0754825c = '\x01';
  }
  __this_01 = (UnityEngine_Quaternion_c **)name;
  Utility_CustomDebug__RemoveDebugVisual(name,method);
  pUVar1 = TypeInfo_Utility_CustomDebug->static_fields->_instance;
  method_00 = extraout_RDX;
  if (Il2CppMethodInitialized_0753e72b == '\0') {
    __this_01 = &TypeInfo_UnityEngine_Quaternion;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
    Il2CppMethodInitialized_0753e72b = '\x01';
    method_00 = extraout_RDX_00;
  }
  if (pUVar1 != (Utility_CustomDebug_o *)0x0) {
    size.fields.y = radius;
    size.fields.x = radius;
    size.fields.z = radius;
    __this_00 = (UnityEngine_Object_o *)
                Utility_CustomDebug__SpawnPrimitiveObject
                          ((Utility_CustomDebug_o *)__this_01,0,position,
                           (UnityEngine_Quaternion_o)
                           *(UnityEngine_Quaternion_Fields *)TypeInfo_UnityEngine_Quaternion->static_fields,
                           size,color,method_00);
    if (__this_00 != (UnityEngine_Object_o *)0x0) {
      UnityEngine_Object__set_name(__this_00,name,(MethodInfo *)0x0);
      pUVar1 = TypeInfo_Utility_CustomDebug->static_fields->_instance;
      if (pUVar1 != (Utility_CustomDebug_o *)0x0) {
        __this = (System_Collections_Generic_Dictionary_object__object__o *)(pUVar1->fields)._debugObjects;
        key = UnityEngine_Object__get_name(__this_00,(MethodInfo *)0x0);
        if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary_object__object___Add
                    (__this,(Il2CppObject *)key,(Il2CppObject *)__this_00,
                     (MethodInfo_4AAD4E0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_Add);
          return name;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Utility.CustomDebug$$SpawnCylinder
// il2cpp: System_String_o* Utility_CustomDebug__SpawnCylinder (UnityEngine_Vector3_o position, float radius, float height, UnityEngine_Color_o color, System_String_o* name, const MethodInfo* method);
// 0x5ddd120

System_String_o *
Utility_CustomDebug__SpawnCylinder
          (UnityEngine_Vector3_o position,float radius,float height,UnityEngine_Color_o color,
          System_String_o *name,MethodInfo *method)

{
  Utility_CustomDebug_o *pUVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  UnityEngine_Object_o *__this_00;
  System_String_o *key;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  UnityEngine_Quaternion_c **__this_01;
  UnityEngine_Vector3_o size;
  
  if (Il2CppMethodInitialized_0754825d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CustomDebug);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_Add);
    Il2CppMethodInitialized_0754825d = '\x01';
  }
  __this_01 = (UnityEngine_Quaternion_c **)name;
  Utility_CustomDebug__RemoveDebugVisual(name,method);
  pUVar1 = TypeInfo_Utility_CustomDebug->static_fields->_instance;
  method_00 = extraout_RDX;
  if (Il2CppMethodInitialized_0753e72b == '\0') {
    __this_01 = &TypeInfo_UnityEngine_Quaternion;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
    Il2CppMethodInitialized_0753e72b = '\x01';
    method_00 = extraout_RDX_00;
  }
  if (pUVar1 != (Utility_CustomDebug_o *)0x0) {
    size.fields.y = height;
    size.fields.x = radius;
    size.fields.z = radius;
    __this_00 = (UnityEngine_Object_o *)
                Utility_CustomDebug__SpawnPrimitiveObject
                          ((Utility_CustomDebug_o *)__this_01,2,position,
                           (UnityEngine_Quaternion_o)
                           *(UnityEngine_Quaternion_Fields *)TypeInfo_UnityEngine_Quaternion->static_fields,
                           size,color,method_00);
    if (__this_00 != (UnityEngine_Object_o *)0x0) {
      UnityEngine_Object__set_name(__this_00,name,(MethodInfo *)0x0);
      pUVar1 = TypeInfo_Utility_CustomDebug->static_fields->_instance;
      if (pUVar1 != (Utility_CustomDebug_o *)0x0) {
        __this = (System_Collections_Generic_Dictionary_object__object__o *)(pUVar1->fields)._debugObjects;
        key = UnityEngine_Object__get_name(__this_00,(MethodInfo *)0x0);
        if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary_object__object___Add
                    (__this,(Il2CppObject *)key,(Il2CppObject *)__this_00,
                     (MethodInfo_4AAD4E0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_Add);
          return name;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Utility.CustomDebug$$SpawnCapsule
// il2cpp: System_String_o* Utility_CustomDebug__SpawnCapsule (UnityEngine_Vector3_o position, float radius, float height, UnityEngine_Color_o color, System_String_o* name, const MethodInfo* method);
// 0x5ddd260

System_String_o *
Utility_CustomDebug__SpawnCapsule
          (UnityEngine_Vector3_o position,float radius,float height,UnityEngine_Color_o color,
          System_String_o *name,MethodInfo *method)

{
  Utility_CustomDebug_o *pUVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  UnityEngine_Object_o *__this_00;
  System_String_o *key;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  UnityEngine_Quaternion_c **__this_01;
  UnityEngine_Vector3_o size;
  
  if (Il2CppMethodInitialized_0754825e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CustomDebug);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_Add);
    Il2CppMethodInitialized_0754825e = '\x01';
  }
  __this_01 = (UnityEngine_Quaternion_c **)name;
  Utility_CustomDebug__RemoveDebugVisual(name,method);
  pUVar1 = TypeInfo_Utility_CustomDebug->static_fields->_instance;
  method_00 = extraout_RDX;
  if (Il2CppMethodInitialized_0753e72b == '\0') {
    __this_01 = &TypeInfo_UnityEngine_Quaternion;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
    Il2CppMethodInitialized_0753e72b = '\x01';
    method_00 = extraout_RDX_00;
  }
  if (pUVar1 != (Utility_CustomDebug_o *)0x0) {
    size.fields.y = height;
    size.fields.x = radius;
    size.fields.z = radius;
    __this_00 = (UnityEngine_Object_o *)
                Utility_CustomDebug__SpawnPrimitiveObject
                          ((Utility_CustomDebug_o *)__this_01,1,position,
                           (UnityEngine_Quaternion_o)
                           *(UnityEngine_Quaternion_Fields *)TypeInfo_UnityEngine_Quaternion->static_fields,
                           size,color,method_00);
    if (__this_00 != (UnityEngine_Object_o *)0x0) {
      UnityEngine_Object__set_name(__this_00,name,(MethodInfo *)0x0);
      pUVar1 = TypeInfo_Utility_CustomDebug->static_fields->_instance;
      if (pUVar1 != (Utility_CustomDebug_o *)0x0) {
        __this = (System_Collections_Generic_Dictionary_object__object__o *)(pUVar1->fields)._debugObjects;
        key = UnityEngine_Object__get_name(__this_00,(MethodInfo *)0x0);
        if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary_object__object___Add
                    (__this,(Il2CppObject *)key,(Il2CppObject *)__this_00,
                     (MethodInfo_4AAD4E0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_Add);
          return name;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Utility.CustomDebug$$SpawnCapsuleCollder
// il2cpp: System_String_o* Utility_CustomDebug__SpawnCapsuleCollder (UnityEngine_CapsuleCollider_o* capsule, UnityEngine_Color_o color, System_String_o* name, const MethodInfo* method);
// 0x5ddd3a0

System_String_o *
Utility_CustomDebug__SpawnCapsuleCollder
          (UnityEngine_CapsuleCollider_o *capsule,UnityEngine_Color_o color,System_String_o *name,
          MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  undefined4 uVar4;
  Utility_CustomDebug_o *pUVar5;
  UnityEngine_Vector3_StaticFields *pUVar6;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  bool bVar7;
  int32_t iVar8;
  UnityEngine_Transform_o *pUVar9;
  UnityEngine_Object_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_GameObject_o *__this_02;
  UnityEngine_Transform_o *pUVar10;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *pMVar11;
  UnityEngine_Vector3_c **ppUVar12;
  UnityEngine_Quaternion_c **__this_03;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  UnityEngine_Vector3_o UVar17;
  UnityEngine_Vector3_o UVar18;
  UnityEngine_Vector3_o UVar19;
  UnityEngine_Vector3_o UVar20;
  UnityEngine_Vector3_o position;
  UnityEngine_Quaternion_o Rotation;
  float fStack_c8;
  float fStack_c4;
  float fStack_b8;
  float fStack_98;
  float fStack_94;
  UnityEngine_Vector3_Fields UStack_68;
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [24];
  
  if (Il2CppMethodInitialized_0754825f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CustomDebug);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754825f = '\x01';
  }
  pUVar5 = TypeInfo_Utility_CustomDebug->static_fields->_instance;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar7 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar7) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar7 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)capsule,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar7) {
      if (capsule != (UnityEngine_CapsuleCollider_o *)0x0) {
        pUVar9 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)capsule,(MethodInfo *)0x0);
        UVar17 = UnityEngine_CapsuleCollider__get_center(capsule,(MethodInfo *)0x0);
        if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
          UVar17 = UnityEngine_Transform__TransformPoint(pUVar9,UVar17,(MethodInfo *)0x0);
          fVar13 = UnityEngine_CapsuleCollider__get_radius(capsule,(MethodInfo *)0x0);
          UVar18 = UnityEngine_Transform__get_lossyScale(pUVar9,(MethodInfo *)0x0);
          UVar19 = UnityEngine_Transform__get_lossyScale(pUVar9,(MethodInfo *)0x0);
          fVar14 = UnityEngine_CapsuleCollider__get_height(capsule,(MethodInfo *)0x0);
          UVar20 = UnityEngine_Transform__get_lossyScale(pUVar9,(MethodInfo *)0x0);
          auStack_48._8_4_ = extraout_XMM0_Dc;
          auStack_48._0_8_ = UVar20.fields._0_8_;
          auStack_48._12_4_ = extraout_XMM0_Dd;
          if (Il2CppMethodInitialized_0753e72c == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
            Il2CppMethodInitialized_0753e72c = '\x01';
          }
          pUVar6 = TypeInfo_UnityEngine_Vector3->static_fields;
          fVar1 = (pUVar6->upVector).fields.x;
          fVar3 = (pUVar6->upVector).fields.y;
          fVar16 = (pUVar6->upVector).fields.z;
          iVar8 = UnityEngine_CapsuleCollider__get_direction(capsule,(MethodInfo *)0x0);
          if (iVar8 == 2) {
            UVar20 = UnityEngine_Transform__get_forward(pUVar9,(MethodInfo *)0x0);
            fVar16 = UVar20.fields.z;
            fVar1 = UVar20.fields.x;
            fVar3 = UVar20.fields.y;
          }
          else if (iVar8 == 1) {
            UVar20 = UnityEngine_Transform__get_up(pUVar9,(MethodInfo *)0x0);
            fVar16 = UVar20.fields.z;
            fVar1 = UVar20.fields.x;
            fVar3 = UVar20.fields.y;
          }
          else if (iVar8 == 0) {
            UVar20 = UnityEngine_Transform__get_right(pUVar9,(MethodInfo *)0x0);
            fVar16 = UVar20.fields.z;
            fVar1 = UVar20.fields.x;
            fVar3 = UVar20.fields.y;
          }
          auStack_58._0_8_ = CONCAT44(fVar3,fVar1);
          auStack_58._8_4_ = fVar16;
          if (Il2CppMethodInitialized_0753e72c == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
            Il2CppMethodInitialized_0753e72c = '\x01';
          }
          pUVar6 = TypeInfo_UnityEngine_Vector3->static_fields;
          UStack_68.x = (pUVar6->upVector).fields.x;
          UStack_68.y = (pUVar6->upVector).fields.y;
          UStack_68.z = (pUVar6->upVector).fields.z;
          __this_03 = (UnityEngine_Quaternion_c **)auStack_58;
          Rotation = UnityEngine_Quaternion__Internal_LookRotation
                               ((UnityEngine_Vector3_o *)__this_03,(UnityEngine_Vector3_o *)&UStack_68,
                                (MethodInfo *)0x0);
          if (TypeInfo_Utility_CustomDebug->static_fields->_instance != (Utility_CustomDebug_o *)0x0) {
            fStack_b8 = UVar18.fields.x;
            if (fStack_b8 <= UVar19.fields.z) {
              fStack_b8 = UVar19.fields.z;
            }
            fVar13 = fVar13 * fStack_b8;
            UVar18.fields.z = fVar13 + fVar13;
            fVar15 = fVar14 * (float)auStack_48._4_4_ - UVar18.fields.z;
            fVar14 = 0.0;
            if (0.0 <= fVar15) {
              fVar14 = fVar15;
            }
            UVar18.fields.y = fVar14 * 0.5;
            UVar18.fields.x = UVar18.fields.z;
            __this_00 = (UnityEngine_Object_o *)
                        Utility_CustomDebug__SpawnPrimitiveObject
                                  ((Utility_CustomDebug_o *)__this_03,2,UVar17,Rotation,UVar18,color,method_00
                                  );
            pMVar11 = extraout_RDX;
            if (Il2CppMethodInitialized_0753e4b7 == '\0') {
              ppUVar12 = &TypeInfo_UnityEngine_Vector3;
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
              Il2CppMethodInitialized_0753e4b7 = '\x01';
              pMVar11 = extraout_RDX_00;
              __this_03 = (UnityEngine_Quaternion_c **)ppUVar12;
            }
            pUVar6 = TypeInfo_UnityEngine_Vector3->static_fields;
            uVar2 = (pUVar6->oneVector).fields.x;
            uVar4 = (pUVar6->oneVector).fields.y;
            fVar15 = (pUVar6->oneVector).fields.z * fVar13;
            pUVar5 = TypeInfo_Utility_CustomDebug->static_fields->_instance;
            if (Il2CppMethodInitialized_0753e72b == '\0') {
              __this_03 = &TypeInfo_UnityEngine_Quaternion;
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
              Il2CppMethodInitialized_0753e72b = '\x01';
              pMVar11 = extraout_RDX_01;
            }
            if (pUVar5 != (Utility_CustomDebug_o *)0x0) {
              fVar14 = fVar14 * 0.5 + fVar13;
              UVar19.fields.z = UVar17.fields.z + fVar14 * fVar16;
              fStack_98 = UVar17.fields.x;
              fStack_94 = UVar17.fields.y;
              UVar19.fields.x = fStack_98 + fVar14 * fVar1;
              UVar19.fields.y = fStack_94 + fVar14 * fVar3;
              UVar20.fields.x = fVar13 * (float)uVar2 + fVar13 * (float)uVar2;
              UVar20.fields.y = fVar13 * (float)uVar4 + fVar13 * (float)uVar4;
              UVar20.fields.z = fVar15 + fVar15;
              __this_01 = Utility_CustomDebug__SpawnPrimitiveObject
                                    ((Utility_CustomDebug_o *)__this_03,0,UVar19,
                                     (UnityEngine_Quaternion_o)
                                     *(UnityEngine_Quaternion_Fields *)
                                      TypeInfo_UnityEngine_Quaternion->static_fields,UVar20,color,pMVar11);
              pUVar5 = TypeInfo_Utility_CustomDebug->static_fields->_instance;
              pMVar11 = extraout_RDX_02;
              if (Il2CppMethodInitialized_0753e72b == '\0') {
                __this_03 = &TypeInfo_UnityEngine_Quaternion;
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
                Il2CppMethodInitialized_0753e72b = '\x01';
                pMVar11 = extraout_RDX_03;
              }
              if ((((pUVar5 != (Utility_CustomDebug_o *)0x0) &&
                   (position.fields.x = fStack_98 - fVar14 * fVar1,
                   position.fields.y = fStack_94 - fVar14 * fVar3,
                   position.fields.z = UVar17.fields.z - fVar14 * fVar16, UVar17.fields.y = UVar20.fields.y,
                   UVar17.fields.x = UVar20.fields.x, UVar17.fields.z = UVar20.fields.z,
                   __this_02 = Utility_CustomDebug__SpawnPrimitiveObject
                                         ((Utility_CustomDebug_o *)__this_03,0,position,
                                          (UnityEngine_Quaternion_o)
                                          *(UnityEngine_Quaternion_Fields *)
                                           TypeInfo_UnityEngine_Quaternion->static_fields,UVar17,color,pMVar11
                                         ), __this_01 != (UnityEngine_GameObject_o *)0x0)) &&
                  (pUVar9 = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0),
                  __this_00 != (UnityEngine_Object_o *)0x0)) &&
                 ((pUVar10 = UnityEngine_GameObject__get_transform
                                       ((UnityEngine_GameObject_o *)__this_00,(MethodInfo *)0x0),
                  pUVar9 != (UnityEngine_Transform_o *)0x0 &&
                  (UnityEngine_Transform__set_parent(pUVar9,pUVar10,(MethodInfo *)0x0),
                  __this_02 != (UnityEngine_GameObject_o *)0x0)))) {
                pUVar9 = UnityEngine_GameObject__get_transform(__this_02,(MethodInfo *)0x0);
                pUVar10 = UnityEngine_GameObject__get_transform
                                    ((UnityEngine_GameObject_o *)__this_00,(MethodInfo *)0x0);
                if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
                  UnityEngine_Transform__set_parent(pUVar9,pUVar10,(MethodInfo *)0x0);
                  UnityEngine_Object__set_name(__this_00,name,(MethodInfo *)0x0);
                  pUVar5 = TypeInfo_Utility_CustomDebug->static_fields->_instance;
                  if ((pUVar5 != (Utility_CustomDebug_o *)0x0) &&
                     (__this = (System_Collections_Generic_Dictionary_object__object__o *)
                               (pUVar5->fields)._debugObjects,
                     __this != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
                    System_Collections_Generic_Dictionary_object__object___Add
                              (__this,(Il2CppObject *)name,(Il2CppObject *)__this_00,
                               (MethodInfo_4AAD4E0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_Add);
                    return name;
                  }
                }
              }
            }
          }
        }
      }
      ThrowNullReferenceException();
    }
  }
  return (System_String_o *)0x0;
}


// Utility.CustomDebug$$DrawRay
// il2cpp: void Utility_CustomDebug__DrawRay (UnityEngine_Vector3_o origin, UnityEngine_Vector3_o direction, UnityEngine_Color_o color, float duration, const MethodInfo* method);
// 0x5ddd8d0

void Utility_CustomDebug__DrawRay_5cdd8d0
               (UnityEngine_Vector3_o origin,UnityEngine_Vector3_o direction,UnityEngine_Color_o color,
               float duration,MethodInfo *method)

{
  Utility_CustomDebug_o *pUVar1;
  bool bVar2;
  Utility_CustomDebug__DrawLineCoroutine_d__17_o *__this;
  undefined8 uStack_58;
  float fStack_48;
  float fStack_44;
  float fStack_38;
  float fStack_34;
  
  if (Il2CppMethodInitialized_07548260 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CustomDebug);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07548260 = '\x01';
  }
  pUVar1 = TypeInfo_Utility_CustomDebug->static_fields->_instance;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = TypeInfo_Utility_CustomDebug->static_fields->_instance;
    if (pUVar1 == (Utility_CustomDebug_o *)0x0) {
      ThrowNullReferenceException();
    }
    uStack_58._0_4_ = direction.fields.x;
    uStack_58._4_4_ = direction.fields.y;
    fStack_48 = origin.fields.x;
    fStack_44 = origin.fields.y;
    if (Il2CppMethodInitialized_07548266 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CustomDebug_DrawLineCoroutine_d__17);
      Il2CppMethodInitialized_07548266 = '\x01';
    }
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_CustomDebug_DrawLineCoroutine_d__17);
    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    (__this->fields).__1__state = 0;
    (__this->fields).start.fields.x = origin.fields.x;
    (__this->fields).start.fields.y = origin.fields.y;
    (__this->fields).start.fields.z = origin.fields.z;
    (__this->fields).end.fields.x = (float)uStack_58 + fStack_48;
    (__this->fields).end.fields.y = uStack_58._4_4_ + fStack_44;
    (__this->fields).end.fields.z = direction.fields.z + origin.fields.z;
    fStack_38 = color.fields.r;
    fStack_34 = color.fields.g;
    (__this->fields).color.fields.r = fStack_38;
    (__this->fields).color.fields.g = fStack_34;
    (__this->fields).color.fields.b = color.fields.b;
    (__this->fields).color.fields.a = color.fields.a;
    (__this->fields).duration = duration;
    UnityEngine_MonoBehaviour__StartCoroutine_691c390
              ((UnityEngine_MonoBehaviour_o *)pUVar1,(System_Collections_IEnumerator_o *)__this,
               (MethodInfo *)0x0);
    return;
  }
  return;
}


// Utility.CustomDebug$$DrawLine
// il2cpp: void Utility_CustomDebug__DrawLine (UnityEngine_Vector3_o start, UnityEngine_Vector3_o end, UnityEngine_Color_o color, float duration, const MethodInfo* method);
// 0x5dddb00

void Utility_CustomDebug__DrawLine_5cddb00
               (UnityEngine_Vector3_o start,UnityEngine_Vector3_o end,UnityEngine_Color_o color,float duration
               ,MethodInfo *method)

{
  Utility_CustomDebug_o *pUVar1;
  bool bVar2;
  Utility_CustomDebug__DrawLineCoroutine_d__17_o *__this;
  float fStack_38;
  float fStack_34;
  
  if (Il2CppMethodInitialized_07548261 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CustomDebug);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07548261 = '\x01';
  }
  pUVar1 = TypeInfo_Utility_CustomDebug->static_fields->_instance;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = TypeInfo_Utility_CustomDebug->static_fields->_instance;
    if (pUVar1 == (Utility_CustomDebug_o *)0x0) {
      ThrowNullReferenceException();
    }
    if (Il2CppMethodInitialized_07548266 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CustomDebug_DrawLineCoroutine_d__17);
      Il2CppMethodInitialized_07548266 = '\x01';
    }
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_CustomDebug_DrawLineCoroutine_d__17);
    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    (__this->fields).__1__state = 0;
    (__this->fields).start.fields.x = start.fields.x;
    (__this->fields).start.fields.y = start.fields.y;
    (__this->fields).start.fields.z = start.fields.z;
    (__this->fields).end.fields.x = end.fields.x;
    (__this->fields).end.fields.y = end.fields.y;
    (__this->fields).end.fields.z = end.fields.z;
    fStack_38 = color.fields.r;
    fStack_34 = color.fields.g;
    (__this->fields).color.fields.r = fStack_38;
    (__this->fields).color.fields.g = fStack_34;
    (__this->fields).color.fields.b = color.fields.b;
    (__this->fields).color.fields.a = color.fields.a;
    (__this->fields).duration = duration;
    UnityEngine_MonoBehaviour__StartCoroutine_691c390
              ((UnityEngine_MonoBehaviour_o *)pUVar1,(System_Collections_IEnumerator_o *)__this,
               (MethodInfo *)0x0);
    return;
  }
  return;
}


// Utility.CustomDebug$$SpawnCube
// il2cpp: void Utility_CustomDebug__SpawnCube (UnityEngine_Vector3_o position, UnityEngine_Color_o color, float duration, const MethodInfo* method);
// 0x5dddc50

void Utility_CustomDebug__SpawnCube_5cddc50
               (UnityEngine_Vector3_o position,UnityEngine_Color_o color,float duration,MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  Utility_CustomDebug_o *pUVar6;
  UnityEngine_Quaternion_StaticFields *pUVar7;
  UnityEngine_Vector3_StaticFields *pUVar8;
  float fVar9;
  float fVar10;
  bool bVar11;
  Utility_CustomDebug__SpawnPrimitiveCoroutine_d__18_o *__this;
  float fStack_58;
  float fStack_54;
  float fStack_38;
  float fStack_34;
  
  if (Il2CppMethodInitialized_07548262 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CustomDebug);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07548262 = '\x01';
  }
  pUVar6 = TypeInfo_Utility_CustomDebug->static_fields->_instance;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar11 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar11) {
    pUVar6 = TypeInfo_Utility_CustomDebug->static_fields->_instance;
    if (Il2CppMethodInitialized_0753e72b == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
      Il2CppMethodInitialized_0753e72b = '\x01';
    }
    pUVar7 = TypeInfo_UnityEngine_Quaternion->static_fields;
    uVar2 = (pUVar7->identityQuaternion).fields.x;
    uVar4 = (pUVar7->identityQuaternion).fields.y;
    uVar3 = (pUVar7->identityQuaternion).fields.z;
    uVar5 = (pUVar7->identityQuaternion).fields.w;
    if (Il2CppMethodInitialized_0753e4b7 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_0753e4b7 = '\x01';
    }
    if (pUVar6 == (Utility_CustomDebug_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar8 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar9 = (pUVar8->oneVector).fields.x;
    fVar10 = (pUVar8->oneVector).fields.y;
    fVar1 = (pUVar8->oneVector).fields.z;
    if (Il2CppMethodInitialized_07548267 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CustomDebug_SpawnPrimitiveCoroutine_d__18);
      Il2CppMethodInitialized_07548267 = '\x01';
    }
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_Utility_CustomDebug_SpawnPrimitiveCoroutine_d__18);
    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    (__this->fields).__1__state = 0;
    (__this->fields).__4__this = pUVar6;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__4__this);
    (__this->fields).type = 3;
    (__this->fields).position.fields.x = position.fields.x;
    (__this->fields).position.fields.y = position.fields.y;
    (__this->fields).position.fields.z = position.fields.z;
    (__this->fields).Rotation.fields.x = (float)uVar2;
    (__this->fields).Rotation.fields.y = (float)uVar4;
    (__this->fields).Rotation.fields.z = (float)uVar3;
    (__this->fields).Rotation.fields.w = (float)uVar5;
    (__this->fields).size.fields.x = fVar9;
    (__this->fields).size.fields.y = fVar10;
    (__this->fields).size.fields.z = fVar1;
    fStack_38 = color.fields.r;
    fStack_34 = color.fields.g;
    (__this->fields).color.fields.r = fStack_38;
    (__this->fields).color.fields.g = fStack_34;
    (__this->fields).color.fields.b = color.fields.b;
    (__this->fields).color.fields.a = color.fields.a;
    (__this->fields).duration = duration;
    UnityEngine_MonoBehaviour__StartCoroutine_691c390
              ((UnityEngine_MonoBehaviour_o *)pUVar6,(System_Collections_IEnumerator_o *)__this,
               (MethodInfo *)0x0);
    return;
  }
  return;
}


// Utility.CustomDebug$$SpawnSphere
// il2cpp: void Utility_CustomDebug__SpawnSphere (UnityEngine_Vector3_o position, float radius, UnityEngine_Color_o color, float duration, const MethodInfo* method);
// 0x5dddf30

void Utility_CustomDebug__SpawnSphere_5cddf30
               (UnityEngine_Vector3_o position,float radius,UnityEngine_Color_o color,float duration,
               MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  Utility_CustomDebug_o *pUVar5;
  UnityEngine_Quaternion_StaticFields *pUVar6;
  bool bVar7;
  Utility_CustomDebug__SpawnPrimitiveCoroutine_d__18_o *__this;
  float fStack_58;
  float fStack_54;
  float fStack_38;
  float fStack_34;
  
  if (Il2CppMethodInitialized_07548263 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CustomDebug);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07548263 = '\x01';
  }
  pUVar5 = TypeInfo_Utility_CustomDebug->static_fields->_instance;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar7 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar7) {
    pUVar5 = TypeInfo_Utility_CustomDebug->static_fields->_instance;
    if (Il2CppMethodInitialized_0753e72b == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
      Il2CppMethodInitialized_0753e72b = '\x01';
    }
    if (pUVar5 == (Utility_CustomDebug_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar6 = TypeInfo_UnityEngine_Quaternion->static_fields;
    uVar1 = (pUVar6->identityQuaternion).fields.x;
    uVar3 = (pUVar6->identityQuaternion).fields.y;
    uVar2 = (pUVar6->identityQuaternion).fields.z;
    uVar4 = (pUVar6->identityQuaternion).fields.w;
    if (Il2CppMethodInitialized_07548267 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CustomDebug_SpawnPrimitiveCoroutine_d__18);
      Il2CppMethodInitialized_07548267 = '\x01';
    }
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_Utility_CustomDebug_SpawnPrimitiveCoroutine_d__18);
    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    (__this->fields).__1__state = 0;
    (__this->fields).__4__this = pUVar5;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__4__this);
    (__this->fields).type = 0;
    (__this->fields).position.fields.x = position.fields.x;
    (__this->fields).position.fields.y = position.fields.y;
    (__this->fields).position.fields.z = position.fields.z;
    (__this->fields).Rotation.fields.x = (float)uVar1;
    (__this->fields).Rotation.fields.y = (float)uVar3;
    (__this->fields).Rotation.fields.z = (float)uVar2;
    (__this->fields).Rotation.fields.w = (float)uVar4;
    (__this->fields).size.fields.x = radius;
    (__this->fields).size.fields.y = radius;
    (__this->fields).size.fields.z = radius;
    fStack_38 = color.fields.r;
    fStack_34 = color.fields.g;
    (__this->fields).color.fields.r = fStack_38;
    (__this->fields).color.fields.g = fStack_34;
    (__this->fields).color.fields.b = color.fields.b;
    (__this->fields).color.fields.a = color.fields.a;
    (__this->fields).duration = duration;
    UnityEngine_MonoBehaviour__StartCoroutine_691c390
              ((UnityEngine_MonoBehaviour_o *)pUVar5,(System_Collections_IEnumerator_o *)__this,
               (MethodInfo *)0x0);
    return;
  }
  return;
}


// Utility.CustomDebug$$SpawnCylinder
// il2cpp: void Utility_CustomDebug__SpawnCylinder (UnityEngine_Vector3_o position, float radius, float height, UnityEngine_Color_o color, float duration, const MethodInfo* method);
// 0x5dde100

void Utility_CustomDebug__SpawnCylinder_5cde100
               (UnityEngine_Vector3_o position,float radius,float height,UnityEngine_Color_o color,
               float duration,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  Utility_CustomDebug_o *pUVar5;
  UnityEngine_Quaternion_StaticFields *pUVar6;
  bool bVar7;
  Utility_CustomDebug__SpawnPrimitiveCoroutine_d__18_o *__this;
  float fStack_58;
  float fStack_54;
  float fStack_38;
  float fStack_34;
  
  if (Il2CppMethodInitialized_07548264 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CustomDebug);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07548264 = '\x01';
  }
  pUVar5 = TypeInfo_Utility_CustomDebug->static_fields->_instance;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar7 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar7) {
    pUVar5 = TypeInfo_Utility_CustomDebug->static_fields->_instance;
    if (Il2CppMethodInitialized_0753e72b == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
      Il2CppMethodInitialized_0753e72b = '\x01';
    }
    if (pUVar5 == (Utility_CustomDebug_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar6 = TypeInfo_UnityEngine_Quaternion->static_fields;
    uVar1 = (pUVar6->identityQuaternion).fields.x;
    uVar3 = (pUVar6->identityQuaternion).fields.y;
    uVar2 = (pUVar6->identityQuaternion).fields.z;
    uVar4 = (pUVar6->identityQuaternion).fields.w;
    if (Il2CppMethodInitialized_07548267 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CustomDebug_SpawnPrimitiveCoroutine_d__18);
      Il2CppMethodInitialized_07548267 = '\x01';
    }
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_Utility_CustomDebug_SpawnPrimitiveCoroutine_d__18);
    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    (__this->fields).__1__state = 0;
    (__this->fields).__4__this = pUVar5;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__4__this);
    (__this->fields).type = 2;
    (__this->fields).position.fields.x = position.fields.x;
    (__this->fields).position.fields.y = position.fields.y;
    (__this->fields).position.fields.z = position.fields.z;
    (__this->fields).Rotation.fields.x = (float)uVar1;
    (__this->fields).Rotation.fields.y = (float)uVar3;
    (__this->fields).Rotation.fields.z = (float)uVar2;
    (__this->fields).Rotation.fields.w = (float)uVar4;
    (__this->fields).size.fields.x = radius;
    (__this->fields).size.fields.y = height;
    (__this->fields).size.fields.z = radius;
    fStack_38 = color.fields.r;
    fStack_34 = color.fields.g;
    (__this->fields).color.fields.r = fStack_38;
    (__this->fields).color.fields.g = fStack_34;
    (__this->fields).color.fields.b = color.fields.b;
    (__this->fields).color.fields.a = color.fields.a;
    (__this->fields).duration = duration;
    UnityEngine_MonoBehaviour__StartCoroutine_691c390
              ((UnityEngine_MonoBehaviour_o *)pUVar5,(System_Collections_IEnumerator_o *)__this,
               (MethodInfo *)0x0);
    return;
  }
  return;
}


// Utility.CustomDebug$$SpawnCapsule
// il2cpp: void Utility_CustomDebug__SpawnCapsule (UnityEngine_Vector3_o position, float radius, float height, UnityEngine_Color_o color, float duration, const MethodInfo* method);
// 0x5dde2d0

void Utility_CustomDebug__SpawnCapsule_5cde2d0
               (UnityEngine_Vector3_o position,float radius,float height,UnityEngine_Color_o color,
               float duration,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  Utility_CustomDebug_o *pUVar5;
  UnityEngine_Quaternion_StaticFields *pUVar6;
  bool bVar7;
  Utility_CustomDebug__SpawnPrimitiveCoroutine_d__18_o *__this;
  float fStack_58;
  float fStack_54;
  float fStack_38;
  float fStack_34;
  
  if (Il2CppMethodInitialized_07548265 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CustomDebug);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07548265 = '\x01';
  }
  pUVar5 = TypeInfo_Utility_CustomDebug->static_fields->_instance;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar7 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar7) {
    pUVar5 = TypeInfo_Utility_CustomDebug->static_fields->_instance;
    if (Il2CppMethodInitialized_0753e72b == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
      Il2CppMethodInitialized_0753e72b = '\x01';
    }
    if (pUVar5 == (Utility_CustomDebug_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar6 = TypeInfo_UnityEngine_Quaternion->static_fields;
    uVar1 = (pUVar6->identityQuaternion).fields.x;
    uVar3 = (pUVar6->identityQuaternion).fields.y;
    uVar2 = (pUVar6->identityQuaternion).fields.z;
    uVar4 = (pUVar6->identityQuaternion).fields.w;
    if (Il2CppMethodInitialized_07548267 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CustomDebug_SpawnPrimitiveCoroutine_d__18);
      Il2CppMethodInitialized_07548267 = '\x01';
    }
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_Utility_CustomDebug_SpawnPrimitiveCoroutine_d__18);
    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    (__this->fields).__1__state = 0;
    (__this->fields).__4__this = pUVar5;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__4__this);
    (__this->fields).type = 1;
    (__this->fields).position.fields.x = position.fields.x;
    (__this->fields).position.fields.y = position.fields.y;
    (__this->fields).position.fields.z = position.fields.z;
    (__this->fields).Rotation.fields.x = (float)uVar1;
    (__this->fields).Rotation.fields.y = (float)uVar3;
    (__this->fields).Rotation.fields.z = (float)uVar2;
    (__this->fields).Rotation.fields.w = (float)uVar4;
    (__this->fields).size.fields.x = radius;
    (__this->fields).size.fields.y = height;
    (__this->fields).size.fields.z = radius;
    fStack_38 = color.fields.r;
    fStack_34 = color.fields.g;
    (__this->fields).color.fields.r = fStack_38;
    (__this->fields).color.fields.g = fStack_34;
    (__this->fields).color.fields.b = color.fields.b;
    (__this->fields).color.fields.a = color.fields.a;
    (__this->fields).duration = duration;
    UnityEngine_MonoBehaviour__StartCoroutine_691c390
              ((UnityEngine_MonoBehaviour_o *)pUVar5,(System_Collections_IEnumerator_o *)__this,
               (MethodInfo *)0x0);
    return;
  }
  return;
}


// Utility.CustomDebug$$DrawLineCoroutine
// il2cpp: System_Collections_IEnumerator_o* Utility_CustomDebug__DrawLineCoroutine (Utility_CustomDebug_o* __this, UnityEngine_Vector3_o start, UnityEngine_Vector3_o end, UnityEngine_Color_o color, float duration, const MethodInfo* method);
// 0x5ddda40

System_Collections_IEnumerator_o *
Utility_CustomDebug__DrawLineCoroutine
          (Utility_CustomDebug_o *__this,UnityEngine_Vector3_o start,UnityEngine_Vector3_o end,
          UnityEngine_Color_o color,float duration,MethodInfo *method)

{
  Utility_CustomDebug__DrawLineCoroutine_d__17_o *__this_00;
  float local_28;
  float fStack_24;
  
  if (Il2CppMethodInitialized_07548266 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CustomDebug_DrawLineCoroutine_d__17);
    Il2CppMethodInitialized_07548266 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_CustomDebug_DrawLineCoroutine_d__17);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).start.fields.x = start.fields.x;
  (__this_00->fields).start.fields.y = start.fields.y;
  (__this_00->fields).start.fields.z = start.fields.z;
  (__this_00->fields).end.fields.x = end.fields.x;
  (__this_00->fields).end.fields.y = end.fields.y;
  (__this_00->fields).end.fields.z = end.fields.z;
  local_28 = color.fields.r;
  fStack_24 = color.fields.g;
  (__this_00->fields).color.fields.r = local_28;
  (__this_00->fields).color.fields.g = fStack_24;
  (__this_00->fields).color.fields.b = color.fields.b;
  (__this_00->fields).color.fields.a = color.fields.a;
  (__this_00->fields).duration = duration;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Utility.CustomDebug$$SpawnPrimitiveCoroutine
// il2cpp: System_Collections_IEnumerator_o* Utility_CustomDebug__SpawnPrimitiveCoroutine (Utility_CustomDebug_o* __this, int32_t type, UnityEngine_Vector3_o position, UnityEngine_Quaternion_o Rotation, UnityEngine_Vector3_o size, UnityEngine_Color_o color, float duration, const MethodInfo* method);
// 0x5ddde40

System_Collections_IEnumerator_o *
Utility_CustomDebug__SpawnPrimitiveCoroutine
          (Utility_CustomDebug_o *__this,int32_t type,UnityEngine_Vector3_o position,
          UnityEngine_Quaternion_o Rotation,UnityEngine_Vector3_o size,UnityEngine_Color_o color,
          float duration,MethodInfo *method)

{
  Utility_CustomDebug__SpawnPrimitiveCoroutine_d__18_o *__this_00;
  float fStack_68;
  float fStack_64;
  float fStack_38;
  float fStack_34;
  
  if (Il2CppMethodInitialized_07548267 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CustomDebug_SpawnPrimitiveCoroutine_d__18);
    Il2CppMethodInitialized_07548267 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Utility_CustomDebug_SpawnPrimitiveCoroutine_d__18);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  (__this_00->fields).type = type;
  (__this_00->fields).position.fields.x = position.fields.x;
  (__this_00->fields).position.fields.y = position.fields.y;
  (__this_00->fields).position.fields.z = position.fields.z;
  fStack_68 = Rotation.fields.x;
  fStack_64 = Rotation.fields.y;
  (__this_00->fields).Rotation.fields.x = fStack_68;
  (__this_00->fields).Rotation.fields.y = fStack_64;
  (__this_00->fields).Rotation.fields.z = Rotation.fields.z;
  (__this_00->fields).Rotation.fields.w = Rotation.fields.w;
  (__this_00->fields).size.fields.x = size.fields.x;
  (__this_00->fields).size.fields.y = size.fields.y;
  (__this_00->fields).size.fields.z = size.fields.z;
  fStack_38 = color.fields.r;
  fStack_34 = color.fields.g;
  (__this_00->fields).color.fields.r = fStack_38;
  (__this_00->fields).color.fields.g = fStack_34;
  (__this_00->fields).color.fields.b = color.fields.b;
  (__this_00->fields).color.fields.a = color.fields.a;
  (__this_00->fields).duration = duration;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Utility.CustomDebug$$DrawLineObject
// il2cpp: UnityEngine_GameObject_o* Utility_CustomDebug__DrawLineObject (Utility_CustomDebug_o* __this, UnityEngine_Vector3_o start, UnityEngine_Vector3_o end, UnityEngine_Color_o color, float duration, const MethodInfo* method);
// 0x5ddc930

UnityEngine_GameObject_o *
Utility_CustomDebug__DrawLineObject
          (Utility_CustomDebug_o *__this,UnityEngine_Vector3_o start,UnityEngine_Vector3_o end,
          UnityEngine_Color_o color,float duration,MethodInfo *method)

{
  UnityEngine_Object_o *obj;
  UnityEngine_LineRenderer_o *__this_00;
  UnityEngine_Shader_o *shader;
  UnityEngine_Material_o *__this_01;
  
  if (Il2CppMethodInitialized_07548268 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_LineRenderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Material);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"DebugLine");
    il2cpp_codegen_initialize_runtime_metadata(&"Sprites/Default");
    Il2CppMethodInitialized_07548268 = '\x01';
  }
  obj = (UnityEngine_Object_o *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
  UnityEngine_GameObject___ctor((UnityEngine_GameObject_o *)obj,"DebugLine",(MethodInfo *)0x0);
  if (obj != (UnityEngine_Object_o *)0x0) {
    __this_00 = UnityEngine_GameObject__AddComponent_object_
                          ((UnityEngine_GameObject_o *)obj,
                           (MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_LineRenderer);
    if (__this_00 != (UnityEngine_LineRenderer_o *)0x0) {
      UnityEngine_LineRenderer__set_positionCount(__this_00,2,(MethodInfo *)0x0);
      UnityEngine_LineRenderer__SetPosition(__this_00,0,start,(MethodInfo *)0x0);
      UnityEngine_LineRenderer__SetPosition(__this_00,1,end,(MethodInfo *)0x0);
      shader = UnityEngine_Shader__Find("Sprites/Default",(MethodInfo *)0x0);
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Material);
      UnityEngine_Material___ctor(__this_01,shader,(MethodInfo *)0x0);
      UnityEngine_Renderer__set_material((UnityEngine_Renderer_o *)__this_00,__this_01,(MethodInfo *)0x0);
      UnityEngine_LineRenderer__set_endColor(__this_00,color,(MethodInfo *)0x0);
      UnityEngine_LineRenderer__set_startColor(__this_00,color,(MethodInfo *)0x0);
      UnityEngine_LineRenderer__set_endWidth(__this_00,0.05,(MethodInfo *)0x0);
      UnityEngine_LineRenderer__set_startWidth(__this_00,0.05,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      UnityEngine_Object__Destroy(obj,duration,(MethodInfo *)0x0);
      return (UnityEngine_GameObject_o *)obj;
    }
  }
  ThrowNullReferenceException();
}


// Utility.CustomDebug$$SpawnPrimitiveObject
// il2cpp: UnityEngine_GameObject_o* Utility_CustomDebug__SpawnPrimitiveObject (Utility_CustomDebug_o* __this, int32_t type, UnityEngine_Vector3_o position, UnityEngine_Quaternion_o Rotation, UnityEngine_Vector3_o size, UnityEngine_Color_o color, const MethodInfo* method);
// 0x5ddcda0

UnityEngine_GameObject_o *
Utility_CustomDebug__SpawnPrimitiveObject
          (Utility_CustomDebug_o *__this,int32_t type,UnityEngine_Vector3_o position,
          UnityEngine_Quaternion_o Rotation,UnityEngine_Vector3_o size,UnityEngine_Color_o color,
          MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Object_o *__this_00;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_Object_o *pUVar3;
  UnityEngine_Shader_o *shader;
  UnityEngine_Material_o *pUVar4;
  
  if (Il2CppMethodInitialized_07548269 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Collider);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Renderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Material);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"DebugPrimitive");
    il2cpp_codegen_initialize_runtime_metadata(&"Universal Render Pipeline/Lit");
    Il2CppMethodInitialized_07548269 = '\x01';
  }
  __this_00 = (UnityEngine_Object_o *)UnityEngine_GameObject__CreatePrimitive(type,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_Object_o *)0x0) {
    UnityEngine_Object__set_name(__this_00,"DebugPrimitive",(MethodInfo *)0x0);
    pUVar2 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)__this_00,(MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__set_position(pUVar2,position,(MethodInfo *)0x0);
      pUVar2 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)__this_00,(MethodInfo *)0x0);
      if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__set_rotation(pUVar2,Rotation,(MethodInfo *)0x0);
        pUVar2 = UnityEngine_GameObject__get_transform
                           ((UnityEngine_GameObject_o *)__this_00,(MethodInfo *)0x0);
        if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__set_localScale(pUVar2,size,(MethodInfo *)0x0);
          pUVar3 = (UnityEngine_Object_o *)
                   UnityEngine_GameObject__GetComponent_object_
                             ((UnityEngine_GameObject_o *)__this_00,
                              (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Renderer);
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar1 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar1) {
            shader = UnityEngine_Shader__Find("Universal Render Pipeline/Lit",(MethodInfo *)0x0);
            pUVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Material);
            UnityEngine_Material___ctor(pUVar4,shader,(MethodInfo *)0x0);
            if (pUVar3 == (UnityEngine_Object_o *)0x0) goto label_05ddcfd4;
            UnityEngine_Renderer__set_material((UnityEngine_Renderer_o *)pUVar3,pUVar4,(MethodInfo *)0x0);
            pUVar4 = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)pUVar3,(MethodInfo *)0x0);
            if (pUVar4 == (UnityEngine_Material_o *)0x0) goto label_05ddcfd4;
            UnityEngine_Material__set_color(pUVar4,color,(MethodInfo *)0x0);
          }
          pUVar3 = (UnityEngine_Object_o *)
                   UnityEngine_GameObject__GetComponent_object_
                             ((UnityEngine_GameObject_o *)__this_00,
                              (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Collider);
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar1 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar1) {
            if (pUVar3 == (UnityEngine_Object_o *)0x0) goto label_05ddcfd4;
            UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)pUVar3,false,(MethodInfo *)0x0);
          }
          return (UnityEngine_GameObject_o *)__this_00;
        }
      }
    }
  }
label_05ddcfd4:
  ThrowNullReferenceException();
}


// Utility.CustomDebug$$.ctor
// il2cpp: void Utility_CustomDebug___ctor (Utility_CustomDebug_o* __this, const MethodInfo* method);
// 0x5dde4e0

void Utility_CustomDebug___ctor(Utility_CustomDebug_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__GameObject__o *__this_00;
  
  if (Il2CppMethodInitialized_0754826a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_GameObject);
    Il2CppMethodInitialized_0754826a = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_GameObject);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
             (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_ctor);
  (__this->fields)._debugObjects = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._debugObjects);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


