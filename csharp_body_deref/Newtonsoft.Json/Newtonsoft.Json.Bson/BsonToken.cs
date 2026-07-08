using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Bson;

[Token(Token = "0x20001DA")]
internal abstract class BsonToken
{
	[Token(Token = "0x170002B1")]
	public abstract BsonType Type
	{
		[Token(Token = "0x6001000")]
		get;
	}

	[Token(Token = "0x170002B2")]
	public BsonToken Parent
	{
		[Token(Token = "0x6001001")]
		[Address(RVA = "0x3B64A50", Offset = "0x3B64A50", VA = "0x3B64A50")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6001002")]
		[Address(RVA = "0x3B64A60", Offset = "0x3B64A60", VA = "0x3B64A60")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170002B3")]
	public int CalculatedSize
	{
		[Token(Token = "0x6001003")]
		[Address(RVA = "0x3B64A70", Offset = "0x3B64A70", VA = "0x3B64A70")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001004")]
		[Address(RVA = "0x3B64A80", Offset = "0x3B64A80", VA = "0x3B64A80")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6001005")]
	[Address(RVA = "0x3B64A90", Offset = "0x3B64A90", VA = "0x3B64A90")]
	protected BsonToken()
	{
	}
}
