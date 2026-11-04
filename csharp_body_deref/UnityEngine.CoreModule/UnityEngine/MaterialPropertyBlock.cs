// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.MaterialPropertyBlock
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
using UnityEngine.Rendering;

namespace UnityEngine;

[Token(Token = "0x20000DF")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/ShaderScriptBindings.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Math/SphericalHarmonicsL2.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Shaders/ShaderPropertySheet.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Shaders/ComputeShader.h")]
public sealed class MaterialPropertyBlock
{
	[Token(Token = "0x20000E0")]
	internal static class BindingsMarshaller
	{
		[Token(Token = "0x6000570")]
		[Address(RVA = "0x87C0D0", Offset = "0x87A6D0", VA = "0x18087C0D0")]
		public static IntPtr ConvertToNative(MaterialPropertyBlock materialPropertyBlock)
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x400024F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal IntPtr m_Ptr;

	[Token(Token = "0x6000536")]
	[Address(RVA = "0x2EDF4D0", Offset = "0x2EDDAD0", VA = "0x182EDF4D0")]
	[UnityEngine.Bindings.NativeName("GetFloatFromScript")]
	[UnityEngine.Bindings.ThreadSafe]
	private float GetFloatImpl(int name)
	{
		return default(float);
	}

	[Token(Token = "0x6000537")]
	[Address(RVA = "0x2EDFE90", Offset = "0x2EDE490", VA = "0x182EDFE90")]
	[UnityEngine.Bindings.NativeName("SetIntFromScript")]
	[UnityEngine.Bindings.ThreadSafe]
	private void SetIntImpl(int name, int value)
	{
	}

	[Token(Token = "0x6000538")]
	[Address(RVA = "0x2EDFD40", Offset = "0x2EDE340", VA = "0x182EDFD40")]
	[UnityEngine.Bindings.ThreadSafe]
	[UnityEngine.Bindings.NativeName("SetFloatFromScript")]
	private void SetFloatImpl(int name, float value)
	{
	}

	[Token(Token = "0x6000539")]
	[Address(RVA = "0x2EE0D20", Offset = "0x2EDF320", VA = "0x182EE0D20")]
	[UnityEngine.Bindings.ThreadSafe]
	[UnityEngine.Bindings.NativeName("SetVectorFromScript")]
	private void SetVectorImpl(int name, Vector4 value)
	{
	}

	[Token(Token = "0x600053A")]
	[Address(RVA = "0x2EDF770", Offset = "0x2EDDD70", VA = "0x182EDF770")]
	[UnityEngine.Bindings.NativeName("SetColorFromScript")]
	[UnityEngine.Bindings.ThreadSafe]
	private void SetColorImpl(int name, Color value)
	{
	}

	[Token(Token = "0x600053B")]
	[Address(RVA = "0x2EE0410", Offset = "0x2EDEA10", VA = "0x182EE0410")]
	[UnityEngine.Bindings.NativeName("SetMatrixFromScript")]
	[UnityEngine.Bindings.ThreadSafe]
	private void SetMatrixImpl(int name, Matrix4x4 value)
	{
	}

	[Token(Token = "0x600053C")]
	[Address(RVA = "0x2EE0730", Offset = "0x2EDED30", VA = "0x182EE0730")]
	[UnityEngine.Bindings.NativeName("SetTextureFromScript")]
	[UnityEngine.Bindings.ThreadSafe]
	private void SetTextureImpl(int name, [UnityEngine.Bindings.NotNull] Texture value)
	{
	}

	[Token(Token = "0x600053D")]
	[Address(RVA = "0x2EE0600", Offset = "0x2EDEC00", VA = "0x182EE0600")]
	[UnityEngine.Bindings.NativeName("SetRenderTextureFromScript")]
	[UnityEngine.Bindings.ThreadSafe]
	private void SetRenderTextureImpl(int name, [UnityEngine.Bindings.NotNull] RenderTexture value, RenderTextureSubElement element)
	{
	}

	[Token(Token = "0x600053E")]
	[Address(RVA = "0x2EDF600", Offset = "0x2EDDC00", VA = "0x182EDF600")]
	[UnityEngine.Bindings.NativeName("SetBufferFromScript")]
	[UnityEngine.Bindings.ThreadSafe]
	private void SetBufferImpl(int name, ComputeBuffer value)
	{
	}

	[Token(Token = "0x600053F")]
	[Address(RVA = "0x2EDF8C0", Offset = "0x2EDDEC0", VA = "0x182EDF8C0")]
	[UnityEngine.Bindings.ThreadSafe]
	[UnityEngine.Bindings.NativeName("SetConstantBufferFromScript")]
	private void SetConstantBufferImpl(int name, ComputeBuffer value, int offset, int size)
	{
	}

	[Token(Token = "0x6000540")]
	[Address(RVA = "0x2EDF9A0", Offset = "0x2EDDFA0", VA = "0x182EDF9A0")]
	[UnityEngine.Bindings.ThreadSafe]
	[UnityEngine.Bindings.NativeName("SetFloatArrayFromScript")]
	private void SetFloatArrayImpl(int name, float[] values, int count)
	{
	}

	[Token(Token = "0x6000541")]
	[Address(RVA = "0x2EE0950", Offset = "0x2EDEF50", VA = "0x182EE0950")]
	[UnityEngine.Bindings.ThreadSafe]
	[UnityEngine.Bindings.NativeName("SetVectorArrayFromScript")]
	private void SetVectorArrayImpl(int name, Vector4[] values, int count)
	{
	}

	[Token(Token = "0x6000542")]
	[Address(RVA = "0x2EE0070", Offset = "0x2EDE670", VA = "0x182EE0070")]
	[UnityEngine.Bindings.ThreadSafe]
	[UnityEngine.Bindings.NativeName("SetMatrixArrayFromScript")]
	private void SetMatrixArrayImpl(int name, Matrix4x4[] values, int count)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000543")]
	[Address(RVA = "0x2EDF2C0", Offset = "0x2EDD8C0", VA = "0x182EDF2C0")]
	[UnityEngine.Bindings.NativeMethod(Name = "MaterialPropertyBlockScripting::Create", IsFreeFunction = true)]
	private static extern IntPtr CreateImpl();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000544")]
	[Address(RVA = "0x2EDF2F0", Offset = "0x2EDD8F0", VA = "0x182EDF2F0")]
	[UnityEngine.Bindings.NativeMethod(Name = "MaterialPropertyBlockScripting::Destroy", IsFreeFunction = true, IsThreadSafe = true)]
	private static extern void DestroyImpl(IntPtr mpb);

	[Token(Token = "0x6000545")]
	[Address(RVA = "0x2EDF200", Offset = "0x2EDD800", VA = "0x182EDF200")]
	[UnityEngine.Bindings.ThreadSafe]
	private void Clear(bool keepMemory)
	{
	}

	[Token(Token = "0x6000546")]
	[Address(RVA = "0x2EDF260", Offset = "0x2EDD860", VA = "0x182EDF260")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000547")]
	[Address(RVA = "0x2EDFAB0", Offset = "0x2EDE0B0", VA = "0x182EDFAB0")]
	private void SetFloatArray(int name, float[] values, int count)
	{
	}

	[Token(Token = "0x6000548")]
	[Address(RVA = "0x2EE0A90", Offset = "0x2EDF090", VA = "0x182EE0A90")]
	private void SetVectorArray(int name, Vector4[] values, int count)
	{
	}

	[Token(Token = "0x6000549")]
	[Address(RVA = "0x2EE01D0", Offset = "0x2EDE7D0", VA = "0x182EE01D0")]
	private void SetMatrixArray(int name, Matrix4x4[] values, int count)
	{
	}

	[Token(Token = "0x600054A")]
	[Address(RVA = "0x2EE0E90", Offset = "0x2EDF490", VA = "0x182EE0E90")]
	public MaterialPropertyBlock()
	{
	}

	[Token(Token = "0x600054B")]
	[Address(RVA = "0x2EDF3C0", Offset = "0x2EDD9C0", VA = "0x182EDF3C0", Slot = "1")]
	~MaterialPropertyBlock()
	{
	}

	[Token(Token = "0x600054C")]
	[Address(RVA = "0x2EDF330", Offset = "0x2EDD930", VA = "0x182EDF330")]
	private void Dispose()
	{
	}

	[Token(Token = "0x600054D")]
	[Address(RVA = "0x2EDFF00", Offset = "0x2EDE500", VA = "0x182EDFF00")]
	public void SetInt(string name, int value)
	{
	}

	[Token(Token = "0x600054E")]
	[Address(RVA = "0x2EDFFA0", Offset = "0x2EDE5A0", VA = "0x182EDFFA0")]
	public void SetInt(int nameID, int value)
	{
	}

	[Token(Token = "0x600054F")]
	[Address(RVA = "0x2EDFDB0", Offset = "0x2EDE3B0", VA = "0x182EDFDB0")]
	public void SetFloat(string name, float value)
	{
	}

	[Token(Token = "0x6000550")]
	[Address(RVA = "0x2EDFD40", Offset = "0x2EDE340", VA = "0x182EDFD40")]
	public void SetFloat(int nameID, float value)
	{
	}

	[Token(Token = "0x6000551")]
	[Address(RVA = "0x2EDFE90", Offset = "0x2EDE490", VA = "0x182EDFE90")]
	public void SetInteger(int nameID, int value)
	{
	}

	[Token(Token = "0x6000552")]
	[Address(RVA = "0x2EE0E00", Offset = "0x2EDF400", VA = "0x182EE0E00")]
	public void SetVector(string name, Vector4 value)
	{
	}

	[Token(Token = "0x6000553")]
	[Address(RVA = "0x2EE0D90", Offset = "0x2EDF390", VA = "0x182EE0D90")]
	public void SetVector(int nameID, Vector4 value)
	{
	}

	[Token(Token = "0x6000554")]
	[Address(RVA = "0x2EDF7E0", Offset = "0x2EDDDE0", VA = "0x182EDF7E0")]
	public void SetColor(string name, Color value)
	{
	}

	[Token(Token = "0x6000555")]
	[Address(RVA = "0x2EE0510", Offset = "0x2EDEB10", VA = "0x182EE0510")]
	public void SetMatrix(string name, Matrix4x4 value)
	{
	}

	[Token(Token = "0x6000556")]
	[Address(RVA = "0x2EE0480", Offset = "0x2EDEA80", VA = "0x182EE0480")]
	public void SetMatrix(int nameID, Matrix4x4 value)
	{
	}

	[Token(Token = "0x6000557")]
	[Address(RVA = "0x2EDF680", Offset = "0x2EDDC80", VA = "0x182EDF680")]
	public void SetBuffer(string name, ComputeBuffer value)
	{
	}

	[Token(Token = "0x6000558")]
	[Address(RVA = "0x2EDF600", Offset = "0x2EDDC00", VA = "0x182EDF600")]
	public void SetBuffer(int nameID, ComputeBuffer value)
	{
	}

	[Token(Token = "0x6000559")]
	[Address(RVA = "0x2EE0810", Offset = "0x2EDEE10", VA = "0x182EE0810")]
	public void SetTexture(string name, Texture value)
	{
	}

	[Token(Token = "0x600055A")]
	[Address(RVA = "0x2EE0730", Offset = "0x2EDED30", VA = "0x182EE0730")]
	public void SetTexture(int nameID, Texture value)
	{
	}

	[Token(Token = "0x600055B")]
	[Address(RVA = "0x2EE0600", Offset = "0x2EDEC00", VA = "0x182EE0600")]
	public void SetTexture(int nameID, RenderTexture value, RenderTextureSubElement element)
	{
	}

	[Token(Token = "0x600055C")]
	[Address(RVA = "0x2EDF8C0", Offset = "0x2EDDEC0", VA = "0x182EDF8C0")]
	public void SetConstantBuffer(int nameID, ComputeBuffer value, int offset, int size)
	{
	}

	[Token(Token = "0x600055D")]
	[Address(RVA = "0x2EDFCA0", Offset = "0x2EDE2A0", VA = "0x182EDFCA0")]
	public void SetFloatArray(string name, float[] values)
	{
	}

	[Token(Token = "0x600055E")]
	[Address(RVA = "0x2EE0C80", Offset = "0x2EDF280", VA = "0x182EE0C80")]
	public void SetVectorArray(string name, Vector4[] values)
	{
	}

	[Token(Token = "0x600055F")]
	[Address(RVA = "0x2EE0A60", Offset = "0x2EDF060", VA = "0x182EE0A60")]
	public void SetVectorArray(int nameID, Vector4[] values)
	{
	}

	[Token(Token = "0x6000560")]
	[Address(RVA = "0x2EE0180", Offset = "0x2EDE780", VA = "0x182EE0180")]
	public void SetMatrixArray(string name, Matrix4x4[] values)
	{
	}

	[Token(Token = "0x6000561")]
	[Address(RVA = "0x2EDF530", Offset = "0x2EDDB30", VA = "0x182EDF530")]
	public float GetFloat(string name)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000562")]
	[Address(RVA = "0x2EDF490", Offset = "0x2EDDA90", VA = "0x182EDF490")]
	private static extern float GetFloatImpl_Injected(IntPtr _unity_self, int name);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000563")]
	[Address(RVA = "0x2EDFE40", Offset = "0x2EDE440", VA = "0x182EDFE40")]
	private static extern void SetIntImpl_Injected(IntPtr _unity_self, int name, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000564")]
	[Address(RVA = "0x2EDFCF0", Offset = "0x2EDE2F0", VA = "0x182EDFCF0")]
	private static extern void SetFloatImpl_Injected(IntPtr _unity_self, int name, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000565")]
	[Address(RVA = "0x2EE0CD0", Offset = "0x2EDF2D0", VA = "0x182EE0CD0")]
	private static extern void SetVectorImpl_Injected(IntPtr _unity_self, int name, [In] ref Vector4 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000566")]
	[Address(RVA = "0x2EDF720", Offset = "0x2EDDD20", VA = "0x182EDF720")]
	private static extern void SetColorImpl_Injected(IntPtr _unity_self, int name, [In] ref Color value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000567")]
	[Address(RVA = "0x2EE03C0", Offset = "0x2EDE9C0", VA = "0x182EE03C0")]
	private static extern void SetMatrixImpl_Injected(IntPtr _unity_self, int name, [In] ref Matrix4x4 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000568")]
	[Address(RVA = "0x2EE06E0", Offset = "0x2EDECE0", VA = "0x182EE06E0")]
	private static extern void SetTextureImpl_Injected(IntPtr _unity_self, int name, IntPtr value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000569")]
	[Address(RVA = "0x2EE05B0", Offset = "0x2EDEBB0", VA = "0x182EE05B0")]
	private static extern void SetRenderTextureImpl_Injected(IntPtr _unity_self, int name, IntPtr value, RenderTextureSubElement element);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600056A")]
	[Address(RVA = "0x2EDF5B0", Offset = "0x2EDDBB0", VA = "0x182EDF5B0")]
	private static extern void SetBufferImpl_Injected(IntPtr _unity_self, int name, IntPtr value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600056B")]
	[Address(RVA = "0x2EDF870", Offset = "0x2EDDE70", VA = "0x182EDF870")]
	private static extern void SetConstantBufferImpl_Injected(IntPtr _unity_self, int name, IntPtr value, int offset, int size);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600056C")]
	[Address(RVA = "0x2EDF950", Offset = "0x2EDDF50", VA = "0x182EDF950")]
	private static extern void SetFloatArrayImpl_Injected(IntPtr _unity_self, int name, ref ManagedSpanWrapper values, int count);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600056D")]
	[Address(RVA = "0x2EE0900", Offset = "0x2EDEF00", VA = "0x182EE0900")]
	private static extern void SetVectorArrayImpl_Injected(IntPtr _unity_self, int name, ref ManagedSpanWrapper values, int count);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600056E")]
	[Address(RVA = "0x2EE0020", Offset = "0x2EDE620", VA = "0x182EE0020")]
	private static extern void SetMatrixArrayImpl_Injected(IntPtr _unity_self, int name, ref ManagedSpanWrapper values, int count);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600056F")]
	[Address(RVA = "0x2EDF1B0", Offset = "0x2EDD7B0", VA = "0x182EDF1B0")]
	private static extern void Clear_Injected(IntPtr _unity_self, bool keepMemory);
}
