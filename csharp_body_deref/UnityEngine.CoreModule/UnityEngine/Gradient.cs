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
[Token(Token = "0x200011C")]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/Math/Gradient.bindings.h")]
[UnityEngine.Scripting.RequiredByNativeCode]
public class Gradient : IEquatable<Gradient>
{
	[Token(Token = "0x40004C3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal IntPtr m_Ptr;

	[Token(Token = "0x17000174")]
	public GradientColorKey[] colorKeys
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60007A8")]
		[Address(RVA = "0x4DE7090", Offset = "0x4DE7090", VA = "0x4DE7090")]
		[UnityEngine.Bindings.FreeFunction("Gradient_Bindings::GetColorKeys", IsThreadSafe = true, HasExplicitThis = true)]
		get;
		[Token(Token = "0x60007A9")]
		[Address(RVA = "0x4DE70C0", Offset = "0x4DE70C0", VA = "0x4DE70C0")]
		[UnityEngine.Bindings.FreeFunction("Gradient_Bindings::SetColorKeys", IsThreadSafe = true, HasExplicitThis = true)]
		set
		{
		}
	}

	[Token(Token = "0x17000175")]
	public GradientAlphaKey[] alphaKeys
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60007AA")]
		[Address(RVA = "0x4DE71C0", Offset = "0x4DE71C0", VA = "0x4DE71C0")]
		[UnityEngine.Bindings.FreeFunction("Gradient_Bindings::GetAlphaKeys", IsThreadSafe = true, HasExplicitThis = true)]
		get;
		[Token(Token = "0x60007AB")]
		[Address(RVA = "0x4DE71F0", Offset = "0x4DE71F0", VA = "0x4DE71F0")]
		[UnityEngine.Bindings.FreeFunction("Gradient_Bindings::SetAlphaKeys", IsThreadSafe = true, HasExplicitThis = true)]
		set
		{
		}
	}

	[Token(Token = "0x17000176")]
	[UnityEngine.Bindings.NativeProperty(IsThreadSafe = true)]
	public extern GradientMode mode
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60007AC")]
		[Address(RVA = "0x4DE72F0", Offset = "0x4DE72F0", VA = "0x4DE72F0")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60007AD")]
		[Address(RVA = "0x4DE7320", Offset = "0x4DE7320", VA = "0x4DE7320")]
		set;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60007A2")]
	[Address(RVA = "0x4DE6E60", Offset = "0x4DE6E60", VA = "0x4DE6E60")]
	[UnityEngine.Bindings.FreeFunction(Name = "Gradient_Bindings::Init", IsThreadSafe = true)]
	private static extern IntPtr Init();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60007A3")]
	[Address(RVA = "0x4DE6E90", Offset = "0x4DE6E90", VA = "0x4DE6E90")]
	[UnityEngine.Bindings.FreeFunction(Name = "Gradient_Bindings::Cleanup", IsThreadSafe = true, HasExplicitThis = true)]
	private extern void Cleanup();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60007A4")]
	[Address(RVA = "0x4DE6EC0", Offset = "0x4DE6EC0", VA = "0x4DE6EC0")]
	[UnityEngine.Bindings.FreeFunction("Gradient_Bindings::Internal_Equals", IsThreadSafe = true, HasExplicitThis = true)]
	private extern bool Internal_Equals(IntPtr other);

	[Token(Token = "0x60007A5")]
	[Address(RVA = "0x4DE6F00", Offset = "0x4DE6F00", VA = "0x4DE6F00")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public Gradient()
	{
	}

	[Token(Token = "0x60007A6")]
	[Address(RVA = "0x4DE6F40", Offset = "0x4DE6F40", VA = "0x4DE6F40", Slot = "1")]
	~Gradient()
	{
	}

	[Token(Token = "0x60007A7")]
	[Address(RVA = "0x4DE6FE0", Offset = "0x4DE6FE0", VA = "0x4DE6FE0")]
	[UnityEngine.Bindings.FreeFunction(Name = "Gradient_Bindings::Evaluate", IsThreadSafe = true, HasExplicitThis = true)]
	public Color Evaluate(float time)
	{
		return default(Color);
	}

	[Token(Token = "0x60007AE")]
	[Address(RVA = "0x4DE7360", Offset = "0x4DE7360", VA = "0x4DE7360")]
	[UnityEngine.Bindings.FreeFunction(Name = "Gradient_Bindings::SetKeys", IsThreadSafe = true, HasExplicitThis = true)]
	public void SetKeys(GradientColorKey[] colorKeys, GradientAlphaKey[] alphaKeys)
	{
	}

	[Token(Token = "0x60007AF")]
	[Address(RVA = "0x4DE74E0", Offset = "0x4DE74E0", VA = "0x4DE74E0", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[Token(Token = "0x60007B0")]
	[Address(RVA = "0x4DE7620", Offset = "0x4DE7620", VA = "0x4DE7620", Slot = "4")]
	public bool Equals(Gradient other)
	{
		return default(bool);
	}

	[Token(Token = "0x60007B1")]
	[Address(RVA = "0x4DE76B0", Offset = "0x4DE76B0", VA = "0x4DE76B0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60007B2")]
	[Address(RVA = "0x4DE7040", Offset = "0x4DE7040", VA = "0x4DE7040")]
	private static extern void Evaluate_Injected(Gradient _unity_self, float time, out Color ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60007B3")]
	[Address(RVA = "0x4DE7180", Offset = "0x4DE7180", VA = "0x4DE7180")]
	private static extern void set_colorKeys_Injected(Gradient _unity_self, ref ManagedSpanWrapper value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60007B4")]
	[Address(RVA = "0x4DE72B0", Offset = "0x4DE72B0", VA = "0x4DE72B0")]
	private static extern void set_alphaKeys_Injected(Gradient _unity_self, ref ManagedSpanWrapper value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60007B5")]
	[Address(RVA = "0x4DE74A0", Offset = "0x4DE74A0", VA = "0x4DE74A0")]
	private static extern void SetKeys_Injected(Gradient _unity_self, ref ManagedSpanWrapper colorKeys, ref ManagedSpanWrapper alphaKeys);
}
