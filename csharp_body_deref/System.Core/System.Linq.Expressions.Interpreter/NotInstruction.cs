// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.NotInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20001F9")]
internal abstract class NotInstruction : Instruction
{
	[Token(Token = "0x20001FA")]
	private sealed class NotBoolean : NotInstruction
	{
		[Token(Token = "0x6000A4A")]
		[Address(RVA = "0x24783C0", Offset = "0x24769C0", VA = "0x1824783C0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000A4B")]
		[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
		public NotBoolean()
		{
		}
	}

	[Token(Token = "0x20001FB")]
	private sealed class NotInt64 : NotInstruction
	{
		[Token(Token = "0x6000A4C")]
		[Address(RVA = "0x247A9E0", Offset = "0x2478FE0", VA = "0x18247A9E0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000A4D")]
		[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
		public NotInt64()
		{
		}
	}

	[Token(Token = "0x20001FC")]
	private sealed class NotInt32 : NotInstruction
	{
		[Token(Token = "0x6000A4E")]
		[Address(RVA = "0x247A960", Offset = "0x2478F60", VA = "0x18247A960", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000A4F")]
		[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
		public NotInt32()
		{
		}
	}

	[Token(Token = "0x20001FD")]
	private sealed class NotInt16 : NotInstruction
	{
		[Token(Token = "0x6000A50")]
		[Address(RVA = "0x247A8E0", Offset = "0x2478EE0", VA = "0x18247A8E0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000A51")]
		[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
		public NotInt16()
		{
		}
	}

	[Token(Token = "0x20001FE")]
	private sealed class NotUInt64 : NotInstruction
	{
		[Token(Token = "0x6000A52")]
		[Address(RVA = "0x247ABF0", Offset = "0x24791F0", VA = "0x18247ABF0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000A53")]
		[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
		public NotUInt64()
		{
		}
	}

	[Token(Token = "0x20001FF")]
	private sealed class NotUInt32 : NotInstruction
	{
		[Token(Token = "0x6000A54")]
		[Address(RVA = "0x247AB70", Offset = "0x2479170", VA = "0x18247AB70", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000A55")]
		[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
		public NotUInt32()
		{
		}
	}

	[Token(Token = "0x2000200")]
	private sealed class NotUInt16 : NotInstruction
	{
		[Token(Token = "0x6000A56")]
		[Address(RVA = "0x247AAF0", Offset = "0x24790F0", VA = "0x18247AAF0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000A57")]
		[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
		public NotUInt16()
		{
		}
	}

	[Token(Token = "0x2000201")]
	private sealed class NotByte : NotInstruction
	{
		[Token(Token = "0x6000A58")]
		[Address(RVA = "0x2478440", Offset = "0x2476A40", VA = "0x182478440", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000A59")]
		[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
		public NotByte()
		{
		}
	}

	[Token(Token = "0x2000202")]
	private sealed class NotSByte : NotInstruction
	{
		[Token(Token = "0x6000A5A")]
		[Address(RVA = "0x247AA70", Offset = "0x2479070", VA = "0x18247AA70", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000A5B")]
		[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
		public NotSByte()
		{
		}
	}

	[Token(Token = "0x40003D7")]
	[FieldOffset(Offset = "0x0")]
	public static Instruction s_Boolean;

	[Token(Token = "0x40003D8")]
	[FieldOffset(Offset = "0x8")]
	public static Instruction s_Int64;

	[Token(Token = "0x40003D9")]
	[FieldOffset(Offset = "0x10")]
	public static Instruction s_Int32;

	[Token(Token = "0x40003DA")]
	[FieldOffset(Offset = "0x18")]
	public static Instruction s_Int16;

	[Token(Token = "0x40003DB")]
	[FieldOffset(Offset = "0x20")]
	public static Instruction s_UInt64;

	[Token(Token = "0x40003DC")]
	[FieldOffset(Offset = "0x28")]
	public static Instruction s_UInt32;

	[Token(Token = "0x40003DD")]
	[FieldOffset(Offset = "0x30")]
	public static Instruction s_UInt16;

	[Token(Token = "0x40003DE")]
	[FieldOffset(Offset = "0x38")]
	public static Instruction s_Byte;

	[Token(Token = "0x40003DF")]
	[FieldOffset(Offset = "0x40")]
	public static Instruction s_SByte;

	[Token(Token = "0x17000214")]
	public override int ConsumedStack
	{
		[Token(Token = "0x6000A46")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000215")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000A47")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000216")]
	public override string InstructionName
	{
		[Token(Token = "0x6000A48")]
		[Address(RVA = "0x247A8B0", Offset = "0x2478EB0", VA = "0x18247A8B0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000A45")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	private NotInstruction()
	{
	}

	[Token(Token = "0x6000A49")]
	[Address(RVA = "0x247A3B0", Offset = "0x24789B0", VA = "0x18247A3B0")]
	public static Instruction Create(Type type)
	{
		return null;
	}
}
