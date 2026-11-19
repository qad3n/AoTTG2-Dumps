// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.AddOvfInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20000D1")]
internal abstract class AddOvfInstruction : Instruction
{
	[Token(Token = "0x20000D2")]
	private sealed class AddOvfInt16 : AddOvfInstruction
	{
		[Token(Token = "0x60005A9")]
		[Address(RVA = "0x5DD94E0", Offset = "0x5DD84E0", VA = "0x5DD94E0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60005AA")]
		[Address(RVA = "0x5DD9480", Offset = "0x5DD8480", VA = "0x5DD9480")]
		public AddOvfInt16()
		{
		}
	}

	[Token(Token = "0x20000D3")]
	private sealed class AddOvfInt32 : AddOvfInstruction
	{
		[Token(Token = "0x60005AB")]
		[Address(RVA = "0x5DD9770", Offset = "0x5DD8770", VA = "0x5DD9770", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60005AC")]
		[Address(RVA = "0x5DD9490", Offset = "0x5DD8490", VA = "0x5DD9490")]
		public AddOvfInt32()
		{
		}
	}

	[Token(Token = "0x20000D4")]
	private sealed class AddOvfInt64 : AddOvfInstruction
	{
		[Token(Token = "0x60005AD")]
		[Address(RVA = "0x5DD99B0", Offset = "0x5DD89B0", VA = "0x5DD99B0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60005AE")]
		[Address(RVA = "0x5DD94A0", Offset = "0x5DD84A0", VA = "0x5DD94A0")]
		public AddOvfInt64()
		{
		}
	}

	[Token(Token = "0x20000D5")]
	private sealed class AddOvfUInt16 : AddOvfInstruction
	{
		[Token(Token = "0x60005AF")]
		[Address(RVA = "0x5DD9BD0", Offset = "0x5DD8BD0", VA = "0x5DD9BD0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60005B0")]
		[Address(RVA = "0x5DD94B0", Offset = "0x5DD84B0", VA = "0x5DD94B0")]
		public AddOvfUInt16()
		{
		}
	}

	[Token(Token = "0x20000D6")]
	private sealed class AddOvfUInt32 : AddOvfInstruction
	{
		[Token(Token = "0x60005B1")]
		[Address(RVA = "0x5DD9E60", Offset = "0x5DD8E60", VA = "0x5DD9E60", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60005B2")]
		[Address(RVA = "0x5DD94C0", Offset = "0x5DD84C0", VA = "0x5DD94C0")]
		public AddOvfUInt32()
		{
		}
	}

	[Token(Token = "0x20000D7")]
	private sealed class AddOvfUInt64 : AddOvfInstruction
	{
		[Token(Token = "0x60005B3")]
		[Address(RVA = "0x5DDA060", Offset = "0x5DD9060", VA = "0x5DDA060", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60005B4")]
		[Address(RVA = "0x5DD94D0", Offset = "0x5DD84D0", VA = "0x5DD94D0")]
		public AddOvfUInt64()
		{
		}
	}

	[Token(Token = "0x400021C")]
	[FieldOffset(Offset = "0x0")]
	private static Instruction s_Int16;

	[Token(Token = "0x400021D")]
	[FieldOffset(Offset = "0x8")]
	private static Instruction s_Int32;

	[Token(Token = "0x400021E")]
	[FieldOffset(Offset = "0x10")]
	private static Instruction s_Int64;

	[Token(Token = "0x400021F")]
	[FieldOffset(Offset = "0x18")]
	private static Instruction s_UInt16;

	[Token(Token = "0x4000220")]
	[FieldOffset(Offset = "0x20")]
	private static Instruction s_UInt32;

	[Token(Token = "0x4000221")]
	[FieldOffset(Offset = "0x28")]
	private static Instruction s_UInt64;

	[Token(Token = "0x1700013F")]
	public override int ConsumedStack
	{
		[Token(Token = "0x60005A4")]
		[Address(RVA = "0x5DD9130", Offset = "0x5DD8130", VA = "0x5DD9130", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000140")]
	public override int ProducedStack
	{
		[Token(Token = "0x60005A5")]
		[Address(RVA = "0x5DD9140", Offset = "0x5DD8140", VA = "0x5DD9140", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000141")]
	public override string InstructionName
	{
		[Token(Token = "0x60005A6")]
		[Address(RVA = "0x5DD9150", Offset = "0x5DD8150", VA = "0x5DD9150", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60005A7")]
	[Address(RVA = "0x5DD9180", Offset = "0x5DD8180", VA = "0x5DD9180")]
	private AddOvfInstruction()
	{
	}

	[Token(Token = "0x60005A8")]
	[Address(RVA = "0x5DD9190", Offset = "0x5DD8190", VA = "0x5DD9190")]
	public static Instruction Create(Type type)
	{
		return null;
	}
}
