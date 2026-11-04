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

[Token(Token = "0x20001CA")]
internal static class ParameterizedStrings
{
	[Token(Token = "0x20001CB")]
	public struct FormatParam
	{
		[Token(Token = "0x4000756")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private readonly int _int32;

		[Token(Token = "0x4000757")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		private readonly string _string;

		[Token(Token = "0x17000179")]
		public int Int32
		{
			[Token(Token = "0x60010A3")]
			[Address(RVA = "0x57AED0", Offset = "0x5794D0", VA = "0x18057AED0")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x1700017A")]
		public string String
		{
			[Token(Token = "0x60010A4")]
			[Address(RVA = "0x1B825D0", Offset = "0x1B80BD0", VA = "0x181B825D0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700017B")]
		public object Object
		{
			[Token(Token = "0x60010A5")]
			[Address(RVA = "0x1B825A0", Offset = "0x1B80BA0", VA = "0x181B825A0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60010A0")]
		[Address(RVA = "0x1B82580", Offset = "0x1B80B80", VA = "0x181B82580")]
		public FormatParam(int value)
		{
		}

		[Token(Token = "0x60010A1")]
		[Address(RVA = "0x1028B90", Offset = "0x1027190", VA = "0x181028B90")]
		private FormatParam(int intValue, string stringValue)
		{
		}

		[Token(Token = "0x60010A2")]
		[Address(RVA = "0x1B825F0", Offset = "0x1B80BF0", VA = "0x181B825F0")]
		public static implicit operator FormatParam(int value)
		{
			return default(FormatParam);
		}
	}

	[Token(Token = "0x20001CC")]
	private sealed class LowLevelStack
	{
		[Token(Token = "0x4000758")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private FormatParam[] _arr;

		[Token(Token = "0x4000759")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private int _count;

		[Token(Token = "0x60010A6")]
		[Address(RVA = "0x1B82B20", Offset = "0x1B81120", VA = "0x181B82B20")]
		public LowLevelStack()
		{
		}

		[Token(Token = "0x60010A7")]
		[Address(RVA = "0x1B82960", Offset = "0x1B80F60", VA = "0x181B82960")]
		public FormatParam Pop()
		{
			return default(FormatParam);
		}

		[Token(Token = "0x60010A8")]
		[Address(RVA = "0x1B82A30", Offset = "0x1B81030", VA = "0x181B82A30")]
		public void Push(FormatParam item)
		{
		}

		[Token(Token = "0x60010A9")]
		[Address(RVA = "0x1B82930", Offset = "0x1B80F30", VA = "0x181B82930")]
		public void Clear()
		{
		}
	}

	[Token(Token = "0x4000755")]
	[ThreadStatic]
	private static LowLevelStack _cachedStack;

	[Token(Token = "0x6001097")]
	[Address(RVA = "0x1B883B0", Offset = "0x1B869B0", VA = "0x181B883B0")]
	public static string Evaluate(string format, params FormatParam[] args)
	{
		return null;
	}

	[Token(Token = "0x6001098")]
	[Address(RVA = "0x1B87750", Offset = "0x1B85D50", VA = "0x181B87750")]
	private static string EvaluateInternal(string format, ref int pos, FormatParam[] args, LowLevelStack stack, ref FormatParam[] dynamicVars, ref FormatParam[] staticVars)
	{
		return null;
	}

	[Token(Token = "0x6001099")]
	[Address(RVA = "0x1A814C0", Offset = "0x1A7FAC0", VA = "0x181A814C0")]
	private static bool AsBool(int i)
	{
		return default(bool);
	}

	[Token(Token = "0x600109A")]
	[Address(RVA = "0x1A82F60", Offset = "0x1A81560", VA = "0x181A82F60")]
	private static int AsInt(bool b)
	{
		return default(int);
	}

	[Token(Token = "0x600109B")]
	[Address(RVA = "0x1B88930", Offset = "0x1B86F30", VA = "0x181B88930")]
	private static string StringFromAsciiBytes(byte[] buffer, int offset, int length)
	{
		return null;
	}

	[PreserveSig]
	[Token(Token = "0x600109C")]
	[Address(RVA = "0x1B88A00", Offset = "0x1B87000", VA = "0x181B88A00")]
	private unsafe static extern int snprintf(byte* str, IntPtr size, string format, string arg1);

	[PreserveSig]
	[Token(Token = "0x600109D")]
	[Address(RVA = "0x1B88AC0", Offset = "0x1B870C0", VA = "0x181B88AC0")]
	private unsafe static extern int snprintf(byte* str, IntPtr size, string format, int arg1);

	[Token(Token = "0x600109E")]
	[Address(RVA = "0x1B88590", Offset = "0x1B86B90", VA = "0x181B88590")]
	private static string FormatPrintF(string format, object arg)
	{
		return null;
	}

	[Token(Token = "0x600109F")]
	[Address(RVA = "0x1B88830", Offset = "0x1B86E30", VA = "0x181B88830")]
	private static FormatParam[] GetDynamicOrStaticVariables(char c, ref FormatParam[] dynamicVars, ref FormatParam[] staticVars, out int index)
	{
		return null;
	}
}
