// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.MulInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20001C5")]
internal abstract class MulInstruction : Instruction
{
	[Token(Token = "0x20001C6")]
	private sealed class MulInt16 : MulInstruction
	{
		[Token(Token = "0x60009D6")]
		[Address(RVA = "0x5E0E9F0", Offset = "0x5E0D9F0", VA = "0x5E0E9F0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60009D7")]
		[Address(RVA = "0x5E0E970", Offset = "0x5E0D970", VA = "0x5E0E970")]
		public MulInt16()
		{
		}
	}

	[Token(Token = "0x20001C7")]
	private sealed class MulInt32 : MulInstruction
	{
		[Token(Token = "0x60009D8")]
		[Address(RVA = "0x5E0EB50", Offset = "0x5E0DB50", VA = "0x5E0EB50", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60009D9")]
		[Address(RVA = "0x5E0E980", Offset = "0x5E0D980", VA = "0x5E0E980")]
		public MulInt32()
		{
		}
	}

	[Token(Token = "0x20001C8")]
	private sealed class MulInt64 : MulInstruction
	{
		[Token(Token = "0x60009DA")]
		[Address(RVA = "0x5E0ECA0", Offset = "0x5E0DCA0", VA = "0x5E0ECA0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60009DB")]
		[Address(RVA = "0x5E0E990", Offset = "0x5E0D990", VA = "0x5E0E990")]
		public MulInt64()
		{
		}
	}

	[Token(Token = "0x20001C9")]
	private sealed class MulUInt16 : MulInstruction
	{
		[Token(Token = "0x60009DC")]
		[Address(RVA = "0x5E0EE00", Offset = "0x5E0DE00", VA = "0x5E0EE00", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60009DD")]
		[Address(RVA = "0x5E0E9A0", Offset = "0x5E0D9A0", VA = "0x5E0E9A0")]
		public MulUInt16()
		{
		}
	}

	[Token(Token = "0x20001CA")]
	private sealed class MulUInt32 : MulInstruction
	{
		[Token(Token = "0x60009DE")]
		[Address(RVA = "0x5E0EF60", Offset = "0x5E0DF60", VA = "0x5E0EF60", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60009DF")]
		[Address(RVA = "0x5E0E9B0", Offset = "0x5E0D9B0", VA = "0x5E0E9B0")]
		public MulUInt32()
		{
		}
	}

	[Token(Token = "0x20001CB")]
	private sealed class MulUInt64 : MulInstruction
	{
		[Token(Token = "0x60009E0")]
		[Address(RVA = "0x5E0F0C0", Offset = "0x5E0E0C0", VA = "0x5E0F0C0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60009E1")]
		[Address(RVA = "0x5E0E9C0", Offset = "0x5E0D9C0", VA = "0x5E0E9C0")]
		public MulUInt64()
		{
		}
	}

	[Token(Token = "0x20001CC")]
	private sealed class MulSingle : MulInstruction
	{
		[Token(Token = "0x60009E2")]
		[Address(RVA = "0x5E0F220", Offset = "0x5E0E220", VA = "0x5E0F220", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60009E3")]
		[Address(RVA = "0x5E0E9D0", Offset = "0x5E0D9D0", VA = "0x5E0E9D0")]
		public MulSingle()
		{
		}
	}

	[Token(Token = "0x20001CD")]
	private sealed class MulDouble : MulInstruction
	{
		[Token(Token = "0x60009E4")]
		[Address(RVA = "0x5E0F380", Offset = "0x5E0E380", VA = "0x5E0F380", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60009E5")]
		[Address(RVA = "0x5E0E9E0", Offset = "0x5E0D9E0", VA = "0x5E0E9E0")]
		public MulDouble()
		{
		}
	}

	[Token(Token = "0x40003AF")]
	[FieldOffset(Offset = "0x0")]
	private static Instruction s_Int16;

	[Token(Token = "0x40003B0")]
	[FieldOffset(Offset = "0x8")]
	private static Instruction s_Int32;

	[Token(Token = "0x40003B1")]
	[FieldOffset(Offset = "0x10")]
	private static Instruction s_Int64;

	[Token(Token = "0x40003B2")]
	[FieldOffset(Offset = "0x18")]
	private static Instruction s_UInt16;

	[Token(Token = "0x40003B3")]
	[FieldOffset(Offset = "0x20")]
	private static Instruction s_UInt32;

	[Token(Token = "0x40003B4")]
	[FieldOffset(Offset = "0x28")]
	private static Instruction s_UInt64;

	[Token(Token = "0x40003B5")]
	[FieldOffset(Offset = "0x30")]
	private static Instruction s_Single;

	[Token(Token = "0x40003B6")]
	[FieldOffset(Offset = "0x38")]
	private static Instruction s_Double;

	[Token(Token = "0x17000203")]
	public override int ConsumedStack
	{
		[Token(Token = "0x60009D1")]
		[Address(RVA = "0x5E0E550", Offset = "0x5E0D550", VA = "0x5E0E550", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000204")]
	public override int ProducedStack
	{
		[Token(Token = "0x60009D2")]
		[Address(RVA = "0x5E0E560", Offset = "0x5E0D560", VA = "0x5E0E560", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000205")]
	public override string InstructionName
	{
		[Token(Token = "0x60009D3")]
		[Address(RVA = "0x5E0E570", Offset = "0x5E0D570", VA = "0x5E0E570", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60009D4")]
	[Address(RVA = "0x5E0E5A0", Offset = "0x5E0D5A0", VA = "0x5E0E5A0")]
	private MulInstruction()
	{
	}

	[Token(Token = "0x60009D5")]
	[Address(RVA = "0x5E0E5B0", Offset = "0x5E0D5B0", VA = "0x5E0E5B0")]
	public static Instruction Create(Type type)
	{
		return null;
	}
}
