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
		[Address(RVA = "0x48F3500", Offset = "0x48F3500", VA = "0x48F3500")]
		get
		{
			return default(AutoDetectValues);
		}
		[Token(Token = "0x600178F")]
		[Address(RVA = "0x48F3530", Offset = "0x48F3530", VA = "0x48F3530")]
		set
		{
		}
	}

	[Token(Token = "0x1700052F")]
	public BypassOnLocalValues BypassOnLocal
	{
		[Token(Token = "0x6001790")]
		[Address(RVA = "0x48F3560", Offset = "0x48F3560", VA = "0x48F3560")]
		get
		{
			return default(BypassOnLocalValues);
		}
		[Token(Token = "0x6001791")]
		[Address(RVA = "0x48F3590", Offset = "0x48F3590", VA = "0x48F3590")]
		set
		{
		}
	}

	[Token(Token = "0x17000530")]
	protected override ConfigurationPropertyCollection Properties
	{
		[Token(Token = "0x6001792")]
		[Address(RVA = "0x48F35C0", Offset = "0x48F35C0", VA = "0x48F35C0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000531")]
	public Uri ProxyAddress
	{
		[Token(Token = "0x6001793")]
		[Address(RVA = "0x48F35F0", Offset = "0x48F35F0", VA = "0x48F35F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001794")]
		[Address(RVA = "0x48F3620", Offset = "0x48F3620", VA = "0x48F3620")]
		set
		{
		}
	}

	[Token(Token = "0x17000532")]
	public Uri ScriptLocation
	{
		[Token(Token = "0x6001795")]
		[Address(RVA = "0x48F3650", Offset = "0x48F3650", VA = "0x48F3650")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001796")]
		[Address(RVA = "0x48F3680", Offset = "0x48F3680", VA = "0x48F3680")]
		set
		{
		}
	}

	[Token(Token = "0x17000533")]
	public UseSystemDefaultValues UseSystemDefault
	{
		[Token(Token = "0x6001797")]
		[Address(RVA = "0x48F36B0", Offset = "0x48F36B0", VA = "0x48F36B0")]
		get
		{
			return default(UseSystemDefaultValues);
		}
		[Token(Token = "0x6001798")]
		[Address(RVA = "0x48F36E0", Offset = "0x48F36E0", VA = "0x48F36E0")]
		set
		{
		}
	}

	[Token(Token = "0x600178D")]
	[Address(RVA = "0x48F34D0", Offset = "0x48F34D0", VA = "0x48F34D0")]
	public ProxyElement()
	{
	}
}
