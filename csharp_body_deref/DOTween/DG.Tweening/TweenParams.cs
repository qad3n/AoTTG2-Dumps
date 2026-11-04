// ==================== AoTTG2 cross-reference ====================
// Type: DG.Tweening.TweenParams
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;

namespace DG.Tweening;

[Token(Token = "0x200006C")]
public class TweenParams
{
	[Token(Token = "0x40000FC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static readonly TweenParams Params;

	[Token(Token = "0x40000FD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal object id;

	[Token(Token = "0x40000FE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	internal string stringId;

	[Token(Token = "0x40000FF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	internal int intId;

	[Token(Token = "0x4000100")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	internal object target;

	[Token(Token = "0x4000101")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	internal UpdateType updateType;

	[Token(Token = "0x4000102")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x34")]
	internal bool isIndependentUpdate;

	[Token(Token = "0x4000103")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	internal TweenCallback onStart;

	[Token(Token = "0x4000104")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	internal TweenCallback onPlay;

	[Token(Token = "0x4000105")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	internal TweenCallback onRewind;

	[Token(Token = "0x4000106")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	internal TweenCallback onUpdate;

	[Token(Token = "0x4000107")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	internal TweenCallback onStepComplete;

	[Token(Token = "0x4000108")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	internal TweenCallback onComplete;

	[Token(Token = "0x4000109")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	internal TweenCallback onKill;

	[Token(Token = "0x400010A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	internal TweenCallback<int> onWaypointChange;

	[Token(Token = "0x400010B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	internal bool isRecyclable;

	[Token(Token = "0x400010C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x79")]
	internal bool isSpeedBased;

	[Token(Token = "0x400010D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x7A")]
	internal bool autoKill;

	[Token(Token = "0x400010E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x7C")]
	internal int loops;

	[Token(Token = "0x400010F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	internal LoopType loopType;

	[Token(Token = "0x4000110")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x84")]
	internal float delay;

	[Token(Token = "0x4000111")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	internal bool isRelative;

	[Token(Token = "0x4000112")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8C")]
	internal Ease easeType;

	[Token(Token = "0x4000113")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	internal EaseFunction customEase;

	[Token(Token = "0x4000114")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	internal float easeOvershootOrAmplitude;

	[Token(Token = "0x4000115")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x9C")]
	internal float easePeriod;

	[Token(Token = "0x6000230")]
	[Address(RVA = "0x55E600", Offset = "0x55CC00", VA = "0x18055E600")]
	public TweenParams()
	{
	}

	[Token(Token = "0x6000231")]
	[Address(RVA = "0x55DCC0", Offset = "0x55C2C0", VA = "0x18055DCC0")]
	public TweenParams Clear()
	{
		return null;
	}

	[Token(Token = "0x6000232")]
	[Address(RVA = "0x55DF90", Offset = "0x55C590", VA = "0x18055DF90")]
	public TweenParams SetAutoKill(bool autoKillOnCompletion = true)
	{
		return null;
	}

	[Token(Token = "0x6000233")]
	[Address(RVA = "0x55E220", Offset = "0x55C820", VA = "0x18055E220")]
	public TweenParams SetId(object objectId)
	{
		return null;
	}

	[Token(Token = "0x6000234")]
	[Address(RVA = "0x55E240", Offset = "0x55C840", VA = "0x18055E240")]
	public TweenParams SetId(string stringId)
	{
		return null;
	}

	[Token(Token = "0x6000235")]
	[Address(RVA = "0x55E260", Offset = "0x55C860", VA = "0x18055E260")]
	public TweenParams SetId(int intId)
	{
		return null;
	}

	[Token(Token = "0x6000236")]
	[Address(RVA = "0x55E330", Offset = "0x55C930", VA = "0x18055E330")]
	public TweenParams SetTarget(object target)
	{
		return null;
	}

	[Token(Token = "0x6000237")]
	[Address(RVA = "0x55E270", Offset = "0x55C870", VA = "0x18055E270")]
	public TweenParams SetLoops(int loops, [Optional] LoopType? loopType)
	{
		return null;
	}

	[Token(Token = "0x6000238")]
	[Address(RVA = "0x55E0D0", Offset = "0x55C6D0", VA = "0x18055E0D0")]
	public TweenParams SetEase(Ease ease, [Optional] float? overshootOrAmplitude, [Optional] float? period)
	{
		return null;
	}

	[Token(Token = "0x6000239")]
	[Address(RVA = "0x55DFB0", Offset = "0x55C5B0", VA = "0x18055DFB0")]
	public TweenParams SetEase(AnimationCurve animCurve)
	{
		return null;
	}

	[Token(Token = "0x600023A")]
	[Address(RVA = "0x55E1F0", Offset = "0x55C7F0", VA = "0x18055E1F0")]
	public TweenParams SetEase(EaseFunction customEase)
	{
		return null;
	}

	[Token(Token = "0x600023B")]
	[Address(RVA = "0x55E300", Offset = "0x55C900", VA = "0x18055E300")]
	public TweenParams SetRecyclable(bool recyclable = true)
	{
		return null;
	}

	[Token(Token = "0x600023C")]
	[Address(RVA = "0x55E360", Offset = "0x55C960", VA = "0x18055E360")]
	public TweenParams SetUpdate(bool isIndependentUpdate)
	{
		return null;
	}

	[Token(Token = "0x600023D")]
	[Address(RVA = "0x55E350", Offset = "0x55C950", VA = "0x18055E350")]
	public TweenParams SetUpdate(UpdateType updateType, bool isIndependentUpdate = false)
	{
		return null;
	}

	[Token(Token = "0x600023E")]
	[Address(RVA = "0x55DF10", Offset = "0x55C510", VA = "0x18055DF10")]
	public TweenParams OnStart(TweenCallback action)
	{
		return null;
	}

	[Token(Token = "0x600023F")]
	[Address(RVA = "0x55DED0", Offset = "0x55C4D0", VA = "0x18055DED0")]
	public TweenParams OnPlay(TweenCallback action)
	{
		return null;
	}

	[Token(Token = "0x6000240")]
	[Address(RVA = "0x55DEF0", Offset = "0x55C4F0", VA = "0x18055DEF0")]
	public TweenParams OnRewind(TweenCallback action)
	{
		return null;
	}

	[Token(Token = "0x6000241")]
	[Address(RVA = "0x55DF50", Offset = "0x55C550", VA = "0x18055DF50")]
	public TweenParams OnUpdate(TweenCallback action)
	{
		return null;
	}

	[Token(Token = "0x6000242")]
	[Address(RVA = "0x55DF30", Offset = "0x55C530", VA = "0x18055DF30")]
	public TweenParams OnStepComplete(TweenCallback action)
	{
		return null;
	}

	[Token(Token = "0x6000243")]
	[Address(RVA = "0x55DE90", Offset = "0x55C490", VA = "0x18055DE90")]
	public TweenParams OnComplete(TweenCallback action)
	{
		return null;
	}

	[Token(Token = "0x6000244")]
	[Address(RVA = "0x55DEB0", Offset = "0x55C4B0", VA = "0x18055DEB0")]
	public TweenParams OnKill(TweenCallback action)
	{
		return null;
	}

	[Token(Token = "0x6000245")]
	[Address(RVA = "0x55DF70", Offset = "0x55C570", VA = "0x18055DF70")]
	public TweenParams OnWaypointChange(TweenCallback<int> action)
	{
		return null;
	}

	[Token(Token = "0x6000246")]
	[Address(RVA = "0x55DFA0", Offset = "0x55C5A0", VA = "0x18055DFA0")]
	public TweenParams SetDelay(float delay)
	{
		return null;
	}

	[Token(Token = "0x6000247")]
	[Address(RVA = "0x55E310", Offset = "0x55C910", VA = "0x18055E310")]
	public TweenParams SetRelative(bool isRelative = true)
	{
		return null;
	}

	[Token(Token = "0x6000248")]
	[Address(RVA = "0x55E320", Offset = "0x55C920", VA = "0x18055E320")]
	public TweenParams SetSpeedBased(bool isSpeedBased = true)
	{
		return null;
	}
}
