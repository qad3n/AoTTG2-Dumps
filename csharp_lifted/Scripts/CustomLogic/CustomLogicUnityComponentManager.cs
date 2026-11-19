// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicUnityComponentManager
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicUnityComponentManager.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x2000657")]
internal static class CustomLogicUnityComponentManager
{
	[Token(Token = "0x2000658")]
	private struct ComponentTypePair
	{
		[Token(Token = "0x4001C1D")]
		[FieldOffset(Offset = "0x0")]
		public readonly Type UnityComponentType;

		[Token(Token = "0x4001C1E")]
		[FieldOffset(Offset = "0x8")]
		public readonly Type CLComponentType;

		[Token(Token = "0x6003CFC")]
		[Address(RVA = "0x5A8FBA0", Offset = "0x5A8EBA0", VA = "0x5A8FBA0")]
		public ComponentTypePair(Type unityComponentType, Type clComponentType)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicUnityComponentManager.c (CustomLogic.CustomLogicUnityComponentManager.ComponentTypePair$$.ctor): clean
			this.UnityComponentType = unityComponentType;
			this.CLComponentType = clComponentType;
			return;
		}
	}

	[Token(Token = "0x4001C1C")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<string, ComponentTypePair> _unityComponentTypes;

	[Token(Token = "0x6003CFA")]
	[Address(RVA = "0x5A8F7D0", Offset = "0x5A8E7D0", VA = "0x5A8F7D0")]
	public static BuiltinComponentInstance GetUnityComponentByNameWithMapObjectOwner(CustomLogicMapObjectBuiltin owner, string name)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicUnityComponentManager.c (CustomLogic.CustomLogicUnityComponentManager$$GetUnityComponentByNameWithMapObjectOwner): 3 lines keep C-only constructs
		byte bVar1;
		Dictionary<string, CustomLogicUnityComponentManager.ComponentTypePair> pSVar2;
		Transform __this;
		Component pUVar3;
		bool bVar4;
		CustomLogicTransformBuiltin pCVar5;
		Object[] args;
		object pIVar6;
		BuiltinComponentInstance pCVar7;
		CustomLogicUnityComponentManager.ComponentTypePair CVar8;
		CustomLogicUnityComponentManager.ComponentTypePair CVar9;
		Component local_30;

		local_30 = null;
		pSVar2 = CustomLogicUnityComponentManager._unityComponentTypes;
		if (pSVar2 != null) {
			bVar4 = pSVar2.ContainsKey((object)name);
			if (!bVar4) {
				return null;
			}
			pSVar2 = CustomLogicUnityComponentManager._unityComponentTypes;
			if (pSVar2 != null) {
				CVar8 = pSVar2.get_Item((object)name);
				pSVar2 = CustomLogicUnityComponentManager._unityComponentTypes;
				if (pSVar2 != null) {
					CVar9 = pSVar2.get_Item((object)name);
					if (((owner != null) &&(pCVar5 = owner.Transform, pCVar5 != null)) &&(__this = pCVar5.Value, __this != null)) {
						bVar4 = __this.TryGetComponent(CVar8.UnityComponentType, ref local_30);
						if (!bVar4) {
							return null;
						}
						args = (Object[])new object[2];
						if (args != null) {
							pIVar6 = il2cpp_vm_Object_IsInst((object)owner, (((args.obj).klass)._1).element_class);
							if (pIVar6 == null) {
	label_05b8fa18: ;
								pIVar6 = new ArrayTypeMismatchException();
								throw pIVar6;
							}
							if ((int)args.Length != 0) {
								args[0] = (object)owner;
								pUVar3 = local_30;
								if ((local_30 != null) &&(pIVar6 = il2cpp_vm_Object_IsInst((object)local_30, (((args.obj).klass)._1).element_class), pIVar6 == null)) goto label_05b8fa18;
								if ((args.Length & 0xfffffffe) != 0) {
									args[1] = (object)pUVar3;
									pCVar7 = (BuiltinComponentInstance)Activator.CreateInstance(CVar9.CLComponentType, args);
									if (pCVar7 == null) {
										return null;
									}
									bVar1 = (typeof(BuiltinComponentInstance)._2).typeHierarchyDepth;
									if (((((Il2CppClass)pCVar7.klass)._2).typeHierarchyDepth < bVar1) ||((((Il2CppClass)pCVar7.klass)._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(BuiltinComponentInstance))) {
										throw new InvalidCastException();
									}
									return pCVar7;
								}
							}
							throw new IndexOutOfRangeException();
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicUnityComponentManager.c.

	// CustomLogic.CustomLogicUnityComponentManager$$.cctor: 1 lines keep C-only constructs
	static CustomLogicUnityComponentManager()
	{
		CustomLogicUnityComponentManager.ComponentTypePair value;
		Il2CppType handle;
		Dictionary<string, CustomLogicUnityComponentManager.ComponentTypePair> __this;
		String key;
		Type pSVar1;
		Type pSVar2;
		Type pSStack_38;
		Type pSStack_30;

		__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Dictionary<string, CustomLogicUnityComponentManager.ComponentTypePair>));
		__this = new Dictionary<object, CustomLogicUnityComponentManager.ComponentTypePair>();
		key = CustomLogicUnityComponentEnum.VideoPlayer;
		handle = TypeRef_UnityEngine_Video_VideoPlayer;
		pSVar1 = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
		pSVar2 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_CustomLogic_CustomLogicVideoPlayerBuiltin);
		pSStack_30 = null;
		pSStack_38 = pSVar1;
		pSStack_30 = pSVar2;
		if (__this == null) {
			throw new NullReferenceException();
		}
		value.CLComponentType = pSStack_30;
		value.UnityComponentType = pSStack_38;
		__this.Add((object)key, value);
		CustomLogicUnityComponentManager._unityComponentTypes = __this;
		return;
	}
}
