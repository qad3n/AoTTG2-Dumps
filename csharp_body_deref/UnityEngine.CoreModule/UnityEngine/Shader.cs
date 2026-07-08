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
	[Token(Token = "0x170000E3")]
	public bool isSupported
	{
		[Token(Token = "0x6000451")]
		[Address(RVA = "0x4AA1E70", Offset = "0x4AA1E70", VA = "0x4AA1E70")]
		[UnityEngine.Bindings.NativeMethod("IsSupported")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000E4")]
	public LocalKeywordSpace keywordSpace
	{
		[Token(Token = "0x6000452")]
		[Address(RVA = "0x4AA1F40", Offset = "0x4AA1F40", VA = "0x4AA1F40")]
		get
		{
			return default(LocalKeywordSpace);
		}
	}

	[Token(Token = "0x6000450")]
	[Address(RVA = "0x4AA1DE0", Offset = "0x4AA1DE0", VA = "0x4AA1DE0")]
	public static Shader Find(string name)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000453")]
	[Address(RVA = "0x4AA2030", Offset = "0x4AA2030", VA = "0x4AA2030")]
	[UnityEngine.Bindings.FreeFunction("ShaderScripting::EnableKeyword")]
	public static extern void EnableKeyword(string keyword);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000454")]
	[Address(RVA = "0x4AA2060", Offset = "0x4AA2060", VA = "0x4AA2060")]
	[UnityEngine.Bindings.FreeFunction("ShaderScripting::DisableKeyword")]
	public static extern void DisableKeyword(string keyword);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000455")]
	[Address(RVA = "0x4AA2090", Offset = "0x4AA2090", VA = "0x4AA2090")]
	[UnityEngine.Bindings.FreeFunction("ShaderScripting::TagToID")]
	internal static extern int TagToID(string name);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000456")]
	[Address(RVA = "0x4A9FD50", Offset = "0x4A9FD50", VA = "0x4A9FD50")]
	[UnityEngine.Bindings.FreeFunction(Name = "ShaderScripting::PropertyToID", IsThreadSafe = true)]
	public static extern int PropertyToID(string name);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000457")]
	[Address(RVA = "0x4AA20C0", Offset = "0x4AA20C0", VA = "0x4AA20C0")]
	[UnityEngine.Bindings.FreeFunction("ShaderScripting::SetGlobalFloat")]
	private static extern void SetGlobalFloatImpl(int name, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000458")]
	[Address(RVA = "0x4AA2110", Offset = "0x4AA2110", VA = "0x4AA2110")]
	[UnityEngine.Bindings.FreeFunction("ShaderScripting::SetGlobalConstantBuffer")]
	private static extern void SetGlobalConstantBufferImpl(int name, ComputeBuffer value, int offset, int size);

	[Token(Token = "0x6000459")]
	[Address(RVA = "0x4AA2160", Offset = "0x4AA2160", VA = "0x4AA2160")]
	public static void SetGlobalFloat(int nameID, float value)
	{
	}

	[Token(Token = "0x600045A")]
	[Address(RVA = "0x4AA21B0", Offset = "0x4AA21B0", VA = "0x4AA21B0")]
	public static void SetGlobalConstantBuffer(int nameID, ComputeBuffer value, int offset, int size)
	{
	}

	[Token(Token = "0x600045B")]
	[Address(RVA = "0x4AA2200", Offset = "0x4AA2200", VA = "0x4AA2200")]
	private Shader()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600045C")]
	[Address(RVA = "0x4AA1F10", Offset = "0x4AA1F10", VA = "0x4AA1F10")]
	private static extern bool get_isSupported_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600045D")]
	[Address(RVA = "0x4AA1FF0", Offset = "0x4AA1FF0", VA = "0x4AA1FF0")]
	private static extern void get_keywordSpace_Injected(IntPtr _unity_self, out LocalKeywordSpace ret);
}
