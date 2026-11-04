// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.ShaderKeywordSet
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
using UnityEngine.Scripting;

namespace UnityEngine.Rendering;

[Token(Token = "0x20003DB")]
[UnityEngine.Scripting.UsedByNativeCode]
[UnityEngine.Bindings.NativeHeader("Editor/Src/Graphics/ShaderCompilerData.h")]
public struct ShaderKeywordSet
{
	[Token(Token = "0x4000C9C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private IntPtr m_KeywordState;

	[Token(Token = "0x4000C9D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private IntPtr m_Shader;

	[Token(Token = "0x4000C9E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private IntPtr m_ComputeShader;

	[Token(Token = "0x4000C9F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private ulong m_StateIndex;

	[Token(Token = "0x600179C")]
	[Address(RVA = "0x2F70E30", Offset = "0x2F6F430", VA = "0x182F70E30")]
	[UnityEngine.Bindings.FreeFunction("keywords::IsKeywordEnabled")]
	private static bool IsKeywordNameEnabled(ShaderKeywordSet state, string name)
	{
		return default(bool);
	}

	[Token(Token = "0x600179D")]
	[Address(RVA = "0x2F70CF0", Offset = "0x2F6F2F0", VA = "0x182F70CF0")]
	[UnityEngine.Bindings.FreeFunction("keywords::GetEnabledKeywords")]
	private static ShaderKeyword[] GetEnabledKeywords(ShaderKeywordSet state)
	{
		return null;
	}

	[Token(Token = "0x600179E")]
	[Address(RVA = "0x2F70C20", Offset = "0x2F6F220", VA = "0x182F70C20")]
	private void CheckKeywordCompatible(ShaderKeyword keyword)
	{
	}

	[Token(Token = "0x600179F")]
	[Address(RVA = "0x2F70D30", Offset = "0x2F6F330", VA = "0x182F70D30")]
	public bool IsEnabled(ShaderKeyword keyword)
	{
		return default(bool);
	}

	[Token(Token = "0x60017A0")]
	[Address(RVA = "0x2F71000", Offset = "0x2F6F600", VA = "0x182F71000", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60017A1")]
	[Address(RVA = "0x2F70FD0", Offset = "0x2F6F5D0", VA = "0x182F70FD0")]
	private static int ShaderKeywordComparer(ShaderKeyword kw1, ShaderKeyword kw2)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60017A2")]
	[Address(RVA = "0x2F70DE0", Offset = "0x2F6F3E0", VA = "0x182F70DE0")]
	private static extern bool IsKeywordNameEnabled_Injected([In] ref ShaderKeywordSet state, ref ManagedSpanWrapper name);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60017A3")]
	[Address(RVA = "0x2F70CB0", Offset = "0x2F6F2B0", VA = "0x182F70CB0")]
	private static extern ShaderKeyword[] GetEnabledKeywords_Injected([In] ref ShaderKeywordSet state);
}
