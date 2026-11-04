// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.NetworkInformation.Win32NetworkInterface
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Net.NetworkInformation;

[Token(Token = "0x2000363")]
internal class Win32NetworkInterface
{
	[Token(Token = "0x4000DE1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static Win32_FIXED_INFO fixedInfo;

	[Token(Token = "0x4000DE2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private static bool initialized;

	[Token(Token = "0x1700050E")]
	public static Win32_FIXED_INFO FixedInfo
	{
		[Token(Token = "0x600175F")]
		[Address(RVA = "0x280EED0", Offset = "0x280D4D0", VA = "0x18280EED0")]
		get
		{
			return default(Win32_FIXED_INFO);
		}
	}

	[PreserveSig]
	[Token(Token = "0x600175D")]
	[Address(RVA = "0x280EC40", Offset = "0x280D240", VA = "0x18280EC40")]
	private static extern int GetNetworkParams(IntPtr ptr, ref int size);

	[PreserveSig]
	[Token(Token = "0x600175E")]
	[Address(RVA = "0x280ECD0", Offset = "0x280D2D0", VA = "0x18280ECD0")]
	private unsafe static extern int MultiByteToWideChar(uint CodePage, uint dwFlags, byte* lpMultiByteStr, int cbMultiByte, char* lpWideCharStr, int cchWideChar);
}
