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
		[Address(RVA = "0x654FDD0", Offset = "0x654EDD0", VA = "0x654FDD0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000E9B")]
		[Address(RVA = "0x654FDE0", Offset = "0x654EDE0", VA = "0x654FDE0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170001DB")]
	public Keyframe this[int index]
	{
		[Token(Token = "0x6000E9C")]
		[Address(RVA = "0x654FDF0", Offset = "0x654EDF0", VA = "0x654FDF0")]
		get
		{
			return default(Keyframe);
		}
	}

	[Token(Token = "0x6000E9D")]
	[Address(RVA = "0x654FE30", Offset = "0x654EE30", VA = "0x654FE30")]
	public TextureCurve(AnimationCurve baseCurve, float zeroValue, bool loop, in Vector2 bounds)
	{
	}

	[Token(Token = "0x6000E9E")]
	[Address(RVA = "0x654FE80", Offset = "0x654EE80", VA = "0x654FE80")]
	public TextureCurve(Keyframe[] keys, float zeroValue, bool loop, in Vector2 bounds)
	{
	}

	[Token(Token = "0x6000E9F")]
	[Address(RVA = "0x654FFB0", Offset = "0x654EFB0", VA = "0x654FFB0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000EA0")]
	[Address(RVA = "0x654FFC0", Offset = "0x654EFC0", VA = "0x654FFC0")]
	public void Release()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000EA1")]
	[Address(RVA = "0x65500C0", Offset = "0x654F0C0", VA = "0x65500C0")]
	public void SetDirty()
	{
	}

	[Token(Token = "0x6000EA2")]
	[Address(RVA = "0x65500D0", Offset = "0x654F0D0", VA = "0x65500D0")]
	private static GraphicsFormat GetTextureFormat()
	{
		return default(GraphicsFormat);
	}

	[Token(Token = "0x6000EA3")]
	[Address(RVA = "0x6550110", Offset = "0x654F110", VA = "0x6550110")]
	public Texture2D GetTexture()
	{
		return null;
	}

	[Token(Token = "0x6000EA4")]
	[Address(RVA = "0x6550340", Offset = "0x654F340", VA = "0x6550340")]
	public float Evaluate(float time)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000EA5")]
	[Address(RVA = "0x6550580", Offset = "0x654F580", VA = "0x6550580")]
	public int AddKey(float time, float value)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000EA6")]
	[Address(RVA = "0x65505C0", Offset = "0x654F5C0", VA = "0x65505C0")]
	public int MoveKey(int index, in Keyframe key)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000EA7")]
	[Address(RVA = "0x6550610", Offset = "0x654F610", VA = "0x6550610")]
	public void RemoveKey(int index)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000EA8")]
	[Address(RVA = "0x6550640", Offset = "0x654F640", VA = "0x6550640")]
	public void SmoothTangents(int index, float weight)
	{
	}
}
