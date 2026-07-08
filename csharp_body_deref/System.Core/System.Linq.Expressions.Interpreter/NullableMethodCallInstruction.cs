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
		[Address(RVA = "0x41E0390", Offset = "0x41E0390", VA = "0x41E0390", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000B02")]
		[Address(RVA = "0x41E0250", Offset = "0x41E0250", VA = "0x41E0250")]
		public HasValue()
		{
		}
	}

	[Token(Token = "0x2000236")]
	private sealed class GetValue : NullableMethodCallInstruction
	{
		[Token(Token = "0x6000B03")]
		[Address(RVA = "0x41E03D0", Offset = "0x41E03D0", VA = "0x41E03D0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000B04")]
		[Address(RVA = "0x41E0260", Offset = "0x41E0260", VA = "0x41E0260")]
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
		[Address(RVA = "0x41E0290", Offset = "0x41E0290", VA = "0x41E0290")]
		public GetValueOrDefault(MethodInfo mi)
		{
		}

		[Token(Token = "0x6000B06")]
		[Address(RVA = "0x41E0450", Offset = "0x41E0450", VA = "0x41E0450", Slot = "8")]
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
			[Address(RVA = "0x41E04B0", Offset = "0x41E04B0", VA = "0x41E04B0", Slot = "4")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x6000B08")]
		[Address(RVA = "0x41E04C0", Offset = "0x41E04C0", VA = "0x41E04C0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000B09")]
		[Address(RVA = "0x41E02E0", Offset = "0x41E02E0", VA = "0x41E02E0")]
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
			[Address(RVA = "0x41E0510", Offset = "0x41E0510", VA = "0x41E0510", Slot = "4")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x6000B0B")]
		[Address(RVA = "0x41E0520", Offset = "0x41E0520", VA = "0x41E0520", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000B0C")]
		[Address(RVA = "0x41E0270", Offset = "0x41E0270", VA = "0x41E0270")]
		public EqualsClass()
		{
		}
	}

	[Token(Token = "0x200023A")]
	private sealed class ToStringClass : NullableMethodCallInstruction
	{
		[Token(Token = "0x6000B0D")]
		[Address(RVA = "0x41E05E0", Offset = "0x41E05E0", VA = "0x41E05E0", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000B0E")]
		[Address(RVA = "0x41E02F0", Offset = "0x41E02F0", VA = "0x41E02F0")]
		public ToStringClass()
		{
		}
	}

	[Token(Token = "0x200023B")]
	private sealed class GetHashCodeClass : NullableMethodCallInstruction
	{
		[Token(Token = "0x6000B0F")]
		[Address(RVA = "0x41E0650", Offset = "0x41E0650", VA = "0x41E0650", Slot = "8")]
		public override int Run(InterpretedFrame frame)
		{
			return default(int);
		}

		[Token(Token = "0x6000B10")]
		[Address(RVA = "0x41E0280", Offset = "0x41E0280", VA = "0x41E0280")]
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
		[Address(RVA = "0x41DFE20", Offset = "0x41DFE20", VA = "0x41DFE20", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000241")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000AFC")]
		[Address(RVA = "0x41DFE30", Offset = "0x41DFE30", VA = "0x41DFE30", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000242")]
	public override string InstructionName
	{
		[Token(Token = "0x6000AFD")]
		[Address(RVA = "0x41DFE40", Offset = "0x41DFE40", VA = "0x41DFE40", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000AFE")]
	[Address(RVA = "0x41DFE70", Offset = "0x41DFE70", VA = "0x41DFE70")]
	private NullableMethodCallInstruction()
	{
	}

	[Token(Token = "0x6000AFF")]
	[Address(RVA = "0x41DFE80", Offset = "0x41DFE80", VA = "0x41DFE80")]
	public static Instruction Create(string method, int argCount, MethodInfo mi)
	{
		return null;
	}

	[Token(Token = "0x6000B00")]
	[Address(RVA = "0x41E0300", Offset = "0x41E0300", VA = "0x41E0300")]
	public static Instruction CreateGetValue()
	{
		return null;
	}
}
