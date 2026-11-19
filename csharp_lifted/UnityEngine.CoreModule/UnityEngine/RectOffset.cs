// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.RectOffset
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

[Serializable]
[StructLayout((LayoutKind)0)]
[Token(Token = "0x20000C0")]
[UnityEngine.Bindings.NativeHeader("Modules/IMGUI/GUIStyle.h")]
[UnityEngine.Scripting.UsedByNativeCode]
public class RectOffset : IFormattable
{
	[Token(Token = "0x20000C1")]
	internal static class BindingsMarshaller
	{
		[Token(Token = "0x6000421")]
		[Address(RVA = "0x68CDCF0", Offset = "0x68CCCF0", VA = "0x68CDCF0")]
		public static IntPtr ConvertToNative(RectOffset rectOffset)
		{
			return default(IntPtr);
		}
	}

	[NonSerialized]
	[Token(Token = "0x4000203")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.IMGUIModule" })]
	internal IntPtr m_Ptr;

	[Token(Token = "0x4000204")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly object m_SourceStyle;

	[Token(Token = "0x170000AA")]
	[UnityEngine.Bindings.NativeProperty("left", false, UnityEngine.Bindings.TargetType.Field)]
	public int left
	{
		[Token(Token = "0x600040B")]
		[Address(RVA = "0x68CD7A0", Offset = "0x68CC7A0", VA = "0x68CD7A0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600040C")]
		[Address(RVA = "0x68CD260", Offset = "0x68CC260", VA = "0x68CD260")]
		set
		{
		}
	}

	[Token(Token = "0x170000AB")]
	[UnityEngine.Bindings.NativeProperty("right", false, UnityEngine.Bindings.TargetType.Field)]
	public int right
	{
		[Token(Token = "0x600040D")]
		[Address(RVA = "0x68CD800", Offset = "0x68CC800", VA = "0x68CD800")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600040E")]
		[Address(RVA = "0x68CD2C0", Offset = "0x68CC2C0", VA = "0x68CD2C0")]
		set
		{
		}
	}

	[Token(Token = "0x170000AC")]
	[UnityEngine.Bindings.NativeProperty("top", false, UnityEngine.Bindings.TargetType.Field)]
	public int top
	{
		[Token(Token = "0x600040F")]
		[Address(RVA = "0x68CD860", Offset = "0x68CC860", VA = "0x68CD860")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000410")]
		[Address(RVA = "0x68CD320", Offset = "0x68CC320", VA = "0x68CD320")]
		set
		{
		}
	}

	[Token(Token = "0x170000AD")]
	[UnityEngine.Bindings.NativeProperty("bottom", false, UnityEngine.Bindings.TargetType.Field)]
	public int bottom
	{
		[Token(Token = "0x6000411")]
		[Address(RVA = "0x68CD8C0", Offset = "0x68CC8C0", VA = "0x68CD8C0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000412")]
		[Address(RVA = "0x68CD380", Offset = "0x68CC380", VA = "0x68CD380")]
		set
		{
		}
	}

	[Token(Token = "0x170000AE")]
	public int horizontal
	{
		[Token(Token = "0x6000413")]
		[Address(RVA = "0x68CDB10", Offset = "0x68CCB10", VA = "0x68CDB10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000AF")]
	public int vertical
	{
		[Token(Token = "0x6000414")]
		[Address(RVA = "0x68CDBA0", Offset = "0x68CCBA0", VA = "0x68CDBA0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000402")]
	[Address(RVA = "0x68CCEF0", Offset = "0x68CBEF0", VA = "0x68CCEF0")]
	public RectOffset()
	{
	}

	[Token(Token = "0x6000403")]
	[Address(RVA = "0x68CCF60", Offset = "0x68CBF60", VA = "0x68CCF60")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.IMGUIModule" })]
	internal RectOffset(object sourceStyle, IntPtr source)
	{
	}

	[Token(Token = "0x6000404")]
	[Address(RVA = "0x68CCF90", Offset = "0x68CBF90", VA = "0x68CCF90", Slot = "1")]
	~RectOffset()
	{
	}

	[Token(Token = "0x6000405")]
	[Address(RVA = "0x68CD0A0", Offset = "0x68CC0A0", VA = "0x68CD0A0")]
	public RectOffset(int left, int right, int top, int bottom)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000406")]
	[Address(RVA = "0x68CD3E0", Offset = "0x68CC3E0", VA = "0x68CD3E0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000407")]
	[Address(RVA = "0x68CD3F0", Offset = "0x68CC3F0", VA = "0x68CD3F0", Slot = "4")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}

	[Token(Token = "0x6000408")]
	[Address(RVA = "0x68CD050", Offset = "0x68CC050", VA = "0x68CD050")]
	private void Destroy()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000409")]
	[Address(RVA = "0x68CCF30", Offset = "0x68CBF30", VA = "0x68CCF30")]
	[UnityEngine.ThreadAndSerializationSafe]
	private static extern IntPtr InternalCreate();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600040A")]
	[Address(RVA = "0x68CD920", Offset = "0x68CC920", VA = "0x68CD920")]
	[UnityEngine.ThreadAndSerializationSafe]
	private static extern void InternalDestroy(IntPtr ptr);

	[Token(Token = "0x6000415")]
	[Address(RVA = "0x68CDC30", Offset = "0x68CCC30", VA = "0x68CDC30")]
	public Rect Remove(Rect rect)
	{
		return default(Rect);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000416")]
	[Address(RVA = "0x68CD950", Offset = "0x68CC950", VA = "0x68CD950")]
	private static extern int get_left_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000417")]
	[Address(RVA = "0x68CD980", Offset = "0x68CC980", VA = "0x68CD980")]
	private static extern void set_left_Injected(IntPtr _unity_self, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000418")]
	[Address(RVA = "0x68CD9C0", Offset = "0x68CC9C0", VA = "0x68CD9C0")]
	private static extern int get_right_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000419")]
	[Address(RVA = "0x68CD9F0", Offset = "0x68CC9F0", VA = "0x68CD9F0")]
	private static extern void set_right_Injected(IntPtr _unity_self, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600041A")]
	[Address(RVA = "0x68CDA30", Offset = "0x68CCA30", VA = "0x68CDA30")]
	private static extern int get_top_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600041B")]
	[Address(RVA = "0x68CDA60", Offset = "0x68CCA60", VA = "0x68CDA60")]
	private static extern void set_top_Injected(IntPtr _unity_self, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600041C")]
	[Address(RVA = "0x68CDAA0", Offset = "0x68CCAA0", VA = "0x68CDAA0")]
	private static extern int get_bottom_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600041D")]
	[Address(RVA = "0x68CDAD0", Offset = "0x68CCAD0", VA = "0x68CDAD0")]
	private static extern void set_bottom_Injected(IntPtr _unity_self, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600041E")]
	[Address(RVA = "0x68CDB70", Offset = "0x68CCB70", VA = "0x68CDB70")]
	private static extern int get_horizontal_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600041F")]
	[Address(RVA = "0x68CDC00", Offset = "0x68CCC00", VA = "0x68CDC00")]
	private static extern int get_vertical_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000420")]
	[Address(RVA = "0x68CDCB0", Offset = "0x68CCCB0", VA = "0x68CDCB0")]
	private static extern void Remove_Injected(IntPtr _unity_self, [In] ref Rect rect, out Rect ret);
}
