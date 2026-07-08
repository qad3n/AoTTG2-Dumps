using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace Characters;

[Token(Token = "0x200048D")]
internal class AnimationHandler
{
	[Token(Token = "0x4001434")]
	[FieldOffset(Offset = "0x10")]
	private Animation Animation;

	[Token(Token = "0x4001435")]
	[FieldOffset(Offset = "0x18")]
	private Animator Animator;

	[Token(Token = "0x4001436")]
	[FieldOffset(Offset = "0x20")]
	private SkinnedMeshRenderer Renderer;

	[Token(Token = "0x4001437")]
	private const float LODBone2Distance = 500f;

	[Token(Token = "0x4001438")]
	private const float LODBone1Distance = 1000f;

	[Token(Token = "0x4001439")]
	[FieldOffset(Offset = "0x28")]
	private Dictionary<string, float> _animationSpeed;

	[Token(Token = "0x400143A")]
	[FieldOffset(Offset = "0x30")]
	private string _currentAnimation;

	[Token(Token = "0x400143B")]
	[FieldOffset(Offset = "0x38")]
	private float _currentAnimationStartTime;

	[Token(Token = "0x400143C")]
	[FieldOffset(Offset = "0x3C")]
	private bool _isLegacy;

	[Token(Token = "0x400143D")]
	[FieldOffset(Offset = "0x40")]
	private Dictionary<string, AnimationClip> _animatorClips;

	[Token(Token = "0x400143E")]
	[FieldOffset(Offset = "0x48")]
	private Dictionary<string, string> _animatorStateNames;

	[Token(Token = "0x60030CA")]
	[Address(RVA = "0x3E91210", Offset = "0x3E91210", VA = "0x3E91210")]
	public AnimationHandler(GameObject owner)
	{
	}

	[Token(Token = "0x60030CB")]
	[Address(RVA = "0x3E91970", Offset = "0x3E91970", VA = "0x3E91970")]
	public string GetCurrentAnimation()
	{
		return null;
	}

	[Token(Token = "0x60030CC")]
	[Address(RVA = "0x3E91D60", Offset = "0x3E91D60", VA = "0x3E91D60")]
	public float GetLength(string name)
	{
		return default(float);
	}

	[Token(Token = "0x60030CD")]
	[Address(RVA = "0x3E91DF0", Offset = "0x3E91DF0", VA = "0x3E91DF0")]
	public float GetSpeed(string name)
	{
		return default(float);
	}

	[Token(Token = "0x60030CE")]
	[Address(RVA = "0x3E91E40", Offset = "0x3E91E40", VA = "0x3E91E40")]
	public float GetTotalTime(string name)
	{
		return default(float);
	}

	[Token(Token = "0x60030CF")]
	[Address(RVA = "0x3E91EB0", Offset = "0x3E91EB0", VA = "0x3E91EB0")]
	public float GetNormalizedTime(string name)
	{
		return default(float);
	}

	[Token(Token = "0x60030D0")]
	[Address(RVA = "0x3E91F30", Offset = "0x3E91F30", VA = "0x3E91F30")]
	public float GetCurrentNormalizedTime()
	{
		return default(float);
	}

	[Token(Token = "0x60030D1")]
	[Address(RVA = "0x3E92000", Offset = "0x3E92000", VA = "0x3E92000")]
	public bool IsPlaying(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x60030D2")]
	[Address(RVA = "0x3E92030", Offset = "0x3E92030", VA = "0x3E92030")]
	public void Play(string name, float startTime, bool reset = false)
	{
	}

	[Token(Token = "0x60030D3")]
	[Address(RVA = "0x3E92180", Offset = "0x3E92180", VA = "0x3E92180")]
	public void CrossFade(string name, float fade, float startTime)
	{
	}

	[Token(Token = "0x60030D4")]
	[Address(RVA = "0x3E92330", Offset = "0x3E92330", VA = "0x3E92330")]
	public void SetSpeed(string name, float speed)
	{
	}

	[Token(Token = "0x60030D5")]
	[Address(RVA = "0x3E92400", Offset = "0x3E92400", VA = "0x3E92400")]
	public void SetSpeedAll(float speed)
	{
	}

	[Token(Token = "0x60030D6")]
	[Address(RVA = "0x3E92A00", Offset = "0x3E92A00", VA = "0x3E92A00")]
	public void SetCullingType(bool alwaysAnimate)
	{
	}

	[Token(Token = "0x60030D7")]
	[Address(RVA = "0x3E92A60", Offset = "0x3E92A60", VA = "0x3E92A60")]
	public void OnDistanceUpdate(float distance)
	{
	}

	[Token(Token = "0x60030D8")]
	[Address(RVA = "0x3E92AC0", Offset = "0x3E92AC0", VA = "0x3E92AC0")]
	private void SetQuality(SkinQuality quality)
	{
	}

	[Token(Token = "0x60030D9")]
	[Address(RVA = "0x3E92B50", Offset = "0x3E92B50", VA = "0x3E92B50")]
	private void SetShadows(bool shadows)
	{
	}
}
