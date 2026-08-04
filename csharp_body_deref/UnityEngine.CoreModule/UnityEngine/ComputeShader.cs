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

[Token(Token = "0x2000196")]
[UnityEngine.Scripting.UsedByNativeCode]
[UnityEngine.Bindings.NativeHeader("Runtime/Shaders/RayTracing/RayTracingAccelerationStructure.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/ShaderScriptBindings.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Shaders/ComputeShader.h")]
public sealed class ComputeShader : Object
{
	[Token(Token = "0x170001E1")]
	public LocalKeywordSpace keywordSpace
	{
		[Token(Token = "0x6000B73")]
		[Address(RVA = "0x4E04A60", Offset = "0x4E04A60", VA = "0x4E04A60")]
		get
		{
			return default(LocalKeywordSpace);
		}
	}

	[Token(Token = "0x6000B6F")]
	[Address(RVA = "0x4E046B0", Offset = "0x4E046B0", VA = "0x4E046B0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	[UnityEngine.Bindings.NativeMethod(Name = "ComputeShaderScripting::FindKernel", HasExplicitThis = true, IsFreeFunction = true, ThrowsException = true)]
	public int FindKernel(string name)
	{
		return default(int);
	}

	[Token(Token = "0x6000B70")]
	[Address(RVA = "0x4E04780", Offset = "0x4E04780", VA = "0x4E04780")]
	[UnityEngine.Bindings.FreeFunction(Name = "ComputeShaderScripting::SetValue<int>", HasExplicitThis = true)]
	public void SetInt(int nameID, int val)
	{
	}

	[Token(Token = "0x6000B71")]
	[Address(RVA = "0x4E04860", Offset = "0x4E04860", VA = "0x4E04860")]
	[UnityEngine.Bindings.FreeFunction(Name = "ComputeShaderScripting::SetConstantBuffer", HasExplicitThis = true)]
	private void SetConstantComputeBuffer(int nameID, [UnityEngine.Bindings.NotNull("ArgumentNullException")] ComputeBuffer buffer, int offset, int size)
	{
	}

	[Token(Token = "0x6000B72")]
	[Address(RVA = "0x4E04960", Offset = "0x4E04960", VA = "0x4E04960")]
	[UnityEngine.Bindings.NativeMethod(Name = "ComputeShaderScripting::GetKernelThreadGroupSizes", HasExplicitThis = true, IsFreeFunction = true, ThrowsException = true)]
	public void GetKernelThreadGroupSizes(int kernelIndex, out uint x, out uint y, out uint z)
	{
	}

	[Token(Token = "0x6000B74")]
	[Address(RVA = "0x4E04B40", Offset = "0x4E04B40", VA = "0x4E04B40")]
	[UnityEngine.Bindings.FreeFunction("ComputeShaderScripting::EnableKeyword", HasExplicitThis = true)]
	public void EnableKeyword(string keyword)
	{
	}

	[Token(Token = "0x6000B75")]
	[Address(RVA = "0x4E04C10", Offset = "0x4E04C10", VA = "0x4E04C10")]
	[UnityEngine.Bindings.FreeFunction("ComputeShaderScripting::DisableKeyword", HasExplicitThis = true)]
	public void DisableKeyword(string keyword)
	{
	}

	[Token(Token = "0x6000B76")]
	[Address(RVA = "0x4E04CE0", Offset = "0x4E04CE0", VA = "0x4E04CE0")]
	public void SetConstantBuffer(int nameID, ComputeBuffer buffer, int offset, int size)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000B77")]
	[Address(RVA = "0x4E04740", Offset = "0x4E04740", VA = "0x4E04740")]
	private static extern int FindKernel_Injected(IntPtr _unity_self, string name);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000B78")]
	[Address(RVA = "0x4E04820", Offset = "0x4E04820", VA = "0x4E04820")]
	private static extern void SetInt_Injected(IntPtr _unity_self, int nameID, int val);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000B79")]
	[Address(RVA = "0x4E04910", Offset = "0x4E04910", VA = "0x4E04910")]
	private static extern void SetConstantComputeBuffer_Injected(IntPtr _unity_self, int nameID, ComputeBuffer buffer, int offset, int size);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000B7A")]
	[Address(RVA = "0x4E04A10", Offset = "0x4E04A10", VA = "0x4E04A10")]
	private static extern void GetKernelThreadGroupSizes_Injected(IntPtr _unity_self, int kernelIndex, out uint x, out uint y, out uint z);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000B7B")]
	[Address(RVA = "0x4E04B00", Offset = "0x4E04B00", VA = "0x4E04B00")]
	private static extern void get_keywordSpace_Injected(IntPtr _unity_self, out LocalKeywordSpace ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000B7C")]
	[Address(RVA = "0x4E04BD0", Offset = "0x4E04BD0", VA = "0x4E04BD0")]
	private static extern void EnableKeyword_Injected(IntPtr _unity_self, string keyword);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000B7D")]
	[Address(RVA = "0x4E04CA0", Offset = "0x4E04CA0", VA = "0x4E04CA0")]
	private static extern void DisableKeyword_Injected(IntPtr _unity_self, string keyword);
}
