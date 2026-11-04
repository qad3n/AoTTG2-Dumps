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
	[Token(Token = "0x400007E")]
	[FieldOffset(Offset = "0x10")]
	private string _storePath;

	[Token(Token = "0x400007F")]
	[FieldOffset(Offset = "0x18")]
	private bool _newFormat;

	[Token(Token = "0x4000080")]
	[FieldOffset(Offset = "0x20")]
	private X509Store _trusted;

	[Token(Token = "0x1700004B")]
	public X509Store TrustedRoot
	{
		[Token(Token = "0x60000E6")]
		[Address(RVA = "0x192B0A0", Offset = "0x19296A0", VA = "0x18192B0A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60000E5")]
	[Address(RVA = "0x16F5C50", Offset = "0x16F4250", VA = "0x1816F5C50")]
	internal X509Stores(string path, bool newFormat)
	{
	}

	[Token(Token = "0x60000E7")]
	[Address(RVA = "0x192AF70", Offset = "0x1929570", VA = "0x18192AF70")]
	public X509Store Open(string storeName, bool create)
	{
		return null;
	}
}
