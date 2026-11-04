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

[Token(Token = "0x2000629")]
internal class AnimationHandler
{
	[Token(Token = "0x4001BA8")]
	[FieldOffset(Offset = "0x10")]
	private Animation Animation;

	[Token(Token = "0x4001BA9")]
	[FieldOffset(Offset = "0x18")]
	private Animator Animator;

	[Token(Token = "0x4001BAA")]
	[FieldOffset(Offset = "0x20")]
	private BaseCharacter Owner;

	[Token(Token = "0x4001BAB")]
	[FieldOffset(Offset = "0x28")]
	private GameObject OwnerObject;

	[Token(Token = "0x4001BAC")]
	[FieldOffset(Offset = "0x30")]
	private Renderer[] Renderers;

	[Token(Token = "0x4001BAD")]
	[FieldOffset(Offset = "0x38")]
	private Dictionary<string, float> _animationSpeed;

	[Token(Token = "0x4001BAE")]
	[FieldOffset(Offset = "0x40")]
	private Dictionary<string, float> _speedMultipliers;

	[Token(Token = "0x4001BAF")]
	[FieldOffset(Offset = "0x48")]
	private string _currentAnimation;

	[Token(Token = "0x4001BB0")]
	[FieldOffset(Offset = "0x50")]
	private float _currentAnimationStartTime;

	[Token(Token = "0x4001BB1")]
	[FieldOffset(Offset = "0x54")]
	private bool _isLegacy;

	[Token(Token = "0x4001BB2")]
	[FieldOffset(Offset = "0x55")]
	public bool LegacyCrossFadeTiming;

	[Token(Token = "0x4001BB3")]
	[FieldOffset(Offset = "0x58")]
	private Dictionary<string, AnimationClip> _animatorClips;

	[Token(Token = "0x4001BB4")]
	[FieldOffset(Offset = "0x60")]
	private Dictionary<string, string> _animatorStateNames;

	[Token(Token = "0x4001BB5")]
	[FieldOffset(Offset = "0x68")]
	private bool _shadowsEnabled;

	[Token(Token = "0x4001BB6")]
	[FieldOffset(Offset = "0x69")]
	private bool _visible;

	[Token(Token = "0x4001BB7")]
	[FieldOffset(Offset = "0x70")]
	private Dictionary<Renderer, bool> _shadowCasters;

	[Token(Token = "0x4001BB8")]
	[FieldOffset(Offset = "0x78")]
	private SkinQuality _skinQuality;

	[Token(Token = "0x4001BB9")]
	[FieldOffset(Offset = "0x7C")]
	private int _renderStateVersion;

	[Token(Token = "0x17000AB1")]
	public int RenderStateVersion
	{
		[Token(Token = "0x6003CA9")]
		[Address(RVA = "0x1BF1B70", Offset = "0x1BF0170", VA = "0x181BF1B70")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6003C92")]
	[Address(RVA = "0x2107F50", Offset = "0x2106550", VA = "0x182107F50")]
	public AnimationHandler(GameObject owner)
	{
	}

	[Token(Token = "0x6003C93")]
	[Address(RVA = "0x21078F0", Offset = "0x2105EF0", VA = "0x1821078F0")]
	public void RefreshRenderers()
	{
	}

	[Token(Token = "0x6003C94")]
	[Address(RVA = "0x2106BE0", Offset = "0x21051E0", VA = "0x182106BE0")]
	private bool CastsShadows(Renderer renderer, bool fallback = true)
	{
		return default(bool);
	}

	[Token(Token = "0x6003C95")]
	[Address(RVA = "0x2106FA0", Offset = "0x21055A0", VA = "0x182106FA0")]
	public string GetCurrentAnimation()
	{
		return null;
	}

	[Token(Token = "0x6003C96")]
	[Address(RVA = "0x2107270", Offset = "0x2105870", VA = "0x182107270")]
	public float GetLength(string name)
	{
		return default(float);
	}

	[Token(Token = "0x6003C97")]
	[Address(RVA = "0x21073A0", Offset = "0x21059A0", VA = "0x1821073A0")]
	public float GetSpeed(string name)
	{
		return default(float);
	}

	[Token(Token = "0x6003C98")]
	[Address(RVA = "0x2106F40", Offset = "0x2105540", VA = "0x182106F40")]
	public float GetBaseSpeed(string name)
	{
		return default(float);
	}

	[Token(Token = "0x6003C99")]
	[Address(RVA = "0x2107440", Offset = "0x2105A40", VA = "0x182107440")]
	public float GetTotalTime(string name)
	{
		return default(float);
	}

	[Token(Token = "0x6003C9A")]
	[Address(RVA = "0x2107310", Offset = "0x2105910", VA = "0x182107310")]
	public float GetNormalizedTime(string name)
	{
		return default(float);
	}

	[Token(Token = "0x6003C9B")]
	[Address(RVA = "0x21071B0", Offset = "0x21057B0", VA = "0x1821071B0")]
	public float GetCurrentNormalizedTime()
	{
		return default(float);
	}

	[Token(Token = "0x6003C9C")]
	[Address(RVA = "0x2107490", Offset = "0x2105A90", VA = "0x182107490")]
	public bool IsPlaying(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x6003C9D")]
	[Address(RVA = "0x21077B0", Offset = "0x2105DB0", VA = "0x1821077B0")]
	public void Play(string name, float startTime, bool reset = false)
	{
	}

	[Token(Token = "0x6003C9E")]
	[Address(RVA = "0x2106C60", Offset = "0x2105260", VA = "0x182106C60")]
	public void CrossFade(string name, float fade, float startTime)
	{
	}

	[Token(Token = "0x6003C9F")]
	[Address(RVA = "0x21074D0", Offset = "0x2105AD0", VA = "0x1821074D0")]
	private void LegacyCrossFade(string name, float fade, float startTime)
	{
	}

	[Token(Token = "0x6003CA0")]
	[Address(RVA = "0x2107E50", Offset = "0x2106450", VA = "0x182107E50")]
	public void SetSpeed(string name, float speed)
	{
	}

	[Token(Token = "0x6003CA1")]
	[Address(RVA = "0x2107DD0", Offset = "0x21063D0", VA = "0x182107DD0")]
	public void SetSpeedMultiplier(string name, float multiplier)
	{
	}

	[Token(Token = "0x6003CA2")]
	[Address(RVA = "0x2106B30", Offset = "0x2105130", VA = "0x182106B30")]
	private void ApplySpeed(string name)
	{
	}

	[Token(Token = "0x6003CA3")]
	[Address(RVA = "0x2107C20", Offset = "0x2106220", VA = "0x182107C20")]
	public void SetSpeedAll(float speed)
	{
	}

	[Token(Token = "0x6003CA4")]
	[Address(RVA = "0x2107B90", Offset = "0x2106190", VA = "0x182107B90")]
	public void SetCullingType(bool alwaysAnimate)
	{
	}

	[Token(Token = "0x6003CA5")]
	[Address(RVA = "0x2107640", Offset = "0x2105C40", VA = "0x182107640")]
	public void OnDistanceUpdate(float distance)
	{
	}

	[Token(Token = "0x6003CA6")]
	[Address(RVA = "0x2107ED0", Offset = "0x21064D0", VA = "0x182107ED0")]
	private void SetVisible(bool visible)
	{
	}

	[Token(Token = "0x6003CA7")]
	[Address(RVA = "0x2107C00", Offset = "0x2106200", VA = "0x182107C00")]
	private void SetQuality(SkinQuality quality)
	{
	}

	[Token(Token = "0x6003CA8")]
	[Address(RVA = "0x2107C10", Offset = "0x2106210", VA = "0x182107C10")]
	private void SetShadows(bool shadows)
	{
	}

	[Token(Token = "0x6003CAA")]
	[Address(RVA = "0x2106850", Offset = "0x2104E50", VA = "0x182106850")]
	private void ApplyRenderState()
	{
	}

	[Token(Token = "0x6003CAB")]
	[Address(RVA = "0x21069E0", Offset = "0x2104FE0", VA = "0x1821069E0")]
	public void ApplyRenderState(Renderer renderer)
	{
	}
}
