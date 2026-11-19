// ==================== AoTTG2 cross-reference ====================
// Type: System.Text.RegularExpressions.Regex
// Update status: CHANGED in this game update
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

[Token(Token = "0x20000A9")]
public class Regex : ISerializable
{
	[Token(Token = "0x20000AA")]
	internal readonly struct CachedCodeEntryKey : IEquatable<CachedCodeEntryKey>
	{
		[Token(Token = "0x40002AE")]
		[FieldOffset(Offset = "0x0")]
		private readonly RegexOptions _options;

		[Token(Token = "0x40002AF")]
		[FieldOffset(Offset = "0x8")]
		private readonly string _cultureKey;

		[Token(Token = "0x40002B0")]
		[FieldOffset(Offset = "0x10")]
		private readonly string _pattern;

		[Token(Token = "0x6000376")]
		[Address(RVA = "0x61E4C00", Offset = "0x61E3C00", VA = "0x61E4C00")]
		public CachedCodeEntryKey(RegexOptions options, string cultureKey, string pattern)
		{
		}

		[Token(Token = "0x6000377")]
		[Address(RVA = "0x61E4E10", Offset = "0x61E3E10", VA = "0x61E4E10", Slot = "0")]
		public override bool Equals(object obj)
		{
			return default(bool);
		}

		[Token(Token = "0x6000378")]
		[Address(RVA = "0x61E4EA0", Offset = "0x61E3EA0", VA = "0x61E4EA0", Slot = "4")]
		public bool Equals(CachedCodeEntryKey other)
		{
			return default(bool);
		}

		[Token(Token = "0x6000379")]
		[Address(RVA = "0x61E2450", Offset = "0x61E1450", VA = "0x61E2450")]
		public static bool operator ==(CachedCodeEntryKey left, CachedCodeEntryKey right)
		{
			return default(bool);
		}

		[Token(Token = "0x600037A")]
		[Address(RVA = "0x61E4F00", Offset = "0x61E3F00", VA = "0x61E4F00", Slot = "2")]
		public override int GetHashCode()
		{
			return default(int);
		}
	}

	[Token(Token = "0x20000AB")]
	internal sealed class CachedCodeEntry
	{
		[Token(Token = "0x40002B1")]
		[FieldOffset(Offset = "0x10")]
		public CachedCodeEntry Next;

		[Token(Token = "0x40002B2")]
		[FieldOffset(Offset = "0x18")]
		public CachedCodeEntry Previous;

		[Token(Token = "0x40002B3")]
		[FieldOffset(Offset = "0x20")]
		public readonly CachedCodeEntryKey Key;

		[Token(Token = "0x40002B4")]
		[FieldOffset(Offset = "0x38")]
		public RegexCode Code;

		[Token(Token = "0x40002B5")]
		[FieldOffset(Offset = "0x40")]
		public readonly Hashtable Caps;

		[Token(Token = "0x40002B6")]
		[FieldOffset(Offset = "0x48")]
		public readonly Hashtable Capnames;

		[Token(Token = "0x40002B7")]
		[FieldOffset(Offset = "0x50")]
		public readonly string[] Capslist;

		[Token(Token = "0x40002B8")]
		[FieldOffset(Offset = "0x58")]
		public readonly int Capsize;

		[Token(Token = "0x40002B9")]
		[FieldOffset(Offset = "0x60")]
		public readonly ExclusiveReference Runnerref;

		[Token(Token = "0x40002BA")]
		[FieldOffset(Offset = "0x68")]
		public readonly WeakReference<RegexReplacement> ReplRef;

		[Token(Token = "0x600037B")]
		[Address(RVA = "0x61E2D50", Offset = "0x61E1D50", VA = "0x61E2D50")]
		public CachedCodeEntry(CachedCodeEntryKey key, Hashtable capnames, string[] capslist, RegexCode code, Hashtable caps, int capsize, ExclusiveReference runner, WeakReference<RegexReplacement> replref)
		{
		}
	}

	[Token(Token = "0x4000297")]
	private const int CacheDictionarySwitchLimit = 10;

	[Token(Token = "0x4000298")]
	[FieldOffset(Offset = "0x0")]
	private static int s_cacheSize;

	[Token(Token = "0x4000299")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Dictionary<CachedCodeEntryKey, CachedCodeEntry> s_cache;

	[Token(Token = "0x400029A")]
	[FieldOffset(Offset = "0x10")]
	private static int s_cacheCount;

	[Token(Token = "0x400029B")]
	[FieldOffset(Offset = "0x18")]
	private static CachedCodeEntry s_cacheFirst;

	[Token(Token = "0x400029C")]
	[FieldOffset(Offset = "0x20")]
	private static CachedCodeEntry s_cacheLast;

	[Token(Token = "0x400029D")]
	[FieldOffset(Offset = "0x28")]
	private static readonly TimeSpan s_maximumMatchTimeout;

	[Token(Token = "0x400029E")]
	private const string DefaultMatchTimeout_ConfigKeyName = "REGEX_DEFAULT_MATCH_TIMEOUT";

	[Token(Token = "0x400029F")]
	[FieldOffset(Offset = "0x30")]
	internal static readonly TimeSpan s_defaultMatchTimeout;

	[Token(Token = "0x40002A0")]
	[FieldOffset(Offset = "0x38")]
	public static readonly TimeSpan InfiniteMatchTimeout;

	[Token(Token = "0x40002A1")]
	[FieldOffset(Offset = "0x10")]
	protected internal TimeSpan internalMatchTimeout;

	[Token(Token = "0x40002A2")]
	internal const int MaxOptionShift = 10;

	[Token(Token = "0x40002A3")]
	[FieldOffset(Offset = "0x18")]
	protected internal string pattern;

	[Token(Token = "0x40002A4")]
	[FieldOffset(Offset = "0x20")]
	protected internal RegexOptions roptions;

	[Token(Token = "0x40002A5")]
	[FieldOffset(Offset = "0x28")]
	protected internal RegexRunnerFactory factory;

	[Token(Token = "0x40002A6")]
	[FieldOffset(Offset = "0x30")]
	protected internal Hashtable caps;

	[Token(Token = "0x40002A7")]
	[FieldOffset(Offset = "0x38")]
	protected internal Hashtable capnames;

	[Token(Token = "0x40002A8")]
	[FieldOffset(Offset = "0x40")]
	protected internal string[] capslist;

	[Token(Token = "0x40002A9")]
	[FieldOffset(Offset = "0x48")]
	protected internal int capsize;

	[Token(Token = "0x40002AA")]
	[FieldOffset(Offset = "0x50")]
	internal ExclusiveReference _runnerref;

	[Token(Token = "0x40002AB")]
	[FieldOffset(Offset = "0x58")]
	internal WeakReference<RegexReplacement> _replref;

	[Token(Token = "0x40002AC")]
	[FieldOffset(Offset = "0x60")]
	internal RegexCode _code;

	[Token(Token = "0x40002AD")]
	[FieldOffset(Offset = "0x68")]
	internal bool _refsInitialized;

	[Token(Token = "0x170000B3")]
	public RegexOptions Options
	{
		[Token(Token = "0x600036D")]
		[Address(RVA = "0x61E4DE0", Offset = "0x61E3DE0", VA = "0x61E4DE0")]
		get
		{
			return default(RegexOptions);
		}
	}

	[Token(Token = "0x170000B4")]
	public bool RightToLeft
	{
		[Token(Token = "0x600036E")]
		[Address(RVA = "0x61E45B0", Offset = "0x61E35B0", VA = "0x61E45B0")]
		get
		{
			return default(bool);
		}
	}

	[MethodImpl(MethodImplOptions.AggressiveInlining)]
	[Token(Token = "0x600034A")]
	[Address(RVA = "0x61E2310", Offset = "0x61E1310", VA = "0x61E2310")]
	private CachedCodeEntry GetCachedCode(CachedCodeEntryKey key, bool isToAdd)
	{
		return null;
	}

	[Token(Token = "0x600034B")]
	[Address(RVA = "0x61E24B0", Offset = "0x61E14B0", VA = "0x61E24B0")]
	private CachedCodeEntry GetCachedCodeEntryInternal(CachedCodeEntryKey key, bool isToAdd)
	{
		return null;
	}

	[Token(Token = "0x600034C")]
	[Address(RVA = "0x61E2E20", Offset = "0x61E1E20", VA = "0x61E2E20")]
	private void FillCacheDictionary()
	{
	}

	[MethodImpl(MethodImplOptions.AggressiveInlining)]
	[Token(Token = "0x600034D")]
	[Address(RVA = "0x61E2F40", Offset = "0x61E1F40", VA = "0x61E2F40")]
	private static bool TryGetCacheValue(CachedCodeEntryKey key, out CachedCodeEntry entry)
	{
		return default(bool);
	}

	[Token(Token = "0x600034E")]
	[Address(RVA = "0x61E3050", Offset = "0x61E2050", VA = "0x61E3050")]
	private static bool TryGetCacheValueSmall(CachedCodeEntryKey key, out CachedCodeEntry entry)
	{
		return default(bool);
	}

	[Token(Token = "0x600034F")]
	[Address(RVA = "0x61E2AD0", Offset = "0x61E1AD0", VA = "0x61E2AD0")]
	private static CachedCodeEntry LookupCachedAndPromote(CachedCodeEntryKey key)
	{
		return null;
	}

	[Token(Token = "0x6000350")]
	[Address(RVA = "0x61E3180", Offset = "0x61E2180", VA = "0x61E3180")]
	public static bool IsMatch(string input, string pattern)
	{
		return default(bool);
	}

	[Token(Token = "0x6000351")]
	[Address(RVA = "0x61E32F0", Offset = "0x61E22F0", VA = "0x61E32F0")]
	public static bool IsMatch(string input, string pattern, RegexOptions options)
	{
		return default(bool);
	}

	[Token(Token = "0x6000352")]
	[Address(RVA = "0x61E3270", Offset = "0x61E2270", VA = "0x61E3270")]
	public static bool IsMatch(string input, string pattern, RegexOptions options, TimeSpan matchTimeout)
	{
		return default(bool);
	}

	[Token(Token = "0x6000353")]
	[Address(RVA = "0x61E3720", Offset = "0x61E2720", VA = "0x61E3720")]
	public bool IsMatch(string input)
	{
		return default(bool);
	}

	[Token(Token = "0x6000354")]
	[Address(RVA = "0x61E3790", Offset = "0x61E2790", VA = "0x61E3790")]
	public bool IsMatch(string input, int startat)
	{
		return default(bool);
	}

	[Token(Token = "0x6000355")]
	[Address(RVA = "0x61E3810", Offset = "0x61E2810", VA = "0x61E3810")]
	public static Match Match(string input, string pattern)
	{
		return null;
	}

	[Token(Token = "0x6000356")]
	[Address(RVA = "0x61E3900", Offset = "0x61E2900", VA = "0x61E3900")]
	public static Match Match(string input, string pattern, RegexOptions options, TimeSpan matchTimeout)
	{
		return null;
	}

	[Token(Token = "0x6000357")]
	[Address(RVA = "0x61E3980", Offset = "0x61E2980", VA = "0x61E3980")]
	public Match Match(string input)
	{
		return null;
	}

	[Token(Token = "0x6000358")]
	[Address(RVA = "0x61E39E0", Offset = "0x61E29E0", VA = "0x61E39E0")]
	public Match Match(string input, int startat)
	{
		return null;
	}

	[Token(Token = "0x6000359")]
	[Address(RVA = "0x61E3A50", Offset = "0x61E2A50", VA = "0x61E3A50")]
	public MatchCollection Matches(string input)
	{
		return null;
	}

	[Token(Token = "0x600035A")]
	[Address(RVA = "0x61E3AB0", Offset = "0x61E2AB0", VA = "0x61E3AB0")]
	public MatchCollection Matches(string input, int startat)
	{
		return null;
	}

	[Token(Token = "0x600035B")]
	[Address(RVA = "0x61E3B70", Offset = "0x61E2B70", VA = "0x61E3B70")]
	public static string Replace(string input, string pattern, string replacement)
	{
		return null;
	}

	[Token(Token = "0x600035C")]
	[Address(RVA = "0x61E3C70", Offset = "0x61E2C70", VA = "0x61E3C70")]
	public static string Replace(string input, string pattern, string replacement, RegexOptions options, TimeSpan matchTimeout)
	{
		return null;
	}

	[Token(Token = "0x600035D")]
	[Address(RVA = "0x61E3D00", Offset = "0x61E2D00", VA = "0x61E3D00")]
	public string Replace(string input, string replacement)
	{
		return null;
	}

	[Token(Token = "0x600035E")]
	[Address(RVA = "0x61E3D70", Offset = "0x61E2D70", VA = "0x61E3D70")]
	public string Replace(string input, string replacement, int count, int startat)
	{
		return null;
	}

	[Token(Token = "0x600035F")]
	[Address(RVA = "0x61E3E50", Offset = "0x61E2E50", VA = "0x61E3E50")]
	public static string Replace(string input, string pattern, MatchEvaluator evaluator)
	{
		return null;
	}

	[Token(Token = "0x6000360")]
	[Address(RVA = "0x61E3F50", Offset = "0x61E2F50", VA = "0x61E3F50")]
	public static string Replace(string input, string pattern, MatchEvaluator evaluator, RegexOptions options, TimeSpan matchTimeout)
	{
		return null;
	}

	[Token(Token = "0x6000361")]
	[Address(RVA = "0x61E3FE0", Offset = "0x61E2FE0", VA = "0x61E3FE0")]
	public string Replace(string input, MatchEvaluator evaluator)
	{
		return null;
	}

	[Token(Token = "0x6000362")]
	[Address(RVA = "0x61E4050", Offset = "0x61E3050", VA = "0x61E4050")]
	public string Replace(string input, MatchEvaluator evaluator, int count, int startat)
	{
		return null;
	}

	[Token(Token = "0x6000363")]
	[Address(RVA = "0x61E4110", Offset = "0x61E3110", VA = "0x61E4110")]
	private static string Replace(MatchEvaluator evaluator, Regex regex, string input, int count, int startat)
	{
		return null;
	}

	[Token(Token = "0x6000364")]
	[Address(RVA = "0x61E45C0", Offset = "0x61E35C0", VA = "0x61E45C0")]
	static Regex()
	{
	}

	[Token(Token = "0x6000365")]
	[Address(RVA = "0x61E4930", Offset = "0x61E3930", VA = "0x61E4930")]
	protected internal static void ValidateMatchTimeout(TimeSpan matchTimeout)
	{
	}

	[Token(Token = "0x6000366")]
	[Address(RVA = "0x61E4700", Offset = "0x61E3700", VA = "0x61E4700")]
	private static TimeSpan InitDefaultMatchTimeout()
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000367")]
	[Address(RVA = "0x61E4A80", Offset = "0x61E3A80", VA = "0x61E4A80")]
	protected Regex()
	{
	}

	[Token(Token = "0x6000368")]
	[Address(RVA = "0x61E4AE0", Offset = "0x61E3AE0", VA = "0x61E4AE0")]
	public Regex(string pattern)
	{
	}

	[Token(Token = "0x6000369")]
	[Address(RVA = "0x61E4B50", Offset = "0x61E3B50", VA = "0x61E4B50")]
	public Regex(string pattern, RegexOptions options)
	{
	}

	[Token(Token = "0x600036A")]
	[Address(RVA = "0x61E4BC0", Offset = "0x61E3BC0", VA = "0x61E4BC0", Slot = "4")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo si, StreamingContext context)
	{
	}

	[Token(Token = "0x600036B")]
	[Address(RVA = "0x61E33E0", Offset = "0x61E23E0", VA = "0x61E33E0")]
	private Regex(string pattern, RegexOptions options, TimeSpan matchTimeout, bool addToCache)
	{
	}

	[Token(Token = "0x600036C")]
	[Address(RVA = "0x61E4D40", Offset = "0x61E3D40", VA = "0x61E4D40")]
	public static string Escape(string str)
	{
		return null;
	}

	[Token(Token = "0x600036F")]
	[Address(RVA = "0x61E4DF0", Offset = "0x61E3DF0", VA = "0x61E4DF0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000370")]
	[Address(RVA = "0x61DF6C0", Offset = "0x61DE6C0", VA = "0x61DF6C0")]
	public string GroupNameFromNumber(int i)
	{
		return null;
	}

	[Token(Token = "0x6000371")]
	[Address(RVA = "0x61DF280", Offset = "0x61DE280", VA = "0x61DF280")]
	public int GroupNumberFromName(string name)
	{
		return default(int);
	}

	[Token(Token = "0x6000372")]
	[Address(RVA = "0x61E4C40", Offset = "0x61E3C40", VA = "0x61E4C40")]
	protected void InitializeReferences()
	{
	}

	[Token(Token = "0x6000373")]
	[Address(RVA = "0x61E0660", Offset = "0x61DF660", VA = "0x61E0660")]
	internal Match Run(bool quick, int prevlen, string input, int beginning, int length, int startat)
	{
		return null;
	}

	[Token(Token = "0x6000374")]
	[Address(RVA = "0x61E3780", Offset = "0x61E2780", VA = "0x61E3780")]
	protected internal bool UseOptionR()
	{
		return default(bool);
	}

	[Token(Token = "0x6000375")]
	[Address(RVA = "0x61E4E00", Offset = "0x61E3E00", VA = "0x61E4E00")]
	internal bool UseOptionInvariant()
	{
		return default(bool);
	}
}
