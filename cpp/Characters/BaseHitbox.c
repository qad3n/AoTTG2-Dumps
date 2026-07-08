// Type: Characters.BaseHitbox
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Characters/BaseHitbox.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Characters/BaseHitbox.cs  [CHANGED since prior version]
// --------------------------------

// Characters.BaseHitbox.<WaitAndActivate>d__15$$.ctor
// il2cpp: void Characters_BaseHitbox__WaitAndActivate_d__15___ctor (Characters_BaseHitbox__WaitAndActivate_d__15_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x3f9ad00

void Characters_BaseHitbox_<WaitAndActivate>d__15___ctor
               (Characters_BaseHitbox__WaitAndActivate_d__15_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Characters.BaseHitbox.<WaitAndActivate>d__15$$System.IDisposable.Dispose
// il2cpp: void Characters_BaseHitbox__WaitAndActivate_d__15__System_IDisposable_Dispose (Characters_BaseHitbox__WaitAndActivate_d__15_o* __this, const MethodInfo* method);
// 0x3f9b370

void Characters_BaseHitbox_<WaitAndActivate>d__15__System_IDisposable_Dispose
               (Characters_BaseHitbox__WaitAndActivate_d__15_o *__this,MethodInfo *method)

{
  return;
}


// Characters.BaseHitbox.<WaitAndActivate>d__15$$MoveNext
// il2cpp: bool Characters_BaseHitbox__WaitAndActivate_d__15__MoveNext (Characters_BaseHitbox__WaitAndActivate_d__15_o* __this, const MethodInfo* method);
// 0x3f9b380

bool_conflict
Characters_BaseHitbox_<WaitAndActivate>d__15__MoveNext
          (Characters_BaseHitbox__WaitAndActivate_d__15_o *__this,MethodInfo *method)

{
  float seconds;
  int iVar1;
  Characters_BaseHitbox_o *pCVar2;
  UnityEngine_Collider_o *__this_00;
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this_01;
  bool_conflict bVar3;
  UnityEngine_WaitForSeconds_o *__this_02;
  bool_conflict bVar4;
  
  if (DAT_0570400c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_WaitForSeconds);
    DAT_0570400c = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    pCVar2 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if ((pCVar2 == (Characters_BaseHitbox_o *)0x0) ||
       (__this_00 = (pCVar2->fields)._collider, __this_00 == (UnityEngine_Collider_o *)0x0)) {
LAB_03f9b4a4:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    UnityEngine_Collider__set_enabled(__this_00,1,(MethodInfo *)0x0);
    if (DAT_0570400a == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Object);
      DAT_0570400a = '\x01';
    }
    x = (UnityEngine_Object_o *)(pCVar2->fields)._debugObject;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar4 = 0;
    bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      __this_01 = (pCVar2->fields)._debugObject;
      if (__this_01 == (UnityEngine_GameObject_o *)0x0) goto LAB_03f9b4a4;
      bVar4 = 0;
      UnityEngine_GameObject__SetActive(__this_01,1,(MethodInfo *)0x0);
    }
  }
  else if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    seconds = (__this->fields).delay;
    __this_02 = (UnityEngine_WaitForSeconds_o *)il2cpp_runtime_glue(TypeInfo_WaitForSeconds);
    UnityEngine_WaitForSeconds___ctor(__this_02,seconds,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)__this_02;
    il2cpp_runtime_glue(&(__this->fields).__2__current,__this_02);
    (__this->fields).__1__state = 1;
    bVar4 = (bool_conflict)CONCAT71((int7)((ulong)__this >> 8),1);
  }
  else {
    bVar4 = 0;
  }
  return bVar4;
}


// Characters.BaseHitbox.<WaitAndActivate>d__15$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Characters_BaseHitbox__WaitAndActivate_d__15__System_Collections_Generic_IEnumerator_System_Object__get_Current (Characters_BaseHitbox__WaitAndActivate_d__15_o* __this, const MethodInfo* method);
// 0x3f9b4b0

Il2CppObject *
Characters_BaseHitbox_<WaitAndActivate>d__15__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (Characters_BaseHitbox__WaitAndActivate_d__15_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Characters.BaseHitbox.<WaitAndActivate>d__15$$System.Collections.IEnumerator.Reset
// il2cpp: void Characters_BaseHitbox__WaitAndActivate_d__15__System_Collections_IEnumerator_Reset (Characters_BaseHitbox__WaitAndActivate_d__15_o* __this, const MethodInfo* method);
// 0x3f9b4c0

void Characters_BaseHitbox_<WaitAndActivate>d__15__System_Collections_IEnumerator_Reset
               (Characters_BaseHitbox__WaitAndActivate_d__15_o *__this,MethodInfo *method)

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


// Characters.BaseHitbox.<WaitAndActivate>d__15$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Characters_BaseHitbox__WaitAndActivate_d__15__System_Collections_IEnumerator_get_Current (Characters_BaseHitbox__WaitAndActivate_d__15_o* __this, const MethodInfo* method);
// 0x3f9b500

Il2CppObject *
Characters_BaseHitbox_<WaitAndActivate>d__15__System_Collections_IEnumerator_get_Current
          (Characters_BaseHitbox__WaitAndActivate_d__15_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Characters.BaseHitbox.<WaitAndDeactivate>d__16$$.ctor
// il2cpp: void Characters_BaseHitbox__WaitAndDeactivate_d__16___ctor (Characters_BaseHitbox__WaitAndDeactivate_d__16_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x3f9ad20

void Characters_BaseHitbox_<WaitAndDeactivate>d__16___ctor
               (Characters_BaseHitbox__WaitAndDeactivate_d__16_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Characters.BaseHitbox.<WaitAndDeactivate>d__16$$System.IDisposable.Dispose
// il2cpp: void Characters_BaseHitbox__WaitAndDeactivate_d__16__System_IDisposable_Dispose (Characters_BaseHitbox__WaitAndDeactivate_d__16_o* __this, const MethodInfo* method);
// 0x3f9b510

void Characters_BaseHitbox_<WaitAndDeactivate>d__16__System_IDisposable_Dispose
               (Characters_BaseHitbox__WaitAndDeactivate_d__16_o *__this,MethodInfo *method)

{
  return;
}


// Characters.BaseHitbox.<WaitAndDeactivate>d__16$$MoveNext
// il2cpp: bool Characters_BaseHitbox__WaitAndDeactivate_d__16__MoveNext (Characters_BaseHitbox__WaitAndDeactivate_d__16_o* __this, const MethodInfo* method);
// 0x3f9b520

bool_conflict
Characters_BaseHitbox_<WaitAndDeactivate>d__16__MoveNext
          (Characters_BaseHitbox__WaitAndDeactivate_d__16_o *__this,MethodInfo *method)

{
  float seconds;
  int iVar1;
  Characters_BaseHitbox_o *pCVar2;
  UnityEngine_Collider_o *__this_00;
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this_01;
  bool_conflict bVar3;
  UnityEngine_WaitForSeconds_o *__this_02;
  bool_conflict bVar4;
  
  if (DAT_0570400d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_WaitForSeconds);
    DAT_0570400d = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    pCVar2 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if ((pCVar2 == (Characters_BaseHitbox_o *)0x0) ||
       (__this_00 = (pCVar2->fields)._collider, __this_00 == (UnityEngine_Collider_o *)0x0)) {
LAB_03f9b63e:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    UnityEngine_Collider__set_enabled(__this_00,0,(MethodInfo *)0x0);
    if (DAT_0570400a == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Object);
      DAT_0570400a = '\x01';
    }
    x = (UnityEngine_Object_o *)(pCVar2->fields)._debugObject;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar4 = 0;
    bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      __this_01 = (pCVar2->fields)._debugObject;
      if (__this_01 == (UnityEngine_GameObject_o *)0x0) goto LAB_03f9b63e;
      bVar4 = 0;
      UnityEngine_GameObject__SetActive(__this_01,0,(MethodInfo *)0x0);
    }
  }
  else if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    seconds = (__this->fields).delay;
    __this_02 = (UnityEngine_WaitForSeconds_o *)il2cpp_runtime_glue(TypeInfo_WaitForSeconds);
    UnityEngine_WaitForSeconds___ctor(__this_02,seconds,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)__this_02;
    il2cpp_runtime_glue(&(__this->fields).__2__current,__this_02);
    (__this->fields).__1__state = 1;
    bVar4 = (bool_conflict)CONCAT71((int7)((ulong)__this >> 8),1);
  }
  else {
    bVar4 = 0;
  }
  return bVar4;
}


// Characters.BaseHitbox.<WaitAndDeactivate>d__16$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Characters_BaseHitbox__WaitAndDeactivate_d__16__System_Collections_Generic_IEnumerator_System_Object__get_Current (Characters_BaseHitbox__WaitAndDeactivate_d__16_o* __this, const MethodInfo* method);
// 0x3f9b650

Il2CppObject *
Characters_BaseHitbox_<WaitAndDeactivate>d__16__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (Characters_BaseHitbox__WaitAndDeactivate_d__16_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Characters.BaseHitbox.<WaitAndDeactivate>d__16$$System.Collections.IEnumerator.Reset
// il2cpp: void Characters_BaseHitbox__WaitAndDeactivate_d__16__System_Collections_IEnumerator_Reset (Characters_BaseHitbox__WaitAndDeactivate_d__16_o* __this, const MethodInfo* method);
// 0x3f9b660

void Characters_BaseHitbox_<WaitAndDeactivate>d__16__System_Collections_IEnumerator_Reset
               (Characters_BaseHitbox__WaitAndDeactivate_d__16_o *__this,MethodInfo *method)

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


// Characters.BaseHitbox.<WaitAndDeactivate>d__16$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Characters_BaseHitbox__WaitAndDeactivate_d__16__System_Collections_IEnumerator_get_Current (Characters_BaseHitbox__WaitAndDeactivate_d__16_o* __this, const MethodInfo* method);
// 0x3f9b6a0

Il2CppObject *
Characters_BaseHitbox_<WaitAndDeactivate>d__16__System_Collections_IEnumerator_get_Current
          (Characters_BaseHitbox__WaitAndDeactivate_d__16_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Characters.BaseHitbox$$Create
// il2cpp: Characters_BaseHitbox_o* Characters_BaseHitbox__Create (Characters_BaseCharacter_o* owner, UnityEngine_GameObject_o* obj, UnityEngine_Collider_o* collider, const MethodInfo* method);
// 0x3f9a350

Characters_BaseHitbox_o *
Characters_BaseHitbox__Create
          (Characters_BaseCharacter_o *owner,UnityEngine_GameObject_o *obj,
          UnityEngine_Collider_o *collider,MethodInfo *method)

{
  code cVar1;
  bool_conflict bVar2;
  Characters_BaseHitbox_o *__this;
  MethodInfo *method_00;
  
  if (DAT_05704000 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_BaseHitbox_AddComponent_BaseHitbox);
    il2cpp_init_method_metadata(&MethodInfo_Collider_GetComponent_Collider);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_SphereCollider);
    DAT_05704000 = '\x01';
  }
  if (obj != (UnityEngine_GameObject_o *)0x0) {
    __this = (Characters_BaseHitbox_o *)
             UnityEngine_GameObject__AddComponent<object>(obj,MethodInfo_BaseHitbox_AddComponent_BaseHitbox);
    if (__this != (Characters_BaseHitbox_o *)0x0) {
      (__this->fields).Owner = owner;
      il2cpp_runtime_glue(&(__this->fields).Owner);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar2 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)collider,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        collider = (UnityEngine_Collider_o *)
                   UnityEngine_GameObject__GetComponent<object>(obj,MethodInfo_Collider_GetComponent_Collider);
      }
      (__this->fields)._collider = collider;
      method_00 = (MethodInfo *)collider;
      il2cpp_runtime_glue(&(__this->fields)._collider);
      Characters_BaseHitbox__Deactivate(__this,method_00);
      if ((MethodInfo *)collider != (MethodInfo *)0x0) {
        cVar1 = *(code *)(TypeInfo_SphereCollider + 0x130);
        if (((byte)cVar1 <= (byte)((MethodInfo *)collider)->methodPointer[0x130]) &&
           (*(long *)(*(long *)(((MethodInfo *)collider)->methodPointer + 200) + -8 +
                     (long)(ulong)(byte)cVar1 * 8) == TypeInfo_SphereCollider)) {
          Characters_BaseHitbox__UpdateDebugCollider
                    (__this,(UnityEngine_SphereCollider_o *)collider,
                     (MethodInfo *)(ulong)(byte)cVar1);
        }
      }
      return __this;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseHitbox$$UpdateSphereCollider
// il2cpp: void Characters_BaseHitbox__UpdateSphereCollider (Characters_BaseHitbox_o* __this, float radius, const MethodInfo* method);
// 0x3f9a7c0

void Characters_BaseHitbox__UpdateSphereCollider
               (Characters_BaseHitbox_o *__this,float radius,MethodInfo *method)

{
  byte bVar1;
  UnityEngine_SphereCollider_o *__this_00;
  MethodInfo *method_00;
  
  if (DAT_05704001 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SphereCollider);
    DAT_05704001 = '\x01';
  }
  __this_00 = (UnityEngine_SphereCollider_o *)(__this->fields)._collider;
  if (__this_00 != (UnityEngine_SphereCollider_o *)0x0) {
    bVar1 = (TypeInfo_SphereCollider->_2).naturalAligment;
    if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_SphereCollider)) {
      UnityEngine_SphereCollider__set_radius(__this_00,radius,(MethodInfo *)0x0);
      Characters_BaseHitbox__UpdateDebugCollider(__this,__this_00,method_00);
      return;
    }
  }
  return;
}


// Characters.BaseHitbox$$ScaleSphereCollider
// il2cpp: void Characters_BaseHitbox__ScaleSphereCollider (Characters_BaseHitbox_o* __this, float scale, const MethodInfo* method);
// 0x3f9a850

void Characters_BaseHitbox__ScaleSphereCollider
               (Characters_BaseHitbox_o *__this,float scale,MethodInfo *method)

{
  byte bVar1;
  UnityEngine_SphereCollider_o *__this_00;
  MethodInfo *method_00;
  float fVar2;
  
  if (DAT_05704002 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SphereCollider);
    DAT_05704002 = '\x01';
  }
  __this_00 = (UnityEngine_SphereCollider_o *)(__this->fields)._collider;
  if (__this_00 != (UnityEngine_SphereCollider_o *)0x0) {
    bVar1 = (TypeInfo_SphereCollider->_2).naturalAligment;
    if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_SphereCollider)) {
      fVar2 = UnityEngine_SphereCollider__get_radius(__this_00,(MethodInfo *)0x0);
      UnityEngine_SphereCollider__set_radius(__this_00,fVar2 * scale,(MethodInfo *)0x0);
      Characters_BaseHitbox__UpdateDebugCollider(__this,__this_00,method_00);
      return;
    }
  }
  return;
}


// Characters.BaseHitbox$$UpdateDebugCollider
// il2cpp: void Characters_BaseHitbox__UpdateDebugCollider (Characters_BaseHitbox_o* __this, UnityEngine_SphereCollider_o* collider, const MethodInfo* method);
// 0x3f9a510

void Characters_BaseHitbox__UpdateDebugCollider
               (Characters_BaseHitbox_o *__this,UnityEngine_SphereCollider_o *collider,
               MethodInfo *method)

{
  UnityEngine_GameObject_o **ppUVar1;
  undefined8 uVar2;
  UnityEngine_Object_o *pUVar3;
  bool_conflict bVar4;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_Transform_o *value;
  UnityEngine_Renderer_o *__this_02;
  UnityEngine_Material_o *__this_03;
  float fVar6;
  float fVar7;
  UnityEngine_Vector3_o UVar8;
  UnityEngine_Color_o value_00;
  float local_38;
  float fStack_34;
  
  if (DAT_05704003 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_DebugTesting);
    il2cpp_init_method_metadata(&MethodInfo_Renderer_GetComponent_Renderer);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    il2cpp_init_method_metadata(&"Game");
    il2cpp_init_method_metadata(&"TestSphere");
    DAT_05704003 = '\x01';
  }
  if (*(char *)(*(long *)(TypeInfo_DebugTesting + 0xb8) + 8) != '\0') {
    pUVar3 = (UnityEngine_Object_o *)(__this->fields)._debugObject;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    ppUVar1 = &(__this->fields)._debugObject;
    bVar4 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      pUVar3 = (UnityEngine_Object_o *)*ppUVar1;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      UnityEngine_Object__Destroy(pUVar3,(MethodInfo *)0x0);
    }
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    __this_00 = (UnityEngine_GameObject_o *)
                ApplicationManagers_ResourceManager__InstantiateAsset<object>
                          ("Game","TestSphere",0,MethodInfo_GameObject_InstantiateAsset_GameObject);
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      pUVar5 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
      __this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
        value = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
        if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__set_parent(pUVar5,value,(MethodInfo *)0x0);
          pUVar5 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
          if (collider != (UnityEngine_SphereCollider_o *)0x0) {
            UVar8 = UnityEngine_SphereCollider__get_center(collider,(MethodInfo *)0x0);
            if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
              UnityEngine_Transform__set_localPosition(pUVar5,UVar8,(MethodInfo *)0x0);
              pUVar5 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
              if (DAT_056fe077 == '\0') {
                il2cpp_init_method_metadata(&TypeInfo_Vector3);
                DAT_056fe077 = '\x01';
              }
              uVar2 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
              fVar7 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x14);
              fVar6 = UnityEngine_SphereCollider__get_radius(collider,(MethodInfo *)0x0);
              if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
                local_38 = (float)uVar2;
                fStack_34 = (float)((ulong)uVar2 >> 0x20);
                fVar7 = fVar7 * fVar6;
                UVar8.fields.z = fVar7 + fVar7;
                UVar8.fields.y = fStack_34 * fVar6 + fStack_34 * fVar6;
                UVar8.fields.x = local_38 * fVar6 + local_38 * fVar6;
                UnityEngine_Transform__set_localScale(pUVar5,UVar8,(MethodInfo *)0x0);
                __this_02 = (UnityEngine_Renderer_o *)
                            UnityEngine_GameObject__GetComponent<object>(__this_00,MethodInfo_Renderer_GetComponent_Renderer);
                if (__this_02 != (UnityEngine_Renderer_o *)0x0) {
                  __this_03 = UnityEngine_Renderer__get_material(__this_02,(MethodInfo *)0x0);
                  if (__this_03 != (UnityEngine_Material_o *)0x0) {
                    value_00.fields.b = 0.0;
                    value_00.fields.a = 1.0;
                    value_00.fields.r = 1.0;
                    value_00.fields.g = 0.0;
                    UnityEngine_Material__set_color(__this_03,value_00,(MethodInfo *)0x0);
                    *ppUVar1 = __this_00;
                    il2cpp_runtime_glue(ppUVar1);
                    if (*ppUVar1 != (UnityEngine_GameObject_o *)0x0) {
                      UnityEngine_GameObject__SetActive(*ppUVar1,0,(MethodInfo *)0x0);
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
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return;
}


// Characters.BaseHitbox$$IsActive
// il2cpp: bool Characters_BaseHitbox__IsActive (Characters_BaseHitbox_o* __this, const MethodInfo* method);
// 0x3f9a8e0

bool_conflict Characters_BaseHitbox__IsActive(Characters_BaseHitbox_o *__this,MethodInfo *method)

{
  UnityEngine_Collider_o *__this_00;
  bool_conflict bVar1;
  
  __this_00 = (__this->fields)._collider;
  if (__this_00 != (UnityEngine_Collider_o *)0x0) {
    bVar1 = UnityEngine_Collider__get_enabled(__this_00,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseHitbox$$Activate
// il2cpp: void Characters_BaseHitbox__Activate (Characters_BaseHitbox_o* __this, float delay, float length, const MethodInfo* method);
// 0x3f9a900

void Characters_BaseHitbox__Activate
               (Characters_BaseHitbox_o *__this,float delay,float length,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *pSVar1;
  UnityEngine_Collider_o *__this_00;
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this_01;
  bool_conflict bVar2;
  Il2CppObject *pIVar3;
  
  if (DAT_05704004 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    DAT_05704004 = '\x01';
  }
  pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._hitGameObjects;
  if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Clear(pSVar1,MethodInfo_Void_Clear);
    pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._firstHitCharacters;
    if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet<object>__Clear(pSVar1,MethodInfo_Void_Clear);
      pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._firstHitHandlers;
      if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        System_Collections_Generic_HashSet<object>__Clear(pSVar1,MethodInfo_Void_Clear);
        pSVar1 = (System_Collections_Generic_HashSet_object__o *)
                 (__this->fields)._firstFrameColliders;
        if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
          System_Collections_Generic_HashSet<object>__Clear(pSVar1,MethodInfo_Void_Clear);
          if ((delay != 0.0) || (NAN(delay))) {
            if (DAT_05704005 == '\0') {
              il2cpp_init_method_metadata(&TypeInfo_WaitAndActivate_d__15);
              DAT_05704005 = '\x01';
            }
            pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitAndActivate_d__15);
            System_Object___ctor(pIVar3,(MethodInfo *)0x0);
            *(undefined4 *)&pIVar3[1].klass = 0;
            if (pIVar3 == (Il2CppObject *)0x0) goto LAB_03f9ab76;
            pIVar3[2].monitor = __this;
            il2cpp_runtime_glue(&pIVar3[2].monitor,__this);
            *(float *)&pIVar3[2].klass = delay;
            UnityEngine_MonoBehaviour__StartCoroutine
                      ((UnityEngine_MonoBehaviour_o *)__this,
                       (System_Collections_IEnumerator_o *)pIVar3,(MethodInfo *)0x0);
          }
          else {
            __this_00 = (__this->fields)._collider;
            if (__this_00 == (UnityEngine_Collider_o *)0x0) goto LAB_03f9ab76;
            UnityEngine_Collider__set_enabled(__this_00,1,(MethodInfo *)0x0);
            if (DAT_0570400a == '\0') {
              il2cpp_init_method_metadata(&TypeInfo_Object);
              DAT_0570400a = '\x01';
            }
            x = (UnityEngine_Object_o *)(__this->fields)._debugObject;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_init_class();
            }
            bVar2 = UnityEngine_Object__op_Inequality
                              (x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              __this_01 = (__this->fields)._debugObject;
              if (__this_01 == (UnityEngine_GameObject_o *)0x0) goto LAB_03f9ab76;
              UnityEngine_GameObject__SetActive(__this_01,1,(MethodInfo *)0x0);
            }
          }
          if (length <= 0.0) {
            return;
          }
          if (DAT_05704006 == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_WaitAndDeactivate_d__16);
            DAT_05704006 = '\x01';
          }
          pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitAndDeactivate_d__16);
          System_Object___ctor(pIVar3,(MethodInfo *)0x0);
          *(undefined4 *)&pIVar3[1].klass = 0;
          if (pIVar3 != (Il2CppObject *)0x0) {
            pIVar3[2].monitor = __this;
            il2cpp_runtime_glue(&pIVar3[2].monitor,__this);
            *(float *)&pIVar3[2].klass = delay + length;
            UnityEngine_MonoBehaviour__StartCoroutine
                      ((UnityEngine_MonoBehaviour_o *)__this,
                       (System_Collections_IEnumerator_o *)pIVar3,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
LAB_03f9ab76:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseHitbox$$Deactivate
// il2cpp: void Characters_BaseHitbox__Deactivate (Characters_BaseHitbox_o* __this, const MethodInfo* method);
// 0x3f9a480

void Characters_BaseHitbox__Deactivate(Characters_BaseHitbox_o *__this,MethodInfo *method)

{
  UnityEngine_Collider_o *__this_00;
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this_01;
  bool_conflict bVar1;
  
  UnityEngine_MonoBehaviour__StopAllCoroutines
            ((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  __this_00 = (__this->fields)._collider;
  if (__this_00 != (UnityEngine_Collider_o *)0x0) {
    UnityEngine_Collider__set_enabled(__this_00,0,(MethodInfo *)0x0);
    if (DAT_0570400a == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Object);
      DAT_0570400a = '\x01';
    }
    x = (UnityEngine_Object_o *)(__this->fields)._debugObject;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      return;
    }
    __this_01 = (__this->fields)._debugObject;
    if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(__this_01,0,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseHitbox$$WaitAndActivate
// il2cpp: System_Collections_IEnumerator_o* Characters_BaseHitbox__WaitAndActivate (Characters_BaseHitbox_o* __this, float delay, const MethodInfo* method);
// 0x3f9ac00

System_Collections_IEnumerator_o *
Characters_BaseHitbox__WaitAndActivate
          (Characters_BaseHitbox_o *__this,float delay,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_05704005 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_WaitAndActivate_d__15);
    DAT_05704005 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitAndActivate_d__15);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].monitor = __this;
    il2cpp_runtime_glue(&__this_00[2].monitor,__this);
    *(float *)&__this_00[2].klass = delay;
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseHitbox$$WaitAndDeactivate
// il2cpp: System_Collections_IEnumerator_o* Characters_BaseHitbox__WaitAndDeactivate (Characters_BaseHitbox_o* __this, float delay, const MethodInfo* method);
// 0x3f9ac80

System_Collections_IEnumerator_o *
Characters_BaseHitbox__WaitAndDeactivate
          (Characters_BaseHitbox_o *__this,float delay,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_05704006 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_WaitAndDeactivate_d__16);
    DAT_05704006 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitAndDeactivate_d__16);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].monitor = __this;
    il2cpp_runtime_glue(&__this_00[2].monitor,__this);
    *(float *)&__this_00[2].klass = delay;
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseHitbox$$OnTriggerEnter
// il2cpp: void Characters_BaseHitbox__OnTriggerEnter (Characters_BaseHitbox_o* __this, UnityEngine_Collider_o* other, const MethodInfo* method);
// 0x3f9ad40

void Characters_BaseHitbox__OnTriggerEnter
               (Characters_BaseHitbox_o *__this,UnityEngine_Collider_o *other,MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  
  if ((char)(__this->fields).TwoFixedUpdates != '\0') {
    return;
  }
  vtable_dispatch = (__this->klass->vtable)._6_OnTrigger.methodPtr;
  (*vtable_dispatch)
            (__this,other,(__this->klass->vtable)._6_OnTrigger.method,vtable_dispatch);
  return;
}


// Characters.BaseHitbox$$OnTriggerStay
// il2cpp: void Characters_BaseHitbox__OnTriggerStay (Characters_BaseHitbox_o* __this, UnityEngine_Collider_o* other, const MethodInfo* method);
// 0x3f9ad60

void Characters_BaseHitbox__OnTriggerStay
               (Characters_BaseHitbox_o *__this,UnityEngine_Collider_o *other,MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  
  if ((char)(__this->fields).TwoFixedUpdates != '\0') {
    vtable_dispatch = (__this->klass->vtable)._6_OnTrigger.methodPtr;
    (*vtable_dispatch)
              (__this,other,(__this->klass->vtable)._6_OnTrigger.method,vtable_dispatch);
    return;
  }
  return;
}


// Characters.BaseHitbox$$OnTrigger
// il2cpp: void Characters_BaseHitbox__OnTrigger (Characters_BaseHitbox_o* __this, UnityEngine_Collider_o* other, const MethodInfo* method);
// 0x3f9ad80

void Characters_BaseHitbox__OnTrigger
               (Characters_BaseHitbox_o *__this,UnityEngine_Collider_o *other,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *pSVar1;
  Characters_BaseCharacter_o *a;
  bool_conflict bVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_GameObject_o *pUVar4;
  Characters_BaseCharacter_o *b;
  Characters_BaseCharacter_o *x;
  MethodInfo *pMVar5;
  Il2CppMethodPointer vtable_dispatch;
  
  if (DAT_05704007 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicCollisionHandler_GetComponent_CustomL);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_TeamInfo);
    DAT_05704007 = '\x01';
  }
  if ((char)(__this->fields).TwoFixedUpdates != '\0') {
    pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._firstFrameColliders;
    if (pSVar1 == (System_Collections_Generic_HashSet_object__o *)0x0) goto LAB_03f9b062;
    bVar2 = System_Collections_Generic_HashSet<object>__Contains
                      (pSVar1,(Il2CppObject *)other,MethodInfo_Boolean_Contains);
    if ((char)bVar2 == '\0') {
      pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._firstFrameColliders
      ;
      if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        System_Collections_Generic_HashSet<object>__Add(pSVar1,(Il2CppObject *)other,MethodInfo_Boolean_Add);
        return;
      }
      goto LAB_03f9b062;
    }
  }
  if ((((other != (UnityEngine_Collider_o *)0x0) &&
       (pUVar3 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)other,(MethodInfo *)0x0),
       pUVar3 != (UnityEngine_Transform_o *)0x0)) &&
      (pUVar3 = UnityEngine_Transform__get_root(pUVar3,(MethodInfo *)0x0),
      pUVar3 != (UnityEngine_Transform_o *)0x0)) &&
     (pUVar4 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0),
     pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
    b = (Characters_BaseCharacter_o *)
        UnityEngine_GameObject__GetComponent<object>(pUVar4,MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
    pUVar4 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)other,(MethodInfo *)0x0);
    if (pUVar4 == (UnityEngine_GameObject_o *)0x0) goto LAB_03f9b062;
    x = (Characters_BaseCharacter_o *)
        UnityEngine_GameObject__GetComponent<object>(pUVar4,MethodInfo_CustomLogicCollisionHandler_GetComponent_CustomL);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)b,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      a = (__this->fields).Owner;
      if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar2 = GameManagers_TeamInfo__SameTeam(a,b,(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._hitGameObjects;
        pUVar4 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)other,(MethodInfo *)0x0);
        if (pSVar1 == (System_Collections_Generic_HashSet_object__o *)0x0) goto LAB_03f9b062;
        bVar2 = System_Collections_Generic_HashSet<object>__Contains
                          (pSVar1,(Il2CppObject *)pUVar4,MethodInfo_Boolean_Contains);
        if ((char)bVar2 == '\0') {
          pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._hitGameObjects;
          pUVar4 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)other,(MethodInfo *)0x0);
          if (pSVar1 == (System_Collections_Generic_HashSet_object__o *)0x0) goto LAB_03f9b062;
          System_Collections_Generic_HashSet<object>__Add
                    (pSVar1,(Il2CppObject *)pUVar4,MethodInfo_Boolean_Add);
          vtable_dispatch = (__this->klass->vtable)._7_OnHit.methodPtr;
          pMVar5 = (__this->klass->vtable)._7_OnHit.method;
          goto LAB_03f9b04e;
        }
      }
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      return;
    }
    pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._hitGameObjects;
    pUVar4 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)other,(MethodInfo *)0x0);
    if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      bVar2 = System_Collections_Generic_HashSet<object>__Contains
                        (pSVar1,(Il2CppObject *)pUVar4,MethodInfo_Boolean_Contains);
      if ((char)bVar2 != '\0') {
        return;
      }
      pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._hitGameObjects;
      pUVar4 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)other,(MethodInfo *)0x0);
      if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        System_Collections_Generic_HashSet<object>__Add(pSVar1,(Il2CppObject *)pUVar4,MethodInfo_Boolean_Add);
        vtable_dispatch = (__this->klass->vtable)._8_OnHit.methodPtr;
        pMVar5 = (__this->klass->vtable)._8_OnHit.method;
        b = x;
LAB_03f9b04e:
        (*vtable_dispatch)(__this,b,other,pMVar5,vtable_dispatch);
        return;
      }
    }
  }
LAB_03f9b062:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseHitbox$$OnHit
// il2cpp: void Characters_BaseHitbox__OnHit (Characters_BaseHitbox_o* __this, Characters_BaseCharacter_o* victim, UnityEngine_Collider_o* collider, const MethodInfo* method);
// 0x3f9b070

void Characters_BaseHitbox__OnHit
               (Characters_BaseHitbox_o *__this,Characters_BaseCharacter_o *victim,
               UnityEngine_Collider_o *collider,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *pSVar1;
  Characters_BaseCharacter_o *pCVar2;
  bool_conflict bVar3;
  
  if (DAT_05704008 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    il2cpp_init_method_metadata(&"");
    DAT_05704008 = '\x01';
  }
  pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._firstHitCharacters;
  if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    pCVar2 = (__this->fields).Owner;
    bVar3 = System_Collections_Generic_HashSet<object>__Contains
                      (pSVar1,(Il2CppObject *)victim,MethodInfo_Boolean_Contains);
    if (pCVar2 != (Characters_BaseCharacter_o *)0x0) {
      (*(pCVar2->klass->vtable)._79_OnHit.methodPtr)
                (pCVar2,__this,victim,collider,"",(ulong)(byte)((byte)bVar3 ^ 1),
                 (pCVar2->klass->vtable)._79_OnHit.method);
      pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._firstHitCharacters;
      if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        System_Collections_Generic_HashSet<object>__Add(pSVar1,(Il2CppObject *)victim,MethodInfo_Boolean_Add);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseHitbox$$OnHit
// il2cpp: void Characters_BaseHitbox__OnHit (Characters_BaseHitbox_o* __this, CustomLogic_CustomLogicCollisionHandler_o* handler, UnityEngine_Collider_o* collider, const MethodInfo* method);
// 0x3f9b140

void Characters_BaseHitbox__OnHit
               (Characters_BaseHitbox_o *__this,CustomLogic_CustomLogicCollisionHandler_o *handler,
               UnityEngine_Collider_o *collider,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *pSVar1;
  Characters_BaseCharacter_o *pCVar2;
  uint uVar3;
  
  if (DAT_05704009 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    il2cpp_init_method_metadata(&"");
    DAT_05704009 = '\x01';
  }
  pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._firstHitHandlers;
  if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    pCVar2 = (__this->fields).Owner;
    uVar3 = System_Collections_Generic_HashSet<object>__Contains
                      (pSVar1,(Il2CppObject *)handler,MethodInfo_Boolean_Contains);
    if (pCVar2 != (Characters_BaseCharacter_o *)0x0) {
      (*(pCVar2->klass->vtable)._79_OnHit.methodPtr)
                (pCVar2,__this,handler,collider,"",(ulong)(uVar3 & 0xff),
                 (pCVar2->klass->vtable)._79_OnHit.method);
      pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._firstHitHandlers;
      if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        System_Collections_Generic_HashSet<object>__Add(pSVar1,(Il2CppObject *)handler,MethodInfo_Boolean_Add)
        ;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseHitbox$$ToggleDebug
// il2cpp: void Characters_BaseHitbox__ToggleDebug (Characters_BaseHitbox_o* __this, bool toggle, const MethodInfo* method);
// 0x3f9ab80

void Characters_BaseHitbox__ToggleDebug
               (Characters_BaseHitbox_o *__this,bool_conflict toggle,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this_00;
  bool_conflict bVar1;
  
  if (DAT_0570400a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_0570400a = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields)._debugObject;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    __this_00 = (__this->fields)._debugObject;
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(__this_00,toggle & 0xff,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return;
}


// Characters.BaseHitbox$$.ctor
// il2cpp: void Characters_BaseHitbox___ctor (Characters_BaseHitbox_o* __this, const MethodInfo* method);
// 0x3f9b210

void Characters_BaseHitbox___ctor(Characters_BaseHitbox_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *pSVar1;
  
  if (DAT_0570400b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_CustomLogic_CustomLogicCollisionHandle);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_UnityEngine_GameObject);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_Characters_BaseCharacter);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_UnityEngine_Collider);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_Collider);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_CustomLogicCollisionHandler);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_BaseCharacter);
    DAT_0570400b = '\x01';
  }
  pSVar1 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_GameObject);
  System_Collections_Generic_HashSet<object>___ctor(pSVar1,MethodInfo_HashSet_1_UnityEngine_GameObject);
  (__this->fields)._hitGameObjects = (System_Collections_Generic_HashSet_GameObject__o *)pSVar1;
  il2cpp_runtime_glue(&(__this->fields)._hitGameObjects,pSVar1);
  pSVar1 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_Collider);
  System_Collections_Generic_HashSet<object>___ctor(pSVar1,MethodInfo_HashSet_1_UnityEngine_Collider);
  (__this->fields)._firstFrameColliders = (System_Collections_Generic_HashSet_Collider__o *)pSVar1;
  il2cpp_runtime_glue(&(__this->fields)._firstFrameColliders,pSVar1);
  pSVar1 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_BaseCharacter);
  System_Collections_Generic_HashSet<object>___ctor(pSVar1,MethodInfo_HashSet_1_Characters_BaseCharacter);
  (__this->fields)._firstHitCharacters =
       (System_Collections_Generic_HashSet_BaseCharacter__o *)pSVar1;
  il2cpp_runtime_glue(&(__this->fields)._firstHitCharacters,pSVar1);
  pSVar1 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_CustomLogicCollisionHandler);
  System_Collections_Generic_HashSet<object>___ctor(pSVar1,MethodInfo_HashSet_1_CustomLogic_CustomLogicCollisionHandle);
  (__this->fields)._firstHitHandlers =
       (System_Collections_Generic_HashSet_CustomLogicCollisionHandler__o *)pSVar1;
  il2cpp_runtime_glue(&(__this->fields)._firstHitHandlers);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


