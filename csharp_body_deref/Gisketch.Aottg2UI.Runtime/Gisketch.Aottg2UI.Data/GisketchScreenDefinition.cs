// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Data.GisketchScreenDefinition
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Data/GisketchScreenDefinition.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Data;

[Serializable]
[Token(Token = "0x2000049")]
public sealed class GisketchScreenDefinition
{
	[Token(Token = "0x4000164")]
	[FieldOffset(Offset = "0x10")]
	public string id;

	[Token(Token = "0x4000165")]
	[FieldOffset(Offset = "0x18")]
	public string title;

	[Token(Token = "0x4000166")]
	[FieldOffset(Offset = "0x20")]
	public string searchTitle;

	[Token(Token = "0x4000167")]
	[FieldOffset(Offset = "0x28")]
	public string searchGroup;

	[Token(Token = "0x4000168")]
	[FieldOffset(Offset = "0x30")]
	public string backScreenId;

	[Token(Token = "0x4000169")]
	[FieldOffset(Offset = "0x38")]
	public string controller;

	[Token(Token = "0x400016A")]
	[FieldOffset(Offset = "0x40")]
	public GisketchMotionDefinition enter;

	[Token(Token = "0x400016B")]
	[FieldOffset(Offset = "0x48")]
	public GisketchMotionDefinition exit;

	[Token(Token = "0x400016C")]
	[FieldOffset(Offset = "0x50")]
	public GisketchNodeDefinition root;

	[Token(Token = "0x6000252")]
	[Address(RVA = "0x3A5B1A0", Offset = "0x3A5B1A0", VA = "0x3A5B1A0")]
	public static GisketchScreenDefinition FromJson(string json)
	{
		return null;
	}

	[Token(Token = "0x6000253")]
	[Address(RVA = "0x3A5B250", Offset = "0x3A5B250", VA = "0x3A5B250")]
	public string GetRootMotion()
	{
		return null;
	}

	[Token(Token = "0x6000254")]
	[Address(RVA = "0x3A5B290", Offset = "0x3A5B290", VA = "0x3A5B290")]
	public GisketchScreenDefinition()
	{
	}
}
