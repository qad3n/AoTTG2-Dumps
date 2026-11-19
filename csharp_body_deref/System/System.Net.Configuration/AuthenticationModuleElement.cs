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

[Token(Token = "0x200039A")]
public sealed class AuthenticationModuleElement : ConfigurationElement
{
	[Token(Token = "0x17000553")]
	protected override ConfigurationPropertyCollection Properties
	{
		[Token(Token = "0x6001829")]
		[Address(RVA = "0x61CF120", Offset = "0x61CE120", VA = "0x61CF120", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000554")]
	public string Type
	{
		[Token(Token = "0x600182A")]
		[Address(RVA = "0x61CF150", Offset = "0x61CE150", VA = "0x61CF150")]
		get
		{
			return null;
		}
		[Token(Token = "0x600182B")]
		[Address(RVA = "0x61CF180", Offset = "0x61CE180", VA = "0x61CF180")]
		set
		{
		}
	}

	[Token(Token = "0x6001827")]
	[Address(RVA = "0x61CF0C0", Offset = "0x61CE0C0", VA = "0x61CF0C0")]
	public AuthenticationModuleElement()
	{
	}

	[Token(Token = "0x6001828")]
	[Address(RVA = "0x61CF0F0", Offset = "0x61CE0F0", VA = "0x61CF0F0")]
	public AuthenticationModuleElement(string typeName)
	{
	}
}
