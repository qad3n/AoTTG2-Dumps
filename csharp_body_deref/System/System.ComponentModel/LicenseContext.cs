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

[Token(Token = "0x200017B")]
public class LicenseContext : IServiceProvider
{
	[Token(Token = "0x17000205")]
	public virtual LicenseUsageMode UsageMode
	{
		[Token(Token = "0x6000960")]
		[Address(RVA = "0x6235580", Offset = "0x6234580", VA = "0x6235580", Slot = "5")]
		get
		{
			return default(LicenseUsageMode);
		}
	}

	[Token(Token = "0x6000961")]
	[Address(RVA = "0x6235590", Offset = "0x6234590", VA = "0x6235590", Slot = "6")]
	public virtual string GetSavedLicenseKey(Type type, Assembly resourceAssembly)
	{
		return null;
	}

	[Token(Token = "0x6000962")]
	[Address(RVA = "0x62355A0", Offset = "0x62345A0", VA = "0x62355A0", Slot = "7")]
	public virtual object GetService(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000963")]
	[Address(RVA = "0x62355B0", Offset = "0x62345B0", VA = "0x62355B0", Slot = "8")]
	public virtual void SetSavedLicenseKey(Type type, string key)
	{
	}

	[Token(Token = "0x6000964")]
	[Address(RVA = "0x62355C0", Offset = "0x62345C0", VA = "0x62355C0")]
	public LicenseContext()
	{
	}
}
