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

[Token(Token = "0x20003A0")]
public struct SortingSettings : IEquatable<SortingSettings>
{
	[Token(Token = "0x4000B1D")]
	[FieldOffset(Offset = "0x0")]
	private Matrix4x4 m_WorldToCameraMatrix;

	[Token(Token = "0x4000B1E")]
	[FieldOffset(Offset = "0x40")]
	private Vector3 m_CameraPosition;

	[Token(Token = "0x4000B1F")]
	[FieldOffset(Offset = "0x4C")]
	private Vector3 m_CustomAxis;

	[Token(Token = "0x4000B20")]
	[FieldOffset(Offset = "0x58")]
	private SortingCriteria m_Criteria;

	[Token(Token = "0x4000B21")]
	[FieldOffset(Offset = "0x5C")]
	private DistanceMetric m_DistanceMetric;

	[Token(Token = "0x1700038C")]
	public SortingCriteria criteria
	{
		[Token(Token = "0x60016BE")]
		[Address(RVA = "0x6962A20", Offset = "0x6961A20", VA = "0x6962A20")]
		get
		{
			return default(SortingCriteria);
		}
		[Token(Token = "0x60016BF")]
		[Address(RVA = "0x6962A30", Offset = "0x6961A30", VA = "0x6962A30")]
		set
		{
		}
	}

	[Token(Token = "0x60016BD")]
	[Address(RVA = "0x69628D0", Offset = "0x69618D0", VA = "0x69628D0")]
	public SortingSettings(Camera camera)
	{
	}

	[Token(Token = "0x60016C0")]
	[Address(RVA = "0x695AAB0", Offset = "0x6959AB0", VA = "0x695AAB0", Slot = "4")]
	public bool Equals(SortingSettings other)
	{
		return default(bool);
	}

	[Token(Token = "0x60016C1")]
	[Address(RVA = "0x6962A40", Offset = "0x6961A40", VA = "0x6962A40", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60016C2")]
	[Address(RVA = "0x695AD50", Offset = "0x6959D50", VA = "0x695AD50", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
