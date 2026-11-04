// ==================== AoTTG2 cross-reference ====================
// Type: ExitGames.Client.Photon.OperationResponse
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace ExitGames.Client.Photon;

[Token(Token = "0x200002E")]
public class OperationResponse
{
	[Token(Token = "0x4000178")]
	[FieldOffset(Offset = "0x10")]
	public byte OperationCode;

	[Token(Token = "0x4000179")]
	[FieldOffset(Offset = "0x12")]
	public short ReturnCode;

	[Token(Token = "0x400017A")]
	[FieldOffset(Offset = "0x18")]
	public string DebugMessage;

	[Token(Token = "0x400017B")]
	[FieldOffset(Offset = "0x20")]
	public ParameterDictionary Parameters;

	[Token(Token = "0x1700008A")]
	public object this[byte parameterCode]
	{
		[Token(Token = "0x60001CE")]
		[Address(RVA = "0x1CCE5D0", Offset = "0x1CCCBD0", VA = "0x181CCE5D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001CF")]
		[Address(RVA = "0x1CCE610", Offset = "0x1CCCC10", VA = "0x181CCE610")]
		set
		{
		}
	}

	[Token(Token = "0x60001D0")]
	[Address(RVA = "0x1CCE550", Offset = "0x1CCCB50", VA = "0x181CCE550", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60001D1")]
	[Address(RVA = "0x1CCE330", Offset = "0x1CCC930", VA = "0x181CCE330")]
	public string ToStringFull()
	{
		return null;
	}

	[Token(Token = "0x60001D2")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public OperationResponse()
	{
	}
}
