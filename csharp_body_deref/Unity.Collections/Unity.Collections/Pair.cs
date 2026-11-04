// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.Pair
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Unity.Collections;

[Token(Token = "0x2000047")]
internal struct Pair<Key, Value>
{
	[Token(Token = "0x40000B2")]
	[FieldOffset(Offset = "0x0")]
	public Key key;

	[Token(Token = "0x40000B3")]
	[FieldOffset(Offset = "0x0")]
	public Value value;

	[Token(Token = "0x60001EB")]
	public Pair(Key k, Value v)
	{
	}

	[Token(Token = "0x60001EC")]
	public override string ToString()
	{
		return null;
	}
}
