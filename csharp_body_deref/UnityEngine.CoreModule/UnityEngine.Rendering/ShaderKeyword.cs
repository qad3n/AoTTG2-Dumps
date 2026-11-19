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

[Token(Token = "0x20003DA")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/ShaderScriptBindings.h")]
[UnityEngine.Scripting.UsedByNativeCode]
[UnityEngine.Bindings.NativeHeader("Runtime/Shaders/Keywords/KeywordSpaceScriptBindings.h")]
public struct ShaderKeyword
{
	[Token(Token = "0x4000C95")]
	[FieldOffset(Offset = "0x0")]
	internal string m_Name;

	[Token(Token = "0x4000C96")]
	[FieldOffset(Offset = "0x8")]
	internal uint m_Index;

	[Token(Token = "0x4000C97")]
	[FieldOffset(Offset = "0xC")]
	internal bool m_IsLocal;

	[Token(Token = "0x4000C98")]
	[FieldOffset(Offset = "0xD")]
	internal bool m_IsCompute;

	[Token(Token = "0x4000C99")]
	[FieldOffset(Offset = "0xE")]
	internal bool m_IsValid;

	[Token(Token = "0x170003CE")]
	public string name
	{
		[Token(Token = "0x60017AB")]
		[Address(RVA = "0x69696A0", Offset = "0x69686A0", VA = "0x69696A0")]
		get
		{
			return null;
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60017A8")]
	[Address(RVA = "0x6969350", Offset = "0x6968350", VA = "0x6969350")]
	[UnityEngine.Bindings.FreeFunction("ShaderScripting::GetGlobalKeywordCount")]
	internal static extern uint GetGlobalKeywordCount();

	[Token(Token = "0x60017A9")]
	[Address(RVA = "0x6969380", Offset = "0x6968380", VA = "0x6969380")]
	[UnityEngine.Bindings.FreeFunction("ShaderScripting::GetGlobalKeywordIndex")]
	internal static uint GetGlobalKeywordIndex(string keyword)
	{
		return default(uint);
	}

	[Token(Token = "0x60017AA")]
	[Address(RVA = "0x6969510", Offset = "0x6968510", VA = "0x6969510")]
	[UnityEngine.Bindings.FreeFunction("ShaderScripting::CreateGlobalKeyword")]
	internal static void CreateGlobalKeyword(string keyword)
	{
	}

	[Token(Token = "0x60017AC")]
	[Address(RVA = "0x69696B0", Offset = "0x69686B0", VA = "0x69696B0")]
	public ShaderKeyword(string keywordName)
	{
	}

	[Token(Token = "0x60017AD")]
	[Address(RVA = "0x6969730", Offset = "0x6968730", VA = "0x6969730", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60017AE")]
	[Address(RVA = "0x69694E0", Offset = "0x69684E0", VA = "0x69694E0")]
	private static extern uint GetGlobalKeywordIndex_Injected(ref ManagedSpanWrapper keyword);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60017AF")]
	[Address(RVA = "0x6969670", Offset = "0x6968670", VA = "0x6969670")]
	private static extern void CreateGlobalKeyword_Injected(ref ManagedSpanWrapper keyword);
}
