using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20002B1")]
public abstract class LicenseProvider
{
	[Token(Token = "0x60010F1")]
	public abstract License GetLicense(LicenseContext context, Type type, object instance, bool allowExceptions);

	[Token(Token = "0x60010F2")]
	[Address(RVA = "0x45703D0", Offset = "0x45703D0", VA = "0x45703D0")]
	protected LicenseProvider()
	{
	}
}
