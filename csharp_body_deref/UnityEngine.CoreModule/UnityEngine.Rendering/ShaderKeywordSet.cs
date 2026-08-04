// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.ShaderKeywordSet
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
using UnityEngine.Scripting;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000322")]
[UnityEngine.Bindings.NativeHeader("Editor/Src/Graphics/ShaderCompilerData.h")]
[UnityEngine.Scripting.UsedByNativeCode]
public struct ShaderKeywordSet
{
	[Token(Token = "0x40009E8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private IntPtr m_KeywordState;

	[Token(Token = "0x40009E9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private IntPtr m_Shader;

	[Token(Token = "0x40009EA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private IntPtr m_ComputeShader;

	[Token(Token = "0x40009EB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private ulong m_StateIndex;

	[Token(Token = "0x6001128")]
	[Address(RVA = "0x4E363F0", Offset = "0x4E363F0", VA = "0x4E363F0")]
	[UnityEngine.Bindings.FreeFunction("keywords::IsKeywordEnabled")]
	private static bool IsKeywordNameEnabled(ShaderKeywordSet state, string name)
	{
		return default(bool);
	}

	[Token(Token = "0x6001129")]
	[Address(RVA = "0x4E36470", Offset = "0x4E36470", VA = "0x4E36470")]
	private void CheckKeywordCompatible(ShaderKeyword keyword)
	{
	}

	[Token(Token = "0x600112A")]
	[Address(RVA = "0x4E36640", Offset = "0x4E36640", VA = "0x4E36640")]
	public bool IsEnabled(ShaderKeyword keyword)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600112B")]
	[Address(RVA = "0x4E36430", Offset = "0x4E36430", VA = "0x4E36430")]
	private static extern bool IsKeywordNameEnabled_Injected([In] ref ShaderKeywordSet state, string name);
}
