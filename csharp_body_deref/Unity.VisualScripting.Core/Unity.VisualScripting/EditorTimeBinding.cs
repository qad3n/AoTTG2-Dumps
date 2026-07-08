using System;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x200003A")]
public static class EditorTimeBinding
{
	[Token(Token = "0x4000049")]
	[FieldOffset(Offset = "0x0")]
	public static Func<int> frameBinding;

	[Token(Token = "0x400004A")]
	[FieldOffset(Offset = "0x8")]
	public static Func<float> timeBinding;

	[Token(Token = "0x1700005C")]
	public static int frame
	{
		[Token(Token = "0x60001D1")]
		[Address(RVA = "0x497E8A0", Offset = "0x497E8A0", VA = "0x497E8A0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700005D")]
	public static float time
	{
		[Token(Token = "0x60001D2")]
		[Address(RVA = "0x497E9A0", Offset = "0x497E9A0", VA = "0x497E9A0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x60001D3")]
	[Address(RVA = "0x497EAA0", Offset = "0x497EAA0", VA = "0x497EAA0")]
	static EditorTimeBinding()
	{
	}
}
