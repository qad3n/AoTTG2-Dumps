using System;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.LowLevel;

[Token(Token = "0x20001FF")]
[MovedFrom("UnityEngine.Experimental.LowLevel")]
[UnityEngine.Bindings.NativeType(Header = "Runtime/Misc/PlayerLoop.h")]
[UnityEngine.Scripting.RequiredByNativeCode]
internal struct PlayerLoopSystemInternal
{
	[Token(Token = "0x40006BB")]
	[FieldOffset(Offset = "0x0")]
	public Type type;

	[Token(Token = "0x40006BC")]
	[FieldOffset(Offset = "0x8")]
	public PlayerLoopSystem.UpdateFunction updateDelegate;

	[Token(Token = "0x40006BD")]
	[FieldOffset(Offset = "0x10")]
	public IntPtr updateFunction;

	[Token(Token = "0x40006BE")]
	[FieldOffset(Offset = "0x18")]
	public IntPtr loopConditionFunction;

	[Token(Token = "0x40006BF")]
	[FieldOffset(Offset = "0x20")]
	public int numSubSystems;
}
