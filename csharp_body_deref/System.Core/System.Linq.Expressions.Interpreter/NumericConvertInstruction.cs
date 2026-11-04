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
			[Token(Token = "0x6000A69")]
			[Address(RVA = "0x2482BF0", Offset = "0x24811F0", VA = "0x182482BF0", Slot = "9")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000A6A")]
		[Address(RVA = "0x24692F0", Offset = "0x24678F0", VA = "0x1824692F0")]
		public Unchecked(TypeCode from, TypeCode to, bool isLiftedToNull)
		{
		}

		[Token(Token = "0x6000A6B")]
		[Address(RVA = "0x2482630", Offset = "0x2480C30", VA = "0x182482630", Slot = "11")]
		protected override object Convert(object obj)
		{
			return null;
		}

		[Token(Token = "0x6000A6C")]
		[Address(RVA = "0x2482060", Offset = "0x2480660", VA = "0x182482060")]
		private object ConvertInt32(int obj)
		{
			return null;
		}

		[Token(Token = "0x6000A6D")]
		[Address(RVA = "0x2482250", Offset = "0x2480850", VA = "0x182482250")]
		private object ConvertInt64(long obj)
		{
			return null;
		}

		[Token(Token = "0x6000A6E")]
		[Address(RVA = "0x2482420", Offset = "0x2480A20", VA = "0x182482420")]
		private object ConvertUInt64(ulong obj)
		{
			return null;
		}

		[Token(Token = "0x6000A6F")]
		[Address(RVA = "0x2481DF0", Offset = "0x24803F0", VA = "0x182481DF0")]
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
			[Token(Token = "0x6000A70")]
			[Address(RVA = "0x2469320", Offset = "0x2467920", VA = "0x182469320", Slot = "9")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000A71")]
		[Address(RVA = "0x24692F0", Offset = "0x24678F0", VA = "0x1824692F0")]
		public Checked(TypeCode from, TypeCode to, bool isLiftedToNull)
		{
		}

		[Token(Token = "0x6000A72")]
		[Address(RVA = "0x2468F50", Offset = "0x2467550", VA = "0x182468F50", Slot = "11")]
		protected override object Convert(object obj)
		{
			return null;
		}

		[Token(Token = "0x6000A73")]
		[Address(RVA = "0x2468660", Offset = "0x2466C60", VA = "0x182468660")]
		private object ConvertInt32(int obj)
		{
			return null;
		}

		[Token(Token = "0x6000A74")]
		[Address(RVA = "0x2468910", Offset = "0x2466F10", VA = "0x182468910")]
		private object ConvertInt64(long obj)
		{
			return null;
		}

		[Token(Token = "0x6000A75")]
		[Address(RVA = "0x2468C00", Offset = "0x2467200", VA = "0x182468C00")]
		private object ConvertUInt64(ulong obj)
		{
			return null;
		}

		[Token(Token = "0x6000A76")]
		[Address(RVA = "0x24682E0", Offset = "0x24668E0", VA = "0x1824682E0")]
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
			[Token(Token = "0x6000A77")]
			[Address(RVA = "0x24815A0", Offset = "0x247FBA0", VA = "0x1824815A0", Slot = "9")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000A78")]
		[Address(RVA = "0x2481560", Offset = "0x247FB60", VA = "0x182481560")]
		public ToUnderlying(TypeCode to, bool isLiftedToNull)
		{
		}

		[Token(Token = "0x6000A79")]
		[Address(RVA = "0x24811A0", Offset = "0x247F7A0", VA = "0x1824811A0", Slot = "11")]
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
		[Token(Token = "0x6000A65")]
		[Address(RVA = "0x247B4F0", Offset = "0x2479AF0", VA = "0x18247B4F0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700021B")]
	public override int ConsumedStack
	{
		[Token(Token = "0x6000A66")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700021C")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000A67")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000A62")]
	[Address(RVA = "0x24692F0", Offset = "0x24678F0", VA = "0x1824692F0")]
	protected NumericConvertInstruction(TypeCode from, TypeCode to, bool isLiftedToNull)
	{
	}

	[Token(Token = "0x6000A63")]
	[Address(RVA = "0x247B270", Offset = "0x2479870", VA = "0x18247B270", Slot = "8")]
	public sealed override int Run(InterpretedFrame frame)
	{
		return default(int);
	}

	[Token(Token = "0x6000A64")]
	protected abstract object Convert(object obj);

	[Token(Token = "0x6000A68")]
	[Address(RVA = "0x247B350", Offset = "0x2479950", VA = "0x18247B350", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
