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

[Token(Token = "0x2000234")]
internal abstract class NullableMethodCallInstruction : Instruction
{
	[Token(Token = "0x2000235")]
	private sealed class HasValue : NullableMethodCallInstruction
	{
		[Token(Token = "0x6000B01")]
		[Address(RVA = "0x4505490", Offset = "0x4505490", VA = "0x4505490", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000B02")]
		[Address(RVA = "0x4505350", Offset = "0x4505350", VA = "0x4505350")]
		public HasValue()
		{
		}
	}

	[Token(Token = "0x2000236")]
	private sealed class GetValue : NullableMethodCallInstruction
	{
		[Token(Token = "0x6000B03")]
		[Address(RVA = "0x45054D0", Offset = "0x45054D0", VA = "0x45054D0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000B04")]
		[Address(RVA = "0x4505360", Offset = "0x4505360", VA = "0x4505360")]
		public GetValue()
		{
		}
	}

	[Token(Token = "0x2000237")]
	private sealed class GetValueOrDefault : NullableMethodCallInstruction
	{
		[Token(Token = "0x4000412")]
		[FieldOffset(Offset = "0x10")]
		private readonly Type _defaultValueType;

		[Token(Token = "0x6000B05")]
		[Address(RVA = "0x4505390", Offset = "0x4505390", VA = "0x4505390")]
		public GetValueOrDefault(MethodInfo mi)
		{
		}

		[Token(Token = "0x6000B06")]
		[Address(RVA = "0x4505550", Offset = "0x4505550", VA = "0x4505550", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}
	}

	[Token(Token = "0x2000238")]
	private sealed class GetValueOrDefault1 : NullableMethodCallInstruction
	{
		[Token(Token = "0x17000243")]
		public override int ConsumedStack
		{
			[Token(Token = "0x6000B07")]
			[Address(RVA = "0x45055B0", Offset = "0x45055B0", VA = "0x45055B0", Slot = "4")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x6000B08")]
		[Address(RVA = "0x45055C0", Offset = "0x45055C0", VA = "0x45055C0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000B09")]
		[Address(RVA = "0x45053E0", Offset = "0x45053E0", VA = "0x45053E0")]
		public GetValueOrDefault1()
		{
		}
	}

	[Token(Token = "0x2000239")]
	private sealed class EqualsClass : NullableMethodCallInstruction
	{
		[Token(Token = "0x17000244")]
		public override int ConsumedStack
		{
			[Token(Token = "0x6000B0A")]
			[Address(RVA = "0x4505610", Offset = "0x4505610", VA = "0x4505610", Slot = "4")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x6000B0B")]
		[Address(RVA = "0x4505620", Offset = "0x4505620", VA = "0x4505620", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000B0C")]
		[Address(RVA = "0x4505370", Offset = "0x4505370", VA = "0x4505370")]
		public EqualsClass()
		{
		}
	}

	[Token(Token = "0x200023A")]
	private sealed class ToStringClass : NullableMethodCallInstruction
	{
		[Token(Token = "0x6000B0D")]
		[Address(RVA = "0x45056E0", Offset = "0x45056E0", VA = "0x45056E0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000B0E")]
		[Address(RVA = "0x45053F0", Offset = "0x45053F0", VA = "0x45053F0")]
		public ToStringClass()
		{
		}
	}

	[Token(Token = "0x200023B")]
	private sealed class GetHashCodeClass : NullableMethodCallInstruction
	{
		[Token(Token = "0x6000B0F")]
		[Address(RVA = "0x4505750", Offset = "0x4505750", VA = "0x4505750", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000B10")]
		[Address(RVA = "0x4505380", Offset = "0x4505380", VA = "0x4505380")]
		public GetHashCodeClass()
		{
		}
	}

	[Token(Token = "0x400040C")]
	[FieldOffset(Offset = "0x0")]
	private static NullableMethodCallInstruction s_hasValue;

	[Token(Token = "0x400040D")]
	[FieldOffset(Offset = "0x8")]
	private static NullableMethodCallInstruction s_value;

	[Token(Token = "0x400040E")]
	[FieldOffset(Offset = "0x10")]
	private static NullableMethodCallInstruction s_equals;

	[Token(Token = "0x400040F")]
	[FieldOffset(Offset = "0x18")]
	private static NullableMethodCallInstruction s_getHashCode;

	[Token(Token = "0x4000410")]
	[FieldOffset(Offset = "0x20")]
	private static NullableMethodCallInstruction s_getValueOrDefault1;

	[Token(Token = "0x4000411")]
	[FieldOffset(Offset = "0x28")]
	private static NullableMethodCallInstruction s_toString;

	[Token(Token = "0x17000240")]
	public override int ConsumedStack
	{
		[Token(Token = "0x6000AFB")]
		[Address(RVA = "0x4504F20", Offset = "0x4504F20", VA = "0x4504F20", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000241")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000AFC")]
		[Address(RVA = "0x4504F30", Offset = "0x4504F30", VA = "0x4504F30", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000242")]
	public override string InstructionName
	{
		[Token(Token = "0x6000AFD")]
		[Address(RVA = "0x4504F40", Offset = "0x4504F40", VA = "0x4504F40", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000AFE")]
	[Address(RVA = "0x4504F70", Offset = "0x4504F70", VA = "0x4504F70")]
	private NullableMethodCallInstruction()
	{
	}

	[Token(Token = "0x6000AFF")]
	[Address(RVA = "0x4504F80", Offset = "0x4504F80", VA = "0x4504F80")]
	public static Instruction Create(string method, int argCount, MethodInfo mi)
	{
		return null;
	}

	[Token(Token = "0x6000B00")]
	[Address(RVA = "0x4505400", Offset = "0x4505400", VA = "0x4505400")]
	public static Instruction CreateGetValue()
	{
		return null;
	}
}
