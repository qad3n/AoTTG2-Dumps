// ==================== AoTTG2 cross-reference ====================
// Type: System.Text.RegularExpressions.RegexRunner
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Text.RegularExpressions;

[Token(Token = "0x20000FB")]
public abstract class RegexRunner
{
	[Token(Token = "0x4000429")]
	[FieldOffset(Offset = "0x10")]
	protected internal int runtextbeg;

	[Token(Token = "0x400042A")]
	[FieldOffset(Offset = "0x14")]
	protected internal int runtextend;

	[Token(Token = "0x400042B")]
	[FieldOffset(Offset = "0x18")]
	protected internal int runtextstart;

	[Token(Token = "0x400042C")]
	[FieldOffset(Offset = "0x20")]
	protected internal string runtext;

	[Token(Token = "0x400042D")]
	[FieldOffset(Offset = "0x28")]
	protected internal int runtextpos;

	[Token(Token = "0x400042E")]
	[FieldOffset(Offset = "0x30")]
	protected internal int[] runtrack;

	[Token(Token = "0x400042F")]
	[FieldOffset(Offset = "0x38")]
	protected internal int runtrackpos;

	[Token(Token = "0x4000430")]
	[FieldOffset(Offset = "0x40")]
	protected internal int[] runstack;

	[Token(Token = "0x4000431")]
	[FieldOffset(Offset = "0x48")]
	protected internal int runstackpos;

	[Token(Token = "0x4000432")]
	[FieldOffset(Offset = "0x50")]
	protected internal int[] runcrawl;

	[Token(Token = "0x4000433")]
	[FieldOffset(Offset = "0x58")]
	protected internal int runcrawlpos;

	[Token(Token = "0x4000434")]
	[FieldOffset(Offset = "0x5C")]
	protected internal int runtrackcount;

	[Token(Token = "0x4000435")]
	[FieldOffset(Offset = "0x60")]
	protected internal Match runmatch;

	[Token(Token = "0x4000436")]
	[FieldOffset(Offset = "0x68")]
	protected internal Regex runregex;

	[Token(Token = "0x4000437")]
	[FieldOffset(Offset = "0x70")]
	private int _timeout;

	[Token(Token = "0x4000438")]
	[FieldOffset(Offset = "0x74")]
	private bool _ignoreTimeout;

	[Token(Token = "0x4000439")]
	[FieldOffset(Offset = "0x78")]
	private int _timeoutOccursAt;

	[Token(Token = "0x400043A")]
	private const int TimeoutCheckFrequency = 1000;

	[Token(Token = "0x400043B")]
	[FieldOffset(Offset = "0x7C")]
	private int _timeoutChecksToSkip;

	[Token(Token = "0x6000618")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected internal RegexRunner()
	{
	}

	[Token(Token = "0x6000619")]
	[Address(RVA = "0x2871B90", Offset = "0x2870190", VA = "0x182871B90")]
	protected internal Match Scan(Regex regex, string text, int textbeg, int textend, int textstart, int prevlen, bool quick, TimeSpan timeout)
	{
		return null;
	}

	[Token(Token = "0x600061A")]
	[Address(RVA = "0x2871FB0", Offset = "0x28705B0", VA = "0x182871FB0")]
	private void StartTimeoutWatch()
	{
	}

	[Token(Token = "0x600061B")]
	[Address(RVA = "0x2871030", Offset = "0x286F630", VA = "0x182871030")]
	protected void CheckTimeout()
	{
	}

	[Token(Token = "0x600061C")]
	[Address(RVA = "0x2871220", Offset = "0x286F820", VA = "0x182871220")]
	private void DoCheckTimeout()
	{
	}

	[Token(Token = "0x600061D")]
	protected abstract void Go();

	[Token(Token = "0x600061E")]
	protected abstract bool FindFirstChar();

	[Token(Token = "0x600061F")]
	protected abstract void InitTrackCount();

	[Token(Token = "0x6000620")]
	[Address(RVA = "0x2871660", Offset = "0x286FC60", VA = "0x182871660")]
	private void InitMatch()
	{
	}

	[Token(Token = "0x6000621")]
	[Address(RVA = "0x2871FE0", Offset = "0x28705E0", VA = "0x182871FE0")]
	private Match TidyMatch(bool quick)
	{
		return null;
	}

	[Token(Token = "0x6000622")]
	[Address(RVA = "0x2871510", Offset = "0x286FB10", VA = "0x182871510")]
	protected void EnsureStorage()
	{
	}

	[Token(Token = "0x6000623")]
	[Address(RVA = "0x2871920", Offset = "0x286FF20", VA = "0x182871920")]
	protected bool IsBoundary(int index, int startpos, int endpos)
	{
		return default(bool);
	}

	[Token(Token = "0x6000624")]
	[Address(RVA = "0x28719F0", Offset = "0x286FFF0", VA = "0x1828719F0")]
	protected bool IsECMABoundary(int index, int startpos, int endpos)
	{
		return default(bool);
	}

	[Token(Token = "0x6000625")]
	[Address(RVA = "0x2871460", Offset = "0x286FA60", VA = "0x182871460")]
	protected void DoubleTrack()
	{
	}

	[Token(Token = "0x6000626")]
	[Address(RVA = "0x28713B0", Offset = "0x286F9B0", VA = "0x1828713B0")]
	protected void DoubleStack()
	{
	}

	[Token(Token = "0x6000627")]
	[Address(RVA = "0x2871300", Offset = "0x286F900", VA = "0x182871300")]
	protected void DoubleCrawl()
	{
	}

	[Token(Token = "0x6000628")]
	[Address(RVA = "0x2871110", Offset = "0x286F710", VA = "0x182871110")]
	protected void Crawl(int i)
	{
	}

	[Token(Token = "0x6000629")]
	[Address(RVA = "0x2871B50", Offset = "0x2870150", VA = "0x182871B50")]
	protected int Popcrawl()
	{
		return default(int);
	}

	[Token(Token = "0x600062A")]
	[Address(RVA = "0x2871200", Offset = "0x286F800", VA = "0x182871200")]
	protected int Crawlpos()
	{
		return default(int);
	}

	[Token(Token = "0x600062B")]
	[Address(RVA = "0x2870FC0", Offset = "0x286F5C0", VA = "0x182870FC0")]
	protected void Capture(int capnum, int start, int end)
	{
	}

	[Token(Token = "0x600062C")]
	[Address(RVA = "0x2872050", Offset = "0x2870650", VA = "0x182872050")]
	protected void TransferCapture(int capnum, int uncapnum, int start, int end)
	{
	}

	[Token(Token = "0x600062D")]
	[Address(RVA = "0x2872160", Offset = "0x2870760", VA = "0x182872160")]
	protected void Uncapture()
	{
	}

	[Token(Token = "0x600062E")]
	[Address(RVA = "0x2871AC0", Offset = "0x28700C0", VA = "0x182871AC0")]
	protected bool IsMatched(int cap)
	{
		return default(bool);
	}

	[Token(Token = "0x600062F")]
	[Address(RVA = "0x2871AF0", Offset = "0x28700F0", VA = "0x182871AF0")]
	protected int MatchIndex(int cap)
	{
		return default(int);
	}

	[Token(Token = "0x6000630")]
	[Address(RVA = "0x2871B20", Offset = "0x2870120", VA = "0x182871B20")]
	protected int MatchLength(int cap)
	{
		return default(int);
	}
}
