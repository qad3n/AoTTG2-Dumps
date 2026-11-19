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
	[Address(RVA = "0x316C0A0", Offset = "0x316B0A0", VA = "0x316C0A0")]
	public static void Complete(this Tween t)
	{
	}

	[Token(Token = "0x600009F")]
	[Address(RVA = "0x316C0B0", Offset = "0x316B0B0", VA = "0x316C0B0")]
	public static void Complete(this Tween t, bool withCallbacks)
	{
	}

	[Token(Token = "0x60000A0")]
	public static T Done<T>(this T t) where T : Tween
	{
		return null;
	}

	[Token(Token = "0x60000A1")]
	[Address(RVA = "0x316C200", Offset = "0x316B200", VA = "0x316C200")]
	public static void Flip(this Tween t)
	{
	}

	[Token(Token = "0x60000A2")]
	[Address(RVA = "0x316C330", Offset = "0x316B330", VA = "0x316C330")]
	public static void ForceInit(this Tween t)
	{
	}

	[Token(Token = "0x60000A3")]
	[Address(RVA = "0x316C450", Offset = "0x316B450", VA = "0x316C450")]
	public static void Goto(this Tween t, float to, bool andPlay = false)
	{
	}

	[Token(Token = "0x60000A4")]
	[Address(RVA = "0x316C620", Offset = "0x316B620", VA = "0x316C620")]
	public static void GotoWithCallbacks(this Tween t, float to, bool andPlay = false)
	{
	}

	[Token(Token = "0x60000A5")]
	[Address(RVA = "0x316C460", Offset = "0x316B460", VA = "0x316C460")]
	private static void DoGoto(Tween t, float to, bool andPlay, bool withCallbacks)
	{
	}

	[Token(Token = "0x60000A6")]
	[Address(RVA = "0x316C630", Offset = "0x316B630", VA = "0x316C630")]
	public static void Kill(this Tween t, bool complete = false)
	{
	}

	[Token(Token = "0x60000A7")]
	[Address(RVA = "0x316C7B0", Offset = "0x316B7B0", VA = "0x316C7B0")]
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
	[Address(RVA = "0x316C920", Offset = "0x316B920", VA = "0x316C920")]
	public static void PlayBackwards(this Tween t)
	{
	}

	[Token(Token = "0x60000AB")]
	[Address(RVA = "0x316CA50", Offset = "0x316BA50", VA = "0x316CA50")]
	public static void PlayForward(this Tween t)
	{
	}

	[Token(Token = "0x60000AC")]
	[Address(RVA = "0x316CB80", Offset = "0x316BB80", VA = "0x316CB80")]
	public static void Restart(this Tween t, bool includeDelay = true, float changeDelayTo = -1f)
	{
	}

	[Token(Token = "0x60000AD")]
	[Address(RVA = "0x316CCE0", Offset = "0x316BCE0", VA = "0x316CCE0")]
	public static void Rewind(this Tween t, bool includeDelay = true)
	{
	}

	[Token(Token = "0x60000AE")]
	[Address(RVA = "0x316CE20", Offset = "0x316BE20", VA = "0x316CE20")]
	public static void SmoothRewind(this Tween t)
	{
	}

	[Token(Token = "0x60000AF")]
	[Address(RVA = "0x316CF50", Offset = "0x316BF50", VA = "0x316CF50")]
	public static void TogglePause(this Tween t)
	{
	}

	[Token(Token = "0x60000B0")]
	[Address(RVA = "0x316D080", Offset = "0x316C080", VA = "0x316D080")]
	public static void GotoWaypoint(this Tween t, int waypointIndex, bool andPlay = false)
	{
	}

	[Token(Token = "0x60000B1")]
	[Address(RVA = "0x316D3D0", Offset = "0x316C3D0", VA = "0x316D3D0")]
	public static YieldInstruction WaitForCompletion(this Tween t)
	{
		return null;
	}

	[Token(Token = "0x60000B2")]
	[Address(RVA = "0x316D4A0", Offset = "0x316C4A0", VA = "0x316D4A0")]
	public static YieldInstruction WaitForRewind(this Tween t)
	{
		return null;
	}

	[Token(Token = "0x60000B3")]
	[Address(RVA = "0x316D570", Offset = "0x316C570", VA = "0x316D570")]
	public static YieldInstruction WaitForKill(this Tween t)
	{
		return null;
	}

	[Token(Token = "0x60000B4")]
	[Address(RVA = "0x316D640", Offset = "0x316C640", VA = "0x316D640")]
	public static YieldInstruction WaitForElapsedLoops(this Tween t, int elapsedLoops)
	{
		return null;
	}

	[Token(Token = "0x60000B5")]
	[Address(RVA = "0x316D710", Offset = "0x316C710", VA = "0x316D710")]
	public static YieldInstruction WaitForPosition(this Tween t, float position)
	{
		return null;
	}

	[Token(Token = "0x60000B6")]
	[Address(RVA = "0x316D800", Offset = "0x316C800", VA = "0x316D800")]
	public static Coroutine WaitForStart(this Tween t)
	{
		return null;
	}

	[Token(Token = "0x60000B7")]
	[Address(RVA = "0x316D8D0", Offset = "0x316C8D0", VA = "0x316D8D0")]
	public static int CompletedLoops(this Tween t)
	{
		return default(int);
	}

	[Token(Token = "0x60000B8")]
	[Address(RVA = "0x316D950", Offset = "0x316C950", VA = "0x316D950")]
	public static float Delay(this Tween t)
	{
		return default(float);
	}

	[Token(Token = "0x60000B9")]
	[Address(RVA = "0x316D9C0", Offset = "0x316C9C0", VA = "0x316D9C0")]
	public static float ElapsedDelay(this Tween t)
	{
		return default(float);
	}

	[Token(Token = "0x60000BA")]
	[Address(RVA = "0x316DA30", Offset = "0x316CA30", VA = "0x316DA30")]
	public static float Duration(this Tween t, bool includeLoops = true)
	{
		return default(float);
	}

	[Token(Token = "0x60000BB")]
	[Address(RVA = "0x316DAD0", Offset = "0x316CAD0", VA = "0x316DAD0")]
	public static float Elapsed(this Tween t, bool includeLoops = true)
	{
		return default(float);
	}

	[Token(Token = "0x60000BC")]
	[Address(RVA = "0x316DB60", Offset = "0x316CB60", VA = "0x316DB60")]
	public static float ElapsedPercentage(this Tween t, bool includeLoops = true)
	{
		return default(float);
	}

	[Token(Token = "0x60000BD")]
	[Address(RVA = "0x316DC20", Offset = "0x316CC20", VA = "0x316DC20")]
	public static float ElapsedDirectionalPercentage(this Tween t)
	{
		return default(float);
	}

	[Token(Token = "0x60000BE")]
	[Address(RVA = "0x316DCE0", Offset = "0x316CCE0", VA = "0x316DCE0")]
	public static bool IsActive(this Tween t)
	{
		return default(bool);
	}

	[Token(Token = "0x60000BF")]
	[Address(RVA = "0x316DD00", Offset = "0x316CD00", VA = "0x316DD00")]
	public static bool IsBackwards(this Tween t)
	{
		return default(bool);
	}

	[Token(Token = "0x60000C0")]
	[Address(RVA = "0x316DD80", Offset = "0x316CD80", VA = "0x316DD80")]
	public static bool IsLoopingOrExecutingBackwards(this Tween t)
	{
		return default(bool);
	}

	[Token(Token = "0x60000C1")]
	[Address(RVA = "0x316DE30", Offset = "0x316CE30", VA = "0x316DE30")]
	public static bool IsComplete(this Tween t)
	{
		return default(bool);
	}

	[Token(Token = "0x60000C2")]
	[Address(RVA = "0x316DEB0", Offset = "0x316CEB0", VA = "0x316DEB0")]
	public static bool IsTimeScaleIndependent(this Tween t)
	{
		return default(bool);
	}

	[Token(Token = "0x60000C3")]
	[Address(RVA = "0x316DF30", Offset = "0x316CF30", VA = "0x316DF30")]
	public static bool IsInitialized(this Tween t)
	{
		return default(bool);
	}

	[Token(Token = "0x60000C4")]
	[Address(RVA = "0x316DFB0", Offset = "0x316CFB0", VA = "0x316DFB0")]
	public static bool IsPlaying(this Tween t)
	{
		return default(bool);
	}

	[Token(Token = "0x60000C5")]
	[Address(RVA = "0x316E030", Offset = "0x316D030", VA = "0x316E030")]
	public static int Loops(this Tween t)
	{
		return default(int);
	}

	[Token(Token = "0x60000C6")]
	[Address(RVA = "0x316E0B0", Offset = "0x316D0B0", VA = "0x316E0B0")]
	public static Vector3 PathGetPoint(this Tween t, float pathPercentage)
	{
		return default(Vector3);
	}

	[Token(Token = "0x60000C7")]
	[Address(RVA = "0x316E310", Offset = "0x316D310", VA = "0x316E310")]
	public static Vector3[] PathGetDrawPoints(this Tween t, int subdivisionsXSegment = 10)
	{
		return null;
	}

	[Token(Token = "0x60000C8")]
	[Address(RVA = "0x316E510", Offset = "0x316D510", VA = "0x316E510")]
	public static float PathLength(this Tween t)
	{
		return default(float);
	}
}
