// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.AddInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20000C8")]
internal abstract class AddInstruction : Instruction
{
	[Token(Token = "0x20000C9")]
	private sealed class AddInt16 : AddInstruction
	{
		[Token(Token = "0x6000594")]
		[Address(RVA = "0x5DD8640", Offset = "0x5DD7640", VA = "0x5DD8640", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000595")]
		[Address(RVA = "0x5DD85C0", Offset = "0x5DD75C0", VA = "0x5DD85C0")]
		public AddInt16()
		{
		}
	}

	[Token(Token = "0x20000CA")]
	private sealed class AddInt32 : AddInstruction
	{
		[Token(Token = "0x6000596")]
		[Address(RVA = "0x5DD87A0", Offset = "0x5DD77A0", VA = "0x5DD87A0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000597")]
		[Address(RVA = "0x5DD85D0", Offset = "0x5DD75D0", VA = "0x5DD85D0")]
		public AddInt32()
		{
		}
	}

	[Token(Token = "0x20000CB")]
	private sealed class AddInt64 : AddInstruction
	{
		[Token(Token = "0x6000598")]
		[Address(RVA = "0x5DD88E0", Offset = "0x5DD78E0", VA = "0x5DD88E0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000599")]
		[Address(RVA = "0x5DD85E0", Offset = "0x5DD75E0", VA = "0x5DD85E0")]
		public AddInt64()
		{
		}
	}

	[Token(Token = "0x20000CC")]
	private sealed class AddUInt16 : AddInstruction
	{
		[Token(Token = "0x600059A")]
		[Address(RVA = "0x5DD8A40", Offset = "0x5DD7A40", VA = "0x5DD8A40", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x600059B")]
		[Address(RVA = "0x5DD85F0", Offset = "0x5DD75F0", VA = "0x5DD85F0")]
		public AddUInt16()
		{
		}
	}

	[Token(Token = "0x20000CD")]
	private sealed class AddUInt32 : AddInstruction
	{
		[Token(Token = "0x600059C")]
		[Address(RVA = "0x5DD8BA0", Offset = "0x5DD7BA0", VA = "0x5DD8BA0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x600059D")]
		[Address(RVA = "0x5DD8600", Offset = "0x5DD7600", VA = "0x5DD8600")]
		public AddUInt32()
		{
		}
	}

	[Token(Token = "0x20000CE")]
	private sealed class AddUInt64 : AddInstruction
	{
		[Token(Token = "0x600059E")]
		[Address(RVA = "0x5DD8D00", Offset = "0x5DD7D00", VA = "0x5DD8D00", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x600059F")]
		[Address(RVA = "0x5DD8610", Offset = "0x5DD7610", VA = "0x5DD8610")]
		public AddUInt64()
		{
		}
	}

	[Token(Token = "0x20000CF")]
	private sealed class AddSingle : AddInstruction
	{
		[Token(Token = "0x60005A0")]
		[Address(RVA = "0x5DD8E60", Offset = "0x5DD7E60", VA = "0x5DD8E60", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60005A1")]
		[Address(RVA = "0x5DD8620", Offset = "0x5DD7620", VA = "0x5DD8620")]
		public AddSingle()
		{
		}
	}

	[Token(Token = "0x20000D0")]
	private sealed class AddDouble : AddInstruction
	{
		[Token(Token = "0x60005A2")]
		[Address(RVA = "0x5DD8FC0", Offset = "0x5DD7FC0", VA = "0x5DD8FC0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x60005A3")]
		[Address(RVA = "0x5DD8630", Offset = "0x5DD7630", VA = "0x5DD8630")]
		public AddDouble()
		{
		}
	}

	[Token(Token = "0x4000214")]
	[FieldOffset(Offset = "0x0")]
	private static Instruction s_Int16;

	[Token(Token = "0x4000215")]
	[FieldOffset(Offset = "0x8")]
	private static Instruction s_Int32;

	[Token(Token = "0x4000216")]
	[FieldOffset(Offset = "0x10")]
	private static Instruction s_Int64;

	[Token(Token = "0x4000217")]
	[FieldOffset(Offset = "0x18")]
	private static Instruction s_UInt16;

	[Token(Token = "0x4000218")]
	[FieldOffset(Offset = "0x20")]
	private static Instruction s_UInt32;

	[Token(Token = "0x4000219")]
	[FieldOffset(Offset = "0x28")]
	private static Instruction s_UInt64;

	[Token(Token = "0x400021A")]
	[FieldOffset(Offset = "0x30")]
	private static Instruction s_Single;

	[Token(Token = "0x400021B")]
	[FieldOffset(Offset = "0x38")]
	private static Instruction s_Double;

	[Token(Token = "0x1700013C")]
	public override int ConsumedStack
	{
		[Token(Token = "0x600058F")]
		[Address(RVA = "0x5DD81A0", Offset = "0x5DD71A0", VA = "0x5DD81A0", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700013D")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000590")]
		[Address(RVA = "0x5DD81B0", Offset = "0x5DD71B0", VA = "0x5DD81B0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700013E")]
	public override string InstructionName
	{
		[Token(Token = "0x6000591")]
		[Address(RVA = "0x5DD81C0", Offset = "0x5DD71C0", VA = "0x5DD81C0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000592")]
	[Address(RVA = "0x5DD81F0", Offset = "0x5DD71F0", VA = "0x5DD81F0")]
	private AddInstruction()
	{
	}

	[Token(Token = "0x6000593")]
	[Address(RVA = "0x5DD8200", Offset = "0x5DD7200", VA = "0x5DD8200")]
	public static Instruction Create(Type type)
	{
		return null;
	}
}
