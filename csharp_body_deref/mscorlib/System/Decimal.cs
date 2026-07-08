using System.Globalization;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[StructLayout((LayoutKind)2)]
[Token(Token = "0x20001BE")]
public readonly struct Decimal : IFormattable, IComparable, IConvertible, IComparable<decimal>, IEquatable<decimal>, IDeserializationCallback, System.ISpanFormattable
{
	[StructLayout((LayoutKind)2)]
	[Token(Token = "0x20001BF")]
	private struct DecCalc
	{
		[Token(Token = "0x20001C0")]
		internal enum RoundingMode
		{
			[Token(Token = "0x400090B")]
			ToEven,
			[Token(Token = "0x400090C")]
			AwayFromZero,
			[Token(Token = "0x400090D")]
			Truncate,
			[Token(Token = "0x400090E")]
			Floor,
			[Token(Token = "0x400090F")]
			Ceiling
		}

		[Token(Token = "0x20001C1")]
		private struct PowerOvfl
		{
			[Token(Token = "0x4000910")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			public readonly uint Hi;

			[Token(Token = "0x4000911")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
			public readonly ulong MidLo;

			[Token(Token = "0x6001147")]
			[Address(RVA = "0x50423B0", Offset = "0x50423B0", VA = "0x50423B0")]
			public PowerOvfl(uint hi, uint mid, uint lo)
			{
			}
		}

		[StructLayout((LayoutKind)2)]
		[Token(Token = "0x20001C2")]
		private struct Buf12
		{
			[Token(Token = "0x4000912")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			public uint U0;

			[Token(Token = "0x4000913")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
			public uint U1;

			[Token(Token = "0x4000914")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
			public uint U2;

			[Token(Token = "0x4000915")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			private ulong ulo64LE;

			[Token(Token = "0x4000916")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
			private ulong uhigh64LE;

			[Token(Token = "0x17000190")]
			public ulong Low64
			{
				[Token(Token = "0x6001148")]
				[Address(RVA = "0x503F820", Offset = "0x503F820", VA = "0x503F820")]
				get
				{
					return default(ulong);
				}
				[Token(Token = "0x6001149")]
				[Address(RVA = "0x503F830", Offset = "0x503F830", VA = "0x503F830")]
				set
				{
				}
			}

			[Token(Token = "0x17000191")]
			public ulong High64
			{
				[Token(Token = "0x600114A")]
				[Address(RVA = "0x503F800", Offset = "0x503F800", VA = "0x503F800")]
				get
				{
					return default(ulong);
				}
				[Token(Token = "0x600114B")]
				[Address(RVA = "0x503F810", Offset = "0x503F810", VA = "0x503F810")]
				set
				{
				}
			}
		}

		[StructLayout((LayoutKind)2)]
		[Token(Token = "0x20001C3")]
		private struct Buf16
		{
			[Token(Token = "0x4000917")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			public uint U0;

			[Token(Token = "0x4000918")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
			public uint U1;

			[Token(Token = "0x4000919")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
			public uint U2;

			[Token(Token = "0x400091A")]
			[Il2CppDummyDll.FieldOffset(Offset = "0xC")]
			public uint U3;

			[Token(Token = "0x400091B")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			private ulong ulo64LE;

			[Token(Token = "0x400091C")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
			private ulong uhigh64LE;

			[Token(Token = "0x17000192")]
			public ulong Low64
			{
				[Token(Token = "0x600114C")]
				[Address(RVA = "0x503FCE0", Offset = "0x503FCE0", VA = "0x503FCE0")]
				get
				{
					return default(ulong);
				}
				[Token(Token = "0x600114D")]
				[Address(RVA = "0x503FCF0", Offset = "0x503FCF0", VA = "0x503FCF0")]
				set
				{
				}
			}

			[Token(Token = "0x17000193")]
			public ulong High64
			{
				[Token(Token = "0x600114E")]
				[Address(RVA = "0x503FCD0", Offset = "0x503FCD0", VA = "0x503FCD0")]
				get
				{
					return default(ulong);
				}
				[Token(Token = "0x600114F")]
				[Address(RVA = "0x5041250", Offset = "0x5041250", VA = "0x5041250")]
				set
				{
				}
			}
		}

		[StructLayout((LayoutKind)2)]
		[Token(Token = "0x20001C4")]
		private struct Buf24
		{
			[Token(Token = "0x400091D")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			public uint U0;

			[Token(Token = "0x400091E")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
			public uint U1;

			[Token(Token = "0x400091F")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
			public uint U2;

			[Token(Token = "0x4000920")]
			[Il2CppDummyDll.FieldOffset(Offset = "0xC")]
			public uint U3;

			[Token(Token = "0x4000921")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
			public uint U4;

			[Token(Token = "0x4000922")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
			public uint U5;

			[Token(Token = "0x4000923")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			private ulong ulo64LE;

			[Token(Token = "0x4000924")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
			private ulong umid64LE;

			[Token(Token = "0x4000925")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
			private ulong uhigh64LE;

			[Token(Token = "0x17000194")]
			public ulong Low64
			{
				[Token(Token = "0x6001150")]
				[Address(RVA = "0x5041050", Offset = "0x5041050", VA = "0x5041050")]
				get
				{
					return default(ulong);
				}
				[Token(Token = "0x6001151")]
				[Address(RVA = "0x5041030", Offset = "0x5041030", VA = "0x5041030")]
				set
				{
				}
			}

			[Token(Token = "0x17000195")]
			public ulong Mid64
			{
				[Token(Token = "0x6001152")]
				[Address(RVA = "0x5041040", Offset = "0x5041040", VA = "0x5041040")]
				set
				{
				}
			}

			[Token(Token = "0x17000196")]
			public ulong High64
			{
				[Token(Token = "0x6001153")]
				[Address(RVA = "0x5041240", Offset = "0x5041240", VA = "0x5041240")]
				set
				{
				}
			}
		}

		[Token(Token = "0x20001C5")]
		private struct Buf28
		{
			[Token(Token = "0x4000926")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			public Buf24 Buf24;

			[Token(Token = "0x4000927")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
			public uint U6;
		}

		[Token(Token = "0x4000901")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private uint uflags;

		[Token(Token = "0x4000902")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
		private uint uhi;

		[Token(Token = "0x4000903")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		private uint ulo;

		[Token(Token = "0x4000904")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xC")]
		private uint umid;

		[Token(Token = "0x4000905")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		private ulong ulomidLE;

		[Token(Token = "0x4000906")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static readonly uint[] s_powers10;

		[Token(Token = "0x4000907")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		private static readonly ulong[] s_ulongPowers10;

		[Token(Token = "0x4000908")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private static readonly double[] s_doublePowers10;

		[Token(Token = "0x4000909")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private static readonly PowerOvfl[] PowerOvflValues;

		[Token(Token = "0x1700018B")]
		private uint High
		{
			[Token(Token = "0x600111E")]
			[Address(RVA = "0x503F590", Offset = "0x503F590", VA = "0x503F590")]
			get
			{
				return default(uint);
			}
			[Token(Token = "0x600111F")]
			[Address(RVA = "0x503F5A0", Offset = "0x503F5A0", VA = "0x503F5A0")]
			set
			{
			}
		}

		[Token(Token = "0x1700018C")]
		private uint Low
		{
			[Token(Token = "0x6001120")]
			[Address(RVA = "0x503F5B0", Offset = "0x503F5B0", VA = "0x503F5B0")]
			get
			{
				return default(uint);
			}
			[Token(Token = "0x6001121")]
			[Address(RVA = "0x503F5C0", Offset = "0x503F5C0", VA = "0x503F5C0")]
			set
			{
			}
		}

		[Token(Token = "0x1700018D")]
		private uint Mid
		{
			[Token(Token = "0x6001122")]
			[Address(RVA = "0x503F5D0", Offset = "0x503F5D0", VA = "0x503F5D0")]
			get
			{
				return default(uint);
			}
			[Token(Token = "0x6001123")]
			[Address(RVA = "0x503F5E0", Offset = "0x503F5E0", VA = "0x503F5E0")]
			set
			{
			}
		}

		[Token(Token = "0x1700018E")]
		private bool IsNegative
		{
			[Token(Token = "0x6001124")]
			[Address(RVA = "0x503F5F0", Offset = "0x503F5F0", VA = "0x503F5F0")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x1700018F")]
		private ulong Low64
		{
			[Token(Token = "0x6001125")]
			[Address(RVA = "0x503F600", Offset = "0x503F600", VA = "0x503F600")]
			get
			{
				return default(ulong);
			}
			[Token(Token = "0x6001126")]
			[Address(RVA = "0x503F610", Offset = "0x503F610", VA = "0x503F610")]
			set
			{
			}
		}

		[Token(Token = "0x6001127")]
		[Address(RVA = "0x503F620", Offset = "0x503F620", VA = "0x503F620")]
		private static uint GetExponent(float f)
		{
			return default(uint);
		}

		[Token(Token = "0x6001128")]
		[Address(RVA = "0x503F630", Offset = "0x503F630", VA = "0x503F630")]
		private static uint GetExponent(double d)
		{
			return default(uint);
		}

		[Token(Token = "0x6001129")]
		[Address(RVA = "0x503F640", Offset = "0x503F640", VA = "0x503F640")]
		private static ulong UInt32x32To64(uint a, uint b)
		{
			return default(ulong);
		}

		[Token(Token = "0x600112A")]
		[Address(RVA = "0x503F650", Offset = "0x503F650", VA = "0x503F650")]
		private static void UInt64x64To128(ulong a, ulong b, ref DecCalc result)
		{
		}

		[Token(Token = "0x600112B")]
		[Address(RVA = "0x503F790", Offset = "0x503F790", VA = "0x503F790")]
		private static uint Div96By32(ref Buf12 bufNum, uint den)
		{
			return default(uint);
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600112C")]
		[Address(RVA = "0x503F840", Offset = "0x503F840", VA = "0x503F840")]
		private static bool Div96ByConst(ref ulong high64, ref uint low, uint pow)
		{
			return default(bool);
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600112D")]
		[Address(RVA = "0x503F880", Offset = "0x503F880", VA = "0x503F880")]
		private static void Unscale(ref uint low, ref ulong high64, ref int scale)
		{
		}

		[Token(Token = "0x600112E")]
		[Address(RVA = "0x503FAC0", Offset = "0x503FAC0", VA = "0x503FAC0")]
		private static uint Div96By64(ref Buf12 bufNum, ulong den)
		{
			return default(uint);
		}

		[Token(Token = "0x600112F")]
		[Address(RVA = "0x503FBC0", Offset = "0x503FBC0", VA = "0x503FBC0")]
		private static uint Div128By96(ref Buf16 bufNum, ref Buf12 bufDen)
		{
			return default(uint);
		}

		[Token(Token = "0x6001130")]
		[Address(RVA = "0x503FD00", Offset = "0x503FD00", VA = "0x503FD00")]
		private static uint IncreaseScale(ref Buf12 bufNum, uint power)
		{
			return default(uint);
		}

		[Token(Token = "0x6001131")]
		[Address(RVA = "0x503FD80", Offset = "0x503FD80", VA = "0x503FD80")]
		private static void IncreaseScale64(ref Buf12 bufNum, uint power)
		{
		}

		[Token(Token = "0x6001132")]
		[Address(RVA = "0x503FDE0", Offset = "0x503FDE0", VA = "0x503FDE0")]
		private unsafe static int ScaleResult(Buf24* bufRes, uint hiRes, int scale)
		{
			return default(int);
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001133")]
		[Address(RVA = "0x5040C60", Offset = "0x5040C60", VA = "0x5040C60")]
		private unsafe static uint DivByConst(uint* result, uint hiRes, out uint quotient, out uint remainder, uint power)
		{
			return default(uint);
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001134")]
		[Address(RVA = "0x5040CC0", Offset = "0x5040CC0", VA = "0x5040CC0")]
		private static int LeadingZeroCount(uint value)
		{
			return default(int);
		}

		[Token(Token = "0x6001135")]
		[Address(RVA = "0x5040D30", Offset = "0x5040D30", VA = "0x5040D30")]
		private static int OverflowUnscale(ref Buf12 bufQuo, int scale, bool sticky)
		{
			return default(int);
		}

		[Token(Token = "0x6001136")]
		[Address(RVA = "0x5040E60", Offset = "0x5040E60", VA = "0x5040E60")]
		private static int SearchScale(ref Buf12 bufQuo, int scale)
		{
			return default(int);
		}

		[Token(Token = "0x6001137")]
		[Address(RVA = "0x5040E40", Offset = "0x5040E40", VA = "0x5040E40")]
		private static bool Add32To96(ref Buf12 bufNum, uint value)
		{
			return default(bool);
		}

		[Token(Token = "0x6001138")]
		[Address(RVA = "0x5039890", Offset = "0x5039890", VA = "0x5039890")]
		internal static void DecAddSub(ref DecCalc d1, ref DecCalc d2, bool sign)
		{
		}

		[Token(Token = "0x6001139")]
		[Address(RVA = "0x503A110", Offset = "0x503A110", VA = "0x503A110")]
		internal static int VarDecCmp(in decimal d1, in decimal d2)
		{
			return default(int);
		}

		[Token(Token = "0x600113A")]
		[Address(RVA = "0x5041060", Offset = "0x5041060", VA = "0x5041060")]
		private static int VarDecCmpSub(in decimal d1, in decimal d2)
		{
			return default(int);
		}

		[Token(Token = "0x600113B")]
		[Address(RVA = "0x503BF90", Offset = "0x503BF90", VA = "0x503BF90")]
		internal static void VarDecMul(ref DecCalc d1, ref DecCalc d2)
		{
		}

		[Token(Token = "0x600113C")]
		[Address(RVA = "0x5038C80", Offset = "0x5038C80", VA = "0x5038C80")]
		internal static void VarDecFromR4(float input, out DecCalc result)
		{
		}

		[Token(Token = "0x600113D")]
		[Address(RVA = "0x5039120", Offset = "0x5039120", VA = "0x5039120")]
		internal static void VarDecFromR8(double input, out DecCalc result)
		{
		}

		[Token(Token = "0x600113E")]
		[Address(RVA = "0x503DB50", Offset = "0x503DB50", VA = "0x503DB50")]
		internal static float VarR4FromDec(in decimal value)
		{
			return default(float);
		}

		[Token(Token = "0x600113F")]
		[Address(RVA = "0x503D400", Offset = "0x503D400", VA = "0x503D400")]
		internal static double VarR8FromDec(in decimal value)
		{
			return default(double);
		}

		[Token(Token = "0x6001140")]
		[Address(RVA = "0x503B630", Offset = "0x503B630", VA = "0x503B630")]
		internal static int GetHashCode(in decimal d)
		{
			return default(int);
		}

		[Token(Token = "0x6001141")]
		[Address(RVA = "0x503A3F0", Offset = "0x503A3F0", VA = "0x503A3F0")]
		internal static void VarDecDiv(ref DecCalc d1, ref DecCalc d2)
		{
		}

		[Token(Token = "0x6001142")]
		[Address(RVA = "0x503E850", Offset = "0x503E850", VA = "0x503E850")]
		internal static void VarDecMod(ref DecCalc d1, ref DecCalc d2)
		{
		}

		[Token(Token = "0x6001143")]
		[Address(RVA = "0x5041260", Offset = "0x5041260", VA = "0x5041260")]
		private static void VarDecModFull(ref DecCalc d1, ref DecCalc d2, int scale)
		{
		}

		[Token(Token = "0x6001144")]
		[Address(RVA = "0x503C790", Offset = "0x503C790", VA = "0x503C790")]
		internal static void InternalRound(ref DecCalc d, uint scale, RoundingMode mode)
		{
		}

		[Token(Token = "0x6001145")]
		[Address(RVA = "0x5038AD0", Offset = "0x5038AD0", VA = "0x5038AD0")]
		internal static uint DecDivMod1E9(ref DecCalc value)
		{
			return default(uint);
		}
	}

	[Token(Token = "0x40008F4")]
	private const int SignMask = int.MinValue;

	[Token(Token = "0x40008F5")]
	private const int ScaleMask = 16711680;

	[Token(Token = "0x40008F6")]
	private const int ScaleShift = 16;

	[Token(Token = "0x40008F7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public const decimal Zero = 0m;

	[Token(Token = "0x40008F8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public const decimal One = 1m;

	[Token(Token = "0x40008F9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	public const decimal MinusOne = -1m;

	[Token(Token = "0x40008FA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	public const decimal MaxValue = 79228162514264337593543950335m;

	[Token(Token = "0x40008FB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	public const decimal MinValue = -79228162514264337593543950335m;

	[Token(Token = "0x40008FC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly int flags;

	[Token(Token = "0x40008FD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
	private readonly int hi;

	[Token(Token = "0x40008FE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private readonly int lo;

	[Token(Token = "0x40008FF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC")]
	private readonly int mid;

	[NonSerialized]
	[Token(Token = "0x4000900")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private readonly ulong ulomidLE;

	[Token(Token = "0x17000185")]
	internal uint High
	{
		[Token(Token = "0x60010B7")]
		[Address(RVA = "0x5038940", Offset = "0x5038940", VA = "0x5038940")]
		get
		{
			return default(uint);
		}
	}

	[Token(Token = "0x17000186")]
	internal uint Low
	{
		[Token(Token = "0x60010B8")]
		[Address(RVA = "0x5038950", Offset = "0x5038950", VA = "0x5038950")]
		get
		{
			return default(uint);
		}
	}

	[Token(Token = "0x17000187")]
	internal uint Mid
	{
		[Token(Token = "0x60010B9")]
		[Address(RVA = "0x5038960", Offset = "0x5038960", VA = "0x5038960")]
		get
		{
			return default(uint);
		}
	}

	[Token(Token = "0x17000188")]
	internal bool IsNegative
	{
		[Token(Token = "0x60010BA")]
		[Address(RVA = "0x5038970", Offset = "0x5038970", VA = "0x5038970")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000189")]
	internal int Scale
	{
		[Token(Token = "0x60010BB")]
		[Address(RVA = "0x5038980", Offset = "0x5038980", VA = "0x5038980")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700018A")]
	private ulong Low64
	{
		[Token(Token = "0x60010BC")]
		[Address(RVA = "0x5038990", Offset = "0x5038990", VA = "0x5038990")]
		get
		{
			return default(ulong);
		}
	}

	[Token(Token = "0x60010BD")]
	[Address(RVA = "0x50389C0", Offset = "0x50389C0", VA = "0x50389C0")]
	private unsafe static ref DecCalc AsMutable(ref decimal d)
	{
		return ref *(DecCalc*)null;
	}

	[Token(Token = "0x60010BE")]
	[Address(RVA = "0x50389D0", Offset = "0x50389D0", VA = "0x50389D0")]
	internal static uint DecDivMod1E9(ref decimal value)
	{
		return default(uint);
	}

	[Token(Token = "0x60010BF")]
	[Address(RVA = "0x5038B30", Offset = "0x5038B30", VA = "0x5038B30")]
	public Decimal(int value)
	{
	}

	[Token(Token = "0x60010C0")]
	[Address(RVA = "0x5038B70", Offset = "0x5038B70", VA = "0x5038B70")]
	[CLSCompliant(false)]
	public Decimal(uint value)
	{
	}

	[Token(Token = "0x60010C1")]
	[Address(RVA = "0x5038B90", Offset = "0x5038B90", VA = "0x5038B90")]
	public Decimal(long value)
	{
	}

	[Token(Token = "0x60010C2")]
	[Address(RVA = "0x5038BC0", Offset = "0x5038BC0", VA = "0x5038BC0")]
	[CLSCompliant(false)]
	public Decimal(ulong value)
	{
	}

	[Token(Token = "0x60010C3")]
	[Address(RVA = "0x5038BE0", Offset = "0x5038BE0", VA = "0x5038BE0")]
	public Decimal(float value)
	{
	}

	[Token(Token = "0x60010C4")]
	[Address(RVA = "0x5039080", Offset = "0x5039080", VA = "0x5039080")]
	public Decimal(double value)
	{
	}

	[Token(Token = "0x60010C5")]
	[Address(RVA = "0x5039530", Offset = "0x5039530", VA = "0x5039530")]
	private static bool IsValid(int flags)
	{
		return default(bool);
	}

	[Token(Token = "0x60010C6")]
	[Address(RVA = "0x5039550", Offset = "0x5039550", VA = "0x5039550")]
	public Decimal(int[] bits)
	{
	}

	[Token(Token = "0x60010C7")]
	[Address(RVA = "0x5039670", Offset = "0x5039670", VA = "0x5039670")]
	public Decimal(int lo, int mid, int hi, bool isNegative, byte scale)
	{
	}

	[Token(Token = "0x60010C8")]
	[Address(RVA = "0x5039700", Offset = "0x5039700", VA = "0x5039700", Slot = "25")]
	private void System_002ERuntime_002ESerialization_002EIDeserializationCallback_002EOnDeserialization(object sender)
	{
	}

	[Token(Token = "0x60010C9")]
	[Address(RVA = "0x50397A0", Offset = "0x50397A0", VA = "0x50397A0")]
	private Decimal(in decimal d, int flags)
	{
	}

	[Token(Token = "0x60010CA")]
	[Address(RVA = "0x50397B0", Offset = "0x50397B0", VA = "0x50397B0")]
	internal static decimal Abs(ref decimal d)
	{
		return default(decimal);
	}

	[Token(Token = "0x60010CB")]
	[Address(RVA = "0x50397D0", Offset = "0x50397D0", VA = "0x50397D0")]
	public static decimal Add(decimal d1, decimal d2)
	{
		return default(decimal);
	}

	[Token(Token = "0x60010CC")]
	[Address(RVA = "0x503A0B0", Offset = "0x503A0B0", VA = "0x503A0B0")]
	public static int Compare(decimal d1, decimal d2)
	{
		return default(int);
	}

	[Token(Token = "0x60010CD")]
	[Address(RVA = "0x503A1F0", Offset = "0x503A1F0", VA = "0x503A1F0", Slot = "5")]
	public int CompareTo(object value)
	{
		return default(int);
	}

	[Token(Token = "0x60010CE")]
	[Address(RVA = "0x503A2D0", Offset = "0x503A2D0", VA = "0x503A2D0", Slot = "23")]
	public int CompareTo(decimal value)
	{
		return default(int);
	}

	[Token(Token = "0x60010CF")]
	[Address(RVA = "0x503A330", Offset = "0x503A330", VA = "0x503A330")]
	public static decimal Divide(decimal d1, decimal d2)
	{
		return default(decimal);
	}

	[Token(Token = "0x60010D0")]
	[Address(RVA = "0x503B4D0", Offset = "0x503B4D0", VA = "0x503B4D0", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x60010D1")]
	[Address(RVA = "0x503B570", Offset = "0x503B570", VA = "0x503B570", Slot = "24")]
	public bool Equals(decimal value)
	{
		return default(bool);
	}

	[Token(Token = "0x60010D2")]
	[Address(RVA = "0x503B5D0", Offset = "0x503B5D0", VA = "0x503B5D0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60010D3")]
	[Address(RVA = "0x503B7A0", Offset = "0x503B7A0", VA = "0x503B7A0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60010D4")]
	[Address(RVA = "0x503B830", Offset = "0x503B830", VA = "0x503B830")]
	public string ToString(string format)
	{
		return null;
	}

	[Token(Token = "0x60010D5")]
	[Address(RVA = "0x503B8F0", Offset = "0x503B8F0", VA = "0x503B8F0", Slot = "21")]
	public string ToString(IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x60010D6")]
	[Address(RVA = "0x503B990", Offset = "0x503B990", VA = "0x503B990", Slot = "4")]
	public string ToString(string format, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x60010D7")]
	[Address(RVA = "0x503BA60", Offset = "0x503BA60", VA = "0x503BA60", Slot = "26")]
	public bool TryFormat(Span<char> destination, out int charsWritten, [Optional] ReadOnlySpan<char> format, [Optional] IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x60010D8")]
	[Address(RVA = "0x503BB20", Offset = "0x503BB20", VA = "0x503BB20")]
	public static decimal Parse(string s, IFormatProvider provider)
	{
		return default(decimal);
	}

	[Token(Token = "0x60010D9")]
	[Address(RVA = "0x503BBF0", Offset = "0x503BBF0", VA = "0x503BBF0")]
	public static decimal Parse(string s, NumberStyles style, IFormatProvider provider)
	{
		return default(decimal);
	}

	[Token(Token = "0x60010DA")]
	[Address(RVA = "0x503BCC0", Offset = "0x503BCC0", VA = "0x503BCC0")]
	public static bool TryParse(string s, NumberStyles style, IFormatProvider provider, out decimal result)
	{
		return default(bool);
	}

	[Token(Token = "0x60010DB")]
	[Address(RVA = "0x503BD90", Offset = "0x503BD90", VA = "0x503BD90")]
	public static int[] GetBits(decimal d)
	{
		return null;
	}

	[Token(Token = "0x60010DC")]
	[Address(RVA = "0x503BE10", Offset = "0x503BE10", VA = "0x503BE10")]
	internal unsafe static ref decimal Max(ref decimal d1, ref decimal d2)
	{
		return ref *(decimal*)null;
	}

	[Token(Token = "0x60010DD")]
	[Address(RVA = "0x503BE70", Offset = "0x503BE70", VA = "0x503BE70")]
	internal unsafe static ref decimal Min(ref decimal d1, ref decimal d2)
	{
		return ref *(decimal*)null;
	}

	[Token(Token = "0x60010DE")]
	[Address(RVA = "0x503BED0", Offset = "0x503BED0", VA = "0x503BED0")]
	public static decimal Multiply(decimal d1, decimal d2)
	{
		return default(decimal);
	}

	[Token(Token = "0x60010DF")]
	[Address(RVA = "0x503C550", Offset = "0x503C550", VA = "0x503C550")]
	public static decimal Negate(decimal d)
	{
		return default(decimal);
	}

	[Token(Token = "0x60010E0")]
	[Address(RVA = "0x503C560", Offset = "0x503C560", VA = "0x503C560")]
	public static decimal Round(decimal d, int decimals)
	{
		return default(decimal);
	}

	[Token(Token = "0x60010E1")]
	[Address(RVA = "0x503C5C0", Offset = "0x503C5C0", VA = "0x503C5C0")]
	private static decimal Round(ref decimal d, int decimals, MidpointRounding mode)
	{
		return default(decimal);
	}

	[Token(Token = "0x60010E2")]
	[Address(RVA = "0x503CAF0", Offset = "0x503CAF0", VA = "0x503CAF0")]
	public static decimal Subtract(decimal d1, decimal d2)
	{
		return default(decimal);
	}

	[Token(Token = "0x60010E3")]
	[Address(RVA = "0x503CBB0", Offset = "0x503CBB0", VA = "0x503CBB0")]
	public static byte ToByte(decimal value)
	{
		return default(byte);
	}

	[Token(Token = "0x60010E4")]
	[Address(RVA = "0x503CEE0", Offset = "0x503CEE0", VA = "0x503CEE0")]
	[CLSCompliant(false)]
	public static sbyte ToSByte(decimal value)
	{
		return default(sbyte);
	}

	[Token(Token = "0x60010E5")]
	[Address(RVA = "0x503D220", Offset = "0x503D220", VA = "0x503D220")]
	public static short ToInt16(decimal value)
	{
		return default(short);
	}

	[Token(Token = "0x60010E6")]
	[Address(RVA = "0x503D380", Offset = "0x503D380", VA = "0x503D380")]
	public static double ToDouble(decimal d)
	{
		return default(double);
	}

	[Token(Token = "0x60010E7")]
	[Address(RVA = "0x503D040", Offset = "0x503D040", VA = "0x503D040")]
	public static int ToInt32(decimal d)
	{
		return default(int);
	}

	[Token(Token = "0x60010E8")]
	[Address(RVA = "0x503D550", Offset = "0x503D550", VA = "0x503D550")]
	public static long ToInt64(decimal d)
	{
		return default(long);
	}

	[Token(Token = "0x60010E9")]
	[Address(RVA = "0x503D750", Offset = "0x503D750", VA = "0x503D750")]
	[CLSCompliant(false)]
	public static ushort ToUInt16(decimal value)
	{
		return default(ushort);
	}

	[Token(Token = "0x60010EA")]
	[Address(RVA = "0x503CD10", Offset = "0x503CD10", VA = "0x503CD10")]
	[CLSCompliant(false)]
	public static uint ToUInt32(decimal d)
	{
		return default(uint);
	}

	[Token(Token = "0x60010EB")]
	[Address(RVA = "0x503D8B0", Offset = "0x503D8B0", VA = "0x503D8B0")]
	[CLSCompliant(false)]
	public static ulong ToUInt64(decimal d)
	{
		return default(ulong);
	}

	[Token(Token = "0x60010EC")]
	[Address(RVA = "0x503DAA0", Offset = "0x503DAA0", VA = "0x503DAA0")]
	public static float ToSingle(decimal d)
	{
		return default(float);
	}

	[Token(Token = "0x60010ED")]
	[Address(RVA = "0x503DBA0", Offset = "0x503DBA0", VA = "0x503DBA0")]
	public static decimal Truncate(decimal d)
	{
		return default(decimal);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010EE")]
	[Address(RVA = "0x503DCD0", Offset = "0x503DCD0", VA = "0x503DCD0")]
	private static void Truncate(ref decimal d)
	{
	}

	[Token(Token = "0x60010EF")]
	[Address(RVA = "0x503DD70", Offset = "0x503DD70", VA = "0x503DD70")]
	public static implicit operator decimal(byte value)
	{
		return default(decimal);
	}

	[Token(Token = "0x60010F0")]
	[Address(RVA = "0x503DD80", Offset = "0x503DD80", VA = "0x503DD80")]
	[CLSCompliant(false)]
	public static implicit operator decimal(sbyte value)
	{
		return default(decimal);
	}

	[Token(Token = "0x60010F1")]
	[Address(RVA = "0x503DDA0", Offset = "0x503DDA0", VA = "0x503DDA0")]
	public static implicit operator decimal(short value)
	{
		return default(decimal);
	}

	[Token(Token = "0x60010F2")]
	[Address(RVA = "0x503DDC0", Offset = "0x503DDC0", VA = "0x503DDC0")]
	[CLSCompliant(false)]
	public static implicit operator decimal(ushort value)
	{
		return default(decimal);
	}

	[Token(Token = "0x60010F3")]
	[Address(RVA = "0x503DDD0", Offset = "0x503DDD0", VA = "0x503DDD0")]
	public static implicit operator decimal(char value)
	{
		return default(decimal);
	}

	[Token(Token = "0x60010F4")]
	[Address(RVA = "0x503DDE0", Offset = "0x503DDE0", VA = "0x503DDE0")]
	public static implicit operator decimal(int value)
	{
		return default(decimal);
	}

	[Token(Token = "0x60010F5")]
	[Address(RVA = "0x503DDF0", Offset = "0x503DDF0", VA = "0x503DDF0")]
	[CLSCompliant(false)]
	public static implicit operator decimal(uint value)
	{
		return default(decimal);
	}

	[Token(Token = "0x60010F6")]
	[Address(RVA = "0x503DE00", Offset = "0x503DE00", VA = "0x503DE00")]
	public static implicit operator decimal(long value)
	{
		return default(decimal);
	}

	[Token(Token = "0x60010F7")]
	[Address(RVA = "0x503DE20", Offset = "0x503DE20", VA = "0x503DE20")]
	[CLSCompliant(false)]
	public static implicit operator decimal(ulong value)
	{
		return default(decimal);
	}

	[Token(Token = "0x60010F8")]
	[Address(RVA = "0x503DE30", Offset = "0x503DE30", VA = "0x503DE30")]
	public static explicit operator decimal(float value)
	{
		return default(decimal);
	}

	[Token(Token = "0x60010F9")]
	[Address(RVA = "0x503DEF0", Offset = "0x503DEF0", VA = "0x503DEF0")]
	public static explicit operator decimal(double value)
	{
		return default(decimal);
	}

	[Token(Token = "0x60010FA")]
	[Address(RVA = "0x503DFA0", Offset = "0x503DFA0", VA = "0x503DFA0")]
	public static explicit operator int(decimal value)
	{
		return default(int);
	}

	[Token(Token = "0x60010FB")]
	[Address(RVA = "0x503DFF0", Offset = "0x503DFF0", VA = "0x503DFF0")]
	public static explicit operator long(decimal value)
	{
		return default(long);
	}

	[Token(Token = "0x60010FC")]
	[Address(RVA = "0x503E040", Offset = "0x503E040", VA = "0x503E040")]
	[CLSCompliant(false)]
	public static explicit operator ulong(decimal value)
	{
		return default(ulong);
	}

	[Token(Token = "0x60010FD")]
	[Address(RVA = "0x503E090", Offset = "0x503E090", VA = "0x503E090")]
	public static explicit operator float(decimal value)
	{
		return default(float);
	}

	[Token(Token = "0x60010FE")]
	[Address(RVA = "0x503E1D0", Offset = "0x503E1D0", VA = "0x503E1D0")]
	public static explicit operator double(decimal value)
	{
		return default(double);
	}

	[Token(Token = "0x60010FF")]
	[Address(RVA = "0x503E2A0", Offset = "0x503E2A0", VA = "0x503E2A0")]
	public static decimal operator -(decimal d)
	{
		return default(decimal);
	}

	[Token(Token = "0x6001100")]
	[Address(RVA = "0x503E2B0", Offset = "0x503E2B0", VA = "0x503E2B0")]
	public static decimal operator ++(decimal d)
	{
		return default(decimal);
	}

	[Token(Token = "0x6001101")]
	[Address(RVA = "0x503E3A0", Offset = "0x503E3A0", VA = "0x503E3A0")]
	public static decimal operator --(decimal d)
	{
		return default(decimal);
	}

	[Token(Token = "0x6001102")]
	[Address(RVA = "0x503E490", Offset = "0x503E490", VA = "0x503E490")]
	public static decimal operator +(decimal d1, decimal d2)
	{
		return default(decimal);
	}

	[Token(Token = "0x6001103")]
	[Address(RVA = "0x503E550", Offset = "0x503E550", VA = "0x503E550")]
	public static decimal operator -(decimal d1, decimal d2)
	{
		return default(decimal);
	}

	[Token(Token = "0x6001104")]
	[Address(RVA = "0x503E610", Offset = "0x503E610", VA = "0x503E610")]
	public static decimal operator *(decimal d1, decimal d2)
	{
		return default(decimal);
	}

	[Token(Token = "0x6001105")]
	[Address(RVA = "0x503E6D0", Offset = "0x503E6D0", VA = "0x503E6D0")]
	public static decimal operator /(decimal d1, decimal d2)
	{
		return default(decimal);
	}

	[Token(Token = "0x6001106")]
	[Address(RVA = "0x503E790", Offset = "0x503E790", VA = "0x503E790")]
	public static decimal operator %(decimal d1, decimal d2)
	{
		return default(decimal);
	}

	[Token(Token = "0x6001107")]
	[Address(RVA = "0x503EC90", Offset = "0x503EC90", VA = "0x503EC90")]
	public static bool operator ==(decimal d1, decimal d2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001108")]
	[Address(RVA = "0x503ED00", Offset = "0x503ED00", VA = "0x503ED00")]
	public static bool operator !=(decimal d1, decimal d2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001109")]
	[Address(RVA = "0x503ED70", Offset = "0x503ED70", VA = "0x503ED70")]
	public static bool operator <(decimal d1, decimal d2)
	{
		return default(bool);
	}

	[Token(Token = "0x600110A")]
	[Address(RVA = "0x503EDE0", Offset = "0x503EDE0", VA = "0x503EDE0")]
	public static bool operator <=(decimal d1, decimal d2)
	{
		return default(bool);
	}

	[Token(Token = "0x600110B")]
	[Address(RVA = "0x503EE50", Offset = "0x503EE50", VA = "0x503EE50")]
	public static bool operator >(decimal d1, decimal d2)
	{
		return default(bool);
	}

	[Token(Token = "0x600110C")]
	[Address(RVA = "0x503EEC0", Offset = "0x503EEC0", VA = "0x503EEC0")]
	public static bool operator >=(decimal d1, decimal d2)
	{
		return default(bool);
	}

	[Token(Token = "0x600110D")]
	[Address(RVA = "0x503EF30", Offset = "0x503EF30", VA = "0x503EF30", Slot = "6")]
	public TypeCode GetTypeCode()
	{
		return default(TypeCode);
	}

	[Token(Token = "0x600110E")]
	[Address(RVA = "0x503EF40", Offset = "0x503EF40", VA = "0x503EF40", Slot = "7")]
	private bool System_002EIConvertible_002EToBoolean(IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x600110F")]
	[Address(RVA = "0x503EFA0", Offset = "0x503EFA0", VA = "0x503EFA0", Slot = "8")]
	private char System_002EIConvertible_002EToChar(IFormatProvider provider)
	{
		return default(char);
	}

	[Token(Token = "0x6001110")]
	[Address(RVA = "0x503F020", Offset = "0x503F020", VA = "0x503F020", Slot = "9")]
	private sbyte System_002EIConvertible_002EToSByte(IFormatProvider provider)
	{
		return default(sbyte);
	}

	[Token(Token = "0x6001111")]
	[Address(RVA = "0x503F080", Offset = "0x503F080", VA = "0x503F080", Slot = "10")]
	private byte System_002EIConvertible_002EToByte(IFormatProvider provider)
	{
		return default(byte);
	}

	[Token(Token = "0x6001112")]
	[Address(RVA = "0x503F0E0", Offset = "0x503F0E0", VA = "0x503F0E0", Slot = "11")]
	private short System_002EIConvertible_002EToInt16(IFormatProvider provider)
	{
		return default(short);
	}

	[Token(Token = "0x6001113")]
	[Address(RVA = "0x503F140", Offset = "0x503F140", VA = "0x503F140", Slot = "12")]
	private ushort System_002EIConvertible_002EToUInt16(IFormatProvider provider)
	{
		return default(ushort);
	}

	[Token(Token = "0x6001114")]
	[Address(RVA = "0x503F1A0", Offset = "0x503F1A0", VA = "0x503F1A0", Slot = "13")]
	private int System_002EIConvertible_002EToInt32(IFormatProvider provider)
	{
		return default(int);
	}

	[Token(Token = "0x6001115")]
	[Address(RVA = "0x503F200", Offset = "0x503F200", VA = "0x503F200", Slot = "14")]
	private uint System_002EIConvertible_002EToUInt32(IFormatProvider provider)
	{
		return default(uint);
	}

	[Token(Token = "0x6001116")]
	[Address(RVA = "0x503F260", Offset = "0x503F260", VA = "0x503F260", Slot = "15")]
	private long System_002EIConvertible_002EToInt64(IFormatProvider provider)
	{
		return default(long);
	}

	[Token(Token = "0x6001117")]
	[Address(RVA = "0x503F2C0", Offset = "0x503F2C0", VA = "0x503F2C0", Slot = "16")]
	private ulong System_002EIConvertible_002EToUInt64(IFormatProvider provider)
	{
		return default(ulong);
	}

	[Token(Token = "0x6001118")]
	[Address(RVA = "0x503F320", Offset = "0x503F320", VA = "0x503F320", Slot = "17")]
	private float System_002EIConvertible_002EToSingle(IFormatProvider provider)
	{
		return default(float);
	}

	[Token(Token = "0x6001119")]
	[Address(RVA = "0x503F380", Offset = "0x503F380", VA = "0x503F380", Slot = "18")]
	private double System_002EIConvertible_002EToDouble(IFormatProvider provider)
	{
		return default(double);
	}

	[Token(Token = "0x600111A")]
	[Address(RVA = "0x503F3E0", Offset = "0x503F3E0", VA = "0x503F3E0", Slot = "19")]
	private decimal System_002EIConvertible_002EToDecimal(IFormatProvider provider)
	{
		return default(decimal);
	}

	[Token(Token = "0x600111B")]
	[Address(RVA = "0x503F3F0", Offset = "0x503F3F0", VA = "0x503F3F0", Slot = "20")]
	private DateTime System_002EIConvertible_002EToDateTime(IFormatProvider provider)
	{
		return default(DateTime);
	}

	[Token(Token = "0x600111C")]
	[Address(RVA = "0x503F470", Offset = "0x503F470", VA = "0x503F470", Slot = "22")]
	private object System_002EIConvertible_002EToType(Type type, IFormatProvider provider)
	{
		return null;
	}
}
