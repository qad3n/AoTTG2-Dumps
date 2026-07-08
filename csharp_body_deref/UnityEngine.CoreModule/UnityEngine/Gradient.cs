using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine;

[StructLayout((LayoutKind)0)]
[Token(Token = "0x2000119")]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/Math/Gradient.bindings.h")]
[UnityEngine.Scripting.RequiredByNativeCode]
public class Gradient : IEquatable<Gradient>
{
	[Token(Token = "0x40004C3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal IntPtr m_Ptr;

	[Token(Token = "0x17000173")]
	public GradientColorKey[] colorKeys
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60007A6")]
		[Address(RVA = "0x4ABF760", Offset = "0x4ABF760", VA = "0x4ABF760")]
		[UnityEngine.Bindings.FreeFunction("Gradient_Bindings::GetColorKeys", IsThreadSafe = true, HasExplicitThis = true)]
		get;
		[Token(Token = "0x60007A7")]
		[Address(RVA = "0x4ABF790", Offset = "0x4ABF790", VA = "0x4ABF790")]
		[UnityEngine.Bindings.FreeFunction("Gradient_Bindings::SetColorKeys", IsThreadSafe = true, HasExplicitThis = true)]
		set
		{
		}
	}

	[Token(Token = "0x17000174")]
	public GradientAlphaKey[] alphaKeys
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60007A8")]
		[Address(RVA = "0x4ABF890", Offset = "0x4ABF890", VA = "0x4ABF890")]
		[UnityEngine.Bindings.FreeFunction("Gradient_Bindings::GetAlphaKeys", IsThreadSafe = true, HasExplicitThis = true)]
		get;
		[Token(Token = "0x60007A9")]
		[Address(RVA = "0x4ABF8C0", Offset = "0x4ABF8C0", VA = "0x4ABF8C0")]
		[UnityEngine.Bindings.FreeFunction("Gradient_Bindings::SetAlphaKeys", IsThreadSafe = true, HasExplicitThis = true)]
		set
		{
		}
	}

	[Token(Token = "0x17000175")]
	[UnityEngine.Bindings.NativeProperty(IsThreadSafe = true)]
	public extern GradientMode mode
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60007AA")]
		[Address(RVA = "0x4ABF9C0", Offset = "0x4ABF9C0", VA = "0x4ABF9C0")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60007AB")]
		[Address(RVA = "0x4ABF9F0", Offset = "0x4ABF9F0", VA = "0x4ABF9F0")]
		set;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60007A0")]
	[Address(RVA = "0x4ABF530", Offset = "0x4ABF530", VA = "0x4ABF530")]
	[UnityEngine.Bindings.FreeFunction(Name = "Gradient_Bindings::Init", IsThreadSafe = true)]
	private static extern IntPtr Init();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60007A1")]
	[Address(RVA = "0x4ABF560", Offset = "0x4ABF560", VA = "0x4ABF560")]
	[UnityEngine.Bindings.FreeFunction(Name = "Gradient_Bindings::Cleanup", IsThreadSafe = true, HasExplicitThis = true)]
	private extern void Cleanup();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60007A2")]
	[Address(RVA = "0x4ABF590", Offset = "0x4ABF590", VA = "0x4ABF590")]
	[UnityEngine.Bindings.FreeFunction("Gradient_Bindings::Internal_Equals", IsThreadSafe = true, HasExplicitThis = true)]
	private extern bool Internal_Equals(IntPtr other);

	[Token(Token = "0x60007A3")]
	[Address(RVA = "0x4ABF5D0", Offset = "0x4ABF5D0", VA = "0x4ABF5D0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public Gradient()
	{
	}

	[Token(Token = "0x60007A4")]
	[Address(RVA = "0x4ABF610", Offset = "0x4ABF610", VA = "0x4ABF610", Slot = "1")]
	~Gradient()
	{
	}

	[Token(Token = "0x60007A5")]
	[Address(RVA = "0x4ABF6B0", Offset = "0x4ABF6B0", VA = "0x4ABF6B0")]
	[UnityEngine.Bindings.FreeFunction(Name = "Gradient_Bindings::Evaluate", IsThreadSafe = true, HasExplicitThis = true)]
	public Color Evaluate(float time)
	{
		return default(Color);
	}

	[Token(Token = "0x60007AC")]
	[Address(RVA = "0x4ABFA30", Offset = "0x4ABFA30", VA = "0x4ABFA30")]
	[UnityEngine.Bindings.FreeFunction(Name = "Gradient_Bindings::SetKeys", IsThreadSafe = true, HasExplicitThis = true)]
	public void SetKeys(GradientColorKey[] colorKeys, GradientAlphaKey[] alphaKeys)
	{
	}

	[Token(Token = "0x60007AD")]
	[Address(RVA = "0x4ABFBB0", Offset = "0x4ABFBB0", VA = "0x4ABFBB0", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[Token(Token = "0x60007AE")]
	[Address(RVA = "0x4ABFCF0", Offset = "0x4ABFCF0", VA = "0x4ABFCF0", Slot = "4")]
	public bool Equals(Gradient other)
	{
		return default(bool);
	}

	[Token(Token = "0x60007AF")]
	[Address(RVA = "0x4ABFD80", Offset = "0x4ABFD80", VA = "0x4ABFD80", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60007B0")]
	[Address(RVA = "0x4ABF710", Offset = "0x4ABF710", VA = "0x4ABF710")]
	private static extern void Evaluate_Injected(Gradient _unity_self, float time, out Color ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60007B1")]
	[Address(RVA = "0x4ABF850", Offset = "0x4ABF850", VA = "0x4ABF850")]
	private static extern void set_colorKeys_Injected(Gradient _unity_self, ref ManagedSpanWrapper value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60007B2")]
	[Address(RVA = "0x4ABF980", Offset = "0x4ABF980", VA = "0x4ABF980")]
	private static extern void set_alphaKeys_Injected(Gradient _unity_self, ref ManagedSpanWrapper value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60007B3")]
	[Address(RVA = "0x4ABFB70", Offset = "0x4ABFB70", VA = "0x4ABFB70")]
	private static extern void SetKeys_Injected(Gradient _unity_self, ref ManagedSpanWrapper colorKeys, ref ManagedSpanWrapper alphaKeys);
}
