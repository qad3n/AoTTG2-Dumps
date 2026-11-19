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

[Token(Token = "0x20003A1")]
public struct StencilState : IEquatable<StencilState>
{
	[Token(Token = "0x4000B22")]
	[FieldOffset(Offset = "0x0")]
	private byte m_Enabled;

	[Token(Token = "0x4000B23")]
	[FieldOffset(Offset = "0x1")]
	private byte m_ReadMask;

	[Token(Token = "0x4000B24")]
	[FieldOffset(Offset = "0x2")]
	private byte m_WriteMask;

	[Token(Token = "0x4000B25")]
	[FieldOffset(Offset = "0x3")]
	private byte m_Padding;

	[Token(Token = "0x4000B26")]
	[FieldOffset(Offset = "0x4")]
	private byte m_CompareFunctionFront;

	[Token(Token = "0x4000B27")]
	[FieldOffset(Offset = "0x5")]
	private byte m_PassOperationFront;

	[Token(Token = "0x4000B28")]
	[FieldOffset(Offset = "0x6")]
	private byte m_FailOperationFront;

	[Token(Token = "0x4000B29")]
	[FieldOffset(Offset = "0x7")]
	private byte m_ZFailOperationFront;

	[Token(Token = "0x4000B2A")]
	[FieldOffset(Offset = "0x8")]
	private byte m_CompareFunctionBack;

	[Token(Token = "0x4000B2B")]
	[FieldOffset(Offset = "0x9")]
	private byte m_PassOperationBack;

	[Token(Token = "0x4000B2C")]
	[FieldOffset(Offset = "0xA")]
	private byte m_FailOperationBack;

	[Token(Token = "0x4000B2D")]
	[FieldOffset(Offset = "0xB")]
	private byte m_ZFailOperationBack;

	[Token(Token = "0x1700038D")]
	public static StencilState defaultValue
	{
		[Token(Token = "0x60016C3")]
		[Address(RVA = "0x695DF70", Offset = "0x695CF70", VA = "0x695DF70")]
		get
		{
			return default(StencilState);
		}
	}

	[Token(Token = "0x1700038E")]
	public bool enabled
	{
		[Token(Token = "0x60016C6")]
		[Address(RVA = "0x6962CC0", Offset = "0x6961CC0", VA = "0x6962CC0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60016C7")]
		[Address(RVA = "0x6962D20", Offset = "0x6961D20", VA = "0x6962D20")]
		set
		{
		}
	}

	[Token(Token = "0x1700038F")]
	public byte readMask
	{
		[Token(Token = "0x60016C8")]
		[Address(RVA = "0x6962D70", Offset = "0x6961D70", VA = "0x6962D70")]
		get
		{
			return default(byte);
		}
		[Token(Token = "0x60016C9")]
		[Address(RVA = "0x6962D80", Offset = "0x6961D80", VA = "0x6962D80")]
		set
		{
		}
	}

	[Token(Token = "0x17000390")]
	public byte writeMask
	{
		[Token(Token = "0x60016CA")]
		[Address(RVA = "0x6962D90", Offset = "0x6961D90", VA = "0x6962D90")]
		get
		{
			return default(byte);
		}
		[Token(Token = "0x60016CB")]
		[Address(RVA = "0x6962DA0", Offset = "0x6961DA0", VA = "0x6962DA0")]
		set
		{
		}
	}

	[Token(Token = "0x17000391")]
	public CompareFunction compareFunctionFront
	{
		[Token(Token = "0x60016D0")]
		[Address(RVA = "0x6962E70", Offset = "0x6961E70", VA = "0x6962E70")]
		get
		{
			return default(CompareFunction);
		}
		[Token(Token = "0x60016D1")]
		[Address(RVA = "0x6962DC0", Offset = "0x6961DC0", VA = "0x6962DC0")]
		set
		{
		}
	}

	[Token(Token = "0x17000392")]
	public StencilOp passOperationFront
	{
		[Token(Token = "0x60016D2")]
		[Address(RVA = "0x6962E80", Offset = "0x6961E80", VA = "0x6962E80")]
		get
		{
			return default(StencilOp);
		}
		[Token(Token = "0x60016D3")]
		[Address(RVA = "0x6962DF0", Offset = "0x6961DF0", VA = "0x6962DF0")]
		set
		{
		}
	}

	[Token(Token = "0x17000393")]
	public StencilOp failOperationFront
	{
		[Token(Token = "0x60016D4")]
		[Address(RVA = "0x6962E90", Offset = "0x6961E90", VA = "0x6962E90")]
		get
		{
			return default(StencilOp);
		}
		[Token(Token = "0x60016D5")]
		[Address(RVA = "0x6962E20", Offset = "0x6961E20", VA = "0x6962E20")]
		set
		{
		}
	}

	[Token(Token = "0x17000394")]
	public StencilOp zFailOperationFront
	{
		[Token(Token = "0x60016D6")]
		[Address(RVA = "0x6962EA0", Offset = "0x6961EA0", VA = "0x6962EA0")]
		get
		{
			return default(StencilOp);
		}
		[Token(Token = "0x60016D7")]
		[Address(RVA = "0x6962E50", Offset = "0x6961E50", VA = "0x6962E50")]
		set
		{
		}
	}

	[Token(Token = "0x17000395")]
	public CompareFunction compareFunctionBack
	{
		[Token(Token = "0x60016D8")]
		[Address(RVA = "0x6962EB0", Offset = "0x6961EB0", VA = "0x6962EB0")]
		get
		{
			return default(CompareFunction);
		}
		[Token(Token = "0x60016D9")]
		[Address(RVA = "0x6962DD0", Offset = "0x6961DD0", VA = "0x6962DD0")]
		set
		{
		}
	}

	[Token(Token = "0x17000396")]
	public StencilOp passOperationBack
	{
		[Token(Token = "0x60016DA")]
		[Address(RVA = "0x6962EC0", Offset = "0x6961EC0", VA = "0x6962EC0")]
		get
		{
			return default(StencilOp);
		}
		[Token(Token = "0x60016DB")]
		[Address(RVA = "0x6962E00", Offset = "0x6961E00", VA = "0x6962E00")]
		set
		{
		}
	}

	[Token(Token = "0x17000397")]
	public StencilOp failOperationBack
	{
		[Token(Token = "0x60016DC")]
		[Address(RVA = "0x6962ED0", Offset = "0x6961ED0", VA = "0x6962ED0")]
		get
		{
			return default(StencilOp);
		}
		[Token(Token = "0x60016DD")]
		[Address(RVA = "0x6962E30", Offset = "0x6961E30", VA = "0x6962E30")]
		set
		{
		}
	}

	[Token(Token = "0x17000398")]
	public StencilOp zFailOperationBack
	{
		[Token(Token = "0x60016DE")]
		[Address(RVA = "0x6962EE0", Offset = "0x6961EE0", VA = "0x6962EE0")]
		get
		{
			return default(StencilOp);
		}
		[Token(Token = "0x60016DF")]
		[Address(RVA = "0x6962E60", Offset = "0x6961E60", VA = "0x6962E60")]
		set
		{
		}
	}

	[Token(Token = "0x60016C4")]
	[Address(RVA = "0x6962B70", Offset = "0x6961B70", VA = "0x6962B70")]
	public StencilState(bool enabled = true, byte readMask = 255, byte writeMask = 255, CompareFunction compareFunction = CompareFunction.Always, StencilOp passOperation = StencilOp.Keep, StencilOp failOperation = StencilOp.Keep, StencilOp zFailOperation = StencilOp.Keep)
	{
	}

	[Token(Token = "0x60016C5")]
	[Address(RVA = "0x6962C10", Offset = "0x6961C10", VA = "0x6962C10")]
	public StencilState(bool enabled, byte readMask, byte writeMask, CompareFunction compareFunctionFront, StencilOp passOperationFront, StencilOp failOperationFront, StencilOp zFailOperationFront, CompareFunction compareFunctionBack, StencilOp passOperationBack, StencilOp failOperationBack, StencilOp zFailOperationBack)
	{
	}

	[Token(Token = "0x60016CC")]
	[Address(RVA = "0x6962DB0", Offset = "0x6961DB0", VA = "0x6962DB0")]
	public void SetCompareFunction(CompareFunction value)
	{
	}

	[Token(Token = "0x60016CD")]
	[Address(RVA = "0x6962DE0", Offset = "0x6961DE0", VA = "0x6962DE0")]
	public void SetPassOperation(StencilOp value)
	{
	}

	[Token(Token = "0x60016CE")]
	[Address(RVA = "0x6962E10", Offset = "0x6961E10", VA = "0x6962E10")]
	public void SetFailOperation(StencilOp value)
	{
	}

	[Token(Token = "0x60016CF")]
	[Address(RVA = "0x6962E40", Offset = "0x6961E40", VA = "0x6962E40")]
	public void SetZFailOperation(StencilOp value)
	{
	}

	[Token(Token = "0x60016E0")]
	[Address(RVA = "0x695E250", Offset = "0x695D250", VA = "0x695E250", Slot = "4")]
	public bool Equals(StencilState other)
	{
		return default(bool);
	}

	[Token(Token = "0x60016E1")]
	[Address(RVA = "0x6962EF0", Offset = "0x6961EF0", VA = "0x6962EF0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60016E2")]
	[Address(RVA = "0x695E4D0", Offset = "0x695D4D0", VA = "0x695E4D0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
