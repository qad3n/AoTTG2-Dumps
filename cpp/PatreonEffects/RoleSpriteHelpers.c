// Type: PatreonEffects.RoleSpriteHelpers
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/PatreonEffects/RoleSpriteHelpers.cs
// Prior real C# source: none
// --------------------------------

// PatreonEffects.RoleSpriteHelpers.<>c$$.cctor
// il2cpp: void PatreonEffects_RoleSpriteHelpers___c___cctor (const MethodInfo* method);
// 0x59cb540

void PatreonEffects_RoleSpriteHelpers___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07545c38 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_RoleSpriteHelpers_c);
    Il2CppMethodInitialized_07545c38 = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_PatreonEffects_RoleSpriteHelpers_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_PatreonEffects_RoleSpriteHelpers_c->static_fields->__9 =
       (PatreonEffects_RoleSpriteHelpers___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_PatreonEffects_RoleSpriteHelpers_c->static_fields->__9);
  return;
}


// PatreonEffects.RoleSpriteHelpers.<>c$$.ctor
// il2cpp: void PatreonEffects_RoleSpriteHelpers___c___ctor (PatreonEffects_RoleSpriteHelpers___c_o* __this, const MethodInfo* method);
// 0x59cb5b0

void PatreonEffects_RoleSpriteHelpers___c___ctor
               (PatreonEffects_RoleSpriteHelpers___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// PatreonEffects.RoleSpriteHelpers.<>c$$<TryReadRoles>b__8_0
// il2cpp: System_String_o* PatreonEffects_RoleSpriteHelpers___c___TryReadRoles_b__8_0 (PatreonEffects_RoleSpriteHelpers___c_o* __this, SimpleJSONFixed_JSONNode_o* item, const MethodInfo* method);
// 0x59cb5c0

System_String_o *
PatreonEffects_RoleSpriteHelpers___c___TryReadRoles_b__8_0
          (PatreonEffects_RoleSpriteHelpers___c_o *__this,SimpleJSONFixed_JSONNode_o *item,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (item == (SimpleJSONFixed_JSONNode_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar1 = (*(item->klass->vtable)._9_get_Value.methodPtr)(item,(item->klass->vtable)._9_get_Value.method);
  return pSVar1;
}


// PatreonEffects.RoleSpriteHelpers.<>c$$<RoleArray>b__9_0
// il2cpp: bool PatreonEffects_RoleSpriteHelpers___c___RoleArray_b__9_0 (PatreonEffects_RoleSpriteHelpers___c_o* __this, System_String_o* role, const MethodInfo* method);
// 0x59cb5f0

bool PatreonEffects_RoleSpriteHelpers___c___RoleArray_b__9_0
               (PatreonEffects_RoleSpriteHelpers___c_o *__this,System_String_o *role,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = System_String__IsNullOrWhiteSpace(role,(MethodInfo *)0x0);
  return !bVar1;
}


// PatreonEffects.RoleSpriteHelpers.<>c__DisplayClass10_0$$.ctor
// il2cpp: void PatreonEffects_RoleSpriteHelpers___c__DisplayClass10_0___ctor (PatreonEffects_RoleSpriteHelpers___c__DisplayClass10_0_o* __this, const MethodInfo* method);
// 0x59caf30

void PatreonEffects_RoleSpriteHelpers___c__DisplayClass10_0___ctor
               (PatreonEffects_RoleSpriteHelpers___c__DisplayClass10_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// PatreonEffects.RoleSpriteHelpers.<>c__DisplayClass10_0$$<TryGetDefinitionByRole>b__0
// il2cpp: bool PatreonEffects_RoleSpriteHelpers___c__DisplayClass10_0___TryGetDefinitionByRole_b__0 (PatreonEffects_RoleSpriteHelpers___c__DisplayClass10_0_o* __this, PatreonEffects_RoleSpriteDefinition_o item, const MethodInfo* method);
// 0x59cb600

bool PatreonEffects_RoleSpriteHelpers___c__DisplayClass10_0___TryGetDefinitionByRole_b__0
               (PatreonEffects_RoleSpriteHelpers___c__DisplayClass10_0_o *__this,
               PatreonEffects_RoleSpriteDefinition_o item,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = System_String__Equals_52ffe30(item.fields.RoleName,(__this->fields).roleName,5,(MethodInfo *)0x0);
  return bVar1;
}


// PatreonEffects.RoleSpriteHelpers.<>c__DisplayClass11_0$$.ctor
// il2cpp: void PatreonEffects_RoleSpriteHelpers___c__DisplayClass11_0___ctor (PatreonEffects_RoleSpriteHelpers___c__DisplayClass11_0_o* __this, const MethodInfo* method);
// 0x59cb060

void PatreonEffects_RoleSpriteHelpers___c__DisplayClass11_0___ctor
               (PatreonEffects_RoleSpriteHelpers___c__DisplayClass11_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// PatreonEffects.RoleSpriteHelpers.<>c__DisplayClass11_0$$<TryGetDefinitionBySpriteIndex>b__0
// il2cpp: bool PatreonEffects_RoleSpriteHelpers___c__DisplayClass11_0___TryGetDefinitionBySpriteIndex_b__0 (PatreonEffects_RoleSpriteHelpers___c__DisplayClass11_0_o* __this, PatreonEffects_RoleSpriteDefinition_o item, const MethodInfo* method);
// 0x59cb620

bool PatreonEffects_RoleSpriteHelpers___c__DisplayClass11_0___TryGetDefinitionBySpriteIndex_b__0
               (PatreonEffects_RoleSpriteHelpers___c__DisplayClass11_0_o *__this,
               PatreonEffects_RoleSpriteDefinition_o item,MethodInfo *method)

{
  return (__this->fields).spriteIndex == item.fields.SpriteIndex;
}


// PatreonEffects.RoleSpriteHelpers.<>c__DisplayClass2_0$$.ctor
// il2cpp: void PatreonEffects_RoleSpriteHelpers___c__DisplayClass2_0___ctor (PatreonEffects_RoleSpriteHelpers___c__DisplayClass2_0_o* __this, const MethodInfo* method);
// 0x59c9dd0

void PatreonEffects_RoleSpriteHelpers___c__DisplayClass2_0___ctor
               (PatreonEffects_RoleSpriteHelpers___c__DisplayClass2_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// PatreonEffects.RoleSpriteHelpers.<>c__DisplayClass2_0$$<GetEligibleRoleSprites>b__0
// il2cpp: bool PatreonEffects_RoleSpriteHelpers___c__DisplayClass2_0___GetEligibleRoleSprites_b__0 (PatreonEffects_RoleSpriteHelpers___c__DisplayClass2_0_o* __this, PatreonEffects_RoleSpriteDefinition_o definition, const MethodInfo* method);
// 0x59cb630

bool PatreonEffects_RoleSpriteHelpers___c__DisplayClass2_0___GetEligibleRoleSprites_b__0
               (PatreonEffects_RoleSpriteHelpers___c__DisplayClass2_0_o *__this,
               PatreonEffects_RoleSpriteDefinition_o definition,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  bool bVar1;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  
  method_00 = definition.fields._8_8_;
  if (Il2CppMethodInitialized_07545c39 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_RoleSpriteHelpers);
    Il2CppMethodInitialized_07545c39 = '\x01';
    method_00 = extraout_RDX;
  }
  player = (__this->fields).player;
  if ((TypeInfo_PatreonEffects_RoleSpriteHelpers->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_RoleSpriteHelpers);
    method_00 = extraout_RDX_00;
  }
  bVar1 = PatreonEffects_RoleSpriteHelpers__HasRole(player,definition.fields.RoleName,method_00);
  return bVar1;
}


// PatreonEffects.RoleSpriteHelpers.<>c__DisplayClass3_0$$.ctor
// il2cpp: void PatreonEffects_RoleSpriteHelpers___c__DisplayClass3_0___ctor (PatreonEffects_RoleSpriteHelpers___c__DisplayClass3_0_o* __this, const MethodInfo* method);
// 0x59c9f00

void PatreonEffects_RoleSpriteHelpers___c__DisplayClass3_0___ctor
               (PatreonEffects_RoleSpriteHelpers___c__DisplayClass3_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// PatreonEffects.RoleSpriteHelpers.<>c__DisplayClass3_0$$<HasRole>b__0
// il2cpp: bool PatreonEffects_RoleSpriteHelpers___c__DisplayClass3_0___HasRole_b__0 (PatreonEffects_RoleSpriteHelpers___c__DisplayClass3_0_o* __this, System_String_o* role, const MethodInfo* method);
// 0x59cb690

bool PatreonEffects_RoleSpriteHelpers___c__DisplayClass3_0___HasRole_b__0
               (PatreonEffects_RoleSpriteHelpers___c__DisplayClass3_0_o *__this,System_String_o *role,
               MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = System_String__Equals_52ffe30(role,(__this->fields).roleName,5,(MethodInfo *)0x0);
  return bVar1;
}


// PatreonEffects.RoleSpriteHelpers.<>c__DisplayClass6_0$$.ctor
// il2cpp: void PatreonEffects_RoleSpriteHelpers___c__DisplayClass6_0___ctor (PatreonEffects_RoleSpriteHelpers___c__DisplayClass6_0_o* __this, const MethodInfo* method);
// 0x59ca580

void PatreonEffects_RoleSpriteHelpers___c__DisplayClass6_0___ctor
               (PatreonEffects_RoleSpriteHelpers___c__DisplayClass6_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// PatreonEffects.RoleSpriteHelpers.<>c__DisplayClass6_0$$<SanitizePlayerText>b__0
// il2cpp: System_String_o* PatreonEffects_RoleSpriteHelpers___c__DisplayClass6_0___SanitizePlayerText_b__0 (PatreonEffects_RoleSpriteHelpers___c__DisplayClass6_0_o* __this, System_Text_RegularExpressions_Match_o* match, const MethodInfo* method);
// 0x59cb6b0

System_String_o *
PatreonEffects_RoleSpriteHelpers___c__DisplayClass6_0___SanitizePlayerText_b__0
          (PatreonEffects_RoleSpriteHelpers___c__DisplayClass6_0_o *__this,
          System_Text_RegularExpressions_Match_o *match,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  int32_t spriteIndex;
  bool bVar1;
  System_Text_RegularExpressions_GroupCollection_o *__this_00;
  System_Text_RegularExpressions_Group_o *__this_01;
  System_String_o *pSVar2;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *pMVar3;
  int32_t iStack_3c;
  PatreonEffects_RoleSpriteDefinition_o PStack_38;
  
  if (Il2CppMethodInitialized_07545c3a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_RoleSpriteHelpers);
    Il2CppMethodInitialized_07545c3a = '\x01';
  }
  iStack_3c = 0;
  PStack_38.fields.RoleName = (System_String_o *)0x0;
  PStack_38.fields.SpriteIndex = 0;
  PStack_38.fields._12_4_ = 0;
  if (((match == (System_Text_RegularExpressions_Match_o *)0x0) ||
      (__this_00 = (*(match->klass->vtable)._5_get_Groups.methodPtr)
                             (match,(match->klass->vtable)._5_get_Groups.method),
      __this_00 == (System_Text_RegularExpressions_GroupCollection_o *)0x0)) ||
     (__this_01 = System_Text_RegularExpressions_GroupCollection__get_Item(__this_00,1,(MethodInfo *)0x0),
     __this_01 == (System_Text_RegularExpressions_Group_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pSVar2 = System_Text_RegularExpressions_Capture__get_Value
                     ((System_Text_RegularExpressions_Capture_o *)__this_01,(MethodInfo *)0x0);
  bVar1 = System_Int32__TryParse(pSVar2,&iStack_3c,(MethodInfo *)0x0);
  spriteIndex = iStack_3c;
  if (bVar1) {
    pMVar3 = extraout_RDX;
    if ((TypeInfo_PatreonEffects_RoleSpriteHelpers->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_RoleSpriteHelpers);
      pMVar3 = extraout_RDX_00;
    }
    bVar1 = PatreonEffects_RoleSpriteHelpers__TryGetDefinitionBySpriteIndex(spriteIndex,&PStack_38,pMVar3);
    pSVar2 = PStack_38.fields.RoleName;
    if (bVar1) {
      player = (__this->fields).player;
      pMVar3 = extraout_RDX_01;
      if ((TypeInfo_PatreonEffects_RoleSpriteHelpers->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_RoleSpriteHelpers);
        pMVar3 = extraout_RDX_02;
      }
      bVar1 = PatreonEffects_RoleSpriteHelpers__HasRole(player,pSVar2,pMVar3);
      if (bVar1) {
        pSVar2 = System_Text_RegularExpressions_Capture__get_Value
                           ((System_Text_RegularExpressions_Capture_o *)match,(MethodInfo *)0x0);
        return pSVar2;
      }
    }
  }
  return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
}


// PatreonEffects.RoleSpriteHelpers$$GetEligibleRoleSprites
// il2cpp: System_Collections_Generic_IEnumerable_RoleSpriteDefinition__o* PatreonEffects_RoleSpriteHelpers__GetEligibleRoleSprites (Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x59c9cd0

System_Collections_Generic_IEnumerable_RoleSpriteDefinition__o *
PatreonEffects_RoleSpriteHelpers__GetEligibleRoleSprites(Photon_Realtime_Player_o *player,MethodInfo *method)

{
  PatreonEffects_RoleSpriteDefinition_array *source;
  PatreonEffects_RoleSpriteHelpers___c__DisplayClass2_0_o *__this;
  System_Func_RoleSpriteDefinition__bool__o *__this_00;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar1;
  
  if (Il2CppMethodInitialized_07545c2d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Where_RoleSpriteDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_RoleSpriteDefinition_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_RoleSpriteHelpers);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_PatreonEffects_RoleSpriteHelpers_c__DisplayClass2_0_GetEligibleRoleSprites_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_RoleSpriteHelpers_c__DisplayClass2_0);
    Il2CppMethodInitialized_07545c2d = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_PatreonEffects_RoleSpriteHelpers_c__DisplayClass2_0);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this == (PatreonEffects_RoleSpriteHelpers___c__DisplayClass2_0_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this->fields).player = player;
  Il2CppCodeGenWriteBarrier(&(__this->fields).player);
  if ((TypeInfo_PatreonEffects_RoleSpriteHelpers->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_RoleSpriteHelpers);
  }
  source = TypeInfo_PatreonEffects_RoleSpriteHelpers->static_fields->Definitions;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_RoleSpriteDefinition_bool);
  System_Func_RoleSpriteDefinition__bool____ctor
            (__this_00,(Il2CppObject *)__this,
             (intptr_t)
             MethodInfo_PatreonEffects_RoleSpriteHelpers_c__DisplayClass2_0_GetEligibleRoleSprites_b__0,
             (MethodInfo_4F1A950 *)0x0);
  pSVar1 = System_Linq_Enumerable__Where_RoleSpriteDefinition_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                      (System_Func_TSource__bool__o *)__this_00,
                      (MethodInfo_35031C0 *)MethodInfo_System_Linq_Enumerable_Where_RoleSpriteDefinition);
  return (System_Collections_Generic_IEnumerable_RoleSpriteDefinition__o *)pSVar1;
}


// PatreonEffects.RoleSpriteHelpers$$HasRole
// il2cpp: bool PatreonEffects_RoleSpriteHelpers__HasRole (Photon_Realtime_Player_o* player, System_String_o* roleName, const MethodInfo* method);
// 0x59c9de0

bool PatreonEffects_RoleSpriteHelpers__HasRole
               (Photon_Realtime_Player_o *player,System_String_o *roleName,MethodInfo *method)

{
  bool bVar1;
  PatreonEffects_RoleSpriteHelpers___c__DisplayClass3_0_o *__this;
  System_Collections_Generic_IEnumerable_string__o *source;
  System_Func_string__bool__o *__this_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07545c2e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Any_string_71a8218);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_RoleSpriteHelpers);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_PatreonEffects_RoleSpriteHelpers_c__DisplayClass3_0_HasRole_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_RoleSpriteHelpers_c__DisplayClass3_0);
    Il2CppMethodInitialized_07545c2e = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_PatreonEffects_RoleSpriteHelpers_c__DisplayClass3_0);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this == (PatreonEffects_RoleSpriteHelpers___c__DisplayClass3_0_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this->fields).roleName = roleName;
  Il2CppCodeGenWriteBarrier(&(__this->fields).roleName);
  method_00 = (MethodInfo *)0x0;
  bVar1 = System_String__IsNullOrEmpty((__this->fields).roleName,(MethodInfo *)0x0);
  if (bVar1) {
    return false;
  }
  if ((TypeInfo_PatreonEffects_RoleSpriteHelpers->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_RoleSpriteHelpers);
  }
  source = PatreonEffects_RoleSpriteHelpers__GetRoles(player,method_00);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_bool);
  System_Func_object__bool____ctor
            ((System_Func_object__bool__o *)__this_00,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_PatreonEffects_RoleSpriteHelpers_c__DisplayClass3_0_HasRole_b__0,
             (MethodInfo_4F19300 *)0x0);
  bVar1 = System_Linq_Enumerable__Any_object__34dfce0
                    ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                     (System_Func_TSource__bool__o *)__this_00,
                     (MethodInfo_34DFCE0 *)MethodInfo_System_Linq_Enumerable_Any_string_71a8218);
  return bVar1;
}


// PatreonEffects.RoleSpriteHelpers$$ComposeGuildWithRoleSprite
// il2cpp: System_String_o* PatreonEffects_RoleSpriteHelpers__ComposeGuildWithRoleSprite (Photon_Realtime_Player_o* player, System_String_o* guildText, System_String_o* selectedRoleName, const MethodInfo* method);
// 0x59ca0f0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59ca200: mov r14, rbx
// asm:   0x59ca203: jmp 0x59ca21f

System_String_o *
PatreonEffects_RoleSpriteHelpers__ComposeGuildWithRoleSprite
          (Photon_Realtime_Player_o *player,System_String_o *guildText,System_String_o *selectedRoleName,
          MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *arg0;
  System_String_o *str0;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *pMVar2;
  int32_t local_3c;
  PatreonEffects_RoleSpriteDefinition_o local_38;
  
  if (Il2CppMethodInitialized_07545c2f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_RoleSpriteHelpers);
    il2cpp_codegen_initialize_runtime_metadata(&" ");
    il2cpp_codegen_initialize_runtime_metadata(&"<sprite={0}>");
    Il2CppMethodInitialized_07545c2f = '\x01';
  }
  local_38.fields.RoleName = (System_String_o *)0x0;
  local_38.fields.SpriteIndex = 0;
  local_38.fields._12_4_ = 0;
  if (guildText == (System_String_o *)0x0) {
    guildText = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  bVar1 = System_String__IsNullOrEmpty(selectedRoleName,(MethodInfo *)0x0);
  str0 = guildText;
  if (!bVar1) {
    pMVar2 = extraout_RDX;
    if ((TypeInfo_PatreonEffects_RoleSpriteHelpers->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_RoleSpriteHelpers);
      pMVar2 = extraout_RDX_00;
    }
    bVar1 = PatreonEffects_RoleSpriteHelpers__TryGetDefinitionByRole(selectedRoleName,&local_38,pMVar2);
    if (bVar1) {
      pMVar2 = extraout_RDX_01;
      if ((TypeInfo_PatreonEffects_RoleSpriteHelpers->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_RoleSpriteHelpers);
        pMVar2 = extraout_RDX_02;
      }
      bVar1 = PatreonEffects_RoleSpriteHelpers__HasRole(player,selectedRoleName,pMVar2);
      if (bVar1) {
        local_3c = local_38.fields.SpriteIndex;
        arg0 = il2cpp_vm_Object_Box(g_data_07556710,&local_3c);
        str0 = System_String__Format("<sprite={0}>",arg0,(MethodInfo *)0x0);
        bVar1 = System_String__IsNullOrEmpty(guildText,(MethodInfo *)0x0);
        if (!bVar1) {
          str0 = System_String__Concat_5301f10(str0," ",guildText,(MethodInfo *)0x0);
        }
      }
    }
  }
  return str0;
}


// PatreonEffects.RoleSpriteHelpers$$GetRoleSpriteDisplayText
// il2cpp: System_String_o* PatreonEffects_RoleSpriteHelpers__GetRoleSpriteDisplayText (System_String_o* selectedRoleName, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x59ca360

System_String_o *
PatreonEffects_RoleSpriteHelpers__GetRoleSpriteDisplayText
          (System_String_o *selectedRoleName,Photon_Realtime_Player_o *player,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *arg0;
  System_String_o *pSVar2;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *pMVar3;
  int32_t iStack_2c;
  PatreonEffects_RoleSpriteDefinition_o PStack_28;
  
  if (Il2CppMethodInitialized_07545c30 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_RoleSpriteHelpers);
    il2cpp_codegen_initialize_runtime_metadata(&"<sprite={0}> {1}");
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    Il2CppMethodInitialized_07545c30 = '\x01';
  }
  PStack_28.fields.RoleName = (System_String_o *)0x0;
  PStack_28.fields.SpriteIndex = 0;
  PStack_28.fields._12_4_ = 0;
  bVar1 = System_String__IsNullOrEmpty(selectedRoleName,(MethodInfo *)0x0);
  if (!bVar1) {
    pMVar3 = extraout_RDX;
    if ((TypeInfo_PatreonEffects_RoleSpriteHelpers->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_RoleSpriteHelpers);
      pMVar3 = extraout_RDX_00;
    }
    bVar1 = PatreonEffects_RoleSpriteHelpers__TryGetDefinitionByRole(selectedRoleName,&PStack_28,pMVar3);
    if (bVar1) {
      pMVar3 = extraout_RDX_01;
      if ((TypeInfo_PatreonEffects_RoleSpriteHelpers->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_RoleSpriteHelpers);
        pMVar3 = extraout_RDX_02;
      }
      bVar1 = PatreonEffects_RoleSpriteHelpers__HasRole(player,selectedRoleName,pMVar3);
      if (bVar1) {
        iStack_2c = PStack_28.fields.SpriteIndex;
        arg0 = il2cpp_vm_Object_Box(g_data_07556710,&iStack_2c);
        pSVar2 = System_String__Format_5302c50
                           ("<sprite={0}> {1}",arg0,(Il2CppObject *)PStack_28.fields.RoleName,
                            (MethodInfo *)0x0);
        return pSVar2;
      }
    }
  }
  return "None";
}


// PatreonEffects.RoleSpriteHelpers$$SanitizePlayerText
// il2cpp: System_String_o* PatreonEffects_RoleSpriteHelpers__SanitizePlayerText (Photon_Realtime_Player_o* player, System_String_o* text, const MethodInfo* method);
// 0x59ca460

System_String_o *
PatreonEffects_RoleSpriteHelpers__SanitizePlayerText
          (Photon_Realtime_Player_o *player,System_String_o *text,MethodInfo *method)

{
  System_Text_RegularExpressions_Regex_o *__this;
  bool bVar1;
  PatreonEffects_RoleSpriteHelpers___c__DisplayClass6_0_o *__this_00;
  System_Text_RegularExpressions_MatchEvaluator_o *__this_01;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_07545c31 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_RegularExpressions_MatchEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_RoleSpriteHelpers);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_PatreonEffects_RoleSpriteHelpers_c__DisplayClass6_0_SanitizePlayerText_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_RoleSpriteHelpers_c__DisplayClass6_0);
    Il2CppMethodInitialized_07545c31 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_PatreonEffects_RoleSpriteHelpers_c__DisplayClass6_0);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 != (PatreonEffects_RoleSpriteHelpers___c__DisplayClass6_0_o *)0x0) {
    (__this_00->fields).player = player;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).player);
    bVar1 = System_String__IsNullOrEmpty(text,(MethodInfo *)0x0);
    if (bVar1) {
      return text;
    }
    if ((TypeInfo_PatreonEffects_RoleSpriteHelpers->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_RoleSpriteHelpers);
    }
    __this = TypeInfo_PatreonEffects_RoleSpriteHelpers->static_fields->SpriteTagRegex;
    __this_01 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Text_RegularExpressions_MatchEvaluator);
    System_Text_RegularExpressions_MatchEvaluator___ctor
              (__this_01,(Il2CppObject *)__this_00,
               (intptr_t)
               MethodInfo_PatreonEffects_RoleSpriteHelpers_c__DisplayClass6_0_SanitizePlayerText_b__0,
               (MethodInfo *)0x0);
    if (__this != (System_Text_RegularExpressions_Regex_o *)0x0) {
      pSVar2 = System_Text_RegularExpressions_Regex__Replace_61e3fe0(__this,text,__this_01,(MethodInfo *)0x0);
      return pSVar2;
    }
  }
  ThrowNullReferenceException();
}


// PatreonEffects.RoleSpriteHelpers$$GetRoles
// il2cpp: System_Collections_Generic_IEnumerable_string__o* PatreonEffects_RoleSpriteHelpers__GetRoles (Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x59c9f10
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59c9fec: jmp 0x59ca05a
// asm:   0x59ca014: jmp 0x59ca05a
// asm:   0x59ca027: jmp 0x59ca05a
// asm:   0x59ca0ee: jmp 0x59ca09c

System_Collections_Generic_IEnumerable_string__o *
PatreonEffects_RoleSpriteHelpers__GetRoles(Photon_Realtime_Player_o *player,MethodInfo *method)

{
  byte bVar1;
  uint32_t uVar2;
  bool bVar3;
  Il2CppObject *raw;
  System_String_array *pSVar4;
  Il2CppClass *pIVar5;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar6;
  System_String_array *local_18;
  
  if (Il2CppMethodInitialized_07545c32 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_Empty_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_RoleSpriteHelpers);
    Il2CppMethodInitialized_07545c32 = '\x01';
  }
  local_18 = (System_String_array *)0x0;
  if (player == (Photon_Realtime_Player_o *)0x0) {
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
      pSVar4 = ApplicationManagers_AccountManager__get_Roles((MethodInfo *)0x0);
    }
    else {
      pSVar4 = ApplicationManagers_AccountManager__get_Roles((MethodInfo *)0x0);
    }
    if (pSVar4 != (System_String_array *)0x0) {
      return (System_Collections_Generic_IEnumerable_string__o *)pSVar4;
    }
  }
  else {
    if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
    }
    raw = PhotonExtensions__GetCustomProperty
                    (player,TypeInfo_GameManagers_PlayerProperty->static_fields->AuthoritativeRoles,
                     (MethodInfo *)0x0);
    pMVar6 = extraout_RDX;
    if ((TypeInfo_PatreonEffects_RoleSpriteHelpers->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_RoleSpriteHelpers);
      pMVar6 = extraout_RDX_00;
    }
    bVar3 = PatreonEffects_RoleSpriteHelpers__TryReadRoles(raw,&local_18,pMVar6);
    if (bVar3) {
      return (System_Collections_Generic_IEnumerable_string__o *)local_18;
    }
    if ((player->fields).IsLocal != false) {
      if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
        pSVar4 = ApplicationManagers_AccountManager__get_Roles((MethodInfo *)0x0);
      }
      else {
        pSVar4 = ApplicationManagers_AccountManager__get_Roles((MethodInfo *)0x0);
      }
      if (pSVar4 != (System_String_array *)0x0) {
        if ((((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager)->_2).cctor_finished_or_no_cctor == 0
           ) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
        }
        pSVar4 = ApplicationManagers_AccountManager__get_Roles((MethodInfo *)0x0);
        return (System_Collections_Generic_IEnumerable_string__o *)pSVar4;
      }
    }
  }
  pMVar6 = MethodInfo_System_Array_Empty_string;
  if ((MethodInfo_System_Array_Empty_string->field7_0x38).methodMetadataHandle == (void *)0x0) {
    il2cpp_codegen_rgctx_method_init(MethodInfo_System_Array_Empty_string);
    pIVar5 = *(Il2CppClass **)((long)(pMVar6->field7_0x38).methodMetadataHandle + 0x10);
    bVar1 = (pIVar5->_2).bitflags1;
  }
  else {
    pIVar5 = *(Il2CppClass **)
              ((long)(MethodInfo_System_Array_Empty_string->field7_0x38).methodMetadataHandle + 0x10);
    bVar1 = (pIVar5->_2).bitflags1;
  }
  if ((bVar1 & 1) == 0) {
    pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
    uVar2 = (pIVar5->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (pIVar5->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init(pIVar5);
    pIVar5 = (pMVar6->field7_0x38).rgctx_data[2].klass;
    bVar1 = (pIVar5->_2).bitflags1;
  }
  else {
    pIVar5 = (pMVar6->field7_0x38).rgctx_data[2].klass;
    bVar1 = (pIVar5->_2).bitflags1;
  }
  if ((bVar1 & 1) == 0) {
    pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
  }
  return *(System_Collections_Generic_IEnumerable_string__o **)pIVar5->static_fields;
}


// PatreonEffects.RoleSpriteHelpers$$TryReadRoles
// il2cpp: bool PatreonEffects_RoleSpriteHelpers__TryReadRoles (Il2CppObject* raw, System_String_array** roles, const MethodInfo* method);
// 0x59ca590
// eh: try 0x59ca731..0x59ca888 -> pad 0x59cac6b (+10 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: runtime default class]
// eh: try 0x59ca9a7..0x59cac43 -> pad 0x59cacf4 (+8 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x59cac50..0x59cac55 -> pad 0x59cac67 catch Il2CppExceptionWrapper, cleanup [managed catch: runtime default class]
// eh: try 0x59cac8c..0x59cace4 -> pad 0x59cace4 (+1 call sites) cleanup
// eh: try 0x59cace7..0x59cacec -> pad 0x59cad36 catch (...) [compiler noexcept guard]
// eh: try 0x59cad17..0x59cad1c -> pad 0x59cad21 cleanup
// eh: try 0x59cad24..0x59cad2e -> pad 0x59cad36 catch (...) [compiler noexcept guard]
// asm: 81 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59ca6ac: jmp 0x59ca6e9
// asm:   0x59ca91f: nop 
// asm:   0x59ca985: lea r13, [rip + 0x18aea6c]  ; TypeInfo_System_Collections_IEnumerator
// asm:   0x59ca98c: xor r15d, r15d
// asm:   0x59ca98f: lea rbp, [rip + 0x18cbfc2]  ; MethodInfo_System_Collections_Generic_List_string_Add
// asm:   0x59ca996: jmp 0x59ca9cd
// asm:   0x59ca9c0: mov rbx, qword ptr [rsp]
// asm:   0x59ca9c4: test rbx, rbx
// asm:   0x59ca9c7: je 0x59cac34
// asm:   0x59ca9ed: nop dword ptr [rax]
// asm:   0x59cac43: mov rdi, r15
// asm:   0x59cac46: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x59cac55: jmp 0x59cac6b
// asm:   0x59cac57: jmp 0x59cac6b
// asm:   0x59cac59: jmp 0x59cac6b
// asm:   0x59cac5b: jmp 0x59cac6b
// asm:   0x59cac5d: jmp 0x59cac6b
// asm:   0x59cac5f: jmp 0x59cac6b
// asm:   0x59cac61: jmp 0x59cac6b
// asm:   0x59cac63: jmp 0x59cac6b
// asm:   0x59cac65: jmp 0x59cac6b
// asm:   0x59cac67: jmp 0x59cac6b
// asm:   0x59cac69: jmp 0x59cac6b
// asm:   0x59cac6b: mov r15, rax
// asm:   0x59cac6e: cmp edx, 1
// asm:   0x59cac71: jne 0x59cad2e
// asm:   0x59cac77: mov rdi, r15
// asm:   0x59cac7a: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x59cac7f: mov rbx, rax
// asm:   0x59cac82: mov rdi, qword ptr [r13 + 0x10]
// asm:   0x59cac86: mov rax, qword ptr [rax]
// asm:   0x59cac89: mov rsi, qword ptr [rax]
// asm:   0x59cac8c: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x59cac91: test al, al
// asm:   0x59cac93: je 0x59cacc3
// asm:   0x59cac95: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x59cac9a: lea rdi, [rip + 0x18d682f]  ; MethodInfo_System_Array_Empty_string
// asm:   0x59caca1: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x59caca6: mov rdi, rax
// asm:   0x59caca9: call 0x2fa32d0  ; il2cpp_runtime_helper_02fa32d0()
// asm:   0x59cacae: mov qword ptr [r14], rax
// asm:   0x59cacb1: mov rdi, r14
// asm:   0x59cacb4: mov rsi, rax
// asm:   0x59cacb7: call 0x30d5fb0  ; Il2CppCodeGenWriteBarrier()
// asm:   0x59cacbc: xor eax, eax
// asm:   0x59cacbe: jmp 0x59cac23
// asm:   0x59cacc3: mov edi, 8
// asm:   0x59cacc8: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x59caccd: mov rcx, qword ptr [rbx]
// asm:   0x59cacd0: mov qword ptr [rax], rcx
// asm:   0x59cacd3: lea rsi, [rip + 0x1462826]
// asm:   0x59cacda: mov rdi, rax
// asm:   0x59cacdd: xor edx, edx
// asm:   0x59cacdf: call 0x6e255c0  ; __cxa_throw()
// asm:   0x59cace4: mov r15, rax
// asm:   0x59cace7: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x59cacec: jmp 0x59cad2e
// asm:   0x59cacee: jmp 0x59cacfc
// asm:   0x59cacf0: jmp 0x59cacfc
// asm:   0x59cacf2: jmp 0x59cacfc
// asm:   0x59cacf4: jmp 0x59cacfc
// asm:   0x59cacf6: jmp 0x59cacfc
// asm:   0x59cacf8: jmp 0x59cacfc
// asm:   0x59cacfa: jmp 0x59cacfc
// asm:   0x59cacfc: mov r15, rax
// asm:   0x59cacff: cmp edx, 1
// asm:   0x59cad02: jne 0x59cad24
// asm:   0x59cad04: mov rdi, r15
// asm:   0x59cad07: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x59cad0c: mov r15, qword ptr [rax]
// asm:   0x59cad0f: mov qword ptr [rsp + 0x10], r15
// asm:   0x59cad14: xor r13d, r13d
// asm:   0x59cad17: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x59cad1c: jmp 0x59cab5a
// asm:   0x59cad21: mov r15, rax
// asm:   0x59cad24: lea rdi, [rsp + 0x10]
// asm:   0x59cad29: call 0x2fd5560  ; il2cpp_runtime_helper_02fd5560()
// asm:   0x59cad2e: mov rdi, r15
// asm:   0x59cad31: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x59cad36: mov rdi, rax
// asm:   0x59cad39: call 0x2ab61e0  ; __clang_call_terminate()

bool PatreonEffects_RoleSpriteHelpers__TryReadRoles
               (Il2CppObject *raw,System_String_array **roles,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  MethodInfo *pMVar5;
  bool bVar6;
  char cVar7;
  Il2CppClass *pIVar8;
  SimpleJSONFixed_JSONNode_o *a;
  System_Collections_Generic_IEnumerable_JSONNode__o *source;
  PatreonEffects_RoleSpriteHelpers___c_StaticFields *pPVar9;
  System_Func_JSONNode__string__o *__this;
  System_Collections_Generic_IEnumerable_TResult__o *roles_00;
  System_String_array *pSVar10;
  Il2CppObject *pIVar11;
  System_Collections_Generic_List_string__o *__this_00;
  VirtualInvokeData *pVVar12;
  Il2CppObject *pIVar13;
  System_String_o *pSVar14;
  ulong uVar15;
  System_IDisposable_c *method_00;
  long lVar16;
  Il2CppObject *local_58;
  Il2CppObject *local_50;
  undefined8 local_48;
  undefined1 *local_40;
  Il2CppObject **local_38;
  
  if (Il2CppMethodInitialized_07545c33 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_Empty_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Select_JSONNode_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_JSONNode_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_RoleSpriteHelpers);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_PatreonEffects_RoleSpriteHelpers_c_TryReadRoles_b__8_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_RoleSpriteHelpers_c);
    Il2CppMethodInitialized_07545c33 = '\x01';
  }
  pMVar5 = MethodInfo_System_Array_Empty_string;
  local_58 = (Il2CppObject *)0x0;
  local_50 = (Il2CppObject *)0x0;
  if ((MethodInfo_System_Array_Empty_string->field7_0x38).methodMetadataHandle == (void *)0x0) {
    il2cpp_codegen_rgctx_method_init(MethodInfo_System_Array_Empty_string);
    pIVar8 = *(Il2CppClass **)((long)(pMVar5->field7_0x38).methodMetadataHandle + 0x10);
    if (((pIVar8->_2).bitflags1 & 1) == 0) goto label_059ca685;
label_059ca6c7:
    if ((pIVar8->_2).cctor_finished_or_no_cctor == 0) goto label_059ca696;
label_059ca6d0:
    pIVar8 = (pMVar5->field7_0x38).rgctx_data[2].klass;
    bVar2 = (pIVar8->_2).bitflags1;
  }
  else {
    pIVar8 = *(Il2CppClass **)
              ((long)(MethodInfo_System_Array_Empty_string->field7_0x38).methodMetadataHandle + 0x10);
    if (((pIVar8->_2).bitflags1 & 1) != 0) goto label_059ca6c7;
label_059ca685:
    pIVar8 = il2cpp_codegen_class_init_checked(pIVar8);
    if ((pIVar8->_2).cctor_finished_or_no_cctor != 0) goto label_059ca6d0;
label_059ca696:
    il2cpp_codegen_runtime_class_init(pIVar8);
    pIVar8 = (pMVar5->field7_0x38).rgctx_data[2].klass;
    bVar2 = (pIVar8->_2).bitflags1;
  }
  if ((bVar2 & 1) == 0) {
    pIVar8 = il2cpp_codegen_class_init_checked(pIVar8);
  }
  *roles = *(System_String_array **)pIVar8->static_fields;
  Il2CppCodeGenWriteBarrier(roles);
  if (raw == (Il2CppObject *)0x0) {
    pIVar11 = il2cpp_vm_Object_IsInst
                        ((Il2CppObject *)0x0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerable);
    if (pIVar11 != (Il2CppObject *)0x0) goto label_059ca8d5;
  }
  else {
    if ((raw->klass == g_data_07556758) &&
       (bVar6 = System_String__IsNullOrEmpty((System_String_o *)raw,(MethodInfo *)0x0), !bVar6)) {
      a = SimpleJSONFixed_JSON__Parse((System_String_o *)raw,(MethodInfo *)0x0);
      if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
      }
      bVar6 = SimpleJSONFixed_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if (bVar6) {
        if (a == (SimpleJSONFixed_JSONNode_o *)0x0) {
          ThrowNullReferenceException();
        }
        bVar6 = (*(a->klass->vtable)._16_get_IsArray.methodPtr)(a,(a->klass->vtable)._16_get_IsArray.method);
        if (bVar6) {
          source = (*(a->klass->vtable)._27_get_Children.methodPtr)
                             (a,(a->klass->vtable)._27_get_Children.method);
          if ((TypeInfo_PatreonEffects_RoleSpriteHelpers_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_RoleSpriteHelpers_c);
          }
          pPVar9 = TypeInfo_PatreonEffects_RoleSpriteHelpers_c->static_fields;
          __this = pPVar9->__9__8_0;
          if (__this == (System_Func_JSONNode__string__o *)0x0) {
            if ((TypeInfo_PatreonEffects_RoleSpriteHelpers_c->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_RoleSpriteHelpers_c);
              pPVar9 = TypeInfo_PatreonEffects_RoleSpriteHelpers_c->static_fields;
            }
            pIVar11 = (Il2CppObject *)pPVar9->__9;
            __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_JSONNode_string);
            System_Func_object__object____ctor
                      ((System_Func_object__object__o *)__this,pIVar11,
                       (intptr_t)MethodInfo_PatreonEffects_RoleSpriteHelpers_c_TryReadRoles_b__8_0,
                       (MethodInfo_4F19B50 *)0x0);
            pPVar9 = TypeInfo_PatreonEffects_RoleSpriteHelpers_c->static_fields;
            pPVar9->__9__8_0 = __this;
            Il2CppCodeGenWriteBarrier(&pPVar9->__9__8_0);
          }
          roles_00 = System_Linq_Enumerable__Select_object__object_
                               ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                                (System_Func_TSource__TResult__o *)__this,
                                (MethodInfo_34F60F0 *)MethodInfo_System_Linq_Enumerable_Select_JSONNode_string
                               );
          if ((TypeInfo_PatreonEffects_RoleSpriteHelpers->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_RoleSpriteHelpers);
          }
          pSVar10 = PatreonEffects_RoleSpriteHelpers__RoleArray
                              ((System_Collections_Generic_IEnumerable_string__o *)roles_00,
                               (MethodInfo *)__this);
          *roles = pSVar10;
          Il2CppCodeGenWriteBarrier(roles);
          pSVar10 = *roles;
          if (pSVar10 == (System_String_array *)0x0) {
            ThrowNullReferenceException();
          }
label_059cac1c:
          return (int)pSVar10->max_length != 0;
        }
      }
    }
    pIVar11 = il2cpp_vm_Object_IsInst(raw,(Il2CppClass *)TypeInfo_System_Collections_IEnumerable);
    if ((pIVar11 != (Il2CppObject *)0x0) && ((raw == (Il2CppObject *)0x0 || (raw->klass != g_data_07556758)))) {
label_059ca8d5:
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
      System_Collections_Generic_List_object____ctor
                ((System_Collections_Generic_List_object__o *)__this_00,
                 (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
      pIVar8 = pIVar11->klass;
      uVar15 = (ulong)(pIVar8->_2).interface_offsets_count;
      if (uVar15 != 0) {
        pIVar4 = (pIVar8->_1).interfaceOffsets;
        lVar16 = 0;
        do {
          if (*(System_Collections_IEnumerable_c **)((long)&pIVar4->interfaceType + lVar16) ==
              TypeInfo_System_Collections_IEnumerable) {
            pVVar12 = pIVar8->vtable + *(int *)((long)&pIVar4->offset + lVar16);
            goto label_059ca951;
          }
          lVar16 = lVar16 + 0x10;
        } while (uVar15 * 0x10 != lVar16);
      }
      pVVar12 = GetInterfaceInvokeDataFromVTableSlowPath
                          (pIVar11,(Il2CppClass *)TypeInfo_System_Collections_IEnumerable,0);
label_059ca951:
      pIVar11 = (Il2CppObject *)(*pVVar12->methodPtr)(pIVar11,pVVar12->method);
      local_48 = 0;
      local_38 = &local_50;
      local_40 = (undefined1 *)&local_58;
joined_r0x059ca97f:
      do {
        do {
          local_58 = pIVar11;
          if (pIVar11 == (Il2CppObject *)0x0) {
            ThrowNullReferenceException();
          }
          pIVar8 = pIVar11->klass;
          uVar15 = (ulong)(pIVar8->_2).interface_offsets_count;
          if (uVar15 != 0) {
            pIVar4 = (pIVar8->_1).interfaceOffsets;
            lVar16 = 0;
            do {
              if (*(Il2CppClass **)((long)&pIVar4->interfaceType + lVar16) ==
                  (Il2CppClass *)TypeInfo_System_Collections_IEnumerator) {
                pVVar12 = pIVar8->vtable + *(int *)((long)&pIVar4->offset + lVar16);
                goto label_059caa23;
              }
              lVar16 = lVar16 + 0x10;
            } while (uVar15 * 0x10 != lVar16);
          }
          pVVar12 = GetInterfaceInvokeDataFromVTableSlowPath
                              (pIVar11,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_059caa23:
          cVar7 = (*pVVar12->methodPtr)(pIVar11,pVVar12->method);
          pIVar11 = local_58;
          if (cVar7 == '\0') {
            method_00 = TypeInfo_System_IDisposable;
            pIVar11 = il2cpp_vm_Object_IsInst(local_58,(Il2CppClass *)TypeInfo_System_IDisposable);
            local_50 = pIVar11;
            if (pIVar11 == (Il2CppObject *)0x0) goto label_059cabd6;
            pIVar8 = pIVar11->klass;
            uVar15 = (ulong)(pIVar8->_2).interface_offsets_count;
            if (uVar15 == 0) goto label_059cabaf;
            pIVar4 = (pIVar8->_1).interfaceOffsets;
            lVar16 = 0;
            goto label_059caba0;
          }
          if (local_58 == (Il2CppObject *)0x0) {
            ThrowNullReferenceException();
          }
          pIVar8 = local_58->klass;
          uVar15 = (ulong)(pIVar8->_2).interface_offsets_count;
          if (uVar15 != 0) {
            pIVar4 = (pIVar8->_1).interfaceOffsets;
            lVar16 = 0;
            do {
              if (*(System_Collections_IEnumerator_c **)((long)&pIVar4->interfaceType + lVar16) ==
                  TypeInfo_System_Collections_IEnumerator) {
                pVVar12 = pIVar8->vtable + (*(int *)((long)&pIVar4->offset + lVar16) + 1);
                goto label_059caab7;
              }
              lVar16 = lVar16 + 0x10;
            } while (uVar15 * 0x10 != lVar16);
          }
          pVVar12 = GetInterfaceInvokeDataFromVTableSlowPath
                              (local_58,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,1);
label_059caab7:
          pIVar13 = (*pVVar12->methodPtr)(pIVar11,pVVar12->method);
          pIVar11 = local_58;
        } while (pIVar13 == (Il2CppObject *)0x0);
        pSVar14 = (System_String_o *)(*pIVar13->klass->vtable[3].methodPtr)(pIVar13);
        bVar6 = System_String__IsNullOrEmpty(pSVar14,(MethodInfo *)0x0);
        pIVar11 = local_58;
      } while (bVar6);
      pSVar14 = (System_String_o *)
                (*pIVar13->klass->vtable[3].methodPtr)(pIVar13,pIVar13->klass->vtable[3].method);
      pMVar5 = MethodInfo_System_Collections_Generic_List_string_Add;
      if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
        piVar1 = &(__this_00->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar10 = (__this_00->fields)._items;
        if (pSVar10 != (System_String_array *)0x0) {
          uVar3 = (__this_00->fields)._size;
          if (uVar3 < (uint)pSVar10->max_length) {
            (__this_00->fields)._size = uVar3 + 1;
            pSVar10->m_Items[(int)uVar3] = pSVar14;
            Il2CppCodeGenWriteBarrier(pSVar10->m_Items + (int)uVar3);
            pIVar11 = local_58;
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar14,
                       (MethodInfo_395D230 *)pMVar5->klass->rgctx_data[0xe].method);
            pIVar11 = local_58;
          }
          goto joined_r0x059ca97f;
        }
      }
      ThrowNullReferenceException();
    }
  }
  return false;
  while (lVar16 = lVar16 + 0x10, uVar15 * 0x10 != lVar16) {
label_059caba0:
    if (*(System_IDisposable_c **)((long)&pIVar4->interfaceType + lVar16) == TypeInfo_System_IDisposable) {
      pVVar12 = pIVar8->vtable + *(int *)((long)&pIVar4->offset + lVar16);
      goto label_059cabcd;
    }
  }
label_059cabaf:
  pVVar12 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar11,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_059cabcd:
  method_00 = (System_IDisposable_c *)pVVar12->method;
  (*pVVar12->methodPtr)(pIVar11,(MethodInfo *)method_00);
label_059cabd6:
  if ((TypeInfo_PatreonEffects_RoleSpriteHelpers->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_RoleSpriteHelpers);
  }
  pSVar10 = PatreonEffects_RoleSpriteHelpers__RoleArray
                      ((System_Collections_Generic_IEnumerable_string__o *)__this_00,(MethodInfo *)method_00);
  *roles = pSVar10;
  Il2CppCodeGenWriteBarrier(roles);
  pSVar10 = *roles;
  if (pSVar10 == (System_String_array *)0x0) {
    ThrowNullReferenceException();
  }
  goto label_059cac1c;
}


// PatreonEffects.RoleSpriteHelpers$$RoleArray
// il2cpp: System_String_array* PatreonEffects_RoleSpriteHelpers__RoleArray (System_Collections_Generic_IEnumerable_string__o* roles, const MethodInfo* method);
// 0x59cad40
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59cad80: jmp 0x59cae11
// asm:   0x59cae9c: cmp byte ptr [rip + 0x1b779e3], 0
// asm:   0x59caea3: je 0x59caf01
// asm:   0x59caf20: jmp 0x59caeb1

System_String_array *
PatreonEffects_RoleSpriteHelpers__RoleArray
          (System_Collections_Generic_IEnumerable_string__o *roles,MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  PatreonEffects_RoleSpriteHelpers___c_StaticFields *pPVar2;
  System_Func_string__bool__o *__this;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar3;
  System_String_array *pSVar4;
  
  if (Il2CppMethodInitialized_07545c34 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Distinct_string_71a8388);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToArray_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Where_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_PatreonEffects_RoleSpriteHelpers_c_RoleArray_b__9_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_RoleSpriteHelpers_c);
    Il2CppMethodInitialized_07545c34 = '\x01';
    uVar1 = (TypeInfo_PatreonEffects_RoleSpriteHelpers_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_PatreonEffects_RoleSpriteHelpers_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_RoleSpriteHelpers_c);
    pPVar2 = TypeInfo_PatreonEffects_RoleSpriteHelpers_c->static_fields;
    __this = pPVar2->__9__9_0;
  }
  else {
    pPVar2 = ((Il2CppClass *)TypeInfo_PatreonEffects_RoleSpriteHelpers_c)->static_fields;
    __this = pPVar2->__9__9_0;
  }
  if (__this == (System_Func_string__bool__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_PatreonEffects_RoleSpriteHelpers_c)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_RoleSpriteHelpers_c);
      pPVar2 = TypeInfo_PatreonEffects_RoleSpriteHelpers_c->static_fields;
    }
    object = (Il2CppObject *)pPVar2->__9;
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_bool);
    System_Func_object__bool____ctor
              ((System_Func_object__bool__o *)__this,object,
               (intptr_t)MethodInfo_PatreonEffects_RoleSpriteHelpers_c_RoleArray_b__9_0,
               (MethodInfo_4F19300 *)0x0);
    pPVar2 = TypeInfo_PatreonEffects_RoleSpriteHelpers_c->static_fields;
    pPVar2->__9__9_0 = __this;
    Il2CppCodeGenWriteBarrier(&pPVar2->__9__9_0);
  }
  pSVar3 = System_Linq_Enumerable__Where_object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)roles,
                      (System_Func_TSource__bool__o *)__this,
                      (MethodInfo_3502B70 *)MethodInfo_System_Linq_Enumerable_Where_string);
  if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  if (Il2CppMethodInitialized_07542886 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    Il2CppMethodInitialized_07542886 = '\x01';
    uVar1 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_System_StringComparer)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  pSVar3 = System_Linq_Enumerable__Distinct_object__34e8be0
                     (pSVar3,(System_Collections_Generic_IEqualityComparer_TSource__o *)
                             TypeInfo_System_StringComparer->static_fields->s_ordinalIgnoreCase,
                      (MethodInfo_34E8BE0 *)MethodInfo_System_Linq_Enumerable_Distinct_string_71a8388);
  pSVar4 = (System_String_array *)
           System_Linq_Enumerable__ToArray_object_
                     (pSVar3,(MethodInfo_34FEA80 *)MethodInfo_System_Linq_Enumerable_ToArray_string);
  return pSVar4;
}


// PatreonEffects.RoleSpriteHelpers$$TryGetDefinitionByRole
// il2cpp: bool PatreonEffects_RoleSpriteHelpers__TryGetDefinitionByRole (System_String_o* roleName, PatreonEffects_RoleSpriteDefinition_o* definition, const MethodInfo* method);
// 0x59ca230

bool PatreonEffects_RoleSpriteHelpers__TryGetDefinitionByRole
               (System_String_o *roleName,PatreonEffects_RoleSpriteDefinition_o *definition,MethodInfo *method
               )

{
  PatreonEffects_RoleSpriteDefinition_array *source;
  bool bVar1;
  PatreonEffects_RoleSpriteHelpers___c__DisplayClass10_0_o *__this;
  System_Func_RoleSpriteDefinition__bool__o *__this_00;
  PatreonEffects_RoleSpriteDefinition_o PVar2;
  
  if (Il2CppMethodInitialized_07545c35 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_FirstOrDefault_RoleSpriteDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_RoleSpriteDefinition_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_RoleSpriteHelpers);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_PatreonEffects_RoleSpriteHelpers_c__DisplayClass10_0_TryGetDefinitionByRole_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_RoleSpriteHelpers_c__DisplayClass10_0)
    ;
    Il2CppMethodInitialized_07545c35 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_PatreonEffects_RoleSpriteHelpers_c__DisplayClass10_0);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this == (PatreonEffects_RoleSpriteHelpers___c__DisplayClass10_0_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this->fields).roleName = roleName;
  Il2CppCodeGenWriteBarrier(&(__this->fields).roleName);
  if ((TypeInfo_PatreonEffects_RoleSpriteHelpers->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_RoleSpriteHelpers);
  }
  source = TypeInfo_PatreonEffects_RoleSpriteHelpers->static_fields->Definitions;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_RoleSpriteDefinition_bool);
  System_Func_RoleSpriteDefinition__bool____ctor
            (__this_00,(Il2CppObject *)__this,
             (intptr_t)
             MethodInfo_PatreonEffects_RoleSpriteHelpers_c__DisplayClass10_0_TryGetDefinitionByRole_b__0,
             (MethodInfo_4F1A950 *)0x0);
  PVar2 = System_Linq_Enumerable__FirstOrDefault_RoleSpriteDefinition_
                    ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                     (System_Func_TSource__bool__o *)__this_00,
                     (MethodInfo_34EDD30 *)
                     MethodInfo_System_Linq_Enumerable_FirstOrDefault_RoleSpriteDefinition);
  (definition->fields).RoleName = PVar2.fields.RoleName;
  (definition->fields).SpriteIndex = PVar2.fields.SpriteIndex;
  Il2CppCodeGenWriteBarrier((void **)definition);
  bVar1 = System_String__IsNullOrEmpty((definition->fields).RoleName,(MethodInfo *)0x0);
  return !bVar1;
}


// PatreonEffects.RoleSpriteHelpers$$TryGetDefinitionBySpriteIndex
// il2cpp: bool PatreonEffects_RoleSpriteHelpers__TryGetDefinitionBySpriteIndex (int32_t spriteIndex, PatreonEffects_RoleSpriteDefinition_o* definition, const MethodInfo* method);
// 0x59caf40

bool PatreonEffects_RoleSpriteHelpers__TryGetDefinitionBySpriteIndex
               (int32_t spriteIndex,PatreonEffects_RoleSpriteDefinition_o *definition,MethodInfo *method)

{
  PatreonEffects_RoleSpriteDefinition_array *source;
  bool bVar1;
  PatreonEffects_RoleSpriteHelpers___c__DisplayClass11_0_o *__this;
  System_Func_RoleSpriteDefinition__bool__o *__this_00;
  PatreonEffects_RoleSpriteDefinition_o PVar2;
  
  if (Il2CppMethodInitialized_07545c36 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_FirstOrDefault_RoleSpriteDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_RoleSpriteDefinition_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_RoleSpriteHelpers);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_PatreonEffects_RoleSpriteHelpers_c__DisplayClass11_0_TryGetDefinitionBySpriteIndex_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_RoleSpriteHelpers_c__DisplayClass11_0)
    ;
    Il2CppMethodInitialized_07545c36 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_PatreonEffects_RoleSpriteHelpers_c__DisplayClass11_0);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this == (PatreonEffects_RoleSpriteHelpers___c__DisplayClass11_0_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this->fields).spriteIndex = spriteIndex;
  if ((TypeInfo_PatreonEffects_RoleSpriteHelpers->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_RoleSpriteHelpers);
  }
  source = TypeInfo_PatreonEffects_RoleSpriteHelpers->static_fields->Definitions;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_RoleSpriteDefinition_bool);
  System_Func_RoleSpriteDefinition__bool____ctor
            (__this_00,(Il2CppObject *)__this,
             (intptr_t)
             MethodInfo_PatreonEffects_RoleSpriteHelpers_c__DisplayClass11_0_TryGetDefinitionBySpriteIndex_b__0
             ,(MethodInfo_4F1A950 *)0x0);
  PVar2 = System_Linq_Enumerable__FirstOrDefault_RoleSpriteDefinition_
                    ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                     (System_Func_TSource__bool__o *)__this_00,
                     (MethodInfo_34EDD30 *)
                     MethodInfo_System_Linq_Enumerable_FirstOrDefault_RoleSpriteDefinition);
  (definition->fields).RoleName = PVar2.fields.RoleName;
  (definition->fields).SpriteIndex = PVar2.fields.SpriteIndex;
  Il2CppCodeGenWriteBarrier((void **)definition);
  bVar1 = System_String__IsNullOrEmpty((definition->fields).RoleName,(MethodInfo *)0x0);
  return !bVar1;
}


// PatreonEffects.RoleSpriteHelpers$$.cctor
// il2cpp: void PatreonEffects_RoleSpriteHelpers___cctor (const MethodInfo* method);
// 0x59cb070

void PatreonEffects_RoleSpriteHelpers___cctor(MethodInfo *method)

{
  PatreonEffects_RoleSpriteHelpers_StaticFields *pPVar1;
  System_Text_RegularExpressions_Regex_o *__this;
  PatreonEffects_RoleSpriteDefinition_array *pPVar2;
  System_String_o *pSStack_b0;
  undefined8 uStack_a8;
  System_String_o *pSStack_a0;
  undefined8 uStack_98;
  System_String_o *pSStack_90;
  undefined8 uStack_88;
  System_String_o *pSStack_80;
  undefined8 uStack_78;
  System_String_o *pSStack_70;
  undefined8 uStack_68;
  System_String_o *pSStack_60;
  undefined8 uStack_58;
  System_String_o *pSStack_50;
  undefined8 uStack_48;
  System_String_o *pSStack_40;
  undefined8 uStack_38;
  System_String_o *pSStack_30;
  undefined8 uStack_28;
  System_String_o *pSStack_20;
  undefined8 uStack_18;
  
  if (Il2CppMethodInitialized_07545c37 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_RegularExpressions_Regex);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_RoleSpriteDefinition_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_RoleSpriteHelpers);
    il2cpp_codegen_initialize_runtime_metadata(&"ModTeam");
    il2cpp_codegen_initialize_runtime_metadata(&"<sprite=(\\d+)>");
    il2cpp_codegen_initialize_runtime_metadata(&"Mapper");
    il2cpp_codegen_initialize_runtime_metadata(&"Supporter");
    il2cpp_codegen_initialize_runtime_metadata(&"Manager");
    il2cpp_codegen_initialize_runtime_metadata(&"Music");
    il2cpp_codegen_initialize_runtime_metadata(&"3D Art");
    il2cpp_codegen_initialize_runtime_metadata(&"Media");
    il2cpp_codegen_initialize_runtime_metadata(&"2D Art");
    il2cpp_codegen_initialize_runtime_metadata(&"Tester");
    il2cpp_codegen_initialize_runtime_metadata(&"Developer");
    Il2CppMethodInitialized_07545c37 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_RegularExpressions_Regex);
  System_Text_RegularExpressions_Regex___ctor_61e4b50(__this,"<sprite=(\\d+)>",9,(MethodInfo *)0x0);
  TypeInfo_PatreonEffects_RoleSpriteHelpers->static_fields->SpriteTagRegex = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_PatreonEffects_RoleSpriteHelpers->static_fields->SpriteTagRegex);
  pPVar2 = (PatreonEffects_RoleSpriteDefinition_array *)
           SZArrayNew(TypeInfo_PatreonEffects_RoleSpriteDefinition_array,10);
  uStack_18 = 0;
  pSStack_20 = "2D Art";
  Il2CppCodeGenWriteBarrier(&pSStack_20);
  uStack_18 = CONCAT44(uStack_18._4_4_,0x8d);
  if (pPVar2 == (PatreonEffects_RoleSpriteDefinition_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)pPVar2->max_length != 0) {
    pPVar2->m_Items[0].fields.RoleName = pSStack_20;
    pPVar2->m_Items[0].fields.SpriteIndex = 0x8d;
    Il2CppCodeGenWriteBarrier((void **)pPVar2->m_Items);
    uStack_28 = 0;
    pSStack_30 = "3D Art";
    Il2CppCodeGenWriteBarrier(&pSStack_30);
    uStack_28 = CONCAT44(uStack_28._4_4_,0x8e);
    if ((pPVar2->max_length & 0xfffffffe) != 0) {
      pPVar2->m_Items[1].fields.RoleName = pSStack_30;
      pPVar2->m_Items[1].fields.SpriteIndex = 0x8e;
      Il2CppCodeGenWriteBarrier((void **)(pPVar2->m_Items + 1));
      uStack_38 = 0;
      pSStack_40 = "Developer";
      Il2CppCodeGenWriteBarrier(&pSStack_40);
      uStack_38 = CONCAT44(uStack_38._4_4_,0x8f);
      if (2 < (uint)pPVar2->max_length) {
        pPVar2->m_Items[2].fields.RoleName = pSStack_40;
        pPVar2->m_Items[2].fields.SpriteIndex = 0x8f;
        Il2CppCodeGenWriteBarrier((void **)(pPVar2->m_Items + 2));
        uStack_48 = 0;
        pSStack_50 = "Supporter";
        Il2CppCodeGenWriteBarrier(&pSStack_50);
        uStack_48 = CONCAT44(uStack_48._4_4_,0x90);
        if ((pPVar2->max_length & 0xfffffffc) != 0) {
          pPVar2->m_Items[3].fields.RoleName = pSStack_50;
          pPVar2->m_Items[3].fields.SpriteIndex = 0x90;
          Il2CppCodeGenWriteBarrier((void **)(pPVar2->m_Items + 3));
          uStack_58 = 0;
          pSStack_60 = "Manager";
          Il2CppCodeGenWriteBarrier(&pSStack_60);
          uStack_58 = CONCAT44(uStack_58._4_4_,0x91);
          if (4 < (uint)pPVar2->max_length) {
            pPVar2->m_Items[4].fields.RoleName = pSStack_60;
            pPVar2->m_Items[4].fields.SpriteIndex = 0x91;
            Il2CppCodeGenWriteBarrier((void **)(pPVar2->m_Items + 4));
            uStack_68 = 0;
            pSStack_70 = "Mapper";
            Il2CppCodeGenWriteBarrier(&pSStack_70);
            uStack_68 = CONCAT44(uStack_68._4_4_,0x92);
            if (5 < (uint)pPVar2->max_length) {
              pPVar2->m_Items[5].fields.RoleName = pSStack_70;
              pPVar2->m_Items[5].fields.SpriteIndex = 0x92;
              Il2CppCodeGenWriteBarrier((void **)(pPVar2->m_Items + 5));
              uStack_78 = 0;
              pSStack_80 = "Media";
              Il2CppCodeGenWriteBarrier(&pSStack_80);
              uStack_78 = CONCAT44(uStack_78._4_4_,0x93);
              if (6 < (uint)pPVar2->max_length) {
                pPVar2->m_Items[6].fields.RoleName = pSStack_80;
                pPVar2->m_Items[6].fields.SpriteIndex = 0x93;
                Il2CppCodeGenWriteBarrier((void **)(pPVar2->m_Items + 6));
                uStack_88 = 0;
                pSStack_90 = "ModTeam";
                Il2CppCodeGenWriteBarrier(&pSStack_90);
                uStack_88 = CONCAT44(uStack_88._4_4_,0x94);
                if ((pPVar2->max_length & 0xfffffff8) != 0) {
                  pPVar2->m_Items[7].fields.RoleName = pSStack_90;
                  pPVar2->m_Items[7].fields.SpriteIndex = 0x94;
                  Il2CppCodeGenWriteBarrier((void **)(pPVar2->m_Items + 7));
                  uStack_98 = 0;
                  pSStack_a0 = "Music";
                  Il2CppCodeGenWriteBarrier(&pSStack_a0);
                  uStack_98 = CONCAT44(uStack_98._4_4_,0x95);
                  if (8 < (uint)pPVar2->max_length) {
                    pPVar2->m_Items[8].fields.RoleName = pSStack_a0;
                    pPVar2->m_Items[8].fields.SpriteIndex = 0x95;
                    Il2CppCodeGenWriteBarrier((void **)(pPVar2->m_Items + 8));
                    uStack_a8 = 0;
                    pSStack_b0 = "Tester";
                    Il2CppCodeGenWriteBarrier(&pSStack_b0);
                    uStack_a8 = CONCAT44(uStack_a8._4_4_,0x96);
                    if (9 < (uint)pPVar2->max_length) {
                      pPVar2->m_Items[9].fields.RoleName = pSStack_b0;
                      pPVar2->m_Items[9].fields.SpriteIndex = 0x96;
                      Il2CppCodeGenWriteBarrier((void **)(pPVar2->m_Items + 9));
                      pPVar1 = TypeInfo_PatreonEffects_RoleSpriteHelpers->static_fields;
                      pPVar1->Definitions = pPVar2;
                      Il2CppCodeGenWriteBarrier(&pPVar1->Definitions);
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
  ThrowIndexOutOfRangeException();
}


