// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.NullableMethodCallInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Reflection;
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x2000235")]
internal abstract class NullableMethodCallInstruction : Instruction
{
	[Token(Token = "0x2000236")]
	private sealed class HasValue : NullableMethodCallInstruction
	{
		[Token(Token = "0x6000B0B")]
		[Address(RVA = "0x5E1A700", Offset = "0x5E19700", VA = "0x5E1A700", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000B0C")]
		[Address(RVA = "0x5E1A5C0", Offset = "0x5E195C0", VA = "0x5E1A5C0")]
		public HasValue()
		{
		}
	}

	[Token(Token = "0x2000237")]
	private sealed class GetValue : NullableMethodCallInstruction
	{
		[Token(Token = "0x6000B0D")]
		[Address(RVA = "0x5E1A740", Offset = "0x5E19740", VA = "0x5E1A740", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000B0E")]
		[Address(RVA = "0x5E1A5D0", Offset = "0x5E195D0", VA = "0x5E1A5D0")]
		public GetValue()
		{
		}
	}

	[Token(Token = "0x2000238")]
	private sealed class GetValueOrDefault : NullableMethodCallInstruction
	{
		[Token(Token = "0x400041B")]
		[FieldOffset(Offset = "0x10")]
		private readonly Type _defaultValueType;

		[Token(Token = "0x6000B0F")]
		[Address(RVA = "0x5E1A600", Offset = "0x5E19600", VA = "0x5E1A600")]
		public GetValueOrDefault(MethodInfo mi)
		{
		}

		[Token(Token = "0x6000B10")]
		[Address(RVA = "0x5E1A7B0", Offset = "0x5E197B0", VA = "0x5E1A7B0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}
	}

	[Token(Token = "0x2000239")]
	private sealed class GetValueOrDefault1 : NullableMethodCallInstruction
	{
		[Token(Token = "0x17000245")]
		public override int ConsumedStack
		{
			[Token(Token = "0x6000B11")]
			[Address(RVA = "0x5E1A810", Offset = "0x5E19810", VA = "0x5E1A810", Slot = "4")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x6000B12")]
		[Address(RVA = "0x5E1A820", Offset = "0x5E19820", VA = "0x5E1A820", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000B13")]
		[Address(RVA = "0x5E1A650", Offset = "0x5E19650", VA = "0x5E1A650")]
		public GetValueOrDefault1()
		{
		}
	}

	[Token(Token = "0x200023A")]
	private sealed class EqualsClass : NullableMethodCallInstruction
	{
		[Token(Token = "0x17000246")]
		public override int ConsumedStack
		{
			[Token(Token = "0x6000B14")]
			[Address(RVA = "0x5E1A870", Offset = "0x5E19870", VA = "0x5E1A870", Slot = "4")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x6000B15")]
		[Address(RVA = "0x5E1A880", Offset = "0x5E19880", VA = "0x5E1A880", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000B16")]
		[Address(RVA = "0x5E1A5E0", Offset = "0x5E195E0", VA = "0x5E1A5E0")]
		public EqualsClass()
		{
		}
	}

	[Token(Token = "0x200023B")]
	private sealed class ToStringClass : NullableMethodCallInstruction
	{
		[Token(Token = "0x6000B17")]
		[Address(RVA = "0x5E1A940", Offset = "0x5E19940", VA = "0x5E1A940", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000B18")]
		[Address(RVA = "0x5E1A660", Offset = "0x5E19660", VA = "0x5E1A660")]
		public ToStringClass()
		{
		}
	}

	[Token(Token = "0x200023C")]
	private sealed class GetHashCodeClass : NullableMethodCallInstruction
	{
		[Token(Token = "0x6000B19")]
		[Address(RVA = "0x5E1A9B0", Offset = "0x5E199B0", VA = "0x5E1A9B0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000B1A")]
		[Address(RVA = "0x5E1A5F0", Offset = "0x5E195F0", VA = "0x5E1A5F0")]
		public GetHashCodeClass()
		{
		}
	}

	[Token(Token = "0x4000415")]
	[FieldOffset(Offset = "0x0")]
	private static NullableMethodCallInstruction s_hasValue;

	[Token(Token = "0x4000416")]
	[FieldOffset(Offset = "0x8")]
	private static NullableMethodCallInstruction s_value;

	[Token(Token = "0x4000417")]
	[FieldOffset(Offset = "0x10")]
	private static NullableMethodCallInstruction s_equals;

	[Token(Token = "0x4000418")]
	[FieldOffset(Offset = "0x18")]
	private static NullableMethodCallInstruction s_getHashCode;

	[Token(Token = "0x4000419")]
	[FieldOffset(Offset = "0x20")]
	private static NullableMethodCallInstruction s_getValueOrDefault1;

	[Token(Token = "0x400041A")]
	[FieldOffset(Offset = "0x28")]
	private static NullableMethodCallInstruction s_toString;

	[Token(Token = "0x17000242")]
	public override int ConsumedStack
	{
		[Token(Token = "0x6000B05")]
		[Address(RVA = "0x5E1A1C0", Offset = "0x5E191C0", VA = "0x5E1A1C0", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000243")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000B06")]
		[Address(RVA = "0x5E1A1D0", Offset = "0x5E191D0", VA = "0x5E1A1D0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000244")]
	public override string InstructionName
	{
		[Token(Token = "0x6000B07")]
		[Address(RVA = "0x5E1A1E0", Offset = "0x5E191E0", VA = "0x5E1A1E0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000B08")]
	[Address(RVA = "0x5E1A210", Offset = "0x5E19210", VA = "0x5E1A210")]
	private NullableMethodCallInstruction()
	{
	}

	[Token(Token = "0x6000B09")]
	[Address(RVA = "0x5E1A220", Offset = "0x5E19220", VA = "0x5E1A220")]
	public static Instruction Create(string method, int argCount, MethodInfo mi)
	{
		return null;
	}

	[Token(Token = "0x6000B0A")]
	[Address(RVA = "0x5E1A670", Offset = "0x5E19670", VA = "0x5E1A670")]
	public static Instruction CreateGetValue()
	{
		return null;
	}
}
