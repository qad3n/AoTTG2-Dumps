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
		[Address(RVA = "0x3E79060", Offset = "0x3E79060", VA = "0x3E79060")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001CF")]
		[Address(RVA = "0x3E79090", Offset = "0x3E79090", VA = "0x3E79090")]
		set
		{
		}
	}

	[Token(Token = "0x60001D0")]
	[Address(RVA = "0x3E790B0", Offset = "0x3E790B0", VA = "0x3E790B0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60001D1")]
	[Address(RVA = "0x3E79130", Offset = "0x3E79130", VA = "0x3E79130")]
	public string ToStringFull()
	{
		return null;
	}

	[Token(Token = "0x60001D2")]
	[Address(RVA = "0x3E79330", Offset = "0x3E79330", VA = "0x3E79330")]
	public OperationResponse()
	{
	}
}
