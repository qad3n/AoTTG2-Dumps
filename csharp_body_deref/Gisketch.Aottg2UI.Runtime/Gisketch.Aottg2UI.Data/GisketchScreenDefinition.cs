using System;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Data;

[Serializable]
[Token(Token = "0x2000047")]
public sealed class GisketchScreenDefinition
{
	[Token(Token = "0x400015D")]
	[FieldOffset(Offset = "0x10")]
	public string id;

	[Token(Token = "0x400015E")]
	[FieldOffset(Offset = "0x18")]
	public string title;

	[Token(Token = "0x400015F")]
	[FieldOffset(Offset = "0x20")]
	public string searchTitle;

	[Token(Token = "0x4000160")]
	[FieldOffset(Offset = "0x28")]
	public string searchGroup;

	[Token(Token = "0x4000161")]
	[FieldOffset(Offset = "0x30")]
	public string backScreenId;

	[Token(Token = "0x4000162")]
	[FieldOffset(Offset = "0x38")]
	public string controller;

	[Token(Token = "0x4000163")]
	[FieldOffset(Offset = "0x40")]
	public GisketchMotionDefinition enter;

	[Token(Token = "0x4000164")]
	[FieldOffset(Offset = "0x48")]
	public GisketchMotionDefinition exit;

	[Token(Token = "0x4000165")]
	[FieldOffset(Offset = "0x50")]
	public GisketchNodeDefinition root;

	[Token(Token = "0x6000243")]
	[Address(RVA = "0x39F0420", Offset = "0x39F0420", VA = "0x39F0420")]
	public static GisketchScreenDefinition FromJson(string json)
	{
		return null;
	}

	[Token(Token = "0x6000244")]
	[Address(RVA = "0x39F04D0", Offset = "0x39F04D0", VA = "0x39F04D0")]
	public string GetRootMotion()
	{
		return null;
	}

	[Token(Token = "0x6000245")]
	[Address(RVA = "0x39F0510", Offset = "0x39F0510", VA = "0x39F0510")]
	public GisketchScreenDefinition()
	{
	}
}
