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

[Token(Token = "0x20001A2")]
internal static class ParameterizedStrings
{
	[Token(Token = "0x20001A3")]
	public struct FormatParam
	{
		[Token(Token = "0x40006B4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private readonly int _int32;

		[Token(Token = "0x40006B5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		private readonly string _string;

		[Token(Token = "0x17000178")]
		public int Int32
		{
			[Token(Token = "0x600107A")]
			[Address(RVA = "0x551E3D0", Offset = "0x551D3D0", VA = "0x551E3D0")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000179")]
		public string String
		{
			[Token(Token = "0x600107B")]
			[Address(RVA = "0x551DAE0", Offset = "0x551CAE0", VA = "0x551DAE0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700017A")]
		public object Object
		{
			[Token(Token = "0x600107C")]
			[Address(RVA = "0x551DB10", Offset = "0x551CB10", VA = "0x551DB10")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6001077")]
		[Address(RVA = "0x551E390", Offset = "0x551D390", VA = "0x551E390")]
		public FormatParam(int value)
		{
		}

		[Token(Token = "0x6001078")]
		[Address(RVA = "0x551E3B0", Offset = "0x551D3B0", VA = "0x551E3B0")]
		private FormatParam(int intValue, string stringValue)
		{
		}

		[Token(Token = "0x6001079")]
		[Address(RVA = "0x551A0F0", Offset = "0x55190F0", VA = "0x551A0F0")]
		public static implicit operator FormatParam(int value)
		{
			return default(FormatParam);
		}
	}

	[Token(Token = "0x20001A4")]
	private sealed class LowLevelStack
	{
		[Token(Token = "0x40006B6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private FormatParam[] _arr;

		[Token(Token = "0x40006B7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private int _count;

		[Token(Token = "0x600107D")]
		[Address(RVA = "0x551D070", Offset = "0x551C070", VA = "0x551D070")]
		public LowLevelStack()
		{
		}

		[Token(Token = "0x600107E")]
		[Address(RVA = "0x551DA50", Offset = "0x551CA50", VA = "0x551DA50")]
		public FormatParam Pop()
		{
			return default(FormatParam);
		}

		[Token(Token = "0x600107F")]
		[Address(RVA = "0x551DF50", Offset = "0x551CF50", VA = "0x551DF50")]
		public void Push(FormatParam item)
		{
		}

		[Token(Token = "0x6001080")]
		[Address(RVA = "0x551D0C0", Offset = "0x551C0C0", VA = "0x551D0C0")]
		public void Clear()
		{
		}
	}

	[Token(Token = "0x40006B3")]
	[ThreadStatic]
	private static LowLevelStack _cachedStack;

	[Token(Token = "0x600106E")]
	[Address(RVA = "0x551A120", Offset = "0x5519120", VA = "0x551A120")]
	public static string Evaluate(string format, params FormatParam[] args)
	{
		return null;
	}

	[Token(Token = "0x600106F")]
	[Address(RVA = "0x551D0E0", Offset = "0x551C0E0", VA = "0x551D0E0")]
	private static string EvaluateInternal(string format, ref int pos, FormatParam[] args, LowLevelStack stack, ref FormatParam[] dynamicVars, ref FormatParam[] staticVars)
	{
		return null;
	}

	[Token(Token = "0x6001070")]
	[Address(RVA = "0x551E130", Offset = "0x551D130", VA = "0x551E130")]
	private static bool AsBool(int i)
	{
		return default(bool);
	}

	[Token(Token = "0x6001071")]
	[Address(RVA = "0x551E120", Offset = "0x551D120", VA = "0x551E120")]
	private static int AsInt(bool b)
	{
		return default(int);
	}

	[Token(Token = "0x6001072")]
	[Address(RVA = "0x551E140", Offset = "0x551D140", VA = "0x551E140")]
	private static string StringFromAsciiBytes(byte[] buffer, int offset, int length)
	{
		return null;
	}

	[PreserveSig]
	[Token(Token = "0x6001073")]
	[Address(RVA = "0x551E210", Offset = "0x551D210", VA = "0x551E210")]
	private unsafe static extern int snprintf(byte* str, IntPtr size, string format, string arg1);

	[PreserveSig]
	[Token(Token = "0x6001074")]
	[Address(RVA = "0x551E2E0", Offset = "0x551D2E0", VA = "0x551E2E0")]
	private unsafe static extern int snprintf(byte* str, IntPtr size, string format, int arg1);

	[Token(Token = "0x6001075")]
	[Address(RVA = "0x551DB40", Offset = "0x551CB40", VA = "0x551DB40")]
	private static string FormatPrintF(string format, object arg)
	{
		return null;
	}

	[Token(Token = "0x6001076")]
	[Address(RVA = "0x551E020", Offset = "0x551D020", VA = "0x551E020")]
	private static FormatParam[] GetDynamicOrStaticVariables(char c, ref FormatParam[] dynamicVars, ref FormatParam[] staticVars, out int index)
	{
		return null;
	}
}
