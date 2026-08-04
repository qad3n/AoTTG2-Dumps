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
		[Address(RVA = "0x23811B0", Offset = "0x23811B0", VA = "0x23811B0", Slot = "6")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600039E")]
	[Address(RVA = "0x23811C0", Offset = "0x23811C0", VA = "0x23811C0", Slot = "4")]
	internal override void FinalizePath(Path p, Vector3[] wps, bool isClosedPath)
	{
	}

	[Token(Token = "0x600039F")]
	[Address(RVA = "0x2381C90", Offset = "0x2381C90", VA = "0x2381C90", Slot = "5")]
	internal override Vector3 GetPoint(float perc, Vector3[] wps, Path p, ControlPoint[] controlPoints)
	{
		return default(Vector3);
	}

	[Token(Token = "0x60003A0")]
	[Address(RVA = "0x2381450", Offset = "0x2381450", VA = "0x2381450")]
	internal void SetTimeToLengthTables(Path p, int subdivisions)
	{
	}

	[Token(Token = "0x60003A1")]
	[Address(RVA = "0x23817C0", Offset = "0x23817C0", VA = "0x23817C0")]
	internal void SetWaypointsLengths(Path p, int subdivisions)
	{
	}

	[Token(Token = "0x60003A2")]
	[Address(RVA = "0x2381F30", Offset = "0x2381F30", VA = "0x2381F30")]
	public CatmullRomDecoder()
	{
	}
}
