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
		[Address(RVA = "0x45DC510", Offset = "0x45DC510", VA = "0x45DC510", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60002B0")]
	[Address(RVA = "0x45DC4B0", Offset = "0x45DC4B0", VA = "0x45DC4B0")]
	public TimersDescriptionAttribute(string description)
	{
	}
}
