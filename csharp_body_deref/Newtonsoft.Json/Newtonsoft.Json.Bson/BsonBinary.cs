using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Bson;

[Token(Token = "0x20001E1")]
internal class BsonBinary : BsonValue
{
	[Token(Token = "0x170002BB")]
	public BsonBinaryType BinaryType
	{
		[Token(Token = "0x600101C")]
		[Address(RVA = "0x3B651C0", Offset = "0x3B651C0", VA = "0x3B651C0")]
		[CompilerGenerated]
		get
		{
			return default(BsonBinaryType);
		}
		[Token(Token = "0x600101D")]
		[Address(RVA = "0x3B651D0", Offset = "0x3B651D0", VA = "0x3B651D0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x600101E")]
	[Address(RVA = "0x3B651E0", Offset = "0x3B651E0", VA = "0x3B651E0")]
	public BsonBinary(byte[] value, BsonBinaryType binaryType)
	{
	}
}
