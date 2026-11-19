// ==================== AoTTG2 cross-reference ====================
// Type: DG.Tweening.Plugins.Core.PathCore.LinearDecoder
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace DG.Tweening.Plugins.Core.PathCore;

[Token(Token = "0x200009D")]
internal class LinearDecoder : ABSPathDecoder
{
	[Token(Token = "0x1700000F")]
	internal override int minInputWaypoints
	{
		[Token(Token = "0x60003A4")]
		[Address(RVA = "0x31926A0", Offset = "0x31916A0", VA = "0x31926A0", Slot = "6")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60003A5")]
	[Address(RVA = "0x31926B0", Offset = "0x31916B0", VA = "0x31926B0", Slot = "4")]
	internal override void FinalizePath(Path p, Vector3[] wps, bool isClosedPath)
	{
	}

	[Token(Token = "0x60003A6")]
	[Address(RVA = "0x3192A60", Offset = "0x3191A60", VA = "0x3192A60", Slot = "5")]
	internal override Vector3 GetPoint(float perc, Vector3[] wps, Path p, ControlPoint[] controlPoints)
	{
		return default(Vector3);
	}

	[Token(Token = "0x60003A7")]
	[Address(RVA = "0x3192700", Offset = "0x3191700", VA = "0x3192700")]
	internal void SetTimeToLengthTables(Path p, int subdivisions)
	{
	}

	[Token(Token = "0x60003A8")]
	[Address(RVA = "0x3192CE0", Offset = "0x3191CE0", VA = "0x3192CE0")]
	internal void SetWaypointsLengths(Path p, int subdivisions)
	{
	}

	[Token(Token = "0x60003A9")]
	[Address(RVA = "0x3192CF0", Offset = "0x3191CF0", VA = "0x3192CF0")]
	public LinearDecoder()
	{
	}
}
