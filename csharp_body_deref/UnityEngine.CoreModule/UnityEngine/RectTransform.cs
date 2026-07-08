using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x20001A2")]
[UnityEngine.NativeClass("UI::RectTransform")]
[UnityEngine.Bindings.NativeHeader("Runtime/Transform/RectTransform.h")]
public sealed class RectTransform : Transform
{
	[Token(Token = "0x20001A3")]
	public enum Edge
	{
		[Token(Token = "0x400060C")]
		Left,
		[Token(Token = "0x400060D")]
		Right,
		[Token(Token = "0x400060E")]
		Top,
		[Token(Token = "0x400060F")]
		Bottom
	}

	[Token(Token = "0x20001A4")]
	public enum Axis
	{
		[Token(Token = "0x4000611")]
		Horizontal,
		[Token(Token = "0x4000612")]
		Vertical
	}

	[Token(Token = "0x20001A5")]
	public delegate void ReapplyDrivenProperties(RectTransform driven);

	[Token(Token = "0x17000211")]
	public Rect rect
	{
		[Token(Token = "0x6000BEA")]
		[Address(RVA = "0x4ADF800", Offset = "0x4ADF800", VA = "0x4ADF800")]
		get
		{
			return default(Rect);
		}
	}

	[Token(Token = "0x17000212")]
	public Vector2 anchorMin
	{
		[Token(Token = "0x6000BEB")]
		[Address(RVA = "0x4ADF8E0", Offset = "0x4ADF8E0", VA = "0x4ADF8E0")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000BEC")]
		[Address(RVA = "0x4ADF9C0", Offset = "0x4ADF9C0", VA = "0x4ADF9C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000213")]
	public Vector2 anchorMax
	{
		[Token(Token = "0x6000BED")]
		[Address(RVA = "0x4ADFA90", Offset = "0x4ADFA90", VA = "0x4ADFA90")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000BEE")]
		[Address(RVA = "0x4ADFB70", Offset = "0x4ADFB70", VA = "0x4ADFB70")]
		set
		{
		}
	}

	[Token(Token = "0x17000214")]
	public Vector2 anchoredPosition
	{
		[Token(Token = "0x6000BEF")]
		[Address(RVA = "0x4ADFC40", Offset = "0x4ADFC40", VA = "0x4ADFC40")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000BF0")]
		[Address(RVA = "0x4ADFD20", Offset = "0x4ADFD20", VA = "0x4ADFD20")]
		set
		{
		}
	}

	[Token(Token = "0x17000215")]
	public Vector2 sizeDelta
	{
		[Token(Token = "0x6000BF1")]
		[Address(RVA = "0x4ADFDF0", Offset = "0x4ADFDF0", VA = "0x4ADFDF0")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000BF2")]
		[Address(RVA = "0x4ADFED0", Offset = "0x4ADFED0", VA = "0x4ADFED0")]
		set
		{
		}
	}

	[Token(Token = "0x17000216")]
	public Vector2 pivot
	{
		[Token(Token = "0x6000BF3")]
		[Address(RVA = "0x4ADFFA0", Offset = "0x4ADFFA0", VA = "0x4ADFFA0")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000BF4")]
		[Address(RVA = "0x4AE0080", Offset = "0x4AE0080", VA = "0x4AE0080")]
		set
		{
		}
	}

	[Token(Token = "0x17000217")]
	public Vector3 anchoredPosition3D
	{
		[Token(Token = "0x6000BF5")]
		[Address(RVA = "0x4AE0150", Offset = "0x4AE0150", VA = "0x4AE0150")]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x6000BF6")]
		[Address(RVA = "0x4AE0230", Offset = "0x4AE0230", VA = "0x4AE0230")]
		set
		{
		}
	}

	[Token(Token = "0x17000218")]
	public Vector2 offsetMin
	{
		[Token(Token = "0x6000BF7")]
		[Address(RVA = "0x4AE0400", Offset = "0x4AE0400", VA = "0x4AE0400")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000BF8")]
		[Address(RVA = "0x4AE0440", Offset = "0x4AE0440", VA = "0x4AE0440")]
		set
		{
		}
	}

	[Token(Token = "0x17000219")]
	public Vector2 offsetMax
	{
		[Token(Token = "0x6000BF9")]
		[Address(RVA = "0x4AE0610", Offset = "0x4AE0610", VA = "0x4AE0610")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000BFA")]
		[Address(RVA = "0x4AE0690", Offset = "0x4AE0690", VA = "0x4AE0690")]
		set
		{
		}
	}

	[Token(Token = "0x14000003")]
	public static event ReapplyDrivenProperties reapplyDrivenProperties
	{
		[Token(Token = "0x6000BE8")]
		[Address(RVA = "0x4ADF6C0", Offset = "0x4ADF6C0", VA = "0x4ADF6C0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000BE9")]
		[Address(RVA = "0x4ADF760", Offset = "0x4ADF760", VA = "0x4ADF760")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000BFB")]
	[Address(RVA = "0x4AE0860", Offset = "0x4AE0860", VA = "0x4AE0860")]
	public void GetLocalCorners(Vector3[] fourCornersArray)
	{
	}

	[Token(Token = "0x6000BFC")]
	[Address(RVA = "0x4AE0950", Offset = "0x4AE0950", VA = "0x4AE0950")]
	public void GetWorldCorners(Vector3[] fourCornersArray)
	{
	}

	[Token(Token = "0x6000BFD")]
	[Address(RVA = "0x4AE0CE0", Offset = "0x4AE0CE0", VA = "0x4AE0CE0")]
	public void SetInsetAndSizeFromParentEdge(Edge edge, float inset, float size)
	{
	}

	[Token(Token = "0x6000BFE")]
	[Address(RVA = "0x4AE1050", Offset = "0x4AE1050", VA = "0x4AE1050")]
	public void SetSizeWithCurrentAnchors(Axis axis, float size)
	{
	}

	[Token(Token = "0x6000BFF")]
	[Address(RVA = "0x4AE13B0", Offset = "0x4AE13B0", VA = "0x4AE13B0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void SendReapplyDrivenProperties(RectTransform driven)
	{
	}

	[Token(Token = "0x6000C00")]
	[Address(RVA = "0x4AE11B0", Offset = "0x4AE11B0", VA = "0x4AE11B0")]
	private Vector2 GetParentSize()
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C01")]
	[Address(RVA = "0x4ADF8A0", Offset = "0x4ADF8A0", VA = "0x4ADF8A0")]
	private static extern void get_rect_Injected(IntPtr _unity_self, out Rect ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C02")]
	[Address(RVA = "0x4ADF980", Offset = "0x4ADF980", VA = "0x4ADF980")]
	private static extern void get_anchorMin_Injected(IntPtr _unity_self, out Vector2 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C03")]
	[Address(RVA = "0x4ADFA50", Offset = "0x4ADFA50", VA = "0x4ADFA50")]
	private static extern void set_anchorMin_Injected(IntPtr _unity_self, [In] ref Vector2 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C04")]
	[Address(RVA = "0x4ADFB30", Offset = "0x4ADFB30", VA = "0x4ADFB30")]
	private static extern void get_anchorMax_Injected(IntPtr _unity_self, out Vector2 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C05")]
	[Address(RVA = "0x4ADFC00", Offset = "0x4ADFC00", VA = "0x4ADFC00")]
	private static extern void set_anchorMax_Injected(IntPtr _unity_self, [In] ref Vector2 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C06")]
	[Address(RVA = "0x4ADFCE0", Offset = "0x4ADFCE0", VA = "0x4ADFCE0")]
	private static extern void get_anchoredPosition_Injected(IntPtr _unity_self, out Vector2 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C07")]
	[Address(RVA = "0x4ADFDB0", Offset = "0x4ADFDB0", VA = "0x4ADFDB0")]
	private static extern void set_anchoredPosition_Injected(IntPtr _unity_self, [In] ref Vector2 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C08")]
	[Address(RVA = "0x4ADFE90", Offset = "0x4ADFE90", VA = "0x4ADFE90")]
	private static extern void get_sizeDelta_Injected(IntPtr _unity_self, out Vector2 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C09")]
	[Address(RVA = "0x4ADFF60", Offset = "0x4ADFF60", VA = "0x4ADFF60")]
	private static extern void set_sizeDelta_Injected(IntPtr _unity_self, [In] ref Vector2 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C0A")]
	[Address(RVA = "0x4AE0040", Offset = "0x4AE0040", VA = "0x4AE0040")]
	private static extern void get_pivot_Injected(IntPtr _unity_self, out Vector2 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C0B")]
	[Address(RVA = "0x4AE0110", Offset = "0x4AE0110", VA = "0x4AE0110")]
	private static extern void set_pivot_Injected(IntPtr _unity_self, [In] ref Vector2 value);
}
