using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Bson;

[Token(Token = "0x20001E0")]
internal class BsonString : BsonValue
{
	[Token(Token = "0x170002B9")]
	public int ByteCount
	{
		[Token(Token = "0x6001018")]
		[Address(RVA = "0x3B65190", Offset = "0x3B65190", VA = "0x3B65190")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001019")]
		[Address(RVA = "0x3B651A0", Offset = "0x3B651A0", VA = "0x3B651A0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170002BA")]
	public bool IncludeLength
	{
		[Token(Token = "0x600101A")]
		[Address(RVA = "0x3B651B0", Offset = "0x3B651B0", VA = "0x3B651B0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600101B")]
	[Address(RVA = "0x3B64C10", Offset = "0x3B64C10", VA = "0x3B64C10")]
	public BsonString(object value, bool includeLength)
	{
	}
}
