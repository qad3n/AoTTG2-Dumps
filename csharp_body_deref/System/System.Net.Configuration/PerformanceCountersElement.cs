using System.Configuration;
using Il2CppDummyDll;

namespace System.Net.Configuration;

[Token(Token = "0x200039E")]
public sealed class PerformanceCountersElement : ConfigurationElement
{
	[Token(Token = "0x17000576")]
	public bool Enabled
	{
		[Token(Token = "0x600180C")]
		[Address(RVA = "0x45CFBA0", Offset = "0x45CFBA0", VA = "0x45CFBA0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600180D")]
		[Address(RVA = "0x45CFBD0", Offset = "0x45CFBD0", VA = "0x45CFBD0")]
		set
		{
		}
	}

	[Token(Token = "0x17000577")]
	protected override ConfigurationPropertyCollection Properties
	{
		[Token(Token = "0x600180E")]
		[Address(RVA = "0x45CFC00", Offset = "0x45CFC00", VA = "0x45CFC00", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600180B")]
	[Address(RVA = "0x45CFB70", Offset = "0x45CFB70", VA = "0x45CFB70")]
	public PerformanceCountersElement()
	{
	}
}
