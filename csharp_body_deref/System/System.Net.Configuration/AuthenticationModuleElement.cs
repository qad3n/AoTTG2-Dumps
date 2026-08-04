// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.Configuration.AuthenticationModuleElement
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Configuration;
using Il2CppDummyDll;

namespace System.Net.Configuration;

[Token(Token = "0x2000383")]
public sealed class AuthenticationModuleElement : ConfigurationElement
{
	[Token(Token = "0x17000517")]
	protected override ConfigurationPropertyCollection Properties
	{
		[Token(Token = "0x600173F")]
		[Address(RVA = "0x48F2630", Offset = "0x48F2630", VA = "0x48F2630", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000518")]
	public string Type
	{
		[Token(Token = "0x6001740")]
		[Address(RVA = "0x48F2660", Offset = "0x48F2660", VA = "0x48F2660")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001741")]
		[Address(RVA = "0x48F2690", Offset = "0x48F2690", VA = "0x48F2690")]
		set
		{
		}
	}

	[Token(Token = "0x600173D")]
	[Address(RVA = "0x48F25D0", Offset = "0x48F25D0", VA = "0x48F25D0")]
	public AuthenticationModuleElement()
	{
	}

	[Token(Token = "0x600173E")]
	[Address(RVA = "0x48F2600", Offset = "0x48F2600", VA = "0x48F2600")]
	public AuthenticationModuleElement(string typeName)
	{
	}
}
