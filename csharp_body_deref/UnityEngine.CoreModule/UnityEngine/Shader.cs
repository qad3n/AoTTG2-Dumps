// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Shader
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

[Token(Token = "0x20000E3")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/ShaderScriptBindings.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/ShaderScriptBindings.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Shaders/Keywords/KeywordSpaceScriptBindings.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Shaders/GpuPrograms/ShaderVariantCollection.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Shaders/ShaderNameRegistry.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Shaders/ComputeShader.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Shaders/Shader.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Misc/ResourceManager.h")]
public sealed class Shader : Object
{
	[Token(Token = "0x17000118")]
	public bool isSupported
	{
		[Token(Token = "0x60005E2")]
		[Address(RVA = "0x2EF7C10", Offset = "0x2EF6210", VA = "0x182EF7C10")]
		[UnityEngine.Bindings.NativeMethod("IsSupported")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000119")]
	public static string globalRenderPipeline
	{
		[Token(Token = "0x60005E3")]
		[Address(RVA = "0x2EF7B20", Offset = "0x2EF6120", VA = "0x182EF7B20")]
		get
		{
			return null;
		}
		[Token(Token = "0x60005E4")]
		[Address(RVA = "0x2EF7E70", Offset = "0x2EF6470", VA = "0x182EF7E70")]
		set
		{
		}
	}

	[Token(Token = "0x1700011A")]
	public LocalKeywordSpace keywordSpace
	{
		[Token(Token = "0x60005E5")]
		[Address(RVA = "0x2EF7CE0", Offset = "0x2EF62E0", VA = "0x182EF7CE0")]
		get
		{
			return default(LocalKeywordSpace);
		}
	}

	[Token(Token = "0x1700011B")]
	public int passCount
	{
		[Token(Token = "0x60005EB")]
		[Address(RVA = "0x2EF7DB0", Offset = "0x2EF63B0", VA = "0x182EF7DB0")]
		[UnityEngine.Bindings.FreeFunction(Name = "ShaderScripting::GetPassCount", HasExplicitThis = true)]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60005E1")]
	[Address(RVA = "0x2EF6C40", Offset = "0x2EF5240", VA = "0x182EF6C40")]
	public static Shader Find(string name)
	{
		return null;
	}

	[Token(Token = "0x60005E6")]
	[Address(RVA = "0x2EF6950", Offset = "0x2EF4F50", VA = "0x182EF6950")]
	[UnityEngine.Bindings.FreeFunction("ShaderScripting::EnableKeyword")]
	public static void EnableKeyword(string keyword)
	{
	}

	[Token(Token = "0x60005E7")]
	[Address(RVA = "0x2EF6790", Offset = "0x2EF4D90", VA = "0x182EF6790")]
	[UnityEngine.Bindings.FreeFunction("ShaderScripting::DisableKeyword")]
	public static void DisableKeyword(string keyword)
	{
	}

	[Token(Token = "0x60005E8")]
	[Address(RVA = "0x2EF7900", Offset = "0x2EF5F00", VA = "0x182EF7900")]
	[UnityEngine.Bindings.FreeFunction("ShaderScripting::TagToID")]
	internal static int TagToID(string name)
	{
		return default(int);
	}

	[Token(Token = "0x60005E9")]
	[Address(RVA = "0x2EF72D0", Offset = "0x2EF58D0", VA = "0x182EF72D0")]
	[UnityEngine.Bindings.FreeFunction("ShaderScripting::IDToTag")]
	internal static string IDToTag(int name)
	{
		return null;
	}

	[Token(Token = "0x60005EA")]
	[Address(RVA = "0x2EF74B0", Offset = "0x2EF5AB0", VA = "0x182EF74B0")]
	[UnityEngine.Bindings.FreeFunction(Name = "ShaderScripting::PropertyToID", IsThreadSafe = true)]
	public static int PropertyToID(string name)
	{
		return default(int);
	}

	[Token(Token = "0x60005EC")]
	[Address(RVA = "0x2EF6AD0", Offset = "0x2EF50D0", VA = "0x182EF6AD0")]
	public ShaderTagId FindPassTagValue(int passIndex, ShaderTagId tagName)
	{
		return default(ShaderTagId);
	}

	[Token(Token = "0x60005ED")]
	[Address(RVA = "0x2EF73D0", Offset = "0x2EF59D0", VA = "0x182EF73D0")]
	[UnityEngine.Bindings.FreeFunction(Name = "ShaderScripting::FindPassTagValue", HasExplicitThis = true)]
	private int Internal_FindPassTagValue(int passIndex, int tagName)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005EE")]
	[Address(RVA = "0x2EF7730", Offset = "0x2EF5D30", VA = "0x182EF7730")]
	[UnityEngine.Bindings.FreeFunction("ShaderScripting::SetGlobalFloat")]
	private static extern void SetGlobalFloatImpl(int name, float value);

	[Token(Token = "0x60005EF")]
	[Address(RVA = "0x2EF7880", Offset = "0x2EF5E80", VA = "0x182EF7880")]
	[UnityEngine.Bindings.FreeFunction("ShaderScripting::SetGlobalVector")]
	private static void SetGlobalVectorImpl(int name, Vector4 value)
	{
	}

	[Token(Token = "0x60005F0")]
	[Address(RVA = "0x2EF77C0", Offset = "0x2EF5DC0", VA = "0x182EF77C0")]
	[UnityEngine.Bindings.FreeFunction("ShaderScripting::SetGlobalTexture")]
	private static void SetGlobalTextureImpl(int name, Texture value)
	{
	}

	[Token(Token = "0x60005F1")]
	[Address(RVA = "0x2EF76D0", Offset = "0x2EF5CD0", VA = "0x182EF76D0")]
	[UnityEngine.Bindings.FreeFunction("ShaderScripting::SetGlobalConstantBuffer")]
	private static void SetGlobalConstantBufferImpl(int name, ComputeBuffer value, int offset, int size)
	{
	}

	[Token(Token = "0x60005F2")]
	[Address(RVA = "0x2EF7730", Offset = "0x2EF5D30", VA = "0x182EF7730")]
	public static void SetGlobalFloat(int nameID, float value)
	{
	}

	[Token(Token = "0x60005F3")]
	[Address(RVA = "0x2EF7640", Offset = "0x2EF5C40", VA = "0x182EF7640")]
	public static void SetGlobalVector(int nameID, Vector4 value)
	{
	}

	[Token(Token = "0x60005F4")]
	[Address(RVA = "0x2EF7640", Offset = "0x2EF5C40", VA = "0x182EF7640")]
	public static void SetGlobalColor(int nameID, Color value)
	{
	}

	[Token(Token = "0x60005F5")]
	[Address(RVA = "0x2EF77C0", Offset = "0x2EF5DC0", VA = "0x182EF77C0")]
	public static void SetGlobalTexture(int nameID, Texture value)
	{
	}

	[Token(Token = "0x60005F6")]
	[Address(RVA = "0x2EF76D0", Offset = "0x2EF5CD0", VA = "0x182EF76D0")]
	public static void SetGlobalConstantBuffer(int nameID, ComputeBuffer value, int offset, int size)
	{
	}

	[Token(Token = "0x60005F7")]
	[Address(RVA = "0x2EF7A90", Offset = "0x2EF6090", VA = "0x182EF7A90")]
	private Shader()
	{
	}

	[Token(Token = "0x60005F8")]
	[Address(RVA = "0x2EF6F70", Offset = "0x2EF5570", VA = "0x182EF6F70")]
	[UnityEngine.Bindings.FreeFunction("ShaderScripting::GetPropertyName")]
	private static string GetPropertyName([UnityEngine.Bindings.NotNull] Shader shader, int propertyIndex)
	{
		return null;
	}

	[Token(Token = "0x60005F9")]
	[Address(RVA = "0x2EF7120", Offset = "0x2EF5720", VA = "0x182EF7120")]
	[UnityEngine.Bindings.FreeFunction("ShaderScripting::GetPropertyType")]
	private static ShaderPropertyType GetPropertyType([UnityEngine.Bindings.NotNull] Shader shader, int propertyIndex)
	{
		return default(ShaderPropertyType);
	}

	[Token(Token = "0x60005FA")]
	[Address(RVA = "0x2EF6E70", Offset = "0x2EF5470", VA = "0x182EF6E70")]
	[UnityEngine.Bindings.FreeFunction("ShaderScripting::GetPropertyFlags")]
	private static ShaderPropertyFlags GetPropertyFlags([UnityEngine.Bindings.NotNull] Shader shader, int propertyIndex)
	{
		return default(ShaderPropertyFlags);
	}

	[Token(Token = "0x60005FB")]
	[Address(RVA = "0x2EF6670", Offset = "0x2EF4C70", VA = "0x182EF6670")]
	private static void CheckPropertyIndex(Shader s, int propertyIndex)
	{
	}

	[Token(Token = "0x60005FC")]
	[Address(RVA = "0x2EF6CF0", Offset = "0x2EF52F0", VA = "0x182EF6CF0")]
	public int GetPropertyCount()
	{
		return default(int);
	}

	[Token(Token = "0x60005FD")]
	[Address(RVA = "0x2EF70B0", Offset = "0x2EF56B0", VA = "0x182EF70B0")]
	public string GetPropertyName(int propertyIndex)
	{
		return null;
	}

	[Token(Token = "0x60005FE")]
	[Address(RVA = "0x2EF71D0", Offset = "0x2EF57D0", VA = "0x182EF71D0")]
	public ShaderPropertyType GetPropertyType(int propertyIndex)
	{
		return default(ShaderPropertyType);
	}

	[Token(Token = "0x60005FF")]
	[Address(RVA = "0x2EF6DB0", Offset = "0x2EF53B0", VA = "0x182EF6DB0")]
	public ShaderPropertyFlags GetPropertyFlags(int propertyIndex)
	{
		return default(ShaderPropertyFlags);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000600")]
	[Address(RVA = "0x2EF7BD0", Offset = "0x2EF61D0", VA = "0x182EF7BD0")]
	private static extern bool get_isSupported_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000601")]
	[Address(RVA = "0x2EF7AE0", Offset = "0x2EF60E0", VA = "0x182EF7AE0")]
	private static extern void get_globalRenderPipeline_Injected(out ManagedSpanWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000602")]
	[Address(RVA = "0x2EF7E30", Offset = "0x2EF6430", VA = "0x182EF7E30")]
	private static extern void set_globalRenderPipeline_Injected(ref ManagedSpanWrapper value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000603")]
	[Address(RVA = "0x2EF7C90", Offset = "0x2EF6290", VA = "0x182EF7C90")]
	private static extern void get_keywordSpace_Injected(IntPtr _unity_self, out LocalKeywordSpace ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000604")]
	[Address(RVA = "0x2EF6910", Offset = "0x2EF4F10", VA = "0x182EF6910")]
	private static extern void EnableKeyword_Injected(ref ManagedSpanWrapper keyword);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000605")]
	[Address(RVA = "0x2EF6750", Offset = "0x2EF4D50", VA = "0x182EF6750")]
	private static extern void DisableKeyword_Injected(ref ManagedSpanWrapper keyword);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000606")]
	[Address(RVA = "0x2EF78C0", Offset = "0x2EF5EC0", VA = "0x182EF78C0")]
	private static extern int TagToID_Injected(ref ManagedSpanWrapper name);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000607")]
	[Address(RVA = "0x2EF7290", Offset = "0x2EF5890", VA = "0x182EF7290")]
	private static extern void IDToTag_Injected(int name, out ManagedSpanWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000608")]
	[Address(RVA = "0x2EF7470", Offset = "0x2EF5A70", VA = "0x182EF7470")]
	private static extern int PropertyToID_Injected(ref ManagedSpanWrapper name);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000609")]
	[Address(RVA = "0x2EF7D70", Offset = "0x2EF6370", VA = "0x182EF7D70")]
	private static extern int get_passCount_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600060A")]
	[Address(RVA = "0x2EF7380", Offset = "0x2EF5980", VA = "0x182EF7380")]
	private static extern int Internal_FindPassTagValue_Injected(IntPtr _unity_self, int passIndex, int tagName);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600060B")]
	[Address(RVA = "0x2EF7840", Offset = "0x2EF5E40", VA = "0x182EF7840")]
	private static extern void SetGlobalVectorImpl_Injected(int name, [In] ref Vector4 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600060C")]
	[Address(RVA = "0x2EF7780", Offset = "0x2EF5D80", VA = "0x182EF7780")]
	private static extern void SetGlobalTextureImpl_Injected(int name, IntPtr value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600060D")]
	[Address(RVA = "0x2EF7680", Offset = "0x2EF5C80", VA = "0x182EF7680")]
	private static extern void SetGlobalConstantBufferImpl_Injected(int name, IntPtr value, int offset, int size);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600060E")]
	[Address(RVA = "0x2EF6F20", Offset = "0x2EF5520", VA = "0x182EF6F20")]
	private static extern void GetPropertyName_Injected(IntPtr shader, int propertyIndex, out ManagedSpanWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600060F")]
	[Address(RVA = "0x2EF70E0", Offset = "0x2EF56E0", VA = "0x182EF70E0")]
	private static extern ShaderPropertyType GetPropertyType_Injected(IntPtr shader, int propertyIndex);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000610")]
	[Address(RVA = "0x2EF6D70", Offset = "0x2EF5370", VA = "0x182EF6D70")]
	private static extern ShaderPropertyFlags GetPropertyFlags_Injected(IntPtr shader, int propertyIndex);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000611")]
	[Address(RVA = "0x2EF6CB0", Offset = "0x2EF52B0", VA = "0x182EF6CB0")]
	private static extern int GetPropertyCount_Injected(IntPtr _unity_self);
}
