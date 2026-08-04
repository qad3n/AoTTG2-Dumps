// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.License
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x48954E0", Offset = "0x48954E0", VA = "0x48954E0")]
	protected License()
	{
	}
}
