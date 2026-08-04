// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rect
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x4DBD770", Offset = "0x4DBD770", VA = "0x4DBD770")]
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
		[Address(RVA = "0x4DBD7A0", Offset = "0x4DBD7A0", VA = "0x4DBD7A0")]
		get
		{
			return default(float);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600029B")]
		[Address(RVA = "0x4DBD7B0", Offset = "0x4DBD7B0", VA = "0x4DBD7B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000078")]
	public float y
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600029C")]
		[Address(RVA = "0x4DBD7C0", Offset = "0x4DBD7C0", VA = "0x4DBD7C0")]
		get
		{
			return default(float);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600029D")]
		[Address(RVA = "0x4DBD7D0", Offset = "0x4DBD7D0", VA = "0x4DBD7D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000079")]
	public Vector2 position
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600029E")]
		[Address(RVA = "0x4DBD7E0", Offset = "0x4DBD7E0", VA = "0x4DBD7E0")]
		get
		{
			return default(Vector2);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600029F")]
		[Address(RVA = "0x4DBD7F0", Offset = "0x4DBD7F0", VA = "0x4DBD7F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700007A")]
	public Vector2 center
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60002A0")]
		[Address(RVA = "0x4DBD800", Offset = "0x4DBD800", VA = "0x4DBD800")]
		get
		{
			return default(Vector2);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60002A1")]
		[Address(RVA = "0x4DBD820", Offset = "0x4DBD820", VA = "0x4DBD820")]
		set
		{
		}
	}

	[Token(Token = "0x1700007B")]
	public Vector2 min
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60002A2")]
		[Address(RVA = "0x4DBD850", Offset = "0x4DBD850", VA = "0x4DBD850")]
		get
		{
			return default(Vector2);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60002A3")]
		[Address(RVA = "0x4DBD860", Offset = "0x4DBD860", VA = "0x4DBD860")]
		set
		{
		}
	}

	[Token(Token = "0x1700007C")]
	public Vector2 max
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60002A4")]
		[Address(RVA = "0x4DBD8A0", Offset = "0x4DBD8A0", VA = "0x4DBD8A0")]
		get
		{
			return default(Vector2);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60002A5")]
		[Address(RVA = "0x4DBD8B0", Offset = "0x4DBD8B0", VA = "0x4DBD8B0")]
		set
		{
		}
	}

	[Token(Token = "0x1700007D")]
	public float width
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60002A6")]
		[Address(RVA = "0x4DBD8D0", Offset = "0x4DBD8D0", VA = "0x4DBD8D0")]
		get
		{
			return default(float);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60002A7")]
		[Address(RVA = "0x4DBD8E0", Offset = "0x4DBD8E0", VA = "0x4DBD8E0")]
		set
		{
		}
	}

	[Token(Token = "0x1700007E")]
	public float height
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60002A8")]
		[Address(RVA = "0x4DBD8F0", Offset = "0x4DBD8F0", VA = "0x4DBD8F0")]
		get
		{
			return default(float);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60002A9")]
		[Address(RVA = "0x4DBD900", Offset = "0x4DBD900", VA = "0x4DBD900")]
		set
		{
		}
	}

	[Token(Token = "0x1700007F")]
	public Vector2 size
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60002AA")]
		[Address(RVA = "0x4DBD910", Offset = "0x4DBD910", VA = "0x4DBD910")]
		get
		{
			return default(Vector2);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60002AB")]
		[Address(RVA = "0x4DBD920", Offset = "0x4DBD920", VA = "0x4DBD920")]
		set
		{
		}
	}

	[Token(Token = "0x17000080")]
	public float xMin
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60002AC")]
		[Address(RVA = "0x4DBD930", Offset = "0x4DBD930", VA = "0x4DBD930")]
		get
		{
			return default(float);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60002AD")]
		[Address(RVA = "0x4DBD940", Offset = "0x4DBD940", VA = "0x4DBD940")]
		set
		{
		}
	}

	[Token(Token = "0x17000081")]
	public float yMin
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60002AE")]
		[Address(RVA = "0x4DBD960", Offset = "0x4DBD960", VA = "0x4DBD960")]
		get
		{
			return default(float);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60002AF")]
		[Address(RVA = "0x4DBD970", Offset = "0x4DBD970", VA = "0x4DBD970")]
		set
		{
		}
	}

	[Token(Token = "0x17000082")]
	public float xMax
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60002B0")]
		[Address(RVA = "0x4DBD990", Offset = "0x4DBD990", VA = "0x4DBD990")]
		get
		{
			return default(float);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60002B1")]
		[Address(RVA = "0x4DBD9A0", Offset = "0x4DBD9A0", VA = "0x4DBD9A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000083")]
	public float yMax
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60002B2")]
		[Address(RVA = "0x4DBD9B0", Offset = "0x4DBD9B0", VA = "0x4DBD9B0")]
		get
		{
			return default(float);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60002B3")]
		[Address(RVA = "0x4DBD9C0", Offset = "0x4DBD9C0", VA = "0x4DBD9C0")]
		set
		{
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000295")]
	[Address(RVA = "0x4DBD730", Offset = "0x4DBD730", VA = "0x4DBD730")]
	public Rect(float x, float y, float width, float height)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000296")]
	[Address(RVA = "0x4DBD750", Offset = "0x4DBD750", VA = "0x4DBD750")]
	public Rect(Vector2 position, Vector2 size)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000297")]
	[Address(RVA = "0x4DBD760", Offset = "0x4DBD760", VA = "0x4DBD760")]
	public Rect(Rect source)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000299")]
	[Address(RVA = "0x4DBD780", Offset = "0x4DBD780", VA = "0x4DBD780")]
	public static Rect MinMaxRect(float xmin, float ymin, float xmax, float ymax)
	{
		return default(Rect);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002B4")]
	[Address(RVA = "0x4DBD9D0", Offset = "0x4DBD9D0", VA = "0x4DBD9D0")]
	public bool Contains(Vector2 point)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002B5")]
	[Address(RVA = "0x4DBDA00", Offset = "0x4DBDA00", VA = "0x4DBDA00")]
	public bool Contains(Vector3 point)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002B6")]
	[Address(RVA = "0x4DBDA30", Offset = "0x4DBDA30", VA = "0x4DBDA30")]
	private static Rect OrderMinMax(Rect rect)
	{
		return default(Rect);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002B7")]
	[Address(RVA = "0x4DBDA80", Offset = "0x4DBDA80", VA = "0x4DBDA80")]
	public bool Overlaps(Rect other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002B8")]
	[Address(RVA = "0x4DBDAC0", Offset = "0x4DBDAC0", VA = "0x4DBDAC0")]
	public bool Overlaps(Rect other, bool allowInverse)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002B9")]
	[Address(RVA = "0x4DBDBB0", Offset = "0x4DBDBB0", VA = "0x4DBDBB0")]
	public static bool operator !=(Rect lhs, Rect rhs)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002BA")]
	[Address(RVA = "0x4DBDBF0", Offset = "0x4DBDBF0", VA = "0x4DBDBF0")]
	public static bool operator ==(Rect lhs, Rect rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60002BB")]
	[Address(RVA = "0x4DBDC30", Offset = "0x4DBDC30", VA = "0x4DBDC30", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002BC")]
	[Address(RVA = "0x4DBDCB0", Offset = "0x4DBDCB0", VA = "0x4DBDCB0", Slot = "0")]
	public override bool Equals(object other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002BD")]
	[Address(RVA = "0x4DBDDA0", Offset = "0x4DBDDA0", VA = "0x4DBDDA0", Slot = "4")]
	public bool Equals(Rect other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002BE")]
	[Address(RVA = "0x4DBDE40", Offset = "0x4DBDE40", VA = "0x4DBDE40", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60002BF")]
	[Address(RVA = "0x4DBDE50", Offset = "0x4DBDE50", VA = "0x4DBDE50", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
