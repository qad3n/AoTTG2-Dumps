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

[Token(Token = "0x200031E")]
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

	[Token(Token = "0x6001110")]
	[Address(RVA = "0x4E35890", Offset = "0x4E35890", VA = "0x4E35890")]
	[UnityEngine.Bindings.FreeFunction("ShaderScripting::GetKeywordCount")]
	private static uint GetShaderKeywordCount(Shader shader)
	{
		return default(uint);
	}

	[Token(Token = "0x6001111")]
	[Address(RVA = "0x4E35970", Offset = "0x4E35970", VA = "0x4E35970")]
	[UnityEngine.Bindings.FreeFunction("ShaderScripting::GetKeywordIndex")]
	private static uint GetShaderKeywordIndex(Shader shader, string keyword)
	{
		return default(uint);
	}

	[Token(Token = "0x6001112")]
	[Address(RVA = "0x4E35A60", Offset = "0x4E35A60", VA = "0x4E35A60")]
	[UnityEngine.Bindings.FreeFunction("ShaderScripting::GetKeywordCount")]
	private static uint GetComputeShaderKeywordCount(ComputeShader shader)
	{
		return default(uint);
	}

	[Token(Token = "0x6001113")]
	[Address(RVA = "0x4E35B40", Offset = "0x4E35B40", VA = "0x4E35B40")]
	[UnityEngine.Bindings.FreeFunction("ShaderScripting::GetKeywordIndex")]
	private static uint GetComputeShaderKeywordIndex(ComputeShader shader, string keyword)
	{
		return default(uint);
	}

	[Token(Token = "0x6001114")]
	[Address(RVA = "0x4E35C30", Offset = "0x4E35C30", VA = "0x4E35C30")]
	public LocalKeyword(Shader shader, string name)
	{
	}

	[Token(Token = "0x6001115")]
	[Address(RVA = "0x4E35EA0", Offset = "0x4E35EA0", VA = "0x4E35EA0")]
	public LocalKeyword(ComputeShader shader, string name)
	{
	}

	[Token(Token = "0x6001116")]
	[Address(RVA = "0x4E36110", Offset = "0x4E36110", VA = "0x4E36110", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6001117")]
	[Address(RVA = "0x4E36120", Offset = "0x4E36120", VA = "0x4E36120", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[Token(Token = "0x6001118")]
	[Address(RVA = "0x4E36190", Offset = "0x4E36190", VA = "0x4E36190", Slot = "4")]
	public bool Equals(LocalKeyword rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001119")]
	[Address(RVA = "0x4E361C0", Offset = "0x4E361C0", VA = "0x4E361C0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600111A")]
	[Address(RVA = "0x4E35940", Offset = "0x4E35940", VA = "0x4E35940")]
	private static extern uint GetShaderKeywordCount_Injected(IntPtr shader);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600111B")]
	[Address(RVA = "0x4E35A20", Offset = "0x4E35A20", VA = "0x4E35A20")]
	private static extern uint GetShaderKeywordIndex_Injected(IntPtr shader, string keyword);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600111C")]
	[Address(RVA = "0x4E35B10", Offset = "0x4E35B10", VA = "0x4E35B10")]
	private static extern uint GetComputeShaderKeywordCount_Injected(IntPtr shader);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600111D")]
	[Address(RVA = "0x4E35BF0", Offset = "0x4E35BF0", VA = "0x4E35BF0")]
	private static extern uint GetComputeShaderKeywordIndex_Injected(IntPtr shader, string keyword);
}
