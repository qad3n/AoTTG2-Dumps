// ==================== AoTTG2 cross-reference ====================
// Type: System.Timers.TimersDescriptionAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.ComponentModel;
using Il2CppDummyDll;

namespace System.Timers;

[Token(Token = "0x20000DA")]
[AttributeUsage(AttributeTargets.All)]
public class TimersDescriptionAttribute : DescriptionAttribute
{
	[Token(Token = "0x400033A")]
	[FieldOffset(Offset = "0x18")]
	private bool replaced;

	[Token(Token = "0x170000BA")]
	public override string Description
	{
		[Token(Token = "0x6000465")]
		[Address(RVA = "0x2860820", Offset = "0x285EE20", VA = "0x182860820", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000464")]
	[Address(RVA = "0x28607C0", Offset = "0x285EDC0", VA = "0x1828607C0")]
	public TimersDescriptionAttribute(string description)
	{
	}
}
