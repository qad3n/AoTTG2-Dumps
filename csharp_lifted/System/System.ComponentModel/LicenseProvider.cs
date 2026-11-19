// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.LicenseProvider
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x200017D")]
public abstract class LicenseProvider
{
	[Token(Token = "0x6000979")]
	public abstract License GetLicense(LicenseContext context, Type type, object instance, bool allowExceptions);

	[Token(Token = "0x600097A")]
	[Address(RVA = "0x62354E0", Offset = "0x62344E0", VA = "0x62354E0")]
	protected LicenseProvider()
	{
	}
}
