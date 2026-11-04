// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Security.Protocol.Ntlm.Type2Message
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Mono.Security.Protocol.Ntlm;

[Token(Token = "0x2000036")]
public class Type2Message : MessageBase
{
	[Token(Token = "0x40000A6")]
	[FieldOffset(Offset = "0x18")]
	private byte[] _nonce;

	[Token(Token = "0x40000A7")]
	[FieldOffset(Offset = "0x20")]
	private string _targetName;

	[Token(Token = "0x40000A8")]
	[FieldOffset(Offset = "0x28")]
	private byte[] _targetInfo;

	[Token(Token = "0x17000058")]
	public byte[] Nonce
	{
		[Token(Token = "0x6000131")]
		[Address(RVA = "0x193E280", Offset = "0x193C880", VA = "0x18193E280")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000059")]
	public string TargetName
	{
		[Token(Token = "0x6000132")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700005A")]
	public byte[] TargetInfo
	{
		[Token(Token = "0x6000133")]
		[Address(RVA = "0x193E300", Offset = "0x193C900", VA = "0x18193E300")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600012F")]
	[Address(RVA = "0x193E1E0", Offset = "0x193C7E0", VA = "0x18193E1E0")]
	public Type2Message(byte[] message)
	{
	}

	[Token(Token = "0x6000130")]
	[Address(RVA = "0x193E0A0", Offset = "0x193C6A0", VA = "0x18193E0A0", Slot = "1")]
	~Type2Message()
	{
	}

	[Token(Token = "0x6000134")]
	[Address(RVA = "0x193DF30", Offset = "0x193C530", VA = "0x18193DF30", Slot = "4")]
	protected override void Decode(byte[] message)
	{
	}

	[Token(Token = "0x6000135")]
	[Address(RVA = "0x193E110", Offset = "0x193C710", VA = "0x18193E110", Slot = "5")]
	public override byte[] GetBytes()
	{
		return null;
	}
}
