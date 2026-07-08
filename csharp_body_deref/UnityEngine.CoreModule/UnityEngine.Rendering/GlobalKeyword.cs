using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.Rendering;

[Token(Token = "0x200031A")]
[UnityEngine.Scripting.UsedByNativeCode]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/ShaderScriptBindings.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Shaders/Keywords/KeywordSpaceScriptBindings.h")]
public readonly struct GlobalKeyword
{
	[Token(Token = "0x40009DD")]
	[FieldOffset(Offset = "0x0")]
	internal readonly string m_Name;

	[Token(Token = "0x40009DE")]
	[FieldOffset(Offset = "0x8")]
	internal readonly uint m_Index;

	[Token(Token = "0x600110D")]
	[Address(RVA = "0x4B0DF50", Offset = "0x4B0DF50", VA = "0x4B0DF50", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
