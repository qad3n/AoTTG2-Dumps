// ==================== AoTTG2 cross-reference ====================
// Type: Characters.AnimationHandler
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Characters/AnimationHandler.c
// Prior real C# source (older reference): Assets/Scripts/Characters/AnimationHandler.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace Characters;

[Token(Token = "0x2000688")]
internal class AnimationHandler
{
	[Token(Token = "0x4001D4B")]
	[FieldOffset(Offset = "0x10")]
	private Animation Animation;

	[Token(Token = "0x4001D4C")]
	[FieldOffset(Offset = "0x18")]
	private Animator Animator;

	[Token(Token = "0x4001D4D")]
	[FieldOffset(Offset = "0x20")]
	private BaseCharacter Owner;

	[Token(Token = "0x4001D4E")]
	[FieldOffset(Offset = "0x28")]
	private GameObject OwnerObject;

	[Token(Token = "0x4001D4F")]
	[FieldOffset(Offset = "0x30")]
	private Renderer[] Renderers;

	[Token(Token = "0x4001D50")]
	[FieldOffset(Offset = "0x38")]
	private Dictionary<string, float> _animationSpeed;

	[Token(Token = "0x4001D51")]
	[FieldOffset(Offset = "0x40")]
	private Dictionary<string, float> _speedMultipliers;

	[Token(Token = "0x4001D52")]
	[FieldOffset(Offset = "0x48")]
	private string _currentAnimation;

	[Token(Token = "0x4001D53")]
	[FieldOffset(Offset = "0x50")]
	private float _currentAnimationStartTime;

	[Token(Token = "0x4001D54")]
	[FieldOffset(Offset = "0x54")]
	private bool _isLegacy;

	[Token(Token = "0x4001D55")]
	[FieldOffset(Offset = "0x55")]
	public bool LegacyCrossFadeTiming;

	[Token(Token = "0x4001D56")]
	[FieldOffset(Offset = "0x58")]
	private Dictionary<string, AnimationClip> _animatorClips;

	[Token(Token = "0x4001D57")]
	[FieldOffset(Offset = "0x60")]
	private Dictionary<string, string> _animatorStateNames;

	[Token(Token = "0x4001D58")]
	[FieldOffset(Offset = "0x68")]
	private bool _shadowsEnabled;

	[Token(Token = "0x4001D59")]
	[FieldOffset(Offset = "0x69")]
	private bool _visible;

	[Token(Token = "0x4001D5A")]
	[FieldOffset(Offset = "0x70")]
	private Dictionary<Renderer, bool> _shadowCasters;

	[Token(Token = "0x4001D5B")]
	[FieldOffset(Offset = "0x78")]
	private SkinQuality _skinQuality;

	[Token(Token = "0x4001D5C")]
	[FieldOffset(Offset = "0x7C")]
	private int _renderStateVersion;

	[Token(Token = "0x17000AF9")]
	public int RenderStateVersion
	{
		[Token(Token = "0x6003F3A")]
		[Address(RVA = "0x5AB2680", Offset = "0x5AB1680", VA = "0x5AB2680")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6003F22")]
	[Address(RVA = "0x5AB0750", Offset = "0x5AAF750", VA = "0x5AB0750")]
	public AnimationHandler(GameObject owner)
	{
	}

	[Token(Token = "0x6003F23")]
	[Address(RVA = "0x5AB0F70", Offset = "0x5AAFF70", VA = "0x5AB0F70")]
	public void RefreshRenderers()
	{
	}

	[Token(Token = "0x6003F24")]
	[Address(RVA = "0x5AB1300", Offset = "0x5AB0300", VA = "0x5AB1300")]
	public void RestoreDefaultShadows(Transform root)
	{
	}

	[Token(Token = "0x6003F25")]
	[Address(RVA = "0x5AB1410", Offset = "0x5AB0410", VA = "0x5AB1410")]
	private bool CastsShadows(Renderer renderer, bool fallback = true)
	{
		return default(bool);
	}

	[Token(Token = "0x6003F26")]
	[Address(RVA = "0x5AB1490", Offset = "0x5AB0490", VA = "0x5AB1490")]
	public string GetCurrentAnimation()
	{
		return null;
	}

	[Token(Token = "0x6003F27")]
	[Address(RVA = "0x5AB17E0", Offset = "0x5AB07E0", VA = "0x5AB17E0")]
	public float GetLength(string name)
	{
		return default(float);
	}

	[Token(Token = "0x6003F28")]
	[Address(RVA = "0x5AB1870", Offset = "0x5AB0870", VA = "0x5AB1870")]
	public float GetSpeed(string name)
	{
		return default(float);
	}

	[Token(Token = "0x6003F29")]
	[Address(RVA = "0x5AB1920", Offset = "0x5AB0920", VA = "0x5AB1920")]
	public float GetBaseSpeed(string name)
	{
		return default(float);
	}

	[Token(Token = "0x6003F2A")]
	[Address(RVA = "0x5AB1970", Offset = "0x5AB0970", VA = "0x5AB1970")]
	public float GetTotalTime(string name)
	{
		return default(float);
	}

	[Token(Token = "0x6003F2B")]
	[Address(RVA = "0x5AB19B0", Offset = "0x5AB09B0", VA = "0x5AB19B0")]
	public float GetNormalizedTime(string name)
	{
		return default(float);
	}

	[Token(Token = "0x6003F2C")]
	[Address(RVA = "0x5AB1A30", Offset = "0x5AB0A30", VA = "0x5AB1A30")]
	public float GetCurrentNormalizedTime()
	{
		return default(float);
	}

	[Token(Token = "0x6003F2D")]
	[Address(RVA = "0x5AA8860", Offset = "0x5AA7860", VA = "0x5AA8860")]
	public bool IsPlaying(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x6003F2E")]
	[Address(RVA = "0x5AB1AC0", Offset = "0x5AB0AC0", VA = "0x5AB1AC0")]
	public void Play(string name, float startTime, bool reset = false)
	{
	}

	[Token(Token = "0x6003F2F")]
	[Address(RVA = "0x5AB1BE0", Offset = "0x5AB0BE0", VA = "0x5AB1BE0")]
	public void CrossFade(string name, float fade, float startTime)
	{
	}

	[Token(Token = "0x6003F30")]
	[Address(RVA = "0x5AB1DB0", Offset = "0x5AB0DB0", VA = "0x5AB1DB0")]
	private void LegacyCrossFade(string name, float fade, float startTime)
	{
	}

	[Token(Token = "0x6003F31")]
	[Address(RVA = "0x5AB1EF0", Offset = "0x5AB0EF0", VA = "0x5AB1EF0")]
	public void SetSpeed(string name, float speed)
	{
	}

	[Token(Token = "0x6003F32")]
	[Address(RVA = "0x5AB1FF0", Offset = "0x5AB0FF0", VA = "0x5AB1FF0")]
	public void SetSpeedMultiplier(string name, float multiplier)
	{
	}

	[Token(Token = "0x6003F33")]
	[Address(RVA = "0x5AB1F60", Offset = "0x5AB0F60", VA = "0x5AB1F60")]
	private void ApplySpeed(string name)
	{
	}

	[Token(Token = "0x6003F34")]
	[Address(RVA = "0x5AB2060", Offset = "0x5AB1060", VA = "0x5AB2060")]
	public void SetSpeedAll(float speed)
	{
	}

	[Token(Token = "0x6003F35")]
	[Address(RVA = "0x5AB1240", Offset = "0x5AB0240", VA = "0x5AB1240")]
	public void SetCullingType(bool alwaysAnimate)
	{
	}

	[Token(Token = "0x6003F36")]
	[Address(RVA = "0x5AB2230", Offset = "0x5AB1230", VA = "0x5AB2230")]
	public void OnDistanceUpdate(float distance)
	{
	}

	[Token(Token = "0x6003F37")]
	[Address(RVA = "0x5AB2520", Offset = "0x5AB1520", VA = "0x5AB2520")]
	private void SetVisible(bool visible)
	{
	}

	[Token(Token = "0x6003F38")]
	[Address(RVA = "0x5AB2610", Offset = "0x5AB1610", VA = "0x5AB2610")]
	private void SetQuality(SkinQuality quality)
	{
	}

	[Token(Token = "0x6003F39")]
	[Address(RVA = "0x5AB25A0", Offset = "0x5AB15A0", VA = "0x5AB25A0")]
	private void SetShadows(bool shadows)
	{
	}

	[Token(Token = "0x6003F3B")]
	[Address(RVA = "0x5AB12A0", Offset = "0x5AB02A0", VA = "0x5AB12A0")]
	private void ApplyRenderState()
	{
	}

	[Token(Token = "0x6003F3C")]
	[Address(RVA = "0x5AB2690", Offset = "0x5AB1690", VA = "0x5AB2690")]
	public void ApplyRenderState(Renderer renderer)
	{
	}
}
