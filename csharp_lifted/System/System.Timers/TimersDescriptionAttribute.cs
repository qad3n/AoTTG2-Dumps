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
	[Token(Token = "0x400026B")]
	[FieldOffset(Offset = "0x18")]
	private bool replaced;

	[Token(Token = "0x1700008B")]
	public override string Description
	{
		[Token(Token = "0x60002B1")]
		[Address(RVA = "0x61DDDA0", Offset = "0x61DCDA0", VA = "0x61DDDA0", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60002B0")]
	[Address(RVA = "0x61DDD40", Offset = "0x61DCD40", VA = "0x61DDD40")]
	public TimersDescriptionAttribute(string description)
	{
	}
}
