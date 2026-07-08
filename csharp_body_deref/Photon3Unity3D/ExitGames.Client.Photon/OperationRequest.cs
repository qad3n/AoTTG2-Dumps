using Il2CppDummyDll;

namespace ExitGames.Client.Photon;

[Token(Token = "0x200002D")]
public class OperationRequest
{
	[Token(Token = "0x4000176")]
	[FieldOffset(Offset = "0x10")]
	public byte OperationCode;

	[Token(Token = "0x4000177")]
	[FieldOffset(Offset = "0x18")]
	public ParameterDictionary Parameters;

	[Token(Token = "0x60001CD")]
	[Address(RVA = "0x3B83700", Offset = "0x3B83700", VA = "0x3B83700")]
	public OperationRequest()
	{
	}
}
