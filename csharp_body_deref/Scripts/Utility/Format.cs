// ==================== AoTTG2 cross-reference ====================
// Type: Utility.Format
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Utility/Format.c
// Prior real C# source (older reference): Assets/Scripts/Utility/Format.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Utility;

[Token(Token = "0x200073C")]
internal class Format
{
	[Token(Token = "0x200073D")]
	public class HMSFormatter : ICustomFormatter, IFormatProvider
	{
		[Token(Token = "0x40022BF")]
		[FieldOffset(Offset = "0x0")]
		private static Dictionary<string, string> timeformats;

		[Token(Token = "0x60046E7")]
		[Address(RVA = "0x4392940", Offset = "0x4392940", VA = "0x4392940", Slot = "4")]
		public string Format(string format, object arg, IFormatProvider formatProvider)
		{
			return null;
		}

		[Token(Token = "0x60046E8")]
		[Address(RVA = "0x4392A10", Offset = "0x4392A10", VA = "0x4392A10", Slot = "5")]
		public object GetFormat(Type formatType)
		{
			return null;
		}

		[Token(Token = "0x60046E9")]
		[Address(RVA = "0x4392920", Offset = "0x4392920", VA = "0x4392920")]
		public HMSFormatter()
		{
		}
	}

	[Token(Token = "0x200073E")]
	public class PluralFormatter : ICustomFormatter, IFormatProvider
	{
		[Token(Token = "0x60046EB")]
		[Address(RVA = "0x4392C20", Offset = "0x4392C20", VA = "0x4392C20", Slot = "4")]
		public string Format(string format, object arg, IFormatProvider formatProvider)
		{
			return null;
		}

		[Token(Token = "0x60046EC")]
		[Address(RVA = "0x4392D40", Offset = "0x4392D40", VA = "0x4392D40", Slot = "5")]
		public object GetFormat(Type formatType)
		{
			return null;
		}

		[Token(Token = "0x60046ED")]
		[Address(RVA = "0x4392A00", Offset = "0x4392A00", VA = "0x4392A00")]
		public PluralFormatter()
		{
		}
	}

	[Token(Token = "0x60046E4")]
	[Address(RVA = "0x4392240", Offset = "0x4392240", VA = "0x4392240")]
	public static string Suffix(ulong num)
	{
		return null;
	}

	[Token(Token = "0x60046E5")]
	[Address(RVA = "0x4392410", Offset = "0x4392410", VA = "0x4392410")]
	public static string GetReadableTimespan(TimeSpan ts)
	{
		return null;
	}

	[Token(Token = "0x60046E6")]
	[Address(RVA = "0x4392930", Offset = "0x4392930", VA = "0x4392930")]
	public Format()
	{
	}
}
