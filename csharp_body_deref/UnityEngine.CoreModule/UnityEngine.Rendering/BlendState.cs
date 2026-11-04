// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.BlendState
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x200039D")]
public struct BlendState : IEquatable<BlendState>
{
	[Token(Token = "0x4000B29")]
	[FieldOffset(Offset = "0x0")]
	private RenderTargetBlendState m_BlendState0;

	[Token(Token = "0x4000B2A")]
	[FieldOffset(Offset = "0x8")]
	private RenderTargetBlendState m_BlendState1;

	[Token(Token = "0x4000B2B")]
	[FieldOffset(Offset = "0x10")]
	private RenderTargetBlendState m_BlendState2;

	[Token(Token = "0x4000B2C")]
	[FieldOffset(Offset = "0x18")]
	private RenderTargetBlendState m_BlendState3;

	[Token(Token = "0x4000B2D")]
	[FieldOffset(Offset = "0x20")]
	private RenderTargetBlendState m_BlendState4;

	[Token(Token = "0x4000B2E")]
	[FieldOffset(Offset = "0x28")]
	private RenderTargetBlendState m_BlendState5;

	[Token(Token = "0x4000B2F")]
	[FieldOffset(Offset = "0x30")]
	private RenderTargetBlendState m_BlendState6;

	[Token(Token = "0x4000B30")]
	[FieldOffset(Offset = "0x38")]
	private RenderTargetBlendState m_BlendState7;

	[Token(Token = "0x4000B31")]
	[FieldOffset(Offset = "0x40")]
	private byte m_SeparateMRTBlendStates;

	[Token(Token = "0x4000B32")]
	[FieldOffset(Offset = "0x41")]
	private byte m_AlphaToMask;

	[Token(Token = "0x4000B33")]
	[FieldOffset(Offset = "0x42")]
	private short m_Padding;

	[Token(Token = "0x17000342")]
	public static BlendState defaultValue
	{
		[Token(Token = "0x60015E2")]
		[Address(RVA = "0x2F61930", Offset = "0x2F5FF30", VA = "0x182F61930")]
		get
		{
			return default(BlendState);
		}
	}

	[Token(Token = "0x17000343")]
	public RenderTargetBlendState blendState0
	{
		[Token(Token = "0x60015E4")]
		[Address(RVA = "0xB546E0", Offset = "0xB52CE0", VA = "0x180B546E0")]
		set
		{
		}
	}

	[Token(Token = "0x60015E3")]
	[Address(RVA = "0x2F61820", Offset = "0x2F5FE20", VA = "0x182F61820")]
	public BlendState(bool separateMRTBlend = false, bool alphaToMask = false)
	{
	}

	[Token(Token = "0x60015E5")]
	[Address(RVA = "0x2F610B0", Offset = "0x2F5F6B0", VA = "0x182F610B0", Slot = "4")]
	public bool Equals(BlendState other)
	{
		return default(bool);
	}

	[Token(Token = "0x60015E6")]
	[Address(RVA = "0x2F61380", Offset = "0x2F5F980", VA = "0x182F61380", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60015E7")]
	[Address(RVA = "0x2F61440", Offset = "0x2F5FA40", VA = "0x182F61440", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
