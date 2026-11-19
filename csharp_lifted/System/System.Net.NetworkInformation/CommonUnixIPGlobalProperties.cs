// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.NetworkInformation.CommonUnixIPGlobalProperties
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Net.NetworkInformation;

[Token(Token = "0x2000322")]
internal abstract class CommonUnixIPGlobalProperties : IPGlobalProperties
{
	[Token(Token = "0x170004DF")]
	public override string DomainName
	{
		[Token(Token = "0x60015A0")]
		[Address(RVA = "0x61A47F0", Offset = "0x61A37F0", VA = "0x61A47F0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[PreserveSig]
	[Token(Token = "0x600159F")]
	[Address(RVA = "0x61A4760", Offset = "0x61A3760", VA = "0x61A4760")]
	private static extern int getdomainname(byte[] name, int len);

	[Token(Token = "0x60015A1")]
	[Address(RVA = "0x61A49F0", Offset = "0x61A39F0", VA = "0x61A49F0")]
	protected CommonUnixIPGlobalProperties()
	{
	}
}
