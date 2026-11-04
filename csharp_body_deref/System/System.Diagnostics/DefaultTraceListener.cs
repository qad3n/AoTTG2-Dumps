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

[Token(Token = "0x2000119")]
public class DefaultTraceListener : TraceListener
{
	[Token(Token = "0x40004D6")]
	[FieldOffset(Offset = "0x0")]
	private static readonly bool OnWin32;

	[Token(Token = "0x40004D7")]
	[FieldOffset(Offset = "0x8")]
	private static readonly string MonoTracePrefix;

	[Token(Token = "0x40004D8")]
	[FieldOffset(Offset = "0x10")]
	private static readonly string MonoTraceFile;

	[Token(Token = "0x40004D9")]
	[FieldOffset(Offset = "0x38")]
	private string logFileName;

	[Token(Token = "0x17000123")]
	[System.MonoTODO]
	public string LogFileName
	{
		[Token(Token = "0x60006CB")]
		[Address(RVA = "0xC8EEC0", Offset = "0xC8D4C0", VA = "0x180C8EEC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60006C8")]
	[Address(RVA = "0x2861EF0", Offset = "0x28604F0", VA = "0x182861EF0")]
	static DefaultTraceListener()
	{
	}

	[Token(Token = "0x60006C9")]
	[Address(RVA = "0x28617D0", Offset = "0x285FDD0", VA = "0x1828617D0")]
	private static string GetPrefix(string var, string target)
	{
		return null;
	}

	[Token(Token = "0x60006CA")]
	[Address(RVA = "0x28620D0", Offset = "0x28606D0", VA = "0x1828620D0")]
	public DefaultTraceListener()
	{
	}

	[MethodImpl(MethodImplOptions.InternalCall)]
	[Token(Token = "0x60006CC")]
	[Address(RVA = "0x2861ED0", Offset = "0x28604D0", VA = "0x182861ED0")]
	private unsafe static extern void WriteWindowsDebugString(char* message);

	[Token(Token = "0x60006CD")]
	[Address(RVA = "0x2861840", Offset = "0x285FE40", VA = "0x182861840")]
	private void WriteDebugString(string message)
	{
	}

	[Token(Token = "0x60006CE")]
	[Address(RVA = "0x2861C60", Offset = "0x2860260", VA = "0x182861C60")]
	private void WriteMonoTrace(string message)
	{
	}

	[Token(Token = "0x60006CF")]
	[Address(RVA = "0x2861E40", Offset = "0x2860440", VA = "0x182861E40")]
	private void WritePrefix()
	{
	}

	[Token(Token = "0x60006D0")]
	[Address(RVA = "0x28618F0", Offset = "0x285FEF0", VA = "0x1828618F0")]
	private void WriteImpl(string message)
	{
	}

	[Token(Token = "0x60006D1")]
	[Address(RVA = "0x2861B00", Offset = "0x2860100", VA = "0x182861B00")]
	private void WriteLogFile(string message, string logFile)
	{
	}

	[Token(Token = "0x60006D2")]
	[Address(RVA = "0x2861EE0", Offset = "0x28604E0", VA = "0x182861EE0", Slot = "10")]
	public override void Write(string message)
	{
	}

	[Token(Token = "0x60006D3")]
	[Address(RVA = "0x2861AB0", Offset = "0x28600B0", VA = "0x182861AB0", Slot = "12")]
	public override void WriteLine(string message)
	{
	}
}
