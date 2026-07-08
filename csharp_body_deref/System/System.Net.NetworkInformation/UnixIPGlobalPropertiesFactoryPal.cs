using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Net.NetworkInformation;

[Token(Token = "0x20001DD")]
internal static class UnixIPGlobalPropertiesFactoryPal
{
	[Token(Token = "0x170002BA")]
	private static bool PlatformNeedsLibCWorkaround
	{
		[Token(Token = "0x6000BA4")]
		[Address(RVA = "0x467F7E0", Offset = "0x467F7E0", VA = "0x467F7E0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000BA5")]
	[Address(RVA = "0x467F190", Offset = "0x467F190", VA = "0x467F190")]
	public static IPGlobalProperties Create()
	{
		return null;
	}
}
