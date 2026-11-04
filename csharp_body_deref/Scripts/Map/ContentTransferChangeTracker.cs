// ==================== AoTTG2 cross-reference ====================
// Type: Map.ContentTransferChangeTracker
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Map/ContentTransferChangeTracker.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Map;

[Token(Token = "0x200037E")]
internal class ContentTransferChangeTracker
{
	[Token(Token = "0x4001211")]
	[FieldOffset(Offset = "0x10")]
	private string _identity;

	[Token(Token = "0x4001212")]
	[FieldOffset(Offset = "0x18")]
	private string _hash;

	[Token(Token = "0x600160F")]
	[Address(RVA = "0x1E868F0", Offset = "0x1E84EF0", VA = "0x181E868F0")]
	public bool Update(string identity, string hash)
	{
		return default(bool);
	}

	[Token(Token = "0x6001610")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public ContentTransferChangeTracker()
	{
	}
}
