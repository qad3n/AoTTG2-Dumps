// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.VisibleReflectionProbe
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine.Rendering;

[Token(Token = "0x20003A8")]
[UnityEngine.Scripting.UsedByNativeCode]
public struct VisibleReflectionProbe : IEquatable<VisibleReflectionProbe>
{
	[Token(Token = "0x4000B69")]
	[FieldOffset(Offset = "0x0")]
	private Bounds m_Bounds;

	[Token(Token = "0x4000B6A")]
	[FieldOffset(Offset = "0x18")]
	private Matrix4x4 m_LocalToWorldMatrix;

	[Token(Token = "0x4000B6B")]
	[FieldOffset(Offset = "0x58")]
	private Vector4 m_HdrData;

	[Token(Token = "0x4000B6C")]
	[FieldOffset(Offset = "0x68")]
	private Vector3 m_Center;

	[Token(Token = "0x4000B6D")]
	[FieldOffset(Offset = "0x74")]
	private float m_BlendDistance;

	[Token(Token = "0x4000B6E")]
	[FieldOffset(Offset = "0x78")]
	private int m_Importance;

	[Token(Token = "0x4000B6F")]
	[FieldOffset(Offset = "0x7C")]
	private int m_BoxProjection;

	[Token(Token = "0x4000B70")]
	[FieldOffset(Offset = "0x80")]
	private int m_InstanceId;

	[Token(Token = "0x4000B71")]
	[FieldOffset(Offset = "0x84")]
	private int m_TextureId;

	[Token(Token = "0x170003AC")]
	public Texture texture
	{
		[Token(Token = "0x600170C")]
		[Address(RVA = "0x6964250", Offset = "0x6963250", VA = "0x6964250")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003AD")]
	public ReflectionProbe reflectionProbe
	{
		[Token(Token = "0x600170D")]
		[Address(RVA = "0x69642F0", Offset = "0x69632F0", VA = "0x69642F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003AE")]
	public Bounds bounds
	{
		[Token(Token = "0x600170E")]
		[Address(RVA = "0x6964370", Offset = "0x6963370", VA = "0x6964370")]
		get
		{
			return default(Bounds);
		}
	}

	[Token(Token = "0x170003AF")]
	public Matrix4x4 localToWorldMatrix
	{
		[Token(Token = "0x600170F")]
		[Address(RVA = "0x6964390", Offset = "0x6963390", VA = "0x6964390")]
		get
		{
			return default(Matrix4x4);
		}
	}

	[Token(Token = "0x170003B0")]
	public Vector4 hdrData
	{
		[Token(Token = "0x6001710")]
		[Address(RVA = "0x69643C0", Offset = "0x69633C0", VA = "0x69643C0")]
		get
		{
			return default(Vector4);
		}
	}

	[Token(Token = "0x170003B1")]
	public float blendDistance
	{
		[Token(Token = "0x6001711")]
		[Address(RVA = "0x69643D0", Offset = "0x69633D0", VA = "0x69643D0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170003B2")]
	public int importance
	{
		[Token(Token = "0x6001712")]
		[Address(RVA = "0x69643E0", Offset = "0x69633E0", VA = "0x69643E0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170003B3")]
	public bool isBoxProjection
	{
		[Token(Token = "0x6001713")]
		[Address(RVA = "0x69643F0", Offset = "0x69633F0", VA = "0x69643F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001714")]
	[Address(RVA = "0x6964440", Offset = "0x6963440", VA = "0x6964440", Slot = "4")]
	public bool Equals(VisibleReflectionProbe other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001715")]
	[Address(RVA = "0x6964610", Offset = "0x6963610", VA = "0x6964610", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001716")]
	[Address(RVA = "0x69646A0", Offset = "0x69636A0", VA = "0x69646A0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
