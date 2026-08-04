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
[Token(Token = "0x2000051")]
public sealed class GisketchMotionDefinition
{
	[Token(Token = "0x40001CB")]
	[FieldOffset(Offset = "0x10")]
	public string preset;

	[Token(Token = "0x40001CC")]
	[FieldOffset(Offset = "0x18")]
	public string group;

	[Token(Token = "0x40001CD")]
	[FieldOffset(Offset = "0x20")]
	public float duration;

	[Token(Token = "0x40001CE")]
	[FieldOffset(Offset = "0x24")]
	public float delay;

	[Token(Token = "0x40001CF")]
	[FieldOffset(Offset = "0x28")]
	public float stagger;

	[Token(Token = "0x40001D0")]
	[FieldOffset(Offset = "0x2C")]
	public int order;

	[Token(Token = "0x600025C")]
	[Address(RVA = "0x3A5B2E0", Offset = "0x3A5B2E0", VA = "0x3A5B2E0")]
	public GisketchMotionDefinition()
	{
	}
}
