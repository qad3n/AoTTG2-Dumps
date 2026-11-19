// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Bson.BsonBinary
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x564BCB0", Offset = "0x564ACB0", VA = "0x564BCB0")]
		[CompilerGenerated]
		get
		{
			return default(BsonBinaryType);
		}
		[Token(Token = "0x600101D")]
		[Address(RVA = "0x564BCC0", Offset = "0x564ACC0", VA = "0x564BCC0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x600101E")]
	[Address(RVA = "0x564BCD0", Offset = "0x564ACD0", VA = "0x564BCD0")]
	public BsonBinary(byte[] value, BsonBinaryType binaryType)
	{
	}
}
