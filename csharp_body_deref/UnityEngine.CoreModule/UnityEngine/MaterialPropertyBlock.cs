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

[Token(Token = "0x20000E0")]
[UnityEngine.Bindings.NativeHeader("Runtime/Math/SphericalHarmonicsL2.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Shaders/ComputeShader.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Shaders/ShaderPropertySheet.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/ShaderScriptBindings.h")]
public sealed class MaterialPropertyBlock
{
	[Token(Token = "0x20000E1")]
	internal static class BindingsMarshaller
	{
		[Token(Token = "0x600057F")]
		[Address(RVA = "0x68D8CB0", Offset = "0x68D7CB0", VA = "0x68D8CB0")]
		public static IntPtr ConvertToNative(MaterialPropertyBlock materialPropertyBlock)
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x4000254")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal IntPtr m_Ptr;

	[Token(Token = "0x6000545")]
	[Address(RVA = "0x68D7180", Offset = "0x68D6180", VA = "0x68D7180")]
	[UnityEngine.Bindings.NativeName("GetFloatFromScript")]
	[UnityEngine.Bindings.ThreadSafe]
	private float GetFloatImpl(int name)
	{
		return default(float);
	}

	[Token(Token = "0x6000546")]
	[Address(RVA = "0x68D7220", Offset = "0x68D6220", VA = "0x68D7220")]
	[UnityEngine.Bindings.ThreadSafe]
	[UnityEngine.Bindings.NativeName("SetIntFromScript")]
	private void SetIntImpl(int name, int value)
	{
	}

	[Token(Token = "0x6000547")]
	[Address(RVA = "0x68D72C0", Offset = "0x68D62C0", VA = "0x68D72C0")]
	[UnityEngine.Bindings.ThreadSafe]
	[UnityEngine.Bindings.NativeName("SetFloatFromScript")]
	private void SetFloatImpl(int name, float value)
	{
	}

	[Token(Token = "0x6000548")]
	[Address(RVA = "0x68D7380", Offset = "0x68D6380", VA = "0x68D7380")]
	[UnityEngine.Bindings.ThreadSafe]
	[UnityEngine.Bindings.NativeName("SetVectorFromScript")]
	private void SetVectorImpl(int name, Vector4 value)
	{
	}

	[Token(Token = "0x6000549")]
	[Address(RVA = "0x68D7430", Offset = "0x68D6430", VA = "0x68D7430")]
	[UnityEngine.Bindings.ThreadSafe]
	[UnityEngine.Bindings.NativeName("SetColorFromScript")]
	private void SetColorImpl(int name, Color value)
	{
	}

	[Token(Token = "0x600054A")]
	[Address(RVA = "0x68D74E0", Offset = "0x68D64E0", VA = "0x68D74E0")]
	[UnityEngine.Bindings.NativeName("SetMatrixFromScript")]
	[UnityEngine.Bindings.ThreadSafe]
	private void SetMatrixImpl(int name, Matrix4x4 value)
	{
	}

	[Token(Token = "0x600054B")]
	[Address(RVA = "0x68D7590", Offset = "0x68D6590", VA = "0x68D7590")]
	[UnityEngine.Bindings.ThreadSafe]
	[UnityEngine.Bindings.NativeName("SetTextureFromScript")]
	private void SetTextureImpl(int name, [UnityEngine.Bindings.NotNull] Texture value)
	{
	}

	[Token(Token = "0x600054C")]
	[Address(RVA = "0x68D76B0", Offset = "0x68D66B0", VA = "0x68D76B0")]
	[UnityEngine.Bindings.NativeName("SetRenderTextureFromScript")]
	[UnityEngine.Bindings.ThreadSafe]
	private void SetRenderTextureImpl(int name, [UnityEngine.Bindings.NotNull] RenderTexture value, RenderTextureSubElement element)
	{
	}

	[Token(Token = "0x600054D")]
	[Address(RVA = "0x68D77F0", Offset = "0x68D67F0", VA = "0x68D77F0")]
	[UnityEngine.Bindings.ThreadSafe]
	[UnityEngine.Bindings.NativeName("SetBufferFromScript")]
	private void SetBufferImpl(int name, ComputeBuffer value)
	{
	}

	[Token(Token = "0x600054E")]
	[Address(RVA = "0x68D78A0", Offset = "0x68D68A0", VA = "0x68D78A0")]
	[UnityEngine.Bindings.ThreadSafe]
	[UnityEngine.Bindings.NativeName("SetConstantBufferFromScript")]
	private void SetConstantBufferImpl(int name, ComputeBuffer value, int offset, int size)
	{
	}

	[Token(Token = "0x600054F")]
	[Address(RVA = "0x68D7980", Offset = "0x68D6980", VA = "0x68D7980")]
	[UnityEngine.Bindings.NativeName("SetFloatArrayFromScript")]
	[UnityEngine.Bindings.ThreadSafe]
	private void SetFloatArrayImpl(int name, float[] values, int count)
	{
	}

	[Token(Token = "0x6000550")]
	[Address(RVA = "0x68D7AE0", Offset = "0x68D6AE0", VA = "0x68D7AE0")]
	[UnityEngine.Bindings.ThreadSafe]
	[UnityEngine.Bindings.NativeName("SetVectorArrayFromScript")]
	private void SetVectorArrayImpl(int name, Vector4[] values, int count)
	{
	}

	[Token(Token = "0x6000551")]
	[Address(RVA = "0x68D7C40", Offset = "0x68D6C40", VA = "0x68D7C40")]
	[UnityEngine.Bindings.ThreadSafe]
	[UnityEngine.Bindings.NativeName("SetMatrixArrayFromScript")]
	private void SetMatrixArrayImpl(int name, Matrix4x4[] values, int count)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000552")]
	[Address(RVA = "0x68D7DA0", Offset = "0x68D6DA0", VA = "0x68D7DA0")]
	[UnityEngine.Bindings.NativeMethod(Name = "MaterialPropertyBlockScripting::Create", IsFreeFunction = true)]
	private static extern IntPtr CreateImpl();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000553")]
	[Address(RVA = "0x68D7DD0", Offset = "0x68D6DD0", VA = "0x68D7DD0")]
	[UnityEngine.Bindings.NativeMethod(Name = "MaterialPropertyBlockScripting::Destroy", IsFreeFunction = true, IsThreadSafe = true)]
	private static extern void DestroyImpl(IntPtr mpb);

	[Token(Token = "0x6000554")]
	[Address(RVA = "0x68D7E00", Offset = "0x68D6E00", VA = "0x68D7E00")]
	[UnityEngine.Bindings.ThreadSafe]
	private void Clear(bool keepMemory)
	{
	}

	[Token(Token = "0x6000555")]
	[Address(RVA = "0x68D7EA0", Offset = "0x68D6EA0", VA = "0x68D7EA0")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000556")]
	[Address(RVA = "0x68D7F00", Offset = "0x68D6F00", VA = "0x68D7F00")]
	private void SetFloatArray(int name, float[] values, int count)
	{
	}

	[Token(Token = "0x6000557")]
	[Address(RVA = "0x68D7FC0", Offset = "0x68D6FC0", VA = "0x68D7FC0")]
	private void SetVectorArray(int name, Vector4[] values, int count)
	{
	}

	[Token(Token = "0x6000558")]
	[Address(RVA = "0x68D8080", Offset = "0x68D7080", VA = "0x68D8080")]
	private void SetMatrixArray(int name, Matrix4x4[] values, int count)
	{
	}

	[Token(Token = "0x6000559")]
	[Address(RVA = "0x68D8140", Offset = "0x68D7140", VA = "0x68D8140")]
	public MaterialPropertyBlock()
	{
	}

	[Token(Token = "0x600055A")]
	[Address(RVA = "0x68D8180", Offset = "0x68D7180", VA = "0x68D8180", Slot = "1")]
	~MaterialPropertyBlock()
	{
	}

	[Token(Token = "0x600055B")]
	[Address(RVA = "0x68D8280", Offset = "0x68D7280", VA = "0x68D8280")]
	private void Dispose()
	{
	}

	[Token(Token = "0x600055C")]
	[Address(RVA = "0x68D8310", Offset = "0x68D7310", VA = "0x68D8310")]
	public void SetInt(string name, int value)
	{
	}

	[Token(Token = "0x600055D")]
	[Address(RVA = "0x68D84F0", Offset = "0x68D74F0", VA = "0x68D84F0")]
	public void SetInt(int nameID, int value)
	{
	}

	[Token(Token = "0x600055E")]
	[Address(RVA = "0x68D8550", Offset = "0x68D7550", VA = "0x68D8550")]
	public void SetFloat(string name, float value)
	{
	}

	[Token(Token = "0x600055F")]
	[Address(RVA = "0x68D85D0", Offset = "0x68D75D0", VA = "0x68D85D0")]
	public void SetFloat(int nameID, float value)
	{
	}

	[Token(Token = "0x6000560")]
	[Address(RVA = "0x68D8650", Offset = "0x68D7650", VA = "0x68D8650")]
	public void SetInteger(int nameID, int value)
	{
	}

	[Token(Token = "0x6000561")]
	[Address(RVA = "0x68D86B0", Offset = "0x68D76B0", VA = "0x68D86B0")]
	public void SetVector(string name, Vector4 value)
	{
	}

	[Token(Token = "0x6000562")]
	[Address(RVA = "0x68D8740", Offset = "0x68D7740", VA = "0x68D8740")]
	public void SetVector(int nameID, Vector4 value)
	{
	}

	[Token(Token = "0x6000563")]
	[Address(RVA = "0x68D87B0", Offset = "0x68D77B0", VA = "0x68D87B0")]
	public void SetColor(string name, Color value)
	{
	}

	[Token(Token = "0x6000564")]
	[Address(RVA = "0x68D8840", Offset = "0x68D7840", VA = "0x68D8840")]
	public void SetMatrix(string name, Matrix4x4 value)
	{
	}

	[Token(Token = "0x6000565")]
	[Address(RVA = "0x68D88F0", Offset = "0x68D78F0", VA = "0x68D88F0")]
	public void SetMatrix(int nameID, Matrix4x4 value)
	{
	}

	[Token(Token = "0x6000566")]
	[Address(RVA = "0x68D8980", Offset = "0x68D7980", VA = "0x68D8980")]
	public void SetBuffer(string name, ComputeBuffer value)
	{
	}

	[Token(Token = "0x6000567")]
	[Address(RVA = "0x68D8A10", Offset = "0x68D7A10", VA = "0x68D8A10")]
	public void SetBuffer(int nameID, ComputeBuffer value)
	{
	}

	[Token(Token = "0x6000568")]
	[Address(RVA = "0x68D8A80", Offset = "0x68D7A80", VA = "0x68D8A80")]
	public void SetTexture(string name, Texture value)
	{
	}

	[Token(Token = "0x6000569")]
	[Address(RVA = "0x68D8AB0", Offset = "0x68D7AB0", VA = "0x68D8AB0")]
	public void SetTexture(int nameID, Texture value)
	{
	}

	[Token(Token = "0x600056A")]
	[Address(RVA = "0x68D8AC0", Offset = "0x68D7AC0", VA = "0x68D8AC0")]
	public void SetTexture(int nameID, RenderTexture value, RenderTextureSubElement element)
	{
	}

	[Token(Token = "0x600056B")]
	[Address(RVA = "0x68D8AD0", Offset = "0x68D7AD0", VA = "0x68D8AD0")]
	public void SetConstantBuffer(int nameID, ComputeBuffer value, int offset, int size)
	{
	}

	[Token(Token = "0x600056C")]
	[Address(RVA = "0x68D8B60", Offset = "0x68D7B60", VA = "0x68D8B60")]
	public void SetFloatArray(string name, float[] values)
	{
	}

	[Token(Token = "0x600056D")]
	[Address(RVA = "0x68D8BA0", Offset = "0x68D7BA0", VA = "0x68D8BA0")]
	public void SetVectorArray(string name, Vector4[] values)
	{
	}

	[Token(Token = "0x600056E")]
	[Address(RVA = "0x68D8BE0", Offset = "0x68D7BE0", VA = "0x68D8BE0")]
	public void SetVectorArray(int nameID, Vector4[] values)
	{
	}

	[Token(Token = "0x600056F")]
	[Address(RVA = "0x68D8C00", Offset = "0x68D7C00", VA = "0x68D8C00")]
	public void SetMatrixArray(string name, Matrix4x4[] values)
	{
	}

	[Token(Token = "0x6000570")]
	[Address(RVA = "0x68D8C40", Offset = "0x68D7C40", VA = "0x68D8C40")]
	public float GetFloat(string name)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000571")]
	[Address(RVA = "0x68D71E0", Offset = "0x68D61E0", VA = "0x68D71E0")]
	private static extern float GetFloatImpl_Injected(IntPtr _unity_self, int name);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000572")]
	[Address(RVA = "0x68D7280", Offset = "0x68D6280", VA = "0x68D7280")]
	private static extern void SetIntImpl_Injected(IntPtr _unity_self, int name, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000573")]
	[Address(RVA = "0x68D7340", Offset = "0x68D6340", VA = "0x68D7340")]
	private static extern void SetFloatImpl_Injected(IntPtr _unity_self, int name, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000574")]
	[Address(RVA = "0x68D73F0", Offset = "0x68D63F0", VA = "0x68D73F0")]
	private static extern void SetVectorImpl_Injected(IntPtr _unity_self, int name, [In] ref Vector4 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000575")]
	[Address(RVA = "0x68D74A0", Offset = "0x68D64A0", VA = "0x68D74A0")]
	private static extern void SetColorImpl_Injected(IntPtr _unity_self, int name, [In] ref Color value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000576")]
	[Address(RVA = "0x68D7550", Offset = "0x68D6550", VA = "0x68D7550")]
	private static extern void SetMatrixImpl_Injected(IntPtr _unity_self, int name, [In] ref Matrix4x4 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000577")]
	[Address(RVA = "0x68D7670", Offset = "0x68D6670", VA = "0x68D7670")]
	private static extern void SetTextureImpl_Injected(IntPtr _unity_self, int name, IntPtr value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000578")]
	[Address(RVA = "0x68D77A0", Offset = "0x68D67A0", VA = "0x68D77A0")]
	private static extern void SetRenderTextureImpl_Injected(IntPtr _unity_self, int name, IntPtr value, RenderTextureSubElement element);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000579")]
	[Address(RVA = "0x68D7860", Offset = "0x68D6860", VA = "0x68D7860")]
	private static extern void SetBufferImpl_Injected(IntPtr _unity_self, int name, IntPtr value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600057A")]
	[Address(RVA = "0x68D7930", Offset = "0x68D6930", VA = "0x68D7930")]
	private static extern void SetConstantBufferImpl_Injected(IntPtr _unity_self, int name, IntPtr value, int offset, int size);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600057B")]
	[Address(RVA = "0x68D7A90", Offset = "0x68D6A90", VA = "0x68D7A90")]
	private static extern void SetFloatArrayImpl_Injected(IntPtr _unity_self, int name, ref ManagedSpanWrapper values, int count);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600057C")]
	[Address(RVA = "0x68D7BF0", Offset = "0x68D6BF0", VA = "0x68D7BF0")]
	private static extern void SetVectorArrayImpl_Injected(IntPtr _unity_self, int name, ref ManagedSpanWrapper values, int count);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600057D")]
	[Address(RVA = "0x68D7D50", Offset = "0x68D6D50", VA = "0x68D7D50")]
	private static extern void SetMatrixArrayImpl_Injected(IntPtr _unity_self, int name, ref ManagedSpanWrapper values, int count);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600057E")]
	[Address(RVA = "0x68D7E60", Offset = "0x68D6E60", VA = "0x68D7E60")]
	private static extern void Clear_Injected(IntPtr _unity_self, bool keepMemory);
}
