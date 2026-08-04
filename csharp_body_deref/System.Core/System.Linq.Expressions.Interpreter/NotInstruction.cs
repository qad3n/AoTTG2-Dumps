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
		[Token(Token = "0x6000A4B")]
		[Address(RVA = "0x44FE8B0", Offset = "0x44FE8B0", VA = "0x44FE8B0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000A4C")]
		[Address(RVA = "0x44FE820", Offset = "0x44FE820", VA = "0x44FE820")]
		public NotBoolean()
		{
		}
	}

	[Token(Token = "0x20001FB")]
	private sealed class NotInt64 : NotInstruction
	{
		[Token(Token = "0x6000A4D")]
		[Address(RVA = "0x44FE930", Offset = "0x44FE930", VA = "0x44FE930", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000A4E")]
		[Address(RVA = "0x44FE830", Offset = "0x44FE830", VA = "0x44FE830")]
		public NotInt64()
		{
		}
	}

	[Token(Token = "0x20001FC")]
	private sealed class NotInt32 : NotInstruction
	{
		[Token(Token = "0x6000A4F")]
		[Address(RVA = "0x44FE9B0", Offset = "0x44FE9B0", VA = "0x44FE9B0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000A50")]
		[Address(RVA = "0x44FE840", Offset = "0x44FE840", VA = "0x44FE840")]
		public NotInt32()
		{
		}
	}

	[Token(Token = "0x20001FD")]
	private sealed class NotInt16 : NotInstruction
	{
		[Token(Token = "0x6000A51")]
		[Address(RVA = "0x44FEA20", Offset = "0x44FEA20", VA = "0x44FEA20", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000A52")]
		[Address(RVA = "0x44FE850", Offset = "0x44FE850", VA = "0x44FE850")]
		public NotInt16()
		{
		}
	}

	[Token(Token = "0x20001FE")]
	private sealed class NotUInt64 : NotInstruction
	{
		[Token(Token = "0x6000A53")]
		[Address(RVA = "0x44FEA90", Offset = "0x44FEA90", VA = "0x44FEA90", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000A54")]
		[Address(RVA = "0x44FE860", Offset = "0x44FE860", VA = "0x44FE860")]
		public NotUInt64()
		{
		}
	}

	[Token(Token = "0x20001FF")]
	private sealed class NotUInt32 : NotInstruction
	{
		[Token(Token = "0x6000A55")]
		[Address(RVA = "0x44FEB10", Offset = "0x44FEB10", VA = "0x44FEB10", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000A56")]
		[Address(RVA = "0x44FE870", Offset = "0x44FE870", VA = "0x44FE870")]
		public NotUInt32()
		{
		}
	}

	[Token(Token = "0x2000200")]
	private sealed class NotUInt16 : NotInstruction
	{
		[Token(Token = "0x6000A57")]
		[Address(RVA = "0x44FEB90", Offset = "0x44FEB90", VA = "0x44FEB90", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000A58")]
		[Address(RVA = "0x44FE880", Offset = "0x44FE880", VA = "0x44FE880")]
		public NotUInt16()
		{
		}
	}

	[Token(Token = "0x2000201")]
	private sealed class NotByte : NotInstruction
	{
		[Token(Token = "0x6000A59")]
		[Address(RVA = "0x44FEC10", Offset = "0x44FEC10", VA = "0x44FEC10", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000A5A")]
		[Address(RVA = "0x44FE890", Offset = "0x44FE890", VA = "0x44FE890")]
		public NotByte()
		{
		}
	}

	[Token(Token = "0x2000202")]
	private sealed class NotSByte : NotInstruction
	{
		[Token(Token = "0x6000A5B")]
		[Address(RVA = "0x44FEC90", Offset = "0x44FEC90", VA = "0x44FEC90", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000A5C")]
		[Address(RVA = "0x44FE8A0", Offset = "0x44FE8A0", VA = "0x44FE8A0")]
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
		[Token(Token = "0x6000A47")]
		[Address(RVA = "0x44FE3B0", Offset = "0x44FE3B0", VA = "0x44FE3B0", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000215")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000A48")]
		[Address(RVA = "0x44FE3C0", Offset = "0x44FE3C0", VA = "0x44FE3C0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000216")]
	public override string InstructionName
	{
		[Token(Token = "0x6000A49")]
		[Address(RVA = "0x44FE3D0", Offset = "0x44FE3D0", VA = "0x44FE3D0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000A46")]
	[Address(RVA = "0x44FE3A0", Offset = "0x44FE3A0", VA = "0x44FE3A0")]
	private NotInstruction()
	{
	}

	[Token(Token = "0x6000A4A")]
	[Address(RVA = "0x44FE400", Offset = "0x44FE400", VA = "0x44FE400")]
	public static Instruction Create(Type type)
	{
		return null;
	}
}
