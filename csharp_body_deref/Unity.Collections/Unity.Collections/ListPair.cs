// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.ListPair
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using Il2CppDummyDll;

namespace Unity.Collections;

[Token(Token = "0x2000048")]
internal struct ListPair<Key, Value> where Value : IList
{
	[Token(Token = "0x40000B4")]
	[FieldOffset(Offset = "0x0")]
	public Key key;

	[Token(Token = "0x40000B5")]
	[FieldOffset(Offset = "0x0")]
	public Value value;

	[Token(Token = "0x60001ED")]
	public ListPair(Key k, Value v)
	{
	}

	[Token(Token = "0x60001EE")]
	public override string ToString()
	{
		return null;
	}
}
