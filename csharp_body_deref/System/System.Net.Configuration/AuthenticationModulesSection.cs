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

[Token(Token = "0x200039C")]
public sealed class AuthenticationModulesSection : ConfigurationSection
{
	[Token(Token = "0x17000556")]
	public AuthenticationModuleElementCollection AuthenticationModules
	{
		[Token(Token = "0x600183A")]
		[Address(RVA = "0x61CF450", Offset = "0x61CE450", VA = "0x61CF450")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000557")]
	protected override ConfigurationPropertyCollection Properties
	{
		[Token(Token = "0x600183B")]
		[Address(RVA = "0x61CF480", Offset = "0x61CE480", VA = "0x61CF480", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001839")]
	[Address(RVA = "0x61CF420", Offset = "0x61CE420", VA = "0x61CF420")]
	public AuthenticationModulesSection()
	{
	}

	[Token(Token = "0x600183C")]
	[Address(RVA = "0x61CF4B0", Offset = "0x61CE4B0", VA = "0x61CF4B0", Slot = "6")]
	protected override void InitializeDefault()
	{
	}

	[Token(Token = "0x600183D")]
	[Address(RVA = "0x61CF4E0", Offset = "0x61CE4E0", VA = "0x61CF4E0", Slot = "8")]
	protected override void PostDeserialize()
	{
	}
}
