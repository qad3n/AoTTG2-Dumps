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

[Token(Token = "0x2000367")]
[AttributeUsage(AttributeTargets.All)]
public class IODescriptionAttribute : DescriptionAttribute
{
	[Token(Token = "0x1700050A")]
	public override string Description
	{
		[Token(Token = "0x60016D5")]
		[Address(RVA = "0x48EED40", Offset = "0x48EED40", VA = "0x48EED40", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60016D4")]
	[Address(RVA = "0x48EECE0", Offset = "0x48EECE0", VA = "0x48EECE0")]
	public IODescriptionAttribute(string description)
	{
	}
}
