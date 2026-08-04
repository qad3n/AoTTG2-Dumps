// ==================== AoTTG2 cross-reference ====================
// Type: DG.Tweening.Tween
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using DG.Tweening.Core;
using DG.Tweening.Core.Enums;
using Il2CppDummyDll;

namespace DG.Tweening;

[Token(Token = "0x200006F")]
public abstract class Tween : ABSSequentiable
{
	[Token(Token = "0x400011A")]
	[FieldOffset(Offset = "0x28")]
	public float timeScale;

	[Token(Token = "0x400011B")]
	[FieldOffset(Offset = "0x2C")]
	public bool isBackwards;

	[Token(Token = "0x400011C")]
	[FieldOffset(Offset = "0x2D")]
	internal bool isInverted;

	[Token(Token = "0x400011D")]
	[FieldOffset(Offset = "0x30")]
	public object id;

	[Token(Token = "0x400011E")]
	[FieldOffset(Offset = "0x38")]
	public string stringId;

	[Token(Token = "0x400011F")]
	[FieldOffset(Offset = "0x40")]
	public int intId;

	[Token(Token = "0x4000120")]
	[FieldOffset(Offset = "0x48")]
	public object target;

	[Token(Token = "0x4000121")]
	[FieldOffset(Offset = "0x50")]
	internal UpdateType updateType;

	[Token(Token = "0x4000122")]
	[FieldOffset(Offset = "0x54")]
	internal bool isIndependentUpdate;

	[Token(Token = "0x4000123")]
	[FieldOffset(Offset = "0x58")]
	public TweenCallback onPlay;

	[Token(Token = "0x4000124")]
	[FieldOffset(Offset = "0x60")]
	public TweenCallback onPause;

	[Token(Token = "0x4000125")]
	[FieldOffset(Offset = "0x68")]
	public TweenCallback onRewind;

	[Token(Token = "0x4000126")]
	[FieldOffset(Offset = "0x70")]
	public TweenCallback onUpdate;

	[Token(Token = "0x4000127")]
	[FieldOffset(Offset = "0x78")]
	public TweenCallback onStepComplete;

	[Token(Token = "0x4000128")]
	[FieldOffset(Offset = "0x80")]
	public TweenCallback onComplete;

	[Token(Token = "0x4000129")]
	[FieldOffset(Offset = "0x88")]
	public TweenCallback onKill;

	[Token(Token = "0x400012A")]
	[FieldOffset(Offset = "0x90")]
	public TweenCallback<int> onWaypointChange;

	[Token(Token = "0x400012B")]
	[FieldOffset(Offset = "0x98")]
	internal bool isFrom;

	[Token(Token = "0x400012C")]
	[FieldOffset(Offset = "0x99")]
	internal bool isBlendable;

	[Token(Token = "0x400012D")]
	[FieldOffset(Offset = "0x9A")]
	internal bool isRecyclable;

	[Token(Token = "0x400012E")]
	[FieldOffset(Offset = "0x9B")]
	internal bool isSpeedBased;

	[Token(Token = "0x400012F")]
	[FieldOffset(Offset = "0x9C")]
	internal bool autoKill;

	[Token(Token = "0x4000130")]
	[FieldOffset(Offset = "0xA0")]
	internal float duration;

	[Token(Token = "0x4000131")]
	[FieldOffset(Offset = "0xA4")]
	internal int loops;

	[Token(Token = "0x4000132")]
	[FieldOffset(Offset = "0xA8")]
	internal LoopType loopType;

	[Token(Token = "0x4000133")]
	[FieldOffset(Offset = "0xAC")]
	internal float delay;

	[Token(Token = "0x4000135")]
	[FieldOffset(Offset = "0xB4")]
	internal Ease easeType;

	[Token(Token = "0x4000136")]
	[FieldOffset(Offset = "0xB8")]
	internal EaseFunction customEase;

	[Token(Token = "0x4000137")]
	[FieldOffset(Offset = "0xC0")]
	public float easeOvershootOrAmplitude;

	[Token(Token = "0x4000138")]
	[FieldOffset(Offset = "0xC4")]
	public float easePeriod;

	[Token(Token = "0x4000139")]
	[FieldOffset(Offset = "0xC8")]
	public string debugTargetId;

	[Token(Token = "0x400013A")]
	[FieldOffset(Offset = "0xD0")]
	internal Type typeofT1;

	[Token(Token = "0x400013B")]
	[FieldOffset(Offset = "0xD8")]
	internal Type typeofT2;

	[Token(Token = "0x400013C")]
	[FieldOffset(Offset = "0xE0")]
	internal Type typeofTPlugOptions;

	[Token(Token = "0x400013E")]
	[FieldOffset(Offset = "0xE9")]
	internal bool isSequenced;

	[Token(Token = "0x400013F")]
	[FieldOffset(Offset = "0xF0")]
	internal Sequence sequenceParent;

	[Token(Token = "0x4000140")]
	[FieldOffset(Offset = "0xF8")]
	internal int activeId;

	[Token(Token = "0x4000141")]
	[FieldOffset(Offset = "0xFC")]
	internal SpecialStartupMode specialStartupMode;

	[Token(Token = "0x4000142")]
	[FieldOffset(Offset = "0x100")]
	internal bool creationLocked;

	[Token(Token = "0x4000143")]
	[FieldOffset(Offset = "0x101")]
	internal bool startupDone;

	[Token(Token = "0x4000146")]
	[FieldOffset(Offset = "0x108")]
	internal float fullDuration;

	[Token(Token = "0x4000147")]
	[FieldOffset(Offset = "0x10C")]
	internal int completedLoops;

	[Token(Token = "0x4000148")]
	[FieldOffset(Offset = "0x110")]
	internal bool isPlaying;

	[Token(Token = "0x4000149")]
	[FieldOffset(Offset = "0x111")]
	internal bool isComplete;

	[Token(Token = "0x400014A")]
	[FieldOffset(Offset = "0x114")]
	internal float elapsedDelay;

	[Token(Token = "0x400014B")]
	[FieldOffset(Offset = "0x118")]
	internal bool delayComplete;

	[Token(Token = "0x400014C")]
	[FieldOffset(Offset = "0x11C")]
	internal int miscInt;

	[Token(Token = "0x17000006")]
	public bool isRelative
	{
		[Token(Token = "0x600029B")]
		[Address(RVA = "0x23701C0", Offset = "0x23701C0", VA = "0x23701C0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600029C")]
		[Address(RVA = "0x23701D0", Offset = "0x23701D0", VA = "0x23701D0")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x17000007")]
	public bool active
	{
		[Token(Token = "0x600029D")]
		[Address(RVA = "0x23701E0", Offset = "0x23701E0", VA = "0x23701E0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600029E")]
		[Address(RVA = "0x23701F0", Offset = "0x23701F0", VA = "0x23701F0")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x17000008")]
	public float fullPosition
	{
		[Token(Token = "0x600029F")]
		[Address(RVA = "0x2370200", Offset = "0x2370200", VA = "0x2370200")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60002A0")]
		[Address(RVA = "0x2370290", Offset = "0x2370290", VA = "0x2370290")]
		set
		{
		}
	}

	[Token(Token = "0x17000009")]
	public bool hasLoops
	{
		[Token(Token = "0x60002A1")]
		[Address(RVA = "0x235CA80", Offset = "0x235CA80", VA = "0x235CA80")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700000A")]
	public bool playedOnce
	{
		[Token(Token = "0x60002A2")]
		[Address(RVA = "0x23702A0", Offset = "0x23702A0", VA = "0x23702A0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60002A3")]
		[Address(RVA = "0x23702B0", Offset = "0x23702B0", VA = "0x23702B0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700000B")]
	public float position
	{
		[Token(Token = "0x60002A4")]
		[Address(RVA = "0x23702C0", Offset = "0x23702C0", VA = "0x23702C0")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60002A5")]
		[Address(RVA = "0x23702D0", Offset = "0x23702D0", VA = "0x23702D0")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x60002A6")]
	[Address(RVA = "0x235E690", Offset = "0x235E690", VA = "0x235E690", Slot = "4")]
	internal virtual void Reset()
	{
	}

	[Token(Token = "0x60002A7")]
	internal abstract bool Validate();

	[Token(Token = "0x60002A8")]
	[Address(RVA = "0x23702E0", Offset = "0x23702E0", VA = "0x23702E0", Slot = "6")]
	internal virtual float UpdateDelay(float elapsed)
	{
		return default(float);
	}

	[Token(Token = "0x60002A9")]
	internal abstract bool Startup();

	[Token(Token = "0x60002AA")]
	internal abstract bool ApplyTween(float prevPosition, int prevCompletedLoops, int newCompletedSteps, bool useInversePosition, UpdateMode updateMode, UpdateNotice updateNotice);

	[Token(Token = "0x60002AB")]
	[Address(RVA = "0x23702F0", Offset = "0x23702F0", VA = "0x23702F0")]
	internal static bool DoGoto(Tween t, float toPosition, int toCompletedLoops, UpdateMode updateMode)
	{
		return default(bool);
	}

	[Token(Token = "0x60002AC")]
	[Address(RVA = "0x235FA40", Offset = "0x235FA40", VA = "0x235FA40")]
	internal static bool OnTweenCallback(TweenCallback callback, Tween t)
	{
		return default(bool);
	}

	[Token(Token = "0x60002AD")]
	internal static bool OnTweenCallback<T>(TweenCallback<T> callback, Tween t, T param)
	{
		return default(bool);
	}

	[Token(Token = "0x60002AE")]
	[Address(RVA = "0x235DF80", Offset = "0x235DF80", VA = "0x235DF80")]
	protected Tween()
	{
	}
}
