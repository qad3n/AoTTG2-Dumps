// Type: Gisketch.Aottg2UI.Game.AottgCharacterTextField
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgCharacterTextField.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgCharacterTextField$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextField___ctor (Gisketch_Aottg2UI_Game_AottgCharacterTextField_o* __this, System_String_o* id, System_String_o* label, System_String_o* placeholder, System_String_o* value, bool enabled, System_String_o* effectPrefix, System_Action_GisketchActionContext__o* changed, const MethodInfo* method);
// 0x41dea50

void Gisketch_Aottg2UI_Game_AottgCharacterTextField___ctor
               (Gisketch_Aottg2UI_Game_AottgCharacterTextField_o *__this,System_String_o *id,
               System_String_o *label,System_String_o *placeholder,System_String_o *value,
               bool_conflict enabled,System_String_o *effectPrefix,
               System_Action_GisketchActionContext__o *changed,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._id = id;
  il2cpp_runtime_glue(&__this->fields,id);
  (__this->fields)._label = label;
  il2cpp_runtime_glue(&(__this->fields)._label,label);
  (__this->fields)._placeholder = placeholder;
  il2cpp_runtime_glue(&(__this->fields)._placeholder,placeholder);
  if (value == (System_String_o *)0x0) {
    value = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  (__this->fields)._value = value;
  il2cpp_runtime_glue(&(__this->fields)._value,value);
  *(char *)&(__this->fields)._enabled = (char)enabled;
  (__this->fields)._effectPrefix = effectPrefix;
  il2cpp_runtime_glue(&(__this->fields)._effectPrefix,effectPrefix);
  (__this->fields)._changed = changed;
  il2cpp_runtime_glue(&(__this->fields)._changed);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextField$$Value
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterTextField__Value (System_String_o* id, System_String_o* fallback, const MethodInfo* method);
// 0x41deb20

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterTextField__Value
          (System_String_o *id,System_String_o *fallback,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *local_20;
  
  if (DAT_05704ebd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgCharacterTextField);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
    DAT_05704ebd = '\x01';
  }
  local_20 = (System_String_o *)0x0;
  if (*(int *)(TypeInfo_AottgCharacterTextField + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if ((System_Collections_Generic_Dictionary_object__object__o *)
      **(undefined8 **)(TypeInfo_AottgCharacterTextField + 0xb8) ==
      (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  bVar1 = System_Collections_Generic_Dictionary<object__object>__TryGetValue
                    ((System_Collections_Generic_Dictionary_object__object__o *)
                     **(undefined8 **)(TypeInfo_AottgCharacterTextField + 0xb8),(Il2CppObject *)id,
                     (Il2CppObject **)&local_20,MethodInfo_Boolean_TryGetValue);
  if (((char)bVar1 == '\0') && (local_20 = fallback, fallback == (System_String_o *)0x0)) {
    local_20 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  return local_20;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextField$$SetValue
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextField__SetValue (UnityEngine_GameObject_o* source, System_String_o* id, System_String_o* value, const MethodInfo* method);
// 0x41debe0

void Gisketch_Aottg2UI_Game_AottgCharacterTextField__SetValue
               (UnityEngine_GameObject_o *source,System_String_o *id,System_String_o *value,
               MethodInfo *method)

{
  uint uVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  TMPro_TMP_InputField_o *pTVar2;
  bool_conflict bVar3;
  UnityEngine_Transform_o *pUVar4;
  System_Object_array *pSVar5;
  ulong uVar6;
  UnityEngine_Object_o *pUVar7;
  System_String_o *pSVar8;
  int iVar9;
  ulong uVar10;
  
  if (DAT_05704ebe == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgCharacterTextField);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704ebe = '\x01';
    if (value != (System_String_o *)0x0) goto LAB_041dec00;
LAB_041dec58:
    value = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
    if (*(int *)(TypeInfo_AottgCharacterTextField + 0xe4) != 0) goto LAB_041dec14;
LAB_041dec84:
    il2cpp_init_class();
    __this = (System_Collections_Generic_Dictionary_object__object__o *)
             **(undefined8 **)(TypeInfo_AottgCharacterTextField + 0xb8);
  }
  else {
    if (value == (System_String_o *)0x0) goto LAB_041dec58;
LAB_041dec00:
    if (*(int *)(TypeInfo_AottgCharacterTextField + 0xe4) == 0) goto LAB_041dec84;
LAB_041dec14:
    __this = (System_Collections_Generic_Dictionary_object__object__o *)
             **(undefined8 **)(TypeInfo_AottgCharacterTextField + 0xb8);
  }
  if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
LAB_041ded26:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  System_Collections_Generic_Dictionary<object__object>__set_Item
            (__this,(Il2CppObject *)id,(Il2CppObject *)value,MethodInfo_Void_set_Item);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pUVar4 = (UnityEngine_Transform_o *)0x0;
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)source,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    if ((source == (UnityEngine_GameObject_o *)0x0) ||
       (pUVar4 = UnityEngine_GameObject__get_transform(source,(MethodInfo *)0x0),
       pUVar4 == (UnityEngine_Transform_o *)0x0)) goto LAB_041ded26;
    pUVar4 = UnityEngine_Transform__get_root(pUVar4,(MethodInfo *)0x0);
  }
  if (*(int *)(TypeInfo_AottgCharacterTextField + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (DAT_05704ec6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_TMP_InputField___GetComponentsInChildren_TMP_Inp);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704ec6 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    if ((pUVar4 == (UnityEngine_Transform_o *)0x0) ||
       (pSVar5 = UnityEngine_Component__GetComponentsInChildren<object>
                           ((UnityEngine_Component_o *)pUVar4,1,MethodInfo_TMP_InputField___GetComponentsInChildren_TMP_Inp),
       pSVar5 == (System_Object_array *)0x0)) {
LAB_041def64:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    iVar9 = (int)pSVar5->max_length;
    uVar6 = pSVar5->max_length & 0xffffffff;
    if (value == (System_String_o *)0x0) {
      if (0 < iVar9) {
        uVar10 = 0;
        if (uVar6 != 0) {
          do {
            pTVar2 = (TMPro_TMP_InputField_o *)pSVar5->m_Items[uVar10];
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_init_class();
            }
            bVar3 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,
                               (MethodInfo *)0x0);
            if ((char)bVar3 != '\0') {
              if ((pTVar2 == (TMPro_TMP_InputField_o *)0x0) ||
                 (pUVar7 = (UnityEngine_Object_o *)
                           UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)pTVar2,(MethodInfo *)0x0),
                 pUVar7 == (UnityEngine_Object_o *)0x0)) goto LAB_041def64;
              pSVar8 = UnityEngine_Object__get_name(pUVar7,(MethodInfo *)0x0);
              bVar3 = System_String__op_Equality(pSVar8,id,(MethodInfo *)0x0);
              if ((char)bVar3 != '\0') {
                TMPro_TMP_InputField__SetTextWithoutNotify
                          (pTVar2,(System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),
                           (MethodInfo *)0x0);
                TMPro_TMP_InputField__ForceLabelUpdate(pTVar2,(MethodInfo *)0x0);
              }
            }
            uVar10 = uVar10 + 1;
            uVar1 = (uint)pSVar5->max_length;
            if ((long)(int)uVar1 <= (long)uVar10) {
              return;
            }
          } while (uVar10 < uVar1);
        }
        goto LAB_041def5f;
      }
    }
    else if (0 < iVar9) {
      uVar10 = 0;
      if (uVar6 != 0) {
        do {
          pTVar2 = (TMPro_TMP_InputField_o *)pSVar5->m_Items[uVar10];
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar3 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,
                             (MethodInfo *)0x0);
          if ((char)bVar3 != '\0') {
            if ((pTVar2 == (TMPro_TMP_InputField_o *)0x0) ||
               (pUVar7 = (UnityEngine_Object_o *)
                         UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)pTVar2,(MethodInfo *)0x0),
               pUVar7 == (UnityEngine_Object_o *)0x0)) goto LAB_041def64;
            pSVar8 = UnityEngine_Object__get_name(pUVar7,(MethodInfo *)0x0);
            bVar3 = System_String__op_Equality(pSVar8,id,(MethodInfo *)0x0);
            if ((char)bVar3 != '\0') {
              TMPro_TMP_InputField__SetTextWithoutNotify(pTVar2,value,(MethodInfo *)0x0);
              TMPro_TMP_InputField__ForceLabelUpdate(pTVar2,(MethodInfo *)0x0);
            }
          }
          uVar10 = uVar10 + 1;
          uVar1 = (uint)pSVar5->max_length;
          if ((long)(int)uVar1 <= (long)uVar10) {
            return;
          }
        } while (uVar10 < uVar1);
      }
LAB_041def5f:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextField$$SetFont
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextField__SetFont (UnityEngine_GameObject_o* source, System_String_o* id, System_String_o* font, const MethodInfo* method);
// 0x41def70

void Gisketch_Aottg2UI_Game_AottgCharacterTextField__SetFont
               (UnityEngine_GameObject_o *source,System_String_o *id,System_String_o *font,
               MethodInfo *method)

{
  uint uVar1;
  TMPro_TMP_InputField_o *input;
  bool_conflict bVar2;
  UnityEngine_Transform_o *pUVar3;
  System_Object_array *pSVar4;
  UnityEngine_Object_o *__this;
  System_String_o *a;
  ulong uVar5;
  
  if (DAT_05704ebf == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgCharacterTextField);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704ebf = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pUVar3 = (UnityEngine_Transform_o *)0x0;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)source,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    if ((source == (UnityEngine_GameObject_o *)0x0) ||
       (pUVar3 = UnityEngine_GameObject__get_transform(source,(MethodInfo *)0x0),
       pUVar3 == (UnityEngine_Transform_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pUVar3 = UnityEngine_Transform__get_root(pUVar3,(MethodInfo *)0x0);
  }
  if (*(int *)(TypeInfo_AottgCharacterTextField + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (DAT_05704ec7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_TMP_InputField___GetComponentsInChildren_TMP_Inp);
    il2cpp_init_method_metadata(&TypeInfo_NameFontCatalog);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704ec7 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    if ((pUVar3 == (UnityEngine_Transform_o *)0x0) ||
       (pSVar4 = UnityEngine_Component__GetComponentsInChildren<object>
                           ((UnityEngine_Component_o *)pUVar3,1,MethodInfo_TMP_InputField___GetComponentsInChildren_TMP_Inp),
       pSVar4 == (System_Object_array *)0x0)) {
LAB_041df1a8:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (0 < (int)pSVar4->max_length) {
      uVar5 = 0;
      if ((pSVar4->max_length & 0xffffffff) != 0) {
        do {
          input = (TMPro_TMP_InputField_o *)pSVar4->m_Items[uVar5];
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar2 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)input,(UnityEngine_Object_o *)0x0,
                             (MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if ((input == (TMPro_TMP_InputField_o *)0x0) ||
               (__this = (UnityEngine_Object_o *)
                         UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)input,(MethodInfo *)0x0),
               __this == (UnityEngine_Object_o *)0x0)) goto LAB_041df1a8;
            a = UnityEngine_Object__get_name(__this,(MethodInfo *)0x0);
            bVar2 = System_String__op_Equality(a,id,(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
                il2cpp_init_class();
              }
              PatreonEffects_NameFontCatalog__Apply(input,font,(MethodInfo *)0x0);
            }
          }
          uVar5 = uVar5 + 1;
          uVar1 = (uint)pSVar4->max_length;
          if ((long)(int)uVar1 <= (long)uVar5) {
            return;
          }
        } while (uVar5 < uVar1);
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextField$$VisibleText
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterTextField__VisibleText (System_String_o* value, const MethodInfo* method);
// 0x41df1b0

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterTextField__VisibleText
          (System_String_o *value,MethodInfo *method)

{
  int iVar1;
  System_String_o *pSVar2;
  
  if (DAT_05704ec0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MiscExtensions);
    DAT_05704ec0 = '\x01';
  }
  if (value == (System_String_o *)0x0) {
    value = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
    iVar1 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  pSVar2 = MiscExtensions__StripRichText(value,(MethodInfo *)0x0);
  pSVar2 = MiscExtensions__StripHex(pSVar2,(MethodInfo *)0x0);
  return pSVar2;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextField$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextField__Build (Gisketch_Aottg2UI_Game_AottgCharacterTextField_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x41df240

void Gisketch_Aottg2UI_Game_AottgCharacterTextField__Build
               (Gisketch_Aottg2UI_Game_AottgCharacterTextField_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Action_AottgUi__o *build;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  
  if (DAT_05704ec1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgUi);
    il2cpp_init_method_metadata(&MethodInfo_Void__Build_b__15_0);
    il2cpp_init_method_metadata(&TypeInfo_AottgCharacterTextField);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"default");
    il2cpp_init_method_metadata(&"-field");
    DAT_05704ec1 = '\x01';
    iVar1 = *(int *)(TypeInfo_AottgCharacterTextField + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AottgCharacterTextField + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                **(undefined8 **)(TypeInfo_AottgCharacterTextField + 0xb8);
  }
  else {
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                **(undefined8 **)(TypeInfo_AottgCharacterTextField + 0xb8);
  }
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object__object>__set_Item
              (__this_00,(Il2CppObject *)(__this->fields)._id,
               (Il2CppObject *)(__this->fields)._value,MethodInfo_Void_set_Item);
    build = (System_Action_AottgUi__o *)il2cpp_runtime_glue(TypeInfo_Action_AottgUi);
    System_Action<object>___ctor();
    id = System_String__Concat((__this->fields)._id,"-field",(MethodInfo *)0x0);
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,5.0,width,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                        0.0,0.0,0.0,1.0,(MethodInfo *)0x0);
    if ((ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) &&
       (pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                           (ui,"default",build,id,layout,
                            (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                            (MethodInfo *)0x0),
       pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) {
      *(char *)((long)&(pGVar2->fields).hasIcon + 2) = (char)(__this->fields)._enabled;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextField$$IsEnabled
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgCharacterTextField__IsEnabled (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, System_String_o* id, bool fallback, const MethodInfo* method);
// 0x41df450

bool_conflict
Gisketch_Aottg2UI_Game_AottgCharacterTextField__IsEnabled
          (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,System_String_o *id,
          bool_conflict fallback,MethodInfo *method)

{
  UnityEngine_Object_c *__this;
  bool_conflict bVar1;
  UnityEngine_Object_o *x;
  System_String_o *key;
  
  if (DAT_05704ec2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgCharacterTextField);
    il2cpp_init_method_metadata(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRo);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704ec2 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  x = (UnityEngine_Object_o *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)context.fields.GameObject,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (context.fields.GameObject == (UnityEngine_GameObject_o *)0x0) goto LAB_041df584;
    x = (UnityEngine_Object_o *)
        UnityEngine_GameObject__GetComponentInParent<object>(context.fields.GameObject,MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRo)
    ;
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    if (x == (UnityEngine_Object_o *)0x0) {
LAB_041df584:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    __this = x[6].klass;
    if (__this != (UnityEngine_Object_c *)0x0) {
      if (*(int *)(TypeInfo_AottgCharacterTextField + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05704ec5 == '\0') {
        il2cpp_init_method_metadata(&".enabled");
        DAT_05704ec5 = '\x01';
      }
      key = System_String__Concat(id,".enabled",(MethodInfo *)0x0);
      bVar1 = Gisketch_Aottg2UI_State_GisketchUIState__GetBool
                        ((Gisketch_Aottg2UI_State_GisketchUIState_o *)__this,key,fallback & 0xff,
                         (MethodInfo *)0x0);
      return bVar1;
    }
  }
  return fallback;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextField$$SetFromInput
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextField__SetFromInput (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, System_String_o* id, System_Action_GisketchActionContext__o* changed, const MethodInfo* method);
// 0x41df5d0

void Gisketch_Aottg2UI_Game_AottgCharacterTextField__SetFromInput
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,System_String_o *id,
               System_Action_GisketchActionContext__o *changed,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  bool_conflict bVar1;
  TMPro_TMP_InputField_o *__this_00;
  float *pfVar2;
  System_String_o *pSVar3;
  MethodInfo *method_00;
  
  if (DAT_05704ec3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgCharacterTextField);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&MethodInfo_TMP_InputField_GetComponent_TMP_InputField);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704ec3 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this_00 = (TMPro_TMP_InputField_o *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)context.fields.GameObject,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (context.fields.GameObject == (UnityEngine_GameObject_o *)0x0) goto LAB_041df7aa;
    __this_00 = (TMPro_TMP_InputField_o *)
                UnityEngine_GameObject__GetComponent<object>(context.fields.GameObject,MethodInfo_TMP_InputField_GetComponent_TMP_InputField)
    ;
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  method_00 = (MethodInfo *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                    );
  if ((char)bVar1 == '\0') {
    pfVar2 = *(float **)(DAT_057110b0 + 0xb8);
  }
  else {
    if (__this_00 == (TMPro_TMP_InputField_o *)0x0) goto LAB_041df7aa;
    pfVar2 = &(__this_00->fields).m_SelectionColor.fields.a;
  }
  pSVar3 = *(System_String_o **)pfVar2;
  if (*(int *)(TypeInfo_AottgCharacterTextField + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar3 = Gisketch_Aottg2UI_Game_AottgCharacterTextField__CleanInput(pSVar3,method_00);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                    );
  if ((char)bVar1 != '\0') {
    if (__this_00 == (TMPro_TMP_InputField_o *)0x0) goto LAB_041df7aa;
    bVar1 = System_String__op_Inequality
                      (*(System_String_o **)&(__this_00->fields).m_SelectionColor.fields.a,pSVar3,
                       (MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      TMPro_TMP_InputField__SetTextWithoutNotify(__this_00,pSVar3,(MethodInfo *)0x0);
    }
  }
  if (*(int *)(TypeInfo_AottgCharacterTextField + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           **(undefined8 **)(TypeInfo_AottgCharacterTextField + 0xb8);
  pSVar3 = Gisketch_Aottg2UI_Game_AottgCharacterTextColorCodec__FromEditableRaw
                     (pSVar3,(MethodInfo *)0x0);
  if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object__object>__set_Item
              (__this,(Il2CppObject *)id,(Il2CppObject *)pSVar3,MethodInfo_Void_set_Item);
    if (changed != (System_Action_GisketchActionContext__o *)0x0) {
      (*(code *)(changed->fields).invoke_impl)
                ((changed->fields).method_code,(changed->fields).method);
      return;
    }
    return;
  }
LAB_041df7aa:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextField$$CleanInput
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterTextField__CleanInput (System_String_o* value, const MethodInfo* method);
// 0x41df7b0

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterTextField__CleanInput
          (System_String_o *value,MethodInfo *method)

{
  int iVar1;
  System_String_o *pSVar2;
  
  if (DAT_05704ec4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MiscExtensions);
    il2cpp_init_method_metadata(&"\n");
    DAT_05704ec4 = '\x01';
  }
  if (value == (System_String_o *)0x0) {
    value = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
    iVar1 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  pSVar2 = MiscExtensions__StripRichText(value,(MethodInfo *)0x0);
  if (pSVar2 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pSVar2 = System_String__Replace
                     (pSVar2,"\n",(System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),
                      (MethodInfo *)0x0);
  return pSVar2;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextField$$EnabledKey
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCharacterTextField__EnabledKey (System_String_o* id, const MethodInfo* method);
// 0x41df590

System_String_o *
Gisketch_Aottg2UI_Game_AottgCharacterTextField__EnabledKey(System_String_o *id,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (DAT_05704ec5 == '\0') {
    il2cpp_init_method_metadata(&".enabled");
    DAT_05704ec5 = '\x01';
  }
  pSVar1 = System_String__Concat(id,".enabled",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextField$$SetInputText
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextField__SetInputText (UnityEngine_Transform_o* root, System_String_o* id, System_String_o* value, const MethodInfo* method);
// 0x41ded30

void Gisketch_Aottg2UI_Game_AottgCharacterTextField__SetInputText
               (UnityEngine_Transform_o *root,System_String_o *id,System_String_o *value,
               MethodInfo *method)

{
  uint uVar1;
  TMPro_TMP_InputField_o *pTVar2;
  bool_conflict bVar3;
  System_Object_array *pSVar4;
  ulong uVar5;
  UnityEngine_Object_o *pUVar6;
  System_String_o *pSVar7;
  int iVar8;
  ulong uVar9;
  
  if (DAT_05704ec6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_TMP_InputField___GetComponentsInChildren_TMP_Inp);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704ec6 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    return;
  }
  if ((root != (UnityEngine_Transform_o *)0x0) &&
     (pSVar4 = UnityEngine_Component__GetComponentsInChildren<object>
                         ((UnityEngine_Component_o *)root,1,MethodInfo_TMP_InputField___GetComponentsInChildren_TMP_Inp),
     pSVar4 != (System_Object_array *)0x0)) {
    iVar8 = (int)pSVar4->max_length;
    uVar5 = pSVar4->max_length & 0xffffffff;
    if (value == (System_String_o *)0x0) {
      if (iVar8 < 1) {
        return;
      }
      uVar9 = 0;
      if (uVar5 != 0) {
        do {
          pTVar2 = (TMPro_TMP_InputField_o *)pSVar4->m_Items[uVar9];
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar3 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,
                             (MethodInfo *)0x0);
          if ((char)bVar3 != '\0') {
            if ((pTVar2 == (TMPro_TMP_InputField_o *)0x0) ||
               (pUVar6 = (UnityEngine_Object_o *)
                         UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)pTVar2,(MethodInfo *)0x0),
               pUVar6 == (UnityEngine_Object_o *)0x0)) goto LAB_041def64;
            pSVar7 = UnityEngine_Object__get_name(pUVar6,(MethodInfo *)0x0);
            bVar3 = System_String__op_Equality(pSVar7,id,(MethodInfo *)0x0);
            if ((char)bVar3 != '\0') {
              TMPro_TMP_InputField__SetTextWithoutNotify
                        (pTVar2,(System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),
                         (MethodInfo *)0x0);
              TMPro_TMP_InputField__ForceLabelUpdate(pTVar2,(MethodInfo *)0x0);
            }
          }
          uVar9 = uVar9 + 1;
          uVar1 = (uint)pSVar4->max_length;
          if ((long)(int)uVar1 <= (long)uVar9) {
            return;
          }
        } while (uVar9 < uVar1);
      }
    }
    else {
      if (iVar8 < 1) {
        return;
      }
      uVar9 = 0;
      if (uVar5 != 0) {
        do {
          pTVar2 = (TMPro_TMP_InputField_o *)pSVar4->m_Items[uVar9];
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar3 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,
                             (MethodInfo *)0x0);
          if ((char)bVar3 != '\0') {
            if ((pTVar2 == (TMPro_TMP_InputField_o *)0x0) ||
               (pUVar6 = (UnityEngine_Object_o *)
                         UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)pTVar2,(MethodInfo *)0x0),
               pUVar6 == (UnityEngine_Object_o *)0x0)) goto LAB_041def64;
            pSVar7 = UnityEngine_Object__get_name(pUVar6,(MethodInfo *)0x0);
            bVar3 = System_String__op_Equality(pSVar7,id,(MethodInfo *)0x0);
            if ((char)bVar3 != '\0') {
              TMPro_TMP_InputField__SetTextWithoutNotify(pTVar2,value,(MethodInfo *)0x0);
              TMPro_TMP_InputField__ForceLabelUpdate(pTVar2,(MethodInfo *)0x0);
            }
          }
          uVar9 = uVar9 + 1;
          uVar1 = (uint)pSVar4->max_length;
          if ((long)(int)uVar1 <= (long)uVar9) {
            return;
          }
        } while (uVar9 < uVar1);
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_041def64:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextField$$SetInputFont
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextField__SetInputFont (UnityEngine_Transform_o* root, System_String_o* id, System_String_o* font, const MethodInfo* method);
// 0x41df030

void Gisketch_Aottg2UI_Game_AottgCharacterTextField__SetInputFont
               (UnityEngine_Transform_o *root,System_String_o *id,System_String_o *font,
               MethodInfo *method)

{
  uint uVar1;
  TMPro_TMP_InputField_o *input;
  bool_conflict bVar2;
  System_Object_array *pSVar3;
  UnityEngine_Object_o *__this;
  System_String_o *a;
  ulong uVar4;
  
  if (DAT_05704ec7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_TMP_InputField___GetComponentsInChildren_TMP_Inp);
    il2cpp_init_method_metadata(&TypeInfo_NameFontCatalog);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704ec7 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    if ((root == (UnityEngine_Transform_o *)0x0) ||
       (pSVar3 = UnityEngine_Component__GetComponentsInChildren<object>
                           ((UnityEngine_Component_o *)root,1,MethodInfo_TMP_InputField___GetComponentsInChildren_TMP_Inp),
       pSVar3 == (System_Object_array *)0x0)) {
LAB_041df1a8:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (0 < (int)pSVar3->max_length) {
      uVar4 = 0;
      if ((pSVar3->max_length & 0xffffffff) != 0) {
        do {
          input = (TMPro_TMP_InputField_o *)pSVar3->m_Items[uVar4];
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar2 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)input,(UnityEngine_Object_o *)0x0,
                             (MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if ((input == (TMPro_TMP_InputField_o *)0x0) ||
               (__this = (UnityEngine_Object_o *)
                         UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)input,(MethodInfo *)0x0),
               __this == (UnityEngine_Object_o *)0x0)) goto LAB_041df1a8;
            a = UnityEngine_Object__get_name(__this,(MethodInfo *)0x0);
            bVar2 = System_String__op_Equality(a,id,(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
                il2cpp_init_class();
              }
              PatreonEffects_NameFontCatalog__Apply(input,font,(MethodInfo *)0x0);
            }
          }
          uVar4 = uVar4 + 1;
          uVar1 = (uint)pSVar3->max_length;
          if ((long)(int)uVar1 <= (long)uVar4) {
            return;
          }
        } while (uVar4 < uVar1);
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextField$$SetFieldVisible
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextField__SetFieldVisible (UnityEngine_GameObject_o* source, System_String_o* id, bool visible, const MethodInfo* method);
// 0x41df880

void Gisketch_Aottg2UI_Game_AottgCharacterTextField__SetFieldVisible
               (UnityEngine_GameObject_o *source,System_String_o *id,bool_conflict visible,
               MethodInfo *method)

{
  uint uVar1;
  UnityEngine_Object_o *x;
  bool_conflict bVar2;
  UnityEngine_Transform_o *pUVar3;
  System_Object_array *pSVar4;
  UnityEngine_Object_o *__this;
  System_String_o *a;
  System_String_o *b;
  UnityEngine_GameObject_o *__this_00;
  ulong uVar5;
  uint local_34;
  
  if (DAT_05704ec8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Transform___GetComponentsInChildren_Transform);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"-field");
    DAT_05704ec8 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pUVar3 = (UnityEngine_Transform_o *)0x0;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)source,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    if ((source == (UnityEngine_GameObject_o *)0x0) ||
       (pUVar3 = UnityEngine_GameObject__get_transform(source,(MethodInfo *)0x0),
       pUVar3 == (UnityEngine_Transform_o *)0x0)) goto LAB_041dfa62;
    pUVar3 = UnityEngine_Transform__get_root(pUVar3,(MethodInfo *)0x0);
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    if ((pUVar3 == (UnityEngine_Transform_o *)0x0) ||
       (pSVar4 = UnityEngine_Component__GetComponentsInChildren<object>
                           ((UnityEngine_Component_o *)pUVar3,1,MethodInfo_Transform___GetComponentsInChildren_Transform),
       pSVar4 == (System_Object_array *)0x0)) {
LAB_041dfa62:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (0 < (int)pSVar4->max_length) {
      uVar5 = 0;
      local_34 = visible & 0xff;
      if ((pSVar4->max_length & 0xffffffff) != 0) {
        do {
          x = (UnityEngine_Object_o *)pSVar4->m_Items[uVar5];
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
          ;
          if ((char)bVar2 != '\0') {
            if ((x == (UnityEngine_Object_o *)0x0) ||
               (__this = (UnityEngine_Object_o *)
                         UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)x,(MethodInfo *)0x0),
               __this == (UnityEngine_Object_o *)0x0)) goto LAB_041dfa62;
            a = UnityEngine_Object__get_name(__this,(MethodInfo *)0x0);
            b = System_String__Concat(id,"-field",(MethodInfo *)0x0);
            bVar2 = System_String__op_Equality(a,b,(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              __this_00 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
              if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto LAB_041dfa62;
              UnityEngine_GameObject__SetActive(__this_00,local_34,(MethodInfo *)0x0);
            }
          }
          uVar5 = uVar5 + 1;
          uVar1 = (uint)pSVar4->max_length;
          if ((long)(int)uVar1 <= (long)uVar5) {
            return;
          }
        } while (uVar5 < uVar1);
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextField$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextField___cctor (const MethodInfo* method);
// 0x41dfa70

void Gisketch_Aottg2UI_Game_AottgCharacterTextField___cctor(MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_IEqualityComparer_TKey__o *comparer;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  
  if (DAT_05704ec9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgCharacterTextField);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_System_String);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__string);
    il2cpp_init_method_metadata(&TypeInfo_StringComparer);
    DAT_05704ec9 = '\x01';
    iVar1 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_0570136f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_StringComparer);
    DAT_0570136f = '\x01';
    iVar1 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  comparer = *(System_Collections_Generic_IEqualityComparer_TKey__o **)
              (*(long *)(TypeInfo_StringComparer + 0xb8) + 0x18);
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           il2cpp_runtime_glue(TypeInfo_Dictionary_string__string);
  System_Collections_Generic_Dictionary<object__object>___ctor(__this,comparer,MethodInfo_Dictionary_2_System_String_System_String);
  **(undefined8 **)(TypeInfo_AottgCharacterTextField + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_AottgCharacterTextField + 0xb8),__this);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextField$$<Build>b__15_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextField___Build_b__15_0 (Gisketch_Aottg2UI_Game_AottgCharacterTextField_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* field, const MethodInfo* method);
// 0x41dfbb0

void Gisketch_Aottg2UI_Game_AottgCharacterTextField__<Build>b__15_0
               (Gisketch_Aottg2UI_Game_AottgCharacterTextField_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *field,MethodInfo *method)

{
  System_Action_AottgUi__o *build;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (DAT_05704eca == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgUi);
    il2cpp_init_method_metadata(&MethodInfo_Void__Build_b__15_1);
    il2cpp_init_method_metadata(&"Center");
    il2cpp_init_method_metadata(&"Row");
    il2cpp_init_method_metadata(&"accountInputLabel");
    il2cpp_init_method_metadata(&"-row");
    il2cpp_init_method_metadata(&"row");
    DAT_05704eca = '\x01';
  }
  if (field != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Text
              (field,(__this->fields)._label,"accountInputLabel",(System_String_o *)0x0,
               (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (MethodInfo *)0x0);
    build = (System_Action_AottgUi__o *)il2cpp_runtime_glue(TypeInfo_Action_AottgUi);
    System_Action<object>___ctor();
    id = System_String__Concat((__this->fields)._id,"-row",(MethodInfo *)0x0);
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Row",(System_String_o *)0x0,"Center",(System_String_o *)0x0,
                        (System_String_o *)0x0,10.0,width,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                        0.0,0.0,0.0,1.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (field,"row",build,id,layout,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextField$$<Build>b__15_1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextField___Build_b__15_1 (Gisketch_Aottg2UI_Game_AottgCharacterTextField_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x41dfd60

void Gisketch_Aottg2UI_Game_AottgCharacterTextField__<Build>b__15_1
               (Gisketch_Aottg2UI_Game_AottgCharacterTextField_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  System_String_o *placeholder;
  ulong in_RAX;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar2;
  System_Action_GisketchActionContext__o *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar4;
  System_String_o *pSVar5;
  undefined8 uStack_38;
  
  uStack_38 = in_RAX;
  if (DAT_05704ecb == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_GisketchActionContext);
    il2cpp_init_method_metadata(&MethodInfo_Void__Build_b__15_2);
    il2cpp_init_method_metadata(&MethodInfo_Void__Build_b__15_3);
    il2cpp_init_method_metadata(&TypeInfo_AottgCharacterTextField);
    il2cpp_init_method_metadata(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_init_method_metadata(&MethodInfo_Nullable_1_Boolean);
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"characterTextInput");
    il2cpp_init_method_metadata(&"UI/Icons/Profile/SparkleIcon");
    il2cpp_init_method_metadata(&"-set-effects");
    il2cpp_init_method_metadata();
    DAT_05704ecb = '\x01';
  }
  pSVar5 = (__this->fields)._id;
  placeholder = (__this->fields)._placeholder;
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar1,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                      ,0.0,1.0,1.0,(MethodInfo *)0x0);
  pSVar3 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_glue(TypeInfo_Action_GisketchActionContext);
  System_Action<GisketchActionContext>___ctor();
  if ((row != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) &&
     (pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__InputField
                         (row,pSVar5,placeholder,0,"characterTextInput",pGVar2,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,pSVar3,0.2,0x200,
                          (MethodInfo *)0x0),
     pGVar4 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) {
    (pGVar4->fields).value = (__this->fields)._value;
    il2cpp_runtime_glue(&(pGVar4->fields).value);
    uStack_38 = uStack_38 & 0xffffffffffff;
    System_Nullable<bool>___ctor
              ((System_Nullable_bool__o)((long)&uStack_38 + 6),(uint)(byte)(__this->fields)._enabled
               ,MethodInfo_Nullable_1_Boolean);
    *(undefined2 *)((long)&(pGVar4->fields).hasIcon + 3) = uStack_38._6_2_;
    pGVar2 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchUIBindingDefinition);
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar2,(MethodInfo *)0x0);
    pSVar5 = (__this->fields)._id;
    if (*(int *)(TypeInfo_AottgCharacterTextField + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_05704ec5 == '\0') {
      il2cpp_init_method_metadata(&".enabled");
      DAT_05704ec5 = '\x01';
    }
    pSVar5 = System_String__Concat(pSVar5,".enabled",(MethodInfo *)0x0);
    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      (pGVar2->fields).alignSelf = pSVar5;
      il2cpp_runtime_glue(&(pGVar2->fields).alignSelf,pSVar5);
      (pGVar4->fields).contentLayout = pGVar2;
      il2cpp_runtime_glue(&(pGVar4->fields).contentLayout,pGVar2);
      pSVar3 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_glue(TypeInfo_Action_GisketchActionContext);
      System_Action<GisketchActionContext>___ctor();
      pSVar5 = System_String__Concat((__this->fields)._id,"-set-effects",(MethodInfo *)0x0);
      pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Button
                         (row,0,"Set Effects",pSVar3,pSVar5,(System_String_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"UI/Icons/Profile/SparkleIcon",
                          (MethodInfo *)0x0);
      uStack_38._0_6_ = (uint6)(uint)uStack_38;
      System_Nullable<bool>___ctor
                ((System_Nullable_bool__o)((long)&uStack_38 + 4),
                 (uint)(byte)(__this->fields)._enabled,MethodInfo_Nullable_1_Boolean);
      if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        *(undefined2 *)((long)&(pGVar4->fields).hasIcon + 3) = uStack_38._4_2_;
        pGVar2 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)
                 il2cpp_runtime_glue(TypeInfo_GisketchUIBindingDefinition);
        Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                  ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar2,(MethodInfo *)0x0)
        ;
        pSVar5 = (__this->fields)._id;
        if (DAT_05704ec5 == '\0') {
          il2cpp_init_method_metadata(&".enabled");
          DAT_05704ec5 = '\x01';
        }
        pSVar5 = System_String__Concat(pSVar5,".enabled",(MethodInfo *)0x0);
        if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
          (pGVar2->fields).alignSelf = pSVar5;
          il2cpp_runtime_glue(&(pGVar2->fields).alignSelf,pSVar5);
          (pGVar4->fields).contentLayout = pGVar2;
          il2cpp_runtime_glue(&(pGVar4->fields).contentLayout,pGVar2);
          pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Points(160.0,(MethodInfo *)0x0);
          pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                             ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                              (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar1,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0
                              ,0.0,0.0,0.0,0.0,0.0,(MethodInfo *)0x0);
          (pGVar4->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar2;
          il2cpp_runtime_glue(&(pGVar4->fields).search,pGVar2);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextField$$<Build>b__15_2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextField___Build_b__15_2 (Gisketch_Aottg2UI_Game_AottgCharacterTextField_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x41e0200

void Gisketch_Aottg2UI_Game_AottgCharacterTextField__<Build>b__15_2
               (Gisketch_Aottg2UI_Game_AottgCharacterTextField_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  System_String_o *id;
  System_Action_GisketchActionContext__o *changed;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  
  if (DAT_05704ecc == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgCharacterTextField);
    DAT_05704ecc = '\x01';
    in_RDX = extraout_RDX;
  }
  id = (__this->fields)._id;
  changed = (__this->fields)._changed;
  if (*(int *)(TypeInfo_AottgCharacterTextField + 0xe4) == 0) {
    il2cpp_init_class();
    in_RDX = extraout_RDX_00;
  }
  Gisketch_Aottg2UI_Game_AottgCharacterTextField__SetFromInput(context,id,changed,in_RDX);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCharacterTextField$$<Build>b__15_3
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCharacterTextField___Build_b__15_3 (Gisketch_Aottg2UI_Game_AottgCharacterTextField_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x41e0290

void Gisketch_Aottg2UI_Game_AottgCharacterTextField__<Build>b__15_3
               (Gisketch_Aottg2UI_Game_AottgCharacterTextField_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  System_String_o *id;
  System_String_o *label;
  System_String_o *effectPrefix;
  bool_conflict bVar1;
  uint uVar2;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  
  if (DAT_05704ecd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgCharacterSetEffectsDialog);
    il2cpp_init_method_metadata(&TypeInfo_AottgCharacterTextField);
    DAT_05704ecd = '\x01';
    in_RDX = extraout_RDX;
  }
  id = (__this->fields)._id;
  label = (__this->fields)._label;
  effectPrefix = (__this->fields)._effectPrefix;
  bVar1 = (__this->fields)._enabled;
  if (*(int *)(TypeInfo_AottgCharacterTextField + 0xe4) == 0) {
    il2cpp_init_class();
    in_RDX = extraout_RDX_00;
  }
  uVar2 = Gisketch_Aottg2UI_Game_AottgCharacterTextField__IsEnabled
                    (context,id,(uint)(byte)bVar1,in_RDX);
  if (*(int *)(TypeInfo_AottgCharacterSetEffectsDialog + 0xe4) == 0) {
    il2cpp_init_class();
  }
  Gisketch_Aottg2UI_Game_AottgCharacterSetEffectsDialog__Open
            (context,id,label,effectPrefix,uVar2 & 0xff,(MethodInfo *)0x0);
  return;
}


