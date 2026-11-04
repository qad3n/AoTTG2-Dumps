// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.Text.TextColorGradient
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

namespace UnityEngine.TextCore.Text;

[Serializable]
[Token(Token = "0x200003C")]
[UnityEngine.Bindings.NativeHeader("Modules/TextCoreTextEngine/TextColorGradient.h")]
[ExcludeFromPreset]
[ExcludeFromObjectFactory]
public class TextColorGradient : ScriptableObject
{
	[Token(Token = "0x40001AB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	public ColorGradientMode colorMode;

	[Token(Token = "0x40001AC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
	public Color topLeft;

	[Token(Token = "0x40001AD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2C")]
	public Color topRight;

	[Token(Token = "0x40001AE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x3C")]
	public Color bottomLeft;

	[Token(Token = "0x40001AF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4C")]
	public Color bottomRight;

	[Token(Token = "0x40001B0")]
	private const ColorGradientMode k_DefaultColorMode = ColorGradientMode.FourCornersGradient;

	[Token(Token = "0x40001B1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly Color k_DefaultColor;

	[Token(Token = "0x40001B2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private IntPtr m_NativeInstance;

	[Token(Token = "0x17000041")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal IntPtr nativeInstance
	{
		[Token(Token = "0x600018E")]
		[Address(RVA = "0x3045E50", Offset = "0x3044450", VA = "0x183045E50")]
		get
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x600018C")]
	[Address(RVA = "0x30459A0", Offset = "0x3043FA0", VA = "0x1830459A0")]
	private void OnValidate()
	{
	}

	[Token(Token = "0x600018D")]
	[Address(RVA = "0x3045B10", Offset = "0x3044110", VA = "0x183045B10")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x600018F")]
	[Address(RVA = "0x3045D90", Offset = "0x3044390", VA = "0x183045D90")]
	public TextColorGradient()
	{
	}

	[Token(Token = "0x6000190")]
	[Address(RVA = "0x3045CE0", Offset = "0x30442E0", VA = "0x183045CE0")]
	public TextColorGradient(Color color)
	{
	}

	[Token(Token = "0x6000191")]
	[Address(RVA = "0x3045D30", Offset = "0x3044330", VA = "0x183045D30")]
	public TextColorGradient(Color color0, Color color1, Color color2, Color color3)
	{
	}

	[Token(Token = "0x6000192")]
	[Address(RVA = "0x30459A0", Offset = "0x3043FA0", VA = "0x1830459A0")]
	internal void MarkNativeDirty()
	{
	}

	[Token(Token = "0x6000193")]
	[Address(RVA = "0x30458C0", Offset = "0x3043EC0", VA = "0x1830458C0")]
	private static IntPtr CreateNative(Color32 tl, Color32 tr, Color32 bl, Color32 br, IntPtr managedObject)
	{
		return default(IntPtr);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000194")]
	[Address(RVA = "0x3045950", Offset = "0x3043F50", VA = "0x183045950")]
	private static extern void DestroyNative(IntPtr nativeInstance, IntPtr managedObject);

	[Token(Token = "0x6000195")]
	[Address(RVA = "0x3045C00", Offset = "0x3044200", VA = "0x183045C00")]
	private static void UpdateNative(IntPtr instance, Color32 tl, Color32 tr, Color32 bl, Color32 br)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000197")]
	[Address(RVA = "0x3045870", Offset = "0x3043E70", VA = "0x183045870")]
	private static extern IntPtr CreateNative_Injected([In] ref Color32 tl, [In] ref Color32 tr, [In] ref Color32 bl, [In] ref Color32 br, IntPtr managedObject);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000198")]
	[Address(RVA = "0x3045BB0", Offset = "0x30441B0", VA = "0x183045BB0")]
	private static extern void UpdateNative_Injected(IntPtr instance, [In] ref Color32 tl, [In] ref Color32 tr, [In] ref Color32 bl, [In] ref Color32 br);
}
