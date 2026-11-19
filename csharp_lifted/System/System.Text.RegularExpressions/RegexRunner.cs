// ==================== AoTTG2 cross-reference ====================
// Type: System.Text.RegularExpressions.RegexRunner
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Text.RegularExpressions;

[Token(Token = "0x20000BC")]
public abstract class RegexRunner
{
	[Token(Token = "0x400035A")]
	[FieldOffset(Offset = "0x10")]
	protected internal int runtextbeg;

	[Token(Token = "0x400035B")]
	[FieldOffset(Offset = "0x14")]
	protected internal int runtextend;

	[Token(Token = "0x400035C")]
	[FieldOffset(Offset = "0x18")]
	protected internal int runtextstart;

	[Token(Token = "0x400035D")]
	[FieldOffset(Offset = "0x20")]
	protected internal string runtext;

	[Token(Token = "0x400035E")]
	[FieldOffset(Offset = "0x28")]
	protected internal int runtextpos;

	[Token(Token = "0x400035F")]
	[FieldOffset(Offset = "0x30")]
	protected internal int[] runtrack;

	[Token(Token = "0x4000360")]
	[FieldOffset(Offset = "0x38")]
	protected internal int runtrackpos;

	[Token(Token = "0x4000361")]
	[FieldOffset(Offset = "0x40")]
	protected internal int[] runstack;

	[Token(Token = "0x4000362")]
	[FieldOffset(Offset = "0x48")]
	protected internal int runstackpos;

	[Token(Token = "0x4000363")]
	[FieldOffset(Offset = "0x50")]
	protected internal int[] runcrawl;

	[Token(Token = "0x4000364")]
	[FieldOffset(Offset = "0x58")]
	protected internal int runcrawlpos;

	[Token(Token = "0x4000365")]
	[FieldOffset(Offset = "0x5C")]
	protected internal int runtrackcount;

	[Token(Token = "0x4000366")]
	[FieldOffset(Offset = "0x60")]
	protected internal Match runmatch;

	[Token(Token = "0x4000367")]
	[FieldOffset(Offset = "0x68")]
	protected internal Regex runregex;

	[Token(Token = "0x4000368")]
	[FieldOffset(Offset = "0x70")]
	private int _timeout;

	[Token(Token = "0x4000369")]
	[FieldOffset(Offset = "0x74")]
	private bool _ignoreTimeout;

	[Token(Token = "0x400036A")]
	[FieldOffset(Offset = "0x78")]
	private int _timeoutOccursAt;

	[Token(Token = "0x400036B")]
	private const int TimeoutCheckFrequency = 1000;

	[Token(Token = "0x400036C")]
	[FieldOffset(Offset = "0x7C")]
	private int _timeoutChecksToSkip;

	[Token(Token = "0x6000462")]
	[Address(RVA = "0x61F0E60", Offset = "0x61EFE60", VA = "0x61F0E60")]
	protected internal RegexRunner()
	{
	}

	[Token(Token = "0x6000463")]
	[Address(RVA = "0x61FD450", Offset = "0x61FC450", VA = "0x61FD450")]
	protected internal Match Scan(Regex regex, string text, int textbeg, int textend, int textstart, int prevlen, bool quick, TimeSpan timeout)
	{
		return null;
	}

	[Token(Token = "0x6000464")]
	[Address(RVA = "0x61FD810", Offset = "0x61FC810", VA = "0x61FD810")]
	private void StartTimeoutWatch()
	{
	}

	[Token(Token = "0x6000465")]
	[Address(RVA = "0x61F4080", Offset = "0x61F3080", VA = "0x61F4080")]
	protected void CheckTimeout()
	{
	}

	[Token(Token = "0x6000466")]
	[Address(RVA = "0x61FDB00", Offset = "0x61FCB00", VA = "0x61FDB00")]
	private void DoCheckTimeout()
	{
	}

	[Token(Token = "0x6000467")]
	protected abstract void Go();

	[Token(Token = "0x6000468")]
	protected abstract bool FindFirstChar();

	[Token(Token = "0x6000469")]
	protected abstract void InitTrackCount();

	[Token(Token = "0x600046A")]
	[Address(RVA = "0x61FD840", Offset = "0x61FC840", VA = "0x61FD840")]
	private void InitMatch()
	{
	}

	[Token(Token = "0x600046B")]
	[Address(RVA = "0x61FDAA0", Offset = "0x61FCAA0", VA = "0x61FDAA0")]
	private Match TidyMatch(bool quick)
	{
		return null;
	}

	[Token(Token = "0x600046C")]
	[Address(RVA = "0x61F0FD0", Offset = "0x61EFFD0", VA = "0x61F0FD0")]
	protected void EnsureStorage()
	{
	}

	[Token(Token = "0x600046D")]
	[Address(RVA = "0x61F4340", Offset = "0x61F3340", VA = "0x61F4340")]
	protected bool IsBoundary(int index, int startpos, int endpos)
	{
		return default(bool);
	}

	[Token(Token = "0x600046E")]
	[Address(RVA = "0x61F4420", Offset = "0x61F3420", VA = "0x61F4420")]
	protected bool IsECMABoundary(int index, int startpos, int endpos)
	{
		return default(bool);
	}

	[Token(Token = "0x600046F")]
	[Address(RVA = "0x61FDC50", Offset = "0x61FCC50", VA = "0x61FDC50")]
	protected void DoubleTrack()
	{
	}

	[Token(Token = "0x6000470")]
	[Address(RVA = "0x61FDBC0", Offset = "0x61FCBC0", VA = "0x61FDBC0")]
	protected void DoubleStack()
	{
	}

	[Token(Token = "0x6000471")]
	[Address(RVA = "0x61FDCE0", Offset = "0x61FCCE0", VA = "0x61FDCE0")]
	protected void DoubleCrawl()
	{
	}

	[Token(Token = "0x6000472")]
	[Address(RVA = "0x61FDD70", Offset = "0x61FCD70", VA = "0x61FDD70")]
	protected void Crawl(int i)
	{
	}

	[Token(Token = "0x6000473")]
	[Address(RVA = "0x61FDDC0", Offset = "0x61FCDC0", VA = "0x61FDDC0")]
	protected int Popcrawl()
	{
		return default(int);
	}

	[Token(Token = "0x6000474")]
	[Address(RVA = "0x61F4320", Offset = "0x61F3320", VA = "0x61F4320")]
	protected int Crawlpos()
	{
		return default(int);
	}

	[Token(Token = "0x6000475")]
	[Address(RVA = "0x61F4240", Offset = "0x61F3240", VA = "0x61F4240")]
	protected void Capture(int capnum, int start, int end)
	{
	}

	[Token(Token = "0x6000476")]
	[Address(RVA = "0x61F40C0", Offset = "0x61F30C0", VA = "0x61F40C0")]
	protected void TransferCapture(int capnum, int uncapnum, int start, int end)
	{
	}

	[Token(Token = "0x6000477")]
	[Address(RVA = "0x61F42D0", Offset = "0x61F32D0", VA = "0x61F42D0")]
	protected void Uncapture()
	{
	}

	[Token(Token = "0x6000478")]
	[Address(RVA = "0x61F4090", Offset = "0x61F3090", VA = "0x61F4090")]
	protected bool IsMatched(int cap)
	{
		return default(bool);
	}

	[Token(Token = "0x6000479")]
	[Address(RVA = "0x61F4500", Offset = "0x61F3500", VA = "0x61F4500")]
	protected int MatchIndex(int cap)
	{
		return default(int);
	}

	[Token(Token = "0x600047A")]
	[Address(RVA = "0x61F4530", Offset = "0x61F3530", VA = "0x61F4530")]
	protected int MatchLength(int cap)
	{
		return default(int);
	}
}
