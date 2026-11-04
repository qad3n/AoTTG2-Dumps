// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.GlobalKeyword
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

[Token(Token = "0x20003D5")]
[UnityEngine.Bindings.NativeHeader("Runtime/Shaders/Keywords/KeywordSpaceScriptBindings.h")]
[UnityEngine.Scripting.UsedByNativeCode]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/ShaderScriptBindings.h")]
public readonly struct GlobalKeyword
{
	[Token(Token = "0x4000C92")]
	[FieldOffset(Offset = "0x0")]
	internal readonly uint m_Index;

	[Token(Token = "0x170003C6")]
	public string name
	{
		[Token(Token = "0x6001778")]
		[Address(RVA = "0x2F67110", Offset = "0x2F65710", VA = "0x182F67110")]
		get
		{
			return null;
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001772")]
	[Address(RVA = "0x2F66E20", Offset = "0x2F65420", VA = "0x182F66E20")]
	[UnityEngine.Bindings.FreeFunction("ShaderScripting::GetGlobalKeywordCount")]
	private static extern uint GetGlobalKeywordCount();

	[Token(Token = "0x6001773")]
	[Address(RVA = "0x2F66E90", Offset = "0x2F65490", VA = "0x182F66E90")]
	[UnityEngine.Bindings.FreeFunction("ShaderScripting::GetGlobalKeywordIndex")]
	private static uint GetGlobalKeywordIndex(string keyword)
	{
		return default(uint);
	}

	[Token(Token = "0x6001774")]
	[Address(RVA = "0x2F66C60", Offset = "0x2F65260", VA = "0x182F66C60")]
	[UnityEngine.Bindings.FreeFunction("ShaderScripting::CreateGlobalKeyword")]
	private static void CreateGlobalKeyword(string keyword)
	{
	}

	[Token(Token = "0x6001775")]
	[Address(RVA = "0x2F67060", Offset = "0x2F65660", VA = "0x182F67060")]
	[UnityEngine.Bindings.FreeFunction("ShaderScripting::GetGlobalKeywordName")]
	private static string GetGlobalKeywordName(uint keywordIndex)
	{
		return null;
	}

	[Token(Token = "0x6001776")]
	[Address(RVA = "0x2F66DE0", Offset = "0x2F653E0", VA = "0x182F66DE0")]
	public static GlobalKeyword Create(string name)
	{
		return default(GlobalKeyword);
	}

	[Token(Token = "0x6001777")]
	[Address(RVA = "0x2F67120", Offset = "0x2F65720", VA = "0x182F67120")]
	public GlobalKeyword(string name)
	{
	}

	[Token(Token = "0x6001779")]
	[Address(RVA = "0x2F67110", Offset = "0x2F65710", VA = "0x182F67110", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600177A")]
	[Address(RVA = "0x2F66E50", Offset = "0x2F65450", VA = "0x182F66E50")]
	private static extern uint GetGlobalKeywordIndex_Injected(ref ManagedSpanWrapper keyword);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600177B")]
	[Address(RVA = "0x2F66C20", Offset = "0x2F65220", VA = "0x182F66C20")]
	private static extern void CreateGlobalKeyword_Injected(ref ManagedSpanWrapper keyword);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600177C")]
	[Address(RVA = "0x2F67020", Offset = "0x2F65620", VA = "0x182F67020")]
	private static extern void GetGlobalKeywordName_Injected(uint keywordIndex, out ManagedSpanWrapper ret);
}
