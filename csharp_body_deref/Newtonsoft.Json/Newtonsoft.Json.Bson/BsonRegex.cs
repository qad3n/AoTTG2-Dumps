using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Bson;

[Token(Token = "0x20001E2")]
internal class BsonRegex : BsonToken
{
	[Token(Token = "0x170002BC")]
	public BsonString Pattern
	{
		[Token(Token = "0x600101F")]
		[Address(RVA = "0x3B65220", Offset = "0x3B65220", VA = "0x3B65220")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6001020")]
		[Address(RVA = "0x3B65230", Offset = "0x3B65230", VA = "0x3B65230")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170002BD")]
	public BsonString Options
	{
		[Token(Token = "0x6001021")]
		[Address(RVA = "0x3B65240", Offset = "0x3B65240", VA = "0x3B65240")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6001022")]
		[Address(RVA = "0x3B65250", Offset = "0x3B65250", VA = "0x3B65250")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170002BE")]
	public override BsonType Type
	{
		[Token(Token = "0x6001024")]
		[Address(RVA = "0x3B65330", Offset = "0x3B65330", VA = "0x3B65330", Slot = "4")]
		get
		{
			return default(BsonType);
		}
	}

	[Token(Token = "0x6001023")]
	[Address(RVA = "0x3B65260", Offset = "0x3B65260", VA = "0x3B65260")]
	public BsonRegex(string pattern, string options)
	{
	}
}
