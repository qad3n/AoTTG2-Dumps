using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Internal;

[Token(Token = "0x200023B")]
internal static class UnityEqualityComparer
{
	[Token(Token = "0x200023C")]
	private static class Cache<T>
	{
		[Token(Token = "0x400068F")]
		[FieldOffset(Offset = "0x0")]
		public static readonly IEqualityComparer<T> Comparer;

		[Token(Token = "0x6000CE7")]
		static Cache()
		{
		}
	}

	[Token(Token = "0x200023D")]
	private sealed class Vector2EqualityComparer : IEqualityComparer<Vector2>
	{
		[Token(Token = "0x6000CE8")]
		[Address(RVA = "0x46F8FA0", Offset = "0x46F8FA0", VA = "0x46F8FA0", Slot = "4")]
		public bool Equals(Vector2 self, Vector2 vector)
		{
			return default(bool);
		}

		[Token(Token = "0x6000CE9")]
		[Address(RVA = "0x46F8FF0", Offset = "0x46F8FF0", VA = "0x46F8FF0", Slot = "5")]
		public int GetHashCode(Vector2 obj)
		{
			return default(int);
		}

		[Token(Token = "0x6000CEA")]
		[Address(RVA = "0x46F8ED0", Offset = "0x46F8ED0", VA = "0x46F8ED0")]
		public Vector2EqualityComparer()
		{
		}
	}

	[Token(Token = "0x200023E")]
	private sealed class Vector3EqualityComparer : IEqualityComparer<Vector3>
	{
		[Token(Token = "0x6000CEB")]
		[Address(RVA = "0x46F9020", Offset = "0x46F9020", VA = "0x46F9020", Slot = "4")]
		public bool Equals(Vector3 self, Vector3 vector)
		{
			return default(bool);
		}

		[Token(Token = "0x6000CEC")]
		[Address(RVA = "0x46F9090", Offset = "0x46F9090", VA = "0x46F9090", Slot = "5")]
		public int GetHashCode(Vector3 obj)
		{
			return default(int);
		}

		[Token(Token = "0x6000CED")]
		[Address(RVA = "0x46F8EE0", Offset = "0x46F8EE0", VA = "0x46F8EE0")]
		public Vector3EqualityComparer()
		{
		}
	}

	[Token(Token = "0x200023F")]
	private sealed class Vector4EqualityComparer : IEqualityComparer<Vector4>
	{
		[Token(Token = "0x6000CEE")]
		[Address(RVA = "0x46F90E0", Offset = "0x46F90E0", VA = "0x46F90E0", Slot = "4")]
		public bool Equals(Vector4 self, Vector4 vector)
		{
			return default(bool);
		}

		[Token(Token = "0x6000CEF")]
		[Address(RVA = "0x46F9160", Offset = "0x46F9160", VA = "0x46F9160", Slot = "5")]
		public int GetHashCode(Vector4 obj)
		{
			return default(int);
		}

		[Token(Token = "0x6000CF0")]
		[Address(RVA = "0x46F8EF0", Offset = "0x46F8EF0", VA = "0x46F8EF0")]
		public Vector4EqualityComparer()
		{
		}
	}

	[Token(Token = "0x2000240")]
	private sealed class ColorEqualityComparer : IEqualityComparer<Color>
	{
		[Token(Token = "0x6000CF1")]
		[Address(RVA = "0x46F91D0", Offset = "0x46F91D0", VA = "0x46F91D0", Slot = "4")]
		public bool Equals(Color self, Color other)
		{
			return default(bool);
		}

		[Token(Token = "0x6000CF2")]
		[Address(RVA = "0x46F9250", Offset = "0x46F9250", VA = "0x46F9250", Slot = "5")]
		public int GetHashCode(Color obj)
		{
			return default(int);
		}

		[Token(Token = "0x6000CF3")]
		[Address(RVA = "0x46F8F00", Offset = "0x46F8F00", VA = "0x46F8F00")]
		public ColorEqualityComparer()
		{
		}
	}

	[Token(Token = "0x2000241")]
	private sealed class RectEqualityComparer : IEqualityComparer<Rect>
	{
		[Token(Token = "0x6000CF4")]
		[Address(RVA = "0x46F92C0", Offset = "0x46F92C0", VA = "0x46F92C0", Slot = "4")]
		public bool Equals(Rect self, Rect other)
		{
			return default(bool);
		}

		[Token(Token = "0x6000CF5")]
		[Address(RVA = "0x46F9370", Offset = "0x46F9370", VA = "0x46F9370", Slot = "5")]
		public int GetHashCode(Rect obj)
		{
			return default(int);
		}

		[Token(Token = "0x6000CF6")]
		[Address(RVA = "0x46F8F20", Offset = "0x46F8F20", VA = "0x46F8F20")]
		public RectEqualityComparer()
		{
		}
	}

	[Token(Token = "0x2000242")]
	private sealed class BoundsEqualityComparer : IEqualityComparer<Bounds>
	{
		[Token(Token = "0x6000CF7")]
		[Address(RVA = "0x46F9410", Offset = "0x46F9410", VA = "0x46F9410", Slot = "4")]
		public bool Equals(Bounds self, Bounds vector)
		{
			return default(bool);
		}

		[Token(Token = "0x6000CF8")]
		[Address(RVA = "0x46F9490", Offset = "0x46F9490", VA = "0x46F9490", Slot = "5")]
		public int GetHashCode(Bounds obj)
		{
			return default(int);
		}

		[Token(Token = "0x6000CF9")]
		[Address(RVA = "0x46F8F30", Offset = "0x46F8F30", VA = "0x46F8F30")]
		public BoundsEqualityComparer()
		{
		}
	}

	[Token(Token = "0x2000243")]
	private sealed class QuaternionEqualityComparer : IEqualityComparer<Quaternion>
	{
		[Token(Token = "0x6000CFA")]
		[Address(RVA = "0x46F9550", Offset = "0x46F9550", VA = "0x46F9550", Slot = "4")]
		public bool Equals(Quaternion self, Quaternion vector)
		{
			return default(bool);
		}

		[Token(Token = "0x6000CFB")]
		[Address(RVA = "0x46F95D0", Offset = "0x46F95D0", VA = "0x46F95D0", Slot = "5")]
		public int GetHashCode(Quaternion obj)
		{
			return default(int);
		}

		[Token(Token = "0x6000CFC")]
		[Address(RVA = "0x46F8F40", Offset = "0x46F8F40", VA = "0x46F8F40")]
		public QuaternionEqualityComparer()
		{
		}
	}

	[Token(Token = "0x2000244")]
	private sealed class Color32EqualityComparer : IEqualityComparer<Color32>
	{
		[Token(Token = "0x6000CFD")]
		[Address(RVA = "0x46F9640", Offset = "0x46F9640", VA = "0x46F9640", Slot = "4")]
		public bool Equals(Color32 self, Color32 vector)
		{
			return default(bool);
		}

		[Token(Token = "0x6000CFE")]
		[Address(RVA = "0x46F96B0", Offset = "0x46F96B0", VA = "0x46F96B0", Slot = "5")]
		public int GetHashCode(Color32 obj)
		{
			return default(int);
		}

		[Token(Token = "0x6000CFF")]
		[Address(RVA = "0x46F8F10", Offset = "0x46F8F10", VA = "0x46F8F10")]
		public Color32EqualityComparer()
		{
		}
	}

	[Token(Token = "0x2000245")]
	private sealed class Vector2IntEqualityComparer : IEqualityComparer<Vector2Int>
	{
		[Token(Token = "0x6000D00")]
		[Address(RVA = "0x46F9710", Offset = "0x46F9710", VA = "0x46F9710", Slot = "4")]
		public bool Equals(Vector2Int self, Vector2Int vector)
		{
			return default(bool);
		}

		[Token(Token = "0x6000D01")]
		[Address(RVA = "0x46F9770", Offset = "0x46F9770", VA = "0x46F9770", Slot = "5")]
		public int GetHashCode(Vector2Int obj)
		{
			return default(int);
		}

		[Token(Token = "0x6000D02")]
		[Address(RVA = "0x46F8F50", Offset = "0x46F8F50", VA = "0x46F8F50")]
		public Vector2IntEqualityComparer()
		{
		}
	}

	[Token(Token = "0x2000246")]
	private sealed class Vector3IntEqualityComparer : IEqualityComparer<Vector3Int>
	{
		[Token(Token = "0x4000690")]
		[FieldOffset(Offset = "0x0")]
		public static readonly Vector3IntEqualityComparer Default;

		[Token(Token = "0x6000D03")]
		[Address(RVA = "0x46F97B0", Offset = "0x46F97B0", VA = "0x46F97B0", Slot = "4")]
		public bool Equals(Vector3Int self, Vector3Int vector)
		{
			return default(bool);
		}

		[Token(Token = "0x6000D04")]
		[Address(RVA = "0x46F9830", Offset = "0x46F9830", VA = "0x46F9830", Slot = "5")]
		public int GetHashCode(Vector3Int obj)
		{
			return default(int);
		}

		[Token(Token = "0x6000D05")]
		[Address(RVA = "0x46F8F60", Offset = "0x46F8F60", VA = "0x46F8F60")]
		public Vector3IntEqualityComparer()
		{
		}
	}

	[Token(Token = "0x2000247")]
	private sealed class RangeIntEqualityComparer : IEqualityComparer<RangeInt>
	{
		[Token(Token = "0x6000D07")]
		[Address(RVA = "0x46F9900", Offset = "0x46F9900", VA = "0x46F9900", Slot = "4")]
		public bool Equals(RangeInt self, RangeInt vector)
		{
			return default(bool);
		}

		[Token(Token = "0x6000D08")]
		[Address(RVA = "0x46F9940", Offset = "0x46F9940", VA = "0x46F9940", Slot = "5")]
		public int GetHashCode(RangeInt obj)
		{
			return default(int);
		}

		[Token(Token = "0x6000D09")]
		[Address(RVA = "0x46F8F70", Offset = "0x46F8F70", VA = "0x46F8F70")]
		public RangeIntEqualityComparer()
		{
		}
	}

	[Token(Token = "0x2000248")]
	private sealed class RectIntEqualityComparer : IEqualityComparer<RectInt>
	{
		[Token(Token = "0x6000D0A")]
		[Address(RVA = "0x46F9970", Offset = "0x46F9970", VA = "0x46F9970", Slot = "4")]
		public bool Equals(RectInt self, RectInt other)
		{
			return default(bool);
		}

		[Token(Token = "0x6000D0B")]
		[Address(RVA = "0x46F9A10", Offset = "0x46F9A10", VA = "0x46F9A10", Slot = "5")]
		public int GetHashCode(RectInt obj)
		{
			return default(int);
		}

		[Token(Token = "0x6000D0C")]
		[Address(RVA = "0x46F8F80", Offset = "0x46F8F80", VA = "0x46F8F80")]
		public RectIntEqualityComparer()
		{
		}
	}

	[Token(Token = "0x2000249")]
	private sealed class BoundsIntEqualityComparer : IEqualityComparer<BoundsInt>
	{
		[Token(Token = "0x6000D0D")]
		[Address(RVA = "0x46F9A90", Offset = "0x46F9A90", VA = "0x46F9A90", Slot = "4")]
		public bool Equals(BoundsInt self, BoundsInt vector)
		{
			return default(bool);
		}

		[Token(Token = "0x6000D0E")]
		[Address(RVA = "0x46F9C20", Offset = "0x46F9C20", VA = "0x46F9C20", Slot = "5")]
		public int GetHashCode(BoundsInt obj)
		{
			return default(int);
		}

		[Token(Token = "0x6000D0F")]
		[Address(RVA = "0x46F8F90", Offset = "0x46F8F90", VA = "0x46F8F90")]
		public BoundsIntEqualityComparer()
		{
		}
	}

	[Token(Token = "0x4000675")]
	[FieldOffset(Offset = "0x0")]
	public static readonly IEqualityComparer<Vector2> Vector2;

	[Token(Token = "0x4000676")]
	[FieldOffset(Offset = "0x8")]
	public static readonly IEqualityComparer<Vector3> Vector3;

	[Token(Token = "0x4000677")]
	[FieldOffset(Offset = "0x10")]
	public static readonly IEqualityComparer<Vector4> Vector4;

	[Token(Token = "0x4000678")]
	[FieldOffset(Offset = "0x18")]
	public static readonly IEqualityComparer<Color> Color;

	[Token(Token = "0x4000679")]
	[FieldOffset(Offset = "0x20")]
	public static readonly IEqualityComparer<Color32> Color32;

	[Token(Token = "0x400067A")]
	[FieldOffset(Offset = "0x28")]
	public static readonly IEqualityComparer<Rect> Rect;

	[Token(Token = "0x400067B")]
	[FieldOffset(Offset = "0x30")]
	public static readonly IEqualityComparer<Bounds> Bounds;

	[Token(Token = "0x400067C")]
	[FieldOffset(Offset = "0x38")]
	public static readonly IEqualityComparer<Quaternion> Quaternion;

	[Token(Token = "0x400067D")]
	[FieldOffset(Offset = "0x40")]
	private static readonly RuntimeTypeHandle vector2Type;

	[Token(Token = "0x400067E")]
	[FieldOffset(Offset = "0x48")]
	private static readonly RuntimeTypeHandle vector3Type;

	[Token(Token = "0x400067F")]
	[FieldOffset(Offset = "0x50")]
	private static readonly RuntimeTypeHandle vector4Type;

	[Token(Token = "0x4000680")]
	[FieldOffset(Offset = "0x58")]
	private static readonly RuntimeTypeHandle colorType;

	[Token(Token = "0x4000681")]
	[FieldOffset(Offset = "0x60")]
	private static readonly RuntimeTypeHandle color32Type;

	[Token(Token = "0x4000682")]
	[FieldOffset(Offset = "0x68")]
	private static readonly RuntimeTypeHandle rectType;

	[Token(Token = "0x4000683")]
	[FieldOffset(Offset = "0x70")]
	private static readonly RuntimeTypeHandle boundsType;

	[Token(Token = "0x4000684")]
	[FieldOffset(Offset = "0x78")]
	private static readonly RuntimeTypeHandle quaternionType;

	[Token(Token = "0x4000685")]
	[FieldOffset(Offset = "0x80")]
	public static readonly IEqualityComparer<Vector2Int> Vector2Int;

	[Token(Token = "0x4000686")]
	[FieldOffset(Offset = "0x88")]
	public static readonly IEqualityComparer<Vector3Int> Vector3Int;

	[Token(Token = "0x4000687")]
	[FieldOffset(Offset = "0x90")]
	public static readonly IEqualityComparer<RangeInt> RangeInt;

	[Token(Token = "0x4000688")]
	[FieldOffset(Offset = "0x98")]
	public static readonly IEqualityComparer<RectInt> RectInt;

	[Token(Token = "0x4000689")]
	[FieldOffset(Offset = "0xA0")]
	public static readonly IEqualityComparer<BoundsInt> BoundsInt;

	[Token(Token = "0x400068A")]
	[FieldOffset(Offset = "0xA8")]
	private static readonly RuntimeTypeHandle vector2IntType;

	[Token(Token = "0x400068B")]
	[FieldOffset(Offset = "0xB0")]
	private static readonly RuntimeTypeHandle vector3IntType;

	[Token(Token = "0x400068C")]
	[FieldOffset(Offset = "0xB8")]
	private static readonly RuntimeTypeHandle rangeIntType;

	[Token(Token = "0x400068D")]
	[FieldOffset(Offset = "0xC0")]
	private static readonly RuntimeTypeHandle rectIntType;

	[Token(Token = "0x400068E")]
	[FieldOffset(Offset = "0xC8")]
	private static readonly RuntimeTypeHandle boundsIntType;

	[Token(Token = "0x6000CE4")]
	public static IEqualityComparer<T> GetDefault<T>()
	{
		return null;
	}

	[Token(Token = "0x6000CE5")]
	[Address(RVA = "0x46F83C0", Offset = "0x46F83C0", VA = "0x46F83C0")]
	private static object GetDefaultHelper(Type type)
	{
		return null;
	}
}
