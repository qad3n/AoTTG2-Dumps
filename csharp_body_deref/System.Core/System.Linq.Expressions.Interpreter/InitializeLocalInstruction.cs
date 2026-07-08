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
			[Address(RVA = "0x41D19E0", Offset = "0x41D19E0", VA = "0x41D19E0", Slot = "9")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600097E")]
		[Address(RVA = "0x41D1910", Offset = "0x41D1910", VA = "0x41D1910")]
		internal Reference(int index)
		{
		}

		[Token(Token = "0x600097F")]
		[Address(RVA = "0x41D1930", Offset = "0x41D1930", VA = "0x41D1930", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000980")]
		[Address(RVA = "0x41D1980", Offset = "0x41D1980", VA = "0x41D1980", Slot = "11")]
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
			[Address(RVA = "0x41D1B60", Offset = "0x41D1B60", VA = "0x41D1B60", Slot = "9")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000982")]
		[Address(RVA = "0x41D1A10", Offset = "0x41D1A10", VA = "0x41D1A10")]
		internal ImmutableValue(int index, object defaultValue)
		{
		}

		[Token(Token = "0x6000983")]
		[Address(RVA = "0x41D1A40", Offset = "0x41D1A40", VA = "0x41D1A40", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000984")]
		[Address(RVA = "0x41D1AC0", Offset = "0x41D1AC0", VA = "0x41D1AC0", Slot = "11")]
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
			[Address(RVA = "0x41D1C70", Offset = "0x41D1C70", VA = "0x41D1C70", Slot = "9")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000986")]
		[Address(RVA = "0x41D1B30", Offset = "0x41D1B30", VA = "0x41D1B30")]
		internal ImmutableBox(int index, object defaultValue)
		{
		}

		[Token(Token = "0x6000987")]
		[Address(RVA = "0x41D1B90", Offset = "0x41D1B90", VA = "0x41D1B90", Slot = "8")]
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
			[Address(RVA = "0x41D1D90", Offset = "0x41D1D90", VA = "0x41D1D90", Slot = "9")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000989")]
		[Address(RVA = "0x41D1CA0", Offset = "0x41D1CA0", VA = "0x41D1CA0")]
		internal ImmutableRefBox(int index)
		{
		}

		[Token(Token = "0x600098A")]
		[Address(RVA = "0x41D1CC0", Offset = "0x41D1CC0", VA = "0x41D1CC0", Slot = "8")]
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
			[Address(RVA = "0x41D1EC0", Offset = "0x41D1EC0", VA = "0x41D1EC0", Slot = "9")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600098C")]
		[Address(RVA = "0x41D1DC0", Offset = "0x41D1DC0", VA = "0x41D1DC0")]
		public ParameterBox(int index)
		{
		}

		[Token(Token = "0x600098D")]
		[Address(RVA = "0x41D1DE0", Offset = "0x41D1DE0", VA = "0x41D1DE0", Slot = "8")]
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
			[Address(RVA = "0x41D1F80", Offset = "0x41D1F80", VA = "0x41D1F80", Slot = "9")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600098F")]
		[Address(RVA = "0x41D1EF0", Offset = "0x41D1EF0", VA = "0x41D1EF0")]
		internal Parameter(int index)
		{
		}

		[Token(Token = "0x6000990")]
		[Address(RVA = "0x41D1F10", Offset = "0x41D1F10", VA = "0x41D1F10", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000991")]
		[Address(RVA = "0x41D1F20", Offset = "0x41D1F20", VA = "0x41D1F20", Slot = "11")]
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
			[Address(RVA = "0x41D21B0", Offset = "0x41D21B0", VA = "0x41D21B0", Slot = "9")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000993")]
		[Address(RVA = "0x41D1FB0", Offset = "0x41D1FB0", VA = "0x41D1FB0")]
		internal MutableValue(int index, Type type)
		{
		}

		[Token(Token = "0x6000994")]
		[Address(RVA = "0x41D1FE0", Offset = "0x41D1FE0", VA = "0x41D1FE0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000995")]
		[Address(RVA = "0x41D2110", Offset = "0x41D2110", VA = "0x41D2110", Slot = "11")]
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
			[Address(RVA = "0x41D2360", Offset = "0x41D2360", VA = "0x41D2360", Slot = "9")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000997")]
		[Address(RVA = "0x41D2180", Offset = "0x41D2180", VA = "0x41D2180")]
		internal MutableBox(int index, Type type)
		{
		}

		[Token(Token = "0x6000998")]
		[Address(RVA = "0x41D21E0", Offset = "0x41D21E0", VA = "0x41D21E0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}
	}

	[Token(Token = "0x600097D")]
	[Address(RVA = "0x41D18F0", Offset = "0x41D18F0", VA = "0x41D18F0")]
	internal InitializeLocalInstruction(int index)
	{
	}
}
