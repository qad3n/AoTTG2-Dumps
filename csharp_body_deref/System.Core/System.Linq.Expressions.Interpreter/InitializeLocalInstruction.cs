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
			[Token(Token = "0x6000980")]
			[Address(RVA = "0x247D290", Offset = "0x247B890", VA = "0x18247D290", Slot = "9")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600097D")]
		[Address(RVA = "0x1A29130", Offset = "0x1A27730", VA = "0x181A29130")]
		internal Reference(int index)
		{
		}

		[Token(Token = "0x600097E")]
		[Address(RVA = "0x247D240", Offset = "0x247B840", VA = "0x18247D240", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x600097F")]
		[Address(RVA = "0x247D1D0", Offset = "0x247B7D0", VA = "0x18247D1D0", Slot = "11")]
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
			[Token(Token = "0x6000984")]
			[Address(RVA = "0x246F8E0", Offset = "0x246DEE0", VA = "0x18246F8E0", Slot = "9")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000981")]
		[Address(RVA = "0x246F640", Offset = "0x246DC40", VA = "0x18246F640")]
		internal ImmutableValue(int index, object defaultValue)
		{
		}

		[Token(Token = "0x6000982")]
		[Address(RVA = "0x246F850", Offset = "0x246DE50", VA = "0x18246F850", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000983")]
		[Address(RVA = "0x246F7C0", Offset = "0x246DDC0", VA = "0x18246F7C0", Slot = "11")]
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
			[Token(Token = "0x6000987")]
			[Address(RVA = "0x246F680", Offset = "0x246DC80", VA = "0x18246F680", Slot = "9")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000985")]
		[Address(RVA = "0x246F640", Offset = "0x246DC40", VA = "0x18246F640")]
		internal ImmutableBox(int index, object defaultValue)
		{
		}

		[Token(Token = "0x6000986")]
		[Address(RVA = "0x246F550", Offset = "0x246DB50", VA = "0x18246F550", Slot = "8")]
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
			[Token(Token = "0x600098A")]
			[Address(RVA = "0x246F790", Offset = "0x246DD90", VA = "0x18246F790", Slot = "9")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000988")]
		[Address(RVA = "0x1A29130", Offset = "0x1A27730", VA = "0x181A29130")]
		internal ImmutableRefBox(int index)
		{
		}

		[Token(Token = "0x6000989")]
		[Address(RVA = "0x246F6B0", Offset = "0x246DCB0", VA = "0x18246F6B0", Slot = "8")]
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
			[Token(Token = "0x600098D")]
			[Address(RVA = "0x247C380", Offset = "0x247A980", VA = "0x18247C380", Slot = "9")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600098B")]
		[Address(RVA = "0x1A29130", Offset = "0x1A27730", VA = "0x181A29130")]
		public ParameterBox(int index)
		{
		}

		[Token(Token = "0x600098C")]
		[Address(RVA = "0x247C280", Offset = "0x247A880", VA = "0x18247C280", Slot = "8")]
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
			[Token(Token = "0x6000991")]
			[Address(RVA = "0x247C610", Offset = "0x247AC10", VA = "0x18247C610", Slot = "9")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600098E")]
		[Address(RVA = "0x1A29130", Offset = "0x1A27730", VA = "0x181A29130")]
		internal Parameter(int index)
		{
		}

		[Token(Token = "0x600098F")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000990")]
		[Address(RVA = "0x247C5A0", Offset = "0x247ABA0", VA = "0x18247C5A0", Slot = "11")]
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
			[Token(Token = "0x6000995")]
			[Address(RVA = "0x2477390", Offset = "0x2475990", VA = "0x182477390", Slot = "9")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000992")]
		[Address(RVA = "0x246F640", Offset = "0x246DC40", VA = "0x18246F640")]
		internal MutableValue(int index, Type type)
		{
		}

		[Token(Token = "0x6000993")]
		[Address(RVA = "0x24772B0", Offset = "0x24758B0", VA = "0x1824772B0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000994")]
		[Address(RVA = "0x2477220", Offset = "0x2475820", VA = "0x182477220", Slot = "11")]
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
			[Token(Token = "0x6000998")]
			[Address(RVA = "0x24771F0", Offset = "0x24757F0", VA = "0x1824771F0", Slot = "9")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000996")]
		[Address(RVA = "0x246F640", Offset = "0x246DC40", VA = "0x18246F640")]
		internal MutableBox(int index, Type type)
		{
		}

		[Token(Token = "0x6000997")]
		[Address(RVA = "0x24770D0", Offset = "0x24756D0", VA = "0x1824770D0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}
	}

	[Token(Token = "0x600097C")]
	[Address(RVA = "0x1A29130", Offset = "0x1A27730", VA = "0x181A29130")]
	internal InitializeLocalInstruction(int index)
	{
	}
}
