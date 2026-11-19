// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.X509Certificates.X509Chain
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Security.Cryptography.X509Certificates;

[Token(Token = "0x2000102")]
public class X509Chain : IDisposable
{
	[Token(Token = "0x40004E7")]
	[FieldOffset(Offset = "0x10")]
	private X509ChainImpl impl;

	[Token(Token = "0x17000140")]
	internal X509ChainImpl Impl
	{
		[Token(Token = "0x6000609")]
		[Address(RVA = "0x6215BD0", Offset = "0x6214BD0", VA = "0x6215BD0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000141")]
	public X509ChainElementCollection ChainElements
	{
		[Token(Token = "0x600060E")]
		[Address(RVA = "0x6215CE0", Offset = "0x6214CE0", VA = "0x6215CE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000142")]
	public X509ChainPolicy ChainPolicy
	{
		[Token(Token = "0x600060F")]
		[Address(RVA = "0x6215D20", Offset = "0x6214D20", VA = "0x6215D20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600060A")]
	[Address(RVA = "0x6215BF0", Offset = "0x6214BF0", VA = "0x6215BF0")]
	public X509Chain()
	{
	}

	[Token(Token = "0x600060B")]
	[Address(RVA = "0x6215C20", Offset = "0x6214C20", VA = "0x6215C20")]
	public X509Chain(bool useMachineContext)
	{
	}

	[Token(Token = "0x600060C")]
	[Address(RVA = "0x6215C60", Offset = "0x6214C60", VA = "0x6215C60")]
	internal X509Chain(X509ChainImpl impl)
	{
	}

	[Token(Token = "0x600060D")]
	[Address(RVA = "0x6215CA0", Offset = "0x6214CA0", VA = "0x6215CA0")]
	[System.MonoTODO("Mono's X509Chain is fully managed. All handles are invalid.")]
	public X509Chain(IntPtr chainContext)
	{
	}

	[Token(Token = "0x6000610")]
	[Address(RVA = "0x6214020", Offset = "0x6213020", VA = "0x6214020")]
	[System.MonoTODO("Not totally RFC3280 compliant, but neither is MS implementation...")]
	public bool Build(X509Certificate2 certificate)
	{
		return default(bool);
	}

	[Token(Token = "0x6000611")]
	[Address(RVA = "0x6215D60", Offset = "0x6214D60", VA = "0x6215D60")]
	public void Reset()
	{
	}

	[Token(Token = "0x6000612")]
	[Address(RVA = "0x6213FC0", Offset = "0x6212FC0", VA = "0x6213FC0")]
	public static X509Chain Create()
	{
		return null;
	}

	[Token(Token = "0x6000613")]
	[Address(RVA = "0x6215DA0", Offset = "0x6214DA0", VA = "0x6215DA0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000614")]
	[Address(RVA = "0x6215E10", Offset = "0x6214E10", VA = "0x6215E10", Slot = "5")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6000615")]
	[Address(RVA = "0x6215F10", Offset = "0x6214F10", VA = "0x6215F10", Slot = "1")]
	~X509Chain()
	{
	}
}
