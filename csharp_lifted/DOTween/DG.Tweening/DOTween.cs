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
		[Address(RVA = "0x3165070", Offset = "0x3164070", VA = "0x3165070")]
		get
		{
			return default(LogBehaviour);
		}
		[Token(Token = "0x6000015")]
		[Address(RVA = "0x31650E0", Offset = "0x31640E0", VA = "0x31650E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000002")]
	public static int tweenersCapacity
	{
		[Token(Token = "0x6000016")]
		[Address(RVA = "0x3165140", Offset = "0x3164140", VA = "0x3165140")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000017")]
		[Address(RVA = "0x31651B0", Offset = "0x31641B0", VA = "0x31651B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000003")]
	public static int sequencesCapacity
	{
		[Token(Token = "0x6000018")]
		[Address(RVA = "0x3165210", Offset = "0x3164210", VA = "0x3165210")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000019")]
		[Address(RVA = "0x3165280", Offset = "0x3164280", VA = "0x3165280")]
		set
		{
		}
	}

	[Token(Token = "0x17000004")]
	public static bool debugStoreTargetId
	{
		[Token(Token = "0x600001A")]
		[Address(RVA = "0x31652E0", Offset = "0x31642E0", VA = "0x31652E0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600001B")]
		[Address(RVA = "0x31653A0", Offset = "0x31643A0", VA = "0x31653A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000005")]
	internal static bool isQuitting
	{
		[Token(Token = "0x600001C")]
		[Address(RVA = "0x31653F0", Offset = "0x31643F0", VA = "0x31653F0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600001D")]
		[Address(RVA = "0x3165460", Offset = "0x3164460", VA = "0x3165460")]
		set
		{
		}
	}

	[Token(Token = "0x600001E")]
	[Address(RVA = "0x31654B0", Offset = "0x31644B0", VA = "0x31654B0")]
	[RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.BeforeSceneLoad)]
	private static void RuntimeOnLoad()
	{
	}

	[Token(Token = "0x600001F")]
	[Address(RVA = "0x3165560", Offset = "0x3164560", VA = "0x3165560")]
	public static IDOTweenInit Init([Optional] bool? recycleAllByDefault, [Optional] bool? useSafeMode, [Optional] LogBehaviour? logBehaviour)
	{
		return null;
	}

	[Token(Token = "0x6000020")]
	[Address(RVA = "0x3165F30", Offset = "0x3164F30", VA = "0x3165F30")]
	private static void AutoInit()
	{
	}

	[Token(Token = "0x6000021")]
	[Address(RVA = "0x3165750", Offset = "0x3164750", VA = "0x3165750")]
	private static IDOTweenInit Init(DOTweenSettings settings, bool? recycleAllByDefault, bool? useSafeMode, LogBehaviour? logBehaviour)
	{
		return null;
	}

	[Token(Token = "0x6000022")]
	[Address(RVA = "0x31660B0", Offset = "0x31650B0", VA = "0x31660B0")]
	public static void SetTweensCapacity(int tweenersCapacity, int sequencesCapacity)
	{
	}

	[Token(Token = "0x6000023")]
	[Address(RVA = "0x3166100", Offset = "0x3165100", VA = "0x3166100")]
	public static void Clear(bool destroy = false)
	{
	}

	[Token(Token = "0x6000024")]
	[Address(RVA = "0x3166160", Offset = "0x3165160", VA = "0x3166160")]
	internal static void Clear(bool destroy, bool isApplicationQuitting)
	{
	}

	[Token(Token = "0x6000025")]
	[Address(RVA = "0x3166310", Offset = "0x3165310", VA = "0x3166310")]
	public static void ClearCachedTweens()
	{
	}

	[Token(Token = "0x6000026")]
	[Address(RVA = "0x3166370", Offset = "0x3165370", VA = "0x3166370")]
	public static int Validate()
	{
		return default(int);
	}

	[Token(Token = "0x6000027")]
	[Address(RVA = "0x31663D0", Offset = "0x31653D0", VA = "0x31663D0")]
	public static void ManualUpdate(float deltaTime, float unscaledDeltaTime)
	{
	}

	[Token(Token = "0x6000028")]
	[Address(RVA = "0x3166630", Offset = "0x3165630", VA = "0x3166630")]
	public static TweenerCore<float, float, FloatOptions> To(DOGetter<float> getter, DOSetter<float> setter, float endValue, float duration)
	{
		return null;
	}

	[Token(Token = "0x6000029")]
	[Address(RVA = "0x31666D0", Offset = "0x31656D0", VA = "0x31666D0")]
	public static TweenerCore<double, double, NoOptions> To(DOGetter<double> getter, DOSetter<double> setter, double endValue, float duration)
	{
		return null;
	}

	[Token(Token = "0x600002A")]
	[Address(RVA = "0x3166770", Offset = "0x3165770", VA = "0x3166770")]
	public static TweenerCore<int, int, NoOptions> To(DOGetter<int> getter, DOSetter<int> setter, int endValue, float duration)
	{
		return null;
	}

	[Token(Token = "0x600002B")]
	[Address(RVA = "0x3166800", Offset = "0x3165800", VA = "0x3166800")]
	public static TweenerCore<uint, uint, UintOptions> To(DOGetter<uint> getter, DOSetter<uint> setter, uint endValue, float duration)
	{
		return null;
	}

	[Token(Token = "0x600002C")]
	[Address(RVA = "0x3166890", Offset = "0x3165890", VA = "0x3166890")]
	public static TweenerCore<long, long, NoOptions> To(DOGetter<long> getter, DOSetter<long> setter, long endValue, float duration)
	{
		return null;
	}

	[Token(Token = "0x600002D")]
	[Address(RVA = "0x3166920", Offset = "0x3165920", VA = "0x3166920")]
	public static TweenerCore<ulong, ulong, NoOptions> To(DOGetter<ulong> getter, DOSetter<ulong> setter, ulong endValue, float duration)
	{
		return null;
	}

	[Token(Token = "0x600002E")]
	[Address(RVA = "0x31669B0", Offset = "0x31659B0", VA = "0x31669B0")]
	public static TweenerCore<string, string, StringOptions> To(DOGetter<string> getter, DOSetter<string> setter, string endValue, float duration)
	{
		return null;
	}

	[Token(Token = "0x600002F")]
	[Address(RVA = "0x3166A40", Offset = "0x3165A40", VA = "0x3166A40")]
	public static TweenerCore<Vector2, Vector2, VectorOptions> To(DOGetter<Vector2> getter, DOSetter<Vector2> setter, Vector2 endValue, float duration)
	{
		return null;
	}

	[Token(Token = "0x6000030")]
	[Address(RVA = "0x3166AE0", Offset = "0x3165AE0", VA = "0x3166AE0")]
	public static TweenerCore<Vector3, Vector3, VectorOptions> To(DOGetter<Vector3> getter, DOSetter<Vector3> setter, Vector3 endValue, float duration)
	{
		return null;
	}

	[Token(Token = "0x6000031")]
	[Address(RVA = "0x3166B90", Offset = "0x3165B90", VA = "0x3166B90")]
	public static TweenerCore<Vector4, Vector4, VectorOptions> To(DOGetter<Vector4> getter, DOSetter<Vector4> setter, Vector4 endValue, float duration)
	{
		return null;
	}

	[Token(Token = "0x6000032")]
	[Address(RVA = "0x3166C40", Offset = "0x3165C40", VA = "0x3166C40")]
	public static TweenerCore<Quaternion, Vector3, QuaternionOptions> To(DOGetter<Quaternion> getter, DOSetter<Quaternion> setter, Vector3 endValue, float duration)
	{
		return null;
	}

	[Token(Token = "0x6000033")]
	[Address(RVA = "0x3166CF0", Offset = "0x3165CF0", VA = "0x3166CF0")]
	public static TweenerCore<Color, Color, ColorOptions> To(DOGetter<Color> getter, DOSetter<Color> setter, Color endValue, float duration)
	{
		return null;
	}

	[Token(Token = "0x6000034")]
	[Address(RVA = "0x3166DA0", Offset = "0x3165DA0", VA = "0x3166DA0")]
	public static TweenerCore<Rect, Rect, RectOptions> To(DOGetter<Rect> getter, DOSetter<Rect> setter, Rect endValue, float duration)
	{
		return null;
	}

	[Token(Token = "0x6000035")]
	[Address(RVA = "0x3166E50", Offset = "0x3165E50", VA = "0x3166E50")]
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
	[Address(RVA = "0x3166EE0", Offset = "0x3165EE0", VA = "0x3166EE0")]
	public static TweenerCore<Vector3, Vector3, VectorOptions> ToAxis(DOGetter<Vector3> getter, DOSetter<Vector3> setter, float endValue, float duration, AxisConstraint axisConstraint = AxisConstraint.X)
	{
		return null;
	}

	[Token(Token = "0x6000038")]
	[Address(RVA = "0x3166FB0", Offset = "0x3165FB0", VA = "0x3166FB0")]
	public static TweenerCore<Color, Color, ColorOptions> ToAlpha(DOGetter<Color> getter, DOSetter<Color> setter, float endValue, float duration)
	{
		return null;
	}

	[Token(Token = "0x6000039")]
	[Address(RVA = "0x3167090", Offset = "0x3166090", VA = "0x3167090")]
	public static Tweener To(DOSetter<float> setter, float startValue, float endValue, float duration)
	{
		return null;
	}

	[Token(Token = "0x600003A")]
	[Address(RVA = "0x3167270", Offset = "0x3166270", VA = "0x3167270")]
	public static TweenerCore<Vector3, Vector3[], Vector3ArrayOptions> Punch(DOGetter<Vector3> getter, DOSetter<Vector3> setter, Vector3 direction, float duration, int vibrato = 10, float elasticity = 1f)
	{
		return null;
	}

	[Token(Token = "0x600003B")]
	[Address(RVA = "0x3167AF0", Offset = "0x3166AF0", VA = "0x3167AF0")]
	public static TweenerCore<Vector3, Vector3[], Vector3ArrayOptions> Shake(DOGetter<Vector3> getter, DOSetter<Vector3> setter, float duration, float strength = 3f, int vibrato = 10, float randomness = 90f, bool ignoreZAxis = true, bool fadeOut = true, ShakeRandomnessMode randomnessMode = ShakeRandomnessMode.Full)
	{
		return null;
	}

	[Token(Token = "0x600003C")]
	[Address(RVA = "0x3168890", Offset = "0x3167890", VA = "0x3168890")]
	public static TweenerCore<Vector3, Vector3[], Vector3ArrayOptions> Shake(DOGetter<Vector3> getter, DOSetter<Vector3> setter, float duration, Vector3 strength, int vibrato = 10, float randomness = 90f, bool fadeOut = true, ShakeRandomnessMode randomnessMode = ShakeRandomnessMode.Full)
	{
		return null;
	}

	[Token(Token = "0x600003D")]
	[Address(RVA = "0x3167BC0", Offset = "0x3166BC0", VA = "0x3167BC0")]
	private static TweenerCore<Vector3, Vector3[], Vector3ArrayOptions> Shake(DOGetter<Vector3> getter, DOSetter<Vector3> setter, float duration, Vector3 strength, int vibrato, float randomness, bool ignoreZAxis, bool vectorBased, bool fadeOut, ShakeRandomnessMode randomnessMode)
	{
		return null;
	}

	[Token(Token = "0x600003E")]
	[Address(RVA = "0x3167890", Offset = "0x3166890", VA = "0x3167890")]
	public static TweenerCore<Vector3, Vector3[], Vector3ArrayOptions> ToArray(DOGetter<Vector3> getter, DOSetter<Vector3> setter, Vector3[] endValues, float[] durations)
	{
		return null;
	}

	[Token(Token = "0x600003F")]
	[Address(RVA = "0x3168970", Offset = "0x3167970", VA = "0x3168970")]
	internal static TweenerCore<Color2, Color2, ColorOptions> To(DOGetter<Color2> getter, DOSetter<Color2> setter, Color2 endValue, float duration)
	{
		return null;
	}

	[Token(Token = "0x6000040")]
	[Address(RVA = "0x31689F0", Offset = "0x31679F0", VA = "0x31689F0")]
	public static Sequence Sequence()
	{
		return null;
	}

	[Token(Token = "0x6000041")]
	[Address(RVA = "0x3168B70", Offset = "0x3167B70", VA = "0x3168B70")]
	public static Sequence Sequence(object target)
	{
		return null;
	}

	[Token(Token = "0x6000042")]
	[Address(RVA = "0x3168BD0", Offset = "0x3167BD0", VA = "0x3168BD0")]
	public static int CompleteAll(bool withCallbacks = false)
	{
		return default(int);
	}

	[Token(Token = "0x6000043")]
	[Address(RVA = "0x3168C40", Offset = "0x3167C40", VA = "0x3168C40")]
	public static int Complete(object targetOrId, bool withCallbacks = false)
	{
		return default(int);
	}

	[Token(Token = "0x6000044")]
	[Address(RVA = "0x3168CC0", Offset = "0x3167CC0", VA = "0x3168CC0")]
	internal static int CompleteAndReturnKilledTot()
	{
		return default(int);
	}

	[Token(Token = "0x6000045")]
	[Address(RVA = "0x3168D20", Offset = "0x3167D20", VA = "0x3168D20")]
	internal static int CompleteAndReturnKilledTot(object targetOrId)
	{
		return default(int);
	}

	[Token(Token = "0x6000046")]
	[Address(RVA = "0x3168DA0", Offset = "0x3167DA0", VA = "0x3168DA0")]
	internal static int CompleteAndReturnKilledTot(object target, object id)
	{
		return default(int);
	}

	[Token(Token = "0x6000047")]
	[Address(RVA = "0x3168E20", Offset = "0x3167E20", VA = "0x3168E20")]
	internal static int CompleteAndReturnKilledTotExceptFor(params object[] excludeTargetsOrIds)
	{
		return default(int);
	}

	[Token(Token = "0x6000048")]
	[Address(RVA = "0x3168E90", Offset = "0x3167E90", VA = "0x3168E90")]
	public static int FlipAll()
	{
		return default(int);
	}

	[Token(Token = "0x6000049")]
	[Address(RVA = "0x3168EF0", Offset = "0x3167EF0", VA = "0x3168EF0")]
	public static int Flip(object targetOrId)
	{
		return default(int);
	}

	[Token(Token = "0x600004A")]
	[Address(RVA = "0x3168F70", Offset = "0x3167F70", VA = "0x3168F70")]
	public static int GotoAll(float to, bool andPlay = false)
	{
		return default(int);
	}

	[Token(Token = "0x600004B")]
	[Address(RVA = "0x3168FF0", Offset = "0x3167FF0", VA = "0x3168FF0")]
	public static int Goto(object targetOrId, float to, bool andPlay = false)
	{
		return default(int);
	}

	[Token(Token = "0x600004C")]
	[Address(RVA = "0x3169080", Offset = "0x3168080", VA = "0x3169080")]
	public static int KillAll(bool complete = false)
	{
		return default(int);
	}

	[Token(Token = "0x600004D")]
	[Address(RVA = "0x3169190", Offset = "0x3168190", VA = "0x3169190")]
	public static int KillAll(bool complete, params object[] idsOrTargetsToExclude)
	{
		return default(int);
	}

	[Token(Token = "0x600004E")]
	[Address(RVA = "0x3169390", Offset = "0x3168390", VA = "0x3169390")]
	public static int Kill(object targetOrId, bool complete = false)
	{
		return default(int);
	}

	[Token(Token = "0x600004F")]
	[Address(RVA = "0x31694D0", Offset = "0x31684D0", VA = "0x31694D0")]
	public static int Kill(object target, object id, bool complete = false)
	{
		return default(int);
	}

	[Token(Token = "0x6000050")]
	[Address(RVA = "0x3169620", Offset = "0x3168620", VA = "0x3169620")]
	public static int PauseAll()
	{
		return default(int);
	}

	[Token(Token = "0x6000051")]
	[Address(RVA = "0x3169680", Offset = "0x3168680", VA = "0x3169680")]
	public static int Pause(object targetOrId)
	{
		return default(int);
	}

	[Token(Token = "0x6000052")]
	[Address(RVA = "0x3169700", Offset = "0x3168700", VA = "0x3169700")]
	public static int PlayAll()
	{
		return default(int);
	}

	[Token(Token = "0x6000053")]
	[Address(RVA = "0x3169760", Offset = "0x3168760", VA = "0x3169760")]
	public static int Play(object targetOrId)
	{
		return default(int);
	}

	[Token(Token = "0x6000054")]
	[Address(RVA = "0x31697E0", Offset = "0x31687E0", VA = "0x31697E0")]
	public static int Play(object target, object id)
	{
		return default(int);
	}

	[Token(Token = "0x6000055")]
	[Address(RVA = "0x3169860", Offset = "0x3168860", VA = "0x3169860")]
	public static int PlayBackwardsAll()
	{
		return default(int);
	}

	[Token(Token = "0x6000056")]
	[Address(RVA = "0x31698C0", Offset = "0x31688C0", VA = "0x31698C0")]
	public static int PlayBackwards(object targetOrId)
	{
		return default(int);
	}

	[Token(Token = "0x6000057")]
	[Address(RVA = "0x3169940", Offset = "0x3168940", VA = "0x3169940")]
	public static int PlayBackwards(object target, object id)
	{
		return default(int);
	}

	[Token(Token = "0x6000058")]
	[Address(RVA = "0x31699C0", Offset = "0x31689C0", VA = "0x31699C0")]
	public static int PlayForwardAll()
	{
		return default(int);
	}

	[Token(Token = "0x6000059")]
	[Address(RVA = "0x3169A20", Offset = "0x3168A20", VA = "0x3169A20")]
	public static int PlayForward(object targetOrId)
	{
		return default(int);
	}

	[Token(Token = "0x600005A")]
	[Address(RVA = "0x3169AA0", Offset = "0x3168AA0", VA = "0x3169AA0")]
	public static int PlayForward(object target, object id)
	{
		return default(int);
	}

	[Token(Token = "0x600005B")]
	[Address(RVA = "0x3169B20", Offset = "0x3168B20", VA = "0x3169B20")]
	public static int RestartAll(bool includeDelay = true)
	{
		return default(int);
	}

	[Token(Token = "0x600005C")]
	[Address(RVA = "0x3169B90", Offset = "0x3168B90", VA = "0x3169B90")]
	public static int Restart(object targetOrId, bool includeDelay = true, float changeDelayTo = -1f)
	{
		return default(int);
	}

	[Token(Token = "0x600005D")]
	[Address(RVA = "0x3169C20", Offset = "0x3168C20", VA = "0x3169C20")]
	public static int Restart(object target, object id, bool includeDelay = true, float changeDelayTo = -1f)
	{
		return default(int);
	}

	[Token(Token = "0x600005E")]
	[Address(RVA = "0x3169CC0", Offset = "0x3168CC0", VA = "0x3169CC0")]
	public static int RewindAll(bool includeDelay = true)
	{
		return default(int);
	}

	[Token(Token = "0x600005F")]
	[Address(RVA = "0x3169D30", Offset = "0x3168D30", VA = "0x3169D30")]
	public static int Rewind(object targetOrId, bool includeDelay = true)
	{
		return default(int);
	}

	[Token(Token = "0x6000060")]
	[Address(RVA = "0x3169DB0", Offset = "0x3168DB0", VA = "0x3169DB0")]
	public static int SmoothRewindAll()
	{
		return default(int);
	}

	[Token(Token = "0x6000061")]
	[Address(RVA = "0x3169E10", Offset = "0x3168E10", VA = "0x3169E10")]
	public static int SmoothRewind(object targetOrId)
	{
		return default(int);
	}

	[Token(Token = "0x6000062")]
	[Address(RVA = "0x3169E90", Offset = "0x3168E90", VA = "0x3169E90")]
	public static int TogglePauseAll()
	{
		return default(int);
	}

	[Token(Token = "0x6000063")]
	[Address(RVA = "0x3169EF0", Offset = "0x3168EF0", VA = "0x3169EF0")]
	public static int TogglePause(object targetOrId)
	{
		return default(int);
	}

	[Token(Token = "0x6000064")]
	[Address(RVA = "0x3169F70", Offset = "0x3168F70", VA = "0x3169F70")]
	public static bool IsTweening(object targetOrId, bool alsoCheckIfIsPlaying = false)
	{
		return default(bool);
	}

	[Token(Token = "0x6000065")]
	[Address(RVA = "0x3169FE0", Offset = "0x3168FE0", VA = "0x3169FE0")]
	public static int TotalActiveTweens()
	{
		return default(int);
	}

	[Token(Token = "0x6000066")]
	[Address(RVA = "0x316A050", Offset = "0x3169050", VA = "0x316A050")]
	public static int TotalActiveTweeners()
	{
		return default(int);
	}

	[Token(Token = "0x6000067")]
	[Address(RVA = "0x316A0C0", Offset = "0x31690C0", VA = "0x316A0C0")]
	public static int TotalActiveSequences()
	{
		return default(int);
	}

	[Token(Token = "0x6000068")]
	[Address(RVA = "0x316A130", Offset = "0x3169130", VA = "0x316A130")]
	public static int TotalPlayingTweens()
	{
		return default(int);
	}

	[Token(Token = "0x6000069")]
	[Address(RVA = "0x316A190", Offset = "0x3169190", VA = "0x316A190")]
	public static int TotalTweensById(object id, bool playingOnly = false)
	{
		return default(int);
	}

	[Token(Token = "0x600006A")]
	[Address(RVA = "0x316A1F0", Offset = "0x31691F0", VA = "0x316A1F0")]
	public static List<Tween> PlayingTweens([Optional] List<Tween> fillableList)
	{
		return null;
	}

	[Token(Token = "0x600006B")]
	[Address(RVA = "0x316A270", Offset = "0x3169270", VA = "0x316A270")]
	public static List<Tween> PausedTweens([Optional] List<Tween> fillableList)
	{
		return null;
	}

	[Token(Token = "0x600006C")]
	[Address(RVA = "0x316A2F0", Offset = "0x31692F0", VA = "0x316A2F0")]
	public static List<Tween> TweensById(object id, [Optional][DefaultParameterValue(false)] bool playingOnly, [Optional] List<Tween> fillableList)
	{
		return null;
	}

	[Token(Token = "0x600006D")]
	[Address(RVA = "0x316A380", Offset = "0x3169380", VA = "0x316A380")]
	public static List<Tween> TweensByTarget(object target, [Optional][DefaultParameterValue(false)] bool playingOnly, [Optional] List<Tween> fillableList)
	{
		return null;
	}

	[Token(Token = "0x600006E")]
	[Address(RVA = "0x31664F0", Offset = "0x31654F0", VA = "0x31664F0")]
	private static void InitCheck()
	{
	}

	[Token(Token = "0x600006F")]
	private static TweenerCore<T1, T2, TPlugOptions> ApplyTo<T1, T2, TPlugOptions>(DOGetter<T1> getter, DOSetter<T1> setter, T2 endValue, float duration, [Optional] ABSTweenPlugin<T1, T2, TPlugOptions> plugin) where TPlugOptions : struct, IPlugOptions
	{
		return null;
	}

	[Token(Token = "0x6000070")]
	[Address(RVA = "0x316A410", Offset = "0x3169410", VA = "0x316A410")]
	public DOTween()
	{
	}
}
