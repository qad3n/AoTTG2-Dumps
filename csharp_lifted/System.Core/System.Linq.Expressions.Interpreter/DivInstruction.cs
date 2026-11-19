// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.DivInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x200010C")]
internal abstract class DivInstruction : Instruction
{
	[Token(Token = "0x200010D")]
	private sealed class DivInt16 : DivInstruction
	{
		[Token(Token = "0x60006A0")]
		[Address(RVA = "0x5DE06C0", Offset = "0x5DDF6C0", VA = "0x5DE06C0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60006A1")]
		[Address(RVA = "0x5DE0640", Offset = "0x5DDF640", VA = "0x5DE0640")]
		public DivInt16()
		{
		}
	}

	[Token(Token = "0x200010E")]
	private sealed class DivInt32 : DivInstruction
	{
		[Token(Token = "0x60006A2")]
		[Address(RVA = "0x5DE0820", Offset = "0x5DDF820", VA = "0x5DE0820", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60006A3")]
		[Address(RVA = "0x5DE0650", Offset = "0x5DDF650", VA = "0x5DE0650")]
		public DivInt32()
		{
		}
	}

	[Token(Token = "0x200010F")]
	private sealed class DivInt64 : DivInstruction
	{
		[Token(Token = "0x60006A4")]
		[Address(RVA = "0x5DE0960", Offset = "0x5DDF960", VA = "0x5DE0960", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60006A5")]
		[Address(RVA = "0x5DE0660", Offset = "0x5DDF660", VA = "0x5DE0660")]
		public DivInt64()
		{
		}
	}

	[Token(Token = "0x2000110")]
	private sealed class DivUInt16 : DivInstruction
	{
		[Token(Token = "0x60006A6")]
		[Address(RVA = "0x5DE0AE0", Offset = "0x5DDFAE0", VA = "0x5DE0AE0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60006A7")]
		[Address(RVA = "0x5DE0670", Offset = "0x5DDF670", VA = "0x5DE0670")]
		public DivUInt16()
		{
		}
	}

	[Token(Token = "0x2000111")]
	private sealed class DivUInt32 : DivInstruction
	{
		[Token(Token = "0x60006A8")]
		[Address(RVA = "0x5DE0C40", Offset = "0x5DDFC40", VA = "0x5DE0C40", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60006A9")]
		[Address(RVA = "0x5DE0680", Offset = "0x5DDF680", VA = "0x5DE0680")]
		public DivUInt32()
		{
		}
	}

	[Token(Token = "0x2000112")]
	private sealed class DivUInt64 : DivInstruction
	{
		[Token(Token = "0x60006AA")]
		[Address(RVA = "0x5DE0DA0", Offset = "0x5DDFDA0", VA = "0x5DE0DA0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60006AB")]
		[Address(RVA = "0x5DE0690", Offset = "0x5DDF690", VA = "0x5DE0690")]
		public DivUInt64()
		{
		}
	}

	[Token(Token = "0x2000113")]
	private sealed class DivSingle : DivInstruction
	{
		[Token(Token = "0x60006AC")]
		[Address(RVA = "0x5DE0F20", Offset = "0x5DDFF20", VA = "0x5DE0F20", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60006AD")]
		[Address(RVA = "0x5DE06A0", Offset = "0x5DDF6A0", VA = "0x5DE06A0")]
		public DivSingle()
		{
		}
	}

	[Token(Token = "0x2000114")]
	private sealed class DivDouble : DivInstruction
	{
		[Token(Token = "0x60006AE")]
		[Address(RVA = "0x5DE1080", Offset = "0x5DE0080", VA = "0x5DE1080", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60006AF")]
		[Address(RVA = "0x5DE06B0", Offset = "0x5DDF6B0", VA = "0x5DE06B0")]
		public DivDouble()
		{
		}
	}

	[Token(Token = "0x400026A")]
	[FieldOffset(Offset = "0x0")]
	private static Instruction s_Int16;

	[Token(Token = "0x400026B")]
	[FieldOffset(Offset = "0x8")]
	private static Instruction s_Int32;

	[Token(Token = "0x400026C")]
	[FieldOffset(Offset = "0x10")]
	private static Instruction s_Int64;

	[Token(Token = "0x400026D")]
	[FieldOffset(Offset = "0x18")]
	private static Instruction s_UInt16;

	[Token(Token = "0x400026E")]
	[FieldOffset(Offset = "0x20")]
	private static Instruction s_UInt32;

	[Token(Token = "0x400026F")]
	[FieldOffset(Offset = "0x28")]
	private static Instruction s_UInt64;

	[Token(Token = "0x4000270")]
	[FieldOffset(Offset = "0x30")]
	private static Instruction s_Single;

	[Token(Token = "0x4000271")]
	[FieldOffset(Offset = "0x38")]
	private static Instruction s_Double;

	[Token(Token = "0x17000197")]
	public override int ConsumedStack
	{
		[Token(Token = "0x600069B")]
		[Address(RVA = "0x5DE0220", Offset = "0x5DDF220", VA = "0x5DE0220", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000198")]
	public override int ProducedStack
	{
		[Token(Token = "0x600069C")]
		[Address(RVA = "0x5DE0230", Offset = "0x5DDF230", VA = "0x5DE0230", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000199")]
	public override string InstructionName
	{
		[Token(Token = "0x600069D")]
		[Address(RVA = "0x5DE0240", Offset = "0x5DDF240", VA = "0x5DE0240", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600069E")]
	[Address(RVA = "0x5DE0270", Offset = "0x5DDF270", VA = "0x5DE0270")]
	private DivInstruction()
	{
	}

	[Token(Token = "0x600069F")]
	[Address(RVA = "0x5DE0280", Offset = "0x5DDF280", VA = "0x5DE0280")]
	public static Instruction Create(Type type)
	{
		return null;
	}
}
