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

[Token(Token = "0x200039D")]
public sealed class BypassElement : ConfigurationElement
{
	[Token(Token = "0x17000558")]
	public string Address
	{
		[Token(Token = "0x6001840")]
		[Address(RVA = "0x61CF570", Offset = "0x61CE570", VA = "0x61CF570")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001841")]
		[Address(RVA = "0x61CF5A0", Offset = "0x61CE5A0", VA = "0x61CF5A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000559")]
	protected override ConfigurationPropertyCollection Properties
	{
		[Token(Token = "0x6001842")]
		[Address(RVA = "0x61CF5D0", Offset = "0x61CE5D0", VA = "0x61CF5D0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600183E")]
	[Address(RVA = "0x61CF510", Offset = "0x61CE510", VA = "0x61CF510")]
	public BypassElement()
	{
	}

	[Token(Token = "0x600183F")]
	[Address(RVA = "0x61CF540", Offset = "0x61CE540", VA = "0x61CF540")]
	public BypassElement(string address)
	{
	}
}
