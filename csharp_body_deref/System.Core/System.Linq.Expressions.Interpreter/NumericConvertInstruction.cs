// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.NumericConvertInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
			[Address(RVA = "0x44FF120", Offset = "0x44FF120", VA = "0x44FF120", Slot = "9")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000A6B")]
		[Address(RVA = "0x44FF150", Offset = "0x44FF150", VA = "0x44FF150")]
		public Unchecked(TypeCode from, TypeCode to, bool isLiftedToNull)
		{
		}

		[Token(Token = "0x6000A6C")]
		[Address(RVA = "0x44FF180", Offset = "0x44FF180", VA = "0x44FF180", Slot = "11")]
		protected override object Convert(object obj)
		{
			return null;
		}

		[Token(Token = "0x6000A6D")]
		[Address(RVA = "0x44FF460", Offset = "0x44FF460", VA = "0x44FF460")]
		private object ConvertInt32(int obj)
		{
			return null;
		}

		[Token(Token = "0x6000A6E")]
		[Address(RVA = "0x44FF610", Offset = "0x44FF610", VA = "0x44FF610")]
		private object ConvertInt64(long obj)
		{
			return null;
		}

		[Token(Token = "0x6000A6F")]
		[Address(RVA = "0x44FF7B0", Offset = "0x44FF7B0", VA = "0x44FF7B0")]
		private object ConvertUInt64(ulong obj)
		{
			return null;
		}

		[Token(Token = "0x6000A70")]
		[Address(RVA = "0x44FF990", Offset = "0x44FF990", VA = "0x44FF990")]
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
			[Address(RVA = "0x44FFBA0", Offset = "0x44FFBA0", VA = "0x44FFBA0", Slot = "9")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000A72")]
		[Address(RVA = "0x44FFBD0", Offset = "0x44FFBD0", VA = "0x44FFBD0")]
		public Checked(TypeCode from, TypeCode to, bool isLiftedToNull)
		{
		}

		[Token(Token = "0x6000A73")]
		[Address(RVA = "0x44FFC00", Offset = "0x44FFC00", VA = "0x44FFC00", Slot = "11")]
		protected override object Convert(object obj)
		{
			return null;
		}

		[Token(Token = "0x6000A74")]
		[Address(RVA = "0x44FFEE0", Offset = "0x44FFEE0", VA = "0x44FFEE0")]
		private object ConvertInt32(int obj)
		{
			return null;
		}

		[Token(Token = "0x6000A75")]
		[Address(RVA = "0x45000F0", Offset = "0x45000F0", VA = "0x45000F0")]
		private object ConvertInt64(long obj)
		{
			return null;
		}

		[Token(Token = "0x6000A76")]
		[Address(RVA = "0x4500310", Offset = "0x4500310", VA = "0x4500310")]
		private object ConvertUInt64(ulong obj)
		{
			return null;
		}

		[Token(Token = "0x6000A77")]
		[Address(RVA = "0x4500580", Offset = "0x4500580", VA = "0x4500580")]
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
			[Address(RVA = "0x4500820", Offset = "0x4500820", VA = "0x4500820", Slot = "9")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000A79")]
		[Address(RVA = "0x4500850", Offset = "0x4500850", VA = "0x4500850")]
		public ToUnderlying(TypeCode to, bool isLiftedToNull)
		{
		}

		[Token(Token = "0x6000A7A")]
		[Address(RVA = "0x4500880", Offset = "0x4500880", VA = "0x4500880", Slot = "11")]
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
		[Address(RVA = "0x44FEF20", Offset = "0x44FEF20", VA = "0x44FEF20", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700021B")]
	public override int ConsumedStack
	{
		[Token(Token = "0x6000A67")]
		[Address(RVA = "0x44FEF50", Offset = "0x44FEF50", VA = "0x44FEF50", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700021C")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000A68")]
		[Address(RVA = "0x44FEF60", Offset = "0x44FEF60", VA = "0x44FEF60", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000A63")]
	[Address(RVA = "0x44FEE30", Offset = "0x44FEE30", VA = "0x44FEE30")]
	protected NumericConvertInstruction(TypeCode from, TypeCode to, bool isLiftedToNull)
	{
	}

	[Token(Token = "0x6000A64")]
	[Address(RVA = "0x44FEE60", Offset = "0x44FEE60", VA = "0x44FEE60", Slot = "8")]
	public sealed override int Run(InterpretedFrame frame)
	{
		return default(int);
	}

	[Token(Token = "0x6000A65")]
	protected abstract object Convert(object obj);

	[Token(Token = "0x6000A69")]
	[Address(RVA = "0x44FEF70", Offset = "0x44FEF70", VA = "0x44FEF70", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
