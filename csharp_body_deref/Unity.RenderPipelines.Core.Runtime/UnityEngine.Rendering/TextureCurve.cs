// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.TextureCurve
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x4C03520", Offset = "0x4C03520", VA = "0x4C03520")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000D33")]
		[Address(RVA = "0x4C03530", Offset = "0x4C03530", VA = "0x4C03530")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700018B")]
	public Keyframe this[int index]
	{
		[Token(Token = "0x6000D34")]
		[Address(RVA = "0x4C03540", Offset = "0x4C03540", VA = "0x4C03540")]
		get
		{
			return default(Keyframe);
		}
	}

	[Token(Token = "0x6000D35")]
	[Address(RVA = "0x4C03580", Offset = "0x4C03580", VA = "0x4C03580")]
	public TextureCurve(AnimationCurve baseCurve, float zeroValue, bool loop, in Vector2 bounds)
	{
	}

	[Token(Token = "0x6000D36")]
	[Address(RVA = "0x4C035D0", Offset = "0x4C035D0", VA = "0x4C035D0")]
	public TextureCurve(Keyframe[] keys, float zeroValue, bool loop, in Vector2 bounds)
	{
	}

	[Token(Token = "0x6000D37")]
	[Address(RVA = "0x4C03740", Offset = "0x4C03740", VA = "0x4C03740", Slot = "1")]
	~TextureCurve()
	{
	}

	[Token(Token = "0x6000D38")]
	[Address(RVA = "0x4C03750", Offset = "0x4C03750", VA = "0x4C03750", Slot = "4")]
	[Obsolete("Please use Release() instead.")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000D39")]
	[Address(RVA = "0x4C03760", Offset = "0x4C03760", VA = "0x4C03760")]
	public void Release()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D3A")]
	[Address(RVA = "0x4C037D0", Offset = "0x4C037D0", VA = "0x4C037D0")]
	public void SetDirty()
	{
	}

	[Token(Token = "0x6000D3B")]
	[Address(RVA = "0x4C037E0", Offset = "0x4C037E0", VA = "0x4C037E0")]
	private static GraphicsFormat GetTextureFormat()
	{
		return default(GraphicsFormat);
	}

	[Token(Token = "0x6000D3C")]
	[Address(RVA = "0x4C03820", Offset = "0x4C03820", VA = "0x4C03820")]
	public Texture2D GetTexture()
	{
		return null;
	}

	[Token(Token = "0x6000D3D")]
	[Address(RVA = "0x4C03A50", Offset = "0x4C03A50", VA = "0x4C03A50")]
	public float Evaluate(float time)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D3E")]
	[Address(RVA = "0x4C03CB0", Offset = "0x4C03CB0", VA = "0x4C03CB0")]
	public int AddKey(float time, float value)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D3F")]
	[Address(RVA = "0x4C03CF0", Offset = "0x4C03CF0", VA = "0x4C03CF0")]
	public int MoveKey(int index, in Keyframe key)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D40")]
	[Address(RVA = "0x4C03D40", Offset = "0x4C03D40", VA = "0x4C03D40")]
	public void RemoveKey(int index)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D41")]
	[Address(RVA = "0x4C03D70", Offset = "0x4C03D70", VA = "0x4C03D70")]
	public void SmoothTangents(int index, float weight)
	{
	}
}
