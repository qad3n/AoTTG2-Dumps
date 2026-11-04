// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.LicenseContext
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Reflection;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20001BA")]
public class LicenseContext : IServiceProvider
{
	[Token(Token = "0x17000234")]
	public virtual LicenseUsageMode UsageMode
	{
		[Token(Token = "0x6000B20")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "5")]
		get
		{
			return default(LicenseUsageMode);
		}
	}

	[Token(Token = "0x6000B21")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "6")]
	public virtual string GetSavedLicenseKey(Type type, Assembly resourceAssembly)
	{
		return null;
	}

	[Token(Token = "0x6000B22")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "7")]
	public virtual object GetService(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000B23")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "8")]
	public virtual void SetSavedLicenseKey(Type type, string key)
	{
	}

	[Token(Token = "0x6000B24")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public LicenseContext()
	{
	}
}
