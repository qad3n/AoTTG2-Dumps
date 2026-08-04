// ==================== AoTTG2 cross-reference ====================
// Type: Characters.AnimationHandler
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/AnimationHandler.c
// Prior real C# source (older reference): Assets/Scripts/Characters/AnimationHandler.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace Characters;

[Token(Token = "0x20004D2")]
internal class AnimationHandler
{
	[Token(Token = "0x4001545")]
	[FieldOffset(Offset = "0x10")]
	private Animation Animation;

	[Token(Token = "0x4001546")]
	[FieldOffset(Offset = "0x18")]
	private Animator Animator;

	[Token(Token = "0x4001547")]
	[FieldOffset(Offset = "0x20")]
	private SkinnedMeshRenderer Renderer;

	[Token(Token = "0x4001548")]
	private const float LODBone2Distance = 500f;

	[Token(Token = "0x4001549")]
	private const float LODBone1Distance = 1000f;

	[Token(Token = "0x400154A")]
	[FieldOffset(Offset = "0x28")]
	private Dictionary<string, float> _animationSpeed;

	[Token(Token = "0x400154B")]
	[FieldOffset(Offset = "0x30")]
	private string _currentAnimation;

	[Token(Token = "0x400154C")]
	[FieldOffset(Offset = "0x38")]
	private float _currentAnimationStartTime;

	[Token(Token = "0x400154D")]
	[FieldOffset(Offset = "0x3C")]
	private bool _isLegacy;

	[Token(Token = "0x400154E")]
	[FieldOffset(Offset = "0x40")]
	private Dictionary<string, AnimationClip> _animatorClips;

	[Token(Token = "0x400154F")]
	[FieldOffset(Offset = "0x48")]
	private Dictionary<string, string> _animatorStateNames;

	[Token(Token = "0x60032D7")]
	[Address(RVA = "0x419D7B0", Offset = "0x419D7B0", VA = "0x419D7B0")]
	public AnimationHandler(GameObject owner)
	{
	}

	[Token(Token = "0x60032D8")]
	[Address(RVA = "0x419DF10", Offset = "0x419DF10", VA = "0x419DF10")]
	public string GetCurrentAnimation()
	{
		return null;
	}

	[Token(Token = "0x60032D9")]
	[Address(RVA = "0x419E300", Offset = "0x419E300", VA = "0x419E300")]
	public float GetLength(string name)
	{
		return default(float);
	}

	[Token(Token = "0x60032DA")]
	[Address(RVA = "0x419E390", Offset = "0x419E390", VA = "0x419E390")]
	public float GetSpeed(string name)
	{
		return default(float);
	}

	[Token(Token = "0x60032DB")]
	[Address(RVA = "0x419E3E0", Offset = "0x419E3E0", VA = "0x419E3E0")]
	public float GetTotalTime(string name)
	{
		return default(float);
	}

	[Token(Token = "0x60032DC")]
	[Address(RVA = "0x419E450", Offset = "0x419E450", VA = "0x419E450")]
	public float GetNormalizedTime(string name)
	{
		return default(float);
	}

	[Token(Token = "0x60032DD")]
	[Address(RVA = "0x419E4D0", Offset = "0x419E4D0", VA = "0x419E4D0")]
	public float GetCurrentNormalizedTime()
	{
		return default(float);
	}

	[Token(Token = "0x60032DE")]
	[Address(RVA = "0x419E5A0", Offset = "0x419E5A0", VA = "0x419E5A0")]
	public bool IsPlaying(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x60032DF")]
	[Address(RVA = "0x419E5D0", Offset = "0x419E5D0", VA = "0x419E5D0")]
	public void Play(string name, float startTime, bool reset = false)
	{
	}

	[Token(Token = "0x60032E0")]
	[Address(RVA = "0x419E720", Offset = "0x419E720", VA = "0x419E720")]
	public void CrossFade(string name, float fade, float startTime)
	{
	}

	[Token(Token = "0x60032E1")]
	[Address(RVA = "0x419E8D0", Offset = "0x419E8D0", VA = "0x419E8D0")]
	public void SetSpeed(string name, float speed)
	{
	}

	[Token(Token = "0x60032E2")]
	[Address(RVA = "0x419E9A0", Offset = "0x419E9A0", VA = "0x419E9A0")]
	public void SetSpeedAll(float speed)
	{
	}

	[Token(Token = "0x60032E3")]
	[Address(RVA = "0x419EFA0", Offset = "0x419EFA0", VA = "0x419EFA0")]
	public void SetCullingType(bool alwaysAnimate)
	{
	}

	[Token(Token = "0x60032E4")]
	[Address(RVA = "0x419F000", Offset = "0x419F000", VA = "0x419F000")]
	public void OnDistanceUpdate(float distance)
	{
	}

	[Token(Token = "0x60032E5")]
	[Address(RVA = "0x419F060", Offset = "0x419F060", VA = "0x419F060")]
	private void SetQuality(SkinQuality quality)
	{
	}

	[Token(Token = "0x60032E6")]
	[Address(RVA = "0x419F0F0", Offset = "0x419F0F0", VA = "0x419F0F0")]
	private void SetShadows(bool shadows)
	{
	}
}
