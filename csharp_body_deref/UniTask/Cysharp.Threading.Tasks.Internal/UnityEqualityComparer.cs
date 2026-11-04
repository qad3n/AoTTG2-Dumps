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
		[Address(RVA = "0x2950210", Offset = "0x294E810", VA = "0x182950210", Slot = "4")]
		public bool Equals(Vector2 self, Vector2 vector)
		{
			return default(bool);
		}

		[Token(Token = "0x6000D0D")]
		[Address(RVA = "0x2950260", Offset = "0x294E860", VA = "0x182950260", Slot = "5")]
		public int GetHashCode(Vector2 obj)
		{
			return default(int);
		}

		[Token(Token = "0x6000D0E")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public Vector2EqualityComparer()
		{
		}
	}

	[Token(Token = "0x2000241")]
	private sealed class Vector3EqualityComparer : IEqualityComparer<Vector3>
	{
		[Token(Token = "0x6000D0F")]
		[Address(RVA = "0x2950320", Offset = "0x294E920", VA = "0x182950320", Slot = "4")]
		public bool Equals(Vector3 self, Vector3 vector)
		{
			return default(bool);
		}

		[Token(Token = "0x6000D10")]
		[Address(RVA = "0xB35750", Offset = "0xB33D50", VA = "0x180B35750", Slot = "5")]
		public int GetHashCode(Vector3 obj)
		{
			return default(int);
		}

		[Token(Token = "0x6000D11")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public Vector3EqualityComparer()
		{
		}
	}

	[Token(Token = "0x2000242")]
	private sealed class Vector4EqualityComparer : IEqualityComparer<Vector4>
	{
		[Token(Token = "0x6000D12")]
		[Address(RVA = "0x293FE80", Offset = "0x293E480", VA = "0x18293FE80", Slot = "4")]
		public bool Equals(Vector4 self, Vector4 vector)
		{
			return default(bool);
		}

		[Token(Token = "0x6000D13")]
		[Address(RVA = "0xB21BE0", Offset = "0xB201E0", VA = "0x180B21BE0", Slot = "5")]
		public int GetHashCode(Vector4 obj)
		{
			return default(int);
		}

		[Token(Token = "0x6000D14")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public Vector4EqualityComparer()
		{
		}
	}

	[Token(Token = "0x2000243")]
	private sealed class ColorEqualityComparer : IEqualityComparer<Color>
	{
		[Token(Token = "0x6000D15")]
		[Address(RVA = "0x293FE80", Offset = "0x293E480", VA = "0x18293FE80", Slot = "4")]
		public bool Equals(Color self, Color other)
		{
			return default(bool);
		}

		[Token(Token = "0x6000D16")]
		[Address(RVA = "0xB21BE0", Offset = "0xB201E0", VA = "0x180B21BE0", Slot = "5")]
		public int GetHashCode(Color obj)
		{
			return default(int);
		}

		[Token(Token = "0x6000D17")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public ColorEqualityComparer()
		{
		}
	}

	[Token(Token = "0x2000244")]
	private sealed class RectEqualityComparer : IEqualityComparer<Rect>
	{
		[Token(Token = "0x6000D18")]
		[Address(RVA = "0x2943640", Offset = "0x2941C40", VA = "0x182943640", Slot = "4")]
		public bool Equals(Rect self, Rect other)
		{
			return default(bool);
		}

		[Token(Token = "0x6000D19")]
		[Address(RVA = "0x2943770", Offset = "0x2941D70", VA = "0x182943770", Slot = "5")]
		public int GetHashCode(Rect obj)
		{
			return default(int);
		}

		[Token(Token = "0x6000D1A")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public RectEqualityComparer()
		{
		}
	}

	[Token(Token = "0x2000245")]
	private sealed class BoundsEqualityComparer : IEqualityComparer<Bounds>
	{
		[Token(Token = "0x6000D1B")]
		[Address(RVA = "0x293F990", Offset = "0x293DF90", VA = "0x18293F990", Slot = "4")]
		public bool Equals(Bounds self, Bounds vector)
		{
			return default(bool);
		}

		[Token(Token = "0x6000D1C")]
		[Address(RVA = "0x293F9F0", Offset = "0x293DFF0", VA = "0x18293F9F0", Slot = "5")]
		public int GetHashCode(Bounds obj)
		{
			return default(int);
		}

		[Token(Token = "0x6000D1D")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public BoundsEqualityComparer()
		{
		}
	}

	[Token(Token = "0x2000246")]
	private sealed class QuaternionEqualityComparer : IEqualityComparer<Quaternion>
	{
		[Token(Token = "0x6000D1E")]
		[Address(RVA = "0x293FE80", Offset = "0x293E480", VA = "0x18293FE80", Slot = "4")]
		public bool Equals(Quaternion self, Quaternion vector)
		{
			return default(bool);
		}

		[Token(Token = "0x6000D1F")]
		[Address(RVA = "0xB21BE0", Offset = "0xB201E0", VA = "0x180B21BE0", Slot = "5")]
		public int GetHashCode(Quaternion obj)
		{
			return default(int);
		}

		[Token(Token = "0x6000D20")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public QuaternionEqualityComparer()
		{
		}
	}

	[Token(Token = "0x2000247")]
	private sealed class Color32EqualityComparer : IEqualityComparer<Color32>
	{
		[Token(Token = "0x6000D21")]
		[Address(RVA = "0x293FD90", Offset = "0x293E390", VA = "0x18293FD90", Slot = "4")]
		public bool Equals(Color32 self, Color32 vector)
		{
			return default(bool);
		}

		[Token(Token = "0x6000D22")]
		[Address(RVA = "0x293FE10", Offset = "0x293E410", VA = "0x18293FE10", Slot = "5")]
		public int GetHashCode(Color32 obj)
		{
			return default(int);
		}

		[Token(Token = "0x6000D23")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public Color32EqualityComparer()
		{
		}
	}

	[Token(Token = "0x2000248")]
	private sealed class Vector2IntEqualityComparer : IEqualityComparer<Vector2Int>
	{
		[Token(Token = "0x6000D24")]
		[Address(RVA = "0x2950290", Offset = "0x294E890", VA = "0x182950290", Slot = "4")]
		public bool Equals(Vector2Int self, Vector2Int vector)
		{
			return default(bool);
		}

		[Token(Token = "0x6000D25")]
		[Address(RVA = "0x29502E0", Offset = "0x294E8E0", VA = "0x1829502E0", Slot = "5")]
		public int GetHashCode(Vector2Int obj)
		{
			return default(int);
		}

		[Token(Token = "0x6000D26")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
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
		[Address(RVA = "0x2950390", Offset = "0x294E990", VA = "0x182950390", Slot = "4")]
		public bool Equals(Vector3Int self, Vector3Int vector)
		{
			return default(bool);
		}

		[Token(Token = "0x6000D28")]
		[Address(RVA = "0x2950410", Offset = "0x294EA10", VA = "0x182950410", Slot = "5")]
		public int GetHashCode(Vector3Int obj)
		{
			return default(int);
		}

		[Token(Token = "0x6000D29")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public Vector3IntEqualityComparer()
		{
		}
	}

	[Token(Token = "0x200024A")]
	private sealed class RangeIntEqualityComparer : IEqualityComparer<RangeInt>
	{
		[Token(Token = "0x6000D2B")]
		[Address(RVA = "0x29435D0", Offset = "0x2941BD0", VA = "0x1829435D0", Slot = "4")]
		public bool Equals(RangeInt self, RangeInt vector)
		{
			return default(bool);
		}

		[Token(Token = "0x6000D2C")]
		[Address(RVA = "0x2943610", Offset = "0x2941C10", VA = "0x182943610", Slot = "5")]
		public int GetHashCode(RangeInt obj)
		{
			return default(int);
		}

		[Token(Token = "0x6000D2D")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public RangeIntEqualityComparer()
		{
		}
	}

	[Token(Token = "0x200024B")]
	private sealed class RectIntEqualityComparer : IEqualityComparer<RectInt>
	{
		[Token(Token = "0x6000D2E")]
		[Address(RVA = "0x2943840", Offset = "0x2941E40", VA = "0x182943840", Slot = "4")]
		public bool Equals(RectInt self, RectInt other)
		{
			return default(bool);
		}

		[Token(Token = "0x6000D2F")]
		[Address(RVA = "0x2943950", Offset = "0x2941F50", VA = "0x182943950", Slot = "5")]
		public int GetHashCode(RectInt obj)
		{
			return default(int);
		}

		[Token(Token = "0x6000D30")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public RectIntEqualityComparer()
		{
		}
	}

	[Token(Token = "0x200024C")]
	private sealed class BoundsIntEqualityComparer : IEqualityComparer<BoundsInt>
	{
		[Token(Token = "0x6000D31")]
		[Address(RVA = "0x293FAA0", Offset = "0x293E0A0", VA = "0x18293FAA0", Slot = "4")]
		public bool Equals(BoundsInt self, BoundsInt vector)
		{
			return default(bool);
		}

		[Token(Token = "0x6000D32")]
		[Address(RVA = "0x293FBF0", Offset = "0x293E1F0", VA = "0x18293FBF0", Slot = "5")]
		public int GetHashCode(BoundsInt obj)
		{
			return default(int);
		}

		[Token(Token = "0x6000D33")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
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
	[Address(RVA = "0x294DAA0", Offset = "0x294C0A0", VA = "0x18294DAA0")]
	private static object GetDefaultHelper(Type type)
	{
		return null;
	}
}
