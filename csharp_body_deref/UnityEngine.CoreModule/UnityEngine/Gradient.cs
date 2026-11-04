// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Gradient
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

[StructLayout((LayoutKind)0)]
[Token(Token = "0x2000141")]
[UnityEngine.Scripting.RequiredByNativeCode]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/Math/Gradient.bindings.h")]
public class Gradient : IEquatable<Gradient>
{
	[Token(Token = "0x2000142")]
	internal static class BindingsMarshaller
	{
		[Token(Token = "0x6000A62")]
		[Address(RVA = "0x87C0D0", Offset = "0x87A6D0", VA = "0x18087C0D0")]
		public static IntPtr ConvertToNative(Gradient graident)
		{
			return default(IntPtr);
		}

		[Token(Token = "0x6000A63")]
		[Address(RVA = "0x2F00140", Offset = "0x2EFE740", VA = "0x182F00140")]
		public static Gradient ConvertToManaged(IntPtr ptr)
		{
			return null;
		}
	}

	[Token(Token = "0x400052A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.ParticleSystemModule" })]
	internal IntPtr m_Ptr;

	[Token(Token = "0x400052B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private bool m_RequiresNativeCleanup;

	[Token(Token = "0x170001D1")]
	public GradientColorKey[] colorKeys
	{
		[Token(Token = "0x6000A49")]
		[Address(RVA = "0x2F03630", Offset = "0x2F01C30", VA = "0x182F03630")]
		[UnityEngine.Bindings.FreeFunction("Gradient_Bindings::GetColorKeysArray", IsThreadSafe = true, HasExplicitThis = true)]
		get
		{
			return null;
		}
		[Token(Token = "0x6000A4A")]
		[Address(RVA = "0x2F03A00", Offset = "0x2F02000", VA = "0x182F03A00")]
		[UnityEngine.Bindings.FreeFunction("Gradient_Bindings::SetColorKeysWithSpan", IsThreadSafe = true, HasExplicitThis = true)]
		set
		{
		}
	}

	[Token(Token = "0x170001D2")]
	public GradientAlphaKey[] alphaKeys
	{
		[Token(Token = "0x6000A4B")]
		[Address(RVA = "0x2F034F0", Offset = "0x2F01AF0", VA = "0x182F034F0")]
		[UnityEngine.Bindings.FreeFunction("Gradient_Bindings::GetAlphaKeysArray", IsThreadSafe = true, HasExplicitThis = true)]
		get
		{
			return null;
		}
		[Token(Token = "0x6000A4C")]
		[Address(RVA = "0x2F038B0", Offset = "0x2F01EB0", VA = "0x182F038B0")]
		[UnityEngine.Bindings.FreeFunction("Gradient_Bindings::SetAlphaKeysWithSpan", IsThreadSafe = true, HasExplicitThis = true)]
		set
		{
		}
	}

	[Token(Token = "0x170001D3")]
	[UnityEngine.Bindings.NativeProperty(IsThreadSafe = true)]
	public GradientMode mode
	{
		[Token(Token = "0x6000A4D")]
		[Address(RVA = "0x2F03800", Offset = "0x2F01E00", VA = "0x182F03800")]
		get
		{
			return default(GradientMode);
		}
		[Token(Token = "0x6000A4E")]
		[Address(RVA = "0x2F03BE0", Offset = "0x2F021E0", VA = "0x182F03BE0")]
		set
		{
		}
	}

	[Token(Token = "0x170001D4")]
	[UnityEngine.Bindings.NativeProperty(IsThreadSafe = true)]
	public ColorSpace colorSpace
	{
		[Token(Token = "0x6000A4F")]
		[Address(RVA = "0x2F03760", Offset = "0x2F01D60", VA = "0x182F03760")]
		get
		{
			return default(ColorSpace);
		}
		[Token(Token = "0x6000A50")]
		[Address(RVA = "0x2F03B40", Offset = "0x2F02140", VA = "0x182F03B40")]
		set
		{
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000A42")]
	[Address(RVA = "0x2F02F80", Offset = "0x2F01580", VA = "0x182F02F80")]
	[UnityEngine.Bindings.FreeFunction(Name = "Gradient_Bindings::Init", IsThreadSafe = true)]
	private static extern IntPtr Init();

	[Token(Token = "0x6000A43")]
	[Address(RVA = "0x2F02BA0", Offset = "0x2F011A0", VA = "0x182F02BA0")]
	[UnityEngine.Bindings.FreeFunction(Name = "Gradient_Bindings::Cleanup", IsThreadSafe = true, HasExplicitThis = true)]
	private void Cleanup()
	{
	}

	[Token(Token = "0x6000A44")]
	[Address(RVA = "0x2F03000", Offset = "0x2F01600", VA = "0x182F03000")]
	[UnityEngine.Bindings.FreeFunction("Gradient_Bindings::Internal_Equals", IsThreadSafe = true, HasExplicitThis = true)]
	private bool Internal_Equals(IntPtr other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A45")]
	[Address(RVA = "0x2F03430", Offset = "0x2F01A30", VA = "0x182F03430")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public Gradient()
	{
	}

	[Token(Token = "0x6000A46")]
	[Address(RVA = "0x2F03470", Offset = "0x2F01A70", VA = "0x182F03470")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.ParticleSystemModule" })]
	internal Gradient(IntPtr ptr)
	{
	}

	[Token(Token = "0x6000A47")]
	[Address(RVA = "0x2F02ED0", Offset = "0x2F014D0", VA = "0x182F02ED0", Slot = "1")]
	~Gradient()
	{
	}

	[Token(Token = "0x6000A48")]
	[Address(RVA = "0x2F02E50", Offset = "0x2F01450", VA = "0x182F02E50")]
	[UnityEngine.Bindings.FreeFunction(Name = "Gradient_Bindings::Evaluate", IsThreadSafe = true, HasExplicitThis = true)]
	public Color Evaluate(float time)
	{
		return default(Color);
	}

	[Token(Token = "0x6000A51")]
	[Address(RVA = "0x2F03200", Offset = "0x2F01800", VA = "0x182F03200")]
	public void SetKeys(GradientColorKey[] colorKeys, GradientAlphaKey[] alphaKeys)
	{
	}

	[Token(Token = "0x6000A52")]
	[Address(RVA = "0x2F030C0", Offset = "0x2F016C0", VA = "0x182F030C0")]
	[UnityEngine.Bindings.FreeFunction(Name = "Gradient_Bindings::SetKeysWithSpans", HasExplicitThis = true, IsThreadSafe = true)]
	public void SetKeys(ReadOnlySpan<GradientColorKey> colorKeys, ReadOnlySpan<GradientAlphaKey> alphaKeys)
	{
	}

	[Token(Token = "0x6000A53")]
	[Address(RVA = "0x2F02C00", Offset = "0x2F01200", VA = "0x182F02C00", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A54")]
	[Address(RVA = "0x2F02D20", Offset = "0x2F01320", VA = "0x182F02D20", Slot = "4")]
	public bool Equals(Gradient other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A55")]
	[Address(RVA = "0x2F02F70", Offset = "0x2F01570", VA = "0x182F02F70", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000A56")]
	[Address(RVA = "0x2F02B60", Offset = "0x2F01160", VA = "0x182F02B60")]
	private static extern void Cleanup_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000A57")]
	[Address(RVA = "0x2F02FB0", Offset = "0x2F015B0", VA = "0x182F02FB0")]
	private static extern bool Internal_Equals_Injected(IntPtr _unity_self, IntPtr other);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000A58")]
	[Address(RVA = "0x2F02DF0", Offset = "0x2F013F0", VA = "0x182F02DF0")]
	private static extern void Evaluate_Injected(IntPtr _unity_self, float time, out Color ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000A59")]
	[Address(RVA = "0x2F035E0", Offset = "0x2F01BE0", VA = "0x182F035E0")]
	private static extern void get_colorKeys_Injected(IntPtr _unity_self, out BlittableArrayWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000A5A")]
	[Address(RVA = "0x2F039B0", Offset = "0x2F01FB0", VA = "0x182F039B0")]
	private static extern void set_colorKeys_Injected(IntPtr _unity_self, ref ManagedSpanWrapper value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000A5B")]
	[Address(RVA = "0x2F034A0", Offset = "0x2F01AA0", VA = "0x182F034A0")]
	private static extern void get_alphaKeys_Injected(IntPtr _unity_self, out BlittableArrayWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000A5C")]
	[Address(RVA = "0x2F03860", Offset = "0x2F01E60", VA = "0x182F03860")]
	private static extern void set_alphaKeys_Injected(IntPtr _unity_self, ref ManagedSpanWrapper value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000A5D")]
	[Address(RVA = "0x2F037C0", Offset = "0x2F01DC0", VA = "0x182F037C0")]
	private static extern GradientMode get_mode_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000A5E")]
	[Address(RVA = "0x2F03BA0", Offset = "0x2F021A0", VA = "0x182F03BA0")]
	private static extern void set_mode_Injected(IntPtr _unity_self, GradientMode value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000A5F")]
	[Address(RVA = "0x2F03720", Offset = "0x2F01D20", VA = "0x182F03720")]
	private static extern ColorSpace get_colorSpace_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000A60")]
	[Address(RVA = "0x2F03B00", Offset = "0x2F02100", VA = "0x182F03B00")]
	private static extern void set_colorSpace_Injected(IntPtr _unity_self, ColorSpace value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000A61")]
	[Address(RVA = "0x2F03060", Offset = "0x2F01660", VA = "0x182F03060")]
	private static extern void SetKeys_Injected(IntPtr _unity_self, ref ManagedSpanWrapper colorKeys, ref ManagedSpanWrapper alphaKeys);
}
