// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.ProbeVolumePositioning
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x200013C")]
internal static class ProbeVolumePositioning
{
	[Token(Token = "0x40005FC")]
	[FieldOffset(Offset = "0x0")]
	internal static Vector3[] m_Axes;

	[Token(Token = "0x40005FD")]
	[FieldOffset(Offset = "0x8")]
	internal static Vector3[] m_AABBCorners;

	[Token(Token = "0x6000AB4")]
	[Address(RVA = "0x2B2BA50", Offset = "0x2B2A050", VA = "0x182B2BA50")]
	public static bool OBBIntersect(in ProbeReferenceVolume.Volume a, in ProbeReferenceVolume.Volume b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AB5")]
	[Address(RVA = "0x2B2B900", Offset = "0x2B29F00", VA = "0x182B2B900")]
	public static bool OBBContains(in ProbeReferenceVolume.Volume obb, Vector3 point)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AB6")]
	[Address(RVA = "0x2B2B250", Offset = "0x2B29850", VA = "0x182B2B250")]
	public static bool OBBAABBIntersect(in ProbeReferenceVolume.Volume a, in Bounds b, in Bounds aAABB)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AB7")]
	[Address(RVA = "0x2B2C150", Offset = "0x2B2A750", VA = "0x182B2C150")]
	private static Vector2 ProjectOBB(in ProbeReferenceVolume.Volume a, Vector3 axis)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000AB8")]
	[Address(RVA = "0x2B2C070", Offset = "0x2B2A670", VA = "0x182B2C070")]
	private static Vector2 ProjectAABB(in Vector3[] corners, Vector3 axis)
	{
		return default(Vector2);
	}
}
