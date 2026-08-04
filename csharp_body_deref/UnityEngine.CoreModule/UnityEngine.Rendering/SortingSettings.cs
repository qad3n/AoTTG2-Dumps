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

[Token(Token = "0x2000303")]
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

	[Token(Token = "0x170002A3")]
	public SortingCriteria criteria
	{
		[Token(Token = "0x60010CA")]
		[Address(RVA = "0x4E335C0", Offset = "0x4E335C0", VA = "0x4E335C0")]
		get
		{
			return default(SortingCriteria);
		}
		[Token(Token = "0x60010CB")]
		[Address(RVA = "0x4E335D0", Offset = "0x4E335D0", VA = "0x4E335D0")]
		set
		{
		}
	}

	[Token(Token = "0x60010C9")]
	[Address(RVA = "0x4E33570", Offset = "0x4E33570", VA = "0x4E33570")]
	public SortingSettings(Camera camera)
	{
	}

	[Token(Token = "0x60010CC")]
	[Address(RVA = "0x4E2DED0", Offset = "0x4E2DED0", VA = "0x4E2DED0", Slot = "4")]
	public bool Equals(SortingSettings other)
	{
		return default(bool);
	}

	[Token(Token = "0x60010CD")]
	[Address(RVA = "0x4E335E0", Offset = "0x4E335E0", VA = "0x4E335E0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60010CE")]
	[Address(RVA = "0x4E2E360", Offset = "0x4E2E360", VA = "0x4E2E360", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
