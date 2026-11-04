// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.TextureCurve
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Experimental.Rendering;

namespace UnityEngine.Rendering;

[Serializable]
[Token(Token = "0x20001EB")]
public class TextureCurve : IDisposable
{
	[Token(Token = "0x4000960")]
	private const int k_Precision = 128;

	[Token(Token = "0x4000961")]
	private const float k_Step = 1f / 128f;

	[Token(Token = "0x4000963")]
	[FieldOffset(Offset = "0x14")]
	[SerializeField]
	private bool m_Loop;

	[Token(Token = "0x4000964")]
	[FieldOffset(Offset = "0x18")]
	[SerializeField]
	private float m_ZeroValue;

	[Token(Token = "0x4000965")]
	[FieldOffset(Offset = "0x1C")]
	[SerializeField]
	private float m_Range;

	[Token(Token = "0x4000966")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	private AnimationCurve m_Curve;

	[Token(Token = "0x4000967")]
	[FieldOffset(Offset = "0x28")]
	private AnimationCurve m_LoopingCurve;

	[Token(Token = "0x4000968")]
	[FieldOffset(Offset = "0x30")]
	private Texture2D m_Texture;

	[Token(Token = "0x4000969")]
	[FieldOffset(Offset = "0x38")]
	private bool m_IsCurveDirty;

	[Token(Token = "0x400096A")]
	[FieldOffset(Offset = "0x39")]
	private bool m_IsTextureDirty;

	[Token(Token = "0x170001DA")]
	public int length
	{
		[Token(Token = "0x6000E9A")]
		[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000E9B")]
		[Address(RVA = "0x560B20", Offset = "0x55F120", VA = "0x180560B20")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170001DB")]
	public Keyframe this[int index]
	{
		[Token(Token = "0x6000E9C")]
		[Address(RVA = "0x2B630B0", Offset = "0x2B616B0", VA = "0x182B630B0")]
		get
		{
			return default(Keyframe);
		}
	}

	[Token(Token = "0x6000E9D")]
	[Address(RVA = "0x2B62E00", Offset = "0x2B61400", VA = "0x182B62E00")]
	public TextureCurve(AnimationCurve baseCurve, float zeroValue, bool loop, in Vector2 bounds)
	{
	}

	[Token(Token = "0x6000E9E")]
	[Address(RVA = "0x2B62F70", Offset = "0x2B61570", VA = "0x182B62F70")]
	public TextureCurve(Keyframe[] keys, float zeroValue, bool loop, in Vector2 bounds)
	{
	}

	[Token(Token = "0x6000E9F")]
	[Address(RVA = "0x2B62790", Offset = "0x2B60D90", VA = "0x182B62790", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000EA0")]
	[Address(RVA = "0x2B62CF0", Offset = "0x2B612F0", VA = "0x182B62CF0")]
	public void Release()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000EA1")]
	[Address(RVA = "0x2B62DC0", Offset = "0x2B613C0", VA = "0x182B62DC0")]
	public void SetDirty()
	{
	}

	[Token(Token = "0x6000EA2")]
	[Address(RVA = "0x2B629F0", Offset = "0x2B60FF0", VA = "0x182B629F0")]
	private static GraphicsFormat GetTextureFormat()
	{
		return default(GraphicsFormat);
	}

	[Token(Token = "0x6000EA3")]
	[Address(RVA = "0x2B62A50", Offset = "0x2B61050", VA = "0x182B62A50")]
	public Texture2D GetTexture()
	{
		return null;
	}

	[Token(Token = "0x6000EA4")]
	[Address(RVA = "0x2B627A0", Offset = "0x2B60DA0", VA = "0x182B627A0")]
	public float Evaluate(float time)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000EA5")]
	[Address(RVA = "0x2B62750", Offset = "0x2B60D50", VA = "0x182B62750")]
	public int AddKey(float time, float value)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000EA6")]
	[Address(RVA = "0x2B62CA0", Offset = "0x2B612A0", VA = "0x182B62CA0")]
	public int MoveKey(int index, in Keyframe key)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000EA7")]
	[Address(RVA = "0x2B62D90", Offset = "0x2B61390", VA = "0x182B62D90")]
	public void RemoveKey(int index)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000EA8")]
	[Address(RVA = "0x2B62DD0", Offset = "0x2B613D0", VA = "0x182B62DD0")]
	public void SmoothTangents(int index, float weight)
	{
	}
}
