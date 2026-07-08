using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Rendering;

namespace UnityEngine;

[Token(Token = "0x20000BF")]
[UnityEngine.Bindings.NativeHeader("Runtime/Shaders/ShaderPropertySheet.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/ShaderScriptBindings.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Shaders/ComputeShader.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Math/SphericalHarmonicsL2.h")]
public sealed class MaterialPropertyBlock
{
	[Token(Token = "0x40001F6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal IntPtr m_Ptr;

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60003DA")]
	[Address(RVA = "0x4A9F1C0", Offset = "0x4A9F1C0", VA = "0x4A9F1C0")]
	[UnityEngine.Bindings.NativeName("SetIntFromScript")]
	[UnityEngine.Bindings.ThreadSafe]
	private extern void SetIntImpl(int name, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60003DB")]
	[Address(RVA = "0x4A9F200", Offset = "0x4A9F200", VA = "0x4A9F200")]
	[UnityEngine.Bindings.ThreadSafe]
	[UnityEngine.Bindings.NativeName("SetFloatFromScript")]
	private extern void SetFloatImpl(int name, float value);

	[Token(Token = "0x60003DC")]
	[Address(RVA = "0x4A9F240", Offset = "0x4A9F240", VA = "0x4A9F240")]
	[UnityEngine.Bindings.ThreadSafe]
	[UnityEngine.Bindings.NativeName("SetVectorFromScript")]
	private void SetVectorImpl(int name, Vector4 value)
	{
	}

	[Token(Token = "0x60003DD")]
	[Address(RVA = "0x4A9F2D0", Offset = "0x4A9F2D0", VA = "0x4A9F2D0")]
	[UnityEngine.Bindings.NativeName("SetColorFromScript")]
	[UnityEngine.Bindings.ThreadSafe]
	private void SetColorImpl(int name, Color value)
	{
	}

	[Token(Token = "0x60003DE")]
	[Address(RVA = "0x4A9F360", Offset = "0x4A9F360", VA = "0x4A9F360")]
	[UnityEngine.Bindings.NativeName("SetMatrixFromScript")]
	[UnityEngine.Bindings.ThreadSafe]
	private void SetMatrixImpl(int name, Matrix4x4 value)
	{
	}

	[Token(Token = "0x60003DF")]
	[Address(RVA = "0x4A9F3E0", Offset = "0x4A9F3E0", VA = "0x4A9F3E0")]
	[UnityEngine.Bindings.NativeName("SetTextureFromScript")]
	[UnityEngine.Bindings.ThreadSafe]
	private void SetTextureImpl(int name, [UnityEngine.Bindings.NotNull("ArgumentNullException")] Texture value)
	{
	}

	[Token(Token = "0x60003E0")]
	[Address(RVA = "0x4A9F500", Offset = "0x4A9F500", VA = "0x4A9F500")]
	[UnityEngine.Bindings.NativeName("SetRenderTextureFromScript")]
	[UnityEngine.Bindings.ThreadSafe]
	private void SetRenderTextureImpl(int name, [UnityEngine.Bindings.NotNull("ArgumentNullException")] RenderTexture value, RenderTextureSubElement element)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60003E1")]
	[Address(RVA = "0x4A9F640", Offset = "0x4A9F640", VA = "0x4A9F640")]
	[UnityEngine.Bindings.NativeName("SetBufferFromScript")]
	[UnityEngine.Bindings.ThreadSafe]
	private extern void SetBufferImpl(int name, ComputeBuffer value);

	[Token(Token = "0x60003E2")]
	[Address(RVA = "0x4A9F680", Offset = "0x4A9F680", VA = "0x4A9F680")]
	[UnityEngine.Bindings.NativeName("SetFloatArrayFromScript")]
	[UnityEngine.Bindings.ThreadSafe]
	private void SetFloatArrayImpl(int name, float[] values, int count)
	{
	}

	[Token(Token = "0x60003E3")]
	[Address(RVA = "0x4A9F7A0", Offset = "0x4A9F7A0", VA = "0x4A9F7A0")]
	[UnityEngine.Bindings.NativeName("SetVectorArrayFromScript")]
	[UnityEngine.Bindings.ThreadSafe]
	private void SetVectorArrayImpl(int name, Vector4[] values, int count)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60003E4")]
	[Address(RVA = "0x4A9F8C0", Offset = "0x4A9F8C0", VA = "0x4A9F8C0")]
	[UnityEngine.Bindings.NativeMethod(Name = "MaterialPropertyBlockScripting::Create", IsFreeFunction = true)]
	private static extern IntPtr CreateImpl();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60003E5")]
	[Address(RVA = "0x4A9F8F0", Offset = "0x4A9F8F0", VA = "0x4A9F8F0")]
	[UnityEngine.Bindings.NativeMethod(Name = "MaterialPropertyBlockScripting::Destroy", IsFreeFunction = true, IsThreadSafe = true)]
	private static extern void DestroyImpl(IntPtr mpb);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60003E6")]
	[Address(RVA = "0x4A9F920", Offset = "0x4A9F920", VA = "0x4A9F920")]
	[UnityEngine.Bindings.ThreadSafe]
	private extern void Clear(bool keepMemory);

	[Token(Token = "0x60003E7")]
	[Address(RVA = "0x4A9F960", Offset = "0x4A9F960", VA = "0x4A9F960")]
	public void Clear()
	{
	}

	[Token(Token = "0x60003E8")]
	[Address(RVA = "0x4A9F9A0", Offset = "0x4A9F9A0", VA = "0x4A9F9A0")]
	private void SetFloatArray(int name, float[] values, int count)
	{
	}

	[Token(Token = "0x60003E9")]
	[Address(RVA = "0x4A9FA50", Offset = "0x4A9FA50", VA = "0x4A9FA50")]
	private void SetVectorArray(int name, Vector4[] values, int count)
	{
	}

	[Token(Token = "0x60003EA")]
	[Address(RVA = "0x4A9FB00", Offset = "0x4A9FB00", VA = "0x4A9FB00")]
	public MaterialPropertyBlock()
	{
	}

	[Token(Token = "0x60003EB")]
	[Address(RVA = "0x4A9FB40", Offset = "0x4A9FB40", VA = "0x4A9FB40", Slot = "1")]
	~MaterialPropertyBlock()
	{
	}

	[Token(Token = "0x60003EC")]
	[Address(RVA = "0x4A9FC40", Offset = "0x4A9FC40", VA = "0x4A9FC40")]
	private void Dispose()
	{
	}

	[Token(Token = "0x60003ED")]
	[Address(RVA = "0x4A9FCD0", Offset = "0x4A9FCD0", VA = "0x4A9FCD0")]
	public void SetInt(string name, int value)
	{
	}

	[Token(Token = "0x60003EE")]
	[Address(RVA = "0x4A9FD80", Offset = "0x4A9FD80", VA = "0x4A9FD80")]
	public void SetInt(int nameID, int value)
	{
	}

	[Token(Token = "0x60003EF")]
	[Address(RVA = "0x4A9FDD0", Offset = "0x4A9FDD0", VA = "0x4A9FDD0")]
	public void SetFloat(string name, float value)
	{
	}

	[Token(Token = "0x60003F0")]
	[Address(RVA = "0x4A9FE40", Offset = "0x4A9FE40", VA = "0x4A9FE40")]
	public void SetFloat(int nameID, float value)
	{
	}

	[Token(Token = "0x60003F1")]
	[Address(RVA = "0x4A9FE80", Offset = "0x4A9FE80", VA = "0x4A9FE80")]
	public void SetInteger(int nameID, int value)
	{
	}

	[Token(Token = "0x60003F2")]
	[Address(RVA = "0x4A9FEC0", Offset = "0x4A9FEC0", VA = "0x4A9FEC0")]
	public void SetVector(int nameID, Vector4 value)
	{
	}

	[Token(Token = "0x60003F3")]
	[Address(RVA = "0x4A9FF10", Offset = "0x4A9FF10", VA = "0x4A9FF10")]
	public void SetColor(int nameID, Color value)
	{
	}

	[Token(Token = "0x60003F4")]
	[Address(RVA = "0x4A9FF60", Offset = "0x4A9FF60", VA = "0x4A9FF60")]
	public void SetMatrix(int nameID, Matrix4x4 value)
	{
	}

	[Token(Token = "0x60003F5")]
	[Address(RVA = "0x4A9FFD0", Offset = "0x4A9FFD0", VA = "0x4A9FFD0")]
	public void SetBuffer(string name, ComputeBuffer value)
	{
	}

	[Token(Token = "0x60003F6")]
	[Address(RVA = "0x4AA0040", Offset = "0x4AA0040", VA = "0x4AA0040")]
	public void SetBuffer(int nameID, ComputeBuffer value)
	{
	}

	[Token(Token = "0x60003F7")]
	[Address(RVA = "0x4AA0080", Offset = "0x4AA0080", VA = "0x4AA0080")]
	public void SetTexture(string name, Texture value)
	{
	}

	[Token(Token = "0x60003F8")]
	[Address(RVA = "0x4AA00D0", Offset = "0x4AA00D0", VA = "0x4AA00D0")]
	public void SetTexture(int nameID, Texture value)
	{
	}

	[Token(Token = "0x60003F9")]
	[Address(RVA = "0x4AA00E0", Offset = "0x4AA00E0", VA = "0x4AA00E0")]
	public void SetTexture(int nameID, RenderTexture value, RenderTextureSubElement element)
	{
	}

	[Token(Token = "0x60003FA")]
	[Address(RVA = "0x4AA00F0", Offset = "0x4AA00F0", VA = "0x4AA00F0")]
	public void SetFloatArray(string name, float[] values)
	{
	}

	[Token(Token = "0x60003FB")]
	[Address(RVA = "0x4AA0150", Offset = "0x4AA0150", VA = "0x4AA0150")]
	public void SetVectorArray(string name, Vector4[] values)
	{
	}

	[Token(Token = "0x60003FC")]
	[Address(RVA = "0x4AA01B0", Offset = "0x4AA01B0", VA = "0x4AA01B0")]
	public void SetVectorArray(int nameID, Vector4[] values)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60003FD")]
	[Address(RVA = "0x4A9F290", Offset = "0x4A9F290", VA = "0x4A9F290")]
	private static extern void SetVectorImpl_Injected(MaterialPropertyBlock _unity_self, int name, [In] ref Vector4 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60003FE")]
	[Address(RVA = "0x4A9F320", Offset = "0x4A9F320", VA = "0x4A9F320")]
	private static extern void SetColorImpl_Injected(MaterialPropertyBlock _unity_self, int name, [In] ref Color value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60003FF")]
	[Address(RVA = "0x4A9F3A0", Offset = "0x4A9F3A0", VA = "0x4A9F3A0")]
	private static extern void SetMatrixImpl_Injected(MaterialPropertyBlock _unity_self, int name, [In] ref Matrix4x4 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000400")]
	[Address(RVA = "0x4A9F4C0", Offset = "0x4A9F4C0", VA = "0x4A9F4C0")]
	private static extern void SetTextureImpl_Injected(MaterialPropertyBlock _unity_self, int name, IntPtr value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000401")]
	[Address(RVA = "0x4A9F5F0", Offset = "0x4A9F5F0", VA = "0x4A9F5F0")]
	private static extern void SetRenderTextureImpl_Injected(MaterialPropertyBlock _unity_self, int name, IntPtr value, RenderTextureSubElement element);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000402")]
	[Address(RVA = "0x4A9F750", Offset = "0x4A9F750", VA = "0x4A9F750")]
	private static extern void SetFloatArrayImpl_Injected(MaterialPropertyBlock _unity_self, int name, ref ManagedSpanWrapper values, int count);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000403")]
	[Address(RVA = "0x4A9F870", Offset = "0x4A9F870", VA = "0x4A9F870")]
	private static extern void SetVectorArrayImpl_Injected(MaterialPropertyBlock _unity_self, int name, ref ManagedSpanWrapper values, int count);
}
