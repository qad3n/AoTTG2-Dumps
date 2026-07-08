using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x2000204")]
internal abstract class NumericConvertInstruction : Instruction
{
	[Token(Token = "0x2000205")]
	internal sealed class Unchecked : NumericConvertInstruction
	{
		[Token(Token = "0x1700021D")]
		public override string InstructionName
		{
			[Token(Token = "0x6000A6A")]
			[Address(RVA = "0x41DA020", Offset = "0x41DA020", VA = "0x41DA020", Slot = "9")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000A6B")]
		[Address(RVA = "0x41DA050", Offset = "0x41DA050", VA = "0x41DA050")]
		public Unchecked(TypeCode from, TypeCode to, bool isLiftedToNull)
		{
		}

		[Token(Token = "0x6000A6C")]
		[Address(RVA = "0x41DA080", Offset = "0x41DA080", VA = "0x41DA080", Slot = "11")]
		protected override object Convert(object obj)
		{
			return null;
		}

		[Token(Token = "0x6000A6D")]
		[Address(RVA = "0x41DA360", Offset = "0x41DA360", VA = "0x41DA360")]
		private object ConvertInt32(int obj)
		{
			return null;
		}

		[Token(Token = "0x6000A6E")]
		[Address(RVA = "0x41DA510", Offset = "0x41DA510", VA = "0x41DA510")]
		private object ConvertInt64(long obj)
		{
			return null;
		}

		[Token(Token = "0x6000A6F")]
		[Address(RVA = "0x41DA6B0", Offset = "0x41DA6B0", VA = "0x41DA6B0")]
		private object ConvertUInt64(ulong obj)
		{
			return null;
		}

		[Token(Token = "0x6000A70")]
		[Address(RVA = "0x41DA890", Offset = "0x41DA890", VA = "0x41DA890")]
		private object ConvertDouble(double obj)
		{
			return null;
		}
	}

	[Token(Token = "0x2000206")]
	internal sealed class Checked : NumericConvertInstruction
	{
		[Token(Token = "0x1700021E")]
		public override string InstructionName
		{
			[Token(Token = "0x6000A71")]
			[Address(RVA = "0x41DAAA0", Offset = "0x41DAAA0", VA = "0x41DAAA0", Slot = "9")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000A72")]
		[Address(RVA = "0x41DAAD0", Offset = "0x41DAAD0", VA = "0x41DAAD0")]
		public Checked(TypeCode from, TypeCode to, bool isLiftedToNull)
		{
		}

		[Token(Token = "0x6000A73")]
		[Address(RVA = "0x41DAB00", Offset = "0x41DAB00", VA = "0x41DAB00", Slot = "11")]
		protected override object Convert(object obj)
		{
			return null;
		}

		[Token(Token = "0x6000A74")]
		[Address(RVA = "0x41DADE0", Offset = "0x41DADE0", VA = "0x41DADE0")]
		private object ConvertInt32(int obj)
		{
			return null;
		}

		[Token(Token = "0x6000A75")]
		[Address(RVA = "0x41DAFF0", Offset = "0x41DAFF0", VA = "0x41DAFF0")]
		private object ConvertInt64(long obj)
		{
			return null;
		}

		[Token(Token = "0x6000A76")]
		[Address(RVA = "0x41DB210", Offset = "0x41DB210", VA = "0x41DB210")]
		private object ConvertUInt64(ulong obj)
		{
			return null;
		}

		[Token(Token = "0x6000A77")]
		[Address(RVA = "0x41DB480", Offset = "0x41DB480", VA = "0x41DB480")]
		private object ConvertDouble(double obj)
		{
			return null;
		}
	}

	[Token(Token = "0x2000207")]
	internal sealed class ToUnderlying : NumericConvertInstruction
	{
		[Token(Token = "0x1700021F")]
		public override string InstructionName
		{
			[Token(Token = "0x6000A78")]
			[Address(RVA = "0x41DB720", Offset = "0x41DB720", VA = "0x41DB720", Slot = "9")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000A79")]
		[Address(RVA = "0x41DB750", Offset = "0x41DB750", VA = "0x41DB750")]
		public ToUnderlying(TypeCode to, bool isLiftedToNull)
		{
		}

		[Token(Token = "0x6000A7A")]
		[Address(RVA = "0x41DB780", Offset = "0x41DB780", VA = "0x41DB780", Slot = "11")]
		protected override object Convert(object obj)
		{
			return null;
		}
	}

	[Token(Token = "0x40003E1")]
	[FieldOffset(Offset = "0x10")]
	internal readonly TypeCode _from;

	[Token(Token = "0x40003E2")]
	[FieldOffset(Offset = "0x14")]
	internal readonly TypeCode _to;

	[Token(Token = "0x40003E3")]
	[FieldOffset(Offset = "0x18")]
	private readonly bool _isLiftedToNull;

	[Token(Token = "0x1700021A")]
	public override string InstructionName
	{
		[Token(Token = "0x6000A66")]
		[Address(RVA = "0x41D9E20", Offset = "0x41D9E20", VA = "0x41D9E20", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700021B")]
	public override int ConsumedStack
	{
		[Token(Token = "0x6000A67")]
		[Address(RVA = "0x41D9E50", Offset = "0x41D9E50", VA = "0x41D9E50", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700021C")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000A68")]
		[Address(RVA = "0x41D9E60", Offset = "0x41D9E60", VA = "0x41D9E60", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000A63")]
	[Address(RVA = "0x41D9D30", Offset = "0x41D9D30", VA = "0x41D9D30")]
	protected NumericConvertInstruction(TypeCode from, TypeCode to, bool isLiftedToNull)
	{
	}

	[Token(Token = "0x6000A64")]
	[Address(RVA = "0x41D9D60", Offset = "0x41D9D60", VA = "0x41D9D60", Slot = "8")]
	public sealed override int Run(InterpretedFrame frame)
	{
		return default(int);
	}

	[Token(Token = "0x6000A65")]
	protected abstract object Convert(object obj);

	[Token(Token = "0x6000A69")]
	[Address(RVA = "0x41D9E70", Offset = "0x41D9E70", VA = "0x41D9E70", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
