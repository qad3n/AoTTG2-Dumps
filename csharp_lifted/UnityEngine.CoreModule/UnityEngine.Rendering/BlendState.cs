// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.BlendState
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000371")]
public struct BlendState : IEquatable<BlendState>
{
	[Token(Token = "0x4000A09")]
	[FieldOffset(Offset = "0x0")]
	private RenderTargetBlendState m_BlendState0;

	[Token(Token = "0x4000A0A")]
	[FieldOffset(Offset = "0x8")]
	private RenderTargetBlendState m_BlendState1;

	[Token(Token = "0x4000A0B")]
	[FieldOffset(Offset = "0x10")]
	private RenderTargetBlendState m_BlendState2;

	[Token(Token = "0x4000A0C")]
	[FieldOffset(Offset = "0x18")]
	private RenderTargetBlendState m_BlendState3;

	[Token(Token = "0x4000A0D")]
	[FieldOffset(Offset = "0x20")]
	private RenderTargetBlendState m_BlendState4;

	[Token(Token = "0x4000A0E")]
	[FieldOffset(Offset = "0x28")]
	private RenderTargetBlendState m_BlendState5;

	[Token(Token = "0x4000A0F")]
	[FieldOffset(Offset = "0x30")]
	private RenderTargetBlendState m_BlendState6;

	[Token(Token = "0x4000A10")]
	[FieldOffset(Offset = "0x38")]
	private RenderTargetBlendState m_BlendState7;

	[Token(Token = "0x4000A11")]
	[FieldOffset(Offset = "0x40")]
	private byte m_SeparateMRTBlendStates;

	[Token(Token = "0x4000A12")]
	[FieldOffset(Offset = "0x41")]
	private byte m_AlphaToMask;

	[Token(Token = "0x4000A13")]
	[FieldOffset(Offset = "0x42")]
	private short m_Padding;

	[Token(Token = "0x17000330")]
	public static BlendState defaultValue
	{
		[Token(Token = "0x6001587")]
		[Address(RVA = "0x69560D0", Offset = "0x69550D0", VA = "0x69560D0")]
		get
		{
			return default(BlendState);
		}
	}

	[Token(Token = "0x17000331")]
	public RenderTargetBlendState blendState0
	{
		[Token(Token = "0x6001589")]
		[Address(RVA = "0x69561E0", Offset = "0x69551E0", VA = "0x69561E0")]
		set
		{
		}
	}

	[Token(Token = "0x6001588")]
	[Address(RVA = "0x6956150", Offset = "0x6955150", VA = "0x6956150")]
	public BlendState(bool separateMRTBlend = false, bool alphaToMask = false)
	{
	}

	[Token(Token = "0x600158A")]
	[Address(RVA = "0x69561F0", Offset = "0x69551F0", VA = "0x69561F0", Slot = "4")]
	public bool Equals(BlendState other)
	{
		return default(bool);
	}

	[Token(Token = "0x600158B")]
	[Address(RVA = "0x6956460", Offset = "0x6955460", VA = "0x6956460", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600158C")]
	[Address(RVA = "0x6956530", Offset = "0x6955530", VA = "0x6956530", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
