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

[Token(Token = "0x20008C1")]
internal class Format
{
	[Token(Token = "0x20008C2")]
	public class HMSFormatter : ICustomFormatter, IFormatProvider
	{
		[Token(Token = "0x4002B7F")]
		[FieldOffset(Offset = "0x0")]
		private static Dictionary<string, string> timeformats;

		[Token(Token = "0x6005343")]
		[Address(RVA = "0x233A000", Offset = "0x2338600", VA = "0x18233A000", Slot = "4")]
		public string Format(string format, object arg, IFormatProvider formatProvider)
		{
			return null;
		}

		[Token(Token = "0x6005344")]
		[Address(RVA = "0x233A0D0", Offset = "0x23386D0", VA = "0x18233A0D0", Slot = "5")]
		public object GetFormat(Type formatType)
		{
			return null;
		}

		[Token(Token = "0x6005345")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public HMSFormatter()
		{
		}
	}

	[Token(Token = "0x20008C3")]
	public class PluralFormatter : ICustomFormatter, IFormatProvider
	{
		[Token(Token = "0x6005347")]
		[Address(RVA = "0x233CF20", Offset = "0x233B520", VA = "0x18233CF20", Slot = "4")]
		public string Format(string format, object arg, IFormatProvider formatProvider)
		{
			return null;
		}

		[Token(Token = "0x6005348")]
		[Address(RVA = "0x233D050", Offset = "0x233B650", VA = "0x18233D050", Slot = "5")]
		public object GetFormat(Type formatType)
		{
			return null;
		}

		[Token(Token = "0x6005349")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public PluralFormatter()
		{
		}
	}

	[Token(Token = "0x6005340")]
	[Address(RVA = "0x23398D0", Offset = "0x2337ED0", VA = "0x1823398D0")]
	public static string Suffix(ulong num)
	{
		return null;
	}

	[Token(Token = "0x6005341")]
	[Address(RVA = "0x2339370", Offset = "0x2337970", VA = "0x182339370")]
	public static string GetReadableTimespan(TimeSpan ts)
	{
		return null;
	}

	[Token(Token = "0x6005342")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public Format()
	{
	}
}
