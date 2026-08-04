// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Shader
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

namespace UnityEngine;

[Token(Token = "0x20000C2")]
[UnityEngine.Bindings.NativeHeader("Runtime/Shaders/ShaderNameRegistry.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Shaders/Keywords/KeywordSpaceScriptBindings.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Shaders/GpuPrograms/ShaderVariantCollection.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/ShaderScriptBindings.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/ShaderScriptBindings.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Misc/ResourceManager.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Shaders/ComputeShader.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Shaders/Shader.h")]
public sealed class Shader : Object
{
	[Token(Token = "0x170000E4")]
	public bool isSupported
	{
		[Token(Token = "0x6000453")]
		[Address(RVA = "0x4DC97A0", Offset = "0x4DC97A0", VA = "0x4DC97A0")]
		[UnityEngine.Bindings.NativeMethod("IsSupported")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000E5")]
	public LocalKeywordSpace keywordSpace
	{
		[Token(Token = "0x6000454")]
		[Address(RVA = "0x4DC9870", Offset = "0x4DC9870", VA = "0x4DC9870")]
		get
		{
			return default(LocalKeywordSpace);
		}
	}

	[Token(Token = "0x6000452")]
	[Address(RVA = "0x4DC9710", Offset = "0x4DC9710", VA = "0x4DC9710")]
	public static Shader Find(string name)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000455")]
	[Address(RVA = "0x4DC9960", Offset = "0x4DC9960", VA = "0x4DC9960")]
	[UnityEngine.Bindings.FreeFunction("ShaderScripting::EnableKeyword")]
	public static extern void EnableKeyword(string keyword);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000456")]
	[Address(RVA = "0x4DC9990", Offset = "0x4DC9990", VA = "0x4DC9990")]
	[UnityEngine.Bindings.FreeFunction("ShaderScripting::DisableKeyword")]
	public static extern void DisableKeyword(string keyword);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000457")]
	[Address(RVA = "0x4DC99C0", Offset = "0x4DC99C0", VA = "0x4DC99C0")]
	[UnityEngine.Bindings.FreeFunction("ShaderScripting::TagToID")]
	internal static extern int TagToID(string name);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000458")]
	[Address(RVA = "0x4DC7570", Offset = "0x4DC7570", VA = "0x4DC7570")]
	[UnityEngine.Bindings.FreeFunction(Name = "ShaderScripting::PropertyToID", IsThreadSafe = true)]
	public static extern int PropertyToID(string name);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000459")]
	[Address(RVA = "0x4DC99F0", Offset = "0x4DC99F0", VA = "0x4DC99F0")]
	[UnityEngine.Bindings.FreeFunction("ShaderScripting::SetGlobalFloat")]
	private static extern void SetGlobalFloatImpl(int name, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600045A")]
	[Address(RVA = "0x4DC9A40", Offset = "0x4DC9A40", VA = "0x4DC9A40")]
	[UnityEngine.Bindings.FreeFunction("ShaderScripting::SetGlobalConstantBuffer")]
	private static extern void SetGlobalConstantBufferImpl(int name, ComputeBuffer value, int offset, int size);

	[Token(Token = "0x600045B")]
	[Address(RVA = "0x4DC9A90", Offset = "0x4DC9A90", VA = "0x4DC9A90")]
	public static void SetGlobalFloat(int nameID, float value)
	{
	}

	[Token(Token = "0x600045C")]
	[Address(RVA = "0x4DC9AE0", Offset = "0x4DC9AE0", VA = "0x4DC9AE0")]
	public static void SetGlobalConstantBuffer(int nameID, ComputeBuffer value, int offset, int size)
	{
	}

	[Token(Token = "0x600045D")]
	[Address(RVA = "0x4DC9B30", Offset = "0x4DC9B30", VA = "0x4DC9B30")]
	private Shader()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600045E")]
	[Address(RVA = "0x4DC9840", Offset = "0x4DC9840", VA = "0x4DC9840")]
	private static extern bool get_isSupported_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600045F")]
	[Address(RVA = "0x4DC9920", Offset = "0x4DC9920", VA = "0x4DC9920")]
	private static extern void get_keywordSpace_Injected(IntPtr _unity_self, out LocalKeywordSpace ret);
}
