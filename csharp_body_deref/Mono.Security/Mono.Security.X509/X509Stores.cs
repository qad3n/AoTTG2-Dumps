using Il2CppDummyDll;

namespace Mono.Security.X509;

[Token(Token = "0x200001A")]
public class X509Stores
{
	[Token(Token = "0x400007C")]
	[FieldOffset(Offset = "0x10")]
	private string _storePath;

	[Token(Token = "0x400007D")]
	[FieldOffset(Offset = "0x18")]
	private bool _newFormat;

	[Token(Token = "0x400007E")]
	[FieldOffset(Offset = "0x20")]
	private X509Store _trusted;

	[Token(Token = "0x17000049")]
	public X509Store TrustedRoot
	{
		[Token(Token = "0x60000D8")]
		[Address(RVA = "0x3A49C00", Offset = "0x3A49C00", VA = "0x3A49C00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60000D7")]
	[Address(RVA = "0x3A49B10", Offset = "0x3A49B10", VA = "0x3A49B10")]
	internal X509Stores(string path, bool newFormat)
	{
	}

	[Token(Token = "0x60000D9")]
	[Address(RVA = "0x3A49CE0", Offset = "0x3A49CE0", VA = "0x3A49CE0")]
	public X509Store Open(string storeName, bool create)
	{
		return null;
	}
}
