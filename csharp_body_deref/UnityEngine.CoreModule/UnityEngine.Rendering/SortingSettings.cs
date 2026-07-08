using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000300")]
public struct SortingSettings : IEquatable<SortingSettings>
{
	[Token(Token = "0x4000933")]
	[FieldOffset(Offset = "0x0")]
	private Matrix4x4 m_WorldToCameraMatrix;

	[Token(Token = "0x4000934")]
	[FieldOffset(Offset = "0x40")]
	private Vector3 m_CameraPosition;

	[Token(Token = "0x4000935")]
	[FieldOffset(Offset = "0x4C")]
	private Vector3 m_CustomAxis;

	[Token(Token = "0x4000936")]
	[FieldOffset(Offset = "0x58")]
	private SortingCriteria m_Criteria;

	[Token(Token = "0x4000937")]
	[FieldOffset(Offset = "0x5C")]
	private DistanceMetric m_DistanceMetric;

	[Token(Token = "0x170002A2")]
	public SortingCriteria criteria
	{
		[Token(Token = "0x60010C8")]
		[Address(RVA = "0x4B0BC90", Offset = "0x4B0BC90", VA = "0x4B0BC90")]
		get
		{
			return default(SortingCriteria);
		}
		[Token(Token = "0x60010C9")]
		[Address(RVA = "0x4B0BCA0", Offset = "0x4B0BCA0", VA = "0x4B0BCA0")]
		set
		{
		}
	}

	[Token(Token = "0x60010C7")]
	[Address(RVA = "0x4B0BC40", Offset = "0x4B0BC40", VA = "0x4B0BC40")]
	public SortingSettings(Camera camera)
	{
	}

	[Token(Token = "0x60010CA")]
	[Address(RVA = "0x4B065A0", Offset = "0x4B065A0", VA = "0x4B065A0", Slot = "4")]
	public bool Equals(SortingSettings other)
	{
		return default(bool);
	}

	[Token(Token = "0x60010CB")]
	[Address(RVA = "0x4B0BCB0", Offset = "0x4B0BCB0", VA = "0x4B0BCB0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60010CC")]
	[Address(RVA = "0x4B06A30", Offset = "0x4B06A30", VA = "0x4B06A30", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
