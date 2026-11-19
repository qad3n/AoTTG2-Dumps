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

[Token(Token = "0x20000BE")]
[UnityEngine.Bindings.NativeHeader("Runtime/Math/Rect.h")]
[UnityEngine.NativeClass("Rectf", "template<typename T> class RectT; typedef RectT<float> Rectf;")]
[UnityEngine.Scripting.RequiredByNativeCode(Optional = true, GenerateProxy = true)]
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

	[Token(Token = "0x17000093")]
	public static Rect zero
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003C1")]
		[Address(RVA = "0x68CB4F0", Offset = "0x68CA4F0", VA = "0x68CB4F0")]
		get
		{
			return default(Rect);
		}
	}

	[Token(Token = "0x17000094")]
	public float x
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003C3")]
		[Address(RVA = "0x68CB550", Offset = "0x68CA550", VA = "0x68CB550")]
		readonly get
		{
			return default(float);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003C4")]
		[Address(RVA = "0x68CB560", Offset = "0x68CA560", VA = "0x68CB560")]
		set
		{
		}
	}

	[Token(Token = "0x17000095")]
	public float y
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003C5")]
		[Address(RVA = "0x68CB570", Offset = "0x68CA570", VA = "0x68CB570")]
		readonly get
		{
			return default(float);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003C6")]
		[Address(RVA = "0x68CB580", Offset = "0x68CA580", VA = "0x68CB580")]
		set
		{
		}
	}

	[Token(Token = "0x17000096")]
	public Vector2 position
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003C7")]
		[Address(RVA = "0x68CB590", Offset = "0x68CA590", VA = "0x68CB590")]
		readonly get
		{
			return default(Vector2);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003C8")]
		[Address(RVA = "0x68CB5A0", Offset = "0x68CA5A0", VA = "0x68CB5A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000097")]
	public Vector2 center
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003C9")]
		[Address(RVA = "0x68CB5B0", Offset = "0x68CA5B0", VA = "0x68CB5B0")]
		readonly get
		{
			return default(Vector2);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003CA")]
		[Address(RVA = "0x68CB5D0", Offset = "0x68CA5D0", VA = "0x68CB5D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000098")]
	public Vector2 min
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003CB")]
		[Address(RVA = "0x68CB5F0", Offset = "0x68CA5F0", VA = "0x68CB5F0")]
		readonly get
		{
			return default(Vector2);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003CC")]
		[Address(RVA = "0x68CB600", Offset = "0x68CA600", VA = "0x68CB600")]
		set
		{
		}
	}

	[Token(Token = "0x17000099")]
	public Vector2 max
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003CD")]
		[Address(RVA = "0x68CB750", Offset = "0x68CA750", VA = "0x68CB750")]
		readonly get
		{
			return default(Vector2);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003CE")]
		[Address(RVA = "0x68CB7A0", Offset = "0x68CA7A0", VA = "0x68CB7A0")]
		set
		{
		}
	}

	[Token(Token = "0x1700009A")]
	public float width
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003CF")]
		[Address(RVA = "0x68CB800", Offset = "0x68CA800", VA = "0x68CB800")]
		readonly get
		{
			return default(float);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003D0")]
		[Address(RVA = "0x68CB810", Offset = "0x68CA810", VA = "0x68CB810")]
		set
		{
		}
	}

	[Token(Token = "0x1700009B")]
	public float height
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003D1")]
		[Address(RVA = "0x68CB820", Offset = "0x68CA820", VA = "0x68CB820")]
		readonly get
		{
			return default(float);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003D2")]
		[Address(RVA = "0x68CB830", Offset = "0x68CA830", VA = "0x68CB830")]
		set
		{
		}
	}

	[Token(Token = "0x1700009C")]
	public Vector2 size
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003D3")]
		[Address(RVA = "0x68CB840", Offset = "0x68CA840", VA = "0x68CB840")]
		readonly get
		{
			return default(Vector2);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003D4")]
		[Address(RVA = "0x68CB850", Offset = "0x68CA850", VA = "0x68CB850")]
		set
		{
		}
	}

	[Token(Token = "0x1700009D")]
	public float xMin
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003D5")]
		[Address(RVA = "0x68CB860", Offset = "0x68CA860", VA = "0x68CB860")]
		readonly get
		{
			return default(float);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003D6")]
		[Address(RVA = "0x68CB870", Offset = "0x68CA870", VA = "0x68CB870")]
		set
		{
		}
	}

	[Token(Token = "0x1700009E")]
	public float yMin
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003D7")]
		[Address(RVA = "0x68CB8E0", Offset = "0x68CA8E0", VA = "0x68CB8E0")]
		readonly get
		{
			return default(float);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003D8")]
		[Address(RVA = "0x68CB8F0", Offset = "0x68CA8F0", VA = "0x68CB8F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700009F")]
	public float xMax
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003D9")]
		[Address(RVA = "0x68CB970", Offset = "0x68CA970", VA = "0x68CB970")]
		readonly get
		{
			return default(float);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003DA")]
		[Address(RVA = "0x68CB980", Offset = "0x68CA980", VA = "0x68CB980")]
		set
		{
		}
	}

	[Token(Token = "0x170000A0")]
	public float yMax
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003DB")]
		[Address(RVA = "0x68CB990", Offset = "0x68CA990", VA = "0x68CB990")]
		readonly get
		{
			return default(float);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003DC")]
		[Address(RVA = "0x68CB9A0", Offset = "0x68CA9A0", VA = "0x68CB9A0")]
		set
		{
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003BE")]
	[Address(RVA = "0x68CB4B0", Offset = "0x68CA4B0", VA = "0x68CB4B0")]
	public Rect(float x, float y, float width, float height)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003BF")]
	[Address(RVA = "0x68CB4D0", Offset = "0x68CA4D0", VA = "0x68CB4D0")]
	public Rect(Vector2 position, Vector2 size)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003C0")]
	[Address(RVA = "0x68CB4E0", Offset = "0x68CA4E0", VA = "0x68CB4E0")]
	public Rect(Rect source)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003C2")]
	[Address(RVA = "0x68CB540", Offset = "0x68CA540", VA = "0x68CB540")]
	public static Rect MinMaxRect(float xmin, float ymin, float xmax, float ymax)
	{
		return default(Rect);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003DD")]
	[Address(RVA = "0x68CB9B0", Offset = "0x68CA9B0", VA = "0x68CB9B0")]
	public readonly bool Contains(Vector2 point)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003DE")]
	[Address(RVA = "0x68CBA70", Offset = "0x68CAA70", VA = "0x68CBA70")]
	public readonly bool Contains(Vector3 point)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003DF")]
	[Address(RVA = "0x68CBB30", Offset = "0x68CAB30", VA = "0x68CBB30")]
	private static Rect OrderMinMax(in Rect rect)
	{
		return default(Rect);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003E0")]
	[Address(RVA = "0x68CBB90", Offset = "0x68CAB90", VA = "0x68CBB90")]
	public readonly bool Overlaps(Rect other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003E1")]
	[Address(RVA = "0x68CBC90", Offset = "0x68CAC90", VA = "0x68CBC90")]
	public readonly bool Overlaps(in Rect other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003E2")]
	[Address(RVA = "0x68CBD90", Offset = "0x68CAD90", VA = "0x68CBD90")]
	public readonly bool Overlaps(Rect other, bool allowInverse)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003E3")]
	[Address(RVA = "0x68CC230", Offset = "0x68CB230", VA = "0x68CC230")]
	public static bool operator !=(Rect lhs, Rect rhs)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003E4")]
	[Address(RVA = "0x68CC320", Offset = "0x68CB320", VA = "0x68CC320")]
	public static bool operator ==(Rect lhs, Rect rhs)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003E5")]
	[Address(RVA = "0x68CC350", Offset = "0x68CB350", VA = "0x68CC350", Slot = "2")]
	public override readonly int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003E6")]
	[Address(RVA = "0x68CC3B0", Offset = "0x68CB3B0", VA = "0x68CC3B0", Slot = "0")]
	public override readonly bool Equals(object other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003E7")]
	[Address(RVA = "0x68CC4B0", Offset = "0x68CB4B0", VA = "0x68CC4B0", Slot = "4")]
	public readonly bool Equals(Rect other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003E8")]
	[Address(RVA = "0x68CC520", Offset = "0x68CB520", VA = "0x68CC520")]
	public readonly bool Equals(in Rect other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003E9")]
	[Address(RVA = "0x68CC590", Offset = "0x68CB590", VA = "0x68CC590", Slot = "3")]
	public override readonly string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003EA")]
	[Address(RVA = "0x68CC5E0", Offset = "0x68CB5E0", VA = "0x68CC5E0", Slot = "5")]
	public readonly string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
