// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.RectTransform
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x20001E6")]
[UnityEngine.NativeClass("UI::RectTransform")]
[UnityEngine.Bindings.NativeHeader("Runtime/Transform/RectTransform.h")]
[UIModuleHelpURL("class-RectTransform")]
public sealed class RectTransform : Transform
{
	[Token(Token = "0x20001E7")]
	public enum Edge
	{
		[Token(Token = "0x40006B5")]
		Left,
		[Token(Token = "0x40006B6")]
		Right,
		[Token(Token = "0x40006B7")]
		Top,
		[Token(Token = "0x40006B8")]
		Bottom
	}

	[Token(Token = "0x20001E8")]
	public enum Axis
	{
		[Token(Token = "0x40006BA")]
		Horizontal,
		[Token(Token = "0x40006BB")]
		Vertical
	}

	[Token(Token = "0x20001E9")]
	public delegate void ReapplyDrivenProperties(RectTransform driven);

	[Token(Token = "0x40006B3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private static ReapplyDrivenProperties m_reapplyDrivenProperties;

	[Token(Token = "0x1700029D")]
	public Rect rect
	{
		[Token(Token = "0x6000FE7")]
		[Address(RVA = "0x6929D40", Offset = "0x6928D40", VA = "0x6929D40")]
		get
		{
			return default(Rect);
		}
	}

	[Token(Token = "0x1700029E")]
	public Vector2 anchorMin
	{
		[Token(Token = "0x6000FE8")]
		[Address(RVA = "0x6929E10", Offset = "0x6928E10", VA = "0x6929E10")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000FE9")]
		[Address(RVA = "0x6929ED0", Offset = "0x6928ED0", VA = "0x6929ED0")]
		set
		{
		}
	}

	[Token(Token = "0x1700029F")]
	public Vector2 anchorMax
	{
		[Token(Token = "0x6000FEA")]
		[Address(RVA = "0x6929F90", Offset = "0x6928F90", VA = "0x6929F90")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000FEB")]
		[Address(RVA = "0x692A050", Offset = "0x6929050", VA = "0x692A050")]
		set
		{
		}
	}

	[Token(Token = "0x170002A0")]
	public Vector2 anchoredPosition
	{
		[Token(Token = "0x6000FEC")]
		[Address(RVA = "0x692A110", Offset = "0x6929110", VA = "0x692A110")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000FED")]
		[Address(RVA = "0x692A1D0", Offset = "0x69291D0", VA = "0x692A1D0")]
		set
		{
		}
	}

	[Token(Token = "0x170002A1")]
	public Vector2 sizeDelta
	{
		[Token(Token = "0x6000FEE")]
		[Address(RVA = "0x692A290", Offset = "0x6929290", VA = "0x692A290")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000FEF")]
		[Address(RVA = "0x692A350", Offset = "0x6929350", VA = "0x692A350")]
		set
		{
		}
	}

	[Token(Token = "0x170002A2")]
	public Vector2 pivot
	{
		[Token(Token = "0x6000FF0")]
		[Address(RVA = "0x692A410", Offset = "0x6929410", VA = "0x692A410")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000FF1")]
		[Address(RVA = "0x692A4D0", Offset = "0x69294D0", VA = "0x692A4D0")]
		set
		{
		}
	}

	[Token(Token = "0x170002A3")]
	public Vector3 anchoredPosition3D
	{
		[Token(Token = "0x6000FF2")]
		[Address(RVA = "0x692A590", Offset = "0x6929590", VA = "0x692A590")]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x6000FF3")]
		[Address(RVA = "0x692A720", Offset = "0x6929720", VA = "0x692A720")]
		set
		{
		}
	}

	[Token(Token = "0x170002A4")]
	public Vector2 offsetMin
	{
		[Token(Token = "0x6000FF4")]
		[Address(RVA = "0x692A8F0", Offset = "0x69298F0", VA = "0x692A8F0")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000FF5")]
		[Address(RVA = "0x692AA60", Offset = "0x6929A60", VA = "0x692AA60")]
		set
		{
		}
	}

	[Token(Token = "0x170002A5")]
	public Vector2 offsetMax
	{
		[Token(Token = "0x6000FF6")]
		[Address(RVA = "0x692AE10", Offset = "0x6929E10", VA = "0x692AE10")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000FF7")]
		[Address(RVA = "0x692AFB0", Offset = "0x6929FB0", VA = "0x692AFB0")]
		set
		{
		}
	}

	[Token(Token = "0x170002A6")]
	public bool sendChildDimensionsChange
	{
		[Token(Token = "0x6000FF8")]
		[Address(RVA = "0x692B360", Offset = "0x692A360", VA = "0x692B360")]
		set
		{
		}
	}

	[Token(Token = "0x14000006")]
	public static event ReapplyDrivenProperties reapplyDrivenProperties
	{
		[Token(Token = "0x6000FE5")]
		[Address(RVA = "0x6929C00", Offset = "0x6928C00", VA = "0x6929C00")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000FE6")]
		[Address(RVA = "0x6929CA0", Offset = "0x6928CA0", VA = "0x6929CA0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000FF9")]
	[Address(RVA = "0x692B410", Offset = "0x692A410", VA = "0x692B410")]
	public void GetLocalCorners(Vector3[] fourCornersArray)
	{
	}

	[Token(Token = "0x6000FFA")]
	[Address(RVA = "0x692B5B0", Offset = "0x692A5B0", VA = "0x692B5B0")]
	public void GetWorldCorners(Vector3[] fourCornersArray)
	{
	}

	[Token(Token = "0x6000FFB")]
	[Address(RVA = "0x692BA90", Offset = "0x692AA90", VA = "0x692BA90")]
	public void SetInsetAndSizeFromParentEdge(Edge edge, float inset, float size)
	{
	}

	[Token(Token = "0x6000FFC")]
	[Address(RVA = "0x692BF80", Offset = "0x692AF80", VA = "0x692BF80")]
	public void SetSizeWithCurrentAnchors(Axis axis, float size)
	{
	}

	[Token(Token = "0x6000FFD")]
	[Address(RVA = "0x692C390", Offset = "0x692B390", VA = "0x692C390")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void SendReapplyDrivenProperties(RectTransform driven)
	{
	}

	[Token(Token = "0x6000FFE")]
	[Address(RVA = "0x692C200", Offset = "0x692B200", VA = "0x692C200")]
	private Vector2 GetParentSize()
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000FFF")]
	[Address(RVA = "0x692C3F0", Offset = "0x692B3F0", VA = "0x692C3F0")]
	public RectTransform()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001000")]
	[Address(RVA = "0x6929DD0", Offset = "0x6928DD0", VA = "0x6929DD0")]
	private static extern void get_rect_Injected(IntPtr _unity_self, out Rect ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001001")]
	[Address(RVA = "0x6929E90", Offset = "0x6928E90", VA = "0x6929E90")]
	private static extern void get_anchorMin_Injected(IntPtr _unity_self, out Vector2 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001002")]
	[Address(RVA = "0x6929F50", Offset = "0x6928F50", VA = "0x6929F50")]
	private static extern void set_anchorMin_Injected(IntPtr _unity_self, [In] ref Vector2 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001003")]
	[Address(RVA = "0x692A010", Offset = "0x6929010", VA = "0x692A010")]
	private static extern void get_anchorMax_Injected(IntPtr _unity_self, out Vector2 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001004")]
	[Address(RVA = "0x692A0D0", Offset = "0x69290D0", VA = "0x692A0D0")]
	private static extern void set_anchorMax_Injected(IntPtr _unity_self, [In] ref Vector2 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001005")]
	[Address(RVA = "0x692A190", Offset = "0x6929190", VA = "0x692A190")]
	private static extern void get_anchoredPosition_Injected(IntPtr _unity_self, out Vector2 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001006")]
	[Address(RVA = "0x692A250", Offset = "0x6929250", VA = "0x692A250")]
	private static extern void set_anchoredPosition_Injected(IntPtr _unity_self, [In] ref Vector2 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001007")]
	[Address(RVA = "0x692A310", Offset = "0x6929310", VA = "0x692A310")]
	private static extern void get_sizeDelta_Injected(IntPtr _unity_self, out Vector2 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001008")]
	[Address(RVA = "0x692A3D0", Offset = "0x69293D0", VA = "0x692A3D0")]
	private static extern void set_sizeDelta_Injected(IntPtr _unity_self, [In] ref Vector2 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001009")]
	[Address(RVA = "0x692A490", Offset = "0x6929490", VA = "0x692A490")]
	private static extern void get_pivot_Injected(IntPtr _unity_self, out Vector2 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600100A")]
	[Address(RVA = "0x692A550", Offset = "0x6929550", VA = "0x692A550")]
	private static extern void set_pivot_Injected(IntPtr _unity_self, [In] ref Vector2 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600100B")]
	[Address(RVA = "0x692B3D0", Offset = "0x692A3D0", VA = "0x692B3D0")]
	private static extern void set_sendChildDimensionsChange_Injected(IntPtr _unity_self, bool value);
}
