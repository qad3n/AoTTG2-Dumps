using Il2CppDummyDll;
using UnityEngine;

namespace DG.Tweening;

[Token(Token = "0x200001C")]
public static class TweenExtensions
{
	[Token(Token = "0x600009E")]
	[Address(RVA = "0x22F4E90", Offset = "0x22F4E90", VA = "0x22F4E90")]
	public static void Complete(this Tween t)
	{
	}

	[Token(Token = "0x600009F")]
	[Address(RVA = "0x22F4EA0", Offset = "0x22F4EA0", VA = "0x22F4EA0")]
	public static void Complete(this Tween t, bool withCallbacks)
	{
	}

	[Token(Token = "0x60000A0")]
	public static T Done<T>(this T t) where T : Tween
	{
		return null;
	}

	[Token(Token = "0x60000A1")]
	[Address(RVA = "0x22F4FF0", Offset = "0x22F4FF0", VA = "0x22F4FF0")]
	public static void Flip(this Tween t)
	{
	}

	[Token(Token = "0x60000A2")]
	[Address(RVA = "0x22F5120", Offset = "0x22F5120", VA = "0x22F5120")]
	public static void ForceInit(this Tween t)
	{
	}

	[Token(Token = "0x60000A3")]
	[Address(RVA = "0x22F5240", Offset = "0x22F5240", VA = "0x22F5240")]
	public static void Goto(this Tween t, float to, bool andPlay = false)
	{
	}

	[Token(Token = "0x60000A4")]
	[Address(RVA = "0x22F5410", Offset = "0x22F5410", VA = "0x22F5410")]
	public static void GotoWithCallbacks(this Tween t, float to, bool andPlay = false)
	{
	}

	[Token(Token = "0x60000A5")]
	[Address(RVA = "0x22F5250", Offset = "0x22F5250", VA = "0x22F5250")]
	private static void DoGoto(Tween t, float to, bool andPlay, bool withCallbacks)
	{
	}

	[Token(Token = "0x60000A6")]
	[Address(RVA = "0x22F5420", Offset = "0x22F5420", VA = "0x22F5420")]
	public static void Kill(this Tween t, bool complete = false)
	{
	}

	[Token(Token = "0x60000A7")]
	[Address(RVA = "0x22F55B0", Offset = "0x22F55B0", VA = "0x22F55B0")]
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
	[Address(RVA = "0x22F5720", Offset = "0x22F5720", VA = "0x22F5720")]
	public static void PlayBackwards(this Tween t)
	{
	}

	[Token(Token = "0x60000AB")]
	[Address(RVA = "0x22F5850", Offset = "0x22F5850", VA = "0x22F5850")]
	public static void PlayForward(this Tween t)
	{
	}

	[Token(Token = "0x60000AC")]
	[Address(RVA = "0x22F5980", Offset = "0x22F5980", VA = "0x22F5980")]
	public static void Restart(this Tween t, bool includeDelay = true, float changeDelayTo = -1f)
	{
	}

	[Token(Token = "0x60000AD")]
	[Address(RVA = "0x22F5AE0", Offset = "0x22F5AE0", VA = "0x22F5AE0")]
	public static void Rewind(this Tween t, bool includeDelay = true)
	{
	}

	[Token(Token = "0x60000AE")]
	[Address(RVA = "0x22F5C20", Offset = "0x22F5C20", VA = "0x22F5C20")]
	public static void SmoothRewind(this Tween t)
	{
	}

	[Token(Token = "0x60000AF")]
	[Address(RVA = "0x22F5D50", Offset = "0x22F5D50", VA = "0x22F5D50")]
	public static void TogglePause(this Tween t)
	{
	}

	[Token(Token = "0x60000B0")]
	[Address(RVA = "0x22F5E80", Offset = "0x22F5E80", VA = "0x22F5E80")]
	public static void GotoWaypoint(this Tween t, int waypointIndex, bool andPlay = false)
	{
	}

	[Token(Token = "0x60000B1")]
	[Address(RVA = "0x22F61C0", Offset = "0x22F61C0", VA = "0x22F61C0")]
	public static YieldInstruction WaitForCompletion(this Tween t)
	{
		return null;
	}

	[Token(Token = "0x60000B2")]
	[Address(RVA = "0x22F6290", Offset = "0x22F6290", VA = "0x22F6290")]
	public static YieldInstruction WaitForRewind(this Tween t)
	{
		return null;
	}

	[Token(Token = "0x60000B3")]
	[Address(RVA = "0x22F6360", Offset = "0x22F6360", VA = "0x22F6360")]
	public static YieldInstruction WaitForKill(this Tween t)
	{
		return null;
	}

	[Token(Token = "0x60000B4")]
	[Address(RVA = "0x22F6430", Offset = "0x22F6430", VA = "0x22F6430")]
	public static YieldInstruction WaitForElapsedLoops(this Tween t, int elapsedLoops)
	{
		return null;
	}

	[Token(Token = "0x60000B5")]
	[Address(RVA = "0x22F6500", Offset = "0x22F6500", VA = "0x22F6500")]
	public static YieldInstruction WaitForPosition(this Tween t, float position)
	{
		return null;
	}

	[Token(Token = "0x60000B6")]
	[Address(RVA = "0x22F65F0", Offset = "0x22F65F0", VA = "0x22F65F0")]
	public static Coroutine WaitForStart(this Tween t)
	{
		return null;
	}

	[Token(Token = "0x60000B7")]
	[Address(RVA = "0x22F66C0", Offset = "0x22F66C0", VA = "0x22F66C0")]
	public static int CompletedLoops(this Tween t)
	{
		return default(int);
	}

	[Token(Token = "0x60000B8")]
	[Address(RVA = "0x22F6740", Offset = "0x22F6740", VA = "0x22F6740")]
	public static float Delay(this Tween t)
	{
		return default(float);
	}

	[Token(Token = "0x60000B9")]
	[Address(RVA = "0x22F67B0", Offset = "0x22F67B0", VA = "0x22F67B0")]
	public static float ElapsedDelay(this Tween t)
	{
		return default(float);
	}

	[Token(Token = "0x60000BA")]
	[Address(RVA = "0x22F6820", Offset = "0x22F6820", VA = "0x22F6820")]
	public static float Duration(this Tween t, bool includeLoops = true)
	{
		return default(float);
	}

	[Token(Token = "0x60000BB")]
	[Address(RVA = "0x22F68C0", Offset = "0x22F68C0", VA = "0x22F68C0")]
	public static float Elapsed(this Tween t, bool includeLoops = true)
	{
		return default(float);
	}

	[Token(Token = "0x60000BC")]
	[Address(RVA = "0x22F6960", Offset = "0x22F6960", VA = "0x22F6960")]
	public static float ElapsedPercentage(this Tween t, bool includeLoops = true)
	{
		return default(float);
	}

	[Token(Token = "0x60000BD")]
	[Address(RVA = "0x22F6A30", Offset = "0x22F6A30", VA = "0x22F6A30")]
	public static float ElapsedDirectionalPercentage(this Tween t)
	{
		return default(float);
	}

	[Token(Token = "0x60000BE")]
	[Address(RVA = "0x22F6AF0", Offset = "0x22F6AF0", VA = "0x22F6AF0")]
	public static bool IsActive(this Tween t)
	{
		return default(bool);
	}

	[Token(Token = "0x60000BF")]
	[Address(RVA = "0x22F6B10", Offset = "0x22F6B10", VA = "0x22F6B10")]
	public static bool IsBackwards(this Tween t)
	{
		return default(bool);
	}

	[Token(Token = "0x60000C0")]
	[Address(RVA = "0x22F6B90", Offset = "0x22F6B90", VA = "0x22F6B90")]
	public static bool IsLoopingOrExecutingBackwards(this Tween t)
	{
		return default(bool);
	}

	[Token(Token = "0x60000C1")]
	[Address(RVA = "0x22F6C40", Offset = "0x22F6C40", VA = "0x22F6C40")]
	public static bool IsComplete(this Tween t)
	{
		return default(bool);
	}

	[Token(Token = "0x60000C2")]
	[Address(RVA = "0x22F6CC0", Offset = "0x22F6CC0", VA = "0x22F6CC0")]
	public static bool IsTimeScaleIndependent(this Tween t)
	{
		return default(bool);
	}

	[Token(Token = "0x60000C3")]
	[Address(RVA = "0x22F6D40", Offset = "0x22F6D40", VA = "0x22F6D40")]
	public static bool IsInitialized(this Tween t)
	{
		return default(bool);
	}

	[Token(Token = "0x60000C4")]
	[Address(RVA = "0x22F6DC0", Offset = "0x22F6DC0", VA = "0x22F6DC0")]
	public static bool IsPlaying(this Tween t)
	{
		return default(bool);
	}

	[Token(Token = "0x60000C5")]
	[Address(RVA = "0x22F6E40", Offset = "0x22F6E40", VA = "0x22F6E40")]
	public static int Loops(this Tween t)
	{
		return default(int);
	}

	[Token(Token = "0x60000C6")]
	[Address(RVA = "0x22F6EC0", Offset = "0x22F6EC0", VA = "0x22F6EC0")]
	public static Vector3 PathGetPoint(this Tween t, float pathPercentage)
	{
		return default(Vector3);
	}

	[Token(Token = "0x60000C7")]
	[Address(RVA = "0x22F7150", Offset = "0x22F7150", VA = "0x22F7150")]
	public static Vector3[] PathGetDrawPoints(this Tween t, int subdivisionsXSegment = 10)
	{
		return null;
	}

	[Token(Token = "0x60000C8")]
	[Address(RVA = "0x22F7350", Offset = "0x22F7350", VA = "0x22F7350")]
	public static float PathLength(this Tween t)
	{
		return default(float);
	}
}
