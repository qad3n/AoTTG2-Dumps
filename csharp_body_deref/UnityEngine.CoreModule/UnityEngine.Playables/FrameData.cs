using System;
using Il2CppDummyDll;

namespace UnityEngine.Playables;

[Token(Token = "0x2000323")]
public struct FrameData
{
	[Token(Token = "0x2000324")]
	[Flags]
	internal enum Flags
	{
		[Token(Token = "0x4000A11")]
		Evaluate = 1,
		[Token(Token = "0x4000A12")]
		SeekOccured = 2,
		[Token(Token = "0x4000A13")]
		Loop = 4,
		[Token(Token = "0x4000A14")]
		Hold = 8,
		[Token(Token = "0x4000A15")]
		EffectivePlayStateDelayed = 0x10,
		[Token(Token = "0x4000A16")]
		EffectivePlayStatePlaying = 0x20
	}

	[Token(Token = "0x4000A07")]
	[FieldOffset(Offset = "0x0")]
	internal ulong m_FrameID;

	[Token(Token = "0x4000A08")]
	[FieldOffset(Offset = "0x8")]
	internal double m_DeltaTime;

	[Token(Token = "0x4000A09")]
	[FieldOffset(Offset = "0x10")]
	internal float m_Weight;

	[Token(Token = "0x4000A0A")]
	[FieldOffset(Offset = "0x14")]
	internal float m_EffectiveWeight;

	[Token(Token = "0x4000A0B")]
	[FieldOffset(Offset = "0x18")]
	internal double m_EffectiveParentDelay;

	[Token(Token = "0x4000A0C")]
	[FieldOffset(Offset = "0x20")]
	internal float m_EffectiveParentSpeed;

	[Token(Token = "0x4000A0D")]
	[FieldOffset(Offset = "0x24")]
	internal float m_EffectiveSpeed;

	[Token(Token = "0x4000A0E")]
	[FieldOffset(Offset = "0x28")]
	internal Flags m_Flags;

	[Token(Token = "0x4000A0F")]
	[FieldOffset(Offset = "0x30")]
	internal PlayableOutput m_Output;
}
