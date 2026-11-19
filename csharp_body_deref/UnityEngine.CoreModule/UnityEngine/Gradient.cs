// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Gradient
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

[StructLayout((LayoutKind)0)]
[Token(Token = "0x2000142")]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/Math/Gradient.bindings.h")]
[UnityEngine.Scripting.RequiredByNativeCode]
public class Gradient : IEquatable<Gradient>
{
	[Token(Token = "0x2000143")]
	internal static class BindingsMarshaller
	{
		[Token(Token = "0x6000A73")]
		[Address(RVA = "0x69002D0", Offset = "0x68FF2D0", VA = "0x69002D0")]
		public static IntPtr ConvertToNative(Gradient graident)
		{
			return default(IntPtr);
		}

		[Token(Token = "0x6000A74")]
		[Address(RVA = "0x69002F0", Offset = "0x68FF2F0", VA = "0x69002F0")]
		public static Gradient ConvertToManaged(IntPtr ptr)
		{
			return null;
		}
	}

	[Token(Token = "0x400052F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.ParticleSystemModule" })]
	internal IntPtr m_Ptr;

	[Token(Token = "0x4000530")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private bool m_RequiresNativeCleanup;

	[Token(Token = "0x170001D6")]
	public GradientColorKey[] colorKeys
	{
		[Token(Token = "0x6000A5A")]
		[Address(RVA = "0x68FF770", Offset = "0x68FE770", VA = "0x68FF770")]
		[UnityEngine.Bindings.FreeFunction("Gradient_Bindings::GetColorKeysArray", IsThreadSafe = true, HasExplicitThis = true)]
		get
		{
			return null;
		}
		[Token(Token = "0x6000A5B")]
		[Address(RVA = "0x68FF8D0", Offset = "0x68FE8D0", VA = "0x68FF8D0")]
		[UnityEngine.Bindings.FreeFunction("Gradient_Bindings::SetColorKeysWithSpan", IsThreadSafe = true, HasExplicitThis = true)]
		set
		{
		}
	}

	[Token(Token = "0x170001D7")]
	public GradientAlphaKey[] alphaKeys
	{
		[Token(Token = "0x6000A5C")]
		[Address(RVA = "0x68FFA00", Offset = "0x68FEA00", VA = "0x68FFA00")]
		[UnityEngine.Bindings.FreeFunction("Gradient_Bindings::GetAlphaKeysArray", IsThreadSafe = true, HasExplicitThis = true)]
		get
		{
			return null;
		}
		[Token(Token = "0x6000A5D")]
		[Address(RVA = "0x68FFB60", Offset = "0x68FEB60", VA = "0x68FFB60")]
		[UnityEngine.Bindings.FreeFunction("Gradient_Bindings::SetAlphaKeysWithSpan", IsThreadSafe = true, HasExplicitThis = true)]
		set
		{
		}
	}

	[Token(Token = "0x170001D8")]
	[UnityEngine.Bindings.NativeProperty(IsThreadSafe = true)]
	public GradientMode mode
	{
		[Token(Token = "0x6000A5E")]
		[Address(RVA = "0x68FFC90", Offset = "0x68FEC90", VA = "0x68FFC90")]
		get
		{
			return default(GradientMode);
		}
		[Token(Token = "0x6000A5F")]
		[Address(RVA = "0x68FFD20", Offset = "0x68FED20", VA = "0x68FFD20")]
		set
		{
		}
	}

	[Token(Token = "0x170001D9")]
	[UnityEngine.Bindings.NativeProperty(IsThreadSafe = true)]
	public ColorSpace colorSpace
	{
		[Token(Token = "0x6000A60")]
		[Address(RVA = "0x68FFDC0", Offset = "0x68FEDC0", VA = "0x68FFDC0")]
		get
		{
			return default(ColorSpace);
		}
		[Token(Token = "0x6000A61")]
		[Address(RVA = "0x68FFE50", Offset = "0x68FEE50", VA = "0x68FFE50")]
		set
		{
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000A53")]
	[Address(RVA = "0x68FF400", Offset = "0x68FE400", VA = "0x68FF400")]
	[UnityEngine.Bindings.FreeFunction(Name = "Gradient_Bindings::Init", IsThreadSafe = true)]
	private static extern IntPtr Init();

	[Token(Token = "0x6000A54")]
	[Address(RVA = "0x68FF430", Offset = "0x68FE430", VA = "0x68FF430")]
	[UnityEngine.Bindings.FreeFunction(Name = "Gradient_Bindings::Cleanup", IsThreadSafe = true, HasExplicitThis = true)]
	private void Cleanup()
	{
	}

	[Token(Token = "0x6000A55")]
	[Address(RVA = "0x68FF4C0", Offset = "0x68FE4C0", VA = "0x68FF4C0")]
	[UnityEngine.Bindings.FreeFunction("Gradient_Bindings::Internal_Equals", IsThreadSafe = true, HasExplicitThis = true)]
	private bool Internal_Equals(IntPtr other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A56")]
	[Address(RVA = "0x68FF560", Offset = "0x68FE560", VA = "0x68FF560")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public Gradient()
	{
	}

	[Token(Token = "0x6000A57")]
	[Address(RVA = "0x68FF5A0", Offset = "0x68FE5A0", VA = "0x68FF5A0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.ParticleSystemModule" })]
	internal Gradient(IntPtr ptr)
	{
	}

	[Token(Token = "0x6000A58")]
	[Address(RVA = "0x68FF5D0", Offset = "0x68FE5D0", VA = "0x68FF5D0", Slot = "1")]
	~Gradient()
	{
	}

	[Token(Token = "0x6000A59")]
	[Address(RVA = "0x68FF690", Offset = "0x68FE690", VA = "0x68FF690")]
	[UnityEngine.Bindings.FreeFunction(Name = "Gradient_Bindings::Evaluate", IsThreadSafe = true, HasExplicitThis = true)]
	public Color Evaluate(float time)
	{
		return default(Color);
	}

	[Token(Token = "0x6000A62")]
	[Address(RVA = "0x68FFEF0", Offset = "0x68FEEF0", VA = "0x68FFEF0")]
	public void SetKeys(GradientColorKey[] colorKeys, GradientAlphaKey[] alphaKeys)
	{
	}

	[Token(Token = "0x6000A63")]
	[Address(RVA = "0x6900000", Offset = "0x68FF000", VA = "0x6900000")]
	[UnityEngine.Bindings.FreeFunction(Name = "Gradient_Bindings::SetKeysWithSpans", HasExplicitThis = true, IsThreadSafe = true)]
	public void SetKeys(ReadOnlySpan<GradientColorKey> colorKeys, ReadOnlySpan<GradientAlphaKey> alphaKeys)
	{
	}

	[Token(Token = "0x6000A64")]
	[Address(RVA = "0x6900180", Offset = "0x68FF180", VA = "0x6900180", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A65")]
	[Address(RVA = "0x6900200", Offset = "0x68FF200", VA = "0x6900200", Slot = "4")]
	public bool Equals(Gradient other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A66")]
	[Address(RVA = "0x69002C0", Offset = "0x68FF2C0", VA = "0x69002C0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000A67")]
	[Address(RVA = "0x68FF490", Offset = "0x68FE490", VA = "0x68FF490")]
	private static extern void Cleanup_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000A68")]
	[Address(RVA = "0x68FF520", Offset = "0x68FE520", VA = "0x68FF520")]
	private static extern bool Internal_Equals_Injected(IntPtr _unity_self, IntPtr other);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000A69")]
	[Address(RVA = "0x68FF720", Offset = "0x68FE720", VA = "0x68FF720")]
	private static extern void Evaluate_Injected(IntPtr _unity_self, float time, out Color ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000A6A")]
	[Address(RVA = "0x68FF890", Offset = "0x68FE890", VA = "0x68FF890")]
	private static extern void get_colorKeys_Injected(IntPtr _unity_self, out BlittableArrayWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000A6B")]
	[Address(RVA = "0x68FF9C0", Offset = "0x68FE9C0", VA = "0x68FF9C0")]
	private static extern void set_colorKeys_Injected(IntPtr _unity_self, ref ManagedSpanWrapper value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000A6C")]
	[Address(RVA = "0x68FFB20", Offset = "0x68FEB20", VA = "0x68FFB20")]
	private static extern void get_alphaKeys_Injected(IntPtr _unity_self, out BlittableArrayWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000A6D")]
	[Address(RVA = "0x68FFC50", Offset = "0x68FEC50", VA = "0x68FFC50")]
	private static extern void set_alphaKeys_Injected(IntPtr _unity_self, ref ManagedSpanWrapper value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000A6E")]
	[Address(RVA = "0x68FFCF0", Offset = "0x68FECF0", VA = "0x68FFCF0")]
	private static extern GradientMode get_mode_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000A6F")]
	[Address(RVA = "0x68FFD80", Offset = "0x68FED80", VA = "0x68FFD80")]
	private static extern void set_mode_Injected(IntPtr _unity_self, GradientMode value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000A70")]
	[Address(RVA = "0x68FFE20", Offset = "0x68FEE20", VA = "0x68FFE20")]
	private static extern ColorSpace get_colorSpace_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000A71")]
	[Address(RVA = "0x68FFEB0", Offset = "0x68FEEB0", VA = "0x68FFEB0")]
	private static extern void set_colorSpace_Injected(IntPtr _unity_self, ColorSpace value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000A72")]
	[Address(RVA = "0x6900140", Offset = "0x68FF140", VA = "0x6900140")]
	private static extern void SetKeys_Injected(IntPtr _unity_self, ref ManagedSpanWrapper colorKeys, ref ManagedSpanWrapper alphaKeys);
}
