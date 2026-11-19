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
[Token(Token = "0x2000062")]
public sealed class GisketchScreenDefinition
{
	[Token(Token = "0x40001E5")]
	[FieldOffset(Offset = "0x10")]
	public string id;

	[Token(Token = "0x40001E6")]
	[FieldOffset(Offset = "0x18")]
	public string title;

	[Token(Token = "0x40001E7")]
	[FieldOffset(Offset = "0x20")]
	public string searchTitle;

	[Token(Token = "0x40001E8")]
	[FieldOffset(Offset = "0x28")]
	public string searchGroup;

	[Token(Token = "0x40001E9")]
	[FieldOffset(Offset = "0x30")]
	public string backScreenId;

	[Token(Token = "0x40001EA")]
	[FieldOffset(Offset = "0x38")]
	public string backActionId;

	[Token(Token = "0x40001EB")]
	[FieldOffset(Offset = "0x40")]
	public GisketchScreenLifecycle lifecycle;

	[Token(Token = "0x40001EC")]
	[FieldOffset(Offset = "0x48")]
	public string controller;

	[Token(Token = "0x40001ED")]
	[FieldOffset(Offset = "0x50")]
	public GisketchMotionDefinition enter;

	[Token(Token = "0x40001EE")]
	[FieldOffset(Offset = "0x58")]
	public GisketchMotionDefinition exit;

	[Token(Token = "0x40001EF")]
	[FieldOffset(Offset = "0x60")]
	public GisketchNodeDefinition root;

	[Token(Token = "0x6000367")]
	[Address(RVA = "0x5260FF0", Offset = "0x525FFF0", VA = "0x5260FF0")]
	public static GisketchScreenDefinition FromJson(string json)
	{
		return null;
	}

	[Token(Token = "0x6000368")]
	[Address(RVA = "0x52610A0", Offset = "0x52600A0", VA = "0x52610A0")]
	public string GetRootMotion()
	{
		return null;
	}

	[Token(Token = "0x6000369")]
	[Address(RVA = "0x5251210", Offset = "0x5250210", VA = "0x5251210")]
	public bool UsesCachedLifecycle()
	{
		return default(bool);
	}

	[Token(Token = "0x600036A")]
	[Address(RVA = "0x52610E0", Offset = "0x52600E0", VA = "0x52610E0")]
	public GisketchScreenDefinition()
	{
	}
}
