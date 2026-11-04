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

[Token(Token = "0x20005F8")]
internal static class CustomLogicUnityComponentManager
{
	[Token(Token = "0x20005F9")]
	private struct ComponentTypePair
	{
		[Token(Token = "0x4001A7C")]
		[FieldOffset(Offset = "0x0")]
		public readonly Type UnityComponentType;

		[Token(Token = "0x4001A7D")]
		[FieldOffset(Offset = "0x8")]
		public readonly Type CLComponentType;

		[Token(Token = "0x6003A6E")]
		[Address(RVA = "0xB5D000", Offset = "0xB5B600", VA = "0x180B5D000")]
		public ComponentTypePair(Type unityComponentType, Type clComponentType)
		{
		}
	}

	[Token(Token = "0x4001A7B")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<string, ComponentTypePair> _unityComponentTypes;

	[Token(Token = "0x6003A6C")]
	[Address(RVA = "0x20EA230", Offset = "0x20E8830", VA = "0x1820EA230")]
	public static BuiltinComponentInstance GetUnityComponentByNameWithMapObjectOwner(CustomLogicMapObjectBuiltin owner, string name)
	{
		return null;
	}
}
