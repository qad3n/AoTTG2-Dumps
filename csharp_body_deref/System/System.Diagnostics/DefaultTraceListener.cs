// ==================== AoTTG2 cross-reference ====================
// Type: System.Diagnostics.DefaultTraceListener
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Diagnostics;

[Token(Token = "0x20000DA")]
public class DefaultTraceListener : TraceListener
{
	[Token(Token = "0x4000407")]
	[FieldOffset(Offset = "0x0")]
	private static readonly bool OnWin32;

	[Token(Token = "0x4000408")]
	[FieldOffset(Offset = "0x8")]
	private static readonly string MonoTracePrefix;

	[Token(Token = "0x4000409")]
	[FieldOffset(Offset = "0x10")]
	private static readonly string MonoTraceFile;

	[Token(Token = "0x400040A")]
	[FieldOffset(Offset = "0x38")]
	private string logFileName;

	[Token(Token = "0x170000F4")]
	[System.MonoTODO]
	public string LogFileName
	{
		[Token(Token = "0x6000515")]
		[Address(RVA = "0x6207720", Offset = "0x6206720", VA = "0x6207720")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000512")]
	[Address(RVA = "0x6207510", Offset = "0x6206510", VA = "0x6207510")]
	static DefaultTraceListener()
	{
	}

	[Token(Token = "0x6000513")]
	[Address(RVA = "0x62076B0", Offset = "0x62066B0", VA = "0x62076B0")]
	private static string GetPrefix(string var, string target)
	{
		return null;
	}

	[Token(Token = "0x6000514")]
	[Address(RVA = "0x6201890", Offset = "0x6200890", VA = "0x6201890")]
	public DefaultTraceListener()
	{
	}

	[MethodImpl(MethodImplOptions.InternalCall)]
	[Token(Token = "0x6000516")]
	[Address(RVA = "0x6207730", Offset = "0x6206730", VA = "0x6207730")]
	private unsafe static extern void WriteWindowsDebugString(char* message);

	[Token(Token = "0x6000517")]
	[Address(RVA = "0x6207740", Offset = "0x6206740", VA = "0x6207740")]
	private void WriteDebugString(string message)
	{
	}

	[Token(Token = "0x6000518")]
	[Address(RVA = "0x6207820", Offset = "0x6206820", VA = "0x6207820")]
	private void WriteMonoTrace(string message)
	{
	}

	[Token(Token = "0x6000519")]
	[Address(RVA = "0x6207C70", Offset = "0x6206C70", VA = "0x6207C70")]
	private void WritePrefix()
	{
	}

	[Token(Token = "0x600051A")]
	[Address(RVA = "0x6207D10", Offset = "0x6206D10", VA = "0x6207D10")]
	private void WriteImpl(string message)
	{
	}

	[Token(Token = "0x600051B")]
	[Address(RVA = "0x6207A30", Offset = "0x6206A30", VA = "0x6207A30")]
	private void WriteLogFile(string message, string logFile)
	{
	}

	[Token(Token = "0x600051C")]
	[Address(RVA = "0x6207E80", Offset = "0x6206E80", VA = "0x6207E80", Slot = "10")]
	public override void Write(string message)
	{
	}

	[Token(Token = "0x600051D")]
	[Address(RVA = "0x6207E90", Offset = "0x6206E90", VA = "0x6207E90", Slot = "12")]
	public override void WriteLine(string message)
	{
	}
}
