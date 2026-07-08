using Il2CppDummyDll;

namespace System.Timers;

[Token(Token = "0x200009C")]
public class ElapsedEventArgs : EventArgs
{
	[Token(Token = "0x400026B")]
	[FieldOffset(Offset = "0x10")]
	private DateTime time;

	[Token(Token = "0x60002B2")]
	[Address(RVA = "0x45DC450", Offset = "0x45DC450", VA = "0x45DC450")]
	internal ElapsedEventArgs(DateTime time)
	{
	}
}
