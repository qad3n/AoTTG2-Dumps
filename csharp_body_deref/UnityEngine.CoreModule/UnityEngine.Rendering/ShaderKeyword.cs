// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.ShaderKeyword
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.Rendering;

[Token(Token = "0x20003DA")]
[UnityEngine.Scripting.UsedByNativeCode]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/ShaderScriptBindings.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Shaders/Keywords/KeywordSpaceScriptBindings.h")]
public struct ShaderKeyword
{
	[Token(Token = "0x4000C97")]
	[FieldOffset(Offset = "0x0")]
	internal string m_Name;

	[Token(Token = "0x4000C98")]
	[FieldOffset(Offset = "0x8")]
	internal uint m_Index;

	[Token(Token = "0x4000C99")]
	[FieldOffset(Offset = "0xC")]
	internal bool m_IsLocal;

	[Token(Token = "0x4000C9A")]
	[FieldOffset(Offset = "0xD")]
	internal bool m_IsCompute;

	[Token(Token = "0x4000C9B")]
	[FieldOffset(Offset = "0xE")]
	internal bool m_IsValid;

	[Token(Token = "0x170003C9")]
	public string name
	{
		[Token(Token = "0x6001797")]
		[Address(RVA = "0x737B90", Offset = "0x736190", VA = "0x180737B90")]
		get
		{
			return null;
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001794")]
	[Address(RVA = "0x2F712A0", Offset = "0x2F6F8A0", VA = "0x182F712A0")]
	[UnityEngine.Bindings.FreeFunction("ShaderScripting::GetGlobalKeywordCount")]
	internal static extern uint GetGlobalKeywordCount();

	[Token(Token = "0x6001795")]
	[Address(RVA = "0x2F71310", Offset = "0x2F6F910", VA = "0x182F71310")]
	[UnityEngine.Bindings.FreeFunction("ShaderScripting::GetGlobalKeywordIndex")]
	internal static uint GetGlobalKeywordIndex(string keyword)
	{
		return default(uint);
	}

	[Token(Token = "0x6001796")]
	[Address(RVA = "0x2F71120", Offset = "0x2F6F720", VA = "0x182F71120")]
	[UnityEngine.Bindings.FreeFunction("ShaderScripting::CreateGlobalKeyword")]
	internal static void CreateGlobalKeyword(string keyword)
	{
	}

	[Token(Token = "0x6001798")]
	[Address(RVA = "0x2F714A0", Offset = "0x2F6FAA0", VA = "0x182F714A0")]
	public ShaderKeyword(string keywordName)
	{
	}

	[Token(Token = "0x6001799")]
	[Address(RVA = "0x737B90", Offset = "0x736190", VA = "0x180737B90", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600179A")]
	[Address(RVA = "0x2F712D0", Offset = "0x2F6F8D0", VA = "0x182F712D0")]
	private static extern uint GetGlobalKeywordIndex_Injected(ref ManagedSpanWrapper keyword);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600179B")]
	[Address(RVA = "0x2F710E0", Offset = "0x2F6F6E0", VA = "0x182F710E0")]
	private static extern void CreateGlobalKeyword_Injected(ref ManagedSpanWrapper keyword);
}
