// ==================== AoTTG2 cross-reference ====================
// Type: DG.Tweening.DOTween
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using DG.Tweening.Core;
using DG.Tweening.Core.Enums;
using DG.Tweening.Plugins.Core;
using DG.Tweening.Plugins.Options;
using Il2CppDummyDll;
using UnityEngine;

namespace DG.Tweening;

[Token(Token = "0x200000A")]
public class DOTween
{
	[Token(Token = "0x400000E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static readonly string Version;

	[Token(Token = "0x400000F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	public static bool useSafeMode;

	[Token(Token = "0x4000010")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC")]
	public static SafeModeLogBehaviour safeModeLogBehaviour;

	[Token(Token = "0x4000011")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public static NestedTweenFailureBehaviour nestedTweenFailureBehaviour;

	[Token(Token = "0x4000012")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
	public static bool showUnityEditorReport;

	[Token(Token = "0x4000013")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	public static float timeScale;

	[Token(Token = "0x4000014")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
	public static float unscaledTimeScale;

	[Token(Token = "0x4000015")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	public static bool useSmoothDeltaTime;

	[Token(Token = "0x4000016")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
	public static float maxSmoothUnscaledTime;

	[Token(Token = "0x4000017")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	internal static RewindCallbackMode rewindCallbackMode;

	[Token(Token = "0x4000018")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2C")]
	private static LogBehaviour _logBehaviour;

	[Token(Token = "0x4000019")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	public static Func<LogType, object, bool> onWillLog;

	[Token(Token = "0x400001A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	public static bool drawGizmos;

	[Token(Token = "0x400001B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x39")]
	public static bool debugMode;

	[Token(Token = "0x400001C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x3A")]
	private static bool _fooDebugStoreTargetId;

	[Token(Token = "0x400001D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x3C")]
	public static UpdateType defaultUpdateType;

	[Token(Token = "0x400001E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	public static bool defaultTimeScaleIndependent;

	[Token(Token = "0x400001F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x44")]
	public static AutoPlay defaultAutoPlay;

	[Token(Token = "0x4000020")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	public static bool defaultAutoKill;

	[Token(Token = "0x4000021")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4C")]
	public static LoopType defaultLoopType;

	[Token(Token = "0x4000022")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	public static bool defaultRecyclable;

	[Token(Token = "0x4000023")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x54")]
	public static Ease defaultEaseType;

	[Token(Token = "0x4000024")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	public static float defaultEaseOvershootOrAmplitude;

	[Token(Token = "0x4000025")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x5C")]
	public static float defaultEasePeriod;

	[Token(Token = "0x4000026")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	public static DOTweenComponent instance;

	[Token(Token = "0x4000027")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private static bool _foo_isQuitting;

	[Token(Token = "0x4000028")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x6C")]
	internal static int maxActiveTweenersReached;

	[Token(Token = "0x4000029")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	internal static int maxActiveSequencesReached;

	[Token(Token = "0x400002A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x74")]
	internal static SafeModeReport safeModeReport;

	[Token(Token = "0x400002B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	internal static readonly List<TweenCallback> GizmosDelegates;

	[Token(Token = "0x400002C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	internal static bool initialized;

	[Token(Token = "0x17000001")]
	public static LogBehaviour logBehaviour
	{
		[Token(Token = "0x6000014")]
		[Address(RVA = "0x54C990", Offset = "0x54AF90", VA = "0x18054C990")]
		get
		{
			return default(LogBehaviour);
		}
		[Token(Token = "0x6000015")]
		[Address(RVA = "0x54CB40", Offset = "0x54B140", VA = "0x18054CB40")]
		set
		{
		}
	}

	[Token(Token = "0x17000002")]
	public static int tweenersCapacity
	{
		[Token(Token = "0x6000016")]
		[Address(RVA = "0x54CA30", Offset = "0x54B030", VA = "0x18054CA30")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000017")]
		[Address(RVA = "0x54CC10", Offset = "0x54B210", VA = "0x18054CC10")]
		set
		{
		}
	}

	[Token(Token = "0x17000003")]
	public static int sequencesCapacity
	{
		[Token(Token = "0x6000018")]
		[Address(RVA = "0x54C9E0", Offset = "0x54AFE0", VA = "0x18054C9E0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000019")]
		[Address(RVA = "0x54CBB0", Offset = "0x54B1B0", VA = "0x18054CBB0")]
		set
		{
		}
	}

	[Token(Token = "0x17000004")]
	public static bool debugStoreTargetId
	{
		[Token(Token = "0x600001A")]
		[Address(RVA = "0x54C8A0", Offset = "0x54AEA0", VA = "0x18054C8A0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600001B")]
		[Address(RVA = "0x54CA80", Offset = "0x54B080", VA = "0x18054CA80")]
		set
		{
		}
	}

	[Token(Token = "0x17000005")]
	internal static bool isQuitting
	{
		[Token(Token = "0x600001C")]
		[Address(RVA = "0x54C940", Offset = "0x54AF40", VA = "0x18054C940")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600001D")]
		[Address(RVA = "0x54CAE0", Offset = "0x54B0E0", VA = "0x18054CAE0")]
		set
		{
		}
	}

	[Token(Token = "0x600001E")]
	[Address(RVA = "0x54A5B0", Offset = "0x548BB0", VA = "0x18054A5B0")]
	[RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.BeforeSceneLoad)]
	private static void RuntimeOnLoad()
	{
	}

	[Token(Token = "0x600001F")]
	[Address(RVA = "0x549070", Offset = "0x547670", VA = "0x180549070")]
	public static IDOTweenInit Init([Optional] bool? recycleAllByDefault, [Optional] bool? useSafeMode, [Optional] LogBehaviour? logBehaviour)
	{
		return null;
	}

	[Token(Token = "0x6000020")]
	[Address(RVA = "0x547CE0", Offset = "0x5462E0", VA = "0x180547CE0")]
	private static void AutoInit()
	{
	}

	[Token(Token = "0x6000021")]
	[Address(RVA = "0x548960", Offset = "0x546F60", VA = "0x180548960")]
	private static IDOTweenInit Init(DOTweenSettings settings, bool? recycleAllByDefault, bool? useSafeMode, LogBehaviour? logBehaviour)
	{
		return null;
	}

	[Token(Token = "0x6000022")]
	[Address(RVA = "0x54A840", Offset = "0x548E40", VA = "0x18054A840")]
	public static void SetTweensCapacity(int tweenersCapacity, int sequencesCapacity)
	{
	}

	[Token(Token = "0x6000023")]
	[Address(RVA = "0x5481A0", Offset = "0x5467A0", VA = "0x1805481A0")]
	public static void Clear(bool destroy = false)
	{
	}

	[Token(Token = "0x6000024")]
	[Address(RVA = "0x547EA0", Offset = "0x5464A0", VA = "0x180547EA0")]
	internal static void Clear(bool destroy, bool isApplicationQuitting)
	{
	}

	[Token(Token = "0x6000025")]
	[Address(RVA = "0x547E60", Offset = "0x546460", VA = "0x180547E60")]
	public static void ClearCachedTweens()
	{
	}

	[Token(Token = "0x6000026")]
	[Address(RVA = "0x54C600", Offset = "0x54AC00", VA = "0x18054C600")]
	public static int Validate()
	{
		return default(int);
	}

	[Token(Token = "0x6000027")]
	[Address(RVA = "0x549760", Offset = "0x547D60", VA = "0x180549760")]
	public static void ManualUpdate(float deltaTime, float unscaledDeltaTime)
	{
	}

	[Token(Token = "0x6000028")]
	[Address(RVA = "0x54B8D0", Offset = "0x549ED0", VA = "0x18054B8D0")]
	public static TweenerCore<float, float, FloatOptions> To(DOGetter<float> getter, DOSetter<float> setter, float endValue, float duration)
	{
		return null;
	}

	[Token(Token = "0x6000029")]
	[Address(RVA = "0x54C0C0", Offset = "0x54A6C0", VA = "0x18054C0C0")]
	public static TweenerCore<double, double, NoOptions> To(DOGetter<double> getter, DOSetter<double> setter, double endValue, float duration)
	{
		return null;
	}

	[Token(Token = "0x600002A")]
	[Address(RVA = "0x54BF70", Offset = "0x54A570", VA = "0x18054BF70")]
	public static TweenerCore<int, int, NoOptions> To(DOGetter<int> getter, DOSetter<int> setter, int endValue, float duration)
	{
		return null;
	}

	[Token(Token = "0x600002B")]
	[Address(RVA = "0x54BA20", Offset = "0x54A020", VA = "0x18054BA20")]
	public static TweenerCore<uint, uint, UintOptions> To(DOGetter<uint> getter, DOSetter<uint> setter, uint endValue, float duration)
	{
		return null;
	}

	[Token(Token = "0x600002C")]
	[Address(RVA = "0x54B6D0", Offset = "0x549CD0", VA = "0x18054B6D0")]
	public static TweenerCore<long, long, NoOptions> To(DOGetter<long> getter, DOSetter<long> setter, long endValue, float duration)
	{
		return null;
	}

	[Token(Token = "0x600002D")]
	[Address(RVA = "0x54BD50", Offset = "0x54A350", VA = "0x18054BD50")]
	public static TweenerCore<ulong, ulong, NoOptions> To(DOGetter<ulong> getter, DOSetter<ulong> setter, ulong endValue, float duration)
	{
		return null;
	}

	[Token(Token = "0x600002E")]
	[Address(RVA = "0x54BAC0", Offset = "0x54A0C0", VA = "0x18054BAC0")]
	public static TweenerCore<string, string, StringOptions> To(DOGetter<string> getter, DOSetter<string> setter, string endValue, float duration)
	{
		return null;
	}

	[Token(Token = "0x600002F")]
	[Address(RVA = "0x54BCB0", Offset = "0x54A2B0", VA = "0x18054BCB0")]
	public static TweenerCore<Vector2, Vector2, VectorOptions> To(DOGetter<Vector2> getter, DOSetter<Vector2> setter, Vector2 endValue, float duration)
	{
		return null;
	}

	[Token(Token = "0x6000030")]
	[Address(RVA = "0x54B770", Offset = "0x549D70", VA = "0x18054B770")]
	public static TweenerCore<Vector3, Vector3, VectorOptions> To(DOGetter<Vector3> getter, DOSetter<Vector3> setter, Vector3 endValue, float duration)
	{
		return null;
	}

	[Token(Token = "0x6000031")]
	[Address(RVA = "0x54C160", Offset = "0x54A760", VA = "0x18054C160")]
	public static TweenerCore<Vector4, Vector4, VectorOptions> To(DOGetter<Vector4> getter, DOSetter<Vector4> setter, Vector4 endValue, float duration)
	{
		return null;
	}

	[Token(Token = "0x6000032")]
	[Address(RVA = "0x54B820", Offset = "0x549E20", VA = "0x18054B820")]
	public static TweenerCore<Quaternion, Vector3, QuaternionOptions> To(DOGetter<Quaternion> getter, DOSetter<Quaternion> setter, Vector3 endValue, float duration)
	{
		return null;
	}

	[Token(Token = "0x6000033")]
	[Address(RVA = "0x54B970", Offset = "0x549F70", VA = "0x18054B970")]
	public static TweenerCore<Color, Color, ColorOptions> To(DOGetter<Color> getter, DOSetter<Color> setter, Color endValue, float duration)
	{
		return null;
	}

	[Token(Token = "0x6000034")]
	[Address(RVA = "0x54BC00", Offset = "0x54A200", VA = "0x18054BC00")]
	public static TweenerCore<Rect, Rect, RectOptions> To(DOGetter<Rect> getter, DOSetter<Rect> setter, Rect endValue, float duration)
	{
		return null;
	}

	[Token(Token = "0x6000035")]
	[Address(RVA = "0x54BB60", Offset = "0x54A160", VA = "0x18054BB60")]
	public static Tweener To(DOGetter<RectOffset> getter, DOSetter<RectOffset> setter, RectOffset endValue, float duration)
	{
		return null;
	}

	[Token(Token = "0x6000036")]
	public static TweenerCore<T1, T2, TPlugOptions> To<T1, T2, TPlugOptions>(ABSTweenPlugin<T1, T2, TPlugOptions> plugin, DOGetter<T1> getter, DOSetter<T1> setter, T2 endValue, float duration) where TPlugOptions : struct, IPlugOptions
	{
		return null;
	}

	[Token(Token = "0x6000037")]
	[Address(RVA = "0x54B600", Offset = "0x549C00", VA = "0x18054B600")]
	public static TweenerCore<Vector3, Vector3, VectorOptions> ToAxis(DOGetter<Vector3> getter, DOSetter<Vector3> setter, float endValue, float duration, AxisConstraint axisConstraint = AxisConstraint.X)
	{
		return null;
	}

	[Token(Token = "0x6000038")]
	[Address(RVA = "0x54B320", Offset = "0x549920", VA = "0x18054B320")]
	public static TweenerCore<Color, Color, ColorOptions> ToAlpha(DOGetter<Color> getter, DOSetter<Color> setter, float endValue, float duration)
	{
		return null;
	}

	[Token(Token = "0x6000039")]
	[Address(RVA = "0x54BDF0", Offset = "0x54A3F0", VA = "0x18054BDF0")]
	public static Tweener To(DOSetter<float> setter, float startValue, float endValue, float duration)
	{
		return null;
	}

	[Token(Token = "0x600003A")]
	[Address(RVA = "0x549F20", Offset = "0x548520", VA = "0x180549F20")]
	public static TweenerCore<Vector3, Vector3[], Vector3ArrayOptions> Punch(DOGetter<Vector3> getter, DOSetter<Vector3> setter, Vector3 direction, float duration, int vibrato = 10, float elasticity = 1f)
	{
		return null;
	}

	[Token(Token = "0x600003B")]
	[Address(RVA = "0x54B140", Offset = "0x549740", VA = "0x18054B140")]
	public static TweenerCore<Vector3, Vector3[], Vector3ArrayOptions> Shake(DOGetter<Vector3> getter, DOSetter<Vector3> setter, float duration, float strength = 3f, int vibrato = 10, float randomness = 90f, bool ignoreZAxis = true, bool fadeOut = true, ShakeRandomnessMode randomnessMode = ShakeRandomnessMode.Full)
	{
		return null;
	}

	[Token(Token = "0x600003C")]
	[Address(RVA = "0x54B060", Offset = "0x549660", VA = "0x18054B060")]
	public static TweenerCore<Vector3, Vector3[], Vector3ArrayOptions> Shake(DOGetter<Vector3> getter, DOSetter<Vector3> setter, float duration, Vector3 strength, int vibrato = 10, float randomness = 90f, bool fadeOut = true, ShakeRandomnessMode randomnessMode = ShakeRandomnessMode.Full)
	{
		return null;
	}

	[Token(Token = "0x600003D")]
	[Address(RVA = "0x54A8A0", Offset = "0x548EA0", VA = "0x18054A8A0")]
	private static TweenerCore<Vector3, Vector3[], Vector3ArrayOptions> Shake(DOGetter<Vector3> getter, DOSetter<Vector3> setter, float duration, Vector3 strength, int vibrato, float randomness, bool ignoreZAxis, bool vectorBased, bool fadeOut, ShakeRandomnessMode randomnessMode)
	{
		return null;
	}

	[Token(Token = "0x600003E")]
	[Address(RVA = "0x54B3F0", Offset = "0x5499F0", VA = "0x18054B3F0")]
	public static TweenerCore<Vector3, Vector3[], Vector3ArrayOptions> ToArray(DOGetter<Vector3> getter, DOSetter<Vector3> setter, Vector3[] endValues, float[] durations)
	{
		return null;
	}

	[Token(Token = "0x600003F")]
	[Address(RVA = "0x54C010", Offset = "0x54A610", VA = "0x18054C010")]
	internal static TweenerCore<Color2, Color2, ColorOptions> To(DOGetter<Color2> getter, DOSetter<Color2> setter, Color2 endValue, float duration)
	{
		return null;
	}

	[Token(Token = "0x6000040")]
	[Address(RVA = "0x54A640", Offset = "0x548C40", VA = "0x18054A640")]
	public static Sequence Sequence()
	{
		return null;
	}

	[Token(Token = "0x6000041")]
	[Address(RVA = "0x54A7D0", Offset = "0x548DD0", VA = "0x18054A7D0")]
	public static Sequence Sequence(object target)
	{
		return null;
	}

	[Token(Token = "0x6000042")]
	[Address(RVA = "0x5481F0", Offset = "0x5467F0", VA = "0x1805481F0")]
	public static int CompleteAll(bool withCallbacks = false)
	{
		return default(int);
	}

	[Token(Token = "0x6000043")]
	[Address(RVA = "0x548450", Offset = "0x546A50", VA = "0x180548450")]
	public static int Complete(object targetOrId, bool withCallbacks = false)
	{
		return default(int);
	}

	[Token(Token = "0x6000044")]
	[Address(RVA = "0x548350", Offset = "0x546950", VA = "0x180548350")]
	internal static int CompleteAndReturnKilledTot()
	{
		return default(int);
	}

	[Token(Token = "0x6000045")]
	[Address(RVA = "0x5482D0", Offset = "0x5468D0", VA = "0x1805482D0")]
	internal static int CompleteAndReturnKilledTot(object targetOrId)
	{
		return default(int);
	}

	[Token(Token = "0x6000046")]
	[Address(RVA = "0x5483C0", Offset = "0x5469C0", VA = "0x1805483C0")]
	internal static int CompleteAndReturnKilledTot(object target, object id)
	{
		return default(int);
	}

	[Token(Token = "0x6000047")]
	[Address(RVA = "0x548260", Offset = "0x546860", VA = "0x180548260")]
	internal static int CompleteAndReturnKilledTotExceptFor(params object[] excludeTargetsOrIds)
	{
		return default(int);
	}

	[Token(Token = "0x6000048")]
	[Address(RVA = "0x5484E0", Offset = "0x546AE0", VA = "0x1805484E0")]
	public static int FlipAll()
	{
		return default(int);
	}

	[Token(Token = "0x6000049")]
	[Address(RVA = "0x548550", Offset = "0x546B50", VA = "0x180548550")]
	public static int Flip(object targetOrId)
	{
		return default(int);
	}

	[Token(Token = "0x600004A")]
	[Address(RVA = "0x5485D0", Offset = "0x546BD0", VA = "0x1805485D0")]
	public static int GotoAll(float to, bool andPlay = false)
	{
		return default(int);
	}

	[Token(Token = "0x600004B")]
	[Address(RVA = "0x548650", Offset = "0x546C50", VA = "0x180548650")]
	public static int Goto(object targetOrId, float to, bool andPlay = false)
	{
		return default(int);
	}

	[Token(Token = "0x600004C")]
	[Address(RVA = "0x549460", Offset = "0x547A60", VA = "0x180549460")]
	public static int KillAll(bool complete = false)
	{
		return default(int);
	}

	[Token(Token = "0x600004D")]
	[Address(RVA = "0x5492F0", Offset = "0x5478F0", VA = "0x1805492F0")]
	public static int KillAll(bool complete, params object[] idsOrTargetsToExclude)
	{
		return default(int);
	}

	[Token(Token = "0x600004E")]
	[Address(RVA = "0x549630", Offset = "0x547C30", VA = "0x180549630")]
	public static int Kill(object targetOrId, bool complete = false)
	{
		return default(int);
	}

	[Token(Token = "0x600004F")]
	[Address(RVA = "0x5494E0", Offset = "0x547AE0", VA = "0x1805494E0")]
	public static int Kill(object target, object id, bool complete = false)
	{
		return default(int);
	}

	[Token(Token = "0x6000050")]
	[Address(RVA = "0x549880", Offset = "0x547E80", VA = "0x180549880")]
	public static int PauseAll()
	{
		return default(int);
	}

	[Token(Token = "0x6000051")]
	[Address(RVA = "0x5498F0", Offset = "0x547EF0", VA = "0x1805498F0")]
	public static int Pause(object targetOrId)
	{
		return default(int);
	}

	[Token(Token = "0x6000052")]
	[Address(RVA = "0x5499F0", Offset = "0x547FF0", VA = "0x1805499F0")]
	public static int PlayAll()
	{
		return default(int);
	}

	[Token(Token = "0x6000053")]
	[Address(RVA = "0x549D80", Offset = "0x548380", VA = "0x180549D80")]
	public static int Play(object targetOrId)
	{
		return default(int);
	}

	[Token(Token = "0x6000054")]
	[Address(RVA = "0x549E00", Offset = "0x548400", VA = "0x180549E00")]
	public static int Play(object target, object id)
	{
		return default(int);
	}

	[Token(Token = "0x6000055")]
	[Address(RVA = "0x549A60", Offset = "0x548060", VA = "0x180549A60")]
	public static int PlayBackwardsAll()
	{
		return default(int);
	}

	[Token(Token = "0x6000056")]
	[Address(RVA = "0x549AD0", Offset = "0x5480D0", VA = "0x180549AD0")]
	public static int PlayBackwards(object targetOrId)
	{
		return default(int);
	}

	[Token(Token = "0x6000057")]
	[Address(RVA = "0x549B50", Offset = "0x548150", VA = "0x180549B50")]
	public static int PlayBackwards(object target, object id)
	{
		return default(int);
	}

	[Token(Token = "0x6000058")]
	[Address(RVA = "0x549BF0", Offset = "0x5481F0", VA = "0x180549BF0")]
	public static int PlayForwardAll()
	{
		return default(int);
	}

	[Token(Token = "0x6000059")]
	[Address(RVA = "0x549C60", Offset = "0x548260", VA = "0x180549C60")]
	public static int PlayForward(object targetOrId)
	{
		return default(int);
	}

	[Token(Token = "0x600005A")]
	[Address(RVA = "0x549CE0", Offset = "0x5482E0", VA = "0x180549CE0")]
	public static int PlayForward(object target, object id)
	{
		return default(int);
	}

	[Token(Token = "0x600005B")]
	[Address(RVA = "0x54A2F0", Offset = "0x5488F0", VA = "0x18054A2F0")]
	public static int RestartAll(bool includeDelay = true)
	{
		return default(int);
	}

	[Token(Token = "0x600005C")]
	[Address(RVA = "0x54A410", Offset = "0x548A10", VA = "0x18054A410")]
	public static int Restart(object targetOrId, bool includeDelay = true, float changeDelayTo = -1f)
	{
		return default(int);
	}

	[Token(Token = "0x600005D")]
	[Address(RVA = "0x54A360", Offset = "0x548960", VA = "0x18054A360")]
	public static int Restart(object target, object id, bool includeDelay = true, float changeDelayTo = -1f)
	{
		return default(int);
	}

	[Token(Token = "0x600005E")]
	[Address(RVA = "0x54A4B0", Offset = "0x548AB0", VA = "0x18054A4B0")]
	public static int RewindAll(bool includeDelay = true)
	{
		return default(int);
	}

	[Token(Token = "0x600005F")]
	[Address(RVA = "0x54A520", Offset = "0x548B20", VA = "0x18054A520")]
	public static int Rewind(object targetOrId, bool includeDelay = true)
	{
		return default(int);
	}

	[Token(Token = "0x6000060")]
	[Address(RVA = "0x54B230", Offset = "0x549830", VA = "0x18054B230")]
	public static int SmoothRewindAll()
	{
		return default(int);
	}

	[Token(Token = "0x6000061")]
	[Address(RVA = "0x54B2A0", Offset = "0x5498A0", VA = "0x18054B2A0")]
	public static int SmoothRewind(object targetOrId)
	{
		return default(int);
	}

	[Token(Token = "0x6000062")]
	[Address(RVA = "0x54C210", Offset = "0x54A810", VA = "0x18054C210")]
	public static int TogglePauseAll()
	{
		return default(int);
	}

	[Token(Token = "0x6000063")]
	[Address(RVA = "0x54C280", Offset = "0x54A880", VA = "0x18054C280")]
	public static int TogglePause(object targetOrId)
	{
		return default(int);
	}

	[Token(Token = "0x6000064")]
	[Address(RVA = "0x549260", Offset = "0x547860", VA = "0x180549260")]
	public static bool IsTweening(object targetOrId, bool alsoCheckIfIsPlaying = false)
	{
		return default(bool);
	}

	[Token(Token = "0x6000065")]
	[Address(RVA = "0x54C3A0", Offset = "0x54A9A0", VA = "0x18054C3A0")]
	public static int TotalActiveTweens()
	{
		return default(int);
	}

	[Token(Token = "0x6000066")]
	[Address(RVA = "0x54C350", Offset = "0x54A950", VA = "0x18054C350")]
	public static int TotalActiveTweeners()
	{
		return default(int);
	}

	[Token(Token = "0x6000067")]
	[Address(RVA = "0x54C300", Offset = "0x54A900", VA = "0x18054C300")]
	public static int TotalActiveSequences()
	{
		return default(int);
	}

	[Token(Token = "0x6000068")]
	[Address(RVA = "0x54C3F0", Offset = "0x54A9F0", VA = "0x18054C3F0")]
	public static int TotalPlayingTweens()
	{
		return default(int);
	}

	[Token(Token = "0x6000069")]
	[Address(RVA = "0x54C430", Offset = "0x54AA30", VA = "0x18054C430")]
	public static int TotalTweensById(object id, bool playingOnly = false)
	{
		return default(int);
	}

	[Token(Token = "0x600006A")]
	[Address(RVA = "0x549EA0", Offset = "0x5484A0", VA = "0x180549EA0")]
	public static List<Tween> PlayingTweens([Optional] List<Tween> fillableList)
	{
		return null;
	}

	[Token(Token = "0x600006B")]
	[Address(RVA = "0x549970", Offset = "0x547F70", VA = "0x180549970")]
	public static List<Tween> PausedTweens([Optional] List<Tween> fillableList)
	{
		return null;
	}

	[Token(Token = "0x600006C")]
	[Address(RVA = "0x54C4A0", Offset = "0x54AAA0", VA = "0x18054C4A0")]
	public static List<Tween> TweensById(object id, [Optional][DefaultParameterValue(false)] bool playingOnly, [Optional] List<Tween> fillableList)
	{
		return null;
	}

	[Token(Token = "0x600006D")]
	[Address(RVA = "0x54C560", Offset = "0x54AB60", VA = "0x18054C560")]
	public static List<Tween> TweensByTarget(object target, [Optional][DefaultParameterValue(false)] bool playingOnly, [Optional] List<Tween> fillableList)
	{
		return null;
	}

	[Token(Token = "0x600006E")]
	[Address(RVA = "0x5486F0", Offset = "0x546CF0", VA = "0x1805486F0")]
	private static void InitCheck()
	{
	}

	[Token(Token = "0x600006F")]
	private static TweenerCore<T1, T2, TPlugOptions> ApplyTo<T1, T2, TPlugOptions>(DOGetter<T1> getter, DOSetter<T1> setter, T2 endValue, float duration, [Optional] ABSTweenPlugin<T1, T2, TPlugOptions> plugin) where TPlugOptions : struct, IPlugOptions
	{
		return null;
	}

	[Token(Token = "0x6000070")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public DOTween()
	{
	}
}
