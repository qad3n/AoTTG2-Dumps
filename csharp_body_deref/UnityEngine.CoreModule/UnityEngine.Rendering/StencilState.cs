// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.StencilState
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000304")]
public struct StencilState : IEquatable<StencilState>
{
	[Token(Token = "0x4000938")]
	[FieldOffset(Offset = "0x0")]
	private byte m_Enabled;

	[Token(Token = "0x4000939")]
	[FieldOffset(Offset = "0x1")]
	private byte m_ReadMask;

	[Token(Token = "0x400093A")]
	[FieldOffset(Offset = "0x2")]
	private byte m_WriteMask;

	[Token(Token = "0x400093B")]
	[FieldOffset(Offset = "0x3")]
	private byte m_Padding;

	[Token(Token = "0x400093C")]
	[FieldOffset(Offset = "0x4")]
	private byte m_CompareFunctionFront;

	[Token(Token = "0x400093D")]
	[FieldOffset(Offset = "0x5")]
	private byte m_PassOperationFront;

	[Token(Token = "0x400093E")]
	[FieldOffset(Offset = "0x6")]
	private byte m_FailOperationFront;

	[Token(Token = "0x400093F")]
	[FieldOffset(Offset = "0x7")]
	private byte m_ZFailOperationFront;

	[Token(Token = "0x4000940")]
	[FieldOffset(Offset = "0x8")]
	private byte m_CompareFunctionBack;

	[Token(Token = "0x4000941")]
	[FieldOffset(Offset = "0x9")]
	private byte m_PassOperationBack;

	[Token(Token = "0x4000942")]
	[FieldOffset(Offset = "0xA")]
	private byte m_FailOperationBack;

	[Token(Token = "0x4000943")]
	[FieldOffset(Offset = "0xB")]
	private byte m_ZFailOperationBack;

	[Token(Token = "0x170002A4")]
	public bool enabled
	{
		[Token(Token = "0x60010CF")]
		[Address(RVA = "0x4E336D0", Offset = "0x4E336D0", VA = "0x4E336D0")]
		set
		{
		}
	}

	[Token(Token = "0x170002A5")]
	public byte readMask
	{
		[Token(Token = "0x60010D0")]
		[Address(RVA = "0x4E33720", Offset = "0x4E33720", VA = "0x4E33720")]
		set
		{
		}
	}

	[Token(Token = "0x170002A6")]
	public byte writeMask
	{
		[Token(Token = "0x60010D1")]
		[Address(RVA = "0x4E33730", Offset = "0x4E33730", VA = "0x4E33730")]
		set
		{
		}
	}

	[Token(Token = "0x170002A7")]
	public CompareFunction compareFunctionFront
	{
		[Token(Token = "0x60010D2")]
		[Address(RVA = "0x4E33740", Offset = "0x4E33740", VA = "0x4E33740")]
		set
		{
		}
	}

	[Token(Token = "0x170002A8")]
	public StencilOp passOperationFront
	{
		[Token(Token = "0x60010D3")]
		[Address(RVA = "0x4E33750", Offset = "0x4E33750", VA = "0x4E33750")]
		set
		{
		}
	}

	[Token(Token = "0x170002A9")]
	public StencilOp failOperationFront
	{
		[Token(Token = "0x60010D4")]
		[Address(RVA = "0x4E33760", Offset = "0x4E33760", VA = "0x4E33760")]
		set
		{
		}
	}

	[Token(Token = "0x170002AA")]
	public StencilOp zFailOperationFront
	{
		[Token(Token = "0x60010D5")]
		[Address(RVA = "0x4E33770", Offset = "0x4E33770", VA = "0x4E33770")]
		set
		{
		}
	}

	[Token(Token = "0x170002AB")]
	public CompareFunction compareFunctionBack
	{
		[Token(Token = "0x60010D6")]
		[Address(RVA = "0x4E33780", Offset = "0x4E33780", VA = "0x4E33780")]
		set
		{
		}
	}

	[Token(Token = "0x170002AC")]
	public StencilOp passOperationBack
	{
		[Token(Token = "0x60010D7")]
		[Address(RVA = "0x4E33790", Offset = "0x4E33790", VA = "0x4E33790")]
		set
		{
		}
	}

	[Token(Token = "0x170002AD")]
	public StencilOp failOperationBack
	{
		[Token(Token = "0x60010D8")]
		[Address(RVA = "0x4E337A0", Offset = "0x4E337A0", VA = "0x4E337A0")]
		set
		{
		}
	}

	[Token(Token = "0x170002AE")]
	public StencilOp zFailOperationBack
	{
		[Token(Token = "0x60010D9")]
		[Address(RVA = "0x4E337B0", Offset = "0x4E337B0", VA = "0x4E337B0")]
		set
		{
		}
	}

	[Token(Token = "0x60010DA")]
	[Address(RVA = "0x4E30700", Offset = "0x4E30700", VA = "0x4E30700", Slot = "4")]
	public bool Equals(StencilState other)
	{
		return default(bool);
	}

	[Token(Token = "0x60010DB")]
	[Address(RVA = "0x4E337C0", Offset = "0x4E337C0", VA = "0x4E337C0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60010DC")]
	[Address(RVA = "0x4E30980", Offset = "0x4E30980", VA = "0x4E30980", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
