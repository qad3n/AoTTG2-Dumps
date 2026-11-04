// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.GUIStyleState
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
		[Address(RVA = "0x87C0D0", Offset = "0x87A6D0", VA = "0x18087C0D0")]
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
		[Address(RVA = "0x2F8FEC0", Offset = "0x2F8E4C0", VA = "0x182F8FEC0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000163")]
		[Address(RVA = "0x2F90060", Offset = "0x2F8E660", VA = "0x182F90060")]
		set
		{
		}
	}

	[Token(Token = "0x17000059")]
	[UnityEngine.Bindings.NativeProperty("textColor", false, UnityEngine.Bindings.TargetType.Field)]
	public Color textColor
	{
		[Token(Token = "0x6000164")]
		[Address(RVA = "0x2F8FFA0", Offset = "0x2F8E5A0", VA = "0x182F8FFA0")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x6000165")]
		[Address(RVA = "0x2F90160", Offset = "0x2F8E760", VA = "0x182F90160")]
		set
		{
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000166")]
	[Address(RVA = "0x2F8FE10", Offset = "0x2F8E410", VA = "0x182F8FE10")]
	[UnityEngine.Bindings.FreeFunction(Name = "GUIStyleState_Bindings::Init", IsThreadSafe = true)]
	private static extern IntPtr Init();

	[Token(Token = "0x6000167")]
	[Address(RVA = "0x2F8FC80", Offset = "0x2F8E280", VA = "0x182F8FC80")]
	[UnityEngine.Bindings.FreeFunction(Name = "GUIStyleState_Bindings::Cleanup", IsThreadSafe = true, HasExplicitThis = true)]
	private void Cleanup()
	{
	}

	[Token(Token = "0x6000168")]
	[Address(RVA = "0x2F8FE40", Offset = "0x2F8E440", VA = "0x182F8FE40")]
	public GUIStyleState()
	{
	}

	[Token(Token = "0x6000169")]
	[Address(RVA = "0x2ED0FE0", Offset = "0x2ECF5E0", VA = "0x182ED0FE0")]
	private GUIStyleState(GUIStyle sourceStyle, IntPtr source)
	{
	}

	[Token(Token = "0x600016A")]
	[Address(RVA = "0x2F8FD90", Offset = "0x2F8E390", VA = "0x182F8FD90")]
	internal static GUIStyleState GetGUIStyleState(GUIStyle sourceStyle, IntPtr source)
	{
		return null;
	}

	[Token(Token = "0x600016B")]
	[Address(RVA = "0x2F8FCE0", Offset = "0x2F8E2E0", VA = "0x182F8FCE0", Slot = "1")]
	~GUIStyleState()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600016C")]
	[Address(RVA = "0x2F8FE80", Offset = "0x2F8E480", VA = "0x182F8FE80")]
	private static extern IntPtr get_background_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600016D")]
	[Address(RVA = "0x2F90010", Offset = "0x2F8E610", VA = "0x182F90010")]
	private static extern void set_background_Injected(IntPtr _unity_self, IntPtr value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600016E")]
	[Address(RVA = "0x2F8FF50", Offset = "0x2F8E550", VA = "0x182F8FF50")]
	private static extern void get_textColor_Injected(IntPtr _unity_self, out Color ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600016F")]
	[Address(RVA = "0x2F90110", Offset = "0x2F8E710", VA = "0x182F90110")]
	private static extern void set_textColor_Injected(IntPtr _unity_self, [In] ref Color value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000170")]
	[Address(RVA = "0x2F8FC40", Offset = "0x2F8E240", VA = "0x182F8FC40")]
	private static extern void Cleanup_Injected(IntPtr _unity_self);
}
