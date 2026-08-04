// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.LowLevel.PlayerLoopSystem
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.LowLevel;

[Token(Token = "0x2000203")]
[MovedFrom("UnityEngine.Experimental.LowLevel")]
public struct PlayerLoopSystem
{
	[Token(Token = "0x2000204")]
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

	[Token(Token = "0x6000DC9")]
	[Address(RVA = "0x4E15430", Offset = "0x4E15430", VA = "0x4E15430", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
