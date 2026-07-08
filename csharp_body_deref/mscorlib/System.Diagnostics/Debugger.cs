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
	[Address(RVA = "0x4F94C40", Offset = "0x4F94C40", VA = "0x4F94C40")]
	public static extern bool IsLogging();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002E64")]
	[Address(RVA = "0x4F94C50", Offset = "0x4F94C50", VA = "0x4F94C50")]
	private static extern void Log_icall(int level, ref string category, ref string message);

	[Token(Token = "0x6002E65")]
	[Address(RVA = "0x4F94C60", Offset = "0x4F94C60", VA = "0x4F94C60")]
	public static void Log(int level, string category, string message)
	{
	}

	[Token(Token = "0x6002E66")]
	[Address(RVA = "0x4F94CC0", Offset = "0x4F94CC0", VA = "0x4F94CC0")]
	public static void NotifyOfCrossThreadDependency()
	{
	}
}
