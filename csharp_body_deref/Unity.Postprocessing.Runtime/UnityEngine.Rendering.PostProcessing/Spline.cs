// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.PostProcessing.Spline
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x4B65620", Offset = "0x4B65620", VA = "0x4B65620")]
	public Spline(AnimationCurve curve, float zeroValue, bool loop, Vector2 bounds)
	{
	}

	[Token(Token = "0x600024C")]
	[Address(RVA = "0x4B65730", Offset = "0x4B65730", VA = "0x4B65730")]
	public void Cache(int frame)
	{
	}

	[Token(Token = "0x600024D")]
	[Address(RVA = "0x4B65AA0", Offset = "0x4B65AA0", VA = "0x4B65AA0")]
	public float Evaluate(float t, int length)
	{
		return default(float);
	}

	[Token(Token = "0x600024E")]
	[Address(RVA = "0x4B65AE0", Offset = "0x4B65AE0", VA = "0x4B65AE0")]
	public float Evaluate(float t)
	{
		return default(float);
	}

	[Token(Token = "0x600024F")]
	[Address(RVA = "0x4B65B50", Offset = "0x4B65B50", VA = "0x4B65B50", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
