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
	[Address(RVA = "0x317F500", Offset = "0x317E500", VA = "0x317F500")]
	public TweenParams()
	{
	}

	[Token(Token = "0x6000231")]
	[Address(RVA = "0x317F520", Offset = "0x317E520", VA = "0x317F520")]
	public TweenParams Clear()
	{
		return null;
	}

	[Token(Token = "0x6000232")]
	[Address(RVA = "0x317F6D0", Offset = "0x317E6D0", VA = "0x317F6D0")]
	public TweenParams SetAutoKill(bool autoKillOnCompletion = true)
	{
		return null;
	}

	[Token(Token = "0x6000233")]
	[Address(RVA = "0x317F6E0", Offset = "0x317E6E0", VA = "0x317F6E0")]
	public TweenParams SetId(object objectId)
	{
		return null;
	}

	[Token(Token = "0x6000234")]
	[Address(RVA = "0x317F700", Offset = "0x317E700", VA = "0x317F700")]
	public TweenParams SetId(string stringId)
	{
		return null;
	}

	[Token(Token = "0x6000235")]
	[Address(RVA = "0x317F720", Offset = "0x317E720", VA = "0x317F720")]
	public TweenParams SetId(int intId)
	{
		return null;
	}

	[Token(Token = "0x6000236")]
	[Address(RVA = "0x317F730", Offset = "0x317E730", VA = "0x317F730")]
	public TweenParams SetTarget(object target)
	{
		return null;
	}

	[Token(Token = "0x6000237")]
	[Address(RVA = "0x317F750", Offset = "0x317E750", VA = "0x317F750")]
	public TweenParams SetLoops(int loops, [Optional] LoopType? loopType)
	{
		return null;
	}

	[Token(Token = "0x6000238")]
	[Address(RVA = "0x317F7E0", Offset = "0x317E7E0", VA = "0x317F7E0")]
	public TweenParams SetEase(Ease ease, [Optional] float? overshootOrAmplitude, [Optional] float? period)
	{
		return null;
	}

	[Token(Token = "0x6000239")]
	[Address(RVA = "0x317F910", Offset = "0x317E910", VA = "0x317F910")]
	public TweenParams SetEase(AnimationCurve animCurve)
	{
		return null;
	}

	[Token(Token = "0x600023A")]
	[Address(RVA = "0x317FA40", Offset = "0x317EA40", VA = "0x317FA40")]
	public TweenParams SetEase(EaseFunction customEase)
	{
		return null;
	}

	[Token(Token = "0x600023B")]
	[Address(RVA = "0x317FA70", Offset = "0x317EA70", VA = "0x317FA70")]
	public TweenParams SetRecyclable(bool recyclable = true)
	{
		return null;
	}

	[Token(Token = "0x600023C")]
	[Address(RVA = "0x317FA80", Offset = "0x317EA80", VA = "0x317FA80")]
	public TweenParams SetUpdate(bool isIndependentUpdate)
	{
		return null;
	}

	[Token(Token = "0x600023D")]
	[Address(RVA = "0x317FAE0", Offset = "0x317EAE0", VA = "0x317FAE0")]
	public TweenParams SetUpdate(UpdateType updateType, bool isIndependentUpdate = false)
	{
		return null;
	}

	[Token(Token = "0x600023E")]
	[Address(RVA = "0x317FAF0", Offset = "0x317EAF0", VA = "0x317FAF0")]
	public TweenParams OnStart(TweenCallback action)
	{
		return null;
	}

	[Token(Token = "0x600023F")]
	[Address(RVA = "0x317FB10", Offset = "0x317EB10", VA = "0x317FB10")]
	public TweenParams OnPlay(TweenCallback action)
	{
		return null;
	}

	[Token(Token = "0x6000240")]
	[Address(RVA = "0x317FB30", Offset = "0x317EB30", VA = "0x317FB30")]
	public TweenParams OnRewind(TweenCallback action)
	{
		return null;
	}

	[Token(Token = "0x6000241")]
	[Address(RVA = "0x317FB50", Offset = "0x317EB50", VA = "0x317FB50")]
	public TweenParams OnUpdate(TweenCallback action)
	{
		return null;
	}

	[Token(Token = "0x6000242")]
	[Address(RVA = "0x317FB70", Offset = "0x317EB70", VA = "0x317FB70")]
	public TweenParams OnStepComplete(TweenCallback action)
	{
		return null;
	}

	[Token(Token = "0x6000243")]
	[Address(RVA = "0x317FB90", Offset = "0x317EB90", VA = "0x317FB90")]
	public TweenParams OnComplete(TweenCallback action)
	{
		return null;
	}

	[Token(Token = "0x6000244")]
	[Address(RVA = "0x317FBB0", Offset = "0x317EBB0", VA = "0x317FBB0")]
	public TweenParams OnKill(TweenCallback action)
	{
		return null;
	}

	[Token(Token = "0x6000245")]
	[Address(RVA = "0x317FBD0", Offset = "0x317EBD0", VA = "0x317FBD0")]
	public TweenParams OnWaypointChange(TweenCallback<int> action)
	{
		return null;
	}

	[Token(Token = "0x6000246")]
	[Address(RVA = "0x317FBF0", Offset = "0x317EBF0", VA = "0x317FBF0")]
	public TweenParams SetDelay(float delay)
	{
		return null;
	}

	[Token(Token = "0x6000247")]
	[Address(RVA = "0x317FC00", Offset = "0x317EC00", VA = "0x317FC00")]
	public TweenParams SetRelative(bool isRelative = true)
	{
		return null;
	}

	[Token(Token = "0x6000248")]
	[Address(RVA = "0x317FC10", Offset = "0x317EC10", VA = "0x317FC10")]
	public TweenParams SetSpeedBased(bool isSpeedBased = true)
	{
		return null;
	}
}
