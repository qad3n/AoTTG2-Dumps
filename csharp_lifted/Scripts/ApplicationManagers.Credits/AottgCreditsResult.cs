// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.Credits.AottgCreditsResult
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/ApplicationManagers/Credits/AottgCreditsResult.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace ApplicationManagers.Credits;

[Token(Token = "0x200099C")]
public sealed class AottgCreditsResult
{
	[Token(Token = "0x17000F6A")]
	public AottgCreditsResultState State
	{
		[Token(Token = "0x6005999")]
		[Address(RVA = "0x5D228E0", Offset = "0x5D218E0", VA = "0x5D228E0")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/ApplicationManagers/Credits/AottgCreditsResult.c (ApplicationManagers.Credits.AottgCreditsResult$$get_State): clean
			return this._State_k__BackingField;
		}
		[Token(Token = "0x600599A")]
		[Address(RVA = "0x5D228F0", Offset = "0x5D218F0", VA = "0x5D228F0")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/ApplicationManagers/Credits/AottgCreditsResult.c (ApplicationManagers.Credits.AottgCreditsResult$$set_State): clean
			this._State_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x17000F6B")]
	public AottgCreditsResponse Credits
	{
		[Token(Token = "0x600599B")]
		[Address(RVA = "0x5D22900", Offset = "0x5D21900", VA = "0x5D22900")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/ApplicationManagers/Credits/AottgCreditsResult.c (ApplicationManagers.Credits.AottgCreditsResult$$get_Credits): clean
			return this._Credits_k__BackingField;
		}
		[Token(Token = "0x600599C")]
		[Address(RVA = "0x5D22910", Offset = "0x5D21910", VA = "0x5D22910")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/ApplicationManagers/Credits/AottgCreditsResult.c (ApplicationManagers.Credits.AottgCreditsResult$$set_Credits): clean
			this._Credits_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x17000F6C")]
	public string Error
	{
		[Token(Token = "0x600599D")]
		[Address(RVA = "0x5D22920", Offset = "0x5D21920", VA = "0x5D22920")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/ApplicationManagers/Credits/AottgCreditsResult.c (ApplicationManagers.Credits.AottgCreditsResult$$get_Error): clean
			return this._Error_k__BackingField;
		}
		[Token(Token = "0x600599E")]
		[Address(RVA = "0x5D22930", Offset = "0x5D21930", VA = "0x5D22930")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/ApplicationManagers/Credits/AottgCreditsResult.c (ApplicationManagers.Credits.AottgCreditsResult$$set_Error): clean
			this._Error_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x17000F6D")]
	public bool IsFromCache
	{
		[Token(Token = "0x600599F")]
		[Address(RVA = "0x5D22940", Offset = "0x5D21940", VA = "0x5D22940")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/ApplicationManagers/Credits/AottgCreditsResult.c (ApplicationManagers.Credits.AottgCreditsResult$$get_IsFromCache): clean
			return this._IsFromCache_k__BackingField;
		}
		[Token(Token = "0x60059A0")]
		[Address(RVA = "0x5D22950", Offset = "0x5D21950", VA = "0x5D22950")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/ApplicationManagers/Credits/AottgCreditsResult.c (ApplicationManagers.Credits.AottgCreditsResult$$set_IsFromCache): clean
			this._IsFromCache_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x17000F6E")]
	public bool IsStale
	{
		[Token(Token = "0x60059A1")]
		[Address(RVA = "0x5D22960", Offset = "0x5D21960", VA = "0x5D22960")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/ApplicationManagers/Credits/AottgCreditsResult.c (ApplicationManagers.Credits.AottgCreditsResult$$get_IsStale): clean
			return this._IsStale_k__BackingField;
		}
		[Token(Token = "0x60059A2")]
		[Address(RVA = "0x5D22970", Offset = "0x5D21970", VA = "0x5D22970")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/ApplicationManagers/Credits/AottgCreditsResult.c (ApplicationManagers.Credits.AottgCreditsResult$$set_IsStale): clean
			this._IsStale_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x17000F6F")]
	public bool IsRefreshing
	{
		[Token(Token = "0x60059A3")]
		[Address(RVA = "0x5D22980", Offset = "0x5D21980", VA = "0x5D22980")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/ApplicationManagers/Credits/AottgCreditsResult.c (ApplicationManagers.Credits.AottgCreditsResult$$get_IsRefreshing): clean
			return this._IsRefreshing_k__BackingField;
		}
		[Token(Token = "0x60059A4")]
		[Address(RVA = "0x5D22990", Offset = "0x5D21990", VA = "0x5D22990")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/ApplicationManagers/Credits/AottgCreditsResult.c (ApplicationManagers.Credits.AottgCreditsResult$$set_IsRefreshing): clean
			this._IsRefreshing_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x17000F70")]
	public bool HasCredits
	{
		[Token(Token = "0x60059A5")]
		[Address(RVA = "0x5D229A0", Offset = "0x5D219A0", VA = "0x5D229A0")]
		get
		{
			// Lifted from source/cpp/ApplicationManagers/Credits/AottgCreditsResult.c (ApplicationManagers.Credits.AottgCreditsResult$$get_HasCredits): clean
			return this._Credits_k__BackingField !=null;
		}
	}

	[Token(Token = "0x6005998")]
	[Address(RVA = "0x5D22870", Offset = "0x5D21870", VA = "0x5D22870")]
	private AottgCreditsResult(AottgCreditsResultState state, AottgCreditsResponse credits, string error, bool isFromCache, bool isStale, bool isRefreshing)
	{
		// Lifted from source/cpp/ApplicationManagers/Credits/AottgCreditsResult.c (ApplicationManagers.Credits.AottgCreditsResult$$.ctor): clean
		base();
		this._State_k__BackingField = state;
		this._Credits_k__BackingField = credits;
		this._Error_k__BackingField = error;
		this._IsFromCache_k__BackingField = isFromCache;
		this._IsStale_k__BackingField = isStale;
		this._IsRefreshing_k__BackingField = isRefreshing;
		return;
	}

	[Token(Token = "0x60059A6")]
	[Address(RVA = "0x5D21F10", Offset = "0x5D20F10", VA = "0x5D21F10")]
	public static AottgCreditsResult LoadingNoCache()
	{
		// Lifted from source/cpp/ApplicationManagers/Credits/AottgCreditsResult.c (ApplicationManagers.Credits.AottgCreditsResult$$LoadingNoCache): clean
		AottgCreditsResult __this;

		__this = new AottgCreditsResult();
		__this._State_k__BackingField = 0;
		__this._Credits_k__BackingField = null;
		__this._Error_k__BackingField = null;
		__this._IsFromCache_k__BackingField = false;
		__this._IsStale_k__BackingField = false;
		__this._IsRefreshing_k__BackingField = true;
		return __this;
	}

	[Token(Token = "0x60059A7")]
	[Address(RVA = "0x5D21E10", Offset = "0x5D20E10", VA = "0x5D21E10")]
	public static AottgCreditsResult ReadyFresh(AottgCreditsResponse credits, bool isFromCache)
	{
		// Lifted from source/cpp/ApplicationManagers/Credits/AottgCreditsResult.c (ApplicationManagers.Credits.AottgCreditsResult$$ReadyFresh): clean
		AottgCreditsResult __this;

		__this = new AottgCreditsResult();
		__this._State_k__BackingField = 1;
		__this._Credits_k__BackingField = credits;
		__this._Error_k__BackingField = null;
		__this._IsFromCache_k__BackingField = isFromCache;
		__this._IsStale_k__BackingField = false;
		__this._IsRefreshing_k__BackingField = false;
		return __this;
	}

	[Token(Token = "0x60059A8")]
	[Address(RVA = "0x5D21E90", Offset = "0x5D20E90", VA = "0x5D21E90")]
	public static AottgCreditsResult ReadyStaleRefreshing(AottgCreditsResponse credits)
	{
		// Lifted from source/cpp/ApplicationManagers/Credits/AottgCreditsResult.c (ApplicationManagers.Credits.AottgCreditsResult$$ReadyStaleRefreshing): clean
		AottgCreditsResult __this;

		__this = new AottgCreditsResult();
		__this._State_k__BackingField = 2;
		__this._Credits_k__BackingField = credits;
		__this._Error_k__BackingField = null;
		__this._IsFromCache_k__BackingField = true;
		__this._IsStale_k__BackingField = true;
		__this._IsRefreshing_k__BackingField = true;
		return __this;
	}

	[Token(Token = "0x60059A9")]
	[Address(RVA = "0x5D222C0", Offset = "0x5D212C0", VA = "0x5D222C0")]
	public static AottgCreditsResult FailedNoCache(string error)
	{
		// Lifted from source/cpp/ApplicationManagers/Credits/AottgCreditsResult.c (ApplicationManagers.Credits.AottgCreditsResult$$FailedNoCache): clean
		AottgCreditsResult __this;

		__this = new AottgCreditsResult();
		__this._State_k__BackingField = 3;
		__this._Credits_k__BackingField = null;
		__this._Error_k__BackingField = error;
		__this._IsFromCache_k__BackingField = false;
		__this._IsStale_k__BackingField = false;
		__this._IsRefreshing_k__BackingField = false;
		return __this;
	}

	[Token(Token = "0x60059AA")]
	[Address(RVA = "0x5D22240", Offset = "0x5D21240", VA = "0x5D22240")]
	public static AottgCreditsResult FailedRefreshStale(AottgCreditsResponse credits, string error)
	{
		// Lifted from source/cpp/ApplicationManagers/Credits/AottgCreditsResult.c (ApplicationManagers.Credits.AottgCreditsResult$$FailedRefreshStale): clean
		AottgCreditsResult __this;

		__this = new AottgCreditsResult();
		__this._State_k__BackingField = 4;
		__this._Credits_k__BackingField = credits;
		__this._Error_k__BackingField = error;
		__this._IsFromCache_k__BackingField = true;
		__this._IsStale_k__BackingField = true;
		__this._IsRefreshing_k__BackingField = false;
		return __this;
	}
}
