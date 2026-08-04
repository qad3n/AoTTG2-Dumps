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

[Token(Token = "0x20000D9")]
public class DefaultTraceListener : TraceListener
{
	[Token(Token = "0x4000404")]
	[FieldOffset(Offset = "0x0")]
	private static readonly bool OnWin32;

	[Token(Token = "0x4000405")]
	[FieldOffset(Offset = "0x8")]
	private static readonly string MonoTracePrefix;

	[Token(Token = "0x4000406")]
	[FieldOffset(Offset = "0x10")]
	private static readonly string MonoTraceFile;

	[Token(Token = "0x4000407")]
	[FieldOffset(Offset = "0x38")]
	private string logFileName;

	[Token(Token = "0x170000EA")]
	[System.MonoTODO]
	public string LogFileName
	{
		[Token(Token = "0x60004EB")]
		[Address(RVA = "0x492BC70", Offset = "0x492BC70", VA = "0x492BC70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60004E8")]
	[Address(RVA = "0x492BA60", Offset = "0x492BA60", VA = "0x492BA60")]
	static DefaultTraceListener()
	{
	}

	[Token(Token = "0x60004E9")]
	[Address(RVA = "0x492BC00", Offset = "0x492BC00", VA = "0x492BC00")]
	private static string GetPrefix(string var, string target)
	{
		return null;
	}

	[Token(Token = "0x60004EA")]
	[Address(RVA = "0x4925540", Offset = "0x4925540", VA = "0x4925540")]
	public DefaultTraceListener()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004EC")]
	[Address(RVA = "0x492BC80", Offset = "0x492BC80", VA = "0x492BC80")]
	private unsafe static extern void WriteWindowsDebugString(char* message);

	[Token(Token = "0x60004ED")]
	[Address(RVA = "0x492BC90", Offset = "0x492BC90", VA = "0x492BC90")]
	private void WriteDebugString(string message)
	{
	}

	[Token(Token = "0x60004EE")]
	[Address(RVA = "0x492BD40", Offset = "0x492BD40", VA = "0x492BD40")]
	private void WriteMonoTrace(string message)
	{
	}

	[Token(Token = "0x60004EF")]
	[Address(RVA = "0x492C220", Offset = "0x492C220", VA = "0x492C220")]
	private void WritePrefix()
	{
	}

	[Token(Token = "0x60004F0")]
	[Address(RVA = "0x492C2C0", Offset = "0x492C2C0", VA = "0x492C2C0")]
	private void WriteImpl(string message)
	{
	}

	[Token(Token = "0x60004F1")]
	[Address(RVA = "0x492BF60", Offset = "0x492BF60", VA = "0x492BF60")]
	private void WriteLogFile(string message, string logFile)
	{
	}

	[Token(Token = "0x60004F2")]
	[Address(RVA = "0x492C430", Offset = "0x492C430", VA = "0x492C430", Slot = "10")]
	public override void Write(string message)
	{
	}

	[Token(Token = "0x60004F3")]
	[Address(RVA = "0x492C440", Offset = "0x492C440", VA = "0x492C440", Slot = "12")]
	public override void WriteLine(string message)
	{
	}
}
