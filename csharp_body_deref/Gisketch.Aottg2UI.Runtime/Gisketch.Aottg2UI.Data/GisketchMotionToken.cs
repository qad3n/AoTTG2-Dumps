// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Data.GisketchMotionToken
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Data/GisketchMotionToken.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Data;

[Serializable]
[Token(Token = "0x2000058")]
public sealed class GisketchMotionToken
{
	[Token(Token = "0x40001F9")]
	[FieldOffset(Offset = "0x10")]
	public string name;

	[Token(Token = "0x40001FA")]
	[FieldOffset(Offset = "0x18")]
	public string preset;

	[Token(Token = "0x40001FB")]
	[FieldOffset(Offset = "0x20")]
	public float duration;

	[Token(Token = "0x6000264")]
	[Address(RVA = "0x3A5B3F0", Offset = "0x3A5B3F0", VA = "0x3A5B3F0")]
	public GisketchMotionToken()
	{
	}
}
