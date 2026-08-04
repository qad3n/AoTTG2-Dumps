// Type: PatreonEffects.RoleSpriteHelpers
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/PatreonEffects/RoleSpriteHelpers.cs
// Prior real C# source: none
// --------------------------------

// PatreonEffects.RoleSpriteHelpers.<>c$$.cctor
// il2cpp: void PatreonEffects_RoleSpriteHelpers___c___cctor (const MethodInfo* method);
// 0x4332ee0

void PatreonEffects_RoleSpriteHelpers___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (g_data_057ae088 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ae088 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// PatreonEffects.RoleSpriteHelpers.<>c$$.ctor
// il2cpp: void PatreonEffects_RoleSpriteHelpers___c___ctor (PatreonEffects_RoleSpriteHelpers___c_o* __this, const MethodInfo* method);
// 0x4332f50

void PatreonEffects_RoleSpriteHelpers___c___ctor
               (PatreonEffects_RoleSpriteHelpers___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// PatreonEffects.RoleSpriteHelpers.<>c$$<TryReadRoles>b__8_0
// il2cpp: System_String_o* PatreonEffects_RoleSpriteHelpers___c___TryReadRoles_b__8_0 (PatreonEffects_RoleSpriteHelpers___c_o* __this, SimpleJSONFixed_JSONNode_o* item, const MethodInfo* method);
// 0x4332f60

System_String_o *
PatreonEffects_RoleSpriteHelpers___c___TryReadRoles_b__8_0
          (PatreonEffects_RoleSpriteHelpers___c_o *__this,SimpleJSONFixed_JSONNode_o *item,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  bool_conflict bVar1;
  System_String_o *pSVar2;
  undefined4 extraout_var;
  
  if (item != (SimpleJSONFixed_JSONNode_o *)0x0) {
    vtableDispatch = (item->klass->vtable)._9_get_Value.methodPtr;
    pSVar2 = (System_String_o *)
             (*vtableDispatch)
                       (item,(item->klass->vtable)._9_get_Value.method,method,vtableDispatch);
    return pSVar2;
  }
  il2cpp_runtime_helper_022b2c90();
  bVar1 = System_String__IsNullOrWhiteSpace((System_String_o *)item,(MethodInfo *)0x0);
  return (System_String_o *)(CONCAT71((int7)(CONCAT44(extraout_var,bVar1) >> 8),(char)bVar1) ^ 1);
}


// PatreonEffects.RoleSpriteHelpers.<>c$$<RoleArray>b__9_0
// il2cpp: bool PatreonEffects_RoleSpriteHelpers___c___RoleArray_b__9_0 (PatreonEffects_RoleSpriteHelpers___c_o* __this, System_String_o* role, const MethodInfo* method);
// 0x4332f90

bool_conflict
PatreonEffects_RoleSpriteHelpers___c___RoleArray_b__9_0
          (PatreonEffects_RoleSpriteHelpers___c_o *__this,System_String_o *role,MethodInfo *method)

{
  uint uVar1;
  
  uVar1 = System_String__IsNullOrWhiteSpace(role,(MethodInfo *)0x0);
  return uVar1 ^ 1;
}


// PatreonEffects.RoleSpriteHelpers.<>c__DisplayClass10_0$$.ctor
// il2cpp: void PatreonEffects_RoleSpriteHelpers___c__DisplayClass10_0___ctor (PatreonEffects_RoleSpriteHelpers___c__DisplayClass10_0_o* __this, const MethodInfo* method);
// 0x43328d0

void PatreonEffects_RoleSpriteHelpers___c__DisplayClass10_0___ctor
               (PatreonEffects_RoleSpriteHelpers___c__DisplayClass10_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// PatreonEffects.RoleSpriteHelpers.<>c__DisplayClass10_0$$<TryGetDefinitionByRole>b__0
// il2cpp: bool PatreonEffects_RoleSpriteHelpers___c__DisplayClass10_0___TryGetDefinitionByRole_b__0 (PatreonEffects_RoleSpriteHelpers___c__DisplayClass10_0_o* __this, PatreonEffects_RoleSpriteDefinition_o item, const MethodInfo* method);
// 0x4332fa0

bool_conflict
PatreonEffects_RoleSpriteHelpers___c__DisplayClass10_0___TryGetDefinitionByRole_b__0
          (PatreonEffects_RoleSpriteHelpers___c__DisplayClass10_0_o *__this,
          PatreonEffects_RoleSpriteDefinition_o item,MethodInfo *method)

{
  bool_conflict bVar1;
  
  bVar1 = System_String__Equals_3af50f0(item.fields.RoleName,(__this->fields).roleName,5,(MethodInfo *)0x0);
  return bVar1;
}


// PatreonEffects.RoleSpriteHelpers.<>c__DisplayClass11_0$$.ctor
// il2cpp: void PatreonEffects_RoleSpriteHelpers___c__DisplayClass11_0___ctor (PatreonEffects_RoleSpriteHelpers___c__DisplayClass11_0_o* __this, const MethodInfo* method);
// 0x4332a00

void PatreonEffects_RoleSpriteHelpers___c__DisplayClass11_0___ctor
               (PatreonEffects_RoleSpriteHelpers___c__DisplayClass11_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// PatreonEffects.RoleSpriteHelpers.<>c__DisplayClass11_0$$<TryGetDefinitionBySpriteIndex>b__0
// il2cpp: bool PatreonEffects_RoleSpriteHelpers___c__DisplayClass11_0___TryGetDefinitionBySpriteIndex_b__0 (PatreonEffects_RoleSpriteHelpers___c__DisplayClass11_0_o* __this, PatreonEffects_RoleSpriteDefinition_o item, const MethodInfo* method);
// 0x4332fc0

bool_conflict
PatreonEffects_RoleSpriteHelpers___c__DisplayClass11_0___TryGetDefinitionBySpriteIndex_b__0
          (PatreonEffects_RoleSpriteHelpers___c__DisplayClass11_0_o *__this,
          PatreonEffects_RoleSpriteDefinition_o item,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),(__this->fields).spriteIndex == item.fields.SpriteIndex);
}


// PatreonEffects.RoleSpriteHelpers.<>c__DisplayClass2_0$$.ctor
// il2cpp: void PatreonEffects_RoleSpriteHelpers___c__DisplayClass2_0___ctor (PatreonEffects_RoleSpriteHelpers___c__DisplayClass2_0_o* __this, const MethodInfo* method);
// 0x43315d0

void PatreonEffects_RoleSpriteHelpers___c__DisplayClass2_0___ctor
               (PatreonEffects_RoleSpriteHelpers___c__DisplayClass2_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// PatreonEffects.RoleSpriteHelpers.<>c__DisplayClass2_0$$<GetEligibleRoleSprites>b__0
// il2cpp: bool PatreonEffects_RoleSpriteHelpers___c__DisplayClass2_0___GetEligibleRoleSprites_b__0 (PatreonEffects_RoleSpriteHelpers___c__DisplayClass2_0_o* __this, PatreonEffects_RoleSpriteDefinition_o definition, const MethodInfo* method);
// 0x4332fd0

bool_conflict
PatreonEffects_RoleSpriteHelpers___c__DisplayClass2_0___GetEligibleRoleSprites_b__0
          (PatreonEffects_RoleSpriteHelpers___c__DisplayClass2_0_o *__this,
          PatreonEffects_RoleSpriteDefinition_o definition,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  bool_conflict bVar1;
  bool_conflict extraout_EAX;
  Il2CppObject *__this_00;
  System_Collections_Generic_IEnumerable_string__o *source;
  System_Func_TSource__bool__o *predicate;
  undefined8 uVar2;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  MethodInfo *method_00;
  Il2CppClass *pIVar3;
  Il2CppObject *__this_01;
  
  uVar2 = definition.fields._8_8_;
  pIVar3 = (Il2CppClass *)definition.fields.RoleName;
  if (cRam00000000057ae089 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_RoleSpriteHelpers,pIVar3,uVar2);
    cRam00000000057ae089 = '\x01';
    uVar2 = extraout_RDX;
  }
  player = (__this->fields).player;
  if (*(int *)(TypeInfo_RoleSpriteHelpers + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    uVar2 = extraout_RDX_00;
  }
  if (g_data_057ae07e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Any_String,pIVar3,uVar2);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_string_bool);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RoleSpriteHelpers);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_HasRole_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass3_0);
    g_data_057ae07e = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass3_0);
  __this_01 = __this_00;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = pIVar3;
    il2cpp_runtime_helper_022b4080(__this_00 + 1);
    method_00 = (MethodInfo *)0x0;
    bVar1 = System_String__IsNullOrEmpty((System_String_o *)__this_00[1].klass,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      return 0;
    }
    if (*(int *)(TypeInfo_RoleSpriteHelpers + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    source = PatreonEffects_RoleSpriteHelpers__GetRoles(player,method_00);
    predicate = (System_Func_TSource__bool__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_string_bool);
    System_Func_object__bool____ctor();
    bVar1 = System_Linq_Enumerable__Any_object__2504f10
                      ((System_Collections_Generic_IEnumerable_TSource__o *)source,predicate,MethodInfo_Boolean_Any_String);
    return bVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  return extraout_EAX;
}


// PatreonEffects.RoleSpriteHelpers.<>c__DisplayClass3_0$$.ctor
// il2cpp: void PatreonEffects_RoleSpriteHelpers___c__DisplayClass3_0___ctor (PatreonEffects_RoleSpriteHelpers___c__DisplayClass3_0_o* __this, const MethodInfo* method);
// 0x4331700

void PatreonEffects_RoleSpriteHelpers___c__DisplayClass3_0___ctor
               (PatreonEffects_RoleSpriteHelpers___c__DisplayClass3_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// PatreonEffects.RoleSpriteHelpers.<>c__DisplayClass3_0$$<HasRole>b__0
// il2cpp: bool PatreonEffects_RoleSpriteHelpers___c__DisplayClass3_0___HasRole_b__0 (PatreonEffects_RoleSpriteHelpers___c__DisplayClass3_0_o* __this, System_String_o* role, const MethodInfo* method);
// 0x4333030

bool_conflict
PatreonEffects_RoleSpriteHelpers___c__DisplayClass3_0___HasRole_b__0
          (PatreonEffects_RoleSpriteHelpers___c__DisplayClass3_0_o *__this,System_String_o *role,
          MethodInfo *method)

{
  int lengthA;
  System_String_o *strB;
  int32_t iVar1;
  bool_conflict bVar2;
  undefined7 uVar3;
  
  strB = (__this->fields).roleName;
  if (g_data_057aa14b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CompareInfo);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CultureInfo);
    g_data_057aa14b = '\x01';
  }
  uVar3 = (undefined7)((ulong)role >> 8);
  if (role == strB) {
    bVar2 = (bool_conflict)CONCAT71(uVar3,1);
  }
  else if ((role == (System_String_o *)0x0) || (strB == (System_String_o *)0x0)) {
    bVar2 = 0;
  }
  else {
    lengthA = (role->fields)._stringLength;
    if (lengthA == (strB->fields)._stringLength) {
      if (*(int *)(TypeInfo_CompareInfo + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      iVar1 = System_Globalization_CompareInfo__CompareOrdinalIgnoreCase
                        (role,0,lengthA,strB,0,lengthA,(MethodInfo *)0x0);
      bVar2 = (bool_conflict)CONCAT71(uVar3,iVar1 == 0);
    }
    else {
      bVar2 = 0;
    }
  }
  return bVar2;
}


// PatreonEffects.RoleSpriteHelpers.<>c__DisplayClass6_0$$.ctor
// il2cpp: void PatreonEffects_RoleSpriteHelpers___c__DisplayClass6_0___ctor (PatreonEffects_RoleSpriteHelpers___c__DisplayClass6_0_o* __this, const MethodInfo* method);
// 0x4331d90

void PatreonEffects_RoleSpriteHelpers___c__DisplayClass6_0___ctor
               (PatreonEffects_RoleSpriteHelpers___c__DisplayClass6_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// PatreonEffects.RoleSpriteHelpers.<>c__DisplayClass6_0$$<SanitizePlayerText>b__0
// il2cpp: System_String_o* PatreonEffects_RoleSpriteHelpers___c__DisplayClass6_0___SanitizePlayerText_b__0 (PatreonEffects_RoleSpriteHelpers___c__DisplayClass6_0_o* __this, System_Text_RegularExpressions_Match_o* match, const MethodInfo* method);
// 0x4333050

System_String_o *
PatreonEffects_RoleSpriteHelpers___c__DisplayClass6_0___SanitizePlayerText_b__0
          (PatreonEffects_RoleSpriteHelpers___c__DisplayClass6_0_o *__this,
          System_Text_RegularExpressions_Match_o *match,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  int32_t spriteIndex;
  bool_conflict bVar1;
  System_Text_RegularExpressions_Match_o *__this_00;
  System_Text_RegularExpressions_Capture_o *__this_01;
  System_String_o *pSVar2;
  Utility_Color255_o *__this_02;
  System_Collections_Hashtable_o *__this_03;
  long lVar3;
  System_String_o *extraout_RAX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *pMVar4;
  long *__this_04;
  int32_t iStack_3c;
  PatreonEffects_RoleSpriteDefinition_o PStack_38;
  
  __this_04 = (long *)__this;
  if (g_data_057ae08a == '\0') {
    __this_04 = &TypeInfo_RoleSpriteHelpers;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae08a = '\x01';
    method = extraout_RDX;
  }
  iStack_3c = 0;
  PStack_38.fields.RoleName = (System_String_o *)0x0;
  PStack_38.fields.SpriteIndex = 0;
  PStack_38.fields._12_4_ = 0;
  if (((match == (System_Text_RegularExpressions_Match_o *)0x0) ||
      (__this_04 = (long *)match,
      __this_00 = (System_Text_RegularExpressions_Match_o *)
                  (*(match->klass->vtable)._5_get_Groups.methodPtr)
                            (match,(match->klass->vtable)._5_get_Groups.method,method),
      __this_00 == (System_Text_RegularExpressions_Match_o *)0x0)) ||
     (__this_01 = (System_Text_RegularExpressions_Capture_o *)
                  System_Text_RegularExpressions_GroupCollection__get_Item
                            ((System_Text_RegularExpressions_GroupCollection_o *)__this_00,1,(MethodInfo *)0x0
                            ), __this_04 = (long *)__this_00,
     __this_01 == (System_Text_RegularExpressions_Capture_o *)0x0)) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ae08b == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
      il2cpp_runtime_helper_023445d0(&TypeInfo_MapObjectCollideMode);
      il2cpp_runtime_helper_023445d0(&TypeInfo_MapObjectCollideWith);
      il2cpp_runtime_helper_023445d0(&TypeInfo_MapObjectShader);
      il2cpp_runtime_helper_023445d0(&"Misc/None");
      il2cpp_runtime_helper_023445d0(&"Default");
      g_data_057ae08b = '\x01';
    }
    *(undefined4 *)&(((System_Text_RegularExpressions_Match_o *)__this_04)->fields)._Text_k__BackingField =
         0x3f800000;
    (((System_Text_RegularExpressions_Match_o *)__this_04)->fields)._caps =
         (System_Int32_array *)0x3f8000003f800000;
    *(undefined4 *)&(((System_Text_RegularExpressions_Match_o *)__this_04)->fields).field_0x1c = 0x43b40000;
    *(undefined4 *)&(((System_Text_RegularExpressions_Match_o *)__this_04)->fields)._capcoll = 0x3f800000;
    *(undefined4 *)((long)&(((System_Text_RegularExpressions_Match_o *)__this_04)->fields)._capcoll + 4) =
         0x3f800000;
    *(undefined4 *)&(((System_Text_RegularExpressions_Match_o *)__this_04)->fields)._Name_k__BackingField =
         0x3f800000;
    *(undefined8 *)
     ((long)&(((System_Text_RegularExpressions_Match_o *)__this_04)->fields)._Name_k__BackingField + 4) =
         0x3f8000003f800000;
    *(undefined4 *)((long)&(((System_Text_RegularExpressions_Match_o *)__this_04)->fields)._groupcoll + 4) =
         0x3f800000;
    (((System_Text_RegularExpressions_Match_o *)__this_04)->fields)._textpos = 0x43b40000;
    *(undefined2 *)&(((System_Text_RegularExpressions_Match_o *)__this_04)->fields)._matches = 0x101;
    *(undefined1 *)((long)&(((System_Text_RegularExpressions_Match_o *)__this_04)->fields)._matches + 2) = 1;
    if (*(int *)(TypeInfo_MapObjectCollideMode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    (((System_Text_RegularExpressions_Match_o *)__this_04)->fields)._matchcount =
         (System_Int32_array *)**(undefined8 **)(TypeInfo_MapObjectCollideMode + 0xb8);
    il2cpp_runtime_helper_022b4080(&(((System_Text_RegularExpressions_Match_o *)__this_04)->fields)._matchcount);
    if (*(int *)(TypeInfo_MapObjectCollideWith + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)&(((System_Text_RegularExpressions_Match_o *)__this_04)->fields)._balancing =
         *(undefined8 *)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x30);
    il2cpp_runtime_helper_022b4080(&(((System_Text_RegularExpressions_Match_o *)__this_04)->fields)._balancing);
    ((System_Text_RegularExpressions_Match_o *)((long)__this_04 + 0x78))->klass =
         (System_Text_RegularExpressions_Match_c *)"Default";
    il2cpp_runtime_helper_022b4080((System_Text_RegularExpressions_Match_o *)((long)__this_04 + 0x78));
    if (*(int *)(TypeInfo_MapObjectShader + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    ((System_Text_RegularExpressions_Match_o *)((long)__this_04 + 0x78))->monitor =
         (void *)**(undefined8 **)(TypeInfo_MapObjectShader + 0xb8);
    il2cpp_runtime_helper_022b4080(&((System_Text_RegularExpressions_Match_o *)((long)__this_04 + 0x78))->monitor);
    __this_02 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
    Utility_Color255___ctor_4388b90(__this_02,(MethodInfo *)0x0);
    *(Utility_Color255_o **)&((System_Text_RegularExpressions_Match_o *)((long)__this_04 + 0x78))->fields =
         __this_02;
    il2cpp_runtime_helper_022b4080(&((System_Text_RegularExpressions_Match_o *)((long)__this_04 + 0x78))->fields);
    __this_03 = (System_Collections_Hashtable_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
    Utility_Color255___ctor_4388b90((Utility_Color255_o *)__this_03,(MethodInfo *)0x0);
    (((System_Text_RegularExpressions_Match_o *)((long)__this_04 + 0x78))->fields)._Text_k__BackingField =
         (System_String_o *)__this_03;
    il2cpp_runtime_helper_022b4080(&(((System_Text_RegularExpressions_Match_o *)((long)__this_04 + 0x78))->fields).
                        _Text_k__BackingField,__this_03);
    (((System_Text_RegularExpressions_Match_o *)((long)__this_04 + 0x78))->fields)._caps =
         (System_Int32_array *)"Misc/None";
    il2cpp_runtime_helper_022b4080(&(((System_Text_RegularExpressions_Match_o *)((long)__this_04 + 0x78))->fields)._caps);
    if (g_data_057a9c86 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
      g_data_057a9c86 = '\x01';
    }
    lVar3 = TypeInfo_Vector2;
    *(undefined8 *)&(((System_Text_RegularExpressions_Match_o *)((long)__this_04 + 0x78))->fields)._capcount =
         *(undefined8 *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 8);
    if (g_data_057a694c == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
      g_data_057a694c = '\x01';
      lVar3 = TypeInfo_Vector2;
    }
    (((System_Text_RegularExpressions_Match_o *)((long)__this_04 + 0x78))->fields)._capcoll =
         (System_Text_RegularExpressions_CaptureCollection_o *)**(undefined8 **)(lVar3 + 0xb8);
    System_Object___ctor((Il2CppObject *)__this_04,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  pSVar2 = System_Text_RegularExpressions_Capture__get_Value(__this_01,(MethodInfo *)0x0);
  bVar1 = System_Int32__TryParse(pSVar2,&iStack_3c,(MethodInfo *)0x0);
  spriteIndex = iStack_3c;
  if ((char)bVar1 != '\0') {
    pMVar4 = extraout_RDX_00;
    if (*(int *)(TypeInfo_RoleSpriteHelpers + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pMVar4 = extraout_RDX_01;
    }
    bVar1 = PatreonEffects_RoleSpriteHelpers__TryGetDefinitionBySpriteIndex(spriteIndex,&PStack_38,pMVar4);
    pSVar2 = PStack_38.fields.RoleName;
    if ((char)bVar1 != '\0') {
      player = (__this->fields).player;
      pMVar4 = extraout_RDX_02;
      if (*(int *)(TypeInfo_RoleSpriteHelpers + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        pMVar4 = extraout_RDX_03;
      }
      bVar1 = PatreonEffects_RoleSpriteHelpers__HasRole(player,pSVar2,pMVar4);
      if ((char)bVar1 != '\0') {
        pSVar2 = System_Text_RegularExpressions_Capture__get_Value
                           ((System_Text_RegularExpressions_Capture_o *)match,(MethodInfo *)0x0);
        return pSVar2;
      }
    }
  }
  return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
}


// PatreonEffects.RoleSpriteHelpers$$GetEligibleRoleSprites
// il2cpp: System_Collections_Generic_IEnumerable_RoleSpriteDefinition__o* PatreonEffects_RoleSpriteHelpers__GetEligibleRoleSprites (Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x43314d0

System_Collections_Generic_IEnumerable_RoleSpriteDefinition__o *
PatreonEffects_RoleSpriteHelpers__GetEligibleRoleSprites(Photon_Realtime_Player_o *player,MethodInfo *method)

{
  byte bVar1;
  code *pcVar2;
  Il2CppClass *pIVar3;
  long lVar4;
  System_Linq_Enumerable_WhereArrayIterator_TSource__o *__this;
  PatreonEffects_RoleSpriteDefinition_array *source;
  System_Linq_Enumerable_WhereEnumerableIterator_TSource__o *__this_00;
  System_Linq_Enumerable_WhereListIterator_TSource__o *__this_01;
  long lVar5;
  System_Collections_Generic_IEnumerable_RoleSpriteDefinition__o *pSVar6;
  System_String_o *pSVar7;
  System_Exception_o *pSVar8;
  Il2CppObject *__this_02;
  System_Func_TSource__bool__o *predicate;
  System_Collections_Generic_IEnumerable_RoleSpriteDefinition__o *extraout_RAX;
  System_Collections_Generic_List_TSource__c *pSVar9;
  byte bVar10;
  long extraout_RDX;
  long extraout_RDX_00;
  Il2CppClass **unaff_RBX;
  Il2CppClass **ppIVar11;
  System_Collections_Generic_List_TSource__o *source_00;
  undefined8 *puVar12;
  Il2CppObject *__this_03;
  
  if (g_data_057ae07d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_PatreonEffects_RoleSpriteDefinition_Where);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_RoleSpriteDefinition_bool);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RoleSpriteHelpers);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_GetEligibleRoleSprites_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass2_0);
    g_data_057ae07d = '\x01';
  }
  __this_02 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass2_0);
  __this_03 = __this_02;
  System_Object___ctor(__this_02,(MethodInfo *)0x0);
  if (__this_02 == (Il2CppObject *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor(__this_03,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  __this_02[1].klass = (Il2CppClass *)player;
  il2cpp_runtime_helper_022b4080(__this_02 + 1,player);
  if (*(int *)(TypeInfo_RoleSpriteHelpers + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  source_00 = *(System_Collections_Generic_List_TSource__o **)(*(long *)(TypeInfo_RoleSpriteHelpers + 0xb8) + 8);
  predicate = (System_Func_TSource__bool__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_RoleSpriteDefinition_bool);
  System_Func_RoleSpriteDefinition__bool____ctor();
  lVar5 = MethodInfo_IEnumerable_1_PatreonEffects_RoleSpriteDefinition_Where;
  if (*(long *)(MethodInfo_IEnumerable_1_PatreonEffects_RoleSpriteDefinition_Where + 0x38) == 0) {
    il2cpp_runtime_helper_02300a20(MethodInfo_IEnumerable_1_PatreonEffects_RoleSpriteDefinition_Where);
  }
  if (source_00 == (System_Collections_Generic_List_TSource__o *)0x0) {
    puVar12 = &"source";
label_026271b3:
    pSVar7 = (System_String_o *)il2cpp_runtime_helper_023445d0(puVar12);
    pSVar8 = System_Linq_Error__ArgumentNull(pSVar7,(MethodInfo *)0x0);
    pIVar3 = (Il2CppClass *)il2cpp_runtime_helper_022b2b10(pSVar8,lVar5);
label_026271cd:
    il2cpp_runtime_helper_022b2fd0(source_00,pIVar3);
  }
  else {
    if (predicate == (System_Func_TSource__bool__o *)0x0) {
      puVar12 = (undefined8 *)&"predicate";
      goto label_026271b3;
    }
    pIVar3 = *(Il2CppClass **)(*(long *)(lVar5 + 0x38) + 0x10);
    if (((pIVar3->_2).field_0x6d & 1) == 0) {
      pIVar3 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar3);
    }
    pSVar9 = source_00->klass;
    bVar10 = (pSVar9->_2).naturalAligment;
    bVar1 = (pIVar3->_2).naturalAligment;
    if (bVar1 <= bVar10) {
      unaff_RBX = (pSVar9->_2).typeHierarchy;
      if (unaff_RBX[(ulong)bVar1 - 1] != pIVar3) {
        lVar4 = *(long *)(*(long *)(lVar5 + 0x38) + 0x20);
        bVar1 = *(byte *)(lVar4 + 0x135);
        goto joined_r0x02626f75;
      }
      pIVar3 = *(Il2CppClass **)(*(long *)(lVar5 + 0x38) + 0x10);
      if (((pIVar3->_2).field_0x6d & 1) == 0) {
        pIVar3 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar3);
        pSVar9 = source_00->klass;
        bVar10 = (pSVar9->_2).naturalAligment;
      }
      bVar1 = (pIVar3->_2).naturalAligment;
      if ((bVar1 <= bVar10) && ((pSVar9->_2).typeHierarchy[(ulong)bVar1 - 1] == pIVar3)) {
        pIVar3 = *(Il2CppClass **)(*(long *)(lVar5 + 0x38) + 0x10);
        if (((pIVar3->_2).field_0x6d & 1) == 0) {
          pIVar3 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar3);
          pSVar9 = source_00->klass;
          bVar10 = (pSVar9->_2).naturalAligment;
        }
        bVar1 = (pIVar3->_2).naturalAligment;
        if ((bVar1 <= bVar10) && ((pSVar9->_2).typeHierarchy[(ulong)bVar1 - 1] == pIVar3)) {
          pSVar6 = (System_Collections_Generic_IEnumerable_RoleSpriteDefinition__o *)
                   (*(pSVar9->vtable)._15_Remove.methodPtr)
                             (source_00,predicate,(pSVar9->vtable)._15_Remove.method);
          return pSVar6;
        }
      }
      goto label_026271cd;
    }
    lVar4 = *(long *)(*(long *)(lVar5 + 0x38) + 0x20);
    bVar1 = *(byte *)(lVar4 + 0x135);
joined_r0x02626f75:
    if ((bVar1 & 1) == 0) {
      lVar4 = il2cpp_runtime_helper_023009c0(lVar4);
    }
    lVar4 = il2cpp_runtime_helper_023051f0(source_00,lVar4);
    if (lVar4 == 0) {
      pIVar3 = *(Il2CppClass **)(*(long *)(lVar5 + 0x38) + 0x38);
      if (((pIVar3->_2).field_0x6d & 1) == 0) {
        pIVar3 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar3);
      }
      bVar1 = (pIVar3->_2).naturalAligment;
      if ((source_00->klass->_2).naturalAligment < bVar1) {
        lVar4 = *(long *)(*(long *)(lVar5 + 0x38) + 0x50);
        bVar1 = *(byte *)(lVar4 + 0x135);
joined_r0x02627100:
        if ((bVar1 & 1) == 0) {
          lVar4 = il2cpp_runtime_helper_023009c0();
        }
        __this_00 = (System_Linq_Enumerable_WhereEnumerableIterator_TSource__o *)il2cpp_runtime_helper_023052d0(lVar4);
        System_Linq_Enumerable_WhereEnumerableIterator_RoleSpriteDefinition____ctor
                  (__this_00,(System_Collections_Generic_IEnumerable_TSource__o *)source_00,predicate,
                   *(MethodInfo_2E20BB0 **)(*(long *)(lVar5 + 0x38) + 0x58));
        return (System_Collections_Generic_IEnumerable_RoleSpriteDefinition__o *)__this_00;
      }
      if ((source_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != pIVar3) {
        lVar4 = *(long *)(*(long *)(lVar5 + 0x38) + 0x50);
        bVar1 = *(byte *)(lVar4 + 0x135);
        goto joined_r0x02627100;
      }
      lVar4 = *(long *)(*(long *)(lVar5 + 0x38) + 0x40);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = il2cpp_runtime_helper_023009c0();
      }
      __this_01 = (System_Linq_Enumerable_WhereListIterator_TSource__o *)il2cpp_runtime_helper_023052d0(lVar4);
      pIVar3 = *(Il2CppClass **)(*(long *)(lVar5 + 0x38) + 0x38);
      if (((pIVar3->_2).field_0x6d & 1) == 0) {
        pIVar3 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar3);
      }
      bVar1 = (pIVar3->_2).naturalAligment;
      if ((bVar1 <= (source_00->klass->_2).naturalAligment) &&
         ((source_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == pIVar3)) {
        System_Linq_Enumerable_WhereListIterator_RoleSpriteDefinition____ctor
                  (__this_01,source_00,predicate,*(MethodInfo_2E22DE0 **)(*(long *)(lVar5 + 0x38) + 0x48));
        return (System_Collections_Generic_IEnumerable_RoleSpriteDefinition__o *)__this_01;
      }
      goto label_026271cd;
    }
    lVar4 = *(long *)(*(long *)(lVar5 + 0x38) + 0x28);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = il2cpp_runtime_helper_023009c0();
    }
    __this = (System_Linq_Enumerable_WhereArrayIterator_TSource__o *)il2cpp_runtime_helper_023052d0(lVar4);
    unaff_RBX = *(Il2CppClass ***)(*(long *)(lVar5 + 0x38) + 0x20);
    if (((byte)*(code *)((long)unaff_RBX + 0x135) & 1) == 0) {
      unaff_RBX = (Il2CppClass **)il2cpp_runtime_helper_023009c0(unaff_RBX);
    }
    source = (PatreonEffects_RoleSpriteDefinition_array *)il2cpp_runtime_helper_023051f0(source_00,unaff_RBX);
    if (source != (PatreonEffects_RoleSpriteDefinition_array *)0x0) {
      System_Linq_Enumerable_WhereArrayIterator_RoleSpriteDefinition____ctor
                (__this,source,predicate,*(MethodInfo_2E1C660 **)(*(long *)(lVar5 + 0x38) + 0x30));
      return (System_Collections_Generic_IEnumerable_RoleSpriteDefinition__o *)__this;
    }
  }
  ppIVar11 = unaff_RBX;
  il2cpp_runtime_helper_022b2fd0();
  if (*(long *)(extraout_RDX + 0x38) == 0) {
    il2cpp_runtime_helper_02300a20(extraout_RDX);
  }
  if (source_00 == (System_Collections_Generic_List_TSource__o *)0x0) {
    puVar12 = &"source";
label_026274d7:
    pSVar7 = (System_String_o *)il2cpp_runtime_helper_023445d0(puVar12);
    pSVar8 = System_Linq_Error__ArgumentNull(pSVar7,(MethodInfo *)0x0);
    pIVar3 = (Il2CppClass *)il2cpp_runtime_helper_022b2b10(pSVar8,extraout_RDX);
  }
  else {
    if (ppIVar11 == (Il2CppClass **)0x0) {
      puVar12 = (undefined8 *)&"predicate";
      goto label_026274d7;
    }
    pIVar3 = *(Il2CppClass **)(*(long *)(extraout_RDX + 0x38) + 0x10);
    if (((pIVar3->_2).field_0x6d & 1) == 0) {
      pIVar3 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar3);
    }
    pSVar9 = source_00->klass;
    bVar10 = (pSVar9->_2).naturalAligment;
    bVar1 = (pIVar3->_2).naturalAligment;
    if (bVar10 < bVar1) {
      lVar5 = *(long *)(*(long *)(extraout_RDX + 0x38) + 0x20);
      bVar1 = *(byte *)(lVar5 + 0x135);
joined_r0x02627262:
      if ((bVar1 & 1) == 0) {
        lVar5 = il2cpp_runtime_helper_023009c0(lVar5);
      }
      lVar5 = il2cpp_runtime_helper_023051f0(source_00,lVar5);
      if (lVar5 != 0) {
        lVar5 = *(long *)(*(long *)(extraout_RDX + 0x38) + 0x28);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = il2cpp_runtime_helper_023009c0();
        }
        pSVar6 = (System_Collections_Generic_IEnumerable_RoleSpriteDefinition__o *)il2cpp_runtime_helper_023052d0(lVar5);
        unaff_RBX = *(Il2CppClass ***)(*(long *)(extraout_RDX + 0x38) + 0x20);
        pcVar2 = (code *)**(undefined8 **)(*(long *)(extraout_RDX + 0x38) + 0x30);
        if (((byte)*(code *)((long)unaff_RBX + 0x135) & 1) == 0) {
          unaff_RBX = (Il2CppClass **)il2cpp_runtime_helper_023009c0(unaff_RBX);
        }
        lVar5 = il2cpp_runtime_helper_023051f0(source_00,unaff_RBX);
        if (lVar5 != 0) {
          (*pcVar2)(pSVar6,lVar5,ppIVar11,*(undefined8 *)(*(long *)(extraout_RDX + 0x38) + 0x30));
          return pSVar6;
        }
        goto label_026274fc;
      }
      pIVar3 = *(Il2CppClass **)(*(long *)(extraout_RDX + 0x38) + 0x38);
      if (((pIVar3->_2).field_0x6d & 1) == 0) {
        pIVar3 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar3);
      }
      bVar1 = (pIVar3->_2).naturalAligment;
      if ((source_00->klass->_2).naturalAligment < bVar1) {
        lVar5 = *(long *)(*(long *)(extraout_RDX + 0x38) + 0x50);
        bVar1 = *(byte *)(lVar5 + 0x135);
joined_r0x0262741b:
        if ((bVar1 & 1) == 0) {
          lVar5 = il2cpp_runtime_helper_023009c0();
        }
        pSVar6 = (System_Collections_Generic_IEnumerable_RoleSpriteDefinition__o *)il2cpp_runtime_helper_023052d0(lVar5);
        (*(code *)**(undefined8 **)(*(long *)(extraout_RDX + 0x38) + 0x58))(pSVar6,source_00,ppIVar11);
        return pSVar6;
      }
      if ((source_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != pIVar3) {
        lVar5 = *(long *)(*(long *)(extraout_RDX + 0x38) + 0x50);
        bVar1 = *(byte *)(lVar5 + 0x135);
        goto joined_r0x0262741b;
      }
      lVar5 = *(long *)(*(long *)(extraout_RDX + 0x38) + 0x40);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = il2cpp_runtime_helper_023009c0();
      }
      pSVar6 = (System_Collections_Generic_IEnumerable_RoleSpriteDefinition__o *)il2cpp_runtime_helper_023052d0(lVar5);
      pIVar3 = *(Il2CppClass **)(*(long *)(extraout_RDX + 0x38) + 0x38);
      unaff_RBX = (Il2CppClass **)**(undefined8 **)(*(long *)(extraout_RDX + 0x38) + 0x48);
      if (((pIVar3->_2).field_0x6d & 1) == 0) {
        pIVar3 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar3);
      }
      bVar1 = (pIVar3->_2).naturalAligment;
      if ((bVar1 <= (source_00->klass->_2).naturalAligment) &&
         ((source_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == pIVar3)) {
        (*(code *)unaff_RBX)(pSVar6,source_00,ppIVar11,*(undefined8 *)(*(long *)(extraout_RDX + 0x38) + 0x48))
        ;
        return pSVar6;
      }
    }
    else {
      if ((pSVar9->_2).typeHierarchy[(ulong)bVar1 - 1] != pIVar3) {
        lVar5 = *(long *)(*(long *)(extraout_RDX + 0x38) + 0x20);
        bVar1 = *(byte *)(lVar5 + 0x135);
        goto joined_r0x02627262;
      }
      pIVar3 = *(Il2CppClass **)(*(long *)(extraout_RDX + 0x38) + 0x10);
      if (((pIVar3->_2).field_0x6d & 1) == 0) {
        pIVar3 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar3);
        pSVar9 = source_00->klass;
        bVar10 = (pSVar9->_2).naturalAligment;
      }
      bVar1 = (pIVar3->_2).naturalAligment;
      if ((bVar1 <= bVar10) && ((pSVar9->_2).typeHierarchy[(ulong)bVar1 - 1] == pIVar3)) {
        pIVar3 = *(Il2CppClass **)(*(long *)(extraout_RDX + 0x38) + 0x10);
        if (((pIVar3->_2).field_0x6d & 1) == 0) {
          pIVar3 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar3);
          pSVar9 = source_00->klass;
          bVar10 = (pSVar9->_2).naturalAligment;
        }
        bVar1 = (pIVar3->_2).naturalAligment;
        if ((bVar1 <= bVar10) && ((pSVar9->_2).typeHierarchy[(ulong)bVar1 - 1] == pIVar3)) {
          pSVar6 = (System_Collections_Generic_IEnumerable_RoleSpriteDefinition__o *)
                   (*(pSVar9->vtable)._15_Remove.methodPtr)
                             (source_00,ppIVar11,(pSVar9->vtable)._15_Remove.method);
          return pSVar6;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2fd0(source_00,pIVar3);
label_026274fc:
  il2cpp_runtime_helper_022b2fd0(source_00,unaff_RBX);
  lVar5 = *(long *)(extraout_RDX_00 + 0x38);
  if (lVar5 == 0) {
    il2cpp_runtime_helper_02300a20(extraout_RDX_00);
    lVar5 = *(long *)(extraout_RDX_00 + 0x38);
  }
  pSVar6 = (System_Collections_Generic_IEnumerable_RoleSpriteDefinition__o *)
           (*(code *)**(undefined8 **)(lVar5 + 0x10))(source_00,unaff_RBX);
  return pSVar6;
}


// PatreonEffects.RoleSpriteHelpers$$HasRole
// il2cpp: bool PatreonEffects_RoleSpriteHelpers__HasRole (Photon_Realtime_Player_o* player, System_String_o* roleName, const MethodInfo* method);
// 0x43315e0

bool_conflict
PatreonEffects_RoleSpriteHelpers__HasRole
          (Photon_Realtime_Player_o *player,System_String_o *roleName,MethodInfo *method)

{
  bool_conflict bVar1;
  bool_conflict extraout_EAX;
  Il2CppObject *__this;
  System_Collections_Generic_IEnumerable_string__o *source;
  System_Func_TSource__bool__o *predicate;
  MethodInfo *method_00;
  Il2CppObject *__this_00;
  
  if (g_data_057ae07e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Any_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_string_bool);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RoleSpriteHelpers);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_HasRole_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass3_0);
    g_data_057ae07e = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass3_0);
  __this_00 = __this;
  System_Object___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Il2CppObject *)0x0) {
    __this[1].klass = (Il2CppClass *)roleName;
    il2cpp_runtime_helper_022b4080(__this + 1);
    method_00 = (MethodInfo *)0x0;
    bVar1 = System_String__IsNullOrEmpty((System_String_o *)__this[1].klass,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      return 0;
    }
    if (*(int *)(TypeInfo_RoleSpriteHelpers + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    source = PatreonEffects_RoleSpriteHelpers__GetRoles(player,method_00);
    predicate = (System_Func_TSource__bool__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_string_bool);
    System_Func_object__bool____ctor();
    bVar1 = System_Linq_Enumerable__Any_object__2504f10
                      ((System_Collections_Generic_IEnumerable_TSource__o *)source,predicate,MethodInfo_Boolean_Any_String);
    return bVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  return extraout_EAX;
}


// PatreonEffects.RoleSpriteHelpers$$ComposeGuildWithRoleSprite
// il2cpp: System_String_o* PatreonEffects_RoleSpriteHelpers__ComposeGuildWithRoleSprite (Photon_Realtime_Player_o* player, System_String_o* guildText, System_String_o* selectedRoleName, const MethodInfo* method);
// 0x4331900

System_String_o *
PatreonEffects_RoleSpriteHelpers__ComposeGuildWithRoleSprite
          (Photon_Realtime_Player_o *player,System_String_o *guildText,System_String_o *selectedRoleName,
          MethodInfo *method)

{
  bool_conflict bVar1;
  Il2CppObject *arg0;
  System_String_o *str0;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *pMVar2;
  int32_t local_3c;
  PatreonEffects_RoleSpriteDefinition_o local_38;
  
  if (g_data_057ae07f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_RoleSpriteHelpers);
    il2cpp_runtime_helper_023445d0(&" ");
    il2cpp_runtime_helper_023445d0(&"<sprite={0}>");
    g_data_057ae07f = '\x01';
  }
  local_38.fields.RoleName = (System_String_o *)0x0;
  local_38.fields.SpriteIndex = 0;
  local_38.fields._12_4_ = 0;
  if (guildText == (System_String_o *)0x0) {
    guildText = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  bVar1 = System_String__IsNullOrEmpty(selectedRoleName,(MethodInfo *)0x0);
  str0 = guildText;
  if ((char)bVar1 == '\0') {
    pMVar2 = extraout_RDX;
    if (*(int *)(TypeInfo_RoleSpriteHelpers + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pMVar2 = extraout_RDX_00;
    }
    bVar1 = PatreonEffects_RoleSpriteHelpers__TryGetDefinitionByRole(selectedRoleName,&local_38,pMVar2);
    if ((char)bVar1 != '\0') {
      pMVar2 = extraout_RDX_01;
      if (*(int *)(TypeInfo_RoleSpriteHelpers + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        pMVar2 = extraout_RDX_02;
      }
      bVar1 = PatreonEffects_RoleSpriteHelpers__HasRole(player,selectedRoleName,pMVar2);
      if ((char)bVar1 != '\0') {
        local_3c = local_38.fields.SpriteIndex;
        arg0 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&local_3c);
        str0 = System_String__Format("<sprite={0}>",arg0,(MethodInfo *)0x0);
        bVar1 = System_String__IsNullOrEmpty(guildText,(MethodInfo *)0x0);
        if ((char)bVar1 == '\0') {
          str0 = System_String__Concat_3af7150(str0," ",guildText,(MethodInfo *)0x0);
        }
      }
    }
  }
  return str0;
}


// PatreonEffects.RoleSpriteHelpers$$GetRoleSpriteDisplayText
// il2cpp: System_String_o* PatreonEffects_RoleSpriteHelpers__GetRoleSpriteDisplayText (System_String_o* selectedRoleName, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x4331b70

System_String_o *
PatreonEffects_RoleSpriteHelpers__GetRoleSpriteDisplayText
          (System_String_o *selectedRoleName,Photon_Realtime_Player_o *player,MethodInfo *method)

{
  bool_conflict bVar1;
  Il2CppObject *arg0;
  System_String_o *pSVar2;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *pMVar3;
  int32_t local_2c;
  PatreonEffects_RoleSpriteDefinition_o local_28;
  
  if (g_data_057ae080 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_RoleSpriteHelpers);
    il2cpp_runtime_helper_023445d0(&"<sprite={0}> {1}");
    il2cpp_runtime_helper_023445d0(&"None");
    g_data_057ae080 = '\x01';
  }
  local_28.fields.RoleName = (System_String_o *)0x0;
  local_28.fields.SpriteIndex = 0;
  local_28.fields._12_4_ = 0;
  bVar1 = System_String__IsNullOrEmpty(selectedRoleName,(MethodInfo *)0x0);
  pSVar2 = "None";
  if ((char)bVar1 == '\0') {
    pMVar3 = extraout_RDX;
    if (*(int *)(TypeInfo_RoleSpriteHelpers + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pMVar3 = extraout_RDX_00;
    }
    bVar1 = PatreonEffects_RoleSpriteHelpers__TryGetDefinitionByRole(selectedRoleName,&local_28,pMVar3);
    pSVar2 = "None";
    if ((char)bVar1 != '\0') {
      pMVar3 = extraout_RDX_01;
      if (*(int *)(TypeInfo_RoleSpriteHelpers + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        pMVar3 = extraout_RDX_02;
      }
      bVar1 = PatreonEffects_RoleSpriteHelpers__HasRole(player,selectedRoleName,pMVar3);
      pSVar2 = "None";
      if ((char)bVar1 != '\0') {
        local_2c = local_28.fields.SpriteIndex;
        arg0 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&local_2c);
        pSVar2 = System_String__Format_3af78e0
                           ("<sprite={0}> {1}",arg0,(Il2CppObject *)local_28.fields.RoleName,(MethodInfo *)0x0);
      }
    }
  }
  return pSVar2;
}


// PatreonEffects.RoleSpriteHelpers$$SanitizePlayerText
// il2cpp: System_String_o* PatreonEffects_RoleSpriteHelpers__SanitizePlayerText (Photon_Realtime_Player_o* player, System_String_o* text, const MethodInfo* method);
// 0x4331c70

System_String_o *
PatreonEffects_RoleSpriteHelpers__SanitizePlayerText
          (Photon_Realtime_Player_o *player,System_String_o *text,MethodInfo *method)

{
  System_Text_RegularExpressions_Regex_o *__this;
  bool_conflict bVar1;
  System_Text_RegularExpressions_MatchEvaluator_o *pSVar2;
  System_String_o *pSVar3;
  System_String_o *extraout_RAX;
  System_Text_RegularExpressions_MatchEvaluator_o *__this_00;
  
  if (g_data_057ae081 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MatchEvaluator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RoleSpriteHelpers);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_SanitizePlayerText_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass6_0);
    g_data_057ae081 = '\x01';
  }
  pSVar2 = (System_Text_RegularExpressions_MatchEvaluator_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass6_0);
  __this_00 = pSVar2;
  System_Object___ctor((Il2CppObject *)pSVar2,(MethodInfo *)0x0);
  if (pSVar2 != (System_Text_RegularExpressions_MatchEvaluator_o *)0x0) {
    (pSVar2->fields).method_ptr = (intptr_t)player;
    il2cpp_runtime_helper_022b4080(&pSVar2->fields);
    bVar1 = System_String__IsNullOrEmpty(text,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      return text;
    }
    if (*(int *)(TypeInfo_RoleSpriteHelpers + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this = (System_Text_RegularExpressions_Regex_o *)**(undefined8 **)(TypeInfo_RoleSpriteHelpers + 0xb8);
    pSVar2 = (System_Text_RegularExpressions_MatchEvaluator_o *)il2cpp_runtime_helper_023052d0(TypeInfo_MatchEvaluator);
    __this_00 = pSVar2;
    System_Text_RegularExpressions_MatchEvaluator___ctor();
    if (__this != (System_Text_RegularExpressions_Regex_o *)0x0) {
      pSVar3 = System_Text_RegularExpressions_Regex__Replace_4906bf0(__this,text,pSVar2,(MethodInfo *)0x0);
      return pSVar3;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  return extraout_RAX;
}


// PatreonEffects.RoleSpriteHelpers$$GetRoles
// il2cpp: System_Collections_Generic_IEnumerable_string__o* PatreonEffects_RoleSpriteHelpers__GetRoles (Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x4331710

System_Collections_Generic_IEnumerable_string__o *
PatreonEffects_RoleSpriteHelpers__GetRoles(Photon_Realtime_Player_o *player,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  bool_conflict bVar3;
  Il2CppObject *raw;
  System_String_array *pSVar4;
  long lVar5;
  long lVar6;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  System_String_array *local_18;
  
  if (g_data_057ae082 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_Empty_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RoleSpriteHelpers);
    g_data_057ae082 = '\x01';
  }
  local_18 = (System_String_array *)0x0;
  if (player == (Photon_Realtime_Player_o *)0x0) {
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
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
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    raw = PhotonExtensions__GetCustomProperty
                    (player,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0xa8),(MethodInfo *)0x0);
    method_00 = extraout_RDX;
    if (*(int *)(TypeInfo_RoleSpriteHelpers + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      method_00 = extraout_RDX_00;
    }
    bVar3 = PatreonEffects_RoleSpriteHelpers__TryReadRoles(raw,&local_18,method_00);
    if ((char)bVar3 != '\0') {
      return (System_Collections_Generic_IEnumerable_string__o *)local_18;
    }
    if ((char)(player->fields).IsLocal != '\0') {
      if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar4 = ApplicationManagers_AccountManager__get_Roles((MethodInfo *)0x0);
      }
      else {
        pSVar4 = ApplicationManagers_AccountManager__get_Roles((MethodInfo *)0x0);
      }
      if (pSVar4 != (System_String_array *)0x0) {
        if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar4 = ApplicationManagers_AccountManager__get_Roles((MethodInfo *)0x0);
        return (System_Collections_Generic_IEnumerable_string__o *)pSVar4;
      }
    }
  }
  lVar5 = MethodInfo_String_Empty_String;
  if (*(long *)(MethodInfo_String_Empty_String + 0x38) == 0) {
    il2cpp_runtime_helper_02300a20(MethodInfo_String_Empty_String);
    lVar6 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
    bVar1 = *(byte *)(lVar6 + 0x135);
  }
  else {
    lVar6 = *(long *)(*(long *)(MethodInfo_String_Empty_String + 0x38) + 0x10);
    bVar1 = *(byte *)(lVar6 + 0x135);
  }
  if ((bVar1 & 1) == 0) {
    lVar6 = il2cpp_runtime_helper_023009c0();
    iVar2 = *(int *)(lVar6 + 0xe4);
  }
  else {
    iVar2 = *(int *)(lVar6 + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
    lVar5 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
    bVar1 = *(byte *)(lVar5 + 0x135);
  }
  else {
    lVar5 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
    bVar1 = *(byte *)(lVar5 + 0x135);
  }
  if ((bVar1 & 1) == 0) {
    lVar5 = il2cpp_runtime_helper_023009c0(lVar5);
  }
  return (System_Collections_Generic_IEnumerable_string__o *)**(undefined8 **)(lVar5 + 0xb8);
}


// PatreonEffects.RoleSpriteHelpers$$TryReadRoles
// il2cpp: bool PatreonEffects_RoleSpriteHelpers__TryReadRoles (Il2CppObject* raw, System_String_array** roles, const MethodInfo* method);
// 0x4331da0

bool_conflict
PatreonEffects_RoleSpriteHelpers__TryReadRoles
          (Il2CppObject *raw,System_String_array **roles,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  System_Object_array *pSVar5;
  char cVar6;
  bool_conflict bVar7;
  long lVar8;
  SimpleJSONFixed_JSONNode_o *a;
  System_Func_TSource__TResult__o *selector;
  System_Collections_Generic_IEnumerable_TResult__o *roles_00;
  System_String_array *pSVar9;
  System_Collections_Generic_List_object__o *__this;
  undefined8 *puVar10;
  long *plVar11;
  System_String_o *value;
  Il2CppObject *item;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  MethodInfo *method_00;
  undefined1 auVar15 [12];
  
  if (g_data_057ae083 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_Empty_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_String_Select_JSONNode_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_JSONNode_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RoleSpriteHelpers);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_TryReadRoles_b__8_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ae083 = '\x01';
  }
  lVar12 = MethodInfo_String_Empty_String;
  if (*(long *)(MethodInfo_String_Empty_String + 0x38) == 0) {
    il2cpp_runtime_helper_02300a20(MethodInfo_String_Empty_String);
    lVar8 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) goto label_04331e81;
label_04331ec3:
    if (*(int *)(lVar8 + 0xe4) == 0) goto label_04331e92;
label_04331ecc:
    lVar12 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
    bVar2 = *(byte *)(lVar12 + 0x135);
  }
  else {
    lVar8 = *(long *)(*(long *)(MethodInfo_String_Empty_String + 0x38) + 0x10);
    if ((*(byte *)(lVar8 + 0x135) & 1) != 0) goto label_04331ec3;
label_04331e81:
    lVar8 = il2cpp_runtime_helper_023009c0();
    if (*(int *)(lVar8 + 0xe4) != 0) goto label_04331ecc;
label_04331e92:
    il2cpp_runtime_helper_02337ed0();
    lVar12 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
    bVar2 = *(byte *)(lVar12 + 0x135);
  }
  if ((bVar2 & 1) == 0) {
    lVar12 = il2cpp_runtime_helper_023009c0(lVar12);
  }
  *roles = (System_String_array *)**(undefined8 **)(lVar12 + 0xb8);
  il2cpp_runtime_helper_022b4080(roles);
  if (((raw != (Il2CppObject *)0x0) && (plVar14 = &g_data_057b9b70, raw->klass == g_data_057b9c00)) &&
     (bVar7 = System_String__IsNullOrEmpty((System_String_o *)raw,(MethodInfo *)0x0), (char)bVar7 == '\0')) {
    a = SimpleJSONFixed_JSON__Parse((System_String_o *)raw,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar7 = SimpleJSONFixed_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar7 != '\0') {
      if (a == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_04332401;
      cVar6 = (*(a->klass->vtable)._16_get_IsArray.methodPtr)(a,(a->klass->vtable)._16_get_IsArray.method);
      if (cVar6 != '\0') {
        raw = (Il2CppObject *)
              (*(a->klass->vtable)._27_get_Children.methodPtr)(a,(a->klass->vtable)._27_get_Children.method);
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        selector = *(System_Func_TSource__TResult__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
        if (selector == (System_Func_TSource__TResult__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          selector = (System_Func_TSource__TResult__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_JSONNode_string);
          System_Func_object__object____ctor();
          lVar12 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_TSource__TResult__o **)(lVar12 + 8) = selector;
          il2cpp_runtime_helper_022b4080(lVar12 + 8,selector);
        }
        roles_00 = System_Linq_Enumerable__Select_object__object_
                             ((System_Collections_Generic_IEnumerable_TSource__o *)raw,selector,MethodInfo_IEnumerable_1_System_String_Select_JSONNode_String);
        if (*(int *)(TypeInfo_RoleSpriteHelpers + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar9 = PatreonEffects_RoleSpriteHelpers__RoleArray
                           ((System_Collections_Generic_IEnumerable_string__o *)roles_00,
                            (MethodInfo *)selector);
        *roles = pSVar9;
        il2cpp_runtime_helper_022b4080(roles,pSVar9);
        pSVar9 = *roles;
        if (pSVar9 != (System_String_array *)0x0) {
label_043323d0:
          return (bool_conflict)CONCAT71((int7)((ulong)pSVar9 >> 8),(int)pSVar9->max_length != 0);
        }
        il2cpp_runtime_helper_022b2c90();
      }
    }
  }
  plVar14 = (long *)il2cpp_runtime_helper_023051f0(raw,TypeInfo_IEnumerable);
  if ((plVar14 == (long *)0x0) || ((raw != (Il2CppObject *)0x0 && (raw->klass == g_data_057b9c00)))) {
    return 0;
  }
  __this = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor(__this,MethodInfo_List_1_System_String);
  lVar12 = *plVar14;
  if ((ulong)*(ushort *)(lVar12 + 0x12e) != 0) {
    lVar8 = 0;
    do {
      if (*(long *)(*(long *)(lVar12 + 0xb0) + lVar8) == TypeInfo_IEnumerable) {
        puVar10 = (undefined8 *)((long)*(int *)(*(long *)(lVar12 + 0xb0) + 8 + lVar8) * 0x10 + lVar12 + 0x138)
        ;
        goto label_04332138;
      }
      lVar8 = lVar8 + 0x10;
    } while ((ulong)*(ushort *)(lVar12 + 0x12e) << 4 != lVar8);
  }
  puVar10 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar14,TypeInfo_IEnumerable,0);
label_04332138:
  plVar14 = (long *)(*(code *)*puVar10)(plVar14,puVar10[1]);
  if (plVar14 != (long *)0x0) {
label_04332180:
    do {
      do {
        lVar12 = *plVar14;
        if ((ulong)*(ushort *)(lVar12 + 0x12e) != 0) {
          lVar8 = 0;
          do {
            if (*(long *)(*(long *)(lVar12 + 0xb0) + lVar8) == TypeInfo_IEnumerator) {
              puVar10 = (undefined8 *)
                        ((long)*(int *)(*(long *)(lVar12 + 0xb0) + 8 + lVar8) * 0x10 + lVar12 + 0x138);
              goto label_043321e3;
            }
            lVar8 = lVar8 + 0x10;
          } while ((ulong)*(ushort *)(lVar12 + 0x12e) << 4 != lVar8);
        }
        puVar10 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar14,TypeInfo_IEnumerator,0);
label_043321e3:
        cVar6 = (*(code *)*puVar10)(plVar14,puVar10[1]);
        if (cVar6 == '\0') {
          method_00 = TypeInfo_IDisposable;
          plVar11 = (long *)il2cpp_runtime_helper_023051f0();
          if (plVar11 == (long *)0x0) goto label_04332386;
          lVar12 = *plVar11;
          if ((ulong)*(ushort *)(lVar12 + 0x12e) == 0) goto label_0433235f;
          lVar8 = 0;
          goto label_04332350;
        }
        lVar12 = *plVar14;
        if ((ulong)*(ushort *)(lVar12 + 0x12e) != 0) {
          lVar8 = 0;
          do {
            if (*(long *)(*(long *)(lVar12 + 0xb0) + lVar8) == TypeInfo_IEnumerator) {
              puVar10 = (undefined8 *)
                        ((long)(*(int *)(*(long *)(lVar12 + 0xb0) + 8 + lVar8) + 1) * 0x10 + lVar12 + 0x138);
              goto label_04332268;
            }
            lVar8 = lVar8 + 0x10;
          } while ((ulong)*(ushort *)(lVar12 + 0x12e) << 4 != lVar8);
        }
        puVar10 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar14,TypeInfo_IEnumerator,1);
label_04332268:
        plVar11 = (long *)(*(code *)*puVar10)(plVar14,puVar10[1]);
      } while (plVar11 == (long *)0x0);
      value = (System_String_o *)(**(code **)(*plVar11 + 0x168))(plVar11);
      bVar7 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
    } while ((char)bVar7 != '\0');
    item = (Il2CppObject *)(**(code **)(*plVar11 + 0x168))(plVar11,*(undefined8 *)(*plVar11 + 0x170));
    lVar12 = MethodInfo_Void_Add;
    if (__this != (System_Collections_Generic_List_object__o *)0x0) {
      piVar1 = &(__this->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar5 = (__this->fields)._items;
      if (pSVar5 == (System_Object_array *)0x0) goto label_043323ed;
      uVar3 = (__this->fields)._size;
      if (uVar3 < (uint)pSVar5->max_length) {
        (__this->fields)._size = uVar3 + 1;
        pSVar5->m_Items[(int)uVar3] = item;
        il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar3,item);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  (__this,item,*(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
      }
      goto label_04332180;
    }
    il2cpp_runtime_helper_022b2c90();
label_043323ed:
    il2cpp_runtime_helper_022b2c90();
  }
  il2cpp_runtime_helper_022b2c90();
  il2cpp_runtime_helper_022fefe0();
  goto label_043323fc;
  while (lVar8 = lVar8 + 0x10, (ulong)*(ushort *)(lVar12 + 0x12e) << 4 != lVar8) {
label_04332350:
    if (*(MethodInfo **)(*(long *)(lVar12 + 0xb0) + lVar8) == TypeInfo_IDisposable) {
      puVar10 = (undefined8 *)(lVar12 + (long)*(int *)(*(long *)(lVar12 + 0xb0) + 8 + lVar8) * 0x10 + 0x138);
      goto label_0433237d;
    }
  }
label_0433235f:
  puVar10 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar11,TypeInfo_IDisposable,0);
label_0433237d:
  method_00 = (MethodInfo *)puVar10[1];
  (*(code *)*puVar10)(plVar11);
label_04332386:
  if (*(int *)(TypeInfo_RoleSpriteHelpers + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar9 = PatreonEffects_RoleSpriteHelpers__RoleArray
                     ((System_Collections_Generic_IEnumerable_string__o *)__this,method_00);
  *roles = pSVar9;
  il2cpp_runtime_helper_022b4080(roles,pSVar9);
  pSVar9 = *roles;
  if (pSVar9 != (System_String_array *)0x0) goto label_043323d0;
label_043323fc:
  il2cpp_runtime_helper_022b2c90();
label_04332401:
  auVar15 = il2cpp_runtime_helper_022b2c90();
  if (auVar15._8_4_ != 1) {
    _Unwind_Resume(auVar15._0_8_);
  }
  puVar10 = (undefined8 *)__cxa_begin_catch(auVar15._0_8_);
  cVar6 = il2cpp_runtime_helper_0233e000(plVar14[2],*(undefined8 *)*puVar10);
  if (cVar6 != '\0') {
    __cxa_end_catch();
    lVar12 = il2cpp_runtime_helper_023445d0(&MethodInfo_String_Empty_String);
    if (*(long *)(lVar12 + 0x38) == 0) {
      il2cpp_runtime_helper_02300a20(lVar12);
      lVar8 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
      bVar2 = *(byte *)(lVar8 + 0x135);
    }
    else {
      lVar8 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
      bVar2 = *(byte *)(lVar8 + 0x135);
    }
    if ((bVar2 & 1) == 0) {
      lVar8 = il2cpp_runtime_helper_023009c0();
      iVar4 = *(int *)(lVar8 + 0xe4);
    }
    else {
      iVar4 = *(int *)(lVar8 + 0xe4);
    }
    if (iVar4 == 0) {
      il2cpp_runtime_helper_02337ed0();
      lVar12 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
      bVar2 = *(byte *)(lVar12 + 0x135);
    }
    else {
      lVar12 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
      bVar2 = *(byte *)(lVar12 + 0x135);
    }
    if ((bVar2 & 1) == 0) {
      lVar12 = il2cpp_runtime_helper_023009c0(lVar12);
    }
    *roles = (System_String_array *)**(undefined8 **)(lVar12 + 0xb8);
    il2cpp_runtime_helper_022b4080(roles);
    return 0;
  }
  puVar13 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar13 = *puVar10;
  __cxa_throw(puVar13,&PTR_PTR_05215060,0);
}


// PatreonEffects.RoleSpriteHelpers$$RoleArray
// il2cpp: System_String_array* PatreonEffects_RoleSpriteHelpers__RoleArray (System_Collections_Generic_IEnumerable_string__o* roles, const MethodInfo* method);
// 0x43326e0

System_String_array *
PatreonEffects_RoleSpriteHelpers__RoleArray
          (System_Collections_Generic_IEnumerable_string__o *roles,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_TSource__bool__o *predicate;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar3;
  System_String_array *pSVar4;
  
  if (g_data_057ae084 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_String_Distinct_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_String_Where_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_string_bool);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringComparer);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_RoleArray_b__9_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ae084 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    predicate = *(System_Func_TSource__bool__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
  }
  else {
    predicate = *(System_Func_TSource__bool__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
  }
  if (predicate == (System_Func_TSource__bool__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    predicate = (System_Func_TSource__bool__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_string_bool);
    System_Func_object__bool____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_TSource__bool__o **)(lVar2 + 0x10) = predicate;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x10,predicate);
  }
  pSVar3 = System_Linq_Enumerable__Where_object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)roles,predicate,MethodInfo_IEnumerable_1_System_String_Where_String);
  if (*(int *)(TypeInfo_StringComparer + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057a9c88 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringComparer);
    g_data_057a9c88 = '\x01';
    iVar1 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar3 = System_Linq_Enumerable__Distinct_object__250cf70
                     (pSVar3,*(System_Collections_Generic_IEqualityComparer_TSource__o **)
                              (*(long *)(TypeInfo_StringComparer + 0xb8) + 0x18),MethodInfo_IEnumerable_1_System_String_Distinct_String);
  pSVar4 = (System_String_array *)System_Linq_Enumerable__ToArray_object_(pSVar3,MethodInfo_String_ToArray_String);
  return pSVar4;
}


// PatreonEffects.RoleSpriteHelpers$$TryGetDefinitionByRole
// il2cpp: bool PatreonEffects_RoleSpriteHelpers__TryGetDefinitionByRole (System_String_o* roleName, PatreonEffects_RoleSpriteDefinition_o* definition, const MethodInfo* method);
// 0x4331a40

bool_conflict
PatreonEffects_RoleSpriteHelpers__TryGetDefinitionByRole
          (System_String_o *roleName,PatreonEffects_RoleSpriteDefinition_o *definition,MethodInfo *method)

{
  System_Collections_Generic_IEnumerable_TSource__o *source;
  uint uVar1;
  bool_conflict bVar2;
  System_String_o *__this;
  System_Func_TSource__bool__o *predicate;
  Il2CppObject *arg0;
  System_String_o *pSVar3;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *pMVar4;
  Photon_Realtime_Player_o *player;
  PatreonEffects_RoleSpriteDefinition_o PVar5;
  int32_t iStack_54;
  PatreonEffects_RoleSpriteDefinition_o PStack_50;
  System_String_o *pSStack_40;
  PatreonEffects_RoleSpriteDefinition_o *pPStack_38;
  System_String_o *pSStack_30;
  
  if (g_data_057ae085 == '\0') {
    pSStack_30 = (System_String_o *)0x4331a63;
    il2cpp_runtime_helper_023445d0(&MethodInfo_RoleSpriteDefinition_FirstOrDefault_RoleSpriteDefinition);
    pSStack_30 = (System_String_o *)0x4331a6f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_RoleSpriteDefinition_bool);
    pSStack_30 = (System_String_o *)0x4331a7b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_RoleSpriteHelpers);
    pSStack_30 = (System_String_o *)0x4331a87;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetDefinitionByRole_b__0);
    pSStack_30 = (System_String_o *)0x4331a93;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass10_0);
    g_data_057ae085 = '\x01';
  }
  pSStack_30 = (System_String_o *)0x4331aa9;
  __this = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass10_0);
  player = (Photon_Realtime_Player_o *)0x0;
  pSStack_30 = (System_String_o *)0x4331ab6;
  pSVar3 = __this;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this != (System_String_o *)0x0) {
    *(System_String_o **)&(__this->fields)._stringLength = roleName;
    pSStack_30 = (System_String_o *)0x4331ad2;
    il2cpp_runtime_helper_022b4080(&__this->fields,roleName);
    if (*(int *)(TypeInfo_RoleSpriteHelpers + 0xe4) == 0) {
      pSStack_30 = (System_String_o *)0x4331aea;
      il2cpp_runtime_helper_02337ed0();
    }
    source = *(System_Collections_Generic_IEnumerable_TSource__o **)(*(long *)(TypeInfo_RoleSpriteHelpers + 0xb8) + 8);
    pSStack_30 = (System_String_o *)0x4331b07;
    predicate = (System_Func_TSource__bool__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_RoleSpriteDefinition_bool);
    pSStack_30 = (System_String_o *)0x4331b21;
    System_Func_RoleSpriteDefinition__bool____ctor();
    pSStack_30 = (System_String_o *)0x4331b36;
    PVar5 = System_Linq_Enumerable__FirstOrDefault_RoleSpriteDefinition_(source,predicate,MethodInfo_RoleSpriteDefinition_FirstOrDefault_RoleSpriteDefinition);
    (definition->fields).RoleName = PVar5.fields.RoleName;
    (definition->fields).SpriteIndex = PVar5.fields.SpriteIndex;
    pSStack_30 = (System_String_o *)0x4331b47;
    il2cpp_runtime_helper_022b4080(definition);
    pSStack_30 = (System_String_o *)0x4331b51;
    uVar1 = System_String__IsNullOrEmpty((definition->fields).RoleName,(MethodInfo *)0x0);
    return uVar1 ^ 1;
  }
  pSStack_30 = (System_String_o *)0x4331b64;
  il2cpp_runtime_helper_022b2c90();
  pSStack_40 = __this;
  pPStack_38 = definition;
  pSStack_30 = roleName;
  if (g_data_057ae080 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_RoleSpriteHelpers);
    il2cpp_runtime_helper_023445d0(&"<sprite={0}> {1}");
    il2cpp_runtime_helper_023445d0(&"None");
    g_data_057ae080 = '\x01';
  }
  PStack_50.fields.RoleName = (System_String_o *)0x0;
  PStack_50.fields.SpriteIndex = 0;
  PStack_50.fields._12_4_ = 0;
  bVar2 = System_String__IsNullOrEmpty(pSVar3,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    pMVar4 = extraout_RDX;
    if (*(int *)(TypeInfo_RoleSpriteHelpers + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pMVar4 = extraout_RDX_00;
    }
    bVar2 = PatreonEffects_RoleSpriteHelpers__TryGetDefinitionByRole(pSVar3,&PStack_50,pMVar4);
    if ((char)bVar2 != '\0') {
      pMVar4 = extraout_RDX_01;
      if (*(int *)(TypeInfo_RoleSpriteHelpers + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        pMVar4 = extraout_RDX_02;
      }
      bVar2 = PatreonEffects_RoleSpriteHelpers__HasRole(player,pSVar3,pMVar4);
      if ((char)bVar2 != '\0') {
        iStack_54 = PStack_50.fields.SpriteIndex;
        arg0 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_54);
        pSVar3 = System_String__Format_3af78e0
                           ("<sprite={0}> {1}",arg0,(Il2CppObject *)PStack_50.fields.RoleName,(MethodInfo *)0x0);
        return (bool_conflict)pSVar3;
      }
    }
  }
  return (bool_conflict)"None";
}


// PatreonEffects.RoleSpriteHelpers$$TryGetDefinitionBySpriteIndex
// il2cpp: bool PatreonEffects_RoleSpriteHelpers__TryGetDefinitionBySpriteIndex (int32_t spriteIndex, PatreonEffects_RoleSpriteDefinition_o* definition, const MethodInfo* method);
// 0x43328e0

bool_conflict
PatreonEffects_RoleSpriteHelpers__TryGetDefinitionBySpriteIndex
          (int32_t spriteIndex,PatreonEffects_RoleSpriteDefinition_o *definition,MethodInfo *method)

{
  System_Collections_Generic_IEnumerable_TSource__o *source;
  uint uVar1;
  bool_conflict extraout_EAX;
  Il2CppObject *__this;
  System_Func_TSource__bool__o *predicate;
  Il2CppObject *__this_00;
  PatreonEffects_RoleSpriteDefinition_o PVar2;
  
  if (g_data_057ae086 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_RoleSpriteDefinition_FirstOrDefault_RoleSpriteDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_RoleSpriteDefinition_bool);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RoleSpriteHelpers);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetDefinitionBySpriteIndex_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass11_0);
    g_data_057ae086 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass11_0);
  __this_00 = __this;
  System_Object___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Il2CppObject *)0x0) {
    *(int32_t *)&__this[1].klass = spriteIndex;
    if (*(int *)(TypeInfo_RoleSpriteHelpers + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    source = *(System_Collections_Generic_IEnumerable_TSource__o **)(*(long *)(TypeInfo_RoleSpriteHelpers + 0xb8) + 8);
    predicate = (System_Func_TSource__bool__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_RoleSpriteDefinition_bool);
    System_Func_RoleSpriteDefinition__bool____ctor();
    PVar2 = System_Linq_Enumerable__FirstOrDefault_RoleSpriteDefinition_(source,predicate,MethodInfo_RoleSpriteDefinition_FirstOrDefault_RoleSpriteDefinition);
    (definition->fields).RoleName = PVar2.fields.RoleName;
    (definition->fields).SpriteIndex = PVar2.fields.SpriteIndex;
    il2cpp_runtime_helper_022b4080(definition);
    uVar1 = System_String__IsNullOrEmpty((definition->fields).RoleName,(MethodInfo *)0x0);
    return uVar1 ^ 1;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  return extraout_EAX;
}


// PatreonEffects.RoleSpriteHelpers$$.cctor
// il2cpp: void PatreonEffects_RoleSpriteHelpers___cctor (const MethodInfo* method);
// 0x4332a10

void PatreonEffects_RoleSpriteHelpers___cctor(MethodInfo *method)

{
  long lVar1;
  System_Text_RegularExpressions_Regex_o *__this;
  long lVar2;
  Il2CppObject *__this_00;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (g_data_057ae087 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Regex);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RoleSpriteDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RoleSpriteHelpers);
    il2cpp_runtime_helper_023445d0(&"ModTeam");
    il2cpp_runtime_helper_023445d0(&"<sprite=(\\d+)>");
    il2cpp_runtime_helper_023445d0(&"Mapper");
    il2cpp_runtime_helper_023445d0(&"Supporter");
    il2cpp_runtime_helper_023445d0(&"Manager");
    il2cpp_runtime_helper_023445d0(&"Music");
    il2cpp_runtime_helper_023445d0(&"3D Art");
    il2cpp_runtime_helper_023445d0(&"Media");
    il2cpp_runtime_helper_023445d0(&"2D Art");
    il2cpp_runtime_helper_023445d0(&"Tester");
    il2cpp_runtime_helper_023445d0(&"Developer");
    g_data_057ae087 = '\x01';
  }
  __this = (System_Text_RegularExpressions_Regex_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Regex);
  System_Text_RegularExpressions_Regex___ctor_4907710(__this,"<sprite=(\\d+)>",9,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_RoleSpriteHelpers + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_RoleSpriteHelpers + 0xb8),__this);
  lVar2 = il2cpp_runtime_helper_022b2a40(TypeInfo_RoleSpriteDefinition,10);
  uStack_18 = 0;
  uStack_20 = "2D Art";
  il2cpp_runtime_helper_022b4080(&uStack_20);
  uStack_18 = CONCAT44(uStack_18._4_4_,0x8d);
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) = uStack_20;
      *(undefined4 *)(lVar2 + 0x28) = 0x8d;
      il2cpp_runtime_helper_022b4080(lVar2 + 0x20,0);
      uStack_28 = 0;
      uStack_30 = "3D Art";
      il2cpp_runtime_helper_022b4080(&uStack_30);
      uStack_28 = CONCAT44(uStack_28._4_4_,0x8e);
      if (1 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x30) = uStack_30;
        *(undefined4 *)(lVar2 + 0x38) = 0x8e;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x30,0);
        uStack_38 = 0;
        uStack_40 = "Developer";
        il2cpp_runtime_helper_022b4080(&uStack_40);
        uStack_38 = CONCAT44(uStack_38._4_4_,0x8f);
        if (2 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x40) = uStack_40;
          *(undefined4 *)(lVar2 + 0x48) = 0x8f;
          il2cpp_runtime_helper_022b4080(lVar2 + 0x40,0);
          uStack_48 = 0;
          uStack_50 = "Supporter";
          il2cpp_runtime_helper_022b4080(&uStack_50);
          uStack_48 = CONCAT44(uStack_48._4_4_,0x90);
          if (3 < *(uint *)(lVar2 + 0x18)) {
            *(undefined8 *)(lVar2 + 0x50) = uStack_50;
            *(undefined4 *)(lVar2 + 0x58) = 0x90;
            il2cpp_runtime_helper_022b4080(lVar2 + 0x50,0);
            uStack_58 = 0;
            uStack_60 = "Manager";
            il2cpp_runtime_helper_022b4080(&uStack_60);
            uStack_58 = CONCAT44(uStack_58._4_4_,0x91);
            if (4 < *(uint *)(lVar2 + 0x18)) {
              *(undefined8 *)(lVar2 + 0x60) = uStack_60;
              *(undefined4 *)(lVar2 + 0x68) = 0x91;
              il2cpp_runtime_helper_022b4080(lVar2 + 0x60,0);
              uStack_68 = 0;
              uStack_70 = "Mapper";
              il2cpp_runtime_helper_022b4080(&uStack_70);
              uStack_68 = CONCAT44(uStack_68._4_4_,0x92);
              if (5 < *(uint *)(lVar2 + 0x18)) {
                *(undefined8 *)(lVar2 + 0x70) = uStack_70;
                *(undefined4 *)(lVar2 + 0x78) = 0x92;
                il2cpp_runtime_helper_022b4080(lVar2 + 0x70,0);
                uStack_78 = 0;
                uStack_80 = "Media";
                il2cpp_runtime_helper_022b4080(&uStack_80);
                uStack_78 = CONCAT44(uStack_78._4_4_,0x93);
                if (6 < *(uint *)(lVar2 + 0x18)) {
                  *(undefined8 *)(lVar2 + 0x80) = uStack_80;
                  *(undefined4 *)(lVar2 + 0x88) = 0x93;
                  il2cpp_runtime_helper_022b4080(lVar2 + 0x80,0);
                  uStack_88 = 0;
                  uStack_90 = "ModTeam";
                  il2cpp_runtime_helper_022b4080(&uStack_90);
                  uStack_88 = CONCAT44(uStack_88._4_4_,0x94);
                  if (7 < *(uint *)(lVar2 + 0x18)) {
                    *(undefined8 *)(lVar2 + 0x90) = uStack_90;
                    *(undefined4 *)(lVar2 + 0x98) = 0x94;
                    il2cpp_runtime_helper_022b4080(lVar2 + 0x90,0);
                    uStack_98 = 0;
                    uStack_a0 = "Music";
                    il2cpp_runtime_helper_022b4080(&uStack_a0);
                    uStack_98 = CONCAT44(uStack_98._4_4_,0x95);
                    if (8 < *(uint *)(lVar2 + 0x18)) {
                      *(undefined8 *)(lVar2 + 0xa0) = uStack_a0;
                      *(undefined4 *)(lVar2 + 0xa8) = 0x95;
                      il2cpp_runtime_helper_022b4080(lVar2 + 0xa0,0);
                      uStack_a8 = 0;
                      uStack_b0 = "Tester";
                      il2cpp_runtime_helper_022b4080(&uStack_b0);
                      uStack_a8 = CONCAT44(uStack_a8._4_4_,0x96);
                      if (9 < *(uint *)(lVar2 + 0x18)) {
                        *(undefined8 *)(lVar2 + 0xb0) = uStack_b0;
                        *(undefined4 *)(lVar2 + 0xb8) = 0x96;
                        il2cpp_runtime_helper_022b4080(lVar2 + 0xb0,0);
                        lVar1 = *(long *)(TypeInfo_RoleSpriteHelpers + 0xb8);
                        *(long *)(lVar1 + 8) = lVar2;
                        il2cpp_runtime_helper_022b4080(lVar1 + 8,lVar2);
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
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae088 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ae088 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this_00;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this_00);
  return;
}


