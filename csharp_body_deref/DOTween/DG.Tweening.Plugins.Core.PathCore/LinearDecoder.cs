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
		[Address(RVA = "0x231B700", Offset = "0x231B700", VA = "0x231B700", Slot = "6")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60003A5")]
	[Address(RVA = "0x231B710", Offset = "0x231B710", VA = "0x231B710", Slot = "4")]
	internal override void FinalizePath(Path p, Vector3[] wps, bool isClosedPath)
	{
	}

	[Token(Token = "0x60003A6")]
	[Address(RVA = "0x231BAE0", Offset = "0x231BAE0", VA = "0x231BAE0", Slot = "5")]
	internal override Vector3 GetPoint(float perc, Vector3[] wps, Path p, ControlPoint[] controlPoints)
	{
		return default(Vector3);
	}

	[Token(Token = "0x60003A7")]
	[Address(RVA = "0x231B760", Offset = "0x231B760", VA = "0x231B760")]
	internal void SetTimeToLengthTables(Path p, int subdivisions)
	{
	}

	[Token(Token = "0x60003A8")]
	[Address(RVA = "0x231BD50", Offset = "0x231BD50", VA = "0x231BD50")]
	internal void SetWaypointsLengths(Path p, int subdivisions)
	{
	}

	[Token(Token = "0x60003A9")]
	[Address(RVA = "0x231BD60", Offset = "0x231BD60", VA = "0x231BD60")]
	public LinearDecoder()
	{
	}
}
