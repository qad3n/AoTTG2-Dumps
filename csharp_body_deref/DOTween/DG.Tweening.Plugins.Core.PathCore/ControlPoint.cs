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
	[Address(RVA = "0x2319D40", Offset = "0x2319D40", VA = "0x2319D40")]
	public ControlPoint(Vector3 a, Vector3 b)
	{
	}

	[Token(Token = "0x6000397")]
	[Address(RVA = "0x231A760", Offset = "0x231A760", VA = "0x231A760")]
	public static ControlPoint operator +(ControlPoint cp, Vector3 v)
	{
		return default(ControlPoint);
	}

	[Token(Token = "0x6000398")]
	[Address(RVA = "0x231A7A0", Offset = "0x231A7A0", VA = "0x231A7A0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
