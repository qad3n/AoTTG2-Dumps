// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.ComputeShader
// Update status: CHANGED in this game update
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

[Token(Token = "0x20001D2")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/ShaderScriptBindings.h")]
[UnityEngine.Scripting.UsedByNativeCode]
[UnityEngine.Bindings.NativeHeader("Runtime/Shaders/ComputeShader.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/RayTracing/RayTracingAccelerationStructure.h")]
public sealed class ComputeShader : Object
{
	[Token(Token = "0x17000251")]
	public LocalKeywordSpace keywordSpace
	{
		[Token(Token = "0x6000F14")]
		[Address(RVA = "0x2F16750", Offset = "0x2F14D50", VA = "0x182F16750")]
		get
		{
			return default(LocalKeywordSpace);
		}
	}

	[Token(Token = "0x17000252")]
	public string[] shaderKeywords
	{
		[Token(Token = "0x6000F18")]
		[Address(RVA = "0x2F16620", Offset = "0x2F14C20", VA = "0x182F16620")]
		set
		{
		}
	}

	[Token(Token = "0x6000F09")]
	[Address(RVA = "0x2F15B00", Offset = "0x2F14100", VA = "0x182F15B00")]
	[UnityEngine.Bindings.NativeMethod(Name = "ComputeShaderScripting::FindKernel", HasExplicitThis = true, IsFreeFunction = true, ThrowsException = true)]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public int FindKernel(string name)
	{
		return default(int);
	}

	[Token(Token = "0x6000F0A")]
	[Address(RVA = "0x2F15E10", Offset = "0x2F14410", VA = "0x182F15E10")]
	[UnityEngine.Bindings.FreeFunction(Name = "ComputeShaderScripting::HasKernel", HasExplicitThis = true)]
	public bool HasKernel(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F0B")]
	[Address(RVA = "0x2F16530", Offset = "0x2F14B30", VA = "0x182F16530")]
	[UnityEngine.Bindings.FreeFunction(Name = "ComputeShaderScripting::SetValue<int>", HasExplicitThis = true)]
	public void SetInt(int nameID, int val)
	{
	}

	[Token(Token = "0x6000F0C")]
	[Address(RVA = "0x2F163C0", Offset = "0x2F149C0", VA = "0x182F163C0")]
	[UnityEngine.Bindings.FreeFunction(Name = "ComputeShaderScripting::SetArray<int>", HasExplicitThis = true)]
	private void SetIntArray(int nameID, int[] values)
	{
	}

	[Token(Token = "0x6000F0D")]
	[Address(RVA = "0x2F16030", Offset = "0x2F14630", VA = "0x182F16030")]
	[UnityEngine.Bindings.FreeFunction(Name = "ComputeShaderScripting::SetBuffer", HasExplicitThis = true)]
	private void Internal_SetBuffer(int kernelIndex, int nameID, [UnityEngine.Bindings.NotNull] ComputeBuffer buffer)
	{
	}

	[Token(Token = "0x6000F0E")]
	[Address(RVA = "0x2F16160", Offset = "0x2F14760", VA = "0x182F16160")]
	[UnityEngine.Bindings.FreeFunction(Name = "ComputeShaderScripting::SetBuffer", HasExplicitThis = true)]
	private void Internal_SetGraphicsBuffer(int kernelIndex, int nameID, [UnityEngine.Bindings.NotNull] GraphicsBuffer buffer)
	{
	}

	[Token(Token = "0x6000F0F")]
	[Address(RVA = "0x2F16030", Offset = "0x2F14630", VA = "0x182F16030")]
	public void SetBuffer(int kernelIndex, int nameID, ComputeBuffer buffer)
	{
	}

	[Token(Token = "0x6000F10")]
	[Address(RVA = "0x2F16160", Offset = "0x2F14760", VA = "0x182F16160")]
	public void SetBuffer(int kernelIndex, int nameID, GraphicsBuffer buffer)
	{
	}

	[Token(Token = "0x6000F11")]
	[Address(RVA = "0x2F16240", Offset = "0x2F14840", VA = "0x182F16240")]
	[UnityEngine.Bindings.FreeFunction(Name = "ComputeShaderScripting::SetConstantBuffer", HasExplicitThis = true)]
	private void SetConstantComputeBuffer(int nameID, [UnityEngine.Bindings.NotNull] ComputeBuffer buffer, int offset, int size)
	{
	}

	[Token(Token = "0x6000F12")]
	[Address(RVA = "0x2F15D20", Offset = "0x2F14320", VA = "0x182F15D20")]
	[UnityEngine.Bindings.NativeMethod(Name = "ComputeShaderScripting::GetKernelThreadGroupSizes", HasExplicitThis = true, IsFreeFunction = true, ThrowsException = true)]
	public void GetKernelThreadGroupSizes(int kernelIndex, out uint x, out uint y, out uint z)
	{
	}

	[Token(Token = "0x6000F13")]
	[Address(RVA = "0x2F15810", Offset = "0x2F13E10", VA = "0x182F15810")]
	[UnityEngine.Bindings.NativeName("DispatchComputeShader")]
	public void Dispatch(int kernelIndex, int threadGroupsX, int threadGroupsY, int threadGroupsZ)
	{
	}

	[Token(Token = "0x6000F15")]
	[Address(RVA = "0x2F15900", Offset = "0x2F13F00", VA = "0x182F15900")]
	[UnityEngine.Bindings.FreeFunction("ComputeShaderScripting::EnableKeyword", HasExplicitThis = true)]
	public void EnableKeyword(string keyword)
	{
	}

	[Token(Token = "0x6000F16")]
	[Address(RVA = "0x2F15610", Offset = "0x2F13C10", VA = "0x182F15610")]
	[UnityEngine.Bindings.FreeFunction("ComputeShaderScripting::DisableKeyword", HasExplicitThis = true)]
	public void DisableKeyword(string keyword)
	{
	}

	[Token(Token = "0x6000F17")]
	[Address(RVA = "0x2F16620", Offset = "0x2F14C20", VA = "0x182F16620")]
	[UnityEngine.Bindings.FreeFunction("ComputeShaderScripting::SetShaderKeywords", HasExplicitThis = true)]
	private void SetShaderKeywords(string[] names)
	{
	}

	[Token(Token = "0x6000F19")]
	[Address(RVA = "0x2F166B0", Offset = "0x2F14CB0", VA = "0x182F166B0")]
	private ComputeShader()
	{
	}

	[Token(Token = "0x6000F1A")]
	[Address(RVA = "0x2F163C0", Offset = "0x2F149C0", VA = "0x182F163C0")]
	public void SetInts(int nameID, params int[] values)
	{
	}

	[Token(Token = "0x6000F1B")]
	[Address(RVA = "0x2F16240", Offset = "0x2F14840", VA = "0x182F16240")]
	public void SetConstantBuffer(int nameID, ComputeBuffer buffer, int offset, int size)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F1C")]
	[Address(RVA = "0x2F15AB0", Offset = "0x2F140B0", VA = "0x182F15AB0")]
	private static extern int FindKernel_Injected(IntPtr _unity_self, ref ManagedSpanWrapper name);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F1D")]
	[Address(RVA = "0x2F15DC0", Offset = "0x2F143C0", VA = "0x182F15DC0")]
	private static extern bool HasKernel_Injected(IntPtr _unity_self, ref ManagedSpanWrapper name);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F1E")]
	[Address(RVA = "0x2F164E0", Offset = "0x2F14AE0", VA = "0x182F164E0")]
	private static extern void SetInt_Injected(IntPtr _unity_self, int nameID, int val);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F1F")]
	[Address(RVA = "0x2F16370", Offset = "0x2F14970", VA = "0x182F16370")]
	private static extern void SetIntArray_Injected(IntPtr _unity_self, int nameID, ref ManagedSpanWrapper values);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F20")]
	[Address(RVA = "0x2F15FE0", Offset = "0x2F145E0", VA = "0x182F15FE0")]
	private static extern void Internal_SetBuffer_Injected(IntPtr _unity_self, int kernelIndex, int nameID, IntPtr buffer);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F21")]
	[Address(RVA = "0x2F16110", Offset = "0x2F14710", VA = "0x182F16110")]
	private static extern void Internal_SetGraphicsBuffer_Injected(IntPtr _unity_self, int kernelIndex, int nameID, IntPtr buffer);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F22")]
	[Address(RVA = "0x2F16320", Offset = "0x2F14920", VA = "0x182F16320")]
	private static extern void SetConstantComputeBuffer_Injected(IntPtr _unity_self, int nameID, IntPtr buffer, int offset, int size);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F23")]
	[Address(RVA = "0x2F15CD0", Offset = "0x2F142D0", VA = "0x182F15CD0")]
	private static extern void GetKernelThreadGroupSizes_Injected(IntPtr _unity_self, int kernelIndex, out uint x, out uint y, out uint z);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F24")]
	[Address(RVA = "0x2F157C0", Offset = "0x2F13DC0", VA = "0x182F157C0")]
	private static extern void Dispatch_Injected(IntPtr _unity_self, int kernelIndex, int threadGroupsX, int threadGroupsY, int threadGroupsZ);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F25")]
	[Address(RVA = "0x2F16700", Offset = "0x2F14D00", VA = "0x182F16700")]
	private static extern void get_keywordSpace_Injected(IntPtr _unity_self, out LocalKeywordSpace ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F26")]
	[Address(RVA = "0x2F158B0", Offset = "0x2F13EB0", VA = "0x182F158B0")]
	private static extern void EnableKeyword_Injected(IntPtr _unity_self, ref ManagedSpanWrapper keyword);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F27")]
	[Address(RVA = "0x2F155C0", Offset = "0x2F13BC0", VA = "0x182F155C0")]
	private static extern void DisableKeyword_Injected(IntPtr _unity_self, ref ManagedSpanWrapper keyword);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F28")]
	[Address(RVA = "0x2F165D0", Offset = "0x2F14BD0", VA = "0x182F165D0")]
	private static extern void SetShaderKeywords_Injected(IntPtr _unity_self, string[] names);
}
