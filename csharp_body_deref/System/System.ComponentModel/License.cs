using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20002AE")]
public abstract class License : IDisposable
{
	[Token(Token = "0x170003C4")]
	public abstract string LicenseKey
	{
		[Token(Token = "0x60010D5")]
		get;
	}

	[Token(Token = "0x60010D6")]
	public abstract void Dispose();

	[Token(Token = "0x60010D7")]
	[Address(RVA = "0x45703E0", Offset = "0x45703E0", VA = "0x45703E0")]
	protected License()
	{
	}
}
