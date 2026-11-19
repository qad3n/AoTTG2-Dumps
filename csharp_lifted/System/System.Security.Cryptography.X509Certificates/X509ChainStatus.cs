// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.X509Certificates.X509ChainStatus
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Security.Cryptography.X509Certificates;

[Token(Token = "0x2000109")]
public struct X509ChainStatus
{
	[Token(Token = "0x4000507")]
	[FieldOffset(Offset = "0x0")]
	private X509ChainStatusFlags status;

	[Token(Token = "0x4000508")]
	[FieldOffset(Offset = "0x8")]
	private string info;

	[Token(Token = "0x1700015E")]
	public X509ChainStatusFlags Status
	{
		[Token(Token = "0x6000668")]
		[Address(RVA = "0x621BB10", Offset = "0x621AB10", VA = "0x621BB10")]
		get
		{
			return default(X509ChainStatusFlags);
		}
		[Token(Token = "0x6000669")]
		[Address(RVA = "0x621BB20", Offset = "0x621AB20", VA = "0x621BB20")]
		set
		{
		}
	}

	[Token(Token = "0x1700015F")]
	public string StatusInformation
	{
		[Token(Token = "0x600066A")]
		[Address(RVA = "0x621BB30", Offset = "0x621AB30", VA = "0x621BB30")]
		set
		{
		}
	}

	[Token(Token = "0x6000667")]
	[Address(RVA = "0x6218830", Offset = "0x6217830", VA = "0x6218830")]
	internal X509ChainStatus(X509ChainStatusFlags flag)
	{
	}

	[Token(Token = "0x600066B")]
	[Address(RVA = "0x6216190", Offset = "0x6215190", VA = "0x6216190")]
	internal static string GetInformation(X509ChainStatusFlags flags)
	{
		return null;
	}
}
