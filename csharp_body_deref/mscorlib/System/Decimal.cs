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
			[Address(RVA = "0x3D27ED0", Offset = "0x3D27ED0", VA = "0x3D27ED0")]
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
				[Address(RVA = "0x3D25340", Offset = "0x3D25340", VA = "0x3D25340")]
				get
				{
					return default(ulong);
				}
				[Token(Token = "0x6001149")]
				[Address(RVA = "0x3D25350", Offset = "0x3D25350", VA = "0x3D25350")]
				set
				{
				}
			}

			[Token(Token = "0x17000191")]
			public ulong High64
			{
				[Token(Token = "0x600114A")]
				[Address(RVA = "0x3D25320", Offset = "0x3D25320", VA = "0x3D25320")]
				get
				{
					return default(ulong);
				}
				[Token(Token = "0x600114B")]
				[Address(RVA = "0x3D25330", Offset = "0x3D25330", VA = "0x3D25330")]
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
				[Address(RVA = "0x3D25800", Offset = "0x3D25800", VA = "0x3D25800")]
				get
				{
					return default(ulong);
				}
				[Token(Token = "0x600114D")]
				[Address(RVA = "0x3D25810", Offset = "0x3D25810", VA = "0x3D25810")]
				set
				{
				}
			}

			[Token(Token = "0x17000193")]
			public ulong High64
			{
				[Token(Token = "0x600114E")]
				[Address(RVA = "0x3D257F0", Offset = "0x3D257F0", VA = "0x3D257F0")]
				get
				{
					return default(ulong);
				}
				[Token(Token = "0x600114F")]
				[Address(RVA = "0x3D26D70", Offset = "0x3D26D70", VA = "0x3D26D70")]
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
				[Address(RVA = "0x3D26B70", Offset = "0x3D26B70", VA = "0x3D26B70")]
				get
				{
					return default(ulong);
				}
				[Token(Token = "0x6001151")]
				[Address(RVA = "0x3D26B50", Offset = "0x3D26B50", VA = "0x3D26B50")]
				set
				{
				}
			}

			[Token(Token = "0x17000195")]
			public ulong Mid64
			{
				[Token(Token = "0x6001152")]
				[Address(RVA = "0x3D26B60", Offset = "0x3D26B60", VA = "0x3D26B60")]
				set
				{
				}
			}

			[Token(Token = "0x17000196")]
			public ulong High64
			{
				[Token(Token = "0x6001153")]
				[Address(RVA = "0x3D26D60", Offset = "0x3D26D60", VA = "0x3D26D60")]
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
			[Address(RVA = "0x3D250B0", Offset = "0x3D250B0", VA = "0x3D250B0")]
			get
			{
				return default(uint);
			}
			[Token(Token = "0x600111F")]
			[Address(RVA = "0x3D250C0", Offset = "0x3D250C0", VA = "0x3D250C0")]
			set
			{
			}
		}

		[Token(Token = "0x1700018C")]
		private uint Low
		{
			[Token(Token = "0x6001120")]
			[Address(RVA = "0x3D250D0", Offset = "0x3D250D0", VA = "0x3D250D0")]
			get
			{
				return default(uint);
			}
			[Token(Token = "0x6001121")]
			[Address(RVA = "0x3D250E0", Offset = "0x3D250E0", VA = "0x3D250E0")]
			set
			{
			}
		}

		[Token(Token = "0x1700018D")]
		private uint Mid
		{
			[Token(Token = "0x6001122")]
			[Address(RVA = "0x3D250F0", Offset = "0x3D250F0", VA = "0x3D250F0")]
			get
			{
				return default(uint);
			}
			[Token(Token = "0x6001123")]
			[Address(RVA = "0x3D25100", Offset = "0x3D25100", VA = "0x3D25100")]
			set
			{
			}
		}

		[Token(Token = "0x1700018E")]
		private bool IsNegative
		{
			[Token(Token = "0x6001124")]
			[Address(RVA = "0x3D25110", Offset = "0x3D25110", VA = "0x3D25110")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x1700018F")]
		private ulong Low64
		{
			[Token(Token = "0x6001125")]
			[Address(RVA = "0x3D25120", Offset = "0x3D25120", VA = "0x3D25120")]
			get
			{
				return default(ulong);
			}
			[Token(Token = "0x6001126")]
			[Address(RVA = "0x3D25130", Offset = "0x3D25130", VA = "0x3D25130")]
			set
			{
			}
		}

		[Token(Token = "0x6001127")]
		[Address(RVA = "0x3D25140", Offset = "0x3D25140", VA = "0x3D25140")]
		private static uint GetExponent(float f)
		{
			return default(uint);
		}

		[Token(Token = "0x6001128")]
		[Address(RVA = "0x3D25150", Offset = "0x3D25150", VA = "0x3D25150")]
		private static uint GetExponent(double d)
		{
			return default(uint);
		}

		[Token(Token = "0x6001129")]
		[Address(RVA = "0x3D25160", Offset = "0x3D25160", VA = "0x3D25160")]
		private static ulong UInt32x32To64(uint a, uint b)
		{
			return default(ulong);
		}

		[Token(Token = "0x600112A")]
		[Address(RVA = "0x3D25170", Offset = "0x3D25170", VA = "0x3D25170")]
		private static void UInt64x64To128(ulong a, ulong b, ref DecCalc result)
		{
		}

		[Token(Token = "0x600112B")]
		[Address(RVA = "0x3D252B0", Offset = "0x3D252B0", VA = "0x3D252B0")]
		private static uint Div96By32(ref Buf12 bufNum, uint den)
		{
			return default(uint);
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600112C")]
		[Address(RVA = "0x3D25360", Offset = "0x3D25360", VA = "0x3D25360")]
		private static bool Div96ByConst(ref ulong high64, ref uint low, uint pow)
		{
			return default(bool);
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600112D")]
		[Address(RVA = "0x3D253A0", Offset = "0x3D253A0", VA = "0x3D253A0")]
		private static void Unscale(ref uint low, ref ulong high64, ref int scale)
		{
		}

		[Token(Token = "0x600112E")]
		[Address(RVA = "0x3D255E0", Offset = "0x3D255E0", VA = "0x3D255E0")]
		private static uint Div96By64(ref Buf12 bufNum, ulong den)
		{
			return default(uint);
		}

		[Token(Token = "0x600112F")]
		[Address(RVA = "0x3D256E0", Offset = "0x3D256E0", VA = "0x3D256E0")]
		private static uint Div128By96(ref Buf16 bufNum, ref Buf12 bufDen)
		{
			return default(uint);
		}

		[Token(Token = "0x6001130")]
		[Address(RVA = "0x3D25820", Offset = "0x3D25820", VA = "0x3D25820")]
		private static uint IncreaseScale(ref Buf12 bufNum, uint power)
		{
			return default(uint);
		}

		[Token(Token = "0x6001131")]
		[Address(RVA = "0x3D258A0", Offset = "0x3D258A0", VA = "0x3D258A0")]
		private static void IncreaseScale64(ref Buf12 bufNum, uint power)
		{
		}

		[Token(Token = "0x6001132")]
		[Address(RVA = "0x3D25900", Offset = "0x3D25900", VA = "0x3D25900")]
		private unsafe static int ScaleResult(Buf24* bufRes, uint hiRes, int scale)
		{
			return default(int);
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001133")]
		[Address(RVA = "0x3D26780", Offset = "0x3D26780", VA = "0x3D26780")]
		private unsafe static uint DivByConst(uint* result, uint hiRes, out uint quotient, out uint remainder, uint power)
		{
			return default(uint);
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001134")]
		[Address(RVA = "0x3D267E0", Offset = "0x3D267E0", VA = "0x3D267E0")]
		private static int LeadingZeroCount(uint value)
		{
			return default(int);
		}

		[Token(Token = "0x6001135")]
		[Address(RVA = "0x3D26850", Offset = "0x3D26850", VA = "0x3D26850")]
		private static int OverflowUnscale(ref Buf12 bufQuo, int scale, bool sticky)
		{
			return default(int);
		}

		[Token(Token = "0x6001136")]
		[Address(RVA = "0x3D26980", Offset = "0x3D26980", VA = "0x3D26980")]
		private static int SearchScale(ref Buf12 bufQuo, int scale)
		{
			return default(int);
		}

		[Token(Token = "0x6001137")]
		[Address(RVA = "0x3D26960", Offset = "0x3D26960", VA = "0x3D26960")]
		private static bool Add32To96(ref Buf12 bufNum, uint value)
		{
			return default(bool);
		}

		[Token(Token = "0x6001138")]
		[Address(RVA = "0x3D1F3B0", Offset = "0x3D1F3B0", VA = "0x3D1F3B0")]
		internal static void DecAddSub(ref DecCalc d1, ref DecCalc d2, bool sign)
		{
		}

		[Token(Token = "0x6001139")]
		[Address(RVA = "0x3D1FC30", Offset = "0x3D1FC30", VA = "0x3D1FC30")]
		internal static int VarDecCmp(in decimal d1, in decimal d2)
		{
			return default(int);
		}

		[Token(Token = "0x600113A")]
		[Address(RVA = "0x3D26B80", Offset = "0x3D26B80", VA = "0x3D26B80")]
		private static int VarDecCmpSub(in decimal d1, in decimal d2)
		{
			return default(int);
		}

		[Token(Token = "0x600113B")]
		[Address(RVA = "0x3D21AB0", Offset = "0x3D21AB0", VA = "0x3D21AB0")]
		internal static void VarDecMul(ref DecCalc d1, ref DecCalc d2)
		{
		}

		[Token(Token = "0x600113C")]
		[Address(RVA = "0x3D1E7A0", Offset = "0x3D1E7A0", VA = "0x3D1E7A0")]
		internal static void VarDecFromR4(float input, out DecCalc result)
		{
		}

		[Token(Token = "0x600113D")]
		[Address(RVA = "0x3D1EC40", Offset = "0x3D1EC40", VA = "0x3D1EC40")]
		internal static void VarDecFromR8(double input, out DecCalc result)
		{
		}

		[Token(Token = "0x600113E")]
		[Address(RVA = "0x3D23670", Offset = "0x3D23670", VA = "0x3D23670")]
		internal static float VarR4FromDec(in decimal value)
		{
			return default(float);
		}

		[Token(Token = "0x600113F")]
		[Address(RVA = "0x3D22F20", Offset = "0x3D22F20", VA = "0x3D22F20")]
		internal static double VarR8FromDec(in decimal value)
		{
			return default(double);
		}

		[Token(Token = "0x6001140")]
		[Address(RVA = "0x3D21150", Offset = "0x3D21150", VA = "0x3D21150")]
		internal static int GetHashCode(in decimal d)
		{
			return default(int);
		}

		[Token(Token = "0x6001141")]
		[Address(RVA = "0x3D1FF10", Offset = "0x3D1FF10", VA = "0x3D1FF10")]
		internal static void VarDecDiv(ref DecCalc d1, ref DecCalc d2)
		{
		}

		[Token(Token = "0x6001142")]
		[Address(RVA = "0x3D24370", Offset = "0x3D24370", VA = "0x3D24370")]
		internal static void VarDecMod(ref DecCalc d1, ref DecCalc d2)
		{
		}

		[Token(Token = "0x6001143")]
		[Address(RVA = "0x3D26D80", Offset = "0x3D26D80", VA = "0x3D26D80")]
		private static void VarDecModFull(ref DecCalc d1, ref DecCalc d2, int scale)
		{
		}

		[Token(Token = "0x6001144")]
		[Address(RVA = "0x3D222B0", Offset = "0x3D222B0", VA = "0x3D222B0")]
		internal static void InternalRound(ref DecCalc d, uint scale, RoundingMode mode)
		{
		}

		[Token(Token = "0x6001145")]
		[Address(RVA = "0x3D1E5F0", Offset = "0x3D1E5F0", VA = "0x3D1E5F0")]
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
		[Address(RVA = "0x3D1E460", Offset = "0x3D1E460", VA = "0x3D1E460")]
		get
		{
			return default(uint);
		}
	}

	[Token(Token = "0x17000186")]
	internal uint Low
	{
		[Token(Token = "0x60010B8")]
		[Address(RVA = "0x3D1E470", Offset = "0x3D1E470", VA = "0x3D1E470")]
		get
		{
			return default(uint);
		}
	}

	[Token(Token = "0x17000187")]
	internal uint Mid
	{
		[Token(Token = "0x60010B9")]
		[Address(RVA = "0x3D1E480", Offset = "0x3D1E480", VA = "0x3D1E480")]
		get
		{
			return default(uint);
		}
	}

	[Token(Token = "0x17000188")]
	internal bool IsNegative
	{
		[Token(Token = "0x60010BA")]
		[Address(RVA = "0x3D1E490", Offset = "0x3D1E490", VA = "0x3D1E490")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000189")]
	internal int Scale
	{
		[Token(Token = "0x60010BB")]
		[Address(RVA = "0x3D1E4A0", Offset = "0x3D1E4A0", VA = "0x3D1E4A0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700018A")]
	private ulong Low64
	{
		[Token(Token = "0x60010BC")]
		[Address(RVA = "0x3D1E4B0", Offset = "0x3D1E4B0", VA = "0x3D1E4B0")]
		get
		{
			return default(ulong);
		}
	}

	[Token(Token = "0x60010BD")]
	[Address(RVA = "0x3D1E4E0", Offset = "0x3D1E4E0", VA = "0x3D1E4E0")]
	private unsafe static ref DecCalc AsMutable(ref decimal d)
	{
		return ref *(DecCalc*)null;
	}

	[Token(Token = "0x60010BE")]
	[Address(RVA = "0x3D1E4F0", Offset = "0x3D1E4F0", VA = "0x3D1E4F0")]
	internal static uint DecDivMod1E9(ref decimal value)
	{
		return default(uint);
	}

	[Token(Token = "0x60010BF")]
	[Address(RVA = "0x3D1E650", Offset = "0x3D1E650", VA = "0x3D1E650")]
	public Decimal(int value)
	{
	}

	[Token(Token = "0x60010C0")]
	[Address(RVA = "0x3D1E690", Offset = "0x3D1E690", VA = "0x3D1E690")]
	[CLSCompliant(false)]
	public Decimal(uint value)
	{
	}

	[Token(Token = "0x60010C1")]
	[Address(RVA = "0x3D1E6B0", Offset = "0x3D1E6B0", VA = "0x3D1E6B0")]
	public Decimal(long value)
	{
	}

	[Token(Token = "0x60010C2")]
	[Address(RVA = "0x3D1E6E0", Offset = "0x3D1E6E0", VA = "0x3D1E6E0")]
	[CLSCompliant(false)]
	public Decimal(ulong value)
	{
	}

	[Token(Token = "0x60010C3")]
	[Address(RVA = "0x3D1E700", Offset = "0x3D1E700", VA = "0x3D1E700")]
	public Decimal(float value)
	{
	}

	[Token(Token = "0x60010C4")]
	[Address(RVA = "0x3D1EBA0", Offset = "0x3D1EBA0", VA = "0x3D1EBA0")]
	public Decimal(double value)
	{
	}

	[Token(Token = "0x60010C5")]
	[Address(RVA = "0x3D1F050", Offset = "0x3D1F050", VA = "0x3D1F050")]
	private static bool IsValid(int flags)
	{
		return default(bool);
	}

	[Token(Token = "0x60010C6")]
	[Address(RVA = "0x3D1F070", Offset = "0x3D1F070", VA = "0x3D1F070")]
	public Decimal(int[] bits)
	{
	}

	[Token(Token = "0x60010C7")]
	[Address(RVA = "0x3D1F190", Offset = "0x3D1F190", VA = "0x3D1F190")]
	public Decimal(int lo, int mid, int hi, bool isNegative, byte scale)
	{
	}

	[Token(Token = "0x60010C8")]
	[Address(RVA = "0x3D1F220", Offset = "0x3D1F220", VA = "0x3D1F220", Slot = "25")]
	private void System_002ERuntime_002ESerialization_002EIDeserializationCallback_002EOnDeserialization(object sender)
	{
	}

	[Token(Token = "0x60010C9")]
	[Address(RVA = "0x3D1F2C0", Offset = "0x3D1F2C0", VA = "0x3D1F2C0")]
	private Decimal(in decimal d, int flags)
	{
	}

	[Token(Token = "0x60010CA")]
	[Address(RVA = "0x3D1F2D0", Offset = "0x3D1F2D0", VA = "0x3D1F2D0")]
	internal static decimal Abs(ref decimal d)
	{
		return default(decimal);
	}

	[Token(Token = "0x60010CB")]
	[Address(RVA = "0x3D1F2F0", Offset = "0x3D1F2F0", VA = "0x3D1F2F0")]
	public static decimal Add(decimal d1, decimal d2)
	{
		return default(decimal);
	}

	[Token(Token = "0x60010CC")]
	[Address(RVA = "0x3D1FBD0", Offset = "0x3D1FBD0", VA = "0x3D1FBD0")]
	public static int Compare(decimal d1, decimal d2)
	{
		return default(int);
	}

	[Token(Token = "0x60010CD")]
	[Address(RVA = "0x3D1FD10", Offset = "0x3D1FD10", VA = "0x3D1FD10", Slot = "5")]
	public int CompareTo(object value)
	{
		return default(int);
	}

	[Token(Token = "0x60010CE")]
	[Address(RVA = "0x3D1FDF0", Offset = "0x3D1FDF0", VA = "0x3D1FDF0", Slot = "23")]
	public int CompareTo(decimal value)
	{
		return default(int);
	}

	[Token(Token = "0x60010CF")]
	[Address(RVA = "0x3D1FE50", Offset = "0x3D1FE50", VA = "0x3D1FE50")]
	public static decimal Divide(decimal d1, decimal d2)
	{
		return default(decimal);
	}

	[Token(Token = "0x60010D0")]
	[Address(RVA = "0x3D20FF0", Offset = "0x3D20FF0", VA = "0x3D20FF0", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x60010D1")]
	[Address(RVA = "0x3D21090", Offset = "0x3D21090", VA = "0x3D21090", Slot = "24")]
	public bool Equals(decimal value)
	{
		return default(bool);
	}

	[Token(Token = "0x60010D2")]
	[Address(RVA = "0x3D210F0", Offset = "0x3D210F0", VA = "0x3D210F0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60010D3")]
	[Address(RVA = "0x3D212C0", Offset = "0x3D212C0", VA = "0x3D212C0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60010D4")]
	[Address(RVA = "0x3D21350", Offset = "0x3D21350", VA = "0x3D21350")]
	public string ToString(string format)
	{
		return null;
	}

	[Token(Token = "0x60010D5")]
	[Address(RVA = "0x3D21410", Offset = "0x3D21410", VA = "0x3D21410", Slot = "21")]
	public string ToString(IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x60010D6")]
	[Address(RVA = "0x3D214B0", Offset = "0x3D214B0", VA = "0x3D214B0", Slot = "4")]
	public string ToString(string format, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x60010D7")]
	[Address(RVA = "0x3D21580", Offset = "0x3D21580", VA = "0x3D21580", Slot = "26")]
	public bool TryFormat(Span<char> destination, out int charsWritten, [Optional] ReadOnlySpan<char> format, [Optional] IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x60010D8")]
	[Address(RVA = "0x3D21640", Offset = "0x3D21640", VA = "0x3D21640")]
	public static decimal Parse(string s, IFormatProvider provider)
	{
		return default(decimal);
	}

	[Token(Token = "0x60010D9")]
	[Address(RVA = "0x3D21710", Offset = "0x3D21710", VA = "0x3D21710")]
	public static decimal Parse(string s, NumberStyles style, IFormatProvider provider)
	{
		return default(decimal);
	}

	[Token(Token = "0x60010DA")]
	[Address(RVA = "0x3D217E0", Offset = "0x3D217E0", VA = "0x3D217E0")]
	public static bool TryParse(string s, NumberStyles style, IFormatProvider provider, out decimal result)
	{
		return default(bool);
	}

	[Token(Token = "0x60010DB")]
	[Address(RVA = "0x3D218B0", Offset = "0x3D218B0", VA = "0x3D218B0")]
	public static int[] GetBits(decimal d)
	{
		return null;
	}

	[Token(Token = "0x60010DC")]
	[Address(RVA = "0x3D21930", Offset = "0x3D21930", VA = "0x3D21930")]
	internal unsafe static ref decimal Max(ref decimal d1, ref decimal d2)
	{
		return ref *(decimal*)null;
	}

	[Token(Token = "0x60010DD")]
	[Address(RVA = "0x3D21990", Offset = "0x3D21990", VA = "0x3D21990")]
	internal unsafe static ref decimal Min(ref decimal d1, ref decimal d2)
	{
		return ref *(decimal*)null;
	}

	[Token(Token = "0x60010DE")]
	[Address(RVA = "0x3D219F0", Offset = "0x3D219F0", VA = "0x3D219F0")]
	public static decimal Multiply(decimal d1, decimal d2)
	{
		return default(decimal);
	}

	[Token(Token = "0x60010DF")]
	[Address(RVA = "0x3D22070", Offset = "0x3D22070", VA = "0x3D22070")]
	public static decimal Negate(decimal d)
	{
		return default(decimal);
	}

	[Token(Token = "0x60010E0")]
	[Address(RVA = "0x3D22080", Offset = "0x3D22080", VA = "0x3D22080")]
	public static decimal Round(decimal d, int decimals)
	{
		return default(decimal);
	}

	[Token(Token = "0x60010E1")]
	[Address(RVA = "0x3D220E0", Offset = "0x3D220E0", VA = "0x3D220E0")]
	private static decimal Round(ref decimal d, int decimals, MidpointRounding mode)
	{
		return default(decimal);
	}

	[Token(Token = "0x60010E2")]
	[Address(RVA = "0x3D22610", Offset = "0x3D22610", VA = "0x3D22610")]
	public static decimal Subtract(decimal d1, decimal d2)
	{
		return default(decimal);
	}

	[Token(Token = "0x60010E3")]
	[Address(RVA = "0x3D226D0", Offset = "0x3D226D0", VA = "0x3D226D0")]
	public static byte ToByte(decimal value)
	{
		return default(byte);
	}

	[Token(Token = "0x60010E4")]
	[Address(RVA = "0x3D22A00", Offset = "0x3D22A00", VA = "0x3D22A00")]
	[CLSCompliant(false)]
	public static sbyte ToSByte(decimal value)
	{
		return default(sbyte);
	}

	[Token(Token = "0x60010E5")]
	[Address(RVA = "0x3D22D40", Offset = "0x3D22D40", VA = "0x3D22D40")]
	public static short ToInt16(decimal value)
	{
		return default(short);
	}

	[Token(Token = "0x60010E6")]
	[Address(RVA = "0x3D22EA0", Offset = "0x3D22EA0", VA = "0x3D22EA0")]
	public static double ToDouble(decimal d)
	{
		return default(double);
	}

	[Token(Token = "0x60010E7")]
	[Address(RVA = "0x3D22B60", Offset = "0x3D22B60", VA = "0x3D22B60")]
	public static int ToInt32(decimal d)
	{
		return default(int);
	}

	[Token(Token = "0x60010E8")]
	[Address(RVA = "0x3D23070", Offset = "0x3D23070", VA = "0x3D23070")]
	public static long ToInt64(decimal d)
	{
		return default(long);
	}

	[Token(Token = "0x60010E9")]
	[Address(RVA = "0x3D23270", Offset = "0x3D23270", VA = "0x3D23270")]
	[CLSCompliant(false)]
	public static ushort ToUInt16(decimal value)
	{
		return default(ushort);
	}

	[Token(Token = "0x60010EA")]
	[Address(RVA = "0x3D22830", Offset = "0x3D22830", VA = "0x3D22830")]
	[CLSCompliant(false)]
	public static uint ToUInt32(decimal d)
	{
		return default(uint);
	}

	[Token(Token = "0x60010EB")]
	[Address(RVA = "0x3D233D0", Offset = "0x3D233D0", VA = "0x3D233D0")]
	[CLSCompliant(false)]
	public static ulong ToUInt64(decimal d)
	{
		return default(ulong);
	}

	[Token(Token = "0x60010EC")]
	[Address(RVA = "0x3D235C0", Offset = "0x3D235C0", VA = "0x3D235C0")]
	public static float ToSingle(decimal d)
	{
		return default(float);
	}

	[Token(Token = "0x60010ED")]
	[Address(RVA = "0x3D236C0", Offset = "0x3D236C0", VA = "0x3D236C0")]
	public static decimal Truncate(decimal d)
	{
		return default(decimal);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010EE")]
	[Address(RVA = "0x3D237F0", Offset = "0x3D237F0", VA = "0x3D237F0")]
	private static void Truncate(ref decimal d)
	{
	}

	[Token(Token = "0x60010EF")]
	[Address(RVA = "0x3D23890", Offset = "0x3D23890", VA = "0x3D23890")]
	public static implicit operator decimal(byte value)
	{
		return default(decimal);
	}

	[Token(Token = "0x60010F0")]
	[Address(RVA = "0x3D238A0", Offset = "0x3D238A0", VA = "0x3D238A0")]
	[CLSCompliant(false)]
	public static implicit operator decimal(sbyte value)
	{
		return default(decimal);
	}

	[Token(Token = "0x60010F1")]
	[Address(RVA = "0x3D238C0", Offset = "0x3D238C0", VA = "0x3D238C0")]
	public static implicit operator decimal(short value)
	{
		return default(decimal);
	}

	[Token(Token = "0x60010F2")]
	[Address(RVA = "0x3D238E0", Offset = "0x3D238E0", VA = "0x3D238E0")]
	[CLSCompliant(false)]
	public static implicit operator decimal(ushort value)
	{
		return default(decimal);
	}

	[Token(Token = "0x60010F3")]
	[Address(RVA = "0x3D238F0", Offset = "0x3D238F0", VA = "0x3D238F0")]
	public static implicit operator decimal(char value)
	{
		return default(decimal);
	}

	[Token(Token = "0x60010F4")]
	[Address(RVA = "0x3D23900", Offset = "0x3D23900", VA = "0x3D23900")]
	public static implicit operator decimal(int value)
	{
		return default(decimal);
	}

	[Token(Token = "0x60010F5")]
	[Address(RVA = "0x3D23910", Offset = "0x3D23910", VA = "0x3D23910")]
	[CLSCompliant(false)]
	public static implicit operator decimal(uint value)
	{
		return default(decimal);
	}

	[Token(Token = "0x60010F6")]
	[Address(RVA = "0x3D23920", Offset = "0x3D23920", VA = "0x3D23920")]
	public static implicit operator decimal(long value)
	{
		return default(decimal);
	}

	[Token(Token = "0x60010F7")]
	[Address(RVA = "0x3D23940", Offset = "0x3D23940", VA = "0x3D23940")]
	[CLSCompliant(false)]
	public static implicit operator decimal(ulong value)
	{
		return default(decimal);
	}

	[Token(Token = "0x60010F8")]
	[Address(RVA = "0x3D23950", Offset = "0x3D23950", VA = "0x3D23950")]
	public static explicit operator decimal(float value)
	{
		return default(decimal);
	}

	[Token(Token = "0x60010F9")]
	[Address(RVA = "0x3D23A10", Offset = "0x3D23A10", VA = "0x3D23A10")]
	public static explicit operator decimal(double value)
	{
		return default(decimal);
	}

	[Token(Token = "0x60010FA")]
	[Address(RVA = "0x3D23AC0", Offset = "0x3D23AC0", VA = "0x3D23AC0")]
	public static explicit operator int(decimal value)
	{
		return default(int);
	}

	[Token(Token = "0x60010FB")]
	[Address(RVA = "0x3D23B10", Offset = "0x3D23B10", VA = "0x3D23B10")]
	public static explicit operator long(decimal value)
	{
		return default(long);
	}

	[Token(Token = "0x60010FC")]
	[Address(RVA = "0x3D23B60", Offset = "0x3D23B60", VA = "0x3D23B60")]
	[CLSCompliant(false)]
	public static explicit operator ulong(decimal value)
	{
		return default(ulong);
	}

	[Token(Token = "0x60010FD")]
	[Address(RVA = "0x3D23BB0", Offset = "0x3D23BB0", VA = "0x3D23BB0")]
	public static explicit operator float(decimal value)
	{
		return default(float);
	}

	[Token(Token = "0x60010FE")]
	[Address(RVA = "0x3D23CF0", Offset = "0x3D23CF0", VA = "0x3D23CF0")]
	public static explicit operator double(decimal value)
	{
		return default(double);
	}

	[Token(Token = "0x60010FF")]
	[Address(RVA = "0x3D23DC0", Offset = "0x3D23DC0", VA = "0x3D23DC0")]
	public static decimal operator -(decimal d)
	{
		return default(decimal);
	}

	[Token(Token = "0x6001100")]
	[Address(RVA = "0x3D23DD0", Offset = "0x3D23DD0", VA = "0x3D23DD0")]
	public static decimal operator ++(decimal d)
	{
		return default(decimal);
	}

	[Token(Token = "0x6001101")]
	[Address(RVA = "0x3D23EC0", Offset = "0x3D23EC0", VA = "0x3D23EC0")]
	public static decimal operator --(decimal d)
	{
		return default(decimal);
	}

	[Token(Token = "0x6001102")]
	[Address(RVA = "0x3D23FB0", Offset = "0x3D23FB0", VA = "0x3D23FB0")]
	public static decimal operator +(decimal d1, decimal d2)
	{
		return default(decimal);
	}

	[Token(Token = "0x6001103")]
	[Address(RVA = "0x3D24070", Offset = "0x3D24070", VA = "0x3D24070")]
	public static decimal operator -(decimal d1, decimal d2)
	{
		return default(decimal);
	}

	[Token(Token = "0x6001104")]
	[Address(RVA = "0x3D24130", Offset = "0x3D24130", VA = "0x3D24130")]
	public static decimal operator *(decimal d1, decimal d2)
	{
		return default(decimal);
	}

	[Token(Token = "0x6001105")]
	[Address(RVA = "0x3D241F0", Offset = "0x3D241F0", VA = "0x3D241F0")]
	public static decimal operator /(decimal d1, decimal d2)
	{
		return default(decimal);
	}

	[Token(Token = "0x6001106")]
	[Address(RVA = "0x3D242B0", Offset = "0x3D242B0", VA = "0x3D242B0")]
	public static decimal operator %(decimal d1, decimal d2)
	{
		return default(decimal);
	}

	[Token(Token = "0x6001107")]
	[Address(RVA = "0x3D247B0", Offset = "0x3D247B0", VA = "0x3D247B0")]
	public static bool operator ==(decimal d1, decimal d2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001108")]
	[Address(RVA = "0x3D24820", Offset = "0x3D24820", VA = "0x3D24820")]
	public static bool operator !=(decimal d1, decimal d2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001109")]
	[Address(RVA = "0x3D24890", Offset = "0x3D24890", VA = "0x3D24890")]
	public static bool operator <(decimal d1, decimal d2)
	{
		return default(bool);
	}

	[Token(Token = "0x600110A")]
	[Address(RVA = "0x3D24900", Offset = "0x3D24900", VA = "0x3D24900")]
	public static bool operator <=(decimal d1, decimal d2)
	{
		return default(bool);
	}

	[Token(Token = "0x600110B")]
	[Address(RVA = "0x3D24970", Offset = "0x3D24970", VA = "0x3D24970")]
	public static bool operator >(decimal d1, decimal d2)
	{
		return default(bool);
	}

	[Token(Token = "0x600110C")]
	[Address(RVA = "0x3D249E0", Offset = "0x3D249E0", VA = "0x3D249E0")]
	public static bool operator >=(decimal d1, decimal d2)
	{
		return default(bool);
	}

	[Token(Token = "0x600110D")]
	[Address(RVA = "0x3D24A50", Offset = "0x3D24A50", VA = "0x3D24A50", Slot = "6")]
	public TypeCode GetTypeCode()
	{
		return default(TypeCode);
	}

	[Token(Token = "0x600110E")]
	[Address(RVA = "0x3D24A60", Offset = "0x3D24A60", VA = "0x3D24A60", Slot = "7")]
	private bool System_002EIConvertible_002EToBoolean(IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x600110F")]
	[Address(RVA = "0x3D24AC0", Offset = "0x3D24AC0", VA = "0x3D24AC0", Slot = "8")]
	private char System_002EIConvertible_002EToChar(IFormatProvider provider)
	{
		return default(char);
	}

	[Token(Token = "0x6001110")]
	[Address(RVA = "0x3D24B40", Offset = "0x3D24B40", VA = "0x3D24B40", Slot = "9")]
	private sbyte System_002EIConvertible_002EToSByte(IFormatProvider provider)
	{
		return default(sbyte);
	}

	[Token(Token = "0x6001111")]
	[Address(RVA = "0x3D24BA0", Offset = "0x3D24BA0", VA = "0x3D24BA0", Slot = "10")]
	private byte System_002EIConvertible_002EToByte(IFormatProvider provider)
	{
		return default(byte);
	}

	[Token(Token = "0x6001112")]
	[Address(RVA = "0x3D24C00", Offset = "0x3D24C00", VA = "0x3D24C00", Slot = "11")]
	private short System_002EIConvertible_002EToInt16(IFormatProvider provider)
	{
		return default(short);
	}

	[Token(Token = "0x6001113")]
	[Address(RVA = "0x3D24C60", Offset = "0x3D24C60", VA = "0x3D24C60", Slot = "12")]
	private ushort System_002EIConvertible_002EToUInt16(IFormatProvider provider)
	{
		return default(ushort);
	}

	[Token(Token = "0x6001114")]
	[Address(RVA = "0x3D24CC0", Offset = "0x3D24CC0", VA = "0x3D24CC0", Slot = "13")]
	private int System_002EIConvertible_002EToInt32(IFormatProvider provider)
	{
		return default(int);
	}

	[Token(Token = "0x6001115")]
	[Address(RVA = "0x3D24D20", Offset = "0x3D24D20", VA = "0x3D24D20", Slot = "14")]
	private uint System_002EIConvertible_002EToUInt32(IFormatProvider provider)
	{
		return default(uint);
	}

	[Token(Token = "0x6001116")]
	[Address(RVA = "0x3D24D80", Offset = "0x3D24D80", VA = "0x3D24D80", Slot = "15")]
	private long System_002EIConvertible_002EToInt64(IFormatProvider provider)
	{
		return default(long);
	}

	[Token(Token = "0x6001117")]
	[Address(RVA = "0x3D24DE0", Offset = "0x3D24DE0", VA = "0x3D24DE0", Slot = "16")]
	private ulong System_002EIConvertible_002EToUInt64(IFormatProvider provider)
	{
		return default(ulong);
	}

	[Token(Token = "0x6001118")]
	[Address(RVA = "0x3D24E40", Offset = "0x3D24E40", VA = "0x3D24E40", Slot = "17")]
	private float System_002EIConvertible_002EToSingle(IFormatProvider provider)
	{
		return default(float);
	}

	[Token(Token = "0x6001119")]
	[Address(RVA = "0x3D24EA0", Offset = "0x3D24EA0", VA = "0x3D24EA0", Slot = "18")]
	private double System_002EIConvertible_002EToDouble(IFormatProvider provider)
	{
		return default(double);
	}

	[Token(Token = "0x600111A")]
	[Address(RVA = "0x3D24F00", Offset = "0x3D24F00", VA = "0x3D24F00", Slot = "19")]
	private decimal System_002EIConvertible_002EToDecimal(IFormatProvider provider)
	{
		return default(decimal);
	}

	[Token(Token = "0x600111B")]
	[Address(RVA = "0x3D24F10", Offset = "0x3D24F10", VA = "0x3D24F10", Slot = "20")]
	private DateTime System_002EIConvertible_002EToDateTime(IFormatProvider provider)
	{
		return default(DateTime);
	}

	[Token(Token = "0x600111C")]
	[Address(RVA = "0x3D24F90", Offset = "0x3D24F90", VA = "0x3D24F90", Slot = "22")]
	private object System_002EIConvertible_002EToType(Type type, IFormatProvider provider)
	{
		return null;
	}
}
