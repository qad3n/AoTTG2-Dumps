// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AnimationEventBlittable
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine;

[Serializable]
[Token(Token = "0x200000B")]
[UnityEngine.Scripting.RequiredByNativeCode]
internal struct AnimationEventBlittable : IDisposable
{
	[Token(Token = "0x4000012")]
	[FieldOffset(Offset = "0x0")]
	internal float m_Time;

	[Token(Token = "0x4000013")]
	[FieldOffset(Offset = "0x8")]
	internal IntPtr m_FunctionName;

	[Token(Token = "0x4000014")]
	[FieldOffset(Offset = "0x10")]
	internal IntPtr m_StringParameter;

	[Token(Token = "0x4000015")]
	[FieldOffset(Offset = "0x18")]
	internal IntPtr m_ObjectReferenceParameter;

	[Token(Token = "0x4000016")]
	[FieldOffset(Offset = "0x20")]
	internal float m_FloatParameter;

	[Token(Token = "0x4000017")]
	[FieldOffset(Offset = "0x24")]
	internal int m_IntParameter;

	[Token(Token = "0x4000018")]
	[FieldOffset(Offset = "0x28")]
	internal int m_MessageOptions;

	[Token(Token = "0x4000019")]
	[FieldOffset(Offset = "0x2C")]
	internal AnimationEventSource m_Source;

	[Token(Token = "0x400001A")]
	[FieldOffset(Offset = "0x30")]
	internal IntPtr m_StateSender;

	[Token(Token = "0x400001B")]
	[FieldOffset(Offset = "0x38")]
	internal AnimatorStateInfo m_AnimatorStateInfo;

	[Token(Token = "0x400001C")]
	[FieldOffset(Offset = "0x5C")]
	internal AnimatorClipInfo m_AnimatorClipInfo;

	[Token(Token = "0x400001D")]
	[ThreadStatic]
	private static GCHandlePool s_handlePool;

	[Token(Token = "0x600003A")]
	[Address(RVA = "0x4DA2990", Offset = "0x4DA2990", VA = "0x4DA2990")]
	internal unsafe static void FromAnimationEvents(AnimationEvent[] animationEvents, AnimationEventBlittable* animationEventBlittables)
	{
	}

	[Token(Token = "0x600003B")]
	[Address(RVA = "0x4DA2C20", Offset = "0x4DA2C20", VA = "0x4DA2C20")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static AnimationEvent PointerToAnimationEvent(IntPtr animationEventBlittable)
	{
		return null;
	}

	[Token(Token = "0x600003C")]
	[Address(RVA = "0x4DA2CF0", Offset = "0x4DA2CF0", VA = "0x4DA2CF0")]
	internal static AnimationEvent ToAnimationEvent(AnimationEventBlittable animationEventBlittable)
	{
		return null;
	}

	[Token(Token = "0x600003D")]
	[Address(RVA = "0x4DA3180", Offset = "0x4DA3180", VA = "0x4DA3180", Slot = "4")]
	public void Dispose()
	{
	}
}
