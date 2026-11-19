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

[Token(Token = "0x200008C")]
internal struct FloatTween : ITweenValue
{
	[Token(Token = "0x200008D")]
	public class FloatTweenCallback : UnityEvent<float>
	{
		[Token(Token = "0x6000587")]
		[Address(RVA = "0x6D00C20", Offset = "0x6CFFC20", VA = "0x6D00C20")]
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

	[Token(Token = "0x17000164")]
	public float startValue
	{
		[Token(Token = "0x600057A")]
		[Address(RVA = "0x6D00A60", Offset = "0x6CFFA60", VA = "0x6D00A60")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600057B")]
		[Address(RVA = "0x6D00A70", Offset = "0x6CFFA70", VA = "0x6D00A70")]
		set
		{
		}
	}

	[Token(Token = "0x17000165")]
	public float targetValue
	{
		[Token(Token = "0x600057C")]
		[Address(RVA = "0x6D00A80", Offset = "0x6CFFA80", VA = "0x6D00A80")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600057D")]
		[Address(RVA = "0x6D00A90", Offset = "0x6CFFA90", VA = "0x6D00A90")]
		set
		{
		}
	}

	[Token(Token = "0x17000166")]
	public float duration
	{
		[Token(Token = "0x600057E")]
		[Address(RVA = "0x6D00AA0", Offset = "0x6CFFAA0", VA = "0x6D00AA0", Slot = "6")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600057F")]
		[Address(RVA = "0x6D00AB0", Offset = "0x6CFFAB0", VA = "0x6D00AB0")]
		set
		{
		}
	}

	[Token(Token = "0x17000167")]
	public bool ignoreTimeScale
	{
		[Token(Token = "0x6000580")]
		[Address(RVA = "0x6D00AC0", Offset = "0x6CFFAC0", VA = "0x6D00AC0", Slot = "5")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000581")]
		[Address(RVA = "0x6D00AD0", Offset = "0x6CFFAD0", VA = "0x6D00AD0")]
		set
		{
		}
	}

	[Token(Token = "0x6000582")]
	[Address(RVA = "0x6D00AE0", Offset = "0x6CFFAE0", VA = "0x6D00AE0", Slot = "4")]
	public void TweenValue(float floatPercentage)
	{
	}

	[Token(Token = "0x6000583")]
	[Address(RVA = "0x6D00B70", Offset = "0x6CFFB70", VA = "0x6D00B70")]
	public void AddOnChangedCallback(UnityAction<float> callback)
	{
	}

	[Token(Token = "0x6000584")]
	[Address(RVA = "0x6D00C60", Offset = "0x6CFFC60", VA = "0x6D00C60")]
	public bool GetIgnoreTimescale()
	{
		return default(bool);
	}

	[Token(Token = "0x6000585")]
	[Address(RVA = "0x6D00C70", Offset = "0x6CFFC70", VA = "0x6D00C70")]
	public float GetDuration()
	{
		return default(float);
	}

	[Token(Token = "0x6000586")]
	[Address(RVA = "0x6D00B60", Offset = "0x6CFFB60", VA = "0x6D00B60", Slot = "7")]
	public bool ValidTarget()
	{
		return default(bool);
	}
}
