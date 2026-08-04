// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.InitializeLocalInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20001AD")]
internal abstract class InitializeLocalInstruction : LocalAccessInstruction
{
	[Token(Token = "0x20001AE")]
	internal sealed class Reference : InitializeLocalInstruction, IBoxableInstruction
	{
		[Token(Token = "0x170001ED")]
		public override string InstructionName
		{
			[Token(Token = "0x6000981")]
			[Address(RVA = "0x44F6AE0", Offset = "0x44F6AE0", VA = "0x44F6AE0", Slot = "9")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600097E")]
		[Address(RVA = "0x44F6A10", Offset = "0x44F6A10", VA = "0x44F6A10")]
		internal Reference(int index)
		{
		}

		[Token(Token = "0x600097F")]
		[Address(RVA = "0x44F6A30", Offset = "0x44F6A30", VA = "0x44F6A30", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000980")]
		[Address(RVA = "0x44F6A80", Offset = "0x44F6A80", VA = "0x44F6A80", Slot = "11")]
		public Instruction BoxIfIndexMatches(int index)
		{
			return null;
		}
	}

	[Token(Token = "0x20001AF")]
	internal sealed class ImmutableValue : InitializeLocalInstruction, IBoxableInstruction
	{
		[Token(Token = "0x400038C")]
		[FieldOffset(Offset = "0x18")]
		private readonly object _defaultValue;

		[Token(Token = "0x170001EE")]
		public override string InstructionName
		{
			[Token(Token = "0x6000985")]
			[Address(RVA = "0x44F6C60", Offset = "0x44F6C60", VA = "0x44F6C60", Slot = "9")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000982")]
		[Address(RVA = "0x44F6B10", Offset = "0x44F6B10", VA = "0x44F6B10")]
		internal ImmutableValue(int index, object defaultValue)
		{
		}

		[Token(Token = "0x6000983")]
		[Address(RVA = "0x44F6B40", Offset = "0x44F6B40", VA = "0x44F6B40", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000984")]
		[Address(RVA = "0x44F6BC0", Offset = "0x44F6BC0", VA = "0x44F6BC0", Slot = "11")]
		public Instruction BoxIfIndexMatches(int index)
		{
			return null;
		}
	}

	[Token(Token = "0x20001B0")]
	internal sealed class ImmutableBox : InitializeLocalInstruction
	{
		[Token(Token = "0x400038D")]
		[FieldOffset(Offset = "0x18")]
		private readonly object _defaultValue;

		[Token(Token = "0x170001EF")]
		public override string InstructionName
		{
			[Token(Token = "0x6000988")]
			[Address(RVA = "0x44F6D70", Offset = "0x44F6D70", VA = "0x44F6D70", Slot = "9")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000986")]
		[Address(RVA = "0x44F6C30", Offset = "0x44F6C30", VA = "0x44F6C30")]
		internal ImmutableBox(int index, object defaultValue)
		{
		}

		[Token(Token = "0x6000987")]
		[Address(RVA = "0x44F6C90", Offset = "0x44F6C90", VA = "0x44F6C90", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}
	}

	[Token(Token = "0x20001B1")]
	internal sealed class ImmutableRefBox : InitializeLocalInstruction
	{
		[Token(Token = "0x170001F0")]
		public override string InstructionName
		{
			[Token(Token = "0x600098B")]
			[Address(RVA = "0x44F6E90", Offset = "0x44F6E90", VA = "0x44F6E90", Slot = "9")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000989")]
		[Address(RVA = "0x44F6DA0", Offset = "0x44F6DA0", VA = "0x44F6DA0")]
		internal ImmutableRefBox(int index)
		{
		}

		[Token(Token = "0x600098A")]
		[Address(RVA = "0x44F6DC0", Offset = "0x44F6DC0", VA = "0x44F6DC0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}
	}

	[Token(Token = "0x20001B2")]
	internal sealed class ParameterBox : InitializeLocalInstruction
	{
		[Token(Token = "0x170001F1")]
		public override string InstructionName
		{
			[Token(Token = "0x600098E")]
			[Address(RVA = "0x44F6FC0", Offset = "0x44F6FC0", VA = "0x44F6FC0", Slot = "9")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600098C")]
		[Address(RVA = "0x44F6EC0", Offset = "0x44F6EC0", VA = "0x44F6EC0")]
		public ParameterBox(int index)
		{
		}

		[Token(Token = "0x600098D")]
		[Address(RVA = "0x44F6EE0", Offset = "0x44F6EE0", VA = "0x44F6EE0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}
	}

	[Token(Token = "0x20001B3")]
	internal sealed class Parameter : InitializeLocalInstruction, IBoxableInstruction
	{
		[Token(Token = "0x170001F2")]
		public override string InstructionName
		{
			[Token(Token = "0x6000992")]
			[Address(RVA = "0x44F7080", Offset = "0x44F7080", VA = "0x44F7080", Slot = "9")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600098F")]
		[Address(RVA = "0x44F6FF0", Offset = "0x44F6FF0", VA = "0x44F6FF0")]
		internal Parameter(int index)
		{
		}

		[Token(Token = "0x6000990")]
		[Address(RVA = "0x44F7010", Offset = "0x44F7010", VA = "0x44F7010", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000991")]
		[Address(RVA = "0x44F7020", Offset = "0x44F7020", VA = "0x44F7020", Slot = "11")]
		public Instruction BoxIfIndexMatches(int index)
		{
			return null;
		}
	}

	[Token(Token = "0x20001B4")]
	internal sealed class MutableValue : InitializeLocalInstruction, IBoxableInstruction
	{
		[Token(Token = "0x400038E")]
		[FieldOffset(Offset = "0x18")]
		private readonly Type _type;

		[Token(Token = "0x170001F3")]
		public override string InstructionName
		{
			[Token(Token = "0x6000996")]
			[Address(RVA = "0x44F72B0", Offset = "0x44F72B0", VA = "0x44F72B0", Slot = "9")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000993")]
		[Address(RVA = "0x44F70B0", Offset = "0x44F70B0", VA = "0x44F70B0")]
		internal MutableValue(int index, Type type)
		{
		}

		[Token(Token = "0x6000994")]
		[Address(RVA = "0x44F70E0", Offset = "0x44F70E0", VA = "0x44F70E0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000995")]
		[Address(RVA = "0x44F7210", Offset = "0x44F7210", VA = "0x44F7210", Slot = "11")]
		public Instruction BoxIfIndexMatches(int index)
		{
			return null;
		}
	}

	[Token(Token = "0x20001B5")]
	internal sealed class MutableBox : InitializeLocalInstruction
	{
		[Token(Token = "0x400038F")]
		[FieldOffset(Offset = "0x18")]
		private readonly Type _type;

		[Token(Token = "0x170001F4")]
		public override string InstructionName
		{
			[Token(Token = "0x6000999")]
			[Address(RVA = "0x44F7460", Offset = "0x44F7460", VA = "0x44F7460", Slot = "9")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000997")]
		[Address(RVA = "0x44F7280", Offset = "0x44F7280", VA = "0x44F7280")]
		internal MutableBox(int index, Type type)
		{
		}

		[Token(Token = "0x6000998")]
		[Address(RVA = "0x44F72E0", Offset = "0x44F72E0", VA = "0x44F72E0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}
	}

	[Token(Token = "0x600097D")]
	[Address(RVA = "0x44F69F0", Offset = "0x44F69F0", VA = "0x44F69F0")]
	internal InitializeLocalInstruction(int index)
	{
	}
}
