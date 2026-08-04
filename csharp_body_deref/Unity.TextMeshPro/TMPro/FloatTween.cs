// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.FloatTween
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Events;

namespace TMPro;

[Token(Token = "0x2000030")]
internal struct FloatTween : ITweenValue
{
	[Token(Token = "0x2000031")]
	public class FloatTweenCallback : UnityEvent<float>
	{
		[Token(Token = "0x6000169")]
		[Address(RVA = "0x4C459F0", Offset = "0x4C459F0", VA = "0x4C459F0")]
		public FloatTweenCallback()
		{
		}
	}

	[Token(Token = "0x400016E")]
	[FieldOffset(Offset = "0x0")]
	private FloatTweenCallback m_Target;

	[Token(Token = "0x400016F")]
	[FieldOffset(Offset = "0x8")]
	private float m_StartValue;

	[Token(Token = "0x4000170")]
	[FieldOffset(Offset = "0xC")]
	private float m_TargetValue;

	[Token(Token = "0x4000171")]
	[FieldOffset(Offset = "0x10")]
	private float m_Duration;

	[Token(Token = "0x4000172")]
	[FieldOffset(Offset = "0x14")]
	private bool m_IgnoreTimeScale;

	[Token(Token = "0x17000033")]
	public float startValue
	{
		[Token(Token = "0x600015C")]
		[Address(RVA = "0x4C45830", Offset = "0x4C45830", VA = "0x4C45830")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600015D")]
		[Address(RVA = "0x4C45840", Offset = "0x4C45840", VA = "0x4C45840")]
		set
		{
		}
	}

	[Token(Token = "0x17000034")]
	public float targetValue
	{
		[Token(Token = "0x600015E")]
		[Address(RVA = "0x4C45850", Offset = "0x4C45850", VA = "0x4C45850")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600015F")]
		[Address(RVA = "0x4C45860", Offset = "0x4C45860", VA = "0x4C45860")]
		set
		{
		}
	}

	[Token(Token = "0x17000035")]
	public float duration
	{
		[Token(Token = "0x6000160")]
		[Address(RVA = "0x4C45870", Offset = "0x4C45870", VA = "0x4C45870", Slot = "6")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000161")]
		[Address(RVA = "0x4C45880", Offset = "0x4C45880", VA = "0x4C45880")]
		set
		{
		}
	}

	[Token(Token = "0x17000036")]
	public bool ignoreTimeScale
	{
		[Token(Token = "0x6000162")]
		[Address(RVA = "0x4C45890", Offset = "0x4C45890", VA = "0x4C45890", Slot = "5")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000163")]
		[Address(RVA = "0x4C458A0", Offset = "0x4C458A0", VA = "0x4C458A0")]
		set
		{
		}
	}

	[Token(Token = "0x6000164")]
	[Address(RVA = "0x4C458B0", Offset = "0x4C458B0", VA = "0x4C458B0", Slot = "4")]
	public void TweenValue(float floatPercentage)
	{
	}

	[Token(Token = "0x6000165")]
	[Address(RVA = "0x4C45940", Offset = "0x4C45940", VA = "0x4C45940")]
	public void AddOnChangedCallback(UnityAction<float> callback)
	{
	}

	[Token(Token = "0x6000166")]
	[Address(RVA = "0x4C45A30", Offset = "0x4C45A30", VA = "0x4C45A30")]
	public bool GetIgnoreTimescale()
	{
		return default(bool);
	}

	[Token(Token = "0x6000167")]
	[Address(RVA = "0x4C45A40", Offset = "0x4C45A40", VA = "0x4C45A40")]
	public float GetDuration()
	{
		return default(float);
	}

	[Token(Token = "0x6000168")]
	[Address(RVA = "0x4C45930", Offset = "0x4C45930", VA = "0x4C45930", Slot = "7")]
	public bool ValidTarget()
	{
		return default(bool);
	}
}
