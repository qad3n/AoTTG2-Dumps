// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.License
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x200017A")]
public abstract class License : IDisposable
{
	[Token(Token = "0x17000204")]
	public abstract string LicenseKey
	{
		[Token(Token = "0x600095D")]
		get;
	}

	[Token(Token = "0x600095E")]
	public abstract void Dispose();

	[Token(Token = "0x600095F")]
	[Address(RVA = "0x62354F0", Offset = "0x62344F0", VA = "0x62354F0")]
	protected License()
	{
	}
}
