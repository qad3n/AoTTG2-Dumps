// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.NotInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20001FA")]
internal abstract class NotInstruction : Instruction
{
	[Token(Token = "0x20001FB")]
	private sealed class NotBoolean : NotInstruction
	{
		[Token(Token = "0x6000A55")]
		[Address(RVA = "0x5E13C30", Offset = "0x5E12C30", VA = "0x5E13C30", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000A56")]
		[Address(RVA = "0x5E13BA0", Offset = "0x5E12BA0", VA = "0x5E13BA0")]
		public NotBoolean()
		{
		}
	}

	[Token(Token = "0x20001FC")]
	private sealed class NotInt64 : NotInstruction
	{
		[Token(Token = "0x6000A57")]
		[Address(RVA = "0x5E13CB0", Offset = "0x5E12CB0", VA = "0x5E13CB0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000A58")]
		[Address(RVA = "0x5E13BB0", Offset = "0x5E12BB0", VA = "0x5E13BB0")]
		public NotInt64()
		{
		}
	}

	[Token(Token = "0x20001FD")]
	private sealed class NotInt32 : NotInstruction
	{
		[Token(Token = "0x6000A59")]
		[Address(RVA = "0x5E13D30", Offset = "0x5E12D30", VA = "0x5E13D30", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000A5A")]
		[Address(RVA = "0x5E13BC0", Offset = "0x5E12BC0", VA = "0x5E13BC0")]
		public NotInt32()
		{
		}
	}

	[Token(Token = "0x20001FE")]
	private sealed class NotInt16 : NotInstruction
	{
		[Token(Token = "0x6000A5B")]
		[Address(RVA = "0x5E13DA0", Offset = "0x5E12DA0", VA = "0x5E13DA0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000A5C")]
		[Address(RVA = "0x5E13BD0", Offset = "0x5E12BD0", VA = "0x5E13BD0")]
		public NotInt16()
		{
		}
	}

	[Token(Token = "0x20001FF")]
	private sealed class NotUInt64 : NotInstruction
	{
		[Token(Token = "0x6000A5D")]
		[Address(RVA = "0x5E13E10", Offset = "0x5E12E10", VA = "0x5E13E10", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000A5E")]
		[Address(RVA = "0x5E13BE0", Offset = "0x5E12BE0", VA = "0x5E13BE0")]
		public NotUInt64()
		{
		}
	}

	[Token(Token = "0x2000200")]
	private sealed class NotUInt32 : NotInstruction
	{
		[Token(Token = "0x6000A5F")]
		[Address(RVA = "0x5E13E90", Offset = "0x5E12E90", VA = "0x5E13E90", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000A60")]
		[Address(RVA = "0x5E13BF0", Offset = "0x5E12BF0", VA = "0x5E13BF0")]
		public NotUInt32()
		{
		}
	}

	[Token(Token = "0x2000201")]
	private sealed class NotUInt16 : NotInstruction
	{
		[Token(Token = "0x6000A61")]
		[Address(RVA = "0x5E13F10", Offset = "0x5E12F10", VA = "0x5E13F10", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000A62")]
		[Address(RVA = "0x5E13C00", Offset = "0x5E12C00", VA = "0x5E13C00")]
		public NotUInt16()
		{
		}
	}

	[Token(Token = "0x2000202")]
	private sealed class NotByte : NotInstruction
	{
		[Token(Token = "0x6000A63")]
		[Address(RVA = "0x5E13F90", Offset = "0x5E12F90", VA = "0x5E13F90", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000A64")]
		[Address(RVA = "0x5E13C10", Offset = "0x5E12C10", VA = "0x5E13C10")]
		public NotByte()
		{
		}
	}

	[Token(Token = "0x2000203")]
	private sealed class NotSByte : NotInstruction
	{
		[Token(Token = "0x6000A65")]
		[Address(RVA = "0x5E14010", Offset = "0x5E13010", VA = "0x5E14010", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000A66")]
		[Address(RVA = "0x5E13C20", Offset = "0x5E12C20", VA = "0x5E13C20")]
		public NotSByte()
		{
		}
	}

	[Token(Token = "0x40003E0")]
	[FieldOffset(Offset = "0x0")]
	public static Instruction s_Boolean;

	[Token(Token = "0x40003E1")]
	[FieldOffset(Offset = "0x8")]
	public static Instruction s_Int64;

	[Token(Token = "0x40003E2")]
	[FieldOffset(Offset = "0x10")]
	public static Instruction s_Int32;

	[Token(Token = "0x40003E3")]
	[FieldOffset(Offset = "0x18")]
	public static Instruction s_Int16;

	[Token(Token = "0x40003E4")]
	[FieldOffset(Offset = "0x20")]
	public static Instruction s_UInt64;

	[Token(Token = "0x40003E5")]
	[FieldOffset(Offset = "0x28")]
	public static Instruction s_UInt32;

	[Token(Token = "0x40003E6")]
	[FieldOffset(Offset = "0x30")]
	public static Instruction s_UInt16;

	[Token(Token = "0x40003E7")]
	[FieldOffset(Offset = "0x38")]
	public static Instruction s_Byte;

	[Token(Token = "0x40003E8")]
	[FieldOffset(Offset = "0x40")]
	public static Instruction s_SByte;

	[Token(Token = "0x17000216")]
	public override int ConsumedStack
	{
		[Token(Token = "0x6000A51")]
		[Address(RVA = "0x5E13730", Offset = "0x5E12730", VA = "0x5E13730", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000217")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000A52")]
		[Address(RVA = "0x5E13740", Offset = "0x5E12740", VA = "0x5E13740", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000218")]
	public override string InstructionName
	{
		[Token(Token = "0x6000A53")]
		[Address(RVA = "0x5E13750", Offset = "0x5E12750", VA = "0x5E13750", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000A50")]
	[Address(RVA = "0x5E13720", Offset = "0x5E12720", VA = "0x5E13720")]
	private NotInstruction()
	{
	}

	[Token(Token = "0x6000A54")]
	[Address(RVA = "0x5E13780", Offset = "0x5E12780", VA = "0x5E13780")]
	public static Instruction Create(Type type)
	{
		return null;
	}
}
