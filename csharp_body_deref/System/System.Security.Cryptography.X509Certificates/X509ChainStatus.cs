// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.X509Certificates.X509ChainStatus
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Security.Cryptography.X509Certificates;

[Token(Token = "0x2000108")]
public struct X509ChainStatus
{
	[Token(Token = "0x4000504")]
	[FieldOffset(Offset = "0x0")]
	private X509ChainStatusFlags status;

	[Token(Token = "0x4000505")]
	[FieldOffset(Offset = "0x8")]
	private string info;

	[Token(Token = "0x17000154")]
	public X509ChainStatusFlags Status
	{
		[Token(Token = "0x600063E")]
		[Address(RVA = "0x49411D0", Offset = "0x49411D0", VA = "0x49411D0")]
		get
		{
			return default(X509ChainStatusFlags);
		}
		[Token(Token = "0x600063F")]
		[Address(RVA = "0x49411E0", Offset = "0x49411E0", VA = "0x49411E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000155")]
	public string StatusInformation
	{
		[Token(Token = "0x6000640")]
		[Address(RVA = "0x49411F0", Offset = "0x49411F0", VA = "0x49411F0")]
		set
		{
		}
	}

	[Token(Token = "0x600063D")]
	[Address(RVA = "0x493DAD0", Offset = "0x493DAD0", VA = "0x493DAD0")]
	internal X509ChainStatus(X509ChainStatusFlags flag)
	{
	}

	[Token(Token = "0x6000641")]
	[Address(RVA = "0x493B390", Offset = "0x493B390", VA = "0x493B390")]
	internal static string GetInformation(X509ChainStatusFlags flags)
	{
		return null;
	}
}
