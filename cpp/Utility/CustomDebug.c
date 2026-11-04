// Type: Utility.CustomDebug
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Utility/CustomDebug.cs
// Prior real C# source: none
// --------------------------------

// Utility.CustomDebug.<DrawLineCoroutine>d__17$$.ctor
// il2cpp: void Utility_CustomDebug__DrawLineCoroutine_d__17___ctor (Utility_CustomDebug__DrawLineCoroutine_d__17_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
Utility_CustomDebug__DrawLineCoroutine_d__17___ctor(Utility_CustomDebug__DrawLineCoroutine_d__17_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Utility.CustomDebug.<DrawLineCoroutine>d__17$$System.IDisposable.Dispose
// il2cpp: void Utility_CustomDebug__DrawLineCoroutine_d__17__System_IDisposable_Dispose (Utility_CustomDebug__DrawLineCoroutine_d__17_o* __this, const MethodInfo* method);
// 0x180547020

void
Utility_CustomDebug__DrawLineCoroutine_d__17__System_IDisposable_Dispose(Utility_CustomDebug__DrawLineCoroutine_d__17_o* __this, MethodInfo* method)

{
  return;
}


// Utility.CustomDebug.<DrawLineCoroutine>d__17$$MoveNext
// il2cpp: bool Utility_CustomDebug__DrawLineCoroutine_d__17__MoveNext (Utility_CustomDebug__DrawLineCoroutine_d__17_o* __this, const MethodInfo* method);
// 0x18233fa50

bool Utility_CustomDebug__DrawLineCoroutine_d__17__MoveNext
               (Utility_CustomDebug__DrawLineCoroutine_d__17_o *__this,MethodInfo *method)

{
  float amplificationFactor;
  int iVar1;
  UnityEngine_Object_o *obj;
  undefined8 uVar2;
  undefined8 uVar3;
  UnityEngine_GameObject_o *pUVar4;
  UnityEngine_LineRenderer_o *__this_00;
  UnityEngine_Shader_o *shader;
  UnityEngine_Material_o *__this_01;
  Photon_Voice_Unity_UtilityScripts_MicAmplifierShort_o *__this_02;
  UnityEngine_Color_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_1843477d3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_LineRenderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Material);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForSeconds);
    il2cpp_codegen_initialize_runtime_metadata(&"DebugLine");
    il2cpp_codegen_initialize_runtime_metadata(&"Sprites/Default");
    Il2CppMethodInitialized_1843477d3 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    pUVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
    UnityEngine_GameObject___ctor(pUVar4,"DebugLine",(MethodInfo *)0x0);
    (__this->fields)._lineObj_5__2 = pUVar4;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._lineObj_5__2,pUVar4);
    pUVar4 = (__this->fields)._lineObj_5__2;
    if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
      __this_00 = UnityEngine_GameObject__AddComponent_object_
                            (pUVar4,(MethodInfo_6F4D60 *)
                                    MethodInfo_UnityEngine_GameObject_AddComponent_LineRenderer);
      if (__this_00 != (UnityEngine_LineRenderer_o *)0x0) {
        UnityEngine_LineRenderer__set_positionCount(__this_00,2,(MethodInfo *)0x0);
        local_28[0].b = (__this->fields).start.fields.z;
        local_28[0].r = (__this->fields).start.fields.x;
        local_28[0].g = (__this->fields).start.fields.y;
        UnityEngine_LineRenderer__SetPosition(__this_00,0,(UnityEngine_Vector3_o *)local_28,(MethodInfo *)0x0)
        ;
        local_28[0].r = (__this->fields).end.fields.x;
        local_28[0].g = (__this->fields).end.fields.y;
        local_28[0].b = (__this->fields).end.fields.z;
        UnityEngine_LineRenderer__SetPosition(__this_00,1,(UnityEngine_Vector3_o *)local_28,(MethodInfo *)0x0)
        ;
        shader = UnityEngine_Shader__Find("Sprites/Default",(MethodInfo *)0x0);
        __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Material);
        UnityEngine_Material___ctor(__this_01,shader,(MethodInfo *)0x0);
        UnityEngine_Renderer__set_sharedMaterial
                  ((UnityEngine_Renderer_o *)__this_00,__this_01,(MethodInfo *)0x0);
        uVar2._0_4_ = (__this->fields).color.fields.r;
        uVar2._4_4_ = (__this->fields).color.fields.g;
        uVar3._0_4_ = (__this->fields).color.fields.b;
        uVar3._4_4_ = (__this->fields).color.fields.a;
        local_28[0]._0_8_ = uVar2;
        local_28[0]._8_8_ = uVar3;
        UnityEngine_LineRenderer__set_endColor(__this_00,(UnityEngine_Color_o *)local_28,(MethodInfo *)0x0);
        local_28[0]._0_8_ = uVar2;
        local_28[0]._8_8_ = uVar3;
        UnityEngine_LineRenderer__set_startColor(__this_00,(UnityEngine_Color_o *)local_28,(MethodInfo *)0x0);
        UnityEngine_LineRenderer__set_endWidth(__this_00,0.05,(MethodInfo *)0x0);
        UnityEngine_LineRenderer__set_startWidth(__this_00,0.05,(MethodInfo *)0x0);
        amplificationFactor = (__this->fields).duration;
        __this_02 = (Photon_Voice_Unity_UtilityScripts_MicAmplifierShort_o *)
                    il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
        UnityEngine_WaitForSeconds___ctor
                  (__this_02,amplificationFactor,(MethodInfo *)0x0);
        (__this->fields).__2__current = (Il2CppObject *)__this_02;
        Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,__this_02);
        (__this->fields).__1__state = 1;
        return true;
      }
    }
    ThrowNullReferenceException();
  }
  if (iVar1 == 1) {
    obj = (UnityEngine_Object_o *)(__this->fields)._lineObj_5__2;
    (__this->fields).__1__state = -1;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_2f1ff70(obj,(MethodInfo *)0x0);
  }
  return false;
}


// Utility.CustomDebug.<DrawLineCoroutine>d__17$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Utility_CustomDebug__DrawLineCoroutine_d__17__System_Collections_Generic_IEnumerator_System_Object__get_Current (Utility_CustomDebug__DrawLineCoroutine_d__17_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Utility_CustomDebug__DrawLineCoroutine_d__17__System_Collections_Generic_IEnumerator_System_Object__get_Current(Utility_CustomDebug__DrawLineCoroutine_d__17_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Utility.CustomDebug.<DrawLineCoroutine>d__17$$System.Collections.IEnumerator.Reset
// il2cpp: void Utility_CustomDebug__DrawLineCoroutine_d__17__System_Collections_IEnumerator_Reset (Utility_CustomDebug__DrawLineCoroutine_d__17_o* __this, const MethodInfo* method);
// 0x18233fcc0

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
// 0x180573e90

Il2CppObject*
Utility_CustomDebug__DrawLineCoroutine_d__17__System_Collections_IEnumerator_get_Current(Utility_CustomDebug__DrawLineCoroutine_d__17_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Utility.CustomDebug.<SpawnPrimitiveCoroutine>d__18$$.ctor
// il2cpp: void Utility_CustomDebug__SpawnPrimitiveCoroutine_d__18___ctor (Utility_CustomDebug__SpawnPrimitiveCoroutine_d__18_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
Utility_CustomDebug__SpawnPrimitiveCoroutine_d__18___ctor(Utility_CustomDebug__SpawnPrimitiveCoroutine_d__18_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Utility.CustomDebug.<SpawnPrimitiveCoroutine>d__18$$System.IDisposable.Dispose
// il2cpp: void Utility_CustomDebug__SpawnPrimitiveCoroutine_d__18__System_IDisposable_Dispose (Utility_CustomDebug__SpawnPrimitiveCoroutine_d__18_o* __this, const MethodInfo* method);
// 0x180547020

void
Utility_CustomDebug__SpawnPrimitiveCoroutine_d__18__System_IDisposable_Dispose(Utility_CustomDebug__SpawnPrimitiveCoroutine_d__18_o* __this, MethodInfo* method)

{
  return;
}


// Utility.CustomDebug.<SpawnPrimitiveCoroutine>d__18$$MoveNext
// il2cpp: bool Utility_CustomDebug__SpawnPrimitiveCoroutine_d__18__MoveNext (Utility_CustomDebug__SpawnPrimitiveCoroutine_d__18_o* __this, const MethodInfo* method);
// 0x182340370

bool Utility_CustomDebug__SpawnPrimitiveCoroutine_d__18__MoveNext
               (Utility_CustomDebug__SpawnPrimitiveCoroutine_d__18_o *__this,MethodInfo *method)

{
  float amplificationFactor;
  int iVar1;
  Utility_CustomDebug_o *__this_00;
  UnityEngine_Object_o *pUVar2;
  bool bVar3;
  UnityEngine_GameObject_o *value;
  Photon_Voice_Unity_UtilityScripts_MicAmplifierShort_o *__this_01;
  UnityEngine_Vector3_Fields local_58;
  UnityEngine_Vector3_Fields local_48;
  UnityEngine_Color_Fields local_38;
  UnityEngine_Quaternion_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_1843477d4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForSeconds);
    Il2CppMethodInitialized_1843477d4 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 0) {
    __this_00 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (__this_00 != (Utility_CustomDebug_o *)0x0) {
      local_58.z = (__this->fields).size.fields.z;
      local_38.r = (__this->fields).color.fields.r;
      local_38.g = (__this->fields).color.fields.g;
      local_38.b = (__this->fields).color.fields.b;
      local_38.a = (__this->fields).color.fields.a;
      local_58.x = (__this->fields).size.fields.x;
      local_58.y = (__this->fields).size.fields.y;
      local_48.z = (__this->fields).position.fields.z;
      local_28[0].x = (__this->fields).Rotation.fields.x;
      local_28[0].y = (__this->fields).Rotation.fields.y;
      local_28[0].z = (__this->fields).Rotation.fields.z;
      local_28[0].w = (__this->fields).Rotation.fields.w;
      local_48.x = (__this->fields).position.fields.x;
      local_48.y = (__this->fields).position.fields.y;
      value = Utility_CustomDebug__SpawnPrimitiveObject
                        (__this_00,(__this->fields).type,(UnityEngine_Vector3_o *)&local_48,
                         (UnityEngine_Quaternion_o *)local_28,(UnityEngine_Vector3_o *)&local_58,
                         (UnityEngine_Color_o *)&local_38,(MethodInfo *)0x0);
      (__this->fields)._obj_5__2 = value;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._obj_5__2,value);
      amplificationFactor = (__this->fields).duration;
      __this_01 = (Photon_Voice_Unity_UtilityScripts_MicAmplifierShort_o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
      UnityEngine_WaitForSeconds___ctor
                (__this_01,amplificationFactor,(MethodInfo *)0x0);
      (__this->fields).__2__current = (Il2CppObject *)__this_01;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,__this_01);
      (__this->fields).__1__state = 1;
      return true;
    }
    ThrowNullReferenceException();
  }
  if (iVar1 == 1) {
    pUVar2 = (UnityEngine_Object_o *)(__this->fields)._obj_5__2;
    (__this->fields).__1__state = -1;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      pUVar2 = (UnityEngine_Object_o *)(__this->fields)._obj_5__2;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      UnityEngine_Object__Destroy_2f1ff70(pUVar2,(MethodInfo *)0x0);
    }
  }
  return false;
}


// Utility.CustomDebug.<SpawnPrimitiveCoroutine>d__18$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Utility_CustomDebug__SpawnPrimitiveCoroutine_d__18__System_Collections_Generic_IEnumerator_System_Object__get_Current (Utility_CustomDebug__SpawnPrimitiveCoroutine_d__18_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Utility_CustomDebug__SpawnPrimitiveCoroutine_d__18__System_Collections_Generic_IEnumerator_System_Object__get_Current(Utility_CustomDebug__SpawnPrimitiveCoroutine_d__18_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Utility.CustomDebug.<SpawnPrimitiveCoroutine>d__18$$System.Collections.IEnumerator.Reset
// il2cpp: void Utility_CustomDebug__SpawnPrimitiveCoroutine_d__18__System_Collections_IEnumerator_Reset (Utility_CustomDebug__SpawnPrimitiveCoroutine_d__18_o* __this, const MethodInfo* method);
// 0x182340510

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
// 0x180573e90

Il2CppObject*
Utility_CustomDebug__SpawnPrimitiveCoroutine_d__18__System_Collections_IEnumerator_get_Current(Utility_CustomDebug__SpawnPrimitiveCoroutine_d__18_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Utility.CustomDebug$$Init
// il2cpp: void Utility_CustomDebug__Init (const MethodInfo* method);
// 0x1823331e0

void Utility_CustomDebug__Init(MethodInfo *method)

{
  Utility_CustomDebug_o *value;
  
  if (Il2CppMethodInitialized_1843477bf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CustomDebug);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Utility_SingletonFactory_CreateSingleton_CustomDebug);
    Il2CppMethodInitialized_1843477bf = '\x01';
  }
  value = Utility_SingletonFactory__CreateSingleton_object_
                    ((Il2CppObject *)TypeInfo_Utility_CustomDebug->static_fields->_instance,
                     (MethodInfo_798ED0 *)MethodInfo_Utility_SingletonFactory_CreateSingleton_CustomDebug);
  TypeInfo_Utility_CustomDebug->static_fields->_instance = value;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Utility_CustomDebug->static_fields->_instance,value);
  return;
}


// Utility.CustomDebug$$RemoveDebugVisual
// il2cpp: void Utility_CustomDebug__RemoveDebugVisual (System_String_o* name, const MethodInfo* method);
// 0x182333260

void Utility_CustomDebug__RemoveDebugVisual(System_String_o *name,MethodInfo *method)

{
  Utility_CustomDebug_o *pUVar1;
  System_Collections_Generic_Dictionary_string__GameObject__o *__this;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  bool bVar3;
  UnityEngine_Object_o *obj;
  
  if (Il2CppMethodInitialized_1843477c0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CustomDebug);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_Remove);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843477c0 = '\x01';
  }
  pUVar1 = TypeInfo_Utility_CustomDebug->static_fields->_instance;
  if ((pUVar1 != (Utility_CustomDebug_o *)0x0) &&
     (__this = (pUVar1->fields)._debugObjects,
     __this != (System_Collections_Generic_Dictionary_string__GameObject__o *)0x0)) {
    bVar3 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,(Il2CppObject *)name,
                       (MethodInfo_1455450 *)
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
                       (MethodInfo_147A5B0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_get_Item);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      UnityEngine_Object__Destroy_2f1ff70(obj,(MethodInfo *)0x0);
      pUVar1 = TypeInfo_Utility_CustomDebug->static_fields->_instance;
      if ((pUVar1 != (Utility_CustomDebug_o *)0x0) &&
         (pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(pUVar1->fields)._debugObjects,
         pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
        System_Collections_Generic_Dictionary_object__object___Remove
                  (pSVar2,(Il2CppObject *)name,
                   (MethodInfo_1470BF0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_Remove);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Utility.CustomDebug$$DrawRay
// il2cpp: System_String_o* Utility_CustomDebug__DrawRay (UnityEngine_Vector3_o origin, UnityEngine_Vector3_o direction, UnityEngine_Color_o color, System_String_o* name, const MethodInfo* method);
// 0x1823330b0

System_String_o *
Utility_CustomDebug__DrawRay
          (UnityEngine_Vector3_o *origin,UnityEngine_Vector3_o *direction,UnityEngine_Color_o *color,
          System_String_o *name,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  Utility_CustomDebug_o *pUVar5;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  UnityEngine_Object_o *__this_00;
  System_String_o *key;
  undefined8 uVar6;
  UnityEngine_Vector3_Fields local_58;
  UnityEngine_Vector3_Fields local_48;
  UnityEngine_Color_Fields local_38;
  
  if (Il2CppMethodInitialized_1843477c1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CustomDebug);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_Add);
    Il2CppMethodInitialized_1843477c1 = '\x01';
  }
  Utility_CustomDebug__RemoveDebugVisual(name,(MethodInfo *)0x0);
  uVar1 = (origin->fields).x;
  uVar3 = (origin->fields).y;
  uVar2 = (direction->fields).x;
  uVar4 = (direction->fields).y;
  uVar6._0_4_ = (float)uVar2 + (float)uVar1;
  uVar6._4_4_ = (float)uVar4 + (float)uVar3;
  pUVar5 = TypeInfo_Utility_CustomDebug->static_fields->_instance;
  if (pUVar5 != (Utility_CustomDebug_o *)0x0) {
    local_38.r = (color->fields).r;
    local_38.g = (color->fields).g;
    local_38.b = (color->fields).b;
    local_38.a = (color->fields).a;
    local_48.z = (origin->fields).z;
    local_58.z = (direction->fields).z + (origin->fields).z;
    local_48.x = (origin->fields).x;
    local_48.y = (origin->fields).y;
    local_58._0_8_ = uVar6;
    __this_00 = (UnityEngine_Object_o *)
                Utility_CustomDebug__DrawLineObject
                          (pUVar5,(UnityEngine_Vector3_o *)&local_48,(UnityEngine_Vector3_o *)&local_58,
                           (UnityEngine_Color_o *)&local_38,0.0,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_Object_o *)0x0) {
      UnityEngine_Object__set_name(__this_00,name,(MethodInfo *)0x0);
      pUVar5 = TypeInfo_Utility_CustomDebug->static_fields->_instance;
      if (pUVar5 != (Utility_CustomDebug_o *)0x0) {
        __this = (System_Collections_Generic_Dictionary_object__object__o *)(pUVar5->fields)._debugObjects;
        key = UnityEngine_Object__get_name(__this_00,(MethodInfo *)0x0);
        if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary_object__object___Add
                    (__this,(Il2CppObject *)key,(Il2CppObject *)__this_00,
                     (MethodInfo_146B4B0 *)
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
// 0x182332e40

System_String_o *
Utility_CustomDebug__DrawLine
          (UnityEngine_Vector3_o *start,UnityEngine_Vector3_o *end,UnityEngine_Color_o *color,
          System_String_o *name,MethodInfo *method)

{
  Utility_CustomDebug_o *pUVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  UnityEngine_Object_o *__this_00;
  System_String_o *key;
  UnityEngine_Vector3_Fields local_58;
  UnityEngine_Vector3_Fields local_48;
  UnityEngine_Color_Fields local_38;
  
  if (Il2CppMethodInitialized_1843477c2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CustomDebug);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_Add);
    Il2CppMethodInitialized_1843477c2 = '\x01';
  }
  Utility_CustomDebug__RemoveDebugVisual(name,(MethodInfo *)0x0);
  pUVar1 = TypeInfo_Utility_CustomDebug->static_fields->_instance;
  if (pUVar1 != (Utility_CustomDebug_o *)0x0) {
    local_38.r = (color->fields).r;
    local_38.g = (color->fields).g;
    local_38.b = (color->fields).b;
    local_38.a = (color->fields).a;
    local_58.z = (end->fields).z;
    local_58.x = (end->fields).x;
    local_58.y = (end->fields).y;
    local_48.x = (start->fields).x;
    local_48.y = (start->fields).y;
    local_48.z = (start->fields).z;
    __this_00 = (UnityEngine_Object_o *)
                Utility_CustomDebug__DrawLineObject
                          (pUVar1,(UnityEngine_Vector3_o *)&local_48,(UnityEngine_Vector3_o *)&local_58,
                           (UnityEngine_Color_o *)&local_38,0.0,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_Object_o *)0x0) {
      UnityEngine_Object__set_name(__this_00,name,(MethodInfo *)0x0);
      pUVar1 = TypeInfo_Utility_CustomDebug->static_fields->_instance;
      if (pUVar1 != (Utility_CustomDebug_o *)0x0) {
        __this = (System_Collections_Generic_Dictionary_object__object__o *)(pUVar1->fields)._debugObjects;
        key = UnityEngine_Object__get_name(__this_00,(MethodInfo *)0x0);
        if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary_object__object___Add
                    (__this,(Il2CppObject *)key,(Il2CppObject *)__this_00,
                     (MethodInfo_146B4B0 *)
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
// 0x182333dd0

System_String_o *
Utility_CustomDebug__SpawnCube
          (UnityEngine_Vector3_o *position,UnityEngine_Color_o *color,System_String_o *name,MethodInfo *method
          )

{
  Utility_CustomDebug_o *pUVar1;
  UnityEngine_Quaternion_StaticFields *pUVar2;
  UnityEngine_Vector3_StaticFields *pUVar3;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  undefined8 uVar4;
  undefined8 uVar5;
  UnityEngine_Object_o *__this_00;
  System_String_o *key;
  UnityEngine_Vector3_Fields local_78;
  UnityEngine_Vector3_Fields local_68;
  UnityEngine_Color_Fields local_58;
  UnityEngine_Quaternion_Fields local_48 [2];
  
  if (Il2CppMethodInitialized_1843477c3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CustomDebug);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_Add);
    Il2CppMethodInitialized_1843477c3 = '\x01';
  }
  Utility_CustomDebug__RemoveDebugVisual(name,(MethodInfo *)0x0);
  pUVar1 = TypeInfo_Utility_CustomDebug->static_fields->_instance;
  if (Il2CppMethodInitialized_18433de5b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
    Il2CppMethodInitialized_18433de5b = '\x01';
  }
  pUVar2 = TypeInfo_UnityEngine_Quaternion->static_fields;
  uVar4._0_4_ = (pUVar2->identityQuaternion).fields.x;
  uVar4._4_4_ = (pUVar2->identityQuaternion).fields.y;
  uVar5._0_4_ = (pUVar2->identityQuaternion).fields.z;
  uVar5._4_4_ = (pUVar2->identityQuaternion).fields.w;
  if (Il2CppMethodInitialized_18433dbeb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433dbeb = '\x01';
  }
  if (pUVar1 != (Utility_CustomDebug_o *)0x0) {
    local_58.r = (color->fields).r;
    local_58.g = (color->fields).g;
    local_58.b = (color->fields).b;
    local_58.a = (color->fields).a;
    pUVar3 = TypeInfo_UnityEngine_Vector3->static_fields;
    local_78.x = (pUVar3->oneVector).fields.x;
    local_78.y = (pUVar3->oneVector).fields.y;
    local_78.z = (pUVar3->oneVector).fields.z;
    local_68.z = (position->fields).z;
    local_68.x = (position->fields).x;
    local_68.y = (position->fields).y;
    local_48[0]._0_8_ = uVar4;
    local_48[0]._8_8_ = uVar5;
    __this_00 = (UnityEngine_Object_o *)
                Utility_CustomDebug__SpawnPrimitiveObject
                          (pUVar1,3,(UnityEngine_Vector3_o *)&local_68,(UnityEngine_Quaternion_o *)local_48,
                           (UnityEngine_Vector3_o *)&local_78,(UnityEngine_Color_o *)&local_58,
                           (MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_Object_o *)0x0) {
      UnityEngine_Object__set_name(__this_00,name,(MethodInfo *)0x0);
      pUVar1 = TypeInfo_Utility_CustomDebug->static_fields->_instance;
      if (pUVar1 != (Utility_CustomDebug_o *)0x0) {
        __this = (System_Collections_Generic_Dictionary_object__object__o *)(pUVar1->fields)._debugObjects;
        key = UnityEngine_Object__get_name(__this_00,(MethodInfo *)0x0);
        if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary_object__object___Add
                    (__this,(Il2CppObject *)key,(Il2CppObject *)__this_00,
                     (MethodInfo_146B4B0 *)
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
// 0x182334780

System_String_o *
Utility_CustomDebug__SpawnSphere
          (UnityEngine_Vector3_o *position,float radius,UnityEngine_Color_o *color,System_String_o *name,
          MethodInfo *method)

{
  Utility_CustomDebug_o *pUVar1;
  UnityEngine_Quaternion_StaticFields *pUVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  UnityEngine_Object_o *__this_00;
  System_String_o *key;
  UnityEngine_Vector3_o local_78;
  UnityEngine_Vector3_Fields local_68;
  UnityEngine_Color_Fields local_58;
  UnityEngine_Quaternion_Fields local_48 [2];
  
  if (Il2CppMethodInitialized_1843477c4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CustomDebug);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_Add);
    Il2CppMethodInitialized_1843477c4 = '\x01';
  }
  Utility_CustomDebug__RemoveDebugVisual(name,(MethodInfo *)0x0);
  pUVar1 = TypeInfo_Utility_CustomDebug->static_fields->_instance;
  if (Il2CppMethodInitialized_18433de5b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
    Il2CppMethodInitialized_18433de5b = '\x01';
  }
  if (pUVar1 != (Utility_CustomDebug_o *)0x0) {
    local_58.r = (color->fields).r;
    local_58.g = (color->fields).g;
    local_58.b = (color->fields).b;
    local_58.a = (color->fields).a;
    local_68.x = (position->fields).x;
    local_68.y = (position->fields).y;
    pUVar2 = TypeInfo_UnityEngine_Quaternion->static_fields;
    local_68.z = (position->fields).z;
    local_48[0].x = (pUVar2->identityQuaternion).fields.x;
    local_48[0].y = (pUVar2->identityQuaternion).fields.y;
    local_48[0].z = (pUVar2->identityQuaternion).fields.z;
    local_48[0].w = (pUVar2->identityQuaternion).fields.w;
    local_78.fields.x = radius;
    local_78.fields.y = radius;
    local_78.fields.z = radius;
    __this_00 = (UnityEngine_Object_o *)
                Utility_CustomDebug__SpawnPrimitiveObject
                          (pUVar1,0,(UnityEngine_Vector3_o *)&local_68,(UnityEngine_Quaternion_o *)local_48,
                           &local_78,(UnityEngine_Color_o *)&local_58,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_Object_o *)0x0) {
      UnityEngine_Object__set_name(__this_00,name,(MethodInfo *)0x0);
      pUVar1 = TypeInfo_Utility_CustomDebug->static_fields->_instance;
      if (pUVar1 != (Utility_CustomDebug_o *)0x0) {
        __this = (System_Collections_Generic_Dictionary_object__object__o *)(pUVar1->fields)._debugObjects;
        key = UnityEngine_Object__get_name(__this_00,(MethodInfo *)0x0);
        if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary_object__object___Add
                    (__this,(Il2CppObject *)key,(Il2CppObject *)__this_00,
                     (MethodInfo_146B4B0 *)
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
// 0x182334140

System_String_o *
Utility_CustomDebug__SpawnCylinder
          (UnityEngine_Vector3_o *position,float radius,float height,UnityEngine_Color_o *color,
          System_String_o *name,MethodInfo *method)

{
  Utility_CustomDebug_o *pUVar1;
  UnityEngine_Quaternion_StaticFields *pUVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  UnityEngine_Object_o *__this_00;
  System_String_o *key;
  UnityEngine_Vector3_o local_68;
  UnityEngine_Vector3_Fields local_58;
  UnityEngine_Color_Fields local_48;
  UnityEngine_Quaternion_Fields local_38 [3];
  
  if (Il2CppMethodInitialized_1843477c5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CustomDebug);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_Add);
    Il2CppMethodInitialized_1843477c5 = '\x01';
  }
  Utility_CustomDebug__RemoveDebugVisual(name,(MethodInfo *)0x0);
  pUVar1 = TypeInfo_Utility_CustomDebug->static_fields->_instance;
  if (Il2CppMethodInitialized_18433de5b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
    Il2CppMethodInitialized_18433de5b = '\x01';
  }
  if (pUVar1 != (Utility_CustomDebug_o *)0x0) {
    local_48.r = (color->fields).r;
    local_48.g = (color->fields).g;
    local_48.b = (color->fields).b;
    local_48.a = (color->fields).a;
    local_58.x = (position->fields).x;
    local_58.y = (position->fields).y;
    pUVar2 = TypeInfo_UnityEngine_Quaternion->static_fields;
    local_58.z = (position->fields).z;
    local_38[0].x = (pUVar2->identityQuaternion).fields.x;
    local_38[0].y = (pUVar2->identityQuaternion).fields.y;
    local_38[0].z = (pUVar2->identityQuaternion).fields.z;
    local_38[0].w = (pUVar2->identityQuaternion).fields.w;
    local_68.fields.x = radius;
    local_68.fields.y = height;
    local_68.fields.z = radius;
    __this_00 = (UnityEngine_Object_o *)
                Utility_CustomDebug__SpawnPrimitiveObject
                          (pUVar1,2,(UnityEngine_Vector3_o *)&local_58,(UnityEngine_Quaternion_o *)local_38,
                           &local_68,(UnityEngine_Color_o *)&local_48,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_Object_o *)0x0) {
      UnityEngine_Object__set_name(__this_00,name,(MethodInfo *)0x0);
      pUVar1 = TypeInfo_Utility_CustomDebug->static_fields->_instance;
      if (pUVar1 != (Utility_CustomDebug_o *)0x0) {
        __this = (System_Collections_Generic_Dictionary_object__object__o *)(pUVar1->fields)._debugObjects;
        key = UnityEngine_Object__get_name(__this_00,(MethodInfo *)0x0);
        if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary_object__object___Add
                    (__this,(Il2CppObject *)key,(Il2CppObject *)__this_00,
                     (MethodInfo_146B4B0 *)
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
// 0x182333a90

System_String_o *
Utility_CustomDebug__SpawnCapsule
          (UnityEngine_Vector3_o *position,float radius,float height,UnityEngine_Color_o *color,
          System_String_o *name,MethodInfo *method)

{
  Utility_CustomDebug_o *pUVar1;
  UnityEngine_Quaternion_StaticFields *pUVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  UnityEngine_Object_o *__this_00;
  System_String_o *key;
  UnityEngine_Vector3_o local_68;
  UnityEngine_Vector3_Fields local_58;
  UnityEngine_Color_Fields local_48;
  UnityEngine_Quaternion_Fields local_38 [3];
  
  if (Il2CppMethodInitialized_1843477c6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CustomDebug);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_Add);
    Il2CppMethodInitialized_1843477c6 = '\x01';
  }
  Utility_CustomDebug__RemoveDebugVisual(name,(MethodInfo *)0x0);
  pUVar1 = TypeInfo_Utility_CustomDebug->static_fields->_instance;
  if (Il2CppMethodInitialized_18433de5b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
    Il2CppMethodInitialized_18433de5b = '\x01';
  }
  if (pUVar1 != (Utility_CustomDebug_o *)0x0) {
    local_48.r = (color->fields).r;
    local_48.g = (color->fields).g;
    local_48.b = (color->fields).b;
    local_48.a = (color->fields).a;
    local_58.x = (position->fields).x;
    local_58.y = (position->fields).y;
    pUVar2 = TypeInfo_UnityEngine_Quaternion->static_fields;
    local_58.z = (position->fields).z;
    local_38[0].x = (pUVar2->identityQuaternion).fields.x;
    local_38[0].y = (pUVar2->identityQuaternion).fields.y;
    local_38[0].z = (pUVar2->identityQuaternion).fields.z;
    local_38[0].w = (pUVar2->identityQuaternion).fields.w;
    local_68.fields.x = radius;
    local_68.fields.y = height;
    local_68.fields.z = radius;
    __this_00 = (UnityEngine_Object_o *)
                Utility_CustomDebug__SpawnPrimitiveObject
                          (pUVar1,1,(UnityEngine_Vector3_o *)&local_58,(UnityEngine_Quaternion_o *)local_38,
                           &local_68,(UnityEngine_Color_o *)&local_48,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_Object_o *)0x0) {
      UnityEngine_Object__set_name(__this_00,name,(MethodInfo *)0x0);
      pUVar1 = TypeInfo_Utility_CustomDebug->static_fields->_instance;
      if (pUVar1 != (Utility_CustomDebug_o *)0x0) {
        __this = (System_Collections_Generic_Dictionary_object__object__o *)(pUVar1->fields)._debugObjects;
        key = UnityEngine_Object__get_name(__this_00,(MethodInfo *)0x0);
        if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary_object__object___Add
                    (__this,(Il2CppObject *)key,(Il2CppObject *)__this_00,
                     (MethodInfo_146B4B0 *)
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
// 0x182333390

System_String_o *
Utility_CustomDebug__SpawnCapsuleCollder
          (UnityEngine_CapsuleCollider_o *capsule,UnityEngine_Color_o *color,System_String_o *name,
          MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  Utility_CustomDebug_o *pUVar6;
  UnityEngine_Vector3_StaticFields *pUVar7;
  UnityEngine_Quaternion_StaticFields *pUVar8;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  undefined8 uVar9;
  bool bVar10;
  int32_t iVar11;
  UnityEngine_Transform_o *pUVar12;
  UnityEngine_Vector3_o *pUVar13;
  UnityEngine_Quaternion_o *pUVar14;
  UnityEngine_Object_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_GameObject_o *__this_02;
  UnityEngine_Transform_o *pUVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  UnityEngine_Quaternion_Fields local_108;
  UnityEngine_Vector3_Fields local_f8;
  UnityEngine_Vector3_Fields local_e8;
  UnityEngine_Color_Fields local_d8;
  UnityEngine_Quaternion_o local_c8 [11];
  
  if (Il2CppMethodInitialized_1843477c7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CustomDebug);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843477c7 = '\x01';
  }
  pUVar6 = TypeInfo_Utility_CustomDebug->static_fields->_instance;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar10 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar10) {
    return (System_String_o *)0x0;
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar10 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)capsule,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar10) {
    return (System_String_o *)0x0;
  }
  if (capsule == (UnityEngine_CapsuleCollider_o *)0x0) goto label_182333a7e;
  pUVar12 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)capsule,(MethodInfo *)0x0);
  pUVar13 = UnityEngine_CapsuleCollider__get_center
                      ((UnityEngine_Vector3_o *)&local_f8,capsule,(MethodInfo *)0x0);
  if (pUVar12 == (UnityEngine_Transform_o *)0x0) goto label_182333a7e;
  local_e8.z = (pUVar13->fields).z;
  local_e8.x = (pUVar13->fields).x;
  local_e8.y = (pUVar13->fields).y;
  pUVar13 = UnityEngine_Transform__TransformPoint
                      ((UnityEngine_Vector3_o *)&local_f8,pUVar12,(UnityEngine_Vector3_o *)&local_e8,
                       (MethodInfo *)0x0);
  fVar1 = (pUVar13->fields).z;
  fVar2 = (pUVar13->fields).x;
  fVar3 = (pUVar13->fields).y;
  uVar9._0_4_ = (pUVar13->fields).x;
  uVar9._4_4_ = (pUVar13->fields).y;
  fVar16 = UnityEngine_CapsuleCollider__get_radius(capsule,(MethodInfo *)0x0);
  pUVar13 = UnityEngine_Transform__get_lossyScale
                      ((UnityEngine_Vector3_o *)&local_e8,pUVar12,(MethodInfo *)0x0);
  fVar19 = (pUVar13->fields).x;
  pUVar13 = UnityEngine_Transform__get_lossyScale
                      ((UnityEngine_Vector3_o *)&local_e8,pUVar12,(MethodInfo *)0x0);
  fVar23 = (pUVar13->fields).z;
  fVar17 = UnityEngine_CapsuleCollider__get_height(capsule,(MethodInfo *)0x0);
  pUVar13 = UnityEngine_Transform__get_lossyScale
                      ((UnityEngine_Vector3_o *)&local_e8,pUVar12,(MethodInfo *)0x0);
  fVar18 = (pUVar13->fields).y;
  if (Il2CppMethodInitialized_18433de5c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433de5c = '\x01';
  }
  if (fVar19 <= fVar23) {
    fVar19 = fVar23;
  }
  pUVar7 = TypeInfo_UnityEngine_Vector3->static_fields;
  fVar19 = fVar19 * fVar16;
  fVar23 = (pUVar7->upVector).fields.x;
  fVar16 = (pUVar7->upVector).fields.y;
  fVar22 = (pUVar7->upVector).fields.z;
  iVar11 = UnityEngine_CapsuleCollider__get_direction(capsule,(MethodInfo *)0x0);
  if (iVar11 == 0) {
    pUVar13 = UnityEngine_Transform__get_right((UnityEngine_Vector3_o *)&local_e8,pUVar12,(MethodInfo *)0x0);
label_182333611:
    fVar23 = (pUVar13->fields).x;
    fVar16 = (pUVar13->fields).y;
    fVar22 = (pUVar13->fields).z;
  }
  else {
    if (iVar11 == 1) {
      pUVar13 = UnityEngine_Transform__get_up((UnityEngine_Vector3_o *)&local_e8,pUVar12,(MethodInfo *)0x0);
      goto label_182333611;
    }
    if (iVar11 == 2) {
      pUVar13 = UnityEngine_Transform__get_forward
                          ((UnityEngine_Vector3_o *)&local_e8,pUVar12,(MethodInfo *)0x0);
      goto label_182333611;
    }
  }
  fVar17 = fVar18 * fVar17 - (fVar19 + fVar19);
  fVar18 = 0.0;
  if (0.0 <= fVar17) {
    fVar18 = fVar17;
  }
  local_108.x = 0.0;
  local_108.y = 0.0;
  local_f8.y = fVar16;
  local_f8.x = fVar23;
  fVar17 = fVar18 * 0.5 + fVar19;
  local_108.z = 0.0;
  local_f8.z = fVar22;
  if (Il2CppMethodInitialized_18433de5c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433de5c = '\x01';
  }
  pUVar7 = TypeInfo_UnityEngine_Vector3->static_fields;
  local_108.x = (pUVar7->upVector).fields.x;
  local_108.y = (pUVar7->upVector).fields.y;
  local_108.z = (pUVar7->upVector).fields.z;
  pUVar14 = UnityEngine_Quaternion__Internal_LookRotation
                      (local_c8,(UnityEngine_Vector3_o *)&local_f8,(UnityEngine_Vector3_o *)&local_108,
                       (MethodInfo *)0x0);
  pUVar6 = TypeInfo_Utility_CustomDebug->static_fields->_instance;
  if (pUVar6 != (Utility_CustomDebug_o *)0x0) {
    local_d8.r = (color->fields).r;
    local_d8.g = (color->fields).g;
    local_d8.b = (color->fields).b;
    local_d8.a = (color->fields).a;
    local_108.x = (pUVar14->fields).x;
    local_108.y = (pUVar14->fields).y;
    local_108.z = (pUVar14->fields).z;
    local_108.w = (pUVar14->fields).w;
    local_e8.y = fVar18 * 0.5;
    local_e8.x = fVar19 + fVar19;
    local_f8._0_8_ = uVar9;
    local_f8.z = fVar1;
    local_e8.z = fVar19 + fVar19;
    __this_00 = (UnityEngine_Object_o *)
                Utility_CustomDebug__SpawnPrimitiveObject
                          (pUVar6,2,(UnityEngine_Vector3_o *)&local_f8,(UnityEngine_Quaternion_o *)&local_108,
                           (UnityEngine_Vector3_o *)&local_e8,(UnityEngine_Color_o *)&local_d8,
                           (MethodInfo *)0x0);
    if (Il2CppMethodInitialized_18433dbeb == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_18433dbeb = '\x01';
    }
    pUVar7 = TypeInfo_UnityEngine_Vector3->static_fields;
    uVar4 = (pUVar7->oneVector).fields.x;
    uVar5 = (pUVar7->oneVector).fields.y;
    fVar18 = (pUVar7->oneVector).fields.z;
    pUVar6 = TypeInfo_Utility_CustomDebug->static_fields->_instance;
    fVar20 = (float)uVar4 * fVar19 + (float)uVar4 * fVar19;
    fVar21 = (float)uVar5 * fVar19 + (float)uVar5 * fVar19;
    if (Il2CppMethodInitialized_18433de5b == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
      Il2CppMethodInitialized_18433de5b = '\x01';
    }
    if (pUVar6 != (Utility_CustomDebug_o *)0x0) {
      local_d8.r = (color->fields).r;
      local_d8.g = (color->fields).g;
      local_d8.b = (color->fields).b;
      local_d8.a = (color->fields).a;
      pUVar8 = TypeInfo_UnityEngine_Quaternion->static_fields;
      fVar18 = fVar18 * fVar19;
      local_108.x = (pUVar8->identityQuaternion).fields.x;
      local_108.y = (pUVar8->identityQuaternion).fields.y;
      local_108.z = (pUVar8->identityQuaternion).fields.z;
      local_108.w = (pUVar8->identityQuaternion).fields.w;
      fVar18 = fVar18 + fVar18;
      local_e8.y = fVar21;
      local_e8.x = fVar20;
      local_f8.z = fVar22 * fVar17 + fVar1;
      local_f8.y = fVar16 * fVar17 + fVar3;
      local_f8.x = fVar23 * fVar17 + fVar2;
      local_e8.z = fVar18;
      __this_01 = Utility_CustomDebug__SpawnPrimitiveObject
                            (pUVar6,0,(UnityEngine_Vector3_o *)&local_f8,
                             (UnityEngine_Quaternion_o *)&local_108,(UnityEngine_Vector3_o *)&local_e8,
                             (UnityEngine_Color_o *)&local_d8,(MethodInfo *)0x0);
      pUVar6 = TypeInfo_Utility_CustomDebug->static_fields->_instance;
      if (Il2CppMethodInitialized_18433de5b == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
        Il2CppMethodInitialized_18433de5b = '\x01';
      }
      if (pUVar6 != (Utility_CustomDebug_o *)0x0) {
        local_d8.r = (color->fields).r;
        local_d8.g = (color->fields).g;
        local_d8.b = (color->fields).b;
        local_d8.a = (color->fields).a;
        local_f8.y = fVar21;
        local_f8.x = fVar20;
        pUVar8 = TypeInfo_UnityEngine_Quaternion->static_fields;
        local_e8.z = fVar1 - fVar22 * fVar17;
        local_108.x = (pUVar8->identityQuaternion).fields.x;
        local_108.y = (pUVar8->identityQuaternion).fields.y;
        local_108.z = (pUVar8->identityQuaternion).fields.z;
        local_108.w = (pUVar8->identityQuaternion).fields.w;
        local_e8.y = fVar3 - fVar16 * fVar17;
        local_e8.x = fVar2 - fVar23 * fVar17;
        local_f8.z = fVar18;
        __this_02 = Utility_CustomDebug__SpawnPrimitiveObject
                              (pUVar6,0,(UnityEngine_Vector3_o *)&local_e8,
                               (UnityEngine_Quaternion_o *)&local_108,(UnityEngine_Vector3_o *)&local_f8,
                               (UnityEngine_Color_o *)&local_d8,(MethodInfo *)0x0);
        if ((((__this_01 != (UnityEngine_GameObject_o *)0x0) &&
             (pUVar12 = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0),
             __this_00 != (UnityEngine_Object_o *)0x0)) &&
            (pUVar15 = UnityEngine_GameObject__get_transform
                                 ((UnityEngine_GameObject_o *)__this_00,(MethodInfo *)0x0),
            pUVar12 != (UnityEngine_Transform_o *)0x0)) &&
           (UnityEngine_Transform__set_parent(pUVar12,pUVar15,(MethodInfo *)0x0),
           __this_02 != (UnityEngine_GameObject_o *)0x0)) {
          pUVar12 = UnityEngine_GameObject__get_transform(__this_02,(MethodInfo *)0x0);
          pUVar15 = UnityEngine_GameObject__get_transform
                              ((UnityEngine_GameObject_o *)__this_00,(MethodInfo *)0x0);
          if (pUVar12 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__set_parent(pUVar12,pUVar15,(MethodInfo *)0x0);
            UnityEngine_Object__set_name(__this_00,name,(MethodInfo *)0x0);
            pUVar6 = TypeInfo_Utility_CustomDebug->static_fields->_instance;
            if ((pUVar6 != (Utility_CustomDebug_o *)0x0) &&
               (__this = (System_Collections_Generic_Dictionary_object__object__o *)
                         (pUVar6->fields)._debugObjects,
               __this != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
              System_Collections_Generic_Dictionary_object__object___Add
                        (__this,(Il2CppObject *)name,(Il2CppObject *)__this_00,
                         (MethodInfo_146B4B0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_Add);
              return name;
            }
          }
        }
      }
    }
  }
label_182333a7e:
  ThrowNullReferenceException();
}


// Utility.CustomDebug$$DrawRay
// il2cpp: void Utility_CustomDebug__DrawRay (UnityEngine_Vector3_o origin, UnityEngine_Vector3_o direction, UnityEngine_Color_o color, float duration, const MethodInfo* method);
// 0x182332f60

void Utility_CustomDebug__DrawRay_2332f60
               (UnityEngine_Vector3_o *origin,UnityEngine_Vector3_o *direction,UnityEngine_Color_o *color,
               float duration,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  Utility_CustomDebug_o *pUVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  bool bVar13;
  Utility_CustomDebug__DrawLineCoroutine_d__17_o *routine;
  
  if (Il2CppMethodInitialized_1843477c8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CustomDebug);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843477c8 = '\x01';
  }
  pUVar8 = TypeInfo_Utility_CustomDebug->static_fields->_instance;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar13 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar13) {
    uVar3 = (origin->fields).x;
    uVar5 = (origin->fields).y;
    uVar4 = (direction->fields).x;
    uVar6 = (direction->fields).y;
    if (TypeInfo_Utility_CustomDebug->static_fields->_instance == (Utility_CustomDebug_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar8 = TypeInfo_Utility_CustomDebug->static_fields->_instance;
    fVar1 = (direction->fields).z;
    fVar2 = (origin->fields).z;
    if (Il2CppMethodInitialized_1843477ce == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CustomDebug_DrawLineCoroutine_d__17);
      Il2CppMethodInitialized_1843477ce = '\x01';
    }
    routine = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_CustomDebug_DrawLineCoroutine_d__17);
    System_Object___ctor
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)routine,(MethodInfo *)0x0);
    fVar9 = (origin->fields).y;
    fVar7 = (origin->fields).z;
    (routine->fields).start.fields.x = (origin->fields).x;
    (routine->fields).start.fields.y = fVar9;
    fVar9 = (color->fields).r;
    fVar10 = (color->fields).g;
    fVar11 = (color->fields).b;
    fVar12 = (color->fields).a;
    (routine->fields).__1__state = 0;
    (routine->fields).end.fields.x = (float)uVar4 + (float)uVar3;
    (routine->fields).end.fields.y = (float)uVar6 + (float)uVar5;
    (routine->fields).color.fields.r = fVar9;
    (routine->fields).color.fields.g = fVar10;
    (routine->fields).color.fields.b = fVar11;
    (routine->fields).color.fields.a = fVar12;
    (routine->fields).start.fields.z = fVar7;
    (routine->fields).end.fields.z = fVar1 + fVar2;
    (routine->fields).duration = duration;
    UnityEngine_MonoBehaviour__StartCoroutine_Auto
              ((UnityEngine_MonoBehaviour_o *)pUVar8,(System_Collections_IEnumerator_o *)routine,
               (MethodInfo *)0x0);
  }
  return;
}


// Utility.CustomDebug$$DrawLine
// il2cpp: void Utility_CustomDebug__DrawLine (UnityEngine_Vector3_o start, UnityEngine_Vector3_o end, UnityEngine_Color_o color, float duration, const MethodInfo* method);
// 0x182332d10

void Utility_CustomDebug__DrawLine_2332d10
               (UnityEngine_Vector3_o *start,UnityEngine_Vector3_o *end,UnityEngine_Color_o *color,
               float duration,MethodInfo *method)

{
  float fVar1;
  Utility_CustomDebug_o *pUVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  Utility_CustomDebug__DrawLineCoroutine_d__17_o *routine;
  
  if (Il2CppMethodInitialized_1843477c9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CustomDebug);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843477c9 = '\x01';
  }
  pUVar2 = TypeInfo_Utility_CustomDebug->static_fields->_instance;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar7 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar7) {
    if (TypeInfo_Utility_CustomDebug->static_fields->_instance == (Utility_CustomDebug_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar2 = TypeInfo_Utility_CustomDebug->static_fields->_instance;
    if (Il2CppMethodInitialized_1843477ce == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CustomDebug_DrawLineCoroutine_d__17);
      Il2CppMethodInitialized_1843477ce = '\x01';
    }
    routine = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_CustomDebug_DrawLineCoroutine_d__17);
    System_Object___ctor
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)routine,(MethodInfo *)0x0);
    fVar3 = (start->fields).y;
    fVar1 = (start->fields).z;
    (routine->fields).start.fields.x = (start->fields).x;
    (routine->fields).start.fields.y = fVar3;
    fVar3 = (end->fields).y;
    (routine->fields).end.fields.x = (end->fields).x;
    (routine->fields).end.fields.y = fVar3;
    fVar3 = (color->fields).r;
    fVar4 = (color->fields).g;
    fVar5 = (color->fields).b;
    fVar6 = (color->fields).a;
    (routine->fields).start.fields.z = fVar1;
    (routine->fields).end.fields.z = (end->fields).z;
    (routine->fields).color.fields.r = fVar3;
    (routine->fields).color.fields.g = fVar4;
    (routine->fields).color.fields.b = fVar5;
    (routine->fields).color.fields.a = fVar6;
    (routine->fields).__1__state = 0;
    (routine->fields).duration = duration;
    UnityEngine_MonoBehaviour__StartCoroutine_Auto
              ((UnityEngine_MonoBehaviour_o *)pUVar2,(System_Collections_IEnumerator_o *)routine,
               (MethodInfo *)0x0);
  }
  return;
}


// Utility.CustomDebug$$SpawnCube
// il2cpp: void Utility_CustomDebug__SpawnCube (UnityEngine_Vector3_o position, UnityEngine_Color_o color, float duration, const MethodInfo* method);
// 0x182333f70

void Utility_CustomDebug__SpawnCube_2333f70
               (UnityEngine_Vector3_o *position,UnityEngine_Color_o *color,float duration,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  Utility_CustomDebug_o *pUVar3;
  UnityEngine_Quaternion_StaticFields *pUVar4;
  UnityEngine_Vector3_StaticFields *pUVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  bool bVar16;
  Utility_CustomDebug__SpawnPrimitiveCoroutine_d__18_o *routine;
  
  if (Il2CppMethodInitialized_1843477ca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CustomDebug);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843477ca = '\x01';
  }
  pUVar3 = TypeInfo_Utility_CustomDebug->static_fields->_instance;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar16 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar16) {
    pUVar3 = TypeInfo_Utility_CustomDebug->static_fields->_instance;
    if (Il2CppMethodInitialized_18433de5b == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
      Il2CppMethodInitialized_18433de5b = '\x01';
    }
    pUVar4 = TypeInfo_UnityEngine_Quaternion->static_fields;
    fVar12 = (pUVar4->identityQuaternion).fields.x;
    fVar13 = (pUVar4->identityQuaternion).fields.y;
    fVar14 = (pUVar4->identityQuaternion).fields.z;
    fVar15 = (pUVar4->identityQuaternion).fields.w;
    if (Il2CppMethodInitialized_18433dbeb == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_18433dbeb = '\x01';
    }
    if (pUVar3 == (Utility_CustomDebug_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar5 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar7 = (pUVar5->oneVector).fields.x;
    fVar8 = (pUVar5->oneVector).fields.y;
    fVar1 = (pUVar5->oneVector).fields.z;
    if (Il2CppMethodInitialized_1843477cf == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CustomDebug_SpawnPrimitiveCoroutine_d__18);
      Il2CppMethodInitialized_1843477cf = '\x01';
    }
    routine = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Utility_CustomDebug_SpawnPrimitiveCoroutine_d__18);
    System_Object___ctor
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)routine,(MethodInfo *)0x0);
    (routine->fields).__1__state = 0;
    (routine->fields).__4__this = pUVar3;
    Il2CppCodeGenWriteBarrier(&(routine->fields).__4__this,pUVar3);
    fVar6 = (position->fields).y;
    fVar2 = (position->fields).z;
    (routine->fields).position.fields.x = (position->fields).x;
    (routine->fields).position.fields.y = fVar6;
    fVar6 = (color->fields).r;
    fVar9 = (color->fields).g;
    fVar10 = (color->fields).b;
    fVar11 = (color->fields).a;
    (routine->fields).position.fields.z = fVar2;
    (routine->fields).size.fields.x = fVar7;
    (routine->fields).size.fields.y = fVar8;
    (routine->fields).color.fields.r = fVar6;
    (routine->fields).color.fields.g = fVar9;
    (routine->fields).color.fields.b = fVar10;
    (routine->fields).color.fields.a = fVar11;
    (routine->fields).type = 3;
    (routine->fields).duration = duration;
    (routine->fields).Rotation.fields.x = fVar12;
    (routine->fields).Rotation.fields.y = fVar13;
    (routine->fields).Rotation.fields.z = fVar14;
    (routine->fields).Rotation.fields.w = fVar15;
    (routine->fields).size.fields.z = fVar1;
    UnityEngine_MonoBehaviour__StartCoroutine_Auto
              ((UnityEngine_MonoBehaviour_o *)pUVar3,(System_Collections_IEnumerator_o *)routine,
               (MethodInfo *)0x0);
  }
  return;
}


// Utility.CustomDebug$$SpawnSphere
// il2cpp: void Utility_CustomDebug__SpawnSphere (UnityEngine_Vector3_o position, float radius, UnityEngine_Color_o color, float duration, const MethodInfo* method);
// 0x1823348f0

void Utility_CustomDebug__SpawnSphere_23348f0
               (UnityEngine_Vector3_o *position,float radius,UnityEngine_Color_o *color,float duration,
               MethodInfo *method)

{
  float fVar1;
  Utility_CustomDebug_o *pUVar2;
  UnityEngine_Quaternion_StaticFields *pUVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  bool bVar12;
  Utility_CustomDebug__SpawnPrimitiveCoroutine_d__18_o *routine;
  
  if (Il2CppMethodInitialized_1843477cb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CustomDebug);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843477cb = '\x01';
  }
  pUVar2 = TypeInfo_Utility_CustomDebug->static_fields->_instance;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar12 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar12) {
    pUVar2 = TypeInfo_Utility_CustomDebug->static_fields->_instance;
    if (Il2CppMethodInitialized_18433de5b == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
      Il2CppMethodInitialized_18433de5b = '\x01';
    }
    if (pUVar2 == (Utility_CustomDebug_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar3 = TypeInfo_UnityEngine_Quaternion->static_fields;
    fVar8 = (pUVar3->identityQuaternion).fields.x;
    fVar9 = (pUVar3->identityQuaternion).fields.y;
    fVar10 = (pUVar3->identityQuaternion).fields.z;
    fVar11 = (pUVar3->identityQuaternion).fields.w;
    if (Il2CppMethodInitialized_1843477cf == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CustomDebug_SpawnPrimitiveCoroutine_d__18);
      Il2CppMethodInitialized_1843477cf = '\x01';
    }
    routine = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Utility_CustomDebug_SpawnPrimitiveCoroutine_d__18);
    System_Object___ctor
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)routine,(MethodInfo *)0x0);
    (routine->fields).__1__state = 0;
    (routine->fields).__4__this = pUVar2;
    Il2CppCodeGenWriteBarrier(&(routine->fields).__4__this,pUVar2);
    fVar4 = (position->fields).y;
    fVar1 = (position->fields).z;
    (routine->fields).position.fields.x = (position->fields).x;
    (routine->fields).position.fields.y = fVar4;
    (routine->fields).size.fields.x = radius;
    (routine->fields).size.fields.y = radius;
    fVar4 = (color->fields).r;
    fVar5 = (color->fields).g;
    fVar6 = (color->fields).b;
    fVar7 = (color->fields).a;
    (routine->fields).position.fields.z = fVar1;
    (routine->fields).size.fields.z = radius;
    (routine->fields).color.fields.r = fVar4;
    (routine->fields).color.fields.g = fVar5;
    (routine->fields).color.fields.b = fVar6;
    (routine->fields).color.fields.a = fVar7;
    (routine->fields).type = 0;
    (routine->fields).duration = duration;
    (routine->fields).Rotation.fields.x = fVar8;
    (routine->fields).Rotation.fields.y = fVar9;
    (routine->fields).Rotation.fields.z = fVar10;
    (routine->fields).Rotation.fields.w = fVar11;
    UnityEngine_MonoBehaviour__StartCoroutine_Auto
              ((UnityEngine_MonoBehaviour_o *)pUVar2,(System_Collections_IEnumerator_o *)routine,
               (MethodInfo *)0x0);
  }
  return;
}


// Utility.CustomDebug$$SpawnCylinder
// il2cpp: void Utility_CustomDebug__SpawnCylinder (UnityEngine_Vector3_o position, float radius, float height, UnityEngine_Color_o color, float duration, const MethodInfo* method);
// 0x1823342d0

void Utility_CustomDebug__SpawnCylinder_23342d0
               (UnityEngine_Vector3_o *position,float radius,float height,UnityEngine_Color_o *color,
               float duration,MethodInfo *method)

{
  float fVar1;
  Utility_CustomDebug_o *pUVar2;
  UnityEngine_Quaternion_StaticFields *pUVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  bool bVar12;
  Utility_CustomDebug__SpawnPrimitiveCoroutine_d__18_o *routine;
  
  if (Il2CppMethodInitialized_1843477cc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CustomDebug);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843477cc = '\x01';
  }
  pUVar2 = TypeInfo_Utility_CustomDebug->static_fields->_instance;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar12 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar12) {
    pUVar2 = TypeInfo_Utility_CustomDebug->static_fields->_instance;
    if (Il2CppMethodInitialized_18433de5b == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
      Il2CppMethodInitialized_18433de5b = '\x01';
    }
    if (pUVar2 == (Utility_CustomDebug_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar3 = TypeInfo_UnityEngine_Quaternion->static_fields;
    fVar8 = (pUVar3->identityQuaternion).fields.x;
    fVar9 = (pUVar3->identityQuaternion).fields.y;
    fVar10 = (pUVar3->identityQuaternion).fields.z;
    fVar11 = (pUVar3->identityQuaternion).fields.w;
    if (Il2CppMethodInitialized_1843477cf == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CustomDebug_SpawnPrimitiveCoroutine_d__18);
      Il2CppMethodInitialized_1843477cf = '\x01';
    }
    routine = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Utility_CustomDebug_SpawnPrimitiveCoroutine_d__18);
    System_Object___ctor
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)routine,(MethodInfo *)0x0);
    (routine->fields).__1__state = 0;
    (routine->fields).__4__this = pUVar2;
    Il2CppCodeGenWriteBarrier(&(routine->fields).__4__this,pUVar2);
    fVar4 = (position->fields).y;
    fVar1 = (position->fields).z;
    (routine->fields).position.fields.x = (position->fields).x;
    (routine->fields).position.fields.y = fVar4;
    (routine->fields).size.fields.x = radius;
    (routine->fields).size.fields.y = height;
    fVar4 = (color->fields).r;
    fVar5 = (color->fields).g;
    fVar6 = (color->fields).b;
    fVar7 = (color->fields).a;
    (routine->fields).position.fields.z = fVar1;
    (routine->fields).size.fields.z = radius;
    (routine->fields).color.fields.r = fVar4;
    (routine->fields).color.fields.g = fVar5;
    (routine->fields).color.fields.b = fVar6;
    (routine->fields).color.fields.a = fVar7;
    (routine->fields).type = 2;
    (routine->fields).duration = duration;
    (routine->fields).Rotation.fields.x = fVar8;
    (routine->fields).Rotation.fields.y = fVar9;
    (routine->fields).Rotation.fields.z = fVar10;
    (routine->fields).Rotation.fields.w = fVar11;
    UnityEngine_MonoBehaviour__StartCoroutine_Auto
              ((UnityEngine_MonoBehaviour_o *)pUVar2,(System_Collections_IEnumerator_o *)routine,
               (MethodInfo *)0x0);
  }
  return;
}


// Utility.CustomDebug$$SpawnCapsule
// il2cpp: void Utility_CustomDebug__SpawnCapsule (UnityEngine_Vector3_o position, float radius, float height, UnityEngine_Color_o color, float duration, const MethodInfo* method);
// 0x182333c20

void Utility_CustomDebug__SpawnCapsule_2333c20
               (UnityEngine_Vector3_o *position,float radius,float height,UnityEngine_Color_o *color,
               float duration,MethodInfo *method)

{
  float fVar1;
  Utility_CustomDebug_o *pUVar2;
  UnityEngine_Quaternion_StaticFields *pUVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  bool bVar12;
  Utility_CustomDebug__SpawnPrimitiveCoroutine_d__18_o *routine;
  
  if (Il2CppMethodInitialized_1843477cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CustomDebug);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843477cd = '\x01';
  }
  pUVar2 = TypeInfo_Utility_CustomDebug->static_fields->_instance;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar12 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar12) {
    pUVar2 = TypeInfo_Utility_CustomDebug->static_fields->_instance;
    if (Il2CppMethodInitialized_18433de5b == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
      Il2CppMethodInitialized_18433de5b = '\x01';
    }
    if (pUVar2 == (Utility_CustomDebug_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar3 = TypeInfo_UnityEngine_Quaternion->static_fields;
    fVar8 = (pUVar3->identityQuaternion).fields.x;
    fVar9 = (pUVar3->identityQuaternion).fields.y;
    fVar10 = (pUVar3->identityQuaternion).fields.z;
    fVar11 = (pUVar3->identityQuaternion).fields.w;
    if (Il2CppMethodInitialized_1843477cf == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CustomDebug_SpawnPrimitiveCoroutine_d__18);
      Il2CppMethodInitialized_1843477cf = '\x01';
    }
    routine = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Utility_CustomDebug_SpawnPrimitiveCoroutine_d__18);
    System_Object___ctor
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)routine,(MethodInfo *)0x0);
    (routine->fields).__1__state = 0;
    (routine->fields).__4__this = pUVar2;
    Il2CppCodeGenWriteBarrier(&(routine->fields).__4__this,pUVar2);
    fVar4 = (position->fields).y;
    fVar1 = (position->fields).z;
    (routine->fields).position.fields.x = (position->fields).x;
    (routine->fields).position.fields.y = fVar4;
    (routine->fields).size.fields.x = radius;
    (routine->fields).size.fields.y = height;
    fVar4 = (color->fields).r;
    fVar5 = (color->fields).g;
    fVar6 = (color->fields).b;
    fVar7 = (color->fields).a;
    (routine->fields).position.fields.z = fVar1;
    (routine->fields).size.fields.z = radius;
    (routine->fields).color.fields.r = fVar4;
    (routine->fields).color.fields.g = fVar5;
    (routine->fields).color.fields.b = fVar6;
    (routine->fields).color.fields.a = fVar7;
    (routine->fields).type = 1;
    (routine->fields).duration = duration;
    (routine->fields).Rotation.fields.x = fVar8;
    (routine->fields).Rotation.fields.y = fVar9;
    (routine->fields).Rotation.fields.z = fVar10;
    (routine->fields).Rotation.fields.w = fVar11;
    UnityEngine_MonoBehaviour__StartCoroutine_Auto
              ((UnityEngine_MonoBehaviour_o *)pUVar2,(System_Collections_IEnumerator_o *)routine,
               (MethodInfo *)0x0);
  }
  return;
}


// Utility.CustomDebug$$DrawLineCoroutine
// il2cpp: System_Collections_IEnumerator_o* Utility_CustomDebug__DrawLineCoroutine (Utility_CustomDebug_o* __this, UnityEngine_Vector3_o start, UnityEngine_Vector3_o end, UnityEngine_Color_o color, float duration, const MethodInfo* method);
// 0x182332a90

System_Collections_IEnumerator_o *
Utility_CustomDebug__DrawLineCoroutine
          (Utility_CustomDebug_o *__this,UnityEngine_Vector3_o *start,UnityEngine_Vector3_o *end,
          UnityEngine_Color_o *color,float duration,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  Utility_CustomDebug__DrawLineCoroutine_d__17_o *__this_00;
  
  if (Il2CppMethodInitialized_1843477ce == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CustomDebug_DrawLineCoroutine_d__17);
    Il2CppMethodInitialized_1843477ce = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_CustomDebug_DrawLineCoroutine_d__17);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  fVar2 = (start->fields).y;
  fVar1 = (start->fields).z;
  (__this_00->fields).start.fields.x = (start->fields).x;
  (__this_00->fields).start.fields.y = fVar2;
  fVar2 = (end->fields).y;
  (__this_00->fields).end.fields.x = (end->fields).x;
  (__this_00->fields).end.fields.y = fVar2;
  fVar2 = (color->fields).r;
  fVar3 = (color->fields).g;
  fVar4 = (color->fields).b;
  fVar5 = (color->fields).a;
  (__this_00->fields).start.fields.z = fVar1;
  fVar1 = (end->fields).z;
  (__this_00->fields).color.fields.r = fVar2;
  (__this_00->fields).color.fields.g = fVar3;
  (__this_00->fields).color.fields.b = fVar4;
  (__this_00->fields).color.fields.a = fVar5;
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).duration = duration;
  (__this_00->fields).end.fields.z = fVar1;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Utility.CustomDebug$$SpawnPrimitiveCoroutine
// il2cpp: System_Collections_IEnumerator_o* Utility_CustomDebug__SpawnPrimitiveCoroutine (Utility_CustomDebug_o* __this, int32_t type, UnityEngine_Vector3_o position, UnityEngine_Quaternion_o Rotation, UnityEngine_Vector3_o size, UnityEngine_Color_o color, float duration, const MethodInfo* method);
// 0x182334480

System_Collections_IEnumerator_o *
Utility_CustomDebug__SpawnPrimitiveCoroutine
          (Utility_CustomDebug_o *__this,int32_t type,UnityEngine_Vector3_o *position,
          UnityEngine_Quaternion_o *Rotation,UnityEngine_Vector3_o *size,UnityEngine_Color_o *color,
          float duration,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  Utility_CustomDebug__SpawnPrimitiveCoroutine_d__18_o *__this_00;
  
  if (Il2CppMethodInitialized_1843477cf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CustomDebug_SpawnPrimitiveCoroutine_d__18);
    Il2CppMethodInitialized_1843477cf = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Utility_CustomDebug_SpawnPrimitiveCoroutine_d__18);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
  fVar2 = (position->fields).y;
  fVar1 = (position->fields).z;
  (__this_00->fields).position.fields.x = (position->fields).x;
  (__this_00->fields).position.fields.y = fVar2;
  fVar3 = (size->fields).x;
  fVar4 = (size->fields).y;
  fVar2 = (size->fields).z;
  fVar5 = (Rotation->fields).x;
  fVar6 = (Rotation->fields).y;
  fVar7 = (Rotation->fields).z;
  fVar8 = (Rotation->fields).w;
  (__this_00->fields).type = type;
  (__this_00->fields).size.fields.x = fVar3;
  (__this_00->fields).size.fields.y = fVar4;
  (__this_00->fields).size.fields.z = fVar2;
  (__this_00->fields).Rotation.fields.x = fVar5;
  (__this_00->fields).Rotation.fields.y = fVar6;
  (__this_00->fields).Rotation.fields.z = fVar7;
  (__this_00->fields).Rotation.fields.w = fVar8;
  (__this_00->fields).position.fields.z = fVar1;
  (__this_00->fields).duration = duration;
  fVar1 = (color->fields).g;
  fVar2 = (color->fields).b;
  fVar3 = (color->fields).a;
  (__this_00->fields).color.fields.r = (color->fields).r;
  (__this_00->fields).color.fields.g = fVar1;
  (__this_00->fields).color.fields.b = fVar2;
  (__this_00->fields).color.fields.a = fVar3;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Utility.CustomDebug$$DrawLineObject
// il2cpp: UnityEngine_GameObject_o* Utility_CustomDebug__DrawLineObject (Utility_CustomDebug_o* __this, UnityEngine_Vector3_o start, UnityEngine_Vector3_o end, UnityEngine_Color_o color, float duration, const MethodInfo* method);
// 0x182332b20

UnityEngine_GameObject_o *
Utility_CustomDebug__DrawLineObject
          (Utility_CustomDebug_o *__this,UnityEngine_Vector3_o *start,UnityEngine_Vector3_o *end,
          UnityEngine_Color_o *color,float duration,MethodInfo *method)

{
  UnityEngine_Object_o *obj;
  UnityEngine_LineRenderer_o *__this_00;
  UnityEngine_Shader_o *shader;
  UnityEngine_Material_o *__this_01;
  UnityEngine_Color_Fields local_38;
  
  if (Il2CppMethodInitialized_1843477d0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_LineRenderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Material);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"DebugLine");
    il2cpp_codegen_initialize_runtime_metadata(&"Sprites/Default");
    Il2CppMethodInitialized_1843477d0 = '\x01';
  }
  obj = (UnityEngine_Object_o *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
  UnityEngine_GameObject___ctor((UnityEngine_GameObject_o *)obj,"DebugLine",(MethodInfo *)0x0);
  if (obj != (UnityEngine_Object_o *)0x0) {
    __this_00 = UnityEngine_GameObject__AddComponent_object_
                          ((UnityEngine_GameObject_o *)obj,
                           (MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_LineRenderer);
    if (__this_00 != (UnityEngine_LineRenderer_o *)0x0) {
      UnityEngine_LineRenderer__set_positionCount(__this_00,2,(MethodInfo *)0x0);
      local_38.b = (start->fields).z;
      local_38.r = (start->fields).x;
      local_38.g = (start->fields).y;
      UnityEngine_LineRenderer__SetPosition(__this_00,0,(UnityEngine_Vector3_o *)&local_38,(MethodInfo *)0x0);
      local_38.r = (end->fields).x;
      local_38.g = (end->fields).y;
      local_38.b = (end->fields).z;
      UnityEngine_LineRenderer__SetPosition(__this_00,1,(UnityEngine_Vector3_o *)&local_38,(MethodInfo *)0x0);
      shader = UnityEngine_Shader__Find("Sprites/Default",(MethodInfo *)0x0);
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Material);
      UnityEngine_Material___ctor(__this_01,shader,(MethodInfo *)0x0);
      UnityEngine_Renderer__set_sharedMaterial
                ((UnityEngine_Renderer_o *)__this_00,__this_01,(MethodInfo *)0x0);
      local_38.r = (color->fields).r;
      local_38.g = (color->fields).g;
      local_38.b = (color->fields).b;
      local_38.a = (color->fields).a;
      UnityEngine_LineRenderer__set_endColor(__this_00,(UnityEngine_Color_o *)&local_38,(MethodInfo *)0x0);
      local_38.r = (color->fields).r;
      local_38.g = (color->fields).g;
      local_38.b = (color->fields).b;
      local_38.a = (color->fields).a;
      UnityEngine_LineRenderer__set_startColor(__this_00,(UnityEngine_Color_o *)&local_38,(MethodInfo *)0x0);
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
// 0x182334540

UnityEngine_GameObject_o *
Utility_CustomDebug__SpawnPrimitiveObject
          (Utility_CustomDebug_o *__this,int32_t type,UnityEngine_Vector3_o *position,
          UnityEngine_Quaternion_o *Rotation,UnityEngine_Vector3_o *size,UnityEngine_Color_o *color,
          MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Object_o *__this_00;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_Object_o *pUVar3;
  UnityEngine_Shader_o *shader;
  UnityEngine_Material_o *pUVar4;
  UnityEngine_Color_Fields local_38;
  
  if (Il2CppMethodInitialized_1843477d1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Collider);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Renderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Material);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"DebugPrimitive");
    il2cpp_codegen_initialize_runtime_metadata(&"Universal Render Pipeline/Lit");
    Il2CppMethodInitialized_1843477d1 = '\x01';
  }
  __this_00 = (UnityEngine_Object_o *)UnityEngine_GameObject__CreatePrimitive(type,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_Object_o *)0x0) {
    UnityEngine_Object__set_name(__this_00,"DebugPrimitive",(MethodInfo *)0x0);
    pUVar2 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)__this_00,(MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
      local_38.r = (position->fields).x;
      local_38.g = (position->fields).y;
      local_38.b = (position->fields).z;
      UnityEngine_Transform__set_position(pUVar2,(UnityEngine_Vector3_o *)&local_38,(MethodInfo *)0x0);
      pUVar2 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)__this_00,(MethodInfo *)0x0);
      if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
        local_38.r = (Rotation->fields).x;
        local_38.g = (Rotation->fields).y;
        local_38.b = (Rotation->fields).z;
        local_38.a = (Rotation->fields).w;
        UnityEngine_Transform__set_rotation(pUVar2,(UnityEngine_Quaternion_o *)&local_38,(MethodInfo *)0x0);
        pUVar2 = UnityEngine_GameObject__get_transform
                           ((UnityEngine_GameObject_o *)__this_00,(MethodInfo *)0x0);
        if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
          local_38.r = (size->fields).x;
          local_38.g = (size->fields).y;
          local_38.b = (size->fields).z;
          UnityEngine_Transform__set_localScale(pUVar2,(UnityEngine_Vector3_o *)&local_38,(MethodInfo *)0x0);
          pUVar3 = (UnityEngine_Object_o *)
                   UnityEngine_GameObject__GetComponent_object_
                             ((UnityEngine_GameObject_o *)__this_00,
                              (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Renderer);
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar1 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar1) {
            shader = UnityEngine_Shader__Find("Universal Render Pipeline/Lit",(MethodInfo *)0x0);
            pUVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Material);
            UnityEngine_Material___ctor(pUVar4,shader,(MethodInfo *)0x0);
            if (pUVar3 == (UnityEngine_Object_o *)0x0) goto label_18233476e;
            UnityEngine_Renderer__set_sharedMaterial
                      ((UnityEngine_Renderer_o *)pUVar3,pUVar4,(MethodInfo *)0x0);
            pUVar4 = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)pUVar3,(MethodInfo *)0x0);
            if (pUVar4 == (UnityEngine_Material_o *)0x0) goto label_18233476e;
            local_38.r = (color->fields).r;
            local_38.g = (color->fields).g;
            local_38.b = (color->fields).b;
            local_38.a = (color->fields).a;
            UnityEngine_Material__set_color(pUVar4,(UnityEngine_Color_o *)&local_38,(MethodInfo *)0x0);
          }
          pUVar3 = (UnityEngine_Object_o *)
                   UnityEngine_GameObject__GetComponent_object_
                             ((UnityEngine_GameObject_o *)__this_00,
                              (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Collider);
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar1 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar1) {
            if (pUVar3 == (UnityEngine_Object_o *)0x0) goto label_18233476e;
            UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)pUVar3,false,(MethodInfo *)0x0);
          }
          return (UnityEngine_GameObject_o *)__this_00;
        }
      }
    }
  }
label_18233476e:
  ThrowNullReferenceException();
}


// Utility.CustomDebug$$.ctor
// il2cpp: void Utility_CustomDebug___ctor (Utility_CustomDebug_o* __this, const MethodInfo* method);
// 0x182334aa0

void Utility_CustomDebug___ctor(Utility_CustomDebug_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__GameObject__o *__this_00;
  
  if (Il2CppMethodInitialized_1843477d2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_GameObject);
    Il2CppMethodInitialized_1843477d2 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_GameObject);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_ctor);
  (__this->fields)._debugObjects = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._debugObjects,__this_00);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


