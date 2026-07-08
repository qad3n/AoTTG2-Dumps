using System.Configuration;
using Il2CppDummyDll;

namespace System.Net.Configuration;

[Token(Token = "0x200038C")]
public sealed class ModuleElement : ConfigurationElement
{
	[Token(Token = "0x1700052C")]
	protected override ConfigurationPropertyCollection Properties
	{
		[Token(Token = "0x600178A")]
		[Address(RVA = "0x45CE340", Offset = "0x45CE340", VA = "0x45CE340", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700052D")]
	public string Type
	{
		[Token(Token = "0x600178B")]
		[Address(RVA = "0x45CE370", Offset = "0x45CE370", VA = "0x45CE370")]
		get
		{
			return null;
		}
		[Token(Token = "0x600178C")]
		[Address(RVA = "0x45CE3A0", Offset = "0x45CE3A0", VA = "0x45CE3A0")]
		set
		{
		}
	}

	[Token(Token = "0x6001789")]
	[Address(RVA = "0x45CE310", Offset = "0x45CE310", VA = "0x45CE310")]
	public ModuleElement()
	{
	}
}
