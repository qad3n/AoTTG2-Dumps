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
[Token(Token = "0x20000A0")]
[UnityEngine.Scripting.UsedByNativeCode]
[UnityEngine.Bindings.NativeHeader("Modules/IMGUI/GUIStyle.h")]
public class RectOffset : IFormattable
{
	[NonSerialized]
	[Token(Token = "0x40001AE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.IMGUIModule" })]
	internal IntPtr m_Ptr;

	[Token(Token = "0x40001AF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly object m_SourceStyle;

	[Token(Token = "0x1700008C")]
	[UnityEngine.Bindings.NativeProperty("left", false, UnityEngine.Bindings.TargetType.Field)]
	public extern int left
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60002DC")]
		[Address(RVA = "0x4DBEFC0", Offset = "0x4DBEFC0", VA = "0x4DBEFC0")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60002DD")]
		[Address(RVA = "0x4DBEBE0", Offset = "0x4DBEBE0", VA = "0x4DBEBE0")]
		set;
	}

	[Token(Token = "0x1700008D")]
	[UnityEngine.Bindings.NativeProperty("right", false, UnityEngine.Bindings.TargetType.Field)]
	public extern int right
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60002DE")]
		[Address(RVA = "0x4DBEFF0", Offset = "0x4DBEFF0", VA = "0x4DBEFF0")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60002DF")]
		[Address(RVA = "0x4DBEC20", Offset = "0x4DBEC20", VA = "0x4DBEC20")]
		set;
	}

	[Token(Token = "0x1700008E")]
	[UnityEngine.Bindings.NativeProperty("top", false, UnityEngine.Bindings.TargetType.Field)]
	public extern int top
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60002E0")]
		[Address(RVA = "0x4DBF020", Offset = "0x4DBF020", VA = "0x4DBF020")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60002E1")]
		[Address(RVA = "0x4DBEC60", Offset = "0x4DBEC60", VA = "0x4DBEC60")]
		set;
	}

	[Token(Token = "0x1700008F")]
	[UnityEngine.Bindings.NativeProperty("bottom", false, UnityEngine.Bindings.TargetType.Field)]
	public extern int bottom
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60002E2")]
		[Address(RVA = "0x4DBF050", Offset = "0x4DBF050", VA = "0x4DBF050")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60002E3")]
		[Address(RVA = "0x4DBECA0", Offset = "0x4DBECA0", VA = "0x4DBECA0")]
		set;
	}

	[Token(Token = "0x17000090")]
	public extern int horizontal
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60002E4")]
		[Address(RVA = "0x4DBF0B0", Offset = "0x4DBF0B0", VA = "0x4DBF0B0")]
		get;
	}

	[Token(Token = "0x17000091")]
	public extern int vertical
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60002E5")]
		[Address(RVA = "0x4DBF0E0", Offset = "0x4DBF0E0", VA = "0x4DBF0E0")]
		get;
	}

	[Token(Token = "0x60002D3")]
	[Address(RVA = "0x4DBE940", Offset = "0x4DBE940", VA = "0x4DBE940")]
	public RectOffset()
	{
	}

	[Token(Token = "0x60002D4")]
	[Address(RVA = "0x4DBE9B0", Offset = "0x4DBE9B0", VA = "0x4DBE9B0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.IMGUIModule" })]
	internal RectOffset(object sourceStyle, IntPtr source)
	{
	}

	[Token(Token = "0x60002D5")]
	[Address(RVA = "0x4DBE9E0", Offset = "0x4DBE9E0", VA = "0x4DBE9E0", Slot = "1")]
	~RectOffset()
	{
	}

	[Token(Token = "0x60002D6")]
	[Address(RVA = "0x4DBEAF0", Offset = "0x4DBEAF0", VA = "0x4DBEAF0")]
	public RectOffset(int left, int right, int top, int bottom)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002D7")]
	[Address(RVA = "0x4DBECE0", Offset = "0x4DBECE0", VA = "0x4DBECE0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002D8")]
	[Address(RVA = "0x4DBECF0", Offset = "0x4DBECF0", VA = "0x4DBECF0", Slot = "4")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}

	[Token(Token = "0x60002D9")]
	[Address(RVA = "0x4DBEAA0", Offset = "0x4DBEAA0", VA = "0x4DBEAA0")]
	private void Destroy()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002DA")]
	[Address(RVA = "0x4DBE980", Offset = "0x4DBE980", VA = "0x4DBE980")]
	[UnityEngine.ThreadAndSerializationSafe]
	private static extern IntPtr InternalCreate();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002DB")]
	[Address(RVA = "0x4DBF080", Offset = "0x4DBF080", VA = "0x4DBF080")]
	[UnityEngine.ThreadAndSerializationSafe]
	private static extern void InternalDestroy(IntPtr ptr);

	[Token(Token = "0x60002E6")]
	[Address(RVA = "0x4DBF110", Offset = "0x4DBF110", VA = "0x4DBF110")]
	public Rect Remove(Rect rect)
	{
		return default(Rect);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002E7")]
	[Address(RVA = "0x4DBF170", Offset = "0x4DBF170", VA = "0x4DBF170")]
	private static extern void Remove_Injected(RectOffset _unity_self, [In] ref Rect rect, out Rect ret);
}
