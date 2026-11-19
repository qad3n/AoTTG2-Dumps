// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.NumericConvertInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x2000205")]
internal abstract class NumericConvertInstruction : Instruction
{
	[Token(Token = "0x2000206")]
	internal sealed class Unchecked : NumericConvertInstruction
	{
		[Token(Token = "0x1700021F")]
		public override string InstructionName
		{
			[Token(Token = "0x6000A74")]
			[Address(RVA = "0x5E144B0", Offset = "0x5E134B0", VA = "0x5E144B0", Slot = "9")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000A75")]
		[Address(RVA = "0x5E144E0", Offset = "0x5E134E0", VA = "0x5E144E0")]
		public Unchecked(TypeCode from, TypeCode to, bool isLiftedToNull)
		{
		}

		[Token(Token = "0x6000A76")]
		[Address(RVA = "0x5E14510", Offset = "0x5E13510", VA = "0x5E14510", Slot = "11")]
		protected override object Convert(object obj)
		{
			return null;
		}

		[Token(Token = "0x6000A77")]
		[Address(RVA = "0x5E147D0", Offset = "0x5E137D0", VA = "0x5E147D0")]
		private object ConvertInt32(int obj)
		{
			return null;
		}

		[Token(Token = "0x6000A78")]
		[Address(RVA = "0x5E14980", Offset = "0x5E13980", VA = "0x5E14980")]
		private object ConvertInt64(long obj)
		{
			return null;
		}

		[Token(Token = "0x6000A79")]
		[Address(RVA = "0x5E14B20", Offset = "0x5E13B20", VA = "0x5E14B20")]
		private object ConvertUInt64(ulong obj)
		{
			return null;
		}

		[Token(Token = "0x6000A7A")]
		[Address(RVA = "0x5E14D00", Offset = "0x5E13D00", VA = "0x5E14D00")]
		private object ConvertDouble(double obj)
		{
			return null;
		}
	}

	[Token(Token = "0x2000207")]
	internal sealed class Checked : NumericConvertInstruction
	{
		[Token(Token = "0x17000220")]
		public override string InstructionName
		{
			[Token(Token = "0x6000A7B")]
			[Address(RVA = "0x5E14F00", Offset = "0x5E13F00", VA = "0x5E14F00", Slot = "9")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000A7C")]
		[Address(RVA = "0x5E14F30", Offset = "0x5E13F30", VA = "0x5E14F30")]
		public Checked(TypeCode from, TypeCode to, bool isLiftedToNull)
		{
		}

		[Token(Token = "0x6000A7D")]
		[Address(RVA = "0x5E14F60", Offset = "0x5E13F60", VA = "0x5E14F60", Slot = "11")]
		protected override object Convert(object obj)
		{
			return null;
		}

		[Token(Token = "0x6000A7E")]
		[Address(RVA = "0x5E15220", Offset = "0x5E14220", VA = "0x5E15220")]
		private object ConvertInt32(int obj)
		{
			return null;
		}

		[Token(Token = "0x6000A7F")]
		[Address(RVA = "0x5E15430", Offset = "0x5E14430", VA = "0x5E15430")]
		private object ConvertInt64(long obj)
		{
			return null;
		}

		[Token(Token = "0x6000A80")]
		[Address(RVA = "0x5E15650", Offset = "0x5E14650", VA = "0x5E15650")]
		private object ConvertUInt64(ulong obj)
		{
			return null;
		}

		[Token(Token = "0x6000A81")]
		[Address(RVA = "0x5E158C0", Offset = "0x5E148C0", VA = "0x5E158C0")]
		private object ConvertDouble(double obj)
		{
			return null;
		}
	}

	[Token(Token = "0x2000208")]
	internal sealed class ToUnderlying : NumericConvertInstruction
	{
		[Token(Token = "0x17000221")]
		public override string InstructionName
		{
			[Token(Token = "0x6000A82")]
			[Address(RVA = "0x5E15B30", Offset = "0x5E14B30", VA = "0x5E15B30", Slot = "9")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000A83")]
		[Address(RVA = "0x5E15B60", Offset = "0x5E14B60", VA = "0x5E15B60")]
		public ToUnderlying(TypeCode to, bool isLiftedToNull)
		{
		}

		[Token(Token = "0x6000A84")]
		[Address(RVA = "0x5E15B90", Offset = "0x5E14B90", VA = "0x5E15B90", Slot = "11")]
		protected override object Convert(object obj)
		{
			return null;
		}
	}

	[Token(Token = "0x40003EA")]
	[FieldOffset(Offset = "0x10")]
	internal readonly TypeCode _from;

	[Token(Token = "0x40003EB")]
	[FieldOffset(Offset = "0x14")]
	internal readonly TypeCode _to;

	[Token(Token = "0x40003EC")]
	[FieldOffset(Offset = "0x18")]
	private readonly bool _isLiftedToNull;

	[Token(Token = "0x1700021C")]
	public override string InstructionName
	{
		[Token(Token = "0x6000A70")]
		[Address(RVA = "0x5E142B0", Offset = "0x5E132B0", VA = "0x5E142B0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700021D")]
	public override int ConsumedStack
	{
		[Token(Token = "0x6000A71")]
		[Address(RVA = "0x5E142E0", Offset = "0x5E132E0", VA = "0x5E142E0", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700021E")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000A72")]
		[Address(RVA = "0x5E142F0", Offset = "0x5E132F0", VA = "0x5E142F0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000A6D")]
	[Address(RVA = "0x5E141B0", Offset = "0x5E131B0", VA = "0x5E141B0")]
	protected NumericConvertInstruction(TypeCode from, TypeCode to, bool isLiftedToNull)
	{
	}

	[Token(Token = "0x6000A6E")]
	[Address(RVA = "0x5E141E0", Offset = "0x5E131E0", VA = "0x5E141E0", Slot = "8")]
	public sealed override int Run(InterpretedFrame frame)
	{
		return default(int);
	}

	[Token(Token = "0x6000A6F")]
	protected abstract object Convert(object obj);

	[Token(Token = "0x6000A73")]
	[Address(RVA = "0x5E14300", Offset = "0x5E13300", VA = "0x5E14300", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
