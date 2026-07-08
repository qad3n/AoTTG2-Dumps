using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.Rendering;

[Token(Token = "0x200031F")]
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

	[Token(Token = "0x6001126")]
	[Address(RVA = "0x4B0EAC0", Offset = "0x4B0EAC0", VA = "0x4B0EAC0")]
	[UnityEngine.Bindings.FreeFunction("keywords::IsKeywordEnabled")]
	private static bool IsKeywordNameEnabled(ShaderKeywordSet state, string name)
	{
		return default(bool);
	}

	[Token(Token = "0x6001127")]
	[Address(RVA = "0x4B0EB40", Offset = "0x4B0EB40", VA = "0x4B0EB40")]
	private void CheckKeywordCompatible(ShaderKeyword keyword)
	{
	}

	[Token(Token = "0x6001128")]
	[Address(RVA = "0x4B0ED10", Offset = "0x4B0ED10", VA = "0x4B0ED10")]
	public bool IsEnabled(ShaderKeyword keyword)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001129")]
	[Address(RVA = "0x4B0EB00", Offset = "0x4B0EB00", VA = "0x4B0EB00")]
	private static extern bool IsKeywordNameEnabled_Injected([In] ref ShaderKeywordSet state, string name);
}
