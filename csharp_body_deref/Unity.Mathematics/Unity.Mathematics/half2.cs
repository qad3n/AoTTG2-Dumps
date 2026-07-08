using System;
using System.ComponentModel;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.IL2CPP.CompilerServices;

namespace Unity.Mathematics;

[Serializable]
[Token(Token = "0x200003B")]
[DebuggerTypeProxy(typeof(DebuggerProxy))]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct half2 : IEquatable<half2>, IFormattable
{
	[Token(Token = "0x200003C")]
	internal sealed class DebuggerProxy
	{
		[Token(Token = "0x40000DB")]
		[FieldOffset(Offset = "0x10")]
		public half x;

		[Token(Token = "0x40000DC")]
		[FieldOffset(Offset = "0x12")]
		public half y;

		[Token(Token = "0x600160C")]
		[Address(RVA = "0x47D2EC0", Offset = "0x47D2EC0", VA = "0x47D2EC0")]
		public DebuggerProxy(half2 v)
		{
		}
	}

	[Token(Token = "0x40000D8")]
	[FieldOffset(Offset = "0x0")]
	public half x;

	[Token(Token = "0x40000D9")]
	[FieldOffset(Offset = "0x2")]
	public half y;

	[Token(Token = "0x40000DA")]
	[FieldOffset(Offset = "0x0")]
	public static readonly half2 zero;

	[Token(Token = "0x170005CC")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half4 xxxx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60015E7")]
		[Address(RVA = "0x47D2840", Offset = "0x47D2840", VA = "0x47D2840")]
		get
		{
			return default(half4);
		}
	}

	[Token(Token = "0x170005CD")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half4 xxxy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60015E8")]
		[Address(RVA = "0x47D2860", Offset = "0x47D2860", VA = "0x47D2860")]
		get
		{
			return default(half4);
		}
	}

	[Token(Token = "0x170005CE")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half4 xxyx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60015E9")]
		[Address(RVA = "0x47D2880", Offset = "0x47D2880", VA = "0x47D2880")]
		get
		{
			return default(half4);
		}
	}

	[Token(Token = "0x170005CF")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half4 xxyy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60015EA")]
		[Address(RVA = "0x47D28A0", Offset = "0x47D28A0", VA = "0x47D28A0")]
		get
		{
			return default(half4);
		}
	}

	[Token(Token = "0x170005D0")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half4 xyxx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60015EB")]
		[Address(RVA = "0x47D28D0", Offset = "0x47D28D0", VA = "0x47D28D0")]
		get
		{
			return default(half4);
		}
	}

	[Token(Token = "0x170005D1")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half4 xyxy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60015EC")]
		[Address(RVA = "0x47D28F0", Offset = "0x47D28F0", VA = "0x47D28F0")]
		get
		{
			return default(half4);
		}
	}

	[Token(Token = "0x170005D2")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half4 xyyx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60015ED")]
		[Address(RVA = "0x47D2920", Offset = "0x47D2920", VA = "0x47D2920")]
		get
		{
			return default(half4);
		}
	}

	[Token(Token = "0x170005D3")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half4 xyyy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60015EE")]
		[Address(RVA = "0x47D2950", Offset = "0x47D2950", VA = "0x47D2950")]
		get
		{
			return default(half4);
		}
	}

	[Token(Token = "0x170005D4")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half4 yxxx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60015EF")]
		[Address(RVA = "0x47D2980", Offset = "0x47D2980", VA = "0x47D2980")]
		get
		{
			return default(half4);
		}
	}

	[Token(Token = "0x170005D5")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half4 yxxy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60015F0")]
		[Address(RVA = "0x47D29B0", Offset = "0x47D29B0", VA = "0x47D29B0")]
		get
		{
			return default(half4);
		}
	}

	[Token(Token = "0x170005D6")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half4 yxyx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60015F1")]
		[Address(RVA = "0x47D29E0", Offset = "0x47D29E0", VA = "0x47D29E0")]
		get
		{
			return default(half4);
		}
	}

	[Token(Token = "0x170005D7")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half4 yxyy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60015F2")]
		[Address(RVA = "0x47D2A10", Offset = "0x47D2A10", VA = "0x47D2A10")]
		get
		{
			return default(half4);
		}
	}

	[Token(Token = "0x170005D8")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half4 yyxx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60015F3")]
		[Address(RVA = "0x47D2A30", Offset = "0x47D2A30", VA = "0x47D2A30")]
		get
		{
			return default(half4);
		}
	}

	[Token(Token = "0x170005D9")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half4 yyxy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60015F4")]
		[Address(RVA = "0x47D2A60", Offset = "0x47D2A60", VA = "0x47D2A60")]
		get
		{
			return default(half4);
		}
	}

	[Token(Token = "0x170005DA")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half4 yyyx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60015F5")]
		[Address(RVA = "0x47D2A80", Offset = "0x47D2A80", VA = "0x47D2A80")]
		get
		{
			return default(half4);
		}
	}

	[Token(Token = "0x170005DB")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half4 yyyy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60015F6")]
		[Address(RVA = "0x47D2AA0", Offset = "0x47D2AA0", VA = "0x47D2AA0")]
		get
		{
			return default(half4);
		}
	}

	[Token(Token = "0x170005DC")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half3 xxx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60015F7")]
		[Address(RVA = "0x47D2AC0", Offset = "0x47D2AC0", VA = "0x47D2AC0")]
		get
		{
			return default(half3);
		}
	}

	[Token(Token = "0x170005DD")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half3 xxy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60015F8")]
		[Address(RVA = "0x47D2AE0", Offset = "0x47D2AE0", VA = "0x47D2AE0")]
		get
		{
			return default(half3);
		}
	}

	[Token(Token = "0x170005DE")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half3 xyx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60015F9")]
		[Address(RVA = "0x47D2B00", Offset = "0x47D2B00", VA = "0x47D2B00")]
		get
		{
			return default(half3);
		}
	}

	[Token(Token = "0x170005DF")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half3 xyy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60015FA")]
		[Address(RVA = "0x47D2B20", Offset = "0x47D2B20", VA = "0x47D2B20")]
		get
		{
			return default(half3);
		}
	}

	[Token(Token = "0x170005E0")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half3 yxx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60015FB")]
		[Address(RVA = "0x47D2B40", Offset = "0x47D2B40", VA = "0x47D2B40")]
		get
		{
			return default(half3);
		}
	}

	[Token(Token = "0x170005E1")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half3 yxy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60015FC")]
		[Address(RVA = "0x47D2B60", Offset = "0x47D2B60", VA = "0x47D2B60")]
		get
		{
			return default(half3);
		}
	}

	[Token(Token = "0x170005E2")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half3 yyx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60015FD")]
		[Address(RVA = "0x47D2B80", Offset = "0x47D2B80", VA = "0x47D2B80")]
		get
		{
			return default(half3);
		}
	}

	[Token(Token = "0x170005E3")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half3 yyy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60015FE")]
		[Address(RVA = "0x47D2BA0", Offset = "0x47D2BA0", VA = "0x47D2BA0")]
		get
		{
			return default(half3);
		}
	}

	[Token(Token = "0x170005E4")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half2 xx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60015FF")]
		[Address(RVA = "0x47D2BC0", Offset = "0x47D2BC0", VA = "0x47D2BC0")]
		get
		{
			return default(half2);
		}
	}

	[Token(Token = "0x170005E5")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half2 xy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001600")]
		[Address(RVA = "0x47D2BD0", Offset = "0x47D2BD0", VA = "0x47D2BD0")]
		get
		{
			return default(half2);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001601")]
		[Address(RVA = "0x47D2BE0", Offset = "0x47D2BE0", VA = "0x47D2BE0")]
		set
		{
		}
	}

	[Token(Token = "0x170005E6")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half2 yx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001602")]
		[Address(RVA = "0x47D2BF0", Offset = "0x47D2BF0", VA = "0x47D2BF0")]
		get
		{
			return default(half2);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001603")]
		[Address(RVA = "0x47D2C00", Offset = "0x47D2C00", VA = "0x47D2C00")]
		set
		{
		}
	}

	[Token(Token = "0x170005E7")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half2 yy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001604")]
		[Address(RVA = "0x47D2C10", Offset = "0x47D2C10", VA = "0x47D2C10")]
		get
		{
			return default(half2);
		}
	}

	[Token(Token = "0x170005E8")]
	public half this[int index]
	{
		[Token(Token = "0x6001605")]
		[Address(RVA = "0x47D2C20", Offset = "0x47D2C20", VA = "0x47D2C20")]
		get
		{
			return default(half);
		}
		[Token(Token = "0x6001606")]
		[Address(RVA = "0x47D2C30", Offset = "0x47D2C30", VA = "0x47D2C30")]
		set
		{
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015D5")]
	[Address(RVA = "0x47D22A0", Offset = "0x47D22A0", VA = "0x47D22A0")]
	public half2(half x, half y)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015D6")]
	[Address(RVA = "0x47D22B0", Offset = "0x47D22B0", VA = "0x47D22B0")]
	public half2(half2 xy)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015D7")]
	[Address(RVA = "0x47D22C0", Offset = "0x47D22C0", VA = "0x47D22C0")]
	public half2(half v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015D8")]
	[Address(RVA = "0x47D22D0", Offset = "0x47D22D0", VA = "0x47D22D0")]
	public half2(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015D9")]
	[Address(RVA = "0x47D2330", Offset = "0x47D2330", VA = "0x47D2330")]
	public half2(float2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015DA")]
	[Address(RVA = "0x47D23E0", Offset = "0x47D23E0", VA = "0x47D23E0")]
	public half2(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015DB")]
	[Address(RVA = "0x47D2440", Offset = "0x47D2440", VA = "0x47D2440")]
	public half2(double2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015DC")]
	[Address(RVA = "0x47D2500", Offset = "0x47D2500", VA = "0x47D2500")]
	public static implicit operator half2(half v)
	{
		return default(half2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015DD")]
	[Address(RVA = "0x47D2510", Offset = "0x47D2510", VA = "0x47D2510")]
	public static explicit operator half2(float v)
	{
		return default(half2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015DE")]
	[Address(RVA = "0x47D2570", Offset = "0x47D2570", VA = "0x47D2570")]
	public static explicit operator half2(float2 v)
	{
		return default(half2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015DF")]
	[Address(RVA = "0x47D2630", Offset = "0x47D2630", VA = "0x47D2630")]
	public static explicit operator half2(double v)
	{
		return default(half2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015E0")]
	[Address(RVA = "0x47D26A0", Offset = "0x47D26A0", VA = "0x47D26A0")]
	public static explicit operator half2(double2 v)
	{
		return default(half2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015E1")]
	[Address(RVA = "0x47D2760", Offset = "0x47D2760", VA = "0x47D2760")]
	public static bool2 operator ==(half2 lhs, half2 rhs)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015E2")]
	[Address(RVA = "0x47D2790", Offset = "0x47D2790", VA = "0x47D2790")]
	public static bool2 operator ==(half2 lhs, half rhs)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015E3")]
	[Address(RVA = "0x47D27B0", Offset = "0x47D27B0", VA = "0x47D27B0")]
	public static bool2 operator ==(half lhs, half2 rhs)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015E4")]
	[Address(RVA = "0x47D27D0", Offset = "0x47D27D0", VA = "0x47D27D0")]
	public static bool2 operator !=(half2 lhs, half2 rhs)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015E5")]
	[Address(RVA = "0x47D2800", Offset = "0x47D2800", VA = "0x47D2800")]
	public static bool2 operator !=(half2 lhs, half rhs)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015E6")]
	[Address(RVA = "0x47D2820", Offset = "0x47D2820", VA = "0x47D2820")]
	public static bool2 operator !=(half lhs, half2 rhs)
	{
		return default(bool2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001607")]
	[Address(RVA = "0x47D2C40", Offset = "0x47D2C40", VA = "0x47D2C40", Slot = "4")]
	public bool Equals(half2 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001608")]
	[Address(RVA = "0x47D2C60", Offset = "0x47D2C60", VA = "0x47D2C60", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001609")]
	[Address(RVA = "0x47D2CD0", Offset = "0x47D2CD0", VA = "0x47D2CD0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600160A")]
	[Address(RVA = "0x47D2D00", Offset = "0x47D2D00", VA = "0x47D2D00", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600160B")]
	[Address(RVA = "0x47D2D90", Offset = "0x47D2D90", VA = "0x47D2D90", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
