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

[Token(Token = "0x20005B7")]
[ComVisible(true)]
public sealed class Debugger
{
	[Token(Token = "0x4001826")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static readonly string DefaultCategory;

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002B70")]
	[Address(RVA = "0x1948290", Offset = "0x1946890", VA = "0x181948290")]
	public static extern bool IsLogging();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002B71")]
	[Address(RVA = "0x1A703C0", Offset = "0x1A6E9C0", VA = "0x181A703C0")]
	private static extern void Log_icall(int level, ref string category, ref string message);

	[Token(Token = "0x6002B72")]
	[Address(RVA = "0x1ABF760", Offset = "0x1ABDD60", VA = "0x181ABF760")]
	public static void Log(int level, string category, string message)
	{
	}

	[Token(Token = "0x6002B73")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	public static void NotifyOfCrossThreadDependency()
	{
	}
}
