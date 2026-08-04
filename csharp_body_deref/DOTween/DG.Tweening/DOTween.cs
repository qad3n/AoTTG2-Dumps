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
		[Address(RVA = "0x23546E0", Offset = "0x23546E0", VA = "0x23546E0")]
		get
		{
			return default(LogBehaviour);
		}
		[Token(Token = "0x6000015")]
		[Address(RVA = "0x2354750", Offset = "0x2354750", VA = "0x2354750")]
		set
		{
		}
	}

	[Token(Token = "0x17000002")]
	public static int tweenersCapacity
	{
		[Token(Token = "0x6000016")]
		[Address(RVA = "0x23547B0", Offset = "0x23547B0", VA = "0x23547B0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000017")]
		[Address(RVA = "0x2354820", Offset = "0x2354820", VA = "0x2354820")]
		set
		{
		}
	}

	[Token(Token = "0x17000003")]
	public static int sequencesCapacity
	{
		[Token(Token = "0x6000018")]
		[Address(RVA = "0x2354880", Offset = "0x2354880", VA = "0x2354880")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000019")]
		[Address(RVA = "0x23548F0", Offset = "0x23548F0", VA = "0x23548F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000004")]
	public static bool debugStoreTargetId
	{
		[Token(Token = "0x600001A")]
		[Address(RVA = "0x2354950", Offset = "0x2354950", VA = "0x2354950")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600001B")]
		[Address(RVA = "0x2354A10", Offset = "0x2354A10", VA = "0x2354A10")]
		set
		{
		}
	}

	[Token(Token = "0x17000005")]
	internal static bool isQuitting
	{
		[Token(Token = "0x600001C")]
		[Address(RVA = "0x2354A60", Offset = "0x2354A60", VA = "0x2354A60")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600001D")]
		[Address(RVA = "0x2354AD0", Offset = "0x2354AD0", VA = "0x2354AD0")]
		set
		{
		}
	}

	[Token(Token = "0x600001E")]
	[Address(RVA = "0x2354B20", Offset = "0x2354B20", VA = "0x2354B20")]
	[RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.BeforeSceneLoad)]
	private static void RuntimeOnLoad()
	{
	}

	[Token(Token = "0x600001F")]
	[Address(RVA = "0x2354BD0", Offset = "0x2354BD0", VA = "0x2354BD0")]
	public static IDOTweenInit Init([Optional] bool? recycleAllByDefault, [Optional] bool? useSafeMode, [Optional] LogBehaviour? logBehaviour)
	{
		return null;
	}

	[Token(Token = "0x6000020")]
	[Address(RVA = "0x23555E0", Offset = "0x23555E0", VA = "0x23555E0")]
	private static void AutoInit()
	{
	}

	[Token(Token = "0x6000021")]
	[Address(RVA = "0x2354DC0", Offset = "0x2354DC0", VA = "0x2354DC0")]
	private static IDOTweenInit Init(DOTweenSettings settings, bool? recycleAllByDefault, bool? useSafeMode, LogBehaviour? logBehaviour)
	{
		return null;
	}

	[Token(Token = "0x6000022")]
	[Address(RVA = "0x2355790", Offset = "0x2355790", VA = "0x2355790")]
	public static void SetTweensCapacity(int tweenersCapacity, int sequencesCapacity)
	{
	}

	[Token(Token = "0x6000023")]
	[Address(RVA = "0x23557E0", Offset = "0x23557E0", VA = "0x23557E0")]
	public static void Clear(bool destroy = false)
	{
	}

	[Token(Token = "0x6000024")]
	[Address(RVA = "0x2355840", Offset = "0x2355840", VA = "0x2355840")]
	internal static void Clear(bool destroy, bool isApplicationQuitting)
	{
	}

	[Token(Token = "0x6000025")]
	[Address(RVA = "0x23559F0", Offset = "0x23559F0", VA = "0x23559F0")]
	public static void ClearCachedTweens()
	{
	}

	[Token(Token = "0x6000026")]
	[Address(RVA = "0x2355A50", Offset = "0x2355A50", VA = "0x2355A50")]
	public static int Validate()
	{
		return default(int);
	}

	[Token(Token = "0x6000027")]
	[Address(RVA = "0x2355AB0", Offset = "0x2355AB0", VA = "0x2355AB0")]
	public static void ManualUpdate(float deltaTime, float unscaledDeltaTime)
	{
	}

	[Token(Token = "0x6000028")]
	[Address(RVA = "0x2355D40", Offset = "0x2355D40", VA = "0x2355D40")]
	public static TweenerCore<float, float, FloatOptions> To(DOGetter<float> getter, DOSetter<float> setter, float endValue, float duration)
	{
		return null;
	}

	[Token(Token = "0x6000029")]
	[Address(RVA = "0x2355DE0", Offset = "0x2355DE0", VA = "0x2355DE0")]
	public static TweenerCore<double, double, NoOptions> To(DOGetter<double> getter, DOSetter<double> setter, double endValue, float duration)
	{
		return null;
	}

	[Token(Token = "0x600002A")]
	[Address(RVA = "0x2355E80", Offset = "0x2355E80", VA = "0x2355E80")]
	public static TweenerCore<int, int, NoOptions> To(DOGetter<int> getter, DOSetter<int> setter, int endValue, float duration)
	{
		return null;
	}

	[Token(Token = "0x600002B")]
	[Address(RVA = "0x2355F10", Offset = "0x2355F10", VA = "0x2355F10")]
	public static TweenerCore<uint, uint, UintOptions> To(DOGetter<uint> getter, DOSetter<uint> setter, uint endValue, float duration)
	{
		return null;
	}

	[Token(Token = "0x600002C")]
	[Address(RVA = "0x2355FA0", Offset = "0x2355FA0", VA = "0x2355FA0")]
	public static TweenerCore<long, long, NoOptions> To(DOGetter<long> getter, DOSetter<long> setter, long endValue, float duration)
	{
		return null;
	}

	[Token(Token = "0x600002D")]
	[Address(RVA = "0x2356030", Offset = "0x2356030", VA = "0x2356030")]
	public static TweenerCore<ulong, ulong, NoOptions> To(DOGetter<ulong> getter, DOSetter<ulong> setter, ulong endValue, float duration)
	{
		return null;
	}

	[Token(Token = "0x600002E")]
	[Address(RVA = "0x23560C0", Offset = "0x23560C0", VA = "0x23560C0")]
	public static TweenerCore<string, string, StringOptions> To(DOGetter<string> getter, DOSetter<string> setter, string endValue, float duration)
	{
		return null;
	}

	[Token(Token = "0x600002F")]
	[Address(RVA = "0x2356150", Offset = "0x2356150", VA = "0x2356150")]
	public static TweenerCore<Vector2, Vector2, VectorOptions> To(DOGetter<Vector2> getter, DOSetter<Vector2> setter, Vector2 endValue, float duration)
	{
		return null;
	}

	[Token(Token = "0x6000030")]
	[Address(RVA = "0x23561F0", Offset = "0x23561F0", VA = "0x23561F0")]
	public static TweenerCore<Vector3, Vector3, VectorOptions> To(DOGetter<Vector3> getter, DOSetter<Vector3> setter, Vector3 endValue, float duration)
	{
		return null;
	}

	[Token(Token = "0x6000031")]
	[Address(RVA = "0x23562A0", Offset = "0x23562A0", VA = "0x23562A0")]
	public static TweenerCore<Vector4, Vector4, VectorOptions> To(DOGetter<Vector4> getter, DOSetter<Vector4> setter, Vector4 endValue, float duration)
	{
		return null;
	}

	[Token(Token = "0x6000032")]
	[Address(RVA = "0x2356350", Offset = "0x2356350", VA = "0x2356350")]
	public static TweenerCore<Quaternion, Vector3, QuaternionOptions> To(DOGetter<Quaternion> getter, DOSetter<Quaternion> setter, Vector3 endValue, float duration)
	{
		return null;
	}

	[Token(Token = "0x6000033")]
	[Address(RVA = "0x2356400", Offset = "0x2356400", VA = "0x2356400")]
	public static TweenerCore<Color, Color, ColorOptions> To(DOGetter<Color> getter, DOSetter<Color> setter, Color endValue, float duration)
	{
		return null;
	}

	[Token(Token = "0x6000034")]
	[Address(RVA = "0x23564B0", Offset = "0x23564B0", VA = "0x23564B0")]
	public static TweenerCore<Rect, Rect, RectOptions> To(DOGetter<Rect> getter, DOSetter<Rect> setter, Rect endValue, float duration)
	{
		return null;
	}

	[Token(Token = "0x6000035")]
	[Address(RVA = "0x2356560", Offset = "0x2356560", VA = "0x2356560")]
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
	[Address(RVA = "0x23565F0", Offset = "0x23565F0", VA = "0x23565F0")]
	public static TweenerCore<Vector3, Vector3, VectorOptions> ToAxis(DOGetter<Vector3> getter, DOSetter<Vector3> setter, float endValue, float duration, AxisConstraint axisConstraint = AxisConstraint.X)
	{
		return null;
	}

	[Token(Token = "0x6000038")]
	[Address(RVA = "0x23566C0", Offset = "0x23566C0", VA = "0x23566C0")]
	public static TweenerCore<Color, Color, ColorOptions> ToAlpha(DOGetter<Color> getter, DOSetter<Color> setter, float endValue, float duration)
	{
		return null;
	}

	[Token(Token = "0x6000039")]
	[Address(RVA = "0x23567B0", Offset = "0x23567B0", VA = "0x23567B0")]
	public static Tweener To(DOSetter<float> setter, float startValue, float endValue, float duration)
	{
		return null;
	}

	[Token(Token = "0x600003A")]
	[Address(RVA = "0x2356990", Offset = "0x2356990", VA = "0x2356990")]
	public static TweenerCore<Vector3, Vector3[], Vector3ArrayOptions> Punch(DOGetter<Vector3> getter, DOSetter<Vector3> setter, Vector3 direction, float duration, int vibrato = 10, float elasticity = 1f)
	{
		return null;
	}

	[Token(Token = "0x600003B")]
	[Address(RVA = "0x23571F0", Offset = "0x23571F0", VA = "0x23571F0")]
	public static TweenerCore<Vector3, Vector3[], Vector3ArrayOptions> Shake(DOGetter<Vector3> getter, DOSetter<Vector3> setter, float duration, float strength = 3f, int vibrato = 10, float randomness = 90f, bool ignoreZAxis = true, bool fadeOut = true, ShakeRandomnessMode randomnessMode = ShakeRandomnessMode.Full)
	{
		return null;
	}

	[Token(Token = "0x600003C")]
	[Address(RVA = "0x2357EF0", Offset = "0x2357EF0", VA = "0x2357EF0")]
	public static TweenerCore<Vector3, Vector3[], Vector3ArrayOptions> Shake(DOGetter<Vector3> getter, DOSetter<Vector3> setter, float duration, Vector3 strength, int vibrato = 10, float randomness = 90f, bool fadeOut = true, ShakeRandomnessMode randomnessMode = ShakeRandomnessMode.Full)
	{
		return null;
	}

	[Token(Token = "0x600003D")]
	[Address(RVA = "0x23572D0", Offset = "0x23572D0", VA = "0x23572D0")]
	private static TweenerCore<Vector3, Vector3[], Vector3ArrayOptions> Shake(DOGetter<Vector3> getter, DOSetter<Vector3> setter, float duration, Vector3 strength, int vibrato, float randomness, bool ignoreZAxis, bool vectorBased, bool fadeOut, ShakeRandomnessMode randomnessMode)
	{
		return null;
	}

	[Token(Token = "0x600003E")]
	[Address(RVA = "0x2356FA0", Offset = "0x2356FA0", VA = "0x2356FA0")]
	public static TweenerCore<Vector3, Vector3[], Vector3ArrayOptions> ToArray(DOGetter<Vector3> getter, DOSetter<Vector3> setter, Vector3[] endValues, float[] durations)
	{
		return null;
	}

	[Token(Token = "0x600003F")]
	[Address(RVA = "0x2357FD0", Offset = "0x2357FD0", VA = "0x2357FD0")]
	internal static TweenerCore<Color2, Color2, ColorOptions> To(DOGetter<Color2> getter, DOSetter<Color2> setter, Color2 endValue, float duration)
	{
		return null;
	}

	[Token(Token = "0x6000040")]
	[Address(RVA = "0x2358090", Offset = "0x2358090", VA = "0x2358090")]
	public static Sequence Sequence()
	{
		return null;
	}

	[Token(Token = "0x6000041")]
	[Address(RVA = "0x2358220", Offset = "0x2358220", VA = "0x2358220")]
	public static Sequence Sequence(object target)
	{
		return null;
	}

	[Token(Token = "0x6000042")]
	[Address(RVA = "0x2358280", Offset = "0x2358280", VA = "0x2358280")]
	public static int CompleteAll(bool withCallbacks = false)
	{
		return default(int);
	}

	[Token(Token = "0x6000043")]
	[Address(RVA = "0x23582F0", Offset = "0x23582F0", VA = "0x23582F0")]
	public static int Complete(object targetOrId, bool withCallbacks = false)
	{
		return default(int);
	}

	[Token(Token = "0x6000044")]
	[Address(RVA = "0x2358370", Offset = "0x2358370", VA = "0x2358370")]
	internal static int CompleteAndReturnKilledTot()
	{
		return default(int);
	}

	[Token(Token = "0x6000045")]
	[Address(RVA = "0x23583D0", Offset = "0x23583D0", VA = "0x23583D0")]
	internal static int CompleteAndReturnKilledTot(object targetOrId)
	{
		return default(int);
	}

	[Token(Token = "0x6000046")]
	[Address(RVA = "0x2358450", Offset = "0x2358450", VA = "0x2358450")]
	internal static int CompleteAndReturnKilledTot(object target, object id)
	{
		return default(int);
	}

	[Token(Token = "0x6000047")]
	[Address(RVA = "0x23584E0", Offset = "0x23584E0", VA = "0x23584E0")]
	internal static int CompleteAndReturnKilledTotExceptFor(params object[] excludeTargetsOrIds)
	{
		return default(int);
	}

	[Token(Token = "0x6000048")]
	[Address(RVA = "0x2358550", Offset = "0x2358550", VA = "0x2358550")]
	public static int FlipAll()
	{
		return default(int);
	}

	[Token(Token = "0x6000049")]
	[Address(RVA = "0x23585B0", Offset = "0x23585B0", VA = "0x23585B0")]
	public static int Flip(object targetOrId)
	{
		return default(int);
	}

	[Token(Token = "0x600004A")]
	[Address(RVA = "0x2358630", Offset = "0x2358630", VA = "0x2358630")]
	public static int GotoAll(float to, bool andPlay = false)
	{
		return default(int);
	}

	[Token(Token = "0x600004B")]
	[Address(RVA = "0x23586B0", Offset = "0x23586B0", VA = "0x23586B0")]
	public static int Goto(object targetOrId, float to, bool andPlay = false)
	{
		return default(int);
	}

	[Token(Token = "0x600004C")]
	[Address(RVA = "0x2358740", Offset = "0x2358740", VA = "0x2358740")]
	public static int KillAll(bool complete = false)
	{
		return default(int);
	}

	[Token(Token = "0x600004D")]
	[Address(RVA = "0x2358850", Offset = "0x2358850", VA = "0x2358850")]
	public static int KillAll(bool complete, params object[] idsOrTargetsToExclude)
	{
		return default(int);
	}

	[Token(Token = "0x600004E")]
	[Address(RVA = "0x2358A60", Offset = "0x2358A60", VA = "0x2358A60")]
	public static int Kill(object targetOrId, bool complete = false)
	{
		return default(int);
	}

	[Token(Token = "0x600004F")]
	[Address(RVA = "0x2358BA0", Offset = "0x2358BA0", VA = "0x2358BA0")]
	public static int Kill(object target, object id, bool complete = false)
	{
		return default(int);
	}

	[Token(Token = "0x6000050")]
	[Address(RVA = "0x2358CF0", Offset = "0x2358CF0", VA = "0x2358CF0")]
	public static int PauseAll()
	{
		return default(int);
	}

	[Token(Token = "0x6000051")]
	[Address(RVA = "0x2358D50", Offset = "0x2358D50", VA = "0x2358D50")]
	public static int Pause(object targetOrId)
	{
		return default(int);
	}

	[Token(Token = "0x6000052")]
	[Address(RVA = "0x2358DD0", Offset = "0x2358DD0", VA = "0x2358DD0")]
	public static int PlayAll()
	{
		return default(int);
	}

	[Token(Token = "0x6000053")]
	[Address(RVA = "0x2358E30", Offset = "0x2358E30", VA = "0x2358E30")]
	public static int Play(object targetOrId)
	{
		return default(int);
	}

	[Token(Token = "0x6000054")]
	[Address(RVA = "0x2358EB0", Offset = "0x2358EB0", VA = "0x2358EB0")]
	public static int Play(object target, object id)
	{
		return default(int);
	}

	[Token(Token = "0x6000055")]
	[Address(RVA = "0x2358F30", Offset = "0x2358F30", VA = "0x2358F30")]
	public static int PlayBackwardsAll()
	{
		return default(int);
	}

	[Token(Token = "0x6000056")]
	[Address(RVA = "0x2358F90", Offset = "0x2358F90", VA = "0x2358F90")]
	public static int PlayBackwards(object targetOrId)
	{
		return default(int);
	}

	[Token(Token = "0x6000057")]
	[Address(RVA = "0x2359010", Offset = "0x2359010", VA = "0x2359010")]
	public static int PlayBackwards(object target, object id)
	{
		return default(int);
	}

	[Token(Token = "0x6000058")]
	[Address(RVA = "0x2359090", Offset = "0x2359090", VA = "0x2359090")]
	public static int PlayForwardAll()
	{
		return default(int);
	}

	[Token(Token = "0x6000059")]
	[Address(RVA = "0x23590F0", Offset = "0x23590F0", VA = "0x23590F0")]
	public static int PlayForward(object targetOrId)
	{
		return default(int);
	}

	[Token(Token = "0x600005A")]
	[Address(RVA = "0x2359170", Offset = "0x2359170", VA = "0x2359170")]
	public static int PlayForward(object target, object id)
	{
		return default(int);
	}

	[Token(Token = "0x600005B")]
	[Address(RVA = "0x23591F0", Offset = "0x23591F0", VA = "0x23591F0")]
	public static int RestartAll(bool includeDelay = true)
	{
		return default(int);
	}

	[Token(Token = "0x600005C")]
	[Address(RVA = "0x2359260", Offset = "0x2359260", VA = "0x2359260")]
	public static int Restart(object targetOrId, bool includeDelay = true, float changeDelayTo = -1f)
	{
		return default(int);
	}

	[Token(Token = "0x600005D")]
	[Address(RVA = "0x23592F0", Offset = "0x23592F0", VA = "0x23592F0")]
	public static int Restart(object target, object id, bool includeDelay = true, float changeDelayTo = -1f)
	{
		return default(int);
	}

	[Token(Token = "0x600005E")]
	[Address(RVA = "0x2359390", Offset = "0x2359390", VA = "0x2359390")]
	public static int RewindAll(bool includeDelay = true)
	{
		return default(int);
	}

	[Token(Token = "0x600005F")]
	[Address(RVA = "0x2359400", Offset = "0x2359400", VA = "0x2359400")]
	public static int Rewind(object targetOrId, bool includeDelay = true)
	{
		return default(int);
	}

	[Token(Token = "0x6000060")]
	[Address(RVA = "0x2359480", Offset = "0x2359480", VA = "0x2359480")]
	public static int SmoothRewindAll()
	{
		return default(int);
	}

	[Token(Token = "0x6000061")]
	[Address(RVA = "0x23594E0", Offset = "0x23594E0", VA = "0x23594E0")]
	public static int SmoothRewind(object targetOrId)
	{
		return default(int);
	}

	[Token(Token = "0x6000062")]
	[Address(RVA = "0x2359560", Offset = "0x2359560", VA = "0x2359560")]
	public static int TogglePauseAll()
	{
		return default(int);
	}

	[Token(Token = "0x6000063")]
	[Address(RVA = "0x23595C0", Offset = "0x23595C0", VA = "0x23595C0")]
	public static int TogglePause(object targetOrId)
	{
		return default(int);
	}

	[Token(Token = "0x6000064")]
	[Address(RVA = "0x2359640", Offset = "0x2359640", VA = "0x2359640")]
	public static bool IsTweening(object targetOrId, bool alsoCheckIfIsPlaying = false)
	{
		return default(bool);
	}

	[Token(Token = "0x6000065")]
	[Address(RVA = "0x23596B0", Offset = "0x23596B0", VA = "0x23596B0")]
	public static int TotalActiveTweens()
	{
		return default(int);
	}

	[Token(Token = "0x6000066")]
	[Address(RVA = "0x2359720", Offset = "0x2359720", VA = "0x2359720")]
	public static int TotalActiveTweeners()
	{
		return default(int);
	}

	[Token(Token = "0x6000067")]
	[Address(RVA = "0x2359790", Offset = "0x2359790", VA = "0x2359790")]
	public static int TotalActiveSequences()
	{
		return default(int);
	}

	[Token(Token = "0x6000068")]
	[Address(RVA = "0x2359800", Offset = "0x2359800", VA = "0x2359800")]
	public static int TotalPlayingTweens()
	{
		return default(int);
	}

	[Token(Token = "0x6000069")]
	[Address(RVA = "0x2359860", Offset = "0x2359860", VA = "0x2359860")]
	public static int TotalTweensById(object id, bool playingOnly = false)
	{
		return default(int);
	}

	[Token(Token = "0x600006A")]
	[Address(RVA = "0x23598C0", Offset = "0x23598C0", VA = "0x23598C0")]
	public static List<Tween> PlayingTweens([Optional] List<Tween> fillableList)
	{
		return null;
	}

	[Token(Token = "0x600006B")]
	[Address(RVA = "0x2359940", Offset = "0x2359940", VA = "0x2359940")]
	public static List<Tween> PausedTweens([Optional] List<Tween> fillableList)
	{
		return null;
	}

	[Token(Token = "0x600006C")]
	[Address(RVA = "0x23599C0", Offset = "0x23599C0", VA = "0x23599C0")]
	public static List<Tween> TweensById(object id, [Optional][DefaultParameterValue(false)] bool playingOnly, [Optional] List<Tween> fillableList)
	{
		return null;
	}

	[Token(Token = "0x600006D")]
	[Address(RVA = "0x2359A60", Offset = "0x2359A60", VA = "0x2359A60")]
	public static List<Tween> TweensByTarget(object target, [Optional][DefaultParameterValue(false)] bool playingOnly, [Optional] List<Tween> fillableList)
	{
		return null;
	}

	[Token(Token = "0x600006E")]
	[Address(RVA = "0x2355BD0", Offset = "0x2355BD0", VA = "0x2355BD0")]
	private static void InitCheck()
	{
	}

	[Token(Token = "0x600006F")]
	private static TweenerCore<T1, T2, TPlugOptions> ApplyTo<T1, T2, TPlugOptions>(DOGetter<T1> getter, DOSetter<T1> setter, T2 endValue, float duration, [Optional] ABSTweenPlugin<T1, T2, TPlugOptions> plugin) where TPlugOptions : struct, IPlugOptions
	{
		return null;
	}

	[Token(Token = "0x6000070")]
	[Address(RVA = "0x2359AF0", Offset = "0x2359AF0", VA = "0x2359AF0")]
	public DOTween()
	{
	}
}
