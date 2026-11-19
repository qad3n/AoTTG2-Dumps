// ==================== AoTTG2 cross-reference ====================
// Type: System.Diagnostics.Debugger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Diagnostics;

[Token(Token = "0x2000592")]
[ComVisible(true)]
public sealed class Debugger
{
	[Token(Token = "0x400178D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static readonly string DefaultCategory;

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002B4F")]
	[Address(RVA = "0x544D7E0", Offset = "0x544C7E0", VA = "0x544D7E0")]
	public static extern bool IsLogging();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002B50")]
	[Address(RVA = "0x544D7F0", Offset = "0x544C7F0", VA = "0x544D7F0")]
	private static extern void Log_icall(int level, ref string category, ref string message);

	[Token(Token = "0x6002B51")]
	[Address(RVA = "0x544D800", Offset = "0x544C800", VA = "0x544D800")]
	public static void Log(int level, string category, string message)
	{
	}

	[Token(Token = "0x6002B52")]
	[Address(RVA = "0x544D860", Offset = "0x544C860", VA = "0x544D860")]
	public static void NotifyOfCrossThreadDependency()
	{
	}
}
