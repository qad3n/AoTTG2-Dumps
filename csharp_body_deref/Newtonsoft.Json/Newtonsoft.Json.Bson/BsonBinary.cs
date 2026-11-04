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
		[Address(RVA = "0xACDD00", Offset = "0xACC300", VA = "0x180ACDD00")]
		[CompilerGenerated]
		get
		{
			return default(BsonBinaryType);
		}
		[Token(Token = "0x600101D")]
		[Address(RVA = "0xACE1A0", Offset = "0xACC7A0", VA = "0x180ACE1A0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x600101E")]
	[Address(RVA = "0x1CA9BC0", Offset = "0x1CA81C0", VA = "0x181CA9BC0")]
	public BsonBinary(byte[] value, BsonBinaryType binaryType)
	{
	}
}
