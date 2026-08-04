// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UI.CoroutineTween.FloatTween
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Events;

namespace UnityEngine.UI.CoroutineTween;

[Token(Token = "0x200008E")]
internal struct FloatTween : ITweenValue
{
	[Token(Token = "0x200008F")]
	public class FloatTweenCallback : UnityEvent<float>
	{
		[Token(Token = "0x600057B")]
		[Address(RVA = "0x50F0E60", Offset = "0x50F0E60", VA = "0x50F0E60")]
		public FloatTweenCallback()
		{
		}
	}

	[Token(Token = "0x4000280")]
	[FieldOffset(Offset = "0x0")]
	private FloatTweenCallback m_Target;

	[Token(Token = "0x4000281")]
	[FieldOffset(Offset = "0x8")]
	private float m_StartValue;

	[Token(Token = "0x4000282")]
	[FieldOffset(Offset = "0xC")]
	private float m_TargetValue;

	[Token(Token = "0x4000283")]
	[FieldOffset(Offset = "0x10")]
	private float m_Duration;

	[Token(Token = "0x4000284")]
	[FieldOffset(Offset = "0x14")]
	private bool m_IgnoreTimeScale;

	[Token(Token = "0x17000163")]
	public float startValue
	{
		[Token(Token = "0x600056E")]
		[Address(RVA = "0x50F0CA0", Offset = "0x50F0CA0", VA = "0x50F0CA0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600056F")]
		[Address(RVA = "0x50F0CB0", Offset = "0x50F0CB0", VA = "0x50F0CB0")]
		set
		{
		}
	}

	[Token(Token = "0x17000164")]
	public float targetValue
	{
		[Token(Token = "0x6000570")]
		[Address(RVA = "0x50F0CC0", Offset = "0x50F0CC0", VA = "0x50F0CC0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000571")]
		[Address(RVA = "0x50F0CD0", Offset = "0x50F0CD0", VA = "0x50F0CD0")]
		set
		{
		}
	}

	[Token(Token = "0x17000165")]
	public float duration
	{
		[Token(Token = "0x6000572")]
		[Address(RVA = "0x50F0CE0", Offset = "0x50F0CE0", VA = "0x50F0CE0", Slot = "6")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000573")]
		[Address(RVA = "0x50F0CF0", Offset = "0x50F0CF0", VA = "0x50F0CF0")]
		set
		{
		}
	}

	[Token(Token = "0x17000166")]
	public bool ignoreTimeScale
	{
		[Token(Token = "0x6000574")]
		[Address(RVA = "0x50F0D00", Offset = "0x50F0D00", VA = "0x50F0D00", Slot = "5")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000575")]
		[Address(RVA = "0x50F0D10", Offset = "0x50F0D10", VA = "0x50F0D10")]
		set
		{
		}
	}

	[Token(Token = "0x6000576")]
	[Address(RVA = "0x50F0D20", Offset = "0x50F0D20", VA = "0x50F0D20", Slot = "4")]
	public void TweenValue(float floatPercentage)
	{
	}

	[Token(Token = "0x6000577")]
	[Address(RVA = "0x50F0DB0", Offset = "0x50F0DB0", VA = "0x50F0DB0")]
	public void AddOnChangedCallback(UnityAction<float> callback)
	{
	}

	[Token(Token = "0x6000578")]
	[Address(RVA = "0x50F0EA0", Offset = "0x50F0EA0", VA = "0x50F0EA0")]
	public bool GetIgnoreTimescale()
	{
		return default(bool);
	}

	[Token(Token = "0x6000579")]
	[Address(RVA = "0x50F0EB0", Offset = "0x50F0EB0", VA = "0x50F0EB0")]
	public float GetDuration()
	{
		return default(float);
	}

	[Token(Token = "0x600057A")]
	[Address(RVA = "0x50F0DA0", Offset = "0x50F0DA0", VA = "0x50F0DA0", Slot = "7")]
	public bool ValidTarget()
	{
		return default(bool);
	}
}
