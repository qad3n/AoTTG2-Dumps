using Il2CppDummyDll;
using UnityEngine;

namespace DG.Tweening.Plugins.Options;

[Token(Token = "0x200008A")]
public struct QuaternionOptions : IPlugOptions
{
	[Token(Token = "0x4000180")]
	[FieldOffset(Offset = "0x0")]
	public RotateMode rotateMode;

	[Token(Token = "0x4000181")]
	[FieldOffset(Offset = "0x4")]
	public AxisConstraint axisConstraint;

	[Token(Token = "0x4000182")]
	[FieldOffset(Offset = "0x8")]
	public Vector3 up;

	[Token(Token = "0x4000183")]
	[FieldOffset(Offset = "0x14")]
	public bool dynamicLookAt;

	[Token(Token = "0x4000184")]
	[FieldOffset(Offset = "0x18")]
	public Vector3 dynamicLookAtWorldPosition;

	[Token(Token = "0x6000372")]
	[Address(RVA = "0x2318F60", Offset = "0x2318F60", VA = "0x2318F60", Slot = "4")]
	public void Reset()
	{
	}
}
