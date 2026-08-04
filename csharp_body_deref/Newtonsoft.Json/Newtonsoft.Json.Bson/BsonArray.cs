// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Bson.BsonArray
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Bson;

[Token(Token = "0x20001DC")]
internal class BsonArray : BsonToken, IEnumerable<BsonToken>, IEnumerable
{
	[Token(Token = "0x4000856")]
	[FieldOffset(Offset = "0x20")]
	private readonly List<BsonToken> _children;

	[Token(Token = "0x170002B5")]
	public override BsonType Type
	{
		[Token(Token = "0x600100C")]
		[Address(RVA = "0x3E5A760", Offset = "0x3E5A760", VA = "0x3E5A760", Slot = "4")]
		get
		{
			return default(BsonType);
		}
	}

	[Token(Token = "0x600100B")]
	[Address(RVA = "0x3E5A6B0", Offset = "0x3E5A6B0", VA = "0x3E5A6B0")]
	public void Add(BsonToken token)
	{
	}

	[Token(Token = "0x600100D")]
	[Address(RVA = "0x3E57EB0", Offset = "0x3E57EB0", VA = "0x3E57EB0", Slot = "5")]
	public IEnumerator<BsonToken> GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x600100E")]
	[Address(RVA = "0x3E5A770", Offset = "0x3E5A770", VA = "0x3E5A770", Slot = "6")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x600100F")]
	[Address(RVA = "0x3E5A7F0", Offset = "0x3E5A7F0", VA = "0x3E5A7F0")]
	public BsonArray()
	{
	}
}
