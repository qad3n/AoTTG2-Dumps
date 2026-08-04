// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.MaterialPropertyBlock
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
	[Address(RVA = "0x4DC69E0", Offset = "0x4DC69E0", VA = "0x4DC69E0")]
	[UnityEngine.Bindings.NativeName("SetIntFromScript")]
	[UnityEngine.Bindings.ThreadSafe]
	private extern void SetIntImpl(int name, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60003DB")]
	[Address(RVA = "0x4DC6A20", Offset = "0x4DC6A20", VA = "0x4DC6A20")]
	[UnityEngine.Bindings.ThreadSafe]
	[UnityEngine.Bindings.NativeName("SetFloatFromScript")]
	private extern void SetFloatImpl(int name, float value);

	[Token(Token = "0x60003DC")]
	[Address(RVA = "0x4DC6A60", Offset = "0x4DC6A60", VA = "0x4DC6A60")]
	[UnityEngine.Bindings.ThreadSafe]
	[UnityEngine.Bindings.NativeName("SetVectorFromScript")]
	private void SetVectorImpl(int name, Vector4 value)
	{
	}

	[Token(Token = "0x60003DD")]
	[Address(RVA = "0x4DC6AF0", Offset = "0x4DC6AF0", VA = "0x4DC6AF0")]
	[UnityEngine.Bindings.NativeName("SetColorFromScript")]
	[UnityEngine.Bindings.ThreadSafe]
	private void SetColorImpl(int name, Color value)
	{
	}

	[Token(Token = "0x60003DE")]
	[Address(RVA = "0x4DC6B80", Offset = "0x4DC6B80", VA = "0x4DC6B80")]
	[UnityEngine.Bindings.NativeName("SetMatrixFromScript")]
	[UnityEngine.Bindings.ThreadSafe]
	private void SetMatrixImpl(int name, Matrix4x4 value)
	{
	}

	[Token(Token = "0x60003DF")]
	[Address(RVA = "0x4DC6C00", Offset = "0x4DC6C00", VA = "0x4DC6C00")]
	[UnityEngine.Bindings.NativeName("SetTextureFromScript")]
	[UnityEngine.Bindings.ThreadSafe]
	private void SetTextureImpl(int name, [UnityEngine.Bindings.NotNull("ArgumentNullException")] Texture value)
	{
	}

	[Token(Token = "0x60003E0")]
	[Address(RVA = "0x4DC6D20", Offset = "0x4DC6D20", VA = "0x4DC6D20")]
	[UnityEngine.Bindings.NativeName("SetRenderTextureFromScript")]
	[UnityEngine.Bindings.ThreadSafe]
	private void SetRenderTextureImpl(int name, [UnityEngine.Bindings.NotNull("ArgumentNullException")] RenderTexture value, RenderTextureSubElement element)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60003E1")]
	[Address(RVA = "0x4DC6E60", Offset = "0x4DC6E60", VA = "0x4DC6E60")]
	[UnityEngine.Bindings.NativeName("SetBufferFromScript")]
	[UnityEngine.Bindings.ThreadSafe]
	private extern void SetBufferImpl(int name, ComputeBuffer value);

	[Token(Token = "0x60003E2")]
	[Address(RVA = "0x4DC6EA0", Offset = "0x4DC6EA0", VA = "0x4DC6EA0")]
	[UnityEngine.Bindings.NativeName("SetFloatArrayFromScript")]
	[UnityEngine.Bindings.ThreadSafe]
	private void SetFloatArrayImpl(int name, float[] values, int count)
	{
	}

	[Token(Token = "0x60003E3")]
	[Address(RVA = "0x4DC6FC0", Offset = "0x4DC6FC0", VA = "0x4DC6FC0")]
	[UnityEngine.Bindings.NativeName("SetVectorArrayFromScript")]
	[UnityEngine.Bindings.ThreadSafe]
	private void SetVectorArrayImpl(int name, Vector4[] values, int count)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60003E4")]
	[Address(RVA = "0x4DC70E0", Offset = "0x4DC70E0", VA = "0x4DC70E0")]
	[UnityEngine.Bindings.NativeMethod(Name = "MaterialPropertyBlockScripting::Create", IsFreeFunction = true)]
	private static extern IntPtr CreateImpl();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60003E5")]
	[Address(RVA = "0x4DC7110", Offset = "0x4DC7110", VA = "0x4DC7110")]
	[UnityEngine.Bindings.NativeMethod(Name = "MaterialPropertyBlockScripting::Destroy", IsFreeFunction = true, IsThreadSafe = true)]
	private static extern void DestroyImpl(IntPtr mpb);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60003E6")]
	[Address(RVA = "0x4DC7140", Offset = "0x4DC7140", VA = "0x4DC7140")]
	[UnityEngine.Bindings.ThreadSafe]
	private extern void Clear(bool keepMemory);

	[Token(Token = "0x60003E7")]
	[Address(RVA = "0x4DC7180", Offset = "0x4DC7180", VA = "0x4DC7180")]
	public void Clear()
	{
	}

	[Token(Token = "0x60003E8")]
	[Address(RVA = "0x4DC71C0", Offset = "0x4DC71C0", VA = "0x4DC71C0")]
	private void SetFloatArray(int name, float[] values, int count)
	{
	}

	[Token(Token = "0x60003E9")]
	[Address(RVA = "0x4DC7270", Offset = "0x4DC7270", VA = "0x4DC7270")]
	private void SetVectorArray(int name, Vector4[] values, int count)
	{
	}

	[Token(Token = "0x60003EA")]
	[Address(RVA = "0x4DC7320", Offset = "0x4DC7320", VA = "0x4DC7320")]
	public MaterialPropertyBlock()
	{
	}

	[Token(Token = "0x60003EB")]
	[Address(RVA = "0x4DC7360", Offset = "0x4DC7360", VA = "0x4DC7360", Slot = "1")]
	~MaterialPropertyBlock()
	{
	}

	[Token(Token = "0x60003EC")]
	[Address(RVA = "0x4DC7460", Offset = "0x4DC7460", VA = "0x4DC7460")]
	private void Dispose()
	{
	}

	[Token(Token = "0x60003ED")]
	[Address(RVA = "0x4DC74F0", Offset = "0x4DC74F0", VA = "0x4DC74F0")]
	public void SetInt(string name, int value)
	{
	}

	[Token(Token = "0x60003EE")]
	[Address(RVA = "0x4DC75A0", Offset = "0x4DC75A0", VA = "0x4DC75A0")]
	public void SetInt(int nameID, int value)
	{
	}

	[Token(Token = "0x60003EF")]
	[Address(RVA = "0x4DC75F0", Offset = "0x4DC75F0", VA = "0x4DC75F0")]
	public void SetFloat(string name, float value)
	{
	}

	[Token(Token = "0x60003F0")]
	[Address(RVA = "0x4DC7660", Offset = "0x4DC7660", VA = "0x4DC7660")]
	public void SetFloat(int nameID, float value)
	{
	}

	[Token(Token = "0x60003F1")]
	[Address(RVA = "0x4DC76A0", Offset = "0x4DC76A0", VA = "0x4DC76A0")]
	public void SetInteger(int nameID, int value)
	{
	}

	[Token(Token = "0x60003F2")]
	[Address(RVA = "0x4DC76E0", Offset = "0x4DC76E0", VA = "0x4DC76E0")]
	public void SetVector(int nameID, Vector4 value)
	{
	}

	[Token(Token = "0x60003F3")]
	[Address(RVA = "0x4DC7730", Offset = "0x4DC7730", VA = "0x4DC7730")]
	public void SetColor(int nameID, Color value)
	{
	}

	[Token(Token = "0x60003F4")]
	[Address(RVA = "0x4DC7780", Offset = "0x4DC7780", VA = "0x4DC7780")]
	public void SetMatrix(int nameID, Matrix4x4 value)
	{
	}

	[Token(Token = "0x60003F5")]
	[Address(RVA = "0x4DC77F0", Offset = "0x4DC77F0", VA = "0x4DC77F0")]
	public void SetBuffer(string name, ComputeBuffer value)
	{
	}

	[Token(Token = "0x60003F6")]
	[Address(RVA = "0x4DC7860", Offset = "0x4DC7860", VA = "0x4DC7860")]
	public void SetBuffer(int nameID, ComputeBuffer value)
	{
	}

	[Token(Token = "0x60003F7")]
	[Address(RVA = "0x4DC78A0", Offset = "0x4DC78A0", VA = "0x4DC78A0")]
	public void SetTexture(string name, Texture value)
	{
	}

	[Token(Token = "0x60003F8")]
	[Address(RVA = "0x4DC78F0", Offset = "0x4DC78F0", VA = "0x4DC78F0")]
	public void SetTexture(int nameID, Texture value)
	{
	}

	[Token(Token = "0x60003F9")]
	[Address(RVA = "0x4DC7900", Offset = "0x4DC7900", VA = "0x4DC7900")]
	public void SetTexture(int nameID, RenderTexture value, RenderTextureSubElement element)
	{
	}

	[Token(Token = "0x60003FA")]
	[Address(RVA = "0x4DC7910", Offset = "0x4DC7910", VA = "0x4DC7910")]
	public void SetFloatArray(string name, float[] values)
	{
	}

	[Token(Token = "0x60003FB")]
	[Address(RVA = "0x4DC7970", Offset = "0x4DC7970", VA = "0x4DC7970")]
	public void SetVectorArray(string name, Vector4[] values)
	{
	}

	[Token(Token = "0x60003FC")]
	[Address(RVA = "0x4DC79D0", Offset = "0x4DC79D0", VA = "0x4DC79D0")]
	public void SetVectorArray(int nameID, Vector4[] values)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60003FD")]
	[Address(RVA = "0x4DC6AB0", Offset = "0x4DC6AB0", VA = "0x4DC6AB0")]
	private static extern void SetVectorImpl_Injected(MaterialPropertyBlock _unity_self, int name, [In] ref Vector4 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60003FE")]
	[Address(RVA = "0x4DC6B40", Offset = "0x4DC6B40", VA = "0x4DC6B40")]
	private static extern void SetColorImpl_Injected(MaterialPropertyBlock _unity_self, int name, [In] ref Color value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60003FF")]
	[Address(RVA = "0x4DC6BC0", Offset = "0x4DC6BC0", VA = "0x4DC6BC0")]
	private static extern void SetMatrixImpl_Injected(MaterialPropertyBlock _unity_self, int name, [In] ref Matrix4x4 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000400")]
	[Address(RVA = "0x4DC6CE0", Offset = "0x4DC6CE0", VA = "0x4DC6CE0")]
	private static extern void SetTextureImpl_Injected(MaterialPropertyBlock _unity_self, int name, IntPtr value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000401")]
	[Address(RVA = "0x4DC6E10", Offset = "0x4DC6E10", VA = "0x4DC6E10")]
	private static extern void SetRenderTextureImpl_Injected(MaterialPropertyBlock _unity_self, int name, IntPtr value, RenderTextureSubElement element);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000402")]
	[Address(RVA = "0x4DC6F70", Offset = "0x4DC6F70", VA = "0x4DC6F70")]
	private static extern void SetFloatArrayImpl_Injected(MaterialPropertyBlock _unity_self, int name, ref ManagedSpanWrapper values, int count);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000403")]
	[Address(RVA = "0x4DC7090", Offset = "0x4DC7090", VA = "0x4DC7090")]
	private static extern void SetVectorArrayImpl_Injected(MaterialPropertyBlock _unity_self, int name, ref ManagedSpanWrapper values, int count);
}
