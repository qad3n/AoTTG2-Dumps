// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Shader
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

[Token(Token = "0x20000E4")]
[UnityEngine.Bindings.NativeHeader("Runtime/Shaders/Keywords/KeywordSpaceScriptBindings.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/ShaderScriptBindings.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Shaders/GpuPrograms/ShaderVariantCollection.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Shaders/ShaderNameRegistry.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Shaders/ComputeShader.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/ShaderScriptBindings.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Misc/ResourceManager.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Shaders/Shader.h")]
public sealed class Shader : Object
{
	[Token(Token = "0x1700011E")]
	public bool isSupported
	{
		[Token(Token = "0x60005F1")]
		[Address(RVA = "0x68DB5B0", Offset = "0x68DA5B0", VA = "0x68DB5B0")]
		[UnityEngine.Bindings.NativeMethod("IsSupported")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700011F")]
	public static string globalRenderPipeline
	{
		[Token(Token = "0x60005F2")]
		[Address(RVA = "0x68DB660", Offset = "0x68DA660", VA = "0x68DB660")]
		get
		{
			return null;
		}
		[Token(Token = "0x60005F3")]
		[Address(RVA = "0x68DB750", Offset = "0x68DA750", VA = "0x68DB750")]
		set
		{
		}
	}

	[Token(Token = "0x17000120")]
	public LocalKeywordSpace keywordSpace
	{
		[Token(Token = "0x60005F4")]
		[Address(RVA = "0x68DB8E0", Offset = "0x68DA8E0", VA = "0x68DB8E0")]
		get
		{
			return default(LocalKeywordSpace);
		}
	}

	[Token(Token = "0x17000121")]
	public int passCount
	{
		[Token(Token = "0x60005FA")]
		[Address(RVA = "0x68DBFA0", Offset = "0x68DAFA0", VA = "0x68DBFA0")]
		[UnityEngine.Bindings.FreeFunction(Name = "ShaderScripting::GetPassCount", HasExplicitThis = true)]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60005F0")]
	[Address(RVA = "0x68DB520", Offset = "0x68DA520", VA = "0x68DB520")]
	public static Shader Find(string name)
	{
		return null;
	}

	[Token(Token = "0x60005F5")]
	[Address(RVA = "0x68DB9B0", Offset = "0x68DA9B0", VA = "0x68DB9B0")]
	[UnityEngine.Bindings.FreeFunction("ShaderScripting::EnableKeyword")]
	public static void EnableKeyword(string keyword)
	{
	}

	[Token(Token = "0x60005F6")]
	[Address(RVA = "0x68DBB40", Offset = "0x68DAB40", VA = "0x68DBB40")]
	[UnityEngine.Bindings.FreeFunction("ShaderScripting::DisableKeyword")]
	public static void DisableKeyword(string keyword)
	{
	}

	[Token(Token = "0x60005F7")]
	[Address(RVA = "0x68DBCD0", Offset = "0x68DACD0", VA = "0x68DBCD0")]
	[UnityEngine.Bindings.FreeFunction("ShaderScripting::TagToID")]
	internal static int TagToID(string name)
	{
		return default(int);
	}

	[Token(Token = "0x60005F8")]
	[Address(RVA = "0x68DBE60", Offset = "0x68DAE60", VA = "0x68DBE60")]
	[UnityEngine.Bindings.FreeFunction("ShaderScripting::IDToTag")]
	internal static string IDToTag(int name)
	{
		return null;
	}

	[Token(Token = "0x60005F9")]
	[Address(RVA = "0x68D8390", Offset = "0x68D7390", VA = "0x68D8390")]
	[UnityEngine.Bindings.FreeFunction(Name = "ShaderScripting::PropertyToID", IsThreadSafe = true)]
	public static int PropertyToID(string name)
	{
		return default(int);
	}

	[Token(Token = "0x60005FB")]
	[Address(RVA = "0x68DC050", Offset = "0x68DB050", VA = "0x68DC050")]
	public ShaderTagId FindPassTagValue(int passIndex, ShaderTagId tagName)
	{
		return default(ShaderTagId);
	}

	[Token(Token = "0x60005FC")]
	[Address(RVA = "0x68DC200", Offset = "0x68DB200", VA = "0x68DC200")]
	[UnityEngine.Bindings.FreeFunction(Name = "ShaderScripting::FindPassTagValue", HasExplicitThis = true)]
	private int Internal_FindPassTagValue(int passIndex, int tagName)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005FD")]
	[Address(RVA = "0x68DC2D0", Offset = "0x68DB2D0", VA = "0x68DC2D0")]
	[UnityEngine.Bindings.FreeFunction("ShaderScripting::SetGlobalFloat")]
	private static extern void SetGlobalFloatImpl(int name, float value);

	[Token(Token = "0x60005FE")]
	[Address(RVA = "0x68DC320", Offset = "0x68DB320", VA = "0x68DC320")]
	[UnityEngine.Bindings.FreeFunction("ShaderScripting::SetGlobalVector")]
	private static void SetGlobalVectorImpl(int name, Vector4 value)
	{
	}

	[Token(Token = "0x60005FF")]
	[Address(RVA = "0x68DC3A0", Offset = "0x68DB3A0", VA = "0x68DC3A0")]
	[UnityEngine.Bindings.FreeFunction("ShaderScripting::SetGlobalTexture")]
	private static void SetGlobalTextureImpl(int name, Texture value)
	{
	}

	[Token(Token = "0x6000600")]
	[Address(RVA = "0x68DC480", Offset = "0x68DB480", VA = "0x68DC480")]
	[UnityEngine.Bindings.FreeFunction("ShaderScripting::SetGlobalConstantBuffer")]
	private static void SetGlobalConstantBufferImpl(int name, ComputeBuffer value, int offset, int size)
	{
	}

	[Token(Token = "0x6000601")]
	[Address(RVA = "0x68DC530", Offset = "0x68DB530", VA = "0x68DC530")]
	public static void SetGlobalFloat(int nameID, float value)
	{
	}

	[Token(Token = "0x6000602")]
	[Address(RVA = "0x68DC580", Offset = "0x68DB580", VA = "0x68DC580")]
	public static void SetGlobalVector(int nameID, Vector4 value)
	{
	}

	[Token(Token = "0x6000603")]
	[Address(RVA = "0x68DC5C0", Offset = "0x68DB5C0", VA = "0x68DC5C0")]
	public static void SetGlobalColor(int nameID, Color value)
	{
	}

	[Token(Token = "0x6000604")]
	[Address(RVA = "0x68DC600", Offset = "0x68DB600", VA = "0x68DC600")]
	public static void SetGlobalTexture(int nameID, Texture value)
	{
	}

	[Token(Token = "0x6000605")]
	[Address(RVA = "0x68DC6A0", Offset = "0x68DB6A0", VA = "0x68DC6A0")]
	public static void SetGlobalConstantBuffer(int nameID, ComputeBuffer value, int offset, int size)
	{
	}

	[Token(Token = "0x6000606")]
	[Address(RVA = "0x68DC700", Offset = "0x68DB700", VA = "0x68DC700")]
	private Shader()
	{
	}

	[Token(Token = "0x6000607")]
	[Address(RVA = "0x68DC770", Offset = "0x68DB770", VA = "0x68DC770")]
	[UnityEngine.Bindings.FreeFunction("ShaderScripting::GetPropertyName")]
	private static string GetPropertyName([UnityEngine.Bindings.NotNull] Shader shader, int propertyIndex)
	{
		return null;
	}

	[Token(Token = "0x6000608")]
	[Address(RVA = "0x68DC910", Offset = "0x68DB910", VA = "0x68DC910")]
	[UnityEngine.Bindings.FreeFunction("ShaderScripting::GetPropertyType")]
	private static ShaderPropertyType GetPropertyType([UnityEngine.Bindings.NotNull] Shader shader, int propertyIndex)
	{
		return default(ShaderPropertyType);
	}

	[Token(Token = "0x6000609")]
	[Address(RVA = "0x68DCA00", Offset = "0x68DBA00", VA = "0x68DCA00")]
	[UnityEngine.Bindings.FreeFunction("ShaderScripting::GetPropertyFlags")]
	private static ShaderPropertyFlags GetPropertyFlags([UnityEngine.Bindings.NotNull] Shader shader, int propertyIndex)
	{
		return default(ShaderPropertyFlags);
	}

	[Token(Token = "0x600060A")]
	[Address(RVA = "0x68DCAF0", Offset = "0x68DBAF0", VA = "0x68DCAF0")]
	private static void CheckPropertyIndex(Shader s, int propertyIndex)
	{
	}

	[Token(Token = "0x600060B")]
	[Address(RVA = "0x68DCBE0", Offset = "0x68DBBE0", VA = "0x68DCBE0")]
	public int GetPropertyCount()
	{
		return default(int);
	}

	[Token(Token = "0x600060C")]
	[Address(RVA = "0x68DCC90", Offset = "0x68DBC90", VA = "0x68DCC90")]
	public string GetPropertyName(int propertyIndex)
	{
		return null;
	}

	[Token(Token = "0x600060D")]
	[Address(RVA = "0x68DCCB0", Offset = "0x68DBCB0", VA = "0x68DCCB0")]
	public ShaderPropertyType GetPropertyType(int propertyIndex)
	{
		return default(ShaderPropertyType);
	}

	[Token(Token = "0x600060E")]
	[Address(RVA = "0x68DCCD0", Offset = "0x68DBCD0", VA = "0x68DCCD0")]
	public ShaderPropertyFlags GetPropertyFlags(int propertyIndex)
	{
		return default(ShaderPropertyFlags);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600060F")]
	[Address(RVA = "0x68DB630", Offset = "0x68DA630", VA = "0x68DB630")]
	private static extern bool get_isSupported_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000610")]
	[Address(RVA = "0x68DB720", Offset = "0x68DA720", VA = "0x68DB720")]
	private static extern void get_globalRenderPipeline_Injected(out ManagedSpanWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000611")]
	[Address(RVA = "0x68DB8B0", Offset = "0x68DA8B0", VA = "0x68DB8B0")]
	private static extern void set_globalRenderPipeline_Injected(ref ManagedSpanWrapper value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000612")]
	[Address(RVA = "0x68DB970", Offset = "0x68DA970", VA = "0x68DB970")]
	private static extern void get_keywordSpace_Injected(IntPtr _unity_self, out LocalKeywordSpace ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000613")]
	[Address(RVA = "0x68DBB10", Offset = "0x68DAB10", VA = "0x68DBB10")]
	private static extern void EnableKeyword_Injected(ref ManagedSpanWrapper keyword);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000614")]
	[Address(RVA = "0x68DBCA0", Offset = "0x68DACA0", VA = "0x68DBCA0")]
	private static extern void DisableKeyword_Injected(ref ManagedSpanWrapper keyword);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000615")]
	[Address(RVA = "0x68DBE30", Offset = "0x68DAE30", VA = "0x68DBE30")]
	private static extern int TagToID_Injected(ref ManagedSpanWrapper name);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000616")]
	[Address(RVA = "0x68DBF30", Offset = "0x68DAF30", VA = "0x68DBF30")]
	private static extern void IDToTag_Injected(int name, out ManagedSpanWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000617")]
	[Address(RVA = "0x68DBF70", Offset = "0x68DAF70", VA = "0x68DBF70")]
	private static extern int PropertyToID_Injected(ref ManagedSpanWrapper name);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000618")]
	[Address(RVA = "0x68DC020", Offset = "0x68DB020", VA = "0x68DC020")]
	private static extern int get_passCount_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000619")]
	[Address(RVA = "0x68DC290", Offset = "0x68DB290", VA = "0x68DC290")]
	private static extern int Internal_FindPassTagValue_Injected(IntPtr _unity_self, int passIndex, int tagName);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600061A")]
	[Address(RVA = "0x68DC360", Offset = "0x68DB360", VA = "0x68DC360")]
	private static extern void SetGlobalVectorImpl_Injected(int name, [In] ref Vector4 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600061B")]
	[Address(RVA = "0x68DC440", Offset = "0x68DB440", VA = "0x68DC440")]
	private static extern void SetGlobalTextureImpl_Injected(int name, IntPtr value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600061C")]
	[Address(RVA = "0x68DC4E0", Offset = "0x68DB4E0", VA = "0x68DC4E0")]
	private static extern void SetGlobalConstantBufferImpl_Injected(int name, IntPtr value, int offset, int size);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600061D")]
	[Address(RVA = "0x68DC8D0", Offset = "0x68DB8D0", VA = "0x68DC8D0")]
	private static extern void GetPropertyName_Injected(IntPtr shader, int propertyIndex, out ManagedSpanWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600061E")]
	[Address(RVA = "0x68DC9C0", Offset = "0x68DB9C0", VA = "0x68DC9C0")]
	private static extern ShaderPropertyType GetPropertyType_Injected(IntPtr shader, int propertyIndex);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600061F")]
	[Address(RVA = "0x68DCAB0", Offset = "0x68DBAB0", VA = "0x68DCAB0")]
	private static extern ShaderPropertyFlags GetPropertyFlags_Injected(IntPtr shader, int propertyIndex);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000620")]
	[Address(RVA = "0x68DCC60", Offset = "0x68DBC60", VA = "0x68DCC60")]
	private static extern int GetPropertyCount_Injected(IntPtr _unity_self);
}
