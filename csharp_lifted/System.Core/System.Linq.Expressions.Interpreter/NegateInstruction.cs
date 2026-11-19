// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.NegateInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20001D5")]
internal abstract class NegateInstruction : Instruction
{
	[Token(Token = "0x20001D6")]
	private sealed class NegateInt16 : NegateInstruction
	{
		[Token(Token = "0x60009FC")]
		[Address(RVA = "0x5E109A0", Offset = "0x5E0F9A0", VA = "0x5E109A0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60009FD")]
		[Address(RVA = "0x5E10950", Offset = "0x5E0F950", VA = "0x5E10950")]
		public NegateInt16()
		{
		}
	}

	[Token(Token = "0x20001D7")]
	private sealed class NegateInt32 : NegateInstruction
	{
		[Token(Token = "0x60009FE")]
		[Address(RVA = "0x5E10A20", Offset = "0x5E0FA20", VA = "0x5E10A20", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60009FF")]
		[Address(RVA = "0x5E10960", Offset = "0x5E0F960", VA = "0x5E10960")]
		public NegateInt32()
		{
		}
	}

	[Token(Token = "0x20001D8")]
	private sealed class NegateInt64 : NegateInstruction
	{
		[Token(Token = "0x6000A00")]
		[Address(RVA = "0x5E10A90", Offset = "0x5E0FA90", VA = "0x5E10A90", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000A01")]
		[Address(RVA = "0x5E10970", Offset = "0x5E0F970", VA = "0x5E10970")]
		public NegateInt64()
		{
		}
	}

	[Token(Token = "0x20001D9")]
	private sealed class NegateSingle : NegateInstruction
	{
		[Token(Token = "0x6000A02")]
		[Address(RVA = "0x5E10B10", Offset = "0x5E0FB10", VA = "0x5E10B10", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000A03")]
		[Address(RVA = "0x5E10980", Offset = "0x5E0F980", VA = "0x5E10980")]
		public NegateSingle()
		{
		}
	}

	[Token(Token = "0x20001DA")]
	private sealed class NegateDouble : NegateInstruction
	{
		[Token(Token = "0x6000A04")]
		[Address(RVA = "0x5E10BA0", Offset = "0x5E0FBA0", VA = "0x5E10BA0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000A05")]
		[Address(RVA = "0x5E10990", Offset = "0x5E0F990", VA = "0x5E10990")]
		public NegateDouble()
		{
		}
	}

	[Token(Token = "0x40003BD")]
	[FieldOffset(Offset = "0x0")]
	private static Instruction s_Int16;

	[Token(Token = "0x40003BE")]
	[FieldOffset(Offset = "0x8")]
	private static Instruction s_Int32;

	[Token(Token = "0x40003BF")]
	[FieldOffset(Offset = "0x10")]
	private static Instruction s_Int64;

	[Token(Token = "0x40003C0")]
	[FieldOffset(Offset = "0x18")]
	private static Instruction s_Single;

	[Token(Token = "0x40003C1")]
	[FieldOffset(Offset = "0x20")]
	private static Instruction s_Double;

	[Token(Token = "0x17000209")]
	public override int ConsumedStack
	{
		[Token(Token = "0x60009F7")]
		[Address(RVA = "0x5E10650", Offset = "0x5E0F650", VA = "0x5E10650", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700020A")]
	public override int ProducedStack
	{
		[Token(Token = "0x60009F8")]
		[Address(RVA = "0x5E10660", Offset = "0x5E0F660", VA = "0x5E10660", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700020B")]
	public override string InstructionName
	{
		[Token(Token = "0x60009F9")]
		[Address(RVA = "0x5E10670", Offset = "0x5E0F670", VA = "0x5E10670", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60009FA")]
	[Address(RVA = "0x5E106A0", Offset = "0x5E0F6A0", VA = "0x5E106A0")]
	private NegateInstruction()
	{
	}

	[Token(Token = "0x60009FB")]
	[Address(RVA = "0x5E106B0", Offset = "0x5E0F6B0", VA = "0x5E106B0")]
	public static Instruction Create(Type type)
	{
		return null;
	}
}
