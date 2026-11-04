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

[Token(Token = "0x2000401")]
public sealed class WebRequestModuleElement : ConfigurationElement
{
	[Token(Token = "0x170005F9")]
	public string Prefix
	{
		[Token(Token = "0x6001AF3")]
		[Address(RVA = "0x282CDC0", Offset = "0x282B3C0", VA = "0x18282CDC0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001AF4")]
		[Address(RVA = "0x282CE50", Offset = "0x282B450", VA = "0x18282CE50")]
		set
		{
		}
	}

	[Token(Token = "0x170005FA")]
	protected override ConfigurationPropertyCollection Properties
	{
		[Token(Token = "0x6001AF5")]
		[Address(RVA = "0x282CDF0", Offset = "0x282B3F0", VA = "0x18282CDF0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005FB")]
	public Type Type
	{
		[Token(Token = "0x6001AF6")]
		[Address(RVA = "0x282CE20", Offset = "0x282B420", VA = "0x18282CE20")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001AF7")]
		[Address(RVA = "0x282CE80", Offset = "0x282B480", VA = "0x18282CE80")]
		set
		{
		}
	}

	[Token(Token = "0x6001AF0")]
	[Address(RVA = "0x282CD60", Offset = "0x282B360", VA = "0x18282CD60")]
	public WebRequestModuleElement()
	{
	}

	[Token(Token = "0x6001AF1")]
	[Address(RVA = "0x282CD30", Offset = "0x282B330", VA = "0x18282CD30")]
	public WebRequestModuleElement(string prefix, string type)
	{
	}

	[Token(Token = "0x6001AF2")]
	[Address(RVA = "0x282CD90", Offset = "0x282B390", VA = "0x18282CD90")]
	public WebRequestModuleElement(string prefix, Type type)
	{
	}
}
