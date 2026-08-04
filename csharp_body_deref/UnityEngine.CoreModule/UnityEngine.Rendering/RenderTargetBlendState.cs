// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderTargetBlendState
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20002F6")]
public struct RenderTargetBlendState : IEquatable<RenderTargetBlendState>
{
	[Token(Token = "0x40008F0")]
	[FieldOffset(Offset = "0x0")]
	private byte m_WriteMask;

	[Token(Token = "0x40008F1")]
	[FieldOffset(Offset = "0x1")]
	private byte m_SourceColorBlendMode;

	[Token(Token = "0x40008F2")]
	[FieldOffset(Offset = "0x2")]
	private byte m_DestinationColorBlendMode;

	[Token(Token = "0x40008F3")]
	[FieldOffset(Offset = "0x3")]
	private byte m_SourceAlphaBlendMode;

	[Token(Token = "0x40008F4")]
	[FieldOffset(Offset = "0x4")]
	private byte m_DestinationAlphaBlendMode;

	[Token(Token = "0x40008F5")]
	[FieldOffset(Offset = "0x5")]
	private byte m_ColorBlendOperation;

	[Token(Token = "0x40008F6")]
	[FieldOffset(Offset = "0x6")]
	private byte m_AlphaBlendOperation;

	[Token(Token = "0x40008F7")]
	[FieldOffset(Offset = "0x7")]
	private byte m_Padding;

	[Token(Token = "0x6001085")]
	[Address(RVA = "0x4E30A60", Offset = "0x4E30A60", VA = "0x4E30A60", Slot = "4")]
	public bool Equals(RenderTargetBlendState other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001086")]
	[Address(RVA = "0x4E30AB0", Offset = "0x4E30AB0", VA = "0x4E30AB0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001087")]
	[Address(RVA = "0x4E30B60", Offset = "0x4E30B60", VA = "0x4E30B60", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
