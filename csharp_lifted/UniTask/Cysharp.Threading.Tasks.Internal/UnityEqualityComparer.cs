// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Internal.UnityEqualityComparer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Internal;

[Token(Token = "0x200023E")]
internal static class UnityEqualityComparer
{
	[Token(Token = "0x200023F")]
	private static class Cache<T>
	{
		[Token(Token = "0x40006A2")]
		[FieldOffset(Offset = "0x0")]
		public static readonly IEqualityComparer<T> Comparer;

		[Token(Token = "0x6000D0B")]
		static Cache()
		{
		}
	}

	[Token(Token = "0x2000240")]
	private sealed class Vector2EqualityComparer : IEqualityComparer<Vector2>
	{
		[Token(Token = "0x6000D0C")]
		[Address(RVA = "0x630B5B0", Offset = "0x630A5B0", VA = "0x630B5B0", Slot = "4")]
		public bool Equals(Vector2 self, Vector2 vector)
		{
			return default(bool);
		}

		[Token(Token = "0x6000D0D")]
		[Address(RVA = "0x630B600", Offset = "0x630A600", VA = "0x630B600", Slot = "5")]
		public int GetHashCode(Vector2 obj)
		{
			return default(int);
		}

		[Token(Token = "0x6000D0E")]
		[Address(RVA = "0x630B4E0", Offset = "0x630A4E0", VA = "0x630B4E0")]
		public Vector2EqualityComparer()
		{
		}
	}

	[Token(Token = "0x2000241")]
	private sealed class Vector3EqualityComparer : IEqualityComparer<Vector3>
	{
		[Token(Token = "0x6000D0F")]
		[Address(RVA = "0x630B630", Offset = "0x630A630", VA = "0x630B630", Slot = "4")]
		public bool Equals(Vector3 self, Vector3 vector)
		{
			return default(bool);
		}

		[Token(Token = "0x6000D10")]
		[Address(RVA = "0x630B6A0", Offset = "0x630A6A0", VA = "0x630B6A0", Slot = "5")]
		public int GetHashCode(Vector3 obj)
		{
			return default(int);
		}

		[Token(Token = "0x6000D11")]
		[Address(RVA = "0x630B4F0", Offset = "0x630A4F0", VA = "0x630B4F0")]
		public Vector3EqualityComparer()
		{
		}
	}

	[Token(Token = "0x2000242")]
	private sealed class Vector4EqualityComparer : IEqualityComparer<Vector4>
	{
		[Token(Token = "0x6000D12")]
		[Address(RVA = "0x630B6F0", Offset = "0x630A6F0", VA = "0x630B6F0", Slot = "4")]
		public bool Equals(Vector4 self, Vector4 vector)
		{
			return default(bool);
		}

		[Token(Token = "0x6000D13")]
		[Address(RVA = "0x630B770", Offset = "0x630A770", VA = "0x630B770", Slot = "5")]
		public int GetHashCode(Vector4 obj)
		{
			return default(int);
		}

		[Token(Token = "0x6000D14")]
		[Address(RVA = "0x630B500", Offset = "0x630A500", VA = "0x630B500")]
		public Vector4EqualityComparer()
		{
		}
	}

	[Token(Token = "0x2000243")]
	private sealed class ColorEqualityComparer : IEqualityComparer<Color>
	{
		[Token(Token = "0x6000D15")]
		[Address(RVA = "0x630B7E0", Offset = "0x630A7E0", VA = "0x630B7E0", Slot = "4")]
		public bool Equals(Color self, Color other)
		{
			return default(bool);
		}

		[Token(Token = "0x6000D16")]
		[Address(RVA = "0x630B860", Offset = "0x630A860", VA = "0x630B860", Slot = "5")]
		public int GetHashCode(Color obj)
		{
			return default(int);
		}

		[Token(Token = "0x6000D17")]
		[Address(RVA = "0x630B510", Offset = "0x630A510", VA = "0x630B510")]
		public ColorEqualityComparer()
		{
		}
	}

	[Token(Token = "0x2000244")]
	private sealed class RectEqualityComparer : IEqualityComparer<Rect>
	{
		[Token(Token = "0x6000D18")]
		[Address(RVA = "0x630B8D0", Offset = "0x630A8D0", VA = "0x630B8D0", Slot = "4")]
		public bool Equals(Rect self, Rect other)
		{
			return default(bool);
		}

		[Token(Token = "0x6000D19")]
		[Address(RVA = "0x630BA00", Offset = "0x630AA00", VA = "0x630BA00", Slot = "5")]
		public int GetHashCode(Rect obj)
		{
			return default(int);
		}

		[Token(Token = "0x6000D1A")]
		[Address(RVA = "0x630B530", Offset = "0x630A530", VA = "0x630B530")]
		public RectEqualityComparer()
		{
		}
	}

	[Token(Token = "0x2000245")]
	private sealed class BoundsEqualityComparer : IEqualityComparer<Bounds>
	{
		[Token(Token = "0x6000D1B")]
		[Address(RVA = "0x630BAD0", Offset = "0x630AAD0", VA = "0x630BAD0", Slot = "4")]
		public bool Equals(Bounds self, Bounds vector)
		{
			return default(bool);
		}

		[Token(Token = "0x6000D1C")]
		[Address(RVA = "0x630BB40", Offset = "0x630AB40", VA = "0x630BB40", Slot = "5")]
		public int GetHashCode(Bounds obj)
		{
			return default(int);
		}

		[Token(Token = "0x6000D1D")]
		[Address(RVA = "0x630B540", Offset = "0x630A540", VA = "0x630B540")]
		public BoundsEqualityComparer()
		{
		}
	}

	[Token(Token = "0x2000246")]
	private sealed class QuaternionEqualityComparer : IEqualityComparer<Quaternion>
	{
		[Token(Token = "0x6000D1E")]
		[Address(RVA = "0x630BC10", Offset = "0x630AC10", VA = "0x630BC10", Slot = "4")]
		public bool Equals(Quaternion self, Quaternion vector)
		{
			return default(bool);
		}

		[Token(Token = "0x6000D1F")]
		[Address(RVA = "0x630BC90", Offset = "0x630AC90", VA = "0x630BC90", Slot = "5")]
		public int GetHashCode(Quaternion obj)
		{
			return default(int);
		}

		[Token(Token = "0x6000D20")]
		[Address(RVA = "0x630B550", Offset = "0x630A550", VA = "0x630B550")]
		public QuaternionEqualityComparer()
		{
		}
	}

	[Token(Token = "0x2000247")]
	private sealed class Color32EqualityComparer : IEqualityComparer<Color32>
	{
		[Token(Token = "0x6000D21")]
		[Address(RVA = "0x630BD00", Offset = "0x630AD00", VA = "0x630BD00", Slot = "4")]
		public bool Equals(Color32 self, Color32 vector)
		{
			return default(bool);
		}

		[Token(Token = "0x6000D22")]
		[Address(RVA = "0x630BD70", Offset = "0x630AD70", VA = "0x630BD70", Slot = "5")]
		public int GetHashCode(Color32 obj)
		{
			return default(int);
		}

		[Token(Token = "0x6000D23")]
		[Address(RVA = "0x630B520", Offset = "0x630A520", VA = "0x630B520")]
		public Color32EqualityComparer()
		{
		}
	}

	[Token(Token = "0x2000248")]
	private sealed class Vector2IntEqualityComparer : IEqualityComparer<Vector2Int>
	{
		[Token(Token = "0x6000D24")]
		[Address(RVA = "0x630BDD0", Offset = "0x630ADD0", VA = "0x630BDD0", Slot = "4")]
		public bool Equals(Vector2Int self, Vector2Int vector)
		{
			return default(bool);
		}

		[Token(Token = "0x6000D25")]
		[Address(RVA = "0x630BE30", Offset = "0x630AE30", VA = "0x630BE30", Slot = "5")]
		public int GetHashCode(Vector2Int obj)
		{
			return default(int);
		}

		[Token(Token = "0x6000D26")]
		[Address(RVA = "0x630B560", Offset = "0x630A560", VA = "0x630B560")]
		public Vector2IntEqualityComparer()
		{
		}
	}

	[Token(Token = "0x2000249")]
	private sealed class Vector3IntEqualityComparer : IEqualityComparer<Vector3Int>
	{
		[Token(Token = "0x40006A3")]
		[FieldOffset(Offset = "0x0")]
		public static readonly Vector3IntEqualityComparer Default;

		[Token(Token = "0x6000D27")]
		[Address(RVA = "0x630BE70", Offset = "0x630AE70", VA = "0x630BE70", Slot = "4")]
		public bool Equals(Vector3Int self, Vector3Int vector)
		{
			return default(bool);
		}

		[Token(Token = "0x6000D28")]
		[Address(RVA = "0x630BEF0", Offset = "0x630AEF0", VA = "0x630BEF0", Slot = "5")]
		public int GetHashCode(Vector3Int obj)
		{
			return default(int);
		}

		[Token(Token = "0x6000D29")]
		[Address(RVA = "0x630B570", Offset = "0x630A570", VA = "0x630B570")]
		public Vector3IntEqualityComparer()
		{
		}
	}

	[Token(Token = "0x200024A")]
	private sealed class RangeIntEqualityComparer : IEqualityComparer<RangeInt>
	{
		[Token(Token = "0x6000D2B")]
		[Address(RVA = "0x630BFC0", Offset = "0x630AFC0", VA = "0x630BFC0", Slot = "4")]
		public bool Equals(RangeInt self, RangeInt vector)
		{
			return default(bool);
		}

		[Token(Token = "0x6000D2C")]
		[Address(RVA = "0x630C000", Offset = "0x630B000", VA = "0x630C000", Slot = "5")]
		public int GetHashCode(RangeInt obj)
		{
			return default(int);
		}

		[Token(Token = "0x6000D2D")]
		[Address(RVA = "0x630B580", Offset = "0x630A580", VA = "0x630B580")]
		public RangeIntEqualityComparer()
		{
		}
	}

	[Token(Token = "0x200024B")]
	private sealed class RectIntEqualityComparer : IEqualityComparer<RectInt>
	{
		[Token(Token = "0x6000D2E")]
		[Address(RVA = "0x630C030", Offset = "0x630B030", VA = "0x630C030", Slot = "4")]
		public bool Equals(RectInt self, RectInt other)
		{
			return default(bool);
		}

		[Token(Token = "0x6000D2F")]
		[Address(RVA = "0x630C140", Offset = "0x630B140", VA = "0x630C140", Slot = "5")]
		public int GetHashCode(RectInt obj)
		{
			return default(int);
		}

		[Token(Token = "0x6000D30")]
		[Address(RVA = "0x630B590", Offset = "0x630A590", VA = "0x630B590")]
		public RectIntEqualityComparer()
		{
		}
	}

	[Token(Token = "0x200024C")]
	private sealed class BoundsIntEqualityComparer : IEqualityComparer<BoundsInt>
	{
		[Token(Token = "0x6000D31")]
		[Address(RVA = "0x630C200", Offset = "0x630B200", VA = "0x630C200", Slot = "4")]
		public bool Equals(BoundsInt self, BoundsInt vector)
		{
			return default(bool);
		}

		[Token(Token = "0x6000D32")]
		[Address(RVA = "0x630C390", Offset = "0x630B390", VA = "0x630C390", Slot = "5")]
		public int GetHashCode(BoundsInt obj)
		{
			return default(int);
		}

		[Token(Token = "0x6000D33")]
		[Address(RVA = "0x630B5A0", Offset = "0x630A5A0", VA = "0x630B5A0")]
		public BoundsIntEqualityComparer()
		{
		}
	}

	[Token(Token = "0x4000688")]
	[FieldOffset(Offset = "0x0")]
	public static readonly IEqualityComparer<Vector2> Vector2;

	[Token(Token = "0x4000689")]
	[FieldOffset(Offset = "0x8")]
	public static readonly IEqualityComparer<Vector3> Vector3;

	[Token(Token = "0x400068A")]
	[FieldOffset(Offset = "0x10")]
	public static readonly IEqualityComparer<Vector4> Vector4;

	[Token(Token = "0x400068B")]
	[FieldOffset(Offset = "0x18")]
	public static readonly IEqualityComparer<Color> Color;

	[Token(Token = "0x400068C")]
	[FieldOffset(Offset = "0x20")]
	public static readonly IEqualityComparer<Color32> Color32;

	[Token(Token = "0x400068D")]
	[FieldOffset(Offset = "0x28")]
	public static readonly IEqualityComparer<Rect> Rect;

	[Token(Token = "0x400068E")]
	[FieldOffset(Offset = "0x30")]
	public static readonly IEqualityComparer<Bounds> Bounds;

	[Token(Token = "0x400068F")]
	[FieldOffset(Offset = "0x38")]
	public static readonly IEqualityComparer<Quaternion> Quaternion;

	[Token(Token = "0x4000690")]
	[FieldOffset(Offset = "0x40")]
	private static readonly RuntimeTypeHandle vector2Type;

	[Token(Token = "0x4000691")]
	[FieldOffset(Offset = "0x48")]
	private static readonly RuntimeTypeHandle vector3Type;

	[Token(Token = "0x4000692")]
	[FieldOffset(Offset = "0x50")]
	private static readonly RuntimeTypeHandle vector4Type;

	[Token(Token = "0x4000693")]
	[FieldOffset(Offset = "0x58")]
	private static readonly RuntimeTypeHandle colorType;

	[Token(Token = "0x4000694")]
	[FieldOffset(Offset = "0x60")]
	private static readonly RuntimeTypeHandle color32Type;

	[Token(Token = "0x4000695")]
	[FieldOffset(Offset = "0x68")]
	private static readonly RuntimeTypeHandle rectType;

	[Token(Token = "0x4000696")]
	[FieldOffset(Offset = "0x70")]
	private static readonly RuntimeTypeHandle boundsType;

	[Token(Token = "0x4000697")]
	[FieldOffset(Offset = "0x78")]
	private static readonly RuntimeTypeHandle quaternionType;

	[Token(Token = "0x4000698")]
	[FieldOffset(Offset = "0x80")]
	public static readonly IEqualityComparer<Vector2Int> Vector2Int;

	[Token(Token = "0x4000699")]
	[FieldOffset(Offset = "0x88")]
	public static readonly IEqualityComparer<Vector3Int> Vector3Int;

	[Token(Token = "0x400069A")]
	[FieldOffset(Offset = "0x90")]
	public static readonly IEqualityComparer<RangeInt> RangeInt;

	[Token(Token = "0x400069B")]
	[FieldOffset(Offset = "0x98")]
	public static readonly IEqualityComparer<RectInt> RectInt;

	[Token(Token = "0x400069C")]
	[FieldOffset(Offset = "0xA0")]
	public static readonly IEqualityComparer<BoundsInt> BoundsInt;

	[Token(Token = "0x400069D")]
	[FieldOffset(Offset = "0xA8")]
	private static readonly RuntimeTypeHandle vector2IntType;

	[Token(Token = "0x400069E")]
	[FieldOffset(Offset = "0xB0")]
	private static readonly RuntimeTypeHandle vector3IntType;

	[Token(Token = "0x400069F")]
	[FieldOffset(Offset = "0xB8")]
	private static readonly RuntimeTypeHandle rangeIntType;

	[Token(Token = "0x40006A0")]
	[FieldOffset(Offset = "0xC0")]
	private static readonly RuntimeTypeHandle rectIntType;

	[Token(Token = "0x40006A1")]
	[FieldOffset(Offset = "0xC8")]
	private static readonly RuntimeTypeHandle boundsIntType;

	[Token(Token = "0x6000D08")]
	public static IEqualityComparer<T> GetDefault<T>()
	{
		return null;
	}

	[Token(Token = "0x6000D09")]
	[Address(RVA = "0x630A930", Offset = "0x6309930", VA = "0x630A930")]
	private static object GetDefaultHelper(Type type)
	{
		return null;
	}
}
