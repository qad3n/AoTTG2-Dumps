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
		[Address(RVA = "0x3E5A5A0", Offset = "0x3E5A5A0", VA = "0x3E5A5A0", Slot = "4")]
		get
		{
			return default(BsonType);
		}
	}

	[Token(Token = "0x6001006")]
	[Address(RVA = "0x3E5A3F0", Offset = "0x3E5A3F0", VA = "0x3E5A3F0")]
	public void Add(string name, BsonToken token)
	{
	}

	[Token(Token = "0x6001008")]
	[Address(RVA = "0x3E57D90", Offset = "0x3E57D90", VA = "0x3E57D90", Slot = "5")]
	public IEnumerator<BsonProperty> GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6001009")]
	[Address(RVA = "0x3E5A5B0", Offset = "0x3E5A5B0", VA = "0x3E5A5B0", Slot = "6")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x600100A")]
	[Address(RVA = "0x3E5A630", Offset = "0x3E5A630", VA = "0x3E5A630")]
	public BsonObject()
	{
	}
}
