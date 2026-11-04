// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Playables.FrameData
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Playables;

[Token(Token = "0x20002FD")]
public struct FrameData
{
	[Token(Token = "0x20002FE")]
	[Flags]
	internal enum Flags
	{
		[Token(Token = "0x400079B")]
		Evaluate = 1,
		[Token(Token = "0x400079C")]
		SeekOccured = 2,
		[Token(Token = "0x400079D")]
		Loop = 4,
		[Token(Token = "0x400079E")]
		Hold = 8,
		[Token(Token = "0x400079F")]
		EffectivePlayStateDelayed = 0x10,
		[Token(Token = "0x40007A0")]
		EffectivePlayStatePlaying = 0x20
	}

	[Token(Token = "0x4000791")]
	[FieldOffset(Offset = "0x0")]
	internal ulong m_FrameID;

	[Token(Token = "0x4000792")]
	[FieldOffset(Offset = "0x8")]
	internal double m_DeltaTime;

	[Token(Token = "0x4000793")]
	[FieldOffset(Offset = "0x10")]
	internal float m_Weight;

	[Token(Token = "0x4000794")]
	[FieldOffset(Offset = "0x14")]
	internal float m_EffectiveWeight;

	[Token(Token = "0x4000795")]
	[FieldOffset(Offset = "0x18")]
	internal double m_EffectiveParentDelay;

	[Token(Token = "0x4000796")]
	[FieldOffset(Offset = "0x20")]
	internal float m_EffectiveParentSpeed;

	[Token(Token = "0x4000797")]
	[FieldOffset(Offset = "0x24")]
	internal float m_EffectiveSpeed;

	[Token(Token = "0x4000798")]
	[FieldOffset(Offset = "0x28")]
	internal Flags m_Flags;

	[Token(Token = "0x4000799")]
	[FieldOffset(Offset = "0x30")]
	internal PlayableOutput m_Output;
}
