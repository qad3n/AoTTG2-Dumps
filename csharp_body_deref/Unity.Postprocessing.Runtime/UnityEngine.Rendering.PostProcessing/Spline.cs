using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.PostProcessing;

[Serializable]
[Token(Token = "0x200008A")]
public sealed class Spline
{
	[Token(Token = "0x40002EE")]
	public const int k_Precision = 128;

	[Token(Token = "0x40002EF")]
	public const float k_Step = 1f / 128f;

	[Token(Token = "0x40002F0")]
	[FieldOffset(Offset = "0x10")]
	public AnimationCurve curve;

	[Token(Token = "0x40002F1")]
	[FieldOffset(Offset = "0x18")]
	[SerializeField]
	private bool m_Loop;

	[Token(Token = "0x40002F2")]
	[FieldOffset(Offset = "0x1C")]
	[SerializeField]
	private float m_ZeroValue;

	[Token(Token = "0x40002F3")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	private float m_Range;

	[Token(Token = "0x40002F4")]
	[FieldOffset(Offset = "0x28")]
	private AnimationCurve m_InternalLoopingCurve;

	[Token(Token = "0x40002F5")]
	[FieldOffset(Offset = "0x30")]
	private int frameCount;

	[Token(Token = "0x40002F6")]
	[FieldOffset(Offset = "0x38")]
	public float[] cachedData;

	[Token(Token = "0x600024B")]
	[Address(RVA = "0x4840530", Offset = "0x4840530", VA = "0x4840530")]
	public Spline(AnimationCurve curve, float zeroValue, bool loop, Vector2 bounds)
	{
	}

	[Token(Token = "0x600024C")]
	[Address(RVA = "0x4840640", Offset = "0x4840640", VA = "0x4840640")]
	public void Cache(int frame)
	{
	}

	[Token(Token = "0x600024D")]
	[Address(RVA = "0x48409B0", Offset = "0x48409B0", VA = "0x48409B0")]
	public float Evaluate(float t, int length)
	{
		return default(float);
	}

	[Token(Token = "0x600024E")]
	[Address(RVA = "0x48409F0", Offset = "0x48409F0", VA = "0x48409F0")]
	public float Evaluate(float t)
	{
		return default(float);
	}

	[Token(Token = "0x600024F")]
	[Address(RVA = "0x4840A60", Offset = "0x4840A60", VA = "0x4840A60", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
