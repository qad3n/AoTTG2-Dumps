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

[Token(Token = "0x20003FF")]
public sealed class WebRequestModulesSection : ConfigurationSection
{
	[Token(Token = "0x170005F6")]
	protected override ConfigurationPropertyCollection Properties
	{
		[Token(Token = "0x6001ADF")]
		[Address(RVA = "0x282CF40", Offset = "0x282B540", VA = "0x18282CF40", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005F7")]
	public WebRequestModuleElementCollection WebRequestModules
	{
		[Token(Token = "0x6001AE0")]
		[Address(RVA = "0x282CF70", Offset = "0x282B570", VA = "0x18282CF70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001ADE")]
	[Address(RVA = "0x282CF10", Offset = "0x282B510", VA = "0x18282CF10")]
	public WebRequestModulesSection()
	{
	}

	[Token(Token = "0x6001AE1")]
	[Address(RVA = "0x282CEB0", Offset = "0x282B4B0", VA = "0x18282CEB0", Slot = "6")]
	protected override void InitializeDefault()
	{
	}

	[Token(Token = "0x6001AE2")]
	[Address(RVA = "0x282CEE0", Offset = "0x282B4E0", VA = "0x18282CEE0", Slot = "8")]
	protected override void PostDeserialize()
	{
	}
}
