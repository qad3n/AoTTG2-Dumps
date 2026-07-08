using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Bson;

[Token(Token = "0x20001DD")]
internal class BsonEmpty : BsonToken
{
	[Token(Token = "0x4000857")]
	[FieldOffset(Offset = "0x0")]
	public static readonly BsonToken Null;

	[Token(Token = "0x4000858")]
	[FieldOffset(Offset = "0x8")]
	public static readonly BsonToken Undefined;

	[Token(Token = "0x170002B6")]
	public override BsonType Type
	{
		[Token(Token = "0x6001011")]
		[Address(RVA = "0x3B64F40", Offset = "0x3B64F40", VA = "0x3B64F40", Slot = "4")]
		[CompilerGenerated]
		get
		{
			return default(BsonType);
		}
	}

	[Token(Token = "0x6001010")]
	[Address(RVA = "0x3B64F20", Offset = "0x3B64F20", VA = "0x3B64F20")]
	private BsonEmpty(BsonType type)
	{
	}
}
