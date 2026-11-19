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

[Token(Token = "0x200092B")]
internal class Format
{
	[Token(Token = "0x200092C")]
	public class HMSFormatter : ICustomFormatter, IFormatProvider
	{
		[Token(Token = "0x4002E37")]
		[FieldOffset(Offset = "0x0")]
		private static Dictionary<string, string> timeformats;

		[Token(Token = "0x600569B")]
		[Address(RVA = "0x5CEF030", Offset = "0x5CEE030", VA = "0x5CEF030", Slot = "4")]
		public string Format(string format, object arg, IFormatProvider formatProvider)
		{
			return null;
		}

		[Token(Token = "0x600569C")]
		[Address(RVA = "0x5CEF100", Offset = "0x5CEE100", VA = "0x5CEF100", Slot = "5")]
		public object GetFormat(Type formatType)
		{
			return null;
		}

		[Token(Token = "0x600569D")]
		[Address(RVA = "0x5CEF010", Offset = "0x5CEE010", VA = "0x5CEF010")]
		public HMSFormatter()
		{
		}
	}

	[Token(Token = "0x200092D")]
	public class PluralFormatter : ICustomFormatter, IFormatProvider
	{
		[Token(Token = "0x600569F")]
		[Address(RVA = "0x5CEF310", Offset = "0x5CEE310", VA = "0x5CEF310", Slot = "4")]
		public string Format(string format, object arg, IFormatProvider formatProvider)
		{
			return null;
		}

		[Token(Token = "0x60056A0")]
		[Address(RVA = "0x5CEF430", Offset = "0x5CEE430", VA = "0x5CEF430", Slot = "5")]
		public object GetFormat(Type formatType)
		{
			return null;
		}

		[Token(Token = "0x60056A1")]
		[Address(RVA = "0x5CEF0F0", Offset = "0x5CEE0F0", VA = "0x5CEF0F0")]
		public PluralFormatter()
		{
		}
	}

	[Token(Token = "0x6005698")]
	[Address(RVA = "0x5CEE8D0", Offset = "0x5CED8D0", VA = "0x5CEE8D0")]
	public static string Suffix(ulong num)
	{
		return null;
	}

	[Token(Token = "0x6005699")]
	[Address(RVA = "0x5CEEAF0", Offset = "0x5CEDAF0", VA = "0x5CEEAF0")]
	public static string GetReadableTimespan(TimeSpan ts)
	{
		return null;
	}

	[Token(Token = "0x600569A")]
	[Address(RVA = "0x5CEF020", Offset = "0x5CEE020", VA = "0x5CEF020")]
	public Format()
	{
	}
}
