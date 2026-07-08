using System;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000307")]
[UnityEngine.Scripting.UsedByNativeCode]
public struct VisibleReflectionProbe : IEquatable<VisibleReflectionProbe>
{
	[Token(Token = "0x4000977")]
	[FieldOffset(Offset = "0x0")]
	private Bounds m_Bounds;

	[Token(Token = "0x4000978")]
	[FieldOffset(Offset = "0x18")]
	private Matrix4x4 m_LocalToWorldMatrix;

	[Token(Token = "0x4000979")]
	[FieldOffset(Offset = "0x58")]
	private Vector4 m_HdrData;

	[Token(Token = "0x400097A")]
	[FieldOffset(Offset = "0x68")]
	private Vector3 m_Center;

	[Token(Token = "0x400097B")]
	[FieldOffset(Offset = "0x74")]
	private float m_BlendDistance;

	[Token(Token = "0x400097C")]
	[FieldOffset(Offset = "0x78")]
	private int m_Importance;

	[Token(Token = "0x400097D")]
	[FieldOffset(Offset = "0x7C")]
	private int m_BoxProjection;

	[Token(Token = "0x400097E")]
	[FieldOffset(Offset = "0x80")]
	private int m_InstanceId;

	[Token(Token = "0x400097F")]
	[FieldOffset(Offset = "0x84")]
	private int m_TextureId;

	[Token(Token = "0x60010F7")]
	[Address(RVA = "0x4B0D060", Offset = "0x4B0D060", VA = "0x4B0D060", Slot = "4")]
	public bool Equals(VisibleReflectionProbe other)
	{
		return default(bool);
	}

	[Token(Token = "0x60010F8")]
	[Address(RVA = "0x4B0D470", Offset = "0x4B0D470", VA = "0x4B0D470", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60010F9")]
	[Address(RVA = "0x4B0D500", Offset = "0x4B0D500", VA = "0x4B0D500", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
