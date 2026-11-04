// ==================== AoTTG2 cross-reference ====================
// Type: DG.Tweening.Plugins.Core.PathCore.CatmullRomDecoder
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace DG.Tweening.Plugins.Core.PathCore;

[Token(Token = "0x200009C")]
internal class CatmullRomDecoder : ABSPathDecoder
{
	[Token(Token = "0x40001A9")]
	[FieldOffset(Offset = "0x0")]
	private static readonly ControlPoint[] _PartialControlPs;

	[Token(Token = "0x40001AA")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Vector3[] _PartialWps;

	[Token(Token = "0x1700000E")]
	internal override int minInputWaypoints
	{
		[Token(Token = "0x600039D")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "6")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600039E")]
	[Address(RVA = "0x563050", Offset = "0x561650", VA = "0x180563050", Slot = "4")]
	internal override void FinalizePath(Path p, Vector3[] wps, bool isClosedPath)
	{
	}

	[Token(Token = "0x600039F")]
	[Address(RVA = "0x563360", Offset = "0x561960", VA = "0x180563360", Slot = "5")]
	internal override Vector3 GetPoint(float perc, Vector3[] wps, Path p, ControlPoint[] controlPoints)
	{
		return default(Vector3);
	}

	[Token(Token = "0x60003A0")]
	[Address(RVA = "0x5637C0", Offset = "0x561DC0", VA = "0x1805637C0")]
	internal void SetTimeToLengthTables(Path p, int subdivisions)
	{
	}

	[Token(Token = "0x60003A1")]
	[Address(RVA = "0x563AC0", Offset = "0x5620C0", VA = "0x180563AC0")]
	internal void SetWaypointsLengths(Path p, int subdivisions)
	{
	}

	[Token(Token = "0x60003A2")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public CatmullRomDecoder()
	{
	}
}
