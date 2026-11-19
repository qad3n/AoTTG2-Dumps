// ==================== AoTTG2 cross-reference ====================
// Type: UI.ChatDisplayNameRange
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/ChatDisplayNameRange.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x200081A")]
internal struct ChatDisplayNameRange
{
	[Token(Token = "0x4002848")]
	[FieldOffset(Offset = "0x0")]
	public readonly int SourceStartIndex;

	[Token(Token = "0x4002849")]
	[FieldOffset(Offset = "0x4")]
	public readonly int SourceEndIndex;

	[Token(Token = "0x17000D74")]
	public bool IsValid
	{
		[Token(Token = "0x6004D67")]
		[Address(RVA = "0x5C08630", Offset = "0x5C07630", VA = "0x5C08630")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6004D66")]
	[Address(RVA = "0x5C08620", Offset = "0x5C07620", VA = "0x5C08620")]
	public ChatDisplayNameRange(int sourceStartIndex, int sourceEndIndex)
	{
	}

	[Token(Token = "0x6004D68")]
	[Address(RVA = "0x5C08640", Offset = "0x5C07640", VA = "0x5C08640")]
	public bool ContainsSourceIndex(int index)
	{
		return default(bool);
	}
}
