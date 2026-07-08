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
	[Address(RVA = "0x45EE860", Offset = "0x45EE860", VA = "0x45EE860")]
	protected internal RegexRunner()
	{
	}

	[Token(Token = "0x600043A")]
	[Address(RVA = "0x45FB550", Offset = "0x45FB550", VA = "0x45FB550")]
	protected internal Match Scan(Regex regex, string text, int textbeg, int textend, int textstart, int prevlen, bool quick, TimeSpan timeout)
	{
		return null;
	}

	[Token(Token = "0x600043B")]
	[Address(RVA = "0x45FB910", Offset = "0x45FB910", VA = "0x45FB910")]
	private void StartTimeoutWatch()
	{
	}

	[Token(Token = "0x600043C")]
	[Address(RVA = "0x45F1F00", Offset = "0x45F1F00", VA = "0x45F1F00")]
	protected void CheckTimeout()
	{
	}

	[Token(Token = "0x600043D")]
	[Address(RVA = "0x45FBC10", Offset = "0x45FBC10", VA = "0x45FBC10")]
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
	[Address(RVA = "0x45FB940", Offset = "0x45FB940", VA = "0x45FB940")]
	private void InitMatch()
	{
	}

	[Token(Token = "0x6000442")]
	[Address(RVA = "0x45FBBB0", Offset = "0x45FBBB0", VA = "0x45FBBB0")]
	private Match TidyMatch(bool quick)
	{
		return null;
	}

	[Token(Token = "0x6000443")]
	[Address(RVA = "0x45EE9D0", Offset = "0x45EE9D0", VA = "0x45EE9D0")]
	protected void EnsureStorage()
	{
	}

	[Token(Token = "0x6000444")]
	[Address(RVA = "0x45F21C0", Offset = "0x45F21C0", VA = "0x45F21C0")]
	protected bool IsBoundary(int index, int startpos, int endpos)
	{
		return default(bool);
	}

	[Token(Token = "0x6000445")]
	[Address(RVA = "0x45F22A0", Offset = "0x45F22A0", VA = "0x45F22A0")]
	protected bool IsECMABoundary(int index, int startpos, int endpos)
	{
		return default(bool);
	}

	[Token(Token = "0x6000446")]
	[Address(RVA = "0x45FBD60", Offset = "0x45FBD60", VA = "0x45FBD60")]
	protected void DoubleTrack()
	{
	}

	[Token(Token = "0x6000447")]
	[Address(RVA = "0x45FBCD0", Offset = "0x45FBCD0", VA = "0x45FBCD0")]
	protected void DoubleStack()
	{
	}

	[Token(Token = "0x6000448")]
	[Address(RVA = "0x45FBDF0", Offset = "0x45FBDF0", VA = "0x45FBDF0")]
	protected void DoubleCrawl()
	{
	}

	[Token(Token = "0x6000449")]
	[Address(RVA = "0x45FBE80", Offset = "0x45FBE80", VA = "0x45FBE80")]
	protected void Crawl(int i)
	{
	}

	[Token(Token = "0x600044A")]
	[Address(RVA = "0x45FBED0", Offset = "0x45FBED0", VA = "0x45FBED0")]
	protected int Popcrawl()
	{
		return default(int);
	}

	[Token(Token = "0x600044B")]
	[Address(RVA = "0x45F21A0", Offset = "0x45F21A0", VA = "0x45F21A0")]
	protected int Crawlpos()
	{
		return default(int);
	}

	[Token(Token = "0x600044C")]
	[Address(RVA = "0x45F20C0", Offset = "0x45F20C0", VA = "0x45F20C0")]
	protected void Capture(int capnum, int start, int end)
	{
	}

	[Token(Token = "0x600044D")]
	[Address(RVA = "0x45F1F40", Offset = "0x45F1F40", VA = "0x45F1F40")]
	protected void TransferCapture(int capnum, int uncapnum, int start, int end)
	{
	}

	[Token(Token = "0x600044E")]
	[Address(RVA = "0x45F2150", Offset = "0x45F2150", VA = "0x45F2150")]
	protected void Uncapture()
	{
	}

	[Token(Token = "0x600044F")]
	[Address(RVA = "0x45F1F10", Offset = "0x45F1F10", VA = "0x45F1F10")]
	protected bool IsMatched(int cap)
	{
		return default(bool);
	}

	[Token(Token = "0x6000450")]
	[Address(RVA = "0x45F2380", Offset = "0x45F2380", VA = "0x45F2380")]
	protected int MatchIndex(int cap)
	{
		return default(int);
	}

	[Token(Token = "0x6000451")]
	[Address(RVA = "0x45F23B0", Offset = "0x45F23B0", VA = "0x45F23B0")]
	protected int MatchLength(int cap)
	{
		return default(int);
	}
}
