// ==================== AoTTG2 cross-reference ====================
// Type: DG.Tweening.Core.TweenManager
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x3197570", Offset = "0x3196570", VA = "0x3197570")]
	static TweenManager()
	{
	}

	[Token(Token = "0x6000433")]
	internal static TweenerCore<T1, T2, TPlugOptions> GetTweener<T1, T2, TPlugOptions>() where TPlugOptions : struct, IPlugOptions
	{
		return null;
	}

	[Token(Token = "0x6000434")]
	[Address(RVA = "0x3197790", Offset = "0x3196790", VA = "0x3197790")]
	internal static Sequence GetSequence()
	{
		return null;
	}

	[Token(Token = "0x6000435")]
	[Address(RVA = "0x31980D0", Offset = "0x31970D0", VA = "0x31980D0")]
	internal static void SetUpdateType(Tween t, UpdateType updateType, bool isIndependentUpdate)
	{
	}

	[Token(Token = "0x6000436")]
	[Address(RVA = "0x31982E0", Offset = "0x31972E0", VA = "0x31982E0")]
	internal static void AddActiveTweenToSequence(Tween t)
	{
	}

	[Token(Token = "0x6000437")]
	[Address(RVA = "0x31988C0", Offset = "0x31978C0", VA = "0x31988C0")]
	internal static int DespawnAll()
	{
		return default(int);
	}

	[Token(Token = "0x6000438")]
	[Address(RVA = "0x3198AB0", Offset = "0x3197AB0", VA = "0x3198AB0")]
	internal static void Despawn(Tween t, bool modifyActiveLists = true)
	{
	}

	[Token(Token = "0x6000439")]
	[Address(RVA = "0x3199140", Offset = "0x3198140", VA = "0x3199140")]
	internal static void PurgeAll(bool isApplicationQuitting)
	{
	}

	[Token(Token = "0x600043A")]
	[Address(RVA = "0x3199310", Offset = "0x3198310", VA = "0x3199310")]
	internal static void PurgePools()
	{
	}

	[Token(Token = "0x600043B")]
	[Address(RVA = "0x3199490", Offset = "0x3198490", VA = "0x3199490")]
	internal static void AddTweenLink(Tween t, TweenLink tweenLink)
	{
	}

	[Token(Token = "0x600043C")]
	[Address(RVA = "0x3199750", Offset = "0x3198750", VA = "0x3199750")]
	private static void RemoveTweenLink(Tween t)
	{
	}

	[Token(Token = "0x600043D")]
	[Address(RVA = "0x3199420", Offset = "0x3198420", VA = "0x3199420")]
	internal static void ResetCapacities()
	{
	}

	[Token(Token = "0x600043E")]
	[Address(RVA = "0x3199850", Offset = "0x3198850", VA = "0x3199850")]
	internal static void SetCapacities(int tweenersCapacity, int sequencesCapacity)
	{
	}

	[Token(Token = "0x600043F")]
	[Address(RVA = "0x3199DF0", Offset = "0x3198DF0", VA = "0x3199DF0")]
	internal static int Validate()
	{
		return default(int);
	}

	[Token(Token = "0x6000440")]
	[Address(RVA = "0x319A460", Offset = "0x3199460", VA = "0x319A460")]
	internal static void Update(UpdateType updateType, float deltaTime, float independentTime)
	{
	}

	[Token(Token = "0x6000441")]
	[Address(RVA = "0x319A710", Offset = "0x3199710", VA = "0x319A710")]
	internal static bool Update(Tween t, float deltaTime, float independentTime, bool isSingleTweenManualUpdate)
	{
		return default(bool);
	}

	[Token(Token = "0x6000442")]
	[Address(RVA = "0x319AC70", Offset = "0x3199C70", VA = "0x319AC70")]
	internal static int FilteredOperation(OperationType operationType, FilterType filterType, object id, bool optionalBool, float optionalFloat, [Optional] object optionalObj, [Optional] object[] optionalArray)
	{
		return default(int);
	}

	[Token(Token = "0x6000443")]
	[Address(RVA = "0x319B840", Offset = "0x319A840", VA = "0x319B840")]
	internal static bool Complete(Tween t, bool modifyActiveLists = true, UpdateMode updateMode = UpdateMode.Goto)
	{
		return default(bool);
	}

	[Token(Token = "0x6000444")]
	[Address(RVA = "0x319B920", Offset = "0x319A920", VA = "0x319B920")]
	internal static bool Flip(Tween t)
	{
		return default(bool);
	}

	[Token(Token = "0x6000445")]
	[Address(RVA = "0x319B780", Offset = "0x319A780", VA = "0x319B780")]
	internal static void ForceInit(Tween t, bool isSequenced = false)
	{
	}

	[Token(Token = "0x6000446")]
	[Address(RVA = "0x319B940", Offset = "0x319A940", VA = "0x319B940")]
	internal static bool Goto(Tween t, float to, bool andPlay = false, UpdateMode updateMode = UpdateMode.Goto)
	{
		return default(bool);
	}

	[Token(Token = "0x6000447")]
	[Address(RVA = "0x3199710", Offset = "0x3198710", VA = "0x3199710")]
	internal static bool Pause(Tween t)
	{
		return default(bool);
	}

	[Token(Token = "0x6000448")]
	[Address(RVA = "0x3199690", Offset = "0x3198690", VA = "0x3199690")]
	internal static bool Play(Tween t)
	{
		return default(bool);
	}

	[Token(Token = "0x6000449")]
	[Address(RVA = "0x319BA90", Offset = "0x319AA90", VA = "0x319BA90")]
	internal static bool PlayBackwards(Tween t)
	{
		return default(bool);
	}

	[Token(Token = "0x600044A")]
	[Address(RVA = "0x319BCD0", Offset = "0x319ACD0", VA = "0x319BCD0")]
	internal static bool PlayForward(Tween t)
	{
		return default(bool);
	}

	[Token(Token = "0x600044B")]
	[Address(RVA = "0x319BE50", Offset = "0x319AE50", VA = "0x319BE50")]
	internal static bool Restart(Tween t, bool includeDelay = true, float changeDelayTo = -1f)
	{
		return default(bool);
	}

	[Token(Token = "0x600044C")]
	[Address(RVA = "0x319BF30", Offset = "0x319AF30", VA = "0x319BF30")]
	internal static bool Rewind(Tween t, bool includeDelay = true)
	{
		return default(bool);
	}

	[Token(Token = "0x600044D")]
	[Address(RVA = "0x319C0D0", Offset = "0x319B0D0", VA = "0x319C0D0")]
	internal static bool SmoothRewind(Tween t)
	{
		return default(bool);
	}

	[Token(Token = "0x600044E")]
	[Address(RVA = "0x319C230", Offset = "0x319B230", VA = "0x319C230")]
	internal static bool TogglePause(Tween t)
	{
		return default(bool);
	}

	[Token(Token = "0x600044F")]
	[Address(RVA = "0x319C3C0", Offset = "0x319B3C0", VA = "0x319C3C0")]
	internal static int TotalPooledTweens()
	{
		return default(int);
	}

	[Token(Token = "0x6000450")]
	[Address(RVA = "0x319C410", Offset = "0x319B410", VA = "0x319C410")]
	internal static int TotalPlayingTweens()
	{
		return default(int);
	}

	[Token(Token = "0x6000451")]
	[Address(RVA = "0x319C550", Offset = "0x319B550", VA = "0x319C550")]
	internal static int TotalTweensById(object id, bool playingOnly)
	{
		return default(int);
	}

	[Token(Token = "0x6000452")]
	[Address(RVA = "0x319CA70", Offset = "0x319BA70", VA = "0x319CA70")]
	internal static List<Tween> GetActiveTweens(bool playing, [Optional] List<Tween> fillableList)
	{
		return null;
	}

	[Token(Token = "0x6000453")]
	[Address(RVA = "0x319CD90", Offset = "0x319BD90", VA = "0x319CD90")]
	internal static List<Tween> GetTweensById(object id, bool playingOnly, [Optional] List<Tween> fillableList)
	{
		return null;
	}

	[Token(Token = "0x6000454")]
	[Address(RVA = "0x319C640", Offset = "0x319B640", VA = "0x319C640")]
	private static int DoGetTweensById(object id, bool playingOnly, bool addToList, List<Tween> fillableList)
	{
		return default(int);
	}

	[Token(Token = "0x6000455")]
	[Address(RVA = "0x319CF50", Offset = "0x319BF50", VA = "0x319CF50")]
	internal static List<Tween> GetTweensByTarget(object target, bool playingOnly, [Optional] List<Tween> fillableList)
	{
		return null;
	}

	[Token(Token = "0x6000456")]
	[Address(RVA = "0x319A270", Offset = "0x3199270", VA = "0x319A270")]
	private static void MarkForKilling(Tween t, bool isSingleTweenManualUpdate = false)
	{
	}

	[Token(Token = "0x6000457")]
	[Address(RVA = "0x319A9F0", Offset = "0x31999F0", VA = "0x319A9F0")]
	private static void EvaluateTweenLink(Tween t)
	{
	}

	[Token(Token = "0x6000458")]
	[Address(RVA = "0x3197A80", Offset = "0x3196A80", VA = "0x3197A80")]
	private static void AddActiveTween(Tween t)
	{
	}

	[Token(Token = "0x6000459")]
	[Address(RVA = "0x3199FB0", Offset = "0x3198FB0", VA = "0x3199FB0")]
	private static void ReorganizeActiveTweens()
	{
	}

	[Token(Token = "0x600045A")]
	[Address(RVA = "0x319A3B0", Offset = "0x31993B0", VA = "0x319A3B0")]
	private static void DespawnActiveTweens(List<Tween> tweens)
	{
	}

	[Token(Token = "0x600045B")]
	[Address(RVA = "0x3198340", Offset = "0x3197340", VA = "0x3198340")]
	private static void RemoveActiveTween(Tween t)
	{
	}

	[Token(Token = "0x600045C")]
	[Address(RVA = "0x31990D0", Offset = "0x31980D0", VA = "0x31990D0")]
	private static void ClearTweenArray(Tween[] tweens)
	{
	}

	[Token(Token = "0x600045D")]
	[Address(RVA = "0x3197DD0", Offset = "0x3196DD0", VA = "0x3197DD0")]
	private static void IncreaseCapacities(CapacityIncreaseMode increaseMode)
	{
	}

	[Token(Token = "0x600045E")]
	[Address(RVA = "0x319C310", Offset = "0x319B310", VA = "0x319C310")]
	private static void ManageOnRewindCallbackWhenAlreadyRewinded(Tween t, bool isPlayBackwardsOrSmoothRewind)
	{
	}
}
