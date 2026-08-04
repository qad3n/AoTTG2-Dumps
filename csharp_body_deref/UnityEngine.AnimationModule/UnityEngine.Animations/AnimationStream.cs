// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Animations.AnimationStream
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

namespace UnityEngine.Animations;

[Token(Token = "0x2000029")]
[MovedFrom("UnityEngine.Experimental.Animations")]
[UnityEngine.Bindings.NativeHeader("Modules/Animation/ScriptBindings/AnimationStream.bindings.h")]
[UnityEngine.Bindings.NativeHeader("Modules/Animation/Director/AnimationStream.h")]
[UnityEngine.Scripting.RequiredByNativeCode]
public struct AnimationStream
{
	[Token(Token = "0x4000067")]
	[FieldOffset(Offset = "0x0")]
	private uint m_AnimatorBindingsVersion;

	[Token(Token = "0x4000068")]
	[FieldOffset(Offset = "0x8")]
	private IntPtr constant;

	[Token(Token = "0x4000069")]
	[FieldOffset(Offset = "0x10")]
	private IntPtr input;

	[Token(Token = "0x400006A")]
	[FieldOffset(Offset = "0x18")]
	private IntPtr output;

	[Token(Token = "0x400006B")]
	[FieldOffset(Offset = "0x20")]
	private IntPtr workspace;

	[Token(Token = "0x400006C")]
	[FieldOffset(Offset = "0x28")]
	private IntPtr inputStreamAccessor;

	[Token(Token = "0x400006D")]
	[FieldOffset(Offset = "0x30")]
	private IntPtr animationHandleBinder;
}
