// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.X509Certificates.X509ChainStatus
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Security.Cryptography.X509Certificates;

[Token(Token = "0x2000148")]
public struct X509ChainStatus
{
	[Token(Token = "0x40005D6")]
	[FieldOffset(Offset = "0x0")]
	private X509ChainStatusFlags status;

	[Token(Token = "0x40005D7")]
	[FieldOffset(Offset = "0x8")]
	private string info;

	[Token(Token = "0x1700018D")]
	public X509ChainStatusFlags Status
	{
		[Token(Token = "0x6000828")]
		[Address(RVA = "0x57AED0", Offset = "0x5794D0", VA = "0x18057AED0")]
		get
		{
			return default(X509ChainStatusFlags);
		}
		[Token(Token = "0x6000829")]
		[Address(RVA = "0x57AF10", Offset = "0x579510", VA = "0x18057AF10")]
		set
		{
		}
	}

	[Token(Token = "0x1700018E")]
	public string StatusInformation
	{
		[Token(Token = "0x600082A")]
		[Address(RVA = "0x1D69900", Offset = "0x1D67F00", VA = "0x181D69900")]
		set
		{
		}
	}

	[Token(Token = "0x6000827")]
	[Address(RVA = "0x288DB30", Offset = "0x288C130", VA = "0x18288DB30")]
	internal X509ChainStatus(X509ChainStatusFlags flag)
	{
	}

	[Token(Token = "0x600082B")]
	[Address(RVA = "0x288D9B0", Offset = "0x288BFB0", VA = "0x18288D9B0")]
	internal static string GetInformation(X509ChainStatusFlags flags)
	{
		return null;
	}
}
