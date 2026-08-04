// ==================== AoTTG2 cross-reference ====================
// Type: DG.Tweening.Plugins.Options.PathOptions
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace DG.Tweening.Plugins.Options;

[Token(Token = "0x2000089")]
public struct PathOptions : IPlugOptions
{
	[Token(Token = "0x400016D")]
	[FieldOffset(Offset = "0x0")]
	public PathMode mode;

	[Token(Token = "0x400016E")]
	[FieldOffset(Offset = "0x4")]
	public OrientType orientType;

	[Token(Token = "0x400016F")]
	[FieldOffset(Offset = "0x8")]
	public AxisConstraint lockPositionAxis;

	[Token(Token = "0x4000170")]
	[FieldOffset(Offset = "0xC")]
	public AxisConstraint lockRotationAxis;

	[Token(Token = "0x4000171")]
	[FieldOffset(Offset = "0x10")]
	public bool isClosedPath;

	[Token(Token = "0x4000172")]
	[FieldOffset(Offset = "0x14")]
	public Vector3 lookAtPosition;

	[Token(Token = "0x4000173")]
	[FieldOffset(Offset = "0x20")]
	public Transform lookAtTransform;

	[Token(Token = "0x4000174")]
	[FieldOffset(Offset = "0x28")]
	public float lookAhead;

	[Token(Token = "0x4000175")]
	[FieldOffset(Offset = "0x2C")]
	public bool hasCustomForwardDirection;

	[Token(Token = "0x4000176")]
	[FieldOffset(Offset = "0x30")]
	public Quaternion forward;

	[Token(Token = "0x4000177")]
	[FieldOffset(Offset = "0x40")]
	public bool useLocalPosition;

	[Token(Token = "0x4000178")]
	[FieldOffset(Offset = "0x48")]
	public Transform parent;

	[Token(Token = "0x4000179")]
	[FieldOffset(Offset = "0x50")]
	public bool isRigidbody;

	[Token(Token = "0x400017A")]
	[FieldOffset(Offset = "0x51")]
	public bool isRigidbody2D;

	[Token(Token = "0x400017B")]
	[FieldOffset(Offset = "0x52")]
	public bool stableZRotation;

	[Token(Token = "0x400017C")]
	[FieldOffset(Offset = "0x54")]
	internal Quaternion startupRot;

	[Token(Token = "0x400017D")]
	[FieldOffset(Offset = "0x64")]
	internal float startupZRot;

	[Token(Token = "0x400017E")]
	[FieldOffset(Offset = "0x68")]
	internal bool addedExtraStartWp;

	[Token(Token = "0x400017F")]
	[FieldOffset(Offset = "0x69")]
	internal bool addedExtraEndWp;

	[Token(Token = "0x6000371")]
	[Address(RVA = "0x237F740", Offset = "0x237F740", VA = "0x237F740", Slot = "4")]
	public void Reset()
	{
	}
}
