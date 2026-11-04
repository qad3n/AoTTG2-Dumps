// ==================== AoTTG2 cross-reference ====================
// Type: DG.Tweening.Plugins.Core.PathCore.Path
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.InteropServices;
using DG.Tweening.Plugins.Options;
using Il2CppDummyDll;
using UnityEngine;

namespace DG.Tweening.Plugins.Core.PathCore;

[Serializable]
[Token(Token = "0x200009E")]
public class Path
{
	[Token(Token = "0x40001AB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static CatmullRomDecoder _catmullRomDecoder;

	[Token(Token = "0x40001AC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static LinearDecoder _linearDecoder;

	[Token(Token = "0x40001AD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static CubicBezierDecoder _cubicBezierDecoder;

	[Token(Token = "0x40001AE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public float[] wpLengths;

	[Token(Token = "0x40001AF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	[SerializeField]
	public Vector3[] wps;

	[Token(Token = "0x40001B0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	[SerializeField]
	internal PathType type;

	[Token(Token = "0x40001B1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
	[SerializeField]
	internal int subdivisionsXSegment;

	[Token(Token = "0x40001B2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	[SerializeField]
	internal int subdivisions;

	[Token(Token = "0x40001B3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	[SerializeField]
	internal ControlPoint[] controlPoints;

	[Token(Token = "0x40001B4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	[SerializeField]
	internal float length;

	[Token(Token = "0x40001B5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x3C")]
	[SerializeField]
	internal bool isFinalized;

	[Token(Token = "0x40001B6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	[SerializeField]
	internal float[] timesTable;

	[Token(Token = "0x40001B7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	[SerializeField]
	internal float[] lengthsTable;

	[Token(Token = "0x40001B8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	internal int linearWPIndex;

	[Token(Token = "0x40001B9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x54")]
	internal bool addedExtraStartWp;

	[Token(Token = "0x40001BA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x55")]
	internal bool addedExtraEndWp;

	[Token(Token = "0x40001BB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	internal PathOptions plugOptions;

	[Token(Token = "0x40001BC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private Path _incrementalClone;

	[Token(Token = "0x40001BD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private int _incrementalIndex;

	[Token(Token = "0x40001BE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private ABSPathDecoder _decoder;

	[Token(Token = "0x40001BF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	private bool _changed;

	[Token(Token = "0x40001C0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	internal Vector3[] nonLinearDrawWps;

	[Token(Token = "0x40001C1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	internal Vector3 targetPosition;

	[Token(Token = "0x40001C2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xFC")]
	internal Vector3? lookAtPosition;

	[Token(Token = "0x40001C3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10C")]
	internal Color gizmoColor;

	[Token(Token = "0x17000010")]
	internal int minInputWaypoints
	{
		[Token(Token = "0x60003AA")]
		[Address(RVA = "0x56DD10", Offset = "0x56C310", VA = "0x18056DD10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60003AB")]
	[Address(RVA = "0x56D920", Offset = "0x56BF20", VA = "0x18056D920")]
	public Path(PathType type, Vector3[] waypoints, int subdivisionsXSegment, [Optional] Color? gizmoColor)
	{
	}

	[Token(Token = "0x60003AC")]
	[Address(RVA = "0x56DCD0", Offset = "0x56C2D0", VA = "0x18056DCD0")]
	internal Path()
	{
	}

	[Token(Token = "0x60003AD")]
	[Address(RVA = "0x56D450", Offset = "0x56BA50", VA = "0x18056D450")]
	internal void FinalizePath(bool isClosedPath, AxisConstraint lockPositionAxes, Vector3 currTargetVal)
	{
	}

	[Token(Token = "0x60003AE")]
	[Address(RVA = "0x56D690", Offset = "0x56BC90", VA = "0x18056D690")]
	internal Vector3 GetPoint(float perc, bool convertToConstantPerc = false)
	{
		return default(Vector3);
	}

	[Token(Token = "0x60003AF")]
	[Address(RVA = "0x56C8A0", Offset = "0x56AEA0", VA = "0x18056C8A0")]
	internal float ConvertToConstantPathPerc(float perc)
	{
		return default(float);
	}

	[Token(Token = "0x60003B0")]
	[Address(RVA = "0x56D720", Offset = "0x56BD20", VA = "0x18056D720")]
	internal int GetWaypointIndexFromPerc(float perc, bool isMovingForward)
	{
		return default(int);
	}

	[Token(Token = "0x60003B1")]
	[Address(RVA = "0x56D570", Offset = "0x56BB70", VA = "0x18056D570")]
	internal static Vector3[] GetDrawPoints(Path p, int drawSubdivisionsXSegment)
	{
		return null;
	}

	[Token(Token = "0x60003B2")]
	[Address(RVA = "0x56D7D0", Offset = "0x56BDD0", VA = "0x18056D7D0")]
	internal static void RefreshNonLinearDrawWps(Path p)
	{
	}

	[Token(Token = "0x60003B3")]
	[Address(RVA = "0x56CAD0", Offset = "0x56B0D0", VA = "0x18056CAD0")]
	internal void Destroy()
	{
	}

	[Token(Token = "0x60003B4")]
	[Address(RVA = "0x56C150", Offset = "0x56A750", VA = "0x18056C150")]
	internal Path CloneIncremental(int loopIncrement)
	{
		return null;
	}

	[Token(Token = "0x60003B5")]
	[Address(RVA = "0x56C070", Offset = "0x56A670", VA = "0x18056C070")]
	internal void AssignWaypoints(Vector3[] newWps, bool cloneWps = false)
	{
	}

	[Token(Token = "0x60003B6")]
	[Address(RVA = "0x56BEC0", Offset = "0x56A4C0", VA = "0x18056BEC0")]
	internal void AssignDecoder(PathType pathType)
	{
	}

	[Token(Token = "0x60003B7")]
	[Address(RVA = "0x56D440", Offset = "0x56BA40", VA = "0x18056D440")]
	internal void Draw()
	{
	}

	[Token(Token = "0x60003B8")]
	[Address(RVA = "0x56CC30", Offset = "0x56B230", VA = "0x18056CC30")]
	private static void Draw(Path p)
	{
	}

	[Token(Token = "0x60003B9")]
	[Address(RVA = "0x56C9F0", Offset = "0x56AFF0", VA = "0x18056C9F0")]
	private static Vector3 ConvertToDrawPoint(Vector3 wp, PathOptions plugOptions)
	{
		return default(Vector3);
	}
}
