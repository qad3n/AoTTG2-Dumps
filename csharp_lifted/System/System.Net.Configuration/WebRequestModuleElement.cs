// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.Configuration.WebRequestModuleElement
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Configuration;
using Il2CppDummyDll;

namespace System.Net.Configuration;

[Token(Token = "0x20003BD")]
public sealed class WebRequestModuleElement : ConfigurationElement
{
	[Token(Token = "0x170005CB")]
	public string Prefix
	{
		[Token(Token = "0x6001939")]
		[Address(RVA = "0x61D2420", Offset = "0x61D1420", VA = "0x61D2420")]
		get
		{
			return null;
		}
		[Token(Token = "0x600193A")]
		[Address(RVA = "0x61D2450", Offset = "0x61D1450", VA = "0x61D2450")]
		set
		{
		}
	}

	[Token(Token = "0x170005CC")]
	protected override ConfigurationPropertyCollection Properties
	{
		[Token(Token = "0x600193B")]
		[Address(RVA = "0x61D2480", Offset = "0x61D1480", VA = "0x61D2480", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005CD")]
	public Type Type
	{
		[Token(Token = "0x600193C")]
		[Address(RVA = "0x61D24B0", Offset = "0x61D14B0", VA = "0x61D24B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600193D")]
		[Address(RVA = "0x61D24E0", Offset = "0x61D14E0", VA = "0x61D24E0")]
		set
		{
		}
	}

	[Token(Token = "0x6001936")]
	[Address(RVA = "0x61D2390", Offset = "0x61D1390", VA = "0x61D2390")]
	public WebRequestModuleElement()
	{
	}

	[Token(Token = "0x6001937")]
	[Address(RVA = "0x61D23C0", Offset = "0x61D13C0", VA = "0x61D23C0")]
	public WebRequestModuleElement(string prefix, string type)
	{
	}

	[Token(Token = "0x6001938")]
	[Address(RVA = "0x61D23F0", Offset = "0x61D13F0", VA = "0x61D23F0")]
	public WebRequestModuleElement(string prefix, Type type)
	{
	}
}
