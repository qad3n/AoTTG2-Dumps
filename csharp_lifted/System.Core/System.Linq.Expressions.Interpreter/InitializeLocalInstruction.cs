// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.InitializeLocalInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20001AE")]
internal abstract class InitializeLocalInstruction : LocalAccessInstruction
{
	[Token(Token = "0x20001AF")]
	internal sealed class Reference : InitializeLocalInstruction, IBoxableInstruction
	{
		[Token(Token = "0x170001EF")]
		public override string InstructionName
		{
			[Token(Token = "0x600098B")]
			[Address(RVA = "0x5E0BE60", Offset = "0x5E0AE60", VA = "0x5E0BE60", Slot = "9")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000988")]
		[Address(RVA = "0x5E0BD90", Offset = "0x5E0AD90", VA = "0x5E0BD90")]
		internal Reference(int index)
		{
		}

		[Token(Token = "0x6000989")]
		[Address(RVA = "0x5E0BDB0", Offset = "0x5E0ADB0", VA = "0x5E0BDB0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x600098A")]
		[Address(RVA = "0x5E0BE00", Offset = "0x5E0AE00", VA = "0x5E0BE00", Slot = "11")]
		public Instruction BoxIfIndexMatches(int index)
		{
			return null;
		}
	}

	[Token(Token = "0x20001B0")]
	internal sealed class ImmutableValue : InitializeLocalInstruction, IBoxableInstruction
	{
		[Token(Token = "0x4000395")]
		[FieldOffset(Offset = "0x18")]
		private readonly object _defaultValue;

		[Token(Token = "0x170001F0")]
		public override string InstructionName
		{
			[Token(Token = "0x600098F")]
			[Address(RVA = "0x5E0BFE0", Offset = "0x5E0AFE0", VA = "0x5E0BFE0", Slot = "9")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600098C")]
		[Address(RVA = "0x5E0BE90", Offset = "0x5E0AE90", VA = "0x5E0BE90")]
		internal ImmutableValue(int index, object defaultValue)
		{
		}

		[Token(Token = "0x600098D")]
		[Address(RVA = "0x5E0BEC0", Offset = "0x5E0AEC0", VA = "0x5E0BEC0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x600098E")]
		[Address(RVA = "0x5E0BF40", Offset = "0x5E0AF40", VA = "0x5E0BF40", Slot = "11")]
		public Instruction BoxIfIndexMatches(int index)
		{
			return null;
		}
	}

	[Token(Token = "0x20001B1")]
	internal sealed class ImmutableBox : InitializeLocalInstruction
	{
		[Token(Token = "0x4000396")]
		[FieldOffset(Offset = "0x18")]
		private readonly object _defaultValue;

		[Token(Token = "0x170001F1")]
		public override string InstructionName
		{
			[Token(Token = "0x6000992")]
			[Address(RVA = "0x5E0C0F0", Offset = "0x5E0B0F0", VA = "0x5E0C0F0", Slot = "9")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000990")]
		[Address(RVA = "0x5E0BFB0", Offset = "0x5E0AFB0", VA = "0x5E0BFB0")]
		internal ImmutableBox(int index, object defaultValue)
		{
		}

		[Token(Token = "0x6000991")]
		[Address(RVA = "0x5E0C010", Offset = "0x5E0B010", VA = "0x5E0C010", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}
	}

	[Token(Token = "0x20001B2")]
	internal sealed class ImmutableRefBox : InitializeLocalInstruction
	{
		[Token(Token = "0x170001F2")]
		public override string InstructionName
		{
			[Token(Token = "0x6000995")]
			[Address(RVA = "0x5E0C210", Offset = "0x5E0B210", VA = "0x5E0C210", Slot = "9")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000993")]
		[Address(RVA = "0x5E0C120", Offset = "0x5E0B120", VA = "0x5E0C120")]
		internal ImmutableRefBox(int index)
		{
		}

		[Token(Token = "0x6000994")]
		[Address(RVA = "0x5E0C140", Offset = "0x5E0B140", VA = "0x5E0C140", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}
	}

	[Token(Token = "0x20001B3")]
	internal sealed class ParameterBox : InitializeLocalInstruction
	{
		[Token(Token = "0x170001F3")]
		public override string InstructionName
		{
			[Token(Token = "0x6000998")]
			[Address(RVA = "0x5E0C340", Offset = "0x5E0B340", VA = "0x5E0C340", Slot = "9")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000996")]
		[Address(RVA = "0x5E0C240", Offset = "0x5E0B240", VA = "0x5E0C240")]
		public ParameterBox(int index)
		{
		}

		[Token(Token = "0x6000997")]
		[Address(RVA = "0x5E0C260", Offset = "0x5E0B260", VA = "0x5E0C260", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}
	}

	[Token(Token = "0x20001B4")]
	internal sealed class Parameter : InitializeLocalInstruction, IBoxableInstruction
	{
		[Token(Token = "0x170001F4")]
		public override string InstructionName
		{
			[Token(Token = "0x600099C")]
			[Address(RVA = "0x5E0C400", Offset = "0x5E0B400", VA = "0x5E0C400", Slot = "9")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000999")]
		[Address(RVA = "0x5E0C370", Offset = "0x5E0B370", VA = "0x5E0C370")]
		internal Parameter(int index)
		{
		}

		[Token(Token = "0x600099A")]
		[Address(RVA = "0x5E0C390", Offset = "0x5E0B390", VA = "0x5E0C390", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x600099B")]
		[Address(RVA = "0x5E0C3A0", Offset = "0x5E0B3A0", VA = "0x5E0C3A0", Slot = "11")]
		public Instruction BoxIfIndexMatches(int index)
		{
			return null;
		}
	}

	[Token(Token = "0x20001B5")]
	internal sealed class MutableValue : InitializeLocalInstruction, IBoxableInstruction
	{
		[Token(Token = "0x4000397")]
		[FieldOffset(Offset = "0x18")]
		private readonly Type _type;

		[Token(Token = "0x170001F5")]
		public override string InstructionName
		{
			[Token(Token = "0x60009A0")]
			[Address(RVA = "0x5E0C630", Offset = "0x5E0B630", VA = "0x5E0C630", Slot = "9")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600099D")]
		[Address(RVA = "0x5E0C430", Offset = "0x5E0B430", VA = "0x5E0C430")]
		internal MutableValue(int index, Type type)
		{
		}

		[Token(Token = "0x600099E")]
		[Address(RVA = "0x5E0C460", Offset = "0x5E0B460", VA = "0x5E0C460", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x600099F")]
		[Address(RVA = "0x5E0C590", Offset = "0x5E0B590", VA = "0x5E0C590", Slot = "11")]
		public Instruction BoxIfIndexMatches(int index)
		{
			return null;
		}
	}

	[Token(Token = "0x20001B6")]
	internal sealed class MutableBox : InitializeLocalInstruction
	{
		[Token(Token = "0x4000398")]
		[FieldOffset(Offset = "0x18")]
		private readonly Type _type;

		[Token(Token = "0x170001F6")]
		public override string InstructionName
		{
			[Token(Token = "0x60009A3")]
			[Address(RVA = "0x5E0C7E0", Offset = "0x5E0B7E0", VA = "0x5E0C7E0", Slot = "9")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60009A1")]
		[Address(RVA = "0x5E0C600", Offset = "0x5E0B600", VA = "0x5E0C600")]
		internal MutableBox(int index, Type type)
		{
		}

		[Token(Token = "0x60009A2")]
		[Address(RVA = "0x5E0C660", Offset = "0x5E0B660", VA = "0x5E0C660", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000987")]
	[Address(RVA = "0x5E0BD70", Offset = "0x5E0AD70", VA = "0x5E0BD70")]
	internal InitializeLocalInstruction(int index)
	{
	}
}
