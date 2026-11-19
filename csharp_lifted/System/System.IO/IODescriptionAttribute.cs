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

[Token(Token = "0x2000249")]
[AttributeUsage(AttributeTargets.All)]
public class IODescriptionAttribute : DescriptionAttribute
{
	[Token(Token = "0x1700037B")]
	public override string Description
	{
		[Token(Token = "0x6001018")]
		[Address(RVA = "0x628B070", Offset = "0x628A070", VA = "0x628B070", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001017")]
	[Address(RVA = "0x628B010", Offset = "0x628A010", VA = "0x628B010")]
	public IODescriptionAttribute(string description)
	{
	}
}
