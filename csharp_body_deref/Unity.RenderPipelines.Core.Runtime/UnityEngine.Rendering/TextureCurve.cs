using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Experimental.Rendering;

namespace UnityEngine.Rendering;

[Serializable]
[Token(Token = "0x20001CF")]
public class TextureCurve : IDisposable
{
	[Token(Token = "0x40007EB")]
	private const int k_Precision = 128;

	[Token(Token = "0x40007EC")]
	private const float k_Step = 1f / 128f;

	[Token(Token = "0x40007EE")]
	[FieldOffset(Offset = "0x14")]
	[SerializeField]
	private bool m_Loop;

	[Token(Token = "0x40007EF")]
	[FieldOffset(Offset = "0x18")]
	[SerializeField]
	private float m_ZeroValue;

	[Token(Token = "0x40007F0")]
	[FieldOffset(Offset = "0x1C")]
	[SerializeField]
	private float m_Range;

	[Token(Token = "0x40007F1")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	private AnimationCurve m_Curve;

	[Token(Token = "0x40007F2")]
	[FieldOffset(Offset = "0x28")]
	private AnimationCurve m_LoopingCurve;

	[Token(Token = "0x40007F3")]
	[FieldOffset(Offset = "0x30")]
	private Texture2D m_Texture;

	[Token(Token = "0x40007F4")]
	[FieldOffset(Offset = "0x38")]
	private bool m_IsCurveDirty;

	[Token(Token = "0x40007F5")]
	[FieldOffset(Offset = "0x39")]
	private bool m_IsTextureDirty;

	[Token(Token = "0x1700018A")]
	public int length
	{
		[Token(Token = "0x6000D32")]
		[Address(RVA = "0x48DE4B0", Offset = "0x48DE4B0", VA = "0x48DE4B0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000D33")]
		[Address(RVA = "0x48DE4C0", Offset = "0x48DE4C0", VA = "0x48DE4C0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700018B")]
	public Keyframe this[int index]
	{
		[Token(Token = "0x6000D34")]
		[Address(RVA = "0x48DE4D0", Offset = "0x48DE4D0", VA = "0x48DE4D0")]
		get
		{
			return default(Keyframe);
		}
	}

	[Token(Token = "0x6000D35")]
	[Address(RVA = "0x48DE510", Offset = "0x48DE510", VA = "0x48DE510")]
	public TextureCurve(AnimationCurve baseCurve, float zeroValue, bool loop, in Vector2 bounds)
	{
	}

	[Token(Token = "0x6000D36")]
	[Address(RVA = "0x48DE560", Offset = "0x48DE560", VA = "0x48DE560")]
	public TextureCurve(Keyframe[] keys, float zeroValue, bool loop, in Vector2 bounds)
	{
	}

	[Token(Token = "0x6000D37")]
	[Address(RVA = "0x48DE6D0", Offset = "0x48DE6D0", VA = "0x48DE6D0", Slot = "1")]
	~TextureCurve()
	{
	}

	[Token(Token = "0x6000D38")]
	[Address(RVA = "0x48DE6E0", Offset = "0x48DE6E0", VA = "0x48DE6E0", Slot = "4")]
	[Obsolete("Please use Release() instead.")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000D39")]
	[Address(RVA = "0x48DE6F0", Offset = "0x48DE6F0", VA = "0x48DE6F0")]
	public void Release()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D3A")]
	[Address(RVA = "0x48DE760", Offset = "0x48DE760", VA = "0x48DE760")]
	public void SetDirty()
	{
	}

	[Token(Token = "0x6000D3B")]
	[Address(RVA = "0x48DE770", Offset = "0x48DE770", VA = "0x48DE770")]
	private static GraphicsFormat GetTextureFormat()
	{
		return default(GraphicsFormat);
	}

	[Token(Token = "0x6000D3C")]
	[Address(RVA = "0x48DE7B0", Offset = "0x48DE7B0", VA = "0x48DE7B0")]
	public Texture2D GetTexture()
	{
		return null;
	}

	[Token(Token = "0x6000D3D")]
	[Address(RVA = "0x48DE9E0", Offset = "0x48DE9E0", VA = "0x48DE9E0")]
	public float Evaluate(float time)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D3E")]
	[Address(RVA = "0x48DEC40", Offset = "0x48DEC40", VA = "0x48DEC40")]
	public int AddKey(float time, float value)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D3F")]
	[Address(RVA = "0x48DEC80", Offset = "0x48DEC80", VA = "0x48DEC80")]
	public int MoveKey(int index, in Keyframe key)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D40")]
	[Address(RVA = "0x48DECD0", Offset = "0x48DECD0", VA = "0x48DECD0")]
	public void RemoveKey(int index)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D41")]
	[Address(RVA = "0x48DED00", Offset = "0x48DED00", VA = "0x48DED00")]
	public void SmoothTangents(int index, float weight)
	{
	}
}
