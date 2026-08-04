// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.Configuration.AuthenticationModulesSection
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Configuration;
using Il2CppDummyDll;

namespace System.Net.Configuration;

[Token(Token = "0x2000385")]
public sealed class AuthenticationModulesSection : ConfigurationSection
{
	[Token(Token = "0x1700051A")]
	public AuthenticationModuleElementCollection AuthenticationModules
	{
		[Token(Token = "0x6001750")]
		[Address(RVA = "0x48F2960", Offset = "0x48F2960", VA = "0x48F2960")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700051B")]
	protected override ConfigurationPropertyCollection Properties
	{
		[Token(Token = "0x6001751")]
		[Address(RVA = "0x48F2990", Offset = "0x48F2990", VA = "0x48F2990", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600174F")]
	[Address(RVA = "0x48F2930", Offset = "0x48F2930", VA = "0x48F2930")]
	public AuthenticationModulesSection()
	{
	}

	[Token(Token = "0x6001752")]
	[Address(RVA = "0x48F29C0", Offset = "0x48F29C0", VA = "0x48F29C0", Slot = "6")]
	protected override void InitializeDefault()
	{
	}

	[Token(Token = "0x6001753")]
	[Address(RVA = "0x48F29F0", Offset = "0x48F29F0", VA = "0x48F29F0", Slot = "8")]
	protected override void PostDeserialize()
	{
	}
}
