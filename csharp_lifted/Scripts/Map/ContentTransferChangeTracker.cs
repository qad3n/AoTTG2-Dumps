// ==================== AoTTG2 cross-reference ====================
// Type: Map.ContentTransferChangeTracker
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Map/ContentTransferChangeTracker.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace Map;

[Token(Token = "0x20003D9")]
internal class ContentTransferChangeTracker
{
	[Token(Token = "0x40013A2")]
	[FieldOffset(Offset = "0x10")]
	private string _identity;

	[Token(Token = "0x40013A3")]
	[FieldOffset(Offset = "0x18")]
	private string _hash;

	[Token(Token = "0x6001872")]
	[Address(RVA = "0x58694E0", Offset = "0x58684E0", VA = "0x58694E0")]
	public bool Update(string identity, string hash)
	{
		// Lifted from source/cpp/Map/ContentTransferChangeTracker.c (Map.ContentTransferChangeTracker$$Update): clean
		bool bVar1;
		bool bVar2;

		bVar1 = (this._identity != identity);
		if (!bVar1) {
			bVar2 = (this._hash != hash);
		}
		this._identity = identity;
		this._hash = hash;
		return bVar2;
	}

	[Token(Token = "0x6001873")]
	[Address(RVA = "0x5869550", Offset = "0x5868550", VA = "0x5869550")]
	public ContentTransferChangeTracker()
	{
		// Lifted from source/cpp/Map/ContentTransferChangeTracker.c (Map.ContentTransferChangeTracker$$.ctor): clean
		base();
		return;
	}
}
