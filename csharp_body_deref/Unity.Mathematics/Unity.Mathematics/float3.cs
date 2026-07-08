using System;
using System.ComponentModel;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.IL2CPP.CompilerServices;
using UnityEngine;

namespace Unity.Mathematics;

[Serializable]
[Token(Token = "0x2000030")]
[DebuggerTypeProxy(typeof(DebuggerProxy))]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct float3 : IEquatable<float3>, IFormattable
{
	[Token(Token = "0x2000031")]
	internal sealed class DebuggerProxy
	{
		[Token(Token = "0x40000B0")]
		[FieldOffset(Offset = "0x10")]
		public float x;

		[Token(Token = "0x40000B1")]
		[FieldOffset(Offset = "0x14")]
		public float y;

		[Token(Token = "0x40000B2")]
		[FieldOffset(Offset = "0x18")]
		public float z;

		[Token(Token = "0x6001231")]
		[Address(RVA = "0x47B3460", Offset = "0x47B3460", VA = "0x47B3460")]
		public DebuggerProxy(float3 v)
		{
		}
	}

	[Token(Token = "0x40000AC")]
	[FieldOffset(Offset = "0x0")]
	public float x;

	[Token(Token = "0x40000AD")]
	[FieldOffset(Offset = "0x4")]
	public float y;

	[Token(Token = "0x40000AE")]
	[FieldOffset(Offset = "0x8")]
	public float z;

	[Token(Token = "0x40000AF")]
	[FieldOffset(Offset = "0x0")]
	public static readonly float3 zero;

	[Token(Token = "0x170003FB")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float4 xxxx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60011A7")]
		[Address(RVA = "0x47B25B0", Offset = "0x47B25B0", VA = "0x47B25B0")]
		get
		{
			return default(float4);
		}
	}

	[Token(Token = "0x170003FC")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float4 xxxy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60011A8")]
		[Address(RVA = "0x47B25C0", Offset = "0x47B25C0", VA = "0x47B25C0")]
		get
		{
			return default(float4);
		}
	}

	[Token(Token = "0x170003FD")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float4 xxxz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60011A9")]
		[Address(RVA = "0x47B25D0", Offset = "0x47B25D0", VA = "0x47B25D0")]
		get
		{
			return default(float4);
		}
	}

	[Token(Token = "0x170003FE")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float4 xxyx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60011AA")]
		[Address(RVA = "0x47B25F0", Offset = "0x47B25F0", VA = "0x47B25F0")]
		get
		{
			return default(float4);
		}
	}

	[Token(Token = "0x170003FF")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float4 xxyy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60011AB")]
		[Address(RVA = "0x47B2610", Offset = "0x47B2610", VA = "0x47B2610")]
		get
		{
			return default(float4);
		}
	}

	[Token(Token = "0x17000400")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float4 xxyz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60011AC")]
		[Address(RVA = "0x47B2630", Offset = "0x47B2630", VA = "0x47B2630")]
		get
		{
			return default(float4);
		}
	}

	[Token(Token = "0x17000401")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float4 xxzx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60011AD")]
		[Address(RVA = "0x47B2640", Offset = "0x47B2640", VA = "0x47B2640")]
		get
		{
			return default(float4);
		}
	}

	[Token(Token = "0x17000402")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float4 xxzy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60011AE")]
		[Address(RVA = "0x47B2660", Offset = "0x47B2660", VA = "0x47B2660")]
		get
		{
			return default(float4);
		}
	}

	[Token(Token = "0x17000403")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float4 xxzz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60011AF")]
		[Address(RVA = "0x47B2680", Offset = "0x47B2680", VA = "0x47B2680")]
		get
		{
			return default(float4);
		}
	}

	[Token(Token = "0x17000404")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float4 xyxx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60011B0")]
		[Address(RVA = "0x47B26A0", Offset = "0x47B26A0", VA = "0x47B26A0")]
		get
		{
			return default(float4);
		}
	}

	[Token(Token = "0x17000405")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float4 xyxy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60011B1")]
		[Address(RVA = "0x47B26B0", Offset = "0x47B26B0", VA = "0x47B26B0")]
		get
		{
			return default(float4);
		}
	}

	[Token(Token = "0x17000406")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float4 xyxz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60011B2")]
		[Address(RVA = "0x47B26C0", Offset = "0x47B26C0", VA = "0x47B26C0")]
		get
		{
			return default(float4);
		}
	}

	[Token(Token = "0x17000407")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float4 xyyx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60011B3")]
		[Address(RVA = "0x47B26E0", Offset = "0x47B26E0", VA = "0x47B26E0")]
		get
		{
			return default(float4);
		}
	}

	[Token(Token = "0x17000408")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float4 xyyy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60011B4")]
		[Address(RVA = "0x47B26F0", Offset = "0x47B26F0", VA = "0x47B26F0")]
		get
		{
			return default(float4);
		}
	}

	[Token(Token = "0x17000409")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float4 xyyz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60011B5")]
		[Address(RVA = "0x47B2700", Offset = "0x47B2700", VA = "0x47B2700")]
		get
		{
			return default(float4);
		}
	}

	[Token(Token = "0x1700040A")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float4 xyzx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60011B6")]
		[Address(RVA = "0x47B2710", Offset = "0x47B2710", VA = "0x47B2710")]
		get
		{
			return default(float4);
		}
	}

	[Token(Token = "0x1700040B")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float4 xyzy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60011B7")]
		[Address(RVA = "0x47B2720", Offset = "0x47B2720", VA = "0x47B2720")]
		get
		{
			return default(float4);
		}
	}

	[Token(Token = "0x1700040C")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float4 xyzz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60011B8")]
		[Address(RVA = "0x47B2740", Offset = "0x47B2740", VA = "0x47B2740")]
		get
		{
			return default(float4);
		}
	}

	[Token(Token = "0x1700040D")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float4 xzxx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60011B9")]
		[Address(RVA = "0x47B2750", Offset = "0x47B2750", VA = "0x47B2750")]
		get
		{
			return default(float4);
		}
	}

	[Token(Token = "0x1700040E")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float4 xzxy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60011BA")]
		[Address(RVA = "0x47B2770", Offset = "0x47B2770", VA = "0x47B2770")]
		get
		{
			return default(float4);
		}
	}

	[Token(Token = "0x1700040F")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float4 xzxz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60011BB")]
		[Address(RVA = "0x47B2790", Offset = "0x47B2790", VA = "0x47B2790")]
		get
		{
			return default(float4);
		}
	}

	[Token(Token = "0x17000410")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float4 xzyx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60011BC")]
		[Address(RVA = "0x47B27A0", Offset = "0x47B27A0", VA = "0x47B27A0")]
		get
		{
			return default(float4);
		}
	}

	[Token(Token = "0x17000411")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float4 xzyy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60011BD")]
		[Address(RVA = "0x47B27C0", Offset = "0x47B27C0", VA = "0x47B27C0")]
		get
		{
			return default(float4);
		}
	}

	[Token(Token = "0x17000412")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float4 xzyz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60011BE")]
		[Address(RVA = "0x47B27E0", Offset = "0x47B27E0", VA = "0x47B27E0")]
		get
		{
			return default(float4);
		}
	}

	[Token(Token = "0x17000413")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float4 xzzx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60011BF")]
		[Address(RVA = "0x47B2800", Offset = "0x47B2800", VA = "0x47B2800")]
		get
		{
			return default(float4);
		}
	}

	[Token(Token = "0x17000414")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float4 xzzy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60011C0")]
		[Address(RVA = "0x47B2820", Offset = "0x47B2820", VA = "0x47B2820")]
		get
		{
			return default(float4);
		}
	}

	[Token(Token = "0x17000415")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float4 xzzz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60011C1")]
		[Address(RVA = "0x47B2840", Offset = "0x47B2840", VA = "0x47B2840")]
		get
		{
			return default(float4);
		}
	}

	[Token(Token = "0x17000416")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float4 yxxx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60011C2")]
		[Address(RVA = "0x47B2860", Offset = "0x47B2860", VA = "0x47B2860")]
		get
		{
			return default(float4);
		}
	}

	[Token(Token = "0x17000417")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float4 yxxy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60011C3")]
		[Address(RVA = "0x47B2880", Offset = "0x47B2880", VA = "0x47B2880")]
		get
		{
			return default(float4);
		}
	}

	[Token(Token = "0x17000418")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float4 yxxz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60011C4")]
		[Address(RVA = "0x47B2890", Offset = "0x47B2890", VA = "0x47B2890")]
		get
		{
			return default(float4);
		}
	}

	[Token(Token = "0x17000419")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float4 yxyx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60011C5")]
		[Address(RVA = "0x47B28B0", Offset = "0x47B28B0", VA = "0x47B28B0")]
		get
		{
			return default(float4);
		}
	}

	[Token(Token = "0x1700041A")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float4 yxyy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60011C6")]
		[Address(RVA = "0x47B28C0", Offset = "0x47B28C0", VA = "0x47B28C0")]
		get
		{
			return default(float4);
		}
	}

	[Token(Token = "0x1700041B")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float4 yxyz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60011C7")]
		[Address(RVA = "0x47B28E0", Offset = "0x47B28E0", VA = "0x47B28E0")]
		get
		{
			return default(float4);
		}
	}

	[Token(Token = "0x1700041C")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float4 yxzx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60011C8")]
		[Address(RVA = "0x47B2900", Offset = "0x47B2900", VA = "0x47B2900")]
		get
		{
			return default(float4);
		}
	}

	[Token(Token = "0x1700041D")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float4 yxzy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60011C9")]
		[Address(RVA = "0x47B2920", Offset = "0x47B2920", VA = "0x47B2920")]
		get
		{
			return default(float4);
		}
	}

	[Token(Token = "0x1700041E")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float4 yxzz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60011CA")]
		[Address(RVA = "0x47B2940", Offset = "0x47B2940", VA = "0x47B2940")]
		get
		{
			return default(float4);
		}
	}

	[Token(Token = "0x1700041F")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float4 yyxx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60011CB")]
		[Address(RVA = "0x47B2960", Offset = "0x47B2960", VA = "0x47B2960")]
		get
		{
			return default(float4);
		}
	}

	[Token(Token = "0x17000420")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float4 yyxy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60011CC")]
		[Address(RVA = "0x47B2980", Offset = "0x47B2980", VA = "0x47B2980")]
		get
		{
			return default(float4);
		}
	}

	[Token(Token = "0x17000421")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float4 yyxz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60011CD")]
		[Address(RVA = "0x47B2990", Offset = "0x47B2990", VA = "0x47B2990")]
		get
		{
			return default(float4);
		}
	}

	[Token(Token = "0x17000422")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float4 yyyx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60011CE")]
		[Address(RVA = "0x47B29B0", Offset = "0x47B29B0", VA = "0x47B29B0")]
		get
		{
			return default(float4);
		}
	}

	[Token(Token = "0x17000423")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float4 yyyy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60011CF")]
		[Address(RVA = "0x47B29D0", Offset = "0x47B29D0", VA = "0x47B29D0")]
		get
		{
			return default(float4);
		}
	}

	[Token(Token = "0x17000424")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float4 yyyz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60011D0")]
		[Address(RVA = "0x47B29E0", Offset = "0x47B29E0", VA = "0x47B29E0")]
		get
		{
			return default(float4);
		}
	}

	[Token(Token = "0x17000425")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float4 yyzx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60011D1")]
		[Address(RVA = "0x47B29F0", Offset = "0x47B29F0", VA = "0x47B29F0")]
		get
		{
			return default(float4);
		}
	}

	[Token(Token = "0x17000426")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float4 yyzy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60011D2")]
		[Address(RVA = "0x47B2A10", Offset = "0x47B2A10", VA = "0x47B2A10")]
		get
		{
			return default(float4);
		}
	}

	[Token(Token = "0x17000427")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float4 yyzz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60011D3")]
		[Address(RVA = "0x47B2A30", Offset = "0x47B2A30", VA = "0x47B2A30")]
		get
		{
			return default(float4);
		}
	}

	[Token(Token = "0x17000428")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float4 yzxx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60011D4")]
		[Address(RVA = "0x47B2A50", Offset = "0x47B2A50", VA = "0x47B2A50")]
		get
		{
			return default(float4);
		}
	}

	[Token(Token = "0x17000429")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float4 yzxy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60011D5")]
		[Address(RVA = "0x47B2A60", Offset = "0x47B2A60", VA = "0x47B2A60")]
		get
		{
			return default(float4);
		}
	}

	[Token(Token = "0x1700042A")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float4 yzxz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60011D6")]
		[Address(RVA = "0x47B2A80", Offset = "0x47B2A80", VA = "0x47B2A80")]
		get
		{
			return default(float4);
		}
	}

	[Token(Token = "0x1700042B")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float4 yzyx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60011D7")]
		[Address(RVA = "0x47B2AA0", Offset = "0x47B2AA0", VA = "0x47B2AA0")]
		get
		{
			return default(float4);
		}
	}

	[Token(Token = "0x1700042C")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float4 yzyy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60011D8")]
		[Address(RVA = "0x47B2AC0", Offset = "0x47B2AC0", VA = "0x47B2AC0")]
		get
		{
			return default(float4);
		}
	}

	[Token(Token = "0x1700042D")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float4 yzyz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60011D9")]
		[Address(RVA = "0x47B2AD0", Offset = "0x47B2AD0", VA = "0x47B2AD0")]
		get
		{
			return default(float4);
		}
	}

	[Token(Token = "0x1700042E")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float4 yzzx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60011DA")]
		[Address(RVA = "0x47B2AE0", Offset = "0x47B2AE0", VA = "0x47B2AE0")]
		get
		{
			return default(float4);
		}
	}

	[Token(Token = "0x1700042F")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float4 yzzy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60011DB")]
		[Address(RVA = "0x47B2B00", Offset = "0x47B2B00", VA = "0x47B2B00")]
		get
		{
			return default(float4);
		}
	}

	[Token(Token = "0x17000430")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float4 yzzz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60011DC")]
		[Address(RVA = "0x47B2B10", Offset = "0x47B2B10", VA = "0x47B2B10")]
		get
		{
			return default(float4);
		}
	}

	[Token(Token = "0x17000431")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float4 zxxx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60011DD")]
		[Address(RVA = "0x47B2B20", Offset = "0x47B2B20", VA = "0x47B2B20")]
		get
		{
			return default(float4);
		}
	}

	[Token(Token = "0x17000432")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float4 zxxy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60011DE")]
		[Address(RVA = "0x47B2B40", Offset = "0x47B2B40", VA = "0x47B2B40")]
		get
		{
			return default(float4);
		}
	}

	[Token(Token = "0x17000433")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float4 zxxz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60011DF")]
		[Address(RVA = "0x47B2B50", Offset = "0x47B2B50", VA = "0x47B2B50")]
		get
		{
			return default(float4);
		}
	}

	[Token(Token = "0x17000434")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float4 zxyx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60011E0")]
		[Address(RVA = "0x47B2B70", Offset = "0x47B2B70", VA = "0x47B2B70")]
		get
		{
			return default(float4);
		}
	}

	[Token(Token = "0x17000435")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float4 zxyy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60011E1")]
		[Address(RVA = "0x47B2B90", Offset = "0x47B2B90", VA = "0x47B2B90")]
		get
		{
			return default(float4);
		}
	}

	[Token(Token = "0x17000436")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float4 zxyz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60011E2")]
		[Address(RVA = "0x47B2BB0", Offset = "0x47B2BB0", VA = "0x47B2BB0")]
		get
		{
			return default(float4);
		}
	}

	[Token(Token = "0x17000437")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float4 zxzx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60011E3")]
		[Address(RVA = "0x47B2BD0", Offset = "0x47B2BD0", VA = "0x47B2BD0")]
		get
		{
			return default(float4);
		}
	}

	[Token(Token = "0x17000438")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float4 zxzy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60011E4")]
		[Address(RVA = "0x47B2BE0", Offset = "0x47B2BE0", VA = "0x47B2BE0")]
		get
		{
			return default(float4);
		}
	}

	[Token(Token = "0x17000439")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float4 zxzz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60011E5")]
		[Address(RVA = "0x47B2C10", Offset = "0x47B2C10", VA = "0x47B2C10")]
		get
		{
			return default(float4);
		}
	}

	[Token(Token = "0x1700043A")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float4 zyxx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60011E6")]
		[Address(RVA = "0x47B2C30", Offset = "0x47B2C30", VA = "0x47B2C30")]
		get
		{
			return default(float4);
		}
	}

	[Token(Token = "0x1700043B")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float4 zyxy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60011E7")]
		[Address(RVA = "0x47B2C50", Offset = "0x47B2C50", VA = "0x47B2C50")]
		get
		{
			return default(float4);
		}
	}

	[Token(Token = "0x1700043C")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float4 zyxz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60011E8")]
		[Address(RVA = "0x47B2C70", Offset = "0x47B2C70", VA = "0x47B2C70")]
		get
		{
			return default(float4);
		}
	}

	[Token(Token = "0x1700043D")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float4 zyyx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60011E9")]
		[Address(RVA = "0x47B2C90", Offset = "0x47B2C90", VA = "0x47B2C90")]
		get
		{
			return default(float4);
		}
	}

	[Token(Token = "0x1700043E")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float4 zyyy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60011EA")]
		[Address(RVA = "0x47B2CB0", Offset = "0x47B2CB0", VA = "0x47B2CB0")]
		get
		{
			return default(float4);
		}
	}

	[Token(Token = "0x1700043F")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float4 zyyz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60011EB")]
		[Address(RVA = "0x47B2CD0", Offset = "0x47B2CD0", VA = "0x47B2CD0")]
		get
		{
			return default(float4);
		}
	}

	[Token(Token = "0x17000440")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float4 zyzx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60011EC")]
		[Address(RVA = "0x47B2CE0", Offset = "0x47B2CE0", VA = "0x47B2CE0")]
		get
		{
			return default(float4);
		}
	}

	[Token(Token = "0x17000441")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float4 zyzy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60011ED")]
		[Address(RVA = "0x47B2D10", Offset = "0x47B2D10", VA = "0x47B2D10")]
		get
		{
			return default(float4);
		}
	}

	[Token(Token = "0x17000442")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float4 zyzz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60011EE")]
		[Address(RVA = "0x47B2D30", Offset = "0x47B2D30", VA = "0x47B2D30")]
		get
		{
			return default(float4);
		}
	}

	[Token(Token = "0x17000443")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float4 zzxx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60011EF")]
		[Address(RVA = "0x47B2D50", Offset = "0x47B2D50", VA = "0x47B2D50")]
		get
		{
			return default(float4);
		}
	}

	[Token(Token = "0x17000444")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float4 zzxy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60011F0")]
		[Address(RVA = "0x47B2D70", Offset = "0x47B2D70", VA = "0x47B2D70")]
		get
		{
			return default(float4);
		}
	}

	[Token(Token = "0x17000445")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float4 zzxz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60011F1")]
		[Address(RVA = "0x47B2D80", Offset = "0x47B2D80", VA = "0x47B2D80")]
		get
		{
			return default(float4);
		}
	}

	[Token(Token = "0x17000446")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float4 zzyx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60011F2")]
		[Address(RVA = "0x47B2DA0", Offset = "0x47B2DA0", VA = "0x47B2DA0")]
		get
		{
			return default(float4);
		}
	}

	[Token(Token = "0x17000447")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float4 zzyy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60011F3")]
		[Address(RVA = "0x47B2DC0", Offset = "0x47B2DC0", VA = "0x47B2DC0")]
		get
		{
			return default(float4);
		}
	}

	[Token(Token = "0x17000448")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float4 zzyz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60011F4")]
		[Address(RVA = "0x47B2DE0", Offset = "0x47B2DE0", VA = "0x47B2DE0")]
		get
		{
			return default(float4);
		}
	}

	[Token(Token = "0x17000449")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float4 zzzx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60011F5")]
		[Address(RVA = "0x47B2DF0", Offset = "0x47B2DF0", VA = "0x47B2DF0")]
		get
		{
			return default(float4);
		}
	}

	[Token(Token = "0x1700044A")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float4 zzzy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60011F6")]
		[Address(RVA = "0x47B2E10", Offset = "0x47B2E10", VA = "0x47B2E10")]
		get
		{
			return default(float4);
		}
	}

	[Token(Token = "0x1700044B")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float4 zzzz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60011F7")]
		[Address(RVA = "0x47B2E30", Offset = "0x47B2E30", VA = "0x47B2E30")]
		get
		{
			return default(float4);
		}
	}

	[Token(Token = "0x1700044C")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float3 xxx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60011F8")]
		[Address(RVA = "0x47B2E40", Offset = "0x47B2E40", VA = "0x47B2E40")]
		get
		{
			return default(float3);
		}
	}

	[Token(Token = "0x1700044D")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float3 xxy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60011F9")]
		[Address(RVA = "0x47B2E50", Offset = "0x47B2E50", VA = "0x47B2E50")]
		get
		{
			return default(float3);
		}
	}

	[Token(Token = "0x1700044E")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float3 xxz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60011FA")]
		[Address(RVA = "0x47B2E60", Offset = "0x47B2E60", VA = "0x47B2E60")]
		get
		{
			return default(float3);
		}
	}

	[Token(Token = "0x1700044F")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float3 xyx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60011FB")]
		[Address(RVA = "0x47B2E70", Offset = "0x47B2E70", VA = "0x47B2E70")]
		get
		{
			return default(float3);
		}
	}

	[Token(Token = "0x17000450")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float3 xyy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60011FC")]
		[Address(RVA = "0x47B2E80", Offset = "0x47B2E80", VA = "0x47B2E80")]
		get
		{
			return default(float3);
		}
	}

	[Token(Token = "0x17000451")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float3 xyz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60011FD")]
		[Address(RVA = "0x47B2E90", Offset = "0x47B2E90", VA = "0x47B2E90")]
		get
		{
			return default(float3);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60011FE")]
		[Address(RVA = "0x47B2EA0", Offset = "0x47B2EA0", VA = "0x47B2EA0")]
		set
		{
		}
	}

	[Token(Token = "0x17000452")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float3 xzx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60011FF")]
		[Address(RVA = "0x47B2EC0", Offset = "0x47B2EC0", VA = "0x47B2EC0")]
		get
		{
			return default(float3);
		}
	}

	[Token(Token = "0x17000453")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float3 xzy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001200")]
		[Address(RVA = "0x47B2ED0", Offset = "0x47B2ED0", VA = "0x47B2ED0")]
		get
		{
			return default(float3);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001201")]
		[Address(RVA = "0x47B2EF0", Offset = "0x47B2EF0", VA = "0x47B2EF0")]
		set
		{
		}
	}

	[Token(Token = "0x17000454")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float3 xzz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001202")]
		[Address(RVA = "0x47B2F10", Offset = "0x47B2F10", VA = "0x47B2F10")]
		get
		{
			return default(float3);
		}
	}

	[Token(Token = "0x17000455")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float3 yxx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001203")]
		[Address(RVA = "0x47B2F20", Offset = "0x47B2F20", VA = "0x47B2F20")]
		get
		{
			return default(float3);
		}
	}

	[Token(Token = "0x17000456")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float3 yxy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001204")]
		[Address(RVA = "0x47B2F30", Offset = "0x47B2F30", VA = "0x47B2F30")]
		get
		{
			return default(float3);
		}
	}

	[Token(Token = "0x17000457")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float3 yxz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001205")]
		[Address(RVA = "0x47B2F40", Offset = "0x47B2F40", VA = "0x47B2F40")]
		get
		{
			return default(float3);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001206")]
		[Address(RVA = "0x47B2F60", Offset = "0x47B2F60", VA = "0x47B2F60")]
		set
		{
		}
	}

	[Token(Token = "0x17000458")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float3 yyx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001207")]
		[Address(RVA = "0x47B2F80", Offset = "0x47B2F80", VA = "0x47B2F80")]
		get
		{
			return default(float3);
		}
	}

	[Token(Token = "0x17000459")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float3 yyy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001208")]
		[Address(RVA = "0x47B2F90", Offset = "0x47B2F90", VA = "0x47B2F90")]
		get
		{
			return default(float3);
		}
	}

	[Token(Token = "0x1700045A")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float3 yyz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001209")]
		[Address(RVA = "0x47B2FA0", Offset = "0x47B2FA0", VA = "0x47B2FA0")]
		get
		{
			return default(float3);
		}
	}

	[Token(Token = "0x1700045B")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float3 yzx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600120A")]
		[Address(RVA = "0x47B2FB0", Offset = "0x47B2FB0", VA = "0x47B2FB0")]
		get
		{
			return default(float3);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600120B")]
		[Address(RVA = "0x47B2FC0", Offset = "0x47B2FC0", VA = "0x47B2FC0")]
		set
		{
		}
	}

	[Token(Token = "0x1700045C")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float3 yzy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600120C")]
		[Address(RVA = "0x47B2FE0", Offset = "0x47B2FE0", VA = "0x47B2FE0")]
		get
		{
			return default(float3);
		}
	}

	[Token(Token = "0x1700045D")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float3 yzz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600120D")]
		[Address(RVA = "0x47B2FF0", Offset = "0x47B2FF0", VA = "0x47B2FF0")]
		get
		{
			return default(float3);
		}
	}

	[Token(Token = "0x1700045E")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float3 zxx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600120E")]
		[Address(RVA = "0x47B3000", Offset = "0x47B3000", VA = "0x47B3000")]
		get
		{
			return default(float3);
		}
	}

	[Token(Token = "0x1700045F")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float3 zxy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600120F")]
		[Address(RVA = "0x47B3010", Offset = "0x47B3010", VA = "0x47B3010")]
		get
		{
			return default(float3);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001210")]
		[Address(RVA = "0x47B3030", Offset = "0x47B3030", VA = "0x47B3030")]
		set
		{
		}
	}

	[Token(Token = "0x17000460")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float3 zxz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001211")]
		[Address(RVA = "0x47B3050", Offset = "0x47B3050", VA = "0x47B3050")]
		get
		{
			return default(float3);
		}
	}

	[Token(Token = "0x17000461")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float3 zyx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001212")]
		[Address(RVA = "0x47B3060", Offset = "0x47B3060", VA = "0x47B3060")]
		get
		{
			return default(float3);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001213")]
		[Address(RVA = "0x47B3080", Offset = "0x47B3080", VA = "0x47B3080")]
		set
		{
		}
	}

	[Token(Token = "0x17000462")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float3 zyy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001214")]
		[Address(RVA = "0x47B30A0", Offset = "0x47B30A0", VA = "0x47B30A0")]
		get
		{
			return default(float3);
		}
	}

	[Token(Token = "0x17000463")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float3 zyz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001215")]
		[Address(RVA = "0x47B30B0", Offset = "0x47B30B0", VA = "0x47B30B0")]
		get
		{
			return default(float3);
		}
	}

	[Token(Token = "0x17000464")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float3 zzx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001216")]
		[Address(RVA = "0x47B30D0", Offset = "0x47B30D0", VA = "0x47B30D0")]
		get
		{
			return default(float3);
		}
	}

	[Token(Token = "0x17000465")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float3 zzy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001217")]
		[Address(RVA = "0x47B30E0", Offset = "0x47B30E0", VA = "0x47B30E0")]
		get
		{
			return default(float3);
		}
	}

	[Token(Token = "0x17000466")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float3 zzz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001218")]
		[Address(RVA = "0x47B30F0", Offset = "0x47B30F0", VA = "0x47B30F0")]
		get
		{
			return default(float3);
		}
	}

	[Token(Token = "0x17000467")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float2 xx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001219")]
		[Address(RVA = "0x47B3100", Offset = "0x47B3100", VA = "0x47B3100")]
		get
		{
			return default(float2);
		}
	}

	[Token(Token = "0x17000468")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float2 xy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600121A")]
		[Address(RVA = "0x47B3110", Offset = "0x47B3110", VA = "0x47B3110")]
		get
		{
			return default(float2);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600121B")]
		[Address(RVA = "0x47B3120", Offset = "0x47B3120", VA = "0x47B3120")]
		set
		{
		}
	}

	[Token(Token = "0x17000469")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float2 xz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600121C")]
		[Address(RVA = "0x47B3130", Offset = "0x47B3130", VA = "0x47B3130")]
		get
		{
			return default(float2);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600121D")]
		[Address(RVA = "0x47B3140", Offset = "0x47B3140", VA = "0x47B3140")]
		set
		{
		}
	}

	[Token(Token = "0x1700046A")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float2 yx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600121E")]
		[Address(RVA = "0x47B3150", Offset = "0x47B3150", VA = "0x47B3150")]
		get
		{
			return default(float2);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600121F")]
		[Address(RVA = "0x47B3160", Offset = "0x47B3160", VA = "0x47B3160")]
		set
		{
		}
	}

	[Token(Token = "0x1700046B")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float2 yy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001220")]
		[Address(RVA = "0x47B3170", Offset = "0x47B3170", VA = "0x47B3170")]
		get
		{
			return default(float2);
		}
	}

	[Token(Token = "0x1700046C")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float2 yz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001221")]
		[Address(RVA = "0x47B3180", Offset = "0x47B3180", VA = "0x47B3180")]
		get
		{
			return default(float2);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001222")]
		[Address(RVA = "0x47B3190", Offset = "0x47B3190", VA = "0x47B3190")]
		set
		{
		}
	}

	[Token(Token = "0x1700046D")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float2 zx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001223")]
		[Address(RVA = "0x47B31A0", Offset = "0x47B31A0", VA = "0x47B31A0")]
		get
		{
			return default(float2);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001224")]
		[Address(RVA = "0x47B31B0", Offset = "0x47B31B0", VA = "0x47B31B0")]
		set
		{
		}
	}

	[Token(Token = "0x1700046E")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float2 zy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001225")]
		[Address(RVA = "0x47B31C0", Offset = "0x47B31C0", VA = "0x47B31C0")]
		get
		{
			return default(float2);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001226")]
		[Address(RVA = "0x47B31D0", Offset = "0x47B31D0", VA = "0x47B31D0")]
		set
		{
		}
	}

	[Token(Token = "0x1700046F")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public float2 zz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001227")]
		[Address(RVA = "0x47B31E0", Offset = "0x47B31E0", VA = "0x47B31E0")]
		get
		{
			return default(float2);
		}
	}

	[Token(Token = "0x17000470")]
	public float this[int index]
	{
		[Token(Token = "0x6001228")]
		[Address(RVA = "0x47B31F0", Offset = "0x47B31F0", VA = "0x47B31F0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6001229")]
		[Address(RVA = "0x47B3200", Offset = "0x47B3200", VA = "0x47B3200")]
		set
		{
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001168")]
	[Address(RVA = "0x47B1920", Offset = "0x47B1920", VA = "0x47B1920")]
	public float3(float x, float y, float z)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001169")]
	[Address(RVA = "0x47B1930", Offset = "0x47B1930", VA = "0x47B1930")]
	public float3(float x, float2 yz)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600116A")]
	[Address(RVA = "0x47B1950", Offset = "0x47B1950", VA = "0x47B1950")]
	public float3(float2 xy, float z)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600116B")]
	[Address(RVA = "0x47B1970", Offset = "0x47B1970", VA = "0x47B1970")]
	public float3(float3 xyz)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600116C")]
	[Address(RVA = "0x47B1990", Offset = "0x47B1990", VA = "0x47B1990")]
	public float3(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600116D")]
	[Address(RVA = "0x47B19A0", Offset = "0x47B19A0", VA = "0x47B19A0")]
	public float3(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600116E")]
	[Address(RVA = "0x47B19D0", Offset = "0x47B19D0", VA = "0x47B19D0")]
	public float3(bool3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600116F")]
	[Address(RVA = "0x47B1A40", Offset = "0x47B1A40", VA = "0x47B1A40")]
	public float3(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001170")]
	[Address(RVA = "0x47B1A60", Offset = "0x47B1A60", VA = "0x47B1A60")]
	public float3(int3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001171")]
	[Address(RVA = "0x47B1A90", Offset = "0x47B1A90", VA = "0x47B1A90")]
	public float3(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001172")]
	[Address(RVA = "0x47B1AB0", Offset = "0x47B1AB0", VA = "0x47B1AB0")]
	public float3(uint3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001173")]
	[Address(RVA = "0x47B1AF0", Offset = "0x47B1AF0", VA = "0x47B1AF0")]
	public float3(half v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001174")]
	[Address(RVA = "0x47B1B60", Offset = "0x47B1B60", VA = "0x47B1B60")]
	public float3(half3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001175")]
	[Address(RVA = "0x47B1C80", Offset = "0x47B1C80", VA = "0x47B1C80")]
	public float3(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001176")]
	[Address(RVA = "0x47B1CA0", Offset = "0x47B1CA0", VA = "0x47B1CA0")]
	public float3(double3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001177")]
	[Address(RVA = "0x47B1CD0", Offset = "0x47B1CD0", VA = "0x47B1CD0")]
	public static implicit operator float3(float v)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001178")]
	[Address(RVA = "0x47B1CE0", Offset = "0x47B1CE0", VA = "0x47B1CE0")]
	public static explicit operator float3(bool v)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001179")]
	[Address(RVA = "0x47B1D00", Offset = "0x47B1D00", VA = "0x47B1D00")]
	public static explicit operator float3(bool3 v)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600117A")]
	[Address(RVA = "0x47B1D50", Offset = "0x47B1D50", VA = "0x47B1D50")]
	public static implicit operator float3(int v)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600117B")]
	[Address(RVA = "0x47B1D60", Offset = "0x47B1D60", VA = "0x47B1D60")]
	public static implicit operator float3(int3 v)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600117C")]
	[Address(RVA = "0x47B1D80", Offset = "0x47B1D80", VA = "0x47B1D80")]
	public static implicit operator float3(uint v)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600117D")]
	[Address(RVA = "0x47B1DA0", Offset = "0x47B1DA0", VA = "0x47B1DA0")]
	public static implicit operator float3(uint3 v)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600117E")]
	[Address(RVA = "0x47B1DD0", Offset = "0x47B1DD0", VA = "0x47B1DD0")]
	public static implicit operator float3(half v)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600117F")]
	[Address(RVA = "0x47B1E40", Offset = "0x47B1E40", VA = "0x47B1E40")]
	public static implicit operator float3(half3 v)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001180")]
	[Address(RVA = "0x47B1F60", Offset = "0x47B1F60", VA = "0x47B1F60")]
	public static explicit operator float3(double v)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001181")]
	[Address(RVA = "0x47B1F70", Offset = "0x47B1F70", VA = "0x47B1F70")]
	public static explicit operator float3(double3 v)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001182")]
	[Address(RVA = "0x47B1F90", Offset = "0x47B1F90", VA = "0x47B1F90")]
	public static float3 operator *(float3 lhs, float3 rhs)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001183")]
	[Address(RVA = "0x47B1FA0", Offset = "0x47B1FA0", VA = "0x47B1FA0")]
	public static float3 operator *(float3 lhs, float rhs)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001184")]
	[Address(RVA = "0x47B1FB0", Offset = "0x47B1FB0", VA = "0x47B1FB0")]
	public static float3 operator *(float lhs, float3 rhs)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001185")]
	[Address(RVA = "0x47B1FC0", Offset = "0x47B1FC0", VA = "0x47B1FC0")]
	public static float3 operator +(float3 lhs, float3 rhs)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001186")]
	[Address(RVA = "0x47B1FD0", Offset = "0x47B1FD0", VA = "0x47B1FD0")]
	public static float3 operator +(float3 lhs, float rhs)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001187")]
	[Address(RVA = "0x47B1FE0", Offset = "0x47B1FE0", VA = "0x47B1FE0")]
	public static float3 operator +(float lhs, float3 rhs)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001188")]
	[Address(RVA = "0x47B1FF0", Offset = "0x47B1FF0", VA = "0x47B1FF0")]
	public static float3 operator -(float3 lhs, float3 rhs)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001189")]
	[Address(RVA = "0x47B2000", Offset = "0x47B2000", VA = "0x47B2000")]
	public static float3 operator -(float3 lhs, float rhs)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600118A")]
	[Address(RVA = "0x47B2010", Offset = "0x47B2010", VA = "0x47B2010")]
	public static float3 operator -(float lhs, float3 rhs)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600118B")]
	[Address(RVA = "0x47B2030", Offset = "0x47B2030", VA = "0x47B2030")]
	public static float3 operator /(float3 lhs, float3 rhs)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600118C")]
	[Address(RVA = "0x47B2040", Offset = "0x47B2040", VA = "0x47B2040")]
	public static float3 operator /(float3 lhs, float rhs)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600118D")]
	[Address(RVA = "0x47B2050", Offset = "0x47B2050", VA = "0x47B2050")]
	public static float3 operator /(float lhs, float3 rhs)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600118E")]
	[Address(RVA = "0x47B2070", Offset = "0x47B2070", VA = "0x47B2070")]
	public static float3 operator %(float3 lhs, float3 rhs)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600118F")]
	[Address(RVA = "0x47B20E0", Offset = "0x47B20E0", VA = "0x47B20E0")]
	public static float3 operator %(float3 lhs, float rhs)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001190")]
	[Address(RVA = "0x47B2150", Offset = "0x47B2150", VA = "0x47B2150")]
	public static float3 operator %(float lhs, float3 rhs)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001191")]
	[Address(RVA = "0x47B21B0", Offset = "0x47B21B0", VA = "0x47B21B0")]
	public static float3 operator ++(float3 val)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001192")]
	[Address(RVA = "0x47B21C0", Offset = "0x47B21C0", VA = "0x47B21C0")]
	public static float3 operator --(float3 val)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001193")]
	[Address(RVA = "0x47B21D0", Offset = "0x47B21D0", VA = "0x47B21D0")]
	public static bool3 operator <(float3 lhs, float3 rhs)
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001194")]
	[Address(RVA = "0x47B2200", Offset = "0x47B2200", VA = "0x47B2200")]
	public static bool3 operator <(float3 lhs, float rhs)
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001195")]
	[Address(RVA = "0x47B2230", Offset = "0x47B2230", VA = "0x47B2230")]
	public static bool3 operator <(float lhs, float3 rhs)
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001196")]
	[Address(RVA = "0x47B2260", Offset = "0x47B2260", VA = "0x47B2260")]
	public static bool3 operator <=(float3 lhs, float3 rhs)
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001197")]
	[Address(RVA = "0x47B2290", Offset = "0x47B2290", VA = "0x47B2290")]
	public static bool3 operator <=(float3 lhs, float rhs)
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001198")]
	[Address(RVA = "0x47B22C0", Offset = "0x47B22C0", VA = "0x47B22C0")]
	public static bool3 operator <=(float lhs, float3 rhs)
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001199")]
	[Address(RVA = "0x47B22F0", Offset = "0x47B22F0", VA = "0x47B22F0")]
	public static bool3 operator >(float3 lhs, float3 rhs)
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600119A")]
	[Address(RVA = "0x47B2320", Offset = "0x47B2320", VA = "0x47B2320")]
	public static bool3 operator >(float3 lhs, float rhs)
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600119B")]
	[Address(RVA = "0x47B2350", Offset = "0x47B2350", VA = "0x47B2350")]
	public static bool3 operator >(float lhs, float3 rhs)
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600119C")]
	[Address(RVA = "0x47B2380", Offset = "0x47B2380", VA = "0x47B2380")]
	public static bool3 operator >=(float3 lhs, float3 rhs)
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600119D")]
	[Address(RVA = "0x47B23B0", Offset = "0x47B23B0", VA = "0x47B23B0")]
	public static bool3 operator >=(float3 lhs, float rhs)
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600119E")]
	[Address(RVA = "0x47B23E0", Offset = "0x47B23E0", VA = "0x47B23E0")]
	public static bool3 operator >=(float lhs, float3 rhs)
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600119F")]
	[Address(RVA = "0x47B2410", Offset = "0x47B2410", VA = "0x47B2410")]
	public static float3 operator -(float3 val)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60011A0")]
	[Address(RVA = "0x47B2420", Offset = "0x47B2420", VA = "0x47B2420")]
	public static float3 operator +(float3 val)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60011A1")]
	[Address(RVA = "0x47B2430", Offset = "0x47B2430", VA = "0x47B2430")]
	public static bool3 operator ==(float3 lhs, float3 rhs)
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60011A2")]
	[Address(RVA = "0x47B2470", Offset = "0x47B2470", VA = "0x47B2470")]
	public static bool3 operator ==(float3 lhs, float rhs)
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60011A3")]
	[Address(RVA = "0x47B24B0", Offset = "0x47B24B0", VA = "0x47B24B0")]
	public static bool3 operator ==(float lhs, float3 rhs)
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60011A4")]
	[Address(RVA = "0x47B24F0", Offset = "0x47B24F0", VA = "0x47B24F0")]
	public static bool3 operator !=(float3 lhs, float3 rhs)
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60011A5")]
	[Address(RVA = "0x47B2530", Offset = "0x47B2530", VA = "0x47B2530")]
	public static bool3 operator !=(float3 lhs, float rhs)
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60011A6")]
	[Address(RVA = "0x47B2570", Offset = "0x47B2570", VA = "0x47B2570")]
	public static bool3 operator !=(float lhs, float3 rhs)
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600122A")]
	[Address(RVA = "0x47B3210", Offset = "0x47B3210", VA = "0x47B3210", Slot = "4")]
	public bool Equals(float3 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x600122B")]
	[Address(RVA = "0x47B3240", Offset = "0x47B3240", VA = "0x47B3240", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600122C")]
	[Address(RVA = "0x47B32D0", Offset = "0x47B32D0", VA = "0x47B32D0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600122D")]
	[Address(RVA = "0x47B3310", Offset = "0x47B3310", VA = "0x47B3310", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600122E")]
	[Address(RVA = "0x47B33B0", Offset = "0x47B33B0", VA = "0x47B33B0", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}

	[Token(Token = "0x600122F")]
	[Address(RVA = "0x47B3440", Offset = "0x47B3440", VA = "0x47B3440")]
	public static implicit operator Vector3(float3 v)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6001230")]
	[Address(RVA = "0x47B3450", Offset = "0x47B3450", VA = "0x47B3450")]
	public static implicit operator float3(Vector3 v)
	{
		return default(float3);
	}
}
