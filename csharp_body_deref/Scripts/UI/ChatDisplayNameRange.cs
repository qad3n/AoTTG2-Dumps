// ==================== AoTTG2 cross-reference ====================
// Type: UI.ChatDisplayNameRange
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/UI/ChatDisplayNameRange.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x2000614")]
internal struct ChatDisplayNameRange
{
	[Token(Token = "0x4001D1E")]
	[FieldOffset(Offset = "0x0")]
	public readonly int SourceStartIndex;

	[Token(Token = "0x4001D1F")]
	[FieldOffset(Offset = "0x4")]
	public readonly int SourceEndIndex;

	[Token(Token = "0x17000BA9")]
	public bool IsValid
	{
		[Token(Token = "0x6003D59")]
		[Address(RVA = "0x42A69F0", Offset = "0x42A69F0", VA = "0x42A69F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6003D58")]
	[Address(RVA = "0x42A69E0", Offset = "0x42A69E0", VA = "0x42A69E0")]
	public ChatDisplayNameRange(int sourceStartIndex, int sourceEndIndex)
	{
	}

	[Token(Token = "0x6003D5A")]
	[Address(RVA = "0x42A6A00", Offset = "0x42A6A00", VA = "0x42A6A00")]
	public bool ContainsSourceIndex(int index)
	{
		return default(bool);
	}
}
