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
		[Address(RVA = "0x4615C30", Offset = "0x4615C30", VA = "0x4615C30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000137")]
	public X509ChainElementCollection ChainElements
	{
		[Token(Token = "0x60005E4")]
		[Address(RVA = "0x4615D40", Offset = "0x4615D40", VA = "0x4615D40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000138")]
	public X509ChainPolicy ChainPolicy
	{
		[Token(Token = "0x60005E5")]
		[Address(RVA = "0x4615D80", Offset = "0x4615D80", VA = "0x4615D80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60005E0")]
	[Address(RVA = "0x4615C50", Offset = "0x4615C50", VA = "0x4615C50")]
	public X509Chain()
	{
	}

	[Token(Token = "0x60005E1")]
	[Address(RVA = "0x4615C80", Offset = "0x4615C80", VA = "0x4615C80")]
	public X509Chain(bool useMachineContext)
	{
	}

	[Token(Token = "0x60005E2")]
	[Address(RVA = "0x4615CC0", Offset = "0x4615CC0", VA = "0x4615CC0")]
	internal X509Chain(X509ChainImpl impl)
	{
	}

	[Token(Token = "0x60005E3")]
	[Address(RVA = "0x4615D00", Offset = "0x4615D00", VA = "0x4615D00")]
	[System.MonoTODO("Mono's X509Chain is fully managed. All handles are invalid.")]
	public X509Chain(IntPtr chainContext)
	{
	}

	[Token(Token = "0x60005E6")]
	[Address(RVA = "0x4614010", Offset = "0x4614010", VA = "0x4614010")]
	[System.MonoTODO("Not totally RFC3280 compliant, but neither is MS implementation...")]
	public bool Build(X509Certificate2 certificate)
	{
		return default(bool);
	}

	[Token(Token = "0x60005E7")]
	[Address(RVA = "0x4615DC0", Offset = "0x4615DC0", VA = "0x4615DC0")]
	public void Reset()
	{
	}

	[Token(Token = "0x60005E8")]
	[Address(RVA = "0x4613FB0", Offset = "0x4613FB0", VA = "0x4613FB0")]
	public static X509Chain Create()
	{
		return null;
	}

	[Token(Token = "0x60005E9")]
	[Address(RVA = "0x4615E00", Offset = "0x4615E00", VA = "0x4615E00", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60005EA")]
	[Address(RVA = "0x4615E70", Offset = "0x4615E70", VA = "0x4615E70", Slot = "5")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60005EB")]
	[Address(RVA = "0x4615F70", Offset = "0x4615F70", VA = "0x4615F70", Slot = "1")]
	~X509Chain()
	{
	}
}
