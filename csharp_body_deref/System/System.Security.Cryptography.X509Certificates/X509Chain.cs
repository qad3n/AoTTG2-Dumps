// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.X509Certificates.X509Chain
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Security.Cryptography.X509Certificates;

[Token(Token = "0x2000141")]
public class X509Chain : IDisposable
{
	[Token(Token = "0x40005B6")]
	[FieldOffset(Offset = "0x10")]
	private X509ChainImpl impl;

	[Token(Token = "0x1700016F")]
	internal X509ChainImpl Impl
	{
		[Token(Token = "0x60007C8")]
		[Address(RVA = "0x288E070", Offset = "0x288C670", VA = "0x18288E070")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000170")]
	public X509ChainElementCollection ChainElements
	{
		[Token(Token = "0x60007CD")]
		[Address(RVA = "0x288DF90", Offset = "0x288C590", VA = "0x18288DF90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000171")]
	public X509ChainPolicy ChainPolicy
	{
		[Token(Token = "0x60007CE")]
		[Address(RVA = "0x288E000", Offset = "0x288C600", VA = "0x18288E000")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60007C9")]
	[Address(RVA = "0x288DEA0", Offset = "0x288C4A0", VA = "0x18288DEA0")]
	public X509Chain()
	{
	}

	[Token(Token = "0x60007CA")]
	[Address(RVA = "0x288DF10", Offset = "0x288C510", VA = "0x18288DF10")]
	public X509Chain(bool useMachineContext)
	{
	}

	[Token(Token = "0x60007CB")]
	[Address(RVA = "0x288DE30", Offset = "0x288C430", VA = "0x18288DE30")]
	internal X509Chain(X509ChainImpl impl)
	{
	}

	[Token(Token = "0x60007CC")]
	[Address(RVA = "0x288DDE0", Offset = "0x288C3E0", VA = "0x18288DDE0")]
	[System.MonoTODO("Mono's X509Chain is fully managed. All handles are invalid.")]
	public X509Chain(IntPtr chainContext)
	{
	}

	[Token(Token = "0x60007CF")]
	[Address(RVA = "0x288DB60", Offset = "0x288C160", VA = "0x18288DB60")]
	[System.MonoTODO("Not totally RFC3280 compliant, but neither is MS implementation...")]
	public bool Build(X509Certificate2 certificate)
	{
		return default(bool);
	}

	[Token(Token = "0x60007D0")]
	[Address(RVA = "0x288DD70", Offset = "0x288C370", VA = "0x18288DD70")]
	public void Reset()
	{
	}

	[Token(Token = "0x60007D1")]
	[Address(RVA = "0x288DBE0", Offset = "0x288C1E0", VA = "0x18288DBE0")]
	public static X509Chain Create()
	{
		return null;
	}

	[Token(Token = "0x60007D2")]
	[Address(RVA = "0x288DD10", Offset = "0x288C310", VA = "0x18288DD10", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60007D3")]
	[Address(RVA = "0x288DC80", Offset = "0x288C280", VA = "0x18288DC80", Slot = "5")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60007D4")]
	[Address(RVA = "0x193BBF0", Offset = "0x193A1F0", VA = "0x18193BBF0", Slot = "1")]
	~X509Chain()
	{
	}
}
