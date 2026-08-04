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

[Token(Token = "0x20005E5")]
[ComVisible(true)]
public sealed class Debugger
{
	[Token(Token = "0x4001A0A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static readonly string DefaultCategory;

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002E63")]
	[Address(RVA = "0x3C7A760", Offset = "0x3C7A760", VA = "0x3C7A760")]
	public static extern bool IsLogging();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002E64")]
	[Address(RVA = "0x3C7A770", Offset = "0x3C7A770", VA = "0x3C7A770")]
	private static extern void Log_icall(int level, ref string category, ref string message);

	[Token(Token = "0x6002E65")]
	[Address(RVA = "0x3C7A780", Offset = "0x3C7A780", VA = "0x3C7A780")]
	public static void Log(int level, string category, string message)
	{
	}

	[Token(Token = "0x6002E66")]
	[Address(RVA = "0x3C7A7E0", Offset = "0x3C7A7E0", VA = "0x3C7A7E0")]
	public static void NotifyOfCrossThreadDependency()
	{
	}
}
