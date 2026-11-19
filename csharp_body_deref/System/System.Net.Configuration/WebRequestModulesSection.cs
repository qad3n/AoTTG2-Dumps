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

[Token(Token = "0x20003BB")]
public sealed class WebRequestModulesSection : ConfigurationSection
{
	[Token(Token = "0x170005C8")]
	protected override ConfigurationPropertyCollection Properties
	{
		[Token(Token = "0x6001925")]
		[Address(RVA = "0x61D2060", Offset = "0x61D1060", VA = "0x61D2060", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005C9")]
	public WebRequestModuleElementCollection WebRequestModules
	{
		[Token(Token = "0x6001926")]
		[Address(RVA = "0x61D2090", Offset = "0x61D1090", VA = "0x61D2090")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001924")]
	[Address(RVA = "0x61D2030", Offset = "0x61D1030", VA = "0x61D2030")]
	public WebRequestModulesSection()
	{
	}

	[Token(Token = "0x6001927")]
	[Address(RVA = "0x61D20C0", Offset = "0x61D10C0", VA = "0x61D20C0", Slot = "6")]
	protected override void InitializeDefault()
	{
	}

	[Token(Token = "0x6001928")]
	[Address(RVA = "0x61D20F0", Offset = "0x61D10F0", VA = "0x61D20F0", Slot = "8")]
	protected override void PostDeserialize()
	{
	}
}
