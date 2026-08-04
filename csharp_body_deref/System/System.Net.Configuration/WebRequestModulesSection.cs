// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.Configuration.WebRequestModulesSection
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Configuration;
using Il2CppDummyDll;

namespace System.Net.Configuration;

[Token(Token = "0x20003A4")]
public sealed class WebRequestModulesSection : ConfigurationSection
{
	[Token(Token = "0x1700058C")]
	protected override ConfigurationPropertyCollection Properties
	{
		[Token(Token = "0x600183B")]
		[Address(RVA = "0x48F5570", Offset = "0x48F5570", VA = "0x48F5570", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700058D")]
	public WebRequestModuleElementCollection WebRequestModules
	{
		[Token(Token = "0x600183C")]
		[Address(RVA = "0x48F55A0", Offset = "0x48F55A0", VA = "0x48F55A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600183A")]
	[Address(RVA = "0x48F5540", Offset = "0x48F5540", VA = "0x48F5540")]
	public WebRequestModulesSection()
	{
	}

	[Token(Token = "0x600183D")]
	[Address(RVA = "0x48F55D0", Offset = "0x48F55D0", VA = "0x48F55D0", Slot = "6")]
	protected override void InitializeDefault()
	{
	}

	[Token(Token = "0x600183E")]
	[Address(RVA = "0x48F5600", Offset = "0x48F5600", VA = "0x48F5600", Slot = "8")]
	protected override void PostDeserialize()
	{
	}
}
