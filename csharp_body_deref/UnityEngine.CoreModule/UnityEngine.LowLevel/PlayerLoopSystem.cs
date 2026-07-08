using System;
using Il2CppDummyDll;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.LowLevel;

[Token(Token = "0x2000200")]
[MovedFrom("UnityEngine.Experimental.LowLevel")]
public struct PlayerLoopSystem
{
	[Token(Token = "0x2000201")]
	public delegate void UpdateFunction();

	[Token(Token = "0x40006C0")]
	[FieldOffset(Offset = "0x0")]
	public Type type;

	[Token(Token = "0x40006C1")]
	[FieldOffset(Offset = "0x8")]
	public PlayerLoopSystem[] subSystemList;

	[Token(Token = "0x40006C2")]
	[FieldOffset(Offset = "0x10")]
	public UpdateFunction updateDelegate;

	[Token(Token = "0x40006C3")]
	[FieldOffset(Offset = "0x18")]
	public IntPtr updateFunction;

	[Token(Token = "0x40006C4")]
	[FieldOffset(Offset = "0x20")]
	public IntPtr loopConditionFunction;

	[Token(Token = "0x6000DC7")]
	[Address(RVA = "0x4AEDB00", Offset = "0x4AEDB00", VA = "0x4AEDB00", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
