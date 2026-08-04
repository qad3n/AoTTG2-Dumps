// ==================== AoTTG2 cross-reference ====================
// Type: System.ParameterizedStrings
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
			[Address(RVA = "0x3D1B070", Offset = "0x3D1B070", VA = "0x3D1B070")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000178")]
		public string String
		{
			[Token(Token = "0x600104D")]
			[Address(RVA = "0x3D1A780", Offset = "0x3D1A780", VA = "0x3D1A780")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000179")]
		public object Object
		{
			[Token(Token = "0x600104E")]
			[Address(RVA = "0x3D1A7B0", Offset = "0x3D1A7B0", VA = "0x3D1A7B0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6001049")]
		[Address(RVA = "0x3D1B030", Offset = "0x3D1B030", VA = "0x3D1B030")]
		public FormatParam(int value)
		{
		}

		[Token(Token = "0x600104A")]
		[Address(RVA = "0x3D1B050", Offset = "0x3D1B050", VA = "0x3D1B050")]
		private FormatParam(int intValue, string stringValue)
		{
		}

		[Token(Token = "0x600104B")]
		[Address(RVA = "0x3D16D30", Offset = "0x3D16D30", VA = "0x3D16D30")]
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
		[Address(RVA = "0x3D19D00", Offset = "0x3D19D00", VA = "0x3D19D00")]
		public LowLevelStack()
		{
		}

		[Token(Token = "0x6001050")]
		[Address(RVA = "0x3D1A6F0", Offset = "0x3D1A6F0", VA = "0x3D1A6F0")]
		public FormatParam Pop()
		{
			return default(FormatParam);
		}

		[Token(Token = "0x6001051")]
		[Address(RVA = "0x3D1ABF0", Offset = "0x3D1ABF0", VA = "0x3D1ABF0")]
		public void Push(FormatParam item)
		{
		}

		[Token(Token = "0x6001052")]
		[Address(RVA = "0x3D19D50", Offset = "0x3D19D50", VA = "0x3D19D50")]
		public void Clear()
		{
		}
	}

	[Token(Token = "0x40006F1")]
	[ThreadStatic]
	private static LowLevelStack _cachedStack;

	[Token(Token = "0x6001040")]
	[Address(RVA = "0x3D16D60", Offset = "0x3D16D60", VA = "0x3D16D60")]
	public static string Evaluate(string format, params FormatParam[] args)
	{
		return null;
	}

	[Token(Token = "0x6001041")]
	[Address(RVA = "0x3D19D70", Offset = "0x3D19D70", VA = "0x3D19D70")]
	private static string EvaluateInternal(string format, ref int pos, FormatParam[] args, LowLevelStack stack, ref FormatParam[] dynamicVars, ref FormatParam[] staticVars)
	{
		return null;
	}

	[Token(Token = "0x6001042")]
	[Address(RVA = "0x3D1ADD0", Offset = "0x3D1ADD0", VA = "0x3D1ADD0")]
	private static bool AsBool(int i)
	{
		return default(bool);
	}

	[Token(Token = "0x6001043")]
	[Address(RVA = "0x3D1ADC0", Offset = "0x3D1ADC0", VA = "0x3D1ADC0")]
	private static int AsInt(bool b)
	{
		return default(int);
	}

	[Token(Token = "0x6001044")]
	[Address(RVA = "0x3D1ADE0", Offset = "0x3D1ADE0", VA = "0x3D1ADE0")]
	private static string StringFromAsciiBytes(byte[] buffer, int offset, int length)
	{
		return null;
	}

	[PreserveSig]
	[Token(Token = "0x6001045")]
	[Address(RVA = "0x3D1AEB0", Offset = "0x3D1AEB0", VA = "0x3D1AEB0")]
	private unsafe static extern int snprintf(byte* str, IntPtr size, string format, string arg1);

	[PreserveSig]
	[Token(Token = "0x6001046")]
	[Address(RVA = "0x3D1AF80", Offset = "0x3D1AF80", VA = "0x3D1AF80")]
	private unsafe static extern int snprintf(byte* str, IntPtr size, string format, int arg1);

	[Token(Token = "0x6001047")]
	[Address(RVA = "0x3D1A7E0", Offset = "0x3D1A7E0", VA = "0x3D1A7E0")]
	private static string FormatPrintF(string format, object arg)
	{
		return null;
	}

	[Token(Token = "0x6001048")]
	[Address(RVA = "0x3D1ACC0", Offset = "0x3D1ACC0", VA = "0x3D1ACC0")]
	private static FormatParam[] GetDynamicOrStaticVariables(char c, ref FormatParam[] dynamicVars, ref FormatParam[] staticVars, out int index)
	{
		return null;
	}
}
