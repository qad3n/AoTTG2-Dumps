using System;
using System.ComponentModel;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.IL2CPP.CompilerServices;

namespace Unity.Mathematics;

[Serializable]
[Token(Token = "0x200003D")]
[DebuggerTypeProxy(typeof(DebuggerProxy))]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct half3 : IEquatable<half3>, IFormattable
{
	[Token(Token = "0x200003E")]
	internal sealed class DebuggerProxy
	{
		[Token(Token = "0x40000E1")]
		[FieldOffset(Offset = "0x10")]
		public half x;

		[Token(Token = "0x40000E2")]
		[FieldOffset(Offset = "0x12")]
		public half y;

		[Token(Token = "0x40000E3")]
		[FieldOffset(Offset = "0x14")]
		public half z;

		[Token(Token = "0x60016A9")]
		[Address(RVA = "0x47D4DF0", Offset = "0x47D4DF0", VA = "0x47D4DF0")]
		public DebuggerProxy(half3 v)
		{
		}
	}

	[Token(Token = "0x40000DD")]
	[FieldOffset(Offset = "0x0")]
	public half x;

	[Token(Token = "0x40000DE")]
	[FieldOffset(Offset = "0x2")]
	public half y;

	[Token(Token = "0x40000DF")]
	[FieldOffset(Offset = "0x4")]
	public half z;

	[Token(Token = "0x40000E0")]
	[FieldOffset(Offset = "0x0")]
	public static readonly half3 zero;

	[Token(Token = "0x170005E9")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half4 xxxx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001621")]
		[Address(RVA = "0x47D3730", Offset = "0x47D3730", VA = "0x47D3730")]
		get
		{
			return default(half4);
		}
	}

	[Token(Token = "0x170005EA")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half4 xxxy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001622")]
		[Address(RVA = "0x47D3750", Offset = "0x47D3750", VA = "0x47D3750")]
		get
		{
			return default(half4);
		}
	}

	[Token(Token = "0x170005EB")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half4 xxxz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001623")]
		[Address(RVA = "0x47D3770", Offset = "0x47D3770", VA = "0x47D3770")]
		get
		{
			return default(half4);
		}
	}

	[Token(Token = "0x170005EC")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half4 xxyx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001624")]
		[Address(RVA = "0x47D3790", Offset = "0x47D3790", VA = "0x47D3790")]
		get
		{
			return default(half4);
		}
	}

	[Token(Token = "0x170005ED")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half4 xxyy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001625")]
		[Address(RVA = "0x47D37B0", Offset = "0x47D37B0", VA = "0x47D37B0")]
		get
		{
			return default(half4);
		}
	}

	[Token(Token = "0x170005EE")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half4 xxyz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001626")]
		[Address(RVA = "0x47D37E0", Offset = "0x47D37E0", VA = "0x47D37E0")]
		get
		{
			return default(half4);
		}
	}

	[Token(Token = "0x170005EF")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half4 xxzx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001627")]
		[Address(RVA = "0x47D3810", Offset = "0x47D3810", VA = "0x47D3810")]
		get
		{
			return default(half4);
		}
	}

	[Token(Token = "0x170005F0")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half4 xxzy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001628")]
		[Address(RVA = "0x47D3830", Offset = "0x47D3830", VA = "0x47D3830")]
		get
		{
			return default(half4);
		}
	}

	[Token(Token = "0x170005F1")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half4 xxzz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001629")]
		[Address(RVA = "0x47D3860", Offset = "0x47D3860", VA = "0x47D3860")]
		get
		{
			return default(half4);
		}
	}

	[Token(Token = "0x170005F2")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half4 xyxx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600162A")]
		[Address(RVA = "0x47D3890", Offset = "0x47D3890", VA = "0x47D3890")]
		get
		{
			return default(half4);
		}
	}

	[Token(Token = "0x170005F3")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half4 xyxy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600162B")]
		[Address(RVA = "0x47D38B0", Offset = "0x47D38B0", VA = "0x47D38B0")]
		get
		{
			return default(half4);
		}
	}

	[Token(Token = "0x170005F4")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half4 xyxz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600162C")]
		[Address(RVA = "0x47D38E0", Offset = "0x47D38E0", VA = "0x47D38E0")]
		get
		{
			return default(half4);
		}
	}

	[Token(Token = "0x170005F5")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half4 xyyx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600162D")]
		[Address(RVA = "0x47D3910", Offset = "0x47D3910", VA = "0x47D3910")]
		get
		{
			return default(half4);
		}
	}

	[Token(Token = "0x170005F6")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half4 xyyy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600162E")]
		[Address(RVA = "0x47D3940", Offset = "0x47D3940", VA = "0x47D3940")]
		get
		{
			return default(half4);
		}
	}

	[Token(Token = "0x170005F7")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half4 xyyz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600162F")]
		[Address(RVA = "0x47D3970", Offset = "0x47D3970", VA = "0x47D3970")]
		get
		{
			return default(half4);
		}
	}

	[Token(Token = "0x170005F8")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half4 xyzx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001630")]
		[Address(RVA = "0x47D39A0", Offset = "0x47D39A0", VA = "0x47D39A0")]
		get
		{
			return default(half4);
		}
	}

	[Token(Token = "0x170005F9")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half4 xyzy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001631")]
		[Address(RVA = "0x47D39D0", Offset = "0x47D39D0", VA = "0x47D39D0")]
		get
		{
			return default(half4);
		}
	}

	[Token(Token = "0x170005FA")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half4 xyzz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001632")]
		[Address(RVA = "0x47D3A00", Offset = "0x47D3A00", VA = "0x47D3A00")]
		get
		{
			return default(half4);
		}
	}

	[Token(Token = "0x170005FB")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half4 xzxx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001633")]
		[Address(RVA = "0x47D3A30", Offset = "0x47D3A30", VA = "0x47D3A30")]
		get
		{
			return default(half4);
		}
	}

	[Token(Token = "0x170005FC")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half4 xzxy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001634")]
		[Address(RVA = "0x47D3A50", Offset = "0x47D3A50", VA = "0x47D3A50")]
		get
		{
			return default(half4);
		}
	}

	[Token(Token = "0x170005FD")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half4 xzxz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001635")]
		[Address(RVA = "0x47D3A80", Offset = "0x47D3A80", VA = "0x47D3A80")]
		get
		{
			return default(half4);
		}
	}

	[Token(Token = "0x170005FE")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half4 xzyx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001636")]
		[Address(RVA = "0x47D3AB0", Offset = "0x47D3AB0", VA = "0x47D3AB0")]
		get
		{
			return default(half4);
		}
	}

	[Token(Token = "0x170005FF")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half4 xzyy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001637")]
		[Address(RVA = "0x47D3AE0", Offset = "0x47D3AE0", VA = "0x47D3AE0")]
		get
		{
			return default(half4);
		}
	}

	[Token(Token = "0x17000600")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half4 xzyz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001638")]
		[Address(RVA = "0x47D3B10", Offset = "0x47D3B10", VA = "0x47D3B10")]
		get
		{
			return default(half4);
		}
	}

	[Token(Token = "0x17000601")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half4 xzzx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001639")]
		[Address(RVA = "0x47D3B40", Offset = "0x47D3B40", VA = "0x47D3B40")]
		get
		{
			return default(half4);
		}
	}

	[Token(Token = "0x17000602")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half4 xzzy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600163A")]
		[Address(RVA = "0x47D3B70", Offset = "0x47D3B70", VA = "0x47D3B70")]
		get
		{
			return default(half4);
		}
	}

	[Token(Token = "0x17000603")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half4 xzzz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600163B")]
		[Address(RVA = "0x47D3BA0", Offset = "0x47D3BA0", VA = "0x47D3BA0")]
		get
		{
			return default(half4);
		}
	}

	[Token(Token = "0x17000604")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half4 yxxx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600163C")]
		[Address(RVA = "0x47D3BD0", Offset = "0x47D3BD0", VA = "0x47D3BD0")]
		get
		{
			return default(half4);
		}
	}

	[Token(Token = "0x17000605")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half4 yxxy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600163D")]
		[Address(RVA = "0x47D3C00", Offset = "0x47D3C00", VA = "0x47D3C00")]
		get
		{
			return default(half4);
		}
	}

	[Token(Token = "0x17000606")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half4 yxxz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600163E")]
		[Address(RVA = "0x47D3C30", Offset = "0x47D3C30", VA = "0x47D3C30")]
		get
		{
			return default(half4);
		}
	}

	[Token(Token = "0x17000607")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half4 yxyx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600163F")]
		[Address(RVA = "0x47D3C60", Offset = "0x47D3C60", VA = "0x47D3C60")]
		get
		{
			return default(half4);
		}
	}

	[Token(Token = "0x17000608")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half4 yxyy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001640")]
		[Address(RVA = "0x47D3C90", Offset = "0x47D3C90", VA = "0x47D3C90")]
		get
		{
			return default(half4);
		}
	}

	[Token(Token = "0x17000609")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half4 yxyz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001641")]
		[Address(RVA = "0x47D3CB0", Offset = "0x47D3CB0", VA = "0x47D3CB0")]
		get
		{
			return default(half4);
		}
	}

	[Token(Token = "0x1700060A")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half4 yxzx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001642")]
		[Address(RVA = "0x47D3CE0", Offset = "0x47D3CE0", VA = "0x47D3CE0")]
		get
		{
			return default(half4);
		}
	}

	[Token(Token = "0x1700060B")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half4 yxzy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001643")]
		[Address(RVA = "0x47D3D10", Offset = "0x47D3D10", VA = "0x47D3D10")]
		get
		{
			return default(half4);
		}
	}

	[Token(Token = "0x1700060C")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half4 yxzz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001644")]
		[Address(RVA = "0x47D3D40", Offset = "0x47D3D40", VA = "0x47D3D40")]
		get
		{
			return default(half4);
		}
	}

	[Token(Token = "0x1700060D")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half4 yyxx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001645")]
		[Address(RVA = "0x47D3D70", Offset = "0x47D3D70", VA = "0x47D3D70")]
		get
		{
			return default(half4);
		}
	}

	[Token(Token = "0x1700060E")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half4 yyxy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001646")]
		[Address(RVA = "0x47D3DA0", Offset = "0x47D3DA0", VA = "0x47D3DA0")]
		get
		{
			return default(half4);
		}
	}

	[Token(Token = "0x1700060F")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half4 yyxz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001647")]
		[Address(RVA = "0x47D3DC0", Offset = "0x47D3DC0", VA = "0x47D3DC0")]
		get
		{
			return default(half4);
		}
	}

	[Token(Token = "0x17000610")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half4 yyyx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001648")]
		[Address(RVA = "0x47D3DF0", Offset = "0x47D3DF0", VA = "0x47D3DF0")]
		get
		{
			return default(half4);
		}
	}

	[Token(Token = "0x17000611")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half4 yyyy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001649")]
		[Address(RVA = "0x47D3E10", Offset = "0x47D3E10", VA = "0x47D3E10")]
		get
		{
			return default(half4);
		}
	}

	[Token(Token = "0x17000612")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half4 yyyz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600164A")]
		[Address(RVA = "0x47D3E30", Offset = "0x47D3E30", VA = "0x47D3E30")]
		get
		{
			return default(half4);
		}
	}

	[Token(Token = "0x17000613")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half4 yyzx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600164B")]
		[Address(RVA = "0x47D3E60", Offset = "0x47D3E60", VA = "0x47D3E60")]
		get
		{
			return default(half4);
		}
	}

	[Token(Token = "0x17000614")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half4 yyzy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600164C")]
		[Address(RVA = "0x47D3E90", Offset = "0x47D3E90", VA = "0x47D3E90")]
		get
		{
			return default(half4);
		}
	}

	[Token(Token = "0x17000615")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half4 yyzz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600164D")]
		[Address(RVA = "0x47D3EC0", Offset = "0x47D3EC0", VA = "0x47D3EC0")]
		get
		{
			return default(half4);
		}
	}

	[Token(Token = "0x17000616")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half4 yzxx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600164E")]
		[Address(RVA = "0x47D3EF0", Offset = "0x47D3EF0", VA = "0x47D3EF0")]
		get
		{
			return default(half4);
		}
	}

	[Token(Token = "0x17000617")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half4 yzxy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600164F")]
		[Address(RVA = "0x47D3F20", Offset = "0x47D3F20", VA = "0x47D3F20")]
		get
		{
			return default(half4);
		}
	}

	[Token(Token = "0x17000618")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half4 yzxz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001650")]
		[Address(RVA = "0x47D3F50", Offset = "0x47D3F50", VA = "0x47D3F50")]
		get
		{
			return default(half4);
		}
	}

	[Token(Token = "0x17000619")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half4 yzyx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001651")]
		[Address(RVA = "0x47D3F80", Offset = "0x47D3F80", VA = "0x47D3F80")]
		get
		{
			return default(half4);
		}
	}

	[Token(Token = "0x1700061A")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half4 yzyy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001652")]
		[Address(RVA = "0x47D3FB0", Offset = "0x47D3FB0", VA = "0x47D3FB0")]
		get
		{
			return default(half4);
		}
	}

	[Token(Token = "0x1700061B")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half4 yzyz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001653")]
		[Address(RVA = "0x47D3FE0", Offset = "0x47D3FE0", VA = "0x47D3FE0")]
		get
		{
			return default(half4);
		}
	}

	[Token(Token = "0x1700061C")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half4 yzzx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001654")]
		[Address(RVA = "0x47D4010", Offset = "0x47D4010", VA = "0x47D4010")]
		get
		{
			return default(half4);
		}
	}

	[Token(Token = "0x1700061D")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half4 yzzy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001655")]
		[Address(RVA = "0x47D4040", Offset = "0x47D4040", VA = "0x47D4040")]
		get
		{
			return default(half4);
		}
	}

	[Token(Token = "0x1700061E")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half4 yzzz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001656")]
		[Address(RVA = "0x47D4070", Offset = "0x47D4070", VA = "0x47D4070")]
		get
		{
			return default(half4);
		}
	}

	[Token(Token = "0x1700061F")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half4 zxxx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001657")]
		[Address(RVA = "0x47D40A0", Offset = "0x47D40A0", VA = "0x47D40A0")]
		get
		{
			return default(half4);
		}
	}

	[Token(Token = "0x17000620")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half4 zxxy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001658")]
		[Address(RVA = "0x47D40D0", Offset = "0x47D40D0", VA = "0x47D40D0")]
		get
		{
			return default(half4);
		}
	}

	[Token(Token = "0x17000621")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half4 zxxz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001659")]
		[Address(RVA = "0x47D4100", Offset = "0x47D4100", VA = "0x47D4100")]
		get
		{
			return default(half4);
		}
	}

	[Token(Token = "0x17000622")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half4 zxyx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600165A")]
		[Address(RVA = "0x47D4130", Offset = "0x47D4130", VA = "0x47D4130")]
		get
		{
			return default(half4);
		}
	}

	[Token(Token = "0x17000623")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half4 zxyy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600165B")]
		[Address(RVA = "0x47D4160", Offset = "0x47D4160", VA = "0x47D4160")]
		get
		{
			return default(half4);
		}
	}

	[Token(Token = "0x17000624")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half4 zxyz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600165C")]
		[Address(RVA = "0x47D4190", Offset = "0x47D4190", VA = "0x47D4190")]
		get
		{
			return default(half4);
		}
	}

	[Token(Token = "0x17000625")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half4 zxzx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600165D")]
		[Address(RVA = "0x47D41C0", Offset = "0x47D41C0", VA = "0x47D41C0")]
		get
		{
			return default(half4);
		}
	}

	[Token(Token = "0x17000626")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half4 zxzy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600165E")]
		[Address(RVA = "0x47D41F0", Offset = "0x47D41F0", VA = "0x47D41F0")]
		get
		{
			return default(half4);
		}
	}

	[Token(Token = "0x17000627")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half4 zxzz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600165F")]
		[Address(RVA = "0x47D4220", Offset = "0x47D4220", VA = "0x47D4220")]
		get
		{
			return default(half4);
		}
	}

	[Token(Token = "0x17000628")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half4 zyxx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001660")]
		[Address(RVA = "0x47D4240", Offset = "0x47D4240", VA = "0x47D4240")]
		get
		{
			return default(half4);
		}
	}

	[Token(Token = "0x17000629")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half4 zyxy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001661")]
		[Address(RVA = "0x47D4270", Offset = "0x47D4270", VA = "0x47D4270")]
		get
		{
			return default(half4);
		}
	}

	[Token(Token = "0x1700062A")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half4 zyxz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001662")]
		[Address(RVA = "0x47D42A0", Offset = "0x47D42A0", VA = "0x47D42A0")]
		get
		{
			return default(half4);
		}
	}

	[Token(Token = "0x1700062B")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half4 zyyx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001663")]
		[Address(RVA = "0x47D42D0", Offset = "0x47D42D0", VA = "0x47D42D0")]
		get
		{
			return default(half4);
		}
	}

	[Token(Token = "0x1700062C")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half4 zyyy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001664")]
		[Address(RVA = "0x47D4300", Offset = "0x47D4300", VA = "0x47D4300")]
		get
		{
			return default(half4);
		}
	}

	[Token(Token = "0x1700062D")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half4 zyyz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001665")]
		[Address(RVA = "0x47D4330", Offset = "0x47D4330", VA = "0x47D4330")]
		get
		{
			return default(half4);
		}
	}

	[Token(Token = "0x1700062E")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half4 zyzx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001666")]
		[Address(RVA = "0x47D4360", Offset = "0x47D4360", VA = "0x47D4360")]
		get
		{
			return default(half4);
		}
	}

	[Token(Token = "0x1700062F")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half4 zyzy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001667")]
		[Address(RVA = "0x47D4390", Offset = "0x47D4390", VA = "0x47D4390")]
		get
		{
			return default(half4);
		}
	}

	[Token(Token = "0x17000630")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half4 zyzz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001668")]
		[Address(RVA = "0x47D43C0", Offset = "0x47D43C0", VA = "0x47D43C0")]
		get
		{
			return default(half4);
		}
	}

	[Token(Token = "0x17000631")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half4 zzxx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001669")]
		[Address(RVA = "0x47D43F0", Offset = "0x47D43F0", VA = "0x47D43F0")]
		get
		{
			return default(half4);
		}
	}

	[Token(Token = "0x17000632")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half4 zzxy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600166A")]
		[Address(RVA = "0x47D4420", Offset = "0x47D4420", VA = "0x47D4420")]
		get
		{
			return default(half4);
		}
	}

	[Token(Token = "0x17000633")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half4 zzxz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600166B")]
		[Address(RVA = "0x47D4450", Offset = "0x47D4450", VA = "0x47D4450")]
		get
		{
			return default(half4);
		}
	}

	[Token(Token = "0x17000634")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half4 zzyx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600166C")]
		[Address(RVA = "0x47D4470", Offset = "0x47D4470", VA = "0x47D4470")]
		get
		{
			return default(half4);
		}
	}

	[Token(Token = "0x17000635")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half4 zzyy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600166D")]
		[Address(RVA = "0x47D44A0", Offset = "0x47D44A0", VA = "0x47D44A0")]
		get
		{
			return default(half4);
		}
	}

	[Token(Token = "0x17000636")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half4 zzyz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600166E")]
		[Address(RVA = "0x47D44D0", Offset = "0x47D44D0", VA = "0x47D44D0")]
		get
		{
			return default(half4);
		}
	}

	[Token(Token = "0x17000637")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half4 zzzx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600166F")]
		[Address(RVA = "0x47D4500", Offset = "0x47D4500", VA = "0x47D4500")]
		get
		{
			return default(half4);
		}
	}

	[Token(Token = "0x17000638")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half4 zzzy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001670")]
		[Address(RVA = "0x47D4520", Offset = "0x47D4520", VA = "0x47D4520")]
		get
		{
			return default(half4);
		}
	}

	[Token(Token = "0x17000639")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half4 zzzz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001671")]
		[Address(RVA = "0x47D4550", Offset = "0x47D4550", VA = "0x47D4550")]
		get
		{
			return default(half4);
		}
	}

	[Token(Token = "0x1700063A")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half3 xxx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001672")]
		[Address(RVA = "0x47D4570", Offset = "0x47D4570", VA = "0x47D4570")]
		get
		{
			return default(half3);
		}
	}

	[Token(Token = "0x1700063B")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half3 xxy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001673")]
		[Address(RVA = "0x47D4590", Offset = "0x47D4590", VA = "0x47D4590")]
		get
		{
			return default(half3);
		}
	}

	[Token(Token = "0x1700063C")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half3 xxz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001674")]
		[Address(RVA = "0x47D45B0", Offset = "0x47D45B0", VA = "0x47D45B0")]
		get
		{
			return default(half3);
		}
	}

	[Token(Token = "0x1700063D")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half3 xyx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001675")]
		[Address(RVA = "0x47D45D0", Offset = "0x47D45D0", VA = "0x47D45D0")]
		get
		{
			return default(half3);
		}
	}

	[Token(Token = "0x1700063E")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half3 xyy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001676")]
		[Address(RVA = "0x47D45F0", Offset = "0x47D45F0", VA = "0x47D45F0")]
		get
		{
			return default(half3);
		}
	}

	[Token(Token = "0x1700063F")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half3 xyz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001677")]
		[Address(RVA = "0x47D4610", Offset = "0x47D4610", VA = "0x47D4610")]
		get
		{
			return default(half3);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001678")]
		[Address(RVA = "0x47D4630", Offset = "0x47D4630", VA = "0x47D4630")]
		set
		{
		}
	}

	[Token(Token = "0x17000640")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half3 xzx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001679")]
		[Address(RVA = "0x47D4650", Offset = "0x47D4650", VA = "0x47D4650")]
		get
		{
			return default(half3);
		}
	}

	[Token(Token = "0x17000641")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half3 xzy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600167A")]
		[Address(RVA = "0x47D4670", Offset = "0x47D4670", VA = "0x47D4670")]
		get
		{
			return default(half3);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600167B")]
		[Address(RVA = "0x47D4690", Offset = "0x47D4690", VA = "0x47D4690")]
		set
		{
		}
	}

	[Token(Token = "0x17000642")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half3 xzz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600167C")]
		[Address(RVA = "0x47D46B0", Offset = "0x47D46B0", VA = "0x47D46B0")]
		get
		{
			return default(half3);
		}
	}

	[Token(Token = "0x17000643")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half3 yxx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600167D")]
		[Address(RVA = "0x47D46D0", Offset = "0x47D46D0", VA = "0x47D46D0")]
		get
		{
			return default(half3);
		}
	}

	[Token(Token = "0x17000644")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half3 yxy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600167E")]
		[Address(RVA = "0x47D46F0", Offset = "0x47D46F0", VA = "0x47D46F0")]
		get
		{
			return default(half3);
		}
	}

	[Token(Token = "0x17000645")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half3 yxz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600167F")]
		[Address(RVA = "0x47D4710", Offset = "0x47D4710", VA = "0x47D4710")]
		get
		{
			return default(half3);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001680")]
		[Address(RVA = "0x47D4730", Offset = "0x47D4730", VA = "0x47D4730")]
		set
		{
		}
	}

	[Token(Token = "0x17000646")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half3 yyx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001681")]
		[Address(RVA = "0x47D4750", Offset = "0x47D4750", VA = "0x47D4750")]
		get
		{
			return default(half3);
		}
	}

	[Token(Token = "0x17000647")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half3 yyy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001682")]
		[Address(RVA = "0x47D4770", Offset = "0x47D4770", VA = "0x47D4770")]
		get
		{
			return default(half3);
		}
	}

	[Token(Token = "0x17000648")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half3 yyz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001683")]
		[Address(RVA = "0x47D4790", Offset = "0x47D4790", VA = "0x47D4790")]
		get
		{
			return default(half3);
		}
	}

	[Token(Token = "0x17000649")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half3 yzx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001684")]
		[Address(RVA = "0x47D47B0", Offset = "0x47D47B0", VA = "0x47D47B0")]
		get
		{
			return default(half3);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001685")]
		[Address(RVA = "0x47D47D0", Offset = "0x47D47D0", VA = "0x47D47D0")]
		set
		{
		}
	}

	[Token(Token = "0x1700064A")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half3 yzy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001686")]
		[Address(RVA = "0x47D47F0", Offset = "0x47D47F0", VA = "0x47D47F0")]
		get
		{
			return default(half3);
		}
	}

	[Token(Token = "0x1700064B")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half3 yzz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001687")]
		[Address(RVA = "0x47D4810", Offset = "0x47D4810", VA = "0x47D4810")]
		get
		{
			return default(half3);
		}
	}

	[Token(Token = "0x1700064C")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half3 zxx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001688")]
		[Address(RVA = "0x47D4830", Offset = "0x47D4830", VA = "0x47D4830")]
		get
		{
			return default(half3);
		}
	}

	[Token(Token = "0x1700064D")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half3 zxy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001689")]
		[Address(RVA = "0x47D4850", Offset = "0x47D4850", VA = "0x47D4850")]
		get
		{
			return default(half3);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600168A")]
		[Address(RVA = "0x47D4870", Offset = "0x47D4870", VA = "0x47D4870")]
		set
		{
		}
	}

	[Token(Token = "0x1700064E")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half3 zxz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600168B")]
		[Address(RVA = "0x47D4890", Offset = "0x47D4890", VA = "0x47D4890")]
		get
		{
			return default(half3);
		}
	}

	[Token(Token = "0x1700064F")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half3 zyx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600168C")]
		[Address(RVA = "0x47D48B0", Offset = "0x47D48B0", VA = "0x47D48B0")]
		get
		{
			return default(half3);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600168D")]
		[Address(RVA = "0x47D48D0", Offset = "0x47D48D0", VA = "0x47D48D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000650")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half3 zyy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600168E")]
		[Address(RVA = "0x47D48F0", Offset = "0x47D48F0", VA = "0x47D48F0")]
		get
		{
			return default(half3);
		}
	}

	[Token(Token = "0x17000651")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half3 zyz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600168F")]
		[Address(RVA = "0x47D4910", Offset = "0x47D4910", VA = "0x47D4910")]
		get
		{
			return default(half3);
		}
	}

	[Token(Token = "0x17000652")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half3 zzx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001690")]
		[Address(RVA = "0x47D4930", Offset = "0x47D4930", VA = "0x47D4930")]
		get
		{
			return default(half3);
		}
	}

	[Token(Token = "0x17000653")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half3 zzy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001691")]
		[Address(RVA = "0x47D4950", Offset = "0x47D4950", VA = "0x47D4950")]
		get
		{
			return default(half3);
		}
	}

	[Token(Token = "0x17000654")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half3 zzz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001692")]
		[Address(RVA = "0x47D4970", Offset = "0x47D4970", VA = "0x47D4970")]
		get
		{
			return default(half3);
		}
	}

	[Token(Token = "0x17000655")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half2 xx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001693")]
		[Address(RVA = "0x47D4990", Offset = "0x47D4990", VA = "0x47D4990")]
		get
		{
			return default(half2);
		}
	}

	[Token(Token = "0x17000656")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half2 xy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001694")]
		[Address(RVA = "0x47D49A0", Offset = "0x47D49A0", VA = "0x47D49A0")]
		get
		{
			return default(half2);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001695")]
		[Address(RVA = "0x47D49B0", Offset = "0x47D49B0", VA = "0x47D49B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000657")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half2 xz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001696")]
		[Address(RVA = "0x47D49C0", Offset = "0x47D49C0", VA = "0x47D49C0")]
		get
		{
			return default(half2);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001697")]
		[Address(RVA = "0x47D49D0", Offset = "0x47D49D0", VA = "0x47D49D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000658")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half2 yx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001698")]
		[Address(RVA = "0x47D49E0", Offset = "0x47D49E0", VA = "0x47D49E0")]
		get
		{
			return default(half2);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001699")]
		[Address(RVA = "0x47D49F0", Offset = "0x47D49F0", VA = "0x47D49F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000659")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half2 yy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600169A")]
		[Address(RVA = "0x47D4A00", Offset = "0x47D4A00", VA = "0x47D4A00")]
		get
		{
			return default(half2);
		}
	}

	[Token(Token = "0x1700065A")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half2 yz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600169B")]
		[Address(RVA = "0x47D4A10", Offset = "0x47D4A10", VA = "0x47D4A10")]
		get
		{
			return default(half2);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600169C")]
		[Address(RVA = "0x47D4A20", Offset = "0x47D4A20", VA = "0x47D4A20")]
		set
		{
		}
	}

	[Token(Token = "0x1700065B")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half2 zx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600169D")]
		[Address(RVA = "0x47D4A30", Offset = "0x47D4A30", VA = "0x47D4A30")]
		get
		{
			return default(half2);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600169E")]
		[Address(RVA = "0x47D4A40", Offset = "0x47D4A40", VA = "0x47D4A40")]
		set
		{
		}
	}

	[Token(Token = "0x1700065C")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half2 zy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600169F")]
		[Address(RVA = "0x47D4A50", Offset = "0x47D4A50", VA = "0x47D4A50")]
		get
		{
			return default(half2);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60016A0")]
		[Address(RVA = "0x47D4A60", Offset = "0x47D4A60", VA = "0x47D4A60")]
		set
		{
		}
	}

	[Token(Token = "0x1700065D")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public half2 zz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60016A1")]
		[Address(RVA = "0x47D4A70", Offset = "0x47D4A70", VA = "0x47D4A70")]
		get
		{
			return default(half2);
		}
	}

	[Token(Token = "0x1700065E")]
	public half this[int index]
	{
		[Token(Token = "0x60016A2")]
		[Address(RVA = "0x47D4A80", Offset = "0x47D4A80", VA = "0x47D4A80")]
		get
		{
			return default(half);
		}
		[Token(Token = "0x60016A3")]
		[Address(RVA = "0x47D4A90", Offset = "0x47D4A90", VA = "0x47D4A90")]
		set
		{
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600160D")]
	[Address(RVA = "0x47D2EF0", Offset = "0x47D2EF0", VA = "0x47D2EF0")]
	public half3(half x, half y, half z)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600160E")]
	[Address(RVA = "0x47D2F00", Offset = "0x47D2F00", VA = "0x47D2F00")]
	public half3(half x, half2 yz)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600160F")]
	[Address(RVA = "0x47D2F10", Offset = "0x47D2F10", VA = "0x47D2F10")]
	public half3(half2 xy, half z)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001610")]
	[Address(RVA = "0x47D2F20", Offset = "0x47D2F20", VA = "0x47D2F20")]
	public half3(half3 xyz)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001611")]
	[Address(RVA = "0x47D2F40", Offset = "0x47D2F40", VA = "0x47D2F40")]
	public half3(half v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001612")]
	[Address(RVA = "0x47D2F50", Offset = "0x47D2F50", VA = "0x47D2F50")]
	public half3(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001613")]
	[Address(RVA = "0x47D2FB0", Offset = "0x47D2FB0", VA = "0x47D2FB0")]
	public half3(float3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001614")]
	[Address(RVA = "0x47D30C0", Offset = "0x47D30C0", VA = "0x47D30C0")]
	public half3(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001615")]
	[Address(RVA = "0x47D3130", Offset = "0x47D3130", VA = "0x47D3130")]
	public half3(double3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001616")]
	[Address(RVA = "0x47D3250", Offset = "0x47D3250", VA = "0x47D3250")]
	public static implicit operator half3(half v)
	{
		return default(half3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001617")]
	[Address(RVA = "0x47D3270", Offset = "0x47D3270", VA = "0x47D3270")]
	public static explicit operator half3(float v)
	{
		return default(half3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001618")]
	[Address(RVA = "0x47D32E0", Offset = "0x47D32E0", VA = "0x47D32E0")]
	public static explicit operator half3(float3 v)
	{
		return default(half3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001619")]
	[Address(RVA = "0x47D33F0", Offset = "0x47D33F0", VA = "0x47D33F0")]
	public static explicit operator half3(double v)
	{
		return default(half3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600161A")]
	[Address(RVA = "0x47D3460", Offset = "0x47D3460", VA = "0x47D3460")]
	public static explicit operator half3(double3 v)
	{
		return default(half3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600161B")]
	[Address(RVA = "0x47D3590", Offset = "0x47D3590", VA = "0x47D3590")]
	public static bool3 operator ==(half3 lhs, half3 rhs)
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600161C")]
	[Address(RVA = "0x47D35E0", Offset = "0x47D35E0", VA = "0x47D35E0")]
	public static bool3 operator ==(half3 lhs, half rhs)
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600161D")]
	[Address(RVA = "0x47D3620", Offset = "0x47D3620", VA = "0x47D3620")]
	public static bool3 operator ==(half lhs, half3 rhs)
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600161E")]
	[Address(RVA = "0x47D3660", Offset = "0x47D3660", VA = "0x47D3660")]
	public static bool3 operator !=(half3 lhs, half3 rhs)
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600161F")]
	[Address(RVA = "0x47D36B0", Offset = "0x47D36B0", VA = "0x47D36B0")]
	public static bool3 operator !=(half3 lhs, half rhs)
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001620")]
	[Address(RVA = "0x47D36F0", Offset = "0x47D36F0", VA = "0x47D36F0")]
	public static bool3 operator !=(half lhs, half3 rhs)
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60016A4")]
	[Address(RVA = "0x47D4AA0", Offset = "0x47D4AA0", VA = "0x47D4AA0", Slot = "4")]
	public bool Equals(half3 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60016A5")]
	[Address(RVA = "0x47D4AD0", Offset = "0x47D4AD0", VA = "0x47D4AD0", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60016A6")]
	[Address(RVA = "0x47D4B50", Offset = "0x47D4B50", VA = "0x47D4B50", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60016A7")]
	[Address(RVA = "0x47D4B90", Offset = "0x47D4B90", VA = "0x47D4B90", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60016A8")]
	[Address(RVA = "0x47D4C40", Offset = "0x47D4C40", VA = "0x47D4C40", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
