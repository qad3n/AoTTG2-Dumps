// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.NetworkInformation.IPGlobalProperties
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Net.NetworkInformation;

[Token(Token = "0x200031E")]
public abstract class IPGlobalProperties
{
	[Token(Token = "0x170004DD")]
	public abstract string DomainName
	{
		[Token(Token = "0x6001599")]
		get;
	}

	[Token(Token = "0x6001597")]
	[Address(RVA = "0x61A44C0", Offset = "0x61A34C0", VA = "0x61A44C0")]
	public static IPGlobalProperties GetIPGlobalProperties()
	{
		return null;
	}

	[Token(Token = "0x6001598")]
	[Address(RVA = "0x61A4560", Offset = "0x61A3560", VA = "0x61A4560")]
	internal static IPGlobalProperties InternalGetIPGlobalProperties()
	{
		return null;
	}

	[Token(Token = "0x600159A")]
	[Address(RVA = "0x61A45B0", Offset = "0x61A35B0", VA = "0x61A45B0")]
	protected IPGlobalProperties()
	{
	}
}
