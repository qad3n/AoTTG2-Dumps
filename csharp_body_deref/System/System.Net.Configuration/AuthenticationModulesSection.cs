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

[Token(Token = "0x20003E0")]
public sealed class AuthenticationModulesSection : ConfigurationSection
{
	[Token(Token = "0x17000584")]
	public AuthenticationModuleElementCollection AuthenticationModules
	{
		[Token(Token = "0x60019F4")]
		[Address(RVA = "0x282A030", Offset = "0x2828630", VA = "0x18282A030")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000585")]
	protected override ConfigurationPropertyCollection Properties
	{
		[Token(Token = "0x60019F5")]
		[Address(RVA = "0x282A060", Offset = "0x2828660", VA = "0x18282A060", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60019F3")]
	[Address(RVA = "0x282A000", Offset = "0x2828600", VA = "0x18282A000")]
	public AuthenticationModulesSection()
	{
	}

	[Token(Token = "0x60019F6")]
	[Address(RVA = "0x2829FA0", Offset = "0x28285A0", VA = "0x182829FA0", Slot = "6")]
	protected override void InitializeDefault()
	{
	}

	[Token(Token = "0x60019F7")]
	[Address(RVA = "0x2829FD0", Offset = "0x28285D0", VA = "0x182829FD0", Slot = "8")]
	protected override void PostDeserialize()
	{
	}
}
