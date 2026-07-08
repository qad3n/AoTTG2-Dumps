using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x2000173")]
public struct RangeInt
{
	[Token(Token = "0x4000595")]
	[FieldOffset(Offset = "0x0")]
	public int start;

	[Token(Token = "0x4000596")]
	[FieldOffset(Offset = "0x4")]
	public int length;

	[Token(Token = "0x170001D6")]
	public int end
	{
		[Token(Token = "0x6000AC4")]
		[Address(RVA = "0x4AD6D10", Offset = "0x4AD6D10", VA = "0x4AD6D10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000AC5")]
	[Address(RVA = "0x4AD6D20", Offset = "0x4AD6D20", VA = "0x4AD6D20")]
	public RangeInt(int start, int length)
	{
	}
}
