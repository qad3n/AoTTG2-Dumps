// Type: Gisketch.Aottg2UI.Actions.GisketchFocusRing
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/GisketchFocusRing.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Actions.GisketchFocusRing$$Setup
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchFocusRing__Setup (Gisketch_Aottg2UI_Actions_GisketchFocusRing_o* __this, UnityEngine_Color_o color, float thickness, float gap, float cornerLength, bool visible, const MethodInfo* method);
// 0x1819003f0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1819009be: mov r14, qword ptr [rsp + 0xd0]
// asm:   0x1819009c6: mov rsi, qword ptr [rsp + 0xc8]
// asm:   0x1819009ce: mov rbx, qword ptr [rsp + 0xc0]

void Gisketch_Aottg2UI_Actions_GisketchFocusRing__Setup
               (Gisketch_Aottg2UI_Actions_GisketchFocusRing_o *__this,UnityEngine_Color_o *color,
               float thickness,float gap,float cornerLength,bool visible,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_Object_o *x;
  UnityEngine_Vector2_o value;
  Il2CppType *handle;
  bool bVar2;
  System_Type_array *components;
  System_Type_o *obj;
  Il2CppObject *pIVar3;
  UnityEngine_GameObject_o *pUVar4;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Transform_o *parent;
  UnityEngine_RectTransform_o *__this_01;
  System_Action_o *__this_02;
  System_Delegate_o *pSVar5;
  System_Action_o *pSVar6;
  System_Delegate_o *pSVar7;
  System_Action_o *a;
  UnityEngine_Color_Fields local_78 [7];
  
  if (Il2CppMethodInitialized_184342235 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Actions_GisketchFocusRing_Refresh);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Focus Ring");
    il2cpp_codegen_initialize_runtime_metadata(&"Top Left");
    il2cpp_codegen_initialize_runtime_metadata(&"Bottom Left");
    il2cpp_codegen_initialize_runtime_metadata(&"Top Right");
    il2cpp_codegen_initialize_runtime_metadata(&"Bottom Right");
    Il2CppMethodInitialized_184342235 = '\x01';
  }
  if (visible) {
    x = (UnityEngine_Object_o *)(__this->fields)._ring;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
      handle = TypeRef_UnityEngine_RectTransform;
      if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(g_data_184354ea0);
      }
      obj = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
      if (components != (System_Type_array *)0x0) {
        if ((obj != (System_Type_o *)0x0) &&
           (pIVar3 = il2cpp_vm_Object_IsInst
                               ((Il2CppObject *)obj,(((components->obj).klass)->_1).element_class),
           pIVar3 == (Il2CppObject *)0x0)) {
          pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
        }
        if ((int)components->max_length == 0) {
          ThrowIndexOutOfRangeException();
        }
        components->m_Items[0] = obj;
        Il2CppCodeGenWriteBarrier(components->m_Items,obj);
        pUVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
        UnityEngine_GameObject___ctor_2f1abe0(pUVar4,"AoTTG Focus Ring",components,(MethodInfo *)0x0);
        (__this->fields)._ring = pUVar4;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._ring,pUVar4);
        pUVar4 = (__this->fields)._ring;
        if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
          __this_00 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
          parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if (__this_00 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__SetParent_2f5a7e0(__this_00,parent,false,(MethodInfo *)0x0);
            pUVar4 = (__this->fields)._ring;
            if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
              __this_01 = UnityEngine_GameObject__GetComponent_object_
                                    (pUVar4,(MethodInfo_6F5650 *)
                                            MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
              if (Il2CppMethodInitialized_18433e3c9 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
                Il2CppMethodInitialized_18433e3c9 = '\x01';
              }
              if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
                UnityEngine_RectTransform__set_anchorMin
                          (__this_01,
                           (UnityEngine_Vector2_o)
                           (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,(MethodInfo *)0x0)
                ;
                if (Il2CppMethodInitialized_184341f36 == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
                  Il2CppMethodInitialized_184341f36 = '\x01';
                }
                UnityEngine_RectTransform__set_anchorMax
                          (__this_01,
                           (UnityEngine_Vector2_o)
                           (TypeInfo_UnityEngine_Vector2->static_fields->oneVector).fields,(MethodInfo *)0x0);
                UnityEngine_RectTransform__set_offsetMin
                          (__this_01,(UnityEngine_Vector2_o)(CONCAT44(gap,gap) ^ 0x8000000080000000),
                           (MethodInfo *)0x0);
                value.fields.y = gap;
                value.fields.x = gap;
                UnityEngine_RectTransform__set_offsetMax(__this_01,value,(MethodInfo *)0x0);
                local_78[0].r = (color->fields).r;
                local_78[0].g = (color->fields).g;
                local_78[0].b = (color->fields).b;
                local_78[0].a = (color->fields).a;
                Gisketch_Aottg2UI_Actions_GisketchFocusRing__Corner
                          (__this,"Top Left",(UnityEngine_Color_o *)local_78,
                           (UnityEngine_Vector2_o)0x3f80000000000000,(UnityEngine_Vector2_o)0x3f80000000000000
                           ,thickness,cornerLength,(MethodInfo *)0x0);
                if (Il2CppMethodInitialized_184341f36 == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
                  Il2CppMethodInitialized_184341f36 = '\x01';
                }
                UVar1 = (TypeInfo_UnityEngine_Vector2->static_fields->oneVector).fields;
                if (Il2CppMethodInitialized_184341f36 == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
                  Il2CppMethodInitialized_184341f36 = '\x01';
                }
                local_78[0].r = (color->fields).r;
                local_78[0].g = (color->fields).g;
                local_78[0].b = (color->fields).b;
                local_78[0].a = (color->fields).a;
                Gisketch_Aottg2UI_Actions_GisketchFocusRing__Corner
                          (__this,"Top Right",(UnityEngine_Color_o *)local_78,
                           (UnityEngine_Vector2_o)UVar1,
                           (UnityEngine_Vector2_o)
                           (TypeInfo_UnityEngine_Vector2->static_fields->oneVector).fields,thickness,
                           cornerLength,(MethodInfo *)0x0);
                if (Il2CppMethodInitialized_18433e3c9 == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
                  Il2CppMethodInitialized_18433e3c9 = '\x01';
                }
                UVar1 = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields;
                if (Il2CppMethodInitialized_18433e3c9 == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
                  Il2CppMethodInitialized_18433e3c9 = '\x01';
                }
                local_78[0].r = (color->fields).r;
                local_78[0].g = (color->fields).g;
                local_78[0].b = (color->fields).b;
                local_78[0].a = (color->fields).a;
                Gisketch_Aottg2UI_Actions_GisketchFocusRing__Corner
                          (__this,"Bottom Left",(UnityEngine_Color_o *)local_78,
                           (UnityEngine_Vector2_o)UVar1,
                           (UnityEngine_Vector2_o)
                           (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,thickness,
                           cornerLength,(MethodInfo *)0x0);
                local_78[0].r = (color->fields).r;
                local_78[0].g = (color->fields).g;
                local_78[0].b = (color->fields).b;
                local_78[0].a = (color->fields).a;
                Gisketch_Aottg2UI_Actions_GisketchFocusRing__Corner
                          (__this,"Bottom Right",(UnityEngine_Color_o *)local_78,
                           (UnityEngine_Vector2_o)0x3f800000,(UnityEngine_Vector2_o)0x3f800000,thickness,
                           cornerLength,(MethodInfo *)0x0);
                pUVar4 = (__this->fields)._ring;
                if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
                  UnityEngine_GameObject__SetActive(pUVar4,false,(MethodInfo *)0x0);
                  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
                  System_Action___ctor
                            ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_02,(Il2CppObject *)__this
                             ,(intptr_t)MethodInfo_Gisketch_Aottg2UI_Actions_GisketchFocusRing_Refresh,
                             (MethodInfo *)0x0);
                  if (Il2CppMethodInitialized_184342229 == '\0') {
                    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
                    il2cpp_codegen_initialize_runtime_metadata
                              (&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode);
                    Il2CppMethodInitialized_184342229 = '\x01';
                  }
                  a = TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode->static_fields->Changed;
                  do {
                    pSVar5 = System_Delegate__Combine
                                       ((System_Delegate_o *)a,(System_Delegate_o *)__this_02,
                                        (MethodInfo *)0x0);
                    if (pSVar5 != (System_Delegate_o *)0x0) {
                      pSVar7 = (System_Delegate_o *)0x0;
                      if ((System_Action_c *)pSVar5->klass == TypeInfo_System_Action) {
                        pSVar7 = pSVar5;
                      }
                      if (pSVar7 == (System_Delegate_o *)0x0) {
                        il2cpp_codegen_raise_invalid_cast_exception(pSVar5,TypeInfo_System_Action);
                      }
                    }
                    pSVar6 = (System_Action_o *)
                             il2cpp_runtime_helper_1804174a0(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode->
                                            static_fields->Changed);
                    bVar2 = pSVar6 == a;
                    a = pSVar6;
                    if (bVar2) {
                      return;
                    }
                  } while( true );
                }
              }
            }
          }
        }
      }
      ThrowNullReferenceException();
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchFocusRing$$OnSelect
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchFocusRing__OnSelect (Gisketch_Aottg2UI_Actions_GisketchFocusRing_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x1818ffd90

void Gisketch_Aottg2UI_Actions_GisketchFocusRing__OnSelect
               (Gisketch_Aottg2UI_Actions_GisketchFocusRing_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  (__this->fields)._selected = true;
  Gisketch_Aottg2UI_Actions_GisketchFocusRing__Refresh(__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchFocusRing$$OnDeselect
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchFocusRing__OnDeselect (Gisketch_Aottg2UI_Actions_GisketchFocusRing_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x1818ffc60

void
Gisketch_Aottg2UI_Actions_GisketchFocusRing__OnDeselect(Gisketch_Aottg2UI_Actions_GisketchFocusRing_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, MethodInfo* method)

{
  (__this->fields)._selected = false;
  Gisketch_Aottg2UI_Actions_GisketchFocusRing__Refresh(__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchFocusRing$$OnPointerDown
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchFocusRing__OnPointerDown (Gisketch_Aottg2UI_Actions_GisketchFocusRing_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x1818ff010

void Gisketch_Aottg2UI_Actions_GisketchFocusRing__OnPointerDown
               (Gisketch_Aottg2UI_Actions_GisketchFocusRing_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__SetMode(0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchFocusRing$$Pulse
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchFocusRing__Pulse (Gisketch_Aottg2UI_Actions_GisketchFocusRing_o* __this, const MethodInfo* method);
// 0x1818ffda0

void Gisketch_Aottg2UI_Actions_GisketchFocusRing__Pulse
               (Gisketch_Aottg2UI_Actions_GisketchFocusRing_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *pUVar1;
  UnityEngine_Vector3_StaticFields *pUVar2;
  bool bVar3;
  UnityEngine_Transform_o *pUVar4;
  DG_Tweening_Sequence_o *pDVar5;
  DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o *pDVar6;
  DG_Tweening_Tween_o *pDVar7;
  DG_Tweening_TweenCallback_o *action;
  UnityEngine_Vector3_Fields local_18;
  
  if (Il2CppMethodInitialized_184342236 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_DG_Tweening_DOTween);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Actions_GisketchFocusRing_Refresh);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_DG_Tweening_TweenCallback);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_DG_Tweening_TweenSettingsExtensions_OnComplete_Sequence);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_TweenerCore_Vector3_Vector3_VectorOptions
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Sequence);
    Il2CppMethodInitialized_184342236 = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields)._ring;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    return;
  }
  pDVar7 = (__this->fields)._pulse;
  if (pDVar7 != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill(pDVar7,false,(MethodInfo *)0x0);
  }
  pUVar1 = (__this->fields)._ring;
  if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(pUVar1,true,(MethodInfo *)0x0);
    pUVar1 = (__this->fields)._ring;
    if ((pUVar1 != (UnityEngine_GameObject_o *)0x0) &&
       (pUVar4 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0),
       pUVar4 != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__SetAsLastSibling(pUVar4,(MethodInfo *)0x0);
      pUVar1 = (__this->fields)._ring;
      if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
        pUVar4 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0);
        if (Il2CppMethodInitialized_18433dbeb == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_18433dbeb = '\x01';
        }
        if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
          pUVar2 = TypeInfo_UnityEngine_Vector3->static_fields;
          local_18.x = (pUVar2->oneVector).fields.x;
          local_18.y = (pUVar2->oneVector).fields.y;
          local_18.z = (pUVar2->oneVector).fields.z;
          UnityEngine_Transform__set_localScale(pUVar4,(UnityEngine_Vector3_o *)&local_18,(MethodInfo *)0x0);
          if ((TypeInfo_DG_Tweening_DOTween->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_DG_Tweening_DOTween);
          }
          pDVar5 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
          pUVar1 = (__this->fields)._ring;
          if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
            pUVar4 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0);
            pDVar6 = DG_Tweening_ShortcutExtensions__DOScale_5588b0(pUVar4,1.16,0.12,(MethodInfo *)0x0);
            pDVar7 = (DG_Tweening_Tween_o *)
                     DG_Tweening_TweenSettingsExtensions__SetEase_object_
                               ((Il2CppObject *)pDVar6,9,
                                (MethodInfo_7C9BC0 *)
                                MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_TweenerCore_Vector3_Vector3_VectorOptions
                               );
            pDVar5 = DG_Tweening_TweenSettingsExtensions__Append(pDVar5,pDVar7,(MethodInfo *)0x0);
            pUVar1 = (__this->fields)._ring;
            if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
              pUVar4 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0);
              pDVar6 = DG_Tweening_ShortcutExtensions__DOScale_5588b0(pUVar4,1.0,0.16,(MethodInfo *)0x0);
              pDVar7 = (DG_Tweening_Tween_o *)
                       DG_Tweening_TweenSettingsExtensions__SetEase_object_
                                 ((Il2CppObject *)pDVar6,9,
                                  (MethodInfo_7C9BC0 *)
                                  MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_TweenerCore_Vector3_Vector3_VectorOptions
                                 );
              pDVar5 = DG_Tweening_TweenSettingsExtensions__Append(pDVar5,pDVar7,(MethodInfo *)0x0);
              pDVar5 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                                 ((Il2CppObject *)pDVar5,true,
                                  (MethodInfo_7CA3D0 *)
                                  MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Sequence);
              action = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_TweenCallback);
              DG_Tweening_TweenCallback___ctor
                        ((UnityEngine_Font_FontTextureRebuildCallback_o *)action,(Il2CppObject *)__this,
                         (intptr_t)MethodInfo_Gisketch_Aottg2UI_Actions_GisketchFocusRing_Refresh,
                         (MethodInfo *)0x0);
              pDVar5 = DG_Tweening_TweenSettingsExtensions__OnComplete_object_
                                 ((Il2CppObject *)pDVar5,action,
                                  (MethodInfo_7C92E0 *)
                                  MethodInfo_DG_Tweening_TweenSettingsExtensions_OnComplete_Sequence);
              (__this->fields)._pulse = (DG_Tweening_Tween_o *)pDVar5;
              Il2CppCodeGenWriteBarrier(&(__this->fields)._pulse,pDVar5);
              pDVar7 = (__this->fields)._pulse;
              if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver->_2).cctor_finished_or_no_cctor ==
                  0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver);
              }
              Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__Track(pDVar7,false,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.GisketchFocusRing$$OnDisable
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchFocusRing__OnDisable (Gisketch_Aottg2UI_Actions_GisketchFocusRing_o* __this, const MethodInfo* method);
// 0x1818ffc60

void Gisketch_Aottg2UI_Actions_GisketchFocusRing__OnDisable
               (Gisketch_Aottg2UI_Actions_GisketchFocusRing_o *__this,MethodInfo *method)

{
  (__this->fields)._selected = false;
  Gisketch_Aottg2UI_Actions_GisketchFocusRing__Refresh(__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchFocusRing$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchFocusRing__OnDestroy (Gisketch_Aottg2UI_Actions_GisketchFocusRing_o* __this, const MethodInfo* method);
// 0x1818ffc70

void Gisketch_Aottg2UI_Actions_GisketchFocusRing__OnDestroy
               (Gisketch_Aottg2UI_Actions_GisketchFocusRing_o *__this,MethodInfo *method)

{
  DG_Tweening_Tween_o *t;
  System_Action_o *__this_00;
  System_Delegate_o *pSVar1;
  System_Action_o *pSVar2;
  System_Delegate_o *pSVar3;
  System_Action_o *source;
  bool bVar4;
  
  if (Il2CppMethodInitialized_184342237 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Actions_GisketchFocusRing_Refresh);
    Il2CppMethodInitialized_184342237 = '\x01';
  }
  t = (__this->fields)._pulse;
  if (t != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill(t,false,(MethodInfo *)0x0);
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
  System_Action___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_00,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Actions_GisketchFocusRing_Refresh,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_18434222a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode);
    Il2CppMethodInitialized_18434222a = '\x01';
  }
  source = TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode->static_fields->Changed;
  do {
    pSVar1 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)__this_00,(MethodInfo *)0x0);
    if (pSVar1 != (System_Delegate_o *)0x0) {
      pSVar3 = (System_Delegate_o *)0x0;
      if ((System_Action_c *)pSVar1->klass == TypeInfo_System_Action) {
        pSVar3 = pSVar1;
      }
      if (pSVar3 == (System_Delegate_o *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(pSVar1,TypeInfo_System_Action);
      }
    }
    pSVar2 = (System_Action_o *)
             il2cpp_runtime_helper_1804174a0(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode->static_fields->Changed)
    ;
    bVar4 = pSVar2 == source;
    source = pSVar2;
    if (bVar4) {
      return;
    }
  } while( true );
}


// Gisketch.Aottg2UI.Actions.GisketchFocusRing$$Refresh
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchFocusRing__Refresh (Gisketch_Aottg2UI_Actions_GisketchFocusRing_o* __this, const MethodInfo* method);
// 0x181900070

void Gisketch_Aottg2UI_Actions_GisketchFocusRing__Refresh
               (Gisketch_Aottg2UI_Actions_GisketchFocusRing_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *pUVar1;
  bool bVar2;
  UnityEngine_Transform_o *__this_00;
  
  if (Il2CppMethodInitialized_184342238 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184342238 = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields)._ring;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if ((__this->fields)._selected == false) {
      bVar2 = false;
    }
    else {
      if (Il2CppMethodInitialized_184341f35 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode)
        ;
        Il2CppMethodInitialized_184341f35 = '\x01';
      }
      bVar2 = TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode->static_fields->_Mode_k__BackingField
              == 1;
    }
    if (bVar2 != false) {
      pUVar1 = (__this->fields)._ring;
      if (pUVar1 == (UnityEngine_GameObject_o *)0x0) goto label_181900140;
      __this_00 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0);
      if (__this_00 == (UnityEngine_Transform_o *)0x0) goto label_181900140;
      UnityEngine_Transform__SetAsLastSibling(__this_00,(MethodInfo *)0x0);
    }
    pUVar1 = (__this->fields)._ring;
    if (pUVar1 == (UnityEngine_GameObject_o *)0x0) {
label_181900140:
      ThrowNullReferenceException();
    }
    UnityEngine_GameObject__SetActive(pUVar1,bVar2,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchFocusRing$$Corner
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchFocusRing__Corner (Gisketch_Aottg2UI_Actions_GisketchFocusRing_o* __this, System_String_o* name, UnityEngine_Color_o color, UnityEngine_Vector2_o anchor, UnityEngine_Vector2_o pivot, float thickness, float length, const MethodInfo* method);
// 0x1818ffb20

void Gisketch_Aottg2UI_Actions_GisketchFocusRing__Corner
               (Gisketch_Aottg2UI_Actions_GisketchFocusRing_o *__this,System_String_o *name,
               UnityEngine_Color_o *color,UnityEngine_Vector2_o anchor,UnityEngine_Vector2_o pivot,
               float thickness,float length,MethodInfo *method)

{
  UnityEngine_Vector2_o size;
  UnityEngine_Vector2_o size_00;
  System_String_o *pSVar1;
  UnityEngine_Color_Fields local_58 [5];
  
  if (Il2CppMethodInitialized_184342239 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&" Horizontal");
    il2cpp_codegen_initialize_runtime_metadata(&" Vertical");
    Il2CppMethodInitialized_184342239 = '\x01';
  }
  local_58[0].r = (color->fields).r;
  local_58[0].g = (color->fields).g;
  local_58[0].b = (color->fields).b;
  local_58[0].a = (color->fields).a;
  pSVar1 = System_String__Concat_1969e50(name," Horizontal",(MethodInfo *)0x0);
  size.fields.y = thickness;
  size.fields.x = length;
  Gisketch_Aottg2UI_Actions_GisketchFocusRing__Segment
            (__this,pSVar1,(UnityEngine_Color_o *)local_58,anchor,pivot,size,(MethodInfo *)0x0);
  local_58[0].r = (color->fields).r;
  local_58[0].g = (color->fields).g;
  local_58[0].b = (color->fields).b;
  local_58[0].a = (color->fields).a;
  pSVar1 = System_String__Concat_1969e50(name," Vertical",(MethodInfo *)0x0);
  size_00.fields.y = length;
  size_00.fields.x = thickness;
  Gisketch_Aottg2UI_Actions_GisketchFocusRing__Segment
            (__this,pSVar1,(UnityEngine_Color_o *)local_58,anchor,pivot,size_00,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchFocusRing$$Segment
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchFocusRing__Segment (Gisketch_Aottg2UI_Actions_GisketchFocusRing_o* __this, System_String_o* name, UnityEngine_Color_o color, UnityEngine_Vector2_o anchor, UnityEngine_Vector2_o pivot, UnityEngine_Vector2_o size, const MethodInfo* method);
// 0x181900150

void Gisketch_Aottg2UI_Actions_GisketchFocusRing__Segment
               (Gisketch_Aottg2UI_Actions_GisketchFocusRing_o *__this,System_String_o *name,
               UnityEngine_Color_o *color,UnityEngine_Vector2_o anchor,UnityEngine_Vector2_o pivot,
               UnityEngine_Vector2_o size,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  Il2CppType *handle;
  System_Type_array *components;
  System_Type_o *obj;
  Il2CppObject *pIVar1;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_Transform_o *__this_02;
  UnityEngine_Transform_o *parent;
  UnityEngine_RectTransform_o *__this_03;
  UnityEngine_UI_Image_o *__this_04;
  UnityEngine_Color_Fields local_38 [2];
  
  if (Il2CppMethodInitialized_18434223a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    Il2CppMethodInitialized_18434223a = '\x01';
  }
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  obj = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (components != (System_Type_array *)0x0) {
    if (obj != (System_Type_o *)0x0) {
      pIVar1 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(((components->obj).klass)->_1).element_class);
      if (pIVar1 == (Il2CppObject *)0x0) {
        pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
      }
    }
    if ((int)components->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    components->m_Items[0] = obj;
    Il2CppCodeGenWriteBarrier(components->m_Items,obj);
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
    UnityEngine_GameObject___ctor_2f1abe0(__this_01,name,components,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
      __this_02 = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
      __this_00 = (__this->fields)._ring;
      if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
        parent = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
        if (__this_02 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__SetParent_2f5a7e0(__this_02,parent,false,(MethodInfo *)0x0);
          __this_03 = UnityEngine_GameObject__GetComponent_object_
                                (__this_01,
                                 (MethodInfo_6F5650 *)
                                 MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
          if (__this_03 != (UnityEngine_RectTransform_o *)0x0) {
            UnityEngine_RectTransform__set_anchorMin(__this_03,anchor,(MethodInfo *)0x0);
            UnityEngine_RectTransform__set_anchorMax(__this_03,anchor,(MethodInfo *)0x0);
            UnityEngine_RectTransform__set_pivot(__this_03,pivot,(MethodInfo *)0x0);
            if (Il2CppMethodInitialized_18433e3c9 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
              Il2CppMethodInitialized_18433e3c9 = '\x01';
            }
            UnityEngine_RectTransform__set_anchoredPosition
                      (__this_03,
                       (UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields
                       ,(MethodInfo *)0x0);
            UnityEngine_RectTransform__set_sizeDelta(__this_03,size,(MethodInfo *)0x0);
            __this_04 = UnityEngine_GameObject__AddComponent_object_
                                  (__this_01,
                                   (MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_Image);
            if (__this_04 != (UnityEngine_UI_Image_o *)0x0) {
              local_38[0].r = (color->fields).r;
              local_38[0].g = (color->fields).g;
              local_38[0].b = (color->fields).b;
              local_38[0].a = (color->fields).a;
              (*(__this_04->klass->vtable)._23_set_color.methodPtr)
                        (__this_04,(UnityEngine_Color_o *)local_38,
                         (__this_04->klass->vtable)._23_set_color.method);
              (*(__this_04->klass->vtable)._25_set_raycastTarget.methodPtr)
                        (__this_04,false,(__this_04->klass->vtable)._25_set_raycastTarget.method);
              UnityEngine_UI_MaskableGraphic__set_maskable
                        ((UnityEngine_UI_MaskableGraphic_o *)__this_04,false,(MethodInfo *)0x0);
              (*(__this_04->klass->vtable)._63_RecalculateClipping.methodPtr)
                        (__this_04,(__this_04->klass->vtable)._63_RecalculateClipping.method);
              return;
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.GisketchFocusRing$$Stretch
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchFocusRing__Stretch (UnityEngine_RectTransform_o* rect, float gap, const MethodInfo* method);
// 0x181900a20

void Gisketch_Aottg2UI_Actions_GisketchFocusRing__Stretch
               (UnityEngine_RectTransform_o *rect,float gap,MethodInfo *method)

{
  UnityEngine_Vector2_o value;
  
  if (Il2CppMethodInitialized_18433e3c9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_18433e3c9 = '\x01';
  }
  if (rect != (UnityEngine_RectTransform_o *)0x0) {
    UnityEngine_RectTransform__set_anchorMin
              (rect,(UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
               (MethodInfo *)0x0);
    if (Il2CppMethodInitialized_184341f36 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
      Il2CppMethodInitialized_184341f36 = '\x01';
    }
    UnityEngine_RectTransform__set_anchorMax
              (rect,(UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->oneVector).fields,
               (MethodInfo *)0x0);
    UnityEngine_RectTransform__set_offsetMin
              (rect,(UnityEngine_Vector2_o)(CONCAT44(gap,gap) ^ 0x8000000080000000),(MethodInfo *)0x0);
    value.fields.y = gap;
    value.fields.x = gap;
    UnityEngine_RectTransform__set_offsetMax(rect,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.GisketchFocusRing$$MarkPreview
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchFocusRing__MarkPreview (UnityEngine_GameObject_o* go, const MethodInfo* method);
// 0x180547020

void
Gisketch_Aottg2UI_Actions_GisketchFocusRing__MarkPreview(UnityEngine_GameObject_o* go, MethodInfo* method)

{
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchFocusRing$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchFocusRing___ctor (Gisketch_Aottg2UI_Actions_GisketchFocusRing_o* __this, const MethodInfo* method);
// 0x180528540

void
Gisketch_Aottg2UI_Actions_GisketchFocusRing___ctor(Gisketch_Aottg2UI_Actions_GisketchFocusRing_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


