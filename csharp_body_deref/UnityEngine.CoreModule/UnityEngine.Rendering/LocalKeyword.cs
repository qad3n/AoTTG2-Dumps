using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.Rendering;

[Token(Token = "0x200031B")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/ShaderScriptBindings.h")]
[UnityEngine.Scripting.UsedByNativeCode]
[UnityEngine.Bindings.NativeHeader("Runtime/Shaders/Keywords/KeywordSpaceScriptBindings.h")]
public readonly struct LocalKeyword : IEquatable<LocalKeyword>
{
	[Token(Token = "0x40009DF")]
	[FieldOffset(Offset = "0x0")]
	internal readonly LocalKeywordSpace m_SpaceInfo;

	[Token(Token = "0x40009E0")]
	[FieldOffset(Offset = "0x8")]
	internal readonly string m_Name;

	[Token(Token = "0x40009E1")]
	[FieldOffset(Offset = "0x10")]
	internal readonly uint m_Index;

	[Token(Token = "0x600110E")]
	[Address(RVA = "0x4B0DF60", Offset = "0x4B0DF60", VA = "0x4B0DF60")]
	[UnityEngine.Bindings.FreeFunction("ShaderScripting::GetKeywordCount")]
	private static uint GetShaderKeywordCount(Shader shader)
	{
		return default(uint);
	}

	[Token(Token = "0x600110F")]
	[Address(RVA = "0x4B0E040", Offset = "0x4B0E040", VA = "0x4B0E040")]
	[UnityEngine.Bindings.FreeFunction("ShaderScripting::GetKeywordIndex")]
	private static uint GetShaderKeywordIndex(Shader shader, string keyword)
	{
		return default(uint);
	}

	[Token(Token = "0x6001110")]
	[Address(RVA = "0x4B0E130", Offset = "0x4B0E130", VA = "0x4B0E130")]
	[UnityEngine.Bindings.FreeFunction("ShaderScripting::GetKeywordCount")]
	private static uint GetComputeShaderKeywordCount(ComputeShader shader)
	{
		return default(uint);
	}

	[Token(Token = "0x6001111")]
	[Address(RVA = "0x4B0E210", Offset = "0x4B0E210", VA = "0x4B0E210")]
	[UnityEngine.Bindings.FreeFunction("ShaderScripting::GetKeywordIndex")]
	private static uint GetComputeShaderKeywordIndex(ComputeShader shader, string keyword)
	{
		return default(uint);
	}

	[Token(Token = "0x6001112")]
	[Address(RVA = "0x4B0E300", Offset = "0x4B0E300", VA = "0x4B0E300")]
	public LocalKeyword(Shader shader, string name)
	{
	}

	[Token(Token = "0x6001113")]
	[Address(RVA = "0x4B0E570", Offset = "0x4B0E570", VA = "0x4B0E570")]
	public LocalKeyword(ComputeShader shader, string name)
	{
	}

	[Token(Token = "0x6001114")]
	[Address(RVA = "0x4B0E7E0", Offset = "0x4B0E7E0", VA = "0x4B0E7E0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6001115")]
	[Address(RVA = "0x4B0E7F0", Offset = "0x4B0E7F0", VA = "0x4B0E7F0", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[Token(Token = "0x6001116")]
	[Address(RVA = "0x4B0E860", Offset = "0x4B0E860", VA = "0x4B0E860", Slot = "4")]
	public bool Equals(LocalKeyword rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001117")]
	[Address(RVA = "0x4B0E890", Offset = "0x4B0E890", VA = "0x4B0E890", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001118")]
	[Address(RVA = "0x4B0E010", Offset = "0x4B0E010", VA = "0x4B0E010")]
	private static extern uint GetShaderKeywordCount_Injected(IntPtr shader);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001119")]
	[Address(RVA = "0x4B0E0F0", Offset = "0x4B0E0F0", VA = "0x4B0E0F0")]
	private static extern uint GetShaderKeywordIndex_Injected(IntPtr shader, string keyword);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600111A")]
	[Address(RVA = "0x4B0E1E0", Offset = "0x4B0E1E0", VA = "0x4B0E1E0")]
	private static extern uint GetComputeShaderKeywordCount_Injected(IntPtr shader);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600111B")]
	[Address(RVA = "0x4B0E2C0", Offset = "0x4B0E2C0", VA = "0x4B0E2C0")]
	private static extern uint GetComputeShaderKeywordIndex_Injected(IntPtr shader, string keyword);
}
