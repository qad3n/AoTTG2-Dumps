// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.RectTransform
// Update status: CHANGED in this game update
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

[Token(Token = "0x20001E5")]
[UIModuleHelpURL("class-RectTransform")]
[UnityEngine.Bindings.NativeHeader("Runtime/Transform/RectTransform.h")]
[UnityEngine.NativeClass("UI::RectTransform")]
public sealed class RectTransform : Transform
{
	[Token(Token = "0x20001E6")]
	public enum Edge
	{
		[Token(Token = "0x40006B0")]
		Left,
		[Token(Token = "0x40006B1")]
		Right,
		[Token(Token = "0x40006B2")]
		Top,
		[Token(Token = "0x40006B3")]
		Bottom
	}

	[Token(Token = "0x20001E7")]
	public enum Axis
	{
		[Token(Token = "0x40006B5")]
		Horizontal,
		[Token(Token = "0x40006B6")]
		Vertical
	}

	[Token(Token = "0x20001E8")]
	public delegate void ReapplyDrivenProperties(RectTransform driven);

	[Token(Token = "0x40006AE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private static ReapplyDrivenProperties m_reapplyDrivenProperties;

	[Token(Token = "0x17000296")]
	public Rect rect
	{
		[Token(Token = "0x6000FD1")]
		[Address(RVA = "0x2F53D20", Offset = "0x2F52320", VA = "0x182F53D20")]
		get
		{
			return default(Rect);
		}
	}

	[Token(Token = "0x17000297")]
	public Vector2 anchorMin
	{
		[Token(Token = "0x6000FD2")]
		[Address(RVA = "0x2F535D0", Offset = "0x2F51BD0", VA = "0x182F535D0")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000FD3")]
		[Address(RVA = "0x2F54080", Offset = "0x2F52680", VA = "0x182F54080")]
		set
		{
		}
	}

	[Token(Token = "0x17000298")]
	public Vector2 anchorMax
	{
		[Token(Token = "0x6000FD4")]
		[Address(RVA = "0x2F534F0", Offset = "0x2F51AF0", VA = "0x182F534F0")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000FD5")]
		[Address(RVA = "0x2F53FA0", Offset = "0x2F525A0", VA = "0x182F53FA0")]
		set
		{
		}
	}

	[Token(Token = "0x17000299")]
	public Vector2 anchoredPosition
	{
		[Token(Token = "0x6000FD6")]
		[Address(RVA = "0x2F537F0", Offset = "0x2F51DF0", VA = "0x182F537F0")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000FD7")]
		[Address(RVA = "0x2F542E0", Offset = "0x2F528E0", VA = "0x182F542E0")]
		set
		{
		}
	}

	[Token(Token = "0x1700029A")]
	public Vector2 sizeDelta
	{
		[Token(Token = "0x6000FD8")]
		[Address(RVA = "0x2F53E00", Offset = "0x2F52400", VA = "0x182F53E00")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000FD9")]
		[Address(RVA = "0x2F54DD0", Offset = "0x2F533D0", VA = "0x182F54DD0")]
		set
		{
		}
	}

	[Token(Token = "0x1700029B")]
	public Vector2 pivot
	{
		[Token(Token = "0x6000FDA")]
		[Address(RVA = "0x2F53C40", Offset = "0x2F52240", VA = "0x182F53C40")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000FDB")]
		[Address(RVA = "0x2F54C10", Offset = "0x2F53210", VA = "0x182F54C10")]
		set
		{
		}
	}

	[Token(Token = "0x1700029C")]
	public Vector3 anchoredPosition3D
	{
		[Token(Token = "0x6000FDC")]
		[Address(RVA = "0x2F53660", Offset = "0x2F51C60", VA = "0x182F53660")]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x6000FDD")]
		[Address(RVA = "0x2F54110", Offset = "0x2F52710", VA = "0x182F54110")]
		set
		{
		}
	}

	[Token(Token = "0x1700029D")]
	public Vector2 offsetMin
	{
		[Token(Token = "0x6000FDE")]
		[Address(RVA = "0x2F53A50", Offset = "0x2F52050", VA = "0x182F53A50")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000FDF")]
		[Address(RVA = "0x2F54790", Offset = "0x2F52D90", VA = "0x182F54790")]
		set
		{
		}
	}

	[Token(Token = "0x1700029E")]
	public Vector2 offsetMax
	{
		[Token(Token = "0x6000FE0")]
		[Address(RVA = "0x2F53880", Offset = "0x2F51E80", VA = "0x182F53880")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000FE1")]
		[Address(RVA = "0x2F54370", Offset = "0x2F52970", VA = "0x182F54370")]
		set
		{
		}
	}

	[Token(Token = "0x1700029F")]
	public bool sendChildDimensionsChange
	{
		[Token(Token = "0x6000FE2")]
		[Address(RVA = "0x2F54CF0", Offset = "0x2F532F0", VA = "0x182F54CF0")]
		set
		{
		}
	}

	[Token(Token = "0x14000006")]
	public static event ReapplyDrivenProperties reapplyDrivenProperties
	{
		[Token(Token = "0x6000FCF")]
		[Address(RVA = "0x2F533E0", Offset = "0x2F519E0", VA = "0x182F533E0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000FD0")]
		[Address(RVA = "0x2F53E90", Offset = "0x2F52490", VA = "0x182F53E90")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000FE3")]
	[Address(RVA = "0x2F52060", Offset = "0x2F50660", VA = "0x182F52060")]
	public void GetLocalCorners(Vector3[] fourCornersArray)
	{
	}

	[Token(Token = "0x6000FE4")]
	[Address(RVA = "0x2F52430", Offset = "0x2F50A30", VA = "0x182F52430")]
	public void GetWorldCorners(Vector3[] fourCornersArray)
	{
	}

	[Token(Token = "0x6000FE5")]
	[Address(RVA = "0x2F52920", Offset = "0x2F50F20", VA = "0x182F52920")]
	public void SetInsetAndSizeFromParentEdge(Edge edge, float inset, float size)
	{
	}

	[Token(Token = "0x6000FE6")]
	[Address(RVA = "0x2F53040", Offset = "0x2F51640", VA = "0x182F53040")]
	public void SetSizeWithCurrentAnchors(Axis axis, float size)
	{
	}

	[Token(Token = "0x6000FE7")]
	[Address(RVA = "0x2F528C0", Offset = "0x2F50EC0", VA = "0x182F528C0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void SendReapplyDrivenProperties(RectTransform driven)
	{
	}

	[Token(Token = "0x6000FE8")]
	[Address(RVA = "0x2F52240", Offset = "0x2F50840", VA = "0x182F52240")]
	private Vector2 GetParentSize()
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000FE9")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public RectTransform()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FEA")]
	[Address(RVA = "0x2F53CD0", Offset = "0x2F522D0", VA = "0x182F53CD0")]
	private static extern void get_rect_Injected(IntPtr _unity_self, out Rect ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FEB")]
	[Address(RVA = "0x2F53580", Offset = "0x2F51B80", VA = "0x182F53580")]
	private static extern void get_anchorMin_Injected(IntPtr _unity_self, out Vector2 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FEC")]
	[Address(RVA = "0x2F54030", Offset = "0x2F52630", VA = "0x182F54030")]
	private static extern void set_anchorMin_Injected(IntPtr _unity_self, [In] ref Vector2 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FED")]
	[Address(RVA = "0x2F534A0", Offset = "0x2F51AA0", VA = "0x182F534A0")]
	private static extern void get_anchorMax_Injected(IntPtr _unity_self, out Vector2 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FEE")]
	[Address(RVA = "0x2F53F50", Offset = "0x2F52550", VA = "0x182F53F50")]
	private static extern void set_anchorMax_Injected(IntPtr _unity_self, [In] ref Vector2 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FEF")]
	[Address(RVA = "0x2F537A0", Offset = "0x2F51DA0", VA = "0x182F537A0")]
	private static extern void get_anchoredPosition_Injected(IntPtr _unity_self, out Vector2 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FF0")]
	[Address(RVA = "0x2F54290", Offset = "0x2F52890", VA = "0x182F54290")]
	private static extern void set_anchoredPosition_Injected(IntPtr _unity_self, [In] ref Vector2 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FF1")]
	[Address(RVA = "0x2F53DB0", Offset = "0x2F523B0", VA = "0x182F53DB0")]
	private static extern void get_sizeDelta_Injected(IntPtr _unity_self, out Vector2 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FF2")]
	[Address(RVA = "0x2F54D80", Offset = "0x2F53380", VA = "0x182F54D80")]
	private static extern void set_sizeDelta_Injected(IntPtr _unity_self, [In] ref Vector2 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FF3")]
	[Address(RVA = "0x2F53BF0", Offset = "0x2F521F0", VA = "0x182F53BF0")]
	private static extern void get_pivot_Injected(IntPtr _unity_self, out Vector2 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FF4")]
	[Address(RVA = "0x2F54BC0", Offset = "0x2F531C0", VA = "0x182F54BC0")]
	private static extern void set_pivot_Injected(IntPtr _unity_self, [In] ref Vector2 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FF5")]
	[Address(RVA = "0x2F54CA0", Offset = "0x2F532A0", VA = "0x182F54CA0")]
	private static extern void set_sendChildDimensionsChange_Injected(IntPtr _unity_self, bool value);
}
