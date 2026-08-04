// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.RectTransform
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x20001A5")]
[UnityEngine.NativeClass("UI::RectTransform")]
[UnityEngine.Bindings.NativeHeader("Runtime/Transform/RectTransform.h")]
public sealed class RectTransform : Transform
{
	[Token(Token = "0x20001A6")]
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

	[Token(Token = "0x20001A7")]
	public enum Axis
	{
		[Token(Token = "0x4000611")]
		Horizontal,
		[Token(Token = "0x4000612")]
		Vertical
	}

	[Token(Token = "0x20001A8")]
	public delegate void ReapplyDrivenProperties(RectTransform driven);

	[Token(Token = "0x17000212")]
	public Rect rect
	{
		[Token(Token = "0x6000BEC")]
		[Address(RVA = "0x4E07130", Offset = "0x4E07130", VA = "0x4E07130")]
		get
		{
			return default(Rect);
		}
	}

	[Token(Token = "0x17000213")]
	public Vector2 anchorMin
	{
		[Token(Token = "0x6000BED")]
		[Address(RVA = "0x4E07210", Offset = "0x4E07210", VA = "0x4E07210")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000BEE")]
		[Address(RVA = "0x4E072F0", Offset = "0x4E072F0", VA = "0x4E072F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000214")]
	public Vector2 anchorMax
	{
		[Token(Token = "0x6000BEF")]
		[Address(RVA = "0x4E073C0", Offset = "0x4E073C0", VA = "0x4E073C0")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000BF0")]
		[Address(RVA = "0x4E074A0", Offset = "0x4E074A0", VA = "0x4E074A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000215")]
	public Vector2 anchoredPosition
	{
		[Token(Token = "0x6000BF1")]
		[Address(RVA = "0x4E07570", Offset = "0x4E07570", VA = "0x4E07570")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000BF2")]
		[Address(RVA = "0x4E07650", Offset = "0x4E07650", VA = "0x4E07650")]
		set
		{
		}
	}

	[Token(Token = "0x17000216")]
	public Vector2 sizeDelta
	{
		[Token(Token = "0x6000BF3")]
		[Address(RVA = "0x4E07720", Offset = "0x4E07720", VA = "0x4E07720")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000BF4")]
		[Address(RVA = "0x4E07800", Offset = "0x4E07800", VA = "0x4E07800")]
		set
		{
		}
	}

	[Token(Token = "0x17000217")]
	public Vector2 pivot
	{
		[Token(Token = "0x6000BF5")]
		[Address(RVA = "0x4E078D0", Offset = "0x4E078D0", VA = "0x4E078D0")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000BF6")]
		[Address(RVA = "0x4E079B0", Offset = "0x4E079B0", VA = "0x4E079B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000218")]
	public Vector3 anchoredPosition3D
	{
		[Token(Token = "0x6000BF7")]
		[Address(RVA = "0x4E07A80", Offset = "0x4E07A80", VA = "0x4E07A80")]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x6000BF8")]
		[Address(RVA = "0x4E07B60", Offset = "0x4E07B60", VA = "0x4E07B60")]
		set
		{
		}
	}

	[Token(Token = "0x17000219")]
	public Vector2 offsetMin
	{
		[Token(Token = "0x6000BF9")]
		[Address(RVA = "0x4E07D30", Offset = "0x4E07D30", VA = "0x4E07D30")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000BFA")]
		[Address(RVA = "0x4E07D70", Offset = "0x4E07D70", VA = "0x4E07D70")]
		set
		{
		}
	}

	[Token(Token = "0x1700021A")]
	public Vector2 offsetMax
	{
		[Token(Token = "0x6000BFB")]
		[Address(RVA = "0x4E07F40", Offset = "0x4E07F40", VA = "0x4E07F40")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000BFC")]
		[Address(RVA = "0x4E07FC0", Offset = "0x4E07FC0", VA = "0x4E07FC0")]
		set
		{
		}
	}

	[Token(Token = "0x14000003")]
	public static event ReapplyDrivenProperties reapplyDrivenProperties
	{
		[Token(Token = "0x6000BEA")]
		[Address(RVA = "0x4E06FF0", Offset = "0x4E06FF0", VA = "0x4E06FF0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000BEB")]
		[Address(RVA = "0x4E07090", Offset = "0x4E07090", VA = "0x4E07090")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000BFD")]
	[Address(RVA = "0x4E08190", Offset = "0x4E08190", VA = "0x4E08190")]
	public void GetLocalCorners(Vector3[] fourCornersArray)
	{
	}

	[Token(Token = "0x6000BFE")]
	[Address(RVA = "0x4E08280", Offset = "0x4E08280", VA = "0x4E08280")]
	public void GetWorldCorners(Vector3[] fourCornersArray)
	{
	}

	[Token(Token = "0x6000BFF")]
	[Address(RVA = "0x4E08610", Offset = "0x4E08610", VA = "0x4E08610")]
	public void SetInsetAndSizeFromParentEdge(Edge edge, float inset, float size)
	{
	}

	[Token(Token = "0x6000C00")]
	[Address(RVA = "0x4E08980", Offset = "0x4E08980", VA = "0x4E08980")]
	public void SetSizeWithCurrentAnchors(Axis axis, float size)
	{
	}

	[Token(Token = "0x6000C01")]
	[Address(RVA = "0x4E08CE0", Offset = "0x4E08CE0", VA = "0x4E08CE0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void SendReapplyDrivenProperties(RectTransform driven)
	{
	}

	[Token(Token = "0x6000C02")]
	[Address(RVA = "0x4E08AE0", Offset = "0x4E08AE0", VA = "0x4E08AE0")]
	private Vector2 GetParentSize()
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C03")]
	[Address(RVA = "0x4E071D0", Offset = "0x4E071D0", VA = "0x4E071D0")]
	private static extern void get_rect_Injected(IntPtr _unity_self, out Rect ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C04")]
	[Address(RVA = "0x4E072B0", Offset = "0x4E072B0", VA = "0x4E072B0")]
	private static extern void get_anchorMin_Injected(IntPtr _unity_self, out Vector2 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C05")]
	[Address(RVA = "0x4E07380", Offset = "0x4E07380", VA = "0x4E07380")]
	private static extern void set_anchorMin_Injected(IntPtr _unity_self, [In] ref Vector2 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C06")]
	[Address(RVA = "0x4E07460", Offset = "0x4E07460", VA = "0x4E07460")]
	private static extern void get_anchorMax_Injected(IntPtr _unity_self, out Vector2 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C07")]
	[Address(RVA = "0x4E07530", Offset = "0x4E07530", VA = "0x4E07530")]
	private static extern void set_anchorMax_Injected(IntPtr _unity_self, [In] ref Vector2 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C08")]
	[Address(RVA = "0x4E07610", Offset = "0x4E07610", VA = "0x4E07610")]
	private static extern void get_anchoredPosition_Injected(IntPtr _unity_self, out Vector2 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C09")]
	[Address(RVA = "0x4E076E0", Offset = "0x4E076E0", VA = "0x4E076E0")]
	private static extern void set_anchoredPosition_Injected(IntPtr _unity_self, [In] ref Vector2 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C0A")]
	[Address(RVA = "0x4E077C0", Offset = "0x4E077C0", VA = "0x4E077C0")]
	private static extern void get_sizeDelta_Injected(IntPtr _unity_self, out Vector2 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C0B")]
	[Address(RVA = "0x4E07890", Offset = "0x4E07890", VA = "0x4E07890")]
	private static extern void set_sizeDelta_Injected(IntPtr _unity_self, [In] ref Vector2 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C0C")]
	[Address(RVA = "0x4E07970", Offset = "0x4E07970", VA = "0x4E07970")]
	private static extern void get_pivot_Injected(IntPtr _unity_self, out Vector2 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C0D")]
	[Address(RVA = "0x4E07A40", Offset = "0x4E07A40", VA = "0x4E07A40")]
	private static extern void set_pivot_Injected(IntPtr _unity_self, [In] ref Vector2 value);
}
