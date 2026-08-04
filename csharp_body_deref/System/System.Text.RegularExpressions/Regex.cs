// ==================== AoTTG2 cross-reference ====================
// Type: System.Text.RegularExpressions.Regex
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Text.RegularExpressions;

[Token(Token = "0x20000A8")]
public class Regex : ISerializable
{
	[Token(Token = "0x20000A9")]
	internal readonly struct CachedCodeEntryKey : IEquatable<CachedCodeEntryKey>
	{
		[Token(Token = "0x40002AB")]
		[FieldOffset(Offset = "0x0")]
		private readonly RegexOptions _options;

		[Token(Token = "0x40002AC")]
		[FieldOffset(Offset = "0x8")]
		private readonly string _cultureKey;

		[Token(Token = "0x40002AD")]
		[FieldOffset(Offset = "0x10")]
		private readonly string _pattern;

		[Token(Token = "0x600034F")]
		[Address(RVA = "0x49077C0", Offset = "0x49077C0", VA = "0x49077C0")]
		public CachedCodeEntryKey(RegexOptions options, string cultureKey, string pattern)
		{
		}

		[Token(Token = "0x6000350")]
		[Address(RVA = "0x4907930", Offset = "0x4907930", VA = "0x4907930", Slot = "0")]
		public override bool Equals(object obj)
		{
			return default(bool);
		}

		[Token(Token = "0x6000351")]
		[Address(RVA = "0x49079C0", Offset = "0x49079C0", VA = "0x49079C0", Slot = "4")]
		public bool Equals(CachedCodeEntryKey other)
		{
			return default(bool);
		}

		[Token(Token = "0x6000352")]
		[Address(RVA = "0x4904EB0", Offset = "0x4904EB0", VA = "0x4904EB0")]
		public static bool operator ==(CachedCodeEntryKey left, CachedCodeEntryKey right)
		{
			return default(bool);
		}

		[Token(Token = "0x6000353")]
		[Address(RVA = "0x4907A20", Offset = "0x4907A20", VA = "0x4907A20", Slot = "2")]
		public override int GetHashCode()
		{
			return default(int);
		}
	}

	[Token(Token = "0x20000AA")]
	internal sealed class CachedCodeEntry
	{
		[Token(Token = "0x40002AE")]
		[FieldOffset(Offset = "0x10")]
		public CachedCodeEntry Next;

		[Token(Token = "0x40002AF")]
		[FieldOffset(Offset = "0x18")]
		public CachedCodeEntry Previous;

		[Token(Token = "0x40002B0")]
		[FieldOffset(Offset = "0x20")]
		public readonly CachedCodeEntryKey Key;

		[Token(Token = "0x40002B1")]
		[FieldOffset(Offset = "0x38")]
		public RegexCode Code;

		[Token(Token = "0x40002B2")]
		[FieldOffset(Offset = "0x40")]
		public readonly Hashtable Caps;

		[Token(Token = "0x40002B3")]
		[FieldOffset(Offset = "0x48")]
		public readonly Hashtable Capnames;

		[Token(Token = "0x40002B4")]
		[FieldOffset(Offset = "0x50")]
		public readonly string[] Capslist;

		[Token(Token = "0x40002B5")]
		[FieldOffset(Offset = "0x58")]
		public readonly int Capsize;

		[Token(Token = "0x40002B6")]
		[FieldOffset(Offset = "0x60")]
		public readonly ExclusiveReference Runnerref;

		[Token(Token = "0x40002B7")]
		[FieldOffset(Offset = "0x68")]
		public readonly WeakReference<RegexReplacement> ReplRef;

		[Token(Token = "0x6000354")]
		[Address(RVA = "0x4905880", Offset = "0x4905880", VA = "0x4905880")]
		public CachedCodeEntry(CachedCodeEntryKey key, Hashtable capnames, string[] capslist, RegexCode code, Hashtable caps, int capsize, ExclusiveReference runner, WeakReference<RegexReplacement> replref)
		{
		}
	}

	[Token(Token = "0x4000294")]
	private const int CacheDictionarySwitchLimit = 10;

	[Token(Token = "0x4000295")]
	[FieldOffset(Offset = "0x0")]
	private static int s_cacheSize;

	[Token(Token = "0x4000296")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Dictionary<CachedCodeEntryKey, CachedCodeEntry> s_cache;

	[Token(Token = "0x4000297")]
	[FieldOffset(Offset = "0x10")]
	private static int s_cacheCount;

	[Token(Token = "0x4000298")]
	[FieldOffset(Offset = "0x18")]
	private static CachedCodeEntry s_cacheFirst;

	[Token(Token = "0x4000299")]
	[FieldOffset(Offset = "0x20")]
	private static CachedCodeEntry s_cacheLast;

	[Token(Token = "0x400029A")]
	[FieldOffset(Offset = "0x28")]
	private static readonly TimeSpan s_maximumMatchTimeout;

	[Token(Token = "0x400029B")]
	private const string DefaultMatchTimeout_ConfigKeyName = "REGEX_DEFAULT_MATCH_TIMEOUT";

	[Token(Token = "0x400029C")]
	[FieldOffset(Offset = "0x30")]
	internal static readonly TimeSpan s_defaultMatchTimeout;

	[Token(Token = "0x400029D")]
	[FieldOffset(Offset = "0x38")]
	public static readonly TimeSpan InfiniteMatchTimeout;

	[Token(Token = "0x400029E")]
	[FieldOffset(Offset = "0x10")]
	protected internal TimeSpan internalMatchTimeout;

	[Token(Token = "0x400029F")]
	internal const int MaxOptionShift = 10;

	[Token(Token = "0x40002A0")]
	[FieldOffset(Offset = "0x18")]
	protected internal string pattern;

	[Token(Token = "0x40002A1")]
	[FieldOffset(Offset = "0x20")]
	protected internal RegexOptions roptions;

	[Token(Token = "0x40002A2")]
	[FieldOffset(Offset = "0x28")]
	protected internal RegexRunnerFactory factory;

	[Token(Token = "0x40002A3")]
	[FieldOffset(Offset = "0x30")]
	protected internal Hashtable caps;

	[Token(Token = "0x40002A4")]
	[FieldOffset(Offset = "0x38")]
	protected internal Hashtable capnames;

	[Token(Token = "0x40002A5")]
	[FieldOffset(Offset = "0x40")]
	protected internal string[] capslist;

	[Token(Token = "0x40002A6")]
	[FieldOffset(Offset = "0x48")]
	protected internal int capsize;

	[Token(Token = "0x40002A7")]
	[FieldOffset(Offset = "0x50")]
	internal ExclusiveReference _runnerref;

	[Token(Token = "0x40002A8")]
	[FieldOffset(Offset = "0x58")]
	internal WeakReference<RegexReplacement> _replref;

	[Token(Token = "0x40002A9")]
	[FieldOffset(Offset = "0x60")]
	internal RegexCode _code;

	[Token(Token = "0x40002AA")]
	[FieldOffset(Offset = "0x68")]
	internal bool _refsInitialized;

	[Token(Token = "0x170000A9")]
	public RegexOptions Options
	{
		[Token(Token = "0x6000346")]
		[Address(RVA = "0x4907900", Offset = "0x4907900", VA = "0x4907900")]
		get
		{
			return default(RegexOptions);
		}
	}

	[Token(Token = "0x170000AA")]
	public bool RightToLeft
	{
		[Token(Token = "0x6000347")]
		[Address(RVA = "0x49071D0", Offset = "0x49071D0", VA = "0x49071D0")]
		get
		{
			return default(bool);
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000324")]
	[Address(RVA = "0x4904D60", Offset = "0x4904D60", VA = "0x4904D60")]
	private CachedCodeEntry GetCachedCode(CachedCodeEntryKey key, bool isToAdd)
	{
		return null;
	}

	[Token(Token = "0x6000325")]
	[Address(RVA = "0x4904F10", Offset = "0x4904F10", VA = "0x4904F10")]
	private CachedCodeEntry GetCachedCodeEntryInternal(CachedCodeEntryKey key, bool isToAdd)
	{
		return null;
	}

	[Token(Token = "0x6000326")]
	[Address(RVA = "0x4905950", Offset = "0x4905950", VA = "0x4905950")]
	private void FillCacheDictionary()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000327")]
	[Address(RVA = "0x4905A90", Offset = "0x4905A90", VA = "0x4905A90")]
	private static bool TryGetCacheValue(CachedCodeEntryKey key, out CachedCodeEntry entry)
	{
		return default(bool);
	}

	[Token(Token = "0x6000328")]
	[Address(RVA = "0x4905BE0", Offset = "0x4905BE0", VA = "0x4905BE0")]
	private static bool TryGetCacheValueSmall(CachedCodeEntryKey key, out CachedCodeEntry entry)
	{
		return default(bool);
	}

	[Token(Token = "0x6000329")]
	[Address(RVA = "0x4905600", Offset = "0x4905600", VA = "0x4905600")]
	private static CachedCodeEntry LookupCachedAndPromote(CachedCodeEntryKey key)
	{
		return null;
	}

	[Token(Token = "0x600032A")]
	[Address(RVA = "0x4905D10", Offset = "0x4905D10", VA = "0x4905D10")]
	public static bool IsMatch(string input, string pattern)
	{
		return default(bool);
	}

	[Token(Token = "0x600032B")]
	[Address(RVA = "0x4905E00", Offset = "0x4905E00", VA = "0x4905E00")]
	public static bool IsMatch(string input, string pattern, RegexOptions options, TimeSpan matchTimeout)
	{
		return default(bool);
	}

	[Token(Token = "0x600032C")]
	[Address(RVA = "0x49061C0", Offset = "0x49061C0", VA = "0x49061C0")]
	public bool IsMatch(string input)
	{
		return default(bool);
	}

	[Token(Token = "0x600032D")]
	[Address(RVA = "0x4906230", Offset = "0x4906230", VA = "0x4906230")]
	public bool IsMatch(string input, int startat)
	{
		return default(bool);
	}

	[Token(Token = "0x600032E")]
	[Address(RVA = "0x49062B0", Offset = "0x49062B0", VA = "0x49062B0")]
	public static Match Match(string input, string pattern)
	{
		return null;
	}

	[Token(Token = "0x600032F")]
	[Address(RVA = "0x49063A0", Offset = "0x49063A0", VA = "0x49063A0")]
	public static Match Match(string input, string pattern, RegexOptions options, TimeSpan matchTimeout)
	{
		return null;
	}

	[Token(Token = "0x6000330")]
	[Address(RVA = "0x4906420", Offset = "0x4906420", VA = "0x4906420")]
	public Match Match(string input)
	{
		return null;
	}

	[Token(Token = "0x6000331")]
	[Address(RVA = "0x4906480", Offset = "0x4906480", VA = "0x4906480")]
	public Match Match(string input, int startat)
	{
		return null;
	}

	[Token(Token = "0x6000332")]
	[Address(RVA = "0x49064F0", Offset = "0x49064F0", VA = "0x49064F0")]
	public static MatchCollection Matches(string input, string pattern)
	{
		return null;
	}

	[Token(Token = "0x6000333")]
	[Address(RVA = "0x49065E0", Offset = "0x49065E0", VA = "0x49065E0")]
	public static MatchCollection Matches(string input, string pattern, RegexOptions options, TimeSpan matchTimeout)
	{
		return null;
	}

	[Token(Token = "0x6000334")]
	[Address(RVA = "0x4906660", Offset = "0x4906660", VA = "0x4906660")]
	public MatchCollection Matches(string input)
	{
		return null;
	}

	[Token(Token = "0x6000335")]
	[Address(RVA = "0x49066C0", Offset = "0x49066C0", VA = "0x49066C0")]
	public MatchCollection Matches(string input, int startat)
	{
		return null;
	}

	[Token(Token = "0x6000336")]
	[Address(RVA = "0x4906780", Offset = "0x4906780", VA = "0x4906780")]
	public static string Replace(string input, string pattern, string replacement)
	{
		return null;
	}

	[Token(Token = "0x6000337")]
	[Address(RVA = "0x4906880", Offset = "0x4906880", VA = "0x4906880")]
	public static string Replace(string input, string pattern, string replacement, RegexOptions options, TimeSpan matchTimeout)
	{
		return null;
	}

	[Token(Token = "0x6000338")]
	[Address(RVA = "0x4906910", Offset = "0x4906910", VA = "0x4906910")]
	public string Replace(string input, string replacement)
	{
		return null;
	}

	[Token(Token = "0x6000339")]
	[Address(RVA = "0x4906980", Offset = "0x4906980", VA = "0x4906980")]
	public string Replace(string input, string replacement, int count, int startat)
	{
		return null;
	}

	[Token(Token = "0x600033A")]
	[Address(RVA = "0x4906A60", Offset = "0x4906A60", VA = "0x4906A60")]
	public static string Replace(string input, string pattern, MatchEvaluator evaluator)
	{
		return null;
	}

	[Token(Token = "0x600033B")]
	[Address(RVA = "0x4906B60", Offset = "0x4906B60", VA = "0x4906B60")]
	public static string Replace(string input, string pattern, MatchEvaluator evaluator, RegexOptions options, TimeSpan matchTimeout)
	{
		return null;
	}

	[Token(Token = "0x600033C")]
	[Address(RVA = "0x4906BF0", Offset = "0x4906BF0", VA = "0x4906BF0")]
	public string Replace(string input, MatchEvaluator evaluator)
	{
		return null;
	}

	[Token(Token = "0x600033D")]
	[Address(RVA = "0x4906C60", Offset = "0x4906C60", VA = "0x4906C60")]
	public string Replace(string input, MatchEvaluator evaluator, int count, int startat)
	{
		return null;
	}

	[Token(Token = "0x600033E")]
	[Address(RVA = "0x4906D10", Offset = "0x4906D10", VA = "0x4906D10")]
	private static string Replace(MatchEvaluator evaluator, Regex regex, string input, int count, int startat)
	{
		return null;
	}

	[Token(Token = "0x600033F")]
	[Address(RVA = "0x49071E0", Offset = "0x49071E0", VA = "0x49071E0")]
	static Regex()
	{
	}

	[Token(Token = "0x6000340")]
	[Address(RVA = "0x4907550", Offset = "0x4907550", VA = "0x4907550")]
	protected internal static void ValidateMatchTimeout(TimeSpan matchTimeout)
	{
	}

	[Token(Token = "0x6000341")]
	[Address(RVA = "0x4907320", Offset = "0x4907320", VA = "0x4907320")]
	private static TimeSpan InitDefaultMatchTimeout()
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000342")]
	[Address(RVA = "0x49076A0", Offset = "0x49076A0", VA = "0x49076A0")]
	public Regex(string pattern)
	{
	}

	[Token(Token = "0x6000343")]
	[Address(RVA = "0x4907710", Offset = "0x4907710", VA = "0x4907710")]
	public Regex(string pattern, RegexOptions options)
	{
	}

	[Token(Token = "0x6000344")]
	[Address(RVA = "0x4907780", Offset = "0x4907780", VA = "0x4907780", Slot = "4")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo si, StreamingContext context)
	{
	}

	[Token(Token = "0x6000345")]
	[Address(RVA = "0x4905E80", Offset = "0x4905E80", VA = "0x4905E80")]
	private Regex(string pattern, RegexOptions options, TimeSpan matchTimeout, bool addToCache)
	{
	}

	[Token(Token = "0x6000348")]
	[Address(RVA = "0x4907910", Offset = "0x4907910", VA = "0x4907910", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000349")]
	[Address(RVA = "0x4902160", Offset = "0x4902160", VA = "0x4902160")]
	public string GroupNameFromNumber(int i)
	{
		return null;
	}

	[Token(Token = "0x600034A")]
	[Address(RVA = "0x4901CD0", Offset = "0x4901CD0", VA = "0x4901CD0")]
	public int GroupNumberFromName(string name)
	{
		return default(int);
	}

	[Token(Token = "0x600034B")]
	[Address(RVA = "0x4907800", Offset = "0x4907800", VA = "0x4907800")]
	protected void InitializeReferences()
	{
	}

	[Token(Token = "0x600034C")]
	[Address(RVA = "0x49030C0", Offset = "0x49030C0", VA = "0x49030C0")]
	internal Match Run(bool quick, int prevlen, string input, int beginning, int length, int startat)
	{
		return null;
	}

	[Token(Token = "0x600034D")]
	[Address(RVA = "0x4906220", Offset = "0x4906220", VA = "0x4906220")]
	protected internal bool UseOptionR()
	{
		return default(bool);
	}

	[Token(Token = "0x600034E")]
	[Address(RVA = "0x4907920", Offset = "0x4907920", VA = "0x4907920")]
	internal bool UseOptionInvariant()
	{
		return default(bool);
	}
}
