// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Bson.BsonEmpty
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x3E5A890", Offset = "0x3E5A890", VA = "0x3E5A890", Slot = "4")]
		[CompilerGenerated]
		get
		{
			return default(BsonType);
		}
	}

	[Token(Token = "0x6001010")]
	[Address(RVA = "0x3E5A870", Offset = "0x3E5A870", VA = "0x3E5A870")]
	private BsonEmpty(BsonType type)
	{
	}
}
