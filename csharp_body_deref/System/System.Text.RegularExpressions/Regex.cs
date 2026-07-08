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
		[Address(RVA = "0x45E26C0", Offset = "0x45E26C0", VA = "0x45E26C0")]
		public CachedCodeEntryKey(RegexOptions options, string cultureKey, string pattern)
		{
		}

		[Token(Token = "0x6000350")]
		[Address(RVA = "0x45E2830", Offset = "0x45E2830", VA = "0x45E2830", Slot = "0")]
		public override bool Equals(object obj)
		{
			return default(bool);
		}

		[Token(Token = "0x6000351")]
		[Address(RVA = "0x45E28C0", Offset = "0x45E28C0", VA = "0x45E28C0", Slot = "4")]
		public bool Equals(CachedCodeEntryKey other)
		{
			return default(bool);
		}

		[Token(Token = "0x6000352")]
		[Address(RVA = "0x45DFDB0", Offset = "0x45DFDB0", VA = "0x45DFDB0")]
		public static bool operator ==(CachedCodeEntryKey left, CachedCodeEntryKey right)
		{
			return default(bool);
		}

		[Token(Token = "0x6000353")]
		[Address(RVA = "0x45E2920", Offset = "0x45E2920", VA = "0x45E2920", Slot = "2")]
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
		[Address(RVA = "0x45E0780", Offset = "0x45E0780", VA = "0x45E0780")]
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
		[Address(RVA = "0x45E2800", Offset = "0x45E2800", VA = "0x45E2800")]
		get
		{
			return default(RegexOptions);
		}
	}

	[Token(Token = "0x170000AA")]
	public bool RightToLeft
	{
		[Token(Token = "0x6000347")]
		[Address(RVA = "0x45E20D0", Offset = "0x45E20D0", VA = "0x45E20D0")]
		get
		{
			return default(bool);
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000324")]
	[Address(RVA = "0x45DFC60", Offset = "0x45DFC60", VA = "0x45DFC60")]
	private CachedCodeEntry GetCachedCode(CachedCodeEntryKey key, bool isToAdd)
	{
		return null;
	}

	[Token(Token = "0x6000325")]
	[Address(RVA = "0x45DFE10", Offset = "0x45DFE10", VA = "0x45DFE10")]
	private CachedCodeEntry GetCachedCodeEntryInternal(CachedCodeEntryKey key, bool isToAdd)
	{
		return null;
	}

	[Token(Token = "0x6000326")]
	[Address(RVA = "0x45E0850", Offset = "0x45E0850", VA = "0x45E0850")]
	private void FillCacheDictionary()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000327")]
	[Address(RVA = "0x45E0990", Offset = "0x45E0990", VA = "0x45E0990")]
	private static bool TryGetCacheValue(CachedCodeEntryKey key, out CachedCodeEntry entry)
	{
		return default(bool);
	}

	[Token(Token = "0x6000328")]
	[Address(RVA = "0x45E0AE0", Offset = "0x45E0AE0", VA = "0x45E0AE0")]
	private static bool TryGetCacheValueSmall(CachedCodeEntryKey key, out CachedCodeEntry entry)
	{
		return default(bool);
	}

	[Token(Token = "0x6000329")]
	[Address(RVA = "0x45E0500", Offset = "0x45E0500", VA = "0x45E0500")]
	private static CachedCodeEntry LookupCachedAndPromote(CachedCodeEntryKey key)
	{
		return null;
	}

	[Token(Token = "0x600032A")]
	[Address(RVA = "0x45E0C10", Offset = "0x45E0C10", VA = "0x45E0C10")]
	public static bool IsMatch(string input, string pattern)
	{
		return default(bool);
	}

	[Token(Token = "0x600032B")]
	[Address(RVA = "0x45E0D00", Offset = "0x45E0D00", VA = "0x45E0D00")]
	public static bool IsMatch(string input, string pattern, RegexOptions options, TimeSpan matchTimeout)
	{
		return default(bool);
	}

	[Token(Token = "0x600032C")]
	[Address(RVA = "0x45E10C0", Offset = "0x45E10C0", VA = "0x45E10C0")]
	public bool IsMatch(string input)
	{
		return default(bool);
	}

	[Token(Token = "0x600032D")]
	[Address(RVA = "0x45E1130", Offset = "0x45E1130", VA = "0x45E1130")]
	public bool IsMatch(string input, int startat)
	{
		return default(bool);
	}

	[Token(Token = "0x600032E")]
	[Address(RVA = "0x45E11B0", Offset = "0x45E11B0", VA = "0x45E11B0")]
	public static Match Match(string input, string pattern)
	{
		return null;
	}

	[Token(Token = "0x600032F")]
	[Address(RVA = "0x45E12A0", Offset = "0x45E12A0", VA = "0x45E12A0")]
	public static Match Match(string input, string pattern, RegexOptions options, TimeSpan matchTimeout)
	{
		return null;
	}

	[Token(Token = "0x6000330")]
	[Address(RVA = "0x45E1320", Offset = "0x45E1320", VA = "0x45E1320")]
	public Match Match(string input)
	{
		return null;
	}

	[Token(Token = "0x6000331")]
	[Address(RVA = "0x45E1380", Offset = "0x45E1380", VA = "0x45E1380")]
	public Match Match(string input, int startat)
	{
		return null;
	}

	[Token(Token = "0x6000332")]
	[Address(RVA = "0x45E13F0", Offset = "0x45E13F0", VA = "0x45E13F0")]
	public static MatchCollection Matches(string input, string pattern)
	{
		return null;
	}

	[Token(Token = "0x6000333")]
	[Address(RVA = "0x45E14E0", Offset = "0x45E14E0", VA = "0x45E14E0")]
	public static MatchCollection Matches(string input, string pattern, RegexOptions options, TimeSpan matchTimeout)
	{
		return null;
	}

	[Token(Token = "0x6000334")]
	[Address(RVA = "0x45E1560", Offset = "0x45E1560", VA = "0x45E1560")]
	public MatchCollection Matches(string input)
	{
		return null;
	}

	[Token(Token = "0x6000335")]
	[Address(RVA = "0x45E15C0", Offset = "0x45E15C0", VA = "0x45E15C0")]
	public MatchCollection Matches(string input, int startat)
	{
		return null;
	}

	[Token(Token = "0x6000336")]
	[Address(RVA = "0x45E1680", Offset = "0x45E1680", VA = "0x45E1680")]
	public static string Replace(string input, string pattern, string replacement)
	{
		return null;
	}

	[Token(Token = "0x6000337")]
	[Address(RVA = "0x45E1780", Offset = "0x45E1780", VA = "0x45E1780")]
	public static string Replace(string input, string pattern, string replacement, RegexOptions options, TimeSpan matchTimeout)
	{
		return null;
	}

	[Token(Token = "0x6000338")]
	[Address(RVA = "0x45E1810", Offset = "0x45E1810", VA = "0x45E1810")]
	public string Replace(string input, string replacement)
	{
		return null;
	}

	[Token(Token = "0x6000339")]
	[Address(RVA = "0x45E1880", Offset = "0x45E1880", VA = "0x45E1880")]
	public string Replace(string input, string replacement, int count, int startat)
	{
		return null;
	}

	[Token(Token = "0x600033A")]
	[Address(RVA = "0x45E1960", Offset = "0x45E1960", VA = "0x45E1960")]
	public static string Replace(string input, string pattern, MatchEvaluator evaluator)
	{
		return null;
	}

	[Token(Token = "0x600033B")]
	[Address(RVA = "0x45E1A60", Offset = "0x45E1A60", VA = "0x45E1A60")]
	public static string Replace(string input, string pattern, MatchEvaluator evaluator, RegexOptions options, TimeSpan matchTimeout)
	{
		return null;
	}

	[Token(Token = "0x600033C")]
	[Address(RVA = "0x45E1AF0", Offset = "0x45E1AF0", VA = "0x45E1AF0")]
	public string Replace(string input, MatchEvaluator evaluator)
	{
		return null;
	}

	[Token(Token = "0x600033D")]
	[Address(RVA = "0x45E1B60", Offset = "0x45E1B60", VA = "0x45E1B60")]
	public string Replace(string input, MatchEvaluator evaluator, int count, int startat)
	{
		return null;
	}

	[Token(Token = "0x600033E")]
	[Address(RVA = "0x45E1C10", Offset = "0x45E1C10", VA = "0x45E1C10")]
	private static string Replace(MatchEvaluator evaluator, Regex regex, string input, int count, int startat)
	{
		return null;
	}

	[Token(Token = "0x600033F")]
	[Address(RVA = "0x45E20E0", Offset = "0x45E20E0", VA = "0x45E20E0")]
	static Regex()
	{
	}

	[Token(Token = "0x6000340")]
	[Address(RVA = "0x45E2450", Offset = "0x45E2450", VA = "0x45E2450")]
	protected internal static void ValidateMatchTimeout(TimeSpan matchTimeout)
	{
	}

	[Token(Token = "0x6000341")]
	[Address(RVA = "0x45E2220", Offset = "0x45E2220", VA = "0x45E2220")]
	private static TimeSpan InitDefaultMatchTimeout()
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000342")]
	[Address(RVA = "0x45E25A0", Offset = "0x45E25A0", VA = "0x45E25A0")]
	public Regex(string pattern)
	{
	}

	[Token(Token = "0x6000343")]
	[Address(RVA = "0x45E2610", Offset = "0x45E2610", VA = "0x45E2610")]
	public Regex(string pattern, RegexOptions options)
	{
	}

	[Token(Token = "0x6000344")]
	[Address(RVA = "0x45E2680", Offset = "0x45E2680", VA = "0x45E2680", Slot = "4")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo si, StreamingContext context)
	{
	}

	[Token(Token = "0x6000345")]
	[Address(RVA = "0x45E0D80", Offset = "0x45E0D80", VA = "0x45E0D80")]
	private Regex(string pattern, RegexOptions options, TimeSpan matchTimeout, bool addToCache)
	{
	}

	[Token(Token = "0x6000348")]
	[Address(RVA = "0x45E2810", Offset = "0x45E2810", VA = "0x45E2810", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000349")]
	[Address(RVA = "0x45DD060", Offset = "0x45DD060", VA = "0x45DD060")]
	public string GroupNameFromNumber(int i)
	{
		return null;
	}

	[Token(Token = "0x600034A")]
	[Address(RVA = "0x45DCBD0", Offset = "0x45DCBD0", VA = "0x45DCBD0")]
	public int GroupNumberFromName(string name)
	{
		return default(int);
	}

	[Token(Token = "0x600034B")]
	[Address(RVA = "0x45E2700", Offset = "0x45E2700", VA = "0x45E2700")]
	protected void InitializeReferences()
	{
	}

	[Token(Token = "0x600034C")]
	[Address(RVA = "0x45DDFC0", Offset = "0x45DDFC0", VA = "0x45DDFC0")]
	internal Match Run(bool quick, int prevlen, string input, int beginning, int length, int startat)
	{
		return null;
	}

	[Token(Token = "0x600034D")]
	[Address(RVA = "0x45E1120", Offset = "0x45E1120", VA = "0x45E1120")]
	protected internal bool UseOptionR()
	{
		return default(bool);
	}

	[Token(Token = "0x600034E")]
	[Address(RVA = "0x45E2820", Offset = "0x45E2820", VA = "0x45E2820")]
	internal bool UseOptionInvariant()
	{
		return default(bool);
	}
}
