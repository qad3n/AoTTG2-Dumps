// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Data.GisketchMotionDefinition
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Data/GisketchMotionDefinition.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Data;

[Serializable]
[Token(Token = "0x2000064")]
public sealed class GisketchMotionDefinition
{
	[Token(Token = "0x4000235")]
	[FieldOffset(Offset = "0x10")]
	public string preset;

	[Token(Token = "0x4000236")]
	[FieldOffset(Offset = "0x18")]
	public string group;

	[Token(Token = "0x4000237")]
	[FieldOffset(Offset = "0x20")]
	public float duration;

	[Token(Token = "0x4000238")]
	[FieldOffset(Offset = "0x24")]
	public float delay;

	[Token(Token = "0x4000239")]
	[FieldOffset(Offset = "0x28")]
	public float stagger;

	[Token(Token = "0x400023A")]
	[FieldOffset(Offset = "0x2C")]
	public int order;

	[Token(Token = "0x6000328")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public GisketchMotionDefinition()
	{
	}
}
