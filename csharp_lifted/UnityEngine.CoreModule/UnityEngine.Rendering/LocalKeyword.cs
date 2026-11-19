// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.LocalKeyword
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.Rendering;

[Token(Token = "0x20003D6")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/ShaderScriptBindings.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Shaders/Keywords/KeywordSpaceScriptBindings.h")]
[UnityEngine.Scripting.UsedByNativeCode]
public readonly struct LocalKeyword : IEquatable<LocalKeyword>
{
	[Token(Token = "0x4000C91")]
	[FieldOffset(Offset = "0x0")]
	internal readonly LocalKeywordSpace m_SpaceInfo;

	[Token(Token = "0x4000C92")]
	[FieldOffset(Offset = "0x8")]
	internal readonly string m_Name;

	[Token(Token = "0x4000C93")]
	[FieldOffset(Offset = "0x10")]
	internal readonly uint m_Index;

	[Token(Token = "0x6001791")]
	[Address(RVA = "0x69686D0", Offset = "0x69676D0", VA = "0x69686D0")]
	[UnityEngine.Bindings.FreeFunction("ShaderScripting::GetKeywordCount")]
	private static uint GetShaderKeywordCount(Shader shader)
	{
		return default(uint);
	}

	[Token(Token = "0x6001792")]
	[Address(RVA = "0x6968790", Offset = "0x6967790", VA = "0x6968790")]
	[UnityEngine.Bindings.FreeFunction("ShaderScripting::GetKeywordIndex")]
	private static uint GetShaderKeywordIndex(Shader shader, string keyword)
	{
		return default(uint);
	}

	[Token(Token = "0x6001793")]
	[Address(RVA = "0x6968980", Offset = "0x6967980", VA = "0x6968980")]
	[UnityEngine.Bindings.FreeFunction("ShaderScripting::GetKeywordCount")]
	private static uint GetComputeShaderKeywordCount(ComputeShader shader)
	{
		return default(uint);
	}

	[Token(Token = "0x6001794")]
	[Address(RVA = "0x6968A40", Offset = "0x6967A40", VA = "0x6968A40")]
	[UnityEngine.Bindings.FreeFunction("ShaderScripting::GetKeywordIndex")]
	private static uint GetComputeShaderKeywordIndex(ComputeShader shader, string keyword)
	{
		return default(uint);
	}

	[Token(Token = "0x6001795")]
	[Address(RVA = "0x6968C30", Offset = "0x6967C30", VA = "0x6968C30")]
	public LocalKeyword(Shader shader, string name)
	{
	}

	[Token(Token = "0x6001796")]
	[Address(RVA = "0x6968E50", Offset = "0x6967E50", VA = "0x6968E50")]
	public LocalKeyword(ComputeShader shader, string name)
	{
	}

	[Token(Token = "0x6001797")]
	[Address(RVA = "0x6969070", Offset = "0x6968070", VA = "0x6969070", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6001798")]
	[Address(RVA = "0x6969080", Offset = "0x6968080", VA = "0x6969080", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[Token(Token = "0x6001799")]
	[Address(RVA = "0x69690F0", Offset = "0x69680F0", VA = "0x69690F0", Slot = "4")]
	public bool Equals(LocalKeyword rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x600179A")]
	[Address(RVA = "0x6969120", Offset = "0x6968120", VA = "0x6969120", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600179B")]
	[Address(RVA = "0x6968760", Offset = "0x6967760", VA = "0x6968760")]
	private static extern uint GetShaderKeywordCount_Injected(IntPtr shader);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600179C")]
	[Address(RVA = "0x6968940", Offset = "0x6967940", VA = "0x6968940")]
	private static extern uint GetShaderKeywordIndex_Injected(IntPtr shader, ref ManagedSpanWrapper keyword);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600179D")]
	[Address(RVA = "0x6968A10", Offset = "0x6967A10", VA = "0x6968A10")]
	private static extern uint GetComputeShaderKeywordCount_Injected(IntPtr shader);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600179E")]
	[Address(RVA = "0x6968BF0", Offset = "0x6967BF0", VA = "0x6968BF0")]
	private static extern uint GetComputeShaderKeywordIndex_Injected(IntPtr shader, ref ManagedSpanWrapper keyword);
}
