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

[Token(Token = "0x20003A6")]
public sealed class WebRequestModuleElement : ConfigurationElement
{
	[Token(Token = "0x1700058F")]
	public string Prefix
	{
		[Token(Token = "0x600184F")]
		[Address(RVA = "0x48F5930", Offset = "0x48F5930", VA = "0x48F5930")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001850")]
		[Address(RVA = "0x48F5960", Offset = "0x48F5960", VA = "0x48F5960")]
		set
		{
		}
	}

	[Token(Token = "0x17000590")]
	protected override ConfigurationPropertyCollection Properties
	{
		[Token(Token = "0x6001851")]
		[Address(RVA = "0x48F5990", Offset = "0x48F5990", VA = "0x48F5990", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000591")]
	public Type Type
	{
		[Token(Token = "0x6001852")]
		[Address(RVA = "0x48F59C0", Offset = "0x48F59C0", VA = "0x48F59C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001853")]
		[Address(RVA = "0x48F59F0", Offset = "0x48F59F0", VA = "0x48F59F0")]
		set
		{
		}
	}

	[Token(Token = "0x600184C")]
	[Address(RVA = "0x48F58A0", Offset = "0x48F58A0", VA = "0x48F58A0")]
	public WebRequestModuleElement()
	{
	}

	[Token(Token = "0x600184D")]
	[Address(RVA = "0x48F58D0", Offset = "0x48F58D0", VA = "0x48F58D0")]
	public WebRequestModuleElement(string prefix, string type)
	{
	}

	[Token(Token = "0x600184E")]
	[Address(RVA = "0x48F5900", Offset = "0x48F5900", VA = "0x48F5900")]
	public WebRequestModuleElement(string prefix, Type type)
	{
	}
}
