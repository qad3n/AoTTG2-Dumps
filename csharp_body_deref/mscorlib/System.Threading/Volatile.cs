using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Threading;

[Token(Token = "0x2000220")]
public static class Volatile
{
	[Token(Token = "0x2000221")]
	private struct VolatileBoolean
	{
		[Token(Token = "0x4000A4C")]
		[FieldOffset(Offset = "0x0")]
		public bool Value;
	}

	[Token(Token = "0x2000222")]
	private struct VolatileInt32
	{
		[Token(Token = "0x4000A4D")]
		[FieldOffset(Offset = "0x0")]
		public int Value;
	}

	[Token(Token = "0x2000223")]
	private struct VolatileObject
	{
		[Token(Token = "0x4000A4E")]
		[FieldOffset(Offset = "0x0")]
		public object Value;
	}

	[Token(Token = "0x600136B")]
	[Address(RVA = "0x50584B0", Offset = "0x50584B0", VA = "0x50584B0")]
	[System.Runtime.CompilerServices.Intrinsic]
	public static bool Read(ref bool location)
	{
		return default(bool);
	}

	[Token(Token = "0x600136C")]
	[Address(RVA = "0x50584C0", Offset = "0x50584C0", VA = "0x50584C0")]
	[System.Runtime.CompilerServices.Intrinsic]
	public static void Write(ref bool location, bool value)
	{
	}

	[Token(Token = "0x600136D")]
	[Address(RVA = "0x50584E0", Offset = "0x50584E0", VA = "0x50584E0")]
	[System.Runtime.CompilerServices.Intrinsic]
	public static int Read(ref int location)
	{
		return default(int);
	}

	[Token(Token = "0x600136E")]
	[Address(RVA = "0x50584F0", Offset = "0x50584F0", VA = "0x50584F0")]
	[System.Runtime.CompilerServices.Intrinsic]
	public static void Write(ref int location, int value)
	{
	}

	[Token(Token = "0x600136F")]
	[System.Runtime.CompilerServices.Intrinsic]
	public static T Read<T>(ref T location) where T : class
	{
		return null;
	}

	[Token(Token = "0x6001370")]
	[System.Runtime.CompilerServices.Intrinsic]
	public static void Write<T>(ref T location, T value) where T : class
	{
	}
}
