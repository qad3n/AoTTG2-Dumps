// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.NetworkInformation.Win32IPGlobalProperties
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Net.NetworkInformation;

[Token(Token = "0x2000361")]
internal class Win32IPGlobalProperties : IPGlobalProperties
{
	[Token(Token = "0x1700050D")]
	public override string DomainName
	{
		[Token(Token = "0x600175A")]
		[Address(RVA = "0x280EC20", Offset = "0x280D220", VA = "0x18280EC20", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600175B")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public Win32IPGlobalProperties()
	{
	}
}
