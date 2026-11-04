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

[Token(Token = "0x20000E8")]
public class Regex : ISerializable
{
	[Token(Token = "0x20000E9")]
	internal readonly struct CachedCodeEntryKey : IEquatable<CachedCodeEntryKey>
	{
		[Token(Token = "0x400037D")]
		[FieldOffset(Offset = "0x0")]
		private readonly RegexOptions _options;

		[Token(Token = "0x400037E")]
		[FieldOffset(Offset = "0x8")]
		private readonly string _cultureKey;

		[Token(Token = "0x400037F")]
		[FieldOffset(Offset = "0x10")]
		private readonly string _pattern;

		[Token(Token = "0x600052C")]
		[Address(RVA = "0x26EC7F0", Offset = "0x26EADF0", VA = "0x1826EC7F0")]
		public CachedCodeEntryKey(RegexOptions options, string cultureKey, string pattern)
		{
		}

		[Token(Token = "0x600052D")]
		[Address(RVA = "0x28486E0", Offset = "0x2846CE0", VA = "0x1828486E0", Slot = "0")]
		public override bool Equals(object obj)
		{
			return default(bool);
		}

		[Token(Token = "0x600052E")]
		[Address(RVA = "0x2848670", Offset = "0x2846C70", VA = "0x182848670", Slot = "4")]
		public bool Equals(CachedCodeEntryKey other)
		{
			return default(bool);
		}

		[Token(Token = "0x600052F")]
		[Address(RVA = "0x2848670", Offset = "0x2846C70", VA = "0x182848670")]
		public static bool operator ==(CachedCodeEntryKey left, CachedCodeEntryKey right)
		{
			return default(bool);
		}

		[Token(Token = "0x6000530")]
		[Address(RVA = "0x28487C0", Offset = "0x2846DC0", VA = "0x1828487C0", Slot = "2")]
		public override int GetHashCode()
		{
			return default(int);
		}
	}

	[Token(Token = "0x20000EA")]
	internal sealed class CachedCodeEntry
	{
		[Token(Token = "0x4000380")]
		[FieldOffset(Offset = "0x10")]
		public CachedCodeEntry Next;

		[Token(Token = "0x4000381")]
		[FieldOffset(Offset = "0x18")]
		public CachedCodeEntry Previous;

		[Token(Token = "0x4000382")]
		[FieldOffset(Offset = "0x20")]
		public readonly CachedCodeEntryKey Key;

		[Token(Token = "0x4000383")]
		[FieldOffset(Offset = "0x38")]
		public RegexCode Code;

		[Token(Token = "0x4000384")]
		[FieldOffset(Offset = "0x40")]
		public readonly Hashtable Caps;

		[Token(Token = "0x4000385")]
		[FieldOffset(Offset = "0x48")]
		public readonly Hashtable Capnames;

		[Token(Token = "0x4000386")]
		[FieldOffset(Offset = "0x50")]
		public readonly string[] Capslist;

		[Token(Token = "0x4000387")]
		[FieldOffset(Offset = "0x58")]
		public readonly int Capsize;

		[Token(Token = "0x4000388")]
		[FieldOffset(Offset = "0x60")]
		public readonly ExclusiveReference Runnerref;

		[Token(Token = "0x4000389")]
		[FieldOffset(Offset = "0x68")]
		public readonly WeakReference<RegexReplacement> ReplRef;

		[Token(Token = "0x6000531")]
		[Address(RVA = "0x2848830", Offset = "0x2846E30", VA = "0x182848830")]
		public CachedCodeEntry(CachedCodeEntryKey key, Hashtable capnames, string[] capslist, RegexCode code, Hashtable caps, int capsize, ExclusiveReference runner, WeakReference<RegexReplacement> replref)
		{
		}
	}

	[Token(Token = "0x4000366")]
	private const int CacheDictionarySwitchLimit = 10;

	[Token(Token = "0x4000367")]
	[FieldOffset(Offset = "0x0")]
	private static int s_cacheSize;

	[Token(Token = "0x4000368")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Dictionary<CachedCodeEntryKey, CachedCodeEntry> s_cache;

	[Token(Token = "0x4000369")]
	[FieldOffset(Offset = "0x10")]
	private static int s_cacheCount;

	[Token(Token = "0x400036A")]
	[FieldOffset(Offset = "0x18")]
	private static CachedCodeEntry s_cacheFirst;

	[Token(Token = "0x400036B")]
	[FieldOffset(Offset = "0x20")]
	private static CachedCodeEntry s_cacheLast;

	[Token(Token = "0x400036C")]
	[FieldOffset(Offset = "0x28")]
	private static readonly TimeSpan s_maximumMatchTimeout;

	[Token(Token = "0x400036D")]
	private const string DefaultMatchTimeout_ConfigKeyName = "REGEX_DEFAULT_MATCH_TIMEOUT";

	[Token(Token = "0x400036E")]
	[FieldOffset(Offset = "0x30")]
	internal static readonly TimeSpan s_defaultMatchTimeout;

	[Token(Token = "0x400036F")]
	[FieldOffset(Offset = "0x38")]
	public static readonly TimeSpan InfiniteMatchTimeout;

	[Token(Token = "0x4000370")]
	[FieldOffset(Offset = "0x10")]
	protected internal TimeSpan internalMatchTimeout;

	[Token(Token = "0x4000371")]
	internal const int MaxOptionShift = 10;

	[Token(Token = "0x4000372")]
	[FieldOffset(Offset = "0x18")]
	protected internal string pattern;

	[Token(Token = "0x4000373")]
	[FieldOffset(Offset = "0x20")]
	protected internal RegexOptions roptions;

	[Token(Token = "0x4000374")]
	[FieldOffset(Offset = "0x28")]
	protected internal RegexRunnerFactory factory;

	[Token(Token = "0x4000375")]
	[FieldOffset(Offset = "0x30")]
	protected internal Hashtable caps;

	[Token(Token = "0x4000376")]
	[FieldOffset(Offset = "0x38")]
	protected internal Hashtable capnames;

	[Token(Token = "0x4000377")]
	[FieldOffset(Offset = "0x40")]
	protected internal string[] capslist;

	[Token(Token = "0x4000378")]
	[FieldOffset(Offset = "0x48")]
	protected internal int capsize;

	[Token(Token = "0x4000379")]
	[FieldOffset(Offset = "0x50")]
	internal ExclusiveReference _runnerref;

	[Token(Token = "0x400037A")]
	[FieldOffset(Offset = "0x58")]
	internal WeakReference<RegexReplacement> _replref;

	[Token(Token = "0x400037B")]
	[FieldOffset(Offset = "0x60")]
	internal RegexCode _code;

	[Token(Token = "0x400037C")]
	[FieldOffset(Offset = "0x68")]
	internal bool _refsInitialized;

	[Token(Token = "0x170000E2")]
	public RegexOptions Options
	{
		[Token(Token = "0x6000523")]
		[Address(RVA = "0xA4C170", Offset = "0xA4A770", VA = "0x180A4C170")]
		get
		{
			return default(RegexOptions);
		}
	}

	[Token(Token = "0x170000E3")]
	public bool RightToLeft
	{
		[Token(Token = "0x6000524")]
		[Address(RVA = "0x285EEE0", Offset = "0x285D4E0", VA = "0x18285EEE0")]
		get
		{
			return default(bool);
		}
	}

	[MethodImpl(MethodImplOptions.AggressiveInlining)]
	[Token(Token = "0x60004FE")]
	[Address(RVA = "0x285C200", Offset = "0x285A800", VA = "0x18285C200")]
	private CachedCodeEntry GetCachedCode(CachedCodeEntryKey key, bool isToAdd)
	{
		return null;
	}

	[Token(Token = "0x60004FF")]
	[Address(RVA = "0x285BB20", Offset = "0x285A120", VA = "0x18285BB20")]
	private CachedCodeEntry GetCachedCodeEntryInternal(CachedCodeEntryKey key, bool isToAdd)
	{
		return null;
	}

	[Token(Token = "0x6000500")]
	[Address(RVA = "0x285BA10", Offset = "0x285A010", VA = "0x18285BA10")]
	private void FillCacheDictionary()
	{
	}

	[MethodImpl(MethodImplOptions.AggressiveInlining)]
	[Token(Token = "0x6000501")]
	[Address(RVA = "0x285EDD0", Offset = "0x285D3D0", VA = "0x18285EDD0")]
	private static bool TryGetCacheValue(CachedCodeEntryKey key, out CachedCodeEntry entry)
	{
		return default(bool);
	}

	[Token(Token = "0x6000502")]
	[Address(RVA = "0x285ECB0", Offset = "0x285D2B0", VA = "0x18285ECB0")]
	private static bool TryGetCacheValueSmall(CachedCodeEntryKey key, out CachedCodeEntry entry)
	{
		return default(bool);
	}

	[Token(Token = "0x6000503")]
	[Address(RVA = "0x285CBF0", Offset = "0x285B1F0", VA = "0x18285CBF0")]
	private static CachedCodeEntry LookupCachedAndPromote(CachedCodeEntryKey key)
	{
		return null;
	}

	[Token(Token = "0x6000504")]
	[Address(RVA = "0x285C8A0", Offset = "0x285AEA0", VA = "0x18285C8A0")]
	public static bool IsMatch(string input, string pattern)
	{
		return default(bool);
	}

	[Token(Token = "0x6000505")]
	[Address(RVA = "0x285C920", Offset = "0x285AF20", VA = "0x18285C920")]
	public static bool IsMatch(string input, string pattern, RegexOptions options)
	{
		return default(bool);
	}

	[Token(Token = "0x6000506")]
	[Address(RVA = "0x285CAE0", Offset = "0x285B0E0", VA = "0x18285CAE0")]
	public static bool IsMatch(string input, string pattern, RegexOptions options, TimeSpan matchTimeout)
	{
		return default(bool);
	}

	[Token(Token = "0x6000507")]
	[Address(RVA = "0x285C9B0", Offset = "0x285AFB0", VA = "0x18285C9B0")]
	public bool IsMatch(string input)
	{
		return default(bool);
	}

	[Token(Token = "0x6000508")]
	[Address(RVA = "0x285CA50", Offset = "0x285B050", VA = "0x18285CA50")]
	public bool IsMatch(string input, int startat)
	{
		return default(bool);
	}

	[Token(Token = "0x6000509")]
	[Address(RVA = "0x285D2B0", Offset = "0x285B8B0", VA = "0x18285D2B0")]
	public static Match Match(string input, string pattern)
	{
		return null;
	}

	[Token(Token = "0x600050A")]
	[Address(RVA = "0x285D110", Offset = "0x285B710", VA = "0x18285D110")]
	public static Match Match(string input, string pattern, RegexOptions options, TimeSpan matchTimeout)
	{
		return null;
	}

	[Token(Token = "0x600050B")]
	[Address(RVA = "0x285D070", Offset = "0x285B670", VA = "0x18285D070")]
	public Match Match(string input)
	{
		return null;
	}

	[Token(Token = "0x600050C")]
	[Address(RVA = "0x285D220", Offset = "0x285B820", VA = "0x18285D220")]
	public Match Match(string input, int startat)
	{
		return null;
	}

	[Token(Token = "0x600050D")]
	[Address(RVA = "0x285D3F0", Offset = "0x285B9F0", VA = "0x18285D3F0")]
	public static MatchCollection Matches(string input, string pattern)
	{
		return null;
	}

	[Token(Token = "0x600050E")]
	[Address(RVA = "0x285D640", Offset = "0x285BC40", VA = "0x18285D640")]
	public static MatchCollection Matches(string input, string pattern, RegexOptions options, TimeSpan matchTimeout)
	{
		return null;
	}

	[Token(Token = "0x600050F")]
	[Address(RVA = "0x285D470", Offset = "0x285BA70", VA = "0x18285D470")]
	public MatchCollection Matches(string input)
	{
		return null;
	}

	[Token(Token = "0x6000510")]
	[Address(RVA = "0x285D850", Offset = "0x285BE50", VA = "0x18285D850")]
	public MatchCollection Matches(string input, int startat)
	{
		return null;
	}

	[Token(Token = "0x6000511")]
	[Address(RVA = "0x285E500", Offset = "0x285CB00", VA = "0x18285E500")]
	public static string Replace(string input, string pattern, string replacement)
	{
		return null;
	}

	[Token(Token = "0x6000512")]
	[Address(RVA = "0x285DE60", Offset = "0x285C460", VA = "0x18285DE60")]
	public static string Replace(string input, string pattern, string replacement, RegexOptions options, TimeSpan matchTimeout)
	{
		return null;
	}

	[Token(Token = "0x6000513")]
	[Address(RVA = "0x285E6C0", Offset = "0x285CCC0", VA = "0x18285E6C0")]
	public string Replace(string input, string replacement)
	{
		return null;
	}

	[Token(Token = "0x6000514")]
	[Address(RVA = "0x285E7F0", Offset = "0x285CDF0", VA = "0x18285E7F0")]
	public string Replace(string input, string replacement, int count, int startat)
	{
		return null;
	}

	[Token(Token = "0x6000515")]
	[Address(RVA = "0x285DB50", Offset = "0x285C150", VA = "0x18285DB50")]
	public static string Replace(string input, string pattern, MatchEvaluator evaluator)
	{
		return null;
	}

	[Token(Token = "0x6000516")]
	[Address(RVA = "0x285DA20", Offset = "0x285C020", VA = "0x18285DA20")]
	public static string Replace(string input, string pattern, MatchEvaluator evaluator, RegexOptions options, TimeSpan matchTimeout)
	{
		return null;
	}

	[Token(Token = "0x6000517")]
	[Address(RVA = "0x285DCC0", Offset = "0x285C2C0", VA = "0x18285DCC0")]
	public string Replace(string input, MatchEvaluator evaluator)
	{
		return null;
	}

	[Token(Token = "0x6000518")]
	[Address(RVA = "0x285DDA0", Offset = "0x285C3A0", VA = "0x18285DDA0")]
	public string Replace(string input, MatchEvaluator evaluator, int count, int startat)
	{
		return null;
	}

	[Token(Token = "0x6000519")]
	[Address(RVA = "0x285DFF0", Offset = "0x285C5F0", VA = "0x18285DFF0")]
	private static string Replace(MatchEvaluator evaluator, Regex regex, string input, int count, int startat)
	{
		return null;
	}

	[Token(Token = "0x600051A")]
	[Address(RVA = "0x285F060", Offset = "0x285D660", VA = "0x18285F060")]
	static Regex()
	{
	}

	[Token(Token = "0x600051B")]
	[Address(RVA = "0x285EEF0", Offset = "0x285D4F0", VA = "0x18285EEF0")]
	protected internal static void ValidateMatchTimeout(TimeSpan matchTimeout)
	{
	}

	[Token(Token = "0x600051C")]
	[Address(RVA = "0x285C580", Offset = "0x285AB80", VA = "0x18285C580")]
	private static TimeSpan InitDefaultMatchTimeout()
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x600051D")]
	[Address(RVA = "0x285F780", Offset = "0x285DD80", VA = "0x18285F780")]
	protected Regex()
	{
	}

	[Token(Token = "0x600051E")]
	[Address(RVA = "0x285F1D0", Offset = "0x285D7D0", VA = "0x18285F1D0")]
	public Regex(string pattern)
	{
	}

	[Token(Token = "0x600051F")]
	[Address(RVA = "0x285F6F0", Offset = "0x285DCF0", VA = "0x18285F6F0")]
	public Regex(string pattern, RegexOptions options)
	{
	}

	[Token(Token = "0x6000520")]
	[Address(RVA = "0x285EC70", Offset = "0x285D270", VA = "0x18285EC70", Slot = "4")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo si, StreamingContext context)
	{
	}

	[Token(Token = "0x6000521")]
	[Address(RVA = "0x285F250", Offset = "0x285D850", VA = "0x18285F250")]
	private Regex(string pattern, RegexOptions options, TimeSpan matchTimeout, bool addToCache)
	{
	}

	[Token(Token = "0x6000522")]
	[Address(RVA = "0x285B970", Offset = "0x2859F70", VA = "0x18285B970")]
	public static string Escape(string str)
	{
		return null;
	}

	[Token(Token = "0x6000525")]
	[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000526")]
	[Address(RVA = "0x285C350", Offset = "0x285A950", VA = "0x18285C350")]
	public string GroupNameFromNumber(int i)
	{
		return null;
	}

	[Token(Token = "0x6000527")]
	[Address(RVA = "0x285C460", Offset = "0x285AA60", VA = "0x18285C460")]
	public int GroupNumberFromName(string name)
	{
		return default(int);
	}

	[Token(Token = "0x6000528")]
	[Address(RVA = "0x285C7A0", Offset = "0x285ADA0", VA = "0x18285C7A0")]
	protected void InitializeReferences()
	{
	}

	[Token(Token = "0x6000529")]
	[Address(RVA = "0x285E910", Offset = "0x285CF10", VA = "0x18285E910")]
	internal Match Run(bool quick, int prevlen, string input, int beginning, int length, int startat)
	{
		return null;
	}

	[Token(Token = "0x600052A")]
	[Address(RVA = "0x285EEE0", Offset = "0x285D4E0", VA = "0x18285EEE0")]
	protected internal bool UseOptionR()
	{
		return default(bool);
	}

	[Token(Token = "0x600052B")]
	[Address(RVA = "0x285EED0", Offset = "0x285D4D0", VA = "0x18285EED0")]
	internal bool UseOptionInvariant()
	{
		return default(bool);
	}
}
