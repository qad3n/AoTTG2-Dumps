using System.Collections.Generic;
using System.Runtime.InteropServices;
using DG.Tweening.Core.Enums;
using DG.Tweening.Plugins.Options;
using Il2CppDummyDll;

namespace DG.Tweening.Core;

[Token(Token = "0x20000B6")]
internal static class TweenManager
{
	[Token(Token = "0x20000B7")]
	internal enum CapacityIncreaseMode
	{
		[Token(Token = "0x4000249")]
		TweenersAndSequences,
		[Token(Token = "0x400024A")]
		TweenersOnly,
		[Token(Token = "0x400024B")]
		SequencesOnly
	}

	[Token(Token = "0x4000222")]
	private const int _DefaultMaxTweeners = 200;

	[Token(Token = "0x4000223")]
	private const int _DefaultMaxSequences = 50;

	[Token(Token = "0x4000224")]
	private const string _MaxTweensReached = "Max Tweens reached: capacity has automatically been increased from #0 to #1. Use DOTween.SetTweensCapacity to set it manually at startup";

	[Token(Token = "0x4000225")]
	private const float _EpsilonVsTimeCheck = 1E-06f;

	[Token(Token = "0x4000226")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static bool isUnityEditor;

	[Token(Token = "0x4000227")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1")]
	internal static bool isDebugBuild;

	[Token(Token = "0x4000228")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
	internal static int maxActive;

	[Token(Token = "0x4000229")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	internal static int maxTweeners;

	[Token(Token = "0x400022A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC")]
	internal static int maxSequences;

	[Token(Token = "0x400022B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal static bool hasActiveTweens;

	[Token(Token = "0x400022C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x11")]
	internal static bool hasActiveDefaultTweens;

	[Token(Token = "0x400022D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x12")]
	internal static bool hasActiveLateTweens;

	[Token(Token = "0x400022E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x13")]
	internal static bool hasActiveFixedTweens;

	[Token(Token = "0x400022F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
	internal static bool hasActiveManualTweens;

	[Token(Token = "0x4000230")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	internal static int totActiveTweens;

	[Token(Token = "0x4000231")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
	internal static int totActiveDefaultTweens;

	[Token(Token = "0x4000232")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	internal static int totActiveLateTweens;

	[Token(Token = "0x4000233")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
	internal static int totActiveFixedTweens;

	[Token(Token = "0x4000234")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	internal static int totActiveManualTweens;

	[Token(Token = "0x4000235")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2C")]
	internal static int totActiveTweeners;

	[Token(Token = "0x4000236")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	internal static int totActiveSequences;

	[Token(Token = "0x4000237")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x34")]
	internal static int totPooledTweeners;

	[Token(Token = "0x4000238")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	internal static int totPooledSequences;

	[Token(Token = "0x4000239")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x3C")]
	internal static int totTweeners;

	[Token(Token = "0x400023A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	internal static int totSequences;

	[Token(Token = "0x400023B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x44")]
	internal static bool isUpdateLoop;

	[Token(Token = "0x400023C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	internal static Tween[] _activeTweens;

	[Token(Token = "0x400023D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private static Tween[] _pooledTweeners;

	[Token(Token = "0x400023E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private static readonly Stack<Tween> _PooledSequences;

	[Token(Token = "0x400023F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private static readonly List<Tween> _KillList;

	[Token(Token = "0x4000240")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private static readonly Dictionary<Tween, TweenLink> _TweenLinks;

	[Token(Token = "0x4000241")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private static int _totTweenLinks;

	[Token(Token = "0x4000242")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x74")]
	private static int _maxActiveLookupId;

	[Token(Token = "0x4000243")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private static bool _requiresActiveReorganization;

	[Token(Token = "0x4000244")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x7C")]
	private static int _reorganizeFromId;

	[Token(Token = "0x4000245")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private static int _minPooledTweenerId;

	[Token(Token = "0x4000246")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x84")]
	private static int _maxPooledTweenerId;

	[Token(Token = "0x4000247")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private static bool _despawnAllCalledFromUpdateLoopCallback;

	[Token(Token = "0x6000432")]
	[Address(RVA = "0x2320680", Offset = "0x2320680", VA = "0x2320680")]
	static TweenManager()
	{
	}

	[Token(Token = "0x6000433")]
	internal static TweenerCore<T1, T2, TPlugOptions> GetTweener<T1, T2, TPlugOptions>() where TPlugOptions : struct, IPlugOptions
	{
		return null;
	}

	[Token(Token = "0x6000434")]
	[Address(RVA = "0x23208A0", Offset = "0x23208A0", VA = "0x23208A0")]
	internal static Sequence GetSequence()
	{
		return null;
	}

	[Token(Token = "0x6000435")]
	[Address(RVA = "0x23211A0", Offset = "0x23211A0", VA = "0x23211A0")]
	internal static void SetUpdateType(Tween t, UpdateType updateType, bool isIndependentUpdate)
	{
	}

	[Token(Token = "0x6000436")]
	[Address(RVA = "0x23213C0", Offset = "0x23213C0", VA = "0x23213C0")]
	internal static void AddActiveTweenToSequence(Tween t)
	{
	}

	[Token(Token = "0x6000437")]
	[Address(RVA = "0x23219D0", Offset = "0x23219D0", VA = "0x23219D0")]
	internal static int DespawnAll()
	{
		return default(int);
	}

	[Token(Token = "0x6000438")]
	[Address(RVA = "0x2321BC0", Offset = "0x2321BC0", VA = "0x2321BC0")]
	internal static void Despawn(Tween t, bool modifyActiveLists = true)
	{
	}

	[Token(Token = "0x6000439")]
	[Address(RVA = "0x2322200", Offset = "0x2322200", VA = "0x2322200")]
	internal static void PurgeAll(bool isApplicationQuitting)
	{
	}

	[Token(Token = "0x600043A")]
	[Address(RVA = "0x2322410", Offset = "0x2322410", VA = "0x2322410")]
	internal static void PurgePools()
	{
	}

	[Token(Token = "0x600043B")]
	[Address(RVA = "0x2322590", Offset = "0x2322590", VA = "0x2322590")]
	internal static void AddTweenLink(Tween t, TweenLink tweenLink)
	{
	}

	[Token(Token = "0x600043C")]
	[Address(RVA = "0x2322850", Offset = "0x2322850", VA = "0x2322850")]
	private static void RemoveTweenLink(Tween t)
	{
	}

	[Token(Token = "0x600043D")]
	[Address(RVA = "0x2322520", Offset = "0x2322520", VA = "0x2322520")]
	internal static void ResetCapacities()
	{
	}

	[Token(Token = "0x600043E")]
	[Address(RVA = "0x2322950", Offset = "0x2322950", VA = "0x2322950")]
	internal static void SetCapacities(int tweenersCapacity, int sequencesCapacity)
	{
	}

	[Token(Token = "0x600043F")]
	[Address(RVA = "0x2322F10", Offset = "0x2322F10", VA = "0x2322F10")]
	internal static int Validate()
	{
		return default(int);
	}

	[Token(Token = "0x6000440")]
	[Address(RVA = "0x2323550", Offset = "0x2323550", VA = "0x2323550")]
	internal static void Update(UpdateType updateType, float deltaTime, float independentTime)
	{
	}

	[Token(Token = "0x6000441")]
	[Address(RVA = "0x23237D0", Offset = "0x23237D0", VA = "0x23237D0")]
	internal static bool Update(Tween t, float deltaTime, float independentTime, bool isSingleTweenManualUpdate)
	{
		return default(bool);
	}

	[Token(Token = "0x6000442")]
	[Address(RVA = "0x2323E40", Offset = "0x2323E40", VA = "0x2323E40")]
	internal static int FilteredOperation(OperationType operationType, FilterType filterType, object id, bool optionalBool, float optionalFloat, [Optional] object optionalObj, [Optional] object[] optionalArray)
	{
		return default(int);
	}

	[Token(Token = "0x6000443")]
	[Address(RVA = "0x2324A00", Offset = "0x2324A00", VA = "0x2324A00")]
	internal static bool Complete(Tween t, bool modifyActiveLists = true, UpdateMode updateMode = UpdateMode.Goto)
	{
		return default(bool);
	}

	[Token(Token = "0x6000444")]
	[Address(RVA = "0x2324AE0", Offset = "0x2324AE0", VA = "0x2324AE0")]
	internal static bool Flip(Tween t)
	{
		return default(bool);
	}

	[Token(Token = "0x6000445")]
	[Address(RVA = "0x2324940", Offset = "0x2324940", VA = "0x2324940")]
	internal static void ForceInit(Tween t, bool isSequenced = false)
	{
	}

	[Token(Token = "0x6000446")]
	[Address(RVA = "0x2324B00", Offset = "0x2324B00", VA = "0x2324B00")]
	internal static bool Goto(Tween t, float to, bool andPlay = false, UpdateMode updateMode = UpdateMode.Goto)
	{
		return default(bool);
	}

	[Token(Token = "0x6000447")]
	[Address(RVA = "0x2322810", Offset = "0x2322810", VA = "0x2322810")]
	internal static bool Pause(Tween t)
	{
		return default(bool);
	}

	[Token(Token = "0x6000448")]
	[Address(RVA = "0x2322790", Offset = "0x2322790", VA = "0x2322790")]
	internal static bool Play(Tween t)
	{
		return default(bool);
	}

	[Token(Token = "0x6000449")]
	[Address(RVA = "0x2324C50", Offset = "0x2324C50", VA = "0x2324C50")]
	internal static bool PlayBackwards(Tween t)
	{
		return default(bool);
	}

	[Token(Token = "0x600044A")]
	[Address(RVA = "0x2324EC0", Offset = "0x2324EC0", VA = "0x2324EC0")]
	internal static bool PlayForward(Tween t)
	{
		return default(bool);
	}

	[Token(Token = "0x600044B")]
	[Address(RVA = "0x2325060", Offset = "0x2325060", VA = "0x2325060")]
	internal static bool Restart(Tween t, bool includeDelay = true, float changeDelayTo = -1f)
	{
		return default(bool);
	}

	[Token(Token = "0x600044C")]
	[Address(RVA = "0x2325140", Offset = "0x2325140", VA = "0x2325140")]
	internal static bool Rewind(Tween t, bool includeDelay = true)
	{
		return default(bool);
	}

	[Token(Token = "0x600044D")]
	[Address(RVA = "0x2325300", Offset = "0x2325300", VA = "0x2325300")]
	internal static bool SmoothRewind(Tween t)
	{
		return default(bool);
	}

	[Token(Token = "0x600044E")]
	[Address(RVA = "0x2325490", Offset = "0x2325490", VA = "0x2325490")]
	internal static bool TogglePause(Tween t)
	{
		return default(bool);
	}

	[Token(Token = "0x600044F")]
	[Address(RVA = "0x2325610", Offset = "0x2325610", VA = "0x2325610")]
	internal static int TotalPooledTweens()
	{
		return default(int);
	}

	[Token(Token = "0x6000450")]
	[Address(RVA = "0x2325660", Offset = "0x2325660", VA = "0x2325660")]
	internal static int TotalPlayingTweens()
	{
		return default(int);
	}

	[Token(Token = "0x6000451")]
	[Address(RVA = "0x23257B0", Offset = "0x23257B0", VA = "0x23257B0")]
	internal static int TotalTweensById(object id, bool playingOnly)
	{
		return default(int);
	}

	[Token(Token = "0x6000452")]
	[Address(RVA = "0x2325C20", Offset = "0x2325C20", VA = "0x2325C20")]
	internal static List<Tween> GetActiveTweens(bool playing, [Optional] List<Tween> fillableList)
	{
		return null;
	}

	[Token(Token = "0x6000453")]
	[Address(RVA = "0x2325F00", Offset = "0x2325F00", VA = "0x2325F00")]
	internal static List<Tween> GetTweensById(object id, bool playingOnly, [Optional] List<Tween> fillableList)
	{
		return null;
	}

	[Token(Token = "0x6000454")]
	[Address(RVA = "0x2325890", Offset = "0x2325890", VA = "0x2325890")]
	private static int DoGetTweensById(object id, bool playingOnly, bool addToList, List<Tween> fillableList)
	{
		return default(int);
	}

	[Token(Token = "0x6000455")]
	[Address(RVA = "0x23260C0", Offset = "0x23260C0", VA = "0x23260C0")]
	internal static List<Tween> GetTweensByTarget(object target, bool playingOnly, [Optional] List<Tween> fillableList)
	{
		return null;
	}

	[Token(Token = "0x6000456")]
	[Address(RVA = "0x2323350", Offset = "0x2323350", VA = "0x2323350")]
	private static void MarkForKilling(Tween t, bool isSingleTweenManualUpdate = false)
	{
	}

	[Token(Token = "0x6000457")]
	[Address(RVA = "0x2323AD0", Offset = "0x2323AD0", VA = "0x2323AD0")]
	private static void EvaluateTweenLink(Tween t)
	{
	}

	[Token(Token = "0x6000458")]
	[Address(RVA = "0x2320B80", Offset = "0x2320B80", VA = "0x2320B80")]
	private static void AddActiveTween(Tween t)
	{
	}

	[Token(Token = "0x6000459")]
	[Address(RVA = "0x23230E0", Offset = "0x23230E0", VA = "0x23230E0")]
	private static void ReorganizeActiveTweens()
	{
	}

	[Token(Token = "0x600045A")]
	[Address(RVA = "0x23234A0", Offset = "0x23234A0", VA = "0x23234A0")]
	private static void DespawnActiveTweens(List<Tween> tweens)
	{
	}

	[Token(Token = "0x600045B")]
	[Address(RVA = "0x2321420", Offset = "0x2321420", VA = "0x2321420")]
	private static void RemoveActiveTween(Tween t)
	{
	}

	[Token(Token = "0x600045C")]
	[Address(RVA = "0x2322190", Offset = "0x2322190", VA = "0x2322190")]
	private static void ClearTweenArray(Tween[] tweens)
	{
	}

	[Token(Token = "0x600045D")]
	[Address(RVA = "0x2320ED0", Offset = "0x2320ED0", VA = "0x2320ED0")]
	private static void IncreaseCapacities(CapacityIncreaseMode increaseMode)
	{
	}

	[Token(Token = "0x600045E")]
	[Address(RVA = "0x2325570", Offset = "0x2325570", VA = "0x2325570")]
	private static void ManageOnRewindCallbackWhenAlreadyRewinded(Tween t, bool isPlayBackwardsOrSmoothRewind)
	{
	}
}
