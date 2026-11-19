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
[Token(Token = "0x2000019")]
[UnityEngine.Bindings.NativeHeader("Modules/IMGUI/GUIStyle.bindings.h")]
public sealed class GUIStyleState
{
	[Token(Token = "0x200001A")]
	internal static class BindingsMarshaller
	{
		[Token(Token = "0x6000171")]
		[Address(RVA = "0x69944F0", Offset = "0x69934F0", VA = "0x69944F0")]
		public static IntPtr ConvertToNative(GUIStyleState guiStyleState)
		{
			return default(IntPtr);
		}
	}

	[NonSerialized]
	[Token(Token = "0x40000A1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal IntPtr m_Ptr;

	[Token(Token = "0x40000A2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly GUIStyle m_SourceStyle;

	[Token(Token = "0x17000058")]
	[UnityEngine.Bindings.NativeProperty("Background", false, UnityEngine.Bindings.TargetType.Function)]
	public Texture2D background
	{
		[Token(Token = "0x6000162")]
		[Address(RVA = "0x6993FE0", Offset = "0x6992FE0", VA = "0x6993FE0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000163")]
		[Address(RVA = "0x69940A0", Offset = "0x69930A0", VA = "0x69940A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000059")]
	[UnityEngine.Bindings.NativeProperty("textColor", false, UnityEngine.Bindings.TargetType.Field)]
	public Color textColor
	{
		[Token(Token = "0x6000164")]
		[Address(RVA = "0x69941A0", Offset = "0x69931A0", VA = "0x69941A0")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x6000165")]
		[Address(RVA = "0x6993BB0", Offset = "0x6992BB0", VA = "0x6993BB0")]
		set
		{
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000166")]
	[Address(RVA = "0x6994290", Offset = "0x6993290", VA = "0x6994290")]
	[UnityEngine.Bindings.FreeFunction(Name = "GUIStyleState_Bindings::Init", IsThreadSafe = true)]
	private static extern IntPtr Init();

	[Token(Token = "0x6000167")]
	[Address(RVA = "0x69942C0", Offset = "0x69932C0", VA = "0x69942C0")]
	[UnityEngine.Bindings.FreeFunction(Name = "GUIStyleState_Bindings::Cleanup", IsThreadSafe = true, HasExplicitThis = true)]
	private void Cleanup()
	{
	}

	[Token(Token = "0x6000168")]
	[Address(RVA = "0x6994350", Offset = "0x6993350", VA = "0x6994350")]
	public GUIStyleState()
	{
	}

	[Token(Token = "0x6000169")]
	[Address(RVA = "0x6994390", Offset = "0x6993390", VA = "0x6994390")]
	private GUIStyleState(GUIStyle sourceStyle, IntPtr source)
	{
	}

	[Token(Token = "0x600016A")]
	[Address(RVA = "0x69943C0", Offset = "0x69933C0", VA = "0x69943C0")]
	internal static GUIStyleState GetGUIStyleState(GUIStyle sourceStyle, IntPtr source)
	{
		return null;
	}

	[Token(Token = "0x600016B")]
	[Address(RVA = "0x6994420", Offset = "0x6993420", VA = "0x6994420", Slot = "1")]
	~GUIStyleState()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600016C")]
	[Address(RVA = "0x6994070", Offset = "0x6993070", VA = "0x6994070")]
	private static extern IntPtr get_background_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600016D")]
	[Address(RVA = "0x6994160", Offset = "0x6993160", VA = "0x6994160")]
	private static extern void set_background_Injected(IntPtr _unity_self, IntPtr value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600016E")]
	[Address(RVA = "0x6994210", Offset = "0x6993210", VA = "0x6994210")]
	private static extern void get_textColor_Injected(IntPtr _unity_self, out Color ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600016F")]
	[Address(RVA = "0x6994250", Offset = "0x6993250", VA = "0x6994250")]
	private static extern void set_textColor_Injected(IntPtr _unity_self, [In] ref Color value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000170")]
	[Address(RVA = "0x6994320", Offset = "0x6993320", VA = "0x6994320")]
	private static extern void Cleanup_Injected(IntPtr _unity_self);
}
