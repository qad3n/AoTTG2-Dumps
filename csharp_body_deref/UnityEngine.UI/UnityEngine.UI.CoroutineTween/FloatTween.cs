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
		[Address(RVA = "0x32F6470", Offset = "0x32F4A70", VA = "0x1832F6470")]
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
		[Address(RVA = "0x562B90", Offset = "0x561190", VA = "0x180562B90")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600057B")]
		[Address(RVA = "0x2CDDA10", Offset = "0x2CDC010", VA = "0x182CDDA10")]
		set
		{
		}
	}

	[Token(Token = "0x17000165")]
	public float targetValue
	{
		[Token(Token = "0x600057C")]
		[Address(RVA = "0x562B80", Offset = "0x561180", VA = "0x180562B80")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600057D")]
		[Address(RVA = "0x2A3A8E0", Offset = "0x2A38EE0", VA = "0x182A3A8E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000166")]
	public float duration
	{
		[Token(Token = "0x600057E")]
		[Address(RVA = "0x5606A0", Offset = "0x55ECA0", VA = "0x1805606A0", Slot = "6")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600057F")]
		[Address(RVA = "0x5606B0", Offset = "0x55ECB0", VA = "0x1805606B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000167")]
	public bool ignoreTimeScale
	{
		[Token(Token = "0x6000580")]
		[Address(RVA = "0x1537420", Offset = "0x1535A20", VA = "0x181537420", Slot = "5")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000581")]
		[Address(RVA = "0x1A78710", Offset = "0x1A76D10", VA = "0x181A78710")]
		set
		{
		}
	}

	[Token(Token = "0x6000582")]
	[Address(RVA = "0x32F6570", Offset = "0x32F4B70", VA = "0x1832F6570", Slot = "4")]
	public void TweenValue(float floatPercentage)
	{
	}

	[Token(Token = "0x6000583")]
	[Address(RVA = "0x32F64B0", Offset = "0x32F4AB0", VA = "0x1832F64B0")]
	public void AddOnChangedCallback(UnityAction<float> callback)
	{
	}

	[Token(Token = "0x6000584")]
	[Address(RVA = "0x1537420", Offset = "0x1535A20", VA = "0x181537420")]
	public bool GetIgnoreTimescale()
	{
		return default(bool);
	}

	[Token(Token = "0x6000585")]
	[Address(RVA = "0x5606A0", Offset = "0x55ECA0", VA = "0x1805606A0")]
	public float GetDuration()
	{
		return default(float);
	}

	[Token(Token = "0x6000586")]
	[Address(RVA = "0x1B96F50", Offset = "0x1B95550", VA = "0x181B96F50", Slot = "7")]
	public bool ValidTarget()
	{
		return default(bool);
	}
}
