using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x200045A")]
internal static class CustomLogicUnityComponentManager
{
	[Token(Token = "0x200045B")]
	private struct ComponentTypePair
	{
		[Token(Token = "0x4001322")]
		[FieldOffset(Offset = "0x0")]
		public readonly Type UnityComponentType;

		[Token(Token = "0x4001323")]
		[FieldOffset(Offset = "0x8")]
		public readonly Type CLComponentType;

		[Token(Token = "0x6002ED9")]
		[Address(RVA = "0x3E6E700", Offset = "0x3E6E700", VA = "0x3E6E700")]
		public ComponentTypePair(Type unityComponentType, Type clComponentType)
		{
		}
	}

	[Token(Token = "0x4001321")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<string, ComponentTypePair> _unityComponentTypes;

	[Token(Token = "0x6002ED7")]
	[Address(RVA = "0x3E6E340", Offset = "0x3E6E340", VA = "0x3E6E340")]
	public static BuiltinComponentInstance GetUnityComponentByNameWithMapObjectOwner(CustomLogicMapObjectBuiltin owner, string name)
	{
		return null;
	}
}
