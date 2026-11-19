// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.NetworkInformation.UnixIPGlobalPropertiesFactoryPal
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Net.NetworkInformation;

[Token(Token = "0x2000326")]
internal static class UnixIPGlobalPropertiesFactoryPal
{
	[Token(Token = "0x170004E1")]
	private static bool PlatformNeedsLibCWorkaround
	{
		[Token(Token = "0x60015A7")]
		[Address(RVA = "0x61A4C50", Offset = "0x61A3C50", VA = "0x61A4C50")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60015A8")]
	[Address(RVA = "0x61A4630", Offset = "0x61A3630", VA = "0x61A4630")]
	public static IPGlobalProperties Create()
	{
		return null;
	}
}
