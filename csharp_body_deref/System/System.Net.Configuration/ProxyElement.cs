using System.Configuration;
using Il2CppDummyDll;

namespace System.Net.Configuration;

[Token(Token = "0x200038D")]
public sealed class ProxyElement : ConfigurationElement
{
	[Token(Token = "0x200038E")]
	public enum AutoDetectValues
	{
		[Token(Token = "0x4000FCB")]
		False = 0,
		[Token(Token = "0x4000FCC")]
		True = 1,
		[Token(Token = "0x4000FCD")]
		Unspecified = -1
	}

	[Token(Token = "0x200038F")]
	public enum BypassOnLocalValues
	{
		[Token(Token = "0x4000FCF")]
		False = 0,
		[Token(Token = "0x4000FD0")]
		True = 1,
		[Token(Token = "0x4000FD1")]
		Unspecified = -1
	}

	[Token(Token = "0x2000390")]
	public enum UseSystemDefaultValues
	{
		[Token(Token = "0x4000FD3")]
		False = 0,
		[Token(Token = "0x4000FD4")]
		True = 1,
		[Token(Token = "0x4000FD5")]
		Unspecified = -1
	}

	[Token(Token = "0x1700052E")]
	public AutoDetectValues AutoDetect
	{
		[Token(Token = "0x600178E")]
		[Address(RVA = "0x45CE400", Offset = "0x45CE400", VA = "0x45CE400")]
		get
		{
			return default(AutoDetectValues);
		}
		[Token(Token = "0x600178F")]
		[Address(RVA = "0x45CE430", Offset = "0x45CE430", VA = "0x45CE430")]
		set
		{
		}
	}

	[Token(Token = "0x1700052F")]
	public BypassOnLocalValues BypassOnLocal
	{
		[Token(Token = "0x6001790")]
		[Address(RVA = "0x45CE460", Offset = "0x45CE460", VA = "0x45CE460")]
		get
		{
			return default(BypassOnLocalValues);
		}
		[Token(Token = "0x6001791")]
		[Address(RVA = "0x45CE490", Offset = "0x45CE490", VA = "0x45CE490")]
		set
		{
		}
	}

	[Token(Token = "0x17000530")]
	protected override ConfigurationPropertyCollection Properties
	{
		[Token(Token = "0x6001792")]
		[Address(RVA = "0x45CE4C0", Offset = "0x45CE4C0", VA = "0x45CE4C0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000531")]
	public Uri ProxyAddress
	{
		[Token(Token = "0x6001793")]
		[Address(RVA = "0x45CE4F0", Offset = "0x45CE4F0", VA = "0x45CE4F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001794")]
		[Address(RVA = "0x45CE520", Offset = "0x45CE520", VA = "0x45CE520")]
		set
		{
		}
	}

	[Token(Token = "0x17000532")]
	public Uri ScriptLocation
	{
		[Token(Token = "0x6001795")]
		[Address(RVA = "0x45CE550", Offset = "0x45CE550", VA = "0x45CE550")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001796")]
		[Address(RVA = "0x45CE580", Offset = "0x45CE580", VA = "0x45CE580")]
		set
		{
		}
	}

	[Token(Token = "0x17000533")]
	public UseSystemDefaultValues UseSystemDefault
	{
		[Token(Token = "0x6001797")]
		[Address(RVA = "0x45CE5B0", Offset = "0x45CE5B0", VA = "0x45CE5B0")]
		get
		{
			return default(UseSystemDefaultValues);
		}
		[Token(Token = "0x6001798")]
		[Address(RVA = "0x45CE5E0", Offset = "0x45CE5E0", VA = "0x45CE5E0")]
		set
		{
		}
	}

	[Token(Token = "0x600178D")]
	[Address(RVA = "0x45CE3D0", Offset = "0x45CE3D0", VA = "0x45CE3D0")]
	public ProxyElement()
	{
	}
}
