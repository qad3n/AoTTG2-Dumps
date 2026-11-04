// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.AddOvfInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20000D0")]
internal abstract class AddOvfInstruction : Instruction
{
	[Token(Token = "0x20000D1")]
	private sealed class AddOvfInt16 : AddOvfInstruction
	{
		[Token(Token = "0x600059E")]
		[Address(RVA = "0x2425F30", Offset = "0x2424530", VA = "0x182425F30", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x600059F")]
		[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
		public AddOvfInt16()
		{
		}
	}

	[Token(Token = "0x20000D2")]
	private sealed class AddOvfInt32 : AddOvfInstruction
	{
		[Token(Token = "0x60005A0")]
		[Address(RVA = "0x2426230", Offset = "0x2424830", VA = "0x182426230", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60005A1")]
		[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
		public AddOvfInt32()
		{
		}
	}

	[Token(Token = "0x20000D3")]
	private sealed class AddOvfInt64 : AddOvfInstruction
	{
		[Token(Token = "0x60005A2")]
		[Address(RVA = "0x24264A0", Offset = "0x2424AA0", VA = "0x1824264A0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60005A3")]
		[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
		public AddOvfInt64()
		{
		}
	}

	[Token(Token = "0x20000D4")]
	private sealed class AddOvfUInt16 : AddOvfInstruction
	{
		[Token(Token = "0x60005A4")]
		[Address(RVA = "0x24266D0", Offset = "0x2424CD0", VA = "0x1824266D0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60005A5")]
		[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
		public AddOvfUInt16()
		{
		}
	}

	[Token(Token = "0x20000D5")]
	private sealed class AddOvfUInt32 : AddOvfInstruction
	{
		[Token(Token = "0x60005A6")]
		[Address(RVA = "0x2426980", Offset = "0x2424F80", VA = "0x182426980", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60005A7")]
		[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
		public AddOvfUInt32()
		{
		}
	}

	[Token(Token = "0x20000D6")]
	private sealed class AddOvfUInt64 : AddOvfInstruction
	{
		[Token(Token = "0x60005A8")]
		[Address(RVA = "0x2426B90", Offset = "0x2425190", VA = "0x182426B90", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60005A9")]
		[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
		public AddOvfUInt64()
		{
		}
	}

	[Token(Token = "0x4000213")]
	[FieldOffset(Offset = "0x0")]
	private static Instruction s_Int16;

	[Token(Token = "0x4000214")]
	[FieldOffset(Offset = "0x8")]
	private static Instruction s_Int32;

	[Token(Token = "0x4000215")]
	[FieldOffset(Offset = "0x10")]
	private static Instruction s_Int64;

	[Token(Token = "0x4000216")]
	[FieldOffset(Offset = "0x18")]
	private static Instruction s_UInt16;

	[Token(Token = "0x4000217")]
	[FieldOffset(Offset = "0x20")]
	private static Instruction s_UInt32;

	[Token(Token = "0x4000218")]
	[FieldOffset(Offset = "0x28")]
	private static Instruction s_UInt64;

	[Token(Token = "0x1700013D")]
	public override int ConsumedStack
	{
		[Token(Token = "0x6000599")]
		[Address(RVA = "0x846F80", Offset = "0x845580", VA = "0x180846F80", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700013E")]
	public override int ProducedStack
	{
		[Token(Token = "0x600059A")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700013F")]
	public override string InstructionName
	{
		[Token(Token = "0x600059B")]
		[Address(RVA = "0x2425F00", Offset = "0x2424500", VA = "0x182425F00", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600059C")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	private AddOvfInstruction()
	{
	}

	[Token(Token = "0x600059D")]
	[Address(RVA = "0x2425B60", Offset = "0x2424160", VA = "0x182425B60")]
	public static Instruction Create(Type type)
	{
		return null;
	}
}
