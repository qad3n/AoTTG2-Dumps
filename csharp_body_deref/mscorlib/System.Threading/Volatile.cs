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
	[Address(RVA = "0x3D3DFD0", Offset = "0x3D3DFD0", VA = "0x3D3DFD0")]
	[System.Runtime.CompilerServices.Intrinsic]
	public static bool Read(ref bool location)
	{
		return default(bool);
	}

	[Token(Token = "0x600136C")]
	[Address(RVA = "0x3D3DFE0", Offset = "0x3D3DFE0", VA = "0x3D3DFE0")]
	[System.Runtime.CompilerServices.Intrinsic]
	public static void Write(ref bool location, bool value)
	{
	}

	[Token(Token = "0x600136D")]
	[Address(RVA = "0x3D3E000", Offset = "0x3D3E000", VA = "0x3D3E000")]
	[System.Runtime.CompilerServices.Intrinsic]
	public static int Read(ref int location)
	{
		return default(int);
	}

	[Token(Token = "0x600136E")]
	[Address(RVA = "0x3D3E010", Offset = "0x3D3E010", VA = "0x3D3E010")]
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
