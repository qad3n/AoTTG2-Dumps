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
		[Address(RVA = "0x4A977A0", Offset = "0x4A977A0", VA = "0x4A977A0")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60002DD")]
		[Address(RVA = "0x4A973C0", Offset = "0x4A973C0", VA = "0x4A973C0")]
		set;
	}

	[Token(Token = "0x1700008D")]
	[UnityEngine.Bindings.NativeProperty("right", false, UnityEngine.Bindings.TargetType.Field)]
	public extern int right
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60002DE")]
		[Address(RVA = "0x4A977D0", Offset = "0x4A977D0", VA = "0x4A977D0")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60002DF")]
		[Address(RVA = "0x4A97400", Offset = "0x4A97400", VA = "0x4A97400")]
		set;
	}

	[Token(Token = "0x1700008E")]
	[UnityEngine.Bindings.NativeProperty("top", false, UnityEngine.Bindings.TargetType.Field)]
	public extern int top
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60002E0")]
		[Address(RVA = "0x4A97800", Offset = "0x4A97800", VA = "0x4A97800")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60002E1")]
		[Address(RVA = "0x4A97440", Offset = "0x4A97440", VA = "0x4A97440")]
		set;
	}

	[Token(Token = "0x1700008F")]
	[UnityEngine.Bindings.NativeProperty("bottom", false, UnityEngine.Bindings.TargetType.Field)]
	public extern int bottom
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60002E2")]
		[Address(RVA = "0x4A97830", Offset = "0x4A97830", VA = "0x4A97830")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60002E3")]
		[Address(RVA = "0x4A97480", Offset = "0x4A97480", VA = "0x4A97480")]
		set;
	}

	[Token(Token = "0x17000090")]
	public extern int horizontal
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60002E4")]
		[Address(RVA = "0x4A97890", Offset = "0x4A97890", VA = "0x4A97890")]
		get;
	}

	[Token(Token = "0x17000091")]
	public extern int vertical
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60002E5")]
		[Address(RVA = "0x4A978C0", Offset = "0x4A978C0", VA = "0x4A978C0")]
		get;
	}

	[Token(Token = "0x60002D3")]
	[Address(RVA = "0x4A97120", Offset = "0x4A97120", VA = "0x4A97120")]
	public RectOffset()
	{
	}

	[Token(Token = "0x60002D4")]
	[Address(RVA = "0x4A97190", Offset = "0x4A97190", VA = "0x4A97190")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.IMGUIModule" })]
	internal RectOffset(object sourceStyle, IntPtr source)
	{
	}

	[Token(Token = "0x60002D5")]
	[Address(RVA = "0x4A971C0", Offset = "0x4A971C0", VA = "0x4A971C0", Slot = "1")]
	~RectOffset()
	{
	}

	[Token(Token = "0x60002D6")]
	[Address(RVA = "0x4A972D0", Offset = "0x4A972D0", VA = "0x4A972D0")]
	public RectOffset(int left, int right, int top, int bottom)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002D7")]
	[Address(RVA = "0x4A974C0", Offset = "0x4A974C0", VA = "0x4A974C0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002D8")]
	[Address(RVA = "0x4A974D0", Offset = "0x4A974D0", VA = "0x4A974D0", Slot = "4")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}

	[Token(Token = "0x60002D9")]
	[Address(RVA = "0x4A97280", Offset = "0x4A97280", VA = "0x4A97280")]
	private void Destroy()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002DA")]
	[Address(RVA = "0x4A97160", Offset = "0x4A97160", VA = "0x4A97160")]
	[UnityEngine.ThreadAndSerializationSafe]
	private static extern IntPtr InternalCreate();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002DB")]
	[Address(RVA = "0x4A97860", Offset = "0x4A97860", VA = "0x4A97860")]
	[UnityEngine.ThreadAndSerializationSafe]
	private static extern void InternalDestroy(IntPtr ptr);

	[Token(Token = "0x60002E6")]
	[Address(RVA = "0x4A978F0", Offset = "0x4A978F0", VA = "0x4A978F0")]
	public Rect Remove(Rect rect)
	{
		return default(Rect);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002E7")]
	[Address(RVA = "0x4A97950", Offset = "0x4A97950", VA = "0x4A97950")]
	private static extern void Remove_Injected(RectOffset _unity_self, [In] ref Rect rect, out Rect ret);
}
