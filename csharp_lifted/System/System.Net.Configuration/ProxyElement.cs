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

[Token(Token = "0x20003A4")]
public sealed class ProxyElement : ConfigurationElement
{
	[Token(Token = "0x20003A5")]
	public enum AutoDetectValues
	{
		[Token(Token = "0x400100F")]
		False = 0,
		[Token(Token = "0x4001010")]
		True = 1,
		[Token(Token = "0x4001011")]
		Unspecified = -1
	}

	[Token(Token = "0x20003A6")]
	public enum BypassOnLocalValues
	{
		[Token(Token = "0x4001013")]
		False = 0,
		[Token(Token = "0x4001014")]
		True = 1,
		[Token(Token = "0x4001015")]
		Unspecified = -1
	}

	[Token(Token = "0x20003A7")]
	public enum UseSystemDefaultValues
	{
		[Token(Token = "0x4001017")]
		False = 0,
		[Token(Token = "0x4001018")]
		True = 1,
		[Token(Token = "0x4001019")]
		Unspecified = -1
	}

	[Token(Token = "0x1700056A")]
	public AutoDetectValues AutoDetect
	{
		[Token(Token = "0x6001878")]
		[Address(RVA = "0x61CFFF0", Offset = "0x61CEFF0", VA = "0x61CFFF0")]
		get
		{
			return default(AutoDetectValues);
		}
		[Token(Token = "0x6001879")]
		[Address(RVA = "0x61D0020", Offset = "0x61CF020", VA = "0x61D0020")]
		set
		{
		}
	}

	[Token(Token = "0x1700056B")]
	public BypassOnLocalValues BypassOnLocal
	{
		[Token(Token = "0x600187A")]
		[Address(RVA = "0x61D0050", Offset = "0x61CF050", VA = "0x61D0050")]
		get
		{
			return default(BypassOnLocalValues);
		}
		[Token(Token = "0x600187B")]
		[Address(RVA = "0x61D0080", Offset = "0x61CF080", VA = "0x61D0080")]
		set
		{
		}
	}

	[Token(Token = "0x1700056C")]
	protected override ConfigurationPropertyCollection Properties
	{
		[Token(Token = "0x600187C")]
		[Address(RVA = "0x61D00B0", Offset = "0x61CF0B0", VA = "0x61D00B0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700056D")]
	public Uri ProxyAddress
	{
		[Token(Token = "0x600187D")]
		[Address(RVA = "0x61D00E0", Offset = "0x61CF0E0", VA = "0x61D00E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600187E")]
		[Address(RVA = "0x61D0110", Offset = "0x61CF110", VA = "0x61D0110")]
		set
		{
		}
	}

	[Token(Token = "0x1700056E")]
	public Uri ScriptLocation
	{
		[Token(Token = "0x600187F")]
		[Address(RVA = "0x61D0140", Offset = "0x61CF140", VA = "0x61D0140")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001880")]
		[Address(RVA = "0x61D0170", Offset = "0x61CF170", VA = "0x61D0170")]
		set
		{
		}
	}

	[Token(Token = "0x1700056F")]
	public UseSystemDefaultValues UseSystemDefault
	{
		[Token(Token = "0x6001881")]
		[Address(RVA = "0x61D01A0", Offset = "0x61CF1A0", VA = "0x61D01A0")]
		get
		{
			return default(UseSystemDefaultValues);
		}
		[Token(Token = "0x6001882")]
		[Address(RVA = "0x61D01D0", Offset = "0x61CF1D0", VA = "0x61D01D0")]
		set
		{
		}
	}

	[Token(Token = "0x6001877")]
	[Address(RVA = "0x61CFFC0", Offset = "0x61CEFC0", VA = "0x61CFFC0")]
	public ProxyElement()
	{
	}
}
