// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.NetworkInformation.CommonUnixIPGlobalProperties
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Net.NetworkInformation;

[Token(Token = "0x20001D9")]
internal abstract class CommonUnixIPGlobalProperties : IPGlobalProperties
{
	[Token(Token = "0x170002B8")]
	public override string DomainName
	{
		[Token(Token = "0x6000B9D")]
		[Address(RVA = "0x49A4450", Offset = "0x49A4450", VA = "0x49A4450", Slot = "4")]
		get
		{
			return null;
		}
	}

	[PreserveSig]
	[Token(Token = "0x6000B9C")]
	[Address(RVA = "0x49A43C0", Offset = "0x49A43C0", VA = "0x49A43C0")]
	private static extern int getdomainname(byte[] name, int len);

	[Token(Token = "0x6000B9E")]
	[Address(RVA = "0x49A4680", Offset = "0x49A4680", VA = "0x49A4680")]
	protected CommonUnixIPGlobalProperties()
	{
	}
}
