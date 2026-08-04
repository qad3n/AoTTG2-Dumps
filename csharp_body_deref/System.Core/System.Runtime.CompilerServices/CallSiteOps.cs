// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.CompilerServices.CallSiteOps
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x4508140", Offset = "0x4508140", VA = "0x4508140")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	[Obsolete("do not use this method", true)]
	public static bool SetNotMatched(CallSite site)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B69")]
	[Address(RVA = "0x4508160", Offset = "0x4508160", VA = "0x4508160")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	[Obsolete("do not use this method", true)]
	public static bool GetMatch(CallSite site)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B6A")]
	[Address(RVA = "0x4508170", Offset = "0x4508170", VA = "0x4508170")]
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
