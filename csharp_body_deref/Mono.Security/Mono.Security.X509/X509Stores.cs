// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Security.X509.X509Stores
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x3AB68C0", Offset = "0x3AB68C0", VA = "0x3AB68C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60000D7")]
	[Address(RVA = "0x3AB67D0", Offset = "0x3AB67D0", VA = "0x3AB67D0")]
	internal X509Stores(string path, bool newFormat)
	{
	}

	[Token(Token = "0x60000D9")]
	[Address(RVA = "0x3AB69A0", Offset = "0x3AB69A0", VA = "0x3AB69A0")]
	public X509Store Open(string storeName, bool create)
	{
		return null;
	}
}
