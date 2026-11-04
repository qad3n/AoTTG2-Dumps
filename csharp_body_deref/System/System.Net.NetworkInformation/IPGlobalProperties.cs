// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.NetworkInformation.IPGlobalProperties
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Net.NetworkInformation;

[Token(Token = "0x200035D")]
public abstract class IPGlobalProperties
{
	[Token(Token = "0x1700050C")]
	public abstract string DomainName
	{
		[Token(Token = "0x6001757")]
		get;
	}

	[Token(Token = "0x6001755")]
	[Address(RVA = "0x27F3BB0", Offset = "0x27F21B0", VA = "0x1827F3BB0")]
	public static IPGlobalProperties GetIPGlobalProperties()
	{
		return null;
	}

	[Token(Token = "0x6001756")]
	[Address(RVA = "0x27F3BB0", Offset = "0x27F21B0", VA = "0x1827F3BB0")]
	internal static IPGlobalProperties InternalGetIPGlobalProperties()
	{
		return null;
	}

	[Token(Token = "0x6001758")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected IPGlobalProperties()
	{
	}
}
