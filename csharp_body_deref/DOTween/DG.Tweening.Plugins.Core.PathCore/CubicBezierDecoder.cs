// ==================== AoTTG2 cross-reference ====================
// Type: DG.Tweening.Plugins.Core.PathCore.CubicBezierDecoder
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace DG.Tweening.Plugins.Core.PathCore;

[Token(Token = "0x2000099")]
internal class CubicBezierDecoder : ABSPathDecoder
{
	[Token(Token = "0x40001A5")]
	[FieldOffset(Offset = "0x0")]
	private static readonly ControlPoint[] _PartialControlPs;

	[Token(Token = "0x40001A6")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Vector3[] _PartialWps;

	[Token(Token = "0x1700000C")]
	internal override int minInputWaypoints
	{
		[Token(Token = "0x600038F")]
		[Address(RVA = "0x565FB0", Offset = "0x5645B0", VA = "0x180565FB0", Slot = "6")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000390")]
	[Address(RVA = "0x5650F0", Offset = "0x5636F0", VA = "0x1805650F0", Slot = "4")]
	internal override void FinalizePath(Path p, Vector3[] wps, bool isClosedPath)
	{
	}

	[Token(Token = "0x6000391")]
	[Address(RVA = "0x565630", Offset = "0x563C30", VA = "0x180565630", Slot = "5")]
	internal override Vector3 GetPoint(float perc, Vector3[] wps, Path p, ControlPoint[] controlPoints)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000392")]
	[Address(RVA = "0x565810", Offset = "0x563E10", VA = "0x180565810")]
	internal void SetTimeToLengthTables(Path p, int subdivisions)
	{
	}

	[Token(Token = "0x6000393")]
	[Address(RVA = "0x565B10", Offset = "0x564110", VA = "0x180565B10")]
	internal void SetWaypointsLengths(Path p, int subdivisions)
	{
	}

	[Token(Token = "0x6000394")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public CubicBezierDecoder()
	{
	}
}
