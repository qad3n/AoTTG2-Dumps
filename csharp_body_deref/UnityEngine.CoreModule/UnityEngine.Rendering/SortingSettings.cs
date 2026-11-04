// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.SortingSettings
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20003CC")]
public struct SortingSettings : IEquatable<SortingSettings>
{
	[Token(Token = "0x4000C3D")]
	[FieldOffset(Offset = "0x0")]
	private Matrix4x4 m_WorldToCameraMatrix;

	[Token(Token = "0x4000C3E")]
	[FieldOffset(Offset = "0x40")]
	private Vector3 m_CameraPosition;

	[Token(Token = "0x4000C3F")]
	[FieldOffset(Offset = "0x4C")]
	private Vector3 m_CustomAxis;

	[Token(Token = "0x4000C40")]
	[FieldOffset(Offset = "0x58")]
	private SortingCriteria m_Criteria;

	[Token(Token = "0x4000C41")]
	[FieldOffset(Offset = "0x5C")]
	private DistanceMetric m_DistanceMetric;

	[Token(Token = "0x1700039E")]
	public SortingCriteria criteria
	{
		[Token(Token = "0x6001719")]
		[Address(RVA = "0x1CFDD50", Offset = "0x1CFC350", VA = "0x181CFDD50")]
		get
		{
			return default(SortingCriteria);
		}
		[Token(Token = "0x600171A")]
		[Address(RVA = "0x1ADFEB0", Offset = "0x1ADE4B0", VA = "0x181ADFEB0")]
		set
		{
		}
	}

	[Token(Token = "0x6001718")]
	[Address(RVA = "0x2F72C40", Offset = "0x2F71240", VA = "0x182F72C40")]
	public SortingSettings(Camera camera)
	{
	}

	[Token(Token = "0x600171B")]
	[Address(RVA = "0x2F729C0", Offset = "0x2F70FC0", VA = "0x182F729C0", Slot = "4")]
	public bool Equals(SortingSettings other)
	{
		return default(bool);
	}

	[Token(Token = "0x600171C")]
	[Address(RVA = "0x2F72AB0", Offset = "0x2F710B0", VA = "0x182F72AB0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600171D")]
	[Address(RVA = "0x2F72B90", Offset = "0x2F71190", VA = "0x182F72B90", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
