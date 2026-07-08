using System.Collections;
using System.IO;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x200019E")]
internal class TermInfoDriver : System.IConsoleDriver
{
	[Token(Token = "0x40006C5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private unsafe static int* native_terminal_size;

	[Token(Token = "0x40006C6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static int terminal_size;

	[Token(Token = "0x40006C7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static readonly string[] locations;

	[Token(Token = "0x40006C8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private System.TermInfoReader reader;

	[Token(Token = "0x40006C9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private int cursorLeft;

	[Token(Token = "0x40006CA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
	private int cursorTop;

	[Token(Token = "0x40006CB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private string title;

	[Token(Token = "0x40006CC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private string titleFormat;

	[Token(Token = "0x40006CD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private bool cursorVisible;

	[Token(Token = "0x40006CE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private string csrVisible;

	[Token(Token = "0x40006CF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private string csrInvisible;

	[Token(Token = "0x40006D0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private string clear;

	[Token(Token = "0x40006D1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private string bell;

	[Token(Token = "0x40006D2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private string term;

	[Token(Token = "0x40006D3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private StreamReader stdin;

	[Token(Token = "0x40006D4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private System.IO.CStreamWriter stdout;

	[Token(Token = "0x40006D5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private int windowWidth;

	[Token(Token = "0x40006D6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x74")]
	private int windowHeight;

	[Token(Token = "0x40006D7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private int bufferHeight;

	[Token(Token = "0x40006D8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x7C")]
	private int bufferWidth;

	[Token(Token = "0x40006D9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private char[] buffer;

	[Token(Token = "0x40006DA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private int readpos;

	[Token(Token = "0x40006DB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8C")]
	private int writepos;

	[Token(Token = "0x40006DC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private string keypadXmit;

	[Token(Token = "0x40006DD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private string keypadLocal;

	[Token(Token = "0x40006DE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	private bool inited;

	[Token(Token = "0x40006DF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private object initLock;

	[Token(Token = "0x40006E0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private bool initKeys;

	[Token(Token = "0x40006E1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private string origPair;

	[Token(Token = "0x40006E2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private string origColors;

	[Token(Token = "0x40006E3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private string cursorAddress;

	[Token(Token = "0x40006E4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private ConsoleColor fgcolor;

	[Token(Token = "0x40006E5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private string setfgcolor;

	[Token(Token = "0x40006E6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	private string setbgcolor;

	[Token(Token = "0x40006E7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	private int maxColors;

	[Token(Token = "0x40006E8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xEC")]
	private bool noGetPosition;

	[Token(Token = "0x40006E9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	private Hashtable keymap;

	[Token(Token = "0x40006EA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF8")]
	private System.ByteMatcher rootmap;

	[Token(Token = "0x40006EB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x100")]
	private int rl_startx;

	[Token(Token = "0x40006EC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x104")]
	private int rl_starty;

	[Token(Token = "0x40006ED")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x108")]
	private byte[] control_characters;

	[Token(Token = "0x40006EE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private static readonly int[] _consoleColorToAnsiCode;

	[Token(Token = "0x40006EF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x110")]
	private char[] echobuf;

	[Token(Token = "0x40006F0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x118")]
	private int echon;

	[Token(Token = "0x17000174")]
	public bool Initialized
	{
		[Token(Token = "0x6001022")]
		[Address(RVA = "0x502DE50", Offset = "0x502DE50", VA = "0x502DE50", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000175")]
	public int WindowHeight
	{
		[Token(Token = "0x600102B")]
		[Address(RVA = "0x502F2E0", Offset = "0x502F2E0", VA = "0x502F2E0", Slot = "7")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000176")]
	public int WindowWidth
	{
		[Token(Token = "0x600102C")]
		[Address(RVA = "0x502F2B0", Offset = "0x502F2B0", VA = "0x502F2B0", Slot = "8")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600101E")]
	[Address(RVA = "0x502D7F0", Offset = "0x502D7F0", VA = "0x502D7F0")]
	private static string TryTermInfoDir(string dir, string term)
	{
		return null;
	}

	[Token(Token = "0x600101F")]
	[Address(RVA = "0x502D8F0", Offset = "0x502D8F0", VA = "0x502D8F0")]
	private static string SearchTerminfo(string term)
	{
		return null;
	}

	[Token(Token = "0x6001020")]
	[Address(RVA = "0x502DA70", Offset = "0x502DA70", VA = "0x502DA70")]
	private void WriteConsole(string str)
	{
	}

	[Token(Token = "0x6001021")]
	[Address(RVA = "0x50243E0", Offset = "0x50243E0", VA = "0x50243E0")]
	public TermInfoDriver(string term)
	{
	}

	[Token(Token = "0x6001023")]
	[Address(RVA = "0x502DE60", Offset = "0x502DE60", VA = "0x502DE60", Slot = "6")]
	public void Init()
	{
	}

	[Token(Token = "0x6001024")]
	[Address(RVA = "0x502F220", Offset = "0x502F220", VA = "0x502F220")]
	private void IncrementX()
	{
	}

	[Token(Token = "0x6001025")]
	[Address(RVA = "0x502F310", Offset = "0x502F310", VA = "0x502F310")]
	public void WriteSpecialKey(ConsoleKeyInfo key)
	{
	}

	[Token(Token = "0x6001026")]
	[Address(RVA = "0x502F690", Offset = "0x502F690", VA = "0x502F690")]
	public void WriteSpecialKey(char c)
	{
	}

	[Token(Token = "0x6001027")]
	[Address(RVA = "0x502F7B0", Offset = "0x502F7B0", VA = "0x502F7B0")]
	public bool IsSpecialKey(ConsoleKeyInfo key)
	{
		return default(bool);
	}

	[Token(Token = "0x6001028")]
	[Address(RVA = "0x502F810", Offset = "0x502F810", VA = "0x502F810")]
	public bool IsSpecialKey(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x6001029")]
	[Address(RVA = "0x502EF40", Offset = "0x502EF40", VA = "0x502EF40")]
	private void GetCursorPosition()
	{
	}

	[Token(Token = "0x600102A")]
	[Address(RVA = "0x502F960", Offset = "0x502F960", VA = "0x502F960")]
	private void CheckWindowDimensions()
	{
	}

	[Token(Token = "0x600102D")]
	[Address(RVA = "0x502F880", Offset = "0x502F880", VA = "0x502F880")]
	private void AddToBuffer(int b)
	{
	}

	[Token(Token = "0x600102E")]
	[Address(RVA = "0x502FBB0", Offset = "0x502FBB0", VA = "0x502FBB0")]
	private void AdjustBuffer()
	{
	}

	[Token(Token = "0x600102F")]
	[Address(RVA = "0x502F6B0", Offset = "0x502F6B0", VA = "0x502F6B0")]
	private ConsoleKeyInfo CreateKeyInfoFromInt(int n, bool alt)
	{
		return default(ConsoleKeyInfo);
	}

	[Token(Token = "0x6001030")]
	[Address(RVA = "0x502FBD0", Offset = "0x502FBD0", VA = "0x502FBD0")]
	private object GetKeyFromBuffer(bool cooked)
	{
		return null;
	}

	[Token(Token = "0x6001031")]
	[Address(RVA = "0x50304E0", Offset = "0x50304E0", VA = "0x50304E0")]
	private ConsoleKeyInfo ReadKeyInternal(out bool fresh)
	{
		return default(ConsoleKeyInfo);
	}

	[Token(Token = "0x6001032")]
	[Address(RVA = "0x50308A0", Offset = "0x50308A0", VA = "0x50308A0")]
	private bool InputPending()
	{
		return default(bool);
	}

	[Token(Token = "0x6001033")]
	[Address(RVA = "0x50308D0", Offset = "0x50308D0", VA = "0x50308D0")]
	private void QueueEcho(char c)
	{
	}

	[Token(Token = "0x6001034")]
	[Address(RVA = "0x50309F0", Offset = "0x50309F0", VA = "0x50309F0")]
	private void Echo(ConsoleKeyInfo key)
	{
	}

	[Token(Token = "0x6001035")]
	[Address(RVA = "0x5030AA0", Offset = "0x5030AA0", VA = "0x5030AA0")]
	private void EchoFlush()
	{
	}

	[Token(Token = "0x6001036")]
	[Address(RVA = "0x5030AE0", Offset = "0x5030AE0", VA = "0x5030AE0")]
	public int Read([In][Out] char[] dest, int index, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6001037")]
	[Address(RVA = "0x5030EE0", Offset = "0x5030EE0", VA = "0x5030EE0", Slot = "4")]
	public ConsoleKeyInfo ReadKey(bool intercept)
	{
		return default(ConsoleKeyInfo);
	}

	[Token(Token = "0x6001038")]
	[Address(RVA = "0x5030F70", Offset = "0x5030F70", VA = "0x5030F70", Slot = "9")]
	public string ReadLine()
	{
		return null;
	}

	[Token(Token = "0x6001039")]
	[Address(RVA = "0x5031200", Offset = "0x5031200", VA = "0x5031200")]
	public string ReadToEnd()
	{
		return null;
	}

	[Token(Token = "0x600103A")]
	[Address(RVA = "0x5030F80", Offset = "0x5030F80", VA = "0x5030F80")]
	private string ReadUntilConditionInternal(bool haltOnNewLine)
	{
		return null;
	}

	[Token(Token = "0x600103B")]
	[Address(RVA = "0x502F450", Offset = "0x502F450", VA = "0x502F450", Slot = "10")]
	public void SetCursorPosition(int left, int top)
	{
	}

	[Token(Token = "0x600103C")]
	[Address(RVA = "0x5031400", Offset = "0x5031400", VA = "0x5031400")]
	private void CreateKeyMap()
	{
	}

	[Token(Token = "0x600103D")]
	[Address(RVA = "0x50306E0", Offset = "0x50306E0", VA = "0x50306E0")]
	private void InitKeys()
	{
	}

	[Token(Token = "0x600103E")]
	[Address(RVA = "0x5033D80", Offset = "0x5033D80", VA = "0x5033D80")]
	private void AddStringMapping(System.TermInfoStrings s)
	{
	}
}
