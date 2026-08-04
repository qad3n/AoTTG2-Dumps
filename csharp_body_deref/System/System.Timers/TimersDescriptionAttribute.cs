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

[Token(Token = "0x200009B")]
[AttributeUsage(AttributeTargets.All)]
public class TimersDescriptionAttribute : DescriptionAttribute
{
	[Token(Token = "0x400026A")]
	[FieldOffset(Offset = "0x18")]
	private bool replaced;

	[Token(Token = "0x1700008B")]
	public override string Description
	{
		[Token(Token = "0x60002B1")]
		[Address(RVA = "0x4901610", Offset = "0x4901610", VA = "0x4901610", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60002B0")]
	[Address(RVA = "0x49015B0", Offset = "0x49015B0", VA = "0x49015B0")]
	public TimersDescriptionAttribute(string description)
	{
	}
}
