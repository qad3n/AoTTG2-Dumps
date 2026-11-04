// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.IODescriptionAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.ComponentModel;
using Il2CppDummyDll;

namespace System.IO;

[Token(Token = "0x2000288")]
[AttributeUsage(AttributeTargets.All)]
public class IODescriptionAttribute : DescriptionAttribute
{
	[Token(Token = "0x170003AA")]
	public override string Description
	{
		[Token(Token = "0x60011D8")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60011D7")]
	[Address(RVA = "0x28FFAF0", Offset = "0x28FE0F0", VA = "0x1828FFAF0")]
	public IODescriptionAttribute(string description)
	{
	}
}
