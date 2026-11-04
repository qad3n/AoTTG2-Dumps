// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.Configuration.BypassElement
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Configuration;
using Il2CppDummyDll;

namespace System.Net.Configuration;

[Token(Token = "0x20003E1")]
public sealed class BypassElement : ConfigurationElement
{
	[Token(Token = "0x17000586")]
	public string Address
	{
		[Token(Token = "0x60019FA")]
		[Address(RVA = "0x282A390", Offset = "0x2828990", VA = "0x18282A390")]
		get
		{
			return null;
		}
		[Token(Token = "0x60019FB")]
		[Address(RVA = "0x282A3F0", Offset = "0x28289F0", VA = "0x18282A3F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000587")]
	protected override ConfigurationPropertyCollection Properties
	{
		[Token(Token = "0x60019FC")]
		[Address(RVA = "0x282A3C0", Offset = "0x28289C0", VA = "0x18282A3C0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60019F8")]
	[Address(RVA = "0x282A360", Offset = "0x2828960", VA = "0x18282A360")]
	public BypassElement()
	{
	}

	[Token(Token = "0x60019F9")]
	[Address(RVA = "0x282A330", Offset = "0x2828930", VA = "0x18282A330")]
	public BypassElement(string address)
	{
	}
}
