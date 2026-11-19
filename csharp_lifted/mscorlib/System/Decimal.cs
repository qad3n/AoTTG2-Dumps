// ==================== AoTTG2 cross-reference ====================
// Type: System.Decimal
// Update status: unchanged since the previous dump
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
[Token(Token = "0x20001C1")]
public readonly struct Decimal : IFormattable, IComparable, IConvertible, IComparable<decimal>, IEquatable<decimal>, IDeserializationCallback, System.ISpanFormattable
{
	[StructLayout((LayoutKind)2)]
	[Token(Token = "0x20001C2")]
	private struct DecCalc
	{
		[Token(Token = "0x20001C3")]
		internal enum RoundingMode
		{
			[Token(Token = "0x40008CA")]
			ToEven,
			[Token(Token = "0x40008CB")]
			AwayFromZero,
			[Token(Token = "0x40008CC")]
			Truncate,
			[Token(Token = "0x40008CD")]
			Floor,
			[Token(Token = "0x40008CE")]
			Ceiling
		}

		[Token(Token = "0x20001C4")]
		private struct PowerOvfl
		{
			[Token(Token = "0x40008CF")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			public readonly uint Hi;

			[Token(Token = "0x40008D0")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
			public readonly ulong MidLo;

			[Token(Token = "0x6001177")]
			[Address(RVA = "0x552B290", Offset = "0x552A290", VA = "0x552B290")]
			public PowerOvfl(uint hi, uint mid, uint lo)
			{
			}
		}

		[StructLayout((LayoutKind)2)]
		[Token(Token = "0x20001C5")]
		private struct Buf12
		{
			[Token(Token = "0x40008D1")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			public uint U0;

			[Token(Token = "0x40008D2")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
			public uint U1;

			[Token(Token = "0x40008D3")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
			public uint U2;

			[Token(Token = "0x40008D4")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			private ulong ulo64LE;

			[Token(Token = "0x40008D5")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
			private ulong uhigh64LE;

			[Token(Token = "0x17000191")]
			public ulong Low64
			{
				[Token(Token = "0x6001178")]
				[Address(RVA = "0x5528710", Offset = "0x5527710", VA = "0x5528710")]
				get
				{
					return default(ulong);
				}
				[Token(Token = "0x6001179")]
				[Address(RVA = "0x5528720", Offset = "0x5527720", VA = "0x5528720")]
				set
				{
				}
			}

			[Token(Token = "0x17000192")]
			public ulong High64
			{
				[Token(Token = "0x600117A")]
				[Address(RVA = "0x55286F0", Offset = "0x55276F0", VA = "0x55286F0")]
				get
				{
					return default(ulong);
				}
				[Token(Token = "0x600117B")]
				[Address(RVA = "0x5528700", Offset = "0x5527700", VA = "0x5528700")]
				set
				{
				}
			}
		}

		[StructLayout((LayoutKind)2)]
		[Token(Token = "0x20001C6")]
		private struct Buf16
		{
			[Token(Token = "0x40008D6")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			public uint U0;

			[Token(Token = "0x40008D7")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
			public uint U1;

			[Token(Token = "0x40008D8")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
			public uint U2;

			[Token(Token = "0x40008D9")]
			[Il2CppDummyDll.FieldOffset(Offset = "0xC")]
			public uint U3;

			[Token(Token = "0x40008DA")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			private ulong ulo64LE;

			[Token(Token = "0x40008DB")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
			private ulong uhigh64LE;

			[Token(Token = "0x17000193")]
			public ulong Low64
			{
				[Token(Token = "0x600117C")]
				[Address(RVA = "0x5528C50", Offset = "0x5527C50", VA = "0x5528C50")]
				get
				{
					return default(ulong);
				}
				[Token(Token = "0x600117D")]
				[Address(RVA = "0x5528C60", Offset = "0x5527C60", VA = "0x5528C60")]
				set
				{
				}
			}

			[Token(Token = "0x17000194")]
			public ulong High64
			{
				[Token(Token = "0x600117E")]
				[Address(RVA = "0x5528C40", Offset = "0x5527C40", VA = "0x5528C40")]
				get
				{
					return default(ulong);
				}
				[Token(Token = "0x600117F")]
				[Address(RVA = "0x552A150", Offset = "0x5529150", VA = "0x552A150")]
				set
				{
				}
			}
		}

		[StructLayout((LayoutKind)2)]
		[Token(Token = "0x20001C7")]
		private struct Buf24
		{
			[Token(Token = "0x40008DC")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			public uint U0;

			[Token(Token = "0x40008DD")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
			public uint U1;

			[Token(Token = "0x40008DE")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
			public uint U2;

			[Token(Token = "0x40008DF")]
			[Il2CppDummyDll.FieldOffset(Offset = "0xC")]
			public uint U3;

			[Token(Token = "0x40008E0")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
			public uint U4;

			[Token(Token = "0x40008E1")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
			public uint U5;

			[Token(Token = "0x40008E2")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			private ulong ulo64LE;

			[Token(Token = "0x40008E3")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
			private ulong umid64LE;

			[Token(Token = "0x40008E4")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
			private ulong uhigh64LE;

			[Token(Token = "0x17000195")]
			public ulong Low64
			{
				[Token(Token = "0x6001180")]
				[Address(RVA = "0x5529F40", Offset = "0x5528F40", VA = "0x5529F40")]
				get
				{
					return default(ulong);
				}
				[Token(Token = "0x6001181")]
				[Address(RVA = "0x5529F20", Offset = "0x5528F20", VA = "0x5529F20")]
				set
				{
				}
			}

			[Token(Token = "0x17000196")]
			public ulong Mid64
			{
				[Token(Token = "0x6001182")]
				[Address(RVA = "0x5529F30", Offset = "0x5528F30", VA = "0x5529F30")]
				set
				{
				}
			}

			[Token(Token = "0x17000197")]
			public ulong High64
			{
				[Token(Token = "0x6001183")]
				[Address(RVA = "0x552A140", Offset = "0x5529140", VA = "0x552A140")]
				set
				{
				}
			}
		}

		[Token(Token = "0x20001C8")]
		private struct Buf28
		{
			[Token(Token = "0x40008E5")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			public Buf24 Buf24;

			[Token(Token = "0x40008E6")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
			public uint U6;
		}

		[Token(Token = "0x40008C0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private uint uflags;

		[Token(Token = "0x40008C1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
		private uint uhi;

		[Token(Token = "0x40008C2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		private uint ulo;

		[Token(Token = "0x40008C3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xC")]
		private uint umid;

		[Token(Token = "0x40008C4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		private ulong ulomidLE;

		[Token(Token = "0x40008C5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static readonly uint[] s_powers10;

		[Token(Token = "0x40008C6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		private static readonly ulong[] s_ulongPowers10;

		[Token(Token = "0x40008C7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private static readonly double[] s_doublePowers10;

		[Token(Token = "0x40008C8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private static readonly PowerOvfl[] PowerOvflValues;

		[Token(Token = "0x1700018C")]
		private uint High
		{
			[Token(Token = "0x600114E")]
			[Address(RVA = "0x5528450", Offset = "0x5527450", VA = "0x5528450")]
			get
			{
				return default(uint);
			}
			[Token(Token = "0x600114F")]
			[Address(RVA = "0x5528460", Offset = "0x5527460", VA = "0x5528460")]
			set
			{
			}
		}

		[Token(Token = "0x1700018D")]
		private uint Low
		{
			[Token(Token = "0x6001150")]
			[Address(RVA = "0x5528470", Offset = "0x5527470", VA = "0x5528470")]
			get
			{
				return default(uint);
			}
			[Token(Token = "0x6001151")]
			[Address(RVA = "0x5528480", Offset = "0x5527480", VA = "0x5528480")]
			set
			{
			}
		}

		[Token(Token = "0x1700018E")]
		private uint Mid
		{
			[Token(Token = "0x6001152")]
			[Address(RVA = "0x5528490", Offset = "0x5527490", VA = "0x5528490")]
			get
			{
				return default(uint);
			}
			[Token(Token = "0x6001153")]
			[Address(RVA = "0x55284A0", Offset = "0x55274A0", VA = "0x55284A0")]
			set
			{
			}
		}

		[Token(Token = "0x1700018F")]
		private bool IsNegative
		{
			[Token(Token = "0x6001154")]
			[Address(RVA = "0x55284B0", Offset = "0x55274B0", VA = "0x55284B0")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000190")]
		private ulong Low64
		{
			[Token(Token = "0x6001155")]
			[Address(RVA = "0x55284C0", Offset = "0x55274C0", VA = "0x55284C0")]
			get
			{
				return default(ulong);
			}
			[Token(Token = "0x6001156")]
			[Address(RVA = "0x55284D0", Offset = "0x55274D0", VA = "0x55284D0")]
			set
			{
			}
		}

		[Token(Token = "0x6001157")]
		[Address(RVA = "0x55284E0", Offset = "0x55274E0", VA = "0x55284E0")]
		private static uint GetExponent(float f)
		{
			return default(uint);
		}

		[Token(Token = "0x6001158")]
		[Address(RVA = "0x55284F0", Offset = "0x55274F0", VA = "0x55284F0")]
		private static uint GetExponent(double d)
		{
			return default(uint);
		}

		[Token(Token = "0x6001159")]
		[Address(RVA = "0x5528500", Offset = "0x5527500", VA = "0x5528500")]
		private static ulong UInt32x32To64(uint a, uint b)
		{
			return default(ulong);
		}

		[Token(Token = "0x600115A")]
		[Address(RVA = "0x5528510", Offset = "0x5527510", VA = "0x5528510")]
		private static void UInt64x64To128(ulong a, ulong b, ref DecCalc result)
		{
		}

		[Token(Token = "0x600115B")]
		[Address(RVA = "0x5528650", Offset = "0x5527650", VA = "0x5528650")]
		private static uint Div96By32(ref Buf12 bufNum, uint den)
		{
			return default(uint);
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600115C")]
		[Address(RVA = "0x5528730", Offset = "0x5527730", VA = "0x5528730")]
		private static bool Div96ByConst(ref ulong high64, ref uint low, uint pow)
		{
			return default(bool);
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600115D")]
		[Address(RVA = "0x55287A0", Offset = "0x55277A0", VA = "0x55287A0")]
		private static void Unscale(ref uint low, ref ulong high64, ref int scale)
		{
		}

		[Token(Token = "0x600115E")]
		[Address(RVA = "0x55289F0", Offset = "0x55279F0", VA = "0x55289F0")]
		private static uint Div96By64(ref Buf12 bufNum, ulong den)
		{
			return default(uint);
		}

		[Token(Token = "0x600115F")]
		[Address(RVA = "0x5528B10", Offset = "0x5527B10", VA = "0x5528B10")]
		private static uint Div128By96(ref Buf16 bufNum, ref Buf12 bufDen)
		{
			return default(uint);
		}

		[Token(Token = "0x6001160")]
		[Address(RVA = "0x5528C70", Offset = "0x5527C70", VA = "0x5528C70")]
		private static uint IncreaseScale(ref Buf12 bufNum, uint power)
		{
			return default(uint);
		}

		[Token(Token = "0x6001161")]
		[Address(RVA = "0x5528CF0", Offset = "0x5527CF0", VA = "0x5528CF0")]
		private static void IncreaseScale64(ref Buf12 bufNum, uint power)
		{
		}

		[Token(Token = "0x6001162")]
		[Address(RVA = "0x5528D50", Offset = "0x5527D50", VA = "0x5528D50")]
		private unsafe static int ScaleResult(Buf24* bufRes, uint hiRes, int scale)
		{
			return default(int);
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001163")]
		[Address(RVA = "0x5529B70", Offset = "0x5528B70", VA = "0x5529B70")]
		private unsafe static uint DivByConst(uint* result, uint hiRes, out uint quotient, out uint remainder, uint power)
		{
			return default(uint);
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001164")]
		[Address(RVA = "0x5529BF0", Offset = "0x5528BF0", VA = "0x5529BF0")]
		private static int LeadingZeroCount(uint value)
		{
			return default(int);
		}

		[Token(Token = "0x6001165")]
		[Address(RVA = "0x5529C50", Offset = "0x5528C50", VA = "0x5529C50")]
		private static int OverflowUnscale(ref Buf12 bufQuo, int scale, bool sticky)
		{
			return default(int);
		}

		[Token(Token = "0x6001166")]
		[Address(RVA = "0x5529D80", Offset = "0x5528D80", VA = "0x5529D80")]
		private static int SearchScale(ref Buf12 bufQuo, int scale)
		{
			return default(int);
		}

		[Token(Token = "0x6001167")]
		[Address(RVA = "0x5529D60", Offset = "0x5528D60", VA = "0x5529D60")]
		private static bool Add32To96(ref Buf12 bufNum, uint value)
		{
			return default(bool);
		}

		[Token(Token = "0x6001168")]
		[Address(RVA = "0x5522610", Offset = "0x5521610", VA = "0x5522610")]
		internal static void DecAddSub(ref DecCalc d1, ref DecCalc d2, bool sign)
		{
		}

		[Token(Token = "0x6001169")]
		[Address(RVA = "0x5522DF0", Offset = "0x5521DF0", VA = "0x5522DF0")]
		internal static int VarDecCmp(in decimal d1, in decimal d2)
		{
			return default(int);
		}

		[Token(Token = "0x600116A")]
		[Address(RVA = "0x5529F50", Offset = "0x5528F50", VA = "0x5529F50")]
		private static int VarDecCmpSub(in decimal d1, in decimal d2)
		{
			return default(int);
		}

		[Token(Token = "0x600116B")]
		[Address(RVA = "0x5524ED0", Offset = "0x5523ED0", VA = "0x5524ED0")]
		internal static void VarDecMul(ref DecCalc d1, ref DecCalc d2)
		{
		}

		[Token(Token = "0x600116C")]
		[Address(RVA = "0x55219B0", Offset = "0x55209B0", VA = "0x55219B0")]
		internal static void VarDecFromR4(float input, out DecCalc result)
		{
		}

		[Token(Token = "0x600116D")]
		[Address(RVA = "0x5521E90", Offset = "0x5520E90", VA = "0x5521E90")]
		internal static void VarDecFromR8(double input, out DecCalc result)
		{
		}

		[Token(Token = "0x600116E")]
		[Address(RVA = "0x55269E0", Offset = "0x55259E0", VA = "0x55269E0")]
		internal static float VarR4FromDec(in decimal value)
		{
			return default(float);
		}

		[Token(Token = "0x600116F")]
		[Address(RVA = "0x55262D0", Offset = "0x55252D0", VA = "0x55262D0")]
		internal static double VarR8FromDec(in decimal value)
		{
			return default(double);
		}

		[Token(Token = "0x6001170")]
		[Address(RVA = "0x5524590", Offset = "0x5523590", VA = "0x5524590")]
		internal static int GetHashCode(in decimal d)
		{
			return default(int);
		}

		[Token(Token = "0x6001171")]
		[Address(RVA = "0x5523100", Offset = "0x5522100", VA = "0x5523100")]
		internal static void VarDecDiv(ref DecCalc d1, ref DecCalc d2)
		{
		}

		[Token(Token = "0x6001172")]
		[Address(RVA = "0x55276C0", Offset = "0x55266C0", VA = "0x55276C0")]
		internal static void VarDecMod(ref DecCalc d1, ref DecCalc d2)
		{
		}

		[Token(Token = "0x6001173")]
		[Address(RVA = "0x552A160", Offset = "0x5529160", VA = "0x552A160")]
		private static void VarDecModFull(ref DecCalc d1, ref DecCalc d2, int scale)
		{
		}

		[Token(Token = "0x6001174")]
		[Address(RVA = "0x5525690", Offset = "0x5524690", VA = "0x5525690")]
		internal static void InternalRound(ref DecCalc d, uint scale, RoundingMode mode)
		{
		}

		[Token(Token = "0x6001175")]
		[Address(RVA = "0x5521800", Offset = "0x5520800", VA = "0x5521800")]
		internal static uint DecDivMod1E9(ref DecCalc value)
		{
			return default(uint);
		}
	}

	[Token(Token = "0x40008B6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public const decimal Zero = 0m;

	[Token(Token = "0x40008B7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public const decimal One = 1m;

	[Token(Token = "0x40008B8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	public const decimal MinusOne = -1m;

	[Token(Token = "0x40008B9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	public const decimal MaxValue = 79228162514264337593543950335m;

	[Token(Token = "0x40008BA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	public const decimal MinValue = -79228162514264337593543950335m;

	[Token(Token = "0x40008BB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly int flags;

	[Token(Token = "0x40008BC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
	private readonly int hi;

	[Token(Token = "0x40008BD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private readonly int lo;

	[Token(Token = "0x40008BE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC")]
	private readonly int mid;

	[NonSerialized]
	[Token(Token = "0x40008BF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private readonly ulong ulomidLE;

	[Token(Token = "0x17000186")]
	internal uint High
	{
		[Token(Token = "0x60010E7")]
		[Address(RVA = "0x5521670", Offset = "0x5520670", VA = "0x5521670")]
		get
		{
			return default(uint);
		}
	}

	[Token(Token = "0x17000187")]
	internal uint Low
	{
		[Token(Token = "0x60010E8")]
		[Address(RVA = "0x5521680", Offset = "0x5520680", VA = "0x5521680")]
		get
		{
			return default(uint);
		}
	}

	[Token(Token = "0x17000188")]
	internal uint Mid
	{
		[Token(Token = "0x60010E9")]
		[Address(RVA = "0x5521690", Offset = "0x5520690", VA = "0x5521690")]
		get
		{
			return default(uint);
		}
	}

	[Token(Token = "0x17000189")]
	internal bool IsNegative
	{
		[Token(Token = "0x60010EA")]
		[Address(RVA = "0x55216A0", Offset = "0x55206A0", VA = "0x55216A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700018A")]
	internal int Scale
	{
		[Token(Token = "0x60010EB")]
		[Address(RVA = "0x55216B0", Offset = "0x55206B0", VA = "0x55216B0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700018B")]
	private ulong Low64
	{
		[Token(Token = "0x60010EC")]
		[Address(RVA = "0x55216C0", Offset = "0x55206C0", VA = "0x55216C0")]
		get
		{
			return default(ulong);
		}
	}

	[Token(Token = "0x60010ED")]
	[Address(RVA = "0x55216F0", Offset = "0x55206F0", VA = "0x55216F0")]
	private unsafe static ref DecCalc AsMutable(ref decimal d)
	{
		return ref *(DecCalc*)null;
	}

	[Token(Token = "0x60010EE")]
	[Address(RVA = "0x5521700", Offset = "0x5520700", VA = "0x5521700")]
	internal static uint DecDivMod1E9(ref decimal value)
	{
		return default(uint);
	}

	[Token(Token = "0x60010EF")]
	[Address(RVA = "0x5521860", Offset = "0x5520860", VA = "0x5521860")]
	public Decimal(int value)
	{
	}

	[Token(Token = "0x60010F0")]
	[Address(RVA = "0x55218A0", Offset = "0x55208A0", VA = "0x55218A0")]
	[CLSCompliant(false)]
	public Decimal(uint value)
	{
	}

	[Token(Token = "0x60010F1")]
	[Address(RVA = "0x55218C0", Offset = "0x55208C0", VA = "0x55218C0")]
	public Decimal(long value)
	{
	}

	[Token(Token = "0x60010F2")]
	[Address(RVA = "0x55218F0", Offset = "0x55208F0", VA = "0x55218F0")]
	[CLSCompliant(false)]
	public Decimal(ulong value)
	{
	}

	[Token(Token = "0x60010F3")]
	[Address(RVA = "0x5521900", Offset = "0x5520900", VA = "0x5521900")]
	public Decimal(float value)
	{
	}

	[Token(Token = "0x60010F4")]
	[Address(RVA = "0x5521DE0", Offset = "0x5520DE0", VA = "0x5521DE0")]
	public Decimal(double value)
	{
	}

	[Token(Token = "0x60010F5")]
	[Address(RVA = "0x55222B0", Offset = "0x55212B0", VA = "0x55222B0")]
	private static bool IsValid(int flags)
	{
		return default(bool);
	}

	[Token(Token = "0x60010F6")]
	[Address(RVA = "0x55222D0", Offset = "0x55212D0", VA = "0x55222D0")]
	public Decimal(int[] bits)
	{
	}

	[Token(Token = "0x60010F7")]
	[Address(RVA = "0x55223F0", Offset = "0x55213F0", VA = "0x55223F0")]
	public Decimal(int lo, int mid, int hi, bool isNegative, byte scale)
	{
	}

	[Token(Token = "0x60010F8")]
	[Address(RVA = "0x5522480", Offset = "0x5521480", VA = "0x5522480", Slot = "25")]
	private void System_002ERuntime_002ESerialization_002EIDeserializationCallback_002EOnDeserialization(object sender)
	{
	}

	[Token(Token = "0x60010F9")]
	[Address(RVA = "0x5522520", Offset = "0x5521520", VA = "0x5522520")]
	private Decimal(in decimal d, int flags)
	{
	}

	[Token(Token = "0x60010FA")]
	[Address(RVA = "0x5522530", Offset = "0x5521530", VA = "0x5522530")]
	internal static decimal Abs(ref decimal d)
	{
		return 0m;
	}

	[Token(Token = "0x60010FB")]
	[Address(RVA = "0x5522550", Offset = "0x5521550", VA = "0x5522550")]
	public static decimal Add(decimal d1, decimal d2)
	{
		return 0m;
	}

	[Token(Token = "0x60010FC")]
	[Address(RVA = "0x5522D90", Offset = "0x5521D90", VA = "0x5522D90")]
	public static int Compare(decimal d1, decimal d2)
	{
		return default(int);
	}

	[Token(Token = "0x60010FD")]
	[Address(RVA = "0x5522F00", Offset = "0x5521F00", VA = "0x5522F00", Slot = "5")]
	public int CompareTo(object value)
	{
		return default(int);
	}

	[Token(Token = "0x60010FE")]
	[Address(RVA = "0x5522FE0", Offset = "0x5521FE0", VA = "0x5522FE0", Slot = "23")]
	public int CompareTo(decimal value)
	{
		return default(int);
	}

	[Token(Token = "0x60010FF")]
	[Address(RVA = "0x5523040", Offset = "0x5522040", VA = "0x5523040")]
	public static decimal Divide(decimal d1, decimal d2)
	{
		return 0m;
	}

	[Token(Token = "0x6001100")]
	[Address(RVA = "0x5524430", Offset = "0x5523430", VA = "0x5524430", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6001101")]
	[Address(RVA = "0x55244D0", Offset = "0x55234D0", VA = "0x55244D0", Slot = "24")]
	public bool Equals(decimal value)
	{
		return default(bool);
	}

	[Token(Token = "0x6001102")]
	[Address(RVA = "0x5524530", Offset = "0x5523530", VA = "0x5524530", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6001103")]
	[Address(RVA = "0x55246E0", Offset = "0x55236E0", VA = "0x55246E0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6001104")]
	[Address(RVA = "0x5524770", Offset = "0x5523770", VA = "0x5524770")]
	public string ToString(string format)
	{
		return null;
	}

	[Token(Token = "0x6001105")]
	[Address(RVA = "0x5524830", Offset = "0x5523830", VA = "0x5524830", Slot = "21")]
	public string ToString(IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x6001106")]
	[Address(RVA = "0x55248D0", Offset = "0x55238D0", VA = "0x55248D0", Slot = "4")]
	public string ToString(string format, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x6001107")]
	[Address(RVA = "0x55249A0", Offset = "0x55239A0", VA = "0x55249A0", Slot = "26")]
	public bool TryFormat(Span<char> destination, out int charsWritten, [Optional] ReadOnlySpan<char> format, [Optional] IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x6001108")]
	[Address(RVA = "0x5524A60", Offset = "0x5523A60", VA = "0x5524A60")]
	public static decimal Parse(string s, IFormatProvider provider)
	{
		return 0m;
	}

	[Token(Token = "0x6001109")]
	[Address(RVA = "0x5524B30", Offset = "0x5523B30", VA = "0x5524B30")]
	public static decimal Parse(string s, NumberStyles style, IFormatProvider provider)
	{
		return 0m;
	}

	[Token(Token = "0x600110A")]
	[Address(RVA = "0x5524C00", Offset = "0x5523C00", VA = "0x5524C00")]
	public static bool TryParse(string s, NumberStyles style, IFormatProvider provider, out decimal result)
	{
		return default(bool);
	}

	[Token(Token = "0x600110B")]
	[Address(RVA = "0x5524CD0", Offset = "0x5523CD0", VA = "0x5524CD0")]
	public static int[] GetBits(decimal d)
	{
		return null;
	}

	[Token(Token = "0x600110C")]
	[Address(RVA = "0x5524D50", Offset = "0x5523D50", VA = "0x5524D50")]
	internal unsafe static ref decimal Max(ref decimal d1, ref decimal d2)
	{
		return ref *(decimal*)null;
	}

	[Token(Token = "0x600110D")]
	[Address(RVA = "0x5524DB0", Offset = "0x5523DB0", VA = "0x5524DB0")]
	internal unsafe static ref decimal Min(ref decimal d1, ref decimal d2)
	{
		return ref *(decimal*)null;
	}

	[Token(Token = "0x600110E")]
	[Address(RVA = "0x5524E10", Offset = "0x5523E10", VA = "0x5524E10")]
	public static decimal Multiply(decimal d1, decimal d2)
	{
		return 0m;
	}

	[Token(Token = "0x600110F")]
	[Address(RVA = "0x5525450", Offset = "0x5524450", VA = "0x5525450")]
	public static decimal Negate(decimal d)
	{
		return 0m;
	}

	[Token(Token = "0x6001110")]
	[Address(RVA = "0x5525460", Offset = "0x5524460", VA = "0x5525460")]
	public static decimal Round(decimal d, int decimals)
	{
		return 0m;
	}

	[Token(Token = "0x6001111")]
	[Address(RVA = "0x55254C0", Offset = "0x55244C0", VA = "0x55254C0")]
	private static decimal Round(ref decimal d, int decimals, MidpointRounding mode)
	{
		return 0m;
	}

	[Token(Token = "0x6001112")]
	[Address(RVA = "0x5525A20", Offset = "0x5524A20", VA = "0x5525A20")]
	public static decimal Subtract(decimal d1, decimal d2)
	{
		return 0m;
	}

	[Token(Token = "0x6001113")]
	[Address(RVA = "0x5525AE0", Offset = "0x5524AE0", VA = "0x5525AE0")]
	public static byte ToByte(decimal value)
	{
		return default(byte);
	}

	[Token(Token = "0x6001114")]
	[Address(RVA = "0x5525DF0", Offset = "0x5524DF0", VA = "0x5525DF0")]
	[CLSCompliant(false)]
	public static sbyte ToSByte(decimal value)
	{
		return default(sbyte);
	}

	[Token(Token = "0x6001115")]
	[Address(RVA = "0x5526100", Offset = "0x5525100", VA = "0x5526100")]
	public static short ToInt16(decimal value)
	{
		return default(short);
	}

	[Token(Token = "0x6001116")]
	[Address(RVA = "0x5526250", Offset = "0x5525250", VA = "0x5526250")]
	public static double ToDouble(decimal d)
	{
		return default(double);
	}

	[Token(Token = "0x6001117")]
	[Address(RVA = "0x5525F40", Offset = "0x5524F40", VA = "0x5525F40")]
	public static int ToInt32(decimal d)
	{
		return default(int);
	}

	[Token(Token = "0x6001118")]
	[Address(RVA = "0x5526420", Offset = "0x5525420", VA = "0x5526420")]
	public static long ToInt64(decimal d)
	{
		return default(long);
	}

	[Token(Token = "0x6001119")]
	[Address(RVA = "0x5526600", Offset = "0x5525600", VA = "0x5526600")]
	[CLSCompliant(false)]
	public static ushort ToUInt16(decimal value)
	{
		return default(ushort);
	}

	[Token(Token = "0x600111A")]
	[Address(RVA = "0x5525C30", Offset = "0x5524C30", VA = "0x5525C30")]
	[CLSCompliant(false)]
	public static uint ToUInt32(decimal d)
	{
		return default(uint);
	}

	[Token(Token = "0x600111B")]
	[Address(RVA = "0x5526750", Offset = "0x5525750", VA = "0x5526750")]
	[CLSCompliant(false)]
	public static ulong ToUInt64(decimal d)
	{
		return default(ulong);
	}

	[Token(Token = "0x600111C")]
	[Address(RVA = "0x5526930", Offset = "0x5525930", VA = "0x5526930")]
	public static float ToSingle(decimal d)
	{
		return default(float);
	}

	[Token(Token = "0x600111D")]
	[Address(RVA = "0x5526A30", Offset = "0x5525A30", VA = "0x5526A30")]
	public static decimal Truncate(decimal d)
	{
		return 0m;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600111E")]
	[Address(RVA = "0x5526B40", Offset = "0x5525B40", VA = "0x5526B40")]
	private static void Truncate(ref decimal d)
	{
	}

	[Token(Token = "0x600111F")]
	[Address(RVA = "0x5526BE0", Offset = "0x5525BE0", VA = "0x5526BE0")]
	public static implicit operator decimal(byte value)
	{
		return 0m;
	}

	[Token(Token = "0x6001120")]
	[Address(RVA = "0x5526BF0", Offset = "0x5525BF0", VA = "0x5526BF0")]
	[CLSCompliant(false)]
	public static implicit operator decimal(sbyte value)
	{
		return 0m;
	}

	[Token(Token = "0x6001121")]
	[Address(RVA = "0x5526C10", Offset = "0x5525C10", VA = "0x5526C10")]
	public static implicit operator decimal(short value)
	{
		return 0m;
	}

	[Token(Token = "0x6001122")]
	[Address(RVA = "0x5526C30", Offset = "0x5525C30", VA = "0x5526C30")]
	[CLSCompliant(false)]
	public static implicit operator decimal(ushort value)
	{
		return 0m;
	}

	[Token(Token = "0x6001123")]
	[Address(RVA = "0x5526C40", Offset = "0x5525C40", VA = "0x5526C40")]
	public static implicit operator decimal(char value)
	{
		return 0m;
	}

	[Token(Token = "0x6001124")]
	[Address(RVA = "0x5526C50", Offset = "0x5525C50", VA = "0x5526C50")]
	public static implicit operator decimal(int value)
	{
		return 0m;
	}

	[Token(Token = "0x6001125")]
	[Address(RVA = "0x5526C60", Offset = "0x5525C60", VA = "0x5526C60")]
	[CLSCompliant(false)]
	public static implicit operator decimal(uint value)
	{
		return 0m;
	}

	[Token(Token = "0x6001126")]
	[Address(RVA = "0x5526C70", Offset = "0x5525C70", VA = "0x5526C70")]
	public static implicit operator decimal(long value)
	{
		return 0m;
	}

	[Token(Token = "0x6001127")]
	[Address(RVA = "0x5526C90", Offset = "0x5525C90", VA = "0x5526C90")]
	[CLSCompliant(false)]
	public static implicit operator decimal(ulong value)
	{
		return 0m;
	}

	[Token(Token = "0x6001128")]
	[Address(RVA = "0x5526CA0", Offset = "0x5525CA0", VA = "0x5526CA0")]
	public static explicit operator decimal(float value)
	{
		return 0m;
	}

	[Token(Token = "0x6001129")]
	[Address(RVA = "0x5526D60", Offset = "0x5525D60", VA = "0x5526D60")]
	public static explicit operator decimal(double value)
	{
		return 0m;
	}

	[Token(Token = "0x600112A")]
	[Address(RVA = "0x5526E10", Offset = "0x5525E10", VA = "0x5526E10")]
	public static explicit operator int(decimal value)
	{
		return default(int);
	}

	[Token(Token = "0x600112B")]
	[Address(RVA = "0x5526E60", Offset = "0x5525E60", VA = "0x5526E60")]
	public static explicit operator long(decimal value)
	{
		return default(long);
	}

	[Token(Token = "0x600112C")]
	[Address(RVA = "0x5526EB0", Offset = "0x5525EB0", VA = "0x5526EB0")]
	[CLSCompliant(false)]
	public static explicit operator ulong(decimal value)
	{
		return default(ulong);
	}

	[Token(Token = "0x600112D")]
	[Address(RVA = "0x5526F00", Offset = "0x5525F00", VA = "0x5526F00")]
	public static explicit operator float(decimal value)
	{
		return default(float);
	}

	[Token(Token = "0x600112E")]
	[Address(RVA = "0x5527040", Offset = "0x5526040", VA = "0x5527040")]
	public static explicit operator double(decimal value)
	{
		return default(double);
	}

	[Token(Token = "0x600112F")]
	[Address(RVA = "0x5527110", Offset = "0x5526110", VA = "0x5527110")]
	public static decimal operator -(decimal d)
	{
		return 0m;
	}

	[Token(Token = "0x6001130")]
	[Address(RVA = "0x5527120", Offset = "0x5526120", VA = "0x5527120")]
	public static decimal operator ++(decimal d)
	{
		return 0m;
	}

	[Token(Token = "0x6001131")]
	[Address(RVA = "0x5527210", Offset = "0x5526210", VA = "0x5527210")]
	public static decimal operator --(decimal d)
	{
		return 0m;
	}

	[Token(Token = "0x6001132")]
	[Address(RVA = "0x5527300", Offset = "0x5526300", VA = "0x5527300")]
	public static decimal operator +(decimal d1, decimal d2)
	{
		return 0m;
	}

	[Token(Token = "0x6001133")]
	[Address(RVA = "0x55273C0", Offset = "0x55263C0", VA = "0x55273C0")]
	public static decimal operator -(decimal d1, decimal d2)
	{
		return 0m;
	}

	[Token(Token = "0x6001134")]
	[Address(RVA = "0x5527480", Offset = "0x5526480", VA = "0x5527480")]
	public static decimal operator *(decimal d1, decimal d2)
	{
		return 0m;
	}

	[Token(Token = "0x6001135")]
	[Address(RVA = "0x5527540", Offset = "0x5526540", VA = "0x5527540")]
	public static decimal operator /(decimal d1, decimal d2)
	{
		return 0m;
	}

	[Token(Token = "0x6001136")]
	[Address(RVA = "0x5527600", Offset = "0x5526600", VA = "0x5527600")]
	public static decimal operator %(decimal d1, decimal d2)
	{
		return 0m;
	}

	[Token(Token = "0x6001137")]
	[Address(RVA = "0x5527B50", Offset = "0x5526B50", VA = "0x5527B50")]
	public static bool operator ==(decimal d1, decimal d2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001138")]
	[Address(RVA = "0x5527BC0", Offset = "0x5526BC0", VA = "0x5527BC0")]
	public static bool operator !=(decimal d1, decimal d2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001139")]
	[Address(RVA = "0x5527C30", Offset = "0x5526C30", VA = "0x5527C30")]
	public static bool operator <(decimal d1, decimal d2)
	{
		return default(bool);
	}

	[Token(Token = "0x600113A")]
	[Address(RVA = "0x5527CA0", Offset = "0x5526CA0", VA = "0x5527CA0")]
	public static bool operator <=(decimal d1, decimal d2)
	{
		return default(bool);
	}

	[Token(Token = "0x600113B")]
	[Address(RVA = "0x5527D10", Offset = "0x5526D10", VA = "0x5527D10")]
	public static bool operator >(decimal d1, decimal d2)
	{
		return default(bool);
	}

	[Token(Token = "0x600113C")]
	[Address(RVA = "0x5527D80", Offset = "0x5526D80", VA = "0x5527D80")]
	public static bool operator >=(decimal d1, decimal d2)
	{
		return default(bool);
	}

	[Token(Token = "0x600113D")]
	[Address(RVA = "0x5527DF0", Offset = "0x5526DF0", VA = "0x5527DF0", Slot = "6")]
	public TypeCode GetTypeCode()
	{
		return default(TypeCode);
	}

	[Token(Token = "0x600113E")]
	[Address(RVA = "0x5527E00", Offset = "0x5526E00", VA = "0x5527E00", Slot = "7")]
	private bool System_002EIConvertible_002EToBoolean(IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x600113F")]
	[Address(RVA = "0x5527E60", Offset = "0x5526E60", VA = "0x5527E60", Slot = "8")]
	private char System_002EIConvertible_002EToChar(IFormatProvider provider)
	{
		return default(char);
	}

	[Token(Token = "0x6001140")]
	[Address(RVA = "0x5527EE0", Offset = "0x5526EE0", VA = "0x5527EE0", Slot = "9")]
	private sbyte System_002EIConvertible_002EToSByte(IFormatProvider provider)
	{
		return default(sbyte);
	}

	[Token(Token = "0x6001141")]
	[Address(RVA = "0x5527F40", Offset = "0x5526F40", VA = "0x5527F40", Slot = "10")]
	private byte System_002EIConvertible_002EToByte(IFormatProvider provider)
	{
		return default(byte);
	}

	[Token(Token = "0x6001142")]
	[Address(RVA = "0x5527FA0", Offset = "0x5526FA0", VA = "0x5527FA0", Slot = "11")]
	private short System_002EIConvertible_002EToInt16(IFormatProvider provider)
	{
		return default(short);
	}

	[Token(Token = "0x6001143")]
	[Address(RVA = "0x5528000", Offset = "0x5527000", VA = "0x5528000", Slot = "12")]
	private ushort System_002EIConvertible_002EToUInt16(IFormatProvider provider)
	{
		return default(ushort);
	}

	[Token(Token = "0x6001144")]
	[Address(RVA = "0x5528060", Offset = "0x5527060", VA = "0x5528060", Slot = "13")]
	private int System_002EIConvertible_002EToInt32(IFormatProvider provider)
	{
		return default(int);
	}

	[Token(Token = "0x6001145")]
	[Address(RVA = "0x55280C0", Offset = "0x55270C0", VA = "0x55280C0", Slot = "14")]
	private uint System_002EIConvertible_002EToUInt32(IFormatProvider provider)
	{
		return default(uint);
	}

	[Token(Token = "0x6001146")]
	[Address(RVA = "0x5528120", Offset = "0x5527120", VA = "0x5528120", Slot = "15")]
	private long System_002EIConvertible_002EToInt64(IFormatProvider provider)
	{
		return default(long);
	}

	[Token(Token = "0x6001147")]
	[Address(RVA = "0x5528180", Offset = "0x5527180", VA = "0x5528180", Slot = "16")]
	private ulong System_002EIConvertible_002EToUInt64(IFormatProvider provider)
	{
		return default(ulong);
	}

	[Token(Token = "0x6001148")]
	[Address(RVA = "0x55281E0", Offset = "0x55271E0", VA = "0x55281E0", Slot = "17")]
	private float System_002EIConvertible_002EToSingle(IFormatProvider provider)
	{
		return default(float);
	}

	[Token(Token = "0x6001149")]
	[Address(RVA = "0x5528240", Offset = "0x5527240", VA = "0x5528240", Slot = "18")]
	private double System_002EIConvertible_002EToDouble(IFormatProvider provider)
	{
		return default(double);
	}

	[Token(Token = "0x600114A")]
	[Address(RVA = "0x55282A0", Offset = "0x55272A0", VA = "0x55282A0", Slot = "19")]
	private decimal System_002EIConvertible_002EToDecimal(IFormatProvider provider)
	{
		return 0m;
	}

	[Token(Token = "0x600114B")]
	[Address(RVA = "0x55282B0", Offset = "0x55272B0", VA = "0x55282B0", Slot = "20")]
	private DateTime System_002EIConvertible_002EToDateTime(IFormatProvider provider)
	{
		return default(DateTime);
	}

	[Token(Token = "0x600114C")]
	[Address(RVA = "0x5528330", Offset = "0x5527330", VA = "0x5528330", Slot = "22")]
	private object System_002EIConvertible_002EToType(Type type, IFormatProvider provider)
	{
		return null;
	}
}
