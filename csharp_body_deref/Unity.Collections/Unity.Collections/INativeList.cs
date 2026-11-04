// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.INativeList
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Unity.Collections;

[Token(Token = "0x2000097")]
public interface INativeList<T> : IIndexable<T> where T : struct
{
	[Token(Token = "0x170000CD")]
	int Capacity
	{
		[Token(Token = "0x600078F")]
		get;
		[Token(Token = "0x6000790")]
		set;
	}

	[Token(Token = "0x170000CE")]
	bool IsEmpty
	{
		[Token(Token = "0x6000791")]
		get;
	}

	[Token(Token = "0x170000CF")]
	T this[int index]
	{
		[Token(Token = "0x6000792")]
		get;
		[Token(Token = "0x6000793")]
		set;
	}

	[Token(Token = "0x6000794")]
	void Clear();
}
