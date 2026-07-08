// Type: Utility.CustomDebug
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Utility/CustomDebug.cs
// Prior source: NEW in this update
// --------------------------------

// Utility.CustomDebug.<DrawLineCoroutine>d__17$$.ctor
// il2cpp: void Utility_CustomDebug__DrawLineCoroutine_d__17___ctor (Utility_CustomDebug__DrawLineCoroutine_d__17_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x4150f80

void Utility_CustomDebug_<DrawLineCoroutine>d__17___ctor
               (Utility_CustomDebug__DrawLineCoroutine_d__17_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Utility.CustomDebug.<DrawLineCoroutine>d__17$$System.IDisposable.Dispose
// il2cpp: void Utility_CustomDebug__DrawLineCoroutine_d__17__System_IDisposable_Dispose (Utility_CustomDebug__DrawLineCoroutine_d__17_o* __this, const MethodInfo* method);
// 0x4151040

void Utility_CustomDebug_<DrawLineCoroutine>d__17__System_IDisposable_Dispose
               (Utility_CustomDebug__DrawLineCoroutine_d__17_o *__this,MethodInfo *method)

{
  return;
}


// Utility.CustomDebug.<DrawLineCoroutine>d__17$$MoveNext
// il2cpp: bool Utility_CustomDebug__DrawLineCoroutine_d__17__MoveNext (Utility_CustomDebug__DrawLineCoroutine_d__17_o* __this, const MethodInfo* method);
// 0x4151050

bool_conflict
Utility_CustomDebug_<DrawLineCoroutine>d__17__MoveNext
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
  
  if (DAT_057049ea == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_LineRenderer_AddComponent_LineRenderer);
    il2cpp_init_method_metadata(&TypeInfo_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_Material);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_WaitForSeconds);
    il2cpp_init_method_metadata(&"DebugLine");
    il2cpp_init_method_metadata(&"Sprites/Default");
    DAT_057049ea = '\x01';
  }
  iVar2 = (__this->fields).__1__state;
  if (iVar2 == 1) {
    (__this->fields).__1__state = -1;
    obj = (UnityEngine_Object_o *)(__this->fields)._lineObj_5__2;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Object__Destroy(obj,(MethodInfo *)0x0);
  }
  else if (iVar2 == 0) {
    (__this->fields).__1__state = -1;
    pUVar3 = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
    UnityEngine_GameObject___ctor(pUVar3,"DebugLine",(MethodInfo *)0x0);
    (__this->fields)._lineObj_5__2 = pUVar3;
    il2cpp_runtime_glue(&(__this->fields)._lineObj_5__2,pUVar3);
    pUVar3 = (__this->fields)._lineObj_5__2;
    if ((pUVar3 != (UnityEngine_GameObject_o *)0x0) &&
       (__this_00 = (UnityEngine_LineRenderer_o *)
                    UnityEngine_GameObject__AddComponent<object>(pUVar3,MethodInfo_LineRenderer_AddComponent_LineRenderer),
       __this_00 != (UnityEngine_LineRenderer_o *)0x0)) {
      UnityEngine_LineRenderer__set_positionCount(__this_00,2,(MethodInfo *)0x0);
      UnityEngine_LineRenderer__SetPosition
                (__this_00,0,(UnityEngine_Vector3_o)(__this->fields).start.fields,(MethodInfo *)0x0)
      ;
      UnityEngine_LineRenderer__SetPosition
                (__this_00,1,(UnityEngine_Vector3_o)(__this->fields).end.fields,(MethodInfo *)0x0);
      shader = UnityEngine_Shader__Find("Sprites/Default",(MethodInfo *)0x0);
      __this_01 = (UnityEngine_Material_o *)il2cpp_runtime_glue(TypeInfo_Material);
      UnityEngine_Material___ctor(__this_01,shader,(MethodInfo *)0x0);
      UnityEngine_Renderer__set_material
                ((UnityEngine_Renderer_o *)__this_00,__this_01,(MethodInfo *)0x0);
      pUVar1 = &(__this->fields).color;
      value = pUVar1->fields;
      UnityEngine_LineRenderer__set_endColor
                (__this_00,(UnityEngine_Color_o)pUVar1->fields,(MethodInfo *)0x0);
      UnityEngine_LineRenderer__set_startColor
                (__this_00,(UnityEngine_Color_o)value,(MethodInfo *)0x0);
      UnityEngine_LineRenderer__set_endWidth(__this_00,0.05,(MethodInfo *)0x0);
      UnityEngine_LineRenderer__set_startWidth(__this_00,0.05,(MethodInfo *)0x0);
      seconds = (__this->fields).duration;
      __this_02 = (UnityEngine_WaitForSeconds_o *)il2cpp_runtime_glue(TypeInfo_WaitForSeconds);
      UnityEngine_WaitForSeconds___ctor(__this_02,seconds,(MethodInfo *)0x0);
      (__this->fields).__2__current = (Il2CppObject *)__this_02;
      il2cpp_runtime_glue(&(__this->fields).__2__current,__this_02);
      (__this->fields).__1__state = 1;
      return (bool_conflict)CONCAT71((int7)((ulong)__this_02 >> 8),1);
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return 0;
}


// Utility.CustomDebug.<DrawLineCoroutine>d__17$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Utility_CustomDebug__DrawLineCoroutine_d__17__System_Collections_Generic_IEnumerator_System_Object__get_Current (Utility_CustomDebug__DrawLineCoroutine_d__17_o* __this, const MethodInfo* method);
// 0x41512b0

Il2CppObject *
Utility_CustomDebug_<DrawLineCoroutine>d__17__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (Utility_CustomDebug__DrawLineCoroutine_d__17_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Utility.CustomDebug.<DrawLineCoroutine>d__17$$System.Collections.IEnumerator.Reset
// il2cpp: void Utility_CustomDebug__DrawLineCoroutine_d__17__System_Collections_IEnumerator_Reset (Utility_CustomDebug__DrawLineCoroutine_d__17_o* __this, const MethodInfo* method);
// 0x41512c0

void Utility_CustomDebug_<DrawLineCoroutine>d__17__System_Collections_IEnumerator_Reset
               (Utility_CustomDebug__DrawLineCoroutine_d__17_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_init_method_metadata(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_glue(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_init_method_metadata(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this_00,uVar1);
}


// Utility.CustomDebug.<DrawLineCoroutine>d__17$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Utility_CustomDebug__DrawLineCoroutine_d__17__System_Collections_IEnumerator_get_Current (Utility_CustomDebug__DrawLineCoroutine_d__17_o* __this, const MethodInfo* method);
// 0x4151300

Il2CppObject *
Utility_CustomDebug_<DrawLineCoroutine>d__17__System_Collections_IEnumerator_get_Current
          (Utility_CustomDebug__DrawLineCoroutine_d__17_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Utility.CustomDebug.<SpawnPrimitiveCoroutine>d__18$$.ctor
// il2cpp: void Utility_CustomDebug__SpawnPrimitiveCoroutine_d__18___ctor (Utility_CustomDebug__SpawnPrimitiveCoroutine_d__18_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x4150fa0

void Utility_CustomDebug_<SpawnPrimitiveCoroutine>d__18___ctor
               (Utility_CustomDebug__SpawnPrimitiveCoroutine_d__18_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Utility.CustomDebug.<SpawnPrimitiveCoroutine>d__18$$System.IDisposable.Dispose
// il2cpp: void Utility_CustomDebug__SpawnPrimitiveCoroutine_d__18__System_IDisposable_Dispose (Utility_CustomDebug__SpawnPrimitiveCoroutine_d__18_o* __this, const MethodInfo* method);
// 0x4151310

void Utility_CustomDebug_<SpawnPrimitiveCoroutine>d__18__System_IDisposable_Dispose
               (Utility_CustomDebug__SpawnPrimitiveCoroutine_d__18_o *__this,MethodInfo *method)

{
  return;
}


// Utility.CustomDebug.<SpawnPrimitiveCoroutine>d__18$$MoveNext
// il2cpp: bool Utility_CustomDebug__SpawnPrimitiveCoroutine_d__18__MoveNext (Utility_CustomDebug__SpawnPrimitiveCoroutine_d__18_o* __this, const MethodInfo* method);
// 0x4151320

bool_conflict
Utility_CustomDebug_<SpawnPrimitiveCoroutine>d__18__MoveNext
          (Utility_CustomDebug__SpawnPrimitiveCoroutine_d__18_o *__this,MethodInfo *method)

{
  float seconds;
  int iVar1;
  UnityEngine_Object_o *pUVar2;
  bool_conflict bVar3;
  UnityEngine_GameObject_o *pUVar4;
  UnityEngine_WaitForSeconds_o *__this_00;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  Utility_CustomDebug__SpawnPrimitiveCoroutine_d__18_o *__this_01;
  bool_conflict bVar5;
  
  __this_01 = __this;
  if (DAT_057049eb == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    __this_01 = (Utility_CustomDebug__SpawnPrimitiveCoroutine_d__18_o *)&TypeInfo_WaitForSeconds;
    il2cpp_init_method_metadata();
    DAT_057049eb = '\x01';
    in_RDX = extraout_RDX;
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    pUVar2 = (UnityEngine_Object_o *)(__this->fields)._obj_5__2;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar5 = 0;
    bVar3 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      pUVar2 = (UnityEngine_Object_o *)(__this->fields)._obj_5__2;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar5 = 0;
      UnityEngine_Object__Destroy(pUVar2,(MethodInfo *)0x0);
    }
  }
  else if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    if ((__this->fields).__4__this == (Utility_CustomDebug_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pUVar4 = Utility_CustomDebug__SpawnPrimitiveObject
                       ((Utility_CustomDebug_o *)__this_01,(__this->fields).type,
                        (UnityEngine_Vector3_o)(__this->fields).position.fields,
                        (UnityEngine_Quaternion_o)(__this->fields).Rotation.fields,
                        (UnityEngine_Vector3_o)(__this->fields).size.fields,
                        (UnityEngine_Color_o)(__this->fields).color.fields,in_RDX);
    (__this->fields)._obj_5__2 = pUVar4;
    il2cpp_runtime_glue(&(__this->fields)._obj_5__2);
    seconds = (__this->fields).duration;
    __this_00 = (UnityEngine_WaitForSeconds_o *)il2cpp_runtime_glue(TypeInfo_WaitForSeconds);
    UnityEngine_WaitForSeconds___ctor(__this_00,seconds,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)__this_00;
    il2cpp_runtime_glue(&(__this->fields).__2__current,__this_00);
    (__this->fields).__1__state = 1;
    bVar5 = (bool_conflict)CONCAT71((int7)((ulong)__this_00 >> 8),1);
  }
  else {
    bVar5 = 0;
  }
  return bVar5;
}


// Utility.CustomDebug.<SpawnPrimitiveCoroutine>d__18$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Utility_CustomDebug__SpawnPrimitiveCoroutine_d__18__System_Collections_Generic_IEnumerator_System_Object__get_Current (Utility_CustomDebug__SpawnPrimitiveCoroutine_d__18_o* __this, const MethodInfo* method);
// 0x4151480

Il2CppObject *
Utility_CustomDebug_<SpawnPrimitiveCoroutine>d__18__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (Utility_CustomDebug__SpawnPrimitiveCoroutine_d__18_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Utility.CustomDebug.<SpawnPrimitiveCoroutine>d__18$$System.Collections.IEnumerator.Reset
// il2cpp: void Utility_CustomDebug__SpawnPrimitiveCoroutine_d__18__System_Collections_IEnumerator_Reset (Utility_CustomDebug__SpawnPrimitiveCoroutine_d__18_o* __this, const MethodInfo* method);
// 0x4151490

void Utility_CustomDebug_<SpawnPrimitiveCoroutine>d__18__System_Collections_IEnumerator_Reset
               (Utility_CustomDebug__SpawnPrimitiveCoroutine_d__18_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_init_method_metadata(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_glue(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_init_method_metadata(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this_00,uVar1);
}


// Utility.CustomDebug.<SpawnPrimitiveCoroutine>d__18$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Utility_CustomDebug__SpawnPrimitiveCoroutine_d__18__System_Collections_IEnumerator_get_Current (Utility_CustomDebug__SpawnPrimitiveCoroutine_d__18_o* __this, const MethodInfo* method);
// 0x41514d0

Il2CppObject *
Utility_CustomDebug_<SpawnPrimitiveCoroutine>d__18__System_Collections_IEnumerator_get_Current
          (Utility_CustomDebug__SpawnPrimitiveCoroutine_d__18_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Utility.CustomDebug$$Init
// il2cpp: void Utility_CustomDebug__Init (const MethodInfo* method);
// 0x414f1a0

void Utility_CustomDebug__Init(MethodInfo *method)

{
  Il2CppObject *pIVar1;
  
  if (DAT_057049d6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomDebug);
    il2cpp_init_method_metadata(&MethodInfo_CustomDebug_CreateSingleton_CustomDebug);
    DAT_057049d6 = '\x01';
  }
  pIVar1 = Utility_SingletonFactory__CreateSingleton<object>
                     ((Il2CppObject *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8),MethodInfo_CustomDebug_CreateSingleton_CustomDebug);
  **(undefined8 **)(TypeInfo_CustomDebug + 0xb8) = pIVar1;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_CustomDebug + 0xb8),pIVar1);
  return;
}


// Utility.CustomDebug$$RemoveDebugVisual
// il2cpp: void Utility_CustomDebug__RemoveDebugVisual (System_String_o* name, const MethodInfo* method);
// 0x414f210

void Utility_CustomDebug__RemoveDebugVisual(System_String_o *name,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  bool_conflict bVar2;
  UnityEngine_Object_o *obj;
  
  if (DAT_057049d7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomDebug);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Remove);
    il2cpp_init_method_metadata(&MethodInfo_GameObject_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057049d7 = '\x01';
  }
  if ((**(long **)(TypeInfo_CustomDebug + 0xb8) != 0) &&
     (pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
                (**(long **)(TypeInfo_CustomDebug + 0xb8) + 0x20),
     pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
    bVar2 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                      (pSVar1,(Il2CppObject *)name,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar2 == '\0') {
      return;
    }
    if ((**(long **)(TypeInfo_CustomDebug + 0xb8) != 0) &&
       (pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
                  (**(long **)(TypeInfo_CustomDebug + 0xb8) + 0x20),
       pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
      obj = (UnityEngine_Object_o *)
            System_Collections_Generic_Dictionary<object__object>__get_Item
                      (pSVar1,(Il2CppObject *)name,MethodInfo_GameObject_get_Item);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      UnityEngine_Object__Destroy(obj,(MethodInfo *)0x0);
      if ((**(long **)(TypeInfo_CustomDebug + 0xb8) != 0) &&
         (pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
                    (**(long **)(TypeInfo_CustomDebug + 0xb8) + 0x20),
         pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
        System_Collections_Generic_Dictionary<object__object>__Remove
                  (pSVar1,(Il2CppObject *)name,MethodInfo_Boolean_Remove);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Utility.CustomDebug$$DrawRay
// il2cpp: System_String_o* Utility_CustomDebug__DrawRay (UnityEngine_Vector3_o origin, UnityEngine_Vector3_o direction, UnityEngine_Color_o color, System_String_o* name, const MethodInfo* method);
// 0x414f340

System_String_o *
Utility_CustomDebug__DrawRay
          (UnityEngine_Vector3_o origin,UnityEngine_Vector3_o direction,UnityEngine_Color_o color,
          System_String_o *name,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  UnityEngine_Object_o *__this_00;
  System_String_o *key;
  Utility_CustomDebug_o *__this_01;
  UnityEngine_Vector3_o end;
  float local_48;
  float fStack_44;
  
  if (DAT_057049d8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomDebug);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    DAT_057049d8 = '\x01';
  }
  __this_01 = (Utility_CustomDebug_o *)name;
  Utility_CustomDebug__RemoveDebugVisual(name,method);
  if (**(long **)(TypeInfo_CustomDebug + 0xb8) != 0) {
    local_48 = direction.fields.x;
    fStack_44 = direction.fields.y;
    end.fields.x = local_48 + origin.fields.x;
    end.fields.y = fStack_44 + origin.fields.y;
    end.fields.z = direction.fields.z + origin.fields.z;
    __this_00 = (UnityEngine_Object_o *)
                Utility_CustomDebug__DrawLineObject(__this_01,origin,end,color,0.0,method);
    if (__this_00 != (UnityEngine_Object_o *)0x0) {
      UnityEngine_Object__set_name(__this_00,name,(MethodInfo *)0x0);
      if (**(long **)(TypeInfo_CustomDebug + 0xb8) != 0) {
        __this = *(System_Collections_Generic_Dictionary_object__object__o **)
                  (**(long **)(TypeInfo_CustomDebug + 0xb8) + 0x20);
        key = UnityEngine_Object__get_name(__this_00,(MethodInfo *)0x0);
        if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary<object__object>__Add
                    (__this,(Il2CppObject *)key,(Il2CppObject *)__this_00,MethodInfo_Void_Add);
          return name;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Utility.CustomDebug$$DrawLine
// il2cpp: System_String_o* Utility_CustomDebug__DrawLine (UnityEngine_Vector3_o start, UnityEngine_Vector3_o end, UnityEngine_Color_o color, System_String_o* name, const MethodInfo* method);
// 0x414f630

System_String_o *
Utility_CustomDebug__DrawLine
          (UnityEngine_Vector3_o start,UnityEngine_Vector3_o end,UnityEngine_Color_o color,
          System_String_o *name,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  UnityEngine_Object_o *__this_00;
  System_String_o *key;
  Utility_CustomDebug_o *__this_01;
  
  if (DAT_057049d9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomDebug);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    DAT_057049d9 = '\x01';
  }
  __this_01 = (Utility_CustomDebug_o *)name;
  Utility_CustomDebug__RemoveDebugVisual(name,method);
  if (**(long **)(TypeInfo_CustomDebug + 0xb8) != 0) {
    __this_00 = (UnityEngine_Object_o *)
                Utility_CustomDebug__DrawLineObject(__this_01,start,end,color,0.0,method);
    if (__this_00 != (UnityEngine_Object_o *)0x0) {
      UnityEngine_Object__set_name(__this_00,name,(MethodInfo *)0x0);
      if (**(long **)(TypeInfo_CustomDebug + 0xb8) != 0) {
        __this = *(System_Collections_Generic_Dictionary_object__object__o **)
                  (**(long **)(TypeInfo_CustomDebug + 0xb8) + 0x20);
        key = UnityEngine_Object__get_name(__this_00,(MethodInfo *)0x0);
        if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary<object__object>__Add
                    (__this,(Il2CppObject *)key,(Il2CppObject *)__this_00,MethodInfo_Void_Add);
          return name;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Utility.CustomDebug$$SpawnCube
// il2cpp: System_String_o* Utility_CustomDebug__SpawnCube (UnityEngine_Vector3_o position, UnityEngine_Color_o color, System_String_o* name, const MethodInfo* method);
// 0x414f740

System_String_o *
Utility_CustomDebug__SpawnCube
          (UnityEngine_Vector3_o position,UnityEngine_Color_o color,System_String_o *name,
          MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  UnityEngine_Quaternion_Fields Rotation;
  UnityEngine_Object_o *__this_00;
  System_String_o *key;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *method_00;
  Utility_CustomDebug_o *__this_01;
  
  if (DAT_057049da == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomDebug);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    DAT_057049da = '\x01';
  }
  __this_01 = (Utility_CustomDebug_o *)name;
  Utility_CustomDebug__RemoveDebugVisual(name,method);
  lVar1 = **(long **)(TypeInfo_CustomDebug + 0xb8);
  method_00 = extraout_RDX;
  if (DAT_056fde1e == '\0') {
    __this_01 = (Utility_CustomDebug_o *)&TypeInfo_Quaternion;
    il2cpp_init_method_metadata();
    DAT_056fde1e = '\x01';
    method_00 = extraout_RDX_00;
  }
  Rotation = **(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8);
  if (DAT_056fe077 == '\0') {
    __this_01 = (Utility_CustomDebug_o *)&TypeInfo_Vector3;
    il2cpp_init_method_metadata();
    DAT_056fe077 = '\x01';
    method_00 = extraout_RDX_01;
  }
  if (lVar1 != 0) {
    __this_00 = (UnityEngine_Object_o *)
                Utility_CustomDebug__SpawnPrimitiveObject
                          (__this_01,3,position,(UnityEngine_Quaternion_o)Rotation,
                           (UnityEngine_Vector3_o)
                           *(UnityEngine_Vector3_Fields *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc),
                           color,method_00);
    if (__this_00 != (UnityEngine_Object_o *)0x0) {
      UnityEngine_Object__set_name(__this_00,name,(MethodInfo *)0x0);
      if (**(long **)(TypeInfo_CustomDebug + 0xb8) != 0) {
        __this = *(System_Collections_Generic_Dictionary_object__object__o **)
                  (**(long **)(TypeInfo_CustomDebug + 0xb8) + 0x20);
        key = UnityEngine_Object__get_name(__this_00,(MethodInfo *)0x0);
        if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary<object__object>__Add
                    (__this,(Il2CppObject *)key,(Il2CppObject *)__this_00,MethodInfo_Void_Add);
          return name;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Utility.CustomDebug$$SpawnSphere
// il2cpp: System_String_o* Utility_CustomDebug__SpawnSphere (UnityEngine_Vector3_o position, float radius, UnityEngine_Color_o color, System_String_o* name, const MethodInfo* method);
// 0x414fb00

System_String_o *
Utility_CustomDebug__SpawnSphere
          (UnityEngine_Vector3_o position,float radius,UnityEngine_Color_o color,
          System_String_o *name,MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  UnityEngine_Object_o *__this_00;
  System_String_o *key;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  Utility_CustomDebug_o *__this_01;
  UnityEngine_Vector3_o size;
  
  if (DAT_057049db == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomDebug);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    DAT_057049db = '\x01';
  }
  __this_01 = (Utility_CustomDebug_o *)name;
  Utility_CustomDebug__RemoveDebugVisual(name,method);
  lVar1 = **(long **)(TypeInfo_CustomDebug + 0xb8);
  method_00 = extraout_RDX;
  if (DAT_056fde1e == '\0') {
    __this_01 = (Utility_CustomDebug_o *)&TypeInfo_Quaternion;
    il2cpp_init_method_metadata();
    DAT_056fde1e = '\x01';
    method_00 = extraout_RDX_00;
  }
  if (lVar1 != 0) {
    size.fields.y = radius;
    size.fields.x = radius;
    size.fields.z = radius;
    __this_00 = (UnityEngine_Object_o *)
                Utility_CustomDebug__SpawnPrimitiveObject
                          (__this_01,0,position,
                           (UnityEngine_Quaternion_o)
                           **(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8),size,color,
                           method_00);
    if (__this_00 != (UnityEngine_Object_o *)0x0) {
      UnityEngine_Object__set_name(__this_00,name,(MethodInfo *)0x0);
      if (**(long **)(TypeInfo_CustomDebug + 0xb8) != 0) {
        __this = *(System_Collections_Generic_Dictionary_object__object__o **)
                  (**(long **)(TypeInfo_CustomDebug + 0xb8) + 0x20);
        key = UnityEngine_Object__get_name(__this_00,(MethodInfo *)0x0);
        if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary<object__object>__Add
                    (__this,(Il2CppObject *)key,(Il2CppObject *)__this_00,MethodInfo_Void_Add);
          return name;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Utility.CustomDebug$$SpawnCylinder
// il2cpp: System_String_o* Utility_CustomDebug__SpawnCylinder (UnityEngine_Vector3_o position, float radius, float height, UnityEngine_Color_o color, System_String_o* name, const MethodInfo* method);
// 0x414fc40

System_String_o *
Utility_CustomDebug__SpawnCylinder
          (UnityEngine_Vector3_o position,float radius,float height,UnityEngine_Color_o color,
          System_String_o *name,MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  UnityEngine_Object_o *__this_00;
  System_String_o *key;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  Utility_CustomDebug_o *__this_01;
  UnityEngine_Vector3_o size;
  
  if (DAT_057049dc == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomDebug);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    DAT_057049dc = '\x01';
  }
  __this_01 = (Utility_CustomDebug_o *)name;
  Utility_CustomDebug__RemoveDebugVisual(name,method);
  lVar1 = **(long **)(TypeInfo_CustomDebug + 0xb8);
  method_00 = extraout_RDX;
  if (DAT_056fde1e == '\0') {
    __this_01 = (Utility_CustomDebug_o *)&TypeInfo_Quaternion;
    il2cpp_init_method_metadata();
    DAT_056fde1e = '\x01';
    method_00 = extraout_RDX_00;
  }
  if (lVar1 != 0) {
    size.fields.y = height;
    size.fields.x = radius;
    size.fields.z = radius;
    __this_00 = (UnityEngine_Object_o *)
                Utility_CustomDebug__SpawnPrimitiveObject
                          (__this_01,2,position,
                           (UnityEngine_Quaternion_o)
                           **(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8),size,color,
                           method_00);
    if (__this_00 != (UnityEngine_Object_o *)0x0) {
      UnityEngine_Object__set_name(__this_00,name,(MethodInfo *)0x0);
      if (**(long **)(TypeInfo_CustomDebug + 0xb8) != 0) {
        __this = *(System_Collections_Generic_Dictionary_object__object__o **)
                  (**(long **)(TypeInfo_CustomDebug + 0xb8) + 0x20);
        key = UnityEngine_Object__get_name(__this_00,(MethodInfo *)0x0);
        if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary<object__object>__Add
                    (__this,(Il2CppObject *)key,(Il2CppObject *)__this_00,MethodInfo_Void_Add);
          return name;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Utility.CustomDebug$$SpawnCapsule
// il2cpp: System_String_o* Utility_CustomDebug__SpawnCapsule (UnityEngine_Vector3_o position, float radius, float height, UnityEngine_Color_o color, System_String_o* name, const MethodInfo* method);
// 0x414fd80

System_String_o *
Utility_CustomDebug__SpawnCapsule
          (UnityEngine_Vector3_o position,float radius,float height,UnityEngine_Color_o color,
          System_String_o *name,MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  UnityEngine_Object_o *__this_00;
  System_String_o *key;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  Utility_CustomDebug_o *__this_01;
  UnityEngine_Vector3_o size;
  
  if (DAT_057049dd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomDebug);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    DAT_057049dd = '\x01';
  }
  __this_01 = (Utility_CustomDebug_o *)name;
  Utility_CustomDebug__RemoveDebugVisual(name,method);
  lVar1 = **(long **)(TypeInfo_CustomDebug + 0xb8);
  method_00 = extraout_RDX;
  if (DAT_056fde1e == '\0') {
    __this_01 = (Utility_CustomDebug_o *)&TypeInfo_Quaternion;
    il2cpp_init_method_metadata();
    DAT_056fde1e = '\x01';
    method_00 = extraout_RDX_00;
  }
  if (lVar1 != 0) {
    size.fields.y = height;
    size.fields.x = radius;
    size.fields.z = radius;
    __this_00 = (UnityEngine_Object_o *)
                Utility_CustomDebug__SpawnPrimitiveObject
                          (__this_01,1,position,
                           (UnityEngine_Quaternion_o)
                           **(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8),size,color,
                           method_00);
    if (__this_00 != (UnityEngine_Object_o *)0x0) {
      UnityEngine_Object__set_name(__this_00,name,(MethodInfo *)0x0);
      if (**(long **)(TypeInfo_CustomDebug + 0xb8) != 0) {
        __this = *(System_Collections_Generic_Dictionary_object__object__o **)
                  (**(long **)(TypeInfo_CustomDebug + 0xb8) + 0x20);
        key = UnityEngine_Object__get_name(__this_00,(MethodInfo *)0x0);
        if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary<object__object>__Add
                    (__this,(Il2CppObject *)key,(Il2CppObject *)__this_00,MethodInfo_Void_Add);
          return name;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Utility.CustomDebug$$SpawnCapsuleCollder
// il2cpp: System_String_o* Utility_CustomDebug__SpawnCapsuleCollder (UnityEngine_CapsuleCollider_o* capsule, UnityEngine_Color_o color, System_String_o* name, const MethodInfo* method);
// 0x414fec0

System_String_o *
Utility_CustomDebug__SpawnCapsuleCollder
          (UnityEngine_CapsuleCollider_o *capsule,UnityEngine_Color_o color,System_String_o *name,
          MethodInfo *method)

{
  undefined8 uVar1;
  long lVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  bool_conflict bVar3;
  int32_t iVar4;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_Object_o *pUVar6;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_Transform_o *pUVar7;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *pMVar8;
  Utility_CustomDebug_o *__this_02;
  float fVar9;
  float fVar10;
  float fVar12;
  float fVar13;
  UnityEngine_Vector3_o UVar14;
  UnityEngine_Vector3_o UVar15;
  UnityEngine_Vector3_o UVar16;
  UnityEngine_Vector3_o UVar17;
  UnityEngine_Vector3_o UVar18;
  UnityEngine_Vector3_o position;
  UnityEngine_Quaternion_o Rotation;
  float fStack_b8;
  float fStack_88;
  float fStack_84;
  float fStack_78;
  float fStack_74;
  float fStack_44;
  float fVar11;
  
  if (DAT_057049de == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomDebug);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057049de = '\x01';
  }
  pUVar6 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Equality(pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)capsule,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                      );
    if ((char)bVar3 == '\0') {
      if (capsule != (UnityEngine_CapsuleCollider_o *)0x0) {
        pUVar5 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)capsule,(MethodInfo *)0x0);
        UVar14 = UnityEngine_CapsuleCollider__get_center(capsule,(MethodInfo *)0x0);
        if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
          UVar14 = UnityEngine_Transform__TransformPoint(pUVar5,UVar14,(MethodInfo *)0x0);
          fVar9 = UnityEngine_CapsuleCollider__get_radius(capsule,(MethodInfo *)0x0);
          UVar15 = UnityEngine_Transform__get_lossyScale(pUVar5,(MethodInfo *)0x0);
          UVar16 = UnityEngine_Transform__get_lossyScale(pUVar5,(MethodInfo *)0x0);
          fVar10 = UnityEngine_CapsuleCollider__get_height(capsule,(MethodInfo *)0x0);
          UVar17 = UnityEngine_Transform__get_lossyScale(pUVar5,(MethodInfo *)0x0);
          if (DAT_056fde1f == '\0') {
            il2cpp_init_method_metadata(UVar17.fields.x,UVar17.fields.z,&TypeInfo_Vector3);
            DAT_056fde1f = '\x01';
          }
          uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
          fVar11 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
          iVar4 = UnityEngine_CapsuleCollider__get_direction(capsule,(MethodInfo *)0x0);
          if (iVar4 == 2) {
            UVar18 = UnityEngine_Transform__get_forward(pUVar5,(MethodInfo *)0x0);
            fVar11 = UVar18.fields.z;
            fStack_88 = UVar18.fields.x;
            fStack_84 = UVar18.fields.y;
          }
          else if (iVar4 == 1) {
            UVar18 = UnityEngine_Transform__get_up(pUVar5,(MethodInfo *)0x0);
            fVar11 = UVar18.fields.z;
            fStack_88 = UVar18.fields.x;
            fStack_84 = UVar18.fields.y;
          }
          else {
            fStack_88 = (float)uVar1;
            fStack_84 = (float)((ulong)uVar1 >> 0x20);
            if (iVar4 == 0) {
              UVar18 = UnityEngine_Transform__get_right(pUVar5,(MethodInfo *)0x0);
              fVar11 = UVar18.fields.z;
              fStack_88 = UVar18.fields.x;
              fStack_84 = UVar18.fields.y;
            }
          }
          __this_02 = (Utility_CustomDebug_o *)0x0;
          UVar18.fields.y = fStack_84;
          UVar18.fields.x = fStack_88;
          UVar18.fields.z = fVar11;
          Rotation = UnityEngine_Quaternion__LookRotation(UVar18,(MethodInfo *)0x0);
          if (**(long **)(TypeInfo_CustomDebug + 0xb8) != 0) {
            fStack_b8 = UVar15.fields.x;
            if (fStack_b8 <= UVar16.fields.z) {
              fStack_b8 = UVar16.fields.z;
            }
            fStack_44 = UVar17.fields.y;
            fVar9 = fVar9 * fStack_b8;
            UVar15.fields.z = fVar9 + fVar9;
            fVar12 = fVar10 * fStack_44 - UVar15.fields.z;
            fVar10 = 0.0;
            if (0.0 <= fVar12) {
              fVar10 = fVar12;
            }
            UVar15.fields.y = fVar10 * 0.5;
            UVar15.fields.x = UVar15.fields.z;
            pUVar6 = (UnityEngine_Object_o *)
                     Utility_CustomDebug__SpawnPrimitiveObject
                               (__this_02,2,UVar14,Rotation,UVar15,color,method_00);
            pMVar8 = extraout_RDX;
            if (DAT_056fe077 == '\0') {
              __this_02 = (Utility_CustomDebug_o *)&TypeInfo_Vector3;
              il2cpp_init_method_metadata();
              DAT_056fe077 = '\x01';
              pMVar8 = extraout_RDX_00;
            }
            uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
            fVar12 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x14) * fVar9;
            lVar2 = **(long **)(TypeInfo_CustomDebug + 0xb8);
            if (DAT_056fde1e == '\0') {
              __this_02 = (Utility_CustomDebug_o *)&TypeInfo_Quaternion;
              il2cpp_init_method_metadata();
              DAT_056fde1e = '\x01';
              pMVar8 = extraout_RDX_01;
            }
            if (lVar2 != 0) {
              fVar10 = fVar10 * 0.5 + fVar9;
              fStack_78 = UVar14.fields.x;
              fStack_74 = UVar14.fields.y;
              fVar13 = fVar9 * (float)uVar1;
              fVar9 = fVar9 * (float)((ulong)uVar1 >> 0x20);
              UVar16.fields.x = fStack_78 + fVar10 * fStack_88;
              UVar16.fields.z = UVar14.fields.z + fVar10 * fVar11;
              UVar17.fields.x = fVar13 + fVar13;
              UVar17.fields.y = fVar9 + fVar9;
              UVar17.fields.z = fVar12 + fVar12;
              UVar16.fields.y = fStack_74 + fStack_84 * fVar10;
              __this_00 = Utility_CustomDebug__SpawnPrimitiveObject
                                    (__this_02,0,UVar16,
                                     (UnityEngine_Quaternion_o)
                                     **(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8),
                                     UVar17,color,pMVar8);
              lVar2 = **(long **)(TypeInfo_CustomDebug + 0xb8);
              pMVar8 = extraout_RDX_02;
              if (DAT_056fde1e == '\0') {
                __this_02 = (Utility_CustomDebug_o *)&TypeInfo_Quaternion;
                il2cpp_init_method_metadata();
                DAT_056fde1e = '\x01';
                pMVar8 = extraout_RDX_03;
              }
              if ((((lVar2 != 0) &&
                   (position.fields.x = fStack_78 - fVar10 * fStack_88,
                   position.fields.z = UVar14.fields.z - fVar10 * fVar11,
                   UVar14.fields.y = UVar17.fields.y, UVar14.fields.x = UVar17.fields.x,
                   position.fields.y = fStack_74 - fStack_84 * fVar10,
                   UVar14.fields.z = UVar17.fields.z,
                   __this_01 = Utility_CustomDebug__SpawnPrimitiveObject
                                         (__this_02,0,position,
                                          (UnityEngine_Quaternion_o)
                                          **(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8),
                                          UVar14,color,pMVar8),
                   __this_00 != (UnityEngine_GameObject_o *)0x0)) &&
                  (pUVar5 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0),
                  pUVar6 != (UnityEngine_Object_o *)0x0)) &&
                 ((pUVar7 = UnityEngine_GameObject__get_transform
                                      ((UnityEngine_GameObject_o *)pUVar6,(MethodInfo *)0x0),
                  pUVar5 != (UnityEngine_Transform_o *)0x0 &&
                  (UnityEngine_Transform__set_parent(pUVar5,pUVar7,(MethodInfo *)0x0),
                  __this_01 != (UnityEngine_GameObject_o *)0x0)))) {
                pUVar5 = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
                pUVar7 = UnityEngine_GameObject__get_transform
                                   ((UnityEngine_GameObject_o *)pUVar6,(MethodInfo *)0x0);
                if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
                  UnityEngine_Transform__set_parent(pUVar5,pUVar7,(MethodInfo *)0x0);
                  UnityEngine_Object__set_name(pUVar6,name,(MethodInfo *)0x0);
                  if ((**(long **)(TypeInfo_CustomDebug + 0xb8) != 0) &&
                     (__this = *(System_Collections_Generic_Dictionary_object__object__o **)
                                (**(long **)(TypeInfo_CustomDebug + 0xb8) + 0x20),
                     __this != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
                    System_Collections_Generic_Dictionary<object__object>__Add
                              (__this,(Il2CppObject *)name,(Il2CppObject *)pUVar6,MethodInfo_Void_Add);
                    return name;
                  }
                }
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  return (System_String_o *)0x0;
}


// Utility.CustomDebug$$DrawRay
// il2cpp: void Utility_CustomDebug__DrawRay (UnityEngine_Vector3_o origin, UnityEngine_Vector3_o direction, UnityEngine_Color_o color, float duration, const MethodInfo* method);
// 0x41503e0

void Utility_CustomDebug__DrawRay
               (UnityEngine_Vector3_o origin,UnityEngine_Vector3_o direction,
               UnityEngine_Color_o color,float duration,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_MonoBehaviour_o *__this;
  bool_conflict bVar1;
  Il2CppObject *__this_00;
  float fStack_58;
  float fStack_54;
  float fStack_48;
  float fStack_44;
  float fStack_28;
  float fStack_24;
  
  if (DAT_057049df == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomDebug);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057049df = '\x01';
  }
  x = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    __this = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
    if (__this != (UnityEngine_MonoBehaviour_o *)0x0) {
      if (DAT_057049e5 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_DrawLineCoroutine_d__17);
        DAT_057049e5 = '\x01';
      }
      __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_DrawLineCoroutine_d__17);
      System_Object___ctor(__this_00,(MethodInfo *)0x0);
      *(undefined4 *)&__this_00[1].klass = 0;
      if (__this_00 != (Il2CppObject *)0x0) {
        fStack_48 = direction.fields.x;
        fStack_44 = direction.fields.y;
        fStack_58 = origin.fields.x;
        fStack_54 = origin.fields.y;
        *(float *)&__this_00[2].klass = fStack_58;
        *(float *)((long)&__this_00[2].klass + 4) = fStack_54;
        *(float *)&__this_00[2].monitor = origin.fields.z;
        *(ulong *)((long)&__this_00[2].monitor + 4) =
             CONCAT44(fStack_44 + fStack_54,fStack_48 + fStack_58);
        *(float *)((long)&__this_00[3].klass + 4) = direction.fields.z + origin.fields.z;
        fStack_28 = color.fields.r;
        fStack_24 = color.fields.g;
        *(float *)&__this_00[3].monitor = fStack_28;
        *(float *)((long)&__this_00[3].monitor + 4) = fStack_24;
        *(float *)&__this_00[4].klass = color.fields.b;
        *(float *)((long)&__this_00[4].klass + 4) = color.fields.a;
        *(float *)&__this_00[4].monitor = duration;
        UnityEngine_MonoBehaviour__StartCoroutine
                  (__this,(System_Collections_IEnumerator_o *)__this_00,(MethodInfo *)0x0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return;
}


// Utility.CustomDebug$$DrawLine
// il2cpp: void Utility_CustomDebug__DrawLine (UnityEngine_Vector3_o start, UnityEngine_Vector3_o end, UnityEngine_Color_o color, float duration, const MethodInfo* method);
// 0x4150600

void Utility_CustomDebug__DrawLine
               (UnityEngine_Vector3_o start,UnityEngine_Vector3_o end,UnityEngine_Color_o color,
               float duration,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_MonoBehaviour_o *__this;
  bool_conflict bVar1;
  Il2CppObject *__this_00;
  float fStack_28;
  float fStack_24;
  
  if (DAT_057049e0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomDebug);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057049e0 = '\x01';
  }
  x = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    __this = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
    if (__this != (UnityEngine_MonoBehaviour_o *)0x0) {
      if (DAT_057049e5 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_DrawLineCoroutine_d__17);
        DAT_057049e5 = '\x01';
      }
      __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_DrawLineCoroutine_d__17);
      System_Object___ctor(__this_00,(MethodInfo *)0x0);
      *(undefined4 *)&__this_00[1].klass = 0;
      if (__this_00 != (Il2CppObject *)0x0) {
        __this_00[2].klass = start.fields._0_8_;
        *(float *)&__this_00[2].monitor = start.fields.z;
        *(long *)((long)&__this_00[2].monitor + 4) = end.fields._0_8_;
        *(float *)((long)&__this_00[3].klass + 4) = end.fields.z;
        fStack_28 = color.fields.r;
        fStack_24 = color.fields.g;
        *(float *)&__this_00[3].monitor = fStack_28;
        *(float *)((long)&__this_00[3].monitor + 4) = fStack_24;
        *(float *)&__this_00[4].klass = color.fields.b;
        *(float *)((long)&__this_00[4].klass + 4) = color.fields.a;
        *(float *)&__this_00[4].monitor = duration;
        UnityEngine_MonoBehaviour__StartCoroutine
                  (__this,(System_Collections_IEnumerator_o *)__this_00,(MethodInfo *)0x0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return;
}


// Utility.CustomDebug$$SpawnCube
// il2cpp: void Utility_CustomDebug__SpawnCube (UnityEngine_Vector3_o position, UnityEngine_Color_o color, float duration, const MethodInfo* method);
// 0x4150760

void Utility_CustomDebug__SpawnCube
               (UnityEngine_Vector3_o position,UnityEngine_Color_o color,float duration,
               MethodInfo *method)

{
  undefined4 uVar1;
  UnityEngine_Object_o *x;
  Il2CppClass *__this;
  void *pvVar2;
  void *pvVar3;
  Il2CppClass *pIVar4;
  bool_conflict bVar5;
  Il2CppObject *__this_00;
  float fStack_38;
  float fStack_34;
  
  if (DAT_057049e1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomDebug);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057049e1 = '\x01';
  }
  x = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar5 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    __this = (Il2CppClass *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
    if (DAT_056fde1e == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Quaternion);
      DAT_056fde1e = '\x01';
    }
    pvVar3 = (void *)**(undefined8 **)(TypeInfo_Quaternion + 0xb8);
    pIVar4 = (Il2CppClass *)(*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
    if (DAT_056fe077 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fe077 = '\x01';
    }
    if (__this != (Il2CppClass *)0x0) {
      pvVar2 = *(void **)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
      uVar1 = *(undefined4 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x14);
      if (DAT_057049e6 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_SpawnPrimitiveCoroutine_d__18);
        DAT_057049e6 = '\x01';
      }
      __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_SpawnPrimitiveCoroutine_d__18);
      System_Object___ctor(__this_00,(MethodInfo *)0x0);
      *(undefined4 *)&__this_00[1].klass = 0;
      if (__this_00 != (Il2CppObject *)0x0) {
        __this_00[2].klass = __this;
        il2cpp_runtime_glue(__this_00 + 2,__this);
        *(undefined4 *)&__this_00[2].monitor = 3;
        *(long *)((long)&__this_00[2].monitor + 4) = position.fields._0_8_;
        *(float *)((long)&__this_00[3].klass + 4) = position.fields.z;
        __this_00[3].monitor = pvVar3;
        __this_00[4].klass = pIVar4;
        __this_00[4].monitor = pvVar2;
        *(undefined4 *)&__this_00[5].klass = uVar1;
        fStack_38 = color.fields.r;
        fStack_34 = color.fields.g;
        *(float *)((long)&__this_00[5].klass + 4) = fStack_38;
        *(float *)&__this_00[5].monitor = fStack_34;
        *(float *)((long)&__this_00[5].monitor + 4) = color.fields.b;
        *(float *)&__this_00[6].klass = color.fields.a;
        *(float *)((long)&__this_00[6].klass + 4) = duration;
        UnityEngine_MonoBehaviour__StartCoroutine
                  ((UnityEngine_MonoBehaviour_o *)__this,
                   (System_Collections_IEnumerator_o *)__this_00,(MethodInfo *)0x0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return;
}


// Utility.CustomDebug$$SpawnSphere
// il2cpp: void Utility_CustomDebug__SpawnSphere (UnityEngine_Vector3_o position, float radius, UnityEngine_Color_o color, float duration, const MethodInfo* method);
// 0x4150a40

void Utility_CustomDebug__SpawnSphere
               (UnityEngine_Vector3_o position,float radius,UnityEngine_Color_o color,float duration
               ,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  Il2CppClass *__this;
  void *pvVar1;
  Il2CppClass *pIVar2;
  bool_conflict bVar3;
  Il2CppObject *__this_00;
  float fStack_28;
  float fStack_24;
  
  if (DAT_057049e2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomDebug);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057049e2 = '\x01';
  }
  x = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    __this = (Il2CppClass *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
    if (DAT_056fde1e == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Quaternion);
      DAT_056fde1e = '\x01';
    }
    if (__this != (Il2CppClass *)0x0) {
      pvVar1 = (void *)**(undefined8 **)(TypeInfo_Quaternion + 0xb8);
      pIVar2 = (Il2CppClass *)(*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
      if (DAT_057049e6 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_SpawnPrimitiveCoroutine_d__18);
        DAT_057049e6 = '\x01';
      }
      __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_SpawnPrimitiveCoroutine_d__18);
      System_Object___ctor(__this_00,(MethodInfo *)0x0);
      *(undefined4 *)&__this_00[1].klass = 0;
      if (__this_00 != (Il2CppObject *)0x0) {
        __this_00[2].klass = __this;
        il2cpp_runtime_glue(__this_00 + 2,__this);
        *(undefined4 *)&__this_00[2].monitor = 0;
        *(long *)((long)&__this_00[2].monitor + 4) = position.fields._0_8_;
        *(float *)((long)&__this_00[3].klass + 4) = position.fields.z;
        __this_00[3].monitor = pvVar1;
        __this_00[4].klass = pIVar2;
        __this_00[4].monitor = (void *)CONCAT44(radius,radius);
        *(float *)&__this_00[5].klass = radius;
        fStack_28 = color.fields.r;
        fStack_24 = color.fields.g;
        *(float *)((long)&__this_00[5].klass + 4) = fStack_28;
        *(float *)&__this_00[5].monitor = fStack_24;
        *(float *)((long)&__this_00[5].monitor + 4) = color.fields.b;
        *(float *)&__this_00[6].klass = color.fields.a;
        *(float *)((long)&__this_00[6].klass + 4) = duration;
        UnityEngine_MonoBehaviour__StartCoroutine
                  ((UnityEngine_MonoBehaviour_o *)__this,
                   (System_Collections_IEnumerator_o *)__this_00,(MethodInfo *)0x0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return;
}


// Utility.CustomDebug$$SpawnCylinder
// il2cpp: void Utility_CustomDebug__SpawnCylinder (UnityEngine_Vector3_o position, float radius, float height, UnityEngine_Color_o color, float duration, const MethodInfo* method);
// 0x4150c00

void Utility_CustomDebug__SpawnCylinder
               (UnityEngine_Vector3_o position,float radius,float height,UnityEngine_Color_o color,
               float duration,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  Il2CppClass *__this;
  void *pvVar1;
  Il2CppClass *pIVar2;
  bool_conflict bVar3;
  Il2CppObject *__this_00;
  float fStack_28;
  float fStack_24;
  
  if (DAT_057049e3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomDebug);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057049e3 = '\x01';
  }
  x = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    __this = (Il2CppClass *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
    if (DAT_056fde1e == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Quaternion);
      DAT_056fde1e = '\x01';
    }
    if (__this != (Il2CppClass *)0x0) {
      pvVar1 = (void *)**(undefined8 **)(TypeInfo_Quaternion + 0xb8);
      pIVar2 = (Il2CppClass *)(*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
      if (DAT_057049e6 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_SpawnPrimitiveCoroutine_d__18);
        DAT_057049e6 = '\x01';
      }
      __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_SpawnPrimitiveCoroutine_d__18);
      System_Object___ctor(__this_00,(MethodInfo *)0x0);
      *(undefined4 *)&__this_00[1].klass = 0;
      if (__this_00 != (Il2CppObject *)0x0) {
        __this_00[2].klass = __this;
        il2cpp_runtime_glue(__this_00 + 2,__this);
        *(undefined4 *)&__this_00[2].monitor = 2;
        *(long *)((long)&__this_00[2].monitor + 4) = position.fields._0_8_;
        *(float *)((long)&__this_00[3].klass + 4) = position.fields.z;
        __this_00[3].monitor = pvVar1;
        __this_00[4].klass = pIVar2;
        __this_00[4].monitor = (void *)CONCAT44(height,radius);
        *(float *)&__this_00[5].klass = radius;
        fStack_28 = color.fields.r;
        fStack_24 = color.fields.g;
        *(float *)((long)&__this_00[5].klass + 4) = fStack_28;
        *(float *)&__this_00[5].monitor = fStack_24;
        *(float *)((long)&__this_00[5].monitor + 4) = color.fields.b;
        *(float *)&__this_00[6].klass = color.fields.a;
        *(float *)((long)&__this_00[6].klass + 4) = duration;
        UnityEngine_MonoBehaviour__StartCoroutine
                  ((UnityEngine_MonoBehaviour_o *)__this,
                   (System_Collections_IEnumerator_o *)__this_00,(MethodInfo *)0x0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return;
}


// Utility.CustomDebug$$SpawnCapsule
// il2cpp: void Utility_CustomDebug__SpawnCapsule (UnityEngine_Vector3_o position, float radius, float height, UnityEngine_Color_o color, float duration, const MethodInfo* method);
// 0x4150dc0

void Utility_CustomDebug__SpawnCapsule
               (UnityEngine_Vector3_o position,float radius,float height,UnityEngine_Color_o color,
               float duration,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  Il2CppClass *__this;
  void *pvVar1;
  Il2CppClass *pIVar2;
  bool_conflict bVar3;
  Il2CppObject *__this_00;
  float fStack_28;
  float fStack_24;
  
  if (DAT_057049e4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomDebug);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057049e4 = '\x01';
  }
  x = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    __this = (Il2CppClass *)**(undefined8 **)(TypeInfo_CustomDebug + 0xb8);
    if (DAT_056fde1e == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Quaternion);
      DAT_056fde1e = '\x01';
    }
    if (__this != (Il2CppClass *)0x0) {
      pvVar1 = (void *)**(undefined8 **)(TypeInfo_Quaternion + 0xb8);
      pIVar2 = (Il2CppClass *)(*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
      if (DAT_057049e6 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_SpawnPrimitiveCoroutine_d__18);
        DAT_057049e6 = '\x01';
      }
      __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_SpawnPrimitiveCoroutine_d__18);
      System_Object___ctor(__this_00,(MethodInfo *)0x0);
      *(undefined4 *)&__this_00[1].klass = 0;
      if (__this_00 != (Il2CppObject *)0x0) {
        __this_00[2].klass = __this;
        il2cpp_runtime_glue(__this_00 + 2,__this);
        *(undefined4 *)&__this_00[2].monitor = 1;
        *(long *)((long)&__this_00[2].monitor + 4) = position.fields._0_8_;
        *(float *)((long)&__this_00[3].klass + 4) = position.fields.z;
        __this_00[3].monitor = pvVar1;
        __this_00[4].klass = pIVar2;
        __this_00[4].monitor = (void *)CONCAT44(height,radius);
        *(float *)&__this_00[5].klass = radius;
        fStack_28 = color.fields.r;
        fStack_24 = color.fields.g;
        *(float *)((long)&__this_00[5].klass + 4) = fStack_28;
        *(float *)&__this_00[5].monitor = fStack_24;
        *(float *)((long)&__this_00[5].monitor + 4) = color.fields.b;
        *(float *)&__this_00[6].klass = color.fields.a;
        *(float *)((long)&__this_00[6].klass + 4) = duration;
        UnityEngine_MonoBehaviour__StartCoroutine
                  ((UnityEngine_MonoBehaviour_o *)__this,
                   (System_Collections_IEnumerator_o *)__this_00,(MethodInfo *)0x0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return;
}


// Utility.CustomDebug$$DrawLineCoroutine
// il2cpp: System_Collections_IEnumerator_o* Utility_CustomDebug__DrawLineCoroutine (Utility_CustomDebug_o* __this, UnityEngine_Vector3_o start, UnityEngine_Vector3_o end, UnityEngine_Color_o color, float duration, const MethodInfo* method);
// 0x4150540

System_Collections_IEnumerator_o *
Utility_CustomDebug__DrawLineCoroutine
          (Utility_CustomDebug_o *__this,UnityEngine_Vector3_o start,UnityEngine_Vector3_o end,
          UnityEngine_Color_o color,float duration,MethodInfo *method)

{
  Il2CppObject *__this_00;
  float local_28;
  float fStack_24;
  
  if (DAT_057049e5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_DrawLineCoroutine_d__17);
    DAT_057049e5 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_DrawLineCoroutine_d__17);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = start.fields._0_8_;
    *(float *)&__this_00[2].monitor = start.fields.z;
    *(long *)((long)&__this_00[2].monitor + 4) = end.fields._0_8_;
    *(float *)((long)&__this_00[3].klass + 4) = end.fields.z;
    local_28 = color.fields.r;
    fStack_24 = color.fields.g;
    *(float *)&__this_00[3].monitor = local_28;
    *(float *)((long)&__this_00[3].monitor + 4) = fStack_24;
    *(float *)&__this_00[4].klass = color.fields.b;
    *(float *)((long)&__this_00[4].klass + 4) = color.fields.a;
    *(float *)&__this_00[4].monitor = duration;
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Utility.CustomDebug$$SpawnPrimitiveCoroutine
// il2cpp: System_Collections_IEnumerator_o* Utility_CustomDebug__SpawnPrimitiveCoroutine (Utility_CustomDebug_o* __this, int32_t type, UnityEngine_Vector3_o position, UnityEngine_Quaternion_o Rotation, UnityEngine_Vector3_o size, UnityEngine_Color_o color, float duration, const MethodInfo* method);
// 0x4150940

System_Collections_IEnumerator_o *
Utility_CustomDebug__SpawnPrimitiveCoroutine
          (Utility_CustomDebug_o *__this,int32_t type,UnityEngine_Vector3_o position,
          UnityEngine_Quaternion_o Rotation,UnityEngine_Vector3_o size,UnityEngine_Color_o color,
          float duration,MethodInfo *method)

{
  Il2CppObject *__this_00;
  float fStack_68;
  float fStack_64;
  float fStack_38;
  float fStack_34;
  
  if (DAT_057049e6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SpawnPrimitiveCoroutine_d__18);
    DAT_057049e6 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_SpawnPrimitiveCoroutine_d__18);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_glue(__this_00 + 2,__this);
    *(int32_t *)&__this_00[2].monitor = type;
    *(long *)((long)&__this_00[2].monitor + 4) = position.fields._0_8_;
    *(float *)((long)&__this_00[3].klass + 4) = position.fields.z;
    fStack_68 = Rotation.fields.x;
    fStack_64 = Rotation.fields.y;
    *(float *)&__this_00[3].monitor = fStack_68;
    *(float *)((long)&__this_00[3].monitor + 4) = fStack_64;
    *(float *)&__this_00[4].klass = Rotation.fields.z;
    *(float *)((long)&__this_00[4].klass + 4) = Rotation.fields.w;
    __this_00[4].monitor = size.fields._0_8_;
    *(float *)&__this_00[5].klass = size.fields.z;
    fStack_38 = color.fields.r;
    fStack_34 = color.fields.g;
    *(float *)((long)&__this_00[5].klass + 4) = fStack_38;
    *(float *)&__this_00[5].monitor = fStack_34;
    *(float *)((long)&__this_00[5].monitor + 4) = color.fields.b;
    *(float *)&__this_00[6].klass = color.fields.a;
    *(float *)((long)&__this_00[6].klass + 4) = duration;
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Utility.CustomDebug$$DrawLineObject
// il2cpp: UnityEngine_GameObject_o* Utility_CustomDebug__DrawLineObject (Utility_CustomDebug_o* __this, UnityEngine_Vector3_o start, UnityEngine_Vector3_o end, UnityEngine_Color_o color, float duration, const MethodInfo* method);
// 0x414f450

UnityEngine_GameObject_o *
Utility_CustomDebug__DrawLineObject
          (Utility_CustomDebug_o *__this,UnityEngine_Vector3_o start,UnityEngine_Vector3_o end,
          UnityEngine_Color_o color,float duration,MethodInfo *method)

{
  UnityEngine_Object_o *obj;
  UnityEngine_LineRenderer_o *__this_00;
  UnityEngine_Shader_o *shader;
  UnityEngine_Material_o *__this_01;
  
  if (DAT_057049e7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_LineRenderer_AddComponent_LineRenderer);
    il2cpp_init_method_metadata(&TypeInfo_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_Material);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"DebugLine");
    il2cpp_init_method_metadata(&"Sprites/Default");
    DAT_057049e7 = '\x01';
  }
  obj = (UnityEngine_Object_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
  UnityEngine_GameObject___ctor((UnityEngine_GameObject_o *)obj,"DebugLine",(MethodInfo *)0x0);
  if (obj != (UnityEngine_Object_o *)0x0) {
    __this_00 = (UnityEngine_LineRenderer_o *)
                UnityEngine_GameObject__AddComponent<object>
                          ((UnityEngine_GameObject_o *)obj,MethodInfo_LineRenderer_AddComponent_LineRenderer);
    if (__this_00 != (UnityEngine_LineRenderer_o *)0x0) {
      UnityEngine_LineRenderer__set_positionCount(__this_00,2,(MethodInfo *)0x0);
      UnityEngine_LineRenderer__SetPosition(__this_00,0,start,(MethodInfo *)0x0);
      UnityEngine_LineRenderer__SetPosition(__this_00,1,end,(MethodInfo *)0x0);
      shader = UnityEngine_Shader__Find("Sprites/Default",(MethodInfo *)0x0);
      __this_01 = (UnityEngine_Material_o *)il2cpp_runtime_glue(TypeInfo_Material);
      UnityEngine_Material___ctor(__this_01,shader,(MethodInfo *)0x0);
      UnityEngine_Renderer__set_material
                ((UnityEngine_Renderer_o *)__this_00,__this_01,(MethodInfo *)0x0);
      UnityEngine_LineRenderer__set_endColor(__this_00,color,(MethodInfo *)0x0);
      UnityEngine_LineRenderer__set_startColor(__this_00,color,(MethodInfo *)0x0);
      UnityEngine_LineRenderer__set_endWidth(__this_00,0.05,(MethodInfo *)0x0);
      UnityEngine_LineRenderer__set_startWidth(__this_00,0.05,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      UnityEngine_Object__Destroy(obj,duration,(MethodInfo *)0x0);
      return (UnityEngine_GameObject_o *)obj;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Utility.CustomDebug$$SpawnPrimitiveObject
// il2cpp: UnityEngine_GameObject_o* Utility_CustomDebug__SpawnPrimitiveObject (Utility_CustomDebug_o* __this, int32_t type, UnityEngine_Vector3_o position, UnityEngine_Quaternion_o Rotation, UnityEngine_Vector3_o size, UnityEngine_Color_o color, const MethodInfo* method);
// 0x414f8c0

UnityEngine_GameObject_o *
Utility_CustomDebug__SpawnPrimitiveObject
          (Utility_CustomDebug_o *__this,int32_t type,UnityEngine_Vector3_o position,
          UnityEngine_Quaternion_o Rotation,UnityEngine_Vector3_o size,UnityEngine_Color_o color,
          MethodInfo *method)

{
  bool_conflict bVar1;
  UnityEngine_Object_o *__this_00;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_Object_o *pUVar3;
  UnityEngine_Shader_o *shader;
  UnityEngine_Material_o *pUVar4;
  
  if (DAT_057049e8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Collider_GetComponent_Collider);
    il2cpp_init_method_metadata(&MethodInfo_Renderer_GetComponent_Renderer);
    il2cpp_init_method_metadata(&TypeInfo_Material);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"DebugPrimitive");
    il2cpp_init_method_metadata(&"Standard");
    DAT_057049e8 = '\x01';
  }
  __this_00 = (UnityEngine_Object_o *)
              UnityEngine_GameObject__CreatePrimitive(type,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_Object_o *)0x0) {
    UnityEngine_Object__set_name(__this_00,"DebugPrimitive",(MethodInfo *)0x0);
    pUVar2 = UnityEngine_GameObject__get_transform
                       ((UnityEngine_GameObject_o *)__this_00,(MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__set_position(pUVar2,position,(MethodInfo *)0x0);
      pUVar2 = UnityEngine_GameObject__get_transform
                         ((UnityEngine_GameObject_o *)__this_00,(MethodInfo *)0x0);
      if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__set_rotation(pUVar2,Rotation,(MethodInfo *)0x0);
        pUVar2 = UnityEngine_GameObject__get_transform
                           ((UnityEngine_GameObject_o *)__this_00,(MethodInfo *)0x0);
        if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__set_localScale(pUVar2,size,(MethodInfo *)0x0);
          pUVar3 = (UnityEngine_Object_o *)
                   UnityEngine_GameObject__GetComponent<object>
                             ((UnityEngine_GameObject_o *)__this_00,MethodInfo_Renderer_GetComponent_Renderer);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar1 = UnityEngine_Object__op_Inequality
                            (pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar1 != '\0') {
            shader = UnityEngine_Shader__Find("Standard",(MethodInfo *)0x0);
            pUVar4 = (UnityEngine_Material_o *)il2cpp_runtime_glue(TypeInfo_Material);
            UnityEngine_Material___ctor(pUVar4,shader,(MethodInfo *)0x0);
            if (pUVar3 == (UnityEngine_Object_o *)0x0) goto LAB_0414faf4;
            UnityEngine_Renderer__set_material
                      ((UnityEngine_Renderer_o *)pUVar3,pUVar4,(MethodInfo *)0x0);
            pUVar4 = UnityEngine_Renderer__get_material
                               ((UnityEngine_Renderer_o *)pUVar3,(MethodInfo *)0x0);
            if (pUVar4 == (UnityEngine_Material_o *)0x0) goto LAB_0414faf4;
            UnityEngine_Material__set_color(pUVar4,color,(MethodInfo *)0x0);
          }
          pUVar3 = (UnityEngine_Object_o *)
                   UnityEngine_GameObject__GetComponent<object>
                             ((UnityEngine_GameObject_o *)__this_00,MethodInfo_Collider_GetComponent_Collider);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar1 = UnityEngine_Object__op_Inequality
                            (pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar1 != '\0') {
            if (pUVar3 == (UnityEngine_Object_o *)0x0) goto LAB_0414faf4;
            UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)pUVar3,0,(MethodInfo *)0x0);
          }
          return (UnityEngine_GameObject_o *)__this_00;
        }
      }
    }
  }
LAB_0414faf4:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Utility.CustomDebug$$.ctor
// il2cpp: void Utility_CustomDebug___ctor (Utility_CustomDebug_o* __this, const MethodInfo* method);
// 0x4150fc0

void Utility_CustomDebug___ctor(Utility_CustomDebug_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  
  if (DAT_057049e9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_UnityEngine_GameObjec);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__GameObject);
    DAT_057049e9 = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              il2cpp_runtime_glue(TypeInfo_Dictionary_string__GameObject);
  System_Collections_Generic_Dictionary<object__object>___ctor(__this_00,MethodInfo_Dictionary_2_System_String_UnityEngine_GameObjec);
  (__this->fields)._debugObjects =
       (System_Collections_Generic_Dictionary_string__GameObject__o *)__this_00;
  il2cpp_runtime_glue(&(__this->fields)._debugObjects);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


