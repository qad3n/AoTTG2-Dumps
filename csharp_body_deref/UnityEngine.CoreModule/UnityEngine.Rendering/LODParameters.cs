using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20002E9")]
public struct LODParameters : IEquatable<LODParameters>
{
	[Token(Token = "0x40008B7")]
	[FieldOffset(Offset = "0x0")]
	private int m_IsOrthographic;

	[Token(Token = "0x40008B8")]
	[FieldOffset(Offset = "0x4")]
	private Vector3 m_CameraPosition;

	[Token(Token = "0x40008B9")]
	[FieldOffset(Offset = "0x10")]
	private float m_FieldOfView;

	[Token(Token = "0x40008BA")]
	[FieldOffset(Offset = "0x14")]
	private float m_OrthoSize;

	[Token(Token = "0x40008BB")]
	[FieldOffset(Offset = "0x18")]
	private int m_CameraPixelHeight;

	[Token(Token = "0x6001043")]
	[Address(RVA = "0x4B06F40", Offset = "0x4B06F40", VA = "0x4B06F40", Slot = "4")]
	public bool Equals(LODParameters other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001044")]
	[Address(RVA = "0x4B06FD0", Offset = "0x4B06FD0", VA = "0x4B06FD0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001045")]
	[Address(RVA = "0x4B070B0", Offset = "0x4B070B0", VA = "0x4B070B0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
