// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.CompilerServices.FormattableStringFactory
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.CompilerServices;

[Token(Token = "0x2000474")]
public static class FormattableStringFactory
{
	[Token(Token = "0x2000475")]
	private sealed class ConcreteFormattableString : FormattableString
	{
		[Token(Token = "0x4001300")]
		[FieldOffset(Offset = "0x10")]
		private readonly string _format;

		[Token(Token = "0x4001301")]
		[FieldOffset(Offset = "0x18")]
		private readonly object[] _arguments;

		[Token(Token = "0x1700046F")]
		public override string Format
		{
			[Token(Token = "0x6002274")]
			[Address(RVA = "0x3BC0F80", Offset = "0x3BC0F80", VA = "0x3BC0F80", Slot = "5")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000470")]
		public override int ArgumentCount
		{
			[Token(Token = "0x6002276")]
			[Address(RVA = "0x3BC0FA0", Offset = "0x3BC0FA0", VA = "0x3BC0FA0", Slot = "7")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x6002273")]
		[Address(RVA = "0x3BC0F40", Offset = "0x3BC0F40", VA = "0x3BC0F40")]
		internal ConcreteFormattableString(string format, object[] arguments)
		{
		}

		[Token(Token = "0x6002275")]
		[Address(RVA = "0x3BC0F90", Offset = "0x3BC0F90", VA = "0x3BC0F90", Slot = "6")]
		public override object[] GetArguments()
		{
			return null;
		}

		[Token(Token = "0x6002277")]
		[Address(RVA = "0x3BC0FC0", Offset = "0x3BC0FC0", VA = "0x3BC0FC0", Slot = "8")]
		public override object GetArgument(int index)
		{
			return null;
		}

		[Token(Token = "0x6002278")]
		[Address(RVA = "0x3BC0FF0", Offset = "0x3BC0FF0", VA = "0x3BC0FF0", Slot = "9")]
		public override string ToString(IFormatProvider formatProvider)
		{
			return null;
		}
	}

	[Token(Token = "0x6002272")]
	[Address(RVA = "0x3BC0E60", Offset = "0x3BC0E60", VA = "0x3BC0E60")]
	public static FormattableString Create(string format, params object[] arguments)
	{
		return null;
	}
}
