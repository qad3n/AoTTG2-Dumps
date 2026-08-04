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
	[Address(RVA = "0x235B770", Offset = "0x235B770", VA = "0x235B770")]
	public static void Complete(this Tween t)
	{
	}

	[Token(Token = "0x600009F")]
	[Address(RVA = "0x235B780", Offset = "0x235B780", VA = "0x235B780")]
	public static void Complete(this Tween t, bool withCallbacks)
	{
	}

	[Token(Token = "0x60000A0")]
	public static T Done<T>(this T t) where T : Tween
	{
		return null;
	}

	[Token(Token = "0x60000A1")]
	[Address(RVA = "0x235B8D0", Offset = "0x235B8D0", VA = "0x235B8D0")]
	public static void Flip(this Tween t)
	{
	}

	[Token(Token = "0x60000A2")]
	[Address(RVA = "0x235BA00", Offset = "0x235BA00", VA = "0x235BA00")]
	public static void ForceInit(this Tween t)
	{
	}

	[Token(Token = "0x60000A3")]
	[Address(RVA = "0x235BB20", Offset = "0x235BB20", VA = "0x235BB20")]
	public static void Goto(this Tween t, float to, bool andPlay = false)
	{
	}

	[Token(Token = "0x60000A4")]
	[Address(RVA = "0x235BCF0", Offset = "0x235BCF0", VA = "0x235BCF0")]
	public static void GotoWithCallbacks(this Tween t, float to, bool andPlay = false)
	{
	}

	[Token(Token = "0x60000A5")]
	[Address(RVA = "0x235BB30", Offset = "0x235BB30", VA = "0x235BB30")]
	private static void DoGoto(Tween t, float to, bool andPlay, bool withCallbacks)
	{
	}

	[Token(Token = "0x60000A6")]
	[Address(RVA = "0x235BD00", Offset = "0x235BD00", VA = "0x235BD00")]
	public static void Kill(this Tween t, bool complete = false)
	{
	}

	[Token(Token = "0x60000A7")]
	[Address(RVA = "0x235BE90", Offset = "0x235BE90", VA = "0x235BE90")]
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
	[Address(RVA = "0x235C000", Offset = "0x235C000", VA = "0x235C000")]
	public static void PlayBackwards(this Tween t)
	{
	}

	[Token(Token = "0x60000AB")]
	[Address(RVA = "0x235C130", Offset = "0x235C130", VA = "0x235C130")]
	public static void PlayForward(this Tween t)
	{
	}

	[Token(Token = "0x60000AC")]
	[Address(RVA = "0x235C260", Offset = "0x235C260", VA = "0x235C260")]
	public static void Restart(this Tween t, bool includeDelay = true, float changeDelayTo = -1f)
	{
	}

	[Token(Token = "0x60000AD")]
	[Address(RVA = "0x235C3C0", Offset = "0x235C3C0", VA = "0x235C3C0")]
	public static void Rewind(this Tween t, bool includeDelay = true)
	{
	}

	[Token(Token = "0x60000AE")]
	[Address(RVA = "0x235C500", Offset = "0x235C500", VA = "0x235C500")]
	public static void SmoothRewind(this Tween t)
	{
	}

	[Token(Token = "0x60000AF")]
	[Address(RVA = "0x235C630", Offset = "0x235C630", VA = "0x235C630")]
	public static void TogglePause(this Tween t)
	{
	}

	[Token(Token = "0x60000B0")]
	[Address(RVA = "0x235C760", Offset = "0x235C760", VA = "0x235C760")]
	public static void GotoWaypoint(this Tween t, int waypointIndex, bool andPlay = false)
	{
	}

	[Token(Token = "0x60000B1")]
	[Address(RVA = "0x235CAA0", Offset = "0x235CAA0", VA = "0x235CAA0")]
	public static YieldInstruction WaitForCompletion(this Tween t)
	{
		return null;
	}

	[Token(Token = "0x60000B2")]
	[Address(RVA = "0x235CB70", Offset = "0x235CB70", VA = "0x235CB70")]
	public static YieldInstruction WaitForRewind(this Tween t)
	{
		return null;
	}

	[Token(Token = "0x60000B3")]
	[Address(RVA = "0x235CC40", Offset = "0x235CC40", VA = "0x235CC40")]
	public static YieldInstruction WaitForKill(this Tween t)
	{
		return null;
	}

	[Token(Token = "0x60000B4")]
	[Address(RVA = "0x235CD10", Offset = "0x235CD10", VA = "0x235CD10")]
	public static YieldInstruction WaitForElapsedLoops(this Tween t, int elapsedLoops)
	{
		return null;
	}

	[Token(Token = "0x60000B5")]
	[Address(RVA = "0x235CDE0", Offset = "0x235CDE0", VA = "0x235CDE0")]
	public static YieldInstruction WaitForPosition(this Tween t, float position)
	{
		return null;
	}

	[Token(Token = "0x60000B6")]
	[Address(RVA = "0x235CED0", Offset = "0x235CED0", VA = "0x235CED0")]
	public static Coroutine WaitForStart(this Tween t)
	{
		return null;
	}

	[Token(Token = "0x60000B7")]
	[Address(RVA = "0x235CFA0", Offset = "0x235CFA0", VA = "0x235CFA0")]
	public static int CompletedLoops(this Tween t)
	{
		return default(int);
	}

	[Token(Token = "0x60000B8")]
	[Address(RVA = "0x235D020", Offset = "0x235D020", VA = "0x235D020")]
	public static float Delay(this Tween t)
	{
		return default(float);
	}

	[Token(Token = "0x60000B9")]
	[Address(RVA = "0x235D090", Offset = "0x235D090", VA = "0x235D090")]
	public static float ElapsedDelay(this Tween t)
	{
		return default(float);
	}

	[Token(Token = "0x60000BA")]
	[Address(RVA = "0x235D100", Offset = "0x235D100", VA = "0x235D100")]
	public static float Duration(this Tween t, bool includeLoops = true)
	{
		return default(float);
	}

	[Token(Token = "0x60000BB")]
	[Address(RVA = "0x235D1A0", Offset = "0x235D1A0", VA = "0x235D1A0")]
	public static float Elapsed(this Tween t, bool includeLoops = true)
	{
		return default(float);
	}

	[Token(Token = "0x60000BC")]
	[Address(RVA = "0x235D240", Offset = "0x235D240", VA = "0x235D240")]
	public static float ElapsedPercentage(this Tween t, bool includeLoops = true)
	{
		return default(float);
	}

	[Token(Token = "0x60000BD")]
	[Address(RVA = "0x235D310", Offset = "0x235D310", VA = "0x235D310")]
	public static float ElapsedDirectionalPercentage(this Tween t)
	{
		return default(float);
	}

	[Token(Token = "0x60000BE")]
	[Address(RVA = "0x235D3D0", Offset = "0x235D3D0", VA = "0x235D3D0")]
	public static bool IsActive(this Tween t)
	{
		return default(bool);
	}

	[Token(Token = "0x60000BF")]
	[Address(RVA = "0x235D3F0", Offset = "0x235D3F0", VA = "0x235D3F0")]
	public static bool IsBackwards(this Tween t)
	{
		return default(bool);
	}

	[Token(Token = "0x60000C0")]
	[Address(RVA = "0x235D470", Offset = "0x235D470", VA = "0x235D470")]
	public static bool IsLoopingOrExecutingBackwards(this Tween t)
	{
		return default(bool);
	}

	[Token(Token = "0x60000C1")]
	[Address(RVA = "0x235D520", Offset = "0x235D520", VA = "0x235D520")]
	public static bool IsComplete(this Tween t)
	{
		return default(bool);
	}

	[Token(Token = "0x60000C2")]
	[Address(RVA = "0x235D5A0", Offset = "0x235D5A0", VA = "0x235D5A0")]
	public static bool IsTimeScaleIndependent(this Tween t)
	{
		return default(bool);
	}

	[Token(Token = "0x60000C3")]
	[Address(RVA = "0x235D620", Offset = "0x235D620", VA = "0x235D620")]
	public static bool IsInitialized(this Tween t)
	{
		return default(bool);
	}

	[Token(Token = "0x60000C4")]
	[Address(RVA = "0x235D6A0", Offset = "0x235D6A0", VA = "0x235D6A0")]
	public static bool IsPlaying(this Tween t)
	{
		return default(bool);
	}

	[Token(Token = "0x60000C5")]
	[Address(RVA = "0x235D720", Offset = "0x235D720", VA = "0x235D720")]
	public static int Loops(this Tween t)
	{
		return default(int);
	}

	[Token(Token = "0x60000C6")]
	[Address(RVA = "0x235D7A0", Offset = "0x235D7A0", VA = "0x235D7A0")]
	public static Vector3 PathGetPoint(this Tween t, float pathPercentage)
	{
		return default(Vector3);
	}

	[Token(Token = "0x60000C7")]
	[Address(RVA = "0x235DA30", Offset = "0x235DA30", VA = "0x235DA30")]
	public static Vector3[] PathGetDrawPoints(this Tween t, int subdivisionsXSegment = 10)
	{
		return null;
	}

	[Token(Token = "0x60000C8")]
	[Address(RVA = "0x235DC30", Offset = "0x235DC30", VA = "0x235DC30")]
	public static float PathLength(this Tween t)
	{
		return default(float);
	}
}
