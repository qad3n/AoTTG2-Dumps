// ==================== AoTTG2 cross-reference ====================
// Type: UI.ChatDisplayNameRange
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/ChatDisplayNameRange.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x200076F")]
internal struct ChatDisplayNameRange
{
	[Token(Token = "0x40024D2")]
	[FieldOffset(Offset = "0x0")]
	public readonly int SourceStartIndex;

	[Token(Token = "0x40024D3")]
	[FieldOffset(Offset = "0x4")]
	public readonly int SourceEndIndex;

	[Token(Token = "0x17000CF8")]
	public bool IsValid
	{
		[Token(Token = "0x6004845")]
		[Address(RVA = "0x2228C50", Offset = "0x2227250", VA = "0x182228C50")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6004844")]
	[Address(RVA = "0xACCA30", Offset = "0xACB030", VA = "0x180ACCA30")]
	public ChatDisplayNameRange(int sourceStartIndex, int sourceEndIndex)
	{
	}

	[Token(Token = "0x6004846")]
	[Address(RVA = "0x2228C40", Offset = "0x2227240", VA = "0x182228C40")]
	public bool ContainsSourceIndex(int index)
	{
		return default(bool);
	}
}
