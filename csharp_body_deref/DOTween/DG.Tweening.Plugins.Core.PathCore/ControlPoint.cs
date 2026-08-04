// ==================== AoTTG2 cross-reference ====================
// Type: DG.Tweening.Plugins.Core.PathCore.ControlPoint
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine;

namespace DG.Tweening.Plugins.Core.PathCore;

[Serializable]
[Token(Token = "0x200009A")]
public struct ControlPoint
{
	[Token(Token = "0x40001A7")]
	[FieldOffset(Offset = "0x0")]
	public Vector3 a;

	[Token(Token = "0x40001A8")]
	[FieldOffset(Offset = "0xC")]
	public Vector3 b;

	[Token(Token = "0x6000396")]
	[Address(RVA = "0x2380620", Offset = "0x2380620", VA = "0x2380620")]
	public ControlPoint(Vector3 a, Vector3 b)
	{
	}

	[Token(Token = "0x6000397")]
	[Address(RVA = "0x2381040", Offset = "0x2381040", VA = "0x2381040")]
	public static ControlPoint operator +(ControlPoint cp, Vector3 v)
	{
		return default(ControlPoint);
	}

	[Token(Token = "0x6000398")]
	[Address(RVA = "0x2381080", Offset = "0x2381080", VA = "0x2381080", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
