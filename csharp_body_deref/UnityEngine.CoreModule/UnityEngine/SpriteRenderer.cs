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

[Token(Token = "0x2000086")]
[UnityEngine.Bindings.NativeType("Runtime/Graphics/Mesh/SpriteRenderer.h")]
[RequireComponent(typeof(Transform))]
public sealed class SpriteRenderer : Renderer
{
	[Token(Token = "0x4000124")]
	[FieldOffset(Offset = "0x18")]
	private UnityEvent<SpriteRenderer> m_SpriteChangeEvent;

	[Token(Token = "0x60001A6")]
	[Address(RVA = "0x2ED4210", Offset = "0x2ED2810", VA = "0x182ED4210")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private void InvokeSpriteChanged()
	{
	}
}
