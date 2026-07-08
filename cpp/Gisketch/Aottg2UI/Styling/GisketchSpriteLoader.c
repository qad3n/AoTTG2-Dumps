// Type: Gisketch.Aottg2UI.Styling.GisketchSpriteLoader
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Styling/GisketchSpriteLoader.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Styling.GisketchSpriteLoader$$Load
// il2cpp: UnityEngine_Sprite_o* Gisketch_Aottg2UI_Styling_GisketchSpriteLoader__Load (System_String_o* resourcePath, const MethodInfo* method);
// 0x3acbe50

UnityEngine_Sprite_o *
Gisketch_Aottg2UI_Styling_GisketchSpriteLoader__Load
          (System_String_o *resourcePath,MethodInfo *method)

{
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this;
  bool_conflict bVar1;
  UnityEngine_Object_o *x;
  UnityEngine_Texture2D_o *x_00;
  System_String_o *pSVar2;
  System_String_o *str2;
  System_String_o *pSVar3;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *pMVar4;
  System_String_o *area;
  undefined1 in_stack_ffffffffffffff68 [12];
  undefined4 uVar5;
  UnityEngine_Sprite_o *pUVar6;
  undefined8 in_stack_ffffffffffffff80;
  System_String_o *local_78;
  System_String_o *pSStack_70;
  _union_13 local_68;
  _union_14 _Stack_60;
  undefined1 local_50 [32];
  
  if (DAT_0570133f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchSpriteLoader);
    il2cpp_init_method_metadata(&TypeInfo_GisketchUiPerfLog);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&MethodInfo_Sprite_Load_Sprite);
    il2cpp_init_method_metadata(&"x");
    il2cpp_init_method_metadata(&"null");
    il2cpp_init_method_metadata(&" => ");
    il2cpp_init_method_metadata(&"SpriteLoader.ResourcesLoadSprite");
    DAT_0570133f = '\x01';
  }
  pUVar6 = (UnityEngine_Sprite_o *)0x0;
  local_68 = (_union_13)0x0;
  _Stack_60 = (_union_14)0x0;
  local_78 = (System_String_o *)0x0;
  pSStack_70 = (System_String_o *)0x0;
  uVar5 = 0;
  x = (UnityEngine_Object_o *)0x0;
  bVar1 = System_String__IsNullOrEmpty(resourcePath,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    pMVar4 = extraout_RDX;
    if (*(int *)(TypeInfo_GisketchSpriteLoader + 0xe4) == 0) {
      il2cpp_init_class();
      pMVar4 = extraout_RDX_00;
    }
    bVar1 = Gisketch_Aottg2UI_Styling_GisketchSpriteLoader__TryGetCached
                      (resourcePath,(UnityEngine_Sprite_o **)&stack0xffffffffffffff78,pMVar4);
    if ((char)bVar1 != '\0') {
      return pUVar6;
    }
    if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
      il2cpp_init_class();
    }
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Time
              ((Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o *)local_50,"SpriteLoader.ResourcesLoadSprite",
               resourcePath,(MethodInfo *)0x0);
    local_68 = (_union_13)local_50._16_8_;
    _Stack_60 = (_union_14)local_50._24_8_;
    local_78 = (System_String_o *)local_50._0_8_;
    pSStack_70 = (System_String_o *)local_50._8_8_;
    x = (UnityEngine_Object_o *)UnityEngine_Resources__Load<object>(resourcePath,MethodInfo_Sprite_Load_Sprite);
    __this.fields._detail._4_4_ = uVar5;
    __this.fields._0_12_ = in_stack_ffffffffffffff68;
    __this.fields._startMs = (int64_t)pUVar6;
    __this.fields._enabled = (int)in_stack_ffffffffffffff80;
    __this.fields._hotLoop = (int)((ulong)in_stack_ffffffffffffff80 >> 0x20);
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(__this,(MethodInfo *)&local_78);
    pMVar4 = extraout_RDX_01;
    if (*(int *)(TypeInfo_GisketchSpriteLoader + 0xe4) == 0) {
      il2cpp_init_class();
      pMVar4 = extraout_RDX_02;
    }
    Gisketch_Aottg2UI_Styling_GisketchSpriteLoader__Store
              (resourcePath,(UnityEngine_Sprite_o *)x,pMVar4);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    x_00 = (UnityEngine_Texture2D_o *)0x0;
    bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      if (x == (UnityEngine_Object_o *)0x0) goto LAB_03acc0f7;
      x_00 = UnityEngine_Sprite__get_texture((UnityEngine_Sprite_o *)x,(MethodInfo *)0x0);
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    pSVar3 = " => ";
    pSVar2 = "null";
    area = "SpriteLoader.ResourcesLoadSprite";
    if ((char)bVar1 != '\0') {
      if (x_00 == (UnityEngine_Texture2D_o *)0x0) {
LAB_03acc0f7:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      (*(x_00->klass->vtable)._5_get_width.methodPtr)(x_00);
      pSVar2 = System_Int32__ToString((int32_t)&stack0xffffffffffffff74,(MethodInfo *)0x0);
      (*(x_00->klass->vtable)._7_get_height.methodPtr)(x_00);
      str2 = System_Int32__ToString((int32_t)&stack0xffffffffffffff74,(MethodInfo *)0x0);
      pSVar2 = System_String__Concat(pSVar2,"x",str2,(MethodInfo *)0x0);
    }
    pSVar3 = System_String__Concat(resourcePath,pSVar3,pSVar2,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
      il2cpp_init_class();
    }
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark(area,pSVar3,(MethodInfo *)0x0);
  }
  return (UnityEngine_Sprite_o *)x;
}


// Gisketch.Aottg2UI.Styling.GisketchSpriteLoader$$TryGetCached
// il2cpp: bool Gisketch_Aottg2UI_Styling_GisketchSpriteLoader__TryGetCached (System_String_o* resourcePath, UnityEngine_Sprite_o** sprite, const MethodInfo* method);
// 0x3acc170

bool_conflict
Gisketch_Aottg2UI_Styling_GisketchSpriteLoader__TryGetCached
          (System_String_o *resourcePath,UnityEngine_Sprite_o **sprite,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  bool_conflict bVar1;
  MethodInfo *extraout_RDX;
  
  if (DAT_05701340 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
    il2cpp_init_method_metadata(&TypeInfo_GisketchSpriteLoader);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05701340 = '\x01';
    method = extraout_RDX;
  }
  *sprite = (UnityEngine_Sprite_o *)0x0;
  il2cpp_runtime_glue(sprite,0,method);
  bVar1 = System_String__IsNullOrEmpty(resourcePath,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    if (*(int *)(TypeInfo_GisketchSpriteLoader + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if ((System_Collections_Generic_Dictionary_object__object__o *)
        **(undefined8 **)(TypeInfo_GisketchSpriteLoader + 0xb8) ==
        (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    bVar1 = System_Collections_Generic_Dictionary<object__object>__TryGetValue
                      ((System_Collections_Generic_Dictionary_object__object__o *)
                       **(undefined8 **)(TypeInfo_GisketchSpriteLoader + 0xb8),(Il2CppObject *)resourcePath,
                       (Il2CppObject **)sprite,MethodInfo_Boolean_TryGetValue);
    if ((char)bVar1 != '\0') {
      x = (UnityEngine_Object_o *)*sprite;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return 0;
}


// Gisketch.Aottg2UI.Styling.GisketchSpriteLoader$$Store
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchSpriteLoader__Store (System_String_o* resourcePath, UnityEngine_Sprite_o* sprite, const MethodInfo* method);
// 0x3acc250

void Gisketch_Aottg2UI_Styling_GisketchSpriteLoader__Store
               (System_String_o *resourcePath,UnityEngine_Sprite_o *sprite,MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (DAT_05701341 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&TypeInfo_GisketchSpriteLoader);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05701341 = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(resourcePath,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)sprite,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar1 != '\0') {
      if (*(int *)(TypeInfo_GisketchSpriteLoader + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if ((System_Collections_Generic_Dictionary_object__object__o *)
          **(undefined8 **)(TypeInfo_GisketchSpriteLoader + 0xb8) !=
          (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary<object__object>__set_Item
                  ((System_Collections_Generic_Dictionary_object__object__o *)
                   **(undefined8 **)(TypeInfo_GisketchSpriteLoader + 0xb8),(Il2CppObject *)resourcePath,
                   (Il2CppObject *)sprite,MethodInfo_Void_set_Item);
        return;
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  return;
}


// Gisketch.Aottg2UI.Styling.GisketchSpriteLoader$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchSpriteLoader___cctor (const MethodInfo* method);
// 0x3acc320

void Gisketch_Aottg2UI_Styling_GisketchSpriteLoader___cctor(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  
  if (DAT_05701342 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_UnityEngine_Sprite);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__Sprite);
    il2cpp_init_method_metadata(&TypeInfo_GisketchSpriteLoader);
    DAT_05701342 = '\x01';
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           il2cpp_runtime_glue(TypeInfo_Dictionary_string__Sprite);
  System_Collections_Generic_Dictionary<object__object>___ctor(__this,MethodInfo_Dictionary_2_System_String_UnityEngine_Sprite);
  **(undefined8 **)(TypeInfo_GisketchSpriteLoader + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_GisketchSpriteLoader + 0xb8),__this);
  return;
}


