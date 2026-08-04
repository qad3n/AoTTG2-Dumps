// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Security.Protocol.Ntlm.Type2Message
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Mono.Security.Protocol.Ntlm;

[Token(Token = "0x2000024")]
public class Type2Message : MessageBase
{
	[Token(Token = "0x40000A0")]
	[FieldOffset(Offset = "0x18")]
	private byte[] _nonce;

	[Token(Token = "0x40000A1")]
	[FieldOffset(Offset = "0x20")]
	private string _targetName;

	[Token(Token = "0x40000A2")]
	[FieldOffset(Offset = "0x28")]
	private byte[] _targetInfo;

	[Token(Token = "0x17000055")]
	public byte[] Nonce
	{
		[Token(Token = "0x600010D")]
		[Address(RVA = "0x3AB9A50", Offset = "0x3AB9A50", VA = "0x3AB9A50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000056")]
	public string TargetName
	{
		[Token(Token = "0x600010E")]
		[Address(RVA = "0x3ABAD30", Offset = "0x3ABAD30", VA = "0x3ABAD30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000057")]
	public byte[] TargetInfo
	{
		[Token(Token = "0x600010F")]
		[Address(RVA = "0x3AB99D0", Offset = "0x3AB99D0", VA = "0x3AB99D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600010B")]
	[Address(RVA = "0x3ABAC00", Offset = "0x3ABAC00", VA = "0x3ABAC00")]
	public Type2Message(byte[] message)
	{
	}

	[Token(Token = "0x600010C")]
	[Address(RVA = "0x3ABACA0", Offset = "0x3ABACA0", VA = "0x3ABACA0", Slot = "1")]
	~Type2Message()
	{
	}

	[Token(Token = "0x6000110")]
	[Address(RVA = "0x3ABAD40", Offset = "0x3ABAD40", VA = "0x3ABAD40", Slot = "4")]
	protected override void Decode(byte[] message)
	{
	}

	[Token(Token = "0x6000111")]
	[Address(RVA = "0x3ABAF50", Offset = "0x3ABAF50", VA = "0x3ABAF50", Slot = "5")]
	public override byte[] GetBytes()
	{
		return null;
	}
}
