using Il2CppDummyDll;
using UnityEngine.Events;

namespace TMPro;

[Token(Token = "0x200001A")]
internal struct FloatTween : ITweenValue
{
	[Token(Token = "0x200001B")]
	public class FloatTweenCallback : UnityEvent<float>
	{
		[Token(Token = "0x6000078")]
		[Address(RVA = "0x48F8470", Offset = "0x48F8470", VA = "0x48F8470")]
		public FloatTweenCallback()
		{
		}
	}

	[Token(Token = "0x400007A")]
	[FieldOffset(Offset = "0x0")]
	private FloatTweenCallback m_Target;

	[Token(Token = "0x400007B")]
	[FieldOffset(Offset = "0x8")]
	private float m_StartValue;

	[Token(Token = "0x400007C")]
	[FieldOffset(Offset = "0xC")]
	private float m_TargetValue;

	[Token(Token = "0x400007D")]
	[FieldOffset(Offset = "0x10")]
	private float m_Duration;

	[Token(Token = "0x400007E")]
	[FieldOffset(Offset = "0x14")]
	private bool m_IgnoreTimeScale;

	[Token(Token = "0x17000012")]
	public float startValue
	{
		[Token(Token = "0x600006B")]
		[Address(RVA = "0x48F82B0", Offset = "0x48F82B0", VA = "0x48F82B0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600006C")]
		[Address(RVA = "0x48F82C0", Offset = "0x48F82C0", VA = "0x48F82C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000013")]
	public float targetValue
	{
		[Token(Token = "0x600006D")]
		[Address(RVA = "0x48F82D0", Offset = "0x48F82D0", VA = "0x48F82D0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600006E")]
		[Address(RVA = "0x48F82E0", Offset = "0x48F82E0", VA = "0x48F82E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000014")]
	public float duration
	{
		[Token(Token = "0x600006F")]
		[Address(RVA = "0x48F82F0", Offset = "0x48F82F0", VA = "0x48F82F0", Slot = "6")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000070")]
		[Address(RVA = "0x48F8300", Offset = "0x48F8300", VA = "0x48F8300")]
		set
		{
		}
	}

	[Token(Token = "0x17000015")]
	public bool ignoreTimeScale
	{
		[Token(Token = "0x6000071")]
		[Address(RVA = "0x48F8310", Offset = "0x48F8310", VA = "0x48F8310", Slot = "5")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000072")]
		[Address(RVA = "0x48F8320", Offset = "0x48F8320", VA = "0x48F8320")]
		set
		{
		}
	}

	[Token(Token = "0x6000073")]
	[Address(RVA = "0x48F8330", Offset = "0x48F8330", VA = "0x48F8330", Slot = "4")]
	public void TweenValue(float floatPercentage)
	{
	}

	[Token(Token = "0x6000074")]
	[Address(RVA = "0x48F83C0", Offset = "0x48F83C0", VA = "0x48F83C0")]
	public void AddOnChangedCallback(UnityAction<float> callback)
	{
	}

	[Token(Token = "0x6000075")]
	[Address(RVA = "0x48F84B0", Offset = "0x48F84B0", VA = "0x48F84B0")]
	public bool GetIgnoreTimescale()
	{
		return default(bool);
	}

	[Token(Token = "0x6000076")]
	[Address(RVA = "0x48F84C0", Offset = "0x48F84C0", VA = "0x48F84C0")]
	public float GetDuration()
	{
		return default(float);
	}

	[Token(Token = "0x6000077")]
	[Address(RVA = "0x48F83B0", Offset = "0x48F83B0", VA = "0x48F83B0", Slot = "7")]
	public bool ValidTarget()
	{
		return default(bool);
	}
}
