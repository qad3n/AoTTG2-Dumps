// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.GUIStyleState
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
		[Address(RVA = "0x4E56E00", Offset = "0x4E56E00", VA = "0x4E56E00")]
		get;
		[Token(Token = "0x6000143")]
		[Address(RVA = "0x4E56E30", Offset = "0x4E56E30", VA = "0x4E56E30")]
		set
		{
		}
	}

	[Token(Token = "0x17000056")]
	[UnityEngine.Bindings.NativeProperty("textColor", false, UnityEngine.Bindings.TargetType.Field)]
	public Color textColor
	{
		[Token(Token = "0x6000144")]
		[Address(RVA = "0x4E56F20", Offset = "0x4E56F20", VA = "0x4E56F20")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x6000145")]
		[Address(RVA = "0x4E569E0", Offset = "0x4E569E0", VA = "0x4E569E0")]
		set
		{
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000146")]
	[Address(RVA = "0x4E56FF0", Offset = "0x4E56FF0", VA = "0x4E56FF0")]
	[UnityEngine.Bindings.FreeFunction(Name = "GUIStyleState_Bindings::Init", IsThreadSafe = true)]
	private static extern IntPtr Init();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000147")]
	[Address(RVA = "0x4E57020", Offset = "0x4E57020", VA = "0x4E57020")]
	[UnityEngine.Bindings.FreeFunction(Name = "GUIStyleState_Bindings::Cleanup", IsThreadSafe = true, HasExplicitThis = true)]
	private extern void Cleanup();

	[Token(Token = "0x6000148")]
	[Address(RVA = "0x4E57050", Offset = "0x4E57050", VA = "0x4E57050")]
	public GUIStyleState()
	{
	}

	[Token(Token = "0x6000149")]
	[Address(RVA = "0x4E57090", Offset = "0x4E57090", VA = "0x4E57090")]
	private GUIStyleState(GUIStyle sourceStyle, IntPtr source)
	{
	}

	[Token(Token = "0x600014A")]
	[Address(RVA = "0x4E570C0", Offset = "0x4E570C0", VA = "0x4E570C0")]
	internal static GUIStyleState GetGUIStyleState(GUIStyle sourceStyle, IntPtr source)
	{
		return null;
	}

	[Token(Token = "0x600014B")]
	[Address(RVA = "0x4E57120", Offset = "0x4E57120", VA = "0x4E57120", Slot = "1")]
	~GUIStyleState()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600014C")]
	[Address(RVA = "0x4E56EE0", Offset = "0x4E56EE0", VA = "0x4E56EE0")]
	private static extern void set_background_Injected(GUIStyleState _unity_self, IntPtr value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600014D")]
	[Address(RVA = "0x4E56F70", Offset = "0x4E56F70", VA = "0x4E56F70")]
	private static extern void get_textColor_Injected(GUIStyleState _unity_self, out Color ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600014E")]
	[Address(RVA = "0x4E56FB0", Offset = "0x4E56FB0", VA = "0x4E56FB0")]
	private static extern void set_textColor_Injected(GUIStyleState _unity_self, [In] ref Color value);
}
