// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingsAbilityCategory
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgSettingsAbilityCategory.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsAbilityCategory.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsAbilityCategory___c___cctor (const MethodInfo* method);
// 0x182320150

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsAbilityCategory___c___cctor(MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsAbilityCategory___c_o *__this;
  
  if (Il2CppMethodInitialized_18434775c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsAbilityCategory_c);
    Il2CppMethodInitialized_18434775c = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsAbilityCategory_c)
  ;
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsAbilityCategory_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsAbilityCategory_c->static_fields->__9,
             __this);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsAbilityCategory.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsAbilityCategory___c___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsAbilityCategory___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsAbilityCategory___c___ctor(Gisketch_Aottg2UI_SettingsScreen_AottgSettingsAbilityCategory___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsAbilityCategory.<>c$$<Groups>b__2_0
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsAbilityCategory___c___Groups_b__2_0 (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsAbilityCategory___c_o* __this, const MethodInfo* method);
// 0x18231fa80

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsAbilityCategory___c___Groups_b__2_0
          (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsAbilityCategory___c_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  int32_t local_res18 [4];
  
  local_res18[0] = 0;
  local_res18[0] = Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow__UnusedPoints((MethodInfo *)0x0);
  pSVar1 = System_Int32__ToString(local_res18,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsAbilityCategory$$Build
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsAbilityCategory__Build (Gisketch_Aottg2UI_Code_AottgUi_o* content, Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context, const MethodInfo* method);
// 0x182312e90

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsAbilityCategory__Build
               (Gisketch_Aottg2UI_Code_AottgUi_o *content,
               Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o *context,MethodInfo *method)

{
  System_String_o *categoryId;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *groups;
  Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategory_o *__this;
  Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o local_58;
  
  if (Il2CppMethodInitialized_18434775a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ability");
    Il2CppMethodInitialized_18434775a = '\x01';
  }
  groups = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsAbilityCategory__Groups((MethodInfo *)0x0);
  categoryId = "ability";
  if (Il2CppMethodInitialized_18434775e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategory);
    Il2CppMethodInitialized_18434775e = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategory);
  local_58.fields._group = (context->fields)._group;
  local_58.fields._order = (context->fields)._order;
  local_58.fields._12_4_ = *(undefined4 *)&(context->fields).field_0xc;
  local_58.fields._SectionId_k__BackingField = (context->fields)._SectionId_k__BackingField;
  local_58.fields._SectionTitle_k__BackingField = (context->fields)._SectionTitle_k__BackingField;
  Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategory___ctor
            (__this,&local_58,categoryId,groups,(System_String_o *)0x0,0.0,(System_Nullable_float__o)0x0,
             (MethodInfo *)0x0);
  if (content != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Component
              (content,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsAbilityCategory$$SyncState
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsAbilityCategory__SyncState (Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x1823139e0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsAbilityCategory__SyncState
               (Gisketch_Aottg2UI_GisketchUIRoot_o *root,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *groups;
  
  groups = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsAbilityCategory__Groups((MethodInfo *)0x0);
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsCategoryPage__SyncState(root,groups,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsAbilityCategory$$Groups
// il2cpp: Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsAbilityCategory__Groups (const MethodInfo* method);
// 0x182312f60
// asm: 16 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18231320a: mov rax, qword ptr [rip + 0x1dc4817]  ; "settings-ability-unused-points"
// asm:   0x182313211: mov qword ptr [rsp + 0x98], rax
// asm:   0x182313219: mov rax, qword ptr [rip + 0x1dbcaa0]  ; "Bomb Stats"
// asm:   0x182313220: mov qword ptr [rsp + 0xa0], rax
// asm:   0x182313228: mov rax, qword ptr [rip + 0x1dc42b9]  ; "settings-ability-bomb-stats"
// asm:   0x18231322f: mov qword ptr [rsp + 0xa8], rax
// asm:   0x182313237: jmp 0x1823132db
// asm:   0x182313379: mov r14, r13
// asm:   0x1823133f6: mov r14, r13
// asm:   0x182313476: mov r14, r13
// asm:   0x1823134f6: mov r14, r13
// asm:   0x1823135f1: mov r9, r13
// asm:   0x18231367c: mov r9, r13
// asm:   0x1823136fe: mov r9, r13
// asm:   0x1823137e1: mov r9, r13
// asm:   0x18231386c: mov r9, r13

Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsAbilityCategory__Groups(MethodInfo *method)

{
  Settings_AbilitySettings_o *pSVar1;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  System_String_o *item;
  System_String_o *title;
  System_String_o *id;
  System_String_o *id_00;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *pGVar4;
  Gisketch_Aottg2UI_Code_AottgComponent_array *pGVar5;
  DG_Tweening_Core_DOGetter_Vector2__o *__this;
  Il2CppObject *pIVar6;
  Il2CppObject *pIVar7;
  Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_o *pGVar8;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *pGVar9;
  Settings_ColorSetting_o *pSVar10;
  Settings_ColorSetting_o *setting;
  
  if (Il2CppMethodInitialized_18434775b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsAbilityCategory_c_Groups_b__2_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsAbilityCategory_c);
    il2cpp_codegen_initialize_runtime_metadata(&"UseOldEffect");
    il2cpp_codegen_initialize_runtime_metadata(&"UnusedPoints");
    il2cpp_codegen_initialize_runtime_metadata(&"Bomb Stats");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ability-bomb-radius");
    il2cpp_codegen_initialize_runtime_metadata(&"Bomb Color");
    il2cpp_codegen_initialize_runtime_metadata(&"Unused Points");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ability-toggles");
    il2cpp_codegen_initialize_runtime_metadata(&"Old Bomb Effect");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ability-bomb-cooldown");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ability-bomb-speed");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ability-bomb-unused-points.value");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ability-bomb-color");
    il2cpp_codegen_initialize_runtime_metadata(&"20");
    il2cpp_codegen_initialize_runtime_metadata(&"Bomb Range");
    il2cpp_codegen_initialize_runtime_metadata(&"Toggles");
    il2cpp_codegen_initialize_runtime_metadata(&"BombColor");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ability-bomb-range");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ability-cursor-cooldown");
    il2cpp_codegen_initialize_runtime_metadata(&"Bouncy Bomb");
    il2cpp_codegen_initialize_runtime_metadata(&"Bomb Cooldown");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ability-bomb-collision");
    il2cpp_codegen_initialize_runtime_metadata(&"Cursor Cooldown");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ability-unused-points");
    il2cpp_codegen_initialize_runtime_metadata(&"Show Bomb Colors");
    il2cpp_codegen_initialize_runtime_metadata(&"ShowBombColors");
    il2cpp_codegen_initialize_runtime_metadata(&"BombCollision");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ability-show-bomb-colors");
    il2cpp_codegen_initialize_runtime_metadata(&"Ability");
    il2cpp_codegen_initialize_runtime_metadata(&"CursorCooldown");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ability-use-old-effect");
    il2cpp_codegen_initialize_runtime_metadata(&"Bomb Radius");
    il2cpp_codegen_initialize_runtime_metadata(&"Bomb Visuals");
    il2cpp_codegen_initialize_runtime_metadata(&"Bomb Speed");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ability-bomb-visuals");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-ability-bomb-stats");
    Il2CppMethodInitialized_18434775b = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->AbilitySettings;
  pGVar4 = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *)
           SZArrayNew(TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array,3);
  pGVar5 = (Gisketch_Aottg2UI_Code_AottgComponent_array *)
           SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array,5);
  if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsAbilityCategory_c->_2).
      cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsAbilityCategory_c);
  }
  id_00 = "settings-ability-unused-points";
  id = "settings-ability-bomb-stats";
  title = "Bomb Stats";
  item = "UnusedPoints";
  pSVar3 = "Unused Points";
  pSVar2 = "Ability";
  __this = (DG_Tweening_Core_DOGetter_Vector2__o *)
           TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsAbilityCategory_c->static_fields->__9__2_0;
  if (__this == (DG_Tweening_Core_DOGetter_Vector2__o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsAbilityCategory_c->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsAbilityCategory_c);
    }
    pIVar6 = (Il2CppObject *)
             TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsAbilityCategory_c->static_fields->__9;
    __this = (DG_Tweening_Core_DOGetter_Vector2__o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string);
    System_Func_object____ctor
              (__this,pIVar6,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsAbilityCategory_c_Groups_b__2_0,
               (MethodInfo_1387740 *)0x0);
    TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsAbilityCategory_c->static_fields->__9__2_0 =
         (System_Func_string__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsAbilityCategory_c->static_fields->
                __9__2_0,__this);
  }
  pIVar6 = (Il2CppObject *)
           Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Dynamic
                     (id_00,pSVar2,item,pSVar3,(System_Func_string__o *)__this,"20",
                      "settings-ability-bomb-unused-points.value",(System_Func_string__o *)0x0,(MethodInfo *)0x0);
  if (pGVar5 == (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0) goto label_182313928;
  if ((pIVar6 != (Il2CppObject *)0x0) &&
     (pIVar7 = il2cpp_vm_Object_IsInst(pIVar6,(((pGVar5->obj).klass)->_1).element_class),
     pIVar7 == (Il2CppObject *)0x0)) {
    pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
    il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
  }
  if ((int)pGVar5->max_length != 0) {
    pGVar5->m_Items[0] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar6;
    Il2CppCodeGenWriteBarrier(pGVar5->m_Items,pIVar6);
    pSVar3 = "settings-ability-bomb-radius";
    pSVar2 = "Bomb Radius";
    setting = (Settings_ColorSetting_o *)0x0;
    pSVar10 = setting;
    if (pSVar1 != (Settings_AbilitySettings_o *)0x0) {
      pSVar10 = (Settings_ColorSetting_o *)(pSVar1->fields).BombRadius;
    }
    pGVar8 = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow);
    Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow___ctor
              (pGVar8,pSVar3,pSVar2,(Settings_IntSetting_o *)pSVar10,0,(MethodInfo *)0x0);
    if ((pGVar8 != (Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_o *)0x0) &&
       (pIVar6 = il2cpp_vm_Object_IsInst((Il2CppObject *)pGVar8,(((pGVar5->obj).klass)->_1).element_class),
       pIVar6 == (Il2CppObject *)0x0)) {
      pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
    }
    if (1 < (uint)pGVar5->max_length) {
      pGVar5->m_Items[1] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pGVar8;
      Il2CppCodeGenWriteBarrier(pGVar5->m_Items + 1,pGVar8);
      pSVar3 = "settings-ability-bomb-range";
      pSVar2 = "Bomb Range";
      pSVar10 = setting;
      if (pSVar1 != (Settings_AbilitySettings_o *)0x0) {
        pSVar10 = (Settings_ColorSetting_o *)(pSVar1->fields).BombRange;
      }
      pGVar8 = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow);
      Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow___ctor
                (pGVar8,pSVar3,pSVar2,(Settings_IntSetting_o *)pSVar10,1,(MethodInfo *)0x0);
      if ((pGVar8 != (Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_o *)0x0) &&
         (pIVar6 = il2cpp_vm_Object_IsInst((Il2CppObject *)pGVar8,(((pGVar5->obj).klass)->_1).element_class),
         pIVar6 == (Il2CppObject *)0x0)) {
        pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
      }
      if (2 < (uint)pGVar5->max_length) {
        pGVar5->m_Items[2] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pGVar8;
        Il2CppCodeGenWriteBarrier(pGVar5->m_Items + 2,pGVar8);
        pSVar3 = "settings-ability-bomb-speed";
        pSVar2 = "Bomb Speed";
        pSVar10 = setting;
        if (pSVar1 != (Settings_AbilitySettings_o *)0x0) {
          pSVar10 = (Settings_ColorSetting_o *)(pSVar1->fields).BombSpeed;
        }
        pGVar8 = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow);
        Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow___ctor
                  (pGVar8,pSVar3,pSVar2,(Settings_IntSetting_o *)pSVar10,2,(MethodInfo *)0x0);
        if ((pGVar8 != (Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_o *)0x0) &&
           (pIVar6 = il2cpp_vm_Object_IsInst((Il2CppObject *)pGVar8,(((pGVar5->obj).klass)->_1).element_class)
           , pIVar6 == (Il2CppObject *)0x0)) {
          pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
        }
        if (3 < (uint)pGVar5->max_length) {
          pGVar5->m_Items[3] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pGVar8;
          Il2CppCodeGenWriteBarrier(pGVar5->m_Items + 3,pGVar8);
          pSVar3 = "settings-ability-bomb-cooldown";
          pSVar2 = "Bomb Cooldown";
          pSVar10 = setting;
          if (pSVar1 != (Settings_AbilitySettings_o *)0x0) {
            pSVar10 = (Settings_ColorSetting_o *)(pSVar1->fields).BombCooldown;
          }
          pGVar8 = il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow
                             );
          Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow___ctor
                    (pGVar8,pSVar3,pSVar2,(Settings_IntSetting_o *)pSVar10,3,(MethodInfo *)0x0);
          if ((pGVar8 != (Gisketch_Aottg2UI_SettingsScreen_AottgBombStatSettingRow_o *)0x0) &&
             (pIVar6 = il2cpp_vm_Object_IsInst
                                 ((Il2CppObject *)pGVar8,(((pGVar5->obj).klass)->_1).element_class),
             pIVar6 == (Il2CppObject *)0x0)) {
            pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
          }
          if (4 < (uint)pGVar5->max_length) {
            pGVar5->m_Items[4] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pGVar8;
            Il2CppCodeGenWriteBarrier(pGVar5->m_Items + 4,pGVar8);
            pGVar9 = il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup);
            Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup___ctor_231b9f0
                      (pGVar9,id,title,pGVar5,(MethodInfo *)0x0);
            if (pGVar4 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *)0x0) {
label_182313928:
              ThrowNullReferenceException();
            }
            if ((int)pGVar4->max_length != 0) {
              pGVar4->m_Items[0] = pGVar9;
              Il2CppCodeGenWriteBarrier(pGVar4->m_Items,pGVar9);
              pGVar5 = (Gisketch_Aottg2UI_Code_AottgComponent_array *)
                       SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array,3);
              pSVar3 = "settings-ability-bomb-visuals";
              pSVar2 = "Bomb Visuals";
              pSVar10 = setting;
              if (pSVar1 != (Settings_AbilitySettings_o *)0x0) {
                pSVar10 = (pSVar1->fields).BombColor;
              }
              pIVar6 = (Il2CppObject *)
                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Color
                                 ("settings-ability-bomb-color","Ability","BombColor",pSVar10,
                                  "Bomb Color",(System_String_o *)0x0,(System_String_o *)0x0,
                                  (System_Action_GisketchActionContext__o *)0x0,(MethodInfo *)0x0);
              if (pGVar5 == (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0) goto label_182313928;
              if ((pIVar6 != (Il2CppObject *)0x0) &&
                 (pIVar7 = il2cpp_vm_Object_IsInst(pIVar6,(((pGVar5->obj).klass)->_1).element_class),
                 pIVar7 == (Il2CppObject *)0x0)) {
                pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
                il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
              }
              if ((int)pGVar5->max_length != 0) {
                pGVar5->m_Items[0] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar6;
                Il2CppCodeGenWriteBarrier(pGVar5->m_Items,pIVar6);
                pSVar10 = setting;
                if (pSVar1 != (Settings_AbilitySettings_o *)0x0) {
                  pSVar10 = (Settings_ColorSetting_o *)(pSVar1->fields).ShowBombColors;
                }
                pIVar6 = (Il2CppObject *)
                         Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                                   ("settings-ability-show-bomb-colors","Ability","ShowBombColors",
                                    (Settings_BoolSetting_o *)pSVar10,"Show Bomb Colors",
                                    (System_String_o *)0x0,(System_String_o *)0x0,
                                    (System_Action_GisketchActionContext__o *)0x0,(MethodInfo *)0x0);
                if ((pIVar6 != (Il2CppObject *)0x0) &&
                   (pIVar7 = il2cpp_vm_Object_IsInst(pIVar6,(((pGVar5->obj).klass)->_1).element_class),
                   pIVar7 == (Il2CppObject *)0x0)) {
                  pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
                  il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
                }
                if (1 < (uint)pGVar5->max_length) {
                  pGVar5->m_Items[1] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar6;
                  Il2CppCodeGenWriteBarrier(pGVar5->m_Items + 1,pIVar6);
                  pSVar10 = setting;
                  if (pSVar1 != (Settings_AbilitySettings_o *)0x0) {
                    pSVar10 = (Settings_ColorSetting_o *)(pSVar1->fields).UseOldEffect;
                  }
                  pIVar6 = (Il2CppObject *)
                           Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                                     ("settings-ability-use-old-effect","Ability","UseOldEffect",
                                      (Settings_BoolSetting_o *)pSVar10,"Old Bomb Effect",
                                      (System_String_o *)0x0,(System_String_o *)0x0,
                                      (System_Action_GisketchActionContext__o *)0x0,(MethodInfo *)0x0);
                  if ((pIVar6 != (Il2CppObject *)0x0) &&
                     (pIVar7 = il2cpp_vm_Object_IsInst(pIVar6,(((pGVar5->obj).klass)->_1).element_class),
                     pIVar7 == (Il2CppObject *)0x0)) {
                    pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
                    il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
                  }
                  if (2 < (uint)pGVar5->max_length) {
                    pGVar5->m_Items[2] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar6;
                    Il2CppCodeGenWriteBarrier(pGVar5->m_Items + 2,pIVar6);
                    pGVar9 = il2cpp_codegen_object_new
                                       ((Il2CppClass *)
                                        TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup);
                    Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup___ctor_231b9f0
                              (pGVar9,pSVar3,pSVar2,pGVar5,(MethodInfo *)0x0);
                    if (1 < (uint)pGVar4->max_length) {
                      pGVar4->m_Items[1] = pGVar9;
                      Il2CppCodeGenWriteBarrier(pGVar4->m_Items + 1,pGVar9);
                      pGVar5 = (Gisketch_Aottg2UI_Code_AottgComponent_array *)
                               SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array,2);
                      pSVar3 = "settings-ability-toggles";
                      pSVar2 = "Toggles";
                      pSVar10 = setting;
                      if (pSVar1 != (Settings_AbilitySettings_o *)0x0) {
                        pSVar10 = (Settings_ColorSetting_o *)(pSVar1->fields).CursorCooldown;
                      }
                      pIVar6 = (Il2CppObject *)
                               Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                                         ("settings-ability-cursor-cooldown","Ability","CursorCooldown",
                                          (Settings_BoolSetting_o *)pSVar10,"Cursor Cooldown",
                                          (System_String_o *)0x0,(System_String_o *)0x0,
                                          (System_Action_GisketchActionContext__o *)0x0,(MethodInfo *)0x0);
                      if (pGVar5 == (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0) goto label_182313928;
                      if ((pIVar6 != (Il2CppObject *)0x0) &&
                         (pIVar7 = il2cpp_vm_Object_IsInst(pIVar6,(((pGVar5->obj).klass)->_1).element_class),
                         pIVar7 == (Il2CppObject *)0x0)) {
                        pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
                        il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
                      }
                      if ((int)pGVar5->max_length != 0) {
                        pGVar5->m_Items[0] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar6;
                        Il2CppCodeGenWriteBarrier(pGVar5->m_Items,pIVar6);
                        if (pSVar1 != (Settings_AbilitySettings_o *)0x0) {
                          setting = (Settings_ColorSetting_o *)(pSVar1->fields).BombCollision;
                        }
                        pIVar6 = (Il2CppObject *)
                                 Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                                           ("settings-ability-bomb-collision","Ability","BombCollision",
                                            (Settings_BoolSetting_o *)setting,"Bouncy Bomb",
                                            (System_String_o *)0x0,(System_String_o *)0x0,
                                            (System_Action_GisketchActionContext__o *)0x0,(MethodInfo *)0x0);
                        if ((pIVar6 != (Il2CppObject *)0x0) &&
                           (pIVar7 = il2cpp_vm_Object_IsInst(pIVar6,(((pGVar5->obj).klass)->_1).element_class)
                           , pIVar7 == (Il2CppObject *)0x0)) {
                          pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
                          il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
                        }
                        if (1 < (uint)pGVar5->max_length) {
                          pGVar5->m_Items[1] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar6;
                          Il2CppCodeGenWriteBarrier(pGVar5->m_Items + 1,pIVar6);
                          pGVar9 = il2cpp_codegen_object_new
                                             ((Il2CppClass *)
                                              TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup);
                          Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup___ctor_231b9f0
                                    (pGVar9,pSVar3,pSVar2,pGVar5,(MethodInfo *)0x0);
                          if (2 < (uint)pGVar4->max_length) {
                            pGVar4->m_Items[2] = pGVar9;
                            Il2CppCodeGenWriteBarrier(pGVar4->m_Items + 2,pGVar9);
                            return pGVar4;
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
  ThrowIndexOutOfRangeException();
}


