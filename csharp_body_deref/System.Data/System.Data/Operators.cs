using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x2000065")]
internal sealed class Operators
{
	[Token(Token = "0x4000232")]
	[FieldOffset(Offset = "0x0")]
	private static readonly int[] s_priority;

	[Token(Token = "0x4000233")]
	[FieldOffset(Offset = "0x8")]
	private static readonly string[] s_looks;

	[Token(Token = "0x600067E")]
	[Address(RVA = "0x42769C0", Offset = "0x42769C0", VA = "0x42769C0")]
	internal static bool IsArithmetical(int op)
	{
		return default(bool);
	}

	[Token(Token = "0x600067F")]
	[Address(RVA = "0x42769E0", Offset = "0x42769E0", VA = "0x42769E0")]
	internal static bool IsLogical(int op)
	{
		return default(bool);
	}

	[Token(Token = "0x6000680")]
	[Address(RVA = "0x4276A10", Offset = "0x4276A10", VA = "0x4276A10")]
	internal static bool IsRelational(int op)
	{
		return default(bool);
	}

	[Token(Token = "0x6000681")]
	[Address(RVA = "0x4276A20", Offset = "0x4276A20", VA = "0x4276A20")]
	internal static int Priority(int op)
	{
		return default(int);
	}

	[Token(Token = "0x6000682")]
	[Address(RVA = "0x4276AE0", Offset = "0x4276AE0", VA = "0x4276AE0")]
	internal static string ToString(int op)
	{
		return null;
	}
}
