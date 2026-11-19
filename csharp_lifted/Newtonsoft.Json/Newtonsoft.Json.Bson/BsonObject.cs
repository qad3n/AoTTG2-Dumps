// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Bson.BsonObject
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Bson;

[Token(Token = "0x20001DB")]
internal class BsonObject : BsonToken, IEnumerable<BsonProperty>, IEnumerable
{
	[Token(Token = "0x4000855")]
	[FieldOffset(Offset = "0x20")]
	private readonly List<BsonProperty> _children;

	[Token(Token = "0x170002B4")]
	public override BsonType Type
	{
		[Token(Token = "0x6001007")]
		[Address(RVA = "0x564B740", Offset = "0x564A740", VA = "0x564B740", Slot = "4")]
		get
		{
			return default(BsonType);
		}
	}

	[Token(Token = "0x6001006")]
	[Address(RVA = "0x564B590", Offset = "0x564A590", VA = "0x564B590")]
	public void Add(string name, BsonToken token)
	{
	}

	[Token(Token = "0x6001008")]
	[Address(RVA = "0x5648FE0", Offset = "0x5647FE0", VA = "0x5648FE0", Slot = "5")]
	public IEnumerator<BsonProperty> GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6001009")]
	[Address(RVA = "0x564B750", Offset = "0x564A750", VA = "0x564B750", Slot = "6")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x600100A")]
	[Address(RVA = "0x564B7D0", Offset = "0x564A7D0", VA = "0x564B7D0")]
	public BsonObject()
	{
	}
}
