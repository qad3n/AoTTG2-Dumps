// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Data.GisketchScreenDefinition
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Data/GisketchScreenDefinition.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Data;

[Serializable]
[Token(Token = "0x200005C")]
public sealed class GisketchScreenDefinition
{
	[Token(Token = "0x40001C1")]
	[FieldOffset(Offset = "0x10")]
	public string id;

	[Token(Token = "0x40001C2")]
	[FieldOffset(Offset = "0x18")]
	public string title;

	[Token(Token = "0x40001C3")]
	[FieldOffset(Offset = "0x20")]
	public string searchTitle;

	[Token(Token = "0x40001C4")]
	[FieldOffset(Offset = "0x28")]
	public string searchGroup;

	[Token(Token = "0x40001C5")]
	[FieldOffset(Offset = "0x30")]
	public string backScreenId;

	[Token(Token = "0x40001C6")]
	[FieldOffset(Offset = "0x38")]
	public string backActionId;

	[Token(Token = "0x40001C7")]
	[FieldOffset(Offset = "0x40")]
	public GisketchScreenLifecycle lifecycle;

	[Token(Token = "0x40001C8")]
	[FieldOffset(Offset = "0x48")]
	public string controller;

	[Token(Token = "0x40001C9")]
	[FieldOffset(Offset = "0x50")]
	public GisketchMotionDefinition enter;

	[Token(Token = "0x40001CA")]
	[FieldOffset(Offset = "0x58")]
	public GisketchMotionDefinition exit;

	[Token(Token = "0x40001CB")]
	[FieldOffset(Offset = "0x60")]
	public GisketchNodeDefinition root;

	[Token(Token = "0x600031C")]
	[Address(RVA = "0x18D1FD0", Offset = "0x18D05D0", VA = "0x1818D1FD0")]
	public static GisketchScreenDefinition FromJson(string json)
	{
		return null;
	}

	[Token(Token = "0x600031D")]
	[Address(RVA = "0x18D2080", Offset = "0x18D0680", VA = "0x1818D2080")]
	public string GetRootMotion()
	{
		return null;
	}

	[Token(Token = "0x600031E")]
	[Address(RVA = "0x18D20C0", Offset = "0x18D06C0", VA = "0x1818D20C0")]
	public bool UsesCachedLifecycle()
	{
		return default(bool);
	}

	[Token(Token = "0x600031F")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public GisketchScreenDefinition()
	{
	}
}
