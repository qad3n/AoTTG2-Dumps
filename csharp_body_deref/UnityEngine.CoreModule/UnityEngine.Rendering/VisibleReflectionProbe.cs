// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.VisibleReflectionProbe
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine.Rendering;

[Token(Token = "0x20003D4")]
[UnityEngine.Scripting.UsedByNativeCode]
public struct VisibleReflectionProbe : IEquatable<VisibleReflectionProbe>
{
	[Token(Token = "0x4000C89")]
	[FieldOffset(Offset = "0x0")]
	private Bounds m_Bounds;

	[Token(Token = "0x4000C8A")]
	[FieldOffset(Offset = "0x18")]
	private Matrix4x4 m_LocalToWorldMatrix;

	[Token(Token = "0x4000C8B")]
	[FieldOffset(Offset = "0x58")]
	private Vector4 m_HdrData;

	[Token(Token = "0x4000C8C")]
	[FieldOffset(Offset = "0x68")]
	private Vector3 m_Center;

	[Token(Token = "0x4000C8D")]
	[FieldOffset(Offset = "0x74")]
	private float m_BlendDistance;

	[Token(Token = "0x4000C8E")]
	[FieldOffset(Offset = "0x78")]
	private int m_Importance;

	[Token(Token = "0x4000C8F")]
	[FieldOffset(Offset = "0x7C")]
	private int m_BoxProjection;

	[Token(Token = "0x4000C90")]
	[FieldOffset(Offset = "0x80")]
	private int m_InstanceId;

	[Token(Token = "0x4000C91")]
	[FieldOffset(Offset = "0x84")]
	private int m_TextureId;

	[Token(Token = "0x170003BE")]
	public Texture texture
	{
		[Token(Token = "0x6001767")]
		[Address(RVA = "0x2F76AB0", Offset = "0x2F750B0", VA = "0x182F76AB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003BF")]
	public ReflectionProbe reflectionProbe
	{
		[Token(Token = "0x6001768")]
		[Address(RVA = "0x2F76A20", Offset = "0x2F75020", VA = "0x182F76A20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003C0")]
	public Bounds bounds
	{
		[Token(Token = "0x6001769")]
		[Address(RVA = "0x2F76990", Offset = "0x2F74F90", VA = "0x182F76990")]
		get
		{
			return default(Bounds);
		}
	}

	[Token(Token = "0x170003C1")]
	public Matrix4x4 localToWorldMatrix
	{
		[Token(Token = "0x600176A")]
		[Address(RVA = "0x15476A0", Offset = "0x1545CA0", VA = "0x1815476A0")]
		get
		{
			return default(Matrix4x4);
		}
	}

	[Token(Token = "0x170003C2")]
	public Vector4 hdrData
	{
		[Token(Token = "0x600176B")]
		[Address(RVA = "0x2F769B0", Offset = "0x2F74FB0", VA = "0x182F769B0")]
		get
		{
			return default(Vector4);
		}
	}

	[Token(Token = "0x170003C3")]
	public float blendDistance
	{
		[Token(Token = "0x600176C")]
		[Address(RVA = "0x2F76980", Offset = "0x2F74F80", VA = "0x182F76980")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170003C4")]
	public int importance
	{
		[Token(Token = "0x600176D")]
		[Address(RVA = "0x2F769C0", Offset = "0x2F74FC0", VA = "0x182F769C0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170003C5")]
	public bool isBoxProjection
	{
		[Token(Token = "0x600176E")]
		[Address(RVA = "0x2F769D0", Offset = "0x2F74FD0", VA = "0x182F769D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600176F")]
	[Address(RVA = "0x2F76580", Offset = "0x2F74B80", VA = "0x182F76580", Slot = "4")]
	public bool Equals(VisibleReflectionProbe other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001770")]
	[Address(RVA = "0x2F76470", Offset = "0x2F74A70", VA = "0x182F76470", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001771")]
	[Address(RVA = "0x2F76810", Offset = "0x2F74E10", VA = "0x182F76810", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
