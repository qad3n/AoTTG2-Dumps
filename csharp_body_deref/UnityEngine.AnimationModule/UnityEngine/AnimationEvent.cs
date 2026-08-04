// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AnimationEvent
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
[Token(Token = "0x200000C")]
[UnityEngine.Scripting.RequiredByNativeCode]
public sealed class AnimationEvent
{
	[Token(Token = "0x400001E")]
	[FieldOffset(Offset = "0x10")]
	internal float m_Time;

	[Token(Token = "0x400001F")]
	[FieldOffset(Offset = "0x18")]
	internal string m_FunctionName;

	[Token(Token = "0x4000020")]
	[FieldOffset(Offset = "0x20")]
	internal string m_StringParameter;

	[Token(Token = "0x4000021")]
	[FieldOffset(Offset = "0x28")]
	internal Object m_ObjectReferenceParameter;

	[Token(Token = "0x4000022")]
	[FieldOffset(Offset = "0x30")]
	internal float m_FloatParameter;

	[Token(Token = "0x4000023")]
	[FieldOffset(Offset = "0x34")]
	internal int m_IntParameter;

	[Token(Token = "0x4000024")]
	[FieldOffset(Offset = "0x38")]
	internal int m_MessageOptions;

	[Token(Token = "0x4000025")]
	[FieldOffset(Offset = "0x3C")]
	internal AnimationEventSource m_Source;

	[Token(Token = "0x4000026")]
	[FieldOffset(Offset = "0x40")]
	internal AnimationState m_StateSender;

	[Token(Token = "0x4000027")]
	[FieldOffset(Offset = "0x48")]
	internal AnimatorStateInfo m_AnimatorStateInfo;

	[Token(Token = "0x4000028")]
	[FieldOffset(Offset = "0x6C")]
	internal AnimatorClipInfo m_AnimatorClipInfo;

	[Token(Token = "0x600003E")]
	[Address(RVA = "0x4DA30F0", Offset = "0x4DA30F0", VA = "0x4DA30F0")]
	public AnimationEvent()
	{
	}
}
