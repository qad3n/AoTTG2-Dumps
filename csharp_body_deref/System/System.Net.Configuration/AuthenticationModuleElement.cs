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

[Token(Token = "0x20003DE")]
public sealed class AuthenticationModuleElement : ConfigurationElement
{
	[Token(Token = "0x17000581")]
	protected override ConfigurationPropertyCollection Properties
	{
		[Token(Token = "0x60019E3")]
		[Address(RVA = "0x2829F10", Offset = "0x2828510", VA = "0x182829F10", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000582")]
	public string Type
	{
		[Token(Token = "0x60019E4")]
		[Address(RVA = "0x2829F40", Offset = "0x2828540", VA = "0x182829F40")]
		get
		{
			return null;
		}
		[Token(Token = "0x60019E5")]
		[Address(RVA = "0x2829F70", Offset = "0x2828570", VA = "0x182829F70")]
		set
		{
		}
	}

	[Token(Token = "0x60019E1")]
	[Address(RVA = "0x2829EE0", Offset = "0x28284E0", VA = "0x182829EE0")]
	public AuthenticationModuleElement()
	{
	}

	[Token(Token = "0x60019E2")]
	[Address(RVA = "0x2829EB0", Offset = "0x28284B0", VA = "0x182829EB0")]
	public AuthenticationModuleElement(string typeName)
	{
	}
}
