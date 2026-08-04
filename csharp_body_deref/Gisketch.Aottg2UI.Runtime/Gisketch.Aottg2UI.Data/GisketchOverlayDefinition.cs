// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Data.GisketchOverlayDefinition
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Data/GisketchOverlayDefinition.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Data;

[Serializable]
[Token(Token = "0x200004C")]
public sealed class GisketchOverlayDefinition
{
	[Token(Token = "0x400019C")]
	[FieldOffset(Offset = "0x10")]
	public string id;

	[Token(Token = "0x400019D")]
	[FieldOffset(Offset = "0x18")]
	public string title;

	[Token(Token = "0x400019E")]
	[FieldOffset(Offset = "0x20")]
	public bool modal;

	[Token(Token = "0x400019F")]
	[FieldOffset(Offset = "0x21")]
	public bool dismissOnBackdrop;

	[Token(Token = "0x40001A0")]
	[FieldOffset(Offset = "0x28")]
	public GisketchMotionDefinition enter;

	[Token(Token = "0x40001A1")]
	[FieldOffset(Offset = "0x30")]
	public GisketchMotionDefinition exit;

	[Token(Token = "0x40001A2")]
	[FieldOffset(Offset = "0x38")]
	public GisketchNodeDefinition root;

	[Token(Token = "0x6000257")]
	[Address(RVA = "0x3A53140", Offset = "0x3A53140", VA = "0x3A53140")]
	public GisketchOverlayDefinition()
	{
	}
}
