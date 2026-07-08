using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Utility;

[Token(Token = "0x20006EE")]
internal class Format
{
	[Token(Token = "0x20006EF")]
	public class HMSFormatter : ICustomFormatter, IFormatProvider
	{
		[Token(Token = "0x4002162")]
		[FieldOffset(Offset = "0x0")]
		private static Dictionary<string, string> timeformats;

		[Token(Token = "0x600447F")]
		[Address(RVA = "0x407A960", Offset = "0x407A960", VA = "0x407A960", Slot = "4")]
		public string Format(string format, object arg, IFormatProvider formatProvider)
		{
			return null;
		}

		[Token(Token = "0x6004480")]
		[Address(RVA = "0x407AA30", Offset = "0x407AA30", VA = "0x407AA30", Slot = "5")]
		public object GetFormat(Type formatType)
		{
			return null;
		}

		[Token(Token = "0x6004481")]
		[Address(RVA = "0x407A940", Offset = "0x407A940", VA = "0x407A940")]
		public HMSFormatter()
		{
		}
	}

	[Token(Token = "0x20006F0")]
	public class PluralFormatter : ICustomFormatter, IFormatProvider
	{
		[Token(Token = "0x6004483")]
		[Address(RVA = "0x407AC40", Offset = "0x407AC40", VA = "0x407AC40", Slot = "4")]
		public string Format(string format, object arg, IFormatProvider formatProvider)
		{
			return null;
		}

		[Token(Token = "0x6004484")]
		[Address(RVA = "0x407AD60", Offset = "0x407AD60", VA = "0x407AD60", Slot = "5")]
		public object GetFormat(Type formatType)
		{
			return null;
		}

		[Token(Token = "0x6004485")]
		[Address(RVA = "0x407AA20", Offset = "0x407AA20", VA = "0x407AA20")]
		public PluralFormatter()
		{
		}
	}

	[Token(Token = "0x600447C")]
	[Address(RVA = "0x407A260", Offset = "0x407A260", VA = "0x407A260")]
	public static string Suffix(ulong num)
	{
		return null;
	}

	[Token(Token = "0x600447D")]
	[Address(RVA = "0x407A430", Offset = "0x407A430", VA = "0x407A430")]
	public static string GetReadableTimespan(TimeSpan ts)
	{
		return null;
	}

	[Token(Token = "0x600447E")]
	[Address(RVA = "0x407A950", Offset = "0x407A950", VA = "0x407A950")]
	public Format()
	{
	}
}
