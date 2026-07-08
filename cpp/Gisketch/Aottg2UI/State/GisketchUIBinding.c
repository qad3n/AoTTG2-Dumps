// Type: Gisketch.Aottg2UI.State.GisketchUIBinding
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.State/GisketchUIBinding.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.State.GisketchUIBinding$$Setup
// il2cpp: void Gisketch_Aottg2UI_State_GisketchUIBinding__Setup (Gisketch_Aottg2UI_State_GisketchUIBinding_o* __this, Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o* definition, Gisketch_Aottg2UI_State_GisketchUIState_o* state, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* exit, const MethodInfo* method);
// 0x3ada490

void Gisketch_Aottg2UI_State_GisketchUIBinding__Setup
               (Gisketch_Aottg2UI_State_GisketchUIBinding_o *__this,
               Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *definition,
               Gisketch_Aottg2UI_State_GisketchUIState_o *state,
               Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,
               Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *exit,MethodInfo *method)

{
  Gisketch_Aottg2UI_State_GisketchUIState_o *pGVar1;
  undefined8 uVar2;
  System_Delegate_o *b;
  System_Action_string__o *pSVar3;
  System_Delegate_o *pSVar4;
  System_Action_string__o *a;
  bool bVar5;
  
  if (DAT_0570137c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_string);
    il2cpp_init_method_metadata(&MethodInfo_Void_OnStateChanged);
    DAT_0570137c = '\x01';
  }
  (__this->fields)._definition = definition;
  il2cpp_runtime_glue(&(__this->fields)._definition,definition);
  (__this->fields)._enter = enter;
  il2cpp_runtime_glue(&(__this->fields)._enter,enter);
  (__this->fields)._exit = exit;
  il2cpp_runtime_glue(&(__this->fields)._exit,exit);
  (__this->fields)._state = state;
  il2cpp_runtime_glue(&(__this->fields)._state);
  pGVar1 = (__this->fields)._state;
  if (pGVar1 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
    b = (System_Delegate_o *)il2cpp_runtime_glue(TypeInfo_Action_string);
    System_Action<object>___ctor();
    if (DAT_05701388 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Action_string);
      DAT_05701388 = '\x01';
    }
    a = (pGVar1->fields).Changed;
    do {
      pSVar4 = System_Delegate__Combine((System_Delegate_o *)a,b,(MethodInfo *)0x0);
      uVar2 = TypeInfo_Action_string;
      state = (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0;
      if (pSVar4 != (System_Delegate_o *)0x0) {
        state = (Gisketch_Aottg2UI_State_GisketchUIState_o *)il2cpp_runtime_glue(pSVar4,TypeInfo_Action_string)
        ;
        if ((MethodInfo *)state == (MethodInfo *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume(pSVar4,uVar2);
        }
      }
      pSVar3 = (System_Action_string__o *)il2cpp_glue_022c2530(&(pGVar1->fields).Changed,state,a);
      bVar5 = a != pSVar3;
      a = pSVar3;
    } while (bVar5);
  }
  Gisketch_Aottg2UI_State_GisketchUIBinding__Refresh(__this,(MethodInfo *)state);
  return;
}


// Gisketch.Aottg2UI.State.GisketchUIBinding$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_State_GisketchUIBinding__OnDestroy (Gisketch_Aottg2UI_State_GisketchUIBinding_o* __this, const MethodInfo* method);
// 0x3adaae0

void Gisketch_Aottg2UI_State_GisketchUIBinding__OnDestroy
               (Gisketch_Aottg2UI_State_GisketchUIBinding_o *__this,MethodInfo *method)

{
  DG_Tweening_Tween_o *t;
  Gisketch_Aottg2UI_State_GisketchUIState_o *pGVar1;
  undefined8 uVar2;
  System_Delegate_o *value;
  System_Action_string__o *pSVar3;
  System_Delegate_o *pSVar4;
  long lVar5;
  System_Action_string__o *source;
  bool bVar6;
  
  if (DAT_0570137d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_string);
    il2cpp_init_method_metadata(&MethodInfo_Void_OnStateChanged);
    DAT_0570137d = '\x01';
  }
  t = (__this->fields)._visibilityTween;
  if (t != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill(t,0,(MethodInfo *)0x0);
  }
  pGVar1 = (__this->fields)._state;
  if (pGVar1 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
    value = (System_Delegate_o *)il2cpp_runtime_glue(TypeInfo_Action_string);
    System_Action<object>___ctor();
    if (DAT_05701389 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Action_string);
      DAT_05701389 = '\x01';
    }
    source = (pGVar1->fields).Changed;
    do {
      pSVar4 = System_Delegate__Remove((System_Delegate_o *)source,value,(MethodInfo *)0x0);
      uVar2 = TypeInfo_Action_string;
      lVar5 = 0;
      if (pSVar4 != (System_Delegate_o *)0x0) {
        lVar5 = il2cpp_runtime_glue(pSVar4,TypeInfo_Action_string);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume(pSVar4,uVar2);
        }
      }
      pSVar3 = (System_Action_string__o *)il2cpp_glue_022c2530(&(pGVar1->fields).Changed,lVar5,source);
      bVar6 = source != pSVar3;
      source = pSVar3;
    } while (bVar6);
  }
  return;
}


// Gisketch.Aottg2UI.State.GisketchUIBinding$$OnStateChanged
// il2cpp: void Gisketch_Aottg2UI_State_GisketchUIBinding__OnStateChanged (Gisketch_Aottg2UI_State_GisketchUIBinding_o* __this, System_String_o* key, const MethodInfo* method);
// 0x3adacb0

void Gisketch_Aottg2UI_State_GisketchUIBinding__OnStateChanged
               (Gisketch_Aottg2UI_State_GisketchUIBinding_o *__this,System_String_o *key,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_State_GisketchUIState_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *pGVar2;
  undefined8 uVar3;
  bool_conflict bVar4;
  System_Delegate_o *value;
  System_Action_string__o *pSVar5;
  System_Delegate_o *pSVar6;
  long lVar7;
  MethodInfo *method_00;
  System_Action_string__o *source;
  bool bVar8;
  
  if (DAT_0570137e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_string);
    il2cpp_init_method_metadata(&MethodInfo_Void_OnStateChanged);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_0570137e = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    pGVar2 = (__this->fields)._definition;
    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
      method_00 = (MethodInfo *)(pGVar2->fields).text;
      bVar4 = System_String__op_Equality(key,(System_String_o *)method_00,(MethodInfo *)0x0);
      if ((char)bVar4 == '\0') {
        pGVar2 = (__this->fields)._definition;
        if (pGVar2 == (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
LAB_03adae7d:
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        method_00 = (MethodInfo *)(pGVar2->fields).sprite;
        bVar4 = System_String__op_Equality(key,(System_String_o *)method_00,(MethodInfo *)0x0);
        if ((char)bVar4 == '\0') {
          pGVar2 = (__this->fields)._definition;
          if (pGVar2 == (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0)
          goto LAB_03adae7d;
          method_00 = (MethodInfo *)(pGVar2->fields).visible;
          bVar4 = System_String__op_Equality(key,(System_String_o *)method_00,(MethodInfo *)0x0);
          if ((char)bVar4 == '\0') {
            pGVar2 = (__this->fields)._definition;
            if (pGVar2 == (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0)
            goto LAB_03adae7d;
            method_00 = (MethodInfo *)(pGVar2->fields).enabled;
            bVar4 = System_String__op_Equality(key,(System_String_o *)method_00,(MethodInfo *)0x0);
            if ((char)bVar4 == '\0') {
              return;
            }
          }
        }
      }
      Gisketch_Aottg2UI_State_GisketchUIBinding__Refresh(__this,method_00);
      return;
    }
  }
  else {
    pGVar1 = (__this->fields)._state;
    if (pGVar1 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
      value = (System_Delegate_o *)il2cpp_runtime_glue(TypeInfo_Action_string);
      System_Action<object>___ctor();
      if (DAT_05701389 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Action_string);
        DAT_05701389 = '\x01';
      }
      source = (pGVar1->fields).Changed;
      do {
        pSVar6 = System_Delegate__Remove((System_Delegate_o *)source,value,(MethodInfo *)0x0);
        uVar3 = TypeInfo_Action_string;
        lVar7 = 0;
        if ((pSVar6 != (System_Delegate_o *)0x0) &&
           (lVar7 = il2cpp_runtime_glue(pSVar6,TypeInfo_Action_string), lVar7 == 0)) {
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume(pSVar6,uVar3);
        }
        pSVar5 = (System_Action_string__o *)il2cpp_glue_022c2530(&(pGVar1->fields).Changed,lVar7,source);
        bVar8 = source != pSVar5;
        source = pSVar5;
      } while (bVar8);
    }
  }
  return;
}


// Gisketch.Aottg2UI.State.GisketchUIBinding$$Refresh
// il2cpp: void Gisketch_Aottg2UI_State_GisketchUIBinding__Refresh (Gisketch_Aottg2UI_State_GisketchUIBinding_o* __this, const MethodInfo* method);
// 0x3ada6a0

void Gisketch_Aottg2UI_State_GisketchUIBinding__Refresh
               (Gisketch_Aottg2UI_State_GisketchUIBinding_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *pGVar1;
  Gisketch_Aottg2UI_State_GisketchUIState_o *pGVar2;
  System_String_o *pSVar3;
  System_Collections_Generic_Dictionary_object__object__o *pSVar4;
  bool_conflict bVar5;
  uint uVar6;
  System_String_o *in_RAX;
  TMPro_TextMeshProUGUI_o *text;
  System_String_o *pSVar7;
  UnityEngine_GameObject_o *root;
  UnityEngine_UI_Image_o *__this_00;
  UnityEngine_Sprite_o *value;
  System_Object_array *pSVar8;
  uint uVar9;
  MethodInfo *method_00;
  long lVar10;
  MethodInfo *pMVar11;
  bool bVar12;
  System_String_o *local_38;
  
  local_38 = in_RAX;
  if (DAT_0570137f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Image_GetComponentInChildren_Image);
    il2cpp_init_method_metadata(&MethodInfo_TextMeshProUGUI_GetComponentInChildren_TextMeshP);
    il2cpp_init_method_metadata(&MethodInfo_Image_GetComponent_Image);
    il2cpp_init_method_metadata(&MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
    il2cpp_init_method_metadata(&MethodInfo_Selectable___GetComponentsInChildren_Selectable);
    il2cpp_init_method_metadata(&TypeInfo_GisketchSpriteLoader);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_0570137f = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((((char)bVar5 != '\0') ||
      (pGVar1 = (__this->fields)._definition,
      pGVar1 == (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0)) ||
     ((__this->fields)._state == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0)) {
    return;
  }
  bVar5 = System_String__IsNullOrEmpty((pGVar1->fields).text,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    text = (TMPro_TextMeshProUGUI_o *)
           UnityEngine_Component__GetComponent<object>
                     ((UnityEngine_Component_o *)__this,MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
    if (text == (TMPro_TextMeshProUGUI_o *)0x0) {
      text = (TMPro_TextMeshProUGUI_o *)
             UnityEngine_Component__GetComponentInChildren<object>
                       ((UnityEngine_Component_o *)__this,MethodInfo_TextMeshProUGUI_GetComponentInChildren_TextMeshP);
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar5 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)text,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      pGVar1 = (__this->fields)._definition;
      if ((pGVar1 == (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) ||
         (text == (TMPro_TextMeshProUGUI_o *)0x0)) goto LAB_03adaacd;
      pGVar2 = (__this->fields)._state;
      pSVar3 = (pGVar1->fields).text;
      pSVar7 = (System_String_o *)(*(text->klass->vtable)._65_get_text.methodPtr)(text);
      if (pGVar2 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) goto LAB_03adaacd;
      if (DAT_0570138c == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
        DAT_0570138c = '\x01';
      }
      local_38 = (System_String_o *)0x0;
      bVar5 = System_String__IsNullOrEmpty(pSVar3,(MethodInfo *)0x0);
      if ((char)bVar5 == '\0') {
        pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)(pGVar2->fields)._values
        ;
        if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
        goto LAB_03adaacd;
        bVar5 = System_Collections_Generic_Dictionary<object__object>__TryGetValue
                          (pSVar4,(Il2CppObject *)pSVar3,(Il2CppObject **)&local_38,MethodInfo_Boolean_TryGetValue);
        if ((char)bVar5 != '\0') {
          pSVar7 = local_38;
        }
      }
      (*(text->klass->vtable)._66_set_text.methodPtr)
                (text,pSVar7,(text->klass->vtable)._66_set_text.method);
      pMVar11 = (MethodInfo *)0x0;
      root = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshButtonWidth(root,pMVar11);
      Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshProfileHoverBioHeight(__this,text,method_00)
      ;
    }
  }
  pGVar1 = (__this->fields)._definition;
  if (pGVar1 == (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) goto LAB_03adaacd;
  bVar5 = System_String__IsNullOrEmpty((pGVar1->fields).sprite,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    __this_00 = (UnityEngine_UI_Image_o *)
                UnityEngine_Component__GetComponent<object>
                          ((UnityEngine_Component_o *)__this,MethodInfo_Image_GetComponent_Image);
    if (__this_00 == (UnityEngine_UI_Image_o *)0x0) {
      __this_00 = (UnityEngine_UI_Image_o *)
                  UnityEngine_Component__GetComponentInChildren<object>
                            ((UnityEngine_Component_o *)__this,1,MethodInfo_Image_GetComponentInChildren_Image);
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar5 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      pGVar1 = (__this->fields)._definition;
      if ((pGVar1 == (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) ||
         (pGVar2 = (__this->fields)._state,
         pGVar2 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0)) goto LAB_03adaacd;
      pSVar3 = (pGVar1->fields).sprite;
      pSVar7 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
      if (DAT_0570138c == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
        DAT_0570138c = '\x01';
      }
      local_38 = (System_String_o *)0x0;
      bVar5 = System_String__IsNullOrEmpty(pSVar3,(MethodInfo *)0x0);
      if ((char)bVar5 == '\0') {
        pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)(pGVar2->fields)._values
        ;
        if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
        goto LAB_03adaacd;
        bVar5 = System_Collections_Generic_Dictionary<object__object>__TryGetValue
                          (pSVar4,(Il2CppObject *)pSVar3,(Il2CppObject **)&local_38,MethodInfo_Boolean_TryGetValue);
        if ((char)bVar5 != '\0') {
          pSVar7 = local_38;
        }
      }
      if (*(int *)(TypeInfo_GisketchSpriteLoader + 0xe4) == 0) {
        il2cpp_init_class();
      }
      value = Gisketch_Aottg2UI_Styling_GisketchSpriteLoader__Load(pSVar7,(MethodInfo *)0x0);
      if (__this_00 == (UnityEngine_UI_Image_o *)0x0) goto LAB_03adaacd;
      UnityEngine_UI_Image__set_sprite(__this_00,value,(MethodInfo *)0x0);
    }
  }
  pGVar1 = (__this->fields)._definition;
  if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
    pMVar11 = (MethodInfo *)0x0;
    bVar5 = System_String__IsNullOrEmpty((pGVar1->fields).visible,(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') {
      Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshVisibility(__this,pMVar11);
    }
    pGVar1 = (__this->fields)._definition;
    if (pGVar1 == (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) goto LAB_03adaacd;
    bVar5 = System_String__IsNullOrEmpty((pGVar1->fields).enabled,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      return;
    }
    pSVar8 = UnityEngine_Component__GetComponentsInChildren<object>
                       ((UnityEngine_Component_o *)__this,1,MethodInfo_Selectable___GetComponentsInChildren_Selectable);
    if (pSVar8 == (System_Object_array *)0x0) goto LAB_03adaacd;
    if (pSVar8->max_length == 0) {
      bVar12 = true;
      pMVar11 = (MethodInfo *)(__this->fields)._definition;
    }
    else {
      if ((int)pSVar8->max_length == 0) goto LAB_03adaad2;
      if (pSVar8->m_Items[0] == (Il2CppObject *)0x0) goto LAB_03adaacd;
      bVar12 = *(char *)&pSVar8->m_Items[0][0xd].monitor != '\0';
      pMVar11 = (MethodInfo *)(__this->fields)._definition;
    }
    if ((pMVar11 != (MethodInfo *)0x0) &&
       (pGVar2 = (__this->fields)._state, pGVar2 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0
       )) {
      uVar6 = Gisketch_Aottg2UI_State_GisketchUIState__GetBool
                        (pGVar2,(System_String_o *)pMVar11->return_type,(uint)bVar12,pMVar11);
      uVar9 = (uint)pSVar8->max_length;
      if ((int)uVar9 < 1) {
        return;
      }
      lVar10 = 0;
      while ((uint)lVar10 < uVar9) {
        if ((UnityEngine_UI_Selectable_o *)pSVar8->m_Items[lVar10] ==
            (UnityEngine_UI_Selectable_o *)0x0) goto LAB_03adaacd;
        UnityEngine_UI_Selectable__set_interactable
                  ((UnityEngine_UI_Selectable_o *)pSVar8->m_Items[lVar10],uVar6 & 0xff,
                   (MethodInfo *)0x0);
        uVar9 = (uint)pSVar8->max_length;
        lVar10 = lVar10 + 1;
        if ((int)uVar9 <= (int)lVar10) {
          return;
        }
      }
LAB_03adaad2:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
LAB_03adaacd:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.State.GisketchUIBinding$$RefreshVisibility
// il2cpp: void Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshVisibility (Gisketch_Aottg2UI_State_GisketchUIBinding_o* __this, const MethodInfo* method);
// 0x3adb6e0

void Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshVisibility
               (Gisketch_Aottg2UI_State_GisketchUIBinding_o *__this,MethodInfo *method)

{
  DG_Tweening_Tween_o **ppDVar1;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *pGVar2;
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_00;
  System_String_o *key;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar3;
  char cVar4;
  uint uVar5;
  bool_conflict bVar6;
  bool_conflict bVar7;
  UnityEngine_GameObject_o *pUVar8;
  DG_Tweening_Tween_o *pDVar9;
  DG_Tweening_TweenCallback_o *action;
  MethodInfo *in_RCX;
  byte bVar10;
  MethodInfo *pMVar11;
  
  if (DAT_05701380 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Application);
    il2cpp_init_method_metadata(&TypeInfo_GisketchMotion);
    il2cpp_init_method_metadata(&MethodInfo_Void__RefreshVisibility_b__14_0);
    il2cpp_init_method_metadata(&TypeInfo_TweenCallback);
    il2cpp_init_method_metadata(&MethodInfo_Tween_OnComplete_Tween);
    DAT_05701380 = '\x01';
  }
  pGVar2 = (__this->fields)._definition;
  if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
    __this_00 = (__this->fields)._state;
    key = (pGVar2->fields).visible;
    pUVar8 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if ((pUVar8 != (UnityEngine_GameObject_o *)0x0) &&
       (uVar5 = UnityEngine_GameObject__get_activeSelf(pUVar8,(MethodInfo *)0x0),
       __this_00 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0)) {
      uVar5 = Gisketch_Aottg2UI_State_GisketchUIState__GetBool(__this_00,key,uVar5 & 0xff,in_RCX);
      bVar10 = (byte)uVar5;
      if ((char)(__this->fields)._visibilityInitialized == '\0') {
        pUVar8 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
          bVar6 = UnityEngine_GameObject__get_activeSelf(pUVar8,(MethodInfo *)0x0);
          *(undefined1 *)&(__this->fields)._visibilityInitialized = 1;
          *(byte *)((long)&(__this->fields)._visibilityInitialized + 1) = bVar10;
          pUVar8 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
            UnityEngine_GameObject__SetActive(pUVar8,uVar5 & 0xff,(MethodInfo *)0x0);
            if (bVar10 == 0) {
              return;
            }
            pMVar11 = (MethodInfo *)0x0;
            pUVar8 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
            Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshDescendantButtonWidths(pUVar8,pMVar11)
            ;
            Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshVisibilityLayout(__this,pMVar11);
            if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
              il2cpp_init_class();
            }
            bVar7 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
            if ((char)bVar7 == '\0') {
              return;
            }
            if ((char)bVar6 == '\x01') {
              return;
            }
            pGVar3 = (__this->fields)._enter;
            if (pGVar3 == (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0) {
              return;
            }
            bVar6 = System_String__IsNullOrEmpty((pGVar3->fields).preset,(MethodInfo *)0x0);
            if ((char)bVar6 != '\0') {
              return;
            }
            pUVar8 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
            pGVar3 = (__this->fields)._enter;
            if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pDVar9 = Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayNode
                               (pUVar8,pGVar3,1,0,(MethodInfo *)0x0);
            (__this->fields)._visibilityTween = pDVar9;
            goto LAB_03adb9c1;
          }
        }
      }
      else {
        if ((uint)*(byte *)((long)&(__this->fields)._visibilityInitialized + 1) == (uVar5 & 0xff)) {
          pUVar8 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if (pUVar8 == (UnityEngine_GameObject_o *)0x0) goto LAB_03adbb12;
          bVar6 = UnityEngine_GameObject__get_activeSelf(pUVar8,(MethodInfo *)0x0);
          if ((byte)((byte)bVar6 ^ bVar10) != 1) {
            return;
          }
        }
        *(byte *)((long)&(__this->fields)._visibilityInitialized + 1) = bVar10;
        ppDVar1 = &(__this->fields)._visibilityTween;
        pDVar9 = (__this->fields)._visibilityTween;
        if (pDVar9 != (DG_Tweening_Tween_o *)0x0) {
          DG_Tweening_TweenExtensions__Kill(pDVar9,0,(MethodInfo *)0x0);
        }
        *ppDVar1 = (DG_Tweening_Tween_o *)0x0;
        il2cpp_runtime_glue(ppDVar1);
        if (bVar10 == 0) {
          if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
            il2cpp_init_class();
            bVar6 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
            cVar4 = (char)bVar6;
          }
          else {
            bVar6 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
            cVar4 = (char)bVar6;
          }
          if (((cVar4 != '\0') &&
              (pGVar3 = (__this->fields)._exit,
              pGVar3 != (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0)) &&
             (bVar6 = System_String__IsNullOrEmpty((pGVar3->fields).preset,(MethodInfo *)0x0),
             (char)bVar6 == '\0')) {
            pUVar8 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
            pGVar3 = (__this->fields)._exit;
            if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pDVar9 = Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayNode
                               (pUVar8,pGVar3,0,0,(MethodInfo *)0x0);
            *ppDVar1 = pDVar9;
            il2cpp_runtime_glue(ppDVar1);
            pDVar9 = *ppDVar1;
            if (pDVar9 != (DG_Tweening_Tween_o *)0x0) {
              action = (DG_Tweening_TweenCallback_o *)il2cpp_runtime_glue(TypeInfo_TweenCallback);
              DG_Tweening_TweenCallback___ctor();
              DG_Tweening_TweenSettingsExtensions__OnComplete<object>
                        ((Il2CppObject *)pDVar9,action,MethodInfo_Tween_OnComplete_Tween);
              return;
            }
          }
          pUVar8 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
            pMVar11 = (MethodInfo *)0x0;
            UnityEngine_GameObject__SetActive(pUVar8,0,(MethodInfo *)0x0);
            Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshVisibilityLayout(__this,pMVar11);
            return;
          }
        }
        else {
          pUVar8 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
            UnityEngine_GameObject__SetActive(pUVar8,1,(MethodInfo *)0x0);
            pMVar11 = (MethodInfo *)0x0;
            pUVar8 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
            Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshDescendantButtonWidths(pUVar8,pMVar11)
            ;
            Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshVisibilityLayout(__this,pMVar11);
            if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
              il2cpp_init_class();
              bVar6 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
              cVar4 = (char)bVar6;
            }
            else {
              bVar6 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
              cVar4 = (char)bVar6;
            }
            if (((cVar4 == '\0') ||
                (pGVar3 = (__this->fields)._enter,
                pGVar3 == (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0)) ||
               (bVar6 = System_String__IsNullOrEmpty((pGVar3->fields).preset,(MethodInfo *)0x0),
               (char)bVar6 != '\0')) {
              return;
            }
            pUVar8 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
            pGVar3 = (__this->fields)._enter;
            if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pDVar9 = Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayNode
                               (pUVar8,pGVar3,1,0,(MethodInfo *)0x0);
            *ppDVar1 = pDVar9;
LAB_03adb9c1:
            il2cpp_runtime_glue(&(__this->fields)._visibilityTween,pDVar9);
            return;
          }
        }
      }
    }
  }
LAB_03adbb12:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.State.GisketchUIBinding$$HasMotion
// il2cpp: bool Gisketch_Aottg2UI_State_GisketchUIBinding__HasMotion (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* motion, const MethodInfo* method);
// 0x3adbe70

bool_conflict
Gisketch_Aottg2UI_State_GisketchUIBinding__HasMotion
          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *motion,MethodInfo *method)

{
  uint uVar1;
  
  if (motion != (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0) {
    uVar1 = System_String__IsNullOrEmpty((motion->fields).preset,(MethodInfo *)0x0);
    return uVar1 ^ 1;
  }
  return 0;
}


// Gisketch.Aottg2UI.State.GisketchUIBinding$$RefreshVisibilityLayout
// il2cpp: void Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshVisibilityLayout (Gisketch_Aottg2UI_State_GisketchUIBinding_o* __this, const MethodInfo* method);
// 0x3adbcd0

void Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshVisibilityLayout
               (Gisketch_Aottg2UI_State_GisketchUIBinding_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  UnityEngine_RectTransform_o *pUVar2;
  UnityEngine_RectTransform_o *pUVar3;
  Gilzoide_FlexUi_FlexLayout_o *__this_00;
  UnityEngine_RectTransform_o *rect;
  
  if (DAT_05701381 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_FlexLayout_GetComponentInParent_FlexLayout);
    il2cpp_init_method_metadata(&TypeInfo_LayoutRebuilder);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_RectTransform);
    DAT_05701381 = '\x01';
  }
  pUVar2 = (UnityEngine_RectTransform_o *)
           UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  rect = (UnityEngine_RectTransform_o *)0x0;
  if ((pUVar2 != (UnityEngine_RectTransform_o *)0x0) &&
     (rect = (UnityEngine_RectTransform_o *)0x0, pUVar2->klass == TypeInfo_RectTransform)) {
    rect = pUVar2;
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)rect,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return;
  }
  if (rect != (UnityEngine_RectTransform_o *)0x0) {
    pUVar3 = (UnityEngine_RectTransform_o *)
             UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)rect,(MethodInfo *)0x0);
    pUVar2 = (UnityEngine_RectTransform_o *)0x0;
    if ((pUVar3 != (UnityEngine_RectTransform_o *)0x0) &&
       (pUVar2 = (UnityEngine_RectTransform_o *)0x0, pUVar3->klass == TypeInfo_RectTransform)) {
      pUVar2 = pUVar3;
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (*(int *)(TypeInfo_LayoutRebuilder + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if ((char)bVar1 != '\0') {
      UnityEngine_UI_LayoutRebuilder__MarkLayoutForRebuild(rect,(MethodInfo *)0x0);
      return;
    }
    UnityEngine_UI_LayoutRebuilder__MarkLayoutForRebuild(pUVar2,(MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
      __this_00 = (Gilzoide_FlexUi_FlexLayout_o *)
                  UnityEngine_Component__GetComponentInParent<object>
                            ((UnityEngine_Component_o *)pUVar2,MethodInfo_FlexLayout_GetComponentInParent_FlexLayout);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if ((char)bVar1 != '\0') {
        if (__this_00 == (Gilzoide_FlexUi_FlexLayout_o *)0x0) goto LAB_03adbe6b;
        Gilzoide_FlexUi_FlexLayout__RefreshRootLayoutImmediate(__this_00,(MethodInfo *)0x0);
      }
      if (*(int *)(TypeInfo_LayoutRebuilder + 0xe4) == 0) {
        il2cpp_init_class();
      }
      UnityEngine_UI_LayoutRebuilder__ForceRebuildLayoutImmediate(pUVar2,(MethodInfo *)0x0);
      return;
    }
  }
LAB_03adbe6b:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.State.GisketchUIBinding$$RefreshDescendantButtonWidths
// il2cpp: void Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshDescendantButtonWidths (UnityEngine_GameObject_o* root, const MethodInfo* method);
// 0x3adbc40

void Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshDescendantButtonWidths
               (UnityEngine_GameObject_o *root,MethodInfo *method)

{
  uint uVar1;
  System_Object_array *pSVar2;
  UnityEngine_GameObject_o *root_00;
  uint uVar3;
  MethodInfo *method_00;
  
  if (DAT_05701382 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Button___GetComponentsInChildren_Button);
    DAT_05701382 = '\x01';
  }
  if (root != (UnityEngine_GameObject_o *)0x0) {
    pSVar2 = UnityEngine_GameObject__GetComponentsInChildren<object>(root,1,MethodInfo_Button___GetComponentsInChildren_Button);
    if (pSVar2 != (System_Object_array *)0x0) {
      uVar1 = (uint)pSVar2->max_length;
      if (0 < (int)uVar1) {
        uVar3 = 0;
        do {
          if (uVar1 <= uVar3) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          if ((UnityEngine_Component_o *)pSVar2->m_Items[(int)uVar3] ==
              (UnityEngine_Component_o *)0x0) goto LAB_03adbcc8;
          method_00 = (MethodInfo *)0x0;
          root_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pSVar2->m_Items[(int)uVar3],
                               (MethodInfo *)0x0);
          Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshButtonWidth(root_00,method_00);
          uVar3 = uVar3 + 1;
          uVar1 = (uint)pSVar2->max_length;
        } while ((int)uVar3 < (int)uVar1);
      }
      return;
    }
  }
LAB_03adbcc8:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.State.GisketchUIBinding$$RefreshButtonWidth
// il2cpp: void Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshButtonWidth (UnityEngine_GameObject_o* root, const MethodInfo* method);
// 0x3adaf10

void Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshButtonWidth
               (UnityEngine_GameObject_o *root,MethodInfo *method)

{
  Gilzoide_FlexUi_Yoga_YGValue_Fields GVar1;
  bool_conflict bVar2;
  int32_t iVar3;
  UnityEngine_Object_o *x;
  UnityEngine_Object_o *x_00;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_RectTransform_o *pUVar5;
  UnityEngine_GameObject_o *__this;
  TMPro_TMP_Text_o *__this_00;
  System_String_o *text;
  Gilzoide_FlexUi_FlexLayout_o *__this_01;
  Gilzoide_FlexUi_Yoga_YGValue_o GVar6;
  int index;
  UnityEngine_RectTransform_o *rect;
  int iVar7;
  float fVar8;
  UnityEngine_Vector2_o UVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float local_3c;
  undefined8 extraout_XMM0_Qb;
  
  if (DAT_05701383 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
    il2cpp_init_method_metadata(&MethodInfo_HorizontalLayoutGroup_GetComponentInChildren_Hor);
    il2cpp_init_method_metadata(&MethodInfo_FlexLayout_GetComponent_FlexLayout);
    il2cpp_init_method_metadata(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_init_method_metadata(&TypeInfo_LayoutRebuilder);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_YGValue);
    DAT_05701383 = '\x01';
  }
  if (root == (UnityEngine_GameObject_o *)0x0) goto LAB_03adb387;
  x = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent<object>(root,MethodInfo_LayoutElement_GetComponent_LayoutElement);
  x_00 = (UnityEngine_Object_o *)
         UnityEngine_GameObject__GetComponentInChildren<object>(root,1,MethodInfo_HorizontalLayoutGroup_GetComponentInChildren_Hor);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = UnityEngine_Object__op_Equality(x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      if ((x_00 != (UnityEngine_Object_o *)0x0) &&
         (x_00[1].monitor != (UnityEngine_RectOffset_o *)0x0)) {
        iVar7 = 0;
        iVar3 = UnityEngine_RectOffset__get_horizontal(x_00[1].monitor,(MethodInfo *)0x0);
        pUVar4 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)x_00,(MethodInfo *)0x0);
        if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
          local_3c = (float)iVar3;
          index = 0;
          while (iVar3 = UnityEngine_Transform__get_childCount(pUVar4,(MethodInfo *)0x0),
                index < iVar3) {
            pUVar4 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)x_00,(MethodInfo *)0x0);
            if (((pUVar4 == (UnityEngine_Transform_o *)0x0) ||
                (pUVar4 = UnityEngine_Transform__GetChild(pUVar4,index,(MethodInfo *)0x0),
                pUVar4 == (UnityEngine_Transform_o *)0x0)) ||
               (__this = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0),
               __this == (UnityEngine_GameObject_o *)0x0)) goto LAB_03adb387;
            bVar2 = UnityEngine_GameObject__get_activeInHierarchy(__this,(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              __this_00 = (TMPro_TMP_Text_o *)
                          UnityEngine_Component__GetComponent<object>
                                    ((UnityEngine_Component_o *)pUVar4,MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                il2cpp_init_class();
              }
              iVar7 = iVar7 + 1;
              bVar2 = UnityEngine_Object__op_Inequality
                                ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,
                                 (MethodInfo *)0x0);
              if ((char)bVar2 == '\0') {
                pUVar5 = (UnityEngine_RectTransform_o *)
                         UnityEngine_Component__GetComponent<object>
                                   ((UnityEngine_Component_o *)pUVar4,MethodInfo_RectTransform_GetComponent_RectTransform);
                fVar8 = UnityEngine_UI_LayoutUtility__GetPreferredWidth(pUVar5,(MethodInfo *)0x0);
              }
              else {
                if (__this_00 == (TMPro_TMP_Text_o *)0x0) goto LAB_03adb387;
                (*(__this_00->klass->vtable)._106_ForceMeshUpdate.methodPtr)
                          (__this_00,0,0,(__this_00->klass->vtable)._106_ForceMeshUpdate.method);
                text = (System_String_o *)
                       (*(__this_00->klass->vtable)._65_get_text.methodPtr)
                                 (__this_00,(__this_00->klass->vtable)._65_get_text.method);
                UVar9 = TMPro_TMP_Text__GetPreferredValues(__this_00,text,(MethodInfo *)0x0);
                fVar8 = UVar9.fields.x;
              }
              local_3c = local_3c + fVar8;
            }
            index = index + 1;
            pUVar4 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)x_00,(MethodInfo *)0x0);
            if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto LAB_03adb387;
          }
          if (1 < iVar7) {
            local_3c = local_3c + (float)(iVar7 + -1) * *(float *)&x_00[4].klass;
          }
          if (x != (UnityEngine_Object_o *)0x0) {
            (*x->klass[2]._1.events)(x,x->klass[2]._1.properties);
            auVar10._0_8_ =
                 (**(code **)&x->klass[2]._1.this_arg.bits)(x,x->klass[2]._1.element_class);
            auVar10._8_8_ = extraout_XMM0_Qb;
            if ((float)auVar10._0_8_ <= local_3c) {
              auVar11._4_12_ = auVar10._4_12_;
              auVar11._0_4_ = local_3c;
              auVar10._0_8_ = auVar11._0_8_;
            }
            (*(code *)x->klass[2]._1.castClass)(auVar10._0_8_,x,x->klass[2]._1.declaringType);
            __this_01 = (Gilzoide_FlexUi_FlexLayout_o *)
                        UnityEngine_GameObject__GetComponent<object>(root,MethodInfo_FlexLayout_GetComponent_FlexLayout);
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_init_class();
            }
            bVar2 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,
                               (MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              if (__this_01 == (Gilzoide_FlexUi_FlexLayout_o *)0x0) goto LAB_03adb387;
              if ((__this_01->fields)._width.fields.Unit != 2) {
                if (*(int *)(TypeInfo_YGValue + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                GVar6 = Gilzoide_FlexUi_Yoga_YGValue__op_Implicit(local_3c,(MethodInfo *)0x0);
                Gilzoide_FlexUi_FlexLayout__set_Width(__this_01,GVar6,(MethodInfo *)0x0);
              }
            }
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_init_class();
            }
            bVar2 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,
                               (MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              if (__this_01 == (Gilzoide_FlexUi_FlexLayout_o *)0x0) goto LAB_03adb387;
              GVar1 = (__this_01->fields)._minWidth.fields;
              if (((ulong)GVar1 >> 0x20 != 1) || (GVar1.Value < local_3c)) {
                if (*(int *)(TypeInfo_YGValue + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                GVar6 = Gilzoide_FlexUi_Yoga_YGValue__op_Implicit(local_3c,(MethodInfo *)0x0);
                Gilzoide_FlexUi_FlexLayout__set_MinWidth(__this_01,GVar6,(MethodInfo *)0x0);
              }
            }
            pUVar5 = (UnityEngine_RectTransform_o *)
                     UnityEngine_GameObject__get_transform(root,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_LayoutRebuilder + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (pUVar5 == (UnityEngine_RectTransform_o *)0x0) {
              rect = (UnityEngine_RectTransform_o *)0x0;
            }
            else {
              rect = (UnityEngine_RectTransform_o *)0x0;
              if (pUVar5->klass == TypeInfo_RectTransform) {
                rect = pUVar5;
              }
            }
            UnityEngine_UI_LayoutRebuilder__MarkLayoutForRebuild(rect,(MethodInfo *)0x0);
            return;
          }
        }
      }
LAB_03adb387:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  return;
}


// Gisketch.Aottg2UI.State.GisketchUIBinding$$RefreshProfileHoverBioHeight
// il2cpp: void Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshProfileHoverBioHeight (Gisketch_Aottg2UI_State_GisketchUIBinding_o* __this, TMPro_TextMeshProUGUI_o* text, const MethodInfo* method);
// 0x3adb390

void Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshProfileHoverBioHeight
               (Gisketch_Aottg2UI_State_GisketchUIBinding_o *__this,TMPro_TextMeshProUGUI_o *text,
               MethodInfo *method)

{
  bool_conflict bVar1;
  float fVar2;
  UnityEngine_Object_o *__this_00;
  System_String_o *pSVar3;
  UnityEngine_RectTransform_o *pUVar4;
  Gilzoide_FlexUi_FlexLayout_o *__this_01;
  Gilzoide_FlexUi_Yoga_YGValue_Fields GVar5;
  uint uVar6;
  UnityEngine_Vector2_o UVar7;
  float fVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  UnityEngine_Rect_o UVar13;
  
  if (DAT_05701384 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_FlexLayout_GetComponent_FlexLayout);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_YGValue);
    il2cpp_init_method_metadata(&"public-profile-hover-bio");
    DAT_05701384 = '\x01';
  }
  __this_00 = (UnityEngine_Object_o *)
              UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 == (UnityEngine_Object_o *)0x0) goto LAB_03adb6d5;
  pSVar3 = UnityEngine_Object__get_name(__this_00,(MethodInfo *)0x0);
  bVar1 = System_String__op_Inequality(pSVar3,"public-profile-hover-bio",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return;
  }
  if (text == (TMPro_TextMeshProUGUI_o *)0x0) goto LAB_03adb6d5;
  TMPro_TMP_Text__set_maxVisibleLines((TMPro_TMP_Text_o *)text,5,(MethodInfo *)0x0);
  TMPro_TMP_Text__set_overflowMode((TMPro_TMP_Text_o *)text,1,(MethodInfo *)0x0);
  pUVar4 = TMPro_TMP_Text__get_rectTransform((TMPro_TMP_Text_o *)text,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  fVar8 = 0.0;
  if ((char)bVar1 == '\0') {
LAB_03adb4a6:
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar1 != '\0') {
      if (pUVar4 == (UnityEngine_RectTransform_o *)0x0) goto LAB_03adb6d5;
      pUVar4 = (UnityEngine_RectTransform_o *)
               UnityEngine_Transform__get_parent
                         ((UnityEngine_Transform_o *)pUVar4,(MethodInfo *)0x0);
      if ((pUVar4 != (UnityEngine_RectTransform_o *)0x0) && (pUVar4->klass == TypeInfo_RectTransform)) {
        UVar13 = UnityEngine_RectTransform__get_rect(pUVar4,(MethodInfo *)0x0);
        fVar8 = UVar13.fields.m_Width;
      }
    }
  }
  else {
    if (pUVar4 == (UnityEngine_RectTransform_o *)0x0) goto LAB_03adb6d5;
    UVar13 = UnityEngine_RectTransform__get_rect(pUVar4,(MethodInfo *)0x0);
    fVar8 = UVar13.fields.m_Width;
    if (fVar8 <= 1.0) goto LAB_03adb4a6;
  }
  fVar2 = 24.0;
  if (1.0 < fVar8) {
    pSVar3 = (System_String_o *)
             (*(text->klass->vtable)._65_get_text.methodPtr)
                       (text,(text->klass->vtable)._65_get_text.method);
    UVar7 = TMPro_TMP_Text__GetPreferredValues
                      ((TMPro_TMP_Text_o *)text,pSVar3,fVar8,0.0,(MethodInfo *)0x0);
    fVar2 = UVar7.fields.y;
  }
  fVar8 = ceilf(fVar2);
  __this_01 = (Gilzoide_FlexUi_FlexLayout_o *)
              UnityEngine_Component__GetComponent<object>
                        ((UnityEngine_Component_o *)__this,MethodInfo_FlexLayout_GetComponent_FlexLayout);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                    );
  if ((char)bVar1 != '\0') {
    return;
  }
  if (__this_01 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
    fVar2 = 120.0;
    if (fVar8 <= 120.0) {
      fVar2 = fVar8;
    }
    uVar9 = (uint)fVar2 & -(uint)(24.0 <= fVar8);
    uVar6 = ~-(uint)(24.0 <= fVar8) & 0x41c00000;
    fVar8 = (float)(uVar6 | uVar9);
    GVar5 = (__this_01->fields)._height.fields;
    if ((ulong)GVar5 >> 0x20 == 1) {
      fVar2 = GVar5.Value;
      if (DAT_056fdea3 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Mathf);
        DAT_056fdea3 = '\x01';
      }
      fVar12 = ABS(fVar2);
      fVar10 = (float)(uVar6 | uVar9 & 0x7fffffff);
      if (fVar12 <= fVar10) {
        fVar12 = fVar10;
      }
      fVar11 = **(float **)(TypeInfo_Mathf + 0xb8) * 8.0;
      fVar10 = fVar12 * 1e-06;
      if (fVar12 * 1e-06 <= fVar11) {
        fVar10 = fVar11;
      }
      if (ABS(fVar8 - fVar2) < fVar10) {
        return;
      }
    }
    if (*(int *)(TypeInfo_YGValue + 0xe4) == 0) {
      il2cpp_init_class();
    }
    GVar5 = (Gilzoide_FlexUi_Yoga_YGValue_Fields)
            Gilzoide_FlexUi_Yoga_YGValue__op_Implicit(fVar8,(MethodInfo *)0x0);
    Gilzoide_FlexUi_FlexLayout__set_Height
              (__this_01,(Gilzoide_FlexUi_Yoga_YGValue_o)GVar5,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshVisibilityLayout(__this,(MethodInfo *)GVar5);
    return;
  }
LAB_03adb6d5:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.State.GisketchUIBinding$$.ctor
// il2cpp: void Gisketch_Aottg2UI_State_GisketchUIBinding___ctor (Gisketch_Aottg2UI_State_GisketchUIBinding_o* __this, const MethodInfo* method);
// 0x3adbe90

void Gisketch_Aottg2UI_State_GisketchUIBinding___ctor
               (Gisketch_Aottg2UI_State_GisketchUIBinding_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.State.GisketchUIBinding$$<RefreshVisibility>b__14_0
// il2cpp: void Gisketch_Aottg2UI_State_GisketchUIBinding___RefreshVisibility_b__14_0 (Gisketch_Aottg2UI_State_GisketchUIBinding_o* __this, const MethodInfo* method);
// 0x3adbea0

void Gisketch_Aottg2UI_State_GisketchUIBinding__<RefreshVisibility>b__14_0
               (Gisketch_Aottg2UI_State_GisketchUIBinding_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *method_00;
  
  if (*(char *)((long)&(__this->fields)._visibilityInitialized + 1) != '\0') {
    return;
  }
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    method_00 = (MethodInfo *)0x0;
    UnityEngine_GameObject__SetActive(__this_00,0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshVisibilityLayout(__this,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


