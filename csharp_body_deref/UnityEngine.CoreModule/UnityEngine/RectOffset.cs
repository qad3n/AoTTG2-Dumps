// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.RectOffset
// Update status: CHANGED in this game update
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
[Token(Token = "0x20000BE")]
[UnityEngine.Scripting.UsedByNativeCode]
[UnityEngine.Bindings.NativeHeader("Modules/IMGUI/GUIStyle.h")]
public class RectOffset : IFormattable
{
	[Token(Token = "0x20000BF")]
	internal static class BindingsMarshaller
	{
		[Token(Token = "0x600041B")]
		[Address(RVA = "0x87C0D0", Offset = "0x87A6D0", VA = "0x18087C0D0")]
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

	[Token(Token = "0x170000A9")]
	[UnityEngine.Bindings.NativeProperty("left", false, UnityEngine.Bindings.TargetType.Field)]
	public int left
	{
		[Token(Token = "0x6000405")]
		[Address(RVA = "0x2ED1330", Offset = "0x2ECF930", VA = "0x182ED1330")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000406")]
		[Address(RVA = "0x2ED1650", Offset = "0x2ECFC50", VA = "0x182ED1650")]
		set
		{
		}
	}

	[Token(Token = "0x170000AA")]
	[UnityEngine.Bindings.NativeProperty("right", false, UnityEngine.Bindings.TargetType.Field)]
	public int right
	{
		[Token(Token = "0x6000407")]
		[Address(RVA = "0x2ED13D0", Offset = "0x2ECF9D0", VA = "0x182ED13D0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000408")]
		[Address(RVA = "0x2ED16F0", Offset = "0x2ECFCF0", VA = "0x182ED16F0")]
		set
		{
		}
	}

	[Token(Token = "0x170000AB")]
	[UnityEngine.Bindings.NativeProperty("top", false, UnityEngine.Bindings.TargetType.Field)]
	public int top
	{
		[Token(Token = "0x6000409")]
		[Address(RVA = "0x2ED1470", Offset = "0x2ECFA70", VA = "0x182ED1470")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600040A")]
		[Address(RVA = "0x2ED1790", Offset = "0x2ECFD90", VA = "0x182ED1790")]
		set
		{
		}
	}

	[Token(Token = "0x170000AC")]
	[UnityEngine.Bindings.NativeProperty("bottom", false, UnityEngine.Bindings.TargetType.Field)]
	public int bottom
	{
		[Token(Token = "0x600040B")]
		[Address(RVA = "0x2ED11F0", Offset = "0x2ECF7F0", VA = "0x182ED11F0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600040C")]
		[Address(RVA = "0x2ED15B0", Offset = "0x2ECFBB0", VA = "0x182ED15B0")]
		set
		{
		}
	}

	[Token(Token = "0x170000AD")]
	public int horizontal
	{
		[Token(Token = "0x600040D")]
		[Address(RVA = "0x2ED1290", Offset = "0x2ECF890", VA = "0x182ED1290")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000AE")]
	public int vertical
	{
		[Token(Token = "0x600040E")]
		[Address(RVA = "0x2ED1510", Offset = "0x2ECFB10", VA = "0x182ED1510")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60003FC")]
	[Address(RVA = "0x2ED1170", Offset = "0x2ECF770", VA = "0x182ED1170")]
	public RectOffset()
	{
	}

	[Token(Token = "0x60003FD")]
	[Address(RVA = "0x2ED0FE0", Offset = "0x2ECF5E0", VA = "0x182ED0FE0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.IMGUIModule" })]
	internal RectOffset(object sourceStyle, IntPtr source)
	{
	}

	[Token(Token = "0x60003FE")]
	[Address(RVA = "0x2ED0A90", Offset = "0x2ECF090", VA = "0x182ED0A90", Slot = "1")]
	~RectOffset()
	{
	}

	[Token(Token = "0x60003FF")]
	[Address(RVA = "0x2ED1030", Offset = "0x2ECF630", VA = "0x182ED1030")]
	public RectOffset(int left, int right, int top, int bottom)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000400")]
	[Address(RVA = "0x2ED0C80", Offset = "0x2ECF280", VA = "0x182ED0C80", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000401")]
	[Address(RVA = "0x2ED0C90", Offset = "0x2ECF290", VA = "0x182ED0C90", Slot = "4")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}

	[Token(Token = "0x6000402")]
	[Address(RVA = "0x2ED0A40", Offset = "0x2ECF040", VA = "0x182ED0A40")]
	private void Destroy()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000403")]
	[Address(RVA = "0x2ED0B30", Offset = "0x2ECF130", VA = "0x182ED0B30")]
	[UnityEngine.ThreadAndSerializationSafe]
	private static extern IntPtr InternalCreate();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000404")]
	[Address(RVA = "0x2ED0B60", Offset = "0x2ECF160", VA = "0x182ED0B60")]
	[UnityEngine.ThreadAndSerializationSafe]
	private static extern void InternalDestroy(IntPtr ptr);

	[Token(Token = "0x600040F")]
	[Address(RVA = "0x2ED0C00", Offset = "0x2ECF200", VA = "0x182ED0C00")]
	public Rect Remove(Rect rect)
	{
		return default(Rect);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000410")]
	[Address(RVA = "0x2ED12F0", Offset = "0x2ECF8F0", VA = "0x182ED12F0")]
	private static extern int get_left_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000411")]
	[Address(RVA = "0x2ED1610", Offset = "0x2ECFC10", VA = "0x182ED1610")]
	private static extern void set_left_Injected(IntPtr _unity_self, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000412")]
	[Address(RVA = "0x2ED1390", Offset = "0x2ECF990", VA = "0x182ED1390")]
	private static extern int get_right_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000413")]
	[Address(RVA = "0x2ED16B0", Offset = "0x2ECFCB0", VA = "0x182ED16B0")]
	private static extern void set_right_Injected(IntPtr _unity_self, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000414")]
	[Address(RVA = "0x2ED1430", Offset = "0x2ECFA30", VA = "0x182ED1430")]
	private static extern int get_top_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000415")]
	[Address(RVA = "0x2ED1750", Offset = "0x2ECFD50", VA = "0x182ED1750")]
	private static extern void set_top_Injected(IntPtr _unity_self, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000416")]
	[Address(RVA = "0x2ED11B0", Offset = "0x2ECF7B0", VA = "0x182ED11B0")]
	private static extern int get_bottom_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000417")]
	[Address(RVA = "0x2ED1570", Offset = "0x2ECFB70", VA = "0x182ED1570")]
	private static extern void set_bottom_Injected(IntPtr _unity_self, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000418")]
	[Address(RVA = "0x2ED1250", Offset = "0x2ECF850", VA = "0x182ED1250")]
	private static extern int get_horizontal_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000419")]
	[Address(RVA = "0x2ED14D0", Offset = "0x2ECFAD0", VA = "0x182ED14D0")]
	private static extern int get_vertical_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600041A")]
	[Address(RVA = "0x2ED0BA0", Offset = "0x2ECF1A0", VA = "0x182ED0BA0")]
	private static extern void Remove_Injected(IntPtr _unity_self, [In] ref Rect rect, out Rect ret);
}
