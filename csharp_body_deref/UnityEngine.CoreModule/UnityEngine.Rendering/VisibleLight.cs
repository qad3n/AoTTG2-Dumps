using System;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000305")]
[UnityEngine.Scripting.UsedByNativeCode]
public struct VisibleLight : IEquatable<VisibleLight>
{
	[Token(Token = "0x400096C")]
	[FieldOffset(Offset = "0x0")]
	private LightType m_LightType;

	[Token(Token = "0x400096D")]
	[FieldOffset(Offset = "0x4")]
	private Color m_FinalColor;

	[Token(Token = "0x400096E")]
	[FieldOffset(Offset = "0x14")]
	private Rect m_ScreenRect;

	[Token(Token = "0x400096F")]
	[FieldOffset(Offset = "0x24")]
	private Matrix4x4 m_LocalToWorldMatrix;

	[Token(Token = "0x4000970")]
	[FieldOffset(Offset = "0x64")]
	private float m_Range;

	[Token(Token = "0x4000971")]
	[FieldOffset(Offset = "0x68")]
	private float m_SpotAngle;

	[Token(Token = "0x4000972")]
	[FieldOffset(Offset = "0x6C")]
	private int m_InstanceId;

	[Token(Token = "0x4000973")]
	[FieldOffset(Offset = "0x70")]
	private VisibleLightFlags m_Flags;

	[Token(Token = "0x60010F4")]
	[Address(RVA = "0x4B0CA20", Offset = "0x4B0CA20", VA = "0x4B0CA20", Slot = "4")]
	public bool Equals(VisibleLight other)
	{
		return default(bool);
	}

	[Token(Token = "0x60010F5")]
	[Address(RVA = "0x4B0CE50", Offset = "0x4B0CE50", VA = "0x4B0CE50", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60010F6")]
	[Address(RVA = "0x4B0CF80", Offset = "0x4B0CF80", VA = "0x4B0CF80", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
