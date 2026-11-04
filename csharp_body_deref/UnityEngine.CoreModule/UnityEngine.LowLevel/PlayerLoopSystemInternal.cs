// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.LowLevel.PlayerLoopSystemInternal
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.LowLevel;

[Token(Token = "0x2000253")]
[UnityEngine.Bindings.NativeType(Header = "Runtime/Misc/PlayerLoop.h")]
[UnityEngine.Scripting.RequiredByNativeCode]
[MovedFrom("UnityEngine.Experimental.LowLevel")]
internal struct PlayerLoopSystemInternal
{
	[Token(Token = "0x4000765")]
	[FieldOffset(Offset = "0x0")]
	public Type type;

	[Token(Token = "0x4000766")]
	[FieldOffset(Offset = "0x8")]
	public PlayerLoopSystem.UpdateFunction updateDelegate;

	[Token(Token = "0x4000767")]
	[FieldOffset(Offset = "0x10")]
	public IntPtr updateFunction;

	[Token(Token = "0x4000768")]
	[FieldOffset(Offset = "0x18")]
	public IntPtr loopConditionFunction;

	[Token(Token = "0x4000769")]
	[FieldOffset(Offset = "0x20")]
	public int numSubSystems;
}
