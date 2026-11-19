// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.Volatile
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Threading;

[Token(Token = "0x2000229")]
public static class Volatile
{
	[Token(Token = "0x200022A")]
	private struct VolatileBoolean
	{
		[Token(Token = "0x4000A07")]
		[FieldOffset(Offset = "0x0")]
		public bool Value;
	}

	[Token(Token = "0x200022B")]
	private struct VolatileInt32
	{
		[Token(Token = "0x4000A08")]
		[FieldOffset(Offset = "0x0")]
		public int Value;
	}

	[Token(Token = "0x200022C")]
	private struct VolatileObject
	{
		[Token(Token = "0x4000A09")]
		[FieldOffset(Offset = "0x0")]
		public object Value;
	}

	[Token(Token = "0x60013B3")]
	[Address(RVA = "0x5540890", Offset = "0x553F890", VA = "0x5540890")]
	[System.Runtime.CompilerServices.Intrinsic]
	public static bool Read(ref bool location)
	{
		return default(bool);
	}

	[Token(Token = "0x60013B4")]
	[Address(RVA = "0x55408A0", Offset = "0x553F8A0", VA = "0x55408A0")]
	[System.Runtime.CompilerServices.Intrinsic]
	public static void Write(ref bool location, bool value)
	{
	}

	[Token(Token = "0x60013B5")]
	[Address(RVA = "0x55408C0", Offset = "0x553F8C0", VA = "0x55408C0")]
	[System.Runtime.CompilerServices.Intrinsic]
	public static int Read(ref int location)
	{
		return default(int);
	}

	[Token(Token = "0x60013B6")]
	[Address(RVA = "0x55408D0", Offset = "0x553F8D0", VA = "0x55408D0")]
	[System.Runtime.CompilerServices.Intrinsic]
	public static void Write(ref int location, int value)
	{
	}

	[Token(Token = "0x60013B7")]
	[System.Runtime.CompilerServices.Intrinsic]
	public static T Read<T>(ref T location) where T : class
	{
		return null;
	}

	[Token(Token = "0x60013B8")]
	[System.Runtime.CompilerServices.Intrinsic]
	public static void Write<T>(ref T location, T value) where T : class
	{
	}
}
