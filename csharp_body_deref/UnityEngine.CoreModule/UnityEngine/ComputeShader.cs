// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.ComputeShader
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Rendering;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x20001D3")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/ShaderScriptBindings.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/RayTracing/RayTracingAccelerationStructure.h")]
[UnityEngine.Scripting.UsedByNativeCode]
[UnityEngine.Bindings.NativeHeader("Runtime/Shaders/ComputeShader.h")]
public sealed class ComputeShader : Object
{
	[Token(Token = "0x17000256")]
	public LocalKeywordSpace keywordSpace
	{
		[Token(Token = "0x6000F26")]
		[Address(RVA = "0x69256A0", Offset = "0x69246A0", VA = "0x69256A0")]
		get
		{
			return default(LocalKeywordSpace);
		}
	}

	[Token(Token = "0x17000257")]
	public string[] shaderKeywords
	{
		[Token(Token = "0x6000F2A")]
		[Address(RVA = "0x6925C10", Offset = "0x6924C10", VA = "0x6925C10")]
		set
		{
		}
	}

	[Token(Token = "0x6000F1B")]
	[Address(RVA = "0x6924AD0", Offset = "0x6923AD0", VA = "0x6924AD0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	[UnityEngine.Bindings.NativeMethod(Name = "ComputeShaderScripting::FindKernel", HasExplicitThis = true, IsFreeFunction = true, ThrowsException = true)]
	public int FindKernel(string name)
	{
		return default(int);
	}

	[Token(Token = "0x6000F1C")]
	[Address(RVA = "0x6924CC0", Offset = "0x6923CC0", VA = "0x6924CC0")]
	[UnityEngine.Bindings.FreeFunction(Name = "ComputeShaderScripting::HasKernel", HasExplicitThis = true)]
	public bool HasKernel(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F1D")]
	[Address(RVA = "0x6924EB0", Offset = "0x6923EB0", VA = "0x6924EB0")]
	[UnityEngine.Bindings.FreeFunction(Name = "ComputeShaderScripting::SetValue<int>", HasExplicitThis = true)]
	public void SetInt(int nameID, int val)
	{
	}

	[Token(Token = "0x6000F1E")]
	[Address(RVA = "0x6924F80", Offset = "0x6923F80", VA = "0x6924F80")]
	[UnityEngine.Bindings.FreeFunction(Name = "ComputeShaderScripting::SetArray<int>", HasExplicitThis = true)]
	private void SetIntArray(int nameID, int[] values)
	{
	}

	[Token(Token = "0x6000F1F")]
	[Address(RVA = "0x69250D0", Offset = "0x69240D0", VA = "0x69250D0")]
	[UnityEngine.Bindings.FreeFunction(Name = "ComputeShaderScripting::SetBuffer", HasExplicitThis = true)]
	private void Internal_SetBuffer(int kernelIndex, int nameID, [UnityEngine.Bindings.NotNull] ComputeBuffer buffer)
	{
	}

	[Token(Token = "0x6000F20")]
	[Address(RVA = "0x6925210", Offset = "0x6924210", VA = "0x6925210")]
	[UnityEngine.Bindings.FreeFunction(Name = "ComputeShaderScripting::SetBuffer", HasExplicitThis = true)]
	private void Internal_SetGraphicsBuffer(int kernelIndex, int nameID, [UnityEngine.Bindings.NotNull] GraphicsBuffer buffer)
	{
	}

	[Token(Token = "0x6000F21")]
	[Address(RVA = "0x6925350", Offset = "0x6924350", VA = "0x6925350")]
	public void SetBuffer(int kernelIndex, int nameID, ComputeBuffer buffer)
	{
	}

	[Token(Token = "0x6000F22")]
	[Address(RVA = "0x6925360", Offset = "0x6924360", VA = "0x6925360")]
	public void SetBuffer(int kernelIndex, int nameID, GraphicsBuffer buffer)
	{
	}

	[Token(Token = "0x6000F23")]
	[Address(RVA = "0x6925370", Offset = "0x6924370", VA = "0x6925370")]
	[UnityEngine.Bindings.FreeFunction(Name = "ComputeShaderScripting::SetConstantBuffer", HasExplicitThis = true)]
	private void SetConstantComputeBuffer(int nameID, [UnityEngine.Bindings.NotNull] ComputeBuffer buffer, int offset, int size)
	{
	}

	[Token(Token = "0x6000F24")]
	[Address(RVA = "0x69254C0", Offset = "0x69244C0", VA = "0x69254C0")]
	[UnityEngine.Bindings.NativeMethod(Name = "ComputeShaderScripting::GetKernelThreadGroupSizes", HasExplicitThis = true, IsFreeFunction = true, ThrowsException = true)]
	public void GetKernelThreadGroupSizes(int kernelIndex, out uint x, out uint y, out uint z)
	{
	}

	[Token(Token = "0x6000F25")]
	[Address(RVA = "0x69255B0", Offset = "0x69245B0", VA = "0x69255B0")]
	[UnityEngine.Bindings.NativeName("DispatchComputeShader")]
	public void Dispatch(int kernelIndex, int threadGroupsX, int threadGroupsY, int threadGroupsZ)
	{
	}

	[Token(Token = "0x6000F27")]
	[Address(RVA = "0x6925770", Offset = "0x6924770", VA = "0x6925770")]
	[UnityEngine.Bindings.FreeFunction("ComputeShaderScripting::EnableKeyword", HasExplicitThis = true)]
	public void EnableKeyword(string keyword)
	{
	}

	[Token(Token = "0x6000F28")]
	[Address(RVA = "0x6925960", Offset = "0x6924960", VA = "0x6925960")]
	[UnityEngine.Bindings.FreeFunction("ComputeShaderScripting::DisableKeyword", HasExplicitThis = true)]
	public void DisableKeyword(string keyword)
	{
	}

	[Token(Token = "0x6000F29")]
	[Address(RVA = "0x6925B50", Offset = "0x6924B50", VA = "0x6925B50")]
	[UnityEngine.Bindings.FreeFunction("ComputeShaderScripting::SetShaderKeywords", HasExplicitThis = true)]
	private void SetShaderKeywords(string[] names)
	{
	}

	[Token(Token = "0x6000F2B")]
	[Address(RVA = "0x6925C90", Offset = "0x6924C90", VA = "0x6925C90")]
	private ComputeShader()
	{
	}

	[Token(Token = "0x6000F2C")]
	[Address(RVA = "0x6925D00", Offset = "0x6924D00", VA = "0x6925D00")]
	public void SetInts(int nameID, params int[] values)
	{
	}

	[Token(Token = "0x6000F2D")]
	[Address(RVA = "0x6925D10", Offset = "0x6924D10", VA = "0x6925D10")]
	public void SetConstantBuffer(int nameID, ComputeBuffer buffer, int offset, int size)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F2E")]
	[Address(RVA = "0x6924C80", Offset = "0x6923C80", VA = "0x6924C80")]
	private static extern int FindKernel_Injected(IntPtr _unity_self, ref ManagedSpanWrapper name);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F2F")]
	[Address(RVA = "0x6924E70", Offset = "0x6923E70", VA = "0x6924E70")]
	private static extern bool HasKernel_Injected(IntPtr _unity_self, ref ManagedSpanWrapper name);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F30")]
	[Address(RVA = "0x6924F40", Offset = "0x6923F40", VA = "0x6924F40")]
	private static extern void SetInt_Injected(IntPtr _unity_self, int nameID, int val);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F31")]
	[Address(RVA = "0x6925090", Offset = "0x6924090", VA = "0x6925090")]
	private static extern void SetIntArray_Injected(IntPtr _unity_self, int nameID, ref ManagedSpanWrapper values);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F32")]
	[Address(RVA = "0x69251C0", Offset = "0x69241C0", VA = "0x69251C0")]
	private static extern void Internal_SetBuffer_Injected(IntPtr _unity_self, int kernelIndex, int nameID, IntPtr buffer);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F33")]
	[Address(RVA = "0x6925300", Offset = "0x6924300", VA = "0x6925300")]
	private static extern void Internal_SetGraphicsBuffer_Injected(IntPtr _unity_self, int kernelIndex, int nameID, IntPtr buffer);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F34")]
	[Address(RVA = "0x6925470", Offset = "0x6924470", VA = "0x6925470")]
	private static extern void SetConstantComputeBuffer_Injected(IntPtr _unity_self, int nameID, IntPtr buffer, int offset, int size);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F35")]
	[Address(RVA = "0x6925560", Offset = "0x6924560", VA = "0x6925560")]
	private static extern void GetKernelThreadGroupSizes_Injected(IntPtr _unity_self, int kernelIndex, out uint x, out uint y, out uint z);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F36")]
	[Address(RVA = "0x6925650", Offset = "0x6924650", VA = "0x6925650")]
	private static extern void Dispatch_Injected(IntPtr _unity_self, int kernelIndex, int threadGroupsX, int threadGroupsY, int threadGroupsZ);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F37")]
	[Address(RVA = "0x6925730", Offset = "0x6924730", VA = "0x6925730")]
	private static extern void get_keywordSpace_Injected(IntPtr _unity_self, out LocalKeywordSpace ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F38")]
	[Address(RVA = "0x6925920", Offset = "0x6924920", VA = "0x6925920")]
	private static extern void EnableKeyword_Injected(IntPtr _unity_self, ref ManagedSpanWrapper keyword);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F39")]
	[Address(RVA = "0x6925B10", Offset = "0x6924B10", VA = "0x6925B10")]
	private static extern void DisableKeyword_Injected(IntPtr _unity_self, ref ManagedSpanWrapper keyword);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F3A")]
	[Address(RVA = "0x6925BD0", Offset = "0x6924BD0", VA = "0x6925BD0")]
	private static extern void SetShaderKeywords_Injected(IntPtr _unity_self, string[] names);
}
