// ==================== AoTTG2 cross-reference ====================
// Type: System.Decimal
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Globalization;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[StructLayout((LayoutKind)2)]
[Token(Token = "0x20001E9")]
public readonly struct Decimal : IFormattable, IComparable, IConvertible, IComparable<decimal>, IEquatable<decimal>, IDeserializationCallback, System.ISpanFormattable
{
	[StructLayout((LayoutKind)2)]
	[Token(Token = "0x20001EA")]
	private struct DecCalc
	{
		[Token(Token = "0x20001EB")]
		internal enum RoundingMode
		{
			[Token(Token = "0x400096C")]
			ToEven,
			[Token(Token = "0x400096D")]
			AwayFromZero,
			[Token(Token = "0x400096E")]
			Truncate,
			[Token(Token = "0x400096F")]
			Floor,
			[Token(Token = "0x4000970")]
			Ceiling
		}

		[Token(Token = "0x20001EC")]
		private struct PowerOvfl
		{
			[Token(Token = "0x4000971")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			public readonly uint Hi;

			[Token(Token = "0x4000972")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
			public readonly ulong MidLo;

			[Token(Token = "0x60011A0")]
			[Address(RVA = "0x1BA3170", Offset = "0x1BA1770", VA = "0x181BA3170")]
			public PowerOvfl(uint hi, uint mid, uint lo)
			{
			}
		}

		[StructLayout((LayoutKind)2)]
		[Token(Token = "0x20001ED")]
		private struct Buf12
		{
			[Token(Token = "0x4000973")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			public uint U0;

			[Token(Token = "0x4000974")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
			public uint U1;

			[Token(Token = "0x4000975")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
			public uint U2;

			[Token(Token = "0x4000976")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			private ulong ulo64LE;

			[Token(Token = "0x4000977")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
			private ulong uhigh64LE;

			[Token(Token = "0x17000192")]
			public ulong Low64
			{
				[Token(Token = "0x60011A1")]
				[Address(RVA = "0x737B90", Offset = "0x736190", VA = "0x180737B90")]
				get
				{
					return default(ulong);
				}
				[Token(Token = "0x60011A2")]
				[Address(RVA = "0xB546E0", Offset = "0xB52CE0", VA = "0x180B546E0")]
				set
				{
				}
			}

			[Token(Token = "0x17000193")]
			public ulong High64
			{
				[Token(Token = "0x60011A3")]
				[Address(RVA = "0x1B943A0", Offset = "0x1B929A0", VA = "0x181B943A0")]
				get
				{
					return default(ulong);
				}
				[Token(Token = "0x60011A4")]
				[Address(RVA = "0x1B943B0", Offset = "0x1B929B0", VA = "0x181B943B0")]
				set
				{
				}
			}
		}

		[StructLayout((LayoutKind)2)]
		[Token(Token = "0x20001EE")]
		private struct Buf16
		{
			[Token(Token = "0x4000978")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			public uint U0;

			[Token(Token = "0x4000979")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
			public uint U1;

			[Token(Token = "0x400097A")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
			public uint U2;

			[Token(Token = "0x400097B")]
			[Il2CppDummyDll.FieldOffset(Offset = "0xC")]
			public uint U3;

			[Token(Token = "0x400097C")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			private ulong ulo64LE;

			[Token(Token = "0x400097D")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
			private ulong uhigh64LE;

			[Token(Token = "0x17000194")]
			public ulong Low64
			{
				[Token(Token = "0x60011A5")]
				[Address(RVA = "0x737B90", Offset = "0x736190", VA = "0x180737B90")]
				get
				{
					return default(ulong);
				}
				[Token(Token = "0x60011A6")]
				[Address(RVA = "0xB546E0", Offset = "0xB52CE0", VA = "0x180B546E0")]
				set
				{
				}
			}

			[Token(Token = "0x17000195")]
			public ulong High64
			{
				[Token(Token = "0x60011A7")]
				[Address(RVA = "0x1B943C0", Offset = "0x1B929C0", VA = "0x181B943C0")]
				get
				{
					return default(ulong);
				}
				[Token(Token = "0x60011A8")]
				[Address(RVA = "0x1B943D0", Offset = "0x1B929D0", VA = "0x181B943D0")]
				set
				{
				}
			}
		}

		[StructLayout((LayoutKind)2)]
		[Token(Token = "0x20001EF")]
		private struct Buf24
		{
			[Token(Token = "0x400097E")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			public uint U0;

			[Token(Token = "0x400097F")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
			public uint U1;

			[Token(Token = "0x4000980")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
			public uint U2;

			[Token(Token = "0x4000981")]
			[Il2CppDummyDll.FieldOffset(Offset = "0xC")]
			public uint U3;

			[Token(Token = "0x4000982")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
			public uint U4;

			[Token(Token = "0x4000983")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
			public uint U5;

			[Token(Token = "0x4000984")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			private ulong ulo64LE;

			[Token(Token = "0x4000985")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
			private ulong umid64LE;

			[Token(Token = "0x4000986")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
			private ulong uhigh64LE;

			[Token(Token = "0x17000196")]
			public ulong Low64
			{
				[Token(Token = "0x60011A9")]
				[Address(RVA = "0x737B90", Offset = "0x736190", VA = "0x180737B90")]
				get
				{
					return default(ulong);
				}
				[Token(Token = "0x60011AA")]
				[Address(RVA = "0xB546E0", Offset = "0xB52CE0", VA = "0x180B546E0")]
				set
				{
				}
			}

			[Token(Token = "0x17000197")]
			public ulong Mid64
			{
				[Token(Token = "0x60011AB")]
				[Address(RVA = "0x1B943D0", Offset = "0x1B929D0", VA = "0x181B943D0")]
				set
				{
				}
			}

			[Token(Token = "0x17000198")]
			public ulong High64
			{
				[Token(Token = "0x60011AC")]
				[Address(RVA = "0x560EC0", Offset = "0x55F4C0", VA = "0x180560EC0")]
				set
				{
				}
			}
		}

		[Token(Token = "0x20001F0")]
		private struct Buf28
		{
			[Token(Token = "0x4000987")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			public Buf24 Buf24;

			[Token(Token = "0x4000988")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
			public uint U6;
		}

		[Token(Token = "0x4000962")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private uint uflags;

		[Token(Token = "0x4000963")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
		private uint uhi;

		[Token(Token = "0x4000964")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		private uint ulo;

		[Token(Token = "0x4000965")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xC")]
		private uint umid;

		[Token(Token = "0x4000966")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		private ulong ulomidLE;

		[Token(Token = "0x4000967")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static readonly uint[] s_powers10;

		[Token(Token = "0x4000968")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		private static readonly ulong[] s_ulongPowers10;

		[Token(Token = "0x4000969")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private static readonly double[] s_doublePowers10;

		[Token(Token = "0x400096A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private static readonly PowerOvfl[] PowerOvflValues;

		[Token(Token = "0x1700018D")]
		private uint High
		{
			[Token(Token = "0x6001177")]
			[Address(RVA = "0x57AEC0", Offset = "0x5794C0", VA = "0x18057AEC0")]
			get
			{
				return default(uint);
			}
			[Token(Token = "0x6001178")]
			[Address(RVA = "0x57AF00", Offset = "0x579500", VA = "0x18057AF00")]
			set
			{
			}
		}

		[Token(Token = "0x1700018E")]
		private uint Low
		{
			[Token(Token = "0x6001179")]
			[Address(RVA = "0x57AEE0", Offset = "0x5794E0", VA = "0x18057AEE0")]
			get
			{
				return default(uint);
			}
			[Token(Token = "0x600117A")]
			[Address(RVA = "0x57AF20", Offset = "0x579520", VA = "0x18057AF20")]
			set
			{
			}
		}

		[Token(Token = "0x1700018F")]
		private uint Mid
		{
			[Token(Token = "0x600117B")]
			[Address(RVA = "0x57AEF0", Offset = "0x5794F0", VA = "0x18057AEF0")]
			get
			{
				return default(uint);
			}
			[Token(Token = "0x600117C")]
			[Address(RVA = "0x57AF30", Offset = "0x579530", VA = "0x18057AF30")]
			set
			{
			}
		}

		[Token(Token = "0x17000190")]
		private bool IsNegative
		{
			[Token(Token = "0x600117D")]
			[Address(RVA = "0x1B9B730", Offset = "0x1B99D30", VA = "0x181B9B730")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000191")]
		private ulong Low64
		{
			[Token(Token = "0x600117E")]
			[Address(RVA = "0x1B943C0", Offset = "0x1B929C0", VA = "0x181B943C0")]
			get
			{
				return default(ulong);
			}
			[Token(Token = "0x600117F")]
			[Address(RVA = "0x1B943D0", Offset = "0x1B929D0", VA = "0x181B943D0")]
			set
			{
			}
		}

		[Token(Token = "0x6001180")]
		[Address(RVA = "0x1B97CB0", Offset = "0x1B962B0", VA = "0x181B97CB0")]
		private static uint GetExponent(float f)
		{
			return default(uint);
		}

		[Token(Token = "0x6001181")]
		[Address(RVA = "0x1B97CA0", Offset = "0x1B962A0", VA = "0x181B97CA0")]
		private static uint GetExponent(double d)
		{
			return default(uint);
		}

		[Token(Token = "0x6001182")]
		[Address(RVA = "0x1B31900", Offset = "0x1B2FF00", VA = "0x181B31900")]
		private static ulong UInt32x32To64(uint a, uint b)
		{
			return default(ulong);
		}

		[Token(Token = "0x6001183")]
		[Address(RVA = "0x1B98C30", Offset = "0x1B97230", VA = "0x181B98C30")]
		private static void UInt64x64To128(ulong a, ulong b, ref DecCalc result)
		{
		}

		[Token(Token = "0x6001184")]
		[Address(RVA = "0x1B97A00", Offset = "0x1B96000", VA = "0x181B97A00")]
		private static uint Div96By32(ref Buf12 bufNum, uint den)
		{
			return default(uint);
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001185")]
		[Address(RVA = "0x1B97BC0", Offset = "0x1B961C0", VA = "0x181B97BC0")]
		private static bool Div96ByConst(ref ulong high64, ref uint low, uint pow)
		{
			return default(bool);
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001186")]
		[Address(RVA = "0x1B98D80", Offset = "0x1B97380", VA = "0x181B98D80")]
		private static void Unscale(ref uint low, ref ulong high64, ref int scale)
		{
		}

		[Token(Token = "0x6001187")]
		[Address(RVA = "0x1B97A70", Offset = "0x1B96070", VA = "0x181B97A70")]
		private static uint Div96By64(ref Buf12 bufNum, ulong den)
		{
			return default(uint);
		}

		[Token(Token = "0x6001188")]
		[Address(RVA = "0x1B978E0", Offset = "0x1B95EE0", VA = "0x181B978E0")]
		private static uint Div128By96(ref Buf16 bufNum, ref Buf12 bufDen)
		{
			return default(uint);
		}

		[Token(Token = "0x6001189")]
		[Address(RVA = "0x1B97E90", Offset = "0x1B96490", VA = "0x181B97E90")]
		private static uint IncreaseScale(ref Buf12 bufNum, uint power)
		{
			return default(uint);
		}

		[Token(Token = "0x600118A")]
		[Address(RVA = "0x1B97E10", Offset = "0x1B96410", VA = "0x181B97E10")]
		private static void IncreaseScale64(ref Buf12 bufNum, uint power)
		{
		}

		[Token(Token = "0x600118B")]
		[Address(RVA = "0x1B98360", Offset = "0x1B96960", VA = "0x181B98360")]
		private unsafe static int ScaleResult(Buf24* bufRes, uint hiRes, int scale)
		{
			return default(int);
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600118C")]
		[Address(RVA = "0x1B97C20", Offset = "0x1B96220", VA = "0x181B97C20")]
		private unsafe static uint DivByConst(uint* result, uint hiRes, out uint quotient, out uint remainder, uint power)
		{
			return default(uint);
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600118D")]
		[Address(RVA = "0x1B93970", Offset = "0x1B91F70", VA = "0x181B93970")]
		private static int LeadingZeroCount(uint value)
		{
			return default(int);
		}

		[Token(Token = "0x600118E")]
		[Address(RVA = "0x1B98240", Offset = "0x1B96840", VA = "0x181B98240")]
		private static int OverflowUnscale(ref Buf12 bufQuo, int scale, bool sticky)
		{
			return default(int);
		}

		[Token(Token = "0x600118F")]
		[Address(RVA = "0x1B98A40", Offset = "0x1B97040", VA = "0x181B98A40")]
		private static int SearchScale(ref Buf12 bufQuo, int scale)
		{
			return default(int);
		}

		[Token(Token = "0x6001190")]
		[Address(RVA = "0x1B97150", Offset = "0x1B95750", VA = "0x181B97150")]
		private static bool Add32To96(ref Buf12 bufNum, uint value)
		{
			return default(bool);
		}

		[Token(Token = "0x6001191")]
		[Address(RVA = "0x1B97170", Offset = "0x1B95770", VA = "0x181B97170")]
		internal static void DecAddSub(ref DecCalc d1, ref DecCalc d2, bool sign)
		{
		}

		[Token(Token = "0x6001192")]
		[Address(RVA = "0x1B99160", Offset = "0x1B97760", VA = "0x181B99160")]
		internal static int VarDecCmp(in decimal d1, in decimal d2)
		{
			return default(int);
		}

		[Token(Token = "0x6001193")]
		[Address(RVA = "0x1B98F80", Offset = "0x1B97580", VA = "0x181B98F80")]
		private static int VarDecCmpSub(in decimal d1, in decimal d2)
		{
			return default(int);
		}

		[Token(Token = "0x6001194")]
		[Address(RVA = "0x1B9AD60", Offset = "0x1B99360", VA = "0x181B9AD60")]
		internal static void VarDecMul(ref DecCalc d1, ref DecCalc d2)
		{
		}

		[Token(Token = "0x6001195")]
		[Address(RVA = "0x1B99DA0", Offset = "0x1B983A0", VA = "0x181B99DA0")]
		internal static void VarDecFromR4(float input, out DecCalc result)
		{
		}

		[Token(Token = "0x6001196")]
		[Address(RVA = "0x1B9A180", Offset = "0x1B98780", VA = "0x181B9A180")]
		internal static void VarDecFromR8(double input, out DecCalc result)
		{
		}

		[Token(Token = "0x6001197")]
		[Address(RVA = "0x1B9B2B0", Offset = "0x1B998B0", VA = "0x181B9B2B0")]
		internal static float VarR4FromDec(in decimal value)
		{
			return default(float);
		}

		[Token(Token = "0x6001198")]
		[Address(RVA = "0x1B9B300", Offset = "0x1B99900", VA = "0x181B9B300")]
		internal static double VarR8FromDec(in decimal value)
		{
			return default(double);
		}

		[Token(Token = "0x6001199")]
		[Address(RVA = "0x1B97CC0", Offset = "0x1B962C0", VA = "0x181B97CC0")]
		internal static int GetHashCode(in decimal d)
		{
			return default(int);
		}

		[Token(Token = "0x600119A")]
		[Address(RVA = "0x1B99260", Offset = "0x1B97860", VA = "0x181B99260")]
		internal static void VarDecDiv(ref DecCalc d1, ref DecCalc d2)
		{
		}

		[Token(Token = "0x600119B")]
		[Address(RVA = "0x1B9A980", Offset = "0x1B98F80", VA = "0x181B9A980")]
		internal static void VarDecMod(ref DecCalc d1, ref DecCalc d2)
		{
		}

		[Token(Token = "0x600119C")]
		[Address(RVA = "0x1B9A560", Offset = "0x1B98B60", VA = "0x181B9A560")]
		private static void VarDecModFull(ref DecCalc d1, ref DecCalc d2, int scale)
		{
		}

		[Token(Token = "0x600119D")]
		[Address(RVA = "0x1B97F20", Offset = "0x1B96520", VA = "0x181B97F20")]
		internal static void InternalRound(ref DecCalc d, uint scale, RoundingMode mode)
		{
		}

		[Token(Token = "0x600119E")]
		[Address(RVA = "0x1B97860", Offset = "0x1B95E60", VA = "0x181B97860")]
		internal static uint DecDivMod1E9(ref DecCalc value)
		{
			return default(uint);
		}
	}

	[Token(Token = "0x4000958")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public const decimal Zero = 0m;

	[Token(Token = "0x4000959")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public const decimal One = 1m;

	[Token(Token = "0x400095A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	public const decimal MinusOne = -1m;

	[Token(Token = "0x400095B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	public const decimal MaxValue = 79228162514264337593543950335m;

	[Token(Token = "0x400095C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	public const decimal MinValue = -79228162514264337593543950335m;

	[Token(Token = "0x400095D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly int flags;

	[Token(Token = "0x400095E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
	private readonly int hi;

	[Token(Token = "0x400095F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private readonly int lo;

	[Token(Token = "0x4000960")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC")]
	private readonly int mid;

	[NonSerialized]
	[Token(Token = "0x4000961")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private readonly ulong ulomidLE;

	[Token(Token = "0x17000187")]
	internal uint High
	{
		[Token(Token = "0x6001110")]
		[Address(RVA = "0x57AEC0", Offset = "0x5794C0", VA = "0x18057AEC0")]
		get
		{
			return default(uint);
		}
	}

	[Token(Token = "0x17000188")]
	internal uint Low
	{
		[Token(Token = "0x6001111")]
		[Address(RVA = "0x57AEE0", Offset = "0x5794E0", VA = "0x18057AEE0")]
		get
		{
			return default(uint);
		}
	}

	[Token(Token = "0x17000189")]
	internal uint Mid
	{
		[Token(Token = "0x6001112")]
		[Address(RVA = "0x57AEF0", Offset = "0x5794F0", VA = "0x18057AEF0")]
		get
		{
			return default(uint);
		}
	}

	[Token(Token = "0x1700018A")]
	internal bool IsNegative
	{
		[Token(Token = "0x6001113")]
		[Address(RVA = "0x1B9B730", Offset = "0x1B99D30", VA = "0x181B9B730")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700018B")]
	internal int Scale
	{
		[Token(Token = "0x6001114")]
		[Address(RVA = "0x1B9DF50", Offset = "0x1B9C550", VA = "0x181B9DF50")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700018C")]
	private ulong Low64
	{
		[Token(Token = "0x6001115")]
		[Address(RVA = "0x1B9DF10", Offset = "0x1B9C510", VA = "0x181B9DF10")]
		get
		{
			return default(ulong);
		}
	}

	[Token(Token = "0x6001116")]
	[Address(RVA = "0x611510", Offset = "0x60FB10", VA = "0x180611510")]
	private unsafe static ref DecCalc AsMutable(ref decimal d)
	{
		return ref *(DecCalc*)null;
	}

	[Token(Token = "0x6001117")]
	[Address(RVA = "0x1B9B9C0", Offset = "0x1B99FC0", VA = "0x181B9B9C0")]
	internal static uint DecDivMod1E9(ref decimal value)
	{
		return default(uint);
	}

	[Token(Token = "0x6001118")]
	[Address(RVA = "0x1B9DC20", Offset = "0x1B9C220", VA = "0x181B9DC20")]
	public Decimal(int value)
	{
	}

	[Token(Token = "0x6001119")]
	[Address(RVA = "0x1B9DB90", Offset = "0x1B9C190", VA = "0x181B9DB90")]
	[CLSCompliant(false)]
	public Decimal(uint value)
	{
	}

	[Token(Token = "0x600111A")]
	[Address(RVA = "0x1B9DD10", Offset = "0x1B9C310", VA = "0x181B9DD10")]
	public Decimal(long value)
	{
	}

	[Token(Token = "0x600111B")]
	[Address(RVA = "0x1B9DC50", Offset = "0x1B9C250", VA = "0x181B9DC50")]
	[CLSCompliant(false)]
	public Decimal(ulong value)
	{
	}

	[Token(Token = "0x600111C")]
	[Address(RVA = "0x1B9DE90", Offset = "0x1B9C490", VA = "0x181B9DE90")]
	public Decimal(float value)
	{
	}

	[Token(Token = "0x600111D")]
	[Address(RVA = "0x1B9DBA0", Offset = "0x1B9C1A0", VA = "0x181B9DBA0")]
	public Decimal(double value)
	{
	}

	[Token(Token = "0x600111E")]
	[Address(RVA = "0x1B9BE80", Offset = "0x1B9A480", VA = "0x181B9BE80")]
	private static bool IsValid(int flags)
	{
		return default(bool);
	}

	[Token(Token = "0x600111F")]
	[Address(RVA = "0x1B9DD40", Offset = "0x1B9C340", VA = "0x181B9DD40")]
	public Decimal(int[] bits)
	{
	}

	[Token(Token = "0x6001120")]
	[Address(RVA = "0x1B9DC70", Offset = "0x1B9C270", VA = "0x181B9DC70")]
	public Decimal(int lo, int mid, int hi, bool isNegative, byte scale)
	{
	}

	[Token(Token = "0x6001121")]
	[Address(RVA = "0x1B9CBF0", Offset = "0x1B9B1F0", VA = "0x181B9CBF0", Slot = "25")]
	private void System_002ERuntime_002ESerialization_002EIDeserializationCallback_002EOnDeserialization(object sender)
	{
	}

	[Token(Token = "0x6001122")]
	[Address(RVA = "0x1B9DC60", Offset = "0x1B9C260", VA = "0x181B9DC60")]
	private Decimal(in decimal d, int flags)
	{
	}

	[Token(Token = "0x6001123")]
	[Address(RVA = "0x1B9B740", Offset = "0x1B99D40", VA = "0x181B9B740")]
	internal static decimal Abs(ref decimal d)
	{
		return 0m;
	}

	[Token(Token = "0x6001124")]
	[Address(RVA = "0x1B9B760", Offset = "0x1B99D60", VA = "0x181B9B760")]
	public static decimal Add(decimal d1, decimal d2)
	{
		return 0m;
	}

	[Token(Token = "0x6001125")]
	[Address(RVA = "0x1B9B960", Offset = "0x1B99F60", VA = "0x181B9B960")]
	public static int Compare(decimal d1, decimal d2)
	{
		return default(int);
	}

	[Token(Token = "0x6001126")]
	[Address(RVA = "0x1B9B800", Offset = "0x1B99E00", VA = "0x181B9B800", Slot = "5")]
	public int CompareTo(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6001127")]
	[Address(RVA = "0x1B9B900", Offset = "0x1B99F00", VA = "0x181B9B900", Slot = "23")]
	public int CompareTo(decimal value)
	{
		return default(int);
	}

	[Token(Token = "0x6001128")]
	[Address(RVA = "0x1B9BAA0", Offset = "0x1B9A0A0", VA = "0x181B9BAA0")]
	public static decimal Divide(decimal d1, decimal d2)
	{
		return 0m;
	}

	[Token(Token = "0x6001129")]
	[Address(RVA = "0x1B9BBA0", Offset = "0x1B9A1A0", VA = "0x181B9BBA0", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x600112A")]
	[Address(RVA = "0x1B9BB40", Offset = "0x1B9A140", VA = "0x181B9BB40", Slot = "24")]
	public bool Equals(decimal value)
	{
		return default(bool);
	}

	[Token(Token = "0x600112B")]
	[Address(RVA = "0x1B9BCF0", Offset = "0x1B9A2F0", VA = "0x181B9BCF0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600112C")]
	[Address(RVA = "0x1B9D4E0", Offset = "0x1B9BAE0", VA = "0x181B9D4E0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600112D")]
	[Address(RVA = "0x1B9D310", Offset = "0x1B9B910", VA = "0x181B9D310")]
	public string ToString(string format)
	{
		return null;
	}

	[Token(Token = "0x600112E")]
	[Address(RVA = "0x1B9D250", Offset = "0x1B9B850", VA = "0x181B9D250", Slot = "21")]
	public string ToString(IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x600112F")]
	[Address(RVA = "0x1B9D3F0", Offset = "0x1B9B9F0", VA = "0x181B9D3F0", Slot = "4")]
	public string ToString(string format, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x6001130")]
	[Address(RVA = "0x1B9D930", Offset = "0x1B9BF30", VA = "0x181B9D930", Slot = "26")]
	public bool TryFormat(Span<char> destination, out int charsWritten, [Optional] ReadOnlySpan<char> format, [Optional] IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x6001131")]
	[Address(RVA = "0x1B9C140", Offset = "0x1B9A740", VA = "0x181B9C140")]
	public static decimal Parse(string s, IFormatProvider provider)
	{
		return 0m;
	}

	[Token(Token = "0x6001132")]
	[Address(RVA = "0x1B9C040", Offset = "0x1B9A640", VA = "0x181B9C040")]
	public static decimal Parse(string s, NumberStyles style, IFormatProvider provider)
	{
		return 0m;
	}

	[Token(Token = "0x6001133")]
	[Address(RVA = "0x1B9D9E0", Offset = "0x1B9BFE0", VA = "0x181B9D9E0")]
	public static bool TryParse(string s, NumberStyles style, IFormatProvider provider, out decimal result)
	{
		return default(bool);
	}

	[Token(Token = "0x6001134")]
	[Address(RVA = "0x1B9BC60", Offset = "0x1B9A260", VA = "0x181B9BC60")]
	public static int[] GetBits(decimal d)
	{
		return null;
	}

	[Token(Token = "0x6001135")]
	[Address(RVA = "0x1B9BEA0", Offset = "0x1B9A4A0", VA = "0x181B9BEA0")]
	internal unsafe static ref decimal Max(ref decimal d1, ref decimal d2)
	{
		return ref *(decimal*)null;
	}

	[Token(Token = "0x6001136")]
	[Address(RVA = "0x1B9BF10", Offset = "0x1B9A510", VA = "0x181B9BF10")]
	internal unsafe static ref decimal Min(ref decimal d1, ref decimal d2)
	{
		return ref *(decimal*)null;
	}

	[Token(Token = "0x6001137")]
	[Address(RVA = "0x1B9BF80", Offset = "0x1B9A580", VA = "0x181B9BF80")]
	public static decimal Multiply(decimal d1, decimal d2)
	{
		return 0m;
	}

	[Token(Token = "0x6001138")]
	[Address(RVA = "0x1B9C020", Offset = "0x1B9A620", VA = "0x181B9C020")]
	public static decimal Negate(decimal d)
	{
		return 0m;
	}

	[Token(Token = "0x6001139")]
	[Address(RVA = "0x1B9C240", Offset = "0x1B9A840", VA = "0x181B9C240")]
	public static decimal Round(decimal d, int decimals)
	{
		return 0m;
	}

	[Token(Token = "0x600113A")]
	[Address(RVA = "0x1B9C3A0", Offset = "0x1B9A9A0", VA = "0x181B9C3A0")]
	private static decimal Round(ref decimal d, int decimals, MidpointRounding mode)
	{
		return 0m;
	}

	[Token(Token = "0x600113B")]
	[Address(RVA = "0x1B9C570", Offset = "0x1B9AB70", VA = "0x181B9C570")]
	public static decimal Subtract(decimal d1, decimal d2)
	{
		return 0m;
	}

	[Token(Token = "0x600113C")]
	[Address(RVA = "0x1B9CCA0", Offset = "0x1B9B2A0", VA = "0x181B9CCA0")]
	public static byte ToByte(decimal value)
	{
		return default(byte);
	}

	[Token(Token = "0x600113D")]
	[Address(RVA = "0x1B9D0C0", Offset = "0x1B9B6C0", VA = "0x181B9D0C0")]
	[CLSCompliant(false)]
	public static sbyte ToSByte(decimal value)
	{
		return default(sbyte);
	}

	[Token(Token = "0x600113E")]
	[Address(RVA = "0x1B9CE00", Offset = "0x1B9B400", VA = "0x181B9CE00")]
	public static short ToInt16(decimal value)
	{
		return default(short);
	}

	[Token(Token = "0x600113F")]
	[Address(RVA = "0x1B9CDB0", Offset = "0x1B9B3B0", VA = "0x181B9CDB0")]
	public static double ToDouble(decimal d)
	{
		return default(double);
	}

	[Token(Token = "0x6001140")]
	[Address(RVA = "0x1B9CF10", Offset = "0x1B9B510", VA = "0x181B9CF10")]
	public static int ToInt32(decimal d)
	{
		return default(int);
	}

	[Token(Token = "0x6001141")]
	[Address(RVA = "0x1B9CFE0", Offset = "0x1B9B5E0", VA = "0x181B9CFE0")]
	public static long ToInt64(decimal d)
	{
		return default(long);
	}

	[Token(Token = "0x6001142")]
	[Address(RVA = "0x1B9D590", Offset = "0x1B9BB90", VA = "0x181B9D590")]
	[CLSCompliant(false)]
	public static ushort ToUInt16(decimal value)
	{
		return default(ushort);
	}

	[Token(Token = "0x6001143")]
	[Address(RVA = "0x1B9D6A0", Offset = "0x1B9BCA0", VA = "0x181B9D6A0")]
	[CLSCompliant(false)]
	public static uint ToUInt32(decimal d)
	{
		return default(uint);
	}

	[Token(Token = "0x6001144")]
	[Address(RVA = "0x1B9D760", Offset = "0x1B9BD60", VA = "0x181B9D760")]
	[CLSCompliant(false)]
	public static ulong ToUInt64(decimal d)
	{
		return default(ulong);
	}

	[Token(Token = "0x6001145")]
	[Address(RVA = "0x1B9D1D0", Offset = "0x1B9B7D0", VA = "0x181B9D1D0")]
	public static float ToSingle(decimal d)
	{
		return default(float);
	}

	[Token(Token = "0x6001146")]
	[Address(RVA = "0x1B9D8D0", Offset = "0x1B9BED0", VA = "0x181B9D8D0")]
	public static decimal Truncate(decimal d)
	{
		return 0m;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001147")]
	[Address(RVA = "0x1B9D840", Offset = "0x1B9BE40", VA = "0x181B9D840")]
	private static void Truncate(ref decimal d)
	{
	}

	[Token(Token = "0x6001148")]
	[Address(RVA = "0x1B9E8E0", Offset = "0x1B9CEE0", VA = "0x181B9E8E0")]
	public static implicit operator decimal(byte value)
	{
		return 0m;
	}

	[Token(Token = "0x6001149")]
	[Address(RVA = "0x1B9E850", Offset = "0x1B9CE50", VA = "0x181B9E850")]
	[CLSCompliant(false)]
	public static implicit operator decimal(sbyte value)
	{
		return 0m;
	}

	[Token(Token = "0x600114A")]
	[Address(RVA = "0x1B9E8B0", Offset = "0x1B9CEB0", VA = "0x181B9E8B0")]
	public static implicit operator decimal(short value)
	{
		return 0m;
	}

	[Token(Token = "0x600114B")]
	[Address(RVA = "0x1B9E7C0", Offset = "0x1B9CDC0", VA = "0x181B9E7C0")]
	[CLSCompliant(false)]
	public static implicit operator decimal(ushort value)
	{
		return 0m;
	}

	[Token(Token = "0x600114C")]
	[Address(RVA = "0x1B9E7C0", Offset = "0x1B9CDC0", VA = "0x181B9E7C0")]
	public static implicit operator decimal(char value)
	{
		return 0m;
	}

	[Token(Token = "0x600114D")]
	[Address(RVA = "0x1B9E880", Offset = "0x1B9CE80", VA = "0x181B9E880")]
	public static implicit operator decimal(int value)
	{
		return 0m;
	}

	[Token(Token = "0x600114E")]
	[Address(RVA = "0x1B9E840", Offset = "0x1B9CE40", VA = "0x181B9E840")]
	[CLSCompliant(false)]
	public static implicit operator decimal(uint value)
	{
		return 0m;
	}

	[Token(Token = "0x600114F")]
	[Address(RVA = "0x1B9E7E0", Offset = "0x1B9CDE0", VA = "0x181B9E7E0")]
	public static implicit operator decimal(long value)
	{
		return 0m;
	}

	[Token(Token = "0x6001150")]
	[Address(RVA = "0x1B9E820", Offset = "0x1B9CE20", VA = "0x181B9E820")]
	[CLSCompliant(false)]
	public static implicit operator decimal(ulong value)
	{
		return 0m;
	}

	[Token(Token = "0x6001151")]
	[Address(RVA = "0x1B9E380", Offset = "0x1B9C980", VA = "0x181B9E380")]
	public static explicit operator decimal(float value)
	{
		return 0m;
	}

	[Token(Token = "0x6001152")]
	[Address(RVA = "0x1B9E5C0", Offset = "0x1B9CBC0", VA = "0x181B9E5C0")]
	public static explicit operator decimal(double value)
	{
		return 0m;
	}

	[Token(Token = "0x6001153")]
	[Address(RVA = "0x1B9E5E0", Offset = "0x1B9CBE0", VA = "0x181B9E5E0")]
	public static explicit operator int(decimal value)
	{
		return default(int);
	}

	[Token(Token = "0x6001154")]
	[Address(RVA = "0x1B9E1E0", Offset = "0x1B9C7E0", VA = "0x181B9E1E0")]
	public static explicit operator long(decimal value)
	{
		return default(long);
	}

	[Token(Token = "0x6001155")]
	[Address(RVA = "0x1B9E3A0", Offset = "0x1B9C9A0", VA = "0x181B9E3A0")]
	[CLSCompliant(false)]
	public static explicit operator ulong(decimal value)
	{
		return default(ulong);
	}

	[Token(Token = "0x6001156")]
	[Address(RVA = "0x1B9E640", Offset = "0x1B9CC40", VA = "0x181B9E640")]
	public static explicit operator float(decimal value)
	{
		return default(float);
	}

	[Token(Token = "0x6001157")]
	[Address(RVA = "0x1B9E530", Offset = "0x1B9CB30", VA = "0x181B9E530")]
	public static explicit operator double(decimal value)
	{
		return default(double);
	}

	[Token(Token = "0x6001158")]
	[Address(RVA = "0x1B9C020", Offset = "0x1B9A620", VA = "0x181B9C020")]
	public static decimal operator -(decimal d)
	{
		return 0m;
	}

	[Token(Token = "0x6001159")]
	[Address(RVA = "0x1B9E900", Offset = "0x1B9CF00", VA = "0x181B9E900")]
	public static decimal operator ++(decimal d)
	{
		return 0m;
	}

	[Token(Token = "0x600115A")]
	[Address(RVA = "0x1B9E000", Offset = "0x1B9C600", VA = "0x181B9E000")]
	public static decimal operator --(decimal d)
	{
		return 0m;
	}

	[Token(Token = "0x600115B")]
	[Address(RVA = "0x1B9DF60", Offset = "0x1B9C560", VA = "0x181B9DF60")]
	public static decimal operator +(decimal d1, decimal d2)
	{
		return 0m;
	}

	[Token(Token = "0x600115C")]
	[Address(RVA = "0x1B9EC40", Offset = "0x1B9D240", VA = "0x181B9EC40")]
	public static decimal operator -(decimal d1, decimal d2)
	{
		return 0m;
	}

	[Token(Token = "0x600115D")]
	[Address(RVA = "0x1B9EBA0", Offset = "0x1B9D1A0", VA = "0x181B9EBA0")]
	public static decimal operator *(decimal d1, decimal d2)
	{
		return 0m;
	}

	[Token(Token = "0x600115E")]
	[Address(RVA = "0x1B9E0E0", Offset = "0x1B9C6E0", VA = "0x181B9E0E0")]
	public static decimal operator /(decimal d1, decimal d2)
	{
		return 0m;
	}

	[Token(Token = "0x600115F")]
	[Address(RVA = "0x1B9EB00", Offset = "0x1B9D100", VA = "0x181B9EB00")]
	public static decimal operator %(decimal d1, decimal d2)
	{
		return 0m;
	}

	[Token(Token = "0x6001160")]
	[Address(RVA = "0x1B9E180", Offset = "0x1B9C780", VA = "0x181B9E180")]
	public static bool operator ==(decimal d1, decimal d2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001161")]
	[Address(RVA = "0x1B9E9E0", Offset = "0x1B9CFE0", VA = "0x181B9E9E0")]
	public static bool operator !=(decimal d1, decimal d2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001162")]
	[Address(RVA = "0x1B9EAA0", Offset = "0x1B9D0A0", VA = "0x181B9EAA0")]
	public static bool operator <(decimal d1, decimal d2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001163")]
	[Address(RVA = "0x1B9EA40", Offset = "0x1B9D040", VA = "0x181B9EA40")]
	public static bool operator <=(decimal d1, decimal d2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001164")]
	[Address(RVA = "0x1B9E760", Offset = "0x1B9CD60", VA = "0x181B9E760")]
	public static bool operator >(decimal d1, decimal d2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001165")]
	[Address(RVA = "0x1B9E700", Offset = "0x1B9CD00", VA = "0x181B9E700")]
	public static bool operator >=(decimal d1, decimal d2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001166")]
	[Address(RVA = "0x1B9BE70", Offset = "0x1B9A470", VA = "0x181B9BE70", Slot = "6")]
	public TypeCode GetTypeCode()
	{
		return default(TypeCode);
	}

	[Token(Token = "0x6001167")]
	[Address(RVA = "0x1B9C610", Offset = "0x1B9AC10", VA = "0x181B9C610", Slot = "7")]
	private bool System_002EIConvertible_002EToBoolean(IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x6001168")]
	[Address(RVA = "0x1B9C6D0", Offset = "0x1B9ACD0", VA = "0x181B9C6D0", Slot = "8")]
	private char System_002EIConvertible_002EToChar(IFormatProvider provider)
	{
		return default(char);
	}

	[Token(Token = "0x6001169")]
	[Address(RVA = "0x1B9C970", Offset = "0x1B9AF70", VA = "0x181B9C970", Slot = "9")]
	private sbyte System_002EIConvertible_002EToSByte(IFormatProvider provider)
	{
		return default(sbyte);
	}

	[Token(Token = "0x600116A")]
	[Address(RVA = "0x1B9C670", Offset = "0x1B9AC70", VA = "0x181B9C670", Slot = "10")]
	private byte System_002EIConvertible_002EToByte(IFormatProvider provider)
	{
		return default(byte);
	}

	[Token(Token = "0x600116B")]
	[Address(RVA = "0x1B9C850", Offset = "0x1B9AE50", VA = "0x181B9C850", Slot = "11")]
	private short System_002EIConvertible_002EToInt16(IFormatProvider provider)
	{
		return default(short);
	}

	[Token(Token = "0x600116C")]
	[Address(RVA = "0x1B9CAD0", Offset = "0x1B9B0D0", VA = "0x181B9CAD0", Slot = "12")]
	private ushort System_002EIConvertible_002EToUInt16(IFormatProvider provider)
	{
		return default(ushort);
	}

	[Token(Token = "0x600116D")]
	[Address(RVA = "0x1B9C8B0", Offset = "0x1B9AEB0", VA = "0x181B9C8B0", Slot = "13")]
	private int System_002EIConvertible_002EToInt32(IFormatProvider provider)
	{
		return default(int);
	}

	[Token(Token = "0x600116E")]
	[Address(RVA = "0x1B9CB30", Offset = "0x1B9B130", VA = "0x181B9CB30", Slot = "14")]
	private uint System_002EIConvertible_002EToUInt32(IFormatProvider provider)
	{
		return default(uint);
	}

	[Token(Token = "0x600116F")]
	[Address(RVA = "0x1B9C910", Offset = "0x1B9AF10", VA = "0x181B9C910", Slot = "15")]
	private long System_002EIConvertible_002EToInt64(IFormatProvider provider)
	{
		return default(long);
	}

	[Token(Token = "0x6001170")]
	[Address(RVA = "0x1B9CB90", Offset = "0x1B9B190", VA = "0x181B9CB90", Slot = "16")]
	private ulong System_002EIConvertible_002EToUInt64(IFormatProvider provider)
	{
		return default(ulong);
	}

	[Token(Token = "0x6001171")]
	[Address(RVA = "0x1B9C9D0", Offset = "0x1B9AFD0", VA = "0x181B9C9D0", Slot = "17")]
	private float System_002EIConvertible_002EToSingle(IFormatProvider provider)
	{
		return default(float);
	}

	[Token(Token = "0x6001172")]
	[Address(RVA = "0x1B9C7F0", Offset = "0x1B9ADF0", VA = "0x181B9C7F0", Slot = "18")]
	private double System_002EIConvertible_002EToDouble(IFormatProvider provider)
	{
		return default(double);
	}

	[Token(Token = "0x6001173")]
	[Address(RVA = "0x72FD20", Offset = "0x72E320", VA = "0x18072FD20", Slot = "19")]
	private decimal System_002EIConvertible_002EToDecimal(IFormatProvider provider)
	{
		return 0m;
	}

	[Token(Token = "0x6001174")]
	[Address(RVA = "0x1B9C760", Offset = "0x1B9AD60", VA = "0x181B9C760", Slot = "20")]
	private DateTime System_002EIConvertible_002EToDateTime(IFormatProvider provider)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6001175")]
	[Address(RVA = "0x1B9CA30", Offset = "0x1B9B030", VA = "0x181B9CA30", Slot = "22")]
	private object System_002EIConvertible_002EToType(Type type, IFormatProvider provider)
	{
		return null;
	}
}
