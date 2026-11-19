// ==================== AoTTG2 cross-reference ====================
// Type: System.TermInfoDriver
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.IO;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x20001A1")]
internal class TermInfoDriver : System.IConsoleDriver
{
	[Token(Token = "0x4000687")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private unsafe static int* native_terminal_size;

	[Token(Token = "0x4000688")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static int terminal_size;

	[Token(Token = "0x4000689")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static readonly string[] locations;

	[Token(Token = "0x400068A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private System.TermInfoReader reader;

	[Token(Token = "0x400068B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private int cursorLeft;

	[Token(Token = "0x400068C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
	private int cursorTop;

	[Token(Token = "0x400068D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private string title;

	[Token(Token = "0x400068E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private string titleFormat;

	[Token(Token = "0x400068F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private bool cursorVisible;

	[Token(Token = "0x4000690")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private string csrVisible;

	[Token(Token = "0x4000691")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private string csrInvisible;

	[Token(Token = "0x4000692")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private string clear;

	[Token(Token = "0x4000693")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private string bell;

	[Token(Token = "0x4000694")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private string term;

	[Token(Token = "0x4000695")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private StreamReader stdin;

	[Token(Token = "0x4000696")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private System.IO.CStreamWriter stdout;

	[Token(Token = "0x4000697")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private int windowWidth;

	[Token(Token = "0x4000698")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x74")]
	private int windowHeight;

	[Token(Token = "0x4000699")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private int bufferHeight;

	[Token(Token = "0x400069A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x7C")]
	private int bufferWidth;

	[Token(Token = "0x400069B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private char[] buffer;

	[Token(Token = "0x400069C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private int readpos;

	[Token(Token = "0x400069D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8C")]
	private int writepos;

	[Token(Token = "0x400069E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private string keypadXmit;

	[Token(Token = "0x400069F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private string keypadLocal;

	[Token(Token = "0x40006A0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	private bool inited;

	[Token(Token = "0x40006A1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private object initLock;

	[Token(Token = "0x40006A2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private bool initKeys;

	[Token(Token = "0x40006A3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private string origPair;

	[Token(Token = "0x40006A4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private string origColors;

	[Token(Token = "0x40006A5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private string cursorAddress;

	[Token(Token = "0x40006A6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private ConsoleColor fgcolor;

	[Token(Token = "0x40006A7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private string setfgcolor;

	[Token(Token = "0x40006A8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	private string setbgcolor;

	[Token(Token = "0x40006A9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	private int maxColors;

	[Token(Token = "0x40006AA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xEC")]
	private bool noGetPosition;

	[Token(Token = "0x40006AB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	private Hashtable keymap;

	[Token(Token = "0x40006AC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF8")]
	private System.ByteMatcher rootmap;

	[Token(Token = "0x40006AD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x100")]
	private int rl_startx;

	[Token(Token = "0x40006AE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x104")]
	private int rl_starty;

	[Token(Token = "0x40006AF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x108")]
	private byte[] control_characters;

	[Token(Token = "0x40006B0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private static readonly int[] _consoleColorToAnsiCode;

	[Token(Token = "0x40006B1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x110")]
	private char[] echobuf;

	[Token(Token = "0x40006B2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x118")]
	private int echon;

	[Token(Token = "0x17000175")]
	public bool Initialized
	{
		[Token(Token = "0x6001050")]
		[Address(RVA = "0x5517160", Offset = "0x5516160", VA = "0x5517160", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000176")]
	public int WindowHeight
	{
		[Token(Token = "0x6001059")]
		[Address(RVA = "0x5518050", Offset = "0x5517050", VA = "0x5518050", Slot = "7")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000177")]
	public int WindowWidth
	{
		[Token(Token = "0x600105A")]
		[Address(RVA = "0x5518020", Offset = "0x5517020", VA = "0x5518020", Slot = "8")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600104C")]
	[Address(RVA = "0x5516BC0", Offset = "0x5515BC0", VA = "0x5516BC0")]
	private static string TryTermInfoDir(string dir, string term)
	{
		return null;
	}

	[Token(Token = "0x600104D")]
	[Address(RVA = "0x5516CC0", Offset = "0x5515CC0", VA = "0x5516CC0")]
	private static string SearchTerminfo(string term)
	{
		return null;
	}

	[Token(Token = "0x600104E")]
	[Address(RVA = "0x5516E30", Offset = "0x5515E30", VA = "0x5516E30")]
	private void WriteConsole(string str)
	{
	}

	[Token(Token = "0x600104F")]
	[Address(RVA = "0x550D8C0", Offset = "0x550C8C0", VA = "0x550D8C0")]
	public TermInfoDriver(string term)
	{
	}

	[Token(Token = "0x6001051")]
	[Address(RVA = "0x5517170", Offset = "0x5516170", VA = "0x5517170", Slot = "6")]
	public void Init()
	{
	}

	[Token(Token = "0x6001052")]
	[Address(RVA = "0x5517F80", Offset = "0x5516F80", VA = "0x5517F80")]
	private void IncrementX()
	{
	}

	[Token(Token = "0x6001053")]
	[Address(RVA = "0x5518080", Offset = "0x5517080", VA = "0x5518080")]
	public void WriteSpecialKey(ConsoleKeyInfo key)
	{
	}

	[Token(Token = "0x6001054")]
	[Address(RVA = "0x5518400", Offset = "0x5517400", VA = "0x5518400")]
	public void WriteSpecialKey(char c)
	{
	}

	[Token(Token = "0x6001055")]
	[Address(RVA = "0x5518530", Offset = "0x5517530", VA = "0x5518530")]
	public bool IsSpecialKey(ConsoleKeyInfo key)
	{
		return default(bool);
	}

	[Token(Token = "0x6001056")]
	[Address(RVA = "0x5518590", Offset = "0x5517590", VA = "0x5518590")]
	public bool IsSpecialKey(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x6001057")]
	[Address(RVA = "0x5517CB0", Offset = "0x5516CB0", VA = "0x5517CB0")]
	private void GetCursorPosition()
	{
	}

	[Token(Token = "0x6001058")]
	[Address(RVA = "0x55186E0", Offset = "0x55176E0", VA = "0x55186E0")]
	private void CheckWindowDimensions()
	{
	}

	[Token(Token = "0x600105B")]
	[Address(RVA = "0x5518600", Offset = "0x5517600", VA = "0x5518600")]
	private void AddToBuffer(int b)
	{
	}

	[Token(Token = "0x600105C")]
	[Address(RVA = "0x5518910", Offset = "0x5517910", VA = "0x5518910")]
	private void AdjustBuffer()
	{
	}

	[Token(Token = "0x600105D")]
	[Address(RVA = "0x5518420", Offset = "0x5517420", VA = "0x5518420")]
	private ConsoleKeyInfo CreateKeyInfoFromInt(int n, bool alt)
	{
		return default(ConsoleKeyInfo);
	}

	[Token(Token = "0x600105E")]
	[Address(RVA = "0x5518930", Offset = "0x5517930", VA = "0x5518930")]
	private object GetKeyFromBuffer(bool cooked)
	{
		return null;
	}

	[Token(Token = "0x600105F")]
	[Address(RVA = "0x5519200", Offset = "0x5518200", VA = "0x5519200")]
	private ConsoleKeyInfo ReadKeyInternal(out bool fresh)
	{
		return default(ConsoleKeyInfo);
	}

	[Token(Token = "0x6001060")]
	[Address(RVA = "0x5519790", Offset = "0x5518790", VA = "0x5519790")]
	private bool InputPending()
	{
		return default(bool);
	}

	[Token(Token = "0x6001061")]
	[Address(RVA = "0x55197C0", Offset = "0x55187C0", VA = "0x55197C0")]
	private void QueueEcho(char c)
	{
	}

	[Token(Token = "0x6001062")]
	[Address(RVA = "0x55198E0", Offset = "0x55188E0", VA = "0x55198E0")]
	private void Echo(ConsoleKeyInfo key)
	{
	}

	[Token(Token = "0x6001063")]
	[Address(RVA = "0x5519990", Offset = "0x5518990", VA = "0x5519990")]
	private void EchoFlush()
	{
	}

	[Token(Token = "0x6001064")]
	[Address(RVA = "0x55199D0", Offset = "0x55189D0", VA = "0x55199D0")]
	public int Read([In][Out] char[] dest, int index, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6001065")]
	[Address(RVA = "0x5519DA0", Offset = "0x5518DA0", VA = "0x5519DA0", Slot = "4")]
	public ConsoleKeyInfo ReadKey(bool intercept)
	{
		return default(ConsoleKeyInfo);
	}

	[Token(Token = "0x6001066")]
	[Address(RVA = "0x5519E30", Offset = "0x5518E30", VA = "0x5519E30", Slot = "9")]
	public string ReadLine()
	{
		return null;
	}

	[Token(Token = "0x6001067")]
	[Address(RVA = "0x551A0E0", Offset = "0x55190E0", VA = "0x551A0E0")]
	public string ReadToEnd()
	{
		return null;
	}

	[Token(Token = "0x6001068")]
	[Address(RVA = "0x5519E40", Offset = "0x5518E40", VA = "0x5519E40")]
	private string ReadUntilConditionInternal(bool haltOnNewLine)
	{
		return null;
	}

	[Token(Token = "0x6001069")]
	[Address(RVA = "0x55181C0", Offset = "0x55171C0", VA = "0x55181C0", Slot = "10")]
	public void SetCursorPosition(int left, int top)
	{
	}

	[Token(Token = "0x600106A")]
	[Address(RVA = "0x551A2C0", Offset = "0x55192C0", VA = "0x551A2C0")]
	private void CreateKeyMap()
	{
	}

	[Token(Token = "0x600106B")]
	[Address(RVA = "0x55195E0", Offset = "0x55185E0", VA = "0x55195E0")]
	private void InitKeys()
	{
	}

	[Token(Token = "0x600106C")]
	[Address(RVA = "0x551CC30", Offset = "0x551BC30", VA = "0x551CC30")]
	private void AddStringMapping(System.TermInfoStrings s)
	{
	}
}
