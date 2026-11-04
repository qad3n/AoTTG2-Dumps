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

[Token(Token = "0x2000254")]
[MovedFrom("UnityEngine.Experimental.LowLevel")]
public struct PlayerLoopSystem
{
	[Token(Token = "0x2000255")]
	public delegate void UpdateFunction();

	[Token(Token = "0x400076A")]
	[FieldOffset(Offset = "0x0")]
	public Type type;

	[Token(Token = "0x400076B")]
	[FieldOffset(Offset = "0x8")]
	public PlayerLoopSystem[] subSystemList;

	[Token(Token = "0x400076C")]
	[FieldOffset(Offset = "0x10")]
	public UpdateFunction updateDelegate;

	[Token(Token = "0x400076D")]
	[FieldOffset(Offset = "0x18")]
	public IntPtr updateFunction;

	[Token(Token = "0x400076E")]
	[FieldOffset(Offset = "0x20")]
	public IntPtr loopConditionFunction;

	[Token(Token = "0x60011C9")]
	[Address(RVA = "0x2F50500", Offset = "0x2F4EB00", VA = "0x182F50500", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
