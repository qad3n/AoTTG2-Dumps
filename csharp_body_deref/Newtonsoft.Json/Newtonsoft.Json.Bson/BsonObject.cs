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
		[Address(RVA = "0x1CAA190", Offset = "0x1CA8790", VA = "0x181CAA190", Slot = "4")]
		get
		{
			return default(BsonType);
		}
	}

	[Token(Token = "0x6001006")]
	[Address(RVA = "0x1CA9F30", Offset = "0x1CA8530", VA = "0x181CA9F30")]
	public void Add(string name, BsonToken token)
	{
	}

	[Token(Token = "0x6001008")]
	[Address(RVA = "0x1CAA080", Offset = "0x1CA8680", VA = "0x181CAA080", Slot = "5")]
	public IEnumerator<BsonProperty> GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6001009")]
	[Address(RVA = "0x1CAA100", Offset = "0x1CA8700", VA = "0x181CAA100", Slot = "6")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x600100A")]
	[Address(RVA = "0x1CAA110", Offset = "0x1CA8710", VA = "0x181CAA110")]
	public BsonObject()
	{
	}
}
