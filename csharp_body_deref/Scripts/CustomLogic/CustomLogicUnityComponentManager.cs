// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicUnityComponentManager
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicUnityComponentManager.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x200049F")]
internal static class CustomLogicUnityComponentManager
{
	[Token(Token = "0x20004A0")]
	private struct ComponentTypePair
	{
		[Token(Token = "0x4001431")]
		[FieldOffset(Offset = "0x0")]
		public readonly Type UnityComponentType;

		[Token(Token = "0x4001432")]
		[FieldOffset(Offset = "0x8")]
		public readonly Type CLComponentType;

		[Token(Token = "0x60030E6")]
		[Address(RVA = "0x417AC10", Offset = "0x417AC10", VA = "0x417AC10")]
		public ComponentTypePair(Type unityComponentType, Type clComponentType)
		{
		}
	}

	[Token(Token = "0x4001430")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<string, ComponentTypePair> _unityComponentTypes;

	[Token(Token = "0x60030E4")]
	[Address(RVA = "0x417A850", Offset = "0x417A850", VA = "0x417A850")]
	public static BuiltinComponentInstance GetUnityComponentByNameWithMapObjectOwner(CustomLogicMapObjectBuiltin owner, string name)
	{
		return null;
	}
}
