// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.GlobalKeyword
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

[Token(Token = "0x20003D5")]
[UnityEngine.Bindings.NativeHeader("Runtime/Shaders/Keywords/KeywordSpaceScriptBindings.h")]
[UnityEngine.Scripting.UsedByNativeCode]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/ShaderScriptBindings.h")]
public readonly struct GlobalKeyword
{
	[Token(Token = "0x4000C90")]
	[FieldOffset(Offset = "0x0")]
	internal readonly uint m_Index;

	[Token(Token = "0x170003CB")]
	public string name
	{
		[Token(Token = "0x600178C")]
		[Address(RVA = "0x69686B0", Offset = "0x69676B0", VA = "0x69686B0")]
		get
		{
			return null;
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001786")]
	[Address(RVA = "0x6968100", Offset = "0x6967100", VA = "0x6968100")]
	[UnityEngine.Bindings.FreeFunction("ShaderScripting::GetGlobalKeywordCount")]
	private static extern uint GetGlobalKeywordCount();

	[Token(Token = "0x6001787")]
	[Address(RVA = "0x6968130", Offset = "0x6967130", VA = "0x6968130")]
	[UnityEngine.Bindings.FreeFunction("ShaderScripting::GetGlobalKeywordIndex")]
	private static uint GetGlobalKeywordIndex(string keyword)
	{
		return default(uint);
	}

	[Token(Token = "0x6001788")]
	[Address(RVA = "0x69682C0", Offset = "0x69672C0", VA = "0x69682C0")]
	[UnityEngine.Bindings.FreeFunction("ShaderScripting::CreateGlobalKeyword")]
	private static void CreateGlobalKeyword(string keyword)
	{
	}

	[Token(Token = "0x6001789")]
	[Address(RVA = "0x6968450", Offset = "0x6967450", VA = "0x6968450")]
	[UnityEngine.Bindings.FreeFunction("ShaderScripting::GetGlobalKeywordName")]
	private static string GetGlobalKeywordName(uint keywordIndex)
	{
		return null;
	}

	[Token(Token = "0x600178A")]
	[Address(RVA = "0x6968560", Offset = "0x6967560", VA = "0x6968560")]
	public static GlobalKeyword Create(string name)
	{
		return default(GlobalKeyword);
	}

	[Token(Token = "0x600178B")]
	[Address(RVA = "0x6968590", Offset = "0x6967590", VA = "0x6968590")]
	public GlobalKeyword(string name)
	{
	}

	[Token(Token = "0x600178D")]
	[Address(RVA = "0x69686C0", Offset = "0x69676C0", VA = "0x69686C0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600178E")]
	[Address(RVA = "0x6968290", Offset = "0x6967290", VA = "0x6968290")]
	private static extern uint GetGlobalKeywordIndex_Injected(ref ManagedSpanWrapper keyword);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600178F")]
	[Address(RVA = "0x6968420", Offset = "0x6967420", VA = "0x6968420")]
	private static extern void CreateGlobalKeyword_Injected(ref ManagedSpanWrapper keyword);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001790")]
	[Address(RVA = "0x6968520", Offset = "0x6967520", VA = "0x6968520")]
	private static extern void GetGlobalKeywordName_Injected(uint keywordIndex, out ManagedSpanWrapper ret);
}
