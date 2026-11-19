// ==================== AoTTG2 cross-reference ====================
// Type: DG.Tweening.DOVirtual
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace DG.Tweening;

[Token(Token = "0x200000C")]
public static class DOVirtual
{
	[Token(Token = "0x6000075")]
	[Address(RVA = "0x316A5A0", Offset = "0x31695A0", VA = "0x316A5A0")]
	public static Tweener Float(float from, float to, float duration, TweenCallback<float> onVirtualUpdate)
	{
		return null;
	}

	[Token(Token = "0x6000076")]
	[Address(RVA = "0x316A840", Offset = "0x3169840", VA = "0x316A840")]
	public static Tweener Int(int from, int to, float duration, TweenCallback<int> onVirtualUpdate)
	{
		return null;
	}

	[Token(Token = "0x6000077")]
	[Address(RVA = "0x316AAC0", Offset = "0x3169AC0", VA = "0x316AAC0")]
	public static Tweener Vector2(Vector2 from, Vector2 to, float duration, TweenCallback<Vector2> onVirtualUpdate)
	{
		return null;
	}

	[Token(Token = "0x6000078")]
	[Address(RVA = "0x316AD50", Offset = "0x3169D50", VA = "0x316AD50")]
	public static Tweener Vector3(Vector3 from, Vector3 to, float duration, TweenCallback<Vector3> onVirtualUpdate)
	{
		return null;
	}

	[Token(Token = "0x6000079")]
	[Address(RVA = "0x316B000", Offset = "0x316A000", VA = "0x316B000")]
	public static Tweener Color(Color from, Color to, float duration, TweenCallback<Color> onVirtualUpdate)
	{
		return null;
	}

	[Token(Token = "0x600007A")]
	[Address(RVA = "0x316B2B0", Offset = "0x316A2B0", VA = "0x316B2B0")]
	public static float EasedValue(float from, float to, float lifetimePercentage, Ease easeType)
	{
		return default(float);
	}

	[Token(Token = "0x600007B")]
	[Address(RVA = "0x316B360", Offset = "0x316A360", VA = "0x316B360")]
	public static float EasedValue(float from, float to, float lifetimePercentage, Ease easeType, float overshoot)
	{
		return default(float);
	}

	[Token(Token = "0x600007C")]
	[Address(RVA = "0x316B430", Offset = "0x316A430", VA = "0x316B430")]
	public static float EasedValue(float from, float to, float lifetimePercentage, Ease easeType, float amplitude, float period)
	{
		return default(float);
	}

	[Token(Token = "0x600007D")]
	[Address(RVA = "0x316B470", Offset = "0x316A470", VA = "0x316B470")]
	public static float EasedValue(float from, float to, float lifetimePercentage, AnimationCurve easeCurve)
	{
		return default(float);
	}

	[Token(Token = "0x600007E")]
	[Address(RVA = "0x316B600", Offset = "0x316A600", VA = "0x316B600")]
	public static Vector3 EasedValue(Vector3 from, Vector3 to, float lifetimePercentage, Ease easeType)
	{
		return default(Vector3);
	}

	[Token(Token = "0x600007F")]
	[Address(RVA = "0x316B6E0", Offset = "0x316A6E0", VA = "0x316B6E0")]
	public static Vector3 EasedValue(Vector3 from, Vector3 to, float lifetimePercentage, Ease easeType, float overshoot)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000080")]
	[Address(RVA = "0x316B7D0", Offset = "0x316A7D0", VA = "0x316B7D0")]
	public static Vector3 EasedValue(Vector3 from, Vector3 to, float lifetimePercentage, Ease easeType, float amplitude, float period)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000081")]
	[Address(RVA = "0x316B840", Offset = "0x316A840", VA = "0x316B840")]
	public static Vector3 EasedValue(Vector3 from, Vector3 to, float lifetimePercentage, AnimationCurve easeCurve)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000082")]
	[Address(RVA = "0x316BA00", Offset = "0x316AA00", VA = "0x316BA00")]
	public static Tween DelayedCall(float delay, TweenCallback callback, bool ignoreTimeScale = true)
	{
		return null;
	}
}
