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
		[Address(RVA = "0x4606B70", Offset = "0x4606B70", VA = "0x4606B70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60004E8")]
	[Address(RVA = "0x4606960", Offset = "0x4606960", VA = "0x4606960")]
	static DefaultTraceListener()
	{
	}

	[Token(Token = "0x60004E9")]
	[Address(RVA = "0x4606B00", Offset = "0x4606B00", VA = "0x4606B00")]
	private static string GetPrefix(string var, string target)
	{
		return null;
	}

	[Token(Token = "0x60004EA")]
	[Address(RVA = "0x4600440", Offset = "0x4600440", VA = "0x4600440")]
	public DefaultTraceListener()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004EC")]
	[Address(RVA = "0x4606B80", Offset = "0x4606B80", VA = "0x4606B80")]
	private unsafe static extern void WriteWindowsDebugString(char* message);

	[Token(Token = "0x60004ED")]
	[Address(RVA = "0x4606B90", Offset = "0x4606B90", VA = "0x4606B90")]
	private void WriteDebugString(string message)
	{
	}

	[Token(Token = "0x60004EE")]
	[Address(RVA = "0x4606C40", Offset = "0x4606C40", VA = "0x4606C40")]
	private void WriteMonoTrace(string message)
	{
	}

	[Token(Token = "0x60004EF")]
	[Address(RVA = "0x4607120", Offset = "0x4607120", VA = "0x4607120")]
	private void WritePrefix()
	{
	}

	[Token(Token = "0x60004F0")]
	[Address(RVA = "0x46071C0", Offset = "0x46071C0", VA = "0x46071C0")]
	private void WriteImpl(string message)
	{
	}

	[Token(Token = "0x60004F1")]
	[Address(RVA = "0x4606E60", Offset = "0x4606E60", VA = "0x4606E60")]
	private void WriteLogFile(string message, string logFile)
	{
	}

	[Token(Token = "0x60004F2")]
	[Address(RVA = "0x4607330", Offset = "0x4607330", VA = "0x4607330", Slot = "10")]
	public override void Write(string message)
	{
	}

	[Token(Token = "0x60004F3")]
	[Address(RVA = "0x4607340", Offset = "0x4607340", VA = "0x4607340", Slot = "12")]
	public override void WriteLine(string message)
	{
	}
}
