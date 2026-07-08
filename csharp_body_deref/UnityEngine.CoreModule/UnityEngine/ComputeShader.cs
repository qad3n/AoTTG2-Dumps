using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Rendering;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x2000193")]
[UnityEngine.Scripting.UsedByNativeCode]
[UnityEngine.Bindings.NativeHeader("Runtime/Shaders/RayTracing/RayTracingAccelerationStructure.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/ShaderScriptBindings.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Shaders/ComputeShader.h")]
public sealed class ComputeShader : Object
{
	[Token(Token = "0x170001E0")]
	public LocalKeywordSpace keywordSpace
	{
		[Token(Token = "0x6000B71")]
		[Address(RVA = "0x4ADD130", Offset = "0x4ADD130", VA = "0x4ADD130")]
		get
		{
			return default(LocalKeywordSpace);
		}
	}

	[Token(Token = "0x6000B6D")]
	[Address(RVA = "0x4ADCD80", Offset = "0x4ADCD80", VA = "0x4ADCD80")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	[UnityEngine.Bindings.NativeMethod(Name = "ComputeShaderScripting::FindKernel", HasExplicitThis = true, IsFreeFunction = true, ThrowsException = true)]
	public int FindKernel(string name)
	{
		return default(int);
	}

	[Token(Token = "0x6000B6E")]
	[Address(RVA = "0x4ADCE50", Offset = "0x4ADCE50", VA = "0x4ADCE50")]
	[UnityEngine.Bindings.FreeFunction(Name = "ComputeShaderScripting::SetValue<int>", HasExplicitThis = true)]
	public void SetInt(int nameID, int val)
	{
	}

	[Token(Token = "0x6000B6F")]
	[Address(RVA = "0x4ADCF30", Offset = "0x4ADCF30", VA = "0x4ADCF30")]
	[UnityEngine.Bindings.FreeFunction(Name = "ComputeShaderScripting::SetConstantBuffer", HasExplicitThis = true)]
	private void SetConstantComputeBuffer(int nameID, [UnityEngine.Bindings.NotNull("ArgumentNullException")] ComputeBuffer buffer, int offset, int size)
	{
	}

	[Token(Token = "0x6000B70")]
	[Address(RVA = "0x4ADD030", Offset = "0x4ADD030", VA = "0x4ADD030")]
	[UnityEngine.Bindings.NativeMethod(Name = "ComputeShaderScripting::GetKernelThreadGroupSizes", HasExplicitThis = true, IsFreeFunction = true, ThrowsException = true)]
	public void GetKernelThreadGroupSizes(int kernelIndex, out uint x, out uint y, out uint z)
	{
	}

	[Token(Token = "0x6000B72")]
	[Address(RVA = "0x4ADD210", Offset = "0x4ADD210", VA = "0x4ADD210")]
	[UnityEngine.Bindings.FreeFunction("ComputeShaderScripting::EnableKeyword", HasExplicitThis = true)]
	public void EnableKeyword(string keyword)
	{
	}

	[Token(Token = "0x6000B73")]
	[Address(RVA = "0x4ADD2E0", Offset = "0x4ADD2E0", VA = "0x4ADD2E0")]
	[UnityEngine.Bindings.FreeFunction("ComputeShaderScripting::DisableKeyword", HasExplicitThis = true)]
	public void DisableKeyword(string keyword)
	{
	}

	[Token(Token = "0x6000B74")]
	[Address(RVA = "0x4ADD3B0", Offset = "0x4ADD3B0", VA = "0x4ADD3B0")]
	public void SetConstantBuffer(int nameID, ComputeBuffer buffer, int offset, int size)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000B75")]
	[Address(RVA = "0x4ADCE10", Offset = "0x4ADCE10", VA = "0x4ADCE10")]
	private static extern int FindKernel_Injected(IntPtr _unity_self, string name);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000B76")]
	[Address(RVA = "0x4ADCEF0", Offset = "0x4ADCEF0", VA = "0x4ADCEF0")]
	private static extern void SetInt_Injected(IntPtr _unity_self, int nameID, int val);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000B77")]
	[Address(RVA = "0x4ADCFE0", Offset = "0x4ADCFE0", VA = "0x4ADCFE0")]
	private static extern void SetConstantComputeBuffer_Injected(IntPtr _unity_self, int nameID, ComputeBuffer buffer, int offset, int size);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000B78")]
	[Address(RVA = "0x4ADD0E0", Offset = "0x4ADD0E0", VA = "0x4ADD0E0")]
	private static extern void GetKernelThreadGroupSizes_Injected(IntPtr _unity_self, int kernelIndex, out uint x, out uint y, out uint z);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000B79")]
	[Address(RVA = "0x4ADD1D0", Offset = "0x4ADD1D0", VA = "0x4ADD1D0")]
	private static extern void get_keywordSpace_Injected(IntPtr _unity_self, out LocalKeywordSpace ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000B7A")]
	[Address(RVA = "0x4ADD2A0", Offset = "0x4ADD2A0", VA = "0x4ADD2A0")]
	private static extern void EnableKeyword_Injected(IntPtr _unity_self, string keyword);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000B7B")]
	[Address(RVA = "0x4ADD370", Offset = "0x4ADD370", VA = "0x4ADD370")]
	private static extern void DisableKeyword_Injected(IntPtr _unity_self, string keyword);
}
