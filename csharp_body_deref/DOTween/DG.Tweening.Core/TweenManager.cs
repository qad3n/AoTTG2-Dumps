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
	[Address(RVA = "0x581070", Offset = "0x57F670", VA = "0x180581070")]
	static TweenManager()
	{
	}

	[Token(Token = "0x6000433")]
	internal static TweenerCore<T1, T2, TPlugOptions> GetTweener<T1, T2, TPlugOptions>() where TPlugOptions : struct, IPlugOptions
	{
		return null;
	}

	[Token(Token = "0x6000434")]
	[Address(RVA = "0x57D720", Offset = "0x57BD20", VA = "0x18057D720")]
	internal static Sequence GetSequence()
	{
		return null;
	}

	[Token(Token = "0x6000435")]
	[Address(RVA = "0x580090", Offset = "0x57E690", VA = "0x180580090")]
	internal static void SetUpdateType(Tween t, UpdateType updateType, bool isIndependentUpdate)
	{
	}

	[Token(Token = "0x6000436")]
	[Address(RVA = "0x57AFF0", Offset = "0x5795F0", VA = "0x18057AFF0")]
	internal static void AddActiveTweenToSequence(Tween t)
	{
	}

	[Token(Token = "0x6000437")]
	[Address(RVA = "0x57B890", Offset = "0x579E90", VA = "0x18057B890")]
	internal static int DespawnAll()
	{
		return default(int);
	}

	[Token(Token = "0x6000438")]
	[Address(RVA = "0x57BBA0", Offset = "0x57A1A0", VA = "0x18057BBA0")]
	internal static void Despawn(Tween t, bool modifyActiveLists = true)
	{
	}

	[Token(Token = "0x6000439")]
	[Address(RVA = "0x57E8F0", Offset = "0x57CEF0", VA = "0x18057E8F0")]
	internal static void PurgeAll(bool isApplicationQuitting)
	{
	}

	[Token(Token = "0x600043A")]
	[Address(RVA = "0x57ECF0", Offset = "0x57D2F0", VA = "0x18057ECF0")]
	internal static void PurgePools()
	{
	}

	[Token(Token = "0x600043B")]
	[Address(RVA = "0x57B400", Offset = "0x579A00", VA = "0x18057B400")]
	internal static void AddTweenLink(Tween t, TweenLink tweenLink)
	{
	}

	[Token(Token = "0x600043C")]
	[Address(RVA = "0x57F4A0", Offset = "0x57DAA0", VA = "0x18057F4A0")]
	private static void RemoveTweenLink(Tween t)
	{
	}

	[Token(Token = "0x600043D")]
	[Address(RVA = "0x57F880", Offset = "0x57DE80", VA = "0x18057F880")]
	internal static void ResetCapacities()
	{
	}

	[Token(Token = "0x600043E")]
	[Address(RVA = "0x57FB50", Offset = "0x57E150", VA = "0x18057FB50")]
	internal static void SetCapacities(int tweenersCapacity, int sequencesCapacity)
	{
	}

	[Token(Token = "0x600043F")]
	[Address(RVA = "0x580E10", Offset = "0x57F410", VA = "0x180580E10")]
	internal static int Validate()
	{
		return default(int);
	}

	[Token(Token = "0x6000440")]
	[Address(RVA = "0x580860", Offset = "0x57EE60", VA = "0x180580860")]
	internal static void Update(UpdateType updateType, float deltaTime, float independentTime)
	{
	}

	[Token(Token = "0x6000441")]
	[Address(RVA = "0x580B80", Offset = "0x57F180", VA = "0x180580B80")]
	internal static bool Update(Tween t, float deltaTime, float independentTime, bool isSingleTweenManualUpdate)
	{
		return default(bool);
	}

	[Token(Token = "0x6000442")]
	[Address(RVA = "0x57C810", Offset = "0x57AE10", VA = "0x18057C810")]
	internal static int FilteredOperation(OperationType operationType, FilterType filterType, object id, bool optionalBool, float optionalFloat, [Optional] object optionalObj, [Optional] object[] optionalArray)
	{
		return default(int);
	}

	[Token(Token = "0x6000443")]
	[Address(RVA = "0x57B6B0", Offset = "0x579CB0", VA = "0x18057B6B0")]
	internal static bool Complete(Tween t, bool modifyActiveLists = true, UpdateMode updateMode = UpdateMode.Goto)
	{
		return default(bool);
	}

	[Token(Token = "0x6000444")]
	[Address(RVA = "0x57D480", Offset = "0x57BA80", VA = "0x18057D480")]
	internal static bool Flip(Tween t)
	{
		return default(bool);
	}

	[Token(Token = "0x6000445")]
	[Address(RVA = "0x57D4A0", Offset = "0x57BAA0", VA = "0x18057D4A0")]
	internal static void ForceInit(Tween t, bool isSequenced = false)
	{
	}

	[Token(Token = "0x6000446")]
	[Address(RVA = "0x57DDA0", Offset = "0x57C3A0", VA = "0x18057DDA0")]
	internal static bool Goto(Tween t, float to, bool andPlay = false, UpdateMode updateMode = UpdateMode.Goto)
	{
		return default(bool);
	}

	[Token(Token = "0x6000447")]
	[Address(RVA = "0x57E480", Offset = "0x57CA80", VA = "0x18057E480")]
	internal static bool Pause(Tween t)
	{
		return default(bool);
	}

	[Token(Token = "0x6000448")]
	[Address(RVA = "0x57E860", Offset = "0x57CE60", VA = "0x18057E860")]
	internal static bool Play(Tween t)
	{
		return default(bool);
	}

	[Token(Token = "0x6000449")]
	[Address(RVA = "0x57E4D0", Offset = "0x57CAD0", VA = "0x18057E4D0")]
	internal static bool PlayBackwards(Tween t)
	{
		return default(bool);
	}

	[Token(Token = "0x600044A")]
	[Address(RVA = "0x57E6E0", Offset = "0x57CCE0", VA = "0x18057E6E0")]
	internal static bool PlayForward(Tween t)
	{
		return default(bool);
	}

	[Token(Token = "0x600044B")]
	[Address(RVA = "0x57F8D0", Offset = "0x57DED0", VA = "0x18057F8D0")]
	internal static bool Restart(Tween t, bool includeDelay = true, float changeDelayTo = -1f)
	{
		return default(bool);
	}

	[Token(Token = "0x600044C")]
	[Address(RVA = "0x57F9B0", Offset = "0x57DFB0", VA = "0x18057F9B0")]
	internal static bool Rewind(Tween t, bool includeDelay = true)
	{
		return default(bool);
	}

	[Token(Token = "0x600044D")]
	[Address(RVA = "0x580370", Offset = "0x57E970", VA = "0x180580370")]
	internal static bool SmoothRewind(Tween t)
	{
		return default(bool);
	}

	[Token(Token = "0x600044E")]
	[Address(RVA = "0x5804E0", Offset = "0x57EAE0", VA = "0x1805804E0")]
	internal static bool TogglePause(Tween t)
	{
		return default(bool);
	}

	[Token(Token = "0x600044F")]
	[Address(RVA = "0x580720", Offset = "0x57ED20", VA = "0x180580720")]
	internal static int TotalPooledTweens()
	{
		return default(int);
	}

	[Token(Token = "0x6000450")]
	[Address(RVA = "0x5805F0", Offset = "0x57EBF0", VA = "0x1805805F0")]
	internal static int TotalPlayingTweens()
	{
		return default(int);
	}

	[Token(Token = "0x6000451")]
	[Address(RVA = "0x580780", Offset = "0x57ED80", VA = "0x180580780")]
	internal static int TotalTweensById(object id, bool playingOnly)
	{
		return default(int);
	}

	[Token(Token = "0x6000452")]
	[Address(RVA = "0x57D560", Offset = "0x57BB60", VA = "0x18057D560")]
	internal static List<Tween> GetActiveTweens(bool playing, [Optional] List<Tween> fillableList)
	{
		return null;
	}

	[Token(Token = "0x6000453")]
	[Address(RVA = "0x57DA30", Offset = "0x57C030", VA = "0x18057DA30")]
	internal static List<Tween> GetTweensById(object id, bool playingOnly, [Optional] List<Tween> fillableList)
	{
		return null;
	}

	[Token(Token = "0x6000454")]
	[Address(RVA = "0x57C200", Offset = "0x57A800", VA = "0x18057C200")]
	private static int DoGetTweensById(object id, bool playingOnly, bool addToList, List<Tween> fillableList)
	{
		return default(int);
	}

	[Token(Token = "0x6000455")]
	[Address(RVA = "0x57DBB0", Offset = "0x57C1B0", VA = "0x18057DBB0")]
	internal static List<Tween> GetTweensByTarget(object target, bool playingOnly, [Optional] List<Tween> fillableList)
	{
		return null;
	}

	[Token(Token = "0x6000456")]
	[Address(RVA = "0x57E340", Offset = "0x57C940", VA = "0x18057E340")]
	private static void MarkForKilling(Tween t, bool isSingleTweenManualUpdate = false)
	{
	}

	[Token(Token = "0x6000457")]
	[Address(RVA = "0x57C440", Offset = "0x57AA40", VA = "0x18057C440")]
	private static void EvaluateTweenLink(Tween t)
	{
	}

	[Token(Token = "0x6000458")]
	[Address(RVA = "0x57B040", Offset = "0x579640", VA = "0x18057B040")]
	private static void AddActiveTween(Tween t)
	{
	}

	[Token(Token = "0x6000459")]
	[Address(RVA = "0x57F580", Offset = "0x57DB80", VA = "0x18057F580")]
	private static void ReorganizeActiveTweens()
	{
	}

	[Token(Token = "0x600045A")]
	[Address(RVA = "0x57B7D0", Offset = "0x579DD0", VA = "0x18057B7D0")]
	private static void DespawnActiveTweens(List<Tween> tweens)
	{
	}

	[Token(Token = "0x600045B")]
	[Address(RVA = "0x57EE60", Offset = "0x57D460", VA = "0x18057EE60")]
	private static void RemoveActiveTween(Tween t)
	{
	}

	[Token(Token = "0x600045C")]
	[Address(RVA = "0x57B640", Offset = "0x579C40", VA = "0x18057B640")]
	private static void ClearTweenArray(Tween[] tweens)
	{
	}

	[Token(Token = "0x600045D")]
	[Address(RVA = "0x57DF20", Offset = "0x57C520", VA = "0x18057DF20")]
	private static void IncreaseCapacities(CapacityIncreaseMode increaseMode)
	{
	}

	[Token(Token = "0x600045E")]
	[Address(RVA = "0x57E280", Offset = "0x57C880", VA = "0x18057E280")]
	private static void ManageOnRewindCallbackWhenAlreadyRewinded(Tween t, bool isPlayBackwardsOrSmoothRewind)
	{
	}
}
