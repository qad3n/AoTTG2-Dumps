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

[Token(Token = "0x20001C9")]
internal class TermInfoDriver : System.IConsoleDriver
{
	[Token(Token = "0x4000729")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private unsafe static int* native_terminal_size;

	[Token(Token = "0x400072A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static int terminal_size;

	[Token(Token = "0x400072B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static readonly string[] locations;

	[Token(Token = "0x400072C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private System.TermInfoReader reader;

	[Token(Token = "0x400072D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private int cursorLeft;

	[Token(Token = "0x400072E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
	private int cursorTop;

	[Token(Token = "0x400072F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private string title;

	[Token(Token = "0x4000730")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private string titleFormat;

	[Token(Token = "0x4000731")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private bool cursorVisible;

	[Token(Token = "0x4000732")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private string csrVisible;

	[Token(Token = "0x4000733")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private string csrInvisible;

	[Token(Token = "0x4000734")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private string clear;

	[Token(Token = "0x4000735")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private string bell;

	[Token(Token = "0x4000736")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private string term;

	[Token(Token = "0x4000737")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private StreamReader stdin;

	[Token(Token = "0x4000738")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private System.IO.CStreamWriter stdout;

	[Token(Token = "0x4000739")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private int windowWidth;

	[Token(Token = "0x400073A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x74")]
	private int windowHeight;

	[Token(Token = "0x400073B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private int bufferHeight;

	[Token(Token = "0x400073C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x7C")]
	private int bufferWidth;

	[Token(Token = "0x400073D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private char[] buffer;

	[Token(Token = "0x400073E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private int readpos;

	[Token(Token = "0x400073F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8C")]
	private int writepos;

	[Token(Token = "0x4000740")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private string keypadXmit;

	[Token(Token = "0x4000741")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private string keypadLocal;

	[Token(Token = "0x4000742")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	private bool inited;

	[Token(Token = "0x4000743")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private object initLock;

	[Token(Token = "0x4000744")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private bool initKeys;

	[Token(Token = "0x4000745")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private string origPair;

	[Token(Token = "0x4000746")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private string origColors;

	[Token(Token = "0x4000747")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private string cursorAddress;

	[Token(Token = "0x4000748")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private ConsoleColor fgcolor;

	[Token(Token = "0x4000749")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private string setfgcolor;

	[Token(Token = "0x400074A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	private string setbgcolor;

	[Token(Token = "0x400074B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	private int maxColors;

	[Token(Token = "0x400074C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xEC")]
	private bool noGetPosition;

	[Token(Token = "0x400074D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	private Hashtable keymap;

	[Token(Token = "0x400074E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF8")]
	private System.ByteMatcher rootmap;

	[Token(Token = "0x400074F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x100")]
	private int rl_startx;

	[Token(Token = "0x4000750")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x104")]
	private int rl_starty;

	[Token(Token = "0x4000751")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x108")]
	private byte[] control_characters;

	[Token(Token = "0x4000752")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private static readonly int[] _consoleColorToAnsiCode;

	[Token(Token = "0x4000753")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x110")]
	private char[] echobuf;

	[Token(Token = "0x4000754")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x118")]
	private int echon;

	[Token(Token = "0x17000176")]
	public bool Initialized
	{
		[Token(Token = "0x6001079")]
		[Address(RVA = "0x1B90350", Offset = "0x1B8E950", VA = "0x181B90350", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000177")]
	public int WindowHeight
	{
		[Token(Token = "0x6001082")]
		[Address(RVA = "0x1B90360", Offset = "0x1B8E960", VA = "0x181B90360", Slot = "7")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000178")]
	public int WindowWidth
	{
		[Token(Token = "0x6001083")]
		[Address(RVA = "0x1B90390", Offset = "0x1B8E990", VA = "0x181B90390", Slot = "8")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6001075")]
	[Address(RVA = "0x1B8F830", Offset = "0x1B8DE30", VA = "0x181B8F830")]
	private static string TryTermInfoDir(string dir, string term)
	{
		return null;
	}

	[Token(Token = "0x6001076")]
	[Address(RVA = "0x1B8F310", Offset = "0x1B8D910", VA = "0x181B8F310")]
	private static string SearchTerminfo(string term)
	{
		return null;
	}

	[Token(Token = "0x6001077")]
	[Address(RVA = "0x1B8F950", Offset = "0x1B8DF50", VA = "0x181B8F950")]
	private void WriteConsole(string str)
	{
	}

	[Token(Token = "0x6001078")]
	[Address(RVA = "0x1B8FD60", Offset = "0x1B8E360", VA = "0x181B8FD60")]
	public TermInfoDriver(string term)
	{
	}

	[Token(Token = "0x600107A")]
	[Address(RVA = "0x1B8DCD0", Offset = "0x1B8C2D0", VA = "0x181B8DCD0", Slot = "6")]
	public void Init()
	{
	}

	[Token(Token = "0x600107B")]
	[Address(RVA = "0x1B8D8C0", Offset = "0x1B8BEC0", VA = "0x181B8D8C0")]
	private void IncrementX()
	{
	}

	[Token(Token = "0x600107C")]
	[Address(RVA = "0x1B8F9D0", Offset = "0x1B8DFD0", VA = "0x181B8F9D0")]
	public void WriteSpecialKey(ConsoleKeyInfo key)
	{
	}

	[Token(Token = "0x600107D")]
	[Address(RVA = "0x1B8F980", Offset = "0x1B8DF80", VA = "0x181B8F980")]
	public void WriteSpecialKey(char c)
	{
	}

	[Token(Token = "0x600107E")]
	[Address(RVA = "0x1B8E880", Offset = "0x1B8CE80", VA = "0x181B8E880")]
	public bool IsSpecialKey(ConsoleKeyInfo key)
	{
		return default(bool);
	}

	[Token(Token = "0x600107F")]
	[Address(RVA = "0x1B8E830", Offset = "0x1B8CE30", VA = "0x181B8E830")]
	public bool IsSpecialKey(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x6001080")]
	[Address(RVA = "0x1B8D1F0", Offset = "0x1B8B7F0", VA = "0x181B8D1F0")]
	private void GetCursorPosition()
	{
	}

	[Token(Token = "0x6001081")]
	[Address(RVA = "0x1B8A5E0", Offset = "0x1B88BE0", VA = "0x181B8A5E0")]
	private void CheckWindowDimensions()
	{
	}

	[Token(Token = "0x6001084")]
	[Address(RVA = "0x1B8A4B0", Offset = "0x1B88AB0", VA = "0x181B8A4B0")]
	private void AddToBuffer(int b)
	{
	}

	[Token(Token = "0x6001085")]
	[Address(RVA = "0x1B8A5C0", Offset = "0x1B88BC0", VA = "0x181B8A5C0")]
	private void AdjustBuffer()
	{
	}

	[Token(Token = "0x6001086")]
	[Address(RVA = "0x1B8A740", Offset = "0x1B88D40", VA = "0x181B8A740")]
	private ConsoleKeyInfo CreateKeyInfoFromInt(int n, bool alt)
	{
		return default(ConsoleKeyInfo);
	}

	[Token(Token = "0x6001087")]
	[Address(RVA = "0x1B8D4D0", Offset = "0x1B8BAD0", VA = "0x181B8D4D0")]
	private object GetKeyFromBuffer(bool cooked)
	{
		return null;
	}

	[Token(Token = "0x6001088")]
	[Address(RVA = "0x1B8EAA0", Offset = "0x1B8D0A0", VA = "0x181B8EAA0")]
	private ConsoleKeyInfo ReadKeyInternal(out bool fresh)
	{
		return default(ConsoleKeyInfo);
	}

	[Token(Token = "0x6001089")]
	[Address(RVA = "0x1B8E7F0", Offset = "0x1B8CDF0", VA = "0x181B8E7F0")]
	private bool InputPending()
	{
		return default(bool);
	}

	[Token(Token = "0x600108A")]
	[Address(RVA = "0x1B8E9A0", Offset = "0x1B8CFA0", VA = "0x181B8E9A0")]
	private void QueueEcho(char c)
	{
	}

	[Token(Token = "0x600108B")]
	[Address(RVA = "0x1B8D050", Offset = "0x1B8B650", VA = "0x181B8D050")]
	private void Echo(ConsoleKeyInfo key)
	{
	}

	[Token(Token = "0x600108C")]
	[Address(RVA = "0x1B8D000", Offset = "0x1B8B600", VA = "0x181B8D000")]
	private void EchoFlush()
	{
	}

	[Token(Token = "0x600108D")]
	[Address(RVA = "0x1B8EFE0", Offset = "0x1B8D5E0", VA = "0x181B8EFE0")]
	public int Read([In][Out] char[] dest, int index, int count)
	{
		return default(int);
	}

	[Token(Token = "0x600108E")]
	[Address(RVA = "0x1B8ECB0", Offset = "0x1B8D2B0", VA = "0x181B8ECB0", Slot = "4")]
	public ConsoleKeyInfo ReadKey(bool intercept)
	{
		return default(ConsoleKeyInfo);
	}

	[Token(Token = "0x600108F")]
	[Address(RVA = "0x1B8ED70", Offset = "0x1B8D370", VA = "0x181B8ED70", Slot = "9")]
	public string ReadLine()
	{
		return null;
	}

	[Token(Token = "0x6001090")]
	[Address(RVA = "0x1B8ED80", Offset = "0x1B8D380", VA = "0x181B8ED80")]
	public string ReadToEnd()
	{
		return null;
	}

	[Token(Token = "0x6001091")]
	[Address(RVA = "0x1B8ED90", Offset = "0x1B8D390", VA = "0x181B8ED90")]
	private string ReadUntilConditionInternal(bool haltOnNewLine)
	{
		return null;
	}

	[Token(Token = "0x6001092")]
	[Address(RVA = "0x1B8F480", Offset = "0x1B8DA80", VA = "0x181B8F480", Slot = "10")]
	public void SetCursorPosition(int left, int top)
	{
	}

	[Token(Token = "0x6001093")]
	[Address(RVA = "0x1B8A890", Offset = "0x1B88E90", VA = "0x181B8A890")]
	private void CreateKeyMap()
	{
	}

	[Token(Token = "0x6001094")]
	[Address(RVA = "0x1B8D950", Offset = "0x1B8BF50", VA = "0x181B8D950")]
	private void InitKeys()
	{
	}

	[Token(Token = "0x6001095")]
	[Address(RVA = "0x1B8A330", Offset = "0x1B88930", VA = "0x181B8A330")]
	private void AddStringMapping(System.TermInfoStrings s)
	{
	}
}
