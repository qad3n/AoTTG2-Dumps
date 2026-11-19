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
		}
	}

	[Token(Token = "0x4001C1C")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<string, ComponentTypePair> _unityComponentTypes;

	[Token(Token = "0x6003CFA")]
	[Address(RVA = "0x5A8F7D0", Offset = "0x5A8E7D0", VA = "0x5A8F7D0")]
	public static BuiltinComponentInstance GetUnityComponentByNameWithMapObjectOwner(CustomLogicMapObjectBuiltin owner, string name)
	{
		return null;
	}
}
