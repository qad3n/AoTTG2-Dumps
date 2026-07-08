using System.ComponentModel;
using System.Diagnostics;
using Il2CppDummyDll;

namespace System.Runtime.CompilerServices;

[Token(Token = "0x2000251")]
[EditorBrowsable(EditorBrowsableState.Never)]
[DebuggerStepThrough]
public static class CallSiteOps
{
	[Token(Token = "0x6000B67")]
	[Obsolete("do not use this method", true)]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public static CallSite<T> CreateMatchmaker<T>(CallSite<T> site) where T : class
	{
		return null;
	}

	[Token(Token = "0x6000B68")]
	[Address(RVA = "0x41E3040", Offset = "0x41E3040", VA = "0x41E3040")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	[Obsolete("do not use this method", true)]
	public static bool SetNotMatched(CallSite site)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B69")]
	[Address(RVA = "0x41E3060", Offset = "0x41E3060", VA = "0x41E3060")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	[Obsolete("do not use this method", true)]
	public static bool GetMatch(CallSite site)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B6A")]
	[Address(RVA = "0x41E3070", Offset = "0x41E3070", VA = "0x41E3070")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	[Obsolete("do not use this method", true)]
	public static void ClearMatch(CallSite site)
	{
	}

	[Token(Token = "0x6000B6B")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	[Obsolete("do not use this method", true)]
	public static void AddRule<T>(CallSite<T> site, T rule) where T : class
	{
	}

	[Token(Token = "0x6000B6C")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	[Obsolete("do not use this method", true)]
	public static void UpdateRules<T>(CallSite<T> @this, int matched) where T : class
	{
	}

	[Token(Token = "0x6000B6D")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	[Obsolete("do not use this method", true)]
	public static T[] GetRules<T>(CallSite<T> site) where T : class
	{
		return null;
	}

	[Token(Token = "0x6000B6E")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	[Obsolete("do not use this method", true)]
	public static RuleCache<T> GetRuleCache<T>(CallSite<T> site) where T : class
	{
		return null;
	}

	[Token(Token = "0x6000B6F")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	[Obsolete("do not use this method", true)]
	public static void MoveRule<T>(RuleCache<T> cache, T rule, int i) where T : class
	{
	}

	[Token(Token = "0x6000B70")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	[Obsolete("do not use this method", true)]
	public static T[] GetCachedRules<T>(RuleCache<T> cache) where T : class
	{
		return null;
	}

	[Token(Token = "0x6000B71")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	[Obsolete("do not use this method", true)]
	public static T Bind<T>(CallSiteBinder binder, CallSite<T> site, object[] args) where T : class
	{
		return null;
	}
}
