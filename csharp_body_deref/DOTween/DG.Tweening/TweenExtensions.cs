// ==================== AoTTG2 cross-reference ====================
// Type: DG.Tweening.TweenExtensions
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace DG.Tweening;

[Token(Token = "0x200001C")]
public static class TweenExtensions
{
	[Token(Token = "0x600009E")]
	[Address(RVA = "0x55B540", Offset = "0x559B40", VA = "0x18055B540")]
	public static void Complete(this Tween t)
	{
	}

	[Token(Token = "0x600009F")]
	[Address(RVA = "0x55B680", Offset = "0x559C80", VA = "0x18055B680")]
	public static void Complete(this Tween t, bool withCallbacks)
	{
	}

	[Token(Token = "0x60000A0")]
	public static T Done<T>(this T t) where T : Tween
	{
		return null;
	}

	[Token(Token = "0x60000A1")]
	[Address(RVA = "0x55BDC0", Offset = "0x55A3C0", VA = "0x18055BDC0")]
	public static void Flip(this Tween t)
	{
	}

	[Token(Token = "0x60000A2")]
	[Address(RVA = "0x55BEF0", Offset = "0x55A4F0", VA = "0x18055BEF0")]
	public static void ForceInit(this Tween t)
	{
	}

	[Token(Token = "0x60000A3")]
	[Address(RVA = "0x55C3B0", Offset = "0x55A9B0", VA = "0x18055C3B0")]
	public static void Goto(this Tween t, float to, bool andPlay = false)
	{
	}

	[Token(Token = "0x60000A4")]
	[Address(RVA = "0x55C390", Offset = "0x55A990", VA = "0x18055C390")]
	public static void GotoWithCallbacks(this Tween t, float to, bool andPlay = false)
	{
	}

	[Token(Token = "0x60000A5")]
	[Address(RVA = "0x55B8B0", Offset = "0x559EB0", VA = "0x18055B8B0")]
	private static void DoGoto(Tween t, float to, bool andPlay, bool withCallbacks)
	{
	}

	[Token(Token = "0x60000A6")]
	[Address(RVA = "0x55C6C0", Offset = "0x55ACC0", VA = "0x18055C6C0")]
	public static void Kill(this Tween t, bool complete = false)
	{
	}

	[Token(Token = "0x60000A7")]
	[Address(RVA = "0x55C880", Offset = "0x55AE80", VA = "0x18055C880")]
	public static void ManualUpdate(this Tween t, float deltaTime, float unscaledDeltaTime)
	{
	}

	[Token(Token = "0x60000A8")]
	public static T Pause<T>(this T t) where T : Tween
	{
		return null;
	}

	[Token(Token = "0x60000A9")]
	public static T Play<T>(this T t) where T : Tween
	{
		return null;
	}

	[Token(Token = "0x60000AA")]
	[Address(RVA = "0x55CFE0", Offset = "0x55B5E0", VA = "0x18055CFE0")]
	public static void PlayBackwards(this Tween t)
	{
	}

	[Token(Token = "0x60000AB")]
	[Address(RVA = "0x55D110", Offset = "0x55B710", VA = "0x18055D110")]
	public static void PlayForward(this Tween t)
	{
	}

	[Token(Token = "0x60000AC")]
	[Address(RVA = "0x55D240", Offset = "0x55B840", VA = "0x18055D240")]
	public static void Restart(this Tween t, bool includeDelay = true, float changeDelayTo = -1f)
	{
	}

	[Token(Token = "0x60000AD")]
	[Address(RVA = "0x55D3B0", Offset = "0x55B9B0", VA = "0x18055D3B0")]
	public static void Rewind(this Tween t, bool includeDelay = true)
	{
	}

	[Token(Token = "0x60000AE")]
	[Address(RVA = "0x55D500", Offset = "0x55BB00", VA = "0x18055D500")]
	public static void SmoothRewind(this Tween t)
	{
	}

	[Token(Token = "0x60000AF")]
	[Address(RVA = "0x55D630", Offset = "0x55BC30", VA = "0x18055D630")]
	public static void TogglePause(this Tween t)
	{
	}

	[Token(Token = "0x60000B0")]
	[Address(RVA = "0x55C020", Offset = "0x55A620", VA = "0x18055C020")]
	public static void GotoWaypoint(this Tween t, int waypointIndex, bool andPlay = false)
	{
	}

	[Token(Token = "0x60000B1")]
	[Address(RVA = "0x55D760", Offset = "0x55BD60", VA = "0x18055D760")]
	public static YieldInstruction WaitForCompletion(this Tween t)
	{
		return null;
	}

	[Token(Token = "0x60000B2")]
	[Address(RVA = "0x55DB00", Offset = "0x55C100", VA = "0x18055DB00")]
	public static YieldInstruction WaitForRewind(this Tween t)
	{
		return null;
	}

	[Token(Token = "0x60000B3")]
	[Address(RVA = "0x55D930", Offset = "0x55BF30", VA = "0x18055D930")]
	public static YieldInstruction WaitForKill(this Tween t)
	{
		return null;
	}

	[Token(Token = "0x60000B4")]
	[Address(RVA = "0x55D840", Offset = "0x55BE40", VA = "0x18055D840")]
	public static YieldInstruction WaitForElapsedLoops(this Tween t, int elapsedLoops)
	{
		return null;
	}

	[Token(Token = "0x60000B5")]
	[Address(RVA = "0x55DA10", Offset = "0x55C010", VA = "0x18055DA10")]
	public static YieldInstruction WaitForPosition(this Tween t, float position)
	{
		return null;
	}

	[Token(Token = "0x60000B6")]
	[Address(RVA = "0x55DBE0", Offset = "0x55C1E0", VA = "0x18055DBE0")]
	public static Coroutine WaitForStart(this Tween t)
	{
		return null;
	}

	[Token(Token = "0x60000B7")]
	[Address(RVA = "0x55B7D0", Offset = "0x559DD0", VA = "0x18055B7D0")]
	public static int CompletedLoops(this Tween t)
	{
		return default(int);
	}

	[Token(Token = "0x60000B8")]
	[Address(RVA = "0x55B840", Offset = "0x559E40", VA = "0x18055B840")]
	public static float Delay(this Tween t)
	{
		return default(float);
	}

	[Token(Token = "0x60000B9")]
	[Address(RVA = "0x55BB00", Offset = "0x55A100", VA = "0x18055BB00")]
	public static float ElapsedDelay(this Tween t)
	{
		return default(float);
	}

	[Token(Token = "0x60000BA")]
	[Address(RVA = "0x55BA50", Offset = "0x55A050", VA = "0x18055BA50")]
	public static float Duration(this Tween t, bool includeLoops = true)
	{
		return default(float);
	}

	[Token(Token = "0x60000BB")]
	[Address(RVA = "0x55BD20", Offset = "0x55A320", VA = "0x18055BD20")]
	public static float Elapsed(this Tween t, bool includeLoops = true)
	{
		return default(float);
	}

	[Token(Token = "0x60000BC")]
	[Address(RVA = "0x55BC40", Offset = "0x55A240", VA = "0x18055BC40")]
	public static float ElapsedPercentage(this Tween t, bool includeLoops = true)
	{
		return default(float);
	}

	[Token(Token = "0x60000BD")]
	[Address(RVA = "0x55BB70", Offset = "0x55A170", VA = "0x18055BB70")]
	public static float ElapsedDirectionalPercentage(this Tween t)
	{
		return default(float);
	}

	[Token(Token = "0x60000BE")]
	[Address(RVA = "0x55C3D0", Offset = "0x55A9D0", VA = "0x18055C3D0")]
	public static bool IsActive(this Tween t)
	{
		return default(bool);
	}

	[Token(Token = "0x60000BF")]
	[Address(RVA = "0x55C3E0", Offset = "0x55A9E0", VA = "0x18055C3E0")]
	public static bool IsBackwards(this Tween t)
	{
		return default(bool);
	}

	[Token(Token = "0x60000C0")]
	[Address(RVA = "0x55C530", Offset = "0x55AB30", VA = "0x18055C530")]
	public static bool IsLoopingOrExecutingBackwards(this Tween t)
	{
		return default(bool);
	}

	[Token(Token = "0x60000C1")]
	[Address(RVA = "0x55C450", Offset = "0x55AA50", VA = "0x18055C450")]
	public static bool IsComplete(this Tween t)
	{
		return default(bool);
	}

	[Token(Token = "0x60000C2")]
	[Address(RVA = "0x55C650", Offset = "0x55AC50", VA = "0x18055C650")]
	public static bool IsTimeScaleIndependent(this Tween t)
	{
		return default(bool);
	}

	[Token(Token = "0x60000C3")]
	[Address(RVA = "0x55C4C0", Offset = "0x55AAC0", VA = "0x18055C4C0")]
	public static bool IsInitialized(this Tween t)
	{
		return default(bool);
	}

	[Token(Token = "0x60000C4")]
	[Address(RVA = "0x55C5E0", Offset = "0x55ABE0", VA = "0x18055C5E0")]
	public static bool IsPlaying(this Tween t)
	{
		return default(bool);
	}

	[Token(Token = "0x60000C5")]
	[Address(RVA = "0x55C810", Offset = "0x55AE10", VA = "0x18055C810")]
	public static int Loops(this Tween t)
	{
		return default(int);
	}

	[Token(Token = "0x60000C6")]
	[Address(RVA = "0x55CBE0", Offset = "0x55B1E0", VA = "0x18055CBE0")]
	public static Vector3 PathGetPoint(this Tween t, float pathPercentage)
	{
		return default(Vector3);
	}

	[Token(Token = "0x60000C7")]
	[Address(RVA = "0x55C9F0", Offset = "0x55AFF0", VA = "0x18055C9F0")]
	public static Vector3[] PathGetDrawPoints(this Tween t, int subdivisionsXSegment = 10)
	{
		return null;
	}

	[Token(Token = "0x60000C8")]
	[Address(RVA = "0x55CE00", Offset = "0x55B400", VA = "0x18055CE00")]
	public static float PathLength(this Tween t)
	{
		return default(float);
	}
}
