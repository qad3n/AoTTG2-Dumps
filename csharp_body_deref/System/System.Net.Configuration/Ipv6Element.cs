// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.Configuration.Ipv6Element
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Configuration;
using Il2CppDummyDll;

namespace System.Net.Configuration;

[Token(Token = "0x20003F1")]
public sealed class Ipv6Element : ConfigurationElement
{
	[Token(Token = "0x170005B4")]
	public bool Enabled
	{
		[Token(Token = "0x6001A67")]
		[Address(RVA = "0x282B2C0", Offset = "0x28298C0", VA = "0x18282B2C0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001A68")]
		[Address(RVA = "0x282B320", Offset = "0x2829920", VA = "0x18282B320")]
		set
		{
		}
	}

	[Token(Token = "0x170005B5")]
	protected override ConfigurationPropertyCollection Properties
	{
		[Token(Token = "0x6001A69")]
		[Address(RVA = "0x282B2F0", Offset = "0x28298F0", VA = "0x18282B2F0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001A66")]
	[Address(RVA = "0x282B290", Offset = "0x2829890", VA = "0x18282B290")]
	public Ipv6Element()
	{
	}
}
