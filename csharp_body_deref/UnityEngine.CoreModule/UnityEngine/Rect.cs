using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x200009E")]
[UnityEngine.Scripting.RequiredByNativeCode(Optional = true, GenerateProxy = true)]
[UnityEngine.NativeClass("Rectf", "template<typename T> class RectT; typedef RectT<float> Rectf;")]
[UnityEngine.Bindings.NativeHeader("Runtime/Math/Rect.h")]
public struct Rect : IEquatable<Rect>, IFormattable
{
	[Token(Token = "0x40001A6")]
	[FieldOffset(Offset = "0x0")]
	[UnityEngine.Bindings.NativeName("x")]
	private float m_XMin;

	[Token(Token = "0x40001A7")]
	[FieldOffset(Offset = "0x4")]
	[UnityEngine.Bindings.NativeName("y")]
	private float m_YMin;

	[Token(Token = "0x40001A8")]
	[FieldOffset(Offset = "0x8")]
	[UnityEngine.Bindings.NativeName("width")]
	private float m_Width;

	[Token(Token = "0x40001A9")]
	[FieldOffset(Offset = "0xC")]
	[UnityEngine.Bindings.NativeName("height")]
	private float m_Height;

	[Token(Token = "0x17000076")]
	public static Rect zero
	{
		[Token(Token = "0x6000298")]
		[Address(RVA = "0x4A95F50", Offset = "0x4A95F50", VA = "0x4A95F50")]
		get
		{
			return default(Rect);
		}
	}

	[Token(Token = "0x17000077")]
	public float x
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600029A")]
		[Address(RVA = "0x4A95F80", Offset = "0x4A95F80", VA = "0x4A95F80")]
		get
		{
			return default(float);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600029B")]
		[Address(RVA = "0x4A95F90", Offset = "0x4A95F90", VA = "0x4A95F90")]
		set
		{
		}
	}

	[Token(Token = "0x17000078")]
	public float y
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600029C")]
		[Address(RVA = "0x4A95FA0", Offset = "0x4A95FA0", VA = "0x4A95FA0")]
		get
		{
			return default(float);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600029D")]
		[Address(RVA = "0x4A95FB0", Offset = "0x4A95FB0", VA = "0x4A95FB0")]
		set
		{
		}
	}

	[Token(Token = "0x17000079")]
	public Vector2 position
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600029E")]
		[Address(RVA = "0x4A95FC0", Offset = "0x4A95FC0", VA = "0x4A95FC0")]
		get
		{
			return default(Vector2);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600029F")]
		[Address(RVA = "0x4A95FD0", Offset = "0x4A95FD0", VA = "0x4A95FD0")]
		set
		{
		}
	}

	[Token(Token = "0x1700007A")]
	public Vector2 center
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60002A0")]
		[Address(RVA = "0x4A95FE0", Offset = "0x4A95FE0", VA = "0x4A95FE0")]
		get
		{
			return default(Vector2);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60002A1")]
		[Address(RVA = "0x4A96000", Offset = "0x4A96000", VA = "0x4A96000")]
		set
		{
		}
	}

	[Token(Token = "0x1700007B")]
	public Vector2 min
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60002A2")]
		[Address(RVA = "0x4A96030", Offset = "0x4A96030", VA = "0x4A96030")]
		get
		{
			return default(Vector2);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60002A3")]
		[Address(RVA = "0x4A96040", Offset = "0x4A96040", VA = "0x4A96040")]
		set
		{
		}
	}

	[Token(Token = "0x1700007C")]
	public Vector2 max
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60002A4")]
		[Address(RVA = "0x4A96080", Offset = "0x4A96080", VA = "0x4A96080")]
		get
		{
			return default(Vector2);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60002A5")]
		[Address(RVA = "0x4A96090", Offset = "0x4A96090", VA = "0x4A96090")]
		set
		{
		}
	}

	[Token(Token = "0x1700007D")]
	public float width
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60002A6")]
		[Address(RVA = "0x4A960B0", Offset = "0x4A960B0", VA = "0x4A960B0")]
		get
		{
			return default(float);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60002A7")]
		[Address(RVA = "0x4A960C0", Offset = "0x4A960C0", VA = "0x4A960C0")]
		set
		{
		}
	}

	[Token(Token = "0x1700007E")]
	public float height
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60002A8")]
		[Address(RVA = "0x4A960D0", Offset = "0x4A960D0", VA = "0x4A960D0")]
		get
		{
			return default(float);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60002A9")]
		[Address(RVA = "0x4A960E0", Offset = "0x4A960E0", VA = "0x4A960E0")]
		set
		{
		}
	}

	[Token(Token = "0x1700007F")]
	public Vector2 size
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60002AA")]
		[Address(RVA = "0x4A960F0", Offset = "0x4A960F0", VA = "0x4A960F0")]
		get
		{
			return default(Vector2);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60002AB")]
		[Address(RVA = "0x4A96100", Offset = "0x4A96100", VA = "0x4A96100")]
		set
		{
		}
	}

	[Token(Token = "0x17000080")]
	public float xMin
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60002AC")]
		[Address(RVA = "0x4A96110", Offset = "0x4A96110", VA = "0x4A96110")]
		get
		{
			return default(float);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60002AD")]
		[Address(RVA = "0x4A96120", Offset = "0x4A96120", VA = "0x4A96120")]
		set
		{
		}
	}

	[Token(Token = "0x17000081")]
	public float yMin
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60002AE")]
		[Address(RVA = "0x4A96140", Offset = "0x4A96140", VA = "0x4A96140")]
		get
		{
			return default(float);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60002AF")]
		[Address(RVA = "0x4A96150", Offset = "0x4A96150", VA = "0x4A96150")]
		set
		{
		}
	}

	[Token(Token = "0x17000082")]
	public float xMax
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60002B0")]
		[Address(RVA = "0x4A96170", Offset = "0x4A96170", VA = "0x4A96170")]
		get
		{
			return default(float);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60002B1")]
		[Address(RVA = "0x4A96180", Offset = "0x4A96180", VA = "0x4A96180")]
		set
		{
		}
	}

	[Token(Token = "0x17000083")]
	public float yMax
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60002B2")]
		[Address(RVA = "0x4A96190", Offset = "0x4A96190", VA = "0x4A96190")]
		get
		{
			return default(float);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60002B3")]
		[Address(RVA = "0x4A961A0", Offset = "0x4A961A0", VA = "0x4A961A0")]
		set
		{
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000295")]
	[Address(RVA = "0x4A95F10", Offset = "0x4A95F10", VA = "0x4A95F10")]
	public Rect(float x, float y, float width, float height)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000296")]
	[Address(RVA = "0x4A95F30", Offset = "0x4A95F30", VA = "0x4A95F30")]
	public Rect(Vector2 position, Vector2 size)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000297")]
	[Address(RVA = "0x4A95F40", Offset = "0x4A95F40", VA = "0x4A95F40")]
	public Rect(Rect source)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000299")]
	[Address(RVA = "0x4A95F60", Offset = "0x4A95F60", VA = "0x4A95F60")]
	public static Rect MinMaxRect(float xmin, float ymin, float xmax, float ymax)
	{
		return default(Rect);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002B4")]
	[Address(RVA = "0x4A961B0", Offset = "0x4A961B0", VA = "0x4A961B0")]
	public bool Contains(Vector2 point)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002B5")]
	[Address(RVA = "0x4A961E0", Offset = "0x4A961E0", VA = "0x4A961E0")]
	public bool Contains(Vector3 point)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002B6")]
	[Address(RVA = "0x4A96210", Offset = "0x4A96210", VA = "0x4A96210")]
	private static Rect OrderMinMax(Rect rect)
	{
		return default(Rect);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002B7")]
	[Address(RVA = "0x4A96260", Offset = "0x4A96260", VA = "0x4A96260")]
	public bool Overlaps(Rect other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002B8")]
	[Address(RVA = "0x4A962A0", Offset = "0x4A962A0", VA = "0x4A962A0")]
	public bool Overlaps(Rect other, bool allowInverse)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002B9")]
	[Address(RVA = "0x4A96390", Offset = "0x4A96390", VA = "0x4A96390")]
	public static bool operator !=(Rect lhs, Rect rhs)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002BA")]
	[Address(RVA = "0x4A963D0", Offset = "0x4A963D0", VA = "0x4A963D0")]
	public static bool operator ==(Rect lhs, Rect rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60002BB")]
	[Address(RVA = "0x4A96410", Offset = "0x4A96410", VA = "0x4A96410", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002BC")]
	[Address(RVA = "0x4A96490", Offset = "0x4A96490", VA = "0x4A96490", Slot = "0")]
	public override bool Equals(object other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002BD")]
	[Address(RVA = "0x4A96580", Offset = "0x4A96580", VA = "0x4A96580", Slot = "4")]
	public bool Equals(Rect other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002BE")]
	[Address(RVA = "0x4A96620", Offset = "0x4A96620", VA = "0x4A96620", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60002BF")]
	[Address(RVA = "0x4A96630", Offset = "0x4A96630", VA = "0x4A96630", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
