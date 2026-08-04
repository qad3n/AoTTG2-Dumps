// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.X509Certificates.X509Chain
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Security.Cryptography.X509Certificates;

[Token(Token = "0x2000101")]
public class X509Chain : IDisposable
{
	[Token(Token = "0x40004E4")]
	[FieldOffset(Offset = "0x10")]
	private X509ChainImpl impl;

	[Token(Token = "0x17000136")]
	internal X509ChainImpl Impl
	{
		[Token(Token = "0x60005DF")]
		[Address(RVA = "0x493AD30", Offset = "0x493AD30", VA = "0x493AD30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000137")]
	public X509ChainElementCollection ChainElements
	{
		[Token(Token = "0x60005E4")]
		[Address(RVA = "0x493AE40", Offset = "0x493AE40", VA = "0x493AE40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000138")]
	public X509ChainPolicy ChainPolicy
	{
		[Token(Token = "0x60005E5")]
		[Address(RVA = "0x493AE80", Offset = "0x493AE80", VA = "0x493AE80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60005E0")]
	[Address(RVA = "0x493AD50", Offset = "0x493AD50", VA = "0x493AD50")]
	public X509Chain()
	{
	}

	[Token(Token = "0x60005E1")]
	[Address(RVA = "0x493AD80", Offset = "0x493AD80", VA = "0x493AD80")]
	public X509Chain(bool useMachineContext)
	{
	}

	[Token(Token = "0x60005E2")]
	[Address(RVA = "0x493ADC0", Offset = "0x493ADC0", VA = "0x493ADC0")]
	internal X509Chain(X509ChainImpl impl)
	{
	}

	[Token(Token = "0x60005E3")]
	[Address(RVA = "0x493AE00", Offset = "0x493AE00", VA = "0x493AE00")]
	[System.MonoTODO("Mono's X509Chain is fully managed. All handles are invalid.")]
	public X509Chain(IntPtr chainContext)
	{
	}

	[Token(Token = "0x60005E6")]
	[Address(RVA = "0x4939110", Offset = "0x4939110", VA = "0x4939110")]
	[System.MonoTODO("Not totally RFC3280 compliant, but neither is MS implementation...")]
	public bool Build(X509Certificate2 certificate)
	{
		return default(bool);
	}

	[Token(Token = "0x60005E7")]
	[Address(RVA = "0x493AEC0", Offset = "0x493AEC0", VA = "0x493AEC0")]
	public void Reset()
	{
	}

	[Token(Token = "0x60005E8")]
	[Address(RVA = "0x49390B0", Offset = "0x49390B0", VA = "0x49390B0")]
	public static X509Chain Create()
	{
		return null;
	}

	[Token(Token = "0x60005E9")]
	[Address(RVA = "0x493AF00", Offset = "0x493AF00", VA = "0x493AF00", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60005EA")]
	[Address(RVA = "0x493AF70", Offset = "0x493AF70", VA = "0x493AF70", Slot = "5")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60005EB")]
	[Address(RVA = "0x493B070", Offset = "0x493B070", VA = "0x493B070", Slot = "1")]
	~X509Chain()
	{
	}
}
