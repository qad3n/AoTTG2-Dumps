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

[Token(Token = "0x2000251")]
public static class Volatile
{
	[Token(Token = "0x2000252")]
	private struct VolatileBoolean
	{
		[Token(Token = "0x4000AA9")]
		[FieldOffset(Offset = "0x0")]
		public bool Value;
	}

	[Token(Token = "0x2000253")]
	private struct VolatileInt32
	{
		[Token(Token = "0x4000AAA")]
		[FieldOffset(Offset = "0x0")]
		public int Value;
	}

	[Token(Token = "0x2000254")]
	private struct VolatileObject
	{
		[Token(Token = "0x4000AAB")]
		[FieldOffset(Offset = "0x0")]
		public object Value;
	}

	[Token(Token = "0x60013DC")]
	[Address(RVA = "0x1BC55C0", Offset = "0x1BC3BC0", VA = "0x181BC55C0")]
	[System.Runtime.CompilerServices.Intrinsic]
	public static bool Read(ref bool location)
	{
		return default(bool);
	}

	[Token(Token = "0x60013DD")]
	[Address(RVA = "0x1BC5610", Offset = "0x1BC3C10", VA = "0x181BC5610")]
	[System.Runtime.CompilerServices.Intrinsic]
	public static void Write(ref bool location, bool value)
	{
	}

	[Token(Token = "0x60013DE")]
	[Address(RVA = "0x1BC55A0", Offset = "0x1BC3BA0", VA = "0x181BC55A0")]
	[System.Runtime.CompilerServices.Intrinsic]
	public static int Read(ref int location)
	{
		return default(int);
	}

	[Token(Token = "0x60013DF")]
	[Address(RVA = "0x1BC55E0", Offset = "0x1BC3BE0", VA = "0x181BC55E0")]
	[System.Runtime.CompilerServices.Intrinsic]
	public static void Write(ref int location, int value)
	{
	}

	[Token(Token = "0x60013E0")]
	[System.Runtime.CompilerServices.Intrinsic]
	public static T Read<T>(ref T location) where T : class
	{
		return null;
	}

	[Token(Token = "0x60013E1")]
	[System.Runtime.CompilerServices.Intrinsic]
	public static void Write<T>(ref T location, T value) where T : class
	{
	}
}
