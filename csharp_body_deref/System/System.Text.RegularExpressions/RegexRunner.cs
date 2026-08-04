// ==================== AoTTG2 cross-reference ====================
// Type: System.Text.RegularExpressions.RegexRunner
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Text.RegularExpressions;

[Token(Token = "0x20000BB")]
public abstract class RegexRunner
{
	[Token(Token = "0x4000357")]
	[FieldOffset(Offset = "0x10")]
	protected internal int runtextbeg;

	[Token(Token = "0x4000358")]
	[FieldOffset(Offset = "0x14")]
	protected internal int runtextend;

	[Token(Token = "0x4000359")]
	[FieldOffset(Offset = "0x18")]
	protected internal int runtextstart;

	[Token(Token = "0x400035A")]
	[FieldOffset(Offset = "0x20")]
	protected internal string runtext;

	[Token(Token = "0x400035B")]
	[FieldOffset(Offset = "0x28")]
	protected internal int runtextpos;

	[Token(Token = "0x400035C")]
	[FieldOffset(Offset = "0x30")]
	protected internal int[] runtrack;

	[Token(Token = "0x400035D")]
	[FieldOffset(Offset = "0x38")]
	protected internal int runtrackpos;

	[Token(Token = "0x400035E")]
	[FieldOffset(Offset = "0x40")]
	protected internal int[] runstack;

	[Token(Token = "0x400035F")]
	[FieldOffset(Offset = "0x48")]
	protected internal int runstackpos;

	[Token(Token = "0x4000360")]
	[FieldOffset(Offset = "0x50")]
	protected internal int[] runcrawl;

	[Token(Token = "0x4000361")]
	[FieldOffset(Offset = "0x58")]
	protected internal int runcrawlpos;

	[Token(Token = "0x4000362")]
	[FieldOffset(Offset = "0x5C")]
	protected internal int runtrackcount;

	[Token(Token = "0x4000363")]
	[FieldOffset(Offset = "0x60")]
	protected internal Match runmatch;

	[Token(Token = "0x4000364")]
	[FieldOffset(Offset = "0x68")]
	protected internal Regex runregex;

	[Token(Token = "0x4000365")]
	[FieldOffset(Offset = "0x70")]
	private int _timeout;

	[Token(Token = "0x4000366")]
	[FieldOffset(Offset = "0x74")]
	private bool _ignoreTimeout;

	[Token(Token = "0x4000367")]
	[FieldOffset(Offset = "0x78")]
	private int _timeoutOccursAt;

	[Token(Token = "0x4000368")]
	private const int TimeoutCheckFrequency = 1000;

	[Token(Token = "0x4000369")]
	[FieldOffset(Offset = "0x7C")]
	private int _timeoutChecksToSkip;

	[Token(Token = "0x6000439")]
	[Address(RVA = "0x4913960", Offset = "0x4913960", VA = "0x4913960")]
	protected internal RegexRunner()
	{
	}

	[Token(Token = "0x600043A")]
	[Address(RVA = "0x4920650", Offset = "0x4920650", VA = "0x4920650")]
	protected internal Match Scan(Regex regex, string text, int textbeg, int textend, int textstart, int prevlen, bool quick, TimeSpan timeout)
	{
		return null;
	}

	[Token(Token = "0x600043B")]
	[Address(RVA = "0x4920A10", Offset = "0x4920A10", VA = "0x4920A10")]
	private void StartTimeoutWatch()
	{
	}

	[Token(Token = "0x600043C")]
	[Address(RVA = "0x4917000", Offset = "0x4917000", VA = "0x4917000")]
	protected void CheckTimeout()
	{
	}

	[Token(Token = "0x600043D")]
	[Address(RVA = "0x4920D10", Offset = "0x4920D10", VA = "0x4920D10")]
	private void DoCheckTimeout()
	{
	}

	[Token(Token = "0x600043E")]
	protected abstract void Go();

	[Token(Token = "0x600043F")]
	protected abstract bool FindFirstChar();

	[Token(Token = "0x6000440")]
	protected abstract void InitTrackCount();

	[Token(Token = "0x6000441")]
	[Address(RVA = "0x4920A40", Offset = "0x4920A40", VA = "0x4920A40")]
	private void InitMatch()
	{
	}

	[Token(Token = "0x6000442")]
	[Address(RVA = "0x4920CB0", Offset = "0x4920CB0", VA = "0x4920CB0")]
	private Match TidyMatch(bool quick)
	{
		return null;
	}

	[Token(Token = "0x6000443")]
	[Address(RVA = "0x4913AD0", Offset = "0x4913AD0", VA = "0x4913AD0")]
	protected void EnsureStorage()
	{
	}

	[Token(Token = "0x6000444")]
	[Address(RVA = "0x49172C0", Offset = "0x49172C0", VA = "0x49172C0")]
	protected bool IsBoundary(int index, int startpos, int endpos)
	{
		return default(bool);
	}

	[Token(Token = "0x6000445")]
	[Address(RVA = "0x49173A0", Offset = "0x49173A0", VA = "0x49173A0")]
	protected bool IsECMABoundary(int index, int startpos, int endpos)
	{
		return default(bool);
	}

	[Token(Token = "0x6000446")]
	[Address(RVA = "0x4920E60", Offset = "0x4920E60", VA = "0x4920E60")]
	protected void DoubleTrack()
	{
	}

	[Token(Token = "0x6000447")]
	[Address(RVA = "0x4920DD0", Offset = "0x4920DD0", VA = "0x4920DD0")]
	protected void DoubleStack()
	{
	}

	[Token(Token = "0x6000448")]
	[Address(RVA = "0x4920EF0", Offset = "0x4920EF0", VA = "0x4920EF0")]
	protected void DoubleCrawl()
	{
	}

	[Token(Token = "0x6000449")]
	[Address(RVA = "0x4920F80", Offset = "0x4920F80", VA = "0x4920F80")]
	protected void Crawl(int i)
	{
	}

	[Token(Token = "0x600044A")]
	[Address(RVA = "0x4920FD0", Offset = "0x4920FD0", VA = "0x4920FD0")]
	protected int Popcrawl()
	{
		return default(int);
	}

	[Token(Token = "0x600044B")]
	[Address(RVA = "0x49172A0", Offset = "0x49172A0", VA = "0x49172A0")]
	protected int Crawlpos()
	{
		return default(int);
	}

	[Token(Token = "0x600044C")]
	[Address(RVA = "0x49171C0", Offset = "0x49171C0", VA = "0x49171C0")]
	protected void Capture(int capnum, int start, int end)
	{
	}

	[Token(Token = "0x600044D")]
	[Address(RVA = "0x4917040", Offset = "0x4917040", VA = "0x4917040")]
	protected void TransferCapture(int capnum, int uncapnum, int start, int end)
	{
	}

	[Token(Token = "0x600044E")]
	[Address(RVA = "0x4917250", Offset = "0x4917250", VA = "0x4917250")]
	protected void Uncapture()
	{
	}

	[Token(Token = "0x600044F")]
	[Address(RVA = "0x4917010", Offset = "0x4917010", VA = "0x4917010")]
	protected bool IsMatched(int cap)
	{
		return default(bool);
	}

	[Token(Token = "0x6000450")]
	[Address(RVA = "0x4917480", Offset = "0x4917480", VA = "0x4917480")]
	protected int MatchIndex(int cap)
	{
		return default(int);
	}

	[Token(Token = "0x6000451")]
	[Address(RVA = "0x49174B0", Offset = "0x49174B0", VA = "0x49174B0")]
	protected int MatchLength(int cap)
	{
		return default(int);
	}
}
