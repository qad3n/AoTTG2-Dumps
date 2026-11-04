// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rect
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Plugins/DiscordGameSDK/Core.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x20000BC")]
[UnityEngine.Bindings.NativeHeader("Runtime/Math/Rect.h")]
[UnityEngine.Scripting.RequiredByNativeCode(Optional = true, GenerateProxy = true)]
[UnityEngine.NativeClass("Rectf", "template<typename T> class RectT; typedef RectT<float> Rectf;")]
public struct Rect : IEquatable<Rect>, IFormattable
{
	[Token(Token = "0x40001F9")]
	[FieldOffset(Offset = "0x0")]
	[UnityEngine.Bindings.NativeName("x")]
	private float m_XMin;

	[Token(Token = "0x40001FA")]
	[FieldOffset(Offset = "0x4")]
	[UnityEngine.Bindings.NativeName("y")]
	private float m_YMin;

	[Token(Token = "0x40001FB")]
	[FieldOffset(Offset = "0x8")]
	[UnityEngine.Bindings.NativeName("width")]
	private float m_Width;

	[Token(Token = "0x40001FC")]
	[FieldOffset(Offset = "0xC")]
	[UnityEngine.Bindings.NativeName("height")]
	private float m_Height;

	[Token(Token = "0x40001FD")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Rect kZero;

	[Token(Token = "0x17000092")]
	public static Rect zero
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003BB")]
		[Address(RVA = "0x2ED2230", Offset = "0x2ED0830", VA = "0x182ED2230")]
		get
		{
			return default(Rect);
		}
	}

	[Token(Token = "0x17000093")]
	public float x
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003BD")]
		[Address(RVA = "0x562BA0", Offset = "0x5611A0", VA = "0x180562BA0")]
		readonly get
		{
			return default(float);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003BE")]
		[Address(RVA = "0x2CDDC80", Offset = "0x2CDC280", VA = "0x182CDDC80")]
		set
		{
		}
	}

	[Token(Token = "0x17000094")]
	public float y
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003BF")]
		[Address(RVA = "0x562BB0", Offset = "0x5611B0", VA = "0x180562BB0")]
		readonly get
		{
			return default(float);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003C0")]
		[Address(RVA = "0x2CDDC90", Offset = "0x2CDC290", VA = "0x182CDDC90")]
		set
		{
		}
	}

	[Token(Token = "0x17000095")]
	public Vector2 position
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003C1")]
		[Address(RVA = "0x2ED21F0", Offset = "0x2ED07F0", VA = "0x182ED21F0")]
		readonly get
		{
			return default(Vector2);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003C2")]
		[Address(RVA = "0xB546E0", Offset = "0xB52CE0", VA = "0x180B546E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000096")]
	public Vector2 center
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003C3")]
		[Address(RVA = "0x2ED2160", Offset = "0x2ED0760", VA = "0x182ED2160")]
		readonly get
		{
			return default(Vector2);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003C4")]
		[Address(RVA = "0x2ED2330", Offset = "0x2ED0930", VA = "0x182ED2330")]
		set
		{
		}
	}

	[Token(Token = "0x17000097")]
	public Vector2 min
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003C5")]
		[Address(RVA = "0x2ED21F0", Offset = "0x2ED07F0", VA = "0x182ED21F0")]
		readonly get
		{
			return default(Vector2);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003C6")]
		[Address(RVA = "0x2ED23E0", Offset = "0x2ED09E0", VA = "0x182ED23E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000098")]
	public Vector2 max
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003C7")]
		[Address(RVA = "0x2ED2190", Offset = "0x2ED0790", VA = "0x182ED2190")]
		readonly get
		{
			return default(Vector2);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003C8")]
		[Address(RVA = "0x2ED2370", Offset = "0x2ED0970", VA = "0x182ED2370")]
		set
		{
		}
	}

	[Token(Token = "0x17000099")]
	public float width
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003C9")]
		[Address(RVA = "0x562B90", Offset = "0x561190", VA = "0x180562B90")]
		readonly get
		{
			return default(float);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003CA")]
		[Address(RVA = "0x2CDDA10", Offset = "0x2CDC010", VA = "0x182CDDA10")]
		set
		{
		}
	}

	[Token(Token = "0x1700009A")]
	public float height
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003CB")]
		[Address(RVA = "0x562B80", Offset = "0x561180", VA = "0x180562B80")]
		readonly get
		{
			return default(float);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003CC")]
		[Address(RVA = "0x2A3A8E0", Offset = "0x2A38EE0", VA = "0x182A3A8E0")]
		set
		{
		}
	}

	[Token(Token = "0x1700009B")]
	public Vector2 size
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003CD")]
		[Address(RVA = "0x2A88DA0", Offset = "0x2A873A0", VA = "0x182A88DA0")]
		readonly get
		{
			return default(Vector2);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003CE")]
		[Address(RVA = "0x2A89570", Offset = "0x2A87B70", VA = "0x182A89570")]
		set
		{
		}
	}

	[Token(Token = "0x1700009C")]
	public float xMin
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003CF")]
		[Address(RVA = "0x562BA0", Offset = "0x5611A0", VA = "0x180562BA0")]
		readonly get
		{
			return default(float);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003D0")]
		[Address(RVA = "0x2ED24E0", Offset = "0x2ED0AE0", VA = "0x182ED24E0")]
		set
		{
		}
	}

	[Token(Token = "0x1700009D")]
	public float yMin
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003D1")]
		[Address(RVA = "0x562BB0", Offset = "0x5611B0", VA = "0x180562BB0")]
		readonly get
		{
			return default(float);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003D2")]
		[Address(RVA = "0x2ED2560", Offset = "0x2ED0B60", VA = "0x182ED2560")]
		set
		{
		}
	}

	[Token(Token = "0x1700009E")]
	public float xMax
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003D3")]
		[Address(RVA = "0x2ED2210", Offset = "0x2ED0810", VA = "0x182ED2210")]
		readonly get
		{
			return default(float);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003D4")]
		[Address(RVA = "0x2ED24D0", Offset = "0x2ED0AD0", VA = "0x182ED24D0")]
		set
		{
		}
	}

	[Token(Token = "0x1700009F")]
	public float yMax
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003D5")]
		[Address(RVA = "0x2ED2220", Offset = "0x2ED0820", VA = "0x182ED2220")]
		readonly get
		{
			return default(float);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003D6")]
		[Address(RVA = "0x2ED2550", Offset = "0x2ED0B50", VA = "0x182ED2550")]
		set
		{
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003B8")]
	[Address(RVA = "0x298BAD0", Offset = "0x298A0D0", VA = "0x18298BAD0")]
	public Rect(float x, float y, float width, float height)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003B9")]
	[Address(RVA = "0x2A88A90", Offset = "0x2A87090", VA = "0x182A88A90")]
	public Rect(Vector2 position, Vector2 size)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003BA")]
	[Address(RVA = "0x2A348D0", Offset = "0x2A32ED0", VA = "0x182A348D0")]
	public Rect(Rect source)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003BC")]
	[Address(RVA = "0x2ED1AE0", Offset = "0x2ED00E0", VA = "0x182ED1AE0")]
	public static Rect MinMaxRect(float xmin, float ymin, float xmax, float ymax)
	{
		return default(Rect);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003D7")]
	[Address(RVA = "0x2ED17F0", Offset = "0x2ECFDF0", VA = "0x182ED17F0")]
	public readonly bool Contains(Vector2 point)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003D8")]
	[Address(RVA = "0x2ED18A0", Offset = "0x2ECFEA0", VA = "0x182ED18A0")]
	public readonly bool Contains(Vector3 point)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003D9")]
	[Address(RVA = "0x2ED1B10", Offset = "0x2ED0110", VA = "0x182ED1B10")]
	private static Rect OrderMinMax(in Rect rect)
	{
		return default(Rect);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003DA")]
	[Address(RVA = "0x2ED1D70", Offset = "0x2ED0370", VA = "0x182ED1D70")]
	public readonly bool Overlaps(Rect other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003DB")]
	[Address(RVA = "0x2ED1BD0", Offset = "0x2ED01D0", VA = "0x182ED1BD0")]
	public readonly bool Overlaps(in Rect other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003DC")]
	[Address(RVA = "0x2ED1CC0", Offset = "0x2ED02C0", VA = "0x182ED1CC0")]
	public readonly bool Overlaps(Rect other, bool allowInverse)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003DD")]
	[Address(RVA = "0x2ED2290", Offset = "0x2ED0890", VA = "0x182ED2290")]
	public static bool operator !=(Rect lhs, Rect rhs)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003DE")]
	[Address(RVA = "0x25B49C0", Offset = "0x25B2FC0", VA = "0x1825B49C0")]
	public static bool operator ==(Rect lhs, Rect rhs)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003DF")]
	[Address(RVA = "0x2ED1A80", Offset = "0x2ED0080", VA = "0x182ED1A80", Slot = "2")]
	public override readonly int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003E0")]
	[Address(RVA = "0x2ED1950", Offset = "0x2ECFF50", VA = "0x182ED1950", Slot = "0")]
	public override readonly bool Equals(object other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003E1")]
	[Address(RVA = "0x5BB830", Offset = "0x5B9E30", VA = "0x1805BB830", Slot = "4")]
	public readonly bool Equals(Rect other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003E2")]
	[Address(RVA = "0x5BB830", Offset = "0x5B9E30", VA = "0x1805BB830")]
	public readonly bool Equals(in Rect other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003E3")]
	[Address(RVA = "0x2ED1E50", Offset = "0x2ED0450", VA = "0x182ED1E50", Slot = "3")]
	public override readonly string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003E4")]
	[Address(RVA = "0x2ED1EA0", Offset = "0x2ED04A0", VA = "0x182ED1EA0", Slot = "5")]
	public readonly string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
