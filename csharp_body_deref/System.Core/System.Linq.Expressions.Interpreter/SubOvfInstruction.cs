// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.SubOvfInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x200022A")]
internal abstract class SubOvfInstruction : Instruction
{
	[Token(Token = "0x200022B")]
	private sealed class SubOvfInt16 : SubOvfInstruction
	{
		[Token(Token = "0x6000AE2")]
		[Address(RVA = "0x5E18EB0", Offset = "0x5E17EB0", VA = "0x5E18EB0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000AE3")]
		[Address(RVA = "0x5E18E50", Offset = "0x5E17E50", VA = "0x5E18E50")]
		public SubOvfInt16()
		{
		}
	}

	[Token(Token = "0x200022C")]
	private sealed class SubOvfInt32 : SubOvfInstruction
	{
		[Token(Token = "0x6000AE4")]
		[Address(RVA = "0x5E19140", Offset = "0x5E18140", VA = "0x5E19140", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000AE5")]
		[Address(RVA = "0x5E18E60", Offset = "0x5E17E60", VA = "0x5E18E60")]
		public SubOvfInt32()
		{
		}
	}

	[Token(Token = "0x200022D")]
	private sealed class SubOvfInt64 : SubOvfInstruction
	{
		[Token(Token = "0x6000AE6")]
		[Address(RVA = "0x5E19380", Offset = "0x5E18380", VA = "0x5E19380", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000AE7")]
		[Address(RVA = "0x5E18E70", Offset = "0x5E17E70", VA = "0x5E18E70")]
		public SubOvfInt64()
		{
		}
	}

	[Token(Token = "0x200022E")]
	private sealed class SubOvfUInt16 : SubOvfInstruction
	{
		[Token(Token = "0x6000AE8")]
		[Address(RVA = "0x5E195A0", Offset = "0x5E185A0", VA = "0x5E195A0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000AE9")]
		[Address(RVA = "0x5E18E80", Offset = "0x5E17E80", VA = "0x5E18E80")]
		public SubOvfUInt16()
		{
		}
	}

	[Token(Token = "0x200022F")]
	private sealed class SubOvfUInt32 : SubOvfInstruction
	{
		[Token(Token = "0x6000AEA")]
		[Address(RVA = "0x5E19800", Offset = "0x5E18800", VA = "0x5E19800", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000AEB")]
		[Address(RVA = "0x5E18E90", Offset = "0x5E17E90", VA = "0x5E18E90")]
		public SubOvfUInt32()
		{
		}
	}

	[Token(Token = "0x2000230")]
	private sealed class SubOvfUInt64 : SubOvfInstruction
	{
		[Token(Token = "0x6000AEC")]
		[Address(RVA = "0x5E199F0", Offset = "0x5E189F0", VA = "0x5E199F0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000AED")]
		[Address(RVA = "0x5E18EA0", Offset = "0x5E17EA0", VA = "0x5E18EA0")]
		public SubOvfUInt64()
		{
		}
	}

	[Token(Token = "0x400040B")]
	[FieldOffset(Offset = "0x0")]
	private static Instruction s_Int16;

	[Token(Token = "0x400040C")]
	[FieldOffset(Offset = "0x8")]
	private static Instruction s_Int32;

	[Token(Token = "0x400040D")]
	[FieldOffset(Offset = "0x10")]
	private static Instruction s_Int64;

	[Token(Token = "0x400040E")]
	[FieldOffset(Offset = "0x18")]
	private static Instruction s_UInt16;

	[Token(Token = "0x400040F")]
	[FieldOffset(Offset = "0x20")]
	private static Instruction s_UInt32;

	[Token(Token = "0x4000410")]
	[FieldOffset(Offset = "0x28")]
	private static Instruction s_UInt64;

	[Token(Token = "0x17000233")]
	public override int ConsumedStack
	{
		[Token(Token = "0x6000ADD")]
		[Address(RVA = "0x5E18B00", Offset = "0x5E17B00", VA = "0x5E18B00", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000234")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000ADE")]
		[Address(RVA = "0x5E18B10", Offset = "0x5E17B10", VA = "0x5E18B10", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000235")]
	public override string InstructionName
	{
		[Token(Token = "0x6000ADF")]
		[Address(RVA = "0x5E18B20", Offset = "0x5E17B20", VA = "0x5E18B20", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000AE0")]
	[Address(RVA = "0x5E18B50", Offset = "0x5E17B50", VA = "0x5E18B50")]
	private SubOvfInstruction()
	{
	}

	[Token(Token = "0x6000AE1")]
	[Address(RVA = "0x5E18B60", Offset = "0x5E17B60", VA = "0x5E18B60")]
	public static Instruction Create(Type type)
	{
		return null;
	}
}
