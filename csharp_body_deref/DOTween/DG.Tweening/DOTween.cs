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
		[Address(RVA = "0x22EDE00", Offset = "0x22EDE00", VA = "0x22EDE00")]
		get
		{
			return default(LogBehaviour);
		}
		[Token(Token = "0x6000015")]
		[Address(RVA = "0x22EDE70", Offset = "0x22EDE70", VA = "0x22EDE70")]
		set
		{
		}
	}

	[Token(Token = "0x17000002")]
	public static int tweenersCapacity
	{
		[Token(Token = "0x6000016")]
		[Address(RVA = "0x22EDED0", Offset = "0x22EDED0", VA = "0x22EDED0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000017")]
		[Address(RVA = "0x22EDF40", Offset = "0x22EDF40", VA = "0x22EDF40")]
		set
		{
		}
	}

	[Token(Token = "0x17000003")]
	public static int sequencesCapacity
	{
		[Token(Token = "0x6000018")]
		[Address(RVA = "0x22EDFA0", Offset = "0x22EDFA0", VA = "0x22EDFA0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000019")]
		[Address(RVA = "0x22EE010", Offset = "0x22EE010", VA = "0x22EE010")]
		set
		{
		}
	}

	[Token(Token = "0x17000004")]
	public static bool debugStoreTargetId
	{
		[Token(Token = "0x600001A")]
		[Address(RVA = "0x22EE070", Offset = "0x22EE070", VA = "0x22EE070")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600001B")]
		[Address(RVA = "0x22EE130", Offset = "0x22EE130", VA = "0x22EE130")]
		set
		{
		}
	}

	[Token(Token = "0x17000005")]
	internal static bool isQuitting
	{
		[Token(Token = "0x600001C")]
		[Address(RVA = "0x22EE180", Offset = "0x22EE180", VA = "0x22EE180")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600001D")]
		[Address(RVA = "0x22EE1F0", Offset = "0x22EE1F0", VA = "0x22EE1F0")]
		set
		{
		}
	}

	[Token(Token = "0x600001E")]
	[Address(RVA = "0x22EE240", Offset = "0x22EE240", VA = "0x22EE240")]
	[RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.BeforeSceneLoad)]
	private static void RuntimeOnLoad()
	{
	}

	[Token(Token = "0x600001F")]
	[Address(RVA = "0x22EE2F0", Offset = "0x22EE2F0", VA = "0x22EE2F0")]
	public static IDOTweenInit Init([Optional] bool? recycleAllByDefault, [Optional] bool? useSafeMode, [Optional] LogBehaviour? logBehaviour)
	{
		return null;
	}

	[Token(Token = "0x6000020")]
	[Address(RVA = "0x22EED00", Offset = "0x22EED00", VA = "0x22EED00")]
	private static void AutoInit()
	{
	}

	[Token(Token = "0x6000021")]
	[Address(RVA = "0x22EE4E0", Offset = "0x22EE4E0", VA = "0x22EE4E0")]
	private static IDOTweenInit Init(DOTweenSettings settings, bool? recycleAllByDefault, bool? useSafeMode, LogBehaviour? logBehaviour)
	{
		return null;
	}

	[Token(Token = "0x6000022")]
	[Address(RVA = "0x22EEEB0", Offset = "0x22EEEB0", VA = "0x22EEEB0")]
	public static void SetTweensCapacity(int tweenersCapacity, int sequencesCapacity)
	{
	}

	[Token(Token = "0x6000023")]
	[Address(RVA = "0x22EEF00", Offset = "0x22EEF00", VA = "0x22EEF00")]
	public static void Clear(bool destroy = false)
	{
	}

	[Token(Token = "0x6000024")]
	[Address(RVA = "0x22EEF60", Offset = "0x22EEF60", VA = "0x22EEF60")]
	internal static void Clear(bool destroy, bool isApplicationQuitting)
	{
	}

	[Token(Token = "0x6000025")]
	[Address(RVA = "0x22EF110", Offset = "0x22EF110", VA = "0x22EF110")]
	public static void ClearCachedTweens()
	{
	}

	[Token(Token = "0x6000026")]
	[Address(RVA = "0x22EF170", Offset = "0x22EF170", VA = "0x22EF170")]
	public static int Validate()
	{
		return default(int);
	}

	[Token(Token = "0x6000027")]
	[Address(RVA = "0x22EF1D0", Offset = "0x22EF1D0", VA = "0x22EF1D0")]
	public static void ManualUpdate(float deltaTime, float unscaledDeltaTime)
	{
	}

	[Token(Token = "0x6000028")]
	[Address(RVA = "0x22EF460", Offset = "0x22EF460", VA = "0x22EF460")]
	public static TweenerCore<float, float, FloatOptions> To(DOGetter<float> getter, DOSetter<float> setter, float endValue, float duration)
	{
		return null;
	}

	[Token(Token = "0x6000029")]
	[Address(RVA = "0x22EF500", Offset = "0x22EF500", VA = "0x22EF500")]
	public static TweenerCore<double, double, NoOptions> To(DOGetter<double> getter, DOSetter<double> setter, double endValue, float duration)
	{
		return null;
	}

	[Token(Token = "0x600002A")]
	[Address(RVA = "0x22EF5A0", Offset = "0x22EF5A0", VA = "0x22EF5A0")]
	public static TweenerCore<int, int, NoOptions> To(DOGetter<int> getter, DOSetter<int> setter, int endValue, float duration)
	{
		return null;
	}

	[Token(Token = "0x600002B")]
	[Address(RVA = "0x22EF630", Offset = "0x22EF630", VA = "0x22EF630")]
	public static TweenerCore<uint, uint, UintOptions> To(DOGetter<uint> getter, DOSetter<uint> setter, uint endValue, float duration)
	{
		return null;
	}

	[Token(Token = "0x600002C")]
	[Address(RVA = "0x22EF6C0", Offset = "0x22EF6C0", VA = "0x22EF6C0")]
	public static TweenerCore<long, long, NoOptions> To(DOGetter<long> getter, DOSetter<long> setter, long endValue, float duration)
	{
		return null;
	}

	[Token(Token = "0x600002D")]
	[Address(RVA = "0x22EF750", Offset = "0x22EF750", VA = "0x22EF750")]
	public static TweenerCore<ulong, ulong, NoOptions> To(DOGetter<ulong> getter, DOSetter<ulong> setter, ulong endValue, float duration)
	{
		return null;
	}

	[Token(Token = "0x600002E")]
	[Address(RVA = "0x22EF7E0", Offset = "0x22EF7E0", VA = "0x22EF7E0")]
	public static TweenerCore<string, string, StringOptions> To(DOGetter<string> getter, DOSetter<string> setter, string endValue, float duration)
	{
		return null;
	}

	[Token(Token = "0x600002F")]
	[Address(RVA = "0x22EF870", Offset = "0x22EF870", VA = "0x22EF870")]
	public static TweenerCore<Vector2, Vector2, VectorOptions> To(DOGetter<Vector2> getter, DOSetter<Vector2> setter, Vector2 endValue, float duration)
	{
		return null;
	}

	[Token(Token = "0x6000030")]
	[Address(RVA = "0x22EF910", Offset = "0x22EF910", VA = "0x22EF910")]
	public static TweenerCore<Vector3, Vector3, VectorOptions> To(DOGetter<Vector3> getter, DOSetter<Vector3> setter, Vector3 endValue, float duration)
	{
		return null;
	}

	[Token(Token = "0x6000031")]
	[Address(RVA = "0x22EF9C0", Offset = "0x22EF9C0", VA = "0x22EF9C0")]
	public static TweenerCore<Vector4, Vector4, VectorOptions> To(DOGetter<Vector4> getter, DOSetter<Vector4> setter, Vector4 endValue, float duration)
	{
		return null;
	}

	[Token(Token = "0x6000032")]
	[Address(RVA = "0x22EFA70", Offset = "0x22EFA70", VA = "0x22EFA70")]
	public static TweenerCore<Quaternion, Vector3, QuaternionOptions> To(DOGetter<Quaternion> getter, DOSetter<Quaternion> setter, Vector3 endValue, float duration)
	{
		return null;
	}

	[Token(Token = "0x6000033")]
	[Address(RVA = "0x22EFB20", Offset = "0x22EFB20", VA = "0x22EFB20")]
	public static TweenerCore<Color, Color, ColorOptions> To(DOGetter<Color> getter, DOSetter<Color> setter, Color endValue, float duration)
	{
		return null;
	}

	[Token(Token = "0x6000034")]
	[Address(RVA = "0x22EFBD0", Offset = "0x22EFBD0", VA = "0x22EFBD0")]
	public static TweenerCore<Rect, Rect, RectOptions> To(DOGetter<Rect> getter, DOSetter<Rect> setter, Rect endValue, float duration)
	{
		return null;
	}

	[Token(Token = "0x6000035")]
	[Address(RVA = "0x22EFC80", Offset = "0x22EFC80", VA = "0x22EFC80")]
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
	[Address(RVA = "0x22EFD10", Offset = "0x22EFD10", VA = "0x22EFD10")]
	public static TweenerCore<Vector3, Vector3, VectorOptions> ToAxis(DOGetter<Vector3> getter, DOSetter<Vector3> setter, float endValue, float duration, AxisConstraint axisConstraint = AxisConstraint.X)
	{
		return null;
	}

	[Token(Token = "0x6000038")]
	[Address(RVA = "0x22EFDE0", Offset = "0x22EFDE0", VA = "0x22EFDE0")]
	public static TweenerCore<Color, Color, ColorOptions> ToAlpha(DOGetter<Color> getter, DOSetter<Color> setter, float endValue, float duration)
	{
		return null;
	}

	[Token(Token = "0x6000039")]
	[Address(RVA = "0x22EFED0", Offset = "0x22EFED0", VA = "0x22EFED0")]
	public static Tweener To(DOSetter<float> setter, float startValue, float endValue, float duration)
	{
		return null;
	}

	[Token(Token = "0x600003A")]
	[Address(RVA = "0x22F00B0", Offset = "0x22F00B0", VA = "0x22F00B0")]
	public static TweenerCore<Vector3, Vector3[], Vector3ArrayOptions> Punch(DOGetter<Vector3> getter, DOSetter<Vector3> setter, Vector3 direction, float duration, int vibrato = 10, float elasticity = 1f)
	{
		return null;
	}

	[Token(Token = "0x600003B")]
	[Address(RVA = "0x22F0910", Offset = "0x22F0910", VA = "0x22F0910")]
	public static TweenerCore<Vector3, Vector3[], Vector3ArrayOptions> Shake(DOGetter<Vector3> getter, DOSetter<Vector3> setter, float duration, float strength = 3f, int vibrato = 10, float randomness = 90f, bool ignoreZAxis = true, bool fadeOut = true, ShakeRandomnessMode randomnessMode = ShakeRandomnessMode.Full)
	{
		return null;
	}

	[Token(Token = "0x600003C")]
	[Address(RVA = "0x22F1610", Offset = "0x22F1610", VA = "0x22F1610")]
	public static TweenerCore<Vector3, Vector3[], Vector3ArrayOptions> Shake(DOGetter<Vector3> getter, DOSetter<Vector3> setter, float duration, Vector3 strength, int vibrato = 10, float randomness = 90f, bool fadeOut = true, ShakeRandomnessMode randomnessMode = ShakeRandomnessMode.Full)
	{
		return null;
	}

	[Token(Token = "0x600003D")]
	[Address(RVA = "0x22F09F0", Offset = "0x22F09F0", VA = "0x22F09F0")]
	private static TweenerCore<Vector3, Vector3[], Vector3ArrayOptions> Shake(DOGetter<Vector3> getter, DOSetter<Vector3> setter, float duration, Vector3 strength, int vibrato, float randomness, bool ignoreZAxis, bool vectorBased, bool fadeOut, ShakeRandomnessMode randomnessMode)
	{
		return null;
	}

	[Token(Token = "0x600003E")]
	[Address(RVA = "0x22F06C0", Offset = "0x22F06C0", VA = "0x22F06C0")]
	public static TweenerCore<Vector3, Vector3[], Vector3ArrayOptions> ToArray(DOGetter<Vector3> getter, DOSetter<Vector3> setter, Vector3[] endValues, float[] durations)
	{
		return null;
	}

	[Token(Token = "0x600003F")]
	[Address(RVA = "0x22F16F0", Offset = "0x22F16F0", VA = "0x22F16F0")]
	internal static TweenerCore<Color2, Color2, ColorOptions> To(DOGetter<Color2> getter, DOSetter<Color2> setter, Color2 endValue, float duration)
	{
		return null;
	}

	[Token(Token = "0x6000040")]
	[Address(RVA = "0x22F17B0", Offset = "0x22F17B0", VA = "0x22F17B0")]
	public static Sequence Sequence()
	{
		return null;
	}

	[Token(Token = "0x6000041")]
	[Address(RVA = "0x22F1940", Offset = "0x22F1940", VA = "0x22F1940")]
	public static Sequence Sequence(object target)
	{
		return null;
	}

	[Token(Token = "0x6000042")]
	[Address(RVA = "0x22F19A0", Offset = "0x22F19A0", VA = "0x22F19A0")]
	public static int CompleteAll(bool withCallbacks = false)
	{
		return default(int);
	}

	[Token(Token = "0x6000043")]
	[Address(RVA = "0x22F1A10", Offset = "0x22F1A10", VA = "0x22F1A10")]
	public static int Complete(object targetOrId, bool withCallbacks = false)
	{
		return default(int);
	}

	[Token(Token = "0x6000044")]
	[Address(RVA = "0x22F1A90", Offset = "0x22F1A90", VA = "0x22F1A90")]
	internal static int CompleteAndReturnKilledTot()
	{
		return default(int);
	}

	[Token(Token = "0x6000045")]
	[Address(RVA = "0x22F1AF0", Offset = "0x22F1AF0", VA = "0x22F1AF0")]
	internal static int CompleteAndReturnKilledTot(object targetOrId)
	{
		return default(int);
	}

	[Token(Token = "0x6000046")]
	[Address(RVA = "0x22F1B70", Offset = "0x22F1B70", VA = "0x22F1B70")]
	internal static int CompleteAndReturnKilledTot(object target, object id)
	{
		return default(int);
	}

	[Token(Token = "0x6000047")]
	[Address(RVA = "0x22F1C00", Offset = "0x22F1C00", VA = "0x22F1C00")]
	internal static int CompleteAndReturnKilledTotExceptFor(params object[] excludeTargetsOrIds)
	{
		return default(int);
	}

	[Token(Token = "0x6000048")]
	[Address(RVA = "0x22F1C70", Offset = "0x22F1C70", VA = "0x22F1C70")]
	public static int FlipAll()
	{
		return default(int);
	}

	[Token(Token = "0x6000049")]
	[Address(RVA = "0x22F1CD0", Offset = "0x22F1CD0", VA = "0x22F1CD0")]
	public static int Flip(object targetOrId)
	{
		return default(int);
	}

	[Token(Token = "0x600004A")]
	[Address(RVA = "0x22F1D50", Offset = "0x22F1D50", VA = "0x22F1D50")]
	public static int GotoAll(float to, bool andPlay = false)
	{
		return default(int);
	}

	[Token(Token = "0x600004B")]
	[Address(RVA = "0x22F1DD0", Offset = "0x22F1DD0", VA = "0x22F1DD0")]
	public static int Goto(object targetOrId, float to, bool andPlay = false)
	{
		return default(int);
	}

	[Token(Token = "0x600004C")]
	[Address(RVA = "0x22F1E60", Offset = "0x22F1E60", VA = "0x22F1E60")]
	public static int KillAll(bool complete = false)
	{
		return default(int);
	}

	[Token(Token = "0x600004D")]
	[Address(RVA = "0x22F1F70", Offset = "0x22F1F70", VA = "0x22F1F70")]
	public static int KillAll(bool complete, params object[] idsOrTargetsToExclude)
	{
		return default(int);
	}

	[Token(Token = "0x600004E")]
	[Address(RVA = "0x22F2180", Offset = "0x22F2180", VA = "0x22F2180")]
	public static int Kill(object targetOrId, bool complete = false)
	{
		return default(int);
	}

	[Token(Token = "0x600004F")]
	[Address(RVA = "0x22F22C0", Offset = "0x22F22C0", VA = "0x22F22C0")]
	public static int Kill(object target, object id, bool complete = false)
	{
		return default(int);
	}

	[Token(Token = "0x6000050")]
	[Address(RVA = "0x22F2410", Offset = "0x22F2410", VA = "0x22F2410")]
	public static int PauseAll()
	{
		return default(int);
	}

	[Token(Token = "0x6000051")]
	[Address(RVA = "0x22F2470", Offset = "0x22F2470", VA = "0x22F2470")]
	public static int Pause(object targetOrId)
	{
		return default(int);
	}

	[Token(Token = "0x6000052")]
	[Address(RVA = "0x22F24F0", Offset = "0x22F24F0", VA = "0x22F24F0")]
	public static int PlayAll()
	{
		return default(int);
	}

	[Token(Token = "0x6000053")]
	[Address(RVA = "0x22F2550", Offset = "0x22F2550", VA = "0x22F2550")]
	public static int Play(object targetOrId)
	{
		return default(int);
	}

	[Token(Token = "0x6000054")]
	[Address(RVA = "0x22F25D0", Offset = "0x22F25D0", VA = "0x22F25D0")]
	public static int Play(object target, object id)
	{
		return default(int);
	}

	[Token(Token = "0x6000055")]
	[Address(RVA = "0x22F2650", Offset = "0x22F2650", VA = "0x22F2650")]
	public static int PlayBackwardsAll()
	{
		return default(int);
	}

	[Token(Token = "0x6000056")]
	[Address(RVA = "0x22F26B0", Offset = "0x22F26B0", VA = "0x22F26B0")]
	public static int PlayBackwards(object targetOrId)
	{
		return default(int);
	}

	[Token(Token = "0x6000057")]
	[Address(RVA = "0x22F2730", Offset = "0x22F2730", VA = "0x22F2730")]
	public static int PlayBackwards(object target, object id)
	{
		return default(int);
	}

	[Token(Token = "0x6000058")]
	[Address(RVA = "0x22F27B0", Offset = "0x22F27B0", VA = "0x22F27B0")]
	public static int PlayForwardAll()
	{
		return default(int);
	}

	[Token(Token = "0x6000059")]
	[Address(RVA = "0x22F2810", Offset = "0x22F2810", VA = "0x22F2810")]
	public static int PlayForward(object targetOrId)
	{
		return default(int);
	}

	[Token(Token = "0x600005A")]
	[Address(RVA = "0x22F2890", Offset = "0x22F2890", VA = "0x22F2890")]
	public static int PlayForward(object target, object id)
	{
		return default(int);
	}

	[Token(Token = "0x600005B")]
	[Address(RVA = "0x22F2910", Offset = "0x22F2910", VA = "0x22F2910")]
	public static int RestartAll(bool includeDelay = true)
	{
		return default(int);
	}

	[Token(Token = "0x600005C")]
	[Address(RVA = "0x22F2980", Offset = "0x22F2980", VA = "0x22F2980")]
	public static int Restart(object targetOrId, bool includeDelay = true, float changeDelayTo = -1f)
	{
		return default(int);
	}

	[Token(Token = "0x600005D")]
	[Address(RVA = "0x22F2A10", Offset = "0x22F2A10", VA = "0x22F2A10")]
	public static int Restart(object target, object id, bool includeDelay = true, float changeDelayTo = -1f)
	{
		return default(int);
	}

	[Token(Token = "0x600005E")]
	[Address(RVA = "0x22F2AB0", Offset = "0x22F2AB0", VA = "0x22F2AB0")]
	public static int RewindAll(bool includeDelay = true)
	{
		return default(int);
	}

	[Token(Token = "0x600005F")]
	[Address(RVA = "0x22F2B20", Offset = "0x22F2B20", VA = "0x22F2B20")]
	public static int Rewind(object targetOrId, bool includeDelay = true)
	{
		return default(int);
	}

	[Token(Token = "0x6000060")]
	[Address(RVA = "0x22F2BA0", Offset = "0x22F2BA0", VA = "0x22F2BA0")]
	public static int SmoothRewindAll()
	{
		return default(int);
	}

	[Token(Token = "0x6000061")]
	[Address(RVA = "0x22F2C00", Offset = "0x22F2C00", VA = "0x22F2C00")]
	public static int SmoothRewind(object targetOrId)
	{
		return default(int);
	}

	[Token(Token = "0x6000062")]
	[Address(RVA = "0x22F2C80", Offset = "0x22F2C80", VA = "0x22F2C80")]
	public static int TogglePauseAll()
	{
		return default(int);
	}

	[Token(Token = "0x6000063")]
	[Address(RVA = "0x22F2CE0", Offset = "0x22F2CE0", VA = "0x22F2CE0")]
	public static int TogglePause(object targetOrId)
	{
		return default(int);
	}

	[Token(Token = "0x6000064")]
	[Address(RVA = "0x22F2D60", Offset = "0x22F2D60", VA = "0x22F2D60")]
	public static bool IsTweening(object targetOrId, bool alsoCheckIfIsPlaying = false)
	{
		return default(bool);
	}

	[Token(Token = "0x6000065")]
	[Address(RVA = "0x22F2DD0", Offset = "0x22F2DD0", VA = "0x22F2DD0")]
	public static int TotalActiveTweens()
	{
		return default(int);
	}

	[Token(Token = "0x6000066")]
	[Address(RVA = "0x22F2E40", Offset = "0x22F2E40", VA = "0x22F2E40")]
	public static int TotalActiveTweeners()
	{
		return default(int);
	}

	[Token(Token = "0x6000067")]
	[Address(RVA = "0x22F2EB0", Offset = "0x22F2EB0", VA = "0x22F2EB0")]
	public static int TotalActiveSequences()
	{
		return default(int);
	}

	[Token(Token = "0x6000068")]
	[Address(RVA = "0x22F2F20", Offset = "0x22F2F20", VA = "0x22F2F20")]
	public static int TotalPlayingTweens()
	{
		return default(int);
	}

	[Token(Token = "0x6000069")]
	[Address(RVA = "0x22F2F80", Offset = "0x22F2F80", VA = "0x22F2F80")]
	public static int TotalTweensById(object id, bool playingOnly = false)
	{
		return default(int);
	}

	[Token(Token = "0x600006A")]
	[Address(RVA = "0x22F2FE0", Offset = "0x22F2FE0", VA = "0x22F2FE0")]
	public static List<Tween> PlayingTweens([Optional] List<Tween> fillableList)
	{
		return null;
	}

	[Token(Token = "0x600006B")]
	[Address(RVA = "0x22F3060", Offset = "0x22F3060", VA = "0x22F3060")]
	public static List<Tween> PausedTweens([Optional] List<Tween> fillableList)
	{
		return null;
	}

	[Token(Token = "0x600006C")]
	[Address(RVA = "0x22F30E0", Offset = "0x22F30E0", VA = "0x22F30E0")]
	public static List<Tween> TweensById(object id, [Optional][DefaultParameterValue(false)] bool playingOnly, [Optional] List<Tween> fillableList)
	{
		return null;
	}

	[Token(Token = "0x600006D")]
	[Address(RVA = "0x22F3180", Offset = "0x22F3180", VA = "0x22F3180")]
	public static List<Tween> TweensByTarget(object target, [Optional][DefaultParameterValue(false)] bool playingOnly, [Optional] List<Tween> fillableList)
	{
		return null;
	}

	[Token(Token = "0x600006E")]
	[Address(RVA = "0x22EF2F0", Offset = "0x22EF2F0", VA = "0x22EF2F0")]
	private static void InitCheck()
	{
	}

	[Token(Token = "0x600006F")]
	private static TweenerCore<T1, T2, TPlugOptions> ApplyTo<T1, T2, TPlugOptions>(DOGetter<T1> getter, DOSetter<T1> setter, T2 endValue, float duration, [Optional] ABSTweenPlugin<T1, T2, TPlugOptions> plugin) where TPlugOptions : struct, IPlugOptions
	{
		return null;
	}

	[Token(Token = "0x6000070")]
	[Address(RVA = "0x22F3210", Offset = "0x22F3210", VA = "0x22F3210")]
	public DOTween()
	{
	}
}
