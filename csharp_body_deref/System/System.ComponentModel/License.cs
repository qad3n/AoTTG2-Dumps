// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.License
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20001B9")]
public abstract class License : IDisposable
{
	[Token(Token = "0x17000233")]
	public abstract string LicenseKey
	{
		[Token(Token = "0x6000B1D")]
		get;
	}

	[Token(Token = "0x6000B1E")]
	public abstract void Dispose();

	[Token(Token = "0x6000B1F")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected License()
	{
	}
}
