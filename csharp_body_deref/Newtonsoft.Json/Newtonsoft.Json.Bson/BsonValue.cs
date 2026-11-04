// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Bson.BsonValue
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Newtonsoft.Json.Bson;

[Token(Token = "0x20001DE")]
internal class BsonValue : BsonToken
{
	[Token(Token = "0x400085A")]
	[FieldOffset(Offset = "0x20")]
	private readonly object _value;

	[Token(Token = "0x400085B")]
	[FieldOffset(Offset = "0x28")]
	private readonly BsonType _type;

	[Token(Token = "0x170002B7")]
	public object Value
	{
		[Token(Token = "0x6001014")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002B8")]
	public override BsonType Type
	{
		[Token(Token = "0x6001015")]
		[Address(RVA = "0xF1D480", Offset = "0xF1BA80", VA = "0x180F1D480", Slot = "4")]
		get
		{
			return default(BsonType);
		}
	}

	[Token(Token = "0x6001013")]
	[Address(RVA = "0x1CAC710", Offset = "0x1CAAD10", VA = "0x181CAC710")]
	public BsonValue(object value, BsonType type)
	{
	}
}
