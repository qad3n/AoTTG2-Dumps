// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Security.Protocol.Ntlm.MessageBase
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Mono.Security.Protocol.Ntlm;

[Token(Token = "0x2000031")]
public abstract class MessageBase
{
	[Token(Token = "0x4000090")]
	[FieldOffset(Offset = "0x0")]
	private static byte[] header;

	[Token(Token = "0x4000091")]
	[FieldOffset(Offset = "0x10")]
	private int _type;

	[Token(Token = "0x4000092")]
	[FieldOffset(Offset = "0x14")]
	private NtlmFlags _flags;

	[Token(Token = "0x17000053")]
	public NtlmFlags Flags
	{
		[Token(Token = "0x6000120")]
		[Address(RVA = "0x8E79A0", Offset = "0x8E5FA0", VA = "0x1808E79A0")]
		get
		{
			return default(NtlmFlags);
		}
		[Token(Token = "0x6000121")]
		[Address(RVA = "0xD23EE0", Offset = "0xD224E0", VA = "0x180D23EE0")]
		set
		{
		}
	}

	[Token(Token = "0x17000054")]
	public int Type
	{
		[Token(Token = "0x6000122")]
		[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600011F")]
	[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
	protected MessageBase(int messageType)
	{
	}

	[Token(Token = "0x6000123")]
	[Address(RVA = "0x19362F0", Offset = "0x19348F0", VA = "0x1819362F0")]
	protected byte[] PrepareMessage(int messageSize)
	{
		return null;
	}

	[Token(Token = "0x6000124")]
	[Address(RVA = "0x1936080", Offset = "0x1934680", VA = "0x181936080", Slot = "4")]
	protected virtual void Decode(byte[] message)
	{
	}

	[Token(Token = "0x6000125")]
	[Address(RVA = "0x1935F80", Offset = "0x1934580", VA = "0x181935F80")]
	protected bool CheckHeader(byte[] message)
	{
		return default(bool);
	}

	[Token(Token = "0x6000126")]
	public abstract byte[] GetBytes();
}
