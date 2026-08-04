// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.NetworkInformation.IPGlobalProperties
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Net.NetworkInformation;

[Token(Token = "0x20001D5")]
public abstract class IPGlobalProperties
{
	[Token(Token = "0x170002B6")]
	public abstract string DomainName
	{
		[Token(Token = "0x6000B96")]
		get;
	}

	[Token(Token = "0x6000B94")]
	[Address(RVA = "0x49A4120", Offset = "0x49A4120", VA = "0x49A4120")]
	public static IPGlobalProperties GetIPGlobalProperties()
	{
		return null;
	}

	[Token(Token = "0x6000B95")]
	[Address(RVA = "0x49A41C0", Offset = "0x49A41C0", VA = "0x49A41C0")]
	internal static IPGlobalProperties InternalGetIPGlobalProperties()
	{
		return null;
	}

	[Token(Token = "0x6000B97")]
	[Address(RVA = "0x49A4210", Offset = "0x49A4210", VA = "0x49A4210")]
	protected IPGlobalProperties()
	{
	}
}
