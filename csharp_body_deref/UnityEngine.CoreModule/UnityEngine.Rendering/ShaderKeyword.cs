// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.ShaderKeyword
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000321")]
[UnityEngine.Scripting.UsedByNativeCode]
[UnityEngine.Bindings.NativeHeader("Runtime/Shaders/Keywords/KeywordSpaceScriptBindings.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/ShaderScriptBindings.h")]
public struct ShaderKeyword
{
	[Token(Token = "0x40009E3")]
	[FieldOffset(Offset = "0x0")]
	internal string m_Name;

	[Token(Token = "0x40009E4")]
	[FieldOffset(Offset = "0x8")]
	internal uint m_Index;

	[Token(Token = "0x40009E5")]
	[FieldOffset(Offset = "0xC")]
	internal bool m_IsLocal;

	[Token(Token = "0x40009E6")]
	[FieldOffset(Offset = "0xD")]
	internal bool m_IsCompute;

	[Token(Token = "0x40009E7")]
	[FieldOffset(Offset = "0xE")]
	internal bool m_IsValid;

	[Token(Token = "0x170002B9")]
	public string name
	{
		[Token(Token = "0x6001125")]
		[Address(RVA = "0x4E36300", Offset = "0x4E36300", VA = "0x4E36300")]
		get
		{
			return null;
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001122")]
	[Address(RVA = "0x4E36270", Offset = "0x4E36270", VA = "0x4E36270")]
	[UnityEngine.Bindings.FreeFunction("ShaderScripting::GetGlobalKeywordCount")]
	internal static extern uint GetGlobalKeywordCount();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001123")]
	[Address(RVA = "0x4E362A0", Offset = "0x4E362A0", VA = "0x4E362A0")]
	[UnityEngine.Bindings.FreeFunction("ShaderScripting::GetGlobalKeywordIndex")]
	internal static extern uint GetGlobalKeywordIndex(string keyword);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001124")]
	[Address(RVA = "0x4E362D0", Offset = "0x4E362D0", VA = "0x4E362D0")]
	[UnityEngine.Bindings.FreeFunction("ShaderScripting::CreateGlobalKeyword")]
	internal static extern void CreateGlobalKeyword(string keyword);

	[Token(Token = "0x6001126")]
	[Address(RVA = "0x4E36310", Offset = "0x4E36310", VA = "0x4E36310")]
	public ShaderKeyword(string keywordName)
	{
	}

	[Token(Token = "0x6001127")]
	[Address(RVA = "0x4E363E0", Offset = "0x4E363E0", VA = "0x4E363E0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
