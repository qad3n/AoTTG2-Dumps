using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine;

[Serializable]
[StructLayout((LayoutKind)0)]
[Token(Token = "0x2000018")]
[UnityEngine.Bindings.NativeHeader("Modules/IMGUI/GUIStyle.bindings.h")]
public sealed class GUIStyleState
{
	[NonSerialized]
	[Token(Token = "0x400009F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal IntPtr m_Ptr;

	[Token(Token = "0x40000A0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly GUIStyle m_SourceStyle;

	[Token(Token = "0x17000055")]
	[UnityEngine.Bindings.NativeProperty("Background", false, UnityEngine.Bindings.TargetType.Function)]
	public Texture2D background
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000142")]
		[Address(RVA = "0x4B2F240", Offset = "0x4B2F240", VA = "0x4B2F240")]
		get;
		[Token(Token = "0x6000143")]
		[Address(RVA = "0x4B2F270", Offset = "0x4B2F270", VA = "0x4B2F270")]
		set
		{
		}
	}

	[Token(Token = "0x17000056")]
	[UnityEngine.Bindings.NativeProperty("textColor", false, UnityEngine.Bindings.TargetType.Field)]
	public Color textColor
	{
		[Token(Token = "0x6000144")]
		[Address(RVA = "0x4B2F360", Offset = "0x4B2F360", VA = "0x4B2F360")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x6000145")]
		[Address(RVA = "0x4B2EE20", Offset = "0x4B2EE20", VA = "0x4B2EE20")]
		set
		{
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000146")]
	[Address(RVA = "0x4B2F430", Offset = "0x4B2F430", VA = "0x4B2F430")]
	[UnityEngine.Bindings.FreeFunction(Name = "GUIStyleState_Bindings::Init", IsThreadSafe = true)]
	private static extern IntPtr Init();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000147")]
	[Address(RVA = "0x4B2F460", Offset = "0x4B2F460", VA = "0x4B2F460")]
	[UnityEngine.Bindings.FreeFunction(Name = "GUIStyleState_Bindings::Cleanup", IsThreadSafe = true, HasExplicitThis = true)]
	private extern void Cleanup();

	[Token(Token = "0x6000148")]
	[Address(RVA = "0x4B2F490", Offset = "0x4B2F490", VA = "0x4B2F490")]
	public GUIStyleState()
	{
	}

	[Token(Token = "0x6000149")]
	[Address(RVA = "0x4B2F4D0", Offset = "0x4B2F4D0", VA = "0x4B2F4D0")]
	private GUIStyleState(GUIStyle sourceStyle, IntPtr source)
	{
	}

	[Token(Token = "0x600014A")]
	[Address(RVA = "0x4B2F500", Offset = "0x4B2F500", VA = "0x4B2F500")]
	internal static GUIStyleState GetGUIStyleState(GUIStyle sourceStyle, IntPtr source)
	{
		return null;
	}

	[Token(Token = "0x600014B")]
	[Address(RVA = "0x4B2F560", Offset = "0x4B2F560", VA = "0x4B2F560", Slot = "1")]
	~GUIStyleState()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600014C")]
	[Address(RVA = "0x4B2F320", Offset = "0x4B2F320", VA = "0x4B2F320")]
	private static extern void set_background_Injected(GUIStyleState _unity_self, IntPtr value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600014D")]
	[Address(RVA = "0x4B2F3B0", Offset = "0x4B2F3B0", VA = "0x4B2F3B0")]
	private static extern void get_textColor_Injected(GUIStyleState _unity_self, out Color ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600014E")]
	[Address(RVA = "0x4B2F3F0", Offset = "0x4B2F3F0", VA = "0x4B2F3F0")]
	private static extern void set_textColor_Injected(GUIStyleState _unity_self, [In] ref Color value);
}
