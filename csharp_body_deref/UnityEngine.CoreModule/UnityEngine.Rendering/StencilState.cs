// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.StencilState
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20003CD")]
public struct StencilState : IEquatable<StencilState>
{
	[Token(Token = "0x4000C42")]
	[FieldOffset(Offset = "0x0")]
	private byte m_Enabled;

	[Token(Token = "0x4000C43")]
	[FieldOffset(Offset = "0x1")]
	private byte m_ReadMask;

	[Token(Token = "0x4000C44")]
	[FieldOffset(Offset = "0x2")]
	private byte m_WriteMask;

	[Token(Token = "0x4000C45")]
	[FieldOffset(Offset = "0x3")]
	private byte m_Padding;

	[Token(Token = "0x4000C46")]
	[FieldOffset(Offset = "0x4")]
	private byte m_CompareFunctionFront;

	[Token(Token = "0x4000C47")]
	[FieldOffset(Offset = "0x5")]
	private byte m_PassOperationFront;

	[Token(Token = "0x4000C48")]
	[FieldOffset(Offset = "0x6")]
	private byte m_FailOperationFront;

	[Token(Token = "0x4000C49")]
	[FieldOffset(Offset = "0x7")]
	private byte m_ZFailOperationFront;

	[Token(Token = "0x4000C4A")]
	[FieldOffset(Offset = "0x8")]
	private byte m_CompareFunctionBack;

	[Token(Token = "0x4000C4B")]
	[FieldOffset(Offset = "0x9")]
	private byte m_PassOperationBack;

	[Token(Token = "0x4000C4C")]
	[FieldOffset(Offset = "0xA")]
	private byte m_FailOperationBack;

	[Token(Token = "0x4000C4D")]
	[FieldOffset(Offset = "0xB")]
	private byte m_ZFailOperationBack;

	[Token(Token = "0x1700039F")]
	public static StencilState defaultValue
	{
		[Token(Token = "0x600171E")]
		[Address(RVA = "0x2F73990", Offset = "0x2F71F90", VA = "0x182F73990")]
		get
		{
			return default(StencilState);
		}
	}

	[Token(Token = "0x170003A0")]
	public bool enabled
	{
		[Token(Token = "0x6001721")]
		[Address(RVA = "0x2F73A00", Offset = "0x2F72000", VA = "0x182F73A00")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001722")]
		[Address(RVA = "0x2F73AE0", Offset = "0x2F720E0", VA = "0x182F73AE0")]
		set
		{
		}
	}

	[Token(Token = "0x170003A1")]
	public byte readMask
	{
		[Token(Token = "0x6001723")]
		[Address(RVA = "0x2F73A90", Offset = "0x2F72090", VA = "0x182F73A90")]
		get
		{
			return default(byte);
		}
		[Token(Token = "0x6001724")]
		[Address(RVA = "0x1D69F20", Offset = "0x1D68520", VA = "0x181D69F20")]
		set
		{
		}
	}

	[Token(Token = "0x170003A2")]
	public byte writeMask
	{
		[Token(Token = "0x6001725")]
		[Address(RVA = "0x2F73AA0", Offset = "0x2F720A0", VA = "0x182F73AA0")]
		get
		{
			return default(byte);
		}
		[Token(Token = "0x6001726")]
		[Address(RVA = "0x2F73B60", Offset = "0x2F72160", VA = "0x182F73B60")]
		set
		{
		}
	}

	[Token(Token = "0x170003A3")]
	public CompareFunction compareFunctionFront
	{
		[Token(Token = "0x600172B")]
		[Address(RVA = "0x2F73980", Offset = "0x2F71F80", VA = "0x182F73980")]
		get
		{
			return default(CompareFunction);
		}
		[Token(Token = "0x600172C")]
		[Address(RVA = "0x2F73AD0", Offset = "0x2F720D0", VA = "0x182F73AD0")]
		set
		{
		}
	}

	[Token(Token = "0x170003A4")]
	public StencilOp passOperationFront
	{
		[Token(Token = "0x600172D")]
		[Address(RVA = "0x2F73A80", Offset = "0x2F72080", VA = "0x182F73A80")]
		get
		{
			return default(StencilOp);
		}
		[Token(Token = "0x600172E")]
		[Address(RVA = "0x2F73B50", Offset = "0x2F72150", VA = "0x182F73B50")]
		set
		{
		}
	}

	[Token(Token = "0x170003A5")]
	public StencilOp failOperationFront
	{
		[Token(Token = "0x600172F")]
		[Address(RVA = "0x2F73A60", Offset = "0x2F72060", VA = "0x182F73A60")]
		get
		{
			return default(StencilOp);
		}
		[Token(Token = "0x6001730")]
		[Address(RVA = "0x2F73B40", Offset = "0x2F72140", VA = "0x182F73B40")]
		set
		{
		}
	}

	[Token(Token = "0x170003A6")]
	public StencilOp zFailOperationFront
	{
		[Token(Token = "0x6001731")]
		[Address(RVA = "0x2F73AC0", Offset = "0x2F720C0", VA = "0x182F73AC0")]
		get
		{
			return default(StencilOp);
		}
		[Token(Token = "0x6001732")]
		[Address(RVA = "0x2F73B80", Offset = "0x2F72180", VA = "0x182F73B80")]
		set
		{
		}
	}

	[Token(Token = "0x170003A7")]
	public CompareFunction compareFunctionBack
	{
		[Token(Token = "0x6001733")]
		[Address(RVA = "0x2F73970", Offset = "0x2F71F70", VA = "0x182F73970")]
		get
		{
			return default(CompareFunction);
		}
		[Token(Token = "0x6001734")]
		[Address(RVA = "0x2B19700", Offset = "0x2B17D00", VA = "0x182B19700")]
		set
		{
		}
	}

	[Token(Token = "0x170003A8")]
	public StencilOp passOperationBack
	{
		[Token(Token = "0x6001735")]
		[Address(RVA = "0x2F73A70", Offset = "0x2F72070", VA = "0x182F73A70")]
		get
		{
			return default(StencilOp);
		}
		[Token(Token = "0x6001736")]
		[Address(RVA = "0x2B19720", Offset = "0x2B17D20", VA = "0x182B19720")]
		set
		{
		}
	}

	[Token(Token = "0x170003A9")]
	public StencilOp failOperationBack
	{
		[Token(Token = "0x6001737")]
		[Address(RVA = "0x2F73A50", Offset = "0x2F72050", VA = "0x182F73A50")]
		get
		{
			return default(StencilOp);
		}
		[Token(Token = "0x6001738")]
		[Address(RVA = "0x2B19710", Offset = "0x2B17D10", VA = "0x182B19710")]
		set
		{
		}
	}

	[Token(Token = "0x170003AA")]
	public StencilOp zFailOperationBack
	{
		[Token(Token = "0x6001739")]
		[Address(RVA = "0x2F73AB0", Offset = "0x2F720B0", VA = "0x182F73AB0")]
		get
		{
			return default(StencilOp);
		}
		[Token(Token = "0x600173A")]
		[Address(RVA = "0x2F73B70", Offset = "0x2F72170", VA = "0x182F73B70")]
		set
		{
		}
	}

	[Token(Token = "0x600171F")]
	[Address(RVA = "0x2F73910", Offset = "0x2F71F10", VA = "0x182F73910")]
	public StencilState(bool enabled = true, byte readMask = 255, byte writeMask = 255, CompareFunction compareFunction = CompareFunction.Always, StencilOp passOperation = StencilOp.Keep, StencilOp failOperation = StencilOp.Keep, StencilOp zFailOperation = StencilOp.Keep)
	{
	}

	[Token(Token = "0x6001720")]
	[Address(RVA = "0x2F73850", Offset = "0x2F71E50", VA = "0x182F73850")]
	public StencilState(bool enabled, byte readMask, byte writeMask, CompareFunction compareFunctionFront, StencilOp passOperationFront, StencilOp failOperationFront, StencilOp zFailOperationFront, CompareFunction compareFunctionBack, StencilOp passOperationBack, StencilOp failOperationBack, StencilOp zFailOperationBack)
	{
	}

	[Token(Token = "0x6001727")]
	[Address(RVA = "0x2F73810", Offset = "0x2F71E10", VA = "0x182F73810")]
	public void SetCompareFunction(CompareFunction value)
	{
	}

	[Token(Token = "0x6001728")]
	[Address(RVA = "0x2F73830", Offset = "0x2F71E30", VA = "0x182F73830")]
	public void SetPassOperation(StencilOp value)
	{
	}

	[Token(Token = "0x6001729")]
	[Address(RVA = "0x2F73820", Offset = "0x2F71E20", VA = "0x182F73820")]
	public void SetFailOperation(StencilOp value)
	{
	}

	[Token(Token = "0x600172A")]
	[Address(RVA = "0x2F73840", Offset = "0x2F71E40", VA = "0x182F73840")]
	public void SetZFailOperation(StencilOp value)
	{
	}

	[Token(Token = "0x600173B")]
	[Address(RVA = "0x2F735A0", Offset = "0x2F71BA0", VA = "0x182F735A0", Slot = "4")]
	public bool Equals(StencilState other)
	{
		return default(bool);
	}

	[Token(Token = "0x600173C")]
	[Address(RVA = "0x2F73610", Offset = "0x2F71C10", VA = "0x182F73610", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600173D")]
	[Address(RVA = "0x2F73710", Offset = "0x2F71D10", VA = "0x182F73710", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
