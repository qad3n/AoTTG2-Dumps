using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine;

[Token(Token = "0x20000BE")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/GraphicsScriptBindings.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/LineRenderer.h")]
public sealed class LineRenderer : Renderer
{
	[Token(Token = "0x170000B9")]
	public float startWidth
	{
		[Token(Token = "0x60003A1")]
		[Address(RVA = "0x4A9DB90", Offset = "0x4A9DB90", VA = "0x4A9DB90")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60003A2")]
		[Address(RVA = "0x4A9D630", Offset = "0x4A9D630", VA = "0x4A9D630")]
		set
		{
		}
	}

	[Token(Token = "0x170000BA")]
	public float endWidth
	{
		[Token(Token = "0x60003A3")]
		[Address(RVA = "0x4A9DCB0", Offset = "0x4A9DCB0", VA = "0x4A9DCB0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60003A4")]
		[Address(RVA = "0x4A9D6E0", Offset = "0x4A9D6E0", VA = "0x4A9D6E0")]
		set
		{
		}
	}

	[Token(Token = "0x170000BB")]
	public float widthMultiplier
	{
		[Token(Token = "0x60003A5")]
		[Address(RVA = "0x4A9DDD0", Offset = "0x4A9DDD0", VA = "0x4A9DDD0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60003A6")]
		[Address(RVA = "0x4A9DEA0", Offset = "0x4A9DEA0", VA = "0x4A9DEA0")]
		set
		{
		}
	}

	[Token(Token = "0x170000BC")]
	public int numCornerVertices
	{
		[Token(Token = "0x60003A7")]
		[Address(RVA = "0x4A9DFA0", Offset = "0x4A9DFA0", VA = "0x4A9DFA0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60003A8")]
		[Address(RVA = "0x4A9E070", Offset = "0x4A9E070", VA = "0x4A9E070")]
		set
		{
		}
	}

	[Token(Token = "0x170000BD")]
	public int numCapVertices
	{
		[Token(Token = "0x60003A9")]
		[Address(RVA = "0x4A9E150", Offset = "0x4A9E150", VA = "0x4A9E150")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60003AA")]
		[Address(RVA = "0x4A9E220", Offset = "0x4A9E220", VA = "0x4A9E220")]
		set
		{
		}
	}

	[Token(Token = "0x170000BE")]
	public bool useWorldSpace
	{
		[Token(Token = "0x60003AB")]
		[Address(RVA = "0x4A9E300", Offset = "0x4A9E300", VA = "0x4A9E300")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60003AC")]
		[Address(RVA = "0x4A9E3D0", Offset = "0x4A9E3D0", VA = "0x4A9E3D0")]
		set
		{
		}
	}

	[Token(Token = "0x170000BF")]
	public bool loop
	{
		[Token(Token = "0x60003AD")]
		[Address(RVA = "0x4A9E4B0", Offset = "0x4A9E4B0", VA = "0x4A9E4B0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60003AE")]
		[Address(RVA = "0x4A9E580", Offset = "0x4A9E580", VA = "0x4A9E580")]
		set
		{
		}
	}

	[Token(Token = "0x170000C0")]
	public Color startColor
	{
		[Token(Token = "0x60003AF")]
		[Address(RVA = "0x4A9D8F0", Offset = "0x4A9D8F0", VA = "0x4A9D8F0")]
		set
		{
		}
	}

	[Token(Token = "0x170000C1")]
	public Color endColor
	{
		[Token(Token = "0x60003B0")]
		[Address(RVA = "0x4A9D9A0", Offset = "0x4A9D9A0", VA = "0x4A9D9A0")]
		set
		{
		}
	}

	[Token(Token = "0x170000C2")]
	[UnityEngine.Bindings.NativeProperty("PositionsCount")]
	public int positionCount
	{
		[Token(Token = "0x60003B1")]
		[Address(RVA = "0x4A9E6E0", Offset = "0x4A9E6E0", VA = "0x4A9E6E0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60003B2")]
		[Address(RVA = "0x4A9DAF0", Offset = "0x4A9DAF0", VA = "0x4A9DAF0")]
		set
		{
		}
	}

	[Token(Token = "0x170000C3")]
	public LineTextureMode textureMode
	{
		[Token(Token = "0x60003B5")]
		[Address(RVA = "0x4A9EA00", Offset = "0x4A9EA00", VA = "0x4A9EA00")]
		get
		{
			return default(LineTextureMode);
		}
		[Token(Token = "0x60003B6")]
		[Address(RVA = "0x4A9EAD0", Offset = "0x4A9EAD0", VA = "0x4A9EAD0")]
		set
		{
		}
	}

	[Token(Token = "0x170000C4")]
	public LineAlignment alignment
	{
		[Token(Token = "0x60003B7")]
		[Address(RVA = "0x4A9EBB0", Offset = "0x4A9EBB0", VA = "0x4A9EBB0")]
		get
		{
			return default(LineAlignment);
		}
		[Token(Token = "0x60003B8")]
		[Address(RVA = "0x4A9EC80", Offset = "0x4A9EC80", VA = "0x4A9EC80")]
		set
		{
		}
	}

	[Token(Token = "0x170000C5")]
	public AnimationCurve widthCurve
	{
		[Token(Token = "0x60003B9")]
		[Address(RVA = "0x4A9ED60", Offset = "0x4A9ED60", VA = "0x4A9ED60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000C6")]
	public Gradient colorGradient
	{
		[Token(Token = "0x60003BA")]
		[Address(RVA = "0x4A9EEA0", Offset = "0x4A9EEA0", VA = "0x4A9EEA0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60003BB")]
		[Address(RVA = "0x4A9EFE0", Offset = "0x4A9EFE0", VA = "0x4A9EFE0")]
		set
		{
		}
	}

	[Token(Token = "0x600039E")]
	[Address(RVA = "0x4A9D4E0", Offset = "0x4A9D4E0", VA = "0x4A9D4E0")]
	[Obsolete("Use startWidth, endWidth or widthCurve instead.", false)]
	public void SetWidth(float start, float end)
	{
	}

	[Token(Token = "0x600039F")]
	[Address(RVA = "0x4A9D790", Offset = "0x4A9D790", VA = "0x4A9D790")]
	[Obsolete("Use startColor, endColor or colorGradient instead.", false)]
	public void SetColors(Color start, Color end)
	{
	}

	[Token(Token = "0x60003A0")]
	[Address(RVA = "0x4A9DA50", Offset = "0x4A9DA50", VA = "0x4A9DA50")]
	[Obsolete("Use positionCount instead.", false)]
	public void SetVertexCount(int count)
	{
	}

	[Token(Token = "0x60003B3")]
	[Address(RVA = "0x4A9E7F0", Offset = "0x4A9E7F0", VA = "0x4A9E7F0")]
	public void SetPosition(int index, Vector3 position)
	{
	}

	[Token(Token = "0x60003B4")]
	[Address(RVA = "0x4A9E8F0", Offset = "0x4A9E8F0", VA = "0x4A9E8F0")]
	public Vector3 GetPosition(int index)
	{
		return default(Vector3);
	}

	[Token(Token = "0x60003BC")]
	[Address(RVA = "0x4A9EE00", Offset = "0x4A9EE00", VA = "0x4A9EE00")]
	private AnimationCurve GetWidthCurveCopy()
	{
		return null;
	}

	[Token(Token = "0x60003BD")]
	[Address(RVA = "0x4A9EF40", Offset = "0x4A9EF40", VA = "0x4A9EF40")]
	private Gradient GetColorGradientCopy()
	{
		return null;
	}

	[Token(Token = "0x60003BE")]
	[Address(RVA = "0x4A9F080", Offset = "0x4A9F080", VA = "0x4A9F080")]
	private void SetColorGradient([UnityEngine.Bindings.NotNull("ArgumentNullException")] Gradient curve)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60003BF")]
	[Address(RVA = "0x4A9DC30", Offset = "0x4A9DC30", VA = "0x4A9DC30")]
	private static extern float get_startWidth_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60003C0")]
	[Address(RVA = "0x4A9DC60", Offset = "0x4A9DC60", VA = "0x4A9DC60")]
	private static extern void set_startWidth_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60003C1")]
	[Address(RVA = "0x4A9DD50", Offset = "0x4A9DD50", VA = "0x4A9DD50")]
	private static extern float get_endWidth_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60003C2")]
	[Address(RVA = "0x4A9DD80", Offset = "0x4A9DD80", VA = "0x4A9DD80")]
	private static extern void set_endWidth_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60003C3")]
	[Address(RVA = "0x4A9DE70", Offset = "0x4A9DE70", VA = "0x4A9DE70")]
	private static extern float get_widthMultiplier_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60003C4")]
	[Address(RVA = "0x4A9DF50", Offset = "0x4A9DF50", VA = "0x4A9DF50")]
	private static extern void set_widthMultiplier_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60003C5")]
	[Address(RVA = "0x4A9E040", Offset = "0x4A9E040", VA = "0x4A9E040")]
	private static extern int get_numCornerVertices_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60003C6")]
	[Address(RVA = "0x4A9E110", Offset = "0x4A9E110", VA = "0x4A9E110")]
	private static extern void set_numCornerVertices_Injected(IntPtr _unity_self, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60003C7")]
	[Address(RVA = "0x4A9E1F0", Offset = "0x4A9E1F0", VA = "0x4A9E1F0")]
	private static extern int get_numCapVertices_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60003C8")]
	[Address(RVA = "0x4A9E2C0", Offset = "0x4A9E2C0", VA = "0x4A9E2C0")]
	private static extern void set_numCapVertices_Injected(IntPtr _unity_self, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60003C9")]
	[Address(RVA = "0x4A9E3A0", Offset = "0x4A9E3A0", VA = "0x4A9E3A0")]
	private static extern bool get_useWorldSpace_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60003CA")]
	[Address(RVA = "0x4A9E470", Offset = "0x4A9E470", VA = "0x4A9E470")]
	private static extern void set_useWorldSpace_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60003CB")]
	[Address(RVA = "0x4A9E550", Offset = "0x4A9E550", VA = "0x4A9E550")]
	private static extern bool get_loop_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60003CC")]
	[Address(RVA = "0x4A9E620", Offset = "0x4A9E620", VA = "0x4A9E620")]
	private static extern void set_loop_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60003CD")]
	[Address(RVA = "0x4A9E660", Offset = "0x4A9E660", VA = "0x4A9E660")]
	private static extern void set_startColor_Injected(IntPtr _unity_self, [In] ref Color value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60003CE")]
	[Address(RVA = "0x4A9E6A0", Offset = "0x4A9E6A0", VA = "0x4A9E6A0")]
	private static extern void set_endColor_Injected(IntPtr _unity_self, [In] ref Color value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60003CF")]
	[Address(RVA = "0x4A9E780", Offset = "0x4A9E780", VA = "0x4A9E780")]
	private static extern int get_positionCount_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60003D0")]
	[Address(RVA = "0x4A9E7B0", Offset = "0x4A9E7B0", VA = "0x4A9E7B0")]
	private static extern void set_positionCount_Injected(IntPtr _unity_self, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60003D1")]
	[Address(RVA = "0x4A9E8B0", Offset = "0x4A9E8B0", VA = "0x4A9E8B0")]
	private static extern void SetPosition_Injected(IntPtr _unity_self, int index, [In] ref Vector3 position);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60003D2")]
	[Address(RVA = "0x4A9E9C0", Offset = "0x4A9E9C0", VA = "0x4A9E9C0")]
	private static extern void GetPosition_Injected(IntPtr _unity_self, int index, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60003D3")]
	[Address(RVA = "0x4A9EAA0", Offset = "0x4A9EAA0", VA = "0x4A9EAA0")]
	private static extern LineTextureMode get_textureMode_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60003D4")]
	[Address(RVA = "0x4A9EB70", Offset = "0x4A9EB70", VA = "0x4A9EB70")]
	private static extern void set_textureMode_Injected(IntPtr _unity_self, LineTextureMode value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60003D5")]
	[Address(RVA = "0x4A9EC50", Offset = "0x4A9EC50", VA = "0x4A9EC50")]
	private static extern LineAlignment get_alignment_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60003D6")]
	[Address(RVA = "0x4A9ED20", Offset = "0x4A9ED20", VA = "0x4A9ED20")]
	private static extern void set_alignment_Injected(IntPtr _unity_self, LineAlignment value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60003D7")]
	[Address(RVA = "0x4A9F120", Offset = "0x4A9F120", VA = "0x4A9F120")]
	private static extern AnimationCurve GetWidthCurveCopy_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60003D8")]
	[Address(RVA = "0x4A9F150", Offset = "0x4A9F150", VA = "0x4A9F150")]
	private static extern Gradient GetColorGradientCopy_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60003D9")]
	[Address(RVA = "0x4A9F180", Offset = "0x4A9F180", VA = "0x4A9F180")]
	private static extern void SetColorGradient_Injected(IntPtr _unity_self, Gradient curve);
}
