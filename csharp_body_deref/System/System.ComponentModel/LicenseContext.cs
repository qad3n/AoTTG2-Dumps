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

[Token(Token = "0x20002AF")]
public class LicenseContext : IServiceProvider
{
	[Token(Token = "0x170003C5")]
	public virtual LicenseUsageMode UsageMode
	{
		[Token(Token = "0x60010D8")]
		[Address(RVA = "0x4895570", Offset = "0x4895570", VA = "0x4895570", Slot = "5")]
		get
		{
			return default(LicenseUsageMode);
		}
	}

	[Token(Token = "0x60010D9")]
	[Address(RVA = "0x4895580", Offset = "0x4895580", VA = "0x4895580", Slot = "6")]
	public virtual string GetSavedLicenseKey(Type type, Assembly resourceAssembly)
	{
		return null;
	}

	[Token(Token = "0x60010DA")]
	[Address(RVA = "0x4895590", Offset = "0x4895590", VA = "0x4895590", Slot = "7")]
	public virtual object GetService(Type type)
	{
		return null;
	}

	[Token(Token = "0x60010DB")]
	[Address(RVA = "0x48955A0", Offset = "0x48955A0", VA = "0x48955A0", Slot = "8")]
	public virtual void SetSavedLicenseKey(Type type, string key)
	{
	}

	[Token(Token = "0x60010DC")]
	[Address(RVA = "0x48955B0", Offset = "0x48955B0", VA = "0x48955B0")]
	public LicenseContext()
	{
	}
}
