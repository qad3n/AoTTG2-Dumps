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
			[Address(RVA = "0x4EDB460", Offset = "0x4EDB460", VA = "0x4EDB460", Slot = "5")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000470")]
		public override int ArgumentCount
		{
			[Token(Token = "0x6002276")]
			[Address(RVA = "0x4EDB480", Offset = "0x4EDB480", VA = "0x4EDB480", Slot = "7")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x6002273")]
		[Address(RVA = "0x4EDB420", Offset = "0x4EDB420", VA = "0x4EDB420")]
		internal ConcreteFormattableString(string format, object[] arguments)
		{
		}

		[Token(Token = "0x6002275")]
		[Address(RVA = "0x4EDB470", Offset = "0x4EDB470", VA = "0x4EDB470", Slot = "6")]
		public override object[] GetArguments()
		{
			return null;
		}

		[Token(Token = "0x6002277")]
		[Address(RVA = "0x4EDB4A0", Offset = "0x4EDB4A0", VA = "0x4EDB4A0", Slot = "8")]
		public override object GetArgument(int index)
		{
			return null;
		}

		[Token(Token = "0x6002278")]
		[Address(RVA = "0x4EDB4D0", Offset = "0x4EDB4D0", VA = "0x4EDB4D0", Slot = "9")]
		public override string ToString(IFormatProvider formatProvider)
		{
			return null;
		}
	}

	[Token(Token = "0x6002272")]
	[Address(RVA = "0x4EDB340", Offset = "0x4EDB340", VA = "0x4EDB340")]
	public static FormattableString Create(string format, params object[] arguments)
	{
		return null;
	}
}
