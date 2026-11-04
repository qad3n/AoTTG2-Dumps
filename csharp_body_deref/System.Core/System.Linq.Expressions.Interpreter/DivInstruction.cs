// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.DivInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x200010B")]
internal abstract class DivInstruction : Instruction
{
	[Token(Token = "0x200010C")]
	private sealed class DivInt16 : DivInstruction
	{
		[Token(Token = "0x6000695")]
		[Address(RVA = "0x242CC10", Offset = "0x242B210", VA = "0x18242CC10", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000696")]
		[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
		public DivInt16()
		{
		}
	}

	[Token(Token = "0x200010D")]
	private sealed class DivInt32 : DivInstruction
	{
		[Token(Token = "0x6000697")]
		[Address(RVA = "0x242CD80", Offset = "0x242B380", VA = "0x18242CD80", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000698")]
		[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
		public DivInt32()
		{
		}
	}

	[Token(Token = "0x200010E")]
	private sealed class DivInt64 : DivInstruction
	{
		[Token(Token = "0x6000699")]
		[Address(RVA = "0x242CEE0", Offset = "0x242B4E0", VA = "0x18242CEE0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x600069A")]
		[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
		public DivInt64()
		{
		}
	}

	[Token(Token = "0x200010F")]
	private sealed class DivUInt16 : DivInstruction
	{
		[Token(Token = "0x600069B")]
		[Address(RVA = "0x242D1C0", Offset = "0x242B7C0", VA = "0x18242D1C0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x600069C")]
		[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
		public DivUInt16()
		{
		}
	}

	[Token(Token = "0x2000110")]
	private sealed class DivUInt32 : DivInstruction
	{
		[Token(Token = "0x600069D")]
		[Address(RVA = "0x242D330", Offset = "0x242B930", VA = "0x18242D330", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x600069E")]
		[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
		public DivUInt32()
		{
		}
	}

	[Token(Token = "0x2000111")]
	private sealed class DivUInt64 : DivInstruction
	{
		[Token(Token = "0x600069F")]
		[Address(RVA = "0x242D4A0", Offset = "0x242BAA0", VA = "0x18242D4A0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60006A0")]
		[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
		public DivUInt64()
		{
		}
	}

	[Token(Token = "0x2000112")]
	private sealed class DivSingle : DivInstruction
	{
		[Token(Token = "0x60006A1")]
		[Address(RVA = "0x242D050", Offset = "0x242B650", VA = "0x18242D050", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60006A2")]
		[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
		public DivSingle()
		{
		}
	}

	[Token(Token = "0x2000113")]
	private sealed class DivDouble : DivInstruction
	{
		[Token(Token = "0x60006A3")]
		[Address(RVA = "0x242C5F0", Offset = "0x242ABF0", VA = "0x18242C5F0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60006A4")]
		[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
		public DivDouble()
		{
		}
	}

	[Token(Token = "0x4000261")]
	[FieldOffset(Offset = "0x0")]
	private static Instruction s_Int16;

	[Token(Token = "0x4000262")]
	[FieldOffset(Offset = "0x8")]
	private static Instruction s_Int32;

	[Token(Token = "0x4000263")]
	[FieldOffset(Offset = "0x10")]
	private static Instruction s_Int64;

	[Token(Token = "0x4000264")]
	[FieldOffset(Offset = "0x18")]
	private static Instruction s_UInt16;

	[Token(Token = "0x4000265")]
	[FieldOffset(Offset = "0x20")]
	private static Instruction s_UInt32;

	[Token(Token = "0x4000266")]
	[FieldOffset(Offset = "0x28")]
	private static Instruction s_UInt64;

	[Token(Token = "0x4000267")]
	[FieldOffset(Offset = "0x30")]
	private static Instruction s_Single;

	[Token(Token = "0x4000268")]
	[FieldOffset(Offset = "0x38")]
	private static Instruction s_Double;

	[Token(Token = "0x17000195")]
	public override int ConsumedStack
	{
		[Token(Token = "0x6000690")]
		[Address(RVA = "0x846F80", Offset = "0x845580", VA = "0x180846F80", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000196")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000691")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000197")]
	public override string InstructionName
	{
		[Token(Token = "0x6000692")]
		[Address(RVA = "0x242CBE0", Offset = "0x242B1E0", VA = "0x18242CBE0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000693")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	private DivInstruction()
	{
	}

	[Token(Token = "0x6000694")]
	[Address(RVA = "0x242C760", Offset = "0x242AD60", VA = "0x18242C760")]
	public static Instruction Create(Type type)
	{
		return null;
	}
}
