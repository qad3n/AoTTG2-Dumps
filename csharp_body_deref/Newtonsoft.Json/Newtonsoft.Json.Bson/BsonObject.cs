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
		[Address(RVA = "0x3B64C50", Offset = "0x3B64C50", VA = "0x3B64C50", Slot = "4")]
		get
		{
			return default(BsonType);
		}
	}

	[Token(Token = "0x6001006")]
	[Address(RVA = "0x3B64AA0", Offset = "0x3B64AA0", VA = "0x3B64AA0")]
	public void Add(string name, BsonToken token)
	{
	}

	[Token(Token = "0x6001008")]
	[Address(RVA = "0x3B62440", Offset = "0x3B62440", VA = "0x3B62440", Slot = "5")]
	public IEnumerator<BsonProperty> GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6001009")]
	[Address(RVA = "0x3B64C60", Offset = "0x3B64C60", VA = "0x3B64C60", Slot = "6")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x600100A")]
	[Address(RVA = "0x3B64CE0", Offset = "0x3B64CE0", VA = "0x3B64CE0")]
	public BsonObject()
	{
	}
}
