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
		[Address(RVA = "0x4570470", Offset = "0x4570470", VA = "0x4570470", Slot = "5")]
		get
		{
			return default(LicenseUsageMode);
		}
	}

	[Token(Token = "0x60010D9")]
	[Address(RVA = "0x4570480", Offset = "0x4570480", VA = "0x4570480", Slot = "6")]
	public virtual string GetSavedLicenseKey(Type type, Assembly resourceAssembly)
	{
		return null;
	}

	[Token(Token = "0x60010DA")]
	[Address(RVA = "0x4570490", Offset = "0x4570490", VA = "0x4570490", Slot = "7")]
	public virtual object GetService(Type type)
	{
		return null;
	}

	[Token(Token = "0x60010DB")]
	[Address(RVA = "0x45704A0", Offset = "0x45704A0", VA = "0x45704A0", Slot = "8")]
	public virtual void SetSavedLicenseKey(Type type, string key)
	{
	}

	[Token(Token = "0x60010DC")]
	[Address(RVA = "0x45704B0", Offset = "0x45704B0", VA = "0x45704B0")]
	public LicenseContext()
	{
	}
}
