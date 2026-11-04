// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.LocalKeyword
// Update status: CHANGED in this game update
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
	[Token(Token = "0x4000C93")]
	[FieldOffset(Offset = "0x0")]
	internal readonly LocalKeywordSpace m_SpaceInfo;

	[Token(Token = "0x4000C94")]
	[FieldOffset(Offset = "0x8")]
	internal readonly string m_Name;

	[Token(Token = "0x4000C95")]
	[FieldOffset(Offset = "0x10")]
	internal readonly uint m_Index;

	[Token(Token = "0x600177D")]
	[Address(RVA = "0x2F67F80", Offset = "0x2F66580", VA = "0x182F67F80")]
	[UnityEngine.Bindings.FreeFunction("ShaderScripting::GetKeywordCount")]
	private static uint GetShaderKeywordCount(Shader shader)
	{
		return default(uint);
	}

	[Token(Token = "0x600177E")]
	[Address(RVA = "0x2F68040", Offset = "0x2F66640", VA = "0x182F68040")]
	[UnityEngine.Bindings.FreeFunction("ShaderScripting::GetKeywordIndex")]
	private static uint GetShaderKeywordIndex(Shader shader, string keyword)
	{
		return default(uint);
	}

	[Token(Token = "0x600177F")]
	[Address(RVA = "0x2F67C70", Offset = "0x2F66270", VA = "0x182F67C70")]
	[UnityEngine.Bindings.FreeFunction("ShaderScripting::GetKeywordCount")]
	private static uint GetComputeShaderKeywordCount(ComputeShader shader)
	{
		return default(uint);
	}

	[Token(Token = "0x6001780")]
	[Address(RVA = "0x2F67D30", Offset = "0x2F66330", VA = "0x182F67D30")]
	[UnityEngine.Bindings.FreeFunction("ShaderScripting::GetKeywordIndex")]
	private static uint GetComputeShaderKeywordIndex(ComputeShader shader, string keyword)
	{
		return default(uint);
	}

	[Token(Token = "0x6001781")]
	[Address(RVA = "0x2F68400", Offset = "0x2F66A00", VA = "0x182F68400")]
	public LocalKeyword(Shader shader, string name)
	{
	}

	[Token(Token = "0x6001782")]
	[Address(RVA = "0x2F68210", Offset = "0x2F66810", VA = "0x182F68210")]
	public LocalKeyword(ComputeShader shader, string name)
	{
	}

	[Token(Token = "0x6001783")]
	[Address(RVA = "0x1B943C0", Offset = "0x1B929C0", VA = "0x181B943C0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6001784")]
	[Address(RVA = "0x2F67B60", Offset = "0x2F66160", VA = "0x182F67B60", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[Token(Token = "0x6001785")]
	[Address(RVA = "0x2F67C00", Offset = "0x2F66200", VA = "0x182F67C00", Slot = "4")]
	public bool Equals(LocalKeyword rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001786")]
	[Address(RVA = "0x2F67F00", Offset = "0x2F66500", VA = "0x182F67F00", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001787")]
	[Address(RVA = "0x2F67F40", Offset = "0x2F66540", VA = "0x182F67F40")]
	private static extern uint GetShaderKeywordCount_Injected(IntPtr shader);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001788")]
	[Address(RVA = "0x2F67FF0", Offset = "0x2F665F0", VA = "0x182F67FF0")]
	private static extern uint GetShaderKeywordIndex_Injected(IntPtr shader, ref ManagedSpanWrapper keyword);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001789")]
	[Address(RVA = "0x2F67C30", Offset = "0x2F66230", VA = "0x182F67C30")]
	private static extern uint GetComputeShaderKeywordCount_Injected(IntPtr shader);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600178A")]
	[Address(RVA = "0x2F67CE0", Offset = "0x2F662E0", VA = "0x182F67CE0")]
	private static extern uint GetComputeShaderKeywordIndex_Injected(IntPtr shader, ref ManagedSpanWrapper keyword);
}
