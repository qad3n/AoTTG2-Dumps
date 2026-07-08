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
		[Address(RVA = "0x3B83710", Offset = "0x3B83710", VA = "0x3B83710")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001CF")]
		[Address(RVA = "0x3B83740", Offset = "0x3B83740", VA = "0x3B83740")]
		set
		{
		}
	}

	[Token(Token = "0x60001D0")]
	[Address(RVA = "0x3B83760", Offset = "0x3B83760", VA = "0x3B83760", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60001D1")]
	[Address(RVA = "0x3B837E0", Offset = "0x3B837E0", VA = "0x3B837E0")]
	public string ToStringFull()
	{
		return null;
	}

	[Token(Token = "0x60001D2")]
	[Address(RVA = "0x3B839E0", Offset = "0x3B839E0", VA = "0x3B839E0")]
	public OperationResponse()
	{
	}
}
