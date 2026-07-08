using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x200019F")]
internal static class ParameterizedStrings
{
	[Token(Token = "0x20001A0")]
	public struct FormatParam
	{
		[Token(Token = "0x40006F2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private readonly int _int32;

		[Token(Token = "0x40006F3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		private readonly string _string;

		[Token(Token = "0x17000177")]
		public int Int32
		{
			[Token(Token = "0x600104C")]
			[Address(RVA = "0x5035550", Offset = "0x5035550", VA = "0x5035550")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000178")]
		public string String
		{
			[Token(Token = "0x600104D")]
			[Address(RVA = "0x5034C60", Offset = "0x5034C60", VA = "0x5034C60")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000179")]
		public object Object
		{
			[Token(Token = "0x600104E")]
			[Address(RVA = "0x5034C90", Offset = "0x5034C90", VA = "0x5034C90")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6001049")]
		[Address(RVA = "0x5035510", Offset = "0x5035510", VA = "0x5035510")]
		public FormatParam(int value)
		{
		}

		[Token(Token = "0x600104A")]
		[Address(RVA = "0x5035530", Offset = "0x5035530", VA = "0x5035530")]
		private FormatParam(int intValue, string stringValue)
		{
		}

		[Token(Token = "0x600104B")]
		[Address(RVA = "0x5031210", Offset = "0x5031210", VA = "0x5031210")]
		public static implicit operator FormatParam(int value)
		{
			return default(FormatParam);
		}
	}

	[Token(Token = "0x20001A1")]
	private sealed class LowLevelStack
	{
		[Token(Token = "0x40006F4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private FormatParam[] _arr;

		[Token(Token = "0x40006F5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private int _count;

		[Token(Token = "0x600104F")]
		[Address(RVA = "0x50341E0", Offset = "0x50341E0", VA = "0x50341E0")]
		public LowLevelStack()
		{
		}

		[Token(Token = "0x6001050")]
		[Address(RVA = "0x5034BD0", Offset = "0x5034BD0", VA = "0x5034BD0")]
		public FormatParam Pop()
		{
			return default(FormatParam);
		}

		[Token(Token = "0x6001051")]
		[Address(RVA = "0x50350D0", Offset = "0x50350D0", VA = "0x50350D0")]
		public void Push(FormatParam item)
		{
		}

		[Token(Token = "0x6001052")]
		[Address(RVA = "0x5034230", Offset = "0x5034230", VA = "0x5034230")]
		public void Clear()
		{
		}
	}

	[Token(Token = "0x40006F1")]
	[ThreadStatic]
	private static LowLevelStack _cachedStack;

	[Token(Token = "0x6001040")]
	[Address(RVA = "0x5031240", Offset = "0x5031240", VA = "0x5031240")]
	public static string Evaluate(string format, params FormatParam[] args)
	{
		return null;
	}

	[Token(Token = "0x6001041")]
	[Address(RVA = "0x5034250", Offset = "0x5034250", VA = "0x5034250")]
	private static string EvaluateInternal(string format, ref int pos, FormatParam[] args, LowLevelStack stack, ref FormatParam[] dynamicVars, ref FormatParam[] staticVars)
	{
		return null;
	}

	[Token(Token = "0x6001042")]
	[Address(RVA = "0x50352B0", Offset = "0x50352B0", VA = "0x50352B0")]
	private static bool AsBool(int i)
	{
		return default(bool);
	}

	[Token(Token = "0x6001043")]
	[Address(RVA = "0x50352A0", Offset = "0x50352A0", VA = "0x50352A0")]
	private static int AsInt(bool b)
	{
		return default(int);
	}

	[Token(Token = "0x6001044")]
	[Address(RVA = "0x50352C0", Offset = "0x50352C0", VA = "0x50352C0")]
	private static string StringFromAsciiBytes(byte[] buffer, int offset, int length)
	{
		return null;
	}

	[PreserveSig]
	[Token(Token = "0x6001045")]
	[Address(RVA = "0x5035390", Offset = "0x5035390", VA = "0x5035390")]
	private unsafe static extern int snprintf(byte* str, IntPtr size, string format, string arg1);

	[PreserveSig]
	[Token(Token = "0x6001046")]
	[Address(RVA = "0x5035460", Offset = "0x5035460", VA = "0x5035460")]
	private unsafe static extern int snprintf(byte* str, IntPtr size, string format, int arg1);

	[Token(Token = "0x6001047")]
	[Address(RVA = "0x5034CC0", Offset = "0x5034CC0", VA = "0x5034CC0")]
	private static string FormatPrintF(string format, object arg)
	{
		return null;
	}

	[Token(Token = "0x6001048")]
	[Address(RVA = "0x50351A0", Offset = "0x50351A0", VA = "0x50351A0")]
	private static FormatParam[] GetDynamicOrStaticVariables(char c, ref FormatParam[] dynamicVars, ref FormatParam[] staticVars, out int index)
	{
		return null;
	}
}
