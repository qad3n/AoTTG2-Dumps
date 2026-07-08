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
		[Address(RVA = "0x3B64E10", Offset = "0x3B64E10", VA = "0x3B64E10", Slot = "4")]
		get
		{
			return default(BsonType);
		}
	}

	[Token(Token = "0x600100B")]
	[Address(RVA = "0x3B64D60", Offset = "0x3B64D60", VA = "0x3B64D60")]
	public void Add(BsonToken token)
	{
	}

	[Token(Token = "0x600100D")]
	[Address(RVA = "0x3B62560", Offset = "0x3B62560", VA = "0x3B62560", Slot = "5")]
	public IEnumerator<BsonToken> GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x600100E")]
	[Address(RVA = "0x3B64E20", Offset = "0x3B64E20", VA = "0x3B64E20", Slot = "6")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x600100F")]
	[Address(RVA = "0x3B64EA0", Offset = "0x3B64EA0", VA = "0x3B64EA0")]
	public BsonArray()
	{
	}
}
