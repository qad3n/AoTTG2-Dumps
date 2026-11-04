// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.LicenseProvider
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20001BC")]
public abstract class LicenseProvider
{
	[Token(Token = "0x6000B39")]
	public abstract License GetLicense(LicenseContext context, Type type, object instance, bool allowExceptions);

	[Token(Token = "0x6000B3A")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected LicenseProvider()
	{
	}
}
