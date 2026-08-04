// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.SpriteRenderer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Events;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x20001AB")]
[UnityEngine.Bindings.NativeType("Runtime/Graphics/Mesh/SpriteRenderer.h")]
[RequireComponent(typeof(Transform))]
public sealed class SpriteRenderer : Renderer
{
	[Token(Token = "0x4000615")]
	[FieldOffset(Offset = "0x18")]
	private UnityEvent<SpriteRenderer> m_SpriteChangeEvent;

	[Token(Token = "0x6000C72")]
	[Address(RVA = "0x4E0BEA0", Offset = "0x4E0BEA0", VA = "0x4E0BEA0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private void InvokeSpriteChanged()
	{
	}
}
