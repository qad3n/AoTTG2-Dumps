// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.Configuration.ProxyElement
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Configuration;
using Il2CppDummyDll;

namespace System.Net.Configuration;

[Token(Token = "0x20003E8")]
public sealed class ProxyElement : ConfigurationElement
{
	[Token(Token = "0x20003E9")]
	public enum AutoDetectValues
	{
		[Token(Token = "0x40010F9")]
		False = 0,
		[Token(Token = "0x40010FA")]
		True = 1,
		[Token(Token = "0x40010FB")]
		Unspecified = -1
	}

	[Token(Token = "0x20003EA")]
	public enum BypassOnLocalValues
	{
		[Token(Token = "0x40010FD")]
		False = 0,
		[Token(Token = "0x40010FE")]
		True = 1,
		[Token(Token = "0x40010FF")]
		Unspecified = -1
	}

	[Token(Token = "0x20003EB")]
	public enum UseSystemDefaultValues
	{
		[Token(Token = "0x4001101")]
		False = 0,
		[Token(Token = "0x4001102")]
		True = 1,
		[Token(Token = "0x4001103")]
		Unspecified = -1
	}

	[Token(Token = "0x17000598")]
	public AutoDetectValues AutoDetect
	{
		[Token(Token = "0x6001A32")]
		[Address(RVA = "0x282B710", Offset = "0x2829D10", VA = "0x18282B710")]
		get
		{
			return default(AutoDetectValues);
		}
		[Token(Token = "0x6001A33")]
		[Address(RVA = "0x282B830", Offset = "0x2829E30", VA = "0x18282B830")]
		set
		{
		}
	}

	[Token(Token = "0x17000599")]
	public BypassOnLocalValues BypassOnLocal
	{
		[Token(Token = "0x6001A34")]
		[Address(RVA = "0x282B740", Offset = "0x2829D40", VA = "0x18282B740")]
		get
		{
			return default(BypassOnLocalValues);
		}
		[Token(Token = "0x6001A35")]
		[Address(RVA = "0x282B860", Offset = "0x2829E60", VA = "0x18282B860")]
		set
		{
		}
	}

	[Token(Token = "0x1700059A")]
	protected override ConfigurationPropertyCollection Properties
	{
		[Token(Token = "0x6001A36")]
		[Address(RVA = "0x282B770", Offset = "0x2829D70", VA = "0x18282B770", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700059B")]
	public Uri ProxyAddress
	{
		[Token(Token = "0x6001A37")]
		[Address(RVA = "0x282B7A0", Offset = "0x2829DA0", VA = "0x18282B7A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001A38")]
		[Address(RVA = "0x282B890", Offset = "0x2829E90", VA = "0x18282B890")]
		set
		{
		}
	}

	[Token(Token = "0x1700059C")]
	public Uri ScriptLocation
	{
		[Token(Token = "0x6001A39")]
		[Address(RVA = "0x282B7D0", Offset = "0x2829DD0", VA = "0x18282B7D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001A3A")]
		[Address(RVA = "0x282B8C0", Offset = "0x2829EC0", VA = "0x18282B8C0")]
		set
		{
		}
	}

	[Token(Token = "0x1700059D")]
	public UseSystemDefaultValues UseSystemDefault
	{
		[Token(Token = "0x6001A3B")]
		[Address(RVA = "0x282B800", Offset = "0x2829E00", VA = "0x18282B800")]
		get
		{
			return default(UseSystemDefaultValues);
		}
		[Token(Token = "0x6001A3C")]
		[Address(RVA = "0x282B8F0", Offset = "0x2829EF0", VA = "0x18282B8F0")]
		set
		{
		}
	}

	[Token(Token = "0x6001A31")]
	[Address(RVA = "0x282B6E0", Offset = "0x2829CE0", VA = "0x18282B6E0")]
	public ProxyElement()
	{
	}
}
