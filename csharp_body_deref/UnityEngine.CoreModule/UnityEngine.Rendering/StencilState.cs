using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000301")]
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

	[Token(Token = "0x170002A3")]
	public bool enabled
	{
		[Token(Token = "0x60010CD")]
		[Address(RVA = "0x4B0BDA0", Offset = "0x4B0BDA0", VA = "0x4B0BDA0")]
		set
		{
		}
	}

	[Token(Token = "0x170002A4")]
	public byte readMask
	{
		[Token(Token = "0x60010CE")]
		[Address(RVA = "0x4B0BDF0", Offset = "0x4B0BDF0", VA = "0x4B0BDF0")]
		set
		{
		}
	}

	[Token(Token = "0x170002A5")]
	public byte writeMask
	{
		[Token(Token = "0x60010CF")]
		[Address(RVA = "0x4B0BE00", Offset = "0x4B0BE00", VA = "0x4B0BE00")]
		set
		{
		}
	}

	[Token(Token = "0x170002A6")]
	public CompareFunction compareFunctionFront
	{
		[Token(Token = "0x60010D0")]
		[Address(RVA = "0x4B0BE10", Offset = "0x4B0BE10", VA = "0x4B0BE10")]
		set
		{
		}
	}

	[Token(Token = "0x170002A7")]
	public StencilOp passOperationFront
	{
		[Token(Token = "0x60010D1")]
		[Address(RVA = "0x4B0BE20", Offset = "0x4B0BE20", VA = "0x4B0BE20")]
		set
		{
		}
	}

	[Token(Token = "0x170002A8")]
	public StencilOp failOperationFront
	{
		[Token(Token = "0x60010D2")]
		[Address(RVA = "0x4B0BE30", Offset = "0x4B0BE30", VA = "0x4B0BE30")]
		set
		{
		}
	}

	[Token(Token = "0x170002A9")]
	public StencilOp zFailOperationFront
	{
		[Token(Token = "0x60010D3")]
		[Address(RVA = "0x4B0BE40", Offset = "0x4B0BE40", VA = "0x4B0BE40")]
		set
		{
		}
	}

	[Token(Token = "0x170002AA")]
	public CompareFunction compareFunctionBack
	{
		[Token(Token = "0x60010D4")]
		[Address(RVA = "0x4B0BE50", Offset = "0x4B0BE50", VA = "0x4B0BE50")]
		set
		{
		}
	}

	[Token(Token = "0x170002AB")]
	public StencilOp passOperationBack
	{
		[Token(Token = "0x60010D5")]
		[Address(RVA = "0x4B0BE60", Offset = "0x4B0BE60", VA = "0x4B0BE60")]
		set
		{
		}
	}

	[Token(Token = "0x170002AC")]
	public StencilOp failOperationBack
	{
		[Token(Token = "0x60010D6")]
		[Address(RVA = "0x4B0BE70", Offset = "0x4B0BE70", VA = "0x4B0BE70")]
		set
		{
		}
	}

	[Token(Token = "0x170002AD")]
	public StencilOp zFailOperationBack
	{
		[Token(Token = "0x60010D7")]
		[Address(RVA = "0x4B0BE80", Offset = "0x4B0BE80", VA = "0x4B0BE80")]
		set
		{
		}
	}

	[Token(Token = "0x60010D8")]
	[Address(RVA = "0x4B08DD0", Offset = "0x4B08DD0", VA = "0x4B08DD0", Slot = "4")]
	public bool Equals(StencilState other)
	{
		return default(bool);
	}

	[Token(Token = "0x60010D9")]
	[Address(RVA = "0x4B0BE90", Offset = "0x4B0BE90", VA = "0x4B0BE90", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60010DA")]
	[Address(RVA = "0x4B09050", Offset = "0x4B09050", VA = "0x4B09050", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
